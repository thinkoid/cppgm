# Boost compilation and test execution

Boost 1.92.0, 17 C++11 suites (1,818 declarations). Ratios are reference / cppgm, higher is better.

Compilation counts child CPU of C++ test compilations, including expected rejections. It excludes configuration probes, library dependencies, C, linking and B2. Test execution includes process startup and the GDB integration test; it is correctness-test timing, not an application benchmark. The debugger source has identical volatile breakpoint anchors for all compilers; MPL and TypeTraits test enums use fixed underlying types for their -1 probes. Original test oracles are retained. Compile timings use one clean campaign per compiler; small differences need repeats.

| Suite | Declarations | Compile CPU cppgm | GCC | Clang | Test CPU cppgm | GCC | Clang |
|---|---:|---:|---:|---:|---:|---:|---:|
| [libs/accumulators/test](suites/libs-accumulators-test.md) | 49 | 39.309s | 3.449× | 3.281× | 1.868s | 1.227× | 1.040× |
| [libs/asio/test](suites/libs-asio-test.md) | 295 | 103.575s | 6.143× | 5.490× | 0.210s | 1.194× | 1.148× |
| [libs/container/test](suites/libs-container-test.md) | 89 | 87.915s | 5.938× | 4.289× | 1.467s | 1.038× | 0.984× |
| [libs/function/test](suites/libs-function-test.md) | 49 | 6.649s | 2.979× | 2.893× | 0.065s | 1.051× | 0.966× |
| [libs/fusion/test](suites/libs-fusion-test.md) | 221 | 48.357s | 2.697× | 2.873× | 0.300s | 1.098× | 0.962× |
| [libs/json/test](suites/libs-json-test.md) | 50 | 50.562s | 7.135× | 4.917× | 1.632s | 0.847× | 1.025× |
| [libs/mp11/test](suites/libs-mp11-test.md) | 234 | 33.859s | 5.256× | 3.274× | 0.309s | 1.079× | 1.057× |
| [libs/mpl/test](suites/libs-mpl-test.md) | 99 | 12.319s | 2.182× | 2.574× | 0.017s | 0.832× | 0.921× |
| [libs/optional/test](suites/libs-optional-test.md) | 74 | 7.906s | 2.741× | 2.772× | 0.063s | 0.986× | 1.015× |
| [libs/proto/test](suites/libs-proto-test.md) | 23 | 12.035s | 2.627× | 2.552× | 0.063s | 0.978× | 0.905× |
| [libs/qvm/test](suites/libs-qvm-test.md) | 134 | 29.889s | 2.666× | 2.942× | 0.234s | 1.037× | 0.970× |
| [libs/spirit/repository/test](suites/libs-spirit-repository-test.md) | 8 | 12.787s | 3.540× | 3.526× | 0.013s | 1.015× | 0.985× |
| [libs/type_erasure/test](suites/libs-type_erasure-test.md) | 60 | 28.296s | 5.389× | 4.091× | 0.117s | 0.974× | 0.924× |
| [libs/type_traits/test](suites/libs-type_traits-test.md) | 218 | 27.900s | 3.280× | 5.117× | 0.287s | 1.016× | 1.034× |
| [libs/uuid/test](suites/libs-uuid-test.md) | 80 | 13.915s | 3.496× | 3.069× | 0.534s | 1.001× | 0.987× |
| [libs/variant2/test](suites/libs-variant2-test.md) | 84 | 33.920s | 2.643× | 3.644× | 0.092s | 0.947× | 0.924× |
| [libs/xpressive/test](suites/libs-xpressive-test.md) | 51 | 61.052s | 4.378× | 3.633× | 0.143s | 1.007× | 0.901× |

Performance uses O3 with assertions enabled; the GDB test remains Og and is correctness-only.

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 1.041× | 1.027×, 1.056× | 0.994× |
| clang | 1.021× | 1.016×, 1.026× | 1.036× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1364 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43666517673).

Exact commands, per-test times, native outcomes and toolchain/host identities are retained with the results.

[Shared comparison](standard/summary.md) · [Version-1 records](standard/records.json) · [CI run](https://github.com/vishvananda/cppgm-extended/actions/runs/43666517673)
