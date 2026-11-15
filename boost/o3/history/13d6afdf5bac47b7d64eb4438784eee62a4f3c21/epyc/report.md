# Boost compilation and test execution

Boost 1.92.0, 17 C++11 suites (1,818 declarations). Ratios are reference / cppgm, higher is better.

Compilation counts child CPU of C++ test compilations, including expected rejections. It excludes configuration probes, library dependencies, C, linking and B2. Test execution includes process startup and the GDB integration test; it is correctness-test timing, not an application benchmark. The debugger source has identical volatile breakpoint anchors for all compilers; MPL and TypeTraits test enums use fixed underlying types for their -1 probes. Original test oracles are retained. Compile timings use one clean campaign per compiler; small differences need repeats.

| Suite | Declarations | Compile CPU cppgm | GCC | Clang | Test CPU cppgm | GCC | Clang |
|---|---:|---:|---:|---:|---:|---:|---:|
| [libs/accumulators/test](suites/libs-accumulators-test.md) | 49 | 54.739s | 3.039× | 3.446× | 2.502s | 1.152× | 0.983× |
| [libs/asio/test](suites/libs-asio-test.md) | 295 | 143.977s | 5.406× | 5.319× | 0.256s | 1.058× | 1.007× |
| [libs/container/test](suites/libs-container-test.md) | 89 | 115.827s | 5.580× | 4.192× | 1.970s | 0.993× | 1.015× |
| [libs/function/test](suites/libs-function-test.md) | 49 | 8.567s | 2.891× | 3.384× | 0.070s | 1.081× | 1.027× |
| [libs/fusion/test](suites/libs-fusion-test.md) | 221 | 65.132s | 2.719× | 3.257× | 0.342s | 1.118× | 1.013× |
| [libs/json/test](suites/libs-json-test.md) | 50 | 65.268s | 7.472× | 5.276× | 2.272s | 0.895× | 1.039× |
| [libs/mp11/test](suites/libs-mp11-test.md) | 234 | 44.009s | 5.367× | 3.708× | 0.348s | 1.080× | 1.098× |
| [libs/mpl/test](suites/libs-mpl-test.md) | 99 | 15.909s | 2.323× | 2.991× | 0.016s | 0.970× | 1.109× |
| [libs/optional/test](suites/libs-optional-test.md) | 74 | 10.030s | 2.922× | 3.259× | 0.066s | 1.095× | 1.037× |
| [libs/proto/test](suites/libs-proto-test.md) | 23 | 14.483s | 2.914× | 3.211× | 0.066s | 1.073× | 1.042× |
| [libs/qvm/test](suites/libs-qvm-test.md) | 134 | 36.908s | 2.814× | 3.616× | 0.263s | 1.013× | 0.973× |
| [libs/spirit/repository/test](suites/libs-spirit-repository-test.md) | 8 | 15.652s | 3.768× | 3.979× | 0.014s | 1.091× | 0.989× |
| [libs/type_erasure/test](suites/libs-type_erasure-test.md) | 60 | 35.932s | 5.578× | 4.492× | 0.130s | 1.007× | 0.960× |
| [libs/type_traits/test](suites/libs-type_traits-test.md) | 218 | 36.561s | 3.317× | 6.483× | 0.314s | 1.025× | 1.071× |
| [libs/uuid/test](suites/libs-uuid-test.md) | 80 | 17.309s | 3.531× | 3.730× | 0.155s | 1.031× | 1.031× |
| [libs/variant2/test](suites/libs-variant2-test.md) | 84 | 40.707s | 2.924× | 4.636× | 0.096s | 0.982× | 1.015× |
| [libs/xpressive/test](suites/libs-xpressive-test.md) | 51 | 70.262s | 4.784× | 4.481× | 0.153s | 1.128× | 1.006× |

Performance uses O3 with assertions enabled; the GDB test remains Og and is correctness-only.

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 1.027× | 1.029×, 1.026× | 1.011× |
| clang | 1.008× | 1.002×, 1.013× | 0.990× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1363 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43648658351).

Exact commands, per-test times, native outcomes and toolchain/host identities are retained with the results.

[Shared comparison](standard/summary.md) · [Version-1 records](standard/records.json) · [CI run](https://github.com/vishvananda/cppgm-extended/actions/runs/43648658351)
