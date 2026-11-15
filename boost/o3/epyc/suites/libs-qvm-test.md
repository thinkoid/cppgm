# libs/qvm/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| math_test.test | RUN | 0.193637 | 0.517648 | 0.505467 | 0.001975 | 0.001788 | 0.001892 |
| mat_traits_array_test.test | RUN | 0.154319 | 0.500251 | 0.397419 | 0.001470 | 0.001301 | 0.001350 |
| mat_traits_std_array_test.test | RUN | 0.151491 | 0.401140 | 0.407613 | 0.001530 | 0.001389 | 0.001094 |
| vec_traits_array_test.test | RUN | 0.136248 | 0.401986 | 0.330838 | 0.001344 | 0.001442 | 0.001028 |
| vec_traits_gnuc_test.test | RUN | 0.238963 | 0.435928 | 0.618085 | 0.001708 | 0.001455 | 0.001441 |
| vec_traits_std_array_test.test | RUN | 0.128836 | 0.280316 | 0.325089 | 0.001412 | 0.001443 | 0.001295 |
| quat_traits_array_test.test | RUN | 0.126023 | 0.374265 | 0.320758 | 0.001112 | 0.001432 | 0.001272 |
| quat_traits_std_array_test.test | RUN | 0.126017 | 0.284060 | 0.325028 | 0.001354 | 0.001348 | 0.001383 |
| access_m_test.test | RUN | 0.212482 | 0.661002 | 0.751772 | 0.001407 | 0.001628 | 0.001277 |
| access_m_fail1.test | COMPILE_FAIL | 0.020869 | 0.030779 | 0.052993 | — | — | — |
| access_m_fail2.test | COMPILE_FAIL | 0.020345 | 0.029545 | 0.051233 | — | — | — |
| access_q_test.test | RUN | 0.176736 | 0.349702 | 0.429011 | 0.001390 | 0.001438 | 0.001487 |
| access_q_fail.test | COMPILE_FAIL | 0.015990 | 0.024146 | 0.046958 | — | — | — |
| access_v_test.test | RUN | 0.177078 | 0.353899 | 0.440382 | 0.001419 | 0.001481 | 0.001428 |
| access_v_fail1.test | COMPILE_FAIL | 0.014303 | 0.021821 | 0.040614 | — | — | — |
| access_v_fail2.test | COMPILE_FAIL | 0.015105 | 0.023049 | 0.041512 | — | — | — |
| assign_test.test | RUN | 0.273381 | 0.579408 | 0.788755 | 0.001685 | 0.001740 | 0.001496 |
| to_string_test.test | RUN | 0.304732 | 0.928200 | 4.644042 | 0.001558 | 0.001360 | 0.001515 |
| cmp_vv_test.test | RUN | 0.219341 | 0.480238 | 0.535945 | 0.001512 | 0.001590 | 0.001209 |
| cross_test.test | RUN | 0.219080 | 0.453221 | 0.524586 | 0.001416 | 0.001551 | 0.001511 |
| div_eq_vs_test.test | RUN | 0.204809 | 0.400524 | 0.520113 | 0.001483 | 0.001492 | 0.001557 |
| div_vs_test.test | RUN | 0.211912 | 0.496793 | 0.550624 | 0.001434 | 0.001617 | 0.001251 |
| dot_vv_test.test | RUN | 0.204335 | 0.445459 | 0.519165 | 0.001326 | 0.001502 | 0.001362 |
| eq_vv_test.test | RUN | 0.224820 | 0.508871 | 0.556673 | 0.001274 | 0.001534 | 0.001360 |
| mag_v_test.test | RUN | 0.188425 | 0.417290 | 0.503768 | 0.001574 | 0.001601 | 0.001458 |
| mag_sqr_v_test.test | RUN | 0.191625 | 0.418566 | 0.499008 | 0.001432 | 0.001464 | 0.001189 |
| minus_v_test.test | RUN | 0.197379 | 0.478148 | 0.525827 | 0.001706 | 0.001609 | 0.001412 |
| minus_eq_vv_test.test | RUN | 0.198841 | 0.457716 | 0.531083 | 0.001366 | 0.001486 | 0.001532 |
| minus_vv_test.test | RUN | 0.216075 | 0.493128 | 0.563401 | 0.001711 | 0.001597 | 0.001318 |
| mul_eq_vs_test.test | RUN | 0.199156 | 0.395771 | 0.514792 | 0.001400 | 0.001727 | 0.001551 |
| mul_vs_test.test | RUN | 0.208358 | 0.501370 | 0.555364 | 0.001457 | 0.001599 | 0.001472 |
| mul_sv_test.test | RUN | 0.209510 | 0.497524 | 0.559202 | 0.001279 | 0.001586 | 0.001389 |
| mul_vm_test.test | RUN | 0.286645 | 0.874172 | 0.881738 | 0.001221 | 0.001382 | 0.001532 |
| normalize_v_test.test | RUN | 0.214698 | 0.594650 | 0.550694 | 0.001435 | 0.001485 | 0.001550 |
| plus_eq_vv_test.test | RUN | 0.200325 | 0.468430 | 0.542346 | 0.001464 | 0.001375 | 0.001343 |
| plus_vv_test.test | RUN | 0.209157 | 0.486229 | 0.566424 | 0.001044 | 0.001619 | 0.001133 |
| scalar_cast_v_test.test | RUN | 0.195964 | 0.362950 | 0.482359 | 0.001374 | 0.001217 | 0.001381 |
| vec_index_test.test | RUN | 0.172113 | 0.370373 | 0.444090 | 0.001580 | 0.001408 | 0.001278 |
| vec_register_test.test | RUN | 0.112991 | 0.335278 | 0.319601 | 0.001697 | 0.001522 | 0.001282 |
| cmp_mm_test.test | RUN | 0.325397 | 1.053321 | 1.120466 | 0.001693 | 0.001551 | 0.001476 |
| determinant_test.test | RUN | 0.234679 | 0.549081 | 0.595276 | 0.001497 | 0.001420 | 0.001381 |
| div_eq_ms_test.test | RUN | 0.236278 | 0.514957 | 0.672367 | 0.001524 | 0.001343 | 0.001364 |
| div_ms_test.test | RUN | 0.274603 | 0.799025 | 0.854330 | 0.001408 | 0.001553 | 0.001479 |
| eq_mm_test.test | RUN | 0.316630 | 0.986854 | 1.074984 | 0.001820 | 0.001521 | 0.001410 |
| minus_m_test.test | RUN | 0.266531 | 0.795685 | 0.826950 | 0.001503 | 0.001688 | 0.001594 |
| minus_eq_mm_test.test | RUN | 0.254399 | 0.749624 | 0.761427 | 0.001424 | 0.001321 | 0.001409 |
| minus_mm_test.test | RUN | 0.278681 | 0.953731 | 0.904597 | 0.001393 | 0.001728 | 0.001489 |
| mul_eq_mm_test.test | RUN | 0.239912 | 0.728570 | 0.758136 | 0.001613 | 0.001675 | 0.001540 |
| mul_eq_ms_test.test | RUN | 0.229022 | 0.555549 | 0.800431 | 0.001578 | 0.001413 | 0.001520 |
| mul_mm_test.test | RUN | 0.317676 | 1.592567 | 1.202169 | 0.001676 | 0.002034 | 0.001491 |
| mul_ms_test.test | RUN | 0.281303 | 0.875888 | 0.949440 | 0.001429 | 0.001692 | 0.001407 |
| mul_sm_test.test | RUN | 0.279725 | 0.833443 | 0.873552 | 0.001635 | 0.004424 | 0.001486 |
| mul_mv_test.test | RUN | 0.287969 | 0.882204 | 0.884571 | 0.001694 | 0.002644 | 0.001478 |
| inverse_m_test.test | RUN | 0.395231 | 1.682516 | 1.256396 | 0.001730 | 0.001688 | 0.001361 |
| plus_eq_mm_test.test | RUN | 0.262914 | 0.765537 | 0.767721 | 0.001546 | 0.001634 | 0.001481 |
| plus_mm_test.test | RUN | 0.295908 | 0.932611 | 0.882718 | 0.001679 | 0.001426 | 0.001527 |
| scalar_cast_m_test.test | RUN | 0.236623 | 0.420259 | 0.562871 | 0.001752 | 0.001642 | 0.001582 |
| mat_index_test.test | RUN | 0.196127 | 0.416701 | 0.478756 | 0.001720 | 0.001524 | 0.001559 |
| cmp_qq_test.test | RUN | 0.206386 | 0.399496 | 0.489917 | 0.001695 | 0.001653 | 0.001526 |
| conjugate_test.test | RUN | 0.206486 | 0.408443 | 0.494033 | 0.001453 | 0.001710 | 0.001327 |
| normalize_q_test.test | RUN | 0.208356 | 0.465471 | 0.557549 | 0.001626 | 0.001520 | 0.001339 |
| div_eq_qs_test.test | RUN | 0.196309 | 0.390528 | 0.521584 | 0.001561 | 0.001383 | 0.001499 |
| div_qs_test.test | RUN | 0.195049 | 0.421790 | 0.479851 | 0.001674 | 0.001518 | 0.001357 |
| dot_qq_test.test | RUN | 0.193835 | 0.391525 | 0.475419 | 0.001390 | 0.001706 | 0.001476 |
| eq_qq_test.test | RUN | 0.194498 | 0.415953 | 0.481060 | 0.001599 | 0.001658 | 0.001488 |
| inverse_q_test.test | RUN | 0.231556 | 0.551060 | 0.612163 | 0.001522 | 0.001385 | 0.001463 |
| mag_q_test.test | RUN | 0.187157 | 0.417919 | 0.475689 | 0.001554 | 0.001540 | 0.001546 |
| mag_sqr_q_test.test | RUN | 0.192063 | 0.419110 | 0.478227 | 0.001361 | 0.001661 | 0.001229 |
| minus_q_test.test | RUN | 0.188872 | 0.420894 | 0.488679 | 0.001551 | 0.001744 | 0.001478 |
| minus_eq_qq_test.test | RUN | 0.185977 | 0.400642 | 0.476352 | 0.001614 | 0.001750 | 0.001462 |
| minus_qq_test.test | RUN | 0.191300 | 0.427377 | 0.486041 | 0.001535 | 0.001363 | 0.001251 |
| mul_eq_qs_test.test | RUN | 0.192751 | 0.388813 | 0.462611 | 0.001393 | 0.001583 | 0.001378 |
| mul_qs_test.test | RUN | 0.193181 | 0.403477 | 0.476472 | 0.001630 | 0.001754 | 0.001476 |
| mul_qv_test.test | RUN | 0.233723 | 0.540360 | 0.609288 | 0.001700 | 0.001727 | 0.001528 |
| mul_qq_test.test | RUN | 0.229837 | 0.550695 | 0.592402 | 0.001564 | 0.001554 | 0.001482 |
| mul_eq_qq_test.test | RUN | 0.229622 | 0.554402 | 0.601201 | 0.001452 | 0.001304 | 0.001262 |
| plus_eq_qq_test.test | RUN | 0.197672 | 0.399706 | 0.484951 | 0.001584 | 0.001674 | 0.001191 |
| plus_qq_test.test | RUN | 0.191348 | 0.410095 | 0.478740 | 0.001462 | 0.001566 | 0.001481 |
| scalar_cast_q_test.test | RUN | 0.187893 | 0.384557 | 0.488780 | 0.001646 | 0.001295 | 0.001436 |
| slerp_test.test | RUN | 0.202339 | 0.758142 | 0.575305 | 0.014910 | 0.011955 | 0.012631 |
| convert_to_test.test | RUN | 0.279596 | 0.708170 | 0.903910 | 0.001602 | 0.001472 | 0.001470 |
| rot_mat_test.test | RUN | 0.406876 | 3.145041 | 2.880223 | 0.030602 | 0.030807 | 0.027954 |
| rot_quat_test.test | RUN | 0.228285 | 0.630497 | 0.685276 | 0.001454 | 0.001713 | 0.001549 |
| rotx_mat_test.test | RUN | 0.255794 | 0.858187 | 0.895613 | 0.001767 | 0.001556 | 0.001391 |
| rotx_quat_test.test | RUN | 0.237207 | 0.551460 | 0.617556 | 0.001479 | 0.001622 | 0.001482 |
| roty_mat_test.test | RUN | 0.269728 | 0.869807 | 0.853405 | 0.001802 | 0.001591 | 0.001303 |
| roty_quat_test.test | RUN | 0.238956 | 0.577514 | 0.601926 | 0.001476 | 0.001632 | 0.001450 |
| rotz_mat_test.test | RUN | 0.284220 | 0.968835 | 0.833612 | 0.001718 | 0.001402 | 0.001544 |
| rotz_quat_test.test | RUN | 0.237510 | 0.523693 | 0.611442 | 0.001448 | 0.001554 | 0.001317 |
| zero_vec_test.test | RUN | 0.207094 | 0.458731 | 0.524436 | 0.001554 | 0.001518 | 0.001461 |
| zero_mat_test.test | RUN | 0.263192 | 0.769077 | 0.740468 | 0.001664 | 0.001604 | 0.001595 |
| zero_quat_test.test | RUN | 0.200997 | 0.399708 | 0.478775 | 0.001441 | 0.001620 | 0.001508 |
| identity_mat_test.test | RUN | 0.249965 | 0.591707 | 0.636971 | 0.001562 | 0.001506 | 0.001433 |
| identity_quat_test.test | RUN | 0.209623 | 0.376070 | 0.495383 | 0.001694 | 0.001690 | 0.001530 |
| col_test.test | RUN | 0.369868 | 1.192079 | 1.390322 | 0.001580 | 0.001457 | 0.001532 |
| col_mat_test.test | RUN | 0.247565 | 0.536720 | 0.654882 | 0.001371 | 0.001633 | 0.001660 |
| neg_col_test.test | RUN | 0.280620 | 0.748894 | 0.831930 | 0.001459 | 0.001691 | 0.001494 |
| neg_row_test.test | RUN | 0.292785 | 0.781755 | 0.832165 | 0.001666 | 0.001416 | 0.001374 |
| del_col_test.test | RUN | 0.291852 | 0.839732 | 0.872316 | 0.001489 | 0.001509 | 0.001630 |
| del_row_test.test | RUN | 0.294899 | 0.812264 | 0.864223 | 0.001454 | 0.001644 | 0.001505 |
| del_row_col_test.test | RUN | 0.404791 | 1.503470 | 1.579084 | 0.001684 | 0.001629 | 0.001595 |
| swap_cols_test.test | RUN | 0.523195 | 2.014812 | 1.971934 | 0.001576 | 0.001035 | 0.001580 |
| swap_rows_test.test | RUN | 0.559921 | 2.094118 | 1.976367 | 0.001487 | 0.001598 | 0.001565 |
| diag_test.test | RUN | 0.244234 | 0.550132 | 0.734120 | 0.001309 | 0.001652 | 0.001612 |
| diag_mat_test.test | RUN | 0.253349 | 0.554213 | 0.682204 | 0.001417 | 0.001538 | 0.001610 |
| row_test.test | RUN | 0.348895 | 1.141018 | 1.411912 | 0.001501 | 0.001363 | 0.001602 |
| row_mat_test.test | RUN | 0.235804 | 0.526399 | 0.620733 | 0.001538 | 0.001541 | 0.001613 |
| transpose_test.test | RUN | 0.277368 | 0.836964 | 0.881183 | 0.001305 | 0.001617 | 0.001619 |
| translation_test.test | RUN | 0.225269 | 0.531564 | 0.640395 | 0.001419 | 0.001654 | 0.001363 |
| translation_mat_test.test | RUN | 0.266142 | 0.535354 | 0.717443 | 0.001534 | 0.001504 | 0.001486 |
| swizzle_const_fail.test | COMPILE_FAIL | 0.087100 | 0.153292 | 0.188590 | — | — | — |
| swizzle2_test2.test | RUN | 0.106040 | 0.238255 | 0.273601 | 0.001357 | 0.001733 | 0.001355 |
| swizzle2_test3.test | RUN | 0.110590 | 0.226655 | 0.273918 | 0.001354 | 0.001396 | 0.001275 |
| swizzle2_test4.test | RUN | 0.106617 | 0.229178 | 0.273708 | 0.001344 | 0.001774 | 0.001512 |
| swizzle2_test.test | RUN | 0.339241 | 0.640037 | 0.813995 | 0.001611 | 0.001601 | 0.001385 |
| swizzle3_test2.test | RUN | 0.119910 | 0.251300 | 0.306851 | 0.001390 | 0.001459 | 0.001325 |
| swizzle3_test3.test | RUN | 0.117280 | 0.253178 | 0.299813 | 0.001406 | 0.001377 | 0.001412 |
| swizzle3_test4.test | RUN | 0.125085 | 0.256370 | 0.300814 | 0.001436 | 0.001498 | 0.001184 |
| swizzle3_test.test | RUN | 0.331734 | 0.640876 | 0.815342 | 0.001468 | 0.001500 | 0.001423 |
| swizzle4_test2.test | RUN | 0.198375 | 0.357136 | 0.447863 | 0.001589 | 0.001660 | 0.001310 |
| swizzle4_test3.test | RUN | 0.199121 | 0.342233 | 0.462735 | 0.001529 | 0.001536 | 0.001274 |
| swizzle4_test4.test | RUN | 0.202672 | 0.346448 | 0.444670 | 0.001425 | 0.001285 | 0.001428 |
| swizzle4_test.test | RUN | 0.345782 | 0.661808 | 0.892150 | 0.001338 | 0.001390 | 0.002672 |
| deduce_scalar_test.test | COMPILE | 0.017813 | 0.034249 | 0.049917 | — | — | — |
| deduce_scalar_mq_test.test | RUN | 0.130415 | 0.261618 | 0.291606 | 0.001695 | 0.001371 | 0.001992 |
| deduce_scalar_mv_test.test | RUN | 0.160681 | 0.286431 | 0.409941 | 0.001584 | 0.001463 | 0.001573 |
| deduce_scalar_fail.test | COMPILE_FAIL | 0.015048 | 0.021058 | 0.038985 | — | — | — |
| deduce_mat_test.test | COMPILE | 0.016151 | 0.030507 | 0.044130 | — | — | — |
| deduce_quat_test.test | COMPILE | 0.015001 | 0.029942 | 0.046538 | — | — | — |
| deduce_vec_test.test | COMPILE | 0.016077 | 0.029529 | 0.044444 | — | — | — |
| interop_test.test | RUN | 0.156953 | 0.386121 | 0.486060 | 0.000612 | 0.000648 | 0.001089 |
| transform_test.test | RUN | 0.315016 | 0.606885 | 0.767576 | 0.001162 | 0.001073 | 0.001110 |
| projection_test.test | RUN | 0.204198 | 0.424559 | 0.515204 | 0.001308 | 0.001166 | 0.001117 |
| scalar_traits_test.test | COMPILE | 0.016604 | 0.029892 | 0.045295 | — | — | — |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.980× | 0.967×, 0.992× | 1.011× |
| clang | 1.033× | 1.041×, 1.026× | 1.014× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1364 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43686398833).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| access_m_test.test | 10 | 0.000882s | 0.000869s | 0.000885s | byte equality observed |
| access_q_test.test | 10 | 0.000876s | 0.000854s | 0.000882s | byte equality observed |
| access_v_test.test | 10 | 0.000866s | 0.000872s | 0.000882s | byte equality observed |
| assign_test.test | 10 | 0.000876s | 0.000861s | 0.000907s | byte equality observed |
| cmp_mm_test.test | 10 | 0.000901s | 0.000875s | 0.000889s | byte equality observed |
| cmp_qq_test.test | 10 | 0.000871s | 0.000857s | 0.000907s | byte equality observed |
| cmp_vv_test.test | 10 | 0.000868s | 0.000859s | 0.000896s | byte equality observed |
| col_mat_test.test | 10 | 0.000870s | 0.000901s | 0.000885s | byte equality observed |
| col_test.test | 10 | 0.000875s | 0.000868s | 0.000909s | byte equality observed |
| conjugate_test.test | 10 | 0.000882s | 0.000851s | 0.000886s | byte equality observed |
| convert_to_test.test | 10 | 0.000888s | 0.000879s | 0.000889s | byte equality observed |
| cross_test.test | 10 | 0.000875s | 0.000865s | 0.000910s | byte equality observed |
| deduce_scalar_mq_test.test | 10 | 0.000872s | 0.000865s | 0.000871s | byte equality observed |
| deduce_scalar_mv_test.test | 10 | 0.000877s | 0.000858s | 0.000881s | byte equality observed |
| del_col_test.test | 10 | 0.000875s | 0.000856s | 0.000893s | byte equality observed |
| del_row_col_test.test | 10 | 0.000879s | 0.000859s | 0.000910s | byte equality observed |
| del_row_test.test | 10 | 0.000864s | 0.000861s | 0.000916s | byte equality observed |
| determinant_test.test | 10 | 0.000883s | 0.000879s | 0.000937s | byte equality observed |
| diag_mat_test.test | 10 | 0.000873s | 0.000857s | 0.000904s | byte equality observed |
| diag_test.test | 10 | 0.000865s | 0.000849s | 0.000875s | byte equality observed |
| div_eq_ms_test.test | 10 | 0.000874s | 0.000877s | 0.000869s | byte equality observed |
| div_eq_qs_test.test | 10 | 0.000872s | 0.000842s | 0.000909s | byte equality observed |
| div_eq_vs_test.test | 10 | 0.000853s | 0.000861s | 0.000889s | byte equality observed |
| div_ms_test.test | 10 | 0.000867s | 0.000860s | 0.000896s | byte equality observed |
| div_qs_test.test | 10 | 0.000875s | 0.000858s | 0.000887s | byte equality observed |
| div_vs_test.test | 10 | 0.000873s | 0.000869s | 0.000910s | byte equality observed |
| dot_qq_test.test | 10 | 0.000882s | 0.000840s | 0.000887s | byte equality observed |
| dot_vv_test.test | 10 | 0.000869s | 0.000862s | 0.000908s | byte equality observed |
| eq_mm_test.test | 10 | 0.000876s | 0.000872s | 0.000903s | byte equality observed |
| eq_qq_test.test | 10 | 0.000869s | 0.000846s | 0.000898s | byte equality observed |
| eq_vv_test.test | 10 | 0.000870s | 0.000871s | 0.000889s | byte equality observed |
| identity_mat_test.test | 10 | 0.000857s | 0.000853s | 0.000900s | byte equality observed |
| identity_quat_test.test | 10 | 0.000870s | 0.000854s | 0.000913s | byte equality observed |
| interop_test.test | 10 | 0.000392s | 0.000390s | 0.000904s | byte equality observed |
| inverse_m_test.test | 10 | 0.000919s | 0.000894s | 0.000943s | byte equality observed |
| inverse_q_test.test | 10 | 0.000897s | 0.000837s | 0.000901s | byte equality observed |
| mag_q_test.test | 10 | 0.000882s | 0.000858s | 0.000905s | byte equality observed |
| mag_sqr_q_test.test | 10 | 0.000875s | 0.000845s | 0.000900s | byte equality observed |
| mag_sqr_v_test.test | 10 | 0.000862s | 0.000862s | 0.000889s | byte equality observed |
| mag_v_test.test | 10 | 0.000872s | 0.000858s | 0.000891s | byte equality observed |
| mat_index_test.test | 10 | 0.000880s | 0.000865s | 0.000890s | byte equality observed |
| mat_traits_array_test.test | 10 | 0.000865s | 0.000848s | 0.000899s | byte equality observed |
| mat_traits_std_array_test.test | 10 | 0.000874s | 0.000864s | 0.000888s | byte equality observed |
| math_test.test | 10 | 0.001292s | 0.001223s | 0.001186s | byte equality observed |
| minus_eq_mm_test.test | 10 | 0.000873s | 0.000842s | 0.000930s | byte equality observed |
| minus_eq_qq_test.test | 10 | 0.000886s | 0.000859s | 0.000895s | byte equality observed |
| minus_eq_vv_test.test | 10 | 0.000879s | 0.000873s | 0.000911s | byte equality observed |
| minus_m_test.test | 10 | 0.000886s | 0.000854s | 0.000890s | byte equality observed |
| minus_mm_test.test | 10 | 0.000882s | 0.000844s | 0.000903s | byte equality observed |
| minus_q_test.test | 10 | 0.000874s | 0.000866s | 0.000909s | byte equality observed |
| minus_qq_test.test | 10 | 0.000877s | 0.000863s | 0.000892s | byte equality observed |
| minus_v_test.test | 10 | 0.000862s | 0.000835s | 0.000893s | byte equality observed |
| minus_vv_test.test | 10 | 0.000883s | 0.000836s | 0.000874s | byte equality observed |
| mul_eq_mm_test.test | 10 | 0.000867s | 0.000841s | 0.000874s | byte equality observed |
| mul_eq_ms_test.test | 10 | 0.000885s | 0.000856s | 0.000876s | byte equality observed |
| mul_eq_qq_test.test | 10 | 0.000891s | 0.000865s | 0.000913s | byte equality observed |
| mul_eq_qs_test.test | 10 | 0.000862s | 0.000859s | 0.000895s | byte equality observed |
| mul_eq_vs_test.test | 10 | 0.000863s | 0.000853s | 0.000890s | byte equality observed |
| mul_mm_test.test | 10 | 0.000876s | 0.000872s | 0.000905s | byte equality observed |
| mul_ms_test.test | 10 | 0.000870s | 0.000864s | 0.000915s | byte equality observed |
| mul_mv_test.test | 10 | 0.000866s | 0.000861s | 0.000910s | byte equality observed |
| mul_qq_test.test | 10 | 0.000886s | 0.000850s | 0.000915s | byte equality observed |
| mul_qs_test.test | 10 | 0.000859s | 0.000836s | 0.000923s | byte equality observed |
| mul_qv_test.test | 10 | 0.000884s | 0.000846s | 0.000892s | byte equality observed |
| mul_sm_test.test | 10 | 0.000858s | 0.000836s | 0.000916s | byte equality observed |
| mul_sv_test.test | 10 | 0.000865s | 0.000846s | 0.000925s | byte equality observed |
| mul_vm_test.test | 10 | 0.000874s | 0.000859s | 0.000891s | byte equality observed |
| mul_vs_test.test | 10 | 0.000880s | 0.000848s | 0.000909s | byte equality observed |
| neg_col_test.test | 10 | 0.000867s | 0.000853s | 0.000929s | byte equality observed |
| neg_row_test.test | 10 | 0.000875s | 0.000838s | 0.000905s | byte equality observed |
| normalize_q_test.test | 10 | 0.000871s | 0.000856s | 0.000919s | byte equality observed |
| normalize_v_test.test | 10 | 0.000884s | 0.000847s | 0.000910s | byte equality observed |
| plus_eq_mm_test.test | 10 | 0.000865s | 0.000865s | 0.000913s | byte equality observed |
| plus_eq_qq_test.test | 10 | 0.000884s | 0.000836s | 0.000910s | byte equality observed |
| plus_eq_vv_test.test | 10 | 0.000873s | 0.000863s | 0.000927s | byte equality observed |
| plus_mm_test.test | 10 | 0.000881s | 0.000864s | 0.000932s | byte equality observed |
| plus_qq_test.test | 10 | 0.000866s | 0.000843s | 0.000914s | byte equality observed |
| plus_vv_test.test | 10 | 0.000862s | 0.000844s | 0.000922s | byte equality observed |
| projection_test.test | 10 | 0.000869s | 0.000860s | 0.000904s | byte equality observed |
| quat_traits_array_test.test | 10 | 0.000870s | 0.000867s | 0.000911s | byte equality observed |
| quat_traits_std_array_test.test | 10 | 0.000849s | 0.000860s | 0.000902s | byte equality observed |
| rot_mat_test.test | 1 | 0.019379s | 0.019828s | 0.019806s | byte equality observed |
| rot_quat_test.test | 10 | 0.000814s | 0.000841s | 0.000898s | byte equality observed |
| rotx_mat_test.test | 10 | 0.000859s | 0.000858s | 0.000921s | byte equality observed |
| rotx_quat_test.test | 10 | 0.000882s | 0.000859s | 0.000917s | byte equality observed |
| roty_mat_test.test | 10 | 0.000882s | 0.000862s | 0.000960s | byte equality observed |
| roty_quat_test.test | 10 | 0.000871s | 0.000858s | 0.000925s | byte equality observed |
| rotz_mat_test.test | 10 | 0.000884s | 0.000869s | 0.000938s | byte equality observed |
| rotz_quat_test.test | 10 | 0.000891s | 0.000865s | 0.000937s | byte equality observed |
| row_mat_test.test | 10 | 0.000878s | 0.000873s | 0.000921s | byte equality observed |
| row_test.test | 10 | 0.000899s | 0.000835s | 0.000902s | byte equality observed |
| scalar_cast_m_test.test | 10 | 0.000879s | 0.000852s | 0.000905s | byte equality observed |
| scalar_cast_q_test.test | 10 | 0.000882s | 0.000867s | 0.000924s | byte equality observed |
| scalar_cast_v_test.test | 10 | 0.000859s | 0.000860s | 0.000873s | byte equality observed |
| slerp_test.test | 3 | 0.009916s | 0.007834s | 0.009036s | byte equality observed |
| swap_cols_test.test | 10 | 0.000853s | 0.000845s | 0.000867s | byte equality observed |
| swap_rows_test.test | 10 | 0.000857s | 0.000879s | 0.000898s | byte equality observed |
| swizzle2_test.test | 10 | 0.000893s | 0.000861s | 0.000935s | byte equality observed |
| swizzle2_test2.test | 10 | 0.000872s | 0.000869s | 0.000907s | byte equality observed |
| swizzle2_test3.test | 10 | 0.000877s | 0.000884s | 0.000886s | byte equality observed |
| swizzle2_test4.test | 10 | 0.000878s | 0.000859s | 0.000918s | byte equality observed |
| swizzle3_test.test | 10 | 0.000868s | 0.000857s | 0.000924s | byte equality observed |
| swizzle3_test2.test | 10 | 0.000880s | 0.000857s | 0.000905s | byte equality observed |
| swizzle3_test3.test | 10 | 0.000871s | 0.000850s | 0.000896s | byte equality observed |
| swizzle3_test4.test | 10 | 0.000879s | 0.000887s | 0.000902s | byte equality observed |
| swizzle4_test.test | 10 | 0.000873s | 0.000863s | 0.000898s | byte equality observed |
| swizzle4_test2.test | 10 | 0.000873s | 0.000864s | 0.000899s | byte equality observed |
| swizzle4_test3.test | 10 | 0.000853s | 0.000870s | 0.000897s | byte equality observed |
| swizzle4_test4.test | 10 | 0.000859s | 0.000873s | 0.000905s | byte equality observed |
| to_string_test.test | 10 | 0.000907s | 0.000883s | 0.000948s | byte equality observed |
| transform_test.test | 10 | 0.000863s | 0.000864s | 0.000901s | byte equality observed |
| translation_mat_test.test | 10 | 0.000881s | 0.000845s | 0.000914s | byte equality observed |
| translation_test.test | 10 | 0.000889s | 0.000853s | 0.000890s | byte equality observed |
| transpose_test.test | 10 | 0.000862s | 0.000837s | 0.000902s | byte equality observed |
| vec_index_test.test | 10 | 0.000870s | 0.000851s | 0.000919s | byte equality observed |
| vec_register_test.test | 10 | 0.000862s | 0.000864s | 0.000910s | byte equality observed |
| vec_traits_array_test.test | 10 | 0.000869s | 0.000863s | 0.000883s | byte equality observed |
| vec_traits_gnuc_test.test | 10 | 0.000861s | 0.000840s | 0.000912s | byte equality observed |
| vec_traits_std_array_test.test | 10 | 0.000874s | 0.000836s | 0.000903s | byte equality observed |
| zero_mat_test.test | 10 | 0.000877s | 0.000859s | 0.000910s | byte equality observed |
| zero_quat_test.test | 10 | 0.000872s | 0.000837s | 0.000888s | byte equality observed |
| zero_vec_test.test | 10 | 0.000871s | 0.000864s | 0.000877s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43686398833).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
