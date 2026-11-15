# libs/proto/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| calculator.test | RUN | 0.422149 | 1.005696 | 1.177266 | 0.002575 | 0.002830 | 0.002790 |
| constrained_ops.test | RUN | 0.477267 | 1.088471 | 1.308467 | 0.002347 | 0.002615 | 0.002745 |
| cpp-next_bug.test | RUN | 0.474332 | 1.160217 | 1.428283 | 0.002552 | 0.002547 | 0.002672 |
| deep_copy.test | RUN | 0.401230 | 1.078808 | 1.173170 | 0.002250 | 0.002606 | 0.002528 |
| display_expr.test | RUN | 0.476395 | 1.267909 | 1.424463 | 0.002990 | 0.002710 | 0.002649 |
| deduce_domain.test | RUN | 0.386388 | 0.890934 | 1.060513 | 0.002701 | 0.002447 | 0.002562 |
| env_var.test | RUN | 0.514679 | 2.209311 | 1.709270 | 0.003012 | 0.003132 | 0.003217 |
| examples.test | RUN | 0.500373 | 1.416443 | 1.626365 | 0.002538 | 0.002614 | 0.002676 |
| external_transforms.test | RUN | 0.488517 | 1.253014 | 1.433321 | 0.002564 | 0.002685 | 0.002729 |
| lambda.test | RUN | 0.482351 | 1.213519 | 1.430613 | 0.002604 | 0.002693 | 0.002556 |
| make_expr.test | RUN | 0.483909 | 1.963729 | 1.571368 | 0.003367 | 0.003577 | 0.003577 |
| matches.test | RUN | 0.432697 | 0.986725 | 1.264895 | 0.002647 | 0.002553 | 0.002862 |
| flatten.test | RUN | 0.833738 | 2.911920 | 3.161947 | 0.002923 | 0.002879 | 0.002694 |
| switch.test | RUN | 0.436242 | 1.006666 | 1.204576 | 0.002702 | 0.002812 | 0.002772 |
| toy_spirit.test | RUN | 0.478158 | 1.273453 | 1.533494 | 0.002761 | 0.002734 | 0.002788 |
| toy_spirit2.test | RUN | 0.517822 | 1.363003 | 1.655178 | 0.002743 | 0.002571 | 0.002603 |
| make.test | RUN | 0.409048 | 1.255273 | 1.200222 | 0.003036 | 0.003012 | 0.003096 |
| mem_ptr.test | RUN | 0.525234 | 2.111683 | 1.740737 | 0.003118 | 0.003244 | 0.003311 |
| mpl.test | RUN | 0.460469 | 1.052973 | 1.281872 | 0.002436 | 0.002693 | 0.002399 |
| noinvoke.test | RUN | 0.406924 | 0.895920 | 1.078339 | 0.002692 | 0.002641 | 0.002808 |
| pack_expansion.test | RUN | 0.483667 | 1.320716 | 1.370475 | 0.002115 | 0.002898 | 0.002268 |
| protect.test | RUN | 0.307166 | 0.923821 | 0.930201 | 0.002091 | 0.001972 | 0.002197 |
| bug2407.test | COMPILE | 0.354240 | 0.598641 | 0.725022 | — | — | — |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.987× | 0.987×, 0.987× | 1.015× |
| clang | 0.937×† | 0.968×, 0.906× | 0.984× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1363 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43658654032).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| calculator.test | 10 | 0.001565s | 0.001492s | 0.001481s | byte equality observed |
| constrained_ops.test | 10 | 0.001543s | 0.001469s | 0.001463s | byte equality observed |
| cpp-next_bug.test | 10 | 0.001517s | 0.001485s | 0.001468s | byte equality observed |
| deduce_domain.test | 10 | 0.001508s | 0.001466s | 0.001453s | byte equality observed |
| deep_copy.test | 10 | 0.001513s | 0.001473s | 0.001457s | byte equality observed |
| display_expr.test | 10 | 0.001514s | 0.001471s | 0.001443s | byte equality observed |
| env_var.test | 10 | 0.001768s | 0.001699s | 0.001704s | byte equality observed |
| examples.test | 10 | 0.001535s | 0.001495s | 0.001460s | byte equality observed |
| external_transforms.test | 10 | 0.001536s | 0.001509s | 0.001442s | byte equality observed |
| flatten.test | 10 | 0.001564s | 0.001531s | 0.001461s | byte equality observed |
| lambda.test | 10 | 0.001510s | 0.001464s | 0.001427s | byte equality observed |
| make.test | 10 | 0.001656s | 0.001641s | 0.001613s | byte equality observed |
| make_expr.test | 10 | 0.001835s | 0.001802s | 0.001755s | byte equality observed |
| matches.test | 10 | 0.001504s | 0.001468s | 0.001457s | byte equality observed |
| mem_ptr.test | 10 | 0.001760s | 0.001732s | 0.001673s | byte equality observed |
| mpl.test | 10 | 0.001509s | 0.001453s | 0.001412s | byte equality observed |
| noinvoke.test | 10 | 0.001482s | 0.001485s | 0.001442s | byte equality observed |
| pack_expansion.test | 10 | 0.001547s | 0.001524s | 0.001500s | byte equality observed |
| protect.test | 10 | 0.001556s | 0.001536s | 0.001467s | byte equality observed |
| switch.test | 10 | 0.001502s | 0.001515s | 0.001467s | byte equality observed |
| toy_spirit.test | 10 | 0.001490s | 0.001457s | 0.001456s | byte equality observed |
| toy_spirit2.test | 10 | 0.001508s | 0.001499s | 0.001463s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43658654032).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
