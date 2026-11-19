# Boost compilation and test execution

Boost 1.92.0, 17 C++11 suites (1,818 declarations). Ratios are reference / cppgm, higher is better.

Compilation counts child CPU of C++ test compilations, including expected rejections. It excludes configuration probes, library dependencies, C, linking and B2. Test execution includes process startup and the GDB integration test; it is correctness-test timing, not an application benchmark. The debugger source has identical volatile breakpoint anchors for all compilers; MPL and TypeTraits test enums use fixed underlying types for their -1 probes. Original test oracles are retained. Compile timings use one clean campaign per compiler; small differences need repeats.

| Suite | Declarations | Compile CPU cppgm | GCC | Clang | Test CPU cppgm | GCC | Clang |
|---|---:|---:|---:|---:|---:|---:|---:|
| [libs/accumulators/test](suites/libs-accumulators-test.md) | 49 | 41.420s | 3.368× | 3.609× | 2.165s | 1.152× | 0.989× |
| [libs/asio/test](suites/libs-asio-test.md) | 295 | 112.424s | 6.049× | 5.555× | 0.172s | 1.090× | 1.016× |
| [libs/container/test](suites/libs-container-test.md) | 89 | 97.752s | 5.914× | 4.256× | 1.964s | 1.007× | 1.014× |
| [libs/function/test](suites/libs-function-test.md) | 49 | 6.828s | 3.101× | 3.304× | 0.049s | 1.075× | 1.008× |
| [libs/fusion/test](suites/libs-fusion-test.md) | 221 | 50.926s | 2.822× | 3.248× | 0.238s | 1.067× | 0.999× |
| [libs/json/test](suites/libs-json-test.md) | 50 | 56.076s | 7.215× | 5.003× | 1.943s | 0.890× | 1.083× |
| [libs/mp11/test](suites/libs-mp11-test.md) | 234 | 35.362s | 5.771× | 3.648× | 0.239s | 1.093× | 1.085× |
| [libs/mpl/test](suites/libs-mpl-test.md) | 99 | 12.156s | 2.533× | 2.957× | 0.011s | 1.107× | 1.109× |
| [libs/optional/test](suites/libs-optional-test.md) | 74 | 7.981s | 3.027× | 3.119× | 0.049s | 1.033× | 0.936× |
| [libs/proto/test](suites/libs-proto-test.md) | 23 | 11.413s | 3.117× | 3.158× | 0.044s | 1.081× | 0.996× |
| [libs/qvm/test](suites/libs-qvm-test.md) | 134 | 28.554s | 3.032× | 3.479× | 0.186s | 1.045× | 1.009× |
| [libs/spirit/repository/test](suites/libs-spirit-repository-test.md) | 8 | 12.900s | 3.928× | 3.975× | 0.010s | 1.082× | 0.967× |
| [libs/type_erasure/test](suites/libs-type_erasure-test.md) | 60 | 28.403s | 5.535× | 4.558× | 0.082s | 0.979× | 0.918× |
| [libs/type_traits/test](suites/libs-type_traits-test.md) | 218 | 27.996s | 3.481× | 5.972× | 0.220s | 1.049× | 1.016× |
| [libs/uuid/test](suites/libs-uuid-test.md) | 80 | 13.747s | 3.882× | 3.528× | 0.129s | 1.015× | 0.983× |
| [libs/variant2/test](suites/libs-variant2-test.md) | 84 | 31.208s | 3.281× | 4.586× | 0.064s | 1.067× | 1.041× |
| [libs/xpressive/test](suites/libs-xpressive-test.md) | 51 | 58.773s | 5.148× | 4.305× | 0.106s | 1.111× | 0.994× |

Performance uses O3 with assertions enabled; the GDB test remains Og and is correctness-only.

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 1.041× | 1.042×, 1.040× | 1.001× |
| clang | 1.046× | 1.048×, 1.044× | 0.997× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1364 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44402206984).

Exact commands, per-test times, native outcomes and toolchain/host identities are retained with the results.

[Shared comparison](standard/summary.md) · [Version-1 records](standard/records.json) · [CI run](https://github.com/vishvananda/cppgm/actions/runs/44402206984)
