# Boost compilation and test execution

Boost 1.92.0, 17 C++11 suites (1,818 declarations). Ratios are reference / cppgm, higher is better.

Compilation counts child CPU of C++ test compilations, including expected rejections. It excludes configuration probes, library dependencies, C, linking and B2. Test execution includes process startup and the GDB integration test; it is correctness-test timing, not an application benchmark. The debugger source has identical volatile breakpoint anchors for all compilers; MPL and TypeTraits test enums use fixed underlying types for their -1 probes. Original test oracles are retained. Compile timings use one clean campaign per compiler; small differences need repeats.

| Suite | Declarations | Compile CPU cppgm | GCC | Clang | Test CPU cppgm | GCC | Clang |
|---|---:|---:|---:|---:|---:|---:|---:|
| [libs/accumulators/test](suites/libs-accumulators-test.md) | 49 | 68.527s | 3.232× | 4.135× | 3.032s | 1.153× | 1.017× |
| [libs/asio/test](suites/libs-asio-test.md) | 295 | 188.508s | 5.450× | 6.127× | 0.295s | 1.049× | 1.077× |
| [libs/container/test](suites/libs-container-test.md) | 89 | 135.808s | 6.183× | 5.198× | 2.435s | 1.024× | 1.075× |
| [libs/function/test](suites/libs-function-test.md) | 49 | 11.512s | 2.973× | 3.896× | 0.082s | 1.056× | 1.078× |
| [libs/fusion/test](suites/libs-fusion-test.md) | 221 | 86.863s | 2.694× | 3.709× | 0.397s | 1.063× | 1.047× |
| [libs/json/test](suites/libs-json-test.md) | 50 | 84.115s | 7.310× | 5.822× | 3.282s | 0.760× | 1.153× |
| [libs/mp11/test](suites/libs-mp11-test.md) | 234 | 58.467s | 5.463× | 4.237× | 0.399s | 1.068× | 1.136× |
| [libs/mpl/test](suites/libs-mpl-test.md) | 99 | 21.299s | 2.387× | 3.405× | 0.019s | 1.008× | 1.161× |
| [libs/optional/test](suites/libs-optional-test.md) | 74 | 13.450s | 2.957× | 3.760× | 0.080s | 0.973× | 1.010× |
| [libs/proto/test](suites/libs-proto-test.md) | 23 | 19.280s | 2.971× | 3.594× | 0.082s | 0.995× | 1.025× |
| [libs/qvm/test](suites/libs-qvm-test.md) | 134 | 49.824s | 2.886× | 4.143× | 0.319s | 0.994× | 0.979× |
| [libs/spirit/repository/test](suites/libs-spirit-repository-test.md) | 8 | 20.574s | 3.672× | 4.242× | 0.016s | 1.011× | 0.950× |
| [libs/type_erasure/test](suites/libs-type_erasure-test.md) | 60 | 46.096s | 5.249× | 5.028× | 0.158s | 0.948× | 0.987× |
| [libs/type_traits/test](suites/libs-type_traits-test.md) | 218 | 50.617s | 3.472× | 7.027× | 0.358s | 1.045× | 1.059× |
| [libs/uuid/test](suites/libs-uuid-test.md) | 80 | 23.135s | 3.728× | 4.201× | 0.184s | 1.044× | 1.028× |
| [libs/variant2/test](suites/libs-variant2-test.md) | 84 | 53.084s | 3.123× | 5.131× | 0.107s | 1.084× | 1.033× |
| [libs/xpressive/test](suites/libs-xpressive-test.md) | 51 | 92.165s | 4.932× | 4.782× | 0.190s | 1.124× | 0.992× |

Performance uses O3 with assertions enabled; the GDB test remains Og and is correctness-only.

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 1.035× | 1.033×, 1.038× | 0.993× |
| clang | 1.028× | 1.026×, 1.031× | 1.003× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1359 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44000592280).

Exact commands, per-test times, native outcomes and toolchain/host identities are retained with the results.

[Shared comparison](standard/summary.md) · [Version-1 records](standard/records.json) · [CI run](https://github.com/vishvananda/cppgm/actions/runs/44000592280)
