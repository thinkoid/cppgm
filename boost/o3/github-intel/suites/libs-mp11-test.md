# libs/mp11/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| mp11.test | COMPILE | 0.029182 | 0.058657 | 0.088612 | — | — | — |
| complex_h.test | COMPILE | 0.118808 | 0.257214 | 0.365546 | — | — | — |
| mp_size.test | RUN | 0.142237 | 0.839833 | 0.485719 | 0.001193 | 0.001341 | 0.001256 |
| mp_size_2.test | RUN | 0.012007 | 0.028887 | 0.043250 | 0.000495 | 0.000518 | 0.001306 |
| mp_empty.test | RUN | 0.137086 | 0.517701 | 0.437796 | 0.001274 | 0.001346 | 0.001143 |
| mp_empty_2.test | RUN | 0.012701 | 0.029877 | 0.044775 | 0.000502 | 0.000466 | 0.001170 |
| mp_assign.test | RUN | 0.158288 | 1.114960 | 0.617915 | 0.001183 | 0.001291 | 0.001140 |
| mp_assign_2.test | RUN | 0.013023 | 0.030035 | 0.044785 | 0.000501 | 0.000471 | 0.001293 |
| mp_clear.test | RUN | 0.128993 | 0.471833 | 0.464002 | 0.001164 | 0.001225 | 0.001168 |
| mp_clear_2.test | RUN | 0.012314 | 0.029279 | 0.044453 | 0.000459 | 0.000497 | 0.001299 |
| mp_front.test | RUN | 0.145833 | 0.756799 | 0.509378 | 0.001244 | 0.001328 | 0.001117 |
| mp_front_2.test | RUN | 0.012291 | 0.028480 | 0.044863 | 0.000489 | 0.000488 | 0.001115 |
| mp_pop_front.test | RUN | 0.139212 | 0.788917 | 0.524129 | 0.001065 | 0.000935 | 0.001116 |
| mp_pop_front_2.test | RUN | 0.012304 | 0.028052 | 0.042612 | 0.000482 | 0.000484 | 0.001152 |
| mp_second.test | RUN | 0.139988 | 0.503220 | 0.496282 | 0.001395 | 0.000912 | 0.001159 |
| mp_second_2.test | RUN | 0.012262 | 0.029768 | 0.044440 | 0.000407 | 0.000516 | 0.001173 |
| mp_third.test | RUN | 0.138702 | 0.454565 | 0.444277 | 0.001018 | 0.001146 | 0.001153 |
| mp_third_2.test | RUN | 0.012268 | 0.028288 | 0.044119 | 0.000448 | 0.000418 | 0.001096 |
| mp_push_front.test | RUN | 0.185489 | 1.700638 | 0.844966 | 0.001295 | 0.001427 | 0.001238 |
| mp_push_front_2.test | RUN | 0.013124 | 0.029773 | 0.041297 | 0.000507 | 0.000389 | 0.001089 |
| mp_push_back.test | RUN | 0.186158 | 1.706769 | 0.846753 | 0.001128 | 0.000854 | 0.001166 |
| mp_push_back_2.test | RUN | 0.012421 | 0.029612 | 0.043994 | 0.000500 | 0.000389 | 0.001233 |
| mp_rename.test | RUN | 0.175701 | 1.566282 | 0.719797 | 0.001334 | 0.001300 | 0.001166 |
| mp_rename_2.test | RUN | 0.013416 | 0.029489 | 0.042867 | 0.000497 | 0.000506 | 0.001152 |
| mp_append.test | RUN | 0.190541 | 1.760666 | 0.786308 | 0.001142 | 0.001212 | 0.001139 |
| mp_append_2.test | RUN | 0.412216 | 4.000715 | 1.070541 | 0.001430 | 0.001273 | 0.001114 |
| mp_append_3.test | RUN | 0.012420 | 0.029662 | 0.043983 | 0.000489 | 0.000441 | 0.001210 |
| mp_append_sf.test | RUN | 0.130459 | 0.429460 | 0.425403 | 0.001250 | 0.001233 | 0.001206 |
| mp_replace_front.test | RUN | 0.165325 | 1.256491 | 0.647957 | 0.001166 | 0.001262 | 0.001093 |
| mp_replace_front_2.test | RUN | 0.012092 | 0.029160 | 0.041977 | 0.000480 | 0.000421 | 0.001077 |
| mp_replace_second.test | RUN | 0.154981 | 0.806910 | 0.579589 | 0.001289 | 0.001061 | 0.001190 |
| mp_replace_second_2.test | RUN | 0.013497 | 0.029755 | 0.043913 | 0.000401 | 0.000520 | 0.001119 |
| mp_replace_third.test | RUN | 0.152702 | 0.660528 | 0.535390 | 0.001474 | 0.001107 | 0.001230 |
| mp_replace_third_2.test | RUN | 0.012102 | 0.029408 | 0.041914 | 0.000483 | 0.000443 | 0.001110 |
| mp_apply_q.test | RUN | 0.168958 | 1.558779 | 0.710177 | 0.001162 | 0.001174 | 0.001261 |
| mp_apply_q_sf.test | RUN | 0.132438 | 0.436831 | 0.431139 | 0.001258 | 0.001264 | 0.001240 |
| mp_is_list.test | RUN | 0.131835 | 0.518707 | 0.455713 | 0.001169 | 0.001246 | 0.001236 |
| mp_list_c.test | RUN | 0.142698 | 0.630690 | 0.501417 | 0.001609 | 0.001386 | 0.001238 |
| mp_transform_front.test | RUN | 0.159530 | 1.257503 | 0.618380 | 0.001133 | 0.001245 | 0.001436 |
| mp_transform_front_2.test | RUN | 0.012488 | 0.029851 | 0.044987 | 0.000498 | 0.000456 | 0.001334 |
| mp_transform_second.test | RUN | 0.152533 | 1.083708 | 0.577767 | 0.001162 | 0.001281 | 0.001123 |
| mp_transform_second_2.test | RUN | 0.012307 | 0.029248 | 0.043759 | 0.000441 | 0.000485 | 0.001215 |
| mp_transform_third.test | RUN | 0.137577 | 0.824792 | 0.517750 | 0.001082 | 0.001196 | 0.001182 |
| mp_transform_third_2.test | RUN | 0.012153 | 0.029523 | 0.045236 | 0.000492 | 0.000517 | 0.001087 |
| mp_list_v.test | RUN | 0.012927 | 0.029745 | 0.044236 | 0.000537 | 0.000480 | 0.001154 |
| mp_rename_v.test | RUN | 0.012694 | 0.029287 | 0.042200 | 0.000425 | 0.000493 | 0.001078 |
| mp_is_value_list.test | RUN | 0.128647 | 0.316498 | 0.412313 | 0.001147 | 0.001210 | 0.001183 |
| mp_transform.test | RUN | 0.339878 | 2.663638 | 1.323181 | 0.001299 | 0.001283 | 0.001207 |
| mp_transform_2.test | RUN | 0.126656 | 0.282407 | 0.379329 | 0.001120 | 0.001240 | 0.001076 |
| mp_transform_q.test | RUN | 0.326924 | 2.560049 | 1.308195 | 0.001111 | 0.001353 | 0.001105 |
| mp_transform_q_2.test | RUN | 0.330719 | 0.797831 | 1.665126 | 0.001252 | 0.001285 | 0.001151 |
| mp_transform_sf.test | RUN | 0.138592 | 0.445389 | 0.461124 | 0.001164 | 0.001131 | 0.001190 |
| mp_transform_if.test | RUN | 0.179412 | 1.259085 | 0.686698 | 0.001270 | 0.001376 | 0.001213 |
| mp_transform_if_q.test | RUN | 0.177106 | 1.269590 | 0.700518 | 0.001039 | 0.001180 | 0.001071 |
| mp_filter.test | RUN | 0.156300 | 0.739321 | 0.517627 | 0.001061 | 0.001351 | 0.001162 |
| mp_fill.test | RUN | 0.152873 | 0.556896 | 0.499704 | 0.001205 | 0.001240 | 0.001069 |
| mp_fill_2.test | RUN | 0.022259 | 0.043737 | 0.069483 | 0.000521 | 0.000483 | 0.001202 |
| mp_count.test | RUN | 0.287352 | 1.358188 | 0.781540 | 0.001452 | 0.001342 | 0.001147 |
| mp_count_if.test | RUN | 0.293680 | 1.376427 | 0.836680 | 0.001135 | 0.001267 | 0.001080 |
| mp_count_if_q.test | RUN | 0.149890 | 0.894507 | 0.487635 | 0.001210 | 0.001153 | 0.001131 |
| mp_contains.test | RUN | 0.140311 | 0.536945 | 0.457925 | 0.001254 | 0.001200 | 0.001061 |
| mp_starts_with.test | RUN | 0.141280 | 0.522560 | 0.472403 | 0.001048 | 0.001451 | 0.001055 |
| mp_starts_with_sf.test | RUN | 0.139693 | 0.453844 | 0.428174 | 0.001059 | 0.001173 | 0.001057 |
| mp_repeat.test | RUN | 0.211738 | 2.267881 | 0.898642 | 0.001071 | 0.001298 | 0.001126 |
| mp_repeat_2.test | RUN | 0.021215 | 0.045336 | 0.066582 | 0.000486 | 0.000520 | 0.001014 |
| mp_repeat_3.test | RUN | 0.175614 | 0.284500 | 0.426927 | 0.001278 | 0.001259 | 0.001169 |
| mp_product.test | RUN | 0.170283 | 1.373556 | 0.627325 | 0.001221 | 0.001335 | 0.001067 |
| mp_drop.test | RUN | 0.178473 | 1.701632 | 0.750930 | 0.001147 | 0.001308 | 0.001090 |
| mp_drop_2.test | RUN | 0.021786 | 0.047215 | 0.070436 | 0.000475 | 0.000485 | 0.001095 |
| mp_iota.test | RUN | 0.171813 | 1.429394 | 0.642759 | 0.001280 | 0.001191 | 0.001155 |
| mp_iota_2.test | RUN | 0.184023 | 1.737097 | 0.751138 | 0.001188 | 0.001247 | 0.001112 |
| mp_at.test | RUN | 0.149440 | 0.739760 | 0.527985 | 0.001083 | 0.001136 | 0.001012 |
| mp_at_2.test | RUN | 0.021320 | 0.044581 | 0.072295 | 0.000506 | 0.000471 | 0.001068 |
| mp_at_sf.test | RUN | 0.140747 | 0.453839 | 0.443050 | 0.001086 | 0.001281 | 0.001051 |
| mp_take.test | RUN | 0.243133 | 2.234517 | 0.905265 | 0.001246 | 0.001439 | 0.001112 |
| mp_take_2.test | RUN | 0.022513 | 0.044686 | 0.067855 | 0.000507 | 0.000445 | 0.001084 |
| mp_slice.test | RUN | 0.295652 | 2.280712 | 1.149972 | 0.001236 | 0.001370 | 0.001068 |
| mp_slice_2.test | RUN | 0.021364 | 0.043670 | 0.067227 | 0.000505 | 0.000526 | 0.001129 |
| mp_replace.test | RUN | 0.179635 | 1.151590 | 0.721225 | 0.001189 | 0.001301 | 0.001061 |
| mp_replace_if.test | RUN | 0.171935 | 1.007434 | 0.669785 | 0.001417 | 0.001232 | 0.001168 |
| mp_replace_if_q.test | RUN | 0.175118 | 1.007711 | 0.664636 | 0.001194 | 0.001300 | 0.001192 |
| mp_copy_if.test | RUN | 0.173554 | 1.424702 | 0.636173 | 0.001424 | 0.001187 | 0.001177 |
| mp_copy_if_q.test | RUN | 0.175398 | 1.440695 | 0.635728 | 0.001177 | 0.001177 | 0.001072 |
| mp_remove.test | RUN | 0.170318 | 0.954617 | 0.658405 | 0.001194 | 0.001230 | 0.001141 |
| mp_remove_if.test | RUN | 0.183748 | 1.507529 | 0.684362 | 0.001201 | 0.001349 | 0.001187 |
| mp_remove_if_q.test | RUN | 0.181447 | 1.511041 | 0.681147 | 0.001379 | 0.001130 | 0.001128 |
| mp_partition.test | RUN | 0.178425 | 1.424929 | 0.725188 | 0.001242 | 0.001366 | 0.001140 |
| mp_partition_q.test | RUN | 0.179162 | 1.439284 | 0.738143 | 0.001096 | 0.001252 | 0.001078 |
| mp_sort.test | RUN | 0.171345 | 1.018252 | 0.626565 | 0.001213 | 0.001414 | 0.001080 |
| mp_sort_q.test | RUN | 0.169098 | 1.016034 | 0.622935 | 0.001314 | 0.001298 | 0.001140 |
| mp_find.test | RUN | 0.166539 | 1.096390 | 0.533930 | 0.001335 | 0.001184 | 0.001046 |
| mp_find_if.test | RUN | 0.158418 | 1.012233 | 0.514834 | 0.001282 | 0.001250 | 0.001079 |
| mp_find_if_q.test | RUN | 0.166897 | 1.120661 | 0.636953 | 0.001180 | 0.001195 | 0.001255 |
| mp_reverse.test | RUN | 0.369120 | 3.007473 | 1.271241 | 0.001230 | 0.001306 | 0.001070 |
| mp_fold.test | RUN | 0.627773 | 2.336948 | 3.202245 | 0.001134 | 0.001276 | 0.001314 |
| mp_fold_q.test | RUN | 0.160507 | 1.015247 | 0.602921 | 0.001350 | 0.001199 | 0.001129 |
| mp_fold_q_sf.test | RUN | 0.139930 | 0.452362 | 0.464554 | 0.001197 | 0.001254 | 0.001198 |
| mp_reverse_fold.test | RUN | 0.293897 | 2.236712 | 0.905420 | 0.001247 | 0.001392 | 0.001099 |
| mp_reverse_fold_q.test | RUN | 0.167868 | 1.212967 | 0.649480 | 0.001239 | 0.001258 | 0.001073 |
| mp_unique.test | RUN | 0.164548 | 1.109958 | 0.631194 | 0.001258 | 0.001267 | 0.001077 |
| mp_unique_if.test | RUN | 0.290915 | 2.321766 | 1.002485 | 0.001156 | 0.001326 | 0.001228 |
| mp_unique_if_q.test | RUN | 0.264936 | 2.290440 | 0.811362 | 0.001151 | 0.001252 | 0.001187 |
| mp_all_of.test | RUN | 0.389473 | 1.246828 | 1.048033 | 0.001356 | 0.001502 | 0.001150 |
| mp_all_of_q.test | RUN | 0.140674 | 0.541702 | 0.478094 | 0.001385 | 0.001379 | 0.001205 |
| mp_any_of.test | RUN | 0.403024 | 1.301791 | 1.054112 | 0.001367 | 0.001435 | 0.001068 |
| mp_any_of_q.test | RUN | 0.142857 | 0.536012 | 0.474309 | 0.001476 | 0.001284 | 0.001204 |
| mp_none_of.test | RUN | 0.396521 | 1.280589 | 1.051467 | 0.001200 | 0.001357 | 0.001132 |
| mp_none_of_q.test | RUN | 0.141692 | 0.533914 | 0.437813 | 0.001262 | 0.001416 | 0.001298 |
| mp_replace_at.test | RUN | 0.174750 | 1.093386 | 0.682798 | 0.001223 | 0.001252 | 0.001071 |
| mp_replace_at_c.test | RUN | 0.182086 | 1.105492 | 0.716161 | 0.001317 | 0.001321 | 0.001357 |
| mp_for_each.test | RUN | 0.164234 | 0.723851 | 0.715241 | 0.001159 | 0.001328 | 0.001198 |
| mp_insert.test | RUN | 0.272630 | 2.290573 | 1.041773 | 0.001237 | 0.001253 | 0.001123 |
| mp_insert_2.test | RUN | 0.024128 | 0.045132 | 0.071554 | 0.000437 | 0.000443 | 0.001152 |
| mp_erase.test | RUN | 0.301156 | 2.427062 | 1.222124 | 0.001173 | 0.001333 | 0.001204 |
| mp_erase_2.test | RUN | 0.022200 | 0.044750 | 0.069865 | 0.000544 | 0.000529 | 0.001231 |
| mp_with_index.test | RUN | 0.392653 | 4.863002 | 2.623411 | 0.001734 | 0.001743 | 0.001402 |
| mp_with_index_cx.test | RUN | 0.002821 | 0.014494 | 0.021651 | 0.000473 | 0.000538 | 0.001156 |
| mp_from_sequence.test | RUN | 0.169854 | 1.256596 | 0.673457 | 0.001386 | 0.001270 | 0.001117 |
| mp_from_sequence_2.test | RUN | 0.185479 | 1.476828 | 0.742733 | 0.001193 | 0.001247 | 0.001111 |
| mp_from_sequence_3.test | RUN | 0.146624 | 0.647548 | 0.506626 | 0.001127 | 0.001302 | 0.001032 |
| mp_min_element.test | RUN | 0.147574 | 0.589565 | 0.484089 | 0.001189 | 0.001356 | 0.001110 |
| mp_min_element_2.test | RUN | 0.021897 | 0.048258 | 0.068962 | 0.000482 | 0.000505 | 0.001134 |
| mp_min_element_q.test | RUN | 0.144034 | 0.589696 | 0.472084 | 0.001354 | 0.001157 | 0.001257 |
| mp_min_element_q_2.test | RUN | 0.022622 | 0.046893 | 0.069247 | 0.000494 | 0.000467 | 0.001157 |
| mp_max_element.test | RUN | 0.149634 | 0.583584 | 0.475905 | 0.001215 | 0.001224 | 0.001086 |
| mp_max_element_2.test | RUN | 0.023030 | 0.043622 | 0.066503 | 0.000545 | 0.000468 | 0.001081 |
| mp_max_element_q.test | RUN | 0.148809 | 0.588150 | 0.488266 | 0.001113 | 0.001264 | 0.001162 |
| mp_max_element_q_2.test | RUN | 0.021682 | 0.044550 | 0.069432 | 0.000507 | 0.000518 | 0.001048 |
| mp_nth_element.test | RUN | 0.166701 | 0.843812 | 0.602016 | 0.001186 | 0.001312 | 0.001110 |
| mp_nth_element_q.test | RUN | 0.154870 | 0.827724 | 0.588800 | 0.001220 | 0.001250 | 0.001249 |
| mp_back.test | RUN | 0.153804 | 0.689040 | 0.570653 | 0.001187 | 0.001252 | 0.001047 |
| mp_back_2.test | RUN | 0.022526 | 0.047092 | 0.071950 | 0.000454 | 0.000477 | 0.001019 |
| mp_pop_back.test | RUN | 0.469515 | 4.663128 | 1.209953 | 0.001135 | 0.001506 | 0.001006 |
| mp_pop_back_2.test | RUN | 0.022444 | 0.047725 | 0.067013 | 0.000469 | 0.000488 | 0.001044 |
| mp_flatten.test | RUN | 0.188442 | 1.639003 | 0.803476 | 0.001205 | 0.001326 | 0.001056 |
| mp_rotate_left.test | RUN | 0.188410 | 1.751111 | 0.785587 | 0.001109 | 0.001281 | 0.001093 |
| mp_rotate_right.test | RUN | 0.188740 | 1.767689 | 0.789127 | 0.001364 | 0.001412 | 0.001083 |
| mp_power_set.test | RUN | 0.184710 | 1.698178 | 0.800416 | 0.001203 | 0.001321 | 0.001101 |
| mp_partial_sum.test | RUN | 0.252761 | 2.255633 | 0.912181 | 0.001161 | 0.001350 | 0.001124 |
| mp_iterate.test | RUN | 0.161040 | 0.669287 | 0.620153 | 0.001252 | 0.001423 | 0.001191 |
| mp_pairwise_fold.test | RUN | 0.187309 | 1.554011 | 0.811843 | 0.001173 | 0.001179 | 0.001130 |
| mp_pairwise_fold_q.test | RUN | 0.145285 | 0.443518 | 0.471277 | 0.001214 | 0.001410 | 0.001201 |
| mp_sliding_fold.test | RUN | 0.366509 | 2.975610 | 1.539852 | 0.001258 | 0.001171 | 0.001311 |
| mp_sliding_fold_q.test | RUN | 0.372978 | 3.001192 | 1.527030 | 0.001128 | 0.001366 | 0.001033 |
| mp_intersperse.test | RUN | 0.172301 | 1.109296 | 0.700424 | 0.001268 | 0.001433 | 0.001272 |
| mp_split.test | RUN | 0.256837 | 2.141164 | 0.969983 | 0.001365 | 0.001363 | 0.001110 |
| mp_join.test | RUN | 0.199131 | 1.803108 | 0.871940 | 0.001284 | 0.001347 | 0.001071 |
| integral.test | RUN | 0.152513 | 0.788501 | 0.528898 | 0.001251 | 0.000872 | 0.001156 |
| mp_value.test | RUN | 0.009918 | 0.024630 | 0.033199 | 0.000510 | 0.000437 | 0.001014 |
| mp_identity.test | RUN | 0.145828 | 0.713194 | 0.507469 | 0.001300 | 0.001195 | 0.001088 |
| mp_inherit.test | RUN | 0.140583 | 0.512087 | 0.457114 | 0.001225 | 0.001234 | 0.001094 |
| mp_if.test | RUN | 0.141202 | 0.579932 | 0.469677 | 0.001390 | 0.001288 | 0.001154 |
| mp_if_sf.test | RUN | 0.132748 | 0.429613 | 0.423275 | 0.001194 | 0.001384 | 0.001083 |
| mp_eval_if.test | RUN | 0.142924 | 0.625358 | 0.482152 | 0.001300 | 0.001356 | 0.001215 |
| mp_eval_if_sf.test | RUN | 0.133853 | 0.441330 | 0.424509 | 0.001163 | 0.001322 | 0.001098 |
| mp_valid.test | RUN | 0.135654 | 0.441639 | 0.440310 | 0.001179 | 0.001179 | 0.001232 |
| mp_defer.test | RUN | 0.148996 | 0.759289 | 0.518881 | 0.001316 | 0.001379 | 0.001151 |
| mp_quote.test | RUN | 0.149709 | 0.771875 | 0.543693 | 0.001221 | 0.001349 | 0.001096 |
| mp_invoke_q.test | RUN | 0.162074 | 0.998466 | 0.595452 | 0.001110 | 0.001409 | 0.001047 |
| mp_invoke_q_sf.test | RUN | 0.136260 | 0.442978 | 0.417433 | 0.001313 | 0.001430 | 0.001059 |
| mp_quote_trait.test | RUN | 0.144949 | 0.848793 | 0.529203 | 0.001345 | 0.001157 | 0.000917 |
| mp_cond.test | RUN | 0.137611 | 0.507819 | 0.444959 | 0.001381 | 0.001237 | 0.001050 |
| mp_cond_sf.test | RUN | 0.133564 | 0.432477 | 0.417105 | 0.001246 | 0.001270 | 0.001079 |
| mp_not_fn.test | RUN | 0.134882 | 0.435102 | 0.425580 | 0.001275 | 0.001451 | 0.001072 |
| mp_eval_if_not.test | RUN | 0.146758 | 0.623999 | 0.485462 | 0.001328 | 0.001096 | 0.001174 |
| mp_eval_or.test | RUN | 0.136363 | 0.334606 | 0.443420 | 0.001223 | 0.001216 | 0.001107 |
| mp_compose.test | RUN | 0.153715 | 1.026496 | 0.575563 | 0.001211 | 0.001181 | 0.001088 |
| mp_valid_and_true.test | RUN | 0.136363 | 0.529746 | 0.453700 | 0.001175 | 0.001328 | 0.001013 |
| mp_compose_sf.test | COMPILE | 0.031888 | 0.058550 | 0.094918 | — | — | — |
| integer_sequence.test | RUN | 0.167270 | 1.031766 | 0.659703 | 0.001183 | 0.001221 | 0.001162 |
| tuple_for_each.test | RUN | 0.137366 | 0.374682 | 0.471193 | 0.001213 | 0.001297 | 0.001164 |
| tuple_for_each_cx.test | COMPILE | 0.024697 | 0.052260 | 0.077818 | — | — | — |
| tuple_apply.test | RUN | 0.141664 | 0.368571 | 0.463879 | 0.001206 | 0.001248 | 0.001092 |
| tuple_apply_cx.test | COMPILE | 0.037853 | 0.072197 | 0.109903 | — | — | — |
| construct_from_tuple.test | RUN | 0.138110 | 0.391056 | 0.464707 | 0.001221 | 0.001364 | 0.001098 |
| construct_from_tuple_cx.test | COMPILE | 0.039641 | 0.075285 | 0.103350 | — | — | — |
| tuple_transform.test | RUN | 0.220066 | 0.809671 | 0.897120 | 0.001281 | 0.001485 | 0.001044 |
| tuple_transform_2.test | RUN | 0.189498 | 0.580667 | 0.791410 | 0.001208 | 0.001449 | 0.001059 |
| tuple_transform_cx.test | COMPILE | 0.032906 | 0.072118 | 0.105094 | — | — | — |
| mp_set_contains.test | RUN | 0.138521 | 0.533506 | 0.459290 | 0.001314 | 0.001313 | 0.001099 |
| mp_set_push_back.test | RUN | 0.191353 | 1.673793 | 0.807608 | 0.001261 | 0.001171 | 0.001156 |
| mp_set_push_front.test | RUN | 0.249544 | 2.027193 | 0.929394 | 0.001236 | 0.001312 | 0.001140 |
| mp_is_set.test | RUN | 0.144070 | 0.532551 | 0.470430 | 0.001349 | 0.001244 | 0.001210 |
| mp_set_union.test | RUN | 0.184070 | 1.432012 | 0.761090 | 0.001355 | 0.001388 | 0.001016 |
| mp_set_union_sf.test | RUN | 0.135957 | 0.424882 | 0.433330 | 0.001156 | 0.001332 | 0.001168 |
| mp_set_difference.test | RUN | 0.155464 | 1.107620 | 0.646558 | 0.001272 | 0.001401 | 0.001107 |
| mp_set_difference_sf.test | RUN | 0.123002 | 0.419052 | 0.428391 | 0.001444 | 0.001432 | 0.001020 |
| mp_set_intersection.test | RUN | 0.162430 | 1.105516 | 0.622000 | 0.001159 | 0.001464 | 0.001086 |
| mp_set_intersection_sf.test | RUN | 0.133745 | 0.429170 | 0.428771 | 0.001304 | 0.001350 | 0.001110 |
| mp_all.test | RUN | 0.135747 | 0.520487 | 0.459804 | 0.001237 | 0.001444 | 0.001059 |
| mp_all_2.test | RUN | 0.393205 | 1.153243 | 1.025548 | 0.001256 | 0.001386 | 0.001055 |
| mp_and.test | RUN | 0.140664 | 0.530473 | 0.455865 | 0.001196 | 0.001313 | 0.001093 |
| mp_any.test | RUN | 0.138503 | 0.517298 | 0.428084 | 0.001150 | 0.001232 | 0.001091 |
| mp_any_2.test | RUN | 0.404364 | 1.162254 | 1.043514 | 0.001366 | 0.001378 | 0.001076 |
| mp_or.test | RUN | 0.138222 | 0.525004 | 0.449284 | 0.001278 | 0.001352 | 0.001243 |
| mp_same.test | RUN | 0.273679 | 0.891141 | 0.723551 | 0.001151 | 0.001318 | 0.001168 |
| mp_plus.test | RUN | 0.145277 | 0.633713 | 0.500757 | 0.001412 | 0.001352 | 0.001032 |
| mp_less.test | RUN | 0.141112 | 0.524012 | 0.444398 | 0.001264 | 0.001277 | 0.001030 |
| mp_min.test | RUN | 0.140997 | 0.482203 | 0.450761 | 0.001243 | 0.001435 | 0.001113 |
| mp_max.test | RUN | 0.140126 | 0.543760 | 0.459658 | 0.001258 | 0.001390 | 0.001049 |
| mp_similar.test | RUN | 0.136846 | 0.524627 | 0.451871 | 0.001175 | 0.001276 | 0.001050 |
| mp_map_find.test | RUN | 0.166838 | 0.973807 | 0.610745 | 0.001377 | 0.001071 | 0.001114 |
| mp_map_find_2.test | RUN | 0.149241 | 0.369501 | 0.509936 | 0.001065 | 0.001307 | 0.001157 |
| mp_map_find_3.test | RUN | 0.148087 | 0.368965 | 0.511949 | 0.001115 | 0.001222 | 0.001110 |
| mp_map_find_4.test | RUN | 0.147109 | 0.351089 | 0.470363 | 0.001181 | 0.001023 | 0.001058 |
| mp_map_contains.test | RUN | 0.147676 | 0.536475 | 0.468853 | 0.001167 | 0.001376 | 0.001034 |
| mp_map_insert.test | RUN | 0.199112 | 1.860239 | 0.874387 | 0.001218 | 0.001258 | 0.001355 |
| mp_map_replace.test | RUN | 0.267059 | 2.142019 | 0.997149 | 0.001311 | 0.001396 | 0.001114 |
| mp_map_erase.test | RUN | 0.191545 | 1.585983 | 0.826109 | 0.001243 | 0.001362 | 0.001126 |
| mp_map_update.test | RUN | 0.169978 | 1.011613 | 0.637356 | 0.001297 | 0.001324 | 0.001096 |
| mp_map_update_q.test | RUN | 0.172237 | 1.019699 | 0.637192 | 0.001289 | 0.001151 | 0.001085 |
| mp_map_keys.test | RUN | 0.162460 | 0.897538 | 0.620295 | 0.001288 | 0.001356 | 0.000946 |
| mp_is_map.test | RUN | 0.145713 | 0.545550 | 0.491748 | 0.001140 | 0.001345 | 0.001035 |
| mp_bind.test | RUN | 0.184091 | 1.644205 | 0.753396 | 0.001344 | 0.001382 | 0.001158 |
| mp_bind_q.test | RUN | 0.161130 | 1.018608 | 0.602301 | 0.001154 | 0.001287 | 0.001115 |
| mp_bind_front.test | RUN | 0.156208 | 1.119624 | 0.578728 | 0.001237 | 0.001258 | 0.001074 |
| mp_bind_back.test | RUN | 0.159517 | 1.131257 | 0.577098 | 0.001206 | 0.001260 | 0.000999 |
| mp_lambda.test | RUN | 0.380649 | 3.349054 | 1.576566 | 0.001260 | 0.000944 | 0.001152 |
| mpl.test | RUN | 0.330002 | 0.858469 | 1.257127 | 0.001356 | 0.001146 | 0.001068 |
| mpl_list.test | RUN | 0.176788 | 0.650138 | 0.563745 | 0.001192 | 0.000975 | 0.001054 |
| mpl_tuple.test | RUN | 0.177804 | 0.650506 | 0.560761 | 0.001416 | 0.001246 | 0.000969 |
| version.test | RUN | 0.093640 | 0.233506 | 0.288300 | 0.001372 | 0.001134 | 0.001230 |
| mp11_version.test | RUN | 0.110243 | 0.265966 | 0.343037 | 0.001461 | 0.001278 | 0.001163 |
| list_version.test | RUN | 0.094435 | 0.237160 | 0.293998 | 0.001199 | 0.001246 | 0.001292 |
| algorithm_version.test | RUN | 0.106262 | 0.256967 | 0.313049 | 0.001191 | 0.001265 | 0.001093 |
| integral_version.test | RUN | 0.092958 | 0.234174 | 0.285265 | 0.001185 | 0.001250 | 0.001003 |
| utility_version.test | RUN | 0.090950 | 0.233076 | 0.287100 | 0.001218 | 0.001219 | 0.001036 |
| function_version.test | RUN | 0.092493 | 0.237986 | 0.293542 | 0.001212 | 0.001438 | 0.001166 |
| map_version.test | RUN | 0.106867 | 0.253645 | 0.314967 | 0.001186 | 0.001240 | 0.001056 |
| set_version.test | RUN | 0.095441 | 0.242488 | 0.291218 | 0.001454 | 0.001213 | 0.000817 |
| bind_version.test | RUN | 0.102281 | 0.252044 | 0.309083 | 0.001129 | 0.001217 | 0.001037 |
| integer_sequence_version.test | RUN | 0.090586 | 0.233326 | 0.283955 | 0.001213 | 0.001180 | 0.000760 |
| tuple_version.test | RUN | 0.106662 | 0.250979 | 0.209724 | 0.000933 | 0.001266 | 0.001030 |
| mpl_version.test | RUN | 0.096509 | 0.173866 | 0.301812 | 0.001019 | 0.000922 | 0.000793 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 1.001× | 0.999×, 1.003× | 1.007× |
| clang | 1.094× | 1.095×, 1.092× | 1.004× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1364 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44362912212).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| algorithm_version.test | 10 | 0.000749s | 0.000729s | 0.000718s | byte equality observed |
| bind_version.test | 10 | 0.000737s | 0.000725s | 0.000735s | byte equality observed |
| construct_from_tuple.test | 10 | 0.000736s | 0.000726s | 0.000728s | byte equality observed |
| function_version.test | 10 | 0.000747s | 0.000731s | 0.000722s | byte equality observed |
| integer_sequence.test | 10 | 0.000746s | 0.000730s | 0.000732s | byte equality observed |
| integer_sequence_version.test | 10 | 0.000742s | 0.000730s | 0.000722s | byte equality observed |
| integral.test | 10 | 0.000733s | 0.000753s | 0.000730s | byte equality observed |
| integral_version.test | 10 | 0.000739s | 0.000711s | 0.000721s | byte equality observed |
| list_version.test | 10 | 0.000742s | 0.000718s | 0.000722s | byte equality observed |
| map_version.test | 10 | 0.000743s | 0.000720s | 0.000731s | byte equality observed |
| mp11_version.test | 10 | 0.000737s | 0.000741s | 0.000759s | byte equality observed |
| mp_all.test | 10 | 0.000725s | 0.000751s | 0.000815s | byte equality observed |
| mp_all_2.test | 10 | 0.000741s | 0.000749s | 0.000843s | byte equality observed |
| mp_all_of.test | 10 | 0.000733s | 0.000751s | 0.000822s | byte equality observed |
| mp_all_of_q.test | 10 | 0.000749s | 0.000744s | 0.000828s | byte equality observed |
| mp_and.test | 10 | 0.000757s | 0.000759s | 0.000805s | byte equality observed |
| mp_any.test | 10 | 0.000736s | 0.000743s | 0.000782s | byte equality observed |
| mp_any_2.test | 10 | 0.000747s | 0.000731s | 0.000797s | byte equality observed |
| mp_any_of.test | 10 | 0.000733s | 0.000760s | 0.000806s | byte equality observed |
| mp_any_of_q.test | 10 | 0.000758s | 0.000741s | 0.000828s | byte equality observed |
| mp_append.test | 10 | 0.000736s | 0.000722s | 0.000796s | byte equality observed |
| mp_append_2.test | 10 | 0.000747s | 0.000760s | 0.000778s | byte equality observed |
| mp_append_3.test | 10 | 0.000351s | 0.000346s | 0.000773s | byte equality observed |
| mp_append_sf.test | 10 | 0.000782s | 0.000763s | 0.000773s | byte equality observed |
| mp_apply_q.test | 10 | 0.000801s | 0.000745s | 0.000819s | byte equality observed |
| mp_apply_q_sf.test | 10 | 0.000805s | 0.000748s | 0.000811s | byte equality observed |
| mp_assign.test | 10 | 0.000807s | 0.000743s | 0.000813s | byte equality observed |
| mp_assign_2.test | 10 | 0.000357s | 0.000343s | 0.000796s | byte equality observed |
| mp_at.test | 10 | 0.000803s | 0.000749s | 0.000812s | byte equality observed |
| mp_at_2.test | 10 | 0.000360s | 0.000344s | 0.000808s | byte equality observed |
| mp_at_sf.test | 10 | 0.000816s | 0.000737s | 0.000794s | byte equality observed |
| mp_back.test | 10 | 0.000816s | 0.000788s | 0.000803s | byte equality observed |
| mp_back_2.test | 10 | 0.000362s | 0.000357s | 0.000786s | byte equality observed |
| mp_bind.test | 10 | 0.000800s | 0.000816s | 0.000772s | byte equality observed |
| mp_bind_back.test | 10 | 0.000820s | 0.000804s | 0.000804s | byte equality observed |
| mp_bind_front.test | 10 | 0.000832s | 0.000831s | 0.000824s | byte equality observed |
| mp_bind_q.test | 10 | 0.000812s | 0.000822s | 0.000827s | byte equality observed |
| mp_clear.test | 10 | 0.000801s | 0.000824s | 0.000817s | byte equality observed |
| mp_clear_2.test | 10 | 0.000361s | 0.000355s | 0.000806s | byte equality observed |
| mp_compose.test | 10 | 0.000799s | 0.000832s | 0.000811s | byte equality observed |
| mp_cond.test | 10 | 0.000808s | 0.000815s | 0.000826s | byte equality observed |
| mp_cond_sf.test | 10 | 0.000823s | 0.000790s | 0.000841s | byte equality observed |
| mp_contains.test | 10 | 0.000788s | 0.000815s | 0.000790s | byte equality observed |
| mp_copy_if.test | 10 | 0.000816s | 0.000840s | 0.000823s | byte equality observed |
| mp_copy_if_q.test | 10 | 0.000825s | 0.000836s | 0.000818s | byte equality observed |
| mp_count.test | 10 | 0.000811s | 0.000817s | 0.000814s | byte equality observed |
| mp_count_if.test | 10 | 0.000820s | 0.000811s | 0.000828s | byte equality observed |
| mp_count_if_q.test | 10 | 0.000818s | 0.000802s | 0.000823s | byte equality observed |
| mp_defer.test | 10 | 0.000825s | 0.000819s | 0.000839s | byte equality observed |
| mp_drop.test | 10 | 0.000807s | 0.000791s | 0.000772s | byte equality observed |
| mp_drop_2.test | 10 | 0.000365s | 0.000365s | 0.000777s | byte equality observed |
| mp_empty.test | 10 | 0.000807s | 0.000806s | 0.000794s | byte equality observed |
| mp_empty_2.test | 10 | 0.000364s | 0.000358s | 0.000767s | byte equality observed |
| mp_erase.test | 10 | 0.000820s | 0.000806s | 0.000778s | byte equality observed |
| mp_erase_2.test | 10 | 0.000361s | 0.000354s | 0.000782s | byte equality observed |
| mp_eval_if.test | 10 | 0.000816s | 0.000810s | 0.000784s | byte equality observed |
| mp_eval_if_not.test | 10 | 0.000818s | 0.000832s | 0.000814s | byte equality observed |
| mp_eval_if_sf.test | 10 | 0.000807s | 0.000824s | 0.000833s | byte equality observed |
| mp_eval_or.test | 10 | 0.000822s | 0.000818s | 0.000839s | byte equality observed |
| mp_fill.test | 10 | 0.000800s | 0.000806s | 0.000796s | byte equality observed |
| mp_fill_2.test | 10 | 0.000364s | 0.000361s | 0.000799s | byte equality observed |
| mp_filter.test | 10 | 0.000799s | 0.000805s | 0.000802s | byte equality observed |
| mp_find.test | 10 | 0.000795s | 0.000800s | 0.000804s | byte equality observed |
| mp_find_if.test | 10 | 0.000814s | 0.000834s | 0.000825s | byte equality observed |
| mp_find_if_q.test | 10 | 0.000810s | 0.000820s | 0.000815s | byte equality observed |
| mp_flatten.test | 10 | 0.000812s | 0.000818s | 0.000832s | byte equality observed |
| mp_fold.test | 10 | 0.000823s | 0.000815s | 0.000804s | byte equality observed |
| mp_fold_q.test | 10 | 0.000803s | 0.000800s | 0.000803s | byte equality observed |
| mp_fold_q_sf.test | 10 | 0.000808s | 0.000823s | 0.000790s | byte equality observed |
| mp_for_each.test | 10 | 0.000799s | 0.000802s | 0.000795s | byte equality observed |
| mp_from_sequence.test | 10 | 0.000804s | 0.000808s | 0.000787s | byte equality observed |
| mp_from_sequence_2.test | 10 | 0.000790s | 0.000859s | 0.000799s | byte equality observed |
| mp_from_sequence_3.test | 10 | 0.000818s | 0.000843s | 0.000813s | byte equality observed |
| mp_front.test | 10 | 0.000793s | 0.000801s | 0.000798s | byte equality observed |
| mp_front_2.test | 10 | 0.000363s | 0.000366s | 0.000816s | byte equality observed |
| mp_identity.test | 10 | 0.000803s | 0.000793s | 0.000803s | byte equality observed |
| mp_if.test | 10 | 0.000807s | 0.000822s | 0.000792s | byte equality observed |
| mp_if_sf.test | 10 | 0.000811s | 0.000792s | 0.000786s | byte equality observed |
| mp_inherit.test | 10 | 0.000819s | 0.000817s | 0.000817s | byte equality observed |
| mp_insert.test | 10 | 0.000812s | 0.000799s | 0.000796s | byte equality observed |
| mp_insert_2.test | 10 | 0.000357s | 0.000361s | 0.000789s | byte equality observed |
| mp_intersperse.test | 10 | 0.000810s | 0.000830s | 0.000792s | byte equality observed |
| mp_invoke_q.test | 10 | 0.000810s | 0.000826s | 0.000833s | byte equality observed |
| mp_invoke_q_sf.test | 10 | 0.000805s | 0.000814s | 0.000790s | byte equality observed |
| mp_iota.test | 10 | 0.000792s | 0.000843s | 0.000806s | byte equality observed |
| mp_iota_2.test | 10 | 0.000793s | 0.000823s | 0.000841s | byte equality observed |
| mp_is_list.test | 10 | 0.000811s | 0.000820s | 0.000834s | byte equality observed |
| mp_is_map.test | 10 | 0.000805s | 0.000819s | 0.000817s | byte equality observed |
| mp_is_set.test | 10 | 0.000816s | 0.000804s | 0.000811s | byte equality observed |
| mp_is_value_list.test | 10 | 0.000827s | 0.000815s | 0.000791s | byte equality observed |
| mp_iterate.test | 10 | 0.000831s | 0.000807s | 0.000793s | byte equality observed |
| mp_join.test | 10 | 0.000808s | 0.000822s | 0.000826s | byte equality observed |
| mp_lambda.test | 10 | 0.000828s | 0.000831s | 0.000818s | byte equality observed |
| mp_less.test | 10 | 0.000801s | 0.000818s | 0.000830s | byte equality observed |
| mp_list_c.test | 10 | 0.000791s | 0.000823s | 0.000799s | byte equality observed |
| mp_list_v.test | 10 | 0.000359s | 0.000356s | 0.000805s | byte equality observed |
| mp_map_contains.test | 10 | 0.000779s | 0.000793s | 0.000803s | byte equality observed |
| mp_map_erase.test | 10 | 0.000794s | 0.000811s | 0.000785s | byte equality observed |
| mp_map_find.test | 10 | 0.000813s | 0.000822s | 0.000801s | byte equality observed |
| mp_map_find_2.test | 10 | 0.000786s | 0.000818s | 0.000807s | byte equality observed |
| mp_map_find_3.test | 10 | 0.000806s | 0.000811s | 0.000828s | byte equality observed |
| mp_map_find_4.test | 10 | 0.000822s | 0.000802s | 0.000827s | byte equality observed |
| mp_map_insert.test | 10 | 0.000813s | 0.000822s | 0.000801s | byte equality observed |
| mp_map_keys.test | 10 | 0.000800s | 0.000821s | 0.000811s | byte equality observed |
| mp_map_replace.test | 10 | 0.000814s | 0.000825s | 0.000800s | byte equality observed |
| mp_map_update.test | 10 | 0.000805s | 0.000819s | 0.000812s | byte equality observed |
| mp_map_update_q.test | 10 | 0.000807s | 0.000841s | 0.000818s | byte equality observed |
| mp_max.test | 10 | 0.000798s | 0.000834s | 0.000807s | byte equality observed |
| mp_max_element.test | 10 | 0.000810s | 0.000815s | 0.000800s | byte equality observed |
| mp_max_element_2.test | 10 | 0.000356s | 0.000357s | 0.000773s | byte equality observed |
| mp_max_element_q.test | 10 | 0.000795s | 0.000811s | 0.000781s | byte equality observed |
| mp_max_element_q_2.test | 10 | 0.000359s | 0.000367s | 0.000753s | byte equality observed |
| mp_min.test | 10 | 0.000784s | 0.000804s | 0.000810s | byte equality observed |
| mp_min_element.test | 10 | 0.000802s | 0.000809s | 0.000806s | byte equality observed |
| mp_min_element_2.test | 10 | 0.000361s | 0.000361s | 0.000801s | byte equality observed |
| mp_min_element_q.test | 10 | 0.000799s | 0.000795s | 0.000800s | byte equality observed |
| mp_min_element_q_2.test | 10 | 0.000359s | 0.000359s | 0.000808s | byte equality observed |
| mp_none_of.test | 10 | 0.000802s | 0.000805s | 0.000800s | byte equality observed |
| mp_none_of_q.test | 10 | 0.000820s | 0.000824s | 0.000821s | byte equality observed |
| mp_not_fn.test | 10 | 0.000802s | 0.000806s | 0.000820s | byte equality observed |
| mp_nth_element.test | 10 | 0.000826s | 0.000808s | 0.000813s | byte equality observed |
| mp_nth_element_q.test | 10 | 0.000820s | 0.000844s | 0.000824s | byte equality observed |
| mp_or.test | 10 | 0.000796s | 0.000846s | 0.000827s | byte equality observed |
| mp_pairwise_fold.test | 10 | 0.000816s | 0.000818s | 0.000815s | byte equality observed |
| mp_pairwise_fold_q.test | 10 | 0.000819s | 0.000812s | 0.000816s | byte equality observed |
| mp_partial_sum.test | 10 | 0.000809s | 0.000819s | 0.000810s | byte equality observed |
| mp_partition.test | 10 | 0.000788s | 0.000815s | 0.000824s | byte equality observed |
| mp_partition_q.test | 10 | 0.000814s | 0.000829s | 0.000799s | byte equality observed |
| mp_plus.test | 10 | 0.000815s | 0.000807s | 0.000817s | byte equality observed |
| mp_pop_back.test | 10 | 0.000829s | 0.000820s | 0.000818s | byte equality observed |
| mp_pop_back_2.test | 10 | 0.000363s | 0.000366s | 0.000773s | byte equality observed |
| mp_pop_front.test | 10 | 0.000797s | 0.000798s | 0.000777s | byte equality observed |
| mp_pop_front_2.test | 10 | 0.000360s | 0.000363s | 0.000793s | byte equality observed |
| mp_power_set.test | 10 | 0.000808s | 0.000818s | 0.000811s | byte equality observed |
| mp_product.test | 10 | 0.000818s | 0.000826s | 0.000810s | byte equality observed |
| mp_push_back.test | 10 | 0.000804s | 0.000800s | 0.000804s | byte equality observed |
| mp_push_back_2.test | 10 | 0.000362s | 0.000363s | 0.000781s | byte equality observed |
| mp_push_front.test | 10 | 0.000801s | 0.000814s | 0.000812s | byte equality observed |
| mp_push_front_2.test | 10 | 0.000360s | 0.000360s | 0.000766s | byte equality observed |
| mp_quote.test | 10 | 0.000798s | 0.000806s | 0.000821s | byte equality observed |
| mp_quote_trait.test | 10 | 0.000794s | 0.000820s | 0.000803s | byte equality observed |
| mp_remove.test | 10 | 0.000815s | 0.000823s | 0.000819s | byte equality observed |
| mp_remove_if.test | 10 | 0.000793s | 0.000842s | 0.000810s | byte equality observed |
| mp_remove_if_q.test | 10 | 0.000809s | 0.000828s | 0.000791s | byte equality observed |
| mp_rename.test | 10 | 0.000806s | 0.000823s | 0.000801s | byte equality observed |
| mp_rename_2.test | 10 | 0.000369s | 0.000353s | 0.000784s | byte equality observed |
| mp_rename_v.test | 10 | 0.000359s | 0.000357s | 0.000758s | byte equality observed |
| mp_repeat.test | 10 | 0.000812s | 0.000816s | 0.000788s | byte equality observed |
| mp_repeat_2.test | 10 | 0.000369s | 0.000361s | 0.000768s | byte equality observed |
| mp_repeat_3.test | 10 | 0.000809s | 0.000799s | 0.000790s | byte equality observed |
| mp_replace.test | 10 | 0.000798s | 0.000822s | 0.000797s | byte equality observed |
| mp_replace_at.test | 10 | 0.000801s | 0.000813s | 0.000824s | byte equality observed |
| mp_replace_at_c.test | 10 | 0.000817s | 0.000793s | 0.000790s | byte equality observed |
| mp_replace_front.test | 10 | 0.000803s | 0.000797s | 0.000791s | byte equality observed |
| mp_replace_front_2.test | 10 | 0.000365s | 0.000363s | 0.000780s | byte equality observed |
| mp_replace_if.test | 10 | 0.000822s | 0.000829s | 0.000784s | byte equality observed |
| mp_replace_if_q.test | 10 | 0.000809s | 0.000812s | 0.000805s | byte equality observed |
| mp_replace_second.test | 10 | 0.000801s | 0.000809s | 0.000799s | byte equality observed |
| mp_replace_second_2.test | 10 | 0.000361s | 0.000360s | 0.000799s | byte equality observed |
| mp_replace_third.test | 10 | 0.000802s | 0.000819s | 0.000793s | byte equality observed |
| mp_replace_third_2.test | 10 | 0.000360s | 0.000359s | 0.000749s | byte equality observed |
| mp_reverse.test | 10 | 0.000819s | 0.000813s | 0.000778s | byte equality observed |
| mp_reverse_fold.test | 10 | 0.000824s | 0.000813s | 0.000804s | byte equality observed |
| mp_reverse_fold_q.test | 10 | 0.000821s | 0.000827s | 0.000806s | byte equality observed |
| mp_rotate_left.test | 10 | 0.000820s | 0.000815s | 0.000827s | byte equality observed |
| mp_rotate_right.test | 10 | 0.000796s | 0.000832s | 0.000820s | byte equality observed |
| mp_same.test | 10 | 0.000792s | 0.000812s | 0.000787s | byte equality observed |
| mp_second.test | 10 | 0.000795s | 0.000811s | 0.000817s | byte equality observed |
| mp_second_2.test | 10 | 0.000363s | 0.000356s | 0.000798s | byte equality observed |
| mp_set_contains.test | 10 | 0.000804s | 0.000814s | 0.000805s | byte equality observed |
| mp_set_difference.test | 10 | 0.000786s | 0.000790s | 0.000802s | byte equality observed |
| mp_set_difference_sf.test | 10 | 0.000831s | 0.000800s | 0.000772s | byte equality observed |
| mp_set_intersection.test | 10 | 0.000825s | 0.000825s | 0.000801s | byte equality observed |
| mp_set_intersection_sf.test | 10 | 0.000808s | 0.000813s | 0.000785s | byte equality observed |
| mp_set_push_back.test | 10 | 0.000825s | 0.000842s | 0.000812s | byte equality observed |
| mp_set_push_front.test | 10 | 0.000821s | 0.000846s | 0.000798s | byte equality observed |
| mp_set_union.test | 10 | 0.000810s | 0.000848s | 0.000780s | byte equality observed |
| mp_set_union_sf.test | 10 | 0.000813s | 0.000820s | 0.000791s | byte equality observed |
| mp_similar.test | 10 | 0.000819s | 0.000810s | 0.000795s | byte equality observed |
| mp_size.test | 10 | 0.000805s | 0.000791s | 0.000810s | byte equality observed |
| mp_size_2.test | 10 | 0.000365s | 0.000363s | 0.000814s | byte equality observed |
| mp_slice.test | 10 | 0.000807s | 0.000816s | 0.000795s | byte equality observed |
| mp_slice_2.test | 10 | 0.000365s | 0.000359s | 0.000762s | byte equality observed |
| mp_sliding_fold.test | 10 | 0.000830s | 0.000868s | 0.000777s | byte equality observed |
| mp_sliding_fold_q.test | 10 | 0.000816s | 0.000846s | 0.000811s | byte equality observed |
| mp_sort.test | 10 | 0.000817s | 0.000810s | 0.000786s | byte equality observed |
| mp_sort_q.test | 10 | 0.000814s | 0.000832s | 0.000830s | byte equality observed |
| mp_split.test | 10 | 0.000808s | 0.000818s | 0.000803s | byte equality observed |
| mp_starts_with.test | 10 | 0.000786s | 0.000830s | 0.000807s | byte equality observed |
| mp_starts_with_sf.test | 10 | 0.000783s | 0.000806s | 0.000826s | byte equality observed |
| mp_take.test | 10 | 0.000823s | 0.000824s | 0.000796s | byte equality observed |
| mp_take_2.test | 10 | 0.000361s | 0.000371s | 0.000742s | byte equality observed |
| mp_third.test | 10 | 0.000795s | 0.000801s | 0.000774s | byte equality observed |
| mp_third_2.test | 10 | 0.000368s | 0.000357s | 0.000775s | byte equality observed |
| mp_transform.test | 10 | 0.000810s | 0.000800s | 0.000775s | byte equality observed |
| mp_transform_2.test | 10 | 0.000776s | 0.000768s | 0.000782s | byte equality observed |
| mp_transform_front.test | 10 | 0.000804s | 0.000794s | 0.000796s | byte equality observed |
| mp_transform_front_2.test | 10 | 0.000358s | 0.000365s | 0.000796s | byte equality observed |
| mp_transform_if.test | 10 | 0.000797s | 0.000798s | 0.000803s | byte equality observed |
| mp_transform_if_q.test | 10 | 0.000813s | 0.000814s | 0.000816s | byte equality observed |
| mp_transform_q.test | 10 | 0.000817s | 0.000826s | 0.000820s | byte equality observed |
| mp_transform_q_2.test | 10 | 0.000821s | 0.000797s | 0.000790s | byte equality observed |
| mp_transform_second.test | 10 | 0.000790s | 0.000802s | 0.000809s | byte equality observed |
| mp_transform_second_2.test | 10 | 0.000366s | 0.000368s | 0.000773s | byte equality observed |
| mp_transform_sf.test | 10 | 0.000802s | 0.000835s | 0.000778s | byte equality observed |
| mp_transform_third.test | 10 | 0.000817s | 0.000826s | 0.000811s | byte equality observed |
| mp_transform_third_2.test | 10 | 0.000362s | 0.000353s | 0.000800s | byte equality observed |
| mp_unique.test | 10 | 0.000808s | 0.000790s | 0.000803s | byte equality observed |
| mp_unique_if.test | 10 | 0.000812s | 0.000811s | 0.000790s | byte equality observed |
| mp_unique_if_q.test | 10 | 0.000819s | 0.000792s | 0.000790s | byte equality observed |
| mp_valid.test | 10 | 0.000829s | 0.000826s | 0.000818s | byte equality observed |
| mp_valid_and_true.test | 10 | 0.000801s | 0.000824s | 0.000785s | byte equality observed |
| mp_value.test | 10 | 0.000360s | 0.000365s | 0.000783s | byte equality observed |
| mp_with_index.test | 10 | 0.001105s | 0.001072s | 0.001015s | byte equality observed |
| mp_with_index_cx.test | 10 | 0.000368s | 0.000358s | 0.000773s | byte equality observed |
| mpl.test | 10 | 0.000825s | 0.000810s | 0.000816s | byte equality observed |
| mpl_list.test | 10 | 0.000812s | 0.000810s | 0.000804s | byte equality observed |
| mpl_tuple.test | 10 | 0.000808s | 0.000803s | 0.000805s | byte equality observed |
| mpl_version.test | 10 | 0.000801s | 0.000801s | 0.000815s | byte equality observed |
| set_version.test | 10 | 0.000806s | 0.000813s | 0.000827s | byte equality observed |
| tuple_apply.test | 10 | 0.000819s | 0.000822s | 0.000781s | byte equality observed |
| tuple_for_each.test | 10 | 0.000812s | 0.000827s | 0.000826s | byte equality observed |
| tuple_transform.test | 10 | 0.000783s | 0.000824s | 0.000828s | byte equality observed |
| tuple_transform_2.test | 10 | 0.000816s | 0.000811s | 0.000806s | byte equality observed |
| tuple_version.test | 10 | 0.000822s | 0.000808s | 0.000803s | byte equality observed |
| utility_version.test | 10 | 0.000802s | 0.000802s | 0.000816s | byte equality observed |
| version.test | 10 | 0.000804s | 0.000795s | 0.000823s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44362912212).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
