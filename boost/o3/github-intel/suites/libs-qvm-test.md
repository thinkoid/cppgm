# libs/qvm/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| math_test.test | RUN | 0.273155 | 0.773274 | 0.811133 | 0.002400 | 0.001980 | 0.002136 |
| mat_traits_array_test.test | RUN | 0.213838 | 0.751443 | 0.637029 | 0.001806 | 0.001459 | 0.001529 |
| mat_traits_std_array_test.test | RUN | 0.217662 | 0.594234 | 0.645868 | 0.001712 | 0.001592 | 0.001573 |
| vec_traits_array_test.test | RUN | 0.188310 | 0.595572 | 0.545270 | 0.001706 | 0.001678 | 0.001258 |
| vec_traits_gnuc_test.test | RUN | 0.348995 | 0.722770 | 1.020662 | 0.001518 | 0.001738 | 0.001552 |
| vec_traits_std_array_test.test | RUN | 0.192406 | 0.460891 | 0.549434 | 0.001641 | 0.001655 | 0.001490 |
| quat_traits_array_test.test | RUN | 0.179114 | 0.631012 | 0.546825 | 0.001424 | 0.001549 | 0.001666 |
| quat_traits_std_array_test.test | RUN | 0.178154 | 0.471751 | 0.535516 | 0.001542 | 0.001465 | 0.001620 |
| access_m_test.test | RUN | 0.296467 | 1.125163 | 1.228976 | 0.001682 | 0.001656 | 0.001535 |
| access_m_fail1.test | COMPILE_FAIL | 0.028344 | 0.049728 | 0.077605 | — | — | — |
| access_m_fail2.test | COMPILE_FAIL | 0.028752 | 0.047527 | 0.077962 | — | — | — |
| access_q_test.test | RUN | 0.244699 | 0.578232 | 0.687084 | 0.001640 | 0.001568 | 0.001639 |
| access_q_fail.test | COMPILE_FAIL | 0.022771 | 0.035762 | 0.064534 | — | — | — |
| access_v_test.test | RUN | 0.240055 | 0.588912 | 0.696484 | 0.001430 | 0.001554 | 0.001656 |
| access_v_fail1.test | COMPILE_FAIL | 0.019767 | 0.033516 | 0.055298 | — | — | — |
| access_v_fail2.test | COMPILE_FAIL | 0.018696 | 0.035241 | 0.057665 | — | — | — |
| assign_test.test | RUN | 0.377872 | 0.919458 | 1.300503 | 0.001690 | 0.001645 | 0.001530 |
| to_string_test.test | RUN | 0.445108 | 1.557952 | 7.687257 | 0.001553 | 0.001607 | 0.001553 |
| cmp_vv_test.test | RUN | 0.301300 | 0.755141 | 0.864873 | 0.001750 | 0.001697 | 0.001628 |
| cross_test.test | RUN | 0.296458 | 0.696438 | 0.853527 | 0.001576 | 0.001636 | 0.001596 |
| div_eq_vs_test.test | RUN | 0.277806 | 0.633466 | 0.831215 | 0.001643 | 0.001606 | 0.001523 |
| div_vs_test.test | RUN | 0.290780 | 0.792859 | 0.887488 | 0.001536 | 0.001564 | 0.001445 |
| dot_vv_test.test | RUN | 0.277320 | 0.705197 | 0.822202 | 0.001648 | 0.001634 | 0.001527 |
| eq_vv_test.test | RUN | 0.313455 | 0.798781 | 0.923005 | 0.001582 | 0.001627 | 0.001498 |
| mag_v_test.test | RUN | 0.275180 | 0.657644 | 0.795248 | 0.001752 | 0.001552 | 0.001353 |
| mag_sqr_v_test.test | RUN | 0.276593 | 0.648864 | 0.768877 | 0.001601 | 0.001914 | 0.001484 |
| minus_v_test.test | RUN | 0.285839 | 0.755794 | 0.873145 | 0.001305 | 0.001734 | 0.001528 |
| minus_eq_vv_test.test | RUN | 0.278439 | 0.735930 | 0.831307 | 0.001571 | 0.001541 | 0.001617 |
| minus_vv_test.test | RUN | 0.292038 | 0.808334 | 0.891656 | 0.001781 | 0.001672 | 0.001492 |
| mul_eq_vs_test.test | RUN | 0.277218 | 0.643385 | 0.840398 | 0.001548 | 0.001643 | 0.001572 |
| mul_vs_test.test | RUN | 0.288433 | 0.786851 | 0.876515 | 0.001458 | 0.001592 | 0.001541 |
| mul_sv_test.test | RUN | 0.297063 | 0.807530 | 0.894618 | 0.001664 | 0.001597 | 0.001537 |
| mul_vm_test.test | RUN | 0.406531 | 1.446959 | 1.398538 | 0.001617 | 0.001509 | 0.001605 |
| normalize_v_test.test | RUN | 0.297093 | 0.978817 | 0.855353 | 0.001540 | 0.001572 | 0.001558 |
| plus_eq_vv_test.test | RUN | 0.274488 | 0.743415 | 0.846077 | 0.001521 | 0.001468 | 0.001476 |
| plus_vv_test.test | RUN | 0.292388 | 0.797104 | 0.847045 | 0.001376 | 0.001680 | 0.001398 |
| scalar_cast_v_test.test | RUN | 0.269650 | 0.591470 | 0.748986 | 0.001463 | 0.001508 | 0.001455 |
| vec_index_test.test | RUN | 0.237627 | 0.608703 | 0.687509 | 0.001620 | 0.001600 | 0.001530 |
| vec_register_test.test | RUN | 0.159687 | 0.538924 | 0.520090 | 0.001769 | 0.001628 | 0.001707 |
| cmp_mm_test.test | RUN | 0.481142 | 1.773283 | 1.861918 | 0.001676 | 0.001721 | 0.001572 |
| determinant_test.test | RUN | 0.326399 | 0.896919 | 0.974390 | 0.001582 | 0.001619 | 0.001638 |
| div_eq_ms_test.test | RUN | 0.330347 | 0.833041 | 1.110057 | 0.001415 | 0.001613 | 0.001599 |
| div_ms_test.test | RUN | 0.391762 | 1.334723 | 1.351403 | 0.001519 | 0.001568 | 0.001679 |
| eq_mm_test.test | RUN | 0.449796 | 1.634684 | 1.756501 | 0.001473 | 0.001585 | 0.001598 |
| minus_m_test.test | RUN | 0.385570 | 1.298671 | 1.329788 | 0.001537 | 0.001703 | 0.001536 |
| minus_eq_mm_test.test | RUN | 0.367391 | 1.223767 | 1.246473 | 0.001632 | 0.001654 | 0.001598 |
| minus_mm_test.test | RUN | 0.412864 | 1.545353 | 1.466791 | 0.001640 | 0.001756 | 0.001558 |
| mul_eq_mm_test.test | RUN | 0.339936 | 1.139884 | 1.101299 | 0.001689 | 0.001499 | 0.001551 |
| mul_eq_ms_test.test | RUN | 0.348038 | 0.811393 | 1.116809 | 0.001790 | 0.001695 | 0.001529 |
| mul_mm_test.test | RUN | 0.503292 | 2.550854 | 1.820699 | 0.001659 | 0.001612 | 0.001519 |
| mul_ms_test.test | RUN | 0.390951 | 1.332395 | 1.420355 | 0.001536 | 0.001532 | 0.001497 |
| mul_sm_test.test | RUN | 0.398266 | 1.330977 | 1.404878 | 0.001739 | 0.001697 | 0.001572 |
| mul_mv_test.test | RUN | 0.415977 | 1.424672 | 1.391462 | 0.001514 | 0.001769 | 0.001521 |
| inverse_m_test.test | RUN | 0.573129 | 2.634660 | 2.003162 | 0.001748 | 0.001758 | 0.001481 |
| plus_eq_mm_test.test | RUN | 0.369990 | 1.221836 | 1.222426 | 0.001573 | 0.001571 | 0.001698 |
| plus_mm_test.test | RUN | 0.418143 | 1.530553 | 1.458761 | 0.001487 | 0.001726 | 0.001599 |
| scalar_cast_m_test.test | RUN | 0.317132 | 0.695426 | 0.885646 | 0.001516 | 0.001611 | 0.001670 |
| mat_index_test.test | RUN | 0.257528 | 0.660970 | 0.783811 | 0.001496 | 0.001585 | 0.001584 |
| cmp_qq_test.test | RUN | 0.272665 | 0.604943 | 0.743121 | 0.001627 | 0.001622 | 0.001648 |
| conjugate_test.test | RUN | 0.276309 | 0.625187 | 0.783575 | 0.001531 | 0.001716 | 0.001788 |
| normalize_q_test.test | RUN | 0.279441 | 0.700682 | 0.813431 | 0.001533 | 0.001424 | 0.001450 |
| div_eq_qs_test.test | RUN | 0.262885 | 0.603789 | 0.759500 | 0.001427 | 0.001545 | 0.001644 |
| div_qs_test.test | RUN | 0.264295 | 0.626053 | 0.779864 | 0.001776 | 0.001727 | 0.001610 |
| dot_qq_test.test | RUN | 0.273308 | 0.610764 | 0.805271 | 0.001533 | 0.001725 | 0.001616 |
| eq_qq_test.test | RUN | 0.273326 | 0.645323 | 0.808542 | 0.002017 | 0.001585 | 0.001423 |
| inverse_q_test.test | RUN | 0.321161 | 0.847537 | 0.996178 | 0.001450 | 0.001654 | 0.001712 |
| mag_q_test.test | RUN | 0.276880 | 0.619244 | 0.777762 | 0.001704 | 0.001600 | 0.001578 |
| mag_sqr_q_test.test | RUN | 0.268700 | 0.629229 | 0.775025 | 0.001461 | 0.001826 | 0.001450 |
| minus_q_test.test | RUN | 0.272031 | 0.632472 | 0.782929 | 0.001607 | 0.001798 | 0.001427 |
| minus_eq_qq_test.test | RUN | 0.268031 | 0.631765 | 0.770814 | 0.001540 | 0.001604 | 0.001509 |
| minus_qq_test.test | RUN | 0.269470 | 0.638052 | 0.782480 | 0.001639 | 0.001593 | 0.001513 |
| mul_eq_qs_test.test | RUN | 0.267175 | 0.604990 | 0.770809 | 0.001592 | 0.001643 | 0.001578 |
| mul_qs_test.test | RUN | 0.268548 | 0.625699 | 0.784876 | 0.001554 | 0.001711 | 0.001376 |
| mul_qv_test.test | RUN | 0.333386 | 0.860627 | 1.018216 | 0.001534 | 0.001607 | 0.001818 |
| mul_qq_test.test | RUN | 0.325593 | 0.867241 | 0.996327 | 0.001568 | 0.001596 | 0.001357 |
| mul_eq_qq_test.test | RUN | 0.322362 | 0.880748 | 0.971349 | 0.001675 | 0.001592 | 0.001578 |
| plus_eq_qq_test.test | RUN | 0.266846 | 0.624272 | 0.785011 | 0.001502 | 0.001616 | 0.001600 |
| plus_qq_test.test | RUN | 0.277120 | 0.635312 | 0.783799 | 0.001559 | 0.001733 | 0.001472 |
| scalar_cast_q_test.test | RUN | 0.268236 | 0.590066 | 0.773201 | 0.001622 | 0.001528 | 0.001401 |
| slerp_test.test | RUN | 0.303124 | 1.220933 | 0.942105 | 0.022575 | 0.018042 | 0.019134 |
| convert_to_test.test | RUN | 0.409830 | 1.111781 | 1.444272 | 0.001557 | 0.001524 | 0.001526 |
| rot_mat_test.test | RUN | 0.659915 | 5.219013 | 4.642784 | 0.039991 | 0.042523 | 0.048715 |
| rot_quat_test.test | RUN | 0.310775 | 1.017803 | 1.027005 | 0.001603 | 0.001739 | 0.001590 |
| rotx_mat_test.test | RUN | 0.381335 | 1.362306 | 1.344992 | 0.001829 | 0.001743 | 0.001616 |
| rotx_quat_test.test | RUN | 0.332915 | 0.867550 | 0.945419 | 0.001526 | 0.001614 | 0.001624 |
| roty_mat_test.test | RUN | 0.380943 | 1.367340 | 1.290598 | 0.001662 | 0.001778 | 0.001599 |
| roty_quat_test.test | RUN | 0.326966 | 0.862193 | 0.967722 | 0.001724 | 0.001736 | 0.001635 |
| rotz_mat_test.test | RUN | 0.401402 | 1.549432 | 1.435847 | 0.001719 | 0.001550 | 0.001727 |
| rotz_quat_test.test | RUN | 0.322382 | 0.859939 | 0.885225 | 0.001487 | 0.001649 | 0.001617 |
| zero_vec_test.test | RUN | 0.284145 | 0.756868 | 0.806689 | 0.001641 | 0.001628 | 0.001684 |
| zero_mat_test.test | RUN | 0.348842 | 1.225786 | 1.105835 | 0.001675 | 0.001656 | 0.001543 |
| zero_quat_test.test | RUN | 0.264681 | 0.618603 | 0.757674 | 0.001592 | 0.001672 | 0.001618 |
| identity_mat_test.test | RUN | 0.315255 | 0.916269 | 0.991646 | 0.001551 | 0.001518 | 0.001681 |
| identity_quat_test.test | RUN | 0.270326 | 0.606656 | 0.745402 | 0.001640 | 0.001691 | 0.001570 |
| col_test.test | RUN | 0.528556 | 1.941503 | 2.201252 | 0.001343 | 0.001714 | 0.001462 |
| col_mat_test.test | RUN | 0.337409 | 0.867329 | 1.023442 | 0.001545 | 0.001646 | 0.001575 |
| neg_col_test.test | RUN | 0.398688 | 1.223786 | 1.353283 | 0.001527 | 0.001686 | 0.001592 |
| neg_row_test.test | RUN | 0.398025 | 1.224171 | 1.328256 | 0.001543 | 0.001782 | 0.001579 |
| del_col_test.test | RUN | 0.419398 | 1.357267 | 1.378232 | 0.001551 | 0.001664 | 0.001608 |
| del_row_test.test | RUN | 0.419158 | 1.341701 | 1.390823 | 0.001575 | 0.001646 | 0.001675 |
| del_row_col_test.test | RUN | 0.581995 | 2.547625 | 2.580811 | 0.001616 | 0.001643 | 0.001653 |
| swap_cols_test.test | RUN | 0.785380 | 3.421145 | 3.188313 | 0.001740 | 0.001749 | 0.001892 |
| swap_rows_test.test | RUN | 0.869186 | 3.569101 | 3.135119 | 0.001604 | 0.001533 | 0.001460 |
| diag_test.test | RUN | 0.352904 | 0.902179 | 1.161657 | 0.001561 | 0.001652 | 0.001445 |
| diag_mat_test.test | RUN | 0.350660 | 0.895365 | 1.047606 | 0.001594 | 0.001766 | 0.001461 |
| row_test.test | RUN | 0.522666 | 1.901921 | 2.167566 | 0.001502 | 0.001685 | 0.001622 |
| row_mat_test.test | RUN | 0.336570 | 0.845215 | 1.027908 | 0.001503 | 0.001765 | 0.001599 |
| transpose_test.test | RUN | 0.404469 | 1.323033 | 1.395457 | 0.001598 | 0.001542 | 0.001536 |
| translation_test.test | RUN | 0.330450 | 0.825930 | 1.036442 | 0.001591 | 0.001584 | 0.001528 |
| translation_mat_test.test | RUN | 0.350034 | 0.820523 | 1.118889 | 0.001873 | 0.001439 | 0.001431 |
| swizzle_const_fail.test | COMPILE_FAIL | 0.119285 | 0.239136 | 0.314052 | — | — | — |
| swizzle2_test2.test | RUN | 0.145035 | 0.354232 | 0.406895 | 0.001425 | 0.001648 | 0.001538 |
| swizzle2_test3.test | RUN | 0.142348 | 0.358168 | 0.411790 | 0.001448 | 0.001678 | 0.001548 |
| swizzle2_test4.test | RUN | 0.146402 | 0.353907 | 0.403894 | 0.001589 | 0.001646 | 0.001631 |
| swizzle2_test.test | RUN | 0.468964 | 0.992663 | 1.316226 | 0.001450 | 0.001586 | 0.001614 |
| swizzle3_test2.test | RUN | 0.160028 | 0.379179 | 0.453990 | 0.001422 | 0.001677 | 0.001557 |
| swizzle3_test3.test | RUN | 0.160516 | 0.383006 | 0.453937 | 0.001480 | 0.001627 | 0.001622 |
| swizzle3_test4.test | RUN | 0.165320 | 0.393528 | 0.457355 | 0.001576 | 0.001782 | 0.001846 |
| swizzle3_test.test | RUN | 0.444964 | 1.007073 | 1.325922 | 0.001825 | 0.001586 | 0.001484 |
| swizzle4_test2.test | RUN | 0.276686 | 0.557169 | 0.754565 | 0.001526 | 0.001545 | 0.001602 |
| swizzle4_test3.test | RUN | 0.270046 | 0.546643 | 0.765691 | 0.001597 | 0.001762 | 0.001588 |
| swizzle4_test4.test | RUN | 0.272152 | 0.554807 | 0.733991 | 0.001400 | 0.001451 | 0.001640 |
| swizzle4_test.test | RUN | 0.454802 | 1.106512 | 1.392497 | 0.001462 | 0.001662 | 0.001503 |
| deduce_scalar_test.test | COMPILE | 0.023710 | 0.052436 | 0.072156 | — | — | — |
| deduce_scalar_mq_test.test | RUN | 0.172634 | 0.416381 | 0.505772 | 0.001502 | 0.001607 | 0.001590 |
| deduce_scalar_mv_test.test | RUN | 0.212209 | 0.491594 | 0.582715 | 0.001500 | 0.001604 | 0.001475 |
| deduce_scalar_fail.test | COMPILE_FAIL | 0.018663 | 0.033999 | 0.055852 | — | — | — |
| deduce_mat_test.test | COMPILE | 0.019996 | 0.046539 | 0.065172 | — | — | — |
| deduce_quat_test.test | COMPILE | 0.020083 | 0.044007 | 0.059839 | — | — | — |
| deduce_vec_test.test | COMPILE | 0.020897 | 0.044559 | 0.061924 | — | — | — |
| interop_test.test | RUN | 0.218623 | 0.610452 | 0.786476 | 0.000830 | 0.000824 | 0.001195 |
| transform_test.test | RUN | 0.354143 | 0.888862 | 1.181012 | 0.001143 | 0.001075 | 0.001135 |
| projection_test.test | RUN | 0.266473 | 0.647531 | 0.862260 | 0.001162 | 0.001170 | 0.001193 |
| scalar_traits_test.test | COMPILE | 0.021484 | 0.047068 | 0.065794 | — | — | — |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 1.000× | 1.008×, 0.992× | 1.009× |
| clang | 1.048× | 1.044×, 1.052× | 0.992× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1361 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44260407509).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| access_m_test.test | 10 | 0.001020s | 0.001039s | 0.001027s | byte equality observed |
| access_q_test.test | 10 | 0.001040s | 0.001058s | 0.001023s | byte equality observed |
| access_v_test.test | 10 | 0.001050s | 0.001049s | 0.001060s | byte equality observed |
| assign_test.test | 10 | 0.001047s | 0.001075s | 0.001028s | byte equality observed |
| cmp_mm_test.test | 10 | 0.001080s | 0.001056s | 0.001030s | byte equality observed |
| cmp_qq_test.test | 10 | 0.001014s | 0.001051s | 0.001047s | byte equality observed |
| cmp_vv_test.test | 10 | 0.001044s | 0.001045s | 0.001078s | byte equality observed |
| col_mat_test.test | 10 | 0.001021s | 0.001036s | 0.001069s | byte equality observed |
| col_test.test | 10 | 0.001075s | 0.001028s | 0.001057s | byte equality observed |
| conjugate_test.test | 10 | 0.001007s | 0.001073s | 0.001057s | byte equality observed |
| convert_to_test.test | 10 | 0.001057s | 0.001060s | 0.001059s | byte equality observed |
| cross_test.test | 10 | 0.001040s | 0.001053s | 0.001032s | byte equality observed |
| deduce_scalar_mq_test.test | 10 | 0.001039s | 0.001056s | 0.001020s | byte equality observed |
| deduce_scalar_mv_test.test | 10 | 0.001063s | 0.001044s | 0.001027s | byte equality observed |
| del_col_test.test | 10 | 0.001039s | 0.001065s | 0.001016s | byte equality observed |
| del_row_col_test.test | 10 | 0.001053s | 0.001050s | 0.001047s | byte equality observed |
| del_row_test.test | 10 | 0.001040s | 0.001009s | 0.001044s | byte equality observed |
| determinant_test.test | 10 | 0.001020s | 0.001045s | 0.001062s | byte equality observed |
| diag_mat_test.test | 10 | 0.001057s | 0.001011s | 0.001055s | byte equality observed |
| diag_test.test | 10 | 0.001033s | 0.001056s | 0.001048s | byte equality observed |
| div_eq_ms_test.test | 10 | 0.001012s | 0.001038s | 0.001081s | byte equality observed |
| div_eq_qs_test.test | 10 | 0.001035s | 0.001017s | 0.001060s | byte equality observed |
| div_eq_vs_test.test | 10 | 0.001014s | 0.001068s | 0.001058s | byte equality observed |
| div_ms_test.test | 10 | 0.001019s | 0.001035s | 0.001082s | byte equality observed |
| div_qs_test.test | 10 | 0.001056s | 0.001037s | 0.001071s | byte equality observed |
| div_vs_test.test | 10 | 0.001009s | 0.001062s | 0.001048s | byte equality observed |
| dot_qq_test.test | 10 | 0.001065s | 0.001030s | 0.001015s | byte equality observed |
| dot_vv_test.test | 10 | 0.001023s | 0.001063s | 0.001016s | byte equality observed |
| eq_mm_test.test | 10 | 0.001054s | 0.001104s | 0.001053s | byte equality observed |
| eq_qq_test.test | 10 | 0.001052s | 0.001062s | 0.001040s | byte equality observed |
| eq_vv_test.test | 10 | 0.001069s | 0.001047s | 0.001079s | byte equality observed |
| identity_mat_test.test | 10 | 0.001051s | 0.001053s | 0.001025s | byte equality observed |
| identity_quat_test.test | 10 | 0.001047s | 0.001055s | 0.001070s | byte equality observed |
| interop_test.test | 10 | 0.000469s | 0.000475s | 0.001036s | byte equality observed |
| inverse_m_test.test | 10 | 0.001111s | 0.001086s | 0.001070s | byte equality observed |
| inverse_q_test.test | 10 | 0.001041s | 0.001028s | 0.001051s | byte equality observed |
| mag_q_test.test | 10 | 0.001037s | 0.001068s | 0.001036s | byte equality observed |
| mag_sqr_q_test.test | 10 | 0.001061s | 0.001057s | 0.001034s | byte equality observed |
| mag_sqr_v_test.test | 10 | 0.001058s | 0.001021s | 0.001039s | byte equality observed |
| mag_v_test.test | 10 | 0.001088s | 0.001043s | 0.001042s | byte equality observed |
| mat_index_test.test | 10 | 0.001056s | 0.001021s | 0.001041s | byte equality observed |
| mat_traits_array_test.test | 10 | 0.001053s | 0.001062s | 0.001032s | byte equality observed |
| mat_traits_std_array_test.test | 10 | 0.001011s | 0.001029s | 0.001022s | byte equality observed |
| math_test.test | 10 | 0.001578s | 0.001526s | 0.001402s | byte equality observed |
| minus_eq_mm_test.test | 10 | 0.001040s | 0.001037s | 0.001020s | byte equality observed |
| minus_eq_qq_test.test | 10 | 0.001051s | 0.001022s | 0.001001s | byte equality observed |
| minus_eq_vv_test.test | 10 | 0.001017s | 0.001040s | 0.001008s | byte equality observed |
| minus_m_test.test | 10 | 0.001042s | 0.001052s | 0.001015s | byte equality observed |
| minus_mm_test.test | 10 | 0.001039s | 0.001011s | 0.001025s | byte equality observed |
| minus_q_test.test | 10 | 0.001029s | 0.001038s | 0.001014s | byte equality observed |
| minus_qq_test.test | 10 | 0.001029s | 0.001040s | 0.001029s | byte equality observed |
| minus_v_test.test | 10 | 0.001055s | 0.001062s | 0.001047s | byte equality observed |
| minus_vv_test.test | 10 | 0.001045s | 0.001033s | 0.001062s | byte equality observed |
| mul_eq_mm_test.test | 10 | 0.001038s | 0.001086s | 0.001025s | byte equality observed |
| mul_eq_ms_test.test | 10 | 0.001004s | 0.001053s | 0.001076s | byte equality observed |
| mul_eq_qq_test.test | 10 | 0.001070s | 0.001047s | 0.001056s | byte equality observed |
| mul_eq_qs_test.test | 10 | 0.001068s | 0.001033s | 0.001042s | byte equality observed |
| mul_eq_vs_test.test | 10 | 0.001052s | 0.001057s | 0.001013s | byte equality observed |
| mul_mm_test.test | 10 | 0.001071s | 0.001025s | 0.001028s | byte equality observed |
| mul_ms_test.test | 10 | 0.001046s | 0.001037s | 0.000999s | byte equality observed |
| mul_mv_test.test | 10 | 0.001054s | 0.001080s | 0.001077s | byte equality observed |
| mul_qq_test.test | 10 | 0.001043s | 0.001036s | 0.001020s | byte equality observed |
| mul_qs_test.test | 10 | 0.001035s | 0.001052s | 0.001048s | byte equality observed |
| mul_qv_test.test | 10 | 0.001042s | 0.001085s | 0.001081s | byte equality observed |
| mul_sm_test.test | 10 | 0.001034s | 0.001020s | 0.001060s | byte equality observed |
| mul_sv_test.test | 10 | 0.001053s | 0.001060s | 0.001032s | byte equality observed |
| mul_vm_test.test | 10 | 0.001048s | 0.001094s | 0.001101s | byte equality observed |
| mul_vs_test.test | 10 | 0.001017s | 0.001039s | 0.001020s | byte equality observed |
| neg_col_test.test | 10 | 0.001049s | 0.001057s | 0.001015s | byte equality observed |
| neg_row_test.test | 10 | 0.001051s | 0.001056s | 0.001023s | byte equality observed |
| normalize_q_test.test | 10 | 0.001045s | 0.001032s | 0.001017s | byte equality observed |
| normalize_v_test.test | 10 | 0.001074s | 0.001071s | 0.001046s | byte equality observed |
| plus_eq_mm_test.test | 10 | 0.001043s | 0.001028s | 0.001090s | byte equality observed |
| plus_eq_qq_test.test | 10 | 0.001045s | 0.001042s | 0.001037s | byte equality observed |
| plus_eq_vv_test.test | 10 | 0.001028s | 0.001071s | 0.001030s | byte equality observed |
| plus_mm_test.test | 10 | 0.001050s | 0.001031s | 0.001081s | byte equality observed |
| plus_qq_test.test | 10 | 0.001055s | 0.001008s | 0.001066s | byte equality observed |
| plus_vv_test.test | 10 | 0.001039s | 0.001028s | 0.001035s | byte equality observed |
| projection_test.test | 10 | 0.001058s | 0.001073s | 0.001012s | byte equality observed |
| quat_traits_array_test.test | 10 | 0.001028s | 0.001046s | 0.001037s | byte equality observed |
| quat_traits_std_array_test.test | 10 | 0.000982s | 0.001042s | 0.001036s | byte equality observed |
| rot_mat_test.test | 1 | 0.027772s | 0.029695s | 0.033695s | byte equality observed |
| rot_quat_test.test | 10 | 0.000961s | 0.000984s | 0.000996s | byte equality observed |
| rotx_mat_test.test | 10 | 0.001028s | 0.001021s | 0.001016s | byte equality observed |
| rotx_quat_test.test | 10 | 0.001070s | 0.001041s | 0.001063s | byte equality observed |
| roty_mat_test.test | 10 | 0.001065s | 0.001021s | 0.001055s | byte equality observed |
| roty_quat_test.test | 10 | 0.001077s | 0.001090s | 0.001063s | byte equality observed |
| rotz_mat_test.test | 10 | 0.001073s | 0.001091s | 0.001042s | byte equality observed |
| rotz_quat_test.test | 10 | 0.001070s | 0.001031s | 0.001046s | byte equality observed |
| row_mat_test.test | 10 | 0.001023s | 0.001043s | 0.001036s | byte equality observed |
| row_test.test | 10 | 0.001065s | 0.001032s | 0.001037s | byte equality observed |
| scalar_cast_m_test.test | 10 | 0.001032s | 0.001037s | 0.001026s | byte equality observed |
| scalar_cast_q_test.test | 10 | 0.001050s | 0.001037s | 0.001052s | byte equality observed |
| scalar_cast_v_test.test | 10 | 0.000988s | 0.000975s | 0.001011s | byte equality observed |
| slerp_test.test | 2 | 0.014704s | 0.012586s | 0.013442s | byte equality observed |
| swap_cols_test.test | 10 | 0.000975s | 0.000978s | 0.000982s | byte equality observed |
| swap_rows_test.test | 10 | 0.001027s | 0.001025s | 0.001002s | byte equality observed |
| swizzle2_test.test | 10 | 0.001022s | 0.001044s | 0.001052s | byte equality observed |
| swizzle2_test2.test | 10 | 0.001027s | 0.001004s | 0.001067s | byte equality observed |
| swizzle2_test3.test | 10 | 0.001046s | 0.000999s | 0.001073s | byte equality observed |
| swizzle2_test4.test | 10 | 0.001057s | 0.001047s | 0.001147s | byte equality observed |
| swizzle3_test.test | 10 | 0.001048s | 0.001008s | 0.001144s | byte equality observed |
| swizzle3_test2.test | 10 | 0.001087s | 0.001052s | 0.001116s | byte equality observed |
| swizzle3_test3.test | 10 | 0.001048s | 0.001099s | 0.001175s | byte equality observed |
| swizzle3_test4.test | 10 | 0.001067s | 0.001068s | 0.001161s | byte equality observed |
| swizzle4_test.test | 10 | 0.001055s | 0.001037s | 0.001198s | byte equality observed |
| swizzle4_test2.test | 10 | 0.001076s | 0.001045s | 0.001201s | byte equality observed |
| swizzle4_test3.test | 10 | 0.001057s | 0.001054s | 0.001185s | byte equality observed |
| swizzle4_test4.test | 10 | 0.001024s | 0.001024s | 0.001210s | byte equality observed |
| to_string_test.test | 10 | 0.001058s | 0.001096s | 0.001241s | byte equality observed |
| transform_test.test | 10 | 0.001040s | 0.001078s | 0.001178s | byte equality observed |
| translation_mat_test.test | 10 | 0.001053s | 0.001035s | 0.001173s | byte equality observed |
| translation_test.test | 10 | 0.001089s | 0.001034s | 0.001171s | byte equality observed |
| transpose_test.test | 10 | 0.001043s | 0.001041s | 0.001202s | byte equality observed |
| vec_index_test.test | 10 | 0.001032s | 0.001023s | 0.001201s | byte equality observed |
| vec_register_test.test | 10 | 0.001046s | 0.001033s | 0.001200s | byte equality observed |
| vec_traits_array_test.test | 10 | 0.001022s | 0.001026s | 0.001193s | byte equality observed |
| vec_traits_gnuc_test.test | 10 | 0.001029s | 0.001039s | 0.001196s | byte equality observed |
| vec_traits_std_array_test.test | 10 | 0.001017s | 0.001085s | 0.001215s | byte equality observed |
| zero_mat_test.test | 10 | 0.001043s | 0.001154s | 0.001203s | byte equality observed |
| zero_quat_test.test | 10 | 0.001014s | 0.001056s | 0.001205s | byte equality observed |
| zero_vec_test.test | 10 | 0.001038s | 0.001082s | 0.001174s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44260407509).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
