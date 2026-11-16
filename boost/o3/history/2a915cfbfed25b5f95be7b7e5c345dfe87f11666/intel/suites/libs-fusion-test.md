# libs/fusion/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| all.test | RUN | 0.237289 | 0.509703 | 0.599208 | 0.000885 | 0.001004 | 0.000881 |
| any.test | RUN | 0.238292 | 0.490079 | 0.576157 | 0.000870 | 0.000889 | 0.000900 |
| clear.test | RUN | 0.172928 | 0.465143 | 0.500667 | 0.001038 | 0.001037 | 0.000913 |
| copy.test | RUN | 0.144371 | 0.333603 | 0.380088 | 0.000963 | 0.001075 | 0.000972 |
| count.test | RUN | 0.167225 | 0.389271 | 0.444438 | 0.000883 | 0.000992 | 0.000941 |
| count_if.test | RUN | 0.155961 | 0.346805 | 0.402871 | 0.000945 | 0.001040 | 0.000909 |
| erase.test | RUN | 0.216414 | 0.632011 | 0.657276 | 0.000990 | 0.001028 | 0.000933 |
| erase_key.test | RUN | 0.218363 | 0.622039 | 0.611311 | 0.000911 | 0.000991 | 0.000905 |
| filter.test | RUN | 0.195530 | 0.516334 | 0.565206 | 0.000911 | 0.001017 | 0.000893 |
| filter_if.test | RUN | 0.213804 | 0.617451 | 0.635951 | 0.001067 | 0.001115 | 0.001008 |
| find.test | RUN | 0.179059 | 0.414196 | 0.494207 | 0.000984 | 0.001008 | 0.000897 |
| find_if.test | RUN | 0.173880 | 0.388594 | 0.447341 | 0.000899 | 0.000986 | 0.000981 |
| fold.test | RUN | 0.197657 | 0.474926 | 0.541167 | 0.000908 | 0.001003 | 0.001069 |
| for_each.test | RUN | 0.170991 | 0.435145 | 0.495553 | 0.000960 | 0.000964 | 0.000952 |
| insert.test | RUN | 0.248409 | 0.785036 | 0.800981 | 0.000993 | 0.001094 | 0.001043 |
| insert_range.test | RUN | 0.247439 | 0.766526 | 0.780606 | 0.000955 | 0.000985 | 0.000917 |
| iter_fold.test | RUN | 0.289356 | 0.710212 | 0.893270 | 0.000991 | 0.000981 | 0.000920 |
| move.test | RUN | 0.145758 | 0.343611 | 0.394113 | 0.001070 | 0.001074 | 0.000978 |
| none.test | RUN | 0.233840 | 0.498095 | 0.603292 | 0.000990 | 0.001020 | 0.000984 |
| pop_back.test | RUN | 0.233329 | 0.696732 | 0.701910 | 0.001024 | 0.000992 | 0.000877 |
| pop_front.test | RUN | 0.195622 | 0.553349 | 0.567984 | 0.001024 | 0.001050 | 0.000967 |
| push_back.test | RUN | 0.245844 | 0.770606 | 0.784048 | 0.000915 | 0.001045 | 0.000995 |
| push_front.test | RUN | 0.219941 | 0.639601 | 0.651798 | 0.000972 | 0.001057 | 0.000895 |
| remove.test | RUN | 0.244267 | 0.718494 | 0.755022 | 0.000966 | 0.001021 | 0.000948 |
| remove_if.test | RUN | 0.215580 | 0.618902 | 0.641257 | 0.001106 | 0.001113 | 0.000961 |
| replace.test | RUN | 0.212923 | 0.597444 | 0.617544 | 0.000970 | 0.001026 | 0.000887 |
| replace_if.test | RUN | 0.210064 | 0.591833 | 0.622564 | 0.000898 | 0.001012 | 0.001074 |
| reverse_fold.test | RUN | 0.316586 | 0.803706 | 1.007024 | 0.000983 | 0.001101 | 0.000985 |
| reverse_iter_fold.test | RUN | 0.327733 | 0.831141 | 1.046669 | 0.000968 | 0.000965 | 0.000910 |
| reverse.test | RUN | 0.208821 | 0.617604 | 0.613533 | 0.000953 | 0.001034 | 0.000949 |
| segmented_for_each.test | RUN | 0.350718 | 1.097771 | 1.247440 | 0.000975 | 0.001046 | 0.000884 |
| segmented_find.test | RUN | 0.219936 | 0.583640 | 0.683472 | 0.000969 | 0.001013 | 0.000960 |
| segmented_find_if.test | RUN | 0.214257 | 0.582462 | 0.681193 | 0.000949 | 0.000981 | 0.000907 |
| segmented_fold.test | RUN | 0.273060 | 0.771442 | 0.884818 | 0.000971 | 0.001076 | 0.000864 |
| transform.test | RUN | 0.221755 | 0.663094 | 0.656220 | 0.000985 | 0.001027 | 0.000973 |
| join.test | RUN | 0.160961 | 0.382212 | 0.468514 | 0.000999 | 0.001093 | 0.001014 |
| zip.test | RUN | 0.277891 | 0.722641 | 0.837000 | 0.000861 | 0.001029 | 0.000916 |
| zip2.test | RUN | 0.270281 | 0.681511 | 0.796086 | 0.000917 | 0.000992 | 0.000876 |
| zip_ignore.test | RUN | 0.205285 | 0.482352 | 0.538875 | 0.000926 | 0.001035 | 0.000968 |
| flatten.test | RUN | 0.194993 | 0.530082 | 0.560785 | 0.000951 | 0.001014 | 0.001015 |
| ticket-5490.test | COMPILE | 0.108702 | 0.229736 | 0.246466 | — | — | — |
| as_deque.test | RUN | 0.193221 | 0.496801 | 0.597063 | 0.000905 | 0.000935 | 0.000903 |
| as_list.test | RUN | 0.219114 | 0.637586 | 0.653088 | 0.000949 | 0.001080 | 0.000941 |
| as_map.test | RUN | 0.221361 | 0.622356 | 0.650148 | 0.000995 | 0.001034 | 0.000970 |
| as_map_assoc.test | RUN | 0.215089 | 0.566011 | 0.621819 | 0.000952 | 0.001046 | 0.000881 |
| as_set.test | RUN | 0.247741 | 0.721090 | 0.766587 | 0.001007 | 0.001063 | 0.001017 |
| as_vector.test | RUN | 0.224022 | 0.652104 | 0.677926 | 0.001060 | 0.001090 | 0.000957 |
| boost_tuple.test | RUN | 0.227984 | 0.634416 | 0.676268 | 0.000969 | 0.001050 | 0.001063 |
| boost_tuple_iterator.test | RUN | 0.149964 | 0.361630 | 0.397414 | 0.000941 | 0.000968 | 0.000955 |
| cons.test | RUN | 0.283104 | 0.729294 | 0.791694 | 0.000966 | 0.001037 | 0.000954 |
| convert_boost_tuple.test | RUN | 0.176678 | 0.552179 | 0.517767 | 0.000978 | 0.000973 | 0.000974 |
| convert_deque.test | RUN | 0.178172 | 0.544297 | 0.519516 | 0.000996 | 0.001034 | 0.000954 |
| convert_list.test | RUN | 0.178191 | 0.554601 | 0.522855 | 0.000954 | 0.000898 | 0.000999 |
| convert_std_pair.test | RUN | 0.186305 | 0.558680 | 0.531781 | 0.000898 | 0.001034 | 0.000926 |
| convert_std_tuple.test | RUN | 0.176885 | 0.548883 | 0.523545 | 0.000941 | 0.001040 | 0.000920 |
| convert_vector.test | RUN | 0.176539 | 0.542129 | 0.520945 | 0.000909 | 0.001059 | 0.000877 |
| filter_view.test | RUN | 0.213756 | 0.580864 | 0.615170 | 0.000981 | 0.001003 | 0.000923 |
| hash.test | RUN | 0.209016 | 0.528313 | 0.583675 | 0.000956 | 0.000923 | 0.000869 |
| io.test | RUN | 0.229062 | 0.754510 | 0.722278 | 0.001018 | 0.001240 | 0.001159 |
| iterator_range.test | RUN | 0.204599 | 0.563278 | 0.589133 | 0.000961 | 0.000977 | 0.001000 |
| joint_view.test | RUN | 0.273837 | 0.905278 | 0.875249 | 0.000891 | 0.000982 | 0.000888 |
| list_comparison.test | RUN | 0.153915 | 0.382405 | 0.415907 | 0.001011 | 0.001030 | 0.000900 |
| list_construction.test | RUN | 0.151767 | 0.362441 | 0.409120 | 0.001005 | 0.001063 | 0.000933 |
| list_copy.test | RUN | 0.231818 | 0.665613 | 0.704654 | 0.000969 | 0.000960 | 0.000922 |
| list_iterator.test | RUN | 0.148495 | 0.361686 | 0.400070 | 0.000955 | 0.001048 | 0.000928 |
| list_hash.test | RUN | 0.206949 | 0.807482 | 0.584776 | 0.000960 | 0.001038 | 0.000876 |
| list_make.test | RUN | 0.160797 | 0.400057 | 0.442495 | 0.000919 | 0.001011 | 0.000924 |
| list_misc.test | RUN | 0.205508 | 0.484137 | 0.545222 | 0.000962 | 0.000937 | 0.000931 |
| list_mutate.test | RUN | 0.140053 | 0.333076 | 0.370099 | 0.000844 | 0.000968 | 0.000935 |
| list_nest.test | RUN | 0.290114 | 0.889304 | 0.991479 | 0.001017 | 0.001005 | 0.000930 |
| list_tie.test | RUN | 0.152298 | 0.359165 | 0.400312 | 0.000925 | 0.001026 | 0.000893 |
| list_value_at.test | RUN | 0.144572 | 0.340654 | 0.379953 | 0.000876 | 0.001040 | 0.000895 |
| deque_comparison.test | RUN | 0.153656 | 0.376189 | 0.417665 | 0.000912 | 0.000985 | 0.000917 |
| deque_construction.test | RUN | 0.155349 | 0.363756 | 0.418143 | 0.000871 | 0.001016 | 0.000944 |
| deque_copy.test | RUN | 0.222779 | 0.622330 | 0.663828 | 0.000870 | 0.001079 | 0.000964 |
| deque_iterator.test | RUN | 0.150774 | 0.382260 | 0.404492 | 0.000935 | 0.001057 | 0.000992 |
| deque_hash.test | RUN | 0.208272 | 0.774954 | 0.591092 | 0.000959 | 0.001065 | 0.000879 |
| deque_is_constructible.test | COMPILE | 0.080878 | 0.163493 | 0.185064 | — | — | — |
| deque_make.test | RUN | 0.156140 | 0.396504 | 0.430591 | 0.000966 | 0.001019 | 0.000976 |
| deque_misc.test | RUN | 0.202145 | 0.482854 | 0.524969 | 0.000949 | 0.000939 | 0.000910 |
| deque_move.test | RUN | 0.156192 | 0.408275 | 0.422122 | 0.001042 | 0.001039 | 0.000901 |
| deque_mutate.test | RUN | 0.140198 | 0.321793 | 0.361895 | 0.000957 | 0.000994 | 0.000936 |
| deque_nest.test | RUN | 0.432295 | 1.452799 | 1.568949 | 0.000922 | 0.000954 | 0.000936 |
| deque_tie.test | RUN | 0.145240 | 0.339487 | 0.394328 | 0.000934 | 0.000954 | 0.000874 |
| deque_value_at.test | RUN | 0.143263 | 0.339442 | 0.370227 | 0.000935 | 0.001144 | 0.000896 |
| front_extended_deque.test | RUN | 0.207622 | 0.490933 | 0.550338 | 0.000941 | 0.001036 | 0.000900 |
| back_extended_deque.test | RUN | 0.208339 | 0.490973 | 0.549012 | 0.001160 | 0.000948 | 0.000932 |
| make_list.test | RUN | 0.159972 | 0.407230 | 0.455369 | 0.000957 | 0.000908 | 0.001023 |
| make_vector.test | RUN | 0.157717 | 0.396544 | 0.440554 | 0.000918 | 0.000969 | 0.000905 |
| map.test | RUN | 0.218968 | 0.622237 | 0.638413 | 0.000997 | 0.000970 | 0.000860 |
| map_comparison.test | RUN | 0.156349 | 0.390713 | 0.423780 | 0.000962 | 0.000995 | 0.000884 |
| map_construction.test | RUN | 0.161213 | 0.375413 | 0.416277 | 0.000948 | 0.001046 | 0.000930 |
| map_copy.test | RUN | 0.185531 | 0.475822 | 0.525072 | 0.000953 | 0.000996 | 0.000943 |
| map_misc.test | RUN | 0.203934 | 0.481164 | 0.524363 | 0.000940 | 0.000926 | 0.000904 |
| map_move.test | RUN | 0.159571 | 0.412076 | 0.429262 | 0.000838 | 0.001076 | 0.000898 |
| map_mutate.test | RUN | 0.141973 | 0.324890 | 0.371215 | 0.001069 | 0.001016 | 0.000937 |
| map_tie.test | RUN | 0.143754 | 0.328240 | 0.375330 | 0.000931 | 0.001005 | 0.000960 |
| nil.test | RUN | 0.097755 | 0.231938 | 0.257151 | 0.000925 | 0.000946 | 0.000933 |
| nview.test | RUN | 0.197033 | 0.475388 | 0.537715 | 0.000955 | 0.001069 | 0.000867 |
| reverse_view.test | RUN | 0.264884 | 0.791905 | 0.805521 | 0.001045 | 0.001024 | 0.000946 |
| segmented_iterator_range.test | RUN | 0.296019 | 0.911287 | 0.978691 | 0.001014 | 0.001045 | 0.000980 |
| set.test | RUN | 0.192988 | 0.540103 | 0.563217 | 0.000942 | 0.000994 | 0.001028 |
| single_view.test | RUN | 0.175764 | 0.490325 | 0.515484 | 0.000983 | 0.000947 | 0.000877 |
| std_pair.test | RUN | 0.224755 | 0.634996 | 0.661167 | 0.000954 | 0.001038 | 0.000940 |
| boost_array.test | RUN | 0.186978 | 0.435530 | 0.483889 | 0.000915 | 0.000979 | 0.000926 |
| array.test | RUN | 0.183854 | 0.428463 | 0.481638 | 0.000972 | 0.001043 | 0.000880 |
| std_array.test | RUN | 0.187313 | 0.430454 | 0.494704 | 0.001059 | 0.001028 | 0.000908 |
| tuple_comparison.test | RUN | 0.164354 | 0.403527 | 0.451959 | 0.000974 | 0.000958 | 0.000917 |
| tuple_construction.test | RUN | 0.170030 | 0.402696 | 0.465211 | 0.000948 | 0.000998 | 0.000932 |
| tuple_conversion.test | RUN | 0.375424 | 1.222736 | 1.440983 | 0.000924 | 0.001088 | 0.001116 |
| tuple_copy.test | RUN | 0.244782 | 0.711887 | 0.760853 | 0.000991 | 0.000982 | 0.000874 |
| tuple_element.test | RUN | 0.153885 | 0.359085 | 0.409245 | 0.000970 | 0.001026 | 0.000943 |
| tuple_make.test | RUN | 0.166793 | 0.417516 | 0.456627 | 0.000928 | 0.001197 | 0.000883 |
| tuple_misc.test | RUN | 0.217399 | 0.513169 | 0.560795 | 0.000916 | 0.001061 | 0.001083 |
| tuple_mutate.test | RUN | 0.150086 | 0.340861 | 0.393583 | 0.000931 | 0.001018 | 0.000934 |
| tuple_nest.test | RUN | 0.629636 | 2.505531 | 2.706893 | 0.000992 | 0.000894 | 0.000912 |
| tuple_hash.test | RUN | 0.211542 | 0.807613 | 0.597140 | 0.000973 | 0.001094 | 0.000969 |
| tuple_tie.test | RUN | 0.157866 | 0.372379 | 0.426804 | 0.000968 | 0.001071 | 0.000953 |
| tuple_traits__maybe_variadic.test | RUN | 0.170025 | 0.450455 | 0.450300 | 0.001071 | 0.001047 | 0.000977 |
| tuple_traits__no_variadic.test | RUN | 0.190043 | 0.473989 | 0.506203 | 0.001040 | 0.001002 | 0.000927 |
| transform_view.test | RUN | 0.259086 | 0.815694 | 0.808205 | 0.001000 | 0.001017 | 0.000927 |
| identity_view.test | RUN | 0.246468 | 0.719124 | 0.754485 | 0.000937 | 0.001031 | 0.000902 |
| vector_comparison.test | RUN | 0.155027 | 0.383780 | 0.415922 | 0.000981 | 0.001024 | 0.000939 |
| vector_construction.test | RUN | 0.155333 | 0.365872 | 0.410003 | 0.000948 | 0.000978 | 0.000899 |
| vector_conversion.test | RUN | 0.456612 | 1.624611 | 1.806079 | 0.001028 | 0.000994 | 0.000936 |
| vector_copy.test | RUN | 0.237197 | 0.701406 | 0.753951 | 0.000964 | 0.001042 | 0.000987 |
| vector_iterator.test | RUN | 0.149665 | 0.387887 | 0.400561 | 0.001040 | 0.001040 | 0.000861 |
| vector_make.test | RUN | 0.158015 | 0.396196 | 0.425825 | 0.000931 | 0.000969 | 0.000958 |
| vector_misc.test | RUN | 0.206439 | 0.489528 | 0.531492 | 0.000928 | 0.000992 | 0.000952 |
| vector_move.test | RUN | 0.157891 | 0.406374 | 0.421957 | 0.000945 | 0.000979 | 0.001047 |
| vector_mutate.test | RUN | 0.141421 | 0.321184 | 0.366437 | 0.000902 | 0.000993 | 0.000890 |
| vector_n.test | RUN | 0.174103 | 0.414394 | 0.487101 | 0.000963 | 0.000969 | 0.001020 |
| vector_nest.test | RUN | 0.641453 | 2.655883 | 2.755423 | 0.000992 | 0.001008 | 0.000876 |
| vector_hash.test | RUN | 0.204807 | 0.791757 | 0.571883 | 0.001030 | 0.001096 | 0.000919 |
| vector_tie.test | RUN | 0.148054 | 0.351855 | 0.400637 | 0.000887 | 0.000982 | 0.001169 |
| vector_traits__maybe_variadic.test | RUN | 0.158675 | 0.420589 | 0.412906 | 0.000934 | 0.001064 | 0.000922 |
| vector_traits__no_variadic.test | RUN | 0.172129 | 0.442322 | 0.435258 | 0.000866 | 0.001059 | 0.000926 |
| vector_value_at.test | RUN | 0.148012 | 0.335458 | 0.384705 | 0.000988 | 0.001068 | 0.000867 |
| zip_view.test | RUN | 0.294573 | 0.774549 | 0.932107 | 0.000961 | 0.001048 | 0.000926 |
| zip_view2.test | RUN | 0.239946 | 0.641226 | 0.714287 | 0.000949 | 0.001047 | 0.000960 |
| zip_view_ignore.test | RUN | 0.224317 | 0.555962 | 0.683626 | 0.000978 | 0.001048 | 0.000929 |
| repetitive_view.test | RUN | 0.381497 | 1.026374 | 1.246497 | 0.000893 | 0.001012 | 0.001090 |
| deduce_sequence.test | RUN | 0.188265 | 0.440773 | 0.497201 | 0.000962 | 0.001069 | 0.000977 |
| adapt_adt_named.test | RUN | 0.225778 | 0.656672 | 0.652372 | 0.000968 | 0.001041 | 0.001190 |
| adapt_adt_named_empty.test | RUN | 0.195141 | 0.520921 | 0.540687 | 0.000916 | 0.001067 | 0.001044 |
| adapt_adt.test | RUN | 0.255894 | 0.843429 | 0.778082 | 0.000977 | 0.000969 | 0.000985 |
| adapt_adt_empty.test | RUN | 0.192948 | 0.510021 | 0.537489 | 0.000970 | 0.001107 | 0.000902 |
| adapt_assoc_adt_named.test | RUN | 0.251043 | 0.674792 | 0.702057 | 0.000902 | 0.000979 | 0.001018 |
| adapt_assoc_adt_named_empty.test | RUN | 0.197049 | 0.514655 | 0.558018 | 0.000900 | 0.001046 | 0.000970 |
| adapt_assoc_adt.test | RUN | 0.256811 | 0.687852 | 0.735083 | 0.000948 | 0.001010 | 0.000944 |
| adapt_assoc_adt_empty.test | RUN | 0.194271 | 0.515178 | 0.539461 | 0.000931 | 0.001034 | 0.000976 |
| adapt_assoc_struct_named.test | RUN | 0.246177 | 0.655403 | 0.677498 | 0.000937 | 0.001048 | 0.000942 |
| adapt_assoc_struct_named_empty.test | RUN | 0.193894 | 0.509836 | 0.546857 | 0.000998 | 0.001098 | 0.001000 |
| adapt_assoc_struct.test | RUN | 0.224866 | 0.621270 | 0.643240 | 0.000939 | 0.001091 | 0.001063 |
| adapt_assoc_struct_empty.test | RUN | 0.192830 | 0.507355 | 0.540386 | 0.001067 | 0.000973 | 0.000918 |
| adapt_assoc_tpl_adt.test | RUN | 0.261576 | 0.710733 | 0.748407 | 0.001010 | 0.001074 | 0.000913 |
| adapt_assoc_tpl_adt_empty.test | RUN | 0.194238 | 0.515337 | 0.545321 | 0.001152 | 0.001076 | 0.000926 |
| adapt_assoc_tpl_struct.test | RUN | 0.215536 | 0.601795 | 0.625221 | 0.001013 | 0.001037 | 0.000965 |
| adapt_assoc_tpl_struct_empty.test | RUN | 0.192553 | 0.512211 | 0.542694 | 0.000944 | 0.001067 | 0.001004 |
| adapt_struct_named.test | RUN | 0.221179 | 0.633875 | 0.645692 | 0.000896 | 0.001022 | 0.000977 |
| adapt_struct_named_empty.test | RUN | 0.192494 | 0.513775 | 0.542295 | 0.001006 | 0.001050 | 0.000977 |
| adapt_struct.test | RUN | 0.239381 | 0.704422 | 0.716910 | 0.000973 | 0.001016 | 0.000945 |
| adapt_struct_empty.test | RUN | 0.192960 | 0.516940 | 0.535048 | 0.001031 | 0.001037 | 0.000922 |
| adapt_tpl_adt.test | RUN | 0.249002 | 0.825520 | 0.766705 | 0.000943 | 0.000960 | 0.000973 |
| adapt_tpl_adt_empty.test | RUN | 0.195035 | 0.519935 | 0.535750 | 0.000944 | 0.000982 | 0.000968 |
| adapt_tpl_struct.test | RUN | 0.205386 | 0.567174 | 0.592171 | 0.000985 | 0.000973 | 0.000938 |
| adapt_tpl_struct_empty.test | RUN | 0.192519 | 0.521348 | 0.543242 | 0.000925 | 0.001009 | 0.000966 |
| adt_attribute_proxy.test | RUN | 0.214450 | 0.501962 | 0.562974 | 0.000950 | 0.001005 | 0.000923 |
| define_struct.test | RUN | 0.263903 | 0.707983 | 0.753864 | 0.000988 | 0.001074 | 0.000997 |
| define_struct_empty.test | RUN | 0.229901 | 0.580870 | 0.615350 | 0.000952 | 0.001048 | 0.000898 |
| define_struct_move.test | RUN | 0.143501 | 0.319044 | 0.366993 | 0.000943 | 0.000950 | 0.000907 |
| define_struct_inline.test | RUN | 0.281385 | 0.839751 | 0.843334 | 0.000938 | 0.001040 | 0.001001 |
| define_struct_inline_empty.test | RUN | 0.233480 | 0.582997 | 0.622428 | 0.000893 | 0.001097 | 0.000924 |
| define_struct_inline_move.test | RUN | 0.146685 | 0.321104 | 0.368547 | 0.000940 | 0.000934 | 0.000904 |
| define_assoc_struct.test | RUN | 0.253216 | 0.666478 | 0.717779 | 0.000981 | 0.001022 | 0.000948 |
| define_assoc_struct_empty.test | RUN | 0.229150 | 0.583008 | 0.623511 | 0.000938 | 0.000876 | 0.000987 |
| define_assoc_struct_move.test | RUN | 0.146430 | 0.320891 | 0.362967 | 0.000922 | 0.001000 | 0.000973 |
| define_tpl_struct.test | RUN | 0.253995 | 0.671617 | 0.713669 | 0.001009 | 0.001003 | 0.000931 |
| define_tpl_struct_empty.test | RUN | 0.230613 | 0.582942 | 0.616968 | 0.000929 | 0.000986 | 0.000970 |
| define_tpl_struct_move.test | RUN | 0.151595 | 0.322747 | 0.366765 | 0.000958 | 0.000979 | 0.000912 |
| define_tpl_struct_inline.test | RUN | 0.268509 | 0.783389 | 0.777059 | 0.001002 | 0.000953 | 0.000975 |
| define_tpl_struct_inline_empty.test | RUN | 0.230236 | 0.578840 | 0.612178 | 0.001002 | 0.001024 | 0.000866 |
| define_tpl_struct_inline_move.test | RUN | 0.147194 | 0.320152 | 0.379452 | 0.000927 | 0.001011 | 0.000887 |
| define_assoc_tpl_struct.test | RUN | 0.255588 | 0.680907 | 0.729428 | 0.000899 | 0.000954 | 0.000880 |
| define_assoc_tpl_struct_empty.test | RUN | 0.229229 | 0.583167 | 0.616615 | 0.000937 | 0.001021 | 0.000947 |
| define_assoc_tpl_struct_move.test | RUN | 0.145364 | 0.327565 | 0.367044 | 0.000914 | 0.001057 | 0.000929 |
| std_tuple.test | RUN | 0.152407 | 0.363448 | 0.412670 | 0.000876 | 0.001024 | 0.000844 |
| std_tuple_iterator.test | RUN | 0.151919 | 0.383762 | 0.409744 | 0.000959 | 0.001018 | 0.000926 |
| ref_vector.test | RUN | 0.171220 | 0.386252 | 0.437423 | 0.000944 | 0.001029 | 0.000960 |
| flatten_view.test | RUN | 0.184694 | 0.483288 | 0.531365 | 0.000984 | 0.001003 | 0.000918 |
| github-159.test | COMPILE | 0.082228 | 0.174696 | 0.195768 | — | — | — |
| github-176.test | RUN | 0.169628 | 0.431232 | 0.439617 | 0.000900 | 0.000967 | 0.000918 |
| size.test | COMPILE | 0.142390 | 0.297036 | 0.341085 | — | — | — |
| fused.test | RUN | 0.202079 | 0.452856 | 0.506712 | 0.001016 | 0.000982 | 0.000941 |
| fused_function_object.test | RUN | 0.150587 | 0.347894 | 0.387266 | 0.000995 | 0.000966 | 0.000847 |
| fused_procedure.test | RUN | 0.199878 | 0.430601 | 0.481344 | 0.000981 | 0.000993 | 0.000949 |
| unfused.test | RUN | 0.152020 | 0.353198 | 0.398343 | 0.000931 | 0.000989 | 0.000951 |
| unfused_typed.test | RUN | 0.154838 | 0.386105 | 0.414706 | 0.000917 | 0.001025 | 0.000933 |
| make_fused.test | RUN | 0.203181 | 0.453202 | 0.521244 | 0.000880 | 0.000995 | 0.000826 |
| make_fused_function_object.test | RUN | 0.150636 | 0.345768 | 0.390808 | 0.000975 | 0.001015 | 0.000860 |
| make_fused_procedure.test | RUN | 0.194868 | 0.432156 | 0.500232 | 0.000971 | 0.000985 | 0.000875 |
| make_unfused.test | RUN | 0.152716 | 0.349286 | 0.400510 | 0.000943 | 0.000970 | 0.000922 |
| invoke.test | RUN | 0.388053 | 1.215122 | 1.325460 | 0.001058 | 0.000950 | 0.001123 |
| invoke_function_object.test | RUN | 0.183415 | 0.451023 | 0.512598 | 0.000929 | 0.000950 | 0.000801 |
| invoke_procedure.test | RUN | 0.310345 | 0.919058 | 0.996413 | 0.000904 | 0.000966 | 0.000896 |
| swap.test | RUN | 0.231996 | 0.562257 | 0.633835 | 0.000980 | 0.000928 | 0.001127 |
| is_sequence.test | COMPILE | 0.039750 | 0.078150 | 0.081010 | — | — | — |
| is_view.test | COMPILE | 0.038554 | 0.076653 | 0.080380 | — | — | — |
| pair_deque.test | COMPILE | 0.085124 | 0.182496 | 0.193177 | — | — | — |
| pair_list.test | COMPILE | 0.083322 | 0.177563 | 0.191788 | — | — | — |
| pair_map.test | COMPILE | 0.087484 | 0.185532 | 0.201916 | — | — | — |
| pair_set.test | COMPILE | 0.086517 | 0.186596 | 0.199417 | — | — | — |
| pair_vector.test | COMPILE | 0.083647 | 0.182066 | 0.195815 | — | — | — |
| pair_nest.test | COMPILE | 0.033215 | 0.073444 | 0.078758 | — | — | — |
| index_sequence.test | COMPILE | 0.027902 | 0.049163 | 0.058970 | — | — | — |
| and.test | COMPILE | 0.021597 | 0.037143 | 0.042791 | — | — | — |
| tag_of.test | COMPILE | 0.037811 | 0.076264 | 0.080094 | — | — | — |
| unused.test | COMPILE | 0.018782 | 0.049867 | 0.048463 | — | — | — |
| tag_of_fallback.test | COMPILE | 0.038318 | 0.077660 | 0.080093 | — | — | — |
| make_pair_r-value.test | COMPILE | 0.032802 | 0.072789 | 0.076773 | — | — | — |
| quick.test | RUN | 0.160042 | 0.370111 | 0.394050 | 0.000558 | 0.000958 | 0.000914 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 1.001× | 1.000×, 1.002× | 1.001× |
| clang | 1.001× | 1.002×, 1.000× | 1.002× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1365 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/43796354412).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| adapt_adt.test | 10 | 0.000931s | 0.000927s | 0.000925s | byte equality observed |
| adapt_adt_empty.test | 10 | 0.000911s | 0.000927s | 0.000915s | byte equality observed |
| adapt_adt_named.test | 10 | 0.000927s | 0.000928s | 0.000921s | byte equality observed |
| adapt_adt_named_empty.test | 10 | 0.000921s | 0.000915s | 0.000927s | byte equality observed |
| adapt_assoc_adt.test | 10 | 0.000924s | 0.000931s | 0.000928s | byte equality observed |
| adapt_assoc_adt_empty.test | 10 | 0.000925s | 0.000910s | 0.000929s | byte equality observed |
| adapt_assoc_adt_named.test | 10 | 0.000928s | 0.000924s | 0.000916s | byte equality observed |
| adapt_assoc_adt_named_empty.test | 10 | 0.000928s | 0.000931s | 0.000917s | byte equality observed |
| adapt_assoc_struct.test | 10 | 0.000922s | 0.000929s | 0.000929s | byte equality observed |
| adapt_assoc_struct_empty.test | 10 | 0.000926s | 0.000927s | 0.000922s | byte equality observed |
| adapt_assoc_struct_named.test | 10 | 0.000932s | 0.000930s | 0.000930s | byte equality observed |
| adapt_assoc_struct_named_empty.test | 10 | 0.000916s | 0.000924s | 0.000922s | byte equality observed |
| adapt_assoc_tpl_adt.test | 10 | 0.000929s | 0.000921s | 0.000917s | byte equality observed |
| adapt_assoc_tpl_adt_empty.test | 10 | 0.000916s | 0.000927s | 0.000922s | byte equality observed |
| adapt_assoc_tpl_struct.test | 10 | 0.000940s | 0.000933s | 0.000934s | byte equality observed |
| adapt_assoc_tpl_struct_empty.test | 10 | 0.000920s | 0.000925s | 0.000912s | byte equality observed |
| adapt_struct.test | 10 | 0.000929s | 0.000937s | 0.000932s | byte equality observed |
| adapt_struct_empty.test | 10 | 0.000922s | 0.000931s | 0.000918s | byte equality observed |
| adapt_struct_named.test | 10 | 0.000929s | 0.000915s | 0.000935s | byte equality observed |
| adapt_struct_named_empty.test | 10 | 0.000924s | 0.000919s | 0.000921s | byte equality observed |
| adapt_tpl_adt.test | 10 | 0.000924s | 0.000928s | 0.000923s | byte equality observed |
| adapt_tpl_adt_empty.test | 10 | 0.000926s | 0.000916s | 0.000919s | byte equality observed |
| adapt_tpl_struct.test | 10 | 0.000926s | 0.000921s | 0.000925s | byte equality observed |
| adapt_tpl_struct_empty.test | 10 | 0.000915s | 0.000930s | 0.000920s | byte equality observed |
| adt_attribute_proxy.test | 10 | 0.000909s | 0.000908s | 0.000909s | byte equality observed |
| all.test | 10 | 0.000895s | 0.000898s | 0.000912s | byte equality observed |
| any.test | 10 | 0.000901s | 0.000893s | 0.000908s | byte equality observed |
| array.test | 10 | 0.000905s | 0.000893s | 0.000901s | byte equality observed |
| as_deque.test | 10 | 0.000907s | 0.000905s | 0.000912s | byte equality observed |
| as_list.test | 10 | 0.000947s | 0.000947s | 0.000934s | byte equality observed |
| as_map.test | 10 | 0.000932s | 0.000935s | 0.000931s | byte equality observed |
| as_map_assoc.test | 10 | 0.000935s | 0.000937s | 0.000921s | byte equality observed |
| as_set.test | 10 | 0.000954s | 0.000952s | 0.000947s | byte equality observed |
| as_vector.test | 10 | 0.000956s | 0.000959s | 0.000945s | byte equality observed |
| back_extended_deque.test | 10 | 0.000910s | 0.000906s | 0.000918s | byte equality observed |
| boost_array.test | 10 | 0.000905s | 0.000916s | 0.000904s | byte equality observed |
| boost_tuple.test | 10 | 0.000937s | 0.000926s | 0.000928s | byte equality observed |
| boost_tuple_iterator.test | 10 | 0.000914s | 0.000926s | 0.000918s | byte equality observed |
| clear.test | 10 | 0.000927s | 0.000935s | 0.000922s | byte equality observed |
| cons.test | 10 | 0.000954s | 0.000941s | 0.000948s | byte equality observed |
| convert_boost_tuple.test | 10 | 0.000925s | 0.000914s | 0.000927s | byte equality observed |
| convert_deque.test | 10 | 0.000921s | 0.000907s | 0.000911s | byte equality observed |
| convert_list.test | 10 | 0.000925s | 0.000922s | 0.000911s | byte equality observed |
| convert_std_pair.test | 10 | 0.000925s | 0.000914s | 0.000918s | byte equality observed |
| convert_std_tuple.test | 10 | 0.000922s | 0.000913s | 0.000903s | byte equality observed |
| convert_vector.test | 10 | 0.000919s | 0.000916s | 0.000909s | byte equality observed |
| copy.test | 10 | 0.000910s | 0.000913s | 0.000915s | byte equality observed |
| count.test | 10 | 0.000913s | 0.000909s | 0.000912s | byte equality observed |
| count_if.test | 10 | 0.000922s | 0.000910s | 0.000906s | byte equality observed |
| deduce_sequence.test | 10 | 0.000913s | 0.000899s | 0.000900s | byte equality observed |
| define_assoc_struct.test | 10 | 0.000938s | 0.000931s | 0.000928s | byte equality observed |
| define_assoc_struct_empty.test | 10 | 0.000927s | 0.000935s | 0.000937s | byte equality observed |
| define_assoc_struct_move.test | 10 | 0.000914s | 0.000911s | 0.000914s | byte equality observed |
| define_assoc_tpl_struct.test | 10 | 0.000938s | 0.000946s | 0.000937s | byte equality observed |
| define_assoc_tpl_struct_empty.test | 10 | 0.000928s | 0.000922s | 0.000927s | byte equality observed |
| define_assoc_tpl_struct_move.test | 10 | 0.000915s | 0.000922s | 0.000910s | byte equality observed |
| define_struct.test | 10 | 0.000944s | 0.000930s | 0.000935s | byte equality observed |
| define_struct_empty.test | 10 | 0.000931s | 0.000938s | 0.000927s | byte equality observed |
| define_struct_inline.test | 10 | 0.000942s | 0.000938s | 0.000946s | byte equality observed |
| define_struct_inline_empty.test | 10 | 0.000929s | 0.000933s | 0.000935s | byte equality observed |
| define_struct_inline_move.test | 10 | 0.000914s | 0.000926s | 0.000913s | byte equality observed |
| define_struct_move.test | 10 | 0.000921s | 0.000908s | 0.000917s | byte equality observed |
| define_tpl_struct.test | 10 | 0.000936s | 0.000938s | 0.000938s | byte equality observed |
| define_tpl_struct_empty.test | 10 | 0.000924s | 0.000926s | 0.000928s | byte equality observed |
| define_tpl_struct_inline.test | 10 | 0.000944s | 0.000930s | 0.000922s | byte equality observed |
| define_tpl_struct_inline_empty.test | 10 | 0.000929s | 0.000931s | 0.000919s | byte equality observed |
| define_tpl_struct_inline_move.test | 10 | 0.000919s | 0.000901s | 0.000907s | byte equality observed |
| define_tpl_struct_move.test | 10 | 0.000913s | 0.000916s | 0.000911s | byte equality observed |
| deque_comparison.test | 10 | 0.000905s | 0.000906s | 0.000912s | byte equality observed |
| deque_construction.test | 10 | 0.000918s | 0.000905s | 0.000906s | byte equality observed |
| deque_copy.test | 10 | 0.000917s | 0.000908s | 0.000917s | byte equality observed |
| deque_hash.test | 10 | 0.000915s | 0.000920s | 0.000908s | byte equality observed |
| deque_iterator.test | 10 | 0.000909s | 0.000910s | 0.000906s | byte equality observed |
| deque_make.test | 10 | 0.000919s | 0.000912s | 0.000922s | byte equality observed |
| deque_misc.test | 10 | 0.000909s | 0.000912s | 0.000918s | byte equality observed |
| deque_move.test | 10 | 0.000920s | 0.000918s | 0.000920s | byte equality observed |
| deque_mutate.test | 10 | 0.000902s | 0.000909s | 0.000909s | byte equality observed |
| deque_nest.test | 10 | 0.000916s | 0.000903s | 0.000911s | byte equality observed |
| deque_tie.test | 10 | 0.000910s | 0.000911s | 0.000915s | byte equality observed |
| deque_value_at.test | 10 | 0.000914s | 0.000905s | 0.000912s | byte equality observed |
| erase.test | 10 | 0.000934s | 0.000941s | 0.000929s | byte equality observed |
| erase_key.test | 10 | 0.000944s | 0.000937s | 0.000944s | byte equality observed |
| filter.test | 10 | 0.000931s | 0.000932s | 0.000938s | byte equality observed |
| filter_if.test | 10 | 0.000945s | 0.000954s | 0.000945s | byte equality observed |
| filter_view.test | 10 | 0.000958s | 0.000960s | 0.000950s | byte equality observed |
| find.test | 10 | 0.000948s | 0.000944s | 0.000951s | byte equality observed |
| find_if.test | 10 | 0.000936s | 0.000955s | 0.000960s | byte equality observed |
| flatten.test | 10 | 0.000935s | 0.000920s | 0.000937s | byte equality observed |
| flatten_view.test | 10 | 0.000935s | 0.000928s | 0.000927s | byte equality observed |
| fold.test | 10 | 0.000935s | 0.000942s | 0.000923s | byte equality observed |
| for_each.test | 10 | 0.000937s | 0.000927s | 0.000948s | byte equality observed |
| front_extended_deque.test | 10 | 0.000916s | 0.000925s | 0.000928s | byte equality observed |
| fused.test | 10 | 0.000916s | 0.000904s | 0.000905s | byte equality observed |
| fused_function_object.test | 10 | 0.000910s | 0.000899s | 0.000900s | byte equality observed |
| fused_procedure.test | 10 | 0.000922s | 0.000910s | 0.000908s | byte equality observed |
| github-176.test | 10 | 0.000909s | 0.000916s | 0.000909s | byte equality observed |
| hash.test | 10 | 0.000922s | 0.000923s | 0.000915s | byte equality observed |
| identity_view.test | 10 | 0.000927s | 0.000942s | 0.000931s | byte equality observed |
| insert.test | 10 | 0.000947s | 0.000943s | 0.000941s | byte equality observed |
| insert_range.test | 10 | 0.000946s | 0.000940s | 0.000948s | byte equality observed |
| invoke.test | 10 | 0.000920s | 0.000924s | 0.000921s | byte equality observed |
| invoke_function_object.test | 10 | 0.000903s | 0.000913s | 0.000910s | byte equality observed |
| invoke_procedure.test | 10 | 0.000918s | 0.000921s | 0.000935s | byte equality observed |
| io.test | 10 | 0.001056s | 0.001037s | 0.001045s | byte equality observed |
| iter_fold.test | 10 | 0.000924s | 0.000919s | 0.000920s | byte equality observed |
| iterator_range.test | 10 | 0.000947s | 0.000954s | 0.000935s | byte equality observed |
| join.test | 10 | 0.000916s | 0.000903s | 0.000906s | byte equality observed |
| joint_view.test | 10 | 0.000963s | 0.000967s | 0.000965s | byte equality observed |
| list_comparison.test | 10 | 0.000917s | 0.000920s | 0.000911s | byte equality observed |
| list_construction.test | 10 | 0.000907s | 0.000900s | 0.000908s | byte equality observed |
| list_copy.test | 10 | 0.000912s | 0.000919s | 0.000912s | byte equality observed |
| list_hash.test | 10 | 0.000926s | 0.000911s | 0.000913s | byte equality observed |
| list_iterator.test | 10 | 0.000903s | 0.000914s | 0.000898s | byte equality observed |
| list_make.test | 10 | 0.000917s | 0.000912s | 0.000919s | byte equality observed |
| list_misc.test | 10 | 0.000909s | 0.000917s | 0.000912s | byte equality observed |
| list_mutate.test | 10 | 0.000913s | 0.000903s | 0.000912s | byte equality observed |
| list_nest.test | 10 | 0.000903s | 0.000908s | 0.000907s | byte equality observed |
| list_tie.test | 10 | 0.000899s | 0.000910s | 0.000906s | byte equality observed |
| list_value_at.test | 10 | 0.000913s | 0.000917s | 0.000909s | byte equality observed |
| make_fused.test | 10 | 0.000906s | 0.000910s | 0.000911s | byte equality observed |
| make_fused_function_object.test | 10 | 0.000905s | 0.000890s | 0.000902s | byte equality observed |
| make_fused_procedure.test | 10 | 0.000914s | 0.000907s | 0.000904s | byte equality observed |
| make_list.test | 10 | 0.000915s | 0.000923s | 0.000922s | byte equality observed |
| make_unfused.test | 10 | 0.000909s | 0.000911s | 0.000917s | byte equality observed |
| make_vector.test | 10 | 0.000925s | 0.000924s | 0.000904s | byte equality observed |
| map.test | 10 | 0.000931s | 0.000926s | 0.000935s | byte equality observed |
| map_comparison.test | 10 | 0.000906s | 0.000898s | 0.000913s | byte equality observed |
| map_construction.test | 10 | 0.000907s | 0.000908s | 0.000908s | byte equality observed |
| map_copy.test | 10 | 0.000921s | 0.000913s | 0.000905s | byte equality observed |
| map_misc.test | 10 | 0.000921s | 0.000922s | 0.000903s | byte equality observed |
| map_move.test | 10 | 0.000928s | 0.000922s | 0.000922s | byte equality observed |
| map_mutate.test | 10 | 0.000918s | 0.000910s | 0.000908s | byte equality observed |
| map_tie.test | 10 | 0.000912s | 0.000907s | 0.000908s | byte equality observed |
| move.test | 10 | 0.000906s | 0.000914s | 0.000908s | byte equality observed |
| nil.test | 10 | 0.000907s | 0.000913s | 0.000901s | byte equality observed |
| none.test | 10 | 0.000918s | 0.000911s | 0.000921s | byte equality observed |
| nview.test | 10 | 0.000922s | 0.000914s | 0.000920s | byte equality observed |
| pop_back.test | 10 | 0.000953s | 0.000958s | 0.000956s | byte equality observed |
| pop_front.test | 10 | 0.000947s | 0.000947s | 0.000938s | byte equality observed |
| push_back.test | 10 | 0.000938s | 0.000955s | 0.000952s | byte equality observed |
| push_front.test | 10 | 0.000945s | 0.000957s | 0.000946s | byte equality observed |
| quick.test | 10 | 0.000421s | 0.000891s | 0.000900s | byte equality observed |
| ref_vector.test | 10 | 0.000927s | 0.000933s | 0.000914s | byte equality observed |
| remove.test | 10 | 0.000948s | 0.000956s | 0.000933s | byte equality observed |
| remove_if.test | 10 | 0.000945s | 0.000950s | 0.000936s | byte equality observed |
| repetitive_view.test | 10 | 0.000916s | 0.000916s | 0.000907s | byte equality observed |
| replace.test | 10 | 0.000924s | 0.000932s | 0.000937s | byte equality observed |
| replace_if.test | 10 | 0.000949s | 0.000957s | 0.000947s | byte equality observed |
| reverse.test | 10 | 0.000951s | 0.000955s | 0.000953s | byte equality observed |
| reverse_fold.test | 10 | 0.000935s | 0.000932s | 0.000930s | byte equality observed |
| reverse_iter_fold.test | 10 | 0.000932s | 0.000925s | 0.000924s | byte equality observed |
| reverse_view.test | 10 | 0.000937s | 0.000934s | 0.000931s | byte equality observed |
| segmented_find.test | 10 | 0.000922s | 0.000914s | 0.000918s | byte equality observed |
| segmented_find_if.test | 10 | 0.000917s | 0.000921s | 0.000916s | byte equality observed |
| segmented_fold.test | 10 | 0.000937s | 0.000949s | 0.000954s | byte equality observed |
| segmented_for_each.test | 10 | 0.000951s | 0.000938s | 0.000935s | byte equality observed |
| segmented_iterator_range.test | 10 | 0.000953s | 0.000948s | 0.000953s | byte equality observed |
| set.test | 10 | 0.000945s | 0.000932s | 0.000940s | byte equality observed |
| single_view.test | 10 | 0.000940s | 0.000940s | 0.000931s | byte equality observed |
| std_array.test | 10 | 0.000914s | 0.000917s | 0.000907s | byte equality observed |
| std_pair.test | 10 | 0.000923s | 0.000940s | 0.000929s | byte equality observed |
| std_tuple.test | 10 | 0.000922s | 0.000923s | 0.000915s | byte equality observed |
| std_tuple_iterator.test | 10 | 0.000899s | 0.000907s | 0.000914s | byte equality observed |
| swap.test | 10 | 0.000929s | 0.000923s | 0.000916s | byte equality observed |
| transform.test | 10 | 0.000940s | 0.000940s | 0.000927s | byte equality observed |
| transform_view.test | 10 | 0.000945s | 0.000942s | 0.000944s | byte equality observed |
| tuple_comparison.test | 10 | 0.000916s | 0.000909s | 0.000901s | byte equality observed |
| tuple_construction.test | 10 | 0.000908s | 0.000912s | 0.000906s | byte equality observed |
| tuple_conversion.test | 10 | 0.000913s | 0.000912s | 0.000909s | byte equality observed |
| tuple_copy.test | 10 | 0.000915s | 0.000916s | 0.000914s | byte equality observed |
| tuple_element.test | 10 | 0.000911s | 0.000898s | 0.000907s | byte equality observed |
| tuple_hash.test | 10 | 0.000920s | 0.000922s | 0.000917s | byte equality observed |
| tuple_make.test | 10 | 0.000913s | 0.000905s | 0.000906s | byte equality observed |
| tuple_misc.test | 10 | 0.000909s | 0.000923s | 0.000901s | byte equality observed |
| tuple_mutate.test | 10 | 0.000912s | 0.000903s | 0.000916s | byte equality observed |
| tuple_nest.test | 10 | 0.000906s | 0.000899s | 0.000918s | byte equality observed |
| tuple_tie.test | 10 | 0.000907s | 0.000906s | 0.000902s | byte equality observed |
| tuple_traits__maybe_variadic.test | 10 | 0.000914s | 0.000902s | 0.000914s | byte equality observed |
| tuple_traits__no_variadic.test | 10 | 0.000906s | 0.000909s | 0.000914s | byte equality observed |
| unfused.test | 10 | 0.000905s | 0.000914s | 0.000914s | byte equality observed |
| unfused_typed.test | 10 | 0.000909s | 0.000901s | 0.000905s | byte equality observed |
| vector_comparison.test | 10 | 0.000905s | 0.000899s | 0.000910s | byte equality observed |
| vector_construction.test | 10 | 0.000906s | 0.000899s | 0.000899s | byte equality observed |
| vector_conversion.test | 10 | 0.000903s | 0.000910s | 0.000909s | byte equality observed |
| vector_copy.test | 10 | 0.000913s | 0.000914s | 0.000903s | byte equality observed |
| vector_hash.test | 10 | 0.000915s | 0.000912s | 0.000919s | byte equality observed |
| vector_iterator.test | 10 | 0.000912s | 0.000909s | 0.000907s | byte equality observed |
| vector_make.test | 10 | 0.000915s | 0.000912s | 0.000914s | byte equality observed |
| vector_misc.test | 10 | 0.000924s | 0.000917s | 0.000916s | byte equality observed |
| vector_move.test | 10 | 0.000926s | 0.000927s | 0.000924s | byte equality observed |
| vector_mutate.test | 10 | 0.000916s | 0.000914s | 0.000911s | byte equality observed |
| vector_n.test | 10 | 0.000922s | 0.000917s | 0.000937s | byte equality observed |
| vector_nest.test | 10 | 0.000915s | 0.000903s | 0.000916s | byte equality observed |
| vector_tie.test | 10 | 0.000910s | 0.000916s | 0.000896s | byte equality observed |
| vector_traits__maybe_variadic.test | 10 | 0.000909s | 0.000909s | 0.000911s | byte equality observed |
| vector_traits__no_variadic.test | 10 | 0.000910s | 0.000910s | 0.000911s | byte equality observed |
| vector_value_at.test | 10 | 0.000911s | 0.000897s | 0.000896s | byte equality observed |
| zip.test | 10 | 0.000910s | 0.000908s | 0.000900s | byte equality observed |
| zip2.test | 10 | 0.000912s | 0.000903s | 0.000900s | byte equality observed |
| zip_ignore.test | 10 | 0.000909s | 0.000910s | 0.000896s | byte equality observed |
| zip_view.test | 10 | 0.000906s | 0.000902s | 0.000911s | byte equality observed |
| zip_view2.test | 10 | 0.000905s | 0.000909s | 0.000906s | byte equality observed |
| zip_view_ignore.test | 10 | 0.000901s | 0.000907s | 0.000908s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/43796354412).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
