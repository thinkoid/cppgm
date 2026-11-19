# libs/qvm/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| math_test.test | RUN | 0.188042 | 0.564787 | 0.575466 | 0.001653 | 0.001895 | 0.001519 |
| mat_traits_array_test.test | RUN | 0.149561 | 0.564807 | 0.457062 | 0.001216 | 0.001185 | 0.001141 |
| mat_traits_std_array_test.test | RUN | 0.148214 | 0.431042 | 0.457089 | 0.001362 | 0.001238 | 0.001136 |
| vec_traits_array_test.test | RUN | 0.127984 | 0.430608 | 0.385354 | 0.001209 | 0.001605 | 0.000941 |
| vec_traits_gnuc_test.test | RUN | 0.237519 | 0.515627 | 0.734904 | 0.001110 | 0.001192 | 0.001114 |
| vec_traits_std_array_test.test | RUN | 0.127652 | 0.334609 | 0.383653 | 0.001316 | 0.001262 | 0.001206 |
| quat_traits_array_test.test | RUN | 0.123107 | 0.462423 | 0.384403 | 0.001226 | 0.001256 | 0.001196 |
| quat_traits_std_array_test.test | RUN | 0.124433 | 0.343896 | 0.379168 | 0.001085 | 0.001264 | 0.001157 |
| access_m_test.test | RUN | 0.202941 | 0.799041 | 0.872859 | 0.001195 | 0.001335 | 0.001133 |
| access_m_fail1.test | COMPILE_FAIL | 0.019853 | 0.034630 | 0.055863 | — | — | — |
| access_m_fail2.test | COMPILE_FAIL | 0.018173 | 0.033864 | 0.059344 | — | — | — |
| access_q_test.test | RUN | 0.167634 | 0.412933 | 0.511901 | 0.001082 | 0.001406 | 0.001330 |
| access_q_fail.test | COMPILE_FAIL | 0.014655 | 0.027245 | 0.047775 | — | — | — |
| access_v_test.test | RUN | 0.168808 | 0.432449 | 0.506696 | 0.001007 | 0.001373 | 0.001215 |
| access_v_fail1.test | COMPILE_FAIL | 0.012883 | 0.026082 | 0.041187 | — | — | — |
| access_v_fail2.test | COMPILE_FAIL | 0.013323 | 0.025828 | 0.043963 | — | — | — |
| assign_test.test | RUN | 0.256927 | 0.700305 | 0.942613 | 0.001155 | 0.001555 | 0.001140 |
| to_string_test.test | RUN | 0.309656 | 1.167761 | 5.540265 | 0.001035 | 0.001389 | 0.001371 |
| cmp_vv_test.test | RUN | 0.206046 | 0.558157 | 0.622102 | 0.001054 | 0.001279 | 0.001151 |
| cross_test.test | RUN | 0.200720 | 0.513958 | 0.616438 | 0.001170 | 0.001290 | 0.001308 |
| div_eq_vs_test.test | RUN | 0.193307 | 0.477009 | 0.615495 | 0.001217 | 0.001372 | 0.001369 |
| div_vs_test.test | RUN | 0.197173 | 0.585426 | 0.647246 | 0.001213 | 0.001369 | 0.001153 |
| dot_vv_test.test | RUN | 0.192799 | 0.521366 | 0.611524 | 0.001114 | 0.001290 | 0.001335 |
| eq_vv_test.test | RUN | 0.216474 | 0.577172 | 0.685137 | 0.001041 | 0.001408 | 0.001174 |
| mag_v_test.test | RUN | 0.190358 | 0.473937 | 0.564450 | 0.001192 | 0.001322 | 0.001151 |
| mag_sqr_v_test.test | RUN | 0.188452 | 0.470261 | 0.587320 | 0.001225 | 0.001483 | 0.000988 |
| minus_v_test.test | RUN | 0.197962 | 0.549562 | 0.619522 | 0.001075 | 0.001230 | 0.001145 |
| minus_eq_vv_test.test | RUN | 0.191430 | 0.539394 | 0.626422 | 0.001064 | 0.001535 | 0.001175 |
| minus_vv_test.test | RUN | 0.201203 | 0.584376 | 0.658595 | 0.001250 | 0.001321 | 0.001102 |
| mul_eq_vs_test.test | RUN | 0.191237 | 0.471467 | 0.619276 | 0.001031 | 0.001432 | 0.001132 |
| mul_vs_test.test | RUN | 0.205327 | 0.589365 | 0.640225 | 0.001027 | 0.001292 | 0.001152 |
| mul_sv_test.test | RUN | 0.199765 | 0.589381 | 0.659463 | 0.001068 | 0.001442 | 0.001139 |
| mul_vm_test.test | RUN | 0.284099 | 1.050898 | 1.036565 | 0.001061 | 0.001442 | 0.001279 |
| normalize_v_test.test | RUN | 0.206229 | 0.714364 | 0.642789 | 0.000979 | 0.001140 | 0.001261 |
| plus_eq_vv_test.test | RUN | 0.192194 | 0.542800 | 0.629624 | 0.001146 | 0.001215 | 0.001144 |
| plus_vv_test.test | RUN | 0.205128 | 0.590598 | 0.651903 | 0.000995 | 0.001295 | 0.001238 |
| scalar_cast_v_test.test | RUN | 0.186291 | 0.434812 | 0.560618 | 0.001131 | 0.001324 | 0.001262 |
| vec_index_test.test | RUN | 0.164839 | 0.445565 | 0.508463 | 0.001267 | 0.001311 | 0.001204 |
| vec_register_test.test | RUN | 0.105740 | 0.395589 | 0.373304 | 0.001523 | 0.001317 | 0.001238 |
| cmp_mm_test.test | RUN | 0.339868 | 1.292371 | 1.338546 | 0.001256 | 0.001198 | 0.001171 |
| determinant_test.test | RUN | 0.229097 | 0.647927 | 0.714179 | 0.001435 | 0.001191 | 0.001373 |
| div_eq_ms_test.test | RUN | 0.232475 | 0.589936 | 0.827816 | 0.001193 | 0.001424 | 0.001213 |
| div_ms_test.test | RUN | 0.280366 | 0.973240 | 0.996538 | 0.001128 | 0.001284 | 0.001230 |
| eq_mm_test.test | RUN | 0.318685 | 1.193113 | 1.274821 | 0.001133 | 0.001202 | 0.001082 |
| minus_m_test.test | RUN | 0.275900 | 0.952144 | 0.959143 | 0.001078 | 0.001388 | 0.001189 |
| minus_eq_mm_test.test | RUN | 0.251255 | 0.874917 | 0.895138 | 0.001061 | 0.001409 | 0.001196 |
| minus_mm_test.test | RUN | 0.289624 | 1.109259 | 1.046850 | 0.001098 | 0.001548 | 0.001255 |
| mul_eq_mm_test.test | RUN | 0.237165 | 0.828637 | 0.797529 | 0.001147 | 0.001288 | 0.001138 |
| mul_eq_ms_test.test | RUN | 0.232035 | 0.601543 | 0.816334 | 0.001083 | 0.001534 | 0.001130 |
| mul_mm_test.test | RUN | 0.336224 | 1.849438 | 1.316438 | 0.001107 | 0.001589 | 0.001154 |
| mul_ms_test.test | RUN | 0.279037 | 0.980248 | 1.021603 | 0.001126 | 0.001437 | 0.001194 |
| mul_sm_test.test | RUN | 0.281327 | 0.979546 | 1.024021 | 0.001094 | 0.001496 | 0.001282 |
| mul_mv_test.test | RUN | 0.279478 | 1.051303 | 1.024482 | 0.001118 | 0.001360 | 0.001076 |
| inverse_m_test.test | RUN | 0.404751 | 1.927451 | 1.450923 | 0.001276 | 0.001246 | 0.001315 |
| plus_eq_mm_test.test | RUN | 0.262292 | 0.887575 | 0.899870 | 0.001318 | 0.001335 | 0.001226 |
| plus_mm_test.test | RUN | 0.292661 | 1.118612 | 1.064395 | 0.001153 | 0.001414 | 0.001162 |
| scalar_cast_m_test.test | RUN | 0.216157 | 0.501502 | 0.650918 | 0.001139 | 0.001328 | 0.001214 |
| mat_index_test.test | RUN | 0.179196 | 0.483053 | 0.560631 | 0.001033 | 0.001328 | 0.001195 |
| cmp_qq_test.test | RUN | 0.196715 | 0.447032 | 0.532539 | 0.001104 | 0.001291 | 0.001148 |
| conjugate_test.test | RUN | 0.184797 | 0.456542 | 0.556371 | 0.001162 | 0.001494 | 0.001130 |
| normalize_q_test.test | RUN | 0.194000 | 0.516680 | 0.596403 | 0.001054 | 0.001501 | 0.001353 |
| div_eq_qs_test.test | RUN | 0.191475 | 0.438287 | 0.540142 | 0.001073 | 0.001164 | 0.001248 |
| div_qs_test.test | RUN | 0.191103 | 0.458967 | 0.574664 | 0.001123 | 0.001301 | 0.001180 |
| dot_qq_test.test | RUN | 0.189134 | 0.445751 | 0.568140 | 0.001118 | 0.001483 | 0.001146 |
| eq_qq_test.test | RUN | 0.195637 | 0.471157 | 0.584730 | 0.001071 | 0.001579 | 0.001194 |
| inverse_q_test.test | RUN | 0.229595 | 0.622649 | 0.730469 | 0.001086 | 0.001308 | 0.001157 |
| mag_q_test.test | RUN | 0.188698 | 0.456847 | 0.555152 | 0.001145 | 0.001352 | 0.001057 |
| mag_sqr_q_test.test | RUN | 0.192914 | 0.450701 | 0.562544 | 0.001063 | 0.001451 | 0.001134 |
| minus_q_test.test | RUN | 0.186545 | 0.461882 | 0.553370 | 0.001107 | 0.001334 | 0.001234 |
| minus_eq_qq_test.test | RUN | 0.191421 | 0.457015 | 0.569605 | 0.001127 | 0.001253 | 0.001186 |
| minus_qq_test.test | RUN | 0.190268 | 0.468160 | 0.576264 | 0.001096 | 0.001425 | 0.001246 |
| mul_eq_qs_test.test | RUN | 0.191769 | 0.428822 | 0.556946 | 0.001097 | 0.001458 | 0.001195 |
| mul_qs_test.test | RUN | 0.192211 | 0.461167 | 0.571171 | 0.001126 | 0.001392 | 0.001295 |
| mul_qv_test.test | RUN | 0.233768 | 0.629641 | 0.731774 | 0.001262 | 0.001460 | 0.001238 |
| mul_qq_test.test | RUN | 0.223549 | 0.632967 | 0.714052 | 0.001153 | 0.001442 | 0.001184 |
| mul_eq_qq_test.test | RUN | 0.226796 | 0.627972 | 0.708011 | 0.001159 | 0.001362 | 0.001194 |
| plus_eq_qq_test.test | RUN | 0.192609 | 0.454757 | 0.558240 | 0.001076 | 0.001367 | 0.001373 |
| plus_qq_test.test | RUN | 0.192002 | 0.462730 | 0.568592 | 0.001110 | 0.001280 | 0.001215 |
| scalar_cast_q_test.test | RUN | 0.188354 | 0.433589 | 0.560584 | 0.001082 | 0.001454 | 0.001105 |
| slerp_test.test | RUN | 0.215539 | 0.906808 | 0.677943 | 0.014875 | 0.013084 | 0.013361 |
| convert_to_test.test | RUN | 0.279011 | 0.824983 | 1.069517 | 0.001103 | 0.001324 | 0.001221 |
| rot_mat_test.test | RUN | 0.469210 | 3.804564 | 3.326099 | 0.030302 | 0.032435 | 0.034598 |
| rot_quat_test.test | RUN | 0.241054 | 0.763244 | 0.726038 | 0.001342 | 0.001462 | 0.001382 |
| rotx_mat_test.test | RUN | 0.263719 | 0.998009 | 0.971697 | 0.001078 | 0.001376 | 0.001350 |
| rotx_quat_test.test | RUN | 0.229726 | 0.628056 | 0.680729 | 0.001131 | 0.001372 | 0.001242 |
| roty_mat_test.test | RUN | 0.266222 | 0.995426 | 0.961338 | 0.001182 | 0.001477 | 0.001300 |
| roty_quat_test.test | RUN | 0.234444 | 0.624725 | 0.693291 | 0.001263 | 0.001384 | 0.001219 |
| rotz_mat_test.test | RUN | 0.282161 | 1.135149 | 0.959266 | 0.001160 | 0.001501 | 0.001190 |
| rotz_quat_test.test | RUN | 0.226566 | 0.637516 | 0.695862 | 0.001048 | 0.001292 | 0.001312 |
| zero_vec_test.test | RUN | 0.196302 | 0.540891 | 0.606402 | 0.001168 | 0.001232 | 0.001183 |
| zero_mat_test.test | RUN | 0.239832 | 0.916874 | 0.853282 | 0.001246 | 0.001402 | 0.001270 |
| zero_quat_test.test | RUN | 0.180704 | 0.453986 | 0.533632 | 0.001229 | 0.001300 | 0.001280 |
| identity_mat_test.test | RUN | 0.224804 | 0.658787 | 0.730642 | 0.001098 | 0.001271 | 0.001256 |
| identity_quat_test.test | RUN | 0.185594 | 0.444779 | 0.557231 | 0.001172 | 0.001572 | 0.001197 |
| col_test.test | RUN | 0.374658 | 1.433636 | 1.606748 | 0.001072 | 0.001430 | 0.001100 |
| col_mat_test.test | RUN | 0.235035 | 0.639915 | 0.739047 | 0.001317 | 0.001412 | 0.001206 |
| neg_col_test.test | RUN | 0.280096 | 0.890701 | 0.970722 | 0.001132 | 0.001296 | 0.001168 |
| neg_row_test.test | RUN | 0.287960 | 0.902467 | 0.967684 | 0.001157 | 0.001405 | 0.001143 |
| del_col_test.test | RUN | 0.294229 | 0.978694 | 1.004974 | 0.001207 | 0.001534 | 0.001307 |
| del_row_test.test | RUN | 0.292454 | 0.973455 | 1.000832 | 0.001134 | 0.001366 | 0.001386 |
| del_row_col_test.test | RUN | 0.403416 | 1.859303 | 1.874359 | 0.001138 | 0.001357 | 0.001440 |
| swap_cols_test.test | RUN | 0.559964 | 2.487525 | 2.280068 | 0.001159 | 0.001447 | 0.001238 |
| swap_rows_test.test | RUN | 0.622029 | 2.580138 | 2.265737 | 0.001154 | 0.001450 | 0.000940 |
| diag_test.test | RUN | 0.248887 | 0.669787 | 0.858384 | 0.001156 | 0.001345 | 0.001234 |
| diag_mat_test.test | RUN | 0.245643 | 0.648528 | 0.763205 | 0.001186 | 0.001224 | 0.001240 |
| row_test.test | RUN | 0.370399 | 1.402918 | 1.598459 | 0.001136 | 0.001307 | 0.001236 |
| row_mat_test.test | RUN | 0.233595 | 0.624164 | 0.763485 | 0.001111 | 0.001450 | 0.001277 |
| transpose_test.test | RUN | 0.286989 | 0.971083 | 1.022963 | 0.001109 | 0.001364 | 0.001169 |
| translation_test.test | RUN | 0.229949 | 0.599418 | 0.758560 | 0.001158 | 0.001505 | 0.001174 |
| translation_mat_test.test | RUN | 0.250380 | 0.610368 | 0.823314 | 0.001180 | 0.001327 | 0.001175 |
| swizzle_const_fail.test | COMPILE_FAIL | 0.082068 | 0.176882 | 0.218986 | — | — | — |
| swizzle2_test2.test | RUN | 0.096678 | 0.261844 | 0.310392 | 0.001132 | 0.001380 | 0.001113 |
| swizzle2_test3.test | RUN | 0.100173 | 0.260518 | 0.307638 | 0.001053 | 0.001219 | 0.001138 |
| swizzle2_test4.test | RUN | 0.102149 | 0.259551 | 0.298001 | 0.001065 | 0.001629 | 0.001180 |
| swizzle2_test.test | RUN | 0.320069 | 0.712490 | 0.973067 | 0.001069 | 0.001272 | 0.001350 |
| swizzle3_test2.test | RUN | 0.108719 | 0.281854 | 0.337827 | 0.001167 | 0.001401 | 0.001347 |
| swizzle3_test3.test | RUN | 0.108590 | 0.277094 | 0.341255 | 0.001123 | 0.001365 | 0.001201 |
| swizzle3_test4.test | RUN | 0.113718 | 0.273635 | 0.332134 | 0.001053 | 0.001254 | 0.001194 |
| swizzle3_test.test | RUN | 0.315859 | 0.721603 | 0.972027 | 0.001150 | 0.001233 | 0.001166 |
| swizzle4_test2.test | RUN | 0.187778 | 0.391489 | 0.557514 | 0.001204 | 0.001500 | 0.001254 |
| swizzle4_test3.test | RUN | 0.184482 | 0.401454 | 0.539618 | 0.001183 | 0.001468 | 0.001086 |
| swizzle4_test4.test | RUN | 0.190760 | 0.397996 | 0.533928 | 0.001075 | 0.001262 | 0.001240 |
| swizzle4_test.test | RUN | 0.334482 | 0.803391 | 1.013286 | 0.001050 | 0.001364 | 0.001264 |
| deduce_scalar_test.test | COMPILE | 0.015638 | 0.037307 | 0.054568 | — | — | — |
| deduce_scalar_mq_test.test | RUN | 0.120010 | 0.310709 | 0.365734 | 0.001105 | 0.001404 | 0.001229 |
| deduce_scalar_mv_test.test | RUN | 0.142118 | 0.343100 | 0.432836 | 0.001039 | 0.001392 | 0.001136 |
| deduce_scalar_fail.test | COMPILE_FAIL | 0.013059 | 0.023652 | 0.042910 | — | — | — |
| deduce_mat_test.test | COMPILE | 0.014272 | 0.034703 | 0.046112 | — | — | — |
| deduce_quat_test.test | COMPILE | 0.013380 | 0.034027 | 0.045859 | — | — | — |
| deduce_vec_test.test | COMPILE | 0.013814 | 0.031264 | 0.045447 | — | — | — |
| interop_test.test | RUN | 0.147347 | 0.415765 | 0.623745 | 0.000496 | 0.000423 | 0.001182 |
| transform_test.test | RUN | 0.293408 | 0.644475 | 0.829075 | 0.000912 | 0.000976 | 0.000835 |
| projection_test.test | RUN | 0.191399 | 0.509859 | 0.595726 | 0.000908 | 0.000992 | 0.000807 |
| scalar_traits_test.test | COMPILE | 0.014561 | 0.035202 | 0.050394 | — | — | — |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 1.003× | 1.003×, 1.003× | 1.006× |
| clang | 1.041× | 1.032×, 1.051× | 0.993× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1364 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44481767416).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| access_m_test.test | 10 | 0.000803s | 0.000805s | 0.000824s | byte equality observed |
| access_q_test.test | 10 | 0.000830s | 0.000797s | 0.000813s | byte equality observed |
| access_v_test.test | 10 | 0.000835s | 0.000798s | 0.000826s | byte equality observed |
| assign_test.test | 10 | 0.000824s | 0.000816s | 0.000818s | byte equality observed |
| cmp_mm_test.test | 10 | 0.000827s | 0.000816s | 0.000800s | byte equality observed |
| cmp_qq_test.test | 10 | 0.000828s | 0.000808s | 0.000798s | byte equality observed |
| cmp_vv_test.test | 10 | 0.000809s | 0.000824s | 0.000825s | byte equality observed |
| col_mat_test.test | 10 | 0.000817s | 0.000799s | 0.000806s | byte equality observed |
| col_test.test | 10 | 0.000823s | 0.000781s | 0.000823s | byte equality observed |
| conjugate_test.test | 10 | 0.000816s | 0.000773s | 0.000826s | byte equality observed |
| convert_to_test.test | 10 | 0.000804s | 0.000781s | 0.000808s | byte equality observed |
| cross_test.test | 10 | 0.000796s | 0.000802s | 0.000839s | byte equality observed |
| deduce_scalar_mq_test.test | 10 | 0.000791s | 0.000806s | 0.000808s | byte equality observed |
| deduce_scalar_mv_test.test | 10 | 0.000812s | 0.000836s | 0.000812s | byte equality observed |
| del_col_test.test | 10 | 0.000804s | 0.000809s | 0.000808s | byte equality observed |
| del_row_col_test.test | 10 | 0.000816s | 0.000801s | 0.000828s | byte equality observed |
| del_row_test.test | 10 | 0.000819s | 0.000789s | 0.000805s | byte equality observed |
| determinant_test.test | 10 | 0.000821s | 0.000809s | 0.000841s | byte equality observed |
| diag_mat_test.test | 10 | 0.000792s | 0.000822s | 0.000797s | byte equality observed |
| diag_test.test | 10 | 0.000799s | 0.000808s | 0.000840s | byte equality observed |
| div_eq_ms_test.test | 10 | 0.000824s | 0.000807s | 0.000828s | byte equality observed |
| div_eq_qs_test.test | 10 | 0.000805s | 0.000789s | 0.000851s | byte equality observed |
| div_eq_vs_test.test | 10 | 0.000824s | 0.000813s | 0.000834s | byte equality observed |
| div_ms_test.test | 10 | 0.000808s | 0.000831s | 0.000812s | byte equality observed |
| div_qs_test.test | 10 | 0.000810s | 0.000805s | 0.000808s | byte equality observed |
| div_vs_test.test | 10 | 0.000796s | 0.000797s | 0.000820s | byte equality observed |
| dot_qq_test.test | 10 | 0.000796s | 0.000833s | 0.000828s | byte equality observed |
| dot_vv_test.test | 10 | 0.000804s | 0.000832s | 0.000839s | byte equality observed |
| eq_mm_test.test | 10 | 0.000831s | 0.000835s | 0.000841s | byte equality observed |
| eq_qq_test.test | 10 | 0.000821s | 0.000819s | 0.000824s | byte equality observed |
| eq_vv_test.test | 10 | 0.000808s | 0.000805s | 0.000775s | byte equality observed |
| identity_mat_test.test | 10 | 0.000806s | 0.000822s | 0.000799s | byte equality observed |
| identity_quat_test.test | 10 | 0.000811s | 0.000792s | 0.000783s | byte equality observed |
| interop_test.test | 10 | 0.000361s | 0.000361s | 0.000784s | byte equality observed |
| inverse_m_test.test | 10 | 0.000837s | 0.000837s | 0.000847s | byte equality observed |
| inverse_q_test.test | 10 | 0.000808s | 0.000801s | 0.000827s | byte equality observed |
| mag_q_test.test | 10 | 0.000805s | 0.000837s | 0.000811s | byte equality observed |
| mag_sqr_q_test.test | 10 | 0.000830s | 0.000828s | 0.000825s | byte equality observed |
| mag_sqr_v_test.test | 10 | 0.000800s | 0.000820s | 0.000816s | byte equality observed |
| mag_v_test.test | 10 | 0.000824s | 0.000817s | 0.000808s | byte equality observed |
| mat_index_test.test | 10 | 0.000791s | 0.000789s | 0.000817s | byte equality observed |
| mat_traits_array_test.test | 10 | 0.000814s | 0.000802s | 0.000810s | byte equality observed |
| mat_traits_std_array_test.test | 10 | 0.000793s | 0.000797s | 0.000791s | byte equality observed |
| math_test.test | 10 | 0.001197s | 0.001177s | 0.001061s | byte equality observed |
| minus_eq_mm_test.test | 10 | 0.000803s | 0.000784s | 0.000802s | byte equality observed |
| minus_eq_qq_test.test | 10 | 0.000800s | 0.000792s | 0.000796s | byte equality observed |
| minus_eq_vv_test.test | 10 | 0.000781s | 0.000856s | 0.000822s | byte equality observed |
| minus_m_test.test | 10 | 0.000807s | 0.000790s | 0.000828s | byte equality observed |
| minus_mm_test.test | 10 | 0.000797s | 0.000794s | 0.000819s | byte equality observed |
| minus_q_test.test | 10 | 0.000810s | 0.000775s | 0.000802s | byte equality observed |
| minus_qq_test.test | 10 | 0.000810s | 0.000802s | 0.000809s | byte equality observed |
| minus_v_test.test | 10 | 0.000788s | 0.000814s | 0.000801s | byte equality observed |
| minus_vv_test.test | 10 | 0.000817s | 0.000831s | 0.000801s | byte equality observed |
| mul_eq_mm_test.test | 10 | 0.000806s | 0.000802s | 0.000810s | byte equality observed |
| mul_eq_ms_test.test | 10 | 0.000812s | 0.000834s | 0.000794s | byte equality observed |
| mul_eq_qq_test.test | 10 | 0.000837s | 0.000822s | 0.000837s | byte equality observed |
| mul_eq_qs_test.test | 10 | 0.000819s | 0.000788s | 0.000782s | byte equality observed |
| mul_eq_vs_test.test | 10 | 0.000825s | 0.000813s | 0.000805s | byte equality observed |
| mul_mm_test.test | 10 | 0.000814s | 0.000816s | 0.000818s | byte equality observed |
| mul_ms_test.test | 10 | 0.000832s | 0.000798s | 0.000823s | byte equality observed |
| mul_mv_test.test | 10 | 0.000837s | 0.000831s | 0.000827s | byte equality observed |
| mul_qq_test.test | 10 | 0.000826s | 0.000832s | 0.000819s | byte equality observed |
| mul_qs_test.test | 10 | 0.000817s | 0.000828s | 0.000790s | byte equality observed |
| mul_qv_test.test | 10 | 0.000826s | 0.000823s | 0.000812s | byte equality observed |
| mul_sm_test.test | 10 | 0.000816s | 0.000796s | 0.000777s | byte equality observed |
| mul_sv_test.test | 10 | 0.000813s | 0.000833s | 0.000781s | byte equality observed |
| mul_vm_test.test | 10 | 0.000815s | 0.000812s | 0.000799s | byte equality observed |
| mul_vs_test.test | 10 | 0.000794s | 0.000816s | 0.000783s | byte equality observed |
| neg_col_test.test | 10 | 0.000801s | 0.000795s | 0.000807s | byte equality observed |
| neg_row_test.test | 10 | 0.000805s | 0.000818s | 0.000786s | byte equality observed |
| normalize_q_test.test | 10 | 0.000834s | 0.000830s | 0.000827s | byte equality observed |
| normalize_v_test.test | 10 | 0.000814s | 0.000804s | 0.000788s | byte equality observed |
| plus_eq_mm_test.test | 10 | 0.000817s | 0.000788s | 0.000800s | byte equality observed |
| plus_eq_qq_test.test | 10 | 0.000810s | 0.000785s | 0.000792s | byte equality observed |
| plus_eq_vv_test.test | 10 | 0.000812s | 0.000795s | 0.000786s | byte equality observed |
| plus_mm_test.test | 10 | 0.000827s | 0.000796s | 0.000802s | byte equality observed |
| plus_qq_test.test | 10 | 0.000798s | 0.000800s | 0.000799s | byte equality observed |
| plus_vv_test.test | 10 | 0.000804s | 0.000821s | 0.000795s | byte equality observed |
| projection_test.test | 10 | 0.000803s | 0.000804s | 0.000789s | byte equality observed |
| quat_traits_array_test.test | 10 | 0.000797s | 0.000821s | 0.000825s | byte equality observed |
| quat_traits_std_array_test.test | 10 | 0.000792s | 0.000785s | 0.000740s | byte equality observed |
| rot_mat_test.test | 1 | 0.020001s | 0.022048s | 0.026906s | byte equality observed |
| rot_quat_test.test | 10 | 0.000753s | 0.000747s | 0.000744s | byte equality observed |
| rotx_mat_test.test | 10 | 0.000770s | 0.000759s | 0.000748s | byte equality observed |
| rotx_quat_test.test | 10 | 0.000800s | 0.000808s | 0.000826s | byte equality observed |
| roty_mat_test.test | 10 | 0.000822s | 0.000835s | 0.000813s | byte equality observed |
| roty_quat_test.test | 10 | 0.000818s | 0.000814s | 0.000831s | byte equality observed |
| rotz_mat_test.test | 10 | 0.000839s | 0.000809s | 0.000837s | byte equality observed |
| rotz_quat_test.test | 10 | 0.000824s | 0.000811s | 0.000835s | byte equality observed |
| row_mat_test.test | 10 | 0.000819s | 0.000816s | 0.000832s | byte equality observed |
| row_test.test | 10 | 0.000816s | 0.000788s | 0.000842s | byte equality observed |
| scalar_cast_m_test.test | 10 | 0.000816s | 0.000794s | 0.000824s | byte equality observed |
| scalar_cast_q_test.test | 10 | 0.000795s | 0.000807s | 0.000816s | byte equality observed |
| scalar_cast_v_test.test | 10 | 0.000761s | 0.000789s | 0.000807s | byte equality observed |
| slerp_test.test | 2 | 0.011011s | 0.009348s | 0.009816s | byte equality observed |
| swap_cols_test.test | 10 | 0.000740s | 0.000747s | 0.000740s | byte equality observed |
| swap_rows_test.test | 10 | 0.000756s | 0.000758s | 0.000760s | byte equality observed |
| swizzle2_test.test | 10 | 0.000821s | 0.000790s | 0.000831s | byte equality observed |
| swizzle2_test2.test | 10 | 0.000804s | 0.000791s | 0.000823s | byte equality observed |
| swizzle2_test3.test | 10 | 0.000804s | 0.000786s | 0.000787s | byte equality observed |
| swizzle2_test4.test | 10 | 0.000791s | 0.000794s | 0.000795s | byte equality observed |
| swizzle3_test.test | 10 | 0.000813s | 0.000834s | 0.000823s | byte equality observed |
| swizzle3_test2.test | 10 | 0.000821s | 0.000792s | 0.000807s | byte equality observed |
| swizzle3_test3.test | 10 | 0.000799s | 0.000794s | 0.000817s | byte equality observed |
| swizzle3_test4.test | 10 | 0.000795s | 0.000806s | 0.000819s | byte equality observed |
| swizzle4_test.test | 10 | 0.000799s | 0.000776s | 0.000803s | byte equality observed |
| swizzle4_test2.test | 10 | 0.000806s | 0.000793s | 0.000801s | byte equality observed |
| swizzle4_test3.test | 10 | 0.000820s | 0.000808s | 0.000828s | byte equality observed |
| swizzle4_test4.test | 10 | 0.000818s | 0.000805s | 0.000837s | byte equality observed |
| to_string_test.test | 10 | 0.000842s | 0.000859s | 0.000845s | byte equality observed |
| transform_test.test | 10 | 0.000833s | 0.000833s | 0.000795s | byte equality observed |
| translation_mat_test.test | 10 | 0.000827s | 0.000811s | 0.000785s | byte equality observed |
| translation_test.test | 10 | 0.000829s | 0.000816s | 0.000795s | byte equality observed |
| transpose_test.test | 10 | 0.000814s | 0.000793s | 0.000783s | byte equality observed |
| vec_index_test.test | 10 | 0.000804s | 0.000784s | 0.000797s | byte equality observed |
| vec_register_test.test | 10 | 0.000824s | 0.000806s | 0.000807s | byte equality observed |
| vec_traits_array_test.test | 10 | 0.000815s | 0.000782s | 0.000808s | byte equality observed |
| vec_traits_gnuc_test.test | 10 | 0.000784s | 0.000790s | 0.000808s | byte equality observed |
| vec_traits_std_array_test.test | 10 | 0.000795s | 0.000775s | 0.000790s | byte equality observed |
| zero_mat_test.test | 10 | 0.000787s | 0.000776s | 0.000807s | byte equality observed |
| zero_quat_test.test | 10 | 0.000809s | 0.000808s | 0.000811s | byte equality observed |
| zero_vec_test.test | 10 | 0.000796s | 0.000759s | 0.000796s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44481767416).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
