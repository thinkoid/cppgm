# libs/variant2/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| quick.test | RUN | 0.094838 | 0.187966 | 0.255777 | 0.001680 | 0.000706 | 0.001481 |
| variant_size.test | RUN | 0.173201 | 0.461288 | 0.486868 | 0.001829 | 0.001748 | 0.001662 |
| variant_alternative.test | RUN | 0.217132 | 1.503705 | 0.860271 | 0.001784 | 0.001644 | 0.001498 |
| variant_holds_alternative.test | RUN | 0.161814 | 0.352672 | 0.493915 | 0.001614 | 0.001633 | 0.001685 |
| variant_holds_alternative_cx.test | COMPILE | 0.104202 | 0.201198 | 0.279855 | — | — | — |
| variant_get_by_index.test | RUN | 0.246145 | 1.622468 | 1.060967 | 0.001776 | 0.001708 | 0.001721 |
| variant_get_by_index_cx.test | COMPILE | 0.105649 | 0.202845 | 0.286473 | — | — | — |
| variant_get_by_type.test | RUN | 0.251805 | 1.756885 | 1.135853 | 0.001593 | 0.001503 | 0.001466 |
| variant_get_by_type_cx.test | COMPILE | 0.093408 | 0.189614 | 0.235931 | — | — | — |
| variant_default_construct.test | RUN | 0.245423 | 1.269014 | 0.929615 | 0.001845 | 0.001628 | 0.001648 |
| variant_default_construct_cx.test | COMPILE | 0.099160 | 0.204535 | 0.291637 | — | — | — |
| variant_copy_construct.test | RUN | 0.359488 | 2.125339 | 1.739328 | 0.001385 | 0.001517 | 0.001670 |
| variant_copy_construct_cx.test | COMPILE | 0.115409 | 0.232762 | 0.353291 | — | — | — |
| variant_move_construct.test | RUN | 0.341507 | 1.891921 | 1.549839 | 0.001503 | 0.001713 | 0.001714 |
| variant_move_construct_cx.test | COMPILE | 0.093132 | 0.188951 | 0.239047 | — | — | — |
| variant_value_construct.test | RUN | 0.183540 | 0.474192 | 0.644826 | 0.001494 | 0.001660 | 0.001646 |
| variant_value_construct_cx.test | COMPILE | 0.107257 | 0.217128 | 0.314757 | — | — | — |
| variant_in_place_index_construct.test | RUN | 0.183811 | 0.458064 | 0.627557 | 0.001736 | 0.001433 | 0.001282 |
| variant_in_place_index_construct_cx.test | COMPILE | 0.098060 | 0.205654 | 0.286820 | — | — | — |
| variant_in_place_type_construct.test | RUN | 0.183797 | 0.465206 | 0.626397 | 0.001528 | 0.001691 | 0.001657 |
| variant_in_place_type_construct_cx.test | COMPILE | 0.097259 | 0.220831 | 0.296910 | — | — | — |
| variant_copy_assign.test | RUN | 0.253909 | 1.490956 | 1.018085 | 0.001750 | 0.001448 | 0.001635 |
| variant_copy_assign_cx.test | COMPILE | 0.094964 | 0.183334 | 0.235712 | — | — | — |
| variant_move_assign.test | RUN | 0.253505 | 1.542075 | 0.979690 | 0.001560 | 0.001662 | 0.001314 |
| variant_move_assign_cx.test | COMPILE | 0.089327 | 0.189999 | 0.242720 | — | — | — |
| variant_value_assign.test | RUN | 0.196826 | 0.541488 | 0.696806 | 0.001626 | 0.001704 | 0.001481 |
| variant_value_assign_cx.test | COMPILE | 0.092122 | 0.189911 | 0.257951 | — | — | — |
| variant_emplace_index.test | RUN | 0.221068 | 0.598251 | 0.749807 | 0.001666 | 0.001460 | 0.001680 |
| variant_emplace_index_cx.test | COMPILE | 0.093165 | 0.181186 | 0.245246 | — | — | — |
| variant_emplace_type.test | RUN | 0.197613 | 0.505739 | 0.667981 | 0.001685 | 0.001613 | 0.001496 |
| variant_emplace_type_cx.test | COMPILE | 0.090100 | 0.189421 | 0.236652 | — | — | — |
| variant_swap.test | RUN | 0.204572 | 0.622505 | 0.709391 | 0.001444 | 0.001572 | 0.001702 |
| variant_eq_ne.test | RUN | 0.154925 | 0.374019 | 0.506744 | 0.001681 | 0.001476 | 0.001461 |
| variant_eq_ne_cx.test | COMPILE | 0.083852 | 0.181505 | 0.253560 | — | — | — |
| variant_lt_gt.test | RUN | 0.168265 | 0.441410 | 0.555433 | 0.001690 | 0.001715 | 0.001484 |
| variant_lt_gt_cx.test | COMPILE | 0.088675 | 0.186306 | 0.221101 | — | — | — |
| variant_destroy.test | RUN | 0.169762 | 0.432674 | 0.552213 | 0.001467 | 0.001690 | 0.001650 |
| variant_visit.test | RUN | 0.895781 | 3.343069 | 9.460377 | 0.001512 | 0.001528 | 0.001612 |
| variant_convert_construct.test | RUN | 0.209128 | 0.589484 | 0.787403 | 0.001732 | 0.001662 | 0.001779 |
| variant_subset.test | RUN | 0.205173 | 0.623152 | 0.825584 | 0.001745 | 0.001470 | 0.001875 |
| variant_valueless.test | RUN | 0.149477 | 0.412665 | 0.576202 | 0.001405 | 0.001670 | 0.001586 |
| variant_copy_construct_throw.test | RUN | 0.131498 | 0.290781 | 0.407381 | 0.001824 | 0.001589 | 0.001598 |
| variant_move_construct_throw.test | RUN | 0.128497 | 0.298520 | 0.395886 | 0.001646 | 0.001576 | 0.001547 |
| variant_convert_construct_throw.test | RUN | 0.138268 | 0.323864 | 0.408812 | 0.001475 | 0.001638 | 0.001709 |
| variant_copy_assign_throw.test | RUN | 0.129551 | 0.277465 | 0.388125 | 0.001736 | 0.001707 | 0.001676 |
| variant_move_assign_throw.test | RUN | 0.123537 | 0.290236 | 0.385291 | 0.001689 | 0.001647 | 0.001623 |
| variant_get_by_index_nx.test | RUN | 0.295498 | 1.359567 | 1.013855 | 0.001649 | 0.001469 | 0.001437 |
| variant_get_by_index_cx_nx.test | COMPILE | 0.095236 | 0.217917 | 0.283919 | — | — | — |
| variant_get_by_type_nx.test | RUN | 0.288168 | 1.555430 | 1.093709 | 0.001703 | 0.001747 | 0.001692 |
| variant_get_by_type_cx_nx.test | COMPILE | 0.086288 | 0.179713 | 0.234188 | — | — | — |
| variant_subset_nx.test | RUN | 0.227094 | 0.596303 | 0.847910 | 0.001626 | 0.001576 | 0.001540 |
| variant_hash.test | RUN | 0.220852 | 0.732796 | 0.765952 | 0.001720 | 0.001857 | 0.001691 |
| variant_trivial.test | RUN | 1.202936 | 4.191652 | 5.730207 | 0.001734 | 0.001462 | 0.001652 |
| variant_special.test | RUN | 1.199436 | 4.293750 | 6.156018 | 0.001726 | 0.001830 | 0.001721 |
| variant_visit_derived.test | RUN | 0.156212 | 0.391954 | 0.576043 | 0.001711 | 0.002008 | 0.001721 |
| variant_many_types.test | RUN | 1.187998 | 5.422047 | 8.197818 | 0.001437 | 0.001682 | 0.001791 |
| variant_visit_r.test | RUN | 0.470591 | 1.623472 | 3.188899 | 0.001705 | 0.001644 | 0.001727 |
| variant_derived_construct.test | COMPILE | 0.091666 | 0.186895 | 0.258347 | — | — | — |
| variant_visit_by_index.test | RUN | 0.200031 | 0.521197 | 0.761175 | 0.001515 | 0.001759 | 0.001566 |
| variant_ostream_insert.test | RUN | 0.133922 | 0.398753 | 0.445551 | 0.001644 | 0.001528 | 0.001724 |
| is_output_streamable.test | RUN | 0.174125 | 0.792973 | 0.685369 | 0.001555 | 0.001318 | 0.001741 |
| variant_json_value_from.test | RUN | 0.274071 | 0.628440 | 0.949720 | 0.001492 | 0.001732 | 0.001777 |
| variant_json_value_to.test | RUN | 0.334564 | 0.867307 | 1.193650 | 0.001706 | 0.001436 | 0.001660 |
| variant_uses_double_storage.test | COMPILE | 0.091610 | 0.184279 | 0.273815 | — | — | — |
| variant_derived_construct2.test | RUN | 0.120801 | 0.320550 | 0.424585 | 0.001354 | 0.001602 | 0.001322 |
| variant_visit_cx.test | COMPILE | 0.085128 | 0.177758 | 0.222024 | — | — | — |
| variant_visit_cx_2.test | COMPILE | 0.084619 | 0.185713 | 0.250450 | — | — | — |
| variant_visit_r_cx.test | COMPILE | 0.085826 | 0.176768 | 0.224792 | — | — | — |
| variant_index_type_126.test | RUN | 0.794559 | 1.725960 | 3.493331 | 0.001453 | 0.001718 | 0.001404 |
| variant_index_type_127.test | RUN | 0.797317 | 1.745123 | 3.510006 | 0.001379 | 0.001707 | 0.001674 |
| variant_index_type_128.test | RUN | 0.818768 | 1.787154 | 3.574271 | 0.001353 | 0.001639 | 0.001712 |
| variant_index_type_129.test | RUN | 0.804400 | 1.762959 | 3.545502 | 0.001618 | 0.001609 | 0.001581 |
| variant_index_type_254.test | RUN | 2.921548 | 6.565012 | 11.066616 | 0.001383 | 0.001603 | 0.001546 |
| variant_index_type_255.test | RUN | 2.947516 | 6.652725 | 11.052194 | 0.001508 | 0.001361 | 0.001487 |
| variant_index_type_256.test | RUN | 2.943935 | 6.729558 | 11.220467 | 0.001422 | 0.001530 | 0.001426 |
| variant_index_type_257.test | RUN | 2.974045 | 6.781470 | 11.276080 | 0.001276 | 0.001325 | 0.001543 |
| variant_default_construct_cx_2.test | COMPILE | 0.082800 | 0.172796 | 0.218616 | — | — | — |
| variant_default_construct_cx_3.test | COMPILE | 0.080242 | 0.178758 | 0.211082 | — | — | — |
| variant_default_construct_cx_4.test | COMPILE | 0.082648 | 0.171629 | 0.220179 | — | — | — |
| variant_default_construct_cx_5.test | COMPILE | 0.083139 | 0.176886 | 0.221985 | — | — | — |
| variant_value_construct_cx_2.test | COMPILE | 0.083730 | 0.173940 | 0.222510 | — | — | — |
| variant_value_construct_cx_3.test | COMPILE | 0.080146 | 0.172030 | 0.218123 | — | — | — |
| variant_value_construct_cx_4.test | COMPILE | 0.078941 | 0.165703 | 0.144386 | — | — | — |
| variant_issue_55.test | RUN | 0.127821 | 0.298772 | 0.347052 | 0.001242 | 0.001139 | 0.001059 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.992× | 0.996×, 0.987× | 1.044× |
| clang | 0.939×† | 1.013×, 0.865× | 1.011× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1363 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43658654032).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| is_output_streamable.test | 10 | 0.000913s | 0.000922s | 0.000888s | byte equality observed |
| quick.test | 10 | 0.000919s | 0.000420s | 0.000860s | byte equality observed |
| variant_alternative.test | 10 | 0.000894s | 0.000909s | 0.000858s | byte equality observed |
| variant_convert_construct.test | 10 | 0.000932s | 0.000912s | 0.000899s | byte equality observed |
| variant_convert_construct_throw.test | 10 | 0.000941s | 0.000939s | 0.000926s | byte equality observed |
| variant_copy_assign.test | 10 | 0.000916s | 0.000896s | 0.000884s | byte equality observed |
| variant_copy_assign_throw.test | 10 | 0.000924s | 0.000911s | 0.000961s | byte equality observed |
| variant_copy_construct.test | 10 | 0.000910s | 0.000938s | 0.000914s | byte equality observed |
| variant_copy_construct_throw.test | 10 | 0.000927s | 0.000916s | 0.000941s | byte equality observed |
| variant_default_construct.test | 10 | 0.000909s | 0.000914s | 0.000880s | byte equality observed |
| variant_derived_construct2.test | 10 | 0.000928s | 0.000891s | 0.000896s | byte equality observed |
| variant_destroy.test | 10 | 0.000908s | 0.000899s | 0.000885s | byte equality observed |
| variant_emplace_index.test | 10 | 0.000914s | 0.000891s | 0.000916s | byte equality observed |
| variant_emplace_type.test | 10 | 0.000946s | 0.000910s | 0.000918s | byte equality observed |
| variant_eq_ne.test | 10 | 0.000911s | 0.000904s | 0.000904s | byte equality observed |
| variant_get_by_index.test | 10 | 0.000968s | 0.000969s | 0.000940s | byte equality observed |
| variant_get_by_index_nx.test | 10 | 0.000919s | 0.000908s | 0.000916s | byte equality observed |
| variant_get_by_type.test | 10 | 0.000953s | 0.000965s | 0.000919s | byte equality observed |
| variant_get_by_type_nx.test | 10 | 0.000908s | 0.000925s | 0.000903s | byte equality observed |
| variant_hash.test | 10 | 0.000902s | 0.000933s | 0.000902s | byte equality observed |
| variant_holds_alternative.test | 10 | 0.000903s | 0.000911s | 0.000924s | byte equality observed |
| variant_in_place_index_construct.test | 10 | 0.000899s | 0.000899s | 0.000919s | byte equality observed |
| variant_in_place_type_construct.test | 10 | 0.000911s | 0.000924s | 0.000899s | byte equality observed |
| variant_index_type_126.test | 10 | 0.000887s | 0.000886s | 0.000918s | byte equality observed |
| variant_index_type_127.test | 10 | 0.000890s | 0.000875s | 0.000917s | byte equality observed |
| variant_index_type_128.test | 10 | 0.000900s | 0.000913s | 0.000894s | byte equality observed |
| variant_index_type_129.test | 10 | 0.000922s | 0.000897s | 0.000923s | byte equality observed |
| variant_index_type_254.test | 10 | 0.000917s | 0.000912s | 0.000890s | byte equality observed |
| variant_index_type_255.test | 10 | 0.000924s | 0.000903s | 0.000889s | byte equality observed |
| variant_index_type_256.test | 10 | 0.000910s | 0.000896s | 0.000900s | byte equality observed |
| variant_index_type_257.test | 10 | 0.000916s | 0.000891s | 0.000898s | byte equality observed |
| variant_issue_55.test | 10 | 0.000936s | 0.000911s | 0.000902s | byte equality observed |
| variant_json_value_from.test | 10 | 0.000946s | 0.000955s | 0.000914s | byte equality observed |
| variant_json_value_to.test | 10 | 0.000963s | 0.000922s | 0.000928s | byte equality observed |
| variant_lt_gt.test | 10 | 0.000922s | 0.000888s | 0.000934s | byte equality observed |
| variant_many_types.test | 10 | 0.000943s | 0.000962s | 0.000975s | byte equality observed |
| variant_move_assign.test | 10 | 0.000948s | 0.000905s | 0.000926s | byte equality observed |
| variant_move_assign_throw.test | 10 | 0.000957s | 0.000927s | 0.000960s | byte equality observed |
| variant_move_construct.test | 10 | 0.000922s | 0.000905s | 0.000936s | byte equality observed |
| variant_move_construct_throw.test | 10 | 0.000988s | 0.000924s | 0.000957s | byte equality observed |
| variant_ostream_insert.test | 10 | 0.000949s | 0.000929s | 0.000944s | byte equality observed |
| variant_size.test | 10 | 0.000897s | 0.000890s | 0.000960s | byte equality observed |
| variant_special.test | 10 | 0.001055s | 0.000975s | 0.000996s | byte equality observed |
| variant_subset.test | 10 | 0.001004s | 0.000926s | 0.000968s | byte equality observed |
| variant_subset_nx.test | 10 | 0.000960s | 0.000898s | 0.000943s | byte equality observed |
| variant_swap.test | 10 | 0.000988s | 0.000898s | 0.000942s | byte equality observed |
| variant_trivial.test | 10 | 0.001019s | 0.000969s | 0.000959s | byte equality observed |
| variant_value_assign.test | 10 | 0.001003s | 0.000908s | 0.000945s | byte equality observed |
| variant_value_construct.test | 10 | 0.000987s | 0.000943s | 0.000963s | byte equality observed |
| variant_valueless.test | 10 | 0.001034s | 0.000962s | 0.001000s | byte equality observed |
| variant_visit.test | 10 | 0.001021s | 0.000957s | 0.000939s | byte equality observed |
| variant_visit_by_index.test | 10 | 0.000991s | 0.000954s | 0.000944s | byte equality observed |
| variant_visit_derived.test | 10 | 0.000998s | 0.000956s | 0.000956s | byte equality observed |
| variant_visit_r.test | 10 | 0.001048s | 0.000954s | 0.000968s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43658654032).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
