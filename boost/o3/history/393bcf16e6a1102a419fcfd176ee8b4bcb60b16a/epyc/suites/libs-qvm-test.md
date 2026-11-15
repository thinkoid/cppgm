# libs/qvm/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| math_test.test | RUN | 0.337477 | 0.882414 | 1.229489 | 0.002533 | 0.002409 | 0.002500 |
| mat_traits_array_test.test | RUN | 0.266203 | 0.887419 | 1.004175 | 0.001628 | 0.001898 | 0.001634 |
| mat_traits_std_array_test.test | RUN | 0.262629 | 0.704952 | 0.992730 | 0.001939 | 0.001761 | 0.001996 |
| vec_traits_array_test.test | RUN | 0.231414 | 0.690845 | 0.841664 | 0.001802 | 0.001970 | 0.001636 |
| vec_traits_gnuc_test.test | RUN | 0.420304 | 0.877553 | 1.704586 | 0.001690 | 0.001973 | 0.002276 |
| vec_traits_std_array_test.test | RUN | 0.223324 | 0.538046 | 0.795089 | 0.001895 | 0.002038 | 0.002078 |
| quat_traits_array_test.test | RUN | 0.220084 | 0.724005 | 0.824312 | 0.001786 | 0.001607 | 0.001949 |
| quat_traits_std_array_test.test | RUN | 0.220907 | 0.562915 | 0.773728 | 0.001742 | 0.001987 | 0.002160 |
| access_m_test.test | RUN | 0.367998 | 1.351649 | 1.791114 | 0.001941 | 0.002184 | 0.001884 |
| access_m_fail1.test | COMPILE_FAIL | 0.036394 | 0.058063 | 0.120897 | — | — | — |
| access_m_fail2.test | COMPILE_FAIL | 0.035514 | 0.059878 | 0.115461 | — | — | — |
| access_q_test.test | RUN | 0.297159 | 0.697575 | 1.061764 | 0.001810 | 0.002012 | 0.002096 |
| access_q_fail.test | COMPILE_FAIL | 0.027540 | 0.046576 | 0.095031 | — | — | — |
| access_v_test.test | RUN | 0.301018 | 0.690333 | 1.066782 | 0.001793 | 0.002259 | 0.001868 |
| access_v_fail1.test | COMPILE_FAIL | 0.025040 | 0.039585 | 0.088479 | — | — | — |
| access_v_fail2.test | COMPILE_FAIL | 0.023425 | 0.044092 | 0.081013 | — | — | — |
| assign_test.test | RUN | 0.453492 | 1.131814 | 1.886122 | 0.001898 | 0.002142 | 0.001944 |
| to_string_test.test | RUN | 0.528596 | 1.787532 | 10.254039 | 0.001927 | 0.002156 | 0.001992 |
| cmp_vv_test.test | RUN | 0.374479 | 0.894516 | 1.325963 | 0.001787 | 0.001936 | 0.001735 |
| cross_test.test | RUN | 0.366285 | 0.858291 | 1.364481 | 0.001826 | 0.001953 | 0.002060 |
| div_eq_vs_test.test | RUN | 0.339608 | 0.733632 | 1.250221 | 0.002036 | 0.001762 | 0.001956 |
| div_vs_test.test | RUN | 0.357593 | 0.901848 | 1.382572 | 0.001897 | 0.002094 | 0.002058 |
| dot_vv_test.test | RUN | 0.341796 | 0.854384 | 1.318783 | 0.001831 | 0.002098 | 0.001993 |
| eq_vv_test.test | RUN | 0.382548 | 0.950585 | 1.387848 | 0.001916 | 0.002098 | 0.001868 |
| mag_v_test.test | RUN | 0.339215 | 0.766823 | 1.267583 | 0.002010 | 0.001920 | 0.001747 |
| mag_sqr_v_test.test | RUN | 0.335264 | 0.760846 | 1.162012 | 0.001808 | 0.002059 | 0.001860 |
| minus_v_test.test | RUN | 0.346895 | 0.885282 | 1.344088 | 0.001806 | 0.002221 | 0.001734 |
| minus_eq_vv_test.test | RUN | 0.349588 | 0.870038 | 1.219594 | 0.001790 | 0.002179 | 0.002102 |
| minus_vv_test.test | RUN | 0.361820 | 0.935350 | 1.380767 | 0.002052 | 0.002042 | 0.001974 |
| mul_eq_vs_test.test | RUN | 0.345038 | 0.780098 | 1.231685 | 0.001834 | 0.002052 | 0.001929 |
| mul_vs_test.test | RUN | 0.359728 | 0.929035 | 1.377152 | 0.001756 | 0.002206 | 0.001805 |
| mul_sv_test.test | RUN | 0.368564 | 0.932290 | 1.403470 | 0.001793 | 0.002112 | 0.002106 |
| mul_vm_test.test | RUN | 0.505308 | 1.692981 | 2.057824 | 0.001866 | 0.002054 | 0.001668 |
| normalize_v_test.test | RUN | 0.366323 | 1.129604 | 1.298504 | 0.001988 | 0.002229 | 0.001900 |
| plus_eq_vv_test.test | RUN | 0.346537 | 0.897780 | 1.324165 | 0.001792 | 0.001975 | 0.002027 |
| plus_vv_test.test | RUN | 0.383700 | 0.937362 | 1.371490 | 0.001876 | 0.002148 | 0.001730 |
| scalar_cast_v_test.test | RUN | 0.335909 | 0.724806 | 1.229850 | 0.001700 | 0.001454 | 0.001700 |
| vec_index_test.test | RUN | 0.292776 | 0.699429 | 1.034555 | 0.001936 | 0.002255 | 0.001650 |
| vec_register_test.test | RUN | 0.199334 | 0.645794 | 0.781140 | 0.002124 | 0.001960 | 0.001873 |
| cmp_mm_test.test | RUN | 0.564299 | 2.033169 | 2.600183 | 0.002076 | 0.002104 | 0.002196 |
| determinant_test.test | RUN | 0.393790 | 1.039363 | 1.484916 | 0.002038 | 0.001971 | 0.002085 |
| div_eq_ms_test.test | RUN | 0.406201 | 0.994679 | 1.680086 | 0.001787 | 0.002030 | 0.001906 |
| div_ms_test.test | RUN | 0.469111 | 1.538503 | 2.034441 | 0.001861 | 0.002121 | 0.002142 |
| eq_mm_test.test | RUN | 0.537829 | 1.884660 | 2.405759 | 0.002015 | 0.002092 | 0.002160 |
| minus_m_test.test | RUN | 0.468553 | 1.522432 | 1.939741 | 0.001932 | 0.002067 | 0.001800 |
| minus_eq_mm_test.test | RUN | 0.446949 | 1.389536 | 1.785934 | 0.001699 | 0.002189 | 0.002033 |
| minus_mm_test.test | RUN | 0.501755 | 1.796834 | 2.103128 | 0.001970 | 0.002160 | 0.002159 |
| mul_eq_mm_test.test | RUN | 0.410267 | 1.333260 | 1.626375 | 0.002024 | 0.002188 | 0.001916 |
| mul_eq_ms_test.test | RUN | 0.407578 | 0.951789 | 1.598050 | 0.001879 | 0.002150 | 0.002266 |
| mul_mm_test.test | RUN | 0.570269 | 2.916915 | 2.650924 | 0.002063 | 0.001874 | 0.002152 |
| mul_ms_test.test | RUN | 0.487984 | 1.558999 | 2.026530 | 0.001924 | 0.002051 | 0.001996 |
| mul_sm_test.test | RUN | 0.496263 | 1.562915 | 2.119116 | 0.001949 | 0.001994 | 0.002134 |
| mul_mv_test.test | RUN | 0.495206 | 1.653095 | 2.179283 | 0.002004 | 0.001892 | 0.002175 |
| inverse_m_test.test | RUN | 0.665013 | 2.945992 | 2.843494 | 0.002152 | 0.001725 | 0.002008 |
| plus_eq_mm_test.test | RUN | 0.443777 | 1.426977 | 1.851447 | 0.002192 | 0.001935 | 0.002256 |
| plus_mm_test.test | RUN | 0.494907 | 1.752489 | 2.125763 | 0.001854 | 0.002009 | 0.001831 |
| scalar_cast_m_test.test | RUN | 0.382131 | 0.821653 | 1.380692 | 0.001932 | 0.001988 | 0.002098 |
| mat_index_test.test | RUN | 0.316113 | 0.765468 | 1.190643 | 0.001976 | 0.001709 | 0.002070 |
| cmp_qq_test.test | RUN | 0.342143 | 0.734961 | 1.181188 | 0.002053 | 0.002080 | 0.001729 |
| conjugate_test.test | RUN | 0.340141 | 0.740857 | 1.173095 | 0.001867 | 0.002108 | 0.001662 |
| normalize_q_test.test | RUN | 0.343208 | 0.830665 | 1.247468 | 0.001763 | 0.002060 | 0.001837 |
| div_eq_qs_test.test | RUN | 0.331145 | 0.696471 | 1.177413 | 0.001977 | 0.001774 | 0.001798 |
| div_qs_test.test | RUN | 0.347172 | 0.737836 | 1.220482 | 0.001938 | 0.001983 | 0.001848 |
| dot_qq_test.test | RUN | 0.338189 | 0.718380 | 1.205849 | 0.002048 | 0.002182 | 0.001800 |
| eq_qq_test.test | RUN | 0.346153 | 0.759476 | 1.244483 | 0.001674 | 0.002107 | 0.002155 |
| inverse_q_test.test | RUN | 0.403939 | 0.992045 | 1.507736 | 0.001891 | 0.001941 | 0.002054 |
| mag_q_test.test | RUN | 0.337572 | 0.750545 | 1.176010 | 0.002088 | 0.002046 | 0.001802 |
| mag_sqr_q_test.test | RUN | 0.347917 | 0.736284 | 1.201157 | 0.001918 | 0.002100 | 0.002046 |
| minus_q_test.test | RUN | 0.322709 | 0.744382 | 1.171954 | 0.001862 | 0.002120 | 0.002166 |
| minus_eq_qq_test.test | RUN | 0.338698 | 0.762168 | 1.157256 | 0.001852 | 0.002188 | 0.002154 |
| minus_qq_test.test | RUN | 0.336957 | 0.749294 | 1.217702 | 0.002030 | 0.001907 | 0.001724 |
| mul_eq_qs_test.test | RUN | 0.328442 | 0.701679 | 1.204184 | 0.001986 | 0.002101 | 0.001660 |
| mul_qs_test.test | RUN | 0.327483 | 0.739539 | 1.175655 | 0.001934 | 0.002224 | 0.002191 |
| mul_qv_test.test | RUN | 0.414026 | 1.038775 | 1.543142 | 0.001911 | 0.002148 | 0.002114 |
| mul_qq_test.test | RUN | 0.401607 | 1.053233 | 1.526979 | 0.001958 | 0.002199 | 0.001707 |
| mul_eq_qq_test.test | RUN | 0.399565 | 1.020448 | 1.513974 | 0.001858 | 0.002158 | 0.002114 |
| plus_eq_qq_test.test | RUN | 0.330959 | 0.743461 | 1.167540 | 0.001952 | 0.002104 | 0.002088 |
| plus_qq_test.test | RUN | 0.339963 | 0.740014 | 1.206418 | 0.001862 | 0.002138 | 0.002044 |
| scalar_cast_q_test.test | RUN | 0.339811 | 0.714630 | 1.201429 | 0.001930 | 0.002032 | 0.002059 |
| slerp_test.test | RUN | 0.351654 | 1.401338 | 1.401268 | 0.025195 | 0.019867 | 0.021471 |
| convert_to_test.test | RUN | 0.494476 | 1.331601 | 2.153318 | 0.002008 | 0.001644 | 0.002079 |
| rot_mat_test.test | RUN | 0.762805 | 5.818137 | 6.178230 | 0.060586 | 0.055182 | 0.050472 |
| rot_quat_test.test | RUN | 0.418553 | 1.210408 | 1.460274 | 0.002028 | 0.002108 | 0.002112 |
| rotx_mat_test.test | RUN | 0.462953 | 1.566260 | 1.944947 | 0.001852 | 0.002258 | 0.002010 |
| rotx_quat_test.test | RUN | 0.406755 | 1.025879 | 1.370842 | 0.002046 | 0.002022 | 0.002232 |
| roty_mat_test.test | RUN | 0.450581 | 1.561207 | 1.927757 | 0.002133 | 0.001963 | 0.002182 |
| roty_quat_test.test | RUN | 0.403138 | 1.021538 | 1.268005 | 0.001675 | 0.002150 | 0.002156 |
| rotz_mat_test.test | RUN | 0.490305 | 1.795324 | 2.041441 | 0.002032 | 0.001886 | 0.002262 |
| rotz_quat_test.test | RUN | 0.400586 | 1.002348 | 1.421680 | 0.001884 | 0.002030 | 0.002127 |
| zero_vec_test.test | RUN | 0.343603 | 0.895968 | 1.134980 | 0.001974 | 0.001861 | 0.001902 |
| zero_mat_test.test | RUN | 0.430876 | 1.423423 | 1.710893 | 0.001743 | 0.002120 | 0.002033 |
| zero_quat_test.test | RUN | 0.332925 | 0.729682 | 1.129238 | 0.001811 | 0.002030 | 0.002232 |
| identity_mat_test.test | RUN | 0.398157 | 1.076810 | 1.527002 | 0.001898 | 0.001755 | 0.001683 |
| identity_quat_test.test | RUN | 0.328476 | 0.703404 | 1.168212 | 0.001998 | 0.002206 | 0.001643 |
| col_test.test | RUN | 0.640950 | 2.247558 | 3.243904 | 0.001862 | 0.002108 | 0.002172 |
| col_mat_test.test | RUN | 0.421069 | 1.034604 | 1.579568 | 0.001937 | 0.002138 | 0.002096 |
| neg_col_test.test | RUN | 0.483221 | 1.470032 | 1.998741 | 0.001805 | 0.002129 | 0.001602 |
| neg_row_test.test | RUN | 0.504769 | 1.495908 | 1.982544 | 0.002097 | 0.002159 | 0.001988 |
| del_col_test.test | RUN | 0.523269 | 1.604465 | 2.014582 | 0.001989 | 0.002112 | 0.002028 |
| del_row_test.test | RUN | 0.520701 | 1.567553 | 2.098994 | 0.002098 | 0.002152 | 0.002110 |
| del_row_col_test.test | RUN | 0.710676 | 2.991294 | 3.854559 | 0.002021 | 0.002180 | 0.001952 |
| swap_cols_test.test | RUN | 0.952776 | 3.993555 | 4.668362 | 0.001951 | 0.002013 | 0.001880 |
| swap_rows_test.test | RUN | 1.039895 | 4.176179 | 4.590743 | 0.002114 | 0.001793 | 0.002128 |
| diag_test.test | RUN | 0.443842 | 1.061263 | 1.654191 | 0.001804 | 0.002052 | 0.002075 |
| diag_mat_test.test | RUN | 0.446556 | 1.041134 | 1.629222 | 0.001905 | 0.002207 | 0.002099 |
| row_test.test | RUN | 0.654688 | 2.275057 | 3.330468 | 0.002186 | 0.002192 | 0.002061 |
| row_mat_test.test | RUN | 0.427069 | 1.055673 | 1.439461 | 0.002136 | 0.001901 | 0.002052 |
| transpose_test.test | RUN | 0.497764 | 1.495522 | 2.029640 | 0.001645 | 0.002154 | 0.002128 |
| translation_test.test | RUN | 0.398491 | 0.964220 | 1.527443 | 0.002041 | 0.001998 | 0.002158 |
| translation_mat_test.test | RUN | 0.447316 | 1.003540 | 1.696351 | 0.001914 | 0.001803 | 0.001853 |
| swizzle_const_fail.test | COMPILE_FAIL | 0.150819 | 0.298199 | 0.443447 | — | — | — |
| swizzle2_test2.test | RUN | 0.183246 | 0.418355 | 0.646367 | 0.001895 | 0.001951 | 0.001932 |
| swizzle2_test3.test | RUN | 0.176927 | 0.427760 | 0.625813 | 0.001945 | 0.001965 | 0.001821 |
| swizzle2_test4.test | RUN | 0.177188 | 0.403896 | 0.646864 | 0.001897 | 0.002074 | 0.001713 |
| swizzle2_test.test | RUN | 0.577515 | 1.186305 | 2.198981 | 0.001960 | 0.002118 | 0.002151 |
| swizzle3_test2.test | RUN | 0.202478 | 0.443097 | 0.735687 | 0.002032 | 0.002040 | 0.001935 |
| swizzle3_test3.test | RUN | 0.198277 | 0.457022 | 0.732555 | 0.001806 | 0.002138 | 0.001824 |
| swizzle3_test4.test | RUN | 0.198628 | 0.433495 | 0.723877 | 0.001948 | 0.002181 | 0.001720 |
| swizzle3_test.test | RUN | 0.565158 | 1.226607 | 2.181755 | 0.001741 | 0.001783 | 0.002113 |
| swizzle4_test2.test | RUN | 0.335194 | 0.667076 | 1.271493 | 0.001912 | 0.002142 | 0.001798 |
| swizzle4_test3.test | RUN | 0.343195 | 0.697908 | 1.264644 | 0.001813 | 0.002092 | 0.001774 |
| swizzle4_test4.test | RUN | 0.348630 | 0.663955 | 1.298842 | 0.002028 | 0.002018 | 0.001934 |
| swizzle4_test.test | RUN | 0.591995 | 1.349874 | 2.221619 | 0.002043 | 0.002160 | 0.002143 |
| deduce_scalar_test.test | COMPILE | 0.028801 | 0.062495 | 0.103985 | — | — | — |
| deduce_scalar_mq_test.test | RUN | 0.217783 | 0.506604 | 0.809015 | 0.001879 | 0.001894 | 0.001839 |
| deduce_scalar_mv_test.test | RUN | 0.261911 | 0.559709 | 0.895267 | 0.001800 | 0.001882 | 0.002102 |
| deduce_scalar_fail.test | COMPILE_FAIL | 0.023854 | 0.038354 | 0.079911 | — | — | — |
| deduce_mat_test.test | COMPILE | 0.026852 | 0.056467 | 0.094726 | — | — | — |
| deduce_quat_test.test | COMPILE | 0.025463 | 0.054613 | 0.091949 | — | — | — |
| deduce_vec_test.test | COMPILE | 0.025757 | 0.052071 | 0.087662 | — | — | — |
| interop_test.test | RUN | 0.273078 | 0.722376 | 1.370760 | 0.000807 | 0.000998 | 0.002132 |
| transform_test.test | RUN | 0.514429 | 0.928473 | 1.670891 | 0.001382 | 0.001518 | 0.001351 |
| projection_test.test | RUN | 0.322046 | 0.817578 | 1.231530 | 0.001538 | 0.001267 | 0.001389 |
| scalar_traits_test.test | COMPILE | 0.026617 | 0.057944 | 0.093702 | — | — | — |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.970× | 0.955×, 0.985× | 1.035× |
| clang | 1.034× | 1.027×, 1.041× | 0.984× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1359 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43674678137).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| access_m_test.test | 10 | 0.001226s | 0.001270s | 0.001224s | byte equality observed |
| access_q_test.test | 10 | 0.001227s | 0.001266s | 0.001253s | byte equality observed |
| access_v_test.test | 10 | 0.001222s | 0.001321s | 0.001199s | byte equality observed |
| assign_test.test | 10 | 0.001235s | 0.001243s | 0.001229s | byte equality observed |
| cmp_mm_test.test | 10 | 0.001234s | 0.001257s | 0.001244s | byte equality observed |
| cmp_qq_test.test | 10 | 0.001224s | 0.001191s | 0.001300s | byte equality observed |
| cmp_vv_test.test | 10 | 0.001242s | 0.001184s | 0.001247s | byte equality observed |
| col_mat_test.test | 10 | 0.001226s | 0.001260s | 0.001229s | byte equality observed |
| col_test.test | 10 | 0.001275s | 0.001231s | 0.001287s | byte equality observed |
| conjugate_test.test | 10 | 0.001258s | 0.001203s | 0.001223s | byte equality observed |
| convert_to_test.test | 10 | 0.001255s | 0.001221s | 0.001259s | byte equality observed |
| cross_test.test | 10 | 0.001264s | 0.001272s | 0.001274s | byte equality observed |
| deduce_scalar_mq_test.test | 10 | 0.001254s | 0.001290s | 0.001280s | byte equality observed |
| deduce_scalar_mv_test.test | 10 | 0.001320s | 0.001254s | 0.001266s | byte equality observed |
| del_col_test.test | 10 | 0.001237s | 0.001252s | 0.001265s | byte equality observed |
| del_row_col_test.test | 10 | 0.001235s | 0.001192s | 0.001247s | byte equality observed |
| del_row_test.test | 10 | 0.001211s | 0.001230s | 0.001260s | byte equality observed |
| determinant_test.test | 10 | 0.001304s | 0.001239s | 0.001257s | byte equality observed |
| diag_mat_test.test | 10 | 0.001244s | 0.001277s | 0.001265s | byte equality observed |
| diag_test.test | 10 | 0.001252s | 0.001242s | 0.001247s | byte equality observed |
| div_eq_ms_test.test | 10 | 0.001262s | 0.001268s | 0.001231s | byte equality observed |
| div_eq_qs_test.test | 10 | 0.001262s | 0.001275s | 0.001233s | byte equality observed |
| div_eq_vs_test.test | 10 | 0.001226s | 0.001244s | 0.001254s | byte equality observed |
| div_ms_test.test | 10 | 0.001263s | 0.001257s | 0.001245s | byte equality observed |
| div_qs_test.test | 10 | 0.001248s | 0.001250s | 0.001282s | byte equality observed |
| div_vs_test.test | 10 | 0.001286s | 0.001264s | 0.001283s | byte equality observed |
| dot_qq_test.test | 10 | 0.001263s | 0.001292s | 0.001205s | byte equality observed |
| dot_vv_test.test | 10 | 0.001241s | 0.001227s | 0.001304s | byte equality observed |
| eq_mm_test.test | 10 | 0.001305s | 0.001270s | 0.001255s | byte equality observed |
| eq_qq_test.test | 10 | 0.001278s | 0.001282s | 0.001251s | byte equality observed |
| eq_vv_test.test | 10 | 0.001284s | 0.001309s | 0.001241s | byte equality observed |
| identity_mat_test.test | 10 | 0.001301s | 0.001266s | 0.001217s | byte equality observed |
| identity_quat_test.test | 10 | 0.001274s | 0.001266s | 0.001237s | byte equality observed |
| interop_test.test | 10 | 0.000584s | 0.000589s | 0.001216s | byte equality observed |
| inverse_m_test.test | 10 | 0.001316s | 0.001282s | 0.001278s | byte equality observed |
| inverse_q_test.test | 10 | 0.001261s | 0.001264s | 0.001277s | byte equality observed |
| mag_q_test.test | 10 | 0.001234s | 0.001223s | 0.001241s | byte equality observed |
| mag_sqr_q_test.test | 10 | 0.001277s | 0.001286s | 0.001228s | byte equality observed |
| mag_sqr_v_test.test | 10 | 0.001240s | 0.001222s | 0.001224s | byte equality observed |
| mag_v_test.test | 10 | 0.001266s | 0.001227s | 0.001211s | byte equality observed |
| mat_index_test.test | 10 | 0.001262s | 0.001231s | 0.001228s | byte equality observed |
| mat_traits_array_test.test | 10 | 0.001286s | 0.001246s | 0.001244s | byte equality observed |
| mat_traits_std_array_test.test | 10 | 0.001226s | 0.001225s | 0.001251s | byte equality observed |
| math_test.test | 9 | 0.001886s | 0.001782s | 0.001621s | byte equality observed |
| minus_eq_mm_test.test | 10 | 0.001211s | 0.001308s | 0.001231s | byte equality observed |
| minus_eq_qq_test.test | 10 | 0.001258s | 0.001278s | 0.001216s | byte equality observed |
| minus_eq_vv_test.test | 10 | 0.001235s | 0.001275s | 0.001253s | byte equality observed |
| minus_m_test.test | 10 | 0.001268s | 0.001249s | 0.001205s | byte equality observed |
| minus_mm_test.test | 10 | 0.001268s | 0.001278s | 0.001216s | byte equality observed |
| minus_q_test.test | 10 | 0.001234s | 0.001317s | 0.001237s | byte equality observed |
| minus_qq_test.test | 10 | 0.001250s | 0.001234s | 0.001206s | byte equality observed |
| minus_v_test.test | 10 | 0.001244s | 0.001253s | 0.001271s | byte equality observed |
| minus_vv_test.test | 10 | 0.001240s | 0.001267s | 0.001244s | byte equality observed |
| mul_eq_mm_test.test | 10 | 0.001240s | 0.001261s | 0.001253s | byte equality observed |
| mul_eq_ms_test.test | 10 | 0.001268s | 0.001261s | 0.001246s | byte equality observed |
| mul_eq_qq_test.test | 10 | 0.001325s | 0.001254s | 0.001262s | byte equality observed |
| mul_eq_qs_test.test | 10 | 0.001271s | 0.001252s | 0.001252s | byte equality observed |
| mul_eq_vs_test.test | 10 | 0.001248s | 0.001209s | 0.001266s | byte equality observed |
| mul_mm_test.test | 10 | 0.001283s | 0.001246s | 0.001213s | byte equality observed |
| mul_ms_test.test | 10 | 0.001247s | 0.001247s | 0.001233s | byte equality observed |
| mul_mv_test.test | 10 | 0.001250s | 0.001257s | 0.001250s | byte equality observed |
| mul_qq_test.test | 10 | 0.001283s | 0.001274s | 0.001254s | byte equality observed |
| mul_qs_test.test | 10 | 0.001248s | 0.001290s | 0.001256s | byte equality observed |
| mul_qv_test.test | 10 | 0.001257s | 0.001242s | 0.001231s | byte equality observed |
| mul_sm_test.test | 10 | 0.001287s | 0.001239s | 0.001245s | byte equality observed |
| mul_sv_test.test | 7 | 0.001237s | 0.001255s | 0.001240s | byte equality observed |
| mul_vm_test.test | 7 | 0.001244s | 0.001233s | 0.001263s | byte equality observed |
| mul_vs_test.test | 10 | 0.001274s | 0.001306s | 0.001282s | byte equality observed |
| neg_col_test.test | 10 | 0.001267s | 0.001230s | 0.001318s | byte equality observed |
| neg_row_test.test | 10 | 0.001261s | 0.001247s | 0.001207s | byte equality observed |
| normalize_q_test.test | 10 | 0.001256s | 0.001250s | 0.001228s | byte equality observed |
| normalize_v_test.test | 10 | 0.001272s | 0.001246s | 0.001280s | byte equality observed |
| plus_eq_mm_test.test | 10 | 0.001258s | 0.001207s | 0.001354s | byte equality observed |
| plus_eq_qq_test.test | 10 | 0.001296s | 0.001250s | 0.001358s | byte equality observed |
| plus_eq_vv_test.test | 10 | 0.001239s | 0.001272s | 0.001367s | byte equality observed |
| plus_mm_test.test | 10 | 0.001251s | 0.001222s | 0.001471s | byte equality observed |
| plus_qq_test.test | 10 | 0.001266s | 0.001233s | 0.001481s | byte equality observed |
| plus_vv_test.test | 10 | 0.001249s | 0.001238s | 0.001484s | byte equality observed |
| projection_test.test | 10 | 0.001269s | 0.001255s | 0.001454s | byte equality observed |
| quat_traits_array_test.test | 10 | 0.001277s | 0.001254s | 0.001432s | byte equality observed |
| quat_traits_std_array_test.test | 10 | 0.001220s | 0.001163s | 0.001441s | byte equality observed |
| rot_mat_test.test | 1 | 0.036889s | 0.032926s | 0.043924s | byte equality observed |
| rot_quat_test.test | 10 | 0.001174s | 0.001168s | 0.001465s | byte equality observed |
| rotx_mat_test.test | 10 | 0.001184s | 0.001232s | 0.001455s | byte equality observed |
| rotx_quat_test.test | 10 | 0.001267s | 0.001260s | 0.001465s | byte equality observed |
| roty_mat_test.test | 10 | 0.001291s | 0.001258s | 0.001481s | byte equality observed |
| roty_quat_test.test | 10 | 0.001263s | 0.001284s | 0.001489s | byte equality observed |
| rotz_mat_test.test | 10 | 0.001347s | 0.001319s | 0.001525s | byte equality observed |
| rotz_quat_test.test | 10 | 0.001301s | 0.001274s | 0.001486s | byte equality observed |
| row_mat_test.test | 10 | 0.001250s | 0.001294s | 0.001471s | byte equality observed |
| row_test.test | 10 | 0.001293s | 0.001306s | 0.001453s | byte equality observed |
| scalar_cast_m_test.test | 10 | 0.001291s | 0.001329s | 0.001506s | byte equality observed |
| scalar_cast_q_test.test | 10 | 0.001347s | 0.001276s | 0.001469s | byte equality observed |
| scalar_cast_v_test.test | 10 | 0.001328s | 0.001346s | 0.001415s | byte equality observed |
| slerp_test.test | 2 | 0.021677s | 0.018619s | 0.019389s | byte equality observed |
| swap_cols_test.test | 10 | 0.001422s | 0.001412s | 0.001428s | byte equality observed |
| swap_rows_test.test | 10 | 0.001442s | 0.001424s | 0.001438s | byte equality observed |
| swizzle2_test.test | 10 | 0.001412s | 0.001465s | 0.001442s | byte equality observed |
| swizzle2_test2.test | 10 | 0.001457s | 0.001459s | 0.001418s | byte equality observed |
| swizzle2_test3.test | 10 | 0.001470s | 0.001443s | 0.001453s | byte equality observed |
| swizzle2_test4.test | 10 | 0.001502s | 0.001480s | 0.001492s | byte equality observed |
| swizzle3_test.test | 10 | 0.001490s | 0.001445s | 0.001499s | byte equality observed |
| swizzle3_test2.test | 10 | 0.001490s | 0.001499s | 0.001453s | byte equality observed |
| swizzle3_test3.test | 10 | 0.001504s | 0.001475s | 0.001465s | byte equality observed |
| swizzle3_test4.test | 10 | 0.001507s | 0.001493s | 0.001451s | byte equality observed |
| swizzle4_test.test | 10 | 0.001493s | 0.001460s | 0.001509s | byte equality observed |
| swizzle4_test2.test | 10 | 0.001503s | 0.001507s | 0.001518s | byte equality observed |
| swizzle4_test3.test | 10 | 0.001500s | 0.001498s | 0.001488s | byte equality observed |
| swizzle4_test4.test | 10 | 0.001477s | 0.001534s | 0.001455s | byte equality observed |
| to_string_test.test | 10 | 0.001557s | 0.001543s | 0.001517s | byte equality observed |
| transform_test.test | 10 | 0.001505s | 0.001528s | 0.001509s | byte equality observed |
| translation_mat_test.test | 10 | 0.001483s | 0.001496s | 0.001500s | byte equality observed |
| translation_test.test | 10 | 0.001498s | 0.001517s | 0.001514s | byte equality observed |
| transpose_test.test | 10 | 0.001495s | 0.001492s | 0.001462s | byte equality observed |
| vec_index_test.test | 10 | 0.001498s | 0.001485s | 0.001486s | byte equality observed |
| vec_register_test.test | 10 | 0.001490s | 0.001502s | 0.001480s | byte equality observed |
| vec_traits_array_test.test | 10 | 0.001505s | 0.001511s | 0.001468s | byte equality observed |
| vec_traits_gnuc_test.test | 10 | 0.001518s | 0.001471s | 0.001485s | byte equality observed |
| vec_traits_std_array_test.test | 10 | 0.001484s | 0.001516s | 0.001465s | byte equality observed |
| zero_mat_test.test | 10 | 0.001517s | 0.001496s | 0.001510s | byte equality observed |
| zero_quat_test.test | 10 | 0.001518s | 0.001477s | 0.001497s | byte equality observed |
| zero_vec_test.test | 10 | 0.001473s | 0.001512s | 0.001488s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43674678137).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
