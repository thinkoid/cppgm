# libs/mp11/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| mp11.test | COMPILE | 0.030283 | 0.059096 | 0.092762 | — | — | — |
| complex_h.test | COMPILE | 0.124792 | 0.246549 | 0.374887 | — | — | — |
| mp_size.test | RUN | 0.144929 | 0.850896 | 0.493050 | 0.001274 | 0.001164 | 0.001196 |
| mp_size_2.test | RUN | 0.012265 | 0.029298 | 0.044449 | 0.000522 | 0.000480 | 0.001118 |
| mp_empty.test | RUN | 0.139243 | 0.527978 | 0.443324 | 0.001157 | 0.001332 | 0.001415 |
| mp_empty_2.test | RUN | 0.012362 | 0.029956 | 0.045651 | 0.000447 | 0.000466 | 0.001192 |
| mp_assign.test | RUN | 0.165306 | 1.117159 | 0.623918 | 0.001265 | 0.001217 | 0.001288 |
| mp_assign_2.test | RUN | 0.012582 | 0.030383 | 0.044191 | 0.000478 | 0.000510 | 0.001564 |
| mp_clear.test | RUN | 0.140243 | 0.476369 | 0.470890 | 0.001150 | 0.001202 | 0.001257 |
| mp_clear_2.test | RUN | 0.012348 | 0.029123 | 0.045493 | 0.000523 | 0.000397 | 0.001402 |
| mp_front.test | RUN | 0.150229 | 0.760584 | 0.511370 | 0.001184 | 0.001336 | 0.001234 |
| mp_front_2.test | RUN | 0.013884 | 0.027779 | 0.044815 | 0.000498 | 0.000472 | 0.001001 |
| mp_pop_front.test | RUN | 0.145550 | 0.791435 | 0.530475 | 0.001330 | 0.001272 | 0.001387 |
| mp_pop_front_2.test | RUN | 0.012607 | 0.029538 | 0.045042 | 0.000504 | 0.000468 | 0.001293 |
| mp_second.test | RUN | 0.144217 | 0.498424 | 0.476026 | 0.001172 | 0.001123 | 0.001229 |
| mp_second_2.test | RUN | 0.012616 | 0.029986 | 0.045161 | 0.000546 | 0.000533 | 0.001369 |
| mp_third.test | RUN | 0.140754 | 0.464372 | 0.465029 | 0.001308 | 0.001292 | 0.001565 |
| mp_third_2.test | RUN | 0.013773 | 0.030282 | 0.045583 | 0.000565 | 0.000464 | 0.001182 |
| mp_push_front.test | RUN | 0.189586 | 1.725804 | 0.863816 | 0.001406 | 0.001329 | 0.001217 |
| mp_push_front_2.test | RUN | 0.012993 | 0.029475 | 0.042062 | 0.000520 | 0.000541 | 0.001346 |
| mp_push_back.test | RUN | 0.190092 | 1.709261 | 0.852167 | 0.001225 | 0.001172 | 0.001155 |
| mp_push_back_2.test | RUN | 0.012762 | 0.029946 | 0.045845 | 0.000545 | 0.000544 | 0.001358 |
| mp_rename.test | RUN | 0.183222 | 1.576439 | 0.717843 | 0.001333 | 0.001202 | 0.001320 |
| mp_rename_2.test | RUN | 0.012784 | 0.029508 | 0.046127 | 0.000508 | 0.000454 | 0.001348 |
| mp_append.test | RUN | 0.186691 | 1.785822 | 0.804888 | 0.001410 | 0.001258 | 0.001264 |
| mp_append_2.test | RUN | 0.420718 | 4.030274 | 1.096211 | 0.001535 | 0.001304 | 0.001261 |
| mp_append_3.test | RUN | 0.012670 | 0.029314 | 0.043622 | 0.000568 | 0.000478 | 0.001272 |
| mp_append_sf.test | RUN | 0.139936 | 0.426172 | 0.432055 | 0.001191 | 0.001254 | 0.001260 |
| mp_replace_front.test | RUN | 0.169028 | 1.256724 | 0.645790 | 0.001218 | 0.001323 | 0.001140 |
| mp_replace_front_2.test | RUN | 0.012864 | 0.030210 | 0.045753 | 0.000439 | 0.000456 | 0.001250 |
| mp_replace_second.test | RUN | 0.160315 | 0.805673 | 0.606102 | 0.001236 | 0.001177 | 0.001228 |
| mp_replace_second_2.test | RUN | 0.013844 | 0.029833 | 0.044206 | 0.000488 | 0.000518 | 0.001164 |
| mp_replace_third.test | RUN | 0.149395 | 0.660359 | 0.541780 | 0.001413 | 0.001210 | 0.001556 |
| mp_replace_third_2.test | RUN | 0.013023 | 0.028053 | 0.042699 | 0.000433 | 0.000485 | 0.001289 |
| mp_apply_q.test | RUN | 0.169839 | 1.561147 | 0.718773 | 0.001425 | 0.001225 | 0.001172 |
| mp_apply_q_sf.test | RUN | 0.144167 | 0.438071 | 0.436965 | 0.001254 | 0.001192 | 0.001524 |
| mp_is_list.test | RUN | 0.135197 | 0.520890 | 0.467945 | 0.001241 | 0.001314 | 0.001183 |
| mp_list_c.test | RUN | 0.147399 | 0.637537 | 0.519781 | 0.001260 | 0.001319 | 0.001171 |
| mp_transform_front.test | RUN | 0.171635 | 1.272712 | 0.638011 | 0.001197 | 0.001274 | 0.001243 |
| mp_transform_front_2.test | RUN | 0.013120 | 0.029885 | 0.043532 | 0.000482 | 0.000506 | 0.001196 |
| mp_transform_second.test | RUN | 0.159309 | 1.083856 | 0.571172 | 0.001257 | 0.001218 | 0.001215 |
| mp_transform_second_2.test | RUN | 0.012638 | 0.030140 | 0.045483 | 0.000482 | 0.000495 | 0.001463 |
| mp_transform_third.test | RUN | 0.140810 | 0.817795 | 0.501099 | 0.001012 | 0.001393 | 0.001332 |
| mp_transform_third_2.test | RUN | 0.012968 | 0.029773 | 0.043461 | 0.000486 | 0.000512 | 0.001441 |
| mp_list_v.test | RUN | 0.011527 | 0.029514 | 0.047275 | 0.000509 | 0.000512 | 0.001216 |
| mp_rename_v.test | RUN | 0.012801 | 0.029698 | 0.045216 | 0.000509 | 0.000477 | 0.001320 |
| mp_is_value_list.test | RUN | 0.134516 | 0.319167 | 0.426826 | 0.001298 | 0.001256 | 0.001478 |
| mp_transform.test | RUN | 0.339544 | 2.676462 | 1.367198 | 0.001357 | 0.001402 | 0.001499 |
| mp_transform_2.test | RUN | 0.127358 | 0.283324 | 0.399209 | 0.001613 | 0.001356 | 0.001326 |
| mp_transform_q.test | RUN | 0.329742 | 2.585129 | 1.320330 | 0.001271 | 0.001247 | 0.001448 |
| mp_transform_q_2.test | RUN | 0.343501 | 0.804805 | 1.720511 | 0.001285 | 0.001132 | 0.001232 |
| mp_transform_sf.test | RUN | 0.148207 | 0.452355 | 0.472513 | 0.001416 | 0.001328 | 0.001249 |
| mp_transform_if.test | RUN | 0.183427 | 1.282594 | 0.709147 | 0.001284 | 0.001244 | 0.001318 |
| mp_transform_if_q.test | RUN | 0.182379 | 1.277869 | 0.714430 | 0.001277 | 0.001090 | 0.001292 |
| mp_filter.test | RUN | 0.160598 | 0.754306 | 0.530328 | 0.001265 | 0.001330 | 0.001051 |
| mp_fill.test | RUN | 0.159235 | 0.556160 | 0.507964 | 0.001239 | 0.001246 | 0.001414 |
| mp_fill_2.test | RUN | 0.022671 | 0.045284 | 0.074669 | 0.000525 | 0.000510 | 0.001247 |
| mp_count.test | RUN | 0.292413 | 1.360938 | 0.785002 | 0.001254 | 0.001265 | 0.001095 |
| mp_count_if.test | RUN | 0.296437 | 1.374038 | 0.852782 | 0.001250 | 0.001163 | 0.001388 |
| mp_count_if_q.test | RUN | 0.155146 | 0.913126 | 0.517072 | 0.001432 | 0.001138 | 0.001296 |
| mp_contains.test | RUN | 0.147191 | 0.543057 | 0.484366 | 0.001145 | 0.001171 | 0.001204 |
| mp_starts_with.test | RUN | 0.149897 | 0.543344 | 0.495082 | 0.001579 | 0.001077 | 0.001170 |
| mp_starts_with_sf.test | RUN | 0.142665 | 0.453531 | 0.447243 | 0.001238 | 0.001121 | 0.001478 |
| mp_repeat.test | RUN | 0.223466 | 2.282488 | 0.915511 | 0.001391 | 0.001604 | 0.001187 |
| mp_repeat_2.test | RUN | 0.022745 | 0.047604 | 0.072922 | 0.000521 | 0.000499 | 0.001169 |
| mp_repeat_3.test | RUN | 0.191736 | 0.284826 | 0.457947 | 0.001200 | 0.001205 | 0.001440 |
| mp_product.test | RUN | 0.171816 | 1.380005 | 0.682006 | 0.001225 | 0.001356 | 0.001272 |
| mp_drop.test | RUN | 0.185036 | 1.721056 | 0.768029 | 0.001338 | 0.001250 | 0.001283 |
| mp_drop_2.test | RUN | 0.023049 | 0.047840 | 0.071420 | 0.000491 | 0.000530 | 0.001314 |
| mp_iota.test | RUN | 0.178493 | 1.463726 | 0.659676 | 0.001349 | 0.001235 | 0.001333 |
| mp_iota_2.test | RUN | 0.188433 | 1.760712 | 0.775710 | 0.001200 | 0.001257 | 0.001203 |
| mp_at.test | RUN | 0.152588 | 0.753776 | 0.546090 | 0.001265 | 0.001352 | 0.001322 |
| mp_at_2.test | RUN | 0.023099 | 0.046174 | 0.074475 | 0.000519 | 0.000552 | 0.001386 |
| mp_at_sf.test | RUN | 0.145977 | 0.458850 | 0.453764 | 0.001347 | 0.001436 | 0.001157 |
| mp_take.test | RUN | 0.245698 | 2.283014 | 0.909508 | 0.001396 | 0.001419 | 0.001252 |
| mp_take_2.test | RUN | 0.022777 | 0.047607 | 0.069744 | 0.000572 | 0.000485 | 0.001248 |
| mp_slice.test | RUN | 0.297314 | 2.319155 | 1.166111 | 0.001340 | 0.001392 | 0.001264 |
| mp_slice_2.test | RUN | 0.022693 | 0.047433 | 0.070425 | 0.000507 | 0.000520 | 0.001375 |
| mp_replace.test | RUN | 0.187179 | 1.159475 | 0.738271 | 0.001301 | 0.001258 | 0.001331 |
| mp_replace_if.test | RUN | 0.176821 | 1.015653 | 0.674368 | 0.001401 | 0.001365 | 0.001248 |
| mp_replace_if_q.test | RUN | 0.173680 | 1.029782 | 0.687461 | 0.001349 | 0.001358 | 0.001324 |
| mp_copy_if.test | RUN | 0.176988 | 1.449696 | 0.645164 | 0.001317 | 0.001335 | 0.001334 |
| mp_copy_if_q.test | RUN | 0.182267 | 1.434565 | 0.650003 | 0.001246 | 0.001169 | 0.001406 |
| mp_remove.test | RUN | 0.173760 | 0.976740 | 0.671738 | 0.001332 | 0.001229 | 0.001374 |
| mp_remove_if.test | RUN | 0.178626 | 1.534509 | 0.699766 | 0.001372 | 0.001356 | 0.001390 |
| mp_remove_if_q.test | RUN | 0.191421 | 1.522475 | 0.698637 | 0.001258 | 0.001213 | 0.001313 |
| mp_partition.test | RUN | 0.186322 | 1.432678 | 0.743842 | 0.001470 | 0.001258 | 0.001223 |
| mp_partition_q.test | RUN | 0.183015 | 1.444039 | 0.754643 | 0.001468 | 0.001427 | 0.001286 |
| mp_sort.test | RUN | 0.172141 | 1.031377 | 0.649369 | 0.001278 | 0.001402 | 0.001193 |
| mp_sort_q.test | RUN | 0.169516 | 1.029774 | 0.648146 | 0.001283 | 0.001364 | 0.001233 |
| mp_find.test | RUN | 0.171359 | 1.101694 | 0.557288 | 0.001381 | 0.001292 | 0.001182 |
| mp_find_if.test | RUN | 0.159706 | 1.011458 | 0.531631 | 0.001280 | 0.001226 | 0.001285 |
| mp_find_if_q.test | RUN | 0.174514 | 1.127708 | 0.646129 | 0.001336 | 0.001370 | 0.001223 |
| mp_reverse.test | RUN | 0.377019 | 3.066161 | 1.284532 | 0.001534 | 0.001391 | 0.001203 |
| mp_fold.test | RUN | 0.632901 | 2.364271 | 3.314102 | 0.001243 | 0.001304 | 0.001217 |
| mp_fold_q.test | RUN | 0.162151 | 1.020518 | 0.611306 | 0.001248 | 0.001372 | 0.001131 |
| mp_fold_q_sf.test | RUN | 0.146116 | 0.460918 | 0.478638 | 0.001187 | 0.001297 | 0.001252 |
| mp_reverse_fold.test | RUN | 0.297595 | 2.251224 | 0.905868 | 0.001210 | 0.001282 | 0.001185 |
| mp_reverse_fold_q.test | RUN | 0.171508 | 1.226925 | 0.658978 | 0.001133 | 0.001452 | 0.001167 |
| mp_unique.test | RUN | 0.167327 | 1.112914 | 0.638587 | 0.001275 | 0.001334 | 0.001188 |
| mp_unique_if.test | RUN | 0.300533 | 2.374996 | 1.032004 | 0.001323 | 0.001263 | 0.001339 |
| mp_unique_if_q.test | RUN | 0.269747 | 2.343174 | 0.820793 | 0.001308 | 0.001401 | 0.001366 |
| mp_all_of.test | RUN | 0.406661 | 1.264255 | 1.074265 | 0.001496 | 0.001306 | 0.001319 |
| mp_all_of_q.test | RUN | 0.145306 | 0.524420 | 0.472519 | 0.001560 | 0.001321 | 0.001344 |
| mp_any_of.test | RUN | 0.396952 | 1.311188 | 1.033515 | 0.001377 | 0.001278 | 0.001219 |
| mp_any_of_q.test | RUN | 0.153161 | 0.522266 | 0.481531 | 0.001420 | 0.001320 | 0.001282 |
| mp_none_of.test | RUN | 0.397923 | 1.306631 | 1.025018 | 0.001345 | 0.001261 | 0.001237 |
| mp_none_of_q.test | RUN | 0.151674 | 0.516353 | 0.484146 | 0.001283 | 0.001310 | 0.001184 |
| mp_replace_at.test | RUN | 0.182842 | 1.117725 | 0.733185 | 0.001388 | 0.001297 | 0.001262 |
| mp_replace_at_c.test | RUN | 0.186706 | 1.123876 | 0.731008 | 0.001461 | 0.001319 | 0.001230 |
| mp_for_each.test | RUN | 0.167932 | 0.722503 | 0.727556 | 0.001210 | 0.001335 | 0.001128 |
| mp_insert.test | RUN | 0.281835 | 2.264939 | 1.060404 | 0.001388 | 0.001247 | 0.001338 |
| mp_insert_2.test | RUN | 0.023755 | 0.044579 | 0.069394 | 0.000384 | 0.000493 | 0.001131 |
| mp_erase.test | RUN | 0.308781 | 2.423729 | 1.240918 | 0.001580 | 0.001342 | 0.001201 |
| mp_erase_2.test | RUN | 0.023869 | 0.046052 | 0.070580 | 0.000445 | 0.000498 | 0.001197 |
| mp_with_index.test | RUN | 0.404739 | 4.824241 | 2.662916 | 0.001894 | 0.001538 | 0.001639 |
| mp_with_index_cx.test | RUN | 0.003303 | 0.014429 | 0.021935 | 0.000594 | 0.000494 | 0.001194 |
| mp_from_sequence.test | RUN | 0.181260 | 1.270537 | 0.692350 | 0.001300 | 0.001299 | 0.001310 |
| mp_from_sequence_2.test | RUN | 0.192687 | 1.472116 | 0.767954 | 0.001276 | 0.001317 | 0.001436 |
| mp_from_sequence_3.test | RUN | 0.156950 | 0.644112 | 0.523046 | 0.001264 | 0.001377 | 0.001119 |
| mp_min_element.test | RUN | 0.149800 | 0.590316 | 0.490689 | 0.001347 | 0.001156 | 0.001345 |
| mp_min_element_2.test | RUN | 0.023847 | 0.047236 | 0.074489 | 0.000491 | 0.000479 | 0.001340 |
| mp_min_element_q.test | RUN | 0.154862 | 0.587102 | 0.500049 | 0.001240 | 0.001309 | 0.001217 |
| mp_min_element_q_2.test | RUN | 0.022697 | 0.046082 | 0.071211 | 0.000491 | 0.000492 | 0.001163 |
| mp_max_element.test | RUN | 0.154566 | 0.588489 | 0.492898 | 0.001343 | 0.001390 | 0.001205 |
| mp_max_element_2.test | RUN | 0.023159 | 0.046257 | 0.069955 | 0.000489 | 0.000481 | 0.001186 |
| mp_max_element_q.test | RUN | 0.151922 | 0.589364 | 0.496621 | 0.001238 | 0.001267 | 0.001248 |
| mp_max_element_q_2.test | RUN | 0.024094 | 0.046090 | 0.067834 | 0.000499 | 0.000498 | 0.001136 |
| mp_nth_element.test | RUN | 0.169625 | 0.830332 | 0.605915 | 0.001328 | 0.001094 | 0.001116 |
| mp_nth_element_q.test | RUN | 0.169285 | 0.831007 | 0.597917 | 0.001213 | 0.001153 | 0.001059 |
| mp_back.test | RUN | 0.163930 | 0.697718 | 0.563097 | 0.001343 | 0.001366 | 0.001240 |
| mp_back_2.test | RUN | 0.023135 | 0.046724 | 0.073683 | 0.000505 | 0.000484 | 0.001222 |
| mp_pop_back.test | RUN | 0.472201 | 4.637135 | 1.236732 | 0.001244 | 0.001430 | 0.001185 |
| mp_pop_back_2.test | RUN | 0.023157 | 0.045341 | 0.070408 | 0.000626 | 0.000506 | 0.001334 |
| mp_flatten.test | RUN | 0.193469 | 1.616843 | 0.818861 | 0.001291 | 0.001246 | 0.001153 |
| mp_rotate_left.test | RUN | 0.194109 | 1.709701 | 0.796877 | 0.001277 | 0.000913 | 0.001168 |
| mp_rotate_right.test | RUN | 0.193418 | 1.708601 | 0.812351 | 0.001502 | 0.001193 | 0.001195 |
| mp_power_set.test | RUN | 0.188833 | 1.686594 | 0.809431 | 0.001412 | 0.001338 | 0.001230 |
| mp_partial_sum.test | RUN | 0.259935 | 2.255568 | 0.929668 | 0.001625 | 0.001249 | 0.001239 |
| mp_iterate.test | RUN | 0.170465 | 0.660355 | 0.633473 | 0.001178 | 0.001327 | 0.001127 |
| mp_pairwise_fold.test | RUN | 0.192557 | 1.559340 | 0.828266 | 0.001221 | 0.001262 | 0.001274 |
| mp_pairwise_fold_q.test | RUN | 0.149030 | 0.442498 | 0.472713 | 0.001348 | 0.001354 | 0.001350 |
| mp_sliding_fold.test | RUN | 0.385251 | 3.022062 | 1.558209 | 0.001156 | 0.001298 | 0.001321 |
| mp_sliding_fold_q.test | RUN | 0.382366 | 3.014062 | 1.549098 | 0.001228 | 0.001306 | 0.001220 |
| mp_intersperse.test | RUN | 0.184618 | 1.101225 | 0.717398 | 0.001463 | 0.001215 | 0.001323 |
| mp_split.test | RUN | 0.269876 | 2.125768 | 1.003330 | 0.001197 | 0.001248 | 0.001173 |
| mp_join.test | RUN | 0.197066 | 1.783611 | 0.899198 | 0.001190 | 0.001279 | 0.001397 |
| integral.test | RUN | 0.152687 | 0.797407 | 0.532040 | 0.001372 | 0.001415 | 0.001240 |
| mp_value.test | RUN | 0.009358 | 0.025694 | 0.038785 | 0.000521 | 0.000484 | 0.001369 |
| mp_identity.test | RUN | 0.152228 | 0.718463 | 0.509006 | 0.001390 | 0.001268 | 0.001234 |
| mp_inherit.test | RUN | 0.146059 | 0.507733 | 0.477095 | 0.001266 | 0.001281 | 0.001385 |
| mp_if.test | RUN | 0.148657 | 0.589713 | 0.472126 | 0.001316 | 0.001092 | 0.001200 |
| mp_if_sf.test | RUN | 0.137023 | 0.426820 | 0.422537 | 0.001403 | 0.001226 | 0.001306 |
| mp_eval_if.test | RUN | 0.144562 | 0.633082 | 0.488307 | 0.001251 | 0.001140 | 0.001214 |
| mp_eval_if_sf.test | RUN | 0.144454 | 0.437824 | 0.434316 | 0.001310 | 0.001298 | 0.001320 |
| mp_valid.test | RUN | 0.144222 | 0.442204 | 0.439133 | 0.001142 | 0.001014 | 0.001373 |
| mp_defer.test | RUN | 0.156693 | 0.758810 | 0.530179 | 0.001656 | 0.001275 | 0.001217 |
| mp_quote.test | RUN | 0.155865 | 0.764312 | 0.542700 | 0.001195 | 0.001392 | 0.001422 |
| mp_invoke_q.test | RUN | 0.164430 | 1.013354 | 0.622779 | 0.001172 | 0.001214 | 0.001260 |
| mp_invoke_q_sf.test | RUN | 0.133704 | 0.435027 | 0.437588 | 0.001373 | 0.001233 | 0.001175 |
| mp_quote_trait.test | RUN | 0.152089 | 0.842378 | 0.527969 | 0.001437 | 0.001180 | 0.001250 |
| mp_cond.test | RUN | 0.143844 | 0.511651 | 0.460945 | 0.001091 | 0.001321 | 0.001200 |
| mp_cond_sf.test | RUN | 0.137628 | 0.443555 | 0.432917 | 0.001216 | 0.001256 | 0.001273 |
| mp_not_fn.test | RUN | 0.139626 | 0.438647 | 0.420083 | 0.001332 | 0.001376 | 0.001260 |
| mp_eval_if_not.test | RUN | 0.147659 | 0.623140 | 0.485258 | 0.001387 | 0.001406 | 0.001197 |
| mp_eval_or.test | RUN | 0.137757 | 0.331099 | 0.444720 | 0.001168 | 0.001251 | 0.001208 |
| mp_compose.test | RUN | 0.162215 | 1.043469 | 0.579648 | 0.001166 | 0.001255 | 0.001142 |
| mp_valid_and_true.test | RUN | 0.140892 | 0.529183 | 0.439915 | 0.001297 | 0.001204 | 0.001354 |
| mp_compose_sf.test | COMPILE | 0.033575 | 0.061201 | 0.105636 | — | — | — |
| integer_sequence.test | RUN | 0.170443 | 1.036148 | 0.667112 | 0.001200 | 0.001206 | 0.001066 |
| tuple_for_each.test | RUN | 0.140084 | 0.370426 | 0.476216 | 0.001269 | 0.001221 | 0.001173 |
| tuple_for_each_cx.test | COMPILE | 0.026137 | 0.053945 | 0.079294 | — | — | — |
| tuple_apply.test | RUN | 0.140788 | 0.369764 | 0.474372 | 0.001264 | 0.001329 | 0.001187 |
| tuple_apply_cx.test | COMPILE | 0.037934 | 0.074314 | 0.112096 | — | — | — |
| construct_from_tuple.test | RUN | 0.145385 | 0.402489 | 0.465127 | 0.001509 | 0.001300 | 0.001158 |
| construct_from_tuple_cx.test | COMPILE | 0.037911 | 0.074689 | 0.106276 | — | — | — |
| tuple_transform.test | RUN | 0.233768 | 0.815660 | 0.910977 | 0.001502 | 0.001209 | 0.001266 |
| tuple_transform_2.test | RUN | 0.202371 | 0.593441 | 0.835053 | 0.001360 | 0.001241 | 0.001107 |
| tuple_transform_cx.test | COMPILE | 0.032812 | 0.073468 | 0.102846 | — | — | — |
| mp_set_contains.test | RUN | 0.145915 | 0.541229 | 0.469939 | 0.001228 | 0.001340 | 0.001236 |
| mp_set_push_back.test | RUN | 0.197274 | 1.689530 | 0.814517 | 0.001360 | 0.001384 | 0.001405 |
| mp_set_push_front.test | RUN | 0.259950 | 2.035091 | 0.931849 | 0.001325 | 0.001295 | 0.001128 |
| mp_is_set.test | RUN | 0.146594 | 0.536780 | 0.466871 | 0.001488 | 0.001390 | 0.001358 |
| mp_set_union.test | RUN | 0.184726 | 1.422710 | 0.774382 | 0.001105 | 0.001473 | 0.001070 |
| mp_set_union_sf.test | RUN | 0.145974 | 0.429178 | 0.429957 | 0.001442 | 0.001306 | 0.001122 |
| mp_set_difference.test | RUN | 0.168446 | 1.109683 | 0.653587 | 0.001600 | 0.001321 | 0.001320 |
| mp_set_difference_sf.test | RUN | 0.142235 | 0.423104 | 0.438980 | 0.001351 | 0.001310 | 0.001086 |
| mp_set_intersection.test | RUN | 0.166988 | 1.104965 | 0.634247 | 0.001120 | 0.001362 | 0.001258 |
| mp_set_intersection_sf.test | RUN | 0.147682 | 0.421186 | 0.434070 | 0.001434 | 0.001206 | 0.001199 |
| mp_all.test | RUN | 0.148403 | 0.532184 | 0.474491 | 0.001506 | 0.001363 | 0.001158 |
| mp_all_2.test | RUN | 0.425313 | 1.173419 | 1.059043 | 0.001400 | 0.001292 | 0.001234 |
| mp_and.test | RUN | 0.150311 | 0.534292 | 0.471289 | 0.001389 | 0.001478 | 0.001280 |
| mp_any.test | RUN | 0.154399 | 0.517634 | 0.447096 | 0.001444 | 0.001281 | 0.001276 |
| mp_any_2.test | RUN | 0.417897 | 1.167163 | 1.056214 | 0.001590 | 0.001473 | 0.001302 |
| mp_or.test | RUN | 0.152075 | 0.520918 | 0.467732 | 0.001422 | 0.001248 | 0.001401 |
| mp_same.test | RUN | 0.291398 | 0.892724 | 0.743491 | 0.001121 | 0.001022 | 0.001293 |
| mp_plus.test | RUN | 0.150029 | 0.622049 | 0.502253 | 0.001328 | 0.001330 | 0.001078 |
| mp_less.test | RUN | 0.147353 | 0.529838 | 0.451299 | 0.001390 | 0.001320 | 0.001278 |
| mp_min.test | RUN | 0.140850 | 0.494291 | 0.454895 | 0.001614 | 0.001465 | 0.001229 |
| mp_max.test | RUN | 0.146471 | 0.538322 | 0.480978 | 0.001138 | 0.001139 | 0.001301 |
| mp_similar.test | RUN | 0.143980 | 0.532122 | 0.468457 | 0.001397 | 0.001272 | 0.001245 |
| mp_map_find.test | RUN | 0.173691 | 0.978440 | 0.623041 | 0.001364 | 0.001424 | 0.001249 |
| mp_map_find_2.test | RUN | 0.154188 | 0.369408 | 0.530195 | 0.001650 | 0.001237 | 0.001335 |
| mp_map_find_3.test | RUN | 0.155294 | 0.369092 | 0.520307 | 0.001379 | 0.001062 | 0.001219 |
| mp_map_find_4.test | RUN | 0.148042 | 0.353399 | 0.485718 | 0.001308 | 0.001227 | 0.001020 |
| mp_map_contains.test | RUN | 0.158319 | 0.544898 | 0.484199 | 0.001388 | 0.001440 | 0.001248 |
| mp_map_insert.test | RUN | 0.203544 | 1.878731 | 0.889068 | 0.001290 | 0.001306 | 0.001265 |
| mp_map_replace.test | RUN | 0.269708 | 2.154816 | 1.028494 | 0.001383 | 0.001540 | 0.001345 |
| mp_map_erase.test | RUN | 0.199558 | 1.578277 | 0.848529 | 0.001342 | 0.001356 | 0.001238 |
| mp_map_update.test | RUN | 0.176599 | 1.018002 | 0.657314 | 0.001259 | 0.001350 | 0.001069 |
| mp_map_update_q.test | RUN | 0.173357 | 1.029286 | 0.648400 | 0.001274 | 0.001369 | 0.001082 |
| mp_map_keys.test | RUN | 0.171732 | 0.910385 | 0.628182 | 0.001427 | 0.001233 | 0.001143 |
| mp_is_map.test | RUN | 0.156868 | 0.557284 | 0.507470 | 0.001444 | 0.001320 | 0.001353 |
| mp_bind.test | RUN | 0.191904 | 1.673804 | 0.771972 | 0.001330 | 0.001205 | 0.001228 |
| mp_bind_q.test | RUN | 0.168422 | 1.024780 | 0.613447 | 0.001301 | 0.001483 | 0.001219 |
| mp_bind_front.test | RUN | 0.163405 | 1.116729 | 0.590947 | 0.001212 | 0.001251 | 0.001149 |
| mp_bind_back.test | RUN | 0.164971 | 1.124259 | 0.587741 | 0.001317 | 0.001293 | 0.001185 |
| mp_lambda.test | RUN | 0.395458 | 3.368877 | 1.596876 | 0.001228 | 0.000920 | 0.001179 |
| mpl.test | RUN | 0.341765 | 0.855512 | 1.268151 | 0.001300 | 0.001201 | 0.001204 |
| mpl_list.test | RUN | 0.182807 | 0.661187 | 0.570971 | 0.001321 | 0.001429 | 0.001062 |
| mpl_tuple.test | RUN | 0.189276 | 0.656975 | 0.567466 | 0.001416 | 0.001398 | 0.000925 |
| version.test | RUN | 0.092055 | 0.229030 | 0.292976 | 0.001080 | 0.001191 | 0.001434 |
| mp11_version.test | RUN | 0.111798 | 0.268228 | 0.344514 | 0.001353 | 0.001227 | 0.001142 |
| list_version.test | RUN | 0.100176 | 0.236546 | 0.302793 | 0.001328 | 0.001204 | 0.001246 |
| algorithm_version.test | RUN | 0.107591 | 0.252703 | 0.323596 | 0.001453 | 0.001278 | 0.001146 |
| integral_version.test | RUN | 0.095260 | 0.233309 | 0.289199 | 0.001310 | 0.001205 | 0.001373 |
| utility_version.test | RUN | 0.097377 | 0.231857 | 0.293375 | 0.001212 | 0.001143 | 0.001187 |
| function_version.test | RUN | 0.101274 | 0.238060 | 0.306880 | 0.001173 | 0.001251 | 0.001382 |
| map_version.test | RUN | 0.107905 | 0.245449 | 0.321753 | 0.001206 | 0.001166 | 0.001125 |
| set_version.test | RUN | 0.097385 | 0.234908 | 0.301965 | 0.001320 | 0.001064 | 0.001017 |
| bind_version.test | RUN | 0.107880 | 0.250624 | 0.324153 | 0.001193 | 0.001299 | 0.001317 |
| integer_sequence_version.test | RUN | 0.097356 | 0.232745 | 0.294869 | 0.001564 | 0.001156 | 0.000890 |
| tuple_version.test | RUN | 0.105359 | 0.249730 | 0.229927 | 0.001068 | 0.001262 | 0.001254 |
| mpl_version.test | RUN | 0.089151 | 0.178969 | 0.324466 | 0.001056 | 0.000906 | 0.001020 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 1.000× | 0.999×, 1.002× | 1.002× |
| clang | 1.094× | 1.097×, 1.091× | 1.002× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1364 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/43740486413).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| algorithm_version.test | 10 | 0.000744s | 0.000736s | 0.000731s | byte equality observed |
| bind_version.test | 10 | 0.000736s | 0.000722s | 0.000744s | byte equality observed |
| construct_from_tuple.test | 10 | 0.000746s | 0.000734s | 0.000751s | byte equality observed |
| function_version.test | 10 | 0.000738s | 0.000716s | 0.000746s | byte equality observed |
| integer_sequence.test | 10 | 0.000741s | 0.000729s | 0.000744s | byte equality observed |
| integer_sequence_version.test | 10 | 0.000744s | 0.000718s | 0.000744s | byte equality observed |
| integral.test | 10 | 0.000741s | 0.000728s | 0.000732s | byte equality observed |
| integral_version.test | 10 | 0.000739s | 0.000714s | 0.000739s | byte equality observed |
| list_version.test | 10 | 0.000745s | 0.000735s | 0.000748s | byte equality observed |
| map_version.test | 10 | 0.000720s | 0.000734s | 0.000775s | byte equality observed |
| mp11_version.test | 10 | 0.000740s | 0.000738s | 0.000796s | byte equality observed |
| mp_all.test | 10 | 0.000749s | 0.000728s | 0.000815s | byte equality observed |
| mp_all_2.test | 10 | 0.000734s | 0.000747s | 0.000820s | byte equality observed |
| mp_all_of.test | 10 | 0.000750s | 0.000740s | 0.000824s | byte equality observed |
| mp_all_of_q.test | 10 | 0.000746s | 0.000735s | 0.000799s | byte equality observed |
| mp_and.test | 10 | 0.000739s | 0.000727s | 0.000832s | byte equality observed |
| mp_any.test | 10 | 0.000745s | 0.000762s | 0.000813s | byte equality observed |
| mp_any_2.test | 10 | 0.000736s | 0.000744s | 0.000825s | byte equality observed |
| mp_any_of.test | 10 | 0.000746s | 0.000731s | 0.000812s | byte equality observed |
| mp_any_of_q.test | 10 | 0.000733s | 0.000742s | 0.000809s | byte equality observed |
| mp_append.test | 10 | 0.000740s | 0.000752s | 0.000831s | byte equality observed |
| mp_append_2.test | 10 | 0.000798s | 0.000740s | 0.000819s | byte equality observed |
| mp_append_3.test | 10 | 0.000359s | 0.000338s | 0.000779s | byte equality observed |
| mp_append_sf.test | 10 | 0.000802s | 0.000747s | 0.000778s | byte equality observed |
| mp_apply_q.test | 10 | 0.000811s | 0.000723s | 0.000804s | byte equality observed |
| mp_apply_q_sf.test | 10 | 0.000807s | 0.000752s | 0.000797s | byte equality observed |
| mp_assign.test | 10 | 0.000815s | 0.000747s | 0.000810s | byte equality observed |
| mp_assign_2.test | 10 | 0.000360s | 0.000344s | 0.000766s | byte equality observed |
| mp_at.test | 10 | 0.000796s | 0.000728s | 0.000781s | byte equality observed |
| mp_at_2.test | 10 | 0.000356s | 0.000345s | 0.000747s | byte equality observed |
| mp_at_sf.test | 10 | 0.000792s | 0.000759s | 0.000798s | byte equality observed |
| mp_back.test | 10 | 0.000792s | 0.000773s | 0.000801s | byte equality observed |
| mp_back_2.test | 10 | 0.000361s | 0.000345s | 0.000795s | byte equality observed |
| mp_bind.test | 10 | 0.000782s | 0.000808s | 0.000788s | byte equality observed |
| mp_bind_back.test | 10 | 0.000804s | 0.000821s | 0.000788s | byte equality observed |
| mp_bind_front.test | 10 | 0.000794s | 0.000787s | 0.000782s | byte equality observed |
| mp_bind_q.test | 10 | 0.000800s | 0.000836s | 0.000796s | byte equality observed |
| mp_clear.test | 10 | 0.000794s | 0.000805s | 0.000808s | byte equality observed |
| mp_clear_2.test | 10 | 0.000370s | 0.000354s | 0.000823s | byte equality observed |
| mp_compose.test | 10 | 0.000785s | 0.000810s | 0.000811s | byte equality observed |
| mp_cond.test | 10 | 0.000814s | 0.000786s | 0.000793s | byte equality observed |
| mp_cond_sf.test | 10 | 0.000809s | 0.000814s | 0.000795s | byte equality observed |
| mp_contains.test | 10 | 0.000794s | 0.000813s | 0.000795s | byte equality observed |
| mp_copy_if.test | 10 | 0.000801s | 0.000819s | 0.000802s | byte equality observed |
| mp_copy_if_q.test | 10 | 0.000817s | 0.000847s | 0.000791s | byte equality observed |
| mp_count.test | 10 | 0.000806s | 0.000832s | 0.000826s | byte equality observed |
| mp_count_if.test | 10 | 0.000818s | 0.000834s | 0.000835s | byte equality observed |
| mp_count_if_q.test | 10 | 0.000827s | 0.000797s | 0.000823s | byte equality observed |
| mp_defer.test | 10 | 0.000825s | 0.000799s | 0.000835s | byte equality observed |
| mp_drop.test | 10 | 0.000791s | 0.000805s | 0.000801s | byte equality observed |
| mp_drop_2.test | 10 | 0.000364s | 0.000361s | 0.000785s | byte equality observed |
| mp_empty.test | 10 | 0.000799s | 0.000800s | 0.000783s | byte equality observed |
| mp_empty_2.test | 10 | 0.000371s | 0.000357s | 0.000810s | byte equality observed |
| mp_erase.test | 10 | 0.000818s | 0.000799s | 0.000790s | byte equality observed |
| mp_erase_2.test | 10 | 0.000356s | 0.000365s | 0.000777s | byte equality observed |
| mp_eval_if.test | 10 | 0.000825s | 0.000837s | 0.000797s | byte equality observed |
| mp_eval_if_not.test | 10 | 0.000819s | 0.000802s | 0.000809s | byte equality observed |
| mp_eval_if_sf.test | 10 | 0.000817s | 0.000814s | 0.000818s | byte equality observed |
| mp_eval_or.test | 10 | 0.000772s | 0.000829s | 0.000834s | byte equality observed |
| mp_fill.test | 10 | 0.000797s | 0.000784s | 0.000807s | byte equality observed |
| mp_fill_2.test | 10 | 0.000360s | 0.000361s | 0.000820s | byte equality observed |
| mp_filter.test | 10 | 0.000780s | 0.000818s | 0.000788s | byte equality observed |
| mp_find.test | 10 | 0.000800s | 0.000816s | 0.000826s | byte equality observed |
| mp_find_if.test | 10 | 0.000807s | 0.000820s | 0.000813s | byte equality observed |
| mp_find_if_q.test | 10 | 0.000824s | 0.000811s | 0.000800s | byte equality observed |
| mp_flatten.test | 10 | 0.000803s | 0.000825s | 0.000809s | byte equality observed |
| mp_fold.test | 10 | 0.000811s | 0.000805s | 0.000786s | byte equality observed |
| mp_fold_q.test | 10 | 0.000813s | 0.000796s | 0.000817s | byte equality observed |
| mp_fold_q_sf.test | 10 | 0.000808s | 0.000815s | 0.000820s | byte equality observed |
| mp_for_each.test | 10 | 0.000800s | 0.000800s | 0.000839s | byte equality observed |
| mp_from_sequence.test | 10 | 0.000820s | 0.000825s | 0.000817s | byte equality observed |
| mp_from_sequence_2.test | 10 | 0.000791s | 0.000847s | 0.000812s | byte equality observed |
| mp_from_sequence_3.test | 10 | 0.000810s | 0.000801s | 0.000799s | byte equality observed |
| mp_front.test | 10 | 0.000791s | 0.000823s | 0.000801s | byte equality observed |
| mp_front_2.test | 10 | 0.000360s | 0.000354s | 0.000800s | byte equality observed |
| mp_identity.test | 10 | 0.000797s | 0.000799s | 0.000807s | byte equality observed |
| mp_if.test | 10 | 0.000820s | 0.000842s | 0.000813s | byte equality observed |
| mp_if_sf.test | 10 | 0.000832s | 0.000815s | 0.000798s | byte equality observed |
| mp_inherit.test | 10 | 0.000832s | 0.000807s | 0.000809s | byte equality observed |
| mp_insert.test | 10 | 0.000829s | 0.000801s | 0.000807s | byte equality observed |
| mp_insert_2.test | 10 | 0.000366s | 0.000358s | 0.000798s | byte equality observed |
| mp_intersperse.test | 10 | 0.000793s | 0.000812s | 0.000806s | byte equality observed |
| mp_invoke_q.test | 10 | 0.000805s | 0.000828s | 0.000795s | byte equality observed |
| mp_invoke_q_sf.test | 10 | 0.000808s | 0.000843s | 0.000808s | byte equality observed |
| mp_iota.test | 10 | 0.000814s | 0.000844s | 0.000781s | byte equality observed |
| mp_iota_2.test | 10 | 0.000826s | 0.000843s | 0.000802s | byte equality observed |
| mp_is_list.test | 10 | 0.000812s | 0.000831s | 0.000784s | byte equality observed |
| mp_is_map.test | 10 | 0.000824s | 0.000807s | 0.000819s | byte equality observed |
| mp_is_set.test | 10 | 0.000822s | 0.000811s | 0.000831s | byte equality observed |
| mp_is_value_list.test | 10 | 0.000817s | 0.000775s | 0.000818s | byte equality observed |
| mp_iterate.test | 10 | 0.000821s | 0.000792s | 0.000794s | byte equality observed |
| mp_join.test | 10 | 0.000806s | 0.000760s | 0.000822s | byte equality observed |
| mp_lambda.test | 10 | 0.000826s | 0.000811s | 0.000821s | byte equality observed |
| mp_less.test | 10 | 0.000830s | 0.000793s | 0.000807s | byte equality observed |
| mp_list_c.test | 10 | 0.000807s | 0.000811s | 0.000804s | byte equality observed |
| mp_list_v.test | 10 | 0.000361s | 0.000362s | 0.000821s | byte equality observed |
| mp_map_contains.test | 10 | 0.000781s | 0.000793s | 0.000812s | byte equality observed |
| mp_map_erase.test | 10 | 0.000791s | 0.000808s | 0.000850s | byte equality observed |
| mp_map_find.test | 10 | 0.000805s | 0.000792s | 0.000846s | byte equality observed |
| mp_map_find_2.test | 10 | 0.000810s | 0.000802s | 0.000791s | byte equality observed |
| mp_map_find_3.test | 10 | 0.000795s | 0.000784s | 0.000786s | byte equality observed |
| mp_map_find_4.test | 10 | 0.000806s | 0.000814s | 0.000807s | byte equality observed |
| mp_map_insert.test | 10 | 0.000800s | 0.000835s | 0.000815s | byte equality observed |
| mp_map_keys.test | 10 | 0.000810s | 0.000835s | 0.000808s | byte equality observed |
| mp_map_replace.test | 10 | 0.000827s | 0.000838s | 0.000803s | byte equality observed |
| mp_map_update.test | 10 | 0.000813s | 0.000834s | 0.000828s | byte equality observed |
| mp_map_update_q.test | 10 | 0.000803s | 0.000806s | 0.000791s | byte equality observed |
| mp_max.test | 10 | 0.000795s | 0.000800s | 0.000807s | byte equality observed |
| mp_max_element.test | 10 | 0.000800s | 0.000800s | 0.000813s | byte equality observed |
| mp_max_element_2.test | 10 | 0.000362s | 0.000352s | 0.000801s | byte equality observed |
| mp_max_element_q.test | 10 | 0.000787s | 0.000797s | 0.000795s | byte equality observed |
| mp_max_element_q_2.test | 10 | 0.000362s | 0.000364s | 0.000789s | byte equality observed |
| mp_min.test | 10 | 0.000788s | 0.000799s | 0.000781s | byte equality observed |
| mp_min_element.test | 10 | 0.000791s | 0.000790s | 0.000808s | byte equality observed |
| mp_min_element_2.test | 10 | 0.000363s | 0.000360s | 0.000769s | byte equality observed |
| mp_min_element_q.test | 10 | 0.000788s | 0.000787s | 0.000810s | byte equality observed |
| mp_min_element_q_2.test | 10 | 0.000362s | 0.000354s | 0.000785s | byte equality observed |
| mp_none_of.test | 10 | 0.000830s | 0.000804s | 0.000787s | byte equality observed |
| mp_none_of_q.test | 10 | 0.000812s | 0.000785s | 0.000807s | byte equality observed |
| mp_not_fn.test | 10 | 0.000794s | 0.000796s | 0.000795s | byte equality observed |
| mp_nth_element.test | 10 | 0.000796s | 0.000798s | 0.000827s | byte equality observed |
| mp_nth_element_q.test | 10 | 0.000803s | 0.000805s | 0.000828s | byte equality observed |
| mp_or.test | 10 | 0.000809s | 0.000803s | 0.000811s | byte equality observed |
| mp_pairwise_fold.test | 10 | 0.000796s | 0.000839s | 0.000806s | byte equality observed |
| mp_pairwise_fold_q.test | 10 | 0.000809s | 0.000835s | 0.000809s | byte equality observed |
| mp_partial_sum.test | 10 | 0.000833s | 0.000824s | 0.000812s | byte equality observed |
| mp_partition.test | 10 | 0.000817s | 0.000806s | 0.000818s | byte equality observed |
| mp_partition_q.test | 10 | 0.000803s | 0.000796s | 0.000813s | byte equality observed |
| mp_plus.test | 10 | 0.000829s | 0.000830s | 0.000826s | byte equality observed |
| mp_pop_back.test | 10 | 0.000822s | 0.000813s | 0.000831s | byte equality observed |
| mp_pop_back_2.test | 10 | 0.000364s | 0.000349s | 0.000800s | byte equality observed |
| mp_pop_front.test | 10 | 0.000795s | 0.000805s | 0.000805s | byte equality observed |
| mp_pop_front_2.test | 10 | 0.000366s | 0.000360s | 0.000797s | byte equality observed |
| mp_power_set.test | 10 | 0.000804s | 0.000822s | 0.000790s | byte equality observed |
| mp_product.test | 10 | 0.000798s | 0.000810s | 0.000804s | byte equality observed |
| mp_push_back.test | 10 | 0.000791s | 0.000814s | 0.000826s | byte equality observed |
| mp_push_back_2.test | 10 | 0.000361s | 0.000362s | 0.000796s | byte equality observed |
| mp_push_front.test | 10 | 0.000809s | 0.000808s | 0.000812s | byte equality observed |
| mp_push_front_2.test | 10 | 0.000363s | 0.000360s | 0.000767s | byte equality observed |
| mp_quote.test | 10 | 0.000813s | 0.000794s | 0.000799s | byte equality observed |
| mp_quote_trait.test | 10 | 0.000840s | 0.000814s | 0.000790s | byte equality observed |
| mp_remove.test | 10 | 0.000811s | 0.000804s | 0.000793s | byte equality observed |
| mp_remove_if.test | 10 | 0.000794s | 0.000831s | 0.000828s | byte equality observed |
| mp_remove_if_q.test | 10 | 0.000811s | 0.000837s | 0.000824s | byte equality observed |
| mp_rename.test | 10 | 0.000795s | 0.000790s | 0.000806s | byte equality observed |
| mp_rename_2.test | 10 | 0.000364s | 0.000364s | 0.000783s | byte equality observed |
| mp_rename_v.test | 10 | 0.000351s | 0.000362s | 0.000762s | byte equality observed |
| mp_repeat.test | 10 | 0.000798s | 0.000806s | 0.000776s | byte equality observed |
| mp_repeat_2.test | 10 | 0.000361s | 0.000357s | 0.000783s | byte equality observed |
| mp_repeat_3.test | 10 | 0.000809s | 0.000792s | 0.000780s | byte equality observed |
| mp_replace.test | 10 | 0.000816s | 0.000791s | 0.000832s | byte equality observed |
| mp_replace_at.test | 10 | 0.000788s | 0.000808s | 0.000836s | byte equality observed |
| mp_replace_at_c.test | 10 | 0.000825s | 0.000798s | 0.000840s | byte equality observed |
| mp_replace_front.test | 10 | 0.000800s | 0.000798s | 0.000815s | byte equality observed |
| mp_replace_front_2.test | 10 | 0.000363s | 0.000363s | 0.000769s | byte equality observed |
| mp_replace_if.test | 10 | 0.000816s | 0.000803s | 0.000790s | byte equality observed |
| mp_replace_if_q.test | 10 | 0.000794s | 0.000811s | 0.000790s | byte equality observed |
| mp_replace_second.test | 10 | 0.000791s | 0.000831s | 0.000794s | byte equality observed |
| mp_replace_second_2.test | 10 | 0.000355s | 0.000344s | 0.000786s | byte equality observed |
| mp_replace_third.test | 10 | 0.000781s | 0.000799s | 0.000781s | byte equality observed |
| mp_replace_third_2.test | 10 | 0.000363s | 0.000354s | 0.000800s | byte equality observed |
| mp_reverse.test | 10 | 0.000814s | 0.000818s | 0.000786s | byte equality observed |
| mp_reverse_fold.test | 10 | 0.000811s | 0.000820s | 0.000808s | byte equality observed |
| mp_reverse_fold_q.test | 10 | 0.000808s | 0.000807s | 0.000780s | byte equality observed |
| mp_rotate_left.test | 10 | 0.000809s | 0.000819s | 0.000804s | byte equality observed |
| mp_rotate_right.test | 10 | 0.000793s | 0.000826s | 0.000852s | byte equality observed |
| mp_same.test | 10 | 0.000820s | 0.000783s | 0.000833s | byte equality observed |
| mp_second.test | 10 | 0.000803s | 0.000798s | 0.000829s | byte equality observed |
| mp_second_2.test | 10 | 0.000362s | 0.000360s | 0.000778s | byte equality observed |
| mp_set_contains.test | 10 | 0.000787s | 0.000806s | 0.000808s | byte equality observed |
| mp_set_difference.test | 10 | 0.000802s | 0.000775s | 0.000785s | byte equality observed |
| mp_set_difference_sf.test | 10 | 0.000818s | 0.000797s | 0.000792s | byte equality observed |
| mp_set_intersection.test | 10 | 0.000792s | 0.000802s | 0.000797s | byte equality observed |
| mp_set_intersection_sf.test | 10 | 0.000821s | 0.000788s | 0.000791s | byte equality observed |
| mp_set_push_back.test | 10 | 0.000811s | 0.000815s | 0.000788s | byte equality observed |
| mp_set_push_front.test | 10 | 0.000808s | 0.000801s | 0.000819s | byte equality observed |
| mp_set_union.test | 10 | 0.000810s | 0.000799s | 0.000801s | byte equality observed |
| mp_set_union_sf.test | 10 | 0.000813s | 0.000787s | 0.000813s | byte equality observed |
| mp_similar.test | 10 | 0.000816s | 0.000789s | 0.000838s | byte equality observed |
| mp_size.test | 10 | 0.000794s | 0.000787s | 0.000812s | byte equality observed |
| mp_size_2.test | 10 | 0.000369s | 0.000365s | 0.000817s | byte equality observed |
| mp_slice.test | 10 | 0.000816s | 0.000811s | 0.000816s | byte equality observed |
| mp_slice_2.test | 10 | 0.000361s | 0.000355s | 0.000780s | byte equality observed |
| mp_sliding_fold.test | 10 | 0.000824s | 0.000795s | 0.000811s | byte equality observed |
| mp_sliding_fold_q.test | 10 | 0.000809s | 0.000805s | 0.000840s | byte equality observed |
| mp_sort.test | 10 | 0.000785s | 0.000802s | 0.000820s | byte equality observed |
| mp_sort_q.test | 10 | 0.000810s | 0.000779s | 0.000832s | byte equality observed |
| mp_split.test | 10 | 0.000818s | 0.000792s | 0.000849s | byte equality observed |
| mp_starts_with.test | 10 | 0.000808s | 0.000801s | 0.000845s | byte equality observed |
| mp_starts_with_sf.test | 10 | 0.000815s | 0.000817s | 0.000831s | byte equality observed |
| mp_take.test | 10 | 0.000814s | 0.000834s | 0.000815s | byte equality observed |
| mp_take_2.test | 10 | 0.000362s | 0.000359s | 0.000792s | byte equality observed |
| mp_third.test | 10 | 0.000802s | 0.000816s | 0.000793s | byte equality observed |
| mp_third_2.test | 10 | 0.000363s | 0.000360s | 0.000812s | byte equality observed |
| mp_transform.test | 10 | 0.000818s | 0.000829s | 0.000798s | byte equality observed |
| mp_transform_2.test | 10 | 0.000798s | 0.000768s | 0.000761s | byte equality observed |
| mp_transform_front.test | 10 | 0.000793s | 0.000788s | 0.000799s | byte equality observed |
| mp_transform_front_2.test | 10 | 0.000353s | 0.000368s | 0.000786s | byte equality observed |
| mp_transform_if.test | 10 | 0.000802s | 0.000823s | 0.000801s | byte equality observed |
| mp_transform_if_q.test | 10 | 0.000798s | 0.000809s | 0.000806s | byte equality observed |
| mp_transform_q.test | 10 | 0.000823s | 0.000801s | 0.000827s | byte equality observed |
| mp_transform_q_2.test | 10 | 0.000798s | 0.000785s | 0.000822s | byte equality observed |
| mp_transform_second.test | 10 | 0.000799s | 0.000793s | 0.000775s | byte equality observed |
| mp_transform_second_2.test | 10 | 0.000354s | 0.000355s | 0.000819s | byte equality observed |
| mp_transform_sf.test | 10 | 0.000809s | 0.000803s | 0.000801s | byte equality observed |
| mp_transform_third.test | 10 | 0.000813s | 0.000808s | 0.000810s | byte equality observed |
| mp_transform_third_2.test | 10 | 0.000363s | 0.000358s | 0.000799s | byte equality observed |
| mp_unique.test | 10 | 0.000801s | 0.000801s | 0.000808s | byte equality observed |
| mp_unique_if.test | 10 | 0.000830s | 0.000842s | 0.000809s | byte equality observed |
| mp_unique_if_q.test | 10 | 0.000824s | 0.000824s | 0.000803s | byte equality observed |
| mp_valid.test | 10 | 0.000807s | 0.000822s | 0.000787s | byte equality observed |
| mp_valid_and_true.test | 10 | 0.000805s | 0.000787s | 0.000814s | byte equality observed |
| mp_value.test | 10 | 0.000364s | 0.000364s | 0.000795s | byte equality observed |
| mp_with_index.test | 10 | 0.001101s | 0.001065s | 0.001020s | byte equality observed |
| mp_with_index_cx.test | 10 | 0.000361s | 0.000359s | 0.000780s | byte equality observed |
| mpl.test | 10 | 0.000832s | 0.000823s | 0.000797s | byte equality observed |
| mpl_list.test | 10 | 0.000785s | 0.000837s | 0.000806s | byte equality observed |
| mpl_tuple.test | 10 | 0.000799s | 0.000803s | 0.000814s | byte equality observed |
| mpl_version.test | 10 | 0.000786s | 0.000828s | 0.000836s | byte equality observed |
| set_version.test | 10 | 0.000799s | 0.000802s | 0.000782s | byte equality observed |
| tuple_apply.test | 10 | 0.000816s | 0.000835s | 0.000834s | byte equality observed |
| tuple_for_each.test | 10 | 0.000803s | 0.000833s | 0.000790s | byte equality observed |
| tuple_transform.test | 10 | 0.000825s | 0.000823s | 0.000799s | byte equality observed |
| tuple_transform_2.test | 10 | 0.000829s | 0.000789s | 0.000817s | byte equality observed |
| tuple_version.test | 10 | 0.000784s | 0.000801s | 0.000823s | byte equality observed |
| utility_version.test | 10 | 0.000811s | 0.000807s | 0.000816s | byte equality observed |
| version.test | 10 | 0.000797s | 0.000812s | 0.000793s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/43740486413).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
