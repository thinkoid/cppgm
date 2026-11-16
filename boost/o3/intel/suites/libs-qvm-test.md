# libs/qvm/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| math_test.test | RUN | 0.167019 | 0.459872 | 0.447446 | 0.001524 | 0.001481 | 0.001302 |
| mat_traits_array_test.test | RUN | 0.126238 | 0.457035 | 0.344616 | 0.001074 | 0.001070 | 0.001014 |
| mat_traits_std_array_test.test | RUN | 0.130880 | 0.345354 | 0.354088 | 0.001113 | 0.001084 | 0.000971 |
| vec_traits_array_test.test | RUN | 0.109762 | 0.346265 | 0.296499 | 0.001040 | 0.001131 | 0.000912 |
| vec_traits_gnuc_test.test | RUN | 0.194783 | 0.424199 | 0.554739 | 0.001009 | 0.000974 | 0.000962 |
| vec_traits_std_array_test.test | RUN | 0.107937 | 0.266474 | 0.289579 | 0.001126 | 0.001077 | 0.001031 |
| quat_traits_array_test.test | RUN | 0.109910 | 0.372900 | 0.291798 | 0.000976 | 0.001051 | 0.001073 |
| quat_traits_std_array_test.test | RUN | 0.105966 | 0.277188 | 0.289730 | 0.001149 | 0.001137 | 0.001052 |
| access_m_test.test | RUN | 0.173021 | 0.654465 | 0.663223 | 0.001151 | 0.001016 | 0.001076 |
| access_m_fail1.test | COMPILE_FAIL | 0.016481 | 0.027506 | 0.044586 | — | — | — |
| access_m_fail2.test | COMPILE_FAIL | 0.016475 | 0.028955 | 0.042745 | — | — | — |
| access_q_test.test | RUN | 0.141978 | 0.337040 | 0.401520 | 0.001085 | 0.001022 | 0.000971 |
| access_q_fail.test | COMPILE_FAIL | 0.013042 | 0.023405 | 0.036724 | — | — | — |
| access_v_test.test | RUN | 0.142273 | 0.346347 | 0.393644 | 0.001020 | 0.001084 | 0.000974 |
| access_v_fail1.test | COMPILE_FAIL | 0.011573 | 0.020410 | 0.033721 | — | — | — |
| access_v_fail2.test | COMPILE_FAIL | 0.011205 | 0.021703 | 0.037662 | — | — | — |
| assign_test.test | RUN | 0.222421 | 0.563575 | 0.733351 | 0.000966 | 0.001083 | 0.001068 |
| to_string_test.test | RUN | 0.262483 | 0.936471 | 4.401690 | 0.001157 | 0.001096 | 0.001110 |
| cmp_vv_test.test | RUN | 0.181077 | 0.444435 | 0.479613 | 0.001047 | 0.001140 | 0.001060 |
| cross_test.test | RUN | 0.176161 | 0.409973 | 0.478618 | 0.001011 | 0.001107 | 0.001024 |
| div_eq_vs_test.test | RUN | 0.167437 | 0.378503 | 0.467238 | 0.000972 | 0.001082 | 0.001090 |
| div_vs_test.test | RUN | 0.175522 | 0.477732 | 0.504987 | 0.001066 | 0.001125 | 0.001026 |
| dot_vv_test.test | RUN | 0.167459 | 0.426403 | 0.458303 | 0.001026 | 0.001022 | 0.001106 |
| eq_vv_test.test | RUN | 0.186901 | 0.470161 | 0.516460 | 0.001055 | 0.001046 | 0.000973 |
| mag_v_test.test | RUN | 0.163794 | 0.389032 | 0.447491 | 0.000976 | 0.001042 | 0.000990 |
| mag_sqr_v_test.test | RUN | 0.163859 | 0.381083 | 0.451549 | 0.001015 | 0.001070 | 0.001005 |
| minus_v_test.test | RUN | 0.167970 | 0.451030 | 0.488899 | 0.001044 | 0.001072 | 0.001028 |
| minus_eq_vv_test.test | RUN | 0.167192 | 0.441039 | 0.467482 | 0.001051 | 0.001110 | 0.001024 |
| minus_vv_test.test | RUN | 0.174721 | 0.483766 | 0.504009 | 0.001044 | 0.000996 | 0.001072 |
| mul_eq_vs_test.test | RUN | 0.168408 | 0.379592 | 0.478739 | 0.001040 | 0.001038 | 0.001017 |
| mul_vs_test.test | RUN | 0.175972 | 0.476540 | 0.507137 | 0.001036 | 0.001048 | 0.001058 |
| mul_sv_test.test | RUN | 0.176310 | 0.477261 | 0.515204 | 0.000945 | 0.001274 | 0.001109 |
| mul_vm_test.test | RUN | 0.244784 | 0.841810 | 0.795758 | 0.001058 | 0.001168 | 0.001013 |
| normalize_v_test.test | RUN | 0.180546 | 0.586323 | 0.513833 | 0.001117 | 0.001018 | 0.001012 |
| plus_eq_vv_test.test | RUN | 0.167666 | 0.438341 | 0.475173 | 0.001155 | 0.001145 | 0.001009 |
| plus_vv_test.test | RUN | 0.176241 | 0.472209 | 0.508001 | 0.001037 | 0.001040 | 0.000976 |
| scalar_cast_v_test.test | RUN | 0.161809 | 0.351163 | 0.436845 | 0.001002 | 0.001066 | 0.000997 |
| vec_index_test.test | RUN | 0.144016 | 0.365211 | 0.394155 | 0.001036 | 0.001100 | 0.001039 |
| vec_register_test.test | RUN | 0.094034 | 0.315676 | 0.285157 | 0.001110 | 0.001198 | 0.001061 |
| cmp_mm_test.test | RUN | 0.285599 | 1.034112 | 1.025747 | 0.001020 | 0.001145 | 0.001100 |
| determinant_test.test | RUN | 0.196797 | 0.537945 | 0.577116 | 0.001075 | 0.001114 | 0.001031 |
| div_eq_ms_test.test | RUN | 0.197680 | 0.478303 | 0.632349 | 0.001069 | 0.001140 | 0.001236 |
| div_ms_test.test | RUN | 0.236006 | 0.779621 | 0.791233 | 0.001101 | 0.001024 | 0.001064 |
| eq_mm_test.test | RUN | 0.272129 | 0.960901 | 0.986685 | 0.001027 | 0.001077 | 0.000961 |
| minus_m_test.test | RUN | 0.232909 | 0.775163 | 0.737623 | 0.001061 | 0.001204 | 0.000990 |
| minus_eq_mm_test.test | RUN | 0.218536 | 0.719295 | 0.687123 | 0.001019 | 0.001032 | 0.001028 |
| minus_mm_test.test | RUN | 0.247742 | 0.915016 | 0.805957 | 0.001048 | 0.001082 | 0.001033 |
| mul_eq_mm_test.test | RUN | 0.200702 | 0.659593 | 0.623231 | 0.001045 | 0.000991 | 0.001145 |
| mul_eq_ms_test.test | RUN | 0.198638 | 0.479929 | 0.626810 | 0.000991 | 0.001032 | 0.001034 |
| mul_mm_test.test | RUN | 0.290948 | 1.496973 | 1.026196 | 0.001069 | 0.001101 | 0.001043 |
| mul_ms_test.test | RUN | 0.237016 | 0.790680 | 0.789550 | 0.001214 | 0.001048 | 0.000998 |
| mul_sm_test.test | RUN | 0.237980 | 0.785966 | 0.779023 | 0.001010 | 0.001064 | 0.001044 |
| mul_mv_test.test | RUN | 0.240375 | 0.854831 | 0.786770 | 0.001091 | 0.001054 | 0.001152 |
| inverse_m_test.test | RUN | 0.342290 | 1.557615 | 1.135624 | 0.001171 | 0.001121 | 0.001032 |
| plus_eq_mm_test.test | RUN | 0.218786 | 0.726143 | 0.694002 | 0.001093 | 0.001061 | 0.000980 |
| plus_mm_test.test | RUN | 0.247299 | 0.917913 | 0.813174 | 0.001023 | 0.001092 | 0.001004 |
| scalar_cast_m_test.test | RUN | 0.186342 | 0.395647 | 0.498628 | 0.001016 | 0.001120 | 0.000977 |
| mat_index_test.test | RUN | 0.149778 | 0.390491 | 0.439020 | 0.001113 | 0.001161 | 0.001082 |
| cmp_qq_test.test | RUN | 0.160266 | 0.356771 | 0.421768 | 0.000998 | 0.001047 | 0.001084 |
| conjugate_test.test | RUN | 0.162309 | 0.375156 | 0.433230 | 0.000990 | 0.001099 | 0.001051 |
| normalize_q_test.test | RUN | 0.165630 | 0.417516 | 0.451172 | 0.001001 | 0.001094 | 0.000964 |
| div_eq_qs_test.test | RUN | 0.157817 | 0.348176 | 0.432824 | 0.000986 | 0.001051 | 0.000972 |
| div_qs_test.test | RUN | 0.160297 | 0.374451 | 0.432671 | 0.001006 | 0.001094 | 0.001041 |
| dot_qq_test.test | RUN | 0.163026 | 0.360186 | 0.439314 | 0.001081 | 0.001012 | 0.001009 |
| eq_qq_test.test | RUN | 0.168019 | 0.381792 | 0.444529 | 0.001090 | 0.001110 | 0.001042 |
| inverse_q_test.test | RUN | 0.197501 | 0.507153 | 0.548268 | 0.001033 | 0.001108 | 0.001107 |
| mag_q_test.test | RUN | 0.160788 | 0.368529 | 0.431144 | 0.001055 | 0.001072 | 0.001031 |
| mag_sqr_q_test.test | RUN | 0.159082 | 0.367990 | 0.425132 | 0.001076 | 0.001133 | 0.001037 |
| minus_q_test.test | RUN | 0.158568 | 0.372814 | 0.426155 | 0.001042 | 0.001066 | 0.000972 |
| minus_eq_qq_test.test | RUN | 0.161611 | 0.371977 | 0.430772 | 0.001032 | 0.001055 | 0.000965 |
| minus_qq_test.test | RUN | 0.162151 | 0.381901 | 0.433172 | 0.001064 | 0.001071 | 0.000950 |
| mul_eq_qs_test.test | RUN | 0.157713 | 0.348169 | 0.429106 | 0.001021 | 0.001023 | 0.001076 |
| mul_qs_test.test | RUN | 0.159081 | 0.371396 | 0.431669 | 0.000983 | 0.001053 | 0.000934 |
| mul_qv_test.test | RUN | 0.198288 | 0.503763 | 0.554676 | 0.001051 | 0.001134 | 0.001121 |
| mul_qq_test.test | RUN | 0.194465 | 0.508047 | 0.537831 | 0.001025 | 0.001103 | 0.001080 |
| mul_eq_qq_test.test | RUN | 0.193475 | 0.513286 | 0.540221 | 0.001000 | 0.001118 | 0.000968 |
| plus_eq_qq_test.test | RUN | 0.161045 | 0.371657 | 0.429746 | 0.000959 | 0.001111 | 0.001097 |
| plus_qq_test.test | RUN | 0.166597 | 0.383416 | 0.436857 | 0.001001 | 0.001061 | 0.001066 |
| scalar_cast_q_test.test | RUN | 0.160835 | 0.345015 | 0.432652 | 0.000986 | 0.001036 | 0.001062 |
| slerp_test.test | RUN | 0.184211 | 0.722647 | 0.530581 | 0.013079 | 0.011114 | 0.011769 |
| convert_to_test.test | RUN | 0.241896 | 0.652620 | 0.812099 | 0.001078 | 0.001026 | 0.001054 |
| rot_mat_test.test | RUN | 0.396398 | 3.092004 | 2.608448 | 0.023540 | 0.025752 | 0.031723 |
| rot_quat_test.test | RUN | 0.198451 | 0.611644 | 0.562642 | 0.001099 | 0.001072 | 0.001140 |
| rotx_mat_test.test | RUN | 0.232091 | 0.816819 | 0.756977 | 0.001066 | 0.001126 | 0.000988 |
| rotx_quat_test.test | RUN | 0.195695 | 0.513884 | 0.529380 | 0.001146 | 0.001035 | 0.001021 |
| roty_mat_test.test | RUN | 0.229215 | 0.804557 | 0.748632 | 0.001065 | 0.001134 | 0.000994 |
| roty_quat_test.test | RUN | 0.193261 | 0.516233 | 0.527794 | 0.001044 | 0.001117 | 0.001018 |
| rotz_mat_test.test | RUN | 0.243052 | 0.918292 | 0.795037 | 0.001033 | 0.001164 | 0.001012 |
| rotz_quat_test.test | RUN | 0.195336 | 0.510898 | 0.536687 | 0.001090 | 0.001030 | 0.001128 |
| zero_vec_test.test | RUN | 0.164082 | 0.438361 | 0.468120 | 0.001101 | 0.001025 | 0.000944 |
| zero_mat_test.test | RUN | 0.208732 | 0.745597 | 0.644323 | 0.000987 | 0.001142 | 0.000965 |
| zero_quat_test.test | RUN | 0.160414 | 0.373925 | 0.425394 | 0.000988 | 0.001070 | 0.000998 |
| identity_mat_test.test | RUN | 0.190236 | 0.538371 | 0.547331 | 0.000974 | 0.001241 | 0.000998 |
| identity_quat_test.test | RUN | 0.160622 | 0.361054 | 0.428437 | 0.001004 | 0.001077 | 0.001049 |
| col_test.test | RUN | 0.320537 | 1.134195 | 1.245430 | 0.001117 | 0.001155 | 0.000978 |
| col_mat_test.test | RUN | 0.203277 | 0.504495 | 0.571047 | 0.001198 | 0.001167 | 0.001085 |
| neg_col_test.test | RUN | 0.236865 | 0.705299 | 0.732975 | 0.001031 | 0.001132 | 0.001017 |
| neg_row_test.test | RUN | 0.242305 | 0.723500 | 0.731652 | 0.001073 | 0.001078 | 0.001189 |
| del_col_test.test | RUN | 0.255665 | 0.785087 | 0.761996 | 0.001071 | 0.001119 | 0.001081 |
| del_row_test.test | RUN | 0.248946 | 0.771383 | 0.763061 | 0.001056 | 0.001039 | 0.001118 |
| del_row_col_test.test | RUN | 0.345780 | 1.442645 | 1.421452 | 0.000995 | 0.000996 | 0.000972 |
| swap_cols_test.test | RUN | 0.473713 | 1.930093 | 1.753353 | 0.001081 | 0.001069 | 0.001020 |
| swap_rows_test.test | RUN | 0.533792 | 2.027850 | 1.768359 | 0.001113 | 0.001052 | 0.001073 |
| diag_test.test | RUN | 0.214104 | 0.555528 | 0.660813 | 0.001081 | 0.001069 | 0.000990 |
| diag_mat_test.test | RUN | 0.210162 | 0.526511 | 0.589070 | 0.001066 | 0.001096 | 0.001088 |
| row_test.test | RUN | 0.318677 | 1.126217 | 1.244056 | 0.001036 | 0.001031 | 0.001003 |
| row_mat_test.test | RUN | 0.201917 | 0.499441 | 0.579184 | 0.001077 | 0.001096 | 0.001012 |
| transpose_test.test | RUN | 0.242423 | 0.779868 | 0.795893 | 0.000978 | 0.001054 | 0.001001 |
| translation_test.test | RUN | 0.202577 | 0.488118 | 0.592475 | 0.000977 | 0.001127 | 0.001078 |
| translation_mat_test.test | RUN | 0.215032 | 0.488904 | 0.628842 | 0.000994 | 0.001104 | 0.000958 |
| swizzle_const_fail.test | COMPILE_FAIL | 0.070253 | 0.140315 | 0.171210 | — | — | — |
| swizzle2_test2.test | RUN | 0.086685 | 0.211673 | 0.244068 | 0.001087 | 0.001087 | 0.000911 |
| swizzle2_test3.test | RUN | 0.086265 | 0.213654 | 0.240386 | 0.001024 | 0.001112 | 0.001062 |
| swizzle2_test4.test | RUN | 0.083569 | 0.210795 | 0.240831 | 0.001089 | 0.000974 | 0.001033 |
| swizzle2_test.test | RUN | 0.272613 | 0.575194 | 0.725819 | 0.001013 | 0.001105 | 0.001008 |
| swizzle3_test2.test | RUN | 0.095821 | 0.230367 | 0.261635 | 0.001005 | 0.001033 | 0.001022 |
| swizzle3_test3.test | RUN | 0.095635 | 0.223216 | 0.263791 | 0.000991 | 0.001023 | 0.001055 |
| swizzle3_test4.test | RUN | 0.095599 | 0.223640 | 0.258597 | 0.001029 | 0.001024 | 0.001047 |
| swizzle3_test.test | RUN | 0.272700 | 0.578818 | 0.733373 | 0.001062 | 0.001062 | 0.001055 |
| swizzle4_test2.test | RUN | 0.158891 | 0.316120 | 0.407046 | 0.000962 | 0.001066 | 0.000938 |
| swizzle4_test3.test | RUN | 0.159677 | 0.314080 | 0.409795 | 0.001102 | 0.001014 | 0.000982 |
| swizzle4_test4.test | RUN | 0.159281 | 0.315531 | 0.412852 | 0.001013 | 0.001146 | 0.000987 |
| swizzle4_test.test | RUN | 0.276514 | 0.635596 | 0.763681 | 0.000957 | 0.000957 | 0.001057 |
| deduce_scalar_test.test | COMPILE | 0.014050 | 0.031746 | 0.042711 | — | — | — |
| deduce_scalar_mq_test.test | RUN | 0.106650 | 0.246336 | 0.286371 | 0.001024 | 0.000986 | 0.000916 |
| deduce_scalar_mv_test.test | RUN | 0.125412 | 0.284919 | 0.335350 | 0.000996 | 0.001004 | 0.000972 |
| deduce_scalar_fail.test | COMPILE_FAIL | 0.011480 | 0.020082 | 0.036228 | — | — | — |
| deduce_mat_test.test | COMPILE | 0.012549 | 0.027195 | 0.039997 | — | — | — |
| deduce_quat_test.test | COMPILE | 0.011736 | 0.027072 | 0.039604 | — | — | — |
| deduce_vec_test.test | COMPILE | 0.012357 | 0.027763 | 0.038512 | — | — | — |
| interop_test.test | RUN | 0.127667 | 0.344372 | 0.458883 | 0.000510 | 0.000435 | 0.000949 |
| transform_test.test | RUN | 0.281785 | 0.578089 | 0.741341 | 0.001164 | 0.001071 | 0.000981 |
| projection_test.test | RUN | 0.181861 | 0.433893 | 0.483014 | 0.001325 | 0.001066 | 0.000994 |
| scalar_traits_test.test | COMPILE | 0.012922 | 0.027134 | 0.037276 | — | — | — |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 1.001× | 1.000×, 1.002× | 1.003× |
| clang | 1.044× | 1.043×, 1.044× | 1.003× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1364 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/43947487361).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| access_m_test.test | 10 | 0.000957s | 0.000950s | 0.000971s | byte equality observed |
| access_q_test.test | 10 | 0.000953s | 0.000948s | 0.000959s | byte equality observed |
| access_v_test.test | 10 | 0.000949s | 0.000955s | 0.000936s | byte equality observed |
| assign_test.test | 10 | 0.000947s | 0.000950s | 0.000955s | byte equality observed |
| cmp_mm_test.test | 10 | 0.000958s | 0.000953s | 0.000956s | byte equality observed |
| cmp_qq_test.test | 10 | 0.000943s | 0.000937s | 0.000948s | byte equality observed |
| cmp_vv_test.test | 10 | 0.000949s | 0.000948s | 0.000949s | byte equality observed |
| col_mat_test.test | 10 | 0.000933s | 0.000951s | 0.000942s | byte equality observed |
| col_test.test | 10 | 0.000959s | 0.000946s | 0.000950s | byte equality observed |
| conjugate_test.test | 10 | 0.000946s | 0.000947s | 0.000936s | byte equality observed |
| convert_to_test.test | 10 | 0.000954s | 0.000934s | 0.000957s | byte equality observed |
| cross_test.test | 10 | 0.000946s | 0.000944s | 0.000929s | byte equality observed |
| deduce_scalar_mq_test.test | 10 | 0.000953s | 0.000943s | 0.000936s | byte equality observed |
| deduce_scalar_mv_test.test | 10 | 0.000954s | 0.000952s | 0.000939s | byte equality observed |
| del_col_test.test | 10 | 0.000952s | 0.000946s | 0.000935s | byte equality observed |
| del_row_col_test.test | 10 | 0.000954s | 0.000937s | 0.000936s | byte equality observed |
| del_row_test.test | 10 | 0.000944s | 0.000945s | 0.000941s | byte equality observed |
| determinant_test.test | 10 | 0.000964s | 0.000971s | 0.000961s | byte equality observed |
| diag_mat_test.test | 10 | 0.000940s | 0.000947s | 0.000941s | byte equality observed |
| diag_test.test | 10 | 0.000944s | 0.000936s | 0.000956s | byte equality observed |
| div_eq_ms_test.test | 10 | 0.000937s | 0.000930s | 0.000942s | byte equality observed |
| div_eq_qs_test.test | 10 | 0.000945s | 0.000942s | 0.000941s | byte equality observed |
| div_eq_vs_test.test | 10 | 0.000942s | 0.000955s | 0.000941s | byte equality observed |
| div_ms_test.test | 10 | 0.000947s | 0.000938s | 0.000948s | byte equality observed |
| div_qs_test.test | 10 | 0.000945s | 0.000948s | 0.000939s | byte equality observed |
| div_vs_test.test | 10 | 0.000942s | 0.000945s | 0.000939s | byte equality observed |
| dot_qq_test.test | 10 | 0.000937s | 0.000941s | 0.000938s | byte equality observed |
| dot_vv_test.test | 10 | 0.000935s | 0.000936s | 0.000947s | byte equality observed |
| eq_mm_test.test | 10 | 0.000962s | 0.000954s | 0.000954s | byte equality observed |
| eq_qq_test.test | 10 | 0.000941s | 0.000945s | 0.000946s | byte equality observed |
| eq_vv_test.test | 10 | 0.000942s | 0.000942s | 0.000954s | byte equality observed |
| identity_mat_test.test | 10 | 0.000936s | 0.000938s | 0.000941s | byte equality observed |
| identity_quat_test.test | 10 | 0.000931s | 0.000936s | 0.000938s | byte equality observed |
| interop_test.test | 10 | 0.000443s | 0.000453s | 0.000923s | byte equality observed |
| inverse_m_test.test | 10 | 0.001005s | 0.001001s | 0.001000s | byte equality observed |
| inverse_q_test.test | 10 | 0.000957s | 0.000940s | 0.000939s | byte equality observed |
| mag_q_test.test | 10 | 0.000952s | 0.000932s | 0.000935s | byte equality observed |
| mag_sqr_q_test.test | 10 | 0.000941s | 0.000947s | 0.000937s | byte equality observed |
| mag_sqr_v_test.test | 10 | 0.000941s | 0.000946s | 0.000948s | byte equality observed |
| mag_v_test.test | 10 | 0.000945s | 0.000952s | 0.000951s | byte equality observed |
| mat_index_test.test | 10 | 0.000946s | 0.000942s | 0.000954s | byte equality observed |
| mat_traits_array_test.test | 10 | 0.000948s | 0.000949s | 0.000938s | byte equality observed |
| mat_traits_std_array_test.test | 10 | 0.000949s | 0.000938s | 0.000946s | byte equality observed |
| math_test.test | 9 | 0.001433s | 0.001380s | 0.001264s | byte equality observed |
| minus_eq_mm_test.test | 10 | 0.000946s | 0.000940s | 0.000939s | byte equality observed |
| minus_eq_qq_test.test | 10 | 0.000950s | 0.000936s | 0.000955s | byte equality observed |
| minus_eq_vv_test.test | 10 | 0.000937s | 0.000949s | 0.000942s | byte equality observed |
| minus_m_test.test | 9 | 0.000943s | 0.000954s | 0.000939s | byte equality observed |
| minus_mm_test.test | 10 | 0.000946s | 0.000943s | 0.000939s | byte equality observed |
| minus_q_test.test | 10 | 0.000938s | 0.000944s | 0.000947s | byte equality observed |
| minus_qq_test.test | 10 | 0.000938s | 0.000943s | 0.000946s | byte equality observed |
| minus_v_test.test | 10 | 0.000945s | 0.000951s | 0.000941s | byte equality observed |
| minus_vv_test.test | 10 | 0.000946s | 0.000934s | 0.000944s | byte equality observed |
| mul_eq_mm_test.test | 10 | 0.000953s | 0.000935s | 0.000945s | byte equality observed |
| mul_eq_ms_test.test | 10 | 0.000944s | 0.000935s | 0.000944s | byte equality observed |
| mul_eq_qq_test.test | 10 | 0.000955s | 0.000958s | 0.000966s | byte equality observed |
| mul_eq_qs_test.test | 10 | 0.000944s | 0.000940s | 0.000950s | byte equality observed |
| mul_eq_vs_test.test | 10 | 0.000941s | 0.000934s | 0.000937s | byte equality observed |
| mul_mm_test.test | 10 | 0.000946s | 0.000953s | 0.000943s | byte equality observed |
| mul_ms_test.test | 10 | 0.000946s | 0.000946s | 0.000939s | byte equality observed |
| mul_mv_test.test | 10 | 0.000956s | 0.000949s | 0.000947s | byte equality observed |
| mul_qq_test.test | 10 | 0.000958s | 0.000933s | 0.000958s | byte equality observed |
| mul_qs_test.test | 10 | 0.000943s | 0.000947s | 0.000940s | byte equality observed |
| mul_qv_test.test | 10 | 0.000959s | 0.000952s | 0.000958s | byte equality observed |
| mul_sm_test.test | 10 | 0.000950s | 0.000942s | 0.000943s | byte equality observed |
| mul_sv_test.test | 10 | 0.000946s | 0.000945s | 0.000959s | byte equality observed |
| mul_vm_test.test | 10 | 0.000952s | 0.000946s | 0.000955s | byte equality observed |
| mul_vs_test.test | 10 | 0.000946s | 0.000938s | 0.000945s | byte equality observed |
| neg_col_test.test | 10 | 0.000946s | 0.000950s | 0.000948s | byte equality observed |
| neg_row_test.test | 10 | 0.000945s | 0.000945s | 0.000946s | byte equality observed |
| normalize_q_test.test | 10 | 0.000952s | 0.000946s | 0.000944s | byte equality observed |
| normalize_v_test.test | 10 | 0.000956s | 0.000946s | 0.000941s | byte equality observed |
| plus_eq_mm_test.test | 10 | 0.000956s | 0.000932s | 0.000941s | byte equality observed |
| plus_eq_qq_test.test | 10 | 0.000950s | 0.000945s | 0.000941s | byte equality observed |
| plus_eq_vv_test.test | 10 | 0.000941s | 0.000938s | 0.000947s | byte equality observed |
| plus_mm_test.test | 10 | 0.000950s | 0.000956s | 0.000941s | byte equality observed |
| plus_qq_test.test | 10 | 0.000948s | 0.000944s | 0.000951s | byte equality observed |
| plus_vv_test.test | 10 | 0.000951s | 0.000953s | 0.000948s | byte equality observed |
| projection_test.test | 10 | 0.000954s | 0.000953s | 0.000951s | byte equality observed |
| quat_traits_array_test.test | 10 | 0.000950s | 0.000949s | 0.000948s | byte equality observed |
| quat_traits_std_array_test.test | 10 | 0.000942s | 0.000938s | 0.000950s | byte equality observed |
| rot_mat_test.test | 1 | 0.023436s | 0.025775s | 0.031463s | byte equality observed |
| rot_quat_test.test | 10 | 0.000960s | 0.000973s | 0.000976s | byte equality observed |
| rotx_mat_test.test | 10 | 0.000979s | 0.000957s | 0.000973s | byte equality observed |
| rotx_quat_test.test | 10 | 0.000962s | 0.000953s | 0.000957s | byte equality observed |
| roty_mat_test.test | 10 | 0.000973s | 0.000964s | 0.000957s | byte equality observed |
| roty_quat_test.test | 10 | 0.000962s | 0.000946s | 0.000962s | byte equality observed |
| rotz_mat_test.test | 10 | 0.000971s | 0.000970s | 0.000975s | byte equality observed |
| rotz_quat_test.test | 10 | 0.000968s | 0.000960s | 0.000969s | byte equality observed |
| row_mat_test.test | 10 | 0.000945s | 0.000946s | 0.000949s | byte equality observed |
| row_test.test | 10 | 0.000953s | 0.000947s | 0.000942s | byte equality observed |
| scalar_cast_m_test.test | 10 | 0.000945s | 0.000937s | 0.000940s | byte equality observed |
| scalar_cast_q_test.test | 10 | 0.000937s | 0.000943s | 0.000941s | byte equality observed |
| scalar_cast_v_test.test | 10 | 0.000941s | 0.000938s | 0.000947s | byte equality observed |
| slerp_test.test | 2 | 0.012840s | 0.010999s | 0.011554s | byte equality observed |
| swap_cols_test.test | 10 | 0.000961s | 0.000950s | 0.000944s | byte equality observed |
| swap_rows_test.test | 10 | 0.000971s | 0.000949s | 0.000941s | byte equality observed |
| swizzle2_test.test | 10 | 0.000947s | 0.000942s | 0.000942s | byte equality observed |
| swizzle2_test2.test | 10 | 0.000945s | 0.000945s | 0.000940s | byte equality observed |
| swizzle2_test3.test | 10 | 0.000947s | 0.000942s | 0.000934s | byte equality observed |
| swizzle2_test4.test | 10 | 0.000943s | 0.000945s | 0.000945s | byte equality observed |
| swizzle3_test.test | 10 | 0.000945s | 0.000938s | 0.000946s | byte equality observed |
| swizzle3_test2.test | 10 | 0.000946s | 0.000947s | 0.000940s | byte equality observed |
| swizzle3_test3.test | 10 | 0.000935s | 0.000946s | 0.000944s | byte equality observed |
| swizzle3_test4.test | 10 | 0.000941s | 0.000942s | 0.000935s | byte equality observed |
| swizzle4_test.test | 10 | 0.000946s | 0.000955s | 0.000942s | byte equality observed |
| swizzle4_test2.test | 10 | 0.000935s | 0.000956s | 0.000940s | byte equality observed |
| swizzle4_test3.test | 10 | 0.000934s | 0.000929s | 0.000943s | byte equality observed |
| swizzle4_test4.test | 10 | 0.000947s | 0.000953s | 0.000943s | byte equality observed |
| to_string_test.test | 10 | 0.000992s | 0.000988s | 0.000969s | byte equality observed |
| transform_test.test | 10 | 0.000950s | 0.000943s | 0.000948s | byte equality observed |
| translation_mat_test.test | 10 | 0.000943s | 0.000957s | 0.000940s | byte equality observed |
| translation_test.test | 10 | 0.000934s | 0.000937s | 0.000926s | byte equality observed |
| transpose_test.test | 10 | 0.000947s | 0.000950s | 0.000954s | byte equality observed |
| vec_index_test.test | 10 | 0.000946s | 0.000941s | 0.000952s | byte equality observed |
| vec_register_test.test | 10 | 0.000944s | 0.000951s | 0.000949s | byte equality observed |
| vec_traits_array_test.test | 10 | 0.000944s | 0.000956s | 0.000940s | byte equality observed |
| vec_traits_gnuc_test.test | 10 | 0.000954s | 0.000947s | 0.000956s | byte equality observed |
| vec_traits_std_array_test.test | 10 | 0.000938s | 0.000942s | 0.000940s | byte equality observed |
| zero_mat_test.test | 10 | 0.000947s | 0.000938s | 0.000939s | byte equality observed |
| zero_quat_test.test | 10 | 0.000946s | 0.000944s | 0.000948s | byte equality observed |
| zero_vec_test.test | 10 | 0.000951s | 0.000946s | 0.000938s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/43947487361).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
