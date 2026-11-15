# libs/type_traits/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| type_with_alignment_test.test | RUN | 0.125811 | 0.353420 | 0.496075 | 0.001405 | 0.001388 | 0.001308 |
| type_traits_test.test | RUN | 0.170299 | 0.374081 | 0.477210 | 0.000572 | 0.000651 | 0.001214 |
| type_identity_test.test | RUN | 0.334667 | 1.265467 | 2.648556 | 0.001333 | 0.001463 | 0.001347 |
| tricky_rvalue_test.test | RUN | 0.115706 | 0.288215 | 0.375193 | 0.001406 | 0.001436 | 0.001270 |
| tricky_partial_spec_test.test | RUN | 0.137873 | 0.415731 | 0.629572 | 0.001484 | 0.001304 | 0.001307 |
| tricky_is_enum_test.test | RUN | 0.108559 | 0.268532 | 0.342678 | 0.001294 | 0.001381 | 0.001418 |
| tricky_incomplete_type_test.test | RUN | 0.179330 | 0.414752 | 0.563246 | 0.001240 | 0.001244 | 0.001234 |
| tricky_function_type_test.test | RUN | 0.146689 | 0.427407 | 0.677516 | 0.001336 | 0.001523 | 0.001371 |
| tricky_add_pointer_test.test | RUN | 0.219352 | 0.755752 | 1.508211 | 0.001321 | 0.001357 | 0.001364 |
| tricky_abstract_type_test.test | RUN | 0.113902 | 0.284720 | 0.364754 | 0.001319 | 0.001432 | 0.001322 |
| remove_volatile_test.test | RUN | 0.295886 | 1.104710 | 2.323726 | 0.001419 | 0.001485 | 0.001446 |
| remove_reference_test.test | RUN | 0.304930 | 1.161274 | 2.460279 | 0.001310 | 0.001442 | 0.001318 |
| remove_pointer_test.test | RUN | 0.324491 | 1.197985 | 2.588878 | 0.001358 | 0.001432 | 0.001349 |
| remove_extent_test.test | RUN | 0.307213 | 1.169002 | 2.479761 | 0.001311 | 0.001414 | 0.001331 |
| remove_cv_test.test | RUN | 0.304928 | 1.156067 | 2.469399 | 0.001328 | 0.001390 | 0.001430 |
| remove_cv_ref_test.test | RUN | 0.653376 | 2.776986 | 6.126325 | 0.001400 | 0.001510 | 0.001368 |
| remove_const_test.test | RUN | 0.300122 | 1.080122 | 2.376987 | 0.001470 | 0.001415 | 0.001381 |
| remove_bounds_test.test | RUN | 0.316813 | 1.159974 | 2.567653 | 0.001363 | 0.001440 | 0.001372 |
| remove_all_extents_test.test | RUN | 0.310794 | 1.158562 | 2.418701 | 0.001346 | 0.001501 | 0.001272 |
| rank_test.test | RUN | 0.111314 | 0.291288 | 0.396526 | 0.001290 | 0.001443 | 0.001441 |
| promote_mpl_test.test | RUN | 0.102760 | 0.265189 | 0.290672 | 0.000528 | 0.000551 | 0.001261 |
| promote_enum_test.test | RUN | 0.020511 | 0.063799 | 0.065608 | 0.000548 | 0.000539 | 0.001289 |
| promote_enum_msvc_bug_test.test | RUN | 0.018524 | 0.052768 | 0.053331 | 0.000569 | 0.000568 | 0.001374 |
| promote_basic_test.test | RUN | 0.023097 | 0.068453 | 0.066374 | 0.000587 | 0.000580 | 0.001397 |
| negation_test.test | RUN | 0.108657 | 0.261113 | 0.364561 | 0.001386 | 0.001454 | 0.001382 |
| mpl_interop_test3.test | RUN | 0.094546 | 0.251829 | 0.262657 | 0.000511 | 0.000535 | 0.001312 |
| mpl_interop_test2.test | RUN | 0.030861 | 0.066368 | 0.065104 | 0.000557 | 0.000552 | 0.001375 |
| mpl_interop_test1.test | RUN | 0.017496 | 0.047457 | 0.045175 | 0.000523 | 0.000566 | 0.001302 |
| make_void_test.test | RUN | 0.116556 | 0.280085 | 0.389926 | 0.001331 | 0.001520 | 0.001341 |
| make_unsigned_test.test | RUN | 0.136915 | 0.380694 | 0.561217 | 0.001352 | 0.001399 | 0.001394 |
| make_signed_test.test | RUN | 0.135845 | 0.386659 | 0.527875 | 0.001296 | 0.001398 | 0.001343 |
| is_volatile_test.test | RUN | 0.119791 | 0.315110 | 0.450704 | 0.001328 | 0.001424 | 0.001406 |
| is_void_test.test | RUN | 0.114195 | 0.286295 | 0.420916 | 0.001253 | 0.001405 | 0.001376 |
| is_virtual_base_of_test.test | RUN | 0.135080 | 0.374278 | 0.576882 | 0.001262 | 0.001351 | 0.001290 |
| is_unsigned_test.test | RUN | 0.119887 | 0.299312 | 0.425001 | 0.001295 | 0.001465 | 0.001246 |
| is_unscoped_enum_test.test | RUN | 0.117153 | 0.277251 | 0.366105 | 0.001211 | 0.001271 | 0.001295 |
| is_union_test.test | RUN | 0.123549 | 0.345092 | 0.527241 | 0.001333 | 0.001582 | 0.001294 |
| is_unbounded_array_test.test | RUN | 0.115908 | 0.300937 | 0.396744 | 0.001294 | 0.001565 | 0.001309 |
| is_trivially_copyable_test.test | RUN | 0.184021 | 0.617944 | 1.024468 | 0.001309 | 0.001357 | 0.001273 |
| is_swappable_test.test | RUN | 0.154618 | 0.469523 | 0.753151 | 0.001290 | 0.001472 | 0.001334 |
| is_stateless_test.test | RUN | 0.172443 | 0.521381 | 0.841053 | 0.001453 | 0.001275 | 0.001337 |
| is_signed_test.test | RUN | 0.114607 | 0.296779 | 0.407761 | 0.000999 | 0.001462 | 0.001301 |
| is_scoped_enum_test.test | RUN | 0.113714 | 0.272983 | 0.356391 | 0.001225 | 0.001468 | 0.001207 |
| is_scalar_test.test | RUN | 0.149857 | 0.473352 | 0.790085 | 0.001326 | 0.001399 | 0.001259 |
| is_same_test.test | RUN | 0.104465 | 0.296000 | 0.371486 | 0.001287 | 0.001329 | 0.001352 |
| is_rvalue_reference_test.test | RUN | 0.120095 | 0.330904 | 0.455363 | 0.001293 | 0.001334 | 0.001383 |
| is_reference_test.test | RUN | 0.117736 | 0.329690 | 0.475289 | 0.001255 | 0.001350 | 0.001246 |
| is_polymorphic_test.test | RUN | 0.123319 | 0.347732 | 0.500496 | 0.001225 | 0.001510 | 0.001330 |
| is_pointer_test.test | RUN | 0.116190 | 0.334603 | 0.506602 | 0.001378 | 0.001279 | 0.001302 |
| is_pod_test.test | RUN | 0.155833 | 0.540565 | 0.899143 | 0.001218 | 0.001558 | 0.001207 |
| is_object_test.test | RUN | 0.109772 | 0.294666 | 0.377414 | 0.001266 | 0.001503 | 0.001395 |
| is_nothrow_swappable_test.test | RUN | 0.156226 | 0.504325 | 0.847624 | 0.001254 | 0.001496 | 0.001339 |
| is_nothrow_move_constructible_test.test | RUN | 0.155920 | 0.521932 | 0.852358 | 0.001398 | 0.001393 | 0.001417 |
| is_nothrow_move_assignable_test.test | RUN | 0.160775 | 0.530544 | 0.853828 | 0.001274 | 0.001246 | 0.001297 |
| is_noncopyable_test.test | RUN | 0.115246 | 0.288306 | 0.384604 | 0.001185 | 0.001291 | 0.001193 |
| is_member_pointer_test.test | RUN | 0.117421 | 0.295256 | 0.372644 | 0.001328 | 0.001439 | 0.001352 |
| is_member_obj_test.test | RUN | 0.119333 | 0.302368 | 0.412265 | 0.001274 | 0.001461 | 0.001280 |
| is_member_func_test.test | RUN | 0.115889 | 0.319971 | 0.441709 | 0.001220 | 0.001383 | 0.001286 |
| is_lvalue_reference_test.test | RUN | 0.121174 | 0.344918 | 0.471982 | 0.001265 | 0.001355 | 0.001281 |
| is_list_constructible_test.test | RUN | 0.143439 | 0.390941 | 0.520838 | 0.001241 | 0.001587 | 0.001395 |
| is_integral_test.test | RUN | 0.145287 | 0.468845 | 0.747579 | 0.001368 | 0.001551 | 0.001296 |
| is_fundamental_test.test | RUN | 0.142860 | 0.483113 | 0.765376 | 0.001369 | 0.001424 | 0.001330 |
| is_function_test.test | RUN | 0.115471 | 0.327055 | 0.452577 | 0.001291 | 0.001286 | 0.001434 |
| is_floating_point_test.test | RUN | 0.120547 | 0.338745 | 0.490417 | 0.001316 | 0.001540 | 0.001264 |
| is_float_test.test | RUN | 0.120625 | 0.339432 | 0.488465 | 0.001355 | 0.001314 | 0.001373 |
| is_final_test.test | RUN | 0.123327 | 0.340156 | 0.489617 | 0.001303 | 0.001218 | 0.001223 |
| is_enum_test.test | RUN | 0.114651 | 0.290483 | 0.377939 | 0.001276 | 0.001290 | 0.001266 |
| is_empty_test.test | RUN | 0.121865 | 0.307681 | 0.433371 | 0.001289 | 0.001416 | 0.001221 |
| is_detected_test.test | RUN | 0.109712 | 0.264805 | 0.345414 | 0.001256 | 0.001402 | 0.001334 |
| is_detected_exact_test.test | RUN | 0.111007 | 0.265355 | 0.343296 | 0.001212 | 0.001445 | 0.001366 |
| is_destructible_test.test | RUN | 0.156077 | 0.517553 | 0.850141 | 0.001340 | 0.001469 | 0.001362 |
| is_default_constr_test.test | RUN | 0.155867 | 0.530938 | 0.865502 | 0.001227 | 0.001498 | 0.001334 |
| is_copy_constructible_test.test | RUN | 0.165893 | 0.549323 | 0.909626 | 0.001472 | 0.001401 | 0.001384 |
| is_copy_assignable_test.test | RUN | 0.164240 | 0.538904 | 0.904727 | 0.001343 | 0.001465 | 0.001288 |
| is_convertible_test.test | RUN | 0.155078 | 0.487853 | 0.736234 | 0.001227 | 0.001386 | 0.001396 |
| is_constructible_test.test | RUN | 0.131118 | 0.354341 | 0.505556 | 0.001321 | 0.001471 | 0.001354 |
| is_const_test.test | RUN | 0.118481 | 0.312249 | 0.417069 | 0.001340 | 0.001276 | 0.001220 |
| is_compound_test.test | RUN | 0.113584 | 0.272592 | 0.353779 | 0.001112 | 0.001283 | 0.001309 |
| is_complex_test.test | RUN | 0.143805 | 0.349311 | 0.492665 | 0.001308 | 0.001486 | 0.001313 |
| is_complete_test.test | RUN | 0.126346 | 0.367444 | 0.567043 | 0.001284 | 0.001231 | 0.001197 |
| is_class_test.test | RUN | 0.118456 | 0.326451 | 0.478352 | 0.001269 | 0.001476 | 0.001222 |
| is_bounded_array_test.test | RUN | 0.112216 | 0.293849 | 0.395980 | 0.001287 | 0.001425 | 0.001009 |
| is_base_of_test.test | RUN | 0.113603 | 0.326850 | 0.446039 | 0.001254 | 0.001441 | 0.001260 |
| is_base_and_derived_test.test | RUN | 0.117273 | 0.325496 | 0.461629 | 0.001231 | 0.001401 | 0.001047 |
| is_assignable_test.test | RUN | 0.143184 | 0.451351 | 0.696403 | 0.001155 | 0.001142 | 0.001244 |
| is_array_test.test | RUN | 0.118849 | 0.314835 | 0.420049 | 0.001193 | 0.001378 | 0.001336 |
| is_arithmetic_test.test | RUN | 0.144198 | 0.460586 | 0.699487 | 0.001161 | 0.001555 | 0.001332 |
| is_abstract_test.test | RUN | 0.260514 | 1.208204 | 2.571327 | 0.001219 | 0.001417 | 0.001314 |
| integral_constant_test.test | RUN | 0.016252 | 0.048785 | 0.049596 | 0.000534 | 0.000604 | 0.001246 |
| has_virtual_destructor_test.test | RUN | 0.124571 | 0.358991 | 0.549179 | 0.001247 | 0.001460 | 0.001379 |
| has_unary_plus_test.test | RUN | 0.239263 | 1.238956 | 1.964216 | 0.001353 | 0.001566 | 0.001397 |
| has_unary_minus_test.test | RUN | 0.236269 | 1.226272 | 1.928071 | 0.001381 | 0.001630 | 0.001226 |
| has_trivial_move_constructor_test.test | RUN | 0.161312 | 0.546862 | 0.916057 | 0.001314 | 0.001366 | 0.001416 |
| has_trivial_move_assign_test.test | RUN | 0.160746 | 0.517614 | 0.831112 | 0.001397 | 0.001449 | 0.001352 |
| has_trivial_destructor_test.test | RUN | 0.159091 | 0.543325 | 0.920189 | 0.001401 | 0.001336 | 0.001341 |
| has_trivial_copy_test.test | RUN | 0.169956 | 0.571328 | 0.912575 | 0.001434 | 0.002134 | 0.001412 |
| has_trivial_constr_test.test | RUN | 0.164183 | 0.608542 | 0.927991 | 0.001453 | 0.001546 | 0.001404 |
| has_trivial_assign_test.test | RUN | 0.166099 | 0.596216 | 0.906164 | 0.001321 | 0.001574 | 0.001471 |
| has_right_shift_test.test | RUN | 0.256736 | 1.059238 | 2.048736 | 0.001394 | 0.001542 | 0.001281 |
| has_right_shift_assign_test.test | RUN | 0.237611 | 0.993163 | 1.911738 | 0.001269 | 0.001298 | 0.001417 |
| has_prefix_classes3_test.test | RUN | 0.178024 | 0.589181 | 1.001740 | 0.001319 | 0.001398 | 0.001342 |
| has_prefix_classes2_test.test | RUN | 0.173910 | 0.599058 | 0.992319 | 0.001104 | 0.001356 | 0.001317 |
| has_prefix_classes1_test.test | RUN | 0.172767 | 0.596783 | 0.902302 | 0.001440 | 0.001509 | 0.001394 |
| has_prefix_classes0_test.test | RUN | 0.168536 | 0.591923 | 0.938027 | 0.001382 | 0.001522 | 0.001386 |
| has_pre_increment_test.test | RUN | 0.234073 | 1.238894 | 1.868775 | 0.001291 | 0.001412 | 0.001248 |
| has_pre_decrement_test.test | RUN | 0.235849 | 1.241934 | 1.911334 | 0.001242 | 0.001374 | 0.001321 |
| has_postfix_classes3_test.test | RUN | 0.173531 | 0.578066 | 0.991770 | 0.001308 | 0.001386 | 0.001334 |
| has_postfix_classes2_test.test | RUN | 0.173612 | 0.566806 | 0.991387 | 0.001364 | 0.001402 | 0.001476 |
| has_postfix_classes1_test.test | RUN | 0.172113 | 0.603970 | 0.908821 | 0.001233 | 0.001426 | 0.001419 |
| has_postfix_classes0_test.test | RUN | 0.170011 | 0.598187 | 0.951197 | 0.001200 | 0.001413 | 0.001447 |
| has_post_increment_test.test | RUN | 0.235627 | 1.250263 | 1.966453 | 0.001233 | 0.001469 | 0.001438 |
| has_post_decrement_test.test | RUN | 0.234588 | 1.239093 | 1.911255 | 0.001400 | 0.001364 | 0.001404 |
| has_plus_test.test | RUN | 0.237264 | 0.957576 | 1.891542 | 0.001278 | 0.001529 | 0.001386 |
| has_plus_assign_test.test | RUN | 0.246233 | 0.966311 | 1.953664 | 0.001338 | 0.001466 | 0.001322 |
| has_operator_new_test.test | RUN | 0.163429 | 0.505087 | 0.856763 | 0.000963 | 0.001450 | 0.001305 |
| has_nothrow_destructor_test.test | RUN | 0.168276 | 0.559025 | 0.861855 | 0.001433 | 0.001477 | 0.001335 |
| has_nothrow_copy_test.test | RUN | 0.168886 | 0.546812 | 0.883113 | 0.001254 | 0.001469 | 0.001340 |
| has_nothrow_constr_test.test | RUN | 0.161244 | 0.533903 | 0.912084 | 0.001285 | 0.001416 | 0.001487 |
| has_nothrow_assign_test.test | RUN | 0.156589 | 0.527710 | 0.838483 | 0.001357 | 0.001398 | 0.001402 |
| has_not_equal_to_test.test | RUN | 0.236262 | 1.230390 | 1.947734 | 0.001256 | 0.001464 | 0.001362 |
| has_negate_test.test | RUN | 0.230377 | 0.932151 | 1.868359 | 0.001278 | 0.001434 | 0.001375 |
| has_multiplies_test.test | RUN | 0.236491 | 0.971851 | 1.863437 | 0.001171 | 0.001468 | 0.001311 |
| has_multiplies_assign_test.test | RUN | 0.240682 | 0.978460 | 1.873119 | 0.001423 | 0.001424 | 0.001278 |
| has_modulus_test.test | RUN | 0.237875 | 0.991525 | 1.888443 | 0.001362 | 0.001298 | 0.001423 |
| has_modulus_assign_test.test | RUN | 0.236081 | 0.977277 | 1.949300 | 0.001282 | 0.001288 | 0.001318 |
| has_minus_test.test | RUN | 0.240045 | 0.993153 | 1.944018 | 0.001138 | 0.001411 | 0.001374 |
| has_minus_assign_test.test | RUN | 0.243079 | 0.972394 | 1.929030 | 0.001337 | 0.001478 | 0.001408 |
| has_logical_or_test.test | RUN | 0.230405 | 0.994237 | 1.901856 | 0.001307 | 0.001371 | 0.001410 |
| has_logical_not_test.test | RUN | 0.226315 | 0.958380 | 1.878638 | 0.001283 | 0.001427 | 0.001337 |
| has_logical_and_test.test | RUN | 0.232335 | 0.982818 | 1.883795 | 0.001234 | 0.001472 | 0.001385 |
| has_less_test.test | RUN | 0.237149 | 1.211639 | 1.903149 | 0.001560 | 0.001577 | 0.001436 |
| has_less_equal_test.test | RUN | 0.240424 | 1.224586 | 1.909238 | 0.001396 | 0.001410 | 0.001398 |
| has_left_shift_test.test | RUN | 0.263672 | 1.235817 | 2.435095 | 0.001218 | 0.001457 | 0.001149 |
| has_left_shift_assign_test.test | RUN | 0.234925 | 0.961121 | 1.924414 | 0.001283 | 0.001556 | 0.001225 |
| has_greater_test.test | RUN | 0.241019 | 1.232205 | 1.869244 | 0.001327 | 0.001434 | 0.001319 |
| has_greater_equal_test.test | RUN | 0.237045 | 1.257507 | 1.889747 | 0.001306 | 0.001512 | 0.001333 |
| has_equal_to_test.test | RUN | 0.233334 | 1.257791 | 1.903418 | 0.001255 | 0.001516 | 0.001393 |
| has_divides_test.test | RUN | 0.231130 | 0.958279 | 1.945542 | 0.001288 | 0.001420 | 0.001014 |
| has_divides_assign_test.test | RUN | 0.238804 | 0.965703 | 1.938450 | 0.001530 | 0.001436 | 0.001304 |
| has_dereference_test.test | RUN | 0.233675 | 0.960094 | 1.791751 | 0.001275 | 0.001615 | 0.001423 |
| has_complement_test.test | RUN | 0.233217 | 1.227318 | 1.973117 | 0.001216 | 0.001485 | 0.001235 |
| has_bit_xor_test.test | RUN | 0.241091 | 0.964807 | 1.972435 | 0.001259 | 0.001554 | 0.001301 |
| has_bit_xor_assign_test.test | RUN | 0.240070 | 0.957164 | 1.886607 | 0.001314 | 0.001477 | 0.001218 |
| has_bit_or_test.test | RUN | 0.239662 | 0.978847 | 1.889864 | 0.001347 | 0.001488 | 0.001405 |
| has_bit_or_assign_test.test | RUN | 0.234379 | 0.981939 | 1.877580 | 0.001252 | 0.001403 | 0.001305 |
| has_bit_and_test.test | RUN | 0.237253 | 0.970175 | 1.938230 | 0.001269 | 0.001429 | 0.001209 |
| has_bit_and_assign_test.test | RUN | 0.237810 | 0.966306 | 1.924384 | 0.001341 | 0.001494 | 0.001153 |
| has_binary_classes9_test.test | RUN | 0.255313 | 1.174390 | 2.131586 | 0.001561 | 0.001430 | 0.001490 |
| has_binary_classes8_test.test | RUN | 0.258551 | 1.156510 | 2.109852 | 0.000864 | 0.001610 | 0.001303 |
| has_binary_classes7_test.test | RUN | 0.260874 | 1.144594 | 2.179028 | 0.001250 | 0.001467 | 0.001251 |
| has_binary_classes6_test.test | RUN | 0.252954 | 1.122454 | 2.179044 | 0.001370 | 0.001337 | 0.000969 |
| has_binary_classes5_test.test | RUN | 0.264817 | 1.150810 | 2.147985 | 0.001293 | 0.001515 | 0.001242 |
| has_binary_classes4_test.test | RUN | 0.254342 | 1.167898 | 2.102032 | 0.001264 | 0.001452 | 0.001313 |
| has_binary_classes3_test.test | RUN | 0.260338 | 1.178886 | 2.178117 | 0.001280 | 0.001482 | 0.001352 |
| has_binary_classes2_test.test | RUN | 0.258763 | 1.169886 | 2.174761 | 0.001398 | 0.001513 | 0.001232 |
| has_binary_classes1_test.test | RUN | 0.255291 | 1.142886 | 2.065623 | 0.001390 | 0.001518 | 0.001328 |
| has_binary_classes0_test.test | RUN | 0.257739 | 1.172175 | 2.123139 | 0.001238 | 0.001273 | 0.001434 |
| function_traits_test.test | RUN | 0.112836 | 0.322821 | 0.446363 | 0.001388 | 0.001454 | 0.001307 |
| floating_point_promotion_test.test | RUN | 0.114704 | 0.310734 | 0.405849 | 0.001347 | 0.001456 | 0.001353 |
| extent_test.test | RUN | 0.114525 | 0.309212 | 0.413490 | 0.001174 | 0.001335 | 0.001279 |
| enable_if_test.test | RUN | 0.104885 | 0.260909 | 0.345430 | 0.001388 | 0.001484 | 0.001366 |
| disjunction_test.test | RUN | 0.110033 | 0.272984 | 0.367004 | 0.001216 | 0.001527 | 0.001402 |
| detected_test.test | RUN | 0.107511 | 0.260212 | 0.328900 | 0.001263 | 0.001406 | 0.001212 |
| detected_or_test.test | RUN | 0.108881 | 0.281341 | 0.349015 | 0.001299 | 0.001391 | 0.001261 |
| decay_test.test | RUN | 0.287041 | 1.081679 | 2.129921 | 0.001299 | 0.001517 | 0.001259 |
| cxx14_aliases_test.test | RUN | 0.175868 | 0.408688 | 0.592246 | 0.001374 | 0.001426 | 0.001311 |
| copy_reference_test.test | RUN | 0.109384 | 0.281503 | 0.350854 | 0.001316 | 0.001466 | 0.001336 |
| copy_cv_test.test | RUN | 0.111727 | 0.290313 | 0.385829 | 0.001221 | 0.001321 | 0.001425 |
| copy_cv_ref_test.test | RUN | 0.156656 | 0.479110 | 0.848016 | 0.001402 | 0.001364 | 0.001284 |
| conjunction_test.test | RUN | 0.107216 | 0.277548 | 0.368220 | 0.001324 | 0.001630 | 0.001468 |
| conditional_test.test | RUN | 0.109078 | 0.271539 | 0.354579 | 0.001248 | 0.001408 | 0.001279 |
| common_type_test.test | RUN | 0.144949 | 0.423384 | 0.725993 | 0.001288 | 0.001301 | 0.001318 |
| common_type_sfinae_test.test | RUN | 0.106934 | 0.262984 | 0.325810 | 0.001256 | 0.001405 | 0.001262 |
| common_type_sfinae2_test.test | RUN | 0.108114 | 0.269601 | 0.368912 | 0.001222 | 0.001199 | 0.001337 |
| common_type_6_test.test | RUN | 0.116498 | 0.279575 | 0.366958 | 0.001261 | 0.001408 | 0.001288 |
| common_type_5_test.test | RUN | 0.112872 | 0.275281 | 0.360346 | 0.001297 | 0.001403 | 0.001375 |
| common_type_4_test.test | RUN | 0.123335 | 0.298826 | 0.443167 | 0.001374 | 0.001413 | 0.001238 |
| common_type_3_test.test | RUN | 0.107741 | 0.256912 | 0.329341 | 0.001432 | 0.001266 | 0.001189 |
| common_type_2_test.test | RUN | 0.149209 | 0.411470 | 0.676113 | 0.001301 | 0.001536 | 0.001337 |
| alignment_of_test.test | RUN | 0.119076 | 0.329877 | 0.457328 | 0.001276 | 0.001489 | 0.001379 |
| alignment_of_a2_test.test | RUN | 0.121331 | 0.330479 | 0.447926 | 0.001463 | 0.001468 | 0.001364 |
| aligned_storage_test.test | RUN | 0.125132 | 0.319607 | 0.414613 | 0.001237 | 0.001483 | 0.001478 |
| aligned_storage_empy_test.test | RUN | 0.142135 | 0.357907 | 0.540754 | 0.001278 | 0.001529 | 0.001365 |
| aligned_storage_a2_test.test | RUN | 0.122199 | 0.324452 | 0.413363 | 0.001400 | 0.001538 | 0.001475 |
| add_volatile_test.test | RUN | 0.258015 | 0.949931 | 1.983559 | 0.001480 | 0.001390 | 0.001322 |
| add_rvalue_reference_test.test | RUN | 0.289935 | 1.078465 | 2.264782 | 0.000988 | 0.001440 | 0.001333 |
| add_reference_test.test | RUN | 0.289840 | 1.053810 | 2.264962 | 0.001275 | 0.001442 | 0.001377 |
| add_pointer_test.test | RUN | 0.178871 | 0.608445 | 1.185040 | 0.001388 | 0.001442 | 0.001696 |
| add_lvalue_reference_test.test | RUN | 0.288510 | 1.060300 | 2.286101 | 0.001452 | 0.001275 | 0.001188 |
| add_cv_test.test | RUN | 0.277244 | 1.010356 | 2.124246 | 0.001238 | 0.001407 | 0.001361 |
| add_const_test.test | RUN | 0.273804 | 1.006225 | 2.067926 | 0.001248 | 0.001327 | 0.001262 |
| is_virtual_base_of_fail.test | COMPILE_FAIL | 0.102369 | 0.258805 | 0.328004 | — | — | — |
| is_stateless_fail.test | COMPILE_FAIL | 0.110874 | 0.266855 | 0.344313 | — | — | — |
| is_polymorphic_fail.test | COMPILE_FAIL | 0.103051 | 0.242640 | 0.324581 | — | — | — |
| is_nothrow_move_constructible_fail.test | COMPILE_FAIL | 0.105154 | 0.246193 | 0.319155 | — | — | — |
| is_nothrow_move_assignable_fail.test | COMPILE_FAIL | 0.104945 | 0.252897 | 0.318588 | — | — | — |
| is_list_constructible_fail.test | COMPILE_FAIL | 0.104151 | 0.247736 | 0.312951 | — | — | — |
| is_empty_fail.test | COMPILE_FAIL | 0.101295 | 0.248504 | 0.319483 | — | — | — |
| is_destructible_fail.test | COMPILE_FAIL | 0.102653 | 0.248043 | 0.318625 | — | — | — |
| is_default_constructible_fail.test | COMPILE_FAIL | 0.101823 | 0.249917 | 0.320646 | — | — | — |
| is_copy_constructible_fail.test | COMPILE_FAIL | 0.101804 | 0.252790 | 0.323208 | — | — | — |
| is_copy_assignable_fail.test | COMPILE_FAIL | 0.105900 | 0.252224 | 0.317406 | — | — | — |
| is_convertible_fail.test | COMPILE_FAIL | 0.108375 | 0.255755 | 0.319461 | — | — | — |
| is_convertible2_fail.test | COMPILE_FAIL | 0.111652 | 0.257151 | 0.319901 | — | — | — |
| is_constructible_fail.test | COMPILE_FAIL | 0.110995 | 0.256024 | 0.321941 | — | — | — |
| is_base_of_fail.test | COMPILE_FAIL | 0.103375 | 0.254490 | 0.319915 | — | — | — |
| is_assignable_fail.test | COMPILE_FAIL | 0.102201 | 0.247548 | 0.321049 | — | — | — |
| has_nothrow_destruct_fail.test | COMPILE_FAIL | 0.104318 | 0.251603 | 0.325042 | — | — | — |
| has_nothrow_copy_fail.test | COMPILE_FAIL | 0.107239 | 0.252925 | 0.330131 | — | — | — |
| has_nothrow_cons_fail.test | COMPILE_FAIL | 0.102906 | 0.251153 | 0.318394 | — | — | — |
| has_nothrow_assign_fail.test | COMPILE_FAIL | 0.103783 | 0.248466 | 0.315299 | — | — | — |
| common_type_fail.test | COMPILE_FAIL | 0.102967 | 0.251027 | 0.320313 | — | — | — |
| common_type2_fail.test | COMPILE_FAIL | 0.104518 | 0.253332 | 0.321185 | — | — | — |
| has_nothrow_assign_test_no_intrinsics.test | RUN | 0.158671 | 0.541672 | 0.911310 | 0.001362 | 0.001450 | 0.001408 |
| has_nothrow_constr_test_no_intrinsics.test | RUN | 0.153173 | 0.531284 | 0.896487 | 0.001124 | 0.001534 | 0.001419 |
| has_nothrow_copy_test_no_intrinsics.test | RUN | 0.156853 | 0.541476 | 0.916472 | 0.001094 | 0.001097 | 0.000993 |
| is_nothrow_move_assignable_test_no_intrinsics.test | RUN | 0.156256 | 0.537277 | 0.901224 | 0.000949 | 0.001072 | 0.001000 |
| is_nothrow_move_constructible_test_no_intrinsics.test | RUN | 0.092044 | 0.385264 | 0.514494 | 0.000952 | 0.001029 | 0.000982 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 1.000× | 1.013×, 0.986× | 1.009× |
| clang | 1.067× | 1.055×, 1.078× | 0.998× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1360 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43654890423).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| add_const_test.test | 10 | 0.000971s | 0.000985s | 0.000946s | byte equality observed |
| add_cv_test.test | 10 | 0.000955s | 0.000963s | 0.000955s | byte equality observed |
| add_lvalue_reference_test.test | 10 | 0.000960s | 0.000971s | 0.000944s | byte equality observed |
| add_pointer_test.test | 10 | 0.000973s | 0.000930s | 0.000950s | byte equality observed |
| add_reference_test.test | 10 | 0.000974s | 0.000968s | 0.000943s | byte equality observed |
| add_rvalue_reference_test.test | 10 | 0.000954s | 0.000930s | 0.000923s | byte equality observed |
| add_volatile_test.test | 10 | 0.000964s | 0.000936s | 0.000955s | byte equality observed |
| aligned_storage_a2_test.test | 10 | 0.001013s | 0.001042s | 0.001032s | byte equality observed |
| aligned_storage_empy_test.test | 10 | 0.000940s | 0.000982s | 0.000975s | byte equality observed |
| aligned_storage_test.test | 10 | 0.001026s | 0.001035s | 0.001051s | byte equality observed |
| alignment_of_a2_test.test | 10 | 0.000943s | 0.001008s | 0.000971s | byte equality observed |
| alignment_of_test.test | 10 | 0.000945s | 0.000932s | 0.000962s | byte equality observed |
| common_type_2_test.test | 10 | 0.000978s | 0.000979s | 0.001002s | byte equality observed |
| common_type_3_test.test | 10 | 0.000957s | 0.000972s | 0.000960s | byte equality observed |
| common_type_4_test.test | 10 | 0.000942s | 0.000958s | 0.000959s | byte equality observed |
| common_type_5_test.test | 10 | 0.000960s | 0.000955s | 0.000942s | byte equality observed |
| common_type_6_test.test | 10 | 0.000951s | 0.000978s | 0.001005s | byte equality observed |
| common_type_sfinae2_test.test | 10 | 0.000937s | 0.000971s | 0.000982s | byte equality observed |
| common_type_sfinae_test.test | 10 | 0.000962s | 0.000962s | 0.000953s | byte equality observed |
| common_type_test.test | 10 | 0.000955s | 0.000963s | 0.000973s | byte equality observed |
| conditional_test.test | 10 | 0.000984s | 0.000973s | 0.000959s | byte equality observed |
| conjunction_test.test | 10 | 0.000942s | 0.000962s | 0.000940s | byte equality observed |
| copy_cv_ref_test.test | 10 | 0.000978s | 0.000982s | 0.000959s | byte equality observed |
| copy_cv_test.test | 10 | 0.000958s | 0.000985s | 0.000975s | byte equality observed |
| copy_reference_test.test | 10 | 0.000960s | 0.000968s | 0.000993s | byte equality observed |
| cxx14_aliases_test.test | 10 | 0.000942s | 0.000988s | 0.000933s | byte equality observed |
| decay_test.test | 10 | 0.000949s | 0.000971s | 0.000989s | byte equality observed |
| detected_or_test.test | 10 | 0.000964s | 0.000980s | 0.000975s | byte equality observed |
| detected_test.test | 10 | 0.000929s | 0.000999s | 0.000946s | byte equality observed |
| disjunction_test.test | 10 | 0.000924s | 0.000950s | 0.000957s | byte equality observed |
| enable_if_test.test | 10 | 0.000954s | 0.000961s | 0.001004s | byte equality observed |
| extent_test.test | 10 | 0.000931s | 0.000937s | 0.000981s | byte equality observed |
| floating_point_promotion_test.test | 10 | 0.000926s | 0.000948s | 0.000969s | byte equality observed |
| function_traits_test.test | 10 | 0.000957s | 0.000960s | 0.000961s | byte equality observed |
| has_binary_classes0_test.test | 10 | 0.000957s | 0.000934s | 0.000949s | byte equality observed |
| has_binary_classes1_test.test | 10 | 0.000940s | 0.000930s | 0.000988s | byte equality observed |
| has_binary_classes2_test.test | 10 | 0.000944s | 0.000965s | 0.000975s | byte equality observed |
| has_binary_classes3_test.test | 10 | 0.000950s | 0.000992s | 0.000959s | byte equality observed |
| has_binary_classes4_test.test | 10 | 0.000966s | 0.000964s | 0.000965s | byte equality observed |
| has_binary_classes5_test.test | 10 | 0.000940s | 0.000970s | 0.000980s | byte equality observed |
| has_binary_classes6_test.test | 10 | 0.000945s | 0.000983s | 0.000963s | byte equality observed |
| has_binary_classes7_test.test | 10 | 0.000955s | 0.000957s | 0.000954s | byte equality observed |
| has_binary_classes8_test.test | 10 | 0.000948s | 0.000979s | 0.000983s | byte equality observed |
| has_binary_classes9_test.test | 10 | 0.000945s | 0.000971s | 0.000969s | byte equality observed |
| has_bit_and_assign_test.test | 10 | 0.000937s | 0.000959s | 0.000942s | byte equality observed |
| has_bit_and_test.test | 10 | 0.000949s | 0.000942s | 0.000950s | byte equality observed |
| has_bit_or_assign_test.test | 10 | 0.000973s | 0.000983s | 0.000997s | byte equality observed |
| has_bit_or_test.test | 10 | 0.000951s | 0.000956s | 0.000978s | byte equality observed |
| has_bit_xor_assign_test.test | 10 | 0.000986s | 0.000960s | 0.000952s | byte equality observed |
| has_bit_xor_test.test | 10 | 0.000933s | 0.000937s | 0.001045s | byte equality observed |
| has_complement_test.test | 10 | 0.000931s | 0.000965s | 0.001007s | byte equality observed |
| has_dereference_test.test | 10 | 0.000955s | 0.000965s | 0.001004s | byte equality observed |
| has_divides_assign_test.test | 10 | 0.000976s | 0.000966s | 0.001039s | byte equality observed |
| has_divides_test.test | 10 | 0.000958s | 0.000988s | 0.001030s | byte equality observed |
| has_equal_to_test.test | 10 | 0.000949s | 0.000950s | 0.001011s | byte equality observed |
| has_greater_equal_test.test | 10 | 0.000992s | 0.000950s | 0.001069s | byte equality observed |
| has_greater_test.test | 10 | 0.000975s | 0.000944s | 0.001086s | byte equality observed |
| has_left_shift_assign_test.test | 10 | 0.000949s | 0.000947s | 0.001052s | byte equality observed |
| has_left_shift_test.test | 10 | 0.000970s | 0.000937s | 0.001085s | byte equality observed |
| has_less_equal_test.test | 10 | 0.000938s | 0.000952s | 0.001051s | byte equality observed |
| has_less_test.test | 10 | 0.000927s | 0.001005s | 0.001097s | byte equality observed |
| has_logical_and_test.test | 10 | 0.000925s | 0.000920s | 0.001073s | byte equality observed |
| has_logical_not_test.test | 10 | 0.000990s | 0.000951s | 0.001092s | byte equality observed |
| has_logical_or_test.test | 10 | 0.000963s | 0.000949s | 0.001093s | byte equality observed |
| has_minus_assign_test.test | 10 | 0.000984s | 0.000969s | 0.001135s | byte equality observed |
| has_minus_test.test | 10 | 0.000963s | 0.000944s | 0.001082s | byte equality observed |
| has_modulus_assign_test.test | 10 | 0.000977s | 0.000966s | 0.001090s | byte equality observed |
| has_modulus_test.test | 10 | 0.000934s | 0.000952s | 0.001077s | byte equality observed |
| has_multiplies_assign_test.test | 10 | 0.000964s | 0.000944s | 0.001125s | byte equality observed |
| has_multiplies_test.test | 10 | 0.000967s | 0.000964s | 0.001085s | byte equality observed |
| has_negate_test.test | 10 | 0.000971s | 0.001008s | 0.001085s | byte equality observed |
| has_not_equal_to_test.test | 10 | 0.000925s | 0.000969s | 0.001099s | byte equality observed |
| has_nothrow_assign_test.test | 10 | 0.000991s | 0.000968s | 0.001090s | byte equality observed |
| has_nothrow_assign_test_no_intrinsics.test | 10 | 0.000976s | 0.000987s | 0.001091s | byte equality observed |
| has_nothrow_constr_test.test | 10 | 0.000955s | 0.000971s | 0.001101s | byte equality observed |
| has_nothrow_constr_test_no_intrinsics.test | 10 | 0.000948s | 0.000994s | 0.001095s | byte equality observed |
| has_nothrow_copy_test.test | 10 | 0.000966s | 0.001007s | 0.001095s | byte equality observed |
| has_nothrow_copy_test_no_intrinsics.test | 10 | 0.000986s | 0.001015s | 0.001107s | byte equality observed |
| has_nothrow_destructor_test.test | 10 | 0.001013s | 0.001059s | 0.001080s | byte equality observed |
| has_operator_new_test.test | 10 | 0.001009s | 0.000990s | 0.001090s | byte equality observed |
| has_plus_assign_test.test | 10 | 0.000991s | 0.000957s | 0.001110s | byte equality observed |
| has_plus_test.test | 10 | 0.000986s | 0.000969s | 0.001087s | byte equality observed |
| has_post_decrement_test.test | 10 | 0.001017s | 0.000992s | 0.001098s | byte equality observed |
| has_post_increment_test.test | 10 | 0.001012s | 0.001008s | 0.001071s | byte equality observed |
| has_postfix_classes0_test.test | 10 | 0.001007s | 0.001053s | 0.001092s | byte equality observed |
| has_postfix_classes1_test.test | 10 | 0.001044s | 0.000996s | 0.001115s | byte equality observed |
| has_postfix_classes2_test.test | 10 | 0.001056s | 0.000978s | 0.001136s | byte equality observed |
| has_postfix_classes3_test.test | 10 | 0.001114s | 0.000959s | 0.001136s | byte equality observed |
| has_pre_decrement_test.test | 10 | 0.001069s | 0.000956s | 0.001114s | byte equality observed |
| has_pre_increment_test.test | 10 | 0.001107s | 0.001046s | 0.001096s | byte equality observed |
| has_prefix_classes0_test.test | 10 | 0.001075s | 0.001088s | 0.001123s | byte equality observed |
| has_prefix_classes1_test.test | 10 | 0.001098s | 0.001100s | 0.001064s | byte equality observed |
| has_prefix_classes2_test.test | 10 | 0.001106s | 0.001063s | 0.001089s | byte equality observed |
| has_prefix_classes3_test.test | 10 | 0.001089s | 0.001084s | 0.001114s | byte equality observed |
| has_right_shift_assign_test.test | 10 | 0.001099s | 0.001086s | 0.001105s | byte equality observed |
| has_right_shift_test.test | 10 | 0.001097s | 0.001074s | 0.001109s | byte equality observed |
| has_trivial_assign_test.test | 10 | 0.001134s | 0.001136s | 0.001153s | byte equality observed |
| has_trivial_constr_test.test | 10 | 0.001117s | 0.001145s | 0.001157s | native test oracle; output varies |
| has_trivial_copy_test.test | 10 | 0.001139s | 0.001163s | 0.001158s | native test oracle; output varies |
| has_trivial_destructor_test.test | 10 | 0.001035s | 0.001112s | 0.001113s | byte equality observed |
| has_trivial_move_assign_test.test | 10 | 0.001104s | 0.001071s | 0.001095s | byte equality observed |
| has_trivial_move_constructor_test.test | 10 | 0.001082s | 0.001107s | 0.001112s | byte equality observed |
| has_unary_minus_test.test | 10 | 0.001086s | 0.001125s | 0.001132s | byte equality observed |
| has_unary_plus_test.test | 10 | 0.001090s | 0.001113s | 0.001124s | byte equality observed |
| has_virtual_destructor_test.test | 10 | 0.001117s | 0.001146s | 0.001124s | byte equality observed |
| integral_constant_test.test | 10 | 0.000474s | 0.000484s | 0.001110s | byte equality observed |
| is_abstract_test.test | 10 | 0.001123s | 0.001138s | 0.001130s | byte equality observed |
| is_arithmetic_test.test | 10 | 0.001106s | 0.001119s | 0.001119s | byte equality observed |
| is_array_test.test | 10 | 0.001118s | 0.001131s | 0.001119s | byte equality observed |
| is_assignable_test.test | 10 | 0.001102s | 0.001116s | 0.001130s | byte equality observed |
| is_base_and_derived_test.test | 10 | 0.001102s | 0.001098s | 0.001120s | byte equality observed |
| is_base_of_test.test | 10 | 0.001090s | 0.001093s | 0.001112s | byte equality observed |
| is_bounded_array_test.test | 10 | 0.001101s | 0.001106s | 0.001110s | byte equality observed |
| is_class_test.test | 10 | 0.001111s | 0.001119s | 0.001095s | byte equality observed |
| is_complete_test.test | 10 | 0.001084s | 0.001118s | 0.001104s | byte equality observed |
| is_complex_test.test | 10 | 0.001097s | 0.001116s | 0.001112s | byte equality observed |
| is_compound_test.test | 10 | 0.001106s | 0.001141s | 0.001105s | byte equality observed |
| is_const_test.test | 10 | 0.001105s | 0.001119s | 0.001112s | byte equality observed |
| is_constructible_test.test | 10 | 0.001095s | 0.001158s | 0.001153s | byte equality observed |
| is_convertible_test.test | 10 | 0.001111s | 0.001119s | 0.001100s | byte equality observed |
| is_copy_assignable_test.test | 10 | 0.001112s | 0.001128s | 0.001147s | byte equality observed |
| is_copy_constructible_test.test | 10 | 0.001114s | 0.001108s | 0.001132s | byte equality observed |
| is_default_constr_test.test | 10 | 0.001118s | 0.001135s | 0.001150s | byte equality observed |
| is_destructible_test.test | 10 | 0.001109s | 0.001134s | 0.001141s | byte equality observed |
| is_detected_exact_test.test | 10 | 0.001109s | 0.001137s | 0.001099s | byte equality observed |
| is_detected_test.test | 10 | 0.001118s | 0.001155s | 0.001131s | byte equality observed |
| is_empty_test.test | 10 | 0.001116s | 0.001157s | 0.001069s | byte equality observed |
| is_enum_test.test | 10 | 0.001112s | 0.001138s | 0.001114s | byte equality observed |
| is_final_test.test | 10 | 0.001099s | 0.001140s | 0.001118s | byte equality observed |
| is_float_test.test | 10 | 0.001110s | 0.001144s | 0.001113s | byte equality observed |
| is_floating_point_test.test | 10 | 0.001098s | 0.001131s | 0.001118s | byte equality observed |
| is_function_test.test | 10 | 0.001116s | 0.001125s | 0.001127s | byte equality observed |
| is_fundamental_test.test | 10 | 0.001114s | 0.001140s | 0.001131s | byte equality observed |
| is_integral_test.test | 10 | 0.001108s | 0.001148s | 0.001113s | byte equality observed |
| is_list_constructible_test.test | 10 | 0.001104s | 0.001140s | 0.001118s | byte equality observed |
| is_lvalue_reference_test.test | 10 | 0.001103s | 0.001140s | 0.001108s | byte equality observed |
| is_member_func_test.test | 10 | 0.001103s | 0.001136s | 0.001088s | byte equality observed |
| is_member_obj_test.test | 10 | 0.001099s | 0.001129s | 0.001119s | byte equality observed |
| is_member_pointer_test.test | 10 | 0.001114s | 0.001139s | 0.001112s | byte equality observed |
| is_noncopyable_test.test | 10 | 0.001112s | 0.001118s | 0.001136s | byte equality observed |
| is_nothrow_move_assignable_test.test | 10 | 0.001120s | 0.001143s | 0.001138s | byte equality observed |
| is_nothrow_move_assignable_test_no_intrinsics.test | 10 | 0.001131s | 0.001129s | 0.001123s | byte equality observed |
| is_nothrow_move_constructible_test.test | 10 | 0.001128s | 0.001145s | 0.001122s | byte equality observed |
| is_nothrow_move_constructible_test_no_intrinsics.test | 10 | 0.001135s | 0.001119s | 0.001111s | byte equality observed |
| is_nothrow_swappable_test.test | 10 | 0.001151s | 0.001154s | 0.001126s | byte equality observed |
| is_object_test.test | 10 | 0.001104s | 0.001175s | 0.001095s | byte equality observed |
| is_pod_test.test | 10 | 0.001125s | 0.001130s | 0.001127s | byte equality observed |
| is_pointer_test.test | 10 | 0.001117s | 0.001141s | 0.001130s | byte equality observed |
| is_polymorphic_test.test | 10 | 0.001118s | 0.001138s | 0.001105s | byte equality observed |
| is_reference_test.test | 10 | 0.001121s | 0.001144s | 0.001121s | byte equality observed |
| is_rvalue_reference_test.test | 10 | 0.001101s | 0.001144s | 0.001120s | byte equality observed |
| is_same_test.test | 10 | 0.001104s | 0.001145s | 0.001140s | byte equality observed |
| is_scalar_test.test | 10 | 0.001102s | 0.001133s | 0.001158s | byte equality observed |
| is_scoped_enum_test.test | 10 | 0.001115s | 0.001137s | 0.001128s | byte equality observed |
| is_signed_test.test | 10 | 0.001120s | 0.001104s | 0.001125s | byte equality observed |
| is_stateless_test.test | 10 | 0.001126s | 0.001121s | 0.001108s | byte equality observed |
| is_swappable_test.test | 10 | 0.001132s | 0.001147s | 0.001122s | byte equality observed |
| is_trivially_copyable_test.test | 10 | 0.001146s | 0.001177s | 0.001145s | byte equality observed |
| is_unbounded_array_test.test | 10 | 0.001122s | 0.001144s | 0.001116s | byte equality observed |
| is_union_test.test | 10 | 0.001122s | 0.001100s | 0.001099s | byte equality observed |
| is_unscoped_enum_test.test | 10 | 0.001116s | 0.001115s | 0.001113s | byte equality observed |
| is_unsigned_test.test | 10 | 0.001112s | 0.001108s | 0.001088s | byte equality observed |
| is_virtual_base_of_test.test | 10 | 0.001123s | 0.001105s | 0.001132s | byte equality observed |
| is_void_test.test | 10 | 0.001121s | 0.001109s | 0.001100s | byte equality observed |
| is_volatile_test.test | 10 | 0.001106s | 0.001111s | 0.001095s | byte equality observed |
| make_signed_test.test | 10 | 0.001110s | 0.001118s | 0.001121s | byte equality observed |
| make_unsigned_test.test | 10 | 0.001104s | 0.001132s | 0.001122s | byte equality observed |
| make_void_test.test | 10 | 0.001103s | 0.001130s | 0.001139s | byte equality observed |
| mpl_interop_test1.test | 10 | 0.000484s | 0.000493s | 0.001120s | byte equality observed |
| mpl_interop_test2.test | 10 | 0.000472s | 0.000484s | 0.001132s | byte equality observed |
| mpl_interop_test3.test | 10 | 0.000470s | 0.000485s | 0.001134s | byte equality observed |
| negation_test.test | 10 | 0.001110s | 0.001116s | 0.001128s | byte equality observed |
| promote_basic_test.test | 10 | 0.000479s | 0.000476s | 0.001156s | byte equality observed |
| promote_enum_msvc_bug_test.test | 10 | 0.000477s | 0.000471s | 0.001104s | byte equality observed |
| promote_enum_test.test | 10 | 0.000483s | 0.000469s | 0.001095s | byte equality observed |
| promote_mpl_test.test | 10 | 0.000478s | 0.000482s | 0.001111s | byte equality observed |
| rank_test.test | 10 | 0.001117s | 0.001130s | 0.001129s | byte equality observed |
| remove_all_extents_test.test | 10 | 0.001125s | 0.001151s | 0.001125s | byte equality observed |
| remove_bounds_test.test | 10 | 0.001120s | 0.001146s | 0.001141s | byte equality observed |
| remove_const_test.test | 10 | 0.001122s | 0.001147s | 0.001118s | byte equality observed |
| remove_cv_ref_test.test | 10 | 0.001101s | 0.001141s | 0.001130s | byte equality observed |
| remove_cv_test.test | 10 | 0.001107s | 0.001140s | 0.001130s | byte equality observed |
| remove_extent_test.test | 10 | 0.001133s | 0.001127s | 0.001124s | byte equality observed |
| remove_pointer_test.test | 10 | 0.001111s | 0.001119s | 0.001134s | byte equality observed |
| remove_reference_test.test | 10 | 0.001128s | 0.001127s | 0.001121s | byte equality observed |
| remove_volatile_test.test | 10 | 0.001108s | 0.001142s | 0.001114s | byte equality observed |
| tricky_abstract_type_test.test | 10 | 0.001116s | 0.001111s | 0.001105s | byte equality observed |
| tricky_add_pointer_test.test | 10 | 0.001129s | 0.001123s | 0.001118s | byte equality observed |
| tricky_function_type_test.test | 10 | 0.001127s | 0.001123s | 0.001132s | byte equality observed |
| tricky_incomplete_type_test.test | 10 | 0.001119s | 0.001113s | 0.001093s | byte equality observed |
| tricky_is_enum_test.test | 10 | 0.001120s | 0.001142s | 0.001111s | byte equality observed |
| tricky_partial_spec_test.test | 10 | 0.001106s | 0.001129s | 0.001110s | byte equality observed |
| tricky_rvalue_test.test | 10 | 0.001129s | 0.001149s | 0.001126s | byte equality observed |
| type_identity_test.test | 10 | 0.001123s | 0.001147s | 0.001122s | byte equality observed |
| type_traits_test.test | 10 | 0.000480s | 0.000488s | 0.001078s | byte equality observed |
| type_with_alignment_test.test | 10 | 0.001213s | 0.001210s | 0.001198s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43654890423).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
