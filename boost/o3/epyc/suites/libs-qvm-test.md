# libs/qvm/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| math_test.test | RUN | 0.255263 | 0.667779 | 0.790108 | 0.002224 | 0.002468 | 0.002199 |
| mat_traits_array_test.test | RUN | 0.194268 | 0.677173 | 0.626530 | 0.001379 | 0.001708 | 0.001469 |
| mat_traits_std_array_test.test | RUN | 0.194408 | 0.517337 | 0.618874 | 0.001767 | 0.001788 | 0.001548 |
| vec_traits_array_test.test | RUN | 0.173852 | 0.511201 | 0.524910 | 0.001633 | 0.001774 | 0.001433 |
| vec_traits_gnuc_test.test | RUN | 0.313327 | 0.633829 | 1.072221 | 0.001317 | 0.001784 | 0.001568 |
| vec_traits_std_array_test.test | RUN | 0.170611 | 0.405553 | 0.525816 | 0.001740 | 0.001824 | 0.001706 |
| quat_traits_array_test.test | RUN | 0.165787 | 0.546767 | 0.523450 | 0.001625 | 0.001926 | 0.001438 |
| quat_traits_std_array_test.test | RUN | 0.165257 | 0.411216 | 0.538137 | 0.001373 | 0.001568 | 0.001842 |
| access_m_test.test | RUN | 0.271676 | 0.994574 | 1.191634 | 0.001645 | 0.001978 | 0.001474 |
| access_m_fail1.test | COMPILE_FAIL | 0.025844 | 0.043782 | 0.075108 | — | — | — |
| access_m_fail2.test | COMPILE_FAIL | 0.025039 | 0.041977 | 0.086634 | — | — | — |
| access_q_test.test | RUN | 0.223671 | 0.502282 | 0.651710 | 0.001661 | 0.001738 | 0.001870 |
| access_q_fail.test | COMPILE_FAIL | 0.020132 | 0.035429 | 0.064561 | — | — | — |
| access_v_test.test | RUN | 0.224104 | 0.532714 | 0.681977 | 0.001568 | 0.001776 | 0.001770 |
| access_v_fail1.test | COMPILE_FAIL | 0.018193 | 0.033500 | 0.060354 | — | — | — |
| access_v_fail2.test | COMPILE_FAIL | 0.017734 | 0.032860 | 0.060511 | — | — | — |
| assign_test.test | RUN | 0.329242 | 0.832358 | 1.199289 | 0.001643 | 0.001986 | 0.001935 |
| to_string_test.test | RUN | 0.381136 | 1.347497 | 6.901423 | 0.001636 | 0.001688 | 0.001966 |
| cmp_vv_test.test | RUN | 0.274719 | 0.658317 | 0.864130 | 0.001775 | 0.002240 | 0.001734 |
| cross_test.test | RUN | 0.266053 | 0.618129 | 0.862761 | 0.001446 | 0.001918 | 0.001734 |
| div_eq_vs_test.test | RUN | 0.254210 | 0.571883 | 0.822296 | 0.001610 | 0.001852 | 0.001748 |
| div_vs_test.test | RUN | 0.268204 | 0.722239 | 0.857408 | 0.001335 | 0.001754 | 0.001447 |
| dot_vv_test.test | RUN | 0.257635 | 0.626576 | 0.837190 | 0.001744 | 0.001794 | 0.001563 |
| eq_vv_test.test | RUN | 0.284277 | 0.712761 | 0.852691 | 0.001575 | 0.001618 | 0.001732 |
| mag_v_test.test | RUN | 0.259083 | 0.600401 | 0.810492 | 0.001470 | 0.001644 | 0.001587 |
| mag_sqr_v_test.test | RUN | 0.257817 | 0.571244 | 0.804699 | 0.001676 | 0.001868 | 0.001600 |
| minus_v_test.test | RUN | 0.264517 | 0.668029 | 0.805800 | 0.001463 | 0.001756 | 0.001739 |
| minus_eq_vv_test.test | RUN | 0.265077 | 0.660492 | 0.837775 | 0.001432 | 0.001829 | 0.001596 |
| minus_vv_test.test | RUN | 0.275544 | 0.714902 | 0.872959 | 0.001656 | 0.001820 | 0.001495 |
| mul_eq_vs_test.test | RUN | 0.261114 | 0.558517 | 0.789293 | 0.001774 | 0.001938 | 0.001744 |
| mul_vs_test.test | RUN | 0.271841 | 0.706644 | 0.908376 | 0.001540 | 0.001942 | 0.001455 |
| mul_sv_test.test | RUN | 0.280672 | 0.697808 | 0.907550 | 0.001599 | 0.001902 | 0.001476 |
| mul_vm_test.test | RUN | 0.383311 | 1.227250 | 1.246489 | 0.001795 | 0.001646 | 0.001858 |
| normalize_v_test.test | RUN | 0.276639 | 0.846440 | 0.900660 | 0.001556 | 0.001746 | 0.001403 |
| plus_eq_vv_test.test | RUN | 0.262086 | 0.673350 | 0.835515 | 0.001349 | 0.001759 | 0.002448 |
| plus_vv_test.test | RUN | 0.287177 | 0.693493 | 0.886076 | 0.001528 | 0.001770 | 0.001519 |
| scalar_cast_v_test.test | RUN | 0.261952 | 0.517834 | 0.731247 | 0.001548 | 0.001743 | 0.001505 |
| vec_index_test.test | RUN | 0.225293 | 0.530105 | 0.703977 | 0.001552 | 0.001776 | 0.001108 |
| vec_register_test.test | RUN | 0.148593 | 0.485001 | 0.508819 | 0.001882 | 0.001803 | 0.001484 |
| cmp_mm_test.test | RUN | 0.425931 | 1.518316 | 1.690497 | 0.001862 | 0.001696 | 0.001885 |
| determinant_test.test | RUN | 0.307924 | 0.766507 | 0.963580 | 0.001904 | 0.001914 | 0.001726 |
| div_eq_ms_test.test | RUN | 0.317662 | 0.721370 | 1.088844 | 0.001732 | 0.001620 | 0.001721 |
| div_ms_test.test | RUN | 0.375898 | 1.155087 | 1.317441 | 0.001831 | 0.001574 | 0.001872 |
| eq_mm_test.test | RUN | 0.410418 | 1.382730 | 1.618448 | 0.001557 | 0.001802 | 0.001596 |
| minus_m_test.test | RUN | 0.372620 | 1.129716 | 1.266626 | 0.001851 | 0.001793 | 0.001748 |
| minus_eq_mm_test.test | RUN | 0.345432 | 1.052531 | 1.139642 | 0.001915 | 0.001807 | 0.001688 |
| minus_mm_test.test | RUN | 0.389113 | 1.340076 | 1.340224 | 0.001875 | 0.001833 | 0.001829 |
| mul_eq_mm_test.test | RUN | 0.330311 | 0.956613 | 1.003233 | 0.001729 | 0.001580 | 0.001780 |
| mul_eq_ms_test.test | RUN | 0.328763 | 0.743284 | 1.116433 | 0.001900 | 0.001813 | 0.001788 |
| mul_mm_test.test | RUN | 0.441824 | 2.139372 | 1.751549 | 0.001885 | 0.001956 | 0.001915 |
| mul_ms_test.test | RUN | 0.376407 | 1.169569 | 1.344274 | 0.001820 | 0.001878 | 0.001624 |
| mul_sm_test.test | RUN | 0.374854 | 1.145059 | 1.332285 | 0.001601 | 0.001832 | 0.001825 |
| mul_mv_test.test | RUN | 0.386911 | 1.236646 | 1.341146 | 0.001870 | 0.001801 | 0.001867 |
| inverse_m_test.test | RUN | 0.495123 | 2.219693 | 1.830595 | 0.001984 | 0.001981 | 0.001513 |
| plus_eq_mm_test.test | RUN | 0.342749 | 1.041032 | 1.197346 | 0.001568 | 0.001801 | 0.001941 |
| plus_mm_test.test | RUN | 0.385239 | 1.349690 | 1.351474 | 0.001748 | 0.001778 | 0.001663 |
| scalar_cast_m_test.test | RUN | 0.307223 | 0.613234 | 0.887838 | 0.001868 | 0.001722 | 0.001652 |
| mat_index_test.test | RUN | 0.240723 | 0.557821 | 0.723722 | 0.001751 | 0.001725 | 0.001870 |
| cmp_qq_test.test | RUN | 0.264539 | 0.551494 | 0.701360 | 0.001662 | 0.001593 | 0.001335 |
| conjugate_test.test | RUN | 0.261155 | 0.532077 | 0.764829 | 0.001560 | 0.001945 | 0.001602 |
| normalize_q_test.test | RUN | 0.281390 | 0.611590 | 0.791795 | 0.001884 | 0.001922 | 0.001815 |
| div_eq_qs_test.test | RUN | 0.263971 | 0.512184 | 0.733911 | 0.001755 | 0.001845 | 0.001683 |
| div_qs_test.test | RUN | 0.263595 | 0.566556 | 0.794050 | 0.001696 | 0.001802 | 0.001724 |
| dot_qq_test.test | RUN | 0.266497 | 0.527333 | 0.783018 | 0.001563 | 0.001906 | 0.001636 |
| eq_qq_test.test | RUN | 0.266923 | 0.566547 | 0.740519 | 0.001860 | 0.001882 | 0.001738 |
| inverse_q_test.test | RUN | 0.326300 | 0.726420 | 0.931305 | 0.001623 | 0.001888 | 0.001761 |
| mag_q_test.test | RUN | 0.261748 | 0.558189 | 0.764517 | 0.001848 | 0.001542 | 0.001790 |
| mag_sqr_q_test.test | RUN | 0.267412 | 0.548183 | 0.760279 | 0.001409 | 0.001934 | 0.001665 |
| minus_q_test.test | RUN | 0.273029 | 0.554514 | 0.726431 | 0.001848 | 0.001804 | 0.001594 |
| minus_eq_qq_test.test | RUN | 0.260340 | 0.542964 | 0.738163 | 0.001934 | 0.001699 | 0.001702 |
| minus_qq_test.test | RUN | 0.262433 | 0.552918 | 0.762029 | 0.001629 | 0.001787 | 0.001684 |
| mul_eq_qs_test.test | RUN | 0.257109 | 0.529044 | 0.724017 | 0.001578 | 0.001908 | 0.001624 |
| mul_qs_test.test | RUN | 0.265592 | 0.541960 | 0.755267 | 0.001930 | 0.001826 | 0.001738 |
| mul_qv_test.test | RUN | 0.316232 | 0.747708 | 0.985314 | 0.001817 | 0.001676 | 0.001892 |
| mul_qq_test.test | RUN | 0.305655 | 0.773329 | 0.956334 | 0.001802 | 0.001894 | 0.001429 |
| mul_eq_qq_test.test | RUN | 0.313729 | 0.753910 | 0.935250 | 0.001458 | 0.001898 | 0.001524 |
| plus_eq_qq_test.test | RUN | 0.266810 | 0.557297 | 0.775251 | 0.001853 | 0.001879 | 0.001536 |
| plus_qq_test.test | RUN | 0.263738 | 0.549513 | 0.759165 | 0.001416 | 0.001786 | 0.001834 |
| scalar_cast_q_test.test | RUN | 0.263131 | 0.517433 | 0.762626 | 0.001406 | 0.001861 | 0.001514 |
| slerp_test.test | RUN | 0.278580 | 1.059461 | 0.862657 | 0.018300 | 0.014714 | 0.015684 |
| convert_to_test.test | RUN | 0.390753 | 0.964588 | 1.422274 | 0.001940 | 0.001826 | 0.001916 |
| rot_mat_test.test | RUN | 0.539556 | 4.316386 | 4.078898 | 0.044710 | 0.039046 | 0.035046 |
| rot_quat_test.test | RUN | 0.309588 | 0.870910 | 0.982227 | 0.001904 | 0.001896 | 0.001731 |
| rotx_mat_test.test | RUN | 0.358454 | 1.170270 | 1.269757 | 0.001648 | 0.001854 | 0.001888 |
| rotx_quat_test.test | RUN | 0.313780 | 0.751740 | 0.897094 | 0.001735 | 0.001882 | 0.001714 |
| roty_mat_test.test | RUN | 0.354155 | 1.175776 | 1.251540 | 0.001948 | 0.001912 | 0.001556 |
| roty_quat_test.test | RUN | 0.324140 | 0.757233 | 0.913053 | 0.001718 | 0.001872 | 0.001657 |
| rotz_mat_test.test | RUN | 0.374172 | 1.312870 | 1.196612 | 0.001640 | 0.001897 | 0.001721 |
| rotz_quat_test.test | RUN | 0.322510 | 0.753841 | 0.937407 | 0.001858 | 0.001955 | 0.001556 |
| zero_vec_test.test | RUN | 0.270768 | 0.666300 | 0.821191 | 0.001758 | 0.001825 | 0.001575 |
| zero_mat_test.test | RUN | 0.331186 | 1.072729 | 1.078133 | 0.001734 | 0.001890 | 0.001638 |
| zero_quat_test.test | RUN | 0.256899 | 0.532529 | 0.725629 | 0.001860 | 0.001812 | 0.001774 |
| identity_mat_test.test | RUN | 0.309717 | 0.809593 | 0.964509 | 0.001709 | 0.001714 | 0.001765 |
| identity_quat_test.test | RUN | 0.266214 | 0.531678 | 0.765707 | 0.001819 | 0.001904 | 0.001829 |
| col_test.test | RUN | 0.496181 | 1.682555 | 2.039706 | 0.001854 | 0.001925 | 0.001749 |
| col_mat_test.test | RUN | 0.330657 | 0.776383 | 0.994384 | 0.001868 | 0.001924 | 0.001728 |
| neg_col_test.test | RUN | 0.379846 | 1.042308 | 1.268322 | 0.001647 | 0.001906 | 0.001586 |
| neg_row_test.test | RUN | 0.390810 | 1.067134 | 1.292347 | 0.001864 | 0.001555 | 0.001756 |
| del_col_test.test | RUN | 0.387423 | 1.192770 | 1.294210 | 0.001916 | 0.001826 | 0.001750 |
| del_row_test.test | RUN | 0.386491 | 1.147632 | 1.296261 | 0.001780 | 0.001789 | 0.001698 |
| del_row_col_test.test | RUN | 0.528209 | 2.217641 | 2.484100 | 0.001903 | 0.001890 | 0.001865 |
| swap_cols_test.test | RUN | 0.706962 | 2.887922 | 3.021074 | 0.001891 | 0.001695 | 0.001806 |
| swap_rows_test.test | RUN | 0.763758 | 3.064592 | 2.990635 | 0.001860 | 0.001674 | 0.001714 |
| diag_test.test | RUN | 0.334370 | 0.795630 | 1.163588 | 0.001611 | 0.001905 | 0.001827 |
| diag_mat_test.test | RUN | 0.345686 | 0.793879 | 0.958357 | 0.001784 | 0.001853 | 0.001818 |
| row_test.test | RUN | 0.487125 | 1.657208 | 2.026662 | 0.001834 | 0.001709 | 0.001750 |
| row_mat_test.test | RUN | 0.314353 | 0.761253 | 0.961346 | 0.001816 | 0.001765 | 0.001772 |
| transpose_test.test | RUN | 0.383030 | 1.096675 | 1.270389 | 0.001650 | 0.001880 | 0.001575 |
| translation_test.test | RUN | 0.297673 | 0.712458 | 0.959837 | 0.001760 | 0.001594 | 0.001583 |
| translation_mat_test.test | RUN | 0.330773 | 0.731242 | 1.076049 | 0.001711 | 0.001649 | 0.001387 |
| swizzle_const_fail.test | COMPILE_FAIL | 0.110575 | 0.214419 | 0.273128 | — | — | — |
| swizzle2_test2.test | RUN | 0.134422 | 0.326139 | 0.410043 | 0.001582 | 0.001776 | 0.001600 |
| swizzle2_test3.test | RUN | 0.135735 | 0.320175 | 0.410227 | 0.001769 | 0.001577 | 0.001281 |
| swizzle2_test4.test | RUN | 0.134201 | 0.304145 | 0.411298 | 0.001589 | 0.001863 | 0.001384 |
| swizzle2_test.test | RUN | 0.451791 | 0.863792 | 1.374734 | 0.001812 | 0.001760 | 0.001697 |
| swizzle3_test2.test | RUN | 0.152779 | 0.332645 | 0.458934 | 0.001728 | 0.001679 | 0.001464 |
| swizzle3_test3.test | RUN | 0.151572 | 0.337784 | 0.459276 | 0.001916 | 0.001710 | 0.001593 |
| swizzle3_test4.test | RUN | 0.149886 | 0.341904 | 0.474214 | 0.001418 | 0.002008 | 0.001415 |
| swizzle3_test.test | RUN | 0.440054 | 0.889911 | 1.370100 | 0.001667 | 0.001949 | 0.001706 |
| swizzle4_test2.test | RUN | 0.257410 | 0.480130 | 0.797601 | 0.001627 | 0.001970 | 0.001701 |
| swizzle4_test3.test | RUN | 0.251853 | 0.459115 | 0.804816 | 0.001690 | 0.001818 | 0.001402 |
| swizzle4_test4.test | RUN | 0.270420 | 0.477589 | 0.784051 | 0.001796 | 0.001629 | 0.001696 |
| swizzle4_test.test | RUN | 0.440705 | 0.962412 | 1.473686 | 0.001808 | 0.001805 | 0.001738 |
| deduce_scalar_test.test | COMPILE | 0.022349 | 0.045519 | 0.073526 | — | — | — |
| deduce_scalar_mq_test.test | RUN | 0.167852 | 0.364580 | 0.502333 | 0.001718 | 0.001616 | 0.001595 |
| deduce_scalar_mv_test.test | RUN | 0.196275 | 0.433022 | 0.605701 | 0.001684 | 0.001678 | 0.001716 |
| deduce_scalar_fail.test | COMPILE_FAIL | 0.017754 | 0.029425 | 0.050678 | — | — | — |
| deduce_mat_test.test | COMPILE | 0.019628 | 0.042291 | 0.057304 | — | — | — |
| deduce_quat_test.test | COMPILE | 0.019394 | 0.040845 | 0.056307 | — | — | — |
| deduce_vec_test.test | COMPILE | 0.019833 | 0.039224 | 0.057583 | — | — | — |
| interop_test.test | RUN | 0.204180 | 0.443739 | 0.841178 | 0.000819 | 0.000730 | 0.001612 |
| transform_test.test | RUN | 0.405529 | 0.780200 | 1.185758 | 0.001438 | 0.001428 | 0.001308 |
| projection_test.test | RUN | 0.259779 | 0.590565 | 0.662975 | 0.001478 | 0.001571 | 0.001304 |
| scalar_traits_test.test | COMPILE | 0.020373 | 0.043645 | 0.065873 | — | — | — |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.953× | 0.954×, 0.952× | 0.982× |
| clang | 0.974×† | 0.996×, 0.952× | 1.089× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1362 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43628287753).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| access_m_test.test | 10 | 0.001009s | 0.000997s | 0.001012s | byte equality observed |
| access_q_test.test | 10 | 0.001004s | 0.000988s | 0.000978s | byte equality observed |
| access_v_test.test | 10 | 0.001009s | 0.000981s | 0.001007s | byte equality observed |
| assign_test.test | 10 | 0.001014s | 0.000989s | 0.001014s | byte equality observed |
| cmp_mm_test.test | 10 | 0.001013s | 0.000985s | 0.001003s | byte equality observed |
| cmp_qq_test.test | 10 | 0.001009s | 0.001041s | 0.001029s | byte equality observed |
| cmp_vv_test.test | 10 | 0.001011s | 0.000988s | 0.001015s | byte equality observed |
| col_mat_test.test | 10 | 0.001031s | 0.000984s | 0.001034s | byte equality observed |
| col_test.test | 10 | 0.000999s | 0.000994s | 0.001032s | byte equality observed |
| conjugate_test.test | 10 | 0.001025s | 0.000999s | 0.000998s | byte equality observed |
| convert_to_test.test | 10 | 0.001002s | 0.001002s | 0.001029s | byte equality observed |
| cross_test.test | 10 | 0.001006s | 0.000996s | 0.001036s | byte equality observed |
| deduce_scalar_mq_test.test | 10 | 0.001033s | 0.000994s | 0.001026s | byte equality observed |
| deduce_scalar_mv_test.test | 10 | 0.001011s | 0.001007s | 0.001035s | byte equality observed |
| del_col_test.test | 10 | 0.001027s | 0.000990s | 0.001044s | byte equality observed |
| del_row_col_test.test | 10 | 0.001032s | 0.000995s | 0.001042s | byte equality observed |
| del_row_test.test | 10 | 0.001043s | 0.000972s | 0.000992s | byte equality observed |
| determinant_test.test | 10 | 0.001041s | 0.001006s | 0.001010s | byte equality observed |
| diag_mat_test.test | 10 | 0.001014s | 0.001018s | 0.001064s | byte equality observed |
| diag_test.test | 10 | 0.001003s | 0.001029s | 0.001018s | byte equality observed |
| div_eq_ms_test.test | 10 | 0.001018s | 0.001003s | 0.000990s | byte equality observed |
| div_eq_qs_test.test | 10 | 0.000973s | 0.000982s | 0.001020s | byte equality observed |
| div_eq_vs_test.test | 10 | 0.001020s | 0.001002s | 0.001000s | byte equality observed |
| div_ms_test.test | 10 | 0.000993s | 0.000976s | 0.001009s | byte equality observed |
| div_qs_test.test | 10 | 0.000980s | 0.001034s | 0.001002s | byte equality observed |
| div_vs_test.test | 10 | 0.001002s | 0.001001s | 0.001017s | byte equality observed |
| dot_qq_test.test | 10 | 0.001006s | 0.001007s | 0.000991s | byte equality observed |
| dot_vv_test.test | 10 | 0.000992s | 0.001010s | 0.000985s | byte equality observed |
| eq_mm_test.test | 10 | 0.001007s | 0.001051s | 0.001017s | byte equality observed |
| eq_qq_test.test | 10 | 0.001002s | 0.001024s | 0.001062s | byte equality observed |
| eq_vv_test.test | 10 | 0.001024s | 0.000989s | 0.001004s | byte equality observed |
| identity_mat_test.test | 10 | 0.001018s | 0.001030s | 0.000997s | byte equality observed |
| identity_quat_test.test | 10 | 0.001025s | 0.001031s | 0.000989s | byte equality observed |
| interop_test.test | 10 | 0.000461s | 0.000459s | 0.001003s | byte equality observed |
| inverse_m_test.test | 10 | 0.001075s | 0.001047s | 0.001043s | byte equality observed |
| inverse_q_test.test | 10 | 0.001062s | 0.001049s | 0.001014s | byte equality observed |
| mag_q_test.test | 10 | 0.001012s | 0.001010s | 0.000996s | byte equality observed |
| mag_sqr_q_test.test | 10 | 0.001018s | 0.000998s | 0.001003s | byte equality observed |
| mag_sqr_v_test.test | 10 | 0.001009s | 0.001023s | 0.001006s | byte equality observed |
| mag_v_test.test | 10 | 0.001014s | 0.001024s | 0.001013s | byte equality observed |
| mat_index_test.test | 10 | 0.001052s | 0.001016s | 0.001048s | byte equality observed |
| mat_traits_array_test.test | 10 | 0.001019s | 0.000986s | 0.001057s | byte equality observed |
| mat_traits_std_array_test.test | 10 | 0.001005s | 0.001014s | 0.000993s | byte equality observed |
| math_test.test | 10 | 0.001544s | 0.001468s | 0.001316s | byte equality observed |
| minus_eq_mm_test.test | 10 | 0.000996s | 0.000993s | 0.001010s | byte equality observed |
| minus_eq_qq_test.test | 10 | 0.001014s | 0.001025s | 0.001020s | byte equality observed |
| minus_eq_vv_test.test | 10 | 0.001021s | 0.000991s | 0.001019s | byte equality observed |
| minus_m_test.test | 10 | 0.001040s | 0.001012s | 0.001022s | byte equality observed |
| minus_mm_test.test | 10 | 0.001026s | 0.000991s | 0.000999s | byte equality observed |
| minus_q_test.test | 10 | 0.001011s | 0.000990s | 0.001013s | byte equality observed |
| minus_qq_test.test | 10 | 0.001013s | 0.000987s | 0.001032s | byte equality observed |
| minus_v_test.test | 10 | 0.001039s | 0.001010s | 0.001030s | byte equality observed |
| minus_vv_test.test | 10 | 0.001029s | 0.001009s | 0.001042s | byte equality observed |
| mul_eq_mm_test.test | 10 | 0.001023s | 0.001001s | 0.001038s | byte equality observed |
| mul_eq_ms_test.test | 10 | 0.001014s | 0.001019s | 0.001030s | byte equality observed |
| mul_eq_qq_test.test | 10 | 0.001034s | 0.001058s | 0.001002s | byte equality observed |
| mul_eq_qs_test.test | 10 | 0.001013s | 0.001004s | 0.000986s | byte equality observed |
| mul_eq_vs_test.test | 10 | 0.001005s | 0.001013s | 0.001025s | byte equality observed |
| mul_mm_test.test | 10 | 0.001029s | 0.001017s | 0.000986s | byte equality observed |
| mul_ms_test.test | 10 | 0.001013s | 0.001019s | 0.000989s | byte equality observed |
| mul_mv_test.test | 10 | 0.001024s | 0.000989s | 0.001022s | byte equality observed |
| mul_qq_test.test | 10 | 0.001008s | 0.001035s | 0.001061s | byte equality observed |
| mul_qs_test.test | 10 | 0.001011s | 0.000990s | 0.001060s | byte equality observed |
| mul_qv_test.test | 10 | 0.001036s | 0.001012s | 0.000992s | byte equality observed |
| mul_sm_test.test | 10 | 0.001030s | 0.001005s | 0.001062s | byte equality observed |
| mul_sv_test.test | 10 | 0.001009s | 0.000990s | 0.001033s | byte equality observed |
| mul_vm_test.test | 10 | 0.000997s | 0.001007s | 0.001010s | byte equality observed |
| mul_vs_test.test | 10 | 0.000998s | 0.001014s | 0.001021s | byte equality observed |
| neg_col_test.test | 10 | 0.001003s | 0.001023s | 0.001007s | byte equality observed |
| neg_row_test.test | 10 | 0.001033s | 0.001012s | 0.001027s | byte equality observed |
| normalize_q_test.test | 10 | 0.001010s | 0.001013s | 0.001015s | byte equality observed |
| normalize_v_test.test | 10 | 0.001013s | 0.001051s | 0.001006s | byte equality observed |
| plus_eq_mm_test.test | 10 | 0.001012s | 0.001012s | 0.001014s | byte equality observed |
| plus_eq_qq_test.test | 10 | 0.001015s | 0.001003s | 0.001004s | byte equality observed |
| plus_eq_vv_test.test | 10 | 0.001009s | 0.001046s | 0.001014s | byte equality observed |
| plus_mm_test.test | 10 | 0.001013s | 0.000976s | 0.001000s | byte equality observed |
| plus_qq_test.test | 10 | 0.001007s | 0.001024s | 0.000989s | byte equality observed |
| plus_vv_test.test | 10 | 0.001027s | 0.000989s | 0.001000s | byte equality observed |
| projection_test.test | 10 | 0.001021s | 0.001029s | 0.000977s | byte equality observed |
| quat_traits_array_test.test | 10 | 0.001033s | 0.001011s | 0.000974s | byte equality observed |
| quat_traits_std_array_test.test | 10 | 0.001004s | 0.000996s | 0.001035s | byte equality observed |
| rot_mat_test.test | 1 | 0.029118s | 0.024958s | 0.027240s | byte equality observed |
| rot_quat_test.test | 10 | 0.001000s | 0.000966s | 0.001035s | byte equality observed |
| rotx_mat_test.test | 10 | 0.000998s | 0.001007s | 0.001056s | byte equality observed |
| rotx_quat_test.test | 10 | 0.001027s | 0.001015s | 0.001037s | byte equality observed |
| roty_mat_test.test | 10 | 0.001031s | 0.001034s | 0.001096s | byte equality observed |
| roty_quat_test.test | 10 | 0.001018s | 0.001006s | 0.001099s | byte equality observed |
| rotz_mat_test.test | 10 | 0.001041s | 0.001024s | 0.001087s | byte equality observed |
| rotz_quat_test.test | 10 | 0.001002s | 0.001016s | 0.001076s | byte equality observed |
| row_mat_test.test | 10 | 0.000997s | 0.001022s | 0.001098s | byte equality observed |
| row_test.test | 10 | 0.001038s | 0.001044s | 0.001068s | byte equality observed |
| scalar_cast_m_test.test | 10 | 0.001002s | 0.001003s | 0.001068s | byte equality observed |
| scalar_cast_q_test.test | 10 | 0.001035s | 0.001002s | 0.001107s | byte equality observed |
| scalar_cast_v_test.test | 10 | 0.000998s | 0.001001s | 0.001080s | byte equality observed |
| slerp_test.test | 2 | 0.013516s | 0.011038s | 0.012679s | byte equality observed |
| swap_cols_test.test | 10 | 0.000961s | 0.000978s | 0.001028s | byte equality observed |
| swap_rows_test.test | 10 | 0.000986s | 0.001003s | 0.001055s | byte equality observed |
| swizzle2_test.test | 10 | 0.001017s | 0.000990s | 0.001075s | byte equality observed |
| swizzle2_test2.test | 10 | 0.001003s | 0.000977s | 0.001058s | byte equality observed |
| swizzle2_test3.test | 10 | 0.001001s | 0.001012s | 0.001088s | byte equality observed |
| swizzle2_test4.test | 10 | 0.001000s | 0.001003s | 0.001088s | byte equality observed |
| swizzle3_test.test | 10 | 0.001003s | 0.000997s | 0.001036s | byte equality observed |
| swizzle3_test2.test | 10 | 0.000993s | 0.001008s | 0.001093s | byte equality observed |
| swizzle3_test3.test | 10 | 0.001005s | 0.001013s | 0.001077s | byte equality observed |
| swizzle3_test4.test | 10 | 0.001005s | 0.000977s | 0.001031s | byte equality observed |
| swizzle4_test.test | 10 | 0.001002s | 0.001001s | 0.001041s | byte equality observed |
| swizzle4_test2.test | 10 | 0.001020s | 0.000991s | 0.001090s | byte equality observed |
| swizzle4_test3.test | 10 | 0.001031s | 0.001039s | 0.001086s | byte equality observed |
| swizzle4_test4.test | 10 | 0.001019s | 0.001041s | 0.001010s | byte equality observed |
| to_string_test.test | 10 | 0.001046s | 0.001024s | 0.001114s | byte equality observed |
| transform_test.test | 10 | 0.001001s | 0.001007s | 0.001036s | byte equality observed |
| translation_mat_test.test | 10 | 0.001020s | 0.000988s | 0.001027s | byte equality observed |
| translation_test.test | 10 | 0.000992s | 0.000986s | 0.001040s | byte equality observed |
| transpose_test.test | 10 | 0.001009s | 0.000981s | 0.001054s | byte equality observed |
| vec_index_test.test | 10 | 0.001016s | 0.000984s | 0.001078s | byte equality observed |
| vec_register_test.test | 10 | 0.001014s | 0.000996s | 0.001048s | byte equality observed |
| vec_traits_array_test.test | 10 | 0.001008s | 0.000985s | 0.001014s | byte equality observed |
| vec_traits_gnuc_test.test | 10 | 0.001033s | 0.001003s | 0.001095s | byte equality observed |
| vec_traits_std_array_test.test | 10 | 0.001018s | 0.000992s | 0.001139s | byte equality observed |
| zero_mat_test.test | 10 | 0.001017s | 0.001009s | 0.001122s | byte equality observed |
| zero_quat_test.test | 10 | 0.000988s | 0.000988s | 0.001091s | byte equality observed |
| zero_vec_test.test | 10 | 0.001058s | 0.001007s | 0.001086s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43628287753).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
