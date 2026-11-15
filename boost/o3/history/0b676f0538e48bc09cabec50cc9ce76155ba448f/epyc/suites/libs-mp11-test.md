# libs/mp11/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| mp11.test | COMPILE | 0.050109 | 0.103290 | 0.173994 | — | — | — |
| complex_h.test | COMPILE | 0.202462 | 0.456939 | 0.795801 | — | — | — |
| mp_size.test | RUN | 0.234008 | 1.349455 | 0.956138 | 0.001950 | 0.002262 | 0.001846 |
| mp_size_2.test | RUN | 0.020838 | 0.048502 | 0.075395 | 0.000815 | 0.000917 | 0.001869 |
| mp_empty.test | RUN | 0.215793 | 0.837575 | 0.839126 | 0.001833 | 0.002219 | 0.002030 |
| mp_empty_2.test | RUN | 0.022657 | 0.050583 | 0.083713 | 0.000669 | 0.000795 | 0.001978 |
| mp_assign.test | RUN | 0.255106 | 1.739605 | 1.201916 | 0.001774 | 0.002040 | 0.001932 |
| mp_assign_2.test | RUN | 0.022706 | 0.051794 | 0.073578 | 0.000863 | 0.000917 | 0.001582 |
| mp_clear.test | RUN | 0.220240 | 0.778065 | 0.898939 | 0.001952 | 0.002090 | 0.002287 |
| mp_clear_2.test | RUN | 0.020492 | 0.051270 | 0.069705 | 0.000800 | 0.000786 | 0.001905 |
| mp_front.test | RUN | 0.237934 | 1.182219 | 0.956725 | 0.001872 | 0.002180 | 0.001679 |
| mp_front_2.test | RUN | 0.019836 | 0.051945 | 0.081349 | 0.000809 | 0.000796 | 0.001998 |
| mp_pop_front.test | RUN | 0.237876 | 1.274694 | 0.994464 | 0.001920 | 0.002010 | 0.001998 |
| mp_pop_front_2.test | RUN | 0.020001 | 0.050568 | 0.075272 | 0.000734 | 0.000986 | 0.002000 |
| mp_second.test | RUN | 0.236106 | 0.836235 | 0.871162 | 0.001842 | 0.001979 | 0.001842 |
| mp_second_2.test | RUN | 0.022545 | 0.051496 | 0.079861 | 0.000801 | 0.000909 | 0.002020 |
| mp_third.test | RUN | 0.234179 | 0.749099 | 0.841684 | 0.002078 | 0.002296 | 0.001997 |
| mp_third_2.test | RUN | 0.020036 | 0.051764 | 0.082379 | 0.000747 | 0.000845 | 0.001915 |
| mp_push_front.test | RUN | 0.289531 | 2.651307 | 1.510703 | 0.001703 | 0.002153 | 0.002068 |
| mp_push_front_2.test | RUN | 0.021543 | 0.049324 | 0.080193 | 0.000743 | 0.000855 | 0.001982 |
| mp_push_back.test | RUN | 0.303785 | 2.668465 | 1.419261 | 0.001890 | 0.001925 | 0.001829 |
| mp_push_back_2.test | RUN | 0.020734 | 0.052658 | 0.082105 | 0.000691 | 0.000864 | 0.002052 |
| mp_rename.test | RUN | 0.285542 | 2.424215 | 1.329651 | 0.001747 | 0.002166 | 0.002115 |
| mp_rename_2.test | RUN | 0.023013 | 0.051340 | 0.081524 | 0.000689 | 0.000882 | 0.002132 |
| mp_append.test | RUN | 0.282763 | 2.771136 | 1.472544 | 0.001716 | 0.001897 | 0.002352 |
| mp_append_2.test | RUN | 0.623075 | 6.119345 | 1.831604 | 0.001958 | 0.002192 | 0.001831 |
| mp_append_3.test | RUN | 0.022039 | 0.052932 | 0.073652 | 0.000796 | 0.000966 | 0.002063 |
| mp_append_sf.test | RUN | 0.225833 | 0.699468 | 0.827315 | 0.001915 | 0.002299 | 0.002022 |
| mp_replace_front.test | RUN | 0.274394 | 1.972223 | 1.159210 | 0.001851 | 0.002283 | 0.001928 |
| mp_replace_front_2.test | RUN | 0.021380 | 0.050414 | 0.081921 | 0.000779 | 0.000903 | 0.001931 |
| mp_replace_second.test | RUN | 0.263386 | 1.305408 | 1.136666 | 0.002198 | 0.002119 | 0.002150 |
| mp_replace_second_2.test | RUN | 0.021073 | 0.053918 | 0.080904 | 0.000700 | 0.001039 | 0.001634 |
| mp_replace_third.test | RUN | 0.251221 | 1.065302 | 1.029188 | 0.002053 | 0.002102 | 0.002112 |
| mp_replace_third_2.test | RUN | 0.021445 | 0.050989 | 0.071064 | 0.000751 | 0.000948 | 0.002026 |
| mp_apply_q.test | RUN | 0.278081 | 2.406214 | 1.311487 | 0.002035 | 0.002180 | 0.002086 |
| mp_apply_q_sf.test | RUN | 0.228406 | 0.734465 | 0.880173 | 0.001696 | 0.002129 | 0.002086 |
| mp_is_list.test | RUN | 0.221700 | 0.853174 | 0.810117 | 0.001728 | 0.002295 | 0.001966 |
| mp_list_c.test | RUN | 0.237983 | 1.017828 | 0.992722 | 0.001946 | 0.002170 | 0.002044 |
| mp_transform_front.test | RUN | 0.262145 | 1.930991 | 1.160763 | 0.001831 | 0.002107 | 0.001599 |
| mp_transform_front_2.test | RUN | 0.020835 | 0.050479 | 0.073128 | 0.000775 | 0.000883 | 0.001612 |
| mp_transform_second.test | RUN | 0.256352 | 1.712975 | 1.101098 | 0.001775 | 0.002249 | 0.001642 |
| mp_transform_second_2.test | RUN | 0.022560 | 0.052881 | 0.078982 | 0.000769 | 0.001008 | 0.001954 |
| mp_transform_third.test | RUN | 0.237281 | 1.313575 | 1.008084 | 0.001949 | 0.001882 | 0.001957 |
| mp_transform_third_2.test | RUN | 0.021366 | 0.049879 | 0.076116 | 0.000697 | 0.000758 | 0.001808 |
| mp_list_v.test | RUN | 0.021766 | 0.049835 | 0.074223 | 0.000698 | 0.000850 | 0.001990 |
| mp_rename_v.test | RUN | 0.022986 | 0.049105 | 0.074104 | 0.000677 | 0.000855 | 0.001531 |
| mp_is_value_list.test | RUN | 0.219267 | 0.538988 | 0.853807 | 0.001904 | 0.001898 | 0.002370 |
| mp_transform.test | RUN | 0.505208 | 4.148399 | 2.335085 | 0.001938 | 0.002193 | 0.001969 |
| mp_transform_2.test | RUN | 0.209036 | 0.490261 | 0.806453 | 0.001860 | 0.002180 | 0.001942 |
| mp_transform_q.test | RUN | 0.491892 | 3.845312 | 2.306512 | 0.001796 | 0.002211 | 0.002008 |
| mp_transform_q_2.test | RUN | 0.540271 | 1.300129 | 2.905033 | 0.001914 | 0.002158 | 0.001649 |
| mp_transform_sf.test | RUN | 0.243903 | 0.733878 | 0.928177 | 0.001913 | 0.002073 | 0.001905 |
| mp_transform_if.test | RUN | 0.287378 | 1.959622 | 1.340974 | 0.001884 | 0.002070 | 0.002014 |
| mp_transform_if_q.test | RUN | 0.289169 | 1.945889 | 1.316265 | 0.001736 | 0.002012 | 0.002024 |
| mp_filter.test | RUN | 0.258611 | 1.177893 | 1.030535 | 0.001942 | 0.002250 | 0.001894 |
| mp_fill.test | RUN | 0.246571 | 0.904757 | 0.937512 | 0.001830 | 0.002006 | 0.002206 |
| mp_fill_2.test | RUN | 0.039338 | 0.082740 | 0.146743 | 0.000846 | 0.000968 | 0.002056 |
| mp_count.test | RUN | 0.438520 | 2.110609 | 1.466215 | 0.002006 | 0.001904 | 0.002054 |
| mp_count_if.test | RUN | 0.477240 | 2.151026 | 1.616552 | 0.001718 | 0.001956 | 0.001804 |
| mp_count_if_q.test | RUN | 0.252584 | 1.425745 | 0.991735 | 0.001980 | 0.002260 | 0.001794 |
| mp_contains.test | RUN | 0.232389 | 0.877578 | 0.906849 | 0.001854 | 0.002184 | 0.002054 |
| mp_starts_with.test | RUN | 0.240920 | 0.887353 | 0.965746 | 0.001823 | 0.002124 | 0.001555 |
| mp_starts_with_sf.test | RUN | 0.236016 | 0.726509 | 0.926664 | 0.001737 | 0.002314 | 0.002053 |
| mp_repeat.test | RUN | 0.338057 | 3.475758 | 1.595785 | 0.001967 | 0.002053 | 0.001965 |
| mp_repeat_2.test | RUN | 0.037871 | 0.081831 | 0.139280 | 0.000807 | 0.001007 | 0.001983 |
| mp_repeat_3.test | RUN | 0.280032 | 0.480072 | 0.865751 | 0.001782 | 0.002222 | 0.001728 |
| mp_product.test | RUN | 0.267019 | 2.158106 | 1.185194 | 0.001844 | 0.002134 | 0.001944 |
| mp_drop.test | RUN | 0.297075 | 2.612153 | 1.367911 | 0.001893 | 0.001917 | 0.002078 |
| mp_drop_2.test | RUN | 0.039519 | 0.082220 | 0.145571 | 0.000859 | 0.001042 | 0.002017 |
| mp_iota.test | RUN | 0.285536 | 2.228249 | 1.223666 | 0.001867 | 0.002344 | 0.002046 |
| mp_iota_2.test | RUN | 0.303091 | 2.704322 | 1.362586 | 0.001751 | 0.002256 | 0.002100 |
| mp_at.test | RUN | 0.251727 | 1.183276 | 1.019963 | 0.001882 | 0.002306 | 0.002086 |
| mp_at_2.test | RUN | 0.040462 | 0.076826 | 0.147758 | 0.000694 | 0.000982 | 0.001936 |
| mp_at_sf.test | RUN | 0.240308 | 0.766901 | 0.890973 | 0.002025 | 0.002162 | 0.002026 |
| mp_take.test | RUN | 0.374872 | 3.409264 | 1.558502 | 0.001931 | 0.001950 | 0.002156 |
| mp_take_2.test | RUN | 0.039355 | 0.080227 | 0.148500 | 0.000709 | 0.000874 | 0.002125 |
| mp_slice.test | RUN | 0.449537 | 3.497096 | 2.079629 | 0.001882 | 0.002177 | 0.001956 |
| mp_slice_2.test | RUN | 0.038271 | 0.083090 | 0.141508 | 0.000775 | 0.000988 | 0.001890 |
| mp_replace.test | RUN | 0.293394 | 1.813001 | 1.332528 | 0.002131 | 0.001882 | 0.002012 |
| mp_replace_if.test | RUN | 0.268713 | 1.594202 | 1.287042 | 0.001944 | 0.002094 | 0.002104 |
| mp_replace_if_q.test | RUN | 0.280189 | 1.599649 | 1.200201 | 0.001935 | 0.002244 | 0.002059 |
| mp_copy_if.test | RUN | 0.288344 | 2.232995 | 1.202155 | 0.001824 | 0.002182 | 0.002135 |
| mp_copy_if_q.test | RUN | 0.284696 | 2.201480 | 1.209934 | 0.001950 | 0.002152 | 0.001558 |
| mp_remove.test | RUN | 0.279033 | 1.508178 | 1.199462 | 0.001922 | 0.002175 | 0.001904 |
| mp_remove_if.test | RUN | 0.289523 | 2.342748 | 1.255177 | 0.001859 | 0.002076 | 0.002058 |
| mp_remove_if_q.test | RUN | 0.293615 | 2.350500 | 1.318131 | 0.001763 | 0.002042 | 0.002063 |
| mp_partition.test | RUN | 0.284688 | 2.196839 | 1.350077 | 0.001946 | 0.002109 | 0.002124 |
| mp_partition_q.test | RUN | 0.290402 | 2.176442 | 1.348275 | 0.002036 | 0.002072 | 0.001857 |
| mp_sort.test | RUN | 0.268097 | 1.602023 | 1.222581 | 0.001790 | 0.002114 | 0.002056 |
| mp_sort_q.test | RUN | 0.273269 | 1.562089 | 1.211219 | 0.001802 | 0.002215 | 0.001744 |
| mp_find.test | RUN | 0.268032 | 1.696210 | 1.051382 | 0.002021 | 0.002094 | 0.001768 |
| mp_find_if.test | RUN | 0.259826 | 1.602887 | 1.013254 | 0.001896 | 0.002156 | 0.001875 |
| mp_find_if_q.test | RUN | 0.282446 | 1.776860 | 1.263540 | 0.001981 | 0.002196 | 0.001996 |
| mp_reverse.test | RUN | 0.550818 | 4.518669 | 2.268387 | 0.001869 | 0.001858 | 0.002114 |
| mp_fold.test | RUN | 0.913114 | 3.506708 | 5.512882 | 0.002022 | 0.002092 | 0.002146 |
| mp_fold_q.test | RUN | 0.266971 | 1.569342 | 1.146564 | 0.001890 | 0.002298 | 0.002222 |
| mp_fold_q_sf.test | RUN | 0.238814 | 0.785361 | 0.910311 | 0.001681 | 0.002014 | 0.002169 |
| mp_reverse_fold.test | RUN | 0.446284 | 3.409678 | 1.565670 | 0.002045 | 0.002176 | 0.002016 |
| mp_reverse_fold_q.test | RUN | 0.261565 | 1.878596 | 1.215743 | 0.001900 | 0.002194 | 0.002070 |
| mp_unique.test | RUN | 0.268021 | 1.737751 | 1.182402 | 0.001861 | 0.002248 | 0.002115 |
| mp_unique_if.test | RUN | 0.468645 | 3.474298 | 1.822318 | 0.002374 | 0.002293 | 0.001892 |
| mp_unique_if_q.test | RUN | 0.409899 | 3.535797 | 1.549024 | 0.001829 | 0.002032 | 0.001906 |
| mp_all_of.test | RUN | 0.633270 | 1.916223 | 2.045067 | 0.002640 | 0.002229 | 0.002142 |
| mp_all_of_q.test | RUN | 0.229040 | 0.871423 | 0.852123 | 0.001709 | 0.002180 | 0.002110 |
| mp_any_of.test | RUN | 0.631469 | 1.998481 | 1.970325 | 0.001955 | 0.001861 | 0.001858 |
| mp_any_of_q.test | RUN | 0.231944 | 0.873736 | 0.944909 | 0.001962 | 0.001994 | 0.002048 |
| mp_none_of.test | RUN | 0.603159 | 1.998115 | 1.919644 | 0.001714 | 0.002384 | 0.002242 |
| mp_none_of_q.test | RUN | 0.231123 | 0.878254 | 0.905789 | 0.001894 | 0.002465 | 0.001532 |
| mp_replace_at.test | RUN | 0.279008 | 1.694486 | 1.330716 | 0.001930 | 0.002216 | 0.002064 |
| mp_replace_at_c.test | RUN | 0.283064 | 1.684800 | 1.344143 | 0.001922 | 0.001865 | 0.001970 |
| mp_for_each.test | RUN | 0.276215 | 1.291016 | 1.428596 | 0.001906 | 0.001877 | 0.002070 |
| mp_insert.test | RUN | 0.422378 | 3.452827 | 1.824690 | 0.002098 | 0.002190 | 0.002118 |
| mp_insert_2.test | RUN | 0.040062 | 0.084763 | 0.147735 | 0.000796 | 0.000878 | 0.002021 |
| mp_erase.test | RUN | 0.472643 | 3.672612 | 2.148896 | 0.001955 | 0.002214 | 0.002031 |
| mp_erase_2.test | RUN | 0.038291 | 0.076613 | 0.145849 | 0.000722 | 0.000987 | 0.001926 |
| mp_with_index.test | RUN | 0.592589 | 7.515897 | 4.896700 | 0.002318 | 0.002624 | 0.002510 |
| mp_with_index_cx.test | RUN | 0.004154 | 0.024760 | 0.029303 | 0.000807 | 0.000942 | 0.001879 |
| mp_from_sequence.test | RUN | 0.285178 | 1.994561 | 1.320163 | 0.001788 | 0.002186 | 0.001885 |
| mp_from_sequence_2.test | RUN | 0.304298 | 2.335220 | 1.368470 | 0.001777 | 0.002122 | 0.002022 |
| mp_from_sequence_3.test | RUN | 0.246580 | 1.041932 | 0.977724 | 0.001660 | 0.002340 | 0.001764 |
| mp_min_element.test | RUN | 0.242660 | 0.951838 | 0.971682 | 0.001885 | 0.002533 | 0.001961 |
| mp_min_element_2.test | RUN | 0.038464 | 0.086419 | 0.145919 | 0.000723 | 0.000920 | 0.001973 |
| mp_min_element_q.test | RUN | 0.236376 | 0.943837 | 0.893806 | 0.001764 | 0.001948 | 0.001694 |
| mp_min_element_q_2.test | RUN | 0.037017 | 0.081695 | 0.146275 | 0.000710 | 0.000683 | 0.002035 |
| mp_max_element.test | RUN | 0.246158 | 0.952921 | 0.921813 | 0.001553 | 0.002360 | 0.002012 |
| mp_max_element_2.test | RUN | 0.037839 | 0.080507 | 0.146759 | 0.000693 | 0.000877 | 0.001676 |
| mp_max_element_q.test | RUN | 0.249043 | 0.965587 | 0.962141 | 0.001886 | 0.002342 | 0.002129 |
| mp_max_element_q_2.test | RUN | 0.037704 | 0.081499 | 0.147849 | 0.000775 | 0.000953 | 0.002092 |
| mp_nth_element.test | RUN | 0.276602 | 1.317804 | 1.085495 | 0.001955 | 0.002008 | 0.001660 |
| mp_nth_element_q.test | RUN | 0.269081 | 1.316229 | 1.214780 | 0.001864 | 0.002068 | 0.001932 |
| mp_back.test | RUN | 0.265436 | 1.138424 | 1.095886 | 0.001743 | 0.002236 | 0.002090 |
| mp_back_2.test | RUN | 0.040612 | 0.079902 | 0.139537 | 0.000741 | 0.000886 | 0.001852 |
| mp_pop_back.test | RUN | 0.688201 | 6.981636 | 2.127959 | 0.001888 | 0.002096 | 0.001887 |
| mp_pop_back_2.test | RUN | 0.039259 | 0.077743 | 0.142856 | 0.000819 | 0.000895 | 0.001937 |
| mp_flatten.test | RUN | 0.310700 | 2.493885 | 1.498530 | 0.001924 | 0.002216 | 0.002026 |
| mp_rotate_left.test | RUN | 0.306612 | 2.688962 | 1.514870 | 0.001864 | 0.002049 | 0.001632 |
| mp_rotate_right.test | RUN | 0.302343 | 2.701555 | 1.489535 | 0.001966 | 0.002613 | 0.002046 |
| mp_power_set.test | RUN | 0.295615 | 2.617456 | 1.472752 | 0.002057 | 0.002192 | 0.001794 |
| mp_partial_sum.test | RUN | 0.398097 | 3.460401 | 1.684797 | 0.002150 | 0.002028 | 0.001949 |
| mp_iterate.test | RUN | 0.274055 | 1.081318 | 1.183430 | 0.001874 | 0.002260 | 0.001601 |
| mp_pairwise_fold.test | RUN | 0.296623 | 2.357068 | 1.521644 | 0.001888 | 0.002295 | 0.001991 |
| mp_pairwise_fold_q.test | RUN | 0.238843 | 0.722732 | 0.933494 | 0.002110 | 0.002153 | 0.002021 |
| mp_sliding_fold.test | RUN | 0.555500 | 4.480469 | 2.712367 | 0.002076 | 0.002220 | 0.002063 |
| mp_sliding_fold_q.test | RUN | 0.564231 | 4.509324 | 2.719851 | 0.002020 | 0.002124 | 0.002010 |
| mp_intersperse.test | RUN | 0.290572 | 1.697343 | 1.364906 | 0.002072 | 0.002198 | 0.002077 |
| mp_split.test | RUN | 0.397324 | 3.278832 | 1.742575 | 0.001860 | 0.002288 | 0.002069 |
| mp_join.test | RUN | 0.321368 | 2.759983 | 1.582647 | 0.001786 | 0.002094 | 0.002100 |
| integral.test | RUN | 0.244055 | 1.250383 | 1.007380 | 0.001899 | 0.002370 | 0.001974 |
| mp_value.test | RUN | 0.015789 | 0.042504 | 0.064040 | 0.000863 | 0.000659 | 0.001940 |
| mp_identity.test | RUN | 0.237520 | 1.170226 | 0.961766 | 0.001816 | 0.002012 | 0.001955 |
| mp_inherit.test | RUN | 0.227843 | 0.812367 | 0.902632 | 0.001818 | 0.002312 | 0.002200 |
| mp_if.test | RUN | 0.221928 | 0.948120 | 0.922899 | 0.001792 | 0.002168 | 0.002074 |
| mp_if_sf.test | RUN | 0.221791 | 0.702327 | 0.799122 | 0.002024 | 0.002278 | 0.002130 |
| mp_eval_if.test | RUN | 0.237307 | 1.008083 | 0.953468 | 0.001973 | 0.001941 | 0.001911 |
| mp_eval_if_sf.test | RUN | 0.219230 | 0.717898 | 0.820025 | 0.001994 | 0.001931 | 0.001878 |
| mp_valid.test | RUN | 0.225191 | 0.745038 | 0.843069 | 0.001868 | 0.002235 | 0.001483 |
| mp_defer.test | RUN | 0.241451 | 1.209132 | 1.014239 | 0.001973 | 0.002115 | 0.001876 |
| mp_quote.test | RUN | 0.251421 | 1.226650 | 1.020767 | 0.001972 | 0.002239 | 0.001950 |
| mp_invoke_q.test | RUN | 0.259559 | 1.580676 | 1.146973 | 0.002072 | 0.002089 | 0.002207 |
| mp_invoke_q_sf.test | RUN | 0.224902 | 0.694828 | 0.834605 | 0.001950 | 0.002224 | 0.002299 |
| mp_quote_trait.test | RUN | 0.245636 | 1.330575 | 0.986531 | 0.001929 | 0.002128 | 0.002026 |
| mp_cond.test | RUN | 0.233773 | 0.814960 | 0.907615 | 0.001835 | 0.002024 | 0.001986 |
| mp_cond_sf.test | RUN | 0.218712 | 0.723091 | 0.868589 | 0.001825 | 0.002250 | 0.002116 |
| mp_not_fn.test | RUN | 0.218459 | 0.696859 | 0.823677 | 0.002009 | 0.002200 | 0.001992 |
| mp_eval_if_not.test | RUN | 0.232758 | 1.002940 | 0.936510 | 0.001918 | 0.002239 | 0.002026 |
| mp_eval_or.test | RUN | 0.224960 | 0.538681 | 0.862548 | 0.001654 | 0.002113 | 0.002040 |
| mp_compose.test | RUN | 0.253146 | 1.639036 | 1.126562 | 0.001695 | 0.002050 | 0.001996 |
| mp_valid_and_true.test | RUN | 0.217354 | 0.843144 | 0.842189 | 0.001836 | 0.002093 | 0.001969 |
| mp_compose_sf.test | COMPILE | 0.052201 | 0.110194 | 0.218804 | — | — | — |
| integer_sequence.test | RUN | 0.270659 | 1.593270 | 1.214554 | 0.001696 | 0.002026 | 0.002036 |
| tuple_for_each.test | RUN | 0.228128 | 0.614607 | 0.898247 | 0.001657 | 0.002037 | 0.002016 |
| tuple_for_each_cx.test | COMPILE | 0.043941 | 0.089664 | 0.164312 | — | — | — |
| tuple_apply.test | RUN | 0.233769 | 0.628117 | 0.958352 | 0.001802 | 0.002098 | 0.002100 |
| tuple_apply_cx.test | COMPILE | 0.060083 | 0.130492 | 0.230264 | — | — | — |
| construct_from_tuple.test | RUN | 0.226745 | 0.677997 | 0.867543 | 0.001592 | 0.002058 | 0.001961 |
| construct_from_tuple_cx.test | COMPILE | 0.060572 | 0.127677 | 0.208640 | — | — | — |
| tuple_transform.test | RUN | 0.367532 | 1.347570 | 1.785463 | 0.001955 | 0.001869 | 0.001962 |
| tuple_transform_2.test | RUN | 0.330412 | 1.004267 | 1.628223 | 0.001902 | 0.001891 | 0.001919 |
| tuple_transform_cx.test | COMPILE | 0.054410 | 0.125040 | 0.225729 | — | — | — |
| mp_set_contains.test | RUN | 0.235437 | 0.871754 | 0.954578 | 0.001886 | 0.002135 | 0.002006 |
| mp_set_push_back.test | RUN | 0.313699 | 2.573281 | 1.501598 | 0.002088 | 0.002044 | 0.001935 |
| mp_set_push_front.test | RUN | 0.383028 | 3.047312 | 1.680382 | 0.001822 | 0.002166 | 0.001971 |
| mp_is_set.test | RUN | 0.234997 | 0.853144 | 0.966346 | 0.001876 | 0.002337 | 0.001949 |
| mp_set_union.test | RUN | 0.293661 | 2.141904 | 1.421722 | 0.001879 | 0.002278 | 0.002044 |
| mp_set_union_sf.test | RUN | 0.223353 | 0.690501 | 0.875089 | 0.001776 | 0.002144 | 0.001914 |
| mp_set_difference.test | RUN | 0.265648 | 1.729091 | 1.201437 | 0.002088 | 0.002154 | 0.002242 |
| mp_set_difference_sf.test | RUN | 0.223990 | 0.693610 | 0.844524 | 0.001784 | 0.001997 | 0.002114 |
| mp_set_intersection.test | RUN | 0.262085 | 1.712132 | 1.209042 | 0.002029 | 0.001875 | 0.002100 |
| mp_set_intersection_sf.test | RUN | 0.221833 | 0.691644 | 0.859351 | 0.001841 | 0.002091 | 0.002104 |
| mp_all.test | RUN | 0.235029 | 0.849420 | 0.897617 | 0.001933 | 0.001838 | 0.002094 |
| mp_all_2.test | RUN | 0.632647 | 1.802543 | 2.018993 | 0.002674 | 0.002134 | 0.001823 |
| mp_and.test | RUN | 0.234259 | 0.808492 | 0.891481 | 0.002124 | 0.001971 | 0.002016 |
| mp_any.test | RUN | 0.233561 | 0.844233 | 0.928212 | 0.001453 | 0.002062 | 0.002128 |
| mp_any_2.test | RUN | 0.662444 | 1.815447 | 1.978672 | 0.001716 | 0.002029 | 0.001762 |
| mp_or.test | RUN | 0.235356 | 0.844889 | 0.856212 | 0.001945 | 0.002334 | 0.002137 |
| mp_same.test | RUN | 0.416543 | 1.377076 | 1.288557 | 0.001995 | 0.002012 | 0.001846 |
| mp_plus.test | RUN | 0.244668 | 1.022238 | 1.013440 | 0.001766 | 0.001992 | 0.002224 |
| mp_less.test | RUN | 0.230614 | 0.881448 | 0.925043 | 0.001922 | 0.001927 | 0.001965 |
| mp_min.test | RUN | 0.224535 | 0.781261 | 0.878436 | 0.001806 | 0.002260 | 0.002166 |
| mp_max.test | RUN | 0.227999 | 0.873405 | 0.877576 | 0.001864 | 0.002196 | 0.001898 |
| mp_similar.test | RUN | 0.230242 | 0.868607 | 0.904131 | 0.001668 | 0.002032 | 0.001990 |
| mp_map_find.test | RUN | 0.265209 | 1.562967 | 1.184504 | 0.002071 | 0.002210 | 0.002139 |
| mp_map_find_2.test | RUN | 0.244824 | 0.628471 | 1.006052 | 0.001683 | 0.001868 | 0.002006 |
| mp_map_find_3.test | RUN | 0.246845 | 0.612594 | 0.995470 | 0.001571 | 0.001957 | 0.001597 |
| mp_map_find_4.test | RUN | 0.232522 | 0.585925 | 0.973495 | 0.001896 | 0.001937 | 0.002078 |
| mp_map_contains.test | RUN | 0.238738 | 0.871791 | 0.925671 | 0.002118 | 0.002268 | 0.002182 |
| mp_map_insert.test | RUN | 0.296479 | 2.882799 | 1.605564 | 0.001836 | 0.002352 | 0.001984 |
| mp_map_replace.test | RUN | 0.405951 | 3.218868 | 1.823655 | 0.002022 | 0.002262 | 0.002172 |
| mp_map_erase.test | RUN | 0.292251 | 2.423625 | 1.530098 | 0.001783 | 0.002242 | 0.002154 |
| mp_map_update.test | RUN | 0.265649 | 1.607301 | 1.240898 | 0.001710 | 0.002247 | 0.001990 |
| mp_map_update_q.test | RUN | 0.263264 | 1.613672 | 1.189885 | 0.002026 | 0.002199 | 0.001698 |
| mp_map_keys.test | RUN | 0.267836 | 1.437933 | 1.202857 | 0.001245 | 0.002182 | 0.001616 |
| mp_is_map.test | RUN | 0.248002 | 0.914639 | 1.009132 | 0.001888 | 0.001674 | 0.001840 |
| mp_bind.test | RUN | 0.293404 | 2.514308 | 1.402468 | 0.002016 | 0.001990 | 0.002065 |
| mp_bind_q.test | RUN | 0.269102 | 1.589316 | 1.137132 | 0.001824 | 0.002091 | 0.001930 |
| mp_bind_front.test | RUN | 0.259404 | 1.757215 | 1.157690 | 0.002000 | 0.002210 | 0.001774 |
| mp_bind_back.test | RUN | 0.259653 | 1.774319 | 1.156922 | 0.001834 | 0.002324 | 0.001761 |
| mp_lambda.test | RUN | 0.575146 | 5.124942 | 2.778679 | 0.001812 | 0.001766 | 0.001904 |
| mpl.test | RUN | 0.517323 | 1.376550 | 2.260027 | 0.002064 | 0.001936 | 0.002176 |
| mpl_list.test | RUN | 0.295289 | 1.063587 | 1.126358 | 0.001933 | 0.001606 | 0.001760 |
| mpl_tuple.test | RUN | 0.296664 | 1.065574 | 1.131598 | 0.001970 | 0.002048 | 0.001868 |
| version.test | RUN | 0.150027 | 0.392567 | 0.575394 | 0.001895 | 0.002047 | 0.002096 |
| mp11_version.test | RUN | 0.184813 | 0.455580 | 0.690221 | 0.002014 | 0.001974 | 0.001976 |
| list_version.test | RUN | 0.160099 | 0.404080 | 0.584735 | 0.001804 | 0.001941 | 0.001822 |
| algorithm_version.test | RUN | 0.178121 | 0.425534 | 0.623960 | 0.001842 | 0.002032 | 0.001881 |
| integral_version.test | RUN | 0.152013 | 0.397114 | 0.555812 | 0.002065 | 0.002027 | 0.001875 |
| utility_version.test | RUN | 0.153125 | 0.398077 | 0.582901 | 0.001944 | 0.001994 | 0.002133 |
| function_version.test | RUN | 0.158848 | 0.404213 | 0.596067 | 0.001947 | 0.002198 | 0.001830 |
| map_version.test | RUN | 0.176502 | 0.433161 | 0.635318 | 0.001896 | 0.002043 | 0.001704 |
| set_version.test | RUN | 0.153853 | 0.406199 | 0.589991 | 0.001845 | 0.001839 | 0.002060 |
| bind_version.test | RUN | 0.173951 | 0.429320 | 0.628018 | 0.002109 | 0.001959 | 0.002051 |
| integer_sequence_version.test | RUN | 0.154441 | 0.397796 | 0.572477 | 0.001757 | 0.002028 | 0.001402 |
| tuple_version.test | RUN | 0.163426 | 0.432407 | 0.431557 | 0.001478 | 0.002136 | 0.001410 |
| mpl_version.test | RUN | 0.136569 | 0.302808 | 0.594840 | 0.001538 | 0.001643 | 0.001496 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.997× | 0.997×, 0.996× | 0.995× |
| clang | 1.085× | 1.078×, 1.092× | 1.003× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1361 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43664060660).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| algorithm_version.test | 10 | 0.001162s | 0.001157s | 0.001137s | byte equality observed |
| bind_version.test | 10 | 0.001153s | 0.001166s | 0.001126s | byte equality observed |
| construct_from_tuple.test | 10 | 0.001175s | 0.001147s | 0.001131s | byte equality observed |
| function_version.test | 10 | 0.001144s | 0.001151s | 0.001162s | byte equality observed |
| integer_sequence.test | 10 | 0.001142s | 0.001161s | 0.001228s | byte equality observed |
| integer_sequence_version.test | 10 | 0.001159s | 0.001137s | 0.001230s | byte equality observed |
| integral.test | 10 | 0.001155s | 0.001142s | 0.001192s | byte equality observed |
| integral_version.test | 10 | 0.001161s | 0.001141s | 0.001219s | byte equality observed |
| list_version.test | 10 | 0.001160s | 0.001150s | 0.001288s | byte equality observed |
| map_version.test | 10 | 0.001169s | 0.001152s | 0.001250s | byte equality observed |
| mp11_version.test | 10 | 0.001158s | 0.001134s | 0.001231s | byte equality observed |
| mp_all.test | 10 | 0.001166s | 0.001142s | 0.001245s | byte equality observed |
| mp_all_2.test | 10 | 0.001156s | 0.001148s | 0.001225s | byte equality observed |
| mp_all_of.test | 10 | 0.001148s | 0.001155s | 0.001290s | byte equality observed |
| mp_all_of_q.test | 10 | 0.001248s | 0.001149s | 0.001247s | byte equality observed |
| mp_and.test | 10 | 0.001261s | 0.001157s | 0.001241s | byte equality observed |
| mp_any.test | 10 | 0.001264s | 0.001187s | 0.001296s | byte equality observed |
| mp_any_2.test | 10 | 0.001297s | 0.001168s | 0.001267s | byte equality observed |
| mp_any_of.test | 10 | 0.001282s | 0.001172s | 0.001260s | byte equality observed |
| mp_any_of_q.test | 10 | 0.001260s | 0.001180s | 0.001236s | byte equality observed |
| mp_append.test | 10 | 0.001259s | 0.001184s | 0.001246s | byte equality observed |
| mp_append_2.test | 10 | 0.001287s | 0.001173s | 0.001292s | byte equality observed |
| mp_append_3.test | 10 | 0.000571s | 0.000549s | 0.001265s | byte equality observed |
| mp_append_sf.test | 10 | 0.001286s | 0.001161s | 0.001235s | byte equality observed |
| mp_apply_q.test | 10 | 0.001259s | 0.001175s | 0.001284s | byte equality observed |
| mp_apply_q_sf.test | 10 | 0.001248s | 0.001271s | 0.001254s | byte equality observed |
| mp_assign.test | 10 | 0.001280s | 0.001267s | 0.001260s | byte equality observed |
| mp_assign_2.test | 10 | 0.000587s | 0.000577s | 0.001258s | byte equality observed |
| mp_at.test | 10 | 0.001283s | 0.001283s | 0.001256s | byte equality observed |
| mp_at_2.test | 10 | 0.000585s | 0.000588s | 0.001231s | byte equality observed |
| mp_at_sf.test | 10 | 0.001271s | 0.001270s | 0.001284s | byte equality observed |
| mp_back.test | 10 | 0.001246s | 0.001245s | 0.001259s | byte equality observed |
| mp_back_2.test | 10 | 0.000587s | 0.000586s | 0.001219s | byte equality observed |
| mp_bind.test | 10 | 0.001265s | 0.001258s | 0.001205s | byte equality observed |
| mp_bind_back.test | 10 | 0.001246s | 0.001299s | 0.001254s | byte equality observed |
| mp_bind_front.test | 10 | 0.001264s | 0.001223s | 0.001251s | byte equality observed |
| mp_bind_q.test | 10 | 0.001255s | 0.001226s | 0.001243s | byte equality observed |
| mp_clear.test | 10 | 0.001262s | 0.001263s | 0.001272s | byte equality observed |
| mp_clear_2.test | 10 | 0.000579s | 0.000579s | 0.001189s | byte equality observed |
| mp_compose.test | 10 | 0.001276s | 0.001293s | 0.001262s | byte equality observed |
| mp_cond.test | 10 | 0.001273s | 0.001282s | 0.001275s | byte equality observed |
| mp_cond_sf.test | 10 | 0.001316s | 0.001266s | 0.001252s | byte equality observed |
| mp_contains.test | 10 | 0.001280s | 0.001255s | 0.001257s | byte equality observed |
| mp_copy_if.test | 10 | 0.001258s | 0.001294s | 0.001263s | byte equality observed |
| mp_copy_if_q.test | 10 | 0.001279s | 0.001275s | 0.001272s | byte equality observed |
| mp_count.test | 10 | 0.001264s | 0.001300s | 0.001253s | byte equality observed |
| mp_count_if.test | 10 | 0.001250s | 0.001298s | 0.001228s | byte equality observed |
| mp_count_if_q.test | 10 | 0.001296s | 0.001254s | 0.001238s | byte equality observed |
| mp_defer.test | 10 | 0.001262s | 0.001231s | 0.001236s | byte equality observed |
| mp_drop.test | 10 | 0.001288s | 0.001301s | 0.001246s | byte equality observed |
| mp_drop_2.test | 10 | 0.000571s | 0.000576s | 0.001202s | byte equality observed |
| mp_empty.test | 10 | 0.001273s | 0.001297s | 0.001241s | byte equality observed |
| mp_empty_2.test | 10 | 0.000573s | 0.000593s | 0.001248s | byte equality observed |
| mp_erase.test | 10 | 0.001310s | 0.001291s | 0.001261s | byte equality observed |
| mp_erase_2.test | 10 | 0.000566s | 0.000582s | 0.001272s | byte equality observed |
| mp_eval_if.test | 10 | 0.001230s | 0.001237s | 0.001232s | byte equality observed |
| mp_eval_if_not.test | 10 | 0.001216s | 0.001227s | 0.001217s | byte equality observed |
| mp_eval_if_sf.test | 10 | 0.001248s | 0.001253s | 0.001225s | byte equality observed |
| mp_eval_or.test | 10 | 0.001277s | 0.001250s | 0.001223s | byte equality observed |
| mp_fill.test | 10 | 0.001242s | 0.001277s | 0.001203s | byte equality observed |
| mp_fill_2.test | 10 | 0.000566s | 0.000575s | 0.001314s | byte equality observed |
| mp_filter.test | 10 | 0.001276s | 0.001253s | 0.001239s | byte equality observed |
| mp_find.test | 10 | 0.001252s | 0.001265s | 0.001244s | byte equality observed |
| mp_find_if.test | 10 | 0.001244s | 0.001304s | 0.001231s | byte equality observed |
| mp_find_if_q.test | 10 | 0.001260s | 0.001264s | 0.001246s | byte equality observed |
| mp_flatten.test | 10 | 0.001315s | 0.001294s | 0.001225s | byte equality observed |
| mp_fold.test | 10 | 0.001270s | 0.001244s | 0.001297s | byte equality observed |
| mp_fold_q.test | 10 | 0.001249s | 0.001254s | 0.001275s | byte equality observed |
| mp_fold_q_sf.test | 10 | 0.001264s | 0.001287s | 0.001231s | byte equality observed |
| mp_for_each.test | 10 | 0.001254s | 0.001254s | 0.001294s | byte equality observed |
| mp_from_sequence.test | 10 | 0.001249s | 0.001303s | 0.001248s | byte equality observed |
| mp_from_sequence_2.test | 10 | 0.001296s | 0.001326s | 0.001228s | byte equality observed |
| mp_from_sequence_3.test | 10 | 0.001246s | 0.001288s | 0.001196s | byte equality observed |
| mp_front.test | 10 | 0.001273s | 0.001278s | 0.001230s | byte equality observed |
| mp_front_2.test | 10 | 0.000589s | 0.000562s | 0.001205s | byte equality observed |
| mp_identity.test | 10 | 0.001274s | 0.001235s | 0.001266s | byte equality observed |
| mp_if.test | 10 | 0.001253s | 0.001291s | 0.001250s | byte equality observed |
| mp_if_sf.test | 10 | 0.001273s | 0.001258s | 0.001218s | byte equality observed |
| mp_inherit.test | 10 | 0.001273s | 0.001262s | 0.001234s | byte equality observed |
| mp_insert.test | 10 | 0.001296s | 0.001283s | 0.001239s | byte equality observed |
| mp_insert_2.test | 10 | 0.000578s | 0.000583s | 0.001261s | byte equality observed |
| mp_intersperse.test | 10 | 0.001242s | 0.001233s | 0.001218s | byte equality observed |
| mp_invoke_q.test | 10 | 0.001252s | 0.001252s | 0.001209s | byte equality observed |
| mp_invoke_q_sf.test | 10 | 0.001253s | 0.001277s | 0.001277s | byte equality observed |
| mp_iota.test | 10 | 0.001232s | 0.001248s | 0.001252s | byte equality observed |
| mp_iota_2.test | 10 | 0.001292s | 0.001254s | 0.001207s | byte equality observed |
| mp_is_list.test | 10 | 0.001256s | 0.001255s | 0.001268s | byte equality observed |
| mp_is_map.test | 10 | 0.001253s | 0.001238s | 0.001295s | byte equality observed |
| mp_is_set.test | 10 | 0.001257s | 0.001268s | 0.001242s | byte equality observed |
| mp_is_value_list.test | 10 | 0.001248s | 0.001256s | 0.001289s | byte equality observed |
| mp_iterate.test | 10 | 0.001262s | 0.001270s | 0.001287s | byte equality observed |
| mp_join.test | 10 | 0.001270s | 0.001316s | 0.001270s | byte equality observed |
| mp_lambda.test | 10 | 0.001286s | 0.001292s | 0.001224s | byte equality observed |
| mp_less.test | 10 | 0.001282s | 0.001246s | 0.001244s | byte equality observed |
| mp_list_c.test | 10 | 0.001278s | 0.001256s | 0.001266s | byte equality observed |
| mp_list_v.test | 10 | 0.000573s | 0.000567s | 0.001202s | byte equality observed |
| mp_map_contains.test | 10 | 0.001276s | 0.001248s | 0.001249s | byte equality observed |
| mp_map_erase.test | 10 | 0.001235s | 0.001237s | 0.001303s | byte equality observed |
| mp_map_find.test | 10 | 0.001230s | 0.001251s | 0.001244s | byte equality observed |
| mp_map_find_2.test | 10 | 0.001302s | 0.001244s | 0.001284s | byte equality observed |
| mp_map_find_3.test | 10 | 0.001236s | 0.001246s | 0.001293s | byte equality observed |
| mp_map_find_4.test | 10 | 0.001234s | 0.001243s | 0.001288s | byte equality observed |
| mp_map_insert.test | 10 | 0.001273s | 0.001249s | 0.001258s | byte equality observed |
| mp_map_keys.test | 10 | 0.001264s | 0.001266s | 0.001286s | byte equality observed |
| mp_map_replace.test | 10 | 0.001261s | 0.001294s | 0.001315s | byte equality observed |
| mp_map_update.test | 10 | 0.001252s | 0.001273s | 0.001248s | byte equality observed |
| mp_map_update_q.test | 10 | 0.001265s | 0.001274s | 0.001254s | byte equality observed |
| mp_max.test | 10 | 0.001259s | 0.001331s | 0.001215s | byte equality observed |
| mp_max_element.test | 10 | 0.001254s | 0.001254s | 0.001224s | byte equality observed |
| mp_max_element_2.test | 10 | 0.000581s | 0.000576s | 0.001192s | byte equality observed |
| mp_max_element_q.test | 10 | 0.001274s | 0.001242s | 0.001219s | byte equality observed |
| mp_max_element_q_2.test | 10 | 0.000586s | 0.000570s | 0.001254s | byte equality observed |
| mp_min.test | 10 | 0.001293s | 0.001294s | 0.001228s | byte equality observed |
| mp_min_element.test | 10 | 0.001251s | 0.001272s | 0.001267s | byte equality observed |
| mp_min_element_2.test | 10 | 0.000574s | 0.000571s | 0.001210s | byte equality observed |
| mp_min_element_q.test | 10 | 0.001299s | 0.001278s | 0.001223s | byte equality observed |
| mp_min_element_q_2.test | 10 | 0.000582s | 0.000587s | 0.001223s | byte equality observed |
| mp_none_of.test | 10 | 0.001244s | 0.001273s | 0.001211s | byte equality observed |
| mp_none_of_q.test | 10 | 0.001248s | 0.001292s | 0.001245s | byte equality observed |
| mp_not_fn.test | 10 | 0.001275s | 0.001249s | 0.001228s | byte equality observed |
| mp_nth_element.test | 10 | 0.001272s | 0.001271s | 0.001260s | byte equality observed |
| mp_nth_element_q.test | 10 | 0.001266s | 0.001278s | 0.001246s | byte equality observed |
| mp_or.test | 10 | 0.001316s | 0.001291s | 0.001241s | byte equality observed |
| mp_pairwise_fold.test | 10 | 0.001259s | 0.001264s | 0.001243s | byte equality observed |
| mp_pairwise_fold_q.test | 10 | 0.001264s | 0.001270s | 0.001313s | byte equality observed |
| mp_partial_sum.test | 10 | 0.001302s | 0.001240s | 0.001302s | byte equality observed |
| mp_partition.test | 10 | 0.001268s | 0.001237s | 0.001261s | byte equality observed |
| mp_partition_q.test | 10 | 0.001262s | 0.001280s | 0.001205s | byte equality observed |
| mp_plus.test | 10 | 0.001275s | 0.001318s | 0.001214s | byte equality observed |
| mp_pop_back.test | 10 | 0.001307s | 0.001321s | 0.001262s | byte equality observed |
| mp_pop_back_2.test | 10 | 0.000576s | 0.000591s | 0.001192s | byte equality observed |
| mp_pop_front.test | 10 | 0.001275s | 0.001298s | 0.001264s | byte equality observed |
| mp_pop_front_2.test | 10 | 0.000587s | 0.000566s | 0.001233s | byte equality observed |
| mp_power_set.test | 10 | 0.001318s | 0.001263s | 0.001259s | byte equality observed |
| mp_product.test | 10 | 0.001246s | 0.001249s | 0.001287s | byte equality observed |
| mp_push_back.test | 10 | 0.001268s | 0.001315s | 0.001246s | byte equality observed |
| mp_push_back_2.test | 10 | 0.000589s | 0.000571s | 0.001213s | byte equality observed |
| mp_push_front.test | 10 | 0.001254s | 0.001288s | 0.001238s | byte equality observed |
| mp_push_front_2.test | 10 | 0.000584s | 0.000583s | 0.001196s | byte equality observed |
| mp_quote.test | 10 | 0.001257s | 0.001277s | 0.001258s | byte equality observed |
| mp_quote_trait.test | 10 | 0.001272s | 0.001300s | 0.001272s | byte equality observed |
| mp_remove.test | 10 | 0.001260s | 0.001276s | 0.001217s | byte equality observed |
| mp_remove_if.test | 10 | 0.001284s | 0.001314s | 0.001217s | byte equality observed |
| mp_remove_if_q.test | 10 | 0.001269s | 0.001271s | 0.001220s | byte equality observed |
| mp_rename.test | 10 | 0.001268s | 0.001287s | 0.001255s | byte equality observed |
| mp_rename_2.test | 10 | 0.000608s | 0.000578s | 0.001201s | byte equality observed |
| mp_rename_v.test | 10 | 0.000575s | 0.000588s | 0.001189s | byte equality observed |
| mp_repeat.test | 10 | 0.001309s | 0.001297s | 0.001239s | byte equality observed |
| mp_repeat_2.test | 10 | 0.000572s | 0.000576s | 0.001234s | byte equality observed |
| mp_repeat_3.test | 10 | 0.001265s | 0.001321s | 0.001285s | byte equality observed |
| mp_replace.test | 10 | 0.001237s | 0.001318s | 0.001274s | byte equality observed |
| mp_replace_at.test | 10 | 0.001300s | 0.001272s | 0.001261s | byte equality observed |
| mp_replace_at_c.test | 10 | 0.001245s | 0.001254s | 0.001285s | byte equality observed |
| mp_replace_front.test | 10 | 0.001278s | 0.001300s | 0.001226s | byte equality observed |
| mp_replace_front_2.test | 10 | 0.000583s | 0.000572s | 0.001269s | byte equality observed |
| mp_replace_if.test | 10 | 0.001242s | 0.001289s | 0.001242s | byte equality observed |
| mp_replace_if_q.test | 10 | 0.001238s | 0.001309s | 0.001265s | byte equality observed |
| mp_replace_second.test | 10 | 0.001272s | 0.001270s | 0.001266s | byte equality observed |
| mp_replace_second_2.test | 10 | 0.000576s | 0.000592s | 0.001201s | byte equality observed |
| mp_replace_third.test | 10 | 0.001282s | 0.001287s | 0.001208s | byte equality observed |
| mp_replace_third_2.test | 10 | 0.000583s | 0.000556s | 0.001271s | byte equality observed |
| mp_reverse.test | 10 | 0.001281s | 0.001317s | 0.001278s | byte equality observed |
| mp_reverse_fold.test | 10 | 0.001272s | 0.001240s | 0.001311s | byte equality observed |
| mp_reverse_fold_q.test | 10 | 0.001255s | 0.001240s | 0.001271s | byte equality observed |
| mp_rotate_left.test | 10 | 0.001270s | 0.001266s | 0.001276s | byte equality observed |
| mp_rotate_right.test | 10 | 0.001281s | 0.001298s | 0.001276s | byte equality observed |
| mp_same.test | 10 | 0.001275s | 0.001257s | 0.001243s | byte equality observed |
| mp_second.test | 10 | 0.001275s | 0.001265s | 0.001232s | byte equality observed |
| mp_second_2.test | 10 | 0.000567s | 0.000591s | 0.001213s | byte equality observed |
| mp_set_contains.test | 10 | 0.001224s | 0.001262s | 0.001271s | byte equality observed |
| mp_set_difference.test | 10 | 0.001243s | 0.001350s | 0.001259s | byte equality observed |
| mp_set_difference_sf.test | 10 | 0.001280s | 0.001280s | 0.001292s | byte equality observed |
| mp_set_intersection.test | 10 | 0.001262s | 0.001286s | 0.001299s | byte equality observed |
| mp_set_intersection_sf.test | 10 | 0.001299s | 0.001286s | 0.001284s | byte equality observed |
| mp_set_push_back.test | 10 | 0.001261s | 0.001280s | 0.001285s | byte equality observed |
| mp_set_push_front.test | 10 | 0.001280s | 0.001285s | 0.001272s | byte equality observed |
| mp_set_union.test | 10 | 0.001251s | 0.001244s | 0.001297s | byte equality observed |
| mp_set_union_sf.test | 10 | 0.001283s | 0.001227s | 0.001304s | byte equality observed |
| mp_similar.test | 10 | 0.001318s | 0.001256s | 0.001264s | byte equality observed |
| mp_size.test | 10 | 0.001291s | 0.001312s | 0.001225s | byte equality observed |
| mp_size_2.test | 10 | 0.000579s | 0.000584s | 0.001221s | byte equality observed |
| mp_slice.test | 10 | 0.001284s | 0.001289s | 0.001239s | byte equality observed |
| mp_slice_2.test | 10 | 0.000575s | 0.000574s | 0.001179s | byte equality observed |
| mp_sliding_fold.test | 10 | 0.001328s | 0.001316s | 0.001236s | byte equality observed |
| mp_sliding_fold_q.test | 10 | 0.001283s | 0.001280s | 0.001232s | byte equality observed |
| mp_sort.test | 10 | 0.001244s | 0.001254s | 0.001256s | byte equality observed |
| mp_sort_q.test | 10 | 0.001293s | 0.001294s | 0.001293s | byte equality observed |
| mp_split.test | 10 | 0.001299s | 0.001259s | 0.001278s | byte equality observed |
| mp_starts_with.test | 10 | 0.001263s | 0.001258s | 0.001309s | byte equality observed |
| mp_starts_with_sf.test | 10 | 0.001287s | 0.001272s | 0.001256s | byte equality observed |
| mp_take.test | 10 | 0.001269s | 0.001288s | 0.001237s | byte equality observed |
| mp_take_2.test | 10 | 0.000572s | 0.000589s | 0.001196s | byte equality observed |
| mp_third.test | 10 | 0.001260s | 0.001281s | 0.001233s | byte equality observed |
| mp_third_2.test | 10 | 0.000593s | 0.000556s | 0.001251s | byte equality observed |
| mp_transform.test | 10 | 0.001263s | 0.001272s | 0.001241s | byte equality observed |
| mp_transform_2.test | 10 | 0.001221s | 0.001209s | 0.001220s | byte equality observed |
| mp_transform_front.test | 10 | 0.001261s | 0.001310s | 0.001214s | byte equality observed |
| mp_transform_front_2.test | 10 | 0.000578s | 0.000564s | 0.001253s | byte equality observed |
| mp_transform_if.test | 10 | 0.001233s | 0.001299s | 0.001236s | byte equality observed |
| mp_transform_if_q.test | 10 | 0.001326s | 0.001318s | 0.001328s | byte equality observed |
| mp_transform_q.test | 10 | 0.001272s | 0.001262s | 0.001242s | byte equality observed |
| mp_transform_q_2.test | 10 | 0.001268s | 0.001242s | 0.001247s | byte equality observed |
| mp_transform_second.test | 10 | 0.001260s | 0.001281s | 0.001238s | byte equality observed |
| mp_transform_second_2.test | 10 | 0.000594s | 0.000585s | 0.001216s | byte equality observed |
| mp_transform_sf.test | 10 | 0.001271s | 0.001195s | 0.001239s | byte equality observed |
| mp_transform_third.test | 10 | 0.001231s | 0.001210s | 0.001256s | byte equality observed |
| mp_transform_third_2.test | 10 | 0.000577s | 0.000575s | 0.001276s | byte equality observed |
| mp_unique.test | 10 | 0.001263s | 0.001281s | 0.001259s | byte equality observed |
| mp_unique_if.test | 10 | 0.001286s | 0.001275s | 0.001259s | byte equality observed |
| mp_unique_if_q.test | 10 | 0.001308s | 0.001225s | 0.001274s | byte equality observed |
| mp_valid.test | 10 | 0.001258s | 0.001270s | 0.001243s | byte equality observed |
| mp_valid_and_true.test | 10 | 0.001283s | 0.001253s | 0.001218s | byte equality observed |
| mp_value.test | 10 | 0.000585s | 0.000573s | 0.001281s | byte equality observed |
| mp_with_index.test | 10 | 0.001678s | 0.001645s | 0.001566s | byte equality observed |
| mp_with_index_cx.test | 10 | 0.000571s | 0.000573s | 0.001204s | byte equality observed |
| mpl.test | 10 | 0.001259s | 0.001265s | 0.001317s | byte equality observed |
| mpl_list.test | 10 | 0.001270s | 0.001244s | 0.001259s | byte equality observed |
| mpl_tuple.test | 10 | 0.001235s | 0.001253s | 0.001277s | byte equality observed |
| mpl_version.test | 10 | 0.001265s | 0.001284s | 0.001257s | byte equality observed |
| set_version.test | 10 | 0.001246s | 0.001245s | 0.001297s | byte equality observed |
| tuple_apply.test | 10 | 0.001286s | 0.001276s | 0.001231s | byte equality observed |
| tuple_for_each.test | 10 | 0.001285s | 0.001278s | 0.001287s | byte equality observed |
| tuple_transform.test | 10 | 0.001283s | 0.001286s | 0.001284s | byte equality observed |
| tuple_transform_2.test | 10 | 0.001276s | 0.001246s | 0.001236s | byte equality observed |
| tuple_version.test | 10 | 0.001263s | 0.001245s | 0.001288s | byte equality observed |
| utility_version.test | 10 | 0.001282s | 0.001300s | 0.001291s | byte equality observed |
| version.test | 10 | 0.001241s | 0.001223s | 0.001295s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43664060660).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
