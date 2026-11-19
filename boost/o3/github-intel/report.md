# Boost compilation and test execution

Boost 1.92.0, 17 C++11 suites (1,818 declarations). Ratios are reference / cppgm, higher is better.

Compilation counts child CPU of C++ test compilations, including expected rejections. It excludes configuration probes, library dependencies, C, linking and B2. Test execution includes process startup and the GDB integration test; it is correctness-test timing, not an application benchmark. The debugger source has identical volatile breakpoint anchors for all compilers; MPL and TypeTraits test enums use fixed underlying types for their -1 probes. Original test oracles are retained. Compile timings use one clean campaign per compiler; small differences need repeats.

| Suite | Declarations | Compile CPU cppgm | GCC | Clang | Test CPU cppgm | GCC | Clang |
|---|---:|---:|---:|---:|---:|---:|---:|
| [libs/accumulators/test](suites/libs-accumulators-test.md) | 49 | 41.948s | 3.370× | 3.630× | 2.169s | 1.160× | 0.991× |
| [libs/asio/test](suites/libs-asio-test.md) | 295 | 113.429s | 6.171× | 5.695× | 0.173s | 1.143× | 1.111× |
| [libs/container/test](suites/libs-container-test.md) | 89 | 98.327s | 6.011× | 4.381× | 1.974s | 1.011× | 1.018× |
| [libs/function/test](suites/libs-function-test.md) | 49 | 6.876s | 3.093× | 3.333× | 0.052s | 1.031× | 1.003× |
| [libs/fusion/test](suites/libs-fusion-test.md) | 221 | 51.446s | 2.816× | 3.281× | 0.250s | 1.031× | 1.012× |
| [libs/json/test](suites/libs-json-test.md) | 50 | 56.882s | 7.189× | 5.011× | 1.948s | 0.884× | 1.150× |
| [libs/mp11/test](suites/libs-mp11-test.md) | 234 | 35.892s | 5.784× | 3.610× | 0.254s | 1.056× | 1.013× |
| [libs/mpl/test](suites/libs-mpl-test.md) | 99 | 12.259s | 2.577× | 2.955× | 0.012s | 1.116× | 1.024× |
| [libs/optional/test](suites/libs-optional-test.md) | 74 | 7.954s | 3.127× | 3.153× | 0.048s | 1.111× | 0.974× |
| [libs/proto/test](suites/libs-proto-test.md) | 23 | 11.675s | 3.111× | 3.100× | 0.048s | 1.014× | 0.893× |
| [libs/qvm/test](suites/libs-qvm-test.md) | 134 | 29.076s | 3.045× | 3.437× | 0.194s | 1.062× | 0.967× |
| [libs/spirit/repository/test](suites/libs-spirit-repository-test.md) | 8 | 13.152s | 3.957× | 3.934× | 0.010s | 1.113× | 0.963× |
| [libs/type_erasure/test](suites/libs-type_erasure-test.md) | 60 | 28.974s | 5.808× | 4.563× | 0.083s | 1.028× | 0.925× |
| [libs/type_traits/test](suites/libs-type_traits-test.md) | 218 | 28.304s | 3.625× | 5.988× | 0.234s | 1.101× | 0.984× |
| [libs/uuid/test](suites/libs-uuid-test.md) | 80 | 14.006s | 3.923× | 3.537× | 0.134s | 1.064× | 0.998× |
| [libs/variant2/test](suites/libs-variant2-test.md) | 84 | 31.914s | 3.299× | 4.472× | 0.069s | 1.048× | 0.967× |
| [libs/xpressive/test](suites/libs-xpressive-test.md) | 51 | 59.515s | 5.193× | 4.319× | 0.111s | 1.113× | 0.959× |

Performance uses O3 with assertions enabled; the GDB test remains Og and is correctness-only.

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 1.036× | 1.035×, 1.038× | 0.996× |
| clang | 1.050× | 1.048×, 1.051× | 1.003× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1363 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44560957980).

Exact commands, per-test times, native outcomes and toolchain/host identities are retained with the results.

[Shared comparison](standard/summary.md) · [Version-1 records](standard/records.json) · [CI run](https://github.com/vishvananda/cppgm/actions/runs/44560957980)
