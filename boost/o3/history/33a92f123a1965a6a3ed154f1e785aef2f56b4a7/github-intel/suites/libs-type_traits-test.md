# libs/type_traits/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| type_with_alignment_test.test | RUN | 0.094999 | 0.268313 | 0.379005 | 0.001191 | 0.001503 | 0.001117 |
| type_traits_test.test | RUN | 0.129848 | 0.281438 | 0.365312 | 0.000452 | 0.000481 | 0.001111 |
| type_identity_test.test | RUN | 0.245392 | 0.956637 | 1.912396 | 0.001195 | 0.001442 | 0.001218 |
| tricky_rvalue_test.test | RUN | 0.089524 | 0.213064 | 0.289406 | 0.001252 | 0.001370 | 0.001017 |
| tricky_partial_spec_test.test | RUN | 0.102945 | 0.314948 | 0.460530 | 0.001029 | 0.001236 | 0.001158 |
| tricky_is_enum_test.test | RUN | 0.082298 | 0.203294 | 0.269551 | 0.001102 | 0.001262 | 0.001201 |
| tricky_incomplete_type_test.test | RUN | 0.132025 | 0.314990 | 0.445534 | 0.000863 | 0.001181 | 0.001150 |
| tricky_function_type_test.test | RUN | 0.110279 | 0.336639 | 0.511207 | 0.001123 | 0.001308 | 0.001099 |
| tricky_add_pointer_test.test | RUN | 0.160560 | 0.572532 | 1.132130 | 0.001145 | 0.001292 | 0.001215 |
| tricky_abstract_type_test.test | RUN | 0.089225 | 0.211147 | 0.278447 | 0.001204 | 0.001222 | 0.001098 |
| remove_volatile_test.test | RUN | 0.218541 | 0.833023 | 1.752890 | 0.001149 | 0.001416 | 0.001101 |
| remove_reference_test.test | RUN | 0.217913 | 0.878868 | 1.789079 | 0.001188 | 0.001209 | 0.001147 |
| remove_pointer_test.test | RUN | 0.231245 | 0.907954 | 1.908092 | 0.001262 | 0.001189 | 0.001224 |
| remove_extent_test.test | RUN | 0.220864 | 0.881502 | 1.791472 | 0.001128 | 0.001369 | 0.001219 |
| remove_cv_test.test | RUN | 0.229345 | 0.870487 | 1.830717 | 0.001072 | 0.001408 | 0.001290 |
| remove_cv_ref_test.test | RUN | 0.476465 | 2.146450 | 4.503238 | 0.001101 | 0.001108 | 0.001044 |
| remove_const_test.test | RUN | 0.222569 | 0.827994 | 1.691539 | 0.001405 | 0.001336 | 0.001241 |
| remove_bounds_test.test | RUN | 0.229402 | 0.891003 | 1.850616 | 0.001137 | 0.001237 | 0.001005 |
| remove_all_extents_test.test | RUN | 0.233140 | 0.857256 | 1.820083 | 0.001180 | 0.001298 | 0.000978 |
| rank_test.test | RUN | 0.085652 | 0.221883 | 0.285316 | 0.001096 | 0.001158 | 0.001060 |
| promote_mpl_test.test | RUN | 0.078679 | 0.194342 | 0.204172 | 0.000449 | 0.000503 | 0.001019 |
| promote_enum_test.test | RUN | 0.015256 | 0.046398 | 0.049800 | 0.000492 | 0.000524 | 0.001067 |
| promote_enum_msvc_bug_test.test | RUN | 0.014878 | 0.038356 | 0.042739 | 0.000444 | 0.000415 | 0.001177 |
| promote_basic_test.test | RUN | 0.018965 | 0.053037 | 0.048990 | 0.000421 | 0.000522 | 0.001129 |
| negation_test.test | RUN | 0.081708 | 0.207072 | 0.251382 | 0.001090 | 0.001150 | 0.001236 |
| mpl_interop_test3.test | RUN | 0.072152 | 0.181367 | 0.195652 | 0.000401 | 0.000389 | 0.001090 |
| mpl_interop_test2.test | RUN | 0.023478 | 0.051119 | 0.054201 | 0.000485 | 0.000491 | 0.000944 |
| mpl_interop_test1.test | RUN | 0.013169 | 0.036836 | 0.036419 | 0.000462 | 0.000485 | 0.000805 |
| make_void_test.test | RUN | 0.085069 | 0.206436 | 0.295931 | 0.001154 | 0.001294 | 0.001128 |
| make_unsigned_test.test | RUN | 0.101347 | 0.285714 | 0.415886 | 0.001132 | 0.001049 | 0.000945 |
| make_signed_test.test | RUN | 0.099295 | 0.285639 | 0.394788 | 0.001100 | 0.001219 | 0.001073 |
| is_volatile_test.test | RUN | 0.093196 | 0.235110 | 0.330920 | 0.001001 | 0.001141 | 0.001183 |
| is_void_test.test | RUN | 0.088163 | 0.225328 | 0.325029 | 0.001228 | 0.001231 | 0.001047 |
| is_virtual_base_of_test.test | RUN | 0.101765 | 0.284778 | 0.434248 | 0.001130 | 0.001178 | 0.001159 |
| is_unsigned_test.test | RUN | 0.090295 | 0.229082 | 0.310940 | 0.001044 | 0.001163 | 0.001173 |
| is_unscoped_enum_test.test | RUN | 0.090555 | 0.211971 | 0.268008 | 0.001063 | 0.001139 | 0.001114 |
| is_union_test.test | RUN | 0.095723 | 0.262129 | 0.392939 | 0.001171 | 0.001286 | 0.001079 |
| is_unbounded_array_test.test | RUN | 0.085733 | 0.224007 | 0.296903 | 0.000950 | 0.001179 | 0.001095 |
| is_trivially_copyable_test.test | RUN | 0.142563 | 0.457714 | 0.763608 | 0.001075 | 0.001250 | 0.001215 |
| is_swappable_test.test | RUN | 0.116081 | 0.341269 | 0.565203 | 0.000995 | 0.001297 | 0.001147 |
| is_stateless_test.test | RUN | 0.129694 | 0.400266 | 0.649755 | 0.001155 | 0.001427 | 0.001198 |
| is_signed_test.test | RUN | 0.088132 | 0.232164 | 0.316193 | 0.001317 | 0.001297 | 0.001178 |
| is_scoped_enum_test.test | RUN | 0.085893 | 0.210625 | 0.284868 | 0.001119 | 0.001295 | 0.001114 |
| is_scalar_test.test | RUN | 0.112206 | 0.371866 | 0.579986 | 0.001074 | 0.001233 | 0.000853 |
| is_same_test.test | RUN | 0.089564 | 0.226828 | 0.288383 | 0.001276 | 0.001180 | 0.001121 |
| is_rvalue_reference_test.test | RUN | 0.092203 | 0.246705 | 0.349385 | 0.001204 | 0.001413 | 0.001335 |
| is_reference_test.test | RUN | 0.093363 | 0.251504 | 0.341701 | 0.001169 | 0.001091 | 0.001198 |
| is_polymorphic_test.test | RUN | 0.097567 | 0.263820 | 0.374110 | 0.001108 | 0.001164 | 0.001144 |
| is_pointer_test.test | RUN | 0.094413 | 0.260061 | 0.362356 | 0.001162 | 0.001083 | 0.001252 |
| is_pod_test.test | RUN | 0.120917 | 0.407427 | 0.661971 | 0.001189 | 0.001206 | 0.001128 |
| is_object_test.test | RUN | 0.085266 | 0.220828 | 0.290394 | 0.001131 | 0.001244 | 0.001117 |
| is_nothrow_swappable_test.test | RUN | 0.127386 | 0.389006 | 0.627587 | 0.001144 | 0.001334 | 0.001075 |
| is_nothrow_move_constructible_test.test | RUN | 0.118061 | 0.395752 | 0.670131 | 0.001131 | 0.001470 | 0.001231 |
| is_nothrow_move_assignable_test.test | RUN | 0.121824 | 0.416400 | 0.640875 | 0.001017 | 0.001130 | 0.001186 |
| is_noncopyable_test.test | RUN | 0.084934 | 0.224204 | 0.291670 | 0.001177 | 0.001394 | 0.001262 |
| is_member_pointer_test.test | RUN | 0.088125 | 0.225903 | 0.295662 | 0.000996 | 0.001284 | 0.001113 |
| is_member_obj_test.test | RUN | 0.088643 | 0.227342 | 0.308479 | 0.001373 | 0.001152 | 0.001102 |
| is_member_func_test.test | RUN | 0.090582 | 0.238926 | 0.329877 | 0.001247 | 0.001454 | 0.001108 |
| is_lvalue_reference_test.test | RUN | 0.092561 | 0.253617 | 0.348469 | 0.001193 | 0.001147 | 0.001080 |
| is_list_constructible_test.test | RUN | 0.107117 | 0.295873 | 0.393608 | 0.000831 | 0.001398 | 0.001153 |
| is_integral_test.test | RUN | 0.106647 | 0.342964 | 0.548121 | 0.001170 | 0.001092 | 0.001111 |
| is_fundamental_test.test | RUN | 0.111496 | 0.353287 | 0.564573 | 0.001101 | 0.001202 | 0.001045 |
| is_function_test.test | RUN | 0.089136 | 0.238563 | 0.328359 | 0.001015 | 0.001203 | 0.001344 |
| is_floating_point_test.test | RUN | 0.091338 | 0.256753 | 0.367616 | 0.001003 | 0.001107 | 0.000992 |
| is_float_test.test | RUN | 0.092977 | 0.255069 | 0.364945 | 0.001101 | 0.001303 | 0.001071 |
| is_final_test.test | RUN | 0.091673 | 0.258390 | 0.371609 | 0.001144 | 0.001068 | 0.001292 |
| is_enum_test.test | RUN | 0.085128 | 0.217808 | 0.283939 | 0.001133 | 0.001084 | 0.000906 |
| is_empty_test.test | RUN | 0.093729 | 0.234777 | 0.331283 | 0.001001 | 0.001171 | 0.000983 |
| is_detected_test.test | RUN | 0.083665 | 0.197472 | 0.264411 | 0.001279 | 0.001286 | 0.000999 |
| is_detected_exact_test.test | RUN | 0.083706 | 0.206469 | 0.263358 | 0.001263 | 0.001127 | 0.001055 |
| is_destructible_test.test | RUN | 0.119764 | 0.390357 | 0.652194 | 0.001095 | 0.001324 | 0.001276 |
| is_default_constr_test.test | RUN | 0.121245 | 0.404805 | 0.654805 | 0.001095 | 0.001134 | 0.001075 |
| is_copy_constructible_test.test | RUN | 0.126885 | 0.427348 | 0.712722 | 0.001141 | 0.001230 | 0.000853 |
| is_copy_assignable_test.test | RUN | 0.128598 | 0.423581 | 0.708278 | 0.001151 | 0.001178 | 0.001169 |
| is_convertible_test.test | RUN | 0.119887 | 0.375398 | 0.577245 | 0.001012 | 0.001268 | 0.001122 |
| is_constructible_test.test | RUN | 0.098542 | 0.274282 | 0.410101 | 0.001087 | 0.001283 | 0.001233 |
| is_const_test.test | RUN | 0.087017 | 0.242864 | 0.325427 | 0.001115 | 0.001174 | 0.001088 |
| is_compound_test.test | RUN | 0.083980 | 0.206314 | 0.265686 | 0.001182 | 0.001135 | 0.001067 |
| is_complex_test.test | RUN | 0.113102 | 0.277323 | 0.377321 | 0.001175 | 0.001312 | 0.001072 |
| is_complete_test.test | RUN | 0.099327 | 0.281951 | 0.415832 | 0.001120 | 0.001027 | 0.001080 |
| is_class_test.test | RUN | 0.090724 | 0.247407 | 0.344852 | 0.001100 | 0.001150 | 0.000969 |
| is_bounded_array_test.test | RUN | 0.084768 | 0.226104 | 0.304950 | 0.001090 | 0.001324 | 0.001024 |
| is_base_of_test.test | RUN | 0.089833 | 0.248864 | 0.352838 | 0.001013 | 0.001364 | 0.001248 |
| is_base_and_derived_test.test | RUN | 0.090152 | 0.243823 | 0.343097 | 0.000952 | 0.001060 | 0.001217 |
| is_assignable_test.test | RUN | 0.111007 | 0.344676 | 0.540849 | 0.001425 | 0.001070 | 0.001042 |
| is_array_test.test | RUN | 0.089239 | 0.233443 | 0.323300 | 0.000986 | 0.001260 | 0.001142 |
| is_arithmetic_test.test | RUN | 0.107827 | 0.349156 | 0.572018 | 0.001108 | 0.001377 | 0.001341 |
| is_abstract_test.test | RUN | 0.201543 | 0.947181 | 1.988046 | 0.001033 | 0.001270 | 0.001416 |
| integral_constant_test.test | RUN | 0.013099 | 0.036959 | 0.040751 | 0.000432 | 0.000498 | 0.001046 |
| has_virtual_destructor_test.test | RUN | 0.098637 | 0.274557 | 0.406394 | 0.001320 | 0.001472 | 0.001144 |
| has_unary_plus_test.test | RUN | 0.184852 | 0.981584 | 1.434198 | 0.001199 | 0.001390 | 0.001258 |
| has_unary_minus_test.test | RUN | 0.179809 | 0.954866 | 1.429986 | 0.001191 | 0.001347 | 0.001198 |
| has_trivial_move_constructor_test.test | RUN | 0.122645 | 0.419919 | 0.684520 | 0.001082 | 0.001257 | 0.001366 |
| has_trivial_move_assign_test.test | RUN | 0.129427 | 0.403493 | 0.678826 | 0.001141 | 0.001442 | 0.001324 |
| has_trivial_destructor_test.test | RUN | 0.125337 | 0.410770 | 0.672628 | 0.001126 | 0.001344 | 0.001330 |
| has_trivial_copy_test.test | RUN | 0.125328 | 0.441377 | 0.715259 | 0.001194 | 0.001320 | 0.001389 |
| has_trivial_constr_test.test | RUN | 0.125745 | 0.438114 | 0.714185 | 0.000962 | 0.001495 | 0.001196 |
| has_trivial_assign_test.test | RUN | 0.125950 | 0.437554 | 0.705976 | 0.001216 | 0.001490 | 0.001242 |
| has_right_shift_test.test | RUN | 0.188949 | 0.810509 | 1.563664 | 0.001158 | 0.001146 | 0.001188 |
| has_right_shift_assign_test.test | RUN | 0.181746 | 0.761295 | 1.437596 | 0.001065 | 0.001326 | 0.001076 |
| has_prefix_classes3_test.test | RUN | 0.132851 | 0.444854 | 0.739044 | 0.001285 | 0.001283 | 0.001155 |
| has_prefix_classes2_test.test | RUN | 0.137364 | 0.443158 | 0.698501 | 0.001076 | 0.001332 | 0.001186 |
| has_prefix_classes1_test.test | RUN | 0.134189 | 0.442719 | 0.675055 | 0.001124 | 0.001386 | 0.001213 |
| has_prefix_classes0_test.test | RUN | 0.131309 | 0.448006 | 0.725472 | 0.001026 | 0.001113 | 0.001123 |
| has_pre_increment_test.test | RUN | 0.176278 | 0.971507 | 1.425376 | 0.001031 | 0.001130 | 0.001152 |
| has_pre_decrement_test.test | RUN | 0.182728 | 0.988349 | 1.415072 | 0.001163 | 0.001227 | 0.001145 |
| has_postfix_classes3_test.test | RUN | 0.135069 | 0.443001 | 0.738797 | 0.001236 | 0.001135 | 0.001314 |
| has_postfix_classes2_test.test | RUN | 0.132373 | 0.449080 | 0.719746 | 0.001050 | 0.001337 | 0.001325 |
| has_postfix_classes1_test.test | RUN | 0.138128 | 0.454248 | 0.727175 | 0.001091 | 0.001171 | 0.001134 |
| has_postfix_classes0_test.test | RUN | 0.132698 | 0.456369 | 0.710274 | 0.001128 | 0.001255 | 0.001086 |
| has_post_increment_test.test | RUN | 0.181995 | 0.968636 | 1.455244 | 0.001198 | 0.001232 | 0.001302 |
| has_post_decrement_test.test | RUN | 0.180905 | 0.979644 | 1.452506 | 0.001046 | 0.001402 | 0.001184 |
| has_plus_test.test | RUN | 0.185128 | 0.750576 | 1.448049 | 0.001038 | 0.001285 | 0.001291 |
| has_plus_assign_test.test | RUN | 0.193393 | 0.759561 | 1.452923 | 0.001071 | 0.001238 | 0.001115 |
| has_operator_new_test.test | RUN | 0.128885 | 0.392205 | 0.654306 | 0.000956 | 0.001310 | 0.001051 |
| has_nothrow_destructor_test.test | RUN | 0.125052 | 0.430721 | 0.716030 | 0.001183 | 0.001346 | 0.001081 |
| has_nothrow_copy_test.test | RUN | 0.122529 | 0.417508 | 0.649496 | 0.001044 | 0.001274 | 0.001178 |
| has_nothrow_constr_test.test | RUN | 0.120642 | 0.404886 | 0.659940 | 0.001055 | 0.001188 | 0.001191 |
| has_nothrow_assign_test.test | RUN | 0.118427 | 0.409020 | 0.658127 | 0.001067 | 0.001429 | 0.001092 |
| has_not_equal_to_test.test | RUN | 0.181707 | 0.983316 | 1.456072 | 0.001083 | 0.001129 | 0.001214 |
| has_negate_test.test | RUN | 0.176858 | 0.736544 | 1.368996 | 0.001084 | 0.001243 | 0.001203 |
| has_multiplies_test.test | RUN | 0.182918 | 0.770278 | 1.457114 | 0.001160 | 0.001283 | 0.001217 |
| has_multiplies_assign_test.test | RUN | 0.184605 | 0.768005 | 1.457245 | 0.001141 | 0.001424 | 0.001042 |
| has_modulus_test.test | RUN | 0.183709 | 0.760561 | 1.430903 | 0.001105 | 0.001402 | 0.001236 |
| has_modulus_assign_test.test | RUN | 0.182425 | 0.748747 | 1.489600 | 0.001080 | 0.001316 | 0.001109 |
| has_minus_test.test | RUN | 0.190673 | 0.767447 | 1.410329 | 0.001173 | 0.001155 | 0.001014 |
| has_minus_assign_test.test | RUN | 0.190141 | 0.768586 | 1.473053 | 0.001286 | 0.001325 | 0.001049 |
| has_logical_or_test.test | RUN | 0.183425 | 0.757028 | 1.404639 | 0.001143 | 0.001062 | 0.001245 |
| has_logical_not_test.test | RUN | 0.180173 | 0.727650 | 1.397729 | 0.001109 | 0.001003 | 0.001202 |
| has_logical_and_test.test | RUN | 0.187336 | 0.765976 | 1.468576 | 0.001365 | 0.001316 | 0.001161 |
| has_less_test.test | RUN | 0.185698 | 0.964753 | 1.371999 | 0.001135 | 0.001409 | 0.001113 |
| has_less_equal_test.test | RUN | 0.185141 | 0.961655 | 1.413322 | 0.001185 | 0.001284 | 0.001178 |
| has_left_shift_test.test | RUN | 0.206282 | 0.955271 | 1.814612 | 0.001155 | 0.001313 | 0.001186 |
| has_left_shift_assign_test.test | RUN | 0.186920 | 0.752780 | 1.406120 | 0.001167 | 0.001258 | 0.001415 |
| has_greater_test.test | RUN | 0.183990 | 0.960272 | 1.473849 | 0.001285 | 0.001306 | 0.001069 |
| has_greater_equal_test.test | RUN | 0.181896 | 0.968322 | 1.419393 | 0.001210 | 0.001329 | 0.001113 |
| has_equal_to_test.test | RUN | 0.185889 | 0.959004 | 1.421499 | 0.001153 | 0.001407 | 0.001186 |
| has_divides_test.test | RUN | 0.184632 | 0.760089 | 1.471267 | 0.001191 | 0.001426 | 0.001073 |
| has_divides_assign_test.test | RUN | 0.183583 | 0.741253 | 1.471416 | 0.001255 | 0.001416 | 0.000958 |
| has_dereference_test.test | RUN | 0.179481 | 0.757412 | 1.343310 | 0.001111 | 0.001303 | 0.001081 |
| has_complement_test.test | RUN | 0.178813 | 0.970789 | 1.387346 | 0.001184 | 0.001422 | 0.001186 |
| has_bit_xor_test.test | RUN | 0.185766 | 0.756463 | 1.474482 | 0.001106 | 0.001488 | 0.001184 |
| has_bit_xor_assign_test.test | RUN | 0.182512 | 0.751173 | 1.472061 | 0.001157 | 0.001304 | 0.001112 |
| has_bit_or_test.test | RUN | 0.180348 | 0.746676 | 1.359674 | 0.001238 | 0.001295 | 0.001174 |
| has_bit_or_assign_test.test | RUN | 0.183640 | 0.769473 | 1.449611 | 0.001060 | 0.001352 | 0.001291 |
| has_bit_and_test.test | RUN | 0.182971 | 0.752022 | 1.442368 | 0.001089 | 0.001237 | 0.001072 |
| has_bit_and_assign_test.test | RUN | 0.185759 | 0.756763 | 1.402770 | 0.001182 | 0.001477 | 0.001107 |
| has_binary_classes9_test.test | RUN | 0.197010 | 0.892875 | 1.594832 | 0.001256 | 0.001453 | 0.001095 |
| has_binary_classes8_test.test | RUN | 0.204245 | 0.914656 | 1.643560 | 0.001159 | 0.001108 | 0.000947 |
| has_binary_classes7_test.test | RUN | 0.201044 | 0.891511 | 1.645356 | 0.001061 | 0.001126 | 0.001018 |
| has_binary_classes6_test.test | RUN | 0.200884 | 0.866204 | 1.611542 | 0.001173 | 0.001422 | 0.001069 |
| has_binary_classes5_test.test | RUN | 0.199181 | 0.886440 | 1.606169 | 0.001184 | 0.001508 | 0.001144 |
| has_binary_classes4_test.test | RUN | 0.201904 | 0.906459 | 1.648130 | 0.001221 | 0.001183 | 0.001136 |
| has_binary_classes3_test.test | RUN | 0.197717 | 0.907728 | 1.639655 | 0.001114 | 0.001223 | 0.001014 |
| has_binary_classes2_test.test | RUN | 0.206739 | 0.921123 | 1.579489 | 0.001311 | 0.001424 | 0.001055 |
| has_binary_classes1_test.test | RUN | 0.200660 | 0.895011 | 1.601026 | 0.001169 | 0.001189 | 0.001210 |
| has_binary_classes0_test.test | RUN | 0.201281 | 0.913962 | 1.579962 | 0.001065 | 0.001253 | 0.001056 |
| function_traits_test.test | RUN | 0.091545 | 0.245408 | 0.336228 | 0.001171 | 0.001338 | 0.001289 |
| floating_point_promotion_test.test | RUN | 0.089197 | 0.233748 | 0.314801 | 0.001115 | 0.001214 | 0.001078 |
| extent_test.test | RUN | 0.090310 | 0.237117 | 0.337000 | 0.001162 | 0.001457 | 0.001118 |
| enable_if_test.test | RUN | 0.085470 | 0.209669 | 0.263837 | 0.001112 | 0.001260 | 0.001094 |
| disjunction_test.test | RUN | 0.086988 | 0.214293 | 0.271919 | 0.001166 | 0.001206 | 0.001097 |
| detected_test.test | RUN | 0.086690 | 0.201844 | 0.250912 | 0.001080 | 0.001382 | 0.001180 |
| detected_or_test.test | RUN | 0.087449 | 0.214401 | 0.266538 | 0.001126 | 0.001401 | 0.001018 |
| decay_test.test | RUN | 0.222349 | 0.827388 | 1.534742 | 0.001250 | 0.001398 | 0.001106 |
| cxx14_aliases_test.test | RUN | 0.139133 | 0.307798 | 0.413952 | 0.001148 | 0.001342 | 0.000939 |
| copy_reference_test.test | RUN | 0.086799 | 0.211669 | 0.274612 | 0.001117 | 0.001214 | 0.001139 |
| copy_cv_test.test | RUN | 0.092515 | 0.220934 | 0.305363 | 0.001043 | 0.001353 | 0.001001 |
| copy_cv_ref_test.test | RUN | 0.126888 | 0.368017 | 0.629606 | 0.001024 | 0.001161 | 0.001058 |
| conjunction_test.test | RUN | 0.085786 | 0.213990 | 0.279078 | 0.001123 | 0.001348 | 0.001190 |
| conditional_test.test | RUN | 0.084693 | 0.207478 | 0.274034 | 0.001155 | 0.001437 | 0.001144 |
| common_type_test.test | RUN | 0.116142 | 0.324622 | 0.503181 | 0.000911 | 0.001228 | 0.001076 |
| common_type_sfinae_test.test | RUN | 0.084148 | 0.199858 | 0.248780 | 0.001134 | 0.001378 | 0.001079 |
| common_type_sfinae2_test.test | RUN | 0.084815 | 0.213212 | 0.275444 | 0.001134 | 0.001100 | 0.000999 |
| common_type_6_test.test | RUN | 0.088874 | 0.209848 | 0.284065 | 0.001035 | 0.001108 | 0.001149 |
| common_type_5_test.test | RUN | 0.092479 | 0.215578 | 0.281163 | 0.001067 | 0.001314 | 0.001302 |
| common_type_4_test.test | RUN | 0.095074 | 0.237198 | 0.335265 | 0.001087 | 0.001256 | 0.001086 |
| common_type_3_test.test | RUN | 0.085191 | 0.196062 | 0.255179 | 0.001131 | 0.001212 | 0.001075 |
| common_type_2_test.test | RUN | 0.111955 | 0.312355 | 0.507348 | 0.001192 | 0.001345 | 0.001069 |
| alignment_of_test.test | RUN | 0.095878 | 0.258376 | 0.330374 | 0.001061 | 0.001234 | 0.001160 |
| alignment_of_a2_test.test | RUN | 0.091589 | 0.257266 | 0.338427 | 0.001308 | 0.001223 | 0.001154 |
| aligned_storage_test.test | RUN | 0.093644 | 0.253769 | 0.314926 | 0.001248 | 0.001217 | 0.001198 |
| aligned_storage_empy_test.test | RUN | 0.107111 | 0.285397 | 0.423634 | 0.001103 | 0.001341 | 0.001214 |
| aligned_storage_a2_test.test | RUN | 0.095916 | 0.250518 | 0.321936 | 0.001018 | 0.001469 | 0.001215 |
| add_volatile_test.test | RUN | 0.198580 | 0.724025 | 1.509200 | 0.001193 | 0.001209 | 0.001275 |
| add_rvalue_reference_test.test | RUN | 0.223888 | 0.812637 | 1.700413 | 0.001193 | 0.001086 | 0.001345 |
| add_reference_test.test | RUN | 0.217373 | 0.803573 | 1.637629 | 0.001093 | 0.001340 | 0.001230 |
| add_pointer_test.test | RUN | 0.139250 | 0.457487 | 0.882440 | 0.001128 | 0.001208 | 0.001280 |
| add_lvalue_reference_test.test | RUN | 0.220320 | 0.794132 | 1.698901 | 0.001164 | 0.001155 | 0.001372 |
| add_cv_test.test | RUN | 0.203762 | 0.739374 | 1.592755 | 0.001176 | 0.001031 | 0.001258 |
| add_const_test.test | RUN | 0.206543 | 0.732489 | 1.543398 | 0.001113 | 0.001109 | 0.001210 |
| is_virtual_base_of_fail.test | COMPILE_FAIL | 0.079553 | 0.196455 | 0.255756 | — | — | — |
| is_stateless_fail.test | COMPILE_FAIL | 0.087336 | 0.199869 | 0.265241 | — | — | — |
| is_polymorphic_fail.test | COMPILE_FAIL | 0.080216 | 0.188564 | 0.249090 | — | — | — |
| is_nothrow_move_constructible_fail.test | COMPILE_FAIL | 0.077143 | 0.190692 | 0.254060 | — | — | — |
| is_nothrow_move_assignable_fail.test | COMPILE_FAIL | 0.081090 | 0.190098 | 0.250479 | — | — | — |
| is_list_constructible_fail.test | COMPILE_FAIL | 0.081118 | 0.189309 | 0.238096 | — | — | — |
| is_empty_fail.test | COMPILE_FAIL | 0.081621 | 0.189427 | 0.244003 | — | — | — |
| is_destructible_fail.test | COMPILE_FAIL | 0.079604 | 0.189998 | 0.245116 | — | — | — |
| is_default_constructible_fail.test | COMPILE_FAIL | 0.080178 | 0.188107 | 0.250520 | — | — | — |
| is_copy_constructible_fail.test | COMPILE_FAIL | 0.080016 | 0.188259 | 0.246294 | — | — | — |
| is_copy_assignable_fail.test | COMPILE_FAIL | 0.080497 | 0.185631 | 0.243321 | — | — | — |
| is_convertible_fail.test | COMPILE_FAIL | 0.080225 | 0.191062 | 0.247838 | — | — | — |
| is_convertible2_fail.test | COMPILE_FAIL | 0.079934 | 0.188875 | 0.247686 | — | — | — |
| is_constructible_fail.test | COMPILE_FAIL | 0.080088 | 0.189707 | 0.250181 | — | — | — |
| is_base_of_fail.test | COMPILE_FAIL | 0.079570 | 0.186560 | 0.240712 | — | — | — |
| is_assignable_fail.test | COMPILE_FAIL | 0.080267 | 0.189422 | 0.245796 | — | — | — |
| has_nothrow_destruct_fail.test | COMPILE_FAIL | 0.080209 | 0.189487 | 0.248062 | — | — | — |
| has_nothrow_copy_fail.test | COMPILE_FAIL | 0.080267 | 0.190765 | 0.246032 | — | — | — |
| has_nothrow_cons_fail.test | COMPILE_FAIL | 0.080541 | 0.189965 | 0.245621 | — | — | — |
| has_nothrow_assign_fail.test | COMPILE_FAIL | 0.079845 | 0.190257 | 0.242665 | — | — | — |
| common_type_fail.test | COMPILE_FAIL | 0.081015 | 0.189456 | 0.245820 | — | — | — |
| common_type2_fail.test | COMPILE_FAIL | 0.080421 | 0.188910 | 0.246161 | — | — | — |
| has_nothrow_assign_test_no_intrinsics.test | RUN | 0.125338 | 0.399596 | 0.670707 | 0.001264 | 0.001252 | 0.001171 |
| has_nothrow_constr_test_no_intrinsics.test | RUN | 0.119635 | 0.406071 | 0.668655 | 0.001097 | 0.001237 | 0.001333 |
| has_nothrow_copy_test_no_intrinsics.test | RUN | 0.122741 | 0.406671 | 0.668643 | 0.001115 | 0.000920 | 0.000847 |
| is_nothrow_move_assignable_test_no_intrinsics.test | RUN | 0.122700 | 0.400287 | 0.634492 | 0.000745 | 0.001198 | 0.000834 |
| is_nothrow_move_constructible_test_no_intrinsics.test | RUN | 0.080338 | 0.324940 | 0.441737 | 0.000872 | 0.000862 | 0.000804 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.994× | 0.988×, 1.000× | 0.999× |
| clang | 1.025× | 1.026×, 1.024× | 1.010× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1363 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/43801643681).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| add_const_test.test | 10 | 0.000775s | 0.000776s | 0.000785s | byte equality observed |
| add_cv_test.test | 10 | 0.000771s | 0.000747s | 0.000774s | byte equality observed |
| add_lvalue_reference_test.test | 10 | 0.000786s | 0.000779s | 0.000779s | byte equality observed |
| add_pointer_test.test | 10 | 0.000780s | 0.000782s | 0.000786s | byte equality observed |
| add_reference_test.test | 10 | 0.000770s | 0.000757s | 0.000765s | byte equality observed |
| add_rvalue_reference_test.test | 10 | 0.000774s | 0.000784s | 0.000790s | byte equality observed |
| add_volatile_test.test | 10 | 0.000802s | 0.000801s | 0.000775s | byte equality observed |
| aligned_storage_a2_test.test | 10 | 0.000835s | 0.000819s | 0.000836s | byte equality observed |
| aligned_storage_empy_test.test | 10 | 0.000792s | 0.000789s | 0.000786s | byte equality observed |
| aligned_storage_test.test | 10 | 0.000815s | 0.000819s | 0.000832s | byte equality observed |
| alignment_of_a2_test.test | 10 | 0.000781s | 0.000813s | 0.000803s | byte equality observed |
| alignment_of_test.test | 10 | 0.000749s | 0.000767s | 0.000774s | byte equality observed |
| common_type_2_test.test | 10 | 0.000762s | 0.000764s | 0.000789s | byte equality observed |
| common_type_3_test.test | 10 | 0.000768s | 0.000778s | 0.000812s | byte equality observed |
| common_type_4_test.test | 10 | 0.000763s | 0.000781s | 0.000799s | byte equality observed |
| common_type_5_test.test | 10 | 0.000771s | 0.000795s | 0.000793s | byte equality observed |
| common_type_6_test.test | 10 | 0.000784s | 0.000804s | 0.000789s | byte equality observed |
| common_type_sfinae2_test.test | 10 | 0.000780s | 0.000772s | 0.000776s | byte equality observed |
| common_type_sfinae_test.test | 10 | 0.000779s | 0.000783s | 0.000782s | byte equality observed |
| common_type_test.test | 10 | 0.000776s | 0.000795s | 0.000763s | byte equality observed |
| conditional_test.test | 10 | 0.000788s | 0.000795s | 0.000754s | byte equality observed |
| conjunction_test.test | 10 | 0.000755s | 0.000781s | 0.000750s | byte equality observed |
| copy_cv_ref_test.test | 10 | 0.000778s | 0.000773s | 0.000770s | byte equality observed |
| copy_cv_test.test | 10 | 0.000767s | 0.000793s | 0.000760s | byte equality observed |
| copy_reference_test.test | 10 | 0.000770s | 0.000769s | 0.000760s | byte equality observed |
| cxx14_aliases_test.test | 10 | 0.000764s | 0.000741s | 0.000758s | byte equality observed |
| decay_test.test | 10 | 0.000774s | 0.000783s | 0.000765s | byte equality observed |
| detected_or_test.test | 10 | 0.000749s | 0.000769s | 0.000754s | byte equality observed |
| detected_test.test | 10 | 0.000771s | 0.000756s | 0.000763s | byte equality observed |
| disjunction_test.test | 10 | 0.000770s | 0.000782s | 0.000779s | byte equality observed |
| enable_if_test.test | 10 | 0.000774s | 0.000778s | 0.000760s | byte equality observed |
| extent_test.test | 10 | 0.000785s | 0.000765s | 0.000778s | byte equality observed |
| floating_point_promotion_test.test | 10 | 0.000780s | 0.000777s | 0.000769s | byte equality observed |
| function_traits_test.test | 10 | 0.000782s | 0.000789s | 0.000757s | byte equality observed |
| has_binary_classes0_test.test | 10 | 0.000764s | 0.000761s | 0.000764s | byte equality observed |
| has_binary_classes1_test.test | 10 | 0.000767s | 0.000780s | 0.000758s | byte equality observed |
| has_binary_classes2_test.test | 10 | 0.000777s | 0.000799s | 0.000770s | byte equality observed |
| has_binary_classes3_test.test | 10 | 0.000752s | 0.000790s | 0.000782s | byte equality observed |
| has_binary_classes4_test.test | 10 | 0.000749s | 0.000785s | 0.000776s | byte equality observed |
| has_binary_classes5_test.test | 10 | 0.000751s | 0.000770s | 0.000765s | byte equality observed |
| has_binary_classes6_test.test | 10 | 0.000748s | 0.000768s | 0.000768s | byte equality observed |
| has_binary_classes7_test.test | 10 | 0.000769s | 0.000748s | 0.000797s | byte equality observed |
| has_binary_classes8_test.test | 10 | 0.000768s | 0.000758s | 0.000798s | byte equality observed |
| has_binary_classes9_test.test | 10 | 0.000775s | 0.000749s | 0.000784s | byte equality observed |
| has_bit_and_assign_test.test | 10 | 0.000760s | 0.000771s | 0.000764s | byte equality observed |
| has_bit_and_test.test | 10 | 0.000780s | 0.000777s | 0.000782s | byte equality observed |
| has_bit_or_assign_test.test | 10 | 0.000783s | 0.000761s | 0.000780s | byte equality observed |
| has_bit_or_test.test | 10 | 0.000799s | 0.000758s | 0.000782s | byte equality observed |
| has_bit_xor_assign_test.test | 10 | 0.000788s | 0.000760s | 0.000785s | byte equality observed |
| has_bit_xor_test.test | 10 | 0.000805s | 0.000757s | 0.000791s | byte equality observed |
| has_complement_test.test | 10 | 0.000793s | 0.000761s | 0.000756s | byte equality observed |
| has_dereference_test.test | 10 | 0.000801s | 0.000763s | 0.000762s | byte equality observed |
| has_divides_assign_test.test | 10 | 0.000807s | 0.000763s | 0.000749s | byte equality observed |
| has_divides_test.test | 10 | 0.000758s | 0.000765s | 0.000768s | byte equality observed |
| has_equal_to_test.test | 10 | 0.000768s | 0.000761s | 0.000789s | byte equality observed |
| has_greater_equal_test.test | 10 | 0.000775s | 0.000805s | 0.000771s | byte equality observed |
| has_greater_test.test | 10 | 0.000774s | 0.000776s | 0.000777s | byte equality observed |
| has_left_shift_assign_test.test | 10 | 0.000767s | 0.000770s | 0.000756s | byte equality observed |
| has_left_shift_test.test | 10 | 0.000771s | 0.000778s | 0.000753s | byte equality observed |
| has_less_equal_test.test | 10 | 0.000798s | 0.000773s | 0.000766s | byte equality observed |
| has_less_test.test | 10 | 0.000789s | 0.000778s | 0.000762s | byte equality observed |
| has_logical_and_test.test | 10 | 0.000796s | 0.000782s | 0.000772s | byte equality observed |
| has_logical_not_test.test | 10 | 0.000781s | 0.000774s | 0.000795s | byte equality observed |
| has_logical_or_test.test | 10 | 0.000792s | 0.000776s | 0.000781s | byte equality observed |
| has_minus_assign_test.test | 10 | 0.000783s | 0.000797s | 0.000762s | byte equality observed |
| has_minus_test.test | 10 | 0.000769s | 0.000783s | 0.000775s | byte equality observed |
| has_modulus_assign_test.test | 10 | 0.000767s | 0.000767s | 0.000772s | byte equality observed |
| has_modulus_test.test | 10 | 0.000775s | 0.000777s | 0.000746s | byte equality observed |
| has_multiplies_assign_test.test | 10 | 0.000776s | 0.000758s | 0.000743s | byte equality observed |
| has_multiplies_test.test | 10 | 0.000770s | 0.000784s | 0.000759s | byte equality observed |
| has_negate_test.test | 10 | 0.000774s | 0.000768s | 0.000780s | byte equality observed |
| has_not_equal_to_test.test | 10 | 0.000779s | 0.000777s | 0.000744s | byte equality observed |
| has_nothrow_assign_test.test | 10 | 0.000783s | 0.000780s | 0.000778s | byte equality observed |
| has_nothrow_assign_test_no_intrinsics.test | 10 | 0.000759s | 0.000782s | 0.000794s | byte equality observed |
| has_nothrow_constr_test.test | 10 | 0.000763s | 0.000781s | 0.000800s | byte equality observed |
| has_nothrow_constr_test_no_intrinsics.test | 10 | 0.000771s | 0.000784s | 0.000774s | byte equality observed |
| has_nothrow_copy_test.test | 10 | 0.000790s | 0.000744s | 0.000780s | byte equality observed |
| has_nothrow_copy_test_no_intrinsics.test | 10 | 0.000784s | 0.000776s | 0.000743s | byte equality observed |
| has_nothrow_destructor_test.test | 10 | 0.000788s | 0.000774s | 0.000752s | byte equality observed |
| has_operator_new_test.test | 10 | 0.000774s | 0.000781s | 0.000758s | byte equality observed |
| has_plus_assign_test.test | 10 | 0.000784s | 0.000789s | 0.000771s | byte equality observed |
| has_plus_test.test | 10 | 0.000791s | 0.000744s | 0.000773s | byte equality observed |
| has_post_decrement_test.test | 10 | 0.000789s | 0.000767s | 0.000762s | byte equality observed |
| has_post_increment_test.test | 10 | 0.000769s | 0.000764s | 0.000763s | byte equality observed |
| has_postfix_classes0_test.test | 10 | 0.000787s | 0.000753s | 0.000779s | byte equality observed |
| has_postfix_classes1_test.test | 10 | 0.000787s | 0.000771s | 0.000777s | byte equality observed |
| has_postfix_classes2_test.test | 10 | 0.000787s | 0.000794s | 0.000760s | byte equality observed |
| has_postfix_classes3_test.test | 10 | 0.000780s | 0.000765s | 0.000778s | byte equality observed |
| has_pre_decrement_test.test | 10 | 0.000779s | 0.000786s | 0.000750s | byte equality observed |
| has_pre_increment_test.test | 10 | 0.000764s | 0.000739s | 0.000749s | byte equality observed |
| has_prefix_classes0_test.test | 10 | 0.000769s | 0.000767s | 0.000789s | byte equality observed |
| has_prefix_classes1_test.test | 10 | 0.000769s | 0.000775s | 0.000773s | byte equality observed |
| has_prefix_classes2_test.test | 10 | 0.000770s | 0.000792s | 0.000802s | byte equality observed |
| has_prefix_classes3_test.test | 10 | 0.000773s | 0.000779s | 0.000797s | byte equality observed |
| has_right_shift_assign_test.test | 10 | 0.000780s | 0.000792s | 0.000772s | byte equality observed |
| has_right_shift_test.test | 10 | 0.000777s | 0.000809s | 0.000782s | byte equality observed |
| has_trivial_assign_test.test | 10 | 0.000804s | 0.000806s | 0.000781s | byte equality observed |
| has_trivial_constr_test.test | 10 | 0.000796s | 0.000826s | 0.000833s | native test oracle; output varies |
| has_trivial_copy_test.test | 10 | 0.000802s | 0.000818s | 0.000817s | native test oracle; output varies |
| has_trivial_destructor_test.test | 10 | 0.000794s | 0.000796s | 0.000786s | byte equality observed |
| has_trivial_move_assign_test.test | 10 | 0.000752s | 0.000793s | 0.000741s | byte equality observed |
| has_trivial_move_constructor_test.test | 10 | 0.000762s | 0.000782s | 0.000749s | byte equality observed |
| has_unary_minus_test.test | 10 | 0.000782s | 0.000784s | 0.000746s | byte equality observed |
| has_unary_plus_test.test | 10 | 0.000790s | 0.000783s | 0.000779s | byte equality observed |
| has_virtual_destructor_test.test | 10 | 0.000791s | 0.000790s | 0.000795s | byte equality observed |
| integral_constant_test.test | 10 | 0.000364s | 0.000355s | 0.000757s | byte equality observed |
| is_abstract_test.test | 10 | 0.000759s | 0.000771s | 0.000758s | byte equality observed |
| is_arithmetic_test.test | 10 | 0.000775s | 0.000764s | 0.000764s | byte equality observed |
| is_array_test.test | 10 | 0.000778s | 0.000774s | 0.000795s | byte equality observed |
| is_assignable_test.test | 10 | 0.000787s | 0.000767s | 0.000806s | byte equality observed |
| is_base_and_derived_test.test | 10 | 0.000801s | 0.000771s | 0.000770s | byte equality observed |
| is_base_of_test.test | 10 | 0.000787s | 0.000775s | 0.000788s | byte equality observed |
| is_bounded_array_test.test | 10 | 0.000792s | 0.000758s | 0.000792s | byte equality observed |
| is_class_test.test | 10 | 0.000760s | 0.000769s | 0.000778s | byte equality observed |
| is_complete_test.test | 10 | 0.000784s | 0.000790s | 0.000760s | byte equality observed |
| is_complex_test.test | 10 | 0.000784s | 0.000757s | 0.000760s | byte equality observed |
| is_compound_test.test | 10 | 0.000774s | 0.000771s | 0.000761s | byte equality observed |
| is_const_test.test | 10 | 0.000772s | 0.000786s | 0.000747s | byte equality observed |
| is_constructible_test.test | 10 | 0.000781s | 0.000771s | 0.000783s | byte equality observed |
| is_convertible_test.test | 10 | 0.000767s | 0.000761s | 0.000806s | byte equality observed |
| is_copy_assignable_test.test | 10 | 0.000763s | 0.000765s | 0.000803s | byte equality observed |
| is_copy_constructible_test.test | 10 | 0.000770s | 0.000775s | 0.000759s | byte equality observed |
| is_default_constr_test.test | 10 | 0.000756s | 0.000774s | 0.000778s | byte equality observed |
| is_destructible_test.test | 10 | 0.000775s | 0.000760s | 0.000745s | byte equality observed |
| is_detected_exact_test.test | 10 | 0.000776s | 0.000767s | 0.000764s | byte equality observed |
| is_detected_test.test | 10 | 0.000776s | 0.000755s | 0.000767s | byte equality observed |
| is_empty_test.test | 10 | 0.000786s | 0.000774s | 0.000794s | byte equality observed |
| is_enum_test.test | 10 | 0.000768s | 0.000748s | 0.000787s | byte equality observed |
| is_final_test.test | 10 | 0.000775s | 0.000774s | 0.000770s | byte equality observed |
| is_float_test.test | 10 | 0.000769s | 0.000755s | 0.000774s | byte equality observed |
| is_floating_point_test.test | 10 | 0.000781s | 0.000746s | 0.000764s | byte equality observed |
| is_function_test.test | 10 | 0.000776s | 0.000768s | 0.000778s | byte equality observed |
| is_fundamental_test.test | 10 | 0.000788s | 0.000765s | 0.000802s | byte equality observed |
| is_integral_test.test | 10 | 0.000798s | 0.000791s | 0.000779s | byte equality observed |
| is_list_constructible_test.test | 10 | 0.000781s | 0.000804s | 0.000770s | byte equality observed |
| is_lvalue_reference_test.test | 10 | 0.000767s | 0.000774s | 0.000785s | byte equality observed |
| is_member_func_test.test | 10 | 0.000764s | 0.000776s | 0.000783s | byte equality observed |
| is_member_obj_test.test | 10 | 0.000802s | 0.000774s | 0.000788s | byte equality observed |
| is_member_pointer_test.test | 10 | 0.000800s | 0.000750s | 0.000787s | byte equality observed |
| is_noncopyable_test.test | 10 | 0.000807s | 0.000772s | 0.000807s | byte equality observed |
| is_nothrow_move_assignable_test.test | 10 | 0.000772s | 0.000799s | 0.000780s | byte equality observed |
| is_nothrow_move_assignable_test_no_intrinsics.test | 10 | 0.000768s | 0.000794s | 0.000808s | byte equality observed |
| is_nothrow_move_constructible_test.test | 10 | 0.000772s | 0.000770s | 0.000808s | byte equality observed |
| is_nothrow_move_constructible_test_no_intrinsics.test | 10 | 0.000775s | 0.000788s | 0.000756s | byte equality observed |
| is_nothrow_swappable_test.test | 10 | 0.000784s | 0.000783s | 0.000771s | byte equality observed |
| is_object_test.test | 10 | 0.000803s | 0.000808s | 0.000740s | byte equality observed |
| is_pod_test.test | 10 | 0.000770s | 0.000788s | 0.000748s | byte equality observed |
| is_pointer_test.test | 10 | 0.000775s | 0.000755s | 0.000768s | byte equality observed |
| is_polymorphic_test.test | 10 | 0.000773s | 0.000791s | 0.000760s | byte equality observed |
| is_reference_test.test | 10 | 0.000769s | 0.000793s | 0.000761s | byte equality observed |
| is_rvalue_reference_test.test | 10 | 0.000760s | 0.000749s | 0.000779s | byte equality observed |
| is_same_test.test | 10 | 0.000761s | 0.000761s | 0.000789s | byte equality observed |
| is_scalar_test.test | 10 | 0.000790s | 0.000763s | 0.000765s | byte equality observed |
| is_scoped_enum_test.test | 10 | 0.000805s | 0.000778s | 0.000752s | byte equality observed |
| is_signed_test.test | 10 | 0.000786s | 0.000788s | 0.000776s | byte equality observed |
| is_stateless_test.test | 10 | 0.000780s | 0.000769s | 0.000776s | byte equality observed |
| is_swappable_test.test | 10 | 0.000767s | 0.000794s | 0.000772s | byte equality observed |
| is_trivially_copyable_test.test | 10 | 0.000775s | 0.000808s | 0.000799s | byte equality observed |
| is_unbounded_array_test.test | 10 | 0.000769s | 0.000781s | 0.000762s | byte equality observed |
| is_union_test.test | 10 | 0.000765s | 0.000786s | 0.000769s | byte equality observed |
| is_unscoped_enum_test.test | 10 | 0.000784s | 0.000783s | 0.000779s | byte equality observed |
| is_unsigned_test.test | 10 | 0.000786s | 0.000795s | 0.000777s | byte equality observed |
| is_virtual_base_of_test.test | 10 | 0.000811s | 0.000794s | 0.000768s | byte equality observed |
| is_void_test.test | 10 | 0.000798s | 0.000785s | 0.000777s | byte equality observed |
| is_volatile_test.test | 10 | 0.000779s | 0.000792s | 0.000765s | byte equality observed |
| make_signed_test.test | 10 | 0.000771s | 0.000776s | 0.000757s | byte equality observed |
| make_unsigned_test.test | 10 | 0.000787s | 0.000792s | 0.000760s | byte equality observed |
| make_void_test.test | 10 | 0.000754s | 0.000776s | 0.000751s | byte equality observed |
| mpl_interop_test1.test | 10 | 0.000358s | 0.000366s | 0.000759s | byte equality observed |
| mpl_interop_test2.test | 10 | 0.000352s | 0.000364s | 0.000776s | byte equality observed |
| mpl_interop_test3.test | 10 | 0.000358s | 0.000349s | 0.000774s | byte equality observed |
| negation_test.test | 10 | 0.000768s | 0.000777s | 0.000773s | byte equality observed |
| promote_basic_test.test | 10 | 0.000358s | 0.000353s | 0.000759s | byte equality observed |
| promote_enum_msvc_bug_test.test | 10 | 0.000360s | 0.000350s | 0.000777s | byte equality observed |
| promote_enum_test.test | 10 | 0.000351s | 0.000352s | 0.000787s | byte equality observed |
| promote_mpl_test.test | 10 | 0.000350s | 0.000353s | 0.000805s | byte equality observed |
| rank_test.test | 10 | 0.000783s | 0.000777s | 0.000792s | byte equality observed |
| remove_all_extents_test.test | 10 | 0.000805s | 0.000782s | 0.000779s | byte equality observed |
| remove_bounds_test.test | 10 | 0.000787s | 0.000763s | 0.000792s | byte equality observed |
| remove_const_test.test | 10 | 0.000767s | 0.000761s | 0.000782s | byte equality observed |
| remove_cv_ref_test.test | 10 | 0.000771s | 0.000763s | 0.000768s | byte equality observed |
| remove_cv_test.test | 10 | 0.000794s | 0.000791s | 0.000779s | byte equality observed |
| remove_extent_test.test | 10 | 0.000756s | 0.000736s | 0.000784s | byte equality observed |
| remove_pointer_test.test | 10 | 0.000770s | 0.000779s | 0.000801s | byte equality observed |
| remove_reference_test.test | 10 | 0.000777s | 0.000768s | 0.000784s | byte equality observed |
| remove_volatile_test.test | 10 | 0.000775s | 0.000752s | 0.000783s | byte equality observed |
| tricky_abstract_type_test.test | 10 | 0.000787s | 0.000758s | 0.000814s | byte equality observed |
| tricky_add_pointer_test.test | 10 | 0.000800s | 0.000766s | 0.000803s | byte equality observed |
| tricky_function_type_test.test | 10 | 0.000807s | 0.000787s | 0.000791s | byte equality observed |
| tricky_incomplete_type_test.test | 10 | 0.000804s | 0.000776s | 0.000773s | byte equality observed |
| tricky_is_enum_test.test | 10 | 0.000796s | 0.000804s | 0.000773s | byte equality observed |
| tricky_partial_spec_test.test | 10 | 0.000778s | 0.000787s | 0.000762s | byte equality observed |
| tricky_rvalue_test.test | 10 | 0.000808s | 0.000798s | 0.000796s | byte equality observed |
| type_identity_test.test | 10 | 0.000778s | 0.000770s | 0.000800s | byte equality observed |
| type_traits_test.test | 10 | 0.000357s | 0.000352s | 0.000744s | byte equality observed |
| type_with_alignment_test.test | 10 | 0.000828s | 0.000824s | 0.000824s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/43801643681).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
