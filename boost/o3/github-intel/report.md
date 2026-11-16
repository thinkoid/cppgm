# Boost compilation and test execution

Boost 1.92.0, 17 C++11 suites (1,818 declarations). Ratios are reference / cppgm, higher is better.

Compilation counts child CPU of C++ test compilations, including expected rejections. It excludes configuration probes, library dependencies, C, linking and B2. Test execution includes process startup and the GDB integration test; it is correctness-test timing, not an application benchmark. The debugger source has identical volatile breakpoint anchors for all compilers; MPL and TypeTraits test enums use fixed underlying types for their -1 probes. Original test oracles are retained. Compile timings use one clean campaign per compiler; small differences need repeats.

| Suite | Declarations | Compile CPU cppgm | GCC | Clang | Test CPU cppgm | GCC | Clang |
|---|---:|---:|---:|---:|---:|---:|---:|
| [libs/accumulators/test](suites/libs-accumulators-test.md) | 49 | 43.085s | 3.343× | 3.500× | 2.166s | 1.171× | 0.987× |
| [libs/asio/test](suites/libs-asio-test.md) | 295 | 115.154s | 6.020× | 5.463× | 0.171s | 1.165× | 1.065× |
| [libs/container/test](suites/libs-container-test.md) | 89 | 99.643s | 5.869× | 4.188× | 1.941s | 1.018× | 1.024× |
| [libs/function/test](suites/libs-function-test.md) | 49 | 7.043s | 3.041× | 3.210× | 0.051s | 1.060× | 0.966× |
| [libs/fusion/test](suites/libs-fusion-test.md) | 221 | 52.158s | 2.798× | 3.188× | 0.243s | 1.116× | 0.966× |
| [libs/json/test](suites/libs-json-test.md) | 50 | 57.338s | 7.237× | 4.935× | 1.950s | 0.920× | 1.132× |
| [libs/mp11/test](suites/libs-mp11-test.md) | 234 | 36.063s | 5.738× | 3.582× | 0.245s | 1.118× | 1.011× |
| [libs/mpl/test](suites/libs-mpl-test.md) | 99 | 12.372s | 2.531× | 2.922× | 0.011s | 1.196× | 1.170× |
| [libs/optional/test](suites/libs-optional-test.md) | 74 | 7.953s | 3.109× | 3.153× | 0.047s | 1.139× | 1.040× |
| [libs/proto/test](suites/libs-proto-test.md) | 23 | 11.864s | 3.075× | 3.024× | 0.045s | 1.074× | 0.937× |
| [libs/qvm/test](suites/libs-qvm-test.md) | 134 | 29.229s | 3.022× | 3.392× | 0.190s | 1.089× | 0.954× |
| [libs/spirit/repository/test](suites/libs-spirit-repository-test.md) | 8 | 13.387s | 3.818× | 3.810× | 0.010s | 1.116× | 0.927× |
| [libs/type_erasure/test](suites/libs-type_erasure-test.md) | 60 | 29.411s | 5.612× | 4.310× | 0.083s | 1.008× | 0.852× |
| [libs/type_traits/test](suites/libs-type_traits-test.md) | 218 | 28.670s | 3.454× | 5.831× | 0.235s | 1.025× | 0.898× |
| [libs/uuid/test](suites/libs-uuid-test.md) | 80 | 14.313s | 3.743× | 3.393× | 0.138s | 0.983× | 0.900× |
| [libs/variant2/test](suites/libs-variant2-test.md) | 84 | 33.744s | 3.056× | 4.134× | 0.072s | 0.958× | 0.878× |
| [libs/xpressive/test](suites/libs-xpressive-test.md) | 51 | 62.053s | 4.924× | 4.031× | 0.115s | 1.056× | 0.878× |

Performance uses O3 with assertions enabled; the GDB test remains Og and is correctness-only.

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 1.035× | 1.037×, 1.033× | 1.001× |
| clang | 1.049× | 1.049×, 1.050× | 1.002× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1364 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/43778388618).

Exact commands, per-test times, native outcomes and toolchain/host identities are retained with the results.

[Shared comparison](standard/summary.md) · [Version-1 records](standard/records.json) · [CI run](https://github.com/vishvananda/cppgm/actions/runs/43778388618)
