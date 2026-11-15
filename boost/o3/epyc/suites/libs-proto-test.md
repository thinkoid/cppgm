# libs/proto/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| calculator.test | RUN | 0.720873 | 1.740600 | 2.164527 | 0.003674 | 0.003898 | 0.003571 |
| constrained_ops.test | RUN | 0.795004 | 1.846767 | 2.446461 | 0.003170 | 0.003779 | 0.003713 |
| cpp-next_bug.test | RUN | 0.812325 | 2.067231 | 2.487827 | 0.003641 | 0.003629 | 0.003811 |
| deep_copy.test | RUN | 0.700539 | 1.737046 | 2.094856 | 0.003235 | 0.003680 | 0.003818 |
| display_expr.test | RUN | 0.822196 | 2.155585 | 2.591229 | 0.003535 | 0.003612 | 0.003755 |
| deduce_domain.test | RUN | 0.673960 | 1.559491 | 1.954149 | 0.003656 | 0.003471 | 0.003588 |
| env_var.test | RUN | 0.886739 | 3.702817 | 2.944861 | 0.004137 | 0.004237 | 0.004417 |
| examples.test | RUN | 0.843635 | 2.381778 | 2.871036 | 0.003780 | 0.003444 | 0.003216 |
| external_transforms.test | RUN | 0.821314 | 2.046028 | 2.599350 | 0.003657 | 0.003499 | 0.003719 |
| lambda.test | RUN | 0.791268 | 2.086404 | 2.642875 | 0.003363 | 0.003707 | 0.003332 |
| make_expr.test | RUN | 0.801085 | 3.389934 | 2.762512 | 0.004632 | 0.005158 | 0.004744 |
| matches.test | RUN | 0.722383 | 1.738175 | 2.261519 | 0.003712 | 0.003458 | 0.003825 |
| flatten.test | RUN | 1.379074 | 4.894481 | 5.442665 | 0.003991 | 0.003996 | 0.004108 |
| switch.test | RUN | 0.703492 | 1.807840 | 2.190874 | 0.003776 | 0.003663 | 0.003662 |
| toy_spirit.test | RUN | 0.822907 | 2.151293 | 2.702404 | 0.003586 | 0.003710 | 0.003797 |
| toy_spirit2.test | RUN | 0.859627 | 2.278502 | 2.904385 | 0.003080 | 0.003928 | 0.003616 |
| make.test | RUN | 0.717299 | 2.200381 | 2.161320 | 0.004279 | 0.004482 | 0.004209 |
| mem_ptr.test | RUN | 0.899076 | 3.604481 | 3.112210 | 0.004302 | 0.004533 | 0.004486 |
| mpl.test | RUN | 0.802575 | 1.840364 | 2.311222 | 0.003543 | 0.003848 | 0.003462 |
| noinvoke.test | RUN | 0.685052 | 1.520958 | 1.939921 | 0.003666 | 0.003552 | 0.003695 |
| pack_expansion.test | RUN | 0.832636 | 2.126109 | 2.588993 | 0.002919 | 0.002923 | 0.003958 |
| protect.test | RUN | 0.621504 | 1.705428 | 1.435751 | 0.002870 | 0.002843 | 0.002900 |
| bug2407.test | COMPILE | 0.474148 | 1.220072 | 1.336471 | — | — | — |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.983× | 0.987×, 0.978× | 1.014× |
| clang | 0.979× | 0.975×, 0.983× | 1.001× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1359 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/43701438216).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| calculator.test | 8 | 0.002168s | 0.002148s | 0.002146s | byte equality observed |
| constrained_ops.test | 8 | 0.002145s | 0.002133s | 0.002126s | byte equality observed |
| cpp-next_bug.test | 8 | 0.002151s | 0.002103s | 0.002144s | byte equality observed |
| deduce_domain.test | 9 | 0.002157s | 0.002108s | 0.002136s | byte equality observed |
| deep_copy.test | 9 | 0.002125s | 0.002052s | 0.002119s | byte equality observed |
| display_expr.test | 9 | 0.002225s | 0.002137s | 0.002147s | byte equality observed |
| env_var.test | 8 | 0.002562s | 0.002472s | 0.002481s | byte equality observed |
| examples.test | 9 | 0.002161s | 0.002100s | 0.002115s | byte equality observed |
| external_transforms.test | 9 | 0.002202s | 0.002114s | 0.002195s | byte equality observed |
| flatten.test | 8 | 0.002231s | 0.002211s | 0.002186s | byte equality observed |
| lambda.test | 9 | 0.002178s | 0.002104s | 0.002116s | byte equality observed |
| make.test | 8 | 0.002392s | 0.002357s | 0.002360s | byte equality observed |
| make_expr.test | 7 | 0.002716s | 0.002660s | 0.002660s | byte equality observed |
| matches.test | 8 | 0.002165s | 0.002103s | 0.002075s | byte equality observed |
| mem_ptr.test | 8 | 0.002556s | 0.002467s | 0.002446s | byte equality observed |
| mpl.test | 8 | 0.002154s | 0.002152s | 0.002141s | byte equality observed |
| noinvoke.test | 9 | 0.002176s | 0.002161s | 0.002131s | byte equality observed |
| pack_expansion.test | 8 | 0.002234s | 0.002184s | 0.002129s | byte equality observed |
| protect.test | 9 | 0.002221s | 0.002215s | 0.002157s | byte equality observed |
| switch.test | 8 | 0.002137s | 0.002144s | 0.002124s | byte equality observed |
| toy_spirit.test | 9 | 0.002135s | 0.002108s | 0.002118s | byte equality observed |
| toy_spirit2.test | 7 | 0.002157s | 0.002105s | 0.002091s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/43701438216).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
