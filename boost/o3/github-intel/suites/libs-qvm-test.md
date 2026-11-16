# libs/qvm/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| math_test.test | RUN | 0.200693 | 0.552968 | 0.591908 | 0.001814 | 0.001684 | 0.001484 |
| mat_traits_array_test.test | RUN | 0.158083 | 0.557779 | 0.461293 | 0.000982 | 0.001137 | 0.001204 |
| mat_traits_std_array_test.test | RUN | 0.155868 | 0.428673 | 0.462968 | 0.001348 | 0.001359 | 0.001037 |
| vec_traits_array_test.test | RUN | 0.134601 | 0.430922 | 0.393331 | 0.001107 | 0.001188 | 0.001048 |
| vec_traits_gnuc_test.test | RUN | 0.251216 | 0.510981 | 0.746928 | 0.001125 | 0.001391 | 0.001113 |
| vec_traits_std_array_test.test | RUN | 0.136457 | 0.332243 | 0.389397 | 0.001212 | 0.001216 | 0.001137 |
| quat_traits_array_test.test | RUN | 0.131964 | 0.455727 | 0.386557 | 0.001070 | 0.001256 | 0.001122 |
| quat_traits_std_array_test.test | RUN | 0.133965 | 0.337763 | 0.383305 | 0.001394 | 0.001316 | 0.001163 |
| access_m_test.test | RUN | 0.218032 | 0.799817 | 0.885289 | 0.001546 | 0.001260 | 0.001279 |
| access_m_fail1.test | COMPILE_FAIL | 0.020748 | 0.034176 | 0.055596 | — | — | — |
| access_m_fail2.test | COMPILE_FAIL | 0.020537 | 0.033272 | 0.056512 | — | — | — |
| access_q_test.test | RUN | 0.184422 | 0.417581 | 0.533277 | 0.001311 | 0.001286 | 0.001121 |
| access_q_fail.test | COMPILE_FAIL | 0.015872 | 0.026825 | 0.048102 | — | — | — |
| access_v_test.test | RUN | 0.180601 | 0.428336 | 0.529264 | 0.001146 | 0.001210 | 0.001147 |
| access_v_fail1.test | COMPILE_FAIL | 0.014031 | 0.025177 | 0.042009 | — | — | — |
| access_v_fail2.test | COMPILE_FAIL | 0.013528 | 0.025345 | 0.043262 | — | — | — |
| assign_test.test | RUN | 0.274377 | 0.684043 | 0.961985 | 0.001438 | 0.001334 | 0.001132 |
| to_string_test.test | RUN | 0.323310 | 1.160435 | 5.589870 | 0.001382 | 0.001232 | 0.001281 |
| cmp_vv_test.test | RUN | 0.224391 | 0.546686 | 0.626433 | 0.001108 | 0.001240 | 0.001107 |
| cross_test.test | RUN | 0.214087 | 0.501630 | 0.620171 | 0.001395 | 0.001191 | 0.001165 |
| div_eq_vs_test.test | RUN | 0.207413 | 0.460323 | 0.619873 | 0.001561 | 0.001336 | 0.001215 |
| div_vs_test.test | RUN | 0.216603 | 0.590517 | 0.648840 | 0.001232 | 0.001244 | 0.001157 |
| dot_vv_test.test | RUN | 0.204843 | 0.507315 | 0.613207 | 0.001335 | 0.001267 | 0.001235 |
| eq_vv_test.test | RUN | 0.232594 | 0.578576 | 0.679529 | 0.001163 | 0.001378 | 0.001052 |
| mag_v_test.test | RUN | 0.201592 | 0.473929 | 0.589182 | 0.001472 | 0.001302 | 0.001070 |
| mag_sqr_v_test.test | RUN | 0.203832 | 0.471248 | 0.563300 | 0.001160 | 0.001229 | 0.001145 |
| minus_v_test.test | RUN | 0.211665 | 0.546785 | 0.639391 | 0.001141 | 0.001192 | 0.001266 |
| minus_eq_vv_test.test | RUN | 0.209041 | 0.535090 | 0.603446 | 0.001130 | 0.001293 | 0.001232 |
| minus_vv_test.test | RUN | 0.218277 | 0.583621 | 0.654391 | 0.001540 | 0.001198 | 0.001122 |
| mul_eq_vs_test.test | RUN | 0.210497 | 0.467123 | 0.619572 | 0.001082 | 0.001248 | 0.001124 |
| mul_vs_test.test | RUN | 0.217142 | 0.577124 | 0.664815 | 0.001231 | 0.001250 | 0.001098 |
| mul_sv_test.test | RUN | 0.220420 | 0.583979 | 0.648728 | 0.001136 | 0.001388 | 0.001110 |
| mul_vm_test.test | RUN | 0.303439 | 1.047679 | 1.031362 | 0.001229 | 0.001310 | 0.001254 |
| normalize_v_test.test | RUN | 0.223313 | 0.718530 | 0.677669 | 0.001230 | 0.001341 | 0.001275 |
| plus_eq_vv_test.test | RUN | 0.207711 | 0.540053 | 0.584202 | 0.001103 | 0.001204 | 0.001206 |
| plus_vv_test.test | RUN | 0.223159 | 0.581558 | 0.652484 | 0.001075 | 0.001350 | 0.001141 |
| scalar_cast_v_test.test | RUN | 0.199068 | 0.435384 | 0.571607 | 0.001198 | 0.001376 | 0.001149 |
| vec_index_test.test | RUN | 0.175002 | 0.444414 | 0.518023 | 0.001168 | 0.001089 | 0.001247 |
| vec_register_test.test | RUN | 0.116946 | 0.403311 | 0.373154 | 0.001408 | 0.001262 | 0.001273 |
| cmp_mm_test.test | RUN | 0.353540 | 1.279578 | 1.358145 | 0.001501 | 0.001257 | 0.001203 |
| determinant_test.test | RUN | 0.246971 | 0.658835 | 0.707763 | 0.001237 | 0.001168 | 0.001272 |
| div_eq_ms_test.test | RUN | 0.245172 | 0.600720 | 0.808886 | 0.001391 | 0.001331 | 0.001230 |
| div_ms_test.test | RUN | 0.288252 | 0.964515 | 0.993820 | 0.001188 | 0.001320 | 0.001125 |
| eq_mm_test.test | RUN | 0.335910 | 1.189685 | 1.272254 | 0.001448 | 0.001230 | 0.001133 |
| minus_m_test.test | RUN | 0.290184 | 0.954080 | 0.964922 | 0.001182 | 0.001345 | 0.000976 |
| minus_eq_mm_test.test | RUN | 0.269745 | 0.873573 | 0.904789 | 0.001249 | 0.001259 | 0.001162 |
| minus_mm_test.test | RUN | 0.305118 | 1.125974 | 1.058867 | 0.001253 | 0.001218 | 0.001161 |
| mul_eq_mm_test.test | RUN | 0.253323 | 0.825612 | 0.798804 | 0.001243 | 0.001205 | 0.001084 |
| mul_eq_ms_test.test | RUN | 0.247600 | 0.592396 | 0.817859 | 0.001304 | 0.001420 | 0.001035 |
| mul_mm_test.test | RUN | 0.366800 | 1.834508 | 1.316554 | 0.001169 | 0.001263 | 0.001158 |
| mul_ms_test.test | RUN | 0.293380 | 0.976213 | 1.023839 | 0.001251 | 0.001250 | 0.001358 |
| mul_sm_test.test | RUN | 0.298698 | 0.970829 | 1.014868 | 0.001371 | 0.001401 | 0.001103 |
| mul_mv_test.test | RUN | 0.302969 | 1.033497 | 1.025778 | 0.001236 | 0.001348 | 0.000815 |
| inverse_m_test.test | RUN | 0.422488 | 1.911961 | 1.447414 | 0.001595 | 0.001407 | 0.001221 |
| plus_eq_mm_test.test | RUN | 0.278544 | 0.881788 | 0.900308 | 0.001210 | 0.001273 | 0.001133 |
| plus_mm_test.test | RUN | 0.310296 | 1.103561 | 1.050496 | 0.001458 | 0.001267 | 0.001121 |
| scalar_cast_m_test.test | RUN | 0.231333 | 0.500044 | 0.652200 | 0.001302 | 0.001340 | 0.001228 |
| mat_index_test.test | RUN | 0.187127 | 0.475245 | 0.567088 | 0.001242 | 0.001166 | 0.001161 |
| cmp_qq_test.test | RUN | 0.204746 | 0.442554 | 0.540451 | 0.001167 | 0.001353 | 0.001267 |
| conjugate_test.test | RUN | 0.198512 | 0.454014 | 0.562619 | 0.001455 | 0.001264 | 0.001281 |
| normalize_q_test.test | RUN | 0.207657 | 0.508928 | 0.589992 | 0.001370 | 0.001314 | 0.001155 |
| div_eq_qs_test.test | RUN | 0.195002 | 0.421924 | 0.558692 | 0.001124 | 0.001388 | 0.001181 |
| div_qs_test.test | RUN | 0.203275 | 0.462395 | 0.564786 | 0.001381 | 0.001201 | 0.001276 |
| dot_qq_test.test | RUN | 0.200540 | 0.440858 | 0.575853 | 0.001361 | 0.001406 | 0.001146 |
| eq_qq_test.test | RUN | 0.204245 | 0.470393 | 0.568831 | 0.001444 | 0.001245 | 0.001206 |
| inverse_q_test.test | RUN | 0.245272 | 0.616771 | 0.727558 | 0.001064 | 0.001352 | 0.001242 |
| mag_q_test.test | RUN | 0.203604 | 0.458668 | 0.559357 | 0.001406 | 0.001170 | 0.001140 |
| mag_sqr_q_test.test | RUN | 0.205922 | 0.452377 | 0.559582 | 0.001396 | 0.001256 | 0.000998 |
| minus_q_test.test | RUN | 0.197280 | 0.463355 | 0.561187 | 0.001331 | 0.001366 | 0.001149 |
| minus_eq_qq_test.test | RUN | 0.198821 | 0.463364 | 0.562762 | 0.001174 | 0.001146 | 0.001180 |
| minus_qq_test.test | RUN | 0.202813 | 0.461515 | 0.569495 | 0.001384 | 0.001241 | 0.001085 |
| mul_eq_qs_test.test | RUN | 0.205186 | 0.432242 | 0.550493 | 0.001459 | 0.001295 | 0.001098 |
| mul_qs_test.test | RUN | 0.198195 | 0.459620 | 0.562693 | 0.001420 | 0.001258 | 0.001116 |
| mul_qv_test.test | RUN | 0.254310 | 0.624205 | 0.732096 | 0.001230 | 0.001276 | 0.001123 |
| mul_qq_test.test | RUN | 0.242950 | 0.625088 | 0.709100 | 0.001458 | 0.001278 | 0.001075 |
| mul_eq_qq_test.test | RUN | 0.239860 | 0.638035 | 0.712969 | 0.001322 | 0.001279 | 0.001100 |
| plus_eq_qq_test.test | RUN | 0.198967 | 0.451415 | 0.561738 | 0.001223 | 0.001374 | 0.001218 |
| plus_qq_test.test | RUN | 0.208342 | 0.459770 | 0.579425 | 0.001231 | 0.001306 | 0.001007 |
| scalar_cast_q_test.test | RUN | 0.205856 | 0.424604 | 0.567208 | 0.001167 | 0.001368 | 0.001038 |
| slerp_test.test | RUN | 0.216667 | 0.903789 | 0.687599 | 0.015394 | 0.013106 | 0.013604 |
| convert_to_test.test | RUN | 0.296672 | 0.809264 | 1.057595 | 0.001241 | 0.001218 | 0.001205 |
| rot_mat_test.test | RUN | 0.485946 | 3.739356 | 3.300724 | 0.029078 | 0.033210 | 0.033669 |
| rot_quat_test.test | RUN | 0.250820 | 0.749680 | 0.740808 | 0.001482 | 0.001300 | 0.001114 |
| rotx_mat_test.test | RUN | 0.278242 | 0.975326 | 0.977370 | 0.001374 | 0.001230 | 0.001195 |
| rotx_quat_test.test | RUN | 0.245541 | 0.629889 | 0.690052 | 0.001150 | 0.001237 | 0.001191 |
| roty_mat_test.test | RUN | 0.284393 | 0.987542 | 0.939217 | 0.001401 | 0.001369 | 0.001241 |
| roty_quat_test.test | RUN | 0.238250 | 0.631377 | 0.647577 | 0.001246 | 0.001226 | 0.001306 |
| rotz_mat_test.test | RUN | 0.298262 | 1.094455 | 1.018854 | 0.001263 | 0.001164 | 0.001141 |
| rotz_quat_test.test | RUN | 0.245329 | 0.628562 | 0.696175 | 0.001388 | 0.001306 | 0.001184 |
| zero_vec_test.test | RUN | 0.214043 | 0.552565 | 0.574626 | 0.001446 | 0.001201 | 0.001152 |
| zero_mat_test.test | RUN | 0.256402 | 0.896468 | 0.815526 | 0.001276 | 0.001344 | 0.001164 |
| zero_quat_test.test | RUN | 0.194662 | 0.449983 | 0.547694 | 0.001245 | 0.001322 | 0.001238 |
| identity_mat_test.test | RUN | 0.241826 | 0.659839 | 0.728088 | 0.001182 | 0.001198 | 0.001120 |
| identity_quat_test.test | RUN | 0.197745 | 0.438893 | 0.554065 | 0.001524 | 0.001410 | 0.001115 |
| col_test.test | RUN | 0.388714 | 1.427908 | 1.597984 | 0.001316 | 0.001205 | 0.001086 |
| col_mat_test.test | RUN | 0.250560 | 0.625654 | 0.750788 | 0.001258 | 0.001244 | 0.001172 |
| neg_col_test.test | RUN | 0.298318 | 0.893503 | 0.970432 | 0.001133 | 0.001241 | 0.001232 |
| neg_row_test.test | RUN | 0.298871 | 0.887914 | 0.964327 | 0.001342 | 0.001347 | 0.001172 |
| del_col_test.test | RUN | 0.306794 | 0.965106 | 0.983625 | 0.001317 | 0.001470 | 0.001282 |
| del_row_test.test | RUN | 0.308341 | 0.965151 | 0.997243 | 0.001155 | 0.001290 | 0.001131 |
| del_row_col_test.test | RUN | 0.426509 | 1.803997 | 1.827211 | 0.001398 | 0.001286 | 0.001127 |
| swap_cols_test.test | RUN | 0.595934 | 2.398626 | 2.270787 | 0.001400 | 0.001351 | 0.001222 |
| swap_rows_test.test | RUN | 0.643202 | 2.535906 | 2.272894 | 0.001330 | 0.001348 | 0.001118 |
| diag_test.test | RUN | 0.264162 | 0.651469 | 0.850001 | 0.001261 | 0.001218 | 0.001151 |
| diag_mat_test.test | RUN | 0.265881 | 0.653294 | 0.762083 | 0.001298 | 0.001398 | 0.001106 |
| row_test.test | RUN | 0.395524 | 1.399767 | 1.579424 | 0.001231 | 0.001318 | 0.001226 |
| row_mat_test.test | RUN | 0.251215 | 0.604870 | 0.752461 | 0.001232 | 0.001290 | 0.001229 |
| transpose_test.test | RUN | 0.303736 | 0.954507 | 1.034469 | 0.001152 | 0.001297 | 0.001238 |
| translation_test.test | RUN | 0.246648 | 0.599946 | 0.758235 | 0.001383 | 0.001221 | 0.001145 |
| translation_mat_test.test | RUN | 0.264588 | 0.616719 | 0.843788 | 0.001072 | 0.001294 | 0.001077 |
| swizzle_const_fail.test | COMPILE_FAIL | 0.086587 | 0.168933 | 0.214081 | — | — | — |
| swizzle2_test2.test | RUN | 0.107434 | 0.260961 | 0.318185 | 0.001381 | 0.001300 | 0.001221 |
| swizzle2_test3.test | RUN | 0.110937 | 0.256273 | 0.303761 | 0.001291 | 0.001188 | 0.001091 |
| swizzle2_test4.test | RUN | 0.107837 | 0.265470 | 0.307061 | 0.001149 | 0.001354 | 0.001084 |
| swizzle2_test.test | RUN | 0.343371 | 0.706416 | 0.965812 | 0.001219 | 0.001331 | 0.001123 |
| swizzle3_test2.test | RUN | 0.117001 | 0.281925 | 0.338501 | 0.001445 | 0.001370 | 0.001071 |
| swizzle3_test3.test | RUN | 0.119477 | 0.272309 | 0.337388 | 0.001131 | 0.001282 | 0.001100 |
| swizzle3_test4.test | RUN | 0.117457 | 0.275383 | 0.338659 | 0.001012 | 0.001284 | 0.001100 |
| swizzle3_test.test | RUN | 0.329047 | 0.723673 | 0.958292 | 0.001212 | 0.001213 | 0.001141 |
| swizzle4_test2.test | RUN | 0.195959 | 0.384888 | 0.537900 | 0.001251 | 0.001394 | 0.001160 |
| swizzle4_test3.test | RUN | 0.197410 | 0.399922 | 0.550956 | 0.001298 | 0.001405 | 0.001073 |
| swizzle4_test4.test | RUN | 0.203981 | 0.384976 | 0.544659 | 0.001241 | 0.001391 | 0.001116 |
| swizzle4_test.test | RUN | 0.351264 | 0.789639 | 1.018465 | 0.001471 | 0.001215 | 0.001088 |
| deduce_scalar_test.test | COMPILE | 0.017353 | 0.038989 | 0.049510 | — | — | — |
| deduce_scalar_mq_test.test | RUN | 0.130174 | 0.297603 | 0.362041 | 0.001258 | 0.001146 | 0.001093 |
| deduce_scalar_mv_test.test | RUN | 0.151524 | 0.343454 | 0.427841 | 0.001182 | 0.001269 | 0.001107 |
| deduce_scalar_fail.test | COMPILE_FAIL | 0.013762 | 0.023298 | 0.041187 | — | — | — |
| deduce_mat_test.test | COMPILE | 0.016363 | 0.033008 | 0.045424 | — | — | — |
| deduce_quat_test.test | COMPILE | 0.015201 | 0.032275 | 0.046331 | — | — | — |
| deduce_vec_test.test | COMPILE | 0.015725 | 0.030375 | 0.045991 | — | — | — |
| interop_test.test | RUN | 0.160260 | 0.399855 | 0.621059 | 0.000591 | 0.000417 | 0.000905 |
| transform_test.test | RUN | 0.311134 | 0.625184 | 0.877793 | 0.001029 | 0.000872 | 0.000795 |
| projection_test.test | RUN | 0.204582 | 0.476793 | 0.505949 | 0.000942 | 0.000915 | 0.001219 |
| scalar_traits_test.test | COMPILE | 0.016253 | 0.034013 | 0.049245 | — | — | — |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 1.001× | 1.005×, 0.998× | 0.997× |
| clang | 1.041× | 1.042×, 1.039× | 0.994× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1362 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/43822097733).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| access_m_test.test | 10 | 0.000810s | 0.000815s | 0.000806s | byte equality observed |
| access_q_test.test | 10 | 0.000804s | 0.000839s | 0.000824s | byte equality observed |
| access_v_test.test | 10 | 0.000805s | 0.000817s | 0.000843s | byte equality observed |
| assign_test.test | 10 | 0.000815s | 0.000814s | 0.000844s | byte equality observed |
| cmp_mm_test.test | 10 | 0.000825s | 0.000823s | 0.000825s | byte equality observed |
| cmp_qq_test.test | 10 | 0.000818s | 0.000802s | 0.000828s | byte equality observed |
| cmp_vv_test.test | 10 | 0.000812s | 0.000840s | 0.000806s | byte equality observed |
| col_mat_test.test | 10 | 0.000826s | 0.000810s | 0.000805s | byte equality observed |
| col_test.test | 10 | 0.000805s | 0.000826s | 0.000813s | byte equality observed |
| conjugate_test.test | 10 | 0.000837s | 0.000811s | 0.000840s | byte equality observed |
| convert_to_test.test | 10 | 0.000833s | 0.000829s | 0.000839s | byte equality observed |
| cross_test.test | 10 | 0.000842s | 0.000833s | 0.000831s | byte equality observed |
| deduce_scalar_mq_test.test | 10 | 0.000833s | 0.000811s | 0.000812s | byte equality observed |
| deduce_scalar_mv_test.test | 10 | 0.000820s | 0.000846s | 0.000809s | byte equality observed |
| del_col_test.test | 10 | 0.000834s | 0.000856s | 0.000822s | byte equality observed |
| del_row_col_test.test | 10 | 0.000835s | 0.000829s | 0.000810s | byte equality observed |
| del_row_test.test | 10 | 0.000828s | 0.000809s | 0.000839s | byte equality observed |
| determinant_test.test | 10 | 0.000861s | 0.000850s | 0.000846s | byte equality observed |
| diag_mat_test.test | 10 | 0.000847s | 0.000837s | 0.000815s | byte equality observed |
| diag_test.test | 10 | 0.000849s | 0.000836s | 0.000858s | byte equality observed |
| div_eq_ms_test.test | 10 | 0.000827s | 0.000828s | 0.000835s | byte equality observed |
| div_eq_qs_test.test | 10 | 0.000827s | 0.000828s | 0.000831s | byte equality observed |
| div_eq_vs_test.test | 10 | 0.000808s | 0.000805s | 0.000812s | byte equality observed |
| div_ms_test.test | 10 | 0.000816s | 0.000806s | 0.000841s | byte equality observed |
| div_qs_test.test | 10 | 0.000811s | 0.000818s | 0.000846s | byte equality observed |
| div_vs_test.test | 10 | 0.000823s | 0.000815s | 0.000805s | byte equality observed |
| dot_qq_test.test | 10 | 0.000811s | 0.000845s | 0.000795s | byte equality observed |
| dot_vv_test.test | 10 | 0.000819s | 0.000809s | 0.000816s | byte equality observed |
| eq_mm_test.test | 10 | 0.000836s | 0.000813s | 0.000824s | byte equality observed |
| eq_qq_test.test | 10 | 0.000844s | 0.000812s | 0.000831s | byte equality observed |
| eq_vv_test.test | 10 | 0.000791s | 0.000811s | 0.000802s | byte equality observed |
| identity_mat_test.test | 10 | 0.000807s | 0.000826s | 0.000804s | byte equality observed |
| identity_quat_test.test | 10 | 0.000791s | 0.000814s | 0.000811s | byte equality observed |
| interop_test.test | 10 | 0.000364s | 0.000364s | 0.000776s | byte equality observed |
| inverse_m_test.test | 10 | 0.000865s | 0.000847s | 0.000839s | byte equality observed |
| inverse_q_test.test | 10 | 0.000808s | 0.000802s | 0.000792s | byte equality observed |
| mag_q_test.test | 10 | 0.000810s | 0.000834s | 0.000800s | byte equality observed |
| mag_sqr_q_test.test | 10 | 0.000812s | 0.000824s | 0.000797s | byte equality observed |
| mag_sqr_v_test.test | 10 | 0.000812s | 0.000806s | 0.000825s | byte equality observed |
| mag_v_test.test | 10 | 0.000827s | 0.000808s | 0.000814s | byte equality observed |
| mat_index_test.test | 10 | 0.000837s | 0.000822s | 0.000808s | byte equality observed |
| mat_traits_array_test.test | 10 | 0.000816s | 0.000809s | 0.000802s | byte equality observed |
| mat_traits_std_array_test.test | 10 | 0.000807s | 0.000800s | 0.000797s | byte equality observed |
| math_test.test | 10 | 0.001209s | 0.001182s | 0.001067s | byte equality observed |
| minus_eq_mm_test.test | 10 | 0.000812s | 0.000800s | 0.000784s | byte equality observed |
| minus_eq_qq_test.test | 10 | 0.000812s | 0.000807s | 0.000829s | byte equality observed |
| minus_eq_vv_test.test | 10 | 0.000812s | 0.000824s | 0.000836s | byte equality observed |
| minus_m_test.test | 10 | 0.000812s | 0.000861s | 0.000843s | byte equality observed |
| minus_mm_test.test | 10 | 0.000832s | 0.000818s | 0.000849s | byte equality observed |
| minus_q_test.test | 10 | 0.000816s | 0.000837s | 0.000800s | byte equality observed |
| minus_qq_test.test | 10 | 0.000816s | 0.000819s | 0.000819s | byte equality observed |
| minus_v_test.test | 10 | 0.000814s | 0.000834s | 0.000824s | byte equality observed |
| minus_vv_test.test | 10 | 0.000818s | 0.000813s | 0.000827s | byte equality observed |
| mul_eq_mm_test.test | 10 | 0.000794s | 0.000839s | 0.000810s | byte equality observed |
| mul_eq_ms_test.test | 10 | 0.000816s | 0.000822s | 0.000822s | byte equality observed |
| mul_eq_qq_test.test | 10 | 0.000837s | 0.000835s | 0.000853s | byte equality observed |
| mul_eq_qs_test.test | 10 | 0.000808s | 0.000822s | 0.000801s | byte equality observed |
| mul_eq_vs_test.test | 10 | 0.000801s | 0.000807s | 0.000791s | byte equality observed |
| mul_mm_test.test | 10 | 0.000819s | 0.000809s | 0.000813s | byte equality observed |
| mul_ms_test.test | 10 | 0.000832s | 0.000792s | 0.000821s | byte equality observed |
| mul_mv_test.test | 10 | 0.000819s | 0.000787s | 0.000834s | byte equality observed |
| mul_qq_test.test | 10 | 0.000836s | 0.000813s | 0.000838s | byte equality observed |
| mul_qs_test.test | 10 | 0.000806s | 0.000805s | 0.000820s | byte equality observed |
| mul_qv_test.test | 10 | 0.000818s | 0.000838s | 0.000821s | byte equality observed |
| mul_sm_test.test | 10 | 0.000809s | 0.000829s | 0.000804s | byte equality observed |
| mul_sv_test.test | 10 | 0.000827s | 0.000815s | 0.000816s | byte equality observed |
| mul_vm_test.test | 10 | 0.000804s | 0.000844s | 0.000792s | byte equality observed |
| mul_vs_test.test | 10 | 0.000798s | 0.000796s | 0.000821s | byte equality observed |
| neg_col_test.test | 10 | 0.000801s | 0.000819s | 0.000798s | byte equality observed |
| neg_row_test.test | 10 | 0.000819s | 0.000817s | 0.000812s | byte equality observed |
| normalize_q_test.test | 10 | 0.000820s | 0.000821s | 0.000806s | byte equality observed |
| normalize_v_test.test | 10 | 0.000823s | 0.000828s | 0.000857s | byte equality observed |
| plus_eq_mm_test.test | 10 | 0.000809s | 0.000841s | 0.000812s | byte equality observed |
| plus_eq_qq_test.test | 10 | 0.000819s | 0.000821s | 0.000836s | byte equality observed |
| plus_eq_vv_test.test | 10 | 0.000815s | 0.000812s | 0.000853s | byte equality observed |
| plus_mm_test.test | 10 | 0.000808s | 0.000821s | 0.000823s | byte equality observed |
| plus_qq_test.test | 10 | 0.000831s | 0.000826s | 0.000791s | byte equality observed |
| plus_vv_test.test | 10 | 0.000825s | 0.000822s | 0.000825s | byte equality observed |
| projection_test.test | 10 | 0.000832s | 0.000816s | 0.000820s | byte equality observed |
| quat_traits_array_test.test | 10 | 0.000823s | 0.000809s | 0.000844s | byte equality observed |
| quat_traits_std_array_test.test | 10 | 0.000810s | 0.000796s | 0.000797s | byte equality observed |
| rot_mat_test.test | 1 | 0.020234s | 0.021864s | 0.026418s | byte equality observed |
| rot_quat_test.test | 10 | 0.000735s | 0.000761s | 0.000764s | byte equality observed |
| rotx_mat_test.test | 10 | 0.000775s | 0.000765s | 0.000734s | byte equality observed |
| rotx_quat_test.test | 10 | 0.000826s | 0.000835s | 0.000821s | byte equality observed |
| roty_mat_test.test | 10 | 0.000814s | 0.000844s | 0.000877s | byte equality observed |
| roty_quat_test.test | 10 | 0.000848s | 0.000846s | 0.000832s | byte equality observed |
| rotz_mat_test.test | 10 | 0.000812s | 0.000839s | 0.000832s | byte equality observed |
| rotz_quat_test.test | 10 | 0.000829s | 0.000844s | 0.000828s | byte equality observed |
| row_mat_test.test | 10 | 0.000838s | 0.000811s | 0.000830s | byte equality observed |
| row_test.test | 10 | 0.000826s | 0.000834s | 0.000844s | byte equality observed |
| scalar_cast_m_test.test | 10 | 0.000814s | 0.000839s | 0.000839s | byte equality observed |
| scalar_cast_q_test.test | 10 | 0.000818s | 0.000821s | 0.000795s | byte equality observed |
| scalar_cast_v_test.test | 10 | 0.000775s | 0.000800s | 0.000794s | byte equality observed |
| slerp_test.test | 2 | 0.011134s | 0.009481s | 0.009775s | byte equality observed |
| swap_cols_test.test | 10 | 0.000751s | 0.000742s | 0.000755s | byte equality observed |
| swap_rows_test.test | 10 | 0.000758s | 0.000751s | 0.000746s | byte equality observed |
| swizzle2_test.test | 10 | 0.000823s | 0.000804s | 0.000803s | byte equality observed |
| swizzle2_test2.test | 10 | 0.000832s | 0.000805s | 0.000815s | byte equality observed |
| swizzle2_test3.test | 10 | 0.000827s | 0.000813s | 0.000818s | byte equality observed |
| swizzle2_test4.test | 10 | 0.000810s | 0.000802s | 0.000816s | byte equality observed |
| swizzle3_test.test | 10 | 0.000820s | 0.000837s | 0.000846s | byte equality observed |
| swizzle3_test2.test | 10 | 0.000815s | 0.000823s | 0.000834s | byte equality observed |
| swizzle3_test3.test | 10 | 0.000828s | 0.000831s | 0.000789s | byte equality observed |
| swizzle3_test4.test | 10 | 0.000827s | 0.000805s | 0.000813s | byte equality observed |
| swizzle4_test.test | 10 | 0.000841s | 0.000804s | 0.000825s | byte equality observed |
| swizzle4_test2.test | 10 | 0.000811s | 0.000811s | 0.000839s | byte equality observed |
| swizzle4_test3.test | 10 | 0.000804s | 0.000839s | 0.000831s | byte equality observed |
| swizzle4_test4.test | 10 | 0.000837s | 0.000840s | 0.000815s | byte equality observed |
| to_string_test.test | 10 | 0.000848s | 0.000845s | 0.000834s | byte equality observed |
| transform_test.test | 10 | 0.000822s | 0.000826s | 0.000802s | byte equality observed |
| translation_mat_test.test | 10 | 0.000817s | 0.000813s | 0.000817s | byte equality observed |
| translation_test.test | 10 | 0.000827s | 0.000828s | 0.000804s | byte equality observed |
| transpose_test.test | 10 | 0.000827s | 0.000850s | 0.000797s | byte equality observed |
| vec_index_test.test | 10 | 0.000806s | 0.000794s | 0.000843s | byte equality observed |
| vec_register_test.test | 10 | 0.000826s | 0.000814s | 0.000836s | byte equality observed |
| vec_traits_array_test.test | 10 | 0.000813s | 0.000810s | 0.000824s | byte equality observed |
| vec_traits_gnuc_test.test | 10 | 0.000834s | 0.000820s | 0.000801s | byte equality observed |
| vec_traits_std_array_test.test | 10 | 0.000844s | 0.000836s | 0.000823s | byte equality observed |
| zero_mat_test.test | 10 | 0.000809s | 0.000814s | 0.000834s | byte equality observed |
| zero_quat_test.test | 10 | 0.000808s | 0.000833s | 0.000806s | byte equality observed |
| zero_vec_test.test | 10 | 0.000810s | 0.000826s | 0.000828s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/43822097733).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
