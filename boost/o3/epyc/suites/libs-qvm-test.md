# libs/qvm/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| math_test.test | RUN | 0.242640 | 0.635067 | 0.785720 | 0.002070 | 0.002130 | 0.002140 |
| mat_traits_array_test.test | RUN | 0.189243 | 0.630140 | 0.603600 | 0.001824 | 0.001580 | 0.001633 |
| mat_traits_std_array_test.test | RUN | 0.188993 | 0.503912 | 0.632228 | 0.001551 | 0.001634 | 0.001372 |
| vec_traits_array_test.test | RUN | 0.164765 | 0.502420 | 0.522119 | 0.001542 | 0.001326 | 0.001269 |
| vec_traits_gnuc_test.test | RUN | 0.303257 | 0.620412 | 1.053221 | 0.001452 | 0.001630 | 0.001630 |
| vec_traits_std_array_test.test | RUN | 0.163510 | 0.386888 | 0.494405 | 0.001471 | 0.001638 | 0.001534 |
| quat_traits_array_test.test | RUN | 0.161102 | 0.522115 | 0.527414 | 0.001528 | 0.001393 | 0.001540 |
| quat_traits_std_array_test.test | RUN | 0.160523 | 0.395346 | 0.491034 | 0.001339 | 0.001526 | 0.001340 |
| access_m_test.test | RUN | 0.257818 | 0.950606 | 1.131087 | 0.001574 | 0.001850 | 0.001521 |
| access_m_fail1.test | COMPILE_FAIL | 0.026432 | 0.041183 | 0.076803 | — | — | — |
| access_m_fail2.test | COMPILE_FAIL | 0.025132 | 0.041441 | 0.076365 | — | — | — |
| access_q_test.test | RUN | 0.221536 | 0.498245 | 0.683273 | 0.001546 | 0.001732 | 0.001495 |
| access_q_fail.test | COMPILE_FAIL | 0.019857 | 0.033120 | 0.068338 | — | — | — |
| access_v_test.test | RUN | 0.216576 | 0.488931 | 0.673025 | 0.001374 | 0.001631 | 0.001512 |
| access_v_fail1.test | COMPILE_FAIL | 0.017834 | 0.028593 | 0.062781 | — | — | — |
| access_v_fail2.test | COMPILE_FAIL | 0.018470 | 0.031982 | 0.056826 | — | — | — |
| assign_test.test | RUN | 0.328531 | 0.800004 | 1.197607 | 0.001719 | 0.001854 | 0.001584 |
| to_string_test.test | RUN | 0.373312 | 1.281042 | 6.650703 | 0.001499 | 0.001635 | 0.001710 |
| cmp_vv_test.test | RUN | 0.263373 | 0.636254 | 0.838373 | 0.001495 | 0.001736 | 0.001634 |
| cross_test.test | RUN | 0.257770 | 0.589905 | 0.834518 | 0.001428 | 0.001787 | 0.001323 |
| div_eq_vs_test.test | RUN | 0.247965 | 0.546261 | 0.779560 | 0.001686 | 0.001700 | 0.001713 |
| div_vs_test.test | RUN | 0.258131 | 0.672009 | 0.874790 | 0.001412 | 0.001721 | 0.001551 |
| dot_vv_test.test | RUN | 0.248027 | 0.619888 | 0.815063 | 0.001754 | 0.001726 | 0.001707 |
| eq_vv_test.test | RUN | 0.277015 | 0.669986 | 0.834503 | 0.001571 | 0.001496 | 0.001585 |
| mag_v_test.test | RUN | 0.251215 | 0.570675 | 0.783067 | 0.001751 | 0.001642 | 0.001622 |
| mag_sqr_v_test.test | RUN | 0.246381 | 0.552478 | 0.790697 | 0.001668 | 0.001888 | 0.001658 |
| minus_v_test.test | RUN | 0.249915 | 0.653048 | 0.792899 | 0.001386 | 0.001746 | 0.001582 |
| minus_eq_vv_test.test | RUN | 0.260596 | 0.639018 | 0.820886 | 0.001665 | 0.001814 | 0.001667 |
| minus_vv_test.test | RUN | 0.261674 | 0.687479 | 0.868613 | 0.001338 | 0.001762 | 0.001730 |
| mul_eq_vs_test.test | RUN | 0.246221 | 0.539062 | 0.770127 | 0.001539 | 0.001936 | 0.001663 |
| mul_vs_test.test | RUN | 0.256236 | 0.673412 | 0.844832 | 0.001556 | 0.001924 | 0.001525 |
| mul_sv_test.test | RUN | 0.263439 | 0.673209 | 0.853618 | 0.001460 | 0.001830 | 0.001744 |
| mul_vm_test.test | RUN | 0.358114 | 1.193851 | 1.326750 | 0.001642 | 0.001566 | 0.001728 |
| normalize_v_test.test | RUN | 0.264462 | 0.808735 | 0.822680 | 0.001439 | 0.001591 | 0.001720 |
| plus_eq_vv_test.test | RUN | 0.248423 | 0.630256 | 0.827696 | 0.001694 | 0.001675 | 0.001504 |
| plus_vv_test.test | RUN | 0.268220 | 0.678703 | 0.852427 | 0.001354 | 0.001916 | 0.001524 |
| scalar_cast_v_test.test | RUN | 0.242730 | 0.508146 | 0.729519 | 0.001415 | 0.001723 | 0.001340 |
| vec_index_test.test | RUN | 0.210338 | 0.511765 | 0.663020 | 0.001188 | 0.001420 | 0.001510 |
| vec_register_test.test | RUN | 0.139727 | 0.464308 | 0.503395 | 0.001762 | 0.001758 | 0.001399 |
| cmp_mm_test.test | RUN | 0.412701 | 1.442600 | 1.644640 | 0.001807 | 0.001800 | 0.001710 |
| determinant_test.test | RUN | 0.288725 | 0.765306 | 0.949439 | 0.001525 | 0.001865 | 0.001664 |
| div_eq_ms_test.test | RUN | 0.294183 | 0.696885 | 1.051429 | 0.001470 | 0.001631 | 0.001728 |
| div_ms_test.test | RUN | 0.346174 | 1.092295 | 1.291680 | 0.001438 | 0.001824 | 0.001631 |
| eq_mm_test.test | RUN | 0.396477 | 1.346728 | 1.583007 | 0.001534 | 0.001553 | 0.001818 |
| minus_m_test.test | RUN | 0.339200 | 1.083841 | 1.249916 | 0.001532 | 0.001746 | 0.001688 |
| minus_eq_mm_test.test | RUN | 0.320969 | 1.004679 | 1.145565 | 0.001435 | 0.001763 | 0.001625 |
| minus_mm_test.test | RUN | 0.362766 | 1.287464 | 1.354879 | 0.001716 | 0.001902 | 0.001752 |
| mul_eq_mm_test.test | RUN | 0.305343 | 0.954064 | 1.036714 | 0.001620 | 0.001703 | 0.001720 |
| mul_eq_ms_test.test | RUN | 0.290400 | 0.710037 | 1.083702 | 0.001731 | 0.001830 | 0.001688 |
| mul_mm_test.test | RUN | 0.402475 | 2.066495 | 1.615350 | 0.001635 | 0.001716 | 0.001766 |
| mul_ms_test.test | RUN | 0.348843 | 1.098172 | 1.333002 | 0.001488 | 0.001827 | 0.001684 |
| mul_sm_test.test | RUN | 0.355491 | 1.084911 | 1.307517 | 0.001732 | 0.001564 | 0.001651 |
| mul_mv_test.test | RUN | 0.363983 | 1.186127 | 1.309605 | 0.001646 | 0.001540 | 0.001751 |
| inverse_m_test.test | RUN | 0.475538 | 2.116715 | 1.868222 | 0.001724 | 0.001651 | 0.001505 |
| plus_eq_mm_test.test | RUN | 0.329909 | 0.987046 | 1.133359 | 0.001814 | 0.001450 | 0.001777 |
| plus_mm_test.test | RUN | 0.364333 | 1.276165 | 1.309834 | 0.001522 | 0.001827 | 0.001688 |
| scalar_cast_m_test.test | RUN | 0.278443 | 0.590727 | 0.823453 | 0.001487 | 0.001723 | 0.001880 |
| mat_index_test.test | RUN | 0.222604 | 0.533912 | 0.731519 | 0.001404 | 0.001566 | 0.001711 |
| cmp_qq_test.test | RUN | 0.246373 | 0.524394 | 0.698113 | 0.001576 | 0.001700 | 0.001670 |
| conjugate_test.test | RUN | 0.242606 | 0.533026 | 0.740362 | 0.001734 | 0.001880 | 0.001773 |
| normalize_q_test.test | RUN | 0.248054 | 0.599735 | 0.765851 | 0.001624 | 0.001738 | 0.001756 |
| div_eq_qs_test.test | RUN | 0.238586 | 0.497461 | 0.729875 | 0.001672 | 0.001537 | 0.001734 |
| div_qs_test.test | RUN | 0.251017 | 0.534457 | 0.764932 | 0.001595 | 0.001701 | 0.001702 |
| dot_qq_test.test | RUN | 0.242965 | 0.518390 | 0.717453 | 0.001785 | 0.001658 | 0.001474 |
| eq_qq_test.test | RUN | 0.249840 | 0.543973 | 0.739816 | 0.001706 | 0.001791 | 0.001707 |
| inverse_q_test.test | RUN | 0.303427 | 0.725723 | 0.947644 | 0.001569 | 0.001714 | 0.001724 |
| mag_q_test.test | RUN | 0.238643 | 0.539614 | 0.722179 | 0.001530 | 0.001966 | 0.001648 |
| mag_sqr_q_test.test | RUN | 0.241172 | 0.520062 | 0.712262 | 0.001884 | 0.001866 | 0.001579 |
| minus_q_test.test | RUN | 0.240362 | 0.535169 | 0.733911 | 0.001675 | 0.001700 | 0.001688 |
| minus_eq_qq_test.test | RUN | 0.242359 | 0.530493 | 0.725222 | 0.001626 | 0.001695 | 0.001732 |
| minus_qq_test.test | RUN | 0.243180 | 0.550405 | 0.742582 | 0.001558 | 0.001870 | 0.001541 |
| mul_eq_qs_test.test | RUN | 0.241173 | 0.504757 | 0.706845 | 0.001779 | 0.001874 | 0.001623 |
| mul_qs_test.test | RUN | 0.239815 | 0.534499 | 0.737113 | 0.001514 | 0.001964 | 0.001730 |
| mul_qv_test.test | RUN | 0.309772 | 0.732122 | 0.949095 | 0.001696 | 0.001773 | 0.001666 |
| mul_qq_test.test | RUN | 0.292300 | 0.732987 | 0.922005 | 0.001562 | 0.001795 | 0.001578 |
| mul_eq_qq_test.test | RUN | 0.289688 | 0.735028 | 0.903359 | 0.001775 | 0.001702 | 0.001640 |
| plus_eq_qq_test.test | RUN | 0.246171 | 0.523511 | 0.751200 | 0.001384 | 0.001706 | 0.001603 |
| plus_qq_test.test | RUN | 0.246993 | 0.548695 | 0.729875 | 0.001567 | 0.001826 | 0.001710 |
| scalar_cast_q_test.test | RUN | 0.240324 | 0.495218 | 0.747341 | 0.001549 | 0.001695 | 0.001697 |
| slerp_test.test | RUN | 0.263527 | 1.010943 | 0.861024 | 0.017775 | 0.014707 | 0.015836 |
| convert_to_test.test | RUN | 0.354596 | 0.924001 | 1.351840 | 0.001793 | 0.001889 | 0.001716 |
| rot_mat_test.test | RUN | 0.520739 | 4.160383 | 3.915728 | 0.044629 | 0.035179 | 0.035722 |
| rot_quat_test.test | RUN | 0.298695 | 0.859998 | 0.941371 | 0.001683 | 0.001866 | 0.001850 |
| rotx_mat_test.test | RUN | 0.329996 | 1.133662 | 1.246126 | 0.001550 | 0.001787 | 0.001540 |
| rotx_quat_test.test | RUN | 0.290932 | 0.726041 | 0.909773 | 0.001573 | 0.001798 | 0.001764 |
| roty_mat_test.test | RUN | 0.338848 | 1.129366 | 1.186012 | 0.001852 | 0.001842 | 0.001722 |
| roty_quat_test.test | RUN | 0.292810 | 0.726151 | 0.923258 | 0.001564 | 0.001876 | 0.001697 |
| rotz_mat_test.test | RUN | 0.348769 | 1.265553 | 1.351996 | 0.001500 | 0.001893 | 0.001802 |
| rotz_quat_test.test | RUN | 0.291187 | 0.718946 | 0.872447 | 0.001707 | 0.001964 | 0.001642 |
| zero_vec_test.test | RUN | 0.255873 | 0.630742 | 0.740630 | 0.001728 | 0.001437 | 0.001568 |
| zero_mat_test.test | RUN | 0.313215 | 1.065823 | 1.103596 | 0.001694 | 0.001725 | 0.001570 |
| zero_quat_test.test | RUN | 0.237584 | 0.564215 | 0.714535 | 0.001548 | 0.001580 | 0.001458 |
| identity_mat_test.test | RUN | 0.293033 | 0.787771 | 0.949816 | 0.001421 | 0.001767 | 0.001657 |
| identity_quat_test.test | RUN | 0.249704 | 0.497020 | 0.726104 | 0.001615 | 0.001926 | 0.001490 |
| col_test.test | RUN | 0.477389 | 1.611036 | 1.983691 | 0.001476 | 0.001652 | 0.001672 |
| col_mat_test.test | RUN | 0.306601 | 0.738835 | 0.983502 | 0.001604 | 0.001825 | 0.001791 |
| neg_col_test.test | RUN | 0.348818 | 1.020646 | 1.289431 | 0.001562 | 0.001785 | 0.001562 |
| neg_row_test.test | RUN | 0.371832 | 1.038502 | 1.269885 | 0.001633 | 0.001844 | 0.001710 |
| del_col_test.test | RUN | 0.360308 | 1.126456 | 1.239654 | 0.001520 | 0.001886 | 0.001697 |
| del_row_test.test | RUN | 0.363855 | 1.114826 | 1.315984 | 0.001716 | 0.001839 | 0.001730 |
| del_row_col_test.test | RUN | 0.509199 | 2.094690 | 2.431957 | 0.001820 | 0.001834 | 0.001796 |
| swap_cols_test.test | RUN | 0.666110 | 2.822474 | 2.962254 | 0.001676 | 0.001792 | 0.001638 |
| swap_rows_test.test | RUN | 0.723377 | 2.948064 | 2.941608 | 0.001664 | 0.001890 | 0.001684 |
| diag_test.test | RUN | 0.313268 | 0.758112 | 1.064575 | 0.001638 | 0.001752 | 0.001681 |
| diag_mat_test.test | RUN | 0.326895 | 0.741954 | 1.024861 | 0.001716 | 0.001806 | 0.001606 |
| row_test.test | RUN | 0.477931 | 1.610116 | 2.028841 | 0.001502 | 0.001810 | 0.001817 |
| row_mat_test.test | RUN | 0.302037 | 0.743616 | 1.001083 | 0.001710 | 0.001645 | 0.001772 |
| transpose_test.test | RUN | 0.363225 | 1.056180 | 1.253355 | 0.001690 | 0.001490 | 0.001442 |
| translation_test.test | RUN | 0.299053 | 0.696744 | 0.965505 | 0.001540 | 0.001701 | 0.001749 |
| translation_mat_test.test | RUN | 0.318692 | 0.726367 | 1.052944 | 0.001572 | 0.001731 | 0.001579 |
| swizzle_const_fail.test | COMPILE_FAIL | 0.108518 | 0.199175 | 0.277971 | — | — | — |
| swizzle2_test2.test | RUN | 0.130707 | 0.298588 | 0.395754 | 0.001564 | 0.001538 | 0.001251 |
| swizzle2_test3.test | RUN | 0.130130 | 0.299851 | 0.392521 | 0.001540 | 0.001560 | 0.001334 |
| swizzle2_test4.test | RUN | 0.131445 | 0.295894 | 0.415199 | 0.001442 | 0.001771 | 0.001513 |
| swizzle2_test.test | RUN | 0.419935 | 0.843573 | 1.359465 | 0.001731 | 0.001593 | 0.001698 |
| swizzle3_test2.test | RUN | 0.146006 | 0.316246 | 0.453531 | 0.001656 | 0.001665 | 0.001404 |
| swizzle3_test3.test | RUN | 0.144740 | 0.321612 | 0.475710 | 0.001506 | 0.001415 | 0.001405 |
| swizzle3_test4.test | RUN | 0.145395 | 0.332321 | 0.449939 | 0.001343 | 0.001584 | 0.001556 |
| swizzle3_test.test | RUN | 0.406703 | 0.862860 | 1.373472 | 0.001611 | 0.001439 | 0.001670 |
| swizzle4_test2.test | RUN | 0.248381 | 0.468884 | 0.813367 | 0.001461 | 0.001741 | 0.001598 |
| swizzle4_test3.test | RUN | 0.246029 | 0.447143 | 0.777129 | 0.001522 | 0.001787 | 0.001745 |
| swizzle4_test4.test | RUN | 0.256413 | 0.475176 | 0.747055 | 0.001576 | 0.001782 | 0.001396 |
| swizzle4_test.test | RUN | 0.422613 | 0.907980 | 1.381818 | 0.001524 | 0.001537 | 0.001644 |
| deduce_scalar_test.test | COMPILE | 0.021276 | 0.046295 | 0.073348 | — | — | — |
| deduce_scalar_mq_test.test | RUN | 0.157083 | 0.355245 | 0.481070 | 0.001642 | 0.001638 | 0.001483 |
| deduce_scalar_mv_test.test | RUN | 0.185701 | 0.411859 | 0.616286 | 0.001644 | 0.001751 | 0.001688 |
| deduce_scalar_fail.test | COMPILE_FAIL | 0.017842 | 0.030850 | 0.050673 | — | — | — |
| deduce_mat_test.test | COMPILE | 0.020583 | 0.041648 | 0.061270 | — | — | — |
| deduce_quat_test.test | COMPILE | 0.018288 | 0.037364 | 0.056886 | — | — | — |
| deduce_vec_test.test | COMPILE | 0.019523 | 0.037680 | 0.062760 | — | — | — |
| interop_test.test | RUN | 0.196901 | 0.504956 | 0.850024 | 0.000790 | 0.000801 | 0.001520 |
| transform_test.test | RUN | 0.375750 | 0.649782 | 1.156242 | 0.001298 | 0.001367 | 0.001176 |
| projection_test.test | RUN | 0.232260 | 0.579880 | 0.650143 | 0.001315 | 0.001246 | 0.001266 |
| scalar_traits_test.test | COMPILE | 0.020180 | 0.039495 | 0.067946 | — | — | — |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.955×† | 0.957×, 0.952× | 0.924× |
| clang | 0.962× | 0.954×, 0.971× | 1.017× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1361 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43632677224).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| access_m_test.test | 10 | 0.001001s | 0.000975s | 0.001006s | byte equality observed |
| access_q_test.test | 10 | 0.000981s | 0.000985s | 0.001044s | byte equality observed |
| access_v_test.test | 10 | 0.001005s | 0.001001s | 0.001008s | byte equality observed |
| assign_test.test | 10 | 0.000976s | 0.001027s | 0.001006s | byte equality observed |
| cmp_mm_test.test | 10 | 0.001007s | 0.001013s | 0.001018s | byte equality observed |
| cmp_qq_test.test | 10 | 0.001011s | 0.000990s | 0.001005s | byte equality observed |
| cmp_vv_test.test | 10 | 0.001006s | 0.001000s | 0.001000s | byte equality observed |
| col_mat_test.test | 10 | 0.001012s | 0.000991s | 0.001017s | byte equality observed |
| col_test.test | 10 | 0.000988s | 0.000985s | 0.001004s | byte equality observed |
| conjugate_test.test | 10 | 0.000996s | 0.001027s | 0.001001s | byte equality observed |
| convert_to_test.test | 10 | 0.001006s | 0.000988s | 0.001002s | byte equality observed |
| cross_test.test | 10 | 0.000979s | 0.000981s | 0.000989s | byte equality observed |
| deduce_scalar_mq_test.test | 10 | 0.000997s | 0.000990s | 0.001012s | byte equality observed |
| deduce_scalar_mv_test.test | 10 | 0.000999s | 0.001020s | 0.000997s | byte equality observed |
| del_col_test.test | 10 | 0.001005s | 0.000994s | 0.001009s | byte equality observed |
| del_row_col_test.test | 10 | 0.001012s | 0.001001s | 0.000993s | byte equality observed |
| del_row_test.test | 10 | 0.001023s | 0.000990s | 0.001008s | byte equality observed |
| determinant_test.test | 10 | 0.001015s | 0.001002s | 0.001009s | byte equality observed |
| diag_mat_test.test | 10 | 0.001017s | 0.001007s | 0.001012s | byte equality observed |
| diag_test.test | 10 | 0.001012s | 0.000995s | 0.001015s | byte equality observed |
| div_eq_ms_test.test | 10 | 0.001003s | 0.001002s | 0.001014s | byte equality observed |
| div_eq_qs_test.test | 10 | 0.000991s | 0.001002s | 0.001009s | byte equality observed |
| div_eq_vs_test.test | 10 | 0.001007s | 0.001005s | 0.000996s | byte equality observed |
| div_ms_test.test | 10 | 0.000989s | 0.000998s | 0.001020s | byte equality observed |
| div_qs_test.test | 10 | 0.001001s | 0.001009s | 0.001019s | byte equality observed |
| div_vs_test.test | 10 | 0.000978s | 0.000999s | 0.001008s | byte equality observed |
| dot_qq_test.test | 10 | 0.000983s | 0.001009s | 0.000993s | byte equality observed |
| dot_vv_test.test | 10 | 0.001013s | 0.001021s | 0.001002s | byte equality observed |
| eq_mm_test.test | 10 | 0.000999s | 0.001023s | 0.001014s | byte equality observed |
| eq_qq_test.test | 10 | 0.001008s | 0.000998s | 0.000995s | byte equality observed |
| eq_vv_test.test | 10 | 0.001010s | 0.001002s | 0.000978s | byte equality observed |
| identity_mat_test.test | 10 | 0.001003s | 0.000997s | 0.000976s | byte equality observed |
| identity_quat_test.test | 10 | 0.000995s | 0.000995s | 0.000982s | byte equality observed |
| interop_test.test | 10 | 0.000456s | 0.000462s | 0.000985s | byte equality observed |
| inverse_m_test.test | 10 | 0.001040s | 0.001044s | 0.001029s | byte equality observed |
| inverse_q_test.test | 10 | 0.000988s | 0.001027s | 0.000961s | byte equality observed |
| mag_q_test.test | 10 | 0.000988s | 0.000989s | 0.000985s | byte equality observed |
| mag_sqr_q_test.test | 10 | 0.000973s | 0.001008s | 0.000990s | byte equality observed |
| mag_sqr_v_test.test | 10 | 0.001000s | 0.001006s | 0.001042s | byte equality observed |
| mag_v_test.test | 10 | 0.000987s | 0.000987s | 0.001046s | byte equality observed |
| mat_index_test.test | 10 | 0.001043s | 0.000999s | 0.000992s | byte equality observed |
| mat_traits_array_test.test | 10 | 0.000991s | 0.001007s | 0.001017s | byte equality observed |
| mat_traits_std_array_test.test | 10 | 0.000971s | 0.000985s | 0.000979s | byte equality observed |
| math_test.test | 10 | 0.001520s | 0.001445s | 0.001335s | byte equality observed |
| minus_eq_mm_test.test | 10 | 0.000991s | 0.000993s | 0.001003s | byte equality observed |
| minus_eq_qq_test.test | 10 | 0.001021s | 0.000997s | 0.000995s | byte equality observed |
| minus_eq_vv_test.test | 10 | 0.000973s | 0.000999s | 0.000985s | byte equality observed |
| minus_m_test.test | 10 | 0.000991s | 0.000984s | 0.000984s | byte equality observed |
| minus_mm_test.test | 10 | 0.000997s | 0.000994s | 0.000992s | byte equality observed |
| minus_q_test.test | 10 | 0.000999s | 0.000987s | 0.000983s | byte equality observed |
| minus_qq_test.test | 10 | 0.001019s | 0.001007s | 0.001003s | byte equality observed |
| minus_v_test.test | 10 | 0.000997s | 0.000990s | 0.000997s | byte equality observed |
| minus_vv_test.test | 10 | 0.000995s | 0.000981s | 0.001008s | byte equality observed |
| mul_eq_mm_test.test | 10 | 0.001007s | 0.000996s | 0.001012s | byte equality observed |
| mul_eq_ms_test.test | 10 | 0.000973s | 0.001004s | 0.000999s | byte equality observed |
| mul_eq_qq_test.test | 10 | 0.000993s | 0.001010s | 0.001008s | byte equality observed |
| mul_eq_qs_test.test | 10 | 0.000996s | 0.000985s | 0.000985s | byte equality observed |
| mul_eq_vs_test.test | 10 | 0.001013s | 0.001008s | 0.000994s | byte equality observed |
| mul_mm_test.test | 10 | 0.001010s | 0.000998s | 0.000996s | byte equality observed |
| mul_ms_test.test | 10 | 0.000992s | 0.001014s | 0.000979s | byte equality observed |
| mul_mv_test.test | 10 | 0.001011s | 0.000966s | 0.000958s | byte equality observed |
| mul_qq_test.test | 10 | 0.001010s | 0.000995s | 0.001015s | byte equality observed |
| mul_qs_test.test | 10 | 0.001010s | 0.001014s | 0.000969s | byte equality observed |
| mul_qv_test.test | 10 | 0.001003s | 0.001032s | 0.001012s | byte equality observed |
| mul_sm_test.test | 10 | 0.001007s | 0.001006s | 0.000971s | byte equality observed |
| mul_sv_test.test | 10 | 0.001002s | 0.001016s | 0.001007s | byte equality observed |
| mul_vm_test.test | 10 | 0.000999s | 0.001020s | 0.000982s | byte equality observed |
| mul_vs_test.test | 10 | 0.000992s | 0.000990s | 0.000995s | byte equality observed |
| neg_col_test.test | 10 | 0.000986s | 0.000979s | 0.000999s | byte equality observed |
| neg_row_test.test | 10 | 0.000991s | 0.000993s | 0.000998s | byte equality observed |
| normalize_q_test.test | 10 | 0.001007s | 0.001010s | 0.001028s | byte equality observed |
| normalize_v_test.test | 10 | 0.000996s | 0.000994s | 0.000991s | byte equality observed |
| plus_eq_mm_test.test | 10 | 0.000986s | 0.001012s | 0.000990s | byte equality observed |
| plus_eq_qq_test.test | 10 | 0.001019s | 0.000991s | 0.001017s | byte equality observed |
| plus_eq_vv_test.test | 10 | 0.001002s | 0.000975s | 0.001032s | byte equality observed |
| plus_mm_test.test | 10 | 0.001000s | 0.000977s | 0.001024s | byte equality observed |
| plus_qq_test.test | 10 | 0.000996s | 0.000994s | 0.000996s | byte equality observed |
| plus_vv_test.test | 10 | 0.001000s | 0.000979s | 0.001024s | byte equality observed |
| projection_test.test | 10 | 0.001019s | 0.000979s | 0.000979s | byte equality observed |
| quat_traits_array_test.test | 10 | 0.001009s | 0.000988s | 0.000998s | byte equality observed |
| quat_traits_std_array_test.test | 10 | 0.000993s | 0.000948s | 0.001008s | byte equality observed |
| rot_mat_test.test | 1 | 0.030238s | 0.024208s | 0.025714s | byte equality observed |
| rot_quat_test.test | 10 | 0.000960s | 0.000958s | 0.000959s | byte equality observed |
| rotx_mat_test.test | 10 | 0.000982s | 0.000981s | 0.000976s | byte equality observed |
| rotx_quat_test.test | 10 | 0.001002s | 0.000987s | 0.001011s | byte equality observed |
| roty_mat_test.test | 10 | 0.001006s | 0.001051s | 0.001027s | byte equality observed |
| roty_quat_test.test | 10 | 0.001011s | 0.001020s | 0.001003s | byte equality observed |
| rotz_mat_test.test | 10 | 0.001044s | 0.001048s | 0.001034s | byte equality observed |
| rotz_quat_test.test | 10 | 0.001007s | 0.001024s | 0.000994s | byte equality observed |
| row_mat_test.test | 10 | 0.001000s | 0.000994s | 0.001018s | byte equality observed |
| row_test.test | 10 | 0.001020s | 0.000986s | 0.001021s | byte equality observed |
| scalar_cast_m_test.test | 10 | 0.000985s | 0.001000s | 0.001003s | byte equality observed |
| scalar_cast_q_test.test | 10 | 0.000992s | 0.000971s | 0.000990s | byte equality observed |
| scalar_cast_v_test.test | 10 | 0.000973s | 0.000954s | 0.000972s | byte equality observed |
| slerp_test.test | 2 | 0.013318s | 0.011215s | 0.011974s | byte equality observed |
| swap_cols_test.test | 10 | 0.000966s | 0.000942s | 0.000935s | byte equality observed |
| swap_rows_test.test | 10 | 0.000984s | 0.000996s | 0.000982s | byte equality observed |
| swizzle2_test.test | 10 | 0.000984s | 0.001036s | 0.001030s | byte equality observed |
| swizzle2_test2.test | 10 | 0.000996s | 0.001013s | 0.001008s | byte equality observed |
| swizzle2_test3.test | 10 | 0.001005s | 0.000975s | 0.001011s | byte equality observed |
| swizzle2_test4.test | 10 | 0.000982s | 0.001004s | 0.001012s | byte equality observed |
| swizzle3_test.test | 10 | 0.000989s | 0.001018s | 0.001018s | byte equality observed |
| swizzle3_test2.test | 10 | 0.001007s | 0.001003s | 0.000998s | byte equality observed |
| swizzle3_test3.test | 10 | 0.000985s | 0.001037s | 0.001014s | byte equality observed |
| swizzle3_test4.test | 10 | 0.001010s | 0.000989s | 0.001014s | byte equality observed |
| swizzle4_test.test | 10 | 0.000992s | 0.001003s | 0.000972s | byte equality observed |
| swizzle4_test2.test | 10 | 0.001004s | 0.000970s | 0.001004s | byte equality observed |
| swizzle4_test3.test | 10 | 0.000989s | 0.000977s | 0.001014s | byte equality observed |
| swizzle4_test4.test | 10 | 0.001024s | 0.000966s | 0.001004s | byte equality observed |
| to_string_test.test | 10 | 0.001031s | 0.001016s | 0.001025s | byte equality observed |
| transform_test.test | 10 | 0.001005s | 0.000997s | 0.000993s | byte equality observed |
| translation_mat_test.test | 10 | 0.000989s | 0.000979s | 0.001003s | byte equality observed |
| translation_test.test | 10 | 0.000988s | 0.000990s | 0.000979s | byte equality observed |
| transpose_test.test | 10 | 0.001004s | 0.000971s | 0.000998s | byte equality observed |
| vec_index_test.test | 10 | 0.000996s | 0.000974s | 0.000987s | byte equality observed |
| vec_register_test.test | 10 | 0.001000s | 0.000986s | 0.001012s | byte equality observed |
| vec_traits_array_test.test | 10 | 0.001005s | 0.000988s | 0.000999s | byte equality observed |
| vec_traits_gnuc_test.test | 10 | 0.001000s | 0.001012s | 0.001013s | byte equality observed |
| vec_traits_std_array_test.test | 10 | 0.000987s | 0.000999s | 0.000992s | byte equality observed |
| zero_mat_test.test | 10 | 0.001015s | 0.000992s | 0.000999s | byte equality observed |
| zero_quat_test.test | 10 | 0.001007s | 0.000974s | 0.000998s | byte equality observed |
| zero_vec_test.test | 10 | 0.001043s | 0.000979s | 0.000980s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43632677224).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
