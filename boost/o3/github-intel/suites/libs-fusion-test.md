# libs/fusion/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| all.test | RUN | 0.294192 | 0.636800 | 0.816330 | 0.001115 | 0.001361 | 0.001165 |
| any.test | RUN | 0.282651 | 0.605678 | 0.767096 | 0.001147 | 0.001243 | 0.001285 |
| clear.test | RUN | 0.206437 | 0.570887 | 0.639871 | 0.001257 | 0.001504 | 0.001152 |
| copy.test | RUN | 0.172384 | 0.418158 | 0.516732 | 0.001377 | 0.001511 | 0.001259 |
| count.test | RUN | 0.196055 | 0.462637 | 0.573676 | 0.001406 | 0.001394 | 0.001262 |
| count_if.test | RUN | 0.183067 | 0.429349 | 0.521466 | 0.001179 | 0.001484 | 0.001401 |
| erase.test | RUN | 0.262698 | 0.772559 | 0.878405 | 0.001422 | 0.001384 | 0.001278 |
| erase_key.test | RUN | 0.260858 | 0.766651 | 0.823698 | 0.000985 | 0.001237 | 0.001167 |
| filter.test | RUN | 0.230694 | 0.643918 | 0.751878 | 0.001498 | 0.001375 | 0.001383 |
| filter_if.test | RUN | 0.261652 | 0.752556 | 0.871729 | 0.001344 | 0.001484 | 0.001399 |
| find.test | RUN | 0.217966 | 0.509349 | 0.644955 | 0.001148 | 0.001238 | 0.000988 |
| find_if.test | RUN | 0.207655 | 0.473051 | 0.601039 | 0.001255 | 0.001203 | 0.001439 |
| fold.test | RUN | 0.234974 | 0.595321 | 0.742568 | 0.001363 | 0.001480 | 0.001194 |
| for_each.test | RUN | 0.206016 | 0.544484 | 0.645193 | 0.001292 | 0.001444 | 0.001354 |
| insert.test | RUN | 0.313252 | 0.950694 | 1.047579 | 0.001180 | 0.001455 | 0.001175 |
| insert_range.test | RUN | 0.310682 | 0.945386 | 1.042855 | 0.001369 | 0.000892 | 0.001168 |
| iter_fold.test | RUN | 0.352798 | 0.897887 | 1.233309 | 0.001265 | 0.001407 | 0.001292 |
| move.test | RUN | 0.184335 | 0.429257 | 0.522237 | 0.001286 | 0.001276 | 0.001307 |
| none.test | RUN | 0.294421 | 0.609318 | 0.786819 | 0.001148 | 0.001468 | 0.001385 |
| pop_back.test | RUN | 0.285504 | 0.842415 | 0.926553 | 0.001263 | 0.001432 | 0.001222 |
| pop_front.test | RUN | 0.239280 | 0.678786 | 0.743327 | 0.001522 | 0.001386 | 0.001184 |
| push_back.test | RUN | 0.309971 | 0.968276 | 1.020597 | 0.001323 | 0.001417 | 0.001339 |
| push_front.test | RUN | 0.265488 | 0.795550 | 0.863600 | 0.001336 | 0.001346 | 0.001246 |
| remove.test | RUN | 0.295497 | 0.926687 | 1.035933 | 0.001179 | 0.001439 | 0.001178 |
| remove_if.test | RUN | 0.260691 | 0.744295 | 0.875307 | 0.001234 | 0.001453 | 0.001312 |
| replace.test | RUN | 0.259836 | 0.729145 | 0.803205 | 0.001381 | 0.001386 | 0.001186 |
| replace_if.test | RUN | 0.250350 | 0.712781 | 0.792083 | 0.001402 | 0.001583 | 0.001211 |
| reverse_fold.test | RUN | 0.395447 | 1.024366 | 1.371463 | 0.001357 | 0.001350 | 0.001332 |
| reverse_iter_fold.test | RUN | 0.406758 | 1.063741 | 1.453313 | 0.001349 | 0.001489 | 0.001389 |
| reverse.test | RUN | 0.256763 | 0.757352 | 0.817586 | 0.001302 | 0.001360 | 0.001304 |
| segmented_for_each.test | RUN | 0.436582 | 1.445993 | 1.688573 | 0.001230 | 0.001464 | 0.001307 |
| segmented_find.test | RUN | 0.265712 | 0.745898 | 0.929828 | 0.001222 | 0.001283 | 0.001292 |
| segmented_find_if.test | RUN | 0.267752 | 0.751065 | 0.944770 | 0.001163 | 0.001386 | 0.001542 |
| segmented_fold.test | RUN | 0.338930 | 1.014442 | 1.235901 | 0.001562 | 0.001540 | 0.001409 |
| transform.test | RUN | 0.264258 | 0.796605 | 0.875689 | 0.001397 | 0.001386 | 0.001299 |
| join.test | RUN | 0.198835 | 0.481217 | 0.614535 | 0.001500 | 0.001460 | 0.001427 |
| zip.test | RUN | 0.352112 | 0.897143 | 1.166205 | 0.001364 | 0.001497 | 0.001391 |
| zip2.test | RUN | 0.327927 | 0.888374 | 1.101028 | 0.001464 | 0.001380 | 0.001328 |
| zip_ignore.test | RUN | 0.252190 | 0.585255 | 0.723995 | 0.001045 | 0.001237 | 0.001532 |
| flatten.test | RUN | 0.232838 | 0.664017 | 0.760992 | 0.001240 | 0.001404 | 0.001230 |
| ticket-5490.test | COMPILE | 0.124052 | 0.280265 | 0.347698 | — | — | — |
| as_deque.test | RUN | 0.233143 | 0.630631 | 0.801253 | 0.001208 | 0.001363 | 0.001248 |
| as_list.test | RUN | 0.266509 | 0.784835 | 0.859889 | 0.001206 | 0.001595 | 0.001311 |
| as_map.test | RUN | 0.260258 | 0.766902 | 0.867684 | 0.001270 | 0.001259 | 0.001228 |
| as_map_assoc.test | RUN | 0.256190 | 0.720492 | 0.814363 | 0.001174 | 0.001386 | 0.001114 |
| as_set.test | RUN | 0.304349 | 0.901602 | 1.019130 | 0.001494 | 0.001237 | 0.001234 |
| as_vector.test | RUN | 0.270256 | 0.811874 | 0.888489 | 0.001252 | 0.001342 | 0.001386 |
| boost_tuple.test | RUN | 0.270329 | 0.782266 | 0.879968 | 0.001155 | 0.001214 | 0.001249 |
| boost_tuple_iterator.test | RUN | 0.181365 | 0.449578 | 0.525761 | 0.001582 | 0.001215 | 0.001401 |
| cons.test | RUN | 0.339492 | 0.887311 | 1.036338 | 0.001150 | 0.000916 | 0.001157 |
| convert_boost_tuple.test | RUN | 0.210958 | 0.679559 | 0.691820 | 0.001378 | 0.001350 | 0.001586 |
| convert_deque.test | RUN | 0.214344 | 0.679169 | 0.688544 | 0.001261 | 0.001214 | 0.001120 |
| convert_list.test | RUN | 0.212479 | 0.690134 | 0.687624 | 0.001223 | 0.001301 | 0.001171 |
| convert_std_pair.test | RUN | 0.221619 | 0.692109 | 0.701682 | 0.001351 | 0.001306 | 0.001187 |
| convert_std_tuple.test | RUN | 0.211641 | 0.675549 | 0.685737 | 0.001307 | 0.001181 | 0.001115 |
| convert_vector.test | RUN | 0.212883 | 0.673721 | 0.683445 | 0.001328 | 0.001164 | 0.001168 |
| filter_view.test | RUN | 0.258955 | 0.706885 | 0.807373 | 0.001267 | 0.001326 | 0.001432 |
| hash.test | RUN | 0.253148 | 0.643137 | 0.757406 | 0.001186 | 0.001352 | 0.001176 |
| io.test | RUN | 0.273321 | 0.914011 | 0.925943 | 0.001220 | 0.001615 | 0.001550 |
| iterator_range.test | RUN | 0.240853 | 0.681620 | 0.774283 | 0.000985 | 0.001395 | 0.001484 |
| joint_view.test | RUN | 0.333563 | 1.139102 | 1.170131 | 0.001456 | 0.001475 | 0.001354 |
| list_comparison.test | RUN | 0.184502 | 0.463858 | 0.553204 | 0.001319 | 0.001353 | 0.001211 |
| list_construction.test | RUN | 0.188299 | 0.454308 | 0.547627 | 0.001114 | 0.001322 | 0.001226 |
| list_copy.test | RUN | 0.279738 | 0.842310 | 0.944550 | 0.001296 | 0.001316 | 0.001325 |
| list_iterator.test | RUN | 0.186206 | 0.450101 | 0.510421 | 0.001266 | 0.001167 | 0.001182 |
| list_hash.test | RUN | 0.251011 | 0.943651 | 0.778908 | 0.001290 | 0.001437 | 0.001338 |
| list_make.test | RUN | 0.191237 | 0.500309 | 0.583797 | 0.001503 | 0.001257 | 0.001420 |
| list_misc.test | RUN | 0.259098 | 0.592929 | 0.728161 | 0.001339 | 0.001480 | 0.001422 |
| list_mutate.test | RUN | 0.178000 | 0.391042 | 0.487280 | 0.001228 | 0.001294 | 0.001250 |
| list_nest.test | RUN | 0.351074 | 1.167548 | 1.347454 | 0.001330 | 0.001348 | 0.001119 |
| list_tie.test | RUN | 0.187110 | 0.449252 | 0.532798 | 0.001413 | 0.001587 | 0.001308 |
| list_value_at.test | RUN | 0.175157 | 0.425169 | 0.506337 | 0.001110 | 0.001291 | 0.001232 |
| deque_comparison.test | RUN | 0.182069 | 0.478155 | 0.582217 | 0.001088 | 0.001409 | 0.001411 |
| deque_construction.test | RUN | 0.190004 | 0.450280 | 0.550724 | 0.001274 | 0.001353 | 0.001156 |
| deque_copy.test | RUN | 0.280207 | 0.774021 | 0.881997 | 0.001144 | 0.001260 | 0.001281 |
| deque_iterator.test | RUN | 0.183642 | 0.475925 | 0.535840 | 0.001283 | 0.001331 | 0.001444 |
| deque_hash.test | RUN | 0.256729 | 0.895049 | 0.779810 | 0.001136 | 0.001333 | 0.001296 |
| deque_is_constructible.test | COMPILE | 0.096076 | 0.202167 | 0.252739 | — | — | — |
| deque_make.test | RUN | 0.187579 | 0.467216 | 0.573054 | 0.001510 | 0.001366 | 0.001329 |
| deque_misc.test | RUN | 0.244482 | 0.590624 | 0.704887 | 0.001219 | 0.001411 | 0.001312 |
| deque_move.test | RUN | 0.196339 | 0.497269 | 0.559877 | 0.001338 | 0.001240 | 0.001220 |
| deque_mutate.test | RUN | 0.171102 | 0.397795 | 0.481428 | 0.001124 | 0.001408 | 0.001307 |
| deque_nest.test | RUN | 0.539399 | 1.873744 | 2.184660 | 0.001230 | 0.001228 | 0.001245 |
| deque_tie.test | RUN | 0.176182 | 0.425333 | 0.519543 | 0.001255 | 0.001176 | 0.001302 |
| deque_value_at.test | RUN | 0.175357 | 0.405406 | 0.496438 | 0.001225 | 0.001256 | 0.001136 |
| front_extended_deque.test | RUN | 0.256698 | 0.596590 | 0.739749 | 0.001242 | 0.001438 | 0.001431 |
| back_extended_deque.test | RUN | 0.251713 | 0.605273 | 0.766567 | 0.001174 | 0.001541 | 0.001336 |
| make_list.test | RUN | 0.192582 | 0.500801 | 0.585986 | 0.001299 | 0.001307 | 0.001276 |
| make_vector.test | RUN | 0.197630 | 0.487413 | 0.565884 | 0.001264 | 0.001490 | 0.001420 |
| map.test | RUN | 0.257047 | 0.773169 | 0.861272 | 0.001552 | 0.001213 | 0.001452 |
| map_comparison.test | RUN | 0.193123 | 0.477025 | 0.568931 | 0.001414 | 0.001412 | 0.001362 |
| map_construction.test | RUN | 0.187934 | 0.454842 | 0.556743 | 0.001144 | 0.001285 | 0.001494 |
| map_copy.test | RUN | 0.228381 | 0.597136 | 0.686877 | 0.001236 | 0.001356 | 0.001338 |
| map_misc.test | RUN | 0.244561 | 0.595770 | 0.705646 | 0.001081 | 0.001217 | 0.001333 |
| map_move.test | RUN | 0.190913 | 0.504170 | 0.564781 | 0.001362 | 0.001445 | 0.001404 |
| map_mutate.test | RUN | 0.171938 | 0.400827 | 0.489522 | 0.000900 | 0.001326 | 0.001318 |
| map_tie.test | RUN | 0.182094 | 0.402510 | 0.499624 | 0.001292 | 0.001566 | 0.001299 |
| nil.test | RUN | 0.118440 | 0.286854 | 0.341056 | 0.001275 | 0.001231 | 0.001311 |
| nview.test | RUN | 0.234314 | 0.594639 | 0.726588 | 0.001299 | 0.001471 | 0.001302 |
| reverse_view.test | RUN | 0.329904 | 0.974451 | 1.074984 | 0.001172 | 0.001452 | 0.001265 |
| segmented_iterator_range.test | RUN | 0.374487 | 1.168983 | 1.354630 | 0.001418 | 0.001419 | 0.001217 |
| set.test | RUN | 0.233297 | 0.664576 | 0.752678 | 0.001178 | 0.001404 | 0.001295 |
| single_view.test | RUN | 0.214735 | 0.596009 | 0.682561 | 0.001477 | 0.001421 | 0.001215 |
| std_pair.test | RUN | 0.273694 | 0.778144 | 0.886343 | 0.001358 | 0.001375 | 0.001265 |
| boost_array.test | RUN | 0.226199 | 0.533680 | 0.641319 | 0.001456 | 0.001437 | 0.001201 |
| array.test | RUN | 0.224196 | 0.524662 | 0.629497 | 0.001176 | 0.001301 | 0.001184 |
| std_array.test | RUN | 0.223521 | 0.519109 | 0.643969 | 0.001374 | 0.001467 | 0.001164 |
| tuple_comparison.test | RUN | 0.198159 | 0.505534 | 0.586080 | 0.001137 | 0.001459 | 0.001448 |
| tuple_construction.test | RUN | 0.213032 | 0.496230 | 0.599141 | 0.001274 | 0.001412 | 0.001426 |
| tuple_conversion.test | RUN | 0.463560 | 1.574906 | 2.005594 | 0.001271 | 0.001509 | 0.001085 |
| tuple_copy.test | RUN | 0.304678 | 0.903400 | 1.033122 | 0.001364 | 0.001300 | 0.001213 |
| tuple_element.test | RUN | 0.187903 | 0.451165 | 0.547821 | 0.001336 | 0.001476 | 0.001369 |
| tuple_make.test | RUN | 0.211341 | 0.526651 | 0.615436 | 0.001227 | 0.001237 | 0.001304 |
| tuple_misc.test | RUN | 0.257433 | 0.630587 | 0.802439 | 0.001213 | 0.001213 | 0.001227 |
| tuple_mutate.test | RUN | 0.185783 | 0.413108 | 0.514933 | 0.001469 | 0.001131 | 0.001433 |
| tuple_nest.test | RUN | 0.790738 | 3.278756 | 3.743991 | 0.001105 | 0.001439 | 0.001284 |
| tuple_hash.test | RUN | 0.269557 | 0.929444 | 0.805979 | 0.001416 | 0.001537 | 0.001255 |
| tuple_tie.test | RUN | 0.198526 | 0.467737 | 0.567454 | 0.001470 | 0.001279 | 0.001204 |
| tuple_traits__maybe_variadic.test | RUN | 0.210245 | 0.574441 | 0.593618 | 0.001197 | 0.001488 | 0.001192 |
| tuple_traits__no_variadic.test | RUN | 0.236973 | 0.589172 | 0.647711 | 0.001275 | 0.001510 | 0.001363 |
| transform_view.test | RUN | 0.317291 | 0.972020 | 1.052554 | 0.001340 | 0.001439 | 0.001289 |
| identity_view.test | RUN | 0.303280 | 0.895337 | 0.994023 | 0.001276 | 0.001396 | 0.001395 |
| vector_comparison.test | RUN | 0.195040 | 0.477163 | 0.569076 | 0.001478 | 0.001438 | 0.001366 |
| vector_construction.test | RUN | 0.195435 | 0.450691 | 0.597055 | 0.001214 | 0.001558 | 0.001449 |
| vector_conversion.test | RUN | 0.560652 | 2.080145 | 2.530939 | 0.001407 | 0.001515 | 0.001358 |
| vector_copy.test | RUN | 0.294568 | 0.872188 | 1.032733 | 0.001279 | 0.001358 | 0.001169 |
| vector_iterator.test | RUN | 0.184010 | 0.479426 | 0.520714 | 0.001352 | 0.001245 | 0.001195 |
| vector_make.test | RUN | 0.193463 | 0.485473 | 0.562445 | 0.001149 | 0.001438 | 0.001260 |
| vector_misc.test | RUN | 0.248730 | 0.597290 | 0.698938 | 0.001201 | 0.001244 | 0.001037 |
| vector_move.test | RUN | 0.194190 | 0.508939 | 0.590382 | 0.001205 | 0.001514 | 0.001270 |
| vector_mutate.test | RUN | 0.170374 | 0.400450 | 0.475364 | 0.001440 | 0.001445 | 0.001448 |
| vector_n.test | RUN | 0.216453 | 0.509654 | 0.647207 | 0.001516 | 0.001578 | 0.001264 |
| vector_nest.test | RUN | 0.799554 | 3.395550 | 3.786402 | 0.001390 | 0.001350 | 0.001243 |
| vector_hash.test | RUN | 0.255530 | 0.933977 | 0.746180 | 0.001286 | 0.001295 | 0.001137 |
| vector_tie.test | RUN | 0.182568 | 0.436404 | 0.532803 | 0.001581 | 0.001586 | 0.001400 |
| vector_traits__maybe_variadic.test | RUN | 0.200531 | 0.523059 | 0.560604 | 0.001330 | 0.001298 | 0.001233 |
| vector_traits__no_variadic.test | RUN | 0.211500 | 0.549579 | 0.578886 | 0.001220 | 0.001643 | 0.001255 |
| vector_value_at.test | RUN | 0.172872 | 0.399325 | 0.499066 | 0.001107 | 0.001582 | 0.001472 |
| zip_view.test | RUN | 0.377929 | 1.010089 | 1.323765 | 0.001258 | 0.001572 | 0.001368 |
| zip_view2.test | RUN | 0.293192 | 0.806994 | 0.964526 | 0.001135 | 0.001397 | 0.001182 |
| zip_view_ignore.test | RUN | 0.274791 | 0.708063 | 0.862627 | 0.001488 | 0.001438 | 0.001370 |
| repetitive_view.test | RUN | 0.475232 | 1.325221 | 1.679316 | 0.001384 | 0.001450 | 0.001307 |
| deduce_sequence.test | RUN | 0.221015 | 0.556770 | 0.654210 | 0.001193 | 0.001530 | 0.001395 |
| adapt_adt_named.test | RUN | 0.272480 | 0.785014 | 0.899803 | 0.001224 | 0.001442 | 0.001286 |
| adapt_adt_named_empty.test | RUN | 0.234178 | 0.636051 | 0.703518 | 0.001309 | 0.001451 | 0.001411 |
| adapt_adt.test | RUN | 0.307710 | 1.044112 | 1.051524 | 0.001138 | 0.001424 | 0.001372 |
| adapt_adt_empty.test | RUN | 0.227599 | 0.633471 | 0.699562 | 0.001328 | 0.001518 | 0.001176 |
| adapt_assoc_adt_named.test | RUN | 0.303946 | 0.824331 | 0.927937 | 0.001212 | 0.001361 | 0.001250 |
| adapt_assoc_adt_named_empty.test | RUN | 0.230921 | 0.636654 | 0.709539 | 0.001354 | 0.001390 | 0.001272 |
| adapt_assoc_adt.test | RUN | 0.306370 | 0.842478 | 0.979013 | 0.001248 | 0.001194 | 0.001314 |
| adapt_assoc_adt_empty.test | RUN | 0.231192 | 0.637277 | 0.705464 | 0.001408 | 0.001362 | 0.001456 |
| adapt_assoc_struct_named.test | RUN | 0.294592 | 0.802551 | 0.904253 | 0.001174 | 0.001263 | 0.001281 |
| adapt_assoc_struct_named_empty.test | RUN | 0.236068 | 0.632870 | 0.713174 | 0.001202 | 0.001207 | 0.001261 |
| adapt_assoc_struct.test | RUN | 0.269575 | 0.763746 | 0.846383 | 0.001284 | 0.001387 | 0.001302 |
| adapt_assoc_struct_empty.test | RUN | 0.229977 | 0.632445 | 0.708479 | 0.001354 | 0.001327 | 0.001239 |
| adapt_assoc_tpl_adt.test | RUN | 0.317371 | 0.871825 | 0.997608 | 0.001478 | 0.001353 | 0.001464 |
| adapt_assoc_tpl_adt_empty.test | RUN | 0.231228 | 0.641718 | 0.702231 | 0.001404 | 0.001193 | 0.001395 |
| adapt_assoc_tpl_struct.test | RUN | 0.257553 | 0.744375 | 0.820983 | 0.001247 | 0.001199 | 0.001333 |
| adapt_assoc_tpl_struct_empty.test | RUN | 0.231237 | 0.633931 | 0.705494 | 0.001325 | 0.000962 | 0.001263 |
| adapt_struct_named.test | RUN | 0.263222 | 0.774824 | 0.826302 | 0.001466 | 0.001282 | 0.001266 |
| adapt_struct_named_empty.test | RUN | 0.231583 | 0.622195 | 0.693864 | 0.001286 | 0.001127 | 0.001386 |
| adapt_struct.test | RUN | 0.291217 | 0.885148 | 0.953810 | 0.001246 | 0.001477 | 0.001474 |
| adapt_struct_empty.test | RUN | 0.232263 | 0.632073 | 0.694787 | 0.001515 | 0.001524 | 0.001253 |
| adapt_tpl_adt.test | RUN | 0.297640 | 1.018044 | 0.987421 | 0.001025 | 0.001372 | 0.001244 |
| adapt_tpl_adt_empty.test | RUN | 0.235583 | 0.629016 | 0.715727 | 0.001286 | 0.001508 | 0.001223 |
| adapt_tpl_struct.test | RUN | 0.247751 | 0.705404 | 0.790673 | 0.001335 | 0.001280 | 0.001400 |
| adapt_tpl_struct_empty.test | RUN | 0.229899 | 0.635924 | 0.695489 | 0.001266 | 0.001358 | 0.001176 |
| adt_attribute_proxy.test | RUN | 0.266158 | 0.609600 | 0.739266 | 0.001460 | 0.001445 | 0.001316 |
| define_struct.test | RUN | 0.322176 | 0.872236 | 0.996434 | 0.001241 | 0.001571 | 0.001297 |
| define_struct_empty.test | RUN | 0.275414 | 0.704090 | 0.801766 | 0.001223 | 0.001204 | 0.001292 |
| define_struct_move.test | RUN | 0.179144 | 0.398051 | 0.477901 | 0.001215 | 0.001308 | 0.001374 |
| define_struct_inline.test | RUN | 0.350960 | 1.031817 | 1.111340 | 0.001322 | 0.001354 | 0.001278 |
| define_struct_inline_empty.test | RUN | 0.281212 | 0.706553 | 0.803529 | 0.001312 | 0.001350 | 0.001139 |
| define_struct_inline_move.test | RUN | 0.184996 | 0.397656 | 0.484640 | 0.001334 | 0.001181 | 0.001190 |
| define_assoc_struct.test | RUN | 0.312963 | 0.823111 | 0.929077 | 0.001375 | 0.001384 | 0.001399 |
| define_assoc_struct_empty.test | RUN | 0.283597 | 0.706240 | 0.812843 | 0.001285 | 0.001555 | 0.001256 |
| define_assoc_struct_move.test | RUN | 0.176499 | 0.390454 | 0.474845 | 0.001366 | 0.001396 | 0.001215 |
| define_tpl_struct.test | RUN | 0.315133 | 0.842028 | 0.932980 | 0.001568 | 0.001387 | 0.001115 |
| define_tpl_struct_empty.test | RUN | 0.291299 | 0.708858 | 0.809630 | 0.001222 | 0.001505 | 0.001138 |
| define_tpl_struct_move.test | RUN | 0.179070 | 0.403429 | 0.475490 | 0.001341 | 0.001165 | 0.001144 |
| define_tpl_struct_inline.test | RUN | 0.332150 | 0.977822 | 1.013810 | 0.001262 | 0.001345 | 0.001165 |
| define_tpl_struct_inline_empty.test | RUN | 0.278419 | 0.725073 | 0.797286 | 0.001268 | 0.001396 | 0.001285 |
| define_tpl_struct_inline_move.test | RUN | 0.175774 | 0.391316 | 0.488056 | 0.001123 | 0.001459 | 0.001126 |
| define_assoc_tpl_struct.test | RUN | 0.321550 | 0.836293 | 0.951273 | 0.001374 | 0.001422 | 0.001262 |
| define_assoc_tpl_struct_empty.test | RUN | 0.277062 | 0.707278 | 0.801790 | 0.001223 | 0.001338 | 0.001124 |
| define_assoc_tpl_struct_move.test | RUN | 0.181232 | 0.399706 | 0.486214 | 0.001247 | 0.001212 | 0.001399 |
| std_tuple.test | RUN | 0.182386 | 0.455681 | 0.534889 | 0.001242 | 0.001438 | 0.001205 |
| std_tuple_iterator.test | RUN | 0.190836 | 0.469746 | 0.536390 | 0.001338 | 0.001414 | 0.001173 |
| ref_vector.test | RUN | 0.210728 | 0.479575 | 0.573876 | 0.001335 | 0.001481 | 0.001202 |
| flatten_view.test | RUN | 0.227569 | 0.602444 | 0.692170 | 0.001237 | 0.001262 | 0.001161 |
| github-159.test | COMPILE | 0.095492 | 0.214500 | 0.252941 | — | — | — |
| github-176.test | RUN | 0.211502 | 0.541084 | 0.575076 | 0.001379 | 0.001466 | 0.001195 |
| size.test | COMPILE | 0.175871 | 0.361042 | 0.453579 | — | — | — |
| fused.test | RUN | 0.242887 | 0.560344 | 0.674580 | 0.001353 | 0.001441 | 0.001304 |
| fused_function_object.test | RUN | 0.187545 | 0.425934 | 0.510431 | 0.001395 | 0.001229 | 0.001226 |
| fused_procedure.test | RUN | 0.236394 | 0.533717 | 0.636025 | 0.001175 | 0.001224 | 0.001153 |
| unfused.test | RUN | 0.191104 | 0.440165 | 0.524144 | 0.001219 | 0.001372 | 0.001265 |
| unfused_typed.test | RUN | 0.187989 | 0.476195 | 0.551244 | 0.001176 | 0.001489 | 0.001158 |
| make_fused.test | RUN | 0.243890 | 0.568155 | 0.663160 | 0.001013 | 0.001201 | 0.001158 |
| make_fused_function_object.test | RUN | 0.187172 | 0.427393 | 0.507445 | 0.001219 | 0.001394 | 0.001166 |
| make_fused_procedure.test | RUN | 0.237050 | 0.551793 | 0.649193 | 0.001506 | 0.001364 | 0.001256 |
| make_unfused.test | RUN | 0.185006 | 0.435093 | 0.529005 | 0.001497 | 0.001564 | 0.001331 |
| invoke.test | RUN | 0.491387 | 1.601007 | 1.843362 | 0.001243 | 0.001224 | 0.001186 |
| invoke_function_object.test | RUN | 0.223861 | 0.569177 | 0.670168 | 0.001531 | 0.001303 | 0.001238 |
| invoke_procedure.test | RUN | 0.390681 | 1.173246 | 1.365065 | 0.001308 | 0.001465 | 0.001236 |
| swap.test | RUN | 0.285534 | 0.696492 | 0.867505 | 0.001252 | 0.001471 | 0.001240 |
| is_sequence.test | COMPILE | 0.046655 | 0.100069 | 0.106974 | — | — | — |
| is_view.test | COMPILE | 0.049143 | 0.099282 | 0.105990 | — | — | — |
| pair_deque.test | COMPILE | 0.101884 | 0.223835 | 0.271958 | — | — | — |
| pair_list.test | COMPILE | 0.099847 | 0.218012 | 0.249929 | — | — | — |
| pair_map.test | COMPILE | 0.104266 | 0.232562 | 0.277527 | — | — | — |
| pair_set.test | COMPILE | 0.105527 | 0.230061 | 0.260141 | — | — | — |
| pair_vector.test | COMPILE | 0.105868 | 0.228341 | 0.251413 | — | — | — |
| pair_nest.test | COMPILE | 0.042252 | 0.091408 | 0.103955 | — | — | — |
| index_sequence.test | COMPILE | 0.034328 | 0.062473 | 0.073327 | — | — | — |
| and.test | COMPILE | 0.027046 | 0.047562 | 0.055180 | — | — | — |
| tag_of.test | COMPILE | 0.046899 | 0.097057 | 0.100440 | — | — | — |
| unused.test | COMPILE | 0.022004 | 0.060457 | 0.062620 | — | — | — |
| tag_of_fallback.test | COMPILE | 0.037303 | 0.098438 | 0.097603 | — | — | — |
| make_pair_r-value.test | COMPILE | 0.040632 | 0.067456 | 0.067902 | — | — | — |
| quick.test | RUN | 0.141866 | 0.312127 | 0.332613 | 0.000394 | 0.001011 | 0.000928 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.999× | 0.992×, 1.005× | 0.996× |
| clang | 1.005× | 1.004×, 1.005× | 1.005× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1364 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/43740486413).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| adapt_adt.test | 10 | 0.000815s | 0.000852s | 0.000824s | byte equality observed |
| adapt_adt_empty.test | 10 | 0.000820s | 0.000810s | 0.000808s | byte equality observed |
| adapt_adt_named.test | 10 | 0.000832s | 0.000856s | 0.000826s | byte equality observed |
| adapt_adt_named_empty.test | 10 | 0.000815s | 0.000823s | 0.000790s | byte equality observed |
| adapt_assoc_adt.test | 10 | 0.000850s | 0.000814s | 0.000853s | byte equality observed |
| adapt_assoc_adt_empty.test | 10 | 0.000846s | 0.000814s | 0.000839s | byte equality observed |
| adapt_assoc_adt_named.test | 10 | 0.000808s | 0.000812s | 0.000844s | byte equality observed |
| adapt_assoc_adt_named_empty.test | 10 | 0.000817s | 0.000797s | 0.000846s | byte equality observed |
| adapt_assoc_struct.test | 10 | 0.000798s | 0.000797s | 0.000837s | byte equality observed |
| adapt_assoc_struct_empty.test | 10 | 0.000817s | 0.000828s | 0.000801s | byte equality observed |
| adapt_assoc_struct_named.test | 10 | 0.000806s | 0.000815s | 0.000805s | byte equality observed |
| adapt_assoc_struct_named_empty.test | 10 | 0.000817s | 0.000808s | 0.000822s | byte equality observed |
| adapt_assoc_tpl_adt.test | 10 | 0.000832s | 0.000847s | 0.000818s | byte equality observed |
| adapt_assoc_tpl_adt_empty.test | 10 | 0.000839s | 0.000817s | 0.000805s | byte equality observed |
| adapt_assoc_tpl_struct.test | 10 | 0.000835s | 0.000805s | 0.000830s | byte equality observed |
| adapt_assoc_tpl_struct_empty.test | 10 | 0.000816s | 0.000819s | 0.000793s | byte equality observed |
| adapt_struct.test | 10 | 0.000825s | 0.000799s | 0.000857s | byte equality observed |
| adapt_struct_empty.test | 10 | 0.000823s | 0.000796s | 0.000812s | byte equality observed |
| adapt_struct_named.test | 10 | 0.000824s | 0.000798s | 0.000808s | byte equality observed |
| adapt_struct_named_empty.test | 10 | 0.000822s | 0.000809s | 0.000807s | byte equality observed |
| adapt_tpl_adt.test | 10 | 0.000821s | 0.000812s | 0.000814s | byte equality observed |
| adapt_tpl_adt_empty.test | 10 | 0.000814s | 0.000804s | 0.000810s | byte equality observed |
| adapt_tpl_struct.test | 10 | 0.000838s | 0.000807s | 0.000812s | byte equality observed |
| adapt_tpl_struct_empty.test | 10 | 0.000812s | 0.000786s | 0.000824s | byte equality observed |
| adt_attribute_proxy.test | 10 | 0.000811s | 0.000782s | 0.000819s | byte equality observed |
| all.test | 10 | 0.000828s | 0.000795s | 0.000822s | byte equality observed |
| any.test | 10 | 0.000807s | 0.000798s | 0.000825s | byte equality observed |
| array.test | 10 | 0.000793s | 0.000806s | 0.000805s | byte equality observed |
| as_deque.test | 10 | 0.000804s | 0.000792s | 0.000802s | byte equality observed |
| as_list.test | 10 | 0.000835s | 0.000812s | 0.000814s | byte equality observed |
| as_map.test | 10 | 0.000831s | 0.000826s | 0.000827s | byte equality observed |
| as_map_assoc.test | 10 | 0.000810s | 0.000798s | 0.000815s | byte equality observed |
| as_set.test | 10 | 0.000839s | 0.000811s | 0.000823s | byte equality observed |
| as_vector.test | 10 | 0.000832s | 0.000820s | 0.000823s | byte equality observed |
| back_extended_deque.test | 10 | 0.000819s | 0.000829s | 0.000797s | byte equality observed |
| boost_array.test | 10 | 0.000811s | 0.000827s | 0.000800s | byte equality observed |
| boost_tuple.test | 10 | 0.000821s | 0.000828s | 0.000831s | byte equality observed |
| boost_tuple_iterator.test | 10 | 0.000807s | 0.000821s | 0.000794s | byte equality observed |
| clear.test | 10 | 0.000800s | 0.000805s | 0.000833s | byte equality observed |
| cons.test | 10 | 0.000832s | 0.000836s | 0.000836s | byte equality observed |
| convert_boost_tuple.test | 10 | 0.000817s | 0.000833s | 0.000810s | byte equality observed |
| convert_deque.test | 10 | 0.000824s | 0.000828s | 0.000817s | byte equality observed |
| convert_list.test | 10 | 0.000836s | 0.000837s | 0.000809s | byte equality observed |
| convert_std_pair.test | 10 | 0.000808s | 0.000851s | 0.000814s | byte equality observed |
| convert_std_tuple.test | 10 | 0.000833s | 0.000802s | 0.000826s | byte equality observed |
| convert_vector.test | 10 | 0.000807s | 0.000823s | 0.000815s | byte equality observed |
| copy.test | 10 | 0.000805s | 0.000783s | 0.000809s | byte equality observed |
| count.test | 10 | 0.000819s | 0.000788s | 0.000799s | byte equality observed |
| count_if.test | 10 | 0.000785s | 0.000811s | 0.000804s | byte equality observed |
| deduce_sequence.test | 10 | 0.000809s | 0.000802s | 0.000785s | byte equality observed |
| define_assoc_struct.test | 10 | 0.000819s | 0.000813s | 0.000825s | byte equality observed |
| define_assoc_struct_empty.test | 10 | 0.000827s | 0.000787s | 0.000812s | byte equality observed |
| define_assoc_struct_move.test | 10 | 0.000824s | 0.000798s | 0.000795s | byte equality observed |
| define_assoc_tpl_struct.test | 10 | 0.000797s | 0.000805s | 0.000819s | byte equality observed |
| define_assoc_tpl_struct_empty.test | 10 | 0.000826s | 0.000836s | 0.000832s | byte equality observed |
| define_assoc_tpl_struct_move.test | 10 | 0.000791s | 0.000806s | 0.000822s | byte equality observed |
| define_struct.test | 10 | 0.000821s | 0.000811s | 0.000831s | byte equality observed |
| define_struct_empty.test | 10 | 0.000797s | 0.000820s | 0.000811s | byte equality observed |
| define_struct_inline.test | 10 | 0.000834s | 0.000834s | 0.000822s | byte equality observed |
| define_struct_inline_empty.test | 10 | 0.000840s | 0.000789s | 0.000817s | byte equality observed |
| define_struct_inline_move.test | 10 | 0.000798s | 0.000808s | 0.000822s | byte equality observed |
| define_struct_move.test | 10 | 0.000799s | 0.000797s | 0.000810s | byte equality observed |
| define_tpl_struct.test | 10 | 0.000845s | 0.000821s | 0.000816s | byte equality observed |
| define_tpl_struct_empty.test | 10 | 0.000847s | 0.000834s | 0.000804s | byte equality observed |
| define_tpl_struct_inline.test | 10 | 0.000821s | 0.000833s | 0.000830s | byte equality observed |
| define_tpl_struct_inline_empty.test | 10 | 0.000836s | 0.000810s | 0.000839s | byte equality observed |
| define_tpl_struct_inline_move.test | 10 | 0.000808s | 0.000776s | 0.000815s | byte equality observed |
| define_tpl_struct_move.test | 10 | 0.000800s | 0.000797s | 0.000800s | byte equality observed |
| deque_comparison.test | 10 | 0.000807s | 0.000812s | 0.000805s | byte equality observed |
| deque_construction.test | 10 | 0.000792s | 0.000815s | 0.000797s | byte equality observed |
| deque_copy.test | 10 | 0.000813s | 0.000815s | 0.000795s | byte equality observed |
| deque_hash.test | 10 | 0.000815s | 0.000811s | 0.000834s | byte equality observed |
| deque_iterator.test | 10 | 0.000808s | 0.000800s | 0.000845s | byte equality observed |
| deque_make.test | 10 | 0.000800s | 0.000796s | 0.000830s | byte equality observed |
| deque_misc.test | 10 | 0.000809s | 0.000809s | 0.000828s | byte equality observed |
| deque_move.test | 10 | 0.000830s | 0.000802s | 0.000838s | byte equality observed |
| deque_mutate.test | 10 | 0.000788s | 0.000818s | 0.000807s | byte equality observed |
| deque_nest.test | 10 | 0.000799s | 0.000812s | 0.000809s | byte equality observed |
| deque_tie.test | 10 | 0.000799s | 0.000807s | 0.000804s | byte equality observed |
| deque_value_at.test | 10 | 0.000795s | 0.000774s | 0.000835s | byte equality observed |
| erase.test | 10 | 0.000814s | 0.000840s | 0.000796s | byte equality observed |
| erase_key.test | 10 | 0.000848s | 0.000858s | 0.000825s | byte equality observed |
| filter.test | 10 | 0.000846s | 0.000819s | 0.000810s | byte equality observed |
| filter_if.test | 10 | 0.000836s | 0.000839s | 0.000814s | byte equality observed |
| filter_view.test | 10 | 0.000841s | 0.000811s | 0.000838s | byte equality observed |
| find.test | 10 | 0.000824s | 0.000823s | 0.000848s | byte equality observed |
| find_if.test | 10 | 0.000825s | 0.000814s | 0.000817s | byte equality observed |
| flatten.test | 10 | 0.000838s | 0.000811s | 0.000817s | byte equality observed |
| flatten_view.test | 10 | 0.000820s | 0.000807s | 0.000809s | byte equality observed |
| fold.test | 10 | 0.000839s | 0.000807s | 0.000804s | byte equality observed |
| for_each.test | 10 | 0.000822s | 0.000802s | 0.000827s | byte equality observed |
| front_extended_deque.test | 10 | 0.000806s | 0.000823s | 0.000803s | byte equality observed |
| fused.test | 10 | 0.000794s | 0.000805s | 0.000822s | byte equality observed |
| fused_function_object.test | 10 | 0.000809s | 0.000797s | 0.000792s | byte equality observed |
| fused_procedure.test | 10 | 0.000830s | 0.000775s | 0.000798s | byte equality observed |
| github-176.test | 10 | 0.000799s | 0.000788s | 0.000819s | byte equality observed |
| hash.test | 10 | 0.000820s | 0.000788s | 0.000794s | byte equality observed |
| identity_view.test | 10 | 0.000828s | 0.000800s | 0.000819s | byte equality observed |
| insert.test | 10 | 0.000858s | 0.000828s | 0.000824s | byte equality observed |
| insert_range.test | 10 | 0.000834s | 0.000832s | 0.000842s | byte equality observed |
| invoke.test | 10 | 0.000827s | 0.000802s | 0.000819s | byte equality observed |
| invoke_function_object.test | 10 | 0.000797s | 0.000762s | 0.000793s | byte equality observed |
| invoke_procedure.test | 10 | 0.000801s | 0.000796s | 0.000806s | byte equality observed |
| io.test | 10 | 0.000882s | 0.000887s | 0.000931s | byte equality observed |
| iter_fold.test | 10 | 0.000793s | 0.000799s | 0.000818s | byte equality observed |
| iterator_range.test | 10 | 0.000827s | 0.000816s | 0.000811s | byte equality observed |
| join.test | 10 | 0.000819s | 0.000823s | 0.000830s | byte equality observed |
| joint_view.test | 10 | 0.000823s | 0.000811s | 0.000823s | byte equality observed |
| list_comparison.test | 10 | 0.000812s | 0.000795s | 0.000821s | byte equality observed |
| list_construction.test | 10 | 0.000794s | 0.000809s | 0.000825s | byte equality observed |
| list_copy.test | 10 | 0.000794s | 0.000824s | 0.000814s | byte equality observed |
| list_hash.test | 10 | 0.000837s | 0.000806s | 0.000819s | byte equality observed |
| list_iterator.test | 10 | 0.000813s | 0.000786s | 0.000820s | byte equality observed |
| list_make.test | 10 | 0.000817s | 0.000798s | 0.000810s | byte equality observed |
| list_misc.test | 10 | 0.000814s | 0.000809s | 0.000810s | byte equality observed |
| list_mutate.test | 10 | 0.000798s | 0.000818s | 0.000813s | byte equality observed |
| list_nest.test | 10 | 0.000793s | 0.000783s | 0.000847s | byte equality observed |
| list_tie.test | 10 | 0.000801s | 0.000799s | 0.000779s | byte equality observed |
| list_value_at.test | 10 | 0.000806s | 0.000824s | 0.000805s | byte equality observed |
| make_fused.test | 10 | 0.000794s | 0.000778s | 0.000809s | byte equality observed |
| make_fused_function_object.test | 10 | 0.000784s | 0.000837s | 0.000826s | byte equality observed |
| make_fused_procedure.test | 10 | 0.000793s | 0.000810s | 0.000816s | byte equality observed |
| make_list.test | 10 | 0.000830s | 0.000795s | 0.000800s | byte equality observed |
| make_unfused.test | 10 | 0.000813s | 0.000816s | 0.000839s | byte equality observed |
| make_vector.test | 10 | 0.000815s | 0.000808s | 0.000846s | byte equality observed |
| map.test | 10 | 0.000815s | 0.000827s | 0.000826s | byte equality observed |
| map_comparison.test | 10 | 0.000796s | 0.000802s | 0.000833s | byte equality observed |
| map_construction.test | 10 | 0.000795s | 0.000824s | 0.000797s | byte equality observed |
| map_copy.test | 10 | 0.000813s | 0.000813s | 0.000819s | byte equality observed |
| map_misc.test | 10 | 0.000827s | 0.000829s | 0.000788s | byte equality observed |
| map_move.test | 10 | 0.000792s | 0.000812s | 0.000801s | byte equality observed |
| map_mutate.test | 10 | 0.000793s | 0.000788s | 0.000812s | byte equality observed |
| map_tie.test | 10 | 0.000779s | 0.000837s | 0.000810s | byte equality observed |
| move.test | 10 | 0.000801s | 0.000814s | 0.000795s | byte equality observed |
| nil.test | 10 | 0.000799s | 0.000808s | 0.000803s | byte equality observed |
| none.test | 10 | 0.000800s | 0.000797s | 0.000798s | byte equality observed |
| nview.test | 10 | 0.000801s | 0.000807s | 0.000803s | byte equality observed |
| pop_back.test | 10 | 0.000824s | 0.000826s | 0.000823s | byte equality observed |
| pop_front.test | 10 | 0.000821s | 0.000824s | 0.000864s | byte equality observed |
| push_back.test | 10 | 0.000849s | 0.000808s | 0.000837s | byte equality observed |
| push_front.test | 10 | 0.000828s | 0.000834s | 0.000832s | byte equality observed |
| quick.test | 10 | 0.000366s | 0.000799s | 0.000783s | byte equality observed |
| ref_vector.test | 10 | 0.000819s | 0.000790s | 0.000850s | byte equality observed |
| remove.test | 10 | 0.000810s | 0.000819s | 0.000827s | byte equality observed |
| remove_if.test | 10 | 0.000829s | 0.000797s | 0.000838s | byte equality observed |
| repetitive_view.test | 10 | 0.000808s | 0.000809s | 0.000791s | byte equality observed |
| replace.test | 10 | 0.000829s | 0.000814s | 0.000802s | byte equality observed |
| replace_if.test | 10 | 0.000848s | 0.000846s | 0.000820s | byte equality observed |
| reverse.test | 10 | 0.000833s | 0.000844s | 0.000821s | byte equality observed |
| reverse_fold.test | 10 | 0.000800s | 0.000854s | 0.000849s | byte equality observed |
| reverse_iter_fold.test | 10 | 0.000801s | 0.000816s | 0.000850s | byte equality observed |
| reverse_view.test | 10 | 0.000813s | 0.000825s | 0.000865s | byte equality observed |
| segmented_find.test | 10 | 0.000804s | 0.000804s | 0.000825s | byte equality observed |
| segmented_find_if.test | 10 | 0.000818s | 0.000794s | 0.000791s | byte equality observed |
| segmented_fold.test | 10 | 0.000820s | 0.000825s | 0.000812s | byte equality observed |
| segmented_for_each.test | 10 | 0.000820s | 0.000788s | 0.000828s | byte equality observed |
| segmented_iterator_range.test | 10 | 0.000830s | 0.000818s | 0.000851s | byte equality observed |
| set.test | 10 | 0.000815s | 0.000817s | 0.000830s | byte equality observed |
| single_view.test | 10 | 0.000832s | 0.000840s | 0.000852s | byte equality observed |
| std_array.test | 10 | 0.000808s | 0.000794s | 0.000818s | byte equality observed |
| std_pair.test | 10 | 0.000803s | 0.000832s | 0.000786s | byte equality observed |
| std_tuple.test | 10 | 0.000786s | 0.000821s | 0.000797s | byte equality observed |
| std_tuple_iterator.test | 10 | 0.000793s | 0.000779s | 0.000792s | byte equality observed |
| swap.test | 10 | 0.000808s | 0.000805s | 0.000798s | byte equality observed |
| transform.test | 10 | 0.000808s | 0.000834s | 0.000820s | byte equality observed |
| transform_view.test | 10 | 0.000837s | 0.000827s | 0.000813s | byte equality observed |
| tuple_comparison.test | 10 | 0.000804s | 0.000809s | 0.000810s | byte equality observed |
| tuple_construction.test | 10 | 0.000813s | 0.000794s | 0.000823s | byte equality observed |
| tuple_conversion.test | 10 | 0.000827s | 0.000765s | 0.000812s | byte equality observed |
| tuple_copy.test | 10 | 0.000817s | 0.000793s | 0.000834s | byte equality observed |
| tuple_element.test | 10 | 0.000792s | 0.000768s | 0.000796s | byte equality observed |
| tuple_hash.test | 10 | 0.000799s | 0.000798s | 0.000796s | byte equality observed |
| tuple_make.test | 10 | 0.000811s | 0.000787s | 0.000811s | byte equality observed |
| tuple_misc.test | 10 | 0.000790s | 0.000807s | 0.000796s | byte equality observed |
| tuple_mutate.test | 10 | 0.000807s | 0.000812s | 0.000831s | byte equality observed |
| tuple_nest.test | 10 | 0.000809s | 0.000807s | 0.000835s | byte equality observed |
| tuple_tie.test | 10 | 0.000795s | 0.000814s | 0.000827s | byte equality observed |
| tuple_traits__maybe_variadic.test | 10 | 0.000801s | 0.000778s | 0.000803s | byte equality observed |
| tuple_traits__no_variadic.test | 10 | 0.000810s | 0.000806s | 0.000822s | byte equality observed |
| unfused.test | 10 | 0.000797s | 0.000789s | 0.000809s | byte equality observed |
| unfused_typed.test | 10 | 0.000826s | 0.000786s | 0.000804s | byte equality observed |
| vector_comparison.test | 10 | 0.000796s | 0.000789s | 0.000829s | byte equality observed |
| vector_construction.test | 10 | 0.000807s | 0.000779s | 0.000789s | byte equality observed |
| vector_conversion.test | 10 | 0.000816s | 0.000770s | 0.000810s | byte equality observed |
| vector_copy.test | 10 | 0.000816s | 0.000814s | 0.000817s | byte equality observed |
| vector_hash.test | 10 | 0.000822s | 0.000802s | 0.000798s | byte equality observed |
| vector_iterator.test | 10 | 0.000798s | 0.000803s | 0.000823s | byte equality observed |
| vector_make.test | 10 | 0.000794s | 0.000823s | 0.000767s | byte equality observed |
| vector_misc.test | 10 | 0.000804s | 0.000832s | 0.000795s | byte equality observed |
| vector_move.test | 10 | 0.000808s | 0.000831s | 0.000783s | byte equality observed |
| vector_mutate.test | 10 | 0.000807s | 0.000821s | 0.000797s | byte equality observed |
| vector_n.test | 10 | 0.000815s | 0.000821s | 0.000807s | byte equality observed |
| vector_nest.test | 10 | 0.000793s | 0.000792s | 0.000809s | byte equality observed |
| vector_tie.test | 10 | 0.000814s | 0.000817s | 0.000784s | byte equality observed |
| vector_traits__maybe_variadic.test | 10 | 0.000825s | 0.000822s | 0.000808s | byte equality observed |
| vector_traits__no_variadic.test | 10 | 0.000827s | 0.000791s | 0.000828s | byte equality observed |
| vector_value_at.test | 10 | 0.000816s | 0.000803s | 0.000815s | byte equality observed |
| zip.test | 10 | 0.000809s | 0.000797s | 0.000791s | byte equality observed |
| zip2.test | 10 | 0.000824s | 0.000801s | 0.000836s | byte equality observed |
| zip_ignore.test | 10 | 0.000817s | 0.000806s | 0.000853s | byte equality observed |
| zip_view.test | 10 | 0.000811s | 0.000785s | 0.000834s | byte equality observed |
| zip_view2.test | 10 | 0.000825s | 0.000784s | 0.000829s | byte equality observed |
| zip_view_ignore.test | 10 | 0.000785s | 0.000787s | 0.000800s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/43740486413).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
