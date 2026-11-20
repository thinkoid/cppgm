# Boost compilation and test execution

Boost 1.92.0, 17 C++11 suites (1,818 declarations). Ratios are reference / cppgm, higher is better.

Compilation counts child CPU of C++ test compilations, including expected rejections. It excludes configuration probes, library dependencies, C, linking and B2. Test execution includes process startup and the GDB integration test; it is correctness-test timing, not an application benchmark. The debugger source has identical volatile breakpoint anchors for all compilers; MPL and TypeTraits test enums use fixed underlying types for their -1 probes. Original test oracles are retained. Compile timings use one clean campaign per compiler; small differences need repeats.

| Suite | Declarations | Compile CPU cppgm | GCC | Clang | Test CPU cppgm | GCC | Clang |
|---|---:|---:|---:|---:|---:|---:|---:|
| [libs/accumulators/test](suites/libs-accumulators-test.md) | 49 | 68.254s | 3.132× | 3.991× | 3.048s | 1.160× | 1.015× |
| [libs/asio/test](suites/libs-asio-test.md) | 295 | 183.990s | 5.342× | 6.045× | 0.286s | 1.034× | 1.034× |
| [libs/container/test](suites/libs-container-test.md) | 89 | 132.294s | 6.174× | 5.175× | 2.421s | 1.241× | 1.062× |
| [libs/function/test](suites/libs-function-test.md) | 49 | 11.183s | 2.958× | 3.940× | 0.079s | 1.069× | 1.071× |
| [libs/fusion/test](suites/libs-fusion-test.md) | 221 | 84.140s | 2.692× | 3.726× | 0.378s | 1.068× | 1.059× |
| [libs/json/test](suites/libs-json-test.md) | 50 | 81.505s | 6.919× | 5.798× | 3.307s | 0.773× | 1.060× |
| [libs/mp11/test](suites/libs-mp11-test.md) | 234 | 56.856s | 5.453× | 4.236× | 0.384s | 1.064× | 1.129× |
| [libs/mpl/test](suites/libs-mpl-test.md) | 99 | 20.491s | 2.432× | 3.445× | 0.017s | 1.103× | 1.180× |
| [libs/optional/test](suites/libs-optional-test.md) | 74 | 12.988s | 2.996× | 3.809× | 0.075s | 1.022× | 1.049× |
| [libs/proto/test](suites/libs-proto-test.md) | 23 | 18.700s | 2.978× | 3.593× | 0.076s | 1.070× | 1.061× |
| [libs/qvm/test](suites/libs-qvm-test.md) | 134 | 48.121s | 2.919× | 4.135× | 0.310s | 1.009× | 0.980× |
| [libs/spirit/repository/test](suites/libs-spirit-repository-test.md) | 8 | 19.839s | 3.688× | 4.331× | 0.016s | 1.040× | 1.011× |
| [libs/type_erasure/test](suites/libs-type_erasure-test.md) | 60 | 44.952s | 5.098× | 4.951× | 0.155s | 0.964× | 0.987× |
| [libs/type_traits/test](suites/libs-type_traits-test.md) | 218 | 49.584s | 3.413× | 7.050× | 0.349s | 1.037× | 1.079× |
| [libs/uuid/test](suites/libs-uuid-test.md) | 80 | 22.674s | 3.664× | 4.203× | 0.182s | 1.015× | 1.040× |
| [libs/variant2/test](suites/libs-variant2-test.md) | 84 | 52.868s | 2.993× | 4.964× | 0.107s | 1.029× | 0.990× |
| [libs/xpressive/test](suites/libs-xpressive-test.md) | 51 | 90.213s | 4.839× | 4.710× | 0.185s | 1.131× | 0.993× |

Performance uses O3 with assertions enabled; the GDB test remains Og and is correctness-only.

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 1.037× | 1.037×, 1.037× | 0.999× |
| clang | 1.030× | 1.031×, 1.029× | 0.999× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1360 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/thinkoid/cppgm/actions/runs/44661842949).

Exact commands, per-test times, native outcomes and toolchain/host identities are retained with the results.

[Shared comparison](standard/summary.md) · [Version-1 records](standard/records.json) · [CI run](https://github.com/thinkoid/cppgm/actions/runs/44661842949)
