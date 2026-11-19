# libs/fusion/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| all.test | RUN | 0.280152 | 0.628863 | 0.812872 | 0.001131 | 0.001160 | 0.001237 |
| any.test | RUN | 0.269127 | 0.597924 | 0.769436 | 0.001302 | 0.001400 | 0.001193 |
| clear.test | RUN | 0.198710 | 0.555454 | 0.645406 | 0.001471 | 0.001297 | 0.001214 |
| copy.test | RUN | 0.168504 | 0.411372 | 0.515278 | 0.001212 | 0.001380 | 0.001212 |
| count.test | RUN | 0.190960 | 0.459796 | 0.563396 | 0.001362 | 0.001221 | 0.001309 |
| count_if.test | RUN | 0.178903 | 0.428053 | 0.516919 | 0.001188 | 0.001209 | 0.001311 |
| erase.test | RUN | 0.257996 | 0.756282 | 0.860013 | 0.001270 | 0.001135 | 0.001119 |
| erase_key.test | RUN | 0.252779 | 0.746325 | 0.816813 | 0.001317 | 0.001138 | 0.001296 |
| filter.test | RUN | 0.224690 | 0.635707 | 0.739803 | 0.001173 | 0.001336 | 0.001345 |
| filter_if.test | RUN | 0.256136 | 0.744920 | 0.870792 | 0.001207 | 0.001332 | 0.001480 |
| find.test | RUN | 0.218702 | 0.513731 | 0.648474 | 0.001269 | 0.001388 | 0.001186 |
| find_if.test | RUN | 0.209284 | 0.468215 | 0.601509 | 0.001378 | 0.001181 | 0.001408 |
| fold.test | RUN | 0.234565 | 0.581697 | 0.752652 | 0.001267 | 0.001404 | 0.001195 |
| for_each.test | RUN | 0.201676 | 0.532874 | 0.649029 | 0.001440 | 0.001438 | 0.001230 |
| insert.test | RUN | 0.301747 | 0.939853 | 1.044693 | 0.001425 | 0.001427 | 0.001458 |
| insert_range.test | RUN | 0.300302 | 0.939081 | 1.053985 | 0.001008 | 0.001470 | 0.001341 |
| iter_fold.test | RUN | 0.356940 | 0.887730 | 1.252502 | 0.001291 | 0.001278 | 0.001425 |
| move.test | RUN | 0.179527 | 0.420953 | 0.526791 | 0.001436 | 0.001118 | 0.001355 |
| none.test | RUN | 0.284175 | 0.603610 | 0.803610 | 0.001329 | 0.001387 | 0.001218 |
| pop_back.test | RUN | 0.274396 | 0.828429 | 0.931162 | 0.001354 | 0.001403 | 0.001295 |
| pop_front.test | RUN | 0.236154 | 0.659662 | 0.747447 | 0.001348 | 0.001198 | 0.001253 |
| push_back.test | RUN | 0.301756 | 0.945165 | 1.022162 | 0.001437 | 0.001333 | 0.001264 |
| push_front.test | RUN | 0.255237 | 0.785936 | 0.856671 | 0.001208 | 0.001271 | 0.001173 |
| remove.test | RUN | 0.286104 | 0.893462 | 1.028275 | 0.001302 | 0.001216 | 0.001286 |
| remove_if.test | RUN | 0.258488 | 0.733629 | 0.859717 | 0.001295 | 0.001250 | 0.001300 |
| replace.test | RUN | 0.253195 | 0.718176 | 0.803256 | 0.001362 | 0.001273 | 0.001204 |
| replace_if.test | RUN | 0.239732 | 0.711765 | 0.796563 | 0.001292 | 0.001518 | 0.001266 |
| reverse_fold.test | RUN | 0.382217 | 1.000328 | 1.360049 | 0.001372 | 0.001284 | 0.001274 |
| reverse_iter_fold.test | RUN | 0.386834 | 1.022976 | 1.444793 | 0.001236 | 0.001219 | 0.001172 |
| reverse.test | RUN | 0.247343 | 0.749511 | 0.822538 | 0.001344 | 0.001379 | 0.001204 |
| segmented_for_each.test | RUN | 0.421118 | 1.389014 | 1.660938 | 0.001294 | 0.001252 | 0.001075 |
| segmented_find.test | RUN | 0.254510 | 0.730802 | 0.934951 | 0.001192 | 0.001250 | 0.001080 |
| segmented_find_if.test | RUN | 0.256362 | 0.737932 | 0.924103 | 0.001225 | 0.001149 | 0.001205 |
| segmented_fold.test | RUN | 0.324823 | 0.975513 | 1.189142 | 0.001434 | 0.001278 | 0.001305 |
| transform.test | RUN | 0.253036 | 0.788776 | 0.850184 | 0.001178 | 0.001290 | 0.001414 |
| join.test | RUN | 0.194550 | 0.474531 | 0.591532 | 0.001262 | 0.001251 | 0.001339 |
| zip.test | RUN | 0.331108 | 0.879507 | 1.154239 | 0.001202 | 0.000928 | 0.001277 |
| zip2.test | RUN | 0.318626 | 0.844706 | 1.109139 | 0.001307 | 0.001259 | 0.001226 |
| zip_ignore.test | RUN | 0.241810 | 0.586261 | 0.731885 | 0.001166 | 0.001230 | 0.001323 |
| flatten.test | RUN | 0.231078 | 0.664158 | 0.752986 | 0.001088 | 0.001405 | 0.001220 |
| ticket-5490.test | COMPILE | 0.124324 | 0.278373 | 0.345035 | — | — | — |
| as_deque.test | RUN | 0.226950 | 0.612676 | 0.805969 | 0.001107 | 0.001198 | 0.001356 |
| as_list.test | RUN | 0.257569 | 0.774748 | 0.872900 | 0.001194 | 0.001393 | 0.001252 |
| as_map.test | RUN | 0.254542 | 0.755427 | 0.869759 | 0.001110 | 0.001290 | 0.001273 |
| as_map_assoc.test | RUN | 0.248592 | 0.705795 | 0.829000 | 0.001205 | 0.001303 | 0.001362 |
| as_set.test | RUN | 0.291497 | 0.883359 | 1.034968 | 0.001502 | 0.001448 | 0.001382 |
| as_vector.test | RUN | 0.263424 | 0.791482 | 0.882639 | 0.001373 | 0.001180 | 0.001151 |
| boost_tuple.test | RUN | 0.262976 | 0.783597 | 0.897017 | 0.001177 | 0.001124 | 0.001243 |
| boost_tuple_iterator.test | RUN | 0.175481 | 0.452132 | 0.528096 | 0.000931 | 0.000983 | 0.001376 |
| cons.test | RUN | 0.330041 | 0.882691 | 1.027820 | 0.001186 | 0.001282 | 0.001302 |
| convert_boost_tuple.test | RUN | 0.207782 | 0.681062 | 0.687827 | 0.001433 | 0.001330 | 0.001139 |
| convert_deque.test | RUN | 0.206738 | 0.648412 | 0.682059 | 0.001358 | 0.001068 | 0.001167 |
| convert_list.test | RUN | 0.208536 | 0.653410 | 0.699966 | 0.001106 | 0.001184 | 0.001261 |
| convert_std_pair.test | RUN | 0.218847 | 0.672556 | 0.698609 | 0.001284 | 0.001235 | 0.001102 |
| convert_std_tuple.test | RUN | 0.205987 | 0.658526 | 0.678037 | 0.001316 | 0.001088 | 0.001180 |
| convert_vector.test | RUN | 0.206775 | 0.652056 | 0.688317 | 0.001253 | 0.001166 | 0.001097 |
| filter_view.test | RUN | 0.250411 | 0.702867 | 0.811164 | 0.001176 | 0.001282 | 0.001332 |
| hash.test | RUN | 0.244122 | 0.627213 | 0.766358 | 0.001391 | 0.001477 | 0.001260 |
| io.test | RUN | 0.265801 | 0.896385 | 0.936667 | 0.001266 | 0.001486 | 0.001519 |
| iterator_range.test | RUN | 0.232269 | 0.673893 | 0.773460 | 0.001135 | 0.000988 | 0.001191 |
| joint_view.test | RUN | 0.327012 | 1.102348 | 1.169355 | 0.001343 | 0.001208 | 0.001183 |
| list_comparison.test | RUN | 0.186381 | 0.456068 | 0.564864 | 0.001171 | 0.001342 | 0.001028 |
| list_construction.test | RUN | 0.174392 | 0.444364 | 0.547210 | 0.001266 | 0.001151 | 0.001116 |
| list_copy.test | RUN | 0.269920 | 0.827236 | 0.945702 | 0.001087 | 0.001415 | 0.001154 |
| list_iterator.test | RUN | 0.176064 | 0.457795 | 0.518778 | 0.001189 | 0.001317 | 0.001283 |
| list_hash.test | RUN | 0.240188 | 0.919922 | 0.784226 | 0.001196 | 0.001186 | 0.001206 |
| list_make.test | RUN | 0.184370 | 0.488949 | 0.591024 | 0.001437 | 0.001132 | 0.001159 |
| list_misc.test | RUN | 0.238682 | 0.585699 | 0.723644 | 0.001163 | 0.001276 | 0.001430 |
| list_mutate.test | RUN | 0.164537 | 0.378351 | 0.476683 | 0.001101 | 0.001184 | 0.001411 |
| list_nest.test | RUN | 0.342775 | 1.128049 | 1.327328 | 0.001150 | 0.001258 | 0.001174 |
| list_tie.test | RUN | 0.178790 | 0.439578 | 0.531408 | 0.001167 | 0.001324 | 0.001185 |
| list_value_at.test | RUN | 0.174115 | 0.416585 | 0.512435 | 0.001109 | 0.001130 | 0.001441 |
| deque_comparison.test | RUN | 0.178265 | 0.469591 | 0.548160 | 0.001198 | 0.001202 | 0.001278 |
| deque_construction.test | RUN | 0.184481 | 0.444299 | 0.560569 | 0.001325 | 0.001414 | 0.001090 |
| deque_copy.test | RUN | 0.264303 | 0.769970 | 0.874527 | 0.001238 | 0.001229 | 0.001164 |
| deque_iterator.test | RUN | 0.178143 | 0.474230 | 0.541478 | 0.001191 | 0.001306 | 0.001159 |
| deque_hash.test | RUN | 0.247832 | 0.896201 | 0.772581 | 0.001143 | 0.001272 | 0.001371 |
| deque_is_constructible.test | COMPILE | 0.099115 | 0.200600 | 0.247831 | — | — | — |
| deque_make.test | RUN | 0.181315 | 0.476458 | 0.576675 | 0.001376 | 0.001440 | 0.001292 |
| deque_misc.test | RUN | 0.237443 | 0.588540 | 0.689897 | 0.001104 | 0.001200 | 0.001117 |
| deque_move.test | RUN | 0.180732 | 0.480978 | 0.549655 | 0.001175 | 0.001344 | 0.001173 |
| deque_mutate.test | RUN | 0.166206 | 0.393140 | 0.480871 | 0.001276 | 0.001262 | 0.001194 |
| deque_nest.test | RUN | 0.487339 | 1.853925 | 2.185617 | 0.001331 | 0.001169 | 0.001270 |
| deque_tie.test | RUN | 0.169372 | 0.414283 | 0.502075 | 0.000881 | 0.001234 | 0.001170 |
| deque_value_at.test | RUN | 0.165872 | 0.404797 | 0.489500 | 0.001097 | 0.001214 | 0.001006 |
| front_extended_deque.test | RUN | 0.249737 | 0.611701 | 0.759930 | 0.001267 | 0.001380 | 0.001204 |
| back_extended_deque.test | RUN | 0.245156 | 0.609423 | 0.733159 | 0.001182 | 0.001210 | 0.001405 |
| make_list.test | RUN | 0.197031 | 0.490842 | 0.578811 | 0.001330 | 0.001162 | 0.001209 |
| make_vector.test | RUN | 0.187900 | 0.491806 | 0.612298 | 0.001149 | 0.001242 | 0.001160 |
| map.test | RUN | 0.257587 | 0.753754 | 0.834458 | 0.001141 | 0.001318 | 0.001278 |
| map_comparison.test | RUN | 0.182489 | 0.481572 | 0.575822 | 0.001272 | 0.001391 | 0.001230 |
| map_construction.test | RUN | 0.183633 | 0.456489 | 0.548770 | 0.001199 | 0.001319 | 0.001286 |
| map_copy.test | RUN | 0.224408 | 0.594402 | 0.688947 | 0.001056 | 0.001236 | 0.001414 |
| map_misc.test | RUN | 0.242503 | 0.588017 | 0.710839 | 0.001427 | 0.001438 | 0.001240 |
| map_move.test | RUN | 0.183217 | 0.501999 | 0.555581 | 0.001381 | 0.001239 | 0.001304 |
| map_mutate.test | RUN | 0.169514 | 0.393298 | 0.484928 | 0.001084 | 0.001298 | 0.001134 |
| map_tie.test | RUN | 0.176086 | 0.397390 | 0.495161 | 0.001192 | 0.001201 | 0.001258 |
| nil.test | RUN | 0.118450 | 0.272157 | 0.335174 | 0.001391 | 0.001266 | 0.001156 |
| nview.test | RUN | 0.237199 | 0.572069 | 0.715754 | 0.001135 | 0.001311 | 0.001364 |
| reverse_view.test | RUN | 0.308608 | 0.985424 | 1.082164 | 0.001357 | 0.001212 | 0.001329 |
| segmented_iterator_range.test | RUN | 0.358573 | 1.147079 | 1.370073 | 0.001364 | 0.001311 | 0.001241 |
| set.test | RUN | 0.229727 | 0.647483 | 0.734712 | 0.001201 | 0.001388 | 0.001189 |
| single_view.test | RUN | 0.216198 | 0.593194 | 0.680845 | 0.001166 | 0.001225 | 0.001219 |
| std_pair.test | RUN | 0.266133 | 0.763637 | 0.870863 | 0.001246 | 0.001230 | 0.001167 |
| boost_array.test | RUN | 0.225589 | 0.510449 | 0.667918 | 0.001319 | 0.001323 | 0.001277 |
| array.test | RUN | 0.215350 | 0.520903 | 0.627408 | 0.001114 | 0.001155 | 0.001153 |
| std_array.test | RUN | 0.215863 | 0.523534 | 0.642689 | 0.001123 | 0.001259 | 0.001319 |
| tuple_comparison.test | RUN | 0.194105 | 0.492171 | 0.595860 | 0.001154 | 0.001363 | 0.001397 |
| tuple_construction.test | RUN | 0.198937 | 0.495360 | 0.605260 | 0.001274 | 0.001421 | 0.001342 |
| tuple_conversion.test | RUN | 0.436636 | 1.538140 | 1.978042 | 0.001224 | 0.001121 | 0.001138 |
| tuple_copy.test | RUN | 0.291654 | 0.877197 | 1.041107 | 0.001322 | 0.001266 | 0.001358 |
| tuple_element.test | RUN | 0.181913 | 0.441476 | 0.540686 | 0.001174 | 0.001222 | 0.001413 |
| tuple_make.test | RUN | 0.206394 | 0.507562 | 0.598443 | 0.001280 | 0.001224 | 0.001188 |
| tuple_misc.test | RUN | 0.251205 | 0.621075 | 0.790615 | 0.001167 | 0.001163 | 0.001119 |
| tuple_mutate.test | RUN | 0.175067 | 0.414183 | 0.515866 | 0.001430 | 0.001240 | 0.001311 |
| tuple_nest.test | RUN | 0.751921 | 3.139531 | 3.757736 | 0.001172 | 0.001223 | 0.001387 |
| tuple_hash.test | RUN | 0.256704 | 0.928113 | 0.764496 | 0.001265 | 0.001304 | 0.001242 |
| tuple_tie.test | RUN | 0.181748 | 0.468610 | 0.557712 | 0.001269 | 0.001231 | 0.001119 |
| tuple_traits__maybe_variadic.test | RUN | 0.201507 | 0.544822 | 0.608045 | 0.001085 | 0.001254 | 0.001062 |
| tuple_traits__no_variadic.test | RUN | 0.223794 | 0.568840 | 0.643608 | 0.001287 | 0.001226 | 0.001129 |
| transform_view.test | RUN | 0.301737 | 0.967675 | 1.079054 | 0.001371 | 0.001200 | 0.001326 |
| identity_view.test | RUN | 0.290491 | 0.897693 | 0.983869 | 0.001359 | 0.001248 | 0.001373 |
| vector_comparison.test | RUN | 0.181757 | 0.479976 | 0.564084 | 0.001109 | 0.001124 | 0.001289 |
| vector_construction.test | RUN | 0.184630 | 0.452142 | 0.532176 | 0.001152 | 0.001128 | 0.001230 |
| vector_conversion.test | RUN | 0.543190 | 2.027254 | 2.608407 | 0.001291 | 0.001230 | 0.001278 |
| vector_copy.test | RUN | 0.276506 | 0.863588 | 1.003113 | 0.001039 | 0.001332 | 0.001378 |
| vector_iterator.test | RUN | 0.180023 | 0.470621 | 0.553327 | 0.001215 | 0.001272 | 0.001199 |
| vector_make.test | RUN | 0.186010 | 0.481170 | 0.586601 | 0.001326 | 0.001379 | 0.001231 |
| vector_misc.test | RUN | 0.245550 | 0.603785 | 0.704978 | 0.001121 | 0.001323 | 0.001214 |
| vector_move.test | RUN | 0.183274 | 0.491753 | 0.549990 | 0.001079 | 0.001164 | 0.001245 |
| vector_mutate.test | RUN | 0.164199 | 0.400083 | 0.536777 | 0.001423 | 0.001053 | 0.001356 |
| vector_n.test | RUN | 0.206202 | 0.495057 | 0.640424 | 0.001236 | 0.001393 | 0.001311 |
| vector_nest.test | RUN | 0.760467 | 3.417480 | 3.711716 | 0.001376 | 0.001123 | 0.001296 |
| vector_hash.test | RUN | 0.240485 | 0.904977 | 0.747394 | 0.001302 | 0.001255 | 0.001067 |
| vector_tie.test | RUN | 0.177033 | 0.452528 | 0.535506 | 0.001138 | 0.001324 | 0.001259 |
| vector_traits__maybe_variadic.test | RUN | 0.184766 | 0.500106 | 0.556465 | 0.001333 | 0.001374 | 0.001186 |
| vector_traits__no_variadic.test | RUN | 0.203946 | 0.556970 | 0.575623 | 0.001251 | 0.001359 | 0.001110 |
| vector_value_at.test | RUN | 0.169846 | 0.401380 | 0.502576 | 0.001098 | 0.001150 | 0.001269 |
| zip_view.test | RUN | 0.358818 | 0.990904 | 1.305136 | 0.001136 | 0.001267 | 0.001155 |
| zip_view2.test | RUN | 0.277440 | 0.777846 | 0.958511 | 0.001073 | 0.001188 | 0.001200 |
| zip_view_ignore.test | RUN | 0.263540 | 0.708692 | 0.859916 | 0.001229 | 0.001379 | 0.001107 |
| repetitive_view.test | RUN | 0.448324 | 1.290744 | 1.681200 | 0.001102 | 0.001353 | 0.001194 |
| deduce_sequence.test | RUN | 0.220018 | 0.548468 | 0.652719 | 0.001212 | 0.001413 | 0.001238 |
| adapt_adt_named.test | RUN | 0.257423 | 0.785462 | 0.872169 | 0.001278 | 0.001135 | 0.001244 |
| adapt_adt_named_empty.test | RUN | 0.224908 | 0.621332 | 0.689452 | 0.001224 | 0.001203 | 0.001188 |
| adapt_adt.test | RUN | 0.292337 | 1.028558 | 1.045097 | 0.001216 | 0.001194 | 0.001248 |
| adapt_adt_empty.test | RUN | 0.223317 | 0.629496 | 0.688205 | 0.001277 | 0.001251 | 0.001214 |
| adapt_assoc_adt_named.test | RUN | 0.290230 | 0.802102 | 0.911374 | 0.001117 | 0.001228 | 0.001441 |
| adapt_assoc_adt_named_empty.test | RUN | 0.223641 | 0.632492 | 0.692160 | 0.001291 | 0.001220 | 0.001184 |
| adapt_assoc_adt.test | RUN | 0.299689 | 0.835811 | 0.959973 | 0.001116 | 0.001428 | 0.001184 |
| adapt_assoc_adt_empty.test | RUN | 0.220473 | 0.631580 | 0.700609 | 0.001436 | 0.001191 | 0.001254 |
| adapt_assoc_struct_named.test | RUN | 0.280902 | 0.797632 | 0.891687 | 0.001265 | 0.001303 | 0.001309 |
| adapt_assoc_struct_named_empty.test | RUN | 0.220692 | 0.624495 | 0.695934 | 0.001264 | 0.001311 | 0.001326 |
| adapt_assoc_struct.test | RUN | 0.259328 | 0.746290 | 0.840237 | 0.001149 | 0.001164 | 0.001161 |
| adapt_assoc_struct_empty.test | RUN | 0.224148 | 0.617536 | 0.691655 | 0.001343 | 0.001336 | 0.001239 |
| adapt_assoc_tpl_adt.test | RUN | 0.304445 | 0.853677 | 1.001028 | 0.001132 | 0.001185 | 0.001312 |
| adapt_assoc_tpl_adt_empty.test | RUN | 0.221495 | 0.628826 | 0.692354 | 0.001088 | 0.001213 | 0.001272 |
| adapt_assoc_tpl_struct.test | RUN | 0.252584 | 0.733793 | 0.837319 | 0.001069 | 0.001280 | 0.001329 |
| adapt_assoc_tpl_struct_empty.test | RUN | 0.230744 | 0.627397 | 0.692699 | 0.001164 | 0.001217 | 0.001291 |
| adapt_struct_named.test | RUN | 0.251857 | 0.763703 | 0.824576 | 0.001199 | 0.001334 | 0.001249 |
| adapt_struct_named_empty.test | RUN | 0.230265 | 0.623000 | 0.700983 | 0.001249 | 0.001442 | 0.001232 |
| adapt_struct.test | RUN | 0.283458 | 0.851199 | 0.959921 | 0.001195 | 0.001309 | 0.001234 |
| adapt_struct_empty.test | RUN | 0.227727 | 0.623725 | 0.694257 | 0.001130 | 0.001177 | 0.001103 |
| adapt_tpl_adt.test | RUN | 0.290448 | 0.997893 | 1.001612 | 0.001084 | 0.001338 | 0.001149 |
| adapt_tpl_adt_empty.test | RUN | 0.229847 | 0.631971 | 0.697385 | 0.001141 | 0.001254 | 0.001352 |
| adapt_tpl_struct.test | RUN | 0.234746 | 0.691275 | 0.758788 | 0.001365 | 0.001361 | 0.001238 |
| adapt_tpl_struct_empty.test | RUN | 0.219632 | 0.632087 | 0.714741 | 0.001228 | 0.001249 | 0.001241 |
| adt_attribute_proxy.test | RUN | 0.247393 | 0.602561 | 0.738873 | 0.001263 | 0.001282 | 0.001217 |
| define_struct.test | RUN | 0.311141 | 0.850703 | 0.997970 | 0.001179 | 0.001240 | 0.001188 |
| define_struct_empty.test | RUN | 0.266845 | 0.709205 | 0.809851 | 0.001311 | 0.001280 | 0.001346 |
| define_struct_move.test | RUN | 0.168526 | 0.381291 | 0.474879 | 0.001323 | 0.001298 | 0.001180 |
| define_struct_inline.test | RUN | 0.334121 | 1.019295 | 1.110307 | 0.001330 | 0.001170 | 0.001262 |
| define_struct_inline_empty.test | RUN | 0.274232 | 0.712129 | 0.802246 | 0.001252 | 0.001349 | 0.001217 |
| define_struct_inline_move.test | RUN | 0.176279 | 0.387007 | 0.482831 | 0.001180 | 0.001379 | 0.001127 |
| define_assoc_struct.test | RUN | 0.298993 | 0.812409 | 0.935138 | 0.001324 | 0.001359 | 0.001256 |
| define_assoc_struct_empty.test | RUN | 0.265477 | 0.704169 | 0.813020 | 0.001251 | 0.001440 | 0.001303 |
| define_assoc_struct_move.test | RUN | 0.169832 | 0.388319 | 0.476731 | 0.001211 | 0.001437 | 0.001402 |
| define_tpl_struct.test | RUN | 0.307712 | 0.818379 | 0.920544 | 0.001198 | 0.001337 | 0.001144 |
| define_tpl_struct_empty.test | RUN | 0.271971 | 0.713645 | 0.820179 | 0.001224 | 0.001263 | 0.001176 |
| define_tpl_struct_move.test | RUN | 0.173474 | 0.389265 | 0.479887 | 0.001512 | 0.001257 | 0.001424 |
| define_tpl_struct_inline.test | RUN | 0.315109 | 0.960383 | 1.038226 | 0.001184 | 0.001304 | 0.001306 |
| define_tpl_struct_inline_empty.test | RUN | 0.274986 | 0.696382 | 0.792258 | 0.001132 | 0.001395 | 0.001328 |
| define_tpl_struct_inline_move.test | RUN | 0.173033 | 0.401473 | 0.479447 | 0.001300 | 0.001326 | 0.001246 |
| define_assoc_tpl_struct.test | RUN | 0.299392 | 0.838837 | 0.971428 | 0.001308 | 0.001445 | 0.001212 |
| define_assoc_tpl_struct_empty.test | RUN | 0.277821 | 0.693909 | 0.827768 | 0.001358 | 0.001270 | 0.001224 |
| define_assoc_tpl_struct_move.test | RUN | 0.168780 | 0.396560 | 0.479033 | 0.001211 | 0.001258 | 0.001207 |
| std_tuple.test | RUN | 0.174973 | 0.450087 | 0.533307 | 0.001159 | 0.001280 | 0.001218 |
| std_tuple_iterator.test | RUN | 0.183840 | 0.464968 | 0.546775 | 0.001268 | 0.001314 | 0.001202 |
| ref_vector.test | RUN | 0.198726 | 0.480636 | 0.564420 | 0.001351 | 0.001248 | 0.001244 |
| flatten_view.test | RUN | 0.210777 | 0.585764 | 0.696656 | 0.001091 | 0.001379 | 0.001328 |
| github-159.test | COMPILE | 0.101232 | 0.213629 | 0.252385 | — | — | — |
| github-176.test | RUN | 0.198927 | 0.529580 | 0.580726 | 0.001208 | 0.001411 | 0.001238 |
| size.test | COMPILE | 0.166945 | 0.359761 | 0.454309 | — | — | — |
| fused.test | RUN | 0.235980 | 0.553010 | 0.680290 | 0.001257 | 0.001240 | 0.001320 |
| fused_function_object.test | RUN | 0.175471 | 0.415918 | 0.518360 | 0.001208 | 0.001272 | 0.001220 |
| fused_procedure.test | RUN | 0.230894 | 0.541903 | 0.638414 | 0.001218 | 0.001226 | 0.001306 |
| unfused.test | RUN | 0.188515 | 0.441166 | 0.528101 | 0.001323 | 0.001312 | 0.001192 |
| unfused_typed.test | RUN | 0.182028 | 0.473749 | 0.550293 | 0.001222 | 0.001337 | 0.001479 |
| make_fused.test | RUN | 0.241494 | 0.562173 | 0.667166 | 0.001251 | 0.001251 | 0.001289 |
| make_fused_function_object.test | RUN | 0.178595 | 0.416096 | 0.521774 | 0.001204 | 0.001016 | 0.001077 |
| make_fused_procedure.test | RUN | 0.234036 | 0.529927 | 0.660619 | 0.001349 | 0.001273 | 0.001241 |
| make_unfused.test | RUN | 0.179130 | 0.434015 | 0.543098 | 0.001292 | 0.001302 | 0.001270 |
| invoke.test | RUN | 0.459327 | 1.569923 | 1.821447 | 0.001164 | 0.001228 | 0.001211 |
| invoke_function_object.test | RUN | 0.225000 | 0.564904 | 0.680830 | 0.001168 | 0.001472 | 0.001251 |
| invoke_procedure.test | RUN | 0.369031 | 1.157261 | 1.361995 | 0.001199 | 0.001388 | 0.001316 |
| swap.test | RUN | 0.274097 | 0.709013 | 0.855943 | 0.001116 | 0.001402 | 0.001304 |
| is_sequence.test | COMPILE | 0.045361 | 0.097495 | 0.105178 | — | — | — |
| is_view.test | COMPILE | 0.045832 | 0.095853 | 0.105602 | — | — | — |
| pair_deque.test | COMPILE | 0.100208 | 0.223450 | 0.261523 | — | — | — |
| pair_list.test | COMPILE | 0.100379 | 0.217507 | 0.256417 | — | — | — |
| pair_map.test | COMPILE | 0.101904 | 0.223149 | 0.270414 | — | — | — |
| pair_set.test | COMPILE | 0.104676 | 0.228958 | 0.260765 | — | — | — |
| pair_vector.test | COMPILE | 0.098389 | 0.220335 | 0.255033 | — | — | — |
| pair_nest.test | COMPILE | 0.040077 | 0.089171 | 0.102498 | — | — | — |
| index_sequence.test | COMPILE | 0.033519 | 0.062711 | 0.076024 | — | — | — |
| and.test | COMPILE | 0.025655 | 0.048198 | 0.053403 | — | — | — |
| tag_of.test | COMPILE | 0.046352 | 0.094628 | 0.102637 | — | — | — |
| unused.test | COMPILE | 0.023844 | 0.060333 | 0.064080 | — | — | — |
| tag_of_fallback.test | COMPILE | 0.045452 | 0.096403 | 0.103358 | — | — | — |
| make_pair_r-value.test | COMPILE | 0.033551 | 0.088886 | 0.088901 | — | — | — |
| quick.test | RUN | 0.137573 | 0.305505 | 0.329716 | 0.000355 | 0.000836 | 0.000854 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.998× | 1.001×, 0.996× | 1.007× |
| clang | 1.000× | 1.000×, 0.999× | 0.994× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1363 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44560957980).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| adapt_adt.test | 10 | 0.000828s | 0.000828s | 0.000823s | byte equality observed |
| adapt_adt_empty.test | 10 | 0.000827s | 0.000828s | 0.000793s | byte equality observed |
| adapt_adt_named.test | 10 | 0.000824s | 0.000823s | 0.000798s | byte equality observed |
| adapt_adt_named_empty.test | 10 | 0.000836s | 0.000819s | 0.000803s | byte equality observed |
| adapt_assoc_adt.test | 10 | 0.000836s | 0.000816s | 0.000829s | byte equality observed |
| adapt_assoc_adt_empty.test | 10 | 0.000826s | 0.000806s | 0.000804s | byte equality observed |
| adapt_assoc_adt_named.test | 10 | 0.000814s | 0.000815s | 0.000845s | byte equality observed |
| adapt_assoc_adt_named_empty.test | 10 | 0.000826s | 0.000812s | 0.000840s | byte equality observed |
| adapt_assoc_struct.test | 10 | 0.000850s | 0.000824s | 0.000826s | byte equality observed |
| adapt_assoc_struct_empty.test | 10 | 0.000849s | 0.000861s | 0.000865s | byte equality observed |
| adapt_assoc_struct_named.test | 10 | 0.000837s | 0.000859s | 0.000848s | byte equality observed |
| adapt_assoc_struct_named_empty.test | 10 | 0.000847s | 0.000853s | 0.000861s | byte equality observed |
| adapt_assoc_tpl_adt.test | 10 | 0.000845s | 0.000856s | 0.000853s | byte equality observed |
| adapt_assoc_tpl_adt_empty.test | 10 | 0.000844s | 0.000829s | 0.000805s | byte equality observed |
| adapt_assoc_tpl_struct.test | 10 | 0.000856s | 0.000836s | 0.000837s | byte equality observed |
| adapt_assoc_tpl_struct_empty.test | 10 | 0.000818s | 0.000823s | 0.000842s | byte equality observed |
| adapt_struct.test | 10 | 0.000819s | 0.000805s | 0.000866s | byte equality observed |
| adapt_struct_empty.test | 10 | 0.000818s | 0.000814s | 0.000847s | byte equality observed |
| adapt_struct_named.test | 10 | 0.000853s | 0.000821s | 0.000841s | byte equality observed |
| adapt_struct_named_empty.test | 10 | 0.000837s | 0.000809s | 0.000849s | byte equality observed |
| adapt_tpl_adt.test | 10 | 0.000823s | 0.000831s | 0.000829s | byte equality observed |
| adapt_tpl_adt_empty.test | 10 | 0.000834s | 0.000838s | 0.000824s | byte equality observed |
| adapt_tpl_struct.test | 10 | 0.000857s | 0.000810s | 0.000844s | byte equality observed |
| adapt_tpl_struct_empty.test | 10 | 0.000843s | 0.000821s | 0.000845s | byte equality observed |
| adt_attribute_proxy.test | 10 | 0.000840s | 0.000785s | 0.000838s | byte equality observed |
| all.test | 10 | 0.000838s | 0.000795s | 0.000810s | byte equality observed |
| any.test | 10 | 0.000801s | 0.000823s | 0.000794s | byte equality observed |
| array.test | 10 | 0.000796s | 0.000827s | 0.000802s | byte equality observed |
| as_deque.test | 10 | 0.000822s | 0.000786s | 0.000852s | byte equality observed |
| as_list.test | 10 | 0.000816s | 0.000857s | 0.000813s | byte equality observed |
| as_map.test | 10 | 0.000825s | 0.000813s | 0.000838s | byte equality observed |
| as_map_assoc.test | 10 | 0.000829s | 0.000799s | 0.000837s | byte equality observed |
| as_set.test | 10 | 0.000837s | 0.000831s | 0.000824s | byte equality observed |
| as_vector.test | 10 | 0.000848s | 0.000849s | 0.000838s | byte equality observed |
| back_extended_deque.test | 10 | 0.000806s | 0.000819s | 0.000815s | byte equality observed |
| boost_array.test | 10 | 0.000796s | 0.000823s | 0.000817s | byte equality observed |
| boost_tuple.test | 10 | 0.000834s | 0.000834s | 0.000815s | byte equality observed |
| boost_tuple_iterator.test | 10 | 0.000811s | 0.000815s | 0.000811s | byte equality observed |
| clear.test | 10 | 0.000829s | 0.000824s | 0.000817s | byte equality observed |
| cons.test | 10 | 0.000835s | 0.000823s | 0.000859s | byte equality observed |
| convert_boost_tuple.test | 10 | 0.000823s | 0.000791s | 0.000816s | byte equality observed |
| convert_deque.test | 10 | 0.000834s | 0.000818s | 0.000811s | byte equality observed |
| convert_list.test | 10 | 0.000835s | 0.000814s | 0.000827s | byte equality observed |
| convert_std_pair.test | 10 | 0.000830s | 0.000798s | 0.000819s | byte equality observed |
| convert_std_tuple.test | 10 | 0.000815s | 0.000809s | 0.000798s | byte equality observed |
| convert_vector.test | 10 | 0.000786s | 0.000800s | 0.000828s | byte equality observed |
| copy.test | 10 | 0.000810s | 0.000810s | 0.000840s | byte equality observed |
| count.test | 10 | 0.000838s | 0.000821s | 0.000830s | byte equality observed |
| count_if.test | 10 | 0.000811s | 0.000801s | 0.000820s | byte equality observed |
| deduce_sequence.test | 10 | 0.000805s | 0.000803s | 0.000858s | byte equality observed |
| define_assoc_struct.test | 10 | 0.000831s | 0.000835s | 0.000808s | byte equality observed |
| define_assoc_struct_empty.test | 10 | 0.000819s | 0.000842s | 0.000821s | byte equality observed |
| define_assoc_struct_move.test | 10 | 0.000815s | 0.000819s | 0.000793s | byte equality observed |
| define_assoc_tpl_struct.test | 10 | 0.000824s | 0.000829s | 0.000823s | byte equality observed |
| define_assoc_tpl_struct_empty.test | 10 | 0.000832s | 0.000835s | 0.000783s | byte equality observed |
| define_assoc_tpl_struct_move.test | 10 | 0.000808s | 0.000814s | 0.000821s | byte equality observed |
| define_struct.test | 10 | 0.000842s | 0.000856s | 0.000857s | byte equality observed |
| define_struct_empty.test | 10 | 0.000857s | 0.000852s | 0.000827s | byte equality observed |
| define_struct_inline.test | 10 | 0.000871s | 0.000836s | 0.000847s | byte equality observed |
| define_struct_inline_empty.test | 10 | 0.000859s | 0.000824s | 0.000835s | byte equality observed |
| define_struct_inline_move.test | 10 | 0.000834s | 0.000811s | 0.000822s | byte equality observed |
| define_struct_move.test | 10 | 0.000824s | 0.000835s | 0.000787s | byte equality observed |
| define_tpl_struct.test | 10 | 0.000829s | 0.000799s | 0.000824s | byte equality observed |
| define_tpl_struct_empty.test | 10 | 0.000854s | 0.000817s | 0.000801s | byte equality observed |
| define_tpl_struct_inline.test | 10 | 0.000824s | 0.000829s | 0.000833s | byte equality observed |
| define_tpl_struct_inline_empty.test | 10 | 0.000830s | 0.000846s | 0.000830s | byte equality observed |
| define_tpl_struct_inline_move.test | 10 | 0.000796s | 0.000794s | 0.000811s | byte equality observed |
| define_tpl_struct_move.test | 10 | 0.000806s | 0.000824s | 0.000819s | byte equality observed |
| deque_comparison.test | 10 | 0.000807s | 0.000783s | 0.000830s | byte equality observed |
| deque_construction.test | 10 | 0.000815s | 0.000798s | 0.000842s | byte equality observed |
| deque_copy.test | 10 | 0.000815s | 0.000805s | 0.000808s | byte equality observed |
| deque_hash.test | 10 | 0.000832s | 0.000806s | 0.000832s | byte equality observed |
| deque_iterator.test | 10 | 0.000791s | 0.000815s | 0.000817s | byte equality observed |
| deque_make.test | 10 | 0.000822s | 0.000802s | 0.000840s | byte equality observed |
| deque_misc.test | 10 | 0.000813s | 0.000801s | 0.000785s | byte equality observed |
| deque_move.test | 10 | 0.000821s | 0.000819s | 0.000835s | byte equality observed |
| deque_mutate.test | 10 | 0.000818s | 0.000823s | 0.000804s | byte equality observed |
| deque_nest.test | 10 | 0.000831s | 0.000820s | 0.000839s | byte equality observed |
| deque_tie.test | 10 | 0.000799s | 0.000781s | 0.000820s | byte equality observed |
| deque_value_at.test | 10 | 0.000800s | 0.000797s | 0.000839s | byte equality observed |
| erase.test | 10 | 0.000825s | 0.000860s | 0.000866s | byte equality observed |
| erase_key.test | 10 | 0.000837s | 0.000858s | 0.000875s | byte equality observed |
| filter.test | 10 | 0.000817s | 0.000859s | 0.000855s | byte equality observed |
| filter_if.test | 10 | 0.000846s | 0.000820s | 0.000838s | byte equality observed |
| filter_view.test | 10 | 0.000852s | 0.000846s | 0.000835s | byte equality observed |
| find.test | 10 | 0.000841s | 0.000830s | 0.000832s | byte equality observed |
| find_if.test | 10 | 0.000833s | 0.000841s | 0.000812s | byte equality observed |
| flatten.test | 10 | 0.000840s | 0.000825s | 0.000846s | byte equality observed |
| flatten_view.test | 10 | 0.000814s | 0.000809s | 0.000826s | byte equality observed |
| fold.test | 10 | 0.000821s | 0.000843s | 0.000842s | byte equality observed |
| for_each.test | 10 | 0.000821s | 0.000859s | 0.000841s | byte equality observed |
| front_extended_deque.test | 10 | 0.000812s | 0.000811s | 0.000802s | byte equality observed |
| fused.test | 10 | 0.000830s | 0.000817s | 0.000795s | byte equality observed |
| fused_function_object.test | 10 | 0.000815s | 0.000808s | 0.000780s | byte equality observed |
| fused_procedure.test | 10 | 0.000815s | 0.000835s | 0.000808s | byte equality observed |
| github-176.test | 10 | 0.000816s | 0.000819s | 0.000813s | byte equality observed |
| hash.test | 10 | 0.000810s | 0.000804s | 0.000819s | byte equality observed |
| identity_view.test | 10 | 0.000832s | 0.000834s | 0.000847s | byte equality observed |
| insert.test | 10 | 0.000850s | 0.000851s | 0.000846s | byte equality observed |
| insert_range.test | 10 | 0.000843s | 0.000823s | 0.000830s | byte equality observed |
| invoke.test | 10 | 0.000829s | 0.000818s | 0.000808s | byte equality observed |
| invoke_function_object.test | 10 | 0.000812s | 0.000797s | 0.000803s | byte equality observed |
| invoke_procedure.test | 10 | 0.000798s | 0.000800s | 0.000803s | byte equality observed |
| io.test | 10 | 0.000900s | 0.000911s | 0.000904s | byte equality observed |
| iter_fold.test | 10 | 0.000805s | 0.000811s | 0.000806s | byte equality observed |
| iterator_range.test | 10 | 0.000846s | 0.000801s | 0.000816s | byte equality observed |
| join.test | 10 | 0.000791s | 0.000770s | 0.000791s | byte equality observed |
| joint_view.test | 10 | 0.000836s | 0.000823s | 0.000822s | byte equality observed |
| list_comparison.test | 10 | 0.000812s | 0.000801s | 0.000806s | byte equality observed |
| list_construction.test | 10 | 0.000829s | 0.000786s | 0.000825s | byte equality observed |
| list_copy.test | 10 | 0.000823s | 0.000795s | 0.000801s | byte equality observed |
| list_hash.test | 10 | 0.000814s | 0.000804s | 0.000795s | byte equality observed |
| list_iterator.test | 10 | 0.000827s | 0.000792s | 0.000804s | byte equality observed |
| list_make.test | 10 | 0.000835s | 0.000780s | 0.000795s | byte equality observed |
| list_misc.test | 10 | 0.000805s | 0.000806s | 0.000795s | byte equality observed |
| list_mutate.test | 10 | 0.000811s | 0.000802s | 0.000831s | byte equality observed |
| list_nest.test | 10 | 0.000812s | 0.000798s | 0.000842s | byte equality observed |
| list_tie.test | 10 | 0.000792s | 0.000797s | 0.000828s | byte equality observed |
| list_value_at.test | 10 | 0.000799s | 0.000836s | 0.000830s | byte equality observed |
| make_fused.test | 10 | 0.000790s | 0.000824s | 0.000815s | byte equality observed |
| make_fused_function_object.test | 10 | 0.000825s | 0.000807s | 0.000839s | byte equality observed |
| make_fused_procedure.test | 10 | 0.000796s | 0.000796s | 0.000810s | byte equality observed |
| make_list.test | 10 | 0.000808s | 0.000812s | 0.000792s | byte equality observed |
| make_unfused.test | 10 | 0.000818s | 0.000838s | 0.000818s | byte equality observed |
| make_vector.test | 10 | 0.000816s | 0.000818s | 0.000775s | byte equality observed |
| map.test | 10 | 0.000823s | 0.000847s | 0.000807s | byte equality observed |
| map_comparison.test | 10 | 0.000821s | 0.000803s | 0.000794s | byte equality observed |
| map_construction.test | 10 | 0.000824s | 0.000808s | 0.000818s | byte equality observed |
| map_copy.test | 10 | 0.000829s | 0.000805s | 0.000807s | byte equality observed |
| map_misc.test | 10 | 0.000792s | 0.000800s | 0.000814s | byte equality observed |
| map_move.test | 10 | 0.000817s | 0.000796s | 0.000809s | byte equality observed |
| map_mutate.test | 10 | 0.000834s | 0.000827s | 0.000818s | byte equality observed |
| map_tie.test | 10 | 0.000823s | 0.000812s | 0.000829s | byte equality observed |
| move.test | 10 | 0.000838s | 0.000818s | 0.000794s | byte equality observed |
| nil.test | 10 | 0.000816s | 0.000789s | 0.000804s | byte equality observed |
| none.test | 10 | 0.000822s | 0.000812s | 0.000821s | byte equality observed |
| nview.test | 10 | 0.000809s | 0.000843s | 0.000822s | byte equality observed |
| pop_back.test | 10 | 0.000823s | 0.000841s | 0.000869s | byte equality observed |
| pop_front.test | 10 | 0.000838s | 0.000838s | 0.000829s | byte equality observed |
| push_back.test | 10 | 0.000855s | 0.000834s | 0.000829s | byte equality observed |
| push_front.test | 10 | 0.000849s | 0.000838s | 0.000838s | byte equality observed |
| quick.test | 10 | 0.000364s | 0.000791s | 0.000779s | byte equality observed |
| ref_vector.test | 10 | 0.000833s | 0.000806s | 0.000815s | byte equality observed |
| remove.test | 10 | 0.000835s | 0.000830s | 0.000834s | byte equality observed |
| remove_if.test | 10 | 0.000848s | 0.000856s | 0.000835s | byte equality observed |
| repetitive_view.test | 10 | 0.000809s | 0.000798s | 0.000797s | byte equality observed |
| replace.test | 10 | 0.000822s | 0.000824s | 0.000812s | byte equality observed |
| replace_if.test | 10 | 0.000861s | 0.000840s | 0.000863s | byte equality observed |
| reverse.test | 10 | 0.000841s | 0.000820s | 0.000888s | byte equality observed |
| reverse_fold.test | 10 | 0.000832s | 0.000808s | 0.000818s | byte equality observed |
| reverse_iter_fold.test | 10 | 0.000849s | 0.000847s | 0.000818s | byte equality observed |
| reverse_view.test | 10 | 0.000847s | 0.000838s | 0.000836s | byte equality observed |
| segmented_find.test | 10 | 0.000836s | 0.000823s | 0.000811s | byte equality observed |
| segmented_find_if.test | 10 | 0.000803s | 0.000824s | 0.000780s | byte equality observed |
| segmented_fold.test | 10 | 0.000837s | 0.000820s | 0.000827s | byte equality observed |
| segmented_for_each.test | 10 | 0.000847s | 0.000820s | 0.000819s | byte equality observed |
| segmented_iterator_range.test | 10 | 0.000848s | 0.000842s | 0.000841s | byte equality observed |
| set.test | 10 | 0.000834s | 0.000845s | 0.000833s | byte equality observed |
| single_view.test | 10 | 0.000820s | 0.000845s | 0.000833s | byte equality observed |
| std_array.test | 10 | 0.000816s | 0.000825s | 0.000793s | byte equality observed |
| std_pair.test | 10 | 0.000861s | 0.000813s | 0.000833s | byte equality observed |
| std_tuple.test | 10 | 0.000826s | 0.000849s | 0.000795s | byte equality observed |
| std_tuple_iterator.test | 10 | 0.000808s | 0.000793s | 0.000792s | byte equality observed |
| swap.test | 10 | 0.000829s | 0.000813s | 0.000804s | byte equality observed |
| transform.test | 10 | 0.000858s | 0.000847s | 0.000824s | byte equality observed |
| transform_view.test | 10 | 0.000845s | 0.000843s | 0.000836s | byte equality observed |
| tuple_comparison.test | 10 | 0.000821s | 0.000827s | 0.000813s | byte equality observed |
| tuple_construction.test | 10 | 0.000808s | 0.000815s | 0.000844s | byte equality observed |
| tuple_conversion.test | 10 | 0.000803s | 0.000841s | 0.000814s | byte equality observed |
| tuple_copy.test | 10 | 0.000801s | 0.000789s | 0.000810s | byte equality observed |
| tuple_element.test | 10 | 0.000830s | 0.000802s | 0.000830s | byte equality observed |
| tuple_hash.test | 10 | 0.000811s | 0.000810s | 0.000816s | byte equality observed |
| tuple_make.test | 10 | 0.000810s | 0.000796s | 0.000800s | byte equality observed |
| tuple_misc.test | 10 | 0.000797s | 0.000820s | 0.000814s | byte equality observed |
| tuple_mutate.test | 10 | 0.000800s | 0.000806s | 0.000813s | byte equality observed |
| tuple_nest.test | 10 | 0.000811s | 0.000807s | 0.000802s | byte equality observed |
| tuple_tie.test | 10 | 0.000810s | 0.000804s | 0.000811s | byte equality observed |
| tuple_traits__maybe_variadic.test | 10 | 0.000832s | 0.000802s | 0.000812s | byte equality observed |
| tuple_traits__no_variadic.test | 10 | 0.000813s | 0.000824s | 0.000811s | byte equality observed |
| unfused.test | 10 | 0.000803s | 0.000831s | 0.000805s | byte equality observed |
| unfused_typed.test | 10 | 0.000816s | 0.000853s | 0.000810s | byte equality observed |
| vector_comparison.test | 10 | 0.000805s | 0.000847s | 0.000819s | byte equality observed |
| vector_construction.test | 10 | 0.000828s | 0.000815s | 0.000827s | byte equality observed |
| vector_conversion.test | 10 | 0.000844s | 0.000826s | 0.000793s | byte equality observed |
| vector_copy.test | 10 | 0.000818s | 0.000837s | 0.000803s | byte equality observed |
| vector_hash.test | 10 | 0.000809s | 0.000821s | 0.000835s | byte equality observed |
| vector_iterator.test | 10 | 0.000805s | 0.000815s | 0.000843s | byte equality observed |
| vector_make.test | 10 | 0.000816s | 0.000824s | 0.000847s | byte equality observed |
| vector_misc.test | 10 | 0.000815s | 0.000789s | 0.000795s | byte equality observed |
| vector_move.test | 10 | 0.000816s | 0.000830s | 0.000810s | byte equality observed |
| vector_mutate.test | 10 | 0.000836s | 0.000813s | 0.000804s | byte equality observed |
| vector_n.test | 10 | 0.000807s | 0.000817s | 0.000803s | byte equality observed |
| vector_nest.test | 10 | 0.000812s | 0.000837s | 0.000816s | byte equality observed |
| vector_tie.test | 10 | 0.000814s | 0.000805s | 0.000793s | byte equality observed |
| vector_traits__maybe_variadic.test | 10 | 0.000808s | 0.000804s | 0.000817s | byte equality observed |
| vector_traits__no_variadic.test | 10 | 0.000808s | 0.000809s | 0.000793s | byte equality observed |
| vector_value_at.test | 10 | 0.000806s | 0.000803s | 0.000806s | byte equality observed |
| zip.test | 10 | 0.000798s | 0.000814s | 0.000809s | byte equality observed |
| zip2.test | 10 | 0.000800s | 0.000807s | 0.000797s | byte equality observed |
| zip_ignore.test | 9 | 0.000838s | 0.000824s | 0.000784s | byte equality observed |
| zip_view.test | 10 | 0.000811s | 0.000819s | 0.000796s | byte equality observed |
| zip_view2.test | 10 | 0.000786s | 0.000824s | 0.000816s | byte equality observed |
| zip_view_ignore.test | 8 | 0.000794s | 0.000786s | 0.000819s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44560957980).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
