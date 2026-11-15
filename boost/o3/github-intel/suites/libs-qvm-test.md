# libs/qvm/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| math_test.test | RUN | 0.188253 | 0.555517 | 0.569342 | 0.001590 | 0.001538 | 0.001371 |
| mat_traits_array_test.test | RUN | 0.144433 | 0.550728 | 0.449095 | 0.001197 | 0.001040 | 0.001014 |
| mat_traits_std_array_test.test | RUN | 0.149639 | 0.408340 | 0.453980 | 0.001086 | 0.001056 | 0.001066 |
| vec_traits_array_test.test | RUN | 0.128370 | 0.420646 | 0.385221 | 0.001068 | 0.001261 | 0.000951 |
| vec_traits_gnuc_test.test | RUN | 0.222601 | 0.506399 | 0.724831 | 0.001028 | 0.001142 | 0.001010 |
| vec_traits_std_array_test.test | RUN | 0.120961 | 0.317719 | 0.388384 | 0.001205 | 0.001410 | 0.001051 |
| quat_traits_array_test.test | RUN | 0.122467 | 0.451575 | 0.376825 | 0.001227 | 0.001134 | 0.001046 |
| quat_traits_std_array_test.test | RUN | 0.118097 | 0.333896 | 0.365001 | 0.001037 | 0.001275 | 0.001035 |
| access_m_test.test | RUN | 0.197162 | 0.775760 | 0.843325 | 0.001109 | 0.001279 | 0.001007 |
| access_m_fail1.test | COMPILE_FAIL | 0.018254 | 0.033509 | 0.051892 | — | — | — |
| access_m_fail2.test | COMPILE_FAIL | 0.018813 | 0.028903 | 0.052730 | — | — | — |
| access_q_test.test | RUN | 0.161999 | 0.402661 | 0.512413 | 0.001049 | 0.001220 | 0.001026 |
| access_q_fail.test | COMPILE_FAIL | 0.014140 | 0.025554 | 0.042262 | — | — | — |
| access_v_test.test | RUN | 0.166452 | 0.414293 | 0.505695 | 0.001063 | 0.001287 | 0.001007 |
| access_v_fail1.test | COMPILE_FAIL | 0.012619 | 0.021914 | 0.037539 | — | — | — |
| access_v_fail2.test | COMPILE_FAIL | 0.012725 | 0.023146 | 0.038416 | — | — | — |
| assign_test.test | RUN | 0.253548 | 0.669462 | 0.901446 | 0.001367 | 0.001207 | 0.001063 |
| to_string_test.test | RUN | 0.294383 | 1.129570 | 5.507290 | 0.001056 | 0.001191 | 0.001198 |
| cmp_vv_test.test | RUN | 0.215360 | 0.539068 | 0.606977 | 0.001069 | 0.001360 | 0.001016 |
| cross_test.test | RUN | 0.208846 | 0.494878 | 0.616032 | 0.001043 | 0.001273 | 0.001011 |
| div_eq_vs_test.test | RUN | 0.187560 | 0.444702 | 0.593148 | 0.001137 | 0.001294 | 0.001032 |
| div_vs_test.test | RUN | 0.202602 | 0.567986 | 0.638542 | 0.001134 | 0.001180 | 0.001054 |
| dot_vv_test.test | RUN | 0.187396 | 0.497999 | 0.574842 | 0.001198 | 0.001169 | 0.000995 |
| eq_vv_test.test | RUN | 0.218438 | 0.566072 | 0.650755 | 0.001066 | 0.001207 | 0.001101 |
| mag_v_test.test | RUN | 0.186201 | 0.455494 | 0.546043 | 0.001118 | 0.001188 | 0.000935 |
| mag_sqr_v_test.test | RUN | 0.182901 | 0.457085 | 0.564351 | 0.001160 | 0.001206 | 0.000964 |
| minus_v_test.test | RUN | 0.194515 | 0.535277 | 0.615574 | 0.001017 | 0.001172 | 0.001001 |
| minus_eq_vv_test.test | RUN | 0.200512 | 0.519556 | 0.602331 | 0.001055 | 0.001325 | 0.001090 |
| minus_vv_test.test | RUN | 0.203576 | 0.567283 | 0.639025 | 0.001169 | 0.001117 | 0.000979 |
| mul_eq_vs_test.test | RUN | 0.188630 | 0.452304 | 0.577048 | 0.001144 | 0.001129 | 0.001102 |
| mul_vs_test.test | RUN | 0.197419 | 0.556994 | 0.650435 | 0.001032 | 0.001274 | 0.001068 |
| mul_sv_test.test | RUN | 0.205166 | 0.569162 | 0.653868 | 0.001009 | 0.001296 | 0.001010 |
| mul_vm_test.test | RUN | 0.285369 | 0.999801 | 0.959063 | 0.001114 | 0.001259 | 0.001064 |
| normalize_v_test.test | RUN | 0.206664 | 0.693906 | 0.655639 | 0.001207 | 0.001330 | 0.001041 |
| plus_eq_vv_test.test | RUN | 0.188452 | 0.518814 | 0.609915 | 0.001360 | 0.001209 | 0.000945 |
| plus_vv_test.test | RUN | 0.200725 | 0.567772 | 0.638761 | 0.000938 | 0.001162 | 0.000987 |
| scalar_cast_v_test.test | RUN | 0.176747 | 0.416132 | 0.531356 | 0.000998 | 0.001101 | 0.001028 |
| vec_index_test.test | RUN | 0.163627 | 0.436885 | 0.498987 | 0.001132 | 0.001200 | 0.001038 |
| vec_register_test.test | RUN | 0.107241 | 0.385856 | 0.362536 | 0.001243 | 0.001122 | 0.001037 |
| cmp_mm_test.test | RUN | 0.328936 | 1.262816 | 1.348148 | 0.001186 | 0.001290 | 0.001043 |
| determinant_test.test | RUN | 0.218890 | 0.634636 | 0.710418 | 0.001152 | 0.001293 | 0.001004 |
| div_eq_ms_test.test | RUN | 0.229134 | 0.583619 | 0.797111 | 0.001246 | 0.001210 | 0.001035 |
| div_ms_test.test | RUN | 0.275571 | 0.930386 | 0.969129 | 0.001088 | 0.001293 | 0.001038 |
| eq_mm_test.test | RUN | 0.315352 | 1.157788 | 1.256732 | 0.001166 | 0.001181 | 0.001044 |
| minus_m_test.test | RUN | 0.268082 | 0.924387 | 0.940100 | 0.000988 | 0.001221 | 0.001085 |
| minus_eq_mm_test.test | RUN | 0.250286 | 0.850947 | 0.877035 | 0.001114 | 0.001147 | 0.001017 |
| minus_mm_test.test | RUN | 0.291915 | 1.094890 | 1.031892 | 0.001014 | 0.001110 | 0.001010 |
| mul_eq_mm_test.test | RUN | 0.232005 | 0.787507 | 0.778378 | 0.001154 | 0.001159 | 0.001021 |
| mul_eq_ms_test.test | RUN | 0.227475 | 0.572371 | 0.805089 | 0.000998 | 0.001283 | 0.001010 |
| mul_mm_test.test | RUN | 0.345355 | 1.807570 | 1.320065 | 0.001045 | 0.001278 | 0.001046 |
| mul_ms_test.test | RUN | 0.274790 | 0.945488 | 0.981674 | 0.001050 | 0.001187 | 0.001055 |
| mul_sm_test.test | RUN | 0.280337 | 0.939272 | 0.998446 | 0.001068 | 0.001288 | 0.001088 |
| mul_mv_test.test | RUN | 0.279007 | 1.006072 | 1.005082 | 0.001053 | 0.001199 | 0.001033 |
| inverse_m_test.test | RUN | 0.411361 | 1.865063 | 1.441564 | 0.001109 | 0.001270 | 0.001077 |
| plus_eq_mm_test.test | RUN | 0.257899 | 0.865678 | 0.870204 | 0.001054 | 0.001163 | 0.001084 |
| plus_mm_test.test | RUN | 0.284834 | 1.088146 | 1.034354 | 0.001016 | 0.001292 | 0.001010 |
| scalar_cast_m_test.test | RUN | 0.209780 | 0.470711 | 0.646444 | 0.001035 | 0.001294 | 0.000981 |
| mat_index_test.test | RUN | 0.174708 | 0.457618 | 0.545589 | 0.001018 | 0.001148 | 0.001058 |
| cmp_qq_test.test | RUN | 0.184291 | 0.418616 | 0.529846 | 0.001023 | 0.001305 | 0.001056 |
| conjugate_test.test | RUN | 0.186206 | 0.443463 | 0.542215 | 0.001055 | 0.001170 | 0.001027 |
| normalize_q_test.test | RUN | 0.189410 | 0.483263 | 0.575013 | 0.001028 | 0.001475 | 0.001033 |
| div_eq_qs_test.test | RUN | 0.180491 | 0.421831 | 0.547434 | 0.001061 | 0.001120 | 0.001047 |
| div_qs_test.test | RUN | 0.178945 | 0.441036 | 0.562895 | 0.001050 | 0.001246 | 0.001016 |
| dot_qq_test.test | RUN | 0.189458 | 0.430495 | 0.546442 | 0.001092 | 0.001230 | 0.001020 |
| eq_qq_test.test | RUN | 0.192032 | 0.450238 | 0.565815 | 0.001049 | 0.001156 | 0.001017 |
| inverse_q_test.test | RUN | 0.222535 | 0.599409 | 0.691509 | 0.001021 | 0.001128 | 0.001050 |
| mag_q_test.test | RUN | 0.180398 | 0.441720 | 0.547335 | 0.001012 | 0.001270 | 0.001064 |
| mag_sqr_q_test.test | RUN | 0.185562 | 0.442210 | 0.542156 | 0.000973 | 0.001268 | 0.001049 |
| minus_q_test.test | RUN | 0.188565 | 0.439024 | 0.542332 | 0.001041 | 0.001215 | 0.001014 |
| minus_eq_qq_test.test | RUN | 0.184144 | 0.436567 | 0.544943 | 0.000970 | 0.001138 | 0.001039 |
| minus_qq_test.test | RUN | 0.188860 | 0.448497 | 0.554690 | 0.001009 | 0.001216 | 0.001124 |
| mul_eq_qs_test.test | RUN | 0.177721 | 0.425844 | 0.543615 | 0.001047 | 0.001144 | 0.001033 |
| mul_qs_test.test | RUN | 0.182416 | 0.438695 | 0.546439 | 0.001062 | 0.001305 | 0.001004 |
| mul_qv_test.test | RUN | 0.231438 | 0.602160 | 0.715621 | 0.001048 | 0.001332 | 0.001084 |
| mul_qq_test.test | RUN | 0.227835 | 0.615116 | 0.696050 | 0.001020 | 0.001137 | 0.001113 |
| mul_eq_qq_test.test | RUN | 0.217538 | 0.628181 | 0.693291 | 0.001029 | 0.001139 | 0.001066 |
| plus_eq_qq_test.test | RUN | 0.184473 | 0.435159 | 0.541495 | 0.001060 | 0.001232 | 0.001028 |
| plus_qq_test.test | RUN | 0.185998 | 0.444751 | 0.546002 | 0.001008 | 0.001182 | 0.001026 |
| scalar_cast_q_test.test | RUN | 0.182539 | 0.418141 | 0.543868 | 0.001018 | 0.001169 | 0.001042 |
| slerp_test.test | RUN | 0.197970 | 0.880529 | 0.659838 | 0.014793 | 0.012506 | 0.013112 |
| convert_to_test.test | RUN | 0.279026 | 0.788822 | 1.036345 | 0.001073 | 0.001274 | 0.001022 |
| rot_mat_test.test | RUN | 0.467285 | 3.673659 | 3.267350 | 0.029243 | 0.031951 | 0.033527 |
| rot_quat_test.test | RUN | 0.223664 | 0.736926 | 0.711944 | 0.001101 | 0.001150 | 0.001017 |
| rotx_mat_test.test | RUN | 0.265535 | 0.958742 | 0.957399 | 0.001025 | 0.001249 | 0.001092 |
| rotx_quat_test.test | RUN | 0.225805 | 0.610894 | 0.660448 | 0.000993 | 0.001154 | 0.001057 |
| roty_mat_test.test | RUN | 0.264210 | 0.946041 | 0.948486 | 0.001128 | 0.001233 | 0.001087 |
| roty_quat_test.test | RUN | 0.221675 | 0.609631 | 0.624387 | 0.001152 | 0.001138 | 0.000993 |
| rotz_mat_test.test | RUN | 0.281116 | 1.072241 | 1.008103 | 0.001096 | 0.001166 | 0.001069 |
| rotz_quat_test.test | RUN | 0.227093 | 0.615309 | 0.672415 | 0.001024 | 0.001411 | 0.001083 |
| zero_vec_test.test | RUN | 0.190095 | 0.532238 | 0.553975 | 0.001091 | 0.001106 | 0.001048 |
| zero_mat_test.test | RUN | 0.242169 | 0.879880 | 0.831209 | 0.001001 | 0.001144 | 0.001086 |
| zero_quat_test.test | RUN | 0.177196 | 0.436004 | 0.554418 | 0.001078 | 0.001119 | 0.001062 |
| identity_mat_test.test | RUN | 0.224433 | 0.634162 | 0.679733 | 0.001068 | 0.001371 | 0.000993 |
| identity_quat_test.test | RUN | 0.180540 | 0.423729 | 0.540433 | 0.001006 | 0.001148 | 0.000998 |
| col_test.test | RUN | 0.362777 | 1.385681 | 1.585935 | 0.000996 | 0.001272 | 0.001046 |
| col_mat_test.test | RUN | 0.235876 | 0.615312 | 0.746277 | 0.001156 | 0.001396 | 0.001074 |
| neg_col_test.test | RUN | 0.274393 | 0.857770 | 0.947466 | 0.001058 | 0.001183 | 0.001020 |
| neg_row_test.test | RUN | 0.280715 | 0.860219 | 0.936083 | 0.001050 | 0.001274 | 0.000983 |
| del_col_test.test | RUN | 0.287342 | 0.953187 | 1.006059 | 0.001095 | 0.001327 | 0.001036 |
| del_row_test.test | RUN | 0.288930 | 0.946120 | 0.953991 | 0.001031 | 0.001268 | 0.001020 |
| del_row_col_test.test | RUN | 0.403230 | 1.761028 | 1.832098 | 0.001042 | 0.001160 | 0.001024 |
| swap_cols_test.test | RUN | 0.553903 | 2.382429 | 2.249757 | 0.001155 | 0.001125 | 0.001076 |
| swap_rows_test.test | RUN | 0.606050 | 2.479379 | 2.219576 | 0.001205 | 0.001156 | 0.001028 |
| diag_test.test | RUN | 0.245208 | 0.630085 | 0.847500 | 0.001055 | 0.001239 | 0.001116 |
| diag_mat_test.test | RUN | 0.244529 | 0.625626 | 0.758531 | 0.001053 | 0.001314 | 0.001056 |
| row_test.test | RUN | 0.363802 | 1.369503 | 1.539579 | 0.001035 | 0.001104 | 0.001017 |
| row_mat_test.test | RUN | 0.226836 | 0.599054 | 0.745630 | 0.001075 | 0.001124 | 0.000987 |
| transpose_test.test | RUN | 0.286440 | 0.921172 | 0.994656 | 0.001040 | 0.001212 | 0.001087 |
| translation_test.test | RUN | 0.225584 | 0.576760 | 0.737616 | 0.001017 | 0.001209 | 0.001001 |
| translation_mat_test.test | RUN | 0.249119 | 0.575218 | 0.797078 | 0.001111 | 0.001060 | 0.000948 |
| swizzle_const_fail.test | COMPILE_FAIL | 0.080366 | 0.169700 | 0.216935 | — | — | — |
| swizzle2_test2.test | RUN | 0.095570 | 0.252390 | 0.301106 | 0.001064 | 0.001011 | 0.001041 |
| swizzle2_test3.test | RUN | 0.096534 | 0.249807 | 0.299314 | 0.000999 | 0.001093 | 0.001022 |
| swizzle2_test4.test | RUN | 0.098075 | 0.247462 | 0.302080 | 0.001051 | 0.001251 | 0.001082 |
| swizzle2_test.test | RUN | 0.312009 | 0.678966 | 0.947586 | 0.001086 | 0.001234 | 0.001067 |
| swizzle3_test2.test | RUN | 0.106845 | 0.267293 | 0.334674 | 0.001074 | 0.001170 | 0.001158 |
| swizzle3_test3.test | RUN | 0.109526 | 0.267166 | 0.332043 | 0.001080 | 0.001213 | 0.001049 |
| swizzle3_test4.test | RUN | 0.106828 | 0.265912 | 0.331837 | 0.000937 | 0.001188 | 0.000965 |
| swizzle3_test.test | RUN | 0.308971 | 0.692430 | 0.933792 | 0.001324 | 0.001224 | 0.000957 |
| swizzle4_test2.test | RUN | 0.183101 | 0.374840 | 0.531982 | 0.001215 | 0.001203 | 0.001046 |
| swizzle4_test3.test | RUN | 0.181444 | 0.385695 | 0.534746 | 0.001083 | 0.001082 | 0.000945 |
| swizzle4_test4.test | RUN | 0.192985 | 0.379822 | 0.531597 | 0.001063 | 0.001162 | 0.001019 |
| swizzle4_test.test | RUN | 0.328121 | 0.770348 | 0.990355 | 0.001071 | 0.001193 | 0.001050 |
| deduce_scalar_test.test | COMPILE | 0.015448 | 0.035205 | 0.048696 | — | — | — |
| deduce_scalar_mq_test.test | RUN | 0.113778 | 0.288082 | 0.362866 | 0.001062 | 0.001226 | 0.001017 |
| deduce_scalar_mv_test.test | RUN | 0.141986 | 0.340400 | 0.424959 | 0.001048 | 0.001128 | 0.000982 |
| deduce_scalar_fail.test | COMPILE_FAIL | 0.012393 | 0.022279 | 0.037536 | — | — | — |
| deduce_mat_test.test | COMPILE | 0.013352 | 0.030961 | 0.042303 | — | — | — |
| deduce_quat_test.test | COMPILE | 0.012708 | 0.029258 | 0.041188 | — | — | — |
| deduce_vec_test.test | COMPILE | 0.013663 | 0.030418 | 0.045123 | — | — | — |
| interop_test.test | RUN | 0.149898 | 0.423502 | 0.608581 | 0.000377 | 0.000520 | 0.001044 |
| transform_test.test | RUN | 0.294251 | 0.583716 | 0.826693 | 0.000783 | 0.001059 | 0.000778 |
| projection_test.test | RUN | 0.198463 | 0.488455 | 0.504715 | 0.000830 | 0.000912 | 0.000761 |
| scalar_traits_test.test | COMPILE | 0.014014 | 0.032133 | 0.046565 | — | — | — |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 1.005× | 0.998×, 1.012× | 0.998× |
| clang | 1.044× | 1.050×, 1.037× | 1.002× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1362 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43670794197).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| access_m_test.test | 10 | 0.000822s | 0.000815s | 0.000808s | byte equality observed |
| access_q_test.test | 10 | 0.000827s | 0.000800s | 0.000795s | byte equality observed |
| access_v_test.test | 10 | 0.000822s | 0.000796s | 0.000816s | byte equality observed |
| assign_test.test | 10 | 0.000810s | 0.000796s | 0.000797s | byte equality observed |
| cmp_mm_test.test | 10 | 0.000819s | 0.000792s | 0.000810s | byte equality observed |
| cmp_qq_test.test | 10 | 0.000801s | 0.000788s | 0.000813s | byte equality observed |
| cmp_vv_test.test | 10 | 0.000812s | 0.000814s | 0.000822s | byte equality observed |
| col_mat_test.test | 10 | 0.000805s | 0.000801s | 0.000802s | byte equality observed |
| col_test.test | 10 | 0.000808s | 0.000805s | 0.000791s | byte equality observed |
| conjugate_test.test | 10 | 0.000794s | 0.000812s | 0.000837s | byte equality observed |
| convert_to_test.test | 10 | 0.000797s | 0.000800s | 0.000839s | byte equality observed |
| cross_test.test | 10 | 0.000804s | 0.000801s | 0.000812s | byte equality observed |
| deduce_scalar_mq_test.test | 10 | 0.000829s | 0.000788s | 0.000847s | byte equality observed |
| deduce_scalar_mv_test.test | 10 | 0.000818s | 0.000801s | 0.000854s | byte equality observed |
| del_col_test.test | 10 | 0.000817s | 0.000813s | 0.000819s | byte equality observed |
| del_row_col_test.test | 10 | 0.000849s | 0.000810s | 0.000788s | byte equality observed |
| del_row_test.test | 10 | 0.000833s | 0.000832s | 0.000822s | byte equality observed |
| determinant_test.test | 10 | 0.000806s | 0.000823s | 0.000794s | byte equality observed |
| diag_mat_test.test | 10 | 0.000814s | 0.000801s | 0.000820s | byte equality observed |
| diag_test.test | 10 | 0.000795s | 0.000804s | 0.000794s | byte equality observed |
| div_eq_ms_test.test | 10 | 0.000794s | 0.000794s | 0.000804s | byte equality observed |
| div_eq_qs_test.test | 10 | 0.000812s | 0.000811s | 0.000807s | byte equality observed |
| div_eq_vs_test.test | 10 | 0.000791s | 0.000837s | 0.000827s | byte equality observed |
| div_ms_test.test | 10 | 0.000790s | 0.000803s | 0.000820s | byte equality observed |
| div_qs_test.test | 10 | 0.000826s | 0.000814s | 0.000793s | byte equality observed |
| div_vs_test.test | 10 | 0.000795s | 0.000813s | 0.000802s | byte equality observed |
| dot_qq_test.test | 10 | 0.000818s | 0.000810s | 0.000818s | byte equality observed |
| dot_vv_test.test | 10 | 0.000806s | 0.000811s | 0.000803s | byte equality observed |
| eq_mm_test.test | 10 | 0.000812s | 0.000815s | 0.000822s | byte equality observed |
| eq_qq_test.test | 10 | 0.000796s | 0.000810s | 0.000784s | byte equality observed |
| eq_vv_test.test | 10 | 0.000819s | 0.000776s | 0.000809s | byte equality observed |
| identity_mat_test.test | 10 | 0.000820s | 0.000831s | 0.000805s | byte equality observed |
| identity_quat_test.test | 10 | 0.000802s | 0.000833s | 0.000805s | byte equality observed |
| interop_test.test | 10 | 0.000367s | 0.000357s | 0.000761s | byte equality observed |
| inverse_m_test.test | 10 | 0.000834s | 0.000821s | 0.000838s | byte equality observed |
| inverse_q_test.test | 10 | 0.000796s | 0.000793s | 0.000800s | byte equality observed |
| mag_q_test.test | 10 | 0.000800s | 0.000807s | 0.000789s | byte equality observed |
| mag_sqr_q_test.test | 10 | 0.000810s | 0.000832s | 0.000797s | byte equality observed |
| mag_sqr_v_test.test | 10 | 0.000818s | 0.000827s | 0.000816s | byte equality observed |
| mag_v_test.test | 10 | 0.000837s | 0.000824s | 0.000831s | byte equality observed |
| mat_index_test.test | 10 | 0.000825s | 0.000816s | 0.000836s | byte equality observed |
| mat_traits_array_test.test | 10 | 0.000826s | 0.000827s | 0.000834s | byte equality observed |
| mat_traits_std_array_test.test | 10 | 0.000787s | 0.000791s | 0.000795s | byte equality observed |
| math_test.test | 10 | 0.001203s | 0.001173s | 0.001063s | byte equality observed |
| minus_eq_mm_test.test | 10 | 0.000800s | 0.000802s | 0.000814s | byte equality observed |
| minus_eq_qq_test.test | 10 | 0.000809s | 0.000837s | 0.000802s | byte equality observed |
| minus_eq_vv_test.test | 10 | 0.000813s | 0.000803s | 0.000816s | byte equality observed |
| minus_m_test.test | 10 | 0.000824s | 0.000786s | 0.000803s | byte equality observed |
| minus_mm_test.test | 10 | 0.000822s | 0.000799s | 0.000821s | byte equality observed |
| minus_q_test.test | 10 | 0.000792s | 0.000803s | 0.000806s | byte equality observed |
| minus_qq_test.test | 10 | 0.000778s | 0.000807s | 0.000819s | byte equality observed |
| minus_v_test.test | 10 | 0.000800s | 0.000763s | 0.000808s | byte equality observed |
| minus_vv_test.test | 10 | 0.000807s | 0.000807s | 0.000805s | byte equality observed |
| mul_eq_mm_test.test | 10 | 0.000796s | 0.000819s | 0.000802s | byte equality observed |
| mul_eq_ms_test.test | 10 | 0.000815s | 0.000817s | 0.000809s | byte equality observed |
| mul_eq_qq_test.test | 10 | 0.000828s | 0.000818s | 0.000851s | byte equality observed |
| mul_eq_qs_test.test | 10 | 0.000814s | 0.000808s | 0.000810s | byte equality observed |
| mul_eq_vs_test.test | 10 | 0.000793s | 0.000817s | 0.000826s | byte equality observed |
| mul_mm_test.test | 10 | 0.000817s | 0.000848s | 0.000832s | byte equality observed |
| mul_ms_test.test | 10 | 0.000800s | 0.000817s | 0.000792s | byte equality observed |
| mul_mv_test.test | 10 | 0.000807s | 0.000813s | 0.000815s | byte equality observed |
| mul_qq_test.test | 10 | 0.000824s | 0.000826s | 0.000816s | byte equality observed |
| mul_qs_test.test | 10 | 0.000807s | 0.000790s | 0.000820s | byte equality observed |
| mul_qv_test.test | 10 | 0.000804s | 0.000829s | 0.000832s | byte equality observed |
| mul_sm_test.test | 10 | 0.000807s | 0.000810s | 0.000809s | byte equality observed |
| mul_sv_test.test | 10 | 0.000817s | 0.000807s | 0.000801s | byte equality observed |
| mul_vm_test.test | 10 | 0.000803s | 0.000796s | 0.000814s | byte equality observed |
| mul_vs_test.test | 10 | 0.000818s | 0.000812s | 0.000820s | byte equality observed |
| neg_col_test.test | 10 | 0.000806s | 0.000819s | 0.000786s | byte equality observed |
| neg_row_test.test | 10 | 0.000819s | 0.000821s | 0.000789s | byte equality observed |
| normalize_q_test.test | 10 | 0.000815s | 0.000840s | 0.000827s | byte equality observed |
| normalize_v_test.test | 10 | 0.000805s | 0.000827s | 0.000824s | byte equality observed |
| plus_eq_mm_test.test | 10 | 0.000807s | 0.000849s | 0.000828s | byte equality observed |
| plus_eq_qq_test.test | 10 | 0.000799s | 0.000850s | 0.000789s | byte equality observed |
| plus_eq_vv_test.test | 10 | 0.000823s | 0.000837s | 0.000824s | byte equality observed |
| plus_mm_test.test | 10 | 0.000818s | 0.000806s | 0.000823s | byte equality observed |
| plus_qq_test.test | 10 | 0.000808s | 0.000825s | 0.000802s | byte equality observed |
| plus_vv_test.test | 10 | 0.000794s | 0.000826s | 0.000820s | byte equality observed |
| projection_test.test | 10 | 0.000810s | 0.000830s | 0.000825s | byte equality observed |
| quat_traits_array_test.test | 10 | 0.000825s | 0.000826s | 0.000845s | byte equality observed |
| quat_traits_std_array_test.test | 10 | 0.000782s | 0.000752s | 0.000772s | byte equality observed |
| rot_mat_test.test | 1 | 0.019693s | 0.022284s | 0.026138s | byte equality observed |
| rot_quat_test.test | 10 | 0.000755s | 0.000739s | 0.000753s | byte equality observed |
| rotx_mat_test.test | 10 | 0.000804s | 0.000752s | 0.000763s | byte equality observed |
| rotx_quat_test.test | 10 | 0.000793s | 0.000825s | 0.000821s | byte equality observed |
| roty_mat_test.test | 10 | 0.000814s | 0.000843s | 0.000831s | byte equality observed |
| roty_quat_test.test | 10 | 0.000825s | 0.000796s | 0.000843s | byte equality observed |
| rotz_mat_test.test | 10 | 0.000824s | 0.000825s | 0.000869s | byte equality observed |
| rotz_quat_test.test | 10 | 0.000841s | 0.000808s | 0.000840s | byte equality observed |
| row_mat_test.test | 10 | 0.000829s | 0.000832s | 0.000815s | byte equality observed |
| row_test.test | 10 | 0.000806s | 0.000830s | 0.000823s | byte equality observed |
| scalar_cast_m_test.test | 10 | 0.000820s | 0.000813s | 0.000836s | byte equality observed |
| scalar_cast_q_test.test | 10 | 0.000822s | 0.000819s | 0.000792s | byte equality observed |
| scalar_cast_v_test.test | 10 | 0.000776s | 0.000804s | 0.000787s | byte equality observed |
| slerp_test.test | 2 | 0.011007s | 0.009259s | 0.009707s | byte equality observed |
| swap_cols_test.test | 10 | 0.000755s | 0.000748s | 0.000755s | byte equality observed |
| swap_rows_test.test | 10 | 0.000750s | 0.000773s | 0.000749s | byte equality observed |
| swizzle2_test.test | 10 | 0.000803s | 0.000823s | 0.000834s | byte equality observed |
| swizzle2_test2.test | 10 | 0.000807s | 0.000814s | 0.000811s | byte equality observed |
| swizzle2_test3.test | 10 | 0.000798s | 0.000822s | 0.000815s | byte equality observed |
| swizzle2_test4.test | 10 | 0.000808s | 0.000807s | 0.000815s | byte equality observed |
| swizzle3_test.test | 10 | 0.000822s | 0.000840s | 0.000799s | byte equality observed |
| swizzle3_test2.test | 10 | 0.000804s | 0.000789s | 0.000817s | byte equality observed |
| swizzle3_test3.test | 10 | 0.000812s | 0.000821s | 0.000805s | byte equality observed |
| swizzle3_test4.test | 10 | 0.000824s | 0.000811s | 0.000809s | byte equality observed |
| swizzle4_test.test | 10 | 0.000812s | 0.000789s | 0.000829s | byte equality observed |
| swizzle4_test2.test | 10 | 0.000829s | 0.000789s | 0.000816s | byte equality observed |
| swizzle4_test3.test | 10 | 0.000810s | 0.000777s | 0.000831s | byte equality observed |
| swizzle4_test4.test | 10 | 0.000826s | 0.000773s | 0.000820s | byte equality observed |
| to_string_test.test | 10 | 0.000845s | 0.000832s | 0.000864s | byte equality observed |
| transform_test.test | 10 | 0.000847s | 0.000797s | 0.000801s | byte equality observed |
| translation_mat_test.test | 10 | 0.000817s | 0.000818s | 0.000817s | byte equality observed |
| translation_test.test | 10 | 0.000806s | 0.000816s | 0.000819s | byte equality observed |
| transpose_test.test | 10 | 0.000804s | 0.000808s | 0.000826s | byte equality observed |
| vec_index_test.test | 10 | 0.000805s | 0.000829s | 0.000821s | byte equality observed |
| vec_register_test.test | 10 | 0.000805s | 0.000824s | 0.000799s | byte equality observed |
| vec_traits_array_test.test | 10 | 0.000834s | 0.000840s | 0.000828s | byte equality observed |
| vec_traits_gnuc_test.test | 10 | 0.000839s | 0.000856s | 0.000801s | byte equality observed |
| vec_traits_std_array_test.test | 10 | 0.000836s | 0.000842s | 0.000814s | byte equality observed |
| zero_mat_test.test | 10 | 0.000801s | 0.000824s | 0.000824s | byte equality observed |
| zero_quat_test.test | 10 | 0.000801s | 0.000825s | 0.000838s | byte equality observed |
| zero_vec_test.test | 10 | 0.000800s | 0.000822s | 0.000795s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43670794197).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
