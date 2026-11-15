# Boost compilation and test execution

Boost 1.92.0, 17 C++11 suites (1,818 declarations). Ratios are reference / cppgm, higher is better.

Compilation counts child CPU of C++ test compilations, including expected rejections. It excludes configuration probes, library dependencies, C, linking and B2. Test execution includes process startup and the GDB integration test; it is correctness-test timing, not an application benchmark. The debugger source has identical volatile breakpoint anchors for all compilers; MPL and TypeTraits test enums use fixed underlying types for their -1 probes. Original test oracles are retained. Compile timings use one clean campaign per compiler; small differences need repeats.

| Suite | Declarations | Compile CPU cppgm | GCC | Clang | Test CPU cppgm | GCC | Clang |
|---|---:|---:|---:|---:|---:|---:|---:|
| [libs/accumulators/test](suites/libs-accumulators-test.md) | 49 | 65.750s | 3.047× | 3.574× | 3.145s | 1.193× | 1.020× |
| [libs/asio/test](suites/libs-asio-test.md) | 295 | 182.768s | 5.170× | 5.247× | 0.302s | 1.046× | 1.004× |
| [libs/container/test](suites/libs-container-test.md) | 89 | 144.674s | 5.390× | 4.205× | 2.506s | 0.992× | 1.032× |
| [libs/function/test](suites/libs-function-test.md) | 49 | 10.820s | 2.859× | 3.386× | 0.081s | 1.047× | 1.038× |
| [libs/fusion/test](suites/libs-fusion-test.md) | 221 | 80.626s | 2.620× | 3.314× | 0.397s | 1.047× | 1.024× |
| [libs/json/test](suites/libs-json-test.md) | 50 | 81.375s | 6.698× | 5.074× | 2.903s | 0.909× | 1.121× |
| [libs/mp11/test](suites/libs-mp11-test.md) | 234 | 54.938s | 5.236× | 3.746× | 0.407s | 1.035× | 1.079× |
| [libs/mpl/test](suites/libs-mpl-test.md) | 99 | 19.672s | 2.356× | 3.057× | 0.019s | 1.030× | 1.103× |
| [libs/optional/test](suites/libs-optional-test.md) | 74 | 12.458s | 2.873× | 3.319× | 0.078s | 1.014× | 1.038× |
| [libs/proto/test](suites/libs-proto-test.md) | 23 | 18.189s | 2.848× | 3.186× | 0.080s | 1.035× | 1.040× |
| [libs/qvm/test](suites/libs-qvm-test.md) | 134 | 45.748s | 2.798× | 3.637× | 0.311s | 1.001× | 0.974× |
| [libs/spirit/repository/test](suites/libs-spirit-repository-test.md) | 8 | 19.572s | 3.514× | 3.922× | 0.016s | 1.016× | 1.023× |
| [libs/type_erasure/test](suites/libs-type_erasure-test.md) | 60 | 43.303s | 5.028× | 4.482× | 0.160s | 0.950× | 0.946× |
| [libs/type_traits/test](suites/libs-type_traits-test.md) | 218 | 44.850s | 3.363× | 6.608× | 0.357s | 1.061× | 1.048× |
| [libs/uuid/test](suites/libs-uuid-test.md) | 80 | 21.306s | 3.626× | 3.743× | 0.176s | 1.064× | 1.029× |
| [libs/variant2/test](suites/libs-variant2-test.md) | 84 | 49.836s | 2.979× | 4.559× | 0.110s | 1.036× | 0.993× |
| [libs/xpressive/test](suites/libs-xpressive-test.md) | 51 | 87.385s | 4.740× | 4.308× | 0.182s | 1.132× | 1.005× |

Performance uses O3 with assertions enabled; the GDB test remains Og and is correctness-only.

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 1.045× | 1.048×, 1.043× | 1.002× |
| clang | 1.027× | 1.025×, 1.029× | 0.997× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1359 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/43701438216).

Exact commands, per-test times, native outcomes and toolchain/host identities are retained with the results.

[Shared comparison](standard/summary.md) · [Version-1 records](standard/records.json) · [CI run](https://github.com/vishvananda/cppgm/actions/runs/43701438216)
