# libs/qvm/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| math_test.test | RUN | 0.332165 | 0.863502 | 1.202528 | 0.002625 | 0.002368 | 0.002582 |
| mat_traits_array_test.test | RUN | 0.258604 | 0.865555 | 0.955081 | 0.001692 | 0.001848 | 0.001550 |
| mat_traits_std_array_test.test | RUN | 0.261161 | 0.679581 | 0.955630 | 0.001894 | 0.001978 | 0.001696 |
| vec_traits_array_test.test | RUN | 0.223591 | 0.691896 | 0.833893 | 0.001771 | 0.001960 | 0.001903 |
| vec_traits_gnuc_test.test | RUN | 0.419195 | 0.875326 | 1.674140 | 0.001668 | 0.001968 | 0.002048 |
| vec_traits_std_array_test.test | RUN | 0.221019 | 0.532606 | 0.821635 | 0.001912 | 0.001953 | 0.001304 |
| quat_traits_array_test.test | RUN | 0.218138 | 0.726549 | 0.814022 | 0.001738 | 0.001842 | 0.001573 |
| quat_traits_std_array_test.test | RUN | 0.217986 | 0.544426 | 0.827420 | 0.001892 | 0.001848 | 0.001869 |
| access_m_test.test | RUN | 0.359780 | 1.331053 | 1.733848 | 0.001889 | 0.001928 | 0.002098 |
| access_m_fail1.test | COMPILE_FAIL | 0.033765 | 0.056469 | 0.122572 | — | — | — |
| access_m_fail2.test | COMPILE_FAIL | 0.034640 | 0.056423 | 0.128421 | — | — | — |
| access_q_test.test | RUN | 0.297861 | 0.656147 | 1.087350 | 0.001580 | 0.002066 | 0.002108 |
| access_q_fail.test | COMPILE_FAIL | 0.026480 | 0.048632 | 0.096369 | — | — | — |
| access_v_test.test | RUN | 0.296697 | 0.696749 | 1.054542 | 0.001822 | 0.001895 | 0.001923 |
| access_v_fail1.test | COMPILE_FAIL | 0.024046 | 0.043000 | 0.086917 | — | — | — |
| access_v_fail2.test | COMPILE_FAIL | 0.023285 | 0.043657 | 0.080873 | — | — | — |
| assign_test.test | RUN | 0.454188 | 1.117527 | 1.831528 | 0.002008 | 0.002144 | 0.002072 |
| to_string_test.test | RUN | 0.524371 | 1.793096 | 10.187896 | 0.001670 | 0.002003 | 0.002158 |
| cmp_vv_test.test | RUN | 0.367306 | 0.884703 | 1.336908 | 0.001876 | 0.001878 | 0.001919 |
| cross_test.test | RUN | 0.365878 | 0.829379 | 1.294677 | 0.001766 | 0.001997 | 0.002075 |
| div_eq_vs_test.test | RUN | 0.335372 | 0.756012 | 1.267402 | 0.001816 | 0.002072 | 0.002077 |
| div_vs_test.test | RUN | 0.348353 | 0.899172 | 1.344291 | 0.001993 | 0.002158 | 0.001951 |
| dot_vv_test.test | RUN | 0.336691 | 0.821469 | 1.204422 | 0.001728 | 0.001974 | 0.002179 |
| eq_vv_test.test | RUN | 0.372405 | 0.949117 | 1.370174 | 0.001801 | 0.001931 | 0.001789 |
| mag_v_test.test | RUN | 0.333497 | 0.768485 | 1.156108 | 0.001748 | 0.002060 | 0.001744 |
| mag_sqr_v_test.test | RUN | 0.330574 | 0.780692 | 1.240118 | 0.001886 | 0.001801 | 0.002090 |
| minus_v_test.test | RUN | 0.344317 | 0.906670 | 1.294368 | 0.001806 | 0.002002 | 0.001927 |
| minus_eq_vv_test.test | RUN | 0.339482 | 0.880288 | 1.192013 | 0.001758 | 0.002072 | 0.001714 |
| minus_vv_test.test | RUN | 0.355698 | 0.955388 | 1.355819 | 0.001923 | 0.001951 | 0.002126 |
| mul_eq_vs_test.test | RUN | 0.332831 | 0.759875 | 1.285295 | 0.001744 | 0.002144 | 0.001731 |
| mul_vs_test.test | RUN | 0.360724 | 0.946442 | 1.321222 | 0.001604 | 0.002104 | 0.002026 |
| mul_sv_test.test | RUN | 0.354818 | 0.937204 | 1.295170 | 0.001724 | 0.002296 | 0.002052 |
| mul_vm_test.test | RUN | 0.488958 | 1.664041 | 1.917347 | 0.001947 | 0.001900 | 0.002188 |
| normalize_v_test.test | RUN | 0.355605 | 1.112316 | 1.387283 | 0.001954 | 0.002076 | 0.001554 |
| plus_eq_vv_test.test | RUN | 0.341962 | 0.870020 | 1.280332 | 0.001566 | 0.001984 | 0.001900 |
| plus_vv_test.test | RUN | 0.351719 | 0.938190 | 1.326288 | 0.001619 | 0.002184 | 0.002036 |
| scalar_cast_v_test.test | RUN | 0.324450 | 0.698862 | 1.190196 | 0.001786 | 0.001906 | 0.001592 |
| vec_index_test.test | RUN | 0.283164 | 0.699854 | 1.012125 | 0.001688 | 0.001958 | 0.001705 |
| vec_register_test.test | RUN | 0.188075 | 0.639175 | 0.758808 | 0.001535 | 0.001844 | 0.001579 |
| cmp_mm_test.test | RUN | 0.554404 | 2.018955 | 2.594437 | 0.002134 | 0.002211 | 0.002098 |
| determinant_test.test | RUN | 0.396667 | 1.042549 | 1.464814 | 0.001881 | 0.002059 | 0.002010 |
| div_eq_ms_test.test | RUN | 0.399767 | 0.993234 | 1.654165 | 0.001774 | 0.002003 | 0.002099 |
| div_ms_test.test | RUN | 0.467352 | 1.533419 | 2.031801 | 0.001691 | 0.001931 | 0.001984 |
| eq_mm_test.test | RUN | 0.536721 | 1.876265 | 2.398271 | 0.002062 | 0.001786 | 0.001787 |
| minus_m_test.test | RUN | 0.462411 | 1.495161 | 1.843031 | 0.001762 | 0.002100 | 0.002155 |
| minus_eq_mm_test.test | RUN | 0.434742 | 1.376117 | 1.770934 | 0.001675 | 0.001950 | 0.001864 |
| minus_mm_test.test | RUN | 0.485978 | 1.768694 | 2.077107 | 0.001966 | 0.002121 | 0.002121 |
| mul_eq_mm_test.test | RUN | 0.416042 | 1.316364 | 1.578773 | 0.002092 | 0.001925 | 0.002080 |
| mul_eq_ms_test.test | RUN | 0.414742 | 0.965945 | 1.623475 | 0.002016 | 0.002121 | 0.002127 |
| mul_mm_test.test | RUN | 0.586526 | 2.878306 | 2.633069 | 0.001894 | 0.002016 | 0.002104 |
| mul_ms_test.test | RUN | 0.479628 | 1.547013 | 2.146585 | 0.001746 | 0.001992 | 0.002060 |
| mul_sm_test.test | RUN | 0.486304 | 1.512981 | 1.917195 | 0.002002 | 0.002036 | 0.002039 |
| mul_mv_test.test | RUN | 0.501387 | 1.648582 | 2.106595 | 0.001935 | 0.001696 | 0.002074 |
| inverse_m_test.test | RUN | 0.634025 | 2.941647 | 2.711124 | 0.002054 | 0.001499 | 0.002046 |
| plus_eq_mm_test.test | RUN | 0.439009 | 1.415027 | 1.797769 | 0.001801 | 0.002096 | 0.002148 |
| plus_mm_test.test | RUN | 0.511153 | 1.748482 | 2.086242 | 0.001978 | 0.002106 | 0.002110 |
| scalar_cast_m_test.test | RUN | 0.387404 | 0.791403 | 1.318222 | 0.001904 | 0.002068 | 0.001866 |
| mat_index_test.test | RUN | 0.306800 | 0.760236 | 1.123940 | 0.001762 | 0.002079 | 0.002053 |
| cmp_qq_test.test | RUN | 0.337855 | 0.718829 | 1.172031 | 0.002037 | 0.001846 | 0.001772 |
| conjugate_test.test | RUN | 0.330183 | 0.739920 | 1.196330 | 0.001944 | 0.001952 | 0.002130 |
| normalize_q_test.test | RUN | 0.338702 | 0.822450 | 1.176158 | 0.002040 | 0.001778 | 0.001925 |
| div_eq_qs_test.test | RUN | 0.330208 | 0.700895 | 1.149626 | 0.001816 | 0.001967 | 0.002017 |
| div_qs_test.test | RUN | 0.336347 | 0.745033 | 1.199743 | 0.001913 | 0.002018 | 0.002075 |
| dot_qq_test.test | RUN | 0.337173 | 0.711015 | 1.188272 | 0.001917 | 0.002046 | 0.001692 |
| eq_qq_test.test | RUN | 0.335980 | 0.762141 | 1.182780 | 0.001958 | 0.001890 | 0.001664 |
| inverse_q_test.test | RUN | 0.395190 | 0.989375 | 1.499947 | 0.001830 | 0.002116 | 0.002018 |
| mag_q_test.test | RUN | 0.329767 | 0.742770 | 1.122949 | 0.001973 | 0.001799 | 0.001925 |
| mag_sqr_q_test.test | RUN | 0.332737 | 0.715239 | 1.199862 | 0.001888 | 0.002096 | 0.001880 |
| minus_q_test.test | RUN | 0.334330 | 0.729357 | 1.191301 | 0.001999 | 0.002075 | 0.001920 |
| minus_eq_qq_test.test | RUN | 0.324120 | 0.755550 | 1.152195 | 0.001578 | 0.001880 | 0.002046 |
| minus_qq_test.test | RUN | 0.344236 | 0.749510 | 1.203297 | 0.001890 | 0.002121 | 0.001629 |
| mul_eq_qs_test.test | RUN | 0.333652 | 0.686815 | 1.142538 | 0.001902 | 0.002162 | 0.001944 |
| mul_qs_test.test | RUN | 0.327269 | 0.717652 | 1.179267 | 0.001954 | 0.002180 | 0.001845 |
| mul_qv_test.test | RUN | 0.408071 | 1.016860 | 1.527352 | 0.001810 | 0.002063 | 0.001888 |
| mul_qq_test.test | RUN | 0.391702 | 1.018670 | 1.447201 | 0.002092 | 0.002092 | 0.002092 |
| mul_eq_qq_test.test | RUN | 0.399066 | 1.029149 | 1.465412 | 0.001951 | 0.001910 | 0.001932 |
| plus_eq_qq_test.test | RUN | 0.333913 | 0.728381 | 1.180187 | 0.001893 | 0.001910 | 0.001711 |
| plus_qq_test.test | RUN | 0.343345 | 0.731846 | 1.145035 | 0.001853 | 0.002228 | 0.002006 |
| scalar_cast_q_test.test | RUN | 0.339270 | 0.682829 | 1.155275 | 0.001954 | 0.002084 | 0.002142 |
| slerp_test.test | RUN | 0.362649 | 1.418554 | 1.374669 | 0.025328 | 0.020611 | 0.021396 |
| convert_to_test.test | RUN | 0.496701 | 1.298598 | 2.123832 | 0.002009 | 0.002132 | 0.002070 |
| rot_mat_test.test | RUN | 0.724374 | 5.755130 | 5.940213 | 0.059273 | 0.054234 | 0.050905 |
| rot_quat_test.test | RUN | 0.406745 | 1.194333 | 1.499352 | 0.002071 | 0.002162 | 0.002122 |
| rotx_mat_test.test | RUN | 0.456690 | 1.566213 | 1.945738 | 0.001922 | 0.002002 | 0.001985 |
| rotx_quat_test.test | RUN | 0.386037 | 1.010701 | 1.434996 | 0.001877 | 0.002066 | 0.002038 |
| roty_mat_test.test | RUN | 0.454099 | 1.554963 | 1.968450 | 0.002034 | 0.002293 | 0.001995 |
| roty_quat_test.test | RUN | 0.403265 | 1.009053 | 1.276931 | 0.001884 | 0.002094 | 0.001737 |
| rotz_mat_test.test | RUN | 0.480023 | 1.762947 | 1.982558 | 0.001651 | 0.001913 | 0.002216 |
| rotz_quat_test.test | RUN | 0.414185 | 1.026125 | 1.403584 | 0.001983 | 0.001620 | 0.002109 |
| zero_vec_test.test | RUN | 0.346508 | 0.865966 | 1.118159 | 0.002135 | 0.001698 | 0.001978 |
| zero_mat_test.test | RUN | 0.421995 | 1.425858 | 1.721659 | 0.001880 | 0.002154 | 0.002051 |
| zero_quat_test.test | RUN | 0.327509 | 0.713181 | 1.176673 | 0.001757 | 0.001880 | 0.002092 |
| identity_mat_test.test | RUN | 0.393710 | 1.086658 | 1.379503 | 0.001884 | 0.002044 | 0.001877 |
| identity_quat_test.test | RUN | 0.329103 | 0.689923 | 1.134697 | 0.001915 | 0.002108 | 0.001891 |
| col_test.test | RUN | 0.628293 | 2.235980 | 3.144633 | 0.001756 | 0.001890 | 0.002072 |
| col_mat_test.test | RUN | 0.415879 | 1.034797 | 1.540177 | 0.001830 | 0.002096 | 0.002036 |
| neg_col_test.test | RUN | 0.475014 | 1.384644 | 1.936062 | 0.001781 | 0.002177 | 0.001925 |
| neg_row_test.test | RUN | 0.489492 | 1.460282 | 1.994975 | 0.001952 | 0.001546 | 0.001980 |
| del_col_test.test | RUN | 0.497648 | 1.555376 | 1.986886 | 0.001889 | 0.002144 | 0.002118 |
| del_row_test.test | RUN | 0.498728 | 1.566731 | 2.030510 | 0.001865 | 0.001999 | 0.002096 |
| del_row_col_test.test | RUN | 0.692816 | 2.990603 | 3.738329 | 0.002024 | 0.001974 | 0.001872 |
| swap_cols_test.test | RUN | 0.944941 | 3.949312 | 4.623680 | 0.001884 | 0.001862 | 0.002064 |
| swap_rows_test.test | RUN | 1.002694 | 4.140613 | 4.498883 | 0.002080 | 0.001998 | 0.002031 |
| diag_test.test | RUN | 0.421336 | 1.051859 | 1.676361 | 0.001836 | 0.001986 | 0.001758 |
| diag_mat_test.test | RUN | 0.440087 | 1.056815 | 1.666019 | 0.001923 | 0.002039 | 0.001728 |
| row_test.test | RUN | 0.646109 | 2.166826 | 3.284974 | 0.001926 | 0.002200 | 0.002064 |
| row_mat_test.test | RUN | 0.411653 | 0.989055 | 1.457823 | 0.001964 | 0.001874 | 0.002062 |
| transpose_test.test | RUN | 0.486825 | 1.528093 | 2.039520 | 0.001858 | 0.002082 | 0.002050 |
| translation_test.test | RUN | 0.392233 | 0.978415 | 1.529118 | 0.001896 | 0.002032 | 0.002122 |
| translation_mat_test.test | RUN | 0.433814 | 0.997574 | 1.632001 | 0.001951 | 0.001893 | 0.001742 |
| swizzle_const_fail.test | COMPILE_FAIL | 0.149481 | 0.283792 | 0.478726 | — | — | — |
| swizzle2_test2.test | RUN | 0.178767 | 0.403218 | 0.615559 | 0.001676 | 0.001749 | 0.002216 |
| swizzle2_test3.test | RUN | 0.174131 | 0.417648 | 0.616381 | 0.001939 | 0.001828 | 0.001679 |
| swizzle2_test4.test | RUN | 0.176509 | 0.406990 | 0.609405 | 0.001650 | 0.002192 | 0.002050 |
| swizzle2_test.test | RUN | 0.564719 | 1.171927 | 2.116375 | 0.001895 | 0.002160 | 0.002094 |
| swizzle3_test2.test | RUN | 0.199481 | 0.459142 | 0.706473 | 0.001718 | 0.001896 | 0.001895 |
| swizzle3_test3.test | RUN | 0.196807 | 0.447580 | 0.722875 | 0.001550 | 0.001954 | 0.001854 |
| swizzle3_test4.test | RUN | 0.198405 | 0.439892 | 0.739113 | 0.001740 | 0.002078 | 0.001815 |
| swizzle3_test.test | RUN | 0.551157 | 1.203506 | 2.137186 | 0.001768 | 0.001760 | 0.002101 |
| swizzle4_test2.test | RUN | 0.327876 | 0.664531 | 1.294007 | 0.001787 | 0.002112 | 0.002005 |
| swizzle4_test3.test | RUN | 0.341039 | 0.687631 | 1.239610 | 0.001814 | 0.001878 | 0.001612 |
| swizzle4_test4.test | RUN | 0.342996 | 0.634733 | 1.179437 | 0.001730 | 0.002012 | 0.001998 |
| swizzle4_test.test | RUN | 0.584824 | 1.316925 | 2.278857 | 0.002088 | 0.002062 | 0.002040 |
| deduce_scalar_test.test | COMPILE | 0.029839 | 0.063291 | 0.106851 | — | — | — |
| deduce_scalar_mq_test.test | RUN | 0.210147 | 0.500399 | 0.788478 | 0.001770 | 0.001585 | 0.001948 |
| deduce_scalar_mv_test.test | RUN | 0.263652 | 0.551758 | 0.861658 | 0.001793 | 0.001826 | 0.002046 |
| deduce_scalar_fail.test | COMPILE_FAIL | 0.023407 | 0.037873 | 0.080190 | — | — | — |
| deduce_mat_test.test | COMPILE | 0.025819 | 0.055186 | 0.089123 | — | — | — |
| deduce_quat_test.test | COMPILE | 0.024627 | 0.054870 | 0.089968 | — | — | — |
| deduce_vec_test.test | COMPILE | 0.025048 | 0.054743 | 0.086956 | — | — | — |
| interop_test.test | RUN | 0.265095 | 0.724171 | 1.202009 | 0.000659 | 0.000698 | 0.001448 |
| transform_test.test | RUN | 0.500937 | 1.032205 | 1.833710 | 0.001403 | 0.001555 | 0.001331 |
| projection_test.test | RUN | 0.339748 | 0.700817 | 1.256795 | 0.001455 | 0.001507 | 0.001502 |
| scalar_traits_test.test | COMPILE | 0.028080 | 0.055931 | 0.096961 | — | — | — |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.972× | 0.979×, 0.965× | 0.996× |
| clang | 1.093× | 1.084×, 1.102× | 0.998× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1359 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/43785224349).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| access_m_test.test | 10 | 0.001207s | 0.001238s | 0.001263s | byte equality observed |
| access_q_test.test | 10 | 0.001243s | 0.001257s | 0.001194s | byte equality observed |
| access_v_test.test | 10 | 0.001248s | 0.001237s | 0.001240s | byte equality observed |
| assign_test.test | 10 | 0.001213s | 0.001218s | 0.001310s | byte equality observed |
| cmp_mm_test.test | 10 | 0.001208s | 0.001293s | 0.001205s | byte equality observed |
| cmp_qq_test.test | 10 | 0.001201s | 0.001248s | 0.001221s | byte equality observed |
| cmp_vv_test.test | 10 | 0.001225s | 0.001270s | 0.001218s | byte equality observed |
| col_mat_test.test | 10 | 0.001220s | 0.001254s | 0.001244s | byte equality observed |
| col_test.test | 10 | 0.001253s | 0.001301s | 0.001235s | byte equality observed |
| conjugate_test.test | 10 | 0.001266s | 0.001303s | 0.001251s | byte equality observed |
| convert_to_test.test | 10 | 0.001257s | 0.001269s | 0.001226s | byte equality observed |
| cross_test.test | 10 | 0.001271s | 0.001238s | 0.001245s | byte equality observed |
| deduce_scalar_mq_test.test | 10 | 0.001224s | 0.001268s | 0.001235s | byte equality observed |
| deduce_scalar_mv_test.test | 10 | 0.001213s | 0.001268s | 0.001215s | byte equality observed |
| del_col_test.test | 10 | 0.001227s | 0.001217s | 0.001229s | byte equality observed |
| del_row_col_test.test | 10 | 0.001275s | 0.001212s | 0.001214s | byte equality observed |
| del_row_test.test | 10 | 0.001251s | 0.001213s | 0.001254s | byte equality observed |
| determinant_test.test | 10 | 0.001273s | 0.001230s | 0.001255s | byte equality observed |
| diag_mat_test.test | 10 | 0.001239s | 0.001217s | 0.001232s | byte equality observed |
| diag_test.test | 10 | 0.001247s | 0.001245s | 0.001233s | byte equality observed |
| div_eq_ms_test.test | 10 | 0.001226s | 0.001301s | 0.001255s | byte equality observed |
| div_eq_qs_test.test | 10 | 0.001226s | 0.001237s | 0.001220s | byte equality observed |
| div_eq_vs_test.test | 10 | 0.001235s | 0.001212s | 0.001280s | byte equality observed |
| div_ms_test.test | 10 | 0.001259s | 0.001247s | 0.001282s | byte equality observed |
| div_qs_test.test | 10 | 0.001246s | 0.001251s | 0.001254s | byte equality observed |
| div_vs_test.test | 10 | 0.001234s | 0.001210s | 0.001244s | byte equality observed |
| dot_qq_test.test | 10 | 0.001244s | 0.001223s | 0.001261s | byte equality observed |
| dot_vv_test.test | 10 | 0.001222s | 0.001259s | 0.001224s | byte equality observed |
| eq_mm_test.test | 10 | 0.001203s | 0.001272s | 0.001248s | byte equality observed |
| eq_qq_test.test | 10 | 0.001223s | 0.001253s | 0.001232s | byte equality observed |
| eq_vv_test.test | 10 | 0.001272s | 0.001235s | 0.001219s | byte equality observed |
| identity_mat_test.test | 10 | 0.001280s | 0.001251s | 0.001244s | byte equality observed |
| identity_quat_test.test | 10 | 0.001232s | 0.001249s | 0.001237s | byte equality observed |
| interop_test.test | 10 | 0.000574s | 0.000558s | 0.001216s | byte equality observed |
| inverse_m_test.test | 10 | 0.001280s | 0.001278s | 0.001308s | byte equality observed |
| inverse_q_test.test | 10 | 0.001259s | 0.001276s | 0.001208s | byte equality observed |
| mag_q_test.test | 10 | 0.001232s | 0.001183s | 0.001238s | byte equality observed |
| mag_sqr_q_test.test | 10 | 0.001284s | 0.001224s | 0.001255s | byte equality observed |
| mag_sqr_v_test.test | 10 | 0.001250s | 0.001220s | 0.001192s | byte equality observed |
| mag_v_test.test | 10 | 0.001237s | 0.001239s | 0.001211s | byte equality observed |
| mat_index_test.test | 10 | 0.001253s | 0.001271s | 0.001208s | byte equality observed |
| mat_traits_array_test.test | 10 | 0.001221s | 0.001212s | 0.001192s | byte equality observed |
| mat_traits_std_array_test.test | 10 | 0.001212s | 0.001229s | 0.001213s | byte equality observed |
| math_test.test | 9 | 0.001868s | 0.001774s | 0.001621s | byte equality observed |
| minus_eq_mm_test.test | 10 | 0.001208s | 0.001237s | 0.001233s | byte equality observed |
| minus_eq_qq_test.test | 10 | 0.001237s | 0.001229s | 0.001224s | byte equality observed |
| minus_eq_vv_test.test | 10 | 0.001255s | 0.001209s | 0.001255s | byte equality observed |
| minus_m_test.test | 10 | 0.001235s | 0.001226s | 0.001239s | byte equality observed |
| minus_mm_test.test | 10 | 0.001251s | 0.001218s | 0.001229s | byte equality observed |
| minus_q_test.test | 10 | 0.001236s | 0.001218s | 0.001267s | byte equality observed |
| minus_qq_test.test | 10 | 0.001249s | 0.001215s | 0.001262s | byte equality observed |
| minus_v_test.test | 10 | 0.001220s | 0.001219s | 0.001221s | byte equality observed |
| minus_vv_test.test | 10 | 0.001236s | 0.001267s | 0.001248s | byte equality observed |
| mul_eq_mm_test.test | 10 | 0.001292s | 0.001272s | 0.001218s | byte equality observed |
| mul_eq_ms_test.test | 10 | 0.001253s | 0.001243s | 0.001225s | byte equality observed |
| mul_eq_qq_test.test | 10 | 0.001235s | 0.001218s | 0.001240s | byte equality observed |
| mul_eq_qs_test.test | 10 | 0.001211s | 0.001185s | 0.001201s | byte equality observed |
| mul_eq_vs_test.test | 10 | 0.001224s | 0.001179s | 0.001238s | byte equality observed |
| mul_mm_test.test | 10 | 0.001217s | 0.001216s | 0.001285s | byte equality observed |
| mul_ms_test.test | 10 | 0.001246s | 0.001267s | 0.001262s | byte equality observed |
| mul_mv_test.test | 10 | 0.001244s | 0.001209s | 0.001257s | byte equality observed |
| mul_qq_test.test | 10 | 0.001259s | 0.001255s | 0.001242s | byte equality observed |
| mul_qs_test.test | 10 | 0.001268s | 0.001218s | 0.001197s | byte equality observed |
| mul_qv_test.test | 10 | 0.001231s | 0.001246s | 0.001207s | byte equality observed |
| mul_sm_test.test | 9 | 0.001241s | 0.001243s | 0.001230s | byte equality observed |
| mul_sv_test.test | 10 | 0.001240s | 0.001221s | 0.001243s | byte equality observed |
| mul_vm_test.test | 10 | 0.001258s | 0.001278s | 0.001307s | byte equality observed |
| mul_vs_test.test | 10 | 0.001220s | 0.001288s | 0.001236s | byte equality observed |
| neg_col_test.test | 10 | 0.001223s | 0.001272s | 0.001307s | byte equality observed |
| neg_row_test.test | 10 | 0.001239s | 0.001244s | 0.001270s | byte equality observed |
| normalize_q_test.test | 10 | 0.001241s | 0.001241s | 0.001297s | byte equality observed |
| normalize_v_test.test | 10 | 0.001258s | 0.001286s | 0.001242s | byte equality observed |
| plus_eq_mm_test.test | 10 | 0.001220s | 0.001253s | 0.001427s | byte equality observed |
| plus_eq_qq_test.test | 10 | 0.001239s | 0.001232s | 0.001361s | byte equality observed |
| plus_eq_vv_test.test | 8 | 0.001244s | 0.001248s | 0.001424s | byte equality observed |
| plus_mm_test.test | 10 | 0.001240s | 0.001262s | 0.001479s | byte equality observed |
| plus_qq_test.test | 10 | 0.001268s | 0.001263s | 0.001452s | byte equality observed |
| plus_vv_test.test | 10 | 0.001244s | 0.001264s | 0.001471s | byte equality observed |
| projection_test.test | 10 | 0.001241s | 0.001236s | 0.001469s | byte equality observed |
| quat_traits_array_test.test | 10 | 0.001232s | 0.001236s | 0.001444s | byte equality observed |
| quat_traits_std_array_test.test | 10 | 0.001233s | 0.001251s | 0.001443s | byte equality observed |
| rot_mat_test.test | 1 | 0.035337s | 0.033250s | 0.045252s | byte equality observed |
| rot_quat_test.test | 10 | 0.001162s | 0.001152s | 0.001405s | byte equality observed |
| rotx_mat_test.test | 10 | 0.001186s | 0.001192s | 0.001443s | byte equality observed |
| rotx_quat_test.test | 10 | 0.001225s | 0.001219s | 0.001430s | byte equality observed |
| roty_mat_test.test | 10 | 0.001245s | 0.001247s | 0.001461s | byte equality observed |
| roty_quat_test.test | 10 | 0.001240s | 0.001250s | 0.001486s | byte equality observed |
| rotz_mat_test.test | 10 | 0.001263s | 0.001251s | 0.001467s | byte equality observed |
| rotz_quat_test.test | 10 | 0.001299s | 0.001251s | 0.001458s | byte equality observed |
| row_mat_test.test | 10 | 0.001252s | 0.001219s | 0.001519s | byte equality observed |
| row_test.test | 10 | 0.001241s | 0.001218s | 0.001488s | byte equality observed |
| scalar_cast_m_test.test | 10 | 0.001273s | 0.001235s | 0.001490s | byte equality observed |
| scalar_cast_q_test.test | 10 | 0.001247s | 0.001218s | 0.001447s | byte equality observed |
| scalar_cast_v_test.test | 10 | 0.001200s | 0.001200s | 0.001419s | byte equality observed |
| slerp_test.test | 2 | 0.016968s | 0.014845s | 0.020123s | byte equality observed |
| swap_cols_test.test | 10 | 0.001146s | 0.001277s | 0.001429s | byte equality observed |
| swap_rows_test.test | 10 | 0.001199s | 0.001344s | 0.001435s | byte equality observed |
| swizzle2_test.test | 10 | 0.001321s | 0.001383s | 0.001416s | byte equality observed |
| swizzle2_test2.test | 10 | 0.001355s | 0.001450s | 0.001439s | byte equality observed |
| swizzle2_test3.test | 10 | 0.001405s | 0.001455s | 0.001455s | byte equality observed |
| swizzle2_test4.test | 10 | 0.001418s | 0.001499s | 0.001467s | byte equality observed |
| swizzle3_test.test | 10 | 0.001447s | 0.001456s | 0.001481s | byte equality observed |
| swizzle3_test2.test | 10 | 0.001456s | 0.001467s | 0.001488s | byte equality observed |
| swizzle3_test3.test | 10 | 0.001451s | 0.001477s | 0.001455s | byte equality observed |
| swizzle3_test4.test | 10 | 0.001463s | 0.001474s | 0.001485s | byte equality observed |
| swizzle4_test.test | 10 | 0.001453s | 0.001470s | 0.001522s | byte equality observed |
| swizzle4_test2.test | 10 | 0.001469s | 0.001449s | 0.001482s | byte equality observed |
| swizzle4_test3.test | 10 | 0.001492s | 0.001472s | 0.001441s | byte equality observed |
| swizzle4_test4.test | 10 | 0.001481s | 0.001443s | 0.001482s | byte equality observed |
| to_string_test.test | 10 | 0.001533s | 0.001479s | 0.001494s | byte equality observed |
| transform_test.test | 10 | 0.001456s | 0.001461s | 0.001445s | byte equality observed |
| translation_mat_test.test | 10 | 0.001478s | 0.001459s | 0.001461s | byte equality observed |
| translation_test.test | 10 | 0.001455s | 0.001485s | 0.001488s | byte equality observed |
| transpose_test.test | 10 | 0.001481s | 0.001460s | 0.001478s | byte equality observed |
| vec_index_test.test | 10 | 0.001450s | 0.001454s | 0.001478s | byte equality observed |
| vec_register_test.test | 10 | 0.001477s | 0.001481s | 0.001451s | byte equality observed |
| vec_traits_array_test.test | 10 | 0.001487s | 0.001468s | 0.001498s | byte equality observed |
| vec_traits_gnuc_test.test | 10 | 0.001484s | 0.001477s | 0.001476s | byte equality observed |
| vec_traits_std_array_test.test | 10 | 0.001460s | 0.001442s | 0.001474s | byte equality observed |
| zero_mat_test.test | 10 | 0.001479s | 0.001444s | 0.001464s | byte equality observed |
| zero_quat_test.test | 10 | 0.001463s | 0.001500s | 0.001468s | byte equality observed |
| zero_vec_test.test | 9 | 0.001491s | 0.001479s | 0.001494s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/43785224349).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
