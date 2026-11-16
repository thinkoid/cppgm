# libs/fusion/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| all.test | RUN | 0.287605 | 0.642975 | 0.813524 | 0.001060 | 0.001198 | 0.001132 |
| any.test | RUN | 0.280137 | 0.602625 | 0.770908 | 0.001109 | 0.001452 | 0.001226 |
| clear.test | RUN | 0.202878 | 0.573655 | 0.634400 | 0.001072 | 0.001322 | 0.001278 |
| copy.test | RUN | 0.170621 | 0.422487 | 0.513994 | 0.001213 | 0.001397 | 0.001285 |
| count.test | RUN | 0.189948 | 0.477517 | 0.575726 | 0.001292 | 0.001387 | 0.001174 |
| count_if.test | RUN | 0.180374 | 0.437352 | 0.526934 | 0.001159 | 0.001280 | 0.001173 |
| erase.test | RUN | 0.259785 | 0.782209 | 0.858991 | 0.001061 | 0.001614 | 0.000993 |
| erase_key.test | RUN | 0.249201 | 0.770732 | 0.816435 | 0.001177 | 0.001296 | 0.000878 |
| filter.test | RUN | 0.229832 | 0.658923 | 0.736020 | 0.001325 | 0.001364 | 0.001190 |
| filter_if.test | RUN | 0.256691 | 0.776725 | 0.854371 | 0.001152 | 0.001374 | 0.001361 |
| find.test | RUN | 0.223423 | 0.521579 | 0.644590 | 0.001196 | 0.001322 | 0.001248 |
| find_if.test | RUN | 0.210184 | 0.477124 | 0.594006 | 0.001230 | 0.001264 | 0.001296 |
| fold.test | RUN | 0.227438 | 0.597771 | 0.742059 | 0.001145 | 0.001596 | 0.001123 |
| for_each.test | RUN | 0.203850 | 0.540632 | 0.641631 | 0.001139 | 0.001593 | 0.001073 |
| insert.test | RUN | 0.308364 | 0.977174 | 1.042034 | 0.001180 | 0.001358 | 0.001321 |
| insert_range.test | RUN | 0.301537 | 0.975265 | 1.039745 | 0.001172 | 0.001444 | 0.001219 |
| iter_fold.test | RUN | 0.360835 | 0.906099 | 1.233773 | 0.001293 | 0.001389 | 0.001395 |
| move.test | RUN | 0.174048 | 0.432391 | 0.527418 | 0.001465 | 0.001246 | 0.001217 |
| none.test | RUN | 0.288064 | 0.620004 | 0.790826 | 0.001085 | 0.001390 | 0.001185 |
| pop_back.test | RUN | 0.283837 | 0.843040 | 0.915604 | 0.001363 | 0.001396 | 0.001171 |
| pop_front.test | RUN | 0.240973 | 0.689015 | 0.759164 | 0.001184 | 0.001326 | 0.001140 |
| push_back.test | RUN | 0.298671 | 0.982748 | 1.035112 | 0.001414 | 0.001528 | 0.001245 |
| push_front.test | RUN | 0.266621 | 0.812579 | 0.867640 | 0.001148 | 0.001472 | 0.001313 |
| remove.test | RUN | 0.296829 | 0.923151 | 1.039601 | 0.001248 | 0.001455 | 0.001154 |
| remove_if.test | RUN | 0.269544 | 0.763318 | 0.871688 | 0.001123 | 0.001591 | 0.001270 |
| replace.test | RUN | 0.253479 | 0.754601 | 0.815630 | 0.001360 | 0.001390 | 0.001226 |
| replace_if.test | RUN | 0.250823 | 0.753649 | 0.792993 | 0.001260 | 0.001463 | 0.001186 |
| reverse_fold.test | RUN | 0.389345 | 1.027915 | 1.371105 | 0.001136 | 0.001508 | 0.001371 |
| reverse_iter_fold.test | RUN | 0.402709 | 1.062044 | 1.441836 | 0.001192 | 0.001487 | 0.001188 |
| reverse.test | RUN | 0.245835 | 0.777955 | 0.814685 | 0.001322 | 0.001558 | 0.001213 |
| segmented_for_each.test | RUN | 0.425404 | 1.488535 | 1.677311 | 0.001240 | 0.001642 | 0.001154 |
| segmented_find.test | RUN | 0.263182 | 0.760137 | 0.919721 | 0.001335 | 0.001221 | 0.001192 |
| segmented_find_if.test | RUN | 0.267744 | 0.755272 | 0.950573 | 0.001103 | 0.001354 | 0.001299 |
| segmented_fold.test | RUN | 0.334798 | 1.031341 | 1.187247 | 0.001444 | 0.001483 | 0.001229 |
| transform.test | RUN | 0.270272 | 0.808078 | 0.863852 | 0.001172 | 0.001433 | 0.001230 |
| join.test | RUN | 0.192538 | 0.484018 | 0.612176 | 0.001189 | 0.001391 | 0.001213 |
| zip.test | RUN | 0.337494 | 0.919257 | 1.155970 | 0.001422 | 0.001472 | 0.001378 |
| zip2.test | RUN | 0.344642 | 0.897678 | 1.086916 | 0.000898 | 0.001315 | 0.001260 |
| zip_ignore.test | RUN | 0.249107 | 0.598839 | 0.726028 | 0.001079 | 0.001385 | 0.001340 |
| flatten.test | RUN | 0.233110 | 0.681563 | 0.763033 | 0.001089 | 0.001497 | 0.001170 |
| ticket-5490.test | COMPILE | 0.125722 | 0.274134 | 0.344522 | — | — | — |
| as_deque.test | RUN | 0.234964 | 0.637697 | 0.800239 | 0.001329 | 0.001538 | 0.001274 |
| as_list.test | RUN | 0.264004 | 0.799205 | 0.875417 | 0.001140 | 0.001282 | 0.001262 |
| as_map.test | RUN | 0.260352 | 0.787317 | 0.862343 | 0.001045 | 0.001644 | 0.001238 |
| as_map_assoc.test | RUN | 0.256487 | 0.712817 | 0.815963 | 0.001202 | 0.001288 | 0.001091 |
| as_set.test | RUN | 0.299148 | 0.919476 | 1.010903 | 0.001216 | 0.001340 | 0.001144 |
| as_vector.test | RUN | 0.271766 | 0.822001 | 0.882409 | 0.001284 | 0.001430 | 0.001264 |
| boost_tuple.test | RUN | 0.271685 | 0.791969 | 0.885387 | 0.001182 | 0.001280 | 0.001135 |
| boost_tuple_iterator.test | RUN | 0.180558 | 0.455977 | 0.523490 | 0.001380 | 0.001392 | 0.001248 |
| cons.test | RUN | 0.339019 | 0.908317 | 1.033624 | 0.001218 | 0.001318 | 0.001140 |
| convert_boost_tuple.test | RUN | 0.212157 | 0.690622 | 0.676896 | 0.001232 | 0.001438 | 0.001101 |
| convert_deque.test | RUN | 0.213076 | 0.684056 | 0.677268 | 0.001081 | 0.001272 | 0.001164 |
| convert_list.test | RUN | 0.209799 | 0.697328 | 0.689087 | 0.001221 | 0.001317 | 0.001070 |
| convert_std_pair.test | RUN | 0.222872 | 0.694031 | 0.697529 | 0.000973 | 0.001125 | 0.001115 |
| convert_std_tuple.test | RUN | 0.209688 | 0.667956 | 0.671265 | 0.001139 | 0.001400 | 0.001177 |
| convert_vector.test | RUN | 0.207285 | 0.672141 | 0.679383 | 0.001084 | 0.001287 | 0.001290 |
| filter_view.test | RUN | 0.256598 | 0.712380 | 0.798953 | 0.001167 | 0.001378 | 0.001222 |
| hash.test | RUN | 0.249106 | 0.644184 | 0.741766 | 0.001134 | 0.001310 | 0.001231 |
| io.test | RUN | 0.268151 | 0.926425 | 0.940120 | 0.001169 | 0.001602 | 0.001389 |
| iterator_range.test | RUN | 0.239756 | 0.697849 | 0.772615 | 0.001328 | 0.001347 | 0.001139 |
| joint_view.test | RUN | 0.328610 | 1.150540 | 1.142807 | 0.001341 | 0.001251 | 0.001355 |
| list_comparison.test | RUN | 0.181887 | 0.476601 | 0.552887 | 0.001287 | 0.001511 | 0.001170 |
| list_construction.test | RUN | 0.185730 | 0.445975 | 0.548463 | 0.001209 | 0.001483 | 0.001144 |
| list_copy.test | RUN | 0.275526 | 0.854924 | 0.927605 | 0.001063 | 0.001360 | 0.001204 |
| list_iterator.test | RUN | 0.183697 | 0.457437 | 0.511854 | 0.001162 | 0.001415 | 0.001080 |
| list_hash.test | RUN | 0.246520 | 0.936021 | 0.763339 | 0.001258 | 0.001393 | 0.001148 |
| list_make.test | RUN | 0.194147 | 0.515852 | 0.587010 | 0.001244 | 0.001424 | 0.001154 |
| list_misc.test | RUN | 0.250848 | 0.579304 | 0.726339 | 0.001177 | 0.001435 | 0.001360 |
| list_mutate.test | RUN | 0.172458 | 0.398370 | 0.475184 | 0.001107 | 0.001375 | 0.001171 |
| list_nest.test | RUN | 0.348310 | 1.174258 | 1.325712 | 0.001025 | 0.001315 | 0.001094 |
| list_tie.test | RUN | 0.185016 | 0.444519 | 0.528600 | 0.001122 | 0.001399 | 0.001232 |
| list_value_at.test | RUN | 0.176107 | 0.430784 | 0.514837 | 0.001306 | 0.001189 | 0.001148 |
| deque_comparison.test | RUN | 0.184899 | 0.474531 | 0.545158 | 0.001082 | 0.001286 | 0.001097 |
| deque_construction.test | RUN | 0.185426 | 0.457632 | 0.549557 | 0.001210 | 0.001403 | 0.001116 |
| deque_copy.test | RUN | 0.274198 | 0.779239 | 0.874064 | 0.001080 | 0.001327 | 0.001128 |
| deque_iterator.test | RUN | 0.183801 | 0.484704 | 0.519413 | 0.001153 | 0.001326 | 0.001255 |
| deque_hash.test | RUN | 0.255276 | 0.897506 | 0.772020 | 0.001271 | 0.001355 | 0.001164 |
| deque_is_constructible.test | COMPILE | 0.100410 | 0.208565 | 0.243403 | — | — | — |
| deque_make.test | RUN | 0.189232 | 0.484007 | 0.567196 | 0.001229 | 0.001275 | 0.001092 |
| deque_misc.test | RUN | 0.243002 | 0.584638 | 0.684989 | 0.001152 | 0.001347 | 0.001273 |
| deque_move.test | RUN | 0.190809 | 0.505099 | 0.536679 | 0.001134 | 0.001290 | 0.001105 |
| deque_mutate.test | RUN | 0.165763 | 0.396073 | 0.474745 | 0.001252 | 0.001312 | 0.001135 |
| deque_nest.test | RUN | 0.531645 | 1.879769 | 2.142731 | 0.001257 | 0.001296 | 0.001157 |
| deque_tie.test | RUN | 0.175344 | 0.423807 | 0.522697 | 0.001358 | 0.001465 | 0.001152 |
| deque_value_at.test | RUN | 0.171376 | 0.424679 | 0.491376 | 0.001172 | 0.001327 | 0.001207 |
| front_extended_deque.test | RUN | 0.256185 | 0.612371 | 0.741005 | 0.001128 | 0.001421 | 0.001394 |
| back_extended_deque.test | RUN | 0.250250 | 0.610417 | 0.782475 | 0.001256 | 0.001219 | 0.001253 |
| make_list.test | RUN | 0.199330 | 0.505054 | 0.582461 | 0.001357 | 0.001361 | 0.001188 |
| make_vector.test | RUN | 0.192643 | 0.492856 | 0.566924 | 0.001169 | 0.001348 | 0.001179 |
| map.test | RUN | 0.262338 | 0.772962 | 0.840588 | 0.001356 | 0.001449 | 0.001205 |
| map_comparison.test | RUN | 0.188494 | 0.490156 | 0.560067 | 0.001525 | 0.001493 | 0.001143 |
| map_construction.test | RUN | 0.190391 | 0.472629 | 0.561710 | 0.001176 | 0.001406 | 0.001156 |
| map_copy.test | RUN | 0.231145 | 0.597141 | 0.689076 | 0.001341 | 0.001311 | 0.001143 |
| map_misc.test | RUN | 0.246449 | 0.603840 | 0.696189 | 0.001304 | 0.001447 | 0.001172 |
| map_move.test | RUN | 0.192592 | 0.502619 | 0.564556 | 0.001294 | 0.001661 | 0.001328 |
| map_mutate.test | RUN | 0.171944 | 0.413073 | 0.475610 | 0.001167 | 0.001443 | 0.001095 |
| map_tie.test | RUN | 0.179869 | 0.404976 | 0.489835 | 0.001307 | 0.001385 | 0.001156 |
| nil.test | RUN | 0.118682 | 0.289937 | 0.333490 | 0.001264 | 0.001364 | 0.001102 |
| nview.test | RUN | 0.241990 | 0.600001 | 0.715740 | 0.001221 | 0.001362 | 0.001291 |
| reverse_view.test | RUN | 0.318000 | 0.986970 | 1.045575 | 0.001352 | 0.001317 | 0.001224 |
| segmented_iterator_range.test | RUN | 0.371841 | 1.190031 | 1.319919 | 0.001365 | 0.001352 | 0.001290 |
| set.test | RUN | 0.235502 | 0.679129 | 0.746424 | 0.001321 | 0.001685 | 0.001193 |
| single_view.test | RUN | 0.221932 | 0.622644 | 0.687589 | 0.001241 | 0.001374 | 0.001207 |
| std_pair.test | RUN | 0.276543 | 0.783931 | 0.850430 | 0.001329 | 0.001285 | 0.001099 |
| boost_array.test | RUN | 0.235440 | 0.530500 | 0.650293 | 0.001300 | 0.001359 | 0.001300 |
| array.test | RUN | 0.227336 | 0.528520 | 0.636977 | 0.001180 | 0.001257 | 0.001243 |
| std_array.test | RUN | 0.227594 | 0.531216 | 0.637660 | 0.001159 | 0.001286 | 0.001117 |
| tuple_comparison.test | RUN | 0.202090 | 0.513722 | 0.590422 | 0.001390 | 0.001567 | 0.001226 |
| tuple_construction.test | RUN | 0.217484 | 0.504212 | 0.585263 | 0.001397 | 0.001333 | 0.001044 |
| tuple_conversion.test | RUN | 0.455018 | 1.591733 | 1.949379 | 0.001063 | 0.001134 | 0.001284 |
| tuple_copy.test | RUN | 0.299098 | 0.914276 | 1.031755 | 0.001480 | 0.001318 | 0.001123 |
| tuple_element.test | RUN | 0.187067 | 0.440850 | 0.544510 | 0.001223 | 0.001388 | 0.001092 |
| tuple_make.test | RUN | 0.206641 | 0.526389 | 0.590354 | 0.001262 | 0.001426 | 0.000903 |
| tuple_misc.test | RUN | 0.266461 | 0.648202 | 0.792885 | 0.001281 | 0.001396 | 0.001160 |
| tuple_mutate.test | RUN | 0.184843 | 0.424576 | 0.514636 | 0.001243 | 0.001513 | 0.001336 |
| tuple_nest.test | RUN | 0.786118 | 3.330149 | 3.640524 | 0.001219 | 0.001363 | 0.001136 |
| tuple_hash.test | RUN | 0.264838 | 0.935548 | 0.794909 | 0.001288 | 0.001388 | 0.001140 |
| tuple_tie.test | RUN | 0.197713 | 0.478500 | 0.554092 | 0.001083 | 0.001169 | 0.001232 |
| tuple_traits__maybe_variadic.test | RUN | 0.208529 | 0.574418 | 0.587147 | 0.001172 | 0.001446 | 0.001148 |
| tuple_traits__no_variadic.test | RUN | 0.235225 | 0.596129 | 0.639165 | 0.001195 | 0.001369 | 0.001199 |
| transform_view.test | RUN | 0.313861 | 0.977166 | 1.080244 | 0.001294 | 0.001557 | 0.001225 |
| identity_view.test | RUN | 0.296880 | 0.903773 | 0.981775 | 0.001120 | 0.001406 | 0.001311 |
| vector_comparison.test | RUN | 0.190428 | 0.486547 | 0.558248 | 0.001107 | 0.001459 | 0.001264 |
| vector_construction.test | RUN | 0.191917 | 0.462878 | 0.538041 | 0.001141 | 0.001491 | 0.001176 |
| vector_conversion.test | RUN | 0.551575 | 2.121168 | 2.540202 | 0.001317 | 0.001388 | 0.001178 |
| vector_copy.test | RUN | 0.286292 | 0.905605 | 1.017932 | 0.001210 | 0.001230 | 0.001125 |
| vector_iterator.test | RUN | 0.182432 | 0.461901 | 0.522268 | 0.001191 | 0.001437 | 0.001114 |
| vector_make.test | RUN | 0.195672 | 0.495939 | 0.561009 | 0.001203 | 0.001494 | 0.001203 |
| vector_misc.test | RUN | 0.247514 | 0.608632 | 0.703011 | 0.001112 | 0.001122 | 0.001096 |
| vector_move.test | RUN | 0.188677 | 0.519464 | 0.563405 | 0.001237 | 0.001384 | 0.001390 |
| vector_mutate.test | RUN | 0.170135 | 0.404880 | 0.475222 | 0.001149 | 0.001422 | 0.001136 |
| vector_n.test | RUN | 0.210110 | 0.509675 | 0.646970 | 0.001432 | 0.001544 | 0.001330 |
| vector_nest.test | RUN | 0.796279 | 3.464997 | 3.790489 | 0.001290 | 0.001456 | 0.001148 |
| vector_hash.test | RUN | 0.248164 | 0.937767 | 0.741638 | 0.001300 | 0.001549 | 0.001236 |
| vector_tie.test | RUN | 0.182854 | 0.438281 | 0.546647 | 0.001319 | 0.001334 | 0.001224 |
| vector_traits__maybe_variadic.test | RUN | 0.196967 | 0.527589 | 0.543685 | 0.001333 | 0.001467 | 0.001184 |
| vector_traits__no_variadic.test | RUN | 0.209407 | 0.555708 | 0.575651 | 0.001146 | 0.001464 | 0.001138 |
| vector_value_at.test | RUN | 0.180251 | 0.401022 | 0.510079 | 0.001352 | 0.001511 | 0.001151 |
| zip_view.test | RUN | 0.377041 | 1.018827 | 1.267643 | 0.001146 | 0.001416 | 0.001128 |
| zip_view2.test | RUN | 0.297361 | 0.796198 | 1.007383 | 0.001172 | 0.001426 | 0.001213 |
| zip_view_ignore.test | RUN | 0.271716 | 0.721361 | 0.867131 | 0.001201 | 0.001324 | 0.001060 |
| repetitive_view.test | RUN | 0.466553 | 1.320321 | 1.667471 | 0.001239 | 0.001557 | 0.001221 |
| deduce_sequence.test | RUN | 0.227939 | 0.548333 | 0.658066 | 0.001420 | 0.001443 | 0.001178 |
| adapt_adt_named.test | RUN | 0.268271 | 0.792198 | 0.901427 | 0.001131 | 0.001344 | 0.001249 |
| adapt_adt_named_empty.test | RUN | 0.232811 | 0.627575 | 0.695798 | 0.001275 | 0.001416 | 0.001268 |
| adapt_adt.test | RUN | 0.307957 | 1.047876 | 1.016610 | 0.001348 | 0.001393 | 0.001197 |
| adapt_adt_empty.test | RUN | 0.230955 | 0.641201 | 0.698619 | 0.001246 | 0.001354 | 0.001242 |
| adapt_assoc_adt_named.test | RUN | 0.303485 | 0.819846 | 0.915323 | 0.001164 | 0.001506 | 0.001190 |
| adapt_assoc_adt_named_empty.test | RUN | 0.231993 | 0.646219 | 0.693412 | 0.001247 | 0.001298 | 0.001207 |
| adapt_assoc_adt.test | RUN | 0.308437 | 0.854665 | 0.957808 | 0.001365 | 0.001628 | 0.001090 |
| adapt_assoc_adt_empty.test | RUN | 0.230575 | 0.645169 | 0.695788 | 0.001294 | 0.001266 | 0.001376 |
| adapt_assoc_struct_named.test | RUN | 0.292898 | 0.819568 | 0.884410 | 0.001153 | 0.001349 | 0.001183 |
| adapt_assoc_struct_named_empty.test | RUN | 0.230746 | 0.634970 | 0.690522 | 0.001282 | 0.001199 | 0.001108 |
| adapt_assoc_struct.test | RUN | 0.266754 | 0.763585 | 0.834526 | 0.000953 | 0.001347 | 0.001209 |
| adapt_assoc_struct_empty.test | RUN | 0.230916 | 0.630503 | 0.696020 | 0.001249 | 0.001707 | 0.001129 |
| adapt_assoc_tpl_adt.test | RUN | 0.315798 | 0.870117 | 0.980523 | 0.001129 | 0.001438 | 0.001275 |
| adapt_assoc_tpl_adt_empty.test | RUN | 0.230404 | 0.644051 | 0.695330 | 0.001258 | 0.001464 | 0.001208 |
| adapt_assoc_tpl_struct.test | RUN | 0.258697 | 0.748045 | 0.816584 | 0.001196 | 0.001328 | 0.001110 |
| adapt_assoc_tpl_struct_empty.test | RUN | 0.229531 | 0.637323 | 0.697527 | 0.001024 | 0.001572 | 0.001180 |
| adapt_struct_named.test | RUN | 0.259186 | 0.770464 | 0.816901 | 0.001189 | 0.001304 | 0.001329 |
| adapt_struct_named_empty.test | RUN | 0.239188 | 0.641249 | 0.686812 | 0.001199 | 0.001589 | 0.001048 |
| adapt_struct.test | RUN | 0.285484 | 0.890214 | 0.949284 | 0.000943 | 0.001375 | 0.001239 |
| adapt_struct_empty.test | RUN | 0.230138 | 0.639826 | 0.696799 | 0.001258 | 0.001458 | 0.001216 |
| adapt_tpl_adt.test | RUN | 0.296849 | 1.020905 | 0.997677 | 0.001218 | 0.001485 | 0.001286 |
| adapt_tpl_adt_empty.test | RUN | 0.236356 | 0.639479 | 0.699042 | 0.001213 | 0.001504 | 0.001333 |
| adapt_tpl_struct.test | RUN | 0.235724 | 0.704590 | 0.764600 | 0.001361 | 0.001282 | 0.001306 |
| adapt_tpl_struct_empty.test | RUN | 0.219743 | 0.640260 | 0.717567 | 0.001203 | 0.001422 | 0.001103 |
| adt_attribute_proxy.test | RUN | 0.258998 | 0.610709 | 0.734919 | 0.001157 | 0.001404 | 0.001180 |
| define_struct.test | RUN | 0.322049 | 0.868823 | 0.988085 | 0.001141 | 0.001465 | 0.001214 |
| define_struct_empty.test | RUN | 0.279309 | 0.713190 | 0.803403 | 0.001286 | 0.001360 | 0.001157 |
| define_struct_move.test | RUN | 0.177440 | 0.401687 | 0.468041 | 0.001238 | 0.001418 | 0.001147 |
| define_struct_inline.test | RUN | 0.330098 | 1.039259 | 1.112060 | 0.001204 | 0.001378 | 0.001243 |
| define_struct_inline_empty.test | RUN | 0.276582 | 0.709528 | 0.817139 | 0.001164 | 0.001443 | 0.001098 |
| define_struct_inline_move.test | RUN | 0.179443 | 0.401501 | 0.478913 | 0.001112 | 0.001240 | 0.001178 |
| define_assoc_struct.test | RUN | 0.305785 | 0.828391 | 0.933842 | 0.001228 | 0.001438 | 0.001147 |
| define_assoc_struct_empty.test | RUN | 0.271081 | 0.712863 | 0.808704 | 0.000900 | 0.001458 | 0.001300 |
| define_assoc_struct_move.test | RUN | 0.179187 | 0.393604 | 0.487737 | 0.001166 | 0.001305 | 0.001316 |
| define_tpl_struct.test | RUN | 0.301153 | 0.829838 | 0.945071 | 0.001226 | 0.001211 | 0.001141 |
| define_tpl_struct_empty.test | RUN | 0.272704 | 0.726349 | 0.814218 | 0.001174 | 0.001090 | 0.001172 |
| define_tpl_struct_move.test | RUN | 0.174384 | 0.398553 | 0.480216 | 0.001214 | 0.001600 | 0.001150 |
| define_tpl_struct_inline.test | RUN | 0.319834 | 0.992023 | 1.032599 | 0.001429 | 0.001175 | 0.001176 |
| define_tpl_struct_inline_empty.test | RUN | 0.271729 | 0.708398 | 0.826081 | 0.001219 | 0.001400 | 0.001179 |
| define_tpl_struct_inline_move.test | RUN | 0.173163 | 0.414532 | 0.480928 | 0.001079 | 0.001548 | 0.001138 |
| define_assoc_tpl_struct.test | RUN | 0.304621 | 0.845745 | 0.948168 | 0.001230 | 0.001478 | 0.001170 |
| define_assoc_tpl_struct_empty.test | RUN | 0.277420 | 0.716183 | 0.808505 | 0.001285 | 0.001552 | 0.001269 |
| define_assoc_tpl_struct_move.test | RUN | 0.181537 | 0.404754 | 0.488319 | 0.001165 | 0.001508 | 0.001136 |
| std_tuple.test | RUN | 0.180332 | 0.452049 | 0.538736 | 0.001216 | 0.001359 | 0.001245 |
| std_tuple_iterator.test | RUN | 0.188369 | 0.478919 | 0.536150 | 0.001200 | 0.001276 | 0.001292 |
| ref_vector.test | RUN | 0.204782 | 0.487561 | 0.575485 | 0.001219 | 0.001582 | 0.001154 |
| flatten_view.test | RUN | 0.218443 | 0.611231 | 0.692716 | 0.001305 | 0.001443 | 0.001142 |
| github-159.test | COMPILE | 0.098866 | 0.217111 | 0.252227 | — | — | — |
| github-176.test | RUN | 0.208399 | 0.536011 | 0.583315 | 0.001220 | 0.001441 | 0.001246 |
| size.test | COMPILE | 0.173058 | 0.374968 | 0.462520 | — | — | — |
| fused.test | RUN | 0.241859 | 0.570597 | 0.680762 | 0.001356 | 0.001451 | 0.001136 |
| fused_function_object.test | RUN | 0.187938 | 0.433236 | 0.522152 | 0.001225 | 0.001187 | 0.001360 |
| fused_procedure.test | RUN | 0.235003 | 0.536368 | 0.650873 | 0.001101 | 0.001299 | 0.001102 |
| unfused.test | RUN | 0.191356 | 0.448198 | 0.525580 | 0.001162 | 0.001338 | 0.001219 |
| unfused_typed.test | RUN | 0.195943 | 0.485296 | 0.552123 | 0.001262 | 0.001232 | 0.001332 |
| make_fused.test | RUN | 0.239530 | 0.573040 | 0.670684 | 0.001384 | 0.001136 | 0.001107 |
| make_fused_function_object.test | RUN | 0.183087 | 0.427210 | 0.516089 | 0.001159 | 0.001152 | 0.001266 |
| make_fused_procedure.test | RUN | 0.244421 | 0.539052 | 0.650209 | 0.001411 | 0.001401 | 0.001099 |
| make_unfused.test | RUN | 0.192615 | 0.444723 | 0.531265 | 0.001207 | 0.001429 | 0.001128 |
| invoke.test | RUN | 0.487085 | 1.623276 | 1.800630 | 0.001347 | 0.001207 | 0.001247 |
| invoke_function_object.test | RUN | 0.228577 | 0.554482 | 0.671457 | 0.001498 | 0.001640 | 0.001220 |
| invoke_procedure.test | RUN | 0.380211 | 1.219359 | 1.340645 | 0.001211 | 0.001235 | 0.001133 |
| swap.test | RUN | 0.283064 | 0.732413 | 0.856112 | 0.001173 | 0.001268 | 0.001339 |
| is_sequence.test | COMPILE | 0.047451 | 0.098470 | 0.107325 | — | — | — |
| is_view.test | COMPILE | 0.048376 | 0.099576 | 0.107279 | — | — | — |
| pair_deque.test | COMPILE | 0.105494 | 0.231535 | 0.263186 | — | — | — |
| pair_list.test | COMPILE | 0.101704 | 0.220133 | 0.247934 | — | — | — |
| pair_map.test | COMPILE | 0.105873 | 0.229088 | 0.269153 | — | — | — |
| pair_set.test | COMPILE | 0.104915 | 0.231598 | 0.263786 | — | — | — |
| pair_vector.test | COMPILE | 0.103993 | 0.221874 | 0.256793 | — | — | — |
| pair_nest.test | COMPILE | 0.041231 | 0.092426 | 0.099647 | — | — | — |
| index_sequence.test | COMPILE | 0.035626 | 0.061761 | 0.074846 | — | — | — |
| and.test | COMPILE | 0.026468 | 0.047520 | 0.054852 | — | — | — |
| tag_of.test | COMPILE | 0.046677 | 0.092977 | 0.102197 | — | — | — |
| unused.test | COMPILE | 0.023506 | 0.062877 | 0.061301 | — | — | — |
| tag_of_fallback.test | COMPILE | 0.041209 | 0.096308 | 0.093212 | — | — | — |
| make_pair_r-value.test | COMPILE | 0.039436 | 0.064361 | 0.077889 | — | — | — |
| quick.test | RUN | 0.136153 | 0.320837 | 0.332105 | 0.000413 | 0.001007 | 0.000871 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 1.000× | 0.993×, 1.007× | 0.995× |
| clang | 1.001× | 1.002×, 1.001× | 0.999× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1362 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/43822097733).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| adapt_adt.test | 10 | 0.000841s | 0.000836s | 0.000844s | byte equality observed |
| adapt_adt_empty.test | 10 | 0.000825s | 0.000800s | 0.000832s | byte equality observed |
| adapt_adt_named.test | 10 | 0.000842s | 0.000822s | 0.000830s | byte equality observed |
| adapt_adt_named_empty.test | 10 | 0.000821s | 0.000808s | 0.000830s | byte equality observed |
| adapt_assoc_adt.test | 10 | 0.000829s | 0.000848s | 0.000817s | byte equality observed |
| adapt_assoc_adt_empty.test | 10 | 0.000838s | 0.000838s | 0.000839s | byte equality observed |
| adapt_assoc_adt_named.test | 10 | 0.000842s | 0.000843s | 0.000823s | byte equality observed |
| adapt_assoc_adt_named_empty.test | 10 | 0.000836s | 0.000835s | 0.000809s | byte equality observed |
| adapt_assoc_struct.test | 10 | 0.000825s | 0.000827s | 0.000832s | byte equality observed |
| adapt_assoc_struct_empty.test | 10 | 0.000823s | 0.000803s | 0.000823s | byte equality observed |
| adapt_assoc_struct_named.test | 10 | 0.000824s | 0.000829s | 0.000848s | byte equality observed |
| adapt_assoc_struct_named_empty.test | 10 | 0.000821s | 0.000859s | 0.000829s | byte equality observed |
| adapt_assoc_tpl_adt.test | 10 | 0.000835s | 0.000860s | 0.000831s | byte equality observed |
| adapt_assoc_tpl_adt_empty.test | 10 | 0.000823s | 0.000845s | 0.000850s | byte equality observed |
| adapt_assoc_tpl_struct.test | 10 | 0.000828s | 0.000847s | 0.000852s | byte equality observed |
| adapt_assoc_tpl_struct_empty.test | 10 | 0.000829s | 0.000828s | 0.000789s | byte equality observed |
| adapt_struct.test | 10 | 0.000847s | 0.000852s | 0.000821s | byte equality observed |
| adapt_struct_empty.test | 10 | 0.000831s | 0.000849s | 0.000806s | byte equality observed |
| adapt_struct_named.test | 10 | 0.000827s | 0.000819s | 0.000823s | byte equality observed |
| adapt_struct_named_empty.test | 10 | 0.000823s | 0.000824s | 0.000790s | byte equality observed |
| adapt_tpl_adt.test | 10 | 0.000852s | 0.000838s | 0.000843s | byte equality observed |
| adapt_tpl_adt_empty.test | 10 | 0.000822s | 0.000805s | 0.000857s | byte equality observed |
| adapt_tpl_struct.test | 10 | 0.000832s | 0.000838s | 0.000806s | byte equality observed |
| adapt_tpl_struct_empty.test | 10 | 0.000857s | 0.000852s | 0.000815s | byte equality observed |
| adt_attribute_proxy.test | 10 | 0.000806s | 0.000842s | 0.000790s | byte equality observed |
| all.test | 10 | 0.000809s | 0.000844s | 0.000811s | byte equality observed |
| any.test | 10 | 0.000828s | 0.000835s | 0.000841s | byte equality observed |
| array.test | 10 | 0.000821s | 0.000808s | 0.000824s | byte equality observed |
| as_deque.test | 10 | 0.000818s | 0.000804s | 0.000826s | byte equality observed |
| as_list.test | 10 | 0.000819s | 0.000852s | 0.000849s | byte equality observed |
| as_map.test | 10 | 0.000812s | 0.000828s | 0.000836s | byte equality observed |
| as_map_assoc.test | 10 | 0.000804s | 0.000829s | 0.000849s | byte equality observed |
| as_set.test | 10 | 0.000822s | 0.000820s | 0.000810s | byte equality observed |
| as_vector.test | 10 | 0.000844s | 0.000869s | 0.000842s | byte equality observed |
| back_extended_deque.test | 10 | 0.000832s | 0.000807s | 0.000820s | byte equality observed |
| boost_array.test | 10 | 0.000805s | 0.000791s | 0.000810s | byte equality observed |
| boost_tuple.test | 10 | 0.000840s | 0.000823s | 0.000838s | byte equality observed |
| boost_tuple_iterator.test | 10 | 0.000827s | 0.000802s | 0.000840s | byte equality observed |
| clear.test | 10 | 0.000819s | 0.000837s | 0.000818s | byte equality observed |
| cons.test | 10 | 0.000846s | 0.000825s | 0.000838s | byte equality observed |
| convert_boost_tuple.test | 10 | 0.000818s | 0.000828s | 0.000823s | byte equality observed |
| convert_deque.test | 10 | 0.000814s | 0.000798s | 0.000827s | byte equality observed |
| convert_list.test | 10 | 0.000803s | 0.000807s | 0.000829s | byte equality observed |
| convert_std_pair.test | 10 | 0.000813s | 0.000805s | 0.000846s | byte equality observed |
| convert_std_tuple.test | 10 | 0.000820s | 0.000827s | 0.000819s | byte equality observed |
| convert_vector.test | 10 | 0.000827s | 0.000826s | 0.000811s | byte equality observed |
| copy.test | 10 | 0.000815s | 0.000818s | 0.000827s | byte equality observed |
| count.test | 10 | 0.000835s | 0.000827s | 0.000805s | byte equality observed |
| count_if.test | 10 | 0.000812s | 0.000809s | 0.000806s | byte equality observed |
| deduce_sequence.test | 10 | 0.000815s | 0.000791s | 0.000801s | byte equality observed |
| define_assoc_struct.test | 10 | 0.000825s | 0.000866s | 0.000832s | byte equality observed |
| define_assoc_struct_empty.test | 10 | 0.000839s | 0.000849s | 0.000802s | byte equality observed |
| define_assoc_struct_move.test | 10 | 0.000839s | 0.000835s | 0.000814s | byte equality observed |
| define_assoc_tpl_struct.test | 10 | 0.000835s | 0.000860s | 0.000840s | byte equality observed |
| define_assoc_tpl_struct_empty.test | 10 | 0.000842s | 0.000829s | 0.000823s | byte equality observed |
| define_assoc_tpl_struct_move.test | 10 | 0.000808s | 0.000791s | 0.000781s | byte equality observed |
| define_struct.test | 10 | 0.000844s | 0.000847s | 0.000835s | byte equality observed |
| define_struct_empty.test | 10 | 0.000841s | 0.000829s | 0.000807s | byte equality observed |
| define_struct_inline.test | 10 | 0.000827s | 0.000819s | 0.000837s | byte equality observed |
| define_struct_inline_empty.test | 10 | 0.000811s | 0.000829s | 0.000826s | byte equality observed |
| define_struct_inline_move.test | 10 | 0.000806s | 0.000840s | 0.000821s | byte equality observed |
| define_struct_move.test | 10 | 0.000807s | 0.000831s | 0.000822s | byte equality observed |
| define_tpl_struct.test | 10 | 0.000839s | 0.000823s | 0.000823s | byte equality observed |
| define_tpl_struct_empty.test | 10 | 0.000873s | 0.000840s | 0.000830s | byte equality observed |
| define_tpl_struct_inline.test | 10 | 0.000839s | 0.000864s | 0.000814s | byte equality observed |
| define_tpl_struct_inline_empty.test | 10 | 0.000854s | 0.000880s | 0.000812s | byte equality observed |
| define_tpl_struct_inline_move.test | 10 | 0.000825s | 0.000850s | 0.000854s | byte equality observed |
| define_tpl_struct_move.test | 10 | 0.000821s | 0.000811s | 0.000834s | byte equality observed |
| deque_comparison.test | 10 | 0.000829s | 0.000832s | 0.000818s | byte equality observed |
| deque_construction.test | 10 | 0.000834s | 0.000801s | 0.000788s | byte equality observed |
| deque_copy.test | 10 | 0.000823s | 0.000818s | 0.000803s | byte equality observed |
| deque_hash.test | 10 | 0.000844s | 0.000799s | 0.000795s | byte equality observed |
| deque_iterator.test | 10 | 0.000813s | 0.000787s | 0.000807s | byte equality observed |
| deque_make.test | 10 | 0.000836s | 0.000827s | 0.000817s | byte equality observed |
| deque_misc.test | 10 | 0.000831s | 0.000814s | 0.000811s | byte equality observed |
| deque_move.test | 10 | 0.000807s | 0.000833s | 0.000809s | byte equality observed |
| deque_mutate.test | 10 | 0.000796s | 0.000815s | 0.000784s | byte equality observed |
| deque_nest.test | 10 | 0.000803s | 0.000815s | 0.000802s | byte equality observed |
| deque_tie.test | 10 | 0.000809s | 0.000846s | 0.000815s | byte equality observed |
| deque_value_at.test | 10 | 0.000818s | 0.000811s | 0.000805s | byte equality observed |
| erase.test | 10 | 0.000865s | 0.000829s | 0.000820s | byte equality observed |
| erase_key.test | 10 | 0.000849s | 0.000856s | 0.000818s | byte equality observed |
| filter.test | 10 | 0.000830s | 0.000824s | 0.000830s | byte equality observed |
| filter_if.test | 10 | 0.000856s | 0.000811s | 0.000825s | byte equality observed |
| filter_view.test | 10 | 0.000868s | 0.000837s | 0.000833s | byte equality observed |
| find.test | 10 | 0.000864s | 0.000852s | 0.000833s | byte equality observed |
| find_if.test | 10 | 0.000841s | 0.000831s | 0.000828s | byte equality observed |
| flatten.test | 10 | 0.000846s | 0.000851s | 0.000804s | byte equality observed |
| flatten_view.test | 10 | 0.000813s | 0.000802s | 0.000802s | byte equality observed |
| fold.test | 10 | 0.000818s | 0.000837s | 0.000792s | byte equality observed |
| for_each.test | 10 | 0.000830s | 0.000821s | 0.000850s | byte equality observed |
| front_extended_deque.test | 10 | 0.000810s | 0.000841s | 0.000810s | byte equality observed |
| fused.test | 10 | 0.000818s | 0.000810s | 0.000823s | byte equality observed |
| fused_function_object.test | 10 | 0.000834s | 0.000833s | 0.000837s | byte equality observed |
| fused_procedure.test | 10 | 0.000817s | 0.000782s | 0.000786s | byte equality observed |
| github-176.test | 10 | 0.000801s | 0.000817s | 0.000809s | byte equality observed |
| hash.test | 10 | 0.000799s | 0.000802s | 0.000795s | byte equality observed |
| identity_view.test | 10 | 0.000824s | 0.000832s | 0.000826s | byte equality observed |
| insert.test | 10 | 0.000842s | 0.000861s | 0.000826s | byte equality observed |
| insert_range.test | 10 | 0.000838s | 0.000878s | 0.000839s | byte equality observed |
| invoke.test | 10 | 0.000834s | 0.000815s | 0.000828s | byte equality observed |
| invoke_function_object.test | 10 | 0.000821s | 0.000804s | 0.000805s | byte equality observed |
| invoke_procedure.test | 10 | 0.000842s | 0.000824s | 0.000799s | byte equality observed |
| io.test | 10 | 0.000901s | 0.000921s | 0.000910s | byte equality observed |
| iter_fold.test | 10 | 0.000820s | 0.000801s | 0.000847s | byte equality observed |
| iterator_range.test | 10 | 0.000821s | 0.000857s | 0.000838s | byte equality observed |
| join.test | 10 | 0.000815s | 0.000796s | 0.000830s | byte equality observed |
| joint_view.test | 10 | 0.000880s | 0.000831s | 0.000843s | byte equality observed |
| list_comparison.test | 10 | 0.000806s | 0.000819s | 0.000807s | byte equality observed |
| list_construction.test | 10 | 0.000803s | 0.000806s | 0.000798s | byte equality observed |
| list_copy.test | 10 | 0.000806s | 0.000842s | 0.000809s | byte equality observed |
| list_hash.test | 10 | 0.000826s | 0.000843s | 0.000805s | byte equality observed |
| list_iterator.test | 10 | 0.000810s | 0.000799s | 0.000823s | byte equality observed |
| list_make.test | 10 | 0.000838s | 0.000837s | 0.000820s | byte equality observed |
| list_misc.test | 10 | 0.000821s | 0.000842s | 0.000814s | byte equality observed |
| list_mutate.test | 10 | 0.000810s | 0.000811s | 0.000811s | byte equality observed |
| list_nest.test | 10 | 0.000829s | 0.000805s | 0.000841s | byte equality observed |
| list_tie.test | 10 | 0.000819s | 0.000814s | 0.000844s | byte equality observed |
| list_value_at.test | 10 | 0.000827s | 0.000846s | 0.000845s | byte equality observed |
| make_fused.test | 10 | 0.000830s | 0.000839s | 0.000847s | byte equality observed |
| make_fused_function_object.test | 10 | 0.000841s | 0.000857s | 0.000850s | byte equality observed |
| make_fused_procedure.test | 10 | 0.000837s | 0.000812s | 0.000848s | byte equality observed |
| make_list.test | 10 | 0.000834s | 0.000838s | 0.000797s | byte equality observed |
| make_unfused.test | 10 | 0.000815s | 0.000784s | 0.000815s | byte equality observed |
| make_vector.test | 10 | 0.000827s | 0.000820s | 0.000822s | byte equality observed |
| map.test | 10 | 0.000838s | 0.000850s | 0.000826s | byte equality observed |
| map_comparison.test | 10 | 0.000821s | 0.000818s | 0.000807s | byte equality observed |
| map_construction.test | 10 | 0.000822s | 0.000810s | 0.000814s | byte equality observed |
| map_copy.test | 10 | 0.000796s | 0.000820s | 0.000839s | byte equality observed |
| map_misc.test | 10 | 0.000808s | 0.000825s | 0.000821s | byte equality observed |
| map_move.test | 10 | 0.000831s | 0.000829s | 0.000833s | byte equality observed |
| map_mutate.test | 10 | 0.000808s | 0.000797s | 0.000819s | byte equality observed |
| map_tie.test | 10 | 0.000808s | 0.000802s | 0.000786s | byte equality observed |
| move.test | 10 | 0.000793s | 0.000791s | 0.000812s | byte equality observed |
| nil.test | 10 | 0.000832s | 0.000808s | 0.000818s | byte equality observed |
| none.test | 10 | 0.000815s | 0.000820s | 0.000810s | byte equality observed |
| nview.test | 10 | 0.000816s | 0.000831s | 0.000830s | byte equality observed |
| pop_back.test | 10 | 0.000865s | 0.000864s | 0.000855s | byte equality observed |
| pop_front.test | 10 | 0.000831s | 0.000874s | 0.000848s | byte equality observed |
| push_back.test | 10 | 0.000856s | 0.000838s | 0.000825s | byte equality observed |
| push_front.test | 10 | 0.000859s | 0.000846s | 0.000810s | byte equality observed |
| quick.test | 10 | 0.000363s | 0.000789s | 0.000773s | byte equality observed |
| ref_vector.test | 10 | 0.000811s | 0.000817s | 0.000803s | byte equality observed |
| remove.test | 10 | 0.000840s | 0.000853s | 0.000812s | byte equality observed |
| remove_if.test | 10 | 0.000838s | 0.000828s | 0.000836s | byte equality observed |
| repetitive_view.test | 10 | 0.000806s | 0.000783s | 0.000835s | byte equality observed |
| replace.test | 10 | 0.000807s | 0.000830s | 0.000806s | byte equality observed |
| replace_if.test | 10 | 0.000839s | 0.000855s | 0.000855s | byte equality observed |
| reverse.test | 10 | 0.000854s | 0.000871s | 0.000867s | byte equality observed |
| reverse_fold.test | 10 | 0.000831s | 0.000824s | 0.000824s | byte equality observed |
| reverse_iter_fold.test | 10 | 0.000824s | 0.000823s | 0.000813s | byte equality observed |
| reverse_view.test | 10 | 0.000837s | 0.000841s | 0.000817s | byte equality observed |
| segmented_find.test | 10 | 0.000809s | 0.000827s | 0.000809s | byte equality observed |
| segmented_find_if.test | 10 | 0.000804s | 0.000784s | 0.000781s | byte equality observed |
| segmented_fold.test | 10 | 0.000853s | 0.000837s | 0.000829s | byte equality observed |
| segmented_for_each.test | 10 | 0.000812s | 0.000811s | 0.000848s | byte equality observed |
| segmented_iterator_range.test | 10 | 0.000841s | 0.000834s | 0.000885s | byte equality observed |
| set.test | 10 | 0.000838s | 0.000807s | 0.000852s | byte equality observed |
| single_view.test | 10 | 0.000862s | 0.000847s | 0.000834s | byte equality observed |
| std_array.test | 10 | 0.000829s | 0.000832s | 0.000804s | byte equality observed |
| std_pair.test | 10 | 0.000851s | 0.000827s | 0.000807s | byte equality observed |
| std_tuple.test | 10 | 0.000830s | 0.000866s | 0.000809s | byte equality observed |
| std_tuple_iterator.test | 10 | 0.000808s | 0.000810s | 0.000817s | byte equality observed |
| swap.test | 10 | 0.000816s | 0.000795s | 0.000811s | byte equality observed |
| transform.test | 10 | 0.000837s | 0.000815s | 0.000825s | byte equality observed |
| transform_view.test | 10 | 0.000839s | 0.000843s | 0.000865s | byte equality observed |
| tuple_comparison.test | 10 | 0.000813s | 0.000807s | 0.000829s | byte equality observed |
| tuple_construction.test | 10 | 0.000807s | 0.000840s | 0.000813s | byte equality observed |
| tuple_conversion.test | 10 | 0.000807s | 0.000835s | 0.000830s | byte equality observed |
| tuple_copy.test | 10 | 0.000848s | 0.000832s | 0.000857s | byte equality observed |
| tuple_element.test | 10 | 0.000844s | 0.000813s | 0.000840s | byte equality observed |
| tuple_hash.test | 10 | 0.000855s | 0.000799s | 0.000812s | byte equality observed |
| tuple_make.test | 10 | 0.000803s | 0.000844s | 0.000831s | byte equality observed |
| tuple_misc.test | 10 | 0.000811s | 0.000804s | 0.000849s | byte equality observed |
| tuple_mutate.test | 10 | 0.000802s | 0.000838s | 0.000818s | byte equality observed |
| tuple_nest.test | 10 | 0.000816s | 0.000824s | 0.000821s | byte equality observed |
| tuple_tie.test | 10 | 0.000821s | 0.000797s | 0.000821s | byte equality observed |
| tuple_traits__maybe_variadic.test | 10 | 0.000834s | 0.000826s | 0.000792s | byte equality observed |
| tuple_traits__no_variadic.test | 10 | 0.000799s | 0.000809s | 0.000795s | byte equality observed |
| unfused.test | 10 | 0.000817s | 0.000800s | 0.000826s | byte equality observed |
| unfused_typed.test | 10 | 0.000841s | 0.000833s | 0.000844s | byte equality observed |
| vector_comparison.test | 10 | 0.000832s | 0.000823s | 0.000810s | byte equality observed |
| vector_construction.test | 10 | 0.000810s | 0.000836s | 0.000806s | byte equality observed |
| vector_conversion.test | 10 | 0.000786s | 0.000823s | 0.000816s | byte equality observed |
| vector_copy.test | 10 | 0.000812s | 0.000819s | 0.000828s | byte equality observed |
| vector_hash.test | 10 | 0.000824s | 0.000846s | 0.000812s | byte equality observed |
| vector_iterator.test | 10 | 0.000822s | 0.000826s | 0.000792s | byte equality observed |
| vector_make.test | 10 | 0.000818s | 0.000848s | 0.000824s | byte equality observed |
| vector_misc.test | 10 | 0.000808s | 0.000858s | 0.000833s | byte equality observed |
| vector_move.test | 10 | 0.000810s | 0.000847s | 0.000857s | byte equality observed |
| vector_mutate.test | 10 | 0.000829s | 0.000860s | 0.000822s | byte equality observed |
| vector_n.test | 10 | 0.000835s | 0.000824s | 0.000809s | byte equality observed |
| vector_nest.test | 10 | 0.000843s | 0.000824s | 0.000796s | byte equality observed |
| vector_tie.test | 10 | 0.000843s | 0.000818s | 0.000797s | byte equality observed |
| vector_traits__maybe_variadic.test | 10 | 0.000830s | 0.000793s | 0.000821s | byte equality observed |
| vector_traits__no_variadic.test | 10 | 0.000798s | 0.000826s | 0.000825s | byte equality observed |
| vector_value_at.test | 10 | 0.000800s | 0.000830s | 0.000831s | byte equality observed |
| zip.test | 10 | 0.000802s | 0.000823s | 0.000814s | byte equality observed |
| zip2.test | 10 | 0.000828s | 0.000791s | 0.000813s | byte equality observed |
| zip_ignore.test | 10 | 0.000821s | 0.000812s | 0.000797s | byte equality observed |
| zip_view.test | 10 | 0.000839s | 0.000833s | 0.000810s | byte equality observed |
| zip_view2.test | 10 | 0.000839s | 0.000841s | 0.000777s | byte equality observed |
| zip_view_ignore.test | 10 | 0.000798s | 0.000793s | 0.000796s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/43822097733).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
