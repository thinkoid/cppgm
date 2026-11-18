# Boost compilation and test execution

Boost 1.92.0, 17 C++11 suites (1,818 declarations). Ratios are reference / cppgm, higher is better.

Compilation counts child CPU of C++ test compilations, including expected rejections. It excludes configuration probes, library dependencies, C, linking and B2. Test execution includes process startup and the GDB integration test; it is correctness-test timing, not an application benchmark. The debugger source has identical volatile breakpoint anchors for all compilers; MPL and TypeTraits test enums use fixed underlying types for their -1 probes. Original test oracles are retained. Compile timings use one clean campaign per compiler; small differences need repeats.

| Suite | Declarations | Compile CPU cppgm | GCC | Clang | Test CPU cppgm | GCC | Clang |
|---|---:|---:|---:|---:|---:|---:|---:|
| [libs/accumulators/test](suites/libs-accumulators-test.md) | 49 | 66.279s | 3.046× | 3.589× | 3.137s | 1.182× | 1.022× |
| [libs/asio/test](suites/libs-asio-test.md) | 295 | 184.732s | 5.134× | 5.227× | 0.315s | 0.990× | 0.979× |
| [libs/container/test](suites/libs-container-test.md) | 89 | 132.045s | 5.901× | 4.649× | 2.473s | 0.986× | 1.026× |
| [libs/function/test](suites/libs-function-test.md) | 49 | 10.870s | 2.867× | 3.489× | 0.082s | 1.035× | 1.119× |
| [libs/fusion/test](suites/libs-fusion-test.md) | 221 | 81.047s | 2.603× | 3.452× | 0.403s | 1.032× | 1.088× |
| [libs/json/test](suites/libs-json-test.md) | 50 | 79.981s | 6.909× | 5.701× | 2.868s | 0.917× | 0.994× |
| [libs/mp11/test](suites/libs-mp11-test.md) | 234 | 54.395s | 5.401× | 3.804× | 0.402s | 1.085× | 1.119× |
| [libs/mpl/test](suites/libs-mpl-test.md) | 99 | 19.623s | 2.401× | 3.085× | 0.019s | 1.055× | 1.116× |
| [libs/optional/test](suites/libs-optional-test.md) | 74 | 12.471s | 2.940× | 3.300× | 0.080s | 1.060× | 1.022× |
| [libs/proto/test](suites/libs-proto-test.md) | 23 | 18.214s | 2.912× | 3.196× | 0.083s | 1.031× | 1.009× |
| [libs/qvm/test](suites/libs-qvm-test.md) | 134 | 46.079s | 2.802× | 3.626× | 0.318s | 0.995× | 0.975× |
| [libs/spirit/repository/test](suites/libs-spirit-repository-test.md) | 8 | 19.321s | 3.573× | 4.041× | 0.017s | 0.976× | 0.973× |
| [libs/type_erasure/test](suites/libs-type_erasure-test.md) | 60 | 43.668s | 5.002× | 4.491× | 0.161s | 0.941× | 0.954× |
| [libs/type_traits/test](suites/libs-type_traits-test.md) | 218 | 45.841s | 3.344× | 6.531× | 0.373s | 1.042× | 1.053× |
| [libs/uuid/test](suites/libs-uuid-test.md) | 80 | 21.551s | 3.587× | 3.728× | 0.183s | 1.030× | 1.009× |
| [libs/variant2/test](suites/libs-variant2-test.md) | 84 | 48.968s | 3.108× | 4.691× | 0.111s | 1.051× | 1.022× |
| [libs/xpressive/test](suites/libs-xpressive-test.md) | 51 | 86.218s | 4.987× | 4.519× | 0.183s | 1.152× | 1.027× |

Performance uses O3 with assertions enabled; the GDB test remains Og and is correctness-only.

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 1.042× | 1.045×, 1.039× | 0.994× |
| clang | 1.026× | 1.032×, 1.021× | 0.996× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1359 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44390936409).

Exact commands, per-test times, native outcomes and toolchain/host identities are retained with the results.

[Shared comparison](standard/summary.md) · [Version-1 records](standard/records.json) · [CI run](https://github.com/vishvananda/cppgm/actions/runs/44390936409)
