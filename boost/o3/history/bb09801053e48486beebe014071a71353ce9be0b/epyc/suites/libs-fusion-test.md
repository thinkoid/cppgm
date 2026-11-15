# libs/fusion/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| all.test | RUN | 0.439659 | 0.949682 | 1.305337 | 0.001786 | 0.001870 | 0.001969 |
| any.test | RUN | 0.425247 | 0.884051 | 1.247207 | 0.001816 | 0.001890 | 0.001944 |
| clear.test | RUN | 0.309381 | 0.809740 | 1.015450 | 0.001821 | 0.002118 | 0.002170 |
| copy.test | RUN | 0.265269 | 0.604886 | 0.827105 | 0.001883 | 0.001974 | 0.002016 |
| count.test | RUN | 0.300241 | 0.670634 | 0.914982 | 0.002190 | 0.002248 | 0.002124 |
| count_if.test | RUN | 0.280121 | 0.627707 | 0.821696 | 0.001421 | 0.002175 | 0.002057 |
| erase.test | RUN | 0.392898 | 1.105054 | 1.344114 | 0.001900 | 0.001988 | 0.002123 |
| erase_key.test | RUN | 0.382933 | 1.087089 | 1.281916 | 0.001986 | 0.001850 | 0.001816 |
| filter.test | RUN | 0.348961 | 0.937780 | 1.173192 | 0.002054 | 0.002206 | 0.002025 |
| filter_if.test | RUN | 0.386682 | 1.108814 | 1.371495 | 0.001890 | 0.001926 | 0.002115 |
| find.test | RUN | 0.337955 | 0.733756 | 1.049696 | 0.002148 | 0.002012 | 0.001859 |
| find_if.test | RUN | 0.328622 | 0.692000 | 0.958958 | 0.001703 | 0.001882 | 0.002040 |
| fold.test | RUN | 0.358099 | 0.852345 | 1.194924 | 0.001956 | 0.002176 | 0.001957 |
| for_each.test | RUN | 0.320210 | 0.782021 | 1.030806 | 0.002015 | 0.002132 | 0.001993 |
| insert.test | RUN | 0.452864 | 1.374786 | 1.633206 | 0.002127 | 0.001970 | 0.001897 |
| insert_range.test | RUN | 0.448107 | 1.360675 | 1.653932 | 0.002000 | 0.001822 | 0.001938 |
| iter_fold.test | RUN | 0.543021 | 1.299152 | 1.990113 | 0.002030 | 0.002260 | 0.002155 |
| move.test | RUN | 0.273789 | 0.625972 | 0.865964 | 0.002255 | 0.002034 | 0.001681 |
| none.test | RUN | 0.438392 | 0.902986 | 1.296232 | 0.001906 | 0.002132 | 0.002170 |
| pop_back.test | RUN | 0.418829 | 1.194549 | 1.472538 | 0.001863 | 0.002114 | 0.002168 |
| pop_front.test | RUN | 0.362255 | 0.956178 | 1.218138 | 0.002156 | 0.002146 | 0.001894 |
| push_back.test | RUN | 0.452072 | 1.397627 | 1.597449 | 0.002106 | 0.002193 | 0.001874 |
| push_front.test | RUN | 0.407501 | 1.160967 | 1.362464 | 0.001617 | 0.002041 | 0.002116 |
| remove.test | RUN | 0.437953 | 1.285999 | 1.617649 | 0.001916 | 0.001660 | 0.001779 |
| remove_if.test | RUN | 0.409152 | 1.099570 | 1.391828 | 0.002015 | 0.002143 | 0.001891 |
| replace.test | RUN | 0.378130 | 1.056901 | 1.283370 | 0.002028 | 0.002096 | 0.001750 |
| replace_if.test | RUN | 0.385244 | 1.075607 | 1.264919 | 0.002016 | 0.002135 | 0.002200 |
| reverse_fold.test | RUN | 0.590014 | 1.439790 | 2.172955 | 0.002040 | 0.001992 | 0.001767 |
| reverse_iter_fold.test | RUN | 0.618014 | 1.482648 | 2.272184 | 0.002132 | 0.001826 | 0.002134 |
| reverse.test | RUN | 0.372650 | 1.080681 | 1.295195 | 0.002230 | 0.002314 | 0.002114 |
| segmented_for_each.test | RUN | 0.647707 | 2.045418 | 2.620285 | 0.001899 | 0.002122 | 0.001914 |
| segmented_find.test | RUN | 0.400943 | 1.043642 | 1.467098 | 0.001781 | 0.001818 | 0.002059 |
| segmented_find_if.test | RUN | 0.408257 | 1.047502 | 1.487728 | 0.002048 | 0.001844 | 0.002070 |
| segmented_fold.test | RUN | 0.503542 | 1.426705 | 1.895391 | 0.002234 | 0.002132 | 0.002142 |
| transform.test | RUN | 0.405805 | 1.137328 | 1.368703 | 0.001796 | 0.002054 | 0.002105 |
| join.test | RUN | 0.298788 | 0.710004 | 0.944492 | 0.001933 | 0.002117 | 0.002103 |
| zip.test | RUN | 0.518219 | 1.311732 | 1.827893 | 0.002076 | 0.002117 | 0.002108 |
| zip2.test | RUN | 0.500052 | 1.290594 | 1.735671 | 0.001948 | 0.002216 | 0.001783 |
| zip_ignore.test | RUN | 0.389109 | 0.859584 | 1.171255 | 0.002040 | 0.002221 | 0.002025 |
| flatten.test | RUN | 0.361767 | 0.972705 | 1.192985 | 0.001947 | 0.002250 | 0.002120 |
| ticket-5490.test | COMPILE | 0.196483 | 0.417625 | 0.515108 | — | — | — |
| as_deque.test | RUN | 0.366638 | 0.892835 | 1.263808 | 0.002026 | 0.002168 | 0.002134 |
| as_list.test | RUN | 0.407430 | 1.128978 | 1.337451 | 0.001959 | 0.002050 | 0.002038 |
| as_map.test | RUN | 0.388071 | 1.117008 | 1.341103 | 0.001810 | 0.002185 | 0.002048 |
| as_map_assoc.test | RUN | 0.399194 | 1.007063 | 1.290960 | 0.001862 | 0.002087 | 0.002151 |
| as_set.test | RUN | 0.445391 | 1.292003 | 1.588779 | 0.002242 | 0.001957 | 0.002060 |
| as_vector.test | RUN | 0.405029 | 1.131582 | 1.392463 | 0.001862 | 0.001917 | 0.002093 |
| boost_tuple.test | RUN | 0.406384 | 1.157415 | 1.374217 | 0.001738 | 0.001941 | 0.002054 |
| boost_tuple_iterator.test | RUN | 0.280263 | 0.689567 | 0.871293 | 0.001864 | 0.001884 | 0.002162 |
| cons.test | RUN | 0.513654 | 1.263446 | 1.647162 | 0.002010 | 0.001902 | 0.002174 |
| convert_boost_tuple.test | RUN | 0.327765 | 0.972025 | 1.063569 | 0.001893 | 0.002027 | 0.001796 |
| convert_deque.test | RUN | 0.324893 | 0.978592 | 1.089668 | 0.001861 | 0.001906 | 0.002140 |
| convert_list.test | RUN | 0.325256 | 0.992402 | 1.083309 | 0.001850 | 0.001790 | 0.001962 |
| convert_std_pair.test | RUN | 0.338112 | 0.980713 | 1.058306 | 0.001909 | 0.002086 | 0.001967 |
| convert_std_tuple.test | RUN | 0.320188 | 0.961734 | 1.081373 | 0.001883 | 0.001869 | 0.002115 |
| convert_vector.test | RUN | 0.321935 | 0.971731 | 1.086597 | 0.001840 | 0.002155 | 0.002132 |
| filter_view.test | RUN | 0.388989 | 1.027146 | 1.259953 | 0.002052 | 0.001950 | 0.001996 |
| hash.test | RUN | 0.383184 | 0.914470 | 1.229947 | 0.001635 | 0.002265 | 0.002014 |
| io.test | RUN | 0.403251 | 1.292348 | 1.467101 | 0.002057 | 0.002271 | 0.002335 |
| iterator_range.test | RUN | 0.363976 | 0.994518 | 1.208545 | 0.001644 | 0.002010 | 0.001934 |
| joint_view.test | RUN | 0.498423 | 1.620824 | 1.841200 | 0.002197 | 0.001686 | 0.001871 |
| list_comparison.test | RUN | 0.284603 | 0.704710 | 0.885255 | 0.002098 | 0.001857 | 0.001918 |
| list_construction.test | RUN | 0.284357 | 0.649704 | 0.864468 | 0.001700 | 0.002176 | 0.001767 |
| list_copy.test | RUN | 0.424561 | 1.194425 | 1.521429 | 0.002076 | 0.001936 | 0.002038 |
| list_iterator.test | RUN | 0.281132 | 0.658563 | 0.877088 | 0.001973 | 0.002214 | 0.001806 |
| list_hash.test | RUN | 0.375409 | 1.276022 | 1.221925 | 0.001940 | 0.002284 | 0.002016 |
| list_make.test | RUN | 0.296195 | 0.732828 | 0.954309 | 0.001937 | 0.001989 | 0.001873 |
| list_misc.test | RUN | 0.384632 | 0.831869 | 1.140322 | 0.002050 | 0.001998 | 0.002105 |
| list_mutate.test | RUN | 0.265188 | 0.580593 | 0.753338 | 0.001646 | 0.002104 | 0.002072 |
| list_nest.test | RUN | 0.516778 | 1.659010 | 2.090020 | 0.001715 | 0.001987 | 0.001933 |
| list_tie.test | RUN | 0.282540 | 0.686755 | 0.855587 | 0.002100 | 0.002062 | 0.002106 |
| list_value_at.test | RUN | 0.271203 | 0.593577 | 0.798427 | 0.001930 | 0.001986 | 0.002140 |
| deque_comparison.test | RUN | 0.281017 | 0.731315 | 0.935355 | 0.001898 | 0.002086 | 0.001832 |
| deque_construction.test | RUN | 0.283968 | 0.649874 | 0.861188 | 0.002160 | 0.002184 | 0.001748 |
| deque_copy.test | RUN | 0.408458 | 1.091719 | 1.426770 | 0.001650 | 0.002034 | 0.002086 |
| deque_iterator.test | RUN | 0.282517 | 0.701631 | 0.833043 | 0.001924 | 0.001561 | 0.002000 |
| deque_hash.test | RUN | 0.386324 | 1.253843 | 1.248868 | 0.001944 | 0.002297 | 0.002146 |
| deque_is_constructible.test | COMPILE | 0.157120 | 0.309511 | 0.406900 | — | — | — |
| deque_make.test | RUN | 0.285122 | 0.694157 | 0.893587 | 0.001948 | 0.002086 | 0.002090 |
| deque_misc.test | RUN | 0.373484 | 0.861439 | 1.133580 | 0.001816 | 0.002048 | 0.002108 |
| deque_move.test | RUN | 0.293812 | 0.693734 | 0.840425 | 0.001711 | 0.001922 | 0.001569 |
| deque_mutate.test | RUN | 0.260797 | 0.583942 | 0.760539 | 0.002086 | 0.002196 | 0.002096 |
| deque_nest.test | RUN | 0.791156 | 2.634113 | 3.302624 | 0.001990 | 0.001776 | 0.001838 |
| deque_tie.test | RUN | 0.279998 | 0.619823 | 0.865316 | 0.001876 | 0.002004 | 0.002078 |
| deque_value_at.test | RUN | 0.268445 | 0.636086 | 0.785084 | 0.001826 | 0.002035 | 0.001826 |
| front_extended_deque.test | RUN | 0.384385 | 0.884710 | 1.180357 | 0.001954 | 0.002204 | 0.002146 |
| back_extended_deque.test | RUN | 0.388609 | 0.877128 | 1.259498 | 0.001962 | 0.002207 | 0.002129 |
| make_list.test | RUN | 0.300906 | 0.753504 | 0.914459 | 0.002018 | 0.001851 | 0.002092 |
| make_vector.test | RUN | 0.303214 | 0.740425 | 0.911383 | 0.001866 | 0.001692 | 0.001848 |
| map.test | RUN | 0.384194 | 1.085876 | 1.314110 | 0.002096 | 0.002064 | 0.001804 |
| map_comparison.test | RUN | 0.290504 | 0.715280 | 0.894404 | 0.001813 | 0.002091 | 0.001964 |
| map_construction.test | RUN | 0.293080 | 0.687333 | 0.886558 | 0.001867 | 0.001940 | 0.002118 |
| map_copy.test | RUN | 0.350452 | 0.873764 | 1.103899 | 0.001879 | 0.002246 | 0.002098 |
| map_misc.test | RUN | 0.374056 | 0.848208 | 1.125137 | 0.001802 | 0.002183 | 0.001869 |
| map_move.test | RUN | 0.293490 | 0.725795 | 0.904030 | 0.002037 | 0.002274 | 0.002079 |
| map_mutate.test | RUN | 0.265647 | 0.584992 | 0.798884 | 0.001816 | 0.002163 | 0.001833 |
| map_tie.test | RUN | 0.275746 | 0.591567 | 0.782866 | 0.001993 | 0.001921 | 0.002036 |
| nil.test | RUN | 0.186946 | 0.421399 | 0.535447 | 0.002067 | 0.002058 | 0.001994 |
| nview.test | RUN | 0.369374 | 0.852166 | 1.185214 | 0.001984 | 0.002206 | 0.002065 |
| reverse_view.test | RUN | 0.467610 | 1.379352 | 1.673779 | 0.002070 | 0.002128 | 0.002150 |
| segmented_iterator_range.test | RUN | 0.556008 | 1.655660 | 2.067212 | 0.002244 | 0.002066 | 0.002174 |
| set.test | RUN | 0.366730 | 0.971436 | 1.168871 | 0.001989 | 0.002004 | 0.002125 |
| single_view.test | RUN | 0.321407 | 0.888620 | 1.103067 | 0.002168 | 0.001892 | 0.002117 |
| std_pair.test | RUN | 0.416351 | 1.073440 | 1.356992 | 0.002066 | 0.002216 | 0.001985 |
| boost_array.test | RUN | 0.348918 | 0.753542 | 0.984820 | 0.002053 | 0.002228 | 0.002080 |
| array.test | RUN | 0.347708 | 0.782096 | 1.004292 | 0.001924 | 0.002047 | 0.002026 |
| std_array.test | RUN | 0.344147 | 0.786793 | 0.994658 | 0.002045 | 0.001949 | 0.002136 |
| tuple_comparison.test | RUN | 0.317497 | 0.715195 | 0.931482 | 0.002080 | 0.002086 | 0.002046 |
| tuple_construction.test | RUN | 0.315938 | 0.715542 | 0.940783 | 0.002007 | 0.001952 | 0.001895 |
| tuple_conversion.test | RUN | 0.696278 | 2.221783 | 3.127069 | 0.001812 | 0.001859 | 0.001701 |
| tuple_copy.test | RUN | 0.461547 | 1.311014 | 1.688632 | 0.002130 | 0.001772 | 0.001746 |
| tuple_element.test | RUN | 0.289045 | 0.641242 | 0.869381 | 0.001856 | 0.001849 | 0.001938 |
| tuple_make.test | RUN | 0.320529 | 0.758096 | 0.954051 | 0.001898 | 0.002026 | 0.001854 |
| tuple_misc.test | RUN | 0.408097 | 0.907868 | 1.233876 | 0.001900 | 0.002240 | 0.002044 |
| tuple_mutate.test | RUN | 0.281568 | 0.645700 | 0.847328 | 0.002203 | 0.001947 | 0.001984 |
| tuple_nest.test | RUN | 1.142979 | 4.366459 | 5.659186 | 0.001641 | 0.002104 | 0.001987 |
| tuple_hash.test | RUN | 0.400406 | 1.265566 | 1.253100 | 0.002028 | 0.001956 | 0.001686 |
| tuple_tie.test | RUN | 0.297814 | 0.679988 | 0.925930 | 0.001956 | 0.002173 | 0.002106 |
| tuple_traits__maybe_variadic.test | RUN | 0.331308 | 0.857779 | 1.021591 | 0.001800 | 0.001926 | 0.002058 |
| tuple_traits__no_variadic.test | RUN | 0.366923 | 0.850148 | 1.041686 | 0.002086 | 0.002128 | 0.002191 |
| transform_view.test | RUN | 0.467090 | 1.381680 | 1.677182 | 0.002065 | 0.001897 | 0.001970 |
| identity_view.test | RUN | 0.456004 | 1.341021 | 1.560761 | 0.001937 | 0.001838 | 0.002124 |
| vector_comparison.test | RUN | 0.301346 | 0.713677 | 0.888968 | 0.001767 | 0.001832 | 0.002057 |
| vector_construction.test | RUN | 0.287309 | 0.669266 | 0.952677 | 0.001865 | 0.002098 | 0.001882 |
| vector_conversion.test | RUN | 0.803160 | 2.913511 | 3.904106 | 0.002172 | 0.002134 | 0.002110 |
| vector_copy.test | RUN | 0.443530 | 1.245868 | 1.636139 | 0.001759 | 0.001814 | 0.002033 |
| vector_iterator.test | RUN | 0.279283 | 0.703696 | 0.848137 | 0.002066 | 0.001918 | 0.002066 |
| vector_make.test | RUN | 0.289032 | 0.734982 | 0.903807 | 0.001769 | 0.002002 | 0.001989 |
| vector_misc.test | RUN | 0.375532 | 0.874301 | 1.192494 | 0.001565 | 0.001972 | 0.001812 |
| vector_move.test | RUN | 0.292988 | 0.768932 | 0.876252 | 0.002096 | 0.002032 | 0.001614 |
| vector_mutate.test | RUN | 0.264775 | 0.600955 | 0.774868 | 0.001834 | 0.001838 | 0.001868 |
| vector_n.test | RUN | 0.330142 | 0.743093 | 1.043889 | 0.002578 | 0.002258 | 0.002153 |
| vector_nest.test | RUN | 1.148276 | 4.535210 | 5.706043 | 0.002147 | 0.002160 | 0.001959 |
| vector_hash.test | RUN | 0.394082 | 1.268821 | 1.248197 | 0.001964 | 0.002219 | 0.001761 |
| vector_tie.test | RUN | 0.271409 | 0.662400 | 0.861068 | 0.001973 | 0.002014 | 0.002026 |
| vector_traits__maybe_variadic.test | RUN | 0.303035 | 0.765718 | 0.937910 | 0.002109 | 0.002214 | 0.002059 |
| vector_traits__no_variadic.test | RUN | 0.332897 | 0.810465 | 0.947632 | 0.001933 | 0.002088 | 0.002018 |
| vector_value_at.test | RUN | 0.275309 | 0.592092 | 0.819185 | 0.001818 | 0.001897 | 0.001744 |
| zip_view.test | RUN | 0.559233 | 1.430549 | 2.108978 | 0.002036 | 0.002014 | 0.002139 |
| zip_view2.test | RUN | 0.443011 | 1.161643 | 1.555745 | 0.002134 | 0.001960 | 0.001974 |
| zip_view_ignore.test | RUN | 0.417726 | 1.078012 | 1.428157 | 0.001751 | 0.001792 | 0.001839 |
| repetitive_view.test | RUN | 0.722594 | 1.865906 | 2.651994 | 0.002120 | 0.001962 | 0.001744 |
| deduce_sequence.test | RUN | 0.336559 | 0.806862 | 1.070489 | 0.001734 | 0.002174 | 0.001977 |
| adapt_adt_named.test | RUN | 0.405847 | 1.097050 | 1.361874 | 0.001892 | 0.002080 | 0.002014 |
| adapt_adt_named_empty.test | RUN | 0.365205 | 0.879215 | 1.112256 | 0.001983 | 0.002152 | 0.002042 |
| adapt_adt.test | RUN | 0.451897 | 1.497109 | 1.631060 | 0.002142 | 0.002286 | 0.002062 |
| adapt_adt_empty.test | RUN | 0.351067 | 0.941865 | 1.133418 | 0.002167 | 0.002146 | 0.001757 |
| adapt_assoc_adt_named.test | RUN | 0.466384 | 1.137462 | 1.439279 | 0.001932 | 0.002099 | 0.002193 |
| adapt_assoc_adt_named_empty.test | RUN | 0.359309 | 0.889522 | 1.124866 | 0.002132 | 0.001899 | 0.002025 |
| adapt_assoc_adt.test | RUN | 0.460742 | 1.234901 | 1.533039 | 0.002014 | 0.002099 | 0.002050 |
| adapt_assoc_adt_empty.test | RUN | 0.348197 | 0.900493 | 1.097722 | 0.001960 | 0.002140 | 0.002084 |
| adapt_assoc_struct_named.test | RUN | 0.444947 | 1.130395 | 1.422345 | 0.001662 | 0.001900 | 0.002098 |
| adapt_assoc_struct_named_empty.test | RUN | 0.359923 | 0.896328 | 1.092385 | 0.002045 | 0.001997 | 0.002188 |
| adapt_assoc_struct.test | RUN | 0.405852 | 1.101164 | 1.330768 | 0.001950 | 0.002175 | 0.001899 |
| adapt_assoc_struct_empty.test | RUN | 0.347672 | 0.907291 | 1.098218 | 0.001984 | 0.001751 | 0.002156 |
| adapt_assoc_tpl_adt.test | RUN | 0.485763 | 1.214654 | 1.528476 | 0.001820 | 0.002110 | 0.002160 |
| adapt_assoc_tpl_adt_empty.test | RUN | 0.364938 | 0.889664 | 1.125666 | 0.002004 | 0.002182 | 0.002080 |
| adapt_assoc_tpl_struct.test | RUN | 0.396651 | 1.074470 | 1.299594 | 0.001967 | 0.001883 | 0.001891 |
| adapt_assoc_tpl_struct_empty.test | RUN | 0.349413 | 0.930776 | 1.136141 | 0.002080 | 0.001903 | 0.001740 |
| adapt_struct_named.test | RUN | 0.403855 | 1.100918 | 1.278328 | 0.002056 | 0.002018 | 0.002209 |
| adapt_struct_named_empty.test | RUN | 0.353137 | 0.927880 | 1.113437 | 0.001909 | 0.001956 | 0.002108 |
| adapt_struct.test | RUN | 0.431952 | 1.242813 | 1.498558 | 0.002110 | 0.002274 | 0.002163 |
| adapt_struct_empty.test | RUN | 0.350369 | 0.910747 | 1.081869 | 0.002204 | 0.002248 | 0.002106 |
| adapt_tpl_adt.test | RUN | 0.447904 | 1.412031 | 1.554188 | 0.001921 | 0.002204 | 0.002145 |
| adapt_tpl_adt_empty.test | RUN | 0.359491 | 0.899717 | 1.086164 | 0.001928 | 0.002135 | 0.002093 |
| adapt_tpl_struct.test | RUN | 0.378835 | 1.021545 | 1.217736 | 0.002083 | 0.002095 | 0.002084 |
| adapt_tpl_struct_empty.test | RUN | 0.356776 | 0.917218 | 1.134876 | 0.001875 | 0.002279 | 0.002098 |
| adt_attribute_proxy.test | RUN | 0.401498 | 0.896319 | 1.154837 | 0.001987 | 0.002376 | 0.002076 |
| define_struct.test | RUN | 0.487702 | 1.237849 | 1.552673 | 0.002094 | 0.002092 | 0.002032 |
| define_struct_empty.test | RUN | 0.415997 | 1.002481 | 1.302127 | 0.001937 | 0.001989 | 0.001952 |
| define_struct_move.test | RUN | 0.277796 | 0.595420 | 0.750328 | 0.002078 | 0.001840 | 0.002024 |
| define_struct_inline.test | RUN | 0.502073 | 1.477327 | 1.739092 | 0.002008 | 0.002007 | 0.001948 |
| define_struct_inline_empty.test | RUN | 0.423009 | 1.008942 | 1.304507 | 0.001948 | 0.001911 | 0.001943 |
| define_struct_inline_move.test | RUN | 0.270113 | 0.608442 | 0.790024 | 0.001873 | 0.001899 | 0.002025 |
| define_assoc_struct.test | RUN | 0.468038 | 1.185873 | 1.490852 | 0.002071 | 0.002220 | 0.001991 |
| define_assoc_struct_empty.test | RUN | 0.421447 | 1.008682 | 1.308821 | 0.002010 | 0.002286 | 0.002133 |
| define_assoc_struct_move.test | RUN | 0.268669 | 0.564342 | 0.782125 | 0.002052 | 0.002002 | 0.002075 |
| define_tpl_struct.test | RUN | 0.462567 | 1.199703 | 1.442392 | 0.002071 | 0.002090 | 0.002144 |
| define_tpl_struct_empty.test | RUN | 0.427412 | 1.012340 | 1.323466 | 0.002250 | 0.002209 | 0.001986 |
| define_tpl_struct_move.test | RUN | 0.274871 | 0.588882 | 0.759360 | 0.001878 | 0.001931 | 0.001928 |
| define_tpl_struct_inline.test | RUN | 0.488184 | 1.399671 | 1.654078 | 0.002016 | 0.001918 | 0.002099 |
| define_tpl_struct_inline_empty.test | RUN | 0.421270 | 0.996675 | 1.298011 | 0.001918 | 0.001994 | 0.002004 |
| define_tpl_struct_inline_move.test | RUN | 0.278717 | 0.615447 | 0.793183 | 0.002073 | 0.002062 | 0.001789 |
| define_assoc_tpl_struct.test | RUN | 0.472823 | 1.209040 | 1.465485 | 0.001925 | 0.002237 | 0.001922 |
| define_assoc_tpl_struct_empty.test | RUN | 0.432554 | 1.008133 | 1.283623 | 0.001880 | 0.002191 | 0.002104 |
| define_assoc_tpl_struct_move.test | RUN | 0.274924 | 0.598720 | 0.779875 | 0.001913 | 0.002284 | 0.002068 |
| std_tuple.test | RUN | 0.287648 | 0.631900 | 0.855119 | 0.001914 | 0.001846 | 0.001971 |
| std_tuple_iterator.test | RUN | 0.290604 | 0.704207 | 0.817169 | 0.001842 | 0.002186 | 0.001998 |
| ref_vector.test | RUN | 0.322530 | 0.704326 | 0.947223 | 0.002063 | 0.002136 | 0.002038 |
| flatten_view.test | RUN | 0.341904 | 0.858585 | 1.119998 | 0.002096 | 0.002064 | 0.002040 |
| github-159.test | COMPILE | 0.153846 | 0.317242 | 0.388873 | — | — | — |
| github-176.test | RUN | 0.312495 | 0.770363 | 0.889750 | 0.001946 | 0.001997 | 0.001984 |
| size.test | COMPILE | 0.266706 | 0.557371 | 0.726958 | — | — | — |
| fused.test | RUN | 0.381646 | 0.813535 | 1.107598 | 0.001949 | 0.002224 | 0.002020 |
| fused_function_object.test | RUN | 0.285920 | 0.612340 | 0.822056 | 0.001932 | 0.002038 | 0.001801 |
| fused_procedure.test | RUN | 0.359971 | 0.799047 | 1.041040 | 0.001830 | 0.002124 | 0.001804 |
| unfused.test | RUN | 0.290612 | 0.643057 | 0.846125 | 0.001950 | 0.002192 | 0.002105 |
| unfused_typed.test | RUN | 0.290870 | 0.679975 | 0.870477 | 0.001845 | 0.002203 | 0.001852 |
| make_fused.test | RUN | 0.380849 | 0.823380 | 1.045359 | 0.001769 | 0.001850 | 0.002144 |
| make_fused_function_object.test | RUN | 0.285964 | 0.634472 | 0.857749 | 0.001834 | 0.002098 | 0.002109 |
| make_fused_procedure.test | RUN | 0.364645 | 0.792334 | 1.063244 | 0.002108 | 0.002132 | 0.001575 |
| make_unfused.test | RUN | 0.285868 | 0.619409 | 0.835077 | 0.002084 | 0.002217 | 0.002068 |
| invoke.test | RUN | 0.717519 | 2.218009 | 2.873547 | 0.001919 | 0.001952 | 0.001942 |
| invoke_function_object.test | RUN | 0.339007 | 0.809939 | 1.081111 | 0.002150 | 0.002148 | 0.002080 |
| invoke_procedure.test | RUN | 0.571437 | 1.700372 | 2.205746 | 0.001766 | 0.001847 | 0.002059 |
| swap.test | RUN | 0.434279 | 1.066300 | 1.303543 | 0.001867 | 0.002068 | 0.001732 |
| is_sequence.test | COMPILE | 0.078160 | 0.154627 | 0.167172 | — | — | — |
| is_view.test | COMPILE | 0.074851 | 0.153308 | 0.175002 | — | — | — |
| pair_deque.test | COMPILE | 0.159974 | 0.347466 | 0.409977 | — | — | — |
| pair_list.test | COMPILE | 0.154215 | 0.331570 | 0.404571 | — | — | — |
| pair_map.test | COMPILE | 0.161971 | 0.344034 | 0.423292 | — | — | — |
| pair_set.test | COMPILE | 0.163864 | 0.340154 | 0.411654 | — | — | — |
| pair_vector.test | COMPILE | 0.162326 | 0.333671 | 0.409076 | — | — | — |
| pair_nest.test | COMPILE | 0.063381 | 0.140976 | 0.163834 | — | — | — |
| index_sequence.test | COMPILE | 0.058831 | 0.094214 | 0.126346 | — | — | — |
| and.test | COMPILE | 0.044197 | 0.078263 | 0.089165 | — | — | — |
| tag_of.test | COMPILE | 0.074143 | 0.144940 | 0.156060 | — | — | — |
| unused.test | COMPILE | 0.040259 | 0.095682 | 0.096913 | — | — | — |
| tag_of_fallback.test | COMPILE | 0.062084 | 0.141187 | 0.172597 | — | — | — |
| make_pair_r-value.test | COMPILE | 0.061823 | 0.100626 | 0.161302 | — | — | — |
| quick.test | RUN | 0.210529 | 0.475866 | 0.521436 | 0.000647 | 0.001502 | 0.001466 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.997× | 0.999×, 0.994× | 0.999× |
| clang | 1.002× | 1.000×, 1.004× | 0.995× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1359 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/43701438216).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| adapt_adt.test | 10 | 0.001337s | 0.001345s | 0.001371s | byte equality observed |
| adapt_adt_empty.test | 10 | 0.001336s | 0.001355s | 0.001358s | byte equality observed |
| adapt_adt_named.test | 10 | 0.001334s | 0.001361s | 0.001327s | byte equality observed |
| adapt_adt_named_empty.test | 8 | 0.001353s | 0.001309s | 0.001316s | byte equality observed |
| adapt_assoc_adt.test | 10 | 0.001354s | 0.001341s | 0.001347s | byte equality observed |
| adapt_assoc_adt_empty.test | 10 | 0.001324s | 0.001302s | 0.001328s | byte equality observed |
| adapt_assoc_adt_named.test | 10 | 0.001311s | 0.001324s | 0.001379s | byte equality observed |
| adapt_assoc_adt_named_empty.test | 9 | 0.001288s | 0.001301s | 0.001311s | byte equality observed |
| adapt_assoc_struct.test | 9 | 0.001293s | 0.001302s | 0.001357s | byte equality observed |
| adapt_assoc_struct_empty.test | 10 | 0.001301s | 0.001298s | 0.001303s | byte equality observed |
| adapt_assoc_struct_named.test | 10 | 0.001308s | 0.001271s | 0.001344s | byte equality observed |
| adapt_assoc_struct_named_empty.test | 10 | 0.001282s | 0.001271s | 0.001294s | byte equality observed |
| adapt_assoc_tpl_adt.test | 10 | 0.001311s | 0.001269s | 0.001342s | byte equality observed |
| adapt_assoc_tpl_adt_empty.test | 10 | 0.001350s | 0.001286s | 0.001354s | byte equality observed |
| adapt_assoc_tpl_struct.test | 10 | 0.001357s | 0.001337s | 0.001350s | byte equality observed |
| adapt_assoc_tpl_struct_empty.test | 10 | 0.001298s | 0.001286s | 0.001317s | byte equality observed |
| adapt_struct.test | 10 | 0.001320s | 0.001359s | 0.001371s | byte equality observed |
| adapt_struct_empty.test | 10 | 0.001324s | 0.001281s | 0.001369s | byte equality observed |
| adapt_struct_named.test | 10 | 0.001339s | 0.001330s | 0.001318s | byte equality observed |
| adapt_struct_named_empty.test | 10 | 0.001318s | 0.001293s | 0.001335s | byte equality observed |
| adapt_tpl_adt.test | 10 | 0.001330s | 0.001305s | 0.001346s | byte equality observed |
| adapt_tpl_adt_empty.test | 10 | 0.001310s | 0.001279s | 0.001299s | byte equality observed |
| adapt_tpl_struct.test | 10 | 0.001297s | 0.001272s | 0.001347s | byte equality observed |
| adapt_tpl_struct_empty.test | 10 | 0.001285s | 0.001269s | 0.001316s | byte equality observed |
| adt_attribute_proxy.test | 10 | 0.001279s | 0.001277s | 0.001312s | byte equality observed |
| all.test | 10 | 0.001282s | 0.001276s | 0.001287s | byte equality observed |
| any.test | 10 | 0.001285s | 0.001286s | 0.001276s | byte equality observed |
| array.test | 10 | 0.001285s | 0.001278s | 0.001296s | byte equality observed |
| as_deque.test | 10 | 0.001274s | 0.001250s | 0.001281s | byte equality observed |
| as_list.test | 10 | 0.001352s | 0.001317s | 0.001323s | byte equality observed |
| as_map.test | 10 | 0.001333s | 0.001309s | 0.001356s | byte equality observed |
| as_map_assoc.test | 10 | 0.001347s | 0.001304s | 0.001312s | byte equality observed |
| as_set.test | 10 | 0.001344s | 0.001349s | 0.001349s | byte equality observed |
| as_vector.test | 10 | 0.001334s | 0.001325s | 0.001333s | byte equality observed |
| back_extended_deque.test | 10 | 0.001290s | 0.001268s | 0.001308s | byte equality observed |
| boost_array.test | 10 | 0.001302s | 0.001314s | 0.001273s | byte equality observed |
| boost_tuple.test | 10 | 0.001321s | 0.001290s | 0.001325s | byte equality observed |
| boost_tuple_iterator.test | 10 | 0.001280s | 0.001357s | 0.001282s | byte equality observed |
| clear.test | 10 | 0.001306s | 0.001352s | 0.001304s | byte equality observed |
| cons.test | 10 | 0.001315s | 0.001347s | 0.001344s | byte equality observed |
| convert_boost_tuple.test | 10 | 0.001286s | 0.001300s | 0.001264s | byte equality observed |
| convert_deque.test | 10 | 0.001306s | 0.001297s | 0.001260s | byte equality observed |
| convert_list.test | 10 | 0.001283s | 0.001318s | 0.001277s | byte equality observed |
| convert_std_pair.test | 10 | 0.001291s | 0.001304s | 0.001305s | byte equality observed |
| convert_std_tuple.test | 10 | 0.001311s | 0.001236s | 0.001268s | byte equality observed |
| convert_vector.test | 10 | 0.001314s | 0.001260s | 0.001277s | byte equality observed |
| copy.test | 10 | 0.001296s | 0.001267s | 0.001249s | byte equality observed |
| count.test | 10 | 0.001336s | 0.001253s | 0.001262s | byte equality observed |
| count_if.test | 10 | 0.001322s | 0.001252s | 0.001282s | byte equality observed |
| deduce_sequence.test | 10 | 0.001295s | 0.001256s | 0.001263s | byte equality observed |
| define_assoc_struct.test | 10 | 0.001329s | 0.001296s | 0.001372s | byte equality observed |
| define_assoc_struct_empty.test | 9 | 0.001334s | 0.001337s | 0.001369s | byte equality observed |
| define_assoc_struct_move.test | 9 | 0.001270s | 0.001269s | 0.001286s | byte equality observed |
| define_assoc_tpl_struct.test | 10 | 0.001340s | 0.001293s | 0.001324s | byte equality observed |
| define_assoc_tpl_struct_empty.test | 10 | 0.001297s | 0.001321s | 0.001303s | byte equality observed |
| define_assoc_tpl_struct_move.test | 10 | 0.001289s | 0.001267s | 0.001289s | byte equality observed |
| define_struct.test | 10 | 0.001319s | 0.001345s | 0.001332s | byte equality observed |
| define_struct_empty.test | 10 | 0.001296s | 0.001304s | 0.001334s | byte equality observed |
| define_struct_inline.test | 10 | 0.001307s | 0.001323s | 0.001292s | byte equality observed |
| define_struct_inline_empty.test | 10 | 0.001311s | 0.001286s | 0.001301s | byte equality observed |
| define_struct_inline_move.test | 10 | 0.001256s | 0.001297s | 0.001316s | byte equality observed |
| define_struct_move.test | 10 | 0.001296s | 0.001257s | 0.001310s | byte equality observed |
| define_tpl_struct.test | 10 | 0.001317s | 0.001307s | 0.001338s | byte equality observed |
| define_tpl_struct_empty.test | 10 | 0.001360s | 0.001297s | 0.001322s | byte equality observed |
| define_tpl_struct_inline.test | 10 | 0.001355s | 0.001308s | 0.001331s | byte equality observed |
| define_tpl_struct_inline_empty.test | 10 | 0.001320s | 0.001329s | 0.001344s | byte equality observed |
| define_tpl_struct_inline_move.test | 10 | 0.001305s | 0.001270s | 0.001310s | byte equality observed |
| define_tpl_struct_move.test | 10 | 0.001288s | 0.001295s | 0.001293s | byte equality observed |
| deque_comparison.test | 10 | 0.001277s | 0.001265s | 0.001331s | byte equality observed |
| deque_construction.test | 10 | 0.001286s | 0.001266s | 0.001276s | byte equality observed |
| deque_copy.test | 10 | 0.001335s | 0.001301s | 0.001329s | byte equality observed |
| deque_hash.test | 10 | 0.001312s | 0.001257s | 0.001301s | byte equality observed |
| deque_iterator.test | 10 | 0.001286s | 0.001271s | 0.001290s | byte equality observed |
| deque_make.test | 10 | 0.001301s | 0.001306s | 0.001327s | byte equality observed |
| deque_misc.test | 10 | 0.001258s | 0.001369s | 0.001285s | byte equality observed |
| deque_move.test | 10 | 0.001312s | 0.001286s | 0.001329s | byte equality observed |
| deque_mutate.test | 10 | 0.001285s | 0.001309s | 0.001311s | byte equality observed |
| deque_nest.test | 10 | 0.001260s | 0.001298s | 0.001287s | byte equality observed |
| deque_tie.test | 9 | 0.001277s | 0.001328s | 0.001303s | byte equality observed |
| deque_value_at.test | 10 | 0.001320s | 0.001272s | 0.001298s | byte equality observed |
| erase.test | 10 | 0.001330s | 0.001309s | 0.001300s | byte equality observed |
| erase_key.test | 10 | 0.001325s | 0.001376s | 0.001381s | byte equality observed |
| filter.test | 10 | 0.001319s | 0.001320s | 0.001332s | byte equality observed |
| filter_if.test | 10 | 0.001316s | 0.001314s | 0.001361s | byte equality observed |
| filter_view.test | 10 | 0.001307s | 0.001366s | 0.001381s | byte equality observed |
| find.test | 10 | 0.001338s | 0.001335s | 0.001308s | byte equality observed |
| find_if.test | 10 | 0.001303s | 0.001319s | 0.001333s | byte equality observed |
| flatten.test | 10 | 0.001305s | 0.001298s | 0.001281s | byte equality observed |
| flatten_view.test | 10 | 0.001297s | 0.001310s | 0.001301s | byte equality observed |
| fold.test | 10 | 0.001312s | 0.001319s | 0.001356s | byte equality observed |
| for_each.test | 10 | 0.001340s | 0.001317s | 0.001333s | byte equality observed |
| front_extended_deque.test | 10 | 0.001287s | 0.001262s | 0.001285s | byte equality observed |
| fused.test | 10 | 0.001272s | 0.001262s | 0.001322s | byte equality observed |
| fused_function_object.test | 10 | 0.001302s | 0.001284s | 0.001293s | byte equality observed |
| fused_procedure.test | 10 | 0.001291s | 0.001310s | 0.001333s | byte equality observed |
| github-176.test | 10 | 0.001292s | 0.001272s | 0.001307s | byte equality observed |
| hash.test | 10 | 0.001304s | 0.001297s | 0.001284s | byte equality observed |
| identity_view.test | 10 | 0.001344s | 0.001323s | 0.001320s | byte equality observed |
| insert.test | 10 | 0.001370s | 0.001361s | 0.001310s | byte equality observed |
| insert_range.test | 10 | 0.001353s | 0.001360s | 0.001304s | byte equality observed |
| invoke.test | 10 | 0.001280s | 0.001278s | 0.001316s | byte equality observed |
| invoke_function_object.test | 10 | 0.001288s | 0.001268s | 0.001309s | byte equality observed |
| invoke_procedure.test | 10 | 0.001299s | 0.001285s | 0.001282s | byte equality observed |
| io.test | 10 | 0.001465s | 0.001444s | 0.001465s | byte equality observed |
| iter_fold.test | 10 | 0.001338s | 0.001344s | 0.001351s | byte equality observed |
| iterator_range.test | 10 | 0.001324s | 0.001312s | 0.001372s | byte equality observed |
| join.test | 10 | 0.001299s | 0.001286s | 0.001278s | byte equality observed |
| joint_view.test | 10 | 0.001372s | 0.001374s | 0.001366s | byte equality observed |
| list_comparison.test | 10 | 0.001289s | 0.001271s | 0.001310s | byte equality observed |
| list_construction.test | 10 | 0.001276s | 0.001295s | 0.001283s | byte equality observed |
| list_copy.test | 10 | 0.001301s | 0.001273s | 0.001299s | byte equality observed |
| list_hash.test | 10 | 0.001279s | 0.001332s | 0.001285s | byte equality observed |
| list_iterator.test | 10 | 0.001302s | 0.001292s | 0.001328s | byte equality observed |
| list_make.test | 10 | 0.001278s | 0.001322s | 0.001334s | byte equality observed |
| list_misc.test | 10 | 0.001295s | 0.001315s | 0.001286s | byte equality observed |
| list_mutate.test | 10 | 0.001318s | 0.001276s | 0.001293s | byte equality observed |
| list_nest.test | 10 | 0.001306s | 0.001277s | 0.001295s | byte equality observed |
| list_tie.test | 10 | 0.001314s | 0.001266s | 0.001287s | byte equality observed |
| list_value_at.test | 9 | 0.001306s | 0.001245s | 0.001283s | byte equality observed |
| make_fused.test | 10 | 0.001284s | 0.001308s | 0.001276s | byte equality observed |
| make_fused_function_object.test | 10 | 0.001310s | 0.001274s | 0.001302s | byte equality observed |
| make_fused_procedure.test | 10 | 0.001274s | 0.001310s | 0.001292s | byte equality observed |
| make_list.test | 10 | 0.001291s | 0.001281s | 0.001315s | byte equality observed |
| make_unfused.test | 10 | 0.001303s | 0.001311s | 0.001286s | byte equality observed |
| make_vector.test | 10 | 0.001316s | 0.001343s | 0.001285s | byte equality observed |
| map.test | 10 | 0.001330s | 0.001303s | 0.001320s | byte equality observed |
| map_comparison.test | 10 | 0.001278s | 0.001340s | 0.001273s | byte equality observed |
| map_construction.test | 10 | 0.001278s | 0.001306s | 0.001313s | byte equality observed |
| map_copy.test | 10 | 0.001282s | 0.001272s | 0.001309s | byte equality observed |
| map_misc.test | 10 | 0.001285s | 0.001297s | 0.001285s | byte equality observed |
| map_move.test | 10 | 0.001301s | 0.001302s | 0.001319s | byte equality observed |
| map_mutate.test | 10 | 0.001296s | 0.001344s | 0.001309s | byte equality observed |
| map_tie.test | 10 | 0.001280s | 0.001292s | 0.001312s | byte equality observed |
| move.test | 10 | 0.001281s | 0.001316s | 0.001271s | byte equality observed |
| nil.test | 10 | 0.001286s | 0.001313s | 0.001271s | byte equality observed |
| none.test | 10 | 0.001293s | 0.001311s | 0.001333s | byte equality observed |
| nview.test | 10 | 0.001297s | 0.001292s | 0.001282s | byte equality observed |
| pop_back.test | 10 | 0.001350s | 0.001363s | 0.001370s | byte equality observed |
| pop_front.test | 10 | 0.001336s | 0.001324s | 0.001333s | byte equality observed |
| push_back.test | 10 | 0.001360s | 0.001338s | 0.001362s | byte equality observed |
| push_front.test | 10 | 0.001375s | 0.001371s | 0.001326s | byte equality observed |
| quick.test | 10 | 0.000597s | 0.001263s | 0.001254s | byte equality observed |
| ref_vector.test | 9 | 0.001304s | 0.001296s | 0.001304s | byte equality observed |
| remove.test | 10 | 0.001326s | 0.001339s | 0.001332s | byte equality observed |
| remove_if.test | 10 | 0.001341s | 0.001343s | 0.001372s | byte equality observed |
| repetitive_view.test | 10 | 0.001281s | 0.001329s | 0.001298s | byte equality observed |
| replace.test | 10 | 0.001356s | 0.001285s | 0.001309s | byte equality observed |
| replace_if.test | 10 | 0.001314s | 0.001324s | 0.001306s | byte equality observed |
| reverse.test | 10 | 0.001361s | 0.001350s | 0.001317s | byte equality observed |
| reverse_fold.test | 10 | 0.001347s | 0.001365s | 0.001320s | byte equality observed |
| reverse_iter_fold.test | 10 | 0.001300s | 0.001321s | 0.001306s | byte equality observed |
| reverse_view.test | 10 | 0.001300s | 0.001369s | 0.001305s | byte equality observed |
| segmented_find.test | 10 | 0.001285s | 0.001279s | 0.001319s | byte equality observed |
| segmented_find_if.test | 10 | 0.001273s | 0.001282s | 0.001260s | byte equality observed |
| segmented_fold.test | 10 | 0.001336s | 0.001346s | 0.001283s | byte equality observed |
| segmented_for_each.test | 10 | 0.001328s | 0.001361s | 0.001302s | byte equality observed |
| segmented_iterator_range.test | 10 | 0.001367s | 0.001362s | 0.001317s | byte equality observed |
| set.test | 10 | 0.001323s | 0.001360s | 0.001289s | byte equality observed |
| single_view.test | 10 | 0.001336s | 0.001335s | 0.001375s | byte equality observed |
| std_array.test | 10 | 0.001300s | 0.001329s | 0.001248s | byte equality observed |
| std_pair.test | 10 | 0.001320s | 0.001294s | 0.001301s | byte equality observed |
| std_tuple.test | 10 | 0.001289s | 0.001321s | 0.001306s | byte equality observed |
| std_tuple_iterator.test | 10 | 0.001301s | 0.001328s | 0.001302s | byte equality observed |
| swap.test | 10 | 0.001294s | 0.001289s | 0.001293s | byte equality observed |
| transform.test | 9 | 0.001322s | 0.001331s | 0.001280s | byte equality observed |
| transform_view.test | 10 | 0.001349s | 0.001309s | 0.001300s | byte equality observed |
| tuple_comparison.test | 10 | 0.001312s | 0.001259s | 0.001281s | byte equality observed |
| tuple_construction.test | 10 | 0.001268s | 0.001297s | 0.001260s | byte equality observed |
| tuple_conversion.test | 10 | 0.001278s | 0.001236s | 0.001273s | byte equality observed |
| tuple_copy.test | 10 | 0.001304s | 0.001241s | 0.001272s | byte equality observed |
| tuple_element.test | 10 | 0.001275s | 0.001232s | 0.001265s | byte equality observed |
| tuple_hash.test | 10 | 0.001318s | 0.001262s | 0.001306s | byte equality observed |
| tuple_make.test | 10 | 0.001313s | 0.001254s | 0.001274s | byte equality observed |
| tuple_misc.test | 10 | 0.001313s | 0.001287s | 0.001294s | byte equality observed |
| tuple_mutate.test | 10 | 0.001265s | 0.001311s | 0.001278s | byte equality observed |
| tuple_nest.test | 9 | 0.001277s | 0.001254s | 0.001277s | byte equality observed |
| tuple_tie.test | 8 | 0.001268s | 0.001274s | 0.001289s | byte equality observed |
| tuple_traits__maybe_variadic.test | 10 | 0.001264s | 0.001265s | 0.001276s | byte equality observed |
| tuple_traits__no_variadic.test | 10 | 0.001276s | 0.001239s | 0.001261s | byte equality observed |
| unfused.test | 10 | 0.001275s | 0.001263s | 0.001315s | byte equality observed |
| unfused_typed.test | 10 | 0.001272s | 0.001236s | 0.001282s | byte equality observed |
| vector_comparison.test | 9 | 0.001305s | 0.001269s | 0.001297s | byte equality observed |
| vector_construction.test | 10 | 0.001278s | 0.001271s | 0.001301s | byte equality observed |
| vector_conversion.test | 9 | 0.001339s | 0.001252s | 0.001301s | byte equality observed |
| vector_copy.test | 10 | 0.001308s | 0.001265s | 0.001289s | byte equality observed |
| vector_hash.test | 10 | 0.001295s | 0.001344s | 0.001296s | byte equality observed |
| vector_iterator.test | 10 | 0.001303s | 0.001312s | 0.001286s | byte equality observed |
| vector_make.test | 10 | 0.001329s | 0.001260s | 0.001322s | byte equality observed |
| vector_misc.test | 10 | 0.001296s | 0.001308s | 0.001273s | byte equality observed |
| vector_move.test | 10 | 0.001306s | 0.001300s | 0.001306s | byte equality observed |
| vector_mutate.test | 10 | 0.001273s | 0.001298s | 0.001262s | byte equality observed |
| vector_n.test | 10 | 0.001319s | 0.001278s | 0.001312s | byte equality observed |
| vector_nest.test | 10 | 0.001280s | 0.001259s | 0.001250s | byte equality observed |
| vector_tie.test | 10 | 0.001280s | 0.001272s | 0.001294s | byte equality observed |
| vector_traits__maybe_variadic.test | 10 | 0.001278s | 0.001271s | 0.001304s | byte equality observed |
| vector_traits__no_variadic.test | 10 | 0.001281s | 0.001294s | 0.001254s | byte equality observed |
| vector_value_at.test | 10 | 0.001269s | 0.001260s | 0.001259s | byte equality observed |
| zip.test | 10 | 0.001321s | 0.001275s | 0.001293s | byte equality observed |
| zip2.test | 10 | 0.001286s | 0.001273s | 0.001266s | byte equality observed |
| zip_ignore.test | 10 | 0.001269s | 0.001254s | 0.001272s | byte equality observed |
| zip_view.test | 10 | 0.001312s | 0.001280s | 0.001288s | byte equality observed |
| zip_view2.test | 10 | 0.001266s | 0.001303s | 0.001276s | byte equality observed |
| zip_view_ignore.test | 10 | 0.001251s | 0.001256s | 0.001273s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/43701438216).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
