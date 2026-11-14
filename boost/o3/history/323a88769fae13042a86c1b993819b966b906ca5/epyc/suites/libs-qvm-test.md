# libs/qvm/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| math_test.test | RUN | 0.262391 | 0.639224 | 0.783273 | 0.002172 | 0.002168 | 0.002242 |
| mat_traits_array_test.test | RUN | 0.203565 | 0.626473 | 0.630322 | 0.001807 | 0.001512 | 0.001301 |
| mat_traits_std_array_test.test | RUN | 0.202608 | 0.492993 | 0.630778 | 0.001535 | 0.001594 | 0.001570 |
| vec_traits_array_test.test | RUN | 0.179240 | 0.505771 | 0.535550 | 0.001540 | 0.001654 | 0.001410 |
| vec_traits_gnuc_test.test | RUN | 0.316725 | 0.624127 | 1.030697 | 0.001550 | 0.001620 | 0.001607 |
| vec_traits_std_array_test.test | RUN | 0.172312 | 0.391564 | 0.523625 | 0.001492 | 0.001671 | 0.001462 |
| quat_traits_array_test.test | RUN | 0.168543 | 0.520027 | 0.517305 | 0.001591 | 0.001625 | 0.001562 |
| quat_traits_std_array_test.test | RUN | 0.169099 | 0.404816 | 0.517029 | 0.001519 | 0.001486 | 0.001775 |
| access_m_test.test | RUN | 0.278165 | 0.957702 | 1.130933 | 0.001788 | 0.001842 | 0.001489 |
| access_m_fail1.test | COMPILE_FAIL | 0.027445 | 0.041270 | 0.088943 | — | — | — |
| access_m_fail2.test | COMPILE_FAIL | 0.027035 | 0.045380 | 0.085805 | — | — | — |
| access_q_test.test | RUN | 0.234266 | 0.488074 | 0.676789 | 0.001480 | 0.001760 | 0.001772 |
| access_q_fail.test | COMPILE_FAIL | 0.020420 | 0.033004 | 0.068447 | — | — | — |
| access_v_test.test | RUN | 0.229143 | 0.523678 | 0.682756 | 0.001691 | 0.001644 | 0.001616 |
| access_v_fail1.test | COMPILE_FAIL | 0.018785 | 0.031879 | 0.059625 | — | — | — |
| access_v_fail2.test | COMPILE_FAIL | 0.019055 | 0.032051 | 0.058957 | — | — | — |
| assign_test.test | RUN | 0.335448 | 0.812876 | 1.174232 | 0.001610 | 0.001922 | 0.001890 |
| to_string_test.test | RUN | 0.384087 | 1.250374 | 6.794554 | 0.001645 | 0.001712 | 0.001613 |
| cmp_vv_test.test | RUN | 0.272696 | 0.653874 | 0.857027 | 0.001347 | 0.001656 | 0.001555 |
| cross_test.test | RUN | 0.266598 | 0.577290 | 0.811246 | 0.001832 | 0.001614 | 0.001636 |
| div_eq_vs_test.test | RUN | 0.252819 | 0.543165 | 0.797695 | 0.001469 | 0.001626 | 0.001885 |
| div_vs_test.test | RUN | 0.265799 | 0.653405 | 0.853168 | 0.001493 | 0.001625 | 0.001591 |
| dot_vv_test.test | RUN | 0.256277 | 0.597373 | 0.771768 | 0.001794 | 0.001718 | 0.001784 |
| eq_vv_test.test | RUN | 0.282404 | 0.672790 | 0.878999 | 0.001610 | 0.001764 | 0.001856 |
| mag_v_test.test | RUN | 0.255312 | 0.559230 | 0.732753 | 0.001771 | 0.001727 | 0.001589 |
| mag_sqr_v_test.test | RUN | 0.253010 | 0.538443 | 0.776291 | 0.001726 | 0.001706 | 0.001654 |
| minus_v_test.test | RUN | 0.260016 | 0.639396 | 0.858572 | 0.001511 | 0.001823 | 0.001866 |
| minus_eq_vv_test.test | RUN | 0.263042 | 0.631768 | 0.840786 | 0.001670 | 0.001863 | 0.001475 |
| minus_vv_test.test | RUN | 0.276860 | 0.672087 | 0.818695 | 0.001729 | 0.001856 | 0.001584 |
| mul_eq_vs_test.test | RUN | 0.257562 | 0.549424 | 0.839689 | 0.001570 | 0.001772 | 0.001334 |
| mul_vs_test.test | RUN | 0.272073 | 0.649024 | 0.895821 | 0.001427 | 0.001866 | 0.001840 |
| mul_sv_test.test | RUN | 0.274076 | 0.693636 | 0.836085 | 0.001434 | 0.001850 | 0.001459 |
| mul_vm_test.test | RUN | 0.373541 | 1.145907 | 1.348544 | 0.001527 | 0.001522 | 0.001566 |
| normalize_v_test.test | RUN | 0.273718 | 0.829962 | 0.917897 | 0.001462 | 0.001500 | 0.001738 |
| plus_eq_vv_test.test | RUN | 0.258521 | 0.648256 | 0.763511 | 0.001397 | 0.001751 | 0.001564 |
| plus_vv_test.test | RUN | 0.280516 | 0.671223 | 0.857416 | 0.001524 | 0.001914 | 0.001736 |
| scalar_cast_v_test.test | RUN | 0.251962 | 0.513356 | 0.739560 | 0.001306 | 0.001648 | 0.001300 |
| vec_index_test.test | RUN | 0.219060 | 0.501481 | 0.681997 | 0.001589 | 0.001548 | 0.001681 |
| vec_register_test.test | RUN | 0.143471 | 0.468050 | 0.504833 | 0.001435 | 0.001638 | 0.001549 |
| cmp_mm_test.test | RUN | 0.422446 | 1.446683 | 1.707236 | 0.001838 | 0.001669 | 0.001693 |
| determinant_test.test | RUN | 0.302079 | 0.753715 | 0.947057 | 0.001741 | 0.001614 | 0.001836 |
| div_eq_ms_test.test | RUN | 0.308888 | 0.707738 | 1.104685 | 0.001524 | 0.001871 | 0.001778 |
| div_ms_test.test | RUN | 0.363896 | 1.090607 | 1.303818 | 0.001585 | 0.001857 | 0.001842 |
| eq_mm_test.test | RUN | 0.417092 | 1.363560 | 1.633066 | 0.001785 | 0.001755 | 0.001774 |
| minus_m_test.test | RUN | 0.345955 | 1.091804 | 1.228626 | 0.001641 | 0.001877 | 0.001786 |
| minus_eq_mm_test.test | RUN | 0.345010 | 1.021075 | 1.157034 | 0.001514 | 0.001722 | 0.001802 |
| minus_mm_test.test | RUN | 0.374740 | 1.303093 | 1.387698 | 0.001844 | 0.001787 | 0.001788 |
| mul_eq_mm_test.test | RUN | 0.321438 | 0.948603 | 1.025414 | 0.001844 | 0.001591 | 0.001860 |
| mul_eq_ms_test.test | RUN | 0.304808 | 0.703161 | 1.108522 | 0.001811 | 0.001740 | 0.001836 |
| mul_mm_test.test | RUN | 0.433714 | 2.100901 | 1.729616 | 0.001937 | 0.001736 | 0.001479 |
| mul_ms_test.test | RUN | 0.381849 | 1.106799 | 1.294718 | 0.001930 | 0.001825 | 0.001962 |
| mul_sm_test.test | RUN | 0.379391 | 1.102817 | 1.358534 | 0.001820 | 0.001709 | 0.001771 |
| mul_mv_test.test | RUN | 0.393344 | 1.202953 | 1.408383 | 0.001854 | 0.001492 | 0.001756 |
| inverse_m_test.test | RUN | 0.503150 | 2.144178 | 1.881029 | 0.001955 | 0.001800 | 0.001570 |
| plus_eq_mm_test.test | RUN | 0.353392 | 1.013953 | 1.132465 | 0.001857 | 0.001972 | 0.001866 |
| plus_mm_test.test | RUN | 0.395132 | 1.304529 | 1.386257 | 0.001781 | 0.001735 | 0.001959 |
| scalar_cast_m_test.test | RUN | 0.284166 | 0.599390 | 0.840889 | 0.001624 | 0.001782 | 0.001631 |
| mat_index_test.test | RUN | 0.226345 | 0.547935 | 0.736871 | 0.001824 | 0.001841 | 0.001559 |
| cmp_qq_test.test | RUN | 0.262465 | 0.524378 | 0.716985 | 0.001810 | 0.001871 | 0.001723 |
| conjugate_test.test | RUN | 0.250959 | 0.533779 | 0.746628 | 0.001943 | 0.001638 | 0.001477 |
| normalize_q_test.test | RUN | 0.258065 | 0.591320 | 0.797543 | 0.001558 | 0.001656 | 0.001596 |
| div_eq_qs_test.test | RUN | 0.253898 | 0.495147 | 0.745639 | 0.001772 | 0.001605 | 0.001849 |
| div_qs_test.test | RUN | 0.258075 | 0.540924 | 0.729069 | 0.001792 | 0.001932 | 0.001816 |
| dot_qq_test.test | RUN | 0.256261 | 0.521016 | 0.765128 | 0.001878 | 0.001560 | 0.001818 |
| eq_qq_test.test | RUN | 0.253358 | 0.553121 | 0.773127 | 0.001534 | 0.001751 | 0.001850 |
| inverse_q_test.test | RUN | 0.303597 | 0.724638 | 0.995258 | 0.001878 | 0.001692 | 0.001810 |
| mag_q_test.test | RUN | 0.258784 | 0.549773 | 0.727954 | 0.001790 | 0.001656 | 0.001832 |
| mag_sqr_q_test.test | RUN | 0.253078 | 0.529808 | 0.750520 | 0.001709 | 0.001623 | 0.001883 |
| minus_q_test.test | RUN | 0.249368 | 0.540914 | 0.726485 | 0.001642 | 0.001847 | 0.001854 |
| minus_eq_qq_test.test | RUN | 0.253322 | 0.537361 | 0.775104 | 0.001729 | 0.001691 | 0.001798 |
| minus_qq_test.test | RUN | 0.261524 | 0.559821 | 0.757453 | 0.001856 | 0.001765 | 0.001838 |
| mul_eq_qs_test.test | RUN | 0.246415 | 0.508017 | 0.738276 | 0.001741 | 0.001865 | 0.001797 |
| mul_qs_test.test | RUN | 0.248118 | 0.545352 | 0.772629 | 0.001568 | 0.001880 | 0.001767 |
| mul_qv_test.test | RUN | 0.310446 | 0.730101 | 0.950324 | 0.001890 | 0.001792 | 0.002071 |
| mul_qq_test.test | RUN | 0.300044 | 0.745838 | 0.955080 | 0.001736 | 0.001747 | 0.001756 |
| mul_eq_qq_test.test | RUN | 0.296216 | 0.742401 | 0.931085 | 0.001608 | 0.001833 | 0.001932 |
| plus_eq_qq_test.test | RUN | 0.252273 | 0.551092 | 0.751018 | 0.001713 | 0.001818 | 0.001685 |
| plus_qq_test.test | RUN | 0.259599 | 0.553321 | 0.745416 | 0.001750 | 0.001897 | 0.001936 |
| scalar_cast_q_test.test | RUN | 0.252330 | 0.502144 | 0.738496 | 0.001585 | 0.001416 | 0.001946 |
| slerp_test.test | RUN | 0.270352 | 1.016075 | 0.891466 | 0.017863 | 0.014413 | 0.015727 |
| convert_to_test.test | RUN | 0.367746 | 0.944913 | 1.402229 | 0.001656 | 0.001886 | 0.001840 |
| rot_mat_test.test | RUN | 0.545795 | 4.185560 | 4.128112 | 0.044408 | 0.038631 | 0.035436 |
| rot_quat_test.test | RUN | 0.306617 | 0.875860 | 0.966778 | 0.001883 | 0.001939 | 0.001838 |
| rotx_mat_test.test | RUN | 0.356214 | 1.143014 | 1.273852 | 0.001992 | 0.001952 | 0.001783 |
| rotx_quat_test.test | RUN | 0.311705 | 0.734418 | 0.917040 | 0.001645 | 0.001962 | 0.001739 |
| roty_mat_test.test | RUN | 0.361330 | 1.124694 | 1.325015 | 0.001860 | 0.001850 | 0.001806 |
| roty_quat_test.test | RUN | 0.308437 | 0.768768 | 0.914161 | 0.001528 | 0.001885 | 0.001875 |
| rotz_mat_test.test | RUN | 0.370679 | 1.288556 | 1.206494 | 0.001620 | 0.001708 | 0.001710 |
| rotz_quat_test.test | RUN | 0.300478 | 0.729722 | 0.936366 | 0.001744 | 0.001685 | 0.001621 |
| zero_vec_test.test | RUN | 0.275679 | 0.638451 | 0.816152 | 0.001887 | 0.001592 | 0.001616 |
| zero_mat_test.test | RUN | 0.353400 | 1.034991 | 1.076883 | 0.001782 | 0.001873 | 0.001879 |
| zero_quat_test.test | RUN | 0.263339 | 0.534082 | 0.709880 | 0.001559 | 0.001700 | 0.001935 |
| identity_mat_test.test | RUN | 0.315347 | 0.787478 | 0.953738 | 0.001851 | 0.001993 | 0.001821 |
| identity_quat_test.test | RUN | 0.261147 | 0.505000 | 0.727468 | 0.001724 | 0.001758 | 0.001805 |
| col_test.test | RUN | 0.507481 | 1.665425 | 2.085641 | 0.001724 | 0.001774 | 0.001818 |
| col_mat_test.test | RUN | 0.336332 | 0.796185 | 0.981820 | 0.001685 | 0.001855 | 0.001699 |
| neg_col_test.test | RUN | 0.366132 | 1.043566 | 1.269379 | 0.001677 | 0.001763 | 0.001772 |
| neg_row_test.test | RUN | 0.390086 | 1.072011 | 1.304424 | 0.001779 | 0.001835 | 0.001677 |
| del_col_test.test | RUN | 0.399972 | 1.153930 | 1.299721 | 0.001696 | 0.001886 | 0.001758 |
| del_row_test.test | RUN | 0.388318 | 1.130939 | 1.298063 | 0.001568 | 0.001863 | 0.001857 |
| del_row_col_test.test | RUN | 0.528326 | 2.122773 | 2.498317 | 0.001824 | 0.001765 | 0.001615 |
| swap_cols_test.test | RUN | 0.704228 | 2.891292 | 3.010814 | 0.001840 | 0.001554 | 0.001843 |
| swap_rows_test.test | RUN | 0.743677 | 3.004878 | 3.030392 | 0.001830 | 0.001844 | 0.001914 |
| diag_test.test | RUN | 0.316701 | 0.751235 | 1.175440 | 0.001808 | 0.001645 | 0.001641 |
| diag_mat_test.test | RUN | 0.333057 | 0.764160 | 0.962764 | 0.001787 | 0.001726 | 0.001664 |
| row_test.test | RUN | 0.483574 | 1.616701 | 2.048025 | 0.001734 | 0.001690 | 0.001822 |
| row_mat_test.test | RUN | 0.317911 | 0.723977 | 0.971107 | 0.001882 | 0.001669 | 0.001900 |
| transpose_test.test | RUN | 0.371149 | 1.085939 | 1.308754 | 0.001690 | 0.001859 | 0.001762 |
| translation_test.test | RUN | 0.307442 | 0.687405 | 0.990768 | 0.001377 | 0.001558 | 0.001738 |
| translation_mat_test.test | RUN | 0.334025 | 0.719727 | 1.115133 | 0.001792 | 0.001534 | 0.001648 |
| swizzle_const_fail.test | COMPILE_FAIL | 0.114686 | 0.210484 | 0.320537 | — | — | — |
| swizzle2_test2.test | RUN | 0.135585 | 0.313158 | 0.390479 | 0.001659 | 0.001720 | 0.001805 |
| swizzle2_test3.test | RUN | 0.134904 | 0.307119 | 0.420919 | 0.001543 | 0.001558 | 0.001578 |
| swizzle2_test4.test | RUN | 0.141664 | 0.298691 | 0.389302 | 0.001745 | 0.001356 | 0.001578 |
| swizzle2_test.test | RUN | 0.436276 | 0.830837 | 1.373742 | 0.001779 | 0.001681 | 0.001768 |
| swizzle3_test2.test | RUN | 0.150012 | 0.327931 | 0.476812 | 0.001826 | 0.001918 | 0.001675 |
| swizzle3_test3.test | RUN | 0.146958 | 0.321756 | 0.474964 | 0.001522 | 0.001434 | 0.001611 |
| swizzle3_test4.test | RUN | 0.153429 | 0.312949 | 0.468077 | 0.001698 | 0.001695 | 0.001421 |
| swizzle3_test.test | RUN | 0.431022 | 0.870688 | 1.393501 | 0.001623 | 0.001508 | 0.001864 |
| swizzle4_test2.test | RUN | 0.255183 | 0.461586 | 0.834201 | 0.001822 | 0.001820 | 0.001549 |
| swizzle4_test3.test | RUN | 0.257626 | 0.452726 | 0.790282 | 0.001787 | 0.001856 | 0.001864 |
| swizzle4_test4.test | RUN | 0.263815 | 0.491224 | 0.770843 | 0.001566 | 0.001666 | 0.001866 |
| swizzle4_test.test | RUN | 0.443605 | 0.904776 | 1.395666 | 0.001598 | 0.001675 | 0.001648 |
| deduce_scalar_test.test | COMPILE | 0.022781 | 0.047155 | 0.072450 | — | — | — |
| deduce_scalar_mq_test.test | RUN | 0.165194 | 0.363512 | 0.457915 | 0.001809 | 0.001701 | 0.001930 |
| deduce_scalar_mv_test.test | RUN | 0.202181 | 0.397230 | 0.561317 | 0.001528 | 0.001611 | 0.001857 |
| deduce_scalar_fail.test | COMPILE_FAIL | 0.018681 | 0.030825 | 0.059324 | — | — | — |
| deduce_mat_test.test | COMPILE | 0.020100 | 0.041208 | 0.067859 | — | — | — |
| deduce_quat_test.test | COMPILE | 0.019257 | 0.037897 | 0.066057 | — | — | — |
| deduce_vec_test.test | COMPILE | 0.020307 | 0.039463 | 0.065331 | — | — | — |
| interop_test.test | RUN | 0.180579 | 0.522599 | 0.849189 | 0.000672 | 0.000774 | 0.001874 |
| transform_test.test | RUN | 0.388937 | 0.652425 | 1.108250 | 0.001409 | 0.001246 | 0.001255 |
| projection_test.test | RUN | 0.261028 | 0.620043 | 0.769327 | 0.001347 | 0.001350 | 0.001326 |
| scalar_traits_test.test | COMPILE | 0.021026 | 0.040136 | 0.064073 | — | — | — |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.963×† | 0.992×, 0.935× | 0.956× |
| clang | 0.979× | 0.988×, 0.969× | 1.025× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1363 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43620819273).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| access_m_test.test | 10 | 0.001160s | 0.001150s | 0.001130s | byte equality observed |
| access_q_test.test | 10 | 0.001132s | 0.001125s | 0.001172s | byte equality observed |
| access_v_test.test | 10 | 0.001156s | 0.001188s | 0.001124s | byte equality observed |
| assign_test.test | 10 | 0.001156s | 0.001106s | 0.001145s | byte equality observed |
| cmp_mm_test.test | 10 | 0.001177s | 0.001171s | 0.001129s | byte equality observed |
| cmp_qq_test.test | 10 | 0.001143s | 0.001167s | 0.001074s | byte equality observed |
| cmp_vv_test.test | 10 | 0.001161s | 0.001142s | 0.001137s | byte equality observed |
| col_mat_test.test | 10 | 0.001143s | 0.001180s | 0.001128s | byte equality observed |
| col_test.test | 10 | 0.001152s | 0.001136s | 0.001133s | byte equality observed |
| conjugate_test.test | 10 | 0.001145s | 0.001180s | 0.001141s | byte equality observed |
| convert_to_test.test | 10 | 0.001145s | 0.001157s | 0.001161s | byte equality observed |
| cross_test.test | 10 | 0.001136s | 0.001167s | 0.001154s | byte equality observed |
| deduce_scalar_mq_test.test | 10 | 0.001170s | 0.001150s | 0.001066s | byte equality observed |
| deduce_scalar_mv_test.test | 10 | 0.001156s | 0.001141s | 0.001037s | byte equality observed |
| del_col_test.test | 10 | 0.001153s | 0.001153s | 0.001078s | byte equality observed |
| del_row_col_test.test | 10 | 0.001152s | 0.001128s | 0.001117s | byte equality observed |
| del_row_test.test | 10 | 0.001174s | 0.001139s | 0.001157s | byte equality observed |
| determinant_test.test | 10 | 0.001164s | 0.001163s | 0.001142s | byte equality observed |
| diag_mat_test.test | 10 | 0.001148s | 0.001138s | 0.001169s | byte equality observed |
| diag_test.test | 10 | 0.001153s | 0.001097s | 0.001164s | byte equality observed |
| div_eq_ms_test.test | 10 | 0.001152s | 0.001115s | 0.001116s | byte equality observed |
| div_eq_qs_test.test | 10 | 0.001126s | 0.001148s | 0.001153s | byte equality observed |
| div_eq_vs_test.test | 10 | 0.001151s | 0.001049s | 0.001129s | byte equality observed |
| div_ms_test.test | 10 | 0.001124s | 0.001159s | 0.001120s | byte equality observed |
| div_qs_test.test | 10 | 0.001130s | 0.001130s | 0.001142s | byte equality observed |
| div_vs_test.test | 10 | 0.001147s | 0.001144s | 0.001110s | byte equality observed |
| dot_qq_test.test | 10 | 0.001114s | 0.001157s | 0.001166s | byte equality observed |
| dot_vv_test.test | 10 | 0.001150s | 0.001154s | 0.001183s | byte equality observed |
| eq_mm_test.test | 10 | 0.001157s | 0.001154s | 0.001099s | byte equality observed |
| eq_qq_test.test | 10 | 0.001169s | 0.001164s | 0.001079s | byte equality observed |
| eq_vv_test.test | 10 | 0.001132s | 0.001165s | 0.001159s | byte equality observed |
| identity_mat_test.test | 10 | 0.001148s | 0.001157s | 0.001154s | byte equality observed |
| identity_quat_test.test | 10 | 0.001149s | 0.001150s | 0.001093s | byte equality observed |
| interop_test.test | 10 | 0.000498s | 0.000506s | 0.001131s | byte equality observed |
| inverse_m_test.test | 10 | 0.001238s | 0.001220s | 0.001189s | byte equality observed |
| inverse_q_test.test | 10 | 0.001162s | 0.001145s | 0.001146s | byte equality observed |
| mag_q_test.test | 10 | 0.001161s | 0.001171s | 0.001143s | byte equality observed |
| mag_sqr_q_test.test | 10 | 0.001142s | 0.001190s | 0.001147s | byte equality observed |
| mag_sqr_v_test.test | 10 | 0.001148s | 0.001150s | 0.001175s | byte equality observed |
| mag_v_test.test | 10 | 0.001173s | 0.001176s | 0.001144s | byte equality observed |
| mat_index_test.test | 10 | 0.001153s | 0.001153s | 0.001137s | byte equality observed |
| mat_traits_array_test.test | 10 | 0.001146s | 0.001172s | 0.001133s | byte equality observed |
| mat_traits_std_array_test.test | 10 | 0.001155s | 0.001152s | 0.001134s | byte equality observed |
| math_test.test | 10 | 0.001733s | 0.001706s | 0.001456s | byte equality observed |
| minus_eq_mm_test.test | 10 | 0.001147s | 0.001169s | 0.001130s | byte equality observed |
| minus_eq_qq_test.test | 10 | 0.001118s | 0.001159s | 0.001100s | byte equality observed |
| minus_eq_vv_test.test | 10 | 0.001141s | 0.001148s | 0.001123s | byte equality observed |
| minus_m_test.test | 10 | 0.001158s | 0.001170s | 0.001050s | byte equality observed |
| minus_mm_test.test | 10 | 0.001169s | 0.001174s | 0.001054s | byte equality observed |
| minus_q_test.test | 10 | 0.001148s | 0.001159s | 0.001147s | byte equality observed |
| minus_qq_test.test | 10 | 0.001168s | 0.001171s | 0.001178s | byte equality observed |
| minus_v_test.test | 10 | 0.001146s | 0.001157s | 0.001174s | byte equality observed |
| minus_vv_test.test | 10 | 0.001153s | 0.001202s | 0.001161s | byte equality observed |
| mul_eq_mm_test.test | 10 | 0.001149s | 0.001154s | 0.001151s | byte equality observed |
| mul_eq_ms_test.test | 10 | 0.001147s | 0.001167s | 0.001141s | byte equality observed |
| mul_eq_qq_test.test | 10 | 0.001173s | 0.001201s | 0.001170s | byte equality observed |
| mul_eq_qs_test.test | 10 | 0.001150s | 0.001166s | 0.001139s | byte equality observed |
| mul_eq_vs_test.test | 10 | 0.001162s | 0.001152s | 0.001085s | byte equality observed |
| mul_mm_test.test | 10 | 0.001151s | 0.001107s | 0.001134s | byte equality observed |
| mul_ms_test.test | 10 | 0.001151s | 0.001160s | 0.001079s | byte equality observed |
| mul_mv_test.test | 10 | 0.001171s | 0.001189s | 0.001152s | byte equality observed |
| mul_qq_test.test | 10 | 0.001140s | 0.001159s | 0.001167s | byte equality observed |
| mul_qs_test.test | 10 | 0.001141s | 0.001152s | 0.001132s | byte equality observed |
| mul_qv_test.test | 10 | 0.001180s | 0.001162s | 0.001166s | byte equality observed |
| mul_sm_test.test | 10 | 0.001146s | 0.001142s | 0.001146s | byte equality observed |
| mul_sv_test.test | 10 | 0.001166s | 0.001114s | 0.001169s | byte equality observed |
| mul_vm_test.test | 10 | 0.001158s | 0.001162s | 0.001168s | byte equality observed |
| mul_vs_test.test | 10 | 0.001174s | 0.001186s | 0.001159s | byte equality observed |
| neg_col_test.test | 10 | 0.001157s | 0.001187s | 0.001157s | byte equality observed |
| neg_row_test.test | 10 | 0.001150s | 0.001158s | 0.001145s | byte equality observed |
| normalize_q_test.test | 10 | 0.001146s | 0.001166s | 0.001145s | byte equality observed |
| normalize_v_test.test | 10 | 0.001156s | 0.001147s | 0.001128s | byte equality observed |
| plus_eq_mm_test.test | 10 | 0.001153s | 0.001172s | 0.001189s | byte equality observed |
| plus_eq_qq_test.test | 10 | 0.001154s | 0.001155s | 0.001151s | byte equality observed |
| plus_eq_vv_test.test | 10 | 0.001165s | 0.001155s | 0.001136s | byte equality observed |
| plus_mm_test.test | 10 | 0.001142s | 0.001173s | 0.001112s | byte equality observed |
| plus_qq_test.test | 10 | 0.001142s | 0.001163s | 0.001143s | byte equality observed |
| plus_vv_test.test | 10 | 0.001150s | 0.001153s | 0.001182s | byte equality observed |
| projection_test.test | 10 | 0.001162s | 0.001129s | 0.001161s | byte equality observed |
| quat_traits_array_test.test | 10 | 0.001159s | 0.001136s | 0.001160s | byte equality observed |
| quat_traits_std_array_test.test | 10 | 0.001138s | 0.001146s | 0.001136s | byte equality observed |
| rot_mat_test.test | 1 | 0.035989s | 0.034902s | 0.032740s | byte equality observed |
| rot_quat_test.test | 10 | 0.001124s | 0.001129s | 0.001167s | byte equality observed |
| rotx_mat_test.test | 10 | 0.001121s | 0.001170s | 0.001158s | byte equality observed |
| rotx_quat_test.test | 10 | 0.001151s | 0.001153s | 0.001155s | byte equality observed |
| roty_mat_test.test | 10 | 0.001172s | 0.001179s | 0.001171s | byte equality observed |
| roty_quat_test.test | 10 | 0.001153s | 0.001156s | 0.001196s | byte equality observed |
| rotz_mat_test.test | 10 | 0.001182s | 0.001194s | 0.001179s | byte equality observed |
| rotz_quat_test.test | 10 | 0.001176s | 0.001159s | 0.001159s | byte equality observed |
| row_mat_test.test | 10 | 0.001148s | 0.001157s | 0.001104s | byte equality observed |
| row_test.test | 10 | 0.001150s | 0.001186s | 0.001154s | byte equality observed |
| scalar_cast_m_test.test | 10 | 0.001161s | 0.001150s | 0.001144s | byte equality observed |
| scalar_cast_q_test.test | 10 | 0.001152s | 0.001177s | 0.001166s | byte equality observed |
| scalar_cast_v_test.test | 10 | 0.001126s | 0.001168s | 0.001125s | byte equality observed |
| slerp_test.test | 2 | 0.016182s | 0.013603s | 0.012791s | byte equality observed |
| swap_cols_test.test | 10 | 0.001166s | 0.001143s | 0.001136s | byte equality observed |
| swap_rows_test.test | 10 | 0.001175s | 0.001160s | 0.001101s | byte equality observed |
| swizzle2_test.test | 10 | 0.001126s | 0.001147s | 0.001076s | byte equality observed |
| swizzle2_test2.test | 10 | 0.001135s | 0.001180s | 0.001177s | byte equality observed |
| swizzle2_test3.test | 10 | 0.001134s | 0.001144s | 0.001154s | byte equality observed |
| swizzle2_test4.test | 10 | 0.001131s | 0.001181s | 0.001182s | byte equality observed |
| swizzle3_test.test | 10 | 0.001121s | 0.001164s | 0.001139s | byte equality observed |
| swizzle3_test2.test | 10 | 0.001177s | 0.001158s | 0.001167s | byte equality observed |
| swizzle3_test3.test | 8 | 0.001140s | 0.001177s | 0.001158s | byte equality observed |
| swizzle3_test4.test | 10 | 0.001161s | 0.001142s | 0.001171s | byte equality observed |
| swizzle4_test.test | 10 | 0.001169s | 0.001160s | 0.001181s | byte equality observed |
| swizzle4_test2.test | 10 | 0.001164s | 0.001163s | 0.001157s | byte equality observed |
| swizzle4_test3.test | 10 | 0.001147s | 0.001148s | 0.001189s | byte equality observed |
| swizzle4_test4.test | 10 | 0.001153s | 0.001140s | 0.001166s | byte equality observed |
| to_string_test.test | 10 | 0.001194s | 0.001224s | 0.001198s | byte equality observed |
| transform_test.test | 10 | 0.001165s | 0.001146s | 0.001130s | byte equality observed |
| translation_mat_test.test | 10 | 0.001126s | 0.001152s | 0.001157s | byte equality observed |
| translation_test.test | 10 | 0.001147s | 0.001137s | 0.001135s | byte equality observed |
| transpose_test.test | 10 | 0.001161s | 0.001139s | 0.001169s | byte equality observed |
| vec_index_test.test | 10 | 0.001150s | 0.001151s | 0.001167s | byte equality observed |
| vec_register_test.test | 10 | 0.001151s | 0.001175s | 0.001164s | byte equality observed |
| vec_traits_array_test.test | 10 | 0.001140s | 0.001155s | 0.001181s | byte equality observed |
| vec_traits_gnuc_test.test | 10 | 0.001131s | 0.001134s | 0.001162s | byte equality observed |
| vec_traits_std_array_test.test | 10 | 0.001131s | 0.001163s | 0.001161s | byte equality observed |
| zero_mat_test.test | 10 | 0.001167s | 0.001154s | 0.001162s | byte equality observed |
| zero_quat_test.test | 10 | 0.001158s | 0.001160s | 0.001164s | byte equality observed |
| zero_vec_test.test | 10 | 0.001141s | 0.001156s | 0.001157s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43620819273).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
