# Boost compilation and test execution

Boost 1.92.0, 17 C++11 suites (1,818 declarations). Ratios are reference / cppgm, higher is better.

Compilation counts child CPU of C++ test compilations, including expected rejections. It excludes configuration probes, library dependencies, C, linking and B2. Test execution includes process startup and the GDB integration test; it is correctness-test timing, not an application benchmark. The debugger source has identical volatile breakpoint anchors for all compilers; MPL and TypeTraits test enums use fixed underlying types for their -1 probes. Original test oracles are retained. Compile timings use one clean campaign per compiler; small differences need repeats.

| Suite | Declarations | Compile CPU cppgm | GCC | Clang | Test CPU cppgm | GCC | Clang |
|---|---:|---:|---:|---:|---:|---:|---:|
| [libs/accumulators/test](suites/libs-accumulators-test.md) | 49 | 41.783s | 3.287× | 3.602× | 2.172s | 1.170× | 0.986× |
| [libs/asio/test](suites/libs-asio-test.md) | 295 | 112.077s | 6.069× | 5.711× | 0.165s | 1.127× | 1.182× |
| [libs/container/test](suites/libs-container-test.md) | 89 | 98.072s | 5.915× | 4.301× | 1.940s | 1.020× | 1.036× |
| [libs/function/test](suites/libs-function-test.md) | 49 | 6.872s | 3.091× | 3.316× | 0.047s | 1.122× | 1.122× |
| [libs/fusion/test](suites/libs-fusion-test.md) | 221 | 51.408s | 2.815× | 3.194× | 0.237s | 1.107× | 0.980× |
| [libs/json/test](suites/libs-json-test.md) | 50 | 56.970s | 7.172× | 4.883× | 1.956s | 0.922× | 1.120× |
| [libs/mp11/test](suites/libs-mp11-test.md) | 234 | 36.168s | 5.608× | 3.540× | 0.245s | 1.045× | 1.024× |
| [libs/mpl/test](suites/libs-mpl-test.md) | 99 | 12.257s | 2.490× | 2.931× | 0.011s | 1.092× | 1.130× |
| [libs/optional/test](suites/libs-optional-test.md) | 74 | 7.715s | 3.114× | 3.217× | 0.045s | 1.099× | 1.056× |
| [libs/proto/test](suites/libs-proto-test.md) | 23 | 11.602s | 3.078× | 3.143× | 0.044s | 1.070× | 1.054× |
| [libs/qvm/test](suites/libs-qvm-test.md) | 134 | 28.821s | 2.982× | 3.476× | 0.186s | 1.037× | 1.041× |
| [libs/spirit/repository/test](suites/libs-spirit-repository-test.md) | 8 | 13.167s | 3.818× | 3.938× | 0.010s | 0.994× | 0.979× |
| [libs/type_erasure/test](suites/libs-type_erasure-test.md) | 60 | 28.562s | 5.523× | 4.551× | 0.080s | 0.966× | 0.947× |
| [libs/type_traits/test](suites/libs-type_traits-test.md) | 218 | 28.031s | 3.535× | 5.956× | 0.215s | 1.118× | 1.035× |
| [libs/uuid/test](suites/libs-uuid-test.md) | 80 | 13.904s | 3.855× | 3.508× | 0.128s | 1.067× | 1.018× |
| [libs/variant2/test](suites/libs-variant2-test.md) | 84 | 32.428s | 3.203× | 4.366× | 0.066s | 1.092× | 1.012× |
| [libs/xpressive/test](suites/libs-xpressive-test.md) | 51 | 59.048s | 5.149× | 4.283× | 0.105s | 1.137× | 1.002× |

Performance uses O3 with assertions enabled; the GDB test remains Og and is correctness-only.

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 1.038× | 1.033×, 1.043× | 1.001× |
| clang | 1.046× | 1.047×, 1.045× | 1.001× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1363 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/43801643681).

Exact commands, per-test times, native outcomes and toolchain/host identities are retained with the results.

[Shared comparison](standard/summary.md) · [Version-1 records](standard/records.json) · [CI run](https://github.com/vishvananda/cppgm/actions/runs/43801643681)
