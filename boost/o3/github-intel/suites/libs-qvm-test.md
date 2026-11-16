# libs/qvm/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| math_test.test | RUN | 0.193492 | 0.561304 | 0.587601 | 0.001657 | 0.001654 | 0.001564 |
| mat_traits_array_test.test | RUN | 0.149646 | 0.564755 | 0.459404 | 0.001422 | 0.001199 | 0.001061 |
| mat_traits_std_array_test.test | RUN | 0.149813 | 0.433212 | 0.448952 | 0.001295 | 0.001262 | 0.001136 |
| vec_traits_array_test.test | RUN | 0.128706 | 0.430093 | 0.381274 | 0.001191 | 0.001427 | 0.000988 |
| vec_traits_gnuc_test.test | RUN | 0.232550 | 0.524165 | 0.735298 | 0.001085 | 0.001263 | 0.001127 |
| vec_traits_std_array_test.test | RUN | 0.128677 | 0.335100 | 0.385267 | 0.001343 | 0.001439 | 0.001211 |
| quat_traits_array_test.test | RUN | 0.126978 | 0.451787 | 0.382495 | 0.001101 | 0.001226 | 0.001148 |
| quat_traits_std_array_test.test | RUN | 0.124682 | 0.336352 | 0.379724 | 0.000963 | 0.001233 | 0.001156 |
| access_m_test.test | RUN | 0.209588 | 0.816556 | 0.868376 | 0.001402 | 0.001509 | 0.001214 |
| access_m_fail1.test | COMPILE_FAIL | 0.019198 | 0.035236 | 0.054530 | — | — | — |
| access_m_fail2.test | COMPILE_FAIL | 0.018773 | 0.033540 | 0.058177 | — | — | — |
| access_q_test.test | RUN | 0.171726 | 0.424083 | 0.511996 | 0.001266 | 0.001304 | 0.001162 |
| access_q_fail.test | COMPILE_FAIL | 0.015013 | 0.027606 | 0.047068 | — | — | — |
| access_v_test.test | RUN | 0.170212 | 0.430486 | 0.507408 | 0.001182 | 0.001392 | 0.001134 |
| access_v_fail1.test | COMPILE_FAIL | 0.013812 | 0.024261 | 0.040878 | — | — | — |
| access_v_fail2.test | COMPILE_FAIL | 0.014549 | 0.025770 | 0.041716 | — | — | — |
| assign_test.test | RUN | 0.263095 | 0.705565 | 0.926012 | 0.001409 | 0.001488 | 0.001179 |
| to_string_test.test | RUN | 0.312674 | 1.172974 | 5.506906 | 0.001219 | 0.001456 | 0.001215 |
| cmp_vv_test.test | RUN | 0.212864 | 0.557338 | 0.624840 | 0.001260 | 0.001382 | 0.001244 |
| cross_test.test | RUN | 0.201754 | 0.518301 | 0.613407 | 0.001306 | 0.001421 | 0.001214 |
| div_eq_vs_test.test | RUN | 0.197973 | 0.469427 | 0.609340 | 0.001452 | 0.001321 | 0.001338 |
| div_vs_test.test | RUN | 0.205526 | 0.584305 | 0.637578 | 0.001171 | 0.001409 | 0.001329 |
| dot_vv_test.test | RUN | 0.195374 | 0.517883 | 0.603879 | 0.001242 | 0.001250 | 0.001190 |
| eq_vv_test.test | RUN | 0.222052 | 0.587520 | 0.680461 | 0.001105 | 0.001303 | 0.001076 |
| mag_v_test.test | RUN | 0.197533 | 0.477609 | 0.564574 | 0.001193 | 0.001170 | 0.001165 |
| mag_sqr_v_test.test | RUN | 0.194672 | 0.479953 | 0.582445 | 0.001254 | 0.001278 | 0.001091 |
| minus_v_test.test | RUN | 0.202666 | 0.559314 | 0.639411 | 0.001107 | 0.001286 | 0.001336 |
| minus_eq_vv_test.test | RUN | 0.198889 | 0.539161 | 0.621083 | 0.001137 | 0.001492 | 0.001217 |
| minus_vv_test.test | RUN | 0.207932 | 0.577013 | 0.630179 | 0.001168 | 0.001293 | 0.001200 |
| mul_eq_vs_test.test | RUN | 0.195113 | 0.472322 | 0.612639 | 0.001127 | 0.001368 | 0.001115 |
| mul_vs_test.test | RUN | 0.205019 | 0.585978 | 0.643504 | 0.001194 | 0.001315 | 0.001183 |
| mul_sv_test.test | RUN | 0.207489 | 0.587587 | 0.660082 | 0.001081 | 0.001234 | 0.001075 |
| mul_vm_test.test | RUN | 0.283263 | 1.040560 | 1.018709 | 0.001144 | 0.001248 | 0.001328 |
| normalize_v_test.test | RUN | 0.210653 | 0.719391 | 0.629597 | 0.001445 | 0.001376 | 0.001267 |
| plus_eq_vv_test.test | RUN | 0.195937 | 0.543057 | 0.617945 | 0.001184 | 0.001380 | 0.001145 |
| plus_vv_test.test | RUN | 0.204927 | 0.581939 | 0.637754 | 0.001084 | 0.001364 | 0.001171 |
| scalar_cast_v_test.test | RUN | 0.191664 | 0.435901 | 0.556543 | 0.001124 | 0.001387 | 0.001123 |
| vec_index_test.test | RUN | 0.166989 | 0.445077 | 0.510040 | 0.001202 | 0.001235 | 0.001161 |
| vec_register_test.test | RUN | 0.113104 | 0.396296 | 0.368899 | 0.001410 | 0.001293 | 0.001249 |
| cmp_mm_test.test | RUN | 0.336905 | 1.302995 | 1.341906 | 0.001295 | 0.001268 | 0.001301 |
| determinant_test.test | RUN | 0.237061 | 0.654095 | 0.714824 | 0.001320 | 0.001326 | 0.001385 |
| div_eq_ms_test.test | RUN | 0.235982 | 0.603484 | 0.806751 | 0.001308 | 0.001204 | 0.001300 |
| div_ms_test.test | RUN | 0.279807 | 0.968662 | 0.991473 | 0.001068 | 0.001132 | 0.001247 |
| eq_mm_test.test | RUN | 0.327319 | 1.189894 | 1.276970 | 0.001301 | 0.001240 | 0.001153 |
| minus_m_test.test | RUN | 0.279286 | 0.943000 | 0.963928 | 0.001167 | 0.001403 | 0.001281 |
| minus_eq_mm_test.test | RUN | 0.268667 | 0.881916 | 0.896070 | 0.001164 | 0.001298 | 0.001097 |
| minus_mm_test.test | RUN | 0.299474 | 1.126422 | 1.043678 | 0.001157 | 0.001440 | 0.001271 |
| mul_eq_mm_test.test | RUN | 0.241842 | 0.826132 | 0.799202 | 0.001323 | 0.001234 | 0.001293 |
| mul_eq_ms_test.test | RUN | 0.237713 | 0.603071 | 0.814940 | 0.001171 | 0.001406 | 0.001150 |
| mul_mm_test.test | RUN | 0.352861 | 1.855060 | 1.313838 | 0.001208 | 0.001357 | 0.001191 |
| mul_ms_test.test | RUN | 0.288794 | 0.979249 | 1.015332 | 0.001169 | 0.001350 | 0.001178 |
| mul_sm_test.test | RUN | 0.290310 | 0.967324 | 1.023117 | 0.001126 | 0.001131 | 0.001152 |
| mul_mv_test.test | RUN | 0.302757 | 1.046254 | 1.022617 | 0.001219 | 0.001192 | 0.001212 |
| inverse_m_test.test | RUN | 0.399375 | 1.922932 | 1.453443 | 0.001424 | 0.001296 | 0.001208 |
| plus_eq_mm_test.test | RUN | 0.260505 | 0.880099 | 0.910355 | 0.001090 | 0.001344 | 0.001231 |
| plus_mm_test.test | RUN | 0.293475 | 1.120778 | 1.059885 | 0.001228 | 0.001497 | 0.001204 |
| scalar_cast_m_test.test | RUN | 0.219117 | 0.489064 | 0.651638 | 0.001124 | 0.001384 | 0.001257 |
| mat_index_test.test | RUN | 0.175715 | 0.480501 | 0.565808 | 0.001175 | 0.001316 | 0.001266 |
| cmp_qq_test.test | RUN | 0.192624 | 0.439886 | 0.539975 | 0.001143 | 0.001352 | 0.001171 |
| conjugate_test.test | RUN | 0.188440 | 0.456707 | 0.556044 | 0.001135 | 0.001427 | 0.001169 |
| normalize_q_test.test | RUN | 0.200831 | 0.509970 | 0.588017 | 0.001214 | 0.001132 | 0.001175 |
| div_eq_qs_test.test | RUN | 0.189282 | 0.424195 | 0.557934 | 0.001136 | 0.001245 | 0.001303 |
| div_qs_test.test | RUN | 0.194251 | 0.462771 | 0.565041 | 0.001273 | 0.001150 | 0.001208 |
| dot_qq_test.test | RUN | 0.193288 | 0.446127 | 0.572952 | 0.001253 | 0.001350 | 0.001264 |
| eq_qq_test.test | RUN | 0.200560 | 0.473358 | 0.574214 | 0.001170 | 0.001181 | 0.001215 |
| inverse_q_test.test | RUN | 0.233021 | 0.624427 | 0.719819 | 0.001209 | 0.001339 | 0.001130 |
| mag_q_test.test | RUN | 0.194002 | 0.458855 | 0.554892 | 0.001188 | 0.001200 | 0.001172 |
| mag_sqr_q_test.test | RUN | 0.190519 | 0.440341 | 0.549566 | 0.001172 | 0.001271 | 0.001236 |
| minus_q_test.test | RUN | 0.191051 | 0.459488 | 0.553395 | 0.001078 | 0.001374 | 0.001168 |
| minus_eq_qq_test.test | RUN | 0.193974 | 0.452735 | 0.567885 | 0.001246 | 0.001203 | 0.001144 |
| minus_qq_test.test | RUN | 0.198286 | 0.471688 | 0.577272 | 0.001144 | 0.001300 | 0.001102 |
| mul_eq_qs_test.test | RUN | 0.185858 | 0.426621 | 0.550026 | 0.001165 | 0.001467 | 0.001168 |
| mul_qs_test.test | RUN | 0.192248 | 0.461621 | 0.574465 | 0.001121 | 0.001356 | 0.001239 |
| mul_qv_test.test | RUN | 0.236694 | 0.625060 | 0.724148 | 0.001114 | 0.001392 | 0.001140 |
| mul_qq_test.test | RUN | 0.235471 | 0.641658 | 0.726253 | 0.001135 | 0.001195 | 0.001237 |
| mul_eq_qq_test.test | RUN | 0.227675 | 0.628823 | 0.710315 | 0.001220 | 0.001272 | 0.001093 |
| plus_eq_qq_test.test | RUN | 0.189302 | 0.452872 | 0.554596 | 0.001081 | 0.001363 | 0.001046 |
| plus_qq_test.test | RUN | 0.189830 | 0.465131 | 0.567569 | 0.001173 | 0.001446 | 0.001170 |
| scalar_cast_q_test.test | RUN | 0.187165 | 0.428522 | 0.548835 | 0.001205 | 0.001515 | 0.001372 |
| slerp_test.test | RUN | 0.204855 | 0.900593 | 0.672943 | 0.015282 | 0.013026 | 0.013290 |
| convert_to_test.test | RUN | 0.286090 | 0.817870 | 1.059288 | 0.001223 | 0.001304 | 0.001294 |
| rot_mat_test.test | RUN | 0.458532 | 3.816964 | 3.282635 | 0.030008 | 0.032216 | 0.033685 |
| rot_quat_test.test | RUN | 0.239455 | 0.742893 | 0.741907 | 0.001145 | 0.001408 | 0.001318 |
| rotx_mat_test.test | RUN | 0.267354 | 0.994053 | 0.957013 | 0.001193 | 0.001296 | 0.001269 |
| rotx_quat_test.test | RUN | 0.237001 | 0.626738 | 0.693396 | 0.001129 | 0.001370 | 0.001247 |
| roty_mat_test.test | RUN | 0.270410 | 0.987267 | 0.974256 | 0.001192 | 0.001502 | 0.001182 |
| roty_quat_test.test | RUN | 0.230586 | 0.625269 | 0.652779 | 0.001191 | 0.001328 | 0.001164 |
| rotz_mat_test.test | RUN | 0.292638 | 1.127690 | 1.021467 | 0.001135 | 0.001414 | 0.001123 |
| rotz_quat_test.test | RUN | 0.230251 | 0.635535 | 0.694986 | 0.001072 | 0.001267 | 0.001245 |
| zero_vec_test.test | RUN | 0.199307 | 0.539925 | 0.573193 | 0.001331 | 0.001198 | 0.001100 |
| zero_mat_test.test | RUN | 0.248590 | 0.907292 | 0.841841 | 0.001261 | 0.001373 | 0.001214 |
| zero_quat_test.test | RUN | 0.189407 | 0.460368 | 0.533957 | 0.001254 | 0.001309 | 0.001264 |
| identity_mat_test.test | RUN | 0.227297 | 0.659608 | 0.725594 | 0.001106 | 0.001276 | 0.001237 |
| identity_quat_test.test | RUN | 0.191750 | 0.447376 | 0.552467 | 0.001206 | 0.001359 | 0.001260 |
| col_test.test | RUN | 0.374527 | 1.417831 | 1.603510 | 0.001144 | 0.001616 | 0.001302 |
| col_mat_test.test | RUN | 0.240441 | 0.623655 | 0.760588 | 0.001208 | 0.001386 | 0.001172 |
| neg_col_test.test | RUN | 0.280830 | 0.887205 | 0.973644 | 0.001217 | 0.001329 | 0.001346 |
| neg_row_test.test | RUN | 0.287223 | 0.899915 | 0.962547 | 0.001244 | 0.001321 | 0.001163 |
| del_col_test.test | RUN | 0.304475 | 1.001905 | 1.001415 | 0.001144 | 0.001456 | 0.001202 |
| del_row_test.test | RUN | 0.298709 | 0.985743 | 0.996216 | 0.001304 | 0.001296 | 0.001194 |
| del_row_col_test.test | RUN | 0.411531 | 1.847794 | 1.842556 | 0.001213 | 0.001327 | 0.000986 |
| swap_cols_test.test | RUN | 0.568449 | 2.473441 | 2.248603 | 0.001194 | 0.001519 | 0.001174 |
| swap_rows_test.test | RUN | 0.625508 | 2.595044 | 2.257937 | 0.001324 | 0.001398 | 0.001121 |
| diag_test.test | RUN | 0.255726 | 0.663506 | 0.880728 | 0.001298 | 0.001472 | 0.001323 |
| diag_mat_test.test | RUN | 0.259926 | 0.648461 | 0.789828 | 0.001337 | 0.001385 | 0.001099 |
| row_test.test | RUN | 0.378511 | 1.396976 | 1.607343 | 0.001414 | 0.001410 | 0.001292 |
| row_mat_test.test | RUN | 0.249171 | 0.631198 | 0.713812 | 0.001306 | 0.001126 | 0.001194 |
| transpose_test.test | RUN | 0.290829 | 0.966322 | 1.021262 | 0.001123 | 0.001344 | 0.001125 |
| translation_test.test | RUN | 0.235052 | 0.596724 | 0.758093 | 0.001234 | 0.001094 | 0.001198 |
| translation_mat_test.test | RUN | 0.259830 | 0.604244 | 0.830398 | 0.001288 | 0.001247 | 0.001219 |
| swizzle_const_fail.test | COMPILE_FAIL | 0.084269 | 0.173298 | 0.219662 | — | — | — |
| swizzle2_test2.test | RUN | 0.102168 | 0.263506 | 0.312366 | 0.001110 | 0.001250 | 0.001096 |
| swizzle2_test3.test | RUN | 0.105895 | 0.257318 | 0.311041 | 0.001049 | 0.001304 | 0.001013 |
| swizzle2_test4.test | RUN | 0.106366 | 0.260859 | 0.308862 | 0.001071 | 0.001475 | 0.001145 |
| swizzle2_test.test | RUN | 0.331405 | 0.715294 | 0.964817 | 0.001170 | 0.001312 | 0.001184 |
| swizzle3_test2.test | RUN | 0.115151 | 0.281895 | 0.342416 | 0.001121 | 0.001498 | 0.001182 |
| swizzle3_test3.test | RUN | 0.118772 | 0.276615 | 0.336751 | 0.001059 | 0.001148 | 0.001126 |
| swizzle3_test4.test | RUN | 0.113213 | 0.278666 | 0.338894 | 0.001143 | 0.001315 | 0.001176 |
| swizzle3_test.test | RUN | 0.326338 | 0.735420 | 0.976399 | 0.001204 | 0.001256 | 0.001243 |
| swizzle4_test2.test | RUN | 0.190286 | 0.404354 | 0.544197 | 0.001105 | 0.001554 | 0.001336 |
| swizzle4_test3.test | RUN | 0.193133 | 0.392099 | 0.548955 | 0.001106 | 0.001159 | 0.001177 |
| swizzle4_test4.test | RUN | 0.197155 | 0.388889 | 0.545682 | 0.001200 | 0.001306 | 0.001201 |
| swizzle4_test.test | RUN | 0.328408 | 0.799377 | 1.013773 | 0.001190 | 0.001435 | 0.001224 |
| deduce_scalar_test.test | COMPILE | 0.016331 | 0.038005 | 0.054960 | — | — | — |
| deduce_scalar_mq_test.test | RUN | 0.126051 | 0.313466 | 0.370855 | 0.001088 | 0.001212 | 0.001123 |
| deduce_scalar_mv_test.test | RUN | 0.149572 | 0.342431 | 0.430897 | 0.001125 | 0.001263 | 0.001117 |
| deduce_scalar_fail.test | COMPILE_FAIL | 0.013487 | 0.024859 | 0.042322 | — | — | — |
| deduce_mat_test.test | COMPILE | 0.014281 | 0.034277 | 0.047261 | — | — | — |
| deduce_quat_test.test | COMPILE | 0.013609 | 0.031992 | 0.044747 | — | — | — |
| deduce_vec_test.test | COMPILE | 0.015173 | 0.033543 | 0.046691 | — | — | — |
| interop_test.test | RUN | 0.154624 | 0.443699 | 0.627032 | 0.000493 | 0.000585 | 0.001192 |
| transform_test.test | RUN | 0.289794 | 0.580610 | 0.784316 | 0.000881 | 0.000919 | 0.000809 |
| projection_test.test | RUN | 0.194725 | 0.519533 | 0.594411 | 0.000896 | 0.000917 | 0.000866 |
| scalar_traits_test.test | COMPILE | 0.015328 | 0.035019 | 0.051701 | — | — | — |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 1.003× | 1.005×, 1.002× | 0.998× |
| clang | 1.040× | 1.041×, 1.039× | 0.999× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1364 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/43967972441).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| access_m_test.test | 10 | 0.000799s | 0.000804s | 0.000819s | byte equality observed |
| access_q_test.test | 10 | 0.000795s | 0.000795s | 0.000812s | byte equality observed |
| access_v_test.test | 10 | 0.000792s | 0.000794s | 0.000830s | byte equality observed |
| assign_test.test | 10 | 0.000812s | 0.000833s | 0.000803s | byte equality observed |
| cmp_mm_test.test | 10 | 0.000824s | 0.000823s | 0.000809s | byte equality observed |
| cmp_qq_test.test | 10 | 0.000806s | 0.000800s | 0.000789s | byte equality observed |
| cmp_vv_test.test | 10 | 0.000801s | 0.000815s | 0.000813s | byte equality observed |
| col_mat_test.test | 10 | 0.000810s | 0.000807s | 0.000823s | byte equality observed |
| col_test.test | 10 | 0.000805s | 0.000819s | 0.000807s | byte equality observed |
| conjugate_test.test | 10 | 0.000814s | 0.000792s | 0.000796s | byte equality observed |
| convert_to_test.test | 10 | 0.000816s | 0.000821s | 0.000802s | byte equality observed |
| cross_test.test | 10 | 0.000814s | 0.000824s | 0.000803s | byte equality observed |
| deduce_scalar_mq_test.test | 10 | 0.000800s | 0.000801s | 0.000802s | byte equality observed |
| deduce_scalar_mv_test.test | 10 | 0.000816s | 0.000831s | 0.000798s | byte equality observed |
| del_col_test.test | 10 | 0.000812s | 0.000807s | 0.000803s | byte equality observed |
| del_row_col_test.test | 10 | 0.000847s | 0.000830s | 0.000784s | byte equality observed |
| del_row_test.test | 10 | 0.000813s | 0.000814s | 0.000826s | byte equality observed |
| determinant_test.test | 10 | 0.000812s | 0.000801s | 0.000832s | byte equality observed |
| diag_mat_test.test | 10 | 0.000809s | 0.000829s | 0.000815s | byte equality observed |
| diag_test.test | 10 | 0.000812s | 0.000820s | 0.000819s | byte equality observed |
| div_eq_ms_test.test | 10 | 0.000802s | 0.000812s | 0.000836s | byte equality observed |
| div_eq_qs_test.test | 10 | 0.000798s | 0.000793s | 0.000837s | byte equality observed |
| div_eq_vs_test.test | 10 | 0.000821s | 0.000829s | 0.000790s | byte equality observed |
| div_ms_test.test | 10 | 0.000810s | 0.000809s | 0.000800s | byte equality observed |
| div_qs_test.test | 10 | 0.000803s | 0.000816s | 0.000793s | byte equality observed |
| div_vs_test.test | 10 | 0.000803s | 0.000803s | 0.000811s | byte equality observed |
| dot_qq_test.test | 10 | 0.000793s | 0.000817s | 0.000785s | byte equality observed |
| dot_vv_test.test | 10 | 0.000793s | 0.000800s | 0.000787s | byte equality observed |
| eq_mm_test.test | 10 | 0.000831s | 0.000813s | 0.000817s | byte equality observed |
| eq_qq_test.test | 10 | 0.000829s | 0.000799s | 0.000791s | byte equality observed |
| eq_vv_test.test | 10 | 0.000818s | 0.000820s | 0.000801s | byte equality observed |
| identity_mat_test.test | 10 | 0.000790s | 0.000813s | 0.000812s | byte equality observed |
| identity_quat_test.test | 10 | 0.000787s | 0.000814s | 0.000781s | byte equality observed |
| interop_test.test | 10 | 0.000364s | 0.000370s | 0.000794s | byte equality observed |
| inverse_m_test.test | 10 | 0.000838s | 0.000844s | 0.000851s | byte equality observed |
| inverse_q_test.test | 10 | 0.000796s | 0.000788s | 0.000815s | byte equality observed |
| mag_q_test.test | 10 | 0.000803s | 0.000786s | 0.000821s | byte equality observed |
| mag_sqr_q_test.test | 10 | 0.000808s | 0.000793s | 0.000834s | byte equality observed |
| mag_sqr_v_test.test | 10 | 0.000821s | 0.000816s | 0.000805s | byte equality observed |
| mag_v_test.test | 10 | 0.000829s | 0.000800s | 0.000794s | byte equality observed |
| mat_index_test.test | 10 | 0.000817s | 0.000790s | 0.000838s | byte equality observed |
| mat_traits_array_test.test | 10 | 0.000823s | 0.000784s | 0.000844s | byte equality observed |
| mat_traits_std_array_test.test | 10 | 0.000788s | 0.000791s | 0.000803s | byte equality observed |
| math_test.test | 10 | 0.001200s | 0.001164s | 0.001067s | byte equality observed |
| minus_eq_mm_test.test | 10 | 0.000795s | 0.000797s | 0.000795s | byte equality observed |
| minus_eq_qq_test.test | 10 | 0.000821s | 0.000781s | 0.000796s | byte equality observed |
| minus_eq_vv_test.test | 10 | 0.000810s | 0.000822s | 0.000779s | byte equality observed |
| minus_m_test.test | 10 | 0.000806s | 0.000824s | 0.000821s | byte equality observed |
| minus_mm_test.test | 10 | 0.000818s | 0.000802s | 0.000816s | byte equality observed |
| minus_q_test.test | 10 | 0.000840s | 0.000808s | 0.000799s | byte equality observed |
| minus_qq_test.test | 10 | 0.000813s | 0.000825s | 0.000803s | byte equality observed |
| minus_v_test.test | 10 | 0.000812s | 0.000826s | 0.000787s | byte equality observed |
| minus_vv_test.test | 10 | 0.000815s | 0.000849s | 0.000828s | byte equality observed |
| mul_eq_mm_test.test | 10 | 0.000793s | 0.000801s | 0.000840s | byte equality observed |
| mul_eq_ms_test.test | 10 | 0.000794s | 0.000812s | 0.000812s | byte equality observed |
| mul_eq_qq_test.test | 10 | 0.000823s | 0.000836s | 0.000807s | byte equality observed |
| mul_eq_qs_test.test | 10 | 0.000812s | 0.000817s | 0.000823s | byte equality observed |
| mul_eq_vs_test.test | 10 | 0.000793s | 0.000821s | 0.000823s | byte equality observed |
| mul_mm_test.test | 10 | 0.000809s | 0.000786s | 0.000830s | byte equality observed |
| mul_ms_test.test | 10 | 0.000791s | 0.000790s | 0.000779s | byte equality observed |
| mul_mv_test.test | 10 | 0.000815s | 0.000814s | 0.000819s | byte equality observed |
| mul_qq_test.test | 10 | 0.000808s | 0.000827s | 0.000833s | byte equality observed |
| mul_qs_test.test | 10 | 0.000805s | 0.000817s | 0.000801s | byte equality observed |
| mul_qv_test.test | 10 | 0.000823s | 0.000820s | 0.000802s | byte equality observed |
| mul_sm_test.test | 10 | 0.000830s | 0.000817s | 0.000809s | byte equality observed |
| mul_sv_test.test | 10 | 0.000806s | 0.000825s | 0.000789s | byte equality observed |
| mul_vm_test.test | 10 | 0.000802s | 0.000825s | 0.000800s | byte equality observed |
| mul_vs_test.test | 10 | 0.000821s | 0.000796s | 0.000802s | byte equality observed |
| neg_col_test.test | 10 | 0.000826s | 0.000804s | 0.000820s | byte equality observed |
| neg_row_test.test | 10 | 0.000817s | 0.000825s | 0.000825s | byte equality observed |
| normalize_q_test.test | 10 | 0.000801s | 0.000836s | 0.000814s | byte equality observed |
| normalize_v_test.test | 10 | 0.000805s | 0.000831s | 0.000819s | byte equality observed |
| plus_eq_mm_test.test | 10 | 0.000820s | 0.000802s | 0.000814s | byte equality observed |
| plus_eq_qq_test.test | 10 | 0.000811s | 0.000816s | 0.000846s | byte equality observed |
| plus_eq_vv_test.test | 10 | 0.000836s | 0.000794s | 0.000817s | byte equality observed |
| plus_mm_test.test | 10 | 0.000813s | 0.000809s | 0.000802s | byte equality observed |
| plus_qq_test.test | 10 | 0.000811s | 0.000806s | 0.000773s | byte equality observed |
| plus_vv_test.test | 10 | 0.000830s | 0.000808s | 0.000800s | byte equality observed |
| projection_test.test | 10 | 0.000832s | 0.000802s | 0.000807s | byte equality observed |
| quat_traits_array_test.test | 10 | 0.000801s | 0.000826s | 0.000808s | byte equality observed |
| quat_traits_std_array_test.test | 10 | 0.000793s | 0.000768s | 0.000761s | byte equality observed |
| rot_mat_test.test | 1 | 0.020225s | 0.022401s | 0.026915s | byte equality observed |
| rot_quat_test.test | 10 | 0.000744s | 0.000747s | 0.000743s | byte equality observed |
| rotx_mat_test.test | 10 | 0.000774s | 0.000772s | 0.000723s | byte equality observed |
| rotx_quat_test.test | 10 | 0.000804s | 0.000837s | 0.000796s | byte equality observed |
| roty_mat_test.test | 10 | 0.000804s | 0.000837s | 0.000804s | byte equality observed |
| roty_quat_test.test | 10 | 0.000810s | 0.000827s | 0.000835s | byte equality observed |
| rotz_mat_test.test | 10 | 0.000837s | 0.000823s | 0.000827s | byte equality observed |
| rotz_quat_test.test | 10 | 0.000836s | 0.000800s | 0.000809s | byte equality observed |
| row_mat_test.test | 10 | 0.000793s | 0.000809s | 0.000816s | byte equality observed |
| row_test.test | 10 | 0.000802s | 0.000839s | 0.000835s | byte equality observed |
| scalar_cast_m_test.test | 10 | 0.000801s | 0.000853s | 0.000834s | byte equality observed |
| scalar_cast_q_test.test | 10 | 0.000805s | 0.000802s | 0.000839s | byte equality observed |
| scalar_cast_v_test.test | 10 | 0.000780s | 0.000776s | 0.000821s | byte equality observed |
| slerp_test.test | 2 | 0.011044s | 0.009410s | 0.009821s | byte equality observed |
| swap_cols_test.test | 10 | 0.000747s | 0.000746s | 0.000732s | byte equality observed |
| swap_rows_test.test | 10 | 0.000764s | 0.000778s | 0.000740s | byte equality observed |
| swizzle2_test.test | 10 | 0.000789s | 0.000821s | 0.000821s | byte equality observed |
| swizzle2_test2.test | 10 | 0.000787s | 0.000816s | 0.000829s | byte equality observed |
| swizzle2_test3.test | 10 | 0.000813s | 0.000823s | 0.000812s | byte equality observed |
| swizzle2_test4.test | 10 | 0.000828s | 0.000814s | 0.000829s | byte equality observed |
| swizzle3_test.test | 10 | 0.000807s | 0.000808s | 0.000814s | byte equality observed |
| swizzle3_test2.test | 10 | 0.000806s | 0.000821s | 0.000804s | byte equality observed |
| swizzle3_test3.test | 10 | 0.000801s | 0.000800s | 0.000802s | byte equality observed |
| swizzle3_test4.test | 10 | 0.000818s | 0.000779s | 0.000802s | byte equality observed |
| swizzle4_test.test | 10 | 0.000818s | 0.000792s | 0.000816s | byte equality observed |
| swizzle4_test2.test | 10 | 0.000830s | 0.000795s | 0.000781s | byte equality observed |
| swizzle4_test3.test | 10 | 0.000825s | 0.000820s | 0.000811s | byte equality observed |
| swizzle4_test4.test | 10 | 0.000811s | 0.000837s | 0.000828s | byte equality observed |
| to_string_test.test | 10 | 0.000842s | 0.000854s | 0.000840s | byte equality observed |
| transform_test.test | 10 | 0.000815s | 0.000807s | 0.000809s | byte equality observed |
| translation_mat_test.test | 10 | 0.000806s | 0.000790s | 0.000809s | byte equality observed |
| translation_test.test | 10 | 0.000812s | 0.000802s | 0.000763s | byte equality observed |
| transpose_test.test | 10 | 0.000840s | 0.000806s | 0.000781s | byte equality observed |
| vec_index_test.test | 10 | 0.000813s | 0.000829s | 0.000794s | byte equality observed |
| vec_register_test.test | 10 | 0.000800s | 0.000811s | 0.000801s | byte equality observed |
| vec_traits_array_test.test | 10 | 0.000815s | 0.000823s | 0.000823s | byte equality observed |
| vec_traits_gnuc_test.test | 10 | 0.000817s | 0.000829s | 0.000843s | byte equality observed |
| vec_traits_std_array_test.test | 10 | 0.000830s | 0.000842s | 0.000829s | byte equality observed |
| zero_mat_test.test | 10 | 0.000805s | 0.000808s | 0.000804s | byte equality observed |
| zero_quat_test.test | 10 | 0.000800s | 0.000813s | 0.000805s | byte equality observed |
| zero_vec_test.test | 10 | 0.000797s | 0.000818s | 0.000778s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/43967972441).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
