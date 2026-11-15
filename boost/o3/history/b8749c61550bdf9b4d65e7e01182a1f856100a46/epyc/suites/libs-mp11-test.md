# libs/mp11/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| mp11.test | COMPILE | 0.049106 | 0.094794 | 0.164455 | — | — | — |
| complex_h.test | COMPILE | 0.204952 | 0.423848 | 0.770692 | — | — | — |
| mp_size.test | RUN | 0.233637 | 1.311866 | 0.942654 | 0.001910 | 0.001883 | 0.001896 |
| mp_size_2.test | RUN | 0.020220 | 0.045821 | 0.071078 | 0.000773 | 0.000937 | 0.001575 |
| mp_empty.test | RUN | 0.223805 | 0.833581 | 0.835740 | 0.001872 | 0.002072 | 0.002200 |
| mp_empty_2.test | RUN | 0.019527 | 0.050544 | 0.082001 | 0.000660 | 0.000878 | 0.001978 |
| mp_assign.test | RUN | 0.254273 | 1.669076 | 1.068156 | 0.001786 | 0.002096 | 0.001883 |
| mp_assign_2.test | RUN | 0.020374 | 0.048492 | 0.076766 | 0.000850 | 0.000946 | 0.001498 |
| mp_clear.test | RUN | 0.221194 | 0.745757 | 0.893182 | 0.001930 | 0.001986 | 0.001866 |
| mp_clear_2.test | RUN | 0.020656 | 0.048083 | 0.071475 | 0.000720 | 0.000770 | 0.001750 |
| mp_front.test | RUN | 0.235616 | 1.122950 | 0.981154 | 0.001782 | 0.002020 | 0.001988 |
| mp_front_2.test | RUN | 0.019683 | 0.047868 | 0.076856 | 0.000822 | 0.000782 | 0.001672 |
| mp_pop_front.test | RUN | 0.231883 | 1.243367 | 0.965207 | 0.001591 | 0.002128 | 0.001799 |
| mp_pop_front_2.test | RUN | 0.021514 | 0.048353 | 0.083635 | 0.000683 | 0.000873 | 0.001892 |
| mp_second.test | RUN | 0.230451 | 0.788228 | 0.919929 | 0.001727 | 0.002292 | 0.001759 |
| mp_second_2.test | RUN | 0.022473 | 0.048324 | 0.066838 | 0.000766 | 0.000923 | 0.002122 |
| mp_third.test | RUN | 0.218464 | 0.733423 | 0.850310 | 0.001842 | 0.002181 | 0.001770 |
| mp_third_2.test | RUN | 0.021121 | 0.046412 | 0.082778 | 0.000718 | 0.000822 | 0.002044 |
| mp_push_front.test | RUN | 0.293227 | 2.543788 | 1.536079 | 0.001915 | 0.001942 | 0.001928 |
| mp_push_front_2.test | RUN | 0.020278 | 0.048490 | 0.073669 | 0.000731 | 0.000866 | 0.001692 |
| mp_push_back.test | RUN | 0.286799 | 2.566504 | 1.511851 | 0.001876 | 0.002088 | 0.001942 |
| mp_push_back_2.test | RUN | 0.022294 | 0.051189 | 0.071117 | 0.000744 | 0.000939 | 0.002065 |
| mp_rename.test | RUN | 0.274326 | 2.345540 | 1.280061 | 0.001823 | 0.002290 | 0.001944 |
| mp_rename_2.test | RUN | 0.021288 | 0.051673 | 0.081496 | 0.000813 | 0.000838 | 0.002048 |
| mp_append.test | RUN | 0.290741 | 2.639851 | 1.372446 | 0.001929 | 0.002260 | 0.002002 |
| mp_append_2.test | RUN | 0.619237 | 5.870566 | 1.770146 | 0.001906 | 0.002166 | 0.002023 |
| mp_append_3.test | RUN | 0.019497 | 0.047948 | 0.078826 | 0.000822 | 0.000876 | 0.001961 |
| mp_append_sf.test | RUN | 0.227905 | 0.684821 | 0.869783 | 0.001809 | 0.002056 | 0.002076 |
| mp_replace_front.test | RUN | 0.260610 | 1.918890 | 1.174162 | 0.001910 | 0.002008 | 0.002020 |
| mp_replace_front_2.test | RUN | 0.021429 | 0.051523 | 0.079445 | 0.000717 | 0.000720 | 0.002031 |
| mp_replace_second.test | RUN | 0.256449 | 1.215316 | 1.120111 | 0.001728 | 0.001957 | 0.002094 |
| mp_replace_second_2.test | RUN | 0.020834 | 0.049510 | 0.079579 | 0.000684 | 0.000895 | 0.001893 |
| mp_replace_third.test | RUN | 0.248169 | 1.009477 | 0.979158 | 0.002061 | 0.001871 | 0.002128 |
| mp_replace_third_2.test | RUN | 0.019347 | 0.047730 | 0.082262 | 0.000772 | 0.000603 | 0.002068 |
| mp_apply_q.test | RUN | 0.277501 | 2.308680 | 1.304826 | 0.001887 | 0.002042 | 0.002190 |
| mp_apply_q_sf.test | RUN | 0.220105 | 0.693924 | 0.865262 | 0.001836 | 0.001890 | 0.002043 |
| mp_is_list.test | RUN | 0.221931 | 0.808875 | 0.834353 | 0.001924 | 0.001946 | 0.002045 |
| mp_list_c.test | RUN | 0.238554 | 0.984781 | 0.880023 | 0.001832 | 0.002058 | 0.002000 |
| mp_transform_front.test | RUN | 0.259508 | 1.899206 | 1.172285 | 0.001738 | 0.002260 | 0.001986 |
| mp_transform_front_2.test | RUN | 0.021646 | 0.048874 | 0.081966 | 0.000806 | 0.000649 | 0.001845 |
| mp_transform_second.test | RUN | 0.253005 | 1.602404 | 1.080187 | 0.001720 | 0.001771 | 0.001742 |
| mp_transform_second_2.test | RUN | 0.021731 | 0.045972 | 0.072455 | 0.000652 | 0.000859 | 0.001981 |
| mp_transform_third.test | RUN | 0.243874 | 1.235250 | 0.898949 | 0.001786 | 0.002186 | 0.002280 |
| mp_transform_third_2.test | RUN | 0.020989 | 0.048323 | 0.080898 | 0.000769 | 0.000836 | 0.002096 |
| mp_list_v.test | RUN | 0.021037 | 0.049246 | 0.084448 | 0.000721 | 0.000820 | 0.001600 |
| mp_rename_v.test | RUN | 0.021014 | 0.049163 | 0.065607 | 0.000701 | 0.000850 | 0.001680 |
| mp_is_value_list.test | RUN | 0.220126 | 0.515029 | 0.820147 | 0.001916 | 0.001830 | 0.001697 |
| mp_transform.test | RUN | 0.504513 | 3.951177 | 2.292651 | 0.001972 | 0.001944 | 0.001799 |
| mp_transform_2.test | RUN | 0.208832 | 0.507940 | 0.813788 | 0.001915 | 0.002070 | 0.001708 |
| mp_transform_q.test | RUN | 0.487243 | 3.751843 | 2.193813 | 0.001728 | 0.001936 | 0.002023 |
| mp_transform_q_2.test | RUN | 0.545333 | 1.251789 | 2.888819 | 0.001840 | 0.002017 | 0.001784 |
| mp_transform_sf.test | RUN | 0.244010 | 0.704724 | 0.915137 | 0.002002 | 0.001984 | 0.001678 |
| mp_transform_if.test | RUN | 0.280826 | 1.874061 | 1.299688 | 0.001900 | 0.001777 | 0.001558 |
| mp_transform_if_q.test | RUN | 0.280947 | 1.886152 | 1.285541 | 0.001778 | 0.001804 | 0.001762 |
| mp_filter.test | RUN | 0.252260 | 1.156171 | 1.035171 | 0.001946 | 0.002236 | 0.002008 |
| mp_fill.test | RUN | 0.236496 | 0.881160 | 0.979896 | 0.001868 | 0.002044 | 0.001906 |
| mp_fill_2.test | RUN | 0.038864 | 0.075614 | 0.118874 | 0.000695 | 0.000787 | 0.002108 |
| mp_count.test | RUN | 0.446181 | 1.989331 | 1.497954 | 0.001928 | 0.001966 | 0.002050 |
| mp_count_if.test | RUN | 0.476925 | 2.045796 | 1.679014 | 0.001901 | 0.002131 | 0.002036 |
| mp_count_if_q.test | RUN | 0.235227 | 1.379309 | 1.001216 | 0.001567 | 0.001960 | 0.001808 |
| mp_contains.test | RUN | 0.237470 | 0.845869 | 0.910785 | 0.001889 | 0.001932 | 0.001944 |
| mp_starts_with.test | RUN | 0.237241 | 0.828295 | 0.868004 | 0.001823 | 0.001776 | 0.001760 |
| mp_starts_with_sf.test | RUN | 0.233486 | 0.715480 | 0.914767 | 0.001754 | 0.001618 | 0.002166 |
| mp_repeat.test | RUN | 0.341723 | 3.347733 | 1.671119 | 0.001991 | 0.001778 | 0.001867 |
| mp_repeat_2.test | RUN | 0.038568 | 0.079991 | 0.128339 | 0.000739 | 0.000876 | 0.001634 |
| mp_repeat_3.test | RUN | 0.282049 | 0.453542 | 0.815731 | 0.001937 | 0.002115 | 0.002198 |
| mp_product.test | RUN | 0.272179 | 2.041411 | 1.240296 | 0.001575 | 0.001979 | 0.002113 |
| mp_drop.test | RUN | 0.287560 | 2.514924 | 1.279796 | 0.001642 | 0.001955 | 0.001967 |
| mp_drop_2.test | RUN | 0.034972 | 0.080561 | 0.141549 | 0.000683 | 0.000935 | 0.001702 |
| mp_iota.test | RUN | 0.280345 | 2.134306 | 1.202041 | 0.001889 | 0.002014 | 0.002192 |
| mp_iota_2.test | RUN | 0.298178 | 2.584308 | 1.315471 | 0.001855 | 0.002240 | 0.002108 |
| mp_at.test | RUN | 0.249584 | 1.153304 | 1.048624 | 0.001870 | 0.002118 | 0.001963 |
| mp_at_2.test | RUN | 0.036907 | 0.072862 | 0.144455 | 0.000848 | 0.000894 | 0.001730 |
| mp_at_sf.test | RUN | 0.234633 | 0.709789 | 0.855519 | 0.001902 | 0.001995 | 0.001870 |
| mp_take.test | RUN | 0.387170 | 3.323510 | 1.554494 | 0.001877 | 0.001922 | 0.002110 |
| mp_take_2.test | RUN | 0.037986 | 0.076098 | 0.140444 | 0.000885 | 0.000902 | 0.002020 |
| mp_slice.test | RUN | 0.442862 | 3.341944 | 2.025297 | 0.002090 | 0.002112 | 0.001680 |
| mp_slice_2.test | RUN | 0.038425 | 0.076878 | 0.142244 | 0.000832 | 0.000812 | 0.001984 |
| mp_replace.test | RUN | 0.280948 | 1.700461 | 1.339845 | 0.002090 | 0.002014 | 0.002015 |
| mp_replace_if.test | RUN | 0.273061 | 1.508221 | 1.223007 | 0.002077 | 0.002103 | 0.001902 |
| mp_replace_if_q.test | RUN | 0.272880 | 1.517413 | 1.233622 | 0.001858 | 0.002192 | 0.002189 |
| mp_copy_if.test | RUN | 0.275406 | 2.135382 | 1.189703 | 0.001900 | 0.002130 | 0.002010 |
| mp_copy_if_q.test | RUN | 0.279004 | 2.148401 | 1.190771 | 0.001990 | 0.001984 | 0.002151 |
| mp_remove.test | RUN | 0.272687 | 1.431177 | 1.175367 | 0.001950 | 0.002280 | 0.002036 |
| mp_remove_if.test | RUN | 0.291185 | 2.254005 | 1.240261 | 0.001898 | 0.002032 | 0.002092 |
| mp_remove_if_q.test | RUN | 0.295640 | 2.235207 | 1.234466 | 0.002442 | 0.002004 | 0.002056 |
| mp_partition.test | RUN | 0.292389 | 2.108168 | 1.340308 | 0.001908 | 0.001793 | 0.002082 |
| mp_partition_q.test | RUN | 0.289531 | 2.119468 | 1.326727 | 0.002012 | 0.002009 | 0.002163 |
| mp_sort.test | RUN | 0.274743 | 1.518519 | 1.190859 | 0.002063 | 0.002028 | 0.002067 |
| mp_sort_q.test | RUN | 0.273508 | 1.512465 | 1.188057 | 0.002033 | 0.001923 | 0.001864 |
| mp_find.test | RUN | 0.268005 | 1.624017 | 1.038415 | 0.001768 | 0.001863 | 0.001956 |
| mp_find_if.test | RUN | 0.252821 | 1.517067 | 0.992128 | 0.002122 | 0.001955 | 0.001924 |
| mp_find_if_q.test | RUN | 0.278295 | 1.710207 | 1.237101 | 0.001780 | 0.002248 | 0.002200 |
| mp_reverse.test | RUN | 0.552390 | 4.386177 | 2.208726 | 0.002068 | 0.002090 | 0.001802 |
| mp_fold.test | RUN | 0.917056 | 3.393512 | 5.372310 | 0.001968 | 0.002002 | 0.002100 |
| mp_fold_q.test | RUN | 0.258662 | 1.532187 | 1.108265 | 0.001783 | 0.001968 | 0.002070 |
| mp_fold_q_sf.test | RUN | 0.232630 | 0.716480 | 0.886384 | 0.001864 | 0.002139 | 0.001860 |
| mp_reverse_fold.test | RUN | 0.432134 | 3.263012 | 1.615805 | 0.001804 | 0.002208 | 0.001949 |
| mp_reverse_fold_q.test | RUN | 0.264461 | 1.836561 | 1.210070 | 0.001934 | 0.002068 | 0.002038 |
| mp_unique.test | RUN | 0.261174 | 1.663660 | 1.164718 | 0.001793 | 0.002174 | 0.001836 |
| mp_unique_if.test | RUN | 0.466064 | 3.370558 | 1.850118 | 0.001963 | 0.002290 | 0.001521 |
| mp_unique_if_q.test | RUN | 0.408008 | 3.370014 | 1.541377 | 0.001558 | 0.002012 | 0.001882 |
| mp_all_of.test | RUN | 0.632910 | 1.846871 | 1.938882 | 0.002172 | 0.002040 | 0.002048 |
| mp_all_of_q.test | RUN | 0.238236 | 0.842914 | 0.939172 | 0.001948 | 0.001647 | 0.001856 |
| mp_any_of.test | RUN | 0.620105 | 1.912587 | 1.974925 | 0.001846 | 0.002014 | 0.002033 |
| mp_any_of_q.test | RUN | 0.241087 | 0.840592 | 0.916344 | 0.002012 | 0.002003 | 0.001880 |
| mp_none_of.test | RUN | 0.582604 | 1.939519 | 2.010591 | 0.001649 | 0.002068 | 0.001754 |
| mp_none_of_q.test | RUN | 0.247734 | 0.861571 | 0.805754 | 0.001830 | 0.002174 | 0.001846 |
| mp_replace_at.test | RUN | 0.282739 | 1.676825 | 1.216163 | 0.002086 | 0.002090 | 0.001829 |
| mp_replace_at_c.test | RUN | 0.277688 | 1.622466 | 1.340033 | 0.001756 | 0.002036 | 0.002137 |
| mp_for_each.test | RUN | 0.268867 | 1.201333 | 1.501365 | 0.001820 | 0.002021 | 0.002084 |
| mp_insert.test | RUN | 0.425032 | 3.316050 | 1.835398 | 0.001850 | 0.001672 | 0.001975 |
| mp_insert_2.test | RUN | 0.038266 | 0.075239 | 0.145135 | 0.000682 | 0.000691 | 0.002037 |
| mp_erase.test | RUN | 0.459693 | 3.516714 | 2.108329 | 0.001928 | 0.002216 | 0.001959 |
| mp_erase_2.test | RUN | 0.036048 | 0.080666 | 0.140225 | 0.000701 | 0.000869 | 0.001996 |
| mp_with_index.test | RUN | 0.635820 | 7.221081 | 4.841714 | 0.002608 | 0.002397 | 0.002082 |
| mp_with_index_cx.test | RUN | 0.003909 | 0.022205 | 0.031472 | 0.000812 | 0.000862 | 0.001810 |
| mp_from_sequence.test | RUN | 0.281457 | 1.894981 | 1.326466 | 0.001826 | 0.002096 | 0.002063 |
| mp_from_sequence_2.test | RUN | 0.296031 | 2.209232 | 1.338921 | 0.001864 | 0.002011 | 0.002230 |
| mp_from_sequence_3.test | RUN | 0.242723 | 1.006084 | 0.983364 | 0.001777 | 0.001960 | 0.001778 |
| mp_min_element.test | RUN | 0.239219 | 0.920097 | 0.969815 | 0.001738 | 0.002258 | 0.002190 |
| mp_min_element_2.test | RUN | 0.037703 | 0.077704 | 0.141694 | 0.000753 | 0.000958 | 0.001920 |
| mp_min_element_q.test | RUN | 0.245807 | 0.908537 | 0.931816 | 0.001852 | 0.002032 | 0.001861 |
| mp_min_element_q_2.test | RUN | 0.038175 | 0.081691 | 0.145700 | 0.000751 | 0.000729 | 0.002086 |
| mp_max_element.test | RUN | 0.237530 | 0.903863 | 0.956044 | 0.001795 | 0.002230 | 0.001908 |
| mp_max_element_2.test | RUN | 0.035073 | 0.078621 | 0.135147 | 0.000689 | 0.000794 | 0.001816 |
| mp_max_element_q.test | RUN | 0.240838 | 0.925804 | 0.914856 | 0.001838 | 0.002244 | 0.001751 |
| mp_max_element_q_2.test | RUN | 0.037273 | 0.075662 | 0.143398 | 0.000758 | 0.000956 | 0.001994 |
| mp_nth_element.test | RUN | 0.271254 | 1.262134 | 1.164636 | 0.001842 | 0.001858 | 0.001724 |
| mp_nth_element_q.test | RUN | 0.258825 | 1.256643 | 1.169630 | 0.001610 | 0.002100 | 0.002046 |
| mp_back.test | RUN | 0.254917 | 1.091430 | 1.046316 | 0.001835 | 0.001982 | 0.001937 |
| mp_back_2.test | RUN | 0.038585 | 0.078287 | 0.141710 | 0.000680 | 0.000864 | 0.002051 |
| mp_pop_back.test | RUN | 0.676407 | 6.709934 | 2.095065 | 0.001931 | 0.001884 | 0.001931 |
| mp_pop_back_2.test | RUN | 0.038552 | 0.075107 | 0.126983 | 0.000861 | 0.000827 | 0.002155 |
| mp_flatten.test | RUN | 0.300439 | 2.397127 | 1.469710 | 0.001887 | 0.002052 | 0.002069 |
| mp_rotate_left.test | RUN | 0.304257 | 2.578179 | 1.469228 | 0.001748 | 0.001988 | 0.002282 |
| mp_rotate_right.test | RUN | 0.304538 | 2.602073 | 1.462560 | 0.001882 | 0.001799 | 0.001950 |
| mp_power_set.test | RUN | 0.296981 | 2.502821 | 1.469774 | 0.002020 | 0.002216 | 0.001858 |
| mp_partial_sum.test | RUN | 0.390753 | 3.315674 | 1.645085 | 0.001879 | 0.001885 | 0.001859 |
| mp_iterate.test | RUN | 0.264455 | 1.018950 | 1.174181 | 0.002076 | 0.002014 | 0.001652 |
| mp_pairwise_fold.test | RUN | 0.300818 | 2.299849 | 1.498935 | 0.001950 | 0.002264 | 0.001733 |
| mp_pairwise_fold_q.test | RUN | 0.230911 | 0.688135 | 0.919259 | 0.002025 | 0.001968 | 0.002020 |
| mp_sliding_fold.test | RUN | 0.562082 | 4.353842 | 2.725597 | 0.001810 | 0.002076 | 0.001870 |
| mp_sliding_fold_q.test | RUN | 0.564347 | 4.307775 | 2.683777 | 0.001958 | 0.001958 | 0.001930 |
| mp_intersperse.test | RUN | 0.278991 | 1.678352 | 1.339095 | 0.001880 | 0.002104 | 0.002046 |
| mp_split.test | RUN | 0.390181 | 3.133320 | 1.737383 | 0.002051 | 0.001972 | 0.002203 |
| mp_join.test | RUN | 0.307162 | 2.642438 | 1.580308 | 0.001932 | 0.001976 | 0.002068 |
| integral.test | RUN | 0.245262 | 1.198244 | 0.948709 | 0.001816 | 0.002063 | 0.002106 |
| mp_value.test | RUN | 0.015924 | 0.040858 | 0.064535 | 0.000819 | 0.000919 | 0.002012 |
| mp_identity.test | RUN | 0.233070 | 1.100828 | 0.934946 | 0.001944 | 0.001546 | 0.002012 |
| mp_inherit.test | RUN | 0.225878 | 0.793680 | 0.891782 | 0.001972 | 0.001959 | 0.002116 |
| mp_if.test | RUN | 0.227566 | 0.914549 | 0.897098 | 0.001817 | 0.001874 | 0.002080 |
| mp_if_sf.test | RUN | 0.218643 | 0.656849 | 0.827258 | 0.001720 | 0.002031 | 0.002286 |
| mp_eval_if.test | RUN | 0.237455 | 0.972827 | 0.904001 | 0.002020 | 0.001938 | 0.001788 |
| mp_eval_if_sf.test | RUN | 0.225043 | 0.696949 | 0.808572 | 0.001896 | 0.002120 | 0.002073 |
| mp_valid.test | RUN | 0.223742 | 0.711573 | 0.894602 | 0.001887 | 0.001806 | 0.002047 |
| mp_defer.test | RUN | 0.243718 | 1.151705 | 0.978956 | 0.002049 | 0.002158 | 0.002076 |
| mp_quote.test | RUN | 0.240394 | 1.166090 | 1.010980 | 0.001953 | 0.002098 | 0.002218 |
| mp_invoke_q.test | RUN | 0.258478 | 1.541622 | 1.179589 | 0.001726 | 0.002144 | 0.001822 |
| mp_invoke_q_sf.test | RUN | 0.220731 | 0.693376 | 0.842011 | 0.001784 | 0.001956 | 0.001768 |
| mp_quote_trait.test | RUN | 0.239991 | 1.265175 | 0.989841 | 0.001980 | 0.001600 | 0.002162 |
| mp_cond.test | RUN | 0.222676 | 0.780298 | 0.866849 | 0.001847 | 0.002005 | 0.002104 |
| mp_cond_sf.test | RUN | 0.218506 | 0.682701 | 0.862752 | 0.001744 | 0.002161 | 0.001785 |
| mp_not_fn.test | RUN | 0.216762 | 0.697779 | 0.854109 | 0.001715 | 0.002025 | 0.001677 |
| mp_eval_if_not.test | RUN | 0.232147 | 0.949831 | 0.924768 | 0.002018 | 0.002058 | 0.002140 |
| mp_eval_or.test | RUN | 0.228404 | 0.543796 | 0.895550 | 0.001764 | 0.001791 | 0.001972 |
| mp_compose.test | RUN | 0.245774 | 1.574963 | 1.079304 | 0.001837 | 0.001768 | 0.002052 |
| mp_valid_and_true.test | RUN | 0.220626 | 0.828249 | 0.852814 | 0.001626 | 0.002084 | 0.002115 |
| mp_compose_sf.test | COMPILE | 0.053368 | 0.101339 | 0.215532 | — | — | — |
| integer_sequence.test | RUN | 0.268775 | 1.536858 | 1.203361 | 0.001667 | 0.001927 | 0.001875 |
| tuple_for_each.test | RUN | 0.224083 | 0.595260 | 0.875472 | 0.001843 | 0.001786 | 0.002064 |
| tuple_for_each_cx.test | COMPILE | 0.044015 | 0.090527 | 0.160114 | — | — | — |
| tuple_apply.test | RUN | 0.232232 | 0.593039 | 0.894036 | 0.001918 | 0.002108 | 0.002199 |
| tuple_apply_cx.test | COMPILE | 0.064211 | 0.124723 | 0.230270 | — | — | — |
| construct_from_tuple.test | RUN | 0.227030 | 0.643410 | 0.929455 | 0.001948 | 0.002174 | 0.002013 |
| construct_from_tuple_cx.test | COMPILE | 0.063595 | 0.122941 | 0.221389 | — | — | — |
| tuple_transform.test | RUN | 0.377271 | 1.263628 | 1.749001 | 0.001794 | 0.001949 | 0.002111 |
| tuple_transform_2.test | RUN | 0.332748 | 0.954474 | 1.629997 | 0.001886 | 0.001721 | 0.001739 |
| tuple_transform_cx.test | COMPILE | 0.053532 | 0.117979 | 0.221451 | — | — | — |
| mp_set_contains.test | RUN | 0.235212 | 0.835517 | 0.938272 | 0.001892 | 0.001819 | 0.002027 |
| mp_set_push_back.test | RUN | 0.307232 | 2.510374 | 1.450194 | 0.002110 | 0.002166 | 0.002235 |
| mp_set_push_front.test | RUN | 0.384501 | 2.957580 | 1.650054 | 0.001764 | 0.002086 | 0.002177 |
| mp_is_set.test | RUN | 0.225638 | 0.816840 | 0.941366 | 0.001875 | 0.002032 | 0.001762 |
| mp_set_union.test | RUN | 0.292942 | 2.096427 | 1.386152 | 0.001848 | 0.002168 | 0.001800 |
| mp_set_union_sf.test | RUN | 0.214944 | 0.662888 | 0.872492 | 0.001707 | 0.001952 | 0.002102 |
| mp_set_difference.test | RUN | 0.276591 | 1.676759 | 1.205503 | 0.001872 | 0.001970 | 0.001700 |
| mp_set_difference_sf.test | RUN | 0.224102 | 0.694675 | 0.861248 | 0.001788 | 0.002054 | 0.002053 |
| mp_set_intersection.test | RUN | 0.266099 | 1.643871 | 1.177667 | 0.001936 | 0.001816 | 0.001999 |
| mp_set_intersection_sf.test | RUN | 0.230160 | 0.670186 | 0.838907 | 0.001810 | 0.001766 | 0.001675 |
| mp_all.test | RUN | 0.229592 | 0.812884 | 0.859179 | 0.001728 | 0.001784 | 0.001936 |
| mp_all_2.test | RUN | 0.602967 | 1.742809 | 1.954709 | 0.001864 | 0.002298 | 0.002104 |
| mp_and.test | RUN | 0.222159 | 0.814163 | 0.898130 | 0.001883 | 0.002131 | 0.001874 |
| mp_any.test | RUN | 0.227541 | 0.833671 | 0.905076 | 0.001738 | 0.002320 | 0.001908 |
| mp_any_2.test | RUN | 0.640290 | 1.768394 | 1.999052 | 0.001860 | 0.002570 | 0.001726 |
| mp_or.test | RUN | 0.251390 | 0.846588 | 0.912818 | 0.002694 | 0.002080 | 0.001898 |
| mp_same.test | RUN | 0.448128 | 1.379943 | 1.350257 | 0.001725 | 0.002054 | 0.002042 |
| mp_plus.test | RUN | 0.239777 | 0.967570 | 0.901552 | 0.001664 | 0.001847 | 0.001888 |
| mp_less.test | RUN | 0.229443 | 0.836628 | 0.806957 | 0.002038 | 0.001904 | 0.002000 |
| mp_min.test | RUN | 0.221193 | 0.745068 | 0.874122 | 0.001650 | 0.002232 | 0.002018 |
| mp_max.test | RUN | 0.230131 | 0.831406 | 0.889038 | 0.001957 | 0.001900 | 0.002059 |
| mp_similar.test | RUN | 0.228550 | 0.819392 | 0.901239 | 0.001597 | 0.001946 | 0.001794 |
| mp_map_find.test | RUN | 0.262012 | 1.495676 | 1.161347 | 0.001987 | 0.001968 | 0.002054 |
| mp_map_find_2.test | RUN | 0.240183 | 0.598137 | 0.956664 | 0.001868 | 0.001678 | 0.001976 |
| mp_map_find_3.test | RUN | 0.240104 | 0.590000 | 1.039373 | 0.001889 | 0.001759 | 0.001946 |
| mp_map_find_4.test | RUN | 0.232980 | 0.550743 | 0.926885 | 0.001844 | 0.001732 | 0.002024 |
| mp_map_contains.test | RUN | 0.238214 | 0.833511 | 0.868205 | 0.002124 | 0.002248 | 0.002038 |
| mp_map_insert.test | RUN | 0.306655 | 2.766351 | 1.570993 | 0.001616 | 0.002124 | 0.002090 |
| mp_map_replace.test | RUN | 0.405295 | 3.094849 | 1.823205 | 0.001850 | 0.002188 | 0.002123 |
| mp_map_erase.test | RUN | 0.299368 | 2.337414 | 1.507501 | 0.001960 | 0.002191 | 0.002166 |
| mp_map_update.test | RUN | 0.263146 | 1.527601 | 1.203951 | 0.002131 | 0.002074 | 0.001766 |
| mp_map_update_q.test | RUN | 0.267808 | 1.539430 | 1.213593 | 0.001372 | 0.002013 | 0.001553 |
| mp_map_keys.test | RUN | 0.260903 | 1.350251 | 1.156680 | 0.001910 | 0.002225 | 0.001813 |
| mp_is_map.test | RUN | 0.246669 | 0.846954 | 0.992125 | 0.001684 | 0.001998 | 0.001832 |
| mp_bind.test | RUN | 0.291377 | 2.430368 | 1.368649 | 0.002070 | 0.001755 | 0.002019 |
| mp_bind_q.test | RUN | 0.256542 | 1.523092 | 1.171013 | 0.001644 | 0.002041 | 0.001796 |
| mp_bind_front.test | RUN | 0.251753 | 1.653690 | 1.077720 | 0.001895 | 0.002062 | 0.002146 |
| mp_bind_back.test | RUN | 0.252934 | 1.668663 | 1.140772 | 0.002033 | 0.002042 | 0.001718 |
| mp_lambda.test | RUN | 0.569289 | 4.982693 | 2.740845 | 0.002126 | 0.001541 | 0.002125 |
| mpl.test | RUN | 0.508093 | 1.355608 | 2.198551 | 0.001786 | 0.002040 | 0.001862 |
| mpl_list.test | RUN | 0.283989 | 1.003053 | 1.109541 | 0.001968 | 0.002046 | 0.001990 |
| mpl_tuple.test | RUN | 0.297502 | 1.022148 | 1.112151 | 0.001715 | 0.001475 | 0.001818 |
| version.test | RUN | 0.152224 | 0.370229 | 0.580118 | 0.001846 | 0.002258 | 0.002020 |
| mp11_version.test | RUN | 0.189829 | 0.437126 | 0.680228 | 0.002084 | 0.002190 | 0.001712 |
| list_version.test | RUN | 0.147621 | 0.389867 | 0.585115 | 0.001860 | 0.002086 | 0.001986 |
| algorithm_version.test | RUN | 0.172575 | 0.405410 | 0.634303 | 0.001994 | 0.002146 | 0.001742 |
| integral_version.test | RUN | 0.148389 | 0.372144 | 0.573255 | 0.001732 | 0.001966 | 0.001855 |
| utility_version.test | RUN | 0.155517 | 0.383274 | 0.592817 | 0.001814 | 0.002095 | 0.001626 |
| function_version.test | RUN | 0.150842 | 0.383214 | 0.591699 | 0.001664 | 0.002302 | 0.001830 |
| map_version.test | RUN | 0.171591 | 0.411718 | 0.636251 | 0.001597 | 0.002216 | 0.001962 |
| set_version.test | RUN | 0.157961 | 0.394301 | 0.600675 | 0.001783 | 0.002069 | 0.001679 |
| bind_version.test | RUN | 0.168654 | 0.407615 | 0.640756 | 0.001731 | 0.002039 | 0.001689 |
| integer_sequence_version.test | RUN | 0.153534 | 0.377067 | 0.554240 | 0.001814 | 0.001549 | 0.001498 |
| tuple_version.test | RUN | 0.176422 | 0.411792 | 0.581777 | 0.001450 | 0.002180 | 0.001551 |
| mpl_version.test | RUN | 0.139407 | 0.304848 | 0.380461 | 0.001542 | 0.001521 | 0.001441 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.996× | 0.998×, 0.995× | 0.993× |
| clang | 1.086× | 1.095×, 1.078× | 1.001× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1360 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/43712369003).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| algorithm_version.test | 10 | 0.001163s | 0.001131s | 0.001138s | byte equality observed |
| bind_version.test | 10 | 0.001149s | 0.001138s | 0.001140s | byte equality observed |
| construct_from_tuple.test | 10 | 0.001160s | 0.001141s | 0.001157s | byte equality observed |
| function_version.test | 10 | 0.001155s | 0.001134s | 0.001185s | byte equality observed |
| integer_sequence.test | 10 | 0.001150s | 0.001147s | 0.001210s | byte equality observed |
| integer_sequence_version.test | 10 | 0.001156s | 0.001139s | 0.001259s | byte equality observed |
| integral.test | 10 | 0.001159s | 0.001162s | 0.001273s | byte equality observed |
| integral_version.test | 10 | 0.001162s | 0.001130s | 0.001299s | byte equality observed |
| list_version.test | 10 | 0.001157s | 0.001133s | 0.001235s | byte equality observed |
| map_version.test | 10 | 0.001146s | 0.001128s | 0.001244s | byte equality observed |
| mp11_version.test | 10 | 0.001182s | 0.001136s | 0.001274s | byte equality observed |
| mp_all.test | 10 | 0.001224s | 0.001150s | 0.001240s | byte equality observed |
| mp_all_2.test | 10 | 0.001223s | 0.001144s | 0.001244s | byte equality observed |
| mp_all_of.test | 10 | 0.001235s | 0.001137s | 0.001239s | byte equality observed |
| mp_all_of_q.test | 10 | 0.001231s | 0.001143s | 0.001268s | byte equality observed |
| mp_and.test | 10 | 0.001240s | 0.001172s | 0.001303s | byte equality observed |
| mp_any.test | 10 | 0.001229s | 0.001167s | 0.001223s | byte equality observed |
| mp_any_2.test | 10 | 0.001297s | 0.001167s | 0.001275s | byte equality observed |
| mp_any_of.test | 10 | 0.001246s | 0.001161s | 0.001228s | byte equality observed |
| mp_any_of_q.test | 10 | 0.001247s | 0.001159s | 0.001255s | byte equality observed |
| mp_append.test | 10 | 0.001264s | 0.001181s | 0.001190s | byte equality observed |
| mp_append_2.test | 10 | 0.001262s | 0.001188s | 0.001204s | byte equality observed |
| mp_append_3.test | 10 | 0.000580s | 0.000553s | 0.001197s | byte equality observed |
| mp_append_sf.test | 10 | 0.001267s | 0.001178s | 0.001228s | byte equality observed |
| mp_apply_q.test | 10 | 0.001251s | 0.001201s | 0.001296s | byte equality observed |
| mp_apply_q_sf.test | 10 | 0.001234s | 0.001208s | 0.001240s | byte equality observed |
| mp_assign.test | 10 | 0.001245s | 0.001295s | 0.001248s | byte equality observed |
| mp_assign_2.test | 10 | 0.000577s | 0.000578s | 0.001199s | byte equality observed |
| mp_at.test | 10 | 0.001263s | 0.001282s | 0.001223s | byte equality observed |
| mp_at_2.test | 10 | 0.000576s | 0.000554s | 0.001197s | byte equality observed |
| mp_at_sf.test | 10 | 0.001243s | 0.001265s | 0.001218s | byte equality observed |
| mp_back.test | 10 | 0.001255s | 0.001280s | 0.001275s | byte equality observed |
| mp_back_2.test | 10 | 0.000576s | 0.000578s | 0.001235s | byte equality observed |
| mp_bind.test | 10 | 0.001256s | 0.001241s | 0.001222s | byte equality observed |
| mp_bind_back.test | 10 | 0.001239s | 0.001247s | 0.001279s | byte equality observed |
| mp_bind_front.test | 10 | 0.001257s | 0.001261s | 0.001223s | byte equality observed |
| mp_bind_q.test | 10 | 0.001303s | 0.001213s | 0.001266s | byte equality observed |
| mp_clear.test | 10 | 0.001226s | 0.001244s | 0.001175s | byte equality observed |
| mp_clear_2.test | 10 | 0.000589s | 0.000585s | 0.001171s | byte equality observed |
| mp_compose.test | 10 | 0.001245s | 0.001247s | 0.001256s | byte equality observed |
| mp_cond.test | 10 | 0.001260s | 0.001252s | 0.001197s | byte equality observed |
| mp_cond_sf.test | 10 | 0.001253s | 0.001286s | 0.001228s | byte equality observed |
| mp_contains.test | 10 | 0.001250s | 0.001236s | 0.001235s | byte equality observed |
| mp_copy_if.test | 10 | 0.001264s | 0.001260s | 0.001246s | byte equality observed |
| mp_copy_if_q.test | 10 | 0.001262s | 0.001251s | 0.001279s | byte equality observed |
| mp_count.test | 10 | 0.001266s | 0.001270s | 0.001262s | byte equality observed |
| mp_count_if.test | 10 | 0.001256s | 0.001279s | 0.001229s | byte equality observed |
| mp_count_if_q.test | 10 | 0.001262s | 0.001227s | 0.001201s | byte equality observed |
| mp_defer.test | 10 | 0.001230s | 0.001254s | 0.001282s | byte equality observed |
| mp_drop.test | 10 | 0.001267s | 0.001263s | 0.001283s | byte equality observed |
| mp_drop_2.test | 10 | 0.000566s | 0.000579s | 0.001224s | byte equality observed |
| mp_empty.test | 10 | 0.001224s | 0.001246s | 0.001234s | byte equality observed |
| mp_empty_2.test | 10 | 0.000576s | 0.000568s | 0.001167s | byte equality observed |
| mp_erase.test | 10 | 0.001267s | 0.001319s | 0.001223s | byte equality observed |
| mp_erase_2.test | 10 | 0.000577s | 0.000557s | 0.001227s | byte equality observed |
| mp_eval_if.test | 10 | 0.001284s | 0.001257s | 0.001258s | byte equality observed |
| mp_eval_if_not.test | 10 | 0.001215s | 0.001260s | 0.001285s | byte equality observed |
| mp_eval_if_sf.test | 10 | 0.001238s | 0.001277s | 0.001256s | byte equality observed |
| mp_eval_or.test | 10 | 0.001249s | 0.001250s | 0.001281s | byte equality observed |
| mp_fill.test | 10 | 0.001262s | 0.001275s | 0.001261s | byte equality observed |
| mp_fill_2.test | 10 | 0.000568s | 0.000572s | 0.001251s | byte equality observed |
| mp_filter.test | 10 | 0.001218s | 0.001230s | 0.001219s | byte equality observed |
| mp_find.test | 10 | 0.001269s | 0.001269s | 0.001303s | byte equality observed |
| mp_find_if.test | 10 | 0.001211s | 0.001303s | 0.001255s | byte equality observed |
| mp_find_if_q.test | 10 | 0.001250s | 0.001248s | 0.001274s | byte equality observed |
| mp_flatten.test | 10 | 0.001219s | 0.001272s | 0.001237s | byte equality observed |
| mp_fold.test | 10 | 0.001332s | 0.001291s | 0.001192s | byte equality observed |
| mp_fold_q.test | 10 | 0.001231s | 0.001259s | 0.001254s | byte equality observed |
| mp_fold_q_sf.test | 10 | 0.001227s | 0.001244s | 0.001273s | byte equality observed |
| mp_for_each.test | 10 | 0.001232s | 0.001224s | 0.001237s | byte equality observed |
| mp_from_sequence.test | 10 | 0.001278s | 0.001256s | 0.001270s | byte equality observed |
| mp_from_sequence_2.test | 10 | 0.001274s | 0.001239s | 0.001307s | byte equality observed |
| mp_from_sequence_3.test | 10 | 0.001257s | 0.001204s | 0.001246s | byte equality observed |
| mp_front.test | 10 | 0.001267s | 0.001255s | 0.001200s | byte equality observed |
| mp_front_2.test | 10 | 0.000568s | 0.000552s | 0.001299s | byte equality observed |
| mp_identity.test | 10 | 0.001213s | 0.001232s | 0.001250s | byte equality observed |
| mp_if.test | 10 | 0.001225s | 0.001255s | 0.001281s | byte equality observed |
| mp_if_sf.test | 10 | 0.001238s | 0.001270s | 0.001266s | byte equality observed |
| mp_inherit.test | 10 | 0.001305s | 0.001292s | 0.001267s | byte equality observed |
| mp_insert.test | 10 | 0.001286s | 0.001279s | 0.001236s | byte equality observed |
| mp_insert_2.test | 10 | 0.000576s | 0.000580s | 0.001191s | byte equality observed |
| mp_intersperse.test | 10 | 0.001234s | 0.001229s | 0.001201s | byte equality observed |
| mp_invoke_q.test | 10 | 0.001253s | 0.001268s | 0.001176s | byte equality observed |
| mp_invoke_q_sf.test | 10 | 0.001249s | 0.001284s | 0.001253s | byte equality observed |
| mp_iota.test | 10 | 0.001262s | 0.001238s | 0.001273s | byte equality observed |
| mp_iota_2.test | 10 | 0.001242s | 0.001254s | 0.001264s | byte equality observed |
| mp_is_list.test | 10 | 0.001228s | 0.001236s | 0.001277s | byte equality observed |
| mp_is_map.test | 10 | 0.001234s | 0.001246s | 0.001226s | byte equality observed |
| mp_is_set.test | 10 | 0.001250s | 0.001294s | 0.001232s | byte equality observed |
| mp_is_value_list.test | 10 | 0.001243s | 0.001239s | 0.001271s | byte equality observed |
| mp_iterate.test | 10 | 0.001254s | 0.001215s | 0.001228s | byte equality observed |
| mp_join.test | 10 | 0.001263s | 0.001241s | 0.001258s | byte equality observed |
| mp_lambda.test | 10 | 0.001279s | 0.001342s | 0.001298s | byte equality observed |
| mp_less.test | 10 | 0.001247s | 0.001262s | 0.001277s | byte equality observed |
| mp_list_c.test | 10 | 0.001269s | 0.001222s | 0.001290s | byte equality observed |
| mp_list_v.test | 10 | 0.000579s | 0.000573s | 0.001218s | byte equality observed |
| mp_map_contains.test | 10 | 0.001246s | 0.001237s | 0.001259s | byte equality observed |
| mp_map_erase.test | 10 | 0.001259s | 0.001222s | 0.001261s | byte equality observed |
| mp_map_find.test | 10 | 0.001253s | 0.001278s | 0.001219s | byte equality observed |
| mp_map_find_2.test | 10 | 0.001262s | 0.001225s | 0.001224s | byte equality observed |
| mp_map_find_3.test | 10 | 0.001256s | 0.001233s | 0.001234s | byte equality observed |
| mp_map_find_4.test | 10 | 0.001275s | 0.001272s | 0.001208s | byte equality observed |
| mp_map_insert.test | 10 | 0.001262s | 0.001217s | 0.001247s | byte equality observed |
| mp_map_keys.test | 10 | 0.001240s | 0.001274s | 0.001215s | byte equality observed |
| mp_map_replace.test | 10 | 0.001275s | 0.001249s | 0.001228s | byte equality observed |
| mp_map_update.test | 10 | 0.001242s | 0.001212s | 0.001239s | byte equality observed |
| mp_map_update_q.test | 10 | 0.001239s | 0.001270s | 0.001265s | byte equality observed |
| mp_max.test | 10 | 0.001265s | 0.001246s | 0.001241s | byte equality observed |
| mp_max_element.test | 10 | 0.001271s | 0.001269s | 0.001274s | byte equality observed |
| mp_max_element_2.test | 10 | 0.000556s | 0.000556s | 0.001170s | byte equality observed |
| mp_max_element_q.test | 10 | 0.001258s | 0.001257s | 0.001217s | byte equality observed |
| mp_max_element_q_2.test | 10 | 0.000562s | 0.000561s | 0.001223s | byte equality observed |
| mp_min.test | 10 | 0.001221s | 0.001247s | 0.001254s | byte equality observed |
| mp_min_element.test | 10 | 0.001247s | 0.001238s | 0.001264s | byte equality observed |
| mp_min_element_2.test | 10 | 0.000572s | 0.000555s | 0.001212s | byte equality observed |
| mp_min_element_q.test | 10 | 0.001269s | 0.001289s | 0.001225s | byte equality observed |
| mp_min_element_q_2.test | 10 | 0.000576s | 0.000569s | 0.001228s | byte equality observed |
| mp_none_of.test | 10 | 0.001271s | 0.001280s | 0.001238s | byte equality observed |
| mp_none_of_q.test | 10 | 0.001210s | 0.001208s | 0.001315s | byte equality observed |
| mp_not_fn.test | 10 | 0.001265s | 0.001239s | 0.001244s | byte equality observed |
| mp_nth_element.test | 10 | 0.001287s | 0.001265s | 0.001189s | byte equality observed |
| mp_nth_element_q.test | 10 | 0.001239s | 0.001218s | 0.001273s | byte equality observed |
| mp_or.test | 10 | 0.001251s | 0.001300s | 0.001266s | byte equality observed |
| mp_pairwise_fold.test | 10 | 0.001261s | 0.001244s | 0.001290s | byte equality observed |
| mp_pairwise_fold_q.test | 10 | 0.001234s | 0.001251s | 0.001240s | byte equality observed |
| mp_partial_sum.test | 10 | 0.001268s | 0.001272s | 0.001232s | byte equality observed |
| mp_partition.test | 10 | 0.001271s | 0.001232s | 0.001254s | byte equality observed |
| mp_partition_q.test | 10 | 0.001277s | 0.001251s | 0.001278s | byte equality observed |
| mp_plus.test | 10 | 0.001246s | 0.001258s | 0.001281s | byte equality observed |
| mp_pop_back.test | 10 | 0.001302s | 0.001301s | 0.001238s | byte equality observed |
| mp_pop_back_2.test | 10 | 0.000573s | 0.000563s | 0.001213s | byte equality observed |
| mp_pop_front.test | 10 | 0.001256s | 0.001293s | 0.001197s | byte equality observed |
| mp_pop_front_2.test | 10 | 0.000567s | 0.000580s | 0.001216s | byte equality observed |
| mp_power_set.test | 10 | 0.001247s | 0.001228s | 0.001260s | byte equality observed |
| mp_product.test | 10 | 0.001224s | 0.001215s | 0.001273s | byte equality observed |
| mp_push_back.test | 10 | 0.001255s | 0.001268s | 0.001222s | byte equality observed |
| mp_push_back_2.test | 10 | 0.000588s | 0.000589s | 0.001196s | byte equality observed |
| mp_push_front.test | 10 | 0.001262s | 0.001297s | 0.001226s | byte equality observed |
| mp_push_front_2.test | 10 | 0.000554s | 0.000559s | 0.001200s | byte equality observed |
| mp_quote.test | 10 | 0.001250s | 0.001228s | 0.001250s | byte equality observed |
| mp_quote_trait.test | 10 | 0.001250s | 0.001259s | 0.001257s | byte equality observed |
| mp_remove.test | 10 | 0.001235s | 0.001208s | 0.001255s | byte equality observed |
| mp_remove_if.test | 10 | 0.001225s | 0.001253s | 0.001223s | byte equality observed |
| mp_remove_if_q.test | 10 | 0.001252s | 0.001289s | 0.001267s | byte equality observed |
| mp_rename.test | 10 | 0.001250s | 0.001239s | 0.001264s | byte equality observed |
| mp_rename_2.test | 10 | 0.000581s | 0.000608s | 0.001206s | byte equality observed |
| mp_rename_v.test | 10 | 0.000581s | 0.000603s | 0.001254s | byte equality observed |
| mp_repeat.test | 10 | 0.001291s | 0.001285s | 0.001217s | byte equality observed |
| mp_repeat_2.test | 10 | 0.000581s | 0.000590s | 0.001228s | byte equality observed |
| mp_repeat_3.test | 10 | 0.001250s | 0.001223s | 0.001272s | byte equality observed |
| mp_replace.test | 10 | 0.001269s | 0.001249s | 0.001230s | byte equality observed |
| mp_replace_at.test | 10 | 0.001268s | 0.001256s | 0.001248s | byte equality observed |
| mp_replace_at_c.test | 10 | 0.001237s | 0.001267s | 0.001255s | byte equality observed |
| mp_replace_front.test | 10 | 0.001298s | 0.001254s | 0.001207s | byte equality observed |
| mp_replace_front_2.test | 10 | 0.000570s | 0.000580s | 0.001253s | byte equality observed |
| mp_replace_if.test | 10 | 0.001226s | 0.001256s | 0.001200s | byte equality observed |
| mp_replace_if_q.test | 10 | 0.001222s | 0.001243s | 0.001221s | byte equality observed |
| mp_replace_second.test | 10 | 0.001275s | 0.001271s | 0.001229s | byte equality observed |
| mp_replace_second_2.test | 10 | 0.000580s | 0.000556s | 0.001254s | byte equality observed |
| mp_replace_third.test | 10 | 0.001276s | 0.001248s | 0.001220s | byte equality observed |
| mp_replace_third_2.test | 10 | 0.000564s | 0.000571s | 0.001207s | byte equality observed |
| mp_reverse.test | 10 | 0.001316s | 0.001265s | 0.001234s | byte equality observed |
| mp_reverse_fold.test | 10 | 0.001278s | 0.001289s | 0.001231s | byte equality observed |
| mp_reverse_fold_q.test | 10 | 0.001238s | 0.001241s | 0.001232s | byte equality observed |
| mp_rotate_left.test | 10 | 0.001316s | 0.001222s | 0.001194s | byte equality observed |
| mp_rotate_right.test | 10 | 0.001263s | 0.001267s | 0.001245s | byte equality observed |
| mp_same.test | 10 | 0.001272s | 0.001284s | 0.001241s | byte equality observed |
| mp_second.test | 10 | 0.001269s | 0.001237s | 0.001245s | byte equality observed |
| mp_second_2.test | 10 | 0.000580s | 0.000559s | 0.001290s | byte equality observed |
| mp_set_contains.test | 10 | 0.001261s | 0.001240s | 0.001239s | byte equality observed |
| mp_set_difference.test | 10 | 0.001274s | 0.001256s | 0.001276s | byte equality observed |
| mp_set_difference_sf.test | 10 | 0.001250s | 0.001222s | 0.001249s | byte equality observed |
| mp_set_intersection.test | 10 | 0.001239s | 0.001206s | 0.001242s | byte equality observed |
| mp_set_intersection_sf.test | 10 | 0.001240s | 0.001239s | 0.001237s | byte equality observed |
| mp_set_push_back.test | 10 | 0.001221s | 0.001230s | 0.001217s | byte equality observed |
| mp_set_push_front.test | 10 | 0.001259s | 0.001244s | 0.001235s | byte equality observed |
| mp_set_union.test | 10 | 0.001276s | 0.001240s | 0.001241s | byte equality observed |
| mp_set_union_sf.test | 10 | 0.001219s | 0.001282s | 0.001260s | byte equality observed |
| mp_similar.test | 10 | 0.001259s | 0.001266s | 0.001246s | byte equality observed |
| mp_size.test | 10 | 0.001251s | 0.001291s | 0.001263s | byte equality observed |
| mp_size_2.test | 10 | 0.000569s | 0.000586s | 0.001212s | byte equality observed |
| mp_slice.test | 10 | 0.001256s | 0.001292s | 0.001229s | byte equality observed |
| mp_slice_2.test | 10 | 0.000567s | 0.000563s | 0.001198s | byte equality observed |
| mp_sliding_fold.test | 10 | 0.001234s | 0.001278s | 0.001241s | byte equality observed |
| mp_sliding_fold_q.test | 10 | 0.001259s | 0.001267s | 0.001282s | byte equality observed |
| mp_sort.test | 10 | 0.001252s | 0.001260s | 0.001259s | byte equality observed |
| mp_sort_q.test | 10 | 0.001238s | 0.001254s | 0.001282s | byte equality observed |
| mp_split.test | 10 | 0.001263s | 0.001255s | 0.001251s | byte equality observed |
| mp_starts_with.test | 10 | 0.001249s | 0.001212s | 0.001289s | byte equality observed |
| mp_starts_with_sf.test | 10 | 0.001287s | 0.001273s | 0.001233s | byte equality observed |
| mp_take.test | 10 | 0.001281s | 0.001270s | 0.001240s | byte equality observed |
| mp_take_2.test | 10 | 0.000574s | 0.000561s | 0.001196s | byte equality observed |
| mp_third.test | 10 | 0.001270s | 0.001254s | 0.001215s | byte equality observed |
| mp_third_2.test | 10 | 0.000569s | 0.000588s | 0.001223s | byte equality observed |
| mp_transform.test | 10 | 0.001247s | 0.001268s | 0.001216s | byte equality observed |
| mp_transform_2.test | 10 | 0.001223s | 0.001193s | 0.001211s | byte equality observed |
| mp_transform_front.test | 10 | 0.001266s | 0.001268s | 0.001216s | byte equality observed |
| mp_transform_front_2.test | 10 | 0.000564s | 0.000564s | 0.001201s | byte equality observed |
| mp_transform_if.test | 10 | 0.001251s | 0.001229s | 0.001219s | byte equality observed |
| mp_transform_if_q.test | 10 | 0.001225s | 0.001236s | 0.001249s | byte equality observed |
| mp_transform_q.test | 10 | 0.001313s | 0.001258s | 0.001207s | byte equality observed |
| mp_transform_q_2.test | 10 | 0.001280s | 0.001255s | 0.001234s | byte equality observed |
| mp_transform_second.test | 10 | 0.001244s | 0.001266s | 0.001268s | byte equality observed |
| mp_transform_second_2.test | 10 | 0.000581s | 0.000585s | 0.001237s | byte equality observed |
| mp_transform_sf.test | 10 | 0.001203s | 0.001283s | 0.001217s | byte equality observed |
| mp_transform_third.test | 10 | 0.001231s | 0.001244s | 0.001267s | byte equality observed |
| mp_transform_third_2.test | 10 | 0.000578s | 0.000562s | 0.001255s | byte equality observed |
| mp_unique.test | 10 | 0.001253s | 0.001242s | 0.001235s | byte equality observed |
| mp_unique_if.test | 10 | 0.001246s | 0.001274s | 0.001212s | byte equality observed |
| mp_unique_if_q.test | 10 | 0.001246s | 0.001257s | 0.001236s | byte equality observed |
| mp_valid.test | 10 | 0.001233s | 0.001233s | 0.001248s | byte equality observed |
| mp_valid_and_true.test | 10 | 0.001261s | 0.001254s | 0.001242s | byte equality observed |
| mp_value.test | 10 | 0.000567s | 0.000551s | 0.001241s | byte equality observed |
| mp_with_index.test | 10 | 0.001644s | 0.001652s | 0.001522s | byte equality observed |
| mp_with_index_cx.test | 10 | 0.000562s | 0.000554s | 0.001209s | byte equality observed |
| mpl.test | 10 | 0.001264s | 0.001221s | 0.001241s | byte equality observed |
| mpl_list.test | 10 | 0.001268s | 0.001253s | 0.001257s | byte equality observed |
| mpl_tuple.test | 10 | 0.001259s | 0.001298s | 0.001327s | byte equality observed |
| mpl_version.test | 10 | 0.001236s | 0.001216s | 0.001234s | byte equality observed |
| set_version.test | 10 | 0.001254s | 0.001256s | 0.001233s | byte equality observed |
| tuple_apply.test | 10 | 0.001237s | 0.001251s | 0.001209s | byte equality observed |
| tuple_for_each.test | 10 | 0.001222s | 0.001288s | 0.001231s | byte equality observed |
| tuple_transform.test | 10 | 0.001230s | 0.001216s | 0.001280s | byte equality observed |
| tuple_transform_2.test | 10 | 0.001224s | 0.001251s | 0.001219s | byte equality observed |
| tuple_version.test | 10 | 0.001211s | 0.001214s | 0.001204s | byte equality observed |
| utility_version.test | 10 | 0.001226s | 0.001224s | 0.001227s | byte equality observed |
| version.test | 10 | 0.001216s | 0.001252s | 0.001235s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/43712369003).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
