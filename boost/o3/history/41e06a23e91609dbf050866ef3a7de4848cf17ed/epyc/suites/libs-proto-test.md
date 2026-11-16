# libs/proto/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| calculator.test | RUN | 0.752024 | 1.890506 | 2.542474 | 0.003284 | 0.003482 | 0.003807 |
| constrained_ops.test | RUN | 0.836593 | 1.972447 | 2.882520 | 0.003494 | 0.003537 | 0.003601 |
| cpp-next_bug.test | RUN | 0.857152 | 2.220531 | 2.901850 | 0.003180 | 0.003661 | 0.003234 |
| deep_copy.test | RUN | 0.718066 | 1.859886 | 2.480435 | 0.003084 | 0.003469 | 0.003570 |
| display_expr.test | RUN | 0.877860 | 2.339793 | 3.012549 | 0.003731 | 0.003511 | 0.003671 |
| deduce_domain.test | RUN | 0.704542 | 1.678445 | 2.159970 | 0.003695 | 0.003368 | 0.003803 |
| env_var.test | RUN | 0.964024 | 4.020260 | 3.580964 | 0.004379 | 0.004238 | 0.004748 |
| examples.test | RUN | 0.884206 | 2.561396 | 3.371846 | 0.003667 | 0.003356 | 0.003899 |
| external_transforms.test | RUN | 0.886618 | 2.252110 | 3.118713 | 0.003455 | 0.003381 | 0.003770 |
| lambda.test | RUN | 0.867449 | 2.267467 | 3.033067 | 0.003813 | 0.003517 | 0.003624 |
| make_expr.test | RUN | 0.853914 | 3.661789 | 3.219152 | 0.004628 | 0.005092 | 0.005074 |
| matches.test | RUN | 0.820597 | 1.856953 | 2.662064 | 0.003325 | 0.003477 | 0.003516 |
| flatten.test | RUN | 1.447790 | 5.217314 | 6.347744 | 0.003921 | 0.003634 | 0.003496 |
| switch.test | RUN | 0.740622 | 1.946670 | 2.530587 | 0.003663 | 0.003571 | 0.003925 |
| toy_spirit.test | RUN | 0.854374 | 2.362339 | 3.240118 | 0.003567 | 0.003490 | 0.003801 |
| toy_spirit2.test | RUN | 0.909118 | 2.550283 | 3.391124 | 0.003389 | 0.003837 | 0.003637 |
| make.test | RUN | 0.738508 | 2.414337 | 2.449921 | 0.004138 | 0.004323 | 0.004284 |
| mem_ptr.test | RUN | 0.928428 | 3.813954 | 3.595794 | 0.004400 | 0.004270 | 0.004159 |
| mpl.test | RUN | 0.823626 | 1.981279 | 2.669162 | 0.003255 | 0.003434 | 0.003147 |
| noinvoke.test | RUN | 0.720837 | 1.676310 | 2.299979 | 0.003604 | 0.003731 | 0.003553 |
| pack_expansion.test | RUN | 0.792793 | 2.225384 | 3.001525 | 0.002798 | 0.002748 | 0.003898 |
| protect.test | RUN | 0.626341 | 1.749476 | 1.614675 | 0.002686 | 0.002705 | 0.002609 |
| bug2407.test | COMPILE | 0.578655 | 1.195414 | 1.285455 | — | — | — |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.990× | 0.987×, 0.993× | 0.995× |
| clang | 0.961× | 0.966×, 0.955× | 0.982× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1359 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/43785224349).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| calculator.test | 9 | 0.002045s | 0.002034s | 0.001992s | byte equality observed |
| constrained_ops.test | 9 | 0.002072s | 0.001990s | 0.001921s | byte equality observed |
| cpp-next_bug.test | 9 | 0.001981s | 0.002044s | 0.002051s | byte equality observed |
| deduce_domain.test | 9 | 0.002042s | 0.001972s | 0.001935s | byte equality observed |
| deep_copy.test | 9 | 0.002008s | 0.001999s | 0.001933s | byte equality observed |
| display_expr.test | 9 | 0.002035s | 0.001995s | 0.001982s | byte equality observed |
| env_var.test | 7 | 0.002306s | 0.002299s | 0.002290s | byte equality observed |
| examples.test | 9 | 0.002008s | 0.001997s | 0.001945s | byte equality observed |
| external_transforms.test | 8 | 0.002076s | 0.002064s | 0.001965s | byte equality observed |
| flatten.test | 8 | 0.002063s | 0.002108s | 0.002077s | byte equality observed |
| lambda.test | 9 | 0.002044s | 0.001947s | 0.001958s | byte equality observed |
| make.test | 8 | 0.002226s | 0.002129s | 0.002077s | byte equality observed |
| make_expr.test | 8 | 0.002464s | 0.002399s | 0.002400s | byte equality observed |
| matches.test | 9 | 0.002008s | 0.001957s | 0.001902s | byte equality observed |
| mem_ptr.test | 8 | 0.002348s | 0.002331s | 0.002299s | byte equality observed |
| mpl.test | 9 | 0.001972s | 0.001943s | 0.001938s | byte equality observed |
| noinvoke.test | 10 | 0.002041s | 0.001996s | 0.001932s | byte equality observed |
| pack_expansion.test | 8 | 0.002091s | 0.002005s | 0.002004s | byte equality observed |
| protect.test | 9 | 0.002060s | 0.002013s | 0.001980s | byte equality observed |
| switch.test | 9 | 0.002047s | 0.001990s | 0.001949s | byte equality observed |
| toy_spirit.test | 10 | 0.001984s | 0.002051s | 0.001940s | byte equality observed |
| toy_spirit2.test | 9 | 0.002076s | 0.002003s | 0.001975s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/43785224349).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
