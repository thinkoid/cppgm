# libs/variant2/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| quick.test | RUN | 0.089959 | 0.188903 | 0.246207 | 0.001488 | 0.000743 | 0.001629 |
| variant_size.test | RUN | 0.153112 | 0.478014 | 0.489178 | 0.001623 | 0.001727 | 0.001634 |
| variant_alternative.test | RUN | 0.201610 | 1.501377 | 0.862006 | 0.001617 | 0.001377 | 0.001703 |
| variant_holds_alternative.test | RUN | 0.145402 | 0.351801 | 0.476170 | 0.001489 | 0.001674 | 0.001691 |
| variant_holds_alternative_cx.test | COMPILE | 0.096307 | 0.207462 | 0.285328 | — | — | — |
| variant_get_by_index.test | RUN | 0.233545 | 1.655414 | 1.011397 | 0.001712 | 0.001601 | 0.001708 |
| variant_get_by_index_cx.test | COMPILE | 0.098995 | 0.210598 | 0.282502 | — | — | — |
| variant_get_by_type.test | RUN | 0.241282 | 1.773071 | 1.062913 | 0.001776 | 0.001367 | 0.001708 |
| variant_get_by_type_cx.test | COMPILE | 0.088493 | 0.189179 | 0.237475 | — | — | — |
| variant_default_construct.test | RUN | 0.224034 | 1.305976 | 0.879810 | 0.001690 | 0.001542 | 0.001567 |
| variant_default_construct_cx.test | COMPILE | 0.104423 | 0.199325 | 0.262511 | — | — | — |
| variant_copy_construct.test | RUN | 0.373440 | 2.217873 | 1.653860 | 0.001520 | 0.001688 | 0.001726 |
| variant_copy_construct_cx.test | COMPILE | 0.111688 | 0.225184 | 0.373658 | — | — | — |
| variant_move_construct.test | RUN | 0.343656 | 1.839133 | 1.468865 | 0.001576 | 0.001528 | 0.001676 |
| variant_move_construct_cx.test | COMPILE | 0.088362 | 0.189004 | 0.240278 | — | — | — |
| variant_value_construct.test | RUN | 0.177980 | 0.481008 | 0.607869 | 0.001469 | 0.001571 | 0.001628 |
| variant_value_construct_cx.test | COMPILE | 0.104655 | 0.212621 | 0.298935 | — | — | — |
| variant_in_place_index_construct.test | RUN | 0.183987 | 0.464984 | 0.590995 | 0.001624 | 0.001502 | 0.001471 |
| variant_in_place_index_construct_cx.test | COMPILE | 0.099454 | 0.210223 | 0.275913 | — | — | — |
| variant_in_place_type_construct.test | RUN | 0.179360 | 0.465472 | 0.602499 | 0.001514 | 0.001703 | 0.001416 |
| variant_in_place_type_construct_cx.test | COMPILE | 0.102538 | 0.213437 | 0.282869 | — | — | — |
| variant_copy_assign.test | RUN | 0.241396 | 1.483627 | 0.951992 | 0.001440 | 0.001597 | 0.001508 |
| variant_copy_assign_cx.test | COMPILE | 0.087935 | 0.189222 | 0.230805 | — | — | — |
| variant_move_assign.test | RUN | 0.235938 | 1.466435 | 0.938183 | 0.001531 | 0.001711 | 0.001623 |
| variant_move_assign_cx.test | COMPILE | 0.086123 | 0.185865 | 0.229786 | — | — | — |
| variant_value_assign.test | RUN | 0.179703 | 0.522604 | 0.651686 | 0.001457 | 0.001587 | 0.001392 |
| variant_value_assign_cx.test | COMPILE | 0.089570 | 0.178663 | 0.230159 | — | — | — |
| variant_emplace_index.test | RUN | 0.210946 | 0.612393 | 0.734822 | 0.001470 | 0.001607 | 0.001642 |
| variant_emplace_index_cx.test | COMPILE | 0.087488 | 0.187643 | 0.223663 | — | — | — |
| variant_emplace_type.test | RUN | 0.184000 | 0.538597 | 0.643227 | 0.001524 | 0.001314 | 0.001720 |
| variant_emplace_type_cx.test | COMPILE | 0.087446 | 0.183471 | 0.225067 | — | — | — |
| variant_swap.test | RUN | 0.189973 | 0.627990 | 0.706817 | 0.001284 | 0.001402 | 0.001496 |
| variant_eq_ne.test | RUN | 0.156567 | 0.393871 | 0.504069 | 0.001619 | 0.001581 | 0.001444 |
| variant_eq_ne_cx.test | COMPILE | 0.087970 | 0.174529 | 0.213386 | — | — | — |
| variant_lt_gt.test | RUN | 0.161762 | 0.435673 | 0.504775 | 0.003498 | 0.001611 | 0.001653 |
| variant_lt_gt_cx.test | COMPILE | 0.088359 | 0.187553 | 0.218925 | — | — | — |
| variant_destroy.test | RUN | 0.169601 | 0.444685 | 0.536837 | 0.001704 | 0.001710 | 0.001701 |
| variant_visit.test | RUN | 0.976241 | 3.394523 | 9.107405 | 0.001438 | 0.001518 | 0.001658 |
| variant_convert_construct.test | RUN | 0.262986 | 0.596515 | 0.762826 | 0.001672 | 0.001701 | 0.001625 |
| variant_subset.test | RUN | 0.217289 | 0.635254 | 0.805995 | 0.001688 | 0.001667 | 0.001690 |
| variant_valueless.test | RUN | 0.158177 | 0.410649 | 0.523515 | 0.001500 | 0.001659 | 0.001543 |
| variant_copy_construct_throw.test | RUN | 0.125969 | 0.299473 | 0.358835 | 0.001590 | 0.001683 | 0.001715 |
| variant_move_construct_throw.test | RUN | 0.122006 | 0.304774 | 0.365791 | 0.001627 | 0.001708 | 0.001624 |
| variant_convert_construct_throw.test | RUN | 0.128553 | 0.312424 | 0.410372 | 0.001419 | 0.001790 | 0.001561 |
| variant_copy_assign_throw.test | RUN | 0.128897 | 0.287310 | 0.361002 | 0.001574 | 0.001734 | 0.001680 |
| variant_move_assign_throw.test | RUN | 0.128908 | 0.301704 | 0.379096 | 0.001590 | 0.001640 | 0.001764 |
| variant_get_by_index_nx.test | RUN | 0.290230 | 1.390449 | 0.985716 | 0.001519 | 0.001550 | 0.001545 |
| variant_get_by_index_cx_nx.test | COMPILE | 0.095875 | 0.215035 | 0.271863 | — | — | — |
| variant_get_by_type_nx.test | RUN | 0.283655 | 1.564694 | 1.058939 | 0.001533 | 0.001601 | 0.001684 |
| variant_get_by_type_cx_nx.test | COMPILE | 0.089673 | 0.189207 | 0.233747 | — | — | — |
| variant_subset_nx.test | RUN | 0.223703 | 0.609368 | 0.795362 | 0.001698 | 0.001600 | 0.001536 |
| variant_hash.test | RUN | 0.220551 | 0.708374 | 0.720823 | 0.001784 | 0.001689 | 0.001641 |
| variant_trivial.test | RUN | 1.244210 | 3.984141 | 5.497283 | 0.001461 | 0.001782 | 0.001767 |
| variant_special.test | RUN | 1.182225 | 4.355891 | 5.743492 | 0.001556 | 0.002003 | 0.001890 |
| variant_visit_derived.test | RUN | 0.152678 | 0.375910 | 0.561878 | 0.001690 | 0.001708 | 0.001662 |
| variant_many_types.test | RUN | 1.249186 | 5.517562 | 7.962858 | 0.001514 | 0.001736 | 0.001427 |
| variant_visit_r.test | RUN | 0.490027 | 1.657191 | 3.074446 | 0.001724 | 0.001604 | 0.001559 |
| variant_derived_construct.test | COMPILE | 0.091493 | 0.189574 | 0.250884 | — | — | — |
| variant_visit_by_index.test | RUN | 0.202637 | 0.476475 | 0.672675 | 0.001380 | 0.001577 | 0.001320 |
| variant_ostream_insert.test | RUN | 0.145130 | 0.389514 | 0.478050 | 0.001459 | 0.001676 | 0.001571 |
| is_output_streamable.test | RUN | 0.184149 | 0.853806 | 0.619624 | 0.001400 | 0.001596 | 0.001620 |
| variant_json_value_from.test | RUN | 0.276402 | 0.658950 | 0.810447 | 0.001442 | 0.001826 | 0.001652 |
| variant_json_value_to.test | RUN | 0.343128 | 0.884734 | 1.139421 | 0.001724 | 0.001539 | 0.001777 |
| variant_uses_double_storage.test | COMPILE | 0.094675 | 0.207867 | 0.288177 | — | — | — |
| variant_derived_construct2.test | RUN | 0.133028 | 0.322683 | 0.406582 | 0.001495 | 0.001611 | 0.001562 |
| variant_visit_cx.test | COMPILE | 0.095094 | 0.194396 | 0.237226 | — | — | — |
| variant_visit_cx_2.test | COMPILE | 0.087699 | 0.189968 | 0.221075 | — | — | — |
| variant_visit_r_cx.test | COMPILE | 0.086590 | 0.185850 | 0.224445 | — | — | — |
| variant_index_type_126.test | RUN | 0.808104 | 1.767993 | 3.438368 | 0.001576 | 0.001731 | 0.001550 |
| variant_index_type_127.test | RUN | 0.808563 | 1.784527 | 3.428036 | 0.001362 | 0.001421 | 0.001440 |
| variant_index_type_128.test | RUN | 0.828259 | 1.832695 | 3.443799 | 0.001410 | 0.001499 | 0.001255 |
| variant_index_type_129.test | RUN | 0.828641 | 1.802095 | 3.475027 | 0.001661 | 0.001541 | 0.001599 |
| variant_index_type_254.test | RUN | 3.099852 | 6.673992 | 10.957455 | 0.001379 | 0.001620 | 0.001560 |
| variant_index_type_255.test | RUN | 3.025329 | 6.846929 | 11.069307 | 0.001621 | 0.001562 | 0.001451 |
| variant_index_type_256.test | RUN | 3.070170 | 6.931332 | 11.101484 | 0.001157 | 0.001720 | 0.001442 |
| variant_index_type_257.test | RUN | 3.089870 | 6.967652 | 11.182330 | 0.001600 | 0.001362 | 0.001635 |
| variant_default_construct_cx_2.test | COMPILE | 0.087124 | 0.194666 | 0.219992 | — | — | — |
| variant_default_construct_cx_3.test | COMPILE | 0.086313 | 0.187436 | 0.235267 | — | — | — |
| variant_default_construct_cx_4.test | COMPILE | 0.086354 | 0.186352 | 0.232268 | — | — | — |
| variant_default_construct_cx_5.test | COMPILE | 0.087459 | 0.185205 | 0.218513 | — | — | — |
| variant_value_construct_cx_2.test | COMPILE | 0.086430 | 0.182109 | 0.232495 | — | — | — |
| variant_value_construct_cx_3.test | COMPILE | 0.073037 | 0.184679 | 0.220711 | — | — | — |
| variant_value_construct_cx_4.test | COMPILE | 0.082078 | 0.178688 | 0.163021 | — | — | — |
| variant_issue_55.test | RUN | 0.116087 | 0.300494 | 0.404676 | 0.001246 | 0.001186 | 0.001150 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.938× | 0.958×, 0.917× | 0.960× |
| clang | 1.006×† | 0.963×, 1.050× | 0.944× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1364 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43639138948).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| is_output_streamable.test | 10 | 0.000916s | 0.000893s | 0.000911s | byte equality observed |
| quick.test | 10 | 0.000883s | 0.000411s | 0.000897s | byte equality observed |
| variant_alternative.test | 10 | 0.000913s | 0.000902s | 0.000910s | byte equality observed |
| variant_convert_construct.test | 10 | 0.000904s | 0.000904s | 0.000927s | byte equality observed |
| variant_convert_construct_throw.test | 10 | 0.000919s | 0.000940s | 0.000940s | byte equality observed |
| variant_copy_assign.test | 10 | 0.000916s | 0.000898s | 0.000913s | byte equality observed |
| variant_copy_assign_throw.test | 10 | 0.000934s | 0.000916s | 0.000931s | byte equality observed |
| variant_copy_construct.test | 10 | 0.000917s | 0.000917s | 0.000931s | byte equality observed |
| variant_copy_construct_throw.test | 10 | 0.000939s | 0.000883s | 0.000942s | byte equality observed |
| variant_default_construct.test | 10 | 0.000918s | 0.000892s | 0.000901s | byte equality observed |
| variant_derived_construct2.test | 10 | 0.000903s | 0.000866s | 0.000930s | byte equality observed |
| variant_destroy.test | 10 | 0.000917s | 0.000864s | 0.000899s | byte equality observed |
| variant_emplace_index.test | 10 | 0.000923s | 0.000891s | 0.000921s | byte equality observed |
| variant_emplace_type.test | 10 | 0.000910s | 0.000900s | 0.000919s | byte equality observed |
| variant_eq_ne.test | 10 | 0.000896s | 0.000894s | 0.000942s | byte equality observed |
| variant_get_by_index.test | 10 | 0.000946s | 0.000966s | 0.000968s | byte equality observed |
| variant_get_by_index_nx.test | 10 | 0.000919s | 0.000935s | 0.000919s | byte equality observed |
| variant_get_by_type.test | 10 | 0.000963s | 0.000948s | 0.000972s | byte equality observed |
| variant_get_by_type_nx.test | 10 | 0.000920s | 0.000920s | 0.000928s | byte equality observed |
| variant_hash.test | 10 | 0.000910s | 0.000901s | 0.000928s | byte equality observed |
| variant_holds_alternative.test | 10 | 0.000902s | 0.000893s | 0.000934s | byte equality observed |
| variant_in_place_index_construct.test | 10 | 0.000919s | 0.000891s | 0.000911s | byte equality observed |
| variant_in_place_type_construct.test | 10 | 0.000923s | 0.000912s | 0.000932s | byte equality observed |
| variant_index_type_126.test | 10 | 0.000920s | 0.000897s | 0.000913s | byte equality observed |
| variant_index_type_127.test | 10 | 0.000925s | 0.000892s | 0.000937s | byte equality observed |
| variant_index_type_128.test | 10 | 0.000931s | 0.000876s | 0.000952s | byte equality observed |
| variant_index_type_129.test | 10 | 0.000959s | 0.000861s | 0.000980s | byte equality observed |
| variant_index_type_254.test | 10 | 0.000943s | 0.000849s | 0.000929s | byte equality observed |
| variant_index_type_255.test | 10 | 0.000951s | 0.000841s | 0.000959s | byte equality observed |
| variant_index_type_256.test | 10 | 0.000935s | 0.000866s | 0.000963s | byte equality observed |
| variant_index_type_257.test | 10 | 0.000920s | 0.000880s | 0.000976s | byte equality observed |
| variant_issue_55.test | 10 | 0.000946s | 0.000870s | 0.000989s | byte equality observed |
| variant_json_value_from.test | 10 | 0.000989s | 0.000903s | 0.001012s | byte equality observed |
| variant_json_value_to.test | 10 | 0.000992s | 0.000881s | 0.001001s | byte equality observed |
| variant_lt_gt.test | 10 | 0.000973s | 0.000865s | 0.000997s | byte equality observed |
| variant_many_types.test | 10 | 0.000994s | 0.000899s | 0.001014s | byte equality observed |
| variant_move_assign.test | 10 | 0.000985s | 0.000884s | 0.000995s | byte equality observed |
| variant_move_assign_throw.test | 10 | 0.000982s | 0.000883s | 0.001026s | byte equality observed |
| variant_move_construct.test | 10 | 0.000983s | 0.000891s | 0.000993s | byte equality observed |
| variant_move_construct_throw.test | 10 | 0.001007s | 0.000870s | 0.001029s | byte equality observed |
| variant_ostream_insert.test | 10 | 0.001028s | 0.000894s | 0.001016s | byte equality observed |
| variant_size.test | 10 | 0.000976s | 0.000878s | 0.001014s | byte equality observed |
| variant_special.test | 10 | 0.001062s | 0.000981s | 0.001109s | byte equality observed |
| variant_subset.test | 10 | 0.001047s | 0.000921s | 0.001052s | byte equality observed |
| variant_subset_nx.test | 10 | 0.001009s | 0.000901s | 0.001045s | byte equality observed |
| variant_swap.test | 10 | 0.001015s | 0.000901s | 0.001028s | byte equality observed |
| variant_trivial.test | 10 | 0.001060s | 0.000924s | 0.001043s | byte equality observed |
| variant_value_assign.test | 10 | 0.001003s | 0.000896s | 0.001018s | byte equality observed |
| variant_value_construct.test | 10 | 0.000996s | 0.000903s | 0.001042s | byte equality observed |
| variant_valueless.test | 10 | 0.001062s | 0.000919s | 0.001057s | byte equality observed |
| variant_visit.test | 10 | 0.001042s | 0.000945s | 0.001028s | byte equality observed |
| variant_visit_by_index.test | 10 | 0.001011s | 0.000912s | 0.000998s | byte equality observed |
| variant_visit_derived.test | 10 | 0.001010s | 0.000922s | 0.001017s | byte equality observed |
| variant_visit_r.test | 10 | 0.001031s | 0.000953s | 0.001039s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43639138948).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
