# Boost compilation and test execution

Boost 1.92.0, 17 C++11 suites (1,818 declarations). Ratios are reference / cppgm, higher is better.

Compilation counts child CPU of C++ test compilations, including expected rejections. It excludes configuration probes, library dependencies, C, linking and B2. Test execution includes process startup and the GDB integration test; it is correctness-test timing, not an application benchmark. The debugger source has identical volatile breakpoint anchors for all compilers; MPL and TypeTraits test enums use fixed underlying types for their -1 probes. Original test oracles are retained. Compile timings use one clean campaign per compiler; small differences need repeats.

| Suite | Declarations | Compile CPU cppgm | GCC | Clang | Test CPU cppgm | GCC | Clang |
|---|---:|---:|---:|---:|---:|---:|---:|
| [libs/accumulators/test](suites/libs-accumulators-test.md) | 49 | 69.023s | 3.082× | 3.961× | 3.037s | 1.156× | 1.020× |
| [libs/asio/test](suites/libs-asio-test.md) | 295 | 184.504s | 5.300× | 6.070× | 0.280s | 1.053× | 1.071× |
| [libs/container/test](suites/libs-container-test.md) | 89 | 134.228s | 6.087× | 5.101× | 2.427s | 1.025× | 1.078× |
| [libs/function/test](suites/libs-function-test.md) | 49 | 11.420s | 2.892× | 3.842× | 0.078s | 1.050× | 1.066× |
| [libs/fusion/test](suites/libs-fusion-test.md) | 221 | 85.717s | 2.629× | 3.677× | 0.379s | 1.066× | 1.050× |
| [libs/json/test](suites/libs-json-test.md) | 50 | 82.934s | 6.908× | 5.699× | 3.325s | 0.772× | 1.068× |
| [libs/mp11/test](suites/libs-mp11-test.md) | 234 | 57.272s | 5.483× | 4.228× | 0.383s | 1.098× | 1.152× |
| [libs/mpl/test](suites/libs-mpl-test.md) | 99 | 20.728s | 2.430× | 3.408× | 0.018s | 1.049× | 1.179× |
| [libs/optional/test](suites/libs-optional-test.md) | 74 | 13.197s | 2.932× | 3.744× | 0.075s | 1.041× | 1.061× |
| [libs/proto/test](suites/libs-proto-test.md) | 23 | 19.184s | 2.904× | 3.513× | 0.079s | 1.009× | 1.046× |
| [libs/qvm/test](suites/libs-qvm-test.md) | 134 | 48.627s | 2.885× | 4.145× | 0.306s | 1.018× | 0.998× |
| [libs/spirit/repository/test](suites/libs-spirit-repository-test.md) | 8 | 20.331s | 3.610× | 4.246× | 0.015s | 1.046× | 1.022× |
| [libs/type_erasure/test](suites/libs-type_erasure-test.md) | 60 | 45.334s | 5.087× | 4.914× | 0.154s | 0.970× | 0.981× |
| [libs/type_traits/test](suites/libs-type_traits-test.md) | 218 | 49.290s | 3.445× | 7.099× | 0.340s | 1.080× | 1.084× |
| [libs/uuid/test](suites/libs-uuid-test.md) | 80 | 22.715s | 3.677× | 4.200× | 0.176s | 1.064× | 1.066× |
| [libs/variant2/test](suites/libs-variant2-test.md) | 84 | 52.763s | 3.034× | 5.022× | 0.104s | 1.076× | 1.023× |
| [libs/xpressive/test](suites/libs-xpressive-test.md) | 51 | 90.682s | 4.813× | 4.718× | 0.180s | 1.147× | 1.030× |

Performance uses O3 with assertions enabled; the GDB test remains Og and is correctness-only.

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 1.035× | 1.033×, 1.038× | 1.005× |
| clang | 1.036× | 1.032×, 1.041× | 1.003× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1359 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/43785224349).

Exact commands, per-test times, native outcomes and toolchain/host identities are retained with the results.

[Shared comparison](standard/summary.md) · [Version-1 records](standard/records.json) · [CI run](https://github.com/vishvananda/cppgm/actions/runs/43785224349)
