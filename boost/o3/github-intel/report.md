# Boost compilation and test execution

Boost 1.92.0, 17 C++11 suites (1,818 declarations). Ratios are reference / cppgm, higher is better.

Compilation counts child CPU of C++ test compilations, including expected rejections. It excludes configuration probes, library dependencies, C, linking and B2. Test execution includes process startup and the GDB integration test; it is correctness-test timing, not an application benchmark. The debugger source has identical volatile breakpoint anchors for all compilers; MPL and TypeTraits test enums use fixed underlying types for their -1 probes. Original test oracles are retained. Compile timings use one clean campaign per compiler; small differences need repeats.

| Suite | Declarations | Compile CPU cppgm | GCC | Clang | Test CPU cppgm | GCC | Clang |
|---|---:|---:|---:|---:|---:|---:|---:|
| [libs/accumulators/test](suites/libs-accumulators-test.md) | 49 | 41.954s | 3.329× | 3.638× | 2.178s | 1.151× | 0.990× |
| [libs/asio/test](suites/libs-asio-test.md) | 295 | 112.503s | 5.987× | 5.697× | 0.172s | 1.056× | 1.116× |
| [libs/container/test](suites/libs-container-test.md) | 89 | 96.443s | 6.008× | 4.417× | 1.906s | 1.051× | 1.055× |
| [libs/function/test](suites/libs-function-test.md) | 49 | 6.548s | 3.288× | 3.452× | 0.046s | 1.203× | 1.102× |
| [libs/fusion/test](suites/libs-fusion-test.md) | 221 | 50.427s | 2.898× | 3.288× | 0.233s | 1.172× | 1.030× |
| [libs/json/test](suites/libs-json-test.md) | 50 | 56.010s | 7.501× | 5.035× | 1.926s | 0.943× | 1.145× |
| [libs/mp11/test](suites/libs-mp11-test.md) | 234 | 35.449s | 5.872× | 3.654× | 0.242s | 1.140× | 1.090× |
| [libs/mpl/test](suites/libs-mpl-test.md) | 99 | 12.184s | 2.569× | 2.967× | 0.011s | 1.154× | 1.096× |
| [libs/optional/test](suites/libs-optional-test.md) | 74 | 7.741s | 3.181× | 3.223× | 0.047s | 1.104× | 1.022× |
| [libs/proto/test](suites/libs-proto-test.md) | 23 | 11.374s | 3.213× | 3.179× | 0.043s | 1.139× | 1.036× |
| [libs/qvm/test](suites/libs-qvm-test.md) | 134 | 28.596s | 3.086× | 3.482× | 0.188s | 1.080× | 1.009× |
| [libs/spirit/repository/test](suites/libs-spirit-repository-test.md) | 8 | 12.994s | 3.916× | 3.960× | 0.010s | 1.077× | 0.983× |
| [libs/type_erasure/test](suites/libs-type_erasure-test.md) | 60 | 28.595s | 5.707× | 4.529× | 0.082s | 1.030× | 0.907× |
| [libs/type_traits/test](suites/libs-type_traits-test.md) | 218 | 27.861s | 3.597× | 6.008× | 0.219s | 1.132× | 1.015× |
| [libs/uuid/test](suites/libs-uuid-test.md) | 80 | 13.975s | 3.921× | 3.472× | 0.132s | 1.082× | 0.965× |
| [libs/variant2/test](suites/libs-variant2-test.md) | 84 | 32.018s | 3.291× | 4.411× | 0.071s | 1.067× | 0.932× |
| [libs/xpressive/test](suites/libs-xpressive-test.md) | 51 | 59.772s | 5.228× | 4.219× | 0.111s | 1.145× | 0.950× |

Performance uses O3 with assertions enabled; the GDB test remains Og and is correctness-only.

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 1.038× | 1.035×, 1.041× | 0.992× |
| clang | 1.046× | 1.043×, 1.050× | 0.995× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1364 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/43967972441).

Exact commands, per-test times, native outcomes and toolchain/host identities are retained with the results.

[Shared comparison](standard/summary.md) · [Version-1 records](standard/records.json) · [CI run](https://github.com/vishvananda/cppgm/actions/runs/43967972441)
