# libs/qvm/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| math_test.test | RUN | 0.195554 | 0.548207 | 0.586707 | 0.001556 | 0.001690 | 0.001496 |
| mat_traits_array_test.test | RUN | 0.151354 | 0.552717 | 0.462758 | 0.001326 | 0.001143 | 0.001133 |
| mat_traits_std_array_test.test | RUN | 0.152107 | 0.414775 | 0.460620 | 0.001257 | 0.001336 | 0.001077 |
| vec_traits_array_test.test | RUN | 0.129363 | 0.424315 | 0.392733 | 0.001213 | 0.001416 | 0.001063 |
| vec_traits_gnuc_test.test | RUN | 0.242321 | 0.508246 | 0.749149 | 0.001026 | 0.001280 | 0.001349 |
| vec_traits_std_array_test.test | RUN | 0.129449 | 0.327015 | 0.386388 | 0.001147 | 0.001352 | 0.001241 |
| quat_traits_array_test.test | RUN | 0.128075 | 0.451473 | 0.385294 | 0.001161 | 0.001004 | 0.000892 |
| quat_traits_std_array_test.test | RUN | 0.128027 | 0.336295 | 0.380937 | 0.001224 | 0.001053 | 0.001220 |
| access_m_test.test | RUN | 0.210618 | 0.791153 | 0.883606 | 0.001131 | 0.001291 | 0.001328 |
| access_m_fail1.test | COMPILE_FAIL | 0.019539 | 0.033057 | 0.056755 | — | — | — |
| access_m_fail2.test | COMPILE_FAIL | 0.018551 | 0.031625 | 0.055657 | — | — | — |
| access_q_test.test | RUN | 0.173042 | 0.401950 | 0.532170 | 0.001110 | 0.001073 | 0.001398 |
| access_q_fail.test | COMPILE_FAIL | 0.014568 | 0.026203 | 0.050177 | — | — | — |
| access_v_test.test | RUN | 0.173124 | 0.425567 | 0.532550 | 0.001089 | 0.001179 | 0.001186 |
| access_v_fail1.test | COMPILE_FAIL | 0.013299 | 0.024193 | 0.044542 | — | — | — |
| access_v_fail2.test | COMPILE_FAIL | 0.013536 | 0.024132 | 0.043954 | — | — | — |
| assign_test.test | RUN | 0.266069 | 0.677248 | 0.963290 | 0.001247 | 0.001348 | 0.001193 |
| to_string_test.test | RUN | 0.314125 | 1.153862 | 5.519371 | 0.001067 | 0.001437 | 0.001253 |
| cmp_vv_test.test | RUN | 0.217355 | 0.547564 | 0.630504 | 0.001362 | 0.001306 | 0.001089 |
| cross_test.test | RUN | 0.208520 | 0.492983 | 0.629870 | 0.001053 | 0.001192 | 0.001208 |
| div_eq_vs_test.test | RUN | 0.199629 | 0.460136 | 0.615430 | 0.001186 | 0.001122 | 0.001210 |
| div_vs_test.test | RUN | 0.205080 | 0.564349 | 0.674165 | 0.001129 | 0.001102 | 0.001169 |
| dot_vv_test.test | RUN | 0.194536 | 0.509963 | 0.629544 | 0.001014 | 0.001204 | 0.001335 |
| eq_vv_test.test | RUN | 0.229003 | 0.583588 | 0.662248 | 0.001008 | 0.001273 | 0.001351 |
| mag_v_test.test | RUN | 0.199812 | 0.471220 | 0.595629 | 0.001245 | 0.001264 | 0.001209 |
| mag_sqr_v_test.test | RUN | 0.194440 | 0.459613 | 0.588412 | 0.001231 | 0.001216 | 0.001164 |
| minus_v_test.test | RUN | 0.207102 | 0.537118 | 0.625815 | 0.001241 | 0.001284 | 0.001204 |
| minus_eq_vv_test.test | RUN | 0.207978 | 0.525409 | 0.632038 | 0.001120 | 0.001335 | 0.001336 |
| minus_vv_test.test | RUN | 0.211706 | 0.566273 | 0.656224 | 0.001348 | 0.001098 | 0.001130 |
| mul_eq_vs_test.test | RUN | 0.202217 | 0.463915 | 0.594104 | 0.001174 | 0.001228 | 0.001386 |
| mul_vs_test.test | RUN | 0.211582 | 0.568914 | 0.668869 | 0.001152 | 0.001211 | 0.001179 |
| mul_sv_test.test | RUN | 0.211089 | 0.567911 | 0.661274 | 0.001115 | 0.001293 | 0.001067 |
| mul_vm_test.test | RUN | 0.290941 | 1.013653 | 0.973676 | 0.001087 | 0.001357 | 0.001240 |
| normalize_v_test.test | RUN | 0.215040 | 0.698611 | 0.670545 | 0.001180 | 0.001269 | 0.001008 |
| plus_eq_vv_test.test | RUN | 0.201042 | 0.521456 | 0.623968 | 0.001181 | 0.001230 | 0.001198 |
| plus_vv_test.test | RUN | 0.211160 | 0.569383 | 0.644616 | 0.001001 | 0.001141 | 0.001178 |
| scalar_cast_v_test.test | RUN | 0.197275 | 0.420837 | 0.568807 | 0.001075 | 0.001120 | 0.001262 |
| vec_index_test.test | RUN | 0.170110 | 0.429547 | 0.510476 | 0.001188 | 0.001095 | 0.001195 |
| vec_register_test.test | RUN | 0.109643 | 0.395594 | 0.369757 | 0.001111 | 0.001173 | 0.001226 |
| cmp_mm_test.test | RUN | 0.346460 | 1.251522 | 1.348038 | 0.001179 | 0.001292 | 0.001284 |
| determinant_test.test | RUN | 0.230365 | 0.637185 | 0.714187 | 0.001276 | 0.001130 | 0.001312 |
| div_eq_ms_test.test | RUN | 0.236517 | 0.578479 | 0.811937 | 0.001211 | 0.001194 | 0.001278 |
| div_ms_test.test | RUN | 0.283762 | 0.943669 | 0.993070 | 0.001130 | 0.001320 | 0.001324 |
| eq_mm_test.test | RUN | 0.325822 | 1.167447 | 1.269274 | 0.001324 | 0.001181 | 0.001240 |
| minus_m_test.test | RUN | 0.277251 | 0.931413 | 0.960367 | 0.001190 | 0.001200 | 0.001342 |
| minus_eq_mm_test.test | RUN | 0.263064 | 0.857978 | 0.906800 | 0.001110 | 0.001180 | 0.001160 |
| minus_mm_test.test | RUN | 0.300143 | 1.084981 | 1.063248 | 0.001095 | 0.001227 | 0.001154 |
| mul_eq_mm_test.test | RUN | 0.240727 | 0.796488 | 0.784289 | 0.001232 | 0.001196 | 0.001312 |
| mul_eq_ms_test.test | RUN | 0.238381 | 0.578786 | 0.812365 | 0.001080 | 0.001395 | 0.001246 |
| mul_mm_test.test | RUN | 0.346806 | 1.804585 | 1.334975 | 0.001145 | 0.001234 | 0.001105 |
| mul_ms_test.test | RUN | 0.283976 | 0.963115 | 1.022936 | 0.001190 | 0.001201 | 0.001137 |
| mul_sm_test.test | RUN | 0.293966 | 0.936200 | 1.026868 | 0.001325 | 0.001195 | 0.001319 |
| mul_mv_test.test | RUN | 0.294710 | 1.024409 | 1.033525 | 0.001125 | 0.001385 | 0.001237 |
| inverse_m_test.test | RUN | 0.408548 | 1.874506 | 1.446002 | 0.001285 | 0.001192 | 0.001312 |
| plus_eq_mm_test.test | RUN | 0.267723 | 0.859012 | 0.892421 | 0.001137 | 0.001241 | 0.001166 |
| plus_mm_test.test | RUN | 0.302892 | 1.091741 | 1.060897 | 0.001182 | 0.001146 | 0.001045 |
| scalar_cast_m_test.test | RUN | 0.212840 | 0.483509 | 0.644662 | 0.001082 | 0.001191 | 0.001206 |
| mat_index_test.test | RUN | 0.183750 | 0.468344 | 0.572017 | 0.001161 | 0.001369 | 0.001187 |
| cmp_qq_test.test | RUN | 0.194785 | 0.434641 | 0.544239 | 0.001167 | 0.001154 | 0.001354 |
| conjugate_test.test | RUN | 0.197872 | 0.442689 | 0.569928 | 0.001198 | 0.001335 | 0.001160 |
| normalize_q_test.test | RUN | 0.199106 | 0.497828 | 0.580938 | 0.001092 | 0.001194 | 0.001154 |
| div_eq_qs_test.test | RUN | 0.196362 | 0.422792 | 0.552687 | 0.001101 | 0.001315 | 0.001184 |
| div_qs_test.test | RUN | 0.193555 | 0.446329 | 0.565228 | 0.001196 | 0.001105 | 0.001262 |
| dot_qq_test.test | RUN | 0.194779 | 0.431175 | 0.579328 | 0.001167 | 0.001298 | 0.001286 |
| eq_qq_test.test | RUN | 0.196774 | 0.455399 | 0.574872 | 0.001140 | 0.001320 | 0.001167 |
| inverse_q_test.test | RUN | 0.242369 | 0.604326 | 0.709254 | 0.001279 | 0.001169 | 0.001178 |
| mag_q_test.test | RUN | 0.195235 | 0.442741 | 0.558557 | 0.001171 | 0.001286 | 0.001136 |
| mag_sqr_q_test.test | RUN | 0.191850 | 0.438584 | 0.554836 | 0.001264 | 0.001302 | 0.001309 |
| minus_q_test.test | RUN | 0.192242 | 0.445956 | 0.560779 | 0.001145 | 0.001216 | 0.001112 |
| minus_eq_qq_test.test | RUN | 0.189741 | 0.448545 | 0.561676 | 0.001401 | 0.001144 | 0.001239 |
| minus_qq_test.test | RUN | 0.192703 | 0.459715 | 0.565217 | 0.001243 | 0.001237 | 0.001367 |
| mul_eq_qs_test.test | RUN | 0.191222 | 0.417268 | 0.555300 | 0.001191 | 0.001276 | 0.001203 |
| mul_qs_test.test | RUN | 0.189853 | 0.438400 | 0.562152 | 0.001197 | 0.001402 | 0.001110 |
| mul_qv_test.test | RUN | 0.245367 | 0.605121 | 0.735856 | 0.001309 | 0.001238 | 0.001266 |
| mul_qq_test.test | RUN | 0.234113 | 0.619155 | 0.699822 | 0.001180 | 0.001347 | 0.001175 |
| mul_eq_qq_test.test | RUN | 0.235860 | 0.611478 | 0.711345 | 0.001150 | 0.001221 | 0.001178 |
| plus_eq_qq_test.test | RUN | 0.196651 | 0.445551 | 0.560988 | 0.001249 | 0.001285 | 0.001327 |
| plus_qq_test.test | RUN | 0.194561 | 0.452253 | 0.571254 | 0.001133 | 0.001191 | 0.001276 |
| scalar_cast_q_test.test | RUN | 0.190985 | 0.424273 | 0.553447 | 0.001228 | 0.001171 | 0.001152 |
| slerp_test.test | RUN | 0.218136 | 0.879740 | 0.672148 | 0.015036 | 0.013031 | 0.013066 |
| convert_to_test.test | RUN | 0.288539 | 0.802191 | 1.050631 | 0.001246 | 0.001122 | 0.001204 |
| rot_mat_test.test | RUN | 0.471820 | 3.675105 | 3.338981 | 0.030132 | 0.032299 | 0.034051 |
| rot_quat_test.test | RUN | 0.240402 | 0.738583 | 0.750826 | 0.001279 | 0.001229 | 0.001356 |
| rotx_mat_test.test | RUN | 0.275540 | 0.964752 | 0.972057 | 0.001172 | 0.001229 | 0.001394 |
| rotx_quat_test.test | RUN | 0.229482 | 0.625648 | 0.692618 | 0.001156 | 0.001227 | 0.001332 |
| roty_mat_test.test | RUN | 0.282532 | 0.946565 | 0.933381 | 0.001257 | 0.001260 | 0.001196 |
| roty_quat_test.test | RUN | 0.233977 | 0.619883 | 0.698650 | 0.001380 | 0.001279 | 0.001197 |
| rotz_mat_test.test | RUN | 0.294913 | 1.110303 | 1.035238 | 0.001162 | 0.001235 | 0.001337 |
| rotz_quat_test.test | RUN | 0.231487 | 0.604485 | 0.671036 | 0.001105 | 0.001206 | 0.001365 |
| zero_vec_test.test | RUN | 0.205505 | 0.531474 | 0.586986 | 0.001316 | 0.001293 | 0.001344 |
| zero_mat_test.test | RUN | 0.250445 | 0.893456 | 0.857077 | 0.001202 | 0.001304 | 0.001236 |
| zero_quat_test.test | RUN | 0.189860 | 0.439679 | 0.532096 | 0.001383 | 0.001138 | 0.001245 |
| identity_mat_test.test | RUN | 0.230832 | 0.659794 | 0.731426 | 0.001160 | 0.001135 | 0.001286 |
| identity_quat_test.test | RUN | 0.197828 | 0.426254 | 0.556703 | 0.001221 | 0.001285 | 0.001233 |
| col_test.test | RUN | 0.380172 | 1.386602 | 1.616917 | 0.001120 | 0.001455 | 0.001162 |
| col_mat_test.test | RUN | 0.246453 | 0.615477 | 0.748735 | 0.001305 | 0.001169 | 0.001338 |
| neg_col_test.test | RUN | 0.283783 | 0.860662 | 0.968821 | 0.001080 | 0.001228 | 0.001387 |
| neg_row_test.test | RUN | 0.290593 | 0.870636 | 0.968788 | 0.001146 | 0.001329 | 0.001161 |
| del_col_test.test | RUN | 0.301361 | 0.950769 | 0.978804 | 0.001277 | 0.001232 | 0.001193 |
| del_row_test.test | RUN | 0.297287 | 0.927161 | 1.001222 | 0.001166 | 0.001233 | 0.001329 |
| del_row_col_test.test | RUN | 0.417153 | 1.784054 | 1.861881 | 0.001227 | 0.001190 | 0.001391 |
| swap_cols_test.test | RUN | 0.563699 | 2.398816 | 2.299946 | 0.001458 | 0.001275 | 0.001166 |
| swap_rows_test.test | RUN | 0.633172 | 2.533463 | 2.244994 | 0.001281 | 0.001187 | 0.001231 |
| diag_test.test | RUN | 0.252342 | 0.655707 | 0.852824 | 0.001232 | 0.001227 | 0.001225 |
| diag_mat_test.test | RUN | 0.257837 | 0.630663 | 0.791621 | 0.001185 | 0.001281 | 0.001330 |
| row_test.test | RUN | 0.373891 | 1.349121 | 1.619588 | 0.001233 | 0.001293 | 0.001325 |
| row_mat_test.test | RUN | 0.243710 | 0.603460 | 0.719087 | 0.001300 | 0.001225 | 0.001329 |
| transpose_test.test | RUN | 0.303059 | 0.945652 | 1.021665 | 0.001298 | 0.001211 | 0.001157 |
| translation_test.test | RUN | 0.237671 | 0.588205 | 0.755112 | 0.001133 | 0.001230 | 0.001176 |
| translation_mat_test.test | RUN | 0.259322 | 0.599399 | 0.829469 | 0.001121 | 0.001293 | 0.001176 |
| swizzle_const_fail.test | COMPILE_FAIL | 0.085821 | 0.169431 | 0.229155 | — | — | — |
| swizzle2_test2.test | RUN | 0.102511 | 0.254218 | 0.303628 | 0.001222 | 0.001360 | 0.000924 |
| swizzle2_test3.test | RUN | 0.103532 | 0.254322 | 0.309263 | 0.001028 | 0.001235 | 0.001255 |
| swizzle2_test4.test | RUN | 0.106367 | 0.252829 | 0.308104 | 0.001093 | 0.001199 | 0.001087 |
| swizzle2_test.test | RUN | 0.329755 | 0.691681 | 0.976447 | 0.001071 | 0.001210 | 0.001168 |
| swizzle3_test2.test | RUN | 0.114868 | 0.270777 | 0.342340 | 0.001118 | 0.001233 | 0.001240 |
| swizzle3_test3.test | RUN | 0.113622 | 0.276261 | 0.344247 | 0.001213 | 0.001258 | 0.001282 |
| swizzle3_test4.test | RUN | 0.113520 | 0.273514 | 0.342686 | 0.001085 | 0.001280 | 0.001104 |
| swizzle3_test.test | RUN | 0.317067 | 0.710545 | 0.975278 | 0.001079 | 0.001211 | 0.001248 |
| swizzle4_test2.test | RUN | 0.178337 | 0.396923 | 0.549019 | 0.001175 | 0.001225 | 0.001321 |
| swizzle4_test3.test | RUN | 0.193267 | 0.392052 | 0.545131 | 0.001179 | 0.001257 | 0.001304 |
| swizzle4_test4.test | RUN | 0.197950 | 0.387710 | 0.550223 | 0.001050 | 0.001191 | 0.001219 |
| swizzle4_test.test | RUN | 0.331174 | 0.790173 | 1.029146 | 0.001038 | 0.001272 | 0.001282 |
| deduce_scalar_test.test | COMPILE | 0.016398 | 0.037567 | 0.055948 | — | — | — |
| deduce_scalar_mq_test.test | RUN | 0.126845 | 0.301587 | 0.371688 | 0.001318 | 0.001276 | 0.001191 |
| deduce_scalar_mv_test.test | RUN | 0.146104 | 0.334052 | 0.435377 | 0.001097 | 0.001233 | 0.001225 |
| deduce_scalar_fail.test | COMPILE_FAIL | 0.012514 | 0.023189 | 0.044001 | — | — | — |
| deduce_mat_test.test | COMPILE | 0.014339 | 0.033361 | 0.049310 | — | — | — |
| deduce_quat_test.test | COMPILE | 0.014644 | 0.032348 | 0.046261 | — | — | — |
| deduce_vec_test.test | COMPILE | 0.014719 | 0.030546 | 0.048179 | — | — | — |
| interop_test.test | RUN | 0.136776 | 0.438101 | 0.633527 | 0.000361 | 0.000537 | 0.001018 |
| transform_test.test | RUN | 0.291644 | 0.642497 | 0.818295 | 0.000825 | 0.000899 | 0.000844 |
| projection_test.test | RUN | 0.199951 | 0.460181 | 0.613861 | 0.000871 | 0.000889 | 0.000926 |
| scalar_traits_test.test | COMPILE | 0.014576 | 0.033633 | 0.051038 | — | — | — |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 1.003× | 1.000×, 1.006× | 0.987× |
| clang | 1.046× | 1.050×, 1.041× | 1.000× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1363 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/43801643681).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| access_m_test.test | 10 | 0.000794s | 0.000820s | 0.000806s | byte equality observed |
| access_q_test.test | 10 | 0.000792s | 0.000779s | 0.000793s | byte equality observed |
| access_v_test.test | 10 | 0.000807s | 0.000801s | 0.000778s | byte equality observed |
| assign_test.test | 10 | 0.000802s | 0.000831s | 0.000790s | byte equality observed |
| cmp_mm_test.test | 10 | 0.000837s | 0.000829s | 0.000808s | byte equality observed |
| cmp_qq_test.test | 10 | 0.000804s | 0.000790s | 0.000813s | byte equality observed |
| cmp_vv_test.test | 10 | 0.000789s | 0.000805s | 0.000820s | byte equality observed |
| col_mat_test.test | 10 | 0.000787s | 0.000772s | 0.000802s | byte equality observed |
| col_test.test | 10 | 0.000794s | 0.000820s | 0.000803s | byte equality observed |
| conjugate_test.test | 10 | 0.000815s | 0.000811s | 0.000799s | byte equality observed |
| convert_to_test.test | 10 | 0.000820s | 0.000787s | 0.000778s | byte equality observed |
| cross_test.test | 10 | 0.000789s | 0.000799s | 0.000796s | byte equality observed |
| deduce_scalar_mq_test.test | 10 | 0.000798s | 0.000825s | 0.000811s | byte equality observed |
| deduce_scalar_mv_test.test | 10 | 0.000801s | 0.000804s | 0.000811s | byte equality observed |
| del_col_test.test | 10 | 0.000790s | 0.000799s | 0.000778s | byte equality observed |
| del_row_col_test.test | 10 | 0.000816s | 0.000808s | 0.000818s | byte equality observed |
| del_row_test.test | 10 | 0.000803s | 0.000771s | 0.000773s | byte equality observed |
| determinant_test.test | 10 | 0.000821s | 0.000795s | 0.000805s | byte equality observed |
| diag_mat_test.test | 10 | 0.000798s | 0.000797s | 0.000804s | byte equality observed |
| diag_test.test | 10 | 0.000824s | 0.000813s | 0.000805s | byte equality observed |
| div_eq_ms_test.test | 10 | 0.000832s | 0.000838s | 0.000819s | byte equality observed |
| div_eq_qs_test.test | 10 | 0.000806s | 0.000838s | 0.000789s | byte equality observed |
| div_eq_vs_test.test | 10 | 0.000784s | 0.000798s | 0.000794s | byte equality observed |
| div_ms_test.test | 10 | 0.000803s | 0.000816s | 0.000789s | byte equality observed |
| div_qs_test.test | 10 | 0.000806s | 0.000832s | 0.000798s | byte equality observed |
| div_vs_test.test | 10 | 0.000824s | 0.000826s | 0.000816s | byte equality observed |
| dot_qq_test.test | 10 | 0.000810s | 0.000817s | 0.000797s | byte equality observed |
| dot_vv_test.test | 10 | 0.000807s | 0.000793s | 0.000794s | byte equality observed |
| eq_mm_test.test | 10 | 0.000818s | 0.000833s | 0.000787s | byte equality observed |
| eq_qq_test.test | 10 | 0.000818s | 0.000805s | 0.000793s | byte equality observed |
| eq_vv_test.test | 10 | 0.000820s | 0.000789s | 0.000816s | byte equality observed |
| identity_mat_test.test | 10 | 0.000816s | 0.000817s | 0.000823s | byte equality observed |
| identity_quat_test.test | 10 | 0.000801s | 0.000809s | 0.000795s | byte equality observed |
| interop_test.test | 10 | 0.000359s | 0.000356s | 0.000790s | byte equality observed |
| inverse_m_test.test | 10 | 0.000848s | 0.000843s | 0.000811s | byte equality observed |
| inverse_q_test.test | 10 | 0.000810s | 0.000803s | 0.000774s | byte equality observed |
| mag_q_test.test | 10 | 0.000831s | 0.000826s | 0.000785s | byte equality observed |
| mag_sqr_q_test.test | 10 | 0.000830s | 0.000810s | 0.000765s | byte equality observed |
| mag_sqr_v_test.test | 10 | 0.000799s | 0.000787s | 0.000796s | byte equality observed |
| mag_v_test.test | 10 | 0.000801s | 0.000796s | 0.000779s | byte equality observed |
| mat_index_test.test | 10 | 0.000793s | 0.000814s | 0.000798s | byte equality observed |
| mat_traits_array_test.test | 10 | 0.000782s | 0.000812s | 0.000803s | byte equality observed |
| mat_traits_std_array_test.test | 10 | 0.000792s | 0.000795s | 0.000779s | byte equality observed |
| math_test.test | 10 | 0.001187s | 0.001138s | 0.001047s | byte equality observed |
| minus_eq_mm_test.test | 10 | 0.000797s | 0.000808s | 0.000783s | byte equality observed |
| minus_eq_qq_test.test | 10 | 0.000811s | 0.000826s | 0.000804s | byte equality observed |
| minus_eq_vv_test.test | 10 | 0.000808s | 0.000817s | 0.000798s | byte equality observed |
| minus_m_test.test | 10 | 0.000790s | 0.000800s | 0.000781s | byte equality observed |
| minus_mm_test.test | 10 | 0.000802s | 0.000828s | 0.000805s | byte equality observed |
| minus_q_test.test | 10 | 0.000782s | 0.000812s | 0.000794s | byte equality observed |
| minus_qq_test.test | 10 | 0.000788s | 0.000817s | 0.000807s | byte equality observed |
| minus_v_test.test | 10 | 0.000792s | 0.000810s | 0.000807s | byte equality observed |
| minus_vv_test.test | 10 | 0.000792s | 0.000791s | 0.000814s | byte equality observed |
| mul_eq_mm_test.test | 10 | 0.000778s | 0.000777s | 0.000805s | byte equality observed |
| mul_eq_ms_test.test | 10 | 0.000802s | 0.000788s | 0.000803s | byte equality observed |
| mul_eq_qq_test.test | 10 | 0.000808s | 0.000786s | 0.000793s | byte equality observed |
| mul_eq_qs_test.test | 10 | 0.000806s | 0.000785s | 0.000779s | byte equality observed |
| mul_eq_vs_test.test | 10 | 0.000792s | 0.000773s | 0.000769s | byte equality observed |
| mul_mm_test.test | 10 | 0.000824s | 0.000790s | 0.000823s | byte equality observed |
| mul_ms_test.test | 10 | 0.000788s | 0.000812s | 0.000823s | byte equality observed |
| mul_mv_test.test | 10 | 0.000814s | 0.000790s | 0.000827s | byte equality observed |
| mul_qq_test.test | 10 | 0.000809s | 0.000790s | 0.000816s | byte equality observed |
| mul_qs_test.test | 10 | 0.000801s | 0.000798s | 0.000777s | byte equality observed |
| mul_qv_test.test | 10 | 0.000801s | 0.000809s | 0.000805s | byte equality observed |
| mul_sm_test.test | 10 | 0.000819s | 0.000777s | 0.000845s | byte equality observed |
| mul_sv_test.test | 10 | 0.000810s | 0.000796s | 0.000806s | byte equality observed |
| mul_vm_test.test | 10 | 0.000796s | 0.000822s | 0.000796s | byte equality observed |
| mul_vs_test.test | 10 | 0.000798s | 0.000809s | 0.000787s | byte equality observed |
| neg_col_test.test | 10 | 0.000803s | 0.000777s | 0.000796s | byte equality observed |
| neg_row_test.test | 10 | 0.000810s | 0.000805s | 0.000771s | byte equality observed |
| normalize_q_test.test | 10 | 0.000810s | 0.000811s | 0.000786s | byte equality observed |
| normalize_v_test.test | 10 | 0.000813s | 0.000824s | 0.000816s | byte equality observed |
| plus_eq_mm_test.test | 10 | 0.000794s | 0.000826s | 0.000825s | byte equality observed |
| plus_eq_qq_test.test | 10 | 0.000785s | 0.000791s | 0.000806s | byte equality observed |
| plus_eq_vv_test.test | 10 | 0.000777s | 0.000799s | 0.000811s | byte equality observed |
| plus_mm_test.test | 10 | 0.000778s | 0.000793s | 0.000792s | byte equality observed |
| plus_qq_test.test | 10 | 0.000801s | 0.000802s | 0.000793s | byte equality observed |
| plus_vv_test.test | 10 | 0.000810s | 0.000788s | 0.000796s | byte equality observed |
| projection_test.test | 10 | 0.000807s | 0.000813s | 0.000822s | byte equality observed |
| quat_traits_array_test.test | 10 | 0.000794s | 0.000809s | 0.000836s | byte equality observed |
| quat_traits_std_array_test.test | 10 | 0.000766s | 0.000762s | 0.000771s | byte equality observed |
| rot_mat_test.test | 1 | 0.019731s | 0.022373s | 0.026713s | byte equality observed |
| rot_quat_test.test | 10 | 0.000737s | 0.000735s | 0.000739s | byte equality observed |
| rotx_mat_test.test | 10 | 0.000777s | 0.000764s | 0.000735s | byte equality observed |
| rotx_quat_test.test | 10 | 0.000790s | 0.000789s | 0.000826s | byte equality observed |
| roty_mat_test.test | 10 | 0.000834s | 0.000803s | 0.000844s | byte equality observed |
| roty_quat_test.test | 10 | 0.000836s | 0.000790s | 0.000810s | byte equality observed |
| rotz_mat_test.test | 10 | 0.000822s | 0.000805s | 0.000797s | byte equality observed |
| rotz_quat_test.test | 10 | 0.000800s | 0.000803s | 0.000833s | byte equality observed |
| row_mat_test.test | 10 | 0.000779s | 0.000795s | 0.000834s | byte equality observed |
| row_test.test | 10 | 0.000801s | 0.000791s | 0.000814s | byte equality observed |
| scalar_cast_m_test.test | 10 | 0.000792s | 0.000803s | 0.000795s | byte equality observed |
| scalar_cast_q_test.test | 10 | 0.000796s | 0.000797s | 0.000784s | byte equality observed |
| scalar_cast_v_test.test | 10 | 0.000748s | 0.000758s | 0.000798s | byte equality observed |
| slerp_test.test | 2 | 0.011084s | 0.009435s | 0.009825s | byte equality observed |
| swap_cols_test.test | 10 | 0.000734s | 0.000716s | 0.000718s | byte equality observed |
| swap_rows_test.test | 10 | 0.000763s | 0.000754s | 0.000729s | byte equality observed |
| swizzle2_test.test | 10 | 0.000802s | 0.000799s | 0.000795s | byte equality observed |
| swizzle2_test2.test | 10 | 0.000805s | 0.000801s | 0.000778s | byte equality observed |
| swizzle2_test3.test | 10 | 0.000804s | 0.000765s | 0.000813s | byte equality observed |
| swizzle2_test4.test | 10 | 0.000803s | 0.000810s | 0.000807s | byte equality observed |
| swizzle3_test.test | 10 | 0.000807s | 0.000817s | 0.000786s | byte equality observed |
| swizzle3_test2.test | 10 | 0.000787s | 0.000791s | 0.000776s | byte equality observed |
| swizzle3_test3.test | 10 | 0.000797s | 0.000772s | 0.000778s | byte equality observed |
| swizzle3_test4.test | 10 | 0.000795s | 0.000805s | 0.000790s | byte equality observed |
| swizzle4_test.test | 10 | 0.000804s | 0.000830s | 0.000840s | byte equality observed |
| swizzle4_test2.test | 10 | 0.000812s | 0.000818s | 0.000821s | byte equality observed |
| swizzle4_test3.test | 10 | 0.000796s | 0.000821s | 0.000786s | byte equality observed |
| swizzle4_test4.test | 10 | 0.000801s | 0.000796s | 0.000788s | byte equality observed |
| to_string_test.test | 10 | 0.000823s | 0.000811s | 0.000812s | byte equality observed |
| transform_test.test | 10 | 0.000817s | 0.000795s | 0.000814s | byte equality observed |
| translation_mat_test.test | 10 | 0.000804s | 0.000780s | 0.000806s | byte equality observed |
| translation_test.test | 10 | 0.000808s | 0.000813s | 0.000816s | byte equality observed |
| transpose_test.test | 10 | 0.000800s | 0.000791s | 0.000809s | byte equality observed |
| vec_index_test.test | 10 | 0.000818s | 0.000795s | 0.000806s | byte equality observed |
| vec_register_test.test | 10 | 0.000797s | 0.000799s | 0.000806s | byte equality observed |
| vec_traits_array_test.test | 10 | 0.000797s | 0.000797s | 0.000787s | byte equality observed |
| vec_traits_gnuc_test.test | 10 | 0.000781s | 0.000784s | 0.000768s | byte equality observed |
| vec_traits_std_array_test.test | 10 | 0.000794s | 0.000783s | 0.000804s | byte equality observed |
| zero_mat_test.test | 10 | 0.000802s | 0.000811s | 0.000783s | byte equality observed |
| zero_quat_test.test | 10 | 0.000813s | 0.000794s | 0.000783s | byte equality observed |
| zero_vec_test.test | 10 | 0.000805s | 0.000821s | 0.000791s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/43801643681).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
