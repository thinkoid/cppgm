# libs/fusion/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| all.test | RUN | 0.480804 | 0.953274 | 1.596279 | 0.001699 | 0.001790 | 0.002018 |
| any.test | RUN | 0.456629 | 0.904370 | 1.524961 | 0.001808 | 0.001754 | 0.002094 |
| clear.test | RUN | 0.328616 | 0.863164 | 1.205827 | 0.001748 | 0.001781 | 0.002108 |
| copy.test | RUN | 0.277161 | 0.646072 | 0.997204 | 0.001890 | 0.002136 | 0.002074 |
| count.test | RUN | 0.315695 | 0.714094 | 1.065613 | 0.001885 | 0.002068 | 0.001774 |
| count_if.test | RUN | 0.303069 | 0.666323 | 0.984209 | 0.001786 | 0.002090 | 0.001829 |
| erase.test | RUN | 0.416080 | 1.184943 | 1.603608 | 0.001946 | 0.002024 | 0.001933 |
| erase_key.test | RUN | 0.402975 | 1.148579 | 1.487460 | 0.001724 | 0.002007 | 0.002011 |
| filter.test | RUN | 0.369364 | 0.972394 | 1.371620 | 0.002100 | 0.002175 | 0.001887 |
| filter_if.test | RUN | 0.415705 | 1.152660 | 1.610509 | 0.001864 | 0.002055 | 0.002096 |
| find.test | RUN | 0.360638 | 0.831575 | 1.206124 | 0.001686 | 0.001827 | 0.002072 |
| find_if.test | RUN | 0.329801 | 0.737238 | 1.181182 | 0.002051 | 0.002146 | 0.001658 |
| fold.test | RUN | 0.380663 | 0.914162 | 1.411715 | 0.001966 | 0.002096 | 0.002162 |
| for_each.test | RUN | 0.337370 | 0.823951 | 1.193672 | 0.001972 | 0.002186 | 0.002120 |
| insert.test | RUN | 0.499033 | 1.465162 | 1.924150 | 0.001926 | 0.002201 | 0.001802 |
| insert_range.test | RUN | 0.498443 | 1.472974 | 1.960319 | 0.002005 | 0.002032 | 0.001608 |
| iter_fold.test | RUN | 0.585717 | 1.411058 | 2.339865 | 0.002102 | 0.002160 | 0.002131 |
| move.test | RUN | 0.295807 | 0.686217 | 1.023093 | 0.001913 | 0.001850 | 0.001696 |
| none.test | RUN | 0.475015 | 0.970046 | 1.601989 | 0.001692 | 0.002185 | 0.001962 |
| pop_back.test | RUN | 0.453857 | 1.254358 | 1.770400 | 0.001770 | 0.001900 | 0.002325 |
| pop_front.test | RUN | 0.380343 | 1.041791 | 1.441739 | 0.002067 | 0.001780 | 0.001881 |
| push_back.test | RUN | 0.480225 | 1.485807 | 1.939148 | 0.002154 | 0.002112 | 0.001998 |
| push_front.test | RUN | 0.420334 | 1.253041 | 1.595159 | 0.001980 | 0.001943 | 0.002052 |
| remove.test | RUN | 0.475700 | 1.372348 | 1.907712 | 0.001814 | 0.002119 | 0.001916 |
| remove_if.test | RUN | 0.434430 | 1.160398 | 1.631778 | 0.001772 | 0.002086 | 0.002018 |
| replace.test | RUN | 0.406307 | 1.120722 | 1.474645 | 0.002102 | 0.002160 | 0.001796 |
| replace_if.test | RUN | 0.398524 | 1.151354 | 1.477109 | 0.002088 | 0.002169 | 0.002146 |
| reverse_fold.test | RUN | 0.636537 | 1.564349 | 2.527211 | 0.001986 | 0.001877 | 0.001895 |
| reverse_iter_fold.test | RUN | 0.663958 | 1.625602 | 2.670237 | 0.001928 | 0.001982 | 0.001936 |
| reverse.test | RUN | 0.410632 | 1.151048 | 1.527280 | 0.001711 | 0.002200 | 0.001952 |
| segmented_for_each.test | RUN | 0.729522 | 2.200856 | 3.018275 | 0.001833 | 0.001990 | 0.002217 |
| segmented_find.test | RUN | 0.453588 | 1.138744 | 1.747051 | 0.001764 | 0.001800 | 0.001926 |
| segmented_find_if.test | RUN | 0.440238 | 1.163705 | 1.761503 | 0.001830 | 0.001884 | 0.001931 |
| segmented_fold.test | RUN | 0.558444 | 1.547065 | 2.228282 | 0.002116 | 0.002180 | 0.002057 |
| transform.test | RUN | 0.427764 | 1.172073 | 1.643839 | 0.001851 | 0.001972 | 0.001990 |
| join.test | RUN | 0.321605 | 0.737626 | 1.141385 | 0.002124 | 0.002024 | 0.002172 |
| zip.test | RUN | 0.556075 | 1.441853 | 2.165787 | 0.001928 | 0.002127 | 0.001992 |
| zip2.test | RUN | 0.558749 | 1.419755 | 2.091350 | 0.001882 | 0.001837 | 0.002088 |
| zip_ignore.test | RUN | 0.409570 | 0.911339 | 1.404143 | 0.001828 | 0.001924 | 0.001807 |
| flatten.test | RUN | 0.392093 | 1.045465 | 1.426949 | 0.001716 | 0.001841 | 0.002124 |
| ticket-5490.test | COMPILE | 0.210541 | 0.431248 | 0.618940 | — | — | — |
| as_deque.test | RUN | 0.382491 | 1.004083 | 1.492127 | 0.001748 | 0.002092 | 0.002054 |
| as_list.test | RUN | 0.423700 | 1.217037 | 1.624953 | 0.001857 | 0.001932 | 0.002017 |
| as_map.test | RUN | 0.423511 | 1.153843 | 1.615275 | 0.001666 | 0.002177 | 0.002002 |
| as_map_assoc.test | RUN | 0.415734 | 1.098707 | 1.504239 | 0.001897 | 0.002078 | 0.001949 |
| as_set.test | RUN | 0.472432 | 1.353398 | 1.790765 | 0.001756 | 0.001962 | 0.001967 |
| as_vector.test | RUN | 0.423199 | 1.208359 | 1.652432 | 0.001952 | 0.001951 | 0.001663 |
| boost_tuple.test | RUN | 0.422124 | 1.199086 | 1.634705 | 0.001748 | 0.002061 | 0.002150 |
| boost_tuple_iterator.test | RUN | 0.304879 | 0.747146 | 0.998140 | 0.001996 | 0.001507 | 0.002038 |
| cons.test | RUN | 0.546086 | 1.360241 | 1.950926 | 0.001722 | 0.001893 | 0.001884 |
| convert_boost_tuple.test | RUN | 0.340257 | 1.061797 | 1.257920 | 0.001952 | 0.001773 | 0.001934 |
| convert_deque.test | RUN | 0.346468 | 1.016304 | 1.281655 | 0.001898 | 0.001912 | 0.001701 |
| convert_list.test | RUN | 0.348797 | 1.040637 | 1.279605 | 0.001593 | 0.001760 | 0.002058 |
| convert_std_pair.test | RUN | 0.358842 | 1.052098 | 1.290358 | 0.001988 | 0.001785 | 0.001654 |
| convert_std_tuple.test | RUN | 0.341005 | 0.998978 | 1.251141 | 0.001624 | 0.001760 | 0.001930 |
| convert_vector.test | RUN | 0.344441 | 0.994688 | 1.280274 | 0.001417 | 0.001724 | 0.002024 |
| filter_view.test | RUN | 0.410608 | 1.104480 | 1.489126 | 0.002026 | 0.001960 | 0.002170 |
| hash.test | RUN | 0.408009 | 0.979093 | 1.531010 | 0.001926 | 0.001942 | 0.001844 |
| io.test | RUN | 0.421717 | 1.352499 | 1.742221 | 0.001832 | 0.002192 | 0.002484 |
| iterator_range.test | RUN | 0.382808 | 1.025530 | 1.407456 | 0.001896 | 0.002152 | 0.001865 |
| joint_view.test | RUN | 0.534312 | 1.738903 | 2.119274 | 0.002072 | 0.001944 | 0.002130 |
| list_comparison.test | RUN | 0.303186 | 0.757505 | 1.054928 | 0.001905 | 0.002036 | 0.001824 |
| list_construction.test | RUN | 0.303491 | 0.678162 | 1.025393 | 0.001684 | 0.001876 | 0.001802 |
| list_copy.test | RUN | 0.446271 | 1.269410 | 1.723652 | 0.001904 | 0.001958 | 0.001954 |
| list_iterator.test | RUN | 0.301024 | 0.745697 | 1.026021 | 0.002010 | 0.001556 | 0.002065 |
| list_hash.test | RUN | 0.421289 | 1.339751 | 1.472814 | 0.001770 | 0.002111 | 0.001920 |
| list_make.test | RUN | 0.319638 | 0.781790 | 1.134662 | 0.001968 | 0.001727 | 0.001928 |
| list_misc.test | RUN | 0.426688 | 0.932705 | 1.387709 | 0.001900 | 0.002064 | 0.002048 |
| list_mutate.test | RUN | 0.284955 | 0.619658 | 0.957130 | 0.001728 | 0.002206 | 0.002125 |
| list_nest.test | RUN | 0.574637 | 1.686024 | 2.398848 | 0.001678 | 0.001958 | 0.001965 |
| list_tie.test | RUN | 0.298417 | 0.695917 | 1.006804 | 0.002078 | 0.002086 | 0.002072 |
| list_value_at.test | RUN | 0.305115 | 0.678549 | 0.955788 | 0.001831 | 0.002104 | 0.002073 |
| deque_comparison.test | RUN | 0.299603 | 0.759123 | 1.110639 | 0.001420 | 0.001857 | 0.001677 |
| deque_construction.test | RUN | 0.302570 | 0.697272 | 1.033993 | 0.002058 | 0.002108 | 0.002046 |
| deque_copy.test | RUN | 0.436465 | 1.188404 | 1.685302 | 0.001718 | 0.001731 | 0.002101 |
| deque_iterator.test | RUN | 0.298503 | 0.744586 | 1.029205 | 0.001926 | 0.001921 | 0.002144 |
| deque_hash.test | RUN | 0.410597 | 1.345161 | 1.449934 | 0.001564 | 0.002199 | 0.002120 |
| deque_is_constructible.test | COMPILE | 0.164068 | 0.332972 | 0.469388 | — | — | — |
| deque_make.test | RUN | 0.305901 | 0.731586 | 1.072873 | 0.001819 | 0.002080 | 0.002041 |
| deque_misc.test | RUN | 0.395414 | 0.942119 | 1.324121 | 0.001621 | 0.002171 | 0.001694 |
| deque_move.test | RUN | 0.306285 | 0.748158 | 1.062247 | 0.001765 | 0.002052 | 0.001988 |
| deque_mutate.test | RUN | 0.281149 | 0.639297 | 0.911919 | 0.001832 | 0.002006 | 0.002079 |
| deque_nest.test | RUN | 0.853830 | 2.685130 | 3.850750 | 0.001895 | 0.001831 | 0.002006 |
| deque_tie.test | RUN | 0.280817 | 0.697085 | 0.987935 | 0.001728 | 0.001750 | 0.001734 |
| deque_value_at.test | RUN | 0.276404 | 0.631915 | 0.964835 | 0.001748 | 0.002111 | 0.001693 |
| front_extended_deque.test | RUN | 0.421525 | 0.960664 | 1.481457 | 0.002066 | 0.002142 | 0.002127 |
| back_extended_deque.test | RUN | 0.401524 | 1.008117 | 1.407289 | 0.001815 | 0.002014 | 0.002048 |
| make_list.test | RUN | 0.319076 | 0.791544 | 1.103685 | 0.001689 | 0.002106 | 0.002098 |
| make_vector.test | RUN | 0.326884 | 0.757458 | 1.120528 | 0.001972 | 0.002030 | 0.001825 |
| map.test | RUN | 0.406630 | 1.163981 | 1.519760 | 0.002040 | 0.001884 | 0.002039 |
| map_comparison.test | RUN | 0.309913 | 0.736411 | 1.089920 | 0.001657 | 0.002124 | 0.002070 |
| map_construction.test | RUN | 0.314847 | 0.746575 | 1.039118 | 0.001520 | 0.001834 | 0.002026 |
| map_copy.test | RUN | 0.378069 | 0.922087 | 1.284340 | 0.001894 | 0.002141 | 0.002022 |
| map_misc.test | RUN | 0.389252 | 0.909984 | 1.325184 | 0.001729 | 0.002190 | 0.001701 |
| map_move.test | RUN | 0.304185 | 0.769052 | 1.070366 | 0.002134 | 0.001792 | 0.001870 |
| map_mutate.test | RUN | 0.282767 | 0.642085 | 0.923310 | 0.001453 | 0.001784 | 0.001924 |
| map_tie.test | RUN | 0.297287 | 0.641191 | 0.932618 | 0.002002 | 0.001901 | 0.002091 |
| nil.test | RUN | 0.198450 | 0.435786 | 0.672776 | 0.002068 | 0.002072 | 0.001911 |
| nview.test | RUN | 0.391388 | 0.918835 | 1.361447 | 0.001892 | 0.002144 | 0.002115 |
| reverse_view.test | RUN | 0.501889 | 1.479389 | 1.972567 | 0.001858 | 0.002051 | 0.002089 |
| segmented_iterator_range.test | RUN | 0.592912 | 1.767342 | 2.420476 | 0.002033 | 0.002210 | 0.002022 |
| set.test | RUN | 0.378542 | 1.025839 | 1.381754 | 0.001913 | 0.001934 | 0.002140 |
| single_view.test | RUN | 0.345065 | 0.952978 | 1.276818 | 0.002048 | 0.001968 | 0.002165 |
| std_pair.test | RUN | 0.440081 | 1.136157 | 1.579296 | 0.002099 | 0.002012 | 0.001972 |
| boost_array.test | RUN | 0.379474 | 0.808176 | 1.220943 | 0.001608 | 0.001986 | 0.001741 |
| array.test | RUN | 0.370294 | 0.855084 | 1.220307 | 0.002054 | 0.001937 | 0.001683 |
| std_array.test | RUN | 0.370277 | 0.868666 | 1.212383 | 0.001890 | 0.001987 | 0.001822 |
| tuple_comparison.test | RUN | 0.322400 | 0.782837 | 1.149182 | 0.001882 | 0.001849 | 0.001726 |
| tuple_construction.test | RUN | 0.330073 | 0.785461 | 1.146645 | 0.002044 | 0.001705 | 0.001786 |
| tuple_conversion.test | RUN | 0.725008 | 2.329049 | 3.623219 | 0.001801 | 0.001745 | 0.002014 |
| tuple_copy.test | RUN | 0.477755 | 1.378794 | 1.979823 | 0.001746 | 0.002093 | 0.002012 |
| tuple_element.test | RUN | 0.321267 | 0.685353 | 1.049774 | 0.001808 | 0.001825 | 0.002009 |
| tuple_make.test | RUN | 0.340557 | 0.796934 | 1.143847 | 0.001956 | 0.001816 | 0.001666 |
| tuple_misc.test | RUN | 0.436509 | 0.989371 | 1.492854 | 0.001963 | 0.001906 | 0.001839 |
| tuple_mutate.test | RUN | 0.292946 | 0.691581 | 1.019862 | 0.002062 | 0.001836 | 0.002054 |
| tuple_nest.test | RUN | 1.231490 | 4.534836 | 6.488563 | 0.001863 | 0.002077 | 0.001724 |
| tuple_hash.test | RUN | 0.436480 | 1.321050 | 1.490466 | 0.002062 | 0.002036 | 0.001954 |
| tuple_tie.test | RUN | 0.318048 | 0.736408 | 1.128126 | 0.001723 | 0.001812 | 0.002037 |
| tuple_traits__maybe_variadic.test | RUN | 0.353948 | 0.921373 | 1.220205 | 0.001975 | 0.001838 | 0.001898 |
| tuple_traits__no_variadic.test | RUN | 0.384571 | 0.912237 | 1.275796 | 0.001790 | 0.002152 | 0.002082 |
| transform_view.test | RUN | 0.495161 | 1.530416 | 1.961483 | 0.001966 | 0.002053 | 0.001884 |
| identity_view.test | RUN | 0.470690 | 1.367612 | 1.880379 | 0.001930 | 0.002034 | 0.002120 |
| vector_comparison.test | RUN | 0.303098 | 0.766420 | 1.072347 | 0.001747 | 0.001842 | 0.002117 |
| vector_construction.test | RUN | 0.307698 | 0.711294 | 1.102130 | 0.001808 | 0.002170 | 0.002006 |
| vector_conversion.test | RUN | 0.875823 | 3.066138 | 4.579645 | 0.002059 | 0.002146 | 0.002090 |
| vector_copy.test | RUN | 0.479723 | 1.323787 | 1.936361 | 0.001940 | 0.001828 | 0.001893 |
| vector_iterator.test | RUN | 0.293157 | 0.773508 | 1.028321 | 0.001886 | 0.001930 | 0.001779 |
| vector_make.test | RUN | 0.312165 | 0.800774 | 1.084620 | 0.001852 | 0.002242 | 0.001725 |
| vector_misc.test | RUN | 0.400399 | 0.941319 | 1.338117 | 0.001737 | 0.001760 | 0.002176 |
| vector_move.test | RUN | 0.305364 | 0.770784 | 1.066628 | 0.002008 | 0.001852 | 0.001923 |
| vector_mutate.test | RUN | 0.280906 | 0.682262 | 0.945911 | 0.001775 | 0.002187 | 0.002102 |
| vector_n.test | RUN | 0.343909 | 0.774176 | 1.222797 | 0.002136 | 0.002176 | 0.002160 |
| vector_nest.test | RUN | 1.233868 | 4.849625 | 6.642180 | 0.002114 | 0.001998 | 0.001951 |
| vector_hash.test | RUN | 0.413274 | 1.331152 | 1.448428 | 0.001826 | 0.002280 | 0.002001 |
| vector_tie.test | RUN | 0.295161 | 0.706269 | 1.083531 | 0.002109 | 0.002318 | 0.002109 |
| vector_traits__maybe_variadic.test | RUN | 0.314780 | 0.795674 | 1.034665 | 0.002010 | 0.001956 | 0.001986 |
| vector_traits__no_variadic.test | RUN | 0.350680 | 0.885510 | 1.098800 | 0.001282 | 0.001940 | 0.001930 |
| vector_value_at.test | RUN | 0.287186 | 0.640965 | 1.005635 | 0.001926 | 0.002206 | 0.001980 |
| zip_view.test | RUN | 0.601880 | 1.583691 | 2.371079 | 0.001837 | 0.002136 | 0.001796 |
| zip_view2.test | RUN | 0.467484 | 1.263524 | 1.842223 | 0.001709 | 0.001816 | 0.001773 |
| zip_view_ignore.test | RUN | 0.439467 | 1.176569 | 1.676865 | 0.001904 | 0.002102 | 0.001619 |
| repetitive_view.test | RUN | 0.771940 | 1.987828 | 3.122073 | 0.001786 | 0.002103 | 0.002044 |
| deduce_sequence.test | RUN | 0.387392 | 0.872308 | 1.269875 | 0.001735 | 0.002106 | 0.001621 |
| adapt_adt_named.test | RUN | 0.419643 | 1.186935 | 1.552994 | 0.001785 | 0.002054 | 0.002062 |
| adapt_adt_named_empty.test | RUN | 0.367775 | 0.970253 | 1.283703 | 0.001834 | 0.001944 | 0.002046 |
| adapt_adt.test | RUN | 0.472222 | 1.572587 | 1.890765 | 0.001912 | 0.002140 | 0.002203 |
| adapt_adt_empty.test | RUN | 0.365303 | 0.979772 | 1.275812 | 0.001930 | 0.002177 | 0.002054 |
| adapt_assoc_adt_named.test | RUN | 0.471666 | 1.209237 | 1.656075 | 0.001924 | 0.001945 | 0.001756 |
| adapt_assoc_adt_named_empty.test | RUN | 0.368313 | 0.941444 | 1.308251 | 0.001826 | 0.001947 | 0.001844 |
| adapt_assoc_adt.test | RUN | 0.484976 | 1.298437 | 1.803662 | 0.001774 | 0.002021 | 0.002133 |
| adapt_assoc_adt_empty.test | RUN | 0.368571 | 0.937148 | 1.290834 | 0.001812 | 0.001954 | 0.001850 |
| adapt_assoc_struct_named.test | RUN | 0.464395 | 1.245335 | 1.672507 | 0.001748 | 0.001901 | 0.001910 |
| adapt_assoc_struct_named_empty.test | RUN | 0.369298 | 1.002901 | 1.305504 | 0.001852 | 0.002062 | 0.002194 |
| adapt_assoc_struct.test | RUN | 0.419195 | 1.166157 | 1.523675 | 0.001890 | 0.001819 | 0.001945 |
| adapt_assoc_struct_empty.test | RUN | 0.363307 | 0.992337 | 1.255977 | 0.001817 | 0.001950 | 0.002198 |
| adapt_assoc_tpl_adt.test | RUN | 0.500512 | 1.321788 | 1.837317 | 0.001718 | 0.002172 | 0.001830 |
| adapt_assoc_tpl_adt_empty.test | RUN | 0.371601 | 0.979553 | 1.287537 | 0.001709 | 0.002052 | 0.002050 |
| adapt_assoc_tpl_struct.test | RUN | 0.403485 | 1.100325 | 1.519237 | 0.001561 | 0.002157 | 0.001605 |
| adapt_assoc_tpl_struct_empty.test | RUN | 0.368203 | 0.962090 | 1.283356 | 0.001637 | 0.001823 | 0.001950 |
| adapt_struct_named.test | RUN | 0.415856 | 1.158507 | 1.515530 | 0.002065 | 0.002132 | 0.001344 |
| adapt_struct_named_empty.test | RUN | 0.374603 | 0.933495 | 1.297589 | 0.001833 | 0.002205 | 0.001593 |
| adapt_struct.test | RUN | 0.454737 | 1.310641 | 1.716466 | 0.002129 | 0.002030 | 0.002034 |
| adapt_struct_empty.test | RUN | 0.363413 | 0.951466 | 1.297154 | 0.001949 | 0.002162 | 0.002092 |
| adapt_tpl_adt.test | RUN | 0.462229 | 1.546366 | 1.791141 | 0.001780 | 0.002107 | 0.001851 |
| adapt_tpl_adt_empty.test | RUN | 0.379013 | 0.958366 | 1.316923 | 0.001884 | 0.002218 | 0.002092 |
| adapt_tpl_struct.test | RUN | 0.389075 | 1.103639 | 1.400836 | 0.002168 | 0.001893 | 0.002106 |
| adapt_tpl_struct_empty.test | RUN | 0.367689 | 0.945363 | 1.330930 | 0.001931 | 0.001892 | 0.002008 |
| adt_attribute_proxy.test | RUN | 0.432202 | 0.968464 | 1.352116 | 0.001925 | 0.002188 | 0.002213 |
| define_struct.test | RUN | 0.517452 | 1.313751 | 1.801140 | 0.001940 | 0.002196 | 0.001877 |
| define_struct_empty.test | RUN | 0.450821 | 1.077733 | 1.509505 | 0.001928 | 0.001931 | 0.001950 |
| define_struct_move.test | RUN | 0.286905 | 0.611293 | 0.920792 | 0.001826 | 0.002229 | 0.002022 |
| define_struct_inline.test | RUN | 0.536762 | 1.588949 | 2.048688 | 0.001890 | 0.001921 | 0.002110 |
| define_struct_inline_empty.test | RUN | 0.463524 | 1.070993 | 1.493871 | 0.001812 | 0.001939 | 0.001946 |
| define_struct_inline_move.test | RUN | 0.292564 | 0.646339 | 0.950623 | 0.001970 | 0.001908 | 0.001682 |
| define_assoc_struct.test | RUN | 0.501617 | 1.273739 | 1.734036 | 0.001982 | 0.001961 | 0.002172 |
| define_assoc_struct_empty.test | RUN | 0.445793 | 1.072979 | 1.491708 | 0.002128 | 0.002132 | 0.001930 |
| define_assoc_struct_move.test | RUN | 0.298121 | 0.607410 | 0.928289 | 0.002061 | 0.002179 | 0.002045 |
| define_tpl_struct.test | RUN | 0.504162 | 1.253897 | 1.711830 | 0.002070 | 0.002060 | 0.001710 |
| define_tpl_struct_empty.test | RUN | 0.455501 | 1.142427 | 1.490092 | 0.002011 | 0.001950 | 0.002072 |
| define_tpl_struct_move.test | RUN | 0.287075 | 0.612971 | 0.943524 | 0.002060 | 0.001748 | 0.001904 |
| define_tpl_struct_inline.test | RUN | 0.517973 | 1.470224 | 1.883004 | 0.002163 | 0.001803 | 0.002066 |
| define_tpl_struct_inline_empty.test | RUN | 0.451472 | 1.120579 | 1.484943 | 0.001824 | 0.001994 | 0.002108 |
| define_tpl_struct_inline_move.test | RUN | 0.292420 | 0.604890 | 0.958012 | 0.001884 | 0.002204 | 0.002197 |
| define_assoc_tpl_struct.test | RUN | 0.501884 | 1.270470 | 1.768304 | 0.002093 | 0.002094 | 0.002006 |
| define_assoc_tpl_struct_empty.test | RUN | 0.439395 | 1.122878 | 1.506871 | 0.002066 | 0.001941 | 0.001760 |
| define_assoc_tpl_struct_move.test | RUN | 0.285901 | 0.623780 | 0.927055 | 0.001724 | 0.001792 | 0.001918 |
| std_tuple.test | RUN | 0.297800 | 0.697799 | 1.016268 | 0.001860 | 0.001758 | 0.001708 |
| std_tuple_iterator.test | RUN | 0.302476 | 0.738533 | 1.009377 | 0.001766 | 0.002157 | 0.002122 |
| ref_vector.test | RUN | 0.334915 | 0.748327 | 1.097668 | 0.001868 | 0.002198 | 0.002124 |
| flatten_view.test | RUN | 0.352666 | 0.925872 | 1.331900 | 0.001768 | 0.001924 | 0.001670 |
| github-159.test | COMPILE | 0.163579 | 0.334044 | 0.507473 | — | — | — |
| github-176.test | RUN | 0.333220 | 0.852914 | 1.133657 | 0.002039 | 0.001948 | 0.002069 |
| size.test | COMPILE | 0.282944 | 0.608817 | 0.848782 | — | — | — |
| fused.test | RUN | 0.402079 | 0.879781 | 1.298395 | 0.001906 | 0.001863 | 0.002056 |
| fused_function_object.test | RUN | 0.291998 | 0.681949 | 1.017591 | 0.001889 | 0.001768 | 0.001863 |
| fused_procedure.test | RUN | 0.380956 | 0.836414 | 1.247641 | 0.001867 | 0.001870 | 0.001897 |
| unfused.test | RUN | 0.313137 | 0.707329 | 0.997018 | 0.002000 | 0.001892 | 0.001849 |
| unfused_typed.test | RUN | 0.313873 | 0.737187 | 1.041783 | 0.001961 | 0.002056 | 0.002062 |
| make_fused.test | RUN | 0.401750 | 0.901974 | 1.299304 | 0.001980 | 0.001965 | 0.001712 |
| make_fused_function_object.test | RUN | 0.296021 | 0.662711 | 1.014663 | 0.001782 | 0.002088 | 0.001792 |
| make_fused_procedure.test | RUN | 0.401355 | 0.861141 | 1.228767 | 0.001955 | 0.001948 | 0.002092 |
| make_unfused.test | RUN | 0.306082 | 0.666645 | 0.994257 | 0.002023 | 0.002175 | 0.002112 |
| invoke.test | RUN | 0.777314 | 2.417077 | 3.391910 | 0.001845 | 0.002046 | 0.001948 |
| invoke_function_object.test | RUN | 0.367734 | 0.863839 | 1.292553 | 0.002074 | 0.001923 | 0.002178 |
| invoke_procedure.test | RUN | 0.622891 | 1.825636 | 2.465021 | 0.001561 | 0.001896 | 0.001994 |
| swap.test | RUN | 0.463567 | 1.078772 | 1.667910 | 0.001598 | 0.002020 | 0.002096 |
| is_sequence.test | COMPILE | 0.082243 | 0.163663 | 0.199600 | — | — | — |
| is_view.test | COMPILE | 0.077803 | 0.162288 | 0.201657 | — | — | — |
| pair_deque.test | COMPILE | 0.167166 | 0.373368 | 0.509282 | — | — | — |
| pair_list.test | COMPILE | 0.166019 | 0.344927 | 0.456225 | — | — | — |
| pair_map.test | COMPILE | 0.173305 | 0.368438 | 0.527273 | — | — | — |
| pair_set.test | COMPILE | 0.174060 | 0.364426 | 0.498127 | — | — | — |
| pair_vector.test | COMPILE | 0.167203 | 0.360198 | 0.484207 | — | — | — |
| pair_nest.test | COMPILE | 0.068151 | 0.145433 | 0.193434 | — | — | — |
| index_sequence.test | COMPILE | 0.059570 | 0.106189 | 0.135308 | — | — | — |
| and.test | COMPILE | 0.046047 | 0.080756 | 0.098091 | — | — | — |
| tag_of.test | COMPILE | 0.078360 | 0.154099 | 0.183279 | — | — | — |
| unused.test | COMPILE | 0.041204 | 0.095892 | 0.121820 | — | — | — |
| tag_of_fallback.test | COMPILE | 0.080037 | 0.131066 | 0.156569 | — | — | — |
| make_pair_r-value.test | COMPILE | 0.060868 | 0.118065 | 0.191865 | — | — | — |
| quick.test | RUN | 0.203907 | 0.454628 | 0.583344 | 0.000573 | 0.001453 | 0.001558 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 1.000× | 0.994×, 1.007× | 0.999× |
| clang | 1.004× | 1.001×, 1.006× | 1.004× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1359 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/43785224349).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| adapt_adt.test | 10 | 0.001237s | 0.001280s | 0.001269s | byte equality observed |
| adapt_adt_empty.test | 10 | 0.001224s | 0.001287s | 0.001248s | byte equality observed |
| adapt_adt_named.test | 10 | 0.001228s | 0.001276s | 0.001283s | byte equality observed |
| adapt_adt_named_empty.test | 10 | 0.001249s | 0.001212s | 0.001258s | byte equality observed |
| adapt_assoc_adt.test | 10 | 0.001265s | 0.001260s | 0.001224s | byte equality observed |
| adapt_assoc_adt_empty.test | 10 | 0.001331s | 0.001226s | 0.001294s | byte equality observed |
| adapt_assoc_adt_named.test | 10 | 0.001245s | 0.001273s | 0.001273s | byte equality observed |
| adapt_assoc_adt_named_empty.test | 10 | 0.001247s | 0.001267s | 0.001268s | byte equality observed |
| adapt_assoc_struct.test | 10 | 0.001265s | 0.001266s | 0.001245s | byte equality observed |
| adapt_assoc_struct_empty.test | 10 | 0.001293s | 0.001255s | 0.001247s | byte equality observed |
| adapt_assoc_struct_named.test | 10 | 0.001287s | 0.001340s | 0.001301s | byte equality observed |
| adapt_assoc_struct_named_empty.test | 10 | 0.001289s | 0.001275s | 0.001266s | byte equality observed |
| adapt_assoc_tpl_adt.test | 10 | 0.001298s | 0.001271s | 0.001305s | byte equality observed |
| adapt_assoc_tpl_adt_empty.test | 10 | 0.001269s | 0.001250s | 0.001316s | byte equality observed |
| adapt_assoc_tpl_struct.test | 10 | 0.001298s | 0.001339s | 0.001286s | byte equality observed |
| adapt_assoc_tpl_struct_empty.test | 10 | 0.001273s | 0.001259s | 0.001278s | byte equality observed |
| adapt_struct.test | 10 | 0.001303s | 0.001237s | 0.001285s | byte equality observed |
| adapt_struct_empty.test | 10 | 0.001279s | 0.001220s | 0.001264s | byte equality observed |
| adapt_struct_named.test | 10 | 0.001250s | 0.001273s | 0.001309s | byte equality observed |
| adapt_struct_named_empty.test | 10 | 0.001223s | 0.001225s | 0.001240s | byte equality observed |
| adapt_tpl_adt.test | 10 | 0.001313s | 0.001223s | 0.001284s | byte equality observed |
| adapt_tpl_adt_empty.test | 10 | 0.001239s | 0.001263s | 0.001238s | byte equality observed |
| adapt_tpl_struct.test | 10 | 0.001296s | 0.001250s | 0.001301s | byte equality observed |
| adapt_tpl_struct_empty.test | 10 | 0.001268s | 0.001230s | 0.001266s | byte equality observed |
| adt_attribute_proxy.test | 10 | 0.001271s | 0.001218s | 0.001273s | byte equality observed |
| all.test | 10 | 0.001272s | 0.001229s | 0.001272s | byte equality observed |
| any.test | 10 | 0.001253s | 0.001260s | 0.001257s | byte equality observed |
| array.test | 10 | 0.001247s | 0.001217s | 0.001233s | byte equality observed |
| as_deque.test | 10 | 0.001250s | 0.001291s | 0.001262s | byte equality observed |
| as_list.test | 10 | 0.001296s | 0.001263s | 0.001257s | byte equality observed |
| as_map.test | 10 | 0.001311s | 0.001236s | 0.001246s | byte equality observed |
| as_map_assoc.test | 10 | 0.001243s | 0.001230s | 0.001291s | byte equality observed |
| as_set.test | 10 | 0.001272s | 0.001265s | 0.001310s | byte equality observed |
| as_vector.test | 10 | 0.001268s | 0.001261s | 0.001255s | byte equality observed |
| back_extended_deque.test | 10 | 0.001203s | 0.001229s | 0.001225s | byte equality observed |
| boost_array.test | 10 | 0.001197s | 0.001278s | 0.001232s | byte equality observed |
| boost_tuple.test | 10 | 0.001267s | 0.001240s | 0.001258s | byte equality observed |
| boost_tuple_iterator.test | 10 | 0.001267s | 0.001335s | 0.001252s | byte equality observed |
| clear.test | 10 | 0.001254s | 0.001288s | 0.001271s | byte equality observed |
| cons.test | 10 | 0.001270s | 0.001265s | 0.001306s | byte equality observed |
| convert_boost_tuple.test | 10 | 0.001205s | 0.001240s | 0.001264s | byte equality observed |
| convert_deque.test | 10 | 0.001203s | 0.001203s | 0.001269s | byte equality observed |
| convert_list.test | 10 | 0.001240s | 0.001240s | 0.001228s | byte equality observed |
| convert_std_pair.test | 10 | 0.001238s | 0.001265s | 0.001235s | byte equality observed |
| convert_std_tuple.test | 10 | 0.001233s | 0.001304s | 0.001245s | byte equality observed |
| convert_vector.test | 10 | 0.001213s | 0.001197s | 0.001256s | byte equality observed |
| copy.test | 10 | 0.001243s | 0.001239s | 0.001225s | byte equality observed |
| count.test | 10 | 0.001240s | 0.001239s | 0.001243s | byte equality observed |
| count_if.test | 10 | 0.001260s | 0.001251s | 0.001254s | byte equality observed |
| deduce_sequence.test | 10 | 0.001273s | 0.001236s | 0.001254s | byte equality observed |
| define_assoc_struct.test | 10 | 0.001261s | 0.001302s | 0.001296s | byte equality observed |
| define_assoc_struct_empty.test | 10 | 0.001263s | 0.001318s | 0.001268s | byte equality observed |
| define_assoc_struct_move.test | 10 | 0.001228s | 0.001216s | 0.001244s | byte equality observed |
| define_assoc_tpl_struct.test | 10 | 0.001280s | 0.001250s | 0.001261s | byte equality observed |
| define_assoc_tpl_struct_empty.test | 10 | 0.001231s | 0.001252s | 0.001228s | byte equality observed |
| define_assoc_tpl_struct_move.test | 10 | 0.001215s | 0.001244s | 0.001234s | byte equality observed |
| define_struct.test | 10 | 0.001261s | 0.001244s | 0.001297s | byte equality observed |
| define_struct_empty.test | 10 | 0.001235s | 0.001229s | 0.001322s | byte equality observed |
| define_struct_inline.test | 10 | 0.001290s | 0.001243s | 0.001274s | byte equality observed |
| define_struct_inline_empty.test | 10 | 0.001268s | 0.001238s | 0.001300s | byte equality observed |
| define_struct_inline_move.test | 10 | 0.001212s | 0.001233s | 0.001324s | byte equality observed |
| define_struct_move.test | 10 | 0.001226s | 0.001272s | 0.001207s | byte equality observed |
| define_tpl_struct.test | 9 | 0.001282s | 0.001242s | 0.001256s | byte equality observed |
| define_tpl_struct_empty.test | 10 | 0.001280s | 0.001234s | 0.001251s | byte equality observed |
| define_tpl_struct_inline.test | 10 | 0.001242s | 0.001281s | 0.001301s | byte equality observed |
| define_tpl_struct_inline_empty.test | 10 | 0.001254s | 0.001215s | 0.001288s | byte equality observed |
| define_tpl_struct_inline_move.test | 10 | 0.001216s | 0.001240s | 0.001224s | byte equality observed |
| define_tpl_struct_move.test | 10 | 0.001255s | 0.001232s | 0.001272s | byte equality observed |
| deque_comparison.test | 10 | 0.001248s | 0.001244s | 0.001226s | byte equality observed |
| deque_construction.test | 10 | 0.001258s | 0.001193s | 0.001263s | byte equality observed |
| deque_copy.test | 10 | 0.001234s | 0.001231s | 0.001266s | byte equality observed |
| deque_hash.test | 10 | 0.001247s | 0.001257s | 0.001231s | byte equality observed |
| deque_iterator.test | 10 | 0.001247s | 0.001261s | 0.001266s | byte equality observed |
| deque_make.test | 10 | 0.001281s | 0.001248s | 0.001287s | byte equality observed |
| deque_misc.test | 10 | 0.001221s | 0.001295s | 0.001244s | byte equality observed |
| deque_move.test | 8 | 0.001224s | 0.001255s | 0.001246s | byte equality observed |
| deque_mutate.test | 10 | 0.001230s | 0.001219s | 0.001227s | byte equality observed |
| deque_nest.test | 9 | 0.001226s | 0.001241s | 0.001249s | byte equality observed |
| deque_tie.test | 10 | 0.001244s | 0.001251s | 0.001247s | byte equality observed |
| deque_value_at.test | 10 | 0.001263s | 0.001213s | 0.001258s | byte equality observed |
| erase.test | 10 | 0.001313s | 0.001254s | 0.001248s | byte equality observed |
| erase_key.test | 10 | 0.001286s | 0.001316s | 0.001281s | byte equality observed |
| filter.test | 10 | 0.001265s | 0.001252s | 0.001229s | byte equality observed |
| filter_if.test | 10 | 0.001304s | 0.001271s | 0.001220s | byte equality observed |
| filter_view.test | 10 | 0.001269s | 0.001295s | 0.001233s | byte equality observed |
| find.test | 10 | 0.001263s | 0.001325s | 0.001195s | byte equality observed |
| find_if.test | 10 | 0.001243s | 0.001260s | 0.001304s | byte equality observed |
| flatten.test | 10 | 0.001240s | 0.001230s | 0.001284s | byte equality observed |
| flatten_view.test | 9 | 0.001264s | 0.001261s | 0.001245s | byte equality observed |
| fold.test | 8 | 0.001257s | 0.001258s | 0.001299s | byte equality observed |
| for_each.test | 10 | 0.001269s | 0.001273s | 0.001261s | byte equality observed |
| front_extended_deque.test | 10 | 0.001285s | 0.001208s | 0.001235s | byte equality observed |
| fused.test | 10 | 0.001208s | 0.001252s | 0.001224s | byte equality observed |
| fused_function_object.test | 8 | 0.001244s | 0.001205s | 0.001266s | byte equality observed |
| fused_procedure.test | 10 | 0.001265s | 0.001220s | 0.001264s | byte equality observed |
| github-176.test | 10 | 0.001263s | 0.001265s | 0.001266s | byte equality observed |
| hash.test | 10 | 0.001255s | 0.001225s | 0.001312s | byte equality observed |
| identity_view.test | 10 | 0.001245s | 0.001276s | 0.001264s | byte equality observed |
| insert.test | 10 | 0.001339s | 0.001258s | 0.001265s | byte equality observed |
| insert_range.test | 10 | 0.001286s | 0.001256s | 0.001273s | byte equality observed |
| invoke.test | 10 | 0.001268s | 0.001197s | 0.001262s | byte equality observed |
| invoke_function_object.test | 10 | 0.001241s | 0.001255s | 0.001240s | byte equality observed |
| invoke_procedure.test | 10 | 0.001261s | 0.001229s | 0.001219s | byte equality observed |
| io.test | 9 | 0.001381s | 0.001422s | 0.001397s | byte equality observed |
| iter_fold.test | 10 | 0.001278s | 0.001258s | 0.001267s | byte equality observed |
| iterator_range.test | 9 | 0.001252s | 0.001302s | 0.001246s | byte equality observed |
| join.test | 10 | 0.001216s | 0.001223s | 0.001221s | byte equality observed |
| joint_view.test | 10 | 0.001275s | 0.001280s | 0.001292s | byte equality observed |
| list_comparison.test | 10 | 0.001230s | 0.001244s | 0.001215s | byte equality observed |
| list_construction.test | 10 | 0.001213s | 0.001224s | 0.001203s | byte equality observed |
| list_copy.test | 10 | 0.001205s | 0.001221s | 0.001257s | byte equality observed |
| list_hash.test | 10 | 0.001213s | 0.001262s | 0.001224s | byte equality observed |
| list_iterator.test | 10 | 0.001268s | 0.001268s | 0.001293s | byte equality observed |
| list_make.test | 10 | 0.001239s | 0.001206s | 0.001223s | byte equality observed |
| list_misc.test | 10 | 0.001247s | 0.001239s | 0.001278s | byte equality observed |
| list_mutate.test | 10 | 0.001293s | 0.001274s | 0.001203s | byte equality observed |
| list_nest.test | 10 | 0.001245s | 0.001274s | 0.001222s | byte equality observed |
| list_tie.test | 10 | 0.001215s | 0.001240s | 0.001280s | byte equality observed |
| list_value_at.test | 10 | 0.001232s | 0.001190s | 0.001249s | byte equality observed |
| make_fused.test | 10 | 0.001269s | 0.001219s | 0.001216s | byte equality observed |
| make_fused_function_object.test | 10 | 0.001214s | 0.001248s | 0.001223s | byte equality observed |
| make_fused_procedure.test | 10 | 0.001232s | 0.001221s | 0.001238s | byte equality observed |
| make_list.test | 10 | 0.001262s | 0.001218s | 0.001250s | byte equality observed |
| make_unfused.test | 10 | 0.001235s | 0.001204s | 0.001218s | byte equality observed |
| make_vector.test | 10 | 0.001210s | 0.001221s | 0.001211s | byte equality observed |
| map.test | 10 | 0.001280s | 0.001245s | 0.001309s | byte equality observed |
| map_comparison.test | 10 | 0.001221s | 0.001239s | 0.001289s | byte equality observed |
| map_construction.test | 10 | 0.001199s | 0.001258s | 0.001234s | byte equality observed |
| map_copy.test | 10 | 0.001245s | 0.001236s | 0.001282s | byte equality observed |
| map_misc.test | 10 | 0.001275s | 0.001252s | 0.001278s | byte equality observed |
| map_move.test | 7 | 0.001255s | 0.001216s | 0.001296s | byte equality observed |
| map_mutate.test | 10 | 0.001213s | 0.001244s | 0.001248s | byte equality observed |
| map_tie.test | 10 | 0.001233s | 0.001221s | 0.001249s | byte equality observed |
| move.test | 10 | 0.001203s | 0.001214s | 0.001265s | byte equality observed |
| nil.test | 10 | 0.001211s | 0.001253s | 0.001240s | byte equality observed |
| none.test | 10 | 0.001210s | 0.001214s | 0.001285s | byte equality observed |
| nview.test | 10 | 0.001223s | 0.001237s | 0.001227s | byte equality observed |
| pop_back.test | 10 | 0.001232s | 0.001280s | 0.001278s | byte equality observed |
| pop_front.test | 10 | 0.001265s | 0.001267s | 0.001221s | byte equality observed |
| push_back.test | 10 | 0.001312s | 0.001316s | 0.001239s | byte equality observed |
| push_front.test | 10 | 0.001253s | 0.001268s | 0.001263s | byte equality observed |
| quick.test | 10 | 0.000563s | 0.001209s | 0.001193s | byte equality observed |
| ref_vector.test | 10 | 0.001254s | 0.001243s | 0.001218s | byte equality observed |
| remove.test | 10 | 0.001267s | 0.001287s | 0.001291s | byte equality observed |
| remove_if.test | 10 | 0.001274s | 0.001308s | 0.001270s | byte equality observed |
| repetitive_view.test | 10 | 0.001241s | 0.001194s | 0.001239s | byte equality observed |
| replace.test | 10 | 0.001264s | 0.001254s | 0.001250s | byte equality observed |
| replace_if.test | 10 | 0.001273s | 0.001273s | 0.001364s | byte equality observed |
| reverse.test | 10 | 0.001295s | 0.001286s | 0.001287s | byte equality observed |
| reverse_fold.test | 10 | 0.001241s | 0.001280s | 0.001340s | byte equality observed |
| reverse_iter_fold.test | 10 | 0.001245s | 0.001275s | 0.001312s | byte equality observed |
| reverse_view.test | 10 | 0.001258s | 0.001302s | 0.001267s | byte equality observed |
| segmented_find.test | 10 | 0.001225s | 0.001211s | 0.001211s | byte equality observed |
| segmented_find_if.test | 10 | 0.001231s | 0.001240s | 0.001316s | byte equality observed |
| segmented_fold.test | 10 | 0.001248s | 0.001265s | 0.001268s | byte equality observed |
| segmented_for_each.test | 10 | 0.001241s | 0.001238s | 0.001260s | byte equality observed |
| segmented_iterator_range.test | 10 | 0.001320s | 0.001308s | 0.001299s | byte equality observed |
| set.test | 10 | 0.001272s | 0.001277s | 0.001291s | byte equality observed |
| single_view.test | 10 | 0.001274s | 0.001277s | 0.001313s | byte equality observed |
| std_array.test | 10 | 0.001274s | 0.001211s | 0.001231s | byte equality observed |
| std_pair.test | 10 | 0.001240s | 0.001254s | 0.001278s | byte equality observed |
| std_tuple.test | 10 | 0.001254s | 0.001212s | 0.001259s | byte equality observed |
| std_tuple_iterator.test | 10 | 0.001282s | 0.001190s | 0.001202s | byte equality observed |
| swap.test | 8 | 0.001241s | 0.001213s | 0.001205s | byte equality observed |
| transform.test | 10 | 0.001263s | 0.001204s | 0.001234s | byte equality observed |
| transform_view.test | 10 | 0.001267s | 0.001240s | 0.001272s | byte equality observed |
| tuple_comparison.test | 10 | 0.001225s | 0.001209s | 0.001263s | byte equality observed |
| tuple_construction.test | 10 | 0.001250s | 0.001275s | 0.001250s | byte equality observed |
| tuple_conversion.test | 10 | 0.001271s | 0.001199s | 0.001258s | byte equality observed |
| tuple_copy.test | 10 | 0.001249s | 0.001232s | 0.001240s | byte equality observed |
| tuple_element.test | 10 | 0.001265s | 0.001256s | 0.001261s | byte equality observed |
| tuple_hash.test | 10 | 0.001259s | 0.001269s | 0.001244s | byte equality observed |
| tuple_make.test | 10 | 0.001263s | 0.001240s | 0.001262s | byte equality observed |
| tuple_misc.test | 10 | 0.001242s | 0.001252s | 0.001265s | byte equality observed |
| tuple_mutate.test | 10 | 0.001257s | 0.001265s | 0.001246s | byte equality observed |
| tuple_nest.test | 10 | 0.001259s | 0.001203s | 0.001243s | byte equality observed |
| tuple_tie.test | 10 | 0.001220s | 0.001245s | 0.001225s | byte equality observed |
| tuple_traits__maybe_variadic.test | 10 | 0.001226s | 0.001220s | 0.001267s | byte equality observed |
| tuple_traits__no_variadic.test | 10 | 0.001266s | 0.001224s | 0.001242s | byte equality observed |
| unfused.test | 10 | 0.001201s | 0.001271s | 0.001236s | byte equality observed |
| unfused_typed.test | 9 | 0.001246s | 0.001247s | 0.001245s | byte equality observed |
| vector_comparison.test | 10 | 0.001300s | 0.001218s | 0.001231s | byte equality observed |
| vector_construction.test | 10 | 0.001259s | 0.001257s | 0.001307s | byte equality observed |
| vector_conversion.test | 10 | 0.001232s | 0.001249s | 0.001212s | byte equality observed |
| vector_copy.test | 10 | 0.001263s | 0.001250s | 0.001226s | byte equality observed |
| vector_hash.test | 10 | 0.001232s | 0.001274s | 0.001251s | byte equality observed |
| vector_iterator.test | 10 | 0.001217s | 0.001251s | 0.001256s | byte equality observed |
| vector_make.test | 10 | 0.001224s | 0.001238s | 0.001251s | byte equality observed |
| vector_misc.test | 10 | 0.001271s | 0.001237s | 0.001251s | byte equality observed |
| vector_move.test | 10 | 0.001236s | 0.001258s | 0.001214s | byte equality observed |
| vector_mutate.test | 10 | 0.001248s | 0.001218s | 0.001278s | byte equality observed |
| vector_n.test | 10 | 0.001263s | 0.001259s | 0.001270s | byte equality observed |
| vector_nest.test | 10 | 0.001263s | 0.001192s | 0.001256s | byte equality observed |
| vector_tie.test | 10 | 0.001276s | 0.001217s | 0.001199s | byte equality observed |
| vector_traits__maybe_variadic.test | 10 | 0.001247s | 0.001236s | 0.001238s | byte equality observed |
| vector_traits__no_variadic.test | 10 | 0.001228s | 0.001225s | 0.001268s | byte equality observed |
| vector_value_at.test | 10 | 0.001248s | 0.001230s | 0.001201s | byte equality observed |
| zip.test | 10 | 0.001268s | 0.001217s | 0.001195s | byte equality observed |
| zip2.test | 10 | 0.001245s | 0.001256s | 0.001235s | byte equality observed |
| zip_ignore.test | 10 | 0.001238s | 0.001253s | 0.001203s | byte equality observed |
| zip_view.test | 10 | 0.001193s | 0.001233s | 0.001252s | byte equality observed |
| zip_view2.test | 10 | 0.001233s | 0.001259s | 0.001215s | byte equality observed |
| zip_view_ignore.test | 10 | 0.001207s | 0.001208s | 0.001218s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/43785224349).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
