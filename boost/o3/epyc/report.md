# Boost compilation and test execution

Boost 1.92.0, 17 C++11 suites (1,818 declarations). Ratios are reference / cppgm, higher is better.

Compilation counts child CPU of C++ test compilations, including expected rejections. It excludes configuration probes, library dependencies, C, linking and B2. Test execution includes process startup and the GDB integration test; it is correctness-test timing, not an application benchmark. The debugger source has identical volatile breakpoint anchors for all compilers; MPL and TypeTraits test enums use fixed underlying types for their -1 probes. Original test oracles are retained. Compile timings use one clean campaign per compiler; small differences need repeats.

| Suite | Declarations | Compile CPU cppgm | GCC | Clang | Test CPU cppgm | GCC | Clang |
|---|---:|---:|---:|---:|---:|---:|---:|
| [libs/accumulators/test](suites/libs-accumulators-test.md) | 49 | 43.667s | 2.899× | 2.847× | 1.966s | 1.149× | 0.958× |
| [libs/asio/test](suites/libs-asio-test.md) | 295 | 113.680s | 5.397× | 4.626× | 0.235s | 1.041× | 0.919× |
| [libs/container/test](suites/libs-container-test.md) | 89 | 94.797s | 5.066× | 3.883× | 1.568s | 0.968× | 0.988× |
| [libs/function/test](suites/libs-function-test.md) | 49 | 7.042s | 2.560× | 2.723× | 0.068s | 0.915× | 0.877× |
| [libs/fusion/test](suites/libs-fusion-test.md) | 221 | 49.031s | 2.493× | 2.884× | 0.307s | 1.001× | 0.974× |
| [libs/json/test](suites/libs-json-test.md) | 50 | 51.630s | 6.859× | 4.850× | 1.655s | 0.898× | 1.132× |
| [libs/mp11/test](suites/libs-mp11-test.md) | 234 | 33.747s | 5.109× | 3.352× | 0.312s | 1.007× | 1.030× |
| [libs/mpl/test](suites/libs-mpl-test.md) | 99 | 12.191s | 2.217× | 2.549× | 0.015s | 0.924× | 0.943× |
| [libs/optional/test](suites/libs-optional-test.md) | 74 | 7.768s | 2.712× | 2.773× | 0.061s | 0.978× | 0.998× |
| [libs/proto/test](suites/libs-proto-test.md) | 23 | 11.270s | 2.713× | 2.742× | 0.058s | 0.997× | 0.983× |
| [libs/qvm/test](suites/libs-qvm-test.md) | 134 | 28.557s | 2.644× | 3.020× | 0.226s | 1.017× | 0.945× |
| [libs/spirit/repository/test](suites/libs-spirit-repository-test.md) | 8 | 12.363s | 3.489× | 3.529× | 0.013s | 1.072× | 0.980× |
| [libs/type_erasure/test](suites/libs-type_erasure-test.md) | 60 | 27.145s | 5.085× | 4.098× | 0.111s | 0.991× | 0.974× |
| [libs/type_traits/test](suites/libs-type_traits-test.md) | 218 | 27.078s | 3.162× | 5.210× | 0.277s | 1.020× | 1.034× |
| [libs/uuid/test](suites/libs-uuid-test.md) | 80 | 13.599s | 3.333× | 3.102× | 0.529s | 0.997× | 0.997× |
| [libs/variant2/test](suites/libs-variant2-test.md) | 84 | 31.438s | 2.786× | 3.839× | 0.087s | 0.978× | 0.931× |
| [libs/xpressive/test](suites/libs-xpressive-test.md) | 51 | 57.599s | 4.531× | 3.782× | 0.136s | 1.054× | 0.951× |

Performance uses O3 with assertions enabled; the GDB test remains Og and is correctness-only.

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 1.033× | 1.028×, 1.037× | 1.001× |
| clang | 1.026× | 1.031×, 1.021× | 1.002× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1364 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43686398833).

Exact commands, per-test times, native outcomes and toolchain/host identities are retained with the results.

[Shared comparison](standard/summary.md) · [Version-1 records](standard/records.json) · [CI run](https://github.com/vishvananda/cppgm-extended/actions/runs/43686398833)
