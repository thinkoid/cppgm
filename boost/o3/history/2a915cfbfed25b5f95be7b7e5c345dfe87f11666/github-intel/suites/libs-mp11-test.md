# libs/mp11/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| mp11.test | COMPILE | 0.029332 | 0.057762 | 0.090531 | — | — | — |
| complex_h.test | COMPILE | 0.120945 | 0.252828 | 0.341360 | — | — | — |
| mp_size.test | RUN | 0.141984 | 0.852182 | 0.463500 | 0.001128 | 0.001394 | 0.001005 |
| mp_size_2.test | RUN | 0.011893 | 0.030316 | 0.040995 | 0.000448 | 0.000516 | 0.001218 |
| mp_empty.test | RUN | 0.136608 | 0.523876 | 0.445903 | 0.001070 | 0.001414 | 0.001153 |
| mp_empty_2.test | RUN | 0.012067 | 0.031113 | 0.042646 | 0.000452 | 0.000514 | 0.001065 |
| mp_assign.test | RUN | 0.158883 | 1.132447 | 0.589022 | 0.000893 | 0.001476 | 0.001157 |
| mp_assign_2.test | RUN | 0.012164 | 0.030293 | 0.040278 | 0.000521 | 0.000633 | 0.000928 |
| mp_clear.test | RUN | 0.135004 | 0.483855 | 0.434091 | 0.001118 | 0.001265 | 0.001001 |
| mp_clear_2.test | RUN | 0.012481 | 0.030378 | 0.043151 | 0.000486 | 0.000474 | 0.001258 |
| mp_front.test | RUN | 0.148302 | 0.769361 | 0.503454 | 0.000854 | 0.001341 | 0.000992 |
| mp_front_2.test | RUN | 0.011705 | 0.030343 | 0.042905 | 0.000463 | 0.000529 | 0.001022 |
| mp_pop_front.test | RUN | 0.142974 | 0.814482 | 0.520173 | 0.001167 | 0.001301 | 0.001074 |
| mp_pop_front_2.test | RUN | 0.011671 | 0.030751 | 0.040226 | 0.000498 | 0.000584 | 0.001011 |
| mp_second.test | RUN | 0.146730 | 0.509622 | 0.487589 | 0.001202 | 0.001271 | 0.001053 |
| mp_second_2.test | RUN | 0.010978 | 0.030425 | 0.041090 | 0.000467 | 0.000497 | 0.001055 |
| mp_third.test | RUN | 0.137352 | 0.476435 | 0.432764 | 0.001273 | 0.001326 | 0.001141 |
| mp_third_2.test | RUN | 0.010303 | 0.030796 | 0.041373 | 0.000456 | 0.000566 | 0.001186 |
| mp_push_front.test | RUN | 0.189472 | 1.731286 | 0.847069 | 0.001089 | 0.001364 | 0.001119 |
| mp_push_front_2.test | RUN | 0.011895 | 0.029453 | 0.039290 | 0.000462 | 0.000544 | 0.001045 |
| mp_push_back.test | RUN | 0.189202 | 1.727993 | 0.818312 | 0.001260 | 0.001322 | 0.000856 |
| mp_push_back_2.test | RUN | 0.010967 | 0.030932 | 0.040822 | 0.000487 | 0.000484 | 0.001006 |
| mp_rename.test | RUN | 0.177409 | 1.604378 | 0.721255 | 0.001137 | 0.001214 | 0.001083 |
| mp_rename_2.test | RUN | 0.012345 | 0.031424 | 0.040025 | 0.000543 | 0.000598 | 0.001205 |
| mp_append.test | RUN | 0.178037 | 1.817777 | 0.771707 | 0.001143 | 0.001273 | 0.001124 |
| mp_append_2.test | RUN | 0.422626 | 4.052186 | 1.087135 | 0.001226 | 0.001248 | 0.001138 |
| mp_append_3.test | RUN | 0.012076 | 0.030086 | 0.040710 | 0.000474 | 0.000445 | 0.001016 |
| mp_append_sf.test | RUN | 0.132482 | 0.432488 | 0.424797 | 0.001175 | 0.001364 | 0.001109 |
| mp_replace_front.test | RUN | 0.162913 | 1.286873 | 0.615934 | 0.001220 | 0.001473 | 0.001086 |
| mp_replace_front_2.test | RUN | 0.012216 | 0.030560 | 0.040875 | 0.000506 | 0.000582 | 0.001067 |
| mp_replace_second.test | RUN | 0.156777 | 0.824100 | 0.597861 | 0.001176 | 0.001199 | 0.001110 |
| mp_replace_second_2.test | RUN | 0.012244 | 0.029865 | 0.039733 | 0.000483 | 0.000604 | 0.001024 |
| mp_replace_third.test | RUN | 0.150417 | 0.666611 | 0.525228 | 0.001260 | 0.001179 | 0.001130 |
| mp_replace_third_2.test | RUN | 0.012387 | 0.031051 | 0.040128 | 0.000466 | 0.000511 | 0.001134 |
| mp_apply_q.test | RUN | 0.172915 | 1.587203 | 0.705259 | 0.001045 | 0.001412 | 0.001002 |
| mp_apply_q_sf.test | RUN | 0.134653 | 0.439105 | 0.423216 | 0.001168 | 0.001446 | 0.001035 |
| mp_is_list.test | RUN | 0.136458 | 0.533164 | 0.456989 | 0.001120 | 0.001284 | 0.001024 |
| mp_list_c.test | RUN | 0.145931 | 0.639345 | 0.502469 | 0.001147 | 0.001310 | 0.001072 |
| mp_transform_front.test | RUN | 0.157066 | 1.283460 | 0.615385 | 0.001173 | 0.001427 | 0.001105 |
| mp_transform_front_2.test | RUN | 0.013196 | 0.030229 | 0.040785 | 0.000345 | 0.000497 | 0.001074 |
| mp_transform_second.test | RUN | 0.155814 | 1.093971 | 0.549957 | 0.001144 | 0.001247 | 0.001167 |
| mp_transform_second_2.test | RUN | 0.012603 | 0.030326 | 0.041553 | 0.000493 | 0.000579 | 0.001059 |
| mp_transform_third.test | RUN | 0.139453 | 0.824731 | 0.481666 | 0.001216 | 0.001108 | 0.001091 |
| mp_transform_third_2.test | RUN | 0.012650 | 0.029848 | 0.040335 | 0.000450 | 0.000517 | 0.001014 |
| mp_list_v.test | RUN | 0.011055 | 0.030136 | 0.039568 | 0.000446 | 0.000506 | 0.001026 |
| mp_rename_v.test | RUN | 0.010941 | 0.030034 | 0.042749 | 0.000426 | 0.000527 | 0.001075 |
| mp_is_value_list.test | RUN | 0.130531 | 0.321942 | 0.418313 | 0.001156 | 0.001455 | 0.001125 |
| mp_transform.test | RUN | 0.335770 | 2.752508 | 1.311849 | 0.001263 | 0.001167 | 0.001062 |
| mp_transform_2.test | RUN | 0.125455 | 0.297167 | 0.385051 | 0.001067 | 0.001314 | 0.001042 |
| mp_transform_q.test | RUN | 0.317566 | 2.597875 | 1.271209 | 0.001187 | 0.001350 | 0.001071 |
| mp_transform_q_2.test | RUN | 0.344763 | 0.816729 | 1.631104 | 0.001127 | 0.001242 | 0.001098 |
| mp_transform_sf.test | RUN | 0.144093 | 0.446167 | 0.452106 | 0.001141 | 0.001241 | 0.001121 |
| mp_transform_if.test | RUN | 0.180066 | 1.279727 | 0.692906 | 0.001328 | 0.001131 | 0.001034 |
| mp_transform_if_q.test | RUN | 0.184138 | 1.299489 | 0.686941 | 0.001272 | 0.001181 | 0.000931 |
| mp_filter.test | RUN | 0.156696 | 0.756868 | 0.510635 | 0.001144 | 0.001452 | 0.001117 |
| mp_fill.test | RUN | 0.145481 | 0.560024 | 0.501752 | 0.001281 | 0.001404 | 0.001164 |
| mp_fill_2.test | RUN | 0.022275 | 0.046177 | 0.066108 | 0.000542 | 0.000566 | 0.000972 |
| mp_count.test | RUN | 0.289264 | 1.387632 | 0.760255 | 0.001328 | 0.001228 | 0.001200 |
| mp_count_if.test | RUN | 0.289828 | 1.411904 | 0.855829 | 0.001059 | 0.001196 | 0.001094 |
| mp_count_if_q.test | RUN | 0.152613 | 0.908052 | 0.474323 | 0.001222 | 0.001135 | 0.001234 |
| mp_contains.test | RUN | 0.140683 | 0.550834 | 0.473426 | 0.001158 | 0.001371 | 0.001113 |
| mp_starts_with.test | RUN | 0.144111 | 0.542063 | 0.476901 | 0.001262 | 0.001244 | 0.001124 |
| mp_starts_with_sf.test | RUN | 0.144417 | 0.458234 | 0.440894 | 0.001094 | 0.001464 | 0.000968 |
| mp_repeat.test | RUN | 0.214884 | 2.302629 | 0.890377 | 0.001175 | 0.001209 | 0.001122 |
| mp_repeat_2.test | RUN | 0.021896 | 0.048311 | 0.070392 | 0.000480 | 0.000579 | 0.001021 |
| mp_repeat_3.test | RUN | 0.180979 | 0.287579 | 0.433155 | 0.001190 | 0.001422 | 0.001120 |
| mp_product.test | RUN | 0.167957 | 1.374237 | 0.641673 | 0.001233 | 0.001456 | 0.001044 |
| mp_drop.test | RUN | 0.182246 | 1.735211 | 0.744541 | 0.001143 | 0.001266 | 0.001016 |
| mp_drop_2.test | RUN | 0.021295 | 0.048586 | 0.067884 | 0.000460 | 0.000563 | 0.000974 |
| mp_iota.test | RUN | 0.176143 | 1.465120 | 0.650848 | 0.001194 | 0.001438 | 0.001175 |
| mp_iota_2.test | RUN | 0.188528 | 1.753664 | 0.745257 | 0.001157 | 0.001388 | 0.001016 |
| mp_at.test | RUN | 0.148081 | 0.755537 | 0.524528 | 0.001048 | 0.001393 | 0.001129 |
| mp_at_2.test | RUN | 0.021757 | 0.047549 | 0.069331 | 0.000502 | 0.000616 | 0.001121 |
| mp_at_sf.test | RUN | 0.141775 | 0.459086 | 0.440022 | 0.001289 | 0.001540 | 0.000799 |
| mp_take.test | RUN | 0.247417 | 2.278550 | 0.894128 | 0.001345 | 0.001339 | 0.001125 |
| mp_take_2.test | RUN | 0.021758 | 0.047407 | 0.069970 | 0.000496 | 0.000536 | 0.001014 |
| mp_slice.test | RUN | 0.288101 | 2.302763 | 1.155520 | 0.001289 | 0.001215 | 0.001058 |
| mp_slice_2.test | RUN | 0.021458 | 0.047457 | 0.065853 | 0.000503 | 0.000519 | 0.001031 |
| mp_replace.test | RUN | 0.178836 | 1.166702 | 0.726870 | 0.001446 | 0.001206 | 0.001113 |
| mp_replace_if.test | RUN | 0.178800 | 1.011638 | 0.671831 | 0.001121 | 0.001330 | 0.001155 |
| mp_replace_if_q.test | RUN | 0.170983 | 1.034831 | 0.666348 | 0.001338 | 0.001502 | 0.001136 |
| mp_copy_if.test | RUN | 0.169623 | 1.446678 | 0.630289 | 0.001128 | 0.001509 | 0.001026 |
| mp_copy_if_q.test | RUN | 0.178601 | 1.426429 | 0.629414 | 0.001156 | 0.001254 | 0.001055 |
| mp_remove.test | RUN | 0.171306 | 0.964294 | 0.653923 | 0.001216 | 0.001450 | 0.001093 |
| mp_remove_if.test | RUN | 0.179721 | 1.535339 | 0.670400 | 0.001145 | 0.001441 | 0.001046 |
| mp_remove_if_q.test | RUN | 0.175986 | 1.516130 | 0.683735 | 0.001147 | 0.001295 | 0.001104 |
| mp_partition.test | RUN | 0.184206 | 1.451656 | 0.722447 | 0.001263 | 0.001234 | 0.001072 |
| mp_partition_q.test | RUN | 0.176989 | 1.442665 | 0.740731 | 0.001318 | 0.001424 | 0.001180 |
| mp_sort.test | RUN | 0.166661 | 1.028571 | 0.627034 | 0.001101 | 0.001491 | 0.001074 |
| mp_sort_q.test | RUN | 0.166085 | 1.026654 | 0.634758 | 0.001121 | 0.001355 | 0.001079 |
| mp_find.test | RUN | 0.168489 | 1.096570 | 0.543347 | 0.001338 | 0.001324 | 0.001006 |
| mp_find_if.test | RUN | 0.159535 | 1.004425 | 0.524047 | 0.001098 | 0.001371 | 0.001097 |
| mp_find_if_q.test | RUN | 0.174287 | 1.127074 | 0.629672 | 0.001222 | 0.001389 | 0.001097 |
| mp_reverse.test | RUN | 0.371324 | 3.011549 | 1.281575 | 0.001233 | 0.001393 | 0.001147 |
| mp_fold.test | RUN | 0.627526 | 2.374337 | 3.185641 | 0.001262 | 0.001382 | 0.001098 |
| mp_fold_q.test | RUN | 0.158640 | 1.017225 | 0.600828 | 0.001253 | 0.001247 | 0.001139 |
| mp_fold_q_sf.test | RUN | 0.142640 | 0.459614 | 0.483778 | 0.001109 | 0.001338 | 0.001207 |
| mp_reverse_fold.test | RUN | 0.296991 | 2.274406 | 0.909433 | 0.001120 | 0.001445 | 0.001045 |
| mp_reverse_fold_q.test | RUN | 0.169209 | 1.233731 | 0.659584 | 0.001321 | 0.001299 | 0.001070 |
| mp_unique.test | RUN | 0.164284 | 1.109221 | 0.635887 | 0.001188 | 0.001331 | 0.001096 |
| mp_unique_if.test | RUN | 0.296415 | 2.353715 | 1.006659 | 0.001256 | 0.001347 | 0.001130 |
| mp_unique_if_q.test | RUN | 0.264302 | 2.299982 | 0.818759 | 0.001182 | 0.001406 | 0.001149 |
| mp_all_of.test | RUN | 0.392026 | 1.272044 | 1.060439 | 0.001203 | 0.001433 | 0.001051 |
| mp_all_of_q.test | RUN | 0.144041 | 0.543804 | 0.469846 | 0.001456 | 0.001423 | 0.001132 |
| mp_any_of.test | RUN | 0.394628 | 1.328192 | 1.024084 | 0.001249 | 0.001338 | 0.001124 |
| mp_any_of_q.test | RUN | 0.144357 | 0.548587 | 0.473330 | 0.001289 | 0.001361 | 0.001210 |
| mp_none_of.test | RUN | 0.396483 | 1.316657 | 1.021397 | 0.001104 | 0.001363 | 0.001108 |
| mp_none_of_q.test | RUN | 0.141333 | 0.539637 | 0.473932 | 0.001179 | 0.001382 | 0.001142 |
| mp_replace_at.test | RUN | 0.174551 | 1.102994 | 0.716605 | 0.001097 | 0.000999 | 0.001119 |
| mp_replace_at_c.test | RUN | 0.181042 | 1.119754 | 0.709710 | 0.001346 | 0.001321 | 0.001187 |
| mp_for_each.test | RUN | 0.164117 | 0.724423 | 0.717211 | 0.001189 | 0.001405 | 0.001011 |
| mp_insert.test | RUN | 0.275281 | 2.320056 | 1.049574 | 0.001240 | 0.001286 | 0.001135 |
| mp_insert_2.test | RUN | 0.022973 | 0.046210 | 0.069305 | 0.000477 | 0.000586 | 0.001163 |
| mp_erase.test | RUN | 0.306575 | 2.439016 | 1.194012 | 0.001165 | 0.001300 | 0.001198 |
| mp_erase_2.test | RUN | 0.022170 | 0.046401 | 0.070201 | 0.000505 | 0.000583 | 0.001029 |
| mp_with_index.test | RUN | 0.395747 | 4.884699 | 2.656333 | 0.001514 | 0.001622 | 0.001384 |
| mp_with_index_cx.test | RUN | 0.002684 | 0.014868 | 0.022428 | 0.000479 | 0.000545 | 0.001147 |
| mp_from_sequence.test | RUN | 0.174711 | 1.284145 | 0.674453 | 0.001297 | 0.001308 | 0.001144 |
| mp_from_sequence_2.test | RUN | 0.183519 | 1.512161 | 0.758933 | 0.001206 | 0.001378 | 0.001084 |
| mp_from_sequence_3.test | RUN | 0.151613 | 0.660291 | 0.529573 | 0.000840 | 0.001368 | 0.001086 |
| mp_min_element.test | RUN | 0.144122 | 0.588848 | 0.492553 | 0.001171 | 0.001279 | 0.001051 |
| mp_min_element_2.test | RUN | 0.021229 | 0.048107 | 0.068211 | 0.000475 | 0.000587 | 0.001063 |
| mp_min_element_q.test | RUN | 0.152502 | 0.600783 | 0.481698 | 0.001111 | 0.001283 | 0.001126 |
| mp_min_element_q_2.test | RUN | 0.022680 | 0.046227 | 0.067380 | 0.000475 | 0.000517 | 0.001052 |
| mp_max_element.test | RUN | 0.148696 | 0.593888 | 0.468473 | 0.001127 | 0.001418 | 0.001209 |
| mp_max_element_2.test | RUN | 0.021204 | 0.046241 | 0.067676 | 0.000409 | 0.000415 | 0.001043 |
| mp_max_element_q.test | RUN | 0.147003 | 0.589933 | 0.482546 | 0.001345 | 0.001319 | 0.001117 |
| mp_max_element_q_2.test | RUN | 0.022084 | 0.045886 | 0.066138 | 0.000478 | 0.000545 | 0.001017 |
| mp_nth_element.test | RUN | 0.164876 | 0.832526 | 0.596092 | 0.001264 | 0.001254 | 0.001050 |
| mp_nth_element_q.test | RUN | 0.160549 | 0.834015 | 0.592265 | 0.001171 | 0.001276 | 0.001038 |
| mp_back.test | RUN | 0.163734 | 0.692698 | 0.555675 | 0.001191 | 0.001053 | 0.001078 |
| mp_back_2.test | RUN | 0.022168 | 0.046227 | 0.069919 | 0.000445 | 0.000550 | 0.001039 |
| mp_pop_back.test | RUN | 0.473780 | 4.748693 | 1.241044 | 0.001172 | 0.001428 | 0.001079 |
| mp_pop_back_2.test | RUN | 0.022776 | 0.046722 | 0.069969 | 0.000506 | 0.000561 | 0.001057 |
| mp_flatten.test | RUN | 0.190510 | 1.635995 | 0.804026 | 0.001216 | 0.001421 | 0.001105 |
| mp_rotate_left.test | RUN | 0.191049 | 1.717596 | 0.798896 | 0.001177 | 0.001203 | 0.000992 |
| mp_rotate_right.test | RUN | 0.194695 | 1.724122 | 0.810224 | 0.001330 | 0.001192 | 0.001086 |
| mp_power_set.test | RUN | 0.189338 | 1.693795 | 0.814451 | 0.001122 | 0.001336 | 0.001284 |
| mp_partial_sum.test | RUN | 0.258971 | 2.257618 | 0.916039 | 0.001333 | 0.001396 | 0.001226 |
| mp_iterate.test | RUN | 0.171475 | 0.656702 | 0.626699 | 0.001229 | 0.001443 | 0.001156 |
| mp_pairwise_fold.test | RUN | 0.188003 | 1.541755 | 0.825730 | 0.001129 | 0.001313 | 0.001115 |
| mp_pairwise_fold_q.test | RUN | 0.145896 | 0.445928 | 0.462592 | 0.001178 | 0.001464 | 0.001270 |
| mp_sliding_fold.test | RUN | 0.375897 | 3.041238 | 1.535963 | 0.001184 | 0.001379 | 0.001100 |
| mp_sliding_fold_q.test | RUN | 0.374365 | 3.024515 | 1.551884 | 0.001360 | 0.001313 | 0.001075 |
| mp_intersperse.test | RUN | 0.173357 | 1.113961 | 0.730521 | 0.001127 | 0.001446 | 0.001115 |
| mp_split.test | RUN | 0.262184 | 2.133162 | 0.993144 | 0.001115 | 0.001303 | 0.001176 |
| mp_join.test | RUN | 0.198224 | 1.804969 | 0.873354 | 0.001107 | 0.001468 | 0.001210 |
| integral.test | RUN | 0.153211 | 0.792998 | 0.526876 | 0.001142 | 0.001499 | 0.001105 |
| mp_value.test | RUN | 0.009450 | 0.026031 | 0.033788 | 0.000527 | 0.000540 | 0.001034 |
| mp_identity.test | RUN | 0.145670 | 0.724459 | 0.486101 | 0.001266 | 0.001320 | 0.001024 |
| mp_inherit.test | RUN | 0.143560 | 0.520080 | 0.466006 | 0.001037 | 0.001388 | 0.001082 |
| mp_if.test | RUN | 0.144015 | 0.582086 | 0.467596 | 0.001186 | 0.001157 | 0.001084 |
| mp_if_sf.test | RUN | 0.138242 | 0.435224 | 0.423183 | 0.001129 | 0.001318 | 0.001057 |
| mp_eval_if.test | RUN | 0.144681 | 0.631579 | 0.487399 | 0.001206 | 0.001386 | 0.001160 |
| mp_eval_if_sf.test | RUN | 0.138422 | 0.449763 | 0.438298 | 0.001137 | 0.001340 | 0.001034 |
| mp_valid.test | RUN | 0.138970 | 0.447218 | 0.439243 | 0.001256 | 0.001368 | 0.001105 |
| mp_defer.test | RUN | 0.151066 | 0.764349 | 0.522018 | 0.001078 | 0.001516 | 0.001130 |
| mp_quote.test | RUN | 0.149460 | 0.777941 | 0.550581 | 0.001144 | 0.001380 | 0.001195 |
| mp_invoke_q.test | RUN | 0.166500 | 1.016268 | 0.609984 | 0.001212 | 0.001554 | 0.001123 |
| mp_invoke_q_sf.test | RUN | 0.130906 | 0.443165 | 0.418681 | 0.001173 | 0.001503 | 0.001081 |
| mp_quote_trait.test | RUN | 0.150014 | 0.856162 | 0.517057 | 0.001246 | 0.001265 | 0.001201 |
| mp_cond.test | RUN | 0.139491 | 0.517611 | 0.457730 | 0.001141 | 0.001279 | 0.001060 |
| mp_cond_sf.test | RUN | 0.135388 | 0.442695 | 0.433318 | 0.001184 | 0.001481 | 0.001156 |
| mp_not_fn.test | RUN | 0.131427 | 0.443703 | 0.402615 | 0.001096 | 0.001250 | 0.001049 |
| mp_eval_if_not.test | RUN | 0.140299 | 0.627222 | 0.469869 | 0.001118 | 0.001342 | 0.001008 |
| mp_eval_or.test | RUN | 0.132773 | 0.336535 | 0.440150 | 0.001141 | 0.001334 | 0.001095 |
| mp_compose.test | RUN | 0.152922 | 1.053043 | 0.584542 | 0.001163 | 0.001183 | 0.001079 |
| mp_valid_and_true.test | RUN | 0.134559 | 0.533712 | 0.452350 | 0.001277 | 0.001249 | 0.001081 |
| mp_compose_sf.test | COMPILE | 0.030101 | 0.060336 | 0.098248 | — | — | — |
| integer_sequence.test | RUN | 0.168254 | 1.042422 | 0.661652 | 0.001178 | 0.001166 | 0.001043 |
| tuple_for_each.test | RUN | 0.140971 | 0.375254 | 0.448408 | 0.000981 | 0.001198 | 0.001071 |
| tuple_for_each_cx.test | COMPILE | 0.024697 | 0.052093 | 0.077267 | — | — | — |
| tuple_apply.test | RUN | 0.139292 | 0.371351 | 0.462239 | 0.001181 | 0.001322 | 0.001111 |
| tuple_apply_cx.test | COMPILE | 0.038577 | 0.076084 | 0.108998 | — | — | — |
| construct_from_tuple.test | RUN | 0.139641 | 0.400227 | 0.458930 | 0.001240 | 0.001306 | 0.001050 |
| construct_from_tuple_cx.test | COMPILE | 0.037350 | 0.076515 | 0.101068 | — | — | — |
| tuple_transform.test | RUN | 0.228051 | 0.831278 | 0.883464 | 0.001335 | 0.001271 | 0.001101 |
| tuple_transform_2.test | RUN | 0.192489 | 0.605689 | 0.813216 | 0.001128 | 0.001353 | 0.001127 |
| tuple_transform_cx.test | COMPILE | 0.033410 | 0.072493 | 0.105325 | — | — | — |
| mp_set_contains.test | RUN | 0.141070 | 0.529503 | 0.464378 | 0.001097 | 0.001294 | 0.001182 |
| mp_set_push_back.test | RUN | 0.192402 | 1.696072 | 0.810661 | 0.001355 | 0.001304 | 0.001076 |
| mp_set_push_front.test | RUN | 0.243036 | 2.055237 | 0.939628 | 0.001199 | 0.001375 | 0.001119 |
| mp_is_set.test | RUN | 0.140641 | 0.542249 | 0.472911 | 0.001182 | 0.001306 | 0.001196 |
| mp_set_union.test | RUN | 0.182796 | 1.436521 | 0.767436 | 0.001117 | 0.001494 | 0.001078 |
| mp_set_union_sf.test | RUN | 0.139648 | 0.432047 | 0.433628 | 0.001167 | 0.001399 | 0.001201 |
| mp_set_difference.test | RUN | 0.165491 | 1.125084 | 0.650273 | 0.001176 | 0.001387 | 0.001173 |
| mp_set_difference_sf.test | RUN | 0.130822 | 0.427614 | 0.420623 | 0.001088 | 0.001481 | 0.001026 |
| mp_set_intersection.test | RUN | 0.170809 | 1.114971 | 0.639400 | 0.001095 | 0.001224 | 0.001143 |
| mp_set_intersection_sf.test | RUN | 0.136094 | 0.432935 | 0.434643 | 0.001464 | 0.001363 | 0.001050 |
| mp_all.test | RUN | 0.147874 | 0.540590 | 0.457102 | 0.001200 | 0.001322 | 0.001133 |
| mp_all_2.test | RUN | 0.392431 | 1.162144 | 1.053024 | 0.001229 | 0.001426 | 0.001111 |
| mp_and.test | RUN | 0.138143 | 0.533653 | 0.455987 | 0.001262 | 0.001300 | 0.001119 |
| mp_any.test | RUN | 0.150479 | 0.539870 | 0.482578 | 0.001266 | 0.001316 | 0.001253 |
| mp_any_2.test | RUN | 0.400600 | 1.165989 | 1.039822 | 0.001190 | 0.001420 | 0.001145 |
| mp_or.test | RUN | 0.144134 | 0.537735 | 0.454180 | 0.001280 | 0.001385 | 0.001143 |
| mp_same.test | RUN | 0.268967 | 0.894215 | 0.695784 | 0.001112 | 0.001250 | 0.001102 |
| mp_plus.test | RUN | 0.150912 | 0.637366 | 0.531199 | 0.001141 | 0.001058 | 0.001038 |
| mp_less.test | RUN | 0.142723 | 0.514058 | 0.463681 | 0.001153 | 0.001308 | 0.001070 |
| mp_min.test | RUN | 0.135667 | 0.493004 | 0.454375 | 0.001266 | 0.001433 | 0.001208 |
| mp_max.test | RUN | 0.139809 | 0.541564 | 0.465948 | 0.001315 | 0.001174 | 0.001018 |
| mp_similar.test | RUN | 0.140424 | 0.526614 | 0.453679 | 0.001035 | 0.001289 | 0.001047 |
| mp_map_find.test | RUN | 0.164450 | 0.997243 | 0.606666 | 0.001305 | 0.001474 | 0.001143 |
| mp_map_find_2.test | RUN | 0.152289 | 0.378631 | 0.523847 | 0.001022 | 0.001280 | 0.001200 |
| mp_map_find_3.test | RUN | 0.151332 | 0.374649 | 0.519361 | 0.001110 | 0.001287 | 0.000959 |
| mp_map_find_4.test | RUN | 0.145898 | 0.348617 | 0.460641 | 0.001145 | 0.001318 | 0.001077 |
| mp_map_contains.test | RUN | 0.149792 | 0.552383 | 0.472707 | 0.001171 | 0.001310 | 0.001087 |
| mp_map_insert.test | RUN | 0.197601 | 1.897552 | 0.872987 | 0.001439 | 0.001508 | 0.000941 |
| mp_map_replace.test | RUN | 0.264798 | 2.177337 | 1.014241 | 0.001121 | 0.001549 | 0.001058 |
| mp_map_erase.test | RUN | 0.193093 | 1.594163 | 0.832201 | 0.001093 | 0.001293 | 0.001246 |
| mp_map_update.test | RUN | 0.165208 | 1.028707 | 0.635479 | 0.001050 | 0.001448 | 0.000918 |
| mp_map_update_q.test | RUN | 0.165852 | 1.031060 | 0.642871 | 0.001557 | 0.001301 | 0.001041 |
| mp_map_keys.test | RUN | 0.165346 | 0.904388 | 0.626336 | 0.001194 | 0.001305 | 0.001070 |
| mp_is_map.test | RUN | 0.149858 | 0.551728 | 0.496393 | 0.001215 | 0.001190 | 0.001126 |
| mp_bind.test | RUN | 0.186052 | 1.702974 | 0.752474 | 0.001136 | 0.001285 | 0.001052 |
| mp_bind_q.test | RUN | 0.161336 | 1.038573 | 0.613842 | 0.001329 | 0.001298 | 0.001263 |
| mp_bind_front.test | RUN | 0.159615 | 1.132812 | 0.576468 | 0.001170 | 0.001251 | 0.001100 |
| mp_bind_back.test | RUN | 0.161123 | 1.123588 | 0.590880 | 0.001204 | 0.001419 | 0.001031 |
| mp_lambda.test | RUN | 0.382130 | 3.411157 | 1.593050 | 0.001473 | 0.000939 | 0.001135 |
| mpl.test | RUN | 0.330652 | 0.863294 | 1.260710 | 0.001169 | 0.001272 | 0.001054 |
| mpl_list.test | RUN | 0.179472 | 0.658314 | 0.567906 | 0.001198 | 0.001381 | 0.001119 |
| mpl_tuple.test | RUN | 0.179931 | 0.659712 | 0.567629 | 0.001231 | 0.001375 | 0.001091 |
| version.test | RUN | 0.090763 | 0.233486 | 0.295138 | 0.001316 | 0.001241 | 0.001076 |
| mp11_version.test | RUN | 0.106130 | 0.263197 | 0.330832 | 0.001092 | 0.001254 | 0.000995 |
| list_version.test | RUN | 0.090847 | 0.241562 | 0.294298 | 0.001158 | 0.001209 | 0.001296 |
| algorithm_version.test | RUN | 0.103027 | 0.256850 | 0.314307 | 0.001252 | 0.001381 | 0.000798 |
| integral_version.test | RUN | 0.093136 | 0.234054 | 0.280937 | 0.001213 | 0.001378 | 0.001050 |
| utility_version.test | RUN | 0.090001 | 0.236141 | 0.289203 | 0.001310 | 0.001309 | 0.001023 |
| function_version.test | RUN | 0.091591 | 0.238784 | 0.301599 | 0.001213 | 0.001202 | 0.001234 |
| map_version.test | RUN | 0.106086 | 0.252773 | 0.309665 | 0.001243 | 0.001286 | 0.001182 |
| set_version.test | RUN | 0.092755 | 0.246626 | 0.295751 | 0.001316 | 0.001403 | 0.001020 |
| bind_version.test | RUN | 0.100730 | 0.255512 | 0.311825 | 0.001205 | 0.001362 | 0.001083 |
| integer_sequence_version.test | RUN | 0.087159 | 0.234476 | 0.292138 | 0.001132 | 0.001220 | 0.000868 |
| tuple_version.test | RUN | 0.103553 | 0.259308 | 0.206799 | 0.000929 | 0.001328 | 0.000849 |
| mpl_version.test | RUN | 0.072568 | 0.191088 | 0.321291 | 0.000956 | 0.000997 | 0.000807 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 1.000× | 1.001×, 0.998× | 1.007× |
| clang | 1.099× | 1.098×, 1.100× | 1.003× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1364 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/43778388618).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| algorithm_version.test | 10 | 0.000713s | 0.000704s | 0.000749s | byte equality observed |
| bind_version.test | 10 | 0.000716s | 0.000710s | 0.000740s | byte equality observed |
| construct_from_tuple.test | 10 | 0.000715s | 0.000720s | 0.000726s | byte equality observed |
| function_version.test | 10 | 0.000722s | 0.000720s | 0.000741s | byte equality observed |
| integer_sequence.test | 10 | 0.000728s | 0.000736s | 0.000748s | byte equality observed |
| integer_sequence_version.test | 10 | 0.000731s | 0.000732s | 0.000732s | byte equality observed |
| integral.test | 10 | 0.000716s | 0.000739s | 0.000739s | byte equality observed |
| integral_version.test | 10 | 0.000737s | 0.000718s | 0.000737s | byte equality observed |
| list_version.test | 10 | 0.000717s | 0.000715s | 0.000734s | byte equality observed |
| map_version.test | 10 | 0.000732s | 0.000742s | 0.000735s | byte equality observed |
| mp11_version.test | 10 | 0.000728s | 0.000743s | 0.000756s | byte equality observed |
| mp_all.test | 10 | 0.000738s | 0.000722s | 0.000815s | byte equality observed |
| mp_all_2.test | 10 | 0.000730s | 0.000712s | 0.000830s | byte equality observed |
| mp_all_of.test | 10 | 0.000724s | 0.000728s | 0.000810s | byte equality observed |
| mp_all_of_q.test | 10 | 0.000728s | 0.000710s | 0.000823s | byte equality observed |
| mp_and.test | 10 | 0.000722s | 0.000725s | 0.000825s | byte equality observed |
| mp_any.test | 10 | 0.000731s | 0.000713s | 0.000814s | byte equality observed |
| mp_any_2.test | 10 | 0.000741s | 0.000714s | 0.000798s | byte equality observed |
| mp_any_of.test | 10 | 0.000726s | 0.000722s | 0.000791s | byte equality observed |
| mp_any_of_q.test | 10 | 0.000735s | 0.000738s | 0.000811s | byte equality observed |
| mp_append.test | 10 | 0.000741s | 0.000740s | 0.000807s | byte equality observed |
| mp_append_2.test | 10 | 0.000752s | 0.000726s | 0.000815s | byte equality observed |
| mp_append_3.test | 10 | 0.000341s | 0.000312s | 0.000805s | byte equality observed |
| mp_append_sf.test | 10 | 0.000746s | 0.000725s | 0.000784s | byte equality observed |
| mp_apply_q.test | 10 | 0.000794s | 0.000710s | 0.000794s | byte equality observed |
| mp_apply_q_sf.test | 10 | 0.000800s | 0.000715s | 0.000768s | byte equality observed |
| mp_assign.test | 10 | 0.000801s | 0.000710s | 0.000786s | byte equality observed |
| mp_assign_2.test | 10 | 0.000359s | 0.000310s | 0.000771s | byte equality observed |
| mp_at.test | 10 | 0.000800s | 0.000728s | 0.000795s | byte equality observed |
| mp_at_2.test | 10 | 0.000365s | 0.000316s | 0.000770s | byte equality observed |
| mp_at_sf.test | 10 | 0.000791s | 0.000732s | 0.000778s | byte equality observed |
| mp_back.test | 10 | 0.000802s | 0.000727s | 0.000793s | byte equality observed |
| mp_back_2.test | 10 | 0.000363s | 0.000317s | 0.000791s | byte equality observed |
| mp_bind.test | 10 | 0.000798s | 0.000746s | 0.000800s | byte equality observed |
| mp_bind_back.test | 10 | 0.000814s | 0.000760s | 0.000814s | byte equality observed |
| mp_bind_front.test | 10 | 0.000814s | 0.000766s | 0.000793s | byte equality observed |
| mp_bind_q.test | 10 | 0.000789s | 0.000777s | 0.000821s | byte equality observed |
| mp_clear.test | 10 | 0.000795s | 0.000809s | 0.000821s | byte equality observed |
| mp_clear_2.test | 10 | 0.000359s | 0.000366s | 0.000789s | byte equality observed |
| mp_compose.test | 10 | 0.000796s | 0.000813s | 0.000809s | byte equality observed |
| mp_cond.test | 10 | 0.000784s | 0.000806s | 0.000786s | byte equality observed |
| mp_cond_sf.test | 10 | 0.000798s | 0.000813s | 0.000785s | byte equality observed |
| mp_contains.test | 10 | 0.000797s | 0.000848s | 0.000804s | byte equality observed |
| mp_copy_if.test | 10 | 0.000807s | 0.000830s | 0.000821s | byte equality observed |
| mp_copy_if_q.test | 10 | 0.000806s | 0.000847s | 0.000807s | byte equality observed |
| mp_count.test | 10 | 0.000799s | 0.000834s | 0.000809s | byte equality observed |
| mp_count_if.test | 10 | 0.000814s | 0.000810s | 0.000814s | byte equality observed |
| mp_count_if_q.test | 10 | 0.000806s | 0.000839s | 0.000814s | byte equality observed |
| mp_defer.test | 10 | 0.000787s | 0.000842s | 0.000798s | byte equality observed |
| mp_drop.test | 10 | 0.000813s | 0.000814s | 0.000801s | byte equality observed |
| mp_drop_2.test | 10 | 0.000361s | 0.000365s | 0.000758s | byte equality observed |
| mp_empty.test | 10 | 0.000806s | 0.000804s | 0.000801s | byte equality observed |
| mp_empty_2.test | 10 | 0.000360s | 0.000366s | 0.000782s | byte equality observed |
| mp_erase.test | 10 | 0.000793s | 0.000819s | 0.000792s | byte equality observed |
| mp_erase_2.test | 10 | 0.000364s | 0.000362s | 0.000772s | byte equality observed |
| mp_eval_if.test | 10 | 0.000809s | 0.000809s | 0.000782s | byte equality observed |
| mp_eval_if_not.test | 10 | 0.000824s | 0.000801s | 0.000833s | byte equality observed |
| mp_eval_if_sf.test | 10 | 0.000805s | 0.000791s | 0.000802s | byte equality observed |
| mp_eval_or.test | 10 | 0.000787s | 0.000809s | 0.000824s | byte equality observed |
| mp_fill.test | 10 | 0.000782s | 0.000814s | 0.000809s | byte equality observed |
| mp_fill_2.test | 10 | 0.000359s | 0.000359s | 0.000790s | byte equality observed |
| mp_filter.test | 10 | 0.000787s | 0.000799s | 0.000791s | byte equality observed |
| mp_find.test | 10 | 0.000800s | 0.000814s | 0.000798s | byte equality observed |
| mp_find_if.test | 10 | 0.000797s | 0.000814s | 0.000790s | byte equality observed |
| mp_find_if_q.test | 10 | 0.000801s | 0.000804s | 0.000807s | byte equality observed |
| mp_flatten.test | 10 | 0.000816s | 0.000818s | 0.000798s | byte equality observed |
| mp_fold.test | 10 | 0.000827s | 0.000791s | 0.000795s | byte equality observed |
| mp_fold_q.test | 10 | 0.000802s | 0.000796s | 0.000786s | byte equality observed |
| mp_fold_q_sf.test | 10 | 0.000790s | 0.000796s | 0.000794s | byte equality observed |
| mp_for_each.test | 10 | 0.000791s | 0.000795s | 0.000793s | byte equality observed |
| mp_from_sequence.test | 10 | 0.000793s | 0.000797s | 0.000805s | byte equality observed |
| mp_from_sequence_2.test | 10 | 0.000784s | 0.000795s | 0.000806s | byte equality observed |
| mp_from_sequence_3.test | 10 | 0.000798s | 0.000822s | 0.000792s | byte equality observed |
| mp_front.test | 10 | 0.000792s | 0.000809s | 0.000803s | byte equality observed |
| mp_front_2.test | 10 | 0.000362s | 0.000363s | 0.000792s | byte equality observed |
| mp_identity.test | 10 | 0.000790s | 0.000821s | 0.000791s | byte equality observed |
| mp_if.test | 10 | 0.000801s | 0.000825s | 0.000798s | byte equality observed |
| mp_if_sf.test | 10 | 0.000813s | 0.000846s | 0.000811s | byte equality observed |
| mp_inherit.test | 10 | 0.000818s | 0.000806s | 0.000832s | byte equality observed |
| mp_insert.test | 10 | 0.000827s | 0.000802s | 0.000815s | byte equality observed |
| mp_insert_2.test | 10 | 0.000363s | 0.000366s | 0.000797s | byte equality observed |
| mp_intersperse.test | 10 | 0.000807s | 0.000803s | 0.000803s | byte equality observed |
| mp_invoke_q.test | 10 | 0.000786s | 0.000802s | 0.000813s | byte equality observed |
| mp_invoke_q_sf.test | 10 | 0.000811s | 0.000802s | 0.000821s | byte equality observed |
| mp_iota.test | 10 | 0.000792s | 0.000831s | 0.000836s | byte equality observed |
| mp_iota_2.test | 10 | 0.000799s | 0.000788s | 0.000807s | byte equality observed |
| mp_is_list.test | 10 | 0.000799s | 0.000791s | 0.000787s | byte equality observed |
| mp_is_map.test | 10 | 0.000799s | 0.000832s | 0.000815s | byte equality observed |
| mp_is_set.test | 10 | 0.000818s | 0.000817s | 0.000824s | byte equality observed |
| mp_is_value_list.test | 10 | 0.000834s | 0.000785s | 0.000830s | byte equality observed |
| mp_iterate.test | 10 | 0.000822s | 0.000814s | 0.000792s | byte equality observed |
| mp_join.test | 10 | 0.000804s | 0.000816s | 0.000792s | byte equality observed |
| mp_lambda.test | 10 | 0.000822s | 0.000792s | 0.000789s | byte equality observed |
| mp_less.test | 10 | 0.000795s | 0.000802s | 0.000810s | byte equality observed |
| mp_list_c.test | 10 | 0.000796s | 0.000793s | 0.000801s | byte equality observed |
| mp_list_v.test | 10 | 0.000359s | 0.000360s | 0.000813s | byte equality observed |
| mp_map_contains.test | 10 | 0.000798s | 0.000793s | 0.000789s | byte equality observed |
| mp_map_erase.test | 10 | 0.000805s | 0.000812s | 0.000795s | byte equality observed |
| mp_map_find.test | 10 | 0.000799s | 0.000825s | 0.000796s | byte equality observed |
| mp_map_find_2.test | 10 | 0.000814s | 0.000807s | 0.000776s | byte equality observed |
| mp_map_find_3.test | 10 | 0.000804s | 0.000821s | 0.000774s | byte equality observed |
| mp_map_find_4.test | 10 | 0.000785s | 0.000825s | 0.000802s | byte equality observed |
| mp_map_insert.test | 10 | 0.000791s | 0.000830s | 0.000788s | byte equality observed |
| mp_map_keys.test | 10 | 0.000796s | 0.000813s | 0.000822s | byte equality observed |
| mp_map_replace.test | 10 | 0.000821s | 0.000797s | 0.000789s | byte equality observed |
| mp_map_update.test | 10 | 0.000817s | 0.000813s | 0.000801s | byte equality observed |
| mp_map_update_q.test | 10 | 0.000815s | 0.000804s | 0.000820s | byte equality observed |
| mp_max.test | 10 | 0.000804s | 0.000788s | 0.000812s | byte equality observed |
| mp_max_element.test | 10 | 0.000796s | 0.000791s | 0.000809s | byte equality observed |
| mp_max_element_2.test | 10 | 0.000365s | 0.000359s | 0.000808s | byte equality observed |
| mp_max_element_q.test | 10 | 0.000791s | 0.000797s | 0.000796s | byte equality observed |
| mp_max_element_q_2.test | 10 | 0.000358s | 0.000349s | 0.000810s | byte equality observed |
| mp_min.test | 10 | 0.000795s | 0.000831s | 0.000801s | byte equality observed |
| mp_min_element.test | 10 | 0.000799s | 0.000803s | 0.000806s | byte equality observed |
| mp_min_element_2.test | 10 | 0.000364s | 0.000367s | 0.000756s | byte equality observed |
| mp_min_element_q.test | 10 | 0.000791s | 0.000810s | 0.000795s | byte equality observed |
| mp_min_element_q_2.test | 10 | 0.000357s | 0.000363s | 0.000811s | byte equality observed |
| mp_none_of.test | 10 | 0.000794s | 0.000820s | 0.000837s | byte equality observed |
| mp_none_of_q.test | 10 | 0.000813s | 0.000793s | 0.000832s | byte equality observed |
| mp_not_fn.test | 10 | 0.000818s | 0.000815s | 0.000819s | byte equality observed |
| mp_nth_element.test | 10 | 0.000819s | 0.000818s | 0.000779s | byte equality observed |
| mp_nth_element_q.test | 10 | 0.000806s | 0.000824s | 0.000794s | byte equality observed |
| mp_or.test | 10 | 0.000801s | 0.000824s | 0.000802s | byte equality observed |
| mp_pairwise_fold.test | 10 | 0.000808s | 0.000827s | 0.000793s | byte equality observed |
| mp_pairwise_fold_q.test | 10 | 0.000776s | 0.000818s | 0.000799s | byte equality observed |
| mp_partial_sum.test | 10 | 0.000845s | 0.000803s | 0.000798s | byte equality observed |
| mp_partition.test | 10 | 0.000824s | 0.000799s | 0.000824s | byte equality observed |
| mp_partition_q.test | 10 | 0.000813s | 0.000784s | 0.000798s | byte equality observed |
| mp_plus.test | 10 | 0.000817s | 0.000815s | 0.000788s | byte equality observed |
| mp_pop_back.test | 10 | 0.000824s | 0.000799s | 0.000799s | byte equality observed |
| mp_pop_back_2.test | 10 | 0.000361s | 0.000367s | 0.000797s | byte equality observed |
| mp_pop_front.test | 10 | 0.000819s | 0.000810s | 0.000798s | byte equality observed |
| mp_pop_front_2.test | 10 | 0.000357s | 0.000357s | 0.000759s | byte equality observed |
| mp_power_set.test | 10 | 0.000804s | 0.000802s | 0.000793s | byte equality observed |
| mp_product.test | 10 | 0.000793s | 0.000801s | 0.000793s | byte equality observed |
| mp_push_back.test | 10 | 0.000795s | 0.000794s | 0.000801s | byte equality observed |
| mp_push_back_2.test | 10 | 0.000358s | 0.000360s | 0.000772s | byte equality observed |
| mp_push_front.test | 10 | 0.000797s | 0.000811s | 0.000802s | byte equality observed |
| mp_push_front_2.test | 10 | 0.000362s | 0.000365s | 0.000791s | byte equality observed |
| mp_quote.test | 10 | 0.000811s | 0.000826s | 0.000808s | byte equality observed |
| mp_quote_trait.test | 10 | 0.000786s | 0.000831s | 0.000817s | byte equality observed |
| mp_remove.test | 10 | 0.000825s | 0.000805s | 0.000801s | byte equality observed |
| mp_remove_if.test | 10 | 0.000821s | 0.000822s | 0.000798s | byte equality observed |
| mp_remove_if_q.test | 10 | 0.000797s | 0.000815s | 0.000803s | byte equality observed |
| mp_rename.test | 10 | 0.000814s | 0.000833s | 0.000809s | byte equality observed |
| mp_rename_2.test | 10 | 0.000365s | 0.000357s | 0.000782s | byte equality observed |
| mp_rename_v.test | 10 | 0.000356s | 0.000353s | 0.000788s | byte equality observed |
| mp_repeat.test | 10 | 0.000809s | 0.000809s | 0.000799s | byte equality observed |
| mp_repeat_2.test | 10 | 0.000361s | 0.000356s | 0.000812s | byte equality observed |
| mp_repeat_3.test | 10 | 0.000783s | 0.000800s | 0.000809s | byte equality observed |
| mp_replace.test | 10 | 0.000791s | 0.000825s | 0.000816s | byte equality observed |
| mp_replace_at.test | 10 | 0.000774s | 0.000820s | 0.000805s | byte equality observed |
| mp_replace_at_c.test | 10 | 0.000795s | 0.000805s | 0.000793s | byte equality observed |
| mp_replace_front.test | 10 | 0.000791s | 0.000795s | 0.000782s | byte equality observed |
| mp_replace_front_2.test | 10 | 0.000362s | 0.000360s | 0.000780s | byte equality observed |
| mp_replace_if.test | 10 | 0.000824s | 0.000826s | 0.000797s | byte equality observed |
| mp_replace_if_q.test | 10 | 0.000774s | 0.000800s | 0.000803s | byte equality observed |
| mp_replace_second.test | 10 | 0.000781s | 0.000800s | 0.000791s | byte equality observed |
| mp_replace_second_2.test | 10 | 0.000363s | 0.000365s | 0.000801s | byte equality observed |
| mp_replace_third.test | 10 | 0.000807s | 0.000806s | 0.000819s | byte equality observed |
| mp_replace_third_2.test | 10 | 0.000357s | 0.000364s | 0.000799s | byte equality observed |
| mp_reverse.test | 10 | 0.000834s | 0.000849s | 0.000791s | byte equality observed |
| mp_reverse_fold.test | 10 | 0.000848s | 0.000850s | 0.000810s | byte equality observed |
| mp_reverse_fold_q.test | 10 | 0.000805s | 0.000816s | 0.000844s | byte equality observed |
| mp_rotate_left.test | 10 | 0.000810s | 0.000794s | 0.000839s | byte equality observed |
| mp_rotate_right.test | 10 | 0.000794s | 0.000805s | 0.000817s | byte equality observed |
| mp_same.test | 10 | 0.000800s | 0.000833s | 0.000813s | byte equality observed |
| mp_second.test | 10 | 0.000822s | 0.000812s | 0.000789s | byte equality observed |
| mp_second_2.test | 10 | 0.000358s | 0.000357s | 0.000779s | byte equality observed |
| mp_set_contains.test | 10 | 0.000795s | 0.000799s | 0.000798s | byte equality observed |
| mp_set_difference.test | 10 | 0.000811s | 0.000819s | 0.000786s | byte equality observed |
| mp_set_difference_sf.test | 10 | 0.000821s | 0.000791s | 0.000798s | byte equality observed |
| mp_set_intersection.test | 10 | 0.000814s | 0.000811s | 0.000806s | byte equality observed |
| mp_set_intersection_sf.test | 10 | 0.000815s | 0.000798s | 0.000788s | byte equality observed |
| mp_set_push_back.test | 10 | 0.000789s | 0.000817s | 0.000789s | byte equality observed |
| mp_set_push_front.test | 10 | 0.000851s | 0.000838s | 0.000808s | byte equality observed |
| mp_set_union.test | 10 | 0.000807s | 0.000805s | 0.000788s | byte equality observed |
| mp_set_union_sf.test | 10 | 0.000813s | 0.000814s | 0.000798s | byte equality observed |
| mp_similar.test | 10 | 0.000807s | 0.000850s | 0.000795s | byte equality observed |
| mp_size.test | 10 | 0.000810s | 0.000820s | 0.000793s | byte equality observed |
| mp_size_2.test | 10 | 0.000365s | 0.000369s | 0.000784s | byte equality observed |
| mp_slice.test | 10 | 0.000819s | 0.000807s | 0.000802s | byte equality observed |
| mp_slice_2.test | 10 | 0.000358s | 0.000356s | 0.000787s | byte equality observed |
| mp_sliding_fold.test | 10 | 0.000810s | 0.000827s | 0.000834s | byte equality observed |
| mp_sliding_fold_q.test | 10 | 0.000805s | 0.000802s | 0.000802s | byte equality observed |
| mp_sort.test | 10 | 0.000781s | 0.000814s | 0.000817s | byte equality observed |
| mp_sort_q.test | 10 | 0.000813s | 0.000829s | 0.000812s | byte equality observed |
| mp_split.test | 10 | 0.000820s | 0.000846s | 0.000830s | byte equality observed |
| mp_starts_with.test | 10 | 0.000807s | 0.000811s | 0.000792s | byte equality observed |
| mp_starts_with_sf.test | 10 | 0.000791s | 0.000819s | 0.000796s | byte equality observed |
| mp_take.test | 10 | 0.000817s | 0.000799s | 0.000814s | byte equality observed |
| mp_take_2.test | 10 | 0.000361s | 0.000360s | 0.000797s | byte equality observed |
| mp_third.test | 10 | 0.000799s | 0.000805s | 0.000815s | byte equality observed |
| mp_third_2.test | 10 | 0.000360s | 0.000369s | 0.000811s | byte equality observed |
| mp_transform.test | 10 | 0.000826s | 0.000798s | 0.000788s | byte equality observed |
| mp_transform_2.test | 10 | 0.000777s | 0.000755s | 0.000785s | byte equality observed |
| mp_transform_front.test | 10 | 0.000783s | 0.000804s | 0.000774s | byte equality observed |
| mp_transform_front_2.test | 10 | 0.000353s | 0.000359s | 0.000773s | byte equality observed |
| mp_transform_if.test | 10 | 0.000811s | 0.000811s | 0.000793s | byte equality observed |
| mp_transform_if_q.test | 10 | 0.000808s | 0.000800s | 0.000795s | byte equality observed |
| mp_transform_q.test | 10 | 0.000812s | 0.000826s | 0.000802s | byte equality observed |
| mp_transform_q_2.test | 10 | 0.000803s | 0.000821s | 0.000797s | byte equality observed |
| mp_transform_second.test | 10 | 0.000792s | 0.000826s | 0.000815s | byte equality observed |
| mp_transform_second_2.test | 10 | 0.000364s | 0.000354s | 0.000801s | byte equality observed |
| mp_transform_sf.test | 10 | 0.000804s | 0.000809s | 0.000784s | byte equality observed |
| mp_transform_third.test | 10 | 0.000802s | 0.000822s | 0.000804s | byte equality observed |
| mp_transform_third_2.test | 10 | 0.000364s | 0.000361s | 0.000807s | byte equality observed |
| mp_unique.test | 10 | 0.000791s | 0.000803s | 0.000796s | byte equality observed |
| mp_unique_if.test | 10 | 0.000797s | 0.000829s | 0.000774s | byte equality observed |
| mp_unique_if_q.test | 10 | 0.000809s | 0.000844s | 0.000803s | byte equality observed |
| mp_valid.test | 10 | 0.000792s | 0.000840s | 0.000826s | byte equality observed |
| mp_valid_and_true.test | 10 | 0.000793s | 0.000803s | 0.000798s | byte equality observed |
| mp_value.test | 10 | 0.000361s | 0.000370s | 0.000792s | byte equality observed |
| mp_with_index.test | 10 | 0.001118s | 0.001061s | 0.001009s | byte equality observed |
| mp_with_index_cx.test | 10 | 0.000363s | 0.000363s | 0.000781s | byte equality observed |
| mpl.test | 10 | 0.000812s | 0.000805s | 0.000805s | byte equality observed |
| mpl_list.test | 10 | 0.000783s | 0.000820s | 0.000781s | byte equality observed |
| mpl_tuple.test | 10 | 0.000805s | 0.000824s | 0.000809s | byte equality observed |
| mpl_version.test | 10 | 0.000785s | 0.000804s | 0.000819s | byte equality observed |
| set_version.test | 10 | 0.000808s | 0.000799s | 0.000805s | byte equality observed |
| tuple_apply.test | 10 | 0.000814s | 0.000818s | 0.000807s | byte equality observed |
| tuple_for_each.test | 10 | 0.000806s | 0.000776s | 0.000791s | byte equality observed |
| tuple_transform.test | 10 | 0.000805s | 0.000809s | 0.000813s | byte equality observed |
| tuple_transform_2.test | 10 | 0.000805s | 0.000814s | 0.000843s | byte equality observed |
| tuple_version.test | 10 | 0.000820s | 0.000803s | 0.000833s | byte equality observed |
| utility_version.test | 10 | 0.000824s | 0.000819s | 0.000821s | byte equality observed |
| version.test | 10 | 0.000806s | 0.000810s | 0.000800s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/43778388618).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
