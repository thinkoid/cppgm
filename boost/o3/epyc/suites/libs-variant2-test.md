# libs/variant2/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| quick.test | RUN | 0.093249 | 0.192736 | 0.246516 | 0.001674 | 0.000734 | 0.001550 |
| variant_size.test | RUN | 0.169865 | 0.479266 | 0.490585 | 0.001776 | 0.001769 | 0.001714 |
| variant_alternative.test | RUN | 0.212926 | 1.600256 | 0.856303 | 0.001692 | 0.001749 | 0.001404 |
| variant_holds_alternative.test | RUN | 0.161050 | 0.399256 | 0.471097 | 0.001512 | 0.001721 | 0.001544 |
| variant_holds_alternative_cx.test | COMPILE | 0.104706 | 0.247714 | 0.268161 | — | — | — |
| variant_get_by_index.test | RUN | 0.254129 | 1.712034 | 1.029449 | 0.001580 | 0.001770 | 0.001914 |
| variant_get_by_index_cx.test | COMPILE | 0.106866 | 0.221498 | 0.280775 | — | — | — |
| variant_get_by_type.test | RUN | 0.254939 | 1.826424 | 1.108788 | 0.001942 | 0.001692 | 0.001714 |
| variant_get_by_type_cx.test | COMPILE | 0.091782 | 0.192168 | 0.255329 | — | — | — |
| variant_default_construct.test | RUN | 0.235507 | 1.375101 | 0.896306 | 0.001777 | 0.001572 | 0.001686 |
| variant_default_construct_cx.test | COMPILE | 0.104439 | 0.203018 | 0.277568 | — | — | — |
| variant_copy_construct.test | RUN | 0.364941 | 2.332263 | 1.659919 | 0.001433 | 0.001680 | 0.001736 |
| variant_copy_construct_cx.test | COMPILE | 0.115591 | 0.246545 | 0.342735 | — | — | — |
| variant_move_construct.test | RUN | 0.340207 | 1.924600 | 1.500363 | 0.001460 | 0.001764 | 0.001620 |
| variant_move_construct_cx.test | COMPILE | 0.092409 | 0.193681 | 0.237255 | — | — | — |
| variant_value_construct.test | RUN | 0.185099 | 0.512853 | 0.622719 | 0.001766 | 0.001813 | 0.001673 |
| variant_value_construct_cx.test | COMPILE | 0.106018 | 0.226266 | 0.299858 | — | — | — |
| variant_in_place_index_construct.test | RUN | 0.189032 | 0.485501 | 0.615690 | 0.001416 | 0.001508 | 0.001437 |
| variant_in_place_index_construct_cx.test | COMPILE | 0.102731 | 0.221079 | 0.280643 | — | — | — |
| variant_in_place_type_construct.test | RUN | 0.182385 | 0.493796 | 0.590435 | 0.001476 | 0.001763 | 0.001697 |
| variant_in_place_type_construct_cx.test | COMPILE | 0.099581 | 0.214591 | 0.280591 | — | — | — |
| variant_copy_assign.test | RUN | 0.251432 | 1.548620 | 0.947723 | 0.001734 | 0.001728 | 0.001514 |
| variant_copy_assign_cx.test | COMPILE | 0.093430 | 0.191465 | 0.234658 | — | — | — |
| variant_move_assign.test | RUN | 0.261967 | 1.548927 | 0.970226 | 0.001557 | 0.001786 | 0.001238 |
| variant_move_assign_cx.test | COMPILE | 0.096029 | 0.197059 | 0.229587 | — | — | — |
| variant_value_assign.test | RUN | 0.197066 | 0.566847 | 0.668914 | 0.001512 | 0.001649 | 0.001283 |
| variant_value_assign_cx.test | COMPILE | 0.094100 | 0.182760 | 0.236125 | — | — | — |
| variant_emplace_index.test | RUN | 0.222763 | 0.625666 | 0.737924 | 0.001777 | 0.001917 | 0.001684 |
| variant_emplace_index_cx.test | COMPILE | 0.091548 | 0.192383 | 0.234463 | — | — | — |
| variant_emplace_type.test | RUN | 0.200951 | 0.534113 | 0.668169 | 0.001708 | 0.001840 | 0.001625 |
| variant_emplace_type_cx.test | COMPILE | 0.092575 | 0.187882 | 0.233135 | — | — | — |
| variant_swap.test | RUN | 0.204641 | 0.684680 | 0.711990 | 0.001407 | 0.001657 | 0.001723 |
| variant_eq_ne.test | RUN | 0.174391 | 0.428366 | 0.499848 | 0.001620 | 0.001728 | 0.001475 |
| variant_eq_ne_cx.test | COMPILE | 0.096829 | 0.201395 | 0.249244 | — | — | — |
| variant_lt_gt.test | RUN | 0.172623 | 0.486413 | 0.531586 | 0.001663 | 0.001815 | 0.001445 |
| variant_lt_gt_cx.test | COMPILE | 0.092004 | 0.191912 | 0.225588 | — | — | — |
| variant_destroy.test | RUN | 0.174457 | 0.525227 | 0.560606 | 0.001409 | 0.001942 | 0.001661 |
| variant_visit.test | RUN | 0.942166 | 3.628212 | 9.187149 | 0.001709 | 0.001915 | 0.001487 |
| variant_convert_construct.test | RUN | 0.225669 | 0.671926 | 0.772210 | 0.001804 | 0.001808 | 0.001669 |
| variant_subset.test | RUN | 0.227408 | 0.672357 | 0.826693 | 0.001425 | 0.003742 | 0.001666 |
| variant_valueless.test | RUN | 0.163068 | 0.417159 | 0.530077 | 0.001752 | 0.003994 | 0.001660 |
| variant_copy_construct_throw.test | RUN | 0.132639 | 0.366695 | 0.372669 | 0.001899 | 0.001851 | 0.001616 |
| variant_move_construct_throw.test | RUN | 0.130228 | 0.287644 | 0.357867 | 0.001779 | 0.003028 | 0.001610 |
| variant_convert_construct_throw.test | RUN | 0.138336 | 0.338648 | 0.403025 | 0.001693 | 0.001641 | 0.001486 |
| variant_copy_assign_throw.test | RUN | 0.134235 | 0.303687 | 0.357060 | 0.001574 | 0.001799 | 0.001558 |
| variant_move_assign_throw.test | RUN | 0.131665 | 0.306275 | 0.373717 | 0.001807 | 0.001863 | 0.001553 |
| variant_get_by_index_nx.test | RUN | 0.298390 | 1.424924 | 0.960624 | 0.001525 | 0.001707 | 0.001628 |
| variant_get_by_index_cx_nx.test | COMPILE | 0.107812 | 0.219182 | 0.261780 | — | — | — |
| variant_get_by_type_nx.test | RUN | 0.297717 | 1.668118 | 1.071997 | 0.001603 | 0.001787 | 0.001571 |
| variant_get_by_type_cx_nx.test | COMPILE | 0.092470 | 0.182510 | 0.230153 | — | — | — |
| variant_subset_nx.test | RUN | 0.234408 | 0.634645 | 0.857113 | 0.001711 | 0.001690 | 0.001631 |
| variant_hash.test | RUN | 0.228266 | 0.776539 | 0.685355 | 0.001932 | 0.001784 | 0.001658 |
| variant_trivial.test | RUN | 1.298861 | 4.362830 | 5.491846 | 0.001894 | 0.001888 | 0.001550 |
| variant_special.test | RUN | 1.297460 | 4.546548 | 5.757087 | 0.002060 | 0.001934 | 0.001623 |
| variant_visit_derived.test | RUN | 0.178578 | 0.437521 | 0.545137 | 0.001811 | 0.001856 | 0.001626 |
| variant_many_types.test | RUN | 1.268054 | 5.754111 | 7.803728 | 0.001632 | 0.001849 | 0.001539 |
| variant_visit_r.test | RUN | 0.505023 | 1.682947 | 3.158305 | 0.001772 | 0.001742 | 0.001608 |
| variant_derived_construct.test | COMPILE | 0.093478 | 0.190474 | 0.238332 | — | — | — |
| variant_visit_by_index.test | RUN | 0.217270 | 0.568660 | 0.745946 | 0.001458 | 0.001691 | 0.001666 |
| variant_ostream_insert.test | RUN | 0.152092 | 0.409330 | 0.430692 | 0.001790 | 0.001588 | 0.001499 |
| is_output_streamable.test | RUN | 0.194012 | 0.819497 | 0.675867 | 0.001576 | 0.001605 | 0.001731 |
| variant_json_value_from.test | RUN | 0.292809 | 0.685047 | 0.863615 | 0.001733 | 0.001816 | 0.001749 |
| variant_json_value_to.test | RUN | 0.346383 | 0.964043 | 1.153421 | 0.001932 | 0.001632 | 0.001902 |
| variant_uses_double_storage.test | COMPILE | 0.097311 | 0.193792 | 0.270795 | — | — | — |
| variant_derived_construct2.test | RUN | 0.137526 | 0.309656 | 0.378867 | 0.001648 | 0.001657 | 0.001587 |
| variant_visit_cx.test | COMPILE | 0.094098 | 0.181256 | 0.232828 | — | — | — |
| variant_visit_cx_2.test | COMPILE | 0.095376 | 0.192365 | 0.229506 | — | — | — |
| variant_visit_r_cx.test | COMPILE | 0.093633 | 0.185954 | 0.215278 | — | — | — |
| variant_index_type_126.test | RUN | 0.910414 | 1.861911 | 3.426272 | 0.001784 | 0.001877 | 0.001724 |
| variant_index_type_127.test | RUN | 0.957703 | 1.911812 | 3.524113 | 0.001515 | 0.001777 | 0.001533 |
| variant_index_type_128.test | RUN | 0.964656 | 1.941765 | 3.583552 | 0.001498 | 0.001870 | 0.001526 |
| variant_index_type_129.test | RUN | 0.965787 | 1.943684 | 3.427841 | 0.001746 | 0.001840 | 0.001563 |
| variant_index_type_254.test | RUN | 3.148170 | 7.187073 | 11.024944 | 0.001673 | 0.001691 | 0.001729 |
| variant_index_type_255.test | RUN | 3.147004 | 7.074895 | 11.227461 | 0.001864 | 0.001793 | 0.001568 |
| variant_index_type_256.test | RUN | 3.201716 | 7.381505 | 11.305894 | 0.001337 | 0.001437 | 0.001442 |
| variant_index_type_257.test | RUN | 3.222824 | 7.465113 | 11.361002 | 0.001409 | 0.001359 | 0.001470 |
| variant_default_construct_cx_2.test | COMPILE | 0.096029 | 0.188612 | 0.263067 | — | — | — |
| variant_default_construct_cx_3.test | COMPILE | 0.098061 | 0.187668 | 0.239108 | — | — | — |
| variant_default_construct_cx_4.test | COMPILE | 0.101257 | 0.195150 | 0.238159 | — | — | — |
| variant_default_construct_cx_5.test | COMPILE | 0.099214 | 0.190784 | 0.223996 | — | — | — |
| variant_value_construct_cx_2.test | COMPILE | 0.091828 | 0.187621 | 0.222908 | — | — | — |
| variant_value_construct_cx_3.test | COMPILE | 0.086485 | 0.189059 | 0.223882 | — | — | — |
| variant_value_construct_cx_4.test | COMPILE | 0.089946 | 0.174366 | 0.208209 | — | — | — |
| variant_issue_55.test | RUN | 0.134684 | 0.368851 | 0.349226 | 0.001393 | 0.001354 | 0.001164 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.969×† | 0.930×, 1.009× | 0.998× |
| clang | 0.991×† | 0.964×, 1.017× | 1.057× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1363 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43624536445).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| is_output_streamable.test | 10 | 0.000992s | 0.001024s | 0.001035s | byte equality observed |
| quick.test | 10 | 0.000995s | 0.000447s | 0.000997s | byte equality observed |
| variant_alternative.test | 10 | 0.001002s | 0.001025s | 0.001035s | byte equality observed |
| variant_convert_construct.test | 10 | 0.001015s | 0.001044s | 0.001010s | byte equality observed |
| variant_convert_construct_throw.test | 10 | 0.001043s | 0.001031s | 0.001047s | byte equality observed |
| variant_copy_assign.test | 10 | 0.001019s | 0.001027s | 0.001017s | byte equality observed |
| variant_copy_assign_throw.test | 10 | 0.001034s | 0.001060s | 0.001033s | byte equality observed |
| variant_copy_construct.test | 10 | 0.001012s | 0.001034s | 0.000999s | byte equality observed |
| variant_copy_construct_throw.test | 10 | 0.001034s | 0.001049s | 0.001052s | byte equality observed |
| variant_default_construct.test | 10 | 0.001034s | 0.001032s | 0.001011s | byte equality observed |
| variant_derived_construct2.test | 10 | 0.001030s | 0.000983s | 0.000993s | byte equality observed |
| variant_destroy.test | 10 | 0.001001s | 0.000982s | 0.001013s | byte equality observed |
| variant_emplace_index.test | 10 | 0.001023s | 0.001038s | 0.001023s | byte equality observed |
| variant_emplace_type.test | 10 | 0.001024s | 0.001012s | 0.001006s | byte equality observed |
| variant_eq_ne.test | 10 | 0.001011s | 0.000999s | 0.000991s | byte equality observed |
| variant_get_by_index.test | 10 | 0.001066s | 0.001091s | 0.001071s | byte equality observed |
| variant_get_by_index_nx.test | 10 | 0.001011s | 0.001017s | 0.001004s | byte equality observed |
| variant_get_by_type.test | 10 | 0.001063s | 0.001085s | 0.001076s | byte equality observed |
| variant_get_by_type_nx.test | 10 | 0.001019s | 0.001016s | 0.001003s | byte equality observed |
| variant_hash.test | 10 | 0.000997s | 0.001015s | 0.001016s | byte equality observed |
| variant_holds_alternative.test | 10 | 0.001033s | 0.001006s | 0.001023s | byte equality observed |
| variant_in_place_index_construct.test | 10 | 0.001037s | 0.000993s | 0.001011s | byte equality observed |
| variant_in_place_type_construct.test | 10 | 0.001022s | 0.001005s | 0.001021s | byte equality observed |
| variant_index_type_126.test | 10 | 0.001033s | 0.001012s | 0.000994s | byte equality observed |
| variant_index_type_127.test | 10 | 0.001033s | 0.001021s | 0.001000s | byte equality observed |
| variant_index_type_128.test | 10 | 0.001027s | 0.001022s | 0.000984s | byte equality observed |
| variant_index_type_129.test | 10 | 0.001039s | 0.000981s | 0.001015s | byte equality observed |
| variant_index_type_254.test | 10 | 0.001018s | 0.001015s | 0.001020s | byte equality observed |
| variant_index_type_255.test | 10 | 0.001029s | 0.000987s | 0.001020s | byte equality observed |
| variant_index_type_256.test | 10 | 0.001035s | 0.001007s | 0.001010s | byte equality observed |
| variant_index_type_257.test | 10 | 0.001032s | 0.001021s | 0.001029s | byte equality observed |
| variant_issue_55.test | 10 | 0.001034s | 0.001009s | 0.001035s | byte equality observed |
| variant_json_value_from.test | 10 | 0.001063s | 0.001040s | 0.001035s | byte equality observed |
| variant_json_value_to.test | 10 | 0.001070s | 0.001042s | 0.001034s | byte equality observed |
| variant_lt_gt.test | 10 | 0.001022s | 0.001006s | 0.001012s | byte equality observed |
| variant_many_types.test | 10 | 0.001054s | 0.001043s | 0.001044s | byte equality observed |
| variant_move_assign.test | 10 | 0.001020s | 0.001016s | 0.001009s | byte equality observed |
| variant_move_assign_throw.test | 10 | 0.001042s | 0.001044s | 0.001036s | byte equality observed |
| variant_move_construct.test | 10 | 0.001003s | 0.000984s | 0.001014s | byte equality observed |
| variant_move_construct_throw.test | 10 | 0.001019s | 0.001024s | 0.001058s | byte equality observed |
| variant_ostream_insert.test | 10 | 0.001024s | 0.001003s | 0.001023s | byte equality observed |
| variant_size.test | 10 | 0.001016s | 0.001020s | 0.001006s | byte equality observed |
| variant_special.test | 10 | 0.001083s | 0.001065s | 0.001070s | byte equality observed |
| variant_subset.test | 10 | 0.001049s | 0.001034s | 0.001026s | byte equality observed |
| variant_subset_nx.test | 10 | 0.001034s | 0.000976s | 0.000977s | byte equality observed |
| variant_swap.test | 10 | 0.001040s | 0.001036s | 0.001004s | byte equality observed |
| variant_trivial.test | 10 | 0.001078s | 0.001076s | 0.001018s | byte equality observed |
| variant_value_assign.test | 10 | 0.001031s | 0.001029s | 0.000997s | byte equality observed |
| variant_value_construct.test | 10 | 0.001023s | 0.001031s | 0.001002s | byte equality observed |
| variant_valueless.test | 10 | 0.001033s | 0.001063s | 0.001021s | byte equality observed |
| variant_visit.test | 10 | 0.001009s | 0.001020s | 0.001021s | byte equality observed |
| variant_visit_by_index.test | 10 | 0.000993s | 0.001017s | 0.001007s | byte equality observed |
| variant_visit_derived.test | 10 | 0.000981s | 0.001032s | 0.001004s | byte equality observed |
| variant_visit_r.test | 10 | 0.001041s | 0.000998s | 0.001023s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43624536445).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
