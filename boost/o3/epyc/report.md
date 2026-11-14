# Boost compilation and test execution

Boost 1.92.0, 17 C++11 suites (1,818 declarations). Ratios are reference / cppgm, higher is better.

Compilation counts child CPU of C++ test compilations, including expected rejections. It excludes configuration probes, library dependencies, C, linking and B2. Test execution includes process startup and the GDB integration test; it is correctness-test timing, not an application benchmark. The debugger source has identical volatile breakpoint anchors for all compilers; MPL and TypeTraits test enums use fixed underlying types for their -1 probes. Original test oracles are retained. Compile timings use one clean campaign per compiler; small differences need repeats.

| Suite | Declarations | Compile CPU cppgm | GCC | Clang | Test CPU cppgm | GCC | Clang |
|---|---:|---:|---:|---:|---:|---:|---:|
| [libs/accumulators/test](suites/libs-accumulators-test.md) | 49 | 43.665s | 2.983× | 3.107× | 2.182s | 1.041× | 0.913× |
| [libs/asio/test](suites/libs-asio-test.md) | 295 | 116.266s | 5.291× | 5.123× | 0.246s | 0.974× | 1.031× |
| [libs/container/test](suites/libs-container-test.md) | 89 | 96.529s | 5.175× | 4.011× | 1.812s | 0.864× | 0.878× |
| [libs/function/test](suites/libs-function-test.md) | 49 | 7.451s | 2.585× | 2.779× | 0.070s | 0.966× | 0.929× |
| [libs/fusion/test](suites/libs-fusion-test.md) | 221 | 53.910s | 2.424× | 2.824× | 0.337s | 0.996× | 0.941× |
| [libs/json/test](suites/libs-json-test.md) | 50 | 53.643s | 6.879× | 4.959× | 1.851s | 0.825× | 0.952× |
| [libs/mp11/test](suites/libs-mp11-test.md) | 234 | 35.254s | 5.330× | 3.352× | 0.328s | 1.080× | 1.073× |
| [libs/mpl/test](suites/libs-mpl-test.md) | 99 | 12.193s | 2.389× | 2.563× | 0.014s | 1.104× | 1.091× |
| [libs/optional/test](suites/libs-optional-test.md) | 74 | 7.860s | 2.856× | 2.883× | 0.061s | 1.073× | 1.020× |
| [libs/proto/test](suites/libs-proto-test.md) | 23 | 11.847s | 2.802× | 2.793× | 0.062s | 1.033× | 1.006× |
| [libs/qvm/test](suites/libs-qvm-test.md) | 134 | 29.878s | 2.798× | 3.018× | 0.239s | 1.032× | 0.978× |
| [libs/spirit/repository/test](suites/libs-spirit-repository-test.md) | 8 | 12.551s | 4.025× | 3.690× | 0.014s | 1.084× | 0.931× |
| [libs/type_erasure/test](suites/libs-type_erasure-test.md) | 60 | 28.013s | 6.216× | 4.260× | 0.125s | 0.958× | 0.901× |
| [libs/type_traits/test](suites/libs-type_traits-test.md) | 218 | 27.985s | 3.560× | 5.323× | 0.287s | 1.119× | 1.064× |
| [libs/uuid/test](suites/libs-uuid-test.md) | 80 | 13.796s | 3.776× | 3.192× | 0.527s | 1.039× | 1.006× |
| [libs/variant2/test](suites/libs-variant2-test.md) | 84 | 33.246s | 2.870× | 3.815× | 0.090s | 1.099× | 0.959× |
| [libs/xpressive/test](suites/libs-xpressive-test.md) | 51 | 58.284s | 4.884× | 4.011× | 0.143s | 1.084× | 0.956× |

Performance uses O3 with assertions enabled; the GDB test remains Og and is correctness-only.

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.953× | 0.951×, 0.954× | 1.011× |
| clang | 0.966× | 0.972×, 0.959× | 1.018× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1363 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43624536445).

Exact commands, per-test times, native outcomes and toolchain/host identities are retained with the results.

[Shared comparison](standard/summary.md) · [Version-1 records](standard/records.json) · [CI run](https://github.com/vishvananda/cppgm-extended/actions/runs/43624536445)
