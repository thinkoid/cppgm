# libs/type_traits/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| type_with_alignment_test.test | RUN | 0.094379 | 0.279053 | 0.382312 | 0.001264 | 0.001304 | 0.001107 |
| type_traits_test.test | RUN | 0.130100 | 0.281561 | 0.357950 | 0.000430 | 0.000483 | 0.001153 |
| type_identity_test.test | RUN | 0.248186 | 0.961864 | 1.953104 | 0.001250 | 0.001291 | 0.000955 |
| tricky_rvalue_test.test | RUN | 0.088984 | 0.218742 | 0.291604 | 0.001203 | 0.001243 | 0.001157 |
| tricky_partial_spec_test.test | RUN | 0.104552 | 0.312944 | 0.457616 | 0.001197 | 0.001260 | 0.001069 |
| tricky_is_enum_test.test | RUN | 0.085859 | 0.210139 | 0.264624 | 0.001243 | 0.001247 | 0.001211 |
| tricky_incomplete_type_test.test | RUN | 0.138431 | 0.318604 | 0.440766 | 0.000847 | 0.001247 | 0.001065 |
| tricky_function_type_test.test | RUN | 0.111125 | 0.335879 | 0.509788 | 0.001248 | 0.001264 | 0.001008 |
| tricky_add_pointer_test.test | RUN | 0.168502 | 0.568547 | 1.100782 | 0.001134 | 0.001308 | 0.001094 |
| tricky_abstract_type_test.test | RUN | 0.086867 | 0.215668 | 0.279923 | 0.001382 | 0.001224 | 0.001159 |
| remove_volatile_test.test | RUN | 0.224833 | 0.834452 | 1.754865 | 0.001255 | 0.001320 | 0.001209 |
| remove_reference_test.test | RUN | 0.229056 | 0.869180 | 1.844137 | 0.001224 | 0.001423 | 0.001110 |
| remove_pointer_test.test | RUN | 0.239233 | 0.912702 | 1.895349 | 0.001436 | 0.001138 | 0.001134 |
| remove_extent_test.test | RUN | 0.232788 | 0.888780 | 1.816117 | 0.001124 | 0.001428 | 0.001042 |
| remove_cv_test.test | RUN | 0.228244 | 0.884774 | 1.843657 | 0.001230 | 0.001349 | 0.001078 |
| remove_cv_ref_test.test | RUN | 0.479274 | 2.198186 | 4.507226 | 0.001284 | 0.001159 | 0.001141 |
| remove_const_test.test | RUN | 0.220044 | 0.823281 | 1.714223 | 0.001420 | 0.001382 | 0.001086 |
| remove_bounds_test.test | RUN | 0.230324 | 0.894887 | 1.824280 | 0.000903 | 0.001374 | 0.001043 |
| remove_all_extents_test.test | RUN | 0.233093 | 0.877119 | 1.862524 | 0.001317 | 0.001199 | 0.000945 |
| rank_test.test | RUN | 0.088537 | 0.222184 | 0.277987 | 0.001145 | 0.001349 | 0.001129 |
| promote_mpl_test.test | RUN | 0.079494 | 0.197838 | 0.205341 | 0.000453 | 0.000531 | 0.001038 |
| promote_enum_test.test | RUN | 0.015660 | 0.047928 | 0.050760 | 0.000486 | 0.000551 | 0.001068 |
| promote_enum_msvc_bug_test.test | RUN | 0.015323 | 0.039974 | 0.042120 | 0.000472 | 0.000502 | 0.001109 |
| promote_basic_test.test | RUN | 0.019040 | 0.055252 | 0.048152 | 0.000436 | 0.000518 | 0.001009 |
| negation_test.test | RUN | 0.086336 | 0.200673 | 0.248707 | 0.001250 | 0.001190 | 0.000982 |
| mpl_interop_test3.test | RUN | 0.073736 | 0.186899 | 0.192298 | 0.000419 | 0.000465 | 0.001119 |
| mpl_interop_test2.test | RUN | 0.023773 | 0.056384 | 0.051259 | 0.000491 | 0.000464 | 0.001123 |
| mpl_interop_test1.test | RUN | 0.014214 | 0.039088 | 0.035127 | 0.000439 | 0.000475 | 0.000968 |
| make_void_test.test | RUN | 0.090003 | 0.215933 | 0.297221 | 0.001389 | 0.001150 | 0.001138 |
| make_unsigned_test.test | RUN | 0.105229 | 0.284269 | 0.413154 | 0.001361 | 0.001343 | 0.001028 |
| make_signed_test.test | RUN | 0.103213 | 0.290908 | 0.394903 | 0.001093 | 0.001335 | 0.001122 |
| is_volatile_test.test | RUN | 0.093559 | 0.246438 | 0.337811 | 0.001090 | 0.001192 | 0.001135 |
| is_void_test.test | RUN | 0.088735 | 0.227405 | 0.305373 | 0.001412 | 0.001375 | 0.001098 |
| is_virtual_base_of_test.test | RUN | 0.104533 | 0.291793 | 0.425208 | 0.001269 | 0.001260 | 0.001096 |
| is_unsigned_test.test | RUN | 0.092785 | 0.235099 | 0.316213 | 0.001235 | 0.001230 | 0.000967 |
| is_unscoped_enum_test.test | RUN | 0.090431 | 0.216477 | 0.265827 | 0.001188 | 0.001192 | 0.001149 |
| is_union_test.test | RUN | 0.096532 | 0.269072 | 0.388285 | 0.001178 | 0.001310 | 0.001008 |
| is_unbounded_array_test.test | RUN | 0.089988 | 0.226891 | 0.307557 | 0.001274 | 0.001191 | 0.001185 |
| is_trivially_copyable_test.test | RUN | 0.146167 | 0.478223 | 0.772989 | 0.001168 | 0.001413 | 0.001068 |
| is_swappable_test.test | RUN | 0.119182 | 0.359310 | 0.576598 | 0.001084 | 0.001204 | 0.001028 |
| is_stateless_test.test | RUN | 0.135936 | 0.421937 | 0.655275 | 0.001190 | 0.001248 | 0.001039 |
| is_signed_test.test | RUN | 0.092408 | 0.232733 | 0.330286 | 0.001333 | 0.001178 | 0.001044 |
| is_scoped_enum_test.test | RUN | 0.088677 | 0.212339 | 0.275650 | 0.001224 | 0.001212 | 0.001097 |
| is_scalar_test.test | RUN | 0.119273 | 0.377130 | 0.571216 | 0.001191 | 0.001244 | 0.001023 |
| is_same_test.test | RUN | 0.090168 | 0.224289 | 0.292007 | 0.001404 | 0.001278 | 0.001033 |
| is_rvalue_reference_test.test | RUN | 0.095153 | 0.249160 | 0.343684 | 0.001126 | 0.001590 | 0.001079 |
| is_reference_test.test | RUN | 0.093398 | 0.249788 | 0.344526 | 0.001118 | 0.001250 | 0.001023 |
| is_polymorphic_test.test | RUN | 0.100834 | 0.268593 | 0.378222 | 0.001069 | 0.001201 | 0.001039 |
| is_pointer_test.test | RUN | 0.095982 | 0.260246 | 0.361460 | 0.001152 | 0.001102 | 0.001041 |
| is_pod_test.test | RUN | 0.126004 | 0.414521 | 0.677974 | 0.001134 | 0.001332 | 0.001175 |
| is_object_test.test | RUN | 0.087782 | 0.225106 | 0.277488 | 0.001150 | 0.001346 | 0.001036 |
| is_nothrow_swappable_test.test | RUN | 0.130069 | 0.397561 | 0.625405 | 0.001190 | 0.001170 | 0.001011 |
| is_nothrow_move_constructible_test.test | RUN | 0.122179 | 0.401878 | 0.649536 | 0.001330 | 0.001200 | 0.001079 |
| is_nothrow_move_assignable_test.test | RUN | 0.121907 | 0.410045 | 0.646283 | 0.001140 | 0.001140 | 0.001051 |
| is_noncopyable_test.test | RUN | 0.091389 | 0.224833 | 0.286624 | 0.001124 | 0.001400 | 0.001021 |
| is_member_pointer_test.test | RUN | 0.095429 | 0.228606 | 0.296132 | 0.001097 | 0.001169 | 0.001022 |
| is_member_obj_test.test | RUN | 0.089998 | 0.225339 | 0.307862 | 0.001211 | 0.001284 | 0.001189 |
| is_member_func_test.test | RUN | 0.094634 | 0.243394 | 0.332085 | 0.001195 | 0.001301 | 0.001076 |
| is_lvalue_reference_test.test | RUN | 0.095015 | 0.257052 | 0.362292 | 0.001188 | 0.001199 | 0.001334 |
| is_list_constructible_test.test | RUN | 0.114334 | 0.296779 | 0.394492 | 0.001341 | 0.001202 | 0.001130 |
| is_integral_test.test | RUN | 0.114691 | 0.354908 | 0.555370 | 0.001186 | 0.001488 | 0.001117 |
| is_fundamental_test.test | RUN | 0.111756 | 0.369609 | 0.572895 | 0.001172 | 0.001203 | 0.001048 |
| is_function_test.test | RUN | 0.091386 | 0.237391 | 0.326200 | 0.000968 | 0.001215 | 0.001062 |
| is_floating_point_test.test | RUN | 0.097121 | 0.254466 | 0.358255 | 0.001104 | 0.001181 | 0.001079 |
| is_float_test.test | RUN | 0.093744 | 0.257163 | 0.372787 | 0.001170 | 0.001251 | 0.000968 |
| is_final_test.test | RUN | 0.095260 | 0.262868 | 0.369732 | 0.001158 | 0.001311 | 0.001064 |
| is_enum_test.test | RUN | 0.087011 | 0.222473 | 0.290517 | 0.001092 | 0.001203 | 0.001021 |
| is_empty_test.test | RUN | 0.099582 | 0.241646 | 0.330608 | 0.001326 | 0.001400 | 0.001002 |
| is_detected_test.test | RUN | 0.084790 | 0.210488 | 0.268670 | 0.001390 | 0.001265 | 0.001075 |
| is_detected_exact_test.test | RUN | 0.083275 | 0.207393 | 0.267931 | 0.001166 | 0.001306 | 0.001148 |
| is_destructible_test.test | RUN | 0.121209 | 0.391748 | 0.625738 | 0.001203 | 0.001373 | 0.001205 |
| is_default_constr_test.test | RUN | 0.121964 | 0.415270 | 0.657647 | 0.001215 | 0.001297 | 0.001184 |
| is_copy_constructible_test.test | RUN | 0.129161 | 0.430671 | 0.698575 | 0.001168 | 0.001384 | 0.001165 |
| is_copy_assignable_test.test | RUN | 0.126103 | 0.439878 | 0.687521 | 0.001182 | 0.001257 | 0.001076 |
| is_convertible_test.test | RUN | 0.122348 | 0.379688 | 0.558872 | 0.001131 | 0.001253 | 0.001053 |
| is_constructible_test.test | RUN | 0.104269 | 0.280262 | 0.394595 | 0.001234 | 0.001344 | 0.001185 |
| is_const_test.test | RUN | 0.092280 | 0.245206 | 0.326363 | 0.001127 | 0.001209 | 0.001027 |
| is_compound_test.test | RUN | 0.087489 | 0.207587 | 0.268456 | 0.001224 | 0.001241 | 0.001132 |
| is_complex_test.test | RUN | 0.115527 | 0.279733 | 0.373369 | 0.001167 | 0.001299 | 0.001038 |
| is_complete_test.test | RUN | 0.104185 | 0.287081 | 0.415124 | 0.001304 | 0.001217 | 0.001045 |
| is_class_test.test | RUN | 0.093534 | 0.254922 | 0.347110 | 0.001367 | 0.001156 | 0.001071 |
| is_bounded_array_test.test | RUN | 0.091318 | 0.226299 | 0.299275 | 0.001141 | 0.001178 | 0.001084 |
| is_base_of_test.test | RUN | 0.092381 | 0.249270 | 0.347898 | 0.001138 | 0.001312 | 0.000981 |
| is_base_and_derived_test.test | RUN | 0.095694 | 0.245700 | 0.332617 | 0.001322 | 0.001378 | 0.001025 |
| is_assignable_test.test | RUN | 0.111881 | 0.350972 | 0.538477 | 0.001322 | 0.001185 | 0.001069 |
| is_array_test.test | RUN | 0.091940 | 0.238197 | 0.335865 | 0.001384 | 0.001255 | 0.001037 |
| is_arithmetic_test.test | RUN | 0.112558 | 0.352051 | 0.536413 | 0.001132 | 0.001264 | 0.001080 |
| is_abstract_test.test | RUN | 0.201725 | 0.941075 | 1.991208 | 0.001139 | 0.001272 | 0.001145 |
| integral_constant_test.test | RUN | 0.013465 | 0.037759 | 0.038505 | 0.000449 | 0.000500 | 0.001060 |
| has_virtual_destructor_test.test | RUN | 0.097041 | 0.277493 | 0.388917 | 0.001265 | 0.001309 | 0.001024 |
| has_unary_plus_test.test | RUN | 0.185306 | 0.987213 | 1.448198 | 0.001232 | 0.001461 | 0.001176 |
| has_unary_minus_test.test | RUN | 0.182344 | 0.969258 | 1.433743 | 0.001128 | 0.001444 | 0.001103 |
| has_trivial_move_constructor_test.test | RUN | 0.126665 | 0.425482 | 0.695632 | 0.001198 | 0.001277 | 0.001110 |
| has_trivial_move_assign_test.test | RUN | 0.128661 | 0.417811 | 0.671842 | 0.001195 | 0.001230 | 0.001212 |
| has_trivial_destructor_test.test | RUN | 0.127151 | 0.429886 | 0.678066 | 0.001158 | 0.001311 | 0.001204 |
| has_trivial_copy_test.test | RUN | 0.126852 | 0.442871 | 0.688218 | 0.001129 | 0.001510 | 0.001183 |
| has_trivial_constr_test.test | RUN | 0.130424 | 0.447902 | 0.698531 | 0.001318 | 0.001448 | 0.001230 |
| has_trivial_assign_test.test | RUN | 0.131845 | 0.441826 | 0.693539 | 0.001330 | 0.001435 | 0.001259 |
| has_right_shift_test.test | RUN | 0.195587 | 0.802096 | 1.522786 | 0.001360 | 0.001321 | 0.001050 |
| has_right_shift_assign_test.test | RUN | 0.186859 | 0.759004 | 1.459215 | 0.001133 | 0.001427 | 0.001086 |
| has_prefix_classes3_test.test | RUN | 0.136315 | 0.451421 | 0.748521 | 0.001401 | 0.001393 | 0.001075 |
| has_prefix_classes2_test.test | RUN | 0.137576 | 0.442181 | 0.730857 | 0.001113 | 0.001220 | 0.001155 |
| has_prefix_classes1_test.test | RUN | 0.138977 | 0.445768 | 0.688281 | 0.001265 | 0.001339 | 0.001036 |
| has_prefix_classes0_test.test | RUN | 0.135267 | 0.459862 | 0.731262 | 0.001245 | 0.001162 | 0.001077 |
| has_pre_increment_test.test | RUN | 0.182786 | 0.977273 | 1.415150 | 0.001233 | 0.001140 | 0.001080 |
| has_pre_decrement_test.test | RUN | 0.189613 | 0.972194 | 1.445284 | 0.001243 | 0.001190 | 0.001146 |
| has_postfix_classes3_test.test | RUN | 0.135498 | 0.447661 | 0.736469 | 0.001512 | 0.001205 | 0.001298 |
| has_postfix_classes2_test.test | RUN | 0.137819 | 0.440650 | 0.707419 | 0.001131 | 0.001077 | 0.000966 |
| has_postfix_classes1_test.test | RUN | 0.136677 | 0.447016 | 0.722382 | 0.001182 | 0.001306 | 0.001186 |
| has_postfix_classes0_test.test | RUN | 0.135117 | 0.442786 | 0.707389 | 0.001143 | 0.001263 | 0.001102 |
| has_post_increment_test.test | RUN | 0.184813 | 0.968691 | 1.496604 | 0.001302 | 0.001321 | 0.000889 |
| has_post_decrement_test.test | RUN | 0.185063 | 0.977797 | 1.488681 | 0.001344 | 0.001317 | 0.001049 |
| has_plus_test.test | RUN | 0.187384 | 0.737744 | 1.446638 | 0.001271 | 0.001375 | 0.001147 |
| has_plus_assign_test.test | RUN | 0.192240 | 0.755367 | 1.461169 | 0.001141 | 0.001293 | 0.001079 |
| has_operator_new_test.test | RUN | 0.129619 | 0.394167 | 0.658402 | 0.001285 | 0.001286 | 0.001094 |
| has_nothrow_destructor_test.test | RUN | 0.131009 | 0.431146 | 0.715795 | 0.001409 | 0.001185 | 0.001033 |
| has_nothrow_copy_test.test | RUN | 0.127016 | 0.416089 | 0.665879 | 0.001177 | 0.001345 | 0.001026 |
| has_nothrow_constr_test.test | RUN | 0.123292 | 0.402474 | 0.635288 | 0.001164 | 0.001239 | 0.001121 |
| has_nothrow_assign_test.test | RUN | 0.125292 | 0.406745 | 0.667065 | 0.001259 | 0.001329 | 0.001045 |
| has_not_equal_to_test.test | RUN | 0.188199 | 0.974243 | 1.465985 | 0.001133 | 0.001180 | 0.001178 |
| has_negate_test.test | RUN | 0.181402 | 0.747338 | 1.397140 | 0.001247 | 0.001339 | 0.001139 |
| has_multiplies_test.test | RUN | 0.187367 | 0.747381 | 1.425855 | 0.001120 | 0.001090 | 0.001123 |
| has_multiplies_assign_test.test | RUN | 0.189269 | 0.767397 | 1.412401 | 0.001274 | 0.001418 | 0.001098 |
| has_modulus_test.test | RUN | 0.184399 | 0.758965 | 1.416773 | 0.001434 | 0.001355 | 0.001178 |
| has_modulus_assign_test.test | RUN | 0.185637 | 0.744937 | 1.431218 | 0.001286 | 0.000932 | 0.001202 |
| has_minus_test.test | RUN | 0.190407 | 0.777112 | 1.432071 | 0.001161 | 0.001182 | 0.001047 |
| has_minus_assign_test.test | RUN | 0.196452 | 0.774005 | 1.439740 | 0.001348 | 0.001311 | 0.001121 |
| has_logical_or_test.test | RUN | 0.186626 | 0.760707 | 1.426523 | 0.001241 | 0.001404 | 0.001104 |
| has_logical_not_test.test | RUN | 0.180226 | 0.725841 | 1.405544 | 0.001220 | 0.001177 | 0.001067 |
| has_logical_and_test.test | RUN | 0.186374 | 0.765991 | 1.432064 | 0.001202 | 0.001297 | 0.001032 |
| has_less_test.test | RUN | 0.189463 | 0.971236 | 1.440954 | 0.001334 | 0.001393 | 0.001051 |
| has_less_equal_test.test | RUN | 0.188045 | 0.963770 | 1.435375 | 0.001369 | 0.001254 | 0.001100 |
| has_left_shift_test.test | RUN | 0.209299 | 0.950552 | 1.815433 | 0.001277 | 0.000998 | 0.001069 |
| has_left_shift_assign_test.test | RUN | 0.188160 | 0.753401 | 1.434386 | 0.001130 | 0.001317 | 0.000881 |
| has_greater_test.test | RUN | 0.190358 | 0.944148 | 1.445290 | 0.001322 | 0.001293 | 0.001099 |
| has_greater_equal_test.test | RUN | 0.188504 | 0.949807 | 1.437083 | 0.001459 | 0.001285 | 0.001093 |
| has_equal_to_test.test | RUN | 0.190744 | 0.948011 | 1.510993 | 0.001216 | 0.001220 | 0.001040 |
| has_divides_test.test | RUN | 0.184670 | 0.750420 | 1.495748 | 0.001174 | 0.001181 | 0.000956 |
| has_divides_assign_test.test | RUN | 0.195027 | 0.743854 | 1.432159 | 0.001354 | 0.001332 | 0.001086 |
| has_dereference_test.test | RUN | 0.182428 | 0.733810 | 1.380250 | 0.001316 | 0.001225 | 0.001160 |
| has_complement_test.test | RUN | 0.187751 | 0.975406 | 1.483784 | 0.001353 | 0.001298 | 0.001056 |
| has_bit_xor_test.test | RUN | 0.183121 | 0.737616 | 1.490841 | 0.001118 | 0.001272 | 0.001182 |
| has_bit_xor_assign_test.test | RUN | 0.186246 | 0.753729 | 1.412740 | 0.001532 | 0.001310 | 0.001058 |
| has_bit_or_test.test | RUN | 0.186241 | 0.737426 | 1.412738 | 0.001254 | 0.001369 | 0.001192 |
| has_bit_or_assign_test.test | RUN | 0.186127 | 0.741378 | 1.454154 | 0.001200 | 0.001392 | 0.000966 |
| has_bit_and_test.test | RUN | 0.183309 | 0.747350 | 1.455385 | 0.001133 | 0.001247 | 0.001027 |
| has_bit_and_assign_test.test | RUN | 0.186832 | 0.754120 | 1.427136 | 0.001279 | 0.001356 | 0.000946 |
| has_binary_classes9_test.test | RUN | 0.200790 | 0.899581 | 1.632540 | 0.001432 | 0.001426 | 0.001137 |
| has_binary_classes8_test.test | RUN | 0.204756 | 0.899730 | 1.640757 | 0.001264 | 0.001344 | 0.001175 |
| has_binary_classes7_test.test | RUN | 0.202910 | 0.882167 | 1.618392 | 0.001358 | 0.001327 | 0.001095 |
| has_binary_classes6_test.test | RUN | 0.205070 | 0.885890 | 1.645552 | 0.001454 | 0.001254 | 0.001025 |
| has_binary_classes5_test.test | RUN | 0.204415 | 0.854389 | 1.627926 | 0.001624 | 0.001330 | 0.001180 |
| has_binary_classes4_test.test | RUN | 0.202965 | 0.881370 | 1.641389 | 0.001185 | 0.001302 | 0.001080 |
| has_binary_classes3_test.test | RUN | 0.200487 | 0.893528 | 1.617772 | 0.001240 | 0.001314 | 0.000985 |
| has_binary_classes2_test.test | RUN | 0.206438 | 0.890403 | 1.631606 | 0.001348 | 0.001302 | 0.001046 |
| has_binary_classes1_test.test | RUN | 0.201380 | 0.874109 | 1.603141 | 0.001361 | 0.001386 | 0.001071 |
| has_binary_classes0_test.test | RUN | 0.201394 | 0.904967 | 1.604943 | 0.001242 | 0.001312 | 0.001086 |
| function_traits_test.test | RUN | 0.099147 | 0.239269 | 0.334197 | 0.001197 | 0.001281 | 0.001074 |
| floating_point_promotion_test.test | RUN | 0.093223 | 0.236193 | 0.320929 | 0.001139 | 0.001377 | 0.001122 |
| extent_test.test | RUN | 0.087218 | 0.228428 | 0.339231 | 0.001135 | 0.001282 | 0.001061 |
| enable_if_test.test | RUN | 0.085251 | 0.199995 | 0.250275 | 0.001365 | 0.001182 | 0.001025 |
| disjunction_test.test | RUN | 0.087108 | 0.205990 | 0.275823 | 0.001154 | 0.001157 | 0.001049 |
| detected_test.test | RUN | 0.091247 | 0.195840 | 0.249834 | 0.001189 | 0.001172 | 0.000998 |
| detected_or_test.test | RUN | 0.093581 | 0.210870 | 0.276004 | 0.001307 | 0.001180 | 0.001121 |
| decay_test.test | RUN | 0.226669 | 0.798070 | 1.557131 | 0.001087 | 0.001174 | 0.000987 |
| cxx14_aliases_test.test | RUN | 0.141303 | 0.302543 | 0.439283 | 0.001287 | 0.001242 | 0.001024 |
| copy_reference_test.test | RUN | 0.085614 | 0.207497 | 0.266025 | 0.001061 | 0.001230 | 0.001110 |
| copy_cv_test.test | RUN | 0.094616 | 0.215271 | 0.287979 | 0.001363 | 0.001318 | 0.000988 |
| copy_cv_ref_test.test | RUN | 0.129837 | 0.356432 | 0.633290 | 0.001196 | 0.001183 | 0.001112 |
| conjunction_test.test | RUN | 0.088116 | 0.207164 | 0.289182 | 0.001312 | 0.001139 | 0.001105 |
| conditional_test.test | RUN | 0.085977 | 0.207628 | 0.274688 | 0.001263 | 0.001170 | 0.001102 |
| common_type_test.test | RUN | 0.119282 | 0.317096 | 0.512844 | 0.001379 | 0.001180 | 0.001049 |
| common_type_sfinae_test.test | RUN | 0.089141 | 0.195239 | 0.256876 | 0.001270 | 0.001248 | 0.001108 |
| common_type_sfinae2_test.test | RUN | 0.088828 | 0.208139 | 0.277207 | 0.001398 | 0.001271 | 0.001015 |
| common_type_6_test.test | RUN | 0.092401 | 0.214918 | 0.283440 | 0.001221 | 0.001185 | 0.001120 |
| common_type_5_test.test | RUN | 0.092835 | 0.210126 | 0.288068 | 0.001368 | 0.001172 | 0.001028 |
| common_type_4_test.test | RUN | 0.097411 | 0.228593 | 0.329729 | 0.001147 | 0.001118 | 0.001020 |
| common_type_3_test.test | RUN | 0.087539 | 0.197379 | 0.244722 | 0.001287 | 0.001142 | 0.000980 |
| common_type_2_test.test | RUN | 0.117393 | 0.311092 | 0.519570 | 0.001070 | 0.001280 | 0.001022 |
| alignment_of_test.test | RUN | 0.099844 | 0.253296 | 0.341625 | 0.001432 | 0.001157 | 0.001114 |
| alignment_of_a2_test.test | RUN | 0.096330 | 0.256211 | 0.340917 | 0.001322 | 0.001354 | 0.001069 |
| aligned_storage_test.test | RUN | 0.097964 | 0.247821 | 0.323159 | 0.001255 | 0.001332 | 0.001084 |
| aligned_storage_empy_test.test | RUN | 0.111978 | 0.275063 | 0.425191 | 0.001180 | 0.001318 | 0.001088 |
| aligned_storage_a2_test.test | RUN | 0.097384 | 0.245425 | 0.316922 | 0.001300 | 0.001299 | 0.001210 |
| add_volatile_test.test | RUN | 0.203737 | 0.716511 | 1.450079 | 0.001242 | 0.001272 | 0.000950 |
| add_rvalue_reference_test.test | RUN | 0.229455 | 0.805889 | 1.678548 | 0.001397 | 0.001182 | 0.001113 |
| add_reference_test.test | RUN | 0.219684 | 0.775078 | 1.663128 | 0.001280 | 0.001239 | 0.001082 |
| add_pointer_test.test | RUN | 0.144344 | 0.444483 | 0.872974 | 0.001105 | 0.001400 | 0.001036 |
| add_lvalue_reference_test.test | RUN | 0.221944 | 0.782611 | 1.648983 | 0.001171 | 0.001135 | 0.001121 |
| add_cv_test.test | RUN | 0.209027 | 0.742551 | 1.563382 | 0.001158 | 0.001029 | 0.001132 |
| add_const_test.test | RUN | 0.209904 | 0.743481 | 1.524344 | 0.001105 | 0.001168 | 0.001032 |
| is_virtual_base_of_fail.test | COMPILE_FAIL | 0.080241 | 0.195372 | 0.251776 | — | — | — |
| is_stateless_fail.test | COMPILE_FAIL | 0.087081 | 0.198958 | 0.261057 | — | — | — |
| is_polymorphic_fail.test | COMPILE_FAIL | 0.081997 | 0.189289 | 0.250293 | — | — | — |
| is_nothrow_move_constructible_fail.test | COMPILE_FAIL | 0.084093 | 0.188333 | 0.240714 | — | — | — |
| is_nothrow_move_assignable_fail.test | COMPILE_FAIL | 0.083181 | 0.188981 | 0.241908 | — | — | — |
| is_list_constructible_fail.test | COMPILE_FAIL | 0.081771 | 0.187494 | 0.238591 | — | — | — |
| is_empty_fail.test | COMPILE_FAIL | 0.084438 | 0.192567 | 0.244106 | — | — | — |
| is_destructible_fail.test | COMPILE_FAIL | 0.081822 | 0.184197 | 0.237339 | — | — | — |
| is_default_constructible_fail.test | COMPILE_FAIL | 0.084291 | 0.189785 | 0.239785 | — | — | — |
| is_copy_constructible_fail.test | COMPILE_FAIL | 0.082401 | 0.190809 | 0.243556 | — | — | — |
| is_copy_assignable_fail.test | COMPILE_FAIL | 0.080930 | 0.187204 | 0.241609 | — | — | — |
| is_convertible_fail.test | COMPILE_FAIL | 0.084068 | 0.189889 | 0.241129 | — | — | — |
| is_convertible2_fail.test | COMPILE_FAIL | 0.084212 | 0.189354 | 0.241982 | — | — | — |
| is_constructible_fail.test | COMPILE_FAIL | 0.084382 | 0.190191 | 0.244259 | — | — | — |
| is_base_of_fail.test | COMPILE_FAIL | 0.082208 | 0.189602 | 0.243310 | — | — | — |
| is_assignable_fail.test | COMPILE_FAIL | 0.083395 | 0.188733 | 0.239809 | — | — | — |
| has_nothrow_destruct_fail.test | COMPILE_FAIL | 0.083815 | 0.186668 | 0.240632 | — | — | — |
| has_nothrow_copy_fail.test | COMPILE_FAIL | 0.083825 | 0.191342 | 0.245835 | — | — | — |
| has_nothrow_cons_fail.test | COMPILE_FAIL | 0.083192 | 0.189587 | 0.245657 | — | — | — |
| has_nothrow_assign_fail.test | COMPILE_FAIL | 0.083263 | 0.190065 | 0.241024 | — | — | — |
| common_type_fail.test | COMPILE_FAIL | 0.082872 | 0.184744 | 0.241055 | — | — | — |
| common_type2_fail.test | COMPILE_FAIL | 0.083746 | 0.189452 | 0.241293 | — | — | — |
| has_nothrow_assign_test_no_intrinsics.test | RUN | 0.127903 | 0.396943 | 0.682734 | 0.001303 | 0.001375 | 0.000833 |
| has_nothrow_constr_test_no_intrinsics.test | RUN | 0.120412 | 0.404966 | 0.664799 | 0.001361 | 0.001172 | 0.001133 |
| has_nothrow_copy_test_no_intrinsics.test | RUN | 0.125212 | 0.409831 | 0.667068 | 0.001397 | 0.001167 | 0.000759 |
| is_nothrow_move_assignable_test_no_intrinsics.test | RUN | 0.125618 | 0.403125 | 0.656764 | 0.000896 | 0.000812 | 0.000775 |
| is_nothrow_move_constructible_test_no_intrinsics.test | RUN | 0.082517 | 0.300979 | 0.371123 | 0.000965 | 0.000875 | 0.000833 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 1.003× | 1.002×, 1.005× | 1.004× |
| clang | 1.024× | 1.021×, 1.026× | 0.998× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1364 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/43778388618).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| add_const_test.test | 10 | 0.000793s | 0.000790s | 0.000768s | byte equality observed |
| add_cv_test.test | 10 | 0.000815s | 0.000764s | 0.000786s | byte equality observed |
| add_lvalue_reference_test.test | 10 | 0.000792s | 0.000781s | 0.000749s | byte equality observed |
| add_pointer_test.test | 10 | 0.000788s | 0.000800s | 0.000789s | byte equality observed |
| add_reference_test.test | 10 | 0.000776s | 0.000790s | 0.000780s | byte equality observed |
| add_rvalue_reference_test.test | 10 | 0.000803s | 0.000810s | 0.000796s | byte equality observed |
| add_volatile_test.test | 10 | 0.000811s | 0.000776s | 0.000788s | byte equality observed |
| aligned_storage_a2_test.test | 10 | 0.000820s | 0.000814s | 0.000832s | byte equality observed |
| aligned_storage_empy_test.test | 10 | 0.000782s | 0.000766s | 0.000786s | byte equality observed |
| aligned_storage_test.test | 10 | 0.000823s | 0.000794s | 0.000821s | byte equality observed |
| alignment_of_a2_test.test | 10 | 0.000779s | 0.000792s | 0.000798s | byte equality observed |
| alignment_of_test.test | 10 | 0.000777s | 0.000775s | 0.000787s | byte equality observed |
| common_type_2_test.test | 10 | 0.000771s | 0.000794s | 0.000792s | byte equality observed |
| common_type_3_test.test | 10 | 0.000785s | 0.000780s | 0.000791s | byte equality observed |
| common_type_4_test.test | 10 | 0.000778s | 0.000773s | 0.000802s | byte equality observed |
| common_type_5_test.test | 10 | 0.000784s | 0.000777s | 0.000798s | byte equality observed |
| common_type_6_test.test | 10 | 0.000783s | 0.000785s | 0.000807s | byte equality observed |
| common_type_sfinae2_test.test | 10 | 0.000773s | 0.000796s | 0.000816s | byte equality observed |
| common_type_sfinae_test.test | 10 | 0.000779s | 0.000804s | 0.000793s | byte equality observed |
| common_type_test.test | 10 | 0.000774s | 0.000817s | 0.000788s | byte equality observed |
| conditional_test.test | 10 | 0.000776s | 0.000801s | 0.000776s | byte equality observed |
| conjunction_test.test | 10 | 0.000780s | 0.000790s | 0.000783s | byte equality observed |
| copy_cv_ref_test.test | 10 | 0.000793s | 0.000764s | 0.000770s | byte equality observed |
| copy_cv_test.test | 10 | 0.000771s | 0.000779s | 0.000793s | byte equality observed |
| copy_reference_test.test | 10 | 0.000793s | 0.000774s | 0.000796s | byte equality observed |
| cxx14_aliases_test.test | 10 | 0.000782s | 0.000770s | 0.000801s | byte equality observed |
| decay_test.test | 10 | 0.000791s | 0.000764s | 0.000776s | byte equality observed |
| detected_or_test.test | 10 | 0.000782s | 0.000776s | 0.000787s | byte equality observed |
| detected_test.test | 10 | 0.000782s | 0.000766s | 0.000811s | byte equality observed |
| disjunction_test.test | 10 | 0.000790s | 0.000792s | 0.000770s | byte equality observed |
| enable_if_test.test | 10 | 0.000773s | 0.000799s | 0.000766s | byte equality observed |
| extent_test.test | 10 | 0.000779s | 0.000799s | 0.000794s | byte equality observed |
| floating_point_promotion_test.test | 10 | 0.000766s | 0.000764s | 0.000770s | byte equality observed |
| function_traits_test.test | 10 | 0.000776s | 0.000781s | 0.000772s | byte equality observed |
| has_binary_classes0_test.test | 10 | 0.000805s | 0.000755s | 0.000753s | byte equality observed |
| has_binary_classes1_test.test | 10 | 0.000765s | 0.000774s | 0.000788s | byte equality observed |
| has_binary_classes2_test.test | 10 | 0.000754s | 0.000756s | 0.000766s | byte equality observed |
| has_binary_classes3_test.test | 10 | 0.000779s | 0.000773s | 0.000784s | byte equality observed |
| has_binary_classes4_test.test | 10 | 0.000788s | 0.000780s | 0.000789s | byte equality observed |
| has_binary_classes5_test.test | 10 | 0.000789s | 0.000783s | 0.000762s | byte equality observed |
| has_binary_classes6_test.test | 10 | 0.000769s | 0.000792s | 0.000775s | byte equality observed |
| has_binary_classes7_test.test | 10 | 0.000774s | 0.000808s | 0.000755s | byte equality observed |
| has_binary_classes8_test.test | 10 | 0.000776s | 0.000782s | 0.000786s | byte equality observed |
| has_binary_classes9_test.test | 10 | 0.000791s | 0.000797s | 0.000757s | byte equality observed |
| has_bit_and_assign_test.test | 10 | 0.000806s | 0.000793s | 0.000774s | byte equality observed |
| has_bit_and_test.test | 10 | 0.000788s | 0.000773s | 0.000764s | byte equality observed |
| has_bit_or_assign_test.test | 10 | 0.000780s | 0.000790s | 0.000754s | byte equality observed |
| has_bit_or_test.test | 10 | 0.000782s | 0.000771s | 0.000793s | byte equality observed |
| has_bit_xor_assign_test.test | 10 | 0.000781s | 0.000769s | 0.000799s | byte equality observed |
| has_bit_xor_test.test | 10 | 0.000787s | 0.000779s | 0.000791s | byte equality observed |
| has_complement_test.test | 10 | 0.000761s | 0.000779s | 0.000782s | byte equality observed |
| has_dereference_test.test | 10 | 0.000775s | 0.000790s | 0.000785s | byte equality observed |
| has_divides_assign_test.test | 10 | 0.000776s | 0.000772s | 0.000768s | byte equality observed |
| has_divides_test.test | 10 | 0.000782s | 0.000790s | 0.000764s | byte equality observed |
| has_equal_to_test.test | 10 | 0.000774s | 0.000778s | 0.000763s | byte equality observed |
| has_greater_equal_test.test | 10 | 0.000777s | 0.000774s | 0.000781s | byte equality observed |
| has_greater_test.test | 10 | 0.000776s | 0.000786s | 0.000775s | byte equality observed |
| has_left_shift_assign_test.test | 10 | 0.000778s | 0.000761s | 0.000782s | byte equality observed |
| has_left_shift_test.test | 10 | 0.000780s | 0.000770s | 0.000783s | byte equality observed |
| has_less_equal_test.test | 10 | 0.000783s | 0.000789s | 0.000750s | byte equality observed |
| has_less_test.test | 10 | 0.000780s | 0.000789s | 0.000766s | byte equality observed |
| has_logical_and_test.test | 10 | 0.000770s | 0.000771s | 0.000772s | byte equality observed |
| has_logical_not_test.test | 10 | 0.000790s | 0.000781s | 0.000766s | byte equality observed |
| has_logical_or_test.test | 10 | 0.000779s | 0.000782s | 0.000789s | byte equality observed |
| has_minus_assign_test.test | 10 | 0.000772s | 0.000794s | 0.000801s | byte equality observed |
| has_minus_test.test | 10 | 0.000775s | 0.000787s | 0.000783s | byte equality observed |
| has_modulus_assign_test.test | 10 | 0.000804s | 0.000783s | 0.000772s | byte equality observed |
| has_modulus_test.test | 10 | 0.000801s | 0.000758s | 0.000765s | byte equality observed |
| has_multiplies_assign_test.test | 10 | 0.000779s | 0.000776s | 0.000756s | byte equality observed |
| has_multiplies_test.test | 10 | 0.000791s | 0.000782s | 0.000772s | byte equality observed |
| has_negate_test.test | 10 | 0.000793s | 0.000803s | 0.000783s | byte equality observed |
| has_not_equal_to_test.test | 10 | 0.000784s | 0.000788s | 0.000808s | byte equality observed |
| has_nothrow_assign_test.test | 10 | 0.000772s | 0.000785s | 0.000802s | byte equality observed |
| has_nothrow_assign_test_no_intrinsics.test | 10 | 0.000784s | 0.000802s | 0.000787s | byte equality observed |
| has_nothrow_constr_test.test | 10 | 0.000788s | 0.000804s | 0.000767s | byte equality observed |
| has_nothrow_constr_test_no_intrinsics.test | 10 | 0.000804s | 0.000798s | 0.000785s | byte equality observed |
| has_nothrow_copy_test.test | 10 | 0.000787s | 0.000794s | 0.000785s | byte equality observed |
| has_nothrow_copy_test_no_intrinsics.test | 10 | 0.000785s | 0.000779s | 0.000801s | byte equality observed |
| has_nothrow_destructor_test.test | 10 | 0.000779s | 0.000791s | 0.000778s | byte equality observed |
| has_operator_new_test.test | 10 | 0.000774s | 0.000755s | 0.000784s | byte equality observed |
| has_plus_assign_test.test | 10 | 0.000774s | 0.000771s | 0.000798s | byte equality observed |
| has_plus_test.test | 10 | 0.000781s | 0.000778s | 0.000770s | byte equality observed |
| has_post_decrement_test.test | 10 | 0.000800s | 0.000777s | 0.000785s | byte equality observed |
| has_post_increment_test.test | 10 | 0.000788s | 0.000758s | 0.000776s | byte equality observed |
| has_postfix_classes0_test.test | 10 | 0.000788s | 0.000775s | 0.000763s | byte equality observed |
| has_postfix_classes1_test.test | 10 | 0.000782s | 0.000796s | 0.000789s | byte equality observed |
| has_postfix_classes2_test.test | 10 | 0.000796s | 0.000793s | 0.000784s | byte equality observed |
| has_postfix_classes3_test.test | 10 | 0.000770s | 0.000791s | 0.000783s | byte equality observed |
| has_pre_decrement_test.test | 10 | 0.000778s | 0.000766s | 0.000786s | byte equality observed |
| has_pre_increment_test.test | 10 | 0.000778s | 0.000788s | 0.000775s | byte equality observed |
| has_prefix_classes0_test.test | 10 | 0.000775s | 0.000758s | 0.000804s | byte equality observed |
| has_prefix_classes1_test.test | 10 | 0.000785s | 0.000799s | 0.000792s | byte equality observed |
| has_prefix_classes2_test.test | 10 | 0.000792s | 0.000793s | 0.000789s | byte equality observed |
| has_prefix_classes3_test.test | 10 | 0.000810s | 0.000796s | 0.000807s | byte equality observed |
| has_right_shift_assign_test.test | 10 | 0.000797s | 0.000794s | 0.000809s | byte equality observed |
| has_right_shift_test.test | 10 | 0.000776s | 0.000804s | 0.000806s | byte equality observed |
| has_trivial_assign_test.test | 10 | 0.000798s | 0.000822s | 0.000810s | byte equality observed |
| has_trivial_constr_test.test | 10 | 0.000814s | 0.000804s | 0.000821s | native test oracle; output varies |
| has_trivial_copy_test.test | 10 | 0.000805s | 0.000813s | 0.000814s | native test oracle; output varies |
| has_trivial_destructor_test.test | 10 | 0.000801s | 0.000786s | 0.000782s | byte equality observed |
| has_trivial_move_assign_test.test | 10 | 0.000781s | 0.000783s | 0.000776s | byte equality observed |
| has_trivial_move_constructor_test.test | 10 | 0.000770s | 0.000778s | 0.000800s | byte equality observed |
| has_unary_minus_test.test | 10 | 0.000781s | 0.000789s | 0.000793s | byte equality observed |
| has_unary_plus_test.test | 10 | 0.000764s | 0.000781s | 0.000810s | byte equality observed |
| has_virtual_destructor_test.test | 10 | 0.000771s | 0.000776s | 0.000804s | byte equality observed |
| integral_constant_test.test | 10 | 0.000367s | 0.000362s | 0.000788s | byte equality observed |
| is_abstract_test.test | 10 | 0.000771s | 0.000772s | 0.000793s | byte equality observed |
| is_arithmetic_test.test | 10 | 0.000802s | 0.000803s | 0.000785s | byte equality observed |
| is_array_test.test | 10 | 0.000785s | 0.000787s | 0.000785s | byte equality observed |
| is_assignable_test.test | 10 | 0.000794s | 0.000780s | 0.000770s | byte equality observed |
| is_base_and_derived_test.test | 10 | 0.000803s | 0.000763s | 0.000776s | byte equality observed |
| is_base_of_test.test | 10 | 0.000815s | 0.000754s | 0.000803s | byte equality observed |
| is_bounded_array_test.test | 10 | 0.000790s | 0.000781s | 0.000797s | byte equality observed |
| is_class_test.test | 10 | 0.000773s | 0.000795s | 0.000774s | byte equality observed |
| is_complete_test.test | 10 | 0.000773s | 0.000771s | 0.000790s | byte equality observed |
| is_complex_test.test | 10 | 0.000789s | 0.000789s | 0.000791s | byte equality observed |
| is_compound_test.test | 10 | 0.000783s | 0.000766s | 0.000783s | byte equality observed |
| is_const_test.test | 10 | 0.000785s | 0.000776s | 0.000777s | byte equality observed |
| is_constructible_test.test | 10 | 0.000773s | 0.000767s | 0.000765s | byte equality observed |
| is_convertible_test.test | 10 | 0.000781s | 0.000776s | 0.000784s | byte equality observed |
| is_copy_assignable_test.test | 10 | 0.000784s | 0.000817s | 0.000775s | byte equality observed |
| is_copy_constructible_test.test | 10 | 0.000783s | 0.000816s | 0.000790s | byte equality observed |
| is_default_constr_test.test | 10 | 0.000790s | 0.000788s | 0.000781s | byte equality observed |
| is_destructible_test.test | 10 | 0.000774s | 0.000792s | 0.000783s | byte equality observed |
| is_detected_exact_test.test | 10 | 0.000787s | 0.000780s | 0.000782s | byte equality observed |
| is_detected_test.test | 10 | 0.000788s | 0.000770s | 0.000758s | byte equality observed |
| is_empty_test.test | 10 | 0.000776s | 0.000763s | 0.000755s | byte equality observed |
| is_enum_test.test | 10 | 0.000811s | 0.000788s | 0.000753s | byte equality observed |
| is_final_test.test | 10 | 0.000781s | 0.000763s | 0.000768s | byte equality observed |
| is_float_test.test | 10 | 0.000771s | 0.000780s | 0.000804s | byte equality observed |
| is_floating_point_test.test | 10 | 0.000782s | 0.000779s | 0.000778s | byte equality observed |
| is_function_test.test | 10 | 0.000771s | 0.000763s | 0.000773s | byte equality observed |
| is_fundamental_test.test | 10 | 0.000776s | 0.000781s | 0.000789s | byte equality observed |
| is_integral_test.test | 10 | 0.000787s | 0.000767s | 0.000784s | byte equality observed |
| is_list_constructible_test.test | 10 | 0.000772s | 0.000756s | 0.000786s | byte equality observed |
| is_lvalue_reference_test.test | 10 | 0.000767s | 0.000775s | 0.000786s | byte equality observed |
| is_member_func_test.test | 10 | 0.000773s | 0.000813s | 0.000774s | byte equality observed |
| is_member_obj_test.test | 10 | 0.000764s | 0.000778s | 0.000782s | byte equality observed |
| is_member_pointer_test.test | 10 | 0.000771s | 0.000803s | 0.000792s | byte equality observed |
| is_noncopyable_test.test | 10 | 0.000771s | 0.000787s | 0.000776s | byte equality observed |
| is_nothrow_move_assignable_test.test | 10 | 0.000771s | 0.000775s | 0.000792s | byte equality observed |
| is_nothrow_move_assignable_test_no_intrinsics.test | 10 | 0.000769s | 0.000767s | 0.000762s | byte equality observed |
| is_nothrow_move_constructible_test.test | 10 | 0.000764s | 0.000779s | 0.000790s | byte equality observed |
| is_nothrow_move_constructible_test_no_intrinsics.test | 10 | 0.000773s | 0.000768s | 0.000789s | byte equality observed |
| is_nothrow_swappable_test.test | 10 | 0.000794s | 0.000788s | 0.000821s | byte equality observed |
| is_object_test.test | 10 | 0.000791s | 0.000776s | 0.000779s | byte equality observed |
| is_pod_test.test | 10 | 0.000775s | 0.000769s | 0.000762s | byte equality observed |
| is_pointer_test.test | 10 | 0.000771s | 0.000772s | 0.000778s | byte equality observed |
| is_polymorphic_test.test | 10 | 0.000773s | 0.000783s | 0.000768s | byte equality observed |
| is_reference_test.test | 10 | 0.000776s | 0.000781s | 0.000764s | byte equality observed |
| is_rvalue_reference_test.test | 10 | 0.000780s | 0.000775s | 0.000770s | byte equality observed |
| is_same_test.test | 10 | 0.000768s | 0.000781s | 0.000762s | byte equality observed |
| is_scalar_test.test | 10 | 0.000779s | 0.000798s | 0.000768s | byte equality observed |
| is_scoped_enum_test.test | 10 | 0.000783s | 0.000787s | 0.000767s | byte equality observed |
| is_signed_test.test | 10 | 0.000764s | 0.000761s | 0.000757s | byte equality observed |
| is_stateless_test.test | 10 | 0.000790s | 0.000783s | 0.000805s | byte equality observed |
| is_swappable_test.test | 10 | 0.000777s | 0.000799s | 0.000764s | byte equality observed |
| is_trivially_copyable_test.test | 10 | 0.000786s | 0.000789s | 0.000810s | byte equality observed |
| is_unbounded_array_test.test | 10 | 0.000779s | 0.000787s | 0.000787s | byte equality observed |
| is_union_test.test | 10 | 0.000779s | 0.000746s | 0.000781s | byte equality observed |
| is_unscoped_enum_test.test | 10 | 0.000816s | 0.000766s | 0.000783s | byte equality observed |
| is_unsigned_test.test | 10 | 0.000802s | 0.000762s | 0.000785s | byte equality observed |
| is_virtual_base_of_test.test | 10 | 0.000792s | 0.000784s | 0.000770s | byte equality observed |
| is_void_test.test | 10 | 0.000803s | 0.000772s | 0.000780s | byte equality observed |
| is_volatile_test.test | 10 | 0.000752s | 0.000776s | 0.000805s | byte equality observed |
| make_signed_test.test | 10 | 0.000788s | 0.000808s | 0.000755s | byte equality observed |
| make_unsigned_test.test | 10 | 0.000767s | 0.000789s | 0.000754s | byte equality observed |
| make_void_test.test | 10 | 0.000788s | 0.000781s | 0.000772s | byte equality observed |
| mpl_interop_test1.test | 10 | 0.000357s | 0.000363s | 0.000776s | byte equality observed |
| mpl_interop_test2.test | 10 | 0.000362s | 0.000360s | 0.000770s | byte equality observed |
| mpl_interop_test3.test | 10 | 0.000359s | 0.000358s | 0.000780s | byte equality observed |
| negation_test.test | 10 | 0.000775s | 0.000781s | 0.000796s | byte equality observed |
| promote_basic_test.test | 10 | 0.000353s | 0.000359s | 0.000776s | byte equality observed |
| promote_enum_msvc_bug_test.test | 10 | 0.000369s | 0.000353s | 0.000795s | byte equality observed |
| promote_enum_test.test | 10 | 0.000354s | 0.000354s | 0.000797s | byte equality observed |
| promote_mpl_test.test | 10 | 0.000355s | 0.000354s | 0.000804s | byte equality observed |
| rank_test.test | 10 | 0.000766s | 0.000787s | 0.000779s | byte equality observed |
| remove_all_extents_test.test | 10 | 0.000781s | 0.000780s | 0.000781s | byte equality observed |
| remove_bounds_test.test | 10 | 0.000773s | 0.000787s | 0.000790s | byte equality observed |
| remove_const_test.test | 10 | 0.000764s | 0.000770s | 0.000776s | byte equality observed |
| remove_cv_ref_test.test | 10 | 0.000793s | 0.000794s | 0.000789s | byte equality observed |
| remove_cv_test.test | 10 | 0.000780s | 0.000769s | 0.000777s | byte equality observed |
| remove_extent_test.test | 10 | 0.000760s | 0.000749s | 0.000779s | byte equality observed |
| remove_pointer_test.test | 10 | 0.000773s | 0.000775s | 0.000759s | byte equality observed |
| remove_reference_test.test | 10 | 0.000772s | 0.000768s | 0.000781s | byte equality observed |
| remove_volatile_test.test | 10 | 0.000780s | 0.000778s | 0.000790s | byte equality observed |
| tricky_abstract_type_test.test | 10 | 0.000773s | 0.000793s | 0.000801s | byte equality observed |
| tricky_add_pointer_test.test | 10 | 0.000762s | 0.000763s | 0.000786s | byte equality observed |
| tricky_function_type_test.test | 10 | 0.000774s | 0.000794s | 0.000760s | byte equality observed |
| tricky_incomplete_type_test.test | 10 | 0.000752s | 0.000812s | 0.000760s | byte equality observed |
| tricky_is_enum_test.test | 10 | 0.000787s | 0.000783s | 0.000754s | byte equality observed |
| tricky_partial_spec_test.test | 10 | 0.000776s | 0.000776s | 0.000764s | byte equality observed |
| tricky_rvalue_test.test | 10 | 0.000806s | 0.000782s | 0.000777s | byte equality observed |
| type_identity_test.test | 10 | 0.000788s | 0.000759s | 0.000791s | byte equality observed |
| type_traits_test.test | 10 | 0.000363s | 0.000359s | 0.000811s | byte equality observed |
| type_with_alignment_test.test | 10 | 0.000837s | 0.000846s | 0.000821s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/43778388618).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
