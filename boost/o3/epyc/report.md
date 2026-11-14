# Boost compilation and test execution

Boost 1.92.0, 17 C++11 suites (1,818 declarations). Ratios are reference / cppgm, higher is better.

Compilation counts child CPU of C++ test compilations, including expected rejections. It excludes configuration probes, library dependencies, C, linking and B2. Test execution includes process startup and the GDB integration test; it is correctness-test timing, not an application benchmark. The debugger source has identical volatile breakpoint anchors for all compilers; MPL and TypeTraits test enums use fixed underlying types for their -1 probes. Original test oracles are retained. Compile timings use one clean campaign per compiler; small differences need repeats.

| Suite | Declarations | Compile CPU cppgm | GCC | Clang | Test CPU cppgm | GCC | Clang |
|---|---:|---:|---:|---:|---:|---:|---:|
| [libs/accumulators/test](suites/libs-accumulators-test.md) | 49 | 55.678s | 2.990× | 3.501× | 2.803s | 1.049× | 0.880× |
| [libs/asio/test](suites/libs-asio-test.md) | 295 | 149.344s | 5.300× | 5.318× | 0.260s | 1.070× | 1.033× |
| [libs/container/test](suites/libs-container-test.md) | 89 | 113.158s | 5.585× | 4.469× | 2.099s | 0.925× | 0.979× |
| [libs/function/test](suites/libs-function-test.md) | 49 | 8.524s | 2.967× | 3.448× | 0.069s | 1.073× | 1.070× |
| [libs/fusion/test](suites/libs-fusion-test.md) | 221 | 65.960s | 2.625× | 3.219× | 0.345s | 1.065× | 0.996× |
| [libs/json/test](suites/libs-json-test.md) | 50 | 63.765s | 7.626× | 5.385× | 2.359s | 0.840× | 0.902× |
| [libs/mp11/test](suites/libs-mp11-test.md) | 234 | 43.790s | 5.428× | 3.784× | 0.351s | 1.069× | 1.103× |
| [libs/mpl/test](suites/libs-mpl-test.md) | 99 | 16.161s | 2.345× | 2.927× | 0.017s | 1.009× | 1.082× |
| [libs/optional/test](suites/libs-optional-test.md) | 74 | 10.410s | 2.818× | 3.134× | 0.070s | 1.009× | 0.977× |
| [libs/proto/test](suites/libs-proto-test.md) | 23 | 15.228s | 2.804× | 3.035× | 0.070s | 1.014× | 0.991× |
| [libs/qvm/test](suites/libs-qvm-test.md) | 134 | 37.780s | 2.777× | 3.486× | 0.267s | 1.010× | 0.941× |
| [libs/spirit/repository/test](suites/libs-spirit-repository-test.md) | 8 | 16.273s | 3.743× | 3.700× | 0.014s | 1.065× | 0.981× |
| [libs/type_erasure/test](suites/libs-type_erasure-test.md) | 60 | 36.178s | 5.554× | 4.435× | 0.133s | 0.961× | 0.949× |
| [libs/type_traits/test](suites/libs-type_traits-test.md) | 218 | 36.488s | 3.434× | 6.366× | 0.318s | 1.048× | 1.028× |
| [libs/uuid/test](suites/libs-uuid-test.md) | 80 | 18.112s | 3.470× | 3.520× | 0.165s | 0.985× | 0.939× |
| [libs/variant2/test](suites/libs-variant2-test.md) | 84 | 45.226s | 2.745× | 4.090× | 0.108s | 0.917× | 0.878× |
| [libs/xpressive/test](suites/libs-xpressive-test.md) | 51 | 73.403s | 4.794× | 4.193× | 0.157s | 1.107× | 0.957× |

Performance uses O3 with assertions enabled; the GDB test remains Og and is correctness-only.

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.980× | 0.981×, 0.978× | 1.004× |
| clang | 0.957× | 0.959×, 0.956× | 1.006× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1362 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43628287753).

Exact commands, per-test times, native outcomes and toolchain/host identities are retained with the results.

[Shared comparison](standard/summary.md) · [Version-1 records](standard/records.json) · [CI run](https://github.com/vishvananda/cppgm-extended/actions/runs/43628287753)
