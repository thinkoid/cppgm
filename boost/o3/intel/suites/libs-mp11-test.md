# libs/mp11/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| mp11.test | COMPILE | 0.025272 | 0.049527 | 0.072991 | — | — | — |
| complex_h.test | COMPILE | 0.101736 | 0.211726 | 0.269463 | — | — | — |
| mp_size.test | RUN | 0.120328 | 0.708898 | 0.370841 | 0.000907 | 0.000971 | 0.000967 |
| mp_size_2.test | RUN | 0.010408 | 0.024539 | 0.031710 | 0.000432 | 0.000406 | 0.000854 |
| mp_empty.test | RUN | 0.116434 | 0.436347 | 0.343960 | 0.000899 | 0.001023 | 0.000922 |
| mp_empty_2.test | RUN | 0.010758 | 0.025207 | 0.031608 | 0.000412 | 0.000650 | 0.000939 |
| mp_assign.test | RUN | 0.134315 | 0.941090 | 0.473341 | 0.000932 | 0.001092 | 0.000900 |
| mp_assign_2.test | RUN | 0.010490 | 0.024289 | 0.033996 | 0.000375 | 0.000423 | 0.000858 |
| mp_clear.test | RUN | 0.113638 | 0.394266 | 0.347580 | 0.000968 | 0.001107 | 0.000918 |
| mp_clear_2.test | RUN | 0.010088 | 0.024353 | 0.033782 | 0.000436 | 0.000407 | 0.000875 |
| mp_front.test | RUN | 0.123327 | 0.634748 | 0.399454 | 0.000944 | 0.000994 | 0.000868 |
| mp_front_2.test | RUN | 0.010342 | 0.024615 | 0.031530 | 0.000439 | 0.000428 | 0.000855 |
| mp_pop_front.test | RUN | 0.122070 | 0.667374 | 0.398162 | 0.000892 | 0.000955 | 0.000899 |
| mp_pop_front_2.test | RUN | 0.009965 | 0.024138 | 0.031273 | 0.000414 | 0.000374 | 0.000839 |
| mp_second.test | RUN | 0.117918 | 0.414610 | 0.376576 | 0.000908 | 0.001052 | 0.000932 |
| mp_second_2.test | RUN | 0.010368 | 0.023564 | 0.031955 | 0.000436 | 0.000363 | 0.000825 |
| mp_third.test | RUN | 0.115951 | 0.387719 | 0.356052 | 0.000898 | 0.001051 | 0.000944 |
| mp_third_2.test | RUN | 0.010600 | 0.024369 | 0.034408 | 0.000427 | 0.000564 | 0.000874 |
| mp_push_front.test | RUN | 0.161265 | 1.448839 | 0.678121 | 0.000948 | 0.000964 | 0.000872 |
| mp_push_front_2.test | RUN | 0.010325 | 0.024503 | 0.033547 | 0.000427 | 0.000425 | 0.000922 |
| mp_push_back.test | RUN | 0.160429 | 1.445743 | 0.684512 | 0.000965 | 0.000996 | 0.000914 |
| mp_push_back_2.test | RUN | 0.010483 | 0.024949 | 0.032939 | 0.000438 | 0.000407 | 0.000911 |
| mp_rename.test | RUN | 0.148660 | 1.328387 | 0.571890 | 0.000927 | 0.001078 | 0.001019 |
| mp_rename_2.test | RUN | 0.009772 | 0.024287 | 0.033179 | 0.000462 | 0.000421 | 0.000895 |
| mp_append.test | RUN | 0.153947 | 1.498796 | 0.627227 | 0.000859 | 0.000981 | 0.000991 |
| mp_append_2.test | RUN | 0.351711 | 3.391403 | 0.857388 | 0.000944 | 0.001050 | 0.000909 |
| mp_append_3.test | RUN | 0.009890 | 0.024428 | 0.035317 | 0.000452 | 0.000439 | 0.001262 |
| mp_append_sf.test | RUN | 0.109938 | 0.346994 | 0.327869 | 0.000957 | 0.000987 | 0.000902 |
| mp_replace_front.test | RUN | 0.138996 | 1.064705 | 0.501238 | 0.000963 | 0.001002 | 0.000853 |
| mp_replace_front_2.test | RUN | 0.010398 | 0.024201 | 0.032362 | 0.000428 | 0.000402 | 0.001159 |
| mp_replace_second.test | RUN | 0.135557 | 0.677303 | 0.464098 | 0.000969 | 0.000956 | 0.000942 |
| mp_replace_second_2.test | RUN | 0.010484 | 0.023993 | 0.032592 | 0.000415 | 0.000350 | 0.000994 |
| mp_replace_third.test | RUN | 0.128355 | 0.555794 | 0.419511 | 0.000945 | 0.001010 | 0.000923 |
| mp_replace_third_2.test | RUN | 0.010182 | 0.025274 | 0.033265 | 0.000429 | 0.000454 | 0.000895 |
| mp_apply_q.test | RUN | 0.146431 | 1.330155 | 0.559381 | 0.001117 | 0.000989 | 0.000864 |
| mp_apply_q_sf.test | RUN | 0.111316 | 0.361285 | 0.339733 | 0.001045 | 0.001067 | 0.000946 |
| mp_is_list.test | RUN | 0.116251 | 0.432001 | 0.351769 | 0.000944 | 0.001098 | 0.000918 |
| mp_list_c.test | RUN | 0.122741 | 0.537182 | 0.400076 | 0.000971 | 0.001021 | 0.000923 |
| mp_transform_front.test | RUN | 0.139674 | 1.081539 | 0.495385 | 0.000882 | 0.001028 | 0.000973 |
| mp_transform_front_2.test | RUN | 0.010308 | 0.025483 | 0.035262 | 0.000429 | 0.000427 | 0.000890 |
| mp_transform_second.test | RUN | 0.131244 | 0.914559 | 0.455213 | 0.000929 | 0.001027 | 0.000887 |
| mp_transform_second_2.test | RUN | 0.010648 | 0.024546 | 0.034926 | 0.000437 | 0.000443 | 0.000911 |
| mp_transform_third.test | RUN | 0.124277 | 0.694364 | 0.403989 | 0.000951 | 0.001034 | 0.000957 |
| mp_transform_third_2.test | RUN | 0.010341 | 0.025287 | 0.032655 | 0.000419 | 0.000436 | 0.000898 |
| mp_list_v.test | RUN | 0.010344 | 0.024332 | 0.033313 | 0.000373 | 0.000419 | 0.000870 |
| mp_rename_v.test | RUN | 0.010269 | 0.023722 | 0.033101 | 0.000440 | 0.000436 | 0.000870 |
| mp_is_value_list.test | RUN | 0.109363 | 0.260580 | 0.326311 | 0.000920 | 0.001060 | 0.001016 |
| mp_transform.test | RUN | 0.289100 | 2.257920 | 1.081199 | 0.000961 | 0.001770 | 0.000885 |
| mp_transform_2.test | RUN | 0.103849 | 0.231177 | 0.293425 | 0.000926 | 0.000976 | 0.000883 |
| mp_transform_q.test | RUN | 0.276429 | 2.149723 | 1.051650 | 0.001004 | 0.001059 | 0.000938 |
| mp_transform_q_2.test | RUN | 0.285250 | 0.650207 | 1.300778 | 0.000965 | 0.001093 | 0.000885 |
| mp_transform_sf.test | RUN | 0.117511 | 0.370168 | 0.347711 | 0.000980 | 0.001077 | 0.000964 |
| mp_transform_if.test | RUN | 0.165033 | 1.063942 | 0.548978 | 0.000956 | 0.001047 | 0.000831 |
| mp_transform_if_q.test | RUN | 0.150497 | 1.064799 | 0.556852 | 0.000901 | 0.001022 | 0.000925 |
| mp_filter.test | RUN | 0.129812 | 0.618485 | 0.401509 | 0.000958 | 0.001058 | 0.000873 |
| mp_fill.test | RUN | 0.123366 | 0.477895 | 0.394451 | 0.001002 | 0.001034 | 0.000906 |
| mp_fill_2.test | RUN | 0.018896 | 0.039048 | 0.055768 | 0.000460 | 0.000379 | 0.000919 |
| mp_count.test | RUN | 0.243045 | 1.103266 | 0.615188 | 0.000910 | 0.001152 | 0.000922 |
| mp_count_if.test | RUN | 0.251909 | 1.140528 | 0.666613 | 0.000917 | 0.001057 | 0.000849 |
| mp_count_if_q.test | RUN | 0.129809 | 0.751910 | 0.397588 | 0.000886 | 0.001105 | 0.001011 |
| mp_contains.test | RUN | 0.124663 | 0.444523 | 0.367104 | 0.000955 | 0.001069 | 0.000868 |
| mp_starts_with.test | RUN | 0.121657 | 0.447490 | 0.380264 | 0.000890 | 0.001000 | 0.000886 |
| mp_starts_with_sf.test | RUN | 0.120798 | 0.378589 | 0.345361 | 0.000858 | 0.001013 | 0.000892 |
| mp_repeat.test | RUN | 0.188407 | 1.937087 | 0.718036 | 0.000978 | 0.001174 | 0.000982 |
| mp_repeat_2.test | RUN | 0.018909 | 0.038082 | 0.055225 | 0.000442 | 0.000387 | 0.000877 |
| mp_repeat_3.test | RUN | 0.148778 | 0.246287 | 0.339276 | 0.000969 | 0.001026 | 0.000960 |
| mp_product.test | RUN | 0.142194 | 1.138947 | 0.523078 | 0.000957 | 0.001186 | 0.000897 |
| mp_drop.test | RUN | 0.157079 | 1.468954 | 0.597610 | 0.000922 | 0.001094 | 0.000832 |
| mp_drop_2.test | RUN | 0.017833 | 0.038577 | 0.054476 | 0.000426 | 0.000413 | 0.000948 |
| mp_iota.test | RUN | 0.152350 | 1.242078 | 0.520867 | 0.000967 | 0.001098 | 0.000856 |
| mp_iota_2.test | RUN | 0.161430 | 1.484097 | 0.613386 | 0.000927 | 0.000993 | 0.000963 |
| mp_at.test | RUN | 0.131135 | 0.629278 | 0.404342 | 0.000963 | 0.001049 | 0.000938 |
| mp_at_2.test | RUN | 0.018086 | 0.037583 | 0.054832 | 0.000433 | 0.000467 | 0.000898 |
| mp_at_sf.test | RUN | 0.119367 | 0.390970 | 0.348001 | 0.000896 | 0.001049 | 0.000856 |
| mp_take.test | RUN | 0.206987 | 1.928051 | 0.717099 | 0.000894 | 0.001087 | 0.001060 |
| mp_take_2.test | RUN | 0.017596 | 0.040104 | 0.055987 | 0.000420 | 0.000426 | 0.000929 |
| mp_slice.test | RUN | 0.248800 | 1.975525 | 0.925828 | 0.001009 | 0.001031 | 0.000914 |
| mp_slice_2.test | RUN | 0.018963 | 0.038236 | 0.053077 | 0.000417 | 0.000376 | 0.000895 |
| mp_replace.test | RUN | 0.150599 | 0.993564 | 0.578386 | 0.000934 | 0.001073 | 0.000962 |
| mp_replace_if.test | RUN | 0.143447 | 0.873929 | 0.526610 | 0.000921 | 0.001080 | 0.000908 |
| mp_replace_if_q.test | RUN | 0.143094 | 0.868194 | 0.524710 | 0.001001 | 0.000955 | 0.000862 |
| mp_copy_if.test | RUN | 0.145092 | 1.205232 | 0.512846 | 0.001224 | 0.000953 | 0.000923 |
| mp_copy_if_q.test | RUN | 0.147295 | 1.194115 | 0.499407 | 0.000969 | 0.001080 | 0.000952 |
| mp_remove.test | RUN | 0.141590 | 0.810591 | 0.523567 | 0.000971 | 0.000991 | 0.000951 |
| mp_remove_if.test | RUN | 0.153027 | 1.258318 | 0.529161 | 0.000938 | 0.001044 | 0.000917 |
| mp_remove_if_q.test | RUN | 0.153797 | 1.251635 | 0.543908 | 0.000928 | 0.000930 | 0.000930 |
| mp_partition.test | RUN | 0.149450 | 1.171990 | 0.575777 | 0.000880 | 0.001048 | 0.000861 |
| mp_partition_q.test | RUN | 0.150375 | 1.168269 | 0.591762 | 0.000950 | 0.001032 | 0.000895 |
| mp_sort.test | RUN | 0.144503 | 0.837666 | 0.500446 | 0.000943 | 0.001034 | 0.000929 |
| mp_sort_q.test | RUN | 0.141858 | 0.842149 | 0.502042 | 0.000894 | 0.001017 | 0.000883 |
| mp_find.test | RUN | 0.136226 | 0.917897 | 0.433172 | 0.000904 | 0.000953 | 0.000953 |
| mp_find_if.test | RUN | 0.130058 | 0.821910 | 0.403739 | 0.000874 | 0.000935 | 0.000957 |
| mp_find_if_q.test | RUN | 0.143667 | 0.917996 | 0.488975 | 0.000907 | 0.001027 | 0.000937 |
| mp_reverse.test | RUN | 0.310255 | 2.543374 | 1.023488 | 0.000987 | 0.001182 | 0.001095 |
| mp_fold.test | RUN | 0.539516 | 1.921258 | 2.641630 | 0.000985 | 0.001091 | 0.000927 |
| mp_fold_q.test | RUN | 0.135414 | 0.851828 | 0.472566 | 0.000993 | 0.001182 | 0.000843 |
| mp_fold_q_sf.test | RUN | 0.118572 | 0.377491 | 0.353500 | 0.000958 | 0.001075 | 0.000932 |
| mp_reverse_fold.test | RUN | 0.249875 | 1.891272 | 0.713033 | 0.001006 | 0.001037 | 0.000931 |
| mp_reverse_fold_q.test | RUN | 0.139710 | 1.036001 | 0.509833 | 0.001015 | 0.001024 | 0.000934 |
| mp_unique.test | RUN | 0.139141 | 0.935803 | 0.497702 | 0.000967 | 0.001065 | 0.000979 |
| mp_unique_if.test | RUN | 0.260547 | 1.959670 | 0.811740 | 0.000964 | 0.001066 | 0.000858 |
| mp_unique_if_q.test | RUN | 0.225384 | 1.907459 | 0.647036 | 0.000961 | 0.001017 | 0.000934 |
| mp_all_of.test | RUN | 0.328208 | 0.981812 | 0.819071 | 0.001014 | 0.001085 | 0.000917 |
| mp_all_of_q.test | RUN | 0.118442 | 0.444975 | 0.367569 | 0.000920 | 0.001054 | 0.000903 |
| mp_any_of.test | RUN | 0.328082 | 1.051908 | 0.842699 | 0.000925 | 0.000982 | 0.000888 |
| mp_any_of_q.test | RUN | 0.123036 | 0.457521 | 0.369480 | 0.000896 | 0.001100 | 0.000976 |
| mp_none_of.test | RUN | 0.327638 | 1.017679 | 0.829617 | 0.000958 | 0.001039 | 0.000911 |
| mp_none_of_q.test | RUN | 0.124495 | 0.451674 | 0.371671 | 0.000945 | 0.001084 | 0.000984 |
| mp_replace_at.test | RUN | 0.150053 | 0.946538 | 0.571933 | 0.000941 | 0.001046 | 0.000943 |
| mp_replace_at_c.test | RUN | 0.148283 | 0.943815 | 0.577950 | 0.000888 | 0.001028 | 0.000857 |
| mp_for_each.test | RUN | 0.136648 | 0.578862 | 0.546932 | 0.000912 | 0.000905 | 0.000843 |
| mp_insert.test | RUN | 0.231453 | 1.931933 | 0.839206 | 0.000955 | 0.001109 | 0.000902 |
| mp_insert_2.test | RUN | 0.018318 | 0.038121 | 0.056218 | 0.000402 | 0.000401 | 0.000943 |
| mp_erase.test | RUN | 0.255227 | 2.048645 | 0.971764 | 0.000940 | 0.001054 | 0.000896 |
| mp_erase_2.test | RUN | 0.018221 | 0.038989 | 0.056321 | 0.000433 | 0.000437 | 0.000949 |
| mp_with_index.test | RUN | 0.322390 | 3.976466 | 2.051383 | 0.001286 | 0.001422 | 0.001217 |
| mp_with_index_cx.test | RUN | 0.002351 | 0.011960 | 0.017896 | 0.000468 | 0.000371 | 0.001161 |
| mp_from_sequence.test | RUN | 0.146860 | 1.060451 | 0.530785 | 0.000930 | 0.001106 | 0.000927 |
| mp_from_sequence_2.test | RUN | 0.155217 | 1.248583 | 0.597248 | 0.001056 | 0.000966 | 0.000869 |
| mp_from_sequence_3.test | RUN | 0.128531 | 0.543741 | 0.410289 | 0.000951 | 0.000986 | 0.001214 |
| mp_min_element.test | RUN | 0.122836 | 0.487593 | 0.384521 | 0.000947 | 0.000968 | 0.001052 |
| mp_min_element_2.test | RUN | 0.017573 | 0.040068 | 0.054757 | 0.000428 | 0.000413 | 0.000914 |
| mp_min_element_q.test | RUN | 0.122171 | 0.487965 | 0.373520 | 0.000887 | 0.001075 | 0.000884 |
| mp_min_element_q_2.test | RUN | 0.018861 | 0.037297 | 0.055050 | 0.000416 | 0.000424 | 0.000919 |
| mp_max_element.test | RUN | 0.124612 | 0.486161 | 0.381844 | 0.000922 | 0.001040 | 0.000890 |
| mp_max_element_2.test | RUN | 0.018670 | 0.039507 | 0.054554 | 0.000439 | 0.000387 | 0.000938 |
| mp_max_element_q.test | RUN | 0.123786 | 0.490089 | 0.380383 | 0.000863 | 0.001091 | 0.000953 |
| mp_max_element_q_2.test | RUN | 0.018437 | 0.039070 | 0.054684 | 0.000651 | 0.000443 | 0.000931 |
| mp_nth_element.test | RUN | 0.136635 | 0.696543 | 0.468489 | 0.000941 | 0.001059 | 0.000889 |
| mp_nth_element_q.test | RUN | 0.136710 | 0.694065 | 0.458525 | 0.000930 | 0.000994 | 0.000954 |
| mp_back.test | RUN | 0.133748 | 0.587035 | 0.440970 | 0.000966 | 0.001084 | 0.000980 |
| mp_back_2.test | RUN | 0.017472 | 0.039259 | 0.055568 | 0.000429 | 0.000456 | 0.000946 |
| mp_pop_back.test | RUN | 0.390855 | 3.935422 | 0.985848 | 0.000892 | 0.001067 | 0.000876 |
| mp_pop_back_2.test | RUN | 0.017496 | 0.039263 | 0.051715 | 0.000406 | 0.000432 | 0.000890 |
| mp_flatten.test | RUN | 0.161030 | 1.372998 | 0.650482 | 0.001020 | 0.001079 | 0.000952 |
| mp_rotate_left.test | RUN | 0.161317 | 1.493282 | 0.625809 | 0.000934 | 0.001061 | 0.000954 |
| mp_rotate_right.test | RUN | 0.160740 | 1.484126 | 0.621732 | 0.001002 | 0.001078 | 0.000999 |
| mp_power_set.test | RUN | 0.160662 | 1.380022 | 0.643634 | 0.000967 | 0.001084 | 0.000849 |
| mp_partial_sum.test | RUN | 0.213788 | 1.895541 | 0.738481 | 0.000954 | 0.001224 | 0.000910 |
| mp_iterate.test | RUN | 0.141570 | 0.541296 | 0.499349 | 0.000942 | 0.001076 | 0.000951 |
| mp_pairwise_fold.test | RUN | 0.160130 | 1.304336 | 0.641683 | 0.000932 | 0.001080 | 0.000904 |
| mp_pairwise_fold_q.test | RUN | 0.117920 | 0.361796 | 0.358104 | 0.000955 | 0.001086 | 0.000874 |
| mp_sliding_fold.test | RUN | 0.313257 | 2.565114 | 1.235231 | 0.000948 | 0.001075 | 0.000892 |
| mp_sliding_fold_q.test | RUN | 0.314049 | 2.551016 | 1.237824 | 0.000948 | 0.001048 | 0.000940 |
| mp_intersperse.test | RUN | 0.149822 | 0.946213 | 0.571954 | 0.000897 | 0.000962 | 0.000941 |
| mp_split.test | RUN | 0.219606 | 1.797635 | 0.795891 | 0.000892 | 0.001056 | 0.000900 |
| mp_join.test | RUN | 0.170518 | 1.510516 | 0.702678 | 0.000940 | 0.001023 | 0.000885 |
| integral.test | RUN | 0.125885 | 0.671204 | 0.416348 | 0.000923 | 0.001066 | 0.000905 |
| mp_value.test | RUN | 0.008173 | 0.021876 | 0.028635 | 0.000377 | 0.000449 | 0.000910 |
| mp_identity.test | RUN | 0.118416 | 0.607103 | 0.386105 | 0.000941 | 0.001034 | 0.000946 |
| mp_inherit.test | RUN | 0.116556 | 0.424616 | 0.363690 | 0.000966 | 0.000991 | 0.000982 |
| mp_if.test | RUN | 0.114854 | 0.495729 | 0.356749 | 0.000986 | 0.000959 | 0.000942 |
| mp_if_sf.test | RUN | 0.109611 | 0.357509 | 0.322172 | 0.000965 | 0.001054 | 0.000967 |
| mp_eval_if.test | RUN | 0.117439 | 0.516606 | 0.370410 | 0.001016 | 0.001062 | 0.000883 |
| mp_eval_if_sf.test | RUN | 0.113381 | 0.362274 | 0.337051 | 0.000961 | 0.000994 | 0.000884 |
| mp_valid.test | RUN | 0.113232 | 0.372993 | 0.336462 | 0.000957 | 0.001078 | 0.000898 |
| mp_defer.test | RUN | 0.123899 | 0.622306 | 0.415427 | 0.000905 | 0.001079 | 0.000980 |
| mp_quote.test | RUN | 0.126408 | 0.645277 | 0.425574 | 0.000947 | 0.001006 | 0.000909 |
| mp_invoke_q.test | RUN | 0.135213 | 0.834443 | 0.472021 | 0.000903 | 0.001047 | 0.000936 |
| mp_invoke_q_sf.test | RUN | 0.110184 | 0.361356 | 0.324928 | 0.000903 | 0.001007 | 0.000925 |
| mp_quote_trait.test | RUN | 0.122220 | 0.704084 | 0.409532 | 0.000927 | 0.001023 | 0.000925 |
| mp_cond.test | RUN | 0.114441 | 0.414259 | 0.350261 | 0.000928 | 0.001037 | 0.000877 |
| mp_cond_sf.test | RUN | 0.112209 | 0.364038 | 0.324910 | 0.000928 | 0.000948 | 0.000915 |
| mp_not_fn.test | RUN | 0.109532 | 0.362220 | 0.331237 | 0.000946 | 0.000978 | 0.000855 |
| mp_eval_if_not.test | RUN | 0.117291 | 0.517571 | 0.374494 | 0.000930 | 0.000997 | 0.000919 |
| mp_eval_or.test | RUN | 0.110524 | 0.266961 | 0.335769 | 0.000957 | 0.000996 | 0.000891 |
| mp_compose.test | RUN | 0.128078 | 0.870696 | 0.450468 | 0.000913 | 0.001058 | 0.000920 |
| mp_valid_and_true.test | RUN | 0.111766 | 0.439347 | 0.346411 | 0.000900 | 0.001036 | 0.000828 |
| mp_compose_sf.test | COMPILE | 0.026353 | 0.049879 | 0.079648 | — | — | — |
| integer_sequence.test | RUN | 0.143210 | 0.864899 | 0.521077 | 0.000909 | 0.000970 | 0.000906 |
| tuple_for_each.test | RUN | 0.114245 | 0.299999 | 0.347622 | 0.000878 | 0.000978 | 0.000875 |
| tuple_for_each_cx.test | COMPILE | 0.020557 | 0.042829 | 0.062836 | — | — | — |
| tuple_apply.test | RUN | 0.113791 | 0.301840 | 0.356688 | 0.000933 | 0.001027 | 0.000943 |
| tuple_apply_cx.test | COMPILE | 0.030257 | 0.059362 | 0.082122 | — | — | — |
| construct_from_tuple.test | RUN | 0.114188 | 0.325616 | 0.354112 | 0.000887 | 0.001036 | 0.000987 |
| construct_from_tuple_cx.test | COMPILE | 0.031584 | 0.059362 | 0.081161 | — | — | — |
| tuple_transform.test | RUN | 0.181466 | 0.647846 | 0.686650 | 0.000948 | 0.001002 | 0.000906 |
| tuple_transform_2.test | RUN | 0.157323 | 0.458475 | 0.604217 | 0.000992 | 0.000988 | 0.000907 |
| tuple_transform_cx.test | COMPILE | 0.026901 | 0.058709 | 0.080251 | — | — | — |
| mp_set_contains.test | RUN | 0.117482 | 0.436644 | 0.364082 | 0.000865 | 0.001089 | 0.000913 |
| mp_set_push_back.test | RUN | 0.158462 | 1.394917 | 0.648738 | 0.000939 | 0.001020 | 0.000888 |
| mp_set_push_front.test | RUN | 0.207157 | 1.701844 | 0.740489 | 0.000997 | 0.001116 | 0.000934 |
| mp_is_set.test | RUN | 0.118372 | 0.446017 | 0.359931 | 0.000984 | 0.001049 | 0.000886 |
| mp_set_union.test | RUN | 0.155437 | 1.187175 | 0.606549 | 0.000945 | 0.000957 | 0.000906 |
| mp_set_union_sf.test | RUN | 0.111080 | 0.361681 | 0.324637 | 0.000963 | 0.001067 | 0.000884 |
| mp_set_difference.test | RUN | 0.138151 | 0.927892 | 0.518752 | 0.000935 | 0.001056 | 0.000868 |
| mp_set_difference_sf.test | RUN | 0.112073 | 0.352208 | 0.323640 | 0.000933 | 0.001038 | 0.000932 |
| mp_set_intersection.test | RUN | 0.136614 | 0.917991 | 0.506428 | 0.000891 | 0.000968 | 0.000924 |
| mp_set_intersection_sf.test | RUN | 0.112507 | 0.348093 | 0.331024 | 0.000904 | 0.000970 | 0.000938 |
| mp_all.test | RUN | 0.116533 | 0.440534 | 0.355055 | 0.000974 | 0.001084 | 0.000874 |
| mp_all_2.test | RUN | 0.335217 | 0.919637 | 0.825049 | 0.000936 | 0.001001 | 0.000855 |
| mp_and.test | RUN | 0.116703 | 0.439807 | 0.353438 | 0.000975 | 0.000979 | 0.001082 |
| mp_any.test | RUN | 0.120129 | 0.442910 | 0.368938 | 0.000877 | 0.000998 | 0.000915 |
| mp_any_2.test | RUN | 0.331438 | 0.916376 | 0.819590 | 0.000957 | 0.001035 | 0.000854 |
| mp_or.test | RUN | 0.119768 | 0.454824 | 0.367952 | 0.000987 | 0.001027 | 0.000967 |
| mp_same.test | RUN | 0.231272 | 0.726582 | 0.573655 | 0.000972 | 0.001009 | 0.000968 |
| mp_plus.test | RUN | 0.126039 | 0.535384 | 0.418908 | 0.000954 | 0.001011 | 0.000869 |
| mp_less.test | RUN | 0.119393 | 0.454191 | 0.357205 | 0.001044 | 0.000967 | 0.000921 |
| mp_min.test | RUN | 0.115159 | 0.404098 | 0.345593 | 0.000913 | 0.001024 | 0.000796 |
| mp_max.test | RUN | 0.118252 | 0.445992 | 0.362594 | 0.000994 | 0.001027 | 0.000824 |
| mp_similar.test | RUN | 0.117185 | 0.442787 | 0.352313 | 0.000876 | 0.001029 | 0.000931 |
| mp_map_find.test | RUN | 0.137204 | 0.823328 | 0.478340 | 0.000911 | 0.001130 | 0.000922 |
| mp_map_find_2.test | RUN | 0.127787 | 0.304131 | 0.405288 | 0.000902 | 0.000999 | 0.000892 |
| mp_map_find_3.test | RUN | 0.127340 | 0.307565 | 0.403524 | 0.000958 | 0.000902 | 0.000884 |
| mp_map_find_4.test | RUN | 0.120243 | 0.286550 | 0.366026 | 0.000905 | 0.001042 | 0.000845 |
| mp_map_contains.test | RUN | 0.122522 | 0.452231 | 0.364636 | 0.000884 | 0.001045 | 0.000872 |
| mp_map_insert.test | RUN | 0.167738 | 1.572245 | 0.696549 | 0.000933 | 0.000977 | 0.000968 |
| mp_map_replace.test | RUN | 0.223707 | 1.810075 | 0.824063 | 0.001027 | 0.000923 | 0.000940 |
| mp_map_erase.test | RUN | 0.162747 | 1.339716 | 0.672104 | 0.000950 | 0.001002 | 0.000960 |
| mp_map_update.test | RUN | 0.137290 | 0.840195 | 0.501638 | 0.001016 | 0.001084 | 0.000847 |
| mp_map_update_q.test | RUN | 0.141284 | 0.838564 | 0.500121 | 0.000910 | 0.001142 | 0.000920 |
| mp_map_keys.test | RUN | 0.138562 | 0.756611 | 0.488261 | 0.000896 | 0.000993 | 0.000919 |
| mp_is_map.test | RUN | 0.122415 | 0.455507 | 0.379252 | 0.000940 | 0.001187 | 0.000889 |
| mp_bind.test | RUN | 0.157035 | 1.404058 | 0.605934 | 0.000929 | 0.000940 | 0.000926 |
| mp_bind_q.test | RUN | 0.136599 | 0.874912 | 0.469281 | 0.000954 | 0.001003 | 0.000887 |
| mp_bind_front.test | RUN | 0.136075 | 0.915532 | 0.463908 | 0.000860 | 0.001047 | 0.000902 |
| mp_bind_back.test | RUN | 0.134513 | 0.927954 | 0.458687 | 0.000960 | 0.000982 | 0.000964 |
| mp_lambda.test | RUN | 0.327019 | 3.037862 | 1.285151 | 0.000917 | 0.001017 | 0.000913 |
| mpl.test | RUN | 0.282969 | 0.695424 | 0.985190 | 0.001022 | 0.000989 | 0.000864 |
| mpl_list.test | RUN | 0.153671 | 0.555276 | 0.446775 | 0.000919 | 0.001030 | 0.000914 |
| mpl_tuple.test | RUN | 0.153221 | 0.539251 | 0.440395 | 0.000918 | 0.000960 | 0.000918 |
| version.test | RUN | 0.073325 | 0.191268 | 0.228622 | 0.000943 | 0.000988 | 0.000888 |
| mp11_version.test | RUN | 0.091051 | 0.220532 | 0.262852 | 0.000944 | 0.001029 | 0.000890 |
| list_version.test | RUN | 0.076173 | 0.196918 | 0.226843 | 0.000934 | 0.001005 | 0.000933 |
| algorithm_version.test | RUN | 0.082801 | 0.208492 | 0.241540 | 0.001134 | 0.000896 | 0.000902 |
| integral_version.test | RUN | 0.073548 | 0.190402 | 0.220979 | 0.000960 | 0.000970 | 0.000935 |
| utility_version.test | RUN | 0.074669 | 0.192216 | 0.225336 | 0.000907 | 0.000956 | 0.000872 |
| function_version.test | RUN | 0.075511 | 0.193446 | 0.228412 | 0.000863 | 0.001018 | 0.001022 |
| map_version.test | RUN | 0.084425 | 0.205919 | 0.240487 | 0.000946 | 0.000912 | 0.000830 |
| set_version.test | RUN | 0.077126 | 0.194045 | 0.229600 | 0.000826 | 0.000952 | 0.000907 |
| bind_version.test | RUN | 0.084156 | 0.205163 | 0.241195 | 0.000904 | 0.000931 | 0.000925 |
| integer_sequence_version.test | RUN | 0.072758 | 0.187501 | 0.218948 | 0.000881 | 0.000951 | 0.000929 |
| tuple_version.test | RUN | 0.083369 | 0.204241 | 0.238730 | 0.000875 | 0.000915 | 0.000838 |
| mpl_version.test | RUN | 0.088378 | 0.212580 | 0.251677 | 0.000828 | 0.000866 | 0.000906 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 1.005× | 1.007×, 1.004× | 1.001× |
| clang | 1.089× | 1.089×, 1.090× | 1.001× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1365 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/43796354412).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| algorithm_version.test | 10 | 0.000891s | 0.000887s | 0.000885s | byte equality observed |
| bind_version.test | 10 | 0.000898s | 0.000876s | 0.000899s | byte equality observed |
| construct_from_tuple.test | 10 | 0.000907s | 0.000889s | 0.000911s | byte equality observed |
| function_version.test | 10 | 0.000905s | 0.000892s | 0.000897s | byte equality observed |
| integer_sequence.test | 10 | 0.000899s | 0.000885s | 0.000904s | byte equality observed |
| integer_sequence_version.test | 10 | 0.000900s | 0.000903s | 0.000901s | byte equality observed |
| integral.test | 10 | 0.000902s | 0.000897s | 0.000901s | byte equality observed |
| integral_version.test | 10 | 0.000899s | 0.000892s | 0.000890s | byte equality observed |
| list_version.test | 10 | 0.000901s | 0.000899s | 0.000905s | byte equality observed |
| map_version.test | 10 | 0.000903s | 0.000900s | 0.000892s | byte equality observed |
| mp11_version.test | 10 | 0.000894s | 0.000887s | 0.000896s | byte equality observed |
| mp_all.test | 10 | 0.000897s | 0.000900s | 0.000895s | byte equality observed |
| mp_all_2.test | 10 | 0.000895s | 0.000911s | 0.000884s | byte equality observed |
| mp_all_of.test | 10 | 0.000901s | 0.000907s | 0.000905s | byte equality observed |
| mp_all_of_q.test | 10 | 0.000899s | 0.000923s | 0.000901s | byte equality observed |
| mp_and.test | 10 | 0.000903s | 0.000919s | 0.000903s | byte equality observed |
| mp_any.test | 10 | 0.000893s | 0.000920s | 0.000888s | byte equality observed |
| mp_any_2.test | 10 | 0.000911s | 0.000908s | 0.000899s | byte equality observed |
| mp_any_of.test | 10 | 0.000896s | 0.000909s | 0.000894s | byte equality observed |
| mp_any_of_q.test | 10 | 0.000902s | 0.000912s | 0.000904s | byte equality observed |
| mp_append.test | 10 | 0.000895s | 0.000917s | 0.000899s | byte equality observed |
| mp_append_2.test | 10 | 0.000912s | 0.000917s | 0.000897s | byte equality observed |
| mp_append_3.test | 10 | 0.000417s | 0.000418s | 0.000869s | byte equality observed |
| mp_append_sf.test | 10 | 0.000899s | 0.000910s | 0.000887s | byte equality observed |
| mp_apply_q.test | 10 | 0.000903s | 0.000914s | 0.000901s | byte equality observed |
| mp_apply_q_sf.test | 10 | 0.000893s | 0.000909s | 0.000894s | byte equality observed |
| mp_assign.test | 10 | 0.000899s | 0.000914s | 0.000899s | byte equality observed |
| mp_assign_2.test | 10 | 0.000412s | 0.000417s | 0.000887s | byte equality observed |
| mp_at.test | 10 | 0.000889s | 0.000907s | 0.000890s | byte equality observed |
| mp_at_2.test | 10 | 0.000409s | 0.000403s | 0.000886s | byte equality observed |
| mp_at_sf.test | 10 | 0.000893s | 0.000904s | 0.000903s | byte equality observed |
| mp_back.test | 10 | 0.000900s | 0.000917s | 0.000896s | byte equality observed |
| mp_back_2.test | 10 | 0.000408s | 0.000404s | 0.000871s | byte equality observed |
| mp_bind.test | 10 | 0.000899s | 0.000906s | 0.000895s | byte equality observed |
| mp_bind_back.test | 10 | 0.000902s | 0.000917s | 0.000896s | byte equality observed |
| mp_bind_front.test | 10 | 0.000895s | 0.000908s | 0.000887s | byte equality observed |
| mp_bind_q.test | 10 | 0.000894s | 0.000918s | 0.000895s | byte equality observed |
| mp_clear.test | 10 | 0.000896s | 0.000916s | 0.000905s | byte equality observed |
| mp_clear_2.test | 10 | 0.000411s | 0.000410s | 0.000881s | byte equality observed |
| mp_compose.test | 10 | 0.000899s | 0.000909s | 0.000897s | byte equality observed |
| mp_cond.test | 10 | 0.000892s | 0.000915s | 0.000891s | byte equality observed |
| mp_cond_sf.test | 10 | 0.000902s | 0.000916s | 0.000893s | byte equality observed |
| mp_contains.test | 10 | 0.000906s | 0.000911s | 0.000899s | byte equality observed |
| mp_copy_if.test | 10 | 0.000900s | 0.000912s | 0.000898s | byte equality observed |
| mp_copy_if_q.test | 10 | 0.000897s | 0.000915s | 0.000900s | byte equality observed |
| mp_count.test | 10 | 0.000897s | 0.000922s | 0.000898s | byte equality observed |
| mp_count_if.test | 10 | 0.000897s | 0.000930s | 0.000893s | byte equality observed |
| mp_count_if_q.test | 10 | 0.000912s | 0.000906s | 0.000902s | byte equality observed |
| mp_defer.test | 10 | 0.000909s | 0.000912s | 0.000909s | byte equality observed |
| mp_drop.test | 10 | 0.000904s | 0.000904s | 0.000893s | byte equality observed |
| mp_drop_2.test | 10 | 0.000418s | 0.000413s | 0.000868s | byte equality observed |
| mp_empty.test | 10 | 0.000900s | 0.000899s | 0.000896s | byte equality observed |
| mp_empty_2.test | 10 | 0.000414s | 0.000417s | 0.000882s | byte equality observed |
| mp_erase.test | 10 | 0.000919s | 0.000916s | 0.000909s | byte equality observed |
| mp_erase_2.test | 10 | 0.000415s | 0.000414s | 0.000885s | byte equality observed |
| mp_eval_if.test | 10 | 0.000901s | 0.000920s | 0.000897s | byte equality observed |
| mp_eval_if_not.test | 10 | 0.000899s | 0.000909s | 0.000898s | byte equality observed |
| mp_eval_if_sf.test | 10 | 0.000903s | 0.000922s | 0.000904s | byte equality observed |
| mp_eval_or.test | 10 | 0.000907s | 0.000897s | 0.000910s | byte equality observed |
| mp_fill.test | 10 | 0.000910s | 0.000906s | 0.000915s | byte equality observed |
| mp_fill_2.test | 10 | 0.000413s | 0.000417s | 0.000891s | byte equality observed |
| mp_filter.test | 10 | 0.000902s | 0.000908s | 0.000908s | byte equality observed |
| mp_find.test | 10 | 0.000904s | 0.000909s | 0.000907s | byte equality observed |
| mp_find_if.test | 10 | 0.000910s | 0.000920s | 0.000897s | byte equality observed |
| mp_find_if_q.test | 10 | 0.000902s | 0.000914s | 0.000904s | byte equality observed |
| mp_flatten.test | 10 | 0.000911s | 0.000926s | 0.000909s | byte equality observed |
| mp_fold.test | 10 | 0.000933s | 0.000923s | 0.000906s | byte equality observed |
| mp_fold_q.test | 10 | 0.000900s | 0.000912s | 0.000902s | byte equality observed |
| mp_fold_q_sf.test | 10 | 0.000901s | 0.000924s | 0.000894s | byte equality observed |
| mp_for_each.test | 10 | 0.000912s | 0.000910s | 0.000905s | byte equality observed |
| mp_from_sequence.test | 10 | 0.000911s | 0.000920s | 0.000912s | byte equality observed |
| mp_from_sequence_2.test | 10 | 0.000906s | 0.000907s | 0.000904s | byte equality observed |
| mp_from_sequence_3.test | 10 | 0.000903s | 0.000916s | 0.000909s | byte equality observed |
| mp_front.test | 10 | 0.000904s | 0.000905s | 0.000905s | byte equality observed |
| mp_front_2.test | 10 | 0.000421s | 0.000418s | 0.000902s | byte equality observed |
| mp_identity.test | 10 | 0.000905s | 0.000909s | 0.000903s | byte equality observed |
| mp_if.test | 10 | 0.000907s | 0.000909s | 0.000908s | byte equality observed |
| mp_if_sf.test | 10 | 0.000894s | 0.000916s | 0.000903s | byte equality observed |
| mp_inherit.test | 10 | 0.000900s | 0.000922s | 0.000903s | byte equality observed |
| mp_insert.test | 10 | 0.000924s | 0.000914s | 0.000902s | byte equality observed |
| mp_insert_2.test | 10 | 0.000412s | 0.000412s | 0.000891s | byte equality observed |
| mp_intersperse.test | 10 | 0.000905s | 0.000919s | 0.000904s | byte equality observed |
| mp_invoke_q.test | 5 | 0.000907s | 0.000904s | 0.000906s | byte equality observed |
| mp_invoke_q_sf.test | 10 | 0.000907s | 0.000910s | 0.000907s | byte equality observed |
| mp_iota.test | 10 | 0.000904s | 0.000917s | 0.000911s | byte equality observed |
| mp_iota_2.test | 10 | 0.000907s | 0.000906s | 0.000913s | byte equality observed |
| mp_is_list.test | 10 | 0.000908s | 0.000910s | 0.000906s | byte equality observed |
| mp_is_map.test | 10 | 0.000910s | 0.000917s | 0.000913s | byte equality observed |
| mp_is_set.test | 10 | 0.000905s | 0.000920s | 0.000902s | byte equality observed |
| mp_is_value_list.test | 10 | 0.000908s | 0.000904s | 0.000912s | byte equality observed |
| mp_iterate.test | 10 | 0.000903s | 0.000912s | 0.000907s | byte equality observed |
| mp_join.test | 10 | 0.000902s | 0.000908s | 0.000900s | byte equality observed |
| mp_lambda.test | 10 | 0.000933s | 0.000921s | 0.000903s | byte equality observed |
| mp_less.test | 10 | 0.000905s | 0.000908s | 0.000914s | byte equality observed |
| mp_list_c.test | 10 | 0.000907s | 0.000903s | 0.000899s | byte equality observed |
| mp_list_v.test | 10 | 0.000418s | 0.000424s | 0.000886s | byte equality observed |
| mp_map_contains.test | 10 | 0.000909s | 0.000919s | 0.000911s | byte equality observed |
| mp_map_erase.test | 10 | 0.000899s | 0.000916s | 0.000913s | byte equality observed |
| mp_map_find.test | 10 | 0.000902s | 0.000918s | 0.000915s | byte equality observed |
| mp_map_find_2.test | 10 | 0.000902s | 0.000907s | 0.000900s | byte equality observed |
| mp_map_find_3.test | 10 | 0.000904s | 0.000903s | 0.000905s | byte equality observed |
| mp_map_find_4.test | 10 | 0.000909s | 0.000903s | 0.000915s | byte equality observed |
| mp_map_insert.test | 10 | 0.000905s | 0.000922s | 0.000908s | byte equality observed |
| mp_map_keys.test | 10 | 0.000900s | 0.000913s | 0.000915s | byte equality observed |
| mp_map_replace.test | 10 | 0.000932s | 0.000919s | 0.000910s | byte equality observed |
| mp_map_update.test | 10 | 0.000902s | 0.000896s | 0.000902s | byte equality observed |
| mp_map_update_q.test | 10 | 0.000901s | 0.000912s | 0.000906s | byte equality observed |
| mp_max.test | 10 | 0.000905s | 0.000899s | 0.000916s | byte equality observed |
| mp_max_element.test | 10 | 0.000901s | 0.000910s | 0.000904s | byte equality observed |
| mp_max_element_2.test | 10 | 0.000418s | 0.000413s | 0.000888s | byte equality observed |
| mp_max_element_q.test | 10 | 0.000901s | 0.000911s | 0.000907s | byte equality observed |
| mp_max_element_q_2.test | 10 | 0.000410s | 0.000413s | 0.000886s | byte equality observed |
| mp_min.test | 10 | 0.000899s | 0.000901s | 0.000901s | byte equality observed |
| mp_min_element.test | 10 | 0.000889s | 0.000895s | 0.000901s | byte equality observed |
| mp_min_element_2.test | 10 | 0.000412s | 0.000413s | 0.000907s | byte equality observed |
| mp_min_element_q.test | 10 | 0.000891s | 0.000915s | 0.000900s | byte equality observed |
| mp_min_element_q_2.test | 10 | 0.000414s | 0.000406s | 0.000891s | byte equality observed |
| mp_none_of.test | 10 | 0.000898s | 0.000906s | 0.000913s | byte equality observed |
| mp_none_of_q.test | 10 | 0.000899s | 0.000913s | 0.000900s | byte equality observed |
| mp_not_fn.test | 10 | 0.000898s | 0.000924s | 0.000905s | byte equality observed |
| mp_nth_element.test | 10 | 0.000904s | 0.000913s | 0.000909s | byte equality observed |
| mp_nth_element_q.test | 10 | 0.000909s | 0.000911s | 0.000912s | byte equality observed |
| mp_or.test | 10 | 0.000909s | 0.000923s | 0.000900s | byte equality observed |
| mp_pairwise_fold.test | 10 | 0.000911s | 0.000924s | 0.000909s | byte equality observed |
| mp_pairwise_fold_q.test | 10 | 0.000914s | 0.000916s | 0.000909s | byte equality observed |
| mp_partial_sum.test | 10 | 0.000929s | 0.000914s | 0.000906s | byte equality observed |
| mp_partition.test | 10 | 0.000908s | 0.000907s | 0.000895s | byte equality observed |
| mp_partition_q.test | 10 | 0.000905s | 0.000912s | 0.000905s | byte equality observed |
| mp_plus.test | 10 | 0.000902s | 0.000902s | 0.000903s | byte equality observed |
| mp_pop_back.test | 10 | 0.000920s | 0.000916s | 0.000907s | byte equality observed |
| mp_pop_back_2.test | 10 | 0.000414s | 0.000414s | 0.000884s | byte equality observed |
| mp_pop_front.test | 10 | 0.000900s | 0.000903s | 0.000901s | byte equality observed |
| mp_pop_front_2.test | 10 | 0.000412s | 0.000416s | 0.000895s | byte equality observed |
| mp_power_set.test | 10 | 0.000893s | 0.000907s | 0.000888s | byte equality observed |
| mp_product.test | 10 | 0.000903s | 0.000904s | 0.000894s | byte equality observed |
| mp_push_back.test | 10 | 0.000895s | 0.000919s | 0.000896s | byte equality observed |
| mp_push_back_2.test | 10 | 0.000410s | 0.000408s | 0.000892s | byte equality observed |
| mp_push_front.test | 10 | 0.000903s | 0.000916s | 0.000903s | byte equality observed |
| mp_push_front_2.test | 10 | 0.000414s | 0.000416s | 0.000899s | byte equality observed |
| mp_quote.test | 10 | 0.000894s | 0.000911s | 0.000896s | byte equality observed |
| mp_quote_trait.test | 10 | 0.000904s | 0.000910s | 0.000902s | byte equality observed |
| mp_remove.test | 10 | 0.000907s | 0.000903s | 0.000902s | byte equality observed |
| mp_remove_if.test | 10 | 0.000907s | 0.000906s | 0.000897s | byte equality observed |
| mp_remove_if_q.test | 10 | 0.000899s | 0.000923s | 0.000900s | byte equality observed |
| mp_rename.test | 10 | 0.000904s | 0.000904s | 0.000915s | byte equality observed |
| mp_rename_2.test | 10 | 0.000413s | 0.000410s | 0.000885s | byte equality observed |
| mp_rename_v.test | 10 | 0.000404s | 0.000406s | 0.000883s | byte equality observed |
| mp_repeat.test | 10 | 0.000912s | 0.000921s | 0.000900s | byte equality observed |
| mp_repeat_2.test | 10 | 0.000414s | 0.000415s | 0.000888s | byte equality observed |
| mp_repeat_3.test | 10 | 0.000897s | 0.000904s | 0.000898s | byte equality observed |
| mp_replace.test | 10 | 0.000897s | 0.000899s | 0.000902s | byte equality observed |
| mp_replace_at.test | 10 | 0.000903s | 0.000915s | 0.000897s | byte equality observed |
| mp_replace_at_c.test | 10 | 0.000896s | 0.000907s | 0.000904s | byte equality observed |
| mp_replace_front.test | 10 | 0.000896s | 0.000918s | 0.000896s | byte equality observed |
| mp_replace_front_2.test | 10 | 0.000415s | 0.000408s | 0.000897s | byte equality observed |
| mp_replace_if.test | 10 | 0.000892s | 0.000909s | 0.000896s | byte equality observed |
| mp_replace_if_q.test | 10 | 0.000894s | 0.000913s | 0.000905s | byte equality observed |
| mp_replace_second.test | 10 | 0.000903s | 0.000913s | 0.000909s | byte equality observed |
| mp_replace_second_2.test | 10 | 0.000413s | 0.000409s | 0.000877s | byte equality observed |
| mp_replace_third.test | 10 | 0.000908s | 0.000911s | 0.000902s | byte equality observed |
| mp_replace_third_2.test | 10 | 0.000410s | 0.000407s | 0.000881s | byte equality observed |
| mp_reverse.test | 10 | 0.000921s | 0.000918s | 0.000913s | byte equality observed |
| mp_reverse_fold.test | 10 | 0.000917s | 0.000925s | 0.000907s | byte equality observed |
| mp_reverse_fold_q.test | 10 | 0.000898s | 0.000907s | 0.000904s | byte equality observed |
| mp_rotate_left.test | 10 | 0.000907s | 0.000916s | 0.000911s | byte equality observed |
| mp_rotate_right.test | 10 | 0.000911s | 0.000923s | 0.000905s | byte equality observed |
| mp_same.test | 10 | 0.000899s | 0.000917s | 0.000904s | byte equality observed |
| mp_second.test | 10 | 0.000902s | 0.000899s | 0.000908s | byte equality observed |
| mp_second_2.test | 10 | 0.000418s | 0.000415s | 0.000896s | byte equality observed |
| mp_set_contains.test | 10 | 0.000902s | 0.000911s | 0.000902s | byte equality observed |
| mp_set_difference.test | 10 | 0.000901s | 0.000909s | 0.000904s | byte equality observed |
| mp_set_difference_sf.test | 10 | 0.000905s | 0.000913s | 0.000905s | byte equality observed |
| mp_set_intersection.test | 10 | 0.000913s | 0.000914s | 0.000900s | byte equality observed |
| mp_set_intersection_sf.test | 10 | 0.000904s | 0.000909s | 0.000896s | byte equality observed |
| mp_set_push_back.test | 10 | 0.000907s | 0.000917s | 0.000907s | byte equality observed |
| mp_set_push_front.test | 10 | 0.000921s | 0.000916s | 0.000905s | byte equality observed |
| mp_set_union.test | 10 | 0.000897s | 0.000913s | 0.000903s | byte equality observed |
| mp_set_union_sf.test | 10 | 0.000903s | 0.000906s | 0.000906s | byte equality observed |
| mp_similar.test | 10 | 0.000908s | 0.000913s | 0.000908s | byte equality observed |
| mp_size.test | 10 | 0.000900s | 0.000907s | 0.000902s | byte equality observed |
| mp_size_2.test | 10 | 0.000417s | 0.000413s | 0.000896s | byte equality observed |
| mp_slice.test | 10 | 0.000925s | 0.000915s | 0.000902s | byte equality observed |
| mp_slice_2.test | 10 | 0.000411s | 0.000401s | 0.000879s | byte equality observed |
| mp_sliding_fold.test | 10 | 0.000922s | 0.000912s | 0.000899s | byte equality observed |
| mp_sliding_fold_q.test | 10 | 0.000929s | 0.000920s | 0.000897s | byte equality observed |
| mp_sort.test | 10 | 0.000905s | 0.000919s | 0.000911s | byte equality observed |
| mp_sort_q.test | 10 | 0.000905s | 0.000913s | 0.000905s | byte equality observed |
| mp_split.test | 10 | 0.000918s | 0.000929s | 0.000918s | byte equality observed |
| mp_starts_with.test | 10 | 0.000904s | 0.000920s | 0.000898s | byte equality observed |
| mp_starts_with_sf.test | 10 | 0.000905s | 0.000906s | 0.000903s | byte equality observed |
| mp_take.test | 10 | 0.000912s | 0.000916s | 0.000909s | byte equality observed |
| mp_take_2.test | 10 | 0.000414s | 0.000403s | 0.000888s | byte equality observed |
| mp_third.test | 10 | 0.000890s | 0.000905s | 0.000908s | byte equality observed |
| mp_third_2.test | 10 | 0.000410s | 0.000406s | 0.000885s | byte equality observed |
| mp_transform.test | 10 | 0.000916s | 0.000912s | 0.000896s | byte equality observed |
| mp_transform_2.test | 10 | 0.000874s | 0.000891s | 0.000887s | byte equality observed |
| mp_transform_front.test | 10 | 0.000900s | 0.000910s | 0.000899s | byte equality observed |
| mp_transform_front_2.test | 10 | 0.000409s | 0.000415s | 0.000871s | byte equality observed |
| mp_transform_if.test | 10 | 0.000904s | 0.000906s | 0.000900s | byte equality observed |
| mp_transform_if_q.test | 10 | 0.000906s | 0.000912s | 0.000906s | byte equality observed |
| mp_transform_q.test | 10 | 0.000913s | 0.000914s | 0.000903s | byte equality observed |
| mp_transform_q_2.test | 10 | 0.000901s | 0.000909s | 0.000908s | byte equality observed |
| mp_transform_second.test | 10 | 0.000901s | 0.000910s | 0.000893s | byte equality observed |
| mp_transform_second_2.test | 10 | 0.000413s | 0.000409s | 0.000882s | byte equality observed |
| mp_transform_sf.test | 10 | 0.000904s | 0.000910s | 0.000901s | byte equality observed |
| mp_transform_third.test | 10 | 0.000898s | 0.000908s | 0.000896s | byte equality observed |
| mp_transform_third_2.test | 10 | 0.000414s | 0.000419s | 0.000883s | byte equality observed |
| mp_unique.test | 10 | 0.000901s | 0.000917s | 0.000897s | byte equality observed |
| mp_unique_if.test | 10 | 0.000925s | 0.000916s | 0.000900s | byte equality observed |
| mp_unique_if_q.test | 10 | 0.000916s | 0.000916s | 0.000906s | byte equality observed |
| mp_valid.test | 10 | 0.000910s | 0.000900s | 0.000907s | byte equality observed |
| mp_valid_and_true.test | 10 | 0.000895s | 0.000905s | 0.000902s | byte equality observed |
| mp_value.test | 10 | 0.000415s | 0.000417s | 0.000891s | byte equality observed |
| mp_with_index.test | 10 | 0.001256s | 0.001222s | 0.001173s | byte equality observed |
| mp_with_index_cx.test | 10 | 0.000413s | 0.000410s | 0.000893s | byte equality observed |
| mpl.test | 10 | 0.000924s | 0.000899s | 0.000908s | byte equality observed |
| mpl_list.test | 10 | 0.000905s | 0.000919s | 0.000905s | byte equality observed |
| mpl_tuple.test | 10 | 0.000906s | 0.000915s | 0.000906s | byte equality observed |
| mpl_version.test | 10 | 0.000906s | 0.000893s | 0.000899s | byte equality observed |
| set_version.test | 10 | 0.000904s | 0.000901s | 0.000906s | byte equality observed |
| tuple_apply.test | 10 | 0.000909s | 0.000905s | 0.000905s | byte equality observed |
| tuple_for_each.test | 10 | 0.000908s | 0.000918s | 0.000915s | byte equality observed |
| tuple_transform.test | 10 | 0.000905s | 0.000914s | 0.000899s | byte equality observed |
| tuple_transform_2.test | 10 | 0.000904s | 0.000911s | 0.000901s | byte equality observed |
| tuple_version.test | 10 | 0.000907s | 0.000902s | 0.000904s | byte equality observed |
| utility_version.test | 10 | 0.000907s | 0.000900s | 0.000895s | byte equality observed |
| version.test | 10 | 0.000905s | 0.000910s | 0.000908s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/43796354412).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
