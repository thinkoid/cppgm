# libs/mp11/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| mp11.test | COMPILE | 0.030302 | 0.060381 | 0.088683 | — | — | — |
| complex_h.test | COMPILE | 0.118622 | 0.255369 | 0.350509 | — | — | — |
| mp_size.test | RUN | 0.143689 | 0.861926 | 0.466012 | 0.001200 | 0.001260 | 0.001244 |
| mp_size_2.test | RUN | 0.012532 | 0.030167 | 0.040817 | 0.000489 | 0.000560 | 0.001085 |
| mp_empty.test | RUN | 0.138661 | 0.529941 | 0.429862 | 0.001133 | 0.001240 | 0.001139 |
| mp_empty_2.test | RUN | 0.012249 | 0.031129 | 0.043332 | 0.000498 | 0.000569 | 0.001074 |
| mp_assign.test | RUN | 0.155622 | 1.135139 | 0.596416 | 0.001173 | 0.001270 | 0.001148 |
| mp_assign_2.test | RUN | 0.012416 | 0.030668 | 0.042567 | 0.000481 | 0.000539 | 0.001099 |
| mp_clear.test | RUN | 0.137562 | 0.481967 | 0.423966 | 0.001227 | 0.001271 | 0.001081 |
| mp_clear_2.test | RUN | 0.013000 | 0.030057 | 0.043586 | 0.000501 | 0.000565 | 0.001190 |
| mp_front.test | RUN | 0.145985 | 0.772253 | 0.512794 | 0.001170 | 0.001395 | 0.001104 |
| mp_front_2.test | RUN | 0.011479 | 0.028764 | 0.043249 | 0.000462 | 0.000543 | 0.001187 |
| mp_pop_front.test | RUN | 0.145317 | 0.803841 | 0.528641 | 0.000997 | 0.001239 | 0.001136 |
| mp_pop_front_2.test | RUN | 0.012533 | 0.030469 | 0.040125 | 0.000468 | 0.000526 | 0.001274 |
| mp_second.test | RUN | 0.134954 | 0.510422 | 0.493455 | 0.001120 | 0.001485 | 0.001038 |
| mp_second_2.test | RUN | 0.012530 | 0.030307 | 0.044257 | 0.000468 | 0.000553 | 0.001337 |
| mp_third.test | RUN | 0.131137 | 0.467890 | 0.446718 | 0.001261 | 0.001334 | 0.001250 |
| mp_third_2.test | RUN | 0.012698 | 0.029383 | 0.043904 | 0.000515 | 0.000434 | 0.001049 |
| mp_push_front.test | RUN | 0.192419 | 1.756448 | 0.837360 | 0.001149 | 0.001303 | 0.001191 |
| mp_push_front_2.test | RUN | 0.012712 | 0.029451 | 0.039986 | 0.000446 | 0.000505 | 0.001222 |
| mp_push_back.test | RUN | 0.188338 | 1.735375 | 0.829280 | 0.001141 | 0.001264 | 0.001126 |
| mp_push_back_2.test | RUN | 0.012450 | 0.030731 | 0.044511 | 0.000475 | 0.000518 | 0.001191 |
| mp_rename.test | RUN | 0.177206 | 1.595241 | 0.713580 | 0.001147 | 0.001392 | 0.001148 |
| mp_rename_2.test | RUN | 0.012024 | 0.030734 | 0.044385 | 0.000446 | 0.000552 | 0.001198 |
| mp_append.test | RUN | 0.182663 | 1.807119 | 0.802299 | 0.001106 | 0.001271 | 0.001237 |
| mp_append_2.test | RUN | 0.408295 | 4.133567 | 1.068288 | 0.001193 | 0.001513 | 0.001111 |
| mp_append_3.test | RUN | 0.012178 | 0.030301 | 0.042813 | 0.000458 | 0.000543 | 0.001216 |
| mp_append_sf.test | RUN | 0.131515 | 0.435340 | 0.431410 | 0.001164 | 0.001320 | 0.001141 |
| mp_replace_front.test | RUN | 0.163457 | 1.281290 | 0.643684 | 0.001218 | 0.001408 | 0.001287 |
| mp_replace_front_2.test | RUN | 0.012705 | 0.031104 | 0.041846 | 0.000472 | 0.000472 | 0.001160 |
| mp_replace_second.test | RUN | 0.161276 | 0.829787 | 0.593830 | 0.001201 | 0.001232 | 0.001177 |
| mp_replace_second_2.test | RUN | 0.012307 | 0.030815 | 0.043615 | 0.000475 | 0.000580 | 0.001183 |
| mp_replace_third.test | RUN | 0.156130 | 0.671573 | 0.534541 | 0.001275 | 0.001350 | 0.001253 |
| mp_replace_third_2.test | RUN | 0.011301 | 0.030290 | 0.041668 | 0.000494 | 0.000482 | 0.001064 |
| mp_apply_q.test | RUN | 0.172027 | 1.593178 | 0.709546 | 0.001363 | 0.001299 | 0.001147 |
| mp_apply_q_sf.test | RUN | 0.134845 | 0.449017 | 0.434690 | 0.001295 | 0.001268 | 0.001131 |
| mp_is_list.test | RUN | 0.137235 | 0.530244 | 0.449810 | 0.000892 | 0.001281 | 0.001244 |
| mp_list_c.test | RUN | 0.147123 | 0.649527 | 0.514006 | 0.001469 | 0.001402 | 0.001075 |
| mp_transform_front.test | RUN | 0.157464 | 1.290509 | 0.606081 | 0.001080 | 0.001442 | 0.001071 |
| mp_transform_front_2.test | RUN | 0.012093 | 0.030307 | 0.043916 | 0.000489 | 0.000616 | 0.001177 |
| mp_transform_second.test | RUN | 0.152670 | 1.108153 | 0.567991 | 0.001147 | 0.001264 | 0.001143 |
| mp_transform_second_2.test | RUN | 0.012549 | 0.030683 | 0.042894 | 0.000538 | 0.000556 | 0.001007 |
| mp_transform_third.test | RUN | 0.141509 | 0.833659 | 0.505572 | 0.001220 | 0.001407 | 0.001133 |
| mp_transform_third_2.test | RUN | 0.012250 | 0.030395 | 0.041406 | 0.000470 | 0.000422 | 0.001009 |
| mp_list_v.test | RUN | 0.011892 | 0.030415 | 0.039658 | 0.000519 | 0.000541 | 0.001075 |
| mp_rename_v.test | RUN | 0.012061 | 0.030572 | 0.040611 | 0.000421 | 0.000447 | 0.001034 |
| mp_is_value_list.test | RUN | 0.129389 | 0.329000 | 0.408578 | 0.001157 | 0.001487 | 0.001148 |
| mp_transform.test | RUN | 0.331768 | 2.770990 | 1.361420 | 0.001399 | 0.001381 | 0.001143 |
| mp_transform_2.test | RUN | 0.125643 | 0.289306 | 0.397451 | 0.001086 | 0.001416 | 0.001112 |
| mp_transform_q.test | RUN | 0.325862 | 2.615157 | 1.290758 | 0.001277 | 0.001275 | 0.001123 |
| mp_transform_q_2.test | RUN | 0.338282 | 0.826518 | 1.648381 | 0.001215 | 0.001233 | 0.001149 |
| mp_transform_sf.test | RUN | 0.143057 | 0.448384 | 0.467285 | 0.001150 | 0.001381 | 0.001127 |
| mp_transform_if.test | RUN | 0.176696 | 1.298185 | 0.703915 | 0.001136 | 0.001239 | 0.001221 |
| mp_transform_if_q.test | RUN | 0.180763 | 1.305634 | 0.706802 | 0.001106 | 0.001252 | 0.001060 |
| mp_filter.test | RUN | 0.152121 | 0.750771 | 0.515566 | 0.001050 | 0.001338 | 0.001198 |
| mp_fill.test | RUN | 0.149719 | 0.568987 | 0.506084 | 0.001251 | 0.001505 | 0.001211 |
| mp_fill_2.test | RUN | 0.022287 | 0.048079 | 0.069201 | 0.000471 | 0.000581 | 0.001116 |
| mp_count.test | RUN | 0.282240 | 1.393063 | 0.790090 | 0.001185 | 0.001195 | 0.001186 |
| mp_count_if.test | RUN | 0.286836 | 1.413516 | 0.838520 | 0.001099 | 0.001215 | 0.001066 |
| mp_count_if_q.test | RUN | 0.148007 | 0.919323 | 0.493173 | 0.001424 | 0.001326 | 0.001299 |
| mp_contains.test | RUN | 0.142751 | 0.546680 | 0.470667 | 0.001060 | 0.001295 | 0.001112 |
| mp_starts_with.test | RUN | 0.142129 | 0.554766 | 0.478706 | 0.001216 | 0.001506 | 0.001162 |
| mp_starts_with_sf.test | RUN | 0.138576 | 0.461034 | 0.443873 | 0.001238 | 0.001318 | 0.001136 |
| mp_repeat.test | RUN | 0.212269 | 2.308424 | 0.896116 | 0.001257 | 0.001260 | 0.001120 |
| mp_repeat_2.test | RUN | 0.021884 | 0.046206 | 0.071808 | 0.000460 | 0.000607 | 0.001173 |
| mp_repeat_3.test | RUN | 0.175641 | 0.297549 | 0.443476 | 0.001417 | 0.000967 | 0.001216 |
| mp_product.test | RUN | 0.164292 | 1.378689 | 0.664226 | 0.001213 | 0.001312 | 0.001122 |
| mp_drop.test | RUN | 0.181297 | 1.740412 | 0.736839 | 0.001074 | 0.001302 | 0.001155 |
| mp_drop_2.test | RUN | 0.022138 | 0.047120 | 0.073779 | 0.000486 | 0.000549 | 0.001132 |
| mp_iota.test | RUN | 0.173374 | 1.466671 | 0.660624 | 0.001126 | 0.001225 | 0.001173 |
| mp_iota_2.test | RUN | 0.188077 | 1.755262 | 0.756125 | 0.001184 | 0.001300 | 0.001139 |
| mp_at.test | RUN | 0.151291 | 0.762623 | 0.530287 | 0.001132 | 0.001264 | 0.001127 |
| mp_at_2.test | RUN | 0.021671 | 0.046712 | 0.070738 | 0.000465 | 0.000560 | 0.001300 |
| mp_at_sf.test | RUN | 0.141763 | 0.462534 | 0.456689 | 0.001347 | 0.001386 | 0.001150 |
| mp_take.test | RUN | 0.246485 | 2.288236 | 0.896086 | 0.001330 | 0.001295 | 0.001204 |
| mp_take_2.test | RUN | 0.021851 | 0.047193 | 0.068939 | 0.000466 | 0.000521 | 0.001051 |
| mp_slice.test | RUN | 0.292651 | 2.317458 | 1.161572 | 0.001237 | 0.001317 | 0.001164 |
| mp_slice_2.test | RUN | 0.021447 | 0.047441 | 0.071381 | 0.000535 | 0.000578 | 0.001096 |
| mp_replace.test | RUN | 0.171257 | 1.166178 | 0.725776 | 0.001237 | 0.001331 | 0.001163 |
| mp_replace_if.test | RUN | 0.172810 | 1.019274 | 0.677778 | 0.001460 | 0.001289 | 0.001151 |
| mp_replace_if_q.test | RUN | 0.170082 | 1.036829 | 0.672086 | 0.001274 | 0.001418 | 0.001231 |
| mp_copy_if.test | RUN | 0.173864 | 1.452360 | 0.637194 | 0.001546 | 0.001316 | 0.001132 |
| mp_copy_if_q.test | RUN | 0.174094 | 1.427902 | 0.648827 | 0.001436 | 0.001189 | 0.001015 |
| mp_remove.test | RUN | 0.168126 | 0.969772 | 0.666141 | 0.001424 | 0.001281 | 0.001145 |
| mp_remove_if.test | RUN | 0.176979 | 1.533014 | 0.676070 | 0.001232 | 0.001519 | 0.001081 |
| mp_remove_if_q.test | RUN | 0.179379 | 1.538381 | 0.685125 | 0.001330 | 0.001263 | 0.001121 |
| mp_partition.test | RUN | 0.177210 | 1.433664 | 0.731280 | 0.001232 | 0.001434 | 0.001138 |
| mp_partition_q.test | RUN | 0.175778 | 1.434300 | 0.743259 | 0.001293 | 0.001290 | 0.001229 |
| mp_sort.test | RUN | 0.163894 | 1.034733 | 0.631822 | 0.001229 | 0.001264 | 0.001206 |
| mp_sort_q.test | RUN | 0.166803 | 1.016899 | 0.636995 | 0.001362 | 0.001359 | 0.001253 |
| mp_find.test | RUN | 0.158722 | 1.113606 | 0.550541 | 0.001334 | 0.001413 | 0.001231 |
| mp_find_if.test | RUN | 0.160541 | 1.006968 | 0.530417 | 0.001268 | 0.001256 | 0.001106 |
| mp_find_if_q.test | RUN | 0.175131 | 1.129825 | 0.633496 | 0.001371 | 0.001290 | 0.001133 |
| mp_reverse.test | RUN | 0.374351 | 3.039017 | 1.273316 | 0.001240 | 0.001487 | 0.001217 |
| mp_fold.test | RUN | 0.629352 | 2.381597 | 3.242864 | 0.001600 | 0.001354 | 0.001112 |
| mp_fold_q.test | RUN | 0.160979 | 1.004115 | 0.612353 | 0.001302 | 0.001354 | 0.001161 |
| mp_fold_q_sf.test | RUN | 0.141376 | 0.467307 | 0.462389 | 0.001139 | 0.001294 | 0.001112 |
| mp_reverse_fold.test | RUN | 0.293975 | 2.262670 | 0.904752 | 0.001282 | 0.001258 | 0.001146 |
| mp_reverse_fold_q.test | RUN | 0.166789 | 1.231266 | 0.640861 | 0.001171 | 0.001491 | 0.001347 |
| mp_unique.test | RUN | 0.166917 | 1.109057 | 0.629205 | 0.001058 | 0.001490 | 0.001209 |
| mp_unique_if.test | RUN | 0.308786 | 2.375510 | 1.000965 | 0.001175 | 0.001394 | 0.001078 |
| mp_unique_if_q.test | RUN | 0.266725 | 2.338424 | 0.836590 | 0.001177 | 0.001418 | 0.001151 |
| mp_all_of.test | RUN | 0.400376 | 1.273655 | 1.059087 | 0.001289 | 0.001284 | 0.001176 |
| mp_all_of_q.test | RUN | 0.139559 | 0.530837 | 0.464862 | 0.001216 | 0.001325 | 0.001254 |
| mp_any_of.test | RUN | 0.396420 | 1.304283 | 1.026669 | 0.001162 | 0.001400 | 0.001218 |
| mp_any_of_q.test | RUN | 0.140549 | 0.540681 | 0.473355 | 0.001315 | 0.001262 | 0.001333 |
| mp_none_of.test | RUN | 0.396840 | 1.298650 | 1.022568 | 0.001286 | 0.001474 | 0.001257 |
| mp_none_of_q.test | RUN | 0.142270 | 0.543952 | 0.470712 | 0.001459 | 0.001249 | 0.001212 |
| mp_replace_at.test | RUN | 0.173580 | 1.115856 | 0.723574 | 0.001340 | 0.001461 | 0.001250 |
| mp_replace_at_c.test | RUN | 0.178644 | 1.112405 | 0.719314 | 0.001190 | 0.001199 | 0.001245 |
| mp_for_each.test | RUN | 0.168118 | 0.717805 | 0.711973 | 0.001261 | 0.001196 | 0.001112 |
| mp_insert.test | RUN | 0.279075 | 2.299943 | 1.058795 | 0.001355 | 0.001227 | 0.001130 |
| mp_insert_2.test | RUN | 0.021976 | 0.047012 | 0.067901 | 0.000550 | 0.000467 | 0.001307 |
| mp_erase.test | RUN | 0.302022 | 2.434391 | 1.236814 | 0.001325 | 0.001307 | 0.001089 |
| mp_erase_2.test | RUN | 0.021610 | 0.044635 | 0.073098 | 0.000489 | 0.000524 | 0.001186 |
| mp_with_index.test | RUN | 0.393270 | 4.854889 | 2.657759 | 0.001595 | 0.001687 | 0.001337 |
| mp_with_index_cx.test | RUN | 0.002973 | 0.014319 | 0.021927 | 0.000492 | 0.000553 | 0.001153 |
| mp_from_sequence.test | RUN | 0.172514 | 1.255539 | 0.679795 | 0.001194 | 0.001199 | 0.001153 |
| mp_from_sequence_2.test | RUN | 0.188056 | 1.505028 | 0.753032 | 0.001215 | 0.001313 | 0.001145 |
| mp_from_sequence_3.test | RUN | 0.151848 | 0.642286 | 0.523033 | 0.001182 | 0.001276 | 0.001150 |
| mp_min_element.test | RUN | 0.147012 | 0.598598 | 0.489761 | 0.001159 | 0.001372 | 0.001110 |
| mp_min_element_2.test | RUN | 0.021463 | 0.046822 | 0.073313 | 0.000506 | 0.000478 | 0.001131 |
| mp_min_element_q.test | RUN | 0.148579 | 0.585416 | 0.482196 | 0.001384 | 0.001282 | 0.001062 |
| mp_min_element_q_2.test | RUN | 0.022112 | 0.047060 | 0.071005 | 0.000565 | 0.000423 | 0.001097 |
| mp_max_element.test | RUN | 0.145547 | 0.592541 | 0.473755 | 0.001392 | 0.001409 | 0.001077 |
| mp_max_element_2.test | RUN | 0.021560 | 0.045504 | 0.067600 | 0.000450 | 0.000489 | 0.001014 |
| mp_max_element_q.test | RUN | 0.146167 | 0.586551 | 0.488550 | 0.001221 | 0.001230 | 0.001153 |
| mp_max_element_q_2.test | RUN | 0.023271 | 0.047943 | 0.069669 | 0.000488 | 0.000529 | 0.001077 |
| mp_nth_element.test | RUN | 0.164440 | 0.845738 | 0.595803 | 0.001285 | 0.001289 | 0.001038 |
| mp_nth_element_q.test | RUN | 0.158815 | 0.834793 | 0.587349 | 0.001265 | 0.001188 | 0.001133 |
| mp_back.test | RUN | 0.160216 | 0.679614 | 0.552767 | 0.001234 | 0.001275 | 0.001051 |
| mp_back_2.test | RUN | 0.022688 | 0.046514 | 0.072434 | 0.000508 | 0.000446 | 0.001093 |
| mp_pop_back.test | RUN | 0.460962 | 4.661174 | 1.235303 | 0.001294 | 0.001274 | 0.001080 |
| mp_pop_back_2.test | RUN | 0.022712 | 0.046506 | 0.065297 | 0.000507 | 0.000466 | 0.001076 |
| mp_flatten.test | RUN | 0.186276 | 1.650483 | 0.809025 | 0.001236 | 0.001378 | 0.001039 |
| mp_rotate_left.test | RUN | 0.189103 | 1.770465 | 0.789455 | 0.001073 | 0.001323 | 0.001158 |
| mp_rotate_right.test | RUN | 0.189529 | 1.774984 | 0.799051 | 0.001246 | 0.001232 | 0.001180 |
| mp_power_set.test | RUN | 0.184244 | 1.714269 | 0.809640 | 0.001310 | 0.001352 | 0.001137 |
| mp_partial_sum.test | RUN | 0.253845 | 2.271110 | 0.921113 | 0.001223 | 0.001372 | 0.001100 |
| mp_iterate.test | RUN | 0.168664 | 0.672380 | 0.633345 | 0.001318 | 0.001360 | 0.001103 |
| mp_pairwise_fold.test | RUN | 0.188830 | 1.586329 | 0.819663 | 0.001152 | 0.001235 | 0.001052 |
| mp_pairwise_fold_q.test | RUN | 0.146796 | 0.445255 | 0.460224 | 0.001335 | 0.001263 | 0.001220 |
| mp_sliding_fold.test | RUN | 0.375146 | 3.060438 | 1.528286 | 0.001311 | 0.001315 | 0.001225 |
| mp_sliding_fold_q.test | RUN | 0.369773 | 3.032279 | 1.541284 | 0.001202 | 0.000935 | 0.001143 |
| mp_intersperse.test | RUN | 0.173547 | 1.115066 | 0.702341 | 0.001128 | 0.001286 | 0.001162 |
| mp_split.test | RUN | 0.259613 | 2.152527 | 0.994599 | 0.001151 | 0.001349 | 0.001065 |
| mp_join.test | RUN | 0.201955 | 1.794556 | 0.873238 | 0.001228 | 0.001212 | 0.001117 |
| integral.test | RUN | 0.147270 | 0.795705 | 0.535049 | 0.001172 | 0.001397 | 0.001112 |
| mp_value.test | RUN | 0.009722 | 0.024641 | 0.034092 | 0.000485 | 0.000514 | 0.001030 |
| mp_identity.test | RUN | 0.140853 | 0.726981 | 0.486130 | 0.001168 | 0.001105 | 0.001043 |
| mp_inherit.test | RUN | 0.135988 | 0.517552 | 0.465387 | 0.001147 | 0.001155 | 0.001166 |
| mp_if.test | RUN | 0.134739 | 0.590481 | 0.457599 | 0.001238 | 0.001308 | 0.001089 |
| mp_if_sf.test | RUN | 0.129085 | 0.434111 | 0.421208 | 0.001266 | 0.001333 | 0.001081 |
| mp_eval_if.test | RUN | 0.141891 | 0.635991 | 0.473192 | 0.001163 | 0.001355 | 0.001191 |
| mp_eval_if_sf.test | RUN | 0.137277 | 0.445638 | 0.428686 | 0.001298 | 0.001236 | 0.001123 |
| mp_valid.test | RUN | 0.134456 | 0.451845 | 0.429560 | 0.001257 | 0.001205 | 0.001114 |
| mp_defer.test | RUN | 0.147064 | 0.759010 | 0.529632 | 0.001344 | 0.001298 | 0.001159 |
| mp_quote.test | RUN | 0.152181 | 0.779740 | 0.535776 | 0.001364 | 0.001482 | 0.001074 |
| mp_invoke_q.test | RUN | 0.161943 | 1.022320 | 0.605632 | 0.001207 | 0.001368 | 0.001103 |
| mp_invoke_q_sf.test | RUN | 0.131494 | 0.451065 | 0.419713 | 0.001231 | 0.001396 | 0.001113 |
| mp_quote_trait.test | RUN | 0.144799 | 0.855512 | 0.522586 | 0.001315 | 0.001379 | 0.001212 |
| mp_cond.test | RUN | 0.135663 | 0.515460 | 0.445598 | 0.001147 | 0.001305 | 0.001110 |
| mp_cond_sf.test | RUN | 0.137965 | 0.455597 | 0.426666 | 0.001133 | 0.001390 | 0.001087 |
| mp_not_fn.test | RUN | 0.130145 | 0.444101 | 0.409535 | 0.001230 | 0.001214 | 0.001070 |
| mp_eval_if_not.test | RUN | 0.140716 | 0.630960 | 0.478968 | 0.001240 | 0.001216 | 0.001183 |
| mp_eval_or.test | RUN | 0.131797 | 0.330849 | 0.433321 | 0.001164 | 0.001334 | 0.001094 |
| mp_compose.test | RUN | 0.157425 | 1.045698 | 0.579265 | 0.001101 | 0.001290 | 0.001108 |
| mp_valid_and_true.test | RUN | 0.136928 | 0.530886 | 0.444224 | 0.001228 | 0.001314 | 0.001117 |
| mp_compose_sf.test | COMPILE | 0.030339 | 0.060915 | 0.095871 | — | — | — |
| integer_sequence.test | RUN | 0.166066 | 1.034868 | 0.663496 | 0.001190 | 0.001330 | 0.001072 |
| tuple_for_each.test | RUN | 0.132309 | 0.373338 | 0.452888 | 0.001211 | 0.001213 | 0.001082 |
| tuple_for_each_cx.test | COMPILE | 0.024887 | 0.054212 | 0.076705 | — | — | — |
| tuple_apply.test | RUN | 0.139670 | 0.371858 | 0.473910 | 0.001187 | 0.001297 | 0.001080 |
| tuple_apply_cx.test | COMPILE | 0.037808 | 0.075554 | 0.104825 | — | — | — |
| construct_from_tuple.test | RUN | 0.141449 | 0.399972 | 0.454720 | 0.001167 | 0.001300 | 0.001184 |
| construct_from_tuple_cx.test | COMPILE | 0.037918 | 0.076236 | 0.107168 | — | — | — |
| tuple_transform.test | RUN | 0.222890 | 0.834725 | 0.903271 | 0.001506 | 0.001286 | 0.001175 |
| tuple_transform_2.test | RUN | 0.195358 | 0.612299 | 0.810125 | 0.001341 | 0.001300 | 0.001094 |
| tuple_transform_cx.test | COMPILE | 0.032566 | 0.070531 | 0.105097 | — | — | — |
| mp_set_contains.test | RUN | 0.140408 | 0.536325 | 0.475696 | 0.001199 | 0.001245 | 0.001120 |
| mp_set_push_back.test | RUN | 0.188623 | 1.692481 | 0.801028 | 0.001315 | 0.001383 | 0.001086 |
| mp_set_push_front.test | RUN | 0.256965 | 2.046565 | 0.923315 | 0.001308 | 0.001408 | 0.001162 |
| mp_is_set.test | RUN | 0.140156 | 0.547265 | 0.476962 | 0.001305 | 0.001498 | 0.001126 |
| mp_set_union.test | RUN | 0.179188 | 1.456647 | 0.759128 | 0.001112 | 0.001360 | 0.001105 |
| mp_set_union_sf.test | RUN | 0.138056 | 0.435169 | 0.428046 | 0.001144 | 0.001344 | 0.001150 |
| mp_set_difference.test | RUN | 0.165013 | 1.132270 | 0.651547 | 0.001232 | 0.001250 | 0.001070 |
| mp_set_difference_sf.test | RUN | 0.135254 | 0.430829 | 0.421060 | 0.001116 | 0.001382 | 0.001267 |
| mp_set_intersection.test | RUN | 0.163532 | 1.127148 | 0.626855 | 0.001126 | 0.001296 | 0.001091 |
| mp_set_intersection_sf.test | RUN | 0.139493 | 0.429499 | 0.433994 | 0.001168 | 0.001226 | 0.001022 |
| mp_all.test | RUN | 0.139716 | 0.540172 | 0.454788 | 0.001188 | 0.001297 | 0.001247 |
| mp_all_2.test | RUN | 0.410363 | 1.181219 | 1.057642 | 0.001394 | 0.001333 | 0.001181 |
| mp_and.test | RUN | 0.141746 | 0.535761 | 0.447345 | 0.001222 | 0.001266 | 0.001072 |
| mp_any.test | RUN | 0.140277 | 0.544605 | 0.464705 | 0.001252 | 0.001432 | 0.001130 |
| mp_any_2.test | RUN | 0.403195 | 1.165569 | 1.044809 | 0.001215 | 0.001326 | 0.001147 |
| mp_or.test | RUN | 0.139069 | 0.543327 | 0.443249 | 0.001315 | 0.001277 | 0.001140 |
| mp_same.test | RUN | 0.277537 | 0.899341 | 0.724334 | 0.001200 | 0.001261 | 0.001069 |
| mp_plus.test | RUN | 0.145332 | 0.636426 | 0.513719 | 0.001333 | 0.001111 | 0.001103 |
| mp_less.test | RUN | 0.142168 | 0.517358 | 0.440821 | 0.001141 | 0.001093 | 0.001076 |
| mp_min.test | RUN | 0.140444 | 0.483319 | 0.448405 | 0.001023 | 0.001306 | 0.001088 |
| mp_max.test | RUN | 0.141683 | 0.550097 | 0.453749 | 0.001489 | 0.001186 | 0.001119 |
| mp_similar.test | RUN | 0.138328 | 0.532421 | 0.456346 | 0.001175 | 0.001292 | 0.001165 |
| mp_map_find.test | RUN | 0.162913 | 0.990940 | 0.602756 | 0.001200 | 0.000923 | 0.001127 |
| mp_map_find_2.test | RUN | 0.148710 | 0.384720 | 0.523706 | 0.001149 | 0.001301 | 0.001208 |
| mp_map_find_3.test | RUN | 0.149257 | 0.373011 | 0.507933 | 0.001118 | 0.001165 | 0.001072 |
| mp_map_find_4.test | RUN | 0.142718 | 0.359284 | 0.473093 | 0.001329 | 0.001226 | 0.001053 |
| mp_map_contains.test | RUN | 0.147942 | 0.551422 | 0.471124 | 0.001306 | 0.001344 | 0.001045 |
| mp_map_insert.test | RUN | 0.195393 | 1.912279 | 0.873110 | 0.001377 | 0.001372 | 0.001208 |
| mp_map_replace.test | RUN | 0.268591 | 2.192445 | 1.016023 | 0.001191 | 0.001472 | 0.001015 |
| mp_map_erase.test | RUN | 0.189519 | 1.616859 | 0.838780 | 0.001490 | 0.001354 | 0.001067 |
| mp_map_update.test | RUN | 0.162230 | 1.035974 | 0.633715 | 0.001154 | 0.001297 | 0.001088 |
| mp_map_update_q.test | RUN | 0.166216 | 1.037390 | 0.639150 | 0.001276 | 0.001397 | 0.001082 |
| mp_map_keys.test | RUN | 0.163175 | 0.915697 | 0.624848 | 0.001286 | 0.001371 | 0.001029 |
| mp_is_map.test | RUN | 0.146300 | 0.557158 | 0.491708 | 0.001225 | 0.001312 | 0.001142 |
| mp_bind.test | RUN | 0.186108 | 1.698329 | 0.745899 | 0.001147 | 0.001271 | 0.001166 |
| mp_bind_q.test | RUN | 0.165309 | 1.043185 | 0.595980 | 0.001465 | 0.001342 | 0.000839 |
| mp_bind_front.test | RUN | 0.159474 | 1.138601 | 0.582891 | 0.001200 | 0.001187 | 0.001276 |
| mp_bind_back.test | RUN | 0.157458 | 1.132968 | 0.582219 | 0.001134 | 0.001431 | 0.001099 |
| mp_lambda.test | RUN | 0.384591 | 3.428765 | 1.587395 | 0.001242 | 0.000975 | 0.001068 |
| mpl.test | RUN | 0.333448 | 0.878080 | 1.247706 | 0.001357 | 0.001220 | 0.001041 |
| mpl_list.test | RUN | 0.176156 | 0.668073 | 0.563462 | 0.001186 | 0.001404 | 0.001224 |
| mpl_tuple.test | RUN | 0.175918 | 0.669073 | 0.569242 | 0.001202 | 0.001330 | 0.001182 |
| version.test | RUN | 0.091121 | 0.237974 | 0.299786 | 0.001461 | 0.001292 | 0.001138 |
| mp11_version.test | RUN | 0.111753 | 0.270477 | 0.334780 | 0.001066 | 0.001256 | 0.001161 |
| list_version.test | RUN | 0.091075 | 0.245301 | 0.293906 | 0.001385 | 0.001234 | 0.001071 |
| algorithm_version.test | RUN | 0.105704 | 0.257454 | 0.306636 | 0.001432 | 0.000945 | 0.001129 |
| integral_version.test | RUN | 0.090386 | 0.232733 | 0.278930 | 0.001421 | 0.001194 | 0.000964 |
| utility_version.test | RUN | 0.091761 | 0.241095 | 0.285659 | 0.001218 | 0.001155 | 0.001028 |
| function_version.test | RUN | 0.097864 | 0.241711 | 0.293496 | 0.001073 | 0.001354 | 0.001242 |
| map_version.test | RUN | 0.104590 | 0.259672 | 0.312157 | 0.001386 | 0.001312 | 0.001109 |
| set_version.test | RUN | 0.088894 | 0.239860 | 0.295735 | 0.001149 | 0.001307 | 0.000921 |
| bind_version.test | RUN | 0.103561 | 0.259047 | 0.311161 | 0.001121 | 0.001485 | 0.001068 |
| integer_sequence_version.test | RUN | 0.090136 | 0.234483 | 0.220481 | 0.001233 | 0.001185 | 0.000801 |
| tuple_version.test | RUN | 0.095792 | 0.253360 | 0.311661 | 0.000920 | 0.001244 | 0.000808 |
| mpl_version.test | RUN | 0.080338 | 0.175973 | 0.317637 | 0.000914 | 0.000952 | 0.000775 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.996× | 0.993×, 0.998× | 1.001× |
| clang | 1.089× | 1.092×, 1.086× | 1.002× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1363 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44560957980).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| algorithm_version.test | 10 | 0.000742s | 0.000724s | 0.000747s | byte equality observed |
| bind_version.test | 10 | 0.000744s | 0.000746s | 0.000753s | byte equality observed |
| construct_from_tuple.test | 10 | 0.000738s | 0.000724s | 0.000746s | byte equality observed |
| function_version.test | 10 | 0.000751s | 0.000725s | 0.000744s | byte equality observed |
| integer_sequence.test | 10 | 0.000746s | 0.000744s | 0.000753s | byte equality observed |
| integer_sequence_version.test | 10 | 0.000732s | 0.000709s | 0.000749s | byte equality observed |
| integral.test | 10 | 0.000742s | 0.000725s | 0.000739s | byte equality observed |
| integral_version.test | 10 | 0.000743s | 0.000734s | 0.000753s | byte equality observed |
| list_version.test | 10 | 0.000747s | 0.000722s | 0.000755s | byte equality observed |
| map_version.test | 10 | 0.000746s | 0.000728s | 0.000757s | byte equality observed |
| mp11_version.test | 10 | 0.000754s | 0.000719s | 0.000779s | byte equality observed |
| mp_all.test | 10 | 0.000729s | 0.000746s | 0.000797s | byte equality observed |
| mp_all_2.test | 10 | 0.000749s | 0.000728s | 0.000833s | byte equality observed |
| mp_all_of.test | 10 | 0.000747s | 0.000714s | 0.000794s | byte equality observed |
| mp_all_of_q.test | 10 | 0.000744s | 0.000707s | 0.000810s | byte equality observed |
| mp_and.test | 10 | 0.000731s | 0.000732s | 0.000809s | byte equality observed |
| mp_any.test | 10 | 0.000731s | 0.000730s | 0.000808s | byte equality observed |
| mp_any_2.test | 10 | 0.000737s | 0.000713s | 0.000819s | byte equality observed |
| mp_any_of.test | 10 | 0.000743s | 0.000731s | 0.000797s | byte equality observed |
| mp_any_of_q.test | 10 | 0.000749s | 0.000717s | 0.000825s | byte equality observed |
| mp_append.test | 10 | 0.000754s | 0.000715s | 0.000805s | byte equality observed |
| mp_append_2.test | 10 | 0.000812s | 0.000723s | 0.000831s | byte equality observed |
| mp_append_3.test | 10 | 0.000373s | 0.000316s | 0.000780s | byte equality observed |
| mp_append_sf.test | 10 | 0.000805s | 0.000724s | 0.000814s | byte equality observed |
| mp_apply_q.test | 10 | 0.000833s | 0.000723s | 0.000794s | byte equality observed |
| mp_apply_q_sf.test | 10 | 0.000828s | 0.000726s | 0.000794s | byte equality observed |
| mp_assign.test | 10 | 0.000835s | 0.000715s | 0.000799s | byte equality observed |
| mp_assign_2.test | 10 | 0.000356s | 0.000342s | 0.000799s | byte equality observed |
| mp_at.test | 10 | 0.000806s | 0.000744s | 0.000779s | byte equality observed |
| mp_at_2.test | 10 | 0.000366s | 0.000344s | 0.000772s | byte equality observed |
| mp_at_sf.test | 10 | 0.000826s | 0.000754s | 0.000799s | byte equality observed |
| mp_back.test | 10 | 0.000818s | 0.000743s | 0.000794s | byte equality observed |
| mp_back_2.test | 10 | 0.000359s | 0.000359s | 0.000789s | byte equality observed |
| mp_bind.test | 10 | 0.000791s | 0.000776s | 0.000797s | byte equality observed |
| mp_bind_back.test | 10 | 0.000810s | 0.000838s | 0.000813s | byte equality observed |
| mp_bind_front.test | 10 | 0.000805s | 0.000828s | 0.000826s | byte equality observed |
| mp_bind_q.test | 10 | 0.000832s | 0.000865s | 0.000827s | byte equality observed |
| mp_clear.test | 10 | 0.000824s | 0.000851s | 0.000800s | byte equality observed |
| mp_clear_2.test | 10 | 0.000361s | 0.000352s | 0.000802s | byte equality observed |
| mp_compose.test | 10 | 0.000802s | 0.000806s | 0.000798s | byte equality observed |
| mp_cond.test | 10 | 0.000780s | 0.000819s | 0.000799s | byte equality observed |
| mp_cond_sf.test | 10 | 0.000818s | 0.000846s | 0.000807s | byte equality observed |
| mp_contains.test | 10 | 0.000841s | 0.000802s | 0.000807s | byte equality observed |
| mp_copy_if.test | 10 | 0.000815s | 0.000809s | 0.000782s | byte equality observed |
| mp_copy_if_q.test | 10 | 0.000826s | 0.000810s | 0.000802s | byte equality observed |
| mp_count.test | 10 | 0.000800s | 0.000804s | 0.000791s | byte equality observed |
| mp_count_if.test | 10 | 0.000819s | 0.000797s | 0.000827s | byte equality observed |
| mp_count_if_q.test | 10 | 0.000808s | 0.000824s | 0.000825s | byte equality observed |
| mp_defer.test | 10 | 0.000823s | 0.000828s | 0.000807s | byte equality observed |
| mp_drop.test | 10 | 0.000811s | 0.000827s | 0.000813s | byte equality observed |
| mp_drop_2.test | 10 | 0.000364s | 0.000368s | 0.000796s | byte equality observed |
| mp_empty.test | 10 | 0.000807s | 0.000814s | 0.000801s | byte equality observed |
| mp_empty_2.test | 10 | 0.000362s | 0.000359s | 0.000776s | byte equality observed |
| mp_erase.test | 10 | 0.000815s | 0.000818s | 0.000805s | byte equality observed |
| mp_erase_2.test | 10 | 0.000362s | 0.000368s | 0.000797s | byte equality observed |
| mp_eval_if.test | 10 | 0.000816s | 0.000793s | 0.000819s | byte equality observed |
| mp_eval_if_not.test | 10 | 0.000814s | 0.000802s | 0.000794s | byte equality observed |
| mp_eval_if_sf.test | 10 | 0.000805s | 0.000817s | 0.000798s | byte equality observed |
| mp_eval_or.test | 10 | 0.000788s | 0.000825s | 0.000787s | byte equality observed |
| mp_fill.test | 10 | 0.000796s | 0.000822s | 0.000800s | byte equality observed |
| mp_fill_2.test | 10 | 0.000374s | 0.000364s | 0.000787s | byte equality observed |
| mp_filter.test | 10 | 0.000810s | 0.000842s | 0.000802s | byte equality observed |
| mp_find.test | 10 | 0.000830s | 0.000782s | 0.000797s | byte equality observed |
| mp_find_if.test | 10 | 0.000828s | 0.000797s | 0.000805s | byte equality observed |
| mp_find_if_q.test | 10 | 0.000829s | 0.000816s | 0.000843s | byte equality observed |
| mp_flatten.test | 10 | 0.000803s | 0.000838s | 0.000794s | byte equality observed |
| mp_fold.test | 10 | 0.000822s | 0.000825s | 0.000791s | byte equality observed |
| mp_fold_q.test | 10 | 0.000808s | 0.000811s | 0.000800s | byte equality observed |
| mp_fold_q_sf.test | 10 | 0.000812s | 0.000812s | 0.000824s | byte equality observed |
| mp_for_each.test | 10 | 0.000792s | 0.000808s | 0.000805s | byte equality observed |
| mp_from_sequence.test | 10 | 0.000798s | 0.000825s | 0.000818s | byte equality observed |
| mp_from_sequence_2.test | 10 | 0.000806s | 0.000807s | 0.000780s | byte equality observed |
| mp_from_sequence_3.test | 10 | 0.000805s | 0.000814s | 0.000819s | byte equality observed |
| mp_front.test | 10 | 0.000816s | 0.000811s | 0.000799s | byte equality observed |
| mp_front_2.test | 10 | 0.000368s | 0.000372s | 0.000809s | byte equality observed |
| mp_identity.test | 10 | 0.000797s | 0.000809s | 0.000802s | byte equality observed |
| mp_if.test | 10 | 0.000825s | 0.000819s | 0.000801s | byte equality observed |
| mp_if_sf.test | 10 | 0.000815s | 0.000806s | 0.000776s | byte equality observed |
| mp_inherit.test | 10 | 0.000808s | 0.000810s | 0.000844s | byte equality observed |
| mp_insert.test | 10 | 0.000820s | 0.000814s | 0.000826s | byte equality observed |
| mp_insert_2.test | 10 | 0.000359s | 0.000367s | 0.000783s | byte equality observed |
| mp_intersperse.test | 10 | 0.000806s | 0.000818s | 0.000788s | byte equality observed |
| mp_invoke_q.test | 10 | 0.000823s | 0.000786s | 0.000821s | byte equality observed |
| mp_invoke_q_sf.test | 10 | 0.000834s | 0.000802s | 0.000802s | byte equality observed |
| mp_iota.test | 10 | 0.000797s | 0.000799s | 0.000812s | byte equality observed |
| mp_iota_2.test | 10 | 0.000804s | 0.000792s | 0.000837s | byte equality observed |
| mp_is_list.test | 10 | 0.000794s | 0.000806s | 0.000828s | byte equality observed |
| mp_is_map.test | 10 | 0.000800s | 0.000803s | 0.000781s | byte equality observed |
| mp_is_set.test | 10 | 0.000785s | 0.000819s | 0.000790s | byte equality observed |
| mp_is_value_list.test | 10 | 0.000794s | 0.000803s | 0.000795s | byte equality observed |
| mp_iterate.test | 10 | 0.000807s | 0.000808s | 0.000835s | byte equality observed |
| mp_join.test | 10 | 0.000815s | 0.000832s | 0.000789s | byte equality observed |
| mp_lambda.test | 10 | 0.000817s | 0.000788s | 0.000793s | byte equality observed |
| mp_less.test | 10 | 0.000821s | 0.000819s | 0.000841s | byte equality observed |
| mp_list_c.test | 10 | 0.000835s | 0.000805s | 0.000811s | byte equality observed |
| mp_list_v.test | 10 | 0.000367s | 0.000370s | 0.000796s | byte equality observed |
| mp_map_contains.test | 10 | 0.000809s | 0.000805s | 0.000793s | byte equality observed |
| mp_map_erase.test | 10 | 0.000806s | 0.000798s | 0.000815s | byte equality observed |
| mp_map_find.test | 10 | 0.000819s | 0.000816s | 0.000797s | byte equality observed |
| mp_map_find_2.test | 10 | 0.000830s | 0.000791s | 0.000823s | byte equality observed |
| mp_map_find_3.test | 10 | 0.000812s | 0.000794s | 0.000802s | byte equality observed |
| mp_map_find_4.test | 10 | 0.000798s | 0.000812s | 0.000791s | byte equality observed |
| mp_map_insert.test | 10 | 0.000806s | 0.000812s | 0.000791s | byte equality observed |
| mp_map_keys.test | 10 | 0.000805s | 0.000833s | 0.000819s | byte equality observed |
| mp_map_replace.test | 10 | 0.000832s | 0.000840s | 0.000808s | byte equality observed |
| mp_map_update.test | 10 | 0.000825s | 0.000802s | 0.000814s | byte equality observed |
| mp_map_update_q.test | 10 | 0.000839s | 0.000827s | 0.000814s | byte equality observed |
| mp_max.test | 10 | 0.000823s | 0.000811s | 0.000782s | byte equality observed |
| mp_max_element.test | 10 | 0.000814s | 0.000803s | 0.000770s | byte equality observed |
| mp_max_element_2.test | 10 | 0.000364s | 0.000366s | 0.000792s | byte equality observed |
| mp_max_element_q.test | 10 | 0.000800s | 0.000815s | 0.000778s | byte equality observed |
| mp_max_element_q_2.test | 10 | 0.000364s | 0.000368s | 0.000805s | byte equality observed |
| mp_min.test | 10 | 0.000807s | 0.000835s | 0.000811s | byte equality observed |
| mp_min_element.test | 10 | 0.000815s | 0.000824s | 0.000821s | byte equality observed |
| mp_min_element_2.test | 10 | 0.000366s | 0.000366s | 0.000766s | byte equality observed |
| mp_min_element_q.test | 10 | 0.000803s | 0.000816s | 0.000794s | byte equality observed |
| mp_min_element_q_2.test | 10 | 0.000368s | 0.000370s | 0.000779s | byte equality observed |
| mp_none_of.test | 10 | 0.000833s | 0.000806s | 0.000791s | byte equality observed |
| mp_none_of_q.test | 10 | 0.000794s | 0.000806s | 0.000817s | byte equality observed |
| mp_not_fn.test | 10 | 0.000805s | 0.000831s | 0.000812s | byte equality observed |
| mp_nth_element.test | 10 | 0.000824s | 0.000834s | 0.000805s | byte equality observed |
| mp_nth_element_q.test | 10 | 0.000792s | 0.000828s | 0.000810s | byte equality observed |
| mp_or.test | 10 | 0.000792s | 0.000811s | 0.000805s | byte equality observed |
| mp_pairwise_fold.test | 10 | 0.000818s | 0.000813s | 0.000789s | byte equality observed |
| mp_pairwise_fold_q.test | 10 | 0.000819s | 0.000811s | 0.000794s | byte equality observed |
| mp_partial_sum.test | 10 | 0.000843s | 0.000825s | 0.000816s | byte equality observed |
| mp_partition.test | 10 | 0.000814s | 0.000799s | 0.000826s | byte equality observed |
| mp_partition_q.test | 10 | 0.000809s | 0.000834s | 0.000832s | byte equality observed |
| mp_plus.test | 10 | 0.000822s | 0.000830s | 0.000796s | byte equality observed |
| mp_pop_back.test | 10 | 0.000818s | 0.000837s | 0.000813s | byte equality observed |
| mp_pop_back_2.test | 10 | 0.000364s | 0.000363s | 0.000793s | byte equality observed |
| mp_pop_front.test | 10 | 0.000802s | 0.000815s | 0.000806s | byte equality observed |
| mp_pop_front_2.test | 10 | 0.000366s | 0.000364s | 0.000783s | byte equality observed |
| mp_power_set.test | 10 | 0.000821s | 0.000802s | 0.000814s | byte equality observed |
| mp_product.test | 10 | 0.000802s | 0.000809s | 0.000801s | byte equality observed |
| mp_push_back.test | 10 | 0.000793s | 0.000805s | 0.000798s | byte equality observed |
| mp_push_back_2.test | 10 | 0.000367s | 0.000365s | 0.000783s | byte equality observed |
| mp_push_front.test | 10 | 0.000816s | 0.000809s | 0.000805s | byte equality observed |
| mp_push_front_2.test | 10 | 0.000358s | 0.000369s | 0.000794s | byte equality observed |
| mp_quote.test | 10 | 0.000808s | 0.000806s | 0.000803s | byte equality observed |
| mp_quote_trait.test | 10 | 0.000808s | 0.000820s | 0.000814s | byte equality observed |
| mp_remove.test | 10 | 0.000809s | 0.000807s | 0.000819s | byte equality observed |
| mp_remove_if.test | 10 | 0.000818s | 0.000825s | 0.000790s | byte equality observed |
| mp_remove_if_q.test | 10 | 0.000811s | 0.000824s | 0.000792s | byte equality observed |
| mp_rename.test | 10 | 0.000799s | 0.000805s | 0.000789s | byte equality observed |
| mp_rename_2.test | 10 | 0.000362s | 0.000367s | 0.000797s | byte equality observed |
| mp_rename_v.test | 10 | 0.000361s | 0.000364s | 0.000795s | byte equality observed |
| mp_repeat.test | 10 | 0.000818s | 0.000819s | 0.000809s | byte equality observed |
| mp_repeat_2.test | 10 | 0.000369s | 0.000361s | 0.000796s | byte equality observed |
| mp_repeat_3.test | 10 | 0.000824s | 0.000806s | 0.000797s | byte equality observed |
| mp_replace.test | 10 | 0.000808s | 0.000786s | 0.000811s | byte equality observed |
| mp_replace_at.test | 10 | 0.000801s | 0.000799s | 0.000808s | byte equality observed |
| mp_replace_at_c.test | 10 | 0.000813s | 0.000821s | 0.000821s | byte equality observed |
| mp_replace_front.test | 10 | 0.000794s | 0.000812s | 0.000795s | byte equality observed |
| mp_replace_front_2.test | 10 | 0.000371s | 0.000357s | 0.000780s | byte equality observed |
| mp_replace_if.test | 10 | 0.000813s | 0.000819s | 0.000814s | byte equality observed |
| mp_replace_if_q.test | 10 | 0.000843s | 0.000801s | 0.000832s | byte equality observed |
| mp_replace_second.test | 10 | 0.000806s | 0.000802s | 0.000796s | byte equality observed |
| mp_replace_second_2.test | 10 | 0.000364s | 0.000358s | 0.000796s | byte equality observed |
| mp_replace_third.test | 10 | 0.000794s | 0.000817s | 0.000795s | byte equality observed |
| mp_replace_third_2.test | 10 | 0.000366s | 0.000364s | 0.000776s | byte equality observed |
| mp_reverse.test | 10 | 0.000836s | 0.000795s | 0.000806s | byte equality observed |
| mp_reverse_fold.test | 10 | 0.000822s | 0.000851s | 0.000834s | byte equality observed |
| mp_reverse_fold_q.test | 10 | 0.000809s | 0.000813s | 0.000812s | byte equality observed |
| mp_rotate_left.test | 10 | 0.000812s | 0.000790s | 0.000819s | byte equality observed |
| mp_rotate_right.test | 10 | 0.000817s | 0.000814s | 0.000798s | byte equality observed |
| mp_same.test | 10 | 0.000850s | 0.000796s | 0.000804s | byte equality observed |
| mp_second.test | 10 | 0.000808s | 0.000819s | 0.000809s | byte equality observed |
| mp_second_2.test | 10 | 0.000363s | 0.000363s | 0.000793s | byte equality observed |
| mp_set_contains.test | 10 | 0.000801s | 0.000833s | 0.000796s | byte equality observed |
| mp_set_difference.test | 10 | 0.000832s | 0.000848s | 0.000791s | byte equality observed |
| mp_set_difference_sf.test | 10 | 0.000812s | 0.000846s | 0.000810s | byte equality observed |
| mp_set_intersection.test | 10 | 0.000833s | 0.000808s | 0.000809s | byte equality observed |
| mp_set_intersection_sf.test | 10 | 0.000821s | 0.000806s | 0.000798s | byte equality observed |
| mp_set_push_back.test | 10 | 0.000825s | 0.000818s | 0.000800s | byte equality observed |
| mp_set_push_front.test | 10 | 0.000838s | 0.000842s | 0.000825s | byte equality observed |
| mp_set_union.test | 10 | 0.000811s | 0.000818s | 0.000808s | byte equality observed |
| mp_set_union_sf.test | 10 | 0.000809s | 0.000831s | 0.000805s | byte equality observed |
| mp_similar.test | 10 | 0.000813s | 0.000806s | 0.000815s | byte equality observed |
| mp_size.test | 10 | 0.000804s | 0.000806s | 0.000801s | byte equality observed |
| mp_size_2.test | 10 | 0.000366s | 0.000364s | 0.000775s | byte equality observed |
| mp_slice.test | 10 | 0.000824s | 0.000816s | 0.000778s | byte equality observed |
| mp_slice_2.test | 10 | 0.000371s | 0.000352s | 0.000794s | byte equality observed |
| mp_sliding_fold.test | 10 | 0.000846s | 0.000812s | 0.000804s | byte equality observed |
| mp_sliding_fold_q.test | 10 | 0.000843s | 0.000849s | 0.000794s | byte equality observed |
| mp_sort.test | 10 | 0.000825s | 0.000845s | 0.000795s | byte equality observed |
| mp_sort_q.test | 10 | 0.000828s | 0.000827s | 0.000830s | byte equality observed |
| mp_split.test | 10 | 0.000805s | 0.000841s | 0.000813s | byte equality observed |
| mp_starts_with.test | 10 | 0.000797s | 0.000824s | 0.000821s | byte equality observed |
| mp_starts_with_sf.test | 10 | 0.000806s | 0.000844s | 0.000818s | byte equality observed |
| mp_take.test | 10 | 0.000825s | 0.000867s | 0.000795s | byte equality observed |
| mp_take_2.test | 10 | 0.000360s | 0.000347s | 0.000794s | byte equality observed |
| mp_third.test | 10 | 0.000801s | 0.000824s | 0.000771s | byte equality observed |
| mp_third_2.test | 10 | 0.000362s | 0.000365s | 0.000791s | byte equality observed |
| mp_transform.test | 10 | 0.000816s | 0.000821s | 0.000796s | byte equality observed |
| mp_transform_2.test | 10 | 0.000781s | 0.000785s | 0.000787s | byte equality observed |
| mp_transform_front.test | 10 | 0.000805s | 0.000809s | 0.000789s | byte equality observed |
| mp_transform_front_2.test | 10 | 0.000362s | 0.000356s | 0.000788s | byte equality observed |
| mp_transform_if.test | 10 | 0.000790s | 0.000818s | 0.000807s | byte equality observed |
| mp_transform_if_q.test | 10 | 0.000796s | 0.000809s | 0.000802s | byte equality observed |
| mp_transform_q.test | 10 | 0.000817s | 0.000825s | 0.000806s | byte equality observed |
| mp_transform_q_2.test | 10 | 0.000812s | 0.000811s | 0.000808s | byte equality observed |
| mp_transform_second.test | 10 | 0.000801s | 0.000807s | 0.000817s | byte equality observed |
| mp_transform_second_2.test | 10 | 0.000363s | 0.000371s | 0.000807s | byte equality observed |
| mp_transform_sf.test | 10 | 0.000799s | 0.000816s | 0.000804s | byte equality observed |
| mp_transform_third.test | 10 | 0.000823s | 0.000829s | 0.000813s | byte equality observed |
| mp_transform_third_2.test | 10 | 0.000357s | 0.000359s | 0.000801s | byte equality observed |
| mp_unique.test | 10 | 0.000795s | 0.000825s | 0.000796s | byte equality observed |
| mp_unique_if.test | 10 | 0.000816s | 0.000820s | 0.000807s | byte equality observed |
| mp_unique_if_q.test | 10 | 0.000798s | 0.000843s | 0.000808s | byte equality observed |
| mp_valid.test | 10 | 0.000808s | 0.000796s | 0.000801s | byte equality observed |
| mp_valid_and_true.test | 10 | 0.000803s | 0.000811s | 0.000787s | byte equality observed |
| mp_value.test | 10 | 0.000365s | 0.000358s | 0.000788s | byte equality observed |
| mp_with_index.test | 10 | 0.001113s | 0.001087s | 0.001012s | byte equality observed |
| mp_with_index_cx.test | 10 | 0.000366s | 0.000362s | 0.000800s | byte equality observed |
| mpl.test | 10 | 0.000831s | 0.000797s | 0.000811s | byte equality observed |
| mpl_list.test | 10 | 0.000824s | 0.000826s | 0.000819s | byte equality observed |
| mpl_tuple.test | 10 | 0.000825s | 0.000824s | 0.000803s | byte equality observed |
| mpl_version.test | 10 | 0.000822s | 0.000836s | 0.000821s | byte equality observed |
| set_version.test | 10 | 0.000846s | 0.000790s | 0.000818s | byte equality observed |
| tuple_apply.test | 10 | 0.000861s | 0.000821s | 0.000824s | byte equality observed |
| tuple_for_each.test | 10 | 0.000841s | 0.000829s | 0.000838s | byte equality observed |
| tuple_transform.test | 10 | 0.000805s | 0.000851s | 0.000816s | byte equality observed |
| tuple_transform_2.test | 10 | 0.000798s | 0.000817s | 0.000789s | byte equality observed |
| tuple_version.test | 10 | 0.000797s | 0.000813s | 0.000813s | byte equality observed |
| utility_version.test | 10 | 0.000799s | 0.000821s | 0.000802s | byte equality observed |
| version.test | 10 | 0.000814s | 0.000813s | 0.000846s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44560957980).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
