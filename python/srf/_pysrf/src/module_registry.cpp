/**
 * SPDX-FileCopyrightText: Copyright (c) 2021-2022, NVIDIA CORPORATION & AFFILIATES. All rights reserved.
 * SPDX-License-Identifier: Apache-2.0
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include "pysrf/module_registry.hpp"

#include "pysrf/py_segment_module.hpp"
#include "pysrf/utils.hpp"

#include "srf/experimental/modules/module_registry.hpp"

#include <pybind11/cast.h>
#include <pybind11/pybind11.h>
#include <pybind11/pytypes.h>
#include <pybind11/stl.h>

#include <memory>

namespace srf::pysrf {
namespace py = pybind11;

bool ModuleRegistryProxy::contains_namespace(ModuleRegistryProxy& self, const std::string& registry_namespace)
{
    return modules::ModuleRegistry::contains_namespace(registry_namespace);
}

bool ModuleRegistryProxy::contains(ModuleRegistryProxy& self,
                                   const std::string& name,
                                   const std::string& registry_namespace)
{
    return modules::ModuleRegistry::contains(name, registry_namespace);
}

std::map<std::string, std::vector<std::string>> ModuleRegistryProxy::registered_modules(ModuleRegistryProxy& self)
{
    return modules::ModuleRegistry::registered_modules();
}

bool ModuleRegistryProxy::is_version_compatible(ModuleRegistryProxy& self,
                                                const std::vector<unsigned int>& release_version)
{
    return modules::ModuleRegistry::is_version_compatible(release_version);
}

std::shared_ptr<modules::SegmentModule> ModuleRegistryProxy::find_module(ModuleRegistryProxy& self,
                                                                         const std::string& name,
                                                                         const std::string& registry_namespace,
                                                                         const std::string& module_name,
                                                                         py::dict module_config)
{
    auto json_config           = cast_from_pyobject(module_config);
    auto fn_module_constructor = modules::ModuleRegistry::find_module(name, registry_namespace);
    auto module                = std::move(fn_module_constructor(std::move(module_name), std::move(json_config)));
    return std::move(module);
}

void ModuleRegistryProxy::register_module(ModuleRegistryProxy& self,
                                          std::string name,
                                          const std::vector<unsigned int>& release_version,
                                          PythonSegmentModule::py_initializer_t fn_py_initializer)
{
    register_module(self, name, "default", release_version, fn_py_initializer);
}

void ModuleRegistryProxy::register_module(srf::pysrf::ModuleRegistryProxy& self,
                                          std::string name,
                                          std::string registry_namespace,
                                          const std::vector<unsigned int>& release_version,
                                          std::function<void(srf::segment::Builder&)> fn_py_initializer)
{
    VLOG(2) << "Registering python module: " << registry_namespace << "::" << name;
    auto fn_constructor = [fn_py_initializer](std::string name, nlohmann::json config) {
        auto module             = std::make_shared<PythonSegmentModule>(std::move(name), std::move(config));
        module->m_py_initialize = fn_py_initializer;

        return module;
    };

    srf::modules::ModuleRegistry::register_module(name, registry_namespace, release_version, fn_constructor);

    register_module_cleanup_fn(name, registry_namespace);
}

void ModuleRegistryProxy::unregister_module(ModuleRegistryProxy& self,
                                            const std::string& name,
                                            const std::string& registry_namespace,
                                            bool optional)
{
    return modules::ModuleRegistry::unregister_module(name, registry_namespace, optional);
}

/**
 * When we register python modules, we have to capture a python-land initializer function, which is in turn
 * stored in the ModuleRegistry -- a global static struct. If the registered modules that capture a python
 * function are not unregistered when the python interpreter exits, it will hang, waiting on their ref counts
 * to drop to zero. To ensure this doesn't happen, we register an atexit callback here that forces all python
 * modules to be unregistered when the interpreter is shut down.
 * @param name Name of the module
 * @param registry_namespace Namespace of the module
 */
static void register_module_cleanup_fn(const std::string& name, const std::string& registry_namespace)
{
    auto at_exit = pybind11::module_::import("atexit");
    at_exit.attr("register")(pybind11::cpp_function([name, registry_namespace]() {
        VLOG(2) << "(atexit) Unregistering " << registry_namespace << "::" << name;

        // Try unregister -- ignore if already unregistered
        modules::ModuleRegistry::unregister_module(name, registry_namespace, true);
    }));
}
};  // namespace srf::pysrf
