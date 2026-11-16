# Boost compilation and test execution

Boost 1.92.0, 17 C++11 suites (1,818 declarations). Ratios are reference / cppgm, higher is better.

Compilation counts child CPU of C++ test compilations, including expected rejections. It excludes configuration probes, library dependencies, C, linking and B2. Test execution includes process startup and the GDB integration test; it is correctness-test timing, not an application benchmark. The debugger source has identical volatile breakpoint anchors for all compilers; MPL and TypeTraits test enums use fixed underlying types for their -1 probes. Original test oracles are retained. Compile timings use one clean campaign per compiler; small differences need repeats.

| Suite | Declarations | Compile CPU cppgm | GCC | Clang | Test CPU cppgm | GCC | Clang |
|---|---:|---:|---:|---:|---:|---:|---:|
| [libs/accumulators/test](suites/libs-accumulators-test.md) | 49 | 37.022s | 3.146× | 3.119× | 2.127s | 1.149× | 0.993× |
| [libs/asio/test](suites/libs-asio-test.md) | 295 | 113.042s | 5.194× | 4.580× | 0.157s | 1.032× | 0.988× |
| [libs/container/test](suites/libs-container-test.md) | 89 | 89.362s | 5.462× | 3.913× | 1.614s | 1.001× | 1.088× |
| [libs/function/test](suites/libs-function-test.md) | 49 | 5.924s | 2.979× | 2.967× | 0.041s | 1.017× | 0.955× |
| [libs/fusion/test](suites/libs-fusion-test.md) | 221 | 43.743s | 2.709× | 2.902× | 0.194s | 1.061× | 0.985× |
| [libs/json/test](suites/libs-json-test.md) | 50 | 54.287s | 6.820× | 4.382× | 1.707s | 0.932× | 1.162× |
| [libs/mp11/test](suites/libs-mp11-test.md) | 234 | 30.288s | 5.666× | 3.378× | 0.196s | 1.089× | 1.067× |
| [libs/mpl/test](suites/libs-mpl-test.md) | 99 | 10.513s | 2.450× | 2.674× | 0.009s | 1.049× | 1.095× |
| [libs/optional/test](suites/libs-optional-test.md) | 74 | 6.718s | 2.968× | 2.884× | 0.038s | 1.051× | 0.980× |
| [libs/proto/test](suites/libs-proto-test.md) | 23 | 10.133s | 2.869× | 2.791× | 0.038s | 0.965× | 0.934× |
| [libs/qvm/test](suites/libs-qvm-test.md) | 134 | 24.263s | 2.926× | 3.178× | 0.152s | 1.050× | 1.018× |
| [libs/spirit/repository/test](suites/libs-spirit-repository-test.md) | 8 | 11.892s | 3.542× | 3.507× | 0.009s | 1.018× | 1.028× |
| [libs/type_erasure/test](suites/libs-type_erasure-test.md) | 60 | 24.330s | 5.381× | 4.286× | 0.067s | 0.999× | 0.954× |
| [libs/type_traits/test](suites/libs-type_traits-test.md) | 218 | 23.044s | 3.365× | 5.211× | 0.177s | 1.070× | 0.991× |
| [libs/uuid/test](suites/libs-uuid-test.md) | 80 | 11.834s | 3.727× | 3.189× | 0.110s | 1.081× | 0.961× |
| [libs/variant2/test](suites/libs-variant2-test.md) | 84 | 27.396s | 2.967× | 3.828× | 0.053s | 1.048× | 0.995× |
| [libs/xpressive/test](suites/libs-xpressive-test.md) | 51 | 52.089s | 4.847× | 3.849× | 0.095s | 1.104× | 0.987× |

Performance uses O3 with assertions enabled; the GDB test remains Og and is correctness-only.

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 1.024× | 1.024×, 1.024× | 1.000× |
| clang | 1.061× | 1.061×, 1.062× | 1.000× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1365 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/43796354412).

Exact commands, per-test times, native outcomes and toolchain/host identities are retained with the results.

[Shared comparison](standard/summary.md) · [Version-1 records](standard/records.json) · [CI run](https://github.com/vishvananda/cppgm/actions/runs/43796354412)
