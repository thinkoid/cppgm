# libs/mp11/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| mp11.test | COMPILE | 0.049378 | 0.096237 | 0.165366 | — | — | — |
| complex_h.test | COMPILE | 0.204316 | 0.434417 | 0.752911 | — | — | — |
| mp_size.test | RUN | 0.241267 | 1.291438 | 0.877372 | 0.001923 | 0.001980 | 0.001950 |
| mp_size_2.test | RUN | 0.020347 | 0.045738 | 0.074145 | 0.000865 | 0.000894 | 0.001978 |
| mp_empty.test | RUN | 0.232659 | 0.836402 | 0.872454 | 0.002028 | 0.002075 | 0.002066 |
| mp_empty_2.test | RUN | 0.021340 | 0.050856 | 0.078762 | 0.000681 | 0.000753 | 0.001862 |
| mp_assign.test | RUN | 0.244677 | 1.725270 | 1.124367 | 0.001860 | 0.002109 | 0.002138 |
| mp_assign_2.test | RUN | 0.022608 | 0.048869 | 0.072190 | 0.000697 | 0.000873 | 0.001806 |
| mp_clear.test | RUN | 0.224669 | 0.737514 | 0.793604 | 0.001807 | 0.002028 | 0.001727 |
| mp_clear_2.test | RUN | 0.020459 | 0.049714 | 0.081106 | 0.000709 | 0.000717 | 0.001960 |
| mp_front.test | RUN | 0.233182 | 1.186792 | 0.961647 | 0.001889 | 0.001940 | 0.001696 |
| mp_front_2.test | RUN | 0.021137 | 0.046967 | 0.081066 | 0.000740 | 0.000698 | 0.002024 |
| mp_pop_front.test | RUN | 0.233769 | 1.198638 | 0.956597 | 0.001939 | 0.001850 | 0.001713 |
| mp_pop_front_2.test | RUN | 0.021138 | 0.045957 | 0.080796 | 0.000634 | 0.000903 | 0.001856 |
| mp_second.test | RUN | 0.235337 | 0.778517 | 0.942854 | 0.001792 | 0.001933 | 0.002020 |
| mp_second_2.test | RUN | 0.019505 | 0.047865 | 0.069446 | 0.000768 | 0.000835 | 0.002084 |
| mp_third.test | RUN | 0.224183 | 0.726494 | 0.866139 | 0.002076 | 0.001895 | 0.002066 |
| mp_third_2.test | RUN | 0.020887 | 0.047847 | 0.075081 | 0.000723 | 0.000827 | 0.001674 |
| mp_push_front.test | RUN | 0.294389 | 2.549223 | 1.472048 | 0.001916 | 0.002076 | 0.001935 |
| mp_push_front_2.test | RUN | 0.021555 | 0.051279 | 0.082072 | 0.000746 | 0.000905 | 0.001972 |
| mp_push_back.test | RUN | 0.297989 | 2.562819 | 1.456063 | 0.002032 | 0.001939 | 0.002002 |
| mp_push_back_2.test | RUN | 0.021636 | 0.049645 | 0.080862 | 0.000850 | 0.000710 | 0.001960 |
| mp_rename.test | RUN | 0.282933 | 2.364252 | 1.279124 | 0.001892 | 0.002190 | 0.001666 |
| mp_rename_2.test | RUN | 0.021788 | 0.047415 | 0.078728 | 0.000778 | 0.000890 | 0.001936 |
| mp_append.test | RUN | 0.301056 | 2.677392 | 1.467809 | 0.001999 | 0.002082 | 0.002012 |
| mp_append_2.test | RUN | 0.624845 | 5.915755 | 1.814103 | 0.001920 | 0.002183 | 0.001979 |
| mp_append_3.test | RUN | 0.021069 | 0.051605 | 0.066759 | 0.000823 | 0.000848 | 0.002023 |
| mp_append_sf.test | RUN | 0.228874 | 0.665803 | 0.832087 | 0.001851 | 0.002076 | 0.001856 |
| mp_replace_front.test | RUN | 0.261217 | 1.910506 | 1.198485 | 0.001887 | 0.002166 | 0.002064 |
| mp_replace_front_2.test | RUN | 0.021637 | 0.048145 | 0.079666 | 0.000699 | 0.000758 | 0.002038 |
| mp_replace_second.test | RUN | 0.256789 | 1.246611 | 1.072532 | 0.001921 | 0.001838 | 0.002072 |
| mp_replace_second_2.test | RUN | 0.020444 | 0.048697 | 0.077272 | 0.000682 | 0.000900 | 0.001812 |
| mp_replace_third.test | RUN | 0.247716 | 1.035342 | 1.012460 | 0.002028 | 0.001786 | 0.002044 |
| mp_replace_third_2.test | RUN | 0.021105 | 0.047006 | 0.080956 | 0.000775 | 0.000824 | 0.002174 |
| mp_apply_q.test | RUN | 0.269041 | 2.316373 | 1.349562 | 0.001671 | 0.002038 | 0.002151 |
| mp_apply_q_sf.test | RUN | 0.215619 | 0.697520 | 0.844327 | 0.002011 | 0.001896 | 0.002121 |
| mp_is_list.test | RUN | 0.221482 | 0.817839 | 0.856597 | 0.001818 | 0.002036 | 0.001827 |
| mp_list_c.test | RUN | 0.229521 | 0.993534 | 0.904622 | 0.001735 | 0.002060 | 0.001922 |
| mp_transform_front.test | RUN | 0.262962 | 1.894552 | 1.076992 | 0.001727 | 0.001947 | 0.001718 |
| mp_transform_front_2.test | RUN | 0.020612 | 0.048221 | 0.081988 | 0.000861 | 0.000811 | 0.001864 |
| mp_transform_second.test | RUN | 0.254024 | 1.626848 | 1.079959 | 0.001846 | 0.001967 | 0.002048 |
| mp_transform_second_2.test | RUN | 0.022171 | 0.045716 | 0.079458 | 0.000762 | 0.000855 | 0.001902 |
| mp_transform_third.test | RUN | 0.238289 | 1.269571 | 1.000015 | 0.001746 | 0.001906 | 0.002073 |
| mp_transform_third_2.test | RUN | 0.021617 | 0.051278 | 0.076935 | 0.000735 | 0.000890 | 0.001776 |
| mp_list_v.test | RUN | 0.020842 | 0.047774 | 0.072116 | 0.000690 | 0.000795 | 0.001770 |
| mp_rename_v.test | RUN | 0.021049 | 0.049352 | 0.072456 | 0.000693 | 0.000869 | 0.002027 |
| mp_is_value_list.test | RUN | 0.208584 | 0.526558 | 0.781400 | 0.002068 | 0.001800 | 0.002056 |
| mp_transform.test | RUN | 0.492179 | 3.984497 | 2.329677 | 0.001958 | 0.001950 | 0.001705 |
| mp_transform_2.test | RUN | 0.208776 | 0.472877 | 0.815254 | 0.001722 | 0.001982 | 0.001978 |
| mp_transform_q.test | RUN | 0.482658 | 3.811334 | 2.264420 | 0.001974 | 0.002174 | 0.002066 |
| mp_transform_q_2.test | RUN | 0.525815 | 1.248964 | 2.919063 | 0.001775 | 0.001978 | 0.001746 |
| mp_transform_sf.test | RUN | 0.231125 | 0.711632 | 0.904208 | 0.001892 | 0.001986 | 0.001876 |
| mp_transform_if.test | RUN | 0.294369 | 1.907858 | 1.265762 | 0.001978 | 0.002079 | 0.001639 |
| mp_transform_if_q.test | RUN | 0.289419 | 1.903928 | 1.307226 | 0.001950 | 0.002024 | 0.001650 |
| mp_filter.test | RUN | 0.254244 | 1.167400 | 0.989649 | 0.001827 | 0.001930 | 0.001823 |
| mp_fill.test | RUN | 0.241793 | 0.870863 | 0.969825 | 0.002030 | 0.001860 | 0.001912 |
| mp_fill_2.test | RUN | 0.037039 | 0.080802 | 0.131610 | 0.000857 | 0.000927 | 0.002081 |
| mp_count.test | RUN | 0.441185 | 2.057108 | 1.472932 | 0.001564 | 0.002065 | 0.001740 |
| mp_count_if.test | RUN | 0.462752 | 2.118827 | 1.623820 | 0.001554 | 0.002064 | 0.002021 |
| mp_count_if_q.test | RUN | 0.241906 | 1.360421 | 0.908378 | 0.001946 | 0.001962 | 0.002038 |
| mp_contains.test | RUN | 0.227200 | 0.837236 | 0.876187 | 0.001820 | 0.001852 | 0.002137 |
| mp_starts_with.test | RUN | 0.241267 | 0.861320 | 0.952117 | 0.001788 | 0.001918 | 0.001678 |
| mp_starts_with_sf.test | RUN | 0.229576 | 0.710205 | 0.887514 | 0.001810 | 0.001854 | 0.001840 |
| mp_repeat.test | RUN | 0.335625 | 3.423064 | 1.565548 | 0.001956 | 0.001781 | 0.001742 |
| mp_repeat_2.test | RUN | 0.040062 | 0.079774 | 0.140764 | 0.000843 | 0.000891 | 0.001957 |
| mp_repeat_3.test | RUN | 0.286582 | 0.492814 | 0.847093 | 0.002066 | 0.002160 | 0.001670 |
| mp_product.test | RUN | 0.274116 | 2.078105 | 1.258637 | 0.001824 | 0.002000 | 0.002050 |
| mp_drop.test | RUN | 0.282603 | 2.539988 | 1.398747 | 0.001932 | 0.002040 | 0.002062 |
| mp_drop_2.test | RUN | 0.038298 | 0.082354 | 0.131255 | 0.000719 | 0.000875 | 0.001815 |
| mp_iota.test | RUN | 0.277241 | 2.156622 | 1.221183 | 0.001918 | 0.002012 | 0.001924 |
| mp_iota_2.test | RUN | 0.301486 | 2.643578 | 1.267946 | 0.001863 | 0.002162 | 0.001603 |
| mp_at.test | RUN | 0.250043 | 1.142177 | 1.030161 | 0.001813 | 0.002035 | 0.001968 |
| mp_at_2.test | RUN | 0.037731 | 0.071858 | 0.142077 | 0.000847 | 0.000752 | 0.002070 |
| mp_at_sf.test | RUN | 0.235876 | 0.720765 | 0.870371 | 0.002019 | 0.002041 | 0.002060 |
| mp_take.test | RUN | 0.379632 | 3.352368 | 1.634293 | 0.001931 | 0.001826 | 0.002045 |
| mp_take_2.test | RUN | 0.036738 | 0.077935 | 0.124236 | 0.000870 | 0.000878 | 0.001941 |
| mp_slice.test | RUN | 0.447357 | 3.389552 | 2.008473 | 0.001740 | 0.002047 | 0.002054 |
| mp_slice_2.test | RUN | 0.037023 | 0.077990 | 0.138238 | 0.000882 | 0.000911 | 0.001996 |
| mp_replace.test | RUN | 0.285800 | 1.732390 | 1.310705 | 0.001906 | 0.001894 | 0.002046 |
| mp_replace_if.test | RUN | 0.270075 | 1.543867 | 1.240905 | 0.002086 | 0.002038 | 0.001992 |
| mp_replace_if_q.test | RUN | 0.275620 | 1.560051 | 1.219325 | 0.001972 | 0.002063 | 0.002146 |
| mp_copy_if.test | RUN | 0.279380 | 2.169634 | 1.175741 | 0.001722 | 0.002174 | 0.001865 |
| mp_copy_if_q.test | RUN | 0.271870 | 2.185805 | 1.232262 | 0.002120 | 0.002048 | 0.001702 |
| mp_remove.test | RUN | 0.272506 | 1.425350 | 1.175492 | 0.002060 | 0.002166 | 0.001807 |
| mp_remove_if.test | RUN | 0.288587 | 2.288053 | 1.319896 | 0.001907 | 0.001984 | 0.002014 |
| mp_remove_if_q.test | RUN | 0.287904 | 2.276713 | 1.243606 | 0.001861 | 0.001872 | 0.002090 |
| mp_partition.test | RUN | 0.283172 | 2.144827 | 1.336476 | 0.002062 | 0.001928 | 0.001780 |
| mp_partition_q.test | RUN | 0.291566 | 2.093685 | 1.368181 | 0.001826 | 0.001837 | 0.001622 |
| mp_sort.test | RUN | 0.269566 | 1.527012 | 1.179215 | 0.001750 | 0.001956 | 0.001637 |
| mp_sort_q.test | RUN | 0.277615 | 1.548459 | 1.181141 | 0.001902 | 0.002057 | 0.002012 |
| mp_find.test | RUN | 0.262553 | 1.665045 | 1.082686 | 0.001848 | 0.001987 | 0.001663 |
| mp_find_if.test | RUN | 0.248473 | 1.504382 | 1.025198 | 0.002030 | 0.001940 | 0.001827 |
| mp_find_if_q.test | RUN | 0.278924 | 1.718830 | 1.228843 | 0.001980 | 0.002036 | 0.002029 |
| mp_reverse.test | RUN | 0.549463 | 4.435085 | 2.215109 | 0.001912 | 0.002042 | 0.002035 |
| mp_fold.test | RUN | 0.927499 | 3.427782 | 5.480999 | 0.001859 | 0.002102 | 0.002134 |
| mp_fold_q.test | RUN | 0.252844 | 1.521002 | 1.169974 | 0.001929 | 0.002106 | 0.001958 |
| mp_fold_q_sf.test | RUN | 0.234490 | 0.719412 | 0.898438 | 0.001716 | 0.002150 | 0.002008 |
| mp_reverse_fold.test | RUN | 0.446549 | 3.326378 | 1.657112 | 0.001840 | 0.002004 | 0.001858 |
| mp_reverse_fold_q.test | RUN | 0.269301 | 1.871834 | 1.213712 | 0.001703 | 0.002025 | 0.001751 |
| mp_unique.test | RUN | 0.267464 | 1.667993 | 1.149965 | 0.001710 | 0.001937 | 0.002138 |
| mp_unique_if.test | RUN | 0.467149 | 3.382368 | 1.810358 | 0.002352 | 0.001899 | 0.001880 |
| mp_unique_if_q.test | RUN | 0.407094 | 3.429945 | 1.519465 | 0.001774 | 0.002148 | 0.001660 |
| mp_all_of.test | RUN | 0.614396 | 1.852348 | 2.015820 | 0.002053 | 0.002066 | 0.002082 |
| mp_all_of_q.test | RUN | 0.236418 | 0.825625 | 0.907238 | 0.001864 | 0.002005 | 0.001798 |
| mp_any_of.test | RUN | 0.616210 | 1.911181 | 1.971133 | 0.001826 | 0.002132 | 0.001818 |
| mp_any_of_q.test | RUN | 0.230098 | 0.823427 | 0.884821 | 0.002030 | 0.001997 | 0.002018 |
| mp_none_of.test | RUN | 0.617678 | 1.916769 | 1.848797 | 0.001796 | 0.001943 | 0.002016 |
| mp_none_of_q.test | RUN | 0.218692 | 0.790431 | 0.912228 | 0.001966 | 0.001937 | 0.001680 |
| mp_replace_at.test | RUN | 0.266364 | 1.701866 | 1.350563 | 0.002044 | 0.002170 | 0.002038 |
| mp_replace_at_c.test | RUN | 0.278439 | 1.699268 | 1.329126 | 0.001753 | 0.002085 | 0.002122 |
| mp_for_each.test | RUN | 0.273141 | 1.209063 | 1.458219 | 0.001700 | 0.002068 | 0.002018 |
| mp_insert.test | RUN | 0.421762 | 3.352148 | 1.831398 | 0.001931 | 0.001821 | 0.001986 |
| mp_insert_2.test | RUN | 0.037680 | 0.071023 | 0.132765 | 0.000710 | 0.000701 | 0.001813 |
| mp_erase.test | RUN | 0.451739 | 3.561204 | 2.219325 | 0.001840 | 0.002007 | 0.001797 |
| mp_erase_2.test | RUN | 0.038198 | 0.080913 | 0.141858 | 0.000855 | 0.000961 | 0.001985 |
| mp_with_index.test | RUN | 0.644449 | 7.341902 | 4.809677 | 0.002536 | 0.002505 | 0.001746 |
| mp_with_index_cx.test | RUN | 0.003890 | 0.023360 | 0.030816 | 0.000811 | 0.000967 | 0.001773 |
| mp_from_sequence.test | RUN | 0.272713 | 1.906693 | 1.267245 | 0.001531 | 0.002084 | 0.001972 |
| mp_from_sequence_2.test | RUN | 0.283382 | 2.251737 | 1.371632 | 0.001844 | 0.002066 | 0.002024 |
| mp_from_sequence_3.test | RUN | 0.242672 | 1.005543 | 0.936160 | 0.001824 | 0.002062 | 0.001956 |
| mp_min_element.test | RUN | 0.236877 | 0.922622 | 0.957462 | 0.001967 | 0.002087 | 0.001981 |
| mp_min_element_2.test | RUN | 0.037785 | 0.076446 | 0.140684 | 0.000838 | 0.000876 | 0.001846 |
| mp_min_element_q.test | RUN | 0.239587 | 0.916516 | 0.875378 | 0.001534 | 0.001894 | 0.001700 |
| mp_min_element_q_2.test | RUN | 0.036528 | 0.078182 | 0.127563 | 0.000698 | 0.000926 | 0.001958 |
| mp_max_element.test | RUN | 0.240979 | 0.925753 | 0.905676 | 0.001841 | 0.002061 | 0.001859 |
| mp_max_element_2.test | RUN | 0.035236 | 0.076776 | 0.140951 | 0.000673 | 0.000792 | 0.001755 |
| mp_max_element_q.test | RUN | 0.234150 | 0.934800 | 0.936651 | 0.002004 | 0.002005 | 0.002076 |
| mp_max_element_q_2.test | RUN | 0.037239 | 0.076174 | 0.141945 | 0.000719 | 0.000893 | 0.001983 |
| mp_nth_element.test | RUN | 0.260266 | 1.294050 | 1.121214 | 0.001959 | 0.002152 | 0.001857 |
| mp_nth_element_q.test | RUN | 0.263298 | 1.251174 | 1.094533 | 0.001960 | 0.001890 | 0.002134 |
| mp_back.test | RUN | 0.256891 | 1.066459 | 1.074637 | 0.001830 | 0.001913 | 0.002109 |
| mp_back_2.test | RUN | 0.038085 | 0.078596 | 0.141116 | 0.000746 | 0.000805 | 0.001982 |
| mp_pop_back.test | RUN | 0.681126 | 6.741520 | 2.070467 | 0.001733 | 0.001764 | 0.001864 |
| mp_pop_back_2.test | RUN | 0.038381 | 0.081470 | 0.140937 | 0.000863 | 0.000889 | 0.002058 |
| mp_flatten.test | RUN | 0.297147 | 2.438666 | 1.496804 | 0.001926 | 0.002108 | 0.002052 |
| mp_rotate_left.test | RUN | 0.299350 | 2.629051 | 1.454900 | 0.001896 | 0.002308 | 0.001849 |
| mp_rotate_right.test | RUN | 0.293719 | 2.609611 | 1.460938 | 0.001742 | 0.001893 | 0.002139 |
| mp_power_set.test | RUN | 0.298463 | 2.561814 | 1.458552 | 0.002028 | 0.002046 | 0.002028 |
| mp_partial_sum.test | RUN | 0.396834 | 3.305872 | 1.625253 | 0.001932 | 0.002038 | 0.001738 |
| mp_iterate.test | RUN | 0.264160 | 1.035674 | 1.199422 | 0.001720 | 0.002026 | 0.001846 |
| mp_pairwise_fold.test | RUN | 0.296191 | 2.301405 | 1.469858 | 0.001761 | 0.002194 | 0.001868 |
| mp_pairwise_fold_q.test | RUN | 0.229575 | 0.705255 | 0.895539 | 0.002240 | 0.002068 | 0.002022 |
| mp_sliding_fold.test | RUN | 0.561458 | 4.402221 | 2.685878 | 0.001962 | 0.001787 | 0.002146 |
| mp_sliding_fold_q.test | RUN | 0.543804 | 4.366114 | 2.680612 | 0.001928 | 0.001966 | 0.001815 |
| mp_intersperse.test | RUN | 0.277460 | 1.671549 | 1.331855 | 0.001906 | 0.002050 | 0.002094 |
| mp_split.test | RUN | 0.390188 | 3.207310 | 1.782748 | 0.001873 | 0.002056 | 0.001911 |
| mp_join.test | RUN | 0.313842 | 2.652611 | 1.563630 | 0.001750 | 0.001907 | 0.001928 |
| integral.test | RUN | 0.235786 | 1.211081 | 1.040434 | 0.001905 | 0.002184 | 0.001848 |
| mp_value.test | RUN | 0.016092 | 0.039569 | 0.055899 | 0.000728 | 0.000702 | 0.001918 |
| mp_identity.test | RUN | 0.228513 | 1.104110 | 0.929837 | 0.001908 | 0.001748 | 0.002021 |
| mp_inherit.test | RUN | 0.224082 | 0.809125 | 0.872909 | 0.002017 | 0.001872 | 0.002272 |
| mp_if.test | RUN | 0.221896 | 0.915572 | 0.951804 | 0.001811 | 0.002010 | 0.002156 |
| mp_if_sf.test | RUN | 0.208650 | 0.684696 | 0.812816 | 0.001906 | 0.002264 | 0.002097 |
| mp_eval_if.test | RUN | 0.226835 | 0.951802 | 0.927855 | 0.001796 | 0.001954 | 0.001888 |
| mp_eval_if_sf.test | RUN | 0.214238 | 0.695329 | 0.854823 | 0.001895 | 0.001882 | 0.002084 |
| mp_valid.test | RUN | 0.216974 | 0.733562 | 0.863403 | 0.001737 | 0.001615 | 0.001927 |
| mp_defer.test | RUN | 0.240930 | 1.176728 | 0.991627 | 0.001903 | 0.001884 | 0.002200 |
| mp_quote.test | RUN | 0.245951 | 1.196364 | 1.048669 | 0.001924 | 0.001952 | 0.002129 |
| mp_invoke_q.test | RUN | 0.253909 | 1.545517 | 1.150480 | 0.001942 | 0.002013 | 0.002028 |
| mp_invoke_q_sf.test | RUN | 0.215778 | 0.681092 | 0.800965 | 0.001757 | 0.002122 | 0.002098 |
| mp_quote_trait.test | RUN | 0.231008 | 1.292116 | 0.982446 | 0.001875 | 0.002086 | 0.002174 |
| mp_cond.test | RUN | 0.220684 | 0.808361 | 0.878247 | 0.001720 | 0.001947 | 0.001738 |
| mp_cond_sf.test | RUN | 0.216899 | 0.683726 | 0.774762 | 0.001887 | 0.002012 | 0.002044 |
| mp_not_fn.test | RUN | 0.217220 | 0.696170 | 0.855655 | 0.001730 | 0.001972 | 0.002141 |
| mp_eval_if_not.test | RUN | 0.228967 | 0.957502 | 0.917071 | 0.002078 | 0.002222 | 0.002078 |
| mp_eval_or.test | RUN | 0.220630 | 0.561908 | 0.853247 | 0.001893 | 0.002114 | 0.002101 |
| mp_compose.test | RUN | 0.237350 | 1.596044 | 1.097191 | 0.001382 | 0.001743 | 0.001772 |
| mp_valid_and_true.test | RUN | 0.226823 | 0.825730 | 0.829027 | 0.001760 | 0.002232 | 0.002068 |
| mp_compose_sf.test | COMPILE | 0.053997 | 0.103632 | 0.185951 | — | — | — |
| integer_sequence.test | RUN | 0.256727 | 1.551419 | 1.155874 | 0.001846 | 0.002096 | 0.001691 |
| tuple_for_each.test | RUN | 0.224568 | 0.598637 | 0.899796 | 0.001783 | 0.001904 | 0.002012 |
| tuple_for_each_cx.test | COMPILE | 0.042908 | 0.084576 | 0.160608 | — | — | — |
| tuple_apply.test | RUN | 0.226753 | 0.598672 | 0.913826 | 0.002010 | 0.002176 | 0.002124 |
| tuple_apply_cx.test | COMPILE | 0.062459 | 0.118132 | 0.221478 | — | — | — |
| construct_from_tuple.test | RUN | 0.227313 | 0.649368 | 0.863395 | 0.001597 | 0.002174 | 0.001941 |
| construct_from_tuple_cx.test | COMPILE | 0.060599 | 0.127795 | 0.202960 | — | — | — |
| tuple_transform.test | RUN | 0.360689 | 1.288334 | 1.771016 | 0.001962 | 0.001704 | 0.001934 |
| tuple_transform_2.test | RUN | 0.313084 | 0.954101 | 1.607542 | 0.001946 | 0.001849 | 0.001533 |
| tuple_transform_cx.test | COMPILE | 0.054572 | 0.120240 | 0.213548 | — | — | — |
| mp_set_contains.test | RUN | 0.231222 | 0.848549 | 0.921325 | 0.001825 | 0.001950 | 0.002025 |
| mp_set_push_back.test | RUN | 0.295714 | 2.530906 | 1.459508 | 0.002028 | 0.002046 | 0.002028 |
| mp_set_push_front.test | RUN | 0.365451 | 2.977450 | 1.676389 | 0.001816 | 0.001949 | 0.001729 |
| mp_is_set.test | RUN | 0.229992 | 0.828922 | 0.948172 | 0.001819 | 0.002100 | 0.001998 |
| mp_set_union.test | RUN | 0.287704 | 2.123954 | 1.404268 | 0.001916 | 0.002142 | 0.002115 |
| mp_set_union_sf.test | RUN | 0.214013 | 0.667329 | 0.858236 | 0.001702 | 0.002141 | 0.001644 |
| mp_set_difference.test | RUN | 0.258239 | 1.666126 | 1.199104 | 0.002036 | 0.001990 | 0.001670 |
| mp_set_difference_sf.test | RUN | 0.212730 | 0.707636 | 0.858054 | 0.001631 | 0.001886 | 0.001798 |
| mp_set_intersection.test | RUN | 0.257004 | 1.641552 | 1.180840 | 0.001882 | 0.001766 | 0.002024 |
| mp_set_intersection_sf.test | RUN | 0.218608 | 0.684839 | 0.881224 | 0.001768 | 0.001952 | 0.002144 |
| mp_all.test | RUN | 0.234267 | 0.842708 | 0.889739 | 0.001952 | 0.002094 | 0.001968 |
| mp_all_2.test | RUN | 0.595206 | 1.763136 | 1.932150 | 0.002050 | 0.002443 | 0.001970 |
| mp_and.test | RUN | 0.227838 | 0.796434 | 0.864295 | 0.001874 | 0.001886 | 0.001945 |
| mp_any.test | RUN | 0.214750 | 0.813111 | 0.909816 | 0.001725 | 0.002074 | 0.001968 |
| mp_any_2.test | RUN | 0.622537 | 1.728134 | 1.881632 | 0.001925 | 0.002101 | 0.001971 |
| mp_or.test | RUN | 0.221718 | 0.829229 | 0.837009 | 0.001851 | 0.001730 | 0.001849 |
| mp_same.test | RUN | 0.443230 | 1.359215 | 1.301964 | 0.001675 | 0.001831 | 0.001800 |
| mp_plus.test | RUN | 0.234614 | 0.964576 | 0.996348 | 0.001700 | 0.001848 | 0.001791 |
| mp_less.test | RUN | 0.220088 | 0.824565 | 0.906055 | 0.002015 | 0.002120 | 0.001616 |
| mp_min.test | RUN | 0.216291 | 0.768435 | 0.878386 | 0.001909 | 0.002104 | 0.002034 |
| mp_max.test | RUN | 0.220432 | 0.844566 | 0.895576 | 0.001746 | 0.001887 | 0.001995 |
| mp_similar.test | RUN | 0.220931 | 0.832894 | 0.905930 | 0.001845 | 0.001970 | 0.001962 |
| mp_map_find.test | RUN | 0.263645 | 1.498561 | 1.153668 | 0.002004 | 0.001764 | 0.001957 |
| mp_map_find_2.test | RUN | 0.243424 | 0.610489 | 1.015779 | 0.001657 | 0.001711 | 0.002022 |
| mp_map_find_3.test | RUN | 0.243024 | 0.587344 | 1.005547 | 0.001624 | 0.001933 | 0.001918 |
| mp_map_find_4.test | RUN | 0.226749 | 0.555943 | 0.906494 | 0.001989 | 0.001724 | 0.001788 |
| mp_map_contains.test | RUN | 0.232178 | 0.843668 | 0.924684 | 0.002060 | 0.002102 | 0.002090 |
| mp_map_insert.test | RUN | 0.303116 | 2.767157 | 1.567415 | 0.001594 | 0.002079 | 0.001811 |
| mp_map_replace.test | RUN | 0.400776 | 3.161318 | 1.825074 | 0.001916 | 0.002002 | 0.001894 |
| mp_map_erase.test | RUN | 0.295688 | 2.321096 | 1.480996 | 0.001861 | 0.002116 | 0.001932 |
| mp_map_update.test | RUN | 0.262509 | 1.540474 | 1.202897 | 0.001998 | 0.001950 | 0.001792 |
| mp_map_update_q.test | RUN | 0.265672 | 1.537990 | 1.213229 | 0.001818 | 0.001517 | 0.001945 |
| mp_map_keys.test | RUN | 0.257892 | 1.387346 | 1.185893 | 0.002113 | 0.002102 | 0.001681 |
| mp_is_map.test | RUN | 0.244607 | 0.833481 | 0.961314 | 0.001882 | 0.001806 | 0.001792 |
| mp_bind.test | RUN | 0.292152 | 2.419245 | 1.359880 | 0.001992 | 0.001825 | 0.002044 |
| mp_bind_q.test | RUN | 0.264160 | 1.516066 | 1.157902 | 0.001808 | 0.001928 | 0.001713 |
| mp_bind_front.test | RUN | 0.253069 | 1.677460 | 1.085106 | 0.001850 | 0.002046 | 0.001756 |
| mp_bind_back.test | RUN | 0.254077 | 1.669089 | 1.111147 | 0.002048 | 0.002014 | 0.001662 |
| mp_lambda.test | RUN | 0.567660 | 4.919826 | 2.737495 | 0.001824 | 0.001396 | 0.001638 |
| mpl.test | RUN | 0.506878 | 1.323697 | 2.258625 | 0.001934 | 0.001903 | 0.001654 |
| mpl_list.test | RUN | 0.287636 | 1.018005 | 1.114893 | 0.001920 | 0.001744 | 0.001824 |
| mpl_tuple.test | RUN | 0.286603 | 1.029766 | 1.113637 | 0.001711 | 0.001820 | 0.001858 |
| version.test | RUN | 0.146377 | 0.372207 | 0.557321 | 0.001892 | 0.002152 | 0.001836 |
| mp11_version.test | RUN | 0.181512 | 0.435566 | 0.664098 | 0.001772 | 0.001804 | 0.001877 |
| list_version.test | RUN | 0.152573 | 0.385998 | 0.580390 | 0.001528 | 0.002028 | 0.001597 |
| algorithm_version.test | RUN | 0.169365 | 0.403294 | 0.625068 | 0.001944 | 0.001749 | 0.001828 |
| integral_version.test | RUN | 0.148498 | 0.372793 | 0.560105 | 0.001785 | 0.001852 | 0.001822 |
| utility_version.test | RUN | 0.148785 | 0.378287 | 0.553832 | 0.001822 | 0.001809 | 0.001569 |
| function_version.test | RUN | 0.152954 | 0.379475 | 0.601670 | 0.001823 | 0.001958 | 0.001770 |
| map_version.test | RUN | 0.166328 | 0.407309 | 0.633324 | 0.001911 | 0.001922 | 0.001866 |
| set_version.test | RUN | 0.154441 | 0.387184 | 0.597583 | 0.001824 | 0.001682 | 0.001746 |
| bind_version.test | RUN | 0.166521 | 0.409364 | 0.638216 | 0.001853 | 0.001936 | 0.002040 |
| integer_sequence_version.test | RUN | 0.147289 | 0.373600 | 0.578864 | 0.001488 | 0.001912 | 0.001263 |
| tuple_version.test | RUN | 0.154723 | 0.407794 | 0.601458 | 0.001604 | 0.002008 | 0.001478 |
| mpl_version.test | RUN | 0.124334 | 0.297639 | 0.409465 | 0.001473 | 0.001508 | 0.001416 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.993× | 0.990×, 0.996× | 0.995× |
| clang | 1.097× | 1.110×, 1.084× | 1.003× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1360 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/thinkoid/cppgm/actions/runs/44661842949).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| algorithm_version.test | 10 | 0.001152s | 0.001132s | 0.001175s | byte equality observed |
| bind_version.test | 10 | 0.001160s | 0.001124s | 0.001174s | byte equality observed |
| construct_from_tuple.test | 10 | 0.001154s | 0.001161s | 0.001164s | byte equality observed |
| function_version.test | 10 | 0.001149s | 0.001131s | 0.001188s | byte equality observed |
| integer_sequence.test | 10 | 0.001150s | 0.001152s | 0.001280s | byte equality observed |
| integer_sequence_version.test | 10 | 0.001153s | 0.001146s | 0.001285s | byte equality observed |
| integral.test | 10 | 0.001145s | 0.001154s | 0.001322s | byte equality observed |
| integral_version.test | 10 | 0.001156s | 0.001146s | 0.001262s | byte equality observed |
| list_version.test | 10 | 0.001143s | 0.001148s | 0.001267s | byte equality observed |
| map_version.test | 10 | 0.001148s | 0.001159s | 0.001244s | byte equality observed |
| mp11_version.test | 10 | 0.001145s | 0.001128s | 0.001274s | byte equality observed |
| mp_all.test | 10 | 0.001162s | 0.001135s | 0.001248s | byte equality observed |
| mp_all_2.test | 10 | 0.001214s | 0.001146s | 0.001247s | byte equality observed |
| mp_all_of.test | 10 | 0.001209s | 0.001151s | 0.001250s | byte equality observed |
| mp_all_of_q.test | 10 | 0.001264s | 0.001153s | 0.001303s | byte equality observed |
| mp_and.test | 10 | 0.001241s | 0.001146s | 0.001241s | byte equality observed |
| mp_any.test | 10 | 0.001237s | 0.001166s | 0.001266s | byte equality observed |
| mp_any_2.test | 10 | 0.001231s | 0.001136s | 0.001278s | byte equality observed |
| mp_any_of.test | 10 | 0.001262s | 0.001143s | 0.001306s | byte equality observed |
| mp_any_of_q.test | 10 | 0.001273s | 0.001151s | 0.001297s | byte equality observed |
| mp_append.test | 10 | 0.001254s | 0.001167s | 0.001246s | byte equality observed |
| mp_append_2.test | 10 | 0.001319s | 0.001149s | 0.001355s | byte equality observed |
| mp_append_3.test | 10 | 0.000586s | 0.000561s | 0.001188s | byte equality observed |
| mp_append_sf.test | 10 | 0.001247s | 0.001206s | 0.001242s | byte equality observed |
| mp_apply_q.test | 10 | 0.001269s | 0.001225s | 0.001254s | byte equality observed |
| mp_apply_q_sf.test | 10 | 0.001232s | 0.001262s | 0.001258s | byte equality observed |
| mp_assign.test | 10 | 0.001251s | 0.001293s | 0.001236s | byte equality observed |
| mp_assign_2.test | 10 | 0.000566s | 0.000549s | 0.001190s | byte equality observed |
| mp_at.test | 10 | 0.001256s | 0.001280s | 0.001243s | byte equality observed |
| mp_at_2.test | 10 | 0.000576s | 0.000582s | 0.001218s | byte equality observed |
| mp_at_sf.test | 10 | 0.001227s | 0.001209s | 0.001249s | byte equality observed |
| mp_back.test | 10 | 0.001270s | 0.001277s | 0.001240s | byte equality observed |
| mp_back_2.test | 10 | 0.000554s | 0.000557s | 0.001232s | byte equality observed |
| mp_bind.test | 10 | 0.001249s | 0.001221s | 0.001255s | byte equality observed |
| mp_bind_back.test | 10 | 0.001272s | 0.001209s | 0.001276s | byte equality observed |
| mp_bind_front.test | 10 | 0.001283s | 0.001261s | 0.001252s | byte equality observed |
| mp_bind_q.test | 10 | 0.001264s | 0.001216s | 0.001267s | byte equality observed |
| mp_clear.test | 10 | 0.001269s | 0.001240s | 0.001275s | byte equality observed |
| mp_clear_2.test | 10 | 0.000567s | 0.000553s | 0.001281s | byte equality observed |
| mp_compose.test | 10 | 0.001235s | 0.001206s | 0.001263s | byte equality observed |
| mp_cond.test | 10 | 0.001275s | 0.001244s | 0.001242s | byte equality observed |
| mp_cond_sf.test | 10 | 0.001283s | 0.001262s | 0.001341s | byte equality observed |
| mp_contains.test | 10 | 0.001263s | 0.001271s | 0.001284s | byte equality observed |
| mp_copy_if.test | 10 | 0.001243s | 0.001252s | 0.001264s | byte equality observed |
| mp_copy_if_q.test | 10 | 0.001274s | 0.001232s | 0.001289s | byte equality observed |
| mp_count.test | 10 | 0.001221s | 0.001206s | 0.001289s | byte equality observed |
| mp_count_if.test | 10 | 0.001256s | 0.001196s | 0.001279s | byte equality observed |
| mp_count_if_q.test | 10 | 0.001238s | 0.001238s | 0.001263s | byte equality observed |
| mp_defer.test | 10 | 0.001223s | 0.001205s | 0.001298s | byte equality observed |
| mp_drop.test | 10 | 0.001256s | 0.001274s | 0.001252s | byte equality observed |
| mp_drop_2.test | 10 | 0.000558s | 0.000590s | 0.001240s | byte equality observed |
| mp_empty.test | 10 | 0.001249s | 0.001287s | 0.001213s | byte equality observed |
| mp_empty_2.test | 10 | 0.000571s | 0.000566s | 0.001224s | byte equality observed |
| mp_erase.test | 10 | 0.001285s | 0.001253s | 0.001233s | byte equality observed |
| mp_erase_2.test | 10 | 0.000572s | 0.000569s | 0.001319s | byte equality observed |
| mp_eval_if.test | 10 | 0.001228s | 0.001244s | 0.001232s | byte equality observed |
| mp_eval_if_not.test | 10 | 0.001241s | 0.001230s | 0.001276s | byte equality observed |
| mp_eval_if_sf.test | 10 | 0.001213s | 0.001253s | 0.001234s | byte equality observed |
| mp_eval_or.test | 10 | 0.001235s | 0.001238s | 0.001287s | byte equality observed |
| mp_fill.test | 10 | 0.001258s | 0.001233s | 0.001276s | byte equality observed |
| mp_fill_2.test | 10 | 0.000568s | 0.000564s | 0.001202s | byte equality observed |
| mp_filter.test | 10 | 0.001257s | 0.001198s | 0.001226s | byte equality observed |
| mp_find.test | 10 | 0.001232s | 0.001264s | 0.001279s | byte equality observed |
| mp_find_if.test | 10 | 0.001240s | 0.001206s | 0.001307s | byte equality observed |
| mp_find_if_q.test | 10 | 0.001250s | 0.001229s | 0.001285s | byte equality observed |
| mp_flatten.test | 10 | 0.001225s | 0.001264s | 0.001298s | byte equality observed |
| mp_fold.test | 10 | 0.001270s | 0.001226s | 0.001326s | byte equality observed |
| mp_fold_q.test | 10 | 0.001272s | 0.001207s | 0.001253s | byte equality observed |
| mp_fold_q_sf.test | 10 | 0.001263s | 0.001264s | 0.001279s | byte equality observed |
| mp_for_each.test | 10 | 0.001212s | 0.001228s | 0.001272s | byte equality observed |
| mp_from_sequence.test | 10 | 0.001220s | 0.001236s | 0.001262s | byte equality observed |
| mp_from_sequence_2.test | 10 | 0.001233s | 0.001233s | 0.001262s | byte equality observed |
| mp_from_sequence_3.test | 10 | 0.001234s | 0.001241s | 0.001309s | byte equality observed |
| mp_front.test | 10 | 0.001260s | 0.001252s | 0.001329s | byte equality observed |
| mp_front_2.test | 10 | 0.000562s | 0.000569s | 0.001326s | byte equality observed |
| mp_identity.test | 10 | 0.001263s | 0.001225s | 0.001279s | byte equality observed |
| mp_if.test | 10 | 0.001251s | 0.001259s | 0.001324s | byte equality observed |
| mp_if_sf.test | 10 | 0.001284s | 0.001226s | 0.001335s | byte equality observed |
| mp_inherit.test | 10 | 0.001226s | 0.001251s | 0.001299s | byte equality observed |
| mp_insert.test | 10 | 0.001279s | 0.001239s | 0.001280s | byte equality observed |
| mp_insert_2.test | 10 | 0.000587s | 0.000577s | 0.001295s | byte equality observed |
| mp_intersperse.test | 10 | 0.001225s | 0.001235s | 0.001276s | byte equality observed |
| mp_invoke_q.test | 10 | 0.001224s | 0.001237s | 0.001258s | byte equality observed |
| mp_invoke_q_sf.test | 10 | 0.001277s | 0.001231s | 0.001237s | byte equality observed |
| mp_iota.test | 10 | 0.001272s | 0.001201s | 0.001288s | byte equality observed |
| mp_iota_2.test | 10 | 0.001234s | 0.001243s | 0.001324s | byte equality observed |
| mp_is_list.test | 10 | 0.001262s | 0.001220s | 0.001273s | byte equality observed |
| mp_is_map.test | 10 | 0.001232s | 0.001259s | 0.001244s | byte equality observed |
| mp_is_set.test | 10 | 0.001274s | 0.001229s | 0.001295s | byte equality observed |
| mp_is_value_list.test | 10 | 0.001264s | 0.001189s | 0.001283s | byte equality observed |
| mp_iterate.test | 10 | 0.001256s | 0.001177s | 0.001324s | byte equality observed |
| mp_join.test | 10 | 0.001245s | 0.001239s | 0.001276s | byte equality observed |
| mp_lambda.test | 10 | 0.001269s | 0.001280s | 0.001253s | byte equality observed |
| mp_less.test | 10 | 0.001209s | 0.001291s | 0.001285s | byte equality observed |
| mp_list_c.test | 10 | 0.001229s | 0.001190s | 0.001244s | byte equality observed |
| mp_list_v.test | 10 | 0.000586s | 0.000576s | 0.001232s | byte equality observed |
| mp_map_contains.test | 10 | 0.001255s | 0.001243s | 0.001241s | byte equality observed |
| mp_map_erase.test | 10 | 0.001223s | 0.001217s | 0.001282s | byte equality observed |
| mp_map_find.test | 10 | 0.001250s | 0.001284s | 0.001282s | byte equality observed |
| mp_map_find_2.test | 10 | 0.001273s | 0.001227s | 0.001310s | byte equality observed |
| mp_map_find_3.test | 10 | 0.001256s | 0.001231s | 0.001262s | byte equality observed |
| mp_map_find_4.test | 10 | 0.001277s | 0.001216s | 0.001316s | byte equality observed |
| mp_map_insert.test | 10 | 0.001248s | 0.001232s | 0.001292s | byte equality observed |
| mp_map_keys.test | 10 | 0.001275s | 0.001269s | 0.001248s | byte equality observed |
| mp_map_replace.test | 10 | 0.001287s | 0.001230s | 0.001248s | byte equality observed |
| mp_map_update.test | 10 | 0.001283s | 0.001221s | 0.001303s | byte equality observed |
| mp_map_update_q.test | 10 | 0.001256s | 0.001226s | 0.001271s | byte equality observed |
| mp_max.test | 10 | 0.001249s | 0.001279s | 0.001293s | byte equality observed |
| mp_max_element.test | 10 | 0.001256s | 0.001259s | 0.001315s | byte equality observed |
| mp_max_element_2.test | 10 | 0.000577s | 0.000556s | 0.001323s | byte equality observed |
| mp_max_element_q.test | 10 | 0.001245s | 0.001251s | 0.001244s | byte equality observed |
| mp_max_element_q_2.test | 10 | 0.000577s | 0.000570s | 0.001256s | byte equality observed |
| mp_min.test | 10 | 0.001236s | 0.001228s | 0.001261s | byte equality observed |
| mp_min_element.test | 10 | 0.001236s | 0.001243s | 0.001246s | byte equality observed |
| mp_min_element_2.test | 10 | 0.000586s | 0.000581s | 0.001254s | byte equality observed |
| mp_min_element_q.test | 10 | 0.001271s | 0.001244s | 0.001243s | byte equality observed |
| mp_min_element_q_2.test | 10 | 0.000567s | 0.000576s | 0.001218s | byte equality observed |
| mp_none_of.test | 10 | 0.001220s | 0.001208s | 0.001298s | byte equality observed |
| mp_none_of_q.test | 10 | 0.001252s | 0.001233s | 0.001261s | byte equality observed |
| mp_not_fn.test | 10 | 0.001216s | 0.001223s | 0.001234s | byte equality observed |
| mp_nth_element.test | 10 | 0.001245s | 0.001271s | 0.001262s | byte equality observed |
| mp_nth_element_q.test | 10 | 0.001266s | 0.001247s | 0.001208s | byte equality observed |
| mp_or.test | 10 | 0.001256s | 0.001265s | 0.001283s | byte equality observed |
| mp_pairwise_fold.test | 10 | 0.001228s | 0.001316s | 0.001314s | byte equality observed |
| mp_pairwise_fold_q.test | 10 | 0.001272s | 0.001261s | 0.001265s | byte equality observed |
| mp_partial_sum.test | 10 | 0.001272s | 0.001277s | 0.001259s | byte equality observed |
| mp_partition.test | 10 | 0.001229s | 0.001216s | 0.001257s | byte equality observed |
| mp_partition_q.test | 10 | 0.001230s | 0.001233s | 0.001301s | byte equality observed |
| mp_plus.test | 10 | 0.001233s | 0.001246s | 0.001249s | byte equality observed |
| mp_pop_back.test | 10 | 0.001278s | 0.001277s | 0.001231s | byte equality observed |
| mp_pop_back_2.test | 10 | 0.000567s | 0.000574s | 0.001279s | byte equality observed |
| mp_pop_front.test | 10 | 0.001270s | 0.001256s | 0.001190s | byte equality observed |
| mp_pop_front_2.test | 10 | 0.000573s | 0.000563s | 0.001215s | byte equality observed |
| mp_power_set.test | 10 | 0.001219s | 0.001274s | 0.001213s | byte equality observed |
| mp_product.test | 10 | 0.001237s | 0.001268s | 0.001258s | byte equality observed |
| mp_push_back.test | 10 | 0.001262s | 0.001239s | 0.001282s | byte equality observed |
| mp_push_back_2.test | 10 | 0.000568s | 0.000564s | 0.001223s | byte equality observed |
| mp_push_front.test | 10 | 0.001259s | 0.001234s | 0.001231s | byte equality observed |
| mp_push_front_2.test | 10 | 0.000571s | 0.000562s | 0.001200s | byte equality observed |
| mp_quote.test | 10 | 0.001264s | 0.001229s | 0.001251s | byte equality observed |
| mp_quote_trait.test | 10 | 0.001256s | 0.001266s | 0.001310s | byte equality observed |
| mp_remove.test | 10 | 0.001278s | 0.001262s | 0.001268s | byte equality observed |
| mp_remove_if.test | 10 | 0.001238s | 0.001291s | 0.001282s | byte equality observed |
| mp_remove_if_q.test | 10 | 0.001295s | 0.001260s | 0.001273s | byte equality observed |
| mp_rename.test | 10 | 0.001249s | 0.001266s | 0.001277s | byte equality observed |
| mp_rename_2.test | 10 | 0.000604s | 0.000557s | 0.001226s | byte equality observed |
| mp_rename_v.test | 10 | 0.000575s | 0.000577s | 0.001236s | byte equality observed |
| mp_repeat.test | 10 | 0.001275s | 0.001293s | 0.001259s | byte equality observed |
| mp_repeat_2.test | 10 | 0.000567s | 0.000587s | 0.001253s | byte equality observed |
| mp_repeat_3.test | 10 | 0.001251s | 0.001239s | 0.001238s | byte equality observed |
| mp_replace.test | 10 | 0.001275s | 0.001218s | 0.001303s | byte equality observed |
| mp_replace_at.test | 10 | 0.001234s | 0.001235s | 0.001277s | byte equality observed |
| mp_replace_at_c.test | 10 | 0.001216s | 0.001224s | 0.001274s | byte equality observed |
| mp_replace_front.test | 10 | 0.001275s | 0.001261s | 0.001312s | byte equality observed |
| mp_replace_front_2.test | 10 | 0.000573s | 0.000576s | 0.001301s | byte equality observed |
| mp_replace_if.test | 10 | 0.001242s | 0.001220s | 0.001285s | byte equality observed |
| mp_replace_if_q.test | 10 | 0.001234s | 0.001259s | 0.001290s | byte equality observed |
| mp_replace_second.test | 10 | 0.001275s | 0.001261s | 0.001265s | byte equality observed |
| mp_replace_second_2.test | 10 | 0.000565s | 0.000568s | 0.001246s | byte equality observed |
| mp_replace_third.test | 10 | 0.001260s | 0.001258s | 0.001263s | byte equality observed |
| mp_replace_third_2.test | 10 | 0.000589s | 0.000553s | 0.001254s | byte equality observed |
| mp_reverse.test | 10 | 0.001310s | 0.001205s | 0.001294s | byte equality observed |
| mp_reverse_fold.test | 10 | 0.001261s | 0.001257s | 0.001292s | byte equality observed |
| mp_reverse_fold_q.test | 10 | 0.001256s | 0.001258s | 0.001243s | byte equality observed |
| mp_rotate_left.test | 10 | 0.001253s | 0.001240s | 0.001331s | byte equality observed |
| mp_rotate_right.test | 10 | 0.001270s | 0.001294s | 0.001316s | byte equality observed |
| mp_same.test | 10 | 0.001217s | 0.001257s | 0.001283s | byte equality observed |
| mp_second.test | 10 | 0.001254s | 0.001240s | 0.001254s | byte equality observed |
| mp_second_2.test | 10 | 0.000568s | 0.000558s | 0.001275s | byte equality observed |
| mp_set_contains.test | 10 | 0.001251s | 0.001261s | 0.001305s | byte equality observed |
| mp_set_difference.test | 10 | 0.001268s | 0.001251s | 0.001313s | byte equality observed |
| mp_set_difference_sf.test | 10 | 0.001258s | 0.001313s | 0.001203s | byte equality observed |
| mp_set_intersection.test | 10 | 0.001224s | 0.001241s | 0.001253s | byte equality observed |
| mp_set_intersection_sf.test | 10 | 0.001211s | 0.001174s | 0.001206s | byte equality observed |
| mp_set_push_back.test | 10 | 0.001256s | 0.001208s | 0.001223s | byte equality observed |
| mp_set_push_front.test | 10 | 0.001272s | 0.001211s | 0.001253s | byte equality observed |
| mp_set_union.test | 10 | 0.001258s | 0.001253s | 0.001283s | byte equality observed |
| mp_set_union_sf.test | 10 | 0.001274s | 0.001207s | 0.001227s | byte equality observed |
| mp_similar.test | 10 | 0.001252s | 0.001260s | 0.001271s | byte equality observed |
| mp_size.test | 10 | 0.001257s | 0.001276s | 0.001207s | byte equality observed |
| mp_size_2.test | 10 | 0.000576s | 0.000573s | 0.001266s | byte equality observed |
| mp_slice.test | 10 | 0.001292s | 0.001301s | 0.001230s | byte equality observed |
| mp_slice_2.test | 10 | 0.000580s | 0.000555s | 0.001245s | byte equality observed |
| mp_sliding_fold.test | 10 | 0.001268s | 0.001263s | 0.001258s | byte equality observed |
| mp_sliding_fold_q.test | 10 | 0.001281s | 0.001222s | 0.001255s | byte equality observed |
| mp_sort.test | 10 | 0.001261s | 0.001286s | 0.001266s | byte equality observed |
| mp_sort_q.test | 10 | 0.001232s | 0.001251s | 0.001265s | byte equality observed |
| mp_split.test | 10 | 0.001274s | 0.001244s | 0.001281s | byte equality observed |
| mp_starts_with.test | 10 | 0.001241s | 0.001220s | 0.001258s | byte equality observed |
| mp_starts_with_sf.test | 10 | 0.001266s | 0.001218s | 0.001236s | byte equality observed |
| mp_take.test | 10 | 0.001293s | 0.001278s | 0.001343s | byte equality observed |
| mp_take_2.test | 10 | 0.000578s | 0.000584s | 0.001235s | byte equality observed |
| mp_third.test | 10 | 0.001281s | 0.001267s | 0.001211s | byte equality observed |
| mp_third_2.test | 10 | 0.000567s | 0.000556s | 0.001224s | byte equality observed |
| mp_transform.test | 10 | 0.001267s | 0.001196s | 0.001217s | byte equality observed |
| mp_transform_2.test | 10 | 0.001237s | 0.001227s | 0.001255s | byte equality observed |
| mp_transform_front.test | 10 | 0.001284s | 0.001275s | 0.001189s | byte equality observed |
| mp_transform_front_2.test | 10 | 0.000579s | 0.000554s | 0.001240s | byte equality observed |
| mp_transform_if.test | 10 | 0.001225s | 0.001265s | 0.001249s | byte equality observed |
| mp_transform_if_q.test | 10 | 0.001226s | 0.001219s | 0.001300s | byte equality observed |
| mp_transform_q.test | 10 | 0.001265s | 0.001218s | 0.001267s | byte equality observed |
| mp_transform_q_2.test | 10 | 0.001257s | 0.001188s | 0.001256s | byte equality observed |
| mp_transform_second.test | 10 | 0.001262s | 0.001249s | 0.001263s | byte equality observed |
| mp_transform_second_2.test | 10 | 0.000587s | 0.000574s | 0.001225s | byte equality observed |
| mp_transform_sf.test | 10 | 0.001292s | 0.001209s | 0.001227s | byte equality observed |
| mp_transform_third.test | 10 | 0.001251s | 0.001216s | 0.001269s | byte equality observed |
| mp_transform_third_2.test | 10 | 0.000583s | 0.000574s | 0.001229s | byte equality observed |
| mp_unique.test | 10 | 0.001279s | 0.001246s | 0.001253s | byte equality observed |
| mp_unique_if.test | 10 | 0.001294s | 0.001269s | 0.001265s | byte equality observed |
| mp_unique_if_q.test | 10 | 0.001287s | 0.001306s | 0.001299s | byte equality observed |
| mp_valid.test | 10 | 0.001247s | 0.001271s | 0.001221s | byte equality observed |
| mp_valid_and_true.test | 10 | 0.001277s | 0.001254s | 0.001255s | byte equality observed |
| mp_value.test | 10 | 0.000580s | 0.000571s | 0.001276s | byte equality observed |
| mp_with_index.test | 10 | 0.001678s | 0.001608s | 0.001518s | byte equality observed |
| mp_with_index_cx.test | 10 | 0.000559s | 0.000563s | 0.001224s | byte equality observed |
| mpl.test | 10 | 0.001251s | 0.001205s | 0.001232s | byte equality observed |
| mpl_list.test | 10 | 0.001232s | 0.001246s | 0.001255s | byte equality observed |
| mpl_tuple.test | 10 | 0.001239s | 0.001213s | 0.001280s | byte equality observed |
| mpl_version.test | 10 | 0.001243s | 0.001224s | 0.001305s | byte equality observed |
| set_version.test | 10 | 0.001252s | 0.001284s | 0.001224s | byte equality observed |
| tuple_apply.test | 10 | 0.001279s | 0.001215s | 0.001298s | byte equality observed |
| tuple_for_each.test | 10 | 0.001271s | 0.001231s | 0.001268s | byte equality observed |
| tuple_transform.test | 10 | 0.001252s | 0.001247s | 0.001262s | byte equality observed |
| tuple_transform_2.test | 10 | 0.001279s | 0.001225s | 0.001303s | byte equality observed |
| tuple_version.test | 10 | 0.001232s | 0.001222s | 0.001247s | byte equality observed |
| utility_version.test | 10 | 0.001220s | 0.001258s | 0.001282s | byte equality observed |
| version.test | 10 | 0.001273s | 0.001276s | 0.001249s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/thinkoid/cppgm/actions/runs/44661842949).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
