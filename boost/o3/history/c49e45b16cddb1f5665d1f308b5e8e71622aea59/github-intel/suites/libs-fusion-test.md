# libs/fusion/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| all.test | RUN | 0.273394 | 0.618341 | 0.832746 | 0.001080 | 0.001144 | 0.001109 |
| any.test | RUN | 0.268228 | 0.586985 | 0.794256 | 0.001154 | 0.001103 | 0.001394 |
| clear.test | RUN | 0.201209 | 0.553097 | 0.648233 | 0.001352 | 0.001360 | 0.001340 |
| copy.test | RUN | 0.168137 | 0.407773 | 0.531583 | 0.001331 | 0.001290 | 0.001284 |
| count.test | RUN | 0.194966 | 0.448714 | 0.569135 | 0.001240 | 0.001188 | 0.001254 |
| count_if.test | RUN | 0.181146 | 0.415207 | 0.519137 | 0.001169 | 0.001221 | 0.001266 |
| erase.test | RUN | 0.258048 | 0.747096 | 0.861014 | 0.001044 | 0.001286 | 0.001036 |
| erase_key.test | RUN | 0.250823 | 0.737326 | 0.818185 | 0.001142 | 0.001244 | 0.001187 |
| filter.test | RUN | 0.219887 | 0.616041 | 0.716350 | 0.001121 | 0.001215 | 0.001178 |
| filter_if.test | RUN | 0.251116 | 0.728862 | 0.846425 | 0.001165 | 0.001184 | 0.001292 |
| find.test | RUN | 0.214157 | 0.504634 | 0.638002 | 0.001163 | 0.001198 | 0.001134 |
| find_if.test | RUN | 0.204565 | 0.453250 | 0.589081 | 0.001242 | 0.001254 | 0.001355 |
| fold.test | RUN | 0.224435 | 0.570690 | 0.731365 | 0.001293 | 0.001274 | 0.001156 |
| for_each.test | RUN | 0.197808 | 0.519932 | 0.636646 | 0.001346 | 0.001305 | 0.001150 |
| insert.test | RUN | 0.300497 | 0.922733 | 1.032617 | 0.001150 | 0.001284 | 0.001229 |
| insert_range.test | RUN | 0.298291 | 0.926705 | 1.032646 | 0.001431 | 0.001159 | 0.001296 |
| iter_fold.test | RUN | 0.340320 | 0.866324 | 1.213345 | 0.001314 | 0.001220 | 0.001253 |
| move.test | RUN | 0.179008 | 0.416671 | 0.516778 | 0.001260 | 0.001170 | 0.001169 |
| none.test | RUN | 0.283345 | 0.600979 | 0.784817 | 0.001084 | 0.001276 | 0.001323 |
| pop_back.test | RUN | 0.276479 | 0.811759 | 0.934905 | 0.001205 | 0.001251 | 0.001186 |
| pop_front.test | RUN | 0.234659 | 0.657517 | 0.733284 | 0.001309 | 0.001387 | 0.001172 |
| push_back.test | RUN | 0.290328 | 0.937698 | 1.019541 | 0.001301 | 0.001271 | 0.001172 |
| push_front.test | RUN | 0.259496 | 0.775115 | 0.858111 | 0.001223 | 0.001290 | 0.001240 |
| remove.test | RUN | 0.289640 | 0.856221 | 1.010562 | 0.000848 | 0.001183 | 0.001187 |
| remove_if.test | RUN | 0.253262 | 0.734528 | 0.869343 | 0.001233 | 0.001395 | 0.001217 |
| replace.test | RUN | 0.249267 | 0.714260 | 0.801459 | 0.001345 | 0.001221 | 0.001276 |
| replace_if.test | RUN | 0.245162 | 0.701496 | 0.793795 | 0.001342 | 0.001259 | 0.001170 |
| reverse_fold.test | RUN | 0.368117 | 0.967859 | 1.328954 | 0.001302 | 0.001349 | 0.001339 |
| reverse_iter_fold.test | RUN | 0.386196 | 1.014583 | 1.389684 | 0.001295 | 0.001195 | 0.001112 |
| reverse.test | RUN | 0.240874 | 0.744520 | 0.810057 | 0.001325 | 0.001289 | 0.000986 |
| segmented_for_each.test | RUN | 0.409949 | 1.365609 | 1.658493 | 0.001271 | 0.001306 | 0.001276 |
| segmented_find.test | RUN | 0.252361 | 0.725559 | 0.905686 | 0.001129 | 0.001286 | 0.001342 |
| segmented_find_if.test | RUN | 0.256943 | 0.732554 | 0.919361 | 0.001079 | 0.001179 | 0.001143 |
| segmented_fold.test | RUN | 0.323205 | 0.962426 | 1.211926 | 0.001271 | 0.001303 | 0.001211 |
| transform.test | RUN | 0.250760 | 0.770640 | 0.872551 | 0.001326 | 0.001246 | 0.001216 |
| join.test | RUN | 0.192144 | 0.469567 | 0.605881 | 0.001222 | 0.001211 | 0.001168 |
| zip.test | RUN | 0.326116 | 0.870350 | 1.129579 | 0.001181 | 0.001189 | 0.001305 |
| zip2.test | RUN | 0.317024 | 0.843059 | 1.077080 | 0.001081 | 0.001233 | 0.001164 |
| zip_ignore.test | RUN | 0.241367 | 0.576263 | 0.721257 | 0.001143 | 0.001309 | 0.001105 |
| flatten.test | RUN | 0.227232 | 0.646307 | 0.739062 | 0.001156 | 0.001344 | 0.001356 |
| ticket-5490.test | COMPILE | 0.120139 | 0.270992 | 0.335314 | — | — | — |
| as_deque.test | RUN | 0.225534 | 0.611176 | 0.790040 | 0.001210 | 0.001167 | 0.001102 |
| as_list.test | RUN | 0.253307 | 0.759520 | 0.853155 | 0.001129 | 0.001387 | 0.001092 |
| as_map.test | RUN | 0.248861 | 0.743079 | 0.850287 | 0.001170 | 0.001198 | 0.001150 |
| as_map_assoc.test | RUN | 0.257964 | 0.687415 | 0.815306 | 0.001235 | 0.001179 | 0.001300 |
| as_set.test | RUN | 0.289742 | 0.872962 | 0.996709 | 0.001292 | 0.001190 | 0.001173 |
| as_vector.test | RUN | 0.260983 | 0.788414 | 0.870673 | 0.001106 | 0.001139 | 0.001299 |
| boost_tuple.test | RUN | 0.262759 | 0.756555 | 0.864862 | 0.001072 | 0.001150 | 0.001177 |
| boost_tuple_iterator.test | RUN | 0.174217 | 0.437694 | 0.524982 | 0.001300 | 0.001353 | 0.001262 |
| cons.test | RUN | 0.326138 | 0.852653 | 1.024426 | 0.001204 | 0.001108 | 0.001362 |
| convert_boost_tuple.test | RUN | 0.207566 | 0.664170 | 0.677991 | 0.001403 | 0.001485 | 0.001250 |
| convert_deque.test | RUN | 0.205843 | 0.653220 | 0.670802 | 0.001244 | 0.001233 | 0.001337 |
| convert_list.test | RUN | 0.205441 | 0.664861 | 0.678143 | 0.001093 | 0.001060 | 0.001207 |
| convert_std_pair.test | RUN | 0.213704 | 0.667136 | 0.696924 | 0.001179 | 0.001383 | 0.001095 |
| convert_std_tuple.test | RUN | 0.205270 | 0.658004 | 0.670706 | 0.001214 | 0.001185 | 0.001291 |
| convert_vector.test | RUN | 0.205623 | 0.659498 | 0.673295 | 0.001090 | 0.001001 | 0.001189 |
| filter_view.test | RUN | 0.241886 | 0.685341 | 0.808715 | 0.001123 | 0.001121 | 0.001254 |
| hash.test | RUN | 0.243998 | 0.630354 | 0.758816 | 0.001289 | 0.001351 | 0.001217 |
| io.test | RUN | 0.260967 | 0.900557 | 0.933022 | 0.001223 | 0.001577 | 0.001497 |
| iterator_range.test | RUN | 0.233261 | 0.660298 | 0.748827 | 0.001258 | 0.001274 | 0.001198 |
| joint_view.test | RUN | 0.316474 | 1.120628 | 1.183607 | 0.001154 | 0.001136 | 0.001266 |
| list_comparison.test | RUN | 0.182537 | 0.458515 | 0.577310 | 0.001210 | 0.001360 | 0.001259 |
| list_construction.test | RUN | 0.173986 | 0.436632 | 0.533609 | 0.001296 | 0.001425 | 0.001276 |
| list_copy.test | RUN | 0.268025 | 0.829692 | 0.936676 | 0.001163 | 0.001216 | 0.001185 |
| list_iterator.test | RUN | 0.179067 | 0.444684 | 0.528887 | 0.001134 | 0.001247 | 0.001235 |
| list_hash.test | RUN | 0.240269 | 0.917418 | 0.759281 | 0.001212 | 0.001237 | 0.001347 |
| list_make.test | RUN | 0.188770 | 0.494270 | 0.584595 | 0.001309 | 0.001128 | 0.001169 |
| list_misc.test | RUN | 0.246508 | 0.579192 | 0.708923 | 0.001078 | 0.001174 | 0.001117 |
| list_mutate.test | RUN | 0.170550 | 0.397088 | 0.480274 | 0.001331 | 0.001279 | 0.001293 |
| list_nest.test | RUN | 0.341156 | 1.110260 | 1.340174 | 0.001220 | 0.001105 | 0.001086 |
| list_tie.test | RUN | 0.177442 | 0.432446 | 0.537171 | 0.001282 | 0.001328 | 0.001270 |
| list_value_at.test | RUN | 0.170564 | 0.420516 | 0.497580 | 0.001214 | 0.001212 | 0.001252 |
| deque_comparison.test | RUN | 0.178483 | 0.454230 | 0.543222 | 0.000953 | 0.001307 | 0.001176 |
| deque_construction.test | RUN | 0.184937 | 0.433999 | 0.579608 | 0.001278 | 0.001408 | 0.001315 |
| deque_copy.test | RUN | 0.258827 | 0.759187 | 0.864713 | 0.001216 | 0.001097 | 0.001162 |
| deque_iterator.test | RUN | 0.181496 | 0.464423 | 0.538883 | 0.001122 | 0.001221 | 0.001179 |
| deque_hash.test | RUN | 0.244554 | 0.878710 | 0.763687 | 0.001206 | 0.001382 | 0.001329 |
| deque_is_constructible.test | COMPILE | 0.099906 | 0.197179 | 0.239850 | — | — | — |
| deque_make.test | RUN | 0.181427 | 0.473112 | 0.562025 | 0.001373 | 0.001498 | 0.001216 |
| deque_misc.test | RUN | 0.235245 | 0.584016 | 0.687269 | 0.001088 | 0.001231 | 0.001248 |
| deque_move.test | RUN | 0.180918 | 0.473437 | 0.538540 | 0.001294 | 0.001270 | 0.001128 |
| deque_mutate.test | RUN | 0.161587 | 0.386496 | 0.467484 | 0.001210 | 0.001325 | 0.001281 |
| deque_nest.test | RUN | 0.508727 | 1.809066 | 2.148654 | 0.001383 | 0.001221 | 0.001179 |
| deque_tie.test | RUN | 0.171338 | 0.405105 | 0.503971 | 0.001292 | 0.001222 | 0.001139 |
| deque_value_at.test | RUN | 0.165493 | 0.411108 | 0.496320 | 0.001129 | 0.001203 | 0.001137 |
| front_extended_deque.test | RUN | 0.245593 | 0.579941 | 0.737804 | 0.001225 | 0.001222 | 0.001190 |
| back_extended_deque.test | RUN | 0.247072 | 0.586507 | 0.728298 | 0.001136 | 0.001245 | 0.001125 |
| make_list.test | RUN | 0.189460 | 0.492540 | 0.586227 | 0.001394 | 0.001294 | 0.001257 |
| make_vector.test | RUN | 0.185867 | 0.474695 | 0.553709 | 0.001096 | 0.001316 | 0.001270 |
| map.test | RUN | 0.249490 | 0.749388 | 0.853476 | 0.001219 | 0.001265 | 0.001108 |
| map_comparison.test | RUN | 0.181767 | 0.470034 | 0.554283 | 0.001069 | 0.001189 | 0.001327 |
| map_construction.test | RUN | 0.187659 | 0.455255 | 0.546701 | 0.001115 | 0.001168 | 0.001109 |
| map_copy.test | RUN | 0.224362 | 0.574671 | 0.683712 | 0.001134 | 0.001301 | 0.001311 |
| map_misc.test | RUN | 0.237756 | 0.590662 | 0.689988 | 0.001110 | 0.001241 | 0.001102 |
| map_move.test | RUN | 0.191860 | 0.483729 | 0.554097 | 0.001370 | 0.001100 | 0.001040 |
| map_mutate.test | RUN | 0.166187 | 0.394957 | 0.475147 | 0.001129 | 0.001318 | 0.001225 |
| map_tie.test | RUN | 0.173235 | 0.390149 | 0.493528 | 0.001230 | 0.001235 | 0.001241 |
| nil.test | RUN | 0.118374 | 0.280430 | 0.337710 | 0.001380 | 0.001188 | 0.001149 |
| nview.test | RUN | 0.230641 | 0.562115 | 0.702367 | 0.001267 | 0.001365 | 0.001248 |
| reverse_view.test | RUN | 0.320603 | 0.961839 | 1.048518 | 0.001262 | 0.001260 | 0.001262 |
| segmented_iterator_range.test | RUN | 0.368167 | 1.123470 | 1.317889 | 0.001314 | 0.001234 | 0.001150 |
| set.test | RUN | 0.234745 | 0.638172 | 0.726281 | 0.001204 | 0.001238 | 0.001276 |
| single_view.test | RUN | 0.214185 | 0.587091 | 0.662667 | 0.001199 | 0.001302 | 0.001160 |
| std_pair.test | RUN | 0.269149 | 0.753473 | 0.864122 | 0.001349 | 0.001420 | 0.001140 |
| boost_array.test | RUN | 0.225079 | 0.517205 | 0.646391 | 0.001159 | 0.001135 | 0.001164 |
| array.test | RUN | 0.223575 | 0.522501 | 0.635699 | 0.001214 | 0.001148 | 0.001195 |
| std_array.test | RUN | 0.224048 | 0.504452 | 0.618769 | 0.001187 | 0.001168 | 0.000967 |
| tuple_comparison.test | RUN | 0.190897 | 0.491663 | 0.575642 | 0.001286 | 0.001129 | 0.001179 |
| tuple_construction.test | RUN | 0.198093 | 0.487747 | 0.588897 | 0.001238 | 0.001297 | 0.001119 |
| tuple_conversion.test | RUN | 0.443388 | 1.527514 | 1.955745 | 0.001116 | 0.001178 | 0.001454 |
| tuple_copy.test | RUN | 0.291206 | 0.865673 | 1.015107 | 0.001171 | 0.001162 | 0.001217 |
| tuple_element.test | RUN | 0.187659 | 0.438792 | 0.549051 | 0.001218 | 0.001330 | 0.001158 |
| tuple_make.test | RUN | 0.205694 | 0.504456 | 0.608938 | 0.001136 | 0.001187 | 0.001085 |
| tuple_misc.test | RUN | 0.253723 | 0.610293 | 0.784922 | 0.001321 | 0.001047 | 0.001154 |
| tuple_mutate.test | RUN | 0.177648 | 0.405349 | 0.509559 | 0.001236 | 0.000835 | 0.001390 |
| tuple_nest.test | RUN | 0.757833 | 3.161902 | 3.609068 | 0.001192 | 0.001231 | 0.001286 |
| tuple_hash.test | RUN | 0.256118 | 0.913787 | 0.762075 | 0.001319 | 0.001271 | 0.001087 |
| tuple_tie.test | RUN | 0.186413 | 0.458868 | 0.568001 | 0.001219 | 0.001359 | 0.001169 |
| tuple_traits__maybe_variadic.test | RUN | 0.200759 | 0.554250 | 0.591558 | 0.001184 | 0.001103 | 0.000960 |
| tuple_traits__no_variadic.test | RUN | 0.230135 | 0.577424 | 0.647961 | 0.001208 | 0.001226 | 0.001166 |
| transform_view.test | RUN | 0.303887 | 0.940628 | 1.032638 | 0.001285 | 0.001258 | 0.001276 |
| identity_view.test | RUN | 0.288490 | 0.875038 | 0.969122 | 0.001230 | 0.001214 | 0.001244 |
| vector_comparison.test | RUN | 0.185588 | 0.472610 | 0.607309 | 0.001098 | 0.001254 | 0.001254 |
| vector_construction.test | RUN | 0.187084 | 0.452054 | 0.534310 | 0.001136 | 0.001347 | 0.001215 |
| vector_conversion.test | RUN | 0.523857 | 2.016053 | 2.459591 | 0.001330 | 0.001275 | 0.001329 |
| vector_copy.test | RUN | 0.286618 | 0.880101 | 1.003903 | 0.001122 | 0.001180 | 0.001058 |
| vector_iterator.test | RUN | 0.171738 | 0.454149 | 0.534423 | 0.001114 | 0.001329 | 0.001168 |
| vector_make.test | RUN | 0.183782 | 0.471707 | 0.571370 | 0.001337 | 0.001302 | 0.001118 |
| vector_misc.test | RUN | 0.237275 | 0.585446 | 0.725398 | 0.001194 | 0.001117 | 0.001107 |
| vector_move.test | RUN | 0.188428 | 0.495433 | 0.539203 | 0.001120 | 0.001346 | 0.001281 |
| vector_mutate.test | RUN | 0.162710 | 0.384913 | 0.467729 | 0.001091 | 0.001140 | 0.001129 |
| vector_n.test | RUN | 0.208755 | 0.489687 | 0.641851 | 0.001436 | 0.001355 | 0.001403 |
| vector_nest.test | RUN | 0.761858 | 3.256470 | 3.682544 | 0.001246 | 0.001180 | 0.001074 |
| vector_hash.test | RUN | 0.248008 | 0.906352 | 0.741631 | 0.001299 | 0.001318 | 0.001187 |
| vector_tie.test | RUN | 0.184010 | 0.415614 | 0.542413 | 0.001391 | 0.001322 | 0.001048 |
| vector_traits__maybe_variadic.test | RUN | 0.199509 | 0.505568 | 0.536464 | 0.001414 | 0.001322 | 0.001146 |
| vector_traits__no_variadic.test | RUN | 0.206307 | 0.531593 | 0.564361 | 0.001284 | 0.001305 | 0.001170 |
| vector_value_at.test | RUN | 0.175709 | 0.385188 | 0.509332 | 0.001130 | 0.001260 | 0.001093 |
| zip_view.test | RUN | 0.350324 | 0.962340 | 1.234057 | 0.001211 | 0.001186 | 0.001153 |
| zip_view2.test | RUN | 0.282912 | 0.754659 | 1.007918 | 0.001092 | 0.001252 | 0.001100 |
| zip_view_ignore.test | RUN | 0.270650 | 0.687734 | 0.847121 | 0.001126 | 0.001306 | 0.001238 |
| repetitive_view.test | RUN | 0.460105 | 1.254321 | 1.600736 | 0.001368 | 0.001198 | 0.001158 |
| deduce_sequence.test | RUN | 0.217363 | 0.536915 | 0.640890 | 0.001235 | 0.001356 | 0.001138 |
| adapt_adt_named.test | RUN | 0.265101 | 0.766634 | 0.874264 | 0.001172 | 0.001152 | 0.001073 |
| adapt_adt_named_empty.test | RUN | 0.234002 | 0.624600 | 0.676102 | 0.001222 | 0.001274 | 0.001113 |
| adapt_adt.test | RUN | 0.299561 | 1.000992 | 1.013783 | 0.001454 | 0.001246 | 0.001064 |
| adapt_adt_empty.test | RUN | 0.227946 | 0.627175 | 0.679542 | 0.001600 | 0.001380 | 0.001099 |
| adapt_assoc_adt_named.test | RUN | 0.294655 | 0.791753 | 0.905641 | 0.001205 | 0.001124 | 0.001215 |
| adapt_assoc_adt_named_empty.test | RUN | 0.227549 | 0.624944 | 0.679829 | 0.001346 | 0.001110 | 0.001317 |
| adapt_assoc_adt.test | RUN | 0.307436 | 0.810930 | 0.958029 | 0.001185 | 0.001155 | 0.001250 |
| adapt_assoc_adt_empty.test | RUN | 0.226887 | 0.620001 | 0.692234 | 0.001280 | 0.001256 | 0.001202 |
| adapt_assoc_struct_named.test | RUN | 0.291289 | 0.775115 | 0.909497 | 0.001316 | 0.001225 | 0.001153 |
| adapt_assoc_struct_named_empty.test | RUN | 0.232341 | 0.617843 | 0.682635 | 0.001294 | 0.001098 | 0.001138 |
| adapt_assoc_struct.test | RUN | 0.258731 | 0.729309 | 0.834894 | 0.001269 | 0.001178 | 0.001166 |
| adapt_assoc_struct_empty.test | RUN | 0.224298 | 0.613972 | 0.682535 | 0.001367 | 0.001221 | 0.001084 |
| adapt_assoc_tpl_adt.test | RUN | 0.310875 | 0.848337 | 0.968059 | 0.001222 | 0.001238 | 0.001271 |
| adapt_assoc_tpl_adt_empty.test | RUN | 0.227592 | 0.618790 | 0.689567 | 0.001140 | 0.001222 | 0.001273 |
| adapt_assoc_tpl_struct.test | RUN | 0.251841 | 0.721563 | 0.809483 | 0.001087 | 0.001133 | 0.001082 |
| adapt_assoc_tpl_struct_empty.test | RUN | 0.225596 | 0.614541 | 0.685541 | 0.001339 | 0.001341 | 0.000830 |
| adapt_struct_named.test | RUN | 0.256015 | 0.753631 | 0.833942 | 0.001255 | 0.001218 | 0.001290 |
| adapt_struct_named_empty.test | RUN | 0.225794 | 0.620497 | 0.685118 | 0.001097 | 0.001143 | 0.001154 |
| adapt_struct.test | RUN | 0.282133 | 0.848428 | 0.921794 | 0.001358 | 0.001179 | 0.001141 |
| adapt_struct_empty.test | RUN | 0.226360 | 0.619245 | 0.695613 | 0.001382 | 0.001285 | 0.001207 |
| adapt_tpl_adt.test | RUN | 0.300309 | 0.977522 | 0.974634 | 0.001290 | 0.001213 | 0.001157 |
| adapt_tpl_adt_empty.test | RUN | 0.236411 | 0.619406 | 0.687227 | 0.001382 | 0.001287 | 0.001226 |
| adapt_tpl_struct.test | RUN | 0.247454 | 0.674716 | 0.755637 | 0.001216 | 0.001236 | 0.001085 |
| adapt_tpl_struct_empty.test | RUN | 0.227023 | 0.622817 | 0.701874 | 0.001333 | 0.001193 | 0.001064 |
| adt_attribute_proxy.test | RUN | 0.261724 | 0.585021 | 0.721835 | 0.001254 | 0.001179 | 0.001180 |
| define_struct.test | RUN | 0.319909 | 0.830820 | 0.979836 | 0.001263 | 0.001290 | 0.001299 |
| define_struct_empty.test | RUN | 0.270822 | 0.684062 | 0.787760 | 0.001124 | 0.001180 | 0.001215 |
| define_struct_move.test | RUN | 0.177244 | 0.386468 | 0.462457 | 0.001387 | 0.001176 | 0.001204 |
| define_struct_inline.test | RUN | 0.326594 | 0.999133 | 1.108462 | 0.001293 | 0.001186 | 0.001212 |
| define_struct_inline_empty.test | RUN | 0.271167 | 0.680021 | 0.789751 | 0.001425 | 0.001165 | 0.001179 |
| define_struct_inline_move.test | RUN | 0.176549 | 0.387149 | 0.479992 | 0.001160 | 0.001200 | 0.001328 |
| define_assoc_struct.test | RUN | 0.304161 | 0.793396 | 0.935993 | 0.001522 | 0.001260 | 0.001258 |
| define_assoc_struct_empty.test | RUN | 0.277364 | 0.684568 | 0.799560 | 0.001319 | 0.001184 | 0.001170 |
| define_assoc_struct_move.test | RUN | 0.174273 | 0.380413 | 0.469127 | 0.001517 | 0.001161 | 0.001091 |
| define_tpl_struct.test | RUN | 0.303572 | 0.809382 | 0.913050 | 0.001483 | 0.001342 | 0.001140 |
| define_tpl_struct_empty.test | RUN | 0.281830 | 0.689538 | 0.811347 | 0.001287 | 0.001123 | 0.001179 |
| define_tpl_struct_move.test | RUN | 0.174088 | 0.394060 | 0.482126 | 0.001230 | 0.001275 | 0.001148 |
| define_tpl_struct_inline.test | RUN | 0.320031 | 0.935869 | 1.016725 | 0.001251 | 0.001244 | 0.001157 |
| define_tpl_struct_inline_empty.test | RUN | 0.271898 | 0.704237 | 0.793914 | 0.001144 | 0.001147 | 0.001214 |
| define_tpl_struct_inline_move.test | RUN | 0.178413 | 0.373865 | 0.488687 | 0.001114 | 0.001270 | 0.001126 |
| define_assoc_tpl_struct.test | RUN | 0.302957 | 0.794131 | 0.942798 | 0.001400 | 0.001249 | 0.001157 |
| define_assoc_tpl_struct_empty.test | RUN | 0.277387 | 0.693058 | 0.792109 | 0.001333 | 0.001209 | 0.001132 |
| define_assoc_tpl_struct_move.test | RUN | 0.172304 | 0.390150 | 0.474146 | 0.001155 | 0.001157 | 0.001162 |
| std_tuple.test | RUN | 0.185024 | 0.436637 | 0.530945 | 0.001299 | 0.001196 | 0.001124 |
| std_tuple_iterator.test | RUN | 0.184527 | 0.450823 | 0.530503 | 0.001344 | 0.001333 | 0.001153 |
| ref_vector.test | RUN | 0.204285 | 0.462572 | 0.566252 | 0.001402 | 0.001185 | 0.001170 |
| flatten_view.test | RUN | 0.222528 | 0.579573 | 0.673119 | 0.001326 | 0.001213 | 0.001217 |
| github-159.test | COMPILE | 0.097020 | 0.209703 | 0.249591 | — | — | — |
| github-176.test | RUN | 0.205736 | 0.511009 | 0.583615 | 0.001298 | 0.001222 | 0.001167 |
| size.test | COMPILE | 0.171956 | 0.358664 | 0.459300 | — | — | — |
| fused.test | RUN | 0.241236 | 0.549961 | 0.663959 | 0.001211 | 0.001308 | 0.001290 |
| fused_function_object.test | RUN | 0.175141 | 0.416214 | 0.508558 | 0.001270 | 0.001306 | 0.001318 |
| fused_procedure.test | RUN | 0.227788 | 0.520353 | 0.622044 | 0.001216 | 0.001388 | 0.001064 |
| unfused.test | RUN | 0.189554 | 0.434926 | 0.525764 | 0.001247 | 0.001157 | 0.001068 |
| unfused_typed.test | RUN | 0.186866 | 0.465029 | 0.542763 | 0.001232 | 0.001159 | 0.001359 |
| make_fused.test | RUN | 0.241000 | 0.547357 | 0.663554 | 0.001169 | 0.001084 | 0.001192 |
| make_fused_function_object.test | RUN | 0.184361 | 0.411348 | 0.511139 | 0.001104 | 0.001243 | 0.001143 |
| make_fused_procedure.test | RUN | 0.235279 | 0.519402 | 0.644425 | 0.001344 | 0.001342 | 0.001135 |
| make_unfused.test | RUN | 0.180253 | 0.431838 | 0.515087 | 0.001438 | 0.001242 | 0.001146 |
| invoke.test | RUN | 0.470821 | 1.527714 | 1.781745 | 0.001224 | 0.001227 | 0.001086 |
| invoke_function_object.test | RUN | 0.219897 | 0.549323 | 0.669769 | 0.001410 | 0.001198 | 0.001178 |
| invoke_procedure.test | RUN | 0.376637 | 1.138433 | 1.327646 | 0.001353 | 0.001332 | 0.001217 |
| swap.test | RUN | 0.283032 | 0.698370 | 0.854780 | 0.001303 | 0.001412 | 0.001276 |
| is_sequence.test | COMPILE | 0.047648 | 0.096059 | 0.105741 | — | — | — |
| is_view.test | COMPILE | 0.046043 | 0.094930 | 0.104675 | — | — | — |
| pair_deque.test | COMPILE | 0.100416 | 0.221512 | 0.271150 | — | — | — |
| pair_list.test | COMPILE | 0.097715 | 0.210530 | 0.264535 | — | — | — |
| pair_map.test | COMPILE | 0.101938 | 0.213235 | 0.254283 | — | — | — |
| pair_set.test | COMPILE | 0.105682 | 0.222418 | 0.256527 | — | — | — |
| pair_vector.test | COMPILE | 0.103149 | 0.215017 | 0.250950 | — | — | — |
| pair_nest.test | COMPILE | 0.039577 | 0.086814 | 0.098965 | — | — | — |
| index_sequence.test | COMPILE | 0.035045 | 0.058349 | 0.071896 | — | — | — |
| and.test | COMPILE | 0.026784 | 0.045813 | 0.051285 | — | — | — |
| tag_of.test | COMPILE | 0.046185 | 0.091452 | 0.099821 | — | — | — |
| unused.test | COMPILE | 0.022291 | 0.057373 | 0.059284 | — | — | — |
| tag_of_fallback.test | COMPILE | 0.043545 | 0.075840 | 0.090839 | — | — | — |
| make_pair_r-value.test | COMPILE | 0.029597 | 0.086293 | 0.085574 | — | — | — |
| quick.test | RUN | 0.137310 | 0.306265 | 0.329359 | 0.000444 | 0.000808 | 0.000905 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 1.000× | 1.002×, 0.998× | 1.003× |
| clang | 1.006× | 1.009×, 1.003× | 1.000× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1364 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44362912212).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| adapt_adt.test | 10 | 0.000821s | 0.000818s | 0.000809s | byte equality observed |
| adapt_adt_empty.test | 10 | 0.000838s | 0.000821s | 0.000825s | byte equality observed |
| adapt_adt_named.test | 10 | 0.000815s | 0.000844s | 0.000804s | byte equality observed |
| adapt_adt_named_empty.test | 10 | 0.000791s | 0.000807s | 0.000825s | byte equality observed |
| adapt_assoc_adt.test | 10 | 0.000831s | 0.000827s | 0.000847s | byte equality observed |
| adapt_assoc_adt_empty.test | 10 | 0.000809s | 0.000807s | 0.000837s | byte equality observed |
| adapt_assoc_adt_named.test | 10 | 0.000813s | 0.000851s | 0.000831s | byte equality observed |
| adapt_assoc_adt_named_empty.test | 10 | 0.000836s | 0.000847s | 0.000837s | byte equality observed |
| adapt_assoc_struct.test | 10 | 0.000833s | 0.000808s | 0.000812s | byte equality observed |
| adapt_assoc_struct_empty.test | 10 | 0.000811s | 0.000828s | 0.000820s | byte equality observed |
| adapt_assoc_struct_named.test | 10 | 0.000823s | 0.000810s | 0.000843s | byte equality observed |
| adapt_assoc_struct_named_empty.test | 10 | 0.000814s | 0.000846s | 0.000855s | byte equality observed |
| adapt_assoc_tpl_adt.test | 10 | 0.000820s | 0.000857s | 0.000857s | byte equality observed |
| adapt_assoc_tpl_adt_empty.test | 10 | 0.000836s | 0.000855s | 0.000859s | byte equality observed |
| adapt_assoc_tpl_struct.test | 10 | 0.000827s | 0.000824s | 0.000829s | byte equality observed |
| adapt_assoc_tpl_struct_empty.test | 10 | 0.000830s | 0.000830s | 0.000830s | byte equality observed |
| adapt_struct.test | 10 | 0.000816s | 0.000809s | 0.000819s | byte equality observed |
| adapt_struct_empty.test | 10 | 0.000833s | 0.000847s | 0.000805s | byte equality observed |
| adapt_struct_named.test | 10 | 0.000831s | 0.000862s | 0.000828s | byte equality observed |
| adapt_struct_named_empty.test | 10 | 0.000821s | 0.000810s | 0.000808s | byte equality observed |
| adapt_tpl_adt.test | 10 | 0.000832s | 0.000830s | 0.000834s | byte equality observed |
| adapt_tpl_adt_empty.test | 10 | 0.000816s | 0.000862s | 0.000848s | byte equality observed |
| adapt_tpl_struct.test | 10 | 0.000843s | 0.000871s | 0.000842s | byte equality observed |
| adapt_tpl_struct_empty.test | 10 | 0.000830s | 0.000846s | 0.000867s | byte equality observed |
| adt_attribute_proxy.test | 10 | 0.000831s | 0.000812s | 0.000796s | byte equality observed |
| all.test | 10 | 0.000816s | 0.000823s | 0.000812s | byte equality observed |
| any.test | 10 | 0.000804s | 0.000814s | 0.000841s | byte equality observed |
| array.test | 10 | 0.000807s | 0.000807s | 0.000800s | byte equality observed |
| as_deque.test | 10 | 0.000787s | 0.000796s | 0.000780s | byte equality observed |
| as_list.test | 10 | 0.000832s | 0.000812s | 0.000828s | byte equality observed |
| as_map.test | 10 | 0.000818s | 0.000799s | 0.000849s | byte equality observed |
| as_map_assoc.test | 10 | 0.000810s | 0.000803s | 0.000841s | byte equality observed |
| as_set.test | 10 | 0.000860s | 0.000856s | 0.000842s | byte equality observed |
| as_vector.test | 10 | 0.000840s | 0.000870s | 0.000834s | byte equality observed |
| back_extended_deque.test | 10 | 0.000810s | 0.000808s | 0.000819s | byte equality observed |
| boost_array.test | 10 | 0.000789s | 0.000778s | 0.000809s | byte equality observed |
| boost_tuple.test | 10 | 0.000821s | 0.000818s | 0.000823s | byte equality observed |
| boost_tuple_iterator.test | 10 | 0.000819s | 0.000799s | 0.000795s | byte equality observed |
| clear.test | 10 | 0.000845s | 0.000789s | 0.000802s | byte equality observed |
| cons.test | 10 | 0.000846s | 0.000812s | 0.000818s | byte equality observed |
| convert_boost_tuple.test | 10 | 0.000815s | 0.000806s | 0.000817s | byte equality observed |
| convert_deque.test | 10 | 0.000804s | 0.000779s | 0.000817s | byte equality observed |
| convert_list.test | 10 | 0.000814s | 0.000800s | 0.000818s | byte equality observed |
| convert_std_pair.test | 10 | 0.000821s | 0.000813s | 0.000851s | byte equality observed |
| convert_std_tuple.test | 10 | 0.000794s | 0.000815s | 0.000827s | byte equality observed |
| convert_vector.test | 10 | 0.000813s | 0.000816s | 0.000832s | byte equality observed |
| copy.test | 10 | 0.000812s | 0.000813s | 0.000839s | byte equality observed |
| count.test | 10 | 0.000820s | 0.000819s | 0.000794s | byte equality observed |
| count_if.test | 10 | 0.000825s | 0.000809s | 0.000790s | byte equality observed |
| deduce_sequence.test | 10 | 0.000815s | 0.000823s | 0.000822s | byte equality observed |
| define_assoc_struct.test | 5 | 0.000842s | 0.000873s | 0.000822s | byte equality observed |
| define_assoc_struct_empty.test | 10 | 0.000821s | 0.000833s | 0.000819s | byte equality observed |
| define_assoc_struct_move.test | 10 | 0.000803s | 0.000826s | 0.000789s | byte equality observed |
| define_assoc_tpl_struct.test | 10 | 0.000828s | 0.000816s | 0.000854s | byte equality observed |
| define_assoc_tpl_struct_empty.test | 10 | 0.000805s | 0.000829s | 0.000796s | byte equality observed |
| define_assoc_tpl_struct_move.test | 10 | 0.000794s | 0.000834s | 0.000814s | byte equality observed |
| define_struct.test | 10 | 0.000806s | 0.000858s | 0.000825s | byte equality observed |
| define_struct_empty.test | 10 | 0.000833s | 0.000799s | 0.000853s | byte equality observed |
| define_struct_inline.test | 10 | 0.000825s | 0.000840s | 0.000853s | byte equality observed |
| define_struct_inline_empty.test | 10 | 0.000824s | 0.000818s | 0.000840s | byte equality observed |
| define_struct_inline_move.test | 10 | 0.000815s | 0.000847s | 0.000830s | byte equality observed |
| define_struct_move.test | 10 | 0.000816s | 0.000829s | 0.000813s | byte equality observed |
| define_tpl_struct.test | 10 | 0.000820s | 0.000843s | 0.000822s | byte equality observed |
| define_tpl_struct_empty.test | 10 | 0.000829s | 0.000842s | 0.000834s | byte equality observed |
| define_tpl_struct_inline.test | 10 | 0.000821s | 0.000812s | 0.000827s | byte equality observed |
| define_tpl_struct_inline_empty.test | 10 | 0.000814s | 0.000821s | 0.000818s | byte equality observed |
| define_tpl_struct_inline_move.test | 10 | 0.000801s | 0.000802s | 0.000792s | byte equality observed |
| define_tpl_struct_move.test | 10 | 0.000817s | 0.000818s | 0.000780s | byte equality observed |
| deque_comparison.test | 10 | 0.000830s | 0.000817s | 0.000782s | byte equality observed |
| deque_construction.test | 10 | 0.000813s | 0.000826s | 0.000791s | byte equality observed |
| deque_copy.test | 10 | 0.000820s | 0.000825s | 0.000785s | byte equality observed |
| deque_hash.test | 10 | 0.000818s | 0.000821s | 0.000840s | byte equality observed |
| deque_iterator.test | 10 | 0.000794s | 0.000792s | 0.000831s | byte equality observed |
| deque_make.test | 10 | 0.000819s | 0.000835s | 0.000808s | byte equality observed |
| deque_misc.test | 10 | 0.000815s | 0.000815s | 0.000834s | byte equality observed |
| deque_move.test | 10 | 0.000819s | 0.000820s | 0.000836s | byte equality observed |
| deque_mutate.test | 10 | 0.000819s | 0.000834s | 0.000808s | byte equality observed |
| deque_nest.test | 10 | 0.000787s | 0.000798s | 0.000821s | byte equality observed |
| deque_tie.test | 10 | 0.000808s | 0.000775s | 0.000780s | byte equality observed |
| deque_value_at.test | 10 | 0.000794s | 0.000825s | 0.000820s | byte equality observed |
| erase.test | 10 | 0.000818s | 0.000845s | 0.000804s | byte equality observed |
| erase_key.test | 10 | 0.000819s | 0.000820s | 0.000847s | byte equality observed |
| filter.test | 10 | 0.000811s | 0.000815s | 0.000837s | byte equality observed |
| filter_if.test | 10 | 0.000820s | 0.000845s | 0.000824s | byte equality observed |
| filter_view.test | 10 | 0.000825s | 0.000854s | 0.000836s | byte equality observed |
| find.test | 10 | 0.000833s | 0.000838s | 0.000810s | byte equality observed |
| find_if.test | 10 | 0.000806s | 0.000821s | 0.000799s | byte equality observed |
| flatten.test | 10 | 0.000823s | 0.000826s | 0.000820s | byte equality observed |
| flatten_view.test | 10 | 0.000819s | 0.000824s | 0.000780s | byte equality observed |
| fold.test | 10 | 0.000801s | 0.000814s | 0.000813s | byte equality observed |
| for_each.test | 10 | 0.000820s | 0.000829s | 0.000819s | byte equality observed |
| front_extended_deque.test | 10 | 0.000813s | 0.000819s | 0.000800s | byte equality observed |
| fused.test | 10 | 0.000795s | 0.000813s | 0.000821s | byte equality observed |
| fused_function_object.test | 10 | 0.000804s | 0.000815s | 0.000821s | byte equality observed |
| fused_procedure.test | 10 | 0.000798s | 0.000812s | 0.000822s | byte equality observed |
| github-176.test | 10 | 0.000807s | 0.000788s | 0.000798s | byte equality observed |
| hash.test | 10 | 0.000817s | 0.000827s | 0.000798s | byte equality observed |
| identity_view.test | 10 | 0.000822s | 0.000825s | 0.000802s | byte equality observed |
| insert.test | 10 | 0.000851s | 0.000867s | 0.000832s | byte equality observed |
| insert_range.test | 10 | 0.000822s | 0.000835s | 0.000858s | byte equality observed |
| invoke.test | 10 | 0.000812s | 0.000822s | 0.000818s | byte equality observed |
| invoke_function_object.test | 10 | 0.000798s | 0.000794s | 0.000811s | byte equality observed |
| invoke_procedure.test | 10 | 0.000805s | 0.000809s | 0.000820s | byte equality observed |
| io.test | 10 | 0.000887s | 0.000903s | 0.000865s | byte equality observed |
| iter_fold.test | 10 | 0.000815s | 0.000784s | 0.000815s | byte equality observed |
| iterator_range.test | 10 | 0.000822s | 0.000814s | 0.000806s | byte equality observed |
| join.test | 10 | 0.000790s | 0.000791s | 0.000816s | byte equality observed |
| joint_view.test | 10 | 0.000842s | 0.000850s | 0.000831s | byte equality observed |
| list_comparison.test | 10 | 0.000793s | 0.000805s | 0.000827s | byte equality observed |
| list_construction.test | 10 | 0.000806s | 0.000785s | 0.000785s | byte equality observed |
| list_copy.test | 10 | 0.000830s | 0.000819s | 0.000791s | byte equality observed |
| list_hash.test | 10 | 0.000823s | 0.000816s | 0.000842s | byte equality observed |
| list_iterator.test | 10 | 0.000832s | 0.000817s | 0.000847s | byte equality observed |
| list_make.test | 10 | 0.000824s | 0.000821s | 0.000843s | byte equality observed |
| list_misc.test | 10 | 0.000811s | 0.000810s | 0.000833s | byte equality observed |
| list_mutate.test | 10 | 0.000828s | 0.000784s | 0.000814s | byte equality observed |
| list_nest.test | 10 | 0.000822s | 0.000808s | 0.000805s | byte equality observed |
| list_tie.test | 10 | 0.000797s | 0.000814s | 0.000823s | byte equality observed |
| list_value_at.test | 10 | 0.000810s | 0.000823s | 0.000801s | byte equality observed |
| make_fused.test | 10 | 0.000834s | 0.000801s | 0.000821s | byte equality observed |
| make_fused_function_object.test | 10 | 0.000804s | 0.000787s | 0.000783s | byte equality observed |
| make_fused_procedure.test | 10 | 0.000815s | 0.000805s | 0.000792s | byte equality observed |
| make_list.test | 10 | 0.000816s | 0.000841s | 0.000815s | byte equality observed |
| make_unfused.test | 10 | 0.000817s | 0.000817s | 0.000804s | byte equality observed |
| make_vector.test | 10 | 0.000816s | 0.000801s | 0.000825s | byte equality observed |
| map.test | 10 | 0.000836s | 0.000819s | 0.000832s | byte equality observed |
| map_comparison.test | 10 | 0.000810s | 0.000783s | 0.000794s | byte equality observed |
| map_construction.test | 10 | 0.000815s | 0.000794s | 0.000818s | byte equality observed |
| map_copy.test | 10 | 0.000834s | 0.000793s | 0.000794s | byte equality observed |
| map_misc.test | 10 | 0.000816s | 0.000793s | 0.000788s | byte equality observed |
| map_move.test | 10 | 0.000818s | 0.000836s | 0.000816s | byte equality observed |
| map_mutate.test | 10 | 0.000804s | 0.000796s | 0.000797s | byte equality observed |
| map_tie.test | 10 | 0.000818s | 0.000819s | 0.000801s | byte equality observed |
| move.test | 10 | 0.000803s | 0.000808s | 0.000823s | byte equality observed |
| nil.test | 10 | 0.000828s | 0.000831s | 0.000779s | byte equality observed |
| none.test | 10 | 0.000807s | 0.000807s | 0.000800s | byte equality observed |
| nview.test | 10 | 0.000794s | 0.000822s | 0.000827s | byte equality observed |
| pop_back.test | 10 | 0.000819s | 0.000839s | 0.000841s | byte equality observed |
| pop_front.test | 10 | 0.000805s | 0.000842s | 0.000836s | byte equality observed |
| push_back.test | 10 | 0.000830s | 0.000888s | 0.000811s | byte equality observed |
| push_front.test | 10 | 0.000868s | 0.000868s | 0.000839s | byte equality observed |
| quick.test | 10 | 0.000355s | 0.000806s | 0.000819s | byte equality observed |
| ref_vector.test | 10 | 0.000812s | 0.000810s | 0.000790s | byte equality observed |
| remove.test | 10 | 0.000822s | 0.000846s | 0.000840s | byte equality observed |
| remove_if.test | 10 | 0.000845s | 0.000819s | 0.000829s | byte equality observed |
| repetitive_view.test | 10 | 0.000785s | 0.000816s | 0.000825s | byte equality observed |
| replace.test | 10 | 0.000801s | 0.000803s | 0.000843s | byte equality observed |
| replace_if.test | 10 | 0.000827s | 0.000826s | 0.000846s | byte equality observed |
| reverse.test | 10 | 0.000824s | 0.000825s | 0.000857s | byte equality observed |
| reverse_fold.test | 10 | 0.000808s | 0.000826s | 0.000836s | byte equality observed |
| reverse_iter_fold.test | 10 | 0.000797s | 0.000828s | 0.000838s | byte equality observed |
| reverse_view.test | 10 | 0.000831s | 0.000821s | 0.000803s | byte equality observed |
| segmented_find.test | 10 | 0.000814s | 0.000828s | 0.000806s | byte equality observed |
| segmented_find_if.test | 10 | 0.000804s | 0.000798s | 0.000817s | byte equality observed |
| segmented_fold.test | 10 | 0.000857s | 0.000830s | 0.000823s | byte equality observed |
| segmented_for_each.test | 10 | 0.000859s | 0.000824s | 0.000826s | byte equality observed |
| segmented_iterator_range.test | 10 | 0.000837s | 0.000843s | 0.000833s | byte equality observed |
| set.test | 10 | 0.000840s | 0.000811s | 0.000819s | byte equality observed |
| single_view.test | 10 | 0.000855s | 0.000819s | 0.000847s | byte equality observed |
| std_array.test | 10 | 0.000818s | 0.000788s | 0.000812s | byte equality observed |
| std_pair.test | 10 | 0.000818s | 0.000819s | 0.000817s | byte equality observed |
| std_tuple.test | 10 | 0.000817s | 0.000795s | 0.000813s | byte equality observed |
| std_tuple_iterator.test | 10 | 0.000812s | 0.000779s | 0.000801s | byte equality observed |
| swap.test | 10 | 0.000806s | 0.000791s | 0.000825s | byte equality observed |
| transform.test | 10 | 0.000814s | 0.000829s | 0.000808s | byte equality observed |
| transform_view.test | 10 | 0.000832s | 0.000809s | 0.000820s | byte equality observed |
| tuple_comparison.test | 10 | 0.000824s | 0.000816s | 0.000802s | byte equality observed |
| tuple_construction.test | 10 | 0.000820s | 0.000817s | 0.000804s | byte equality observed |
| tuple_conversion.test | 10 | 0.000818s | 0.000826s | 0.000806s | byte equality observed |
| tuple_copy.test | 10 | 0.000806s | 0.000829s | 0.000833s | byte equality observed |
| tuple_element.test | 10 | 0.000834s | 0.000817s | 0.000804s | byte equality observed |
| tuple_hash.test | 10 | 0.000837s | 0.000828s | 0.000789s | byte equality observed |
| tuple_make.test | 10 | 0.000799s | 0.000834s | 0.000828s | byte equality observed |
| tuple_misc.test | 10 | 0.000805s | 0.000795s | 0.000808s | byte equality observed |
| tuple_mutate.test | 10 | 0.000818s | 0.000807s | 0.000802s | byte equality observed |
| tuple_nest.test | 10 | 0.000820s | 0.000807s | 0.000803s | byte equality observed |
| tuple_tie.test | 10 | 0.000805s | 0.000807s | 0.000830s | byte equality observed |
| tuple_traits__maybe_variadic.test | 10 | 0.000801s | 0.000811s | 0.000794s | byte equality observed |
| tuple_traits__no_variadic.test | 10 | 0.000794s | 0.000798s | 0.000809s | byte equality observed |
| unfused.test | 10 | 0.000803s | 0.000801s | 0.000809s | byte equality observed |
| unfused_typed.test | 10 | 0.000811s | 0.000789s | 0.000808s | byte equality observed |
| vector_comparison.test | 10 | 0.000814s | 0.000823s | 0.000784s | byte equality observed |
| vector_construction.test | 10 | 0.000840s | 0.000845s | 0.000794s | byte equality observed |
| vector_conversion.test | 10 | 0.000821s | 0.000787s | 0.000803s | byte equality observed |
| vector_copy.test | 10 | 0.000825s | 0.000814s | 0.000830s | byte equality observed |
| vector_hash.test | 10 | 0.000829s | 0.000799s | 0.000858s | byte equality observed |
| vector_iterator.test | 10 | 0.000820s | 0.000808s | 0.000826s | byte equality observed |
| vector_make.test | 10 | 0.000819s | 0.000801s | 0.000835s | byte equality observed |
| vector_misc.test | 10 | 0.000828s | 0.000809s | 0.000832s | byte equality observed |
| vector_move.test | 10 | 0.000819s | 0.000820s | 0.000862s | byte equality observed |
| vector_mutate.test | 10 | 0.000814s | 0.000809s | 0.000825s | byte equality observed |
| vector_n.test | 10 | 0.000822s | 0.000817s | 0.000804s | byte equality observed |
| vector_nest.test | 10 | 0.000818s | 0.000784s | 0.000823s | byte equality observed |
| vector_tie.test | 10 | 0.000811s | 0.000818s | 0.000779s | byte equality observed |
| vector_traits__maybe_variadic.test | 10 | 0.000803s | 0.000831s | 0.000783s | byte equality observed |
| vector_traits__no_variadic.test | 10 | 0.000795s | 0.000828s | 0.000783s | byte equality observed |
| vector_value_at.test | 10 | 0.000814s | 0.000831s | 0.000824s | byte equality observed |
| zip.test | 10 | 0.000830s | 0.000806s | 0.000809s | byte equality observed |
| zip2.test | 10 | 0.000820s | 0.000797s | 0.000830s | byte equality observed |
| zip_ignore.test | 10 | 0.000815s | 0.000809s | 0.000824s | byte equality observed |
| zip_view.test | 10 | 0.000806s | 0.000783s | 0.000794s | byte equality observed |
| zip_view2.test | 10 | 0.000796s | 0.000807s | 0.000783s | byte equality observed |
| zip_view_ignore.test | 10 | 0.000794s | 0.000812s | 0.000793s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44362912212).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
