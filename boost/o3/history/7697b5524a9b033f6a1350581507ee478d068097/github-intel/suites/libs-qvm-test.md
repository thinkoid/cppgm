# libs/qvm/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| math_test.test | RUN | 0.197361 | 0.574151 | 0.585516 | 0.001684 | 0.001737 | 0.001409 |
| mat_traits_array_test.test | RUN | 0.152962 | 0.571877 | 0.458965 | 0.001434 | 0.001294 | 0.000866 |
| mat_traits_std_array_test.test | RUN | 0.153682 | 0.430759 | 0.457384 | 0.001322 | 0.001506 | 0.001256 |
| vec_traits_array_test.test | RUN | 0.130827 | 0.435894 | 0.397236 | 0.001148 | 0.001599 | 0.001065 |
| vec_traits_gnuc_test.test | RUN | 0.243564 | 0.526100 | 0.748580 | 0.001330 | 0.001256 | 0.001126 |
| vec_traits_std_array_test.test | RUN | 0.130575 | 0.340420 | 0.397764 | 0.001169 | 0.001239 | 0.001205 |
| quat_traits_array_test.test | RUN | 0.126369 | 0.459265 | 0.380194 | 0.001164 | 0.001395 | 0.001071 |
| quat_traits_std_array_test.test | RUN | 0.127721 | 0.343120 | 0.377548 | 0.001240 | 0.001632 | 0.001172 |
| access_m_test.test | RUN | 0.211217 | 0.811990 | 0.879674 | 0.001128 | 0.001512 | 0.001155 |
| access_m_fail1.test | COMPILE_FAIL | 0.020879 | 0.034812 | 0.055909 | — | — | — |
| access_m_fail2.test | COMPILE_FAIL | 0.020067 | 0.034324 | 0.055484 | — | — | — |
| access_q_test.test | RUN | 0.179087 | 0.420610 | 0.511483 | 0.001146 | 0.001244 | 0.001272 |
| access_q_fail.test | COMPILE_FAIL | 0.016148 | 0.027175 | 0.047978 | — | — | — |
| access_v_test.test | RUN | 0.178238 | 0.438735 | 0.507341 | 0.001210 | 0.001225 | 0.001269 |
| access_v_fail1.test | COMPILE_FAIL | 0.013499 | 0.025643 | 0.041811 | — | — | — |
| access_v_fail2.test | COMPILE_FAIL | 0.013911 | 0.025717 | 0.041824 | — | — | — |
| assign_test.test | RUN | 0.271413 | 0.687057 | 0.944475 | 0.001262 | 0.001285 | 0.001076 |
| to_string_test.test | RUN | 0.317877 | 1.171870 | 5.570807 | 0.001189 | 0.001075 | 0.001378 |
| cmp_vv_test.test | RUN | 0.218307 | 0.561720 | 0.647463 | 0.001143 | 0.001339 | 0.001216 |
| cross_test.test | RUN | 0.205510 | 0.493471 | 0.642336 | 0.001117 | 0.001276 | 0.001201 |
| div_eq_vs_test.test | RUN | 0.199446 | 0.464721 | 0.606885 | 0.001311 | 0.001255 | 0.001180 |
| div_vs_test.test | RUN | 0.209128 | 0.587412 | 0.663599 | 0.001094 | 0.001413 | 0.001064 |
| dot_vv_test.test | RUN | 0.203498 | 0.515629 | 0.617542 | 0.001127 | 0.001264 | 0.001115 |
| eq_vv_test.test | RUN | 0.223866 | 0.589204 | 0.657674 | 0.001281 | 0.001408 | 0.001206 |
| mag_v_test.test | RUN | 0.197972 | 0.476539 | 0.591074 | 0.001269 | 0.001306 | 0.001144 |
| mag_sqr_v_test.test | RUN | 0.198296 | 0.481031 | 0.588871 | 0.001135 | 0.001274 | 0.001276 |
| minus_v_test.test | RUN | 0.202380 | 0.561101 | 0.645919 | 0.001234 | 0.001339 | 0.001105 |
| minus_eq_vv_test.test | RUN | 0.209219 | 0.546264 | 0.594565 | 0.001320 | 0.001392 | 0.001156 |
| minus_vv_test.test | RUN | 0.211524 | 0.588092 | 0.658353 | 0.001252 | 0.001181 | 0.001100 |
| mul_eq_vs_test.test | RUN | 0.204819 | 0.476611 | 0.616413 | 0.001244 | 0.001473 | 0.001289 |
| mul_vs_test.test | RUN | 0.210728 | 0.585740 | 0.638166 | 0.001102 | 0.001267 | 0.001194 |
| mul_sv_test.test | RUN | 0.214031 | 0.583895 | 0.666673 | 0.001228 | 0.001345 | 0.001125 |
| mul_vm_test.test | RUN | 0.298067 | 1.036923 | 1.026551 | 0.001265 | 0.001300 | 0.001290 |
| normalize_v_test.test | RUN | 0.219357 | 0.722609 | 0.675609 | 0.001057 | 0.001300 | 0.001279 |
| plus_eq_vv_test.test | RUN | 0.203784 | 0.540267 | 0.599296 | 0.001424 | 0.001343 | 0.001136 |
| plus_vv_test.test | RUN | 0.212340 | 0.593236 | 0.660223 | 0.000944 | 0.001346 | 0.001061 |
| scalar_cast_v_test.test | RUN | 0.197241 | 0.432633 | 0.549976 | 0.001099 | 0.001384 | 0.001157 |
| vec_index_test.test | RUN | 0.170296 | 0.448827 | 0.519567 | 0.001335 | 0.001138 | 0.001101 |
| vec_register_test.test | RUN | 0.112272 | 0.401240 | 0.360796 | 0.001208 | 0.001288 | 0.001168 |
| cmp_mm_test.test | RUN | 0.340406 | 1.288136 | 1.348306 | 0.001319 | 0.001322 | 0.001165 |
| determinant_test.test | RUN | 0.237608 | 0.653993 | 0.719154 | 0.001212 | 0.001221 | 0.001280 |
| div_eq_ms_test.test | RUN | 0.239110 | 0.594849 | 0.816708 | 0.001321 | 0.001253 | 0.001185 |
| div_ms_test.test | RUN | 0.280335 | 0.966608 | 0.995701 | 0.001288 | 0.001214 | 0.001231 |
| eq_mm_test.test | RUN | 0.335045 | 1.197583 | 1.286030 | 0.001297 | 0.001376 | 0.001093 |
| minus_m_test.test | RUN | 0.284424 | 0.957350 | 0.955860 | 0.001331 | 0.001295 | 0.001351 |
| minus_eq_mm_test.test | RUN | 0.261827 | 0.891638 | 0.902994 | 0.001198 | 0.001316 | 0.001076 |
| minus_mm_test.test | RUN | 0.299518 | 1.134650 | 1.038430 | 0.001279 | 0.001326 | 0.001222 |
| mul_eq_mm_test.test | RUN | 0.243959 | 0.822736 | 0.797572 | 0.001247 | 0.001272 | 0.001336 |
| mul_eq_ms_test.test | RUN | 0.243285 | 0.606038 | 0.821284 | 0.001295 | 0.001280 | 0.001303 |
| mul_mm_test.test | RUN | 0.347122 | 1.872207 | 1.315174 | 0.001405 | 0.001458 | 0.001183 |
| mul_ms_test.test | RUN | 0.288110 | 0.983904 | 1.021629 | 0.001186 | 0.001478 | 0.001176 |
| mul_sm_test.test | RUN | 0.285369 | 0.969670 | 1.035353 | 0.001238 | 0.001400 | 0.001318 |
| mul_mv_test.test | RUN | 0.293657 | 1.041818 | 1.042525 | 0.001172 | 0.001229 | 0.001276 |
| inverse_m_test.test | RUN | 0.403092 | 1.915628 | 1.441573 | 0.001323 | 0.001356 | 0.001322 |
| plus_eq_mm_test.test | RUN | 0.261988 | 0.882436 | 0.899569 | 0.001276 | 0.001221 | 0.001329 |
| plus_mm_test.test | RUN | 0.300824 | 1.123375 | 1.059441 | 0.001231 | 0.001358 | 0.001195 |
| scalar_cast_m_test.test | RUN | 0.220218 | 0.509445 | 0.661951 | 0.001384 | 0.001386 | 0.001088 |
| mat_index_test.test | RUN | 0.187385 | 0.479458 | 0.564084 | 0.001212 | 0.001237 | 0.001151 |
| cmp_qq_test.test | RUN | 0.193321 | 0.438559 | 0.545495 | 0.001262 | 0.001301 | 0.001200 |
| conjugate_test.test | RUN | 0.195385 | 0.459975 | 0.559070 | 0.001238 | 0.001463 | 0.001085 |
| normalize_q_test.test | RUN | 0.201207 | 0.511266 | 0.580663 | 0.001182 | 0.001348 | 0.001193 |
| div_eq_qs_test.test | RUN | 0.200478 | 0.423126 | 0.555354 | 0.001260 | 0.001279 | 0.001123 |
| div_qs_test.test | RUN | 0.195582 | 0.449498 | 0.566852 | 0.001330 | 0.001262 | 0.001313 |
| dot_qq_test.test | RUN | 0.196534 | 0.447538 | 0.578116 | 0.001243 | 0.001415 | 0.001146 |
| eq_qq_test.test | RUN | 0.200027 | 0.467251 | 0.577973 | 0.001375 | 0.001262 | 0.001200 |
| inverse_q_test.test | RUN | 0.241203 | 0.623480 | 0.731570 | 0.001209 | 0.001197 | 0.001128 |
| mag_q_test.test | RUN | 0.197346 | 0.451887 | 0.564850 | 0.001307 | 0.001213 | 0.001157 |
| mag_sqr_q_test.test | RUN | 0.193917 | 0.445127 | 0.554627 | 0.001171 | 0.001388 | 0.001204 |
| minus_q_test.test | RUN | 0.200179 | 0.453801 | 0.551915 | 0.001263 | 0.001311 | 0.001125 |
| minus_eq_qq_test.test | RUN | 0.194651 | 0.455328 | 0.560694 | 0.001454 | 0.001144 | 0.001094 |
| minus_qq_test.test | RUN | 0.202198 | 0.468282 | 0.558634 | 0.001298 | 0.001384 | 0.001173 |
| mul_eq_qs_test.test | RUN | 0.190532 | 0.431184 | 0.551185 | 0.001136 | 0.001524 | 0.001080 |
| mul_qs_test.test | RUN | 0.200366 | 0.457728 | 0.555642 | 0.001301 | 0.001310 | 0.001110 |
| mul_qv_test.test | RUN | 0.244252 | 0.626010 | 0.728492 | 0.001542 | 0.001380 | 0.001143 |
| mul_qq_test.test | RUN | 0.239885 | 0.638196 | 0.704843 | 0.001520 | 0.001354 | 0.001144 |
| mul_eq_qq_test.test | RUN | 0.235187 | 0.638307 | 0.700613 | 0.001220 | 0.001323 | 0.001142 |
| plus_eq_qq_test.test | RUN | 0.196734 | 0.455732 | 0.552067 | 0.001321 | 0.001269 | 0.001055 |
| plus_qq_test.test | RUN | 0.202144 | 0.472480 | 0.567420 | 0.001374 | 0.001321 | 0.001138 |
| scalar_cast_q_test.test | RUN | 0.193110 | 0.433685 | 0.563342 | 0.001302 | 0.001494 | 0.001194 |
| slerp_test.test | RUN | 0.213808 | 0.917193 | 0.677450 | 0.014946 | 0.013331 | 0.013092 |
| convert_to_test.test | RUN | 0.298450 | 0.816101 | 1.071943 | 0.001388 | 0.001198 | 0.001182 |
| rot_mat_test.test | RUN | 0.478999 | 3.840707 | 3.302961 | 0.029365 | 0.033288 | 0.034426 |
| rot_quat_test.test | RUN | 0.239333 | 0.761251 | 0.723982 | 0.001493 | 0.001482 | 0.001326 |
| rotx_mat_test.test | RUN | 0.277756 | 0.989065 | 0.967047 | 0.001412 | 0.001456 | 0.001184 |
| rotx_quat_test.test | RUN | 0.238204 | 0.643033 | 0.684739 | 0.001325 | 0.001400 | 0.001173 |
| roty_mat_test.test | RUN | 0.275702 | 0.990622 | 0.959934 | 0.001379 | 0.001438 | 0.001208 |
| roty_quat_test.test | RUN | 0.236384 | 0.642662 | 0.689820 | 0.001138 | 0.001536 | 0.001098 |
| rotz_mat_test.test | RUN | 0.297588 | 1.139804 | 0.957590 | 0.001298 | 0.001321 | 0.001163 |
| rotz_quat_test.test | RUN | 0.236954 | 0.636889 | 0.697779 | 0.001338 | 0.001425 | 0.001241 |
| zero_vec_test.test | RUN | 0.207138 | 0.548309 | 0.599122 | 0.001194 | 0.001253 | 0.001095 |
| zero_mat_test.test | RUN | 0.246066 | 0.914337 | 0.813395 | 0.001458 | 0.001330 | 0.001154 |
| zero_quat_test.test | RUN | 0.192793 | 0.459139 | 0.554673 | 0.001171 | 0.001243 | 0.001207 |
| identity_mat_test.test | RUN | 0.229646 | 0.677726 | 0.712303 | 0.001219 | 0.001399 | 0.001169 |
| identity_quat_test.test | RUN | 0.190901 | 0.443480 | 0.555484 | 0.001318 | 0.001496 | 0.001252 |
| col_test.test | RUN | 0.377654 | 1.432061 | 1.619925 | 0.001468 | 0.001248 | 0.001127 |
| col_mat_test.test | RUN | 0.248476 | 0.645132 | 0.744667 | 0.001390 | 0.001544 | 0.001123 |
| neg_col_test.test | RUN | 0.288704 | 0.889921 | 0.964513 | 0.001226 | 0.001382 | 0.001201 |
| neg_row_test.test | RUN | 0.296813 | 0.901877 | 0.971261 | 0.001474 | 0.001359 | 0.001104 |
| del_col_test.test | RUN | 0.307481 | 0.997325 | 0.995831 | 0.001381 | 0.001470 | 0.001172 |
| del_row_test.test | RUN | 0.300421 | 0.988793 | 0.992768 | 0.001196 | 0.001546 | 0.001183 |
| del_row_col_test.test | RUN | 0.417197 | 1.844856 | 1.840751 | 0.001301 | 0.001373 | 0.001153 |
| swap_cols_test.test | RUN | 0.573012 | 2.487233 | 2.256910 | 0.001312 | 0.001371 | 0.001216 |
| swap_rows_test.test | RUN | 0.627754 | 2.584748 | 2.267034 | 0.001151 | 0.001250 | 0.001123 |
| diag_test.test | RUN | 0.253814 | 0.653055 | 0.870921 | 0.001225 | 0.001466 | 0.001210 |
| diag_mat_test.test | RUN | 0.257805 | 0.642488 | 0.761745 | 0.001216 | 0.001406 | 0.001181 |
| row_test.test | RUN | 0.380003 | 1.423527 | 1.601785 | 0.001321 | 0.001382 | 0.001260 |
| row_mat_test.test | RUN | 0.243366 | 0.628843 | 0.760940 | 0.001289 | 0.001243 | 0.001371 |
| transpose_test.test | RUN | 0.296855 | 0.954418 | 1.019090 | 0.001434 | 0.001369 | 0.001146 |
| translation_test.test | RUN | 0.231859 | 0.600820 | 0.759614 | 0.001216 | 0.001238 | 0.001216 |
| translation_mat_test.test | RUN | 0.255197 | 0.604924 | 0.812749 | 0.001290 | 0.001146 | 0.001153 |
| swizzle_const_fail.test | COMPILE_FAIL | 0.084102 | 0.172666 | 0.213549 | — | — | — |
| swizzle2_test2.test | RUN | 0.102492 | 0.263692 | 0.318698 | 0.001188 | 0.001620 | 0.001351 |
| swizzle2_test3.test | RUN | 0.104715 | 0.259598 | 0.312074 | 0.001182 | 0.001207 | 0.001101 |
| swizzle2_test4.test | RUN | 0.103827 | 0.258692 | 0.307638 | 0.001169 | 0.001366 | 0.001086 |
| swizzle2_test.test | RUN | 0.330947 | 0.719282 | 0.967876 | 0.001154 | 0.001453 | 0.001150 |
| swizzle3_test2.test | RUN | 0.113904 | 0.277230 | 0.344495 | 0.000917 | 0.001507 | 0.001256 |
| swizzle3_test3.test | RUN | 0.114319 | 0.280061 | 0.338854 | 0.001184 | 0.001352 | 0.001097 |
| swizzle3_test4.test | RUN | 0.116065 | 0.280899 | 0.339235 | 0.001111 | 0.001295 | 0.001108 |
| swizzle3_test.test | RUN | 0.325215 | 0.729465 | 0.960687 | 0.001104 | 0.001149 | 0.001114 |
| swizzle4_test2.test | RUN | 0.194488 | 0.403205 | 0.551589 | 0.001118 | 0.001496 | 0.001129 |
| swizzle4_test3.test | RUN | 0.190142 | 0.397531 | 0.548853 | 0.001299 | 0.001284 | 0.001099 |
| swizzle4_test4.test | RUN | 0.192767 | 0.392680 | 0.550747 | 0.001091 | 0.001237 | 0.001064 |
| swizzle4_test.test | RUN | 0.337745 | 0.793504 | 1.025274 | 0.001380 | 0.001265 | 0.001253 |
| deduce_scalar_test.test | COMPILE | 0.016498 | 0.039098 | 0.052854 | — | — | — |
| deduce_scalar_mq_test.test | RUN | 0.125662 | 0.309307 | 0.371866 | 0.001340 | 0.001252 | 0.001151 |
| deduce_scalar_mv_test.test | RUN | 0.149333 | 0.349578 | 0.436305 | 0.001226 | 0.001363 | 0.001134 |
| deduce_scalar_fail.test | COMPILE_FAIL | 0.013605 | 0.024647 | 0.041653 | — | — | — |
| deduce_mat_test.test | COMPILE | 0.014709 | 0.033899 | 0.048157 | — | — | — |
| deduce_quat_test.test | COMPILE | 0.014253 | 0.033111 | 0.046826 | — | — | — |
| deduce_vec_test.test | COMPILE | 0.015516 | 0.031938 | 0.046097 | — | — | — |
| interop_test.test | RUN | 0.161088 | 0.449233 | 0.561679 | 0.000393 | 0.000513 | 0.000871 |
| transform_test.test | RUN | 0.308683 | 0.662932 | 0.891263 | 0.000927 | 0.000977 | 0.000811 |
| projection_test.test | RUN | 0.219236 | 0.447483 | 0.591167 | 0.000956 | 0.000959 | 0.000875 |
| scalar_traits_test.test | COMPILE | 0.016050 | 0.034630 | 0.050148 | — | — | — |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.998× | 1.001×, 0.994× | 0.992× |
| clang | 1.038× | 1.044×, 1.032× | 0.982× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1363 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44560957980).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| access_m_test.test | 10 | 0.000830s | 0.000821s | 0.000817s | byte equality observed |
| access_q_test.test | 10 | 0.000836s | 0.000778s | 0.000824s | byte equality observed |
| access_v_test.test | 10 | 0.000819s | 0.000798s | 0.000817s | byte equality observed |
| assign_test.test | 10 | 0.000778s | 0.000790s | 0.000828s | byte equality observed |
| cmp_mm_test.test | 10 | 0.000850s | 0.000820s | 0.000809s | byte equality observed |
| cmp_qq_test.test | 10 | 0.000811s | 0.000813s | 0.000774s | byte equality observed |
| cmp_vv_test.test | 10 | 0.000798s | 0.000811s | 0.000807s | byte equality observed |
| col_mat_test.test | 10 | 0.000828s | 0.000793s | 0.000783s | byte equality observed |
| col_test.test | 10 | 0.000804s | 0.000807s | 0.000799s | byte equality observed |
| conjugate_test.test | 10 | 0.000822s | 0.000825s | 0.000809s | byte equality observed |
| convert_to_test.test | 10 | 0.000834s | 0.000809s | 0.000796s | byte equality observed |
| cross_test.test | 10 | 0.000803s | 0.000816s | 0.000789s | byte equality observed |
| deduce_scalar_mq_test.test | 10 | 0.000817s | 0.000807s | 0.000808s | byte equality observed |
| deduce_scalar_mv_test.test | 10 | 0.000831s | 0.000822s | 0.000815s | byte equality observed |
| del_col_test.test | 10 | 0.000840s | 0.000810s | 0.000833s | byte equality observed |
| del_row_col_test.test | 10 | 0.000843s | 0.000810s | 0.000815s | byte equality observed |
| del_row_test.test | 10 | 0.000826s | 0.000821s | 0.000814s | byte equality observed |
| determinant_test.test | 10 | 0.000825s | 0.000835s | 0.000836s | byte equality observed |
| diag_mat_test.test | 10 | 0.000798s | 0.000837s | 0.000824s | byte equality observed |
| diag_test.test | 10 | 0.000809s | 0.000782s | 0.000853s | byte equality observed |
| div_eq_ms_test.test | 10 | 0.000812s | 0.000817s | 0.000845s | byte equality observed |
| div_eq_qs_test.test | 10 | 0.000835s | 0.000803s | 0.000851s | byte equality observed |
| div_eq_vs_test.test | 10 | 0.000812s | 0.000804s | 0.000848s | byte equality observed |
| div_ms_test.test | 10 | 0.000837s | 0.000807s | 0.000806s | byte equality observed |
| div_qs_test.test | 10 | 0.000828s | 0.000812s | 0.000801s | byte equality observed |
| div_vs_test.test | 10 | 0.000807s | 0.000807s | 0.000829s | byte equality observed |
| dot_qq_test.test | 10 | 0.000797s | 0.000820s | 0.000832s | byte equality observed |
| dot_vv_test.test | 10 | 0.000793s | 0.000817s | 0.000842s | byte equality observed |
| eq_mm_test.test | 10 | 0.000822s | 0.000821s | 0.000826s | byte equality observed |
| eq_qq_test.test | 10 | 0.000812s | 0.000792s | 0.000793s | byte equality observed |
| eq_vv_test.test | 10 | 0.000817s | 0.000792s | 0.000795s | byte equality observed |
| identity_mat_test.test | 10 | 0.000809s | 0.000792s | 0.000786s | byte equality observed |
| identity_quat_test.test | 10 | 0.000806s | 0.000788s | 0.000823s | byte equality observed |
| interop_test.test | 10 | 0.000369s | 0.000373s | 0.000795s | byte equality observed |
| inverse_m_test.test | 10 | 0.000861s | 0.000855s | 0.000838s | byte equality observed |
| inverse_q_test.test | 10 | 0.000823s | 0.000791s | 0.000825s | byte equality observed |
| mag_q_test.test | 10 | 0.000810s | 0.000802s | 0.000796s | byte equality observed |
| mag_sqr_q_test.test | 10 | 0.000836s | 0.000817s | 0.000798s | byte equality observed |
| mag_sqr_v_test.test | 10 | 0.000821s | 0.000813s | 0.000819s | byte equality observed |
| mag_v_test.test | 10 | 0.000822s | 0.000844s | 0.000835s | byte equality observed |
| mat_index_test.test | 10 | 0.000840s | 0.000808s | 0.000830s | byte equality observed |
| mat_traits_array_test.test | 10 | 0.000825s | 0.000798s | 0.000786s | byte equality observed |
| mat_traits_std_array_test.test | 10 | 0.000790s | 0.000798s | 0.000810s | byte equality observed |
| math_test.test | 10 | 0.001204s | 0.001177s | 0.001061s | byte equality observed |
| minus_eq_mm_test.test | 10 | 0.000798s | 0.000805s | 0.000794s | byte equality observed |
| minus_eq_qq_test.test | 10 | 0.000821s | 0.000819s | 0.000812s | byte equality observed |
| minus_eq_vv_test.test | 10 | 0.000817s | 0.000798s | 0.000834s | byte equality observed |
| minus_m_test.test | 10 | 0.000823s | 0.000801s | 0.000789s | byte equality observed |
| minus_mm_test.test | 10 | 0.000831s | 0.000819s | 0.000803s | byte equality observed |
| minus_q_test.test | 10 | 0.000827s | 0.000806s | 0.000810s | byte equality observed |
| minus_qq_test.test | 10 | 0.000815s | 0.000799s | 0.000806s | byte equality observed |
| minus_v_test.test | 10 | 0.000816s | 0.000819s | 0.000814s | byte equality observed |
| minus_vv_test.test | 10 | 0.000815s | 0.000827s | 0.000822s | byte equality observed |
| mul_eq_mm_test.test | 10 | 0.000813s | 0.000833s | 0.000850s | byte equality observed |
| mul_eq_ms_test.test | 10 | 0.000813s | 0.000830s | 0.000820s | byte equality observed |
| mul_eq_qq_test.test | 10 | 0.000817s | 0.000844s | 0.000832s | byte equality observed |
| mul_eq_qs_test.test | 10 | 0.000799s | 0.000825s | 0.000806s | byte equality observed |
| mul_eq_vs_test.test | 10 | 0.000813s | 0.000817s | 0.000793s | byte equality observed |
| mul_mm_test.test | 10 | 0.000817s | 0.000817s | 0.000816s | byte equality observed |
| mul_ms_test.test | 10 | 0.000828s | 0.000795s | 0.000811s | byte equality observed |
| mul_mv_test.test | 10 | 0.000813s | 0.000804s | 0.000828s | byte equality observed |
| mul_qq_test.test | 10 | 0.000829s | 0.000842s | 0.000837s | byte equality observed |
| mul_qs_test.test | 10 | 0.000823s | 0.000825s | 0.000810s | byte equality observed |
| mul_qv_test.test | 10 | 0.000827s | 0.000843s | 0.000822s | byte equality observed |
| mul_sm_test.test | 10 | 0.000822s | 0.000852s | 0.000791s | byte equality observed |
| mul_sv_test.test | 10 | 0.000821s | 0.000792s | 0.000815s | byte equality observed |
| mul_vm_test.test | 10 | 0.000806s | 0.000834s | 0.000823s | byte equality observed |
| mul_vs_test.test | 10 | 0.000810s | 0.000809s | 0.000807s | byte equality observed |
| neg_col_test.test | 10 | 0.000818s | 0.000826s | 0.000812s | byte equality observed |
| neg_row_test.test | 10 | 0.000813s | 0.000821s | 0.000825s | byte equality observed |
| normalize_q_test.test | 10 | 0.000807s | 0.000820s | 0.000806s | byte equality observed |
| normalize_v_test.test | 10 | 0.000799s | 0.000829s | 0.000837s | byte equality observed |
| plus_eq_mm_test.test | 10 | 0.000797s | 0.000814s | 0.000831s | byte equality observed |
| plus_eq_qq_test.test | 10 | 0.000795s | 0.000802s | 0.000799s | byte equality observed |
| plus_eq_vv_test.test | 10 | 0.000822s | 0.000791s | 0.000786s | byte equality observed |
| plus_mm_test.test | 10 | 0.000846s | 0.000829s | 0.000797s | byte equality observed |
| plus_qq_test.test | 10 | 0.000820s | 0.000790s | 0.000803s | byte equality observed |
| plus_vv_test.test | 10 | 0.000846s | 0.000797s | 0.000793s | byte equality observed |
| projection_test.test | 10 | 0.000850s | 0.000810s | 0.000801s | byte equality observed |
| quat_traits_array_test.test | 10 | 0.000815s | 0.000821s | 0.000801s | byte equality observed |
| quat_traits_std_array_test.test | 10 | 0.000763s | 0.000773s | 0.000769s | byte equality observed |
| rot_mat_test.test | 1 | 0.019983s | 0.021981s | 0.026814s | byte equality observed |
| rot_quat_test.test | 10 | 0.000748s | 0.000741s | 0.000739s | byte equality observed |
| rotx_mat_test.test | 10 | 0.000773s | 0.000792s | 0.000766s | byte equality observed |
| rotx_quat_test.test | 10 | 0.000840s | 0.000822s | 0.000778s | byte equality observed |
| roty_mat_test.test | 10 | 0.000828s | 0.000855s | 0.000842s | byte equality observed |
| roty_quat_test.test | 10 | 0.000814s | 0.000817s | 0.000816s | byte equality observed |
| rotz_mat_test.test | 10 | 0.000828s | 0.000815s | 0.000820s | byte equality observed |
| rotz_quat_test.test | 10 | 0.000831s | 0.000822s | 0.000822s | byte equality observed |
| row_mat_test.test | 10 | 0.000798s | 0.000803s | 0.000808s | byte equality observed |
| row_test.test | 10 | 0.000814s | 0.000801s | 0.000799s | byte equality observed |
| scalar_cast_m_test.test | 10 | 0.000816s | 0.000800s | 0.000789s | byte equality observed |
| scalar_cast_q_test.test | 10 | 0.000808s | 0.000807s | 0.000804s | byte equality observed |
| scalar_cast_v_test.test | 10 | 0.000780s | 0.000804s | 0.000791s | byte equality observed |
| slerp_test.test | 2 | 0.011090s | 0.009434s | 0.009668s | byte equality observed |
| swap_cols_test.test | 10 | 0.000757s | 0.000739s | 0.000751s | byte equality observed |
| swap_rows_test.test | 10 | 0.000761s | 0.000778s | 0.000764s | byte equality observed |
| swizzle2_test.test | 10 | 0.000799s | 0.000811s | 0.000840s | byte equality observed |
| swizzle2_test2.test | 10 | 0.000822s | 0.000798s | 0.000789s | byte equality observed |
| swizzle2_test3.test | 10 | 0.000844s | 0.000827s | 0.000826s | byte equality observed |
| swizzle2_test4.test | 10 | 0.000811s | 0.000787s | 0.000847s | byte equality observed |
| swizzle3_test.test | 10 | 0.000807s | 0.000813s | 0.000809s | byte equality observed |
| swizzle3_test2.test | 10 | 0.000806s | 0.000836s | 0.000812s | byte equality observed |
| swizzle3_test3.test | 10 | 0.000812s | 0.000815s | 0.000793s | byte equality observed |
| swizzle3_test4.test | 10 | 0.000792s | 0.000826s | 0.000789s | byte equality observed |
| swizzle4_test.test | 10 | 0.000813s | 0.000799s | 0.000808s | byte equality observed |
| swizzle4_test2.test | 10 | 0.000835s | 0.000799s | 0.000813s | byte equality observed |
| swizzle4_test3.test | 10 | 0.000810s | 0.000807s | 0.000815s | byte equality observed |
| swizzle4_test4.test | 10 | 0.000810s | 0.000816s | 0.000815s | byte equality observed |
| to_string_test.test | 10 | 0.000844s | 0.000833s | 0.000831s | byte equality observed |
| transform_test.test | 10 | 0.000811s | 0.000837s | 0.000815s | byte equality observed |
| translation_mat_test.test | 10 | 0.000812s | 0.000803s | 0.000794s | byte equality observed |
| translation_test.test | 10 | 0.000827s | 0.000816s | 0.000815s | byte equality observed |
| transpose_test.test | 10 | 0.000812s | 0.000788s | 0.000827s | byte equality observed |
| vec_index_test.test | 10 | 0.000805s | 0.000831s | 0.000799s | byte equality observed |
| vec_register_test.test | 10 | 0.000812s | 0.000836s | 0.000829s | byte equality observed |
| vec_traits_array_test.test | 10 | 0.000815s | 0.000831s | 0.000843s | byte equality observed |
| vec_traits_gnuc_test.test | 10 | 0.000828s | 0.000833s | 0.000788s | byte equality observed |
| vec_traits_std_array_test.test | 10 | 0.000807s | 0.000843s | 0.000796s | byte equality observed |
| zero_mat_test.test | 10 | 0.000809s | 0.000825s | 0.000818s | byte equality observed |
| zero_quat_test.test | 10 | 0.000827s | 0.000824s | 0.000803s | byte equality observed |
| zero_vec_test.test | 10 | 0.000818s | 0.000804s | 0.000805s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44560957980).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
