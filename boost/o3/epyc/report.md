# Boost compilation and test execution

Boost 1.92.0, 17 C++11 suites (1,818 declarations). Ratios are reference / cppgm, higher is better.

Compilation counts child CPU of C++ test compilations, including expected rejections. It excludes configuration probes, library dependencies, C, linking and B2. Test execution includes process startup and the GDB integration test; it is correctness-test timing, not an application benchmark. The debugger source has identical volatile breakpoint anchors for all compilers; MPL and TypeTraits test enums use fixed underlying types for their -1 probes. Original test oracles are retained. Compile timings use one clean campaign per compiler; small differences need repeats.

| Suite | Declarations | Compile CPU cppgm | GCC | Clang | Test CPU cppgm | GCC | Clang |
|---|---:|---:|---:|---:|---:|---:|---:|
| [libs/accumulators/test](suites/libs-accumulators-test.md) | 49 | 52.284s | 3.064× | 3.620× | 2.809s | 1.033× | 0.879× |
| [libs/asio/test](suites/libs-asio-test.md) | 295 | 139.464s | 5.390× | 5.452× | 0.248s | 1.058× | 1.038× |
| [libs/container/test](suites/libs-container-test.md) | 89 | 113.072s | 5.505× | 4.198× | 2.209s | 0.883× | 0.905× |
| [libs/function/test](suites/libs-function-test.md) | 49 | 8.655s | 2.854× | 3.334× | 0.069s | 1.053× | 1.011× |
| [libs/fusion/test](suites/libs-fusion-test.md) | 221 | 62.977s | 2.671× | 3.327× | 0.323s | 1.090× | 1.048× |
| [libs/json/test](suites/libs-json-test.md) | 50 | 62.155s | 7.239× | 5.375× | 2.447s | 0.837× | 0.991× |
| [libs/mp11/test](suites/libs-mp11-test.md) | 234 | 42.221s | 5.450× | 3.892× | 0.335s | 1.081× | 1.150× |
| [libs/mpl/test](suites/libs-mpl-test.md) | 99 | 15.474s | 2.400× | 3.042× | 0.016s | 1.058× | 1.136× |
| [libs/optional/test](suites/libs-optional-test.md) | 74 | 9.751s | 2.935× | 3.347× | 0.066s | 1.044× | 1.071× |
| [libs/proto/test](suites/libs-proto-test.md) | 23 | 14.831s | 2.810× | 3.112× | 0.068s | 1.020× | 1.012× |
| [libs/qvm/test](suites/libs-qvm-test.md) | 134 | 36.492s | 2.812× | 3.602× | 0.263s | 1.001× | 0.948× |
| [libs/spirit/repository/test](suites/libs-spirit-repository-test.md) | 8 | 15.248s | 3.699× | 3.998× | 0.014s | 0.996× | 0.922× |
| [libs/type_erasure/test](suites/libs-type_erasure-test.md) | 60 | 34.406s | 5.287× | 4.502× | 0.131s | 0.947× | 0.944× |
| [libs/type_traits/test](suites/libs-type_traits-test.md) | 218 | 35.128s | 3.427× | 6.608× | 0.300s | 1.069× | 1.073× |
| [libs/uuid/test](suites/libs-uuid-test.md) | 80 | 16.815s | 3.677× | 3.724× | 0.154s | 1.035× | 0.993× |
| [libs/variant2/test](suites/libs-variant2-test.md) | 84 | 40.009s | 3.050× | 4.542× | 0.093s | 1.058× | 1.023× |
| [libs/xpressive/test](suites/libs-xpressive-test.md) | 51 | 68.273s | 4.912× | 4.345× | 0.150s | 1.119× | 0.981× |

Performance uses O3 with assertions enabled; the GDB test remains Og and is correctness-only.

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.976× | 0.976×, 0.977× | 1.004× |
| clang | 0.949× | 0.946×, 0.951× | 1.005× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1362 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43619774656).

Exact commands, per-test times, native outcomes and toolchain/host identities are retained with the results.

[Shared comparison](standard/summary.md) · [Version-1 records](standard/records.json) · [CI run](https://github.com/vishvananda/cppgm-extended/actions/runs/43619774656)
