# libs/proto/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| calculator.test | RUN | 0.759038 | 1.924889 | 2.592510 | 0.003568 | 0.003931 | 0.003556 |
| constrained_ops.test | RUN | 0.835341 | 2.014057 | 2.853732 | 0.003506 | 0.003950 | 0.003676 |
| cpp-next_bug.test | RUN | 0.871060 | 2.170133 | 2.971818 | 0.003424 | 0.003862 | 0.003839 |
| deep_copy.test | RUN | 0.722659 | 1.933087 | 2.524390 | 0.003577 | 0.003809 | 0.003466 |
| display_expr.test | RUN | 0.871106 | 2.385463 | 3.090003 | 0.003801 | 0.003668 | 0.003865 |
| deduce_domain.test | RUN | 0.695157 | 1.702630 | 2.344278 | 0.003463 | 0.003569 | 0.003724 |
| env_var.test | RUN | 0.938551 | 4.019740 | 3.525994 | 0.004308 | 0.004283 | 0.004831 |
| examples.test | RUN | 0.900979 | 2.601260 | 3.397118 | 0.003536 | 0.003576 | 0.003807 |
| external_transforms.test | RUN | 0.881859 | 2.239543 | 3.114743 | 0.003696 | 0.003450 | 0.003754 |
| lambda.test | RUN | 0.867907 | 2.310273 | 3.164628 | 0.003617 | 0.003500 | 0.003780 |
| make_expr.test | RUN | 0.859416 | 3.688264 | 3.217817 | 0.004646 | 0.004902 | 0.004550 |
| matches.test | RUN | 0.807415 | 1.889451 | 2.750160 | 0.003464 | 0.003746 | 0.003676 |
| flatten.test | RUN | 1.489538 | 5.290554 | 6.385578 | 0.003790 | 0.003789 | 0.003801 |
| switch.test | RUN | 0.758888 | 1.852960 | 2.548611 | 0.003697 | 0.003556 | 0.003732 |
| toy_spirit.test | RUN | 0.853999 | 2.434906 | 3.223351 | 0.003627 | 0.003726 | 0.003279 |
| toy_spirit2.test | RUN | 0.953496 | 2.503455 | 3.520632 | 0.003598 | 0.003553 | 0.003652 |
| make.test | RUN | 0.744052 | 2.451938 | 2.500877 | 0.004338 | 0.004150 | 0.003717 |
| mem_ptr.test | RUN | 0.952540 | 3.803948 | 3.698906 | 0.004015 | 0.004446 | 0.004086 |
| mpl.test | RUN | 0.862288 | 2.064084 | 2.749171 | 0.003514 | 0.003796 | 0.003371 |
| noinvoke.test | RUN | 0.735616 | 1.672564 | 2.277488 | 0.003530 | 0.003475 | 0.003688 |
| pack_expansion.test | RUN | 0.882620 | 2.305041 | 3.004900 | 0.002800 | 0.002787 | 0.004116 |
| protect.test | RUN | 0.635873 | 1.668754 | 1.538565 | 0.002620 | 0.002620 | 0.002720 |
| bug2407.test | COMPILE | 0.445909 | 1.263400 | 1.422282 | — | — | — |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.988× | 0.992×, 0.984× | 0.989× |
| clang | 0.970× | 0.978×, 0.963× | 0.996× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1361 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43664060660).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| calculator.test | 9 | 0.002124s | 0.002002s | 0.002036s | byte equality observed |
| constrained_ops.test | 9 | 0.002072s | 0.002060s | 0.001935s | byte equality observed |
| cpp-next_bug.test | 9 | 0.002085s | 0.001988s | 0.002071s | byte equality observed |
| deduce_domain.test | 9 | 0.002043s | 0.001993s | 0.002050s | byte equality observed |
| deep_copy.test | 10 | 0.002076s | 0.001987s | 0.002018s | byte equality observed |
| display_expr.test | 7 | 0.002034s | 0.001982s | 0.001993s | byte equality observed |
| env_var.test | 7 | 0.002371s | 0.002308s | 0.002358s | byte equality observed |
| examples.test | 7 | 0.002033s | 0.002009s | 0.002027s | byte equality observed |
| external_transforms.test | 6 | 0.002091s | 0.002166s | 0.001985s | byte equality observed |
| flatten.test | 8 | 0.002119s | 0.002044s | 0.002080s | byte equality observed |
| lambda.test | 8 | 0.002053s | 0.002104s | 0.001999s | byte equality observed |
| make.test | 8 | 0.002225s | 0.002282s | 0.002195s | byte equality observed |
| make_expr.test | 8 | 0.002482s | 0.002480s | 0.002458s | byte equality observed |
| matches.test | 9 | 0.002084s | 0.002062s | 0.002031s | byte equality observed |
| mem_ptr.test | 8 | 0.002376s | 0.002350s | 0.002321s | byte equality observed |
| mpl.test | 9 | 0.002076s | 0.001976s | 0.001971s | byte equality observed |
| noinvoke.test | 10 | 0.002097s | 0.002027s | 0.002018s | byte equality observed |
| pack_expansion.test | 9 | 0.002100s | 0.002099s | 0.002008s | byte equality observed |
| protect.test | 9 | 0.002103s | 0.002039s | 0.002055s | byte equality observed |
| switch.test | 9 | 0.002022s | 0.001998s | 0.001930s | byte equality observed |
| toy_spirit.test | 8 | 0.002045s | 0.002056s | 0.002000s | byte equality observed |
| toy_spirit2.test | 9 | 0.002083s | 0.002063s | 0.001980s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43664060660).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
