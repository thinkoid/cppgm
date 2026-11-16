# libs/proto/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| calculator.test | RUN | 0.382053 | 0.991792 | 0.975245 | 0.001757 | 0.001724 | 0.001605 |
| constrained_ops.test | RUN | 0.433131 | 1.081323 | 1.161070 | 0.001895 | 0.001710 | 0.001773 |
| cpp-next_bug.test | RUN | 0.444067 | 1.168102 | 1.216406 | 0.001866 | 0.001746 | 0.001722 |
| deep_copy.test | RUN | 0.372359 | 1.036376 | 0.994807 | 0.001784 | 0.001720 | 0.001641 |
| display_expr.test | RUN | 0.460812 | 1.251277 | 1.286144 | 0.001903 | 0.001816 | 0.001554 |
| deduce_domain.test | RUN | 0.362027 | 0.862476 | 0.924559 | 0.001784 | 0.001658 | 0.001642 |
| env_var.test | RUN | 0.486165 | 2.141626 | 1.486149 | 0.002087 | 0.001980 | 0.001912 |
| examples.test | RUN | 0.467839 | 1.355994 | 1.406450 | 0.001811 | 0.001724 | 0.001662 |
| external_transforms.test | RUN | 0.465234 | 1.172293 | 1.227967 | 0.001834 | 0.001632 | 0.001859 |
| lambda.test | RUN | 0.443579 | 1.212184 | 1.272497 | 0.001736 | 0.001608 | 0.001699 |
| make_expr.test | RUN | 0.463081 | 1.986456 | 1.333542 | 0.002021 | 0.002099 | 0.001966 |
| matches.test | RUN | 0.396097 | 0.982711 | 1.123354 | 0.001743 | 0.001665 | 0.001594 |
| flatten.test | RUN | 0.749450 | 2.766588 | 2.690938 | 0.001867 | 0.001803 | 0.001852 |
| switch.test | RUN | 0.392314 | 0.986779 | 1.026272 | 0.001716 | 0.001614 | 0.001682 |
| toy_spirit.test | RUN | 0.455332 | 1.261999 | 1.322562 | 0.001750 | 0.001686 | 0.001710 |
| toy_spirit2.test | RUN | 0.474464 | 1.315273 | 1.388092 | 0.001735 | 0.001580 | 0.001648 |
| make.test | RUN | 0.379295 | 1.250522 | 1.006462 | 0.001902 | 0.001912 | 0.001774 |
| mem_ptr.test | RUN | 0.504866 | 2.038204 | 1.486466 | 0.001932 | 0.001874 | 0.001899 |
| mpl.test | RUN | 0.427071 | 1.027782 | 1.100253 | 0.001671 | 0.001584 | 0.001700 |
| noinvoke.test | RUN | 0.364244 | 0.851776 | 0.917633 | 0.001624 | 0.001586 | 0.001646 |
| pack_expansion.test | RUN | 0.447387 | 1.278738 | 1.227035 | 0.001734 | 0.001752 | 0.001704 |
| protect.test | RUN | 0.361168 | 0.957088 | 0.928308 | 0.001826 | 0.001636 | 0.001652 |
| bug2407.test | COMPILE | 0.336195 | 0.695581 | 0.808701 | — | — | — |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.991× | 0.990×, 0.991× | 0.997× |
| clang | 0.965× | 0.969×, 0.960× | 1.004× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1364 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/43947487361).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| calculator.test | 10 | 0.001529s | 0.001511s | 0.001468s | byte equality observed |
| constrained_ops.test | 10 | 0.001513s | 0.001503s | 0.001483s | byte equality observed |
| cpp-next_bug.test | 9 | 0.001524s | 0.001500s | 0.001461s | byte equality observed |
| deduce_domain.test | 10 | 0.001525s | 0.001498s | 0.001479s | byte equality observed |
| deep_copy.test | 10 | 0.001530s | 0.001494s | 0.001472s | byte equality observed |
| display_expr.test | 10 | 0.001523s | 0.001513s | 0.001448s | byte equality observed |
| env_var.test | 10 | 0.001669s | 0.001665s | 0.001613s | byte equality observed |
| examples.test | 10 | 0.001531s | 0.001513s | 0.001485s | byte equality observed |
| external_transforms.test | 10 | 0.001556s | 0.001509s | 0.001498s | byte equality observed |
| flatten.test | 10 | 0.001562s | 0.001547s | 0.001517s | byte equality observed |
| lambda.test | 10 | 0.001518s | 0.001500s | 0.001471s | byte equality observed |
| make.test | 10 | 0.001615s | 0.001567s | 0.001558s | byte equality observed |
| make_expr.test | 10 | 0.001714s | 0.001676s | 0.001659s | byte equality observed |
| matches.test | 10 | 0.001514s | 0.001503s | 0.001463s | byte equality observed |
| mem_ptr.test | 10 | 0.001670s | 0.001650s | 0.001618s | byte equality observed |
| mpl.test | 10 | 0.001494s | 0.001514s | 0.001477s | byte equality observed |
| noinvoke.test | 10 | 0.001497s | 0.001499s | 0.001471s | byte equality observed |
| pack_expansion.test | 10 | 0.001543s | 0.001530s | 0.001472s | byte equality observed |
| protect.test | 10 | 0.001522s | 0.001501s | 0.001494s | byte equality observed |
| switch.test | 10 | 0.001509s | 0.001490s | 0.001481s | byte equality observed |
| toy_spirit.test | 10 | 0.001510s | 0.001510s | 0.001474s | byte equality observed |
| toy_spirit2.test | 10 | 0.001509s | 0.001499s | 0.001481s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/43947487361).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
