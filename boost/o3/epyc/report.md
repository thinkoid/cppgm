# Boost compilation and test execution

Boost 1.92.0, 17 C++11 suites (1,818 declarations). Ratios are reference / cppgm, higher is better.

Compilation counts child CPU of C++ test compilations, including expected rejections. It excludes configuration probes, library dependencies, C, linking and B2. Test execution includes process startup and the GDB integration test; it is correctness-test timing, not an application benchmark. The debugger source has identical volatile breakpoint anchors for all compilers; MPL and TypeTraits test enums use fixed underlying types for their -1 probes. Original test oracles are retained. Compile timings use one clean campaign per compiler; small differences need repeats.

| Suite | Declarations | Compile CPU cppgm | GCC | Clang | Test CPU cppgm | GCC | Clang |
|---|---:|---:|---:|---:|---:|---:|---:|
| [libs/accumulators/test](suites/libs-accumulators-test.md) | 49 | 70.101s | 3.099× | 3.963× | 3.051s | 1.151× | 1.010× |
| [libs/asio/test](suites/libs-asio-test.md) | 295 | 191.726s | 5.210× | 5.940× | 0.291s | 1.050× | 1.047× |
| [libs/container/test](suites/libs-container-test.md) | 89 | 150.013s | 5.540× | 4.620× | 2.442s | 1.237× | 1.067× |
| [libs/function/test](suites/libs-function-test.md) | 49 | 11.569s | 2.919× | 3.871× | 0.080s | 1.064× | 1.072× |
| [libs/fusion/test](suites/libs-fusion-test.md) | 221 | 86.953s | 2.647× | 3.668× | 0.391s | 1.046× | 1.042× |
| [libs/json/test](suites/libs-json-test.md) | 50 | 84.872s | 6.712× | 5.633× | 3.371s | 0.866× | 1.119× |
| [libs/mp11/test](suites/libs-mp11-test.md) | 234 | 57.951s | 5.372× | 4.242× | 0.391s | 1.068× | 1.141× |
| [libs/mpl/test](suites/libs-mpl-test.md) | 99 | 20.996s | 2.400× | 3.426× | 0.018s | 1.040× | 1.135× |
| [libs/optional/test](suites/libs-optional-test.md) | 74 | 13.384s | 2.927× | 3.755× | 0.077s | 1.034× | 1.056× |
| [libs/proto/test](suites/libs-proto-test.md) | 23 | 19.231s | 2.916× | 3.592× | 0.077s | 1.074× | 1.102× |
| [libs/qvm/test](suites/libs-qvm-test.md) | 134 | 49.377s | 2.870× | 4.151× | 0.314s | 1.010× | 0.981× |
| [libs/spirit/repository/test](suites/libs-spirit-repository-test.md) | 8 | 20.619s | 3.574× | 4.206× | 0.016s | 1.067× | 0.982× |
| [libs/type_erasure/test](suites/libs-type_erasure-test.md) | 60 | 46.370s | 5.004× | 4.852× | 0.156s | 0.953× | 0.991× |
| [libs/type_traits/test](suites/libs-type_traits-test.md) | 218 | 49.704s | 3.450× | 7.141× | 0.348s | 1.056× | 1.114× |
| [libs/uuid/test](suites/libs-uuid-test.md) | 80 | 22.979s | 3.677× | 4.218× | 0.181s | 1.035× | 1.040× |
| [libs/variant2/test](suites/libs-variant2-test.md) | 84 | 53.516s | 3.008× | 5.027× | 0.107s | 1.031× | 1.040× |
| [libs/xpressive/test](suites/libs-xpressive-test.md) | 51 | 91.973s | 4.801× | 4.737× | 0.186s | 1.122× | 1.000× |

Performance uses O3 with assertions enabled; the GDB test remains Og and is correctness-only.

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 1.036× | 1.032×, 1.041× | 1.007× |
| clang | 1.030× | 1.030×, 1.031× | 0.998× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1359 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43674678137).

Exact commands, per-test times, native outcomes and toolchain/host identities are retained with the results.

[Shared comparison](standard/summary.md) · [Version-1 records](standard/records.json) · [CI run](https://github.com/vishvananda/cppgm-extended/actions/runs/43674678137)
