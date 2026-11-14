# Boost compilation and test execution

Boost 1.92.0, 17 C++11 suites (1,818 declarations). Ratios are reference / cppgm, higher is better.

Compilation counts child CPU of C++ test compilations, including expected rejections. It excludes configuration probes, library dependencies, C, linking and B2. Test execution includes process startup and the GDB integration test; it is correctness-test timing, not an application benchmark. The debugger source has identical volatile breakpoint anchors for all compilers; MPL and TypeTraits test enums use fixed underlying types for their -1 probes. Original test oracles are retained. Compile timings use one clean campaign per compiler; small differences need repeats.

| Suite | Declarations | Compile CPU cppgm | GCC | Clang | Test CPU cppgm | GCC | Clang |
|---|---:|---:|---:|---:|---:|---:|---:|
| [libs/accumulators/test](suites/libs-accumulators-test.md) | 49 | 51.954s | 3.215× | 3.553× | 2.793s | 1.033× | 0.884× |
| [libs/asio/test](suites/libs-asio-test.md) | 295 | 141.476s | 5.288× | 5.285× | 0.251s | 1.059× | 1.010× |
| [libs/container/test](suites/libs-container-test.md) | 89 | 112.249s | 5.476× | 4.198× | 2.097s | 0.925× | 0.957× |
| [libs/function/test](suites/libs-function-test.md) | 49 | 8.391s | 2.945× | 3.373× | 0.067s | 1.102× | 1.060× |
| [libs/fusion/test](suites/libs-fusion-test.md) | 221 | 63.222s | 2.668× | 3.296× | 0.330s | 1.098× | 0.999× |
| [libs/json/test](suites/libs-json-test.md) | 50 | 61.980s | 7.484× | 5.223× | 2.331s | 0.870× | 1.095× |
| [libs/mp11/test](suites/libs-mp11-test.md) | 234 | 42.217s | 5.429× | 3.781× | 0.331s | 1.097× | 1.098× |
| [libs/mpl/test](suites/libs-mpl-test.md) | 99 | 15.230s | 2.447× | 3.057× | 0.016s | 1.089× | 1.100× |
| [libs/optional/test](suites/libs-optional-test.md) | 74 | 9.616s | 3.003× | 3.325× | 0.064s | 1.126× | 1.025× |
| [libs/proto/test](suites/libs-proto-test.md) | 23 | 14.288s | 2.954× | 3.153× | 0.068s | 1.021× | 1.014× |
| [libs/qvm/test](suites/libs-qvm-test.md) | 134 | 35.643s | 2.835× | 3.621× | 0.252s | 1.012× | 0.977× |
| [libs/spirit/repository/test](suites/libs-spirit-repository-test.md) | 8 | 15.007s | 3.760× | 3.956× | 0.014s | 1.075× | 0.963× |
| [libs/type_erasure/test](suites/libs-type_erasure-test.md) | 60 | 33.629s | 5.330× | 4.618× | 0.125s | 1.009× | 0.991× |
| [libs/type_traits/test](suites/libs-type_traits-test.md) | 218 | 34.995s | 3.392× | 6.580× | 0.291s | 1.089× | 1.080× |
| [libs/uuid/test](suites/libs-uuid-test.md) | 80 | 16.460s | 3.647× | 3.763× | 0.146s | 1.055× | 1.034× |
| [libs/variant2/test](suites/libs-variant2-test.md) | 84 | 39.754s | 2.969× | 4.497× | 0.091s | 1.021× | 0.999× |
| [libs/xpressive/test](suites/libs-xpressive-test.md) | 51 | 69.084s | 4.733× | 4.283× | 0.151s | 1.095× | 0.989× |

Performance uses O3 with assertions enabled; the GDB test remains Og and is correctness-only.

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.968× | 0.969×, 0.966× | 0.990× |
| clang | 0.954× | 0.955×, 0.953× | 0.993× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1361 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43632677224).

Exact commands, per-test times, native outcomes and toolchain/host identities are retained with the results.

[Shared comparison](standard/summary.md) · [Version-1 records](standard/records.json) · [CI run](https://github.com/vishvananda/cppgm-extended/actions/runs/43632677224)
