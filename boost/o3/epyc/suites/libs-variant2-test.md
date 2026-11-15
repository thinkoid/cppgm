# libs/variant2/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| quick.test | RUN | 0.104993 | 0.189359 | 0.253715 | 0.001643 | 0.000742 | 0.001654 |
| variant_size.test | RUN | 0.169257 | 0.467340 | 0.486912 | 0.001793 | 0.002094 | 0.001818 |
| variant_alternative.test | RUN | 0.228688 | 1.576495 | 0.831372 | 0.002033 | 0.001735 | 0.001370 |
| variant_holds_alternative.test | RUN | 0.170215 | 0.361104 | 0.481913 | 0.001834 | 0.001746 | 0.001662 |
| variant_holds_alternative_cx.test | COMPILE | 0.114229 | 0.201068 | 0.273817 | — | — | — |
| variant_get_by_index.test | RUN | 0.261718 | 1.657683 | 0.999590 | 0.001902 | 0.001770 | 0.001538 |
| variant_get_by_index_cx.test | COMPILE | 0.108395 | 0.213128 | 0.278609 | — | — | — |
| variant_get_by_type.test | RUN | 0.275008 | 1.782651 | 1.042229 | 0.001472 | 0.001594 | 0.001319 |
| variant_get_by_type_cx.test | COMPILE | 0.097469 | 0.195303 | 0.227235 | — | — | — |
| variant_default_construct.test | RUN | 0.244191 | 1.278067 | 0.857265 | 0.002084 | 0.001724 | 0.001530 |
| variant_default_construct_cx.test | COMPILE | 0.107574 | 0.201814 | 0.240004 | — | — | — |
| variant_copy_construct.test | RUN | 0.374248 | 2.135538 | 1.535124 | 0.001429 | 0.001590 | 0.001534 |
| variant_copy_construct_cx.test | COMPILE | 0.116274 | 0.228004 | 0.299704 | — | — | — |
| variant_move_construct.test | RUN | 0.354319 | 1.891381 | 1.412520 | 0.001393 | 0.001715 | 0.001642 |
| variant_move_construct_cx.test | COMPILE | 0.088182 | 0.195128 | 0.223833 | — | — | — |
| variant_value_construct.test | RUN | 0.177340 | 0.460989 | 0.598797 | 0.001408 | 0.001674 | 0.001531 |
| variant_value_construct_cx.test | COMPILE | 0.103108 | 0.210702 | 0.261121 | — | — | — |
| variant_in_place_index_construct.test | RUN | 0.186788 | 0.478210 | 0.609189 | 0.001649 | 0.001325 | 0.001274 |
| variant_in_place_index_construct_cx.test | COMPILE | 0.102634 | 0.211813 | 0.292095 | — | — | — |
| variant_in_place_type_construct.test | RUN | 0.188384 | 0.456006 | 0.605803 | 0.001478 | 0.001487 | 0.001346 |
| variant_in_place_type_construct_cx.test | COMPILE | 0.100459 | 0.217002 | 0.292906 | — | — | — |
| variant_copy_assign.test | RUN | 0.252114 | 1.452606 | 0.982974 | 0.001714 | 0.001443 | 0.001475 |
| variant_copy_assign_cx.test | COMPILE | 0.091228 | 0.178650 | 0.220802 | — | — | — |
| variant_move_assign.test | RUN | 0.252036 | 1.416465 | 0.993381 | 0.001426 | 0.001521 | 0.001775 |
| variant_move_assign_cx.test | COMPILE | 0.091389 | 0.182772 | 0.221477 | — | — | — |
| variant_value_assign.test | RUN | 0.185248 | 0.514469 | 0.656955 | 0.001447 | 0.001716 | 0.001508 |
| variant_value_assign_cx.test | COMPILE | 0.091410 | 0.181274 | 0.249946 | — | — | — |
| variant_emplace_index.test | RUN | 0.218252 | 0.584549 | 0.752101 | 0.001781 | 0.001520 | 0.001810 |
| variant_emplace_index_cx.test | COMPILE | 0.092950 | 0.175940 | 0.242819 | — | — | — |
| variant_emplace_type.test | RUN | 0.202705 | 0.500465 | 0.681896 | 0.001658 | 0.001750 | 0.001674 |
| variant_emplace_type_cx.test | COMPILE | 0.097861 | 0.184248 | 0.244038 | — | — | — |
| variant_swap.test | RUN | 0.211262 | 0.644182 | 0.696255 | 0.001621 | 0.001645 | 0.001562 |
| variant_eq_ne.test | RUN | 0.180667 | 0.385950 | 0.493025 | 0.001844 | 0.001629 | 0.001613 |
| variant_eq_ne_cx.test | COMPILE | 0.096792 | 0.186498 | 0.238407 | — | — | — |
| variant_lt_gt.test | RUN | 0.174268 | 0.448329 | 0.509858 | 0.001706 | 0.001634 | 0.001734 |
| variant_lt_gt_cx.test | COMPILE | 0.093842 | 0.181701 | 0.207492 | — | — | — |
| variant_destroy.test | RUN | 0.174116 | 0.446311 | 0.519516 | 0.001725 | 0.001678 | 0.001612 |
| variant_visit.test | RUN | 1.030760 | 3.389850 | 8.927381 | 0.001649 | 0.001473 | 0.001647 |
| variant_convert_construct.test | RUN | 0.218470 | 0.574319 | 0.741274 | 0.001818 | 0.001672 | 0.001668 |
| variant_subset.test | RUN | 0.227531 | 0.619405 | 0.780888 | 0.001791 | 0.001662 | 0.001431 |
| variant_valueless.test | RUN | 0.171356 | 0.390791 | 0.551896 | 0.001592 | 0.001524 | 0.001698 |
| variant_copy_construct_throw.test | RUN | 0.137363 | 0.300078 | 0.372426 | 0.002127 | 0.001760 | 0.001696 |
| variant_move_construct_throw.test | RUN | 0.138169 | 0.285327 | 0.361008 | 0.001900 | 0.001564 | 0.001733 |
| variant_convert_construct_throw.test | RUN | 0.150350 | 0.323083 | 0.402758 | 0.001540 | 0.001744 | 0.001614 |
| variant_copy_assign_throw.test | RUN | 0.136360 | 0.279348 | 0.363145 | 0.001832 | 0.001701 | 0.001774 |
| variant_move_assign_throw.test | RUN | 0.133277 | 0.291990 | 0.384154 | 0.001805 | 0.001664 | 0.001599 |
| variant_get_by_index_nx.test | RUN | 0.296449 | 1.349389 | 0.962596 | 0.001780 | 0.001645 | 0.001600 |
| variant_get_by_index_cx_nx.test | COMPILE | 0.108940 | 0.210624 | 0.268422 | — | — | — |
| variant_get_by_type_nx.test | RUN | 0.314715 | 1.531023 | 0.999715 | 0.001728 | 0.001520 | 0.001511 |
| variant_get_by_type_cx_nx.test | COMPILE | 0.095281 | 0.181733 | 0.223447 | — | — | — |
| variant_subset_nx.test | RUN | 0.249437 | 0.592542 | 0.783412 | 0.001754 | 0.001619 | 0.001610 |
| variant_hash.test | RUN | 0.234965 | 0.689440 | 0.715482 | 0.001932 | 0.001776 | 0.001592 |
| variant_trivial.test | RUN | 1.205825 | 4.096683 | 5.466848 | 0.001574 | 0.001492 | 0.001757 |
| variant_special.test | RUN | 1.231342 | 4.232050 | 5.632126 | 0.001887 | 0.001835 | 0.001886 |
| variant_visit_derived.test | RUN | 0.163439 | 0.361824 | 0.548349 | 0.001776 | 0.001708 | 0.001642 |
| variant_many_types.test | RUN | 1.277826 | 5.488572 | 7.811140 | 0.001756 | 0.001434 | 0.001460 |
| variant_visit_r.test | RUN | 0.545612 | 1.586197 | 2.893010 | 0.001485 | 0.001672 | 0.001652 |
| variant_derived_construct.test | COMPILE | 0.096039 | 0.194720 | 0.233617 | — | — | — |
| variant_visit_by_index.test | RUN | 0.221302 | 0.515022 | 0.698569 | 0.001723 | 0.001740 | 0.001480 |
| variant_ostream_insert.test | RUN | 0.163994 | 0.413026 | 0.476290 | 0.001587 | 0.001415 | 0.001510 |
| is_output_streamable.test | RUN | 0.192652 | 0.803162 | 0.648658 | 0.001745 | 0.001378 | 0.001652 |
| variant_json_value_from.test | RUN | 0.306416 | 0.667303 | 0.800208 | 0.001804 | 0.001744 | 0.001749 |
| variant_json_value_to.test | RUN | 0.369958 | 0.940165 | 1.108100 | 0.001836 | 0.001659 | 0.001668 |
| variant_uses_double_storage.test | COMPILE | 0.105522 | 0.193847 | 0.272230 | — | — | — |
| variant_derived_construct2.test | RUN | 0.139568 | 0.317947 | 0.397400 | 0.001825 | 0.001685 | 0.001568 |
| variant_visit_cx.test | COMPILE | 0.093323 | 0.194966 | 0.231548 | — | — | — |
| variant_visit_cx_2.test | COMPILE | 0.091862 | 0.181101 | 0.236527 | — | — | — |
| variant_visit_r_cx.test | COMPILE | 0.094845 | 0.171459 | 0.223689 | — | — | — |
| variant_index_type_126.test | RUN | 0.869343 | 1.761017 | 3.396332 | 0.001478 | 0.001634 | 0.001360 |
| variant_index_type_127.test | RUN | 0.924421 | 1.771457 | 3.418829 | 0.001528 | 0.001634 | 0.001557 |
| variant_index_type_128.test | RUN | 0.886319 | 1.831079 | 3.467504 | 0.001757 | 0.001632 | 0.001536 |
| variant_index_type_129.test | RUN | 0.905647 | 1.792468 | 3.483721 | 0.001700 | 0.001559 | 0.001743 |
| variant_index_type_254.test | RUN | 3.374440 | 6.678106 | 10.806497 | 0.001529 | 0.001754 | 0.001471 |
| variant_index_type_255.test | RUN | 3.290623 | 6.730444 | 10.852533 | 0.001495 | 0.001762 | 0.001601 |
| variant_index_type_256.test | RUN | 3.375710 | 6.849245 | 10.997912 | 0.001862 | 0.001512 | 0.001276 |
| variant_index_type_257.test | RUN | 3.350536 | 6.975934 | 10.917469 | 0.001940 | 0.001627 | 0.001272 |
| variant_default_construct_cx_2.test | COMPILE | 0.098272 | 0.201762 | 0.204628 | — | — | — |
| variant_default_construct_cx_3.test | COMPILE | 0.103661 | 0.202262 | 0.206202 | — | — | — |
| variant_default_construct_cx_4.test | COMPILE | 0.106248 | 0.188127 | 0.214240 | — | — | — |
| variant_default_construct_cx_5.test | COMPILE | 0.100271 | 0.187332 | 0.214366 | — | — | — |
| variant_value_construct_cx_2.test | COMPILE | 0.099379 | 0.183419 | 0.211030 | — | — | — |
| variant_value_construct_cx_3.test | COMPILE | 0.088341 | 0.179906 | 0.209384 | — | — | — |
| variant_value_construct_cx_4.test | COMPILE | 0.081131 | 0.162081 | 0.154579 | — | — | — |
| variant_issue_55.test | RUN | 0.142733 | 0.314693 | 0.313477 | 0.001410 | 0.001132 | 0.001017 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 1.048×† | 1.021×, 1.075× | 0.914× |
| clang | 0.997×† | 0.981×, 1.014× | 1.124× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1364 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43666517673).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| is_output_streamable.test | 10 | 0.000877s | 0.000964s | 0.000916s | byte equality observed |
| quick.test | 10 | 0.000849s | 0.000426s | 0.000927s | byte equality observed |
| variant_alternative.test | 10 | 0.000862s | 0.000965s | 0.000907s | byte equality observed |
| variant_convert_construct.test | 10 | 0.000884s | 0.000974s | 0.000929s | byte equality observed |
| variant_convert_construct_throw.test | 10 | 0.000892s | 0.000991s | 0.000938s | byte equality observed |
| variant_copy_assign.test | 10 | 0.000868s | 0.000961s | 0.000910s | byte equality observed |
| variant_copy_assign_throw.test | 10 | 0.000879s | 0.000962s | 0.000947s | byte equality observed |
| variant_copy_construct.test | 10 | 0.000880s | 0.000956s | 0.000911s | byte equality observed |
| variant_copy_construct_throw.test | 10 | 0.000890s | 0.000928s | 0.000957s | byte equality observed |
| variant_default_construct.test | 10 | 0.000893s | 0.000947s | 0.000917s | byte equality observed |
| variant_derived_construct2.test | 10 | 0.000871s | 0.000921s | 0.000919s | byte equality observed |
| variant_destroy.test | 10 | 0.000866s | 0.000912s | 0.000932s | byte equality observed |
| variant_emplace_index.test | 10 | 0.000854s | 0.000956s | 0.000942s | byte equality observed |
| variant_emplace_type.test | 10 | 0.000884s | 0.000974s | 0.000918s | byte equality observed |
| variant_eq_ne.test | 10 | 0.000870s | 0.000968s | 0.000919s | byte equality observed |
| variant_get_by_index.test | 10 | 0.000940s | 0.001038s | 0.000949s | byte equality observed |
| variant_get_by_index_nx.test | 10 | 0.000923s | 0.000979s | 0.000918s | byte equality observed |
| variant_get_by_type.test | 10 | 0.000919s | 0.001021s | 0.000947s | byte equality observed |
| variant_get_by_type_nx.test | 10 | 0.000899s | 0.000963s | 0.000934s | byte equality observed |
| variant_hash.test | 10 | 0.000875s | 0.000969s | 0.000913s | byte equality observed |
| variant_holds_alternative.test | 10 | 0.000904s | 0.000988s | 0.000896s | byte equality observed |
| variant_in_place_index_construct.test | 10 | 0.000881s | 0.000977s | 0.000945s | byte equality observed |
| variant_in_place_type_construct.test | 10 | 0.000914s | 0.000969s | 0.000927s | byte equality observed |
| variant_index_type_126.test | 10 | 0.000908s | 0.000960s | 0.000903s | byte equality observed |
| variant_index_type_127.test | 10 | 0.000900s | 0.000969s | 0.000901s | byte equality observed |
| variant_index_type_128.test | 10 | 0.000901s | 0.000974s | 0.000906s | byte equality observed |
| variant_index_type_129.test | 10 | 0.000894s | 0.000947s | 0.000920s | byte equality observed |
| variant_index_type_254.test | 10 | 0.000894s | 0.000959s | 0.000923s | byte equality observed |
| variant_index_type_255.test | 10 | 0.000884s | 0.000966s | 0.000903s | byte equality observed |
| variant_index_type_256.test | 10 | 0.000876s | 0.000949s | 0.000923s | byte equality observed |
| variant_index_type_257.test | 10 | 0.000888s | 0.000957s | 0.000909s | byte equality observed |
| variant_issue_55.test | 10 | 0.000894s | 0.000975s | 0.000932s | byte equality observed |
| variant_json_value_from.test | 10 | 0.000912s | 0.000998s | 0.000928s | byte equality observed |
| variant_json_value_to.test | 10 | 0.000920s | 0.001011s | 0.000944s | byte equality observed |
| variant_lt_gt.test | 10 | 0.000878s | 0.000970s | 0.000896s | byte equality observed |
| variant_many_types.test | 10 | 0.000948s | 0.000993s | 0.000921s | byte equality observed |
| variant_move_assign.test | 10 | 0.000885s | 0.000997s | 0.000902s | byte equality observed |
| variant_move_assign_throw.test | 10 | 0.000924s | 0.001003s | 0.000917s | byte equality observed |
| variant_move_construct.test | 10 | 0.000939s | 0.001000s | 0.000928s | byte equality observed |
| variant_move_construct_throw.test | 10 | 0.000946s | 0.001011s | 0.000949s | byte equality observed |
| variant_ostream_insert.test | 10 | 0.000965s | 0.000974s | 0.000909s | byte equality observed |
| variant_size.test | 10 | 0.000887s | 0.000973s | 0.000933s | byte equality observed |
| variant_special.test | 10 | 0.001015s | 0.001049s | 0.000959s | byte equality observed |
| variant_subset.test | 10 | 0.001001s | 0.001008s | 0.000948s | byte equality observed |
| variant_subset_nx.test | 10 | 0.000950s | 0.000964s | 0.000908s | byte equality observed |
| variant_swap.test | 10 | 0.000939s | 0.000988s | 0.000914s | byte equality observed |
| variant_trivial.test | 10 | 0.000998s | 0.001009s | 0.000917s | byte equality observed |
| variant_value_assign.test | 10 | 0.000943s | 0.000973s | 0.000907s | byte equality observed |
| variant_value_construct.test | 10 | 0.000969s | 0.000977s | 0.000913s | byte equality observed |
| variant_valueless.test | 10 | 0.000958s | 0.001005s | 0.000932s | byte equality observed |
| variant_visit.test | 10 | 0.000955s | 0.000986s | 0.000927s | byte equality observed |
| variant_visit_by_index.test | 10 | 0.000941s | 0.000969s | 0.000899s | byte equality observed |
| variant_visit_derived.test | 10 | 0.000957s | 0.000979s | 0.000887s | byte equality observed |
| variant_visit_r.test | 10 | 0.000938s | 0.000969s | 0.000915s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43666517673).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
