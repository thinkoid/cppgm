# libs/variant2/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| quick.test | RUN | 0.114202 | 0.267366 | 0.378936 | 0.001709 | 0.000720 | 0.001730 |
| variant_size.test | RUN | 0.204468 | 0.616095 | 0.691104 | 0.001876 | 0.001836 | 0.001842 |
| variant_alternative.test | RUN | 0.261105 | 1.920858 | 1.145145 | 0.001740 | 0.001726 | 0.001442 |
| variant_holds_alternative.test | RUN | 0.194363 | 0.460289 | 0.707462 | 0.001453 | 0.001841 | 0.001656 |
| variant_holds_alternative_cx.test | COMPILE | 0.127041 | 0.274157 | 0.405264 | — | — | — |
| variant_get_by_index.test | RUN | 0.308851 | 2.078394 | 1.435967 | 0.001752 | 0.001894 | 0.001812 |
| variant_get_by_index_cx.test | COMPILE | 0.122848 | 0.282021 | 0.415500 | — | — | — |
| variant_get_by_type.test | RUN | 0.306400 | 2.218924 | 1.530320 | 0.001838 | 0.001898 | 0.001860 |
| variant_get_by_type_cx.test | COMPILE | 0.114310 | 0.249847 | 0.363210 | — | — | — |
| variant_default_construct.test | RUN | 0.303333 | 1.613783 | 1.216727 | 0.001817 | 0.001412 | 0.001550 |
| variant_default_construct_cx.test | COMPILE | 0.119032 | 0.266803 | 0.407021 | — | — | — |
| variant_copy_construct.test | RUN | 0.443157 | 2.699183 | 2.164516 | 0.001602 | 0.001692 | 0.001812 |
| variant_copy_construct_cx.test | COMPILE | 0.137799 | 0.307681 | 0.479063 | — | — | — |
| variant_move_construct.test | RUN | 0.417760 | 2.390947 | 1.991062 | 0.001743 | 0.001664 | 0.001835 |
| variant_move_construct_cx.test | COMPILE | 0.111098 | 0.254724 | 0.356670 | — | — | — |
| variant_value_construct.test | RUN | 0.225496 | 0.608255 | 0.879816 | 0.001570 | 0.001724 | 0.001779 |
| variant_value_construct_cx.test | COMPILE | 0.128723 | 0.282219 | 0.393612 | — | — | — |
| variant_in_place_index_construct.test | RUN | 0.235241 | 0.613537 | 0.857636 | 0.001752 | 0.001792 | 0.001711 |
| variant_in_place_index_construct_cx.test | COMPILE | 0.126809 | 0.277846 | 0.401990 | — | — | — |
| variant_in_place_type_construct.test | RUN | 0.231258 | 0.613286 | 0.874347 | 0.001914 | 0.001644 | 0.001702 |
| variant_in_place_type_construct_cx.test | COMPILE | 0.125416 | 0.275235 | 0.394345 | — | — | — |
| variant_copy_assign.test | RUN | 0.312935 | 1.868247 | 1.379628 | 0.001655 | 0.001886 | 0.001772 |
| variant_copy_assign_cx.test | COMPILE | 0.116322 | 0.253716 | 0.357484 | — | — | — |
| variant_move_assign.test | RUN | 0.300386 | 1.881705 | 1.333648 | 0.001584 | 0.001934 | 0.001278 |
| variant_move_assign_cx.test | COMPILE | 0.112917 | 0.244725 | 0.352683 | — | — | — |
| variant_value_assign.test | RUN | 0.236599 | 0.672932 | 0.955177 | 0.001670 | 0.001812 | 0.001644 |
| variant_value_assign_cx.test | COMPILE | 0.111886 | 0.245601 | 0.339197 | — | — | — |
| variant_emplace_index.test | RUN | 0.266343 | 0.790411 | 1.061662 | 0.001491 | 0.001587 | 0.001732 |
| variant_emplace_index_cx.test | COMPILE | 0.109974 | 0.250589 | 0.358366 | — | — | — |
| variant_emplace_type.test | RUN | 0.236980 | 0.669250 | 0.947840 | 0.001789 | 0.001875 | 0.001689 |
| variant_emplace_type_cx.test | COMPILE | 0.111264 | 0.235962 | 0.344669 | — | — | — |
| variant_swap.test | RUN | 0.248663 | 0.842798 | 0.987095 | 0.001748 | 0.001798 | 0.001656 |
| variant_eq_ne.test | RUN | 0.201835 | 0.502602 | 0.752950 | 0.001547 | 0.001815 | 0.001597 |
| variant_eq_ne_cx.test | COMPILE | 0.114167 | 0.253004 | 0.312858 | — | — | — |
| variant_lt_gt.test | RUN | 0.207875 | 0.599083 | 0.770318 | 0.001701 | 0.001708 | 0.001728 |
| variant_lt_gt_cx.test | COMPILE | 0.110068 | 0.237952 | 0.347838 | — | — | — |
| variant_destroy.test | RUN | 0.209323 | 0.584030 | 0.800644 | 0.001779 | 0.001906 | 0.001751 |
| variant_visit.test | RUN | 1.195063 | 4.485281 | 12.334954 | 0.001672 | 0.001762 | 0.001620 |
| variant_convert_construct.test | RUN | 0.267012 | 0.764162 | 1.089795 | 0.001895 | 0.001803 | 0.001560 |
| variant_subset.test | RUN | 0.259532 | 0.827517 | 1.125164 | 0.001797 | 0.001814 | 0.001751 |
| variant_valueless.test | RUN | 0.204073 | 0.557982 | 0.780120 | 0.001667 | 0.001854 | 0.001476 |
| variant_copy_construct_throw.test | RUN | 0.161848 | 0.395784 | 0.555018 | 0.001794 | 0.001724 | 0.001787 |
| variant_move_construct_throw.test | RUN | 0.157989 | 0.406614 | 0.546618 | 0.001722 | 0.001863 | 0.001688 |
| variant_convert_construct_throw.test | RUN | 0.161988 | 0.401655 | 0.568451 | 0.001602 | 0.001876 | 0.001716 |
| variant_copy_assign_throw.test | RUN | 0.161196 | 0.375510 | 0.572113 | 0.001634 | 0.001836 | 0.001732 |
| variant_move_assign_throw.test | RUN | 0.160387 | 0.383137 | 0.538951 | 0.001308 | 0.001794 | 0.001804 |
| variant_get_by_index_nx.test | RUN | 0.372787 | 1.796084 | 1.358012 | 0.001641 | 0.001788 | 0.001689 |
| variant_get_by_index_cx_nx.test | COMPILE | 0.123702 | 0.267133 | 0.402284 | — | — | — |
| variant_get_by_type_nx.test | RUN | 0.368969 | 2.002903 | 1.473943 | 0.001648 | 0.001588 | 0.001784 |
| variant_get_by_type_cx_nx.test | COMPILE | 0.108839 | 0.257539 | 0.356621 | — | — | — |
| variant_subset_nx.test | RUN | 0.285073 | 0.815447 | 1.137035 | 0.001748 | 0.001732 | 0.001834 |
| variant_hash.test | RUN | 0.273164 | 0.913504 | 1.087205 | 0.001399 | 0.001586 | 0.001395 |
| variant_trivial.test | RUN | 1.574626 | 4.984851 | 7.997106 | 0.001641 | 0.001860 | 0.001695 |
| variant_special.test | RUN | 1.536273 | 5.389441 | 8.355937 | 0.001936 | 0.001934 | 0.001822 |
| variant_visit_derived.test | RUN | 0.195065 | 0.472275 | 0.748930 | 0.001858 | 0.001715 | 0.001688 |
| variant_many_types.test | RUN | 1.610970 | 7.271555 | 10.819415 | 0.001781 | 0.001728 | 0.001804 |
| variant_visit_r.test | RUN | 0.656451 | 2.282382 | 4.031880 | 0.001816 | 0.001696 | 0.001672 |
| variant_derived_construct.test | COMPILE | 0.114657 | 0.236821 | 0.359226 | — | — | — |
| variant_visit_by_index.test | RUN | 0.257714 | 0.607730 | 1.013019 | 0.001503 | 0.001615 | 0.001577 |
| variant_ostream_insert.test | RUN | 0.184193 | 0.497448 | 0.703175 | 0.001457 | 0.001843 | 0.001478 |
| is_output_streamable.test | RUN | 0.224034 | 1.033194 | 0.941806 | 0.001739 | 0.001414 | 0.001757 |
| variant_json_value_from.test | RUN | 0.355289 | 0.869408 | 1.202461 | 0.001916 | 0.001902 | 0.001775 |
| variant_json_value_to.test | RUN | 0.436593 | 1.134251 | 1.570225 | 0.001888 | 0.001758 | 0.001781 |
| variant_uses_double_storage.test | COMPILE | 0.119683 | 0.272356 | 0.366037 | — | — | — |
| variant_derived_construct2.test | RUN | 0.160318 | 0.425705 | 0.584370 | 0.001674 | 0.001831 | 0.001656 |
| variant_visit_cx.test | COMPILE | 0.111393 | 0.240721 | 0.354140 | — | — | — |
| variant_visit_cx_2.test | COMPILE | 0.111219 | 0.254279 | 0.338291 | — | — | — |
| variant_visit_r_cx.test | COMPILE | 0.110086 | 0.243814 | 0.328434 | — | — | — |
| variant_index_type_126.test | RUN | 1.056094 | 2.389687 | 5.092470 | 0.001704 | 0.001768 | 0.001692 |
| variant_index_type_127.test | RUN | 1.029349 | 2.431193 | 5.108522 | 0.001752 | 0.001646 | 0.001727 |
| variant_index_type_128.test | RUN | 1.064005 | 2.504417 | 5.187791 | 0.001642 | 0.001713 | 0.001670 |
| variant_index_type_129.test | RUN | 1.072420 | 2.474935 | 5.235849 | 0.001834 | 0.001754 | 0.001712 |
| variant_index_type_254.test | RUN | 3.852017 | 9.012802 | 15.569544 | 0.001713 | 0.001675 | 0.001611 |
| variant_index_type_255.test | RUN | 3.856913 | 8.992832 | 15.559235 | 0.001473 | 0.001678 | 0.001758 |
| variant_index_type_256.test | RUN | 3.711430 | 9.240453 | 15.691843 | 0.001752 | 0.001754 | 0.001754 |
| variant_index_type_257.test | RUN | 3.803002 | 9.301534 | 15.968656 | 0.001421 | 0.001324 | 0.001802 |
| variant_default_construct_cx_2.test | COMPILE | 0.116918 | 0.238687 | 0.325760 | — | — | — |
| variant_default_construct_cx_3.test | COMPILE | 0.114277 | 0.242527 | 0.355042 | — | — | — |
| variant_default_construct_cx_4.test | COMPILE | 0.112166 | 0.238732 | 0.329106 | — | — | — |
| variant_default_construct_cx_5.test | COMPILE | 0.111390 | 0.244884 | 0.336750 | — | — | — |
| variant_value_construct_cx_2.test | COMPILE | 0.113694 | 0.237890 | 0.358739 | — | — | — |
| variant_value_construct_cx_3.test | COMPILE | 0.107295 | 0.241639 | 0.326743 | — | — | — |
| variant_value_construct_cx_4.test | COMPILE | 0.096360 | 0.242662 | 0.273511 | — | — | — |
| variant_issue_55.test | RUN | 0.149872 | 0.414242 | 0.522483 | 0.001411 | 0.001297 | 0.001203 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.993× | 0.990×, 0.997× | 1.005× |
| clang | 0.998× | 0.998×, 0.999× | 1.013× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1361 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43632677224).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| is_output_streamable.test | 10 | 0.001151s | 0.001157s | 0.001161s | byte equality observed |
| quick.test | 10 | 0.001124s | 0.000488s | 0.001148s | byte equality observed |
| variant_alternative.test | 10 | 0.001143s | 0.001186s | 0.001142s | byte equality observed |
| variant_convert_construct.test | 10 | 0.001149s | 0.001159s | 0.001145s | byte equality observed |
| variant_convert_construct_throw.test | 10 | 0.001179s | 0.001172s | 0.001186s | byte equality observed |
| variant_copy_assign.test | 10 | 0.001146s | 0.001181s | 0.001158s | byte equality observed |
| variant_copy_assign_throw.test | 10 | 0.001166s | 0.001183s | 0.001179s | byte equality observed |
| variant_copy_construct.test | 10 | 0.001166s | 0.001158s | 0.001159s | byte equality observed |
| variant_copy_construct_throw.test | 10 | 0.001172s | 0.001178s | 0.001196s | byte equality observed |
| variant_default_construct.test | 10 | 0.001161s | 0.001162s | 0.001166s | byte equality observed |
| variant_derived_construct2.test | 10 | 0.001134s | 0.001136s | 0.001138s | byte equality observed |
| variant_destroy.test | 10 | 0.001154s | 0.001142s | 0.001165s | byte equality observed |
| variant_emplace_index.test | 10 | 0.001146s | 0.001154s | 0.001143s | byte equality observed |
| variant_emplace_type.test | 10 | 0.001154s | 0.001152s | 0.001170s | byte equality observed |
| variant_eq_ne.test | 10 | 0.001136s | 0.001137s | 0.001139s | byte equality observed |
| variant_get_by_index.test | 10 | 0.001194s | 0.001205s | 0.001245s | byte equality observed |
| variant_get_by_index_nx.test | 10 | 0.001155s | 0.001145s | 0.001157s | byte equality observed |
| variant_get_by_type.test | 10 | 0.001210s | 0.001246s | 0.001183s | byte equality observed |
| variant_get_by_type_nx.test | 10 | 0.001162s | 0.001146s | 0.001146s | byte equality observed |
| variant_hash.test | 10 | 0.001157s | 0.001138s | 0.001151s | byte equality observed |
| variant_holds_alternative.test | 10 | 0.001143s | 0.001133s | 0.001150s | byte equality observed |
| variant_in_place_index_construct.test | 10 | 0.001179s | 0.001149s | 0.001154s | byte equality observed |
| variant_in_place_type_construct.test | 10 | 0.001149s | 0.001169s | 0.001152s | byte equality observed |
| variant_index_type_126.test | 10 | 0.001157s | 0.001152s | 0.001164s | byte equality observed |
| variant_index_type_127.test | 10 | 0.001152s | 0.001140s | 0.001161s | byte equality observed |
| variant_index_type_128.test | 10 | 0.001149s | 0.001162s | 0.001126s | byte equality observed |
| variant_index_type_129.test | 10 | 0.001137s | 0.001125s | 0.001151s | byte equality observed |
| variant_index_type_254.test | 10 | 0.001160s | 0.001122s | 0.001175s | byte equality observed |
| variant_index_type_255.test | 10 | 0.001144s | 0.001137s | 0.001155s | byte equality observed |
| variant_index_type_256.test | 10 | 0.001145s | 0.001117s | 0.001144s | byte equality observed |
| variant_index_type_257.test | 10 | 0.001146s | 0.001123s | 0.001166s | byte equality observed |
| variant_issue_55.test | 10 | 0.001154s | 0.001149s | 0.001140s | byte equality observed |
| variant_json_value_from.test | 10 | 0.001196s | 0.001186s | 0.001182s | byte equality observed |
| variant_json_value_to.test | 10 | 0.001195s | 0.001173s | 0.001187s | byte equality observed |
| variant_lt_gt.test | 10 | 0.001125s | 0.001157s | 0.001150s | byte equality observed |
| variant_many_types.test | 10 | 0.001168s | 0.001168s | 0.001163s | byte equality observed |
| variant_move_assign.test | 10 | 0.001162s | 0.001142s | 0.001157s | byte equality observed |
| variant_move_assign_throw.test | 10 | 0.001186s | 0.001176s | 0.001166s | byte equality observed |
| variant_move_construct.test | 10 | 0.001161s | 0.001156s | 0.001160s | byte equality observed |
| variant_move_construct_throw.test | 10 | 0.001191s | 0.001176s | 0.001197s | byte equality observed |
| variant_ostream_insert.test | 10 | 0.001167s | 0.001170s | 0.001168s | byte equality observed |
| variant_size.test | 10 | 0.001130s | 0.001147s | 0.001151s | byte equality observed |
| variant_special.test | 10 | 0.001236s | 0.001207s | 0.001209s | byte equality observed |
| variant_subset.test | 10 | 0.001173s | 0.001182s | 0.001181s | byte equality observed |
| variant_subset_nx.test | 10 | 0.001150s | 0.001147s | 0.001150s | byte equality observed |
| variant_swap.test | 10 | 0.001159s | 0.001136s | 0.001179s | byte equality observed |
| variant_trivial.test | 10 | 0.001216s | 0.001211s | 0.001179s | byte equality observed |
| variant_value_assign.test | 10 | 0.001135s | 0.001129s | 0.001139s | byte equality observed |
| variant_value_construct.test | 10 | 0.001142s | 0.001160s | 0.001145s | byte equality observed |
| variant_valueless.test | 10 | 0.001192s | 0.001188s | 0.001222s | byte equality observed |
| variant_visit.test | 10 | 0.001174s | 0.001159s | 0.001172s | byte equality observed |
| variant_visit_by_index.test | 10 | 0.001153s | 0.001141s | 0.001173s | byte equality observed |
| variant_visit_derived.test | 10 | 0.001139s | 0.001121s | 0.001153s | byte equality observed |
| variant_visit_r.test | 10 | 0.001166s | 0.001134s | 0.001161s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43632677224).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
