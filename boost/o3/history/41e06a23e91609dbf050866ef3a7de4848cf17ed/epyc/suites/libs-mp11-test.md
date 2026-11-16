# libs/mp11/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| mp11.test | COMPILE | 0.050111 | 0.102051 | 0.188506 | — | — | — |
| complex_h.test | COMPILE | 0.203719 | 0.432255 | 0.714107 | — | — | — |
| mp_size.test | RUN | 0.240798 | 1.311002 | 0.924671 | 0.001952 | 0.001962 | 0.001723 |
| mp_size_2.test | RUN | 0.020410 | 0.047560 | 0.073875 | 0.000881 | 0.000918 | 0.001984 |
| mp_empty.test | RUN | 0.223090 | 0.843263 | 0.859761 | 0.001695 | 0.002142 | 0.001797 |
| mp_empty_2.test | RUN | 0.021700 | 0.048409 | 0.080464 | 0.000728 | 0.000783 | 0.002017 |
| mp_assign.test | RUN | 0.257291 | 1.748295 | 1.135166 | 0.001713 | 0.002203 | 0.001976 |
| mp_assign_2.test | RUN | 0.021487 | 0.048680 | 0.079668 | 0.000751 | 0.000957 | 0.001965 |
| mp_clear.test | RUN | 0.206283 | 0.769943 | 0.888703 | 0.001978 | 0.001956 | 0.001886 |
| mp_clear_2.test | RUN | 0.019644 | 0.046794 | 0.063900 | 0.000801 | 0.000709 | 0.001994 |
| mp_front.test | RUN | 0.239911 | 1.194661 | 0.973407 | 0.001725 | 0.002274 | 0.002110 |
| mp_front_2.test | RUN | 0.019720 | 0.046944 | 0.083442 | 0.000833 | 0.000824 | 0.002081 |
| mp_pop_front.test | RUN | 0.228836 | 1.222245 | 0.961473 | 0.001938 | 0.002230 | 0.001845 |
| mp_pop_front_2.test | RUN | 0.021241 | 0.050801 | 0.069763 | 0.000733 | 0.000919 | 0.002112 |
| mp_second.test | RUN | 0.232888 | 0.805150 | 0.942760 | 0.001805 | 0.002218 | 0.001879 |
| mp_second_2.test | RUN | 0.022588 | 0.049514 | 0.081842 | 0.000789 | 0.000867 | 0.001942 |
| mp_third.test | RUN | 0.230529 | 0.753648 | 0.876370 | 0.002008 | 0.002213 | 0.002057 |
| mp_third_2.test | RUN | 0.020905 | 0.050496 | 0.069325 | 0.000645 | 0.000773 | 0.001908 |
| mp_push_front.test | RUN | 0.294833 | 2.633303 | 1.521741 | 0.001752 | 0.002072 | 0.002067 |
| mp_push_front_2.test | RUN | 0.020805 | 0.046652 | 0.083454 | 0.000692 | 0.000962 | 0.001902 |
| mp_push_back.test | RUN | 0.298605 | 2.597258 | 1.532604 | 0.001886 | 0.001998 | 0.001826 |
| mp_push_back_2.test | RUN | 0.020515 | 0.051215 | 0.082621 | 0.000707 | 0.000755 | 0.002030 |
| mp_rename.test | RUN | 0.290978 | 2.363156 | 1.302340 | 0.001616 | 0.002020 | 0.001737 |
| mp_rename_2.test | RUN | 0.018052 | 0.051517 | 0.081357 | 0.000757 | 0.000897 | 0.002107 |
| mp_append.test | RUN | 0.296429 | 2.733717 | 1.493295 | 0.001970 | 0.002275 | 0.002018 |
| mp_append_2.test | RUN | 0.616145 | 6.032785 | 1.825857 | 0.001739 | 0.002050 | 0.001966 |
| mp_append_3.test | RUN | 0.020468 | 0.046184 | 0.073290 | 0.000759 | 0.000669 | 0.001920 |
| mp_append_sf.test | RUN | 0.223669 | 0.693172 | 0.840754 | 0.001983 | 0.002211 | 0.002028 |
| mp_replace_front.test | RUN | 0.274173 | 1.952305 | 1.151585 | 0.001856 | 0.002078 | 0.001939 |
| mp_replace_front_2.test | RUN | 0.021843 | 0.049813 | 0.078786 | 0.000682 | 0.000878 | 0.001733 |
| mp_replace_second.test | RUN | 0.254135 | 1.249227 | 1.039401 | 0.001846 | 0.001758 | 0.002060 |
| mp_replace_second_2.test | RUN | 0.020877 | 0.050975 | 0.078946 | 0.000690 | 0.000913 | 0.001762 |
| mp_replace_third.test | RUN | 0.253044 | 1.049313 | 1.025194 | 0.001982 | 0.002070 | 0.002054 |
| mp_replace_third_2.test | RUN | 0.020415 | 0.050558 | 0.081460 | 0.000740 | 0.000755 | 0.001984 |
| mp_apply_q.test | RUN | 0.276340 | 2.365493 | 1.339813 | 0.002066 | 0.001947 | 0.002020 |
| mp_apply_q_sf.test | RUN | 0.218504 | 0.721322 | 0.832420 | 0.001894 | 0.002100 | 0.002060 |
| mp_is_list.test | RUN | 0.227424 | 0.837055 | 0.852032 | 0.001850 | 0.002230 | 0.001742 |
| mp_list_c.test | RUN | 0.239287 | 1.016758 | 0.970315 | 0.001875 | 0.002046 | 0.001983 |
| mp_transform_front.test | RUN | 0.265739 | 1.965048 | 1.159445 | 0.001709 | 0.001878 | 0.002084 |
| mp_transform_front_2.test | RUN | 0.021887 | 0.049643 | 0.066924 | 0.000765 | 0.000885 | 0.002035 |
| mp_transform_second.test | RUN | 0.251547 | 1.676938 | 1.051774 | 0.001831 | 0.002226 | 0.001796 |
| mp_transform_second_2.test | RUN | 0.021390 | 0.049344 | 0.081283 | 0.000751 | 0.000869 | 0.001452 |
| mp_transform_third.test | RUN | 0.238341 | 1.252052 | 0.987377 | 0.001776 | 0.002279 | 0.002174 |
| mp_transform_third_2.test | RUN | 0.021819 | 0.051187 | 0.076331 | 0.000734 | 0.000862 | 0.001934 |
| mp_list_v.test | RUN | 0.021583 | 0.048711 | 0.072601 | 0.000788 | 0.000745 | 0.001697 |
| mp_rename_v.test | RUN | 0.019965 | 0.049776 | 0.068464 | 0.000673 | 0.000944 | 0.001831 |
| mp_is_value_list.test | RUN | 0.218155 | 0.539754 | 0.846568 | 0.002247 | 0.002038 | 0.001797 |
| mp_transform.test | RUN | 0.494246 | 4.059719 | 2.316806 | 0.002148 | 0.002109 | 0.002033 |
| mp_transform_2.test | RUN | 0.206378 | 0.482515 | 0.788075 | 0.001832 | 0.002208 | 0.001722 |
| mp_transform_q.test | RUN | 0.478601 | 3.884455 | 2.243646 | 0.001942 | 0.002259 | 0.002066 |
| mp_transform_q_2.test | RUN | 0.538230 | 1.285670 | 2.925882 | 0.001907 | 0.002048 | 0.001714 |
| mp_transform_sf.test | RUN | 0.231000 | 0.735874 | 0.926303 | 0.001887 | 0.001871 | 0.002062 |
| mp_transform_if.test | RUN | 0.285085 | 1.918915 | 1.269772 | 0.001865 | 0.001934 | 0.002067 |
| mp_transform_if_q.test | RUN | 0.284231 | 1.941278 | 1.303820 | 0.001708 | 0.001933 | 0.001839 |
| mp_filter.test | RUN | 0.253992 | 1.163839 | 1.037067 | 0.001848 | 0.002130 | 0.001917 |
| mp_fill.test | RUN | 0.239937 | 0.907218 | 0.959824 | 0.001857 | 0.001855 | 0.001888 |
| mp_fill_2.test | RUN | 0.038237 | 0.074247 | 0.124438 | 0.000824 | 0.000922 | 0.002056 |
| mp_count.test | RUN | 0.463955 | 2.102778 | 1.481457 | 0.001765 | 0.002032 | 0.001970 |
| mp_count_if.test | RUN | 0.477947 | 2.153166 | 1.640653 | 0.001629 | 0.001938 | 0.002024 |
| mp_count_if_q.test | RUN | 0.246371 | 1.386940 | 0.967778 | 0.001711 | 0.002094 | 0.001937 |
| mp_contains.test | RUN | 0.237529 | 0.841351 | 0.849786 | 0.001801 | 0.002002 | 0.001816 |
| mp_starts_with.test | RUN | 0.231281 | 0.861129 | 0.901326 | 0.001892 | 0.001888 | 0.001964 |
| mp_starts_with_sf.test | RUN | 0.236397 | 0.741123 | 0.853090 | 0.001850 | 0.001831 | 0.002082 |
| mp_repeat.test | RUN | 0.336883 | 3.416725 | 1.650160 | 0.002052 | 0.002075 | 0.002108 |
| mp_repeat_2.test | RUN | 0.037170 | 0.074909 | 0.140864 | 0.000813 | 0.000988 | 0.002058 |
| mp_repeat_3.test | RUN | 0.285489 | 0.499342 | 0.827314 | 0.001743 | 0.002185 | 0.002305 |
| mp_product.test | RUN | 0.264271 | 2.088251 | 1.221118 | 0.001842 | 0.002081 | 0.002130 |
| mp_drop.test | RUN | 0.293550 | 2.558786 | 1.297895 | 0.001871 | 0.002068 | 0.002065 |
| mp_drop_2.test | RUN | 0.037497 | 0.078379 | 0.146665 | 0.000731 | 0.000937 | 0.001946 |
| mp_iota.test | RUN | 0.273966 | 2.191764 | 1.210609 | 0.001647 | 0.001955 | 0.001681 |
| mp_iota_2.test | RUN | 0.294005 | 2.681813 | 1.391762 | 0.001936 | 0.002035 | 0.001918 |
| mp_at.test | RUN | 0.249741 | 1.162112 | 0.951768 | 0.001648 | 0.002106 | 0.002098 |
| mp_at_2.test | RUN | 0.037152 | 0.078311 | 0.144162 | 0.000657 | 0.000835 | 0.001994 |
| mp_at_sf.test | RUN | 0.232343 | 0.700233 | 0.923500 | 0.001966 | 0.001922 | 0.002124 |
| mp_take.test | RUN | 0.384668 | 3.354678 | 1.658676 | 0.001954 | 0.002190 | 0.002038 |
| mp_take_2.test | RUN | 0.037399 | 0.079398 | 0.128081 | 0.000685 | 0.000886 | 0.002154 |
| mp_slice.test | RUN | 0.445786 | 3.454721 | 2.009073 | 0.001914 | 0.002316 | 0.001800 |
| mp_slice_2.test | RUN | 0.036528 | 0.078707 | 0.143726 | 0.000842 | 0.000834 | 0.001974 |
| mp_replace.test | RUN | 0.283854 | 1.759504 | 1.316905 | 0.002040 | 0.001810 | 0.001988 |
| mp_replace_if.test | RUN | 0.275997 | 1.567579 | 1.257729 | 0.001936 | 0.002206 | 0.001673 |
| mp_replace_if_q.test | RUN | 0.276258 | 1.563413 | 1.259595 | 0.001912 | 0.002148 | 0.001982 |
| mp_copy_if.test | RUN | 0.279325 | 2.227877 | 1.176839 | 0.001794 | 0.002099 | 0.002090 |
| mp_copy_if_q.test | RUN | 0.282314 | 2.221794 | 1.221819 | 0.002026 | 0.002116 | 0.001857 |
| mp_remove.test | RUN | 0.269693 | 1.479118 | 1.250032 | 0.001951 | 0.002292 | 0.001725 |
| mp_remove_if.test | RUN | 0.282871 | 2.334260 | 1.265602 | 0.002104 | 0.002150 | 0.002000 |
| mp_remove_if_q.test | RUN | 0.288556 | 2.327185 | 1.277798 | 0.001870 | 0.002138 | 0.002066 |
| mp_partition.test | RUN | 0.283342 | 2.153142 | 1.363688 | 0.002034 | 0.001868 | 0.001924 |
| mp_partition_q.test | RUN | 0.288514 | 2.149022 | 1.374588 | 0.001981 | 0.001981 | 0.001712 |
| mp_sort.test | RUN | 0.271214 | 1.580013 | 1.183695 | 0.001848 | 0.002146 | 0.001966 |
| mp_sort_q.test | RUN | 0.273378 | 1.543620 | 1.200543 | 0.001831 | 0.002152 | 0.002023 |
| mp_find.test | RUN | 0.270045 | 1.679234 | 1.080954 | 0.002008 | 0.002092 | 0.001637 |
| mp_find_if.test | RUN | 0.252526 | 1.561156 | 1.014844 | 0.001847 | 0.001957 | 0.001802 |
| mp_find_if_q.test | RUN | 0.281727 | 1.768992 | 1.196401 | 0.001829 | 0.002132 | 0.002014 |
| mp_reverse.test | RUN | 0.551857 | 4.467003 | 2.216021 | 0.002058 | 0.002232 | 0.002206 |
| mp_fold.test | RUN | 0.908651 | 3.482180 | 5.403326 | 0.001904 | 0.002158 | 0.002125 |
| mp_fold_q.test | RUN | 0.256281 | 1.535110 | 1.179276 | 0.001626 | 0.001734 | 0.002065 |
| mp_fold_q_sf.test | RUN | 0.237717 | 0.759826 | 0.922506 | 0.001638 | 0.002111 | 0.001942 |
| mp_reverse_fold.test | RUN | 0.435142 | 3.335311 | 1.591203 | 0.001928 | 0.002122 | 0.001998 |
| mp_reverse_fold_q.test | RUN | 0.262491 | 1.848019 | 1.203501 | 0.001808 | 0.001935 | 0.002036 |
| mp_unique.test | RUN | 0.261040 | 1.705574 | 1.201626 | 0.001590 | 0.002038 | 0.002124 |
| mp_unique_if.test | RUN | 0.476693 | 3.382699 | 1.800344 | 0.001770 | 0.002032 | 0.001608 |
| mp_unique_if_q.test | RUN | 0.409555 | 3.502503 | 1.523748 | 0.001772 | 0.002025 | 0.002002 |
| mp_all_of.test | RUN | 0.599421 | 1.882680 | 2.003704 | 0.002078 | 0.002109 | 0.002025 |
| mp_all_of_q.test | RUN | 0.235910 | 0.841778 | 0.840200 | 0.001739 | 0.002046 | 0.002122 |
| mp_any_of.test | RUN | 0.581562 | 1.932610 | 1.991941 | 0.001763 | 0.001933 | 0.002004 |
| mp_any_of_q.test | RUN | 0.235098 | 0.829920 | 0.915735 | 0.002104 | 0.002191 | 0.002068 |
| mp_none_of.test | RUN | 0.579990 | 1.915560 | 1.975006 | 0.001596 | 0.002068 | 0.002245 |
| mp_none_of_q.test | RUN | 0.236929 | 0.855179 | 0.871425 | 0.001998 | 0.002272 | 0.001879 |
| mp_replace_at.test | RUN | 0.292316 | 1.709042 | 1.247865 | 0.002020 | 0.002242 | 0.001963 |
| mp_replace_at_c.test | RUN | 0.283257 | 1.615893 | 1.279374 | 0.001820 | 0.002098 | 0.002080 |
| mp_for_each.test | RUN | 0.262463 | 1.253801 | 1.511509 | 0.001736 | 0.001799 | 0.002008 |
| mp_insert.test | RUN | 0.417588 | 3.408933 | 1.910062 | 0.001956 | 0.002099 | 0.002168 |
| mp_insert_2.test | RUN | 0.035962 | 0.073733 | 0.138903 | 0.000718 | 0.000805 | 0.002008 |
| mp_erase.test | RUN | 0.454792 | 3.593817 | 2.091943 | 0.002049 | 0.002230 | 0.002010 |
| mp_erase_2.test | RUN | 0.038004 | 0.073639 | 0.137820 | 0.000728 | 0.000915 | 0.002020 |
| mp_with_index.test | RUN | 0.643426 | 7.459979 | 4.781587 | 0.002544 | 0.002440 | 0.002020 |
| mp_with_index_cx.test | RUN | 0.003776 | 0.023566 | 0.030215 | 0.000779 | 0.000972 | 0.001751 |
| mp_from_sequence.test | RUN | 0.273700 | 1.954347 | 1.238804 | 0.001741 | 0.001918 | 0.002160 |
| mp_from_sequence_2.test | RUN | 0.288526 | 2.252011 | 1.428378 | 0.002074 | 0.002194 | 0.002027 |
| mp_from_sequence_3.test | RUN | 0.246456 | 1.018443 | 1.015162 | 0.001778 | 0.002184 | 0.001972 |
| mp_min_element.test | RUN | 0.239185 | 0.918558 | 0.976171 | 0.001946 | 0.002026 | 0.001953 |
| mp_min_element_2.test | RUN | 0.036733 | 0.078723 | 0.144714 | 0.000676 | 0.000888 | 0.001662 |
| mp_min_element_q.test | RUN | 0.238382 | 0.943345 | 0.908520 | 0.001764 | 0.002347 | 0.001972 |
| mp_min_element_q_2.test | RUN | 0.037935 | 0.077877 | 0.127185 | 0.000686 | 0.000701 | 0.002070 |
| mp_max_element.test | RUN | 0.243203 | 0.939521 | 0.897691 | 0.001804 | 0.002210 | 0.001814 |
| mp_max_element_2.test | RUN | 0.037305 | 0.078602 | 0.142521 | 0.000733 | 0.000876 | 0.001874 |
| mp_max_element_q.test | RUN | 0.238745 | 0.972979 | 0.903947 | 0.001958 | 0.002196 | 0.002120 |
| mp_max_element_q_2.test | RUN | 0.032221 | 0.079283 | 0.142827 | 0.000727 | 0.000892 | 0.001916 |
| mp_nth_element.test | RUN | 0.267470 | 1.290653 | 1.218120 | 0.001736 | 0.002128 | 0.002007 |
| mp_nth_element_q.test | RUN | 0.262613 | 1.280645 | 1.180833 | 0.001854 | 0.001784 | 0.001953 |
| mp_back.test | RUN | 0.255892 | 1.073652 | 0.994485 | 0.001723 | 0.001916 | 0.002017 |
| mp_back_2.test | RUN | 0.037248 | 0.075795 | 0.143091 | 0.000689 | 0.000843 | 0.002110 |
| mp_pop_back.test | RUN | 0.687598 | 6.866263 | 2.059022 | 0.001855 | 0.001818 | 0.001770 |
| mp_pop_back_2.test | RUN | 0.037222 | 0.074903 | 0.126096 | 0.000856 | 0.000830 | 0.001996 |
| mp_flatten.test | RUN | 0.299658 | 2.470434 | 1.484052 | 0.001763 | 0.002156 | 0.002008 |
| mp_rotate_left.test | RUN | 0.300149 | 2.639044 | 1.476165 | 0.001697 | 0.002043 | 0.001712 |
| mp_rotate_right.test | RUN | 0.307799 | 2.652375 | 1.468610 | 0.001726 | 0.002284 | 0.001987 |
| mp_power_set.test | RUN | 0.298392 | 2.537140 | 1.453891 | 0.001547 | 0.002115 | 0.001963 |
| mp_partial_sum.test | RUN | 0.382867 | 3.385751 | 1.673717 | 0.001842 | 0.002008 | 0.002037 |
| mp_iterate.test | RUN | 0.267196 | 1.031462 | 1.180580 | 0.001832 | 0.002068 | 0.001960 |
| mp_pairwise_fold.test | RUN | 0.299881 | 2.359579 | 1.473076 | 0.001846 | 0.002260 | 0.002190 |
| mp_pairwise_fold_q.test | RUN | 0.238995 | 0.723480 | 0.886287 | 0.001858 | 0.002150 | 0.002066 |
| mp_sliding_fold.test | RUN | 0.557182 | 4.420752 | 2.679010 | 0.001919 | 0.002073 | 0.001821 |
| mp_sliding_fold_q.test | RUN | 0.555313 | 4.447653 | 2.653733 | 0.002020 | 0.001936 | 0.001700 |
| mp_intersperse.test | RUN | 0.286179 | 1.700138 | 1.319664 | 0.001659 | 0.002011 | 0.002040 |
| mp_split.test | RUN | 0.389578 | 3.203531 | 1.771456 | 0.002055 | 0.002100 | 0.001826 |
| mp_join.test | RUN | 0.319192 | 2.682354 | 1.635770 | 0.002098 | 0.002046 | 0.001994 |
| integral.test | RUN | 0.241208 | 1.235551 | 0.994221 | 0.001876 | 0.002124 | 0.002016 |
| mp_value.test | RUN | 0.016274 | 0.038344 | 0.059019 | 0.000732 | 0.000732 | 0.001988 |
| mp_identity.test | RUN | 0.235159 | 1.115083 | 0.963116 | 0.001892 | 0.002059 | 0.002102 |
| mp_inherit.test | RUN | 0.235744 | 0.801449 | 0.890719 | 0.001883 | 0.002042 | 0.002132 |
| mp_if.test | RUN | 0.227634 | 0.916537 | 0.836330 | 0.002045 | 0.001972 | 0.002072 |
| mp_if_sf.test | RUN | 0.217701 | 0.675359 | 0.808672 | 0.001770 | 0.002160 | 0.002097 |
| mp_eval_if.test | RUN | 0.227177 | 0.973764 | 0.935228 | 0.001892 | 0.001986 | 0.001999 |
| mp_eval_if_sf.test | RUN | 0.220277 | 0.705123 | 0.846873 | 0.001947 | 0.001882 | 0.002036 |
| mp_valid.test | RUN | 0.227884 | 0.708712 | 0.846688 | 0.002002 | 0.001772 | 0.002026 |
| mp_defer.test | RUN | 0.234689 | 1.191655 | 0.985986 | 0.001770 | 0.002113 | 0.002010 |
| mp_quote.test | RUN | 0.233970 | 1.181921 | 1.018933 | 0.002174 | 0.002061 | 0.001957 |
| mp_invoke_q.test | RUN | 0.258062 | 1.531277 | 1.108401 | 0.002064 | 0.001652 | 0.001647 |
| mp_invoke_q_sf.test | RUN | 0.224866 | 0.680393 | 0.860728 | 0.001986 | 0.002138 | 0.001700 |
| mp_quote_trait.test | RUN | 0.232912 | 1.287396 | 0.998853 | 0.001810 | 0.002268 | 0.002033 |
| mp_cond.test | RUN | 0.229193 | 0.818885 | 0.880125 | 0.002076 | 0.002025 | 0.001806 |
| mp_cond_sf.test | RUN | 0.218773 | 0.692393 | 0.847450 | 0.001906 | 0.002184 | 0.001880 |
| mp_not_fn.test | RUN | 0.220569 | 0.691992 | 0.851389 | 0.001936 | 0.002216 | 0.001565 |
| mp_eval_if_not.test | RUN | 0.227808 | 0.994040 | 0.963333 | 0.001789 | 0.001871 | 0.001669 |
| mp_eval_or.test | RUN | 0.224876 | 0.529176 | 0.865403 | 0.001837 | 0.002180 | 0.001926 |
| mp_compose.test | RUN | 0.247986 | 1.579592 | 1.096516 | 0.001997 | 0.001888 | 0.001950 |
| mp_valid_and_true.test | RUN | 0.220352 | 0.812982 | 0.901557 | 0.001772 | 0.002079 | 0.001908 |
| mp_compose_sf.test | COMPILE | 0.054791 | 0.106812 | 0.203679 | — | — | — |
| integer_sequence.test | RUN | 0.263783 | 1.548452 | 1.219085 | 0.001678 | 0.002084 | 0.001669 |
| tuple_for_each.test | RUN | 0.229023 | 0.606195 | 0.911722 | 0.002076 | 0.002006 | 0.001925 |
| tuple_for_each_cx.test | COMPILE | 0.043869 | 0.087619 | 0.162595 | — | — | — |
| tuple_apply.test | RUN | 0.227632 | 0.597111 | 0.947735 | 0.002086 | 0.001997 | 0.001748 |
| tuple_apply_cx.test | COMPILE | 0.060930 | 0.126763 | 0.227228 | — | — | — |
| construct_from_tuple.test | RUN | 0.225417 | 0.653508 | 0.898235 | 0.001948 | 0.002001 | 0.001803 |
| construct_from_tuple_cx.test | COMPILE | 0.061595 | 0.129918 | 0.225524 | — | — | — |
| tuple_transform.test | RUN | 0.370416 | 1.273932 | 1.792617 | 0.001805 | 0.001863 | 0.001642 |
| tuple_transform_2.test | RUN | 0.325974 | 0.950781 | 1.653807 | 0.001787 | 0.001992 | 0.001863 |
| tuple_transform_cx.test | COMPILE | 0.052595 | 0.119846 | 0.191124 | — | — | — |
| mp_set_contains.test | RUN | 0.231089 | 0.830250 | 0.924824 | 0.001820 | 0.001825 | 0.002056 |
| mp_set_push_back.test | RUN | 0.298646 | 2.520505 | 1.492932 | 0.002026 | 0.002054 | 0.002085 |
| mp_set_push_front.test | RUN | 0.388050 | 2.996842 | 1.682037 | 0.001759 | 0.001948 | 0.002155 |
| mp_is_set.test | RUN | 0.237693 | 0.827799 | 0.941400 | 0.001842 | 0.002090 | 0.001888 |
| mp_set_union.test | RUN | 0.289772 | 2.131831 | 1.389901 | 0.001984 | 0.001962 | 0.001960 |
| mp_set_union_sf.test | RUN | 0.226148 | 0.671396 | 0.872755 | 0.001944 | 0.001938 | 0.001954 |
| mp_set_difference.test | RUN | 0.264735 | 1.686014 | 1.209447 | 0.001746 | 0.002124 | 0.002067 |
| mp_set_difference_sf.test | RUN | 0.223076 | 0.700319 | 0.819986 | 0.002036 | 0.001976 | 0.002034 |
| mp_set_intersection.test | RUN | 0.263280 | 1.664658 | 1.173779 | 0.001853 | 0.002194 | 0.002108 |
| mp_set_intersection_sf.test | RUN | 0.225294 | 0.680204 | 0.836296 | 0.001866 | 0.001957 | 0.002166 |
| mp_all.test | RUN | 0.229058 | 0.832550 | 0.887335 | 0.001886 | 0.002268 | 0.002046 |
| mp_all_2.test | RUN | 0.604997 | 1.758727 | 1.994640 | 0.002040 | 0.001854 | 0.001643 |
| mp_and.test | RUN | 0.226669 | 0.834867 | 0.904414 | 0.001485 | 0.001919 | 0.002066 |
| mp_any.test | RUN | 0.220009 | 0.791033 | 0.875486 | 0.001679 | 0.001963 | 0.002047 |
| mp_any_2.test | RUN | 0.636149 | 1.752777 | 1.905166 | 0.001669 | 0.002164 | 0.002084 |
| mp_or.test | RUN | 0.228355 | 0.778421 | 0.839249 | 0.001769 | 0.002004 | 0.002156 |
| mp_same.test | RUN | 0.429518 | 1.379144 | 1.273425 | 0.001818 | 0.002042 | 0.001748 |
| mp_plus.test | RUN | 0.233464 | 0.969208 | 1.016874 | 0.001850 | 0.001932 | 0.001944 |
| mp_less.test | RUN | 0.234502 | 0.832602 | 0.935967 | 0.002128 | 0.001807 | 0.001832 |
| mp_min.test | RUN | 0.227294 | 0.780581 | 0.891154 | 0.001884 | 0.001991 | 0.001955 |
| mp_max.test | RUN | 0.231760 | 0.853167 | 0.923781 | 0.001849 | 0.002011 | 0.002105 |
| mp_similar.test | RUN | 0.225309 | 0.837033 | 0.937086 | 0.001658 | 0.001681 | 0.002004 |
| mp_map_find.test | RUN | 0.266080 | 1.528691 | 1.152937 | 0.001792 | 0.001852 | 0.002075 |
| mp_map_find_2.test | RUN | 0.251267 | 0.628767 | 1.019716 | 0.001883 | 0.001711 | 0.001872 |
| mp_map_find_3.test | RUN | 0.241029 | 0.607524 | 1.019433 | 0.001602 | 0.001738 | 0.002012 |
| mp_map_find_4.test | RUN | 0.229704 | 0.568915 | 0.915599 | 0.001760 | 0.001951 | 0.002016 |
| mp_map_contains.test | RUN | 0.239509 | 0.855712 | 0.933960 | 0.002055 | 0.002232 | 0.002144 |
| mp_map_insert.test | RUN | 0.309794 | 2.793001 | 1.589322 | 0.001809 | 0.002271 | 0.001930 |
| mp_map_replace.test | RUN | 0.400349 | 3.182234 | 1.814157 | 0.001624 | 0.002018 | 0.001940 |
| mp_map_erase.test | RUN | 0.300588 | 2.368815 | 1.527046 | 0.001580 | 0.002198 | 0.001814 |
| mp_map_update.test | RUN | 0.257795 | 1.556149 | 1.217280 | 0.002132 | 0.002110 | 0.001946 |
| mp_map_update_q.test | RUN | 0.272048 | 1.557037 | 1.175211 | 0.001746 | 0.002110 | 0.001963 |
| mp_map_keys.test | RUN | 0.267044 | 1.402488 | 1.162509 | 0.002006 | 0.002231 | 0.002152 |
| mp_is_map.test | RUN | 0.247101 | 0.877412 | 0.959379 | 0.001830 | 0.002136 | 0.001663 |
| mp_bind.test | RUN | 0.300102 | 2.470640 | 1.389921 | 0.002062 | 0.001982 | 0.002072 |
| mp_bind_q.test | RUN | 0.265579 | 1.565186 | 1.139907 | 0.001938 | 0.001945 | 0.001929 |
| mp_bind_front.test | RUN | 0.259491 | 1.718899 | 1.135527 | 0.001782 | 0.002205 | 0.001864 |
| mp_bind_back.test | RUN | 0.259584 | 1.747016 | 1.127019 | 0.001850 | 0.001930 | 0.001946 |
| mp_lambda.test | RUN | 0.573424 | 5.063040 | 2.775891 | 0.001767 | 0.001694 | 0.001856 |
| mpl.test | RUN | 0.510969 | 1.325940 | 2.256062 | 0.001934 | 0.002048 | 0.001849 |
| mpl_list.test | RUN | 0.293725 | 1.051953 | 1.119795 | 0.001978 | 0.002002 | 0.001973 |
| mpl_tuple.test | RUN | 0.290783 | 1.029838 | 1.097199 | 0.001851 | 0.002015 | 0.002030 |
| version.test | RUN | 0.149539 | 0.379586 | 0.579804 | 0.002076 | 0.002001 | 0.001780 |
| mp11_version.test | RUN | 0.181463 | 0.450850 | 0.683908 | 0.001684 | 0.002017 | 0.001714 |
| list_version.test | RUN | 0.155229 | 0.391375 | 0.608140 | 0.001751 | 0.001587 | 0.001777 |
| algorithm_version.test | RUN | 0.174203 | 0.410980 | 0.649382 | 0.002076 | 0.001838 | 0.001768 |
| integral_version.test | RUN | 0.151340 | 0.382153 | 0.586710 | 0.001932 | 0.001956 | 0.002026 |
| utility_version.test | RUN | 0.153606 | 0.388872 | 0.591711 | 0.001529 | 0.001924 | 0.001735 |
| function_version.test | RUN | 0.154510 | 0.387042 | 0.603413 | 0.001786 | 0.001514 | 0.001815 |
| map_version.test | RUN | 0.176407 | 0.420381 | 0.649747 | 0.002102 | 0.001913 | 0.001787 |
| set_version.test | RUN | 0.154063 | 0.395865 | 0.604637 | 0.001875 | 0.001966 | 0.001938 |
| bind_version.test | RUN | 0.167257 | 0.411104 | 0.630244 | 0.001668 | 0.001956 | 0.001966 |
| integer_sequence_version.test | RUN | 0.146795 | 0.384155 | 0.407668 | 0.001875 | 0.001820 | 0.001417 |
| tuple_version.test | RUN | 0.164632 | 0.417030 | 0.552938 | 0.001510 | 0.002169 | 0.001370 |
| mpl_version.test | RUN | 0.112512 | 0.306273 | 0.548378 | 0.001342 | 0.001592 | 0.001468 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.998× | 1.000×, 0.997× | 0.994× |
| clang | 1.088× | 1.094×, 1.082× | 1.006× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1359 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/43785224349).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| algorithm_version.test | 10 | 0.001138s | 0.001138s | 0.001150s | byte equality observed |
| bind_version.test | 10 | 0.001125s | 0.001135s | 0.001159s | byte equality observed |
| construct_from_tuple.test | 10 | 0.001143s | 0.001138s | 0.001161s | byte equality observed |
| function_version.test | 10 | 0.001115s | 0.001141s | 0.001222s | byte equality observed |
| integer_sequence.test | 10 | 0.001118s | 0.001133s | 0.001227s | byte equality observed |
| integer_sequence_version.test | 10 | 0.001125s | 0.001128s | 0.001228s | byte equality observed |
| integral.test | 10 | 0.001134s | 0.001167s | 0.001216s | byte equality observed |
| integral_version.test | 10 | 0.001143s | 0.001146s | 0.001222s | byte equality observed |
| list_version.test | 10 | 0.001155s | 0.001144s | 0.001244s | byte equality observed |
| map_version.test | 10 | 0.001144s | 0.001145s | 0.001277s | byte equality observed |
| mp11_version.test | 10 | 0.001144s | 0.001144s | 0.001197s | byte equality observed |
| mp_all.test | 10 | 0.001164s | 0.001175s | 0.001267s | byte equality observed |
| mp_all_2.test | 10 | 0.001215s | 0.001150s | 0.001260s | byte equality observed |
| mp_all_of.test | 10 | 0.001203s | 0.001123s | 0.001262s | byte equality observed |
| mp_all_of_q.test | 10 | 0.001224s | 0.001136s | 0.001247s | byte equality observed |
| mp_and.test | 10 | 0.001280s | 0.001139s | 0.001243s | byte equality observed |
| mp_any.test | 10 | 0.001243s | 0.001121s | 0.001256s | byte equality observed |
| mp_any_2.test | 10 | 0.001229s | 0.001134s | 0.001215s | byte equality observed |
| mp_any_of.test | 10 | 0.001240s | 0.001146s | 0.001254s | byte equality observed |
| mp_any_of_q.test | 10 | 0.001237s | 0.001135s | 0.001262s | byte equality observed |
| mp_append.test | 10 | 0.001240s | 0.001152s | 0.001202s | byte equality observed |
| mp_append_2.test | 10 | 0.001277s | 0.001155s | 0.001252s | byte equality observed |
| mp_append_3.test | 10 | 0.000572s | 0.000568s | 0.001193s | byte equality observed |
| mp_append_sf.test | 10 | 0.001215s | 0.001215s | 0.001254s | byte equality observed |
| mp_apply_q.test | 10 | 0.001204s | 0.001216s | 0.001196s | byte equality observed |
| mp_apply_q_sf.test | 10 | 0.001225s | 0.001284s | 0.001242s | byte equality observed |
| mp_assign.test | 10 | 0.001235s | 0.001253s | 0.001225s | byte equality observed |
| mp_assign_2.test | 10 | 0.000553s | 0.000554s | 0.001169s | byte equality observed |
| mp_at.test | 10 | 0.001242s | 0.001262s | 0.001185s | byte equality observed |
| mp_at_2.test | 10 | 0.000560s | 0.000567s | 0.001259s | byte equality observed |
| mp_at_sf.test | 10 | 0.001203s | 0.001231s | 0.001212s | byte equality observed |
| mp_back.test | 10 | 0.001195s | 0.001249s | 0.001209s | byte equality observed |
| mp_back_2.test | 10 | 0.000565s | 0.000570s | 0.001230s | byte equality observed |
| mp_bind.test | 10 | 0.001238s | 0.001265s | 0.001186s | byte equality observed |
| mp_bind_back.test | 10 | 0.001266s | 0.001271s | 0.001274s | byte equality observed |
| mp_bind_front.test | 10 | 0.001265s | 0.001257s | 0.001210s | byte equality observed |
| mp_bind_q.test | 10 | 0.001226s | 0.001222s | 0.001198s | byte equality observed |
| mp_clear.test | 10 | 0.001248s | 0.001265s | 0.001245s | byte equality observed |
| mp_clear_2.test | 10 | 0.000570s | 0.000560s | 0.001216s | byte equality observed |
| mp_compose.test | 10 | 0.001205s | 0.001231s | 0.001218s | byte equality observed |
| mp_cond.test | 10 | 0.001225s | 0.001279s | 0.001210s | byte equality observed |
| mp_cond_sf.test | 10 | 0.001197s | 0.001213s | 0.001277s | byte equality observed |
| mp_contains.test | 10 | 0.001230s | 0.001258s | 0.001255s | byte equality observed |
| mp_copy_if.test | 10 | 0.001231s | 0.001249s | 0.001202s | byte equality observed |
| mp_copy_if_q.test | 10 | 0.001250s | 0.001204s | 0.001271s | byte equality observed |
| mp_count.test | 10 | 0.001232s | 0.001193s | 0.001190s | byte equality observed |
| mp_count_if.test | 10 | 0.001211s | 0.001239s | 0.001199s | byte equality observed |
| mp_count_if_q.test | 10 | 0.001249s | 0.001244s | 0.001216s | byte equality observed |
| mp_defer.test | 10 | 0.001262s | 0.001223s | 0.001257s | byte equality observed |
| mp_drop.test | 10 | 0.001243s | 0.001253s | 0.001199s | byte equality observed |
| mp_drop_2.test | 10 | 0.000568s | 0.000573s | 0.001292s | byte equality observed |
| mp_empty.test | 10 | 0.001232s | 0.001272s | 0.001201s | byte equality observed |
| mp_empty_2.test | 10 | 0.000561s | 0.000570s | 0.001217s | byte equality observed |
| mp_erase.test | 10 | 0.001279s | 0.001248s | 0.001236s | byte equality observed |
| mp_erase_2.test | 10 | 0.000565s | 0.000564s | 0.001214s | byte equality observed |
| mp_eval_if.test | 10 | 0.001254s | 0.001221s | 0.001236s | byte equality observed |
| mp_eval_if_not.test | 10 | 0.001280s | 0.001234s | 0.001214s | byte equality observed |
| mp_eval_if_sf.test | 10 | 0.001246s | 0.001218s | 0.001245s | byte equality observed |
| mp_eval_or.test | 10 | 0.001241s | 0.001292s | 0.001263s | byte equality observed |
| mp_fill.test | 10 | 0.001294s | 0.001254s | 0.001232s | byte equality observed |
| mp_fill_2.test | 10 | 0.000557s | 0.000577s | 0.001197s | byte equality observed |
| mp_filter.test | 10 | 0.001205s | 0.001197s | 0.001217s | byte equality observed |
| mp_find.test | 10 | 0.001224s | 0.001237s | 0.001296s | byte equality observed |
| mp_find_if.test | 10 | 0.001236s | 0.001229s | 0.001219s | byte equality observed |
| mp_find_if_q.test | 10 | 0.001245s | 0.001268s | 0.001266s | byte equality observed |
| mp_flatten.test | 10 | 0.001231s | 0.001260s | 0.001233s | byte equality observed |
| mp_fold.test | 10 | 0.001262s | 0.001246s | 0.001219s | byte equality observed |
| mp_fold_q.test | 10 | 0.001255s | 0.001258s | 0.001259s | byte equality observed |
| mp_fold_q_sf.test | 10 | 0.001224s | 0.001243s | 0.001205s | byte equality observed |
| mp_for_each.test | 10 | 0.001246s | 0.001250s | 0.001212s | byte equality observed |
| mp_from_sequence.test | 10 | 0.001259s | 0.001228s | 0.001202s | byte equality observed |
| mp_from_sequence_2.test | 10 | 0.001232s | 0.001249s | 0.001213s | byte equality observed |
| mp_from_sequence_3.test | 10 | 0.001238s | 0.001250s | 0.001215s | byte equality observed |
| mp_front.test | 10 | 0.001241s | 0.001243s | 0.001212s | byte equality observed |
| mp_front_2.test | 10 | 0.000551s | 0.000563s | 0.001183s | byte equality observed |
| mp_identity.test | 10 | 0.001244s | 0.001223s | 0.001235s | byte equality observed |
| mp_if.test | 10 | 0.001211s | 0.001259s | 0.001287s | byte equality observed |
| mp_if_sf.test | 10 | 0.001252s | 0.001211s | 0.001255s | byte equality observed |
| mp_inherit.test | 10 | 0.001241s | 0.001218s | 0.001254s | byte equality observed |
| mp_insert.test | 10 | 0.001268s | 0.001298s | 0.001242s | byte equality observed |
| mp_insert_2.test | 10 | 0.000558s | 0.000557s | 0.001181s | byte equality observed |
| mp_intersperse.test | 10 | 0.001231s | 0.001305s | 0.001206s | byte equality observed |
| mp_invoke_q.test | 10 | 0.001246s | 0.001229s | 0.001256s | byte equality observed |
| mp_invoke_q_sf.test | 10 | 0.001227s | 0.001235s | 0.001273s | byte equality observed |
| mp_iota.test | 10 | 0.001205s | 0.001306s | 0.001259s | byte equality observed |
| mp_iota_2.test | 10 | 0.001238s | 0.001285s | 0.001218s | byte equality observed |
| mp_is_list.test | 10 | 0.001231s | 0.001242s | 0.001270s | byte equality observed |
| mp_is_map.test | 10 | 0.001213s | 0.001279s | 0.001211s | byte equality observed |
| mp_is_set.test | 10 | 0.001242s | 0.001245s | 0.001231s | byte equality observed |
| mp_is_value_list.test | 10 | 0.001240s | 0.001219s | 0.001281s | byte equality observed |
| mp_iterate.test | 10 | 0.001223s | 0.001238s | 0.001209s | byte equality observed |
| mp_join.test | 10 | 0.001258s | 0.001254s | 0.001228s | byte equality observed |
| mp_lambda.test | 10 | 0.001245s | 0.001256s | 0.001286s | byte equality observed |
| mp_less.test | 10 | 0.001232s | 0.001226s | 0.001192s | byte equality observed |
| mp_list_c.test | 10 | 0.001217s | 0.001266s | 0.001215s | byte equality observed |
| mp_list_v.test | 10 | 0.000569s | 0.000574s | 0.001195s | byte equality observed |
| mp_map_contains.test | 10 | 0.001261s | 0.001244s | 0.001197s | byte equality observed |
| mp_map_erase.test | 10 | 0.001215s | 0.001291s | 0.001225s | byte equality observed |
| mp_map_find.test | 10 | 0.001245s | 0.001265s | 0.001257s | byte equality observed |
| mp_map_find_2.test | 10 | 0.001228s | 0.001236s | 0.001199s | byte equality observed |
| mp_map_find_3.test | 10 | 0.001257s | 0.001197s | 0.001210s | byte equality observed |
| mp_map_find_4.test | 10 | 0.001255s | 0.001274s | 0.001213s | byte equality observed |
| mp_map_insert.test | 10 | 0.001240s | 0.001261s | 0.001236s | byte equality observed |
| mp_map_keys.test | 10 | 0.001224s | 0.001227s | 0.001318s | byte equality observed |
| mp_map_replace.test | 10 | 0.001271s | 0.001241s | 0.001223s | byte equality observed |
| mp_map_update.test | 10 | 0.001227s | 0.001239s | 0.001269s | byte equality observed |
| mp_map_update_q.test | 10 | 0.001278s | 0.001256s | 0.001213s | byte equality observed |
| mp_max.test | 10 | 0.001240s | 0.001206s | 0.001234s | byte equality observed |
| mp_max_element.test | 10 | 0.001239s | 0.001272s | 0.001252s | byte equality observed |
| mp_max_element_2.test | 10 | 0.000566s | 0.000562s | 0.001183s | byte equality observed |
| mp_max_element_q.test | 10 | 0.001237s | 0.001234s | 0.001224s | byte equality observed |
| mp_max_element_q_2.test | 10 | 0.000553s | 0.000564s | 0.001183s | byte equality observed |
| mp_min.test | 10 | 0.001231s | 0.001188s | 0.001191s | byte equality observed |
| mp_min_element.test | 10 | 0.001227s | 0.001229s | 0.001177s | byte equality observed |
| mp_min_element_2.test | 10 | 0.000567s | 0.000572s | 0.001183s | byte equality observed |
| mp_min_element_q.test | 10 | 0.001242s | 0.001271s | 0.001226s | byte equality observed |
| mp_min_element_q_2.test | 10 | 0.000567s | 0.000574s | 0.001186s | byte equality observed |
| mp_none_of.test | 10 | 0.001244s | 0.001241s | 0.001179s | byte equality observed |
| mp_none_of_q.test | 10 | 0.001216s | 0.001213s | 0.001252s | byte equality observed |
| mp_not_fn.test | 10 | 0.001246s | 0.001235s | 0.001243s | byte equality observed |
| mp_nth_element.test | 10 | 0.001266s | 0.001275s | 0.001260s | byte equality observed |
| mp_nth_element_q.test | 10 | 0.001212s | 0.001239s | 0.001273s | byte equality observed |
| mp_or.test | 10 | 0.001251s | 0.001241s | 0.001236s | byte equality observed |
| mp_pairwise_fold.test | 10 | 0.001237s | 0.001230s | 0.001239s | byte equality observed |
| mp_pairwise_fold_q.test | 10 | 0.001233s | 0.001182s | 0.001212s | byte equality observed |
| mp_partial_sum.test | 10 | 0.001233s | 0.001205s | 0.001228s | byte equality observed |
| mp_partition.test | 10 | 0.001246s | 0.001233s | 0.001247s | byte equality observed |
| mp_partition_q.test | 10 | 0.001238s | 0.001225s | 0.001248s | byte equality observed |
| mp_plus.test | 10 | 0.001250s | 0.001257s | 0.001190s | byte equality observed |
| mp_pop_back.test | 10 | 0.001278s | 0.001302s | 0.001234s | byte equality observed |
| mp_pop_back_2.test | 10 | 0.000562s | 0.000563s | 0.001251s | byte equality observed |
| mp_pop_front.test | 10 | 0.001250s | 0.001252s | 0.001195s | byte equality observed |
| mp_pop_front_2.test | 10 | 0.000565s | 0.000586s | 0.001284s | byte equality observed |
| mp_power_set.test | 10 | 0.001204s | 0.001244s | 0.001222s | byte equality observed |
| mp_product.test | 10 | 0.001234s | 0.001285s | 0.001310s | byte equality observed |
| mp_push_back.test | 10 | 0.001231s | 0.001249s | 0.001227s | byte equality observed |
| mp_push_back_2.test | 10 | 0.000563s | 0.000568s | 0.001233s | byte equality observed |
| mp_push_front.test | 10 | 0.001250s | 0.001259s | 0.001198s | byte equality observed |
| mp_push_front_2.test | 10 | 0.000559s | 0.000567s | 0.001192s | byte equality observed |
| mp_quote.test | 10 | 0.001247s | 0.001235s | 0.001231s | byte equality observed |
| mp_quote_trait.test | 10 | 0.001276s | 0.001284s | 0.001187s | byte equality observed |
| mp_remove.test | 10 | 0.001254s | 0.001252s | 0.001192s | byte equality observed |
| mp_remove_if.test | 10 | 0.001231s | 0.001259s | 0.001262s | byte equality observed |
| mp_remove_if_q.test | 10 | 0.001244s | 0.001267s | 0.001245s | byte equality observed |
| mp_rename.test | 10 | 0.001244s | 0.001311s | 0.001227s | byte equality observed |
| mp_rename_2.test | 10 | 0.000574s | 0.000572s | 0.001205s | byte equality observed |
| mp_rename_v.test | 10 | 0.000577s | 0.000549s | 0.001206s | byte equality observed |
| mp_repeat.test | 10 | 0.001265s | 0.001296s | 0.001188s | byte equality observed |
| mp_repeat_2.test | 10 | 0.000566s | 0.000574s | 0.001245s | byte equality observed |
| mp_repeat_3.test | 10 | 0.001215s | 0.001261s | 0.001220s | byte equality observed |
| mp_replace.test | 10 | 0.001244s | 0.001263s | 0.001211s | byte equality observed |
| mp_replace_at.test | 10 | 0.001232s | 0.001238s | 0.001221s | byte equality observed |
| mp_replace_at_c.test | 10 | 0.001237s | 0.001256s | 0.001251s | byte equality observed |
| mp_replace_front.test | 10 | 0.001273s | 0.001259s | 0.001239s | byte equality observed |
| mp_replace_front_2.test | 10 | 0.000565s | 0.000561s | 0.001193s | byte equality observed |
| mp_replace_if.test | 10 | 0.001225s | 0.001201s | 0.001213s | byte equality observed |
| mp_replace_if_q.test | 10 | 0.001261s | 0.001264s | 0.001235s | byte equality observed |
| mp_replace_second.test | 10 | 0.001280s | 0.001266s | 0.001250s | byte equality observed |
| mp_replace_second_2.test | 10 | 0.000566s | 0.000574s | 0.001206s | byte equality observed |
| mp_replace_third.test | 10 | 0.001258s | 0.001243s | 0.001193s | byte equality observed |
| mp_replace_third_2.test | 10 | 0.000566s | 0.000571s | 0.001235s | byte equality observed |
| mp_reverse.test | 10 | 0.001259s | 0.001244s | 0.001203s | byte equality observed |
| mp_reverse_fold.test | 10 | 0.001254s | 0.001220s | 0.001195s | byte equality observed |
| mp_reverse_fold_q.test | 10 | 0.001217s | 0.001202s | 0.001238s | byte equality observed |
| mp_rotate_left.test | 10 | 0.001258s | 0.001280s | 0.001221s | byte equality observed |
| mp_rotate_right.test | 10 | 0.001221s | 0.001279s | 0.001238s | byte equality observed |
| mp_same.test | 10 | 0.001242s | 0.001239s | 0.001260s | byte equality observed |
| mp_second.test | 10 | 0.001259s | 0.001251s | 0.001204s | byte equality observed |
| mp_second_2.test | 10 | 0.000560s | 0.000571s | 0.001204s | byte equality observed |
| mp_set_contains.test | 10 | 0.001210s | 0.001222s | 0.001224s | byte equality observed |
| mp_set_difference.test | 10 | 0.001273s | 0.001213s | 0.001249s | byte equality observed |
| mp_set_difference_sf.test | 10 | 0.001224s | 0.001223s | 0.001262s | byte equality observed |
| mp_set_intersection.test | 10 | 0.001225s | 0.001272s | 0.001266s | byte equality observed |
| mp_set_intersection_sf.test | 10 | 0.001250s | 0.001250s | 0.001228s | byte equality observed |
| mp_set_push_back.test | 10 | 0.001263s | 0.001250s | 0.001240s | byte equality observed |
| mp_set_push_front.test | 10 | 0.001263s | 0.001242s | 0.001216s | byte equality observed |
| mp_set_union.test | 10 | 0.001249s | 0.001222s | 0.001209s | byte equality observed |
| mp_set_union_sf.test | 10 | 0.001237s | 0.001268s | 0.001200s | byte equality observed |
| mp_similar.test | 10 | 0.001243s | 0.001264s | 0.001246s | byte equality observed |
| mp_size.test | 10 | 0.001272s | 0.001226s | 0.001211s | byte equality observed |
| mp_size_2.test | 10 | 0.000565s | 0.000564s | 0.001245s | byte equality observed |
| mp_slice.test | 10 | 0.001255s | 0.001262s | 0.001213s | byte equality observed |
| mp_slice_2.test | 10 | 0.000574s | 0.000571s | 0.001244s | byte equality observed |
| mp_sliding_fold.test | 10 | 0.001250s | 0.001242s | 0.001224s | byte equality observed |
| mp_sliding_fold_q.test | 10 | 0.001246s | 0.001230s | 0.001256s | byte equality observed |
| mp_sort.test | 10 | 0.001244s | 0.001235s | 0.001220s | byte equality observed |
| mp_sort_q.test | 10 | 0.001251s | 0.001257s | 0.001251s | byte equality observed |
| mp_split.test | 10 | 0.001265s | 0.001260s | 0.001240s | byte equality observed |
| mp_starts_with.test | 10 | 0.001296s | 0.001232s | 0.001244s | byte equality observed |
| mp_starts_with_sf.test | 10 | 0.001229s | 0.001207s | 0.001230s | byte equality observed |
| mp_take.test | 10 | 0.001254s | 0.001257s | 0.001281s | byte equality observed |
| mp_take_2.test | 10 | 0.000568s | 0.000570s | 0.001219s | byte equality observed |
| mp_third.test | 10 | 0.001269s | 0.001252s | 0.001240s | byte equality observed |
| mp_third_2.test | 10 | 0.000558s | 0.000554s | 0.001184s | byte equality observed |
| mp_transform.test | 10 | 0.001234s | 0.001206s | 0.001193s | byte equality observed |
| mp_transform_2.test | 10 | 0.001234s | 0.001236s | 0.001230s | byte equality observed |
| mp_transform_front.test | 10 | 0.001238s | 0.001265s | 0.001212s | byte equality observed |
| mp_transform_front_2.test | 10 | 0.000558s | 0.000559s | 0.001244s | byte equality observed |
| mp_transform_if.test | 10 | 0.001249s | 0.001203s | 0.001202s | byte equality observed |
| mp_transform_if_q.test | 10 | 0.001219s | 0.001210s | 0.001304s | byte equality observed |
| mp_transform_q.test | 10 | 0.001236s | 0.001265s | 0.001238s | byte equality observed |
| mp_transform_q_2.test | 10 | 0.001246s | 0.001229s | 0.001239s | byte equality observed |
| mp_transform_second.test | 10 | 0.001250s | 0.001257s | 0.001293s | byte equality observed |
| mp_transform_second_2.test | 10 | 0.000564s | 0.000573s | 0.001192s | byte equality observed |
| mp_transform_sf.test | 10 | 0.001217s | 0.001221s | 0.001238s | byte equality observed |
| mp_transform_third.test | 10 | 0.001263s | 0.001240s | 0.001217s | byte equality observed |
| mp_transform_third_2.test | 10 | 0.000574s | 0.000578s | 0.001179s | byte equality observed |
| mp_unique.test | 10 | 0.001227s | 0.001246s | 0.001217s | byte equality observed |
| mp_unique_if.test | 10 | 0.001232s | 0.001234s | 0.001236s | byte equality observed |
| mp_unique_if_q.test | 10 | 0.001256s | 0.001285s | 0.001254s | byte equality observed |
| mp_valid.test | 10 | 0.001226s | 0.001228s | 0.001202s | byte equality observed |
| mp_valid_and_true.test | 10 | 0.001261s | 0.001249s | 0.001210s | byte equality observed |
| mp_value.test | 10 | 0.000559s | 0.000576s | 0.001220s | byte equality observed |
| mp_with_index.test | 10 | 0.001664s | 0.001597s | 0.001530s | byte equality observed |
| mp_with_index_cx.test | 10 | 0.000550s | 0.000553s | 0.001219s | byte equality observed |
| mpl.test | 10 | 0.001244s | 0.001181s | 0.001268s | byte equality observed |
| mpl_list.test | 10 | 0.001245s | 0.001198s | 0.001236s | byte equality observed |
| mpl_tuple.test | 10 | 0.001253s | 0.001249s | 0.001281s | byte equality observed |
| mpl_version.test | 10 | 0.001229s | 0.001205s | 0.001229s | byte equality observed |
| set_version.test | 10 | 0.001262s | 0.001242s | 0.001243s | byte equality observed |
| tuple_apply.test | 10 | 0.001230s | 0.001239s | 0.001221s | byte equality observed |
| tuple_for_each.test | 10 | 0.001200s | 0.001246s | 0.001210s | byte equality observed |
| tuple_transform.test | 10 | 0.001226s | 0.001254s | 0.001220s | byte equality observed |
| tuple_transform_2.test | 10 | 0.001223s | 0.001318s | 0.001240s | byte equality observed |
| tuple_version.test | 10 | 0.001250s | 0.001231s | 0.001246s | byte equality observed |
| utility_version.test | 10 | 0.001233s | 0.001226s | 0.001282s | byte equality observed |
| version.test | 10 | 0.001246s | 0.001221s | 0.001274s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/43785224349).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
