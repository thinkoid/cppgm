# libs/mp11/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| mp11.test | COMPILE | 0.049667 | 0.100183 | 0.170633 | — | — | — |
| complex_h.test | COMPILE | 0.211585 | 0.424642 | 0.805852 | — | — | — |
| mp_size.test | RUN | 0.220564 | 1.331992 | 0.958220 | 0.001930 | 0.002060 | 0.001766 |
| mp_size_2.test | RUN | 0.020406 | 0.046425 | 0.073076 | 0.000871 | 0.000928 | 0.001679 |
| mp_empty.test | RUN | 0.217764 | 0.816472 | 0.863563 | 0.001782 | 0.002132 | 0.002162 |
| mp_empty_2.test | RUN | 0.020556 | 0.047792 | 0.082982 | 0.000770 | 0.000777 | 0.002054 |
| mp_assign.test | RUN | 0.262519 | 1.704104 | 1.162814 | 0.002048 | 0.001956 | 0.001612 |
| mp_assign_2.test | RUN | 0.020122 | 0.051336 | 0.073858 | 0.000838 | 0.000925 | 0.001678 |
| mp_clear.test | RUN | 0.223066 | 0.749471 | 0.818833 | 0.002004 | 0.001908 | 0.002096 |
| mp_clear_2.test | RUN | 0.020638 | 0.052181 | 0.081849 | 0.000673 | 0.000685 | 0.002118 |
| mp_front.test | RUN | 0.233064 | 1.158831 | 1.022699 | 0.001845 | 0.002153 | 0.001998 |
| mp_front_2.test | RUN | 0.021326 | 0.046117 | 0.081964 | 0.000810 | 0.000831 | 0.001932 |
| mp_pop_front.test | RUN | 0.238596 | 1.234252 | 0.994766 | 0.001844 | 0.001978 | 0.002050 |
| mp_pop_front_2.test | RUN | 0.021045 | 0.045947 | 0.072666 | 0.000699 | 0.000908 | 0.001974 |
| mp_second.test | RUN | 0.228644 | 0.805411 | 0.873152 | 0.001662 | 0.002104 | 0.002100 |
| mp_second_2.test | RUN | 0.020536 | 0.049032 | 0.083715 | 0.000643 | 0.000927 | 0.002101 |
| mp_third.test | RUN | 0.226986 | 0.730505 | 0.887838 | 0.001662 | 0.002196 | 0.002000 |
| mp_third_2.test | RUN | 0.020237 | 0.051775 | 0.083649 | 0.000673 | 0.000880 | 0.001972 |
| mp_push_front.test | RUN | 0.302866 | 2.538105 | 1.576681 | 0.001807 | 0.001921 | 0.001870 |
| mp_push_front_2.test | RUN | 0.021618 | 0.049141 | 0.074318 | 0.000812 | 0.000883 | 0.002100 |
| mp_push_back.test | RUN | 0.299969 | 2.531083 | 1.458720 | 0.001960 | 0.002111 | 0.002042 |
| mp_push_back_2.test | RUN | 0.021055 | 0.052940 | 0.082240 | 0.000840 | 0.000875 | 0.001936 |
| mp_rename.test | RUN | 0.281951 | 2.386363 | 1.357804 | 0.001796 | 0.002144 | 0.001662 |
| mp_rename_2.test | RUN | 0.022370 | 0.050953 | 0.083872 | 0.000734 | 0.000966 | 0.002071 |
| mp_append.test | RUN | 0.296810 | 2.695775 | 1.458216 | 0.001832 | 0.002215 | 0.002100 |
| mp_append_2.test | RUN | 0.626724 | 5.983310 | 1.841609 | 0.001940 | 0.001994 | 0.001926 |
| mp_append_3.test | RUN | 0.020850 | 0.047349 | 0.069836 | 0.000881 | 0.000718 | 0.001486 |
| mp_append_sf.test | RUN | 0.220671 | 0.704368 | 0.861456 | 0.001774 | 0.002047 | 0.002182 |
| mp_replace_front.test | RUN | 0.269320 | 1.915972 | 1.217364 | 0.001874 | 0.002083 | 0.001714 |
| mp_replace_front_2.test | RUN | 0.020386 | 0.050661 | 0.079059 | 0.000873 | 0.000720 | 0.002012 |
| mp_replace_second.test | RUN | 0.259822 | 1.234243 | 1.131907 | 0.001959 | 0.001838 | 0.002088 |
| mp_replace_second_2.test | RUN | 0.021169 | 0.050439 | 0.077090 | 0.000810 | 0.000945 | 0.001573 |
| mp_replace_third.test | RUN | 0.243421 | 1.016194 | 1.030897 | 0.002028 | 0.002030 | 0.002076 |
| mp_replace_third_2.test | RUN | 0.021359 | 0.050376 | 0.071374 | 0.000883 | 0.000724 | 0.002006 |
| mp_apply_q.test | RUN | 0.284235 | 2.356061 | 1.323336 | 0.002080 | 0.001970 | 0.002108 |
| mp_apply_q_sf.test | RUN | 0.225121 | 0.701534 | 0.859888 | 0.001875 | 0.002200 | 0.001969 |
| mp_is_list.test | RUN | 0.227235 | 0.820368 | 0.889597 | 0.002054 | 0.002118 | 0.002082 |
| mp_list_c.test | RUN | 0.241998 | 0.976316 | 0.933575 | 0.001788 | 0.002134 | 0.002208 |
| mp_transform_front.test | RUN | 0.266444 | 1.894047 | 1.155714 | 0.001944 | 0.001597 | 0.002139 |
| mp_transform_front_2.test | RUN | 0.020161 | 0.048953 | 0.079737 | 0.000678 | 0.000833 | 0.002078 |
| mp_transform_second.test | RUN | 0.252345 | 1.629141 | 1.015886 | 0.001855 | 0.001922 | 0.001658 |
| mp_transform_second_2.test | RUN | 0.021589 | 0.050701 | 0.081451 | 0.000829 | 0.000910 | 0.002158 |
| mp_transform_third.test | RUN | 0.240799 | 1.284638 | 0.932967 | 0.001862 | 0.002024 | 0.002048 |
| mp_transform_third_2.test | RUN | 0.021374 | 0.050054 | 0.080749 | 0.000714 | 0.000850 | 0.001815 |
| mp_list_v.test | RUN | 0.021832 | 0.049322 | 0.082949 | 0.000687 | 0.000696 | 0.001818 |
| mp_rename_v.test | RUN | 0.020757 | 0.048425 | 0.080082 | 0.000678 | 0.000916 | 0.001713 |
| mp_is_value_list.test | RUN | 0.221943 | 0.528464 | 0.818492 | 0.001888 | 0.002102 | 0.002078 |
| mp_transform.test | RUN | 0.494232 | 4.008694 | 2.365876 | 0.002069 | 0.001856 | 0.001798 |
| mp_transform_2.test | RUN | 0.212714 | 0.470606 | 0.823975 | 0.001964 | 0.002170 | 0.001844 |
| mp_transform_q.test | RUN | 0.494297 | 3.789506 | 2.243603 | 0.001969 | 0.002156 | 0.002024 |
| mp_transform_q_2.test | RUN | 0.533223 | 1.263933 | 3.002477 | 0.002136 | 0.002048 | 0.002098 |
| mp_transform_sf.test | RUN | 0.237163 | 0.722075 | 0.922754 | 0.002354 | 0.001942 | 0.002024 |
| mp_transform_if.test | RUN | 0.291523 | 1.908081 | 1.326030 | 0.001895 | 0.001759 | 0.001970 |
| mp_transform_if_q.test | RUN | 0.293093 | 1.913117 | 1.293032 | 0.001912 | 0.001910 | 0.001746 |
| mp_filter.test | RUN | 0.257363 | 1.157233 | 1.043443 | 0.001896 | 0.002178 | 0.001942 |
| mp_fill.test | RUN | 0.242246 | 0.890338 | 0.988894 | 0.001975 | 0.001982 | 0.002138 |
| mp_fill_2.test | RUN | 0.036590 | 0.073212 | 0.129707 | 0.000724 | 0.000784 | 0.002092 |
| mp_count.test | RUN | 0.465368 | 2.067549 | 1.480327 | 0.001663 | 0.001961 | 0.001885 |
| mp_count_if.test | RUN | 0.457754 | 2.123038 | 1.609677 | 0.001972 | 0.001983 | 0.002008 |
| mp_count_if_q.test | RUN | 0.247432 | 1.380643 | 1.004107 | 0.001766 | 0.001743 | 0.001542 |
| mp_contains.test | RUN | 0.234485 | 0.837360 | 0.940838 | 0.001792 | 0.002062 | 0.002170 |
| mp_starts_with.test | RUN | 0.238641 | 0.849063 | 0.954026 | 0.001652 | 0.001613 | 0.001825 |
| mp_starts_with_sf.test | RUN | 0.234213 | 0.731640 | 0.896993 | 0.001826 | 0.002047 | 0.002180 |
| mp_repeat.test | RUN | 0.337360 | 3.387743 | 1.605197 | 0.001995 | 0.002174 | 0.001965 |
| mp_repeat_2.test | RUN | 0.037596 | 0.073379 | 0.145937 | 0.000785 | 0.000897 | 0.002109 |
| mp_repeat_3.test | RUN | 0.286201 | 0.496768 | 0.834291 | 0.001778 | 0.001990 | 0.002164 |
| mp_product.test | RUN | 0.272062 | 2.027512 | 1.231609 | 0.001918 | 0.002036 | 0.002117 |
| mp_drop.test | RUN | 0.298018 | 2.513142 | 1.333281 | 0.001829 | 0.001969 | 0.001950 |
| mp_drop_2.test | RUN | 0.037042 | 0.077381 | 0.145498 | 0.000650 | 0.000886 | 0.001893 |
| mp_iota.test | RUN | 0.284140 | 2.156039 | 1.237490 | 0.001912 | 0.002040 | 0.002046 |
| mp_iota_2.test | RUN | 0.302957 | 2.620901 | 1.401747 | 0.001880 | 0.002034 | 0.002110 |
| mp_at.test | RUN | 0.250926 | 1.147580 | 1.035178 | 0.001829 | 0.001794 | 0.001966 |
| mp_at_2.test | RUN | 0.037102 | 0.072703 | 0.143758 | 0.000750 | 0.000850 | 0.001931 |
| mp_at_sf.test | RUN | 0.235545 | 0.722572 | 0.873213 | 0.001905 | 0.002060 | 0.001933 |
| mp_take.test | RUN | 0.377760 | 3.339527 | 1.693673 | 0.001747 | 0.002020 | 0.002096 |
| mp_take_2.test | RUN | 0.037553 | 0.079869 | 0.127879 | 0.000843 | 0.000799 | 0.001901 |
| mp_slice.test | RUN | 0.446679 | 3.403579 | 2.060685 | 0.001868 | 0.002020 | 0.001832 |
| mp_slice_2.test | RUN | 0.037557 | 0.079089 | 0.143508 | 0.000706 | 0.000921 | 0.002042 |
| mp_replace.test | RUN | 0.286009 | 1.767438 | 1.327162 | 0.001841 | 0.001860 | 0.002145 |
| mp_replace_if.test | RUN | 0.277297 | 1.522460 | 1.290663 | 0.001749 | 0.002208 | 0.001888 |
| mp_replace_if_q.test | RUN | 0.275914 | 1.553371 | 1.282499 | 0.001758 | 0.002143 | 0.002183 |
| mp_copy_if.test | RUN | 0.283013 | 2.176588 | 1.216173 | 0.001885 | 0.001984 | 0.002128 |
| mp_copy_if_q.test | RUN | 0.290516 | 2.201522 | 1.251682 | 0.001961 | 0.002162 | 0.002043 |
| mp_remove.test | RUN | 0.264282 | 1.449249 | 1.295938 | 0.002029 | 0.002186 | 0.001956 |
| mp_remove_if.test | RUN | 0.294326 | 2.278541 | 1.238176 | 0.002010 | 0.002120 | 0.002122 |
| mp_remove_if_q.test | RUN | 0.297431 | 2.269422 | 1.276718 | 0.001936 | 0.002133 | 0.002072 |
| mp_partition.test | RUN | 0.283519 | 2.132580 | 1.388071 | 0.001773 | 0.002079 | 0.001987 |
| mp_partition_q.test | RUN | 0.285456 | 2.117755 | 1.374925 | 0.002096 | 0.002070 | 0.002196 |
| mp_sort.test | RUN | 0.278959 | 1.552935 | 1.218793 | 0.001992 | 0.002060 | 0.001505 |
| mp_sort_q.test | RUN | 0.277580 | 1.542253 | 1.224955 | 0.002036 | 0.002104 | 0.002075 |
| mp_find.test | RUN | 0.270270 | 1.674635 | 1.053364 | 0.001817 | 0.001895 | 0.002148 |
| mp_find_if.test | RUN | 0.265273 | 1.534966 | 1.009126 | 0.002012 | 0.002014 | 0.001941 |
| mp_find_if_q.test | RUN | 0.277814 | 1.724556 | 1.265347 | 0.002112 | 0.002021 | 0.002167 |
| mp_reverse.test | RUN | 0.560712 | 4.480087 | 2.291280 | 0.001852 | 0.002112 | 0.001836 |
| mp_fold.test | RUN | 0.936361 | 3.454738 | 5.602982 | 0.001963 | 0.002035 | 0.001872 |
| mp_fold_q.test | RUN | 0.268460 | 1.518985 | 1.148406 | 0.001980 | 0.002048 | 0.002232 |
| mp_fold_q_sf.test | RUN | 0.243998 | 0.718654 | 0.909681 | 0.001610 | 0.002130 | 0.001790 |
| mp_reverse_fold.test | RUN | 0.439625 | 3.299476 | 1.590122 | 0.001886 | 0.002048 | 0.002053 |
| mp_reverse_fold_q.test | RUN | 0.271898 | 1.824335 | 1.267193 | 0.001774 | 0.002245 | 0.001899 |
| mp_unique.test | RUN | 0.270682 | 1.686995 | 1.232727 | 0.001795 | 0.001958 | 0.001950 |
| mp_unique_if.test | RUN | 0.460706 | 3.453188 | 1.864690 | 0.001670 | 0.001917 | 0.001540 |
| mp_unique_if_q.test | RUN | 0.408615 | 3.344841 | 1.517724 | 0.001780 | 0.001919 | 0.001937 |
| mp_all_of.test | RUN | 0.625688 | 1.848331 | 2.046407 | 0.002036 | 0.002014 | 0.002134 |
| mp_all_of_q.test | RUN | 0.245866 | 0.844485 | 0.931379 | 0.002071 | 0.002062 | 0.001920 |
| mp_any_of.test | RUN | 0.605774 | 1.919346 | 2.019060 | 0.002024 | 0.002100 | 0.001724 |
| mp_any_of_q.test | RUN | 0.233010 | 0.853398 | 0.975967 | 0.002034 | 0.002008 | 0.001926 |
| mp_none_of.test | RUN | 0.623271 | 1.912018 | 2.063876 | 0.001916 | 0.001982 | 0.002126 |
| mp_none_of_q.test | RUN | 0.233252 | 0.811688 | 0.868237 | 0.001892 | 0.002108 | 0.001978 |
| mp_replace_at.test | RUN | 0.279917 | 1.692387 | 1.241625 | 0.001936 | 0.001880 | 0.002261 |
| mp_replace_at_c.test | RUN | 0.288009 | 1.715973 | 1.382311 | 0.001958 | 0.002125 | 0.001690 |
| mp_for_each.test | RUN | 0.281161 | 1.203002 | 1.530206 | 0.002014 | 0.001848 | 0.002070 |
| mp_insert.test | RUN | 0.427488 | 3.369614 | 1.849568 | 0.001920 | 0.001877 | 0.002127 |
| mp_insert_2.test | RUN | 0.038748 | 0.076007 | 0.142688 | 0.000829 | 0.000784 | 0.002160 |
| mp_erase.test | RUN | 0.451232 | 3.576210 | 2.328869 | 0.002005 | 0.002276 | 0.002044 |
| mp_erase_2.test | RUN | 0.036039 | 0.080923 | 0.128615 | 0.000716 | 0.000988 | 0.002074 |
| mp_with_index.test | RUN | 0.650469 | 7.314573 | 4.851333 | 0.002679 | 0.002526 | 0.002410 |
| mp_with_index_cx.test | RUN | 0.003998 | 0.023692 | 0.030278 | 0.000834 | 0.000874 | 0.001951 |
| mp_from_sequence.test | RUN | 0.283509 | 1.923991 | 1.277931 | 0.002013 | 0.002058 | 0.001782 |
| mp_from_sequence_2.test | RUN | 0.290177 | 2.265073 | 1.407654 | 0.001406 | 0.002058 | 0.002008 |
| mp_from_sequence_3.test | RUN | 0.250416 | 1.011233 | 1.023289 | 0.001892 | 0.002179 | 0.001718 |
| mp_min_element.test | RUN | 0.246613 | 0.914635 | 0.998507 | 0.002107 | 0.002124 | 0.001978 |
| mp_min_element_2.test | RUN | 0.036831 | 0.079041 | 0.142746 | 0.000664 | 0.000814 | 0.002026 |
| mp_min_element_q.test | RUN | 0.247507 | 0.914920 | 0.920112 | 0.001842 | 0.001962 | 0.002081 |
| mp_min_element_q_2.test | RUN | 0.038903 | 0.080577 | 0.139414 | 0.000783 | 0.000975 | 0.002158 |
| mp_max_element.test | RUN | 0.243709 | 0.939902 | 0.915125 | 0.001914 | 0.002076 | 0.002142 |
| mp_max_element_2.test | RUN | 0.036804 | 0.078100 | 0.148241 | 0.000678 | 0.000777 | 0.001828 |
| mp_max_element_q.test | RUN | 0.243388 | 0.946108 | 0.949397 | 0.001785 | 0.002049 | 0.002088 |
| mp_max_element_q_2.test | RUN | 0.037574 | 0.078473 | 0.130354 | 0.000726 | 0.000866 | 0.001738 |
| mp_nth_element.test | RUN | 0.272624 | 1.293831 | 1.152460 | 0.001744 | 0.002148 | 0.001820 |
| mp_nth_element_q.test | RUN | 0.265604 | 1.265886 | 1.132998 | 0.001778 | 0.001944 | 0.002133 |
| mp_back.test | RUN | 0.255384 | 1.070203 | 1.073223 | 0.001750 | 0.001834 | 0.001862 |
| mp_back_2.test | RUN | 0.037379 | 0.074390 | 0.144705 | 0.000744 | 0.000814 | 0.002030 |
| mp_pop_back.test | RUN | 0.685724 | 6.761112 | 2.113004 | 0.001728 | 0.002092 | 0.001903 |
| mp_pop_back_2.test | RUN | 0.038305 | 0.075275 | 0.135900 | 0.000850 | 0.000883 | 0.001682 |
| mp_flatten.test | RUN | 0.302394 | 2.445999 | 1.523402 | 0.002082 | 0.002112 | 0.001827 |
| mp_rotate_left.test | RUN | 0.307387 | 2.613904 | 1.488216 | 0.001906 | 0.002080 | 0.001710 |
| mp_rotate_right.test | RUN | 0.307095 | 2.614462 | 1.480838 | 0.002065 | 0.001628 | 0.002006 |
| mp_power_set.test | RUN | 0.300348 | 2.487751 | 1.478176 | 0.001882 | 0.002066 | 0.001836 |
| mp_partial_sum.test | RUN | 0.400919 | 3.335871 | 1.688352 | 0.001968 | 0.002054 | 0.002042 |
| mp_iterate.test | RUN | 0.265008 | 1.023643 | 1.219108 | 0.001780 | 0.002160 | 0.002048 |
| mp_pairwise_fold.test | RUN | 0.309880 | 2.331147 | 1.496553 | 0.001806 | 0.002184 | 0.002066 |
| mp_pairwise_fold_q.test | RUN | 0.242803 | 0.705394 | 0.896347 | 0.002138 | 0.001860 | 0.002250 |
| mp_sliding_fold.test | RUN | 0.573426 | 4.401463 | 2.684457 | 0.002119 | 0.002112 | 0.002072 |
| mp_sliding_fold_q.test | RUN | 0.558707 | 4.395516 | 2.696839 | 0.001787 | 0.001780 | 0.001675 |
| mp_intersperse.test | RUN | 0.287684 | 1.692221 | 1.330306 | 0.002074 | 0.001966 | 0.002125 |
| mp_split.test | RUN | 0.394357 | 3.194568 | 1.817884 | 0.002096 | 0.002131 | 0.001885 |
| mp_join.test | RUN | 0.318562 | 2.676479 | 1.657548 | 0.001848 | 0.002068 | 0.001688 |
| integral.test | RUN | 0.245432 | 1.200145 | 0.990089 | 0.001951 | 0.002241 | 0.002024 |
| mp_value.test | RUN | 0.015780 | 0.039331 | 0.059576 | 0.000722 | 0.000843 | 0.002030 |
| mp_identity.test | RUN | 0.237299 | 1.100751 | 0.972338 | 0.002064 | 0.002044 | 0.002136 |
| mp_inherit.test | RUN | 0.229400 | 0.796915 | 0.919526 | 0.001975 | 0.002122 | 0.002106 |
| mp_if.test | RUN | 0.227681 | 0.915613 | 0.903210 | 0.002062 | 0.001997 | 0.001814 |
| mp_if_sf.test | RUN | 0.225089 | 0.692685 | 0.824080 | 0.002016 | 0.001978 | 0.001915 |
| mp_eval_if.test | RUN | 0.239420 | 0.981144 | 0.942720 | 0.001799 | 0.001882 | 0.002154 |
| mp_eval_if_sf.test | RUN | 0.224602 | 0.701084 | 0.868811 | 0.001902 | 0.001898 | 0.001894 |
| mp_valid.test | RUN | 0.234573 | 0.709153 | 0.821630 | 0.002037 | 0.002015 | 0.002183 |
| mp_defer.test | RUN | 0.245225 | 1.190410 | 1.006275 | 0.002074 | 0.001982 | 0.002079 |
| mp_quote.test | RUN | 0.249531 | 1.188244 | 1.020002 | 0.002072 | 0.002169 | 0.002039 |
| mp_invoke_q.test | RUN | 0.259063 | 1.537332 | 1.138590 | 0.001960 | 0.002097 | 0.002132 |
| mp_invoke_q_sf.test | RUN | 0.223964 | 0.707847 | 0.829997 | 0.001782 | 0.002226 | 0.001960 |
| mp_quote_trait.test | RUN | 0.239741 | 1.283363 | 1.003191 | 0.001890 | 0.002032 | 0.002173 |
| mp_cond.test | RUN | 0.232008 | 0.811044 | 0.887269 | 0.001876 | 0.001945 | 0.001766 |
| mp_cond_sf.test | RUN | 0.219923 | 0.703150 | 0.850397 | 0.001888 | 0.002179 | 0.002104 |
| mp_not_fn.test | RUN | 0.216381 | 0.686869 | 0.831840 | 0.001636 | 0.002184 | 0.001847 |
| mp_eval_if_not.test | RUN | 0.232376 | 0.987112 | 0.946330 | 0.002030 | 0.001998 | 0.002200 |
| mp_eval_or.test | RUN | 0.221739 | 0.531252 | 0.878768 | 0.001972 | 0.002056 | 0.001948 |
| mp_compose.test | RUN | 0.249360 | 1.587145 | 1.089733 | 0.002042 | 0.001908 | 0.002152 |
| mp_valid_and_true.test | RUN | 0.227918 | 0.810672 | 0.875246 | 0.001766 | 0.002103 | 0.001968 |
| mp_compose_sf.test | COMPILE | 0.055522 | 0.105924 | 0.218525 | — | — | — |
| integer_sequence.test | RUN | 0.269346 | 1.567903 | 1.252615 | 0.001888 | 0.002036 | 0.001916 |
| tuple_for_each.test | RUN | 0.231693 | 0.627908 | 0.955523 | 0.001907 | 0.002079 | 0.002122 |
| tuple_for_each_cx.test | COMPILE | 0.042379 | 0.090569 | 0.139752 | — | — | — |
| tuple_apply.test | RUN | 0.236194 | 0.595030 | 0.936521 | 0.001707 | 0.001830 | 0.002025 |
| tuple_apply_cx.test | COMPILE | 0.062499 | 0.128562 | 0.231059 | — | — | — |
| construct_from_tuple.test | RUN | 0.242025 | 0.644168 | 0.946762 | 0.001999 | 0.001769 | 0.001897 |
| construct_from_tuple_cx.test | COMPILE | 0.063852 | 0.120851 | 0.231741 | — | — | — |
| tuple_transform.test | RUN | 0.372197 | 1.280280 | 1.797984 | 0.001778 | 0.001950 | 0.001836 |
| tuple_transform_2.test | RUN | 0.331910 | 0.976052 | 1.653080 | 0.001842 | 0.001809 | 0.001854 |
| tuple_transform_cx.test | COMPILE | 0.054730 | 0.110919 | 0.231332 | — | — | — |
| mp_set_contains.test | RUN | 0.238658 | 0.833248 | 0.938261 | 0.002040 | 0.001841 | 0.002086 |
| mp_set_push_back.test | RUN | 0.302778 | 2.522560 | 1.513902 | 0.002094 | 0.002119 | 0.002070 |
| mp_set_push_front.test | RUN | 0.384009 | 2.995586 | 1.717098 | 0.002066 | 0.001972 | 0.002124 |
| mp_is_set.test | RUN | 0.240307 | 0.842111 | 0.904949 | 0.002048 | 0.002025 | 0.002084 |
| mp_set_union.test | RUN | 0.293258 | 2.160045 | 1.434312 | 0.001874 | 0.002056 | 0.001916 |
| mp_set_union_sf.test | RUN | 0.221154 | 0.680069 | 0.854583 | 0.001804 | 0.002158 | 0.002231 |
| mp_set_difference.test | RUN | 0.269998 | 1.689160 | 1.180945 | 0.002064 | 0.002062 | 0.001930 |
| mp_set_difference_sf.test | RUN | 0.225986 | 0.706476 | 0.838517 | 0.001722 | 0.002051 | 0.001841 |
| mp_set_intersection.test | RUN | 0.264893 | 1.682334 | 1.219948 | 0.001754 | 0.001996 | 0.002136 |
| mp_set_intersection_sf.test | RUN | 0.228229 | 0.679645 | 0.844273 | 0.001986 | 0.001911 | 0.002115 |
| mp_all.test | RUN | 0.234251 | 0.821577 | 0.879034 | 0.002080 | 0.002124 | 0.002206 |
| mp_all_2.test | RUN | 0.608627 | 1.748047 | 2.004323 | 0.001913 | 0.002104 | 0.002000 |
| mp_and.test | RUN | 0.230313 | 0.848733 | 0.860027 | 0.001852 | 0.001944 | 0.001904 |
| mp_any.test | RUN | 0.228154 | 0.849044 | 0.929442 | 0.001698 | 0.002002 | 0.002178 |
| mp_any_2.test | RUN | 0.609067 | 1.673013 | 1.999882 | 0.001952 | 0.002114 | 0.001783 |
| mp_or.test | RUN | 0.228971 | 0.844370 | 0.867488 | 0.002056 | 0.002230 | 0.002208 |
| mp_same.test | RUN | 0.421180 | 1.334512 | 1.304071 | 0.001840 | 0.002076 | 0.001558 |
| mp_plus.test | RUN | 0.235380 | 0.969370 | 1.021676 | 0.001840 | 0.001884 | 0.002119 |
| mp_less.test | RUN | 0.234135 | 0.823851 | 0.948290 | 0.001842 | 0.002172 | 0.001978 |
| mp_min.test | RUN | 0.225682 | 0.768336 | 0.868289 | 0.001916 | 0.002036 | 0.001823 |
| mp_max.test | RUN | 0.232013 | 0.846074 | 0.895111 | 0.001860 | 0.001927 | 0.001662 |
| mp_similar.test | RUN | 0.232091 | 0.834433 | 0.941893 | 0.001909 | 0.001886 | 0.002028 |
| mp_map_find.test | RUN | 0.269781 | 1.500527 | 1.180444 | 0.001896 | 0.002170 | 0.002100 |
| mp_map_find_2.test | RUN | 0.255299 | 0.598982 | 1.050121 | 0.001990 | 0.002172 | 0.001941 |
| mp_map_find_3.test | RUN | 0.255277 | 0.597000 | 1.033876 | 0.001869 | 0.001726 | 0.001890 |
| mp_map_find_4.test | RUN | 0.232114 | 0.565739 | 0.899247 | 0.001666 | 0.001987 | 0.002152 |
| mp_map_contains.test | RUN | 0.240875 | 0.868261 | 0.940274 | 0.002162 | 0.002164 | 0.001992 |
| mp_map_insert.test | RUN | 0.311529 | 2.827501 | 1.628845 | 0.001884 | 0.002206 | 0.001947 |
| mp_map_replace.test | RUN | 0.405512 | 3.202367 | 1.876992 | 0.001826 | 0.002213 | 0.001847 |
| mp_map_erase.test | RUN | 0.300256 | 2.405146 | 1.586040 | 0.001740 | 0.002136 | 0.001891 |
| mp_map_update.test | RUN | 0.278841 | 1.554528 | 1.204945 | 0.002064 | 0.002176 | 0.001644 |
| mp_map_update_q.test | RUN | 0.271853 | 1.597624 | 1.229503 | 0.002044 | 0.002064 | 0.002034 |
| mp_map_keys.test | RUN | 0.264140 | 1.409607 | 1.216996 | 0.001890 | 0.002092 | 0.001919 |
| mp_is_map.test | RUN | 0.246784 | 0.859759 | 0.999937 | 0.001984 | 0.001817 | 0.001639 |
| mp_bind.test | RUN | 0.305458 | 2.481870 | 1.400652 | 0.001994 | 0.001789 | 0.002056 |
| mp_bind_q.test | RUN | 0.274753 | 1.535778 | 1.184322 | 0.001738 | 0.001940 | 0.001690 |
| mp_bind_front.test | RUN | 0.256759 | 1.691087 | 1.152570 | 0.001900 | 0.001976 | 0.001739 |
| mp_bind_back.test | RUN | 0.263693 | 1.688285 | 1.113687 | 0.002048 | 0.002200 | 0.001480 |
| mp_lambda.test | RUN | 0.572706 | 4.994373 | 2.834976 | 0.001908 | 0.001442 | 0.002082 |
| mpl.test | RUN | 0.515011 | 1.387140 | 2.286357 | 0.002048 | 0.002063 | 0.002174 |
| mpl_list.test | RUN | 0.297997 | 1.023079 | 1.125082 | 0.001864 | 0.002079 | 0.001946 |
| mpl_tuple.test | RUN | 0.293089 | 1.023316 | 1.131220 | 0.001908 | 0.001897 | 0.001342 |
| version.test | RUN | 0.153257 | 0.376618 | 0.609228 | 0.001950 | 0.002150 | 0.002048 |
| mp11_version.test | RUN | 0.185231 | 0.438413 | 0.698240 | 0.001626 | 0.001962 | 0.001780 |
| list_version.test | RUN | 0.159551 | 0.379323 | 0.559103 | 0.001927 | 0.001972 | 0.002010 |
| algorithm_version.test | RUN | 0.168021 | 0.413253 | 0.632243 | 0.001876 | 0.002117 | 0.001768 |
| integral_version.test | RUN | 0.149195 | 0.380816 | 0.559186 | 0.001888 | 0.002070 | 0.001632 |
| utility_version.test | RUN | 0.154090 | 0.375890 | 0.595385 | 0.001896 | 0.001942 | 0.002168 |
| function_version.test | RUN | 0.156027 | 0.384540 | 0.625320 | 0.001767 | 0.002156 | 0.002100 |
| map_version.test | RUN | 0.167832 | 0.410176 | 0.637682 | 0.001986 | 0.002044 | 0.001980 |
| set_version.test | RUN | 0.161909 | 0.393989 | 0.582885 | 0.001936 | 0.001867 | 0.002047 |
| bind_version.test | RUN | 0.168383 | 0.405050 | 0.619559 | 0.001634 | 0.002178 | 0.001985 |
| integer_sequence_version.test | RUN | 0.147741 | 0.387235 | 0.560735 | 0.001616 | 0.001882 | 0.002225 |
| tuple_version.test | RUN | 0.175426 | 0.404141 | 0.552397 | 0.001590 | 0.002084 | 0.001382 |
| mpl_version.test | RUN | 0.130581 | 0.377678 | 0.478378 | 0.001411 | 0.001497 | 0.001540 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 1.001× | 0.999×, 1.003× | 0.996× |
| clang | 1.086× | 1.086×, 1.087× | 0.998× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1359 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43674678137).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| algorithm_version.test | 10 | 0.001173s | 0.001164s | 0.001168s | byte equality observed |
| bind_version.test | 10 | 0.001160s | 0.001154s | 0.001179s | byte equality observed |
| construct_from_tuple.test | 10 | 0.001155s | 0.001206s | 0.001165s | byte equality observed |
| function_version.test | 10 | 0.001144s | 0.001176s | 0.001163s | byte equality observed |
| integer_sequence.test | 10 | 0.001167s | 0.001186s | 0.001203s | byte equality observed |
| integer_sequence_version.test | 10 | 0.001175s | 0.001166s | 0.001242s | byte equality observed |
| integral.test | 10 | 0.001148s | 0.001177s | 0.001234s | byte equality observed |
| integral_version.test | 10 | 0.001133s | 0.001162s | 0.001313s | byte equality observed |
| list_version.test | 10 | 0.001157s | 0.001149s | 0.001254s | byte equality observed |
| map_version.test | 10 | 0.001156s | 0.001144s | 0.001307s | byte equality observed |
| mp11_version.test | 10 | 0.001159s | 0.001148s | 0.001277s | byte equality observed |
| mp_all.test | 10 | 0.001156s | 0.001172s | 0.001269s | byte equality observed |
| mp_all_2.test | 10 | 0.001186s | 0.001167s | 0.001322s | byte equality observed |
| mp_all_of.test | 10 | 0.001205s | 0.001163s | 0.001280s | byte equality observed |
| mp_all_of_q.test | 10 | 0.001213s | 0.001161s | 0.001269s | byte equality observed |
| mp_and.test | 10 | 0.001241s | 0.001163s | 0.001218s | byte equality observed |
| mp_any.test | 10 | 0.001246s | 0.001154s | 0.001272s | byte equality observed |
| mp_any_2.test | 10 | 0.001276s | 0.001168s | 0.001227s | byte equality observed |
| mp_any_of.test | 10 | 0.001288s | 0.001167s | 0.001254s | byte equality observed |
| mp_any_of_q.test | 10 | 0.001243s | 0.001173s | 0.001237s | byte equality observed |
| mp_append.test | 10 | 0.001245s | 0.001173s | 0.001234s | byte equality observed |
| mp_append_2.test | 10 | 0.001294s | 0.001198s | 0.001239s | byte equality observed |
| mp_append_3.test | 10 | 0.000584s | 0.000557s | 0.001258s | byte equality observed |
| mp_append_sf.test | 10 | 0.001264s | 0.001185s | 0.001235s | byte equality observed |
| mp_apply_q.test | 10 | 0.001271s | 0.001229s | 0.001300s | byte equality observed |
| mp_apply_q_sf.test | 10 | 0.001244s | 0.001220s | 0.001232s | byte equality observed |
| mp_assign.test | 10 | 0.001259s | 0.001269s | 0.001244s | byte equality observed |
| mp_assign_2.test | 10 | 0.000555s | 0.000590s | 0.001238s | byte equality observed |
| mp_at.test | 10 | 0.001273s | 0.001284s | 0.001210s | byte equality observed |
| mp_at_2.test | 10 | 0.000564s | 0.000587s | 0.001268s | byte equality observed |
| mp_at_sf.test | 10 | 0.001233s | 0.001296s | 0.001236s | byte equality observed |
| mp_back.test | 10 | 0.001224s | 0.001255s | 0.001268s | byte equality observed |
| mp_back_2.test | 10 | 0.000575s | 0.000579s | 0.001282s | byte equality observed |
| mp_bind.test | 10 | 0.001251s | 0.001289s | 0.001272s | byte equality observed |
| mp_bind_back.test | 10 | 0.001229s | 0.001241s | 0.001260s | byte equality observed |
| mp_bind_front.test | 10 | 0.001222s | 0.001259s | 0.001272s | byte equality observed |
| mp_bind_q.test | 10 | 0.001215s | 0.001247s | 0.001218s | byte equality observed |
| mp_clear.test | 10 | 0.001256s | 0.001276s | 0.001221s | byte equality observed |
| mp_clear_2.test | 10 | 0.000572s | 0.000577s | 0.001252s | byte equality observed |
| mp_compose.test | 10 | 0.001221s | 0.001227s | 0.001242s | byte equality observed |
| mp_cond.test | 10 | 0.001235s | 0.001228s | 0.001264s | byte equality observed |
| mp_cond_sf.test | 10 | 0.001240s | 0.001254s | 0.001250s | byte equality observed |
| mp_contains.test | 10 | 0.001262s | 0.001314s | 0.001251s | byte equality observed |
| mp_copy_if.test | 10 | 0.001259s | 0.001279s | 0.001257s | byte equality observed |
| mp_copy_if_q.test | 10 | 0.001271s | 0.001332s | 0.001217s | byte equality observed |
| mp_count.test | 10 | 0.001316s | 0.001303s | 0.001297s | byte equality observed |
| mp_count_if.test | 10 | 0.001249s | 0.001259s | 0.001273s | byte equality observed |
| mp_count_if_q.test | 10 | 0.001254s | 0.001302s | 0.001257s | byte equality observed |
| mp_defer.test | 10 | 0.001266s | 0.001272s | 0.001250s | byte equality observed |
| mp_drop.test | 10 | 0.001279s | 0.001267s | 0.001222s | byte equality observed |
| mp_drop_2.test | 6 | 0.000577s | 0.000571s | 0.001231s | byte equality observed |
| mp_empty.test | 10 | 0.001229s | 0.001324s | 0.001243s | byte equality observed |
| mp_empty_2.test | 10 | 0.000584s | 0.000548s | 0.001215s | byte equality observed |
| mp_erase.test | 10 | 0.001295s | 0.001321s | 0.001213s | byte equality observed |
| mp_erase_2.test | 10 | 0.000567s | 0.000577s | 0.001295s | byte equality observed |
| mp_eval_if.test | 10 | 0.001289s | 0.001263s | 0.001259s | byte equality observed |
| mp_eval_if_not.test | 10 | 0.001247s | 0.001290s | 0.001224s | byte equality observed |
| mp_eval_if_sf.test | 10 | 0.001262s | 0.001293s | 0.001274s | byte equality observed |
| mp_eval_or.test | 10 | 0.001255s | 0.001273s | 0.001219s | byte equality observed |
| mp_fill.test | 10 | 0.001254s | 0.001276s | 0.001217s | byte equality observed |
| mp_fill_2.test | 10 | 0.000585s | 0.000578s | 0.001202s | byte equality observed |
| mp_filter.test | 10 | 0.001217s | 0.001254s | 0.001229s | byte equality observed |
| mp_find.test | 10 | 0.001273s | 0.001269s | 0.001260s | byte equality observed |
| mp_find_if.test | 10 | 0.001245s | 0.001260s | 0.001207s | byte equality observed |
| mp_find_if_q.test | 10 | 0.001250s | 0.001213s | 0.001225s | byte equality observed |
| mp_flatten.test | 10 | 0.001252s | 0.001282s | 0.001261s | byte equality observed |
| mp_fold.test | 10 | 0.001271s | 0.001297s | 0.001244s | byte equality observed |
| mp_fold_q.test | 10 | 0.001272s | 0.001273s | 0.001289s | byte equality observed |
| mp_fold_q_sf.test | 10 | 0.001245s | 0.001282s | 0.001280s | byte equality observed |
| mp_for_each.test | 10 | 0.001242s | 0.001229s | 0.001245s | byte equality observed |
| mp_from_sequence.test | 10 | 0.001258s | 0.001281s | 0.001261s | byte equality observed |
| mp_from_sequence_2.test | 10 | 0.001240s | 0.001277s | 0.001272s | byte equality observed |
| mp_from_sequence_3.test | 10 | 0.001252s | 0.001242s | 0.001240s | byte equality observed |
| mp_front.test | 10 | 0.001274s | 0.001251s | 0.001225s | byte equality observed |
| mp_front_2.test | 10 | 0.000567s | 0.000563s | 0.001260s | byte equality observed |
| mp_identity.test | 10 | 0.001229s | 0.001246s | 0.001194s | byte equality observed |
| mp_if.test | 10 | 0.001250s | 0.001272s | 0.001200s | byte equality observed |
| mp_if_sf.test | 10 | 0.001236s | 0.001274s | 0.001184s | byte equality observed |
| mp_inherit.test | 10 | 0.001259s | 0.001264s | 0.001198s | byte equality observed |
| mp_insert.test | 10 | 0.001257s | 0.001250s | 0.001228s | byte equality observed |
| mp_insert_2.test | 10 | 0.000564s | 0.000583s | 0.001183s | byte equality observed |
| mp_intersperse.test | 10 | 0.001307s | 0.001333s | 0.001271s | byte equality observed |
| mp_invoke_q.test | 10 | 0.001247s | 0.001249s | 0.001257s | byte equality observed |
| mp_invoke_q_sf.test | 10 | 0.001267s | 0.001258s | 0.001231s | byte equality observed |
| mp_iota.test | 10 | 0.001256s | 0.001303s | 0.001302s | byte equality observed |
| mp_iota_2.test | 10 | 0.001262s | 0.001248s | 0.001247s | byte equality observed |
| mp_is_list.test | 10 | 0.001249s | 0.001227s | 0.001233s | byte equality observed |
| mp_is_map.test | 10 | 0.001268s | 0.001248s | 0.001235s | byte equality observed |
| mp_is_set.test | 10 | 0.001239s | 0.001244s | 0.001241s | byte equality observed |
| mp_is_value_list.test | 10 | 0.001231s | 0.001242s | 0.001207s | byte equality observed |
| mp_iterate.test | 10 | 0.001253s | 0.001280s | 0.001230s | byte equality observed |
| mp_join.test | 10 | 0.001272s | 0.001198s | 0.001300s | byte equality observed |
| mp_lambda.test | 10 | 0.001279s | 0.001229s | 0.001256s | byte equality observed |
| mp_less.test | 10 | 0.001304s | 0.001226s | 0.001266s | byte equality observed |
| mp_list_c.test | 10 | 0.001255s | 0.001219s | 0.001245s | byte equality observed |
| mp_list_v.test | 10 | 0.000563s | 0.000578s | 0.001223s | byte equality observed |
| mp_map_contains.test | 10 | 0.001246s | 0.001247s | 0.001225s | byte equality observed |
| mp_map_erase.test | 10 | 0.001259s | 0.001302s | 0.001249s | byte equality observed |
| mp_map_find.test | 10 | 0.001290s | 0.001243s | 0.001328s | byte equality observed |
| mp_map_find_2.test | 10 | 0.001242s | 0.001207s | 0.001256s | byte equality observed |
| mp_map_find_3.test | 10 | 0.001250s | 0.001266s | 0.001250s | byte equality observed |
| mp_map_find_4.test | 10 | 0.001247s | 0.001223s | 0.001312s | byte equality observed |
| mp_map_insert.test | 10 | 0.001270s | 0.001246s | 0.001274s | byte equality observed |
| mp_map_keys.test | 10 | 0.001230s | 0.001263s | 0.001278s | byte equality observed |
| mp_map_replace.test | 10 | 0.001271s | 0.001274s | 0.001241s | byte equality observed |
| mp_map_update.test | 10 | 0.001226s | 0.001245s | 0.001286s | byte equality observed |
| mp_map_update_q.test | 10 | 0.001302s | 0.001295s | 0.001282s | byte equality observed |
| mp_max.test | 10 | 0.001243s | 0.001262s | 0.001313s | byte equality observed |
| mp_max_element.test | 10 | 0.001249s | 0.001267s | 0.001257s | byte equality observed |
| mp_max_element_2.test | 10 | 0.000574s | 0.000581s | 0.001209s | byte equality observed |
| mp_max_element_q.test | 10 | 0.001285s | 0.001271s | 0.001230s | byte equality observed |
| mp_max_element_q_2.test | 10 | 0.000563s | 0.000573s | 0.001214s | byte equality observed |
| mp_min.test | 10 | 0.001256s | 0.001220s | 0.001263s | byte equality observed |
| mp_min_element.test | 10 | 0.001285s | 0.001271s | 0.001250s | byte equality observed |
| mp_min_element_2.test | 10 | 0.000569s | 0.000566s | 0.001344s | byte equality observed |
| mp_min_element_q.test | 10 | 0.001290s | 0.001317s | 0.001207s | byte equality observed |
| mp_min_element_q_2.test | 10 | 0.000576s | 0.000559s | 0.001235s | byte equality observed |
| mp_none_of.test | 10 | 0.001242s | 0.001269s | 0.001272s | byte equality observed |
| mp_none_of_q.test | 10 | 0.001257s | 0.001266s | 0.001270s | byte equality observed |
| mp_not_fn.test | 10 | 0.001258s | 0.001260s | 0.001286s | byte equality observed |
| mp_nth_element.test | 10 | 0.001268s | 0.001254s | 0.001259s | byte equality observed |
| mp_nth_element_q.test | 10 | 0.001259s | 0.001272s | 0.001265s | byte equality observed |
| mp_or.test | 10 | 0.001281s | 0.001214s | 0.001241s | byte equality observed |
| mp_pairwise_fold.test | 10 | 0.001262s | 0.001280s | 0.001285s | byte equality observed |
| mp_pairwise_fold_q.test | 10 | 0.001232s | 0.001238s | 0.001246s | byte equality observed |
| mp_partial_sum.test | 10 | 0.001240s | 0.001210s | 0.001261s | byte equality observed |
| mp_partition.test | 10 | 0.001252s | 0.001217s | 0.001239s | byte equality observed |
| mp_partition_q.test | 10 | 0.001247s | 0.001260s | 0.001224s | byte equality observed |
| mp_plus.test | 10 | 0.001281s | 0.001263s | 0.001285s | byte equality observed |
| mp_pop_back.test | 10 | 0.001304s | 0.001300s | 0.001211s | byte equality observed |
| mp_pop_back_2.test | 10 | 0.000578s | 0.000585s | 0.001286s | byte equality observed |
| mp_pop_front.test | 10 | 0.001275s | 0.001289s | 0.001207s | byte equality observed |
| mp_pop_front_2.test | 4 | 0.000562s | 0.000555s | 0.001254s | byte equality observed |
| mp_power_set.test | 10 | 0.001279s | 0.001281s | 0.001271s | byte equality observed |
| mp_product.test | 10 | 0.001272s | 0.001262s | 0.001292s | byte equality observed |
| mp_push_back.test | 10 | 0.001264s | 0.001286s | 0.001240s | byte equality observed |
| mp_push_back_2.test | 10 | 0.000571s | 0.000575s | 0.001246s | byte equality observed |
| mp_push_front.test | 10 | 0.001263s | 0.001324s | 0.001216s | byte equality observed |
| mp_push_front_2.test | 10 | 0.000573s | 0.000569s | 0.001260s | byte equality observed |
| mp_quote.test | 10 | 0.001240s | 0.001239s | 0.001238s | byte equality observed |
| mp_quote_trait.test | 10 | 0.001247s | 0.001250s | 0.001297s | byte equality observed |
| mp_remove.test | 10 | 0.001217s | 0.001277s | 0.001258s | byte equality observed |
| mp_remove_if.test | 10 | 0.001270s | 0.001278s | 0.001235s | byte equality observed |
| mp_remove_if_q.test | 10 | 0.001288s | 0.001289s | 0.001266s | byte equality observed |
| mp_rename.test | 10 | 0.001281s | 0.001274s | 0.001313s | byte equality observed |
| mp_rename_2.test | 10 | 0.000586s | 0.000575s | 0.001198s | byte equality observed |
| mp_rename_v.test | 10 | 0.000574s | 0.000595s | 0.001246s | byte equality observed |
| mp_repeat.test | 10 | 0.001281s | 0.001264s | 0.001205s | byte equality observed |
| mp_repeat_2.test | 10 | 0.000580s | 0.000565s | 0.001273s | byte equality observed |
| mp_repeat_3.test | 10 | 0.001221s | 0.001207s | 0.001272s | byte equality observed |
| mp_replace.test | 10 | 0.001247s | 0.001253s | 0.001241s | byte equality observed |
| mp_replace_at.test | 10 | 0.001245s | 0.001259s | 0.001241s | byte equality observed |
| mp_replace_at_c.test | 10 | 0.001251s | 0.001251s | 0.001287s | byte equality observed |
| mp_replace_front.test | 10 | 0.001251s | 0.001272s | 0.001217s | byte equality observed |
| mp_replace_front_2.test | 10 | 0.000583s | 0.000589s | 0.001324s | byte equality observed |
| mp_replace_if.test | 10 | 0.001258s | 0.001287s | 0.001220s | byte equality observed |
| mp_replace_if_q.test | 10 | 0.001241s | 0.001222s | 0.001279s | byte equality observed |
| mp_replace_second.test | 10 | 0.001252s | 0.001294s | 0.001239s | byte equality observed |
| mp_replace_second_2.test | 10 | 0.000579s | 0.000572s | 0.001246s | byte equality observed |
| mp_replace_third.test | 10 | 0.001249s | 0.001303s | 0.001214s | byte equality observed |
| mp_replace_third_2.test | 10 | 0.000562s | 0.000569s | 0.001242s | byte equality observed |
| mp_reverse.test | 10 | 0.001269s | 0.001275s | 0.001246s | byte equality observed |
| mp_reverse_fold.test | 10 | 0.001289s | 0.001258s | 0.001275s | byte equality observed |
| mp_reverse_fold_q.test | 10 | 0.001258s | 0.001295s | 0.001285s | byte equality observed |
| mp_rotate_left.test | 10 | 0.001262s | 0.001254s | 0.001271s | byte equality observed |
| mp_rotate_right.test | 10 | 0.001247s | 0.001252s | 0.001234s | byte equality observed |
| mp_same.test | 10 | 0.001239s | 0.001261s | 0.001232s | byte equality observed |
| mp_second.test | 10 | 0.001248s | 0.001289s | 0.001215s | byte equality observed |
| mp_second_2.test | 10 | 0.000573s | 0.000570s | 0.001247s | byte equality observed |
| mp_set_contains.test | 10 | 0.001273s | 0.001241s | 0.001235s | byte equality observed |
| mp_set_difference.test | 10 | 0.001277s | 0.001232s | 0.001319s | byte equality observed |
| mp_set_difference_sf.test | 10 | 0.001253s | 0.001200s | 0.001273s | byte equality observed |
| mp_set_intersection.test | 10 | 0.001295s | 0.001265s | 0.001211s | byte equality observed |
| mp_set_intersection_sf.test | 10 | 0.001226s | 0.001321s | 0.001282s | byte equality observed |
| mp_set_push_back.test | 10 | 0.001253s | 0.001270s | 0.001227s | byte equality observed |
| mp_set_push_front.test | 9 | 0.001285s | 0.001240s | 0.001258s | byte equality observed |
| mp_set_union.test | 10 | 0.001287s | 0.001233s | 0.001256s | byte equality observed |
| mp_set_union_sf.test | 10 | 0.001264s | 0.001252s | 0.001216s | byte equality observed |
| mp_similar.test | 10 | 0.001225s | 0.001268s | 0.001289s | byte equality observed |
| mp_size.test | 10 | 0.001265s | 0.001264s | 0.001234s | byte equality observed |
| mp_size_2.test | 10 | 0.000569s | 0.000578s | 0.001202s | byte equality observed |
| mp_slice.test | 10 | 0.001298s | 0.001295s | 0.001216s | byte equality observed |
| mp_slice_2.test | 10 | 0.000566s | 0.000569s | 0.001187s | byte equality observed |
| mp_sliding_fold.test | 10 | 0.001298s | 0.001241s | 0.001216s | byte equality observed |
| mp_sliding_fold_q.test | 10 | 0.001295s | 0.001268s | 0.001211s | byte equality observed |
| mp_sort.test | 10 | 0.001270s | 0.001270s | 0.001192s | byte equality observed |
| mp_sort_q.test | 10 | 0.001244s | 0.001302s | 0.001307s | byte equality observed |
| mp_split.test | 10 | 0.001274s | 0.001285s | 0.001300s | byte equality observed |
| mp_starts_with.test | 10 | 0.001246s | 0.001309s | 0.001252s | byte equality observed |
| mp_starts_with_sf.test | 10 | 0.001266s | 0.001239s | 0.001222s | byte equality observed |
| mp_take.test | 10 | 0.001257s | 0.001319s | 0.001256s | byte equality observed |
| mp_take_2.test | 10 | 0.000578s | 0.000575s | 0.001186s | byte equality observed |
| mp_third.test | 10 | 0.001286s | 0.001262s | 0.001223s | byte equality observed |
| mp_third_2.test | 10 | 0.000583s | 0.000564s | 0.001198s | byte equality observed |
| mp_transform.test | 10 | 0.001244s | 0.001246s | 0.001225s | byte equality observed |
| mp_transform_2.test | 10 | 0.001259s | 0.001220s | 0.001211s | byte equality observed |
| mp_transform_front.test | 10 | 0.001265s | 0.001289s | 0.001212s | byte equality observed |
| mp_transform_front_2.test | 10 | 0.000577s | 0.000580s | 0.001216s | byte equality observed |
| mp_transform_if.test | 10 | 0.001255s | 0.001323s | 0.001226s | byte equality observed |
| mp_transform_if_q.test | 10 | 0.001246s | 0.001344s | 0.001229s | byte equality observed |
| mp_transform_q.test | 10 | 0.001272s | 0.001280s | 0.001208s | byte equality observed |
| mp_transform_q_2.test | 10 | 0.001293s | 0.001298s | 0.001239s | byte equality observed |
| mp_transform_second.test | 10 | 0.001285s | 0.001267s | 0.001232s | byte equality observed |
| mp_transform_second_2.test | 10 | 0.000577s | 0.000574s | 0.001233s | byte equality observed |
| mp_transform_sf.test | 10 | 0.001240s | 0.001288s | 0.001226s | byte equality observed |
| mp_transform_third.test | 10 | 0.001291s | 0.001304s | 0.001243s | byte equality observed |
| mp_transform_third_2.test | 10 | 0.000584s | 0.000585s | 0.001214s | byte equality observed |
| mp_unique.test | 10 | 0.001287s | 0.001224s | 0.001232s | byte equality observed |
| mp_unique_if.test | 10 | 0.001273s | 0.001225s | 0.001239s | byte equality observed |
| mp_unique_if_q.test | 10 | 0.001287s | 0.001313s | 0.001236s | byte equality observed |
| mp_valid.test | 10 | 0.001286s | 0.001254s | 0.001249s | byte equality observed |
| mp_valid_and_true.test | 10 | 0.001274s | 0.001263s | 0.001223s | byte equality observed |
| mp_value.test | 10 | 0.000572s | 0.000593s | 0.001265s | byte equality observed |
| mp_with_index.test | 10 | 0.001681s | 0.001649s | 0.001540s | byte equality observed |
| mp_with_index_cx.test | 10 | 0.000579s | 0.000570s | 0.001202s | byte equality observed |
| mpl.test | 10 | 0.001279s | 0.001240s | 0.001274s | byte equality observed |
| mpl_list.test | 10 | 0.001277s | 0.001254s | 0.001225s | byte equality observed |
| mpl_tuple.test | 10 | 0.001260s | 0.001269s | 0.001247s | byte equality observed |
| mpl_version.test | 10 | 0.001272s | 0.001308s | 0.001274s | byte equality observed |
| set_version.test | 10 | 0.001263s | 0.001337s | 0.001269s | byte equality observed |
| tuple_apply.test | 10 | 0.001287s | 0.001284s | 0.001257s | byte equality observed |
| tuple_for_each.test | 10 | 0.001274s | 0.001263s | 0.001249s | byte equality observed |
| tuple_transform.test | 10 | 0.001286s | 0.001290s | 0.001253s | byte equality observed |
| tuple_transform_2.test | 10 | 0.001292s | 0.001243s | 0.001253s | byte equality observed |
| tuple_version.test | 10 | 0.001259s | 0.001259s | 0.001307s | byte equality observed |
| utility_version.test | 10 | 0.001260s | 0.001274s | 0.001253s | byte equality observed |
| version.test | 10 | 0.001260s | 0.001276s | 0.001243s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43674678137).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
