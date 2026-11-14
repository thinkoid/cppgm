# libs/proto/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| calculator.test | RUN | 0.582873 | 1.440696 | 1.716843 | 0.002932 | 0.003238 | 0.003139 |
| constrained_ops.test | RUN | 0.637149 | 1.544708 | 1.921475 | 0.003132 | 0.003280 | 0.003180 |
| cpp-next_bug.test | RUN | 0.656473 | 1.646100 | 1.970196 | 0.002866 | 0.002706 | 0.002861 |
| deep_copy.test | RUN | 0.548821 | 1.410105 | 1.713793 | 0.002914 | 0.003118 | 0.002991 |
| display_expr.test | RUN | 0.682492 | 1.753490 | 2.005291 | 0.002898 | 0.002768 | 0.003311 |
| deduce_domain.test | RUN | 0.533760 | 1.264301 | 1.590355 | 0.003102 | 0.003219 | 0.003238 |
| env_var.test | RUN | 0.725619 | 2.994476 | 2.461732 | 0.003558 | 0.003804 | 0.003753 |
| examples.test | RUN | 0.686776 | 1.903325 | 2.297157 | 0.002991 | 0.002856 | 0.002776 |
| external_transforms.test | RUN | 0.676376 | 1.698608 | 2.040789 | 0.002854 | 0.003059 | 0.003211 |
| lambda.test | RUN | 0.638453 | 1.721318 | 2.100297 | 0.002934 | 0.003009 | 0.002666 |
| make_expr.test | RUN | 0.660970 | 2.733393 | 2.169581 | 0.003969 | 0.004110 | 0.003797 |
| matches.test | RUN | 0.578064 | 1.424459 | 1.788608 | 0.003009 | 0.003070 | 0.002471 |
| flatten.test | RUN | 1.161737 | 4.004077 | 4.368306 | 0.003026 | 0.003707 | 0.002857 |
| switch.test | RUN | 0.566547 | 1.396908 | 1.693293 | 0.003023 | 0.003128 | 0.002746 |
| toy_spirit.test | RUN | 0.654736 | 1.708690 | 2.150893 | 0.003072 | 0.003353 | 0.003063 |
| toy_spirit2.test | RUN | 0.756737 | 1.843040 | 2.303362 | 0.003012 | 0.003243 | 0.002876 |
| make.test | RUN | 0.553635 | 1.729651 | 1.662614 | 0.003507 | 0.003404 | 0.003385 |
| mem_ptr.test | RUN | 0.706833 | 2.821401 | 2.388371 | 0.003849 | 0.003889 | 0.003759 |
| mpl.test | RUN | 0.641252 | 1.459816 | 1.835796 | 0.002798 | 0.003128 | 0.002938 |
| noinvoke.test | RUN | 0.536766 | 1.178866 | 1.525493 | 0.002857 | 0.003210 | 0.003029 |
| pack_expansion.test | RUN | 0.609894 | 1.663955 | 2.011407 | 0.002513 | 0.002450 | 0.003221 |
| protect.test | RUN | 0.487775 | 1.291476 | 1.190939 | 0.002411 | 0.002276 | 0.002294 |
| bug2407.test | COMPILE | 0.459014 | 0.944446 | 1.106235 | — | — | — |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 1.038×† | 1.068×, 1.008× | 1.005× |
| clang | 0.966× | 0.975×, 0.957× | 0.988× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1363 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43638391827).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| calculator.test | 10 | 0.001736s | 0.001857s | 0.001697s | byte equality observed |
| constrained_ops.test | 10 | 0.001723s | 0.001702s | 0.001679s | byte equality observed |
| cpp-next_bug.test | 9 | 0.001698s | 0.001726s | 0.001684s | byte equality observed |
| deduce_domain.test | 9 | 0.001707s | 0.001919s | 0.001634s | byte equality observed |
| deep_copy.test | 10 | 0.001710s | 0.001837s | 0.001653s | byte equality observed |
| display_expr.test | 10 | 0.001696s | 0.001817s | 0.001654s | byte equality observed |
| env_var.test | 10 | 0.002007s | 0.002026s | 0.001984s | byte equality observed |
| examples.test | 10 | 0.001740s | 0.001726s | 0.001655s | byte equality observed |
| external_transforms.test | 10 | 0.001762s | 0.001808s | 0.001779s | byte equality observed |
| flatten.test | 10 | 0.001821s | 0.001841s | 0.001720s | byte equality observed |
| lambda.test | 10 | 0.001715s | 0.001732s | 0.001652s | byte equality observed |
| make.test | 9 | 0.001908s | 0.001891s | 0.001879s | byte equality observed |
| make_expr.test | 9 | 0.002179s | 0.002139s | 0.002088s | byte equality observed |
| matches.test | 10 | 0.001716s | 0.001719s | 0.001668s | byte equality observed |
| mem_ptr.test | 8 | 0.002024s | 0.002017s | 0.001970s | byte equality observed |
| mpl.test | 10 | 0.001710s | 0.001726s | 0.001663s | byte equality observed |
| noinvoke.test | 10 | 0.001744s | 0.001696s | 0.001669s | byte equality observed |
| pack_expansion.test | 10 | 0.001792s | 0.001756s | 0.001683s | byte equality observed |
| protect.test | 10 | 0.001802s | 0.001740s | 0.001708s | byte equality observed |
| switch.test | 10 | 0.001742s | 0.001679s | 0.001663s | byte equality observed |
| toy_spirit.test | 10 | 0.001718s | 0.001673s | 0.001644s | byte equality observed |
| toy_spirit2.test | 10 | 0.001769s | 0.001766s | 0.001669s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43638391827).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
