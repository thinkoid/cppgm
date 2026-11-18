# libs/mp11/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| mp11.test | COMPILE | 0.047123 | 0.090541 | 0.143333 | — | — | — |
| complex_h.test | COMPILE | 0.192181 | 0.393307 | 0.642437 | — | — | — |
| mp_size.test | RUN | 0.220303 | 1.228178 | 0.798772 | 0.002097 | 0.001934 | 0.002133 |
| mp_size_2.test | RUN | 0.020820 | 0.044471 | 0.065025 | 0.000904 | 0.000947 | 0.001824 |
| mp_empty.test | RUN | 0.209574 | 0.778890 | 0.682788 | 0.001920 | 0.002212 | 0.001994 |
| mp_empty_2.test | RUN | 0.021415 | 0.048724 | 0.074598 | 0.000687 | 0.000921 | 0.002044 |
| mp_assign.test | RUN | 0.243345 | 1.563944 | 0.945821 | 0.001956 | 0.002167 | 0.002168 |
| mp_assign_2.test | RUN | 0.020499 | 0.048379 | 0.073111 | 0.000811 | 0.000954 | 0.001642 |
| mp_clear.test | RUN | 0.207686 | 0.689426 | 0.675932 | 0.001942 | 0.001950 | 0.001556 |
| mp_clear_2.test | RUN | 0.020471 | 0.047954 | 0.070071 | 0.000890 | 0.000701 | 0.001958 |
| mp_front.test | RUN | 0.229724 | 1.084999 | 0.823735 | 0.001977 | 0.002222 | 0.001922 |
| mp_front_2.test | RUN | 0.020347 | 0.046486 | 0.074242 | 0.000787 | 0.000909 | 0.001942 |
| mp_pop_front.test | RUN | 0.229664 | 1.140411 | 0.794146 | 0.002212 | 0.001936 | 0.002050 |
| mp_pop_front_2.test | RUN | 0.020519 | 0.048851 | 0.064718 | 0.000796 | 0.000843 | 0.001906 |
| mp_second.test | RUN | 0.219405 | 0.735031 | 0.719791 | 0.001980 | 0.001866 | 0.001682 |
| mp_second_2.test | RUN | 0.021523 | 0.047702 | 0.073129 | 0.000831 | 0.000981 | 0.002090 |
| mp_third.test | RUN | 0.221915 | 0.690261 | 0.741271 | 0.001977 | 0.001956 | 0.001856 |
| mp_third_2.test | RUN | 0.022059 | 0.046985 | 0.070746 | 0.000846 | 0.000836 | 0.001554 |
| mp_push_front.test | RUN | 0.287118 | 2.426436 | 1.223494 | 0.001898 | 0.002190 | 0.002197 |
| mp_push_front_2.test | RUN | 0.021547 | 0.048575 | 0.067953 | 0.000677 | 0.000865 | 0.002002 |
| mp_push_back.test | RUN | 0.283519 | 2.430417 | 1.309886 | 0.001824 | 0.001961 | 0.002122 |
| mp_push_back_2.test | RUN | 0.018613 | 0.045392 | 0.071393 | 0.000876 | 0.000877 | 0.002044 |
| mp_rename.test | RUN | 0.271036 | 2.217907 | 1.167055 | 0.002004 | 0.002079 | 0.002084 |
| mp_rename_2.test | RUN | 0.020796 | 0.048510 | 0.070572 | 0.000709 | 0.000962 | 0.002093 |
| mp_append.test | RUN | 0.274169 | 2.524980 | 1.154519 | 0.002048 | 0.002181 | 0.002030 |
| mp_append_2.test | RUN | 0.588390 | 5.586728 | 1.600952 | 0.001986 | 0.002134 | 0.001741 |
| mp_append_3.test | RUN | 0.020701 | 0.047294 | 0.073939 | 0.000899 | 0.001013 | 0.002157 |
| mp_append_sf.test | RUN | 0.205569 | 0.624052 | 0.729549 | 0.002063 | 0.002058 | 0.002113 |
| mp_replace_front.test | RUN | 0.254518 | 1.798690 | 0.962823 | 0.002052 | 0.002067 | 0.002020 |
| mp_replace_front_2.test | RUN | 0.020896 | 0.048016 | 0.075877 | 0.000754 | 0.000936 | 0.001981 |
| mp_replace_second.test | RUN | 0.243659 | 1.155759 | 0.946847 | 0.002196 | 0.002027 | 0.002194 |
| mp_replace_second_2.test | RUN | 0.019840 | 0.047797 | 0.067252 | 0.000718 | 0.000938 | 0.001575 |
| mp_replace_third.test | RUN | 0.232280 | 0.959328 | 0.859572 | 0.002018 | 0.002058 | 0.002132 |
| mp_replace_third_2.test | RUN | 0.020267 | 0.047821 | 0.069133 | 0.000800 | 0.000851 | 0.002127 |
| mp_apply_q.test | RUN | 0.267105 | 2.203097 | 1.117875 | 0.001826 | 0.001913 | 0.001976 |
| mp_apply_q_sf.test | RUN | 0.208995 | 0.662368 | 0.700924 | 0.001788 | 0.002224 | 0.002202 |
| mp_is_list.test | RUN | 0.212008 | 0.765463 | 0.702538 | 0.002199 | 0.002166 | 0.001998 |
| mp_list_c.test | RUN | 0.220343 | 0.924168 | 0.818958 | 0.001986 | 0.002146 | 0.001982 |
| mp_transform_front.test | RUN | 0.247985 | 1.821942 | 1.014066 | 0.001936 | 0.002184 | 0.001940 |
| mp_transform_front_2.test | RUN | 0.020686 | 0.045431 | 0.067536 | 0.000759 | 0.000955 | 0.001665 |
| mp_transform_second.test | RUN | 0.235474 | 1.549768 | 0.876164 | 0.001838 | 0.002232 | 0.001872 |
| mp_transform_second_2.test | RUN | 0.021424 | 0.045337 | 0.066034 | 0.000743 | 0.000871 | 0.002080 |
| mp_transform_third.test | RUN | 0.219468 | 1.197826 | 0.773150 | 0.001972 | 0.001870 | 0.002078 |
| mp_transform_third_2.test | RUN | 0.020614 | 0.048764 | 0.074807 | 0.000700 | 0.000833 | 0.001968 |
| mp_list_v.test | RUN | 0.020848 | 0.048882 | 0.069244 | 0.000725 | 0.000914 | 0.001769 |
| mp_rename_v.test | RUN | 0.019618 | 0.048117 | 0.075645 | 0.000712 | 0.000933 | 0.001870 |
| mp_is_value_list.test | RUN | 0.202593 | 0.482040 | 0.703976 | 0.001964 | 0.001958 | 0.001884 |
| mp_transform.test | RUN | 0.481472 | 3.858768 | 2.043317 | 0.001875 | 0.002201 | 0.001947 |
| mp_transform_2.test | RUN | 0.197721 | 0.466551 | 0.671260 | 0.001865 | 0.002193 | 0.001815 |
| mp_transform_q.test | RUN | 0.469866 | 3.665963 | 1.975405 | 0.001875 | 0.002114 | 0.002162 |
| mp_transform_q_2.test | RUN | 0.501361 | 1.171820 | 2.547140 | 0.001955 | 0.002252 | 0.001986 |
| mp_transform_sf.test | RUN | 0.227235 | 0.667043 | 0.780021 | 0.002094 | 0.002021 | 0.002372 |
| mp_transform_if.test | RUN | 0.267428 | 1.897123 | 1.097892 | 0.001926 | 0.001989 | 0.001998 |
| mp_transform_if_q.test | RUN | 0.268780 | 1.894895 | 1.123190 | 0.001784 | 0.001800 | 0.001566 |
| mp_filter.test | RUN | 0.243399 | 1.078170 | 0.867503 | 0.002026 | 0.002266 | 0.001996 |
| mp_fill.test | RUN | 0.230173 | 0.813634 | 0.785726 | 0.001937 | 0.002168 | 0.002205 |
| mp_fill_2.test | RUN | 0.036454 | 0.071801 | 0.127870 | 0.000755 | 0.000917 | 0.002080 |
| mp_count.test | RUN | 0.422560 | 1.935243 | 1.249584 | 0.002004 | 0.001901 | 0.001722 |
| mp_count_if.test | RUN | 0.427490 | 1.978942 | 1.386421 | 0.001882 | 0.001847 | 0.002076 |
| mp_count_if_q.test | RUN | 0.233189 | 1.268947 | 0.817064 | 0.001926 | 0.001876 | 0.002174 |
| mp_contains.test | RUN | 0.224129 | 0.782689 | 0.777085 | 0.001794 | 0.002210 | 0.002135 |
| mp_starts_with.test | RUN | 0.221358 | 0.802882 | 0.755121 | 0.001832 | 0.002136 | 0.001886 |
| mp_starts_with_sf.test | RUN | 0.215773 | 0.683845 | 0.758533 | 0.001907 | 0.001878 | 0.002156 |
| mp_repeat.test | RUN | 0.322369 | 3.184893 | 1.425353 | 0.002121 | 0.002033 | 0.001924 |
| mp_repeat_2.test | RUN | 0.035549 | 0.068719 | 0.127592 | 0.000776 | 0.000956 | 0.001742 |
| mp_repeat_3.test | RUN | 0.265435 | 0.454506 | 0.722147 | 0.002014 | 0.002180 | 0.001939 |
| mp_product.test | RUN | 0.248145 | 1.936393 | 1.026000 | 0.001816 | 0.002224 | 0.001751 |
| mp_drop.test | RUN | 0.275096 | 2.397952 | 1.156712 | 0.001671 | 0.002102 | 0.002200 |
| mp_drop_2.test | RUN | 0.036325 | 0.074444 | 0.120690 | 0.000777 | 0.000913 | 0.001838 |
| mp_iota.test | RUN | 0.264212 | 2.041101 | 1.013075 | 0.001878 | 0.002182 | 0.002150 |
| mp_iota_2.test | RUN | 0.279864 | 2.439078 | 1.226402 | 0.001687 | 0.002180 | 0.001930 |
| mp_at.test | RUN | 0.235413 | 1.069226 | 0.901753 | 0.001933 | 0.002145 | 0.002140 |
| mp_at_2.test | RUN | 0.037311 | 0.069210 | 0.124098 | 0.000719 | 0.000870 | 0.002055 |
| mp_at_sf.test | RUN | 0.215529 | 0.680336 | 0.693535 | 0.001857 | 0.002166 | 0.001476 |
| mp_take.test | RUN | 0.362989 | 3.138228 | 1.420989 | 0.002210 | 0.002060 | 0.002200 |
| mp_take_2.test | RUN | 0.035566 | 0.070999 | 0.125172 | 0.000843 | 0.000966 | 0.001710 |
| mp_slice.test | RUN | 0.418335 | 3.210065 | 1.806954 | 0.001988 | 0.002219 | 0.002260 |
| mp_slice_2.test | RUN | 0.036030 | 0.075524 | 0.114865 | 0.000801 | 0.000981 | 0.002114 |
| mp_replace.test | RUN | 0.273348 | 1.638203 | 1.140045 | 0.002077 | 0.002198 | 0.002145 |
| mp_replace_if.test | RUN | 0.259199 | 1.441484 | 1.065016 | 0.001948 | 0.002074 | 0.001944 |
| mp_replace_if_q.test | RUN | 0.262445 | 1.457580 | 1.067698 | 0.001795 | 0.002181 | 0.002142 |
| mp_copy_if.test | RUN | 0.261157 | 2.009520 | 0.966988 | 0.001875 | 0.002214 | 0.002214 |
| mp_copy_if_q.test | RUN | 0.259363 | 2.047457 | 1.060481 | 0.002068 | 0.002055 | 0.001842 |
| mp_remove.test | RUN | 0.256348 | 1.355156 | 1.071901 | 0.001887 | 0.002252 | 0.002126 |
| mp_remove_if.test | RUN | 0.267306 | 2.136042 | 1.072451 | 0.002085 | 0.002150 | 0.001954 |
| mp_remove_if_q.test | RUN | 0.273044 | 2.117053 | 1.127947 | 0.001836 | 0.002104 | 0.001900 |
| mp_partition.test | RUN | 0.270262 | 1.986633 | 1.124538 | 0.002018 | 0.001992 | 0.002153 |
| mp_partition_q.test | RUN | 0.275799 | 2.004164 | 1.153337 | 0.001949 | 0.002186 | 0.002162 |
| mp_sort.test | RUN | 0.263445 | 1.438845 | 1.021823 | 0.001718 | 0.002162 | 0.002054 |
| mp_sort_q.test | RUN | 0.246730 | 1.436933 | 0.958058 | 0.001759 | 0.002048 | 0.002066 |
| mp_find.test | RUN | 0.254979 | 1.536499 | 0.923243 | 0.002140 | 0.001938 | 0.002000 |
| mp_find_if.test | RUN | 0.244025 | 1.421981 | 0.880786 | 0.002092 | 0.002324 | 0.002116 |
| mp_find_if_q.test | RUN | 0.259844 | 1.618281 | 0.969305 | 0.002140 | 0.002307 | 0.002171 |
| mp_reverse.test | RUN | 0.523849 | 4.195353 | 1.927432 | 0.001967 | 0.002178 | 0.002122 |
| mp_fold.test | RUN | 0.873947 | 3.261049 | 4.823156 | 0.001878 | 0.002212 | 0.001947 |
| mp_fold_q.test | RUN | 0.247001 | 1.450856 | 0.988948 | 0.002054 | 0.002257 | 0.001910 |
| mp_fold_q_sf.test | RUN | 0.223993 | 0.695647 | 0.785817 | 0.002011 | 0.002165 | 0.002072 |
| mp_reverse_fold.test | RUN | 0.414763 | 3.108384 | 1.364937 | 0.001746 | 0.002234 | 0.001984 |
| mp_reverse_fold_q.test | RUN | 0.252982 | 1.727898 | 1.058493 | 0.002145 | 0.002097 | 0.002014 |
| mp_unique.test | RUN | 0.251957 | 1.558950 | 1.021953 | 0.002154 | 0.001956 | 0.001467 |
| mp_unique_if.test | RUN | 0.449333 | 3.211091 | 1.590413 | 0.002136 | 0.002232 | 0.002072 |
| mp_unique_if_q.test | RUN | 0.388913 | 3.188423 | 1.246645 | 0.001782 | 0.002230 | 0.002028 |
| mp_all_of.test | RUN | 0.585985 | 1.798873 | 1.683140 | 0.002062 | 0.002092 | 0.002040 |
| mp_all_of_q.test | RUN | 0.216100 | 0.782903 | 0.760262 | 0.002177 | 0.002152 | 0.002162 |
| mp_any_of.test | RUN | 0.603821 | 1.833452 | 1.656695 | 0.001918 | 0.002092 | 0.002062 |
| mp_any_of_q.test | RUN | 0.218119 | 0.775957 | 0.772817 | 0.002054 | 0.002038 | 0.002122 |
| mp_none_of.test | RUN | 0.579920 | 1.842288 | 1.639238 | 0.001859 | 0.002148 | 0.002047 |
| mp_none_of_q.test | RUN | 0.224260 | 0.767818 | 0.774889 | 0.002006 | 0.002104 | 0.002060 |
| mp_replace_at.test | RUN | 0.261747 | 1.591319 | 1.166550 | 0.002090 | 0.001871 | 0.001923 |
| mp_replace_at_c.test | RUN | 0.261792 | 1.604707 | 1.112574 | 0.001853 | 0.002019 | 0.002086 |
| mp_for_each.test | RUN | 0.258689 | 1.125316 | 1.284970 | 0.001684 | 0.001933 | 0.002166 |
| mp_insert.test | RUN | 0.396824 | 3.163078 | 1.626287 | 0.002016 | 0.001947 | 0.002152 |
| mp_insert_2.test | RUN | 0.036627 | 0.076012 | 0.122004 | 0.000826 | 0.000950 | 0.001939 |
| mp_erase.test | RUN | 0.430952 | 3.367120 | 1.819625 | 0.001918 | 0.002210 | 0.001939 |
| mp_erase_2.test | RUN | 0.034802 | 0.070831 | 0.125857 | 0.000782 | 0.000768 | 0.002133 |
| mp_with_index.test | RUN | 0.589225 | 6.893332 | 4.156257 | 0.002526 | 0.002682 | 0.002422 |
| mp_with_index_cx.test | RUN | 0.004270 | 0.023094 | 0.033182 | 0.000850 | 0.000947 | 0.001799 |
| mp_from_sequence.test | RUN | 0.259799 | 1.804818 | 1.140408 | 0.002036 | 0.002236 | 0.002096 |
| mp_from_sequence_2.test | RUN | 0.284394 | 2.125474 | 1.157179 | 0.001907 | 0.002210 | 0.001870 |
| mp_from_sequence_3.test | RUN | 0.234466 | 0.934739 | 0.861966 | 0.001810 | 0.002395 | 0.001824 |
| mp_min_element.test | RUN | 0.226038 | 0.852607 | 0.812387 | 0.001944 | 0.002412 | 0.002150 |
| mp_min_element_2.test | RUN | 0.036670 | 0.075373 | 0.122608 | 0.000789 | 0.000930 | 0.002132 |
| mp_min_element_q.test | RUN | 0.222651 | 0.845442 | 0.785297 | 0.001780 | 0.001941 | 0.002080 |
| mp_min_element_q_2.test | RUN | 0.035571 | 0.076238 | 0.108797 | 0.000854 | 0.000937 | 0.001864 |
| mp_max_element.test | RUN | 0.229097 | 0.861665 | 0.749780 | 0.001898 | 0.001906 | 0.002001 |
| mp_max_element_2.test | RUN | 0.036969 | 0.072694 | 0.121368 | 0.000671 | 0.000878 | 0.002069 |
| mp_max_element_q.test | RUN | 0.219983 | 0.858180 | 0.786669 | 0.001690 | 0.002307 | 0.002164 |
| mp_max_element_q_2.test | RUN | 0.035325 | 0.071781 | 0.115291 | 0.000796 | 0.000924 | 0.001682 |
| mp_nth_element.test | RUN | 0.248065 | 1.200414 | 0.911969 | 0.001967 | 0.002194 | 0.002065 |
| mp_nth_element_q.test | RUN | 0.251574 | 1.203693 | 0.960436 | 0.001608 | 0.002146 | 0.001759 |
| mp_back.test | RUN | 0.245469 | 1.001088 | 0.928228 | 0.001714 | 0.002176 | 0.001804 |
| mp_back_2.test | RUN | 0.034688 | 0.070811 | 0.124962 | 0.000770 | 0.000968 | 0.002047 |
| mp_pop_back.test | RUN | 0.651867 | 6.451469 | 1.833839 | 0.001726 | 0.002220 | 0.001908 |
| mp_pop_back_2.test | RUN | 0.035300 | 0.074721 | 0.104026 | 0.000922 | 0.000803 | 0.001723 |
| mp_flatten.test | RUN | 0.285744 | 2.294430 | 1.321146 | 0.002028 | 0.002253 | 0.002014 |
| mp_rotate_left.test | RUN | 0.286125 | 2.487573 | 1.282414 | 0.001816 | 0.002084 | 0.001708 |
| mp_rotate_right.test | RUN | 0.290254 | 2.479916 | 1.300026 | 0.002164 | 0.002156 | 0.001980 |
| mp_power_set.test | RUN | 0.282374 | 2.400796 | 1.285915 | 0.002214 | 0.002512 | 0.001916 |
| mp_partial_sum.test | RUN | 0.370182 | 3.175918 | 1.446419 | 0.002042 | 0.001938 | 0.001944 |
| mp_iterate.test | RUN | 0.254539 | 0.960549 | 1.021453 | 0.001801 | 0.002190 | 0.002094 |
| mp_pairwise_fold.test | RUN | 0.286035 | 2.187051 | 1.281825 | 0.001934 | 0.002250 | 0.001926 |
| mp_pairwise_fold_q.test | RUN | 0.222378 | 0.664936 | 0.736426 | 0.002234 | 0.002131 | 0.002074 |
| mp_sliding_fold.test | RUN | 0.522364 | 4.227730 | 2.344367 | 0.002082 | 0.002218 | 0.001917 |
| mp_sliding_fold_q.test | RUN | 0.532254 | 4.232119 | 2.338319 | 0.002006 | 0.002194 | 0.001992 |
| mp_intersperse.test | RUN | 0.270217 | 1.599496 | 1.109761 | 0.001822 | 0.002232 | 0.002238 |
| mp_split.test | RUN | 0.385350 | 3.042905 | 1.526468 | 0.001798 | 0.002334 | 0.002170 |
| mp_join.test | RUN | 0.305754 | 2.556688 | 1.344579 | 0.002084 | 0.002143 | 0.002184 |
| integral.test | RUN | 0.235623 | 1.153293 | 0.855588 | 0.001851 | 0.002239 | 0.002000 |
| mp_value.test | RUN | 0.015729 | 0.040668 | 0.058792 | 0.000904 | 0.000832 | 0.002040 |
| mp_identity.test | RUN | 0.218540 | 1.034098 | 0.817314 | 0.002146 | 0.002125 | 0.002164 |
| mp_inherit.test | RUN | 0.213725 | 0.760802 | 0.760174 | 0.002170 | 0.001957 | 0.002130 |
| mp_if.test | RUN | 0.217114 | 0.882896 | 0.765700 | 0.002258 | 0.002040 | 0.002140 |
| mp_if_sf.test | RUN | 0.208583 | 0.650018 | 0.687501 | 0.001683 | 0.002374 | 0.002152 |
| mp_eval_if.test | RUN | 0.217155 | 0.933154 | 0.812673 | 0.002199 | 0.002002 | 0.002236 |
| mp_eval_if_sf.test | RUN | 0.204612 | 0.659737 | 0.659621 | 0.002013 | 0.001951 | 0.002076 |
| mp_valid.test | RUN | 0.210258 | 0.681848 | 0.704470 | 0.001704 | 0.001967 | 0.002306 |
| mp_defer.test | RUN | 0.227914 | 1.121878 | 0.845456 | 0.002112 | 0.002344 | 0.002070 |
| mp_quote.test | RUN | 0.232328 | 1.141069 | 0.859597 | 0.001967 | 0.002306 | 0.002062 |
| mp_invoke_q.test | RUN | 0.246464 | 1.484006 | 0.943409 | 0.002183 | 0.002314 | 0.002200 |
| mp_invoke_q_sf.test | RUN | 0.207151 | 0.650424 | 0.699897 | 0.002061 | 0.002316 | 0.001712 |
| mp_quote_trait.test | RUN | 0.226594 | 1.217598 | 0.852259 | 0.001969 | 0.002100 | 0.002176 |
| mp_cond.test | RUN | 0.213313 | 0.767647 | 0.763247 | 0.001964 | 0.001980 | 0.001694 |
| mp_cond_sf.test | RUN | 0.207107 | 0.667191 | 0.729266 | 0.002112 | 0.002394 | 0.002046 |
| mp_not_fn.test | RUN | 0.209034 | 0.666043 | 0.674329 | 0.001973 | 0.002356 | 0.001770 |
| mp_eval_if_not.test | RUN | 0.219974 | 0.909416 | 0.792679 | 0.002012 | 0.002131 | 0.002033 |
| mp_eval_or.test | RUN | 0.210051 | 0.511743 | 0.722360 | 0.002096 | 0.002218 | 0.001947 |
| mp_compose.test | RUN | 0.235018 | 1.488346 | 0.943110 | 0.002097 | 0.002122 | 0.002045 |
| mp_valid_and_true.test | RUN | 0.212887 | 0.795079 | 0.764617 | 0.001793 | 0.002276 | 0.002051 |
| mp_compose_sf.test | COMPILE | 0.051695 | 0.099032 | 0.157348 | — | — | — |
| integer_sequence.test | RUN | 0.255431 | 1.476109 | 1.068114 | 0.001884 | 0.002100 | 0.001607 |
| tuple_for_each.test | RUN | 0.212896 | 0.575687 | 0.770003 | 0.001733 | 0.001920 | 0.002183 |
| tuple_for_each_cx.test | COMPILE | 0.040188 | 0.084011 | 0.122064 | — | — | — |
| tuple_apply.test | RUN | 0.213341 | 0.576427 | 0.791134 | 0.001862 | 0.002051 | 0.001920 |
| tuple_apply_cx.test | COMPILE | 0.058687 | 0.116505 | 0.191561 | — | — | — |
| construct_from_tuple.test | RUN | 0.208604 | 0.602617 | 0.745306 | 0.002000 | 0.002214 | 0.001940 |
| construct_from_tuple_cx.test | COMPILE | 0.058857 | 0.116646 | 0.171343 | — | — | — |
| tuple_transform.test | RUN | 0.342920 | 1.231901 | 1.484702 | 0.002126 | 0.001800 | 0.001898 |
| tuple_transform_2.test | RUN | 0.297763 | 0.920111 | 1.342004 | 0.001967 | 0.001946 | 0.002120 |
| tuple_transform_cx.test | COMPILE | 0.050534 | 0.113652 | 0.191583 | — | — | — |
| mp_set_contains.test | RUN | 0.216130 | 0.793227 | 0.793723 | 0.001979 | 0.002059 | 0.002210 |
| mp_set_push_back.test | RUN | 0.287483 | 2.398878 | 1.265248 | 0.002155 | 0.002325 | 0.002206 |
| mp_set_push_front.test | RUN | 0.355280 | 2.863469 | 1.437619 | 0.001839 | 0.002128 | 0.001835 |
| mp_is_set.test | RUN | 0.225100 | 0.788920 | 0.767442 | 0.002029 | 0.002237 | 0.002168 |
| mp_set_union.test | RUN | 0.276927 | 2.039772 | 1.221336 | 0.002057 | 0.002191 | 0.002056 |
| mp_set_union_sf.test | RUN | 0.215114 | 0.627467 | 0.701830 | 0.002097 | 0.002080 | 0.002242 |
| mp_set_difference.test | RUN | 0.251888 | 1.580280 | 1.033306 | 0.001865 | 0.002234 | 0.001913 |
| mp_set_difference_sf.test | RUN | 0.213694 | 0.660037 | 0.731704 | 0.002065 | 0.002224 | 0.001986 |
| mp_set_intersection.test | RUN | 0.245542 | 1.559979 | 1.012248 | 0.001916 | 0.001919 | 0.002057 |
| mp_set_intersection_sf.test | RUN | 0.211715 | 0.639846 | 0.738086 | 0.001849 | 0.002133 | 0.001746 |
| mp_all.test | RUN | 0.218332 | 0.787784 | 0.781659 | 0.001929 | 0.002240 | 0.002050 |
| mp_all_2.test | RUN | 0.617207 | 1.649844 | 1.722346 | 0.002078 | 0.002102 | 0.002102 |
| mp_and.test | RUN | 0.214179 | 0.788742 | 0.769405 | 0.002061 | 0.002266 | 0.001922 |
| mp_any.test | RUN | 0.217573 | 0.792436 | 0.792539 | 0.001940 | 0.002248 | 0.002056 |
| mp_any_2.test | RUN | 0.592009 | 1.646595 | 1.618335 | 0.002074 | 0.002241 | 0.001914 |
| mp_or.test | RUN | 0.221482 | 0.785414 | 0.773116 | 0.002058 | 0.002098 | 0.002024 |
| mp_same.test | RUN | 0.415757 | 1.294217 | 1.195657 | 0.001920 | 0.002093 | 0.001940 |
| mp_plus.test | RUN | 0.219835 | 0.911366 | 0.796816 | 0.001644 | 0.002055 | 0.001956 |
| mp_less.test | RUN | 0.218346 | 0.751937 | 0.709647 | 0.002343 | 0.001876 | 0.002066 |
| mp_min.test | RUN | 0.214605 | 0.706272 | 0.744052 | 0.002177 | 0.002118 | 0.001922 |
| mp_max.test | RUN | 0.212995 | 0.787766 | 0.742640 | 0.001884 | 0.001968 | 0.002026 |
| mp_similar.test | RUN | 0.211424 | 0.778628 | 0.758873 | 0.001883 | 0.002106 | 0.001770 |
| mp_map_find.test | RUN | 0.250089 | 1.395863 | 1.003302 | 0.002193 | 0.001930 | 0.002250 |
| mp_map_find_2.test | RUN | 0.233101 | 0.580207 | 0.837554 | 0.001732 | 0.002035 | 0.002070 |
| mp_map_find_3.test | RUN | 0.229633 | 0.549420 | 0.874989 | 0.001680 | 0.001947 | 0.001852 |
| mp_map_find_4.test | RUN | 0.218057 | 0.521105 | 0.812228 | 0.001730 | 0.002111 | 0.002164 |
| mp_map_contains.test | RUN | 0.226996 | 0.796504 | 0.736342 | 0.002165 | 0.002277 | 0.002040 |
| mp_map_insert.test | RUN | 0.292313 | 2.666364 | 1.383189 | 0.001948 | 0.002224 | 0.001772 |
| mp_map_replace.test | RUN | 0.381673 | 3.003542 | 1.575803 | 0.001719 | 0.002289 | 0.001854 |
| mp_map_erase.test | RUN | 0.288822 | 2.240036 | 1.344039 | 0.001966 | 0.002229 | 0.001782 |
| mp_map_update.test | RUN | 0.254042 | 1.491773 | 1.042646 | 0.001993 | 0.002162 | 0.001774 |
| mp_map_update_q.test | RUN | 0.248650 | 1.449970 | 1.044979 | 0.001958 | 0.001770 | 0.001702 |
| mp_map_keys.test | RUN | 0.247862 | 1.297112 | 1.021827 | 0.002020 | 0.002092 | 0.002008 |
| mp_is_map.test | RUN | 0.229733 | 0.789510 | 0.832113 | 0.001998 | 0.002172 | 0.001874 |
| mp_bind.test | RUN | 0.279768 | 2.352553 | 1.200893 | 0.002160 | 0.002054 | 0.002176 |
| mp_bind_q.test | RUN | 0.247427 | 1.484185 | 0.968511 | 0.001768 | 0.002107 | 0.002054 |
| mp_bind_front.test | RUN | 0.243915 | 1.609515 | 0.928559 | 0.002296 | 0.001945 | 0.002044 |
| mp_bind_back.test | RUN | 0.245452 | 1.604841 | 0.980499 | 0.002078 | 0.002140 | 0.002144 |
| mp_lambda.test | RUN | 0.557941 | 4.875945 | 2.411833 | 0.001962 | 0.001764 | 0.001834 |
| mpl.test | RUN | 0.477331 | 1.306133 | 1.931269 | 0.002009 | 0.002140 | 0.001982 |
| mpl_list.test | RUN | 0.284715 | 0.947707 | 0.948825 | 0.002042 | 0.002204 | 0.001848 |
| mpl_tuple.test | RUN | 0.275720 | 0.967293 | 0.933900 | 0.001806 | 0.001865 | 0.001968 |
| version.test | RUN | 0.141598 | 0.348060 | 0.463419 | 0.001842 | 0.002208 | 0.001790 |
| mp11_version.test | RUN | 0.166094 | 0.403183 | 0.571136 | 0.001873 | 0.002240 | 0.001978 |
| list_version.test | RUN | 0.152284 | 0.363665 | 0.472246 | 0.001683 | 0.002020 | 0.002078 |
| algorithm_version.test | RUN | 0.163943 | 0.380603 | 0.529531 | 0.002035 | 0.002198 | 0.001854 |
| integral_version.test | RUN | 0.141316 | 0.356590 | 0.462650 | 0.001848 | 0.002166 | 0.001788 |
| utility_version.test | RUN | 0.142245 | 0.365989 | 0.484349 | 0.001962 | 0.001830 | 0.001782 |
| function_version.test | RUN | 0.150505 | 0.371804 | 0.484268 | 0.001845 | 0.002236 | 0.002034 |
| map_version.test | RUN | 0.166511 | 0.381544 | 0.523686 | 0.001928 | 0.002098 | 0.001592 |
| set_version.test | RUN | 0.147345 | 0.373819 | 0.512326 | 0.002061 | 0.001873 | 0.001810 |
| bind_version.test | RUN | 0.160167 | 0.396502 | 0.545534 | 0.001852 | 0.002103 | 0.001859 |
| integer_sequence_version.test | RUN | 0.142127 | 0.350941 | 0.461751 | 0.001864 | 0.002010 | 0.001948 |
| tuple_version.test | RUN | 0.163908 | 0.391417 | 0.438634 | 0.001567 | 0.001702 | 0.001406 |
| mpl_version.test | RUN | 0.127252 | 0.345828 | 0.376465 | 0.001562 | 0.001698 | 0.001522 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.996× | 0.994×, 0.997× | 1.005× |
| clang | 1.089× | 1.078×, 1.100× | 0.999× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1359 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44390936409).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| algorithm_version.test | 10 | 0.001229s | 0.001222s | 0.001211s | byte equality observed |
| bind_version.test | 10 | 0.001220s | 0.001223s | 0.001240s | byte equality observed |
| construct_from_tuple.test | 10 | 0.001232s | 0.001217s | 0.001236s | byte equality observed |
| function_version.test | 10 | 0.001217s | 0.001205s | 0.001248s | byte equality observed |
| integer_sequence.test | 10 | 0.001214s | 0.001222s | 0.001264s | byte equality observed |
| integer_sequence_version.test | 10 | 0.001219s | 0.001211s | 0.001287s | byte equality observed |
| integral.test | 10 | 0.001227s | 0.001218s | 0.001241s | byte equality observed |
| integral_version.test | 10 | 0.001205s | 0.001207s | 0.001255s | byte equality observed |
| list_version.test | 10 | 0.001195s | 0.001201s | 0.001256s | byte equality observed |
| map_version.test | 10 | 0.001204s | 0.001217s | 0.001275s | byte equality observed |
| mp11_version.test | 9 | 0.001208s | 0.001185s | 0.001310s | byte equality observed |
| mp_all.test | 10 | 0.001191s | 0.001198s | 0.001309s | byte equality observed |
| mp_all_2.test | 10 | 0.001231s | 0.001194s | 0.001301s | byte equality observed |
| mp_all_of.test | 10 | 0.001265s | 0.001205s | 0.001291s | byte equality observed |
| mp_all_of_q.test | 10 | 0.001267s | 0.001212s | 0.001291s | byte equality observed |
| mp_and.test | 10 | 0.001305s | 0.001201s | 0.001307s | byte equality observed |
| mp_any.test | 10 | 0.001273s | 0.001201s | 0.001311s | byte equality observed |
| mp_any_2.test | 10 | 0.001320s | 0.001197s | 0.001302s | byte equality observed |
| mp_any_of.test | 10 | 0.001296s | 0.001208s | 0.001342s | byte equality observed |
| mp_any_of_q.test | 10 | 0.001303s | 0.001220s | 0.001333s | byte equality observed |
| mp_append.test | 10 | 0.001284s | 0.001223s | 0.001302s | byte equality observed |
| mp_append_2.test | 10 | 0.001332s | 0.001300s | 0.001277s | byte equality observed |
| mp_append_3.test | 10 | 0.000600s | 0.000578s | 0.001310s | byte equality observed |
| mp_append_sf.test | 10 | 0.001308s | 0.001303s | 0.001282s | byte equality observed |
| mp_apply_q.test | 10 | 0.001279s | 0.001319s | 0.001331s | byte equality observed |
| mp_apply_q_sf.test | 10 | 0.001289s | 0.001274s | 0.001310s | byte equality observed |
| mp_assign.test | 10 | 0.001299s | 0.001322s | 0.001303s | byte equality observed |
| mp_assign_2.test | 10 | 0.000607s | 0.000593s | 0.001271s | byte equality observed |
| mp_at.test | 10 | 0.001334s | 0.001337s | 0.001306s | byte equality observed |
| mp_at_2.test | 10 | 0.000601s | 0.000585s | 0.001264s | byte equality observed |
| mp_at_sf.test | 10 | 0.001307s | 0.001319s | 0.001311s | byte equality observed |
| mp_back.test | 10 | 0.001287s | 0.001292s | 0.001287s | byte equality observed |
| mp_back_2.test | 10 | 0.000596s | 0.000587s | 0.001326s | byte equality observed |
| mp_bind.test | 10 | 0.001301s | 0.001314s | 0.001284s | byte equality observed |
| mp_bind_back.test | 10 | 0.001307s | 0.001273s | 0.001313s | byte equality observed |
| mp_bind_front.test | 10 | 0.001273s | 0.001268s | 0.001316s | byte equality observed |
| mp_bind_q.test | 10 | 0.001291s | 0.001320s | 0.001335s | byte equality observed |
| mp_clear.test | 10 | 0.001331s | 0.001333s | 0.001320s | byte equality observed |
| mp_clear_2.test | 10 | 0.000609s | 0.000590s | 0.001324s | byte equality observed |
| mp_compose.test | 10 | 0.001302s | 0.001319s | 0.001289s | byte equality observed |
| mp_cond.test | 10 | 0.001272s | 0.001277s | 0.001294s | byte equality observed |
| mp_cond_sf.test | 10 | 0.001285s | 0.001286s | 0.001310s | byte equality observed |
| mp_contains.test | 10 | 0.001264s | 0.001318s | 0.001332s | byte equality observed |
| mp_copy_if.test | 10 | 0.001258s | 0.001298s | 0.001295s | byte equality observed |
| mp_copy_if_q.test | 10 | 0.001277s | 0.001309s | 0.001328s | byte equality observed |
| mp_count.test | 10 | 0.001278s | 0.001334s | 0.001330s | byte equality observed |
| mp_count_if.test | 10 | 0.001295s | 0.001310s | 0.001307s | byte equality observed |
| mp_count_if_q.test | 10 | 0.001267s | 0.001306s | 0.001314s | byte equality observed |
| mp_defer.test | 10 | 0.001275s | 0.001275s | 0.001338s | byte equality observed |
| mp_drop.test | 10 | 0.001317s | 0.001320s | 0.001316s | byte equality observed |
| mp_drop_2.test | 10 | 0.000604s | 0.000583s | 0.001260s | byte equality observed |
| mp_empty.test | 10 | 0.001307s | 0.001342s | 0.001291s | byte equality observed |
| mp_empty_2.test | 10 | 0.000597s | 0.000608s | 0.001257s | byte equality observed |
| mp_erase.test | 10 | 0.001332s | 0.001348s | 0.001292s | byte equality observed |
| mp_erase_2.test | 10 | 0.000592s | 0.000599s | 0.001285s | byte equality observed |
| mp_eval_if.test | 10 | 0.001322s | 0.001298s | 0.001281s | byte equality observed |
| mp_eval_if_not.test | 10 | 0.001285s | 0.001269s | 0.001299s | byte equality observed |
| mp_eval_if_sf.test | 10 | 0.001294s | 0.001296s | 0.001271s | byte equality observed |
| mp_eval_or.test | 10 | 0.001313s | 0.001251s | 0.001276s | byte equality observed |
| mp_fill.test | 10 | 0.001308s | 0.001317s | 0.001287s | byte equality observed |
| mp_fill_2.test | 10 | 0.000593s | 0.000586s | 0.001236s | byte equality observed |
| mp_filter.test | 10 | 0.001280s | 0.001292s | 0.001242s | byte equality observed |
| mp_find.test | 10 | 0.001279s | 0.001313s | 0.001292s | byte equality observed |
| mp_find_if.test | 10 | 0.001307s | 0.001325s | 0.001256s | byte equality observed |
| mp_find_if_q.test | 10 | 0.001272s | 0.001292s | 0.001304s | byte equality observed |
| mp_flatten.test | 10 | 0.001277s | 0.001286s | 0.001287s | byte equality observed |
| mp_fold.test | 10 | 0.001316s | 0.001305s | 0.001320s | byte equality observed |
| mp_fold_q.test | 10 | 0.001268s | 0.001321s | 0.001263s | byte equality observed |
| mp_fold_q_sf.test | 10 | 0.001265s | 0.001320s | 0.001308s | byte equality observed |
| mp_for_each.test | 10 | 0.001278s | 0.001283s | 0.001292s | byte equality observed |
| mp_from_sequence.test | 10 | 0.001271s | 0.001282s | 0.001294s | byte equality observed |
| mp_from_sequence_2.test | 10 | 0.001289s | 0.001310s | 0.001244s | byte equality observed |
| mp_from_sequence_3.test | 10 | 0.001298s | 0.001289s | 0.001270s | byte equality observed |
| mp_front.test | 10 | 0.001313s | 0.001301s | 0.001297s | byte equality observed |
| mp_front_2.test | 10 | 0.000595s | 0.000591s | 0.001267s | byte equality observed |
| mp_identity.test | 10 | 0.001288s | 0.001282s | 0.001268s | byte equality observed |
| mp_if.test | 10 | 0.001292s | 0.001284s | 0.001252s | byte equality observed |
| mp_if_sf.test | 10 | 0.001283s | 0.001311s | 0.001286s | byte equality observed |
| mp_inherit.test | 10 | 0.001284s | 0.001322s | 0.001298s | byte equality observed |
| mp_insert.test | 10 | 0.001346s | 0.001316s | 0.001289s | byte equality observed |
| mp_insert_2.test | 10 | 0.000599s | 0.000585s | 0.001261s | byte equality observed |
| mp_intersperse.test | 10 | 0.001323s | 0.001305s | 0.001271s | byte equality observed |
| mp_invoke_q.test | 10 | 0.001303s | 0.001264s | 0.001269s | byte equality observed |
| mp_invoke_q_sf.test | 10 | 0.001299s | 0.001265s | 0.001290s | byte equality observed |
| mp_iota.test | 10 | 0.001337s | 0.001264s | 0.001299s | byte equality observed |
| mp_iota_2.test | 10 | 0.001306s | 0.001289s | 0.001313s | byte equality observed |
| mp_is_list.test | 10 | 0.001336s | 0.001319s | 0.001300s | byte equality observed |
| mp_is_map.test | 10 | 0.001296s | 0.001273s | 0.001306s | byte equality observed |
| mp_is_set.test | 10 | 0.001275s | 0.001293s | 0.001272s | byte equality observed |
| mp_is_value_list.test | 10 | 0.001288s | 0.001276s | 0.001267s | byte equality observed |
| mp_iterate.test | 10 | 0.001285s | 0.001265s | 0.001328s | byte equality observed |
| mp_join.test | 10 | 0.001288s | 0.001303s | 0.001313s | byte equality observed |
| mp_lambda.test | 10 | 0.001347s | 0.001340s | 0.001333s | byte equality observed |
| mp_less.test | 10 | 0.001293s | 0.001303s | 0.001312s | byte equality observed |
| mp_list_c.test | 10 | 0.001323s | 0.001305s | 0.001319s | byte equality observed |
| mp_list_v.test | 10 | 0.000591s | 0.000597s | 0.001258s | byte equality observed |
| mp_map_contains.test | 10 | 0.001310s | 0.001281s | 0.001263s | byte equality observed |
| mp_map_erase.test | 10 | 0.001301s | 0.001292s | 0.001298s | byte equality observed |
| mp_map_find.test | 10 | 0.001279s | 0.001292s | 0.001333s | byte equality observed |
| mp_map_find_2.test | 10 | 0.001273s | 0.001304s | 0.001345s | byte equality observed |
| mp_map_find_3.test | 10 | 0.001279s | 0.001281s | 0.001382s | byte equality observed |
| mp_map_find_4.test | 10 | 0.001285s | 0.001265s | 0.001323s | byte equality observed |
| mp_map_insert.test | 10 | 0.001304s | 0.001304s | 0.001295s | byte equality observed |
| mp_map_keys.test | 10 | 0.001273s | 0.001282s | 0.001293s | byte equality observed |
| mp_map_replace.test | 10 | 0.001319s | 0.001275s | 0.001277s | byte equality observed |
| mp_map_update.test | 10 | 0.001303s | 0.001252s | 0.001352s | byte equality observed |
| mp_map_update_q.test | 10 | 0.001284s | 0.001280s | 0.001316s | byte equality observed |
| mp_max.test | 10 | 0.001290s | 0.001306s | 0.001303s | byte equality observed |
| mp_max_element.test | 10 | 0.001314s | 0.001315s | 0.001303s | byte equality observed |
| mp_max_element_2.test | 10 | 0.000592s | 0.000597s | 0.001296s | byte equality observed |
| mp_max_element_q.test | 10 | 0.001304s | 0.001334s | 0.001294s | byte equality observed |
| mp_max_element_q_2.test | 10 | 0.000607s | 0.000589s | 0.001303s | byte equality observed |
| mp_min.test | 10 | 0.001290s | 0.001285s | 0.001278s | byte equality observed |
| mp_min_element.test | 10 | 0.001315s | 0.001292s | 0.001301s | byte equality observed |
| mp_min_element_2.test | 10 | 0.000598s | 0.000585s | 0.001275s | byte equality observed |
| mp_min_element_q.test | 10 | 0.001349s | 0.001301s | 0.001296s | byte equality observed |
| mp_min_element_q_2.test | 10 | 0.000592s | 0.000589s | 0.001260s | byte equality observed |
| mp_none_of.test | 10 | 0.001283s | 0.001274s | 0.001278s | byte equality observed |
| mp_none_of_q.test | 10 | 0.001274s | 0.001314s | 0.001299s | byte equality observed |
| mp_not_fn.test | 10 | 0.001279s | 0.001233s | 0.001295s | byte equality observed |
| mp_nth_element.test | 10 | 0.001321s | 0.001249s | 0.001266s | byte equality observed |
| mp_nth_element_q.test | 10 | 0.001308s | 0.001282s | 0.001286s | byte equality observed |
| mp_or.test | 10 | 0.001283s | 0.001299s | 0.001319s | byte equality observed |
| mp_pairwise_fold.test | 10 | 0.001275s | 0.001298s | 0.001311s | byte equality observed |
| mp_pairwise_fold_q.test | 10 | 0.001285s | 0.001265s | 0.001306s | byte equality observed |
| mp_partial_sum.test | 10 | 0.001311s | 0.001307s | 0.001313s | byte equality observed |
| mp_partition.test | 10 | 0.001286s | 0.001328s | 0.001297s | byte equality observed |
| mp_partition_q.test | 10 | 0.001316s | 0.001288s | 0.001291s | byte equality observed |
| mp_plus.test | 10 | 0.001317s | 0.001297s | 0.001293s | byte equality observed |
| mp_pop_back.test | 10 | 0.001326s | 0.001332s | 0.001274s | byte equality observed |
| mp_pop_back_2.test | 10 | 0.000592s | 0.000598s | 0.001299s | byte equality observed |
| mp_pop_front.test | 10 | 0.001311s | 0.001307s | 0.001258s | byte equality observed |
| mp_pop_front_2.test | 10 | 0.000595s | 0.000579s | 0.001259s | byte equality observed |
| mp_power_set.test | 10 | 0.001292s | 0.001284s | 0.001268s | byte equality observed |
| mp_product.test | 10 | 0.001291s | 0.001301s | 0.001267s | byte equality observed |
| mp_push_back.test | 10 | 0.001304s | 0.001328s | 0.001248s | byte equality observed |
| mp_push_back_2.test | 10 | 0.000589s | 0.000584s | 0.001275s | byte equality observed |
| mp_push_front.test | 10 | 0.001323s | 0.001298s | 0.001299s | byte equality observed |
| mp_push_front_2.test | 10 | 0.000592s | 0.000590s | 0.001263s | byte equality observed |
| mp_quote.test | 10 | 0.001305s | 0.001343s | 0.001287s | byte equality observed |
| mp_quote_trait.test | 10 | 0.001335s | 0.001317s | 0.001329s | byte equality observed |
| mp_remove.test | 10 | 0.001280s | 0.001304s | 0.001320s | byte equality observed |
| mp_remove_if.test | 10 | 0.001321s | 0.001346s | 0.001275s | byte equality observed |
| mp_remove_if_q.test | 10 | 0.001296s | 0.001310s | 0.001267s | byte equality observed |
| mp_rename.test | 10 | 0.001263s | 0.001310s | 0.001284s | byte equality observed |
| mp_rename_2.test | 10 | 0.000592s | 0.000600s | 0.001241s | byte equality observed |
| mp_rename_v.test | 10 | 0.000594s | 0.000588s | 0.001277s | byte equality observed |
| mp_repeat.test | 10 | 0.001335s | 0.001348s | 0.001274s | byte equality observed |
| mp_repeat_2.test | 10 | 0.000597s | 0.000587s | 0.001277s | byte equality observed |
| mp_repeat_3.test | 10 | 0.001301s | 0.001251s | 0.001263s | byte equality observed |
| mp_replace.test | 10 | 0.001284s | 0.001280s | 0.001255s | byte equality observed |
| mp_replace_at.test | 10 | 0.001313s | 0.001289s | 0.001305s | byte equality observed |
| mp_replace_at_c.test | 10 | 0.001282s | 0.001294s | 0.001294s | byte equality observed |
| mp_replace_front.test | 10 | 0.001296s | 0.001312s | 0.001269s | byte equality observed |
| mp_replace_front_2.test | 10 | 0.000604s | 0.000577s | 0.001295s | byte equality observed |
| mp_replace_if.test | 10 | 0.001297s | 0.001283s | 0.001276s | byte equality observed |
| mp_replace_if_q.test | 10 | 0.001285s | 0.001304s | 0.001363s | byte equality observed |
| mp_replace_second.test | 10 | 0.001302s | 0.001304s | 0.001286s | byte equality observed |
| mp_replace_second_2.test | 10 | 0.000580s | 0.000587s | 0.001253s | byte equality observed |
| mp_replace_third.test | 10 | 0.001324s | 0.001318s | 0.001275s | byte equality observed |
| mp_replace_third_2.test | 10 | 0.000601s | 0.000584s | 0.001278s | byte equality observed |
| mp_reverse.test | 10 | 0.001345s | 0.001317s | 0.001274s | byte equality observed |
| mp_reverse_fold.test | 10 | 0.001312s | 0.001327s | 0.001356s | byte equality observed |
| mp_reverse_fold_q.test | 10 | 0.001308s | 0.001270s | 0.001297s | byte equality observed |
| mp_rotate_left.test | 10 | 0.001293s | 0.001311s | 0.001293s | byte equality observed |
| mp_rotate_right.test | 10 | 0.001321s | 0.001321s | 0.001293s | byte equality observed |
| mp_same.test | 10 | 0.001300s | 0.001283s | 0.001279s | byte equality observed |
| mp_second.test | 10 | 0.001307s | 0.001316s | 0.001252s | byte equality observed |
| mp_second_2.test | 10 | 0.000595s | 0.000602s | 0.001299s | byte equality observed |
| mp_set_contains.test | 10 | 0.001287s | 0.001273s | 0.001271s | byte equality observed |
| mp_set_difference.test | 10 | 0.001278s | 0.001301s | 0.001270s | byte equality observed |
| mp_set_difference_sf.test | 10 | 0.001262s | 0.001310s | 0.001308s | byte equality observed |
| mp_set_intersection.test | 10 | 0.001269s | 0.001291s | 0.001279s | byte equality observed |
| mp_set_intersection_sf.test | 10 | 0.001280s | 0.001287s | 0.001272s | byte equality observed |
| mp_set_push_back.test | 10 | 0.001300s | 0.001285s | 0.001308s | byte equality observed |
| mp_set_push_front.test | 10 | 0.001315s | 0.001340s | 0.001305s | byte equality observed |
| mp_set_union.test | 10 | 0.001286s | 0.001302s | 0.001290s | byte equality observed |
| mp_set_union_sf.test | 10 | 0.001290s | 0.001279s | 0.001309s | byte equality observed |
| mp_similar.test | 10 | 0.001283s | 0.001310s | 0.001314s | byte equality observed |
| mp_size.test | 10 | 0.001306s | 0.001321s | 0.001264s | byte equality observed |
| mp_size_2.test | 10 | 0.000590s | 0.000587s | 0.001280s | byte equality observed |
| mp_slice.test | 10 | 0.001332s | 0.001325s | 0.001238s | byte equality observed |
| mp_slice_2.test | 10 | 0.000594s | 0.000580s | 0.001288s | byte equality observed |
| mp_sliding_fold.test | 10 | 0.001311s | 0.001295s | 0.001287s | byte equality observed |
| mp_sliding_fold_q.test | 10 | 0.001318s | 0.001298s | 0.001280s | byte equality observed |
| mp_sort.test | 10 | 0.001280s | 0.001317s | 0.001255s | byte equality observed |
| mp_sort_q.test | 10 | 0.001296s | 0.001295s | 0.001269s | byte equality observed |
| mp_split.test | 10 | 0.001312s | 0.001281s | 0.001288s | byte equality observed |
| mp_starts_with.test | 10 | 0.001320s | 0.001345s | 0.001313s | byte equality observed |
| mp_starts_with_sf.test | 10 | 0.001309s | 0.001293s | 0.001321s | byte equality observed |
| mp_take.test | 10 | 0.001331s | 0.001305s | 0.001271s | byte equality observed |
| mp_take_2.test | 10 | 0.000589s | 0.000596s | 0.001285s | byte equality observed |
| mp_third.test | 10 | 0.001330s | 0.001311s | 0.001301s | byte equality observed |
| mp_third_2.test | 10 | 0.000602s | 0.000584s | 0.001251s | byte equality observed |
| mp_transform.test | 10 | 0.001302s | 0.001306s | 0.001263s | byte equality observed |
| mp_transform_2.test | 10 | 0.001297s | 0.001230s | 0.001264s | byte equality observed |
| mp_transform_front.test | 10 | 0.001304s | 0.001354s | 0.001267s | byte equality observed |
| mp_transform_front_2.test | 10 | 0.000619s | 0.000595s | 0.001244s | byte equality observed |
| mp_transform_if.test | 10 | 0.001302s | 0.001300s | 0.001264s | byte equality observed |
| mp_transform_if_q.test | 10 | 0.001300s | 0.001273s | 0.001249s | byte equality observed |
| mp_transform_q.test | 10 | 0.001307s | 0.001289s | 0.001269s | byte equality observed |
| mp_transform_q_2.test | 10 | 0.001289s | 0.001275s | 0.001267s | byte equality observed |
| mp_transform_second.test | 10 | 0.001315s | 0.001307s | 0.001298s | byte equality observed |
| mp_transform_second_2.test | 10 | 0.000605s | 0.000587s | 0.001273s | byte equality observed |
| mp_transform_sf.test | 10 | 0.001299s | 0.001285s | 0.001271s | byte equality observed |
| mp_transform_third.test | 10 | 0.001350s | 0.001324s | 0.001285s | byte equality observed |
| mp_transform_third_2.test | 10 | 0.000595s | 0.000592s | 0.001284s | byte equality observed |
| mp_unique.test | 10 | 0.001289s | 0.001305s | 0.001276s | byte equality observed |
| mp_unique_if.test | 10 | 0.001318s | 0.001310s | 0.001294s | byte equality observed |
| mp_unique_if_q.test | 10 | 0.001319s | 0.001311s | 0.001288s | byte equality observed |
| mp_valid.test | 10 | 0.001332s | 0.001310s | 0.001273s | byte equality observed |
| mp_valid_and_true.test | 10 | 0.001294s | 0.001339s | 0.001306s | byte equality observed |
| mp_value.test | 10 | 0.000589s | 0.000583s | 0.001274s | byte equality observed |
| mp_with_index.test | 10 | 0.001765s | 0.001713s | 0.001619s | byte equality observed |
| mp_with_index_cx.test | 10 | 0.000591s | 0.000584s | 0.001263s | byte equality observed |
| mpl.test | 10 | 0.001297s | 0.001268s | 0.001296s | byte equality observed |
| mpl_list.test | 10 | 0.001270s | 0.001276s | 0.001280s | byte equality observed |
| mpl_tuple.test | 10 | 0.001292s | 0.001332s | 0.001288s | byte equality observed |
| mpl_version.test | 10 | 0.001267s | 0.001280s | 0.001351s | byte equality observed |
| set_version.test | 10 | 0.001287s | 0.001281s | 0.001326s | byte equality observed |
| tuple_apply.test | 10 | 0.001294s | 0.001293s | 0.001290s | byte equality observed |
| tuple_for_each.test | 10 | 0.001311s | 0.001278s | 0.001300s | byte equality observed |
| tuple_transform.test | 10 | 0.001301s | 0.001331s | 0.001282s | byte equality observed |
| tuple_transform_2.test | 10 | 0.001293s | 0.001278s | 0.001272s | byte equality observed |
| tuple_version.test | 10 | 0.001304s | 0.001272s | 0.001303s | byte equality observed |
| utility_version.test | 10 | 0.001282s | 0.001296s | 0.001315s | byte equality observed |
| version.test | 10 | 0.001306s | 0.001319s | 0.001292s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44390936409).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
