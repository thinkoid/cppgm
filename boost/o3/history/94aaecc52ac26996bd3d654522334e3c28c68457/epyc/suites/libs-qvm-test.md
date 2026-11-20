# libs/qvm/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| math_test.test | RUN | 0.324043 | 0.870813 | 1.195382 | 0.002363 | 0.002248 | 0.002538 |
| mat_traits_array_test.test | RUN | 0.259610 | 0.875944 | 0.924343 | 0.001760 | 0.001786 | 0.001758 |
| mat_traits_std_array_test.test | RUN | 0.257027 | 0.698746 | 0.940510 | 0.001884 | 0.001746 | 0.001613 |
| vec_traits_array_test.test | RUN | 0.226792 | 0.678512 | 0.831066 | 0.001872 | 0.001914 | 0.001669 |
| vec_traits_gnuc_test.test | RUN | 0.417197 | 0.871087 | 1.626701 | 0.001722 | 0.001816 | 0.002051 |
| vec_traits_std_array_test.test | RUN | 0.220308 | 0.531877 | 0.820605 | 0.001940 | 0.001936 | 0.001893 |
| quat_traits_array_test.test | RUN | 0.215481 | 0.712625 | 0.767961 | 0.001820 | 0.001711 | 0.001975 |
| quat_traits_std_array_test.test | RUN | 0.218265 | 0.550893 | 0.759594 | 0.001889 | 0.001818 | 0.002024 |
| access_m_test.test | RUN | 0.359145 | 1.334617 | 1.715129 | 0.001880 | 0.001882 | 0.001667 |
| access_m_fail1.test | COMPILE_FAIL | 0.035475 | 0.059045 | 0.128172 | — | — | — |
| access_m_fail2.test | COMPILE_FAIL | 0.035067 | 0.057627 | 0.127989 | — | — | — |
| access_q_test.test | RUN | 0.292388 | 0.673739 | 1.065201 | 0.002136 | 0.001920 | 0.001926 |
| access_q_fail.test | COMPILE_FAIL | 0.027250 | 0.049476 | 0.095299 | — | — | — |
| access_v_test.test | RUN | 0.297745 | 0.682438 | 1.034429 | 0.001834 | 0.001978 | 0.002098 |
| access_v_fail1.test | COMPILE_FAIL | 0.023844 | 0.043277 | 0.087021 | — | — | — |
| access_v_fail2.test | COMPILE_FAIL | 0.025321 | 0.042925 | 0.077432 | — | — | — |
| assign_test.test | RUN | 0.452523 | 1.108364 | 1.767750 | 0.001808 | 0.002124 | 0.001983 |
| to_string_test.test | RUN | 0.517414 | 1.792232 | 10.065814 | 0.001823 | 0.002000 | 0.001745 |
| cmp_vv_test.test | RUN | 0.362114 | 0.884326 | 1.315626 | 0.002089 | 0.001940 | 0.001970 |
| cross_test.test | RUN | 0.358951 | 0.823995 | 1.276628 | 0.001680 | 0.001884 | 0.002139 |
| div_eq_vs_test.test | RUN | 0.340312 | 0.750350 | 1.240135 | 0.001831 | 0.001915 | 0.002075 |
| div_vs_test.test | RUN | 0.345672 | 0.930123 | 1.321407 | 0.001750 | 0.001848 | 0.002082 |
| dot_vv_test.test | RUN | 0.343083 | 0.852563 | 1.191612 | 0.001913 | 0.001752 | 0.002036 |
| eq_vv_test.test | RUN | 0.373280 | 0.928378 | 1.311862 | 0.001693 | 0.001888 | 0.001794 |
| mag_v_test.test | RUN | 0.332752 | 0.786741 | 1.131730 | 0.001904 | 0.001733 | 0.001809 |
| mag_sqr_v_test.test | RUN | 0.334165 | 0.764612 | 1.200799 | 0.001771 | 0.001771 | 0.002070 |
| minus_v_test.test | RUN | 0.342586 | 0.882221 | 1.223528 | 0.001867 | 0.001979 | 0.001816 |
| minus_eq_vv_test.test | RUN | 0.339115 | 0.856311 | 1.254379 | 0.001657 | 0.001844 | 0.002092 |
| minus_vv_test.test | RUN | 0.353642 | 0.922044 | 1.323186 | 0.001846 | 0.001912 | 0.002108 |
| mul_eq_vs_test.test | RUN | 0.336992 | 0.749338 | 1.175853 | 0.001818 | 0.001976 | 0.001980 |
| mul_vs_test.test | RUN | 0.355582 | 0.929889 | 1.291696 | 0.001733 | 0.002236 | 0.001948 |
| mul_sv_test.test | RUN | 0.363879 | 0.916600 | 1.297955 | 0.001819 | 0.002082 | 0.002032 |
| mul_vm_test.test | RUN | 0.476499 | 1.620116 | 1.898200 | 0.001760 | 0.002110 | 0.001826 |
| normalize_v_test.test | RUN | 0.359657 | 1.133444 | 1.344921 | 0.001918 | 0.001928 | 0.001816 |
| plus_eq_vv_test.test | RUN | 0.342279 | 0.890524 | 1.241337 | 0.001774 | 0.002054 | 0.001846 |
| plus_vv_test.test | RUN | 0.361716 | 0.933514 | 1.247358 | 0.001701 | 0.002169 | 0.001774 |
| scalar_cast_v_test.test | RUN | 0.317772 | 0.708283 | 1.168493 | 0.001866 | 0.001940 | 0.001631 |
| vec_index_test.test | RUN | 0.276823 | 0.701116 | 1.002218 | 0.001854 | 0.001956 | 0.001661 |
| vec_register_test.test | RUN | 0.188439 | 0.645137 | 0.739862 | 0.001912 | 0.001912 | 0.002036 |
| cmp_mm_test.test | RUN | 0.545436 | 2.032775 | 2.549940 | 0.002066 | 0.002126 | 0.002188 |
| determinant_test.test | RUN | 0.396730 | 1.028471 | 1.472506 | 0.001943 | 0.001755 | 0.002058 |
| div_eq_ms_test.test | RUN | 0.404091 | 0.961753 | 1.627920 | 0.001746 | 0.001950 | 0.002008 |
| div_ms_test.test | RUN | 0.462271 | 1.517100 | 2.012692 | 0.001868 | 0.001836 | 0.002164 |
| eq_mm_test.test | RUN | 0.542525 | 1.866149 | 2.390474 | 0.002047 | 0.002220 | 0.002038 |
| minus_m_test.test | RUN | 0.464309 | 1.486649 | 1.896918 | 0.001843 | 0.002122 | 0.002045 |
| minus_eq_mm_test.test | RUN | 0.446302 | 1.386952 | 1.713036 | 0.001700 | 0.002064 | 0.002070 |
| minus_mm_test.test | RUN | 0.485011 | 1.758553 | 2.089551 | 0.002032 | 0.002170 | 0.002031 |
| mul_eq_mm_test.test | RUN | 0.399422 | 1.313451 | 1.549352 | 0.002036 | 0.001999 | 0.002024 |
| mul_eq_ms_test.test | RUN | 0.403491 | 0.945083 | 1.580806 | 0.001973 | 0.002068 | 0.001992 |
| mul_mm_test.test | RUN | 0.559867 | 2.883165 | 2.564338 | 0.001775 | 0.002126 | 0.001988 |
| mul_ms_test.test | RUN | 0.464873 | 1.543036 | 2.101760 | 0.001925 | 0.002033 | 0.001700 |
| mul_sm_test.test | RUN | 0.480859 | 1.532757 | 2.029063 | 0.002086 | 0.002182 | 0.001826 |
| mul_mv_test.test | RUN | 0.480412 | 1.641741 | 2.006850 | 0.002078 | 0.001793 | 0.002039 |
| inverse_m_test.test | RUN | 0.651432 | 2.889121 | 2.715008 | 0.002018 | 0.002155 | 0.002222 |
| plus_eq_mm_test.test | RUN | 0.441154 | 1.400274 | 1.791308 | 0.002037 | 0.002172 | 0.002044 |
| plus_mm_test.test | RUN | 0.484673 | 1.757980 | 2.022910 | 0.002046 | 0.001738 | 0.002163 |
| scalar_cast_m_test.test | RUN | 0.371291 | 0.806545 | 1.394914 | 0.001970 | 0.002049 | 0.001954 |
| mat_index_test.test | RUN | 0.298270 | 0.758481 | 1.091221 | 0.002000 | 0.001906 | 0.002020 |
| cmp_qq_test.test | RUN | 0.327265 | 0.735266 | 1.120758 | 0.001820 | 0.002187 | 0.002054 |
| conjugate_test.test | RUN | 0.329948 | 0.721782 | 1.115317 | 0.002113 | 0.002246 | 0.001910 |
| normalize_q_test.test | RUN | 0.340183 | 0.810608 | 1.156758 | 0.001710 | 0.001616 | 0.001942 |
| div_eq_qs_test.test | RUN | 0.322652 | 0.708575 | 1.158516 | 0.001922 | 0.001986 | 0.001954 |
| div_qs_test.test | RUN | 0.320407 | 0.731726 | 1.160355 | 0.001899 | 0.001900 | 0.001988 |
| dot_qq_test.test | RUN | 0.329386 | 0.725928 | 1.121713 | 0.001794 | 0.002132 | 0.002164 |
| eq_qq_test.test | RUN | 0.338093 | 0.733501 | 1.232145 | 0.001908 | 0.002079 | 0.002122 |
| inverse_q_test.test | RUN | 0.389534 | 1.000151 | 1.436558 | 0.001973 | 0.001904 | 0.001914 |
| mag_q_test.test | RUN | 0.327083 | 0.763300 | 1.131843 | 0.001916 | 0.002152 | 0.001929 |
| mag_sqr_q_test.test | RUN | 0.335016 | 0.722340 | 1.117111 | 0.002074 | 0.002214 | 0.002016 |
| minus_q_test.test | RUN | 0.323070 | 0.739134 | 1.169062 | 0.001854 | 0.002154 | 0.002008 |
| minus_eq_qq_test.test | RUN | 0.329793 | 0.733581 | 1.134719 | 0.001971 | 0.002181 | 0.001926 |
| minus_qq_test.test | RUN | 0.322056 | 0.768011 | 1.162248 | 0.001877 | 0.001918 | 0.001974 |
| mul_eq_qs_test.test | RUN | 0.326128 | 0.711420 | 1.131129 | 0.001948 | 0.002200 | 0.002044 |
| mul_qs_test.test | RUN | 0.328225 | 0.736581 | 1.107774 | 0.001945 | 0.002192 | 0.002210 |
| mul_qv_test.test | RUN | 0.404392 | 1.043510 | 1.524720 | 0.001952 | 0.002084 | 0.001993 |
| mul_qq_test.test | RUN | 0.387955 | 1.006563 | 1.479593 | 0.001672 | 0.002000 | 0.002004 |
| mul_eq_qq_test.test | RUN | 0.394283 | 1.045406 | 1.440146 | 0.001928 | 0.002001 | 0.001884 |
| plus_eq_qq_test.test | RUN | 0.329972 | 0.730331 | 1.191123 | 0.001751 | 0.002008 | 0.001609 |
| plus_qq_test.test | RUN | 0.327371 | 0.737653 | 1.189351 | 0.001848 | 0.001943 | 0.001674 |
| scalar_cast_q_test.test | RUN | 0.326822 | 0.684332 | 1.144411 | 0.002000 | 0.002166 | 0.001723 |
| slerp_test.test | RUN | 0.350362 | 1.414798 | 1.400482 | 0.025094 | 0.020559 | 0.021019 |
| convert_to_test.test | RUN | 0.485727 | 1.313575 | 2.024278 | 0.001749 | 0.001575 | 0.002126 |
| rot_mat_test.test | RUN | 0.727738 | 5.787335 | 6.011542 | 0.059893 | 0.054373 | 0.050794 |
| rot_quat_test.test | RUN | 0.404634 | 1.164709 | 1.564220 | 0.002404 | 0.002198 | 0.002057 |
| rotx_mat_test.test | RUN | 0.455129 | 1.576392 | 1.919054 | 0.001867 | 0.002093 | 0.001902 |
| rotx_quat_test.test | RUN | 0.393853 | 1.001717 | 1.428236 | 0.001898 | 0.002007 | 0.001967 |
| roty_mat_test.test | RUN | 0.457041 | 1.551065 | 1.895914 | 0.002221 | 0.002164 | 0.002097 |
| roty_quat_test.test | RUN | 0.393019 | 1.014990 | 1.417146 | 0.001659 | 0.002091 | 0.001947 |
| rotz_mat_test.test | RUN | 0.477639 | 1.751806 | 1.847829 | 0.001830 | 0.001883 | 0.001950 |
| rotz_quat_test.test | RUN | 0.395876 | 0.993188 | 1.371029 | 0.001845 | 0.002034 | 0.002078 |
| zero_vec_test.test | RUN | 0.337330 | 0.877609 | 1.091692 | 0.001946 | 0.001993 | 0.002020 |
| zero_mat_test.test | RUN | 0.416834 | 1.443882 | 1.630607 | 0.001624 | 0.001778 | 0.001953 |
| zero_quat_test.test | RUN | 0.317463 | 0.721372 | 1.156494 | 0.002004 | 0.001993 | 0.001968 |
| identity_mat_test.test | RUN | 0.393943 | 1.107309 | 1.536544 | 0.002062 | 0.002158 | 0.001666 |
| identity_quat_test.test | RUN | 0.318354 | 0.700927 | 1.100562 | 0.001933 | 0.002142 | 0.001605 |
| col_test.test | RUN | 0.623477 | 2.260927 | 3.120517 | 0.002085 | 0.001967 | 0.002134 |
| col_mat_test.test | RUN | 0.402600 | 1.009395 | 1.581014 | 0.002030 | 0.002163 | 0.002010 |
| neg_col_test.test | RUN | 0.480474 | 1.437408 | 1.962494 | 0.001791 | 0.001973 | 0.001854 |
| neg_row_test.test | RUN | 0.503526 | 1.418015 | 1.955519 | 0.002042 | 0.001961 | 0.001696 |
| del_col_test.test | RUN | 0.503419 | 1.598559 | 1.957499 | 0.002014 | 0.002062 | 0.002110 |
| del_row_test.test | RUN | 0.496668 | 1.534602 | 2.000086 | 0.001922 | 0.002168 | 0.002061 |
| del_row_col_test.test | RUN | 0.694057 | 2.944655 | 3.788352 | 0.002003 | 0.002014 | 0.001690 |
| swap_cols_test.test | RUN | 0.922995 | 3.918947 | 4.477869 | 0.001746 | 0.002187 | 0.001952 |
| swap_rows_test.test | RUN | 0.994349 | 4.117291 | 4.397512 | 0.002004 | 0.001895 | 0.002047 |
| diag_test.test | RUN | 0.412500 | 1.068862 | 1.639304 | 0.001876 | 0.002146 | 0.001763 |
| diag_mat_test.test | RUN | 0.421044 | 1.081657 | 1.633570 | 0.001803 | 0.002026 | 0.002078 |
| row_test.test | RUN | 0.624609 | 2.254462 | 3.249151 | 0.001842 | 0.001980 | 0.002028 |
| row_mat_test.test | RUN | 0.414476 | 0.985099 | 1.449279 | 0.002033 | 0.001896 | 0.002094 |
| transpose_test.test | RUN | 0.490947 | 1.545232 | 2.018228 | 0.001801 | 0.002113 | 0.001692 |
| translation_test.test | RUN | 0.390781 | 0.971151 | 1.507489 | 0.001789 | 0.001798 | 0.001904 |
| translation_mat_test.test | RUN | 0.426173 | 1.029004 | 1.628646 | 0.001762 | 0.001795 | 0.001684 |
| swizzle_const_fail.test | COMPILE_FAIL | 0.146429 | 0.277678 | 0.448900 | — | — | — |
| swizzle2_test2.test | RUN | 0.180293 | 0.412584 | 0.637554 | 0.001842 | 0.002011 | 0.001880 |
| swizzle2_test3.test | RUN | 0.177767 | 0.427174 | 0.628928 | 0.001819 | 0.001842 | 0.001966 |
| swizzle2_test4.test | RUN | 0.176078 | 0.412891 | 0.630762 | 0.001726 | 0.002128 | 0.001736 |
| swizzle2_test.test | RUN | 0.558517 | 1.180324 | 2.060144 | 0.002005 | 0.001936 | 0.002020 |
| swizzle3_test2.test | RUN | 0.196076 | 0.452672 | 0.654203 | 0.001863 | 0.002087 | 0.002039 |
| swizzle3_test3.test | RUN | 0.196466 | 0.436700 | 0.721098 | 0.001752 | 0.002042 | 0.001690 |
| swizzle3_test4.test | RUN | 0.197819 | 0.444838 | 0.689506 | 0.001730 | 0.002012 | 0.001979 |
| swizzle3_test.test | RUN | 0.546567 | 1.241682 | 2.012409 | 0.001862 | 0.002067 | 0.002081 |
| swizzle4_test2.test | RUN | 0.328661 | 0.676367 | 1.221611 | 0.001890 | 0.002185 | 0.002023 |
| swizzle4_test3.test | RUN | 0.337340 | 0.647550 | 1.233429 | 0.001788 | 0.001910 | 0.001693 |
| swizzle4_test4.test | RUN | 0.339799 | 0.696853 | 1.215330 | 0.001692 | 0.001862 | 0.001718 |
| swizzle4_test.test | RUN | 0.568468 | 1.332771 | 2.236967 | 0.001842 | 0.002138 | 0.002034 |
| deduce_scalar_test.test | COMPILE | 0.026847 | 0.067282 | 0.100445 | — | — | — |
| deduce_scalar_mq_test.test | RUN | 0.211886 | 0.487328 | 0.735664 | 0.001842 | 0.001758 | 0.001674 |
| deduce_scalar_mv_test.test | RUN | 0.257606 | 0.583481 | 0.941394 | 0.001932 | 0.002129 | 0.001989 |
| deduce_scalar_fail.test | COMPILE_FAIL | 0.023641 | 0.039272 | 0.070579 | — | — | — |
| deduce_mat_test.test | COMPILE | 0.025923 | 0.056822 | 0.082416 | — | — | — |
| deduce_quat_test.test | COMPILE | 0.025248 | 0.053490 | 0.078062 | — | — | — |
| deduce_vec_test.test | COMPILE | 0.026323 | 0.050114 | 0.082066 | — | — | — |
| interop_test.test | RUN | 0.269011 | 0.713131 | 1.239406 | 0.000711 | 0.000953 | 0.001393 |
| transform_test.test | RUN | 0.460614 | 0.979479 | 1.849325 | 0.001557 | 0.001447 | 0.001313 |
| projection_test.test | RUN | 0.337459 | 0.777392 | 1.282105 | 0.001398 | 0.001538 | 0.001405 |
| scalar_traits_test.test | COMPILE | 0.027334 | 0.057357 | 0.094455 | — | — | — |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.991× | 0.986×, 0.997× | 1.003× |
| clang | 1.023× | 1.029×, 1.016× | 0.989× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1360 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/thinkoid/cppgm/actions/runs/44661842949).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| access_m_test.test | 10 | 0.001249s | 0.001256s | 0.001252s | byte equality observed |
| access_q_test.test | 10 | 0.001308s | 0.001216s | 0.001288s | byte equality observed |
| access_v_test.test | 10 | 0.001284s | 0.001243s | 0.001222s | byte equality observed |
| assign_test.test | 10 | 0.001258s | 0.001251s | 0.001303s | byte equality observed |
| cmp_mm_test.test | 10 | 0.001263s | 0.001247s | 0.001302s | byte equality observed |
| cmp_qq_test.test | 10 | 0.001235s | 0.001237s | 0.001206s | byte equality observed |
| cmp_vv_test.test | 10 | 0.001231s | 0.001224s | 0.001215s | byte equality observed |
| col_mat_test.test | 10 | 0.001278s | 0.001274s | 0.001190s | byte equality observed |
| col_test.test | 9 | 0.001267s | 0.001271s | 0.001258s | byte equality observed |
| conjugate_test.test | 10 | 0.001272s | 0.001283s | 0.001240s | byte equality observed |
| convert_to_test.test | 10 | 0.001252s | 0.001239s | 0.001278s | byte equality observed |
| cross_test.test | 10 | 0.001268s | 0.001205s | 0.001334s | byte equality observed |
| deduce_scalar_mq_test.test | 10 | 0.001266s | 0.001259s | 0.001249s | byte equality observed |
| deduce_scalar_mv_test.test | 10 | 0.001227s | 0.001252s | 0.001268s | byte equality observed |
| del_col_test.test | 10 | 0.001238s | 0.001266s | 0.001293s | byte equality observed |
| del_row_col_test.test | 10 | 0.001275s | 0.001252s | 0.001273s | byte equality observed |
| del_row_test.test | 10 | 0.001226s | 0.001279s | 0.001300s | byte equality observed |
| determinant_test.test | 10 | 0.001292s | 0.001285s | 0.001301s | byte equality observed |
| diag_mat_test.test | 10 | 0.001249s | 0.001302s | 0.001308s | byte equality observed |
| diag_test.test | 10 | 0.001214s | 0.001244s | 0.001307s | byte equality observed |
| div_eq_ms_test.test | 10 | 0.001280s | 0.001208s | 0.001245s | byte equality observed |
| div_eq_qs_test.test | 10 | 0.001254s | 0.001215s | 0.001249s | byte equality observed |
| div_eq_vs_test.test | 10 | 0.001254s | 0.001214s | 0.001327s | byte equality observed |
| div_ms_test.test | 9 | 0.001249s | 0.001196s | 0.001271s | byte equality observed |
| div_qs_test.test | 10 | 0.001240s | 0.001200s | 0.001277s | byte equality observed |
| div_vs_test.test | 10 | 0.001229s | 0.001196s | 0.001262s | byte equality observed |
| dot_qq_test.test | 10 | 0.001214s | 0.001246s | 0.001263s | byte equality observed |
| dot_vv_test.test | 10 | 0.001240s | 0.001224s | 0.001316s | byte equality observed |
| eq_mm_test.test | 10 | 0.001275s | 0.001280s | 0.001271s | byte equality observed |
| eq_qq_test.test | 9 | 0.001253s | 0.001260s | 0.001268s | byte equality observed |
| eq_vv_test.test | 10 | 0.001269s | 0.001255s | 0.001285s | byte equality observed |
| identity_mat_test.test | 10 | 0.001279s | 0.001237s | 0.001287s | byte equality observed |
| identity_quat_test.test | 10 | 0.001272s | 0.001252s | 0.001232s | byte equality observed |
| interop_test.test | 10 | 0.000575s | 0.000570s | 0.001263s | byte equality observed |
| inverse_m_test.test | 10 | 0.001333s | 0.001312s | 0.001303s | byte equality observed |
| inverse_q_test.test | 10 | 0.001249s | 0.001199s | 0.001278s | byte equality observed |
| mag_q_test.test | 10 | 0.001251s | 0.001225s | 0.001330s | byte equality observed |
| mag_sqr_q_test.test | 9 | 0.001298s | 0.001251s | 0.001282s | byte equality observed |
| mag_sqr_v_test.test | 10 | 0.001267s | 0.001218s | 0.001341s | byte equality observed |
| mag_v_test.test | 10 | 0.001224s | 0.001265s | 0.001283s | byte equality observed |
| mat_index_test.test | 10 | 0.001230s | 0.001266s | 0.001273s | byte equality observed |
| mat_traits_array_test.test | 10 | 0.001254s | 0.001278s | 0.001316s | byte equality observed |
| mat_traits_std_array_test.test | 10 | 0.001225s | 0.001208s | 0.001244s | byte equality observed |
| math_test.test | 10 | 0.001869s | 0.001769s | 0.001612s | byte equality observed |
| minus_eq_mm_test.test | 10 | 0.001227s | 0.001200s | 0.001329s | byte equality observed |
| minus_eq_qq_test.test | 10 | 0.001234s | 0.001257s | 0.001248s | byte equality observed |
| minus_eq_vv_test.test | 8 | 0.001231s | 0.001209s | 0.001244s | byte equality observed |
| minus_m_test.test | 10 | 0.001215s | 0.001235s | 0.001274s | byte equality observed |
| minus_mm_test.test | 10 | 0.001224s | 0.001233s | 0.001275s | byte equality observed |
| minus_q_test.test | 10 | 0.001238s | 0.001252s | 0.001251s | byte equality observed |
| minus_qq_test.test | 10 | 0.001213s | 0.001246s | 0.001327s | byte equality observed |
| minus_v_test.test | 10 | 0.001229s | 0.001244s | 0.001280s | byte equality observed |
| minus_vv_test.test | 10 | 0.001254s | 0.001195s | 0.001330s | byte equality observed |
| mul_eq_mm_test.test | 10 | 0.001240s | 0.001234s | 0.001284s | byte equality observed |
| mul_eq_ms_test.test | 10 | 0.001226s | 0.001302s | 0.001285s | byte equality observed |
| mul_eq_qq_test.test | 10 | 0.001300s | 0.001266s | 0.001335s | byte equality observed |
| mul_eq_qs_test.test | 10 | 0.001252s | 0.001273s | 0.001361s | byte equality observed |
| mul_eq_vs_test.test | 10 | 0.001258s | 0.001269s | 0.001417s | byte equality observed |
| mul_mm_test.test | 10 | 0.001296s | 0.001227s | 0.001435s | byte equality observed |
| mul_ms_test.test | 10 | 0.001286s | 0.001312s | 0.001391s | byte equality observed |
| mul_mv_test.test | 10 | 0.001238s | 0.001302s | 0.001472s | byte equality observed |
| mul_qq_test.test | 10 | 0.001274s | 0.001250s | 0.001499s | byte equality observed |
| mul_qs_test.test | 10 | 0.001256s | 0.001295s | 0.001447s | byte equality observed |
| mul_qv_test.test | 10 | 0.001269s | 0.001248s | 0.001515s | byte equality observed |
| mul_sm_test.test | 10 | 0.001275s | 0.001172s | 0.001477s | byte equality observed |
| mul_sv_test.test | 10 | 0.001275s | 0.001200s | 0.001537s | byte equality observed |
| mul_vm_test.test | 10 | 0.001292s | 0.001223s | 0.001475s | byte equality observed |
| mul_vs_test.test | 10 | 0.001300s | 0.001214s | 0.001525s | byte equality observed |
| neg_col_test.test | 10 | 0.001288s | 0.001255s | 0.001481s | byte equality observed |
| neg_row_test.test | 10 | 0.001275s | 0.001233s | 0.001503s | byte equality observed |
| normalize_q_test.test | 10 | 0.001268s | 0.001213s | 0.001472s | byte equality observed |
| normalize_v_test.test | 10 | 0.001300s | 0.001213s | 0.001499s | byte equality observed |
| plus_eq_mm_test.test | 10 | 0.001223s | 0.001244s | 0.001473s | byte equality observed |
| plus_eq_qq_test.test | 10 | 0.001210s | 0.001256s | 0.001507s | byte equality observed |
| plus_eq_vv_test.test | 10 | 0.001260s | 0.001237s | 0.001495s | byte equality observed |
| plus_mm_test.test | 10 | 0.001285s | 0.001228s | 0.001506s | byte equality observed |
| plus_qq_test.test | 10 | 0.001262s | 0.001192s | 0.001504s | byte equality observed |
| plus_vv_test.test | 10 | 0.001243s | 0.001215s | 0.001525s | byte equality observed |
| projection_test.test | 10 | 0.001297s | 0.001218s | 0.001501s | byte equality observed |
| quat_traits_array_test.test | 10 | 0.001251s | 0.001269s | 0.001513s | byte equality observed |
| quat_traits_std_array_test.test | 10 | 0.001197s | 0.001208s | 0.001463s | byte equality observed |
| rot_mat_test.test | 1 | 0.037547s | 0.034616s | 0.045993s | byte equality observed |
| rot_quat_test.test | 10 | 0.001156s | 0.001127s | 0.001503s | byte equality observed |
| rotx_mat_test.test | 10 | 0.001182s | 0.001138s | 0.001531s | byte equality observed |
| rotx_quat_test.test | 10 | 0.001317s | 0.001223s | 0.001463s | byte equality observed |
| roty_mat_test.test | 10 | 0.001282s | 0.001324s | 0.001465s | byte equality observed |
| roty_quat_test.test | 10 | 0.001272s | 0.001267s | 0.001504s | byte equality observed |
| rotz_mat_test.test | 10 | 0.001295s | 0.001241s | 0.001483s | byte equality observed |
| rotz_quat_test.test | 10 | 0.001279s | 0.001217s | 0.001476s | byte equality observed |
| row_mat_test.test | 10 | 0.001292s | 0.001222s | 0.001476s | byte equality observed |
| row_test.test | 10 | 0.001252s | 0.001227s | 0.001495s | byte equality observed |
| scalar_cast_m_test.test | 10 | 0.001275s | 0.001272s | 0.001520s | byte equality observed |
| scalar_cast_q_test.test | 10 | 0.001272s | 0.001226s | 0.001472s | byte equality observed |
| scalar_cast_v_test.test | 10 | 0.001326s | 0.001185s | 0.001429s | byte equality observed |
| slerp_test.test | 2 | 0.019086s | 0.015759s | 0.019470s | byte equality observed |
| swap_cols_test.test | 10 | 0.001301s | 0.001176s | 0.001461s | byte equality observed |
| swap_rows_test.test | 10 | 0.001348s | 0.001271s | 0.001451s | byte equality observed |
| swizzle2_test.test | 10 | 0.001392s | 0.001375s | 0.001452s | byte equality observed |
| swizzle2_test2.test | 10 | 0.001412s | 0.001392s | 0.001435s | byte equality observed |
| swizzle2_test3.test | 10 | 0.001433s | 0.001435s | 0.001498s | byte equality observed |
| swizzle2_test4.test | 10 | 0.001442s | 0.001433s | 0.001502s | byte equality observed |
| swizzle3_test.test | 10 | 0.001458s | 0.001406s | 0.001481s | byte equality observed |
| swizzle3_test2.test | 10 | 0.001447s | 0.001435s | 0.001543s | byte equality observed |
| swizzle3_test3.test | 10 | 0.001474s | 0.001446s | 0.001506s | byte equality observed |
| swizzle3_test4.test | 10 | 0.001514s | 0.001473s | 0.001498s | byte equality observed |
| swizzle4_test.test | 10 | 0.001514s | 0.001507s | 0.001480s | byte equality observed |
| swizzle4_test2.test | 10 | 0.001432s | 0.001437s | 0.001505s | byte equality observed |
| swizzle4_test3.test | 10 | 0.001453s | 0.001440s | 0.001527s | byte equality observed |
| swizzle4_test4.test | 10 | 0.001485s | 0.001489s | 0.001508s | byte equality observed |
| to_string_test.test | 10 | 0.001511s | 0.001527s | 0.001528s | byte equality observed |
| transform_test.test | 10 | 0.001501s | 0.001505s | 0.001493s | byte equality observed |
| translation_mat_test.test | 10 | 0.001499s | 0.001475s | 0.001494s | byte equality observed |
| translation_test.test | 10 | 0.001470s | 0.001427s | 0.001471s | byte equality observed |
| transpose_test.test | 10 | 0.001488s | 0.001449s | 0.001527s | byte equality observed |
| vec_index_test.test | 10 | 0.001483s | 0.001458s | 0.001460s | byte equality observed |
| vec_register_test.test | 10 | 0.001478s | 0.001479s | 0.001530s | byte equality observed |
| vec_traits_array_test.test | 10 | 0.001470s | 0.001440s | 0.001522s | byte equality observed |
| vec_traits_gnuc_test.test | 10 | 0.001502s | 0.001455s | 0.001489s | byte equality observed |
| vec_traits_std_array_test.test | 10 | 0.001465s | 0.001454s | 0.001524s | byte equality observed |
| zero_mat_test.test | 8 | 0.001485s | 0.001508s | 0.001494s | byte equality observed |
| zero_quat_test.test | 9 | 0.001471s | 0.001467s | 0.001516s | byte equality observed |
| zero_vec_test.test | 10 | 0.001498s | 0.001474s | 0.001526s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/thinkoid/cppgm/actions/runs/44661842949).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
