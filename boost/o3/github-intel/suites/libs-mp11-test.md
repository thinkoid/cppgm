# libs/mp11/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| mp11.test | COMPILE | 0.030034 | 0.060302 | 0.085718 | — | — | — |
| complex_h.test | COMPILE | 0.121535 | 0.257722 | 0.363825 | — | — | — |
| mp_size.test | RUN | 0.146177 | 0.868591 | 0.493469 | 0.001318 | 0.001334 | 0.001280 |
| mp_size_2.test | RUN | 0.012344 | 0.029946 | 0.042652 | 0.000504 | 0.000545 | 0.001129 |
| mp_empty.test | RUN | 0.140861 | 0.531615 | 0.445060 | 0.001115 | 0.001411 | 0.001228 |
| mp_empty_2.test | RUN | 0.012943 | 0.031258 | 0.045301 | 0.000502 | 0.000496 | 0.001122 |
| mp_assign.test | RUN | 0.162987 | 1.141687 | 0.609465 | 0.001256 | 0.001352 | 0.001117 |
| mp_assign_2.test | RUN | 0.012197 | 0.030615 | 0.043070 | 0.000477 | 0.000506 | 0.001142 |
| mp_clear.test | RUN | 0.135275 | 0.481474 | 0.463210 | 0.001301 | 0.001270 | 0.001136 |
| mp_clear_2.test | RUN | 0.012585 | 0.030103 | 0.044262 | 0.000477 | 0.000481 | 0.001127 |
| mp_front.test | RUN | 0.148710 | 0.763123 | 0.529701 | 0.001430 | 0.001326 | 0.001170 |
| mp_front_2.test | RUN | 0.012812 | 0.030165 | 0.044924 | 0.000421 | 0.000549 | 0.001084 |
| mp_pop_front.test | RUN | 0.149066 | 0.822035 | 0.525700 | 0.001211 | 0.001163 | 0.001159 |
| mp_pop_front_2.test | RUN | 0.011642 | 0.030068 | 0.041447 | 0.000490 | 0.000544 | 0.001148 |
| mp_second.test | RUN | 0.147280 | 0.513646 | 0.498114 | 0.001204 | 0.001063 | 0.001102 |
| mp_second_2.test | RUN | 0.012937 | 0.030209 | 0.044885 | 0.000391 | 0.000481 | 0.001360 |
| mp_third.test | RUN | 0.133245 | 0.470515 | 0.455734 | 0.001173 | 0.001269 | 0.001195 |
| mp_third_2.test | RUN | 0.012665 | 0.030484 | 0.044589 | 0.000487 | 0.000471 | 0.001158 |
| mp_push_front.test | RUN | 0.193020 | 1.753956 | 0.852459 | 0.001304 | 0.001351 | 0.001272 |
| mp_push_front_2.test | RUN | 0.013326 | 0.030692 | 0.042234 | 0.000486 | 0.000476 | 0.001209 |
| mp_push_back.test | RUN | 0.192211 | 1.770988 | 0.848192 | 0.001211 | 0.001370 | 0.001153 |
| mp_push_back_2.test | RUN | 0.011921 | 0.030998 | 0.045441 | 0.000489 | 0.000425 | 0.001193 |
| mp_rename.test | RUN | 0.182782 | 1.594311 | 0.711461 | 0.001108 | 0.001448 | 0.001184 |
| mp_rename_2.test | RUN | 0.012302 | 0.030469 | 0.045070 | 0.000478 | 0.000558 | 0.001229 |
| mp_append.test | RUN | 0.186866 | 1.827719 | 0.789631 | 0.001434 | 0.001360 | 0.001179 |
| mp_append_2.test | RUN | 0.421859 | 4.099569 | 1.076287 | 0.001128 | 0.001385 | 0.001144 |
| mp_append_3.test | RUN | 0.013104 | 0.030750 | 0.044563 | 0.000510 | 0.000529 | 0.001290 |
| mp_append_sf.test | RUN | 0.140059 | 0.429759 | 0.432076 | 0.001070 | 0.001374 | 0.001157 |
| mp_replace_front.test | RUN | 0.165760 | 1.283277 | 0.656430 | 0.001231 | 0.001340 | 0.001126 |
| mp_replace_front_2.test | RUN | 0.013555 | 0.030914 | 0.043738 | 0.000498 | 0.000532 | 0.001150 |
| mp_replace_second.test | RUN | 0.163185 | 0.827948 | 0.590747 | 0.001378 | 0.001324 | 0.001169 |
| mp_replace_second_2.test | RUN | 0.012448 | 0.031044 | 0.044882 | 0.000398 | 0.000570 | 0.001165 |
| mp_replace_third.test | RUN | 0.152307 | 0.676962 | 0.541047 | 0.001139 | 0.001236 | 0.001220 |
| mp_replace_third_2.test | RUN | 0.013512 | 0.029743 | 0.043822 | 0.000552 | 0.000415 | 0.001291 |
| mp_apply_q.test | RUN | 0.180466 | 1.581820 | 0.714469 | 0.001280 | 0.001333 | 0.001158 |
| mp_apply_q_sf.test | RUN | 0.134614 | 0.443423 | 0.442256 | 0.001423 | 0.001276 | 0.001288 |
| mp_is_list.test | RUN | 0.138491 | 0.529395 | 0.450772 | 0.001028 | 0.001240 | 0.001228 |
| mp_list_c.test | RUN | 0.146424 | 0.658318 | 0.515566 | 0.001374 | 0.001428 | 0.001246 |
| mp_transform_front.test | RUN | 0.162310 | 1.299641 | 0.619222 | 0.001203 | 0.001382 | 0.001146 |
| mp_transform_front_2.test | RUN | 0.013810 | 0.030751 | 0.044589 | 0.000463 | 0.000522 | 0.001155 |
| mp_transform_second.test | RUN | 0.153017 | 1.114392 | 0.582029 | 0.001402 | 0.001246 | 0.001132 |
| mp_transform_second_2.test | RUN | 0.012740 | 0.030638 | 0.044135 | 0.000454 | 0.000535 | 0.001073 |
| mp_transform_third.test | RUN | 0.150787 | 0.835360 | 0.525973 | 0.000837 | 0.001355 | 0.001246 |
| mp_transform_third_2.test | RUN | 0.010473 | 0.030458 | 0.042783 | 0.000478 | 0.000466 | 0.001146 |
| mp_list_v.test | RUN | 0.012684 | 0.030284 | 0.042572 | 0.000483 | 0.000543 | 0.001063 |
| mp_rename_v.test | RUN | 0.011600 | 0.031231 | 0.040163 | 0.000407 | 0.000571 | 0.001071 |
| mp_is_value_list.test | RUN | 0.132225 | 0.335411 | 0.421786 | 0.001398 | 0.001525 | 0.001206 |
| mp_transform.test | RUN | 0.342052 | 2.758364 | 1.358264 | 0.001355 | 0.001212 | 0.001261 |
| mp_transform_2.test | RUN | 0.126134 | 0.294343 | 0.391486 | 0.001103 | 0.001503 | 0.001086 |
| mp_transform_q.test | RUN | 0.328592 | 2.614577 | 1.315986 | 0.001293 | 0.001266 | 0.001104 |
| mp_transform_q_2.test | RUN | 0.344583 | 0.831741 | 1.678515 | 0.001220 | 0.001282 | 0.001288 |
| mp_transform_sf.test | RUN | 0.146154 | 0.455342 | 0.463743 | 0.001181 | 0.001425 | 0.001235 |
| mp_transform_if.test | RUN | 0.178888 | 1.302536 | 0.696028 | 0.001204 | 0.001529 | 0.001218 |
| mp_transform_if_q.test | RUN | 0.179087 | 1.302578 | 0.709719 | 0.001223 | 0.001205 | 0.001031 |
| mp_filter.test | RUN | 0.159170 | 0.754080 | 0.526236 | 0.001177 | 0.001440 | 0.001229 |
| mp_fill.test | RUN | 0.149656 | 0.570992 | 0.502413 | 0.001122 | 0.001361 | 0.001204 |
| mp_fill_2.test | RUN | 0.022705 | 0.046665 | 0.071098 | 0.000469 | 0.000531 | 0.001132 |
| mp_count.test | RUN | 0.288269 | 1.384184 | 0.789880 | 0.001274 | 0.001156 | 0.001099 |
| mp_count_if.test | RUN | 0.299396 | 1.413744 | 0.865592 | 0.001271 | 0.001184 | 0.001013 |
| mp_count_if_q.test | RUN | 0.151142 | 0.914863 | 0.509130 | 0.001354 | 0.001260 | 0.001303 |
| mp_contains.test | RUN | 0.144911 | 0.553591 | 0.466065 | 0.001280 | 0.001392 | 0.001037 |
| mp_starts_with.test | RUN | 0.150850 | 0.551484 | 0.477863 | 0.001223 | 0.001326 | 0.001244 |
| mp_starts_with_sf.test | RUN | 0.145126 | 0.462333 | 0.468133 | 0.001091 | 0.001390 | 0.001178 |
| mp_repeat.test | RUN | 0.220121 | 2.329708 | 0.895503 | 0.001295 | 0.001266 | 0.001115 |
| mp_repeat_2.test | RUN | 0.022678 | 0.048824 | 0.070686 | 0.000507 | 0.000535 | 0.001112 |
| mp_repeat_3.test | RUN | 0.185787 | 0.293830 | 0.435745 | 0.001354 | 0.001405 | 0.001231 |
| mp_product.test | RUN | 0.168721 | 1.399807 | 0.664242 | 0.001100 | 0.001366 | 0.001247 |
| mp_drop.test | RUN | 0.187495 | 1.760579 | 0.771788 | 0.001141 | 0.001405 | 0.001276 |
| mp_drop_2.test | RUN | 0.022628 | 0.048443 | 0.070768 | 0.000436 | 0.000562 | 0.001237 |
| mp_iota.test | RUN | 0.176045 | 1.459813 | 0.666210 | 0.001191 | 0.001266 | 0.001212 |
| mp_iota_2.test | RUN | 0.192116 | 1.773546 | 0.767837 | 0.001260 | 0.001360 | 0.001131 |
| mp_at.test | RUN | 0.151835 | 0.765811 | 0.539317 | 0.001161 | 0.001375 | 0.001218 |
| mp_at_2.test | RUN | 0.022531 | 0.047520 | 0.074175 | 0.000412 | 0.000580 | 0.001236 |
| mp_at_sf.test | RUN | 0.144403 | 0.463162 | 0.461033 | 0.001194 | 0.001440 | 0.001148 |
| mp_take.test | RUN | 0.253527 | 2.287028 | 0.921387 | 0.001317 | 0.001477 | 0.001337 |
| mp_take_2.test | RUN | 0.022618 | 0.048696 | 0.073879 | 0.000518 | 0.000461 | 0.001142 |
| mp_slice.test | RUN | 0.300885 | 2.347877 | 1.178204 | 0.001230 | 0.001351 | 0.001013 |
| mp_slice_2.test | RUN | 0.022121 | 0.047583 | 0.072275 | 0.000493 | 0.000552 | 0.001271 |
| mp_replace.test | RUN | 0.188351 | 1.186306 | 0.736620 | 0.001253 | 0.001291 | 0.001045 |
| mp_replace_if.test | RUN | 0.179366 | 1.026502 | 0.680459 | 0.001279 | 0.001290 | 0.001133 |
| mp_replace_if_q.test | RUN | 0.176762 | 1.042091 | 0.670136 | 0.001169 | 0.001422 | 0.001194 |
| mp_copy_if.test | RUN | 0.178268 | 1.452756 | 0.644963 | 0.001168 | 0.001235 | 0.001108 |
| mp_copy_if_q.test | RUN | 0.180414 | 1.467058 | 0.644775 | 0.001426 | 0.001399 | 0.001162 |
| mp_remove.test | RUN | 0.175636 | 0.980248 | 0.654672 | 0.001232 | 0.001448 | 0.001084 |
| mp_remove_if.test | RUN | 0.178437 | 1.550320 | 0.690442 | 0.001207 | 0.001470 | 0.001266 |
| mp_remove_if_q.test | RUN | 0.186385 | 1.540047 | 0.694548 | 0.001307 | 0.001388 | 0.001185 |
| mp_partition.test | RUN | 0.185349 | 1.466930 | 0.734806 | 0.001275 | 0.001346 | 0.001147 |
| mp_partition_q.test | RUN | 0.178403 | 1.456546 | 0.738244 | 0.001139 | 0.001600 | 0.001126 |
| mp_sort.test | RUN | 0.166708 | 1.045281 | 0.639838 | 0.001173 | 0.001420 | 0.001227 |
| mp_sort_q.test | RUN | 0.170714 | 1.027541 | 0.653812 | 0.001333 | 0.001372 | 0.001021 |
| mp_find.test | RUN | 0.167081 | 1.119109 | 0.552203 | 0.001198 | 0.001478 | 0.001240 |
| mp_find_if.test | RUN | 0.163693 | 1.012164 | 0.537261 | 0.001380 | 0.001254 | 0.001107 |
| mp_find_if_q.test | RUN | 0.182053 | 1.140961 | 0.654071 | 0.001189 | 0.001282 | 0.001260 |
| mp_reverse.test | RUN | 0.378823 | 3.091556 | 1.288535 | 0.001103 | 0.001450 | 0.001338 |
| mp_fold.test | RUN | 0.630886 | 2.388345 | 3.289125 | 0.001369 | 0.001426 | 0.001289 |
| mp_fold_q.test | RUN | 0.167772 | 1.025590 | 0.612417 | 0.001211 | 0.001250 | 0.001223 |
| mp_fold_q_sf.test | RUN | 0.142947 | 0.460955 | 0.481820 | 0.001095 | 0.001332 | 0.001262 |
| mp_reverse_fold.test | RUN | 0.302336 | 2.255062 | 0.909441 | 0.001315 | 0.001276 | 0.001157 |
| mp_reverse_fold_q.test | RUN | 0.168453 | 1.235678 | 0.657395 | 0.001153 | 0.001216 | 0.001219 |
| mp_unique.test | RUN | 0.168821 | 1.106426 | 0.644561 | 0.001153 | 0.001364 | 0.001284 |
| mp_unique_if.test | RUN | 0.317178 | 2.370087 | 1.032528 | 0.001199 | 0.001416 | 0.001272 |
| mp_unique_if_q.test | RUN | 0.272618 | 2.307320 | 0.843961 | 0.001257 | 0.001232 | 0.001368 |
| mp_all_of.test | RUN | 0.407915 | 1.253644 | 1.074278 | 0.001365 | 0.001344 | 0.001175 |
| mp_all_of_q.test | RUN | 0.143483 | 0.545484 | 0.470006 | 0.001221 | 0.001361 | 0.001340 |
| mp_any_of.test | RUN | 0.410263 | 1.326670 | 1.058641 | 0.001553 | 0.001431 | 0.001207 |
| mp_any_of_q.test | RUN | 0.147247 | 0.551635 | 0.491479 | 0.001430 | 0.001414 | 0.001305 |
| mp_none_of.test | RUN | 0.406859 | 1.334229 | 1.072542 | 0.001358 | 0.001483 | 0.001284 |
| mp_none_of_q.test | RUN | 0.148363 | 0.525928 | 0.449783 | 0.001343 | 0.001366 | 0.001080 |
| mp_replace_at.test | RUN | 0.179789 | 1.138984 | 0.695302 | 0.001195 | 0.001260 | 0.001358 |
| mp_replace_at_c.test | RUN | 0.184343 | 1.128871 | 0.727508 | 0.001330 | 0.001249 | 0.001393 |
| mp_for_each.test | RUN | 0.175620 | 0.716667 | 0.731734 | 0.001136 | 0.001240 | 0.001188 |
| mp_insert.test | RUN | 0.282019 | 2.315457 | 1.076966 | 0.001335 | 0.001209 | 0.001322 |
| mp_insert_2.test | RUN | 0.022701 | 0.042993 | 0.073941 | 0.000472 | 0.000476 | 0.001127 |
| mp_erase.test | RUN | 0.307102 | 2.454945 | 1.226722 | 0.001440 | 0.001424 | 0.001106 |
| mp_erase_2.test | RUN | 0.021091 | 0.048066 | 0.071214 | 0.000564 | 0.000545 | 0.001254 |
| mp_with_index.test | RUN | 0.407489 | 4.894975 | 2.707902 | 0.001695 | 0.001540 | 0.001520 |
| mp_with_index_cx.test | RUN | 0.003022 | 0.014820 | 0.023052 | 0.000494 | 0.000487 | 0.001258 |
| mp_from_sequence.test | RUN | 0.180907 | 1.292915 | 0.693895 | 0.001188 | 0.001312 | 0.001099 |
| mp_from_sequence_2.test | RUN | 0.187288 | 1.524989 | 0.777534 | 0.001107 | 0.001383 | 0.001257 |
| mp_from_sequence_3.test | RUN | 0.159308 | 0.657550 | 0.539040 | 0.001294 | 0.001380 | 0.001166 |
| mp_min_element.test | RUN | 0.153531 | 0.592767 | 0.500808 | 0.001185 | 0.001252 | 0.001352 |
| mp_min_element_2.test | RUN | 0.023257 | 0.048497 | 0.072191 | 0.000503 | 0.000507 | 0.001204 |
| mp_min_element_q.test | RUN | 0.154383 | 0.598937 | 0.492875 | 0.001137 | 0.001075 | 0.001319 |
| mp_min_element_q_2.test | RUN | 0.023809 | 0.047341 | 0.068486 | 0.000518 | 0.000526 | 0.001418 |
| mp_max_element.test | RUN | 0.154158 | 0.601218 | 0.484316 | 0.001198 | 0.001255 | 0.001129 |
| mp_max_element_2.test | RUN | 0.024992 | 0.046639 | 0.073494 | 0.000531 | 0.000495 | 0.001195 |
| mp_max_element_q.test | RUN | 0.151975 | 0.599467 | 0.492351 | 0.001298 | 0.001368 | 0.001305 |
| mp_max_element_q_2.test | RUN | 0.023144 | 0.046862 | 0.072328 | 0.000478 | 0.000507 | 0.001141 |
| mp_nth_element.test | RUN | 0.169044 | 0.852554 | 0.616085 | 0.001505 | 0.001182 | 0.001170 |
| mp_nth_element_q.test | RUN | 0.164903 | 0.836205 | 0.609805 | 0.001182 | 0.001196 | 0.001273 |
| mp_back.test | RUN | 0.165206 | 0.700091 | 0.560256 | 0.001221 | 0.001167 | 0.001181 |
| mp_back_2.test | RUN | 0.022086 | 0.046278 | 0.072962 | 0.000558 | 0.000515 | 0.001293 |
| mp_pop_back.test | RUN | 0.476013 | 4.692475 | 1.243614 | 0.001364 | 0.001226 | 0.001260 |
| mp_pop_back_2.test | RUN | 0.023428 | 0.048130 | 0.069730 | 0.000552 | 0.000511 | 0.001210 |
| mp_flatten.test | RUN | 0.198223 | 1.652225 | 0.823371 | 0.001193 | 0.001424 | 0.001312 |
| mp_rotate_left.test | RUN | 0.194525 | 1.792493 | 0.807038 | 0.001152 | 0.001341 | 0.001220 |
| mp_rotate_right.test | RUN | 0.198984 | 1.778239 | 0.815801 | 0.001345 | 0.001276 | 0.001280 |
| mp_power_set.test | RUN | 0.193399 | 1.705257 | 0.815668 | 0.001329 | 0.001394 | 0.001157 |
| mp_partial_sum.test | RUN | 0.262792 | 2.305880 | 0.942769 | 0.001372 | 0.001212 | 0.001259 |
| mp_iterate.test | RUN | 0.169356 | 0.670903 | 0.638208 | 0.001187 | 0.001288 | 0.001186 |
| mp_pairwise_fold.test | RUN | 0.197097 | 1.570074 | 0.836900 | 0.001278 | 0.001321 | 0.001251 |
| mp_pairwise_fold_q.test | RUN | 0.150715 | 0.442881 | 0.472072 | 0.001227 | 0.001392 | 0.001244 |
| mp_sliding_fold.test | RUN | 0.382836 | 3.039912 | 1.560425 | 0.001270 | 0.001342 | 0.001050 |
| mp_sliding_fold_q.test | RUN | 0.381252 | 3.052533 | 1.567983 | 0.001195 | 0.001288 | 0.001269 |
| mp_intersperse.test | RUN | 0.182466 | 1.122214 | 0.721555 | 0.001202 | 0.001353 | 0.001253 |
| mp_split.test | RUN | 0.270070 | 2.143353 | 0.996766 | 0.001209 | 0.001337 | 0.001162 |
| mp_join.test | RUN | 0.203127 | 1.807300 | 0.906488 | 0.001213 | 0.001285 | 0.001192 |
| integral.test | RUN | 0.154283 | 0.795338 | 0.529301 | 0.001331 | 0.001484 | 0.001270 |
| mp_value.test | RUN | 0.009174 | 0.025610 | 0.036122 | 0.000446 | 0.000444 | 0.001134 |
| mp_identity.test | RUN | 0.150482 | 0.730030 | 0.504600 | 0.001252 | 0.001362 | 0.001162 |
| mp_inherit.test | RUN | 0.144444 | 0.516376 | 0.469364 | 0.001155 | 0.001301 | 0.001218 |
| mp_if.test | RUN | 0.144836 | 0.586293 | 0.474259 | 0.001411 | 0.001364 | 0.001196 |
| mp_if_sf.test | RUN | 0.138292 | 0.429565 | 0.418493 | 0.000995 | 0.001320 | 0.001123 |
| mp_eval_if.test | RUN | 0.145652 | 0.627426 | 0.483913 | 0.001238 | 0.001192 | 0.001223 |
| mp_eval_if_sf.test | RUN | 0.135310 | 0.447462 | 0.431291 | 0.001241 | 0.001338 | 0.001173 |
| mp_valid.test | RUN | 0.142226 | 0.442530 | 0.445893 | 0.001212 | 0.001261 | 0.001205 |
| mp_defer.test | RUN | 0.150413 | 0.756981 | 0.535828 | 0.001213 | 0.001350 | 0.001354 |
| mp_quote.test | RUN | 0.153131 | 0.765788 | 0.542688 | 0.001318 | 0.001267 | 0.001152 |
| mp_invoke_q.test | RUN | 0.167593 | 1.017135 | 0.623308 | 0.001353 | 0.001278 | 0.001222 |
| mp_invoke_q_sf.test | RUN | 0.136708 | 0.447632 | 0.436328 | 0.001233 | 0.001385 | 0.001190 |
| mp_quote_trait.test | RUN | 0.152699 | 0.856165 | 0.532936 | 0.001352 | 0.001543 | 0.001255 |
| mp_cond.test | RUN | 0.142247 | 0.509126 | 0.461846 | 0.001214 | 0.001287 | 0.001232 |
| mp_cond_sf.test | RUN | 0.140965 | 0.446846 | 0.436402 | 0.001324 | 0.001174 | 0.001136 |
| mp_not_fn.test | RUN | 0.136851 | 0.449554 | 0.432248 | 0.001298 | 0.001455 | 0.001173 |
| mp_eval_if_not.test | RUN | 0.149188 | 0.634756 | 0.474825 | 0.001231 | 0.001252 | 0.001338 |
| mp_eval_or.test | RUN | 0.136439 | 0.333495 | 0.458697 | 0.001448 | 0.001201 | 0.001270 |
| mp_compose.test | RUN | 0.160447 | 1.045259 | 0.591735 | 0.001234 | 0.001281 | 0.001184 |
| mp_valid_and_true.test | RUN | 0.139026 | 0.540744 | 0.447808 | 0.001131 | 0.001373 | 0.001237 |
| mp_compose_sf.test | COMPILE | 0.031471 | 0.060970 | 0.103124 | — | — | — |
| integer_sequence.test | RUN | 0.174329 | 1.038868 | 0.665007 | 0.001238 | 0.001404 | 0.001176 |
| tuple_for_each.test | RUN | 0.143416 | 0.380950 | 0.469315 | 0.001307 | 0.001222 | 0.001350 |
| tuple_for_each_cx.test | COMPILE | 0.024995 | 0.052616 | 0.082168 | — | — | — |
| tuple_apply.test | RUN | 0.138875 | 0.378507 | 0.470260 | 0.001297 | 0.001234 | 0.001142 |
| tuple_apply_cx.test | COMPILE | 0.037806 | 0.075352 | 0.113402 | — | — | — |
| construct_from_tuple.test | RUN | 0.143004 | 0.406256 | 0.470193 | 0.001202 | 0.001260 | 0.001188 |
| construct_from_tuple_cx.test | COMPILE | 0.037026 | 0.075141 | 0.104907 | — | — | — |
| tuple_transform.test | RUN | 0.228505 | 0.821244 | 0.925202 | 0.001372 | 0.001363 | 0.001132 |
| tuple_transform_2.test | RUN | 0.196717 | 0.588402 | 0.847002 | 0.001287 | 0.001080 | 0.001345 |
| tuple_transform_cx.test | COMPILE | 0.033218 | 0.072976 | 0.102249 | — | — | — |
| mp_set_contains.test | RUN | 0.145823 | 0.542870 | 0.471740 | 0.001214 | 0.001332 | 0.001287 |
| mp_set_push_back.test | RUN | 0.196349 | 1.682516 | 0.818475 | 0.001181 | 0.001331 | 0.001302 |
| mp_set_push_front.test | RUN | 0.255688 | 2.047405 | 0.944784 | 0.001247 | 0.001387 | 0.001162 |
| mp_is_set.test | RUN | 0.145922 | 0.541387 | 0.476422 | 0.001297 | 0.001258 | 0.001362 |
| mp_set_union.test | RUN | 0.183479 | 1.436230 | 0.788787 | 0.001107 | 0.001430 | 0.001306 |
| mp_set_union_sf.test | RUN | 0.137568 | 0.434513 | 0.429283 | 0.001159 | 0.001275 | 0.001286 |
| mp_set_difference.test | RUN | 0.168180 | 1.123499 | 0.661871 | 0.001296 | 0.001339 | 0.001256 |
| mp_set_difference_sf.test | RUN | 0.135731 | 0.428639 | 0.437705 | 0.001171 | 0.001223 | 0.001090 |
| mp_set_intersection.test | RUN | 0.168832 | 1.116363 | 0.650821 | 0.001359 | 0.001242 | 0.001242 |
| mp_set_intersection_sf.test | RUN | 0.143240 | 0.429864 | 0.439951 | 0.001230 | 0.001205 | 0.001306 |
| mp_all.test | RUN | 0.145484 | 0.537211 | 0.466663 | 0.001341 | 0.001294 | 0.001345 |
| mp_all_2.test | RUN | 0.409513 | 1.171340 | 1.077072 | 0.001345 | 0.001447 | 0.001310 |
| mp_and.test | RUN | 0.143016 | 0.536590 | 0.451940 | 0.001388 | 0.001314 | 0.001163 |
| mp_any.test | RUN | 0.150475 | 0.523520 | 0.478682 | 0.001027 | 0.001353 | 0.001347 |
| mp_any_2.test | RUN | 0.408050 | 1.177968 | 1.043953 | 0.001233 | 0.001228 | 0.001316 |
| mp_or.test | RUN | 0.143773 | 0.524091 | 0.488313 | 0.001251 | 0.001390 | 0.001343 |
| mp_same.test | RUN | 0.279476 | 0.895333 | 0.753811 | 0.001245 | 0.001060 | 0.001339 |
| mp_plus.test | RUN | 0.146188 | 0.636516 | 0.506934 | 0.001146 | 0.001193 | 0.001091 |
| mp_less.test | RUN | 0.147057 | 0.517653 | 0.464241 | 0.001327 | 0.001185 | 0.001318 |
| mp_min.test | RUN | 0.138701 | 0.485174 | 0.455187 | 0.001488 | 0.001282 | 0.001165 |
| mp_max.test | RUN | 0.145776 | 0.536489 | 0.479870 | 0.001291 | 0.000884 | 0.001332 |
| mp_similar.test | RUN | 0.140692 | 0.526165 | 0.476380 | 0.001123 | 0.001316 | 0.001069 |
| mp_map_find.test | RUN | 0.168799 | 0.983471 | 0.629243 | 0.001417 | 0.001470 | 0.001205 |
| mp_map_find_2.test | RUN | 0.155750 | 0.377791 | 0.534812 | 0.001434 | 0.001226 | 0.001146 |
| mp_map_find_3.test | RUN | 0.156288 | 0.370888 | 0.523279 | 0.001150 | 0.001109 | 0.001137 |
| mp_map_find_4.test | RUN | 0.149152 | 0.348097 | 0.488942 | 0.001294 | 0.001222 | 0.001135 |
| mp_map_contains.test | RUN | 0.154111 | 0.538621 | 0.488524 | 0.001330 | 0.001240 | 0.001327 |
| mp_map_insert.test | RUN | 0.198864 | 1.888615 | 0.892566 | 0.001295 | 0.001442 | 0.001125 |
| mp_map_replace.test | RUN | 0.274098 | 2.140909 | 1.028827 | 0.001218 | 0.001393 | 0.001210 |
| mp_map_erase.test | RUN | 0.194034 | 1.589328 | 0.851688 | 0.001514 | 0.001229 | 0.001126 |
| mp_map_update.test | RUN | 0.172473 | 1.023898 | 0.659994 | 0.001483 | 0.001306 | 0.001138 |
| mp_map_update_q.test | RUN | 0.172782 | 1.027724 | 0.655868 | 0.001350 | 0.001243 | 0.001132 |
| mp_map_keys.test | RUN | 0.167920 | 0.902932 | 0.636456 | 0.001384 | 0.001167 | 0.001284 |
| mp_is_map.test | RUN | 0.150855 | 0.551412 | 0.509967 | 0.001339 | 0.001152 | 0.001044 |
| mp_bind.test | RUN | 0.190620 | 1.664654 | 0.769209 | 0.001511 | 0.001327 | 0.001227 |
| mp_bind_q.test | RUN | 0.167801 | 1.025810 | 0.612232 | 0.001344 | 0.001377 | 0.001159 |
| mp_bind_front.test | RUN | 0.163265 | 1.140822 | 0.584854 | 0.001297 | 0.001174 | 0.001228 |
| mp_bind_back.test | RUN | 0.169887 | 1.134668 | 0.585230 | 0.001598 | 0.001182 | 0.001236 |
| mp_lambda.test | RUN | 0.393615 | 3.350264 | 1.609626 | 0.001268 | 0.000883 | 0.001250 |
| mpl.test | RUN | 0.337166 | 0.861329 | 1.273749 | 0.001203 | 0.001243 | 0.001339 |
| mpl_list.test | RUN | 0.185429 | 0.662236 | 0.568876 | 0.001450 | 0.001369 | 0.001174 |
| mpl_tuple.test | RUN | 0.186523 | 0.654629 | 0.584892 | 0.001137 | 0.001168 | 0.001164 |
| version.test | RUN | 0.094182 | 0.231084 | 0.302823 | 0.001366 | 0.001346 | 0.001142 |
| mp11_version.test | RUN | 0.114731 | 0.266896 | 0.342212 | 0.001610 | 0.001406 | 0.001169 |
| list_version.test | RUN | 0.098102 | 0.235809 | 0.300546 | 0.001136 | 0.001204 | 0.001114 |
| algorithm_version.test | RUN | 0.104517 | 0.249805 | 0.322472 | 0.001112 | 0.001211 | 0.001174 |
| integral_version.test | RUN | 0.093272 | 0.232455 | 0.293772 | 0.001478 | 0.001284 | 0.001131 |
| utility_version.test | RUN | 0.092960 | 0.232649 | 0.296107 | 0.001410 | 0.001105 | 0.001145 |
| function_version.test | RUN | 0.097523 | 0.238277 | 0.296274 | 0.001184 | 0.001221 | 0.001255 |
| map_version.test | RUN | 0.105208 | 0.252296 | 0.326755 | 0.001206 | 0.001259 | 0.001364 |
| set_version.test | RUN | 0.095246 | 0.239459 | 0.302644 | 0.001399 | 0.001172 | 0.001272 |
| bind_version.test | RUN | 0.105498 | 0.252459 | 0.325406 | 0.001263 | 0.001093 | 0.001245 |
| integer_sequence_version.test | RUN | 0.094482 | 0.232625 | 0.242594 | 0.001318 | 0.001233 | 0.000911 |
| tuple_version.test | RUN | 0.105377 | 0.252417 | 0.324043 | 0.000923 | 0.001087 | 0.000890 |
| mpl_version.test | RUN | 0.082185 | 0.172838 | 0.332416 | 0.000974 | 0.000908 | 0.000823 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 1.000× | 0.997×, 1.003× | 1.002× |
| clang | 1.096× | 1.094×, 1.098× | 1.004× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1362 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/43822097733).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| algorithm_version.test | 10 | 0.000719s | 0.000710s | 0.000736s | byte equality observed |
| bind_version.test | 10 | 0.000751s | 0.000737s | 0.000749s | byte equality observed |
| construct_from_tuple.test | 10 | 0.000753s | 0.000731s | 0.000734s | byte equality observed |
| function_version.test | 10 | 0.000742s | 0.000734s | 0.000758s | byte equality observed |
| integer_sequence.test | 10 | 0.000749s | 0.000762s | 0.000733s | byte equality observed |
| integer_sequence_version.test | 10 | 0.000750s | 0.000720s | 0.000754s | byte equality observed |
| integral.test | 10 | 0.000747s | 0.000743s | 0.000740s | byte equality observed |
| integral_version.test | 10 | 0.000745s | 0.000736s | 0.000743s | byte equality observed |
| list_version.test | 10 | 0.000736s | 0.000722s | 0.000751s | byte equality observed |
| map_version.test | 10 | 0.000752s | 0.000743s | 0.000743s | byte equality observed |
| mp11_version.test | 10 | 0.000746s | 0.000744s | 0.000752s | byte equality observed |
| mp_all.test | 10 | 0.000750s | 0.000747s | 0.000791s | byte equality observed |
| mp_all_2.test | 10 | 0.000742s | 0.000751s | 0.000819s | byte equality observed |
| mp_all_of.test | 10 | 0.000753s | 0.000748s | 0.000811s | byte equality observed |
| mp_all_of_q.test | 10 | 0.000743s | 0.000758s | 0.000841s | byte equality observed |
| mp_and.test | 10 | 0.000753s | 0.000736s | 0.000799s | byte equality observed |
| mp_any.test | 10 | 0.000747s | 0.000753s | 0.000817s | byte equality observed |
| mp_any_2.test | 10 | 0.000745s | 0.000735s | 0.000820s | byte equality observed |
| mp_any_of.test | 10 | 0.000738s | 0.000759s | 0.000841s | byte equality observed |
| mp_any_of_q.test | 10 | 0.000747s | 0.000747s | 0.000819s | byte equality observed |
| mp_append.test | 10 | 0.000763s | 0.000745s | 0.000818s | byte equality observed |
| mp_append_2.test | 10 | 0.000761s | 0.000759s | 0.000843s | byte equality observed |
| mp_append_3.test | 10 | 0.000358s | 0.000349s | 0.000841s | byte equality observed |
| mp_append_sf.test | 10 | 0.000809s | 0.000754s | 0.000792s | byte equality observed |
| mp_apply_q.test | 10 | 0.000812s | 0.000732s | 0.000811s | byte equality observed |
| mp_apply_q_sf.test | 10 | 0.000811s | 0.000741s | 0.000805s | byte equality observed |
| mp_assign.test | 10 | 0.000797s | 0.000737s | 0.000791s | byte equality observed |
| mp_assign_2.test | 10 | 0.000365s | 0.000327s | 0.000807s | byte equality observed |
| mp_at.test | 10 | 0.000809s | 0.000729s | 0.000807s | byte equality observed |
| mp_at_2.test | 10 | 0.000364s | 0.000323s | 0.000785s | byte equality observed |
| mp_at_sf.test | 10 | 0.000818s | 0.000738s | 0.000807s | byte equality observed |
| mp_back.test | 10 | 0.000819s | 0.000738s | 0.000812s | byte equality observed |
| mp_back_2.test | 10 | 0.000363s | 0.000324s | 0.000788s | byte equality observed |
| mp_bind.test | 10 | 0.000822s | 0.000750s | 0.000799s | byte equality observed |
| mp_bind_back.test | 10 | 0.000806s | 0.000819s | 0.000794s | byte equality observed |
| mp_bind_front.test | 10 | 0.000815s | 0.000829s | 0.000815s | byte equality observed |
| mp_bind_q.test | 10 | 0.000789s | 0.000814s | 0.000780s | byte equality observed |
| mp_clear.test | 10 | 0.000810s | 0.000800s | 0.000811s | byte equality observed |
| mp_clear_2.test | 10 | 0.000361s | 0.000368s | 0.000791s | byte equality observed |
| mp_compose.test | 10 | 0.000814s | 0.000850s | 0.000809s | byte equality observed |
| mp_cond.test | 10 | 0.000806s | 0.000832s | 0.000820s | byte equality observed |
| mp_cond_sf.test | 10 | 0.000812s | 0.000828s | 0.000840s | byte equality observed |
| mp_contains.test | 10 | 0.000819s | 0.000815s | 0.000819s | byte equality observed |
| mp_copy_if.test | 10 | 0.000812s | 0.000834s | 0.000828s | byte equality observed |
| mp_copy_if_q.test | 10 | 0.000838s | 0.000818s | 0.000794s | byte equality observed |
| mp_count.test | 10 | 0.000803s | 0.000837s | 0.000805s | byte equality observed |
| mp_count_if.test | 10 | 0.000797s | 0.000816s | 0.000814s | byte equality observed |
| mp_count_if_q.test | 10 | 0.000801s | 0.000832s | 0.000805s | byte equality observed |
| mp_defer.test | 10 | 0.000810s | 0.000811s | 0.000833s | byte equality observed |
| mp_drop.test | 10 | 0.000800s | 0.000814s | 0.000813s | byte equality observed |
| mp_drop_2.test | 10 | 0.000360s | 0.000360s | 0.000792s | byte equality observed |
| mp_empty.test | 10 | 0.000801s | 0.000824s | 0.000814s | byte equality observed |
| mp_empty_2.test | 10 | 0.000363s | 0.000372s | 0.000759s | byte equality observed |
| mp_erase.test | 10 | 0.000819s | 0.000842s | 0.000791s | byte equality observed |
| mp_erase_2.test | 10 | 0.000363s | 0.000369s | 0.000800s | byte equality observed |
| mp_eval_if.test | 10 | 0.000810s | 0.000809s | 0.000820s | byte equality observed |
| mp_eval_if_not.test | 10 | 0.000817s | 0.000822s | 0.000813s | byte equality observed |
| mp_eval_if_sf.test | 10 | 0.000819s | 0.000791s | 0.000822s | byte equality observed |
| mp_eval_or.test | 10 | 0.000830s | 0.000791s | 0.000819s | byte equality observed |
| mp_fill.test | 10 | 0.000791s | 0.000820s | 0.000817s | byte equality observed |
| mp_fill_2.test | 10 | 0.000364s | 0.000360s | 0.000785s | byte equality observed |
| mp_filter.test | 10 | 0.000809s | 0.000818s | 0.000820s | byte equality observed |
| mp_find.test | 10 | 0.000812s | 0.000815s | 0.000842s | byte equality observed |
| mp_find_if.test | 10 | 0.000808s | 0.000842s | 0.000828s | byte equality observed |
| mp_find_if_q.test | 10 | 0.000816s | 0.000849s | 0.000788s | byte equality observed |
| mp_flatten.test | 10 | 0.000837s | 0.000836s | 0.000814s | byte equality observed |
| mp_fold.test | 10 | 0.000860s | 0.000833s | 0.000818s | byte equality observed |
| mp_fold_q.test | 10 | 0.000796s | 0.000785s | 0.000819s | byte equality observed |
| mp_fold_q_sf.test | 10 | 0.000814s | 0.000807s | 0.000826s | byte equality observed |
| mp_for_each.test | 10 | 0.000812s | 0.000808s | 0.000819s | byte equality observed |
| mp_from_sequence.test | 10 | 0.000810s | 0.000808s | 0.000820s | byte equality observed |
| mp_from_sequence_2.test | 10 | 0.000816s | 0.000827s | 0.000837s | byte equality observed |
| mp_from_sequence_3.test | 10 | 0.000817s | 0.000820s | 0.000842s | byte equality observed |
| mp_front.test | 10 | 0.000809s | 0.000805s | 0.000809s | byte equality observed |
| mp_front_2.test | 10 | 0.000365s | 0.000369s | 0.000788s | byte equality observed |
| mp_identity.test | 10 | 0.000818s | 0.000828s | 0.000794s | byte equality observed |
| mp_if.test | 10 | 0.000827s | 0.000832s | 0.000823s | byte equality observed |
| mp_if_sf.test | 10 | 0.000826s | 0.000824s | 0.000812s | byte equality observed |
| mp_inherit.test | 10 | 0.000827s | 0.000844s | 0.000798s | byte equality observed |
| mp_insert.test | 10 | 0.000832s | 0.000820s | 0.000801s | byte equality observed |
| mp_insert_2.test | 10 | 0.000366s | 0.000368s | 0.000776s | byte equality observed |
| mp_intersperse.test | 10 | 0.000813s | 0.000819s | 0.000786s | byte equality observed |
| mp_invoke_q.test | 10 | 0.000813s | 0.000836s | 0.000797s | byte equality observed |
| mp_invoke_q_sf.test | 10 | 0.000828s | 0.000828s | 0.000806s | byte equality observed |
| mp_iota.test | 10 | 0.000801s | 0.000828s | 0.000807s | byte equality observed |
| mp_iota_2.test | 10 | 0.000837s | 0.000831s | 0.000807s | byte equality observed |
| mp_is_list.test | 10 | 0.000841s | 0.000821s | 0.000825s | byte equality observed |
| mp_is_map.test | 10 | 0.000825s | 0.000834s | 0.000796s | byte equality observed |
| mp_is_set.test | 10 | 0.000828s | 0.000816s | 0.000813s | byte equality observed |
| mp_is_value_list.test | 10 | 0.000823s | 0.000807s | 0.000821s | byte equality observed |
| mp_iterate.test | 10 | 0.000824s | 0.000836s | 0.000828s | byte equality observed |
| mp_join.test | 10 | 0.000814s | 0.000825s | 0.000832s | byte equality observed |
| mp_lambda.test | 10 | 0.000848s | 0.000839s | 0.000818s | byte equality observed |
| mp_less.test | 10 | 0.000814s | 0.000837s | 0.000806s | byte equality observed |
| mp_list_c.test | 10 | 0.000803s | 0.000846s | 0.000829s | byte equality observed |
| mp_list_v.test | 10 | 0.000364s | 0.000364s | 0.000806s | byte equality observed |
| mp_map_contains.test | 10 | 0.000819s | 0.000787s | 0.000803s | byte equality observed |
| mp_map_erase.test | 10 | 0.000812s | 0.000809s | 0.000817s | byte equality observed |
| mp_map_find.test | 10 | 0.000821s | 0.000810s | 0.000815s | byte equality observed |
| mp_map_find_2.test | 10 | 0.000805s | 0.000786s | 0.000814s | byte equality observed |
| mp_map_find_3.test | 10 | 0.000806s | 0.000815s | 0.000810s | byte equality observed |
| mp_map_find_4.test | 10 | 0.000805s | 0.000792s | 0.000804s | byte equality observed |
| mp_map_insert.test | 10 | 0.000807s | 0.000821s | 0.000821s | byte equality observed |
| mp_map_keys.test | 10 | 0.000804s | 0.000843s | 0.000836s | byte equality observed |
| mp_map_replace.test | 10 | 0.000819s | 0.000823s | 0.000827s | byte equality observed |
| mp_map_update.test | 10 | 0.000822s | 0.000827s | 0.000819s | byte equality observed |
| mp_map_update_q.test | 10 | 0.000810s | 0.000819s | 0.000788s | byte equality observed |
| mp_max.test | 10 | 0.000802s | 0.000826s | 0.000822s | byte equality observed |
| mp_max_element.test | 10 | 0.000799s | 0.000811s | 0.000817s | byte equality observed |
| mp_max_element_2.test | 10 | 0.000363s | 0.000375s | 0.000835s | byte equality observed |
| mp_max_element_q.test | 10 | 0.000807s | 0.000823s | 0.000828s | byte equality observed |
| mp_max_element_q_2.test | 10 | 0.000358s | 0.000367s | 0.000815s | byte equality observed |
| mp_min.test | 10 | 0.000810s | 0.000827s | 0.000818s | byte equality observed |
| mp_min_element.test | 10 | 0.000813s | 0.000799s | 0.000805s | byte equality observed |
| mp_min_element_2.test | 10 | 0.000360s | 0.000375s | 0.000793s | byte equality observed |
| mp_min_element_q.test | 10 | 0.000794s | 0.000812s | 0.000818s | byte equality observed |
| mp_min_element_q_2.test | 10 | 0.000365s | 0.000363s | 0.000813s | byte equality observed |
| mp_none_of.test | 10 | 0.000823s | 0.000817s | 0.000812s | byte equality observed |
| mp_none_of_q.test | 10 | 0.000811s | 0.000800s | 0.000829s | byte equality observed |
| mp_not_fn.test | 10 | 0.000815s | 0.000825s | 0.000811s | byte equality observed |
| mp_nth_element.test | 10 | 0.000825s | 0.000818s | 0.000812s | byte equality observed |
| mp_nth_element_q.test | 10 | 0.000823s | 0.000814s | 0.000818s | byte equality observed |
| mp_or.test | 10 | 0.000811s | 0.000813s | 0.000810s | byte equality observed |
| mp_pairwise_fold.test | 10 | 0.000831s | 0.000789s | 0.000823s | byte equality observed |
| mp_pairwise_fold_q.test | 10 | 0.000813s | 0.000819s | 0.000824s | byte equality observed |
| mp_partial_sum.test | 10 | 0.000833s | 0.000789s | 0.000834s | byte equality observed |
| mp_partition.test | 10 | 0.000815s | 0.000807s | 0.000825s | byte equality observed |
| mp_partition_q.test | 10 | 0.000811s | 0.000830s | 0.000784s | byte equality observed |
| mp_plus.test | 10 | 0.000824s | 0.000820s | 0.000789s | byte equality observed |
| mp_pop_back.test | 10 | 0.000824s | 0.000800s | 0.000801s | byte equality observed |
| mp_pop_back_2.test | 10 | 0.000363s | 0.000370s | 0.000793s | byte equality observed |
| mp_pop_front.test | 10 | 0.000799s | 0.000799s | 0.000803s | byte equality observed |
| mp_pop_front_2.test | 10 | 0.000365s | 0.000374s | 0.000792s | byte equality observed |
| mp_power_set.test | 10 | 0.000816s | 0.000821s | 0.000790s | byte equality observed |
| mp_product.test | 10 | 0.000807s | 0.000858s | 0.000828s | byte equality observed |
| mp_push_back.test | 10 | 0.000822s | 0.000818s | 0.000824s | byte equality observed |
| mp_push_back_2.test | 10 | 0.000365s | 0.000366s | 0.000811s | byte equality observed |
| mp_push_front.test | 10 | 0.000829s | 0.000823s | 0.000786s | byte equality observed |
| mp_push_front_2.test | 10 | 0.000363s | 0.000366s | 0.000804s | byte equality observed |
| mp_quote.test | 10 | 0.000834s | 0.000803s | 0.000802s | byte equality observed |
| mp_quote_trait.test | 10 | 0.000806s | 0.000829s | 0.000823s | byte equality observed |
| mp_remove.test | 10 | 0.000813s | 0.000846s | 0.000810s | byte equality observed |
| mp_remove_if.test | 10 | 0.000824s | 0.000852s | 0.000814s | byte equality observed |
| mp_remove_if_q.test | 10 | 0.000830s | 0.000855s | 0.000811s | byte equality observed |
| mp_rename.test | 10 | 0.000798s | 0.000865s | 0.000847s | byte equality observed |
| mp_rename_2.test | 10 | 0.000367s | 0.000355s | 0.000779s | byte equality observed |
| mp_rename_v.test | 10 | 0.000367s | 0.000363s | 0.000796s | byte equality observed |
| mp_repeat.test | 10 | 0.000832s | 0.000819s | 0.000811s | byte equality observed |
| mp_repeat_2.test | 10 | 0.000356s | 0.000359s | 0.000806s | byte equality observed |
| mp_repeat_3.test | 10 | 0.000813s | 0.000788s | 0.000842s | byte equality observed |
| mp_replace.test | 10 | 0.000815s | 0.000814s | 0.000821s | byte equality observed |
| mp_replace_at.test | 10 | 0.000816s | 0.000819s | 0.000824s | byte equality observed |
| mp_replace_at_c.test | 10 | 0.000821s | 0.000824s | 0.000815s | byte equality observed |
| mp_replace_front.test | 10 | 0.000802s | 0.000809s | 0.000796s | byte equality observed |
| mp_replace_front_2.test | 10 | 0.000366s | 0.000367s | 0.000775s | byte equality observed |
| mp_replace_if.test | 10 | 0.000800s | 0.000812s | 0.000816s | byte equality observed |
| mp_replace_if_q.test | 10 | 0.000817s | 0.000827s | 0.000851s | byte equality observed |
| mp_replace_second.test | 10 | 0.000806s | 0.000814s | 0.000839s | byte equality observed |
| mp_replace_second_2.test | 10 | 0.000364s | 0.000366s | 0.000802s | byte equality observed |
| mp_replace_third.test | 10 | 0.000806s | 0.000827s | 0.000804s | byte equality observed |
| mp_replace_third_2.test | 10 | 0.000362s | 0.000360s | 0.000785s | byte equality observed |
| mp_reverse.test | 10 | 0.000851s | 0.000837s | 0.000814s | byte equality observed |
| mp_reverse_fold.test | 10 | 0.000816s | 0.000835s | 0.000783s | byte equality observed |
| mp_reverse_fold_q.test | 10 | 0.000819s | 0.000830s | 0.000808s | byte equality observed |
| mp_rotate_left.test | 10 | 0.000817s | 0.000846s | 0.000790s | byte equality observed |
| mp_rotate_right.test | 10 | 0.000813s | 0.000842s | 0.000806s | byte equality observed |
| mp_same.test | 10 | 0.000822s | 0.000835s | 0.000828s | byte equality observed |
| mp_second.test | 10 | 0.000800s | 0.000823s | 0.000823s | byte equality observed |
| mp_second_2.test | 10 | 0.000368s | 0.000368s | 0.000824s | byte equality observed |
| mp_set_contains.test | 10 | 0.000804s | 0.000800s | 0.000813s | byte equality observed |
| mp_set_difference.test | 10 | 0.000805s | 0.000823s | 0.000800s | byte equality observed |
| mp_set_difference_sf.test | 10 | 0.000802s | 0.000816s | 0.000803s | byte equality observed |
| mp_set_intersection.test | 10 | 0.000800s | 0.000814s | 0.000813s | byte equality observed |
| mp_set_intersection_sf.test | 10 | 0.000814s | 0.000814s | 0.000796s | byte equality observed |
| mp_set_push_back.test | 10 | 0.000822s | 0.000802s | 0.000831s | byte equality observed |
| mp_set_push_front.test | 10 | 0.000835s | 0.000807s | 0.000828s | byte equality observed |
| mp_set_union.test | 10 | 0.000821s | 0.000834s | 0.000812s | byte equality observed |
| mp_set_union_sf.test | 10 | 0.000806s | 0.000816s | 0.000804s | byte equality observed |
| mp_similar.test | 10 | 0.000813s | 0.000831s | 0.000837s | byte equality observed |
| mp_size.test | 10 | 0.000817s | 0.000795s | 0.000809s | byte equality observed |
| mp_size_2.test | 10 | 0.000357s | 0.000366s | 0.000801s | byte equality observed |
| mp_slice.test | 10 | 0.000817s | 0.000814s | 0.000799s | byte equality observed |
| mp_slice_2.test | 10 | 0.000364s | 0.000368s | 0.000792s | byte equality observed |
| mp_sliding_fold.test | 10 | 0.000845s | 0.000825s | 0.000819s | byte equality observed |
| mp_sliding_fold_q.test | 10 | 0.000849s | 0.000816s | 0.000827s | byte equality observed |
| mp_sort.test | 10 | 0.000811s | 0.000833s | 0.000822s | byte equality observed |
| mp_sort_q.test | 10 | 0.000822s | 0.000809s | 0.000841s | byte equality observed |
| mp_split.test | 10 | 0.000836s | 0.000827s | 0.000825s | byte equality observed |
| mp_starts_with.test | 10 | 0.000820s | 0.000827s | 0.000845s | byte equality observed |
| mp_starts_with_sf.test | 10 | 0.000821s | 0.000817s | 0.000831s | byte equality observed |
| mp_take.test | 10 | 0.000830s | 0.000805s | 0.000841s | byte equality observed |
| mp_take_2.test | 10 | 0.000364s | 0.000361s | 0.000801s | byte equality observed |
| mp_third.test | 10 | 0.000816s | 0.000815s | 0.000801s | byte equality observed |
| mp_third_2.test | 10 | 0.000365s | 0.000369s | 0.000804s | byte equality observed |
| mp_transform.test | 10 | 0.000826s | 0.000809s | 0.000794s | byte equality observed |
| mp_transform_2.test | 10 | 0.000798s | 0.000773s | 0.000794s | byte equality observed |
| mp_transform_front.test | 10 | 0.000796s | 0.000822s | 0.000790s | byte equality observed |
| mp_transform_front_2.test | 10 | 0.000364s | 0.000365s | 0.000796s | byte equality observed |
| mp_transform_if.test | 10 | 0.000812s | 0.000821s | 0.000805s | byte equality observed |
| mp_transform_if_q.test | 10 | 0.000805s | 0.000829s | 0.000806s | byte equality observed |
| mp_transform_q.test | 10 | 0.000827s | 0.000814s | 0.000813s | byte equality observed |
| mp_transform_q_2.test | 10 | 0.000821s | 0.000824s | 0.000815s | byte equality observed |
| mp_transform_second.test | 10 | 0.000801s | 0.000817s | 0.000834s | byte equality observed |
| mp_transform_second_2.test | 10 | 0.000369s | 0.000366s | 0.000781s | byte equality observed |
| mp_transform_sf.test | 10 | 0.000806s | 0.000828s | 0.000795s | byte equality observed |
| mp_transform_third.test | 10 | 0.000820s | 0.000835s | 0.000812s | byte equality observed |
| mp_transform_third_2.test | 10 | 0.000368s | 0.000364s | 0.000798s | byte equality observed |
| mp_unique.test | 10 | 0.000794s | 0.000816s | 0.000786s | byte equality observed |
| mp_unique_if.test | 10 | 0.000830s | 0.000833s | 0.000810s | byte equality observed |
| mp_unique_if_q.test | 10 | 0.000837s | 0.000848s | 0.000825s | byte equality observed |
| mp_valid.test | 10 | 0.000800s | 0.000848s | 0.000827s | byte equality observed |
| mp_valid_and_true.test | 10 | 0.000795s | 0.000834s | 0.000803s | byte equality observed |
| mp_value.test | 10 | 0.000371s | 0.000360s | 0.000767s | byte equality observed |
| mp_with_index.test | 10 | 0.001114s | 0.001089s | 0.001028s | byte equality observed |
| mp_with_index_cx.test | 10 | 0.000365s | 0.000361s | 0.000798s | byte equality observed |
| mpl.test | 10 | 0.000822s | 0.000821s | 0.000807s | byte equality observed |
| mpl_list.test | 10 | 0.000802s | 0.000826s | 0.000822s | byte equality observed |
| mpl_tuple.test | 10 | 0.000806s | 0.000862s | 0.000850s | byte equality observed |
| mpl_version.test | 10 | 0.000786s | 0.000849s | 0.000828s | byte equality observed |
| set_version.test | 10 | 0.000815s | 0.000854s | 0.000828s | byte equality observed |
| tuple_apply.test | 10 | 0.000800s | 0.000843s | 0.000791s | byte equality observed |
| tuple_for_each.test | 10 | 0.000825s | 0.000822s | 0.000826s | byte equality observed |
| tuple_transform.test | 10 | 0.000852s | 0.000830s | 0.000841s | byte equality observed |
| tuple_transform_2.test | 10 | 0.000839s | 0.000826s | 0.000843s | byte equality observed |
| tuple_version.test | 10 | 0.000817s | 0.000796s | 0.000835s | byte equality observed |
| utility_version.test | 10 | 0.000814s | 0.000801s | 0.000840s | byte equality observed |
| version.test | 10 | 0.000806s | 0.000816s | 0.000825s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/43822097733).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
