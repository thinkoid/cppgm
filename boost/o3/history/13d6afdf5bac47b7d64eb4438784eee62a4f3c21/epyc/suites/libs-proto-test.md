# libs/proto/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| calculator.test | RUN | 0.562789 | 1.436103 | 1.710065 | 0.002904 | 0.003152 | 0.003055 |
| constrained_ops.test | RUN | 0.630007 | 1.513751 | 1.876459 | 0.003040 | 0.003112 | 0.003025 |
| cpp-next_bug.test | RUN | 0.644558 | 1.616210 | 1.946942 | 0.002885 | 0.003205 | 0.003073 |
| deep_copy.test | RUN | 0.548008 | 1.456223 | 1.686014 | 0.002789 | 0.003062 | 0.002987 |
| display_expr.test | RUN | 0.667123 | 1.764893 | 1.960897 | 0.002941 | 0.002897 | 0.003058 |
| deduce_domain.test | RUN | 0.530078 | 1.254979 | 1.539775 | 0.002778 | 0.003206 | 0.002754 |
| env_var.test | RUN | 0.698303 | 2.947341 | 2.438186 | 0.003377 | 0.003838 | 0.003862 |
| examples.test | RUN | 0.673097 | 1.985394 | 2.294129 | 0.002958 | 0.002899 | 0.002734 |
| external_transforms.test | RUN | 0.662249 | 1.729392 | 2.056174 | 0.002794 | 0.003148 | 0.002835 |
| lambda.test | RUN | 0.634379 | 1.706598 | 2.069438 | 0.002955 | 0.003259 | 0.002964 |
| make_expr.test | RUN | 0.650390 | 2.781223 | 2.223164 | 0.003716 | 0.004119 | 0.004290 |
| matches.test | RUN | 0.585612 | 1.427112 | 1.871274 | 0.002832 | 0.002821 | 0.003321 |
| flatten.test | RUN | 1.061060 | 4.054434 | 4.524636 | 0.003249 | 0.003404 | 0.003063 |
| switch.test | RUN | 0.575403 | 1.398432 | 1.777463 | 0.003058 | 0.003118 | 0.003003 |
| toy_spirit.test | RUN | 0.636012 | 1.763246 | 2.205882 | 0.003012 | 0.003154 | 0.003216 |
| toy_spirit2.test | RUN | 0.687400 | 1.888003 | 2.353093 | 0.002643 | 0.003263 | 0.003083 |
| make.test | RUN | 0.548258 | 1.798337 | 1.723926 | 0.003826 | 0.003610 | 0.003505 |
| mem_ptr.test | RUN | 0.720621 | 2.929663 | 2.518802 | 0.003931 | 0.003809 | 0.003794 |
| mpl.test | RUN | 0.651780 | 1.475640 | 1.904300 | 0.002793 | 0.003188 | 0.002644 |
| noinvoke.test | RUN | 0.557302 | 1.245781 | 1.566606 | 0.002928 | 0.003237 | 0.003184 |
| pack_expansion.test | RUN | 0.663789 | 1.829840 | 2.064111 | 0.002536 | 0.003196 | 0.003291 |
| protect.test | RUN | 0.411432 | 1.271889 | 1.241127 | 0.002424 | 0.002528 | 0.002399 |
| bug2407.test | COMPILE | 0.483418 | 0.926879 | 0.951971 | — | — | — |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.964×† | 0.913×, 1.015× | 1.012× |
| clang | 1.021×† | 1.057×, 0.985× | 0.969× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1363 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43648658351).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| calculator.test | 10 | 0.001728s | 0.001687s | 0.001721s | byte equality observed |
| constrained_ops.test | 10 | 0.001712s | 0.001667s | 0.001705s | byte equality observed |
| cpp-next_bug.test | 9 | 0.001714s | 0.001706s | 0.001708s | byte equality observed |
| deduce_domain.test | 10 | 0.001690s | 0.001719s | 0.001730s | byte equality observed |
| deep_copy.test | 10 | 0.001730s | 0.001705s | 0.001710s | byte equality observed |
| display_expr.test | 10 | 0.001715s | 0.001736s | 0.001683s | byte equality observed |
| env_var.test | 9 | 0.001973s | 0.001990s | 0.001988s | byte equality observed |
| examples.test | 10 | 0.001711s | 0.001691s | 0.001687s | byte equality observed |
| external_transforms.test | 10 | 0.001716s | 0.001726s | 0.001707s | byte equality observed |
| flatten.test | 10 | 0.001799s | 0.001758s | 0.001713s | byte equality observed |
| lambda.test | 9 | 0.001738s | 0.001644s | 0.001641s | byte equality observed |
| make.test | 9 | 0.001867s | 0.001829s | 0.001824s | byte equality observed |
| make_expr.test | 9 | 0.002116s | 0.002087s | 0.002048s | byte equality observed |
| matches.test | 9 | 0.001679s | 0.001692s | 0.001705s | byte equality observed |
| mem_ptr.test | 8 | 0.002001s | 0.002002s | 0.002050s | byte equality observed |
| mpl.test | 10 | 0.001732s | 0.001668s | 0.001698s | byte equality observed |
| noinvoke.test | 10 | 0.001717s | 0.001683s | 0.001707s | byte equality observed |
| pack_expansion.test | 10 | 0.001763s | 0.001756s | 0.001746s | byte equality observed |
| protect.test | 10 | 0.001800s | 0.001697s | 0.001722s | byte equality observed |
| switch.test | 10 | 0.001667s | 0.001720s | 0.001689s | byte equality observed |
| toy_spirit.test | 10 | 0.001708s | 0.001654s | 0.001651s | byte equality observed |
| toy_spirit2.test | 10 | 0.001705s | 0.001716s | 0.001681s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43648658351).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
