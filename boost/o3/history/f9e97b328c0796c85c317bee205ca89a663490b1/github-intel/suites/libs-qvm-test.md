# libs/qvm/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| math_test.test | RUN | 0.251730 | 0.729066 | 0.754605 | 0.001953 | 0.001939 | 0.001704 |
| mat_traits_array_test.test | RUN | 0.199825 | 0.735266 | 0.589611 | 0.001495 | 0.001264 | 0.001302 |
| mat_traits_std_array_test.test | RUN | 0.196056 | 0.564860 | 0.596104 | 0.001413 | 0.001398 | 0.001404 |
| vec_traits_array_test.test | RUN | 0.170836 | 0.569163 | 0.508733 | 0.001236 | 0.001399 | 0.001313 |
| vec_traits_gnuc_test.test | RUN | 0.315758 | 0.679936 | 0.952960 | 0.001431 | 0.001465 | 0.001283 |
| vec_traits_std_array_test.test | RUN | 0.167818 | 0.431200 | 0.501875 | 0.001353 | 0.001610 | 0.001348 |
| quat_traits_array_test.test | RUN | 0.166016 | 0.592387 | 0.487302 | 0.001310 | 0.001434 | 0.001299 |
| quat_traits_std_array_test.test | RUN | 0.163716 | 0.440888 | 0.488000 | 0.001325 | 0.001553 | 0.001343 |
| access_m_test.test | RUN | 0.275068 | 1.052118 | 1.148165 | 0.001420 | 0.001417 | 0.001382 |
| access_m_fail1.test | COMPILE_FAIL | 0.028595 | 0.043207 | 0.070003 | — | — | — |
| access_m_fail2.test | COMPILE_FAIL | 0.028038 | 0.042334 | 0.067865 | — | — | — |
| access_q_test.test | RUN | 0.230502 | 0.538030 | 0.668229 | 0.001372 | 0.001644 | 0.001454 |
| access_q_fail.test | COMPILE_FAIL | 0.019669 | 0.034324 | 0.057282 | — | — | — |
| access_v_test.test | RUN | 0.230540 | 0.548881 | 0.667144 | 0.001250 | 0.001528 | 0.001283 |
| access_v_fail1.test | COMPILE_FAIL | 0.017563 | 0.031278 | 0.053167 | — | — | — |
| access_v_fail2.test | COMPILE_FAIL | 0.018329 | 0.031510 | 0.052341 | — | — | — |
| assign_test.test | RUN | 0.350863 | 0.902060 | 1.185920 | 0.001363 | 0.001549 | 0.001389 |
| to_string_test.test | RUN | 0.419139 | 1.492726 | 7.213202 | 0.001408 | 0.001574 | 0.001420 |
| cmp_vv_test.test | RUN | 0.286302 | 0.714902 | 0.805666 | 0.001432 | 0.001336 | 0.001397 |
| cross_test.test | RUN | 0.272495 | 0.655288 | 0.789282 | 0.001368 | 0.001516 | 0.001340 |
| div_eq_vs_test.test | RUN | 0.256343 | 0.605022 | 0.794705 | 0.001407 | 0.001313 | 0.001346 |
| div_vs_test.test | RUN | 0.263848 | 0.744450 | 0.832651 | 0.001252 | 0.001468 | 0.001377 |
| dot_vv_test.test | RUN | 0.251134 | 0.685076 | 0.786435 | 0.001323 | 0.001553 | 0.001378 |
| eq_vv_test.test | RUN | 0.290065 | 0.763062 | 0.874702 | 0.001344 | 0.001569 | 0.001379 |
| mag_v_test.test | RUN | 0.268425 | 0.620049 | 0.723269 | 0.001446 | 0.001493 | 0.001210 |
| mag_sqr_v_test.test | RUN | 0.268208 | 0.618995 | 0.748249 | 0.001405 | 0.001664 | 0.001328 |
| minus_v_test.test | RUN | 0.272521 | 0.724688 | 0.824010 | 0.001334 | 0.001455 | 0.001337 |
| minus_eq_vv_test.test | RUN | 0.272128 | 0.702814 | 0.809320 | 0.001303 | 0.001492 | 0.001266 |
| minus_vv_test.test | RUN | 0.279834 | 0.758000 | 0.818950 | 0.001445 | 0.001466 | 0.001371 |
| mul_eq_vs_test.test | RUN | 0.263841 | 0.617356 | 0.801747 | 0.001470 | 0.001505 | 0.001424 |
| mul_vs_test.test | RUN | 0.282241 | 0.756778 | 0.853355 | 0.001314 | 0.001530 | 0.001358 |
| mul_sv_test.test | RUN | 0.284654 | 0.764656 | 0.818841 | 0.001341 | 0.001460 | 0.001347 |
| mul_vm_test.test | RUN | 0.380834 | 1.359174 | 1.316278 | 0.001534 | 0.001440 | 0.001400 |
| normalize_v_test.test | RUN | 0.285807 | 0.933789 | 0.802267 | 0.001484 | 0.001460 | 0.001352 |
| plus_eq_vv_test.test | RUN | 0.262823 | 0.716149 | 0.798344 | 0.001533 | 0.001508 | 0.001416 |
| plus_vv_test.test | RUN | 0.275623 | 0.752183 | 0.796081 | 0.001256 | 0.001481 | 0.001363 |
| scalar_cast_v_test.test | RUN | 0.248310 | 0.560972 | 0.712871 | 0.001157 | 0.001503 | 0.001257 |
| vec_index_test.test | RUN | 0.214259 | 0.582644 | 0.651020 | 0.001316 | 0.001447 | 0.001323 |
| vec_register_test.test | RUN | 0.143532 | 0.515427 | 0.487655 | 0.001511 | 0.001576 | 0.001364 |
| cmp_mm_test.test | RUN | 0.441421 | 1.691623 | 1.737232 | 0.001514 | 0.001398 | 0.001304 |
| determinant_test.test | RUN | 0.308382 | 0.857473 | 0.917956 | 0.001468 | 0.001477 | 0.001414 |
| div_eq_ms_test.test | RUN | 0.312377 | 0.792496 | 1.055384 | 0.001364 | 0.001401 | 0.001401 |
| div_ms_test.test | RUN | 0.370167 | 1.269359 | 1.259527 | 0.001233 | 0.001540 | 0.001369 |
| eq_mm_test.test | RUN | 0.425124 | 1.563156 | 1.643683 | 0.001560 | 0.001432 | 0.001339 |
| minus_m_test.test | RUN | 0.354471 | 1.244481 | 1.231632 | 0.001406 | 0.001446 | 0.001270 |
| minus_eq_mm_test.test | RUN | 0.339581 | 1.145301 | 1.147278 | 0.001247 | 0.001501 | 0.001324 |
| minus_mm_test.test | RUN | 0.379149 | 1.457364 | 1.363747 | 0.001326 | 0.001590 | 0.001382 |
| mul_eq_mm_test.test | RUN | 0.319621 | 1.079387 | 1.045648 | 0.001451 | 0.001473 | 0.001292 |
| mul_eq_ms_test.test | RUN | 0.313170 | 0.774098 | 1.066230 | 0.001366 | 0.001526 | 0.001195 |
| mul_mm_test.test | RUN | 0.452945 | 2.407662 | 1.748815 | 0.001446 | 0.001553 | 0.001350 |
| mul_ms_test.test | RUN | 0.362850 | 1.260633 | 1.346622 | 0.001350 | 0.001453 | 0.001286 |
| mul_sm_test.test | RUN | 0.367977 | 1.257030 | 1.333956 | 0.001416 | 0.001528 | 0.001244 |
| mul_mv_test.test | RUN | 0.383306 | 1.356665 | 1.339784 | 0.001366 | 0.001557 | 0.001329 |
| inverse_m_test.test | RUN | 0.516436 | 2.497587 | 1.897983 | 0.001521 | 0.001513 | 0.001508 |
| plus_eq_mm_test.test | RUN | 0.346048 | 1.155310 | 1.191209 | 0.001421 | 0.001386 | 0.001400 |
| plus_mm_test.test | RUN | 0.385851 | 1.474588 | 1.369285 | 0.001476 | 0.001476 | 0.001365 |
| scalar_cast_m_test.test | RUN | 0.290721 | 0.660736 | 0.853647 | 0.001344 | 0.001437 | 0.001370 |
| mat_index_test.test | RUN | 0.225987 | 0.631311 | 0.736429 | 0.001462 | 0.001642 | 0.001473 |
| cmp_qq_test.test | RUN | 0.248798 | 0.593518 | 0.695616 | 0.001360 | 0.001330 | 0.001353 |
| conjugate_test.test | RUN | 0.250000 | 0.588928 | 0.719206 | 0.001494 | 0.001577 | 0.001380 |
| normalize_q_test.test | RUN | 0.258568 | 0.660855 | 0.757061 | 0.001418 | 0.001420 | 0.001338 |
| div_eq_qs_test.test | RUN | 0.255166 | 0.568947 | 0.714086 | 0.001311 | 0.001583 | 0.001317 |
| div_qs_test.test | RUN | 0.259435 | 0.592173 | 0.726991 | 0.001333 | 0.001496 | 0.001387 |
| dot_qq_test.test | RUN | 0.257689 | 0.582354 | 0.742187 | 0.001447 | 0.001554 | 0.001416 |
| eq_qq_test.test | RUN | 0.259904 | 0.611475 | 0.746155 | 0.001333 | 0.001450 | 0.001331 |
| inverse_q_test.test | RUN | 0.310656 | 0.803424 | 0.934033 | 0.001328 | 0.001471 | 0.001386 |
| mag_q_test.test | RUN | 0.252049 | 0.587524 | 0.741585 | 0.001343 | 0.001550 | 0.001295 |
| mag_sqr_q_test.test | RUN | 0.248998 | 0.588801 | 0.734351 | 0.001454 | 0.001473 | 0.001448 |
| minus_q_test.test | RUN | 0.251872 | 0.602026 | 0.739777 | 0.001363 | 0.001441 | 0.001364 |
| minus_eq_qq_test.test | RUN | 0.252807 | 0.593319 | 0.727934 | 0.001260 | 0.001551 | 0.001361 |
| minus_qq_test.test | RUN | 0.257969 | 0.617646 | 0.742506 | 0.001361 | 0.001479 | 0.001319 |
| mul_eq_qs_test.test | RUN | 0.244410 | 0.567505 | 0.709548 | 0.001286 | 0.001544 | 0.001340 |
| mul_qs_test.test | RUN | 0.256673 | 0.616466 | 0.732232 | 0.001267 | 0.001484 | 0.001294 |
| mul_qv_test.test | RUN | 0.317908 | 0.822157 | 0.942014 | 0.001229 | 0.001560 | 0.001349 |
| mul_qq_test.test | RUN | 0.307143 | 0.847253 | 0.901477 | 0.001670 | 0.001541 | 0.001365 |
| mul_eq_qq_test.test | RUN | 0.299062 | 0.862303 | 0.895838 | 0.001329 | 0.001492 | 0.001370 |
| plus_eq_qq_test.test | RUN | 0.247236 | 0.603760 | 0.710952 | 0.001345 | 0.001466 | 0.001354 |
| plus_qq_test.test | RUN | 0.245201 | 0.617230 | 0.723341 | 0.001315 | 0.001538 | 0.001399 |
| scalar_cast_q_test.test | RUN | 0.247513 | 0.573121 | 0.704983 | 0.001319 | 0.001396 | 0.001385 |
| slerp_test.test | RUN | 0.280469 | 1.174086 | 0.869591 | 0.019595 | 0.017523 | 0.018608 |
| convert_to_test.test | RUN | 0.365475 | 1.072634 | 1.365643 | 0.001396 | 0.001346 | 0.001506 |
| rot_mat_test.test | RUN | 0.595392 | 4.965649 | 4.323630 | 0.039332 | 0.042752 | 0.045366 |
| rot_quat_test.test | RUN | 0.303298 | 0.996020 | 0.955406 | 0.001429 | 0.001466 | 0.001330 |
| rotx_mat_test.test | RUN | 0.357754 | 1.282665 | 1.261001 | 0.001346 | 0.001474 | 0.001336 |
| rotx_quat_test.test | RUN | 0.299666 | 0.831487 | 0.906651 | 0.001247 | 0.001554 | 0.001327 |
| roty_mat_test.test | RUN | 0.351856 | 1.288072 | 1.266143 | 0.001413 | 0.001595 | 0.001343 |
| roty_quat_test.test | RUN | 0.310297 | 0.829673 | 0.822081 | 0.001443 | 0.001458 | 0.001368 |
| rotz_mat_test.test | RUN | 0.381299 | 1.452980 | 1.312631 | 0.001442 | 0.001569 | 0.001358 |
| rotz_quat_test.test | RUN | 0.304699 | 0.825159 | 0.889506 | 0.001399 | 0.001502 | 0.001325 |
| zero_vec_test.test | RUN | 0.259005 | 0.716420 | 0.728726 | 0.001336 | 0.001418 | 0.001336 |
| zero_mat_test.test | RUN | 0.322450 | 1.164714 | 1.089664 | 0.001155 | 0.001354 | 0.001382 |
| zero_quat_test.test | RUN | 0.247030 | 0.590296 | 0.733990 | 0.001507 | 0.001492 | 0.001305 |
| identity_mat_test.test | RUN | 0.300201 | 0.852018 | 0.902139 | 0.001214 | 0.001342 | 0.001304 |
| identity_quat_test.test | RUN | 0.249350 | 0.564688 | 0.700909 | 0.001243 | 0.001474 | 0.001375 |
| col_test.test | RUN | 0.478222 | 1.823508 | 2.040532 | 0.001355 | 0.001389 | 0.001328 |
| col_mat_test.test | RUN | 0.310981 | 0.816147 | 0.970680 | 0.001475 | 0.001525 | 0.001389 |
| neg_col_test.test | RUN | 0.361663 | 1.145466 | 1.255506 | 0.001202 | 0.001567 | 0.001302 |
| neg_row_test.test | RUN | 0.369723 | 1.172171 | 1.233088 | 0.001227 | 0.001378 | 0.001406 |
| del_col_test.test | RUN | 0.393911 | 1.285147 | 1.304371 | 0.001449 | 0.001469 | 0.001398 |
| del_row_test.test | RUN | 0.392729 | 1.265910 | 1.294593 | 0.001257 | 0.001466 | 0.001340 |
| del_row_col_test.test | RUN | 0.547689 | 2.395489 | 2.445888 | 0.001382 | 0.001557 | 0.001399 |
| swap_cols_test.test | RUN | 0.738543 | 3.276954 | 2.972609 | 0.001476 | 0.001453 | 0.001385 |
| swap_rows_test.test | RUN | 0.818224 | 3.404672 | 2.977739 | 0.001361 | 0.001309 | 0.001438 |
| diag_test.test | RUN | 0.333489 | 0.866559 | 1.119683 | 0.001386 | 0.001437 | 0.001415 |
| diag_mat_test.test | RUN | 0.331520 | 0.852369 | 0.971076 | 0.001350 | 0.001425 | 0.001478 |
| row_test.test | RUN | 0.490576 | 1.831550 | 2.074543 | 0.001318 | 0.001519 | 0.001471 |
| row_mat_test.test | RUN | 0.318874 | 0.804059 | 0.960973 | 0.001293 | 0.001508 | 0.001346 |
| transpose_test.test | RUN | 0.373791 | 1.227767 | 1.327957 | 0.001284 | 0.001410 | 0.001240 |
| translation_test.test | RUN | 0.304776 | 0.775382 | 0.976670 | 0.001303 | 0.001662 | 0.001474 |
| translation_mat_test.test | RUN | 0.330364 | 0.793972 | 1.061482 | 0.001288 | 0.001401 | 0.001282 |
| swizzle_const_fail.test | COMPILE_FAIL | 0.104615 | 0.225221 | 0.275040 | — | — | — |
| swizzle2_test2.test | RUN | 0.129938 | 0.332380 | 0.393288 | 0.001367 | 0.001391 | 0.001239 |
| swizzle2_test3.test | RUN | 0.126862 | 0.339732 | 0.394833 | 0.001313 | 0.001414 | 0.001320 |
| swizzle2_test4.test | RUN | 0.133752 | 0.336968 | 0.397546 | 0.001282 | 0.001488 | 0.001349 |
| swizzle2_test.test | RUN | 0.431748 | 0.925297 | 1.254075 | 0.001307 | 0.001459 | 0.001434 |
| swizzle3_test2.test | RUN | 0.151353 | 0.358667 | 0.444662 | 0.001325 | 0.001603 | 0.001283 |
| swizzle3_test3.test | RUN | 0.152589 | 0.370174 | 0.439371 | 0.001374 | 0.001377 | 0.001331 |
| swizzle3_test4.test | RUN | 0.149130 | 0.352373 | 0.443640 | 0.001273 | 0.001431 | 0.001285 |
| swizzle3_test.test | RUN | 0.420310 | 0.949113 | 1.271444 | 0.001328 | 0.001371 | 0.001503 |
| swizzle4_test2.test | RUN | 0.254058 | 0.515548 | 0.720886 | 0.001455 | 0.001577 | 0.001382 |
| swizzle4_test3.test | RUN | 0.250095 | 0.533757 | 0.703715 | 0.001344 | 0.001658 | 0.001496 |
| swizzle4_test4.test | RUN | 0.252321 | 0.524236 | 0.693879 | 0.001325 | 0.001401 | 0.001419 |
| swizzle4_test.test | RUN | 0.432143 | 1.026380 | 1.294541 | 0.001306 | 0.001494 | 0.001370 |
| deduce_scalar_test.test | COMPILE | 0.020760 | 0.047802 | 0.070299 | — | — | — |
| deduce_scalar_mq_test.test | RUN | 0.162464 | 0.396251 | 0.472146 | 0.001378 | 0.001528 | 0.001342 |
| deduce_scalar_mv_test.test | RUN | 0.196908 | 0.449175 | 0.568073 | 0.001346 | 0.001508 | 0.001404 |
| deduce_scalar_fail.test | COMPILE_FAIL | 0.016679 | 0.031474 | 0.052240 | — | — | — |
| deduce_mat_test.test | COMPILE | 0.017360 | 0.043659 | 0.057074 | — | — | — |
| deduce_quat_test.test | COMPILE | 0.017766 | 0.042623 | 0.056179 | — | — | — |
| deduce_vec_test.test | COMPILE | 0.018532 | 0.042144 | 0.059838 | — | — | — |
| interop_test.test | RUN | 0.201356 | 0.545077 | 0.816716 | 0.000607 | 0.000468 | 0.001456 |
| transform_test.test | RUN | 0.347458 | 0.814995 | 1.017896 | 0.000989 | 0.001118 | 0.001026 |
| projection_test.test | RUN | 0.257693 | 0.635477 | 0.753915 | 0.001012 | 0.001046 | 0.001036 |
| scalar_traits_test.test | COMPILE | 0.019203 | 0.042501 | 0.061138 | — | — | — |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 1.000× | 1.019×, 0.981× | 1.006× |
| clang | 1.023× | 1.024×, 1.022× | 1.000× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1360 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43654890423).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| access_m_test.test | 10 | 0.000971s | 0.000984s | 0.000969s | byte equality observed |
| access_q_test.test | 10 | 0.000962s | 0.000988s | 0.000976s | byte equality observed |
| access_v_test.test | 10 | 0.000976s | 0.000975s | 0.000995s | byte equality observed |
| assign_test.test | 10 | 0.000975s | 0.001012s | 0.000962s | byte equality observed |
| cmp_mm_test.test | 10 | 0.001011s | 0.001030s | 0.000972s | byte equality observed |
| cmp_qq_test.test | 10 | 0.000952s | 0.000978s | 0.000925s | byte equality observed |
| cmp_vv_test.test | 10 | 0.000954s | 0.001009s | 0.000956s | byte equality observed |
| col_mat_test.test | 10 | 0.000955s | 0.000965s | 0.000968s | byte equality observed |
| col_test.test | 10 | 0.001003s | 0.000966s | 0.000979s | byte equality observed |
| conjugate_test.test | 10 | 0.000980s | 0.001005s | 0.001014s | byte equality observed |
| convert_to_test.test | 10 | 0.000965s | 0.001017s | 0.001006s | byte equality observed |
| cross_test.test | 10 | 0.000984s | 0.000966s | 0.001013s | byte equality observed |
| deduce_scalar_mq_test.test | 10 | 0.001009s | 0.001024s | 0.000986s | byte equality observed |
| deduce_scalar_mv_test.test | 10 | 0.001000s | 0.000970s | 0.000993s | byte equality observed |
| del_col_test.test | 10 | 0.000982s | 0.000960s | 0.000975s | byte equality observed |
| del_row_col_test.test | 10 | 0.000978s | 0.001029s | 0.000972s | byte equality observed |
| del_row_test.test | 10 | 0.000991s | 0.001017s | 0.000983s | byte equality observed |
| determinant_test.test | 10 | 0.000981s | 0.001011s | 0.001022s | byte equality observed |
| diag_mat_test.test | 10 | 0.000989s | 0.001023s | 0.000992s | byte equality observed |
| diag_test.test | 10 | 0.000958s | 0.001023s | 0.000975s | byte equality observed |
| div_eq_ms_test.test | 10 | 0.000952s | 0.001007s | 0.000990s | byte equality observed |
| div_eq_qs_test.test | 10 | 0.000964s | 0.000979s | 0.000979s | byte equality observed |
| div_eq_vs_test.test | 10 | 0.000980s | 0.000983s | 0.000996s | byte equality observed |
| div_ms_test.test | 10 | 0.000998s | 0.000948s | 0.001009s | byte equality observed |
| div_qs_test.test | 10 | 0.000974s | 0.000957s | 0.000966s | byte equality observed |
| div_vs_test.test | 10 | 0.000998s | 0.000995s | 0.000953s | byte equality observed |
| dot_qq_test.test | 10 | 0.000994s | 0.001035s | 0.001006s | byte equality observed |
| dot_vv_test.test | 10 | 0.001027s | 0.000984s | 0.000984s | byte equality observed |
| eq_mm_test.test | 10 | 0.000998s | 0.001006s | 0.001017s | byte equality observed |
| eq_qq_test.test | 10 | 0.000978s | 0.001006s | 0.000992s | byte equality observed |
| eq_vv_test.test | 10 | 0.000977s | 0.001016s | 0.001013s | byte equality observed |
| identity_mat_test.test | 10 | 0.000997s | 0.001014s | 0.000973s | byte equality observed |
| identity_quat_test.test | 10 | 0.000995s | 0.001003s | 0.000979s | byte equality observed |
| interop_test.test | 10 | 0.000431s | 0.000430s | 0.000906s | byte equality observed |
| inverse_m_test.test | 10 | 0.001063s | 0.001060s | 0.001045s | byte equality observed |
| inverse_q_test.test | 10 | 0.001001s | 0.000992s | 0.000959s | byte equality observed |
| mag_q_test.test | 10 | 0.000998s | 0.000984s | 0.000983s | byte equality observed |
| mag_sqr_q_test.test | 10 | 0.000974s | 0.000986s | 0.000986s | byte equality observed |
| mag_sqr_v_test.test | 10 | 0.000963s | 0.000967s | 0.000973s | byte equality observed |
| mag_v_test.test | 10 | 0.001025s | 0.000976s | 0.000971s | byte equality observed |
| mat_index_test.test | 10 | 0.000975s | 0.000999s | 0.001008s | byte equality observed |
| mat_traits_array_test.test | 10 | 0.000951s | 0.000996s | 0.000947s | byte equality observed |
| mat_traits_std_array_test.test | 10 | 0.000967s | 0.000981s | 0.000967s | byte equality observed |
| math_test.test | 10 | 0.001477s | 0.001434s | 0.001306s | byte equality observed |
| minus_eq_mm_test.test | 10 | 0.000972s | 0.000991s | 0.000992s | byte equality observed |
| minus_eq_qq_test.test | 10 | 0.000980s | 0.000977s | 0.000988s | byte equality observed |
| minus_eq_vv_test.test | 10 | 0.001011s | 0.000991s | 0.001005s | byte equality observed |
| minus_m_test.test | 10 | 0.000964s | 0.000994s | 0.000991s | byte equality observed |
| minus_mm_test.test | 10 | 0.000999s | 0.000978s | 0.000969s | byte equality observed |
| minus_q_test.test | 10 | 0.000984s | 0.000981s | 0.000984s | byte equality observed |
| minus_qq_test.test | 10 | 0.000978s | 0.000976s | 0.000953s | byte equality observed |
| minus_v_test.test | 10 | 0.000960s | 0.000995s | 0.000979s | byte equality observed |
| minus_vv_test.test | 10 | 0.000969s | 0.000973s | 0.001017s | byte equality observed |
| mul_eq_mm_test.test | 10 | 0.000960s | 0.000976s | 0.000989s | byte equality observed |
| mul_eq_ms_test.test | 10 | 0.000975s | 0.001017s | 0.000961s | byte equality observed |
| mul_eq_qq_test.test | 10 | 0.000978s | 0.001026s | 0.000972s | byte equality observed |
| mul_eq_qs_test.test | 10 | 0.000979s | 0.001044s | 0.000953s | byte equality observed |
| mul_eq_vs_test.test | 10 | 0.001007s | 0.000996s | 0.000925s | byte equality observed |
| mul_mm_test.test | 10 | 0.000964s | 0.000977s | 0.000977s | byte equality observed |
| mul_ms_test.test | 10 | 0.000984s | 0.000968s | 0.000976s | byte equality observed |
| mul_mv_test.test | 10 | 0.000988s | 0.000991s | 0.000972s | byte equality observed |
| mul_qq_test.test | 10 | 0.000991s | 0.001007s | 0.001018s | byte equality observed |
| mul_qs_test.test | 10 | 0.000957s | 0.001009s | 0.000949s | byte equality observed |
| mul_qv_test.test | 10 | 0.000982s | 0.001001s | 0.000998s | byte equality observed |
| mul_sm_test.test | 10 | 0.000995s | 0.000995s | 0.000939s | byte equality observed |
| mul_sv_test.test | 10 | 0.000964s | 0.000998s | 0.000962s | byte equality observed |
| mul_vm_test.test | 10 | 0.000958s | 0.001025s | 0.000936s | byte equality observed |
| mul_vs_test.test | 10 | 0.000974s | 0.001045s | 0.000937s | byte equality observed |
| neg_col_test.test | 10 | 0.000981s | 0.000962s | 0.001002s | byte equality observed |
| neg_row_test.test | 10 | 0.000990s | 0.000995s | 0.000954s | byte equality observed |
| normalize_q_test.test | 10 | 0.000988s | 0.001003s | 0.000959s | byte equality observed |
| normalize_v_test.test | 10 | 0.000978s | 0.000979s | 0.000946s | byte equality observed |
| plus_eq_mm_test.test | 10 | 0.001001s | 0.001007s | 0.000950s | byte equality observed |
| plus_eq_qq_test.test | 10 | 0.000970s | 0.000989s | 0.000950s | byte equality observed |
| plus_eq_vv_test.test | 10 | 0.000988s | 0.000975s | 0.000950s | byte equality observed |
| plus_mm_test.test | 10 | 0.000966s | 0.000947s | 0.000958s | byte equality observed |
| plus_qq_test.test | 10 | 0.000973s | 0.000980s | 0.000973s | byte equality observed |
| plus_vv_test.test | 10 | 0.000985s | 0.000944s | 0.000969s | byte equality observed |
| projection_test.test | 10 | 0.000964s | 0.000969s | 0.000966s | byte equality observed |
| quat_traits_array_test.test | 10 | 0.000957s | 0.000969s | 0.000972s | byte equality observed |
| quat_traits_std_array_test.test | 10 | 0.000925s | 0.000926s | 0.000964s | byte equality observed |
| rot_mat_test.test | 1 | 0.027256s | 0.028735s | 0.032425s | byte equality observed |
| rot_quat_test.test | 10 | 0.000896s | 0.000916s | 0.000952s | byte equality observed |
| rotx_mat_test.test | 10 | 0.000928s | 0.000948s | 0.000956s | byte equality observed |
| rotx_quat_test.test | 10 | 0.000983s | 0.001021s | 0.000972s | byte equality observed |
| roty_mat_test.test | 10 | 0.000999s | 0.000997s | 0.001027s | byte equality observed |
| roty_quat_test.test | 10 | 0.001033s | 0.000991s | 0.000963s | byte equality observed |
| rotz_mat_test.test | 10 | 0.001021s | 0.000987s | 0.000998s | byte equality observed |
| rotz_quat_test.test | 10 | 0.001012s | 0.000996s | 0.000968s | byte equality observed |
| row_mat_test.test | 10 | 0.000977s | 0.000977s | 0.000990s | byte equality observed |
| row_test.test | 10 | 0.001010s | 0.000976s | 0.001001s | byte equality observed |
| scalar_cast_m_test.test | 10 | 0.000978s | 0.000995s | 0.000977s | byte equality observed |
| scalar_cast_q_test.test | 10 | 0.000988s | 0.000982s | 0.000965s | byte equality observed |
| scalar_cast_v_test.test | 10 | 0.000950s | 0.000972s | 0.000928s | byte equality observed |
| slerp_test.test | 2 | 0.014238s | 0.012230s | 0.012404s | byte equality observed |
| swap_cols_test.test | 10 | 0.000907s | 0.000929s | 0.000924s | byte equality observed |
| swap_rows_test.test | 10 | 0.000955s | 0.000965s | 0.000969s | byte equality observed |
| swizzle2_test.test | 10 | 0.000964s | 0.000959s | 0.000955s | byte equality observed |
| swizzle2_test2.test | 10 | 0.000964s | 0.000965s | 0.000970s | byte equality observed |
| swizzle2_test3.test | 10 | 0.000990s | 0.000985s | 0.001015s | byte equality observed |
| swizzle2_test4.test | 10 | 0.000981s | 0.000950s | 0.000994s | byte equality observed |
| swizzle3_test.test | 10 | 0.000989s | 0.000979s | 0.000995s | byte equality observed |
| swizzle3_test2.test | 10 | 0.000957s | 0.000987s | 0.001002s | byte equality observed |
| swizzle3_test3.test | 10 | 0.000997s | 0.000970s | 0.000980s | byte equality observed |
| swizzle3_test4.test | 10 | 0.000987s | 0.000975s | 0.000972s | byte equality observed |
| swizzle4_test.test | 10 | 0.000987s | 0.001002s | 0.000992s | byte equality observed |
| swizzle4_test2.test | 10 | 0.000960s | 0.001004s | 0.000987s | byte equality observed |
| swizzle4_test3.test | 10 | 0.000978s | 0.000984s | 0.000945s | byte equality observed |
| swizzle4_test4.test | 10 | 0.000981s | 0.000988s | 0.001005s | byte equality observed |
| to_string_test.test | 10 | 0.001010s | 0.001008s | 0.001003s | byte equality observed |
| transform_test.test | 10 | 0.000987s | 0.000961s | 0.000972s | byte equality observed |
| translation_mat_test.test | 10 | 0.000973s | 0.000984s | 0.001023s | byte equality observed |
| translation_test.test | 10 | 0.000961s | 0.000972s | 0.000997s | byte equality observed |
| transpose_test.test | 10 | 0.000965s | 0.000955s | 0.000972s | byte equality observed |
| vec_index_test.test | 10 | 0.000977s | 0.000965s | 0.000982s | byte equality observed |
| vec_register_test.test | 10 | 0.000974s | 0.000959s | 0.000980s | byte equality observed |
| vec_traits_array_test.test | 10 | 0.000947s | 0.000960s | 0.000959s | byte equality observed |
| vec_traits_gnuc_test.test | 10 | 0.000985s | 0.000969s | 0.000972s | byte equality observed |
| vec_traits_std_array_test.test | 10 | 0.000951s | 0.001005s | 0.000994s | byte equality observed |
| zero_mat_test.test | 10 | 0.000974s | 0.000988s | 0.000987s | byte equality observed |
| zero_quat_test.test | 10 | 0.000965s | 0.001019s | 0.000958s | byte equality observed |
| zero_vec_test.test | 10 | 0.000990s | 0.000985s | 0.001019s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43654890423).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
