# MRC 23.01.00 (30 Jan 2023)

## 🚨 Breaking Changes

- Non-Linear pipelines and Non-Runnable Nodes ([#261](https://github.com/nv-morpheus/MRC/pull/261)) [@mdemoret-nv](https://github.com/mdemoret-nv)
- Update Versions for 23.01 ([#242](https://github.com/nv-morpheus/MRC/pull/242)) [@mdemoret-nv](https://github.com/mdemoret-nv)
- Upgrade to C++20 ([#230](https://github.com/nv-morpheus/MRC/pull/230)) [@ryanolson](https://github.com/ryanolson)
- MRC Rename ([#221](https://github.com/nv-morpheus/MRC/pull/221)) [@ryanolson](https://github.com/ryanolson)
- Distributed Runtime ([#218](https://github.com/nv-morpheus/MRC/pull/218)) [@ryanolson](https://github.com/ryanolson)

## 🐛 Bug Fixes

- Add handling for empty downstream sources ([#279](https://github.com/nv-morpheus/MRC/pull/279)) [@mdemoret-nv](https://github.com/mdemoret-nv)
- Removing TL Expected ([#278](https://github.com/nv-morpheus/MRC/pull/278)) [@mdemoret-nv](https://github.com/mdemoret-nv)
- Fix function wrappers with `functools.partial` ([#277](https://github.com/nv-morpheus/MRC/pull/277)) [@mdemoret-nv](https://github.com/mdemoret-nv)
- Reverting relative paths for git submodules ([#274](https://github.com/nv-morpheus/MRC/pull/274)) [@mdemoret-nv](https://github.com/mdemoret-nv)
- rename morpheus_utils_configure_boost_* to use new utilities naming ([#272](https://github.com/nv-morpheus/MRC/pull/272)) [@cwharris](https://github.com/cwharris)
- Bump utilities version ([#269](https://github.com/nv-morpheus/MRC/pull/269)) [@drobison00](https://github.com/drobison00)
- Missing &lt;unordered_map&gt; header; caught by gcc12 ([#256](https://github.com/nv-morpheus/MRC/pull/256)) [@ryanolson](https://github.com/ryanolson)
- Fix potential race condition ([#248](https://github.com/nv-morpheus/MRC/pull/248)) [@ryanolson](https://github.com/ryanolson)
- codecov updates ([#233](https://github.com/nv-morpheus/MRC/pull/233)) [@dagardner-nv](https://github.com/dagardner-nv)
- Ensure interpreter is properly initialized, minor test fixes ([#220](https://github.com/nv-morpheus/MRC/pull/220)) [@drobison00](https://github.com/drobison00)

## 📖 Documentation

- update clone instructions to include --recurse-submodules ([#271](https://github.com/nv-morpheus/MRC/pull/271)) [@cwharris](https://github.com/cwharris)

## 🚀 New Features

- Non-Linear pipelines and Non-Runnable Nodes ([#261](https://github.com/nv-morpheus/MRC/pull/261)) [@mdemoret-nv](https://github.com/mdemoret-nv)
- C++20 Coroutines ([#244](https://github.com/nv-morpheus/MRC/pull/244)) [@ryanolson](https://github.com/ryanolson)
- Development container image ([#236](https://github.com/nv-morpheus/MRC/pull/236)) [@ryanolson](https://github.com/ryanolson)
- Workspace Update to allow indentation in CMake argument blocks ([#234](https://github.com/nv-morpheus/MRC/pull/234)) [@ryanolson](https://github.com/ryanolson)
- Upgrade to C++20 ([#230](https://github.com/nv-morpheus/MRC/pull/230)) [@ryanolson](https://github.com/ryanolson)
- MRC Rename ([#221](https://github.com/nv-morpheus/MRC/pull/221)) [@ryanolson](https://github.com/ryanolson)
- Distributed Runtime ([#218](https://github.com/nv-morpheus/MRC/pull/218)) [@ryanolson](https://github.com/ryanolson)

## 🛠️ Improvements

- Move Expected/Error from internal -&gt; core ([#263](https://github.com/nv-morpheus/MRC/pull/263)) [@ryanolson](https://github.com/ryanolson)
- Core Concepts ([#262](https://github.com/nv-morpheus/MRC/pull/262)) [@ryanolson](https://github.com/ryanolson)
- Improved Task Lifecycle ([#259](https://github.com/nv-morpheus/MRC/pull/259)) [@ryanolson](https://github.com/ryanolson)
- Update Task destructor logic to conform to the standard ([#258](https://github.com/nv-morpheus/MRC/pull/258)) [@ryanolson](https://github.com/ryanolson)
- Initial Fiber and Coroutine Benchmarks ([#255](https://github.com/nv-morpheus/MRC/pull/255)) [@ryanolson](https://github.com/ryanolson)
- 23.01 Clang Format Update ([#254](https://github.com/nv-morpheus/MRC/pull/254)) [@ryanolson](https://github.com/ryanolson)
- Updating `CODEOWNERS` for new repo organization ([#250](https://github.com/nv-morpheus/MRC/pull/250)) [@mdemoret-nv](https://github.com/mdemoret-nv)
- Update IWYU to suggest forward declarations ([#249](https://github.com/nv-morpheus/MRC/pull/249)) [@mdemoret-nv](https://github.com/mdemoret-nv)
- Remove draconian regex filter that eliminates entire tests from being run ([#246](https://github.com/nv-morpheus/MRC/pull/246)) [@ryanolson](https://github.com/ryanolson)
- lazy instantiation of the nvml singleton ([#243](https://github.com/nv-morpheus/MRC/pull/243)) [@ryanolson](https://github.com/ryanolson)
- Update Versions for 23.01 ([#242](https://github.com/nv-morpheus/MRC/pull/242)) [@mdemoret-nv](https://github.com/mdemoret-nv)
- MRC changes related to utility consolidation ([#241](https://github.com/nv-morpheus/MRC/pull/241)) [@drobison00](https://github.com/drobison00)
- C++20 version of upcoming C++23 std::expected ([#239](https://github.com/nv-morpheus/MRC/pull/239)) [@ryanolson](https://github.com/ryanolson)
- C++ Reorganization ([#237](https://github.com/nv-morpheus/MRC/pull/237)) [@ryanolson](https://github.com/ryanolson)
- Update codeowners to MRC ([#235](https://github.com/nv-morpheus/MRC/pull/235)) [@mdemoret-nv](https://github.com/mdemoret-nv)
- Adds missing functionality to allow dynamic modules to forward their configuration to nested children. ([#224](https://github.com/nv-morpheus/MRC/pull/224)) [@drobison00](https://github.com/drobison00)
- Run CI on main branch ([#217](https://github.com/nv-morpheus/MRC/pull/217)) [@dagardner-nv](https://github.com/dagardner-nv)

# SRF 22.11.00 (18 Nov 2022)

## 🚨 Breaking Changes

- update abseil, grpc, and ucx versions for cuml compatibility ([#177](https://github.com/nv-morpheus/MRC/pull/177)) [@cwharris](https://github.com/cwharris)

## 🐛 Bug Fixes

- Fix throwing errors from `Executor.join_async()` ([#208](https://github.com/nv-morpheus/MRC/pull/208)) [@mdemoret-nv](https://github.com/mdemoret-nv)
- Fix help string for SRF_BUILD_DOCS ([#202](https://github.com/nv-morpheus/MRC/pull/202)) [@dagardner-nv](https://github.com/dagardner-nv)
- change pull_request to pull_request_target ([#201](https://github.com/nv-morpheus/MRC/pull/201)) [@jarmak-nv](https://github.com/jarmak-nv)
- Registered memory should be released before the UCX Context is destroyed ([#193](https://github.com/nv-morpheus/MRC/pull/193)) [@ryanolson](https://github.com/ryanolson)
- Fix tests so that the proper upstream build is used for the coverage test ([#192](https://github.com/nv-morpheus/MRC/pull/192)) [@dagardner-nv](https://github.com/dagardner-nv)
- Updating SRF versions from 22.09 to 22.11 ([#191](https://github.com/nv-morpheus/MRC/pull/191)) [@mdemoret-nv](https://github.com/mdemoret-nv)
- Fixes &quot;Add new issue/PR to project&quot; action ([#189](https://github.com/nv-morpheus/MRC/pull/189)) [@dagardner-nv](https://github.com/dagardner-nv)
- Fetch history and tags for package step ([#188](https://github.com/nv-morpheus/MRC/pull/188)) [@dagardner-nv](https://github.com/dagardner-nv)
- Fix CI deps ([#187](https://github.com/nv-morpheus/MRC/pull/187)) [@dagardner-nv](https://github.com/dagardner-nv)
- Emit the value before incrementing the iterator fixes ([#180](https://github.com/nv-morpheus/MRC/pull/180)) [@dagardner-nv](https://github.com/dagardner-nv)
- Fix returning of thread_binding attr ([#179](https://github.com/nv-morpheus/MRC/pull/179)) [@dagardner-nv](https://github.com/dagardner-nv)
- update abseil, grpc, and ucx versions for cuml compatibility ([#177](https://github.com/nv-morpheus/MRC/pull/177)) [@cwharris](https://github.com/cwharris)

## 📖 Documentation

- Add documentation on how to build the doxygen docs ([#183](https://github.com/nv-morpheus/MRC/pull/183)) [@dagardner-nv](https://github.com/dagardner-nv)

## 🚀 New Features

- Replacing SRF markdown templates with yml forms ([#200](https://github.com/nv-morpheus/MRC/pull/200)) [@jarmak-nv](https://github.com/jarmak-nv)

## 🛠️ Improvements

- Improve NVML + MIG Behavior ([#206](https://github.com/nv-morpheus/MRC/pull/206)) [@ryanolson](https://github.com/ryanolson)
- Add dockerfile for CI runners ([#199](https://github.com/nv-morpheus/MRC/pull/199)) [@dagardner-nv](https://github.com/dagardner-nv)
- Add codecov upload ([#197](https://github.com/nv-morpheus/MRC/pull/197)) [@dagardner-nv](https://github.com/dagardner-nv)
- SRF Modules and Module Registry Implementation ([#196](https://github.com/nv-morpheus/MRC/pull/196)) [@drobison00](https://github.com/drobison00)
- Allow building build without GPU and without a driver ([#195](https://github.com/nv-morpheus/MRC/pull/195)) [@dagardner-nv](https://github.com/dagardner-nv)
- Switch to github actions ([#182](https://github.com/nv-morpheus/MRC/pull/182)) [@dagardner-nv](https://github.com/dagardner-nv)

# SRF 22.09.00 (30 Sep 2022)

## 📖 Documentation

- CONTRIBUTING updates for CUDA ([#159](https://github.com/nv-morpheus/MRC/pull/159)) [@pdmack](https://github.com/pdmack)

## 🛠️ Improvements

- Bump Versions 22.09 ([#174](https://github.com/nv-morpheus/MRC/pull/174)) [@mdemoret-nv](https://github.com/mdemoret-nv)
- Add missing checks for YAPF_RETVAL &amp; PRAGMA_CHECK_RETVAL in CI ([#173](https://github.com/nv-morpheus/MRC/pull/173)) [@dagardner-nv](https://github.com/dagardner-nv)

# SRF 22.08.00 (7 Sep 2022)

## 🐛 Bug Fixes

- Update PortBuilder to Work with Types That Do Not Have a Default Constructor ([#165](https://github.com/nv-morpheus/MRC/pull/165)) [@mdemoret-nv](https://github.com/mdemoret-nv)
- Fix contributing guide build ([#139](https://github.com/nv-morpheus/MRC/pull/139)) [@cwharris](https://github.com/cwharris)
- fix faulty assumption about remote key sizes ([#137](https://github.com/nv-morpheus/MRC/pull/137)) [@ryanolson](https://github.com/ryanolson)
- Resolves issue-32, re-add stats watchers to Rx and Python nodes ([#130](https://github.com/nv-morpheus/MRC/pull/130)) [@drobison00](https://github.com/drobison00)
- Fix SRF Conda Upload ([#70](https://github.com/nv-morpheus/MRC/pull/70)) [@mdemoret-nv](https://github.com/mdemoret-nv)

## 📖 Documentation

- Adjust contrib instructions for pip install location ([#141](https://github.com/nv-morpheus/MRC/pull/141)) [@pdmack](https://github.com/pdmack)
- Update CONTRIBUTING.md ([#133](https://github.com/nv-morpheus/MRC/pull/133)) [@pdmack](https://github.com/pdmack)
- Typo fix in README.md ([#108](https://github.com/nv-morpheus/MRC/pull/108)) [@yuvaldeg](https://github.com/yuvaldeg)
- Refresh and Simplification of QSG README ([#100](https://github.com/nv-morpheus/MRC/pull/100)) [@awthomp](https://github.com/awthomp)

## 🚀 New Features

- Internal Runtime Query + CPP Checks ([#113](https://github.com/nv-morpheus/MRC/pull/113)) [@ryanolson](https://github.com/ryanolson)
- Data Plane - Initial P2P and RDMA Get ([#112](https://github.com/nv-morpheus/MRC/pull/112)) [@ryanolson](https://github.com/ryanolson)
- Network Options ([#111](https://github.com/nv-morpheus/MRC/pull/111)) [@ryanolson](https://github.com/ryanolson)
- Transient Pool ([#110](https://github.com/nv-morpheus/MRC/pull/110)) [@ryanolson](https://github.com/ryanolson)

## 🛠️ Improvements

- Bump versions 22.08 ([#166](https://github.com/nv-morpheus/MRC/pull/166)) [@mdemoret-nv](https://github.com/mdemoret-nv)
- Action to Add Issues/PRs to Project ([#155](https://github.com/nv-morpheus/MRC/pull/155)) [@jarmak-nv](https://github.com/jarmak-nv)
- Add ability to specify port data type for known c++ types from Python ([#153](https://github.com/nv-morpheus/MRC/pull/153)) [@drobison00](https://github.com/drobison00)
- Fix CPP checks for CI ([#147](https://github.com/nv-morpheus/MRC/pull/147)) [@dagardner-nv](https://github.com/dagardner-nv)
- Code coverage integration in SRF ([#105](https://github.com/nv-morpheus/MRC/pull/105)) [@drobison00](https://github.com/drobison00)
- Add codable interface for python objects, (Ingress|Egress)Ports python bindings, and other elements required for multi-segment. ([#18](https://github.com/nv-morpheus/MRC/pull/18)) [@drobison00](https://github.com/drobison00)

# SRF 22.06.01 (4 Jul 2022)

## 🐛 Bug Fixes

- Fix `flatten()` Operator With Infinite Sources ([#117](https://github.com/nv-morpheus/MRC/pull/117)) [@mdemoret-nv](https://github.com/mdemoret-nv)

# SRF 22.06.00 (28 Jun 2022)

## 🐛 Bug Fixes

- Moving the python_module_tools before the SRF import ([#87](https://github.com/nv-morpheus/MRC/pull/87)) [@mdemoret-nv](https://github.com/mdemoret-nv)
- Fix for pipelines beginning before start is called ([#83](https://github.com/nv-morpheus/MRC/pull/83)) [@ryanolson](https://github.com/ryanolson)
- host_partition_id incorrectly set with multiple gpus present ([#79](https://github.com/nv-morpheus/MRC/pull/79)) [@ryanolson](https://github.com/ryanolson)
- Changing RAPIDS_VERSION to SRF_RAPIDS_VERSION ([#73](https://github.com/nv-morpheus/MRC/pull/73)) [@mdemoret-nv](https://github.com/mdemoret-nv)
- Apply PR #70 to Correct Branch ([#71](https://github.com/nv-morpheus/MRC/pull/71)) [@mdemoret-nv](https://github.com/mdemoret-nv)
- Add pybind11-stubgen to the conda build ([#60](https://github.com/nv-morpheus/MRC/pull/60)) [@mdemoret-nv](https://github.com/mdemoret-nv)
- Improved Resource ownership ([#39](https://github.com/nv-morpheus/MRC/pull/39)) [@ryanolson](https://github.com/ryanolson)
- Improve error handling on pipeline::Controller updates ([#29](https://github.com/nv-morpheus/MRC/pull/29)) [@ryanolson](https://github.com/ryanolson)
- adding PortGraph; validate Pipeline definitions ([#28](https://github.com/nv-morpheus/MRC/pull/28)) [@ryanolson](https://github.com/ryanolson)

## 📖 Documentation

- SRF README Update - In Preparation of Public Release ([#93](https://github.com/nv-morpheus/MRC/pull/93)) [@mdemoret-nv](https://github.com/mdemoret-nv)
- Initial CONTRIBUTING.md ([#45](https://github.com/nv-morpheus/MRC/pull/45)) [@cwharris](https://github.com/cwharris)

## 🚀 New Features

- Improvements Needed for Quickstart ([#52](https://github.com/nv-morpheus/MRC/pull/52)) [@mdemoret-nv](https://github.com/mdemoret-nv)
- General Cleanup ([#47](https://github.com/nv-morpheus/MRC/pull/47)) [@mdemoret-nv](https://github.com/mdemoret-nv)

## 🛠️ Improvements

- adding pragma once to logging.h ([#41](https://github.com/nv-morpheus/MRC/pull/41)) [@ryanolson](https://github.com/ryanolson)
- pimpl IBuilder ([#40](https://github.com/nv-morpheus/MRC/pull/40)) [@ryanolson](https://github.com/ryanolson)
- Add two missing headers that caused clang compile errors. ([#31](https://github.com/nv-morpheus/MRC/pull/31)) [@drobison00](https://github.com/drobison00)
- Enable CI for SRF ([#24](https://github.com/nv-morpheus/MRC/pull/24)) [@dagardner-nv](https://github.com/dagardner-nv)
- Quickstart ([#20](https://github.com/nv-morpheus/MRC/pull/20)) [@ryanolson](https://github.com/ryanolson)
- adding node::Queue; refactoring SinkChannel for code reuse ([#1](https://github.com/nv-morpheus/MRC/pull/1)) [@ryanolson](https://github.com/ryanolson)
