# libs/fusion/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| all.test | RUN | 0.290949 | 0.622778 | 0.806713 | 0.001157 | 0.001162 | 0.001122 |
| any.test | RUN | 0.275535 | 0.589067 | 0.753038 | 0.001082 | 0.001302 | 0.001227 |
| clear.test | RUN | 0.201788 | 0.560928 | 0.621381 | 0.001115 | 0.001394 | 0.001308 |
| copy.test | RUN | 0.170618 | 0.417143 | 0.506546 | 0.001200 | 0.001209 | 0.001172 |
| count.test | RUN | 0.195048 | 0.467793 | 0.573662 | 0.001089 | 0.001418 | 0.001252 |
| count_if.test | RUN | 0.179410 | 0.424260 | 0.513207 | 0.001223 | 0.001289 | 0.001217 |
| erase.test | RUN | 0.262633 | 0.774085 | 0.854189 | 0.001199 | 0.001310 | 0.001170 |
| erase_key.test | RUN | 0.251812 | 0.761685 | 0.810118 | 0.001166 | 0.001244 | 0.001122 |
| filter.test | RUN | 0.229074 | 0.639680 | 0.737653 | 0.001328 | 0.001399 | 0.001268 |
| filter_if.test | RUN | 0.256107 | 0.750827 | 0.846253 | 0.001390 | 0.001238 | 0.001166 |
| find.test | RUN | 0.218243 | 0.512548 | 0.647717 | 0.001179 | 0.001403 | 0.001109 |
| find_if.test | RUN | 0.208860 | 0.464573 | 0.590974 | 0.001210 | 0.001386 | 0.001184 |
| fold.test | RUN | 0.231540 | 0.587707 | 0.730145 | 0.001363 | 0.001419 | 0.001178 |
| for_each.test | RUN | 0.202105 | 0.529548 | 0.623297 | 0.001238 | 0.001459 | 0.000985 |
| insert.test | RUN | 0.308980 | 0.946325 | 1.013618 | 0.001161 | 0.001350 | 0.001093 |
| insert_range.test | RUN | 0.300448 | 0.950001 | 1.040559 | 0.001173 | 0.001434 | 0.001134 |
| iter_fold.test | RUN | 0.348417 | 0.891583 | 1.219764 | 0.001179 | 0.001327 | 0.001140 |
| move.test | RUN | 0.175847 | 0.416460 | 0.518594 | 0.001101 | 0.001266 | 0.001033 |
| none.test | RUN | 0.280953 | 0.608527 | 0.769256 | 0.001258 | 0.001320 | 0.001206 |
| pop_back.test | RUN | 0.285634 | 0.838014 | 0.924463 | 0.001368 | 0.001303 | 0.001264 |
| pop_front.test | RUN | 0.235785 | 0.667682 | 0.720573 | 0.001162 | 0.001307 | 0.001249 |
| push_back.test | RUN | 0.296162 | 0.958463 | 0.998615 | 0.001235 | 0.001308 | 0.001195 |
| push_front.test | RUN | 0.265464 | 0.785049 | 0.844253 | 0.001317 | 0.001304 | 0.001185 |
| remove.test | RUN | 0.287158 | 0.896404 | 0.993769 | 0.001399 | 0.001287 | 0.001195 |
| remove_if.test | RUN | 0.254337 | 0.748688 | 0.856415 | 0.001107 | 0.001336 | 0.001122 |
| replace.test | RUN | 0.255301 | 0.736555 | 0.796098 | 0.001224 | 0.001476 | 0.001132 |
| replace_if.test | RUN | 0.243856 | 0.720787 | 0.776263 | 0.001373 | 0.001487 | 0.001131 |
| reverse_fold.test | RUN | 0.373509 | 1.005636 | 1.343635 | 0.001374 | 0.001497 | 0.001236 |
| reverse_iter_fold.test | RUN | 0.400241 | 1.049260 | 1.393056 | 0.001211 | 0.001211 | 0.001100 |
| reverse.test | RUN | 0.240541 | 0.768413 | 0.800883 | 0.001329 | 0.001380 | 0.001173 |
| segmented_for_each.test | RUN | 0.417398 | 1.409114 | 1.656243 | 0.001278 | 0.001264 | 0.001096 |
| segmented_find.test | RUN | 0.261642 | 0.735258 | 0.930163 | 0.001243 | 0.001225 | 0.001006 |
| segmented_find_if.test | RUN | 0.260540 | 0.744914 | 0.895259 | 0.001129 | 0.001408 | 0.001099 |
| segmented_fold.test | RUN | 0.333714 | 0.990198 | 1.167150 | 0.001282 | 0.001371 | 0.001279 |
| transform.test | RUN | 0.257613 | 0.797731 | 0.867356 | 0.001249 | 0.001346 | 0.001179 |
| join.test | RUN | 0.199429 | 0.482899 | 0.594540 | 0.001188 | 0.001352 | 0.001096 |
| zip.test | RUN | 0.332290 | 0.900566 | 1.119401 | 0.001113 | 0.001401 | 0.001154 |
| zip2.test | RUN | 0.330172 | 0.848360 | 1.056348 | 0.001304 | 0.001210 | 0.001133 |
| zip_ignore.test | RUN | 0.249412 | 0.603793 | 0.723113 | 0.001191 | 0.001524 | 0.001229 |
| flatten.test | RUN | 0.233480 | 0.646412 | 0.740737 | 0.001124 | 0.001410 | 0.001160 |
| ticket-5490.test | COMPILE | 0.124746 | 0.283879 | 0.333863 | — | — | — |
| as_deque.test | RUN | 0.234407 | 0.625262 | 0.773019 | 0.001210 | 0.001344 | 0.001327 |
| as_list.test | RUN | 0.259888 | 0.778954 | 0.830477 | 0.001371 | 0.001580 | 0.001209 |
| as_map.test | RUN | 0.259965 | 0.769891 | 0.849504 | 0.001122 | 0.001249 | 0.001133 |
| as_map_assoc.test | RUN | 0.253389 | 0.697703 | 0.805365 | 0.001068 | 0.001355 | 0.001149 |
| as_set.test | RUN | 0.292834 | 0.882451 | 0.974661 | 0.001150 | 0.001402 | 0.001085 |
| as_vector.test | RUN | 0.268208 | 0.794106 | 0.869524 | 0.001092 | 0.001345 | 0.001149 |
| boost_tuple.test | RUN | 0.267910 | 0.775619 | 0.851819 | 0.001040 | 0.001293 | 0.001025 |
| boost_tuple_iterator.test | RUN | 0.180204 | 0.448622 | 0.523112 | 0.001165 | 0.001171 | 0.001262 |
| cons.test | RUN | 0.331458 | 0.876734 | 1.019881 | 0.001069 | 0.001250 | 0.001138 |
| convert_boost_tuple.test | RUN | 0.208777 | 0.678385 | 0.665633 | 0.001291 | 0.001332 | 0.001123 |
| convert_deque.test | RUN | 0.211876 | 0.680192 | 0.660092 | 0.001260 | 0.001185 | 0.001049 |
| convert_list.test | RUN | 0.209520 | 0.672924 | 0.680456 | 0.001037 | 0.001122 | 0.001153 |
| convert_std_pair.test | RUN | 0.219000 | 0.676503 | 0.683590 | 0.001240 | 0.001411 | 0.001145 |
| convert_std_tuple.test | RUN | 0.209619 | 0.663926 | 0.654237 | 0.001147 | 0.001263 | 0.001170 |
| convert_vector.test | RUN | 0.209621 | 0.667640 | 0.669377 | 0.001132 | 0.000897 | 0.001179 |
| filter_view.test | RUN | 0.252065 | 0.703746 | 0.799213 | 0.001140 | 0.001256 | 0.001340 |
| hash.test | RUN | 0.248795 | 0.635121 | 0.758129 | 0.001276 | 0.001267 | 0.001226 |
| io.test | RUN | 0.269307 | 0.904026 | 0.939741 | 0.001440 | 0.001696 | 0.001375 |
| iterator_range.test | RUN | 0.238933 | 0.671273 | 0.747134 | 0.000898 | 0.001524 | 0.001162 |
| joint_view.test | RUN | 0.323830 | 1.130998 | 1.175690 | 0.001342 | 0.001456 | 0.001058 |
| list_comparison.test | RUN | 0.180323 | 0.465141 | 0.542690 | 0.001166 | 0.001343 | 0.001311 |
| list_construction.test | RUN | 0.185432 | 0.449576 | 0.526540 | 0.001018 | 0.001332 | 0.001050 |
| list_copy.test | RUN | 0.269881 | 0.843303 | 0.959794 | 0.001116 | 0.001258 | 0.000985 |
| list_iterator.test | RUN | 0.181450 | 0.446742 | 0.526054 | 0.001122 | 0.001324 | 0.001096 |
| list_hash.test | RUN | 0.245707 | 0.935707 | 0.768280 | 0.001122 | 0.001553 | 0.001148 |
| list_make.test | RUN | 0.191691 | 0.499824 | 0.580322 | 0.001385 | 0.001299 | 0.001101 |
| list_misc.test | RUN | 0.243192 | 0.587355 | 0.711845 | 0.001204 | 0.001147 | 0.001062 |
| list_mutate.test | RUN | 0.168016 | 0.400678 | 0.473946 | 0.001124 | 0.001498 | 0.001205 |
| list_nest.test | RUN | 0.345639 | 1.146507 | 1.342664 | 0.001070 | 0.001271 | 0.001209 |
| list_tie.test | RUN | 0.182465 | 0.442460 | 0.542570 | 0.001387 | 0.001312 | 0.001162 |
| list_value_at.test | RUN | 0.172825 | 0.424386 | 0.495993 | 0.001320 | 0.001278 | 0.001169 |
| deque_comparison.test | RUN | 0.180794 | 0.478822 | 0.534289 | 0.001115 | 0.001399 | 0.001046 |
| deque_construction.test | RUN | 0.181880 | 0.447379 | 0.582335 | 0.001255 | 0.001382 | 0.001153 |
| deque_copy.test | RUN | 0.269071 | 0.778043 | 0.865075 | 0.001247 | 0.001196 | 0.001193 |
| deque_iterator.test | RUN | 0.180815 | 0.474448 | 0.531027 | 0.001140 | 0.001141 | 0.001150 |
| deque_hash.test | RUN | 0.249915 | 0.904462 | 0.765064 | 0.001107 | 0.001439 | 0.001258 |
| deque_is_constructible.test | COMPILE | 0.096154 | 0.200747 | 0.244040 | — | — | — |
| deque_make.test | RUN | 0.186501 | 0.482495 | 0.573656 | 0.001274 | 0.001206 | 0.001171 |
| deque_misc.test | RUN | 0.242576 | 0.591103 | 0.686261 | 0.001075 | 0.001292 | 0.001161 |
| deque_move.test | RUN | 0.192022 | 0.492062 | 0.547245 | 0.001172 | 0.001369 | 0.001194 |
| deque_mutate.test | RUN | 0.166937 | 0.398525 | 0.475524 | 0.001329 | 0.001335 | 0.001134 |
| deque_nest.test | RUN | 0.528100 | 1.874156 | 2.140527 | 0.001150 | 0.001410 | 0.001080 |
| deque_tie.test | RUN | 0.172019 | 0.425367 | 0.496086 | 0.001342 | 0.001255 | 0.001282 |
| deque_value_at.test | RUN | 0.175209 | 0.405866 | 0.486814 | 0.001309 | 0.001181 | 0.001054 |
| front_extended_deque.test | RUN | 0.251138 | 0.605433 | 0.760498 | 0.001062 | 0.001421 | 0.001159 |
| back_extended_deque.test | RUN | 0.245523 | 0.602070 | 0.721870 | 0.001414 | 0.001238 | 0.001124 |
| make_list.test | RUN | 0.201468 | 0.498233 | 0.575036 | 0.001297 | 0.001198 | 0.001158 |
| make_vector.test | RUN | 0.191989 | 0.496891 | 0.616354 | 0.001219 | 0.001299 | 0.001128 |
| map.test | RUN | 0.255838 | 0.773137 | 0.821893 | 0.001186 | 0.001338 | 0.001122 |
| map_comparison.test | RUN | 0.187685 | 0.480717 | 0.555587 | 0.001150 | 0.001449 | 0.001240 |
| map_construction.test | RUN | 0.190405 | 0.451094 | 0.550113 | 0.001185 | 0.001425 | 0.001226 |
| map_copy.test | RUN | 0.227831 | 0.588527 | 0.681848 | 0.001120 | 0.001460 | 0.001317 |
| map_misc.test | RUN | 0.240392 | 0.584872 | 0.686694 | 0.001171 | 0.001414 | 0.001010 |
| map_move.test | RUN | 0.187453 | 0.500701 | 0.547067 | 0.001230 | 0.001250 | 0.001020 |
| map_mutate.test | RUN | 0.169360 | 0.388978 | 0.481253 | 0.001111 | 0.001256 | 0.001143 |
| map_tie.test | RUN | 0.182193 | 0.391340 | 0.491326 | 0.001180 | 0.001227 | 0.001116 |
| nil.test | RUN | 0.118076 | 0.280892 | 0.335026 | 0.001300 | 0.001230 | 0.001103 |
| nview.test | RUN | 0.234454 | 0.570288 | 0.705264 | 0.001270 | 0.001499 | 0.001176 |
| reverse_view.test | RUN | 0.322127 | 0.982926 | 1.068656 | 0.001173 | 0.001263 | 0.001187 |
| segmented_iterator_range.test | RUN | 0.361631 | 1.163531 | 1.333866 | 0.001340 | 0.001347 | 0.001251 |
| set.test | RUN | 0.230766 | 0.647502 | 0.725945 | 0.001167 | 0.001448 | 0.001126 |
| single_view.test | RUN | 0.210409 | 0.588593 | 0.668416 | 0.001245 | 0.001412 | 0.001083 |
| std_pair.test | RUN | 0.263966 | 0.762415 | 0.847271 | 0.001196 | 0.001367 | 0.001349 |
| boost_array.test | RUN | 0.226307 | 0.523177 | 0.658889 | 0.001142 | 0.001423 | 0.001153 |
| array.test | RUN | 0.223798 | 0.521011 | 0.637175 | 0.001213 | 0.001292 | 0.001171 |
| std_array.test | RUN | 0.224761 | 0.517117 | 0.622893 | 0.001093 | 0.001278 | 0.001104 |
| tuple_comparison.test | RUN | 0.196344 | 0.501765 | 0.593763 | 0.001246 | 0.001273 | 0.001129 |
| tuple_construction.test | RUN | 0.202188 | 0.486135 | 0.584717 | 0.001110 | 0.001388 | 0.001232 |
| tuple_conversion.test | RUN | 0.451902 | 1.549577 | 1.974403 | 0.001213 | 0.001292 | 0.001016 |
| tuple_copy.test | RUN | 0.298173 | 0.885181 | 1.026887 | 0.001360 | 0.001318 | 0.001114 |
| tuple_element.test | RUN | 0.183816 | 0.444815 | 0.554737 | 0.001157 | 0.001437 | 0.001150 |
| tuple_make.test | RUN | 0.204225 | 0.508048 | 0.614484 | 0.001111 | 0.001171 | 0.001063 |
| tuple_misc.test | RUN | 0.258619 | 0.618905 | 0.722389 | 0.001139 | 0.001192 | 0.001068 |
| tuple_mutate.test | RUN | 0.180667 | 0.424254 | 0.566952 | 0.001324 | 0.001329 | 0.001224 |
| tuple_nest.test | RUN | 0.772700 | 3.253316 | 3.622787 | 0.001097 | 0.001390 | 0.001246 |
| tuple_hash.test | RUN | 0.257000 | 0.931951 | 0.772148 | 0.001324 | 0.001270 | 0.001085 |
| tuple_tie.test | RUN | 0.188004 | 0.460728 | 0.554521 | 0.001264 | 0.001506 | 0.001183 |
| tuple_traits__maybe_variadic.test | RUN | 0.208365 | 0.568021 | 0.603339 | 0.001151 | 0.001410 | 0.001182 |
| tuple_traits__no_variadic.test | RUN | 0.229417 | 0.590947 | 0.639856 | 0.001307 | 0.001500 | 0.001298 |
| transform_view.test | RUN | 0.307132 | 0.995015 | 1.053918 | 0.001180 | 0.001441 | 0.001251 |
| identity_view.test | RUN | 0.291921 | 0.906761 | 0.984189 | 0.001186 | 0.001350 | 0.001161 |
| vector_comparison.test | RUN | 0.183756 | 0.471143 | 0.559469 | 0.001118 | 0.001281 | 0.001141 |
| vector_construction.test | RUN | 0.185441 | 0.462689 | 0.530072 | 0.001129 | 0.001417 | 0.001324 |
| vector_conversion.test | RUN | 0.548699 | 2.072164 | 2.521214 | 0.001380 | 0.001354 | 0.001262 |
| vector_copy.test | RUN | 0.280643 | 0.892748 | 1.006763 | 0.001231 | 0.001282 | 0.001085 |
| vector_iterator.test | RUN | 0.185024 | 0.453815 | 0.556979 | 0.001252 | 0.001367 | 0.001238 |
| vector_make.test | RUN | 0.193257 | 0.488672 | 0.577759 | 0.001144 | 0.001367 | 0.001175 |
| vector_misc.test | RUN | 0.239489 | 0.596939 | 0.722991 | 0.001300 | 0.001281 | 0.001119 |
| vector_move.test | RUN | 0.184299 | 0.507812 | 0.563390 | 0.001466 | 0.001427 | 0.001175 |
| vector_mutate.test | RUN | 0.171386 | 0.398089 | 0.524604 | 0.001200 | 0.001260 | 0.001408 |
| vector_n.test | RUN | 0.210510 | 0.502284 | 0.644098 | 0.001420 | 0.001476 | 0.001312 |
| vector_nest.test | RUN | 0.784516 | 3.398670 | 3.721570 | 0.001090 | 0.001382 | 0.001113 |
| vector_hash.test | RUN | 0.246026 | 0.928648 | 0.732353 | 0.001139 | 0.001355 | 0.001257 |
| vector_tie.test | RUN | 0.175775 | 0.429605 | 0.523811 | 0.001112 | 0.001284 | 0.001024 |
| vector_traits__maybe_variadic.test | RUN | 0.193942 | 0.518938 | 0.561634 | 0.001202 | 0.001336 | 0.001158 |
| vector_traits__no_variadic.test | RUN | 0.206583 | 0.549826 | 0.567011 | 0.001190 | 0.001352 | 0.001056 |
| vector_value_at.test | RUN | 0.172022 | 0.396639 | 0.489652 | 0.001195 | 0.001490 | 0.001266 |
| zip_view.test | RUN | 0.351869 | 0.988072 | 1.318038 | 0.001194 | 0.001168 | 0.001159 |
| zip_view2.test | RUN | 0.290550 | 0.790184 | 0.941241 | 0.001180 | 0.001354 | 0.001069 |
| zip_view_ignore.test | RUN | 0.269786 | 0.689048 | 0.843746 | 0.001073 | 0.001208 | 0.001204 |
| repetitive_view.test | RUN | 0.453560 | 1.319076 | 1.643414 | 0.001422 | 0.001193 | 0.001264 |
| deduce_sequence.test | RUN | 0.226010 | 0.549968 | 0.717353 | 0.001078 | 0.001432 | 0.001318 |
| adapt_adt_named.test | RUN | 0.270303 | 0.778854 | 0.823148 | 0.001068 | 0.001331 | 0.001190 |
| adapt_adt_named_empty.test | RUN | 0.235190 | 0.623101 | 0.698456 | 0.001182 | 0.001227 | 0.001202 |
| adapt_adt.test | RUN | 0.302087 | 1.014641 | 1.031998 | 0.001102 | 0.001381 | 0.001193 |
| adapt_adt_empty.test | RUN | 0.226564 | 0.630860 | 0.703155 | 0.001402 | 0.001448 | 0.001174 |
| adapt_assoc_adt_named.test | RUN | 0.297430 | 0.806553 | 0.924615 | 0.001094 | 0.001347 | 0.001222 |
| adapt_assoc_adt_named_empty.test | RUN | 0.228036 | 0.622661 | 0.691318 | 0.001163 | 0.001500 | 0.001160 |
| adapt_assoc_adt.test | RUN | 0.298973 | 0.839428 | 0.951237 | 0.001170 | 0.001361 | 0.001149 |
| adapt_assoc_adt_empty.test | RUN | 0.227935 | 0.633565 | 0.699890 | 0.001122 | 0.001323 | 0.001163 |
| adapt_assoc_struct_named.test | RUN | 0.287130 | 0.799027 | 0.890815 | 0.001084 | 0.001314 | 0.001160 |
| adapt_assoc_struct_named_empty.test | RUN | 0.226317 | 0.627481 | 0.694930 | 0.001075 | 0.001277 | 0.001209 |
| adapt_assoc_struct.test | RUN | 0.259199 | 0.747322 | 0.835391 | 0.001299 | 0.001283 | 0.001166 |
| adapt_assoc_struct_empty.test | RUN | 0.220300 | 0.626212 | 0.686468 | 0.001341 | 0.001321 | 0.001324 |
| adapt_assoc_tpl_adt.test | RUN | 0.312118 | 0.870957 | 0.969441 | 0.001197 | 0.001400 | 0.001106 |
| adapt_assoc_tpl_adt_empty.test | RUN | 0.228455 | 0.630717 | 0.690633 | 0.001086 | 0.001204 | 0.001204 |
| adapt_assoc_tpl_struct.test | RUN | 0.251414 | 0.729481 | 0.794027 | 0.001214 | 0.001205 | 0.001271 |
| adapt_assoc_tpl_struct_empty.test | RUN | 0.226991 | 0.625359 | 0.699043 | 0.001170 | 0.001294 | 0.001095 |
| adapt_struct_named.test | RUN | 0.259519 | 0.770744 | 0.825566 | 0.001168 | 0.001174 | 0.001306 |
| adapt_struct_named_empty.test | RUN | 0.235481 | 0.626036 | 0.689202 | 0.001181 | 0.001258 | 0.001112 |
| adapt_struct.test | RUN | 0.282035 | 0.867206 | 0.925798 | 0.001120 | 0.001383 | 0.001150 |
| adapt_struct_empty.test | RUN | 0.226666 | 0.628377 | 0.697175 | 0.001354 | 0.001344 | 0.001088 |
| adapt_tpl_adt.test | RUN | 0.290043 | 1.002747 | 0.979875 | 0.001131 | 0.001558 | 0.001017 |
| adapt_tpl_adt_empty.test | RUN | 0.231343 | 0.631625 | 0.682585 | 0.001175 | 0.001485 | 0.001155 |
| adapt_tpl_struct.test | RUN | 0.242734 | 0.697562 | 0.771435 | 0.001268 | 0.001438 | 0.001123 |
| adapt_tpl_struct_empty.test | RUN | 0.224950 | 0.627839 | 0.688271 | 0.001185 | 0.001306 | 0.001069 |
| adt_attribute_proxy.test | RUN | 0.258973 | 0.610260 | 0.725895 | 0.001154 | 0.001390 | 0.001093 |
| define_struct.test | RUN | 0.313433 | 0.860293 | 0.954078 | 0.001102 | 0.001254 | 0.001110 |
| define_struct_empty.test | RUN | 0.272400 | 0.693532 | 0.791977 | 0.001302 | 0.001280 | 0.000945 |
| define_struct_move.test | RUN | 0.173563 | 0.397498 | 0.468060 | 0.001143 | 0.001463 | 0.001100 |
| define_struct_inline.test | RUN | 0.339420 | 1.049213 | 1.106902 | 0.001182 | 0.001244 | 0.001142 |
| define_struct_inline_empty.test | RUN | 0.271971 | 0.696954 | 0.798755 | 0.001134 | 0.001250 | 0.001134 |
| define_struct_inline_move.test | RUN | 0.176179 | 0.399583 | 0.478968 | 0.001070 | 0.001209 | 0.001107 |
| define_assoc_struct.test | RUN | 0.301502 | 0.816593 | 0.907848 | 0.001298 | 0.001575 | 0.001087 |
| define_assoc_struct_empty.test | RUN | 0.274310 | 0.706314 | 0.806982 | 0.001107 | 0.001419 | 0.001202 |
| define_assoc_struct_move.test | RUN | 0.170253 | 0.389593 | 0.470072 | 0.001208 | 0.001329 | 0.001122 |
| define_tpl_struct.test | RUN | 0.297551 | 0.847892 | 0.925627 | 0.001109 | 0.001346 | 0.001105 |
| define_tpl_struct_empty.test | RUN | 0.265795 | 0.703175 | 0.801884 | 0.001185 | 0.001366 | 0.001078 |
| define_tpl_struct_move.test | RUN | 0.168355 | 0.398143 | 0.486290 | 0.001062 | 0.001175 | 0.001225 |
| define_tpl_struct_inline.test | RUN | 0.317715 | 0.963676 | 1.022544 | 0.001442 | 0.001253 | 0.001130 |
| define_tpl_struct_inline_empty.test | RUN | 0.269376 | 0.722473 | 0.805902 | 0.001376 | 0.001290 | 0.001152 |
| define_tpl_struct_inline_move.test | RUN | 0.174522 | 0.383662 | 0.482165 | 0.001095 | 0.001416 | 0.001264 |
| define_assoc_tpl_struct.test | RUN | 0.306223 | 0.821445 | 0.944075 | 0.001334 | 0.001379 | 0.001181 |
| define_assoc_tpl_struct_empty.test | RUN | 0.273745 | 0.703724 | 0.809629 | 0.001219 | 0.001380 | 0.001295 |
| define_assoc_tpl_struct_move.test | RUN | 0.179880 | 0.392983 | 0.479108 | 0.001142 | 0.001416 | 0.001154 |
| std_tuple.test | RUN | 0.181388 | 0.436631 | 0.533448 | 0.001138 | 0.001390 | 0.001085 |
| std_tuple_iterator.test | RUN | 0.184971 | 0.465758 | 0.523288 | 0.001148 | 0.001325 | 0.001102 |
| ref_vector.test | RUN | 0.204636 | 0.469782 | 0.573762 | 0.001304 | 0.001490 | 0.001079 |
| flatten_view.test | RUN | 0.221523 | 0.591776 | 0.685854 | 0.001172 | 0.001358 | 0.001120 |
| github-159.test | COMPILE | 0.097746 | 0.214839 | 0.247739 | — | — | — |
| github-176.test | RUN | 0.206353 | 0.522250 | 0.559707 | 0.001135 | 0.001425 | 0.001107 |
| size.test | COMPILE | 0.163751 | 0.367127 | 0.455456 | — | — | — |
| fused.test | RUN | 0.240148 | 0.560330 | 0.665747 | 0.001292 | 0.001400 | 0.001111 |
| fused_function_object.test | RUN | 0.180543 | 0.423619 | 0.506859 | 0.001266 | 0.001119 | 0.001115 |
| fused_procedure.test | RUN | 0.231582 | 0.534527 | 0.621674 | 0.001140 | 0.001282 | 0.001065 |
| unfused.test | RUN | 0.187173 | 0.439079 | 0.521187 | 0.001138 | 0.001315 | 0.001129 |
| unfused_typed.test | RUN | 0.191316 | 0.473279 | 0.537330 | 0.001222 | 0.001472 | 0.001136 |
| make_fused.test | RUN | 0.238360 | 0.556009 | 0.660764 | 0.001061 | 0.001251 | 0.001057 |
| make_fused_function_object.test | RUN | 0.177632 | 0.420496 | 0.514036 | 0.001148 | 0.001154 | 0.001289 |
| make_fused_procedure.test | RUN | 0.235842 | 0.533464 | 0.627416 | 0.001270 | 0.001447 | 0.001054 |
| make_unfused.test | RUN | 0.179315 | 0.427603 | 0.518941 | 0.001371 | 0.001417 | 0.001134 |
| invoke.test | RUN | 0.477989 | 1.608174 | 1.782776 | 0.001144 | 0.001342 | 0.001067 |
| invoke_function_object.test | RUN | 0.219582 | 0.549753 | 0.674293 | 0.001105 | 0.001407 | 0.001205 |
| invoke_procedure.test | RUN | 0.375861 | 1.157543 | 1.302034 | 0.001122 | 0.001501 | 0.001093 |
| swap.test | RUN | 0.284784 | 0.710230 | 0.841457 | 0.001186 | 0.001341 | 0.001060 |
| is_sequence.test | COMPILE | 0.047444 | 0.097540 | 0.107099 | — | — | — |
| is_view.test | COMPILE | 0.046087 | 0.097588 | 0.102647 | — | — | — |
| pair_deque.test | COMPILE | 0.102651 | 0.224418 | 0.259958 | — | — | — |
| pair_list.test | COMPILE | 0.103812 | 0.219513 | 0.235221 | — | — | — |
| pair_map.test | COMPILE | 0.102878 | 0.227435 | 0.269724 | — | — | — |
| pair_set.test | COMPILE | 0.106059 | 0.227790 | 0.255745 | — | — | — |
| pair_vector.test | COMPILE | 0.101555 | 0.221586 | 0.250578 | — | — | — |
| pair_nest.test | COMPILE | 0.039171 | 0.089395 | 0.097270 | — | — | — |
| index_sequence.test | COMPILE | 0.034408 | 0.060603 | 0.069602 | — | — | — |
| and.test | COMPILE | 0.026261 | 0.046920 | 0.050577 | — | — | — |
| tag_of.test | COMPILE | 0.045091 | 0.091872 | 0.098325 | — | — | — |
| unused.test | COMPILE | 0.023495 | 0.060606 | 0.057040 | — | — | — |
| tag_of_fallback.test | COMPILE | 0.042946 | 0.088559 | 0.085150 | — | — | — |
| make_pair_r-value.test | COMPILE | 0.027457 | 0.085801 | 0.092069 | — | — | — |
| quick.test | RUN | 0.135589 | 0.303590 | 0.318522 | 0.000366 | 0.000900 | 0.000761 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 1.001× | 1.003×, 1.000× | 0.999× |
| clang | 1.003× | 1.003×, 1.003× | 0.999× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1364 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/43778388618).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| adapt_adt.test | 10 | 0.000823s | 0.000822s | 0.000828s | byte equality observed |
| adapt_adt_empty.test | 10 | 0.000794s | 0.000800s | 0.000819s | byte equality observed |
| adapt_adt_named.test | 10 | 0.000830s | 0.000798s | 0.000802s | byte equality observed |
| adapt_adt_named_empty.test | 10 | 0.000819s | 0.000780s | 0.000812s | byte equality observed |
| adapt_assoc_adt.test | 10 | 0.000811s | 0.000819s | 0.000827s | byte equality observed |
| adapt_assoc_adt_empty.test | 10 | 0.000803s | 0.000800s | 0.000839s | byte equality observed |
| adapt_assoc_adt_named.test | 10 | 0.000804s | 0.000834s | 0.000810s | byte equality observed |
| adapt_assoc_adt_named_empty.test | 10 | 0.000811s | 0.000835s | 0.000837s | byte equality observed |
| adapt_assoc_struct.test | 10 | 0.000819s | 0.000835s | 0.000844s | byte equality observed |
| adapt_assoc_struct_empty.test | 10 | 0.000821s | 0.000822s | 0.000817s | byte equality observed |
| adapt_assoc_struct_named.test | 10 | 0.000814s | 0.000824s | 0.000806s | byte equality observed |
| adapt_assoc_struct_named_empty.test | 10 | 0.000831s | 0.000792s | 0.000818s | byte equality observed |
| adapt_assoc_tpl_adt.test | 10 | 0.000819s | 0.000792s | 0.000809s | byte equality observed |
| adapt_assoc_tpl_adt_empty.test | 10 | 0.000840s | 0.000849s | 0.000825s | byte equality observed |
| adapt_assoc_tpl_struct.test | 10 | 0.000857s | 0.000854s | 0.000836s | byte equality observed |
| adapt_assoc_tpl_struct_empty.test | 10 | 0.000849s | 0.000843s | 0.000798s | byte equality observed |
| adapt_struct.test | 10 | 0.000805s | 0.000828s | 0.000837s | byte equality observed |
| adapt_struct_empty.test | 10 | 0.000816s | 0.000801s | 0.000815s | byte equality observed |
| adapt_struct_named.test | 10 | 0.000831s | 0.000808s | 0.000820s | byte equality observed |
| adapt_struct_named_empty.test | 10 | 0.000842s | 0.000795s | 0.000803s | byte equality observed |
| adapt_tpl_adt.test | 10 | 0.000843s | 0.000812s | 0.000826s | byte equality observed |
| adapt_tpl_adt_empty.test | 10 | 0.000798s | 0.000802s | 0.000827s | byte equality observed |
| adapt_tpl_struct.test | 10 | 0.000842s | 0.000825s | 0.000804s | byte equality observed |
| adapt_tpl_struct_empty.test | 10 | 0.000835s | 0.000833s | 0.000811s | byte equality observed |
| adt_attribute_proxy.test | 10 | 0.000813s | 0.000820s | 0.000825s | byte equality observed |
| all.test | 10 | 0.000823s | 0.000817s | 0.000815s | byte equality observed |
| any.test | 10 | 0.000795s | 0.000803s | 0.000815s | byte equality observed |
| array.test | 10 | 0.000814s | 0.000799s | 0.000778s | byte equality observed |
| as_deque.test | 10 | 0.000791s | 0.000836s | 0.000814s | byte equality observed |
| as_list.test | 10 | 0.000830s | 0.000852s | 0.000841s | byte equality observed |
| as_map.test | 10 | 0.000833s | 0.000852s | 0.000800s | byte equality observed |
| as_map_assoc.test | 10 | 0.000828s | 0.000830s | 0.000825s | byte equality observed |
| as_set.test | 10 | 0.000810s | 0.000868s | 0.000814s | byte equality observed |
| as_vector.test | 10 | 0.000814s | 0.000853s | 0.000817s | byte equality observed |
| back_extended_deque.test | 10 | 0.000809s | 0.000793s | 0.000826s | byte equality observed |
| boost_array.test | 10 | 0.000803s | 0.000806s | 0.000791s | byte equality observed |
| boost_tuple.test | 10 | 0.000838s | 0.000807s | 0.000800s | byte equality observed |
| boost_tuple_iterator.test | 10 | 0.000792s | 0.000809s | 0.000779s | byte equality observed |
| clear.test | 10 | 0.000831s | 0.000842s | 0.000805s | byte equality observed |
| cons.test | 10 | 0.000833s | 0.000820s | 0.000848s | byte equality observed |
| convert_boost_tuple.test | 10 | 0.000821s | 0.000793s | 0.000810s | byte equality observed |
| convert_deque.test | 10 | 0.000811s | 0.000807s | 0.000811s | byte equality observed |
| convert_list.test | 10 | 0.000815s | 0.000818s | 0.000824s | byte equality observed |
| convert_std_pair.test | 10 | 0.000823s | 0.000807s | 0.000821s | byte equality observed |
| convert_std_tuple.test | 10 | 0.000810s | 0.000772s | 0.000803s | byte equality observed |
| convert_vector.test | 10 | 0.000828s | 0.000816s | 0.000777s | byte equality observed |
| copy.test | 10 | 0.000805s | 0.000812s | 0.000785s | byte equality observed |
| count.test | 10 | 0.000816s | 0.000796s | 0.000794s | byte equality observed |
| count_if.test | 10 | 0.000829s | 0.000788s | 0.000839s | byte equality observed |
| deduce_sequence.test | 10 | 0.000833s | 0.000788s | 0.000810s | byte equality observed |
| define_assoc_struct.test | 10 | 0.000808s | 0.000824s | 0.000822s | byte equality observed |
| define_assoc_struct_empty.test | 10 | 0.000803s | 0.000808s | 0.000825s | byte equality observed |
| define_assoc_struct_move.test | 10 | 0.000804s | 0.000834s | 0.000838s | byte equality observed |
| define_assoc_tpl_struct.test | 10 | 0.000836s | 0.000819s | 0.000822s | byte equality observed |
| define_assoc_tpl_struct_empty.test | 10 | 0.000830s | 0.000839s | 0.000825s | byte equality observed |
| define_assoc_tpl_struct_move.test | 10 | 0.000824s | 0.000828s | 0.000806s | byte equality observed |
| define_struct.test | 10 | 0.000824s | 0.000838s | 0.000823s | byte equality observed |
| define_struct_empty.test | 10 | 0.000839s | 0.000803s | 0.000799s | byte equality observed |
| define_struct_inline.test | 10 | 0.000822s | 0.000802s | 0.000807s | byte equality observed |
| define_struct_inline_empty.test | 10 | 0.000801s | 0.000829s | 0.000818s | byte equality observed |
| define_struct_inline_move.test | 10 | 0.000801s | 0.000809s | 0.000804s | byte equality observed |
| define_struct_move.test | 10 | 0.000810s | 0.000812s | 0.000808s | byte equality observed |
| define_tpl_struct.test | 10 | 0.000812s | 0.000848s | 0.000801s | byte equality observed |
| define_tpl_struct_empty.test | 10 | 0.000821s | 0.000851s | 0.000803s | byte equality observed |
| define_tpl_struct_inline.test | 10 | 0.000853s | 0.000862s | 0.000832s | byte equality observed |
| define_tpl_struct_inline_empty.test | 10 | 0.000846s | 0.000825s | 0.000798s | byte equality observed |
| define_tpl_struct_inline_move.test | 10 | 0.000819s | 0.000793s | 0.000819s | byte equality observed |
| define_tpl_struct_move.test | 10 | 0.000804s | 0.000798s | 0.000821s | byte equality observed |
| deque_comparison.test | 10 | 0.000801s | 0.000816s | 0.000796s | byte equality observed |
| deque_construction.test | 10 | 0.000809s | 0.000799s | 0.000812s | byte equality observed |
| deque_copy.test | 10 | 0.000810s | 0.000821s | 0.000805s | byte equality observed |
| deque_hash.test | 10 | 0.000791s | 0.000815s | 0.000799s | byte equality observed |
| deque_iterator.test | 10 | 0.000786s | 0.000789s | 0.000820s | byte equality observed |
| deque_make.test | 10 | 0.000801s | 0.000788s | 0.000827s | byte equality observed |
| deque_misc.test | 10 | 0.000813s | 0.000791s | 0.000850s | byte equality observed |
| deque_move.test | 10 | 0.000821s | 0.000819s | 0.000808s | byte equality observed |
| deque_mutate.test | 10 | 0.000808s | 0.000824s | 0.000797s | byte equality observed |
| deque_nest.test | 10 | 0.000792s | 0.000807s | 0.000789s | byte equality observed |
| deque_tie.test | 10 | 0.000790s | 0.000814s | 0.000817s | byte equality observed |
| deque_value_at.test | 10 | 0.000804s | 0.000819s | 0.000816s | byte equality observed |
| erase.test | 10 | 0.000817s | 0.000850s | 0.000833s | byte equality observed |
| erase_key.test | 10 | 0.000833s | 0.000867s | 0.000821s | byte equality observed |
| filter.test | 10 | 0.000838s | 0.000858s | 0.000816s | byte equality observed |
| filter_if.test | 10 | 0.000853s | 0.000835s | 0.000811s | byte equality observed |
| filter_view.test | 10 | 0.000831s | 0.000848s | 0.000810s | byte equality observed |
| find.test | 10 | 0.000819s | 0.000846s | 0.000815s | byte equality observed |
| find_if.test | 10 | 0.000811s | 0.000835s | 0.000809s | byte equality observed |
| flatten.test | 10 | 0.000811s | 0.000805s | 0.000821s | byte equality observed |
| flatten_view.test | 10 | 0.000816s | 0.000822s | 0.000816s | byte equality observed |
| fold.test | 10 | 0.000811s | 0.000819s | 0.000862s | byte equality observed |
| for_each.test | 10 | 0.000808s | 0.000835s | 0.000836s | byte equality observed |
| front_extended_deque.test | 10 | 0.000783s | 0.000825s | 0.000811s | byte equality observed |
| fused.test | 10 | 0.000799s | 0.000815s | 0.000820s | byte equality observed |
| fused_function_object.test | 10 | 0.000807s | 0.000801s | 0.000805s | byte equality observed |
| fused_procedure.test | 10 | 0.000804s | 0.000784s | 0.000810s | byte equality observed |
| github-176.test | 10 | 0.000792s | 0.000801s | 0.000817s | byte equality observed |
| hash.test | 10 | 0.000788s | 0.000824s | 0.000823s | byte equality observed |
| identity_view.test | 10 | 0.000826s | 0.000837s | 0.000802s | byte equality observed |
| insert.test | 10 | 0.000821s | 0.000844s | 0.000840s | byte equality observed |
| insert_range.test | 10 | 0.000846s | 0.000827s | 0.000824s | byte equality observed |
| invoke.test | 10 | 0.000802s | 0.000791s | 0.000822s | byte equality observed |
| invoke_function_object.test | 10 | 0.000820s | 0.000780s | 0.000824s | byte equality observed |
| invoke_procedure.test | 10 | 0.000799s | 0.000789s | 0.000798s | byte equality observed |
| io.test | 10 | 0.000900s | 0.000905s | 0.000903s | byte equality observed |
| iter_fold.test | 10 | 0.000795s | 0.000796s | 0.000837s | byte equality observed |
| iterator_range.test | 10 | 0.000812s | 0.000834s | 0.000864s | byte equality observed |
| join.test | 10 | 0.000811s | 0.000775s | 0.000797s | byte equality observed |
| joint_view.test | 10 | 0.000823s | 0.000813s | 0.000839s | byte equality observed |
| list_comparison.test | 10 | 0.000805s | 0.000789s | 0.000814s | byte equality observed |
| list_construction.test | 10 | 0.000778s | 0.000809s | 0.000782s | byte equality observed |
| list_copy.test | 10 | 0.000791s | 0.000811s | 0.000812s | byte equality observed |
| list_hash.test | 10 | 0.000809s | 0.000804s | 0.000843s | byte equality observed |
| list_iterator.test | 10 | 0.000797s | 0.000815s | 0.000819s | byte equality observed |
| list_make.test | 10 | 0.000795s | 0.000805s | 0.000808s | byte equality observed |
| list_misc.test | 10 | 0.000821s | 0.000783s | 0.000839s | byte equality observed |
| list_mutate.test | 10 | 0.000801s | 0.000796s | 0.000817s | byte equality observed |
| list_nest.test | 10 | 0.000819s | 0.000794s | 0.000821s | byte equality observed |
| list_tie.test | 10 | 0.000799s | 0.000820s | 0.000826s | byte equality observed |
| list_value_at.test | 10 | 0.000806s | 0.000795s | 0.000838s | byte equality observed |
| make_fused.test | 10 | 0.000790s | 0.000801s | 0.000832s | byte equality observed |
| make_fused_function_object.test | 10 | 0.000801s | 0.000786s | 0.000817s | byte equality observed |
| make_fused_procedure.test | 10 | 0.000804s | 0.000816s | 0.000807s | byte equality observed |
| make_list.test | 10 | 0.000804s | 0.000807s | 0.000804s | byte equality observed |
| make_unfused.test | 10 | 0.000795s | 0.000807s | 0.000811s | byte equality observed |
| make_vector.test | 10 | 0.000820s | 0.000820s | 0.000803s | byte equality observed |
| map.test | 10 | 0.000800s | 0.000819s | 0.000838s | byte equality observed |
| map_comparison.test | 10 | 0.000780s | 0.000789s | 0.000803s | byte equality observed |
| map_construction.test | 10 | 0.000801s | 0.000798s | 0.000809s | byte equality observed |
| map_copy.test | 10 | 0.000832s | 0.000782s | 0.000819s | byte equality observed |
| map_misc.test | 10 | 0.000814s | 0.000812s | 0.000837s | byte equality observed |
| map_move.test | 10 | 0.000831s | 0.000812s | 0.000814s | byte equality observed |
| map_mutate.test | 10 | 0.000795s | 0.000815s | 0.000833s | byte equality observed |
| map_tie.test | 10 | 0.000784s | 0.000801s | 0.000843s | byte equality observed |
| move.test | 10 | 0.000827s | 0.000817s | 0.000789s | byte equality observed |
| nil.test | 10 | 0.000809s | 0.000801s | 0.000797s | byte equality observed |
| none.test | 10 | 0.000795s | 0.000803s | 0.000794s | byte equality observed |
| nview.test | 10 | 0.000793s | 0.000819s | 0.000821s | byte equality observed |
| pop_back.test | 10 | 0.000812s | 0.000842s | 0.000833s | byte equality observed |
| pop_front.test | 10 | 0.000834s | 0.000839s | 0.000829s | byte equality observed |
| push_back.test | 10 | 0.000824s | 0.000809s | 0.000828s | byte equality observed |
| push_front.test | 10 | 0.000842s | 0.000826s | 0.000831s | byte equality observed |
| quick.test | 10 | 0.000360s | 0.000758s | 0.000773s | byte equality observed |
| ref_vector.test | 10 | 0.000813s | 0.000802s | 0.000785s | byte equality observed |
| remove.test | 10 | 0.000846s | 0.000833s | 0.000819s | byte equality observed |
| remove_if.test | 10 | 0.000821s | 0.000816s | 0.000821s | byte equality observed |
| repetitive_view.test | 10 | 0.000808s | 0.000785s | 0.000806s | byte equality observed |
| replace.test | 10 | 0.000822s | 0.000825s | 0.000824s | byte equality observed |
| replace_if.test | 10 | 0.000850s | 0.000842s | 0.000832s | byte equality observed |
| reverse.test | 10 | 0.000829s | 0.000821s | 0.000820s | byte equality observed |
| reverse_fold.test | 10 | 0.000836s | 0.000810s | 0.000802s | byte equality observed |
| reverse_iter_fold.test | 10 | 0.000842s | 0.000794s | 0.000848s | byte equality observed |
| reverse_view.test | 10 | 0.000829s | 0.000816s | 0.000829s | byte equality observed |
| segmented_find.test | 10 | 0.000803s | 0.000786s | 0.000806s | byte equality observed |
| segmented_find_if.test | 10 | 0.000803s | 0.000805s | 0.000818s | byte equality observed |
| segmented_fold.test | 10 | 0.000824s | 0.000819s | 0.000848s | byte equality observed |
| segmented_for_each.test | 10 | 0.000811s | 0.000835s | 0.000806s | byte equality observed |
| segmented_iterator_range.test | 10 | 0.000843s | 0.000856s | 0.000851s | byte equality observed |
| set.test | 10 | 0.000844s | 0.000836s | 0.000800s | byte equality observed |
| single_view.test | 10 | 0.000845s | 0.000824s | 0.000800s | byte equality observed |
| std_array.test | 10 | 0.000806s | 0.000834s | 0.000797s | byte equality observed |
| std_pair.test | 10 | 0.000805s | 0.000856s | 0.000790s | byte equality observed |
| std_tuple.test | 10 | 0.000799s | 0.000848s | 0.000782s | byte equality observed |
| std_tuple_iterator.test | 10 | 0.000796s | 0.000809s | 0.000780s | byte equality observed |
| swap.test | 10 | 0.000825s | 0.000820s | 0.000784s | byte equality observed |
| transform.test | 10 | 0.000809s | 0.000811s | 0.000832s | byte equality observed |
| transform_view.test | 10 | 0.000824s | 0.000830s | 0.000841s | byte equality observed |
| tuple_comparison.test | 10 | 0.000794s | 0.000794s | 0.000838s | byte equality observed |
| tuple_construction.test | 10 | 0.000793s | 0.000788s | 0.000833s | byte equality observed |
| tuple_conversion.test | 10 | 0.000793s | 0.000839s | 0.000795s | byte equality observed |
| tuple_copy.test | 10 | 0.000824s | 0.000827s | 0.000775s | byte equality observed |
| tuple_element.test | 10 | 0.000809s | 0.000826s | 0.000797s | byte equality observed |
| tuple_hash.test | 10 | 0.000812s | 0.000850s | 0.000782s | byte equality observed |
| tuple_make.test | 10 | 0.000786s | 0.000850s | 0.000795s | byte equality observed |
| tuple_misc.test | 10 | 0.000798s | 0.000821s | 0.000811s | byte equality observed |
| tuple_mutate.test | 10 | 0.000785s | 0.000816s | 0.000788s | byte equality observed |
| tuple_nest.test | 10 | 0.000777s | 0.000803s | 0.000821s | byte equality observed |
| tuple_tie.test | 10 | 0.000799s | 0.000810s | 0.000801s | byte equality observed |
| tuple_traits__maybe_variadic.test | 10 | 0.000812s | 0.000790s | 0.000824s | byte equality observed |
| tuple_traits__no_variadic.test | 10 | 0.000796s | 0.000806s | 0.000811s | byte equality observed |
| unfused.test | 10 | 0.000793s | 0.000816s | 0.000790s | byte equality observed |
| unfused_typed.test | 10 | 0.000805s | 0.000809s | 0.000782s | byte equality observed |
| vector_comparison.test | 10 | 0.000825s | 0.000807s | 0.000788s | byte equality observed |
| vector_construction.test | 10 | 0.000805s | 0.000816s | 0.000798s | byte equality observed |
| vector_conversion.test | 10 | 0.000811s | 0.000816s | 0.000811s | byte equality observed |
| vector_copy.test | 10 | 0.000817s | 0.000796s | 0.000791s | byte equality observed |
| vector_hash.test | 10 | 0.000825s | 0.000812s | 0.000810s | byte equality observed |
| vector_iterator.test | 10 | 0.000816s | 0.000829s | 0.000798s | byte equality observed |
| vector_make.test | 10 | 0.000829s | 0.000812s | 0.000829s | byte equality observed |
| vector_misc.test | 10 | 0.000829s | 0.000795s | 0.000823s | byte equality observed |
| vector_move.test | 10 | 0.000827s | 0.000844s | 0.000829s | byte equality observed |
| vector_mutate.test | 10 | 0.000813s | 0.000802s | 0.000791s | byte equality observed |
| vector_n.test | 10 | 0.000824s | 0.000814s | 0.000818s | byte equality observed |
| vector_nest.test | 10 | 0.000798s | 0.000776s | 0.000815s | byte equality observed |
| vector_tie.test | 10 | 0.000788s | 0.000803s | 0.000795s | byte equality observed |
| vector_traits__maybe_variadic.test | 10 | 0.000795s | 0.000804s | 0.000814s | byte equality observed |
| vector_traits__no_variadic.test | 10 | 0.000784s | 0.000809s | 0.000823s | byte equality observed |
| vector_value_at.test | 10 | 0.000804s | 0.000772s | 0.000823s | byte equality observed |
| zip.test | 10 | 0.000780s | 0.000778s | 0.000817s | byte equality observed |
| zip2.test | 10 | 0.000788s | 0.000779s | 0.000796s | byte equality observed |
| zip_ignore.test | 10 | 0.000798s | 0.000782s | 0.000789s | byte equality observed |
| zip_view.test | 10 | 0.000807s | 0.000774s | 0.000805s | byte equality observed |
| zip_view2.test | 10 | 0.000806s | 0.000798s | 0.000819s | byte equality observed |
| zip_view_ignore.test | 10 | 0.000793s | 0.000826s | 0.000788s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/43778388618).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
