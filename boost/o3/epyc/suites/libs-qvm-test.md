# libs/qvm/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| math_test.test | RUN | 0.319588 | 0.822089 | 1.003254 | 0.002692 | 0.002574 | 0.002526 |
| mat_traits_array_test.test | RUN | 0.240148 | 0.818521 | 0.779178 | 0.002142 | 0.001908 | 0.001952 |
| mat_traits_std_array_test.test | RUN | 0.242593 | 0.647557 | 0.817534 | 0.001986 | 0.002182 | 0.001652 |
| vec_traits_array_test.test | RUN | 0.215812 | 0.647724 | 0.672676 | 0.001872 | 0.001922 | 0.001669 |
| vec_traits_gnuc_test.test | RUN | 0.388370 | 0.784887 | 1.306354 | 0.002002 | 0.001990 | 0.001774 |
| vec_traits_std_array_test.test | RUN | 0.212540 | 0.501754 | 0.633443 | 0.001974 | 0.001981 | 0.002061 |
| quat_traits_array_test.test | RUN | 0.207739 | 0.662943 | 0.679973 | 0.001828 | 0.001862 | 0.002136 |
| quat_traits_std_array_test.test | RUN | 0.208292 | 0.510899 | 0.632590 | 0.001888 | 0.001894 | 0.001891 |
| access_m_test.test | RUN | 0.338879 | 1.207380 | 1.482037 | 0.002056 | 0.002308 | 0.001686 |
| access_m_fail1.test | COMPILE_FAIL | 0.034283 | 0.051282 | 0.109178 | — | — | — |
| access_m_fail2.test | COMPILE_FAIL | 0.033388 | 0.052024 | 0.111214 | — | — | — |
| access_q_test.test | RUN | 0.277710 | 0.618007 | 0.897516 | 0.001989 | 0.002200 | 0.001960 |
| access_q_fail.test | COMPILE_FAIL | 0.025452 | 0.044876 | 0.072773 | — | — | — |
| access_v_test.test | RUN | 0.282229 | 0.653336 | 0.852767 | 0.001775 | 0.002030 | 0.001863 |
| access_v_fail1.test | COMPILE_FAIL | 0.023578 | 0.040372 | 0.077233 | — | — | — |
| access_v_fail2.test | COMPILE_FAIL | 0.022978 | 0.040149 | 0.074704 | — | — | — |
| assign_test.test | RUN | 0.421244 | 0.989151 | 1.592377 | 0.002068 | 0.002222 | 0.002098 |
| to_string_test.test | RUN | 0.480594 | 1.624861 | 8.544527 | 0.001838 | 0.002270 | 0.002098 |
| cmp_vv_test.test | RUN | 0.344315 | 0.832786 | 1.084218 | 0.001714 | 0.002198 | 0.001883 |
| cross_test.test | RUN | 0.340112 | 0.730405 | 1.084603 | 0.001804 | 0.002128 | 0.002010 |
| div_eq_vs_test.test | RUN | 0.320117 | 0.711022 | 1.028458 | 0.002187 | 0.002270 | 0.001959 |
| div_vs_test.test | RUN | 0.337130 | 0.854733 | 1.060281 | 0.001968 | 0.002226 | 0.002016 |
| dot_vv_test.test | RUN | 0.319062 | 0.755038 | 1.041293 | 0.001841 | 0.002032 | 0.001752 |
| eq_vv_test.test | RUN | 0.356381 | 0.856867 | 1.069189 | 0.001856 | 0.002023 | 0.002038 |
| mag_v_test.test | RUN | 0.317301 | 0.700179 | 1.009248 | 0.002035 | 0.002256 | 0.001806 |
| mag_sqr_v_test.test | RUN | 0.316861 | 0.699012 | 0.991469 | 0.002152 | 0.001912 | 0.001921 |
| minus_v_test.test | RUN | 0.331964 | 0.815227 | 1.071909 | 0.001756 | 0.002092 | 0.001884 |
| minus_eq_vv_test.test | RUN | 0.329786 | 0.821294 | 1.058694 | 0.001844 | 0.002215 | 0.001886 |
| minus_vv_test.test | RUN | 0.337433 | 0.885163 | 1.032567 | 0.001978 | 0.001903 | 0.001765 |
| mul_eq_vs_test.test | RUN | 0.323388 | 0.686318 | 1.031423 | 0.001914 | 0.002084 | 0.002053 |
| mul_vs_test.test | RUN | 0.334850 | 0.856327 | 1.054551 | 0.001766 | 0.002217 | 0.001848 |
| mul_sv_test.test | RUN | 0.339201 | 0.855892 | 1.104448 | 0.001884 | 0.002222 | 0.002030 |
| mul_vm_test.test | RUN | 0.475766 | 1.500163 | 1.719207 | 0.001874 | 0.002269 | 0.002083 |
| normalize_v_test.test | RUN | 0.338163 | 1.057692 | 1.057795 | 0.001679 | 0.002169 | 0.002002 |
| plus_eq_vv_test.test | RUN | 0.324907 | 0.788548 | 1.071774 | 0.002050 | 0.001881 | 0.002117 |
| plus_vv_test.test | RUN | 0.350353 | 0.861795 | 1.073879 | 0.001843 | 0.002188 | 0.001932 |
| scalar_cast_v_test.test | RUN | 0.318199 | 0.638957 | 0.922225 | 0.001860 | 0.002257 | 0.001924 |
| vec_index_test.test | RUN | 0.277163 | 0.647619 | 0.835411 | 0.001992 | 0.001760 | 0.001776 |
| vec_register_test.test | RUN | 0.182718 | 0.572421 | 0.613029 | 0.002077 | 0.002286 | 0.001827 |
| cmp_mm_test.test | RUN | 0.522054 | 1.847779 | 2.159153 | 0.002175 | 0.002296 | 0.002078 |
| determinant_test.test | RUN | 0.372457 | 0.949479 | 1.235064 | 0.002120 | 0.002083 | 0.002155 |
| div_eq_ms_test.test | RUN | 0.384193 | 0.886248 | 1.394949 | 0.002073 | 0.001892 | 0.001990 |
| div_ms_test.test | RUN | 0.446719 | 1.402295 | 1.644578 | 0.002150 | 0.002035 | 0.002018 |
| eq_mm_test.test | RUN | 0.508427 | 1.717024 | 2.031433 | 0.002216 | 0.001880 | 0.001586 |
| minus_m_test.test | RUN | 0.451795 | 1.371248 | 1.556409 | 0.002054 | 0.002170 | 0.001521 |
| minus_eq_mm_test.test | RUN | 0.412968 | 1.276835 | 1.455179 | 0.001918 | 0.002038 | 0.002068 |
| minus_mm_test.test | RUN | 0.468459 | 1.642005 | 1.731208 | 0.002142 | 0.002150 | 0.002085 |
| mul_eq_mm_test.test | RUN | 0.391137 | 1.195943 | 1.328836 | 0.002113 | 0.002018 | 0.002044 |
| mul_eq_ms_test.test | RUN | 0.390451 | 0.890243 | 1.401958 | 0.002104 | 0.001954 | 0.002026 |
| mul_mm_test.test | RUN | 0.540706 | 2.679210 | 2.194280 | 0.002111 | 0.002101 | 0.001984 |
| mul_ms_test.test | RUN | 0.449698 | 1.405305 | 1.638106 | 0.002012 | 0.002118 | 0.002205 |
| mul_sm_test.test | RUN | 0.461376 | 1.409615 | 1.646359 | 0.002106 | 0.002030 | 0.002174 |
| mul_mv_test.test | RUN | 0.460647 | 1.522523 | 1.706142 | 0.002177 | 0.002167 | 0.002117 |
| inverse_m_test.test | RUN | 0.627391 | 2.723485 | 2.348933 | 0.002310 | 0.002014 | 0.001916 |
| plus_eq_mm_test.test | RUN | 0.419814 | 1.263264 | 1.468178 | 0.002046 | 0.002165 | 0.002188 |
| plus_mm_test.test | RUN | 0.474470 | 1.652064 | 1.749498 | 0.002191 | 0.002096 | 0.001868 |
| scalar_cast_m_test.test | RUN | 0.363653 | 0.757437 | 1.105512 | 0.002056 | 0.002171 | 0.002046 |
| mat_index_test.test | RUN | 0.298785 | 0.707184 | 0.957063 | 0.002181 | 0.001854 | 0.002111 |
| cmp_qq_test.test | RUN | 0.319872 | 0.671629 | 0.965491 | 0.002194 | 0.002140 | 0.002313 |
| conjugate_test.test | RUN | 0.318533 | 0.667456 | 0.992123 | 0.002221 | 0.002230 | 0.002226 |
| normalize_q_test.test | RUN | 0.332110 | 0.749058 | 0.978416 | 0.001944 | 0.001975 | 0.002238 |
| div_eq_qs_test.test | RUN | 0.320283 | 0.653786 | 0.954805 | 0.001946 | 0.001991 | 0.002098 |
| div_qs_test.test | RUN | 0.317996 | 0.676248 | 0.951744 | 0.002034 | 0.001892 | 0.002190 |
| dot_qq_test.test | RUN | 0.321868 | 0.659116 | 0.968198 | 0.001972 | 0.002222 | 0.002213 |
| eq_qq_test.test | RUN | 0.316257 | 0.720273 | 0.960357 | 0.002043 | 0.002276 | 0.002214 |
| inverse_q_test.test | RUN | 0.379781 | 0.893587 | 1.236886 | 0.002018 | 0.002080 | 0.002138 |
| mag_q_test.test | RUN | 0.317104 | 0.681904 | 0.934422 | 0.002058 | 0.001758 | 0.002004 |
| mag_sqr_q_test.test | RUN | 0.313246 | 0.675444 | 0.928051 | 0.002105 | 0.002258 | 0.001966 |
| minus_q_test.test | RUN | 0.317657 | 0.687018 | 0.947638 | 0.002080 | 0.002132 | 0.002322 |
| minus_eq_qq_test.test | RUN | 0.319320 | 0.672256 | 0.936141 | 0.002046 | 0.002018 | 0.002132 |
| minus_qq_test.test | RUN | 0.316209 | 0.709268 | 0.960975 | 0.002081 | 0.002076 | 0.002111 |
| mul_eq_qs_test.test | RUN | 0.311328 | 0.638045 | 0.932774 | 0.001734 | 0.002230 | 0.001883 |
| mul_qs_test.test | RUN | 0.313440 | 0.666753 | 0.959626 | 0.002088 | 0.002207 | 0.002161 |
| mul_qv_test.test | RUN | 0.391098 | 0.945012 | 1.242466 | 0.002200 | 0.002162 | 0.002240 |
| mul_qq_test.test | RUN | 0.376587 | 0.963515 | 1.201781 | 0.001964 | 0.002060 | 0.002266 |
| mul_eq_qq_test.test | RUN | 0.372320 | 0.944598 | 1.189238 | 0.002096 | 0.002124 | 0.002150 |
| plus_eq_qq_test.test | RUN | 0.312329 | 0.696582 | 0.967577 | 0.001932 | 0.002133 | 0.002004 |
| plus_qq_test.test | RUN | 0.315048 | 0.695066 | 0.943720 | 0.002012 | 0.001875 | 0.002230 |
| scalar_cast_q_test.test | RUN | 0.307621 | 0.660473 | 0.964672 | 0.001862 | 0.002085 | 0.002258 |
| slerp_test.test | RUN | 0.340132 | 1.311561 | 1.124675 | 0.023326 | 0.018397 | 0.019687 |
| convert_to_test.test | RUN | 0.460564 | 1.213570 | 1.733836 | 0.002349 | 0.001866 | 0.002238 |
| rot_mat_test.test | RUN | 0.697313 | 5.340323 | 5.445960 | 0.054667 | 0.049581 | 0.046279 |
| rot_quat_test.test | RUN | 0.387263 | 1.125584 | 1.306407 | 0.002142 | 0.002306 | 0.002198 |
| rotx_mat_test.test | RUN | 0.427483 | 1.421940 | 1.626193 | 0.001894 | 0.002251 | 0.002122 |
| rotx_quat_test.test | RUN | 0.380111 | 0.937357 | 1.189221 | 0.001920 | 0.002110 | 0.002308 |
| roty_mat_test.test | RUN | 0.439808 | 1.434762 | 1.528364 | 0.002044 | 0.002136 | 0.002152 |
| roty_quat_test.test | RUN | 0.373651 | 0.906870 | 1.214370 | 0.002212 | 0.002246 | 0.002163 |
| rotz_mat_test.test | RUN | 0.454530 | 1.621938 | 1.761923 | 0.001758 | 0.002017 | 0.002231 |
| rotz_quat_test.test | RUN | 0.381494 | 0.930456 | 1.148698 | 0.002016 | 0.002050 | 0.002225 |
| zero_vec_test.test | RUN | 0.327085 | 0.810277 | 0.945481 | 0.002269 | 0.001793 | 0.001990 |
| zero_mat_test.test | RUN | 0.404084 | 1.322550 | 1.412236 | 0.002242 | 0.002228 | 0.001966 |
| zero_quat_test.test | RUN | 0.309354 | 0.696273 | 0.909870 | 0.001906 | 0.002109 | 0.002240 |
| identity_mat_test.test | RUN | 0.377173 | 0.976869 | 1.230571 | 0.002156 | 0.002052 | 0.003883 |
| identity_quat_test.test | RUN | 0.307772 | 0.641504 | 0.936468 | 0.002155 | 0.002239 | 0.001971 |
| col_test.test | RUN | 0.594229 | 2.063274 | 2.657392 | 0.001908 | 0.002132 | 0.002140 |
| col_mat_test.test | RUN | 0.386336 | 0.921204 | 1.307256 | 0.002195 | 0.002164 | 0.002128 |
| neg_col_test.test | RUN | 0.444665 | 1.345079 | 1.624997 | 0.002023 | 0.002151 | 0.001788 |
| neg_row_test.test | RUN | 0.466529 | 1.333287 | 1.667276 | 0.002151 | 0.002231 | 0.002051 |
| del_col_test.test | RUN | 0.478646 | 1.480176 | 1.649494 | 0.002058 | 0.002218 | 0.002028 |
| del_row_test.test | RUN | 0.484186 | 1.438698 | 1.640267 | 0.002214 | 0.002209 | 0.002172 |
| del_row_col_test.test | RUN | 0.665602 | 2.721561 | 3.088980 | 0.002222 | 0.002140 | 0.002144 |
| swap_cols_test.test | RUN | 0.864964 | 3.600899 | 3.882790 | 0.002206 | 0.002042 | 0.001995 |
| swap_rows_test.test | RUN | 0.949363 | 3.812760 | 3.745780 | 0.002192 | 0.002046 | 0.002142 |
| diag_test.test | RUN | 0.411294 | 0.973913 | 1.372847 | 0.001944 | 0.002190 | 0.002010 |
| diag_mat_test.test | RUN | 0.404586 | 0.967941 | 1.310135 | 0.002072 | 0.001921 | 0.001791 |
| row_test.test | RUN | 0.591241 | 2.000206 | 2.649430 | 0.001917 | 0.002084 | 0.002068 |
| row_mat_test.test | RUN | 0.392859 | 0.910950 | 1.241786 | 0.002099 | 0.002020 | 0.002206 |
| transpose_test.test | RUN | 0.475962 | 1.402290 | 1.652383 | 0.001847 | 0.001995 | 0.002123 |
| translation_test.test | RUN | 0.368423 | 0.872639 | 1.274602 | 0.001836 | 0.002141 | 0.002134 |
| translation_mat_test.test | RUN | 0.410998 | 0.904794 | 1.347094 | 0.002089 | 0.002130 | 0.001714 |
| swizzle_const_fail.test | COMPILE_FAIL | 0.139471 | 0.270232 | 0.345098 | — | — | — |
| swizzle2_test2.test | RUN | 0.169865 | 0.397633 | 0.520473 | 0.001825 | 0.001975 | 0.001841 |
| swizzle2_test3.test | RUN | 0.170619 | 0.370807 | 0.517660 | 0.001932 | 0.001752 | 0.001651 |
| swizzle2_test4.test | RUN | 0.171799 | 0.377420 | 0.542496 | 0.001710 | 0.002206 | 0.001852 |
| swizzle2_test.test | RUN | 0.532469 | 1.056368 | 1.739709 | 0.002090 | 0.002168 | 0.002103 |
| swizzle3_test2.test | RUN | 0.189803 | 0.408621 | 0.617277 | 0.001898 | 0.002145 | 0.002120 |
| swizzle3_test3.test | RUN | 0.188602 | 0.403340 | 0.602201 | 0.001884 | 0.002172 | 0.001752 |
| swizzle3_test4.test | RUN | 0.187810 | 0.398893 | 0.608719 | 0.001934 | 0.002145 | 0.001731 |
| swizzle3_test.test | RUN | 0.516390 | 1.082312 | 1.731476 | 0.002138 | 0.002002 | 0.002142 |
| swizzle4_test2.test | RUN | 0.310019 | 0.578710 | 1.055482 | 0.001983 | 0.002166 | 0.001818 |
| swizzle4_test3.test | RUN | 0.318809 | 0.582015 | 1.005333 | 0.001880 | 0.001871 | 0.001977 |
| swizzle4_test4.test | RUN | 0.317815 | 0.610557 | 1.001335 | 0.001884 | 0.001884 | 0.002147 |
| swizzle4_test.test | RUN | 0.537625 | 1.178337 | 1.763176 | 0.001925 | 0.002100 | 0.002155 |
| deduce_scalar_test.test | COMPILE | 0.027397 | 0.057701 | 0.093877 | — | — | — |
| deduce_scalar_mq_test.test | RUN | 0.206441 | 0.449335 | 0.581625 | 0.001880 | 0.001932 | 0.001965 |
| deduce_scalar_mv_test.test | RUN | 0.241689 | 0.523426 | 0.716907 | 0.001852 | 0.002028 | 0.002028 |
| deduce_scalar_fail.test | COMPILE_FAIL | 0.022744 | 0.037964 | 0.069013 | — | — | — |
| deduce_mat_test.test | COMPILE | 0.024417 | 0.052456 | 0.081624 | — | — | — |
| deduce_quat_test.test | COMPILE | 0.024058 | 0.051727 | 0.077901 | — | — | — |
| deduce_vec_test.test | COMPILE | 0.025357 | 0.051045 | 0.080429 | — | — | — |
| interop_test.test | RUN | 0.250105 | 0.551016 | 1.063583 | 0.000963 | 0.000685 | 0.002184 |
| transform_test.test | RUN | 0.451580 | 0.948727 | 1.357972 | 0.001680 | 0.001575 | 0.001522 |
| projection_test.test | RUN | 0.324495 | 0.708693 | 0.993812 | 0.001758 | 0.001602 | 0.001556 |
| scalar_traits_test.test | COMPILE | 0.026532 | 0.054324 | 0.086064 | — | — | — |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.948× | 0.933×, 0.963× | 0.997× |
| clang | 1.005× | 0.987×, 1.024× | 0.989× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1359 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44390936409).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| access_m_test.test | 10 | 0.001272s | 0.001295s | 0.001276s | byte equality observed |
| access_q_test.test | 10 | 0.001300s | 0.001300s | 0.001272s | byte equality observed |
| access_v_test.test | 10 | 0.001282s | 0.001338s | 0.001280s | byte equality observed |
| assign_test.test | 10 | 0.001289s | 0.001277s | 0.001320s | byte equality observed |
| cmp_mm_test.test | 10 | 0.001315s | 0.001317s | 0.001309s | byte equality observed |
| cmp_qq_test.test | 10 | 0.001279s | 0.001304s | 0.001300s | byte equality observed |
| cmp_vv_test.test | 10 | 0.001278s | 0.001306s | 0.001309s | byte equality observed |
| col_mat_test.test | 10 | 0.001302s | 0.001279s | 0.001301s | byte equality observed |
| col_test.test | 10 | 0.001293s | 0.001298s | 0.001297s | byte equality observed |
| conjugate_test.test | 10 | 0.001279s | 0.001292s | 0.001286s | byte equality observed |
| convert_to_test.test | 10 | 0.001284s | 0.001325s | 0.001322s | byte equality observed |
| cross_test.test | 10 | 0.001266s | 0.001267s | 0.001293s | byte equality observed |
| deduce_scalar_mq_test.test | 10 | 0.001268s | 0.001269s | 0.001278s | byte equality observed |
| deduce_scalar_mv_test.test | 10 | 0.001300s | 0.001265s | 0.001295s | byte equality observed |
| del_col_test.test | 10 | 0.001304s | 0.001288s | 0.001261s | byte equality observed |
| del_row_col_test.test | 10 | 0.001306s | 0.001277s | 0.001304s | byte equality observed |
| del_row_test.test | 10 | 0.001272s | 0.001257s | 0.001254s | byte equality observed |
| determinant_test.test | 10 | 0.001312s | 0.001289s | 0.001307s | byte equality observed |
| diag_mat_test.test | 10 | 0.001301s | 0.001286s | 0.001262s | byte equality observed |
| diag_test.test | 10 | 0.001300s | 0.001318s | 0.001281s | byte equality observed |
| div_eq_ms_test.test | 10 | 0.001280s | 0.001255s | 0.001285s | byte equality observed |
| div_eq_qs_test.test | 10 | 0.001296s | 0.001271s | 0.001316s | byte equality observed |
| div_eq_vs_test.test | 10 | 0.001269s | 0.001262s | 0.001303s | byte equality observed |
| div_ms_test.test | 10 | 0.001295s | 0.001309s | 0.001305s | byte equality observed |
| div_qs_test.test | 10 | 0.001312s | 0.001295s | 0.001281s | byte equality observed |
| div_vs_test.test | 10 | 0.001283s | 0.001293s | 0.001304s | byte equality observed |
| dot_qq_test.test | 10 | 0.001308s | 0.001326s | 0.001294s | byte equality observed |
| dot_vv_test.test | 10 | 0.001291s | 0.001315s | 0.001312s | byte equality observed |
| eq_mm_test.test | 10 | 0.001306s | 0.001354s | 0.001348s | byte equality observed |
| eq_qq_test.test | 8 | 0.001302s | 0.001290s | 0.001333s | byte equality observed |
| eq_vv_test.test | 10 | 0.001280s | 0.001322s | 0.001272s | byte equality observed |
| identity_mat_test.test | 10 | 0.001310s | 0.001300s | 0.001335s | byte equality observed |
| identity_quat_test.test | 10 | 0.001311s | 0.001322s | 0.001283s | byte equality observed |
| interop_test.test | 10 | 0.000596s | 0.000587s | 0.001276s | byte equality observed |
| inverse_m_test.test | 10 | 0.001337s | 0.001325s | 0.001333s | byte equality observed |
| inverse_q_test.test | 10 | 0.001307s | 0.001321s | 0.001312s | byte equality observed |
| mag_q_test.test | 10 | 0.001277s | 0.001263s | 0.001263s | byte equality observed |
| mag_sqr_q_test.test | 10 | 0.001297s | 0.001277s | 0.001250s | byte equality observed |
| mag_sqr_v_test.test | 10 | 0.001302s | 0.001319s | 0.001281s | byte equality observed |
| mag_v_test.test | 10 | 0.001314s | 0.001276s | 0.001290s | byte equality observed |
| mat_index_test.test | 10 | 0.001290s | 0.001305s | 0.001322s | byte equality observed |
| mat_traits_array_test.test | 10 | 0.001289s | 0.001275s | 0.001284s | byte equality observed |
| mat_traits_std_array_test.test | 10 | 0.001292s | 0.001276s | 0.001305s | byte equality observed |
| math_test.test | 10 | 0.001963s | 0.001897s | 0.001752s | byte equality observed |
| minus_eq_mm_test.test | 10 | 0.001288s | 0.001262s | 0.001296s | byte equality observed |
| minus_eq_qq_test.test | 10 | 0.001280s | 0.001305s | 0.001323s | byte equality observed |
| minus_eq_vv_test.test | 10 | 0.001295s | 0.001279s | 0.001314s | byte equality observed |
| minus_m_test.test | 10 | 0.001288s | 0.001321s | 0.001302s | byte equality observed |
| minus_mm_test.test | 10 | 0.001281s | 0.001293s | 0.001301s | byte equality observed |
| minus_q_test.test | 10 | 0.001275s | 0.001294s | 0.001391s | byte equality observed |
| minus_qq_test.test | 10 | 0.001258s | 0.001298s | 0.001273s | byte equality observed |
| minus_v_test.test | 9 | 0.001271s | 0.001325s | 0.001287s | byte equality observed |
| minus_vv_test.test | 10 | 0.001259s | 0.001340s | 0.001320s | byte equality observed |
| mul_eq_mm_test.test | 10 | 0.001307s | 0.001296s | 0.001242s | byte equality observed |
| mul_eq_ms_test.test | 10 | 0.001290s | 0.001260s | 0.001356s | byte equality observed |
| mul_eq_qq_test.test | 9 | 0.001294s | 0.001319s | 0.001351s | byte equality observed |
| mul_eq_qs_test.test | 10 | 0.001291s | 0.001329s | 0.001344s | byte equality observed |
| mul_eq_vs_test.test | 9 | 0.001289s | 0.001290s | 0.001344s | byte equality observed |
| mul_mm_test.test | 9 | 0.001285s | 0.001327s | 0.001324s | byte equality observed |
| mul_ms_test.test | 10 | 0.001281s | 0.001288s | 0.001308s | byte equality observed |
| mul_mv_test.test | 10 | 0.001276s | 0.001297s | 0.001312s | byte equality observed |
| mul_qq_test.test | 10 | 0.001289s | 0.001331s | 0.001341s | byte equality observed |
| mul_qs_test.test | 10 | 0.001263s | 0.001268s | 0.001288s | byte equality observed |
| mul_qv_test.test | 10 | 0.001303s | 0.001304s | 0.001310s | byte equality observed |
| mul_sm_test.test | 10 | 0.001271s | 0.001293s | 0.001277s | byte equality observed |
| mul_sv_test.test | 10 | 0.001267s | 0.001313s | 0.001287s | byte equality observed |
| mul_vm_test.test | 10 | 0.001327s | 0.001288s | 0.001392s | byte equality observed |
| mul_vs_test.test | 10 | 0.001279s | 0.001327s | 0.001386s | byte equality observed |
| neg_col_test.test | 10 | 0.001300s | 0.001287s | 0.001448s | byte equality observed |
| neg_row_test.test | 10 | 0.001318s | 0.001315s | 0.001443s | byte equality observed |
| normalize_q_test.test | 10 | 0.001308s | 0.001275s | 0.001481s | byte equality observed |
| normalize_v_test.test | 10 | 0.001319s | 0.001285s | 0.001466s | byte equality observed |
| plus_eq_mm_test.test | 10 | 0.001327s | 0.001286s | 0.001475s | byte equality observed |
| plus_eq_qq_test.test | 10 | 0.001274s | 0.001270s | 0.001465s | byte equality observed |
| plus_eq_vv_test.test | 10 | 0.001266s | 0.001341s | 0.001479s | byte equality observed |
| plus_mm_test.test | 10 | 0.001269s | 0.001286s | 0.001502s | byte equality observed |
| plus_qq_test.test | 10 | 0.001267s | 0.001282s | 0.001503s | byte equality observed |
| plus_vv_test.test | 10 | 0.001318s | 0.001274s | 0.001482s | byte equality observed |
| projection_test.test | 10 | 0.001291s | 0.001304s | 0.001460s | byte equality observed |
| quat_traits_array_test.test | 10 | 0.001321s | 0.001284s | 0.001512s | byte equality observed |
| quat_traits_std_array_test.test | 10 | 0.001273s | 0.001243s | 0.001503s | byte equality observed |
| rot_mat_test.test | 1 | 0.039034s | 0.032693s | 0.043206s | byte equality observed |
| rot_quat_test.test | 10 | 0.001269s | 0.001242s | 0.001499s | byte equality observed |
| rotx_mat_test.test | 10 | 0.001326s | 0.001270s | 0.001483s | byte equality observed |
| rotx_quat_test.test | 10 | 0.001363s | 0.001340s | 0.001456s | byte equality observed |
| roty_mat_test.test | 10 | 0.001329s | 0.001392s | 0.001528s | byte equality observed |
| roty_quat_test.test | 10 | 0.001321s | 0.001311s | 0.001500s | byte equality observed |
| rotz_mat_test.test | 10 | 0.001386s | 0.001356s | 0.001542s | byte equality observed |
| rotz_quat_test.test | 10 | 0.001372s | 0.001298s | 0.001527s | byte equality observed |
| row_mat_test.test | 10 | 0.001297s | 0.001294s | 0.001497s | byte equality observed |
| row_test.test | 10 | 0.001372s | 0.001335s | 0.001503s | byte equality observed |
| scalar_cast_m_test.test | 10 | 0.001437s | 0.001333s | 0.001503s | byte equality observed |
| scalar_cast_q_test.test | 10 | 0.001423s | 0.001358s | 0.001476s | byte equality observed |
| scalar_cast_v_test.test | 10 | 0.001465s | 0.001404s | 0.001475s | byte equality observed |
| slerp_test.test | 2 | 0.022020s | 0.017281s | 0.019118s | byte equality observed |
| swap_cols_test.test | 10 | 0.001452s | 0.001361s | 0.001449s | byte equality observed |
| swap_rows_test.test | 10 | 0.001502s | 0.001412s | 0.001461s | byte equality observed |
| swizzle2_test.test | 10 | 0.001442s | 0.001449s | 0.001451s | byte equality observed |
| swizzle2_test2.test | 10 | 0.001493s | 0.001474s | 0.001499s | byte equality observed |
| swizzle2_test3.test | 10 | 0.001474s | 0.001480s | 0.001539s | byte equality observed |
| swizzle2_test4.test | 10 | 0.001490s | 0.001468s | 0.001508s | byte equality observed |
| swizzle3_test.test | 10 | 0.001483s | 0.001491s | 0.001491s | byte equality observed |
| swizzle3_test2.test | 10 | 0.001488s | 0.001522s | 0.001517s | byte equality observed |
| swizzle3_test3.test | 10 | 0.001483s | 0.001484s | 0.001491s | byte equality observed |
| swizzle3_test4.test | 10 | 0.001510s | 0.001499s | 0.001481s | byte equality observed |
| swizzle4_test.test | 10 | 0.001515s | 0.001484s | 0.001516s | byte equality observed |
| swizzle4_test2.test | 10 | 0.001489s | 0.001470s | 0.001521s | byte equality observed |
| swizzle4_test3.test | 10 | 0.001512s | 0.001512s | 0.001480s | byte equality observed |
| swizzle4_test4.test | 8 | 0.001502s | 0.001489s | 0.001489s | byte equality observed |
| to_string_test.test | 10 | 0.001534s | 0.001545s | 0.001558s | byte equality observed |
| transform_test.test | 10 | 0.001498s | 0.001527s | 0.001497s | byte equality observed |
| translation_mat_test.test | 10 | 0.001497s | 0.001484s | 0.001515s | byte equality observed |
| translation_test.test | 10 | 0.001493s | 0.001495s | 0.001497s | byte equality observed |
| transpose_test.test | 10 | 0.001494s | 0.001511s | 0.001488s | byte equality observed |
| vec_index_test.test | 10 | 0.001503s | 0.001499s | 0.001489s | byte equality observed |
| vec_register_test.test | 10 | 0.001501s | 0.001492s | 0.001486s | byte equality observed |
| vec_traits_array_test.test | 10 | 0.001475s | 0.001501s | 0.001527s | byte equality observed |
| vec_traits_gnuc_test.test | 10 | 0.001530s | 0.001479s | 0.001495s | byte equality observed |
| vec_traits_std_array_test.test | 10 | 0.001513s | 0.001473s | 0.001492s | byte equality observed |
| zero_mat_test.test | 10 | 0.001489s | 0.001503s | 0.001505s | byte equality observed |
| zero_quat_test.test | 10 | 0.001488s | 0.001485s | 0.001497s | byte equality observed |
| zero_vec_test.test | 10 | 0.001477s | 0.001512s | 0.001501s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44390936409).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
