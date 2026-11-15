# libs/qvm/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| math_test.test | RUN | 0.331837 | 0.872104 | 1.173940 | 0.002534 | 0.002534 | 0.002639 |
| mat_traits_array_test.test | RUN | 0.259762 | 0.896209 | 0.957023 | 0.001988 | 0.001764 | 0.001666 |
| mat_traits_std_array_test.test | RUN | 0.265422 | 0.686881 | 0.949696 | 0.001703 | 0.001704 | 0.001724 |
| vec_traits_array_test.test | RUN | 0.223549 | 0.672172 | 0.833277 | 0.001795 | 0.001776 | 0.001606 |
| vec_traits_gnuc_test.test | RUN | 0.416890 | 0.865644 | 1.634207 | 0.001802 | 0.001816 | 0.002030 |
| vec_traits_std_array_test.test | RUN | 0.225799 | 0.527972 | 0.798612 | 0.001966 | 0.001986 | 0.001723 |
| quat_traits_array_test.test | RUN | 0.222463 | 0.723528 | 0.798295 | 0.001669 | 0.001762 | 0.001491 |
| quat_traits_std_array_test.test | RUN | 0.220892 | 0.547002 | 0.839388 | 0.001736 | 0.001749 | 0.001910 |
| access_m_test.test | RUN | 0.362037 | 1.355842 | 1.788967 | 0.001837 | 0.001950 | 0.001629 |
| access_m_fail1.test | COMPILE_FAIL | 0.037424 | 0.059890 | 0.120318 | — | — | — |
| access_m_fail2.test | COMPILE_FAIL | 0.034983 | 0.056534 | 0.128246 | — | — | — |
| access_q_test.test | RUN | 0.293319 | 0.676950 | 0.993878 | 0.001839 | 0.002100 | 0.002108 |
| access_q_fail.test | COMPILE_FAIL | 0.027302 | 0.048158 | 0.095506 | — | — | — |
| access_v_test.test | RUN | 0.292316 | 0.672637 | 1.041603 | 0.001662 | 0.001948 | 0.001730 |
| access_v_fail1.test | COMPILE_FAIL | 0.025296 | 0.039059 | 0.085460 | — | — | — |
| access_v_fail2.test | COMPILE_FAIL | 0.023351 | 0.043431 | 0.084169 | — | — | — |
| assign_test.test | RUN | 0.453468 | 1.107253 | 1.827805 | 0.001850 | 0.002051 | 0.002054 |
| to_string_test.test | RUN | 0.514394 | 1.804046 | 10.104805 | 0.001774 | 0.002032 | 0.002213 |
| cmp_vv_test.test | RUN | 0.368851 | 0.853071 | 1.313505 | 0.001959 | 0.002101 | 0.001838 |
| cross_test.test | RUN | 0.359479 | 0.840895 | 1.314269 | 0.001802 | 0.002221 | 0.001660 |
| div_eq_vs_test.test | RUN | 0.335658 | 0.736248 | 1.219432 | 0.001974 | 0.002056 | 0.002117 |
| div_vs_test.test | RUN | 0.351704 | 0.878203 | 1.333605 | 0.001872 | 0.002155 | 0.001817 |
| dot_vv_test.test | RUN | 0.334099 | 0.820725 | 1.231216 | 0.001878 | 0.002020 | 0.001934 |
| eq_vv_test.test | RUN | 0.371705 | 0.926478 | 1.346778 | 0.001954 | 0.002086 | 0.002002 |
| mag_v_test.test | RUN | 0.333795 | 0.764284 | 1.201443 | 0.002090 | 0.001915 | 0.001796 |
| mag_sqr_v_test.test | RUN | 0.328142 | 0.769004 | 1.131213 | 0.002066 | 0.001567 | 0.001868 |
| minus_v_test.test | RUN | 0.335972 | 0.875952 | 1.292173 | 0.001691 | 0.002128 | 0.001898 |
| minus_eq_vv_test.test | RUN | 0.342045 | 0.840354 | 1.278464 | 0.001992 | 0.002152 | 0.002050 |
| minus_vv_test.test | RUN | 0.354146 | 0.918971 | 1.232490 | 0.002088 | 0.001858 | 0.001866 |
| mul_eq_vs_test.test | RUN | 0.339907 | 0.768615 | 1.245548 | 0.001963 | 0.002274 | 0.001926 |
| mul_vs_test.test | RUN | 0.352925 | 0.900702 | 1.344251 | 0.001524 | 0.002174 | 0.001672 |
| mul_sv_test.test | RUN | 0.366742 | 0.926231 | 1.279421 | 0.001536 | 0.002126 | 0.001768 |
| mul_vm_test.test | RUN | 0.484217 | 1.659304 | 2.047164 | 0.001933 | 0.002140 | 0.002059 |
| normalize_v_test.test | RUN | 0.356205 | 1.120160 | 1.272094 | 0.001817 | 0.001961 | 0.001958 |
| plus_eq_vv_test.test | RUN | 0.337280 | 0.865140 | 1.308096 | 0.001840 | 0.001817 | 0.001890 |
| plus_vv_test.test | RUN | 0.356983 | 0.930804 | 1.280524 | 0.001805 | 0.002182 | 0.002110 |
| scalar_cast_v_test.test | RUN | 0.333355 | 0.703644 | 1.109004 | 0.001726 | 0.001874 | 0.001645 |
| vec_index_test.test | RUN | 0.283869 | 0.720101 | 1.015927 | 0.001798 | 0.002176 | 0.002036 |
| vec_register_test.test | RUN | 0.190829 | 0.620893 | 0.744501 | 0.001812 | 0.001736 | 0.002102 |
| cmp_mm_test.test | RUN | 0.553440 | 1.992243 | 2.519284 | 0.002096 | 0.002045 | 0.002175 |
| determinant_test.test | RUN | 0.391620 | 1.027786 | 1.413749 | 0.001996 | 0.002136 | 0.002092 |
| div_eq_ms_test.test | RUN | 0.393147 | 0.974812 | 1.664014 | 0.001740 | 0.002002 | 0.001960 |
| div_ms_test.test | RUN | 0.476882 | 1.498564 | 1.982994 | 0.001923 | 0.001961 | 0.002169 |
| eq_mm_test.test | RUN | 0.543564 | 1.856283 | 2.437066 | 0.001954 | 0.001785 | 0.002138 |
| minus_m_test.test | RUN | 0.452338 | 1.496566 | 1.872283 | 0.001878 | 0.002062 | 0.002084 |
| minus_eq_mm_test.test | RUN | 0.447344 | 1.374154 | 1.759104 | 0.001500 | 0.002030 | 0.002103 |
| minus_mm_test.test | RUN | 0.500062 | 1.771724 | 2.076915 | 0.001963 | 0.002080 | 0.002182 |
| mul_eq_mm_test.test | RUN | 0.411240 | 1.297207 | 1.550981 | 0.001799 | 0.001948 | 0.002072 |
| mul_eq_ms_test.test | RUN | 0.403500 | 0.966508 | 1.642952 | 0.001762 | 0.002108 | 0.001995 |
| mul_mm_test.test | RUN | 0.554672 | 2.894995 | 2.571646 | 0.001981 | 0.001933 | 0.002150 |
| mul_ms_test.test | RUN | 0.476841 | 1.523485 | 2.036757 | 0.001958 | 0.002097 | 0.002046 |
| mul_sm_test.test | RUN | 0.479692 | 1.500745 | 2.061304 | 0.002056 | 0.002044 | 0.002160 |
| mul_mv_test.test | RUN | 0.497224 | 1.633521 | 1.995906 | 0.002000 | 0.002210 | 0.002108 |
| inverse_m_test.test | RUN | 0.643430 | 2.908328 | 2.761394 | 0.001928 | 0.001960 | 0.002155 |
| plus_eq_mm_test.test | RUN | 0.450896 | 1.373448 | 1.745589 | 0.001890 | 0.001915 | 0.002114 |
| plus_mm_test.test | RUN | 0.499363 | 1.743581 | 2.062251 | 0.001930 | 0.002078 | 0.001930 |
| scalar_cast_m_test.test | RUN | 0.375345 | 0.823993 | 1.285595 | 0.001835 | 0.001936 | 0.002032 |
| mat_index_test.test | RUN | 0.298890 | 0.758985 | 1.067850 | 0.001940 | 0.001771 | 0.002044 |
| cmp_qq_test.test | RUN | 0.329324 | 0.731219 | 1.134262 | 0.001939 | 0.001764 | 0.002053 |
| conjugate_test.test | RUN | 0.331687 | 0.732011 | 1.197336 | 0.002082 | 0.002139 | 0.001815 |
| normalize_q_test.test | RUN | 0.342201 | 0.819533 | 1.123490 | 0.001876 | 0.001660 | 0.001840 |
| div_eq_qs_test.test | RUN | 0.326191 | 0.695827 | 1.156906 | 0.002016 | 0.001865 | 0.001990 |
| div_qs_test.test | RUN | 0.331341 | 0.731439 | 1.152603 | 0.002026 | 0.002070 | 0.002076 |
| dot_qq_test.test | RUN | 0.329490 | 0.705178 | 1.195606 | 0.002031 | 0.002142 | 0.001584 |
| eq_qq_test.test | RUN | 0.334608 | 0.741543 | 1.204719 | 0.001924 | 0.001840 | 0.002026 |
| inverse_q_test.test | RUN | 0.388753 | 0.973972 | 1.445736 | 0.002410 | 0.001986 | 0.002056 |
| mag_q_test.test | RUN | 0.336544 | 0.741411 | 1.112361 | 0.001868 | 0.001872 | 0.002070 |
| mag_sqr_q_test.test | RUN | 0.333303 | 0.724578 | 1.171946 | 0.002022 | 0.002128 | 0.002100 |
| minus_q_test.test | RUN | 0.332648 | 0.756259 | 1.163291 | 0.001986 | 0.001875 | 0.002150 |
| minus_eq_qq_test.test | RUN | 0.329276 | 0.714229 | 1.091003 | 0.001947 | 0.001823 | 0.002000 |
| minus_qq_test.test | RUN | 0.337266 | 0.750157 | 1.186349 | 0.001694 | 0.001954 | 0.002117 |
| mul_eq_qs_test.test | RUN | 0.329291 | 0.690685 | 1.135944 | 0.001881 | 0.002179 | 0.002088 |
| mul_qs_test.test | RUN | 0.336346 | 0.735890 | 1.151489 | 0.002006 | 0.002103 | 0.001941 |
| mul_qv_test.test | RUN | 0.407335 | 1.004586 | 1.550715 | 0.001884 | 0.002019 | 0.002090 |
| mul_qq_test.test | RUN | 0.389362 | 1.018904 | 1.422770 | 0.001796 | 0.002146 | 0.001952 |
| mul_eq_qq_test.test | RUN | 0.396378 | 0.999336 | 1.471476 | 0.002065 | 0.001952 | 0.001786 |
| plus_eq_qq_test.test | RUN | 0.330836 | 0.722456 | 1.122978 | 0.001778 | 0.001701 | 0.002010 |
| plus_qq_test.test | RUN | 0.331572 | 0.768456 | 1.148608 | 0.001931 | 0.002144 | 0.002292 |
| scalar_cast_q_test.test | RUN | 0.325769 | 0.693715 | 1.110564 | 0.001678 | 0.001938 | 0.002032 |
| slerp_test.test | RUN | 0.348915 | 1.401206 | 1.336320 | 0.024579 | 0.019875 | 0.021350 |
| convert_to_test.test | RUN | 0.479444 | 1.284228 | 2.127052 | 0.001968 | 0.001882 | 0.001956 |
| rot_mat_test.test | RUN | 0.716579 | 5.719478 | 6.023553 | 0.058580 | 0.053369 | 0.050732 |
| rot_quat_test.test | RUN | 0.399866 | 1.214212 | 1.451084 | 0.001948 | 0.002068 | 0.002041 |
| rotx_mat_test.test | RUN | 0.449662 | 1.537153 | 1.976807 | 0.002128 | 0.002302 | 0.002166 |
| rotx_quat_test.test | RUN | 0.390688 | 1.025977 | 1.313545 | 0.001738 | 0.001988 | 0.001995 |
| roty_mat_test.test | RUN | 0.459781 | 1.523134 | 1.877904 | 0.002088 | 0.002062 | 0.002115 |
| roty_quat_test.test | RUN | 0.397097 | 1.003427 | 1.394905 | 0.002048 | 0.002104 | 0.002157 |
| rotz_mat_test.test | RUN | 0.467768 | 1.770565 | 1.749247 | 0.001877 | 0.001721 | 0.001904 |
| rotz_quat_test.test | RUN | 0.393503 | 0.981981 | 1.421911 | 0.001842 | 0.002092 | 0.002194 |
| zero_vec_test.test | RUN | 0.344926 | 0.875349 | 1.221071 | 0.002019 | 0.001886 | 0.001708 |
| zero_mat_test.test | RUN | 0.420466 | 1.399591 | 1.593319 | 0.001820 | 0.001942 | 0.002043 |
| zero_quat_test.test | RUN | 0.322836 | 0.720884 | 1.119541 | 0.002007 | 0.001288 | 0.002151 |
| identity_mat_test.test | RUN | 0.390162 | 1.064606 | 1.507141 | 0.001838 | 0.002177 | 0.002045 |
| identity_quat_test.test | RUN | 0.330662 | 0.690183 | 1.123426 | 0.002024 | 0.002148 | 0.002071 |
| col_test.test | RUN | 0.627553 | 2.226569 | 3.246085 | 0.001794 | 0.002002 | 0.002082 |
| col_mat_test.test | RUN | 0.422792 | 1.033600 | 1.485736 | 0.002032 | 0.002335 | 0.002096 |
| neg_col_test.test | RUN | 0.477840 | 1.439403 | 1.971257 | 0.001833 | 0.002138 | 0.002045 |
| neg_row_test.test | RUN | 0.502050 | 1.490125 | 1.951983 | 0.001932 | 0.002228 | 0.002066 |
| del_col_test.test | RUN | 0.510728 | 1.602427 | 2.035665 | 0.001882 | 0.002116 | 0.002106 |
| del_row_test.test | RUN | 0.506488 | 1.528453 | 1.917244 | 0.001929 | 0.002168 | 0.001918 |
| del_row_col_test.test | RUN | 0.716106 | 3.003826 | 3.866405 | 0.001992 | 0.002117 | 0.002083 |
| swap_cols_test.test | RUN | 0.934693 | 3.922825 | 4.485960 | 0.001928 | 0.002154 | 0.002104 |
| swap_rows_test.test | RUN | 1.008102 | 4.145999 | 4.365299 | 0.002058 | 0.001839 | 0.001976 |
| diag_test.test | RUN | 0.427020 | 1.068248 | 1.734864 | 0.001760 | 0.002060 | 0.001994 |
| diag_mat_test.test | RUN | 0.429908 | 1.038203 | 1.570861 | 0.001974 | 0.002146 | 0.001819 |
| row_test.test | RUN | 0.634099 | 2.197089 | 3.245660 | 0.002070 | 0.002058 | 0.001944 |
| row_mat_test.test | RUN | 0.411129 | 0.977668 | 1.483425 | 0.001942 | 0.001896 | 0.002110 |
| transpose_test.test | RUN | 0.497843 | 1.496885 | 1.983174 | 0.002054 | 0.002178 | 0.002046 |
| translation_test.test | RUN | 0.388969 | 0.942292 | 1.535090 | 0.001742 | 0.001876 | 0.001856 |
| translation_mat_test.test | RUN | 0.449884 | 0.989721 | 1.644819 | 0.001787 | 0.001892 | 0.001708 |
| swizzle_const_fail.test | COMPILE_FAIL | 0.146424 | 0.286377 | 0.481324 | — | — | — |
| swizzle2_test2.test | RUN | 0.172691 | 0.411221 | 0.619081 | 0.001896 | 0.001828 | 0.002010 |
| swizzle2_test3.test | RUN | 0.176060 | 0.418204 | 0.650223 | 0.001716 | 0.001759 | 0.001666 |
| swizzle2_test4.test | RUN | 0.178704 | 0.402503 | 0.592745 | 0.001787 | 0.002109 | 0.001478 |
| swizzle2_test.test | RUN | 0.570505 | 1.182741 | 2.107894 | 0.001964 | 0.002114 | 0.002122 |
| swizzle3_test2.test | RUN | 0.197296 | 0.447438 | 0.722879 | 0.001842 | 0.002127 | 0.001800 |
| swizzle3_test3.test | RUN | 0.194968 | 0.441855 | 0.694399 | 0.001885 | 0.001917 | 0.001679 |
| swizzle3_test4.test | RUN | 0.202957 | 0.454920 | 0.718397 | 0.001716 | 0.001863 | 0.001972 |
| swizzle3_test.test | RUN | 0.560305 | 1.159044 | 2.159762 | 0.001878 | 0.001765 | 0.001791 |
| swizzle4_test2.test | RUN | 0.339582 | 0.642048 | 1.265824 | 0.001922 | 0.002122 | 0.002166 |
| swizzle4_test3.test | RUN | 0.339307 | 0.646800 | 1.191671 | 0.001756 | 0.001988 | 0.001722 |
| swizzle4_test4.test | RUN | 0.345119 | 0.652659 | 1.198235 | 0.001764 | 0.001796 | 0.001937 |
| swizzle4_test.test | RUN | 0.575362 | 1.322084 | 2.212244 | 0.001931 | 0.002143 | 0.002129 |
| deduce_scalar_test.test | COMPILE | 0.029700 | 0.058738 | 0.103548 | — | — | — |
| deduce_scalar_mq_test.test | RUN | 0.211894 | 0.471645 | 0.744405 | 0.001840 | 0.001810 | 0.001976 |
| deduce_scalar_mv_test.test | RUN | 0.255491 | 0.573005 | 0.864947 | 0.001781 | 0.002025 | 0.002120 |
| deduce_scalar_fail.test | COMPILE_FAIL | 0.023536 | 0.041556 | 0.080151 | — | — | — |
| deduce_mat_test.test | COMPILE | 0.025901 | 0.056285 | 0.091401 | — | — | — |
| deduce_quat_test.test | COMPILE | 0.023571 | 0.050354 | 0.090187 | — | — | — |
| deduce_vec_test.test | COMPILE | 0.025975 | 0.051761 | 0.091023 | — | — | — |
| interop_test.test | RUN | 0.264165 | 0.655479 | 1.359567 | 0.000767 | 0.000645 | 0.002066 |
| transform_test.test | RUN | 0.507501 | 1.079857 | 1.796585 | 0.001490 | 0.001614 | 0.001359 |
| projection_test.test | RUN | 0.306599 | 0.759109 | 1.070501 | 0.001525 | 0.001500 | 0.001418 |
| scalar_traits_test.test | COMPILE | 0.027017 | 0.056622 | 0.094557 | — | — | — |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.977× | 0.983×, 0.971× | 1.011× |
| clang | 1.047× | 1.066×, 1.028× | 1.033× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1359 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/43750858933).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| access_m_test.test | 10 | 0.001200s | 0.001232s | 0.001238s | byte equality observed |
| access_q_test.test | 10 | 0.001220s | 0.001241s | 0.001191s | byte equality observed |
| access_v_test.test | 10 | 0.001210s | 0.001190s | 0.001228s | byte equality observed |
| assign_test.test | 10 | 0.001222s | 0.001240s | 0.001229s | byte equality observed |
| cmp_mm_test.test | 10 | 0.001261s | 0.001249s | 0.001242s | byte equality observed |
| cmp_qq_test.test | 10 | 0.001230s | 0.001228s | 0.001260s | byte equality observed |
| cmp_vv_test.test | 10 | 0.001204s | 0.001276s | 0.001188s | byte equality observed |
| col_mat_test.test | 10 | 0.001261s | 0.001254s | 0.001220s | byte equality observed |
| col_test.test | 10 | 0.001243s | 0.001226s | 0.001219s | byte equality observed |
| conjugate_test.test | 10 | 0.001228s | 0.001240s | 0.001198s | byte equality observed |
| convert_to_test.test | 10 | 0.001234s | 0.001297s | 0.001262s | byte equality observed |
| cross_test.test | 10 | 0.001256s | 0.001213s | 0.001214s | byte equality observed |
| deduce_scalar_mq_test.test | 10 | 0.001218s | 0.001206s | 0.001218s | byte equality observed |
| deduce_scalar_mv_test.test | 10 | 0.001253s | 0.001253s | 0.001251s | byte equality observed |
| del_col_test.test | 10 | 0.001231s | 0.001223s | 0.001269s | byte equality observed |
| del_row_col_test.test | 10 | 0.001263s | 0.001267s | 0.001212s | byte equality observed |
| del_row_test.test | 10 | 0.001258s | 0.001265s | 0.001250s | byte equality observed |
| determinant_test.test | 10 | 0.001234s | 0.001245s | 0.001255s | byte equality observed |
| diag_mat_test.test | 10 | 0.001195s | 0.001270s | 0.001230s | byte equality observed |
| diag_test.test | 10 | 0.001240s | 0.001237s | 0.001268s | byte equality observed |
| div_eq_ms_test.test | 10 | 0.001250s | 0.001225s | 0.001248s | byte equality observed |
| div_eq_qs_test.test | 10 | 0.001225s | 0.001257s | 0.001267s | byte equality observed |
| div_eq_vs_test.test | 10 | 0.001236s | 0.001232s | 0.001242s | byte equality observed |
| div_ms_test.test | 10 | 0.001232s | 0.001237s | 0.001192s | byte equality observed |
| div_qs_test.test | 10 | 0.001216s | 0.001228s | 0.001247s | byte equality observed |
| div_vs_test.test | 10 | 0.001259s | 0.001226s | 0.001203s | byte equality observed |
| dot_qq_test.test | 10 | 0.001219s | 0.001239s | 0.001189s | byte equality observed |
| dot_vv_test.test | 10 | 0.001251s | 0.001221s | 0.001208s | byte equality observed |
| eq_mm_test.test | 10 | 0.001243s | 0.001244s | 0.001229s | byte equality observed |
| eq_qq_test.test | 10 | 0.001238s | 0.001228s | 0.001217s | byte equality observed |
| eq_vv_test.test | 10 | 0.001240s | 0.001271s | 0.001199s | byte equality observed |
| identity_mat_test.test | 10 | 0.001270s | 0.001218s | 0.001201s | byte equality observed |
| identity_quat_test.test | 10 | 0.001244s | 0.001257s | 0.001203s | byte equality observed |
| interop_test.test | 10 | 0.000563s | 0.000556s | 0.001212s | byte equality observed |
| inverse_m_test.test | 10 | 0.001300s | 0.001266s | 0.001258s | byte equality observed |
| inverse_q_test.test | 10 | 0.001251s | 0.001206s | 0.001232s | byte equality observed |
| mag_q_test.test | 10 | 0.001237s | 0.001193s | 0.001260s | byte equality observed |
| mag_sqr_q_test.test | 10 | 0.001252s | 0.001253s | 0.001247s | byte equality observed |
| mag_sqr_v_test.test | 10 | 0.001236s | 0.001275s | 0.001217s | byte equality observed |
| mag_v_test.test | 10 | 0.001217s | 0.001248s | 0.001286s | byte equality observed |
| mat_index_test.test | 10 | 0.001224s | 0.001249s | 0.001219s | byte equality observed |
| mat_traits_array_test.test | 10 | 0.001202s | 0.001252s | 0.001246s | byte equality observed |
| mat_traits_std_array_test.test | 10 | 0.001196s | 0.001210s | 0.001200s | byte equality observed |
| math_test.test | 10 | 0.001869s | 0.001788s | 0.001616s | byte equality observed |
| minus_eq_mm_test.test | 10 | 0.001194s | 0.001232s | 0.001216s | byte equality observed |
| minus_eq_qq_test.test | 10 | 0.001233s | 0.001246s | 0.001183s | byte equality observed |
| minus_eq_vv_test.test | 10 | 0.001211s | 0.001267s | 0.001202s | byte equality observed |
| minus_m_test.test | 10 | 0.001254s | 0.001253s | 0.001202s | byte equality observed |
| minus_mm_test.test | 10 | 0.001244s | 0.001235s | 0.001213s | byte equality observed |
| minus_q_test.test | 10 | 0.001239s | 0.001239s | 0.001262s | byte equality observed |
| minus_qq_test.test | 10 | 0.001191s | 0.001227s | 0.001264s | byte equality observed |
| minus_v_test.test | 10 | 0.001216s | 0.001197s | 0.001203s | byte equality observed |
| minus_vv_test.test | 10 | 0.001302s | 0.001249s | 0.001196s | byte equality observed |
| mul_eq_mm_test.test | 10 | 0.001246s | 0.001230s | 0.001265s | byte equality observed |
| mul_eq_ms_test.test | 10 | 0.001243s | 0.001195s | 0.001256s | byte equality observed |
| mul_eq_qq_test.test | 10 | 0.001230s | 0.001247s | 0.001222s | byte equality observed |
| mul_eq_qs_test.test | 10 | 0.001260s | 0.001234s | 0.001253s | byte equality observed |
| mul_eq_vs_test.test | 10 | 0.001266s | 0.001264s | 0.001221s | byte equality observed |
| mul_mm_test.test | 10 | 0.001266s | 0.001207s | 0.001193s | byte equality observed |
| mul_ms_test.test | 10 | 0.001249s | 0.001238s | 0.001301s | byte equality observed |
| mul_mv_test.test | 10 | 0.001211s | 0.001227s | 0.001219s | byte equality observed |
| mul_qq_test.test | 10 | 0.001248s | 0.001271s | 0.001250s | byte equality observed |
| mul_qs_test.test | 10 | 0.001258s | 0.001244s | 0.001257s | byte equality observed |
| mul_qv_test.test | 10 | 0.001256s | 0.001200s | 0.001249s | byte equality observed |
| mul_sm_test.test | 10 | 0.001277s | 0.001227s | 0.001251s | byte equality observed |
| mul_sv_test.test | 10 | 0.001244s | 0.001247s | 0.001258s | byte equality observed |
| mul_vm_test.test | 10 | 0.001264s | 0.001272s | 0.001214s | byte equality observed |
| mul_vs_test.test | 10 | 0.001207s | 0.001210s | 0.001260s | byte equality observed |
| neg_col_test.test | 10 | 0.001220s | 0.001215s | 0.001240s | byte equality observed |
| neg_row_test.test | 10 | 0.001257s | 0.001234s | 0.001260s | byte equality observed |
| normalize_q_test.test | 10 | 0.001238s | 0.001255s | 0.001246s | byte equality observed |
| normalize_v_test.test | 10 | 0.001252s | 0.001224s | 0.001226s | byte equality observed |
| plus_eq_mm_test.test | 10 | 0.001248s | 0.001206s | 0.001242s | byte equality observed |
| plus_eq_qq_test.test | 10 | 0.001249s | 0.001194s | 0.001248s | byte equality observed |
| plus_eq_vv_test.test | 10 | 0.001230s | 0.001234s | 0.001237s | byte equality observed |
| plus_mm_test.test | 10 | 0.001240s | 0.001219s | 0.001268s | byte equality observed |
| plus_qq_test.test | 10 | 0.001246s | 0.001211s | 0.001249s | byte equality observed |
| plus_vv_test.test | 10 | 0.001198s | 0.001250s | 0.001222s | byte equality observed |
| projection_test.test | 10 | 0.001255s | 0.001221s | 0.001237s | byte equality observed |
| quat_traits_array_test.test | 10 | 0.001221s | 0.001245s | 0.001292s | byte equality observed |
| quat_traits_std_array_test.test | 10 | 0.001201s | 0.001243s | 0.001184s | byte equality observed |
| rot_mat_test.test | 1 | 0.035557s | 0.031817s | 0.037784s | byte equality observed |
| rot_quat_test.test | 10 | 0.001156s | 0.001146s | 0.001254s | byte equality observed |
| rotx_mat_test.test | 10 | 0.001187s | 0.001217s | 0.001298s | byte equality observed |
| rotx_quat_test.test | 10 | 0.001207s | 0.001240s | 0.001395s | byte equality observed |
| roty_mat_test.test | 10 | 0.001258s | 0.001221s | 0.001445s | byte equality observed |
| roty_quat_test.test | 10 | 0.001202s | 0.001236s | 0.001422s | byte equality observed |
| rotz_mat_test.test | 10 | 0.001212s | 0.001239s | 0.001480s | byte equality observed |
| rotz_quat_test.test | 10 | 0.001254s | 0.001251s | 0.001476s | byte equality observed |
| row_mat_test.test | 10 | 0.001249s | 0.001272s | 0.001478s | byte equality observed |
| row_test.test | 10 | 0.001207s | 0.001240s | 0.001461s | byte equality observed |
| scalar_cast_m_test.test | 10 | 0.001254s | 0.001234s | 0.001428s | byte equality observed |
| scalar_cast_q_test.test | 10 | 0.001232s | 0.001242s | 0.001449s | byte equality observed |
| scalar_cast_v_test.test | 10 | 0.001213s | 0.001194s | 0.001411s | byte equality observed |
| slerp_test.test | 2 | 0.016486s | 0.013828s | 0.019587s | byte equality observed |
| swap_cols_test.test | 10 | 0.001135s | 0.001176s | 0.001440s | byte equality observed |
| swap_rows_test.test | 10 | 0.001150s | 0.001194s | 0.001423s | byte equality observed |
| swizzle2_test.test | 10 | 0.001202s | 0.001219s | 0.001421s | byte equality observed |
| swizzle2_test2.test | 10 | 0.001240s | 0.001257s | 0.001423s | byte equality observed |
| swizzle2_test3.test | 10 | 0.001223s | 0.001236s | 0.001444s | byte equality observed |
| swizzle2_test4.test | 10 | 0.001218s | 0.001308s | 0.001474s | byte equality observed |
| swizzle3_test.test | 10 | 0.001207s | 0.001264s | 0.001473s | byte equality observed |
| swizzle3_test2.test | 10 | 0.001214s | 0.001276s | 0.001445s | byte equality observed |
| swizzle3_test3.test | 10 | 0.001230s | 0.001307s | 0.001499s | byte equality observed |
| swizzle3_test4.test | 10 | 0.001201s | 0.001289s | 0.001474s | byte equality observed |
| swizzle4_test.test | 10 | 0.001219s | 0.001399s | 0.001462s | byte equality observed |
| swizzle4_test2.test | 10 | 0.001268s | 0.001374s | 0.001470s | byte equality observed |
| swizzle4_test3.test | 10 | 0.001356s | 0.001382s | 0.001468s | byte equality observed |
| swizzle4_test4.test | 10 | 0.001311s | 0.001437s | 0.001495s | byte equality observed |
| to_string_test.test | 10 | 0.001435s | 0.001484s | 0.001497s | byte equality observed |
| transform_test.test | 10 | 0.001454s | 0.001449s | 0.001469s | byte equality observed |
| translation_mat_test.test | 10 | 0.001404s | 0.001460s | 0.001433s | byte equality observed |
| translation_test.test | 10 | 0.001440s | 0.001499s | 0.001472s | byte equality observed |
| transpose_test.test | 10 | 0.001467s | 0.001487s | 0.001487s | byte equality observed |
| vec_index_test.test | 10 | 0.001475s | 0.001462s | 0.001458s | byte equality observed |
| vec_register_test.test | 10 | 0.001464s | 0.001506s | 0.001478s | byte equality observed |
| vec_traits_array_test.test | 10 | 0.001468s | 0.001486s | 0.001452s | byte equality observed |
| vec_traits_gnuc_test.test | 10 | 0.001470s | 0.001484s | 0.001442s | byte equality observed |
| vec_traits_std_array_test.test | 10 | 0.001496s | 0.001474s | 0.001469s | byte equality observed |
| zero_mat_test.test | 10 | 0.001459s | 0.001461s | 0.001456s | byte equality observed |
| zero_quat_test.test | 10 | 0.001454s | 0.001497s | 0.001472s | byte equality observed |
| zero_vec_test.test | 10 | 0.001464s | 0.001444s | 0.001469s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/43750858933).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
