# libs/qvm/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| math_test.test | RUN | 0.250776 | 0.646422 | 0.787768 | 0.002310 | 0.002072 | 0.002238 |
| mat_traits_array_test.test | RUN | 0.192519 | 0.647918 | 0.627194 | 0.001756 | 0.001407 | 0.001276 |
| mat_traits_std_array_test.test | RUN | 0.194247 | 0.503264 | 0.618328 | 0.001602 | 0.001526 | 0.001355 |
| vec_traits_array_test.test | RUN | 0.170236 | 0.505518 | 0.522339 | 0.001542 | 0.001630 | 0.001145 |
| vec_traits_gnuc_test.test | RUN | 0.312436 | 0.611789 | 1.041521 | 0.001328 | 0.001733 | 0.001457 |
| vec_traits_std_array_test.test | RUN | 0.166407 | 0.390901 | 0.523003 | 0.001810 | 0.001525 | 0.001583 |
| quat_traits_array_test.test | RUN | 0.164526 | 0.498537 | 0.520245 | 0.001602 | 0.001177 | 0.001518 |
| quat_traits_std_array_test.test | RUN | 0.164839 | 0.378822 | 0.538759 | 0.001543 | 0.001590 | 0.001728 |
| access_m_test.test | RUN | 0.270994 | 0.972723 | 1.179007 | 0.001785 | 0.002000 | 0.001600 |
| access_m_fail1.test | COMPILE_FAIL | 0.026834 | 0.040916 | 0.086262 | — | — | — |
| access_m_fail2.test | COMPILE_FAIL | 0.025926 | 0.044133 | 0.081239 | — | — | — |
| access_q_test.test | RUN | 0.228252 | 0.485938 | 0.713008 | 0.001735 | 0.001678 | 0.001684 |
| access_q_fail.test | COMPILE_FAIL | 0.021051 | 0.032568 | 0.055974 | — | — | — |
| access_v_test.test | RUN | 0.227011 | 0.520313 | 0.684612 | 0.001515 | 0.001759 | 0.001796 |
| access_v_fail1.test | COMPILE_FAIL | 0.018037 | 0.032441 | 0.059275 | — | — | — |
| access_v_fail2.test | COMPILE_FAIL | 0.018604 | 0.032139 | 0.060350 | — | — | — |
| assign_test.test | RUN | 0.333816 | 0.793526 | 1.233904 | 0.001587 | 0.001952 | 0.001637 |
| to_string_test.test | RUN | 0.377840 | 1.309866 | 6.722602 | 0.001572 | 0.001940 | 0.001635 |
| cmp_vv_test.test | RUN | 0.272999 | 0.645260 | 0.826576 | 0.001650 | 0.001892 | 0.001831 |
| cross_test.test | RUN | 0.266384 | 0.621427 | 0.851881 | 0.001511 | 0.001941 | 0.001794 |
| div_eq_vs_test.test | RUN | 0.259887 | 0.546286 | 0.792873 | 0.001576 | 0.001913 | 0.001789 |
| div_vs_test.test | RUN | 0.267440 | 0.666729 | 0.826578 | 0.001697 | 0.001632 | 0.001570 |
| dot_vv_test.test | RUN | 0.254257 | 0.608970 | 0.790792 | 0.001549 | 0.001863 | 0.001620 |
| eq_vv_test.test | RUN | 0.280951 | 0.698812 | 0.877567 | 0.001550 | 0.001855 | 0.001646 |
| mag_v_test.test | RUN | 0.257309 | 0.551592 | 0.734265 | 0.001533 | 0.001486 | 0.001744 |
| mag_sqr_v_test.test | RUN | 0.253485 | 0.560659 | 0.772773 | 0.001768 | 0.001880 | 0.001591 |
| minus_v_test.test | RUN | 0.257482 | 0.633514 | 0.836503 | 0.001327 | 0.001787 | 0.001368 |
| minus_eq_vv_test.test | RUN | 0.261617 | 0.664525 | 0.835298 | 0.001531 | 0.001796 | 0.001688 |
| minus_vv_test.test | RUN | 0.269231 | 0.696830 | 0.813576 | 0.001924 | 0.001558 | 0.001492 |
| mul_eq_vs_test.test | RUN | 0.258083 | 0.553363 | 0.813815 | 0.001704 | 0.001864 | 0.001679 |
| mul_vs_test.test | RUN | 0.267346 | 0.682944 | 0.868822 | 0.001449 | 0.001930 | 0.001332 |
| mul_sv_test.test | RUN | 0.268581 | 0.697423 | 0.824382 | 0.001612 | 0.001842 | 0.001506 |
| mul_vm_test.test | RUN | 0.358169 | 1.222477 | 1.336851 | 0.001470 | 0.001703 | 0.001628 |
| normalize_v_test.test | RUN | 0.274725 | 0.822096 | 0.905900 | 0.001382 | 0.001700 | 0.001781 |
| plus_eq_vv_test.test | RUN | 0.258832 | 0.643313 | 0.760522 | 0.001800 | 0.001736 | 0.001419 |
| plus_vv_test.test | RUN | 0.275642 | 0.690555 | 0.831797 | 0.001503 | 0.001908 | 0.001745 |
| scalar_cast_v_test.test | RUN | 0.247123 | 0.519568 | 0.740724 | 0.001560 | 0.001604 | 0.001437 |
| vec_index_test.test | RUN | 0.213701 | 0.527841 | 0.676972 | 0.001564 | 0.001520 | 0.001790 |
| vec_register_test.test | RUN | 0.140927 | 0.452782 | 0.499103 | 0.001557 | 0.001555 | 0.001407 |
| cmp_mm_test.test | RUN | 0.409816 | 1.479959 | 1.705373 | 0.001795 | 0.001799 | 0.001877 |
| determinant_test.test | RUN | 0.296098 | 0.786057 | 0.950395 | 0.001758 | 0.001922 | 0.001760 |
| div_eq_ms_test.test | RUN | 0.303512 | 0.718289 | 1.078359 | 0.001773 | 0.001638 | 0.001744 |
| div_ms_test.test | RUN | 0.350126 | 1.113719 | 1.282469 | 0.001605 | 0.001512 | 0.001814 |
| eq_mm_test.test | RUN | 0.406122 | 1.347876 | 1.566668 | 0.001785 | 0.001583 | 0.001740 |
| minus_m_test.test | RUN | 0.347494 | 1.081275 | 1.208944 | 0.001834 | 0.001772 | 0.001670 |
| minus_eq_mm_test.test | RUN | 0.329297 | 1.008974 | 1.167203 | 0.001628 | 0.001812 | 0.001734 |
| minus_mm_test.test | RUN | 0.375757 | 1.278037 | 1.402774 | 0.001724 | 0.001871 | 0.001648 |
| mul_eq_mm_test.test | RUN | 0.307368 | 0.951257 | 1.043274 | 0.001849 | 0.001666 | 0.001774 |
| mul_eq_ms_test.test | RUN | 0.311968 | 0.696660 | 1.063947 | 0.001771 | 0.001676 | 0.001834 |
| mul_mm_test.test | RUN | 0.424972 | 2.084149 | 1.723713 | 0.001711 | 0.001769 | 0.001559 |
| mul_ms_test.test | RUN | 0.364168 | 1.121126 | 1.336000 | 0.001564 | 0.001917 | 0.001850 |
| mul_sm_test.test | RUN | 0.362877 | 1.129940 | 1.346589 | 0.001853 | 0.001835 | 0.001690 |
| mul_mv_test.test | RUN | 0.376882 | 1.202600 | 1.366796 | 0.001773 | 0.001634 | 0.001785 |
| inverse_m_test.test | RUN | 0.475996 | 2.158701 | 1.868214 | 0.001822 | 0.001911 | 0.001613 |
| plus_eq_mm_test.test | RUN | 0.327871 | 1.006389 | 1.198781 | 0.001840 | 0.001860 | 0.001839 |
| plus_mm_test.test | RUN | 0.377101 | 1.302795 | 1.384422 | 0.001658 | 0.001798 | 0.001761 |
| scalar_cast_m_test.test | RUN | 0.298962 | 0.602744 | 0.916154 | 0.001751 | 0.001798 | 0.001756 |
| mat_index_test.test | RUN | 0.232011 | 0.551445 | 0.718146 | 0.001640 | 0.001931 | 0.001831 |
| cmp_qq_test.test | RUN | 0.253881 | 0.537206 | 0.754893 | 0.001670 | 0.001848 | 0.001754 |
| conjugate_test.test | RUN | 0.255478 | 0.537736 | 0.744505 | 0.001684 | 0.001816 | 0.001601 |
| normalize_q_test.test | RUN | 0.255310 | 0.572199 | 0.759682 | 0.001620 | 0.001591 | 0.001733 |
| div_eq_qs_test.test | RUN | 0.253545 | 0.527020 | 0.727016 | 0.001686 | 0.001589 | 0.001831 |
| div_qs_test.test | RUN | 0.256775 | 0.553499 | 0.758750 | 0.001693 | 0.001788 | 0.001676 |
| dot_qq_test.test | RUN | 0.253109 | 0.540365 | 0.784978 | 0.001730 | 0.001786 | 0.001422 |
| eq_qq_test.test | RUN | 0.253343 | 0.544752 | 0.751173 | 0.001552 | 0.001780 | 0.001603 |
| inverse_q_test.test | RUN | 0.296344 | 0.742300 | 0.968024 | 0.001674 | 0.001806 | 0.001808 |
| mag_q_test.test | RUN | 0.248965 | 0.564536 | 0.714284 | 0.001562 | 0.001493 | 0.001616 |
| mag_sqr_q_test.test | RUN | 0.248769 | 0.547103 | 0.743607 | 0.001864 | 0.001814 | 0.001709 |
| minus_q_test.test | RUN | 0.246654 | 0.553195 | 0.770160 | 0.001654 | 0.001738 | 0.001826 |
| minus_eq_qq_test.test | RUN | 0.248184 | 0.525216 | 0.741354 | 0.001691 | 0.001744 | 0.001762 |
| minus_qq_test.test | RUN | 0.256486 | 0.538444 | 0.733529 | 0.001651 | 0.001626 | 0.001783 |
| mul_eq_qs_test.test | RUN | 0.250529 | 0.495313 | 0.730887 | 0.001775 | 0.001836 | 0.001299 |
| mul_qs_test.test | RUN | 0.247513 | 0.540244 | 0.738192 | 0.001726 | 0.001855 | 0.001622 |
| mul_qv_test.test | RUN | 0.303554 | 0.760760 | 0.971142 | 0.001684 | 0.001590 | 0.001817 |
| mul_qq_test.test | RUN | 0.304058 | 0.737123 | 0.964657 | 0.001812 | 0.001813 | 0.001449 |
| mul_eq_qq_test.test | RUN | 0.296977 | 0.749775 | 0.979601 | 0.001568 | 0.001925 | 0.001623 |
| plus_eq_qq_test.test | RUN | 0.254483 | 0.529077 | 0.729506 | 0.001640 | 0.001668 | 0.001710 |
| plus_qq_test.test | RUN | 0.258005 | 0.536515 | 0.749929 | 0.001711 | 0.001616 | 0.001783 |
| scalar_cast_q_test.test | RUN | 0.245014 | 0.490963 | 0.765306 | 0.001724 | 0.001824 | 0.001798 |
| slerp_test.test | RUN | 0.267080 | 1.026760 | 0.896620 | 0.018530 | 0.014283 | 0.015683 |
| convert_to_test.test | RUN | 0.368479 | 0.943624 | 1.374623 | 0.001798 | 0.001722 | 0.001794 |
| rot_mat_test.test | RUN | 0.533962 | 4.175740 | 4.075674 | 0.044856 | 0.039160 | 0.035680 |
| rot_quat_test.test | RUN | 0.309151 | 0.863299 | 0.965240 | 0.001651 | 0.001807 | 0.001782 |
| rotx_mat_test.test | RUN | 0.338736 | 1.125888 | 1.300843 | 0.001575 | 0.001925 | 0.001707 |
| rotx_quat_test.test | RUN | 0.305371 | 0.755376 | 0.922627 | 0.001771 | 0.001733 | 0.001732 |
| roty_mat_test.test | RUN | 0.342914 | 1.113601 | 1.264129 | 0.001708 | 0.001780 | 0.001717 |
| roty_quat_test.test | RUN | 0.302362 | 0.734775 | 0.934362 | 0.001752 | 0.001922 | 0.001724 |
| rotz_mat_test.test | RUN | 0.362146 | 1.298674 | 1.250354 | 0.001704 | 0.001568 | 0.001740 |
| rotz_quat_test.test | RUN | 0.300461 | 0.737711 | 0.910153 | 0.001811 | 0.001835 | 0.001744 |
| zero_vec_test.test | RUN | 0.256617 | 0.644823 | 0.799202 | 0.001778 | 0.001590 | 0.001477 |
| zero_mat_test.test | RUN | 0.328149 | 1.035512 | 1.109919 | 0.001828 | 0.001872 | 0.001751 |
| zero_quat_test.test | RUN | 0.243777 | 0.544272 | 0.764360 | 0.001498 | 0.001770 | 0.001864 |
| identity_mat_test.test | RUN | 0.297800 | 0.742344 | 0.920673 | 0.001787 | 0.001803 | 0.001700 |
| identity_quat_test.test | RUN | 0.249649 | 0.511973 | 0.742930 | 0.001778 | 0.001810 | 0.001694 |
| col_test.test | RUN | 0.466308 | 1.647094 | 2.117783 | 0.001278 | 0.001930 | 0.001867 |
| col_mat_test.test | RUN | 0.308961 | 0.737233 | 1.026047 | 0.001593 | 0.001866 | 0.001767 |
| neg_col_test.test | RUN | 0.357364 | 0.991688 | 1.306052 | 0.001682 | 0.001892 | 0.001853 |
| neg_row_test.test | RUN | 0.367346 | 1.069896 | 1.314950 | 0.001793 | 0.001842 | 0.001842 |
| del_col_test.test | RUN | 0.381885 | 1.162765 | 1.324459 | 0.001796 | 0.001844 | 0.001599 |
| del_row_test.test | RUN | 0.377472 | 1.145651 | 1.340519 | 0.001775 | 0.001848 | 0.001818 |
| del_row_col_test.test | RUN | 0.515144 | 2.168740 | 2.474315 | 0.001720 | 0.001810 | 0.001607 |
| swap_cols_test.test | RUN | 0.699137 | 2.883003 | 3.065321 | 0.001810 | 0.001805 | 0.001804 |
| swap_rows_test.test | RUN | 0.742962 | 3.027632 | 2.997527 | 0.001848 | 0.001861 | 0.001818 |
| diag_test.test | RUN | 0.325042 | 0.775116 | 1.083708 | 0.002084 | 0.001813 | 0.001630 |
| diag_mat_test.test | RUN | 0.337671 | 0.737401 | 1.076070 | 0.001591 | 0.001904 | 0.001577 |
| row_test.test | RUN | 0.463348 | 1.662831 | 2.133958 | 0.001741 | 0.001900 | 0.001693 |
| row_mat_test.test | RUN | 0.303270 | 0.778713 | 0.948847 | 0.001637 | 0.001794 | 0.001710 |
| transpose_test.test | RUN | 0.361580 | 1.094295 | 1.308272 | 0.001717 | 0.001668 | 0.001510 |
| translation_test.test | RUN | 0.290871 | 0.735647 | 0.983129 | 0.001694 | 0.001812 | 0.001576 |
| translation_mat_test.test | RUN | 0.327559 | 0.738713 | 1.060722 | 0.001642 | 0.001784 | 0.001337 |
| swizzle_const_fail.test | COMPILE_FAIL | 0.107937 | 0.204969 | 0.274604 | — | — | — |
| swizzle2_test2.test | RUN | 0.134317 | 0.311892 | 0.418129 | 0.001526 | 0.001788 | 0.001551 |
| swizzle2_test3.test | RUN | 0.130679 | 0.316647 | 0.402726 | 0.001599 | 0.001741 | 0.001479 |
| swizzle2_test4.test | RUN | 0.131608 | 0.304194 | 0.406707 | 0.001328 | 0.001840 | 0.001198 |
| swizzle2_test.test | RUN | 0.426177 | 0.852186 | 1.356855 | 0.001832 | 0.001672 | 0.001737 |
| swizzle3_test2.test | RUN | 0.145310 | 0.326573 | 0.463832 | 0.001778 | 0.001809 | 0.001584 |
| swizzle3_test3.test | RUN | 0.148110 | 0.334249 | 0.461637 | 0.001765 | 0.001704 | 0.001436 |
| swizzle3_test4.test | RUN | 0.146399 | 0.339525 | 0.470864 | 0.001482 | 0.001727 | 0.001547 |
| swizzle3_test.test | RUN | 0.416173 | 0.871722 | 1.383770 | 0.001710 | 0.001657 | 0.001710 |
| swizzle4_test2.test | RUN | 0.252684 | 0.483817 | 0.828078 | 0.001605 | 0.001775 | 0.001354 |
| swizzle4_test3.test | RUN | 0.247078 | 0.475935 | 0.778487 | 0.001477 | 0.001700 | 0.001660 |
| swizzle4_test4.test | RUN | 0.255092 | 0.485249 | 0.759332 | 0.001750 | 0.001536 | 0.001589 |
| swizzle4_test.test | RUN | 0.427453 | 0.935488 | 1.369509 | 0.001728 | 0.001916 | 0.001692 |
| deduce_scalar_test.test | COMPILE | 0.022428 | 0.048249 | 0.072969 | — | — | — |
| deduce_scalar_mq_test.test | RUN | 0.160103 | 0.367697 | 0.482950 | 0.001394 | 0.001615 | 0.001740 |
| deduce_scalar_mv_test.test | RUN | 0.190855 | 0.413992 | 0.557105 | 0.001540 | 0.001630 | 0.001271 |
| deduce_scalar_fail.test | COMPILE_FAIL | 0.017757 | 0.030191 | 0.050901 | — | — | — |
| deduce_mat_test.test | COMPILE | 0.019779 | 0.041383 | 0.063196 | — | — | — |
| deduce_quat_test.test | COMPILE | 0.018291 | 0.040520 | 0.061037 | — | — | — |
| deduce_vec_test.test | COMPILE | 0.018806 | 0.040204 | 0.055699 | — | — | — |
| interop_test.test | RUN | 0.202643 | 0.459089 | 0.857351 | 0.000786 | 0.000615 | 0.001272 |
| transform_test.test | RUN | 0.382241 | 0.776536 | 1.160934 | 0.001284 | 0.001426 | 0.001158 |
| projection_test.test | RUN | 0.243698 | 0.602527 | 0.662185 | 0.001303 | 0.001455 | 0.001052 |
| scalar_traits_test.test | COMPILE | 0.020250 | 0.043294 | 0.065911 | — | — | — |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 1.042×† | 1.034×, 1.051× | 1.077× |
| clang | 1.013×† | 0.906×, 1.120× | 1.000× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1362 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43619774656).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| access_m_test.test | 10 | 0.000999s | 0.001072s | 0.001043s | byte equality observed |
| access_q_test.test | 10 | 0.001022s | 0.001101s | 0.001058s | byte equality observed |
| access_v_test.test | 10 | 0.001008s | 0.001063s | 0.001044s | byte equality observed |
| assign_test.test | 10 | 0.001026s | 0.001087s | 0.001044s | byte equality observed |
| cmp_mm_test.test | 10 | 0.001032s | 0.001073s | 0.001088s | byte equality observed |
| cmp_qq_test.test | 10 | 0.001005s | 0.001099s | 0.001080s | byte equality observed |
| cmp_vv_test.test | 10 | 0.001013s | 0.001080s | 0.001079s | byte equality observed |
| col_mat_test.test | 10 | 0.001044s | 0.001083s | 0.001067s | byte equality observed |
| col_test.test | 10 | 0.001032s | 0.001062s | 0.001057s | byte equality observed |
| conjugate_test.test | 10 | 0.001039s | 0.001073s | 0.001056s | byte equality observed |
| convert_to_test.test | 10 | 0.001039s | 0.001085s | 0.001066s | byte equality observed |
| cross_test.test | 10 | 0.001016s | 0.001091s | 0.001092s | byte equality observed |
| deduce_scalar_mq_test.test | 10 | 0.001010s | 0.001026s | 0.001054s | byte equality observed |
| deduce_scalar_mv_test.test | 10 | 0.001023s | 0.001085s | 0.001117s | byte equality observed |
| del_col_test.test | 10 | 0.001018s | 0.001080s | 0.001065s | byte equality observed |
| del_row_col_test.test | 10 | 0.001030s | 0.001086s | 0.001091s | byte equality observed |
| del_row_test.test | 10 | 0.001032s | 0.001067s | 0.001093s | byte equality observed |
| determinant_test.test | 10 | 0.001047s | 0.001077s | 0.001075s | byte equality observed |
| diag_mat_test.test | 10 | 0.001008s | 0.001073s | 0.001072s | byte equality observed |
| diag_test.test | 10 | 0.001029s | 0.001066s | 0.001110s | byte equality observed |
| div_eq_ms_test.test | 10 | 0.000986s | 0.001064s | 0.001078s | byte equality observed |
| div_eq_qs_test.test | 10 | 0.000997s | 0.001074s | 0.001107s | byte equality observed |
| div_eq_vs_test.test | 10 | 0.001002s | 0.001064s | 0.001094s | byte equality observed |
| div_ms_test.test | 10 | 0.000998s | 0.001052s | 0.001139s | byte equality observed |
| div_qs_test.test | 10 | 0.001009s | 0.001069s | 0.001097s | byte equality observed |
| div_vs_test.test | 10 | 0.001014s | 0.001078s | 0.001083s | byte equality observed |
| dot_qq_test.test | 10 | 0.001038s | 0.001105s | 0.001152s | byte equality observed |
| dot_vv_test.test | 10 | 0.001002s | 0.001083s | 0.001109s | byte equality observed |
| eq_mm_test.test | 10 | 0.001037s | 0.001068s | 0.001134s | byte equality observed |
| eq_qq_test.test | 10 | 0.001013s | 0.001059s | 0.001113s | byte equality observed |
| eq_vv_test.test | 10 | 0.001012s | 0.001065s | 0.001159s | byte equality observed |
| identity_mat_test.test | 10 | 0.001047s | 0.001066s | 0.001155s | byte equality observed |
| identity_quat_test.test | 10 | 0.001028s | 0.001098s | 0.001160s | byte equality observed |
| interop_test.test | 10 | 0.000467s | 0.000483s | 0.001107s | byte equality observed |
| inverse_m_test.test | 10 | 0.001086s | 0.001115s | 0.001217s | byte equality observed |
| inverse_q_test.test | 10 | 0.001003s | 0.001070s | 0.001163s | byte equality observed |
| mag_q_test.test | 10 | 0.000990s | 0.001059s | 0.001143s | byte equality observed |
| mag_sqr_q_test.test | 10 | 0.001005s | 0.001059s | 0.001160s | byte equality observed |
| mag_sqr_v_test.test | 10 | 0.000999s | 0.001077s | 0.001142s | byte equality observed |
| mag_v_test.test | 10 | 0.001011s | 0.001092s | 0.001143s | byte equality observed |
| mat_index_test.test | 10 | 0.001016s | 0.001055s | 0.001081s | byte equality observed |
| mat_traits_array_test.test | 10 | 0.001024s | 0.001049s | 0.001077s | byte equality observed |
| mat_traits_std_array_test.test | 10 | 0.000998s | 0.001062s | 0.001097s | byte equality observed |
| math_test.test | 10 | 0.001533s | 0.001551s | 0.001369s | byte equality observed |
| minus_eq_mm_test.test | 10 | 0.001005s | 0.001055s | 0.001150s | byte equality observed |
| minus_eq_qq_test.test | 10 | 0.001034s | 0.001053s | 0.001149s | byte equality observed |
| minus_eq_vv_test.test | 10 | 0.000994s | 0.001060s | 0.001124s | byte equality observed |
| minus_m_test.test | 10 | 0.001036s | 0.001091s | 0.001160s | byte equality observed |
| minus_mm_test.test | 10 | 0.001009s | 0.001076s | 0.001144s | byte equality observed |
| minus_q_test.test | 10 | 0.000991s | 0.001067s | 0.001146s | byte equality observed |
| minus_qq_test.test | 10 | 0.000992s | 0.001072s | 0.001145s | byte equality observed |
| minus_v_test.test | 10 | 0.001037s | 0.001063s | 0.001110s | byte equality observed |
| minus_vv_test.test | 10 | 0.000990s | 0.001071s | 0.001127s | byte equality observed |
| mul_eq_mm_test.test | 10 | 0.001035s | 0.001056s | 0.001099s | byte equality observed |
| mul_eq_ms_test.test | 10 | 0.001018s | 0.001077s | 0.001147s | byte equality observed |
| mul_eq_qq_test.test | 10 | 0.001033s | 0.001078s | 0.001149s | byte equality observed |
| mul_eq_qs_test.test | 10 | 0.001004s | 0.001066s | 0.001135s | byte equality observed |
| mul_eq_vs_test.test | 10 | 0.001011s | 0.001091s | 0.001119s | byte equality observed |
| mul_mm_test.test | 10 | 0.001067s | 0.001068s | 0.001135s | byte equality observed |
| mul_ms_test.test | 10 | 0.000994s | 0.001076s | 0.001122s | byte equality observed |
| mul_mv_test.test | 10 | 0.001043s | 0.001081s | 0.001139s | byte equality observed |
| mul_qq_test.test | 10 | 0.001039s | 0.001099s | 0.001189s | byte equality observed |
| mul_qs_test.test | 10 | 0.001040s | 0.001057s | 0.001149s | byte equality observed |
| mul_qv_test.test | 10 | 0.001009s | 0.001066s | 0.001130s | byte equality observed |
| mul_sm_test.test | 10 | 0.001040s | 0.001079s | 0.001119s | byte equality observed |
| mul_sv_test.test | 10 | 0.001006s | 0.001088s | 0.001076s | byte equality observed |
| mul_vm_test.test | 10 | 0.000990s | 0.001052s | 0.001144s | byte equality observed |
| mul_vs_test.test | 10 | 0.000995s | 0.001056s | 0.001140s | byte equality observed |
| neg_col_test.test | 10 | 0.000997s | 0.001075s | 0.001140s | byte equality observed |
| neg_row_test.test | 10 | 0.001011s | 0.001069s | 0.001155s | byte equality observed |
| normalize_q_test.test | 10 | 0.000997s | 0.001082s | 0.001109s | byte equality observed |
| normalize_v_test.test | 10 | 0.001016s | 0.001081s | 0.001133s | byte equality observed |
| plus_eq_mm_test.test | 10 | 0.001027s | 0.001078s | 0.001163s | byte equality observed |
| plus_eq_qq_test.test | 10 | 0.001030s | 0.001081s | 0.001130s | byte equality observed |
| plus_eq_vv_test.test | 10 | 0.001033s | 0.001092s | 0.001127s | byte equality observed |
| plus_mm_test.test | 10 | 0.001045s | 0.001079s | 0.001124s | byte equality observed |
| plus_qq_test.test | 10 | 0.001035s | 0.001067s | 0.001115s | byte equality observed |
| plus_vv_test.test | 10 | 0.001059s | 0.001089s | 0.001128s | byte equality observed |
| projection_test.test | 10 | 0.001025s | 0.001078s | 0.001091s | byte equality observed |
| quat_traits_array_test.test | 10 | 0.001074s | 0.001086s | 0.001091s | byte equality observed |
| quat_traits_std_array_test.test | 10 | 0.001001s | 0.001042s | 0.001085s | byte equality observed |
| rot_mat_test.test | 1 | 0.030693s | 0.030328s | 0.033390s | byte equality observed |
| rot_quat_test.test | 10 | 0.000961s | 0.001044s | 0.001168s | byte equality observed |
| rotx_mat_test.test | 10 | 0.000965s | 0.001093s | 0.001150s | byte equality observed |
| rotx_quat_test.test | 10 | 0.001035s | 0.001083s | 0.001118s | byte equality observed |
| roty_mat_test.test | 10 | 0.001025s | 0.001086s | 0.001167s | byte equality observed |
| roty_quat_test.test | 10 | 0.001070s | 0.001046s | 0.001165s | byte equality observed |
| rotz_mat_test.test | 10 | 0.001033s | 0.001102s | 0.001193s | byte equality observed |
| rotz_quat_test.test | 10 | 0.001029s | 0.001094s | 0.001185s | byte equality observed |
| row_mat_test.test | 10 | 0.000995s | 0.001103s | 0.001087s | byte equality observed |
| row_test.test | 10 | 0.000996s | 0.001051s | 0.001149s | byte equality observed |
| scalar_cast_m_test.test | 10 | 0.000999s | 0.001080s | 0.001126s | byte equality observed |
| scalar_cast_q_test.test | 10 | 0.001036s | 0.001059s | 0.001115s | byte equality observed |
| scalar_cast_v_test.test | 10 | 0.001012s | 0.001049s | 0.001137s | byte equality observed |
| slerp_test.test | 2 | 0.013229s | 0.012343s | 0.014358s | byte equality observed |
| swap_cols_test.test | 10 | 0.000962s | 0.001040s | 0.001124s | byte equality observed |
| swap_rows_test.test | 10 | 0.000998s | 0.001032s | 0.001135s | byte equality observed |
| swizzle2_test.test | 10 | 0.001014s | 0.001048s | 0.001130s | byte equality observed |
| swizzle2_test2.test | 10 | 0.001028s | 0.000995s | 0.001155s | byte equality observed |
| swizzle2_test3.test | 10 | 0.001012s | 0.001060s | 0.001130s | byte equality observed |
| swizzle2_test4.test | 10 | 0.001003s | 0.001069s | 0.001172s | byte equality observed |
| swizzle3_test.test | 10 | 0.001003s | 0.001061s | 0.001125s | byte equality observed |
| swizzle3_test2.test | 10 | 0.001015s | 0.001106s | 0.001058s | byte equality observed |
| swizzle3_test3.test | 10 | 0.000993s | 0.001090s | 0.001041s | byte equality observed |
| swizzle3_test4.test | 10 | 0.001017s | 0.001076s | 0.001027s | byte equality observed |
| swizzle4_test.test | 10 | 0.001004s | 0.001092s | 0.001149s | byte equality observed |
| swizzle4_test2.test | 10 | 0.001004s | 0.001103s | 0.001123s | byte equality observed |
| swizzle4_test3.test | 10 | 0.001011s | 0.001073s | 0.001151s | byte equality observed |
| swizzle4_test4.test | 10 | 0.001006s | 0.001066s | 0.001129s | byte equality observed |
| to_string_test.test | 10 | 0.001029s | 0.001091s | 0.001192s | byte equality observed |
| transform_test.test | 10 | 0.001022s | 0.001057s | 0.001136s | byte equality observed |
| translation_mat_test.test | 10 | 0.001037s | 0.001100s | 0.001144s | byte equality observed |
| translation_test.test | 10 | 0.001000s | 0.001046s | 0.001135s | byte equality observed |
| transpose_test.test | 10 | 0.001021s | 0.001094s | 0.001165s | byte equality observed |
| vec_index_test.test | 10 | 0.001015s | 0.001093s | 0.001151s | byte equality observed |
| vec_register_test.test | 10 | 0.001010s | 0.001063s | 0.001149s | byte equality observed |
| vec_traits_array_test.test | 10 | 0.000997s | 0.001056s | 0.001154s | byte equality observed |
| vec_traits_gnuc_test.test | 10 | 0.001047s | 0.001052s | 0.001150s | byte equality observed |
| vec_traits_std_array_test.test | 10 | 0.001020s | 0.001106s | 0.001115s | byte equality observed |
| zero_mat_test.test | 10 | 0.001043s | 0.001059s | 0.001140s | byte equality observed |
| zero_quat_test.test | 10 | 0.001044s | 0.001071s | 0.001130s | byte equality observed |
| zero_vec_test.test | 10 | 0.001012s | 0.001055s | 0.001148s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43619774656).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
