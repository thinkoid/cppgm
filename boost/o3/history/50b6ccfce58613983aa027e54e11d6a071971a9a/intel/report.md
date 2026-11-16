# Boost compilation and test execution

Boost 1.92.0, 17 C++11 suites (1,818 declarations). Ratios are reference / cppgm, higher is better.

Compilation counts child CPU of C++ test compilations, including expected rejections. It excludes configuration probes, library dependencies, C, linking and B2. Test execution includes process startup and the GDB integration test; it is correctness-test timing, not an application benchmark. The debugger source has identical volatile breakpoint anchors for all compilers; MPL and TypeTraits test enums use fixed underlying types for their -1 probes. Original test oracles are retained. Compile timings use one clean campaign per compiler; small differences need repeats.

| Suite | Declarations | Compile CPU cppgm | GCC | Clang | Test CPU cppgm | GCC | Clang |
|---|---:|---:|---:|---:|---:|---:|---:|
| [libs/accumulators/test](suites/libs-accumulators-test.md) | 49 | 37.077s | 3.197× | 3.168× | 2.094s | 1.160× | 0.991× |
| [libs/asio/test](suites/libs-asio-test.md) | 295 | 112.251s | 5.344× | 4.665× | 0.170s | 1.051× | 1.012× |
| [libs/container/test](suites/libs-container-test.md) | 89 | 87.487s | 5.669× | 4.066× | 1.667s | 1.013× | 1.074× |
| [libs/function/test](suites/libs-function-test.md) | 49 | 5.858s | 3.026× | 2.998× | 0.044s | 1.021× | 0.970× |
| [libs/fusion/test](suites/libs-fusion-test.md) | 221 | 43.766s | 2.729× | 2.921× | 0.211s | 1.050× | 1.007× |
| [libs/json/test](suites/libs-json-test.md) | 50 | 53.584s | 7.173× | 4.604× | 1.642s | 0.922× | 1.157× |
| [libs/mp11/test](suites/libs-mp11-test.md) | 234 | 29.958s | 5.739× | 3.398× | 0.214s | 1.056× | 1.074× |
| [libs/mpl/test](suites/libs-mpl-test.md) | 99 | 10.506s | 2.459× | 2.675× | 0.010s | 1.017× | 1.079× |
| [libs/optional/test](suites/libs-optional-test.md) | 74 | 6.615s | 3.026× | 2.933× | 0.041s | 1.047× | 0.992× |
| [libs/proto/test](suites/libs-proto-test.md) | 23 | 10.068s | 2.947× | 2.812× | 0.040s | 0.953× | 0.948× |
| [libs/qvm/test](suites/libs-qvm-test.md) | 134 | 24.083s | 2.960× | 3.208× | 0.163s | 1.022× | 1.029× |
| [libs/spirit/repository/test](suites/libs-spirit-repository-test.md) | 8 | 11.960s | 3.624× | 3.617× | 0.010s | 0.977× | 0.948× |
| [libs/type_erasure/test](suites/libs-type_erasure-test.md) | 60 | 24.756s | 5.708× | 4.520× | 0.071s | 0.987× | 0.961× |
| [libs/type_traits/test](suites/libs-type_traits-test.md) | 218 | 22.876s | 3.432× | 5.227× | 0.192s | 1.045× | 1.020× |
| [libs/uuid/test](suites/libs-uuid-test.md) | 80 | 11.673s | 3.798× | 3.219× | 0.127s | 1.008× | 0.989× |
| [libs/variant2/test](suites/libs-variant2-test.md) | 84 | 27.314s | 3.014× | 3.951× | 0.058s | 1.030× | 0.997× |
| [libs/xpressive/test](suites/libs-xpressive-test.md) | 51 | 51.706s | 4.961× | 3.928× | 0.100s | 1.110× | 0.992× |

Performance uses O3 with assertions enabled; the GDB test remains Og and is correctness-only.

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 1.028× | 1.027×, 1.030× | 1.003× |
| clang | 1.055× | 1.056×, 1.054× | 0.997× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1364 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/43947487361).

Exact commands, per-test times, native outcomes and toolchain/host identities are retained with the results.

[Shared comparison](standard/summary.md) · [Version-1 records](standard/records.json) · [CI run](https://github.com/vishvananda/cppgm/actions/runs/43947487361)
