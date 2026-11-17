# libs/mp11/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| mp11.test | COMPILE | 0.050784 | 0.100850 | 0.188572 | — | — | — |
| complex_h.test | COMPILE | 0.199359 | 0.442154 | 0.793072 | — | — | — |
| mp_size.test | RUN | 0.238470 | 1.363423 | 0.952160 | 0.001837 | 0.002202 | 0.002004 |
| mp_size_2.test | RUN | 0.020438 | 0.046351 | 0.078125 | 0.000923 | 0.000917 | 0.001928 |
| mp_empty.test | RUN | 0.232130 | 0.863233 | 0.864780 | 0.001778 | 0.002296 | 0.001856 |
| mp_empty_2.test | RUN | 0.020797 | 0.049156 | 0.085329 | 0.000683 | 0.000800 | 0.002062 |
| mp_assign.test | RUN | 0.262425 | 1.775575 | 1.197574 | 0.001941 | 0.002272 | 0.001827 |
| mp_assign_2.test | RUN | 0.021923 | 0.051700 | 0.076158 | 0.000872 | 0.000849 | 0.001716 |
| mp_clear.test | RUN | 0.232455 | 0.797609 | 0.905080 | 0.001808 | 0.001786 | 0.002180 |
| mp_clear_2.test | RUN | 0.020863 | 0.054384 | 0.077428 | 0.000749 | 0.000833 | 0.002050 |
| mp_front.test | RUN | 0.232074 | 1.201976 | 0.978024 | 0.002020 | 0.002232 | 0.002171 |
| mp_front_2.test | RUN | 0.018232 | 0.047422 | 0.082897 | 0.000691 | 0.000696 | 0.002078 |
| mp_pop_front.test | RUN | 0.242669 | 1.248319 | 0.973433 | 0.001854 | 0.001824 | 0.001873 |
| mp_pop_front_2.test | RUN | 0.021716 | 0.048460 | 0.074944 | 0.000852 | 0.000967 | 0.002125 |
| mp_second.test | RUN | 0.232754 | 0.841279 | 0.965076 | 0.001812 | 0.001828 | 0.002252 |
| mp_second_2.test | RUN | 0.020469 | 0.052840 | 0.083257 | 0.000730 | 0.000934 | 0.002010 |
| mp_third.test | RUN | 0.234599 | 0.766551 | 0.922399 | 0.002098 | 0.002152 | 0.002238 |
| mp_third_2.test | RUN | 0.022827 | 0.050813 | 0.070047 | 0.000862 | 0.000778 | 0.002036 |
| mp_push_front.test | RUN | 0.296310 | 2.650731 | 1.541207 | 0.001692 | 0.002172 | 0.002026 |
| mp_push_front_2.test | RUN | 0.022460 | 0.049330 | 0.081381 | 0.000763 | 0.000915 | 0.001924 |
| mp_push_back.test | RUN | 0.310496 | 2.674382 | 1.557800 | 0.002154 | 0.002150 | 0.002018 |
| mp_push_back_2.test | RUN | 0.020940 | 0.053751 | 0.085361 | 0.000906 | 0.000720 | 0.002166 |
| mp_rename.test | RUN | 0.292979 | 2.395551 | 1.294777 | 0.002016 | 0.002083 | 0.001512 |
| mp_rename_2.test | RUN | 0.022086 | 0.054204 | 0.083292 | 0.000636 | 0.000804 | 0.002076 |
| mp_append.test | RUN | 0.298396 | 2.765328 | 1.540096 | 0.001824 | 0.001936 | 0.002074 |
| mp_append_2.test | RUN | 0.628438 | 6.126167 | 1.852457 | 0.001673 | 0.001909 | 0.001972 |
| mp_append_3.test | RUN | 0.021669 | 0.052927 | 0.078989 | 0.000939 | 0.000949 | 0.002186 |
| mp_append_sf.test | RUN | 0.226911 | 0.695791 | 0.841316 | 0.001912 | 0.002313 | 0.002044 |
| mp_replace_front.test | RUN | 0.268602 | 1.987049 | 1.227216 | 0.001852 | 0.002161 | 0.002196 |
| mp_replace_front_2.test | RUN | 0.021580 | 0.047348 | 0.083027 | 0.000783 | 0.000857 | 0.002086 |
| mp_replace_second.test | RUN | 0.257600 | 1.273826 | 1.071292 | 0.002008 | 0.002074 | 0.002074 |
| mp_replace_second_2.test | RUN | 0.020352 | 0.050612 | 0.081401 | 0.000755 | 0.000937 | 0.002037 |
| mp_replace_third.test | RUN | 0.245268 | 1.068046 | 0.994990 | 0.001989 | 0.002118 | 0.002184 |
| mp_replace_third_2.test | RUN | 0.021270 | 0.050739 | 0.082482 | 0.000730 | 0.000833 | 0.002085 |
| mp_apply_q.test | RUN | 0.274197 | 2.436252 | 1.351320 | 0.001901 | 0.002126 | 0.002246 |
| mp_apply_q_sf.test | RUN | 0.224535 | 0.752608 | 0.883459 | 0.002160 | 0.002270 | 0.002114 |
| mp_is_list.test | RUN | 0.223679 | 0.850986 | 0.870623 | 0.001736 | 0.002152 | 0.001948 |
| mp_list_c.test | RUN | 0.239812 | 1.028807 | 0.969952 | 0.002044 | 0.001980 | 0.001947 |
| mp_transform_front.test | RUN | 0.260102 | 1.940856 | 1.181487 | 0.001920 | 0.002058 | 0.001739 |
| mp_transform_front_2.test | RUN | 0.022058 | 0.046611 | 0.085224 | 0.000808 | 0.000791 | 0.001814 |
| mp_transform_second.test | RUN | 0.258124 | 1.732890 | 1.108679 | 0.002014 | 0.001907 | 0.001876 |
| mp_transform_second_2.test | RUN | 0.021005 | 0.053614 | 0.074398 | 0.000842 | 0.000963 | 0.001934 |
| mp_transform_third.test | RUN | 0.244518 | 1.325266 | 0.937581 | 0.002067 | 0.001912 | 0.002035 |
| mp_transform_third_2.test | RUN | 0.022497 | 0.046069 | 0.082869 | 0.000745 | 0.000831 | 0.002114 |
| mp_list_v.test | RUN | 0.022367 | 0.048388 | 0.081949 | 0.000822 | 0.000880 | 0.001737 |
| mp_rename_v.test | RUN | 0.021676 | 0.048548 | 0.073384 | 0.000676 | 0.000780 | 0.002019 |
| mp_is_value_list.test | RUN | 0.220916 | 0.544557 | 0.863928 | 0.001860 | 0.001926 | 0.001748 |
| mp_transform.test | RUN | 0.505820 | 4.082275 | 2.393799 | 0.002066 | 0.002084 | 0.001948 |
| mp_transform_2.test | RUN | 0.214848 | 0.494465 | 0.811280 | 0.002017 | 0.002225 | 0.001706 |
| mp_transform_q.test | RUN | 0.493488 | 3.854280 | 2.335207 | 0.001885 | 0.002228 | 0.002110 |
| mp_transform_q_2.test | RUN | 0.546845 | 1.296817 | 3.004938 | 0.001883 | 0.002348 | 0.001706 |
| mp_transform_sf.test | RUN | 0.247796 | 0.753146 | 0.952745 | 0.001737 | 0.002174 | 0.002108 |
| mp_transform_if.test | RUN | 0.283731 | 1.996005 | 1.309847 | 0.001640 | 0.002138 | 0.002088 |
| mp_transform_if_q.test | RUN | 0.285127 | 1.996701 | 1.361681 | 0.002082 | 0.001714 | 0.001803 |
| mp_filter.test | RUN | 0.245559 | 1.199468 | 1.069933 | 0.001867 | 0.002074 | 0.002264 |
| mp_fill.test | RUN | 0.250160 | 0.909528 | 0.936399 | 0.001819 | 0.001817 | 0.002152 |
| mp_fill_2.test | RUN | 0.037093 | 0.083469 | 0.144197 | 0.000824 | 0.000924 | 0.002140 |
| mp_count.test | RUN | 0.463804 | 2.133062 | 1.473174 | 0.001956 | 0.001892 | 0.001951 |
| mp_count_if.test | RUN | 0.461430 | 2.193692 | 1.656019 | 0.001834 | 0.002094 | 0.002202 |
| mp_count_if_q.test | RUN | 0.248682 | 1.392686 | 0.999520 | 0.001894 | 0.002222 | 0.002146 |
| mp_contains.test | RUN | 0.239925 | 0.868942 | 0.949017 | 0.001729 | 0.002102 | 0.002136 |
| mp_starts_with.test | RUN | 0.240214 | 0.875460 | 0.969250 | 0.001805 | 0.002014 | 0.002154 |
| mp_starts_with_sf.test | RUN | 0.234974 | 0.741055 | 0.837042 | 0.001859 | 0.002214 | 0.002173 |
| mp_repeat.test | RUN | 0.353938 | 3.486971 | 1.678224 | 0.002088 | 0.002016 | 0.002090 |
| mp_repeat_2.test | RUN | 0.037763 | 0.082372 | 0.145685 | 0.000896 | 0.000908 | 0.002065 |
| mp_repeat_3.test | RUN | 0.297990 | 0.492478 | 0.829016 | 0.001894 | 0.002299 | 0.002143 |
| mp_product.test | RUN | 0.270530 | 2.155554 | 1.230525 | 0.001500 | 0.002120 | 0.002140 |
| mp_drop.test | RUN | 0.298231 | 2.620201 | 1.342978 | 0.001907 | 0.001971 | 0.002048 |
| mp_drop_2.test | RUN | 0.038772 | 0.085363 | 0.151832 | 0.000720 | 0.000898 | 0.002115 |
| mp_iota.test | RUN | 0.283712 | 2.248818 | 1.264421 | 0.001886 | 0.001915 | 0.002058 |
| mp_iota_2.test | RUN | 0.301531 | 2.727893 | 1.357121 | 0.001783 | 0.002165 | 0.001945 |
| mp_at.test | RUN | 0.251022 | 1.202383 | 1.062000 | 0.001996 | 0.002112 | 0.002043 |
| mp_at_2.test | RUN | 0.037586 | 0.083605 | 0.144049 | 0.000929 | 0.000971 | 0.002286 |
| mp_at_sf.test | RUN | 0.235102 | 0.750196 | 0.901732 | 0.001922 | 0.001846 | 0.001763 |
| mp_take.test | RUN | 0.383621 | 3.441156 | 1.639928 | 0.002184 | 0.001843 | 0.002106 |
| mp_take_2.test | RUN | 0.037582 | 0.077870 | 0.144509 | 0.000866 | 0.000957 | 0.001871 |
| mp_slice.test | RUN | 0.450858 | 3.475259 | 2.083350 | 0.001932 | 0.002224 | 0.002141 |
| mp_slice_2.test | RUN | 0.038511 | 0.082996 | 0.148508 | 0.000859 | 0.000928 | 0.002176 |
| mp_replace.test | RUN | 0.289680 | 1.789482 | 1.369031 | 0.002122 | 0.002120 | 0.002072 |
| mp_replace_if.test | RUN | 0.282514 | 1.589723 | 1.311166 | 0.001994 | 0.002046 | 0.002296 |
| mp_replace_if_q.test | RUN | 0.281451 | 1.569295 | 1.292116 | 0.001926 | 0.002234 | 0.002121 |
| mp_copy_if.test | RUN | 0.288496 | 2.280248 | 1.237094 | 0.001993 | 0.001978 | 0.001894 |
| mp_copy_if_q.test | RUN | 0.291723 | 2.273349 | 1.239554 | 0.002088 | 0.002038 | 0.002213 |
| mp_remove.test | RUN | 0.277485 | 1.504395 | 1.219653 | 0.002048 | 0.002028 | 0.002146 |
| mp_remove_if.test | RUN | 0.287978 | 2.341202 | 1.328639 | 0.002060 | 0.002063 | 0.002183 |
| mp_remove_if_q.test | RUN | 0.289011 | 2.363588 | 1.298441 | 0.002047 | 0.002006 | 0.002074 |
| mp_partition.test | RUN | 0.295190 | 2.185239 | 1.371011 | 0.001860 | 0.002241 | 0.002054 |
| mp_partition_q.test | RUN | 0.286337 | 2.196857 | 1.413356 | 0.001853 | 0.001828 | 0.002192 |
| mp_sort.test | RUN | 0.277884 | 1.593771 | 1.196405 | 0.002047 | 0.002150 | 0.002118 |
| mp_sort_q.test | RUN | 0.280033 | 1.582445 | 1.193724 | 0.002084 | 0.002186 | 0.002062 |
| mp_find.test | RUN | 0.257516 | 1.713189 | 1.112587 | 0.001986 | 0.001921 | 0.002177 |
| mp_find_if.test | RUN | 0.265965 | 1.574547 | 1.027786 | 0.002024 | 0.002168 | 0.002248 |
| mp_find_if_q.test | RUN | 0.290106 | 1.781777 | 1.197888 | 0.002180 | 0.002014 | 0.002133 |
| mp_reverse.test | RUN | 0.571917 | 4.571354 | 2.241220 | 0.002076 | 0.002286 | 0.002187 |
| mp_fold.test | RUN | 0.920742 | 3.565456 | 5.796380 | 0.002064 | 0.002100 | 0.001876 |
| mp_fold_q.test | RUN | 0.266532 | 1.555147 | 1.197326 | 0.001767 | 0.002190 | 0.002212 |
| mp_fold_q_sf.test | RUN | 0.242648 | 0.786455 | 0.942918 | 0.001951 | 0.002148 | 0.001962 |
| mp_reverse_fold.test | RUN | 0.440557 | 3.420259 | 1.658296 | 0.001740 | 0.002149 | 0.002102 |
| mp_reverse_fold_q.test | RUN | 0.268942 | 1.863999 | 1.264086 | 0.001748 | 0.002178 | 0.001899 |
| mp_unique.test | RUN | 0.262715 | 1.723180 | 1.223813 | 0.001890 | 0.002024 | 0.002325 |
| mp_unique_if.test | RUN | 0.468861 | 3.537796 | 1.850361 | 0.001976 | 0.002046 | 0.001942 |
| mp_unique_if_q.test | RUN | 0.411933 | 3.554378 | 1.566865 | 0.001748 | 0.002206 | 0.001888 |
| mp_all_of.test | RUN | 0.628673 | 1.950633 | 2.058646 | 0.002066 | 0.002478 | 0.002100 |
| mp_all_of_q.test | RUN | 0.241444 | 0.844189 | 0.879734 | 0.001982 | 0.002142 | 0.002154 |
| mp_any_of.test | RUN | 0.595772 | 1.982303 | 2.033670 | 0.001980 | 0.002064 | 0.001916 |
| mp_any_of_q.test | RUN | 0.237645 | 0.846124 | 0.897683 | 0.002016 | 0.001965 | 0.001935 |
| mp_none_of.test | RUN | 0.588471 | 1.983809 | 2.042943 | 0.002044 | 0.002131 | 0.002169 |
| mp_none_of_q.test | RUN | 0.237376 | 0.848712 | 0.899063 | 0.001742 | 0.002214 | 0.001986 |
| mp_replace_at.test | RUN | 0.285708 | 1.660801 | 1.306278 | 0.002142 | 0.002084 | 0.002100 |
| mp_replace_at_c.test | RUN | 0.288761 | 1.686739 | 1.362374 | 0.002010 | 0.001972 | 0.002126 |
| mp_for_each.test | RUN | 0.282591 | 1.296334 | 1.493832 | 0.001980 | 0.002066 | 0.002111 |
| mp_insert.test | RUN | 0.425201 | 3.455942 | 1.944310 | 0.001958 | 0.002310 | 0.002228 |
| mp_insert_2.test | RUN | 0.039365 | 0.087626 | 0.143640 | 0.000721 | 0.000854 | 0.002012 |
| mp_erase.test | RUN | 0.470306 | 3.667429 | 2.145452 | 0.002040 | 0.002208 | 0.001970 |
| mp_erase_2.test | RUN | 0.036212 | 0.081060 | 0.141160 | 0.000737 | 0.000948 | 0.001998 |
| mp_with_index.test | RUN | 0.654505 | 7.600925 | 4.877939 | 0.002264 | 0.002669 | 0.002578 |
| mp_with_index_cx.test | RUN | 0.004268 | 0.024316 | 0.030247 | 0.000867 | 0.000998 | 0.002070 |
| mp_from_sequence.test | RUN | 0.285395 | 2.023318 | 1.252067 | 0.002142 | 0.002119 | 0.002152 |
| mp_from_sequence_2.test | RUN | 0.297026 | 2.320828 | 1.467207 | 0.001965 | 0.002146 | 0.002147 |
| mp_from_sequence_3.test | RUN | 0.256294 | 1.030448 | 1.043897 | 0.002004 | 0.002089 | 0.001724 |
| mp_min_element.test | RUN | 0.253106 | 0.969446 | 1.006091 | 0.001868 | 0.002138 | 0.001901 |
| mp_min_element_2.test | RUN | 0.036843 | 0.078183 | 0.141587 | 0.000878 | 0.000897 | 0.001871 |
| mp_min_element_q.test | RUN | 0.245712 | 0.954944 | 0.940859 | 0.001934 | 0.002098 | 0.001890 |
| mp_min_element_q_2.test | RUN | 0.037108 | 0.081487 | 0.130657 | 0.000865 | 0.000869 | 0.002094 |
| mp_max_element.test | RUN | 0.242333 | 0.948084 | 0.907390 | 0.002002 | 0.002252 | 0.002208 |
| mp_max_element_2.test | RUN | 0.038652 | 0.075455 | 0.139133 | 0.000692 | 0.000726 | 0.002044 |
| mp_max_element_q.test | RUN | 0.247356 | 0.931062 | 0.966862 | 0.002012 | 0.002064 | 0.002032 |
| mp_max_element_q_2.test | RUN | 0.037537 | 0.083561 | 0.135933 | 0.000696 | 0.000901 | 0.002004 |
| mp_nth_element.test | RUN | 0.275498 | 1.337810 | 1.207111 | 0.001895 | 0.002160 | 0.002037 |
| mp_nth_element_q.test | RUN | 0.272497 | 1.314762 | 1.084731 | 0.001854 | 0.002127 | 0.002130 |
| mp_back.test | RUN | 0.262863 | 1.077955 | 1.095506 | 0.001842 | 0.001970 | 0.001668 |
| mp_back_2.test | RUN | 0.035950 | 0.082567 | 0.142402 | 0.000913 | 0.000853 | 0.002098 |
| mp_pop_back.test | RUN | 0.687204 | 6.923673 | 2.153089 | 0.001868 | 0.001945 | 0.001687 |
| mp_pop_back_2.test | RUN | 0.038461 | 0.074930 | 0.146160 | 0.000902 | 0.000700 | 0.001628 |
| mp_flatten.test | RUN | 0.311159 | 2.490652 | 1.553503 | 0.001939 | 0.002100 | 0.001675 |
| mp_rotate_left.test | RUN | 0.313047 | 2.667889 | 1.506970 | 0.001811 | 0.001931 | 0.001640 |
| mp_rotate_right.test | RUN | 0.310319 | 2.687069 | 1.512900 | 0.002141 | 0.001848 | 0.001686 |
| mp_power_set.test | RUN | 0.296383 | 2.540720 | 1.532192 | 0.001832 | 0.002124 | 0.001946 |
| mp_partial_sum.test | RUN | 0.401462 | 3.416160 | 1.695116 | 0.002020 | 0.001862 | 0.001953 |
| mp_iterate.test | RUN | 0.269916 | 1.063161 | 1.229505 | 0.001920 | 0.002110 | 0.002117 |
| mp_pairwise_fold.test | RUN | 0.306657 | 2.381263 | 1.517263 | 0.001926 | 0.002287 | 0.001865 |
| mp_pairwise_fold_q.test | RUN | 0.248070 | 0.729387 | 0.958159 | 0.002176 | 0.002026 | 0.002156 |
| mp_sliding_fold.test | RUN | 0.562495 | 4.471428 | 2.785111 | 0.002092 | 0.002160 | 0.001720 |
| mp_sliding_fold_q.test | RUN | 0.563802 | 4.498358 | 2.754036 | 0.002074 | 0.001895 | 0.001835 |
| mp_intersperse.test | RUN | 0.291249 | 1.720374 | 1.371604 | 0.001941 | 0.002108 | 0.002048 |
| mp_split.test | RUN | 0.397725 | 3.274634 | 1.780039 | 0.001949 | 0.002122 | 0.001808 |
| mp_join.test | RUN | 0.313137 | 2.719373 | 1.649257 | 0.001868 | 0.002162 | 0.002146 |
| integral.test | RUN | 0.249375 | 1.239735 | 1.009239 | 0.001909 | 0.002290 | 0.002024 |
| mp_value.test | RUN | 0.015793 | 0.040501 | 0.065783 | 0.000830 | 0.000824 | 0.001991 |
| mp_identity.test | RUN | 0.245563 | 1.127952 | 0.947298 | 0.001978 | 0.001996 | 0.001849 |
| mp_inherit.test | RUN | 0.221783 | 0.816397 | 0.907920 | 0.002006 | 0.002324 | 0.002239 |
| mp_if.test | RUN | 0.239329 | 0.946346 | 0.885268 | 0.001957 | 0.001928 | 0.002119 |
| mp_if_sf.test | RUN | 0.226337 | 0.686312 | 0.847266 | 0.002050 | 0.002276 | 0.002032 |
| mp_eval_if.test | RUN | 0.238883 | 0.989734 | 0.936784 | 0.001742 | 0.001848 | 0.002055 |
| mp_eval_if_sf.test | RUN | 0.222078 | 0.714438 | 0.834135 | 0.002278 | 0.001920 | 0.002272 |
| mp_valid.test | RUN | 0.234465 | 0.730567 | 0.854118 | 0.001902 | 0.001928 | 0.002132 |
| mp_defer.test | RUN | 0.242863 | 1.187417 | 1.028588 | 0.002136 | 0.002225 | 0.001998 |
| mp_quote.test | RUN | 0.249229 | 1.206688 | 1.042702 | 0.002016 | 0.002226 | 0.002078 |
| mp_invoke_q.test | RUN | 0.264651 | 1.589221 | 1.150573 | 0.001776 | 0.002083 | 0.001856 |
| mp_invoke_q_sf.test | RUN | 0.227926 | 0.730292 | 0.835832 | 0.001815 | 0.002106 | 0.002036 |
| mp_quote_trait.test | RUN | 0.232949 | 1.302719 | 1.032547 | 0.001564 | 0.002086 | 0.002143 |
| mp_cond.test | RUN | 0.231615 | 0.837035 | 0.878951 | 0.001485 | 0.002092 | 0.001820 |
| mp_cond_sf.test | RUN | 0.226589 | 0.729125 | 0.834493 | 0.001806 | 0.002210 | 0.002218 |
| mp_not_fn.test | RUN | 0.231056 | 0.701349 | 0.831092 | 0.001846 | 0.002250 | 0.002100 |
| mp_eval_if_not.test | RUN | 0.229557 | 0.996138 | 0.914749 | 0.002034 | 0.002170 | 0.001907 |
| mp_eval_or.test | RUN | 0.223598 | 0.564117 | 0.876520 | 0.001763 | 0.002068 | 0.001892 |
| mp_compose.test | RUN | 0.252692 | 1.609215 | 1.098184 | 0.001788 | 0.001928 | 0.001893 |
| mp_valid_and_true.test | RUN | 0.229518 | 0.842278 | 0.874648 | 0.001614 | 0.002190 | 0.001868 |
| mp_compose_sf.test | COMPILE | 0.056881 | 0.105930 | 0.205269 | — | — | — |
| integer_sequence.test | RUN | 0.276446 | 1.578671 | 1.236022 | 0.002022 | 0.002050 | 0.001913 |
| tuple_for_each.test | RUN | 0.230815 | 0.607651 | 0.925019 | 0.001758 | 0.002054 | 0.001944 |
| tuple_for_each_cx.test | COMPILE | 0.045383 | 0.093670 | 0.161331 | — | — | — |
| tuple_apply.test | RUN | 0.236429 | 0.629775 | 0.959202 | 0.001937 | 0.002115 | 0.002126 |
| tuple_apply_cx.test | COMPILE | 0.062458 | 0.130375 | 0.221445 | — | — | — |
| construct_from_tuple.test | RUN | 0.238699 | 0.685248 | 0.917010 | 0.002128 | 0.002177 | 0.002212 |
| construct_from_tuple_cx.test | COMPILE | 0.064686 | 0.127146 | 0.224259 | — | — | — |
| tuple_transform.test | RUN | 0.376479 | 1.331720 | 1.833869 | 0.002000 | 0.001936 | 0.001899 |
| tuple_transform_2.test | RUN | 0.331762 | 1.002224 | 1.720053 | 0.002089 | 0.002033 | 0.001746 |
| tuple_transform_cx.test | COMPILE | 0.055585 | 0.118367 | 0.189236 | — | — | — |
| mp_set_contains.test | RUN | 0.237307 | 0.855622 | 0.967580 | 0.001872 | 0.001770 | 0.002092 |
| mp_set_push_back.test | RUN | 0.307190 | 2.574434 | 1.536217 | 0.002092 | 0.002351 | 0.002106 |
| mp_set_push_front.test | RUN | 0.390268 | 3.048423 | 1.733868 | 0.001737 | 0.002003 | 0.001702 |
| mp_is_set.test | RUN | 0.234670 | 0.868530 | 0.925542 | 0.002196 | 0.002127 | 0.002079 |
| mp_set_union.test | RUN | 0.296592 | 2.216054 | 1.463423 | 0.001832 | 0.002293 | 0.001698 |
| mp_set_union_sf.test | RUN | 0.231970 | 0.711370 | 0.855922 | 0.002080 | 0.002232 | 0.002761 |
| mp_set_difference.test | RUN | 0.270098 | 1.696837 | 1.246044 | 0.002090 | 0.002102 | 0.001816 |
| mp_set_difference_sf.test | RUN | 0.227182 | 0.706863 | 0.890869 | 0.001800 | 0.002098 | 0.001840 |
| mp_set_intersection.test | RUN | 0.274079 | 1.707278 | 1.242008 | 0.001881 | 0.002284 | 0.002188 |
| mp_set_intersection_sf.test | RUN | 0.231126 | 0.704095 | 0.892549 | 0.001878 | 0.002250 | 0.002191 |
| mp_all.test | RUN | 0.238791 | 0.830845 | 0.904355 | 0.002103 | 0.002096 | 0.002138 |
| mp_all_2.test | RUN | 0.652147 | 1.766780 | 1.981026 | 0.002104 | 0.002084 | 0.002085 |
| mp_and.test | RUN | 0.232735 | 0.873172 | 0.898453 | 0.002122 | 0.001924 | 0.001916 |
| mp_any.test | RUN | 0.238806 | 0.787976 | 0.938883 | 0.002402 | 0.002096 | 0.002060 |
| mp_any_2.test | RUN | 0.664788 | 1.792912 | 2.055018 | 0.002112 | 0.002166 | 0.001596 |
| mp_or.test | RUN | 0.242861 | 0.844526 | 0.860130 | 0.001947 | 0.002014 | 0.002184 |
| mp_same.test | RUN | 0.443439 | 1.418488 | 1.364864 | 0.001818 | 0.002090 | 0.001933 |
| mp_plus.test | RUN | 0.255198 | 0.996685 | 0.924713 | 0.001874 | 0.002046 | 0.001675 |
| mp_less.test | RUN | 0.238411 | 0.834293 | 0.836894 | 0.001974 | 0.002186 | 0.002119 |
| mp_min.test | RUN | 0.233031 | 0.777545 | 0.915206 | 0.002088 | 0.002018 | 0.001868 |
| mp_max.test | RUN | 0.235488 | 0.862721 | 0.941781 | 0.001822 | 0.001955 | 0.001984 |
| mp_similar.test | RUN | 0.240168 | 0.814105 | 0.916641 | 0.002076 | 0.001787 | 0.002063 |
| mp_map_find.test | RUN | 0.263607 | 1.527540 | 1.171835 | 0.002195 | 0.002062 | 0.002204 |
| mp_map_find_2.test | RUN | 0.252872 | 0.644346 | 1.053710 | 0.002094 | 0.002030 | 0.002006 |
| mp_map_find_3.test | RUN | 0.250987 | 0.616847 | 1.054775 | 0.001758 | 0.002082 | 0.001828 |
| mp_map_find_4.test | RUN | 0.242610 | 0.585874 | 0.934931 | 0.002078 | 0.001799 | 0.001657 |
| mp_map_contains.test | RUN | 0.241728 | 0.879989 | 0.955943 | 0.002028 | 0.002237 | 0.002039 |
| mp_map_insert.test | RUN | 0.313025 | 2.827579 | 1.606708 | 0.002117 | 0.002299 | 0.001517 |
| mp_map_replace.test | RUN | 0.414919 | 3.226738 | 1.808781 | 0.001767 | 0.002221 | 0.002114 |
| mp_map_erase.test | RUN | 0.313158 | 2.438237 | 1.542388 | 0.001818 | 0.002060 | 0.001934 |
| mp_map_update.test | RUN | 0.269312 | 1.550380 | 1.226680 | 0.002044 | 0.002039 | 0.001636 |
| mp_map_update_q.test | RUN | 0.272371 | 1.569651 | 1.228656 | 0.002139 | 0.002012 | 0.001957 |
| mp_map_keys.test | RUN | 0.267957 | 1.414367 | 1.200312 | 0.001964 | 0.002068 | 0.001674 |
| mp_is_map.test | RUN | 0.240900 | 0.861560 | 1.001178 | 0.001398 | 0.001952 | 0.001973 |
| mp_bind.test | RUN | 0.297584 | 2.483999 | 1.450528 | 0.002036 | 0.002032 | 0.002083 |
| mp_bind_q.test | RUN | 0.271565 | 1.558078 | 1.193883 | 0.002402 | 0.002002 | 0.002028 |
| mp_bind_front.test | RUN | 0.261884 | 1.719135 | 1.130148 | 0.001894 | 0.001975 | 0.001982 |
| mp_bind_back.test | RUN | 0.262172 | 1.707039 | 1.140833 | 0.001650 | 0.002002 | 0.001950 |
| mp_lambda.test | RUN | 0.586119 | 5.040483 | 2.832037 | 0.002184 | 0.001654 | 0.001834 |
| mpl.test | RUN | 0.531869 | 1.341424 | 2.321497 | 0.002168 | 0.002052 | 0.001934 |
| mpl_list.test | RUN | 0.297313 | 1.049161 | 1.132889 | 0.002121 | 0.002058 | 0.002143 |
| mpl_tuple.test | RUN | 0.293236 | 1.045354 | 1.116765 | 0.002056 | 0.001857 | 0.001696 |
| version.test | RUN | 0.155739 | 0.388709 | 0.558718 | 0.001965 | 0.002106 | 0.001996 |
| mp11_version.test | RUN | 0.186648 | 0.447934 | 0.700628 | 0.001587 | 0.001749 | 0.002164 |
| list_version.test | RUN | 0.154926 | 0.400082 | 0.581886 | 0.002048 | 0.001872 | 0.001891 |
| algorithm_version.test | RUN | 0.172986 | 0.421243 | 0.657830 | 0.001937 | 0.001941 | 0.001746 |
| integral_version.test | RUN | 0.154501 | 0.384714 | 0.565197 | 0.002108 | 0.001598 | 0.001641 |
| utility_version.test | RUN | 0.158476 | 0.388156 | 0.590142 | 0.001926 | 0.002041 | 0.002060 |
| function_version.test | RUN | 0.160596 | 0.394298 | 0.597865 | 0.001593 | 0.002050 | 0.001923 |
| map_version.test | RUN | 0.177022 | 0.420414 | 0.645166 | 0.001865 | 0.001799 | 0.001912 |
| set_version.test | RUN | 0.158594 | 0.404426 | 0.619737 | 0.002038 | 0.001940 | 0.001826 |
| bind_version.test | RUN | 0.174218 | 0.424123 | 0.615833 | 0.002014 | 0.001753 | 0.001766 |
| integer_sequence_version.test | RUN | 0.152059 | 0.387153 | 0.575726 | 0.001368 | 0.001880 | 0.001492 |
| tuple_version.test | RUN | 0.153865 | 0.420847 | 0.385083 | 0.001491 | 0.001998 | 0.001328 |
| mpl_version.test | RUN | 0.114295 | 0.282084 | 0.590588 | 0.001495 | 0.001566 | 0.001415 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 1.007× | 1.012×, 1.002× | 1.008× |
| clang | 1.081× | 1.076×, 1.087× | 1.006× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1359 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44000592280).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| algorithm_version.test | 10 | 0.001169s | 0.001181s | 0.001139s | byte equality observed |
| bind_version.test | 10 | 0.001173s | 0.001195s | 0.001132s | byte equality observed |
| construct_from_tuple.test | 10 | 0.001161s | 0.001191s | 0.001149s | byte equality observed |
| function_version.test | 10 | 0.001164s | 0.001196s | 0.001167s | byte equality observed |
| integer_sequence.test | 10 | 0.001154s | 0.001211s | 0.001245s | byte equality observed |
| integer_sequence_version.test | 10 | 0.001155s | 0.001178s | 0.001224s | byte equality observed |
| integral.test | 10 | 0.001155s | 0.001201s | 0.001222s | byte equality observed |
| integral_version.test | 10 | 0.001158s | 0.001167s | 0.001215s | byte equality observed |
| list_version.test | 10 | 0.001158s | 0.001146s | 0.001202s | byte equality observed |
| map_version.test | 10 | 0.001181s | 0.001143s | 0.001231s | byte equality observed |
| mp11_version.test | 10 | 0.001197s | 0.001150s | 0.001192s | byte equality observed |
| mp_all.test | 10 | 0.001195s | 0.001162s | 0.001222s | byte equality observed |
| mp_all_2.test | 10 | 0.001207s | 0.001160s | 0.001228s | byte equality observed |
| mp_all_of.test | 10 | 0.001231s | 0.001171s | 0.001195s | byte equality observed |
| mp_all_of_q.test | 10 | 0.001246s | 0.001187s | 0.001258s | byte equality observed |
| mp_and.test | 10 | 0.001253s | 0.001171s | 0.001225s | byte equality observed |
| mp_any.test | 10 | 0.001259s | 0.001174s | 0.001210s | byte equality observed |
| mp_any_2.test | 10 | 0.001249s | 0.001185s | 0.001209s | byte equality observed |
| mp_any_of.test | 10 | 0.001240s | 0.001205s | 0.001246s | byte equality observed |
| mp_any_of_q.test | 10 | 0.001235s | 0.001206s | 0.001218s | byte equality observed |
| mp_append.test | 10 | 0.001232s | 0.001212s | 0.001222s | byte equality observed |
| mp_append_2.test | 10 | 0.001302s | 0.001299s | 0.001200s | byte equality observed |
| mp_append_3.test | 10 | 0.000561s | 0.000565s | 0.001203s | byte equality observed |
| mp_append_sf.test | 10 | 0.001241s | 0.001265s | 0.001174s | byte equality observed |
| mp_apply_q.test | 10 | 0.001236s | 0.001311s | 0.001185s | byte equality observed |
| mp_apply_q_sf.test | 10 | 0.001245s | 0.001259s | 0.001214s | byte equality observed |
| mp_assign.test | 10 | 0.001263s | 0.001258s | 0.001228s | byte equality observed |
| mp_assign_2.test | 10 | 0.000576s | 0.000577s | 0.001178s | byte equality observed |
| mp_at.test | 10 | 0.001259s | 0.001269s | 0.001177s | byte equality observed |
| mp_at_2.test | 10 | 0.000574s | 0.000579s | 0.001204s | byte equality observed |
| mp_at_sf.test | 10 | 0.001251s | 0.001242s | 0.001244s | byte equality observed |
| mp_back.test | 10 | 0.001229s | 0.001250s | 0.001232s | byte equality observed |
| mp_back_2.test | 10 | 0.000570s | 0.000583s | 0.001167s | byte equality observed |
| mp_bind.test | 10 | 0.001221s | 0.001271s | 0.001206s | byte equality observed |
| mp_bind_back.test | 10 | 0.001205s | 0.001282s | 0.001225s | byte equality observed |
| mp_bind_front.test | 10 | 0.001263s | 0.001224s | 0.001216s | byte equality observed |
| mp_bind_q.test | 10 | 0.001235s | 0.001224s | 0.001232s | byte equality observed |
| mp_clear.test | 10 | 0.001266s | 0.001269s | 0.001194s | byte equality observed |
| mp_clear_2.test | 10 | 0.000571s | 0.000572s | 0.001195s | byte equality observed |
| mp_compose.test | 10 | 0.001258s | 0.001262s | 0.001192s | byte equality observed |
| mp_cond.test | 10 | 0.001248s | 0.001312s | 0.001231s | byte equality observed |
| mp_cond_sf.test | 10 | 0.001236s | 0.001279s | 0.001230s | byte equality observed |
| mp_contains.test | 10 | 0.001219s | 0.001241s | 0.001194s | byte equality observed |
| mp_copy_if.test | 10 | 0.001232s | 0.001249s | 0.001237s | byte equality observed |
| mp_copy_if_q.test | 10 | 0.001229s | 0.001247s | 0.001230s | byte equality observed |
| mp_count.test | 10 | 0.001220s | 0.001274s | 0.001170s | byte equality observed |
| mp_count_if.test | 10 | 0.001200s | 0.001241s | 0.001229s | byte equality observed |
| mp_count_if_q.test | 10 | 0.001231s | 0.001269s | 0.001196s | byte equality observed |
| mp_defer.test | 10 | 0.001199s | 0.001280s | 0.001203s | byte equality observed |
| mp_drop.test | 10 | 0.001257s | 0.001272s | 0.001204s | byte equality observed |
| mp_drop_2.test | 10 | 0.000569s | 0.000579s | 0.001182s | byte equality observed |
| mp_empty.test | 10 | 0.001250s | 0.001313s | 0.001219s | byte equality observed |
| mp_empty_2.test | 10 | 0.000560s | 0.000577s | 0.001197s | byte equality observed |
| mp_erase.test | 10 | 0.001250s | 0.001292s | 0.001176s | byte equality observed |
| mp_erase_2.test | 10 | 0.000580s | 0.000581s | 0.001212s | byte equality observed |
| mp_eval_if.test | 10 | 0.001222s | 0.001256s | 0.001222s | byte equality observed |
| mp_eval_if_not.test | 10 | 0.001220s | 0.001252s | 0.001246s | byte equality observed |
| mp_eval_if_sf.test | 10 | 0.001207s | 0.001267s | 0.001211s | byte equality observed |
| mp_eval_or.test | 10 | 0.001266s | 0.001244s | 0.001209s | byte equality observed |
| mp_fill.test | 10 | 0.001268s | 0.001291s | 0.001242s | byte equality observed |
| mp_fill_2.test | 10 | 0.000578s | 0.000581s | 0.001218s | byte equality observed |
| mp_filter.test | 10 | 0.001241s | 0.001266s | 0.001292s | byte equality observed |
| mp_find.test | 10 | 0.001271s | 0.001259s | 0.001239s | byte equality observed |
| mp_find_if.test | 10 | 0.001233s | 0.001277s | 0.001207s | byte equality observed |
| mp_find_if_q.test | 10 | 0.001214s | 0.001283s | 0.001286s | byte equality observed |
| mp_flatten.test | 10 | 0.001224s | 0.001309s | 0.001219s | byte equality observed |
| mp_fold.test | 10 | 0.001256s | 0.001308s | 0.001221s | byte equality observed |
| mp_fold_q.test | 10 | 0.001213s | 0.001274s | 0.001206s | byte equality observed |
| mp_fold_q_sf.test | 10 | 0.001218s | 0.001231s | 0.001262s | byte equality observed |
| mp_for_each.test | 10 | 0.001224s | 0.001225s | 0.001224s | byte equality observed |
| mp_from_sequence.test | 10 | 0.001242s | 0.001254s | 0.001232s | byte equality observed |
| mp_from_sequence_2.test | 10 | 0.001233s | 0.001256s | 0.001234s | byte equality observed |
| mp_from_sequence_3.test | 10 | 0.001227s | 0.001274s | 0.001237s | byte equality observed |
| mp_front.test | 10 | 0.001275s | 0.001300s | 0.001270s | byte equality observed |
| mp_front_2.test | 10 | 0.000563s | 0.000581s | 0.001206s | byte equality observed |
| mp_identity.test | 10 | 0.001229s | 0.001264s | 0.001243s | byte equality observed |
| mp_if.test | 10 | 0.001234s | 0.001283s | 0.001260s | byte equality observed |
| mp_if_sf.test | 10 | 0.001231s | 0.001300s | 0.001215s | byte equality observed |
| mp_inherit.test | 10 | 0.001271s | 0.001270s | 0.001259s | byte equality observed |
| mp_insert.test | 10 | 0.001288s | 0.001308s | 0.001224s | byte equality observed |
| mp_insert_2.test | 10 | 0.000554s | 0.000577s | 0.001214s | byte equality observed |
| mp_intersperse.test | 10 | 0.001236s | 0.001306s | 0.001215s | byte equality observed |
| mp_invoke_q.test | 10 | 0.001257s | 0.001256s | 0.001229s | byte equality observed |
| mp_invoke_q_sf.test | 10 | 0.001262s | 0.001234s | 0.001262s | byte equality observed |
| mp_iota.test | 10 | 0.001237s | 0.001236s | 0.001246s | byte equality observed |
| mp_iota_2.test | 10 | 0.001268s | 0.001243s | 0.001192s | byte equality observed |
| mp_is_list.test | 10 | 0.001216s | 0.001268s | 0.001213s | byte equality observed |
| mp_is_map.test | 10 | 0.001214s | 0.001228s | 0.001219s | byte equality observed |
| mp_is_set.test | 9 | 0.001230s | 0.001263s | 0.001260s | byte equality observed |
| mp_is_value_list.test | 10 | 0.001273s | 0.001248s | 0.001225s | byte equality observed |
| mp_iterate.test | 10 | 0.001289s | 0.001241s | 0.001210s | byte equality observed |
| mp_join.test | 8 | 0.001242s | 0.001219s | 0.001199s | byte equality observed |
| mp_lambda.test | 10 | 0.001282s | 0.001239s | 0.001231s | byte equality observed |
| mp_less.test | 10 | 0.001221s | 0.001271s | 0.001233s | byte equality observed |
| mp_list_c.test | 10 | 0.001233s | 0.001242s | 0.001242s | byte equality observed |
| mp_list_v.test | 10 | 0.000579s | 0.000585s | 0.001177s | byte equality observed |
| mp_map_contains.test | 10 | 0.001221s | 0.001254s | 0.001193s | byte equality observed |
| mp_map_erase.test | 10 | 0.001199s | 0.001287s | 0.001197s | byte equality observed |
| mp_map_find.test | 10 | 0.001261s | 0.001303s | 0.001164s | byte equality observed |
| mp_map_find_2.test | 10 | 0.001226s | 0.001228s | 0.001248s | byte equality observed |
| mp_map_find_3.test | 10 | 0.001218s | 0.001228s | 0.001201s | byte equality observed |
| mp_map_find_4.test | 10 | 0.001254s | 0.001247s | 0.001244s | byte equality observed |
| mp_map_insert.test | 10 | 0.001222s | 0.001268s | 0.001240s | byte equality observed |
| mp_map_keys.test | 10 | 0.001236s | 0.001246s | 0.001202s | byte equality observed |
| mp_map_replace.test | 10 | 0.001238s | 0.001272s | 0.001212s | byte equality observed |
| mp_map_update.test | 10 | 0.001244s | 0.001318s | 0.001240s | byte equality observed |
| mp_map_update_q.test | 10 | 0.001238s | 0.001254s | 0.001240s | byte equality observed |
| mp_max.test | 10 | 0.001226s | 0.001261s | 0.001201s | byte equality observed |
| mp_max_element.test | 10 | 0.001244s | 0.001276s | 0.001238s | byte equality observed |
| mp_max_element_2.test | 10 | 0.000568s | 0.000572s | 0.001195s | byte equality observed |
| mp_max_element_q.test | 10 | 0.001239s | 0.001286s | 0.001194s | byte equality observed |
| mp_max_element_q_2.test | 10 | 0.000562s | 0.000584s | 0.001252s | byte equality observed |
| mp_min.test | 10 | 0.001222s | 0.001250s | 0.001193s | byte equality observed |
| mp_min_element.test | 10 | 0.001209s | 0.001265s | 0.001221s | byte equality observed |
| mp_min_element_2.test | 10 | 0.000562s | 0.000591s | 0.001153s | byte equality observed |
| mp_min_element_q.test | 10 | 0.001273s | 0.001272s | 0.001214s | byte equality observed |
| mp_min_element_q_2.test | 10 | 0.000556s | 0.000559s | 0.001202s | byte equality observed |
| mp_none_of.test | 10 | 0.001226s | 0.001270s | 0.001215s | byte equality observed |
| mp_none_of_q.test | 10 | 0.001223s | 0.001274s | 0.001203s | byte equality observed |
| mp_not_fn.test | 10 | 0.001235s | 0.001227s | 0.001267s | byte equality observed |
| mp_nth_element.test | 10 | 0.001230s | 0.001243s | 0.001256s | byte equality observed |
| mp_nth_element_q.test | 10 | 0.001257s | 0.001223s | 0.001200s | byte equality observed |
| mp_or.test | 10 | 0.001253s | 0.001253s | 0.001193s | byte equality observed |
| mp_pairwise_fold.test | 10 | 0.001242s | 0.001281s | 0.001270s | byte equality observed |
| mp_pairwise_fold_q.test | 10 | 0.001230s | 0.001259s | 0.001242s | byte equality observed |
| mp_partial_sum.test | 10 | 0.001255s | 0.001270s | 0.001216s | byte equality observed |
| mp_partition.test | 10 | 0.001256s | 0.001291s | 0.001226s | byte equality observed |
| mp_partition_q.test | 10 | 0.001217s | 0.001230s | 0.001254s | byte equality observed |
| mp_plus.test | 10 | 0.001237s | 0.001250s | 0.001280s | byte equality observed |
| mp_pop_back.test | 10 | 0.001270s | 0.001276s | 0.001228s | byte equality observed |
| mp_pop_back_2.test | 10 | 0.000554s | 0.000577s | 0.001190s | byte equality observed |
| mp_pop_front.test | 10 | 0.001267s | 0.001296s | 0.001186s | byte equality observed |
| mp_pop_front_2.test | 10 | 0.000565s | 0.000585s | 0.001200s | byte equality observed |
| mp_power_set.test | 10 | 0.001237s | 0.001283s | 0.001217s | byte equality observed |
| mp_product.test | 10 | 0.001225s | 0.001309s | 0.001227s | byte equality observed |
| mp_push_back.test | 10 | 0.001236s | 0.001313s | 0.001232s | byte equality observed |
| mp_push_back_2.test | 10 | 0.000563s | 0.000557s | 0.001204s | byte equality observed |
| mp_push_front.test | 10 | 0.001245s | 0.001297s | 0.001189s | byte equality observed |
| mp_push_front_2.test | 10 | 0.000570s | 0.000562s | 0.001215s | byte equality observed |
| mp_quote.test | 10 | 0.001236s | 0.001238s | 0.001205s | byte equality observed |
| mp_quote_trait.test | 10 | 0.001203s | 0.001240s | 0.001293s | byte equality observed |
| mp_remove.test | 10 | 0.001208s | 0.001238s | 0.001215s | byte equality observed |
| mp_remove_if.test | 10 | 0.001256s | 0.001274s | 0.001201s | byte equality observed |
| mp_remove_if_q.test | 10 | 0.001246s | 0.001262s | 0.001181s | byte equality observed |
| mp_rename.test | 10 | 0.001243s | 0.001240s | 0.001183s | byte equality observed |
| mp_rename_2.test | 10 | 0.000593s | 0.000599s | 0.001190s | byte equality observed |
| mp_rename_v.test | 10 | 0.000592s | 0.000600s | 0.001198s | byte equality observed |
| mp_repeat.test | 10 | 0.001278s | 0.001324s | 0.001215s | byte equality observed |
| mp_repeat_2.test | 10 | 0.000571s | 0.000589s | 0.001221s | byte equality observed |
| mp_repeat_3.test | 10 | 0.001239s | 0.001293s | 0.001246s | byte equality observed |
| mp_replace.test | 10 | 0.001251s | 0.001326s | 0.001232s | byte equality observed |
| mp_replace_at.test | 10 | 0.001247s | 0.001253s | 0.001236s | byte equality observed |
| mp_replace_at_c.test | 10 | 0.001239s | 0.001251s | 0.001251s | byte equality observed |
| mp_replace_front.test | 10 | 0.001246s | 0.001271s | 0.001209s | byte equality observed |
| mp_replace_front_2.test | 10 | 0.000566s | 0.000561s | 0.001218s | byte equality observed |
| mp_replace_if.test | 10 | 0.001224s | 0.001297s | 0.001220s | byte equality observed |
| mp_replace_if_q.test | 10 | 0.001229s | 0.001238s | 0.001236s | byte equality observed |
| mp_replace_second.test | 10 | 0.001250s | 0.001263s | 0.001223s | byte equality observed |
| mp_replace_second_2.test | 10 | 0.000558s | 0.000570s | 0.001191s | byte equality observed |
| mp_replace_third.test | 10 | 0.001273s | 0.001307s | 0.001211s | byte equality observed |
| mp_replace_third_2.test | 10 | 0.000556s | 0.000565s | 0.001219s | byte equality observed |
| mp_reverse.test | 10 | 0.001262s | 0.001263s | 0.001241s | byte equality observed |
| mp_reverse_fold.test | 10 | 0.001285s | 0.001291s | 0.001212s | byte equality observed |
| mp_reverse_fold_q.test | 10 | 0.001250s | 0.001253s | 0.001199s | byte equality observed |
| mp_rotate_left.test | 10 | 0.001261s | 0.001217s | 0.001218s | byte equality observed |
| mp_rotate_right.test | 10 | 0.001249s | 0.001256s | 0.001216s | byte equality observed |
| mp_same.test | 10 | 0.001249s | 0.001261s | 0.001214s | byte equality observed |
| mp_second.test | 10 | 0.001246s | 0.001241s | 0.001212s | byte equality observed |
| mp_second_2.test | 10 | 0.000589s | 0.000561s | 0.001231s | byte equality observed |
| mp_set_contains.test | 10 | 0.001275s | 0.001242s | 0.001278s | byte equality observed |
| mp_set_difference.test | 10 | 0.001293s | 0.001227s | 0.001204s | byte equality observed |
| mp_set_difference_sf.test | 10 | 0.001229s | 0.001291s | 0.001226s | byte equality observed |
| mp_set_intersection.test | 10 | 0.001242s | 0.001305s | 0.001223s | byte equality observed |
| mp_set_intersection_sf.test | 10 | 0.001231s | 0.001235s | 0.001220s | byte equality observed |
| mp_set_push_back.test | 10 | 0.001203s | 0.001286s | 0.001227s | byte equality observed |
| mp_set_push_front.test | 10 | 0.001280s | 0.001241s | 0.001206s | byte equality observed |
| mp_set_union.test | 10 | 0.001227s | 0.001265s | 0.001225s | byte equality observed |
| mp_set_union_sf.test | 10 | 0.001269s | 0.001272s | 0.001180s | byte equality observed |
| mp_similar.test | 10 | 0.001246s | 0.001248s | 0.001177s | byte equality observed |
| mp_size.test | 10 | 0.001259s | 0.001284s | 0.001218s | byte equality observed |
| mp_size_2.test | 10 | 0.000583s | 0.000582s | 0.001166s | byte equality observed |
| mp_slice.test | 10 | 0.001290s | 0.001287s | 0.001194s | byte equality observed |
| mp_slice_2.test | 10 | 0.000564s | 0.000582s | 0.001227s | byte equality observed |
| mp_sliding_fold.test | 10 | 0.001301s | 0.001228s | 0.001294s | byte equality observed |
| mp_sliding_fold_q.test | 10 | 0.001271s | 0.001357s | 0.001231s | byte equality observed |
| mp_sort.test | 10 | 0.001230s | 0.001230s | 0.001237s | byte equality observed |
| mp_sort_q.test | 10 | 0.001243s | 0.001256s | 0.001264s | byte equality observed |
| mp_split.test | 10 | 0.001246s | 0.001286s | 0.001289s | byte equality observed |
| mp_starts_with.test | 10 | 0.001251s | 0.001267s | 0.001238s | byte equality observed |
| mp_starts_with_sf.test | 10 | 0.001246s | 0.001276s | 0.001247s | byte equality observed |
| mp_take.test | 10 | 0.001278s | 0.001287s | 0.001273s | byte equality observed |
| mp_take_2.test | 10 | 0.000564s | 0.000576s | 0.001224s | byte equality observed |
| mp_third.test | 10 | 0.001258s | 0.001289s | 0.001248s | byte equality observed |
| mp_third_2.test | 10 | 0.000575s | 0.000576s | 0.001215s | byte equality observed |
| mp_transform.test | 10 | 0.001255s | 0.001301s | 0.001221s | byte equality observed |
| mp_transform_2.test | 10 | 0.001232s | 0.001209s | 0.001245s | byte equality observed |
| mp_transform_front.test | 10 | 0.001249s | 0.001261s | 0.001224s | byte equality observed |
| mp_transform_front_2.test | 10 | 0.000563s | 0.000567s | 0.001179s | byte equality observed |
| mp_transform_if.test | 10 | 0.001269s | 0.001250s | 0.001194s | byte equality observed |
| mp_transform_if_q.test | 10 | 0.001250s | 0.001233s | 0.001251s | byte equality observed |
| mp_transform_q.test | 10 | 0.001238s | 0.001261s | 0.001260s | byte equality observed |
| mp_transform_q_2.test | 10 | 0.001222s | 0.001205s | 0.001250s | byte equality observed |
| mp_transform_second.test | 10 | 0.001270s | 0.001283s | 0.001209s | byte equality observed |
| mp_transform_second_2.test | 10 | 0.000572s | 0.000554s | 0.001219s | byte equality observed |
| mp_transform_sf.test | 10 | 0.001214s | 0.001241s | 0.001247s | byte equality observed |
| mp_transform_third.test | 10 | 0.001238s | 0.001271s | 0.001208s | byte equality observed |
| mp_transform_third_2.test | 10 | 0.000575s | 0.000559s | 0.001211s | byte equality observed |
| mp_unique.test | 10 | 0.001232s | 0.001284s | 0.001186s | byte equality observed |
| mp_unique_if.test | 10 | 0.001311s | 0.001267s | 0.001198s | byte equality observed |
| mp_unique_if_q.test | 10 | 0.001249s | 0.001309s | 0.001230s | byte equality observed |
| mp_valid.test | 10 | 0.001268s | 0.001325s | 0.001180s | byte equality observed |
| mp_valid_and_true.test | 10 | 0.001250s | 0.001264s | 0.001197s | byte equality observed |
| mp_value.test | 10 | 0.000559s | 0.000561s | 0.001198s | byte equality observed |
| mp_with_index.test | 10 | 0.001658s | 0.001638s | 0.001505s | byte equality observed |
| mp_with_index_cx.test | 10 | 0.000562s | 0.000563s | 0.001218s | byte equality observed |
| mpl.test | 10 | 0.001261s | 0.001266s | 0.001198s | byte equality observed |
| mpl_list.test | 10 | 0.001253s | 0.001281s | 0.001218s | byte equality observed |
| mpl_tuple.test | 10 | 0.001219s | 0.001267s | 0.001211s | byte equality observed |
| mpl_version.test | 10 | 0.001231s | 0.001256s | 0.001193s | byte equality observed |
| set_version.test | 10 | 0.001204s | 0.001283s | 0.001244s | byte equality observed |
| tuple_apply.test | 10 | 0.001232s | 0.001246s | 0.001209s | byte equality observed |
| tuple_for_each.test | 10 | 0.001297s | 0.001267s | 0.001232s | byte equality observed |
| tuple_transform.test | 10 | 0.001233s | 0.001222s | 0.001219s | byte equality observed |
| tuple_transform_2.test | 10 | 0.001214s | 0.001219s | 0.001207s | byte equality observed |
| tuple_version.test | 10 | 0.001232s | 0.001227s | 0.001242s | byte equality observed |
| utility_version.test | 10 | 0.001256s | 0.001223s | 0.001244s | byte equality observed |
| version.test | 10 | 0.001270s | 0.001195s | 0.001272s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44000592280).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
