# libs/proto/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| calculator.test | RUN | 0.432866 | 1.099687 | 1.092179 | 0.002878 | 0.002803 | 0.002746 |
| constrained_ops.test | RUN | 0.523591 | 1.137518 | 1.240478 | 0.002761 | 0.002991 | 0.002581 |
| cpp-next_bug.test | RUN | 0.556452 | 1.188513 | 1.268450 | 0.002784 | 0.002701 | 0.002600 |
| deep_copy.test | RUN | 0.465539 | 1.053957 | 1.138381 | 0.002688 | 0.002592 | 0.002433 |
| display_expr.test | RUN | 0.555466 | 1.354353 | 1.360554 | 0.002870 | 0.002498 | 0.002258 |
| deduce_domain.test | RUN | 0.446194 | 0.902074 | 1.023893 | 0.002604 | 0.002420 | 0.002353 |
| env_var.test | RUN | 0.602514 | 2.238627 | 1.607554 | 0.003181 | 0.002836 | 0.003172 |
| examples.test | RUN | 0.579765 | 1.474742 | 1.531246 | 0.002745 | 0.002710 | 0.002468 |
| external_transforms.test | RUN | 0.532408 | 1.226272 | 1.374847 | 0.002765 | 0.002309 | 0.002731 |
| lambda.test | RUN | 0.532986 | 1.288166 | 1.403494 | 0.002610 | 0.002837 | 0.002282 |
| make_expr.test | RUN | 0.549245 | 2.048524 | 1.509657 | 0.003444 | 0.003601 | 0.003772 |
| matches.test | RUN | 0.482947 | 1.069073 | 1.231232 | 0.002910 | 0.003051 | 0.002404 |
| flatten.test | RUN | 0.900438 | 3.111755 | 3.003067 | 0.003014 | 0.003017 | 0.002373 |
| switch.test | RUN | 0.484606 | 1.070485 | 1.132580 | 0.003132 | 0.002862 | 0.002582 |
| toy_spirit.test | RUN | 0.532744 | 1.327605 | 1.514425 | 0.002914 | 0.002872 | 0.002497 |
| toy_spirit2.test | RUN | 0.588008 | 1.412054 | 1.564547 | 0.003054 | 0.003012 | 0.002378 |
| make.test | RUN | 0.452958 | 1.339231 | 1.140734 | 0.003427 | 0.003175 | 0.002905 |
| mem_ptr.test | RUN | 0.589198 | 2.204140 | 1.654703 | 0.003295 | 0.003504 | 0.002980 |
| mpl.test | RUN | 0.535226 | 1.093738 | 1.200095 | 0.002624 | 0.002967 | 0.002359 |
| noinvoke.test | RUN | 0.457929 | 0.919500 | 0.988905 | 0.002541 | 0.002709 | 0.002496 |
| pack_expansion.test | RUN | 0.537541 | 1.395918 | 1.309002 | 0.002299 | 0.002104 | 0.002574 |
| protect.test | RUN | 0.333992 | 0.938310 | 0.750483 | 0.002389 | 0.001985 | 0.002015 |
| bug2407.test | COMPILE | 0.362240 | 0.720793 | 0.667452 | — | — | — |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.984×† | 0.957×, 1.011× | 0.984× |
| clang | 0.963× | 0.970×, 0.956× | 0.977× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1364 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43666517673).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| calculator.test | 10 | 0.001453s | 0.001436s | 0.001394s | byte equality observed |
| constrained_ops.test | 10 | 0.001466s | 0.001412s | 0.001409s | byte equality observed |
| cpp-next_bug.test | 10 | 0.001464s | 0.001438s | 0.001381s | byte equality observed |
| deduce_domain.test | 10 | 0.001452s | 0.001436s | 0.001379s | byte equality observed |
| deep_copy.test | 10 | 0.001439s | 0.001424s | 0.001390s | byte equality observed |
| display_expr.test | 10 | 0.001446s | 0.001456s | 0.001388s | byte equality observed |
| env_var.test | 10 | 0.001700s | 0.001672s | 0.001626s | byte equality observed |
| examples.test | 10 | 0.001460s | 0.001446s | 0.001411s | byte equality observed |
| external_transforms.test | 10 | 0.001464s | 0.001429s | 0.001412s | byte equality observed |
| flatten.test | 10 | 0.001497s | 0.001498s | 0.001429s | byte equality observed |
| lambda.test | 10 | 0.001444s | 0.001411s | 0.001419s | byte equality observed |
| make.test | 10 | 0.001574s | 0.001577s | 0.001545s | byte equality observed |
| make_expr.test | 10 | 0.001790s | 0.001727s | 0.001719s | byte equality observed |
| matches.test | 10 | 0.001450s | 0.001417s | 0.001382s | byte equality observed |
| mem_ptr.test | 10 | 0.001675s | 0.001686s | 0.001604s | byte equality observed |
| mpl.test | 10 | 0.001460s | 0.001426s | 0.001422s | byte equality observed |
| noinvoke.test | 10 | 0.001443s | 0.001427s | 0.001408s | byte equality observed |
| pack_expansion.test | 10 | 0.001507s | 0.001454s | 0.001445s | byte equality observed |
| protect.test | 10 | 0.001487s | 0.001490s | 0.001465s | byte equality observed |
| switch.test | 10 | 0.001445s | 0.001430s | 0.001409s | byte equality observed |
| toy_spirit.test | 10 | 0.001432s | 0.001443s | 0.001404s | byte equality observed |
| toy_spirit2.test | 10 | 0.001448s | 0.001465s | 0.001410s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43666517673).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
