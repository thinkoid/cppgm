# libs/qvm/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| math_test.test | RUN | 0.196586 | 0.569141 | 0.603279 | 0.001674 | 0.001709 | 0.001678 |
| mat_traits_array_test.test | RUN | 0.156499 | 0.558312 | 0.465212 | 0.001414 | 0.001312 | 0.001347 |
| mat_traits_std_array_test.test | RUN | 0.153835 | 0.421813 | 0.472686 | 0.001481 | 0.001374 | 0.001044 |
| vec_traits_array_test.test | RUN | 0.132910 | 0.426309 | 0.393293 | 0.001320 | 0.001362 | 0.001021 |
| vec_traits_gnuc_test.test | RUN | 0.253010 | 0.518112 | 0.759358 | 0.001154 | 0.001238 | 0.001362 |
| vec_traits_std_array_test.test | RUN | 0.135278 | 0.332329 | 0.394690 | 0.001428 | 0.001419 | 0.001167 |
| quat_traits_array_test.test | RUN | 0.131580 | 0.448004 | 0.383761 | 0.001318 | 0.001212 | 0.001121 |
| quat_traits_std_array_test.test | RUN | 0.133161 | 0.337711 | 0.390238 | 0.001268 | 0.001409 | 0.001176 |
| access_m_test.test | RUN | 0.218327 | 0.809346 | 0.880982 | 0.001336 | 0.001316 | 0.001281 |
| access_m_fail1.test | COMPILE_FAIL | 0.020762 | 0.035019 | 0.058092 | — | — | — |
| access_m_fail2.test | COMPILE_FAIL | 0.021298 | 0.032691 | 0.061045 | — | — | — |
| access_q_test.test | RUN | 0.184558 | 0.420741 | 0.533697 | 0.001413 | 0.001317 | 0.001470 |
| access_q_fail.test | COMPILE_FAIL | 0.016434 | 0.027556 | 0.049866 | — | — | — |
| access_v_test.test | RUN | 0.183961 | 0.429261 | 0.534415 | 0.001373 | 0.001123 | 0.001196 |
| access_v_fail1.test | COMPILE_FAIL | 0.014505 | 0.024537 | 0.044896 | — | — | — |
| access_v_fail2.test | COMPILE_FAIL | 0.014581 | 0.025729 | 0.044542 | — | — | — |
| assign_test.test | RUN | 0.274391 | 0.696575 | 0.943060 | 0.001269 | 0.001470 | 0.001265 |
| to_string_test.test | RUN | 0.328373 | 1.174948 | 5.633444 | 0.001121 | 0.001425 | 0.001330 |
| cmp_vv_test.test | RUN | 0.223761 | 0.558585 | 0.641042 | 0.001097 | 0.001307 | 0.001187 |
| cross_test.test | RUN | 0.215026 | 0.503859 | 0.638258 | 0.001232 | 0.001294 | 0.001202 |
| div_eq_vs_test.test | RUN | 0.209177 | 0.474687 | 0.626655 | 0.001184 | 0.001179 | 0.001405 |
| div_vs_test.test | RUN | 0.219667 | 0.589471 | 0.675279 | 0.001284 | 0.001536 | 0.001158 |
| dot_vv_test.test | RUN | 0.208603 | 0.519415 | 0.617878 | 0.001105 | 0.001318 | 0.001304 |
| eq_vv_test.test | RUN | 0.229202 | 0.587702 | 0.670025 | 0.001219 | 0.001606 | 0.001249 |
| mag_v_test.test | RUN | 0.206175 | 0.486965 | 0.593740 | 0.001343 | 0.001308 | 0.001386 |
| mag_sqr_v_test.test | RUN | 0.200972 | 0.470852 | 0.597222 | 0.001286 | 0.001267 | 0.001265 |
| minus_v_test.test | RUN | 0.207946 | 0.557755 | 0.651083 | 0.001097 | 0.001356 | 0.001242 |
| minus_eq_vv_test.test | RUN | 0.213297 | 0.540428 | 0.608325 | 0.001193 | 0.001317 | 0.001188 |
| minus_vv_test.test | RUN | 0.217236 | 0.591757 | 0.664838 | 0.001393 | 0.001352 | 0.001277 |
| mul_eq_vs_test.test | RUN | 0.205813 | 0.465027 | 0.619168 | 0.001324 | 0.001149 | 0.001252 |
| mul_vs_test.test | RUN | 0.216767 | 0.588392 | 0.657276 | 0.001136 | 0.001334 | 0.001219 |
| mul_sv_test.test | RUN | 0.216586 | 0.576979 | 0.670786 | 0.001143 | 0.001257 | 0.001210 |
| mul_vm_test.test | RUN | 0.299122 | 1.027250 | 0.988903 | 0.001231 | 0.001199 | 0.001397 |
| normalize_v_test.test | RUN | 0.219702 | 0.709864 | 0.682589 | 0.001064 | 0.001290 | 0.001144 |
| plus_eq_vv_test.test | RUN | 0.205803 | 0.545690 | 0.636110 | 0.001018 | 0.001190 | 0.001202 |
| plus_vv_test.test | RUN | 0.217524 | 0.570179 | 0.663772 | 0.001149 | 0.001399 | 0.001160 |
| scalar_cast_v_test.test | RUN | 0.197990 | 0.429286 | 0.560878 | 0.001227 | 0.001283 | 0.001168 |
| vec_index_test.test | RUN | 0.176789 | 0.447346 | 0.524551 | 0.001216 | 0.001125 | 0.001153 |
| vec_register_test.test | RUN | 0.115982 | 0.391312 | 0.369905 | 0.001595 | 0.001278 | 0.001256 |
| cmp_mm_test.test | RUN | 0.348213 | 1.277906 | 1.363381 | 0.001539 | 0.001399 | 0.001349 |
| determinant_test.test | RUN | 0.239984 | 0.646698 | 0.730915 | 0.001310 | 0.001459 | 0.001420 |
| div_eq_ms_test.test | RUN | 0.244517 | 0.596993 | 0.824718 | 0.001422 | 0.001185 | 0.001286 |
| div_ms_test.test | RUN | 0.297456 | 0.960189 | 1.018320 | 0.001469 | 0.001255 | 0.001464 |
| eq_mm_test.test | RUN | 0.343397 | 1.191506 | 1.290044 | 0.001433 | 0.001430 | 0.001208 |
| minus_m_test.test | RUN | 0.286546 | 0.943934 | 0.973712 | 0.001167 | 0.001433 | 0.001363 |
| minus_eq_mm_test.test | RUN | 0.277856 | 0.883869 | 0.918707 | 0.001312 | 0.001377 | 0.001165 |
| minus_mm_test.test | RUN | 0.309686 | 1.126122 | 1.074637 | 0.001340 | 0.001333 | 0.001413 |
| mul_eq_mm_test.test | RUN | 0.258384 | 0.824875 | 0.807384 | 0.001337 | 0.001214 | 0.001443 |
| mul_eq_ms_test.test | RUN | 0.246866 | 0.595464 | 0.827851 | 0.001295 | 0.001404 | 0.001314 |
| mul_mm_test.test | RUN | 0.354031 | 1.857996 | 1.335133 | 0.001484 | 0.001361 | 0.001195 |
| mul_ms_test.test | RUN | 0.295025 | 0.983307 | 1.029467 | 0.001328 | 0.001293 | 0.001361 |
| mul_sm_test.test | RUN | 0.302868 | 0.963227 | 1.036540 | 0.001408 | 0.001258 | 0.001296 |
| mul_mv_test.test | RUN | 0.301482 | 1.045784 | 1.039168 | 0.001334 | 0.001333 | 0.001275 |
| inverse_m_test.test | RUN | 0.423428 | 1.933083 | 1.464469 | 0.001351 | 0.001555 | 0.001235 |
| plus_eq_mm_test.test | RUN | 0.273001 | 0.890915 | 0.912980 | 0.001430 | 0.001321 | 0.001394 |
| plus_mm_test.test | RUN | 0.311684 | 1.116887 | 1.048291 | 0.001439 | 0.001357 | 0.001198 |
| scalar_cast_m_test.test | RUN | 0.232863 | 0.506465 | 0.662880 | 0.001205 | 0.001238 | 0.001394 |
| mat_index_test.test | RUN | 0.186192 | 0.482122 | 0.570985 | 0.001221 | 0.001236 | 0.001308 |
| cmp_qq_test.test | RUN | 0.196728 | 0.439458 | 0.556088 | 0.001321 | 0.001356 | 0.001419 |
| conjugate_test.test | RUN | 0.206839 | 0.456570 | 0.563268 | 0.001357 | 0.001440 | 0.001385 |
| normalize_q_test.test | RUN | 0.206515 | 0.509888 | 0.587383 | 0.001172 | 0.001255 | 0.001260 |
| div_eq_qs_test.test | RUN | 0.199394 | 0.434365 | 0.564990 | 0.001246 | 0.001213 | 0.001316 |
| div_qs_test.test | RUN | 0.198474 | 0.455199 | 0.571502 | 0.001280 | 0.001354 | 0.001251 |
| dot_qq_test.test | RUN | 0.198654 | 0.447333 | 0.578331 | 0.001151 | 0.001471 | 0.001302 |
| eq_qq_test.test | RUN | 0.206593 | 0.468013 | 0.577228 | 0.001183 | 0.001383 | 0.001308 |
| inverse_q_test.test | RUN | 0.240431 | 0.609277 | 0.733336 | 0.001371 | 0.001186 | 0.001156 |
| mag_q_test.test | RUN | 0.199827 | 0.459152 | 0.558678 | 0.001334 | 0.001298 | 0.001236 |
| mag_sqr_q_test.test | RUN | 0.202713 | 0.447811 | 0.562027 | 0.001198 | 0.001455 | 0.001279 |
| minus_q_test.test | RUN | 0.199389 | 0.453998 | 0.567783 | 0.001340 | 0.001402 | 0.001162 |
| minus_eq_qq_test.test | RUN | 0.201572 | 0.453847 | 0.568386 | 0.001320 | 0.001278 | 0.001375 |
| minus_qq_test.test | RUN | 0.201896 | 0.455311 | 0.577011 | 0.001360 | 0.001236 | 0.001267 |
| mul_eq_qs_test.test | RUN | 0.202882 | 0.431986 | 0.560697 | 0.001244 | 0.001444 | 0.001179 |
| mul_qs_test.test | RUN | 0.201061 | 0.458964 | 0.575279 | 0.001188 | 0.001328 | 0.001280 |
| mul_qv_test.test | RUN | 0.251220 | 0.609177 | 0.747361 | 0.001322 | 0.001352 | 0.001215 |
| mul_qq_test.test | RUN | 0.239556 | 0.644591 | 0.714196 | 0.001223 | 0.001245 | 0.001164 |
| mul_eq_qq_test.test | RUN | 0.246809 | 0.640097 | 0.705983 | 0.001394 | 0.001264 | 0.001323 |
| plus_eq_qq_test.test | RUN | 0.200713 | 0.446093 | 0.559592 | 0.001191 | 0.001484 | 0.001378 |
| plus_qq_test.test | RUN | 0.202203 | 0.463676 | 0.580163 | 0.001380 | 0.001296 | 0.001319 |
| scalar_cast_q_test.test | RUN | 0.201377 | 0.425434 | 0.570683 | 0.001303 | 0.001161 | 0.001318 |
| slerp_test.test | RUN | 0.222403 | 0.898531 | 0.690033 | 0.015220 | 0.012788 | 0.013250 |
| convert_to_test.test | RUN | 0.297958 | 0.810216 | 1.068900 | 0.001284 | 0.001275 | 0.001362 |
| rot_mat_test.test | RUN | 0.488076 | 3.780152 | 3.404775 | 0.029822 | 0.032599 | 0.033901 |
| rot_quat_test.test | RUN | 0.247767 | 0.746878 | 0.740967 | 0.001338 | 0.001343 | 0.001492 |
| rotx_mat_test.test | RUN | 0.289089 | 0.983606 | 0.986076 | 0.001565 | 0.001308 | 0.001402 |
| rotx_quat_test.test | RUN | 0.235022 | 0.624457 | 0.695567 | 0.001335 | 0.001233 | 0.001487 |
| roty_mat_test.test | RUN | 0.289049 | 0.993165 | 0.975814 | 0.001428 | 0.001340 | 0.001483 |
| roty_quat_test.test | RUN | 0.238727 | 0.623131 | 0.663480 | 0.001435 | 0.001165 | 0.001202 |
| rotz_mat_test.test | RUN | 0.297661 | 1.118088 | 1.045687 | 0.001332 | 0.001371 | 0.001370 |
| rotz_quat_test.test | RUN | 0.247802 | 0.634199 | 0.705188 | 0.001331 | 0.001285 | 0.001609 |
| zero_vec_test.test | RUN | 0.211334 | 0.537846 | 0.586761 | 0.001278 | 0.001305 | 0.001190 |
| zero_mat_test.test | RUN | 0.254711 | 0.898760 | 0.871724 | 0.001113 | 0.001100 | 0.001310 |
| zero_quat_test.test | RUN | 0.197541 | 0.452059 | 0.537433 | 0.001372 | 0.001382 | 0.001408 |
| identity_mat_test.test | RUN | 0.238605 | 0.667084 | 0.743584 | 0.001082 | 0.001240 | 0.001349 |
| identity_quat_test.test | RUN | 0.202458 | 0.439321 | 0.554585 | 0.001302 | 0.001328 | 0.001520 |
| col_test.test | RUN | 0.392720 | 1.405579 | 1.641236 | 0.001374 | 0.001322 | 0.001391 |
| col_mat_test.test | RUN | 0.251632 | 0.626774 | 0.767358 | 0.001268 | 0.001575 | 0.001418 |
| neg_col_test.test | RUN | 0.295310 | 0.892232 | 0.982044 | 0.001188 | 0.001314 | 0.001304 |
| neg_row_test.test | RUN | 0.300952 | 0.890695 | 0.981518 | 0.001407 | 0.001501 | 0.001198 |
| del_col_test.test | RUN | 0.317511 | 0.989463 | 1.031813 | 0.001306 | 0.001493 | 0.001388 |
| del_row_test.test | RUN | 0.311641 | 0.962277 | 1.010537 | 0.001360 | 0.001384 | 0.001293 |
| del_row_col_test.test | RUN | 0.425655 | 1.828514 | 1.900401 | 0.001294 | 0.001427 | 0.001432 |
| swap_cols_test.test | RUN | 0.589014 | 2.480744 | 2.343341 | 0.001523 | 0.001462 | 0.001570 |
| swap_rows_test.test | RUN | 0.650067 | 2.574740 | 2.305015 | 0.001495 | 0.001338 | 0.001326 |
| diag_test.test | RUN | 0.260746 | 0.660009 | 0.866064 | 0.001298 | 0.001326 | 0.001376 |
| diag_mat_test.test | RUN | 0.263216 | 0.639866 | 0.802270 | 0.001405 | 0.001259 | 0.001202 |
| row_test.test | RUN | 0.389935 | 1.408415 | 1.655533 | 0.001353 | 0.001379 | 0.001263 |
| row_mat_test.test | RUN | 0.255632 | 0.608961 | 0.741961 | 0.001307 | 0.001479 | 0.001335 |
| transpose_test.test | RUN | 0.302221 | 0.969542 | 1.048760 | 0.001195 | 0.001412 | 0.001363 |
| translation_test.test | RUN | 0.243005 | 0.588634 | 0.769655 | 0.001262 | 0.001407 | 0.001252 |
| translation_mat_test.test | RUN | 0.265547 | 0.603549 | 0.838134 | 0.001317 | 0.001251 | 0.001193 |
| swizzle_const_fail.test | COMPILE_FAIL | 0.090197 | 0.172652 | 0.232229 | — | — | — |
| swizzle2_test2.test | RUN | 0.105707 | 0.260328 | 0.310544 | 0.001214 | 0.001271 | 0.001400 |
| swizzle2_test3.test | RUN | 0.106260 | 0.260644 | 0.311677 | 0.001283 | 0.001311 | 0.001380 |
| swizzle2_test4.test | RUN | 0.106862 | 0.254618 | 0.311884 | 0.001219 | 0.001455 | 0.001337 |
| swizzle2_test.test | RUN | 0.350971 | 0.706857 | 1.007677 | 0.001260 | 0.001295 | 0.001343 |
| swizzle3_test2.test | RUN | 0.116781 | 0.277473 | 0.345540 | 0.001257 | 0.001377 | 0.001334 |
| swizzle3_test3.test | RUN | 0.120005 | 0.279749 | 0.346715 | 0.001199 | 0.001373 | 0.001390 |
| swizzle3_test4.test | RUN | 0.118863 | 0.279085 | 0.349121 | 0.001246 | 0.001403 | 0.001228 |
| swizzle3_test.test | RUN | 0.336436 | 0.721307 | 1.005122 | 0.001249 | 0.001161 | 0.001478 |
| swizzle4_test2.test | RUN | 0.201743 | 0.390512 | 0.561876 | 0.001488 | 0.001221 | 0.001554 |
| swizzle4_test3.test | RUN | 0.197188 | 0.393237 | 0.566263 | 0.001278 | 0.001278 | 0.001241 |
| swizzle4_test4.test | RUN | 0.204032 | 0.403377 | 0.570001 | 0.001106 | 0.001247 | 0.001318 |
| swizzle4_test.test | RUN | 0.341397 | 0.782537 | 1.034150 | 0.001205 | 0.001312 | 0.001445 |
| deduce_scalar_test.test | COMPILE | 0.017513 | 0.037638 | 0.057036 | — | — | — |
| deduce_scalar_mq_test.test | RUN | 0.132667 | 0.306698 | 0.374313 | 0.001292 | 0.001354 | 0.001328 |
| deduce_scalar_mv_test.test | RUN | 0.152129 | 0.343174 | 0.438661 | 0.001382 | 0.001143 | 0.001310 |
| deduce_scalar_fail.test | COMPILE_FAIL | 0.013871 | 0.024155 | 0.043549 | — | — | — |
| deduce_mat_test.test | COMPILE | 0.015595 | 0.033810 | 0.048404 | — | — | — |
| deduce_quat_test.test | COMPILE | 0.015097 | 0.032770 | 0.048633 | — | — | — |
| deduce_vec_test.test | COMPILE | 0.015232 | 0.033078 | 0.048550 | — | — | — |
| interop_test.test | RUN | 0.159642 | 0.440528 | 0.643561 | 0.000475 | 0.000544 | 0.001087 |
| transform_test.test | RUN | 0.298465 | 0.605514 | 0.908173 | 0.000948 | 0.000944 | 0.001004 |
| projection_test.test | RUN | 0.200216 | 0.500768 | 0.535353 | 0.000963 | 0.000935 | 0.000961 |
| scalar_traits_test.test | COMPILE | 0.015440 | 0.034252 | 0.052465 | — | — | — |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 1.004× | 1.004×, 1.004× | 0.988× |
| clang | 1.038× | 1.035×, 1.040× | 1.002× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1364 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/43740486413).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| access_m_test.test | 10 | 0.000820s | 0.000787s | 0.000807s | byte equality observed |
| access_q_test.test | 10 | 0.000836s | 0.000791s | 0.000786s | byte equality observed |
| access_v_test.test | 10 | 0.000817s | 0.000790s | 0.000809s | byte equality observed |
| assign_test.test | 10 | 0.000820s | 0.000787s | 0.000800s | byte equality observed |
| cmp_mm_test.test | 10 | 0.000825s | 0.000787s | 0.000816s | byte equality observed |
| cmp_qq_test.test | 10 | 0.000818s | 0.000787s | 0.000825s | byte equality observed |
| cmp_vv_test.test | 10 | 0.000826s | 0.000834s | 0.000822s | byte equality observed |
| col_mat_test.test | 10 | 0.000831s | 0.000806s | 0.000816s | byte equality observed |
| col_test.test | 10 | 0.000816s | 0.000838s | 0.000789s | byte equality observed |
| conjugate_test.test | 10 | 0.000809s | 0.000814s | 0.000805s | byte equality observed |
| convert_to_test.test | 10 | 0.000802s | 0.000820s | 0.000808s | byte equality observed |
| cross_test.test | 10 | 0.000826s | 0.000796s | 0.000834s | byte equality observed |
| deduce_scalar_mq_test.test | 10 | 0.000816s | 0.000816s | 0.000779s | byte equality observed |
| deduce_scalar_mv_test.test | 10 | 0.000816s | 0.000794s | 0.000803s | byte equality observed |
| del_col_test.test | 10 | 0.000805s | 0.000809s | 0.000799s | byte equality observed |
| del_row_col_test.test | 10 | 0.000808s | 0.000789s | 0.000815s | byte equality observed |
| del_row_test.test | 10 | 0.000792s | 0.000789s | 0.000826s | byte equality observed |
| determinant_test.test | 10 | 0.000825s | 0.000826s | 0.000833s | byte equality observed |
| diag_mat_test.test | 10 | 0.000805s | 0.000826s | 0.000832s | byte equality observed |
| diag_test.test | 10 | 0.000804s | 0.000822s | 0.000841s | byte equality observed |
| div_eq_ms_test.test | 10 | 0.000807s | 0.000814s | 0.000820s | byte equality observed |
| div_eq_qs_test.test | 10 | 0.000802s | 0.000791s | 0.000830s | byte equality observed |
| div_eq_vs_test.test | 10 | 0.000812s | 0.000797s | 0.000776s | byte equality observed |
| div_ms_test.test | 10 | 0.000822s | 0.000799s | 0.000794s | byte equality observed |
| div_qs_test.test | 10 | 0.000808s | 0.000798s | 0.000797s | byte equality observed |
| div_vs_test.test | 10 | 0.000815s | 0.000788s | 0.000790s | byte equality observed |
| dot_qq_test.test | 10 | 0.000822s | 0.000793s | 0.000807s | byte equality observed |
| dot_vv_test.test | 10 | 0.000830s | 0.000789s | 0.000813s | byte equality observed |
| eq_mm_test.test | 10 | 0.000836s | 0.000802s | 0.000815s | byte equality observed |
| eq_qq_test.test | 10 | 0.000832s | 0.000810s | 0.000786s | byte equality observed |
| eq_vv_test.test | 10 | 0.000804s | 0.000803s | 0.000805s | byte equality observed |
| identity_mat_test.test | 10 | 0.000820s | 0.000815s | 0.000801s | byte equality observed |
| identity_quat_test.test | 10 | 0.000810s | 0.000816s | 0.000776s | byte equality observed |
| interop_test.test | 10 | 0.000365s | 0.000363s | 0.000790s | byte equality observed |
| inverse_m_test.test | 10 | 0.000850s | 0.000827s | 0.000832s | byte equality observed |
| inverse_q_test.test | 10 | 0.000795s | 0.000790s | 0.000795s | byte equality observed |
| mag_q_test.test | 10 | 0.000805s | 0.000801s | 0.000791s | byte equality observed |
| mag_sqr_q_test.test | 10 | 0.000777s | 0.000784s | 0.000795s | byte equality observed |
| mag_sqr_v_test.test | 10 | 0.000806s | 0.000786s | 0.000785s | byte equality observed |
| mag_v_test.test | 10 | 0.000823s | 0.000821s | 0.000776s | byte equality observed |
| mat_index_test.test | 10 | 0.000823s | 0.000814s | 0.000819s | byte equality observed |
| mat_traits_array_test.test | 10 | 0.000790s | 0.000803s | 0.000798s | byte equality observed |
| mat_traits_std_array_test.test | 10 | 0.000785s | 0.000786s | 0.000784s | byte equality observed |
| math_test.test | 10 | 0.001202s | 0.001163s | 0.001067s | byte equality observed |
| minus_eq_mm_test.test | 10 | 0.000793s | 0.000802s | 0.000811s | byte equality observed |
| minus_eq_qq_test.test | 10 | 0.000797s | 0.000794s | 0.000831s | byte equality observed |
| minus_eq_vv_test.test | 10 | 0.000827s | 0.000813s | 0.000829s | byte equality observed |
| minus_m_test.test | 10 | 0.000790s | 0.000821s | 0.000823s | byte equality observed |
| minus_mm_test.test | 10 | 0.000823s | 0.000839s | 0.000791s | byte equality observed |
| minus_q_test.test | 10 | 0.000814s | 0.000829s | 0.000797s | byte equality observed |
| minus_qq_test.test | 10 | 0.000796s | 0.000820s | 0.000799s | byte equality observed |
| minus_v_test.test | 10 | 0.000806s | 0.000800s | 0.000789s | byte equality observed |
| minus_vv_test.test | 10 | 0.000808s | 0.000827s | 0.000794s | byte equality observed |
| mul_eq_mm_test.test | 10 | 0.000808s | 0.000786s | 0.000808s | byte equality observed |
| mul_eq_ms_test.test | 10 | 0.000796s | 0.000792s | 0.000802s | byte equality observed |
| mul_eq_qq_test.test | 10 | 0.000810s | 0.000816s | 0.000817s | byte equality observed |
| mul_eq_qs_test.test | 10 | 0.000823s | 0.000800s | 0.000800s | byte equality observed |
| mul_eq_vs_test.test | 10 | 0.000786s | 0.000798s | 0.000805s | byte equality observed |
| mul_mm_test.test | 10 | 0.000807s | 0.000803s | 0.000786s | byte equality observed |
| mul_ms_test.test | 10 | 0.000824s | 0.000813s | 0.000813s | byte equality observed |
| mul_mv_test.test | 10 | 0.000829s | 0.000825s | 0.000780s | byte equality observed |
| mul_qq_test.test | 10 | 0.000840s | 0.000780s | 0.000824s | byte equality observed |
| mul_qs_test.test | 10 | 0.000802s | 0.000822s | 0.000813s | byte equality observed |
| mul_qv_test.test | 10 | 0.000803s | 0.000816s | 0.000819s | byte equality observed |
| mul_sm_test.test | 10 | 0.000793s | 0.000820s | 0.000823s | byte equality observed |
| mul_sv_test.test | 10 | 0.000807s | 0.000824s | 0.000807s | byte equality observed |
| mul_vm_test.test | 10 | 0.000797s | 0.000806s | 0.000826s | byte equality observed |
| mul_vs_test.test | 10 | 0.000803s | 0.000800s | 0.000829s | byte equality observed |
| neg_col_test.test | 10 | 0.000814s | 0.000792s | 0.000800s | byte equality observed |
| neg_row_test.test | 10 | 0.000801s | 0.000804s | 0.000806s | byte equality observed |
| normalize_q_test.test | 10 | 0.000811s | 0.000823s | 0.000800s | byte equality observed |
| normalize_v_test.test | 10 | 0.000816s | 0.000785s | 0.000804s | byte equality observed |
| plus_eq_mm_test.test | 10 | 0.000808s | 0.000821s | 0.000818s | byte equality observed |
| plus_eq_qq_test.test | 10 | 0.000806s | 0.000800s | 0.000790s | byte equality observed |
| plus_eq_vv_test.test | 10 | 0.000793s | 0.000801s | 0.000775s | byte equality observed |
| plus_mm_test.test | 10 | 0.000803s | 0.000815s | 0.000774s | byte equality observed |
| plus_qq_test.test | 10 | 0.000806s | 0.000828s | 0.000793s | byte equality observed |
| plus_vv_test.test | 10 | 0.000800s | 0.000817s | 0.000781s | byte equality observed |
| projection_test.test | 10 | 0.000812s | 0.000805s | 0.000818s | byte equality observed |
| quat_traits_array_test.test | 10 | 0.000816s | 0.000822s | 0.000804s | byte equality observed |
| quat_traits_std_array_test.test | 10 | 0.000772s | 0.000767s | 0.000765s | byte equality observed |
| rot_mat_test.test | 1 | 0.020264s | 0.022860s | 0.026325s | byte equality observed |
| rot_quat_test.test | 10 | 0.000754s | 0.000732s | 0.000771s | byte equality observed |
| rotx_mat_test.test | 10 | 0.000758s | 0.000733s | 0.000749s | byte equality observed |
| rotx_quat_test.test | 10 | 0.000806s | 0.000827s | 0.000839s | byte equality observed |
| roty_mat_test.test | 10 | 0.000826s | 0.000843s | 0.000824s | byte equality observed |
| roty_quat_test.test | 10 | 0.000824s | 0.000825s | 0.000821s | byte equality observed |
| rotz_mat_test.test | 10 | 0.000828s | 0.000819s | 0.000850s | byte equality observed |
| rotz_quat_test.test | 10 | 0.000844s | 0.000802s | 0.000854s | byte equality observed |
| row_mat_test.test | 10 | 0.000807s | 0.000805s | 0.000807s | byte equality observed |
| row_test.test | 10 | 0.000821s | 0.000825s | 0.000807s | byte equality observed |
| scalar_cast_m_test.test | 10 | 0.000815s | 0.000811s | 0.000784s | byte equality observed |
| scalar_cast_q_test.test | 10 | 0.000801s | 0.000793s | 0.000826s | byte equality observed |
| scalar_cast_v_test.test | 10 | 0.000799s | 0.000788s | 0.000830s | byte equality observed |
| slerp_test.test | 2 | 0.010939s | 0.009412s | 0.009927s | byte equality observed |
| swap_cols_test.test | 10 | 0.000744s | 0.000721s | 0.000734s | byte equality observed |
| swap_rows_test.test | 10 | 0.000759s | 0.000748s | 0.000717s | byte equality observed |
| swizzle2_test.test | 10 | 0.000802s | 0.000775s | 0.000804s | byte equality observed |
| swizzle2_test2.test | 10 | 0.000820s | 0.000789s | 0.000811s | byte equality observed |
| swizzle2_test3.test | 10 | 0.000803s | 0.000812s | 0.000800s | byte equality observed |
| swizzle2_test4.test | 10 | 0.000793s | 0.000833s | 0.000819s | byte equality observed |
| swizzle3_test.test | 10 | 0.000790s | 0.000829s | 0.000789s | byte equality observed |
| swizzle3_test2.test | 10 | 0.000802s | 0.000813s | 0.000816s | byte equality observed |
| swizzle3_test3.test | 10 | 0.000800s | 0.000796s | 0.000819s | byte equality observed |
| swizzle3_test4.test | 10 | 0.000814s | 0.000826s | 0.000829s | byte equality observed |
| swizzle4_test.test | 10 | 0.000819s | 0.000793s | 0.000843s | byte equality observed |
| swizzle4_test2.test | 10 | 0.000819s | 0.000795s | 0.000828s | byte equality observed |
| swizzle4_test3.test | 10 | 0.000798s | 0.000816s | 0.000802s | byte equality observed |
| swizzle4_test4.test | 10 | 0.000810s | 0.000806s | 0.000803s | byte equality observed |
| to_string_test.test | 10 | 0.000833s | 0.000800s | 0.000840s | byte equality observed |
| transform_test.test | 10 | 0.000823s | 0.000785s | 0.000825s | byte equality observed |
| translation_mat_test.test | 10 | 0.000827s | 0.000773s | 0.000786s | byte equality observed |
| translation_test.test | 10 | 0.000810s | 0.000798s | 0.000797s | byte equality observed |
| transpose_test.test | 10 | 0.000799s | 0.000781s | 0.000818s | byte equality observed |
| vec_index_test.test | 10 | 0.000802s | 0.000818s | 0.000827s | byte equality observed |
| vec_register_test.test | 10 | 0.000819s | 0.000779s | 0.000826s | byte equality observed |
| vec_traits_array_test.test | 10 | 0.000811s | 0.000791s | 0.000831s | byte equality observed |
| vec_traits_gnuc_test.test | 10 | 0.000824s | 0.000794s | 0.000805s | byte equality observed |
| vec_traits_std_array_test.test | 10 | 0.000817s | 0.000802s | 0.000811s | byte equality observed |
| zero_mat_test.test | 10 | 0.000809s | 0.000789s | 0.000818s | byte equality observed |
| zero_quat_test.test | 10 | 0.000795s | 0.000819s | 0.000790s | byte equality observed |
| zero_vec_test.test | 10 | 0.000798s | 0.000792s | 0.000798s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/43740486413).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
