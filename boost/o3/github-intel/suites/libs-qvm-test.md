# libs/qvm/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| math_test.test | RUN | 0.196336 | 0.564536 | 0.577469 | 0.001628 | 0.001604 | 0.001355 |
| mat_traits_array_test.test | RUN | 0.152913 | 0.561726 | 0.452189 | 0.001439 | 0.001187 | 0.000978 |
| mat_traits_std_array_test.test | RUN | 0.153606 | 0.427362 | 0.457618 | 0.001297 | 0.001256 | 0.000901 |
| vec_traits_array_test.test | RUN | 0.131894 | 0.438206 | 0.389493 | 0.001165 | 0.001404 | 0.001153 |
| vec_traits_gnuc_test.test | RUN | 0.246004 | 0.514078 | 0.742164 | 0.001262 | 0.001486 | 0.001082 |
| vec_traits_std_array_test.test | RUN | 0.130882 | 0.332635 | 0.373710 | 0.000882 | 0.001362 | 0.001314 |
| quat_traits_array_test.test | RUN | 0.127990 | 0.460134 | 0.385395 | 0.001196 | 0.001243 | 0.000827 |
| quat_traits_std_array_test.test | RUN | 0.126344 | 0.344263 | 0.371216 | 0.001203 | 0.001249 | 0.001042 |
| access_m_test.test | RUN | 0.210074 | 0.811361 | 0.865834 | 0.001263 | 0.001351 | 0.001128 |
| access_m_fail1.test | COMPILE_FAIL | 0.020150 | 0.033580 | 0.053316 | — | — | — |
| access_m_fail2.test | COMPILE_FAIL | 0.019972 | 0.034068 | 0.052145 | — | — | — |
| access_q_test.test | RUN | 0.181727 | 0.416412 | 0.519277 | 0.001178 | 0.001233 | 0.001134 |
| access_q_fail.test | COMPILE_FAIL | 0.015430 | 0.027406 | 0.044835 | — | — | — |
| access_v_test.test | RUN | 0.179945 | 0.427996 | 0.508615 | 0.001089 | 0.001273 | 0.001116 |
| access_v_fail1.test | COMPILE_FAIL | 0.013400 | 0.024153 | 0.041189 | — | — | — |
| access_v_fail2.test | COMPILE_FAIL | 0.014009 | 0.025406 | 0.040933 | — | — | — |
| assign_test.test | RUN | 0.268417 | 0.702194 | 0.925324 | 0.001343 | 0.001474 | 0.001059 |
| to_string_test.test | RUN | 0.315593 | 1.180384 | 5.483147 | 0.000829 | 0.001324 | 0.001158 |
| cmp_vv_test.test | RUN | 0.221789 | 0.555023 | 0.628351 | 0.000992 | 0.001419 | 0.001104 |
| cross_test.test | RUN | 0.207083 | 0.506722 | 0.606685 | 0.001038 | 0.001305 | 0.001094 |
| div_eq_vs_test.test | RUN | 0.201938 | 0.475512 | 0.610369 | 0.001432 | 0.001278 | 0.001194 |
| div_vs_test.test | RUN | 0.213359 | 0.586002 | 0.629221 | 0.001128 | 0.001232 | 0.001137 |
| dot_vv_test.test | RUN | 0.203390 | 0.526421 | 0.600068 | 0.001164 | 0.001370 | 0.001114 |
| eq_vv_test.test | RUN | 0.222296 | 0.590636 | 0.681835 | 0.001030 | 0.001456 | 0.001274 |
| mag_v_test.test | RUN | 0.199011 | 0.488326 | 0.587698 | 0.001232 | 0.001126 | 0.001070 |
| mag_sqr_v_test.test | RUN | 0.200807 | 0.474040 | 0.551363 | 0.001274 | 0.001302 | 0.001063 |
| minus_v_test.test | RUN | 0.205167 | 0.556946 | 0.644379 | 0.001112 | 0.001264 | 0.001127 |
| minus_eq_vv_test.test | RUN | 0.205578 | 0.544408 | 0.628361 | 0.001072 | 0.001393 | 0.001015 |
| minus_vv_test.test | RUN | 0.211619 | 0.587951 | 0.624379 | 0.001212 | 0.001346 | 0.001051 |
| mul_eq_vs_test.test | RUN | 0.200946 | 0.466741 | 0.622802 | 0.001167 | 0.001388 | 0.001250 |
| mul_vs_test.test | RUN | 0.211141 | 0.585575 | 0.627721 | 0.001090 | 0.001493 | 0.001103 |
| mul_sv_test.test | RUN | 0.211313 | 0.588758 | 0.660775 | 0.001048 | 0.001337 | 0.001021 |
| mul_vm_test.test | RUN | 0.292645 | 1.034828 | 0.957061 | 0.001200 | 0.001239 | 0.001147 |
| normalize_v_test.test | RUN | 0.218042 | 0.720520 | 0.675650 | 0.001337 | 0.001415 | 0.001231 |
| plus_eq_vv_test.test | RUN | 0.201761 | 0.542566 | 0.627167 | 0.001278 | 0.001399 | 0.001158 |
| plus_vv_test.test | RUN | 0.212131 | 0.593710 | 0.650595 | 0.001123 | 0.001263 | 0.001028 |
| scalar_cast_v_test.test | RUN | 0.201255 | 0.434881 | 0.560656 | 0.001190 | 0.001178 | 0.001025 |
| vec_index_test.test | RUN | 0.171786 | 0.440123 | 0.491864 | 0.001273 | 0.001311 | 0.001135 |
| vec_register_test.test | RUN | 0.113314 | 0.389039 | 0.372206 | 0.001420 | 0.001396 | 0.001090 |
| cmp_mm_test.test | RUN | 0.343122 | 1.298671 | 1.341933 | 0.001361 | 0.001296 | 0.001123 |
| determinant_test.test | RUN | 0.236577 | 0.651994 | 0.705258 | 0.001298 | 0.001508 | 0.001138 |
| div_eq_ms_test.test | RUN | 0.238501 | 0.592783 | 0.825138 | 0.001446 | 0.001264 | 0.001149 |
| div_ms_test.test | RUN | 0.283944 | 0.977133 | 0.979327 | 0.001116 | 0.001288 | 0.001092 |
| eq_mm_test.test | RUN | 0.333499 | 1.190080 | 1.277412 | 0.001257 | 0.001390 | 0.001106 |
| minus_m_test.test | RUN | 0.286182 | 0.943196 | 0.959814 | 0.001283 | 0.001552 | 0.001253 |
| minus_eq_mm_test.test | RUN | 0.261870 | 0.886226 | 0.899604 | 0.001142 | 0.001496 | 0.001170 |
| minus_mm_test.test | RUN | 0.297017 | 1.123017 | 1.037172 | 0.001142 | 0.001556 | 0.001079 |
| mul_eq_mm_test.test | RUN | 0.244197 | 0.828204 | 0.801763 | 0.001321 | 0.001247 | 0.001257 |
| mul_eq_ms_test.test | RUN | 0.239200 | 0.605583 | 0.809397 | 0.001218 | 0.001297 | 0.001110 |
| mul_mm_test.test | RUN | 0.357870 | 1.859394 | 1.335460 | 0.001176 | 0.001516 | 0.001048 |
| mul_ms_test.test | RUN | 0.287240 | 0.977328 | 1.010008 | 0.001133 | 0.001313 | 0.001236 |
| mul_sm_test.test | RUN | 0.296711 | 0.959771 | 1.023964 | 0.001236 | 0.001308 | 0.001240 |
| mul_mv_test.test | RUN | 0.297661 | 1.036955 | 1.029468 | 0.001362 | 0.001308 | 0.001117 |
| inverse_m_test.test | RUN | 0.407216 | 1.933640 | 1.441206 | 0.001347 | 0.001486 | 0.001233 |
| plus_eq_mm_test.test | RUN | 0.267489 | 0.881347 | 0.902688 | 0.001237 | 0.001182 | 0.001112 |
| plus_mm_test.test | RUN | 0.303830 | 1.129311 | 1.065206 | 0.001222 | 0.001468 | 0.001151 |
| scalar_cast_m_test.test | RUN | 0.227439 | 0.495954 | 0.651995 | 0.001160 | 0.001525 | 0.001139 |
| mat_index_test.test | RUN | 0.188261 | 0.486621 | 0.577045 | 0.001286 | 0.001513 | 0.001127 |
| cmp_qq_test.test | RUN | 0.196858 | 0.440725 | 0.545819 | 0.001117 | 0.001222 | 0.001103 |
| conjugate_test.test | RUN | 0.201795 | 0.458489 | 0.557740 | 0.001142 | 0.001483 | 0.001139 |
| normalize_q_test.test | RUN | 0.194603 | 0.517460 | 0.591032 | 0.001032 | 0.001343 | 0.001037 |
| div_eq_qs_test.test | RUN | 0.198102 | 0.431650 | 0.556349 | 0.001159 | 0.001314 | 0.001127 |
| div_qs_test.test | RUN | 0.196586 | 0.468572 | 0.557062 | 0.001288 | 0.001237 | 0.001213 |
| dot_qq_test.test | RUN | 0.192218 | 0.443611 | 0.569686 | 0.001183 | 0.001464 | 0.001114 |
| eq_qq_test.test | RUN | 0.199813 | 0.468346 | 0.588898 | 0.001255 | 0.001436 | 0.001149 |
| inverse_q_test.test | RUN | 0.243507 | 0.619840 | 0.730102 | 0.001294 | 0.001194 | 0.001065 |
| mag_q_test.test | RUN | 0.194802 | 0.456082 | 0.551182 | 0.001405 | 0.001205 | 0.001127 |
| mag_sqr_q_test.test | RUN | 0.195028 | 0.453690 | 0.545717 | 0.001146 | 0.001540 | 0.001059 |
| minus_q_test.test | RUN | 0.197693 | 0.459203 | 0.563842 | 0.001200 | 0.001420 | 0.001053 |
| minus_eq_qq_test.test | RUN | 0.198178 | 0.459939 | 0.543406 | 0.001466 | 0.001286 | 0.001041 |
| minus_qq_test.test | RUN | 0.197485 | 0.473676 | 0.570046 | 0.001458 | 0.001428 | 0.001002 |
| mul_eq_qs_test.test | RUN | 0.198253 | 0.430239 | 0.546968 | 0.001357 | 0.001310 | 0.001071 |
| mul_qs_test.test | RUN | 0.201601 | 0.458118 | 0.567743 | 0.001186 | 0.001360 | 0.001085 |
| mul_qv_test.test | RUN | 0.251759 | 0.625239 | 0.735808 | 0.001261 | 0.001466 | 0.001100 |
| mul_qq_test.test | RUN | 0.239910 | 0.634519 | 0.704416 | 0.000968 | 0.001180 | 0.001113 |
| mul_eq_qq_test.test | RUN | 0.237503 | 0.638666 | 0.696494 | 0.001313 | 0.001392 | 0.001073 |
| plus_eq_qq_test.test | RUN | 0.202540 | 0.455586 | 0.562408 | 0.001160 | 0.001247 | 0.001039 |
| plus_qq_test.test | RUN | 0.198674 | 0.467137 | 0.569967 | 0.001435 | 0.001561 | 0.001242 |
| scalar_cast_q_test.test | RUN | 0.193479 | 0.437899 | 0.542063 | 0.001133 | 0.001197 | 0.001071 |
| slerp_test.test | RUN | 0.220586 | 0.915540 | 0.674817 | 0.015033 | 0.013458 | 0.013347 |
| convert_to_test.test | RUN | 0.297493 | 0.825349 | 1.058492 | 0.001392 | 0.001217 | 0.001112 |
| rot_mat_test.test | RUN | 0.474067 | 3.789447 | 3.308343 | 0.028835 | 0.032149 | 0.034321 |
| rot_quat_test.test | RUN | 0.241339 | 0.752642 | 0.735596 | 0.001228 | 0.001318 | 0.001138 |
| rotx_mat_test.test | RUN | 0.284934 | 0.987314 | 0.967959 | 0.001295 | 0.001409 | 0.001290 |
| rotx_quat_test.test | RUN | 0.233073 | 0.644744 | 0.694956 | 0.001043 | 0.001356 | 0.001161 |
| roty_mat_test.test | RUN | 0.281430 | 0.971282 | 0.962148 | 0.001257 | 0.001439 | 0.001238 |
| roty_quat_test.test | RUN | 0.241821 | 0.642446 | 0.652591 | 0.001533 | 0.001424 | 0.001132 |
| rotz_mat_test.test | RUN | 0.296754 | 1.139945 | 1.023016 | 0.001115 | 0.001363 | 0.001063 |
| rotz_quat_test.test | RUN | 0.237731 | 0.621352 | 0.685673 | 0.001216 | 0.001408 | 0.001036 |
| zero_vec_test.test | RUN | 0.205547 | 0.549745 | 0.577693 | 0.001322 | 0.001362 | 0.001107 |
| zero_mat_test.test | RUN | 0.258969 | 0.917381 | 0.845834 | 0.001258 | 0.001243 | 0.000971 |
| zero_quat_test.test | RUN | 0.190504 | 0.461282 | 0.533277 | 0.001260 | 0.001417 | 0.001109 |
| identity_mat_test.test | RUN | 0.235601 | 0.656968 | 0.718585 | 0.001190 | 0.001304 | 0.001041 |
| identity_quat_test.test | RUN | 0.198487 | 0.442960 | 0.556362 | 0.001380 | 0.001402 | 0.001114 |
| col_test.test | RUN | 0.378397 | 1.438311 | 1.615594 | 0.001153 | 0.001271 | 0.001062 |
| col_mat_test.test | RUN | 0.254654 | 0.621948 | 0.748141 | 0.001271 | 0.001473 | 0.001127 |
| neg_col_test.test | RUN | 0.289535 | 0.885118 | 0.958598 | 0.001125 | 0.001544 | 0.001217 |
| neg_row_test.test | RUN | 0.301760 | 0.904374 | 0.971935 | 0.001188 | 0.001231 | 0.001121 |
| del_col_test.test | RUN | 0.299251 | 0.993146 | 0.995555 | 0.001206 | 0.001302 | 0.001280 |
| del_row_test.test | RUN | 0.301510 | 0.971434 | 0.994375 | 0.001208 | 0.001302 | 0.001140 |
| del_row_col_test.test | RUN | 0.423567 | 1.814014 | 1.842306 | 0.001304 | 0.001361 | 0.001075 |
| swap_cols_test.test | RUN | 0.573652 | 2.466982 | 2.254728 | 0.001389 | 0.001365 | 0.001125 |
| swap_rows_test.test | RUN | 0.635376 | 2.582729 | 2.236589 | 0.001400 | 0.001528 | 0.001181 |
| diag_test.test | RUN | 0.260025 | 0.663897 | 0.868325 | 0.001369 | 0.001410 | 0.001070 |
| diag_mat_test.test | RUN | 0.255701 | 0.641362 | 0.755653 | 0.001226 | 0.001324 | 0.001164 |
| row_test.test | RUN | 0.386569 | 1.419164 | 1.569946 | 0.001118 | 0.001309 | 0.001074 |
| row_mat_test.test | RUN | 0.244739 | 0.605372 | 0.731695 | 0.001374 | 0.001198 | 0.001296 |
| transpose_test.test | RUN | 0.296012 | 0.957152 | 1.000405 | 0.001153 | 0.001616 | 0.001084 |
| translation_test.test | RUN | 0.238419 | 0.602489 | 0.755825 | 0.001345 | 0.001485 | 0.001147 |
| translation_mat_test.test | RUN | 0.260390 | 0.614585 | 0.820033 | 0.001153 | 0.001384 | 0.001124 |
| swizzle_const_fail.test | COMPILE_FAIL | 0.086947 | 0.170701 | 0.211143 | — | — | — |
| swizzle2_test2.test | RUN | 0.104235 | 0.258789 | 0.304273 | 0.001113 | 0.001372 | 0.001138 |
| swizzle2_test3.test | RUN | 0.103369 | 0.259307 | 0.306053 | 0.001260 | 0.001208 | 0.001023 |
| swizzle2_test4.test | RUN | 0.103264 | 0.259949 | 0.299566 | 0.001125 | 0.001356 | 0.001036 |
| swizzle2_test.test | RUN | 0.329570 | 0.713492 | 0.954933 | 0.001174 | 0.001243 | 0.001176 |
| swizzle3_test2.test | RUN | 0.120051 | 0.276708 | 0.345274 | 0.001359 | 0.001257 | 0.000979 |
| swizzle3_test3.test | RUN | 0.116033 | 0.282250 | 0.327975 | 0.001041 | 0.001194 | 0.001118 |
| swizzle3_test4.test | RUN | 0.122050 | 0.276961 | 0.335764 | 0.001099 | 0.001466 | 0.001078 |
| swizzle3_test.test | RUN | 0.329546 | 0.731045 | 0.953423 | 0.001254 | 0.001303 | 0.001093 |
| swizzle4_test2.test | RUN | 0.197898 | 0.395225 | 0.536725 | 0.001205 | 0.001506 | 0.001048 |
| swizzle4_test3.test | RUN | 0.192616 | 0.394682 | 0.533912 | 0.001262 | 0.001332 | 0.001132 |
| swizzle4_test4.test | RUN | 0.194254 | 0.398149 | 0.526653 | 0.001170 | 0.001254 | 0.001052 |
| swizzle4_test.test | RUN | 0.338118 | 0.804052 | 0.983471 | 0.001175 | 0.001602 | 0.001118 |
| deduce_scalar_test.test | COMPILE | 0.016318 | 0.037021 | 0.051303 | — | — | — |
| deduce_scalar_mq_test.test | RUN | 0.130070 | 0.310388 | 0.365095 | 0.001227 | 0.001284 | 0.001067 |
| deduce_scalar_mv_test.test | RUN | 0.149866 | 0.344668 | 0.439169 | 0.001249 | 0.001248 | 0.001031 |
| deduce_scalar_fail.test | COMPILE_FAIL | 0.013316 | 0.024525 | 0.039238 | — | — | — |
| deduce_mat_test.test | COMPILE | 0.014848 | 0.033613 | 0.043826 | — | — | — |
| deduce_quat_test.test | COMPILE | 0.015208 | 0.032910 | 0.042041 | — | — | — |
| deduce_vec_test.test | COMPILE | 0.014312 | 0.033513 | 0.043457 | — | — | — |
| interop_test.test | RUN | 0.156579 | 0.410538 | 0.622530 | 0.000508 | 0.000443 | 0.001163 |
| transform_test.test | RUN | 0.305342 | 0.663114 | 0.854527 | 0.000922 | 0.001019 | 0.000802 |
| projection_test.test | RUN | 0.202716 | 0.521031 | 0.474352 | 0.000935 | 0.000906 | 0.000818 |
| scalar_traits_test.test | COMPILE | 0.015261 | 0.035089 | 0.048279 | — | — | — |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 1.014× | 1.014×, 1.014× | 0.995× |
| clang | 1.041× | 1.038×, 1.043× | 1.008× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1364 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/43778388618).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| access_m_test.test | 10 | 0.000815s | 0.000807s | 0.000791s | byte equality observed |
| access_q_test.test | 10 | 0.000782s | 0.000829s | 0.000775s | byte equality observed |
| access_v_test.test | 10 | 0.000791s | 0.000812s | 0.000790s | byte equality observed |
| assign_test.test | 10 | 0.000813s | 0.000807s | 0.000800s | byte equality observed |
| cmp_mm_test.test | 10 | 0.000842s | 0.000844s | 0.000812s | byte equality observed |
| cmp_qq_test.test | 10 | 0.000834s | 0.000791s | 0.000807s | byte equality observed |
| cmp_vv_test.test | 10 | 0.000843s | 0.000788s | 0.000810s | byte equality observed |
| col_mat_test.test | 10 | 0.000799s | 0.000785s | 0.000847s | byte equality observed |
| col_test.test | 10 | 0.000819s | 0.000843s | 0.000814s | byte equality observed |
| conjugate_test.test | 10 | 0.000825s | 0.000808s | 0.000825s | byte equality observed |
| convert_to_test.test | 10 | 0.000791s | 0.000823s | 0.000825s | byte equality observed |
| cross_test.test | 10 | 0.000805s | 0.000794s | 0.000829s | byte equality observed |
| deduce_scalar_mq_test.test | 10 | 0.000788s | 0.000824s | 0.000809s | byte equality observed |
| deduce_scalar_mv_test.test | 10 | 0.000815s | 0.000822s | 0.000816s | byte equality observed |
| del_col_test.test | 10 | 0.000804s | 0.000772s | 0.000812s | byte equality observed |
| del_row_col_test.test | 10 | 0.000804s | 0.000802s | 0.000802s | byte equality observed |
| del_row_test.test | 10 | 0.000802s | 0.000785s | 0.000798s | byte equality observed |
| determinant_test.test | 10 | 0.000826s | 0.000824s | 0.000813s | byte equality observed |
| diag_mat_test.test | 10 | 0.000811s | 0.000833s | 0.000785s | byte equality observed |
| diag_test.test | 10 | 0.000802s | 0.000785s | 0.000790s | byte equality observed |
| div_eq_ms_test.test | 10 | 0.000816s | 0.000783s | 0.000844s | byte equality observed |
| div_eq_qs_test.test | 10 | 0.000779s | 0.000820s | 0.000847s | byte equality observed |
| div_eq_vs_test.test | 10 | 0.000813s | 0.000808s | 0.000836s | byte equality observed |
| div_ms_test.test | 10 | 0.000818s | 0.000824s | 0.000845s | byte equality observed |
| div_qs_test.test | 10 | 0.000797s | 0.000813s | 0.000801s | byte equality observed |
| div_vs_test.test | 10 | 0.000819s | 0.000782s | 0.000821s | byte equality observed |
| dot_qq_test.test | 10 | 0.000811s | 0.000796s | 0.000809s | byte equality observed |
| dot_vv_test.test | 10 | 0.000811s | 0.000806s | 0.000827s | byte equality observed |
| eq_mm_test.test | 10 | 0.000842s | 0.000825s | 0.000823s | byte equality observed |
| eq_qq_test.test | 10 | 0.000802s | 0.000813s | 0.000779s | byte equality observed |
| eq_vv_test.test | 10 | 0.000806s | 0.000820s | 0.000808s | byte equality observed |
| identity_mat_test.test | 10 | 0.000806s | 0.000813s | 0.000779s | byte equality observed |
| identity_quat_test.test | 10 | 0.000778s | 0.000802s | 0.000786s | byte equality observed |
| interop_test.test | 10 | 0.000361s | 0.000362s | 0.000809s | byte equality observed |
| inverse_m_test.test | 10 | 0.000844s | 0.000832s | 0.000842s | byte equality observed |
| inverse_q_test.test | 10 | 0.000800s | 0.000831s | 0.000803s | byte equality observed |
| mag_q_test.test | 10 | 0.000799s | 0.000814s | 0.000810s | byte equality observed |
| mag_sqr_q_test.test | 10 | 0.000803s | 0.000813s | 0.000789s | byte equality observed |
| mag_sqr_v_test.test | 10 | 0.000796s | 0.000815s | 0.000796s | byte equality observed |
| mag_v_test.test | 10 | 0.000815s | 0.000821s | 0.000767s | byte equality observed |
| mat_index_test.test | 10 | 0.000789s | 0.000791s | 0.000805s | byte equality observed |
| mat_traits_array_test.test | 10 | 0.000792s | 0.000816s | 0.000812s | byte equality observed |
| mat_traits_std_array_test.test | 10 | 0.000782s | 0.000815s | 0.000793s | byte equality observed |
| math_test.test | 10 | 0.001212s | 0.001158s | 0.001054s | byte equality observed |
| minus_eq_mm_test.test | 10 | 0.000800s | 0.000784s | 0.000802s | byte equality observed |
| minus_eq_qq_test.test | 10 | 0.000813s | 0.000799s | 0.000799s | byte equality observed |
| minus_eq_vv_test.test | 10 | 0.000832s | 0.000775s | 0.000806s | byte equality observed |
| minus_m_test.test | 10 | 0.000829s | 0.000790s | 0.000798s | byte equality observed |
| minus_mm_test.test | 10 | 0.000825s | 0.000794s | 0.000809s | byte equality observed |
| minus_q_test.test | 10 | 0.000808s | 0.000795s | 0.000821s | byte equality observed |
| minus_qq_test.test | 10 | 0.000800s | 0.000792s | 0.000803s | byte equality observed |
| minus_v_test.test | 10 | 0.000797s | 0.000802s | 0.000811s | byte equality observed |
| minus_vv_test.test | 10 | 0.000791s | 0.000828s | 0.000812s | byte equality observed |
| mul_eq_mm_test.test | 10 | 0.000799s | 0.000818s | 0.000800s | byte equality observed |
| mul_eq_ms_test.test | 10 | 0.000791s | 0.000803s | 0.000801s | byte equality observed |
| mul_eq_qq_test.test | 10 | 0.000816s | 0.000826s | 0.000802s | byte equality observed |
| mul_eq_qs_test.test | 10 | 0.000793s | 0.000785s | 0.000807s | byte equality observed |
| mul_eq_vs_test.test | 10 | 0.000791s | 0.000800s | 0.000784s | byte equality observed |
| mul_mm_test.test | 10 | 0.000788s | 0.000827s | 0.000811s | byte equality observed |
| mul_ms_test.test | 10 | 0.000800s | 0.000792s | 0.000806s | byte equality observed |
| mul_mv_test.test | 10 | 0.000787s | 0.000791s | 0.000805s | byte equality observed |
| mul_qq_test.test | 10 | 0.000796s | 0.000819s | 0.000815s | byte equality observed |
| mul_qs_test.test | 10 | 0.000794s | 0.000834s | 0.000780s | byte equality observed |
| mul_qv_test.test | 10 | 0.000789s | 0.000825s | 0.000797s | byte equality observed |
| mul_sm_test.test | 10 | 0.000790s | 0.000776s | 0.000809s | byte equality observed |
| mul_sv_test.test | 10 | 0.000787s | 0.000795s | 0.000813s | byte equality observed |
| mul_vm_test.test | 10 | 0.000803s | 0.000814s | 0.000800s | byte equality observed |
| mul_vs_test.test | 10 | 0.000786s | 0.000806s | 0.000810s | byte equality observed |
| neg_col_test.test | 10 | 0.000795s | 0.000786s | 0.000817s | byte equality observed |
| neg_row_test.test | 10 | 0.000782s | 0.000791s | 0.000825s | byte equality observed |
| normalize_q_test.test | 10 | 0.000804s | 0.000814s | 0.000807s | byte equality observed |
| normalize_v_test.test | 10 | 0.000797s | 0.000823s | 0.000801s | byte equality observed |
| plus_eq_mm_test.test | 10 | 0.000809s | 0.000827s | 0.000813s | byte equality observed |
| plus_eq_qq_test.test | 10 | 0.000791s | 0.000825s | 0.000816s | byte equality observed |
| plus_eq_vv_test.test | 10 | 0.000796s | 0.000791s | 0.000816s | byte equality observed |
| plus_mm_test.test | 10 | 0.000824s | 0.000816s | 0.000801s | byte equality observed |
| plus_qq_test.test | 10 | 0.000818s | 0.000803s | 0.000810s | byte equality observed |
| plus_vv_test.test | 10 | 0.000831s | 0.000787s | 0.000831s | byte equality observed |
| projection_test.test | 10 | 0.000836s | 0.000819s | 0.000803s | byte equality observed |
| quat_traits_array_test.test | 10 | 0.000802s | 0.000812s | 0.000790s | byte equality observed |
| quat_traits_std_array_test.test | 10 | 0.000779s | 0.000777s | 0.000753s | byte equality observed |
| rot_mat_test.test | 1 | 0.020128s | 0.022989s | 0.026536s | byte equality observed |
| rot_quat_test.test | 10 | 0.000732s | 0.000731s | 0.000751s | byte equality observed |
| rotx_mat_test.test | 10 | 0.000777s | 0.000729s | 0.000762s | byte equality observed |
| rotx_quat_test.test | 10 | 0.000824s | 0.000792s | 0.000812s | byte equality observed |
| roty_mat_test.test | 10 | 0.000824s | 0.000821s | 0.000835s | byte equality observed |
| roty_quat_test.test | 10 | 0.000819s | 0.000835s | 0.000786s | byte equality observed |
| rotz_mat_test.test | 10 | 0.000854s | 0.000857s | 0.000825s | byte equality observed |
| rotz_quat_test.test | 10 | 0.000816s | 0.000823s | 0.000818s | byte equality observed |
| row_mat_test.test | 10 | 0.000795s | 0.000800s | 0.000822s | byte equality observed |
| row_test.test | 10 | 0.000803s | 0.000807s | 0.000812s | byte equality observed |
| scalar_cast_m_test.test | 10 | 0.000786s | 0.000820s | 0.000825s | byte equality observed |
| scalar_cast_q_test.test | 10 | 0.000793s | 0.000808s | 0.000815s | byte equality observed |
| scalar_cast_v_test.test | 10 | 0.000772s | 0.000792s | 0.000818s | byte equality observed |
| slerp_test.test | 2 | 0.010886s | 0.009633s | 0.009872s | byte equality observed |
| swap_cols_test.test | 10 | 0.000749s | 0.000731s | 0.000754s | byte equality observed |
| swap_rows_test.test | 10 | 0.000757s | 0.000719s | 0.000773s | byte equality observed |
| swizzle2_test.test | 10 | 0.000778s | 0.000815s | 0.000825s | byte equality observed |
| swizzle2_test2.test | 10 | 0.000789s | 0.000804s | 0.000804s | byte equality observed |
| swizzle2_test3.test | 10 | 0.000793s | 0.000803s | 0.000796s | byte equality observed |
| swizzle2_test4.test | 10 | 0.000799s | 0.000801s | 0.000797s | byte equality observed |
| swizzle3_test.test | 10 | 0.000836s | 0.000801s | 0.000781s | byte equality observed |
| swizzle3_test2.test | 10 | 0.000827s | 0.000819s | 0.000819s | byte equality observed |
| swizzle3_test3.test | 10 | 0.000821s | 0.000828s | 0.000819s | byte equality observed |
| swizzle3_test4.test | 10 | 0.000824s | 0.000831s | 0.000782s | byte equality observed |
| swizzle4_test.test | 10 | 0.000805s | 0.000826s | 0.000808s | byte equality observed |
| swizzle4_test2.test | 10 | 0.000799s | 0.000835s | 0.000801s | byte equality observed |
| swizzle4_test3.test | 10 | 0.000793s | 0.000817s | 0.000805s | byte equality observed |
| swizzle4_test4.test | 10 | 0.000814s | 0.000816s | 0.000838s | byte equality observed |
| to_string_test.test | 10 | 0.000840s | 0.000847s | 0.000831s | byte equality observed |
| transform_test.test | 10 | 0.000825s | 0.000816s | 0.000783s | byte equality observed |
| translation_mat_test.test | 10 | 0.000788s | 0.000836s | 0.000804s | byte equality observed |
| translation_test.test | 10 | 0.000816s | 0.000818s | 0.000817s | byte equality observed |
| transpose_test.test | 10 | 0.000795s | 0.000797s | 0.000818s | byte equality observed |
| vec_index_test.test | 10 | 0.000812s | 0.000806s | 0.000778s | byte equality observed |
| vec_register_test.test | 10 | 0.000804s | 0.000811s | 0.000821s | byte equality observed |
| vec_traits_array_test.test | 10 | 0.000813s | 0.000801s | 0.000832s | byte equality observed |
| vec_traits_gnuc_test.test | 10 | 0.000812s | 0.000787s | 0.000815s | byte equality observed |
| vec_traits_std_array_test.test | 10 | 0.000832s | 0.000795s | 0.000786s | byte equality observed |
| zero_mat_test.test | 10 | 0.000806s | 0.000827s | 0.000800s | byte equality observed |
| zero_quat_test.test | 10 | 0.000798s | 0.000835s | 0.000775s | byte equality observed |
| zero_vec_test.test | 10 | 0.000802s | 0.000824s | 0.000809s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/43778388618).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
