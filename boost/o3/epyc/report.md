# Boost compilation and test execution

Boost 1.92.0, 17 C++11 suites (1,818 declarations). Ratios are reference / cppgm, higher is better.

Compilation counts child CPU of C++ test compilations, including expected rejections. It excludes configuration probes, library dependencies, C, linking and B2. Test execution includes process startup and the GDB integration test; it is correctness-test timing, not an application benchmark. The debugger source has identical volatile breakpoint anchors for all compilers; MPL and TypeTraits test enums use fixed underlying types for their -1 probes. Original test oracles are retained. Compile timings use one clean campaign per compiler; small differences need repeats.

| Suite | Declarations | Compile CPU cppgm | GCC | Clang | Test CPU cppgm | GCC | Clang |
|---|---:|---:|---:|---:|---:|---:|---:|
| [libs/accumulators/test](suites/libs-accumulators-test.md) | 49 | 69.496s | 3.096× | 3.941× | 3.041s | 1.154× | 1.016× |
| [libs/asio/test](suites/libs-asio-test.md) | 295 | 188.461s | 5.238× | 5.904× | 0.283s | 1.074× | 1.075× |
| [libs/container/test](suites/libs-container-test.md) | 89 | 148.750s | 5.473× | 4.531× | 2.464s | 1.006× | 1.045× |
| [libs/function/test](suites/libs-function-test.md) | 49 | 11.433s | 2.889× | 3.789× | 0.077s | 1.074× | 1.087× |
| [libs/fusion/test](suites/libs-fusion-test.md) | 221 | 85.483s | 2.641× | 3.642× | 0.384s | 1.056× | 1.058× |
| [libs/json/test](suites/libs-json-test.md) | 50 | 83.663s | 6.702× | 5.613× | 3.328s | 0.857× | 1.058× |
| [libs/mp11/test](suites/libs-mp11-test.md) | 234 | 57.411s | 5.357× | 4.197× | 0.384s | 1.081× | 1.147× |
| [libs/mpl/test](suites/libs-mpl-test.md) | 99 | 20.826s | 2.391× | 3.389× | 0.018s | 1.032× | 1.168× |
| [libs/optional/test](suites/libs-optional-test.md) | 74 | 13.343s | 2.889× | 3.675× | 0.077s | 1.034× | 1.070× |
| [libs/proto/test](suites/libs-proto-test.md) | 23 | 19.040s | 2.933× | 3.553× | 0.078s | 1.059× | 1.080× |
| [libs/qvm/test](suites/libs-qvm-test.md) | 134 | 48.611s | 2.875× | 4.102× | 0.309s | 1.032× | 0.993× |
| [libs/spirit/repository/test](suites/libs-spirit-repository-test.md) | 8 | 20.033s | 3.686× | 4.318× | 0.016s | 1.073× | 0.997× |
| [libs/type_erasure/test](suites/libs-type_erasure-test.md) | 60 | 45.355s | 5.073× | 4.905× | 0.154s | 0.984× | 1.000× |
| [libs/type_traits/test](suites/libs-type_traits-test.md) | 218 | 49.232s | 3.455× | 7.129× | 0.344s | 1.085× | 1.153× |
| [libs/uuid/test](suites/libs-uuid-test.md) | 80 | 22.607s | 3.689× | 4.244× | 0.176s | 1.080× | 1.080× |
| [libs/variant2/test](suites/libs-variant2-test.md) | 84 | 53.204s | 3.003× | 5.204× | 0.104s | 1.082× | 1.142× |
| [libs/xpressive/test](suites/libs-xpressive-test.md) | 51 | 91.480s | 4.801× | 4.799× | 0.186s | 1.132× | 1.031× |

Performance uses O3 with assertions enabled; the GDB test remains Og and is correctness-only.

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 1.040× | 1.030×, 1.051× | 0.995× |
| clang | 1.028× | 1.029×, 1.027× | 0.998× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1360 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/43712369003).

Exact commands, per-test times, native outcomes and toolchain/host identities are retained with the results.

[Shared comparison](standard/summary.md) · [Version-1 records](standard/records.json) · [CI run](https://github.com/vishvananda/cppgm/actions/runs/43712369003)
