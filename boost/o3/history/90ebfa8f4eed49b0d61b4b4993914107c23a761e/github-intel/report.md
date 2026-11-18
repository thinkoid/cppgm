# Boost compilation and test execution

Boost 1.92.0, 17 C++11 suites (1,818 declarations). Ratios are reference / cppgm, higher is better.

Compilation counts child CPU of C++ test compilations, including expected rejections. It excludes configuration probes, library dependencies, C, linking and B2. Test execution includes process startup and the GDB integration test; it is correctness-test timing, not an application benchmark. The debugger source has identical volatile breakpoint anchors for all compilers; MPL and TypeTraits test enums use fixed underlying types for their -1 probes. Original test oracles are retained. Compile timings use one clean campaign per compiler; small differences need repeats.

| Suite | Declarations | Compile CPU cppgm | GCC | Clang | Test CPU cppgm | GCC | Clang |
|---|---:|---:|---:|---:|---:|---:|---:|
| [libs/accumulators/test](suites/libs-accumulators-test.md) | 49 | 57.394s | 3.334× | 3.536× | 2.899s | 1.170× | 0.993× |
| [libs/asio/test](suites/libs-asio-test.md) | 295 | 161.663s | 5.661× | 5.233× | 0.225s | 1.070× | 1.034× |
| [libs/container/test](suites/libs-container-test.md) | 89 | 135.835s | 5.757× | 4.189× | 2.342s | 0.954× | 1.020× |
| [libs/function/test](suites/libs-function-test.md) | 49 | 9.589s | 3.041× | 3.219× | 0.067s | 1.036× | 0.990× |
| [libs/fusion/test](suites/libs-fusion-test.md) | 221 | 71.214s | 2.799× | 3.181× | 0.319s | 1.041× | 0.998× |
| [libs/json/test](suites/libs-json-test.md) | 50 | 77.341s | 6.894× | 4.840× | 2.885s | 0.853× | 1.101× |
| [libs/mp11/test](suites/libs-mp11-test.md) | 234 | 49.695s | 5.654× | 3.565× | 0.321s | 1.042× | 1.097× |
| [libs/mpl/test](suites/libs-mpl-test.md) | 99 | 17.204s | 2.510× | 2.908× | 0.015s | 0.982× | 1.116× |
| [libs/optional/test](suites/libs-optional-test.md) | 74 | 11.022s | 3.031× | 3.128× | 0.062s | 1.024× | 1.040× |
| [libs/proto/test](suites/libs-proto-test.md) | 23 | 15.898s | 3.084× | 3.136× | 0.061s | 1.025× | 0.970× |
| [libs/qvm/test](suites/libs-qvm-test.md) | 134 | 40.139s | 3.015× | 3.423× | 0.252s | 1.013× | 1.012× |
| [libs/spirit/repository/test](suites/libs-spirit-repository-test.md) | 8 | 17.394s | 3.849× | 3.947× | 0.013s | 1.051× | 0.986× |
| [libs/type_erasure/test](suites/libs-type_erasure-test.md) | 60 | 38.861s | 5.393× | 4.456× | 0.112s | 0.966× | 0.920× |
| [libs/type_traits/test](suites/libs-type_traits-test.md) | 218 | 39.380s | 3.477× | 5.922× | 0.290s | 1.031× | 1.023× |
| [libs/uuid/test](suites/libs-uuid-test.md) | 80 | 19.345s | 3.810× | 3.446× | 0.160s | 1.010× | 0.972× |
| [libs/variant2/test](suites/libs-variant2-test.md) | 84 | 43.051s | 3.198× | 4.458× | 0.087s | 1.010× | 1.003× |
| [libs/xpressive/test](suites/libs-xpressive-test.md) | 51 | 80.844s | 5.061× | 4.273× | 0.146s | 1.097× | 0.988× |

Performance uses O3 with assertions enabled; the GDB test remains Og and is correctness-only.

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 1.032× | 1.027×, 1.037× | 1.000× |
| clang | 1.049× | 1.050×, 1.049× | 1.003× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1361 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44260407509).

Exact commands, per-test times, native outcomes and toolchain/host identities are retained with the results.

[Shared comparison](standard/summary.md) · [Version-1 records](standard/records.json) · [CI run](https://github.com/vishvananda/cppgm/actions/runs/44260407509)
