# libs/mp11/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| mp11.test | COMPILE | 0.028827 | 0.061073 | 0.090476 | — | — | — |
| complex_h.test | COMPILE | 0.112589 | 0.256721 | 0.360341 | — | — | — |
| mp_size.test | RUN | 0.140867 | 0.861032 | 0.468183 | 0.001161 | 0.001267 | 0.001263 |
| mp_size_2.test | RUN | 0.011974 | 0.031180 | 0.039784 | 0.000451 | 0.000511 | 0.001113 |
| mp_empty.test | RUN | 0.130155 | 0.539879 | 0.447058 | 0.001156 | 0.001430 | 0.001170 |
| mp_empty_2.test | RUN | 0.012481 | 0.031218 | 0.044221 | 0.000510 | 0.000524 | 0.001179 |
| mp_assign.test | RUN | 0.152596 | 1.131087 | 0.607537 | 0.001149 | 0.001289 | 0.001167 |
| mp_assign_2.test | RUN | 0.012773 | 0.030966 | 0.044260 | 0.000452 | 0.000616 | 0.001209 |
| mp_clear.test | RUN | 0.132656 | 0.485097 | 0.440449 | 0.001138 | 0.001246 | 0.001220 |
| mp_clear_2.test | RUN | 0.012291 | 0.029517 | 0.044421 | 0.000460 | 0.000461 | 0.001176 |
| mp_front.test | RUN | 0.134725 | 0.769237 | 0.518642 | 0.001083 | 0.001496 | 0.001296 |
| mp_front_2.test | RUN | 0.011390 | 0.029478 | 0.044148 | 0.000459 | 0.000477 | 0.001200 |
| mp_pop_front.test | RUN | 0.140707 | 0.811098 | 0.522684 | 0.001255 | 0.001423 | 0.001314 |
| mp_pop_front_2.test | RUN | 0.012273 | 0.029100 | 0.041024 | 0.000472 | 0.000596 | 0.001151 |
| mp_second.test | RUN | 0.138873 | 0.515665 | 0.475140 | 0.001086 | 0.001275 | 0.001248 |
| mp_second_2.test | RUN | 0.012259 | 0.029901 | 0.044338 | 0.000496 | 0.000540 | 0.001272 |
| mp_third.test | RUN | 0.131442 | 0.478652 | 0.458151 | 0.001110 | 0.001076 | 0.001322 |
| mp_third_2.test | RUN | 0.012068 | 0.030161 | 0.044400 | 0.000470 | 0.000530 | 0.001077 |
| mp_push_front.test | RUN | 0.180007 | 1.737169 | 0.844779 | 0.001139 | 0.001350 | 0.001216 |
| mp_push_front_2.test | RUN | 0.011683 | 0.030004 | 0.041227 | 0.000490 | 0.000530 | 0.001245 |
| mp_push_back.test | RUN | 0.181697 | 1.751371 | 0.840473 | 0.001066 | 0.001315 | 0.001094 |
| mp_push_back_2.test | RUN | 0.011832 | 0.031200 | 0.043071 | 0.000460 | 0.000543 | 0.001275 |
| mp_rename.test | RUN | 0.174517 | 1.598539 | 0.709723 | 0.001202 | 0.001310 | 0.001119 |
| mp_rename_2.test | RUN | 0.011261 | 0.031270 | 0.044509 | 0.000462 | 0.000578 | 0.001228 |
| mp_append.test | RUN | 0.174398 | 1.829903 | 0.783352 | 0.001099 | 0.001458 | 0.001270 |
| mp_append_2.test | RUN | 0.404384 | 4.099270 | 1.071991 | 0.001153 | 0.001374 | 0.001218 |
| mp_append_3.test | RUN | 0.012294 | 0.030298 | 0.043233 | 0.000450 | 0.000524 | 0.001196 |
| mp_append_sf.test | RUN | 0.129675 | 0.435523 | 0.429285 | 0.001270 | 0.001405 | 0.001313 |
| mp_replace_front.test | RUN | 0.163497 | 1.290732 | 0.636218 | 0.001152 | 0.001280 | 0.001337 |
| mp_replace_front_2.test | RUN | 0.012245 | 0.030715 | 0.044569 | 0.000447 | 0.000548 | 0.001157 |
| mp_replace_second.test | RUN | 0.149932 | 0.823196 | 0.596828 | 0.001220 | 0.001226 | 0.001251 |
| mp_replace_second_2.test | RUN | 0.012740 | 0.030978 | 0.044976 | 0.000422 | 0.000550 | 0.001113 |
| mp_replace_third.test | RUN | 0.148699 | 0.674251 | 0.539583 | 0.001264 | 0.001277 | 0.001200 |
| mp_replace_third_2.test | RUN | 0.011476 | 0.027503 | 0.045071 | 0.000458 | 0.000501 | 0.001206 |
| mp_apply_q.test | RUN | 0.169625 | 1.592915 | 0.712303 | 0.001328 | 0.001279 | 0.001160 |
| mp_apply_q_sf.test | RUN | 0.130943 | 0.452843 | 0.430853 | 0.001150 | 0.001325 | 0.001347 |
| mp_is_list.test | RUN | 0.136775 | 0.529940 | 0.458697 | 0.001120 | 0.001476 | 0.001068 |
| mp_list_c.test | RUN | 0.145884 | 0.652504 | 0.494140 | 0.001196 | 0.001408 | 0.001177 |
| mp_transform_front.test | RUN | 0.160068 | 1.295657 | 0.629837 | 0.001184 | 0.001260 | 0.001175 |
| mp_transform_front_2.test | RUN | 0.012597 | 0.029574 | 0.043320 | 0.000513 | 0.000494 | 0.001152 |
| mp_transform_second.test | RUN | 0.147584 | 1.100951 | 0.579842 | 0.001043 | 0.001340 | 0.001164 |
| mp_transform_second_2.test | RUN | 0.011280 | 0.029488 | 0.044979 | 0.000430 | 0.000537 | 0.001234 |
| mp_transform_third.test | RUN | 0.140228 | 0.843136 | 0.506029 | 0.001198 | 0.001588 | 0.001047 |
| mp_transform_third_2.test | RUN | 0.011580 | 0.030325 | 0.044187 | 0.000468 | 0.000430 | 0.001180 |
| mp_list_v.test | RUN | 0.012084 | 0.030646 | 0.042587 | 0.000469 | 0.000420 | 0.001233 |
| mp_rename_v.test | RUN | 0.011553 | 0.030362 | 0.040805 | 0.000486 | 0.000492 | 0.001105 |
| mp_is_value_list.test | RUN | 0.128702 | 0.326380 | 0.418870 | 0.001279 | 0.001375 | 0.001180 |
| mp_transform.test | RUN | 0.340782 | 2.755444 | 1.331566 | 0.000900 | 0.001207 | 0.001230 |
| mp_transform_2.test | RUN | 0.124708 | 0.290327 | 0.380517 | 0.001120 | 0.001390 | 0.001075 |
| mp_transform_q.test | RUN | 0.329843 | 2.621221 | 1.289053 | 0.001294 | 0.001244 | 0.001267 |
| mp_transform_q_2.test | RUN | 0.331134 | 0.818262 | 1.637260 | 0.001107 | 0.001202 | 0.001363 |
| mp_transform_sf.test | RUN | 0.144081 | 0.455419 | 0.455682 | 0.001164 | 0.001396 | 0.001154 |
| mp_transform_if.test | RUN | 0.181049 | 1.297562 | 0.703334 | 0.001174 | 0.001258 | 0.001152 |
| mp_transform_if_q.test | RUN | 0.177030 | 1.301288 | 0.704727 | 0.001013 | 0.001180 | 0.001168 |
| mp_filter.test | RUN | 0.152485 | 0.761091 | 0.524204 | 0.001059 | 0.001401 | 0.001083 |
| mp_fill.test | RUN | 0.145513 | 0.573064 | 0.505351 | 0.001080 | 0.001421 | 0.001199 |
| mp_fill_2.test | RUN | 0.021809 | 0.046947 | 0.070372 | 0.000453 | 0.000481 | 0.001152 |
| mp_count.test | RUN | 0.280220 | 1.369115 | 0.790459 | 0.001077 | 0.001387 | 0.001055 |
| mp_count_if.test | RUN | 0.286791 | 1.413047 | 0.849222 | 0.001039 | 0.001245 | 0.001063 |
| mp_count_if_q.test | RUN | 0.148948 | 0.909310 | 0.497731 | 0.001150 | 0.001217 | 0.001276 |
| mp_contains.test | RUN | 0.142945 | 0.546739 | 0.463999 | 0.001197 | 0.001036 | 0.001177 |
| mp_starts_with.test | RUN | 0.143178 | 0.546527 | 0.468425 | 0.001094 | 0.001387 | 0.001138 |
| mp_starts_with_sf.test | RUN | 0.134921 | 0.464765 | 0.449007 | 0.001066 | 0.001322 | 0.001188 |
| mp_repeat.test | RUN | 0.214202 | 2.301035 | 0.905245 | 0.001106 | 0.001286 | 0.001115 |
| mp_repeat_2.test | RUN | 0.021543 | 0.046447 | 0.071372 | 0.000467 | 0.000580 | 0.001249 |
| mp_repeat_3.test | RUN | 0.173531 | 0.292836 | 0.435544 | 0.001198 | 0.001352 | 0.001222 |
| mp_product.test | RUN | 0.161662 | 1.395362 | 0.643245 | 0.001282 | 0.001449 | 0.001211 |
| mp_drop.test | RUN | 0.181260 | 1.719981 | 0.750568 | 0.001213 | 0.001151 | 0.001185 |
| mp_drop_2.test | RUN | 0.021636 | 0.048124 | 0.070894 | 0.000454 | 0.000578 | 0.001186 |
| mp_iota.test | RUN | 0.171164 | 1.465889 | 0.661337 | 0.001250 | 0.001236 | 0.001246 |
| mp_iota_2.test | RUN | 0.185317 | 1.769590 | 0.745627 | 0.001084 | 0.001314 | 0.001241 |
| mp_at.test | RUN | 0.150403 | 0.764100 | 0.534006 | 0.001084 | 0.001330 | 0.001129 |
| mp_at_2.test | RUN | 0.021307 | 0.045301 | 0.071721 | 0.000465 | 0.000524 | 0.001161 |
| mp_at_sf.test | RUN | 0.139330 | 0.458680 | 0.453372 | 0.001228 | 0.001468 | 0.001184 |
| mp_take.test | RUN | 0.243739 | 2.305014 | 0.909797 | 0.001201 | 0.001276 | 0.001341 |
| mp_take_2.test | RUN | 0.021817 | 0.047419 | 0.071235 | 0.000468 | 0.000511 | 0.001434 |
| mp_slice.test | RUN | 0.295297 | 2.350590 | 1.178448 | 0.001152 | 0.001373 | 0.001205 |
| mp_slice_2.test | RUN | 0.021323 | 0.049178 | 0.069406 | 0.000448 | 0.000593 | 0.001169 |
| mp_replace.test | RUN | 0.178551 | 1.184114 | 0.727729 | 0.001270 | 0.001363 | 0.001213 |
| mp_replace_if.test | RUN | 0.171277 | 1.039344 | 0.675777 | 0.001174 | 0.001354 | 0.001127 |
| mp_replace_if_q.test | RUN | 0.168185 | 1.041689 | 0.670312 | 0.001154 | 0.001382 | 0.001172 |
| mp_copy_if.test | RUN | 0.174485 | 1.445778 | 0.647637 | 0.001198 | 0.001552 | 0.001143 |
| mp_copy_if_q.test | RUN | 0.175657 | 1.459162 | 0.652230 | 0.001282 | 0.001323 | 0.001245 |
| mp_remove.test | RUN | 0.168664 | 0.984821 | 0.654160 | 0.001200 | 0.001394 | 0.001228 |
| mp_remove_if.test | RUN | 0.179369 | 1.552943 | 0.684440 | 0.001191 | 0.001412 | 0.001262 |
| mp_remove_if_q.test | RUN | 0.178287 | 1.551882 | 0.686527 | 0.001188 | 0.001354 | 0.001332 |
| mp_partition.test | RUN | 0.175998 | 1.463509 | 0.742496 | 0.001205 | 0.001285 | 0.001140 |
| mp_partition_q.test | RUN | 0.179711 | 1.450020 | 0.741746 | 0.001154 | 0.001521 | 0.001217 |
| mp_sort.test | RUN | 0.170695 | 1.045324 | 0.646335 | 0.001126 | 0.001388 | 0.001195 |
| mp_sort_q.test | RUN | 0.167503 | 1.037626 | 0.632251 | 0.001088 | 0.001387 | 0.001068 |
| mp_find.test | RUN | 0.160792 | 1.107509 | 0.540635 | 0.001226 | 0.001309 | 0.001132 |
| mp_find_if.test | RUN | 0.149836 | 1.014290 | 0.533304 | 0.001114 | 0.001296 | 0.001189 |
| mp_find_if_q.test | RUN | 0.168544 | 1.141316 | 0.641680 | 0.001124 | 0.001428 | 0.001365 |
| mp_reverse.test | RUN | 0.369228 | 3.071792 | 1.285266 | 0.001175 | 0.001617 | 0.001195 |
| mp_fold.test | RUN | 0.621528 | 2.391796 | 3.260260 | 0.001317 | 0.001532 | 0.001049 |
| mp_fold_q.test | RUN | 0.158418 | 1.022028 | 0.597337 | 0.001165 | 0.001293 | 0.001302 |
| mp_fold_q_sf.test | RUN | 0.137192 | 0.472368 | 0.461117 | 0.001079 | 0.001410 | 0.001345 |
| mp_reverse_fold.test | RUN | 0.287087 | 2.252718 | 0.911835 | 0.001095 | 0.001457 | 0.001166 |
| mp_reverse_fold_q.test | RUN | 0.164679 | 1.235573 | 0.658430 | 0.001121 | 0.001343 | 0.001137 |
| mp_unique.test | RUN | 0.160370 | 1.126370 | 0.637367 | 0.001059 | 0.001519 | 0.001271 |
| mp_unique_if.test | RUN | 0.291917 | 2.358155 | 1.007986 | 0.001232 | 0.001532 | 0.001218 |
| mp_unique_if_q.test | RUN | 0.265105 | 2.338727 | 0.819371 | 0.001340 | 0.001464 | 0.001235 |
| mp_all_of.test | RUN | 0.383601 | 1.262389 | 1.053665 | 0.001122 | 0.001159 | 0.001091 |
| mp_all_of_q.test | RUN | 0.141243 | 0.549462 | 0.473284 | 0.001418 | 0.001370 | 0.001125 |
| mp_any_of.test | RUN | 0.394540 | 1.349323 | 1.054993 | 0.001225 | 0.001365 | 0.001206 |
| mp_any_of_q.test | RUN | 0.142056 | 0.554957 | 0.475353 | 0.001272 | 0.001503 | 0.001126 |
| mp_none_of.test | RUN | 0.395652 | 1.327536 | 1.047602 | 0.001272 | 0.001381 | 0.001143 |
| mp_none_of_q.test | RUN | 0.138779 | 0.545662 | 0.437475 | 0.001274 | 0.001474 | 0.001159 |
| mp_replace_at.test | RUN | 0.174426 | 1.103189 | 0.696623 | 0.001142 | 0.001380 | 0.001123 |
| mp_replace_at_c.test | RUN | 0.169857 | 1.123509 | 0.716586 | 0.001160 | 0.001433 | 0.001140 |
| mp_for_each.test | RUN | 0.160971 | 0.732920 | 0.717778 | 0.001125 | 0.001426 | 0.001120 |
| mp_insert.test | RUN | 0.273409 | 2.307437 | 1.037081 | 0.001161 | 0.001342 | 0.001268 |
| mp_insert_2.test | RUN | 0.022518 | 0.048400 | 0.070019 | 0.000458 | 0.000521 | 0.001085 |
| mp_erase.test | RUN | 0.299086 | 2.456161 | 1.219781 | 0.001093 | 0.001439 | 0.001223 |
| mp_erase_2.test | RUN | 0.021701 | 0.048000 | 0.071311 | 0.000443 | 0.000582 | 0.001108 |
| mp_with_index.test | RUN | 0.385281 | 4.927970 | 2.658808 | 0.001585 | 0.001670 | 0.001403 |
| mp_with_index_cx.test | RUN | 0.002650 | 0.015034 | 0.021776 | 0.000393 | 0.000567 | 0.001251 |
| mp_from_sequence.test | RUN | 0.167831 | 1.282941 | 0.690815 | 0.001134 | 0.001265 | 0.001138 |
| mp_from_sequence_2.test | RUN | 0.188437 | 1.497039 | 0.754863 | 0.001252 | 0.001289 | 0.001171 |
| mp_from_sequence_3.test | RUN | 0.146151 | 0.655263 | 0.519415 | 0.001185 | 0.001370 | 0.001214 |
| mp_min_element.test | RUN | 0.146618 | 0.587185 | 0.490646 | 0.001274 | 0.001603 | 0.001093 |
| mp_min_element_2.test | RUN | 0.021493 | 0.047792 | 0.073074 | 0.000474 | 0.000497 | 0.001159 |
| mp_min_element_q.test | RUN | 0.141548 | 0.590202 | 0.481022 | 0.001128 | 0.001342 | 0.001163 |
| mp_min_element_q_2.test | RUN | 0.023052 | 0.047668 | 0.069011 | 0.000493 | 0.000452 | 0.001151 |
| mp_max_element.test | RUN | 0.143067 | 0.592278 | 0.476726 | 0.001116 | 0.001393 | 0.001145 |
| mp_max_element_2.test | RUN | 0.021563 | 0.046639 | 0.070754 | 0.000465 | 0.000481 | 0.001149 |
| mp_max_element_q.test | RUN | 0.142250 | 0.597352 | 0.486157 | 0.001202 | 0.001390 | 0.001258 |
| mp_max_element_q_2.test | RUN | 0.021842 | 0.045158 | 0.066639 | 0.000543 | 0.000556 | 0.001139 |
| mp_nth_element.test | RUN | 0.156749 | 0.856647 | 0.598592 | 0.001189 | 0.001345 | 0.001185 |
| mp_nth_element_q.test | RUN | 0.154095 | 0.839256 | 0.596912 | 0.001108 | 0.001400 | 0.001128 |
| mp_back.test | RUN | 0.154259 | 0.694572 | 0.567225 | 0.001186 | 0.001375 | 0.001155 |
| mp_back_2.test | RUN | 0.020940 | 0.047711 | 0.073875 | 0.000460 | 0.000531 | 0.001154 |
| mp_pop_back.test | RUN | 0.462534 | 4.716148 | 1.223928 | 0.001176 | 0.001302 | 0.001198 |
| mp_pop_back_2.test | RUN | 0.021903 | 0.045783 | 0.071032 | 0.000451 | 0.000483 | 0.001144 |
| mp_flatten.test | RUN | 0.189243 | 1.649381 | 0.822780 | 0.001408 | 0.001339 | 0.001191 |
| mp_rotate_left.test | RUN | 0.187036 | 1.791460 | 0.803716 | 0.001201 | 0.001390 | 0.001143 |
| mp_rotate_right.test | RUN | 0.184521 | 1.773189 | 0.811476 | 0.001140 | 0.001365 | 0.001231 |
| mp_power_set.test | RUN | 0.187909 | 1.684881 | 0.809717 | 0.001232 | 0.001382 | 0.001226 |
| mp_partial_sum.test | RUN | 0.253221 | 2.293567 | 0.927591 | 0.001134 | 0.001270 | 0.001299 |
| mp_iterate.test | RUN | 0.160703 | 0.665903 | 0.632455 | 0.001297 | 0.001377 | 0.001252 |
| mp_pairwise_fold.test | RUN | 0.188686 | 1.554265 | 0.821036 | 0.001111 | 0.001377 | 0.001166 |
| mp_pairwise_fold_q.test | RUN | 0.140850 | 0.446662 | 0.467579 | 0.001256 | 0.001255 | 0.001465 |
| mp_sliding_fold.test | RUN | 0.364512 | 3.044859 | 1.555779 | 0.001376 | 0.001268 | 0.001400 |
| mp_sliding_fold_q.test | RUN | 0.368078 | 3.022873 | 1.544557 | 0.001236 | 0.001236 | 0.000891 |
| mp_intersperse.test | RUN | 0.170972 | 1.126694 | 0.711088 | 0.001203 | 0.001426 | 0.001314 |
| mp_split.test | RUN | 0.254869 | 2.174774 | 1.008413 | 0.001120 | 0.001494 | 0.001213 |
| mp_join.test | RUN | 0.196803 | 1.838036 | 0.888089 | 0.001121 | 0.001407 | 0.001187 |
| integral.test | RUN | 0.146174 | 0.803764 | 0.539365 | 0.001289 | 0.001481 | 0.001147 |
| mp_value.test | RUN | 0.009573 | 0.027240 | 0.035405 | 0.000462 | 0.000508 | 0.001179 |
| mp_identity.test | RUN | 0.143381 | 0.730398 | 0.489520 | 0.001209 | 0.001390 | 0.001149 |
| mp_inherit.test | RUN | 0.137085 | 0.525126 | 0.465377 | 0.001316 | 0.001380 | 0.001124 |
| mp_if.test | RUN | 0.137760 | 0.591331 | 0.471053 | 0.001180 | 0.001282 | 0.001126 |
| mp_if_sf.test | RUN | 0.131921 | 0.442543 | 0.415095 | 0.001180 | 0.001442 | 0.001340 |
| mp_eval_if.test | RUN | 0.141507 | 0.637588 | 0.488746 | 0.001143 | 0.001171 | 0.001330 |
| mp_eval_if_sf.test | RUN | 0.132046 | 0.452958 | 0.436936 | 0.001154 | 0.001184 | 0.001335 |
| mp_valid.test | RUN | 0.131671 | 0.451158 | 0.447230 | 0.001116 | 0.001289 | 0.001353 |
| mp_defer.test | RUN | 0.144166 | 0.760642 | 0.530766 | 0.001072 | 0.001483 | 0.001286 |
| mp_quote.test | RUN | 0.147694 | 0.780824 | 0.547265 | 0.001066 | 0.001357 | 0.001214 |
| mp_invoke_q.test | RUN | 0.160308 | 1.034456 | 0.608918 | 0.001354 | 0.001523 | 0.001160 |
| mp_invoke_q_sf.test | RUN | 0.132783 | 0.451175 | 0.425320 | 0.001281 | 0.001346 | 0.001096 |
| mp_quote_trait.test | RUN | 0.143978 | 0.874271 | 0.529151 | 0.001086 | 0.001424 | 0.001123 |
| mp_cond.test | RUN | 0.134116 | 0.517474 | 0.457137 | 0.001153 | 0.001303 | 0.001275 |
| mp_cond_sf.test | RUN | 0.131127 | 0.450088 | 0.424032 | 0.001191 | 0.001325 | 0.001279 |
| mp_not_fn.test | RUN | 0.127112 | 0.450561 | 0.423411 | 0.001241 | 0.001386 | 0.001163 |
| mp_eval_if_not.test | RUN | 0.138826 | 0.633180 | 0.480113 | 0.001226 | 0.001419 | 0.001289 |
| mp_eval_or.test | RUN | 0.134222 | 0.333465 | 0.438891 | 0.001118 | 0.001224 | 0.001131 |
| mp_compose.test | RUN | 0.152703 | 1.062519 | 0.580127 | 0.001144 | 0.001369 | 0.001235 |
| mp_valid_and_true.test | RUN | 0.132289 | 0.533074 | 0.450297 | 0.001058 | 0.001463 | 0.001188 |
| mp_compose_sf.test | COMPILE | 0.030002 | 0.061104 | 0.103742 | — | — | — |
| integer_sequence.test | RUN | 0.169977 | 1.053020 | 0.657909 | 0.001263 | 0.001300 | 0.001230 |
| tuple_for_each.test | RUN | 0.133883 | 0.376451 | 0.472000 | 0.001205 | 0.001236 | 0.001186 |
| tuple_for_each_cx.test | COMPILE | 0.027132 | 0.054118 | 0.077142 | — | — | — |
| tuple_apply.test | RUN | 0.135526 | 0.379734 | 0.468054 | 0.001127 | 0.001301 | 0.001198 |
| tuple_apply_cx.test | COMPILE | 0.036038 | 0.076322 | 0.111160 | — | — | — |
| construct_from_tuple.test | RUN | 0.136458 | 0.414844 | 0.462484 | 0.001161 | 0.001420 | 0.001286 |
| construct_from_tuple_cx.test | COMPILE | 0.036368 | 0.075468 | 0.105765 | — | — | — |
| tuple_transform.test | RUN | 0.218280 | 0.820893 | 0.918377 | 0.001202 | 0.001212 | 0.001239 |
| tuple_transform_2.test | RUN | 0.188503 | 0.596385 | 0.815559 | 0.001221 | 0.001282 | 0.001135 |
| tuple_transform_cx.test | COMPILE | 0.031627 | 0.073673 | 0.107401 | — | — | — |
| mp_set_contains.test | RUN | 0.144374 | 0.545451 | 0.467326 | 0.001202 | 0.001378 | 0.001312 |
| mp_set_push_back.test | RUN | 0.186523 | 1.711419 | 0.818151 | 0.001200 | 0.001413 | 0.001212 |
| mp_set_push_front.test | RUN | 0.246067 | 2.061875 | 0.932876 | 0.001196 | 0.001451 | 0.001081 |
| mp_is_set.test | RUN | 0.142617 | 0.548054 | 0.481774 | 0.001136 | 0.001598 | 0.001322 |
| mp_set_union.test | RUN | 0.178945 | 1.451342 | 0.768755 | 0.001343 | 0.001351 | 0.001130 |
| mp_set_union_sf.test | RUN | 0.131378 | 0.436546 | 0.442831 | 0.001202 | 0.001458 | 0.001316 |
| mp_set_difference.test | RUN | 0.162089 | 1.135742 | 0.656277 | 0.001238 | 0.001395 | 0.001116 |
| mp_set_difference_sf.test | RUN | 0.130691 | 0.439732 | 0.433948 | 0.001267 | 0.001289 | 0.001043 |
| mp_set_intersection.test | RUN | 0.158807 | 1.120693 | 0.638625 | 0.001230 | 0.001258 | 0.001317 |
| mp_set_intersection_sf.test | RUN | 0.135198 | 0.429203 | 0.431171 | 0.001188 | 0.001169 | 0.001195 |
| mp_all.test | RUN | 0.140165 | 0.539074 | 0.475608 | 0.001138 | 0.001534 | 0.001484 |
| mp_all_2.test | RUN | 0.394962 | 1.179646 | 1.058914 | 0.001174 | 0.001514 | 0.001175 |
| mp_and.test | RUN | 0.132271 | 0.532752 | 0.468038 | 0.001121 | 0.001487 | 0.001223 |
| mp_any.test | RUN | 0.139636 | 0.541091 | 0.446288 | 0.001252 | 0.001332 | 0.001249 |
| mp_any_2.test | RUN | 0.400905 | 1.195341 | 1.059082 | 0.001247 | 0.001481 | 0.001423 |
| mp_or.test | RUN | 0.135696 | 0.523447 | 0.468138 | 0.001177 | 0.001404 | 0.001070 |
| mp_same.test | RUN | 0.271781 | 0.915157 | 0.732595 | 0.001087 | 0.001267 | 0.001145 |
| mp_plus.test | RUN | 0.144527 | 0.624542 | 0.512195 | 0.001132 | 0.001195 | 0.001190 |
| mp_less.test | RUN | 0.141504 | 0.534058 | 0.441822 | 0.001205 | 0.001374 | 0.001174 |
| mp_min.test | RUN | 0.129821 | 0.490235 | 0.453766 | 0.001362 | 0.001396 | 0.001103 |
| mp_max.test | RUN | 0.139817 | 0.552258 | 0.464029 | 0.001116 | 0.001131 | 0.001204 |
| mp_similar.test | RUN | 0.137863 | 0.540742 | 0.463043 | 0.001194 | 0.001199 | 0.001107 |
| mp_map_find.test | RUN | 0.163202 | 1.000076 | 0.615897 | 0.001220 | 0.001460 | 0.001142 |
| mp_map_find_2.test | RUN | 0.146582 | 0.382471 | 0.531711 | 0.001357 | 0.001375 | 0.001231 |
| mp_map_find_3.test | RUN | 0.148487 | 0.382353 | 0.528539 | 0.001134 | 0.001277 | 0.001174 |
| mp_map_find_4.test | RUN | 0.143161 | 0.354355 | 0.470862 | 0.001081 | 0.001368 | 0.001079 |
| mp_map_contains.test | RUN | 0.145643 | 0.553076 | 0.481716 | 0.001250 | 0.001564 | 0.001342 |
| mp_map_insert.test | RUN | 0.190041 | 1.934038 | 0.882774 | 0.001151 | 0.001526 | 0.001239 |
| mp_map_replace.test | RUN | 0.267842 | 2.184326 | 1.021237 | 0.001109 | 0.001551 | 0.001211 |
| mp_map_erase.test | RUN | 0.188119 | 1.625975 | 0.837691 | 0.001021 | 0.001412 | 0.001075 |
| mp_map_update.test | RUN | 0.164624 | 1.038241 | 0.644388 | 0.001125 | 0.001394 | 0.001201 |
| mp_map_update_q.test | RUN | 0.160138 | 1.041525 | 0.645822 | 0.001217 | 0.001214 | 0.001210 |
| mp_map_keys.test | RUN | 0.162483 | 0.930519 | 0.631796 | 0.001166 | 0.001495 | 0.001131 |
| mp_is_map.test | RUN | 0.143224 | 0.565079 | 0.492522 | 0.001059 | 0.001356 | 0.001305 |
| mp_bind.test | RUN | 0.177317 | 1.692139 | 0.769433 | 0.001175 | 0.001468 | 0.001322 |
| mp_bind_q.test | RUN | 0.160296 | 1.039849 | 0.613700 | 0.001398 | 0.001296 | 0.001082 |
| mp_bind_front.test | RUN | 0.158850 | 1.133246 | 0.591662 | 0.001126 | 0.001425 | 0.001181 |
| mp_bind_back.test | RUN | 0.156523 | 1.123572 | 0.597912 | 0.001145 | 0.001182 | 0.001136 |
| mp_lambda.test | RUN | 0.383115 | 3.433212 | 1.601197 | 0.001172 | 0.000999 | 0.001078 |
| mpl.test | RUN | 0.320914 | 0.878823 | 1.253263 | 0.001145 | 0.001238 | 0.001042 |
| mpl_list.test | RUN | 0.173547 | 0.661146 | 0.582587 | 0.001373 | 0.001581 | 0.001185 |
| mpl_tuple.test | RUN | 0.174478 | 0.669373 | 0.572156 | 0.001189 | 0.001307 | 0.001132 |
| version.test | RUN | 0.088772 | 0.232767 | 0.298162 | 0.001285 | 0.001236 | 0.001538 |
| mp11_version.test | RUN | 0.107335 | 0.270540 | 0.347250 | 0.001093 | 0.001235 | 0.001138 |
| list_version.test | RUN | 0.089852 | 0.243523 | 0.303865 | 0.001162 | 0.001328 | 0.001227 |
| algorithm_version.test | RUN | 0.105240 | 0.258062 | 0.322525 | 0.001096 | 0.001311 | 0.000953 |
| integral_version.test | RUN | 0.089386 | 0.235779 | 0.289607 | 0.001190 | 0.001272 | 0.001154 |
| utility_version.test | RUN | 0.086963 | 0.240203 | 0.289861 | 0.001204 | 0.001274 | 0.001007 |
| function_version.test | RUN | 0.089724 | 0.241250 | 0.302587 | 0.001204 | 0.001364 | 0.001248 |
| map_version.test | RUN | 0.103541 | 0.259437 | 0.322430 | 0.001071 | 0.001333 | 0.001005 |
| set_version.test | RUN | 0.090091 | 0.243128 | 0.293887 | 0.001353 | 0.001276 | 0.000836 |
| bind_version.test | RUN | 0.099211 | 0.256261 | 0.318668 | 0.001089 | 0.001313 | 0.001238 |
| integer_sequence_version.test | RUN | 0.086958 | 0.237087 | 0.287931 | 0.001122 | 0.001279 | 0.000926 |
| tuple_version.test | RUN | 0.100685 | 0.258739 | 0.304249 | 0.000808 | 0.001205 | 0.000847 |
| mpl_version.test | RUN | 0.072124 | 0.184701 | 0.208400 | 0.000890 | 0.000963 | 0.000857 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 1.002× | 1.003×, 1.002× | 1.005× |
| clang | 1.095× | 1.085×, 1.104× | 1.002× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1364 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44481767416).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| algorithm_version.test | 10 | 0.000740s | 0.000731s | 0.000749s | byte equality observed |
| bind_version.test | 10 | 0.000734s | 0.000747s | 0.000752s | byte equality observed |
| construct_from_tuple.test | 10 | 0.000730s | 0.000732s | 0.000729s | byte equality observed |
| function_version.test | 10 | 0.000737s | 0.000724s | 0.000755s | byte equality observed |
| integer_sequence.test | 10 | 0.000748s | 0.000743s | 0.000746s | byte equality observed |
| integer_sequence_version.test | 10 | 0.000739s | 0.000726s | 0.000717s | byte equality observed |
| integral.test | 10 | 0.000741s | 0.000760s | 0.000740s | byte equality observed |
| integral_version.test | 10 | 0.000738s | 0.000742s | 0.000737s | byte equality observed |
| list_version.test | 10 | 0.000720s | 0.000740s | 0.000730s | byte equality observed |
| map_version.test | 10 | 0.000713s | 0.000733s | 0.000750s | byte equality observed |
| mp11_version.test | 10 | 0.000733s | 0.000722s | 0.000742s | byte equality observed |
| mp_all.test | 10 | 0.000727s | 0.000759s | 0.000789s | byte equality observed |
| mp_all_2.test | 10 | 0.000737s | 0.000738s | 0.000798s | byte equality observed |
| mp_all_of.test | 10 | 0.000741s | 0.000743s | 0.000816s | byte equality observed |
| mp_all_of_q.test | 10 | 0.000736s | 0.000740s | 0.000810s | byte equality observed |
| mp_and.test | 10 | 0.000748s | 0.000749s | 0.000833s | byte equality observed |
| mp_any.test | 10 | 0.000738s | 0.000750s | 0.000839s | byte equality observed |
| mp_any_2.test | 10 | 0.000739s | 0.000753s | 0.000823s | byte equality observed |
| mp_any_of.test | 10 | 0.000746s | 0.000743s | 0.000811s | byte equality observed |
| mp_any_of_q.test | 10 | 0.000737s | 0.000737s | 0.000812s | byte equality observed |
| mp_append.test | 10 | 0.000736s | 0.000741s | 0.000800s | byte equality observed |
| mp_append_2.test | 10 | 0.000769s | 0.000748s | 0.000797s | byte equality observed |
| mp_append_3.test | 10 | 0.000357s | 0.000346s | 0.000801s | byte equality observed |
| mp_append_sf.test | 10 | 0.000790s | 0.000755s | 0.000796s | byte equality observed |
| mp_apply_q.test | 10 | 0.000807s | 0.000752s | 0.000797s | byte equality observed |
| mp_apply_q_sf.test | 10 | 0.000792s | 0.000738s | 0.000802s | byte equality observed |
| mp_assign.test | 10 | 0.000797s | 0.000756s | 0.000793s | byte equality observed |
| mp_assign_2.test | 10 | 0.000364s | 0.000347s | 0.000818s | byte equality observed |
| mp_at.test | 10 | 0.000801s | 0.000721s | 0.000820s | byte equality observed |
| mp_at_2.test | 10 | 0.000362s | 0.000343s | 0.000785s | byte equality observed |
| mp_at_sf.test | 10 | 0.000808s | 0.000752s | 0.000777s | byte equality observed |
| mp_back.test | 10 | 0.000794s | 0.000790s | 0.000801s | byte equality observed |
| mp_back_2.test | 10 | 0.000361s | 0.000360s | 0.000791s | byte equality observed |
| mp_bind.test | 10 | 0.000803s | 0.000827s | 0.000787s | byte equality observed |
| mp_bind_back.test | 10 | 0.000818s | 0.000816s | 0.000794s | byte equality observed |
| mp_bind_front.test | 10 | 0.000792s | 0.000813s | 0.000832s | byte equality observed |
| mp_bind_q.test | 10 | 0.000825s | 0.000803s | 0.000830s | byte equality observed |
| mp_clear.test | 10 | 0.000807s | 0.000820s | 0.000813s | byte equality observed |
| mp_clear_2.test | 10 | 0.000362s | 0.000362s | 0.000804s | byte equality observed |
| mp_compose.test | 10 | 0.000804s | 0.000818s | 0.000817s | byte equality observed |
| mp_cond.test | 10 | 0.000792s | 0.000819s | 0.000811s | byte equality observed |
| mp_cond_sf.test | 10 | 0.000810s | 0.000806s | 0.000825s | byte equality observed |
| mp_contains.test | 10 | 0.000813s | 0.000802s | 0.000807s | byte equality observed |
| mp_copy_if.test | 10 | 0.000822s | 0.000809s | 0.000812s | byte equality observed |
| mp_copy_if_q.test | 10 | 0.000826s | 0.000799s | 0.000792s | byte equality observed |
| mp_count.test | 10 | 0.000824s | 0.000812s | 0.000798s | byte equality observed |
| mp_count_if.test | 10 | 0.000791s | 0.000807s | 0.000789s | byte equality observed |
| mp_count_if_q.test | 10 | 0.000811s | 0.000815s | 0.000808s | byte equality observed |
| mp_defer.test | 10 | 0.000814s | 0.000809s | 0.000816s | byte equality observed |
| mp_drop.test | 10 | 0.000797s | 0.000799s | 0.000810s | byte equality observed |
| mp_drop_2.test | 10 | 0.000369s | 0.000359s | 0.000805s | byte equality observed |
| mp_empty.test | 10 | 0.000808s | 0.000827s | 0.000807s | byte equality observed |
| mp_empty_2.test | 10 | 0.000358s | 0.000367s | 0.000768s | byte equality observed |
| mp_erase.test | 10 | 0.000817s | 0.000818s | 0.000808s | byte equality observed |
| mp_erase_2.test | 10 | 0.000360s | 0.000357s | 0.000816s | byte equality observed |
| mp_eval_if.test | 10 | 0.000807s | 0.000795s | 0.000810s | byte equality observed |
| mp_eval_if_not.test | 10 | 0.000818s | 0.000808s | 0.000814s | byte equality observed |
| mp_eval_if_sf.test | 10 | 0.000795s | 0.000822s | 0.000811s | byte equality observed |
| mp_eval_or.test | 10 | 0.000785s | 0.000838s | 0.000829s | byte equality observed |
| mp_fill.test | 10 | 0.000807s | 0.000812s | 0.000810s | byte equality observed |
| mp_fill_2.test | 10 | 0.000364s | 0.000359s | 0.000785s | byte equality observed |
| mp_filter.test | 10 | 0.000818s | 0.000801s | 0.000791s | byte equality observed |
| mp_find.test | 10 | 0.000828s | 0.000815s | 0.000801s | byte equality observed |
| mp_find_if.test | 10 | 0.000824s | 0.000816s | 0.000790s | byte equality observed |
| mp_find_if_q.test | 10 | 0.000808s | 0.000841s | 0.000801s | byte equality observed |
| mp_flatten.test | 10 | 0.000819s | 0.000796s | 0.000820s | byte equality observed |
| mp_fold.test | 10 | 0.000828s | 0.000815s | 0.000811s | byte equality observed |
| mp_fold_q.test | 10 | 0.000793s | 0.000789s | 0.000812s | byte equality observed |
| mp_fold_q_sf.test | 10 | 0.000844s | 0.000811s | 0.000826s | byte equality observed |
| mp_for_each.test | 10 | 0.000835s | 0.000792s | 0.000802s | byte equality observed |
| mp_from_sequence.test | 10 | 0.000821s | 0.000792s | 0.000823s | byte equality observed |
| mp_from_sequence_2.test | 10 | 0.000806s | 0.000801s | 0.000819s | byte equality observed |
| mp_from_sequence_3.test | 10 | 0.000827s | 0.000826s | 0.000812s | byte equality observed |
| mp_front.test | 10 | 0.000808s | 0.000817s | 0.000832s | byte equality observed |
| mp_front_2.test | 10 | 0.000357s | 0.000357s | 0.000798s | byte equality observed |
| mp_identity.test | 10 | 0.000801s | 0.000821s | 0.000806s | byte equality observed |
| mp_if.test | 10 | 0.000813s | 0.000820s | 0.000865s | byte equality observed |
| mp_if_sf.test | 10 | 0.000823s | 0.000826s | 0.000840s | byte equality observed |
| mp_inherit.test | 10 | 0.000837s | 0.000813s | 0.000810s | byte equality observed |
| mp_insert.test | 10 | 0.000811s | 0.000819s | 0.000788s | byte equality observed |
| mp_insert_2.test | 10 | 0.000360s | 0.000368s | 0.000798s | byte equality observed |
| mp_intersperse.test | 10 | 0.000811s | 0.000793s | 0.000778s | byte equality observed |
| mp_invoke_q.test | 10 | 0.000811s | 0.000831s | 0.000783s | byte equality observed |
| mp_invoke_q_sf.test | 10 | 0.000796s | 0.000821s | 0.000795s | byte equality observed |
| mp_iota.test | 10 | 0.000825s | 0.000806s | 0.000799s | byte equality observed |
| mp_iota_2.test | 10 | 0.000810s | 0.000815s | 0.000804s | byte equality observed |
| mp_is_list.test | 10 | 0.000814s | 0.000833s | 0.000817s | byte equality observed |
| mp_is_map.test | 10 | 0.000791s | 0.000817s | 0.000846s | byte equality observed |
| mp_is_set.test | 10 | 0.000782s | 0.000828s | 0.000801s | byte equality observed |
| mp_is_value_list.test | 10 | 0.000798s | 0.000822s | 0.000800s | byte equality observed |
| mp_iterate.test | 10 | 0.000807s | 0.000793s | 0.000785s | byte equality observed |
| mp_join.test | 10 | 0.000804s | 0.000810s | 0.000809s | byte equality observed |
| mp_lambda.test | 10 | 0.000840s | 0.000815s | 0.000820s | byte equality observed |
| mp_less.test | 10 | 0.000807s | 0.000800s | 0.000840s | byte equality observed |
| mp_list_c.test | 10 | 0.000790s | 0.000791s | 0.000825s | byte equality observed |
| mp_list_v.test | 10 | 0.000364s | 0.000368s | 0.000818s | byte equality observed |
| mp_map_contains.test | 10 | 0.000797s | 0.000814s | 0.000805s | byte equality observed |
| mp_map_erase.test | 10 | 0.000790s | 0.000845s | 0.000842s | byte equality observed |
| mp_map_find.test | 10 | 0.000833s | 0.000816s | 0.000809s | byte equality observed |
| mp_map_find_2.test | 10 | 0.000799s | 0.000799s | 0.000842s | byte equality observed |
| mp_map_find_3.test | 10 | 0.000796s | 0.000797s | 0.000817s | byte equality observed |
| mp_map_find_4.test | 10 | 0.000806s | 0.000812s | 0.000767s | byte equality observed |
| mp_map_insert.test | 10 | 0.000811s | 0.000847s | 0.000797s | byte equality observed |
| mp_map_keys.test | 10 | 0.000826s | 0.000839s | 0.000788s | byte equality observed |
| mp_map_replace.test | 10 | 0.000825s | 0.000828s | 0.000802s | byte equality observed |
| mp_map_update.test | 10 | 0.000822s | 0.000788s | 0.000812s | byte equality observed |
| mp_map_update_q.test | 10 | 0.000809s | 0.000819s | 0.000824s | byte equality observed |
| mp_max.test | 10 | 0.000816s | 0.000807s | 0.000823s | byte equality observed |
| mp_max_element.test | 10 | 0.000801s | 0.000793s | 0.000802s | byte equality observed |
| mp_max_element_2.test | 10 | 0.000357s | 0.000361s | 0.000801s | byte equality observed |
| mp_max_element_q.test | 10 | 0.000811s | 0.000807s | 0.000803s | byte equality observed |
| mp_max_element_q_2.test | 10 | 0.000361s | 0.000353s | 0.000800s | byte equality observed |
| mp_min.test | 10 | 0.000813s | 0.000789s | 0.000826s | byte equality observed |
| mp_min_element.test | 10 | 0.000802s | 0.000805s | 0.000804s | byte equality observed |
| mp_min_element_2.test | 10 | 0.000361s | 0.000363s | 0.000815s | byte equality observed |
| mp_min_element_q.test | 10 | 0.000802s | 0.000803s | 0.000793s | byte equality observed |
| mp_min_element_q_2.test | 10 | 0.000365s | 0.000351s | 0.000822s | byte equality observed |
| mp_none_of.test | 10 | 0.000808s | 0.000809s | 0.000789s | byte equality observed |
| mp_none_of_q.test | 10 | 0.000809s | 0.000803s | 0.000790s | byte equality observed |
| mp_not_fn.test | 10 | 0.000801s | 0.000806s | 0.000826s | byte equality observed |
| mp_nth_element.test | 10 | 0.000796s | 0.000813s | 0.000793s | byte equality observed |
| mp_nth_element_q.test | 10 | 0.000820s | 0.000828s | 0.000798s | byte equality observed |
| mp_or.test | 10 | 0.000809s | 0.000812s | 0.000808s | byte equality observed |
| mp_pairwise_fold.test | 10 | 0.000828s | 0.000809s | 0.000839s | byte equality observed |
| mp_pairwise_fold_q.test | 10 | 0.000807s | 0.000809s | 0.000846s | byte equality observed |
| mp_partial_sum.test | 10 | 0.000811s | 0.000842s | 0.000806s | byte equality observed |
| mp_partition.test | 10 | 0.000827s | 0.000816s | 0.000812s | byte equality observed |
| mp_partition_q.test | 10 | 0.000796s | 0.000828s | 0.000831s | byte equality observed |
| mp_plus.test | 10 | 0.000788s | 0.000794s | 0.000809s | byte equality observed |
| mp_pop_back.test | 10 | 0.000819s | 0.000807s | 0.000800s | byte equality observed |
| mp_pop_back_2.test | 10 | 0.000364s | 0.000360s | 0.000784s | byte equality observed |
| mp_pop_front.test | 10 | 0.000797s | 0.000808s | 0.000776s | byte equality observed |
| mp_pop_front_2.test | 10 | 0.000363s | 0.000364s | 0.000776s | byte equality observed |
| mp_power_set.test | 10 | 0.000803s | 0.000829s | 0.000813s | byte equality observed |
| mp_product.test | 10 | 0.000813s | 0.000810s | 0.000801s | byte equality observed |
| mp_push_back.test | 10 | 0.000800s | 0.000789s | 0.000811s | byte equality observed |
| mp_push_back_2.test | 10 | 0.000361s | 0.000364s | 0.000792s | byte equality observed |
| mp_push_front.test | 10 | 0.000811s | 0.000800s | 0.000822s | byte equality observed |
| mp_push_front_2.test | 10 | 0.000360s | 0.000359s | 0.000767s | byte equality observed |
| mp_quote.test | 10 | 0.000806s | 0.000806s | 0.000812s | byte equality observed |
| mp_quote_trait.test | 10 | 0.000807s | 0.000817s | 0.000794s | byte equality observed |
| mp_remove.test | 10 | 0.000799s | 0.000815s | 0.000820s | byte equality observed |
| mp_remove_if.test | 10 | 0.000792s | 0.000826s | 0.000820s | byte equality observed |
| mp_remove_if_q.test | 10 | 0.000811s | 0.000805s | 0.000819s | byte equality observed |
| mp_rename.test | 10 | 0.000809s | 0.000825s | 0.000838s | byte equality observed |
| mp_rename_2.test | 10 | 0.000361s | 0.000374s | 0.000788s | byte equality observed |
| mp_rename_v.test | 10 | 0.000359s | 0.000357s | 0.000792s | byte equality observed |
| mp_repeat.test | 10 | 0.000822s | 0.000814s | 0.000803s | byte equality observed |
| mp_repeat_2.test | 10 | 0.000352s | 0.000352s | 0.000788s | byte equality observed |
| mp_repeat_3.test | 10 | 0.000813s | 0.000778s | 0.000789s | byte equality observed |
| mp_replace.test | 10 | 0.000832s | 0.000814s | 0.000823s | byte equality observed |
| mp_replace_at.test | 10 | 0.000805s | 0.000793s | 0.000812s | byte equality observed |
| mp_replace_at_c.test | 10 | 0.000793s | 0.000806s | 0.000774s | byte equality observed |
| mp_replace_front.test | 10 | 0.000799s | 0.000807s | 0.000812s | byte equality observed |
| mp_replace_front_2.test | 10 | 0.000359s | 0.000360s | 0.000796s | byte equality observed |
| mp_replace_if.test | 10 | 0.000806s | 0.000808s | 0.000799s | byte equality observed |
| mp_replace_if_q.test | 10 | 0.000835s | 0.000811s | 0.000809s | byte equality observed |
| mp_replace_second.test | 10 | 0.000785s | 0.000811s | 0.000797s | byte equality observed |
| mp_replace_second_2.test | 10 | 0.000365s | 0.000359s | 0.000801s | byte equality observed |
| mp_replace_third.test | 10 | 0.000807s | 0.000810s | 0.000788s | byte equality observed |
| mp_replace_third_2.test | 10 | 0.000354s | 0.000355s | 0.000775s | byte equality observed |
| mp_reverse.test | 10 | 0.000816s | 0.000807s | 0.000797s | byte equality observed |
| mp_reverse_fold.test | 10 | 0.000822s | 0.000815s | 0.000805s | byte equality observed |
| mp_reverse_fold_q.test | 10 | 0.000826s | 0.000825s | 0.000781s | byte equality observed |
| mp_rotate_left.test | 10 | 0.000788s | 0.000798s | 0.000811s | byte equality observed |
| mp_rotate_right.test | 10 | 0.000815s | 0.000803s | 0.000805s | byte equality observed |
| mp_same.test | 10 | 0.000816s | 0.000821s | 0.000792s | byte equality observed |
| mp_second.test | 10 | 0.000798s | 0.000791s | 0.000814s | byte equality observed |
| mp_second_2.test | 10 | 0.000364s | 0.000360s | 0.000798s | byte equality observed |
| mp_set_contains.test | 10 | 0.000801s | 0.000819s | 0.000806s | byte equality observed |
| mp_set_difference.test | 10 | 0.000799s | 0.000830s | 0.000813s | byte equality observed |
| mp_set_difference_sf.test | 10 | 0.000808s | 0.000788s | 0.000817s | byte equality observed |
| mp_set_intersection.test | 10 | 0.000796s | 0.000833s | 0.000802s | byte equality observed |
| mp_set_intersection_sf.test | 10 | 0.000810s | 0.000805s | 0.000799s | byte equality observed |
| mp_set_push_back.test | 10 | 0.000789s | 0.000797s | 0.000803s | byte equality observed |
| mp_set_push_front.test | 10 | 0.000806s | 0.000814s | 0.000803s | byte equality observed |
| mp_set_union.test | 10 | 0.000785s | 0.000823s | 0.000796s | byte equality observed |
| mp_set_union_sf.test | 10 | 0.000795s | 0.000817s | 0.000827s | byte equality observed |
| mp_similar.test | 10 | 0.000798s | 0.000818s | 0.000828s | byte equality observed |
| mp_size.test | 10 | 0.000797s | 0.000796s | 0.000808s | byte equality observed |
| mp_size_2.test | 10 | 0.000368s | 0.000364s | 0.000784s | byte equality observed |
| mp_slice.test | 10 | 0.000811s | 0.000816s | 0.000790s | byte equality observed |
| mp_slice_2.test | 10 | 0.000360s | 0.000360s | 0.000779s | byte equality observed |
| mp_sliding_fold.test | 10 | 0.000817s | 0.000826s | 0.000805s | byte equality observed |
| mp_sliding_fold_q.test | 10 | 0.000819s | 0.000813s | 0.000804s | byte equality observed |
| mp_sort.test | 10 | 0.000821s | 0.000831s | 0.000803s | byte equality observed |
| mp_sort_q.test | 10 | 0.000836s | 0.000814s | 0.000833s | byte equality observed |
| mp_split.test | 10 | 0.000819s | 0.000815s | 0.000818s | byte equality observed |
| mp_starts_with.test | 10 | 0.000818s | 0.000790s | 0.000796s | byte equality observed |
| mp_starts_with_sf.test | 10 | 0.000808s | 0.000827s | 0.000814s | byte equality observed |
| mp_take.test | 10 | 0.000815s | 0.000823s | 0.000824s | byte equality observed |
| mp_take_2.test | 10 | 0.000363s | 0.000359s | 0.000791s | byte equality observed |
| mp_third.test | 10 | 0.000794s | 0.000790s | 0.000806s | byte equality observed |
| mp_third_2.test | 10 | 0.000359s | 0.000357s | 0.000786s | byte equality observed |
| mp_transform.test | 10 | 0.000820s | 0.000782s | 0.000793s | byte equality observed |
| mp_transform_2.test | 10 | 0.000796s | 0.000805s | 0.000797s | byte equality observed |
| mp_transform_front.test | 10 | 0.000789s | 0.000801s | 0.000792s | byte equality observed |
| mp_transform_front_2.test | 10 | 0.000364s | 0.000358s | 0.000797s | byte equality observed |
| mp_transform_if.test | 10 | 0.000818s | 0.000795s | 0.000807s | byte equality observed |
| mp_transform_if_q.test | 10 | 0.000797s | 0.000794s | 0.000820s | byte equality observed |
| mp_transform_q.test | 10 | 0.000813s | 0.000826s | 0.000813s | byte equality observed |
| mp_transform_q_2.test | 10 | 0.000813s | 0.000789s | 0.000807s | byte equality observed |
| mp_transform_second.test | 10 | 0.000801s | 0.000792s | 0.000813s | byte equality observed |
| mp_transform_second_2.test | 10 | 0.000362s | 0.000364s | 0.000786s | byte equality observed |
| mp_transform_sf.test | 10 | 0.000821s | 0.000811s | 0.000781s | byte equality observed |
| mp_transform_third.test | 10 | 0.000804s | 0.000814s | 0.000806s | byte equality observed |
| mp_transform_third_2.test | 10 | 0.000358s | 0.000354s | 0.000800s | byte equality observed |
| mp_unique.test | 10 | 0.000804s | 0.000798s | 0.000803s | byte equality observed |
| mp_unique_if.test | 10 | 0.000800s | 0.000801s | 0.000834s | byte equality observed |
| mp_unique_if_q.test | 10 | 0.000813s | 0.000811s | 0.000815s | byte equality observed |
| mp_valid.test | 10 | 0.000801s | 0.000813s | 0.000808s | byte equality observed |
| mp_valid_and_true.test | 10 | 0.000793s | 0.000820s | 0.000789s | byte equality observed |
| mp_value.test | 10 | 0.000365s | 0.000360s | 0.000765s | byte equality observed |
| mp_with_index.test | 10 | 0.001105s | 0.001066s | 0.001032s | byte equality observed |
| mp_with_index_cx.test | 10 | 0.000362s | 0.000364s | 0.000787s | byte equality observed |
| mpl.test | 10 | 0.000808s | 0.000819s | 0.000836s | byte equality observed |
| mpl_list.test | 10 | 0.000808s | 0.000835s | 0.000787s | byte equality observed |
| mpl_tuple.test | 10 | 0.000814s | 0.000815s | 0.000826s | byte equality observed |
| mpl_version.test | 10 | 0.000802s | 0.000807s | 0.000845s | byte equality observed |
| set_version.test | 10 | 0.000809s | 0.000816s | 0.000809s | byte equality observed |
| tuple_apply.test | 10 | 0.000803s | 0.000827s | 0.000834s | byte equality observed |
| tuple_for_each.test | 10 | 0.000816s | 0.000817s | 0.000799s | byte equality observed |
| tuple_transform.test | 10 | 0.000825s | 0.000822s | 0.000794s | byte equality observed |
| tuple_transform_2.test | 10 | 0.000802s | 0.000802s | 0.000794s | byte equality observed |
| tuple_version.test | 10 | 0.000796s | 0.000830s | 0.000802s | byte equality observed |
| utility_version.test | 10 | 0.000792s | 0.000832s | 0.000793s | byte equality observed |
| version.test | 10 | 0.000805s | 0.000800s | 0.000818s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44481767416).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
