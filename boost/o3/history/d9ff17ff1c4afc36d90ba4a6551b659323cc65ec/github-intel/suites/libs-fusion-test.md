# libs/fusion/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| all.test | RUN | 0.280882 | 0.616179 | 0.785633 | 0.001060 | 0.001105 | 0.000933 |
| any.test | RUN | 0.267117 | 0.577892 | 0.749102 | 0.001023 | 0.001196 | 0.001011 |
| clear.test | RUN | 0.198319 | 0.544636 | 0.610247 | 0.001189 | 0.001356 | 0.001049 |
| copy.test | RUN | 0.164861 | 0.408584 | 0.493804 | 0.001226 | 0.001142 | 0.001077 |
| count.test | RUN | 0.186664 | 0.448392 | 0.552478 | 0.001130 | 0.001451 | 0.001058 |
| count_if.test | RUN | 0.170342 | 0.406774 | 0.506328 | 0.001012 | 0.001233 | 0.001042 |
| erase.test | RUN | 0.249771 | 0.742250 | 0.830141 | 0.001078 | 0.001186 | 0.001082 |
| erase_key.test | RUN | 0.244365 | 0.736832 | 0.782900 | 0.001078 | 0.001193 | 0.001091 |
| filter.test | RUN | 0.212330 | 0.610987 | 0.703502 | 0.001163 | 0.001211 | 0.000993 |
| filter_if.test | RUN | 0.242929 | 0.722943 | 0.821676 | 0.001123 | 0.001240 | 0.001037 |
| find.test | RUN | 0.207158 | 0.503069 | 0.626819 | 0.001043 | 0.000982 | 0.001020 |
| find_if.test | RUN | 0.195149 | 0.459846 | 0.579784 | 0.001042 | 0.001282 | 0.001097 |
| fold.test | RUN | 0.217749 | 0.576839 | 0.713786 | 0.001215 | 0.001334 | 0.000995 |
| for_each.test | RUN | 0.194809 | 0.528363 | 0.619325 | 0.001138 | 0.001126 | 0.001076 |
| insert.test | RUN | 0.292682 | 0.909644 | 1.010100 | 0.001096 | 0.001275 | 0.001178 |
| insert_range.test | RUN | 0.292567 | 0.911703 | 1.011438 | 0.001162 | 0.001151 | 0.001066 |
| iter_fold.test | RUN | 0.327627 | 0.859295 | 1.173656 | 0.001020 | 0.001192 | 0.001087 |
| move.test | RUN | 0.166799 | 0.412481 | 0.498027 | 0.001030 | 0.001220 | 0.001082 |
| none.test | RUN | 0.269303 | 0.599437 | 0.763593 | 0.001021 | 0.001219 | 0.000884 |
| pop_back.test | RUN | 0.265170 | 0.801578 | 0.915924 | 0.001134 | 0.001173 | 0.001094 |
| pop_front.test | RUN | 0.228136 | 0.657092 | 0.723855 | 0.001043 | 0.001163 | 0.001005 |
| push_back.test | RUN | 0.276938 | 0.929659 | 0.993924 | 0.001078 | 0.001281 | 0.001166 |
| push_front.test | RUN | 0.264063 | 0.778120 | 0.832980 | 0.001121 | 0.001216 | 0.001066 |
| remove.test | RUN | 0.277842 | 0.865650 | 0.981825 | 0.000982 | 0.001131 | 0.001067 |
| remove_if.test | RUN | 0.244716 | 0.717968 | 0.844154 | 0.001083 | 0.001335 | 0.001023 |
| replace.test | RUN | 0.245863 | 0.720041 | 0.787048 | 0.001066 | 0.001327 | 0.001114 |
| replace_if.test | RUN | 0.233512 | 0.722733 | 0.770756 | 0.001134 | 0.001226 | 0.001077 |
| reverse_fold.test | RUN | 0.364096 | 0.958916 | 1.304044 | 0.001042 | 0.001132 | 0.001127 |
| reverse_iter_fold.test | RUN | 0.377523 | 0.997605 | 1.361645 | 0.001090 | 0.001228 | 0.001070 |
| reverse.test | RUN | 0.239005 | 0.734529 | 0.804719 | 0.001075 | 0.001251 | 0.001112 |
| segmented_for_each.test | RUN | 0.402484 | 1.387760 | 1.619253 | 0.001277 | 0.001218 | 0.001079 |
| segmented_find.test | RUN | 0.251670 | 0.709936 | 0.872272 | 0.001124 | 0.001129 | 0.001189 |
| segmented_find_if.test | RUN | 0.246146 | 0.718349 | 0.878902 | 0.000940 | 0.001142 | 0.001001 |
| segmented_fold.test | RUN | 0.317271 | 0.957851 | 1.162871 | 0.001071 | 0.001288 | 0.001056 |
| transform.test | RUN | 0.249851 | 0.772292 | 0.861226 | 0.001023 | 0.001211 | 0.001021 |
| join.test | RUN | 0.181687 | 0.465643 | 0.573253 | 0.001088 | 0.001204 | 0.001054 |
| zip.test | RUN | 0.315704 | 0.872394 | 1.099152 | 0.000985 | 0.001309 | 0.001088 |
| zip2.test | RUN | 0.320027 | 0.841813 | 1.059883 | 0.001024 | 0.001146 | 0.001058 |
| zip_ignore.test | RUN | 0.236216 | 0.564485 | 0.707307 | 0.000991 | 0.001252 | 0.001016 |
| flatten.test | RUN | 0.219375 | 0.648682 | 0.747424 | 0.000987 | 0.001195 | 0.001029 |
| ticket-5490.test | COMPILE | 0.119310 | 0.268654 | 0.321349 | — | — | — |
| as_deque.test | RUN | 0.217898 | 0.596317 | 0.759653 | 0.001317 | 0.001313 | 0.001095 |
| as_list.test | RUN | 0.248560 | 0.760155 | 0.833660 | 0.001123 | 0.001226 | 0.001135 |
| as_map.test | RUN | 0.249080 | 0.752673 | 0.827145 | 0.001107 | 0.001121 | 0.001073 |
| as_map_assoc.test | RUN | 0.244830 | 0.681906 | 0.793183 | 0.001048 | 0.001075 | 0.001037 |
| as_set.test | RUN | 0.284533 | 0.858038 | 0.971563 | 0.001316 | 0.001197 | 0.001066 |
| as_vector.test | RUN | 0.254952 | 0.767156 | 0.850105 | 0.001122 | 0.001213 | 0.001074 |
| boost_tuple.test | RUN | 0.253379 | 0.762557 | 0.839812 | 0.001000 | 0.001227 | 0.000943 |
| boost_tuple_iterator.test | RUN | 0.169818 | 0.439765 | 0.508099 | 0.001059 | 0.001164 | 0.000991 |
| cons.test | RUN | 0.330734 | 0.856303 | 1.000502 | 0.001122 | 0.001200 | 0.001110 |
| convert_boost_tuple.test | RUN | 0.196285 | 0.648765 | 0.652210 | 0.001140 | 0.001157 | 0.000989 |
| convert_deque.test | RUN | 0.201376 | 0.650003 | 0.672486 | 0.001168 | 0.001184 | 0.000957 |
| convert_list.test | RUN | 0.198100 | 0.667679 | 0.657042 | 0.001175 | 0.001173 | 0.000955 |
| convert_std_pair.test | RUN | 0.209587 | 0.668067 | 0.667976 | 0.001114 | 0.001253 | 0.001076 |
| convert_std_tuple.test | RUN | 0.198875 | 0.658474 | 0.657705 | 0.001075 | 0.001151 | 0.001121 |
| convert_vector.test | RUN | 0.194555 | 0.654222 | 0.652745 | 0.001093 | 0.001192 | 0.000863 |
| filter_view.test | RUN | 0.241172 | 0.682914 | 0.790689 | 0.001006 | 0.001199 | 0.001002 |
| hash.test | RUN | 0.237837 | 0.621288 | 0.738333 | 0.001121 | 0.001199 | 0.001034 |
| io.test | RUN | 0.259563 | 0.893740 | 0.903659 | 0.001183 | 0.001345 | 0.001178 |
| iterator_range.test | RUN | 0.228306 | 0.658421 | 0.753394 | 0.001286 | 0.001256 | 0.001099 |
| joint_view.test | RUN | 0.308561 | 1.097201 | 1.136311 | 0.001054 | 0.001271 | 0.000991 |
| list_comparison.test | RUN | 0.177235 | 0.451716 | 0.561698 | 0.001041 | 0.001229 | 0.000968 |
| list_construction.test | RUN | 0.169927 | 0.442160 | 0.520736 | 0.001045 | 0.001063 | 0.001094 |
| list_copy.test | RUN | 0.271281 | 0.796056 | 0.910097 | 0.001038 | 0.001190 | 0.001082 |
| list_iterator.test | RUN | 0.169831 | 0.452896 | 0.504458 | 0.001064 | 0.001075 | 0.001052 |
| list_hash.test | RUN | 0.233549 | 0.906158 | 0.744005 | 0.001067 | 0.001196 | 0.000993 |
| list_make.test | RUN | 0.179997 | 0.484892 | 0.571882 | 0.001071 | 0.001156 | 0.001002 |
| list_misc.test | RUN | 0.240190 | 0.568846 | 0.689147 | 0.001017 | 0.001092 | 0.001003 |
| list_mutate.test | RUN | 0.162932 | 0.391126 | 0.466320 | 0.001037 | 0.001162 | 0.001110 |
| list_nest.test | RUN | 0.325155 | 1.097704 | 1.312385 | 0.001021 | 0.001139 | 0.000998 |
| list_tie.test | RUN | 0.176663 | 0.435695 | 0.538106 | 0.001059 | 0.001098 | 0.001069 |
| list_value_at.test | RUN | 0.162864 | 0.403751 | 0.479526 | 0.001137 | 0.001184 | 0.001007 |
| deque_comparison.test | RUN | 0.174391 | 0.460494 | 0.527053 | 0.001042 | 0.001161 | 0.001000 |
| deque_construction.test | RUN | 0.173056 | 0.429965 | 0.564626 | 0.001167 | 0.001172 | 0.001002 |
| deque_copy.test | RUN | 0.250383 | 0.754488 | 0.835980 | 0.001148 | 0.001176 | 0.001061 |
| deque_iterator.test | RUN | 0.172316 | 0.468417 | 0.523299 | 0.001026 | 0.001255 | 0.001100 |
| deque_hash.test | RUN | 0.237515 | 0.881878 | 0.743615 | 0.001016 | 0.001245 | 0.001054 |
| deque_is_constructible.test | COMPILE | 0.091501 | 0.191204 | 0.235132 | — | — | — |
| deque_make.test | RUN | 0.176155 | 0.465076 | 0.554597 | 0.001058 | 0.001270 | 0.000997 |
| deque_misc.test | RUN | 0.230769 | 0.564749 | 0.659000 | 0.000954 | 0.001210 | 0.000984 |
| deque_move.test | RUN | 0.176823 | 0.484062 | 0.536255 | 0.001153 | 0.001139 | 0.000950 |
| deque_mutate.test | RUN | 0.157174 | 0.378922 | 0.461986 | 0.001103 | 0.001271 | 0.001068 |
| deque_nest.test | RUN | 0.493124 | 1.772171 | 2.054349 | 0.001092 | 0.001204 | 0.001041 |
| deque_tie.test | RUN | 0.167554 | 0.400815 | 0.474459 | 0.001031 | 0.001203 | 0.001034 |
| deque_value_at.test | RUN | 0.154523 | 0.405673 | 0.490952 | 0.001265 | 0.001265 | 0.001034 |
| front_extended_deque.test | RUN | 0.245842 | 0.587069 | 0.716485 | 0.000993 | 0.001214 | 0.001110 |
| back_extended_deque.test | RUN | 0.233432 | 0.600304 | 0.746279 | 0.000997 | 0.001111 | 0.001033 |
| make_list.test | RUN | 0.186804 | 0.480646 | 0.557328 | 0.001056 | 0.001287 | 0.001043 |
| make_vector.test | RUN | 0.183163 | 0.462771 | 0.548356 | 0.001013 | 0.001234 | 0.001035 |
| map.test | RUN | 0.244395 | 0.740816 | 0.813180 | 0.001043 | 0.001270 | 0.001033 |
| map_comparison.test | RUN | 0.183436 | 0.468229 | 0.553638 | 0.001146 | 0.001284 | 0.001038 |
| map_construction.test | RUN | 0.174874 | 0.441651 | 0.539920 | 0.001036 | 0.001256 | 0.000902 |
| map_copy.test | RUN | 0.215661 | 0.577014 | 0.669965 | 0.000986 | 0.001289 | 0.001031 |
| map_misc.test | RUN | 0.227435 | 0.577978 | 0.687336 | 0.001116 | 0.001362 | 0.001000 |
| map_move.test | RUN | 0.181560 | 0.491860 | 0.536212 | 0.001029 | 0.001102 | 0.000983 |
| map_mutate.test | RUN | 0.163012 | 0.379429 | 0.460388 | 0.001028 | 0.001158 | 0.000982 |
| map_tie.test | RUN | 0.169153 | 0.382171 | 0.472584 | 0.001031 | 0.001237 | 0.001022 |
| nil.test | RUN | 0.108374 | 0.271872 | 0.323333 | 0.001100 | 0.001179 | 0.001022 |
| nview.test | RUN | 0.221933 | 0.568101 | 0.690096 | 0.001122 | 0.001188 | 0.001073 |
| reverse_view.test | RUN | 0.302465 | 0.956163 | 1.037025 | 0.001130 | 0.001530 | 0.001055 |
| segmented_iterator_range.test | RUN | 0.343647 | 1.103404 | 1.294060 | 0.001034 | 0.001198 | 0.001041 |
| set.test | RUN | 0.218287 | 0.644971 | 0.713805 | 0.000985 | 0.001117 | 0.001041 |
| single_view.test | RUN | 0.195805 | 0.589601 | 0.660533 | 0.001053 | 0.001255 | 0.001080 |
| std_pair.test | RUN | 0.253518 | 0.750006 | 0.843540 | 0.001011 | 0.001218 | 0.001034 |
| boost_array.test | RUN | 0.206537 | 0.521757 | 0.636203 | 0.001095 | 0.001158 | 0.001028 |
| array.test | RUN | 0.210986 | 0.505004 | 0.624352 | 0.001036 | 0.001167 | 0.000972 |
| std_array.test | RUN | 0.216576 | 0.509748 | 0.604422 | 0.001030 | 0.001081 | 0.001027 |
| tuple_comparison.test | RUN | 0.188751 | 0.475043 | 0.571884 | 0.001012 | 0.001251 | 0.001063 |
| tuple_construction.test | RUN | 0.191541 | 0.476917 | 0.569877 | 0.001041 | 0.001206 | 0.001008 |
| tuple_conversion.test | RUN | 0.429626 | 1.491960 | 1.869519 | 0.001090 | 0.001230 | 0.000997 |
| tuple_copy.test | RUN | 0.275868 | 0.864405 | 0.998863 | 0.001185 | 0.001169 | 0.001077 |
| tuple_element.test | RUN | 0.172980 | 0.440144 | 0.536551 | 0.001031 | 0.000974 | 0.001188 |
| tuple_make.test | RUN | 0.190183 | 0.501255 | 0.593451 | 0.000985 | 0.001185 | 0.000987 |
| tuple_misc.test | RUN | 0.240034 | 0.613126 | 0.760712 | 0.001068 | 0.001102 | 0.001031 |
| tuple_mutate.test | RUN | 0.166353 | 0.410284 | 0.495058 | 0.001262 | 0.001165 | 0.001142 |
| tuple_nest.test | RUN | 0.729425 | 3.029815 | 3.527567 | 0.001064 | 0.001151 | 0.001088 |
| tuple_hash.test | RUN | 0.252294 | 0.921478 | 0.782707 | 0.001104 | 0.001335 | 0.001011 |
| tuple_tie.test | RUN | 0.185032 | 0.447490 | 0.536637 | 0.001051 | 0.001302 | 0.001082 |
| tuple_traits__maybe_variadic.test | RUN | 0.196448 | 0.556603 | 0.576540 | 0.001095 | 0.001213 | 0.000999 |
| tuple_traits__no_variadic.test | RUN | 0.216087 | 0.578136 | 0.644537 | 0.001020 | 0.001174 | 0.001093 |
| transform_view.test | RUN | 0.294544 | 0.949756 | 1.015604 | 0.001148 | 0.001211 | 0.001005 |
| identity_view.test | RUN | 0.282482 | 0.874618 | 0.961043 | 0.000836 | 0.001142 | 0.001095 |
| vector_comparison.test | RUN | 0.182364 | 0.468355 | 0.592023 | 0.001066 | 0.001310 | 0.001014 |
| vector_construction.test | RUN | 0.176344 | 0.441065 | 0.524666 | 0.001100 | 0.001279 | 0.001085 |
| vector_conversion.test | RUN | 0.514555 | 1.996029 | 2.412780 | 0.001158 | 0.001175 | 0.001009 |
| vector_copy.test | RUN | 0.267692 | 0.873413 | 1.011513 | 0.001042 | 0.001215 | 0.000996 |
| vector_iterator.test | RUN | 0.178048 | 0.448485 | 0.501295 | 0.001161 | 0.001126 | 0.001075 |
| vector_make.test | RUN | 0.179971 | 0.481503 | 0.552846 | 0.001208 | 0.001170 | 0.001018 |
| vector_misc.test | RUN | 0.232732 | 0.580723 | 0.720438 | 0.001023 | 0.000772 | 0.001055 |
| vector_move.test | RUN | 0.179159 | 0.501269 | 0.542549 | 0.001097 | 0.001194 | 0.001094 |
| vector_mutate.test | RUN | 0.152971 | 0.386819 | 0.463767 | 0.001048 | 0.001243 | 0.000947 |
| vector_n.test | RUN | 0.204236 | 0.490887 | 0.629586 | 0.001188 | 0.001292 | 0.001056 |
| vector_nest.test | RUN | 0.730453 | 3.293597 | 3.578624 | 0.000955 | 0.001280 | 0.001102 |
| vector_hash.test | RUN | 0.234762 | 0.888439 | 0.715516 | 0.001055 | 0.001224 | 0.001078 |
| vector_tie.test | RUN | 0.172316 | 0.432650 | 0.521489 | 0.001071 | 0.001228 | 0.001018 |
| vector_traits__maybe_variadic.test | RUN | 0.177962 | 0.495279 | 0.517758 | 0.001073 | 0.001235 | 0.001059 |
| vector_traits__no_variadic.test | RUN | 0.197783 | 0.551332 | 0.578510 | 0.001078 | 0.001270 | 0.000997 |
| vector_value_at.test | RUN | 0.163468 | 0.387744 | 0.472288 | 0.001007 | 0.001246 | 0.001015 |
| zip_view.test | RUN | 0.337118 | 0.960492 | 1.191140 | 0.000881 | 0.001139 | 0.000961 |
| zip_view2.test | RUN | 0.272219 | 0.765469 | 0.920667 | 0.001044 | 0.001103 | 0.001054 |
| zip_view_ignore.test | RUN | 0.262441 | 0.688721 | 0.880192 | 0.001090 | 0.001242 | 0.001063 |
| repetitive_view.test | RUN | 0.442365 | 1.250286 | 1.594650 | 0.001105 | 0.001176 | 0.001027 |
| deduce_sequence.test | RUN | 0.209356 | 0.533754 | 0.629614 | 0.001157 | 0.001230 | 0.001127 |
| adapt_adt_named.test | RUN | 0.262370 | 0.761295 | 0.871321 | 0.001071 | 0.001126 | 0.001026 |
| adapt_adt_named_empty.test | RUN | 0.225198 | 0.615128 | 0.672928 | 0.001061 | 0.001197 | 0.001122 |
| adapt_adt.test | RUN | 0.290138 | 1.000367 | 1.018904 | 0.001096 | 0.001316 | 0.001044 |
| adapt_adt_empty.test | RUN | 0.218943 | 0.613750 | 0.676214 | 0.001202 | 0.001262 | 0.000982 |
| adapt_assoc_adt_named.test | RUN | 0.293479 | 0.784461 | 0.892886 | 0.001097 | 0.001150 | 0.001048 |
| adapt_assoc_adt_named_empty.test | RUN | 0.218251 | 0.610617 | 0.684949 | 0.001113 | 0.001300 | 0.001359 |
| adapt_assoc_adt.test | RUN | 0.281898 | 0.822013 | 0.942687 | 0.001120 | 0.001208 | 0.001030 |
| adapt_assoc_adt_empty.test | RUN | 0.216000 | 0.620180 | 0.673221 | 0.000850 | 0.001251 | 0.001060 |
| adapt_assoc_struct_named.test | RUN | 0.279414 | 0.775553 | 0.867401 | 0.001103 | 0.001194 | 0.001074 |
| adapt_assoc_struct_named_empty.test | RUN | 0.225913 | 0.610990 | 0.677719 | 0.001047 | 0.001203 | 0.001115 |
| adapt_assoc_struct.test | RUN | 0.248568 | 0.736899 | 0.800947 | 0.001060 | 0.001377 | 0.000926 |
| adapt_assoc_struct_empty.test | RUN | 0.214775 | 0.617608 | 0.676146 | 0.001274 | 0.001211 | 0.001023 |
| adapt_assoc_tpl_adt.test | RUN | 0.296745 | 0.834167 | 0.952096 | 0.001112 | 0.001254 | 0.001056 |
| adapt_assoc_tpl_adt_empty.test | RUN | 0.220419 | 0.610402 | 0.683428 | 0.001030 | 0.001254 | 0.001099 |
| adapt_assoc_tpl_struct.test | RUN | 0.248072 | 0.712560 | 0.782310 | 0.001215 | 0.001164 | 0.001006 |
| adapt_assoc_tpl_struct_empty.test | RUN | 0.218841 | 0.615610 | 0.675347 | 0.001096 | 0.001409 | 0.001056 |
| adapt_struct_named.test | RUN | 0.249429 | 0.739950 | 0.804202 | 0.001076 | 0.001183 | 0.001130 |
| adapt_struct_named_empty.test | RUN | 0.220551 | 0.611590 | 0.680814 | 0.000971 | 0.001394 | 0.001055 |
| adapt_struct.test | RUN | 0.269377 | 0.842885 | 0.903925 | 0.001094 | 0.001250 | 0.001050 |
| adapt_struct_empty.test | RUN | 0.218791 | 0.619067 | 0.667636 | 0.001171 | 0.001225 | 0.001004 |
| adapt_tpl_adt.test | RUN | 0.280770 | 0.964612 | 0.955805 | 0.001006 | 0.001225 | 0.001057 |
| adapt_tpl_adt_empty.test | RUN | 0.233237 | 0.615512 | 0.675607 | 0.001002 | 0.001164 | 0.001044 |
| adapt_tpl_struct.test | RUN | 0.233169 | 0.676771 | 0.748451 | 0.001056 | 0.001127 | 0.001047 |
| adapt_tpl_struct_empty.test | RUN | 0.217877 | 0.623055 | 0.675370 | 0.001098 | 0.001103 | 0.001050 |
| adt_attribute_proxy.test | RUN | 0.248781 | 0.586992 | 0.707731 | 0.000968 | 0.001181 | 0.001107 |
| define_struct.test | RUN | 0.305836 | 0.825050 | 0.952932 | 0.001149 | 0.001347 | 0.001065 |
| define_struct_empty.test | RUN | 0.262399 | 0.680775 | 0.774512 | 0.000994 | 0.001129 | 0.001031 |
| define_struct_move.test | RUN | 0.166960 | 0.385641 | 0.458004 | 0.001012 | 0.001143 | 0.001030 |
| define_struct_inline.test | RUN | 0.327593 | 1.002008 | 1.065278 | 0.001097 | 0.001173 | 0.001034 |
| define_struct_inline_empty.test | RUN | 0.265231 | 0.699295 | 0.780016 | 0.001149 | 0.001302 | 0.001057 |
| define_struct_inline_move.test | RUN | 0.161702 | 0.375886 | 0.467178 | 0.000984 | 0.001255 | 0.001090 |
| define_assoc_struct.test | RUN | 0.290198 | 0.796052 | 0.920719 | 0.001035 | 0.001270 | 0.001042 |
| define_assoc_struct_empty.test | RUN | 0.261862 | 0.685619 | 0.794417 | 0.000967 | 0.001171 | 0.001015 |
| define_assoc_struct_move.test | RUN | 0.165691 | 0.381012 | 0.453115 | 0.001066 | 0.001132 | 0.001032 |
| define_tpl_struct.test | RUN | 0.287725 | 0.794969 | 0.899105 | 0.000995 | 0.001183 | 0.001074 |
| define_tpl_struct_empty.test | RUN | 0.260892 | 0.708339 | 0.782194 | 0.001187 | 0.001173 | 0.001044 |
| define_tpl_struct_move.test | RUN | 0.168858 | 0.378853 | 0.465934 | 0.001039 | 0.001105 | 0.001037 |
| define_tpl_struct_inline.test | RUN | 0.303228 | 0.936459 | 0.996824 | 0.001052 | 0.001206 | 0.001053 |
| define_tpl_struct_inline_empty.test | RUN | 0.259096 | 0.706302 | 0.796675 | 0.001059 | 0.001185 | 0.001058 |
| define_tpl_struct_inline_move.test | RUN | 0.164824 | 0.375381 | 0.469316 | 0.001114 | 0.001287 | 0.001047 |
| define_assoc_tpl_struct.test | RUN | 0.297646 | 0.804280 | 0.903401 | 0.001089 | 0.001227 | 0.001024 |
| define_assoc_tpl_struct_empty.test | RUN | 0.263913 | 0.689394 | 0.790025 | 0.001096 | 0.001213 | 0.001039 |
| define_assoc_tpl_struct_move.test | RUN | 0.160689 | 0.380753 | 0.467710 | 0.001043 | 0.001089 | 0.001015 |
| std_tuple.test | RUN | 0.175120 | 0.440974 | 0.515504 | 0.001026 | 0.001126 | 0.001009 |
| std_tuple_iterator.test | RUN | 0.174094 | 0.455837 | 0.515145 | 0.001103 | 0.001152 | 0.001084 |
| ref_vector.test | RUN | 0.191753 | 0.464741 | 0.547534 | 0.000996 | 0.001174 | 0.001057 |
| flatten_view.test | RUN | 0.204918 | 0.580231 | 0.670353 | 0.001066 | 0.001181 | 0.001059 |
| github-159.test | COMPILE | 0.091263 | 0.208432 | 0.241411 | — | — | — |
| github-176.test | RUN | 0.190819 | 0.507189 | 0.564015 | 0.001019 | 0.001147 | 0.000991 |
| size.test | COMPILE | 0.164821 | 0.359666 | 0.434065 | — | — | — |
| fused.test | RUN | 0.234399 | 0.528638 | 0.649660 | 0.001065 | 0.001300 | 0.001029 |
| fused_function_object.test | RUN | 0.167132 | 0.403259 | 0.489908 | 0.001001 | 0.001155 | 0.001018 |
| fused_procedure.test | RUN | 0.222216 | 0.524459 | 0.636118 | 0.000975 | 0.001173 | 0.001057 |
| unfused.test | RUN | 0.170903 | 0.432186 | 0.511927 | 0.001000 | 0.001139 | 0.001014 |
| unfused_typed.test | RUN | 0.173699 | 0.454343 | 0.525800 | 0.001008 | 0.001286 | 0.001006 |
| make_fused.test | RUN | 0.231209 | 0.545511 | 0.649757 | 0.001011 | 0.001119 | 0.001016 |
| make_fused_function_object.test | RUN | 0.167176 | 0.402353 | 0.505910 | 0.001010 | 0.001348 | 0.001016 |
| make_fused_procedure.test | RUN | 0.223407 | 0.520862 | 0.626629 | 0.000966 | 0.001270 | 0.001009 |
| make_unfused.test | RUN | 0.169545 | 0.428834 | 0.506075 | 0.001076 | 0.001219 | 0.000990 |
| invoke.test | RUN | 0.453538 | 1.500488 | 1.745616 | 0.001124 | 0.001102 | 0.001007 |
| invoke_function_object.test | RUN | 0.207560 | 0.540782 | 0.655669 | 0.001075 | 0.001323 | 0.001080 |
| invoke_procedure.test | RUN | 0.361861 | 1.125820 | 1.286827 | 0.001030 | 0.001193 | 0.000994 |
| swap.test | RUN | 0.265797 | 0.687808 | 0.829559 | 0.001027 | 0.001230 | 0.001067 |
| is_sequence.test | COMPILE | 0.043513 | 0.093102 | 0.100181 | — | — | — |
| is_view.test | COMPILE | 0.044411 | 0.091383 | 0.098321 | — | — | — |
| pair_deque.test | COMPILE | 0.093513 | 0.216796 | 0.253417 | — | — | — |
| pair_list.test | COMPILE | 0.092885 | 0.210705 | 0.240060 | — | — | — |
| pair_map.test | COMPILE | 0.096712 | 0.222701 | 0.263597 | — | — | — |
| pair_set.test | COMPILE | 0.098429 | 0.216296 | 0.251249 | — | — | — |
| pair_vector.test | COMPILE | 0.093729 | 0.212542 | 0.243732 | — | — | — |
| pair_nest.test | COMPILE | 0.036529 | 0.084909 | 0.092084 | — | — | — |
| index_sequence.test | COMPILE | 0.031968 | 0.059458 | 0.068956 | — | — | — |
| and.test | COMPILE | 0.023412 | 0.045102 | 0.047666 | — | — | — |
| tag_of.test | COMPILE | 0.041695 | 0.088794 | 0.095646 | — | — | — |
| unused.test | COMPILE | 0.021318 | 0.057243 | 0.056227 | — | — | — |
| tag_of_fallback.test | COMPILE | 0.036354 | 0.091399 | 0.096109 | — | — | — |
| make_pair_r-value.test | COMPILE | 0.033485 | 0.070807 | 0.067850 | — | — | — |
| quick.test | RUN | 0.127384 | 0.305973 | 0.310562 | 0.000343 | 0.000836 | 0.000695 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.998× | 0.996×, 1.000× | 1.001× |
| clang | 1.001× | 0.999×, 1.003× | 0.996× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1362 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43670794197).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| adapt_adt.test | 10 | 0.000848s | 0.000835s | 0.000827s | byte equality observed |
| adapt_adt_empty.test | 10 | 0.000842s | 0.000808s | 0.000808s | byte equality observed |
| adapt_adt_named.test | 10 | 0.000817s | 0.000826s | 0.000843s | byte equality observed |
| adapt_adt_named_empty.test | 10 | 0.000817s | 0.000808s | 0.000843s | byte equality observed |
| adapt_assoc_adt.test | 10 | 0.000800s | 0.000794s | 0.000836s | byte equality observed |
| adapt_assoc_adt_empty.test | 10 | 0.000822s | 0.000831s | 0.000834s | byte equality observed |
| adapt_assoc_adt_named.test | 10 | 0.000811s | 0.000839s | 0.000838s | byte equality observed |
| adapt_assoc_adt_named_empty.test | 10 | 0.000823s | 0.000832s | 0.000834s | byte equality observed |
| adapt_assoc_struct.test | 10 | 0.000829s | 0.000839s | 0.000800s | byte equality observed |
| adapt_assoc_struct_empty.test | 10 | 0.000831s | 0.000823s | 0.000841s | byte equality observed |
| adapt_assoc_struct_named.test | 10 | 0.000835s | 0.000819s | 0.000839s | byte equality observed |
| adapt_assoc_struct_named_empty.test | 10 | 0.000852s | 0.000824s | 0.000841s | byte equality observed |
| adapt_assoc_tpl_adt.test | 10 | 0.000838s | 0.000809s | 0.000848s | byte equality observed |
| adapt_assoc_tpl_adt_empty.test | 10 | 0.000825s | 0.000827s | 0.000840s | byte equality observed |
| adapt_assoc_tpl_struct.test | 10 | 0.000851s | 0.000839s | 0.000850s | byte equality observed |
| adapt_assoc_tpl_struct_empty.test | 10 | 0.000810s | 0.000814s | 0.000832s | byte equality observed |
| adapt_struct.test | 10 | 0.000835s | 0.000803s | 0.000791s | byte equality observed |
| adapt_struct_empty.test | 10 | 0.000812s | 0.000819s | 0.000832s | byte equality observed |
| adapt_struct_named.test | 10 | 0.000807s | 0.000820s | 0.000823s | byte equality observed |
| adapt_struct_named_empty.test | 10 | 0.000834s | 0.000807s | 0.000809s | byte equality observed |
| adapt_tpl_adt.test | 10 | 0.000832s | 0.000808s | 0.000827s | byte equality observed |
| adapt_tpl_adt_empty.test | 10 | 0.000805s | 0.000794s | 0.000806s | byte equality observed |
| adapt_tpl_struct.test | 10 | 0.000826s | 0.000821s | 0.000805s | byte equality observed |
| adapt_tpl_struct_empty.test | 10 | 0.000804s | 0.000813s | 0.000801s | byte equality observed |
| adt_attribute_proxy.test | 10 | 0.000819s | 0.000811s | 0.000847s | byte equality observed |
| all.test | 10 | 0.000814s | 0.000843s | 0.000813s | byte equality observed |
| any.test | 10 | 0.000824s | 0.000778s | 0.000799s | byte equality observed |
| array.test | 10 | 0.000806s | 0.000823s | 0.000797s | byte equality observed |
| as_deque.test | 10 | 0.000806s | 0.000814s | 0.000802s | byte equality observed |
| as_list.test | 10 | 0.000829s | 0.000846s | 0.000823s | byte equality observed |
| as_map.test | 10 | 0.000839s | 0.000857s | 0.000813s | byte equality observed |
| as_map_assoc.test | 10 | 0.000843s | 0.000840s | 0.000802s | byte equality observed |
| as_set.test | 10 | 0.000853s | 0.000830s | 0.000848s | byte equality observed |
| as_vector.test | 10 | 0.000847s | 0.000831s | 0.000857s | byte equality observed |
| back_extended_deque.test | 10 | 0.000798s | 0.000813s | 0.000821s | byte equality observed |
| boost_array.test | 10 | 0.000820s | 0.000824s | 0.000809s | byte equality observed |
| boost_tuple.test | 10 | 0.000830s | 0.000832s | 0.000838s | byte equality observed |
| boost_tuple_iterator.test | 10 | 0.000812s | 0.000835s | 0.000802s | byte equality observed |
| clear.test | 10 | 0.000823s | 0.000828s | 0.000799s | byte equality observed |
| cons.test | 10 | 0.000837s | 0.000861s | 0.000820s | byte equality observed |
| convert_boost_tuple.test | 10 | 0.000807s | 0.000848s | 0.000835s | byte equality observed |
| convert_deque.test | 10 | 0.000804s | 0.000847s | 0.000820s | byte equality observed |
| convert_list.test | 10 | 0.000805s | 0.000850s | 0.000821s | byte equality observed |
| convert_std_pair.test | 10 | 0.000796s | 0.000780s | 0.000810s | byte equality observed |
| convert_std_tuple.test | 10 | 0.000805s | 0.000803s | 0.000804s | byte equality observed |
| convert_vector.test | 10 | 0.000817s | 0.000820s | 0.000809s | byte equality observed |
| copy.test | 10 | 0.000804s | 0.000809s | 0.000808s | byte equality observed |
| count.test | 10 | 0.000832s | 0.000814s | 0.000813s | byte equality observed |
| count_if.test | 10 | 0.000812s | 0.000800s | 0.000822s | byte equality observed |
| deduce_sequence.test | 10 | 0.000837s | 0.000826s | 0.000825s | byte equality observed |
| define_assoc_struct.test | 10 | 0.000840s | 0.000848s | 0.000860s | byte equality observed |
| define_assoc_struct_empty.test | 10 | 0.000854s | 0.000829s | 0.000791s | byte equality observed |
| define_assoc_struct_move.test | 10 | 0.000817s | 0.000803s | 0.000795s | byte equality observed |
| define_assoc_tpl_struct.test | 10 | 0.000804s | 0.000845s | 0.000821s | byte equality observed |
| define_assoc_tpl_struct_empty.test | 10 | 0.000817s | 0.000861s | 0.000794s | byte equality observed |
| define_assoc_tpl_struct_move.test | 10 | 0.000803s | 0.000800s | 0.000820s | byte equality observed |
| define_struct.test | 10 | 0.000807s | 0.000799s | 0.000816s | byte equality observed |
| define_struct_empty.test | 10 | 0.000823s | 0.000804s | 0.000821s | byte equality observed |
| define_struct_inline.test | 10 | 0.000824s | 0.000825s | 0.000821s | byte equality observed |
| define_struct_inline_empty.test | 10 | 0.000830s | 0.000799s | 0.000821s | byte equality observed |
| define_struct_inline_move.test | 10 | 0.000795s | 0.000825s | 0.000829s | byte equality observed |
| define_struct_move.test | 10 | 0.000808s | 0.000810s | 0.000815s | byte equality observed |
| define_tpl_struct.test | 10 | 0.000820s | 0.000828s | 0.000781s | byte equality observed |
| define_tpl_struct_empty.test | 10 | 0.000826s | 0.000840s | 0.000811s | byte equality observed |
| define_tpl_struct_inline.test | 10 | 0.000835s | 0.000847s | 0.000804s | byte equality observed |
| define_tpl_struct_inline_empty.test | 10 | 0.000813s | 0.000833s | 0.000828s | byte equality observed |
| define_tpl_struct_inline_move.test | 10 | 0.000830s | 0.000815s | 0.000821s | byte equality observed |
| define_tpl_struct_move.test | 10 | 0.000819s | 0.000786s | 0.000794s | byte equality observed |
| deque_comparison.test | 10 | 0.000814s | 0.000797s | 0.000806s | byte equality observed |
| deque_construction.test | 10 | 0.000826s | 0.000778s | 0.000797s | byte equality observed |
| deque_copy.test | 10 | 0.000821s | 0.000796s | 0.000801s | byte equality observed |
| deque_hash.test | 10 | 0.000831s | 0.000801s | 0.000793s | byte equality observed |
| deque_iterator.test | 10 | 0.000824s | 0.000822s | 0.000825s | byte equality observed |
| deque_make.test | 10 | 0.000813s | 0.000805s | 0.000841s | byte equality observed |
| deque_misc.test | 10 | 0.000822s | 0.000833s | 0.000832s | byte equality observed |
| deque_move.test | 10 | 0.000842s | 0.000829s | 0.000827s | byte equality observed |
| deque_mutate.test | 10 | 0.000808s | 0.000812s | 0.000806s | byte equality observed |
| deque_nest.test | 10 | 0.000799s | 0.000814s | 0.000794s | byte equality observed |
| deque_tie.test | 10 | 0.000824s | 0.000804s | 0.000791s | byte equality observed |
| deque_value_at.test | 10 | 0.000810s | 0.000830s | 0.000804s | byte equality observed |
| erase.test | 10 | 0.000800s | 0.000813s | 0.000830s | byte equality observed |
| erase_key.test | 10 | 0.000825s | 0.000846s | 0.000851s | byte equality observed |
| filter.test | 10 | 0.000820s | 0.000802s | 0.000786s | byte equality observed |
| filter_if.test | 10 | 0.000845s | 0.000842s | 0.000848s | byte equality observed |
| filter_view.test | 10 | 0.000839s | 0.000825s | 0.000848s | byte equality observed |
| find.test | 10 | 0.000834s | 0.000859s | 0.000839s | byte equality observed |
| find_if.test | 10 | 0.000826s | 0.000816s | 0.000846s | byte equality observed |
| flatten.test | 10 | 0.000814s | 0.000795s | 0.000858s | byte equality observed |
| flatten_view.test | 10 | 0.000810s | 0.000837s | 0.000828s | byte equality observed |
| fold.test | 10 | 0.000820s | 0.000802s | 0.000819s | byte equality observed |
| for_each.test | 10 | 0.000821s | 0.000804s | 0.000826s | byte equality observed |
| front_extended_deque.test | 10 | 0.000815s | 0.000771s | 0.000781s | byte equality observed |
| fused.test | 10 | 0.000823s | 0.000780s | 0.000815s | byte equality observed |
| fused_function_object.test | 10 | 0.000827s | 0.000789s | 0.000809s | byte equality observed |
| fused_procedure.test | 10 | 0.000804s | 0.000827s | 0.000811s | byte equality observed |
| github-176.test | 10 | 0.000815s | 0.000782s | 0.000841s | byte equality observed |
| hash.test | 10 | 0.000796s | 0.000815s | 0.000832s | byte equality observed |
| identity_view.test | 10 | 0.000831s | 0.000821s | 0.000842s | byte equality observed |
| insert.test | 10 | 0.000855s | 0.000827s | 0.000828s | byte equality observed |
| insert_range.test | 10 | 0.000826s | 0.000826s | 0.000863s | byte equality observed |
| invoke.test | 10 | 0.000833s | 0.000799s | 0.000804s | byte equality observed |
| invoke_function_object.test | 10 | 0.000823s | 0.000805s | 0.000825s | byte equality observed |
| invoke_procedure.test | 10 | 0.000800s | 0.000809s | 0.000806s | byte equality observed |
| io.test | 10 | 0.000890s | 0.000911s | 0.000903s | byte equality observed |
| iter_fold.test | 10 | 0.000793s | 0.000836s | 0.000807s | byte equality observed |
| iterator_range.test | 10 | 0.000819s | 0.000859s | 0.000813s | byte equality observed |
| join.test | 10 | 0.000800s | 0.000827s | 0.000796s | byte equality observed |
| joint_view.test | 10 | 0.000847s | 0.000858s | 0.000836s | byte equality observed |
| list_comparison.test | 10 | 0.000797s | 0.000809s | 0.000819s | byte equality observed |
| list_construction.test | 10 | 0.000838s | 0.000799s | 0.000819s | byte equality observed |
| list_copy.test | 10 | 0.000838s | 0.000784s | 0.000825s | byte equality observed |
| list_hash.test | 10 | 0.000819s | 0.000808s | 0.000847s | byte equality observed |
| list_iterator.test | 10 | 0.000807s | 0.000796s | 0.000851s | byte equality observed |
| list_make.test | 10 | 0.000774s | 0.000812s | 0.000834s | byte equality observed |
| list_misc.test | 10 | 0.000829s | 0.000825s | 0.000809s | byte equality observed |
| list_mutate.test | 10 | 0.000806s | 0.000827s | 0.000784s | byte equality observed |
| list_nest.test | 10 | 0.000813s | 0.000826s | 0.000802s | byte equality observed |
| list_tie.test | 10 | 0.000797s | 0.000814s | 0.000811s | byte equality observed |
| list_value_at.test | 10 | 0.000818s | 0.000833s | 0.000831s | byte equality observed |
| make_fused.test | 10 | 0.000803s | 0.000819s | 0.000794s | byte equality observed |
| make_fused_function_object.test | 10 | 0.000815s | 0.000810s | 0.000804s | byte equality observed |
| make_fused_procedure.test | 10 | 0.000828s | 0.000796s | 0.000822s | byte equality observed |
| make_list.test | 10 | 0.000810s | 0.000834s | 0.000812s | byte equality observed |
| make_unfused.test | 10 | 0.000793s | 0.000845s | 0.000784s | byte equality observed |
| make_vector.test | 10 | 0.000807s | 0.000804s | 0.000783s | byte equality observed |
| map.test | 10 | 0.000817s | 0.000830s | 0.000821s | byte equality observed |
| map_comparison.test | 10 | 0.000805s | 0.000815s | 0.000830s | byte equality observed |
| map_construction.test | 10 | 0.000804s | 0.000803s | 0.000809s | byte equality observed |
| map_copy.test | 10 | 0.000813s | 0.000821s | 0.000778s | byte equality observed |
| map_misc.test | 10 | 0.000811s | 0.000800s | 0.000827s | byte equality observed |
| map_move.test | 10 | 0.000824s | 0.000808s | 0.000819s | byte equality observed |
| map_mutate.test | 10 | 0.000818s | 0.000808s | 0.000816s | byte equality observed |
| map_tie.test | 10 | 0.000817s | 0.000820s | 0.000811s | byte equality observed |
| move.test | 10 | 0.000810s | 0.000828s | 0.000795s | byte equality observed |
| nil.test | 10 | 0.000813s | 0.000811s | 0.000809s | byte equality observed |
| none.test | 10 | 0.000803s | 0.000809s | 0.000829s | byte equality observed |
| nview.test | 10 | 0.000822s | 0.000812s | 0.000804s | byte equality observed |
| pop_back.test | 10 | 0.000820s | 0.000856s | 0.000845s | byte equality observed |
| pop_front.test | 10 | 0.000852s | 0.000822s | 0.000797s | byte equality observed |
| push_back.test | 10 | 0.000838s | 0.000828s | 0.000816s | byte equality observed |
| push_front.test | 10 | 0.000826s | 0.000815s | 0.000806s | byte equality observed |
| quick.test | 10 | 0.000361s | 0.000798s | 0.000823s | byte equality observed |
| ref_vector.test | 10 | 0.000807s | 0.000816s | 0.000798s | byte equality observed |
| remove.test | 10 | 0.000832s | 0.000819s | 0.000829s | byte equality observed |
| remove_if.test | 10 | 0.000832s | 0.000833s | 0.000819s | byte equality observed |
| repetitive_view.test | 10 | 0.000824s | 0.000789s | 0.000813s | byte equality observed |
| replace.test | 10 | 0.000816s | 0.000828s | 0.000827s | byte equality observed |
| replace_if.test | 10 | 0.000851s | 0.000839s | 0.000828s | byte equality observed |
| reverse.test | 10 | 0.000834s | 0.000841s | 0.000854s | byte equality observed |
| reverse_fold.test | 10 | 0.000821s | 0.000821s | 0.000843s | byte equality observed |
| reverse_iter_fold.test | 10 | 0.000813s | 0.000852s | 0.000832s | byte equality observed |
| reverse_view.test | 10 | 0.000827s | 0.000825s | 0.000806s | byte equality observed |
| segmented_find.test | 10 | 0.000818s | 0.000821s | 0.000788s | byte equality observed |
| segmented_find_if.test | 10 | 0.000807s | 0.000774s | 0.000825s | byte equality observed |
| segmented_fold.test | 10 | 0.000817s | 0.000806s | 0.000794s | byte equality observed |
| segmented_for_each.test | 10 | 0.000825s | 0.000826s | 0.000832s | byte equality observed |
| segmented_iterator_range.test | 10 | 0.000836s | 0.000841s | 0.000853s | byte equality observed |
| set.test | 10 | 0.000850s | 0.000799s | 0.000811s | byte equality observed |
| single_view.test | 10 | 0.000821s | 0.000830s | 0.000821s | byte equality observed |
| std_array.test | 10 | 0.000817s | 0.000801s | 0.000795s | byte equality observed |
| std_pair.test | 10 | 0.000821s | 0.000798s | 0.000815s | byte equality observed |
| std_tuple.test | 10 | 0.000824s | 0.000830s | 0.000807s | byte equality observed |
| std_tuple_iterator.test | 10 | 0.000803s | 0.000818s | 0.000811s | byte equality observed |
| swap.test | 10 | 0.000803s | 0.000808s | 0.000818s | byte equality observed |
| transform.test | 10 | 0.000836s | 0.000822s | 0.000819s | byte equality observed |
| transform_view.test | 10 | 0.000818s | 0.000822s | 0.000831s | byte equality observed |
| tuple_comparison.test | 10 | 0.000807s | 0.000820s | 0.000811s | byte equality observed |
| tuple_construction.test | 10 | 0.000801s | 0.000800s | 0.000829s | byte equality observed |
| tuple_conversion.test | 10 | 0.000820s | 0.000798s | 0.000833s | byte equality observed |
| tuple_copy.test | 10 | 0.000834s | 0.000835s | 0.000822s | byte equality observed |
| tuple_element.test | 10 | 0.000823s | 0.000817s | 0.000797s | byte equality observed |
| tuple_hash.test | 10 | 0.000845s | 0.000822s | 0.000803s | byte equality observed |
| tuple_make.test | 10 | 0.000831s | 0.000839s | 0.000813s | byte equality observed |
| tuple_misc.test | 10 | 0.000803s | 0.000781s | 0.000815s | byte equality observed |
| tuple_mutate.test | 10 | 0.000806s | 0.000791s | 0.000801s | byte equality observed |
| tuple_nest.test | 10 | 0.000793s | 0.000819s | 0.000820s | byte equality observed |
| tuple_tie.test | 10 | 0.000812s | 0.000831s | 0.000818s | byte equality observed |
| tuple_traits__maybe_variadic.test | 10 | 0.000806s | 0.000789s | 0.000818s | byte equality observed |
| tuple_traits__no_variadic.test | 10 | 0.000788s | 0.000834s | 0.000818s | byte equality observed |
| unfused.test | 10 | 0.000799s | 0.000804s | 0.000824s | byte equality observed |
| unfused_typed.test | 10 | 0.000816s | 0.000812s | 0.000827s | byte equality observed |
| vector_comparison.test | 10 | 0.000823s | 0.000795s | 0.000809s | byte equality observed |
| vector_construction.test | 10 | 0.000804s | 0.000779s | 0.000824s | byte equality observed |
| vector_conversion.test | 10 | 0.000800s | 0.000817s | 0.000808s | byte equality observed |
| vector_copy.test | 10 | 0.000816s | 0.000814s | 0.000822s | byte equality observed |
| vector_hash.test | 10 | 0.000826s | 0.000850s | 0.000818s | byte equality observed |
| vector_iterator.test | 10 | 0.000831s | 0.000850s | 0.000801s | byte equality observed |
| vector_make.test | 10 | 0.000837s | 0.000840s | 0.000794s | byte equality observed |
| vector_misc.test | 10 | 0.000828s | 0.000793s | 0.000793s | byte equality observed |
| vector_move.test | 10 | 0.000828s | 0.000791s | 0.000791s | byte equality observed |
| vector_mutate.test | 10 | 0.000820s | 0.000798s | 0.000788s | byte equality observed |
| vector_n.test | 10 | 0.000839s | 0.000796s | 0.000821s | byte equality observed |
| vector_nest.test | 10 | 0.000805s | 0.000793s | 0.000827s | byte equality observed |
| vector_tie.test | 10 | 0.000810s | 0.000776s | 0.000794s | byte equality observed |
| vector_traits__maybe_variadic.test | 10 | 0.000824s | 0.000820s | 0.000813s | byte equality observed |
| vector_traits__no_variadic.test | 10 | 0.000824s | 0.000779s | 0.000806s | byte equality observed |
| vector_value_at.test | 10 | 0.000795s | 0.000798s | 0.000804s | byte equality observed |
| zip.test | 10 | 0.000802s | 0.000793s | 0.000841s | byte equality observed |
| zip2.test | 10 | 0.000831s | 0.000818s | 0.000832s | byte equality observed |
| zip_ignore.test | 10 | 0.000824s | 0.000799s | 0.000795s | byte equality observed |
| zip_view.test | 10 | 0.000807s | 0.000800s | 0.000813s | byte equality observed |
| zip_view2.test | 10 | 0.000796s | 0.000804s | 0.000809s | byte equality observed |
| zip_view_ignore.test | 10 | 0.000800s | 0.000784s | 0.000798s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43670794197).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
