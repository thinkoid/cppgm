# libs/qvm/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| math_test.test | RUN | 0.246271 | 0.638438 | 0.772052 | 0.002114 | 0.001900 | 0.002210 |
| mat_traits_array_test.test | RUN | 0.190982 | 0.634429 | 0.613248 | 0.001626 | 0.001731 | 0.001510 |
| mat_traits_std_array_test.test | RUN | 0.196517 | 0.498735 | 0.621715 | 0.001704 | 0.001545 | 0.001319 |
| vec_traits_array_test.test | RUN | 0.172853 | 0.492332 | 0.537253 | 0.001652 | 0.001825 | 0.001394 |
| vec_traits_gnuc_test.test | RUN | 0.303202 | 0.621342 | 1.037095 | 0.001551 | 0.001562 | 0.001614 |
| vec_traits_std_array_test.test | RUN | 0.165483 | 0.395465 | 0.531009 | 0.001779 | 0.001624 | 0.001536 |
| quat_traits_array_test.test | RUN | 0.162515 | 0.498372 | 0.495727 | 0.001741 | 0.001659 | 0.001442 |
| quat_traits_std_array_test.test | RUN | 0.162985 | 0.380508 | 0.505088 | 0.001436 | 0.001579 | 0.001776 |
| access_m_test.test | RUN | 0.264913 | 0.950237 | 1.125663 | 0.001516 | 0.001862 | 0.001653 |
| access_m_fail1.test | COMPILE_FAIL | 0.025901 | 0.042768 | 0.089392 | — | — | — |
| access_m_fail2.test | COMPILE_FAIL | 0.025053 | 0.043791 | 0.086016 | — | — | — |
| access_q_test.test | RUN | 0.217170 | 0.441917 | 0.675723 | 0.001568 | 0.001714 | 0.001778 |
| access_q_fail.test | COMPILE_FAIL | 0.020404 | 0.032030 | 0.064713 | — | — | — |
| access_v_test.test | RUN | 0.217343 | 0.504441 | 0.684722 | 0.001503 | 0.001888 | 0.001668 |
| access_v_fail1.test | COMPILE_FAIL | 0.018595 | 0.031926 | 0.060902 | — | — | — |
| access_v_fail2.test | COMPILE_FAIL | 0.017944 | 0.031881 | 0.057500 | — | — | — |
| assign_test.test | RUN | 0.331078 | 0.785534 | 1.192599 | 0.001716 | 0.001832 | 0.001772 |
| to_string_test.test | RUN | 0.378721 | 1.283832 | 6.963747 | 0.001579 | 0.001906 | 0.001940 |
| cmp_vv_test.test | RUN | 0.269786 | 0.655466 | 0.847710 | 0.001736 | 0.001668 | 0.001742 |
| cross_test.test | RUN | 0.264279 | 0.576614 | 0.850202 | 0.001381 | 0.001777 | 0.001855 |
| div_eq_vs_test.test | RUN | 0.252400 | 0.542021 | 0.794974 | 0.001747 | 0.001699 | 0.001771 |
| div_vs_test.test | RUN | 0.263042 | 0.642795 | 0.838937 | 0.001664 | 0.001868 | 0.001861 |
| dot_vv_test.test | RUN | 0.253236 | 0.601753 | 0.795031 | 0.001355 | 0.001726 | 0.001632 |
| eq_vv_test.test | RUN | 0.282621 | 0.663676 | 0.871496 | 0.001563 | 0.001662 | 0.001634 |
| mag_v_test.test | RUN | 0.251848 | 0.540813 | 0.737673 | 0.001857 | 0.001461 | 0.001680 |
| mag_sqr_v_test.test | RUN | 0.244338 | 0.543435 | 0.781223 | 0.001545 | 0.001602 | 0.001550 |
| minus_v_test.test | RUN | 0.251028 | 0.634243 | 0.851605 | 0.001492 | 0.001703 | 0.001594 |
| minus_eq_vv_test.test | RUN | 0.260398 | 0.629596 | 0.841558 | 0.001363 | 0.001724 | 0.001782 |
| minus_vv_test.test | RUN | 0.264744 | 0.686589 | 0.815432 | 0.001685 | 0.001844 | 0.001746 |
| mul_eq_vs_test.test | RUN | 0.250110 | 0.537428 | 0.836052 | 0.001498 | 0.001860 | 0.001672 |
| mul_vs_test.test | RUN | 0.268107 | 0.672083 | 0.889817 | 0.001504 | 0.001898 | 0.001649 |
| mul_sv_test.test | RUN | 0.264277 | 0.674302 | 0.837292 | 0.001416 | 0.001813 | 0.001655 |
| mul_vm_test.test | RUN | 0.354572 | 1.181022 | 1.383419 | 0.001465 | 0.001824 | 0.001851 |
| normalize_v_test.test | RUN | 0.266910 | 0.809929 | 0.931847 | 0.001771 | 0.001759 | 0.001838 |
| plus_eq_vv_test.test | RUN | 0.255823 | 0.618741 | 0.780719 | 0.001494 | 0.001751 | 0.001661 |
| plus_vv_test.test | RUN | 0.265648 | 0.673547 | 0.831601 | 0.001479 | 0.001803 | 0.001806 |
| scalar_cast_v_test.test | RUN | 0.245099 | 0.497006 | 0.742175 | 0.001475 | 0.001736 | 0.001595 |
| vec_index_test.test | RUN | 0.213332 | 0.523441 | 0.671275 | 0.001409 | 0.001886 | 0.001612 |
| vec_register_test.test | RUN | 0.143843 | 0.455165 | 0.478104 | 0.001731 | 0.001575 | 0.001888 |
| cmp_mm_test.test | RUN | 0.417551 | 1.451984 | 1.657130 | 0.001813 | 0.001692 | 0.001472 |
| determinant_test.test | RUN | 0.290777 | 0.739576 | 0.929475 | 0.001732 | 0.001706 | 0.001842 |
| div_eq_ms_test.test | RUN | 0.303663 | 0.697139 | 1.063558 | 0.001615 | 0.001745 | 0.001760 |
| div_ms_test.test | RUN | 0.349009 | 1.096128 | 1.300009 | 0.001682 | 0.001523 | 0.001506 |
| eq_mm_test.test | RUN | 0.403611 | 1.341045 | 1.611734 | 0.001824 | 0.001710 | 0.001466 |
| minus_m_test.test | RUN | 0.350365 | 1.087052 | 1.253642 | 0.001612 | 0.001794 | 0.001478 |
| minus_eq_mm_test.test | RUN | 0.328345 | 1.000129 | 1.191927 | 0.001566 | 0.001801 | 0.001808 |
| minus_mm_test.test | RUN | 0.366232 | 1.259350 | 1.400908 | 0.001764 | 0.001873 | 0.001764 |
| mul_eq_mm_test.test | RUN | 0.304546 | 0.941521 | 1.038330 | 0.001767 | 0.001588 | 0.001782 |
| mul_eq_ms_test.test | RUN | 0.297656 | 0.701773 | 1.038676 | 0.001692 | 0.001614 | 0.001572 |
| mul_mm_test.test | RUN | 0.412642 | 2.087297 | 1.721521 | 0.001801 | 0.001938 | 0.001870 |
| mul_ms_test.test | RUN | 0.349627 | 1.136780 | 1.333081 | 0.001549 | 0.001902 | 0.001902 |
| mul_sm_test.test | RUN | 0.354463 | 1.102431 | 1.327525 | 0.001712 | 0.001721 | 0.001659 |
| mul_mv_test.test | RUN | 0.357214 | 1.187821 | 1.325215 | 0.001605 | 0.001670 | 0.001520 |
| inverse_m_test.test | RUN | 0.473408 | 2.134098 | 1.845121 | 0.001775 | 0.001546 | 0.001940 |
| plus_eq_mm_test.test | RUN | 0.322764 | 1.006991 | 1.167174 | 0.001460 | 0.001766 | 0.001854 |
| plus_mm_test.test | RUN | 0.371263 | 1.269834 | 1.367576 | 0.001676 | 0.001828 | 0.001690 |
| scalar_cast_m_test.test | RUN | 0.281764 | 0.585880 | 0.874726 | 0.001776 | 0.001650 | 0.001554 |
| mat_index_test.test | RUN | 0.227983 | 0.552650 | 0.759535 | 0.001727 | 0.001577 | 0.001787 |
| cmp_qq_test.test | RUN | 0.247922 | 0.506900 | 0.728035 | 0.001773 | 0.001742 | 0.001825 |
| conjugate_test.test | RUN | 0.249046 | 0.529581 | 0.768535 | 0.001659 | 0.001888 | 0.001738 |
| normalize_q_test.test | RUN | 0.247085 | 0.595770 | 0.747159 | 0.001748 | 0.001820 | 0.001779 |
| div_eq_qs_test.test | RUN | 0.244355 | 0.493753 | 0.736323 | 0.001457 | 0.001657 | 0.001838 |
| div_qs_test.test | RUN | 0.246921 | 0.550457 | 0.717613 | 0.001774 | 0.001644 | 0.001856 |
| dot_qq_test.test | RUN | 0.247558 | 0.517828 | 0.768461 | 0.001688 | 0.001822 | 0.001753 |
| eq_qq_test.test | RUN | 0.255033 | 0.543378 | 0.794322 | 0.001734 | 0.001742 | 0.001764 |
| inverse_q_test.test | RUN | 0.298959 | 0.707293 | 0.958033 | 0.001738 | 0.001678 | 0.001798 |
| mag_q_test.test | RUN | 0.252073 | 0.530497 | 0.703636 | 0.001600 | 0.001523 | 0.001770 |
| mag_sqr_q_test.test | RUN | 0.248777 | 0.528896 | 0.738350 | 0.001687 | 0.001855 | 0.001797 |
| minus_q_test.test | RUN | 0.251490 | 0.525643 | 0.750575 | 0.001642 | 0.001795 | 0.001760 |
| minus_eq_qq_test.test | RUN | 0.247824 | 0.521764 | 0.753034 | 0.001610 | 0.001708 | 0.001760 |
| minus_qq_test.test | RUN | 0.249453 | 0.551080 | 0.722038 | 0.001531 | 0.001737 | 0.001645 |
| mul_eq_qs_test.test | RUN | 0.247762 | 0.494506 | 0.733636 | 0.001716 | 0.001848 | 0.001790 |
| mul_qs_test.test | RUN | 0.242835 | 0.529532 | 0.701033 | 0.001776 | 0.001870 | 0.001782 |
| mul_qv_test.test | RUN | 0.299971 | 0.736779 | 1.000318 | 0.001664 | 0.001613 | 0.001524 |
| mul_qq_test.test | RUN | 0.296084 | 0.755687 | 0.965231 | 0.001781 | 0.001821 | 0.001534 |
| mul_eq_qq_test.test | RUN | 0.288943 | 0.731704 | 0.911689 | 0.001760 | 0.001810 | 0.001820 |
| plus_eq_qq_test.test | RUN | 0.248333 | 0.538194 | 0.737779 | 0.001789 | 0.001833 | 0.001764 |
| plus_qq_test.test | RUN | 0.253061 | 0.528379 | 0.733850 | 0.001599 | 0.001908 | 0.001787 |
| scalar_cast_q_test.test | RUN | 0.249257 | 0.495748 | 0.766477 | 0.001604 | 0.001851 | 0.001490 |
| slerp_test.test | RUN | 0.274076 | 1.001680 | 0.894190 | 0.018102 | 0.014656 | 0.015632 |
| convert_to_test.test | RUN | 0.367785 | 0.931343 | 1.368055 | 0.001786 | 0.001617 | 0.001736 |
| rot_mat_test.test | RUN | 0.548506 | 4.176567 | 4.134934 | 0.043216 | 0.037613 | 0.035849 |
| rot_quat_test.test | RUN | 0.302398 | 0.847526 | 0.917331 | 0.001831 | 0.001896 | 0.001856 |
| rotx_mat_test.test | RUN | 0.338717 | 1.130339 | 1.257228 | 0.001524 | 0.001795 | 0.001938 |
| rotx_quat_test.test | RUN | 0.300010 | 0.724820 | 0.918068 | 0.001753 | 0.001751 | 0.001816 |
| roty_mat_test.test | RUN | 0.338292 | 1.136233 | 1.194732 | 0.001594 | 0.001814 | 0.001852 |
| roty_quat_test.test | RUN | 0.291374 | 0.742402 | 0.909950 | 0.001813 | 0.001916 | 0.001819 |
| rotz_mat_test.test | RUN | 0.346309 | 1.271975 | 1.340861 | 0.001737 | 0.001743 | 0.001944 |
| rotz_quat_test.test | RUN | 0.296730 | 0.736080 | 0.860280 | 0.001746 | 0.001720 | 0.001737 |
| zero_vec_test.test | RUN | 0.258548 | 0.638502 | 0.765571 | 0.002045 | 0.001828 | 0.001831 |
| zero_mat_test.test | RUN | 0.317897 | 1.053668 | 1.119048 | 0.001521 | 0.001600 | 0.001600 |
| zero_quat_test.test | RUN | 0.241591 | 0.522830 | 0.658187 | 0.001608 | 0.001680 | 0.001785 |
| identity_mat_test.test | RUN | 0.285458 | 0.800648 | 0.970971 | 0.001788 | 0.001750 | 0.001863 |
| identity_quat_test.test | RUN | 0.249691 | 0.527141 | 0.720026 | 0.001827 | 0.001832 | 0.001851 |
| col_test.test | RUN | 0.480293 | 1.615155 | 2.119452 | 0.001952 | 0.001829 | 0.001840 |
| col_mat_test.test | RUN | 0.313373 | 0.727300 | 0.969926 | 0.001708 | 0.001849 | 0.001739 |
| neg_col_test.test | RUN | 0.363487 | 1.016427 | 1.314952 | 0.001522 | 0.001852 | 0.001699 |
| neg_row_test.test | RUN | 0.363782 | 1.057048 | 1.274803 | 0.001743 | 0.001868 | 0.001798 |
| del_col_test.test | RUN | 0.376326 | 1.134001 | 1.281317 | 0.001795 | 0.001871 | 0.001795 |
| del_row_test.test | RUN | 0.379339 | 1.123827 | 1.321755 | 0.001793 | 0.001838 | 0.001761 |
| del_row_col_test.test | RUN | 0.516410 | 2.125957 | 2.450372 | 0.002218 | 0.001729 | 0.001798 |
| swap_cols_test.test | RUN | 0.703248 | 2.865368 | 2.917758 | 0.001592 | 0.001784 | 0.001842 |
| swap_rows_test.test | RUN | 0.753197 | 2.960942 | 3.007240 | 0.001818 | 0.001960 | 0.001840 |
| diag_test.test | RUN | 0.316243 | 0.771098 | 1.159165 | 0.001498 | 0.001776 | 0.001752 |
| diag_mat_test.test | RUN | 0.324762 | 0.759138 | 0.984459 | 0.001787 | 0.001935 | 0.001796 |
| row_test.test | RUN | 0.463537 | 1.627071 | 2.091548 | 0.001718 | 0.001820 | 0.001612 |
| row_mat_test.test | RUN | 0.315038 | 0.743620 | 1.011180 | 0.001620 | 0.001633 | 0.001783 |
| transpose_test.test | RUN | 0.362496 | 1.073715 | 1.309764 | 0.001652 | 0.001962 | 0.001787 |
| translation_test.test | RUN | 0.291310 | 0.698587 | 0.981215 | 0.001522 | 0.001604 | 0.001642 |
| translation_mat_test.test | RUN | 0.320121 | 0.724104 | 1.082827 | 0.001628 | 0.001523 | 0.001596 |
| swizzle_const_fail.test | COMPILE_FAIL | 0.109636 | 0.203501 | 0.325338 | — | — | — |
| swizzle2_test2.test | RUN | 0.135165 | 0.297110 | 0.382860 | 0.001517 | 0.001587 | 0.001746 |
| swizzle2_test3.test | RUN | 0.133285 | 0.302993 | 0.393670 | 0.001563 | 0.001750 | 0.001631 |
| swizzle2_test4.test | RUN | 0.134682 | 0.296335 | 0.381790 | 0.001726 | 0.001850 | 0.001720 |
| swizzle2_test.test | RUN | 0.427209 | 0.852423 | 1.381600 | 0.001756 | 0.001614 | 0.001711 |
| swizzle3_test2.test | RUN | 0.148728 | 0.317373 | 0.430950 | 0.001560 | 0.001649 | 0.001745 |
| swizzle3_test3.test | RUN | 0.147616 | 0.324617 | 0.480137 | 0.001612 | 0.001692 | 0.001497 |
| swizzle3_test4.test | RUN | 0.150273 | 0.331685 | 0.430962 | 0.001828 | 0.001642 | 0.001506 |
| swizzle3_test.test | RUN | 0.408100 | 0.847364 | 1.324821 | 0.001657 | 0.001633 | 0.001832 |
| swizzle4_test2.test | RUN | 0.254626 | 0.477223 | 0.792968 | 0.001724 | 0.001756 | 0.001793 |
| swizzle4_test3.test | RUN | 0.246741 | 0.456028 | 0.805890 | 0.001707 | 0.001632 | 0.001824 |
| swizzle4_test4.test | RUN | 0.254678 | 0.458275 | 0.806336 | 0.001670 | 0.001820 | 0.001826 |
| swizzle4_test.test | RUN | 0.424978 | 0.919516 | 1.357414 | 0.001575 | 0.001710 | 0.001762 |
| deduce_scalar_test.test | COMPILE | 0.021920 | 0.044586 | 0.067140 | — | — | — |
| deduce_scalar_mq_test.test | RUN | 0.163906 | 0.359853 | 0.503595 | 0.001654 | 0.001779 | 0.001610 |
| deduce_scalar_mv_test.test | RUN | 0.192197 | 0.408393 | 0.586543 | 0.001850 | 0.001576 | 0.001254 |
| deduce_scalar_fail.test | COMPILE_FAIL | 0.017832 | 0.029819 | 0.055977 | — | — | — |
| deduce_mat_test.test | COMPILE | 0.019543 | 0.041254 | 0.065581 | — | — | — |
| deduce_quat_test.test | COMPILE | 0.019305 | 0.040772 | 0.057674 | — | — | — |
| deduce_vec_test.test | COMPILE | 0.019264 | 0.040341 | 0.059033 | — | — | — |
| interop_test.test | RUN | 0.194183 | 0.478353 | 0.880948 | 0.000757 | 0.000601 | 0.001266 |
| transform_test.test | RUN | 0.366322 | 0.739827 | 1.218118 | 0.001301 | 0.001253 | 0.001289 |
| projection_test.test | RUN | 0.230499 | 0.585886 | 0.692925 | 0.001402 | 0.001272 | 0.001686 |
| scalar_traits_test.test | COMPILE | 0.020224 | 0.042592 | 0.067242 | — | — | — |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.951×† | 0.956×, 0.946× | 0.941× |
| clang | 0.884×† | 0.945×, 0.823× | 0.987× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1363 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/43916760662).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| access_m_test.test | 10 | 0.001089s | 0.001024s | 0.000995s | byte equality observed |
| access_q_test.test | 10 | 0.001079s | 0.001032s | 0.001073s | byte equality observed |
| access_v_test.test | 10 | 0.001105s | 0.001018s | 0.001051s | byte equality observed |
| assign_test.test | 10 | 0.001025s | 0.000992s | 0.000994s | byte equality observed |
| cmp_mm_test.test | 10 | 0.001013s | 0.001045s | 0.001007s | byte equality observed |
| cmp_qq_test.test | 10 | 0.001016s | 0.000988s | 0.001016s | byte equality observed |
| cmp_vv_test.test | 10 | 0.001041s | 0.001013s | 0.001007s | byte equality observed |
| col_mat_test.test | 10 | 0.001014s | 0.001008s | 0.001027s | byte equality observed |
| col_test.test | 10 | 0.001033s | 0.001045s | 0.001014s | byte equality observed |
| conjugate_test.test | 10 | 0.001019s | 0.000993s | 0.001039s | byte equality observed |
| convert_to_test.test | 10 | 0.001048s | 0.001000s | 0.001059s | byte equality observed |
| cross_test.test | 10 | 0.001060s | 0.000984s | 0.001008s | byte equality observed |
| deduce_scalar_mq_test.test | 10 | 0.001054s | 0.000987s | 0.001012s | byte equality observed |
| deduce_scalar_mv_test.test | 10 | 0.001077s | 0.001007s | 0.001016s | byte equality observed |
| del_col_test.test | 10 | 0.001080s | 0.000978s | 0.001036s | byte equality observed |
| del_row_col_test.test | 10 | 0.001046s | 0.001008s | 0.001035s | byte equality observed |
| del_row_test.test | 10 | 0.001040s | 0.000970s | 0.001078s | byte equality observed |
| determinant_test.test | 10 | 0.001049s | 0.000990s | 0.001116s | byte equality observed |
| diag_mat_test.test | 10 | 0.001038s | 0.000988s | 0.001081s | byte equality observed |
| diag_test.test | 10 | 0.001033s | 0.000986s | 0.001086s | byte equality observed |
| div_eq_ms_test.test | 10 | 0.001065s | 0.000983s | 0.001101s | byte equality observed |
| div_eq_qs_test.test | 10 | 0.001069s | 0.001024s | 0.001067s | byte equality observed |
| div_eq_vs_test.test | 10 | 0.001042s | 0.000972s | 0.001074s | byte equality observed |
| div_ms_test.test | 10 | 0.001042s | 0.000991s | 0.001061s | byte equality observed |
| div_qs_test.test | 10 | 0.001026s | 0.001008s | 0.001003s | byte equality observed |
| div_vs_test.test | 10 | 0.001059s | 0.000986s | 0.001053s | byte equality observed |
| dot_qq_test.test | 10 | 0.001073s | 0.000995s | 0.001045s | byte equality observed |
| dot_vv_test.test | 10 | 0.001023s | 0.001004s | 0.001045s | byte equality observed |
| eq_mm_test.test | 10 | 0.001036s | 0.001008s | 0.001011s | byte equality observed |
| eq_qq_test.test | 10 | 0.001025s | 0.000989s | 0.001041s | byte equality observed |
| eq_vv_test.test | 10 | 0.001022s | 0.001030s | 0.001046s | byte equality observed |
| identity_mat_test.test | 10 | 0.001062s | 0.000972s | 0.001057s | byte equality observed |
| identity_quat_test.test | 10 | 0.001027s | 0.001031s | 0.001040s | byte equality observed |
| interop_test.test | 10 | 0.000473s | 0.000456s | 0.001022s | byte equality observed |
| inverse_m_test.test | 10 | 0.001097s | 0.001060s | 0.001078s | byte equality observed |
| inverse_q_test.test | 10 | 0.001035s | 0.001014s | 0.001042s | byte equality observed |
| mag_q_test.test | 10 | 0.001065s | 0.001012s | 0.001041s | byte equality observed |
| mag_sqr_q_test.test | 10 | 0.001054s | 0.001010s | 0.001035s | byte equality observed |
| mag_sqr_v_test.test | 10 | 0.001047s | 0.001011s | 0.001050s | byte equality observed |
| mag_v_test.test | 10 | 0.001008s | 0.001011s | 0.001051s | byte equality observed |
| mat_index_test.test | 10 | 0.001060s | 0.001023s | 0.001022s | byte equality observed |
| mat_traits_array_test.test | 10 | 0.001073s | 0.001008s | 0.001057s | byte equality observed |
| mat_traits_std_array_test.test | 10 | 0.001026s | 0.001011s | 0.001034s | byte equality observed |
| math_test.test | 10 | 0.001580s | 0.001522s | 0.001381s | byte equality observed |
| minus_eq_mm_test.test | 10 | 0.001012s | 0.000991s | 0.001039s | byte equality observed |
| minus_eq_qq_test.test | 10 | 0.001043s | 0.000997s | 0.001059s | byte equality observed |
| minus_eq_vv_test.test | 10 | 0.001040s | 0.001012s | 0.001061s | byte equality observed |
| minus_m_test.test | 10 | 0.001055s | 0.001004s | 0.001006s | byte equality observed |
| minus_mm_test.test | 10 | 0.001037s | 0.000998s | 0.001002s | byte equality observed |
| minus_q_test.test | 10 | 0.001067s | 0.001005s | 0.000994s | byte equality observed |
| minus_qq_test.test | 10 | 0.001078s | 0.000993s | 0.000990s | byte equality observed |
| minus_v_test.test | 10 | 0.001037s | 0.000979s | 0.001030s | byte equality observed |
| minus_vv_test.test | 10 | 0.001026s | 0.001019s | 0.001056s | byte equality observed |
| mul_eq_mm_test.test | 10 | 0.001051s | 0.000992s | 0.001042s | byte equality observed |
| mul_eq_ms_test.test | 10 | 0.001104s | 0.001024s | 0.001016s | byte equality observed |
| mul_eq_qq_test.test | 10 | 0.001095s | 0.001014s | 0.001060s | byte equality observed |
| mul_eq_qs_test.test | 10 | 0.001067s | 0.000994s | 0.001032s | byte equality observed |
| mul_eq_vs_test.test | 10 | 0.001054s | 0.001007s | 0.001029s | byte equality observed |
| mul_mm_test.test | 10 | 0.001055s | 0.001048s | 0.001014s | byte equality observed |
| mul_ms_test.test | 10 | 0.001080s | 0.001012s | 0.001077s | byte equality observed |
| mul_mv_test.test | 10 | 0.001076s | 0.001012s | 0.001002s | byte equality observed |
| mul_qq_test.test | 10 | 0.001063s | 0.000993s | 0.001052s | byte equality observed |
| mul_qs_test.test | 10 | 0.001041s | 0.001012s | 0.001039s | byte equality observed |
| mul_qv_test.test | 10 | 0.001062s | 0.001012s | 0.001065s | byte equality observed |
| mul_sm_test.test | 10 | 0.001050s | 0.001012s | 0.001055s | byte equality observed |
| mul_sv_test.test | 10 | 0.001036s | 0.001018s | 0.001033s | byte equality observed |
| mul_vm_test.test | 10 | 0.001083s | 0.000989s | 0.001062s | byte equality observed |
| mul_vs_test.test | 10 | 0.001048s | 0.000994s | 0.001005s | byte equality observed |
| neg_col_test.test | 10 | 0.001046s | 0.000990s | 0.001024s | byte equality observed |
| neg_row_test.test | 10 | 0.001017s | 0.001007s | 0.000995s | byte equality observed |
| normalize_q_test.test | 10 | 0.001006s | 0.000991s | 0.000986s | byte equality observed |
| normalize_v_test.test | 10 | 0.001035s | 0.000981s | 0.000997s | byte equality observed |
| plus_eq_mm_test.test | 10 | 0.001017s | 0.000989s | 0.001016s | byte equality observed |
| plus_eq_qq_test.test | 10 | 0.001011s | 0.000992s | 0.001014s | byte equality observed |
| plus_eq_vv_test.test | 10 | 0.001019s | 0.000986s | 0.000999s | byte equality observed |
| plus_mm_test.test | 10 | 0.001043s | 0.001004s | 0.001034s | byte equality observed |
| plus_qq_test.test | 10 | 0.001065s | 0.001001s | 0.001024s | byte equality observed |
| plus_vv_test.test | 10 | 0.001014s | 0.000996s | 0.001027s | byte equality observed |
| projection_test.test | 10 | 0.001081s | 0.000971s | 0.001009s | byte equality observed |
| quat_traits_array_test.test | 10 | 0.001062s | 0.000999s | 0.001041s | byte equality observed |
| quat_traits_std_array_test.test | 10 | 0.001004s | 0.000965s | 0.001046s | byte equality observed |
| rot_mat_test.test | 1 | 0.029171s | 0.024212s | 0.024982s | byte equality observed |
| rot_quat_test.test | 10 | 0.001028s | 0.000961s | 0.000987s | byte equality observed |
| rotx_mat_test.test | 10 | 0.001054s | 0.001031s | 0.001017s | byte equality observed |
| rotx_quat_test.test | 10 | 0.001041s | 0.000998s | 0.001061s | byte equality observed |
| roty_mat_test.test | 10 | 0.001066s | 0.001006s | 0.001029s | byte equality observed |
| roty_quat_test.test | 10 | 0.001087s | 0.001014s | 0.001032s | byte equality observed |
| rotz_mat_test.test | 10 | 0.001047s | 0.001006s | 0.001086s | byte equality observed |
| rotz_quat_test.test | 10 | 0.001038s | 0.001044s | 0.001075s | byte equality observed |
| row_mat_test.test | 10 | 0.001029s | 0.001011s | 0.001053s | byte equality observed |
| row_test.test | 10 | 0.001061s | 0.000995s | 0.001030s | byte equality observed |
| scalar_cast_m_test.test | 10 | 0.001024s | 0.001014s | 0.001038s | byte equality observed |
| scalar_cast_q_test.test | 10 | 0.001023s | 0.001005s | 0.001050s | byte equality observed |
| scalar_cast_v_test.test | 10 | 0.001041s | 0.000978s | 0.001032s | byte equality observed |
| slerp_test.test | 2 | 0.013375s | 0.010936s | 0.012065s | byte equality observed |
| swap_cols_test.test | 10 | 0.001001s | 0.001003s | 0.000990s | byte equality observed |
| swap_rows_test.test | 10 | 0.001014s | 0.000986s | 0.001038s | byte equality observed |
| swizzle2_test.test | 10 | 0.000992s | 0.000991s | 0.001063s | byte equality observed |
| swizzle2_test2.test | 10 | 0.001036s | 0.000989s | 0.001050s | byte equality observed |
| swizzle2_test3.test | 10 | 0.001030s | 0.000996s | 0.001022s | byte equality observed |
| swizzle2_test4.test | 10 | 0.001005s | 0.000990s | 0.001042s | byte equality observed |
| swizzle3_test.test | 10 | 0.001025s | 0.000990s | 0.001028s | byte equality observed |
| swizzle3_test2.test | 10 | 0.001053s | 0.001010s | 0.001050s | byte equality observed |
| swizzle3_test3.test | 10 | 0.001076s | 0.001021s | 0.001044s | byte equality observed |
| swizzle3_test4.test | 10 | 0.001083s | 0.001013s | 0.001036s | byte equality observed |
| swizzle4_test.test | 10 | 0.001061s | 0.000981s | 0.001027s | byte equality observed |
| swizzle4_test2.test | 10 | 0.001034s | 0.000990s | 0.001042s | byte equality observed |
| swizzle4_test3.test | 10 | 0.001076s | 0.000989s | 0.001051s | byte equality observed |
| swizzle4_test4.test | 10 | 0.001030s | 0.001001s | 0.001071s | byte equality observed |
| to_string_test.test | 10 | 0.001075s | 0.001044s | 0.001103s | byte equality observed |
| transform_test.test | 10 | 0.001095s | 0.000992s | 0.001087s | byte equality observed |
| translation_mat_test.test | 10 | 0.001049s | 0.001012s | 0.001097s | byte equality observed |
| translation_test.test | 10 | 0.001048s | 0.001012s | 0.001051s | byte equality observed |
| transpose_test.test | 10 | 0.001039s | 0.000996s | 0.001075s | byte equality observed |
| vec_index_test.test | 10 | 0.001071s | 0.001004s | 0.001086s | byte equality observed |
| vec_register_test.test | 10 | 0.001065s | 0.001045s | 0.001094s | byte equality observed |
| vec_traits_array_test.test | 10 | 0.001006s | 0.001018s | 0.001104s | byte equality observed |
| vec_traits_gnuc_test.test | 10 | 0.001040s | 0.001018s | 0.001103s | byte equality observed |
| vec_traits_std_array_test.test | 10 | 0.001084s | 0.001009s | 0.001077s | byte equality observed |
| zero_mat_test.test | 10 | 0.001052s | 0.001012s | 0.001107s | byte equality observed |
| zero_quat_test.test | 10 | 0.001048s | 0.000995s | 0.001085s | byte equality observed |
| zero_vec_test.test | 10 | 0.001042s | 0.001009s | 0.001075s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/43916760662).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
