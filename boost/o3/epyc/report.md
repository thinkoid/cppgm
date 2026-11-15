# Boost compilation and test execution

Boost 1.92.0, 17 C++11 suites (1,818 declarations). Ratios are reference / cppgm, higher is better.

Compilation counts child CPU of C++ test compilations, including expected rejections. It excludes configuration probes, library dependencies, C, linking and B2. Test execution includes process startup and the GDB integration test; it is correctness-test timing, not an application benchmark. The debugger source has identical volatile breakpoint anchors for all compilers; MPL and TypeTraits test enums use fixed underlying types for their -1 probes. Original test oracles are retained. Compile timings use one clean campaign per compiler; small differences need repeats.

| Suite | Declarations | Compile CPU cppgm | GCC | Clang | Test CPU cppgm | GCC | Clang |
|---|---:|---:|---:|---:|---:|---:|---:|
| [libs/accumulators/test](suites/libs-accumulators-test.md) | 49 | 70.535s | 3.069× | 3.905× | 3.053s | 1.154× | 1.013× |
| [libs/asio/test](suites/libs-asio-test.md) | 295 | 191.272s | 5.351× | 5.894× | 0.294s | 1.057× | 1.022× |
| [libs/container/test](suites/libs-container-test.md) | 89 | 148.452s | 5.723× | 4.644× | 2.447s | 1.032× | 1.058× |
| [libs/function/test](suites/libs-function-test.md) | 49 | 11.643s | 3.025× | 3.779× | 0.081s | 1.119× | 1.037× |
| [libs/fusion/test](suites/libs-fusion-test.md) | 221 | 87.317s | 2.701× | 3.625× | 0.394s | 1.089× | 1.035× |
| [libs/json/test](suites/libs-json-test.md) | 50 | 83.880s | 7.144× | 5.666× | 3.250s | 0.875× | 1.177× |
| [libs/mp11/test](suites/libs-mp11-test.md) | 234 | 57.852s | 5.532× | 4.218× | 0.389s | 1.125× | 1.148× |
| [libs/mpl/test](suites/libs-mpl-test.md) | 99 | 20.841s | 2.433× | 3.424× | 0.018s | 1.076× | 1.181× |
| [libs/optional/test](suites/libs-optional-test.md) | 74 | 13.338s | 2.935× | 3.742× | 0.075s | 1.082× | 1.078× |
| [libs/proto/test](suites/libs-proto-test.md) | 23 | 19.325s | 2.908× | 3.540× | 0.080s | 1.025× | 1.032× |
| [libs/qvm/test](suites/libs-qvm-test.md) | 134 | 48.916s | 2.890× | 4.148× | 0.309s | 1.040× | 0.995× |
| [libs/spirit/repository/test](suites/libs-spirit-repository-test.md) | 8 | 19.795s | 3.714× | 4.420× | 0.016s | 1.026× | 0.945× |
| [libs/type_erasure/test](suites/libs-type_erasure-test.md) | 60 | 45.702s | 5.065× | 4.871× | 0.158s | 0.965× | 0.960× |
| [libs/type_traits/test](suites/libs-type_traits-test.md) | 218 | 49.565s | 3.456× | 7.163× | 0.347s | 1.057× | 1.081× |
| [libs/uuid/test](suites/libs-uuid-test.md) | 80 | 22.693s | 3.718× | 4.253× | 0.182s | 1.040× | 1.029× |
| [libs/variant2/test](suites/libs-variant2-test.md) | 84 | 53.194s | 3.036× | 5.055× | 0.105s | 1.078× | 1.054× |
| [libs/xpressive/test](suites/libs-xpressive-test.md) | 51 | 91.335s | 4.827× | 4.733× | 0.182s | 1.177× | 1.036× |

Performance uses O3 with assertions enabled; the GDB test remains Og and is correctness-only.

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 1.030× | 1.030×, 1.030× | 0.997× |
| clang | 1.027× | 1.026×, 1.027× | 1.001× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1361 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43664060660).

Exact commands, per-test times, native outcomes and toolchain/host identities are retained with the results.

[Shared comparison](standard/summary.md) · [Version-1 records](standard/records.json) · [CI run](https://github.com/vishvananda/cppgm-extended/actions/runs/43664060660)
