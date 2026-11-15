# Boost compilation and test execution

Boost 1.92.0, 17 C++11 suites (1,818 declarations). Ratios are reference / cppgm, higher is better.

Compilation counts child CPU of C++ test compilations, including expected rejections. It excludes configuration probes, library dependencies, C, linking and B2. Test execution includes process startup and the GDB integration test; it is correctness-test timing, not an application benchmark. The debugger source has identical volatile breakpoint anchors for all compilers; MPL and TypeTraits test enums use fixed underlying types for their -1 probes. Original test oracles are retained. Compile timings use one clean campaign per compiler; small differences need repeats.

| Suite | Declarations | Compile CPU cppgm | GCC | Clang | Test CPU cppgm | GCC | Clang |
|---|---:|---:|---:|---:|---:|---:|---:|
| [libs/accumulators/test](suites/libs-accumulators-test.md) | 49 | 40.461s | 2.979× | 3.204× | 1.898s | 1.116× | 1.015× |
| [libs/asio/test](suites/libs-asio-test.md) | 295 | 103.745s | 5.667× | 5.405× | 0.221s | 1.046× | 1.068× |
| [libs/container/test](suites/libs-container-test.md) | 89 | 87.707s | 5.930× | 4.433× | 1.463s | 1.075× | 1.053× |
| [libs/function/test](suites/libs-function-test.md) | 49 | 6.265s | 3.171× | 3.276× | 0.060s | 1.159× | 1.113× |
| [libs/fusion/test](suites/libs-fusion-test.md) | 221 | 46.070s | 2.855× | 3.237× | 0.289s | 1.154× | 1.100× |
| [libs/json/test](suites/libs-json-test.md) | 50 | 48.352s | 7.502× | 5.099× | 1.627s | 0.844× | 1.038× |
| [libs/mp11/test](suites/libs-mp11-test.md) | 234 | 31.323s | 5.451× | 3.780× | 0.285s | 1.092× | 1.223× |
| [libs/mpl/test](suites/libs-mpl-test.md) | 99 | 11.147s | 2.426× | 2.969× | 0.013s | 1.097× | 1.269× |
| [libs/optional/test](suites/libs-optional-test.md) | 74 | 7.299s | 2.846× | 3.079× | 0.058s | 1.027× | 1.107× |
| [libs/proto/test](suites/libs-proto-test.md) | 23 | 10.753s | 2.813× | 3.021× | 0.059s | 1.029× | 1.030× |
| [libs/qvm/test](suites/libs-qvm-test.md) | 134 | 27.291s | 2.714× | 3.316× | 0.217s | 1.027× | 1.055× |
| [libs/spirit/repository/test](suites/libs-spirit-repository-test.md) | 8 | 11.757s | 3.605× | 4.009× | 0.014s | 0.879× | 0.931× |
| [libs/type_erasure/test](suites/libs-type_erasure-test.md) | 60 | 27.394s | 5.038× | 4.432× | 0.114s | 0.957× | 0.994× |
| [libs/type_traits/test](suites/libs-type_traits-test.md) | 218 | 27.427s | 3.109× | 5.417× | 0.277s | 1.011× | 1.091× |
| [libs/uuid/test](suites/libs-uuid-test.md) | 80 | 13.359s | 3.467× | 3.354× | 0.527s | 1.014× | 1.011× |
| [libs/variant2/test](suites/libs-variant2-test.md) | 84 | 30.928s | 2.878× | 4.174× | 0.086s | 0.996× | 1.003× |
| [libs/xpressive/test](suites/libs-xpressive-test.md) | 51 | 52.548s | 4.945× | 4.417× | 0.128s | 1.120× | 1.059× |

Performance uses O3 with assertions enabled; the GDB test remains Og and is correctness-only.

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 1.025× | 1.027×, 1.023× | 1.015× |
| clang | 1.001×† | 1.026×, 0.975× | 1.005× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1363 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43658654032).

Exact commands, per-test times, native outcomes and toolchain/host identities are retained with the results.

[Shared comparison](standard/summary.md) · [Version-1 records](standard/records.json) · [CI run](https://github.com/vishvananda/cppgm-extended/actions/runs/43658654032)
