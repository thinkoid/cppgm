# libs/proto/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| calculator.test | RUN | 0.381917 | 0.961212 | 0.969704 | 0.001752 | 0.001771 | 0.001580 |
| constrained_ops.test | RUN | 0.432448 | 1.021468 | 1.140393 | 0.001818 | 0.001555 | 0.001574 |
| cpp-next_bug.test | RUN | 0.449756 | 1.110991 | 1.236654 | 0.001860 | 0.001593 | 0.001812 |
| deep_copy.test | RUN | 0.381813 | 1.026310 | 1.062423 | 0.001719 | 0.001586 | 0.001594 |
| display_expr.test | RUN | 0.467856 | 1.215409 | 1.248082 | 0.001630 | 0.001582 | 0.001718 |
| deduce_domain.test | RUN | 0.368419 | 0.862674 | 0.919205 | 0.001687 | 0.001662 | 0.001614 |
| env_var.test | RUN | 0.485225 | 2.096968 | 1.499613 | 0.001964 | 0.002008 | 0.001906 |
| examples.test | RUN | 0.467021 | 1.332709 | 1.385817 | 0.001680 | 0.001651 | 0.001600 |
| external_transforms.test | RUN | 0.454801 | 1.150677 | 1.268647 | 0.001822 | 0.001507 | 0.001557 |
| lambda.test | RUN | 0.441499 | 1.186081 | 1.265562 | 0.001694 | 0.001585 | 0.001535 |
| make_expr.test | RUN | 0.459691 | 1.933140 | 1.354195 | 0.001964 | 0.002134 | 0.001850 |
| matches.test | RUN | 0.406461 | 0.973353 | 1.095017 | 0.001707 | 0.001627 | 0.001479 |
| flatten.test | RUN | 0.754541 | 2.703852 | 2.641138 | 0.001703 | 0.001649 | 0.001691 |
| switch.test | RUN | 0.394278 | 0.962285 | 1.029346 | 0.001695 | 0.001581 | 0.001538 |
| toy_spirit.test | RUN | 0.439175 | 1.216962 | 1.320612 | 0.001702 | 0.001603 | 0.001570 |
| toy_spirit2.test | RUN | 0.476578 | 1.303550 | 1.397701 | 0.001624 | 0.001623 | 0.001467 |
| make.test | RUN | 0.390772 | 1.244149 | 1.011705 | 0.001694 | 0.001864 | 0.001718 |
| mem_ptr.test | RUN | 0.495555 | 1.995529 | 1.475979 | 0.001800 | 0.001747 | 0.001719 |
| mpl.test | RUN | 0.433158 | 1.019399 | 1.095732 | 0.001640 | 0.001557 | 0.001471 |
| noinvoke.test | RUN | 0.376089 | 0.847029 | 0.918686 | 0.001501 | 0.001579 | 0.001527 |
| pack_expansion.test | RUN | 0.462662 | 1.261256 | 1.203396 | 0.001650 | 0.001561 | 0.001466 |
| protect.test | RUN | 0.373213 | 0.959135 | 0.926732 | 0.001617 | 0.001588 | 0.001441 |
| bug2407.test | COMPILE | 0.339579 | 0.688286 | 0.810384 | — | — | — |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.989× | 0.988×, 0.989× | 0.999× |
| clang | 0.973× | 0.972×, 0.974× | 0.998× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1365 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/43796354412).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| calculator.test | 10 | 0.001479s | 0.001474s | 0.001435s | byte equality observed |
| constrained_ops.test | 10 | 0.001474s | 0.001453s | 0.001451s | byte equality observed |
| cpp-next_bug.test | 10 | 0.001480s | 0.001462s | 0.001441s | byte equality observed |
| deduce_domain.test | 10 | 0.001471s | 0.001463s | 0.001431s | byte equality observed |
| deep_copy.test | 10 | 0.001481s | 0.001468s | 0.001425s | byte equality observed |
| display_expr.test | 10 | 0.001482s | 0.001470s | 0.001457s | byte equality observed |
| env_var.test | 10 | 0.001626s | 0.001613s | 0.001574s | byte equality observed |
| examples.test | 10 | 0.001499s | 0.001492s | 0.001449s | byte equality observed |
| external_transforms.test | 10 | 0.001504s | 0.001482s | 0.001456s | byte equality observed |
| flatten.test | 10 | 0.001520s | 0.001518s | 0.001493s | byte equality observed |
| lambda.test | 10 | 0.001481s | 0.001451s | 0.001429s | byte equality observed |
| make.test | 10 | 0.001566s | 0.001547s | 0.001524s | byte equality observed |
| make_expr.test | 10 | 0.001682s | 0.001667s | 0.001644s | byte equality observed |
| matches.test | 10 | 0.001474s | 0.001451s | 0.001429s | byte equality observed |
| mem_ptr.test | 10 | 0.001619s | 0.001592s | 0.001585s | byte equality observed |
| mpl.test | 10 | 0.001469s | 0.001462s | 0.001417s | byte equality observed |
| noinvoke.test | 10 | 0.001471s | 0.001445s | 0.001437s | byte equality observed |
| pack_expansion.test | 10 | 0.001507s | 0.001480s | 0.001464s | byte equality observed |
| protect.test | 10 | 0.001502s | 0.001477s | 0.001464s | byte equality observed |
| switch.test | 10 | 0.001477s | 0.001459s | 0.001445s | byte equality observed |
| toy_spirit.test | 10 | 0.001471s | 0.001459s | 0.001432s | byte equality observed |
| toy_spirit2.test | 10 | 0.001473s | 0.001463s | 0.001436s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/43796354412).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
