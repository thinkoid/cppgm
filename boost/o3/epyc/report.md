# Boost compilation and test execution

Boost 1.92.0, 17 C++11 suites (1,818 declarations). Ratios are reference / cppgm, higher is better.

Compilation counts child CPU of C++ test compilations, including expected rejections. It excludes configuration probes, library dependencies, C, linking and B2. Test execution includes process startup and the GDB integration test; it is correctness-test timing, not an application benchmark. The debugger source has identical volatile breakpoint anchors for all compilers; MPL and TypeTraits test enums use fixed underlying types for their -1 probes. Original test oracles are retained. Compile timings use one clean campaign per compiler; small differences need repeats.

| Suite | Declarations | Compile CPU cppgm | GCC | Clang | Test CPU cppgm | GCC | Clang |
|---|---:|---:|---:|---:|---:|---:|---:|
| [libs/accumulators/test](suites/libs-accumulators-test.md) | 49 | 51.729s | 3.092× | 3.639× | 2.439s | 1.183× | 1.013× |
| [libs/asio/test](suites/libs-asio-test.md) | 295 | 138.051s | 5.444× | 5.537× | 0.253s | 1.049× | 1.015× |
| [libs/container/test](suites/libs-container-test.md) | 89 | 102.001s | 6.133× | 4.746× | 1.965s | 1.161× | 1.020× |
| [libs/function/test](suites/libs-function-test.md) | 49 | 8.410s | 2.935× | 3.442× | 0.069s | 1.079× | 1.029× |
| [libs/fusion/test](suites/libs-fusion-test.md) | 221 | 63.390s | 2.641× | 3.334× | 0.331s | 1.069× | 1.035× |
| [libs/json/test](suites/libs-json-test.md) | 50 | 62.640s | 7.147× | 5.370× | 2.251s | 0.892× | 1.015× |
| [libs/mp11/test](suites/libs-mp11-test.md) | 234 | 42.557s | 5.332× | 3.800× | 0.335s | 1.066× | 1.116× |
| [libs/mpl/test](suites/libs-mpl-test.md) | 99 | 15.317s | 2.385× | 3.059× | 0.015s | 1.065× | 1.134× |
| [libs/optional/test](suites/libs-optional-test.md) | 74 | 9.693s | 2.927× | 3.341× | 0.066s | 1.046× | 1.026× |
| [libs/proto/test](suites/libs-proto-test.md) | 23 | 14.233s | 2.899× | 3.221× | 0.066s | 1.041× | 1.055× |
| [libs/qvm/test](suites/libs-qvm-test.md) | 134 | 36.120s | 2.800× | 3.627× | 0.260s | 1.000× | 0.990× |
| [libs/spirit/repository/test](suites/libs-spirit-repository-test.md) | 8 | 15.071s | 3.737× | 4.083× | 0.014s | 1.044× | 1.001× |
| [libs/type_erasure/test](suites/libs-type_erasure-test.md) | 60 | 34.020s | 5.362× | 4.661× | 0.128s | 0.971× | 0.991× |
| [libs/type_traits/test](suites/libs-type_traits-test.md) | 218 | 35.473s | 3.391× | 6.517× | 0.302s | 1.047× | 1.053× |
| [libs/uuid/test](suites/libs-uuid-test.md) | 80 | 16.702s | 3.655× | 3.743× | 0.151s | 1.048× | 1.022× |
| [libs/variant2/test](suites/libs-variant2-test.md) | 84 | 38.758s | 3.085× | 4.699× | 0.093s | 1.042× | 1.001× |
| [libs/xpressive/test](suites/libs-xpressive-test.md) | 51 | 68.000s | 4.892× | 4.412× | 0.150s | 1.131× | 0.990× |

Performance uses O3 with assertions enabled; the GDB test remains Og and is correctness-only.

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 1.045× | 1.047×, 1.042× | 0.990× |
| clang | 1.016× | 1.014×, 1.017× | 0.992× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1363 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/43916760662).

Exact commands, per-test times, native outcomes and toolchain/host identities are retained with the results.

[Shared comparison](standard/summary.md) · [Version-1 records](standard/records.json) · [CI run](https://github.com/vishvananda/cppgm/actions/runs/43916760662)
