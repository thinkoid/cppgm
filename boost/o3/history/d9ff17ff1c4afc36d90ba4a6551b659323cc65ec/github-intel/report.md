# Boost compilation and test execution

Boost 1.92.0, 17 C++11 suites (1,818 declarations). Ratios are reference / cppgm, higher is better.

Compilation counts child CPU of C++ test compilations, including expected rejections. It excludes configuration probes, library dependencies, C, linking and B2. Test execution includes process startup and the GDB integration test; it is correctness-test timing, not an application benchmark. The debugger source has identical volatile breakpoint anchors for all compilers; MPL and TypeTraits test enums use fixed underlying types for their -1 probes. Original test oracles are retained. Compile timings use one clean campaign per compiler; small differences need repeats.

| Suite | Declarations | Compile CPU cppgm | GCC | Clang | Test CPU cppgm | GCC | Clang |
|---|---:|---:|---:|---:|---:|---:|---:|
| [libs/accumulators/test](suites/libs-accumulators-test.md) | 49 | 41.404s | 3.294× | 3.511× | 2.166s | 1.149× | 0.993× |
| [libs/asio/test](suites/libs-asio-test.md) | 295 | 111.656s | 6.003× | 5.495× | 0.152s | 1.127× | 1.028× |
| [libs/container/test](suites/libs-container-test.md) | 89 | 107.760s | 5.265× | 3.783× | 1.944s | 1.005× | 1.012× |
| [libs/function/test](suites/libs-function-test.md) | 49 | 6.549s | 3.182× | 3.374× | 0.044s | 1.114× | 0.975× |
| [libs/fusion/test](suites/libs-fusion-test.md) | 221 | 49.740s | 2.849× | 3.265× | 0.217s | 1.126× | 0.975× |
| [libs/json/test](suites/libs-json-test.md) | 50 | 55.907s | 7.045× | 4.846× | 1.929s | 0.921× | 1.138× |
| [libs/mp11/test](suites/libs-mp11-test.md) | 234 | 33.869s | 5.952× | 3.750× | 0.217s | 1.144× | 1.054× |
| [libs/mpl/test](suites/libs-mpl-test.md) | 99 | 11.647s | 2.598× | 3.037× | 0.010s | 1.172× | 1.085× |
| [libs/optional/test](suites/libs-optional-test.md) | 74 | 7.484s | 3.173× | 3.260× | 0.042s | 1.156× | 0.988× |
| [libs/proto/test](suites/libs-proto-test.md) | 23 | 11.351s | 3.093× | 3.121× | 0.041s | 1.051× | 0.951× |
| [libs/qvm/test](suites/libs-qvm-test.md) | 134 | 27.632s | 3.080× | 3.534× | 0.173s | 1.093× | 0.988× |
| [libs/spirit/repository/test](suites/libs-spirit-repository-test.md) | 8 | 12.836s | 3.821× | 3.884× | 0.010s | 1.042× | 0.914× |
| [libs/type_erasure/test](suites/libs-type_erasure-test.md) | 60 | 28.247s | 5.409× | 4.430× | 0.077s | 0.981× | 0.899× |
| [libs/type_traits/test](suites/libs-type_traits-test.md) | 218 | 26.120s | 3.671× | 6.325× | 0.195s | 1.152× | 1.002× |
| [libs/uuid/test](suites/libs-uuid-test.md) | 80 | 13.192s | 3.993× | 3.617× | 0.118s | 1.076× | 0.977× |
| [libs/variant2/test](suites/libs-variant2-test.md) | 84 | 31.206s | 3.229× | 4.381× | 0.059s | 1.118× | 0.959× |
| [libs/xpressive/test](suites/libs-xpressive-test.md) | 51 | 58.289s | 5.077× | 4.216× | 0.103s | 1.103× | 0.956× |

Performance uses O3 with assertions enabled; the GDB test remains Og and is correctness-only.

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 1.036× | 1.039×, 1.033× | 1.004× |
| clang | 1.047× | 1.047×, 1.046× | 0.994× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1362 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43670794197).

Exact commands, per-test times, native outcomes and toolchain/host identities are retained with the results.

[Shared comparison](standard/summary.md) · [Version-1 records](standard/records.json) · [CI run](https://github.com/vishvananda/cppgm-extended/actions/runs/43670794197)
