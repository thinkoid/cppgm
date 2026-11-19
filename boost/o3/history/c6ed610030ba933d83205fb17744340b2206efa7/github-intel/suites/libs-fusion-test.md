# libs/fusion/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| all.test | RUN | 0.282361 | 0.627349 | 0.805695 | 0.001047 | 0.001101 | 0.001109 |
| any.test | RUN | 0.273357 | 0.597187 | 0.764199 | 0.001158 | 0.001289 | 0.001169 |
| clear.test | RUN | 0.201070 | 0.555228 | 0.631136 | 0.001185 | 0.001179 | 0.001209 |
| copy.test | RUN | 0.168443 | 0.409181 | 0.509247 | 0.001276 | 0.001189 | 0.001174 |
| count.test | RUN | 0.189826 | 0.453332 | 0.573447 | 0.001344 | 0.001370 | 0.001146 |
| count_if.test | RUN | 0.177592 | 0.422536 | 0.524929 | 0.001111 | 0.001348 | 0.001190 |
| erase.test | RUN | 0.260774 | 0.767298 | 0.868021 | 0.001100 | 0.001273 | 0.001090 |
| erase_key.test | RUN | 0.252647 | 0.752434 | 0.812081 | 0.001298 | 0.001285 | 0.001466 |
| filter.test | RUN | 0.225726 | 0.640241 | 0.751730 | 0.001469 | 0.001531 | 0.001528 |
| filter_if.test | RUN | 0.256760 | 0.747211 | 0.881963 | 0.001397 | 0.001383 | 0.001379 |
| find.test | RUN | 0.219363 | 0.509449 | 0.670920 | 0.001196 | 0.001294 | 0.001198 |
| find_if.test | RUN | 0.206460 | 0.476369 | 0.607102 | 0.001117 | 0.001299 | 0.001424 |
| fold.test | RUN | 0.228275 | 0.590366 | 0.742091 | 0.001402 | 0.001333 | 0.001244 |
| for_each.test | RUN | 0.201020 | 0.532794 | 0.639894 | 0.001275 | 0.001294 | 0.001278 |
| insert.test | RUN | 0.303006 | 0.964266 | 1.051720 | 0.001163 | 0.001430 | 0.001386 |
| insert_range.test | RUN | 0.302034 | 0.955962 | 1.053826 | 0.001272 | 0.001275 | 0.001330 |
| iter_fold.test | RUN | 0.340474 | 0.895419 | 1.256342 | 0.001262 | 0.001404 | 0.001253 |
| move.test | RUN | 0.176623 | 0.422609 | 0.542821 | 0.001201 | 0.001324 | 0.001301 |
| none.test | RUN | 0.277193 | 0.611008 | 0.793019 | 0.001318 | 0.001308 | 0.001240 |
| pop_back.test | RUN | 0.287267 | 0.834077 | 0.928850 | 0.001151 | 0.001386 | 0.001218 |
| pop_front.test | RUN | 0.232570 | 0.666276 | 0.746004 | 0.001129 | 0.001523 | 0.001291 |
| push_back.test | RUN | 0.289125 | 0.960571 | 1.016696 | 0.001291 | 0.001457 | 0.001379 |
| push_front.test | RUN | 0.256862 | 0.791031 | 0.870437 | 0.001183 | 0.001265 | 0.001225 |
| remove.test | RUN | 0.286868 | 0.893018 | 1.006150 | 0.001202 | 0.001211 | 0.001305 |
| remove_if.test | RUN | 0.253459 | 0.760208 | 0.863721 | 0.001185 | 0.001313 | 0.001340 |
| replace.test | RUN | 0.252450 | 0.723815 | 0.804827 | 0.001100 | 0.001298 | 0.001536 |
| replace_if.test | RUN | 0.237654 | 0.719418 | 0.805207 | 0.001381 | 0.001321 | 0.001320 |
| reverse_fold.test | RUN | 0.367483 | 0.994201 | 1.396558 | 0.001322 | 0.001278 | 0.001190 |
| reverse_iter_fold.test | RUN | 0.374827 | 1.021081 | 1.463151 | 0.001165 | 0.001198 | 0.001469 |
| reverse.test | RUN | 0.244491 | 0.758004 | 0.817056 | 0.001177 | 0.001336 | 0.001232 |
| segmented_for_each.test | RUN | 0.412714 | 1.410692 | 1.669590 | 0.001396 | 0.001355 | 0.001162 |
| segmented_find.test | RUN | 0.260182 | 0.734120 | 0.933914 | 0.001428 | 0.001304 | 0.001288 |
| segmented_find_if.test | RUN | 0.259662 | 0.735405 | 0.922396 | 0.001151 | 0.001295 | 0.001324 |
| segmented_fold.test | RUN | 0.317302 | 0.982593 | 1.190403 | 0.001139 | 0.001354 | 0.001429 |
| transform.test | RUN | 0.261728 | 0.797420 | 0.862333 | 0.001304 | 0.001460 | 0.001282 |
| join.test | RUN | 0.187641 | 0.474531 | 0.607629 | 0.001233 | 0.001318 | 0.001249 |
| zip.test | RUN | 0.326176 | 0.899510 | 1.159098 | 0.001199 | 0.000952 | 0.001345 |
| zip2.test | RUN | 0.320174 | 0.848070 | 1.093903 | 0.001317 | 0.001178 | 0.001221 |
| zip_ignore.test | RUN | 0.248243 | 0.594653 | 0.732559 | 0.001082 | 0.001366 | 0.001056 |
| flatten.test | RUN | 0.229258 | 0.654863 | 0.751270 | 0.001195 | 0.001292 | 0.001413 |
| ticket-5490.test | COMPILE | 0.123340 | 0.284796 | 0.344206 | — | — | — |
| as_deque.test | RUN | 0.228839 | 0.616096 | 0.801388 | 0.001322 | 0.001297 | 0.001216 |
| as_list.test | RUN | 0.255380 | 0.781873 | 0.856283 | 0.001460 | 0.001286 | 0.001267 |
| as_map.test | RUN | 0.251462 | 0.756484 | 0.859032 | 0.001179 | 0.001472 | 0.001114 |
| as_map_assoc.test | RUN | 0.253316 | 0.712208 | 0.815244 | 0.001166 | 0.001352 | 0.001198 |
| as_set.test | RUN | 0.291353 | 0.889383 | 1.006449 | 0.001275 | 0.001425 | 0.001214 |
| as_vector.test | RUN | 0.258377 | 0.806745 | 0.882732 | 0.001121 | 0.001321 | 0.001263 |
| boost_tuple.test | RUN | 0.264038 | 0.767151 | 0.860703 | 0.001106 | 0.001223 | 0.001242 |
| boost_tuple_iterator.test | RUN | 0.175714 | 0.449427 | 0.512982 | 0.001332 | 0.001467 | 0.001231 |
| cons.test | RUN | 0.326466 | 0.880715 | 1.036505 | 0.001096 | 0.001270 | 0.001255 |
| convert_boost_tuple.test | RUN | 0.205699 | 0.667290 | 0.683579 | 0.001312 | 0.001426 | 0.001209 |
| convert_deque.test | RUN | 0.206404 | 0.665884 | 0.679488 | 0.001371 | 0.001193 | 0.001322 |
| convert_list.test | RUN | 0.205711 | 0.688084 | 0.691977 | 0.001057 | 0.001180 | 0.001256 |
| convert_std_pair.test | RUN | 0.216061 | 0.680786 | 0.705714 | 0.001402 | 0.001186 | 0.001123 |
| convert_std_tuple.test | RUN | 0.204561 | 0.669375 | 0.681426 | 0.001151 | 0.001219 | 0.001140 |
| convert_vector.test | RUN | 0.207971 | 0.664092 | 0.679708 | 0.001266 | 0.001121 | 0.001186 |
| filter_view.test | RUN | 0.248430 | 0.696223 | 0.808915 | 0.001153 | 0.001292 | 0.001300 |
| hash.test | RUN | 0.246487 | 0.633766 | 0.760715 | 0.001238 | 0.001244 | 0.001286 |
| io.test | RUN | 0.265203 | 0.910151 | 0.940676 | 0.001329 | 0.001502 | 0.001217 |
| iterator_range.test | RUN | 0.233931 | 0.675255 | 0.766337 | 0.001119 | 0.001362 | 0.001315 |
| joint_view.test | RUN | 0.320692 | 1.110312 | 1.167319 | 0.001264 | 0.001297 | 0.001281 |
| list_comparison.test | RUN | 0.179123 | 0.464606 | 0.556846 | 0.001198 | 0.001215 | 0.001046 |
| list_construction.test | RUN | 0.180617 | 0.433807 | 0.543620 | 0.001189 | 0.001216 | 0.001121 |
| list_copy.test | RUN | 0.275512 | 0.829500 | 0.961524 | 0.001428 | 0.001261 | 0.001352 |
| list_iterator.test | RUN | 0.180759 | 0.453486 | 0.536149 | 0.001212 | 0.001401 | 0.001132 |
| list_hash.test | RUN | 0.242997 | 0.922232 | 0.774080 | 0.001203 | 0.001323 | 0.001282 |
| list_make.test | RUN | 0.189637 | 0.492052 | 0.594032 | 0.001438 | 0.001225 | 0.001200 |
| list_misc.test | RUN | 0.238280 | 0.591725 | 0.720629 | 0.001141 | 0.001280 | 0.001242 |
| list_mutate.test | RUN | 0.165718 | 0.398828 | 0.478763 | 0.001148 | 0.001243 | 0.001432 |
| list_nest.test | RUN | 0.338755 | 1.133323 | 1.339631 | 0.001162 | 0.001244 | 0.001198 |
| list_tie.test | RUN | 0.178805 | 0.452481 | 0.535172 | 0.001137 | 0.001364 | 0.001314 |
| list_value_at.test | RUN | 0.174212 | 0.409470 | 0.522830 | 0.001207 | 0.001292 | 0.001289 |
| deque_comparison.test | RUN | 0.180053 | 0.464191 | 0.549540 | 0.001158 | 0.001294 | 0.001167 |
| deque_construction.test | RUN | 0.183642 | 0.437198 | 0.555028 | 0.001262 | 0.001423 | 0.001262 |
| deque_copy.test | RUN | 0.260184 | 0.777467 | 0.892942 | 0.001341 | 0.001268 | 0.001449 |
| deque_iterator.test | RUN | 0.175908 | 0.470460 | 0.528443 | 0.001291 | 0.001346 | 0.001320 |
| deque_hash.test | RUN | 0.246198 | 0.897768 | 0.782727 | 0.001137 | 0.001449 | 0.001263 |
| deque_is_constructible.test | COMPILE | 0.101179 | 0.202420 | 0.249076 | — | — | — |
| deque_make.test | RUN | 0.184409 | 0.466674 | 0.567611 | 0.001269 | 0.001362 | 0.001262 |
| deque_misc.test | RUN | 0.235650 | 0.583659 | 0.705663 | 0.000993 | 0.001238 | 0.001340 |
| deque_move.test | RUN | 0.181704 | 0.491630 | 0.546918 | 0.001093 | 0.001233 | 0.001318 |
| deque_mutate.test | RUN | 0.166902 | 0.386695 | 0.476580 | 0.001298 | 0.001367 | 0.001200 |
| deque_nest.test | RUN | 0.508482 | 1.840711 | 2.139990 | 0.001158 | 0.001278 | 0.001104 |
| deque_tie.test | RUN | 0.172453 | 0.413116 | 0.505041 | 0.001233 | 0.001258 | 0.001273 |
| deque_value_at.test | RUN | 0.165300 | 0.415423 | 0.502637 | 0.001279 | 0.001364 | 0.001206 |
| front_extended_deque.test | RUN | 0.244344 | 0.597512 | 0.737819 | 0.001100 | 0.001414 | 0.001365 |
| back_extended_deque.test | RUN | 0.248350 | 0.606927 | 0.734148 | 0.001268 | 0.001398 | 0.001256 |
| make_list.test | RUN | 0.188312 | 0.492408 | 0.603367 | 0.001176 | 0.001183 | 0.001176 |
| make_vector.test | RUN | 0.187712 | 0.486732 | 0.556737 | 0.001158 | 0.001314 | 0.001178 |
| map.test | RUN | 0.248248 | 0.769095 | 0.844135 | 0.001291 | 0.001367 | 0.001020 |
| map_comparison.test | RUN | 0.183658 | 0.478269 | 0.552192 | 0.001187 | 0.001364 | 0.001480 |
| map_construction.test | RUN | 0.183605 | 0.466163 | 0.560426 | 0.001230 | 0.001202 | 0.001189 |
| map_copy.test | RUN | 0.218012 | 0.585893 | 0.687217 | 0.001094 | 0.001331 | 0.001184 |
| map_misc.test | RUN | 0.238690 | 0.600872 | 0.685675 | 0.001106 | 0.001269 | 0.001097 |
| map_move.test | RUN | 0.184142 | 0.496270 | 0.561068 | 0.001321 | 0.001225 | 0.001336 |
| map_mutate.test | RUN | 0.169195 | 0.404440 | 0.478683 | 0.001149 | 0.001326 | 0.001293 |
| map_tie.test | RUN | 0.174678 | 0.398682 | 0.492835 | 0.001076 | 0.001232 | 0.001263 |
| nil.test | RUN | 0.116951 | 0.286065 | 0.329793 | 0.001400 | 0.001272 | 0.001376 |
| nview.test | RUN | 0.227651 | 0.585826 | 0.708427 | 0.001170 | 0.001405 | 0.001236 |
| reverse_view.test | RUN | 0.312821 | 0.979943 | 1.062640 | 0.001234 | 0.001278 | 0.001230 |
| segmented_iterator_range.test | RUN | 0.345736 | 1.154483 | 1.339726 | 0.001149 | 0.001361 | 0.001148 |
| set.test | RUN | 0.228163 | 0.659919 | 0.737920 | 0.001229 | 0.001499 | 0.001466 |
| single_view.test | RUN | 0.204061 | 0.601996 | 0.676839 | 0.001276 | 0.001339 | 0.001290 |
| std_pair.test | RUN | 0.272389 | 0.770960 | 0.877064 | 0.001203 | 0.001348 | 0.001265 |
| boost_array.test | RUN | 0.216669 | 0.524312 | 0.640171 | 0.001064 | 0.001418 | 0.001376 |
| array.test | RUN | 0.221827 | 0.531195 | 0.639464 | 0.001090 | 0.001457 | 0.001198 |
| std_array.test | RUN | 0.222247 | 0.517026 | 0.627369 | 0.001210 | 0.001294 | 0.001160 |
| tuple_comparison.test | RUN | 0.198220 | 0.503461 | 0.591862 | 0.001211 | 0.001455 | 0.001285 |
| tuple_construction.test | RUN | 0.195808 | 0.504633 | 0.602224 | 0.001164 | 0.001373 | 0.001238 |
| tuple_conversion.test | RUN | 0.445982 | 1.581276 | 1.976677 | 0.001179 | 0.001173 | 0.001129 |
| tuple_copy.test | RUN | 0.290037 | 0.892937 | 1.038854 | 0.001122 | 0.001345 | 0.001211 |
| tuple_element.test | RUN | 0.181904 | 0.451451 | 0.568148 | 0.001281 | 0.000966 | 0.001090 |
| tuple_make.test | RUN | 0.199133 | 0.517689 | 0.606477 | 0.001005 | 0.001410 | 0.001237 |
| tuple_misc.test | RUN | 0.250614 | 0.631204 | 0.784712 | 0.001347 | 0.001391 | 0.001203 |
| tuple_mutate.test | RUN | 0.172801 | 0.422055 | 0.513337 | 0.001394 | 0.001449 | 0.001400 |
| tuple_nest.test | RUN | 0.744377 | 3.242316 | 3.733494 | 0.001084 | 0.001406 | 0.001296 |
| tuple_hash.test | RUN | 0.252014 | 0.950822 | 0.803349 | 0.001181 | 0.001420 | 0.001190 |
| tuple_tie.test | RUN | 0.187147 | 0.456367 | 0.555815 | 0.001345 | 0.001333 | 0.001119 |
| tuple_traits__maybe_variadic.test | RUN | 0.199262 | 0.566303 | 0.595418 | 0.001131 | 0.001506 | 0.001342 |
| tuple_traits__no_variadic.test | RUN | 0.228740 | 0.596695 | 0.640115 | 0.001144 | 0.001554 | 0.001347 |
| transform_view.test | RUN | 0.302225 | 0.986520 | 1.058234 | 0.001353 | 0.001405 | 0.001310 |
| identity_view.test | RUN | 0.286075 | 0.908730 | 1.003252 | 0.001271 | 0.001273 | 0.001358 |
| vector_comparison.test | RUN | 0.182838 | 0.476034 | 0.566798 | 0.001277 | 0.001172 | 0.001387 |
| vector_construction.test | RUN | 0.184965 | 0.443916 | 0.599685 | 0.001104 | 0.001300 | 0.001410 |
| vector_conversion.test | RUN | 0.525687 | 2.084037 | 2.531574 | 0.001277 | 0.001384 | 0.001394 |
| vector_copy.test | RUN | 0.277899 | 0.893176 | 1.022509 | 0.001086 | 0.001270 | 0.001376 |
| vector_iterator.test | RUN | 0.173128 | 0.464688 | 0.524343 | 0.001223 | 0.001235 | 0.001344 |
| vector_make.test | RUN | 0.187639 | 0.490983 | 0.570259 | 0.001122 | 0.001326 | 0.001317 |
| vector_misc.test | RUN | 0.235983 | 0.619616 | 0.710691 | 0.001136 | 0.001346 | 0.001227 |
| vector_move.test | RUN | 0.187830 | 0.492322 | 0.575788 | 0.001131 | 0.001361 | 0.001328 |
| vector_mutate.test | RUN | 0.163774 | 0.398846 | 0.475544 | 0.001180 | 0.001272 | 0.001369 |
| vector_n.test | RUN | 0.200356 | 0.511657 | 0.653385 | 0.001288 | 0.001526 | 0.001292 |
| vector_nest.test | RUN | 0.749352 | 3.392317 | 3.817948 | 0.001109 | 0.001113 | 0.001451 |
| vector_hash.test | RUN | 0.243924 | 0.932410 | 0.774796 | 0.001138 | 0.001294 | 0.001208 |
| vector_tie.test | RUN | 0.175130 | 0.438048 | 0.528343 | 0.001098 | 0.001549 | 0.001387 |
| vector_traits__maybe_variadic.test | RUN | 0.183283 | 0.526641 | 0.539813 | 0.001251 | 0.001405 | 0.001422 |
| vector_traits__no_variadic.test | RUN | 0.208971 | 0.553502 | 0.597120 | 0.001150 | 0.001352 | 0.001157 |
| vector_value_at.test | RUN | 0.167254 | 0.392745 | 0.499192 | 0.001160 | 0.001359 | 0.001403 |
| zip_view.test | RUN | 0.339839 | 1.007947 | 1.302197 | 0.001404 | 0.001192 | 0.001217 |
| zip_view2.test | RUN | 0.280366 | 0.768896 | 0.967288 | 0.001117 | 0.001257 | 0.001292 |
| zip_view_ignore.test | RUN | 0.258700 | 0.703424 | 0.863562 | 0.001184 | 0.001257 | 0.001393 |
| repetitive_view.test | RUN | 0.448144 | 1.305431 | 1.679063 | 0.001156 | 0.001313 | 0.001251 |
| deduce_sequence.test | RUN | 0.208909 | 0.545341 | 0.661383 | 0.001228 | 0.001462 | 0.001441 |
| adapt_adt_named.test | RUN | 0.259437 | 0.780286 | 0.900090 | 0.001153 | 0.001334 | 0.001246 |
| adapt_adt_named_empty.test | RUN | 0.233172 | 0.636596 | 0.696976 | 0.001347 | 0.001220 | 0.001263 |
| adapt_adt.test | RUN | 0.292695 | 1.025337 | 1.036170 | 0.001210 | 0.001342 | 0.001224 |
| adapt_adt_empty.test | RUN | 0.220203 | 0.632839 | 0.688594 | 0.001262 | 0.001352 | 0.001166 |
| adapt_assoc_adt_named.test | RUN | 0.292781 | 0.805354 | 0.920065 | 0.001107 | 0.001363 | 0.001418 |
| adapt_assoc_adt_named_empty.test | RUN | 0.225743 | 0.628851 | 0.701636 | 0.001243 | 0.001421 | 0.001246 |
| adapt_assoc_adt.test | RUN | 0.295775 | 0.842064 | 0.968457 | 0.001194 | 0.001318 | 0.001141 |
| adapt_assoc_adt_empty.test | RUN | 0.222019 | 0.631072 | 0.693803 | 0.001237 | 0.001198 | 0.001272 |
| adapt_assoc_struct_named.test | RUN | 0.282792 | 0.805740 | 0.902291 | 0.001197 | 0.001408 | 0.001174 |
| adapt_assoc_struct_named_empty.test | RUN | 0.222530 | 0.624698 | 0.685552 | 0.001119 | 0.001496 | 0.001235 |
| adapt_assoc_struct.test | RUN | 0.254565 | 0.753052 | 0.851320 | 0.001156 | 0.001312 | 0.001198 |
| adapt_assoc_struct_empty.test | RUN | 0.221747 | 0.630282 | 0.700211 | 0.001155 | 0.001350 | 0.001289 |
| adapt_assoc_tpl_adt.test | RUN | 0.306205 | 0.853827 | 0.992269 | 0.001112 | 0.001355 | 0.001424 |
| adapt_assoc_tpl_adt_empty.test | RUN | 0.222356 | 0.627015 | 0.693086 | 0.001150 | 0.001408 | 0.001262 |
| adapt_assoc_tpl_struct.test | RUN | 0.247387 | 0.736367 | 0.830461 | 0.001176 | 0.000984 | 0.001248 |
| adapt_assoc_tpl_struct_empty.test | RUN | 0.223096 | 0.631745 | 0.697411 | 0.001229 | 0.001347 | 0.001216 |
| adapt_struct_named.test | RUN | 0.250640 | 0.762350 | 0.839980 | 0.001166 | 0.001191 | 0.001323 |
| adapt_struct_named_empty.test | RUN | 0.227432 | 0.625985 | 0.692634 | 0.001208 | 0.001247 | 0.001333 |
| adapt_struct.test | RUN | 0.280179 | 0.866202 | 0.960300 | 0.001303 | 0.001413 | 0.001276 |
| adapt_struct_empty.test | RUN | 0.226652 | 0.630599 | 0.695555 | 0.001225 | 0.001291 | 0.001334 |
| adapt_tpl_adt.test | RUN | 0.285737 | 1.000180 | 1.002217 | 0.001179 | 0.001342 | 0.001091 |
| adapt_tpl_adt_empty.test | RUN | 0.230225 | 0.631351 | 0.694053 | 0.001137 | 0.001272 | 0.001206 |
| adapt_tpl_struct.test | RUN | 0.238317 | 0.689287 | 0.762226 | 0.001317 | 0.001400 | 0.001286 |
| adapt_tpl_struct_empty.test | RUN | 0.221705 | 0.634163 | 0.707355 | 0.001455 | 0.001384 | 0.001225 |
| adt_attribute_proxy.test | RUN | 0.254729 | 0.614454 | 0.730733 | 0.001198 | 0.001503 | 0.001224 |
| define_struct.test | RUN | 0.311266 | 0.860788 | 0.973124 | 0.001127 | 0.001250 | 0.001166 |
| define_struct_empty.test | RUN | 0.266399 | 0.697773 | 0.801573 | 0.001221 | 0.001607 | 0.001266 |
| define_struct_move.test | RUN | 0.174167 | 0.402691 | 0.470366 | 0.001167 | 0.001230 | 0.001223 |
| define_struct_inline.test | RUN | 0.333108 | 1.031436 | 1.095414 | 0.001137 | 0.001377 | 0.001232 |
| define_struct_inline_empty.test | RUN | 0.270895 | 0.720723 | 0.806106 | 0.001275 | 0.001205 | 0.001286 |
| define_struct_inline_move.test | RUN | 0.176820 | 0.387762 | 0.483117 | 0.001140 | 0.001414 | 0.001352 |
| define_assoc_struct.test | RUN | 0.294956 | 0.813978 | 0.933180 | 0.001221 | 0.001443 | 0.001213 |
| define_assoc_struct_empty.test | RUN | 0.270841 | 0.694238 | 0.807355 | 0.001138 | 0.001312 | 0.001252 |
| define_assoc_struct_move.test | RUN | 0.167123 | 0.385905 | 0.474676 | 0.001196 | 0.001491 | 0.001230 |
| define_tpl_struct.test | RUN | 0.300201 | 0.821704 | 0.926787 | 0.001318 | 0.001235 | 0.001234 |
| define_tpl_struct_empty.test | RUN | 0.272507 | 0.694016 | 0.804103 | 0.001286 | 0.001386 | 0.001193 |
| define_tpl_struct_move.test | RUN | 0.170829 | 0.396099 | 0.476609 | 0.001140 | 0.001275 | 0.001154 |
| define_tpl_struct_inline.test | RUN | 0.309227 | 0.955301 | 1.016490 | 0.001322 | 0.001290 | 0.001282 |
| define_tpl_struct_inline_empty.test | RUN | 0.267044 | 0.702991 | 0.794070 | 0.001203 | 0.001270 | 0.001264 |
| define_tpl_struct_inline_move.test | RUN | 0.164082 | 0.396966 | 0.496397 | 0.001117 | 0.001289 | 0.001296 |
| define_assoc_tpl_struct.test | RUN | 0.296833 | 0.822876 | 0.945258 | 0.001308 | 0.001310 | 0.001284 |
| define_assoc_tpl_struct_empty.test | RUN | 0.268554 | 0.702003 | 0.817400 | 0.001066 | 0.001406 | 0.001295 |
| define_assoc_tpl_struct_move.test | RUN | 0.169251 | 0.391918 | 0.478895 | 0.001064 | 0.001317 | 0.001372 |
| std_tuple.test | RUN | 0.172526 | 0.449172 | 0.542547 | 0.001279 | 0.001285 | 0.001313 |
| std_tuple_iterator.test | RUN | 0.164373 | 0.472121 | 0.544297 | 0.001142 | 0.001471 | 0.001277 |
| ref_vector.test | RUN | 0.197150 | 0.472950 | 0.573660 | 0.001318 | 0.001333 | 0.001420 |
| flatten_view.test | RUN | 0.209114 | 0.602199 | 0.698712 | 0.001151 | 0.001291 | 0.001492 |
| github-159.test | COMPILE | 0.097629 | 0.213591 | 0.250811 | — | — | — |
| github-176.test | RUN | 0.195771 | 0.525562 | 0.591691 | 0.000995 | 0.001285 | 0.001256 |
| size.test | COMPILE | 0.161035 | 0.373585 | 0.458418 | — | — | — |
| fused.test | RUN | 0.230713 | 0.555312 | 0.685286 | 0.001254 | 0.001328 | 0.001302 |
| fused_function_object.test | RUN | 0.175363 | 0.420939 | 0.510630 | 0.001404 | 0.001266 | 0.001388 |
| fused_procedure.test | RUN | 0.218488 | 0.537144 | 0.648513 | 0.001089 | 0.001388 | 0.001274 |
| unfused.test | RUN | 0.184451 | 0.439152 | 0.532848 | 0.001021 | 0.001408 | 0.001306 |
| unfused_typed.test | RUN | 0.179745 | 0.470382 | 0.553244 | 0.001250 | 0.001508 | 0.001369 |
| make_fused.test | RUN | 0.229928 | 0.562676 | 0.670881 | 0.001088 | 0.001259 | 0.001345 |
| make_fused_function_object.test | RUN | 0.168929 | 0.423056 | 0.515068 | 0.001142 | 0.001198 | 0.001257 |
| make_fused_procedure.test | RUN | 0.227365 | 0.541069 | 0.653132 | 0.001155 | 0.001260 | 0.001412 |
| make_unfused.test | RUN | 0.179713 | 0.424591 | 0.531485 | 0.001169 | 0.001302 | 0.001257 |
| invoke.test | RUN | 0.451552 | 1.566551 | 1.834722 | 0.001082 | 0.001362 | 0.001216 |
| invoke_function_object.test | RUN | 0.215401 | 0.565316 | 0.677134 | 0.001189 | 0.001315 | 0.001302 |
| invoke_procedure.test | RUN | 0.361344 | 1.162837 | 1.369946 | 0.001050 | 0.001465 | 0.001310 |
| swap.test | RUN | 0.275105 | 0.709804 | 0.865955 | 0.001031 | 0.001357 | 0.001487 |
| is_sequence.test | COMPILE | 0.045846 | 0.096657 | 0.105136 | — | — | — |
| is_view.test | COMPILE | 0.045862 | 0.095115 | 0.106634 | — | — | — |
| pair_deque.test | COMPILE | 0.100647 | 0.223089 | 0.277962 | — | — | — |
| pair_list.test | COMPILE | 0.095149 | 0.219224 | 0.278846 | — | — | — |
| pair_map.test | COMPILE | 0.099533 | 0.228432 | 0.261891 | — | — | — |
| pair_set.test | COMPILE | 0.100805 | 0.228037 | 0.271276 | — | — | — |
| pair_vector.test | COMPILE | 0.096797 | 0.214840 | 0.259891 | — | — | — |
| pair_nest.test | COMPILE | 0.038667 | 0.093913 | 0.102937 | — | — | — |
| index_sequence.test | COMPILE | 0.033845 | 0.061581 | 0.075706 | — | — | — |
| and.test | COMPILE | 0.025743 | 0.047004 | 0.056429 | — | — | — |
| tag_of.test | COMPILE | 0.043849 | 0.094278 | 0.104493 | — | — | — |
| unused.test | COMPILE | 0.022961 | 0.060076 | 0.065923 | — | — | — |
| tag_of_fallback.test | COMPILE | 0.044212 | 0.094347 | 0.102018 | — | — | — |
| make_pair_r-value.test | COMPILE | 0.025498 | 0.067958 | 0.085174 | — | — | — |
| quick.test | RUN | 0.129653 | 0.305717 | 0.336754 | 0.000374 | 0.000925 | 0.000883 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.998× | 0.992×, 1.003× | 1.003× |
| clang | 0.999× | 0.996×, 1.002× | 0.999× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1364 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44481767416).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| adapt_adt.test | 10 | 0.000821s | 0.000845s | 0.000806s | byte equality observed |
| adapt_adt_empty.test | 10 | 0.000811s | 0.000829s | 0.000816s | byte equality observed |
| adapt_adt_named.test | 10 | 0.000843s | 0.000816s | 0.000820s | byte equality observed |
| adapt_adt_named_empty.test | 10 | 0.000851s | 0.000816s | 0.000834s | byte equality observed |
| adapt_assoc_adt.test | 10 | 0.000848s | 0.000832s | 0.000833s | byte equality observed |
| adapt_assoc_adt_empty.test | 10 | 0.000825s | 0.000828s | 0.000817s | byte equality observed |
| adapt_assoc_adt_named.test | 10 | 0.000849s | 0.000844s | 0.000803s | byte equality observed |
| adapt_assoc_adt_named_empty.test | 10 | 0.000816s | 0.000829s | 0.000831s | byte equality observed |
| adapt_assoc_struct.test | 10 | 0.000821s | 0.000841s | 0.000817s | byte equality observed |
| adapt_assoc_struct_empty.test | 10 | 0.000823s | 0.000807s | 0.000819s | byte equality observed |
| adapt_assoc_struct_named.test | 10 | 0.000824s | 0.000824s | 0.000814s | byte equality observed |
| adapt_assoc_struct_named_empty.test | 10 | 0.000830s | 0.000838s | 0.000804s | byte equality observed |
| adapt_assoc_tpl_adt.test | 10 | 0.000826s | 0.000826s | 0.000847s | byte equality observed |
| adapt_assoc_tpl_adt_empty.test | 10 | 0.000831s | 0.000810s | 0.000852s | byte equality observed |
| adapt_assoc_tpl_struct.test | 10 | 0.000855s | 0.000832s | 0.000864s | byte equality observed |
| adapt_assoc_tpl_struct_empty.test | 10 | 0.000815s | 0.000823s | 0.000853s | byte equality observed |
| adapt_struct.test | 10 | 0.000842s | 0.000815s | 0.000830s | byte equality observed |
| adapt_struct_empty.test | 10 | 0.000828s | 0.000807s | 0.000826s | byte equality observed |
| adapt_struct_named.test | 10 | 0.000832s | 0.000803s | 0.000830s | byte equality observed |
| adapt_struct_named_empty.test | 10 | 0.000826s | 0.000835s | 0.000830s | byte equality observed |
| adapt_tpl_adt.test | 10 | 0.000826s | 0.000797s | 0.000823s | byte equality observed |
| adapt_tpl_adt_empty.test | 10 | 0.000831s | 0.000815s | 0.000814s | byte equality observed |
| adapt_tpl_struct.test | 10 | 0.000841s | 0.000799s | 0.000827s | byte equality observed |
| adapt_tpl_struct_empty.test | 10 | 0.000833s | 0.000804s | 0.000830s | byte equality observed |
| adt_attribute_proxy.test | 10 | 0.000859s | 0.000809s | 0.000842s | byte equality observed |
| all.test | 10 | 0.000821s | 0.000787s | 0.000805s | byte equality observed |
| any.test | 10 | 0.000826s | 0.000786s | 0.000796s | byte equality observed |
| array.test | 10 | 0.000810s | 0.000809s | 0.000787s | byte equality observed |
| as_deque.test | 10 | 0.000816s | 0.000842s | 0.000822s | byte equality observed |
| as_list.test | 5 | 0.000819s | 0.000824s | 0.000857s | byte equality observed |
| as_map.test | 10 | 0.000840s | 0.000827s | 0.000820s | byte equality observed |
| as_map_assoc.test | 10 | 0.000838s | 0.000820s | 0.000816s | byte equality observed |
| as_set.test | 10 | 0.000857s | 0.000825s | 0.000813s | byte equality observed |
| as_vector.test | 10 | 0.000858s | 0.000805s | 0.000832s | byte equality observed |
| back_extended_deque.test | 10 | 0.000805s | 0.000780s | 0.000839s | byte equality observed |
| boost_array.test | 10 | 0.000812s | 0.000821s | 0.000794s | byte equality observed |
| boost_tuple.test | 10 | 0.000820s | 0.000828s | 0.000810s | byte equality observed |
| boost_tuple_iterator.test | 10 | 0.000818s | 0.000801s | 0.000804s | byte equality observed |
| clear.test | 10 | 0.000807s | 0.000843s | 0.000795s | byte equality observed |
| cons.test | 10 | 0.000825s | 0.000830s | 0.000848s | byte equality observed |
| convert_boost_tuple.test | 10 | 0.000814s | 0.000790s | 0.000844s | byte equality observed |
| convert_deque.test | 10 | 0.000805s | 0.000826s | 0.000813s | byte equality observed |
| convert_list.test | 10 | 0.000842s | 0.000850s | 0.000824s | byte equality observed |
| convert_std_pair.test | 10 | 0.000818s | 0.000815s | 0.000806s | byte equality observed |
| convert_std_tuple.test | 10 | 0.000806s | 0.000783s | 0.000847s | byte equality observed |
| convert_vector.test | 10 | 0.000801s | 0.000823s | 0.000824s | byte equality observed |
| copy.test | 10 | 0.000799s | 0.000802s | 0.000828s | byte equality observed |
| count.test | 10 | 0.000802s | 0.000823s | 0.000814s | byte equality observed |
| count_if.test | 10 | 0.000825s | 0.000792s | 0.000822s | byte equality observed |
| deduce_sequence.test | 10 | 0.000818s | 0.000793s | 0.000812s | byte equality observed |
| define_assoc_struct.test | 10 | 0.000834s | 0.000842s | 0.000818s | byte equality observed |
| define_assoc_struct_empty.test | 10 | 0.000841s | 0.000857s | 0.000837s | byte equality observed |
| define_assoc_struct_move.test | 10 | 0.000808s | 0.000835s | 0.000811s | byte equality observed |
| define_assoc_tpl_struct.test | 10 | 0.000812s | 0.000815s | 0.000813s | byte equality observed |
| define_assoc_tpl_struct_empty.test | 10 | 0.000822s | 0.000816s | 0.000820s | byte equality observed |
| define_assoc_tpl_struct_move.test | 10 | 0.000806s | 0.000801s | 0.000832s | byte equality observed |
| define_struct.test | 10 | 0.000820s | 0.000819s | 0.000820s | byte equality observed |
| define_struct_empty.test | 10 | 0.000813s | 0.000829s | 0.000818s | byte equality observed |
| define_struct_inline.test | 10 | 0.000831s | 0.000806s | 0.000813s | byte equality observed |
| define_struct_inline_empty.test | 10 | 0.000839s | 0.000827s | 0.000819s | byte equality observed |
| define_struct_inline_move.test | 10 | 0.000822s | 0.000809s | 0.000809s | byte equality observed |
| define_struct_move.test | 10 | 0.000826s | 0.000813s | 0.000822s | byte equality observed |
| define_tpl_struct.test | 10 | 0.000863s | 0.000826s | 0.000836s | byte equality observed |
| define_tpl_struct_empty.test | 10 | 0.000844s | 0.000817s | 0.000828s | byte equality observed |
| define_tpl_struct_inline.test | 10 | 0.000829s | 0.000846s | 0.000799s | byte equality observed |
| define_tpl_struct_inline_empty.test | 10 | 0.000813s | 0.000789s | 0.000815s | byte equality observed |
| define_tpl_struct_inline_move.test | 10 | 0.000805s | 0.000793s | 0.000783s | byte equality observed |
| define_tpl_struct_move.test | 10 | 0.000797s | 0.000799s | 0.000786s | byte equality observed |
| deque_comparison.test | 10 | 0.000806s | 0.000814s | 0.000824s | byte equality observed |
| deque_construction.test | 10 | 0.000799s | 0.000823s | 0.000808s | byte equality observed |
| deque_copy.test | 10 | 0.000810s | 0.000814s | 0.000812s | byte equality observed |
| deque_hash.test | 10 | 0.000817s | 0.000795s | 0.000805s | byte equality observed |
| deque_iterator.test | 10 | 0.000804s | 0.000817s | 0.000790s | byte equality observed |
| deque_make.test | 10 | 0.000798s | 0.000788s | 0.000826s | byte equality observed |
| deque_misc.test | 10 | 0.000814s | 0.000810s | 0.000803s | byte equality observed |
| deque_move.test | 10 | 0.000827s | 0.000830s | 0.000813s | byte equality observed |
| deque_mutate.test | 10 | 0.000813s | 0.000802s | 0.000808s | byte equality observed |
| deque_nest.test | 10 | 0.000816s | 0.000811s | 0.000790s | byte equality observed |
| deque_tie.test | 10 | 0.000811s | 0.000807s | 0.000803s | byte equality observed |
| deque_value_at.test | 10 | 0.000805s | 0.000827s | 0.000804s | byte equality observed |
| erase.test | 10 | 0.000811s | 0.000826s | 0.000819s | byte equality observed |
| erase_key.test | 10 | 0.000833s | 0.000827s | 0.000826s | byte equality observed |
| filter.test | 10 | 0.000842s | 0.000829s | 0.000821s | byte equality observed |
| filter_if.test | 10 | 0.000863s | 0.000870s | 0.000850s | byte equality observed |
| filter_view.test | 10 | 0.000838s | 0.000855s | 0.000844s | byte equality observed |
| find.test | 10 | 0.000836s | 0.000850s | 0.000811s | byte equality observed |
| find_if.test | 10 | 0.000836s | 0.000816s | 0.000810s | byte equality observed |
| flatten.test | 10 | 0.000836s | 0.000796s | 0.000822s | byte equality observed |
| flatten_view.test | 10 | 0.000842s | 0.000806s | 0.000820s | byte equality observed |
| fold.test | 10 | 0.000832s | 0.000803s | 0.000818s | byte equality observed |
| for_each.test | 10 | 0.000818s | 0.000801s | 0.000825s | byte equality observed |
| front_extended_deque.test | 10 | 0.000797s | 0.000806s | 0.000810s | byte equality observed |
| fused.test | 10 | 0.000790s | 0.000785s | 0.000827s | byte equality observed |
| fused_function_object.test | 10 | 0.000835s | 0.000809s | 0.000821s | byte equality observed |
| fused_procedure.test | 10 | 0.000805s | 0.000798s | 0.000824s | byte equality observed |
| github-176.test | 10 | 0.000796s | 0.000800s | 0.000830s | byte equality observed |
| hash.test | 10 | 0.000803s | 0.000817s | 0.000814s | byte equality observed |
| identity_view.test | 10 | 0.000822s | 0.000817s | 0.000827s | byte equality observed |
| insert.test | 10 | 0.000864s | 0.000841s | 0.000849s | byte equality observed |
| insert_range.test | 10 | 0.000855s | 0.000824s | 0.000848s | byte equality observed |
| invoke.test | 10 | 0.000820s | 0.000806s | 0.000828s | byte equality observed |
| invoke_function_object.test | 10 | 0.000817s | 0.000787s | 0.000797s | byte equality observed |
| invoke_procedure.test | 10 | 0.000810s | 0.000834s | 0.000808s | byte equality observed |
| io.test | 10 | 0.000903s | 0.000883s | 0.000916s | byte equality observed |
| iter_fold.test | 10 | 0.000824s | 0.000831s | 0.000830s | byte equality observed |
| iterator_range.test | 10 | 0.000816s | 0.000857s | 0.000851s | byte equality observed |
| join.test | 10 | 0.000798s | 0.000808s | 0.000830s | byte equality observed |
| joint_view.test | 10 | 0.000842s | 0.000833s | 0.000854s | byte equality observed |
| list_comparison.test | 10 | 0.000784s | 0.000820s | 0.000831s | byte equality observed |
| list_construction.test | 10 | 0.000793s | 0.000808s | 0.000826s | byte equality observed |
| list_copy.test | 10 | 0.000820s | 0.000818s | 0.000827s | byte equality observed |
| list_hash.test | 10 | 0.000815s | 0.000828s | 0.000832s | byte equality observed |
| list_iterator.test | 10 | 0.000800s | 0.000817s | 0.000817s | byte equality observed |
| list_make.test | 10 | 0.000816s | 0.000835s | 0.000801s | byte equality observed |
| list_misc.test | 10 | 0.000817s | 0.000817s | 0.000789s | byte equality observed |
| list_mutate.test | 10 | 0.000833s | 0.000824s | 0.000799s | byte equality observed |
| list_nest.test | 10 | 0.000799s | 0.000813s | 0.000791s | byte equality observed |
| list_tie.test | 10 | 0.000803s | 0.000813s | 0.000810s | byte equality observed |
| list_value_at.test | 10 | 0.000803s | 0.000800s | 0.000796s | byte equality observed |
| make_fused.test | 10 | 0.000799s | 0.000808s | 0.000795s | byte equality observed |
| make_fused_function_object.test | 10 | 0.000816s | 0.000822s | 0.000801s | byte equality observed |
| make_fused_procedure.test | 10 | 0.000785s | 0.000791s | 0.000829s | byte equality observed |
| make_list.test | 10 | 0.000806s | 0.000806s | 0.000818s | byte equality observed |
| make_unfused.test | 10 | 0.000800s | 0.000821s | 0.000820s | byte equality observed |
| make_vector.test | 10 | 0.000820s | 0.000802s | 0.000814s | byte equality observed |
| map.test | 10 | 0.000825s | 0.000834s | 0.000815s | byte equality observed |
| map_comparison.test | 10 | 0.000819s | 0.000825s | 0.000815s | byte equality observed |
| map_construction.test | 10 | 0.000798s | 0.000797s | 0.000839s | byte equality observed |
| map_copy.test | 10 | 0.000819s | 0.000818s | 0.000812s | byte equality observed |
| map_misc.test | 10 | 0.000798s | 0.000788s | 0.000806s | byte equality observed |
| map_move.test | 10 | 0.000828s | 0.000806s | 0.000796s | byte equality observed |
| map_mutate.test | 10 | 0.000847s | 0.000810s | 0.000781s | byte equality observed |
| map_tie.test | 10 | 0.000812s | 0.000823s | 0.000789s | byte equality observed |
| move.test | 10 | 0.000811s | 0.000820s | 0.000796s | byte equality observed |
| nil.test | 10 | 0.000811s | 0.000814s | 0.000797s | byte equality observed |
| none.test | 10 | 0.000797s | 0.000820s | 0.000771s | byte equality observed |
| nview.test | 10 | 0.000802s | 0.000795s | 0.000800s | byte equality observed |
| pop_back.test | 10 | 0.000830s | 0.000839s | 0.000821s | byte equality observed |
| pop_front.test | 10 | 0.000849s | 0.000837s | 0.000817s | byte equality observed |
| push_back.test | 10 | 0.000841s | 0.000821s | 0.000841s | byte equality observed |
| push_front.test | 10 | 0.000839s | 0.000824s | 0.000807s | byte equality observed |
| quick.test | 10 | 0.000358s | 0.000778s | 0.000778s | byte equality observed |
| ref_vector.test | 10 | 0.000809s | 0.000786s | 0.000813s | byte equality observed |
| remove.test | 10 | 0.000808s | 0.000823s | 0.000819s | byte equality observed |
| remove_if.test | 10 | 0.000828s | 0.000806s | 0.000814s | byte equality observed |
| repetitive_view.test | 10 | 0.000794s | 0.000817s | 0.000795s | byte equality observed |
| replace.test | 10 | 0.000807s | 0.000811s | 0.000819s | byte equality observed |
| replace_if.test | 10 | 0.000833s | 0.000854s | 0.000803s | byte equality observed |
| reverse.test | 10 | 0.000850s | 0.000857s | 0.000843s | byte equality observed |
| reverse_fold.test | 10 | 0.000829s | 0.000810s | 0.000840s | byte equality observed |
| reverse_iter_fold.test | 10 | 0.000816s | 0.000812s | 0.000816s | byte equality observed |
| reverse_view.test | 10 | 0.000848s | 0.000822s | 0.000838s | byte equality observed |
| segmented_find.test | 10 | 0.000812s | 0.000831s | 0.000848s | byte equality observed |
| segmented_find_if.test | 10 | 0.000805s | 0.000788s | 0.000847s | byte equality observed |
| segmented_fold.test | 10 | 0.000831s | 0.000827s | 0.000865s | byte equality observed |
| segmented_for_each.test | 10 | 0.000810s | 0.000836s | 0.000844s | byte equality observed |
| segmented_iterator_range.test | 10 | 0.000843s | 0.000825s | 0.000863s | byte equality observed |
| set.test | 10 | 0.000824s | 0.000803s | 0.000850s | byte equality observed |
| single_view.test | 10 | 0.000831s | 0.000816s | 0.000863s | byte equality observed |
| std_array.test | 10 | 0.000797s | 0.000789s | 0.000831s | byte equality observed |
| std_pair.test | 10 | 0.000820s | 0.000806s | 0.000813s | byte equality observed |
| std_tuple.test | 10 | 0.000805s | 0.000800s | 0.000804s | byte equality observed |
| std_tuple_iterator.test | 10 | 0.000811s | 0.000830s | 0.000795s | byte equality observed |
| swap.test | 10 | 0.000823s | 0.000850s | 0.000804s | byte equality observed |
| transform.test | 10 | 0.000815s | 0.000825s | 0.000825s | byte equality observed |
| transform_view.test | 10 | 0.000825s | 0.000841s | 0.000830s | byte equality observed |
| tuple_comparison.test | 10 | 0.000814s | 0.000825s | 0.000832s | byte equality observed |
| tuple_construction.test | 10 | 0.000803s | 0.000811s | 0.000805s | byte equality observed |
| tuple_conversion.test | 10 | 0.000792s | 0.000797s | 0.000798s | byte equality observed |
| tuple_copy.test | 10 | 0.000810s | 0.000799s | 0.000814s | byte equality observed |
| tuple_element.test | 10 | 0.000818s | 0.000798s | 0.000801s | byte equality observed |
| tuple_hash.test | 10 | 0.000824s | 0.000794s | 0.000817s | byte equality observed |
| tuple_make.test | 10 | 0.000813s | 0.000799s | 0.000803s | byte equality observed |
| tuple_misc.test | 10 | 0.000819s | 0.000804s | 0.000820s | byte equality observed |
| tuple_mutate.test | 10 | 0.000805s | 0.000788s | 0.000824s | byte equality observed |
| tuple_nest.test | 10 | 0.000813s | 0.000788s | 0.000820s | byte equality observed |
| tuple_tie.test | 10 | 0.000796s | 0.000797s | 0.000822s | byte equality observed |
| tuple_traits__maybe_variadic.test | 10 | 0.000799s | 0.000806s | 0.000820s | byte equality observed |
| tuple_traits__no_variadic.test | 10 | 0.000829s | 0.000780s | 0.000837s | byte equality observed |
| unfused.test | 10 | 0.000838s | 0.000798s | 0.000830s | byte equality observed |
| unfused_typed.test | 10 | 0.000833s | 0.000791s | 0.000791s | byte equality observed |
| vector_comparison.test | 10 | 0.000825s | 0.000808s | 0.000785s | byte equality observed |
| vector_construction.test | 10 | 0.000805s | 0.000796s | 0.000853s | byte equality observed |
| vector_conversion.test | 10 | 0.000798s | 0.000821s | 0.000837s | byte equality observed |
| vector_copy.test | 10 | 0.000797s | 0.000817s | 0.000782s | byte equality observed |
| vector_hash.test | 10 | 0.000815s | 0.000819s | 0.000814s | byte equality observed |
| vector_iterator.test | 10 | 0.000806s | 0.000800s | 0.000816s | byte equality observed |
| vector_make.test | 10 | 0.000808s | 0.000788s | 0.000831s | byte equality observed |
| vector_misc.test | 10 | 0.000815s | 0.000807s | 0.000821s | byte equality observed |
| vector_move.test | 10 | 0.000799s | 0.000791s | 0.000816s | byte equality observed |
| vector_mutate.test | 10 | 0.000826s | 0.000835s | 0.000819s | byte equality observed |
| vector_n.test | 10 | 0.000820s | 0.000823s | 0.000813s | byte equality observed |
| vector_nest.test | 10 | 0.000817s | 0.000795s | 0.000796s | byte equality observed |
| vector_tie.test | 10 | 0.000824s | 0.000800s | 0.000806s | byte equality observed |
| vector_traits__maybe_variadic.test | 10 | 0.000802s | 0.000804s | 0.000800s | byte equality observed |
| vector_traits__no_variadic.test | 10 | 0.000809s | 0.000801s | 0.000792s | byte equality observed |
| vector_value_at.test | 10 | 0.000795s | 0.000801s | 0.000794s | byte equality observed |
| zip.test | 10 | 0.000819s | 0.000779s | 0.000804s | byte equality observed |
| zip2.test | 10 | 0.000821s | 0.000791s | 0.000809s | byte equality observed |
| zip_ignore.test | 10 | 0.000801s | 0.000812s | 0.000807s | byte equality observed |
| zip_view.test | 10 | 0.000815s | 0.000809s | 0.000822s | byte equality observed |
| zip_view2.test | 10 | 0.000814s | 0.000785s | 0.000796s | byte equality observed |
| zip_view_ignore.test | 10 | 0.000789s | 0.000791s | 0.000795s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44481767416).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
