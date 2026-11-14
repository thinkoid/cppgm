# Boost compilation and test execution

Boost 1.92.0, 17 C++11 suites (1,818 declarations). Ratios are reference / cppgm, higher is better.

Compilation counts child CPU of C++ test compilations, including expected rejections. It excludes configuration probes, library dependencies, C, linking and B2. Test execution includes process startup and the GDB integration test; it is correctness-test timing, not an application benchmark. The debugger source has identical volatile breakpoint anchors for all compilers; MPL and TypeTraits test enums use fixed underlying types for their -1 probes. Original test oracles are retained. Compile timings use one clean campaign per compiler; small differences need repeats.

| Suite | Declarations | Compile CPU cppgm | GCC | Clang | Test CPU cppgm | GCC | Clang |
|---|---:|---:|---:|---:|---:|---:|---:|
| [libs/accumulators/test](suites/libs-accumulators-test.md) | 49 | 53.114s | 3.016× | 3.506× | 2.800s | 1.039× | 0.882× |
| [libs/asio/test](suites/libs-asio-test.md) | 295 | 141.108s | 5.485× | 5.368× | 0.247s | 1.098× | 1.039× |
| [libs/container/test](suites/libs-container-test.md) | 89 | 113.256s | 5.591× | 4.270× | 2.139s | 0.916× | 0.934× |
| [libs/function/test](suites/libs-function-test.md) | 49 | 8.608s | 2.886× | 3.373× | 0.070s | 1.088× | 1.034× |
| [libs/fusion/test](suites/libs-fusion-test.md) | 221 | 65.351s | 2.600× | 3.223× | 0.343s | 1.047× | 1.001× |
| [libs/json/test](suites/libs-json-test.md) | 50 | 63.706s | 7.011× | 5.225× | 2.375s | 0.751× | 0.949× |
| [libs/mp11/test](suites/libs-mp11-test.md) | 234 | 43.164s | 5.366× | 3.746× | 0.341s | 1.083× | 1.106× |
| [libs/mpl/test](suites/libs-mpl-test.md) | 99 | 15.488s | 2.429× | 3.026× | 0.016s | 1.121× | 1.107× |
| [libs/optional/test](suites/libs-optional-test.md) | 74 | 9.764s | 3.015× | 3.305× | 0.065s | 1.119× | 1.056× |
| [libs/proto/test](suites/libs-proto-test.md) | 23 | 14.743s | 2.820× | 3.121× | 0.067s | 1.042× | 1.005× |
| [libs/qvm/test](suites/libs-qvm-test.md) | 134 | 36.806s | 2.760× | 3.542× | 0.261s | 1.005× | 0.958× |
| [libs/spirit/repository/test](suites/libs-spirit-repository-test.md) | 8 | 15.267s | 3.725× | 3.959× | 0.014s | 1.058× | 0.979× |
| [libs/type_erasure/test](suites/libs-type_erasure-test.md) | 60 | 34.178s | 5.229× | 4.560× | 0.128s | 0.990× | 0.972× |
| [libs/type_traits/test](suites/libs-type_traits-test.md) | 218 | 35.861s | 3.378× | 6.469× | 0.305s | 1.089× | 1.060× |
| [libs/uuid/test](suites/libs-uuid-test.md) | 80 | 17.087s | 3.616× | 3.667× | 0.154s | 1.044× | 0.986× |
| [libs/variant2/test](suites/libs-variant2-test.md) | 84 | 39.855s | 3.015× | 4.547× | 0.093s | 1.057× | 1.012× |
| [libs/xpressive/test](suites/libs-xpressive-test.md) | 51 | 68.927s | 4.836× | 4.295× | 0.151s | 1.127× | 0.978× |

Performance uses O3 with assertions enabled; the GDB test remains Og and is correctness-only.

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.987× | 0.991×, 0.983× | 1.006× |
| clang | 0.954× | 0.958×, 0.949× | 0.999× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1363 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43638391827).

Exact commands, per-test times, native outcomes and toolchain/host identities are retained with the results.

[Shared comparison](standard/summary.md) · [Version-1 records](standard/records.json) · [CI run](https://github.com/vishvananda/cppgm-extended/actions/runs/43638391827)
