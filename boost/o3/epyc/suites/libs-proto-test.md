# libs/proto/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| calculator.test | RUN | 0.425053 | 1.077272 | 1.181889 | 0.002554 | 0.002919 | 0.002926 |
| constrained_ops.test | RUN | 0.494438 | 1.095233 | 1.292288 | 0.002604 | 0.002727 | 0.002919 |
| cpp-next_bug.test | RUN | 0.498747 | 1.253163 | 1.335312 | 0.002430 | 0.002622 | 0.002640 |
| deep_copy.test | RUN | 0.423511 | 1.049999 | 1.203143 | 0.002596 | 0.002768 | 0.002765 |
| display_expr.test | RUN | 0.502719 | 1.353372 | 1.418500 | 0.002631 | 0.002540 | 0.002272 |
| deduce_domain.test | RUN | 0.399331 | 0.907859 | 1.090524 | 0.002447 | 0.002476 | 0.002857 |
| env_var.test | RUN | 0.539178 | 2.266715 | 1.693625 | 0.002812 | 0.003175 | 0.003302 |
| examples.test | RUN | 0.518914 | 1.462818 | 1.621175 | 0.002704 | 0.002610 | 0.002422 |
| external_transforms.test | RUN | 0.509118 | 1.269292 | 1.408557 | 0.002667 | 0.002505 | 0.002843 |
| lambda.test | RUN | 0.490571 | 1.297674 | 1.456714 | 0.002708 | 0.002826 | 0.002263 |
| make_expr.test | RUN | 0.497964 | 2.071871 | 1.541019 | 0.003416 | 0.003625 | 0.003630 |
| matches.test | RUN | 0.450172 | 1.048497 | 1.252149 | 0.002798 | 0.002673 | 0.002734 |
| flatten.test | RUN | 0.839661 | 3.024627 | 3.108558 | 0.002846 | 0.003010 | 0.002989 |
| switch.test | RUN | 0.431042 | 1.078313 | 1.147366 | 0.002788 | 0.002738 | 0.002963 |
| toy_spirit.test | RUN | 0.494981 | 1.327236 | 1.500514 | 0.002829 | 0.002918 | 0.002717 |
| toy_spirit2.test | RUN | 0.530565 | 1.400858 | 1.711706 | 0.002657 | 0.002926 | 0.002656 |
| make.test | RUN | 0.441702 | 1.315469 | 1.219609 | 0.003253 | 0.003226 | 0.003292 |
| mem_ptr.test | RUN | 0.560021 | 2.245671 | 1.796842 | 0.003408 | 0.003292 | 0.003279 |
| mpl.test | RUN | 0.496275 | 1.123087 | 1.300476 | 0.002515 | 0.002857 | 0.002866 |
| noinvoke.test | RUN | 0.431775 | 0.992575 | 1.106687 | 0.002351 | 0.002828 | 0.002880 |
| pack_expansion.test | RUN | 0.509604 | 1.416669 | 1.338004 | 0.002266 | 0.002535 | 0.002330 |
| protect.test | RUN | 0.312452 | 1.035753 | 0.943863 | 0.002090 | 0.002110 | 0.002192 |
| bug2407.test | COMPILE | 0.386475 | 0.596113 | 0.757535 | — | — | — |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.977× | 0.993×, 0.961× | 0.996× |
| clang | 0.934×† | 0.877×, 0.990× | 0.977× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1364 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43639138948).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| calculator.test | 10 | 0.001524s | 0.001482s | 0.001495s | byte equality observed |
| constrained_ops.test | 10 | 0.001515s | 0.001469s | 0.001546s | byte equality observed |
| cpp-next_bug.test | 10 | 0.001519s | 0.001469s | 0.001490s | byte equality observed |
| deduce_domain.test | 10 | 0.001527s | 0.001475s | 0.001487s | byte equality observed |
| deep_copy.test | 10 | 0.001515s | 0.001478s | 0.001496s | byte equality observed |
| display_expr.test | 10 | 0.001525s | 0.001488s | 0.001482s | byte equality observed |
| env_var.test | 10 | 0.001754s | 0.001714s | 0.001737s | byte equality observed |
| examples.test | 10 | 0.001545s | 0.001544s | 0.001472s | byte equality observed |
| external_transforms.test | 10 | 0.001525s | 0.001501s | 0.001480s | byte equality observed |
| flatten.test | 10 | 0.001548s | 0.001542s | 0.001503s | byte equality observed |
| lambda.test | 10 | 0.001501s | 0.001475s | 0.001455s | byte equality observed |
| make.test | 10 | 0.001664s | 0.001668s | 0.001624s | byte equality observed |
| make_expr.test | 10 | 0.001843s | 0.001811s | 0.001780s | byte equality observed |
| matches.test | 10 | 0.001532s | 0.001458s | 0.001468s | byte equality observed |
| mem_ptr.test | 10 | 0.001736s | 0.001692s | 0.001690s | byte equality observed |
| mpl.test | 10 | 0.001520s | 0.001463s | 0.001469s | byte equality observed |
| noinvoke.test | 10 | 0.001503s | 0.001484s | 0.001457s | byte equality observed |
| pack_expansion.test | 10 | 0.001575s | 0.001504s | 0.001455s | byte equality observed |
| protect.test | 10 | 0.001570s | 0.001514s | 0.001477s | byte equality observed |
| switch.test | 10 | 0.001529s | 0.001472s | 0.001456s | byte equality observed |
| toy_spirit.test | 10 | 0.001533s | 0.001463s | 0.001432s | byte equality observed |
| toy_spirit2.test | 8 | 0.001525s | 0.001445s | 0.001467s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43639138948).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
