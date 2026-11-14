# libs/qvm/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| math_test.test | RUN | 0.203100 | 0.534136 | 0.515190 | 0.001855 | 0.001996 | 0.002056 |
| mat_traits_array_test.test | RUN | 0.155344 | 0.515316 | 0.396962 | 0.001860 | 0.001618 | 0.001690 |
| mat_traits_std_array_test.test | RUN | 0.153155 | 0.395617 | 0.398664 | 0.001475 | 0.001498 | 0.001408 |
| vec_traits_array_test.test | RUN | 0.137664 | 0.420096 | 0.352016 | 0.001466 | 0.001476 | 0.001337 |
| vec_traits_gnuc_test.test | RUN | 0.251840 | 0.502854 | 0.736263 | 0.001560 | 0.001565 | 0.001314 |
| vec_traits_std_array_test.test | RUN | 0.134045 | 0.325222 | 0.349020 | 0.001555 | 0.001545 | 0.004060 |
| quat_traits_array_test.test | RUN | 0.132637 | 0.424253 | 0.351134 | 0.001303 | 0.001424 | 0.001424 |
| quat_traits_std_array_test.test | RUN | 0.133005 | 0.327578 | 0.390588 | 0.001236 | 0.001581 | 0.001733 |
| access_m_test.test | RUN | 0.213069 | 0.772886 | 0.805106 | 0.001488 | 0.001735 | 0.001448 |
| access_m_fail1.test | COMPILE_FAIL | 0.021269 | 0.033490 | 0.056288 | — | — | — |
| access_m_fail2.test | COMPILE_FAIL | 0.020712 | 0.032544 | 0.054651 | — | — | — |
| access_q_test.test | RUN | 0.177192 | 0.417944 | 0.475602 | 0.001451 | 0.001837 | 0.001540 |
| access_q_fail.test | COMPILE_FAIL | 0.016506 | 0.020055 | 0.046607 | — | — | — |
| access_v_test.test | RUN | 0.176236 | 0.413076 | 0.456300 | 0.001487 | 0.001624 | 0.001719 |
| access_v_fail1.test | COMPILE_FAIL | 0.014463 | 0.026735 | 0.042714 | — | — | — |
| access_v_fail2.test | COMPILE_FAIL | 0.015105 | 0.026644 | 0.042606 | — | — | — |
| assign_test.test | RUN | 0.272488 | 0.650214 | 0.801336 | 0.001655 | 0.001943 | 0.001497 |
| to_string_test.test | RUN | 0.301347 | 1.080164 | 4.971871 | 0.001503 | 0.001806 | 0.001716 |
| cmp_vv_test.test | RUN | 0.224488 | 0.517761 | 0.539423 | 0.001440 | 0.001832 | 0.001582 |
| cross_test.test | RUN | 0.217240 | 0.501676 | 0.537738 | 0.001429 | 0.001912 | 0.001444 |
| div_eq_vs_test.test | RUN | 0.202263 | 0.477948 | 0.551528 | 0.001663 | 0.001754 | 0.001379 |
| div_vs_test.test | RUN | 0.211396 | 0.562386 | 0.584848 | 0.001566 | 0.001810 | 0.001497 |
| dot_vv_test.test | RUN | 0.204375 | 0.508963 | 0.525213 | 0.001410 | 0.001566 | 0.001661 |
| eq_vv_test.test | RUN | 0.225854 | 0.534350 | 0.614424 | 0.001406 | 0.001287 | 0.001483 |
| mag_v_test.test | RUN | 0.207644 | 0.450136 | 0.504461 | 0.001766 | 0.001514 | 0.001413 |
| mag_sqr_v_test.test | RUN | 0.206302 | 0.455241 | 0.531854 | 0.001544 | 0.001824 | 0.001377 |
| minus_v_test.test | RUN | 0.209915 | 0.532733 | 0.580655 | 0.001188 | 0.001695 | 0.001360 |
| minus_eq_vv_test.test | RUN | 0.211422 | 0.532666 | 0.568506 | 0.001482 | 0.001762 | 0.001310 |
| minus_vv_test.test | RUN | 0.223507 | 0.572937 | 0.559821 | 0.001624 | 0.001588 | 0.001345 |
| mul_eq_vs_test.test | RUN | 0.208736 | 0.468289 | 0.540154 | 0.001461 | 0.001912 | 0.001622 |
| mul_vs_test.test | RUN | 0.214668 | 0.575890 | 0.574215 | 0.001364 | 0.002008 | 0.001446 |
| mul_sv_test.test | RUN | 0.218642 | 0.566486 | 0.567636 | 0.001401 | 0.001856 | 0.001353 |
| mul_vm_test.test | RUN | 0.288865 | 0.984787 | 0.889505 | 0.001295 | 0.001726 | 0.001658 |
| normalize_v_test.test | RUN | 0.217511 | 0.664410 | 0.615128 | 0.001639 | 0.001576 | 0.001415 |
| plus_eq_vv_test.test | RUN | 0.200887 | 0.523549 | 0.562012 | 0.001731 | 0.001675 | 0.001655 |
| plus_vv_test.test | RUN | 0.216376 | 0.549451 | 0.574592 | 0.001422 | 0.001819 | 0.001429 |
| scalar_cast_v_test.test | RUN | 0.198197 | 0.404264 | 0.515123 | 0.001542 | 0.001841 | 0.001462 |
| vec_index_test.test | RUN | 0.174883 | 0.420180 | 0.445644 | 0.001456 | 0.001511 | 0.001519 |
| vec_register_test.test | RUN | 0.114863 | 0.376101 | 0.332567 | 0.001691 | 0.001751 | 0.001702 |
| cmp_mm_test.test | RUN | 0.328760 | 1.191462 | 1.237843 | 0.001798 | 0.001865 | 0.001388 |
| determinant_test.test | RUN | 0.235660 | 0.620305 | 0.643402 | 0.001672 | 0.001836 | 0.001662 |
| div_eq_ms_test.test | RUN | 0.241382 | 0.587814 | 0.731766 | 0.001462 | 0.001828 | 0.001812 |
| div_ms_test.test | RUN | 0.284042 | 0.924702 | 0.956890 | 0.001870 | 0.001914 | 0.001695 |
| eq_mm_test.test | RUN | 0.331192 | 1.123515 | 1.143744 | 0.001792 | 0.001658 | 0.001211 |
| minus_m_test.test | RUN | 0.284139 | 0.919566 | 0.855535 | 0.001340 | 0.001718 | 0.001218 |
| minus_eq_mm_test.test | RUN | 0.269429 | 0.878898 | 0.790764 | 0.001558 | 0.001453 | 0.001658 |
| minus_mm_test.test | RUN | 0.301395 | 1.106157 | 0.918868 | 0.001702 | 0.001875 | 0.001678 |
| mul_eq_mm_test.test | RUN | 0.257171 | 0.785418 | 0.697752 | 0.001768 | 0.001646 | 0.001303 |
| mul_eq_ms_test.test | RUN | 0.249573 | 0.578493 | 0.701455 | 0.001612 | 0.001554 | 0.001629 |
| mul_mm_test.test | RUN | 0.339152 | 1.741548 | 1.164801 | 0.001889 | 0.001746 | 0.001600 |
| mul_ms_test.test | RUN | 0.294506 | 0.930900 | 0.873943 | 0.001438 | 0.001942 | 0.001639 |
| mul_sm_test.test | RUN | 0.289788 | 0.952721 | 0.891770 | 0.001980 | 0.001316 | 0.001679 |
| mul_mv_test.test | RUN | 0.300675 | 1.000279 | 0.932145 | 0.001719 | 0.001969 | 0.001442 |
| inverse_m_test.test | RUN | 0.397818 | 1.792611 | 1.297537 | 0.001835 | 0.001788 | 0.001788 |
| plus_eq_mm_test.test | RUN | 0.282064 | 0.830122 | 0.773225 | 0.001690 | 0.001818 | 0.001754 |
| plus_mm_test.test | RUN | 0.313125 | 1.054407 | 0.969133 | 0.001594 | 0.001932 | 0.001566 |
| scalar_cast_m_test.test | RUN | 0.233879 | 0.484949 | 0.575994 | 0.001664 | 0.001881 | 0.001492 |
| mat_index_test.test | RUN | 0.182730 | 0.472359 | 0.521842 | 0.001610 | 0.001447 | 0.001744 |
| cmp_qq_test.test | RUN | 0.204839 | 0.429376 | 0.492756 | 0.001780 | 0.001623 | 0.001706 |
| conjugate_test.test | RUN | 0.206726 | 0.442413 | 0.503070 | 0.001780 | 0.001926 | 0.001668 |
| normalize_q_test.test | RUN | 0.210543 | 0.480522 | 0.513575 | 0.001788 | 0.001620 | 0.001669 |
| div_eq_qs_test.test | RUN | 0.204764 | 0.415955 | 0.505198 | 0.001516 | 0.001446 | 0.001709 |
| div_qs_test.test | RUN | 0.204333 | 0.425098 | 0.496091 | 0.001784 | 0.001823 | 0.001724 |
| dot_qq_test.test | RUN | 0.212046 | 0.414691 | 0.510659 | 0.001766 | 0.001761 | 0.001752 |
| eq_qq_test.test | RUN | 0.214872 | 0.419463 | 0.497583 | 0.001667 | 0.001756 | 0.001754 |
| inverse_q_test.test | RUN | 0.250236 | 0.550877 | 0.674671 | 0.001713 | 0.001355 | 0.001549 |
| mag_q_test.test | RUN | 0.206058 | 0.407599 | 0.518328 | 0.001663 | 0.001735 | 0.001446 |
| mag_sqr_q_test.test | RUN | 0.205569 | 0.412478 | 0.488437 | 0.001642 | 0.001750 | 0.001525 |
| minus_q_test.test | RUN | 0.209924 | 0.437944 | 0.511611 | 0.001733 | 0.001788 | 0.001732 |
| minus_eq_qq_test.test | RUN | 0.211051 | 0.431040 | 0.492266 | 0.004051 | 0.001561 | 0.001630 |
| minus_qq_test.test | RUN | 0.209659 | 0.431637 | 0.518047 | 0.001714 | 0.001293 | 0.001765 |
| mul_eq_qs_test.test | RUN | 0.250919 | 0.404408 | 0.497225 | 0.001642 | 0.001772 | 0.001454 |
| mul_qs_test.test | RUN | 0.252075 | 0.433966 | 0.472320 | 0.001739 | 0.001754 | 0.001720 |
| mul_qv_test.test | RUN | 0.255164 | 0.573673 | 0.656688 | 0.001773 | 0.001565 | 0.001392 |
| mul_qq_test.test | RUN | 0.247575 | 0.592374 | 0.650053 | 0.001435 | 0.001496 | 0.001389 |
| mul_eq_qq_test.test | RUN | 0.250265 | 0.581100 | 0.619842 | 0.001698 | 0.001674 | 0.001502 |
| plus_eq_qq_test.test | RUN | 0.208338 | 0.433776 | 0.510726 | 0.001776 | 0.001689 | 0.001721 |
| plus_qq_test.test | RUN | 0.210558 | 0.444204 | 0.498547 | 0.001770 | 0.001519 | 0.001309 |
| scalar_cast_q_test.test | RUN | 0.208972 | 0.419953 | 0.502117 | 0.001630 | 0.001595 | 0.001463 |
| slerp_test.test | RUN | 0.228188 | 0.815935 | 0.600750 | 0.013695 | 0.012042 | 0.013224 |
| convert_to_test.test | RUN | 0.302280 | 0.761132 | 0.926747 | 0.001663 | 0.001405 | 0.001648 |
| rot_mat_test.test | RUN | 0.428843 | 3.460656 | 3.008655 | 0.032484 | 0.029999 | 0.028631 |
| rot_quat_test.test | RUN | 0.248242 | 0.698683 | 0.653304 | 0.001567 | 0.001834 | 0.001647 |
| rotx_mat_test.test | RUN | 0.273859 | 0.895649 | 0.859245 | 0.001538 | 0.001810 | 0.001868 |
| rotx_quat_test.test | RUN | 0.248913 | 0.598227 | 0.638578 | 0.001836 | 0.001868 | 0.002244 |
| roty_mat_test.test | RUN | 0.281752 | 0.908027 | 0.879546 | 0.001754 | 0.001859 | 0.001579 |
| roty_quat_test.test | RUN | 0.249778 | 0.649476 | 0.627629 | 0.001576 | 0.001808 | 0.001657 |
| rotz_mat_test.test | RUN | 0.293831 | 1.065544 | 0.938472 | 0.001808 | 0.001817 | 0.001863 |
| rotz_quat_test.test | RUN | 0.255710 | 0.622936 | 0.633606 | 0.001536 | 0.001648 | 0.001652 |
| zero_vec_test.test | RUN | 0.220107 | 0.538210 | 0.511051 | 0.001701 | 0.001729 | 0.001442 |
| zero_mat_test.test | RUN | 0.289057 | 0.863897 | 0.757944 | 0.001440 | 0.001642 | 0.001391 |
| zero_quat_test.test | RUN | 0.226906 | 0.429216 | 0.511019 | 0.001405 | 0.001680 | 0.001573 |
| identity_mat_test.test | RUN | 0.250484 | 0.643833 | 0.629292 | 0.001628 | 0.001769 | 0.001615 |
| identity_quat_test.test | RUN | 0.212702 | 0.426307 | 0.504529 | 0.001644 | 0.001776 | 0.001712 |
| col_test.test | RUN | 0.372634 | 1.316488 | 1.482721 | 0.001731 | 0.001899 | 0.001734 |
| col_mat_test.test | RUN | 0.253252 | 0.604406 | 0.686025 | 0.001726 | 0.001980 | 0.001812 |
| neg_col_test.test | RUN | 0.288133 | 0.830144 | 0.911652 | 0.001486 | 0.001932 | 0.001669 |
| neg_row_test.test | RUN | 0.297169 | 0.846361 | 0.893954 | 0.001741 | 0.001837 | 0.001699 |
| del_col_test.test | RUN | 0.297395 | 0.915179 | 0.948625 | 0.001602 | 0.001843 | 0.001771 |
| del_row_test.test | RUN | 0.300178 | 0.906919 | 0.898600 | 0.001808 | 0.001871 | 0.001756 |
| del_row_col_test.test | RUN | 0.415651 | 1.730956 | 1.667652 | 0.001724 | 0.001826 | 0.001508 |
| swap_cols_test.test | RUN | 0.534200 | 2.280380 | 2.058223 | 0.001508 | 0.001879 | 0.001838 |
| swap_rows_test.test | RUN | 0.580483 | 2.380536 | 2.123745 | 0.001735 | 0.001790 | 0.001399 |
| diag_test.test | RUN | 0.256036 | 0.639834 | 0.793170 | 0.001722 | 0.001852 | 0.001470 |
| diag_mat_test.test | RUN | 0.270902 | 0.638027 | 0.699017 | 0.001785 | 0.001660 | 0.001694 |
| row_test.test | RUN | 0.385885 | 1.340045 | 1.428308 | 0.001583 | 0.001639 | 0.001681 |
| row_mat_test.test | RUN | 0.258061 | 0.598477 | 0.642170 | 0.001433 | 0.001749 | 0.001697 |
| transpose_test.test | RUN | 0.303119 | 0.931261 | 0.903875 | 0.001756 | 0.001830 | 0.001597 |
| translation_test.test | RUN | 0.246787 | 0.561638 | 0.650810 | 0.001592 | 0.001811 | 0.001806 |
| translation_mat_test.test | RUN | 0.269169 | 0.593525 | 0.718884 | 0.001693 | 0.001489 | 0.001159 |
| swizzle_const_fail.test | COMPILE_FAIL | 0.092086 | 0.165593 | 0.189186 | — | — | — |
| swizzle2_test2.test | RUN | 0.106517 | 0.259862 | 0.287524 | 0.001350 | 0.001452 | 0.001524 |
| swizzle2_test3.test | RUN | 0.105003 | 0.251423 | 0.285416 | 0.001383 | 0.001630 | 0.001326 |
| swizzle2_test4.test | RUN | 0.107245 | 0.253834 | 0.276719 | 0.001262 | 0.002058 | 0.001358 |
| swizzle2_test.test | RUN | 0.348455 | 0.686672 | 0.935818 | 0.001778 | 0.001602 | 0.001789 |
| swizzle3_test2.test | RUN | 0.115223 | 0.274674 | 0.315057 | 0.001710 | 0.001787 | 0.001530 |
| swizzle3_test3.test | RUN | 0.117779 | 0.270042 | 0.310133 | 0.001311 | 0.001785 | 0.001524 |
| swizzle3_test4.test | RUN | 0.114543 | 0.273707 | 0.314240 | 0.001195 | 0.001852 | 0.001470 |
| swizzle3_test.test | RUN | 0.373087 | 0.697222 | 0.923929 | 0.001636 | 0.001784 | 0.001820 |
| swizzle4_test2.test | RUN | 0.224627 | 0.387831 | 0.516373 | 0.001412 | 0.001859 | 0.001716 |
| swizzle4_test3.test | RUN | 0.225035 | 0.378831 | 0.524332 | 0.001541 | 0.001681 | 0.001437 |
| swizzle4_test4.test | RUN | 0.210155 | 0.384744 | 0.515529 | 0.001760 | 0.001521 | 0.001779 |
| swizzle4_test.test | RUN | 0.352695 | 0.750642 | 0.941258 | 0.001404 | 0.001854 | 0.001770 |
| deduce_scalar_test.test | COMPILE | 0.017858 | 0.039280 | 0.055836 | — | — | — |
| deduce_scalar_mq_test.test | RUN | 0.134811 | 0.298637 | 0.349104 | 0.001481 | 0.001809 | 0.001915 |
| deduce_scalar_mv_test.test | RUN | 0.158885 | 0.339914 | 0.406771 | 0.001369 | 0.001493 | 0.001742 |
| deduce_scalar_fail.test | COMPILE_FAIL | 0.014913 | 0.025044 | 0.043248 | — | — | — |
| deduce_mat_test.test | COMPILE | 0.016066 | 0.034698 | 0.054778 | — | — | — |
| deduce_quat_test.test | COMPILE | 0.016094 | 0.033255 | 0.050759 | — | — | — |
| deduce_vec_test.test | COMPILE | 0.016568 | 0.033903 | 0.052242 | — | — | — |
| interop_test.test | RUN | 0.137033 | 0.399889 | 0.580989 | 0.000617 | 0.000666 | 0.001160 |
| transform_test.test | RUN | 0.320488 | 0.659258 | 0.801631 | 0.001269 | 0.001358 | 0.001261 |
| projection_test.test | RUN | 0.218171 | 0.509737 | 0.429097 | 0.001254 | 0.001437 | 0.001127 |
| scalar_traits_test.test | COMPILE | 0.016957 | 0.045934 | 0.051232 | — | — | — |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.963× | 0.971×, 0.955× | 1.015× |
| clang | 0.983× | 0.976×, 0.990× | 1.019× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1363 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43624536445).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| access_m_test.test | 10 | 0.000923s | 0.000912s | 0.000885s | byte equality observed |
| access_q_test.test | 10 | 0.000904s | 0.000911s | 0.000887s | byte equality observed |
| access_v_test.test | 10 | 0.000903s | 0.000906s | 0.000908s | byte equality observed |
| assign_test.test | 10 | 0.000917s | 0.000892s | 0.000884s | byte equality observed |
| cmp_mm_test.test | 10 | 0.000933s | 0.000932s | 0.000889s | byte equality observed |
| cmp_qq_test.test | 10 | 0.000910s | 0.000911s | 0.000852s | byte equality observed |
| cmp_vv_test.test | 10 | 0.000919s | 0.000936s | 0.000891s | byte equality observed |
| col_mat_test.test | 10 | 0.000883s | 0.000900s | 0.000865s | byte equality observed |
| col_test.test | 10 | 0.000904s | 0.000896s | 0.000903s | byte equality observed |
| conjugate_test.test | 10 | 0.000901s | 0.000902s | 0.000896s | byte equality observed |
| convert_to_test.test | 10 | 0.000910s | 0.000914s | 0.000864s | byte equality observed |
| cross_test.test | 10 | 0.000912s | 0.000901s | 0.000899s | byte equality observed |
| deduce_scalar_mq_test.test | 10 | 0.000911s | 0.000912s | 0.000887s | byte equality observed |
| deduce_scalar_mv_test.test | 10 | 0.000902s | 0.000889s | 0.000888s | byte equality observed |
| del_col_test.test | 10 | 0.000910s | 0.000898s | 0.000890s | byte equality observed |
| del_row_col_test.test | 10 | 0.000895s | 0.000929s | 0.000871s | byte equality observed |
| del_row_test.test | 10 | 0.000901s | 0.000898s | 0.000895s | byte equality observed |
| determinant_test.test | 10 | 0.000910s | 0.000920s | 0.000920s | byte equality observed |
| diag_mat_test.test | 10 | 0.000906s | 0.000893s | 0.000903s | byte equality observed |
| diag_test.test | 10 | 0.000896s | 0.000898s | 0.000878s | byte equality observed |
| div_eq_ms_test.test | 10 | 0.000899s | 0.000889s | 0.000884s | byte equality observed |
| div_eq_qs_test.test | 10 | 0.000904s | 0.000883s | 0.000864s | byte equality observed |
| div_eq_vs_test.test | 10 | 0.000885s | 0.000894s | 0.000892s | byte equality observed |
| div_ms_test.test | 10 | 0.000894s | 0.000899s | 0.000882s | byte equality observed |
| div_qs_test.test | 10 | 0.000913s | 0.000900s | 0.000865s | byte equality observed |
| div_vs_test.test | 10 | 0.000904s | 0.000901s | 0.000875s | byte equality observed |
| dot_qq_test.test | 10 | 0.000902s | 0.000891s | 0.000867s | byte equality observed |
| dot_vv_test.test | 10 | 0.000908s | 0.000904s | 0.000877s | byte equality observed |
| eq_mm_test.test | 10 | 0.000904s | 0.000900s | 0.000887s | byte equality observed |
| eq_qq_test.test | 10 | 0.000907s | 0.000912s | 0.000879s | byte equality observed |
| eq_vv_test.test | 10 | 0.000913s | 0.000878s | 0.000872s | byte equality observed |
| identity_mat_test.test | 10 | 0.000882s | 0.000896s | 0.000875s | byte equality observed |
| identity_quat_test.test | 10 | 0.000910s | 0.000918s | 0.000881s | byte equality observed |
| interop_test.test | 10 | 0.000414s | 0.000407s | 0.000861s | byte equality observed |
| inverse_m_test.test | 10 | 0.000945s | 0.000944s | 0.000913s | byte equality observed |
| inverse_q_test.test | 10 | 0.000918s | 0.000945s | 0.000889s | byte equality observed |
| mag_q_test.test | 10 | 0.000914s | 0.000897s | 0.000889s | byte equality observed |
| mag_sqr_q_test.test | 10 | 0.000899s | 0.000937s | 0.000921s | byte equality observed |
| mag_sqr_v_test.test | 10 | 0.000909s | 0.000906s | 0.000893s | byte equality observed |
| mag_v_test.test | 10 | 0.000911s | 0.000904s | 0.000882s | byte equality observed |
| mat_index_test.test | 10 | 0.000918s | 0.000922s | 0.000890s | byte equality observed |
| mat_traits_array_test.test | 10 | 0.000901s | 0.000922s | 0.000897s | byte equality observed |
| mat_traits_std_array_test.test | 10 | 0.000909s | 0.000904s | 0.000892s | byte equality observed |
| math_test.test | 10 | 0.001348s | 0.001302s | 0.001161s | byte equality observed |
| minus_eq_mm_test.test | 10 | 0.000916s | 0.000905s | 0.000888s | byte equality observed |
| minus_eq_qq_test.test | 10 | 0.000892s | 0.000889s | 0.000888s | byte equality observed |
| minus_eq_vv_test.test | 10 | 0.000907s | 0.000900s | 0.000891s | byte equality observed |
| minus_m_test.test | 10 | 0.000915s | 0.000893s | 0.000887s | byte equality observed |
| minus_mm_test.test | 10 | 0.000915s | 0.000881s | 0.000905s | byte equality observed |
| minus_q_test.test | 10 | 0.000907s | 0.000903s | 0.000889s | byte equality observed |
| minus_qq_test.test | 10 | 0.000915s | 0.000891s | 0.000888s | byte equality observed |
| minus_v_test.test | 10 | 0.000908s | 0.000878s | 0.000884s | byte equality observed |
| minus_vv_test.test | 10 | 0.000904s | 0.000875s | 0.000893s | byte equality observed |
| mul_eq_mm_test.test | 10 | 0.000916s | 0.000884s | 0.000906s | byte equality observed |
| mul_eq_ms_test.test | 10 | 0.000914s | 0.000892s | 0.000922s | byte equality observed |
| mul_eq_qq_test.test | 10 | 0.000903s | 0.000902s | 0.000899s | byte equality observed |
| mul_eq_qs_test.test | 10 | 0.000932s | 0.000890s | 0.000899s | byte equality observed |
| mul_eq_vs_test.test | 10 | 0.000896s | 0.000905s | 0.000874s | byte equality observed |
| mul_mm_test.test | 10 | 0.000917s | 0.000907s | 0.000912s | byte equality observed |
| mul_ms_test.test | 10 | 0.000905s | 0.000882s | 0.000893s | byte equality observed |
| mul_mv_test.test | 10 | 0.000919s | 0.000892s | 0.000898s | byte equality observed |
| mul_qq_test.test | 10 | 0.000916s | 0.000888s | 0.000925s | byte equality observed |
| mul_qs_test.test | 10 | 0.000900s | 0.000877s | 0.000889s | byte equality observed |
| mul_qv_test.test | 10 | 0.000920s | 0.000891s | 0.000896s | byte equality observed |
| mul_sm_test.test | 10 | 0.000896s | 0.000875s | 0.000897s | byte equality observed |
| mul_sv_test.test | 10 | 0.000877s | 0.000888s | 0.000896s | byte equality observed |
| mul_vm_test.test | 10 | 0.000915s | 0.000880s | 0.000879s | byte equality observed |
| mul_vs_test.test | 10 | 0.000897s | 0.000874s | 0.000883s | byte equality observed |
| neg_col_test.test | 10 | 0.000900s | 0.000888s | 0.000900s | byte equality observed |
| neg_row_test.test | 10 | 0.000910s | 0.000878s | 0.000885s | byte equality observed |
| normalize_q_test.test | 10 | 0.000927s | 0.000897s | 0.000887s | byte equality observed |
| normalize_v_test.test | 10 | 0.000909s | 0.000915s | 0.000874s | byte equality observed |
| plus_eq_mm_test.test | 10 | 0.000924s | 0.000917s | 0.000878s | byte equality observed |
| plus_eq_qq_test.test | 10 | 0.000915s | 0.000881s | 0.000884s | byte equality observed |
| plus_eq_vv_test.test | 10 | 0.000909s | 0.000886s | 0.000870s | byte equality observed |
| plus_mm_test.test | 10 | 0.000907s | 0.000875s | 0.000876s | byte equality observed |
| plus_qq_test.test | 10 | 0.000903s | 0.000871s | 0.000875s | byte equality observed |
| plus_vv_test.test | 10 | 0.000943s | 0.000889s | 0.000883s | byte equality observed |
| projection_test.test | 10 | 0.000913s | 0.000897s | 0.000890s | byte equality observed |
| quat_traits_array_test.test | 10 | 0.000895s | 0.000907s | 0.000889s | byte equality observed |
| quat_traits_std_array_test.test | 10 | 0.000896s | 0.000864s | 0.000863s | byte equality observed |
| rot_mat_test.test | 1 | 0.020803s | 0.020258s | 0.018987s | byte equality observed |
| rot_quat_test.test | 10 | 0.000890s | 0.000865s | 0.000858s | byte equality observed |
| rotx_mat_test.test | 10 | 0.000907s | 0.000906s | 0.000896s | byte equality observed |
| rotx_quat_test.test | 10 | 0.000935s | 0.000897s | 0.000919s | byte equality observed |
| roty_mat_test.test | 10 | 0.000929s | 0.000901s | 0.000895s | byte equality observed |
| roty_quat_test.test | 10 | 0.000926s | 0.000892s | 0.000886s | byte equality observed |
| rotz_mat_test.test | 10 | 0.000936s | 0.000921s | 0.000902s | byte equality observed |
| rotz_quat_test.test | 10 | 0.000930s | 0.000911s | 0.000888s | byte equality observed |
| row_mat_test.test | 10 | 0.000915s | 0.000877s | 0.000907s | byte equality observed |
| row_test.test | 10 | 0.000892s | 0.000886s | 0.000909s | byte equality observed |
| scalar_cast_m_test.test | 10 | 0.000916s | 0.000883s | 0.000893s | byte equality observed |
| scalar_cast_q_test.test | 10 | 0.000905s | 0.000883s | 0.000919s | byte equality observed |
| scalar_cast_v_test.test | 10 | 0.000888s | 0.000861s | 0.000883s | byte equality observed |
| slerp_test.test | 2 | 0.009983s | 0.008075s | 0.009038s | byte equality observed |
| swap_cols_test.test | 10 | 0.000880s | 0.000847s | 0.000878s | byte equality observed |
| swap_rows_test.test | 10 | 0.000920s | 0.000917s | 0.000895s | byte equality observed |
| swizzle2_test.test | 10 | 0.000907s | 0.000877s | 0.000881s | byte equality observed |
| swizzle2_test2.test | 10 | 0.000888s | 0.000874s | 0.000907s | byte equality observed |
| swizzle2_test3.test | 10 | 0.000884s | 0.000877s | 0.000899s | byte equality observed |
| swizzle2_test4.test | 10 | 0.000881s | 0.000871s | 0.000905s | byte equality observed |
| swizzle3_test.test | 10 | 0.000882s | 0.000893s | 0.000918s | byte equality observed |
| swizzle3_test2.test | 10 | 0.000890s | 0.000886s | 0.000882s | byte equality observed |
| swizzle3_test3.test | 10 | 0.000885s | 0.000867s | 0.000903s | byte equality observed |
| swizzle3_test4.test | 10 | 0.000886s | 0.000880s | 0.000898s | byte equality observed |
| swizzle4_test.test | 10 | 0.000898s | 0.000884s | 0.000902s | byte equality observed |
| swizzle4_test2.test | 10 | 0.000891s | 0.000880s | 0.000906s | byte equality observed |
| swizzle4_test3.test | 10 | 0.000905s | 0.000912s | 0.000904s | byte equality observed |
| swizzle4_test4.test | 10 | 0.000900s | 0.000875s | 0.000922s | byte equality observed |
| to_string_test.test | 10 | 0.000937s | 0.000925s | 0.000933s | byte equality observed |
| transform_test.test | 10 | 0.000893s | 0.000891s | 0.000908s | byte equality observed |
| translation_mat_test.test | 10 | 0.000905s | 0.000915s | 0.000902s | byte equality observed |
| translation_test.test | 10 | 0.000903s | 0.000901s | 0.000893s | byte equality observed |
| transpose_test.test | 10 | 0.000886s | 0.000908s | 0.000898s | byte equality observed |
| vec_index_test.test | 10 | 0.000890s | 0.000879s | 0.000902s | byte equality observed |
| vec_register_test.test | 10 | 0.000890s | 0.000919s | 0.000911s | byte equality observed |
| vec_traits_array_test.test | 10 | 0.000884s | 0.000864s | 0.000899s | byte equality observed |
| vec_traits_gnuc_test.test | 10 | 0.000914s | 0.000893s | 0.000919s | byte equality observed |
| vec_traits_std_array_test.test | 10 | 0.000900s | 0.000873s | 0.000882s | byte equality observed |
| zero_mat_test.test | 10 | 0.000897s | 0.000890s | 0.000905s | byte equality observed |
| zero_quat_test.test | 10 | 0.000899s | 0.000875s | 0.000919s | byte equality observed |
| zero_vec_test.test | 10 | 0.000922s | 0.000886s | 0.000901s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43624536445).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
