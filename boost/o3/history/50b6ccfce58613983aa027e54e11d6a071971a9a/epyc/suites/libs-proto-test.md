# libs/proto/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| calculator.test | RUN | 0.544580 | 1.391593 | 1.704570 | 0.002938 | 0.003100 | 0.002924 |
| constrained_ops.test | RUN | 0.611730 | 1.539585 | 1.887747 | 0.002962 | 0.003226 | 0.003105 |
| cpp-next_bug.test | RUN | 0.624562 | 1.586982 | 1.946344 | 0.002795 | 0.002910 | 0.003081 |
| deep_copy.test | RUN | 0.557783 | 1.409327 | 1.684400 | 0.002671 | 0.003048 | 0.002939 |
| display_expr.test | RUN | 0.640791 | 1.755305 | 1.919066 | 0.003055 | 0.002747 | 0.002972 |
| deduce_domain.test | RUN | 0.521960 | 1.215681 | 1.528724 | 0.002475 | 0.002874 | 0.002804 |
| env_var.test | RUN | 0.703487 | 2.951622 | 2.444394 | 0.003509 | 0.003315 | 0.003822 |
| examples.test | RUN | 0.666674 | 1.934972 | 2.267639 | 0.002746 | 0.003011 | 0.002866 |
| external_transforms.test | RUN | 0.646497 | 1.619218 | 2.087109 | 0.002759 | 0.002683 | 0.002860 |
| lambda.test | RUN | 0.638724 | 1.681864 | 2.044441 | 0.002941 | 0.003131 | 0.002862 |
| make_expr.test | RUN | 0.645320 | 2.707089 | 2.188629 | 0.003707 | 0.004131 | 0.004037 |
| matches.test | RUN | 0.567831 | 1.378863 | 1.828664 | 0.002972 | 0.002683 | 0.003234 |
| flatten.test | RUN | 1.074069 | 3.908904 | 4.385611 | 0.003259 | 0.003367 | 0.003145 |
| switch.test | RUN | 0.550712 | 1.405715 | 1.720147 | 0.003189 | 0.003084 | 0.003015 |
| toy_spirit.test | RUN | 0.635798 | 1.714199 | 2.124124 | 0.003042 | 0.003237 | 0.002656 |
| toy_spirit2.test | RUN | 0.701532 | 1.830569 | 2.259346 | 0.003032 | 0.002850 | 0.003250 |
| make.test | RUN | 0.544484 | 1.695380 | 1.701342 | 0.003425 | 0.003456 | 0.003539 |
| mem_ptr.test | RUN | 0.691902 | 2.875234 | 2.491145 | 0.003654 | 0.003831 | 0.003973 |
| mpl.test | RUN | 0.624900 | 1.495302 | 1.851524 | 0.002753 | 0.003098 | 0.003020 |
| noinvoke.test | RUN | 0.537665 | 1.225078 | 1.554458 | 0.002754 | 0.003226 | 0.003318 |
| pack_expansion.test | RUN | 0.656282 | 1.822852 | 2.056769 | 0.002540 | 0.002969 | 0.003334 |
| protect.test | RUN | 0.483626 | 1.269820 | 1.093460 | 0.002397 | 0.002269 | 0.002394 |
| bug2407.test | COMPILE | 0.361596 | 0.847589 | 1.075177 | — | — | — |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.994× | 0.992×, 0.996× | 1.001× |
| clang | 0.908×† | 0.934×, 0.882× | 1.027× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1363 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/43916760662).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| calculator.test | 10 | 0.001736s | 0.001735s | 0.001702s | byte equality observed |
| constrained_ops.test | 10 | 0.001692s | 0.001684s | 0.001659s | byte equality observed |
| cpp-next_bug.test | 8 | 0.001689s | 0.001729s | 0.001707s | byte equality observed |
| deduce_domain.test | 10 | 0.001707s | 0.001656s | 0.001667s | byte equality observed |
| deep_copy.test | 10 | 0.001683s | 0.001677s | 0.001690s | byte equality observed |
| display_expr.test | 10 | 0.001674s | 0.001692s | 0.001650s | byte equality observed |
| env_var.test | 10 | 0.001989s | 0.002004s | 0.001946s | byte equality observed |
| examples.test | 10 | 0.001694s | 0.001736s | 0.001671s | byte equality observed |
| external_transforms.test | 10 | 0.001714s | 0.001702s | 0.001694s | byte equality observed |
| flatten.test | 10 | 0.001753s | 0.001743s | 0.001766s | byte equality observed |
| lambda.test | 10 | 0.001781s | 0.001699s | 0.001643s | byte equality observed |
| make.test | 10 | 0.001917s | 0.001877s | 0.001863s | byte equality observed |
| make_expr.test | 9 | 0.002192s | 0.002098s | 0.002041s | byte equality observed |
| matches.test | 10 | 0.001692s | 0.001673s | 0.001673s | byte equality observed |
| mem_ptr.test | 9 | 0.002007s | 0.001958s | 0.001956s | byte equality observed |
| mpl.test | 10 | 0.001728s | 0.001613s | 0.001629s | byte equality observed |
| noinvoke.test | 10 | 0.001728s | 0.001686s | 0.001687s | byte equality observed |
| pack_expansion.test | 10 | 0.001750s | 0.001683s | 0.001754s | byte equality observed |
| protect.test | 10 | 0.001734s | 0.001755s | 0.001696s | byte equality observed |
| switch.test | 10 | 0.001710s | 0.001664s | 0.001719s | byte equality observed |
| toy_spirit.test | 10 | 0.001852s | 0.001751s | 0.001678s | byte equality observed |
| toy_spirit2.test | 10 | 0.001856s | 0.001743s | 0.001735s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/43916760662).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
