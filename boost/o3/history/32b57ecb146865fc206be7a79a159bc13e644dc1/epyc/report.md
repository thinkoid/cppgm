# Boost compilation and test execution

Boost 1.92.0, 17 C++11 suites (1,818 declarations). Ratios are reference / cppgm, higher is better.

Compilation counts child CPU of C++ test compilations, including expected rejections. It excludes configuration probes, library dependencies, C, linking and B2. Test execution includes process startup and the GDB integration test; it is correctness-test timing, not an application benchmark. The debugger source has identical volatile breakpoint anchors for all compilers; MPL and TypeTraits test enums use fixed underlying types for their -1 probes. Original test oracles are retained. Compile timings use one clean campaign per compiler; small differences need repeats.

| Suite | Declarations | Compile CPU cppgm | GCC | Clang | Test CPU cppgm | GCC | Clang |
|---|---:|---:|---:|---:|---:|---:|---:|
| [libs/accumulators/test](suites/libs-accumulators-test.md) | 49 | 40.768s | 3.095× | 3.189× | 2.056s | 1.111× | 0.944× |
| [libs/asio/test](suites/libs-asio-test.md) | 295 | 112.573s | 5.494× | 4.917× | 0.227s | 1.037× | 1.010× |
| [libs/container/test](suites/libs-container-test.md) | 89 | 96.283s | 5.485× | 3.842× | 1.570s | 1.017× | 0.990× |
| [libs/function/test](suites/libs-function-test.md) | 49 | 7.094s | 2.671× | 2.804× | 0.066s | 1.014× | 0.947× |
| [libs/fusion/test](suites/libs-fusion-test.md) | 221 | 53.519s | 2.392× | 2.732× | 0.336s | 0.947× | 0.913× |
| [libs/json/test](suites/libs-json-test.md) | 50 | 53.962s | 6.585× | 4.693× | 1.822s | 0.841× | 1.063× |
| [libs/mp11/test](suites/libs-mp11-test.md) | 234 | 34.298s | 5.273× | 3.489× | 0.316s | 1.044× | 1.144× |
| [libs/mpl/test](suites/libs-mpl-test.md) | 99 | 11.838s | 2.429× | 2.795× | 0.014s | 1.051× | 1.184× |
| [libs/optional/test](suites/libs-optional-test.md) | 74 | 7.630s | 2.863× | 2.943× | 0.059s | 1.069× | 1.083× |
| [libs/proto/test](suites/libs-proto-test.md) | 23 | 11.184s | 2.835× | 2.899× | 0.059s | 1.043× | 1.040× |
| [libs/qvm/test](suites/libs-qvm-test.md) | 134 | 28.361s | 2.755× | 3.208× | 0.223s | 1.048× | 1.048× |
| [libs/spirit/repository/test](suites/libs-spirit-repository-test.md) | 8 | 11.841s | 3.867× | 4.003× | 0.013s | 1.069× | 1.048× |
| [libs/type_erasure/test](suites/libs-type_erasure-test.md) | 60 | 26.624s | 5.507× | 4.553× | 0.117s | 0.982× | 0.974× |
| [libs/type_traits/test](suites/libs-type_traits-test.md) | 218 | 26.709s | 3.425× | 5.424× | 0.269s | 1.125× | 1.093× |
| [libs/uuid/test](suites/libs-uuid-test.md) | 80 | 13.189s | 3.645× | 3.277× | 0.525s | 1.026× | 1.006× |
| [libs/variant2/test](suites/libs-variant2-test.md) | 84 | 31.562s | 2.860× | 3.979× | 0.085s | 1.010× | 1.009× |
| [libs/xpressive/test](suites/libs-xpressive-test.md) | 51 | 55.361s | 4.913× | 4.156× | 0.133s | 1.113× | 1.010× |

Performance uses O3 with assertions enabled; the GDB test remains Og and is correctness-only.

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.999× | 1.002×, 0.996× | 1.003× |
| clang | 0.994× | 0.988×, 1.001× | 0.982× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1364 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43639138948).

Exact commands, per-test times, native outcomes and toolchain/host identities are retained with the results.

[Shared comparison](standard/summary.md) · [Version-1 records](standard/records.json) · [CI run](https://github.com/vishvananda/cppgm-extended/actions/runs/43639138948)
