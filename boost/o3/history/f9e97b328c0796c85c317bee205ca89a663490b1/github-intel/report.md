# Boost compilation and test execution

Boost 1.92.0, 17 C++11 suites (1,818 declarations). Ratios are reference / cppgm, higher is better.

Compilation counts child CPU of C++ test compilations, including expected rejections. It excludes configuration probes, library dependencies, C, linking and B2. Test execution includes process startup and the GDB integration test; it is correctness-test timing, not an application benchmark. The debugger source has identical volatile breakpoint anchors for all compilers; MPL and TypeTraits test enums use fixed underlying types for their -1 probes. Original test oracles are retained. Compile timings use one clean campaign per compiler; small differences need repeats.

| Suite | Declarations | Compile CPU cppgm | GCC | Clang | Test CPU cppgm | GCC | Clang |
|---|---:|---:|---:|---:|---:|---:|---:|
| [libs/accumulators/test](suites/libs-accumulators-test.md) | 49 | 54.902s | 3.272× | 3.463× | 2.830s | 1.144× | 0.982× |
| [libs/asio/test](suites/libs-asio-test.md) | 295 | 150.737s | 5.719× | 5.245× | 0.197s | 1.105× | 1.029× |
| [libs/container/test](suites/libs-container-test.md) | 89 | 140.090s | 5.278× | 3.747× | 2.174s | 0.986× | 1.031× |
| [libs/function/test](suites/libs-function-test.md) | 49 | 9.107s | 3.065× | 3.138× | 0.058s | 1.029× | 0.932× |
| [libs/fusion/test](suites/libs-fusion-test.md) | 221 | 66.121s | 2.852× | 3.191× | 0.275s | 1.076× | 0.987× |
| [libs/json/test](suites/libs-json-test.md) | 50 | 73.626s | 6.679× | 4.684× | 2.743s | 0.912× | 1.093× |
| [libs/mp11/test](suites/libs-mp11-test.md) | 234 | 46.447s | 5.719× | 3.556× | 0.274s | 1.093× | 1.079× |
| [libs/mpl/test](suites/libs-mpl-test.md) | 99 | 16.144s | 2.556× | 2.916× | 0.013s | 1.104× | 1.101× |
| [libs/optional/test](suites/libs-optional-test.md) | 74 | 10.549s | 2.993× | 3.047× | 0.055s | 1.030× | 0.989× |
| [libs/proto/test](suites/libs-proto-test.md) | 23 | 15.092s | 3.068× | 3.070× | 0.054s | 1.023× | 0.934× |
| [libs/qvm/test](suites/libs-qvm-test.md) | 134 | 37.386s | 3.074× | 3.452× | 0.222s | 1.068× | 1.022× |
| [libs/spirit/repository/test](suites/libs-spirit-repository-test.md) | 8 | 15.950s | 3.894× | 4.044× | 0.011s | 1.040× | 1.001× |
| [libs/type_erasure/test](suites/libs-type_erasure-test.md) | 60 | 36.761s | 5.248× | 4.360× | 0.099s | 0.988× | 0.940× |
| [libs/type_traits/test](suites/libs-type_traits-test.md) | 218 | 36.509s | 3.534× | 6.092× | 0.247s | 1.100× | 1.047× |
| [libs/uuid/test](suites/libs-uuid-test.md) | 80 | 18.047s | 3.912× | 3.515× | 0.142s | 1.055× | 1.004× |
| [libs/variant2/test](suites/libs-variant2-test.md) | 84 | 40.958s | 3.187× | 4.368× | 0.075s | 1.069× | 0.987× |
| [libs/xpressive/test](suites/libs-xpressive-test.md) | 51 | 76.877s | 5.025× | 4.143× | 0.134s | 1.086× | 0.956× |

Performance uses O3 with assertions enabled; the GDB test remains Og and is correctness-only.

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 1.020× | 1.026×, 1.014× | 0.998× |
| clang | 1.038× | 1.039×, 1.037× | 0.991× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1360 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43654890423).

Exact commands, per-test times, native outcomes and toolchain/host identities are retained with the results.

[Shared comparison](standard/summary.md) · [Version-1 records](standard/records.json) · [CI run](https://github.com/vishvananda/cppgm-extended/actions/runs/43654890423)
