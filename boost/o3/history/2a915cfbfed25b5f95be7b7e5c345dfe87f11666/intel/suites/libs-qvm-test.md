# libs/qvm/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| math_test.test | RUN | 0.165171 | 0.459089 | 0.450991 | 0.001372 | 0.001472 | 0.001244 |
| mat_traits_array_test.test | RUN | 0.126842 | 0.451702 | 0.342800 | 0.000909 | 0.000950 | 0.000885 |
| mat_traits_std_array_test.test | RUN | 0.127322 | 0.347020 | 0.351938 | 0.000919 | 0.001008 | 0.000970 |
| vec_traits_array_test.test | RUN | 0.110696 | 0.344375 | 0.294339 | 0.000953 | 0.000955 | 0.000909 |
| vec_traits_gnuc_test.test | RUN | 0.198549 | 0.414328 | 0.557716 | 0.000908 | 0.000955 | 0.000908 |
| vec_traits_std_array_test.test | RUN | 0.109876 | 0.268595 | 0.289133 | 0.000960 | 0.001059 | 0.000893 |
| quat_traits_array_test.test | RUN | 0.106856 | 0.364971 | 0.292645 | 0.000999 | 0.001012 | 0.000933 |
| quat_traits_std_array_test.test | RUN | 0.106221 | 0.272847 | 0.294912 | 0.001016 | 0.001018 | 0.000903 |
| access_m_test.test | RUN | 0.174482 | 0.640205 | 0.671831 | 0.000893 | 0.001052 | 0.000991 |
| access_m_fail1.test | COMPILE_FAIL | 0.017133 | 0.027649 | 0.043511 | — | — | — |
| access_m_fail2.test | COMPILE_FAIL | 0.017011 | 0.027813 | 0.041715 | — | — | — |
| access_q_test.test | RUN | 0.145030 | 0.339206 | 0.402111 | 0.000907 | 0.000977 | 0.000877 |
| access_q_fail.test | COMPILE_FAIL | 0.013137 | 0.022875 | 0.035688 | — | — | — |
| access_v_test.test | RUN | 0.147265 | 0.345813 | 0.401358 | 0.000872 | 0.000952 | 0.000942 |
| access_v_fail1.test | COMPILE_FAIL | 0.011528 | 0.019983 | 0.033173 | — | — | — |
| access_v_fail2.test | COMPILE_FAIL | 0.011655 | 0.020630 | 0.031894 | — | — | — |
| assign_test.test | RUN | 0.225029 | 0.551612 | 0.730599 | 0.000895 | 0.001082 | 0.000827 |
| to_string_test.test | RUN | 0.268173 | 0.920281 | 4.416108 | 0.001148 | 0.001112 | 0.000894 |
| cmp_vv_test.test | RUN | 0.186242 | 0.445766 | 0.483613 | 0.000987 | 0.001080 | 0.000930 |
| cross_test.test | RUN | 0.174162 | 0.405536 | 0.480253 | 0.000957 | 0.000980 | 0.000932 |
| div_eq_vs_test.test | RUN | 0.167492 | 0.372732 | 0.474855 | 0.000980 | 0.001043 | 0.000910 |
| div_vs_test.test | RUN | 0.177532 | 0.471795 | 0.501784 | 0.000950 | 0.001029 | 0.000959 |
| dot_vv_test.test | RUN | 0.167894 | 0.415931 | 0.465601 | 0.000951 | 0.001038 | 0.000930 |
| eq_vv_test.test | RUN | 0.189357 | 0.464738 | 0.521678 | 0.000954 | 0.001033 | 0.000948 |
| mag_v_test.test | RUN | 0.164312 | 0.385110 | 0.447028 | 0.000931 | 0.001155 | 0.000919 |
| mag_sqr_v_test.test | RUN | 0.164996 | 0.378624 | 0.443104 | 0.000857 | 0.001061 | 0.000915 |
| minus_v_test.test | RUN | 0.173409 | 0.450600 | 0.484009 | 0.000930 | 0.001001 | 0.000903 |
| minus_eq_vv_test.test | RUN | 0.169410 | 0.440017 | 0.476847 | 0.000937 | 0.000976 | 0.000950 |
| minus_vv_test.test | RUN | 0.179572 | 0.474991 | 0.498433 | 0.001005 | 0.001001 | 0.000893 |
| mul_eq_vs_test.test | RUN | 0.168036 | 0.380109 | 0.478792 | 0.000976 | 0.001003 | 0.000955 |
| mul_vs_test.test | RUN | 0.175143 | 0.478448 | 0.507196 | 0.000918 | 0.000996 | 0.000964 |
| mul_sv_test.test | RUN | 0.178257 | 0.475588 | 0.507295 | 0.000939 | 0.000965 | 0.000950 |
| mul_vm_test.test | RUN | 0.244981 | 0.842325 | 0.795578 | 0.001024 | 0.001057 | 0.000872 |
| normalize_v_test.test | RUN | 0.182089 | 0.586683 | 0.516957 | 0.001010 | 0.001044 | 0.000916 |
| plus_eq_vv_test.test | RUN | 0.167349 | 0.434462 | 0.477789 | 0.001305 | 0.000977 | 0.000832 |
| plus_vv_test.test | RUN | 0.176230 | 0.471617 | 0.498817 | 0.001013 | 0.001010 | 0.000884 |
| scalar_cast_v_test.test | RUN | 0.161574 | 0.351267 | 0.427156 | 0.000923 | 0.001258 | 0.000893 |
| vec_index_test.test | RUN | 0.142028 | 0.357659 | 0.391573 | 0.001013 | 0.000997 | 0.001182 |
| vec_register_test.test | RUN | 0.094086 | 0.315754 | 0.288344 | 0.000941 | 0.001063 | 0.000846 |
| cmp_mm_test.test | RUN | 0.285732 | 1.037117 | 1.033764 | 0.000984 | 0.001241 | 0.000957 |
| determinant_test.test | RUN | 0.196093 | 0.531304 | 0.549797 | 0.000938 | 0.001034 | 0.001022 |
| div_eq_ms_test.test | RUN | 0.204083 | 0.476570 | 0.630368 | 0.000967 | 0.001055 | 0.001032 |
| div_ms_test.test | RUN | 0.239586 | 0.777135 | 0.764822 | 0.000873 | 0.001034 | 0.000917 |
| eq_mm_test.test | RUN | 0.277772 | 0.958278 | 0.984362 | 0.001000 | 0.000935 | 0.000969 |
| minus_m_test.test | RUN | 0.235301 | 0.766466 | 0.733235 | 0.001039 | 0.000983 | 0.000980 |
| minus_eq_mm_test.test | RUN | 0.222549 | 0.711164 | 0.687913 | 0.000986 | 0.000901 | 0.000919 |
| minus_mm_test.test | RUN | 0.248252 | 0.905810 | 0.809951 | 0.000919 | 0.001026 | 0.000925 |
| mul_eq_mm_test.test | RUN | 0.202429 | 0.669159 | 0.607817 | 0.000890 | 0.001010 | 0.001197 |
| mul_eq_ms_test.test | RUN | 0.203340 | 0.481227 | 0.651096 | 0.000945 | 0.001063 | 0.000930 |
| mul_mm_test.test | RUN | 0.292487 | 1.501145 | 1.022150 | 0.000922 | 0.001059 | 0.000984 |
| mul_ms_test.test | RUN | 0.241742 | 0.790825 | 0.798587 | 0.001033 | 0.000937 | 0.000956 |
| mul_sm_test.test | RUN | 0.239157 | 0.787646 | 0.799182 | 0.000954 | 0.001018 | 0.000915 |
| mul_mv_test.test | RUN | 0.246921 | 0.846412 | 0.810425 | 0.000952 | 0.000966 | 0.000903 |
| inverse_m_test.test | RUN | 0.347641 | 1.560963 | 1.137954 | 0.000971 | 0.001094 | 0.000920 |
| plus_eq_mm_test.test | RUN | 0.225258 | 0.720179 | 0.691104 | 0.000909 | 0.000975 | 0.000969 |
| plus_mm_test.test | RUN | 0.247237 | 0.904335 | 0.801584 | 0.000893 | 0.001122 | 0.000943 |
| scalar_cast_m_test.test | RUN | 0.183768 | 0.410712 | 0.501780 | 0.000966 | 0.001002 | 0.000876 |
| mat_index_test.test | RUN | 0.149478 | 0.389894 | 0.438813 | 0.000901 | 0.001039 | 0.000929 |
| cmp_qq_test.test | RUN | 0.161584 | 0.353129 | 0.429909 | 0.000914 | 0.000953 | 0.000919 |
| conjugate_test.test | RUN | 0.163003 | 0.367719 | 0.441902 | 0.001021 | 0.000976 | 0.000901 |
| normalize_q_test.test | RUN | 0.167016 | 0.414111 | 0.447017 | 0.000965 | 0.001079 | 0.000861 |
| div_eq_qs_test.test | RUN | 0.160781 | 0.347767 | 0.425825 | 0.000893 | 0.001024 | 0.000905 |
| div_qs_test.test | RUN | 0.164503 | 0.371724 | 0.435925 | 0.000927 | 0.001001 | 0.000923 |
| dot_qq_test.test | RUN | 0.163408 | 0.359333 | 0.439126 | 0.000892 | 0.001000 | 0.000948 |
| eq_qq_test.test | RUN | 0.165581 | 0.382224 | 0.441267 | 0.000969 | 0.000893 | 0.000916 |
| inverse_q_test.test | RUN | 0.197279 | 0.501205 | 0.546358 | 0.001021 | 0.000969 | 0.000927 |
| mag_q_test.test | RUN | 0.160055 | 0.363083 | 0.424958 | 0.001019 | 0.001022 | 0.000941 |
| mag_sqr_q_test.test | RUN | 0.158616 | 0.368212 | 0.429716 | 0.001046 | 0.000962 | 0.000959 |
| minus_q_test.test | RUN | 0.159545 | 0.376846 | 0.426201 | 0.000965 | 0.000980 | 0.000963 |
| minus_eq_qq_test.test | RUN | 0.161563 | 0.367280 | 0.423187 | 0.001128 | 0.000873 | 0.000927 |
| minus_qq_test.test | RUN | 0.161322 | 0.370950 | 0.434697 | 0.000994 | 0.000914 | 0.000941 |
| mul_eq_qs_test.test | RUN | 0.158777 | 0.346827 | 0.419613 | 0.000961 | 0.000986 | 0.000906 |
| mul_qs_test.test | RUN | 0.159706 | 0.369339 | 0.432648 | 0.000910 | 0.000939 | 0.000905 |
| mul_qv_test.test | RUN | 0.203927 | 0.505311 | 0.549022 | 0.000924 | 0.001115 | 0.001019 |
| mul_qq_test.test | RUN | 0.199658 | 0.508678 | 0.542918 | 0.000925 | 0.001057 | 0.000913 |
| mul_eq_qq_test.test | RUN | 0.194607 | 0.508498 | 0.546189 | 0.000966 | 0.001086 | 0.000962 |
| plus_eq_qq_test.test | RUN | 0.160753 | 0.370306 | 0.434415 | 0.000969 | 0.001045 | 0.000872 |
| plus_qq_test.test | RUN | 0.167165 | 0.375845 | 0.432447 | 0.000898 | 0.001037 | 0.000891 |
| scalar_cast_q_test.test | RUN | 0.159923 | 0.349277 | 0.428636 | 0.000955 | 0.001002 | 0.000946 |
| slerp_test.test | RUN | 0.178665 | 0.706322 | 0.520565 | 0.013301 | 0.011406 | 0.012145 |
| convert_to_test.test | RUN | 0.244903 | 0.646234 | 0.812998 | 0.000987 | 0.000940 | 0.000956 |
| rot_mat_test.test | RUN | 0.400314 | 3.083127 | 2.576252 | 0.023916 | 0.026362 | 0.030538 |
| rot_quat_test.test | RUN | 0.201926 | 0.612051 | 0.558971 | 0.001008 | 0.001015 | 0.000973 |
| rotx_mat_test.test | RUN | 0.232796 | 0.808763 | 0.753784 | 0.001074 | 0.001024 | 0.000953 |
| rotx_quat_test.test | RUN | 0.195258 | 0.519214 | 0.536162 | 0.001002 | 0.001010 | 0.000940 |
| roty_mat_test.test | RUN | 0.232775 | 0.803393 | 0.751371 | 0.000953 | 0.000980 | 0.000952 |
| roty_quat_test.test | RUN | 0.200313 | 0.527221 | 0.534120 | 0.000945 | 0.001296 | 0.000950 |
| rotz_mat_test.test | RUN | 0.245616 | 0.926911 | 0.807585 | 0.000977 | 0.001050 | 0.000856 |
| rotz_quat_test.test | RUN | 0.200278 | 0.512183 | 0.528331 | 0.000952 | 0.000952 | 0.000927 |
| zero_vec_test.test | RUN | 0.166806 | 0.442708 | 0.461354 | 0.000969 | 0.000948 | 0.000944 |
| zero_mat_test.test | RUN | 0.207588 | 0.721889 | 0.644312 | 0.000901 | 0.000955 | 0.000941 |
| zero_quat_test.test | RUN | 0.161068 | 0.371165 | 0.427382 | 0.000882 | 0.000938 | 0.000882 |
| identity_mat_test.test | RUN | 0.195004 | 0.539755 | 0.552209 | 0.000917 | 0.001088 | 0.000943 |
| identity_quat_test.test | RUN | 0.164338 | 0.356108 | 0.428542 | 0.000885 | 0.001011 | 0.000928 |
| col_test.test | RUN | 0.317700 | 1.140831 | 1.225935 | 0.000981 | 0.001022 | 0.000917 |
| col_mat_test.test | RUN | 0.203821 | 0.500603 | 0.562278 | 0.000967 | 0.001131 | 0.001036 |
| neg_col_test.test | RUN | 0.240405 | 0.720394 | 0.738347 | 0.001059 | 0.001013 | 0.000954 |
| neg_row_test.test | RUN | 0.242575 | 0.713891 | 0.743072 | 0.001011 | 0.001075 | 0.000896 |
| del_col_test.test | RUN | 0.252957 | 0.786441 | 0.763570 | 0.000981 | 0.000960 | 0.000922 |
| del_row_test.test | RUN | 0.252643 | 0.764350 | 0.759823 | 0.000966 | 0.001026 | 0.000886 |
| del_row_col_test.test | RUN | 0.349107 | 1.435029 | 1.428149 | 0.000976 | 0.000914 | 0.000947 |
| swap_cols_test.test | RUN | 0.478842 | 1.928440 | 1.739125 | 0.000993 | 0.000960 | 0.000903 |
| swap_rows_test.test | RUN | 0.530779 | 2.030187 | 1.726531 | 0.000908 | 0.000881 | 0.000879 |
| diag_test.test | RUN | 0.215948 | 0.537767 | 0.663472 | 0.000949 | 0.001013 | 0.000995 |
| diag_mat_test.test | RUN | 0.215613 | 0.539554 | 0.597005 | 0.000922 | 0.001025 | 0.000932 |
| row_test.test | RUN | 0.316042 | 1.119444 | 1.233710 | 0.000952 | 0.000997 | 0.000876 |
| row_mat_test.test | RUN | 0.208184 | 0.495368 | 0.590431 | 0.000948 | 0.001048 | 0.000897 |
| transpose_test.test | RUN | 0.247776 | 0.766068 | 0.801758 | 0.000887 | 0.001027 | 0.000946 |
| translation_test.test | RUN | 0.200800 | 0.496300 | 0.584750 | 0.000872 | 0.001096 | 0.000979 |
| translation_mat_test.test | RUN | 0.215447 | 0.487330 | 0.630752 | 0.000955 | 0.000987 | 0.000959 |
| swizzle_const_fail.test | COMPILE_FAIL | 0.070643 | 0.137317 | 0.173707 | — | — | — |
| swizzle2_test2.test | RUN | 0.089052 | 0.210196 | 0.235488 | 0.000943 | 0.001063 | 0.000950 |
| swizzle2_test3.test | RUN | 0.085106 | 0.211538 | 0.242834 | 0.000980 | 0.001030 | 0.000899 |
| swizzle2_test4.test | RUN | 0.085362 | 0.214154 | 0.244251 | 0.000945 | 0.001046 | 0.000924 |
| swizzle2_test.test | RUN | 0.273694 | 0.573346 | 0.727406 | 0.000978 | 0.001144 | 0.000854 |
| swizzle3_test2.test | RUN | 0.094828 | 0.224343 | 0.261420 | 0.000950 | 0.000981 | 0.000906 |
| swizzle3_test3.test | RUN | 0.095896 | 0.222721 | 0.267113 | 0.000923 | 0.000968 | 0.000935 |
| swizzle3_test4.test | RUN | 0.096062 | 0.224172 | 0.257441 | 0.000871 | 0.000932 | 0.000922 |
| swizzle3_test.test | RUN | 0.270435 | 0.579184 | 0.722013 | 0.000895 | 0.000982 | 0.000900 |
| swizzle4_test2.test | RUN | 0.159890 | 0.317620 | 0.401845 | 0.001012 | 0.000964 | 0.000923 |
| swizzle4_test3.test | RUN | 0.162619 | 0.317776 | 0.401176 | 0.000980 | 0.001018 | 0.000939 |
| swizzle4_test4.test | RUN | 0.159510 | 0.317925 | 0.404589 | 0.000861 | 0.000945 | 0.000893 |
| swizzle4_test.test | RUN | 0.277710 | 0.637481 | 0.750458 | 0.000864 | 0.000935 | 0.000849 |
| deduce_scalar_test.test | COMPILE | 0.014038 | 0.031722 | 0.040121 | — | — | — |
| deduce_scalar_mq_test.test | RUN | 0.104895 | 0.247108 | 0.279750 | 0.000898 | 0.000941 | 0.000873 |
| deduce_scalar_mv_test.test | RUN | 0.124073 | 0.275981 | 0.337871 | 0.000960 | 0.000895 | 0.000894 |
| deduce_scalar_fail.test | COMPILE_FAIL | 0.011401 | 0.019594 | 0.033021 | — | — | — |
| deduce_mat_test.test | COMPILE | 0.012413 | 0.027326 | 0.036258 | — | — | — |
| deduce_quat_test.test | COMPILE | 0.012000 | 0.026240 | 0.036517 | — | — | — |
| deduce_vec_test.test | COMPILE | 0.012468 | 0.026978 | 0.036884 | — | — | — |
| interop_test.test | RUN | 0.128712 | 0.346734 | 0.456907 | 0.000378 | 0.000416 | 0.000889 |
| transform_test.test | RUN | 0.284916 | 0.571829 | 0.726349 | 0.000866 | 0.000978 | 0.001026 |
| projection_test.test | RUN | 0.184570 | 0.435589 | 0.482522 | 0.000887 | 0.001224 | 0.000817 |
| scalar_traits_test.test | COMPILE | 0.012867 | 0.026762 | 0.036347 | — | — | — |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 1.002× | 1.000×, 1.003× | 1.000× |
| clang | 1.036× | 1.036×, 1.036× | 0.997× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1365 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/43796354412).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| access_m_test.test | 10 | 0.000928s | 0.000924s | 0.000916s | byte equality observed |
| access_q_test.test | 10 | 0.000911s | 0.000922s | 0.000910s | byte equality observed |
| access_v_test.test | 10 | 0.000917s | 0.000920s | 0.000914s | byte equality observed |
| assign_test.test | 10 | 0.000912s | 0.000908s | 0.000915s | byte equality observed |
| cmp_mm_test.test | 10 | 0.000914s | 0.000921s | 0.000919s | byte equality observed |
| cmp_qq_test.test | 10 | 0.000908s | 0.000910s | 0.000910s | byte equality observed |
| cmp_vv_test.test | 10 | 0.000904s | 0.000910s | 0.000911s | byte equality observed |
| col_mat_test.test | 10 | 0.000908s | 0.000905s | 0.000906s | byte equality observed |
| col_test.test | 10 | 0.000909s | 0.000915s | 0.000908s | byte equality observed |
| conjugate_test.test | 10 | 0.000897s | 0.000893s | 0.000907s | byte equality observed |
| convert_to_test.test | 10 | 0.000923s | 0.000913s | 0.000902s | byte equality observed |
| cross_test.test | 10 | 0.000902s | 0.000900s | 0.000895s | byte equality observed |
| deduce_scalar_mq_test.test | 10 | 0.000913s | 0.000898s | 0.000901s | byte equality observed |
| deduce_scalar_mv_test.test | 10 | 0.000914s | 0.000904s | 0.000902s | byte equality observed |
| del_col_test.test | 10 | 0.000906s | 0.000914s | 0.000909s | byte equality observed |
| del_row_col_test.test | 10 | 0.000910s | 0.000908s | 0.000914s | byte equality observed |
| del_row_test.test | 10 | 0.000901s | 0.000895s | 0.000911s | byte equality observed |
| determinant_test.test | 10 | 0.000940s | 0.000920s | 0.000921s | byte equality observed |
| diag_mat_test.test | 10 | 0.000908s | 0.000898s | 0.000903s | byte equality observed |
| diag_test.test | 10 | 0.000905s | 0.000902s | 0.000911s | byte equality observed |
| div_eq_ms_test.test | 10 | 0.000898s | 0.000899s | 0.000903s | byte equality observed |
| div_eq_qs_test.test | 10 | 0.000899s | 0.000897s | 0.000907s | byte equality observed |
| div_eq_vs_test.test | 10 | 0.000911s | 0.000901s | 0.000903s | byte equality observed |
| div_ms_test.test | 10 | 0.000900s | 0.000903s | 0.000904s | byte equality observed |
| div_qs_test.test | 10 | 0.000901s | 0.000914s | 0.000897s | byte equality observed |
| div_vs_test.test | 10 | 0.000906s | 0.000908s | 0.000901s | byte equality observed |
| dot_qq_test.test | 10 | 0.000897s | 0.000903s | 0.000901s | byte equality observed |
| dot_vv_test.test | 10 | 0.000905s | 0.000906s | 0.000902s | byte equality observed |
| eq_mm_test.test | 10 | 0.000913s | 0.000913s | 0.000907s | byte equality observed |
| eq_qq_test.test | 10 | 0.000907s | 0.000904s | 0.000904s | byte equality observed |
| eq_vv_test.test | 10 | 0.000900s | 0.000894s | 0.000908s | byte equality observed |
| identity_mat_test.test | 10 | 0.000904s | 0.000911s | 0.000911s | byte equality observed |
| identity_quat_test.test | 10 | 0.000906s | 0.000900s | 0.000905s | byte equality observed |
| interop_test.test | 10 | 0.000414s | 0.000421s | 0.000886s | byte equality observed |
| inverse_m_test.test | 10 | 0.000964s | 0.000956s | 0.000947s | byte equality observed |
| inverse_q_test.test | 10 | 0.000916s | 0.000916s | 0.000898s | byte equality observed |
| mag_q_test.test | 10 | 0.000906s | 0.000907s | 0.000900s | byte equality observed |
| mag_sqr_q_test.test | 10 | 0.000897s | 0.000901s | 0.000901s | byte equality observed |
| mag_sqr_v_test.test | 10 | 0.000902s | 0.000914s | 0.000903s | byte equality observed |
| mag_v_test.test | 10 | 0.000907s | 0.000912s | 0.000907s | byte equality observed |
| mat_index_test.test | 10 | 0.000910s | 0.000909s | 0.000906s | byte equality observed |
| mat_traits_array_test.test | 10 | 0.000903s | 0.000909s | 0.000898s | byte equality observed |
| mat_traits_std_array_test.test | 10 | 0.000902s | 0.000898s | 0.000908s | byte equality observed |
| math_test.test | 10 | 0.001387s | 0.001345s | 0.001215s | byte equality observed |
| minus_eq_mm_test.test | 10 | 0.000906s | 0.000908s | 0.000912s | byte equality observed |
| minus_eq_qq_test.test | 10 | 0.000904s | 0.000906s | 0.000904s | byte equality observed |
| minus_eq_vv_test.test | 10 | 0.000907s | 0.000906s | 0.000917s | byte equality observed |
| minus_m_test.test | 10 | 0.000903s | 0.000912s | 0.000907s | byte equality observed |
| minus_mm_test.test | 10 | 0.000912s | 0.000911s | 0.000907s | byte equality observed |
| minus_q_test.test | 10 | 0.000905s | 0.000905s | 0.000906s | byte equality observed |
| minus_qq_test.test | 10 | 0.000909s | 0.000908s | 0.000913s | byte equality observed |
| minus_v_test.test | 10 | 0.000908s | 0.000889s | 0.000912s | byte equality observed |
| minus_vv_test.test | 10 | 0.000898s | 0.000909s | 0.000901s | byte equality observed |
| mul_eq_mm_test.test | 10 | 0.000913s | 0.000902s | 0.000905s | byte equality observed |
| mul_eq_ms_test.test | 10 | 0.000903s | 0.000898s | 0.000905s | byte equality observed |
| mul_eq_qq_test.test | 10 | 0.000918s | 0.000921s | 0.000924s | byte equality observed |
| mul_eq_qs_test.test | 10 | 0.000905s | 0.000906s | 0.000897s | byte equality observed |
| mul_eq_vs_test.test | 10 | 0.000893s | 0.000917s | 0.000897s | byte equality observed |
| mul_mm_test.test | 10 | 0.000916s | 0.000915s | 0.000908s | byte equality observed |
| mul_ms_test.test | 10 | 0.000910s | 0.000907s | 0.000904s | byte equality observed |
| mul_mv_test.test | 10 | 0.000902s | 0.000900s | 0.000905s | byte equality observed |
| mul_qq_test.test | 10 | 0.000922s | 0.000922s | 0.000916s | byte equality observed |
| mul_qs_test.test | 10 | 0.000899s | 0.000906s | 0.000904s | byte equality observed |
| mul_qv_test.test | 10 | 0.000915s | 0.000920s | 0.000922s | byte equality observed |
| mul_sm_test.test | 10 | 0.000904s | 0.000900s | 0.000908s | byte equality observed |
| mul_sv_test.test | 10 | 0.000906s | 0.000913s | 0.000909s | byte equality observed |
| mul_vm_test.test | 10 | 0.000909s | 0.000911s | 0.000900s | byte equality observed |
| mul_vs_test.test | 10 | 0.000905s | 0.000897s | 0.000907s | byte equality observed |
| neg_col_test.test | 10 | 0.000915s | 0.000900s | 0.000912s | byte equality observed |
| neg_row_test.test | 10 | 0.000895s | 0.000897s | 0.000910s | byte equality observed |
| normalize_q_test.test | 10 | 0.000913s | 0.000913s | 0.000893s | byte equality observed |
| normalize_v_test.test | 10 | 0.000909s | 0.000911s | 0.000901s | byte equality observed |
| plus_eq_mm_test.test | 10 | 0.000904s | 0.000918s | 0.000902s | byte equality observed |
| plus_eq_qq_test.test | 10 | 0.000902s | 0.000905s | 0.000901s | byte equality observed |
| plus_eq_vv_test.test | 10 | 0.000904s | 0.000908s | 0.000913s | byte equality observed |
| plus_mm_test.test | 10 | 0.000903s | 0.000893s | 0.000894s | byte equality observed |
| plus_qq_test.test | 10 | 0.000899s | 0.000905s | 0.000912s | byte equality observed |
| plus_vv_test.test | 10 | 0.000909s | 0.000918s | 0.000908s | byte equality observed |
| projection_test.test | 10 | 0.000911s | 0.000911s | 0.000902s | byte equality observed |
| quat_traits_array_test.test | 10 | 0.000910s | 0.000907s | 0.000902s | byte equality observed |
| quat_traits_std_array_test.test | 10 | 0.000907s | 0.000907s | 0.000914s | byte equality observed |
| rot_mat_test.test | 1 | 0.023981s | 0.026405s | 0.030307s | byte equality observed |
| rot_quat_test.test | 10 | 0.000919s | 0.000926s | 0.000937s | byte equality observed |
| rotx_mat_test.test | 10 | 0.000937s | 0.000929s | 0.000929s | byte equality observed |
| rotx_quat_test.test | 10 | 0.000921s | 0.000920s | 0.000919s | byte equality observed |
| roty_mat_test.test | 10 | 0.000929s | 0.000929s | 0.000930s | byte equality observed |
| roty_quat_test.test | 10 | 0.000918s | 0.000918s | 0.000920s | byte equality observed |
| rotz_mat_test.test | 10 | 0.000930s | 0.000935s | 0.000931s | byte equality observed |
| rotz_quat_test.test | 10 | 0.000924s | 0.000920s | 0.000919s | byte equality observed |
| row_mat_test.test | 10 | 0.000908s | 0.000900s | 0.000902s | byte equality observed |
| row_test.test | 10 | 0.000910s | 0.000908s | 0.000904s | byte equality observed |
| scalar_cast_m_test.test | 10 | 0.000905s | 0.000892s | 0.000901s | byte equality observed |
| scalar_cast_q_test.test | 10 | 0.000902s | 0.000903s | 0.000906s | byte equality observed |
| scalar_cast_v_test.test | 10 | 0.000908s | 0.000916s | 0.000910s | byte equality observed |
| slerp_test.test | 2 | 0.013215s | 0.011213s | 0.011912s | byte equality observed |
| swap_cols_test.test | 10 | 0.000918s | 0.000908s | 0.000904s | byte equality observed |
| swap_rows_test.test | 10 | 0.000924s | 0.000901s | 0.000911s | byte equality observed |
| swizzle2_test.test | 10 | 0.000907s | 0.000897s | 0.000904s | byte equality observed |
| swizzle2_test2.test | 10 | 0.000898s | 0.000908s | 0.000894s | byte equality observed |
| swizzle2_test3.test | 10 | 0.000905s | 0.000906s | 0.000905s | byte equality observed |
| swizzle2_test4.test | 10 | 0.000906s | 0.000903s | 0.000900s | byte equality observed |
| swizzle3_test.test | 10 | 0.000906s | 0.000907s | 0.000911s | byte equality observed |
| swizzle3_test2.test | 10 | 0.000899s | 0.000914s | 0.000900s | byte equality observed |
| swizzle3_test3.test | 10 | 0.000908s | 0.000909s | 0.000905s | byte equality observed |
| swizzle3_test4.test | 10 | 0.000903s | 0.000896s | 0.000905s | byte equality observed |
| swizzle4_test.test | 10 | 0.000911s | 0.000900s | 0.000905s | byte equality observed |
| swizzle4_test2.test | 10 | 0.000902s | 0.000905s | 0.000915s | byte equality observed |
| swizzle4_test3.test | 10 | 0.000899s | 0.000897s | 0.000902s | byte equality observed |
| swizzle4_test4.test | 10 | 0.000908s | 0.000889s | 0.000906s | byte equality observed |
| to_string_test.test | 10 | 0.000947s | 0.000951s | 0.000944s | byte equality observed |
| transform_test.test | 10 | 0.000914s | 0.000904s | 0.000905s | byte equality observed |
| translation_mat_test.test | 10 | 0.000910s | 0.000905s | 0.000913s | byte equality observed |
| translation_test.test | 10 | 0.000912s | 0.000908s | 0.000894s | byte equality observed |
| transpose_test.test | 10 | 0.000906s | 0.000913s | 0.000903s | byte equality observed |
| vec_index_test.test | 10 | 0.000916s | 0.000896s | 0.000910s | byte equality observed |
| vec_register_test.test | 10 | 0.000901s | 0.000899s | 0.000900s | byte equality observed |
| vec_traits_array_test.test | 10 | 0.000898s | 0.000916s | 0.000907s | byte equality observed |
| vec_traits_gnuc_test.test | 10 | 0.000903s | 0.000910s | 0.000905s | byte equality observed |
| vec_traits_std_array_test.test | 10 | 0.000897s | 0.000901s | 0.000917s | byte equality observed |
| zero_mat_test.test | 10 | 0.000912s | 0.000906s | 0.000906s | byte equality observed |
| zero_quat_test.test | 10 | 0.000902s | 0.000907s | 0.000895s | byte equality observed |
| zero_vec_test.test | 10 | 0.000903s | 0.000897s | 0.000910s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/43796354412).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
