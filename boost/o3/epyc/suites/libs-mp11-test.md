# libs/mp11/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| mp11.test | COMPILE | 0.048058 | 0.089264 | 0.156843 | — | — | — |
| complex_h.test | COMPILE | 0.194157 | 0.384069 | 0.621284 | — | — | — |
| mp_size.test | RUN | 0.220569 | 1.189446 | 0.806785 | 0.002034 | 0.002002 | 0.001928 |
| mp_size_2.test | RUN | 0.020220 | 0.044177 | 0.069276 | 0.000863 | 0.000902 | 0.001976 |
| mp_empty.test | RUN | 0.213509 | 0.770219 | 0.698824 | 0.001943 | 0.002060 | 0.001788 |
| mp_empty_2.test | RUN | 0.020863 | 0.047309 | 0.073440 | 0.000704 | 0.000831 | 0.001771 |
| mp_assign.test | RUN | 0.238573 | 1.563090 | 0.928274 | 0.001818 | 0.002034 | 0.001897 |
| mp_assign_2.test | RUN | 0.021170 | 0.046223 | 0.067866 | 0.000720 | 0.000879 | 0.001653 |
| mp_clear.test | RUN | 0.215849 | 0.680351 | 0.776733 | 0.001919 | 0.002061 | 0.001881 |
| mp_clear_2.test | RUN | 0.020735 | 0.046928 | 0.062668 | 0.000682 | 0.000818 | 0.002004 |
| mp_front.test | RUN | 0.225735 | 1.091031 | 0.835059 | 0.001994 | 0.002146 | 0.002032 |
| mp_front_2.test | RUN | 0.019937 | 0.047048 | 0.071693 | 0.000718 | 0.000786 | 0.001773 |
| mp_pop_front.test | RUN | 0.218139 | 1.132131 | 0.815264 | 0.002185 | 0.001882 | 0.001772 |
| mp_pop_front_2.test | RUN | 0.020650 | 0.046682 | 0.071633 | 0.000773 | 0.000760 | 0.001912 |
| mp_second.test | RUN | 0.222331 | 0.722542 | 0.836669 | 0.001846 | 0.002026 | 0.001620 |
| mp_second_2.test | RUN | 0.020457 | 0.047740 | 0.064811 | 0.000775 | 0.000920 | 0.002006 |
| mp_third.test | RUN | 0.212695 | 0.672484 | 0.738877 | 0.001975 | 0.002080 | 0.001707 |
| mp_third_2.test | RUN | 0.019933 | 0.046502 | 0.062263 | 0.000697 | 0.000995 | 0.001730 |
| mp_push_front.test | RUN | 0.271661 | 2.376197 | 1.309653 | 0.001984 | 0.001932 | 0.002112 |
| mp_push_front_2.test | RUN | 0.020510 | 0.046261 | 0.073297 | 0.000756 | 0.000954 | 0.001740 |
| mp_push_back.test | RUN | 0.287942 | 2.368084 | 1.312346 | 0.002068 | 0.001925 | 0.001975 |
| mp_push_back_2.test | RUN | 0.021301 | 0.048467 | 0.065143 | 0.000690 | 0.000898 | 0.001996 |
| mp_rename.test | RUN | 0.267525 | 2.189650 | 1.066240 | 0.002128 | 0.002030 | 0.001902 |
| mp_rename_2.test | RUN | 0.020945 | 0.046204 | 0.072255 | 0.000794 | 0.000927 | 0.002032 |
| mp_append.test | RUN | 0.277744 | 2.478963 | 1.200698 | 0.002162 | 0.001715 | 0.002074 |
| mp_append_2.test | RUN | 0.589911 | 5.494216 | 1.572976 | 0.002032 | 0.002230 | 0.001732 |
| mp_append_3.test | RUN | 0.020092 | 0.047059 | 0.072499 | 0.000895 | 0.000893 | 0.001885 |
| mp_append_sf.test | RUN | 0.206475 | 0.621433 | 0.674316 | 0.001974 | 0.002038 | 0.001792 |
| mp_replace_front.test | RUN | 0.264695 | 1.776000 | 1.037090 | 0.001761 | 0.001968 | 0.002084 |
| mp_replace_front_2.test | RUN | 0.019817 | 0.043294 | 0.062320 | 0.000765 | 0.000876 | 0.001840 |
| mp_replace_second.test | RUN | 0.240042 | 1.152553 | 0.910183 | 0.002098 | 0.002002 | 0.002066 |
| mp_replace_second_2.test | RUN | 0.019144 | 0.046850 | 0.072924 | 0.000729 | 0.000853 | 0.001978 |
| mp_replace_third.test | RUN | 0.233443 | 0.940640 | 0.840454 | 0.002150 | 0.002202 | 0.002067 |
| mp_replace_third_2.test | RUN | 0.020130 | 0.047527 | 0.065996 | 0.000830 | 0.000780 | 0.002057 |
| mp_apply_q.test | RUN | 0.264983 | 2.181145 | 1.115003 | 0.001731 | 0.002062 | 0.001868 |
| mp_apply_q_sf.test | RUN | 0.213424 | 0.656643 | 0.736303 | 0.001872 | 0.002120 | 0.001937 |
| mp_is_list.test | RUN | 0.211746 | 0.760258 | 0.709974 | 0.002070 | 0.002154 | 0.001822 |
| mp_list_c.test | RUN | 0.221375 | 0.914358 | 0.776692 | 0.001829 | 0.002110 | 0.002126 |
| mp_transform_front.test | RUN | 0.248826 | 1.785640 | 0.982845 | 0.001678 | 0.002150 | 0.001609 |
| mp_transform_front_2.test | RUN | 0.020771 | 0.047164 | 0.073110 | 0.000695 | 0.000860 | 0.002063 |
| mp_transform_second.test | RUN | 0.240791 | 1.526738 | 0.931426 | 0.001788 | 0.001804 | 0.001927 |
| mp_transform_second_2.test | RUN | 0.020513 | 0.044777 | 0.065835 | 0.000750 | 0.000804 | 0.001926 |
| mp_transform_third.test | RUN | 0.220155 | 1.154724 | 0.787483 | 0.001979 | 0.001912 | 0.001990 |
| mp_transform_third_2.test | RUN | 0.020848 | 0.047669 | 0.066243 | 0.000774 | 0.000868 | 0.001994 |
| mp_list_v.test | RUN | 0.021273 | 0.046355 | 0.067404 | 0.000758 | 0.000771 | 0.001754 |
| mp_rename_v.test | RUN | 0.020124 | 0.046379 | 0.064264 | 0.000711 | 0.000933 | 0.001636 |
| mp_is_value_list.test | RUN | 0.206648 | 0.475361 | 0.655128 | 0.002016 | 0.002023 | 0.002032 |
| mp_transform.test | RUN | 0.458408 | 3.708693 | 2.042784 | 0.002136 | 0.002120 | 0.002106 |
| mp_transform_2.test | RUN | 0.196071 | 0.443646 | 0.670344 | 0.002024 | 0.002162 | 0.002013 |
| mp_transform_q.test | RUN | 0.462114 | 3.533808 | 1.953313 | 0.001859 | 0.002058 | 0.002048 |
| mp_transform_q_2.test | RUN | 0.512751 | 1.157086 | 2.513523 | 0.001817 | 0.002148 | 0.001992 |
| mp_transform_sf.test | RUN | 0.226870 | 0.655168 | 0.766403 | 0.001962 | 0.001940 | 0.002070 |
| mp_transform_if.test | RUN | 0.267965 | 1.779755 | 1.117536 | 0.001980 | 0.002052 | 0.002162 |
| mp_transform_if_q.test | RUN | 0.271781 | 1.767363 | 1.116714 | 0.001827 | 0.001876 | 0.001741 |
| mp_filter.test | RUN | 0.241605 | 1.078955 | 0.852053 | 0.001943 | 0.002054 | 0.001733 |
| mp_fill.test | RUN | 0.220449 | 0.820092 | 0.809053 | 0.001819 | 0.001838 | 0.002008 |
| mp_fill_2.test | RUN | 0.036943 | 0.067195 | 0.110119 | 0.000854 | 0.000732 | 0.002012 |
| mp_count.test | RUN | 0.448033 | 1.907723 | 1.270501 | 0.001984 | 0.002076 | 0.002000 |
| mp_count_if.test | RUN | 0.443051 | 1.940913 | 1.396478 | 0.001944 | 0.001933 | 0.001730 |
| mp_count_if_q.test | RUN | 0.241570 | 1.264710 | 0.803339 | 0.001756 | 0.001972 | 0.001869 |
| mp_contains.test | RUN | 0.225125 | 0.773996 | 0.720730 | 0.001996 | 0.002159 | 0.002045 |
| mp_starts_with.test | RUN | 0.223129 | 0.778462 | 0.776404 | 0.001966 | 0.002140 | 0.002056 |
| mp_starts_with_sf.test | RUN | 0.219804 | 0.645358 | 0.688085 | 0.001913 | 0.002034 | 0.001957 |
| mp_repeat.test | RUN | 0.317287 | 3.127981 | 1.410064 | 0.002148 | 0.001847 | 0.002046 |
| mp_repeat_2.test | RUN | 0.036217 | 0.073561 | 0.119815 | 0.000798 | 0.000907 | 0.002069 |
| mp_repeat_3.test | RUN | 0.275215 | 0.426697 | 0.697163 | 0.001862 | 0.002113 | 0.001965 |
| mp_product.test | RUN | 0.263846 | 1.927609 | 1.013428 | 0.001942 | 0.002031 | 0.002046 |
| mp_drop.test | RUN | 0.272839 | 2.383214 | 1.181028 | 0.001748 | 0.002158 | 0.002050 |
| mp_drop_2.test | RUN | 0.036817 | 0.072005 | 0.108247 | 0.000796 | 0.000855 | 0.001912 |
| mp_iota.test | RUN | 0.264361 | 2.003869 | 1.029716 | 0.002110 | 0.002174 | 0.002052 |
| mp_iota_2.test | RUN | 0.286036 | 2.404400 | 1.094615 | 0.001936 | 0.002162 | 0.001888 |
| mp_at.test | RUN | 0.232720 | 1.066880 | 0.877821 | 0.001820 | 0.002182 | 0.001908 |
| mp_at_2.test | RUN | 0.035647 | 0.067887 | 0.122108 | 0.000770 | 0.000811 | 0.002002 |
| mp_at_sf.test | RUN | 0.225252 | 0.655586 | 0.718220 | 0.001973 | 0.002071 | 0.001792 |
| mp_take.test | RUN | 0.360510 | 3.114925 | 1.316779 | 0.001983 | 0.002187 | 0.002114 |
| mp_take_2.test | RUN | 0.035496 | 0.071519 | 0.120161 | 0.000844 | 0.000792 | 0.002076 |
| mp_slice.test | RUN | 0.424412 | 3.154660 | 1.773169 | 0.002006 | 0.002109 | 0.002069 |
| mp_slice_2.test | RUN | 0.036168 | 0.074318 | 0.118755 | 0.000813 | 0.000950 | 0.001980 |
| mp_replace.test | RUN | 0.281893 | 1.620009 | 1.167876 | 0.002135 | 0.001974 | 0.002032 |
| mp_replace_if.test | RUN | 0.264574 | 1.436512 | 1.030786 | 0.001874 | 0.001952 | 0.001912 |
| mp_replace_if_q.test | RUN | 0.261987 | 1.422898 | 1.053850 | 0.001910 | 0.002198 | 0.002088 |
| mp_copy_if.test | RUN | 0.267777 | 1.987320 | 1.026802 | 0.002100 | 0.002050 | 0.002020 |
| mp_copy_if_q.test | RUN | 0.277416 | 1.997498 | 1.036570 | 0.002143 | 0.001887 | 0.001825 |
| mp_remove.test | RUN | 0.259305 | 1.354917 | 1.016175 | 0.002067 | 0.002141 | 0.001668 |
| mp_remove_if.test | RUN | 0.265997 | 2.108734 | 1.099869 | 0.001832 | 0.002146 | 0.002031 |
| mp_remove_if_q.test | RUN | 0.277186 | 2.099646 | 1.069804 | 0.002102 | 0.001990 | 0.002151 |
| mp_partition.test | RUN | 0.276285 | 1.976360 | 1.172078 | 0.002160 | 0.002070 | 0.002128 |
| mp_partition_q.test | RUN | 0.271395 | 1.942235 | 1.180844 | 0.001737 | 0.002102 | 0.001888 |
| mp_sort.test | RUN | 0.252335 | 1.430462 | 0.968130 | 0.001976 | 0.002149 | 0.002100 |
| mp_sort_q.test | RUN | 0.256188 | 1.409705 | 1.010549 | 0.002084 | 0.002106 | 0.001669 |
| mp_find.test | RUN | 0.252397 | 1.540928 | 0.901880 | 0.002234 | 0.002054 | 0.001642 |
| mp_find_if.test | RUN | 0.246079 | 1.404240 | 0.828087 | 0.002184 | 0.002034 | 0.001733 |
| mp_find_if_q.test | RUN | 0.261126 | 1.585228 | 1.039842 | 0.001920 | 0.002265 | 0.002110 |
| mp_reverse.test | RUN | 0.518125 | 4.134827 | 1.959932 | 0.002272 | 0.001944 | 0.002058 |
| mp_fold.test | RUN | 0.866154 | 3.189838 | 4.869474 | 0.002010 | 0.002079 | 0.002096 |
| mp_fold_q.test | RUN | 0.253013 | 1.431716 | 0.945734 | 0.002050 | 0.002184 | 0.002103 |
| mp_fold_q_sf.test | RUN | 0.222650 | 0.669126 | 0.725732 | 0.001707 | 0.002060 | 0.002088 |
| mp_reverse_fold.test | RUN | 0.424283 | 3.080669 | 1.388018 | 0.001878 | 0.001998 | 0.002013 |
| mp_reverse_fold_q.test | RUN | 0.255326 | 1.717396 | 1.045290 | 0.001976 | 0.001961 | 0.001626 |
| mp_unique.test | RUN | 0.257982 | 1.558109 | 1.011780 | 0.001748 | 0.002089 | 0.001920 |
| mp_unique_if.test | RUN | 0.458807 | 3.200734 | 1.575502 | 0.001884 | 0.002090 | 0.001938 |
| mp_unique_if_q.test | RUN | 0.394330 | 3.143884 | 1.270386 | 0.001870 | 0.001912 | 0.001923 |
| mp_all_of.test | RUN | 0.621349 | 1.745100 | 1.705134 | 0.002194 | 0.002082 | 0.001928 |
| mp_all_of_q.test | RUN | 0.224074 | 0.769484 | 0.714698 | 0.002072 | 0.002106 | 0.001837 |
| mp_any_of.test | RUN | 0.582638 | 1.808863 | 1.636524 | 0.001966 | 0.001875 | 0.002090 |
| mp_any_of_q.test | RUN | 0.223778 | 0.740077 | 0.774047 | 0.002162 | 0.002044 | 0.002028 |
| mp_none_of.test | RUN | 0.584884 | 1.805184 | 1.707426 | 0.001835 | 0.002179 | 0.001856 |
| mp_none_of_q.test | RUN | 0.224432 | 0.762398 | 0.682296 | 0.002168 | 0.002256 | 0.002118 |
| mp_replace_at.test | RUN | 0.274723 | 1.554403 | 1.083353 | 0.002168 | 0.001619 | 0.001789 |
| mp_replace_at_c.test | RUN | 0.272397 | 1.521151 | 1.071565 | 0.002014 | 0.001982 | 0.002065 |
| mp_for_each.test | RUN | 0.263658 | 1.129221 | 1.269387 | 0.001898 | 0.001986 | 0.001926 |
| mp_insert.test | RUN | 0.400943 | 3.137663 | 1.625913 | 0.002115 | 0.002130 | 0.002089 |
| mp_insert_2.test | RUN | 0.037029 | 0.067514 | 0.125558 | 0.000780 | 0.000818 | 0.002082 |
| mp_erase.test | RUN | 0.431917 | 3.321039 | 1.861119 | 0.002074 | 0.002095 | 0.002090 |
| mp_erase_2.test | RUN | 0.036661 | 0.074119 | 0.117503 | 0.000796 | 0.000930 | 0.001685 |
| mp_with_index.test | RUN | 0.600143 | 6.804273 | 4.105399 | 0.002865 | 0.002610 | 0.002447 |
| mp_with_index_cx.test | RUN | 0.004336 | 0.021827 | 0.031986 | 0.000711 | 0.000853 | 0.002084 |
| mp_from_sequence.test | RUN | 0.272096 | 1.789712 | 1.098423 | 0.002088 | 0.001974 | 0.001933 |
| mp_from_sequence_2.test | RUN | 0.281679 | 2.086781 | 1.216611 | 0.002017 | 0.002105 | 0.002014 |
| mp_from_sequence_3.test | RUN | 0.235157 | 0.918791 | 0.873978 | 0.001572 | 0.002178 | 0.001795 |
| mp_min_element.test | RUN | 0.230258 | 0.832988 | 0.831402 | 0.001843 | 0.002055 | 0.001807 |
| mp_min_element_2.test | RUN | 0.035556 | 0.073548 | 0.114600 | 0.000813 | 0.000800 | 0.001690 |
| mp_min_element_q.test | RUN | 0.234528 | 0.833252 | 0.747909 | 0.001902 | 0.001867 | 0.002068 |
| mp_min_element_q_2.test | RUN | 0.036889 | 0.074802 | 0.123098 | 0.000754 | 0.000794 | 0.002054 |
| mp_max_element.test | RUN | 0.235306 | 0.857477 | 0.780113 | 0.001935 | 0.002056 | 0.002178 |
| mp_max_element_2.test | RUN | 0.037879 | 0.071454 | 0.123086 | 0.000707 | 0.000835 | 0.001513 |
| mp_max_element_q.test | RUN | 0.231249 | 0.848494 | 0.736383 | 0.001982 | 0.002157 | 0.002080 |
| mp_max_element_q_2.test | RUN | 0.036708 | 0.072582 | 0.107784 | 0.000860 | 0.000915 | 0.002004 |
| mp_nth_element.test | RUN | 0.257362 | 1.188315 | 0.966454 | 0.002082 | 0.002024 | 0.001978 |
| mp_nth_element_q.test | RUN | 0.259366 | 1.172266 | 0.903834 | 0.001860 | 0.002008 | 0.001703 |
| mp_back.test | RUN | 0.247267 | 0.975041 | 0.899599 | 0.001998 | 0.002013 | 0.002002 |
| mp_back_2.test | RUN | 0.034945 | 0.071668 | 0.121248 | 0.000725 | 0.000724 | 0.002067 |
| mp_pop_back.test | RUN | 0.656772 | 6.355926 | 1.814937 | 0.001926 | 0.002054 | 0.001972 |
| mp_pop_back_2.test | RUN | 0.035763 | 0.070012 | 0.109066 | 0.000971 | 0.000716 | 0.001828 |
| mp_flatten.test | RUN | 0.290581 | 2.268657 | 1.306610 | 0.002000 | 0.002109 | 0.001827 |
| mp_rotate_left.test | RUN | 0.289134 | 2.439324 | 1.263554 | 0.002022 | 0.002202 | 0.001762 |
| mp_rotate_right.test | RUN | 0.293455 | 2.443381 | 1.274108 | 0.002016 | 0.001883 | 0.001861 |
| mp_power_set.test | RUN | 0.279785 | 2.311902 | 1.264262 | 0.002164 | 0.002070 | 0.001888 |
| mp_partial_sum.test | RUN | 0.370932 | 3.103218 | 1.430237 | 0.001709 | 0.002094 | 0.001991 |
| mp_iterate.test | RUN | 0.255547 | 0.957885 | 1.031565 | 0.002080 | 0.002138 | 0.001760 |
| mp_pairwise_fold.test | RUN | 0.287910 | 2.141540 | 1.292671 | 0.001818 | 0.001955 | 0.001710 |
| mp_pairwise_fold_q.test | RUN | 0.229889 | 0.637119 | 0.776904 | 0.002178 | 0.002134 | 0.001948 |
| mp_sliding_fold.test | RUN | 0.526142 | 4.121085 | 2.333469 | 0.002087 | 0.002058 | 0.002092 |
| mp_sliding_fold_q.test | RUN | 0.527391 | 4.117439 | 2.345938 | 0.001929 | 0.001821 | 0.002036 |
| mp_intersperse.test | RUN | 0.273703 | 1.548126 | 1.149802 | 0.002141 | 0.002116 | 0.002108 |
| mp_split.test | RUN | 0.379415 | 2.986867 | 1.548466 | 0.002123 | 0.002135 | 0.002040 |
| mp_join.test | RUN | 0.301335 | 2.489571 | 1.324561 | 0.002101 | 0.002087 | 0.002008 |
| integral.test | RUN | 0.232946 | 1.126507 | 0.860813 | 0.002070 | 0.002221 | 0.001860 |
| mp_value.test | RUN | 0.015763 | 0.037753 | 0.056706 | 0.000925 | 0.000858 | 0.001909 |
| mp_identity.test | RUN | 0.223610 | 1.019759 | 0.817417 | 0.001618 | 0.001820 | 0.002134 |
| mp_inherit.test | RUN | 0.216482 | 0.732775 | 0.764110 | 0.002192 | 0.002160 | 0.001962 |
| mp_if.test | RUN | 0.218398 | 0.824398 | 0.764952 | 0.002008 | 0.002074 | 0.002043 |
| mp_if_sf.test | RUN | 0.205723 | 0.638604 | 0.706389 | 0.002010 | 0.002179 | 0.002038 |
| mp_eval_if.test | RUN | 0.218004 | 0.900394 | 0.781706 | 0.002070 | 0.002171 | 0.002090 |
| mp_eval_if_sf.test | RUN | 0.211130 | 0.633485 | 0.714201 | 0.002183 | 0.001811 | 0.001959 |
| mp_valid.test | RUN | 0.211092 | 0.644435 | 0.740942 | 0.002174 | 0.002025 | 0.002076 |
| mp_defer.test | RUN | 0.226996 | 1.081733 | 0.811512 | 0.001901 | 0.002076 | 0.002055 |
| mp_quote.test | RUN | 0.226425 | 1.085770 | 0.854033 | 0.002150 | 0.002108 | 0.002061 |
| mp_invoke_q.test | RUN | 0.251152 | 1.418307 | 0.941385 | 0.002129 | 0.002161 | 0.001980 |
| mp_invoke_q_sf.test | RUN | 0.212566 | 0.655218 | 0.694516 | 0.001898 | 0.002190 | 0.002115 |
| mp_quote_trait.test | RUN | 0.234421 | 1.203121 | 0.821814 | 0.002085 | 0.001870 | 0.002032 |
| mp_cond.test | RUN | 0.223508 | 0.718960 | 0.745198 | 0.002098 | 0.002154 | 0.001903 |
| mp_cond_sf.test | RUN | 0.213585 | 0.637445 | 0.712784 | 0.002132 | 0.002012 | 0.001942 |
| mp_not_fn.test | RUN | 0.208752 | 0.625430 | 0.654560 | 0.001914 | 0.002201 | 0.001892 |
| mp_eval_if_not.test | RUN | 0.218373 | 0.883198 | 0.758343 | 0.002063 | 0.002075 | 0.001858 |
| mp_eval_or.test | RUN | 0.206569 | 0.485276 | 0.726346 | 0.002078 | 0.002084 | 0.001921 |
| mp_compose.test | RUN | 0.238811 | 1.472987 | 0.919724 | 0.002050 | 0.001996 | 0.002082 |
| mp_valid_and_true.test | RUN | 0.216560 | 0.765465 | 0.710309 | 0.001896 | 0.002076 | 0.001744 |
| mp_compose_sf.test | COMPILE | 0.050094 | 0.089267 | 0.153404 | — | — | — |
| integer_sequence.test | RUN | 0.258770 | 1.447800 | 1.059657 | 0.001896 | 0.001872 | 0.001894 |
| tuple_for_each.test | RUN | 0.212798 | 0.572480 | 0.796997 | 0.001874 | 0.002202 | 0.001874 |
| tuple_for_each_cx.test | COMPILE | 0.040820 | 0.079363 | 0.117129 | — | — | — |
| tuple_apply.test | RUN | 0.220626 | 0.545121 | 0.773940 | 0.001892 | 0.002176 | 0.002002 |
| tuple_apply_cx.test | COMPILE | 0.057184 | 0.115141 | 0.192316 | — | — | — |
| construct_from_tuple.test | RUN | 0.217092 | 0.589711 | 0.739803 | 0.002421 | 0.002196 | 0.002066 |
| construct_from_tuple_cx.test | COMPILE | 0.060160 | 0.118973 | 0.168730 | — | — | — |
| tuple_transform.test | RUN | 0.343547 | 1.183401 | 1.484642 | 0.002039 | 0.001855 | 0.001952 |
| tuple_transform_2.test | RUN | 0.306409 | 0.873758 | 1.329321 | 0.001968 | 0.002156 | 0.002039 |
| tuple_transform_cx.test | COMPILE | 0.052266 | 0.112637 | 0.187954 | — | — | — |
| mp_set_contains.test | RUN | 0.226233 | 0.771658 | 0.779806 | 0.001899 | 0.002032 | 0.002066 |
| mp_set_push_back.test | RUN | 0.282619 | 2.332738 | 1.275972 | 0.002160 | 0.002057 | 0.002036 |
| mp_set_push_front.test | RUN | 0.364670 | 2.792780 | 1.427299 | 0.002088 | 0.002036 | 0.002082 |
| mp_is_set.test | RUN | 0.225231 | 0.775351 | 0.764745 | 0.002006 | 0.002156 | 0.001995 |
| mp_set_union.test | RUN | 0.274398 | 1.991853 | 1.195574 | 0.001969 | 0.002152 | 0.002102 |
| mp_set_union_sf.test | RUN | 0.219931 | 0.624065 | 0.733263 | 0.002114 | 0.002130 | 0.001878 |
| mp_set_difference.test | RUN | 0.254351 | 1.550575 | 1.025375 | 0.001960 | 0.002183 | 0.002009 |
| mp_set_difference_sf.test | RUN | 0.212669 | 0.621196 | 0.699050 | 0.001864 | 0.002055 | 0.001667 |
| mp_set_intersection.test | RUN | 0.251603 | 1.531567 | 0.999575 | 0.002004 | 0.002038 | 0.002050 |
| mp_set_intersection_sf.test | RUN | 0.215651 | 0.631340 | 0.705457 | 0.002028 | 0.001956 | 0.002072 |
| mp_all.test | RUN | 0.220222 | 0.771755 | 0.734692 | 0.001992 | 0.002204 | 0.002102 |
| mp_all_2.test | RUN | 0.631548 | 1.619634 | 1.685447 | 0.002206 | 0.002187 | 0.002002 |
| mp_and.test | RUN | 0.225972 | 0.777548 | 0.722215 | 0.002109 | 0.002062 | 0.002084 |
| mp_any.test | RUN | 0.218287 | 0.775695 | 0.745274 | 0.001873 | 0.002311 | 0.002110 |
| mp_any_2.test | RUN | 0.631130 | 1.600476 | 1.620572 | 0.002164 | 0.002234 | 0.001737 |
| mp_or.test | RUN | 0.227828 | 0.727371 | 0.765242 | 0.002112 | 0.002180 | 0.002010 |
| mp_same.test | RUN | 0.421509 | 1.257593 | 1.212175 | 0.001824 | 0.002166 | 0.001940 |
| mp_plus.test | RUN | 0.235824 | 0.852996 | 0.777314 | 0.001962 | 0.001787 | 0.001764 |
| mp_less.test | RUN | 0.224266 | 0.755709 | 0.695391 | 0.002246 | 0.002157 | 0.001971 |
| mp_min.test | RUN | 0.211870 | 0.697489 | 0.758529 | 0.001944 | 0.002250 | 0.001782 |
| mp_max.test | RUN | 0.217233 | 0.770640 | 0.777583 | 0.001826 | 0.002239 | 0.001910 |
| mp_similar.test | RUN | 0.221394 | 0.781166 | 0.736642 | 0.001964 | 0.002026 | 0.001858 |
| mp_map_find.test | RUN | 0.253216 | 1.384706 | 0.974419 | 0.002219 | 0.002032 | 0.002041 |
| mp_map_find_2.test | RUN | 0.234987 | 0.538545 | 0.873124 | 0.002046 | 0.002180 | 0.001894 |
| mp_map_find_3.test | RUN | 0.237583 | 0.548649 | 0.869293 | 0.001784 | 0.001814 | 0.001504 |
| mp_map_find_4.test | RUN | 0.224201 | 0.506667 | 0.741405 | 0.001983 | 0.001700 | 0.002248 |
| mp_map_contains.test | RUN | 0.227296 | 0.795625 | 0.784264 | 0.002192 | 0.002123 | 0.002038 |
| mp_map_insert.test | RUN | 0.297388 | 2.607699 | 1.353136 | 0.002023 | 0.002162 | 0.001880 |
| mp_map_replace.test | RUN | 0.385586 | 2.951913 | 1.557507 | 0.001916 | 0.002196 | 0.001688 |
| mp_map_erase.test | RUN | 0.293693 | 2.196157 | 1.334186 | 0.002144 | 0.002270 | 0.001840 |
| mp_map_update.test | RUN | 0.253883 | 1.425225 | 1.016023 | 0.002029 | 0.002144 | 0.001843 |
| mp_map_update_q.test | RUN | 0.259766 | 1.433270 | 1.036810 | 0.002017 | 0.001714 | 0.001921 |
| mp_map_keys.test | RUN | 0.256032 | 1.276684 | 1.021574 | 0.001998 | 0.002208 | 0.001665 |
| mp_is_map.test | RUN | 0.235269 | 0.788183 | 0.830849 | 0.001714 | 0.001968 | 0.001729 |
| mp_bind.test | RUN | 0.278789 | 2.295742 | 1.191027 | 0.002080 | 0.001949 | 0.002075 |
| mp_bind_q.test | RUN | 0.248593 | 1.421546 | 0.933648 | 0.002002 | 0.002108 | 0.001830 |
| mp_bind_front.test | RUN | 0.241113 | 1.543392 | 0.963332 | 0.002166 | 0.001998 | 0.001772 |
| mp_bind_back.test | RUN | 0.246779 | 1.559404 | 0.962926 | 0.001678 | 0.001872 | 0.001796 |
| mp_lambda.test | RUN | 0.538025 | 4.657655 | 2.420847 | 0.002134 | 0.001566 | 0.002012 |
| mpl.test | RUN | 0.488122 | 1.270584 | 1.973381 | 0.001819 | 0.001984 | 0.002069 |
| mpl_list.test | RUN | 0.279422 | 0.937015 | 0.941475 | 0.001944 | 0.001920 | 0.002008 |
| mpl_tuple.test | RUN | 0.283124 | 0.935348 | 0.942379 | 0.001612 | 0.001650 | 0.001650 |
| version.test | RUN | 0.142202 | 0.347392 | 0.460621 | 0.001890 | 0.001860 | 0.001536 |
| mp11_version.test | RUN | 0.175060 | 0.390147 | 0.573153 | 0.001849 | 0.001944 | 0.001996 |
| list_version.test | RUN | 0.146078 | 0.354917 | 0.450587 | 0.001835 | 0.001936 | 0.001893 |
| algorithm_version.test | RUN | 0.166321 | 0.368840 | 0.534573 | 0.001956 | 0.001803 | 0.001948 |
| integral_version.test | RUN | 0.139980 | 0.349496 | 0.489427 | 0.001861 | 0.001836 | 0.001724 |
| utility_version.test | RUN | 0.143941 | 0.354263 | 0.438777 | 0.001854 | 0.001965 | 0.001772 |
| function_version.test | RUN | 0.148944 | 0.363735 | 0.502484 | 0.001580 | 0.001823 | 0.002005 |
| map_version.test | RUN | 0.159917 | 0.375966 | 0.530823 | 0.002039 | 0.001789 | 0.002099 |
| set_version.test | RUN | 0.144397 | 0.359116 | 0.496565 | 0.002180 | 0.002037 | 0.001798 |
| bind_version.test | RUN | 0.161542 | 0.375814 | 0.533848 | 0.001962 | 0.001988 | 0.002124 |
| integer_sequence_version.test | RUN | 0.141381 | 0.351582 | 0.376434 | 0.001992 | 0.001922 | 0.001528 |
| tuple_version.test | RUN | 0.160580 | 0.382430 | 0.487692 | 0.001594 | 0.002245 | 0.001566 |
| mpl_version.test | RUN | 0.125050 | 0.276946 | 0.492216 | 0.001591 | 0.001582 | 0.001462 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.997× | 0.997×, 0.997× | 0.999× |
| clang | 1.083× | 1.086×, 1.081× | 0.998× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1359 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/43701438216).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| algorithm_version.test | 10 | 0.001222s | 0.001193s | 0.001280s | byte equality observed |
| bind_version.test | 10 | 0.001210s | 0.001203s | 0.001237s | byte equality observed |
| construct_from_tuple.test | 10 | 0.001223s | 0.001204s | 0.001233s | byte equality observed |
| function_version.test | 10 | 0.001220s | 0.001194s | 0.001228s | byte equality observed |
| integer_sequence.test | 10 | 0.001220s | 0.001228s | 0.001208s | byte equality observed |
| integer_sequence_version.test | 10 | 0.001209s | 0.001235s | 0.001258s | byte equality observed |
| integral.test | 10 | 0.001221s | 0.001202s | 0.001288s | byte equality observed |
| integral_version.test | 10 | 0.001216s | 0.001203s | 0.001273s | byte equality observed |
| list_version.test | 10 | 0.001225s | 0.001190s | 0.001319s | byte equality observed |
| map_version.test | 10 | 0.001231s | 0.001188s | 0.001281s | byte equality observed |
| mp11_version.test | 10 | 0.001223s | 0.001193s | 0.001296s | byte equality observed |
| mp_all.test | 10 | 0.001272s | 0.001197s | 0.001307s | byte equality observed |
| mp_all_2.test | 10 | 0.001293s | 0.001194s | 0.001288s | byte equality observed |
| mp_all_of.test | 10 | 0.001300s | 0.001186s | 0.001261s | byte equality observed |
| mp_all_of_q.test | 10 | 0.001290s | 0.001215s | 0.001254s | byte equality observed |
| mp_and.test | 10 | 0.001297s | 0.001204s | 0.001276s | byte equality observed |
| mp_any.test | 10 | 0.001296s | 0.001205s | 0.001257s | byte equality observed |
| mp_any_2.test | 10 | 0.001275s | 0.001195s | 0.001267s | byte equality observed |
| mp_any_of.test | 10 | 0.001270s | 0.001220s | 0.001278s | byte equality observed |
| mp_any_of_q.test | 10 | 0.001275s | 0.001297s | 0.001258s | byte equality observed |
| mp_append.test | 10 | 0.001263s | 0.001312s | 0.001287s | byte equality observed |
| mp_append_2.test | 10 | 0.001324s | 0.001317s | 0.001296s | byte equality observed |
| mp_append_3.test | 10 | 0.000592s | 0.000583s | 0.001240s | byte equality observed |
| mp_append_sf.test | 10 | 0.001296s | 0.001257s | 0.001249s | byte equality observed |
| mp_apply_q.test | 10 | 0.001281s | 0.001285s | 0.001267s | byte equality observed |
| mp_apply_q_sf.test | 10 | 0.001289s | 0.001284s | 0.001271s | byte equality observed |
| mp_assign.test | 10 | 0.001304s | 0.001312s | 0.001286s | byte equality observed |
| mp_assign_2.test | 10 | 0.000602s | 0.000576s | 0.001262s | byte equality observed |
| mp_at.test | 10 | 0.001326s | 0.001310s | 0.001280s | byte equality observed |
| mp_at_2.test | 10 | 0.000596s | 0.000589s | 0.001300s | byte equality observed |
| mp_at_sf.test | 10 | 0.001294s | 0.001266s | 0.001275s | byte equality observed |
| mp_back.test | 10 | 0.001289s | 0.001299s | 0.001272s | byte equality observed |
| mp_back_2.test | 10 | 0.000596s | 0.000581s | 0.001236s | byte equality observed |
| mp_bind.test | 10 | 0.001283s | 0.001290s | 0.001298s | byte equality observed |
| mp_bind_back.test | 10 | 0.001279s | 0.001297s | 0.001284s | byte equality observed |
| mp_bind_front.test | 10 | 0.001272s | 0.001266s | 0.001300s | byte equality observed |
| mp_bind_q.test | 10 | 0.001246s | 0.001279s | 0.001263s | byte equality observed |
| mp_clear.test | 10 | 0.001289s | 0.001335s | 0.001278s | byte equality observed |
| mp_clear_2.test | 10 | 0.000593s | 0.000598s | 0.001276s | byte equality observed |
| mp_compose.test | 10 | 0.001291s | 0.001287s | 0.001228s | byte equality observed |
| mp_cond.test | 10 | 0.001265s | 0.001310s | 0.001252s | byte equality observed |
| mp_cond_sf.test | 10 | 0.001273s | 0.001296s | 0.001298s | byte equality observed |
| mp_contains.test | 10 | 0.001283s | 0.001323s | 0.001279s | byte equality observed |
| mp_copy_if.test | 10 | 0.001309s | 0.001297s | 0.001279s | byte equality observed |
| mp_copy_if_q.test | 10 | 0.001290s | 0.001308s | 0.001288s | byte equality observed |
| mp_count.test | 10 | 0.001286s | 0.001245s | 0.001290s | byte equality observed |
| mp_count_if.test | 10 | 0.001274s | 0.001273s | 0.001266s | byte equality observed |
| mp_count_if_q.test | 10 | 0.001282s | 0.001268s | 0.001286s | byte equality observed |
| mp_defer.test | 10 | 0.001304s | 0.001281s | 0.001294s | byte equality observed |
| mp_drop.test | 10 | 0.001314s | 0.001289s | 0.001278s | byte equality observed |
| mp_drop_2.test | 10 | 0.000589s | 0.000577s | 0.001265s | byte equality observed |
| mp_empty.test | 10 | 0.001285s | 0.001264s | 0.001280s | byte equality observed |
| mp_empty_2.test | 10 | 0.000583s | 0.000575s | 0.001272s | byte equality observed |
| mp_erase.test | 10 | 0.001334s | 0.001314s | 0.001260s | byte equality observed |
| mp_erase_2.test | 10 | 0.000593s | 0.000577s | 0.001284s | byte equality observed |
| mp_eval_if.test | 10 | 0.001280s | 0.001269s | 0.001275s | byte equality observed |
| mp_eval_if_not.test | 10 | 0.001288s | 0.001291s | 0.001278s | byte equality observed |
| mp_eval_if_sf.test | 10 | 0.001315s | 0.001320s | 0.001269s | byte equality observed |
| mp_eval_or.test | 10 | 0.001309s | 0.001283s | 0.001273s | byte equality observed |
| mp_fill.test | 10 | 0.001296s | 0.001275s | 0.001234s | byte equality observed |
| mp_fill_2.test | 10 | 0.000590s | 0.000581s | 0.001272s | byte equality observed |
| mp_filter.test | 10 | 0.001313s | 0.001285s | 0.001279s | byte equality observed |
| mp_find.test | 10 | 0.001273s | 0.001371s | 0.001301s | byte equality observed |
| mp_find_if.test | 10 | 0.001293s | 0.001306s | 0.001256s | byte equality observed |
| mp_find_if_q.test | 10 | 0.001288s | 0.001303s | 0.001263s | byte equality observed |
| mp_flatten.test | 10 | 0.001314s | 0.001289s | 0.001243s | byte equality observed |
| mp_fold.test | 10 | 0.001323s | 0.001295s | 0.001299s | byte equality observed |
| mp_fold_q.test | 10 | 0.001302s | 0.001302s | 0.001267s | byte equality observed |
| mp_fold_q_sf.test | 10 | 0.001341s | 0.001264s | 0.001264s | byte equality observed |
| mp_for_each.test | 10 | 0.001287s | 0.001258s | 0.001303s | byte equality observed |
| mp_from_sequence.test | 10 | 0.001339s | 0.001293s | 0.001279s | byte equality observed |
| mp_from_sequence_2.test | 10 | 0.001309s | 0.001251s | 0.001254s | byte equality observed |
| mp_from_sequence_3.test | 10 | 0.001294s | 0.001261s | 0.001257s | byte equality observed |
| mp_front.test | 10 | 0.001330s | 0.001301s | 0.001265s | byte equality observed |
| mp_front_2.test | 10 | 0.000587s | 0.000600s | 0.001267s | byte equality observed |
| mp_identity.test | 10 | 0.001284s | 0.001281s | 0.001261s | byte equality observed |
| mp_if.test | 10 | 0.001292s | 0.001286s | 0.001316s | byte equality observed |
| mp_if_sf.test | 10 | 0.001286s | 0.001305s | 0.001303s | byte equality observed |
| mp_inherit.test | 10 | 0.001298s | 0.001311s | 0.001305s | byte equality observed |
| mp_insert.test | 10 | 0.001336s | 0.001330s | 0.001285s | byte equality observed |
| mp_insert_2.test | 10 | 0.000601s | 0.000598s | 0.001240s | byte equality observed |
| mp_intersperse.test | 10 | 0.001280s | 0.001268s | 0.001288s | byte equality observed |
| mp_invoke_q.test | 10 | 0.001339s | 0.001276s | 0.001322s | byte equality observed |
| mp_invoke_q_sf.test | 10 | 0.001289s | 0.001244s | 0.001296s | byte equality observed |
| mp_iota.test | 10 | 0.001297s | 0.001263s | 0.001303s | byte equality observed |
| mp_iota_2.test | 10 | 0.001306s | 0.001299s | 0.001265s | byte equality observed |
| mp_is_list.test | 10 | 0.001305s | 0.001282s | 0.001300s | byte equality observed |
| mp_is_map.test | 10 | 0.001292s | 0.001263s | 0.001283s | byte equality observed |
| mp_is_set.test | 10 | 0.001295s | 0.001314s | 0.001284s | byte equality observed |
| mp_is_value_list.test | 10 | 0.001287s | 0.001280s | 0.001280s | byte equality observed |
| mp_iterate.test | 10 | 0.001305s | 0.001250s | 0.001242s | byte equality observed |
| mp_join.test | 10 | 0.001272s | 0.001270s | 0.001261s | byte equality observed |
| mp_lambda.test | 10 | 0.001316s | 0.001270s | 0.001266s | byte equality observed |
| mp_less.test | 10 | 0.001289s | 0.001309s | 0.001280s | byte equality observed |
| mp_list_c.test | 10 | 0.001290s | 0.001316s | 0.001278s | byte equality observed |
| mp_list_v.test | 10 | 0.000593s | 0.000574s | 0.001271s | byte equality observed |
| mp_map_contains.test | 10 | 0.001312s | 0.001299s | 0.001250s | byte equality observed |
| mp_map_erase.test | 10 | 0.001286s | 0.001291s | 0.001283s | byte equality observed |
| mp_map_find.test | 10 | 0.001281s | 0.001294s | 0.001324s | byte equality observed |
| mp_map_find_2.test | 10 | 0.001286s | 0.001280s | 0.001299s | byte equality observed |
| mp_map_find_3.test | 10 | 0.001310s | 0.001239s | 0.001342s | byte equality observed |
| mp_map_find_4.test | 10 | 0.001317s | 0.001255s | 0.001290s | byte equality observed |
| mp_map_insert.test | 10 | 0.001322s | 0.001252s | 0.001324s | byte equality observed |
| mp_map_keys.test | 10 | 0.001282s | 0.001243s | 0.001302s | byte equality observed |
| mp_map_replace.test | 10 | 0.001314s | 0.001264s | 0.001274s | byte equality observed |
| mp_map_update.test | 10 | 0.001274s | 0.001282s | 0.001284s | byte equality observed |
| mp_map_update_q.test | 10 | 0.001274s | 0.001286s | 0.001273s | byte equality observed |
| mp_max.test | 10 | 0.001300s | 0.001281s | 0.001292s | byte equality observed |
| mp_max_element.test | 10 | 0.001312s | 0.001319s | 0.001252s | byte equality observed |
| mp_max_element_2.test | 10 | 0.000595s | 0.000576s | 0.001280s | byte equality observed |
| mp_max_element_q.test | 10 | 0.001293s | 0.001313s | 0.001247s | byte equality observed |
| mp_max_element_q_2.test | 10 | 0.000604s | 0.000578s | 0.001288s | byte equality observed |
| mp_min.test | 10 | 0.001285s | 0.001265s | 0.001256s | byte equality observed |
| mp_min_element.test | 10 | 0.001311s | 0.001294s | 0.001284s | byte equality observed |
| mp_min_element_2.test | 10 | 0.000587s | 0.000588s | 0.001266s | byte equality observed |
| mp_min_element_q.test | 10 | 0.001307s | 0.001288s | 0.001307s | byte equality observed |
| mp_min_element_q_2.test | 10 | 0.000601s | 0.000591s | 0.001261s | byte equality observed |
| mp_none_of.test | 10 | 0.001289s | 0.001275s | 0.001272s | byte equality observed |
| mp_none_of_q.test | 10 | 0.001280s | 0.001297s | 0.001298s | byte equality observed |
| mp_not_fn.test | 10 | 0.001278s | 0.001283s | 0.001276s | byte equality observed |
| mp_nth_element.test | 10 | 0.001275s | 0.001288s | 0.001332s | byte equality observed |
| mp_nth_element_q.test | 10 | 0.001281s | 0.001257s | 0.001322s | byte equality observed |
| mp_or.test | 10 | 0.001274s | 0.001304s | 0.001300s | byte equality observed |
| mp_pairwise_fold.test | 10 | 0.001296s | 0.001287s | 0.001260s | byte equality observed |
| mp_pairwise_fold_q.test | 10 | 0.001289s | 0.001289s | 0.001302s | byte equality observed |
| mp_partial_sum.test | 10 | 0.001308s | 0.001315s | 0.001274s | byte equality observed |
| mp_partition.test | 10 | 0.001310s | 0.001309s | 0.001286s | byte equality observed |
| mp_partition_q.test | 10 | 0.001298s | 0.001329s | 0.001273s | byte equality observed |
| mp_plus.test | 10 | 0.001254s | 0.001269s | 0.001304s | byte equality observed |
| mp_pop_back.test | 10 | 0.001303s | 0.001337s | 0.001281s | byte equality observed |
| mp_pop_back_2.test | 10 | 0.000589s | 0.000595s | 0.001247s | byte equality observed |
| mp_pop_front.test | 10 | 0.001304s | 0.001328s | 0.001262s | byte equality observed |
| mp_pop_front_2.test | 10 | 0.000590s | 0.000598s | 0.001300s | byte equality observed |
| mp_power_set.test | 10 | 0.001291s | 0.001313s | 0.001280s | byte equality observed |
| mp_product.test | 10 | 0.001276s | 0.001293s | 0.001255s | byte equality observed |
| mp_push_back.test | 10 | 0.001280s | 0.001315s | 0.001279s | byte equality observed |
| mp_push_back_2.test | 10 | 0.000597s | 0.000586s | 0.001256s | byte equality observed |
| mp_push_front.test | 10 | 0.001306s | 0.001326s | 0.001259s | byte equality observed |
| mp_push_front_2.test | 10 | 0.000593s | 0.000574s | 0.001245s | byte equality observed |
| mp_quote.test | 10 | 0.001287s | 0.001294s | 0.001280s | byte equality observed |
| mp_quote_trait.test | 10 | 0.001281s | 0.001298s | 0.001310s | byte equality observed |
| mp_remove.test | 10 | 0.001299s | 0.001310s | 0.001271s | byte equality observed |
| mp_remove_if.test | 10 | 0.001313s | 0.001288s | 0.001314s | byte equality observed |
| mp_remove_if_q.test | 10 | 0.001267s | 0.001284s | 0.001314s | byte equality observed |
| mp_rename.test | 10 | 0.001289s | 0.001354s | 0.001286s | byte equality observed |
| mp_rename_2.test | 10 | 0.000604s | 0.000602s | 0.001296s | byte equality observed |
| mp_rename_v.test | 10 | 0.000595s | 0.000597s | 0.001243s | byte equality observed |
| mp_repeat.test | 10 | 0.001312s | 0.001333s | 0.001269s | byte equality observed |
| mp_repeat_2.test | 10 | 0.000586s | 0.000590s | 0.001329s | byte equality observed |
| mp_repeat_3.test | 10 | 0.001287s | 0.001233s | 0.001324s | byte equality observed |
| mp_replace.test | 10 | 0.001270s | 0.001300s | 0.001295s | byte equality observed |
| mp_replace_at.test | 10 | 0.001279s | 0.001257s | 0.001270s | byte equality observed |
| mp_replace_at_c.test | 10 | 0.001275s | 0.001285s | 0.001303s | byte equality observed |
| mp_replace_front.test | 10 | 0.001301s | 0.001297s | 0.001269s | byte equality observed |
| mp_replace_front_2.test | 10 | 0.000585s | 0.000581s | 0.001281s | byte equality observed |
| mp_replace_if.test | 10 | 0.001268s | 0.001282s | 0.001281s | byte equality observed |
| mp_replace_if_q.test | 10 | 0.001267s | 0.001295s | 0.001286s | byte equality observed |
| mp_replace_second.test | 10 | 0.001299s | 0.001302s | 0.001260s | byte equality observed |
| mp_replace_second_2.test | 10 | 0.000591s | 0.000589s | 0.001280s | byte equality observed |
| mp_replace_third.test | 10 | 0.001311s | 0.001319s | 0.001250s | byte equality observed |
| mp_replace_third_2.test | 10 | 0.000601s | 0.000587s | 0.001233s | byte equality observed |
| mp_reverse.test | 10 | 0.001307s | 0.001337s | 0.001275s | byte equality observed |
| mp_reverse_fold.test | 10 | 0.001300s | 0.001328s | 0.001264s | byte equality observed |
| mp_reverse_fold_q.test | 10 | 0.001273s | 0.001302s | 0.001261s | byte equality observed |
| mp_rotate_left.test | 10 | 0.001313s | 0.001298s | 0.001295s | byte equality observed |
| mp_rotate_right.test | 10 | 0.001299s | 0.001305s | 0.001281s | byte equality observed |
| mp_same.test | 10 | 0.001269s | 0.001287s | 0.001258s | byte equality observed |
| mp_second.test | 10 | 0.001319s | 0.001323s | 0.001269s | byte equality observed |
| mp_second_2.test | 10 | 0.000576s | 0.000591s | 0.001302s | byte equality observed |
| mp_set_contains.test | 10 | 0.001284s | 0.001306s | 0.001313s | byte equality observed |
| mp_set_difference.test | 10 | 0.001308s | 0.001341s | 0.001327s | byte equality observed |
| mp_set_difference_sf.test | 10 | 0.001280s | 0.001276s | 0.001289s | byte equality observed |
| mp_set_intersection.test | 10 | 0.001255s | 0.001281s | 0.001310s | byte equality observed |
| mp_set_intersection_sf.test | 10 | 0.001267s | 0.001272s | 0.001319s | byte equality observed |
| mp_set_push_back.test | 10 | 0.001277s | 0.001292s | 0.001274s | byte equality observed |
| mp_set_push_front.test | 10 | 0.001323s | 0.001267s | 0.001283s | byte equality observed |
| mp_set_union.test | 10 | 0.001296s | 0.001258s | 0.001338s | byte equality observed |
| mp_set_union_sf.test | 10 | 0.001279s | 0.001293s | 0.001265s | byte equality observed |
| mp_similar.test | 10 | 0.001276s | 0.001306s | 0.001300s | byte equality observed |
| mp_size.test | 10 | 0.001314s | 0.001306s | 0.001266s | byte equality observed |
| mp_size_2.test | 10 | 0.000580s | 0.000599s | 0.001231s | byte equality observed |
| mp_slice.test | 10 | 0.001330s | 0.001313s | 0.001279s | byte equality observed |
| mp_slice_2.test | 10 | 0.000590s | 0.000588s | 0.001248s | byte equality observed |
| mp_sliding_fold.test | 10 | 0.001301s | 0.001330s | 0.001323s | byte equality observed |
| mp_sliding_fold_q.test | 10 | 0.001290s | 0.001311s | 0.001299s | byte equality observed |
| mp_sort.test | 10 | 0.001245s | 0.001291s | 0.001287s | byte equality observed |
| mp_sort_q.test | 10 | 0.001284s | 0.001266s | 0.001296s | byte equality observed |
| mp_split.test | 10 | 0.001299s | 0.001301s | 0.001295s | byte equality observed |
| mp_starts_with.test | 10 | 0.001288s | 0.001290s | 0.001314s | byte equality observed |
| mp_starts_with_sf.test | 10 | 0.001252s | 0.001272s | 0.001295s | byte equality observed |
| mp_take.test | 10 | 0.001297s | 0.001325s | 0.001308s | byte equality observed |
| mp_take_2.test | 10 | 0.000587s | 0.000589s | 0.001228s | byte equality observed |
| mp_third.test | 10 | 0.001299s | 0.001292s | 0.001279s | byte equality observed |
| mp_third_2.test | 10 | 0.000588s | 0.000592s | 0.001241s | byte equality observed |
| mp_transform.test | 10 | 0.001288s | 0.001268s | 0.001272s | byte equality observed |
| mp_transform_2.test | 10 | 0.001245s | 0.001232s | 0.001222s | byte equality observed |
| mp_transform_front.test | 10 | 0.001293s | 0.001330s | 0.001287s | byte equality observed |
| mp_transform_front_2.test | 10 | 0.000585s | 0.000602s | 0.001265s | byte equality observed |
| mp_transform_if.test | 10 | 0.001306s | 0.001257s | 0.001287s | byte equality observed |
| mp_transform_if_q.test | 10 | 0.001274s | 0.001308s | 0.001280s | byte equality observed |
| mp_transform_q.test | 10 | 0.001297s | 0.001341s | 0.001306s | byte equality observed |
| mp_transform_q_2.test | 10 | 0.001301s | 0.001287s | 0.001278s | byte equality observed |
| mp_transform_second.test | 10 | 0.001285s | 0.001329s | 0.001269s | byte equality observed |
| mp_transform_second_2.test | 10 | 0.000596s | 0.000587s | 0.001263s | byte equality observed |
| mp_transform_sf.test | 10 | 0.001283s | 0.001288s | 0.001268s | byte equality observed |
| mp_transform_third.test | 10 | 0.001262s | 0.001289s | 0.001296s | byte equality observed |
| mp_transform_third_2.test | 10 | 0.000580s | 0.000595s | 0.001269s | byte equality observed |
| mp_unique.test | 10 | 0.001272s | 0.001289s | 0.001317s | byte equality observed |
| mp_unique_if.test | 10 | 0.001329s | 0.001351s | 0.001289s | byte equality observed |
| mp_unique_if_q.test | 10 | 0.001294s | 0.001325s | 0.001328s | byte equality observed |
| mp_valid.test | 10 | 0.001296s | 0.001307s | 0.001280s | byte equality observed |
| mp_valid_and_true.test | 10 | 0.001315s | 0.001284s | 0.001255s | byte equality observed |
| mp_value.test | 10 | 0.000594s | 0.000598s | 0.001273s | byte equality observed |
| mp_with_index.test | 9 | 0.001754s | 0.001720s | 0.001609s | byte equality observed |
| mp_with_index_cx.test | 10 | 0.000593s | 0.000588s | 0.001267s | byte equality observed |
| mpl.test | 10 | 0.001329s | 0.001297s | 0.001297s | byte equality observed |
| mpl_list.test | 10 | 0.001278s | 0.001303s | 0.001286s | byte equality observed |
| mpl_tuple.test | 10 | 0.001296s | 0.001259s | 0.001310s | byte equality observed |
| mpl_version.test | 10 | 0.001266s | 0.001289s | 0.001292s | byte equality observed |
| set_version.test | 10 | 0.001291s | 0.001279s | 0.001285s | byte equality observed |
| tuple_apply.test | 10 | 0.001284s | 0.001261s | 0.001328s | byte equality observed |
| tuple_for_each.test | 10 | 0.001314s | 0.001303s | 0.001314s | byte equality observed |
| tuple_transform.test | 10 | 0.001310s | 0.001330s | 0.001268s | byte equality observed |
| tuple_transform_2.test | 10 | 0.001269s | 0.001299s | 0.001275s | byte equality observed |
| tuple_version.test | 10 | 0.001274s | 0.001279s | 0.001273s | byte equality observed |
| utility_version.test | 10 | 0.001301s | 0.001261s | 0.001302s | byte equality observed |
| version.test | 10 | 0.001285s | 0.001264s | 0.001289s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/43701438216).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
