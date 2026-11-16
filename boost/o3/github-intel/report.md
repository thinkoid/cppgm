# Boost compilation and test execution

Boost 1.92.0, 17 C++11 suites (1,818 declarations). Ratios are reference / cppgm, higher is better.

Compilation counts child CPU of C++ test compilations, including expected rejections. It excludes configuration probes, library dependencies, C, linking and B2. Test execution includes process startup and the GDB integration test; it is correctness-test timing, not an application benchmark. The debugger source has identical volatile breakpoint anchors for all compilers; MPL and TypeTraits test enums use fixed underlying types for their -1 probes. Original test oracles are retained. Compile timings use one clean campaign per compiler; small differences need repeats.

| Suite | Declarations | Compile CPU cppgm | GCC | Clang | Test CPU cppgm | GCC | Clang |
|---|---:|---:|---:|---:|---:|---:|---:|
| [libs/accumulators/test](suites/libs-accumulators-test.md) | 49 | 43.710s | 3.252× | 3.517× | 2.184s | 1.150× | 0.989× |
| [libs/asio/test](suites/libs-asio-test.md) | 295 | 117.490s | 5.928× | 5.429× | 0.179s | 1.064× | 1.021× |
| [libs/container/test](suites/libs-container-test.md) | 89 | 99.593s | 5.996× | 4.216× | 1.981s | 1.016× | 1.007× |
| [libs/function/test](suites/libs-function-test.md) | 49 | 7.130s | 3.087× | 3.231× | 0.051s | 1.160× | 0.982× |
| [libs/fusion/test](suites/libs-fusion-test.md) | 221 | 52.922s | 2.811× | 3.174× | 0.247s | 1.143× | 0.983× |
| [libs/json/test](suites/libs-json-test.md) | 50 | 58.183s | 7.257× | 4.881× | 1.947s | 0.925× | 1.147× |
| [libs/mp11/test](suites/libs-mp11-test.md) | 234 | 36.902s | 5.632× | 3.575× | 0.259s | 1.036× | 1.056× |
| [libs/mpl/test](suites/libs-mpl-test.md) | 99 | 12.573s | 2.462× | 2.938× | 0.012s | 1.010× | 1.065× |
| [libs/optional/test](suites/libs-optional-test.md) | 74 | 8.252s | 2.935× | 3.036× | 0.050s | 1.004× | 0.924× |
| [libs/proto/test](suites/libs-proto-test.md) | 23 | 12.082s | 2.986× | 3.017× | 0.047s | 1.009× | 0.934× |
| [libs/qvm/test](suites/libs-qvm-test.md) | 134 | 29.852s | 2.930× | 3.347× | 0.197s | 1.009× | 0.940× |
| [libs/spirit/repository/test](suites/libs-spirit-repository-test.md) | 8 | 13.802s | 3.662× | 3.777× | 0.011s | 1.011× | 0.908× |
| [libs/type_erasure/test](suites/libs-type_erasure-test.md) | 60 | 29.747s | 5.389× | 4.474× | 0.085s | 0.943× | 0.915× |
| [libs/type_traits/test](suites/libs-type_traits-test.md) | 218 | 28.818s | 3.450× | 5.849× | 0.231s | 1.044× | 0.951× |
| [libs/uuid/test](suites/libs-uuid-test.md) | 80 | 14.398s | 3.754× | 3.440× | 0.134s | 1.028× | 0.986× |
| [libs/variant2/test](suites/libs-variant2-test.md) | 84 | 33.634s | 3.102× | 4.288× | 0.070s | 0.990× | 0.958× |
| [libs/xpressive/test](suites/libs-xpressive-test.md) | 51 | 61.206s | 5.040× | 4.156× | 0.114s | 1.071× | 0.902× |

Performance uses O3 with assertions enabled; the GDB test remains Og and is correctness-only.

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 1.038× | 1.037×, 1.039× | 1.000× |
| clang | 1.049× | 1.049×, 1.048× | 1.003× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1362 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/43822097733).

Exact commands, per-test times, native outcomes and toolchain/host identities are retained with the results.

[Shared comparison](standard/summary.md) · [Version-1 records](standard/records.json) · [CI run](https://github.com/vishvananda/cppgm/actions/runs/43822097733)
