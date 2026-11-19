# Boost compilation and test execution

Boost 1.92.0, 17 C++11 suites (1,818 declarations). Ratios are reference / cppgm, higher is better.

Compilation counts child CPU of C++ test compilations, including expected rejections. It excludes configuration probes, library dependencies, C, linking and B2. Test execution includes process startup and the GDB integration test; it is correctness-test timing, not an application benchmark. The debugger source has identical volatile breakpoint anchors for all compilers; MPL and TypeTraits test enums use fixed underlying types for their -1 probes. Original test oracles are retained. Compile timings use one clean campaign per compiler; small differences need repeats.

| Suite | Declarations | Compile CPU cppgm | GCC | Clang | Test CPU cppgm | GCC | Clang |
|---|---:|---:|---:|---:|---:|---:|---:|
| [libs/accumulators/test](suites/libs-accumulators-test.md) | 49 | 41.989s | 3.330× | 3.624× | 2.168s | 1.176× | 0.993× |
| [libs/asio/test](suites/libs-asio-test.md) | 295 | 112.540s | 6.072× | 5.709× | 0.171s | 1.086× | 1.122× |
| [libs/container/test](suites/libs-container-test.md) | 89 | 97.632s | 6.031× | 4.423× | 1.912s | 1.044× | 1.059× |
| [libs/function/test](suites/libs-function-test.md) | 49 | 6.898s | 3.108× | 3.336× | 0.050s | 1.080× | 1.061× |
| [libs/fusion/test](suites/libs-fusion-test.md) | 221 | 51.068s | 2.856× | 3.304× | 0.244s | 1.099× | 1.057× |
| [libs/json/test](suites/libs-json-test.md) | 50 | 56.093s | 7.429× | 5.168× | 1.950s | 0.875× | 1.137× |
| [libs/mp11/test](suites/libs-mp11-test.md) | 234 | 35.368s | 5.896× | 3.686× | 0.242s | 1.149× | 1.119× |
| [libs/mpl/test](suites/libs-mpl-test.md) | 99 | 12.143s | 2.590× | 3.015× | 0.011s | 1.152× | 1.154× |
| [libs/optional/test](suites/libs-optional-test.md) | 74 | 7.656s | 3.228× | 3.278× | 0.046s | 1.157× | 1.080× |
| [libs/proto/test](suites/libs-proto-test.md) | 23 | 11.288s | 3.254× | 3.234× | 0.043s | 1.175× | 1.017× |
| [libs/qvm/test](suites/libs-qvm-test.md) | 134 | 28.084s | 3.146× | 3.558× | 0.182s | 1.148× | 1.059× |
| [libs/spirit/repository/test](suites/libs-spirit-repository-test.md) | 8 | 12.728s | 4.014× | 4.005× | 0.009s | 1.187× | 1.029× |
| [libs/type_erasure/test](suites/libs-type_erasure-test.md) | 60 | 27.964s | 5.920× | 4.555× | 0.077s | 1.092× | 0.947× |
| [libs/type_traits/test](suites/libs-type_traits-test.md) | 218 | 27.900s | 3.604× | 5.958× | 0.224s | 1.120× | 0.943× |
| [libs/uuid/test](suites/libs-uuid-test.md) | 80 | 13.912s | 3.916× | 3.466× | 0.132s | 1.047× | 0.925× |
| [libs/variant2/test](suites/libs-variant2-test.md) | 84 | 31.944s | 3.292× | 4.406× | 0.069s | 1.051× | 0.936× |
| [libs/xpressive/test](suites/libs-xpressive-test.md) | 51 | 59.552s | 5.205× | 4.301× | 0.111s | 1.113× | 0.973× |

Performance uses O3 with assertions enabled; the GDB test remains Og and is correctness-only.

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 1.036× | 1.032×, 1.040× | 1.003× |
| clang | 1.048× | 1.044×, 1.051× | 0.999× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1364 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44481767416).

Exact commands, per-test times, native outcomes and toolchain/host identities are retained with the results.

[Shared comparison](standard/summary.md) · [Version-1 records](standard/records.json) · [CI run](https://github.com/vishvananda/cppgm/actions/runs/44481767416)
