# libs/qvm/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| math_test.test | RUN | 0.313191 | 0.813840 | 1.002558 | 0.002645 | 0.002539 | 0.002628 |
| mat_traits_array_test.test | RUN | 0.243311 | 0.793113 | 0.800614 | 0.002231 | 0.001908 | 0.001631 |
| mat_traits_std_array_test.test | RUN | 0.248666 | 0.612095 | 0.794344 | 0.001960 | 0.002038 | 0.001893 |
| vec_traits_array_test.test | RUN | 0.215825 | 0.628637 | 0.677863 | 0.001856 | 0.002115 | 0.001900 |
| vec_traits_gnuc_test.test | RUN | 0.388638 | 0.771233 | 1.339388 | 0.001705 | 0.002023 | 0.001846 |
| vec_traits_std_array_test.test | RUN | 0.210638 | 0.492281 | 0.692973 | 0.001965 | 0.001922 | 0.002158 |
| quat_traits_array_test.test | RUN | 0.211273 | 0.656136 | 0.617769 | 0.001826 | 0.001567 | 0.002071 |
| quat_traits_std_array_test.test | RUN | 0.206171 | 0.513524 | 0.640010 | 0.001724 | 0.001896 | 0.002330 |
| access_m_test.test | RUN | 0.335281 | 1.210793 | 1.475755 | 0.001942 | 0.002141 | 0.001828 |
| access_m_fail1.test | COMPILE_FAIL | 0.033574 | 0.052770 | 0.114858 | — | — | — |
| access_m_fail2.test | COMPILE_FAIL | 0.032826 | 0.052463 | 0.107982 | — | — | — |
| access_q_test.test | RUN | 0.277661 | 0.629397 | 0.816544 | 0.001801 | 0.002180 | 0.002130 |
| access_q_fail.test | COMPILE_FAIL | 0.025134 | 0.042262 | 0.082980 | — | — | — |
| access_v_test.test | RUN | 0.283038 | 0.620835 | 0.842677 | 0.001914 | 0.002143 | 0.001686 |
| access_v_fail1.test | COMPILE_FAIL | 0.022995 | 0.037107 | 0.074697 | — | — | — |
| access_v_fail2.test | COMPILE_FAIL | 0.023720 | 0.040064 | 0.075769 | — | — | — |
| assign_test.test | RUN | 0.427340 | 0.992837 | 1.550530 | 0.002016 | 0.002241 | 0.002069 |
| to_string_test.test | RUN | 0.484020 | 1.596628 | 8.541065 | 0.001820 | 0.002062 | 0.002122 |
| cmp_vv_test.test | RUN | 0.345904 | 0.825739 | 1.088678 | 0.001764 | 0.002052 | 0.001822 |
| cross_test.test | RUN | 0.347918 | 0.732915 | 1.097880 | 0.001710 | 0.001996 | 0.001748 |
| div_eq_vs_test.test | RUN | 0.316385 | 0.694385 | 0.997396 | 0.001691 | 0.002154 | 0.002048 |
| div_vs_test.test | RUN | 0.330046 | 0.839981 | 1.122003 | 0.001731 | 0.002134 | 0.001713 |
| dot_vv_test.test | RUN | 0.318786 | 0.745485 | 1.060642 | 0.001878 | 0.001923 | 0.001948 |
| eq_vv_test.test | RUN | 0.348096 | 0.840012 | 1.064537 | 0.001744 | 0.002066 | 0.002034 |
| mag_v_test.test | RUN | 0.319533 | 0.696837 | 1.007862 | 0.001855 | 0.002282 | 0.001546 |
| mag_sqr_v_test.test | RUN | 0.312647 | 0.691863 | 0.998600 | 0.001622 | 0.002062 | 0.001964 |
| minus_v_test.test | RUN | 0.320762 | 0.796442 | 1.015878 | 0.001898 | 0.002135 | 0.001970 |
| minus_eq_vv_test.test | RUN | 0.322837 | 0.775506 | 1.067752 | 0.001786 | 0.002236 | 0.002005 |
| minus_vv_test.test | RUN | 0.336828 | 0.852788 | 1.122473 | 0.001930 | 0.002248 | 0.002074 |
| mul_eq_vs_test.test | RUN | 0.326075 | 0.701281 | 0.999329 | 0.002034 | 0.002098 | 0.002062 |
| mul_vs_test.test | RUN | 0.331109 | 0.837179 | 1.077686 | 0.001929 | 0.002208 | 0.001975 |
| mul_sv_test.test | RUN | 0.332836 | 0.843704 | 1.094258 | 0.001721 | 0.002184 | 0.002164 |
| mul_vm_test.test | RUN | 0.451687 | 1.500057 | 1.597831 | 0.001613 | 0.002133 | 0.001735 |
| normalize_v_test.test | RUN | 0.339270 | 1.059205 | 1.136450 | 0.001852 | 0.001958 | 0.001896 |
| plus_eq_vv_test.test | RUN | 0.318647 | 0.776770 | 1.071945 | 0.001694 | 0.001950 | 0.001766 |
| plus_vv_test.test | RUN | 0.331385 | 0.853308 | 1.101698 | 0.001771 | 0.002209 | 0.001822 |
| scalar_cast_v_test.test | RUN | 0.311304 | 0.628197 | 0.924191 | 0.001584 | 0.002054 | 0.001883 |
| vec_index_test.test | RUN | 0.266362 | 0.646794 | 0.880658 | 0.001966 | 0.001856 | 0.001767 |
| vec_register_test.test | RUN | 0.180103 | 0.589448 | 0.636620 | 0.002016 | 0.002024 | 0.001697 |
| cmp_mm_test.test | RUN | 0.514247 | 1.839296 | 2.139075 | 0.002079 | 0.002119 | 0.002087 |
| determinant_test.test | RUN | 0.367312 | 0.949480 | 1.215530 | 0.001982 | 0.002006 | 0.002080 |
| div_eq_ms_test.test | RUN | 0.384022 | 0.897096 | 1.403023 | 0.002149 | 0.002188 | 0.002054 |
| div_ms_test.test | RUN | 0.436577 | 1.375845 | 1.632912 | 0.001956 | 0.001949 | 0.002140 |
| eq_mm_test.test | RUN | 0.504922 | 1.709235 | 2.040487 | 0.002182 | 0.002158 | 0.001726 |
| minus_m_test.test | RUN | 0.435287 | 1.363539 | 1.546787 | 0.002072 | 0.002061 | 0.002092 |
| minus_eq_mm_test.test | RUN | 0.417750 | 1.286307 | 1.473093 | 0.002132 | 0.002064 | 0.002080 |
| minus_mm_test.test | RUN | 0.466171 | 1.612833 | 1.697930 | 0.002086 | 0.002218 | 0.002118 |
| mul_eq_mm_test.test | RUN | 0.390416 | 1.201601 | 1.324826 | 0.002190 | 0.002058 | 0.002091 |
| mul_eq_ms_test.test | RUN | 0.377478 | 0.893765 | 1.310597 | 0.002125 | 0.001700 | 0.002044 |
| mul_mm_test.test | RUN | 0.534688 | 2.642560 | 2.192135 | 0.001776 | 0.002024 | 0.001842 |
| mul_ms_test.test | RUN | 0.447586 | 1.423839 | 1.762118 | 0.002010 | 0.002064 | 0.001740 |
| mul_sm_test.test | RUN | 0.451298 | 1.390391 | 1.716486 | 0.002040 | 0.001701 | 0.002073 |
| mul_mv_test.test | RUN | 0.467513 | 1.502526 | 1.672085 | 0.002130 | 0.002082 | 0.002073 |
| inverse_m_test.test | RUN | 0.619942 | 2.705182 | 2.306976 | 0.002222 | 0.002064 | 0.002181 |
| plus_eq_mm_test.test | RUN | 0.420185 | 1.288123 | 1.500598 | 0.001957 | 0.002124 | 0.002125 |
| plus_mm_test.test | RUN | 0.475174 | 1.623455 | 1.750813 | 0.001956 | 0.002175 | 0.001998 |
| scalar_cast_m_test.test | RUN | 0.354778 | 0.735075 | 1.109950 | 0.001902 | 0.002132 | 0.002008 |
| mat_index_test.test | RUN | 0.285927 | 0.700651 | 0.934156 | 0.002122 | 0.002220 | 0.002054 |
| cmp_qq_test.test | RUN | 0.310498 | 0.647788 | 0.948376 | 0.002140 | 0.002100 | 0.001866 |
| conjugate_test.test | RUN | 0.311749 | 0.670266 | 0.963829 | 0.002008 | 0.002299 | 0.002000 |
| normalize_q_test.test | RUN | 0.321925 | 0.743408 | 0.998156 | 0.002082 | 0.001722 | 0.002082 |
| div_eq_qs_test.test | RUN | 0.317047 | 0.641031 | 0.984079 | 0.002096 | 0.002158 | 0.002104 |
| div_qs_test.test | RUN | 0.314218 | 0.691434 | 0.887935 | 0.002060 | 0.002198 | 0.002046 |
| dot_qq_test.test | RUN | 0.316311 | 0.651931 | 0.980376 | 0.001976 | 0.002184 | 0.001780 |
| eq_qq_test.test | RUN | 0.314725 | 0.696212 | 1.017094 | 0.002002 | 0.001978 | 0.002089 |
| inverse_q_test.test | RUN | 0.381465 | 0.903849 | 1.151391 | 0.002367 | 0.001574 | 0.002024 |
| mag_q_test.test | RUN | 0.308380 | 0.657766 | 0.940303 | 0.002095 | 0.002132 | 0.002042 |
| mag_sqr_q_test.test | RUN | 0.318298 | 0.661536 | 0.954985 | 0.001997 | 0.002228 | 0.002102 |
| minus_q_test.test | RUN | 0.310454 | 0.672085 | 0.909614 | 0.001788 | 0.002084 | 0.002052 |
| minus_eq_qq_test.test | RUN | 0.313123 | 0.656757 | 0.921826 | 0.001996 | 0.001988 | 0.002118 |
| minus_qq_test.test | RUN | 0.309390 | 0.693619 | 0.956441 | 0.002034 | 0.001836 | 0.002091 |
| mul_eq_qs_test.test | RUN | 0.310653 | 0.626675 | 0.908405 | 0.001897 | 0.002213 | 0.002007 |
| mul_qs_test.test | RUN | 0.317028 | 0.662488 | 0.991270 | 0.001836 | 0.002236 | 0.002040 |
| mul_qv_test.test | RUN | 0.389250 | 0.937684 | 1.229633 | 0.002173 | 0.002190 | 0.002100 |
| mul_qq_test.test | RUN | 0.377833 | 0.948674 | 1.202032 | 0.001962 | 0.001980 | 0.002022 |
| mul_eq_qq_test.test | RUN | 0.388550 | 0.922020 | 1.196232 | 0.001884 | 0.002068 | 0.002106 |
| plus_eq_qq_test.test | RUN | 0.317759 | 0.665760 | 0.946177 | 0.001654 | 0.001977 | 0.002170 |
| plus_qq_test.test | RUN | 0.310068 | 0.671486 | 0.967762 | 0.001997 | 0.002042 | 0.002102 |
| scalar_cast_q_test.test | RUN | 0.312069 | 0.623388 | 0.948096 | 0.001983 | 0.002020 | 0.002136 |
| slerp_test.test | RUN | 0.335077 | 1.290083 | 1.115678 | 0.023319 | 0.018701 | 0.020023 |
| convert_to_test.test | RUN | 0.471477 | 1.191380 | 1.760604 | 0.001768 | 0.002191 | 0.002092 |
| rot_mat_test.test | RUN | 0.700341 | 5.318737 | 5.139398 | 0.056349 | 0.047377 | 0.045791 |
| rot_quat_test.test | RUN | 0.387216 | 1.111848 | 1.211628 | 0.002118 | 0.002200 | 0.002102 |
| rotx_mat_test.test | RUN | 0.424672 | 1.440000 | 1.585045 | 0.002059 | 0.002169 | 0.002068 |
| rotx_quat_test.test | RUN | 0.381200 | 0.928299 | 1.130928 | 0.001882 | 0.002072 | 0.002080 |
| roty_mat_test.test | RUN | 0.425466 | 1.431637 | 1.559887 | 0.001830 | 0.002189 | 0.002076 |
| roty_quat_test.test | RUN | 0.368400 | 0.930958 | 1.090969 | 0.001844 | 0.002076 | 0.002231 |
| rotz_mat_test.test | RUN | 0.448009 | 1.607442 | 1.559182 | 0.001870 | 0.001514 | 0.002022 |
| rotz_quat_test.test | RUN | 0.365833 | 0.951986 | 1.186504 | 0.001842 | 0.002150 | 0.001951 |
| zero_vec_test.test | RUN | 0.323412 | 0.799879 | 1.050474 | 0.002116 | 0.002008 | 0.001802 |
| zero_mat_test.test | RUN | 0.404435 | 1.309301 | 1.406595 | 0.001924 | 0.001899 | 0.001951 |
| zero_quat_test.test | RUN | 0.301780 | 0.663849 | 0.901983 | 0.002074 | 0.002008 | 0.002083 |
| identity_mat_test.test | RUN | 0.374631 | 0.992869 | 1.210134 | 0.001566 | 0.002040 | 0.001958 |
| identity_quat_test.test | RUN | 0.314141 | 0.641194 | 0.922977 | 0.002172 | 0.002196 | 0.001373 |
| col_test.test | RUN | 0.602887 | 1.986410 | 2.685639 | 0.001886 | 0.002117 | 0.002130 |
| col_mat_test.test | RUN | 0.383398 | 0.939334 | 1.300627 | 0.001920 | 0.002132 | 0.002032 |
| neg_col_test.test | RUN | 0.445153 | 1.307760 | 1.631228 | 0.001928 | 0.002228 | 0.001683 |
| neg_row_test.test | RUN | 0.460964 | 1.342606 | 1.629643 | 0.002055 | 0.002177 | 0.001827 |
| del_col_test.test | RUN | 0.467481 | 1.439280 | 1.648385 | 0.001956 | 0.002175 | 0.002128 |
| del_row_test.test | RUN | 0.475289 | 1.416048 | 1.702500 | 0.001876 | 0.002272 | 0.002056 |
| del_row_col_test.test | RUN | 0.646035 | 2.655104 | 3.109094 | 0.002146 | 0.002205 | 0.002102 |
| swap_cols_test.test | RUN | 0.871735 | 3.632057 | 3.878178 | 0.001986 | 0.002178 | 0.001929 |
| swap_rows_test.test | RUN | 0.929735 | 3.768951 | 3.854045 | 0.002246 | 0.002100 | 0.002033 |
| diag_test.test | RUN | 0.398036 | 0.952597 | 1.346375 | 0.001950 | 0.002143 | 0.002139 |
| diag_mat_test.test | RUN | 0.412603 | 0.943704 | 1.215175 | 0.002103 | 0.002120 | 0.001700 |
| row_test.test | RUN | 0.602849 | 2.061480 | 2.528743 | 0.002077 | 0.002257 | 0.002018 |
| row_mat_test.test | RUN | 0.384912 | 0.956425 | 1.288211 | 0.002086 | 0.002119 | 0.002248 |
| transpose_test.test | RUN | 0.461749 | 1.348504 | 1.693165 | 0.001972 | 0.002137 | 0.002012 |
| translation_test.test | RUN | 0.367698 | 0.862409 | 1.210068 | 0.002109 | 0.001994 | 0.001746 |
| translation_mat_test.test | RUN | 0.400623 | 0.897246 | 1.301063 | 0.002008 | 0.002074 | 0.002073 |
| swizzle_const_fail.test | COMPILE_FAIL | 0.138000 | 0.274476 | 0.363044 | — | — | — |
| swizzle2_test2.test | RUN | 0.169264 | 0.386582 | 0.531996 | 0.001932 | 0.001975 | 0.002110 |
| swizzle2_test3.test | RUN | 0.169323 | 0.374889 | 0.526057 | 0.001835 | 0.001946 | 0.001755 |
| swizzle2_test4.test | RUN | 0.169379 | 0.376855 | 0.533304 | 0.001888 | 0.002124 | 0.001756 |
| swizzle2_test.test | RUN | 0.524681 | 1.061807 | 1.716058 | 0.001952 | 0.002069 | 0.002003 |
| swizzle3_test2.test | RUN | 0.189286 | 0.413066 | 0.600628 | 0.001824 | 0.002170 | 0.001872 |
| swizzle3_test3.test | RUN | 0.183158 | 0.397369 | 0.595293 | 0.001933 | 0.001723 | 0.001617 |
| swizzle3_test4.test | RUN | 0.186415 | 0.399285 | 0.614498 | 0.001825 | 0.002083 | 0.002000 |
| swizzle3_test.test | RUN | 0.516076 | 1.088775 | 1.778146 | 0.001913 | 0.001503 | 0.002139 |
| swizzle4_test2.test | RUN | 0.307129 | 0.605260 | 1.049103 | 0.001813 | 0.002161 | 0.002210 |
| swizzle4_test3.test | RUN | 0.315788 | 0.595417 | 0.997031 | 0.001800 | 0.001926 | 0.002082 |
| swizzle4_test4.test | RUN | 0.315000 | 0.575474 | 0.950298 | 0.001813 | 0.002069 | 0.002034 |
| swizzle4_test.test | RUN | 0.543215 | 1.180499 | 1.789268 | 0.001883 | 0.002022 | 0.002030 |
| deduce_scalar_test.test | COMPILE | 0.027508 | 0.058591 | 0.090942 | — | — | — |
| deduce_scalar_mq_test.test | RUN | 0.202304 | 0.445470 | 0.594091 | 0.001994 | 0.001938 | 0.002044 |
| deduce_scalar_mv_test.test | RUN | 0.254218 | 0.530320 | 0.791909 | 0.001844 | 0.001834 | 0.002082 |
| deduce_scalar_fail.test | COMPILE_FAIL | 0.022034 | 0.035933 | 0.065091 | — | — | — |
| deduce_mat_test.test | COMPILE | 0.024451 | 0.053468 | 0.072657 | — | — | — |
| deduce_quat_test.test | COMPILE | 0.024232 | 0.052293 | 0.070552 | — | — | — |
| deduce_vec_test.test | COMPILE | 0.023798 | 0.049268 | 0.073008 | — | — | — |
| interop_test.test | RUN | 0.253410 | 0.648108 | 1.123013 | 0.000755 | 0.000936 | 0.001480 |
| transform_test.test | RUN | 0.488054 | 0.945653 | 1.581380 | 0.001588 | 0.001548 | 0.001473 |
| projection_test.test | RUN | 0.324420 | 0.628816 | 0.780856 | 0.001547 | 0.001636 | 0.001482 |
| scalar_traits_test.test | COMPILE | 0.025634 | 0.052411 | 0.083500 | — | — | — |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.959× | 0.969×, 0.950× | 0.994× |
| clang | 1.048× | 1.030×, 1.067× | 1.007× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1359 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/43701438216).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| access_m_test.test | 10 | 0.001288s | 0.001271s | 0.001297s | byte equality observed |
| access_q_test.test | 10 | 0.001286s | 0.001264s | 0.001285s | byte equality observed |
| access_v_test.test | 10 | 0.001272s | 0.001321s | 0.001316s | byte equality observed |
| assign_test.test | 10 | 0.001306s | 0.001264s | 0.001281s | byte equality observed |
| cmp_mm_test.test | 10 | 0.001283s | 0.001307s | 0.001323s | byte equality observed |
| cmp_qq_test.test | 10 | 0.001255s | 0.001284s | 0.001296s | byte equality observed |
| cmp_vv_test.test | 10 | 0.001294s | 0.001298s | 0.001301s | byte equality observed |
| col_mat_test.test | 10 | 0.001298s | 0.001290s | 0.001236s | byte equality observed |
| col_test.test | 10 | 0.001294s | 0.001273s | 0.001260s | byte equality observed |
| conjugate_test.test | 10 | 0.001292s | 0.001294s | 0.001331s | byte equality observed |
| convert_to_test.test | 10 | 0.001293s | 0.001304s | 0.001306s | byte equality observed |
| cross_test.test | 10 | 0.001325s | 0.001278s | 0.001257s | byte equality observed |
| deduce_scalar_mq_test.test | 10 | 0.001305s | 0.001298s | 0.001308s | byte equality observed |
| deduce_scalar_mv_test.test | 10 | 0.001302s | 0.001306s | 0.001291s | byte equality observed |
| del_col_test.test | 10 | 0.001293s | 0.001307s | 0.001289s | byte equality observed |
| del_row_col_test.test | 10 | 0.001326s | 0.001278s | 0.001276s | byte equality observed |
| del_row_test.test | 10 | 0.001270s | 0.001235s | 0.001316s | byte equality observed |
| determinant_test.test | 10 | 0.001294s | 0.001283s | 0.001325s | byte equality observed |
| diag_mat_test.test | 10 | 0.001287s | 0.001278s | 0.001265s | byte equality observed |
| diag_test.test | 10 | 0.001287s | 0.001252s | 0.001346s | byte equality observed |
| div_eq_ms_test.test | 10 | 0.001253s | 0.001281s | 0.001257s | byte equality observed |
| div_eq_qs_test.test | 10 | 0.001283s | 0.001269s | 0.001257s | byte equality observed |
| div_eq_vs_test.test | 10 | 0.001269s | 0.001316s | 0.001316s | byte equality observed |
| div_ms_test.test | 10 | 0.001290s | 0.001312s | 0.001315s | byte equality observed |
| div_qs_test.test | 10 | 0.001273s | 0.001306s | 0.001284s | byte equality observed |
| div_vs_test.test | 10 | 0.001293s | 0.001262s | 0.001289s | byte equality observed |
| dot_qq_test.test | 10 | 0.001309s | 0.001258s | 0.001273s | byte equality observed |
| dot_vv_test.test | 10 | 0.001298s | 0.001258s | 0.001275s | byte equality observed |
| eq_mm_test.test | 10 | 0.001307s | 0.001307s | 0.001288s | byte equality observed |
| eq_qq_test.test | 10 | 0.001276s | 0.001298s | 0.001284s | byte equality observed |
| eq_vv_test.test | 10 | 0.001274s | 0.001324s | 0.001275s | byte equality observed |
| identity_mat_test.test | 10 | 0.001276s | 0.001301s | 0.001300s | byte equality observed |
| identity_quat_test.test | 10 | 0.001297s | 0.001300s | 0.001258s | byte equality observed |
| interop_test.test | 10 | 0.000594s | 0.000591s | 0.001281s | byte equality observed |
| inverse_m_test.test | 10 | 0.001346s | 0.001348s | 0.001358s | byte equality observed |
| inverse_q_test.test | 10 | 0.001297s | 0.001264s | 0.001319s | byte equality observed |
| mag_q_test.test | 10 | 0.001279s | 0.001268s | 0.001285s | byte equality observed |
| mag_sqr_q_test.test | 10 | 0.001284s | 0.001275s | 0.001273s | byte equality observed |
| mag_sqr_v_test.test | 10 | 0.001282s | 0.001246s | 0.001262s | byte equality observed |
| mag_v_test.test | 10 | 0.001294s | 0.001246s | 0.001247s | byte equality observed |
| mat_index_test.test | 10 | 0.001303s | 0.001261s | 0.001249s | byte equality observed |
| mat_traits_array_test.test | 10 | 0.001277s | 0.001260s | 0.001267s | byte equality observed |
| mat_traits_std_array_test.test | 10 | 0.001268s | 0.001280s | 0.001272s | byte equality observed |
| math_test.test | 9 | 0.001959s | 0.001868s | 0.001714s | byte equality observed |
| minus_eq_mm_test.test | 10 | 0.001270s | 0.001311s | 0.001268s | byte equality observed |
| minus_eq_qq_test.test | 10 | 0.001304s | 0.001292s | 0.001299s | byte equality observed |
| minus_eq_vv_test.test | 10 | 0.001294s | 0.001264s | 0.001276s | byte equality observed |
| minus_m_test.test | 10 | 0.001286s | 0.001258s | 0.001279s | byte equality observed |
| minus_mm_test.test | 10 | 0.001320s | 0.001293s | 0.001296s | byte equality observed |
| minus_q_test.test | 10 | 0.001282s | 0.001296s | 0.001305s | byte equality observed |
| minus_qq_test.test | 10 | 0.001274s | 0.001303s | 0.001305s | byte equality observed |
| minus_v_test.test | 10 | 0.001299s | 0.001283s | 0.001303s | byte equality observed |
| minus_vv_test.test | 10 | 0.001264s | 0.001248s | 0.001282s | byte equality observed |
| mul_eq_mm_test.test | 10 | 0.001306s | 0.001277s | 0.001300s | byte equality observed |
| mul_eq_ms_test.test | 10 | 0.001287s | 0.001289s | 0.001267s | byte equality observed |
| mul_eq_qq_test.test | 10 | 0.001292s | 0.001307s | 0.001323s | byte equality observed |
| mul_eq_qs_test.test | 10 | 0.001304s | 0.001251s | 0.001284s | byte equality observed |
| mul_eq_vs_test.test | 10 | 0.001291s | 0.001306s | 0.001292s | byte equality observed |
| mul_mm_test.test | 10 | 0.001268s | 0.001279s | 0.001301s | byte equality observed |
| mul_ms_test.test | 10 | 0.001283s | 0.001319s | 0.001298s | byte equality observed |
| mul_mv_test.test | 10 | 0.001308s | 0.001283s | 0.001282s | byte equality observed |
| mul_qq_test.test | 10 | 0.001306s | 0.001283s | 0.001276s | byte equality observed |
| mul_qs_test.test | 10 | 0.001280s | 0.001276s | 0.001273s | byte equality observed |
| mul_qv_test.test | 10 | 0.001354s | 0.001304s | 0.001301s | byte equality observed |
| mul_sm_test.test | 10 | 0.001299s | 0.001255s | 0.001290s | byte equality observed |
| mul_sv_test.test | 10 | 0.001270s | 0.001285s | 0.001315s | byte equality observed |
| mul_vm_test.test | 10 | 0.001299s | 0.001289s | 0.001347s | byte equality observed |
| mul_vs_test.test | 9 | 0.001258s | 0.001297s | 0.001293s | byte equality observed |
| neg_col_test.test | 10 | 0.001278s | 0.001286s | 0.001287s | byte equality observed |
| neg_row_test.test | 10 | 0.001273s | 0.001297s | 0.001333s | byte equality observed |
| normalize_q_test.test | 10 | 0.001312s | 0.001327s | 0.001416s | byte equality observed |
| normalize_v_test.test | 10 | 0.001293s | 0.001275s | 0.001418s | byte equality observed |
| plus_eq_mm_test.test | 10 | 0.001303s | 0.001278s | 0.001435s | byte equality observed |
| plus_eq_qq_test.test | 9 | 0.001278s | 0.001249s | 0.001471s | byte equality observed |
| plus_eq_vv_test.test | 10 | 0.001253s | 0.001262s | 0.001458s | byte equality observed |
| plus_mm_test.test | 10 | 0.001299s | 0.001269s | 0.001518s | byte equality observed |
| plus_qq_test.test | 10 | 0.001278s | 0.001279s | 0.001460s | byte equality observed |
| plus_vv_test.test | 10 | 0.001273s | 0.001310s | 0.001495s | byte equality observed |
| projection_test.test | 10 | 0.001300s | 0.001243s | 0.001477s | byte equality observed |
| quat_traits_array_test.test | 10 | 0.001284s | 0.001285s | 0.001467s | byte equality observed |
| quat_traits_std_array_test.test | 10 | 0.001233s | 0.001206s | 0.001473s | byte equality observed |
| rot_mat_test.test | 1 | 0.036555s | 0.032678s | 0.043686s | byte equality observed |
| rot_quat_test.test | 10 | 0.001234s | 0.001223s | 0.001448s | byte equality observed |
| rotx_mat_test.test | 10 | 0.001267s | 0.001280s | 0.001477s | byte equality observed |
| rotx_quat_test.test | 10 | 0.001303s | 0.001318s | 0.001449s | byte equality observed |
| roty_mat_test.test | 10 | 0.001332s | 0.001287s | 0.001460s | byte equality observed |
| roty_quat_test.test | 10 | 0.001338s | 0.001280s | 0.001475s | byte equality observed |
| rotz_mat_test.test | 10 | 0.001362s | 0.001326s | 0.001515s | byte equality observed |
| rotz_quat_test.test | 10 | 0.001273s | 0.001347s | 0.001497s | byte equality observed |
| row_mat_test.test | 10 | 0.001283s | 0.001338s | 0.001453s | byte equality observed |
| row_test.test | 10 | 0.001269s | 0.001368s | 0.001496s | byte equality observed |
| scalar_cast_m_test.test | 10 | 0.001296s | 0.001440s | 0.001460s | byte equality observed |
| scalar_cast_q_test.test | 10 | 0.001328s | 0.001413s | 0.001454s | byte equality observed |
| scalar_cast_v_test.test | 10 | 0.001255s | 0.001464s | 0.001446s | byte equality observed |
| slerp_test.test | 2 | 0.019704s | 0.017449s | 0.018696s | byte equality observed |
| swap_cols_test.test | 10 | 0.001358s | 0.001453s | 0.001438s | byte equality observed |
| swap_rows_test.test | 10 | 0.001445s | 0.001486s | 0.001454s | byte equality observed |
| swizzle2_test.test | 10 | 0.001456s | 0.001497s | 0.001440s | byte equality observed |
| swizzle2_test2.test | 10 | 0.001470s | 0.001452s | 0.001490s | byte equality observed |
| swizzle2_test3.test | 10 | 0.001483s | 0.001504s | 0.001458s | byte equality observed |
| swizzle2_test4.test | 10 | 0.001509s | 0.001432s | 0.001476s | byte equality observed |
| swizzle3_test.test | 10 | 0.001501s | 0.001472s | 0.001500s | byte equality observed |
| swizzle3_test2.test | 10 | 0.001484s | 0.001476s | 0.001466s | byte equality observed |
| swizzle3_test3.test | 10 | 0.001481s | 0.001486s | 0.001490s | byte equality observed |
| swizzle3_test4.test | 10 | 0.001495s | 0.001488s | 0.001486s | byte equality observed |
| swizzle4_test.test | 10 | 0.001475s | 0.001480s | 0.001473s | byte equality observed |
| swizzle4_test2.test | 10 | 0.001470s | 0.001494s | 0.001492s | byte equality observed |
| swizzle4_test3.test | 10 | 0.001473s | 0.001486s | 0.001492s | byte equality observed |
| swizzle4_test4.test | 10 | 0.001492s | 0.001492s | 0.001496s | byte equality observed |
| to_string_test.test | 10 | 0.001537s | 0.001520s | 0.001521s | byte equality observed |
| transform_test.test | 10 | 0.001489s | 0.001492s | 0.001478s | byte equality observed |
| translation_mat_test.test | 10 | 0.001474s | 0.001511s | 0.001488s | byte equality observed |
| translation_test.test | 10 | 0.001504s | 0.001496s | 0.001486s | byte equality observed |
| transpose_test.test | 10 | 0.001493s | 0.001507s | 0.001493s | byte equality observed |
| vec_index_test.test | 10 | 0.001466s | 0.001458s | 0.001503s | byte equality observed |
| vec_register_test.test | 10 | 0.001485s | 0.001473s | 0.001484s | byte equality observed |
| vec_traits_array_test.test | 10 | 0.001460s | 0.001484s | 0.001482s | byte equality observed |
| vec_traits_gnuc_test.test | 10 | 0.001476s | 0.001500s | 0.001456s | byte equality observed |
| vec_traits_std_array_test.test | 10 | 0.001479s | 0.001479s | 0.001501s | byte equality observed |
| zero_mat_test.test | 10 | 0.001462s | 0.001480s | 0.001490s | byte equality observed |
| zero_quat_test.test | 10 | 0.001496s | 0.001504s | 0.001504s | byte equality observed |
| zero_vec_test.test | 10 | 0.001462s | 0.001485s | 0.001514s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/43701438216).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
