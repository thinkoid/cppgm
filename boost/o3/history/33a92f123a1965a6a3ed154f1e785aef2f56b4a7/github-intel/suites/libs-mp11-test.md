# libs/mp11/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| mp11.test | COMPILE | 0.029218 | 0.059304 | 0.087208 | — | — | — |
| complex_h.test | COMPILE | 0.122640 | 0.245440 | 0.356041 | — | — | — |
| mp_size.test | RUN | 0.143090 | 0.846093 | 0.472054 | 0.001180 | 0.001273 | 0.001093 |
| mp_size_2.test | RUN | 0.012649 | 0.029448 | 0.039335 | 0.000492 | 0.000522 | 0.001137 |
| mp_empty.test | RUN | 0.134303 | 0.523958 | 0.438255 | 0.001130 | 0.001336 | 0.001055 |
| mp_empty_2.test | RUN | 0.012124 | 0.030359 | 0.042728 | 0.000435 | 0.000508 | 0.001114 |
| mp_assign.test | RUN | 0.162969 | 1.125752 | 0.590270 | 0.001208 | 0.001262 | 0.001054 |
| mp_assign_2.test | RUN | 0.012579 | 0.030175 | 0.039106 | 0.000489 | 0.000530 | 0.000870 |
| mp_clear.test | RUN | 0.137105 | 0.474769 | 0.446071 | 0.001225 | 0.001268 | 0.001182 |
| mp_clear_2.test | RUN | 0.013352 | 0.028543 | 0.040484 | 0.000400 | 0.000495 | 0.001060 |
| mp_front.test | RUN | 0.144913 | 0.764603 | 0.512625 | 0.001185 | 0.001268 | 0.001179 |
| mp_front_2.test | RUN | 0.009239 | 0.027918 | 0.041460 | 0.000456 | 0.000514 | 0.001151 |
| mp_pop_front.test | RUN | 0.144711 | 0.798369 | 0.507255 | 0.001041 | 0.001326 | 0.001043 |
| mp_pop_front_2.test | RUN | 0.012332 | 0.028956 | 0.043340 | 0.000455 | 0.000512 | 0.001104 |
| mp_second.test | RUN | 0.138321 | 0.506322 | 0.464798 | 0.000980 | 0.001359 | 0.001130 |
| mp_second_2.test | RUN | 0.011518 | 0.029800 | 0.042822 | 0.000485 | 0.000561 | 0.001150 |
| mp_third.test | RUN | 0.133890 | 0.462107 | 0.444574 | 0.001067 | 0.001193 | 0.001045 |
| mp_third_2.test | RUN | 0.012212 | 0.029988 | 0.043776 | 0.000465 | 0.000463 | 0.001045 |
| mp_push_front.test | RUN | 0.189745 | 1.704414 | 0.818788 | 0.001097 | 0.001247 | 0.001148 |
| mp_push_front_2.test | RUN | 0.012375 | 0.029761 | 0.042423 | 0.000438 | 0.000464 | 0.001074 |
| mp_push_back.test | RUN | 0.187544 | 1.709668 | 0.828923 | 0.001386 | 0.001197 | 0.000981 |
| mp_push_back_2.test | RUN | 0.011051 | 0.030137 | 0.042427 | 0.000470 | 0.000452 | 0.001113 |
| mp_rename.test | RUN | 0.173292 | 1.577481 | 0.710038 | 0.001147 | 0.001224 | 0.000964 |
| mp_rename_2.test | RUN | 0.013451 | 0.030126 | 0.042777 | 0.000417 | 0.000514 | 0.001070 |
| mp_append.test | RUN | 0.188230 | 1.767795 | 0.772894 | 0.001283 | 0.001465 | 0.001096 |
| mp_append_2.test | RUN | 0.411457 | 4.015711 | 1.069627 | 0.001300 | 0.001184 | 0.001087 |
| mp_append_3.test | RUN | 0.011550 | 0.029632 | 0.038665 | 0.000487 | 0.000468 | 0.001012 |
| mp_append_sf.test | RUN | 0.130929 | 0.428232 | 0.412786 | 0.001207 | 0.001360 | 0.001060 |
| mp_replace_front.test | RUN | 0.167115 | 1.267003 | 0.624159 | 0.001261 | 0.001214 | 0.001102 |
| mp_replace_front_2.test | RUN | 0.012220 | 0.029971 | 0.043028 | 0.000513 | 0.000487 | 0.001009 |
| mp_replace_second.test | RUN | 0.163779 | 0.805665 | 0.571016 | 0.001260 | 0.001320 | 0.001204 |
| mp_replace_second_2.test | RUN | 0.012379 | 0.029964 | 0.042541 | 0.000414 | 0.000538 | 0.001105 |
| mp_replace_third.test | RUN | 0.151375 | 0.667095 | 0.528916 | 0.001375 | 0.001202 | 0.001287 |
| mp_replace_third_2.test | RUN | 0.011601 | 0.028983 | 0.040656 | 0.000420 | 0.000448 | 0.001151 |
| mp_apply_q.test | RUN | 0.171701 | 1.546405 | 0.706862 | 0.001156 | 0.001172 | 0.001066 |
| mp_apply_q_sf.test | RUN | 0.135901 | 0.435030 | 0.421908 | 0.001188 | 0.001282 | 0.001314 |
| mp_is_list.test | RUN | 0.137560 | 0.524793 | 0.446391 | 0.001107 | 0.001194 | 0.001062 |
| mp_list_c.test | RUN | 0.148544 | 0.631631 | 0.489798 | 0.001275 | 0.001279 | 0.001129 |
| mp_transform_front.test | RUN | 0.162827 | 1.256143 | 0.616522 | 0.001165 | 0.001498 | 0.001079 |
| mp_transform_front_2.test | RUN | 0.012891 | 0.028833 | 0.042168 | 0.000505 | 0.000512 | 0.001057 |
| mp_transform_second.test | RUN | 0.155374 | 1.091526 | 0.575260 | 0.001195 | 0.001207 | 0.001023 |
| mp_transform_second_2.test | RUN | 0.012327 | 0.028677 | 0.041063 | 0.000478 | 0.000555 | 0.001033 |
| mp_transform_third.test | RUN | 0.146219 | 0.827816 | 0.490066 | 0.001260 | 0.001145 | 0.001067 |
| mp_transform_third_2.test | RUN | 0.013164 | 0.029975 | 0.041112 | 0.000469 | 0.000483 | 0.001006 |
| mp_list_v.test | RUN | 0.012517 | 0.029395 | 0.041011 | 0.000470 | 0.000487 | 0.001007 |
| mp_rename_v.test | RUN | 0.011464 | 0.029001 | 0.040880 | 0.000387 | 0.000491 | 0.000975 |
| mp_is_value_list.test | RUN | 0.132165 | 0.319413 | 0.414305 | 0.001297 | 0.001280 | 0.001242 |
| mp_transform.test | RUN | 0.343221 | 2.699555 | 1.331911 | 0.001344 | 0.001171 | 0.001265 |
| mp_transform_2.test | RUN | 0.132416 | 0.283834 | 0.379051 | 0.001221 | 0.001387 | 0.001041 |
| mp_transform_q.test | RUN | 0.327687 | 2.566493 | 1.291969 | 0.001204 | 0.001220 | 0.001152 |
| mp_transform_q_2.test | RUN | 0.340028 | 0.800372 | 1.624871 | 0.001154 | 0.001204 | 0.001271 |
| mp_transform_sf.test | RUN | 0.142545 | 0.443403 | 0.450672 | 0.001107 | 0.001229 | 0.001077 |
| mp_transform_if.test | RUN | 0.175896 | 1.268137 | 0.689907 | 0.001164 | 0.001334 | 0.001187 |
| mp_transform_if_q.test | RUN | 0.175983 | 1.275391 | 0.699167 | 0.001088 | 0.001064 | 0.001146 |
| mp_filter.test | RUN | 0.157188 | 0.745913 | 0.524515 | 0.000980 | 0.001271 | 0.001058 |
| mp_fill.test | RUN | 0.147645 | 0.554074 | 0.491973 | 0.001032 | 0.001315 | 0.001156 |
| mp_fill_2.test | RUN | 0.021539 | 0.043237 | 0.072960 | 0.000451 | 0.000462 | 0.001253 |
| mp_count.test | RUN | 0.280215 | 1.335608 | 0.775379 | 0.001265 | 0.001138 | 0.001162 |
| mp_count_if.test | RUN | 0.286074 | 1.365088 | 0.853048 | 0.001128 | 0.001173 | 0.001225 |
| mp_count_if_q.test | RUN | 0.147813 | 0.899443 | 0.488962 | 0.000963 | 0.001116 | 0.000884 |
| mp_contains.test | RUN | 0.140304 | 0.540817 | 0.455183 | 0.001044 | 0.001246 | 0.001082 |
| mp_starts_with.test | RUN | 0.143323 | 0.534686 | 0.464709 | 0.001208 | 0.001236 | 0.001202 |
| mp_starts_with_sf.test | RUN | 0.138503 | 0.447999 | 0.451324 | 0.001060 | 0.001191 | 0.001036 |
| mp_repeat.test | RUN | 0.213015 | 2.266831 | 0.900304 | 0.001095 | 0.001297 | 0.001089 |
| mp_repeat_2.test | RUN | 0.021880 | 0.046524 | 0.068890 | 0.000485 | 0.000490 | 0.001183 |
| mp_repeat_3.test | RUN | 0.179311 | 0.280462 | 0.432779 | 0.001160 | 0.001228 | 0.001174 |
| mp_product.test | RUN | 0.163796 | 1.373368 | 0.634716 | 0.001180 | 0.001280 | 0.001175 |
| mp_drop.test | RUN | 0.183888 | 1.689961 | 0.744641 | 0.001195 | 0.001346 | 0.001037 |
| mp_drop_2.test | RUN | 0.021483 | 0.047037 | 0.072299 | 0.000396 | 0.000505 | 0.001051 |
| mp_iota.test | RUN | 0.173233 | 1.438039 | 0.646785 | 0.001377 | 0.001332 | 0.001065 |
| mp_iota_2.test | RUN | 0.188767 | 1.734689 | 0.747410 | 0.001116 | 0.001290 | 0.001051 |
| mp_at.test | RUN | 0.152264 | 0.748295 | 0.527915 | 0.001083 | 0.001302 | 0.001029 |
| mp_at_2.test | RUN | 0.021702 | 0.045418 | 0.068842 | 0.000484 | 0.000482 | 0.001026 |
| mp_at_sf.test | RUN | 0.141338 | 0.452327 | 0.426561 | 0.001288 | 0.001362 | 0.000959 |
| mp_take.test | RUN | 0.247234 | 2.245842 | 0.890726 | 0.000954 | 0.001316 | 0.001155 |
| mp_take_2.test | RUN | 0.022034 | 0.046721 | 0.068698 | 0.000520 | 0.000489 | 0.000954 |
| mp_slice.test | RUN | 0.288067 | 2.284729 | 1.144402 | 0.001237 | 0.001238 | 0.001108 |
| mp_slice_2.test | RUN | 0.022250 | 0.046857 | 0.066786 | 0.000494 | 0.000495 | 0.001066 |
| mp_replace.test | RUN | 0.180522 | 1.145094 | 0.714198 | 0.001174 | 0.001404 | 0.001151 |
| mp_replace_if.test | RUN | 0.171942 | 1.010588 | 0.662172 | 0.001220 | 0.001270 | 0.001094 |
| mp_replace_if_q.test | RUN | 0.168383 | 1.015360 | 0.663109 | 0.001016 | 0.001479 | 0.001134 |
| mp_copy_if.test | RUN | 0.177756 | 1.420623 | 0.627307 | 0.001102 | 0.001374 | 0.001208 |
| mp_copy_if_q.test | RUN | 0.177168 | 1.419223 | 0.626759 | 0.001204 | 0.001334 | 0.001065 |
| mp_remove.test | RUN | 0.169395 | 0.943495 | 0.643736 | 0.001162 | 0.001349 | 0.001138 |
| mp_remove_if.test | RUN | 0.183593 | 1.503059 | 0.669207 | 0.001280 | 0.001252 | 0.001077 |
| mp_remove_if_q.test | RUN | 0.180329 | 1.500157 | 0.671838 | 0.001102 | 0.001310 | 0.001242 |
| mp_partition.test | RUN | 0.181762 | 1.417821 | 0.717747 | 0.001170 | 0.001289 | 0.001066 |
| mp_partition_q.test | RUN | 0.180535 | 1.413211 | 0.724642 | 0.001237 | 0.001195 | 0.001091 |
| mp_sort.test | RUN | 0.168608 | 1.011841 | 0.630835 | 0.001272 | 0.001418 | 0.001054 |
| mp_sort_q.test | RUN | 0.172716 | 1.011739 | 0.619529 | 0.001269 | 0.001225 | 0.001061 |
| mp_find.test | RUN | 0.166860 | 1.087063 | 0.533355 | 0.001192 | 0.001381 | 0.001026 |
| mp_find_if.test | RUN | 0.158214 | 0.993114 | 0.510816 | 0.001204 | 0.001331 | 0.001045 |
| mp_find_if_q.test | RUN | 0.170788 | 1.116898 | 0.628402 | 0.001155 | 0.001237 | 0.001135 |
| mp_reverse.test | RUN | 0.376411 | 2.969167 | 1.256167 | 0.001158 | 0.001333 | 0.001105 |
| mp_fold.test | RUN | 0.624648 | 2.324437 | 3.164954 | 0.001389 | 0.001302 | 0.000991 |
| mp_fold_q.test | RUN | 0.161669 | 0.989380 | 0.585277 | 0.001246 | 0.001246 | 0.001077 |
| mp_fold_q_sf.test | RUN | 0.139873 | 0.459062 | 0.446637 | 0.001300 | 0.001120 | 0.001138 |
| mp_reverse_fold.test | RUN | 0.297689 | 2.215076 | 0.888781 | 0.001348 | 0.001321 | 0.001164 |
| mp_reverse_fold_q.test | RUN | 0.165051 | 1.215144 | 0.646546 | 0.001180 | 0.001286 | 0.001042 |
| mp_unique.test | RUN | 0.165059 | 1.083863 | 0.616401 | 0.001282 | 0.001264 | 0.001027 |
| mp_unique_if.test | RUN | 0.314102 | 2.316234 | 0.995949 | 0.001110 | 0.001218 | 0.001142 |
| mp_unique_if_q.test | RUN | 0.256617 | 2.273220 | 0.804641 | 0.001185 | 0.001279 | 0.001361 |
| mp_all_of.test | RUN | 0.391003 | 1.198478 | 1.036308 | 0.001167 | 0.001238 | 0.001115 |
| mp_all_of_q.test | RUN | 0.142921 | 0.514734 | 0.472772 | 0.001087 | 0.001224 | 0.001091 |
| mp_any_of.test | RUN | 0.401461 | 1.246876 | 1.042499 | 0.001524 | 0.001227 | 0.001034 |
| mp_any_of_q.test | RUN | 0.144303 | 0.528624 | 0.464536 | 0.001277 | 0.001235 | 0.001145 |
| mp_none_of.test | RUN | 0.398714 | 1.258540 | 1.037509 | 0.001148 | 0.001139 | 0.001070 |
| mp_none_of_q.test | RUN | 0.143282 | 0.536534 | 0.430368 | 0.001272 | 0.001322 | 0.001022 |
| mp_replace_at.test | RUN | 0.178890 | 1.099240 | 0.675037 | 0.001135 | 0.001173 | 0.001081 |
| mp_replace_at_c.test | RUN | 0.181218 | 1.088359 | 0.697770 | 0.001269 | 0.001242 | 0.000913 |
| mp_for_each.test | RUN | 0.166673 | 0.712019 | 0.698702 | 0.001113 | 0.001154 | 0.000887 |
| mp_insert.test | RUN | 0.276836 | 2.232676 | 1.021943 | 0.001318 | 0.001115 | 0.001018 |
| mp_insert_2.test | RUN | 0.021732 | 0.043650 | 0.069023 | 0.000466 | 0.000391 | 0.001010 |
| mp_erase.test | RUN | 0.305252 | 2.399239 | 1.203388 | 0.001178 | 0.001259 | 0.001124 |
| mp_erase_2.test | RUN | 0.021165 | 0.043902 | 0.065029 | 0.000496 | 0.000483 | 0.001034 |
| mp_with_index.test | RUN | 0.394772 | 4.802656 | 2.585428 | 0.001566 | 0.001565 | 0.001269 |
| mp_with_index_cx.test | RUN | 0.002670 | 0.014344 | 0.019530 | 0.000450 | 0.000498 | 0.001023 |
| mp_from_sequence.test | RUN | 0.174109 | 1.243318 | 0.671802 | 0.001362 | 0.001281 | 0.000895 |
| mp_from_sequence_2.test | RUN | 0.189664 | 1.477527 | 0.731721 | 0.001147 | 0.001228 | 0.001084 |
| mp_from_sequence_3.test | RUN | 0.152602 | 0.637770 | 0.517086 | 0.001345 | 0.001224 | 0.001140 |
| mp_min_element.test | RUN | 0.153222 | 0.578966 | 0.463332 | 0.001102 | 0.001276 | 0.001116 |
| mp_min_element_2.test | RUN | 0.024085 | 0.046358 | 0.068701 | 0.000486 | 0.000520 | 0.001028 |
| mp_min_element_q.test | RUN | 0.148738 | 0.582847 | 0.481093 | 0.001123 | 0.001240 | 0.001077 |
| mp_min_element_q_2.test | RUN | 0.022114 | 0.045762 | 0.067236 | 0.000490 | 0.000492 | 0.000987 |
| mp_max_element.test | RUN | 0.150428 | 0.575416 | 0.476886 | 0.001211 | 0.001268 | 0.001073 |
| mp_max_element_2.test | RUN | 0.023987 | 0.045834 | 0.067845 | 0.000491 | 0.000443 | 0.001164 |
| mp_max_element_q.test | RUN | 0.148982 | 0.583205 | 0.490393 | 0.001163 | 0.001337 | 0.001195 |
| mp_max_element_q_2.test | RUN | 0.022431 | 0.045902 | 0.068818 | 0.000457 | 0.000520 | 0.001026 |
| mp_nth_element.test | RUN | 0.162345 | 0.831401 | 0.590535 | 0.001198 | 0.001190 | 0.001081 |
| mp_nth_element_q.test | RUN | 0.163121 | 0.808262 | 0.591035 | 0.001042 | 0.001191 | 0.001116 |
| mp_back.test | RUN | 0.159796 | 0.676124 | 0.559463 | 0.001224 | 0.001319 | 0.001064 |
| mp_back_2.test | RUN | 0.021763 | 0.044750 | 0.071228 | 0.000520 | 0.000428 | 0.001043 |
| mp_pop_back.test | RUN | 0.469874 | 4.616805 | 1.207454 | 0.001151 | 0.001271 | 0.001096 |
| mp_pop_back_2.test | RUN | 0.023345 | 0.046810 | 0.067143 | 0.000512 | 0.000451 | 0.001217 |
| mp_flatten.test | RUN | 0.190616 | 1.606157 | 0.799091 | 0.001186 | 0.001245 | 0.001103 |
| mp_rotate_left.test | RUN | 0.191703 | 1.739583 | 0.787151 | 0.001159 | 0.001159 | 0.001056 |
| mp_rotate_right.test | RUN | 0.192061 | 1.748487 | 0.798838 | 0.001252 | 0.001287 | 0.001183 |
| mp_power_set.test | RUN | 0.190424 | 1.657192 | 0.794570 | 0.001310 | 0.001301 | 0.001311 |
| mp_partial_sum.test | RUN | 0.257773 | 2.244943 | 0.920369 | 0.001274 | 0.001306 | 0.001031 |
| mp_iterate.test | RUN | 0.163751 | 0.654224 | 0.621502 | 0.001244 | 0.001311 | 0.001040 |
| mp_pairwise_fold.test | RUN | 0.193212 | 1.525999 | 0.813469 | 0.001207 | 0.001092 | 0.001107 |
| mp_pairwise_fold_q.test | RUN | 0.148793 | 0.438361 | 0.452298 | 0.001281 | 0.001338 | 0.001215 |
| mp_sliding_fold.test | RUN | 0.378077 | 2.972056 | 1.508674 | 0.001268 | 0.001282 | 0.001160 |
| mp_sliding_fold_q.test | RUN | 0.376663 | 2.966276 | 1.498505 | 0.001406 | 0.001281 | 0.001256 |
| mp_intersperse.test | RUN | 0.177270 | 1.092101 | 0.701645 | 0.001168 | 0.001334 | 0.001202 |
| mp_split.test | RUN | 0.263093 | 2.110878 | 0.991720 | 0.001054 | 0.001313 | 0.001038 |
| mp_join.test | RUN | 0.204284 | 1.767378 | 0.883414 | 0.001024 | 0.001256 | 0.001152 |
| integral.test | RUN | 0.152041 | 0.775003 | 0.537216 | 0.001248 | 0.001215 | 0.001265 |
| mp_value.test | RUN | 0.008883 | 0.025035 | 0.033367 | 0.000476 | 0.000490 | 0.001235 |
| mp_identity.test | RUN | 0.143377 | 0.709773 | 0.491536 | 0.001149 | 0.001425 | 0.001172 |
| mp_inherit.test | RUN | 0.138751 | 0.504794 | 0.447267 | 0.001123 | 0.001379 | 0.001110 |
| mp_if.test | RUN | 0.140479 | 0.575887 | 0.459412 | 0.001351 | 0.001143 | 0.001237 |
| mp_if_sf.test | RUN | 0.131758 | 0.421661 | 0.416116 | 0.001125 | 0.001149 | 0.001097 |
| mp_eval_if.test | RUN | 0.144277 | 0.618436 | 0.469097 | 0.001145 | 0.001153 | 0.001194 |
| mp_eval_if_sf.test | RUN | 0.136929 | 0.437838 | 0.426618 | 0.001163 | 0.001397 | 0.001054 |
| mp_valid.test | RUN | 0.138541 | 0.438418 | 0.427903 | 0.001312 | 0.001125 | 0.001290 |
| mp_defer.test | RUN | 0.148180 | 0.752690 | 0.522520 | 0.001169 | 0.001297 | 0.001092 |
| mp_quote.test | RUN | 0.152480 | 0.764738 | 0.532774 | 0.001216 | 0.001179 | 0.001182 |
| mp_invoke_q.test | RUN | 0.165601 | 0.990519 | 0.604231 | 0.001233 | 0.001384 | 0.001103 |
| mp_invoke_q_sf.test | RUN | 0.136422 | 0.430672 | 0.407125 | 0.001066 | 0.001227 | 0.001139 |
| mp_quote_trait.test | RUN | 0.146562 | 0.835225 | 0.524544 | 0.001071 | 0.001117 | 0.001193 |
| mp_cond.test | RUN | 0.138617 | 0.505747 | 0.453071 | 0.001142 | 0.001403 | 0.001034 |
| mp_cond_sf.test | RUN | 0.135838 | 0.430437 | 0.426653 | 0.001091 | 0.001223 | 0.001108 |
| mp_not_fn.test | RUN | 0.130874 | 0.437578 | 0.421825 | 0.001105 | 0.001319 | 0.001087 |
| mp_eval_if_not.test | RUN | 0.140255 | 0.617399 | 0.468034 | 0.001232 | 0.001333 | 0.001154 |
| mp_eval_or.test | RUN | 0.137385 | 0.324721 | 0.438845 | 0.001166 | 0.001168 | 0.001190 |
| mp_compose.test | RUN | 0.157193 | 1.028063 | 0.570388 | 0.001146 | 0.001248 | 0.001103 |
| mp_valid_and_true.test | RUN | 0.139071 | 0.524882 | 0.437998 | 0.001212 | 0.001224 | 0.001120 |
| mp_compose_sf.test | COMPILE | 0.031644 | 0.059804 | 0.100555 | — | — | — |
| integer_sequence.test | RUN | 0.170069 | 1.019681 | 0.644192 | 0.001238 | 0.001193 | 0.001171 |
| tuple_for_each.test | RUN | 0.137091 | 0.365181 | 0.457184 | 0.001228 | 0.001218 | 0.001111 |
| tuple_for_each_cx.test | COMPILE | 0.024835 | 0.053528 | 0.079114 | — | — | — |
| tuple_apply.test | RUN | 0.142291 | 0.363080 | 0.459786 | 0.001128 | 0.001390 | 0.001140 |
| tuple_apply_cx.test | COMPILE | 0.038189 | 0.071111 | 0.110332 | — | — | — |
| construct_from_tuple.test | RUN | 0.140804 | 0.387092 | 0.458734 | 0.001286 | 0.001253 | 0.001131 |
| construct_from_tuple_cx.test | COMPILE | 0.037371 | 0.072744 | 0.103484 | — | — | — |
| tuple_transform.test | RUN | 0.223360 | 0.804335 | 0.906131 | 0.001352 | 0.001185 | 0.001076 |
| tuple_transform_2.test | RUN | 0.190687 | 0.582519 | 0.817043 | 0.001147 | 0.001224 | 0.001103 |
| tuple_transform_cx.test | COMPILE | 0.033881 | 0.072139 | 0.104314 | — | — | — |
| mp_set_contains.test | RUN | 0.138616 | 0.527592 | 0.462435 | 0.001319 | 0.001252 | 0.001330 |
| mp_set_push_back.test | RUN | 0.187330 | 1.649757 | 0.806301 | 0.001120 | 0.001332 | 0.001183 |
| mp_set_push_front.test | RUN | 0.246281 | 1.986054 | 0.921086 | 0.001221 | 0.001132 | 0.001065 |
| mp_is_set.test | RUN | 0.140966 | 0.527673 | 0.475693 | 0.001122 | 0.001241 | 0.001206 |
| mp_set_union.test | RUN | 0.184497 | 1.411029 | 0.762532 | 0.001305 | 0.001237 | 0.001100 |
| mp_set_union_sf.test | RUN | 0.137571 | 0.417490 | 0.433715 | 0.001061 | 0.001147 | 0.001237 |
| mp_set_difference.test | RUN | 0.162890 | 1.097055 | 0.645612 | 0.001373 | 0.001185 | 0.001155 |
| mp_set_difference_sf.test | RUN | 0.134416 | 0.419312 | 0.431189 | 0.001224 | 0.001223 | 0.001139 |
| mp_set_intersection.test | RUN | 0.162262 | 1.084530 | 0.627541 | 0.001146 | 0.001158 | 0.001076 |
| mp_set_intersection_sf.test | RUN | 0.132874 | 0.421180 | 0.425609 | 0.001147 | 0.001411 | 0.001127 |
| mp_all.test | RUN | 0.143618 | 0.524267 | 0.466072 | 0.001215 | 0.001159 | 0.001259 |
| mp_all_2.test | RUN | 0.396971 | 1.119898 | 1.043366 | 0.001435 | 0.001383 | 0.001185 |
| mp_and.test | RUN | 0.145014 | 0.517839 | 0.449285 | 0.001362 | 0.001288 | 0.001162 |
| mp_any.test | RUN | 0.139695 | 0.525559 | 0.442233 | 0.001327 | 0.001336 | 0.001197 |
| mp_any_2.test | RUN | 0.395748 | 1.119602 | 1.054074 | 0.001303 | 0.001233 | 0.001027 |
| mp_or.test | RUN | 0.142379 | 0.513484 | 0.460069 | 0.001425 | 0.001153 | 0.001047 |
| mp_same.test | RUN | 0.277568 | 0.874741 | 0.722888 | 0.001114 | 0.001191 | 0.001123 |
| mp_plus.test | RUN | 0.145815 | 0.610780 | 0.506348 | 0.001147 | 0.001288 | 0.001127 |
| mp_less.test | RUN | 0.145600 | 0.522724 | 0.437439 | 0.001411 | 0.001262 | 0.001003 |
| mp_min.test | RUN | 0.142721 | 0.471219 | 0.448141 | 0.001178 | 0.001372 | 0.001059 |
| mp_max.test | RUN | 0.137966 | 0.537109 | 0.457036 | 0.001188 | 0.001289 | 0.001110 |
| mp_similar.test | RUN | 0.136943 | 0.522410 | 0.455937 | 0.001109 | 0.001168 | 0.001079 |
| mp_map_find.test | RUN | 0.166856 | 0.967436 | 0.608426 | 0.001442 | 0.001456 | 0.001135 |
| mp_map_find_2.test | RUN | 0.153172 | 0.361943 | 0.513669 | 0.001384 | 0.001203 | 0.001075 |
| mp_map_find_3.test | RUN | 0.159886 | 0.363491 | 0.510318 | 0.001172 | 0.001026 | 0.001089 |
| mp_map_find_4.test | RUN | 0.145287 | 0.339178 | 0.459579 | 0.001071 | 0.001219 | 0.001063 |
| mp_map_contains.test | RUN | 0.148923 | 0.537205 | 0.467684 | 0.001180 | 0.001196 | 0.001072 |
| mp_map_insert.test | RUN | 0.197963 | 1.856107 | 0.860878 | 0.001172 | 0.001289 | 0.001122 |
| mp_map_replace.test | RUN | 0.271313 | 2.106380 | 1.001577 | 0.001111 | 0.001342 | 0.001106 |
| mp_map_erase.test | RUN | 0.189261 | 1.576113 | 0.828638 | 0.001275 | 0.001194 | 0.001006 |
| mp_map_update.test | RUN | 0.168713 | 1.005148 | 0.635878 | 0.001345 | 0.001266 | 0.001120 |
| mp_map_update_q.test | RUN | 0.167642 | 1.009474 | 0.633603 | 0.001313 | 0.001274 | 0.001037 |
| mp_map_keys.test | RUN | 0.167931 | 0.901465 | 0.623463 | 0.001400 | 0.001273 | 0.001141 |
| mp_is_map.test | RUN | 0.150556 | 0.539618 | 0.491267 | 0.001229 | 0.001256 | 0.001248 |
| mp_bind.test | RUN | 0.192116 | 1.647477 | 0.753423 | 0.001214 | 0.001316 | 0.001280 |
| mp_bind_q.test | RUN | 0.170867 | 1.008136 | 0.604416 | 0.001165 | 0.001205 | 0.001302 |
| mp_bind_front.test | RUN | 0.162416 | 1.105126 | 0.587668 | 0.001183 | 0.001222 | 0.001260 |
| mp_bind_back.test | RUN | 0.160190 | 1.091681 | 0.580808 | 0.001128 | 0.001281 | 0.001170 |
| mp_lambda.test | RUN | 0.384779 | 3.315521 | 1.581552 | 0.001249 | 0.000892 | 0.000912 |
| mpl.test | RUN | 0.326035 | 0.854978 | 1.239785 | 0.001091 | 0.001193 | 0.000978 |
| mpl_list.test | RUN | 0.176775 | 0.637834 | 0.559686 | 0.001274 | 0.001109 | 0.001142 |
| mpl_tuple.test | RUN | 0.181921 | 0.633511 | 0.577970 | 0.001236 | 0.001180 | 0.001274 |
| version.test | RUN | 0.089029 | 0.228607 | 0.293068 | 0.001312 | 0.001312 | 0.001163 |
| mp11_version.test | RUN | 0.114100 | 0.261028 | 0.336318 | 0.001069 | 0.001269 | 0.000997 |
| list_version.test | RUN | 0.094447 | 0.237916 | 0.288193 | 0.001282 | 0.001106 | 0.001224 |
| algorithm_version.test | RUN | 0.105529 | 0.248038 | 0.305003 | 0.001207 | 0.001181 | 0.001141 |
| integral_version.test | RUN | 0.092370 | 0.226086 | 0.285274 | 0.001057 | 0.001180 | 0.001065 |
| utility_version.test | RUN | 0.093801 | 0.229535 | 0.284444 | 0.001134 | 0.001098 | 0.000983 |
| function_version.test | RUN | 0.098086 | 0.237184 | 0.291984 | 0.001042 | 0.001229 | 0.001385 |
| map_version.test | RUN | 0.104804 | 0.247383 | 0.318280 | 0.001018 | 0.001116 | 0.001090 |
| set_version.test | RUN | 0.095181 | 0.233453 | 0.290749 | 0.001216 | 0.001118 | 0.001011 |
| bind_version.test | RUN | 0.106191 | 0.248509 | 0.312897 | 0.001054 | 0.001238 | 0.001122 |
| integer_sequence_version.test | RUN | 0.090032 | 0.225300 | 0.268837 | 0.001153 | 0.001098 | 0.001081 |
| tuple_version.test | RUN | 0.104389 | 0.247223 | 0.252196 | 0.000907 | 0.001179 | 0.000762 |
| mpl_version.test | RUN | 0.078595 | 0.174124 | 0.222674 | 0.000896 | 0.000892 | 0.000794 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 1.002× | 1.004×, 1.001× | 0.996× |
| clang | 1.093× | 1.094×, 1.093× | 1.003× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1363 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/43801643681).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| algorithm_version.test | 10 | 0.000723s | 0.000722s | 0.000734s | byte equality observed |
| bind_version.test | 10 | 0.000718s | 0.000739s | 0.000723s | byte equality observed |
| construct_from_tuple.test | 10 | 0.000712s | 0.000745s | 0.000729s | byte equality observed |
| function_version.test | 10 | 0.000718s | 0.000725s | 0.000736s | byte equality observed |
| integer_sequence.test | 10 | 0.000743s | 0.000738s | 0.000759s | byte equality observed |
| integer_sequence_version.test | 10 | 0.000731s | 0.000741s | 0.000739s | byte equality observed |
| integral.test | 10 | 0.000744s | 0.000745s | 0.000741s | byte equality observed |
| integral_version.test | 10 | 0.000730s | 0.000733s | 0.000743s | byte equality observed |
| list_version.test | 10 | 0.000726s | 0.000724s | 0.000728s | byte equality observed |
| map_version.test | 10 | 0.000738s | 0.000721s | 0.000738s | byte equality observed |
| mp11_version.test | 10 | 0.000732s | 0.000722s | 0.000780s | byte equality observed |
| mp_all.test | 10 | 0.000730s | 0.000747s | 0.000773s | byte equality observed |
| mp_all_2.test | 10 | 0.000739s | 0.000713s | 0.000794s | byte equality observed |
| mp_all_of.test | 10 | 0.000723s | 0.000730s | 0.000819s | byte equality observed |
| mp_all_of_q.test | 10 | 0.000722s | 0.000726s | 0.000807s | byte equality observed |
| mp_and.test | 10 | 0.000725s | 0.000727s | 0.000793s | byte equality observed |
| mp_any.test | 10 | 0.000732s | 0.000735s | 0.000791s | byte equality observed |
| mp_any_2.test | 10 | 0.000729s | 0.000718s | 0.000819s | byte equality observed |
| mp_any_of.test | 10 | 0.000742s | 0.000726s | 0.000812s | byte equality observed |
| mp_any_of_q.test | 10 | 0.000740s | 0.000705s | 0.000820s | byte equality observed |
| mp_append.test | 10 | 0.000735s | 0.000733s | 0.000815s | byte equality observed |
| mp_append_2.test | 10 | 0.000757s | 0.000730s | 0.000791s | byte equality observed |
| mp_append_3.test | 10 | 0.000352s | 0.000318s | 0.000764s | byte equality observed |
| mp_append_sf.test | 10 | 0.000780s | 0.000726s | 0.000771s | byte equality observed |
| mp_apply_q.test | 10 | 0.000808s | 0.000729s | 0.000778s | byte equality observed |
| mp_apply_q_sf.test | 10 | 0.000790s | 0.000719s | 0.000794s | byte equality observed |
| mp_assign.test | 10 | 0.000793s | 0.000721s | 0.000768s | byte equality observed |
| mp_assign_2.test | 10 | 0.000367s | 0.000326s | 0.000768s | byte equality observed |
| mp_at.test | 10 | 0.000780s | 0.000715s | 0.000815s | byte equality observed |
| mp_at_2.test | 10 | 0.000360s | 0.000337s | 0.000830s | byte equality observed |
| mp_at_sf.test | 10 | 0.000801s | 0.000755s | 0.000787s | byte equality observed |
| mp_back.test | 10 | 0.000789s | 0.000737s | 0.000786s | byte equality observed |
| mp_back_2.test | 10 | 0.000363s | 0.000350s | 0.000775s | byte equality observed |
| mp_bind.test | 10 | 0.000786s | 0.000789s | 0.000799s | byte equality observed |
| mp_bind_back.test | 10 | 0.000804s | 0.000818s | 0.000819s | byte equality observed |
| mp_bind_front.test | 10 | 0.000806s | 0.000811s | 0.000770s | byte equality observed |
| mp_bind_q.test | 10 | 0.000810s | 0.000829s | 0.000794s | byte equality observed |
| mp_clear.test | 10 | 0.000801s | 0.000817s | 0.000791s | byte equality observed |
| mp_clear_2.test | 10 | 0.000355s | 0.000362s | 0.000781s | byte equality observed |
| mp_compose.test | 10 | 0.000797s | 0.000844s | 0.000790s | byte equality observed |
| mp_cond.test | 10 | 0.000795s | 0.000802s | 0.000785s | byte equality observed |
| mp_cond_sf.test | 10 | 0.000779s | 0.000812s | 0.000801s | byte equality observed |
| mp_contains.test | 10 | 0.000795s | 0.000812s | 0.000798s | byte equality observed |
| mp_copy_if.test | 10 | 0.000801s | 0.000811s | 0.000821s | byte equality observed |
| mp_copy_if_q.test | 10 | 0.000808s | 0.000797s | 0.000824s | byte equality observed |
| mp_count.test | 10 | 0.000794s | 0.000794s | 0.000830s | byte equality observed |
| mp_count_if.test | 10 | 0.000783s | 0.000791s | 0.000818s | byte equality observed |
| mp_count_if_q.test | 10 | 0.000821s | 0.000792s | 0.000827s | byte equality observed |
| mp_defer.test | 10 | 0.000801s | 0.000783s | 0.000776s | byte equality observed |
| mp_drop.test | 10 | 0.000806s | 0.000806s | 0.000779s | byte equality observed |
| mp_drop_2.test | 10 | 0.000356s | 0.000367s | 0.000783s | byte equality observed |
| mp_empty.test | 10 | 0.000807s | 0.000800s | 0.000777s | byte equality observed |
| mp_empty_2.test | 10 | 0.000351s | 0.000363s | 0.000770s | byte equality observed |
| mp_erase.test | 10 | 0.000819s | 0.000817s | 0.000785s | byte equality observed |
| mp_erase_2.test | 10 | 0.000352s | 0.000358s | 0.000748s | byte equality observed |
| mp_eval_if.test | 10 | 0.000778s | 0.000820s | 0.000773s | byte equality observed |
| mp_eval_if_not.test | 10 | 0.000786s | 0.000825s | 0.000763s | byte equality observed |
| mp_eval_if_sf.test | 10 | 0.000786s | 0.000806s | 0.000781s | byte equality observed |
| mp_eval_or.test | 10 | 0.000811s | 0.000794s | 0.000787s | byte equality observed |
| mp_fill.test | 10 | 0.000774s | 0.000802s | 0.000789s | byte equality observed |
| mp_fill_2.test | 10 | 0.000366s | 0.000359s | 0.000771s | byte equality observed |
| mp_filter.test | 10 | 0.000795s | 0.000827s | 0.000801s | byte equality observed |
| mp_find.test | 10 | 0.000788s | 0.000827s | 0.000801s | byte equality observed |
| mp_find_if.test | 10 | 0.000803s | 0.000803s | 0.000821s | byte equality observed |
| mp_find_if_q.test | 10 | 0.000804s | 0.000815s | 0.000812s | byte equality observed |
| mp_flatten.test | 10 | 0.000789s | 0.000802s | 0.000812s | byte equality observed |
| mp_fold.test | 10 | 0.000827s | 0.000832s | 0.000800s | byte equality observed |
| mp_fold_q.test | 10 | 0.000791s | 0.000824s | 0.000802s | byte equality observed |
| mp_fold_q_sf.test | 10 | 0.000795s | 0.000807s | 0.000776s | byte equality observed |
| mp_for_each.test | 10 | 0.000811s | 0.000799s | 0.000817s | byte equality observed |
| mp_from_sequence.test | 10 | 0.000822s | 0.000802s | 0.000801s | byte equality observed |
| mp_from_sequence_2.test | 10 | 0.000798s | 0.000802s | 0.000798s | byte equality observed |
| mp_from_sequence_3.test | 10 | 0.000790s | 0.000797s | 0.000793s | byte equality observed |
| mp_front.test | 10 | 0.000782s | 0.000803s | 0.000780s | byte equality observed |
| mp_front_2.test | 10 | 0.000356s | 0.000357s | 0.000759s | byte equality observed |
| mp_identity.test | 10 | 0.000813s | 0.000796s | 0.000816s | byte equality observed |
| mp_if.test | 10 | 0.000795s | 0.000796s | 0.000803s | byte equality observed |
| mp_if_sf.test | 10 | 0.000780s | 0.000805s | 0.000785s | byte equality observed |
| mp_inherit.test | 10 | 0.000802s | 0.000810s | 0.000793s | byte equality observed |
| mp_insert.test | 10 | 0.000799s | 0.000797s | 0.000779s | byte equality observed |
| mp_insert_2.test | 10 | 0.000354s | 0.000357s | 0.000755s | byte equality observed |
| mp_intersperse.test | 10 | 0.000799s | 0.000809s | 0.000775s | byte equality observed |
| mp_invoke_q.test | 10 | 0.000793s | 0.000837s | 0.000805s | byte equality observed |
| mp_invoke_q_sf.test | 10 | 0.000796s | 0.000799s | 0.000789s | byte equality observed |
| mp_iota.test | 10 | 0.000800s | 0.000827s | 0.000784s | byte equality observed |
| mp_iota_2.test | 10 | 0.000818s | 0.000815s | 0.000784s | byte equality observed |
| mp_is_list.test | 10 | 0.000816s | 0.000813s | 0.000789s | byte equality observed |
| mp_is_map.test | 10 | 0.000798s | 0.000816s | 0.000781s | byte equality observed |
| mp_is_set.test | 10 | 0.000795s | 0.000802s | 0.000790s | byte equality observed |
| mp_is_value_list.test | 10 | 0.000803s | 0.000794s | 0.000779s | byte equality observed |
| mp_iterate.test | 10 | 0.000816s | 0.000820s | 0.000779s | byte equality observed |
| mp_join.test | 10 | 0.000804s | 0.000814s | 0.000787s | byte equality observed |
| mp_lambda.test | 10 | 0.000823s | 0.000842s | 0.000775s | byte equality observed |
| mp_less.test | 10 | 0.000830s | 0.000811s | 0.000779s | byte equality observed |
| mp_list_c.test | 10 | 0.000797s | 0.000808s | 0.000787s | byte equality observed |
| mp_list_v.test | 10 | 0.000355s | 0.000361s | 0.000790s | byte equality observed |
| mp_map_contains.test | 10 | 0.000784s | 0.000794s | 0.000768s | byte equality observed |
| mp_map_erase.test | 10 | 0.000783s | 0.000807s | 0.000801s | byte equality observed |
| mp_map_find.test | 10 | 0.000791s | 0.000836s | 0.000785s | byte equality observed |
| mp_map_find_2.test | 10 | 0.000806s | 0.000822s | 0.000799s | byte equality observed |
| mp_map_find_3.test | 10 | 0.000815s | 0.000780s | 0.000766s | byte equality observed |
| mp_map_find_4.test | 10 | 0.000808s | 0.000798s | 0.000780s | byte equality observed |
| mp_map_insert.test | 10 | 0.000791s | 0.000835s | 0.000808s | byte equality observed |
| mp_map_keys.test | 10 | 0.000799s | 0.000840s | 0.000788s | byte equality observed |
| mp_map_replace.test | 10 | 0.000810s | 0.000826s | 0.000756s | byte equality observed |
| mp_map_update.test | 10 | 0.000791s | 0.000828s | 0.000793s | byte equality observed |
| mp_map_update_q.test | 10 | 0.000792s | 0.000829s | 0.000785s | byte equality observed |
| mp_max.test | 10 | 0.000790s | 0.000814s | 0.000824s | byte equality observed |
| mp_max_element.test | 10 | 0.000782s | 0.000809s | 0.000783s | byte equality observed |
| mp_max_element_2.test | 10 | 0.000356s | 0.000358s | 0.000774s | byte equality observed |
| mp_max_element_q.test | 10 | 0.000799s | 0.000801s | 0.000774s | byte equality observed |
| mp_max_element_q_2.test | 10 | 0.000351s | 0.000357s | 0.000795s | byte equality observed |
| mp_min.test | 10 | 0.000795s | 0.000798s | 0.000785s | byte equality observed |
| mp_min_element.test | 10 | 0.000795s | 0.000796s | 0.000798s | byte equality observed |
| mp_min_element_2.test | 10 | 0.000357s | 0.000362s | 0.000790s | byte equality observed |
| mp_min_element_q.test | 10 | 0.000800s | 0.000791s | 0.000789s | byte equality observed |
| mp_min_element_q_2.test | 10 | 0.000364s | 0.000352s | 0.000781s | byte equality observed |
| mp_none_of.test | 10 | 0.000801s | 0.000823s | 0.000792s | byte equality observed |
| mp_none_of_q.test | 10 | 0.000786s | 0.000785s | 0.000785s | byte equality observed |
| mp_not_fn.test | 10 | 0.000796s | 0.000807s | 0.000801s | byte equality observed |
| mp_nth_element.test | 10 | 0.000786s | 0.000800s | 0.000809s | byte equality observed |
| mp_nth_element_q.test | 10 | 0.000814s | 0.000825s | 0.000816s | byte equality observed |
| mp_or.test | 10 | 0.000809s | 0.000800s | 0.000804s | byte equality observed |
| mp_pairwise_fold.test | 10 | 0.000812s | 0.000807s | 0.000817s | byte equality observed |
| mp_pairwise_fold_q.test | 10 | 0.000831s | 0.000824s | 0.000792s | byte equality observed |
| mp_partial_sum.test | 10 | 0.000835s | 0.000827s | 0.000789s | byte equality observed |
| mp_partition.test | 10 | 0.000797s | 0.000822s | 0.000806s | byte equality observed |
| mp_partition_q.test | 10 | 0.000812s | 0.000829s | 0.000813s | byte equality observed |
| mp_plus.test | 10 | 0.000801s | 0.000807s | 0.000810s | byte equality observed |
| mp_pop_back.test | 10 | 0.000812s | 0.000792s | 0.000793s | byte equality observed |
| mp_pop_back_2.test | 10 | 0.000365s | 0.000362s | 0.000795s | byte equality observed |
| mp_pop_front.test | 10 | 0.000795s | 0.000796s | 0.000791s | byte equality observed |
| mp_pop_front_2.test | 10 | 0.000360s | 0.000352s | 0.000794s | byte equality observed |
| mp_power_set.test | 10 | 0.000798s | 0.000826s | 0.000779s | byte equality observed |
| mp_product.test | 10 | 0.000816s | 0.000793s | 0.000778s | byte equality observed |
| mp_push_back.test | 10 | 0.000791s | 0.000808s | 0.000777s | byte equality observed |
| mp_push_back_2.test | 10 | 0.000359s | 0.000359s | 0.000757s | byte equality observed |
| mp_push_front.test | 10 | 0.000796s | 0.000821s | 0.000777s | byte equality observed |
| mp_push_front_2.test | 10 | 0.000356s | 0.000356s | 0.000752s | byte equality observed |
| mp_quote.test | 10 | 0.000790s | 0.000827s | 0.000783s | byte equality observed |
| mp_quote_trait.test | 10 | 0.000789s | 0.000839s | 0.000802s | byte equality observed |
| mp_remove.test | 10 | 0.000795s | 0.000835s | 0.000838s | byte equality observed |
| mp_remove_if.test | 10 | 0.000806s | 0.000826s | 0.000812s | byte equality observed |
| mp_remove_if_q.test | 10 | 0.000797s | 0.000824s | 0.000808s | byte equality observed |
| mp_rename.test | 10 | 0.000810s | 0.000821s | 0.000829s | byte equality observed |
| mp_rename_2.test | 10 | 0.000360s | 0.000357s | 0.000754s | byte equality observed |
| mp_rename_v.test | 10 | 0.000357s | 0.000348s | 0.000763s | byte equality observed |
| mp_repeat.test | 10 | 0.000805s | 0.000816s | 0.000767s | byte equality observed |
| mp_repeat_2.test | 10 | 0.000358s | 0.000362s | 0.000774s | byte equality observed |
| mp_repeat_3.test | 10 | 0.000803s | 0.000806s | 0.000784s | byte equality observed |
| mp_replace.test | 10 | 0.000803s | 0.000781s | 0.000795s | byte equality observed |
| mp_replace_at.test | 10 | 0.000794s | 0.000799s | 0.000790s | byte equality observed |
| mp_replace_at_c.test | 10 | 0.000799s | 0.000843s | 0.000788s | byte equality observed |
| mp_replace_front.test | 10 | 0.000790s | 0.000818s | 0.000763s | byte equality observed |
| mp_replace_front_2.test | 10 | 0.000352s | 0.000361s | 0.000784s | byte equality observed |
| mp_replace_if.test | 10 | 0.000797s | 0.000803s | 0.000781s | byte equality observed |
| mp_replace_if_q.test | 10 | 0.000778s | 0.000800s | 0.000797s | byte equality observed |
| mp_replace_second.test | 10 | 0.000785s | 0.000793s | 0.000803s | byte equality observed |
| mp_replace_second_2.test | 10 | 0.000355s | 0.000355s | 0.000764s | byte equality observed |
| mp_replace_third.test | 10 | 0.000782s | 0.000795s | 0.000784s | byte equality observed |
| mp_replace_third_2.test | 10 | 0.000357s | 0.000358s | 0.000760s | byte equality observed |
| mp_reverse.test | 10 | 0.000809s | 0.000836s | 0.000759s | byte equality observed |
| mp_reverse_fold.test | 10 | 0.000811s | 0.000847s | 0.000781s | byte equality observed |
| mp_reverse_fold_q.test | 10 | 0.000791s | 0.000834s | 0.000803s | byte equality observed |
| mp_rotate_left.test | 10 | 0.000790s | 0.000833s | 0.000802s | byte equality observed |
| mp_rotate_right.test | 10 | 0.000789s | 0.000819s | 0.000806s | byte equality observed |
| mp_same.test | 10 | 0.000812s | 0.000807s | 0.000834s | byte equality observed |
| mp_second.test | 10 | 0.000790s | 0.000801s | 0.000803s | byte equality observed |
| mp_second_2.test | 10 | 0.000352s | 0.000359s | 0.000803s | byte equality observed |
| mp_set_contains.test | 10 | 0.000804s | 0.000807s | 0.000801s | byte equality observed |
| mp_set_difference.test | 10 | 0.000803s | 0.000822s | 0.000802s | byte equality observed |
| mp_set_difference_sf.test | 10 | 0.000806s | 0.000792s | 0.000834s | byte equality observed |
| mp_set_intersection.test | 10 | 0.000773s | 0.000812s | 0.000817s | byte equality observed |
| mp_set_intersection_sf.test | 10 | 0.000793s | 0.000796s | 0.000829s | byte equality observed |
| mp_set_push_back.test | 10 | 0.000787s | 0.000828s | 0.000815s | byte equality observed |
| mp_set_push_front.test | 10 | 0.000807s | 0.000803s | 0.000821s | byte equality observed |
| mp_set_union.test | 10 | 0.000814s | 0.000818s | 0.000809s | byte equality observed |
| mp_set_union_sf.test | 10 | 0.000808s | 0.000795s | 0.000781s | byte equality observed |
| mp_similar.test | 10 | 0.000798s | 0.000811s | 0.000797s | byte equality observed |
| mp_size.test | 10 | 0.000785s | 0.000807s | 0.000803s | byte equality observed |
| mp_size_2.test | 10 | 0.000353s | 0.000356s | 0.000774s | byte equality observed |
| mp_slice.test | 10 | 0.000808s | 0.000794s | 0.000774s | byte equality observed |
| mp_slice_2.test | 10 | 0.000357s | 0.000353s | 0.000779s | byte equality observed |
| mp_sliding_fold.test | 10 | 0.000808s | 0.000797s | 0.000802s | byte equality observed |
| mp_sliding_fold_q.test | 10 | 0.000830s | 0.000810s | 0.000784s | byte equality observed |
| mp_sort.test | 10 | 0.000818s | 0.000792s | 0.000817s | byte equality observed |
| mp_sort_q.test | 10 | 0.000829s | 0.000782s | 0.000812s | byte equality observed |
| mp_split.test | 10 | 0.000837s | 0.000810s | 0.000814s | byte equality observed |
| mp_starts_with.test | 10 | 0.000795s | 0.000821s | 0.000796s | byte equality observed |
| mp_starts_with_sf.test | 10 | 0.000798s | 0.000818s | 0.000759s | byte equality observed |
| mp_take.test | 10 | 0.000812s | 0.000814s | 0.000785s | byte equality observed |
| mp_take_2.test | 10 | 0.000356s | 0.000358s | 0.000768s | byte equality observed |
| mp_third.test | 10 | 0.000786s | 0.000798s | 0.000775s | byte equality observed |
| mp_third_2.test | 10 | 0.000354s | 0.000364s | 0.000776s | byte equality observed |
| mp_transform.test | 10 | 0.000803s | 0.000790s | 0.000792s | byte equality observed |
| mp_transform_2.test | 10 | 0.000790s | 0.000775s | 0.000783s | byte equality observed |
| mp_transform_front.test | 10 | 0.000778s | 0.000795s | 0.000776s | byte equality observed |
| mp_transform_front_2.test | 10 | 0.000363s | 0.000346s | 0.000794s | byte equality observed |
| mp_transform_if.test | 10 | 0.000803s | 0.000813s | 0.000798s | byte equality observed |
| mp_transform_if_q.test | 10 | 0.000796s | 0.000794s | 0.000783s | byte equality observed |
| mp_transform_q.test | 10 | 0.000830s | 0.000819s | 0.000801s | byte equality observed |
| mp_transform_q_2.test | 10 | 0.000801s | 0.000766s | 0.000769s | byte equality observed |
| mp_transform_second.test | 10 | 0.000799s | 0.000802s | 0.000810s | byte equality observed |
| mp_transform_second_2.test | 10 | 0.000366s | 0.000360s | 0.000805s | byte equality observed |
| mp_transform_sf.test | 10 | 0.000798s | 0.000776s | 0.000800s | byte equality observed |
| mp_transform_third.test | 10 | 0.000793s | 0.000820s | 0.000790s | byte equality observed |
| mp_transform_third_2.test | 10 | 0.000362s | 0.000357s | 0.000804s | byte equality observed |
| mp_unique.test | 10 | 0.000784s | 0.000792s | 0.000792s | byte equality observed |
| mp_unique_if.test | 10 | 0.000811s | 0.000833s | 0.000827s | byte equality observed |
| mp_unique_if_q.test | 10 | 0.000823s | 0.000819s | 0.000792s | byte equality observed |
| mp_valid.test | 10 | 0.000818s | 0.000841s | 0.000818s | byte equality observed |
| mp_valid_and_true.test | 10 | 0.000799s | 0.000811s | 0.000819s | byte equality observed |
| mp_value.test | 10 | 0.000364s | 0.000360s | 0.000802s | byte equality observed |
| mp_with_index.test | 10 | 0.001103s | 0.001068s | 0.000999s | byte equality observed |
| mp_with_index_cx.test | 10 | 0.000357s | 0.000360s | 0.000795s | byte equality observed |
| mpl.test | 10 | 0.000811s | 0.000813s | 0.000816s | byte equality observed |
| mpl_list.test | 10 | 0.000777s | 0.000809s | 0.000790s | byte equality observed |
| mpl_tuple.test | 10 | 0.000800s | 0.000823s | 0.000795s | byte equality observed |
| mpl_version.test | 10 | 0.000797s | 0.000830s | 0.000790s | byte equality observed |
| set_version.test | 10 | 0.000789s | 0.000823s | 0.000789s | byte equality observed |
| tuple_apply.test | 10 | 0.000815s | 0.000811s | 0.000772s | byte equality observed |
| tuple_for_each.test | 10 | 0.000774s | 0.000835s | 0.000820s | byte equality observed |
| tuple_transform.test | 10 | 0.000804s | 0.000813s | 0.000797s | byte equality observed |
| tuple_transform_2.test | 10 | 0.000794s | 0.000791s | 0.000786s | byte equality observed |
| tuple_version.test | 10 | 0.000815s | 0.000785s | 0.000800s | byte equality observed |
| utility_version.test | 10 | 0.000812s | 0.000803s | 0.000791s | byte equality observed |
| version.test | 10 | 0.000810s | 0.000786s | 0.000817s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/43801643681).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
