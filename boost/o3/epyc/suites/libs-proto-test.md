# libs/proto/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| calculator.test | RUN | 0.746404 | 1.907741 | 2.563160 | 0.003161 | 0.003839 | 0.003645 |
| constrained_ops.test | RUN | 0.833190 | 2.014467 | 2.868075 | 0.003624 | 0.003903 | 0.003463 |
| cpp-next_bug.test | RUN | 0.871753 | 2.215675 | 2.909688 | 0.003255 | 0.003961 | 0.003647 |
| deep_copy.test | RUN | 0.713933 | 1.869720 | 2.474929 | 0.003369 | 0.003576 | 0.003743 |
| display_expr.test | RUN | 0.879324 | 2.365357 | 2.996147 | 0.003215 | 0.003488 | 0.003824 |
| deduce_domain.test | RUN | 0.686536 | 1.659571 | 2.176321 | 0.003517 | 0.003519 | 0.004086 |
| env_var.test | RUN | 0.932649 | 4.022716 | 3.588542 | 0.004188 | 0.004310 | 0.004767 |
| examples.test | RUN | 0.897759 | 2.522041 | 3.363777 | 0.003262 | 0.003737 | 0.003495 |
| external_transforms.test | RUN | 0.872999 | 2.265004 | 3.092664 | 0.003395 | 0.003174 | 0.003074 |
| lambda.test | RUN | 0.838879 | 2.237008 | 3.078725 | 0.003513 | 0.003706 | 0.003912 |
| make_expr.test | RUN | 0.855728 | 3.667245 | 3.226904 | 0.004615 | 0.004841 | 0.004784 |
| matches.test | RUN | 0.778419 | 1.872850 | 2.749435 | 0.003653 | 0.003258 | 0.003765 |
| flatten.test | RUN | 1.466636 | 5.309096 | 6.401019 | 0.003745 | 0.003687 | 0.004190 |
| switch.test | RUN | 0.748163 | 1.840076 | 2.511789 | 0.003648 | 0.003638 | 0.003807 |
| toy_spirit.test | RUN | 0.842816 | 2.434619 | 3.176816 | 0.003543 | 0.003620 | 0.003840 |
| toy_spirit2.test | RUN | 0.916989 | 2.469597 | 3.418627 | 0.003554 | 0.003761 | 0.003801 |
| make.test | RUN | 0.717916 | 2.391053 | 2.495129 | 0.004087 | 0.004147 | 0.004362 |
| mem_ptr.test | RUN | 0.933813 | 3.799811 | 3.532910 | 0.004382 | 0.004600 | 0.004532 |
| mpl.test | RUN | 0.825556 | 2.050448 | 2.794764 | 0.003420 | 0.003714 | 0.003717 |
| noinvoke.test | RUN | 0.703668 | 1.632868 | 2.319345 | 0.003213 | 0.003784 | 0.003631 |
| pack_expansion.test | RUN | 0.858404 | 2.512921 | 2.952145 | 0.003134 | 0.003746 | 0.003877 |
| protect.test | RUN | 0.507573 | 1.694597 | 1.509947 | 0.002734 | 0.002797 | 0.002499 |
| bug2407.test | COMPILE | 0.611069 | 1.089610 | 1.443210 | — | — | — |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.988× | 0.997×, 0.980× | 0.983× |
| clang | 0.968× | 0.976×, 0.960× | 1.013× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1360 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/43712369003).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| calculator.test | 8 | 0.002084s | 0.002022s | 0.002021s | byte equality observed |
| constrained_ops.test | 8 | 0.002067s | 0.001993s | 0.002036s | byte equality observed |
| cpp-next_bug.test | 9 | 0.001987s | 0.002062s | 0.001915s | byte equality observed |
| deduce_domain.test | 9 | 0.002008s | 0.002011s | 0.001922s | byte equality observed |
| deep_copy.test | 9 | 0.002020s | 0.002074s | 0.001933s | byte equality observed |
| display_expr.test | 9 | 0.002089s | 0.001951s | 0.002048s | byte equality observed |
| env_var.test | 8 | 0.002342s | 0.002261s | 0.002242s | byte equality observed |
| examples.test | 9 | 0.002036s | 0.002019s | 0.002025s | byte equality observed |
| external_transforms.test | 9 | 0.002072s | 0.002088s | 0.001962s | byte equality observed |
| flatten.test | 8 | 0.002157s | 0.002082s | 0.002002s | byte equality observed |
| lambda.test | 9 | 0.001993s | 0.002073s | 0.001943s | byte equality observed |
| make.test | 8 | 0.002218s | 0.002283s | 0.002154s | byte equality observed |
| make_expr.test | 8 | 0.002488s | 0.002456s | 0.002399s | byte equality observed |
| matches.test | 8 | 0.002023s | 0.001971s | 0.001974s | byte equality observed |
| mem_ptr.test | 8 | 0.002365s | 0.002346s | 0.002297s | byte equality observed |
| mpl.test | 8 | 0.002020s | 0.001929s | 0.001953s | byte equality observed |
| noinvoke.test | 9 | 0.002082s | 0.002044s | 0.002014s | byte equality observed |
| pack_expansion.test | 7 | 0.002098s | 0.002109s | 0.001995s | byte equality observed |
| protect.test | 8 | 0.002131s | 0.002027s | 0.002011s | byte equality observed |
| switch.test | 9 | 0.002064s | 0.002056s | 0.001979s | byte equality observed |
| toy_spirit.test | 8 | 0.002057s | 0.001975s | 0.002027s | byte equality observed |
| toy_spirit2.test | 7 | 0.002043s | 0.002014s | 0.001950s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/43712369003).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
