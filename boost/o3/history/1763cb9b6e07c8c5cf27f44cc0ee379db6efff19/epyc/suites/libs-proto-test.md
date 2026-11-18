# libs/proto/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| calculator.test | RUN | 0.701166 | 1.798278 | 2.232916 | 0.003771 | 0.004063 | 0.003683 |
| constrained_ops.test | RUN | 0.804615 | 1.888599 | 2.411578 | 0.003807 | 0.003785 | 0.003778 |
| cpp-next_bug.test | RUN | 0.834939 | 2.019062 | 2.489793 | 0.003642 | 0.003548 | 0.003345 |
| deep_copy.test | RUN | 0.691369 | 1.828272 | 2.143214 | 0.003657 | 0.003621 | 0.003450 |
| display_expr.test | RUN | 0.849344 | 2.222670 | 2.506973 | 0.003560 | 0.003591 | 0.003787 |
| deduce_domain.test | RUN | 0.663455 | 1.565474 | 1.952359 | 0.003596 | 0.003658 | 0.003786 |
| env_var.test | RUN | 0.905890 | 3.768388 | 3.148893 | 0.004287 | 0.004341 | 0.004697 |
| examples.test | RUN | 0.865680 | 2.356933 | 2.907905 | 0.003683 | 0.003426 | 0.003865 |
| external_transforms.test | RUN | 0.847506 | 2.130215 | 2.608106 | 0.003672 | 0.003452 | 0.004046 |
| lambda.test | RUN | 0.820135 | 2.135942 | 2.655523 | 0.003489 | 0.003720 | 0.003520 |
| make_expr.test | RUN | 0.812826 | 3.472953 | 2.744854 | 0.004612 | 0.005307 | 0.004822 |
| matches.test | RUN | 0.726375 | 1.761226 | 2.304921 | 0.003679 | 0.003749 | 0.003610 |
| flatten.test | RUN | 1.328914 | 5.027646 | 5.462195 | 0.003907 | 0.004188 | 0.003095 |
| switch.test | RUN | 0.704417 | 1.767227 | 2.166681 | 0.003818 | 0.003979 | 0.003750 |
| toy_spirit.test | RUN | 0.787900 | 2.239754 | 2.719950 | 0.003778 | 0.003949 | 0.003697 |
| toy_spirit2.test | RUN | 0.873063 | 2.353030 | 2.934066 | 0.003817 | 0.003676 | 0.003524 |
| make.test | RUN | 0.686371 | 2.204339 | 2.169099 | 0.004374 | 0.004625 | 0.004159 |
| mem_ptr.test | RUN | 0.896768 | 3.789535 | 3.130835 | 0.004559 | 0.004631 | 0.004428 |
| mpl.test | RUN | 0.791726 | 1.960399 | 2.319154 | 0.003577 | 0.004033 | 0.003761 |
| noinvoke.test | RUN | 0.687230 | 1.612714 | 1.919808 | 0.003258 | 0.003748 | 0.003573 |
| pack_expansion.test | RUN | 0.835685 | 2.279261 | 2.573809 | 0.003037 | 0.003055 | 0.003988 |
| protect.test | RUN | 0.641966 | 1.722128 | 1.373612 | 0.002930 | 0.002960 | 0.002862 |
| bug2407.test | COMPILE | 0.456212 | 1.126041 | 1.333629 | — | — | — |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.986× | 0.992×, 0.980× | 1.000× |
| clang | 0.981× | 0.983×, 0.979× | 1.017× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1359 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44390936409).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| calculator.test | 8 | 0.002221s | 0.002191s | 0.002142s | byte equality observed |
| constrained_ops.test | 7 | 0.002153s | 0.002115s | 0.002156s | byte equality observed |
| cpp-next_bug.test | 9 | 0.002205s | 0.002123s | 0.002205s | byte equality observed |
| deduce_domain.test | 8 | 0.002169s | 0.002128s | 0.002116s | byte equality observed |
| deep_copy.test | 7 | 0.002198s | 0.002120s | 0.002158s | byte equality observed |
| display_expr.test | 7 | 0.002185s | 0.002114s | 0.002145s | byte equality observed |
| env_var.test | 5 | 0.002588s | 0.002515s | 0.002536s | byte equality observed |
| examples.test | 8 | 0.002201s | 0.002219s | 0.002159s | byte equality observed |
| external_transforms.test | 8 | 0.002205s | 0.002166s | 0.002177s | byte equality observed |
| flatten.test | 8 | 0.002222s | 0.002237s | 0.002222s | byte equality observed |
| lambda.test | 8 | 0.002149s | 0.002120s | 0.002132s | byte equality observed |
| make.test | 7 | 0.002420s | 0.002315s | 0.002345s | byte equality observed |
| make_expr.test | 7 | 0.002680s | 0.002669s | 0.002611s | byte equality observed |
| matches.test | 8 | 0.002154s | 0.002181s | 0.002166s | byte equality observed |
| mem_ptr.test | 7 | 0.002555s | 0.002483s | 0.002514s | byte equality observed |
| mpl.test | 7 | 0.002169s | 0.002131s | 0.002129s | byte equality observed |
| noinvoke.test | 8 | 0.002209s | 0.002101s | 0.002164s | byte equality observed |
| pack_expansion.test | 8 | 0.002230s | 0.002243s | 0.002201s | byte equality observed |
| protect.test | 7 | 0.002285s | 0.002215s | 0.002195s | byte equality observed |
| switch.test | 8 | 0.002137s | 0.002124s | 0.002119s | byte equality observed |
| toy_spirit.test | 7 | 0.002161s | 0.002205s | 0.002210s | byte equality observed |
| toy_spirit2.test | 8 | 0.002207s | 0.002110s | 0.002151s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44390936409).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
