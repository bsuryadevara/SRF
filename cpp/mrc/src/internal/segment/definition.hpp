/**
 * SPDX-FileCopyrightText: Copyright (c) 2021-2023, NVIDIA CORPORATION & AFFILIATES. All rights reserved.
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

#pragma once

#include "mrc/segment/initializers.hpp"
#include "mrc/types.hpp"

#include <map>
#include <string>
#include <vector>

namespace mrc::internal::segment {

class Definition final
{
  public:
    Definition(std::string name,
               std::map<std::string, ::mrc::segment::ingress_initializer_t> ingress_initializers,
               std::map<std::string, ::mrc::segment::egress_initializer_t> egress_initializers,
               ::mrc::segment::backend_initializer_fn_t backend_initializer);

    const std::string& name() const;
    SegmentID id() const;
    std::vector<std::string> ingress_port_names() const;
    std::vector<std::string> egress_port_names() const;

    const ::mrc::segment::backend_initializer_fn_t& initializer_fn() const;
    const std::map<std::string, ::mrc::segment::egress_initializer_t>& egress_initializers() const;
    const std::map<std::string, ::mrc::segment::ingress_initializer_t>& ingress_initializers() const;

  private:
    void validate_ports() const;

    std::string m_name;
    SegmentID m_id;
    ::mrc::segment::backend_initializer_fn_t m_backend_initializer;
    std::map<std::string, ::mrc::segment::egress_initializer_t> m_egress_initializers;
    std::map<std::string, ::mrc::segment::ingress_initializer_t> m_ingress_initializers;
};

}  // namespace mrc::internal::segment
