# Boost compilation and test execution

Boost 1.92.0, 17 C++11 suites (1,818 declarations). Ratios are reference / cppgm, higher is better.

Compilation counts child CPU of C++ test compilations, including expected rejections. It excludes configuration probes, library dependencies, C, linking and B2. Test execution includes process startup and the GDB integration test; it is correctness-test timing, not an application benchmark. The debugger source has identical volatile breakpoint anchors for all compilers; MPL and TypeTraits test enums use fixed underlying types for their -1 probes. Original test oracles are retained. Compile timings use one clean campaign per compiler; small differences need repeats.

| Suite | Declarations | Compile CPU cppgm | GCC | Clang | Test CPU cppgm | GCC | Clang |
|---|---:|---:|---:|---:|---:|---:|---:|
| [libs/accumulators/test](suites/libs-accumulators-test.md) | 49 | 55.347s | 2.925× | 3.490× | 2.804s | 1.056× | 0.881× |
| [libs/asio/test](suites/libs-asio-test.md) | 295 | 145.733s | 5.227× | 5.385× | 0.257s | 1.039× | 1.053× |
| [libs/container/test](suites/libs-container-test.md) | 89 | 115.705s | 5.485× | 4.184× | 2.102s | 0.928× | 0.972× |
| [libs/function/test](suites/libs-function-test.md) | 49 | 8.836s | 2.832× | 3.331× | 0.072s | 1.062× | 1.032× |
| [libs/fusion/test](suites/libs-fusion-test.md) | 221 | 66.813s | 2.563× | 3.186× | 0.347s | 1.044× | 1.002× |
| [libs/json/test](suites/libs-json-test.md) | 50 | 64.555s | 7.290× | 5.279× | 2.404s | 0.760× | 0.967× |
| [libs/mp11/test](suites/libs-mp11-test.md) | 234 | 44.566s | 5.154× | 3.670× | 0.353s | 1.035× | 1.077× |
| [libs/mpl/test](suites/libs-mpl-test.md) | 99 | 16.027s | 2.289× | 2.952× | 0.016s | 1.033× | 1.092× |
| [libs/optional/test](suites/libs-optional-test.md) | 74 | 10.148s | 2.817× | 3.193× | 0.068s | 1.028× | 1.018× |
| [libs/proto/test](suites/libs-proto-test.md) | 23 | 14.907s | 2.811× | 3.098× | 0.068s | 1.024× | 1.024× |
| [libs/qvm/test](suites/libs-qvm-test.md) | 134 | 37.334s | 2.729× | 3.524× | 0.264s | 0.983× | 0.978× |
| [libs/spirit/repository/test](suites/libs-spirit-repository-test.md) | 8 | 15.673s | 3.612× | 3.997× | 0.014s | 1.012× | 1.022× |
| [libs/type_erasure/test](suites/libs-type_erasure-test.md) | 60 | 35.460s | 5.450× | 4.641× | 0.131s | 0.974× | 0.979× |
| [libs/type_traits/test](suites/libs-type_traits-test.md) | 218 | 35.851s | 3.497× | 6.498× | 0.299s | 1.126× | 1.113× |
| [libs/uuid/test](suites/libs-uuid-test.md) | 80 | 17.070s | 3.716× | 3.669× | 0.152s | 1.082× | 1.023× |
| [libs/variant2/test](suites/libs-variant2-test.md) | 84 | 40.760s | 3.050× | 4.511× | 0.095s | 1.060× | 1.018× |
| [libs/xpressive/test](suites/libs-xpressive-test.md) | 51 | 70.707s | 4.830× | 4.286× | 0.151s | 1.144× | 0.999× |

Performance uses O3 with assertions enabled; the GDB test remains Og and is correctness-only.

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.975× | 0.976×, 0.974× | 0.986× |
| clang | 0.957× | 0.961×, 0.952× | 0.991× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1363 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43620819273).

Exact commands, per-test times, native outcomes and toolchain/host identities are retained with the results.

[Shared comparison](standard/summary.md) · [Version-1 records](standard/records.json) · [CI run](https://github.com/vishvananda/cppgm-extended/actions/runs/43620819273)
