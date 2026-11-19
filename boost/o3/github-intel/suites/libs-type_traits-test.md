# libs/type_traits/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| type_with_alignment_test.test | RUN | 0.095385 | 0.271448 | 0.371709 | 0.001202 | 0.001404 | 0.001282 |
| type_traits_test.test | RUN | 0.134560 | 0.289456 | 0.374473 | 0.000469 | 0.000507 | 0.001155 |
| type_identity_test.test | RUN | 0.252313 | 0.989972 | 1.959675 | 0.001157 | 0.001326 | 0.001226 |
| tricky_rvalue_test.test | RUN | 0.087380 | 0.217260 | 0.293098 | 0.001291 | 0.001435 | 0.001111 |
| tricky_partial_spec_test.test | RUN | 0.106710 | 0.315468 | 0.462513 | 0.001176 | 0.001242 | 0.001092 |
| tricky_is_enum_test.test | RUN | 0.083517 | 0.211261 | 0.268304 | 0.001241 | 0.001457 | 0.001197 |
| tricky_incomplete_type_test.test | RUN | 0.137273 | 0.324889 | 0.457937 | 0.001267 | 0.001229 | 0.001136 |
| tricky_function_type_test.test | RUN | 0.114703 | 0.339919 | 0.526004 | 0.001182 | 0.001204 | 0.001138 |
| tricky_add_pointer_test.test | RUN | 0.163029 | 0.583056 | 1.131137 | 0.001332 | 0.001356 | 0.001334 |
| tricky_abstract_type_test.test | RUN | 0.086110 | 0.215933 | 0.285350 | 0.001464 | 0.001359 | 0.001201 |
| remove_volatile_test.test | RUN | 0.229526 | 0.845270 | 1.738182 | 0.000921 | 0.001487 | 0.001144 |
| remove_reference_test.test | RUN | 0.234037 | 0.892463 | 1.838167 | 0.001348 | 0.001414 | 0.001213 |
| remove_pointer_test.test | RUN | 0.244763 | 0.936087 | 1.928141 | 0.001313 | 0.001280 | 0.001267 |
| remove_extent_test.test | RUN | 0.235960 | 0.885145 | 1.836227 | 0.001196 | 0.001490 | 0.001125 |
| remove_cv_test.test | RUN | 0.231774 | 0.899948 | 1.891929 | 0.001338 | 0.001460 | 0.001298 |
| remove_cv_ref_test.test | RUN | 0.486128 | 2.249793 | 4.448430 | 0.001153 | 0.001307 | 0.001128 |
| remove_const_test.test | RUN | 0.225136 | 0.845908 | 1.807515 | 0.001423 | 0.001510 | 0.001217 |
| remove_bounds_test.test | RUN | 0.235948 | 0.922720 | 1.861403 | 0.001354 | 0.001363 | 0.001200 |
| remove_all_extents_test.test | RUN | 0.236009 | 0.914557 | 1.747744 | 0.001158 | 0.001418 | 0.001103 |
| rank_test.test | RUN | 0.089890 | 0.230923 | 0.303980 | 0.001219 | 0.001507 | 0.001230 |
| promote_mpl_test.test | RUN | 0.079529 | 0.189885 | 0.219508 | 0.000476 | 0.000526 | 0.001157 |
| promote_enum_test.test | RUN | 0.016747 | 0.049383 | 0.053455 | 0.000472 | 0.000497 | 0.001181 |
| promote_enum_msvc_bug_test.test | RUN | 0.016377 | 0.040701 | 0.045406 | 0.000528 | 0.000538 | 0.001210 |
| promote_basic_test.test | RUN | 0.019083 | 0.053918 | 0.054492 | 0.000504 | 0.000488 | 0.001056 |
| negation_test.test | RUN | 0.081207 | 0.205641 | 0.269842 | 0.001208 | 0.001208 | 0.001049 |
| mpl_interop_test3.test | RUN | 0.074185 | 0.199409 | 0.194931 | 0.000494 | 0.000461 | 0.001065 |
| mpl_interop_test2.test | RUN | 0.026024 | 0.054281 | 0.055457 | 0.000539 | 0.000471 | 0.001151 |
| mpl_interop_test1.test | RUN | 0.013787 | 0.034511 | 0.038447 | 0.000500 | 0.000561 | 0.001191 |
| make_void_test.test | RUN | 0.088135 | 0.225387 | 0.288963 | 0.001470 | 0.001363 | 0.001221 |
| make_unsigned_test.test | RUN | 0.103088 | 0.291860 | 0.406748 | 0.001406 | 0.001099 | 0.001097 |
| make_signed_test.test | RUN | 0.102541 | 0.294722 | 0.406873 | 0.001272 | 0.001183 | 0.001118 |
| is_volatile_test.test | RUN | 0.090330 | 0.248281 | 0.341314 | 0.001134 | 0.001308 | 0.001170 |
| is_void_test.test | RUN | 0.088259 | 0.235770 | 0.316282 | 0.001318 | 0.001341 | 0.001243 |
| is_virtual_base_of_test.test | RUN | 0.101724 | 0.293821 | 0.424168 | 0.001187 | 0.001269 | 0.001065 |
| is_unsigned_test.test | RUN | 0.087690 | 0.240013 | 0.325516 | 0.001153 | 0.001284 | 0.001169 |
| is_unscoped_enum_test.test | RUN | 0.085667 | 0.220878 | 0.274837 | 0.001117 | 0.001243 | 0.001133 |
| is_union_test.test | RUN | 0.095498 | 0.272018 | 0.390679 | 0.001182 | 0.001426 | 0.001269 |
| is_unbounded_array_test.test | RUN | 0.089828 | 0.234958 | 0.310373 | 0.001218 | 0.001299 | 0.001149 |
| is_trivially_copyable_test.test | RUN | 0.142083 | 0.487342 | 0.773710 | 0.001141 | 0.001376 | 0.001060 |
| is_swappable_test.test | RUN | 0.118163 | 0.370647 | 0.575148 | 0.001155 | 0.001452 | 0.001194 |
| is_stateless_test.test | RUN | 0.133556 | 0.425274 | 0.661181 | 0.001157 | 0.001449 | 0.001313 |
| is_signed_test.test | RUN | 0.091886 | 0.246275 | 0.325610 | 0.001566 | 0.001268 | 0.001110 |
| is_scoped_enum_test.test | RUN | 0.088406 | 0.219608 | 0.280560 | 0.001315 | 0.001362 | 0.001210 |
| is_scalar_test.test | RUN | 0.118551 | 0.384474 | 0.589392 | 0.001102 | 0.001262 | 0.001117 |
| is_same_test.test | RUN | 0.087746 | 0.228772 | 0.316810 | 0.001393 | 0.001448 | 0.001114 |
| is_rvalue_reference_test.test | RUN | 0.092058 | 0.257629 | 0.364810 | 0.001174 | 0.001495 | 0.001096 |
| is_reference_test.test | RUN | 0.093367 | 0.262247 | 0.364836 | 0.001166 | 0.001299 | 0.001093 |
| is_polymorphic_test.test | RUN | 0.098063 | 0.271979 | 0.367970 | 0.001053 | 0.001322 | 0.001256 |
| is_pointer_test.test | RUN | 0.091973 | 0.265062 | 0.363556 | 0.001259 | 0.001341 | 0.001267 |
| is_pod_test.test | RUN | 0.120482 | 0.430925 | 0.679632 | 0.001352 | 0.001510 | 0.001369 |
| is_object_test.test | RUN | 0.085670 | 0.225441 | 0.295052 | 0.001152 | 0.001435 | 0.001215 |
| is_nothrow_swappable_test.test | RUN | 0.123578 | 0.407035 | 0.635293 | 0.001084 | 0.001118 | 0.001206 |
| is_nothrow_move_constructible_test.test | RUN | 0.120428 | 0.423096 | 0.640867 | 0.001373 | 0.001367 | 0.001196 |
| is_nothrow_move_assignable_test.test | RUN | 0.122414 | 0.422303 | 0.654531 | 0.001094 | 0.001335 | 0.001256 |
| is_noncopyable_test.test | RUN | 0.087078 | 0.229167 | 0.305812 | 0.001257 | 0.001267 | 0.001280 |
| is_member_pointer_test.test | RUN | 0.091022 | 0.232878 | 0.297488 | 0.001064 | 0.001294 | 0.001227 |
| is_member_obj_test.test | RUN | 0.088877 | 0.235654 | 0.314765 | 0.001215 | 0.001465 | 0.001108 |
| is_member_func_test.test | RUN | 0.089574 | 0.252457 | 0.332590 | 0.001143 | 0.001468 | 0.001268 |
| is_lvalue_reference_test.test | RUN | 0.092028 | 0.262421 | 0.367696 | 0.001136 | 0.001364 | 0.001174 |
| is_list_constructible_test.test | RUN | 0.106371 | 0.309953 | 0.403560 | 0.001155 | 0.001498 | 0.001261 |
| is_integral_test.test | RUN | 0.110607 | 0.356354 | 0.544582 | 0.001288 | 0.001283 | 0.001096 |
| is_fundamental_test.test | RUN | 0.111229 | 0.376366 | 0.586157 | 0.001248 | 0.001425 | 0.001208 |
| is_function_test.test | RUN | 0.090658 | 0.252638 | 0.334461 | 0.001125 | 0.001480 | 0.001258 |
| is_floating_point_test.test | RUN | 0.093519 | 0.264736 | 0.376693 | 0.000999 | 0.001609 | 0.001180 |
| is_float_test.test | RUN | 0.092329 | 0.262660 | 0.371384 | 0.001307 | 0.001352 | 0.001146 |
| is_final_test.test | RUN | 0.094155 | 0.267666 | 0.375308 | 0.001162 | 0.001282 | 0.001148 |
| is_enum_test.test | RUN | 0.085202 | 0.227673 | 0.297121 | 0.001092 | 0.001293 | 0.001074 |
| is_empty_test.test | RUN | 0.090383 | 0.243628 | 0.340477 | 0.001168 | 0.001277 | 0.001186 |
| is_detected_test.test | RUN | 0.083821 | 0.212977 | 0.267921 | 0.001226 | 0.001231 | 0.001292 |
| is_detected_exact_test.test | RUN | 0.082656 | 0.213187 | 0.269283 | 0.001292 | 0.001396 | 0.001203 |
| is_destructible_test.test | RUN | 0.117746 | 0.409085 | 0.627211 | 0.001269 | 0.001424 | 0.001273 |
| is_default_constr_test.test | RUN | 0.122206 | 0.427619 | 0.657892 | 0.001137 | 0.001435 | 0.001175 |
| is_copy_constructible_test.test | RUN | 0.127320 | 0.441547 | 0.701291 | 0.001284 | 0.001250 | 0.001265 |
| is_copy_assignable_test.test | RUN | 0.125970 | 0.446745 | 0.692397 | 0.001487 | 0.001550 | 0.001236 |
| is_convertible_test.test | RUN | 0.120796 | 0.383930 | 0.562574 | 0.001092 | 0.001416 | 0.001289 |
| is_constructible_test.test | RUN | 0.098621 | 0.284624 | 0.400633 | 0.001200 | 0.001029 | 0.001266 |
| is_const_test.test | RUN | 0.089037 | 0.246613 | 0.334529 | 0.001359 | 0.001228 | 0.001166 |
| is_compound_test.test | RUN | 0.084172 | 0.217414 | 0.269309 | 0.001323 | 0.001350 | 0.001099 |
| is_complex_test.test | RUN | 0.114115 | 0.283343 | 0.384638 | 0.001002 | 0.001550 | 0.001220 |
| is_complete_test.test | RUN | 0.097780 | 0.295123 | 0.428523 | 0.001087 | 0.001325 | 0.001120 |
| is_class_test.test | RUN | 0.092802 | 0.256156 | 0.357729 | 0.001416 | 0.001455 | 0.001106 |
| is_bounded_array_test.test | RUN | 0.087807 | 0.236191 | 0.306093 | 0.001366 | 0.001216 | 0.001216 |
| is_base_of_test.test | RUN | 0.093900 | 0.251958 | 0.357269 | 0.001205 | 0.001432 | 0.001170 |
| is_base_and_derived_test.test | RUN | 0.092771 | 0.252436 | 0.343106 | 0.001039 | 0.001620 | 0.001107 |
| is_assignable_test.test | RUN | 0.111350 | 0.354853 | 0.544472 | 0.001419 | 0.001279 | 0.001292 |
| is_array_test.test | RUN | 0.090529 | 0.246812 | 0.347164 | 0.001152 | 0.001170 | 0.001199 |
| is_arithmetic_test.test | RUN | 0.112215 | 0.361687 | 0.548996 | 0.001260 | 0.001392 | 0.001266 |
| is_abstract_test.test | RUN | 0.200527 | 0.981365 | 2.075580 | 0.001262 | 0.001340 | 0.001024 |
| integral_constant_test.test | RUN | 0.013401 | 0.038392 | 0.041209 | 0.000409 | 0.000655 | 0.001198 |
| has_virtual_destructor_test.test | RUN | 0.095828 | 0.282941 | 0.391218 | 0.001234 | 0.001339 | 0.001186 |
| has_unary_plus_test.test | RUN | 0.185204 | 0.997157 | 1.537541 | 0.001182 | 0.001508 | 0.001183 |
| has_unary_minus_test.test | RUN | 0.172192 | 1.008053 | 1.434032 | 0.001288 | 0.001389 | 0.001100 |
| has_trivial_move_constructor_test.test | RUN | 0.123917 | 0.434121 | 0.698628 | 0.000889 | 0.001305 | 0.001228 |
| has_trivial_move_assign_test.test | RUN | 0.126364 | 0.417178 | 0.665814 | 0.001156 | 0.001442 | 0.001214 |
| has_trivial_destructor_test.test | RUN | 0.124433 | 0.425409 | 0.690927 | 0.001226 | 0.001302 | 0.001190 |
| has_trivial_copy_test.test | RUN | 0.125478 | 0.448901 | 0.699890 | 0.001346 | 0.001490 | 0.001186 |
| has_trivial_constr_test.test | RUN | 0.129704 | 0.456871 | 0.703361 | 0.001158 | 0.001561 | 0.001167 |
| has_trivial_assign_test.test | RUN | 0.127604 | 0.443742 | 0.709004 | 0.001165 | 0.001369 | 0.001357 |
| has_right_shift_test.test | RUN | 0.191617 | 0.832112 | 1.563378 | 0.001252 | 0.001365 | 0.001140 |
| has_right_shift_assign_test.test | RUN | 0.180353 | 0.783630 | 1.460198 | 0.001152 | 0.001385 | 0.001131 |
| has_prefix_classes3_test.test | RUN | 0.133515 | 0.464725 | 0.749438 | 0.001245 | 0.001373 | 0.001187 |
| has_prefix_classes2_test.test | RUN | 0.135067 | 0.460386 | 0.763111 | 0.001114 | 0.001475 | 0.001361 |
| has_prefix_classes1_test.test | RUN | 0.134461 | 0.462974 | 0.706050 | 0.001071 | 0.001449 | 0.001182 |
| has_prefix_classes0_test.test | RUN | 0.132169 | 0.470080 | 0.730274 | 0.001139 | 0.001252 | 0.001312 |
| has_pre_increment_test.test | RUN | 0.183214 | 1.010131 | 1.471296 | 0.001089 | 0.001180 | 0.001152 |
| has_pre_decrement_test.test | RUN | 0.187353 | 1.003168 | 1.433078 | 0.001147 | 0.001185 | 0.001145 |
| has_postfix_classes3_test.test | RUN | 0.135357 | 0.456773 | 0.783547 | 0.001251 | 0.001410 | 0.001227 |
| has_postfix_classes2_test.test | RUN | 0.137018 | 0.455135 | 0.735230 | 0.001186 | 0.001251 | 0.001284 |
| has_postfix_classes1_test.test | RUN | 0.137431 | 0.458035 | 0.727970 | 0.001104 | 0.001375 | 0.001234 |
| has_postfix_classes0_test.test | RUN | 0.135262 | 0.460370 | 0.766700 | 0.000908 | 0.001289 | 0.001320 |
| has_post_increment_test.test | RUN | 0.183802 | 1.004103 | 1.466739 | 0.001285 | 0.001158 | 0.001147 |
| has_post_decrement_test.test | RUN | 0.185431 | 0.991629 | 1.478740 | 0.001171 | 0.001363 | 0.001068 |
| has_plus_test.test | RUN | 0.184305 | 0.765754 | 1.477819 | 0.000974 | 0.001343 | 0.001286 |
| has_plus_assign_test.test | RUN | 0.194239 | 0.768062 | 1.450685 | 0.001230 | 0.001223 | 0.001235 |
| has_operator_new_test.test | RUN | 0.124181 | 0.400178 | 0.622064 | 0.001225 | 0.001540 | 0.001121 |
| has_nothrow_destructor_test.test | RUN | 0.126355 | 0.444758 | 0.698316 | 0.001267 | 0.001230 | 0.001039 |
| has_nothrow_copy_test.test | RUN | 0.124205 | 0.423016 | 0.677510 | 0.001003 | 0.001313 | 0.001271 |
| has_nothrow_constr_test.test | RUN | 0.121458 | 0.418390 | 0.653340 | 0.001180 | 0.000952 | 0.001270 |
| has_nothrow_assign_test.test | RUN | 0.119823 | 0.417160 | 0.667291 | 0.001273 | 0.001384 | 0.001264 |
| has_not_equal_to_test.test | RUN | 0.181268 | 0.972331 | 1.462515 | 0.001254 | 0.001269 | 0.001155 |
| has_negate_test.test | RUN | 0.173359 | 0.753061 | 1.423521 | 0.001203 | 0.001437 | 0.001349 |
| has_multiplies_test.test | RUN | 0.187048 | 0.782786 | 1.462550 | 0.001291 | 0.001277 | 0.001258 |
| has_multiplies_assign_test.test | RUN | 0.186595 | 0.754084 | 1.408571 | 0.001260 | 0.001552 | 0.001167 |
| has_modulus_test.test | RUN | 0.184159 | 0.764324 | 1.431370 | 0.001320 | 0.000959 | 0.001168 |
| has_modulus_assign_test.test | RUN | 0.183063 | 0.767217 | 1.475578 | 0.001147 | 0.001313 | 0.001201 |
| has_minus_test.test | RUN | 0.187360 | 0.799398 | 1.430274 | 0.001225 | 0.001460 | 0.001213 |
| has_minus_assign_test.test | RUN | 0.191156 | 0.781209 | 1.486132 | 0.001204 | 0.001366 | 0.001208 |
| has_logical_or_test.test | RUN | 0.183200 | 0.795384 | 1.438467 | 0.001316 | 0.001270 | 0.001186 |
| has_logical_not_test.test | RUN | 0.178559 | 0.754870 | 1.428893 | 0.001213 | 0.001425 | 0.001406 |
| has_logical_and_test.test | RUN | 0.187505 | 0.796512 | 1.431823 | 0.001272 | 0.001335 | 0.001125 |
| has_less_test.test | RUN | 0.189167 | 0.999986 | 1.465687 | 0.001243 | 0.001558 | 0.001280 |
| has_less_equal_test.test | RUN | 0.186392 | 0.999473 | 1.450012 | 0.001202 | 0.001182 | 0.001199 |
| has_left_shift_test.test | RUN | 0.203791 | 0.984154 | 1.852676 | 0.001115 | 0.001320 | 0.001180 |
| has_left_shift_assign_test.test | RUN | 0.188455 | 0.787399 | 1.415140 | 0.001183 | 0.001177 | 0.001198 |
| has_greater_test.test | RUN | 0.188422 | 0.987459 | 1.493506 | 0.001243 | 0.001616 | 0.001081 |
| has_greater_equal_test.test | RUN | 0.184351 | 1.008606 | 1.434498 | 0.001363 | 0.001297 | 0.001153 |
| has_equal_to_test.test | RUN | 0.184995 | 1.019321 | 1.430350 | 0.001178 | 0.001303 | 0.001188 |
| has_divides_test.test | RUN | 0.185641 | 0.792468 | 1.516272 | 0.001306 | 0.001634 | 0.001021 |
| has_divides_assign_test.test | RUN | 0.191081 | 0.790028 | 1.493384 | 0.001266 | 0.001566 | 0.000948 |
| has_dereference_test.test | RUN | 0.181428 | 0.776029 | 1.362352 | 0.001366 | 0.001494 | 0.001258 |
| has_complement_test.test | RUN | 0.183583 | 1.027374 | 1.407002 | 0.001370 | 0.001313 | 0.001152 |
| has_bit_xor_test.test | RUN | 0.187134 | 0.797562 | 1.498304 | 0.001286 | 0.001565 | 0.001021 |
| has_bit_xor_assign_test.test | RUN | 0.191152 | 0.787721 | 1.503805 | 0.001464 | 0.001599 | 0.001132 |
| has_bit_or_test.test | RUN | 0.184368 | 0.781621 | 1.413801 | 0.001192 | 0.001498 | 0.001211 |
| has_bit_or_assign_test.test | RUN | 0.187799 | 0.809999 | 1.413112 | 0.001262 | 0.001590 | 0.001234 |
| has_bit_and_test.test | RUN | 0.186882 | 0.796504 | 1.491795 | 0.001309 | 0.001574 | 0.001216 |
| has_bit_and_assign_test.test | RUN | 0.188916 | 0.802750 | 1.492229 | 0.001453 | 0.001615 | 0.000827 |
| has_binary_classes9_test.test | RUN | 0.200908 | 0.951379 | 1.635151 | 0.001201 | 0.001536 | 0.001211 |
| has_binary_classes8_test.test | RUN | 0.204776 | 0.988236 | 1.619765 | 0.001232 | 0.001578 | 0.001134 |
| has_binary_classes7_test.test | RUN | 0.204354 | 0.954908 | 1.761399 | 0.001194 | 0.001665 | 0.001021 |
| has_binary_classes6_test.test | RUN | 0.199779 | 0.936512 | 1.757259 | 0.001334 | 0.001570 | 0.000850 |
| has_binary_classes5_test.test | RUN | 0.198480 | 0.942948 | 1.621537 | 0.001166 | 0.001677 | 0.001196 |
| has_binary_classes4_test.test | RUN | 0.202814 | 0.961018 | 1.627712 | 0.001198 | 0.001498 | 0.001192 |
| has_binary_classes3_test.test | RUN | 0.205639 | 0.969403 | 1.685192 | 0.001157 | 0.001379 | 0.001110 |
| has_binary_classes2_test.test | RUN | 0.200372 | 0.947865 | 1.685610 | 0.001310 | 0.001433 | 0.001184 |
| has_binary_classes1_test.test | RUN | 0.200596 | 0.931709 | 1.626555 | 0.001363 | 0.001332 | 0.001133 |
| has_binary_classes0_test.test | RUN | 0.201317 | 0.954295 | 1.613218 | 0.001178 | 0.001178 | 0.001050 |
| function_traits_test.test | RUN | 0.093326 | 0.244141 | 0.341597 | 0.001090 | 0.001420 | 0.001008 |
| floating_point_promotion_test.test | RUN | 0.076227 | 0.241723 | 0.317697 | 0.001527 | 0.001276 | 0.001169 |
| extent_test.test | RUN | 0.072444 | 0.239795 | 0.326991 | 0.001189 | 0.001317 | 0.001235 |
| enable_if_test.test | RUN | 0.088464 | 0.206289 | 0.264896 | 0.001386 | 0.001112 | 0.001178 |
| disjunction_test.test | RUN | 0.088853 | 0.216679 | 0.276961 | 0.001231 | 0.001372 | 0.000953 |
| detected_test.test | RUN | 0.086326 | 0.200939 | 0.265121 | 0.001176 | 0.001376 | 0.000988 |
| detected_or_test.test | RUN | 0.088516 | 0.217527 | 0.285813 | 0.001140 | 0.001150 | 0.001042 |
| decay_test.test | RUN | 0.223717 | 0.820499 | 1.585697 | 0.001101 | 0.001248 | 0.001115 |
| cxx14_aliases_test.test | RUN | 0.135488 | 0.318786 | 0.446630 | 0.001304 | 0.001310 | 0.001110 |
| copy_reference_test.test | RUN | 0.089226 | 0.210607 | 0.283192 | 0.001159 | 0.001164 | 0.001125 |
| copy_cv_test.test | RUN | 0.090737 | 0.223770 | 0.305351 | 0.001314 | 0.001264 | 0.001023 |
| copy_cv_ref_test.test | RUN | 0.127617 | 0.374312 | 0.667275 | 0.001307 | 0.001337 | 0.001246 |
| conjunction_test.test | RUN | 0.086666 | 0.216592 | 0.279793 | 0.001316 | 0.001416 | 0.001238 |
| conditional_test.test | RUN | 0.088579 | 0.212593 | 0.271316 | 0.001102 | 0.001352 | 0.001246 |
| common_type_test.test | RUN | 0.117751 | 0.331814 | 0.524850 | 0.001224 | 0.001120 | 0.001203 |
| common_type_sfinae_test.test | RUN | 0.083295 | 0.205838 | 0.265747 | 0.001499 | 0.001211 | 0.001063 |
| common_type_sfinae2_test.test | RUN | 0.088279 | 0.210885 | 0.276843 | 0.001282 | 0.001183 | 0.001269 |
| common_type_6_test.test | RUN | 0.091006 | 0.213407 | 0.286962 | 0.001163 | 0.001226 | 0.001134 |
| common_type_5_test.test | RUN | 0.090836 | 0.217240 | 0.284439 | 0.001214 | 0.001329 | 0.001274 |
| common_type_4_test.test | RUN | 0.095846 | 0.236526 | 0.337059 | 0.001280 | 0.001370 | 0.001023 |
| common_type_3_test.test | RUN | 0.083831 | 0.201807 | 0.252621 | 0.001291 | 0.001127 | 0.001218 |
| common_type_2_test.test | RUN | 0.114701 | 0.323473 | 0.515654 | 0.001480 | 0.001364 | 0.001196 |
| alignment_of_test.test | RUN | 0.096504 | 0.258746 | 0.336605 | 0.001149 | 0.001422 | 0.001207 |
| alignment_of_a2_test.test | RUN | 0.094162 | 0.256549 | 0.339132 | 0.001346 | 0.001154 | 0.001102 |
| aligned_storage_test.test | RUN | 0.097567 | 0.256580 | 0.313791 | 0.001303 | 0.001422 | 0.001195 |
| aligned_storage_empy_test.test | RUN | 0.107573 | 0.285041 | 0.423937 | 0.001158 | 0.001340 | 0.001199 |
| aligned_storage_a2_test.test | RUN | 0.096009 | 0.254501 | 0.310115 | 0.001266 | 0.001516 | 0.001312 |
| add_volatile_test.test | RUN | 0.202006 | 0.744852 | 1.451245 | 0.001334 | 0.001460 | 0.001284 |
| add_rvalue_reference_test.test | RUN | 0.227998 | 0.838543 | 1.706964 | 0.001159 | 0.001725 | 0.001215 |
| add_reference_test.test | RUN | 0.218025 | 0.811414 | 1.665854 | 0.001216 | 0.001390 | 0.001252 |
| add_pointer_test.test | RUN | 0.141042 | 0.481698 | 0.888726 | 0.001223 | 0.001246 | 0.001204 |
| add_lvalue_reference_test.test | RUN | 0.220403 | 0.819491 | 1.713686 | 0.001522 | 0.001006 | 0.001278 |
| add_cv_test.test | RUN | 0.212544 | 0.779279 | 1.597676 | 0.001339 | 0.001249 | 0.001111 |
| add_const_test.test | RUN | 0.211708 | 0.793305 | 1.526639 | 0.001200 | 0.001254 | 0.001154 |
| is_virtual_base_of_fail.test | COMPILE_FAIL | 0.080522 | 0.203198 | 0.256174 | — | — | — |
| is_stateless_fail.test | COMPILE_FAIL | 0.088455 | 0.207922 | 0.266690 | — | — | — |
| is_polymorphic_fail.test | COMPILE_FAIL | 0.080667 | 0.197107 | 0.250044 | — | — | — |
| is_nothrow_move_constructible_fail.test | COMPILE_FAIL | 0.080129 | 0.199690 | 0.256619 | — | — | — |
| is_nothrow_move_assignable_fail.test | COMPILE_FAIL | 0.079312 | 0.199036 | 0.250399 | — | — | — |
| is_list_constructible_fail.test | COMPILE_FAIL | 0.079352 | 0.194698 | 0.242073 | — | — | — |
| is_empty_fail.test | COMPILE_FAIL | 0.081026 | 0.198754 | 0.244074 | — | — | — |
| is_destructible_fail.test | COMPILE_FAIL | 0.080095 | 0.195051 | 0.251552 | — | — | — |
| is_default_constructible_fail.test | COMPILE_FAIL | 0.081730 | 0.196342 | 0.248577 | — | — | — |
| is_copy_constructible_fail.test | COMPILE_FAIL | 0.081653 | 0.195126 | 0.250564 | — | — | — |
| is_copy_assignable_fail.test | COMPILE_FAIL | 0.081631 | 0.196281 | 0.246814 | — | — | — |
| is_convertible_fail.test | COMPILE_FAIL | 0.082360 | 0.194373 | 0.248707 | — | — | — |
| is_convertible2_fail.test | COMPILE_FAIL | 0.083078 | 0.195963 | 0.247438 | — | — | — |
| is_constructible_fail.test | COMPILE_FAIL | 0.080597 | 0.194676 | 0.247978 | — | — | — |
| is_base_of_fail.test | COMPILE_FAIL | 0.079283 | 0.195952 | 0.244429 | — | — | — |
| is_assignable_fail.test | COMPILE_FAIL | 0.079654 | 0.194667 | 0.247150 | — | — | — |
| has_nothrow_destruct_fail.test | COMPILE_FAIL | 0.080971 | 0.196947 | 0.249311 | — | — | — |
| has_nothrow_copy_fail.test | COMPILE_FAIL | 0.079900 | 0.197819 | 0.252283 | — | — | — |
| has_nothrow_cons_fail.test | COMPILE_FAIL | 0.080912 | 0.197987 | 0.248951 | — | — | — |
| has_nothrow_assign_fail.test | COMPILE_FAIL | 0.081420 | 0.194945 | 0.252292 | — | — | — |
| common_type_fail.test | COMPILE_FAIL | 0.082388 | 0.196183 | 0.256317 | — | — | — |
| common_type2_fail.test | COMPILE_FAIL | 0.082454 | 0.195744 | 0.256287 | — | — | — |
| has_nothrow_assign_test_no_intrinsics.test | RUN | 0.126711 | 0.421550 | 0.689977 | 0.001365 | 0.001372 | 0.001285 |
| has_nothrow_constr_test_no_intrinsics.test | RUN | 0.120401 | 0.423125 | 0.681306 | 0.001287 | 0.001128 | 0.001188 |
| has_nothrow_copy_test_no_intrinsics.test | RUN | 0.123941 | 0.435695 | 0.665581 | 0.001336 | 0.001245 | 0.001112 |
| is_nothrow_move_assignable_test_no_intrinsics.test | RUN | 0.123897 | 0.432032 | 0.674473 | 0.000901 | 0.000915 | 0.001131 |
| is_nothrow_move_constructible_test_no_intrinsics.test | RUN | 0.080044 | 0.306679 | 0.449273 | 0.000998 | 0.000989 | 0.000907 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 1.002× | 1.000×, 1.004× | 1.003× |
| clang | 1.030× | 1.031×, 1.029× | 0.995× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1363 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44560957980).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| add_const_test.test | 10 | 0.000791s | 0.000782s | 0.000788s | byte equality observed |
| add_cv_test.test | 10 | 0.000812s | 0.000767s | 0.000780s | byte equality observed |
| add_lvalue_reference_test.test | 10 | 0.000773s | 0.000791s | 0.000807s | byte equality observed |
| add_pointer_test.test | 10 | 0.000783s | 0.000762s | 0.000816s | byte equality observed |
| add_reference_test.test | 10 | 0.000798s | 0.000777s | 0.000801s | byte equality observed |
| add_rvalue_reference_test.test | 10 | 0.000788s | 0.000758s | 0.000793s | byte equality observed |
| add_volatile_test.test | 10 | 0.000788s | 0.000773s | 0.000780s | byte equality observed |
| aligned_storage_a2_test.test | 10 | 0.000824s | 0.000812s | 0.000835s | byte equality observed |
| aligned_storage_empy_test.test | 10 | 0.000810s | 0.000799s | 0.000816s | byte equality observed |
| aligned_storage_test.test | 10 | 0.000837s | 0.000840s | 0.000843s | byte equality observed |
| alignment_of_a2_test.test | 10 | 0.000796s | 0.000808s | 0.000767s | byte equality observed |
| alignment_of_test.test | 10 | 0.000766s | 0.000780s | 0.000778s | byte equality observed |
| common_type_2_test.test | 10 | 0.000787s | 0.000756s | 0.000784s | byte equality observed |
| common_type_3_test.test | 10 | 0.000798s | 0.000768s | 0.000786s | byte equality observed |
| common_type_4_test.test | 10 | 0.000778s | 0.000788s | 0.000745s | byte equality observed |
| common_type_5_test.test | 10 | 0.000778s | 0.000794s | 0.000777s | byte equality observed |
| common_type_6_test.test | 10 | 0.000770s | 0.000798s | 0.000808s | byte equality observed |
| common_type_sfinae2_test.test | 10 | 0.000796s | 0.000797s | 0.000789s | byte equality observed |
| common_type_sfinae_test.test | 10 | 0.000756s | 0.000753s | 0.000819s | byte equality observed |
| common_type_test.test | 10 | 0.000777s | 0.000784s | 0.000824s | byte equality observed |
| conditional_test.test | 10 | 0.000786s | 0.000776s | 0.000816s | byte equality observed |
| conjunction_test.test | 10 | 0.000801s | 0.000800s | 0.000778s | byte equality observed |
| copy_cv_ref_test.test | 10 | 0.000772s | 0.000790s | 0.000783s | byte equality observed |
| copy_cv_test.test | 10 | 0.000786s | 0.000809s | 0.000796s | byte equality observed |
| copy_reference_test.test | 10 | 0.000788s | 0.000804s | 0.000792s | byte equality observed |
| cxx14_aliases_test.test | 10 | 0.000790s | 0.000786s | 0.000784s | byte equality observed |
| decay_test.test | 10 | 0.000784s | 0.000770s | 0.000770s | byte equality observed |
| detected_or_test.test | 10 | 0.000782s | 0.000787s | 0.000783s | byte equality observed |
| detected_test.test | 10 | 0.000788s | 0.000757s | 0.000799s | byte equality observed |
| disjunction_test.test | 10 | 0.000795s | 0.000774s | 0.000816s | byte equality observed |
| enable_if_test.test | 10 | 0.000794s | 0.000783s | 0.000826s | byte equality observed |
| extent_test.test | 10 | 0.000791s | 0.000770s | 0.000823s | byte equality observed |
| floating_point_promotion_test.test | 10 | 0.000773s | 0.000779s | 0.000801s | byte equality observed |
| function_traits_test.test | 10 | 0.000782s | 0.000799s | 0.000780s | byte equality observed |
| has_binary_classes0_test.test | 10 | 0.000785s | 0.000776s | 0.000801s | byte equality observed |
| has_binary_classes1_test.test | 10 | 0.000792s | 0.000777s | 0.000776s | byte equality observed |
| has_binary_classes2_test.test | 10 | 0.000785s | 0.000788s | 0.000806s | byte equality observed |
| has_binary_classes3_test.test | 10 | 0.000768s | 0.000803s | 0.000806s | byte equality observed |
| has_binary_classes4_test.test | 10 | 0.000799s | 0.000809s | 0.000806s | byte equality observed |
| has_binary_classes5_test.test | 10 | 0.000783s | 0.000790s | 0.000810s | byte equality observed |
| has_binary_classes6_test.test | 10 | 0.000803s | 0.000804s | 0.000811s | byte equality observed |
| has_binary_classes7_test.test | 10 | 0.000784s | 0.000818s | 0.000813s | byte equality observed |
| has_binary_classes8_test.test | 10 | 0.000790s | 0.000773s | 0.000768s | byte equality observed |
| has_binary_classes9_test.test | 10 | 0.000794s | 0.000786s | 0.000790s | byte equality observed |
| has_bit_and_assign_test.test | 10 | 0.000779s | 0.000770s | 0.000800s | byte equality observed |
| has_bit_and_test.test | 10 | 0.000771s | 0.000794s | 0.000791s | byte equality observed |
| has_bit_or_assign_test.test | 10 | 0.000774s | 0.000773s | 0.000774s | byte equality observed |
| has_bit_or_test.test | 10 | 0.000760s | 0.000768s | 0.000805s | byte equality observed |
| has_bit_xor_assign_test.test | 10 | 0.000774s | 0.000777s | 0.000787s | byte equality observed |
| has_bit_xor_test.test | 10 | 0.000799s | 0.000793s | 0.000795s | byte equality observed |
| has_complement_test.test | 10 | 0.000800s | 0.000804s | 0.000790s | byte equality observed |
| has_dereference_test.test | 10 | 0.000793s | 0.000803s | 0.000795s | byte equality observed |
| has_divides_assign_test.test | 10 | 0.000804s | 0.000801s | 0.000785s | byte equality observed |
| has_divides_test.test | 10 | 0.000781s | 0.000803s | 0.000814s | byte equality observed |
| has_equal_to_test.test | 10 | 0.000785s | 0.000820s | 0.000748s | byte equality observed |
| has_greater_equal_test.test | 10 | 0.000791s | 0.000772s | 0.000789s | byte equality observed |
| has_greater_test.test | 10 | 0.000783s | 0.000788s | 0.000771s | byte equality observed |
| has_left_shift_assign_test.test | 10 | 0.000770s | 0.000766s | 0.000769s | byte equality observed |
| has_left_shift_test.test | 10 | 0.000770s | 0.000801s | 0.000786s | byte equality observed |
| has_less_equal_test.test | 10 | 0.000770s | 0.000807s | 0.000770s | byte equality observed |
| has_less_test.test | 10 | 0.000761s | 0.000775s | 0.000765s | byte equality observed |
| has_logical_and_test.test | 10 | 0.000785s | 0.000795s | 0.000779s | byte equality observed |
| has_logical_not_test.test | 10 | 0.000802s | 0.000817s | 0.000766s | byte equality observed |
| has_logical_or_test.test | 10 | 0.000795s | 0.000809s | 0.000795s | byte equality observed |
| has_minus_assign_test.test | 10 | 0.000778s | 0.000813s | 0.000805s | byte equality observed |
| has_minus_test.test | 10 | 0.000791s | 0.000800s | 0.000789s | byte equality observed |
| has_modulus_assign_test.test | 10 | 0.000809s | 0.000799s | 0.000804s | byte equality observed |
| has_modulus_test.test | 10 | 0.000779s | 0.000779s | 0.000801s | byte equality observed |
| has_multiplies_assign_test.test | 10 | 0.000795s | 0.000804s | 0.000798s | byte equality observed |
| has_multiplies_test.test | 10 | 0.000787s | 0.000780s | 0.000777s | byte equality observed |
| has_negate_test.test | 10 | 0.000784s | 0.000801s | 0.000789s | byte equality observed |
| has_not_equal_to_test.test | 10 | 0.000779s | 0.000772s | 0.000778s | byte equality observed |
| has_nothrow_assign_test.test | 10 | 0.000783s | 0.000792s | 0.000799s | byte equality observed |
| has_nothrow_assign_test_no_intrinsics.test | 10 | 0.000783s | 0.000778s | 0.000790s | byte equality observed |
| has_nothrow_constr_test.test | 10 | 0.000774s | 0.000774s | 0.000799s | byte equality observed |
| has_nothrow_constr_test_no_intrinsics.test | 10 | 0.000774s | 0.000764s | 0.000793s | byte equality observed |
| has_nothrow_copy_test.test | 10 | 0.000776s | 0.000763s | 0.000793s | byte equality observed |
| has_nothrow_copy_test_no_intrinsics.test | 10 | 0.000781s | 0.000801s | 0.000793s | byte equality observed |
| has_nothrow_destructor_test.test | 10 | 0.000778s | 0.000779s | 0.000811s | byte equality observed |
| has_operator_new_test.test | 10 | 0.000772s | 0.000782s | 0.000802s | byte equality observed |
| has_plus_assign_test.test | 10 | 0.000785s | 0.000790s | 0.000813s | byte equality observed |
| has_plus_test.test | 10 | 0.000800s | 0.000800s | 0.000806s | byte equality observed |
| has_post_decrement_test.test | 10 | 0.000796s | 0.000823s | 0.000796s | byte equality observed |
| has_post_increment_test.test | 10 | 0.000778s | 0.000813s | 0.000788s | byte equality observed |
| has_postfix_classes0_test.test | 10 | 0.000795s | 0.000804s | 0.000804s | byte equality observed |
| has_postfix_classes1_test.test | 10 | 0.000770s | 0.000746s | 0.000826s | byte equality observed |
| has_postfix_classes2_test.test | 10 | 0.000801s | 0.000765s | 0.000796s | byte equality observed |
| has_postfix_classes3_test.test | 10 | 0.000802s | 0.000770s | 0.000790s | byte equality observed |
| has_pre_decrement_test.test | 10 | 0.000794s | 0.000782s | 0.000807s | byte equality observed |
| has_pre_increment_test.test | 10 | 0.000779s | 0.000803s | 0.000790s | byte equality observed |
| has_prefix_classes0_test.test | 10 | 0.000791s | 0.000794s | 0.000794s | byte equality observed |
| has_prefix_classes1_test.test | 10 | 0.000792s | 0.000811s | 0.000806s | byte equality observed |
| has_prefix_classes2_test.test | 10 | 0.000799s | 0.000790s | 0.000805s | byte equality observed |
| has_prefix_classes3_test.test | 10 | 0.000818s | 0.000790s | 0.000783s | byte equality observed |
| has_right_shift_assign_test.test | 10 | 0.000784s | 0.000796s | 0.000778s | byte equality observed |
| has_right_shift_test.test | 10 | 0.000765s | 0.000812s | 0.000769s | byte equality observed |
| has_trivial_assign_test.test | 10 | 0.000827s | 0.000820s | 0.000812s | byte equality observed |
| has_trivial_constr_test.test | 10 | 0.000825s | 0.000807s | 0.000807s | native test oracle; output varies |
| has_trivial_copy_test.test | 10 | 0.000838s | 0.000816s | 0.000838s | native test oracle; output varies |
| has_trivial_destructor_test.test | 10 | 0.000799s | 0.000774s | 0.000773s | byte equality observed |
| has_trivial_move_assign_test.test | 10 | 0.000800s | 0.000782s | 0.000780s | byte equality observed |
| has_trivial_move_constructor_test.test | 10 | 0.000781s | 0.000802s | 0.000790s | byte equality observed |
| has_unary_minus_test.test | 10 | 0.000777s | 0.000807s | 0.000799s | byte equality observed |
| has_unary_plus_test.test | 10 | 0.000795s | 0.000791s | 0.000794s | byte equality observed |
| has_virtual_destructor_test.test | 10 | 0.000796s | 0.000782s | 0.000765s | byte equality observed |
| integral_constant_test.test | 10 | 0.000364s | 0.000359s | 0.000806s | byte equality observed |
| is_abstract_test.test | 10 | 0.000781s | 0.000777s | 0.000815s | byte equality observed |
| is_arithmetic_test.test | 10 | 0.000781s | 0.000773s | 0.000777s | byte equality observed |
| is_array_test.test | 10 | 0.000793s | 0.000779s | 0.000801s | byte equality observed |
| is_assignable_test.test | 10 | 0.000800s | 0.000805s | 0.000792s | byte equality observed |
| is_base_and_derived_test.test | 10 | 0.000783s | 0.000795s | 0.000799s | byte equality observed |
| is_base_of_test.test | 10 | 0.000799s | 0.000795s | 0.000791s | byte equality observed |
| is_bounded_array_test.test | 10 | 0.000808s | 0.000786s | 0.000760s | byte equality observed |
| is_class_test.test | 10 | 0.000774s | 0.000763s | 0.000786s | byte equality observed |
| is_complete_test.test | 10 | 0.000783s | 0.000800s | 0.000770s | byte equality observed |
| is_complex_test.test | 10 | 0.000782s | 0.000776s | 0.000781s | byte equality observed |
| is_compound_test.test | 10 | 0.000771s | 0.000766s | 0.000784s | byte equality observed |
| is_const_test.test | 10 | 0.000778s | 0.000769s | 0.000788s | byte equality observed |
| is_constructible_test.test | 10 | 0.000790s | 0.000797s | 0.000798s | byte equality observed |
| is_convertible_test.test | 10 | 0.000772s | 0.000804s | 0.000791s | byte equality observed |
| is_copy_assignable_test.test | 10 | 0.000782s | 0.000809s | 0.000785s | byte equality observed |
| is_copy_constructible_test.test | 10 | 0.000800s | 0.000785s | 0.000784s | byte equality observed |
| is_default_constr_test.test | 10 | 0.000810s | 0.000786s | 0.000789s | byte equality observed |
| is_destructible_test.test | 10 | 0.000790s | 0.000788s | 0.000793s | byte equality observed |
| is_detected_exact_test.test | 10 | 0.000796s | 0.000765s | 0.000771s | byte equality observed |
| is_detected_test.test | 10 | 0.000780s | 0.000779s | 0.000788s | byte equality observed |
| is_empty_test.test | 10 | 0.000777s | 0.000797s | 0.000797s | byte equality observed |
| is_enum_test.test | 10 | 0.000773s | 0.000815s | 0.000795s | byte equality observed |
| is_final_test.test | 10 | 0.000793s | 0.000779s | 0.000800s | byte equality observed |
| is_float_test.test | 10 | 0.000796s | 0.000796s | 0.000799s | byte equality observed |
| is_floating_point_test.test | 10 | 0.000773s | 0.000788s | 0.000785s | byte equality observed |
| is_function_test.test | 10 | 0.000784s | 0.000778s | 0.000806s | byte equality observed |
| is_fundamental_test.test | 10 | 0.000792s | 0.000787s | 0.000820s | byte equality observed |
| is_integral_test.test | 10 | 0.000782s | 0.000770s | 0.000813s | byte equality observed |
| is_list_constructible_test.test | 10 | 0.000783s | 0.000795s | 0.000787s | byte equality observed |
| is_lvalue_reference_test.test | 10 | 0.000784s | 0.000776s | 0.000799s | byte equality observed |
| is_member_func_test.test | 10 | 0.000794s | 0.000779s | 0.000768s | byte equality observed |
| is_member_obj_test.test | 10 | 0.000783s | 0.000786s | 0.000764s | byte equality observed |
| is_member_pointer_test.test | 10 | 0.000795s | 0.000810s | 0.000766s | byte equality observed |
| is_noncopyable_test.test | 10 | 0.000793s | 0.000774s | 0.000786s | byte equality observed |
| is_nothrow_move_assignable_test.test | 10 | 0.000778s | 0.000784s | 0.000781s | byte equality observed |
| is_nothrow_move_assignable_test_no_intrinsics.test | 10 | 0.000790s | 0.000805s | 0.000754s | byte equality observed |
| is_nothrow_move_constructible_test.test | 10 | 0.000787s | 0.000796s | 0.000765s | byte equality observed |
| is_nothrow_move_constructible_test_no_intrinsics.test | 10 | 0.000797s | 0.000790s | 0.000774s | byte equality observed |
| is_nothrow_swappable_test.test | 10 | 0.000805s | 0.000807s | 0.000808s | byte equality observed |
| is_object_test.test | 10 | 0.000798s | 0.000810s | 0.000795s | byte equality observed |
| is_pod_test.test | 10 | 0.000802s | 0.000779s | 0.000793s | byte equality observed |
| is_pointer_test.test | 10 | 0.000815s | 0.000798s | 0.000776s | byte equality observed |
| is_polymorphic_test.test | 10 | 0.000794s | 0.000758s | 0.000771s | byte equality observed |
| is_reference_test.test | 10 | 0.000774s | 0.000787s | 0.000785s | byte equality observed |
| is_rvalue_reference_test.test | 10 | 0.000780s | 0.000795s | 0.000800s | byte equality observed |
| is_same_test.test | 10 | 0.000790s | 0.000812s | 0.000779s | byte equality observed |
| is_scalar_test.test | 10 | 0.000794s | 0.000768s | 0.000791s | byte equality observed |
| is_scoped_enum_test.test | 10 | 0.000786s | 0.000780s | 0.000796s | byte equality observed |
| is_signed_test.test | 10 | 0.000795s | 0.000820s | 0.000814s | byte equality observed |
| is_stateless_test.test | 10 | 0.000802s | 0.000820s | 0.000815s | byte equality observed |
| is_swappable_test.test | 10 | 0.000800s | 0.000797s | 0.000820s | byte equality observed |
| is_trivially_copyable_test.test | 10 | 0.000794s | 0.000806s | 0.000790s | byte equality observed |
| is_unbounded_array_test.test | 10 | 0.000767s | 0.000779s | 0.000770s | byte equality observed |
| is_union_test.test | 10 | 0.000775s | 0.000793s | 0.000763s | byte equality observed |
| is_unscoped_enum_test.test | 10 | 0.000777s | 0.000783s | 0.000789s | byte equality observed |
| is_unsigned_test.test | 10 | 0.000783s | 0.000776s | 0.000808s | byte equality observed |
| is_virtual_base_of_test.test | 10 | 0.000772s | 0.000777s | 0.000830s | byte equality observed |
| is_void_test.test | 10 | 0.000787s | 0.000778s | 0.000802s | byte equality observed |
| is_volatile_test.test | 10 | 0.000767s | 0.000786s | 0.000818s | byte equality observed |
| make_signed_test.test | 10 | 0.000789s | 0.000789s | 0.000805s | byte equality observed |
| make_unsigned_test.test | 10 | 0.000789s | 0.000784s | 0.000825s | byte equality observed |
| make_void_test.test | 10 | 0.000785s | 0.000797s | 0.000810s | byte equality observed |
| mpl_interop_test1.test | 10 | 0.000369s | 0.000367s | 0.000789s | byte equality observed |
| mpl_interop_test2.test | 10 | 0.000370s | 0.000355s | 0.000790s | byte equality observed |
| mpl_interop_test3.test | 10 | 0.000355s | 0.000356s | 0.000781s | byte equality observed |
| negation_test.test | 10 | 0.000781s | 0.000773s | 0.000768s | byte equality observed |
| promote_basic_test.test | 10 | 0.000360s | 0.000375s | 0.000785s | byte equality observed |
| promote_enum_msvc_bug_test.test | 10 | 0.000369s | 0.000363s | 0.000790s | byte equality observed |
| promote_enum_test.test | 10 | 0.000374s | 0.000363s | 0.000807s | byte equality observed |
| promote_mpl_test.test | 10 | 0.000362s | 0.000356s | 0.000794s | byte equality observed |
| rank_test.test | 10 | 0.000785s | 0.000791s | 0.000810s | byte equality observed |
| remove_all_extents_test.test | 10 | 0.000800s | 0.000790s | 0.000819s | byte equality observed |
| remove_bounds_test.test | 10 | 0.000778s | 0.000788s | 0.000798s | byte equality observed |
| remove_const_test.test | 10 | 0.000784s | 0.000783s | 0.000764s | byte equality observed |
| remove_cv_ref_test.test | 10 | 0.000769s | 0.000771s | 0.000770s | byte equality observed |
| remove_cv_test.test | 10 | 0.000801s | 0.000777s | 0.000769s | byte equality observed |
| remove_extent_test.test | 10 | 0.000814s | 0.000814s | 0.000795s | byte equality observed |
| remove_pointer_test.test | 10 | 0.000818s | 0.000808s | 0.000796s | byte equality observed |
| remove_reference_test.test | 10 | 0.000800s | 0.000778s | 0.000796s | byte equality observed |
| remove_volatile_test.test | 10 | 0.000792s | 0.000789s | 0.000758s | byte equality observed |
| tricky_abstract_type_test.test | 10 | 0.000786s | 0.000800s | 0.000799s | byte equality observed |
| tricky_add_pointer_test.test | 10 | 0.000787s | 0.000783s | 0.000800s | byte equality observed |
| tricky_function_type_test.test | 10 | 0.000802s | 0.000793s | 0.000808s | byte equality observed |
| tricky_incomplete_type_test.test | 10 | 0.000794s | 0.000785s | 0.000817s | byte equality observed |
| tricky_is_enum_test.test | 10 | 0.000775s | 0.000782s | 0.000807s | byte equality observed |
| tricky_partial_spec_test.test | 10 | 0.000788s | 0.000767s | 0.000808s | byte equality observed |
| tricky_rvalue_test.test | 10 | 0.000764s | 0.000805s | 0.000784s | byte equality observed |
| type_identity_test.test | 10 | 0.000789s | 0.000800s | 0.000795s | byte equality observed |
| type_traits_test.test | 10 | 0.000366s | 0.000351s | 0.000823s | byte equality observed |
| type_with_alignment_test.test | 10 | 0.000845s | 0.000849s | 0.000842s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44560957980).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
