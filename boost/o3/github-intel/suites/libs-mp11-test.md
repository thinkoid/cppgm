# libs/mp11/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| mp11.test | COMPILE | 0.038161 | 0.070478 | 0.111825 | — | — | — |
| complex_h.test | COMPILE | 0.158747 | 0.336618 | 0.457992 | — | — | — |
| mp_size.test | RUN | 0.181097 | 1.108718 | 0.589362 | 0.001387 | 0.001542 | 0.001321 |
| mp_size_2.test | RUN | 0.016146 | 0.038305 | 0.049951 | 0.000614 | 0.000619 | 0.001285 |
| mp_empty.test | RUN | 0.185990 | 0.700991 | 0.574616 | 0.001293 | 0.001502 | 0.001318 |
| mp_empty_2.test | RUN | 0.016618 | 0.039846 | 0.052466 | 0.000567 | 0.000591 | 0.001292 |
| mp_assign.test | RUN | 0.199900 | 1.445066 | 0.763001 | 0.001290 | 0.001503 | 0.001372 |
| mp_assign_2.test | RUN | 0.015488 | 0.039902 | 0.049910 | 0.000555 | 0.000576 | 0.001235 |
| mp_clear.test | RUN | 0.179050 | 0.620362 | 0.566600 | 0.001306 | 0.001520 | 0.001279 |
| mp_clear_2.test | RUN | 0.016503 | 0.039057 | 0.052458 | 0.000594 | 0.000577 | 0.001250 |
| mp_front.test | RUN | 0.187044 | 0.992389 | 0.665969 | 0.001296 | 0.001493 | 0.001213 |
| mp_front_2.test | RUN | 0.016168 | 0.037011 | 0.052244 | 0.000541 | 0.000448 | 0.001272 |
| mp_pop_front.test | RUN | 0.180404 | 1.044361 | 0.637986 | 0.001315 | 0.001501 | 0.001402 |
| mp_pop_front_2.test | RUN | 0.015710 | 0.039197 | 0.050266 | 0.000493 | 0.000594 | 0.001229 |
| mp_second.test | RUN | 0.175017 | 0.630577 | 0.616510 | 0.001315 | 0.001503 | 0.001257 |
| mp_second_2.test | RUN | 0.015566 | 0.039609 | 0.050873 | 0.000592 | 0.000574 | 0.001337 |
| mp_third.test | RUN | 0.179742 | 0.601498 | 0.577767 | 0.001272 | 0.001522 | 0.001330 |
| mp_third_2.test | RUN | 0.016304 | 0.038019 | 0.049535 | 0.000548 | 0.000591 | 0.001109 |
| mp_push_front.test | RUN | 0.233690 | 2.224318 | 1.051887 | 0.001529 | 0.001484 | 0.001314 |
| mp_push_front_2.test | RUN | 0.015041 | 0.036674 | 0.051872 | 0.000502 | 0.000584 | 0.001184 |
| mp_push_back.test | RUN | 0.239714 | 2.197514 | 1.080968 | 0.001250 | 0.001386 | 0.001284 |
| mp_push_back_2.test | RUN | 0.014095 | 0.039387 | 0.052347 | 0.000550 | 0.000563 | 0.001236 |
| mp_rename.test | RUN | 0.223809 | 2.033188 | 0.931266 | 0.001382 | 0.001452 | 0.001242 |
| mp_rename_2.test | RUN | 0.016190 | 0.038768 | 0.052211 | 0.000570 | 0.000563 | 0.001277 |
| mp_append.test | RUN | 0.238323 | 2.311787 | 0.993944 | 0.001348 | 0.001441 | 0.001359 |
| mp_append_2.test | RUN | 0.552040 | 5.173857 | 1.348330 | 0.001307 | 0.001570 | 0.001234 |
| mp_append_3.test | RUN | 0.015853 | 0.038704 | 0.052188 | 0.000562 | 0.000604 | 0.001250 |
| mp_append_sf.test | RUN | 0.168924 | 0.554732 | 0.531039 | 0.001316 | 0.001401 | 0.001357 |
| mp_replace_front.test | RUN | 0.204438 | 1.651293 | 0.829477 | 0.001253 | 0.001573 | 0.001315 |
| mp_replace_front_2.test | RUN | 0.015940 | 0.036631 | 0.049741 | 0.000550 | 0.000562 | 0.001293 |
| mp_replace_second.test | RUN | 0.197497 | 1.061328 | 0.738258 | 0.001253 | 0.001503 | 0.001312 |
| mp_replace_second_2.test | RUN | 0.014590 | 0.037559 | 0.050643 | 0.000559 | 0.000601 | 0.001126 |
| mp_replace_third.test | RUN | 0.195213 | 0.869286 | 0.667542 | 0.001328 | 0.001471 | 0.001319 |
| mp_replace_third_2.test | RUN | 0.014470 | 0.039593 | 0.049205 | 0.000399 | 0.000569 | 0.001303 |
| mp_apply_q.test | RUN | 0.223093 | 2.036595 | 0.898031 | 0.001297 | 0.001508 | 0.001347 |
| mp_apply_q_sf.test | RUN | 0.170111 | 0.575085 | 0.568033 | 0.001334 | 0.001460 | 0.001356 |
| mp_is_list.test | RUN | 0.172742 | 0.689393 | 0.591085 | 0.001237 | 0.001555 | 0.001320 |
| mp_list_c.test | RUN | 0.185816 | 0.832840 | 0.659940 | 0.001340 | 0.001582 | 0.001360 |
| mp_transform_front.test | RUN | 0.214503 | 1.660319 | 0.804658 | 0.001392 | 0.001472 | 0.001354 |
| mp_transform_front_2.test | RUN | 0.016432 | 0.039734 | 0.056022 | 0.000561 | 0.000590 | 0.001302 |
| mp_transform_second.test | RUN | 0.193720 | 1.418086 | 0.756094 | 0.001096 | 0.001332 | 0.001314 |
| mp_transform_second_2.test | RUN | 0.015532 | 0.038053 | 0.049408 | 0.000536 | 0.000580 | 0.001277 |
| mp_transform_third.test | RUN | 0.181456 | 1.068282 | 0.654595 | 0.001178 | 0.001506 | 0.001265 |
| mp_transform_third_2.test | RUN | 0.015664 | 0.039090 | 0.050526 | 0.000567 | 0.000619 | 0.001278 |
| mp_list_v.test | RUN | 0.014893 | 0.039118 | 0.052024 | 0.000550 | 0.000530 | 0.001265 |
| mp_rename_v.test | RUN | 0.013322 | 0.037357 | 0.050579 | 0.000578 | 0.000586 | 0.001194 |
| mp_is_value_list.test | RUN | 0.178281 | 0.426606 | 0.540381 | 0.001469 | 0.001489 | 0.001441 |
| mp_transform.test | RUN | 0.445918 | 3.451101 | 1.723777 | 0.001400 | 0.001409 | 0.001407 |
| mp_transform_2.test | RUN | 0.166851 | 0.375043 | 0.501175 | 0.001244 | 0.001537 | 0.001299 |
| mp_transform_q.test | RUN | 0.429438 | 3.302615 | 1.669621 | 0.001306 | 0.001647 | 0.001342 |
| mp_transform_q_2.test | RUN | 0.431745 | 1.043223 | 2.093930 | 0.001357 | 0.001412 | 0.001356 |
| mp_transform_sf.test | RUN | 0.179986 | 0.595930 | 0.590842 | 0.001251 | 0.001298 | 0.001403 |
| mp_transform_if.test | RUN | 0.226961 | 1.632845 | 0.893995 | 0.001390 | 0.001499 | 0.001418 |
| mp_transform_if_q.test | RUN | 0.225416 | 1.648443 | 0.888157 | 0.001365 | 0.001356 | 0.001156 |
| mp_filter.test | RUN | 0.196812 | 0.952141 | 0.664701 | 0.001283 | 0.001480 | 0.001234 |
| mp_fill.test | RUN | 0.190409 | 0.712134 | 0.614914 | 0.001378 | 0.001423 | 0.001239 |
| mp_fill_2.test | RUN | 0.028182 | 0.058514 | 0.090015 | 0.000563 | 0.000467 | 0.001294 |
| mp_count.test | RUN | 0.368323 | 1.747295 | 1.004775 | 0.001455 | 0.001565 | 0.001340 |
| mp_count_if.test | RUN | 0.372016 | 1.775549 | 1.085709 | 0.001277 | 0.001362 | 0.001274 |
| mp_count_if_q.test | RUN | 0.194979 | 1.177785 | 0.645095 | 0.001285 | 0.001352 | 0.001374 |
| mp_contains.test | RUN | 0.178874 | 0.706385 | 0.600708 | 0.001333 | 0.001446 | 0.001241 |
| mp_starts_with.test | RUN | 0.182607 | 0.702373 | 0.581783 | 0.001534 | 0.001448 | 0.001330 |
| mp_starts_with_sf.test | RUN | 0.180325 | 0.593235 | 0.573748 | 0.001368 | 0.001417 | 0.001377 |
| mp_repeat.test | RUN | 0.277207 | 2.949313 | 1.156184 | 0.001318 | 0.001551 | 0.001336 |
| mp_repeat_2.test | RUN | 0.027063 | 0.062541 | 0.085753 | 0.000617 | 0.000563 | 0.001231 |
| mp_repeat_3.test | RUN | 0.223818 | 0.371135 | 0.553450 | 0.001308 | 0.001378 | 0.001449 |
| mp_product.test | RUN | 0.217671 | 1.757051 | 0.841190 | 0.001287 | 0.001483 | 0.001355 |
| mp_drop.test | RUN | 0.233751 | 2.209359 | 0.936920 | 0.001290 | 0.001586 | 0.001260 |
| mp_drop_2.test | RUN | 0.028096 | 0.061323 | 0.090174 | 0.000565 | 0.000563 | 0.001339 |
| mp_iota.test | RUN | 0.219086 | 1.874570 | 0.847990 | 0.001486 | 0.001366 | 0.001298 |
| mp_iota_2.test | RUN | 0.243178 | 2.229919 | 0.937870 | 0.001443 | 0.001494 | 0.001273 |
| mp_at.test | RUN | 0.193625 | 0.968789 | 0.678873 | 0.001261 | 0.001451 | 0.001255 |
| mp_at_2.test | RUN | 0.028870 | 0.062735 | 0.089037 | 0.000600 | 0.000613 | 0.001254 |
| mp_at_sf.test | RUN | 0.186974 | 0.602747 | 0.561099 | 0.001404 | 0.001477 | 0.001300 |
| mp_take.test | RUN | 0.322247 | 2.928781 | 1.123954 | 0.001347 | 0.001546 | 0.001322 |
| mp_take_2.test | RUN | 0.029860 | 0.060353 | 0.088403 | 0.000567 | 0.000572 | 0.001184 |
| mp_slice.test | RUN | 0.378598 | 2.954659 | 1.460984 | 0.001235 | 0.001454 | 0.001370 |
| mp_slice_2.test | RUN | 0.027173 | 0.059222 | 0.087935 | 0.000566 | 0.000565 | 0.001257 |
| mp_replace.test | RUN | 0.230727 | 1.494079 | 0.928392 | 0.001382 | 0.001405 | 0.001311 |
| mp_replace_if.test | RUN | 0.214220 | 1.313327 | 0.834307 | 0.001350 | 0.001620 | 0.001230 |
| mp_replace_if_q.test | RUN | 0.221289 | 1.319928 | 0.834358 | 0.001329 | 0.001472 | 0.001246 |
| mp_copy_if.test | RUN | 0.228316 | 1.831540 | 0.796013 | 0.001265 | 0.001106 | 0.001367 |
| mp_copy_if_q.test | RUN | 0.224149 | 1.827970 | 0.800262 | 0.001306 | 0.001360 | 0.001272 |
| mp_remove.test | RUN | 0.219563 | 1.238945 | 0.830838 | 0.001311 | 0.001530 | 0.001253 |
| mp_remove_if.test | RUN | 0.232951 | 1.947652 | 0.868702 | 0.001291 | 0.001568 | 0.001322 |
| mp_remove_if_q.test | RUN | 0.232522 | 1.949372 | 0.863858 | 0.001299 | 0.001420 | 0.001359 |
| mp_partition.test | RUN | 0.228971 | 1.857916 | 0.922421 | 0.001297 | 0.001628 | 0.001213 |
| mp_partition_q.test | RUN | 0.228081 | 1.859014 | 0.925779 | 0.001338 | 0.001454 | 0.001202 |
| mp_sort.test | RUN | 0.213178 | 1.333547 | 0.805813 | 0.001246 | 0.001484 | 0.001320 |
| mp_sort_q.test | RUN | 0.215265 | 1.316505 | 0.808107 | 0.001360 | 0.001457 | 0.001363 |
| mp_find.test | RUN | 0.208149 | 1.415607 | 0.693465 | 0.001427 | 0.001370 | 0.001253 |
| mp_find_if.test | RUN | 0.200807 | 1.316088 | 0.659151 | 0.001294 | 0.001524 | 0.001317 |
| mp_find_if_q.test | RUN | 0.224156 | 1.467028 | 0.801082 | 0.001299 | 0.001514 | 0.001293 |
| mp_reverse.test | RUN | 0.486586 | 3.956461 | 1.594503 | 0.001317 | 0.001543 | 0.001348 |
| mp_fold.test | RUN | 0.804942 | 3.020835 | 4.063433 | 0.001393 | 0.001538 | 0.001342 |
| mp_fold_q.test | RUN | 0.205327 | 1.323319 | 0.771098 | 0.001530 | 0.001403 | 0.001359 |
| mp_fold_q_sf.test | RUN | 0.180857 | 0.609850 | 0.587779 | 0.001302 | 0.001526 | 0.001247 |
| mp_reverse_fold.test | RUN | 0.377733 | 2.930372 | 1.133713 | 0.001309 | 0.001617 | 0.001339 |
| mp_reverse_fold_q.test | RUN | 0.223665 | 1.620278 | 0.826376 | 0.001244 | 0.001442 | 0.001214 |
| mp_unique.test | RUN | 0.223196 | 1.450965 | 0.804384 | 0.001285 | 0.001397 | 0.001221 |
| mp_unique_if.test | RUN | 0.388909 | 3.011572 | 1.299301 | 0.001380 | 0.001455 | 0.001326 |
| mp_unique_if_q.test | RUN | 0.348957 | 2.963848 | 1.034419 | 0.001472 | 0.001462 | 0.001315 |
| mp_all_of.test | RUN | 0.506100 | 1.573510 | 1.363680 | 0.001320 | 0.001576 | 0.001311 |
| mp_all_of_q.test | RUN | 0.185600 | 0.688079 | 0.577947 | 0.001501 | 0.001966 | 0.001354 |
| mp_any_of.test | RUN | 0.506034 | 1.630556 | 1.356406 | 0.001336 | 0.001421 | 0.001307 |
| mp_any_of_q.test | RUN | 0.189389 | 0.689419 | 0.558231 | 0.001362 | 0.001402 | 0.001403 |
| mp_none_of.test | RUN | 0.510209 | 1.644815 | 1.340663 | 0.001307 | 0.001527 | 0.001391 |
| mp_none_of_q.test | RUN | 0.186920 | 0.678253 | 0.587495 | 0.001419 | 0.001417 | 0.001297 |
| mp_replace_at.test | RUN | 0.230495 | 1.447461 | 0.911599 | 0.001299 | 0.001416 | 0.001312 |
| mp_replace_at_c.test | RUN | 0.224817 | 1.448327 | 0.911265 | 0.001316 | 0.001419 | 0.001299 |
| mp_for_each.test | RUN | 0.209382 | 0.948758 | 0.889594 | 0.001283 | 0.001458 | 0.001162 |
| mp_insert.test | RUN | 0.357504 | 2.942049 | 1.312892 | 0.001474 | 0.001366 | 0.001340 |
| mp_insert_2.test | RUN | 0.028045 | 0.058586 | 0.072325 | 0.000543 | 0.000581 | 0.001187 |
| mp_erase.test | RUN | 0.398496 | 3.132915 | 1.519006 | 0.001461 | 0.001578 | 0.001296 |
| mp_erase_2.test | RUN | 0.028336 | 0.057917 | 0.087313 | 0.000605 | 0.000552 | 0.001269 |
| mp_with_index.test | RUN | 0.488217 | 6.255986 | 3.301422 | 0.001670 | 0.001906 | 0.001638 |
| mp_with_index_cx.test | RUN | 0.003202 | 0.018820 | 0.024797 | 0.000604 | 0.000588 | 0.001296 |
| mp_from_sequence.test | RUN | 0.236222 | 1.630865 | 0.862716 | 0.001320 | 0.001489 | 0.001381 |
| mp_from_sequence_2.test | RUN | 0.250273 | 1.923945 | 0.953886 | 0.001343 | 0.001466 | 0.001338 |
| mp_from_sequence_3.test | RUN | 0.194526 | 0.839350 | 0.671602 | 0.001356 | 0.001527 | 0.001356 |
| mp_min_element.test | RUN | 0.195739 | 0.767915 | 0.623496 | 0.001327 | 0.001415 | 0.001349 |
| mp_min_element_2.test | RUN | 0.028158 | 0.059925 | 0.082857 | 0.000552 | 0.000586 | 0.001370 |
| mp_min_element_q.test | RUN | 0.193825 | 0.758656 | 0.607205 | 0.001279 | 0.001407 | 0.001272 |
| mp_min_element_q_2.test | RUN | 0.024963 | 0.060757 | 0.086801 | 0.000491 | 0.000567 | 0.001304 |
| mp_max_element.test | RUN | 0.187255 | 0.756896 | 0.596274 | 0.001338 | 0.001459 | 0.001244 |
| mp_max_element_2.test | RUN | 0.029693 | 0.063304 | 0.085902 | 0.000479 | 0.000562 | 0.001262 |
| mp_max_element_q.test | RUN | 0.193415 | 0.770174 | 0.608494 | 0.001422 | 0.001417 | 0.001338 |
| mp_max_element_q_2.test | RUN | 0.029530 | 0.060511 | 0.086081 | 0.000541 | 0.000602 | 0.001215 |
| mp_nth_element.test | RUN | 0.209728 | 1.079467 | 0.768020 | 0.001365 | 0.001409 | 0.001118 |
| mp_nth_element_q.test | RUN | 0.210143 | 1.074555 | 0.737648 | 0.001292 | 0.001547 | 0.001217 |
| mp_back.test | RUN | 0.206059 | 0.880958 | 0.718904 | 0.001330 | 0.001344 | 0.001135 |
| mp_back_2.test | RUN | 0.028235 | 0.060476 | 0.087088 | 0.000523 | 0.000548 | 0.001291 |
| mp_pop_back.test | RUN | 0.617481 | 5.985662 | 1.530772 | 0.001433 | 0.001530 | 0.001279 |
| mp_pop_back_2.test | RUN | 0.027860 | 0.061609 | 0.086568 | 0.000543 | 0.000553 | 0.001083 |
| mp_flatten.test | RUN | 0.246704 | 2.114462 | 1.020509 | 0.001398 | 0.001522 | 0.001306 |
| mp_rotate_left.test | RUN | 0.249474 | 2.293820 | 0.998744 | 0.001369 | 0.001445 | 0.001248 |
| mp_rotate_right.test | RUN | 0.251219 | 2.307773 | 1.012975 | 0.001272 | 0.001499 | 0.001296 |
| mp_power_set.test | RUN | 0.241719 | 2.171916 | 1.020514 | 0.001349 | 0.001552 | 0.001265 |
| mp_partial_sum.test | RUN | 0.326544 | 2.961083 | 1.161463 | 0.001369 | 0.001613 | 0.001247 |
| mp_iterate.test | RUN | 0.209639 | 0.856492 | 0.800944 | 0.001330 | 0.001496 | 0.001382 |
| mp_pairwise_fold.test | RUN | 0.242112 | 2.006120 | 1.038740 | 0.001336 | 0.001388 | 0.001272 |
| mp_pairwise_fold_q.test | RUN | 0.184985 | 0.580034 | 0.586721 | 0.001384 | 0.001402 | 0.001386 |
| mp_sliding_fold.test | RUN | 0.480854 | 3.907698 | 1.948625 | 0.001558 | 0.001457 | 0.001385 |
| mp_sliding_fold_q.test | RUN | 0.489039 | 3.880955 | 1.939680 | 0.001393 | 0.001734 | 0.001302 |
| mp_intersperse.test | RUN | 0.227923 | 1.412633 | 0.906802 | 0.001455 | 0.001460 | 0.001375 |
| mp_split.test | RUN | 0.338450 | 2.792440 | 1.252140 | 0.001342 | 0.001447 | 0.001390 |
| mp_join.test | RUN | 0.256855 | 2.331058 | 1.113872 | 0.001349 | 0.001522 | 0.001356 |
| integral.test | RUN | 0.197483 | 1.032973 | 0.666148 | 0.001215 | 0.001486 | 0.001423 |
| mp_value.test | RUN | 0.011602 | 0.033713 | 0.043538 | 0.000558 | 0.000606 | 0.001334 |
| mp_identity.test | RUN | 0.189102 | 0.946228 | 0.631887 | 0.001297 | 0.001474 | 0.001319 |
| mp_inherit.test | RUN | 0.176061 | 0.662030 | 0.586448 | 0.001231 | 0.001458 | 0.001364 |
| mp_if.test | RUN | 0.178758 | 0.764753 | 0.588592 | 0.001312 | 0.001285 | 0.001331 |
| mp_if_sf.test | RUN | 0.169195 | 0.563227 | 0.524006 | 0.001269 | 0.001521 | 0.001332 |
| mp_eval_if.test | RUN | 0.184677 | 0.821669 | 0.601987 | 0.001278 | 0.001370 | 0.001450 |
| mp_eval_if_sf.test | RUN | 0.171697 | 0.572010 | 0.546339 | 0.001224 | 0.001435 | 0.001359 |
| mp_valid.test | RUN | 0.174730 | 0.581001 | 0.568774 | 0.001436 | 0.001291 | 0.001330 |
| mp_defer.test | RUN | 0.188163 | 0.993705 | 0.661210 | 0.001318 | 0.001470 | 0.001387 |
| mp_quote.test | RUN | 0.194527 | 1.002929 | 0.686467 | 0.001352 | 0.001571 | 0.001383 |
| mp_invoke_q.test | RUN | 0.209856 | 1.309615 | 0.768565 | 0.001343 | 0.001459 | 0.001332 |
| mp_invoke_q_sf.test | RUN | 0.175719 | 0.569419 | 0.521917 | 0.001331 | 0.001542 | 0.001350 |
| mp_quote_trait.test | RUN | 0.191298 | 1.100898 | 0.664369 | 0.001293 | 0.001496 | 0.001046 |
| mp_cond.test | RUN | 0.180127 | 0.660391 | 0.574428 | 0.001319 | 0.001402 | 0.001347 |
| mp_cond_sf.test | RUN | 0.167281 | 0.564275 | 0.527033 | 0.001291 | 0.001432 | 0.001370 |
| mp_not_fn.test | RUN | 0.171738 | 0.559262 | 0.539737 | 0.001409 | 0.001504 | 0.001314 |
| mp_eval_if_not.test | RUN | 0.182461 | 0.816398 | 0.607233 | 0.001295 | 0.001493 | 0.001387 |
| mp_eval_or.test | RUN | 0.173619 | 0.431774 | 0.554849 | 0.001273 | 0.001466 | 0.001278 |
| mp_compose.test | RUN | 0.196070 | 1.346829 | 0.732792 | 0.001346 | 0.001435 | 0.001250 |
| mp_valid_and_true.test | RUN | 0.180439 | 0.695670 | 0.547834 | 0.001283 | 0.001490 | 0.001228 |
| mp_compose_sf.test | COMPILE | 0.040605 | 0.080067 | 0.125607 | — | — | — |
| integer_sequence.test | RUN | 0.217011 | 1.334572 | 0.843941 | 0.001178 | 0.001392 | 0.001331 |
| tuple_for_each.test | RUN | 0.173967 | 0.482480 | 0.600667 | 0.001312 | 0.001414 | 0.001330 |
| tuple_for_each_cx.test | COMPILE | 0.031869 | 0.069001 | 0.093180 | — | — | — |
| tuple_apply.test | RUN | 0.172891 | 0.483294 | 0.595386 | 0.001317 | 0.001463 | 0.001247 |
| tuple_apply_cx.test | COMPILE | 0.045223 | 0.095654 | 0.139267 | — | — | — |
| construct_from_tuple.test | RUN | 0.176256 | 0.519525 | 0.597861 | 0.001436 | 0.001493 | 0.001291 |
| construct_from_tuple_cx.test | COMPILE | 0.047911 | 0.096187 | 0.126986 | — | — | — |
| tuple_transform.test | RUN | 0.281431 | 1.046411 | 1.134053 | 0.001352 | 0.001399 | 0.001429 |
| tuple_transform_2.test | RUN | 0.239458 | 0.760215 | 1.017833 | 0.001279 | 0.001405 | 0.001251 |
| tuple_transform_cx.test | COMPILE | 0.040095 | 0.094563 | 0.137001 | — | — | — |
| mp_set_contains.test | RUN | 0.185725 | 0.697726 | 0.600051 | 0.001435 | 0.001412 | 0.001322 |
| mp_set_push_back.test | RUN | 0.239637 | 2.158893 | 1.048415 | 0.001295 | 0.001543 | 0.001317 |
| mp_set_push_front.test | RUN | 0.317154 | 2.592333 | 1.205873 | 0.001370 | 0.001509 | 0.001286 |
| mp_is_set.test | RUN | 0.182441 | 0.697114 | 0.602781 | 0.001329 | 0.001457 | 0.001408 |
| mp_set_union.test | RUN | 0.238810 | 1.806639 | 0.981481 | 0.001350 | 0.001474 | 0.001176 |
| mp_set_union_sf.test | RUN | 0.176029 | 0.548732 | 0.552674 | 0.001347 | 0.001378 | 0.001396 |
| mp_set_difference.test | RUN | 0.212284 | 1.433680 | 0.831847 | 0.001383 | 0.001259 | 0.001289 |
| mp_set_difference_sf.test | RUN | 0.174911 | 0.559430 | 0.553862 | 0.001340 | 0.001516 | 0.001335 |
| mp_set_intersection.test | RUN | 0.215110 | 1.425357 | 0.796942 | 0.001439 | 0.001392 | 0.001316 |
| mp_set_intersection_sf.test | RUN | 0.173444 | 0.554646 | 0.553522 | 0.001432 | 0.001373 | 0.001236 |
| mp_all.test | RUN | 0.183320 | 0.690661 | 0.602028 | 0.001397 | 0.001355 | 0.001280 |
| mp_all_2.test | RUN | 0.504424 | 1.495665 | 1.371950 | 0.001268 | 0.001374 | 0.001410 |
| mp_and.test | RUN | 0.176085 | 0.686308 | 0.594811 | 0.001464 | 0.001484 | 0.001280 |
| mp_any.test | RUN | 0.184351 | 0.693011 | 0.561581 | 0.001373 | 0.001534 | 0.001384 |
| mp_any_2.test | RUN | 0.512832 | 1.483455 | 1.373807 | 0.001468 | 0.001504 | 0.001368 |
| mp_or.test | RUN | 0.187994 | 0.690190 | 0.595746 | 0.001341 | 0.001378 | 0.001373 |
| mp_same.test | RUN | 0.337339 | 1.154234 | 0.936759 | 0.001447 | 0.001453 | 0.001361 |
| mp_plus.test | RUN | 0.191742 | 0.827212 | 0.692930 | 0.001403 | 0.001402 | 0.001356 |
| mp_less.test | RUN | 0.181689 | 0.697023 | 0.615187 | 0.001377 | 0.001295 | 0.001285 |
| mp_min.test | RUN | 0.179168 | 0.623955 | 0.585156 | 0.001436 | 0.001705 | 0.001474 |
| mp_max.test | RUN | 0.183041 | 0.705932 | 0.600367 | 0.001396 | 0.001546 | 0.001312 |
| mp_similar.test | RUN | 0.180360 | 0.690382 | 0.595261 | 0.001232 | 0.001459 | 0.001297 |
| mp_map_find.test | RUN | 0.214067 | 1.287992 | 0.803439 | 0.001282 | 0.001662 | 0.001440 |
| mp_map_find_2.test | RUN | 0.197203 | 0.484409 | 0.683652 | 0.001297 | 0.001426 | 0.001335 |
| mp_map_find_3.test | RUN | 0.196333 | 0.491402 | 0.679709 | 0.001263 | 0.001484 | 0.001360 |
| mp_map_find_4.test | RUN | 0.184319 | 0.458772 | 0.596995 | 0.001204 | 0.001432 | 0.001281 |
| mp_map_contains.test | RUN | 0.190922 | 0.720062 | 0.611525 | 0.001379 | 0.001585 | 0.001290 |
| mp_map_insert.test | RUN | 0.255415 | 2.443519 | 1.135490 | 0.001504 | 0.001356 | 0.001324 |
| mp_map_replace.test | RUN | 0.343588 | 2.793233 | 1.318799 | 0.001172 | 0.001497 | 0.001234 |
| mp_map_erase.test | RUN | 0.248779 | 2.069139 | 1.096699 | 0.001465 | 0.001586 | 0.001339 |
| mp_map_update.test | RUN | 0.219166 | 1.332089 | 0.839932 | 0.001296 | 0.001549 | 0.001237 |
| mp_map_update_q.test | RUN | 0.218411 | 1.319544 | 0.819853 | 0.001304 | 0.001401 | 0.001321 |
| mp_map_keys.test | RUN | 0.213977 | 1.177944 | 0.801843 | 0.001312 | 0.001457 | 0.001275 |
| mp_is_map.test | RUN | 0.188849 | 0.704470 | 0.638483 | 0.001279 | 0.001458 | 0.001320 |
| mp_bind.test | RUN | 0.241971 | 2.152777 | 0.972343 | 0.001453 | 0.001361 | 0.001374 |
| mp_bind_q.test | RUN | 0.217236 | 1.335651 | 0.775051 | 0.001380 | 0.001598 | 0.001326 |
| mp_bind_front.test | RUN | 0.211797 | 1.453606 | 0.763430 | 0.001382 | 0.001334 | 0.001419 |
| mp_bind_back.test | RUN | 0.213546 | 1.441591 | 0.764681 | 0.001413 | 0.001380 | 0.001308 |
| mp_lambda.test | RUN | 0.505348 | 4.300756 | 2.054176 | 0.001318 | 0.001160 | 0.001297 |
| mpl.test | RUN | 0.438836 | 1.130474 | 1.617212 | 0.001354 | 0.001374 | 0.001255 |
| mpl_list.test | RUN | 0.237233 | 0.844808 | 0.743727 | 0.001399 | 0.001424 | 0.001380 |
| mpl_tuple.test | RUN | 0.241059 | 0.849177 | 0.759636 | 0.001421 | 0.001490 | 0.001272 |
| version.test | RUN | 0.115047 | 0.308496 | 0.379354 | 0.001212 | 0.001129 | 0.001391 |
| mp11_version.test | RUN | 0.143352 | 0.354468 | 0.447667 | 0.001230 | 0.001518 | 0.001222 |
| list_version.test | RUN | 0.120642 | 0.318796 | 0.389839 | 0.001199 | 0.001386 | 0.001329 |
| algorithm_version.test | RUN | 0.131313 | 0.328634 | 0.427664 | 0.001224 | 0.001295 | 0.001246 |
| integral_version.test | RUN | 0.112330 | 0.295842 | 0.389016 | 0.001427 | 0.001425 | 0.001414 |
| utility_version.test | RUN | 0.121986 | 0.307923 | 0.393258 | 0.001254 | 0.001282 | 0.001274 |
| function_version.test | RUN | 0.125445 | 0.310145 | 0.377865 | 0.001270 | 0.001425 | 0.001413 |
| map_version.test | RUN | 0.136413 | 0.334308 | 0.421113 | 0.001285 | 0.001474 | 0.001336 |
| set_version.test | RUN | 0.123307 | 0.318575 | 0.395329 | 0.001189 | 0.001433 | 0.001186 |
| bind_version.test | RUN | 0.134096 | 0.329367 | 0.402089 | 0.001326 | 0.001474 | 0.001307 |
| integer_sequence_version.test | RUN | 0.114807 | 0.297146 | 0.367761 | 0.000867 | 0.001468 | 0.001404 |
| tuple_version.test | RUN | 0.129100 | 0.328751 | 0.340671 | 0.001008 | 0.001396 | 0.000941 |
| mpl_version.test | RUN | 0.102563 | 0.214442 | 0.276173 | 0.000952 | 0.001133 | 0.001004 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 1.018× | 1.026×, 1.009× | 0.994× |
| clang | 1.097× | 1.091×, 1.103× | 1.002× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1360 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43654890423).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| algorithm_version.test | 10 | 0.000914s | 0.000956s | 0.000909s | byte equality observed |
| bind_version.test | 10 | 0.000929s | 0.000942s | 0.000915s | byte equality observed |
| construct_from_tuple.test | 10 | 0.000935s | 0.000911s | 0.000921s | byte equality observed |
| function_version.test | 10 | 0.000924s | 0.000896s | 0.000919s | byte equality observed |
| integer_sequence.test | 10 | 0.000924s | 0.000896s | 0.000984s | byte equality observed |
| integer_sequence_version.test | 10 | 0.000919s | 0.000904s | 0.001000s | byte equality observed |
| integral.test | 10 | 0.000929s | 0.000912s | 0.001054s | byte equality observed |
| integral_version.test | 10 | 0.000916s | 0.000909s | 0.001017s | byte equality observed |
| list_version.test | 10 | 0.000915s | 0.000900s | 0.000988s | byte equality observed |
| map_version.test | 10 | 0.000911s | 0.000916s | 0.000985s | byte equality observed |
| mp11_version.test | 10 | 0.000920s | 0.000909s | 0.000997s | byte equality observed |
| mp_all.test | 10 | 0.000919s | 0.000922s | 0.000954s | byte equality observed |
| mp_all_2.test | 10 | 0.000913s | 0.000904s | 0.001020s | byte equality observed |
| mp_all_of.test | 10 | 0.000912s | 0.000904s | 0.000977s | byte equality observed |
| mp_all_of_q.test | 10 | 0.000932s | 0.000912s | 0.000961s | byte equality observed |
| mp_and.test | 10 | 0.000927s | 0.000922s | 0.000956s | byte equality observed |
| mp_any.test | 10 | 0.000939s | 0.000912s | 0.001023s | byte equality observed |
| mp_any_2.test | 10 | 0.000950s | 0.000911s | 0.000999s | byte equality observed |
| mp_any_of.test | 10 | 0.000990s | 0.000919s | 0.000979s | byte equality observed |
| mp_any_of_q.test | 10 | 0.000986s | 0.000913s | 0.000993s | byte equality observed |
| mp_append.test | 10 | 0.000986s | 0.000897s | 0.000982s | byte equality observed |
| mp_append_2.test | 10 | 0.001003s | 0.000945s | 0.001016s | byte equality observed |
| mp_append_3.test | 10 | 0.000431s | 0.000436s | 0.000968s | byte equality observed |
| mp_append_sf.test | 10 | 0.001002s | 0.000989s | 0.000980s | byte equality observed |
| mp_apply_q.test | 10 | 0.001057s | 0.001001s | 0.000997s | byte equality observed |
| mp_apply_q_sf.test | 10 | 0.001031s | 0.000961s | 0.000983s | byte equality observed |
| mp_assign.test | 10 | 0.001017s | 0.000957s | 0.000957s | byte equality observed |
| mp_assign_2.test | 10 | 0.000438s | 0.000450s | 0.000981s | byte equality observed |
| mp_at.test | 10 | 0.000984s | 0.000954s | 0.001008s | byte equality observed |
| mp_at_2.test | 10 | 0.000435s | 0.000429s | 0.001002s | byte equality observed |
| mp_at_sf.test | 10 | 0.001011s | 0.000986s | 0.000985s | byte equality observed |
| mp_back.test | 10 | 0.001009s | 0.001001s | 0.001052s | byte equality observed |
| mp_back_2.test | 10 | 0.000447s | 0.000443s | 0.000973s | byte equality observed |
| mp_bind.test | 10 | 0.000987s | 0.001025s | 0.000999s | byte equality observed |
| mp_bind_back.test | 10 | 0.000964s | 0.001020s | 0.000998s | byte equality observed |
| mp_bind_front.test | 10 | 0.000965s | 0.001047s | 0.001007s | byte equality observed |
| mp_bind_q.test | 10 | 0.000987s | 0.001057s | 0.001010s | byte equality observed |
| mp_clear.test | 10 | 0.001000s | 0.001016s | 0.000995s | byte equality observed |
| mp_clear_2.test | 10 | 0.000429s | 0.000450s | 0.000951s | byte equality observed |
| mp_compose.test | 10 | 0.000970s | 0.001058s | 0.000981s | byte equality observed |
| mp_cond.test | 10 | 0.000973s | 0.001028s | 0.000970s | byte equality observed |
| mp_cond_sf.test | 10 | 0.000993s | 0.001033s | 0.000954s | byte equality observed |
| mp_contains.test | 10 | 0.001005s | 0.001018s | 0.000961s | byte equality observed |
| mp_copy_if.test | 10 | 0.000978s | 0.001017s | 0.000960s | byte equality observed |
| mp_copy_if_q.test | 10 | 0.000963s | 0.000988s | 0.000986s | byte equality observed |
| mp_count.test | 10 | 0.000963s | 0.000988s | 0.001010s | byte equality observed |
| mp_count_if.test | 10 | 0.000972s | 0.001030s | 0.000981s | byte equality observed |
| mp_count_if_q.test | 10 | 0.000967s | 0.001006s | 0.001000s | byte equality observed |
| mp_defer.test | 10 | 0.000976s | 0.001041s | 0.000956s | byte equality observed |
| mp_drop.test | 10 | 0.000979s | 0.001019s | 0.000949s | byte equality observed |
| mp_drop_2.test | 10 | 0.000424s | 0.000454s | 0.000988s | byte equality observed |
| mp_empty.test | 10 | 0.000971s | 0.001003s | 0.000974s | byte equality observed |
| mp_empty_2.test | 10 | 0.000415s | 0.000438s | 0.000982s | byte equality observed |
| mp_erase.test | 10 | 0.000990s | 0.001034s | 0.000986s | byte equality observed |
| mp_erase_2.test | 10 | 0.000432s | 0.000444s | 0.000957s | byte equality observed |
| mp_eval_if.test | 10 | 0.000971s | 0.001006s | 0.000975s | byte equality observed |
| mp_eval_if_not.test | 10 | 0.000975s | 0.001008s | 0.001020s | byte equality observed |
| mp_eval_if_sf.test | 10 | 0.000981s | 0.001015s | 0.001010s | byte equality observed |
| mp_eval_or.test | 10 | 0.000958s | 0.000995s | 0.000976s | byte equality observed |
| mp_fill.test | 10 | 0.000946s | 0.000967s | 0.000974s | byte equality observed |
| mp_fill_2.test | 10 | 0.000437s | 0.000443s | 0.000951s | byte equality observed |
| mp_filter.test | 10 | 0.000969s | 0.001019s | 0.000968s | byte equality observed |
| mp_find.test | 10 | 0.000927s | 0.001015s | 0.000989s | byte equality observed |
| mp_find_if.test | 10 | 0.000959s | 0.001036s | 0.000979s | byte equality observed |
| mp_find_if_q.test | 10 | 0.000943s | 0.001006s | 0.000996s | byte equality observed |
| mp_flatten.test | 10 | 0.000968s | 0.001008s | 0.000965s | byte equality observed |
| mp_fold.test | 10 | 0.001015s | 0.001009s | 0.001001s | byte equality observed |
| mp_fold_q.test | 10 | 0.000982s | 0.000992s | 0.000958s | byte equality observed |
| mp_fold_q_sf.test | 10 | 0.000946s | 0.000998s | 0.000970s | byte equality observed |
| mp_for_each.test | 10 | 0.000997s | 0.001011s | 0.000956s | byte equality observed |
| mp_from_sequence.test | 10 | 0.000984s | 0.001025s | 0.001031s | byte equality observed |
| mp_from_sequence_2.test | 10 | 0.000972s | 0.001002s | 0.000965s | byte equality observed |
| mp_from_sequence_3.test | 10 | 0.000985s | 0.000994s | 0.001009s | byte equality observed |
| mp_front.test | 10 | 0.000962s | 0.001031s | 0.000990s | byte equality observed |
| mp_front_2.test | 10 | 0.000439s | 0.000415s | 0.000978s | byte equality observed |
| mp_identity.test | 10 | 0.000973s | 0.001059s | 0.000966s | byte equality observed |
| mp_if.test | 10 | 0.000972s | 0.001032s | 0.000997s | byte equality observed |
| mp_if_sf.test | 10 | 0.000979s | 0.001043s | 0.000982s | byte equality observed |
| mp_inherit.test | 10 | 0.000975s | 0.001024s | 0.000971s | byte equality observed |
| mp_insert.test | 10 | 0.001002s | 0.001043s | 0.000987s | byte equality observed |
| mp_insert_2.test | 10 | 0.000443s | 0.000460s | 0.000990s | byte equality observed |
| mp_intersperse.test | 10 | 0.000988s | 0.001040s | 0.000995s | byte equality observed |
| mp_invoke_q.test | 10 | 0.000989s | 0.001011s | 0.001007s | byte equality observed |
| mp_invoke_q_sf.test | 10 | 0.000982s | 0.000999s | 0.000984s | byte equality observed |
| mp_iota.test | 10 | 0.000980s | 0.001004s | 0.000972s | byte equality observed |
| mp_iota_2.test | 10 | 0.000982s | 0.001026s | 0.000986s | byte equality observed |
| mp_is_list.test | 10 | 0.000975s | 0.001010s | 0.000990s | byte equality observed |
| mp_is_map.test | 10 | 0.000958s | 0.000966s | 0.000980s | byte equality observed |
| mp_is_set.test | 10 | 0.000996s | 0.001014s | 0.000993s | byte equality observed |
| mp_is_value_list.test | 10 | 0.000959s | 0.000976s | 0.000977s | byte equality observed |
| mp_iterate.test | 10 | 0.000959s | 0.001025s | 0.000997s | byte equality observed |
| mp_join.test | 10 | 0.000972s | 0.001035s | 0.000981s | byte equality observed |
| mp_lambda.test | 10 | 0.000986s | 0.000996s | 0.001000s | byte equality observed |
| mp_less.test | 10 | 0.000951s | 0.000974s | 0.000972s | byte equality observed |
| mp_list_c.test | 10 | 0.000989s | 0.001017s | 0.000951s | byte equality observed |
| mp_list_v.test | 10 | 0.000429s | 0.000455s | 0.000954s | byte equality observed |
| mp_map_contains.test | 10 | 0.000981s | 0.000996s | 0.000991s | byte equality observed |
| mp_map_erase.test | 10 | 0.000955s | 0.001014s | 0.000961s | byte equality observed |
| mp_map_find.test | 10 | 0.000966s | 0.001030s | 0.000976s | byte equality observed |
| mp_map_find_2.test | 10 | 0.000978s | 0.001006s | 0.000996s | byte equality observed |
| mp_map_find_3.test | 10 | 0.000955s | 0.001006s | 0.000961s | byte equality observed |
| mp_map_find_4.test | 10 | 0.000962s | 0.000969s | 0.000999s | byte equality observed |
| mp_map_insert.test | 10 | 0.000980s | 0.000958s | 0.000985s | byte equality observed |
| mp_map_keys.test | 10 | 0.000991s | 0.001015s | 0.000971s | byte equality observed |
| mp_map_replace.test | 10 | 0.001018s | 0.000980s | 0.000979s | byte equality observed |
| mp_map_update.test | 10 | 0.000950s | 0.001017s | 0.000967s | byte equality observed |
| mp_map_update_q.test | 10 | 0.000980s | 0.001023s | 0.000958s | byte equality observed |
| mp_max.test | 10 | 0.000978s | 0.001032s | 0.000973s | byte equality observed |
| mp_max_element.test | 10 | 0.000974s | 0.001019s | 0.000947s | byte equality observed |
| mp_max_element_2.test | 10 | 0.000425s | 0.000445s | 0.000954s | byte equality observed |
| mp_max_element_q.test | 10 | 0.001006s | 0.001019s | 0.000954s | byte equality observed |
| mp_max_element_q_2.test | 10 | 0.000430s | 0.000442s | 0.000963s | byte equality observed |
| mp_min.test | 10 | 0.000969s | 0.000987s | 0.000974s | byte equality observed |
| mp_min_element.test | 10 | 0.000995s | 0.000978s | 0.000983s | byte equality observed |
| mp_min_element_2.test | 10 | 0.000421s | 0.000436s | 0.000995s | byte equality observed |
| mp_min_element_q.test | 10 | 0.000977s | 0.001009s | 0.000977s | byte equality observed |
| mp_min_element_q_2.test | 10 | 0.000421s | 0.000437s | 0.000946s | byte equality observed |
| mp_none_of.test | 10 | 0.000968s | 0.001016s | 0.000996s | byte equality observed |
| mp_none_of_q.test | 10 | 0.000979s | 0.000970s | 0.000968s | byte equality observed |
| mp_not_fn.test | 10 | 0.000969s | 0.000976s | 0.000971s | byte equality observed |
| mp_nth_element.test | 10 | 0.000970s | 0.000963s | 0.001022s | byte equality observed |
| mp_nth_element_q.test | 10 | 0.000986s | 0.001023s | 0.000988s | byte equality observed |
| mp_or.test | 10 | 0.000986s | 0.000977s | 0.000994s | byte equality observed |
| mp_pairwise_fold.test | 10 | 0.000966s | 0.000971s | 0.001018s | byte equality observed |
| mp_pairwise_fold_q.test | 10 | 0.000974s | 0.000992s | 0.000987s | byte equality observed |
| mp_partial_sum.test | 10 | 0.000996s | 0.000983s | 0.000971s | byte equality observed |
| mp_partition.test | 10 | 0.000963s | 0.001046s | 0.000987s | byte equality observed |
| mp_partition_q.test | 10 | 0.000980s | 0.000968s | 0.000999s | byte equality observed |
| mp_plus.test | 10 | 0.000967s | 0.000997s | 0.000985s | byte equality observed |
| mp_pop_back.test | 10 | 0.000992s | 0.000994s | 0.000971s | byte equality observed |
| mp_pop_back_2.test | 10 | 0.000428s | 0.000427s | 0.000964s | byte equality observed |
| mp_pop_front.test | 10 | 0.000983s | 0.000999s | 0.000989s | byte equality observed |
| mp_pop_front_2.test | 10 | 0.000442s | 0.000433s | 0.000924s | byte equality observed |
| mp_power_set.test | 10 | 0.001003s | 0.000970s | 0.000944s | byte equality observed |
| mp_product.test | 10 | 0.000972s | 0.001004s | 0.001008s | byte equality observed |
| mp_push_back.test | 10 | 0.000964s | 0.001006s | 0.000990s | byte equality observed |
| mp_push_back_2.test | 10 | 0.000422s | 0.000440s | 0.000958s | byte equality observed |
| mp_push_front.test | 10 | 0.000980s | 0.000989s | 0.000946s | byte equality observed |
| mp_push_front_2.test | 10 | 0.000426s | 0.000424s | 0.000956s | byte equality observed |
| mp_quote.test | 10 | 0.000967s | 0.000992s | 0.000953s | byte equality observed |
| mp_quote_trait.test | 10 | 0.000960s | 0.000991s | 0.000983s | byte equality observed |
| mp_remove.test | 10 | 0.000986s | 0.001018s | 0.000974s | byte equality observed |
| mp_remove_if.test | 10 | 0.000992s | 0.000987s | 0.000975s | byte equality observed |
| mp_remove_if_q.test | 10 | 0.000996s | 0.001032s | 0.000969s | byte equality observed |
| mp_rename.test | 10 | 0.000971s | 0.001035s | 0.000959s | byte equality observed |
| mp_rename_2.test | 10 | 0.000434s | 0.000438s | 0.000945s | byte equality observed |
| mp_rename_v.test | 10 | 0.000438s | 0.000443s | 0.000934s | byte equality observed |
| mp_repeat.test | 10 | 0.000989s | 0.001010s | 0.000971s | byte equality observed |
| mp_repeat_2.test | 10 | 0.000425s | 0.000440s | 0.000942s | byte equality observed |
| mp_repeat_3.test | 10 | 0.000958s | 0.000999s | 0.000992s | byte equality observed |
| mp_replace.test | 10 | 0.000945s | 0.000992s | 0.000998s | byte equality observed |
| mp_replace_at.test | 10 | 0.000967s | 0.000979s | 0.000991s | byte equality observed |
| mp_replace_at_c.test | 10 | 0.000982s | 0.000972s | 0.000965s | byte equality observed |
| mp_replace_front.test | 10 | 0.000992s | 0.001030s | 0.000980s | byte equality observed |
| mp_replace_front_2.test | 10 | 0.000438s | 0.000433s | 0.000937s | byte equality observed |
| mp_replace_if.test | 10 | 0.000981s | 0.000993s | 0.000962s | byte equality observed |
| mp_replace_if_q.test | 10 | 0.000995s | 0.001002s | 0.000972s | byte equality observed |
| mp_replace_second.test | 10 | 0.000984s | 0.000988s | 0.000997s | byte equality observed |
| mp_replace_second_2.test | 10 | 0.000439s | 0.000439s | 0.000971s | byte equality observed |
| mp_replace_third.test | 10 | 0.000957s | 0.001033s | 0.000981s | byte equality observed |
| mp_replace_third_2.test | 10 | 0.000430s | 0.000450s | 0.000976s | byte equality observed |
| mp_reverse.test | 10 | 0.001027s | 0.001043s | 0.001001s | byte equality observed |
| mp_reverse_fold.test | 10 | 0.000979s | 0.001021s | 0.000965s | byte equality observed |
| mp_reverse_fold_q.test | 10 | 0.000985s | 0.001007s | 0.001027s | byte equality observed |
| mp_rotate_left.test | 10 | 0.000994s | 0.000993s | 0.001010s | byte equality observed |
| mp_rotate_right.test | 10 | 0.000981s | 0.001041s | 0.000988s | byte equality observed |
| mp_same.test | 10 | 0.000993s | 0.001008s | 0.000964s | byte equality observed |
| mp_second.test | 10 | 0.000977s | 0.001010s | 0.000944s | byte equality observed |
| mp_second_2.test | 10 | 0.000423s | 0.000434s | 0.000952s | byte equality observed |
| mp_set_contains.test | 10 | 0.000981s | 0.000994s | 0.000964s | byte equality observed |
| mp_set_difference.test | 10 | 0.000968s | 0.000967s | 0.000999s | byte equality observed |
| mp_set_difference_sf.test | 10 | 0.000985s | 0.000984s | 0.000942s | byte equality observed |
| mp_set_intersection.test | 10 | 0.000970s | 0.000977s | 0.000937s | byte equality observed |
| mp_set_intersection_sf.test | 10 | 0.000981s | 0.001004s | 0.000981s | byte equality observed |
| mp_set_push_back.test | 10 | 0.000985s | 0.000985s | 0.000962s | byte equality observed |
| mp_set_push_front.test | 10 | 0.001012s | 0.001007s | 0.000971s | byte equality observed |
| mp_set_union.test | 10 | 0.000991s | 0.001019s | 0.000975s | byte equality observed |
| mp_set_union_sf.test | 10 | 0.000964s | 0.000972s | 0.001005s | byte equality observed |
| mp_similar.test | 10 | 0.000958s | 0.000970s | 0.000956s | byte equality observed |
| mp_size.test | 10 | 0.000975s | 0.001001s | 0.000990s | byte equality observed |
| mp_size_2.test | 10 | 0.000425s | 0.000420s | 0.000994s | byte equality observed |
| mp_slice.test | 10 | 0.000984s | 0.001039s | 0.000980s | byte equality observed |
| mp_slice_2.test | 10 | 0.000425s | 0.000441s | 0.000967s | byte equality observed |
| mp_sliding_fold.test | 10 | 0.000997s | 0.001016s | 0.000952s | byte equality observed |
| mp_sliding_fold_q.test | 10 | 0.001007s | 0.001020s | 0.000953s | byte equality observed |
| mp_sort.test | 10 | 0.000987s | 0.000982s | 0.000971s | byte equality observed |
| mp_sort_q.test | 10 | 0.000965s | 0.001031s | 0.000952s | byte equality observed |
| mp_split.test | 10 | 0.000960s | 0.001010s | 0.000946s | byte equality observed |
| mp_starts_with.test | 10 | 0.000953s | 0.001004s | 0.000980s | byte equality observed |
| mp_starts_with_sf.test | 10 | 0.000967s | 0.001004s | 0.000960s | byte equality observed |
| mp_take.test | 10 | 0.000992s | 0.000998s | 0.000950s | byte equality observed |
| mp_take_2.test | 10 | 0.000428s | 0.000431s | 0.000967s | byte equality observed |
| mp_third.test | 10 | 0.000956s | 0.001012s | 0.000988s | byte equality observed |
| mp_third_2.test | 10 | 0.000437s | 0.000427s | 0.000974s | byte equality observed |
| mp_transform.test | 10 | 0.000977s | 0.000997s | 0.000981s | byte equality observed |
| mp_transform_2.test | 10 | 0.000957s | 0.000969s | 0.000966s | byte equality observed |
| mp_transform_front.test | 10 | 0.000976s | 0.000974s | 0.000977s | byte equality observed |
| mp_transform_front_2.test | 10 | 0.000428s | 0.000426s | 0.000962s | byte equality observed |
| mp_transform_if.test | 10 | 0.000998s | 0.000984s | 0.000969s | byte equality observed |
| mp_transform_if_q.test | 10 | 0.000983s | 0.000997s | 0.000946s | byte equality observed |
| mp_transform_q.test | 10 | 0.001000s | 0.001016s | 0.000947s | byte equality observed |
| mp_transform_q_2.test | 10 | 0.000997s | 0.000966s | 0.000944s | byte equality observed |
| mp_transform_second.test | 10 | 0.000990s | 0.001007s | 0.000968s | byte equality observed |
| mp_transform_second_2.test | 10 | 0.000431s | 0.000450s | 0.000916s | byte equality observed |
| mp_transform_sf.test | 10 | 0.000988s | 0.001015s | 0.001001s | byte equality observed |
| mp_transform_third.test | 10 | 0.000973s | 0.000990s | 0.000974s | byte equality observed |
| mp_transform_third_2.test | 10 | 0.000434s | 0.000430s | 0.000927s | byte equality observed |
| mp_unique.test | 10 | 0.000967s | 0.000991s | 0.000979s | byte equality observed |
| mp_unique_if.test | 10 | 0.001018s | 0.001035s | 0.000953s | byte equality observed |
| mp_unique_if_q.test | 10 | 0.000980s | 0.000955s | 0.000987s | byte equality observed |
| mp_valid.test | 10 | 0.000957s | 0.000977s | 0.000976s | byte equality observed |
| mp_valid_and_true.test | 10 | 0.000963s | 0.000988s | 0.000964s | byte equality observed |
| mp_value.test | 10 | 0.000429s | 0.000422s | 0.000955s | byte equality observed |
| mp_with_index.test | 10 | 0.001346s | 0.001321s | 0.001244s | byte equality observed |
| mp_with_index_cx.test | 10 | 0.000434s | 0.000408s | 0.000964s | byte equality observed |
| mpl.test | 10 | 0.000983s | 0.000975s | 0.000952s | byte equality observed |
| mpl_list.test | 10 | 0.000982s | 0.001023s | 0.000944s | byte equality observed |
| mpl_tuple.test | 10 | 0.000969s | 0.001021s | 0.000948s | byte equality observed |
| mpl_version.test | 10 | 0.000988s | 0.001022s | 0.000992s | byte equality observed |
| set_version.test | 10 | 0.000974s | 0.000979s | 0.000970s | byte equality observed |
| tuple_apply.test | 10 | 0.000971s | 0.000985s | 0.000952s | byte equality observed |
| tuple_for_each.test | 10 | 0.000961s | 0.000965s | 0.000974s | byte equality observed |
| tuple_transform.test | 10 | 0.000962s | 0.000978s | 0.000988s | byte equality observed |
| tuple_transform_2.test | 10 | 0.000983s | 0.000994s | 0.000985s | byte equality observed |
| tuple_version.test | 10 | 0.000956s | 0.000959s | 0.000971s | byte equality observed |
| utility_version.test | 10 | 0.000980s | 0.000990s | 0.000980s | byte equality observed |
| version.test | 10 | 0.000985s | 0.001016s | 0.001029s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43654890423).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
