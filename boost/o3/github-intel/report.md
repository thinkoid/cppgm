# Boost compilation and test execution

Boost 1.92.0, 17 C++11 suites (1,818 declarations). Ratios are reference / cppgm, higher is better.

Compilation counts child CPU of C++ test compilations, including expected rejections. It excludes configuration probes, library dependencies, C, linking and B2. Test execution includes process startup and the GDB integration test; it is correctness-test timing, not an application benchmark. The debugger source has identical volatile breakpoint anchors for all compilers; MPL and TypeTraits test enums use fixed underlying types for their -1 probes. Original test oracles are retained. Compile timings use one clean campaign per compiler; small differences need repeats.

| Suite | Declarations | Compile CPU cppgm | GCC | Clang | Test CPU cppgm | GCC | Clang |
|---|---:|---:|---:|---:|---:|---:|---:|
| [libs/accumulators/test](suites/libs-accumulators-test.md) | 49 | 41.902s | 3.397× | 3.627× | 2.176s | 1.163× | 0.995× |
| [libs/asio/test](suites/libs-asio-test.md) | 295 | 113.286s | 6.105× | 5.636× | 0.177s | 1.126× | 1.058× |
| [libs/container/test](suites/libs-container-test.md) | 89 | 99.203s | 5.858× | 4.249× | 1.942s | 1.029× | 1.025× |
| [libs/function/test](suites/libs-function-test.md) | 49 | 6.893s | 3.080× | 3.286× | 0.052s | 1.040× | 0.955× |
| [libs/fusion/test](suites/libs-fusion-test.md) | 221 | 51.640s | 2.761× | 3.222× | 0.251s | 1.002× | 0.967× |
| [libs/json/test](suites/libs-json-test.md) | 50 | 56.839s | 7.168× | 4.961× | 1.956s | 0.901× | 1.122× |
| [libs/mp11/test](suites/libs-mp11-test.md) | 234 | 35.873s | 5.698× | 3.597× | 0.254s | 1.031× | 1.007× |
| [libs/mpl/test](suites/libs-mpl-test.md) | 99 | 12.405s | 2.475× | 2.896× | 0.011s | 1.096× | 1.083× |
| [libs/optional/test](suites/libs-optional-test.md) | 74 | 8.065s | 3.007× | 3.095× | 0.051s | 1.010× | 0.937× |
| [libs/proto/test](suites/libs-proto-test.md) | 23 | 11.713s | 3.072× | 3.099× | 0.047s | 1.015× | 0.926× |
| [libs/qvm/test](suites/libs-qvm-test.md) | 134 | 29.154s | 2.975× | 3.427× | 0.195s | 1.014× | 0.988× |
| [libs/spirit/repository/test](suites/libs-spirit-repository-test.md) | 8 | 13.302s | 3.764× | 3.814× | 0.011s | 0.932× | 0.882× |
| [libs/type_erasure/test](suites/libs-type_erasure-test.md) | 60 | 29.219s | 5.401× | 4.435× | 0.086s | 0.920× | 0.860× |
| [libs/type_traits/test](suites/libs-type_traits-test.md) | 218 | 28.450s | 3.422× | 5.933× | 0.234s | 0.998× | 1.001× |
| [libs/uuid/test](suites/libs-uuid-test.md) | 80 | 14.074s | 3.794× | 3.472× | 0.135s | 1.004× | 0.969× |
| [libs/variant2/test](suites/libs-variant2-test.md) | 84 | 31.881s | 3.251× | 4.501× | 0.070s | 0.996× | 1.005× |
| [libs/xpressive/test](suites/libs-xpressive-test.md) | 51 | 59.689s | 5.139× | 4.328× | 0.110s | 1.127× | 0.986× |

Performance uses O3 with assertions enabled; the GDB test remains Og and is correctness-only.

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 1.033× | 1.029×, 1.037× | 1.007× |
| clang | 1.046× | 1.046×, 1.045× | 1.003× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1364 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44362912212).

Exact commands, per-test times, native outcomes and toolchain/host identities are retained with the results.

[Shared comparison](standard/summary.md) · [Version-1 records](standard/records.json) · [CI run](https://github.com/vishvananda/cppgm/actions/runs/44362912212)
