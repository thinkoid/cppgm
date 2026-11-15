# Boost compilation and test execution

Boost 1.92.0, 17 C++11 suites (1,818 declarations). Ratios are reference / cppgm, higher is better.

Compilation counts child CPU of C++ test compilations, including expected rejections. It excludes configuration probes, library dependencies, C, linking and B2. Test execution includes process startup and the GDB integration test; it is correctness-test timing, not an application benchmark. The debugger source has identical volatile breakpoint anchors for all compilers; MPL and TypeTraits test enums use fixed underlying types for their -1 probes. Original test oracles are retained. Compile timings use one clean campaign per compiler; small differences need repeats.

| Suite | Declarations | Compile CPU cppgm | GCC | Clang | Test CPU cppgm | GCC | Clang |
|---|---:|---:|---:|---:|---:|---:|---:|
| [libs/accumulators/test](suites/libs-accumulators-test.md) | 49 | 44.715s | 3.217× | 3.446× | 2.172s | 1.173× | 0.989× |
| [libs/asio/test](suites/libs-asio-test.md) | 295 | 119.563s | 5.859× | 5.387× | 0.189s | 1.100× | 1.050× |
| [libs/container/test](suites/libs-container-test.md) | 89 | 101.009s | 5.876× | 4.260× | 2.046s | 0.987× | 0.985× |
| [libs/function/test](suites/libs-function-test.md) | 49 | 7.202s | 3.024× | 3.195× | 0.054s | 1.071× | 1.015× |
| [libs/fusion/test](suites/libs-fusion-test.md) | 221 | 53.356s | 2.758× | 3.169× | 0.261s | 1.064× | 0.996× |
| [libs/json/test](suites/libs-json-test.md) | 50 | 58.971s | 7.077× | 4.904× | 1.955s | 0.912× | 1.104× |
| [libs/mp11/test](suites/libs-mp11-test.md) | 234 | 37.062s | 5.543× | 3.554× | 0.271s | 0.968× | 1.051× |
| [libs/mpl/test](suites/libs-mpl-test.md) | 99 | 12.662s | 2.464× | 2.888× | 0.012s | 1.086× | 1.118× |
| [libs/optional/test](suites/libs-optional-test.md) | 74 | 8.325s | 2.944× | 3.041× | 0.052s | 1.010× | 1.014× |
| [libs/proto/test](suites/libs-proto-test.md) | 23 | 12.239s | 2.965× | 3.011× | 0.048s | 1.010× | 0.979× |
| [libs/qvm/test](suites/libs-qvm-test.md) | 134 | 29.837s | 2.945× | 3.406× | 0.199s | 1.020× | 1.019× |
| [libs/spirit/repository/test](suites/libs-spirit-repository-test.md) | 8 | 13.814s | 3.720× | 3.756× | 0.011s | 1.011× | 0.937× |
| [libs/type_erasure/test](suites/libs-type_erasure-test.md) | 60 | 30.062s | 5.370× | 4.422× | 0.087s | 0.959× | 0.913× |
| [libs/type_traits/test](suites/libs-type_traits-test.md) | 218 | 28.827s | 3.446× | 5.902× | 0.237s | 1.023× | 1.026× |
| [libs/uuid/test](suites/libs-uuid-test.md) | 80 | 14.398s | 3.797× | 3.436× | 0.138s | 1.026× | 0.961× |
| [libs/variant2/test](suites/libs-variant2-test.md) | 84 | 33.984s | 3.063× | 4.275× | 0.073s | 0.983× | 0.974× |
| [libs/xpressive/test](suites/libs-xpressive-test.md) | 51 | 62.131s | 4.953× | 4.157× | 0.115s | 1.071× | 0.961× |

Performance uses O3 with assertions enabled; the GDB test remains Og and is correctness-only.

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 1.038× | 1.038×, 1.037× | 1.003× |
| clang | 1.052× | 1.051×, 1.053× | 1.003× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1364 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/43740486413).

Exact commands, per-test times, native outcomes and toolchain/host identities are retained with the results.

[Shared comparison](standard/summary.md) · [Version-1 records](standard/records.json) · [CI run](https://github.com/vishvananda/cppgm/actions/runs/43740486413)
