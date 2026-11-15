# libs/qvm/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| math_test.test | RUN | 0.186647 | 0.474959 | 0.531628 | 0.001714 | 0.001857 | 0.002206 |
| mat_traits_array_test.test | RUN | 0.143743 | 0.457176 | 0.392107 | 0.001570 | 0.001252 | 0.001378 |
| mat_traits_std_array_test.test | RUN | 0.147395 | 0.359983 | 0.413874 | 0.001400 | 0.001424 | 0.001397 |
| vec_traits_array_test.test | RUN | 0.129901 | 0.363376 | 0.343369 | 0.001400 | 0.001451 | 0.001445 |
| vec_traits_gnuc_test.test | RUN | 0.226909 | 0.440004 | 0.683097 | 0.001431 | 0.001368 | 0.001639 |
| vec_traits_std_array_test.test | RUN | 0.123968 | 0.274133 | 0.351278 | 0.001589 | 0.001461 | 0.001386 |
| quat_traits_array_test.test | RUN | 0.124169 | 0.367903 | 0.353693 | 0.001246 | 0.001409 | 0.001465 |
| quat_traits_std_array_test.test | RUN | 0.120843 | 0.290740 | 0.348194 | 0.001375 | 0.001394 | 0.001594 |
| access_m_test.test | RUN | 0.199992 | 0.674176 | 0.795956 | 0.001317 | 0.001621 | 0.001466 |
| access_m_fail1.test | COMPILE_FAIL | 0.019201 | 0.031563 | 0.054888 | — | — | — |
| access_m_fail2.test | COMPILE_FAIL | 0.018960 | 0.030773 | 0.056215 | — | — | — |
| access_q_test.test | RUN | 0.166949 | 0.352863 | 0.453259 | 0.001311 | 0.001480 | 0.001728 |
| access_q_fail.test | COMPILE_FAIL | 0.014918 | 0.024511 | 0.050265 | — | — | — |
| access_v_test.test | RUN | 0.167823 | 0.373850 | 0.473349 | 0.001269 | 0.001545 | 0.001539 |
| access_v_fail1.test | COMPILE_FAIL | 0.013792 | 0.023223 | 0.043916 | — | — | — |
| access_v_fail2.test | COMPILE_FAIL | 0.014415 | 0.023663 | 0.043739 | — | — | — |
| assign_test.test | RUN | 0.246762 | 0.602273 | 0.830176 | 0.001530 | 0.001696 | 0.001459 |
| to_string_test.test | RUN | 0.279454 | 0.973705 | 5.128886 | 0.001331 | 0.001165 | 0.001764 |
| cmp_vv_test.test | RUN | 0.209062 | 0.484611 | 0.547491 | 0.001316 | 0.001480 | 0.001642 |
| cross_test.test | RUN | 0.205863 | 0.447360 | 0.548401 | 0.001195 | 0.001531 | 0.001468 |
| div_eq_vs_test.test | RUN | 0.189257 | 0.405620 | 0.555095 | 0.001518 | 0.001557 | 0.001659 |
| div_vs_test.test | RUN | 0.196913 | 0.494923 | 0.591495 | 0.001262 | 0.001615 | 0.001480 |
| dot_vv_test.test | RUN | 0.189566 | 0.454335 | 0.540608 | 0.001314 | 0.001676 | 0.001604 |
| eq_vv_test.test | RUN | 0.209068 | 0.492561 | 0.610415 | 0.001277 | 0.001507 | 0.001586 |
| mag_v_test.test | RUN | 0.185508 | 0.409036 | 0.543900 | 0.001533 | 0.001424 | 0.001422 |
| mag_sqr_v_test.test | RUN | 0.187975 | 0.407376 | 0.511713 | 0.001357 | 0.001466 | 0.001414 |
| minus_v_test.test | RUN | 0.196653 | 0.479176 | 0.578721 | 0.001307 | 0.001546 | 0.001616 |
| minus_eq_vv_test.test | RUN | 0.190046 | 0.462537 | 0.568142 | 0.001373 | 0.001490 | 0.001308 |
| minus_vv_test.test | RUN | 0.197782 | 0.509131 | 0.576950 | 0.001518 | 0.001509 | 0.001067 |
| mul_eq_vs_test.test | RUN | 0.190222 | 0.397101 | 0.556464 | 0.001425 | 0.001647 | 0.001404 |
| mul_vs_test.test | RUN | 0.200535 | 0.500404 | 0.599290 | 0.001313 | 0.001671 | 0.001453 |
| mul_sv_test.test | RUN | 0.203528 | 0.491383 | 0.589185 | 0.001148 | 0.001714 | 0.001548 |
| mul_vm_test.test | RUN | 0.270777 | 0.885519 | 0.949319 | 0.001276 | 0.001638 | 0.001730 |
| normalize_v_test.test | RUN | 0.200339 | 0.597069 | 0.619209 | 0.001576 | 0.001578 | 0.001530 |
| plus_eq_vv_test.test | RUN | 0.188574 | 0.465291 | 0.549623 | 0.001350 | 0.001446 | 0.001626 |
| plus_vv_test.test | RUN | 0.198782 | 0.501209 | 0.573861 | 0.001283 | 0.001647 | 0.001403 |
| scalar_cast_v_test.test | RUN | 0.185439 | 0.366420 | 0.493838 | 0.001252 | 0.001392 | 0.001582 |
| vec_index_test.test | RUN | 0.158088 | 0.381574 | 0.490916 | 0.001317 | 0.001357 | 0.001584 |
| vec_register_test.test | RUN | 0.105318 | 0.330975 | 0.352659 | 0.001456 | 0.001304 | 0.001297 |
| cmp_mm_test.test | RUN | 0.310561 | 1.058354 | 1.225874 | 0.001564 | 0.001642 | 0.001557 |
| determinant_test.test | RUN | 0.218625 | 0.567971 | 0.640263 | 0.001549 | 0.001573 | 0.001768 |
| div_eq_ms_test.test | RUN | 0.227861 | 0.504340 | 0.740657 | 0.001271 | 0.001321 | 0.001718 |
| div_ms_test.test | RUN | 0.268064 | 0.812520 | 0.918251 | 0.001245 | 0.001646 | 0.001607 |
| eq_mm_test.test | RUN | 0.297596 | 0.989821 | 1.179197 | 0.001762 | 0.001326 | 0.001689 |
| minus_m_test.test | RUN | 0.259708 | 0.798796 | 0.884155 | 0.001281 | 0.001549 | 0.001581 |
| minus_eq_mm_test.test | RUN | 0.233804 | 0.746471 | 0.796599 | 0.001336 | 0.001516 | 0.001578 |
| minus_mm_test.test | RUN | 0.273828 | 0.942402 | 0.958077 | 0.001504 | 0.001713 | 0.001762 |
| mul_eq_mm_test.test | RUN | 0.227629 | 0.690490 | 0.689947 | 0.001534 | 0.001586 | 0.001616 |
| mul_eq_ms_test.test | RUN | 0.224312 | 0.513181 | 0.726096 | 0.001460 | 0.001373 | 0.001730 |
| mul_mm_test.test | RUN | 0.308760 | 1.525575 | 1.246690 | 0.001614 | 0.001556 | 0.001722 |
| mul_ms_test.test | RUN | 0.266145 | 0.827317 | 0.922630 | 0.001352 | 0.001606 | 0.001616 |
| mul_sm_test.test | RUN | 0.270192 | 0.817705 | 0.956191 | 0.001612 | 0.001258 | 0.001644 |
| mul_mv_test.test | RUN | 0.269559 | 0.874221 | 0.929006 | 0.001550 | 0.001319 | 0.001648 |
| inverse_m_test.test | RUN | 0.361332 | 1.588032 | 1.303945 | 0.001437 | 0.001467 | 0.001420 |
| plus_eq_mm_test.test | RUN | 0.245880 | 0.722800 | 0.809753 | 0.001455 | 0.001523 | 0.001616 |
| plus_mm_test.test | RUN | 0.279639 | 0.913201 | 0.958441 | 0.001572 | 0.001654 | 0.001606 |
| scalar_cast_m_test.test | RUN | 0.215745 | 0.437438 | 0.588909 | 0.001390 | 0.001336 | 0.001468 |
| mat_index_test.test | RUN | 0.172007 | 0.408398 | 0.517330 | 0.001360 | 0.001466 | 0.001720 |
| cmp_qq_test.test | RUN | 0.191642 | 0.377044 | 0.505852 | 0.001419 | 0.001509 | 0.001658 |
| conjugate_test.test | RUN | 0.188008 | 0.400300 | 0.521365 | 0.001584 | 0.001637 | 0.001385 |
| normalize_q_test.test | RUN | 0.193417 | 0.435170 | 0.523220 | 0.001526 | 0.001493 | 0.001367 |
| div_eq_qs_test.test | RUN | 0.186245 | 0.385232 | 0.502147 | 0.001586 | 0.001488 | 0.001644 |
| div_qs_test.test | RUN | 0.189937 | 0.390405 | 0.511679 | 0.001275 | 0.001549 | 0.001526 |
| dot_qq_test.test | RUN | 0.191009 | 0.385183 | 0.518953 | 0.001608 | 0.001659 | 0.001604 |
| eq_qq_test.test | RUN | 0.193961 | 0.398653 | 0.526790 | 0.001360 | 0.001627 | 0.001718 |
| inverse_q_test.test | RUN | 0.227317 | 0.530858 | 0.660320 | 0.001494 | 0.001508 | 0.001624 |
| mag_q_test.test | RUN | 0.193911 | 0.384072 | 0.504645 | 0.001571 | 0.001606 | 0.001586 |
| mag_sqr_q_test.test | RUN | 0.197210 | 0.389872 | 0.492758 | 0.001626 | 0.001635 | 0.001411 |
| minus_q_test.test | RUN | 0.193134 | 0.394536 | 0.501379 | 0.001556 | 0.001659 | 0.001599 |
| minus_eq_qq_test.test | RUN | 0.194963 | 0.385410 | 0.501277 | 0.001540 | 0.001430 | 0.001507 |
| minus_qq_test.test | RUN | 0.195702 | 0.407471 | 0.496707 | 0.001406 | 0.001399 | 0.001488 |
| mul_eq_qs_test.test | RUN | 0.196320 | 0.373887 | 0.467074 | 0.001521 | 0.001657 | 0.001448 |
| mul_qs_test.test | RUN | 0.189437 | 0.394686 | 0.486692 | 0.001324 | 0.001649 | 0.001718 |
| mul_qv_test.test | RUN | 0.230636 | 0.527960 | 0.647191 | 0.001591 | 0.001458 | 0.001532 |
| mul_qq_test.test | RUN | 0.223397 | 0.542238 | 0.627279 | 0.001387 | 0.001459 | 0.001772 |
| mul_eq_qq_test.test | RUN | 0.220496 | 0.529392 | 0.618002 | 0.001677 | 0.001649 | 0.001580 |
| plus_eq_qq_test.test | RUN | 0.185067 | 0.394102 | 0.517765 | 0.001533 | 0.001674 | 0.001639 |
| plus_qq_test.test | RUN | 0.198415 | 0.392686 | 0.515665 | 0.001608 | 0.001669 | 0.001403 |
| scalar_cast_q_test.test | RUN | 0.193255 | 0.359021 | 0.507012 | 0.001692 | 0.001550 | 0.001624 |
| slerp_test.test | RUN | 0.209239 | 0.732608 | 0.609725 | 0.014401 | 0.011308 | 0.012659 |
| convert_to_test.test | RUN | 0.285317 | 0.676477 | 0.953179 | 0.001744 | 0.001586 | 0.001623 |
| rot_mat_test.test | RUN | 0.424410 | 3.087492 | 3.071135 | 0.030384 | 0.030058 | 0.028967 |
| rot_quat_test.test | RUN | 0.245367 | 0.649043 | 0.664145 | 0.001748 | 0.001723 | 0.001596 |
| rotx_mat_test.test | RUN | 0.280498 | 0.828733 | 0.865297 | 0.001522 | 0.001695 | 0.001730 |
| rotx_quat_test.test | RUN | 0.249759 | 0.538081 | 0.606669 | 0.001434 | 0.001617 | 0.001727 |
| roty_mat_test.test | RUN | 0.258338 | 0.828956 | 0.842162 | 0.001578 | 0.001525 | 0.001570 |
| roty_quat_test.test | RUN | 0.229475 | 0.543501 | 0.617296 | 0.001286 | 0.001529 | 0.001709 |
| rotz_mat_test.test | RUN | 0.274893 | 0.925535 | 0.934149 | 0.001341 | 0.001354 | 0.001761 |
| rotz_quat_test.test | RUN | 0.231148 | 0.537069 | 0.613358 | 0.001526 | 0.001506 | 0.001379 |
| zero_vec_test.test | RUN | 0.190155 | 0.453040 | 0.539823 | 0.001536 | 0.001318 | 0.001670 |
| zero_mat_test.test | RUN | 0.235454 | 0.741006 | 0.732060 | 0.001360 | 0.001674 | 0.001559 |
| zero_quat_test.test | RUN | 0.180720 | 0.385186 | 0.512656 | 0.001424 | 0.001622 | 0.001519 |
| identity_mat_test.test | RUN | 0.219427 | 0.559276 | 0.679782 | 0.001446 | 0.001513 | 0.001684 |
| identity_quat_test.test | RUN | 0.188665 | 0.378380 | 0.513847 | 0.001561 | 0.001605 | 0.001610 |
| col_test.test | RUN | 0.347176 | 1.167094 | 1.459899 | 0.001327 | 0.001632 | 0.001680 |
| col_mat_test.test | RUN | 0.233438 | 0.538065 | 0.660318 | 0.001446 | 0.001646 | 0.001649 |
| neg_col_test.test | RUN | 0.265786 | 0.735540 | 0.881149 | 0.001497 | 0.001606 | 0.001667 |
| neg_row_test.test | RUN | 0.264703 | 0.755222 | 0.864016 | 0.001554 | 0.001633 | 0.001712 |
| del_col_test.test | RUN | 0.270348 | 0.829230 | 0.889184 | 0.001547 | 0.001648 | 0.001634 |
| del_row_test.test | RUN | 0.271512 | 0.821311 | 0.899650 | 0.001317 | 0.001704 | 0.001680 |
| del_row_col_test.test | RUN | 0.371036 | 1.504538 | 1.657950 | 0.001560 | 0.001611 | 0.001658 |
| swap_cols_test.test | RUN | 0.494218 | 2.028523 | 2.034827 | 0.001553 | 0.001686 | 0.001809 |
| swap_rows_test.test | RUN | 0.534661 | 2.100791 | 2.108203 | 0.001980 | 0.001309 | 0.001570 |
| diag_test.test | RUN | 0.230951 | 0.562458 | 0.770554 | 0.001190 | 0.001606 | 0.001465 |
| diag_mat_test.test | RUN | 0.251598 | 0.549984 | 0.701616 | 0.001510 | 0.001432 | 0.001518 |
| row_test.test | RUN | 0.341899 | 1.163501 | 1.470053 | 0.001560 | 0.001604 | 0.001734 |
| row_mat_test.test | RUN | 0.225045 | 0.540533 | 0.692931 | 0.001527 | 0.001380 | 0.001801 |
| transpose_test.test | RUN | 0.266796 | 0.792104 | 0.946077 | 0.001330 | 0.001657 | 0.001566 |
| translation_test.test | RUN | 0.222155 | 0.515231 | 0.716804 | 0.001339 | 0.001505 | 0.001502 |
| translation_mat_test.test | RUN | 0.248721 | 0.513325 | 0.725593 | 0.001424 | 0.001408 | 0.001329 |
| swizzle_const_fail.test | COMPILE_FAIL | 0.084789 | 0.144450 | 0.205882 | — | — | — |
| swizzle2_test2.test | RUN | 0.101971 | 0.228745 | 0.282400 | 0.001302 | 0.001306 | 0.001381 |
| swizzle2_test3.test | RUN | 0.104398 | 0.222560 | 0.285511 | 0.001379 | 0.001327 | 0.001361 |
| swizzle2_test4.test | RUN | 0.103017 | 0.220800 | 0.277694 | 0.001309 | 0.001696 | 0.001477 |
| swizzle2_test.test | RUN | 0.321761 | 0.610188 | 0.857860 | 0.001494 | 0.001639 | 0.001638 |
| swizzle3_test2.test | RUN | 0.113179 | 0.238457 | 0.312403 | 0.001439 | 0.001557 | 0.001500 |
| swizzle3_test3.test | RUN | 0.114461 | 0.239877 | 0.307341 | 0.001630 | 0.001303 | 0.001660 |
| swizzle3_test4.test | RUN | 0.113549 | 0.244098 | 0.307016 | 0.001364 | 0.001596 | 0.001529 |
| swizzle3_test.test | RUN | 0.306599 | 0.611898 | 0.841385 | 0.001389 | 0.001392 | 0.001520 |
| swizzle4_test2.test | RUN | 0.182152 | 0.331401 | 0.476266 | 0.001544 | 0.001667 | 0.001671 |
| swizzle4_test3.test | RUN | 0.182933 | 0.338815 | 0.485996 | 0.001401 | 0.001413 | 0.001611 |
| swizzle4_test4.test | RUN | 0.188116 | 0.346484 | 0.495036 | 0.001406 | 0.001552 | 0.001652 |
| swizzle4_test.test | RUN | 0.324079 | 0.663846 | 0.891330 | 0.001418 | 0.001635 | 0.001684 |
| deduce_scalar_test.test | COMPILE | 0.016554 | 0.034697 | 0.051212 | — | — | — |
| deduce_scalar_mq_test.test | RUN | 0.123228 | 0.259354 | 0.336045 | 0.001472 | 0.001439 | 0.001368 |
| deduce_scalar_mv_test.test | RUN | 0.147607 | 0.297290 | 0.388189 | 0.001374 | 0.001494 | 0.001384 |
| deduce_scalar_fail.test | COMPILE_FAIL | 0.013387 | 0.022388 | 0.044000 | — | — | — |
| deduce_mat_test.test | COMPILE | 0.014271 | 0.030900 | 0.046321 | — | — | — |
| deduce_quat_test.test | COMPILE | 0.014948 | 0.030695 | 0.043581 | — | — | — |
| deduce_vec_test.test | COMPILE | 0.015945 | 0.029795 | 0.048012 | — | — | — |
| interop_test.test | RUN | 0.147852 | 0.316700 | 0.551089 | 0.000511 | 0.000552 | 0.001133 |
| transform_test.test | RUN | 0.288883 | 0.555412 | 0.742669 | 0.001268 | 0.001115 | 0.001185 |
| projection_test.test | RUN | 0.198431 | 0.423955 | 0.502360 | 0.001231 | 0.001204 | 0.001129 |
| scalar_traits_test.test | COMPILE | 0.016264 | 0.031872 | 0.047241 | — | — | — |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.995× | 0.985×, 1.005× | 1.029× |
| clang | 0.968×† | 0.995×, 0.941× | 0.988× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1363 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43658654032).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| access_m_test.test | 10 | 0.000900s | 0.000879s | 0.000890s | byte equality observed |
| access_q_test.test | 10 | 0.000884s | 0.000872s | 0.000869s | byte equality observed |
| access_v_test.test | 10 | 0.000898s | 0.000901s | 0.000882s | byte equality observed |
| assign_test.test | 10 | 0.000908s | 0.000884s | 0.000882s | byte equality observed |
| cmp_mm_test.test | 10 | 0.000900s | 0.000903s | 0.000907s | byte equality observed |
| cmp_qq_test.test | 10 | 0.000895s | 0.000882s | 0.000925s | byte equality observed |
| cmp_vv_test.test | 10 | 0.000881s | 0.000875s | 0.000909s | byte equality observed |
| col_mat_test.test | 10 | 0.000895s | 0.000882s | 0.000904s | byte equality observed |
| col_test.test | 10 | 0.000894s | 0.000879s | 0.000927s | byte equality observed |
| conjugate_test.test | 10 | 0.000898s | 0.000907s | 0.000907s | byte equality observed |
| convert_to_test.test | 10 | 0.000884s | 0.000866s | 0.000894s | byte equality observed |
| cross_test.test | 10 | 0.000881s | 0.000861s | 0.000907s | byte equality observed |
| deduce_scalar_mq_test.test | 10 | 0.000902s | 0.000881s | 0.000895s | byte equality observed |
| deduce_scalar_mv_test.test | 10 | 0.000904s | 0.000881s | 0.000902s | byte equality observed |
| del_col_test.test | 10 | 0.000888s | 0.000884s | 0.000921s | byte equality observed |
| del_row_col_test.test | 10 | 0.000900s | 0.000881s | 0.000882s | byte equality observed |
| del_row_test.test | 10 | 0.000906s | 0.000882s | 0.000879s | byte equality observed |
| determinant_test.test | 10 | 0.000900s | 0.000920s | 0.000929s | byte equality observed |
| diag_mat_test.test | 10 | 0.000884s | 0.000905s | 0.000894s | byte equality observed |
| diag_test.test | 10 | 0.000885s | 0.000879s | 0.000868s | byte equality observed |
| div_eq_ms_test.test | 10 | 0.000872s | 0.000900s | 0.000879s | byte equality observed |
| div_eq_qs_test.test | 10 | 0.000871s | 0.000876s | 0.000913s | byte equality observed |
| div_eq_vs_test.test | 10 | 0.000873s | 0.000874s | 0.000894s | byte equality observed |
| div_ms_test.test | 10 | 0.000877s | 0.000901s | 0.000871s | byte equality observed |
| div_qs_test.test | 10 | 0.000878s | 0.000890s | 0.000885s | byte equality observed |
| div_vs_test.test | 10 | 0.000877s | 0.000876s | 0.000865s | byte equality observed |
| dot_qq_test.test | 10 | 0.000888s | 0.000893s | 0.000876s | byte equality observed |
| dot_vv_test.test | 10 | 0.000914s | 0.000901s | 0.000892s | byte equality observed |
| eq_mm_test.test | 10 | 0.000897s | 0.000913s | 0.000906s | byte equality observed |
| eq_qq_test.test | 10 | 0.000866s | 0.000885s | 0.000884s | byte equality observed |
| eq_vv_test.test | 10 | 0.000909s | 0.000883s | 0.000909s | byte equality observed |
| identity_mat_test.test | 10 | 0.000899s | 0.000880s | 0.000909s | byte equality observed |
| identity_quat_test.test | 10 | 0.000909s | 0.000894s | 0.000873s | byte equality observed |
| interop_test.test | 10 | 0.000414s | 0.000407s | 0.000898s | byte equality observed |
| inverse_m_test.test | 10 | 0.000939s | 0.000922s | 0.000926s | byte equality observed |
| inverse_q_test.test | 10 | 0.000910s | 0.000875s | 0.000926s | byte equality observed |
| mag_q_test.test | 10 | 0.000899s | 0.000864s | 0.000887s | byte equality observed |
| mag_sqr_q_test.test | 10 | 0.000889s | 0.000892s | 0.000910s | byte equality observed |
| mag_sqr_v_test.test | 10 | 0.000911s | 0.000896s | 0.000901s | byte equality observed |
| mag_v_test.test | 10 | 0.000921s | 0.000860s | 0.000890s | byte equality observed |
| mat_index_test.test | 10 | 0.000907s | 0.000877s | 0.000918s | byte equality observed |
| mat_traits_array_test.test | 10 | 0.000910s | 0.000888s | 0.000894s | byte equality observed |
| mat_traits_std_array_test.test | 10 | 0.000892s | 0.000855s | 0.000894s | byte equality observed |
| math_test.test | 10 | 0.001360s | 0.001280s | 0.001189s | byte equality observed |
| minus_eq_mm_test.test | 10 | 0.000889s | 0.000879s | 0.000923s | byte equality observed |
| minus_eq_qq_test.test | 10 | 0.000893s | 0.000885s | 0.000891s | byte equality observed |
| minus_eq_vv_test.test | 10 | 0.000893s | 0.000867s | 0.000890s | byte equality observed |
| minus_m_test.test | 10 | 0.000897s | 0.000919s | 0.000882s | byte equality observed |
| minus_mm_test.test | 10 | 0.000919s | 0.000876s | 0.000885s | byte equality observed |
| minus_q_test.test | 10 | 0.000902s | 0.000884s | 0.000884s | byte equality observed |
| minus_qq_test.test | 10 | 0.000890s | 0.000891s | 0.000886s | byte equality observed |
| minus_v_test.test | 10 | 0.000890s | 0.000878s | 0.000903s | byte equality observed |
| minus_vv_test.test | 10 | 0.000909s | 0.000884s | 0.000891s | byte equality observed |
| mul_eq_mm_test.test | 10 | 0.000927s | 0.000888s | 0.000907s | byte equality observed |
| mul_eq_ms_test.test | 10 | 0.000906s | 0.000897s | 0.000901s | byte equality observed |
| mul_eq_qq_test.test | 10 | 0.000915s | 0.000900s | 0.000904s | byte equality observed |
| mul_eq_qs_test.test | 10 | 0.000894s | 0.000888s | 0.000924s | byte equality observed |
| mul_eq_vs_test.test | 10 | 0.000919s | 0.000887s | 0.000900s | byte equality observed |
| mul_mm_test.test | 10 | 0.000915s | 0.000905s | 0.000886s | byte equality observed |
| mul_ms_test.test | 10 | 0.000910s | 0.000890s | 0.000890s | byte equality observed |
| mul_mv_test.test | 10 | 0.000899s | 0.000910s | 0.000905s | byte equality observed |
| mul_qq_test.test | 10 | 0.000931s | 0.000889s | 0.000904s | byte equality observed |
| mul_qs_test.test | 10 | 0.000887s | 0.000914s | 0.000884s | byte equality observed |
| mul_qv_test.test | 10 | 0.000903s | 0.000924s | 0.000904s | byte equality observed |
| mul_sm_test.test | 10 | 0.000943s | 0.000903s | 0.000892s | byte equality observed |
| mul_sv_test.test | 10 | 0.000906s | 0.000898s | 0.000873s | byte equality observed |
| mul_vm_test.test | 10 | 0.000894s | 0.000905s | 0.000886s | byte equality observed |
| mul_vs_test.test | 10 | 0.000895s | 0.000892s | 0.000906s | byte equality observed |
| neg_col_test.test | 10 | 0.000898s | 0.000898s | 0.000894s | byte equality observed |
| neg_row_test.test | 10 | 0.000918s | 0.000902s | 0.000883s | byte equality observed |
| normalize_q_test.test | 10 | 0.000911s | 0.000931s | 0.000905s | byte equality observed |
| normalize_v_test.test | 10 | 0.000922s | 0.000901s | 0.000879s | byte equality observed |
| plus_eq_mm_test.test | 10 | 0.000912s | 0.000929s | 0.000907s | byte equality observed |
| plus_eq_qq_test.test | 10 | 0.000903s | 0.000897s | 0.000924s | byte equality observed |
| plus_eq_vv_test.test | 10 | 0.000883s | 0.000905s | 0.000889s | byte equality observed |
| plus_mm_test.test | 10 | 0.000899s | 0.000888s | 0.000885s | byte equality observed |
| plus_qq_test.test | 10 | 0.000878s | 0.000914s | 0.000885s | byte equality observed |
| plus_vv_test.test | 10 | 0.000879s | 0.000924s | 0.000882s | byte equality observed |
| projection_test.test | 10 | 0.000911s | 0.000895s | 0.000897s | byte equality observed |
| quat_traits_array_test.test | 10 | 0.000889s | 0.000884s | 0.000898s | byte equality observed |
| quat_traits_std_array_test.test | 10 | 0.000874s | 0.000889s | 0.000886s | byte equality observed |
| rot_mat_test.test | 1 | 0.020360s | 0.021090s | 0.018810s | byte equality observed |
| rot_quat_test.test | 10 | 0.000875s | 0.000887s | 0.000896s | byte equality observed |
| rotx_mat_test.test | 10 | 0.000909s | 0.000900s | 0.000938s | byte equality observed |
| rotx_quat_test.test | 10 | 0.000923s | 0.000934s | 0.000885s | byte equality observed |
| roty_mat_test.test | 10 | 0.000929s | 0.000939s | 0.000928s | byte equality observed |
| roty_quat_test.test | 10 | 0.000907s | 0.000905s | 0.000908s | byte equality observed |
| rotz_mat_test.test | 10 | 0.000915s | 0.000918s | 0.000922s | byte equality observed |
| rotz_quat_test.test | 10 | 0.000924s | 0.000899s | 0.000907s | byte equality observed |
| row_mat_test.test | 10 | 0.000909s | 0.000936s | 0.000878s | byte equality observed |
| row_test.test | 10 | 0.000917s | 0.000914s | 0.000901s | byte equality observed |
| scalar_cast_m_test.test | 10 | 0.000893s | 0.000914s | 0.000896s | byte equality observed |
| scalar_cast_q_test.test | 10 | 0.000906s | 0.000908s | 0.000903s | byte equality observed |
| scalar_cast_v_test.test | 10 | 0.000872s | 0.000893s | 0.000854s | byte equality observed |
| slerp_test.test | 2 | 0.009964s | 0.007982s | 0.008764s | byte equality observed |
| swap_cols_test.test | 10 | 0.000886s | 0.000889s | 0.000876s | byte equality observed |
| swap_rows_test.test | 10 | 0.000919s | 0.000908s | 0.000876s | byte equality observed |
| swizzle2_test.test | 10 | 0.000906s | 0.000904s | 0.000913s | byte equality observed |
| swizzle2_test2.test | 10 | 0.000890s | 0.000908s | 0.000889s | byte equality observed |
| swizzle2_test3.test | 10 | 0.000926s | 0.000948s | 0.000912s | byte equality observed |
| swizzle2_test4.test | 10 | 0.000902s | 0.000907s | 0.000922s | byte equality observed |
| swizzle3_test.test | 10 | 0.000909s | 0.000898s | 0.000944s | byte equality observed |
| swizzle3_test2.test | 10 | 0.000892s | 0.000917s | 0.000934s | byte equality observed |
| swizzle3_test3.test | 10 | 0.000906s | 0.000914s | 0.000923s | byte equality observed |
| swizzle3_test4.test | 10 | 0.000894s | 0.000924s | 0.000919s | byte equality observed |
| swizzle4_test.test | 10 | 0.000900s | 0.000904s | 0.000922s | byte equality observed |
| swizzle4_test2.test | 10 | 0.000908s | 0.000902s | 0.000917s | byte equality observed |
| swizzle4_test3.test | 10 | 0.000906s | 0.000924s | 0.000917s | byte equality observed |
| swizzle4_test4.test | 10 | 0.000894s | 0.000900s | 0.000900s | byte equality observed |
| to_string_test.test | 10 | 0.000944s | 0.000954s | 0.000928s | byte equality observed |
| transform_test.test | 10 | 0.000926s | 0.000891s | 0.000909s | byte equality observed |
| translation_mat_test.test | 10 | 0.000907s | 0.000896s | 0.000889s | byte equality observed |
| translation_test.test | 10 | 0.000898s | 0.000905s | 0.000905s | byte equality observed |
| transpose_test.test | 10 | 0.000893s | 0.000896s | 0.000897s | byte equality observed |
| vec_index_test.test | 10 | 0.000914s | 0.000888s | 0.000892s | byte equality observed |
| vec_register_test.test | 10 | 0.000895s | 0.000904s | 0.000911s | byte equality observed |
| vec_traits_array_test.test | 10 | 0.000907s | 0.000895s | 0.000896s | byte equality observed |
| vec_traits_gnuc_test.test | 10 | 0.000887s | 0.000905s | 0.000904s | byte equality observed |
| vec_traits_std_array_test.test | 10 | 0.000894s | 0.000900s | 0.000898s | byte equality observed |
| zero_mat_test.test | 10 | 0.000904s | 0.000904s | 0.000880s | byte equality observed |
| zero_quat_test.test | 10 | 0.000901s | 0.000911s | 0.000911s | byte equality observed |
| zero_vec_test.test | 10 | 0.000918s | 0.000905s | 0.000897s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43658654032).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
