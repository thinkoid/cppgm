# Boost compilation and test execution

Boost 1.92.0, 17 C++11 suites (1,818 declarations). Ratios are reference / cppgm, higher is better.

Compilation counts child CPU of C++ test compilations, including expected rejections. It excludes configuration probes, library dependencies, C, linking and B2. Test execution includes process startup and the GDB integration test; it is correctness-test timing, not an application benchmark. The debugger source has identical volatile breakpoint anchors for all compilers; MPL and TypeTraits test enums use fixed underlying types for their -1 probes. Original test oracles are retained. Compile timings use one clean campaign per compiler; small differences need repeats.

| Suite | Declarations | Compile CPU cppgm | GCC | Clang | Test CPU cppgm | GCC | Clang |
|---|---:|---:|---:|---:|---:|---:|---:|
| [libs/accumulators/test](suites/libs-accumulators-test.md) | 49 | 69.186s | 3.101× | 3.933× | 3.020s | 1.180× | 1.019× |
| [libs/asio/test](suites/libs-asio-test.md) | 295 | 185.807s | 5.327× | 6.003× | 0.283s | 1.074× | 1.056× |
| [libs/container/test](suites/libs-container-test.md) | 89 | 134.466s | 6.116× | 5.006× | 2.416s | 1.027× | 1.070× |
| [libs/function/test](suites/libs-function-test.md) | 49 | 11.476s | 2.901× | 3.811× | 0.079s | 1.057× | 1.083× |
| [libs/fusion/test](suites/libs-fusion-test.md) | 221 | 85.762s | 2.649× | 3.641× | 0.385s | 1.055× | 1.028× |
| [libs/json/test](suites/libs-json-test.md) | 50 | 83.099s | 6.805× | 5.637× | 3.162s | 0.873× | 1.175× |
| [libs/mp11/test](suites/libs-mp11-test.md) | 234 | 57.416s | 5.350× | 4.187× | 0.384s | 1.069× | 1.143× |
| [libs/mpl/test](suites/libs-mpl-test.md) | 99 | 20.758s | 2.400× | 3.402× | 0.018s | 1.012× | 1.178× |
| [libs/optional/test](suites/libs-optional-test.md) | 74 | 13.179s | 2.927× | 3.732× | 0.076s | 1.053× | 1.069× |
| [libs/proto/test](suites/libs-proto-test.md) | 23 | 19.058s | 2.920× | 3.533× | 0.078s | 1.025× | 1.058× |
| [libs/qvm/test](suites/libs-qvm-test.md) | 134 | 48.486s | 2.879× | 4.115× | 0.309s | 1.005× | 0.998× |
| [libs/spirit/repository/test](suites/libs-spirit-repository-test.md) | 8 | 20.116s | 3.627× | 4.278× | 0.015s | 1.066× | 1.034× |
| [libs/type_erasure/test](suites/libs-type_erasure-test.md) | 60 | 45.560s | 5.005× | 4.841× | 0.154s | 0.953× | 0.979× |
| [libs/type_traits/test](suites/libs-type_traits-test.md) | 218 | 49.359s | 3.441× | 7.056× | 0.342s | 1.076× | 1.074× |
| [libs/uuid/test](suites/libs-uuid-test.md) | 80 | 22.657s | 3.665× | 4.179× | 0.179s | 1.043× | 1.025× |
| [libs/variant2/test](suites/libs-variant2-test.md) | 84 | 52.750s | 3.035× | 4.996× | 0.104s | 1.067× | 1.038× |
| [libs/xpressive/test](suites/libs-xpressive-test.md) | 51 | 91.206s | 4.789× | 4.682× | 0.182s | 1.150× | 1.020× |

Performance uses O3 with assertions enabled; the GDB test remains Og and is correctness-only.

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 1.039× | 1.036×, 1.042× | 0.998× |
| clang | 1.028× | 1.030×, 1.027× | 1.008× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1359 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/43750858933).

Exact commands, per-test times, native outcomes and toolchain/host identities are retained with the results.

[Shared comparison](standard/summary.md) · [Version-1 records](standard/records.json) · [CI run](https://github.com/vishvananda/cppgm/actions/runs/43750858933)
