# libs/qvm/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| math_test.test | RUN | 0.193388 | 0.554116 | 0.592723 | 0.001712 | 0.001648 | 0.001497 |
| mat_traits_array_test.test | RUN | 0.154266 | 0.551681 | 0.448652 | 0.001228 | 0.001273 | 0.001209 |
| mat_traits_std_array_test.test | RUN | 0.152021 | 0.419081 | 0.466541 | 0.000974 | 0.001185 | 0.000893 |
| vec_traits_array_test.test | RUN | 0.130759 | 0.426671 | 0.388024 | 0.001274 | 0.001242 | 0.001062 |
| vec_traits_gnuc_test.test | RUN | 0.244183 | 0.514244 | 0.754012 | 0.001263 | 0.001261 | 0.001240 |
| vec_traits_std_array_test.test | RUN | 0.131325 | 0.330849 | 0.386092 | 0.001388 | 0.001401 | 0.001172 |
| quat_traits_array_test.test | RUN | 0.129663 | 0.451853 | 0.383876 | 0.001201 | 0.001235 | 0.001205 |
| quat_traits_std_array_test.test | RUN | 0.129806 | 0.336551 | 0.385527 | 0.001248 | 0.001418 | 0.001322 |
| access_m_test.test | RUN | 0.200872 | 0.798193 | 0.879842 | 0.001344 | 0.001365 | 0.001223 |
| access_m_fail1.test | COMPILE_FAIL | 0.021774 | 0.033885 | 0.056106 | — | — | — |
| access_m_fail2.test | COMPILE_FAIL | 0.019871 | 0.033654 | 0.057793 | — | — | — |
| access_q_test.test | RUN | 0.173481 | 0.409399 | 0.520650 | 0.001327 | 0.001183 | 0.001423 |
| access_q_fail.test | COMPILE_FAIL | 0.015520 | 0.027877 | 0.049609 | — | — | — |
| access_v_test.test | RUN | 0.172207 | 0.429982 | 0.513531 | 0.001298 | 0.001298 | 0.001178 |
| access_v_fail1.test | COMPILE_FAIL | 0.013818 | 0.025005 | 0.044514 | — | — | — |
| access_v_fail2.test | COMPILE_FAIL | 0.013778 | 0.025234 | 0.044841 | — | — | — |
| assign_test.test | RUN | 0.268438 | 0.676068 | 0.946888 | 0.001444 | 0.001486 | 0.001183 |
| to_string_test.test | RUN | 0.319615 | 1.148910 | 5.589922 | 0.001270 | 0.001292 | 0.001230 |
| cmp_vv_test.test | RUN | 0.215616 | 0.547531 | 0.631191 | 0.001061 | 0.001207 | 0.001178 |
| cross_test.test | RUN | 0.209382 | 0.499971 | 0.614593 | 0.001015 | 0.001394 | 0.001221 |
| div_eq_vs_test.test | RUN | 0.197977 | 0.459837 | 0.613661 | 0.001392 | 0.001172 | 0.001420 |
| div_vs_test.test | RUN | 0.212687 | 0.577476 | 0.670237 | 0.001111 | 0.001430 | 0.001208 |
| dot_vv_test.test | RUN | 0.197855 | 0.517581 | 0.611309 | 0.001102 | 0.001232 | 0.001475 |
| eq_vv_test.test | RUN | 0.221415 | 0.577023 | 0.670394 | 0.001090 | 0.001234 | 0.001263 |
| mag_v_test.test | RUN | 0.199972 | 0.483629 | 0.597614 | 0.001374 | 0.001131 | 0.001245 |
| mag_sqr_v_test.test | RUN | 0.198958 | 0.464872 | 0.597743 | 0.001027 | 0.001286 | 0.001067 |
| minus_v_test.test | RUN | 0.204271 | 0.548395 | 0.647071 | 0.001079 | 0.001375 | 0.001392 |
| minus_eq_vv_test.test | RUN | 0.199964 | 0.532513 | 0.613013 | 0.001187 | 0.001412 | 0.001166 |
| minus_vv_test.test | RUN | 0.213558 | 0.582888 | 0.669315 | 0.001484 | 0.001305 | 0.001308 |
| mul_eq_vs_test.test | RUN | 0.200426 | 0.464895 | 0.626812 | 0.001216 | 0.001289 | 0.001112 |
| mul_vs_test.test | RUN | 0.210681 | 0.572898 | 0.666607 | 0.001122 | 0.001377 | 0.001067 |
| mul_sv_test.test | RUN | 0.209619 | 0.578940 | 0.649225 | 0.001076 | 0.001392 | 0.001122 |
| mul_vm_test.test | RUN | 0.293616 | 1.022089 | 1.034756 | 0.001156 | 0.001268 | 0.001196 |
| normalize_v_test.test | RUN | 0.214529 | 0.713051 | 0.673659 | 0.001289 | 0.001283 | 0.001228 |
| plus_eq_vv_test.test | RUN | 0.200792 | 0.537877 | 0.586444 | 0.000875 | 0.001250 | 0.001222 |
| plus_vv_test.test | RUN | 0.208806 | 0.584742 | 0.652637 | 0.001135 | 0.001355 | 0.001098 |
| scalar_cast_v_test.test | RUN | 0.193310 | 0.418218 | 0.550077 | 0.001111 | 0.001319 | 0.001237 |
| vec_index_test.test | RUN | 0.167392 | 0.436681 | 0.512193 | 0.001224 | 0.001400 | 0.001118 |
| vec_register_test.test | RUN | 0.114489 | 0.391903 | 0.368829 | 0.001255 | 0.000910 | 0.001196 |
| cmp_mm_test.test | RUN | 0.346311 | 1.271026 | 1.338349 | 0.001485 | 0.001200 | 0.001270 |
| determinant_test.test | RUN | 0.233562 | 0.651077 | 0.708118 | 0.001131 | 0.001294 | 0.001386 |
| div_eq_ms_test.test | RUN | 0.248570 | 0.592951 | 0.829825 | 0.001266 | 0.001310 | 0.001400 |
| div_ms_test.test | RUN | 0.291860 | 0.965147 | 1.001660 | 0.001290 | 0.001266 | 0.001203 |
| eq_mm_test.test | RUN | 0.331412 | 1.189773 | 1.295919 | 0.001266 | 0.001356 | 0.001258 |
| minus_m_test.test | RUN | 0.286130 | 0.927973 | 0.956801 | 0.001350 | 0.001303 | 0.001190 |
| minus_eq_mm_test.test | RUN | 0.273782 | 0.866304 | 0.889565 | 0.001300 | 0.001328 | 0.001168 |
| minus_mm_test.test | RUN | 0.308361 | 1.112050 | 1.042579 | 0.001358 | 0.001252 | 0.001125 |
| mul_eq_mm_test.test | RUN | 0.245552 | 0.803281 | 0.785489 | 0.001354 | 0.001379 | 0.001222 |
| mul_eq_ms_test.test | RUN | 0.251001 | 0.590585 | 0.823417 | 0.001360 | 0.001238 | 0.001225 |
| mul_mm_test.test | RUN | 0.353162 | 1.823571 | 1.341083 | 0.001397 | 0.001277 | 0.001207 |
| mul_ms_test.test | RUN | 0.288433 | 0.962153 | 1.007392 | 0.001212 | 0.001226 | 0.001257 |
| mul_sm_test.test | RUN | 0.297049 | 0.948956 | 1.027777 | 0.001265 | 0.001221 | 0.001292 |
| mul_mv_test.test | RUN | 0.299411 | 1.021800 | 1.022886 | 0.001371 | 0.001277 | 0.001216 |
| inverse_m_test.test | RUN | 0.414106 | 1.891887 | 1.445803 | 0.001346 | 0.001267 | 0.001338 |
| plus_eq_mm_test.test | RUN | 0.272382 | 0.872134 | 0.898479 | 0.001209 | 0.001208 | 0.001191 |
| plus_mm_test.test | RUN | 0.298065 | 1.105880 | 1.065377 | 0.001264 | 0.001310 | 0.001174 |
| scalar_cast_m_test.test | RUN | 0.224753 | 0.493058 | 0.655962 | 0.001258 | 0.001257 | 0.001154 |
| mat_index_test.test | RUN | 0.186750 | 0.470923 | 0.564939 | 0.001383 | 0.001344 | 0.001216 |
| cmp_qq_test.test | RUN | 0.204162 | 0.437400 | 0.540666 | 0.001199 | 0.001203 | 0.001146 |
| conjugate_test.test | RUN | 0.196740 | 0.453709 | 0.558058 | 0.001122 | 0.001344 | 0.001128 |
| normalize_q_test.test | RUN | 0.201307 | 0.506184 | 0.581916 | 0.001218 | 0.001194 | 0.001239 |
| div_eq_qs_test.test | RUN | 0.196309 | 0.424963 | 0.550280 | 0.001534 | 0.001366 | 0.001125 |
| div_qs_test.test | RUN | 0.193510 | 0.451862 | 0.570716 | 0.001157 | 0.001214 | 0.001245 |
| dot_qq_test.test | RUN | 0.197042 | 0.438150 | 0.570787 | 0.001144 | 0.001263 | 0.001126 |
| eq_qq_test.test | RUN | 0.202083 | 0.464328 | 0.573703 | 0.001276 | 0.001432 | 0.001349 |
| inverse_q_test.test | RUN | 0.246960 | 0.614334 | 0.720549 | 0.001281 | 0.001260 | 0.001450 |
| mag_q_test.test | RUN | 0.196004 | 0.450424 | 0.563036 | 0.001454 | 0.001192 | 0.001159 |
| mag_sqr_q_test.test | RUN | 0.194823 | 0.441985 | 0.563373 | 0.001157 | 0.001372 | 0.001177 |
| minus_q_test.test | RUN | 0.200901 | 0.452289 | 0.570277 | 0.001316 | 0.001198 | 0.001332 |
| minus_eq_qq_test.test | RUN | 0.192452 | 0.448125 | 0.564890 | 0.001308 | 0.001209 | 0.001228 |
| minus_qq_test.test | RUN | 0.202381 | 0.460560 | 0.575888 | 0.001530 | 0.001280 | 0.001155 |
| mul_eq_qs_test.test | RUN | 0.196786 | 0.425135 | 0.559389 | 0.001180 | 0.001266 | 0.001203 |
| mul_qs_test.test | RUN | 0.197834 | 0.452345 | 0.568467 | 0.001229 | 0.001370 | 0.001216 |
| mul_qv_test.test | RUN | 0.238444 | 0.616473 | 0.729029 | 0.001248 | 0.001405 | 0.001363 |
| mul_qq_test.test | RUN | 0.238973 | 0.625325 | 0.712801 | 0.001422 | 0.001211 | 0.001228 |
| mul_eq_qq_test.test | RUN | 0.240779 | 0.622122 | 0.705071 | 0.001107 | 0.001261 | 0.001129 |
| plus_eq_qq_test.test | RUN | 0.196484 | 0.447736 | 0.559931 | 0.001163 | 0.001240 | 0.001315 |
| plus_qq_test.test | RUN | 0.201879 | 0.451539 | 0.569326 | 0.001318 | 0.001340 | 0.001288 |
| scalar_cast_q_test.test | RUN | 0.192849 | 0.421248 | 0.554399 | 0.001287 | 0.001304 | 0.001253 |
| slerp_test.test | RUN | 0.217157 | 0.888437 | 0.669672 | 0.015079 | 0.013067 | 0.013366 |
| convert_to_test.test | RUN | 0.294935 | 0.804871 | 1.041355 | 0.001352 | 0.001286 | 0.001244 |
| rot_mat_test.test | RUN | 0.472013 | 3.722036 | 3.302358 | 0.030729 | 0.032877 | 0.034079 |
| rot_quat_test.test | RUN | 0.244744 | 0.736579 | 0.737009 | 0.001345 | 0.001248 | 0.001371 |
| rotx_mat_test.test | RUN | 0.276976 | 0.982476 | 0.975514 | 0.001205 | 0.001296 | 0.001311 |
| rotx_quat_test.test | RUN | 0.235369 | 0.619688 | 0.683838 | 0.001178 | 0.001247 | 0.001331 |
| roty_mat_test.test | RUN | 0.278493 | 0.973438 | 0.922523 | 0.001292 | 0.001422 | 0.001135 |
| roty_quat_test.test | RUN | 0.239596 | 0.619421 | 0.692655 | 0.001129 | 0.001225 | 0.001187 |
| rotz_mat_test.test | RUN | 0.289464 | 1.107473 | 1.023360 | 0.001180 | 0.001180 | 0.001300 |
| rotz_quat_test.test | RUN | 0.231462 | 0.626220 | 0.669790 | 0.001254 | 0.001290 | 0.001276 |
| zero_vec_test.test | RUN | 0.199889 | 0.534665 | 0.593379 | 0.001293 | 0.000892 | 0.001428 |
| zero_mat_test.test | RUN | 0.248304 | 0.881641 | 0.817921 | 0.001140 | 0.001145 | 0.001172 |
| zero_quat_test.test | RUN | 0.195547 | 0.440884 | 0.564745 | 0.001433 | 0.001202 | 0.001173 |
| identity_mat_test.test | RUN | 0.228253 | 0.651936 | 0.720701 | 0.001202 | 0.001341 | 0.001117 |
| identity_quat_test.test | RUN | 0.196043 | 0.432082 | 0.552130 | 0.001456 | 0.001242 | 0.001207 |
| col_test.test | RUN | 0.386928 | 1.399205 | 1.594648 | 0.001263 | 0.001238 | 0.001348 |
| col_mat_test.test | RUN | 0.243611 | 0.616918 | 0.750062 | 0.001170 | 0.001279 | 0.001117 |
| neg_col_test.test | RUN | 0.285818 | 0.866670 | 0.962414 | 0.001257 | 0.001297 | 0.001263 |
| neg_row_test.test | RUN | 0.297267 | 0.883603 | 0.961775 | 0.001336 | 0.001254 | 0.001210 |
| del_col_test.test | RUN | 0.302011 | 0.977156 | 1.007470 | 0.001103 | 0.001304 | 0.001290 |
| del_row_test.test | RUN | 0.306013 | 0.959292 | 1.004901 | 0.001374 | 0.001306 | 0.001216 |
| del_row_col_test.test | RUN | 0.423770 | 1.808908 | 1.841687 | 0.001389 | 0.001297 | 0.001121 |
| swap_cols_test.test | RUN | 0.579656 | 2.408807 | 2.252060 | 0.001225 | 0.001280 | 0.001327 |
| swap_rows_test.test | RUN | 0.635593 | 2.514351 | 2.232709 | 0.001393 | 0.001384 | 0.001127 |
| diag_test.test | RUN | 0.257395 | 0.652016 | 0.845058 | 0.001223 | 0.001144 | 0.001094 |
| diag_mat_test.test | RUN | 0.255783 | 0.632628 | 0.787245 | 0.001379 | 0.001218 | 0.001236 |
| row_test.test | RUN | 0.390496 | 1.361586 | 1.615257 | 0.001222 | 0.001405 | 0.001158 |
| row_mat_test.test | RUN | 0.241507 | 0.610068 | 0.720800 | 0.001374 | 0.001310 | 0.001290 |
| transpose_test.test | RUN | 0.300946 | 0.944984 | 1.012206 | 0.001109 | 0.001336 | 0.001194 |
| translation_test.test | RUN | 0.239064 | 0.586457 | 0.751517 | 0.001195 | 0.001324 | 0.001106 |
| translation_mat_test.test | RUN | 0.256109 | 0.594557 | 0.816726 | 0.001400 | 0.001180 | 0.001137 |
| swizzle_const_fail.test | COMPILE_FAIL | 0.085706 | 0.171169 | 0.223632 | — | — | — |
| swizzle2_test2.test | RUN | 0.102305 | 0.257900 | 0.302188 | 0.001346 | 0.001181 | 0.001122 |
| swizzle2_test3.test | RUN | 0.101080 | 0.252142 | 0.303618 | 0.001169 | 0.001226 | 0.001198 |
| swizzle2_test4.test | RUN | 0.100644 | 0.256829 | 0.305353 | 0.001034 | 0.001225 | 0.001210 |
| swizzle2_test.test | RUN | 0.331176 | 0.703842 | 0.980177 | 0.001267 | 0.001163 | 0.001169 |
| swizzle3_test2.test | RUN | 0.116087 | 0.271151 | 0.339323 | 0.001503 | 0.001422 | 0.001236 |
| swizzle3_test3.test | RUN | 0.114545 | 0.275624 | 0.338741 | 0.001260 | 0.000927 | 0.001245 |
| swizzle3_test4.test | RUN | 0.116988 | 0.270647 | 0.341839 | 0.001074 | 0.001266 | 0.001167 |
| swizzle3_test.test | RUN | 0.333950 | 0.721588 | 0.968919 | 0.001141 | 0.001239 | 0.001083 |
| swizzle4_test2.test | RUN | 0.194699 | 0.397043 | 0.541834 | 0.001294 | 0.001354 | 0.001101 |
| swizzle4_test3.test | RUN | 0.194839 | 0.390513 | 0.543707 | 0.001281 | 0.001393 | 0.001098 |
| swizzle4_test4.test | RUN | 0.196543 | 0.391356 | 0.541957 | 0.001192 | 0.001265 | 0.001247 |
| swizzle4_test.test | RUN | 0.337465 | 0.791666 | 1.015357 | 0.001192 | 0.001261 | 0.001111 |
| deduce_scalar_test.test | COMPILE | 0.015987 | 0.038410 | 0.052639 | — | — | — |
| deduce_scalar_mq_test.test | RUN | 0.130994 | 0.308983 | 0.363782 | 0.001198 | 0.001207 | 0.001125 |
| deduce_scalar_mv_test.test | RUN | 0.146579 | 0.341844 | 0.426211 | 0.001160 | 0.001361 | 0.001129 |
| deduce_scalar_fail.test | COMPILE_FAIL | 0.013459 | 0.023666 | 0.041923 | — | — | — |
| deduce_mat_test.test | COMPILE | 0.015094 | 0.033328 | 0.046893 | — | — | — |
| deduce_quat_test.test | COMPILE | 0.014771 | 0.032686 | 0.046809 | — | — | — |
| deduce_vec_test.test | COMPILE | 0.014581 | 0.033271 | 0.044722 | — | — | — |
| interop_test.test | RUN | 0.153467 | 0.403278 | 0.534319 | 0.000518 | 0.000398 | 0.000867 |
| transform_test.test | RUN | 0.307652 | 0.634549 | 0.883220 | 0.000890 | 0.000854 | 0.000855 |
| projection_test.test | RUN | 0.199534 | 0.491102 | 0.620977 | 0.000902 | 0.000953 | 0.000934 |
| scalar_traits_test.test | COMPILE | 0.015690 | 0.034700 | 0.050242 | — | — | — |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.999× | 0.998×, 0.999× | 1.008× |
| clang | 1.046× | 1.045×, 1.047× | 0.995× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1364 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44362912212).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| access_m_test.test | 10 | 0.000807s | 0.000795s | 0.000811s | byte equality observed |
| access_q_test.test | 10 | 0.000808s | 0.000835s | 0.000824s | byte equality observed |
| access_v_test.test | 10 | 0.000796s | 0.000823s | 0.000830s | byte equality observed |
| assign_test.test | 10 | 0.000798s | 0.000792s | 0.000827s | byte equality observed |
| cmp_mm_test.test | 10 | 0.000831s | 0.000819s | 0.000826s | byte equality observed |
| cmp_qq_test.test | 10 | 0.000815s | 0.000824s | 0.000805s | byte equality observed |
| cmp_vv_test.test | 10 | 0.000808s | 0.000831s | 0.000810s | byte equality observed |
| col_mat_test.test | 10 | 0.000807s | 0.000818s | 0.000817s | byte equality observed |
| col_test.test | 10 | 0.000834s | 0.000802s | 0.000804s | byte equality observed |
| conjugate_test.test | 10 | 0.000827s | 0.000807s | 0.000807s | byte equality observed |
| convert_to_test.test | 10 | 0.000842s | 0.000817s | 0.000834s | byte equality observed |
| cross_test.test | 10 | 0.000829s | 0.000840s | 0.000794s | byte equality observed |
| deduce_scalar_mq_test.test | 10 | 0.000832s | 0.000825s | 0.000821s | byte equality observed |
| deduce_scalar_mv_test.test | 10 | 0.000822s | 0.000805s | 0.000823s | byte equality observed |
| del_col_test.test | 10 | 0.000819s | 0.000823s | 0.000818s | byte equality observed |
| del_row_col_test.test | 10 | 0.000817s | 0.000822s | 0.000802s | byte equality observed |
| del_row_test.test | 10 | 0.000808s | 0.000807s | 0.000804s | byte equality observed |
| determinant_test.test | 10 | 0.000814s | 0.000821s | 0.000832s | byte equality observed |
| diag_mat_test.test | 5 | 0.000821s | 0.000814s | 0.000803s | byte equality observed |
| diag_test.test | 10 | 0.000815s | 0.000812s | 0.000814s | byte equality observed |
| div_eq_ms_test.test | 10 | 0.000805s | 0.000816s | 0.000832s | byte equality observed |
| div_eq_qs_test.test | 10 | 0.000823s | 0.000820s | 0.000821s | byte equality observed |
| div_eq_vs_test.test | 10 | 0.000816s | 0.000829s | 0.000794s | byte equality observed |
| div_ms_test.test | 10 | 0.000805s | 0.000834s | 0.000811s | byte equality observed |
| div_qs_test.test | 10 | 0.000808s | 0.000829s | 0.000803s | byte equality observed |
| div_vs_test.test | 10 | 0.000816s | 0.000787s | 0.000810s | byte equality observed |
| dot_qq_test.test | 10 | 0.000799s | 0.000797s | 0.000805s | byte equality observed |
| dot_vv_test.test | 10 | 0.000819s | 0.000808s | 0.000819s | byte equality observed |
| eq_mm_test.test | 10 | 0.000795s | 0.000804s | 0.000804s | byte equality observed |
| eq_qq_test.test | 10 | 0.000823s | 0.000796s | 0.000812s | byte equality observed |
| eq_vv_test.test | 10 | 0.000822s | 0.000808s | 0.000788s | byte equality observed |
| identity_mat_test.test | 10 | 0.000821s | 0.000794s | 0.000805s | byte equality observed |
| identity_quat_test.test | 10 | 0.000798s | 0.000811s | 0.000805s | byte equality observed |
| interop_test.test | 10 | 0.000365s | 0.000365s | 0.000793s | byte equality observed |
| inverse_m_test.test | 10 | 0.000865s | 0.000828s | 0.000834s | byte equality observed |
| inverse_q_test.test | 10 | 0.000841s | 0.000799s | 0.000810s | byte equality observed |
| mag_q_test.test | 10 | 0.000809s | 0.000793s | 0.000826s | byte equality observed |
| mag_sqr_q_test.test | 10 | 0.000795s | 0.000792s | 0.000832s | byte equality observed |
| mag_sqr_v_test.test | 10 | 0.000807s | 0.000800s | 0.000832s | byte equality observed |
| mag_v_test.test | 10 | 0.000793s | 0.000817s | 0.000815s | byte equality observed |
| mat_index_test.test | 10 | 0.000818s | 0.000820s | 0.000804s | byte equality observed |
| mat_traits_array_test.test | 10 | 0.000802s | 0.000807s | 0.000813s | byte equality observed |
| mat_traits_std_array_test.test | 10 | 0.000785s | 0.000767s | 0.000814s | byte equality observed |
| math_test.test | 10 | 0.001206s | 0.001165s | 0.001036s | byte equality observed |
| minus_eq_mm_test.test | 10 | 0.000796s | 0.000792s | 0.000817s | byte equality observed |
| minus_eq_qq_test.test | 10 | 0.000819s | 0.000804s | 0.000820s | byte equality observed |
| minus_eq_vv_test.test | 10 | 0.000812s | 0.000815s | 0.000817s | byte equality observed |
| minus_m_test.test | 10 | 0.000809s | 0.000829s | 0.000826s | byte equality observed |
| minus_mm_test.test | 10 | 0.000793s | 0.000849s | 0.000813s | byte equality observed |
| minus_q_test.test | 10 | 0.000796s | 0.000807s | 0.000811s | byte equality observed |
| minus_qq_test.test | 10 | 0.000804s | 0.000820s | 0.000807s | byte equality observed |
| minus_v_test.test | 10 | 0.000790s | 0.000801s | 0.000809s | byte equality observed |
| minus_vv_test.test | 10 | 0.000819s | 0.000775s | 0.000832s | byte equality observed |
| mul_eq_mm_test.test | 10 | 0.000806s | 0.000800s | 0.000802s | byte equality observed |
| mul_eq_ms_test.test | 10 | 0.000807s | 0.000792s | 0.000801s | byte equality observed |
| mul_eq_qq_test.test | 10 | 0.000840s | 0.000822s | 0.000805s | byte equality observed |
| mul_eq_qs_test.test | 10 | 0.000825s | 0.000793s | 0.000817s | byte equality observed |
| mul_eq_vs_test.test | 10 | 0.000826s | 0.000805s | 0.000813s | byte equality observed |
| mul_mm_test.test | 10 | 0.000819s | 0.000827s | 0.000795s | byte equality observed |
| mul_ms_test.test | 10 | 0.000812s | 0.000785s | 0.000811s | byte equality observed |
| mul_mv_test.test | 10 | 0.000802s | 0.000812s | 0.000778s | byte equality observed |
| mul_qq_test.test | 10 | 0.000828s | 0.000819s | 0.000827s | byte equality observed |
| mul_qs_test.test | 10 | 0.000800s | 0.000818s | 0.000806s | byte equality observed |
| mul_qv_test.test | 10 | 0.000823s | 0.000813s | 0.000827s | byte equality observed |
| mul_sm_test.test | 10 | 0.000795s | 0.000823s | 0.000813s | byte equality observed |
| mul_sv_test.test | 10 | 0.000790s | 0.000807s | 0.000798s | byte equality observed |
| mul_vm_test.test | 10 | 0.000821s | 0.000801s | 0.000812s | byte equality observed |
| mul_vs_test.test | 10 | 0.000806s | 0.000792s | 0.000827s | byte equality observed |
| neg_col_test.test | 10 | 0.000817s | 0.000797s | 0.000807s | byte equality observed |
| neg_row_test.test | 10 | 0.000811s | 0.000811s | 0.000825s | byte equality observed |
| normalize_q_test.test | 10 | 0.000824s | 0.000843s | 0.000818s | byte equality observed |
| normalize_v_test.test | 10 | 0.000829s | 0.000836s | 0.000822s | byte equality observed |
| plus_eq_mm_test.test | 10 | 0.000821s | 0.000807s | 0.000801s | byte equality observed |
| plus_eq_qq_test.test | 10 | 0.000802s | 0.000801s | 0.000817s | byte equality observed |
| plus_eq_vv_test.test | 10 | 0.000780s | 0.000825s | 0.000807s | byte equality observed |
| plus_mm_test.test | 10 | 0.000815s | 0.000796s | 0.000790s | byte equality observed |
| plus_qq_test.test | 10 | 0.000809s | 0.000796s | 0.000805s | byte equality observed |
| plus_vv_test.test | 10 | 0.000821s | 0.000789s | 0.000799s | byte equality observed |
| projection_test.test | 10 | 0.000831s | 0.000825s | 0.000813s | byte equality observed |
| quat_traits_array_test.test | 10 | 0.000826s | 0.000787s | 0.000806s | byte equality observed |
| quat_traits_std_array_test.test | 10 | 0.000799s | 0.000774s | 0.000815s | byte equality observed |
| rot_mat_test.test | 1 | 0.020053s | 0.022356s | 0.026798s | byte equality observed |
| rot_quat_test.test | 10 | 0.000748s | 0.000728s | 0.000762s | byte equality observed |
| rotx_mat_test.test | 10 | 0.000772s | 0.000754s | 0.000721s | byte equality observed |
| rotx_quat_test.test | 10 | 0.000833s | 0.000788s | 0.000783s | byte equality observed |
| roty_mat_test.test | 10 | 0.000846s | 0.000820s | 0.000841s | byte equality observed |
| roty_quat_test.test | 10 | 0.000846s | 0.000840s | 0.000856s | byte equality observed |
| rotz_mat_test.test | 10 | 0.000826s | 0.000845s | 0.000852s | byte equality observed |
| rotz_quat_test.test | 10 | 0.000823s | 0.000827s | 0.000850s | byte equality observed |
| row_mat_test.test | 10 | 0.000785s | 0.000841s | 0.000799s | byte equality observed |
| row_test.test | 10 | 0.000805s | 0.000811s | 0.000805s | byte equality observed |
| scalar_cast_m_test.test | 10 | 0.000839s | 0.000817s | 0.000814s | byte equality observed |
| scalar_cast_q_test.test | 10 | 0.000820s | 0.000837s | 0.000809s | byte equality observed |
| scalar_cast_v_test.test | 10 | 0.000793s | 0.000800s | 0.000755s | byte equality observed |
| slerp_test.test | 2 | 0.011049s | 0.009309s | 0.009886s | byte equality observed |
| swap_cols_test.test | 10 | 0.000752s | 0.000755s | 0.000736s | byte equality observed |
| swap_rows_test.test | 10 | 0.000750s | 0.000754s | 0.000776s | byte equality observed |
| swizzle2_test.test | 10 | 0.000819s | 0.000783s | 0.000824s | byte equality observed |
| swizzle2_test2.test | 10 | 0.000841s | 0.000816s | 0.000799s | byte equality observed |
| swizzle2_test3.test | 10 | 0.000823s | 0.000822s | 0.000813s | byte equality observed |
| swizzle2_test4.test | 10 | 0.000801s | 0.000793s | 0.000825s | byte equality observed |
| swizzle3_test.test | 10 | 0.000803s | 0.000791s | 0.000851s | byte equality observed |
| swizzle3_test2.test | 10 | 0.000809s | 0.000841s | 0.000829s | byte equality observed |
| swizzle3_test3.test | 10 | 0.000813s | 0.000806s | 0.000790s | byte equality observed |
| swizzle3_test4.test | 10 | 0.000801s | 0.000800s | 0.000795s | byte equality observed |
| swizzle4_test.test | 10 | 0.000799s | 0.000790s | 0.000829s | byte equality observed |
| swizzle4_test2.test | 10 | 0.000807s | 0.000795s | 0.000802s | byte equality observed |
| swizzle4_test3.test | 10 | 0.000814s | 0.000800s | 0.000809s | byte equality observed |
| swizzle4_test4.test | 10 | 0.000814s | 0.000796s | 0.000817s | byte equality observed |
| to_string_test.test | 10 | 0.000841s | 0.000839s | 0.000868s | byte equality observed |
| transform_test.test | 10 | 0.000814s | 0.000806s | 0.000854s | byte equality observed |
| translation_mat_test.test | 10 | 0.000806s | 0.000811s | 0.000811s | byte equality observed |
| translation_test.test | 10 | 0.000831s | 0.000816s | 0.000789s | byte equality observed |
| transpose_test.test | 10 | 0.000812s | 0.000827s | 0.000834s | byte equality observed |
| vec_index_test.test | 10 | 0.000817s | 0.000851s | 0.000789s | byte equality observed |
| vec_register_test.test | 10 | 0.000821s | 0.000833s | 0.000824s | byte equality observed |
| vec_traits_array_test.test | 10 | 0.000832s | 0.000770s | 0.000806s | byte equality observed |
| vec_traits_gnuc_test.test | 10 | 0.000838s | 0.000798s | 0.000822s | byte equality observed |
| vec_traits_std_array_test.test | 10 | 0.000832s | 0.000799s | 0.000789s | byte equality observed |
| zero_mat_test.test | 10 | 0.000813s | 0.000808s | 0.000824s | byte equality observed |
| zero_quat_test.test | 10 | 0.000793s | 0.000811s | 0.000799s | byte equality observed |
| zero_vec_test.test | 10 | 0.000819s | 0.000817s | 0.000782s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44362912212).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
