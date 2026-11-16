# libs/type_traits/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| type_with_alignment_test.test | RUN | 0.098254 | 0.275942 | 0.386187 | 0.001243 | 0.001247 | 0.001025 |
| type_traits_test.test | RUN | 0.134626 | 0.279710 | 0.379133 | 0.000440 | 0.000395 | 0.001027 |
| type_identity_test.test | RUN | 0.252189 | 0.940656 | 1.984359 | 0.001322 | 0.001252 | 0.001160 |
| tricky_rvalue_test.test | RUN | 0.091016 | 0.218567 | 0.301726 | 0.001270 | 0.001325 | 0.001078 |
| tricky_partial_spec_test.test | RUN | 0.106829 | 0.308562 | 0.478460 | 0.000986 | 0.001245 | 0.001143 |
| tricky_is_enum_test.test | RUN | 0.087821 | 0.202346 | 0.265952 | 0.001365 | 0.001170 | 0.001164 |
| tricky_incomplete_type_test.test | RUN | 0.142873 | 0.315663 | 0.426155 | 0.001265 | 0.001311 | 0.001165 |
| tricky_function_type_test.test | RUN | 0.119120 | 0.336877 | 0.506504 | 0.001311 | 0.001299 | 0.001188 |
| tricky_add_pointer_test.test | RUN | 0.168186 | 0.569274 | 1.116757 | 0.001269 | 0.001241 | 0.001151 |
| tricky_abstract_type_test.test | RUN | 0.089379 | 0.213556 | 0.281742 | 0.001298 | 0.001141 | 0.001296 |
| remove_volatile_test.test | RUN | 0.226115 | 0.829455 | 1.770535 | 0.001234 | 0.001269 | 0.001068 |
| remove_reference_test.test | RUN | 0.232887 | 0.861909 | 1.827560 | 0.001283 | 0.001430 | 0.001039 |
| remove_pointer_test.test | RUN | 0.249157 | 0.906888 | 1.918592 | 0.001356 | 0.001076 | 0.001133 |
| remove_extent_test.test | RUN | 0.236540 | 0.878196 | 1.824769 | 0.001295 | 0.001294 | 0.001153 |
| remove_cv_test.test | RUN | 0.234961 | 0.883298 | 1.832744 | 0.001241 | 0.001262 | 0.001074 |
| remove_cv_ref_test.test | RUN | 0.483062 | 2.164453 | 4.557186 | 0.001395 | 0.001201 | 0.001062 |
| remove_const_test.test | RUN | 0.224762 | 0.831966 | 1.728959 | 0.001530 | 0.001334 | 0.001120 |
| remove_bounds_test.test | RUN | 0.236421 | 0.887277 | 1.829920 | 0.001204 | 0.001309 | 0.001188 |
| remove_all_extents_test.test | RUN | 0.236540 | 0.862259 | 1.851430 | 0.001255 | 0.001239 | 0.001182 |
| rank_test.test | RUN | 0.089092 | 0.223328 | 0.279720 | 0.001343 | 0.001182 | 0.001128 |
| promote_mpl_test.test | RUN | 0.079598 | 0.197526 | 0.205543 | 0.000442 | 0.000455 | 0.000950 |
| promote_enum_test.test | RUN | 0.017788 | 0.045923 | 0.050010 | 0.000531 | 0.000539 | 0.001076 |
| promote_enum_msvc_bug_test.test | RUN | 0.016173 | 0.033105 | 0.042556 | 0.000522 | 0.000504 | 0.001082 |
| promote_basic_test.test | RUN | 0.019121 | 0.053536 | 0.048264 | 0.000486 | 0.000508 | 0.000948 |
| negation_test.test | RUN | 0.088398 | 0.196814 | 0.251197 | 0.001151 | 0.001162 | 0.001103 |
| mpl_interop_test3.test | RUN | 0.074552 | 0.190650 | 0.197226 | 0.000485 | 0.000491 | 0.001140 |
| mpl_interop_test2.test | RUN | 0.023741 | 0.055061 | 0.051416 | 0.000486 | 0.000478 | 0.001028 |
| mpl_interop_test1.test | RUN | 0.014115 | 0.038561 | 0.036248 | 0.000473 | 0.000525 | 0.001071 |
| make_void_test.test | RUN | 0.091919 | 0.217733 | 0.293826 | 0.001279 | 0.001306 | 0.001144 |
| make_unsigned_test.test | RUN | 0.103156 | 0.284384 | 0.415477 | 0.001197 | 0.001130 | 0.001067 |
| make_signed_test.test | RUN | 0.102343 | 0.288459 | 0.395331 | 0.000904 | 0.001096 | 0.001020 |
| is_volatile_test.test | RUN | 0.096859 | 0.243336 | 0.338280 | 0.001146 | 0.001203 | 0.001183 |
| is_void_test.test | RUN | 0.090453 | 0.228106 | 0.310572 | 0.001414 | 0.001310 | 0.000948 |
| is_virtual_base_of_test.test | RUN | 0.104622 | 0.292325 | 0.426653 | 0.001147 | 0.001283 | 0.001049 |
| is_unsigned_test.test | RUN | 0.093091 | 0.229412 | 0.319780 | 0.001300 | 0.001147 | 0.001045 |
| is_unscoped_enum_test.test | RUN | 0.091228 | 0.213432 | 0.274515 | 0.001298 | 0.001108 | 0.001100 |
| is_union_test.test | RUN | 0.098926 | 0.265559 | 0.388434 | 0.001287 | 0.001290 | 0.001119 |
| is_unbounded_array_test.test | RUN | 0.089164 | 0.228274 | 0.308959 | 0.001135 | 0.001185 | 0.001024 |
| is_trivially_copyable_test.test | RUN | 0.145461 | 0.466239 | 0.800262 | 0.001085 | 0.001152 | 0.001094 |
| is_swappable_test.test | RUN | 0.120682 | 0.363540 | 0.604086 | 0.001085 | 0.001398 | 0.001202 |
| is_stateless_test.test | RUN | 0.135154 | 0.413406 | 0.654694 | 0.001240 | 0.001125 | 0.001185 |
| is_signed_test.test | RUN | 0.094348 | 0.237343 | 0.326594 | 0.000949 | 0.001197 | 0.001071 |
| is_scoped_enum_test.test | RUN | 0.091907 | 0.207428 | 0.286322 | 0.001190 | 0.001232 | 0.001136 |
| is_scalar_test.test | RUN | 0.119406 | 0.374049 | 0.585845 | 0.001108 | 0.001208 | 0.001069 |
| is_same_test.test | RUN | 0.090026 | 0.224692 | 0.306362 | 0.001210 | 0.001250 | 0.001049 |
| is_rvalue_reference_test.test | RUN | 0.092836 | 0.253565 | 0.353117 | 0.001190 | 0.001122 | 0.001078 |
| is_reference_test.test | RUN | 0.094235 | 0.247445 | 0.365496 | 0.001198 | 0.001358 | 0.001073 |
| is_polymorphic_test.test | RUN | 0.098282 | 0.266252 | 0.387968 | 0.001057 | 0.001263 | 0.001099 |
| is_pointer_test.test | RUN | 0.096608 | 0.259274 | 0.370391 | 0.001333 | 0.001283 | 0.001071 |
| is_pod_test.test | RUN | 0.124645 | 0.413823 | 0.688757 | 0.001110 | 0.001228 | 0.001296 |
| is_object_test.test | RUN | 0.088567 | 0.218690 | 0.285991 | 0.001202 | 0.001229 | 0.001043 |
| is_nothrow_swappable_test.test | RUN | 0.129406 | 0.391204 | 0.635425 | 0.001066 | 0.001127 | 0.001118 |
| is_nothrow_move_constructible_test.test | RUN | 0.122917 | 0.398616 | 0.667900 | 0.001156 | 0.001350 | 0.001209 |
| is_nothrow_move_assignable_test.test | RUN | 0.123289 | 0.408022 | 0.656172 | 0.001158 | 0.001336 | 0.001157 |
| is_noncopyable_test.test | RUN | 0.089255 | 0.222079 | 0.297672 | 0.001128 | 0.001238 | 0.001100 |
| is_member_pointer_test.test | RUN | 0.096083 | 0.223412 | 0.301740 | 0.001080 | 0.001361 | 0.001113 |
| is_member_obj_test.test | RUN | 0.092124 | 0.223273 | 0.319189 | 0.001289 | 0.001221 | 0.001211 |
| is_member_func_test.test | RUN | 0.093329 | 0.247595 | 0.335003 | 0.001109 | 0.001164 | 0.001127 |
| is_lvalue_reference_test.test | RUN | 0.095297 | 0.252820 | 0.370733 | 0.000890 | 0.001322 | 0.001127 |
| is_list_constructible_test.test | RUN | 0.115141 | 0.298138 | 0.401678 | 0.001108 | 0.001351 | 0.001163 |
| is_integral_test.test | RUN | 0.111188 | 0.350000 | 0.566704 | 0.001348 | 0.001295 | 0.001145 |
| is_fundamental_test.test | RUN | 0.111533 | 0.363980 | 0.576816 | 0.001109 | 0.001224 | 0.001066 |
| is_function_test.test | RUN | 0.092423 | 0.238176 | 0.327936 | 0.001094 | 0.001254 | 0.001048 |
| is_floating_point_test.test | RUN | 0.096915 | 0.255020 | 0.360012 | 0.001090 | 0.001246 | 0.001057 |
| is_float_test.test | RUN | 0.092851 | 0.253242 | 0.373826 | 0.001329 | 0.001382 | 0.001158 |
| is_final_test.test | RUN | 0.093629 | 0.260357 | 0.374746 | 0.001126 | 0.001226 | 0.001047 |
| is_enum_test.test | RUN | 0.087547 | 0.216885 | 0.296483 | 0.001234 | 0.001172 | 0.001266 |
| is_empty_test.test | RUN | 0.094945 | 0.240276 | 0.330139 | 0.001118 | 0.001260 | 0.001067 |
| is_detected_test.test | RUN | 0.086708 | 0.204276 | 0.275383 | 0.001360 | 0.001344 | 0.001204 |
| is_detected_exact_test.test | RUN | 0.084792 | 0.206394 | 0.268849 | 0.001328 | 0.001249 | 0.001096 |
| is_destructible_test.test | RUN | 0.120670 | 0.403464 | 0.631295 | 0.001090 | 0.001349 | 0.001093 |
| is_default_constr_test.test | RUN | 0.125303 | 0.408744 | 0.648052 | 0.001009 | 0.001482 | 0.001162 |
| is_copy_constructible_test.test | RUN | 0.129330 | 0.426307 | 0.702238 | 0.001287 | 0.001376 | 0.001007 |
| is_copy_assignable_test.test | RUN | 0.130364 | 0.427142 | 0.695906 | 0.001223 | 0.001112 | 0.001076 |
| is_convertible_test.test | RUN | 0.123425 | 0.373717 | 0.561083 | 0.001115 | 0.001364 | 0.001122 |
| is_constructible_test.test | RUN | 0.100265 | 0.280758 | 0.392724 | 0.001064 | 0.001116 | 0.001163 |
| is_const_test.test | RUN | 0.090836 | 0.243203 | 0.341687 | 0.001200 | 0.001266 | 0.001196 |
| is_compound_test.test | RUN | 0.086339 | 0.213015 | 0.266804 | 0.001435 | 0.001334 | 0.001104 |
| is_complex_test.test | RUN | 0.113499 | 0.281233 | 0.380197 | 0.001097 | 0.001368 | 0.001169 |
| is_complete_test.test | RUN | 0.101005 | 0.285446 | 0.427727 | 0.001200 | 0.001083 | 0.001117 |
| is_class_test.test | RUN | 0.092322 | 0.255041 | 0.356439 | 0.001411 | 0.001133 | 0.001086 |
| is_bounded_array_test.test | RUN | 0.088720 | 0.230302 | 0.310458 | 0.001283 | 0.001256 | 0.001048 |
| is_base_of_test.test | RUN | 0.095652 | 0.249932 | 0.352392 | 0.001120 | 0.001375 | 0.001190 |
| is_base_and_derived_test.test | RUN | 0.094703 | 0.248807 | 0.340575 | 0.001099 | 0.001204 | 0.001137 |
| is_assignable_test.test | RUN | 0.113816 | 0.352400 | 0.526373 | 0.001291 | 0.001202 | 0.001057 |
| is_array_test.test | RUN | 0.091770 | 0.239921 | 0.338407 | 0.001164 | 0.001227 | 0.001199 |
| is_arithmetic_test.test | RUN | 0.112665 | 0.355760 | 0.533416 | 0.001152 | 0.001363 | 0.001048 |
| is_abstract_test.test | RUN | 0.202405 | 0.955809 | 2.018567 | 0.001213 | 0.001296 | 0.001196 |
| integral_constant_test.test | RUN | 0.012907 | 0.035221 | 0.040721 | 0.000479 | 0.000485 | 0.001040 |
| has_virtual_destructor_test.test | RUN | 0.100533 | 0.278465 | 0.423568 | 0.001416 | 0.001268 | 0.001228 |
| has_unary_plus_test.test | RUN | 0.186264 | 0.994111 | 1.470672 | 0.001363 | 0.001324 | 0.001135 |
| has_unary_minus_test.test | RUN | 0.184360 | 0.964023 | 1.456615 | 0.000932 | 0.001231 | 0.000943 |
| has_trivial_move_constructor_test.test | RUN | 0.127182 | 0.426584 | 0.669812 | 0.001141 | 0.001139 | 0.001246 |
| has_trivial_move_assign_test.test | RUN | 0.129672 | 0.406611 | 0.682671 | 0.001217 | 0.001274 | 0.001159 |
| has_trivial_destructor_test.test | RUN | 0.123246 | 0.421452 | 0.688279 | 0.001389 | 0.001266 | 0.001198 |
| has_trivial_copy_test.test | RUN | 0.132668 | 0.439231 | 0.700218 | 0.001384 | 0.001456 | 0.001143 |
| has_trivial_constr_test.test | RUN | 0.133221 | 0.445148 | 0.694318 | 0.001244 | 0.001320 | 0.001153 |
| has_trivial_assign_test.test | RUN | 0.127236 | 0.442227 | 0.688936 | 0.001296 | 0.001409 | 0.001139 |
| has_right_shift_test.test | RUN | 0.200169 | 0.799014 | 1.533670 | 0.001117 | 0.001222 | 0.001079 |
| has_right_shift_assign_test.test | RUN | 0.187704 | 0.758516 | 1.454809 | 0.001149 | 0.001294 | 0.001086 |
| has_prefix_classes3_test.test | RUN | 0.137804 | 0.453253 | 0.740640 | 0.001061 | 0.001335 | 0.001195 |
| has_prefix_classes2_test.test | RUN | 0.141977 | 0.446581 | 0.735368 | 0.001185 | 0.001166 | 0.001222 |
| has_prefix_classes1_test.test | RUN | 0.139042 | 0.460604 | 0.700726 | 0.001159 | 0.001234 | 0.001223 |
| has_prefix_classes0_test.test | RUN | 0.139495 | 0.450123 | 0.719515 | 0.001342 | 0.001162 | 0.001165 |
| has_pre_increment_test.test | RUN | 0.188531 | 1.034049 | 1.474378 | 0.001233 | 0.001226 | 0.001176 |
| has_pre_decrement_test.test | RUN | 0.187824 | 1.036352 | 1.467700 | 0.001226 | 0.001185 | 0.001109 |
| has_postfix_classes3_test.test | RUN | 0.142293 | 0.452764 | 0.716981 | 0.001281 | 0.001073 | 0.001118 |
| has_postfix_classes2_test.test | RUN | 0.137963 | 0.451559 | 0.713163 | 0.001352 | 0.001249 | 0.001091 |
| has_postfix_classes1_test.test | RUN | 0.139863 | 0.458530 | 0.723508 | 0.001169 | 0.001300 | 0.001149 |
| has_postfix_classes0_test.test | RUN | 0.140916 | 0.457885 | 0.716776 | 0.001196 | 0.001232 | 0.001146 |
| has_post_increment_test.test | RUN | 0.186879 | 0.986859 | 1.510338 | 0.001250 | 0.001234 | 0.001142 |
| has_post_decrement_test.test | RUN | 0.182855 | 0.982667 | 1.483199 | 0.001214 | 0.001194 | 0.001132 |
| has_plus_test.test | RUN | 0.189873 | 0.753764 | 1.476318 | 0.001111 | 0.001287 | 0.001095 |
| has_plus_assign_test.test | RUN | 0.198173 | 0.757909 | 1.453107 | 0.001103 | 0.001272 | 0.001180 |
| has_operator_new_test.test | RUN | 0.125898 | 0.399352 | 0.665487 | 0.001183 | 0.001355 | 0.001134 |
| has_nothrow_destructor_test.test | RUN | 0.129584 | 0.438770 | 0.732633 | 0.001228 | 0.001201 | 0.001059 |
| has_nothrow_copy_test.test | RUN | 0.128846 | 0.409315 | 0.653119 | 0.001216 | 0.001223 | 0.001219 |
| has_nothrow_constr_test.test | RUN | 0.124778 | 0.404597 | 0.643880 | 0.001132 | 0.001336 | 0.001218 |
| has_nothrow_assign_test.test | RUN | 0.123939 | 0.408409 | 0.671547 | 0.001077 | 0.001404 | 0.000990 |
| has_not_equal_to_test.test | RUN | 0.188139 | 0.969728 | 1.475762 | 0.001236 | 0.001109 | 0.001161 |
| has_negate_test.test | RUN | 0.178322 | 0.728597 | 1.371651 | 0.001168 | 0.001284 | 0.001158 |
| has_multiplies_test.test | RUN | 0.189016 | 0.762423 | 1.446248 | 0.001331 | 0.001229 | 0.001143 |
| has_multiplies_assign_test.test | RUN | 0.190014 | 0.743262 | 1.476161 | 0.001148 | 0.001351 | 0.001150 |
| has_modulus_test.test | RUN | 0.192021 | 0.750735 | 1.442520 | 0.001299 | 0.001350 | 0.001179 |
| has_modulus_assign_test.test | RUN | 0.185762 | 0.741522 | 1.427631 | 0.001166 | 0.001176 | 0.001197 |
| has_minus_test.test | RUN | 0.192460 | 0.772709 | 1.461905 | 0.001272 | 0.001292 | 0.001086 |
| has_minus_assign_test.test | RUN | 0.195713 | 0.752634 | 1.461245 | 0.001240 | 0.001231 | 0.001223 |
| has_logical_or_test.test | RUN | 0.188839 | 0.757380 | 1.454534 | 0.001250 | 0.001163 | 0.001166 |
| has_logical_not_test.test | RUN | 0.182641 | 0.734945 | 1.385006 | 0.001111 | 0.001156 | 0.001114 |
| has_logical_and_test.test | RUN | 0.188261 | 0.761317 | 1.435005 | 0.001261 | 0.001140 | 0.001163 |
| has_less_test.test | RUN | 0.190310 | 0.952224 | 1.411951 | 0.001448 | 0.001342 | 0.001158 |
| has_less_equal_test.test | RUN | 0.190940 | 0.967292 | 1.454811 | 0.001386 | 0.001221 | 0.001190 |
| has_left_shift_test.test | RUN | 0.206582 | 0.947790 | 1.825513 | 0.001127 | 0.001211 | 0.001283 |
| has_left_shift_assign_test.test | RUN | 0.187981 | 0.749438 | 1.426741 | 0.001325 | 0.001314 | 0.001139 |
| has_greater_test.test | RUN | 0.190830 | 0.955204 | 1.446806 | 0.001265 | 0.001253 | 0.001080 |
| has_greater_equal_test.test | RUN | 0.192411 | 0.976622 | 1.462686 | 0.001201 | 0.001123 | 0.001116 |
| has_equal_to_test.test | RUN | 0.184264 | 0.979988 | 1.489223 | 0.001190 | 0.001289 | 0.001257 |
| has_divides_test.test | RUN | 0.188387 | 0.737484 | 1.422678 | 0.001205 | 0.001206 | 0.001142 |
| has_divides_assign_test.test | RUN | 0.189383 | 0.742353 | 1.443108 | 0.001430 | 0.001288 | 0.001119 |
| has_dereference_test.test | RUN | 0.183382 | 0.736113 | 1.388393 | 0.000873 | 0.001408 | 0.001205 |
| has_complement_test.test | RUN | 0.185071 | 0.974261 | 1.464500 | 0.001212 | 0.001296 | 0.001285 |
| has_bit_xor_test.test | RUN | 0.189657 | 0.755192 | 1.412980 | 0.001208 | 0.001324 | 0.001112 |
| has_bit_xor_assign_test.test | RUN | 0.183395 | 0.754869 | 1.439336 | 0.001377 | 0.001289 | 0.000863 |
| has_bit_or_test.test | RUN | 0.184541 | 0.736604 | 1.444138 | 0.001326 | 0.001401 | 0.001165 |
| has_bit_or_assign_test.test | RUN | 0.187676 | 0.758491 | 1.463796 | 0.001288 | 0.001242 | 0.001266 |
| has_bit_and_test.test | RUN | 0.182008 | 0.741501 | 1.422412 | 0.001111 | 0.001321 | 0.001078 |
| has_bit_and_assign_test.test | RUN | 0.187207 | 0.741996 | 1.456860 | 0.001110 | 0.001364 | 0.001042 |
| has_binary_classes9_test.test | RUN | 0.204969 | 0.912216 | 1.666177 | 0.001215 | 0.001392 | 0.001099 |
| has_binary_classes8_test.test | RUN | 0.203877 | 0.913944 | 1.636356 | 0.001204 | 0.001434 | 0.001093 |
| has_binary_classes7_test.test | RUN | 0.200517 | 0.890274 | 1.665875 | 0.001212 | 0.001160 | 0.001163 |
| has_binary_classes6_test.test | RUN | 0.198415 | 0.887321 | 1.673332 | 0.001264 | 0.001446 | 0.001086 |
| has_binary_classes5_test.test | RUN | 0.200727 | 0.885678 | 1.664155 | 0.001147 | 0.001374 | 0.001111 |
| has_binary_classes4_test.test | RUN | 0.204038 | 0.892466 | 1.635036 | 0.000972 | 0.001296 | 0.001167 |
| has_binary_classes3_test.test | RUN | 0.207133 | 0.909939 | 1.660866 | 0.001175 | 0.001349 | 0.001130 |
| has_binary_classes2_test.test | RUN | 0.209946 | 0.906665 | 1.656792 | 0.001290 | 0.001430 | 0.001126 |
| has_binary_classes1_test.test | RUN | 0.203081 | 0.901248 | 1.667340 | 0.001320 | 0.001312 | 0.001142 |
| has_binary_classes0_test.test | RUN | 0.204334 | 0.918132 | 1.642418 | 0.001064 | 0.001260 | 0.001110 |
| function_traits_test.test | RUN | 0.097657 | 0.236739 | 0.337619 | 0.001158 | 0.001257 | 0.001133 |
| floating_point_promotion_test.test | RUN | 0.091745 | 0.230345 | 0.309241 | 0.001368 | 0.001350 | 0.001125 |
| extent_test.test | RUN | 0.092664 | 0.241917 | 0.336773 | 0.001070 | 0.001324 | 0.001284 |
| enable_if_test.test | RUN | 0.083275 | 0.202471 | 0.262328 | 0.001324 | 0.001101 | 0.001107 |
| disjunction_test.test | RUN | 0.088265 | 0.210852 | 0.283347 | 0.001107 | 0.001231 | 0.001103 |
| detected_test.test | RUN | 0.088071 | 0.202752 | 0.260313 | 0.001179 | 0.001242 | 0.000966 |
| detected_or_test.test | RUN | 0.088947 | 0.212947 | 0.280002 | 0.001240 | 0.001301 | 0.001044 |
| decay_test.test | RUN | 0.229259 | 0.813981 | 1.585675 | 0.001389 | 0.001326 | 0.001100 |
| cxx14_aliases_test.test | RUN | 0.145490 | 0.308029 | 0.442762 | 0.001155 | 0.001326 | 0.001170 |
| copy_reference_test.test | RUN | 0.090185 | 0.209586 | 0.273841 | 0.001364 | 0.001096 | 0.001176 |
| copy_cv_test.test | RUN | 0.092407 | 0.223388 | 0.299223 | 0.001292 | 0.001344 | 0.001084 |
| copy_cv_ref_test.test | RUN | 0.126333 | 0.365985 | 0.665733 | 0.001295 | 0.001413 | 0.001214 |
| conjunction_test.test | RUN | 0.089491 | 0.213023 | 0.279354 | 0.001257 | 0.001267 | 0.001207 |
| conditional_test.test | RUN | 0.087295 | 0.207778 | 0.267432 | 0.001199 | 0.001320 | 0.001077 |
| common_type_test.test | RUN | 0.114321 | 0.325397 | 0.515291 | 0.001224 | 0.001243 | 0.001077 |
| common_type_sfinae_test.test | RUN | 0.085804 | 0.203039 | 0.261967 | 0.001144 | 0.001265 | 0.001097 |
| common_type_sfinae2_test.test | RUN | 0.092729 | 0.216564 | 0.269324 | 0.001356 | 0.001254 | 0.001007 |
| common_type_6_test.test | RUN | 0.094751 | 0.214860 | 0.283667 | 0.001236 | 0.001185 | 0.001177 |
| common_type_5_test.test | RUN | 0.094752 | 0.216252 | 0.285318 | 0.001051 | 0.001302 | 0.001078 |
| common_type_4_test.test | RUN | 0.096456 | 0.236657 | 0.339766 | 0.001173 | 0.001258 | 0.001072 |
| common_type_3_test.test | RUN | 0.085742 | 0.197957 | 0.257142 | 0.001272 | 0.001334 | 0.001106 |
| common_type_2_test.test | RUN | 0.116941 | 0.316285 | 0.518794 | 0.001110 | 0.001325 | 0.001176 |
| alignment_of_test.test | RUN | 0.096330 | 0.256231 | 0.343233 | 0.001189 | 0.001238 | 0.001323 |
| alignment_of_a2_test.test | RUN | 0.097160 | 0.252183 | 0.338187 | 0.001340 | 0.001225 | 0.001067 |
| aligned_storage_test.test | RUN | 0.095152 | 0.246967 | 0.322033 | 0.001251 | 0.001458 | 0.001091 |
| aligned_storage_empy_test.test | RUN | 0.112601 | 0.284278 | 0.427434 | 0.001216 | 0.001417 | 0.001155 |
| aligned_storage_a2_test.test | RUN | 0.099514 | 0.251125 | 0.316378 | 0.001263 | 0.001400 | 0.001266 |
| add_volatile_test.test | RUN | 0.204581 | 0.725173 | 1.478758 | 0.001194 | 0.001359 | 0.001230 |
| add_rvalue_reference_test.test | RUN | 0.231051 | 0.819435 | 1.660738 | 0.001305 | 0.001349 | 0.001218 |
| add_reference_test.test | RUN | 0.225550 | 0.797681 | 1.649777 | 0.001232 | 0.001361 | 0.001121 |
| add_pointer_test.test | RUN | 0.145437 | 0.458723 | 0.873889 | 0.001267 | 0.001190 | 0.001144 |
| add_lvalue_reference_test.test | RUN | 0.223912 | 0.795591 | 1.672696 | 0.001541 | 0.001480 | 0.001062 |
| add_cv_test.test | RUN | 0.214080 | 0.739066 | 1.590288 | 0.001059 | 0.001305 | 0.001185 |
| add_const_test.test | RUN | 0.210625 | 0.746835 | 1.522048 | 0.001166 | 0.001225 | 0.001040 |
| is_virtual_base_of_fail.test | COMPILE_FAIL | 0.081674 | 0.197872 | 0.252366 | — | — | — |
| is_stateless_fail.test | COMPILE_FAIL | 0.088700 | 0.199991 | 0.261542 | — | — | — |
| is_polymorphic_fail.test | COMPILE_FAIL | 0.080853 | 0.188424 | 0.251138 | — | — | — |
| is_nothrow_move_constructible_fail.test | COMPILE_FAIL | 0.082595 | 0.190570 | 0.244465 | — | — | — |
| is_nothrow_move_assignable_fail.test | COMPILE_FAIL | 0.082128 | 0.192137 | 0.245227 | — | — | — |
| is_list_constructible_fail.test | COMPILE_FAIL | 0.082053 | 0.188231 | 0.243518 | — | — | — |
| is_empty_fail.test | COMPILE_FAIL | 0.084534 | 0.192407 | 0.243690 | — | — | — |
| is_destructible_fail.test | COMPILE_FAIL | 0.083360 | 0.189321 | 0.244329 | — | — | — |
| is_default_constructible_fail.test | COMPILE_FAIL | 0.081774 | 0.189637 | 0.246131 | — | — | — |
| is_copy_constructible_fail.test | COMPILE_FAIL | 0.082135 | 0.190201 | 0.245281 | — | — | — |
| is_copy_assignable_fail.test | COMPILE_FAIL | 0.081564 | 0.191325 | 0.244587 | — | — | — |
| is_convertible_fail.test | COMPILE_FAIL | 0.082069 | 0.190852 | 0.243544 | — | — | — |
| is_convertible2_fail.test | COMPILE_FAIL | 0.081843 | 0.192239 | 0.245191 | — | — | — |
| is_constructible_fail.test | COMPILE_FAIL | 0.081939 | 0.187451 | 0.247830 | — | — | — |
| is_base_of_fail.test | COMPILE_FAIL | 0.081367 | 0.192779 | 0.241686 | — | — | — |
| is_assignable_fail.test | COMPILE_FAIL | 0.080061 | 0.192120 | 0.241642 | — | — | — |
| has_nothrow_destruct_fail.test | COMPILE_FAIL | 0.081652 | 0.189849 | 0.245114 | — | — | — |
| has_nothrow_copy_fail.test | COMPILE_FAIL | 0.084112 | 0.191232 | 0.246482 | — | — | — |
| has_nothrow_cons_fail.test | COMPILE_FAIL | 0.081973 | 0.193739 | 0.243123 | — | — | — |
| has_nothrow_assign_fail.test | COMPILE_FAIL | 0.083156 | 0.191139 | 0.244519 | — | — | — |
| common_type_fail.test | COMPILE_FAIL | 0.082758 | 0.188681 | 0.249921 | — | — | — |
| common_type2_fail.test | COMPILE_FAIL | 0.083658 | 0.191632 | 0.245933 | — | — | — |
| has_nothrow_assign_test_no_intrinsics.test | RUN | 0.124934 | 0.410881 | 0.686740 | 0.001135 | 0.001271 | 0.001093 |
| has_nothrow_constr_test_no_intrinsics.test | RUN | 0.120596 | 0.412143 | 0.680308 | 0.001210 | 0.001237 | 0.001104 |
| has_nothrow_copy_test_no_intrinsics.test | RUN | 0.123649 | 0.409271 | 0.658450 | 0.001356 | 0.001220 | 0.000755 |
| is_nothrow_move_assignable_test_no_intrinsics.test | RUN | 0.129757 | 0.404532 | 0.652310 | 0.000871 | 0.000991 | 0.000797 |
| is_nothrow_move_constructible_test_no_intrinsics.test | RUN | 0.081201 | 0.303005 | 0.396750 | 0.000850 | 0.000899 | 0.000826 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.998× | 1.001×, 0.996× | 1.003× |
| clang | 1.024× | 1.023×, 1.026× | 0.998× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1362 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/43822097733).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| add_const_test.test | 10 | 0.000788s | 0.000775s | 0.000790s | byte equality observed |
| add_cv_test.test | 10 | 0.000811s | 0.000803s | 0.000787s | byte equality observed |
| add_lvalue_reference_test.test | 10 | 0.000804s | 0.000781s | 0.000780s | byte equality observed |
| add_pointer_test.test | 10 | 0.000794s | 0.000786s | 0.000773s | byte equality observed |
| add_reference_test.test | 10 | 0.000794s | 0.000793s | 0.000763s | byte equality observed |
| add_rvalue_reference_test.test | 10 | 0.000803s | 0.000752s | 0.000782s | byte equality observed |
| add_volatile_test.test | 10 | 0.000780s | 0.000773s | 0.000773s | byte equality observed |
| aligned_storage_a2_test.test | 10 | 0.000818s | 0.000815s | 0.000844s | byte equality observed |
| aligned_storage_empy_test.test | 10 | 0.000790s | 0.000811s | 0.000795s | byte equality observed |
| aligned_storage_test.test | 10 | 0.000834s | 0.000836s | 0.000823s | byte equality observed |
| alignment_of_a2_test.test | 10 | 0.000812s | 0.000787s | 0.000795s | byte equality observed |
| alignment_of_test.test | 10 | 0.000797s | 0.000788s | 0.000801s | byte equality observed |
| common_type_2_test.test | 10 | 0.000809s | 0.000773s | 0.000783s | byte equality observed |
| common_type_3_test.test | 10 | 0.000797s | 0.000790s | 0.000781s | byte equality observed |
| common_type_4_test.test | 10 | 0.000810s | 0.000787s | 0.000775s | byte equality observed |
| common_type_5_test.test | 10 | 0.000811s | 0.000788s | 0.000769s | byte equality observed |
| common_type_6_test.test | 10 | 0.000774s | 0.000782s | 0.000804s | byte equality observed |
| common_type_sfinae2_test.test | 10 | 0.000796s | 0.000789s | 0.000797s | byte equality observed |
| common_type_sfinae_test.test | 10 | 0.000797s | 0.000782s | 0.000782s | byte equality observed |
| common_type_test.test | 10 | 0.000808s | 0.000767s | 0.000790s | byte equality observed |
| conditional_test.test | 10 | 0.000801s | 0.000770s | 0.000791s | byte equality observed |
| conjunction_test.test | 10 | 0.000813s | 0.000785s | 0.000780s | byte equality observed |
| copy_cv_ref_test.test | 10 | 0.000789s | 0.000782s | 0.000768s | byte equality observed |
| copy_cv_test.test | 10 | 0.000808s | 0.000800s | 0.000799s | byte equality observed |
| copy_reference_test.test | 10 | 0.000802s | 0.000813s | 0.000811s | byte equality observed |
| cxx14_aliases_test.test | 10 | 0.000794s | 0.000780s | 0.000786s | byte equality observed |
| decay_test.test | 10 | 0.000805s | 0.000815s | 0.000816s | byte equality observed |
| detected_or_test.test | 10 | 0.000809s | 0.000798s | 0.000824s | byte equality observed |
| detected_test.test | 10 | 0.000816s | 0.000780s | 0.000837s | byte equality observed |
| disjunction_test.test | 10 | 0.000793s | 0.000804s | 0.000816s | byte equality observed |
| enable_if_test.test | 10 | 0.000777s | 0.000789s | 0.000818s | byte equality observed |
| extent_test.test | 10 | 0.000790s | 0.000788s | 0.000805s | byte equality observed |
| floating_point_promotion_test.test | 10 | 0.000778s | 0.000808s | 0.000775s | byte equality observed |
| function_traits_test.test | 10 | 0.000785s | 0.000790s | 0.000808s | byte equality observed |
| has_binary_classes0_test.test | 10 | 0.000797s | 0.000811s | 0.000806s | byte equality observed |
| has_binary_classes1_test.test | 10 | 0.000797s | 0.000782s | 0.000802s | byte equality observed |
| has_binary_classes2_test.test | 10 | 0.000817s | 0.000783s | 0.000784s | byte equality observed |
| has_binary_classes3_test.test | 10 | 0.000811s | 0.000775s | 0.000822s | byte equality observed |
| has_binary_classes4_test.test | 10 | 0.000791s | 0.000773s | 0.000788s | byte equality observed |
| has_binary_classes5_test.test | 10 | 0.000791s | 0.000784s | 0.000762s | byte equality observed |
| has_binary_classes6_test.test | 10 | 0.000786s | 0.000793s | 0.000795s | byte equality observed |
| has_binary_classes7_test.test | 10 | 0.000813s | 0.000810s | 0.000790s | byte equality observed |
| has_binary_classes8_test.test | 10 | 0.000805s | 0.000785s | 0.000773s | byte equality observed |
| has_binary_classes9_test.test | 10 | 0.000806s | 0.000772s | 0.000782s | byte equality observed |
| has_bit_and_assign_test.test | 10 | 0.000789s | 0.000771s | 0.000775s | byte equality observed |
| has_bit_and_test.test | 10 | 0.000782s | 0.000772s | 0.000784s | byte equality observed |
| has_bit_or_assign_test.test | 10 | 0.000788s | 0.000789s | 0.000781s | byte equality observed |
| has_bit_or_test.test | 10 | 0.000808s | 0.000825s | 0.000785s | byte equality observed |
| has_bit_xor_assign_test.test | 10 | 0.000809s | 0.000830s | 0.000781s | byte equality observed |
| has_bit_xor_test.test | 10 | 0.000815s | 0.000778s | 0.000792s | byte equality observed |
| has_complement_test.test | 10 | 0.000800s | 0.000803s | 0.000785s | byte equality observed |
| has_dereference_test.test | 10 | 0.000811s | 0.000814s | 0.000774s | byte equality observed |
| has_divides_assign_test.test | 10 | 0.000788s | 0.000785s | 0.000758s | byte equality observed |
| has_divides_test.test | 10 | 0.000792s | 0.000814s | 0.000772s | byte equality observed |
| has_equal_to_test.test | 10 | 0.000793s | 0.000809s | 0.000770s | byte equality observed |
| has_greater_equal_test.test | 10 | 0.000792s | 0.000796s | 0.000791s | byte equality observed |
| has_greater_test.test | 10 | 0.000801s | 0.000797s | 0.000781s | byte equality observed |
| has_left_shift_assign_test.test | 10 | 0.000797s | 0.000797s | 0.000810s | byte equality observed |
| has_left_shift_test.test | 10 | 0.000792s | 0.000794s | 0.000826s | byte equality observed |
| has_less_equal_test.test | 10 | 0.000780s | 0.000783s | 0.000794s | byte equality observed |
| has_less_test.test | 10 | 0.000792s | 0.000790s | 0.000784s | byte equality observed |
| has_logical_and_test.test | 10 | 0.000814s | 0.000810s | 0.000756s | byte equality observed |
| has_logical_not_test.test | 10 | 0.000786s | 0.000799s | 0.000771s | byte equality observed |
| has_logical_or_test.test | 10 | 0.000781s | 0.000786s | 0.000769s | byte equality observed |
| has_minus_assign_test.test | 10 | 0.000802s | 0.000803s | 0.000779s | byte equality observed |
| has_minus_test.test | 10 | 0.000801s | 0.000806s | 0.000753s | byte equality observed |
| has_modulus_assign_test.test | 10 | 0.000799s | 0.000809s | 0.000786s | byte equality observed |
| has_modulus_test.test | 10 | 0.000794s | 0.000783s | 0.000791s | byte equality observed |
| has_multiplies_assign_test.test | 10 | 0.000788s | 0.000789s | 0.000782s | byte equality observed |
| has_multiplies_test.test | 10 | 0.000777s | 0.000797s | 0.000758s | byte equality observed |
| has_negate_test.test | 10 | 0.000778s | 0.000786s | 0.000793s | byte equality observed |
| has_not_equal_to_test.test | 10 | 0.000784s | 0.000757s | 0.000778s | byte equality observed |
| has_nothrow_assign_test.test | 10 | 0.000779s | 0.000778s | 0.000794s | byte equality observed |
| has_nothrow_assign_test_no_intrinsics.test | 10 | 0.000798s | 0.000782s | 0.000813s | byte equality observed |
| has_nothrow_constr_test.test | 10 | 0.000780s | 0.000789s | 0.000776s | byte equality observed |
| has_nothrow_constr_test_no_intrinsics.test | 10 | 0.000786s | 0.000771s | 0.000794s | byte equality observed |
| has_nothrow_copy_test.test | 10 | 0.000800s | 0.000790s | 0.000782s | byte equality observed |
| has_nothrow_copy_test_no_intrinsics.test | 10 | 0.000789s | 0.000791s | 0.000802s | byte equality observed |
| has_nothrow_destructor_test.test | 10 | 0.000799s | 0.000803s | 0.000798s | byte equality observed |
| has_operator_new_test.test | 10 | 0.000808s | 0.000820s | 0.000787s | byte equality observed |
| has_plus_assign_test.test | 10 | 0.000809s | 0.000792s | 0.000785s | byte equality observed |
| has_plus_test.test | 10 | 0.000807s | 0.000780s | 0.000787s | byte equality observed |
| has_post_decrement_test.test | 10 | 0.000811s | 0.000796s | 0.000797s | byte equality observed |
| has_post_increment_test.test | 10 | 0.000790s | 0.000798s | 0.000808s | byte equality observed |
| has_postfix_classes0_test.test | 10 | 0.000802s | 0.000790s | 0.000804s | byte equality observed |
| has_postfix_classes1_test.test | 10 | 0.000815s | 0.000802s | 0.000782s | byte equality observed |
| has_postfix_classes2_test.test | 10 | 0.000816s | 0.000805s | 0.000792s | byte equality observed |
| has_postfix_classes3_test.test | 10 | 0.000800s | 0.000827s | 0.000776s | byte equality observed |
| has_pre_decrement_test.test | 10 | 0.000788s | 0.000809s | 0.000802s | byte equality observed |
| has_pre_increment_test.test | 10 | 0.000802s | 0.000793s | 0.000802s | byte equality observed |
| has_prefix_classes0_test.test | 10 | 0.000796s | 0.000774s | 0.000810s | byte equality observed |
| has_prefix_classes1_test.test | 10 | 0.000794s | 0.000770s | 0.000823s | byte equality observed |
| has_prefix_classes2_test.test | 10 | 0.000789s | 0.000802s | 0.000792s | byte equality observed |
| has_prefix_classes3_test.test | 10 | 0.000807s | 0.000796s | 0.000785s | byte equality observed |
| has_right_shift_assign_test.test | 10 | 0.000793s | 0.000775s | 0.000789s | byte equality observed |
| has_right_shift_test.test | 10 | 0.000803s | 0.000801s | 0.000816s | byte equality observed |
| has_trivial_assign_test.test | 10 | 0.000812s | 0.000822s | 0.000810s | byte equality observed |
| has_trivial_constr_test.test | 10 | 0.000834s | 0.000855s | 0.000835s | native test oracle; output varies |
| has_trivial_copy_test.test | 10 | 0.000846s | 0.000833s | 0.000821s | native test oracle; output varies |
| has_trivial_destructor_test.test | 10 | 0.000794s | 0.000813s | 0.000772s | byte equality observed |
| has_trivial_move_assign_test.test | 10 | 0.000815s | 0.000810s | 0.000783s | byte equality observed |
| has_trivial_move_constructor_test.test | 10 | 0.000797s | 0.000810s | 0.000780s | byte equality observed |
| has_unary_minus_test.test | 10 | 0.000798s | 0.000807s | 0.000784s | byte equality observed |
| has_unary_plus_test.test | 10 | 0.000793s | 0.000818s | 0.000791s | byte equality observed |
| has_virtual_destructor_test.test | 10 | 0.000792s | 0.000802s | 0.000800s | byte equality observed |
| integral_constant_test.test | 10 | 0.000361s | 0.000361s | 0.000770s | byte equality observed |
| is_abstract_test.test | 10 | 0.000791s | 0.000782s | 0.000780s | byte equality observed |
| is_arithmetic_test.test | 10 | 0.000800s | 0.000819s | 0.000784s | byte equality observed |
| is_array_test.test | 10 | 0.000779s | 0.000778s | 0.000786s | byte equality observed |
| is_assignable_test.test | 10 | 0.000786s | 0.000789s | 0.000780s | byte equality observed |
| is_base_and_derived_test.test | 10 | 0.000801s | 0.000800s | 0.000811s | byte equality observed |
| is_base_of_test.test | 10 | 0.000806s | 0.000803s | 0.000792s | byte equality observed |
| is_bounded_array_test.test | 10 | 0.000774s | 0.000798s | 0.000785s | byte equality observed |
| is_class_test.test | 10 | 0.000784s | 0.000812s | 0.000796s | byte equality observed |
| is_complete_test.test | 10 | 0.000799s | 0.000805s | 0.000820s | byte equality observed |
| is_complex_test.test | 10 | 0.000788s | 0.000771s | 0.000794s | byte equality observed |
| is_compound_test.test | 10 | 0.000802s | 0.000801s | 0.000792s | byte equality observed |
| is_const_test.test | 10 | 0.000770s | 0.000806s | 0.000819s | byte equality observed |
| is_constructible_test.test | 10 | 0.000764s | 0.000798s | 0.000797s | byte equality observed |
| is_convertible_test.test | 10 | 0.000770s | 0.000796s | 0.000824s | byte equality observed |
| is_copy_assignable_test.test | 10 | 0.000781s | 0.000788s | 0.000803s | byte equality observed |
| is_copy_constructible_test.test | 10 | 0.000790s | 0.000786s | 0.000780s | byte equality observed |
| is_default_constr_test.test | 10 | 0.000793s | 0.000763s | 0.000776s | byte equality observed |
| is_destructible_test.test | 10 | 0.000798s | 0.000778s | 0.000760s | byte equality observed |
| is_detected_exact_test.test | 10 | 0.000792s | 0.000770s | 0.000783s | byte equality observed |
| is_detected_test.test | 10 | 0.000816s | 0.000779s | 0.000814s | byte equality observed |
| is_empty_test.test | 10 | 0.000770s | 0.000815s | 0.000770s | byte equality observed |
| is_enum_test.test | 10 | 0.000781s | 0.000797s | 0.000788s | byte equality observed |
| is_final_test.test | 10 | 0.000788s | 0.000791s | 0.000767s | byte equality observed |
| is_float_test.test | 10 | 0.000794s | 0.000780s | 0.000797s | byte equality observed |
| is_floating_point_test.test | 10 | 0.000773s | 0.000784s | 0.000809s | byte equality observed |
| is_function_test.test | 10 | 0.000772s | 0.000803s | 0.000791s | byte equality observed |
| is_fundamental_test.test | 10 | 0.000780s | 0.000771s | 0.000776s | byte equality observed |
| is_integral_test.test | 10 | 0.000790s | 0.000781s | 0.000786s | byte equality observed |
| is_list_constructible_test.test | 10 | 0.000810s | 0.000776s | 0.000807s | byte equality observed |
| is_lvalue_reference_test.test | 10 | 0.000777s | 0.000802s | 0.000769s | byte equality observed |
| is_member_func_test.test | 10 | 0.000784s | 0.000789s | 0.000781s | byte equality observed |
| is_member_obj_test.test | 10 | 0.000803s | 0.000813s | 0.000800s | byte equality observed |
| is_member_pointer_test.test | 10 | 0.000792s | 0.000772s | 0.000776s | byte equality observed |
| is_noncopyable_test.test | 10 | 0.000785s | 0.000791s | 0.000773s | byte equality observed |
| is_nothrow_move_assignable_test.test | 10 | 0.000790s | 0.000793s | 0.000790s | byte equality observed |
| is_nothrow_move_assignable_test_no_intrinsics.test | 10 | 0.000807s | 0.000778s | 0.000770s | byte equality observed |
| is_nothrow_move_constructible_test.test | 10 | 0.000817s | 0.000801s | 0.000782s | byte equality observed |
| is_nothrow_move_constructible_test_no_intrinsics.test | 10 | 0.000809s | 0.000779s | 0.000781s | byte equality observed |
| is_nothrow_swappable_test.test | 10 | 0.000769s | 0.000774s | 0.000754s | byte equality observed |
| is_object_test.test | 10 | 0.000785s | 0.000760s | 0.000801s | byte equality observed |
| is_pod_test.test | 10 | 0.000790s | 0.000802s | 0.000793s | byte equality observed |
| is_pointer_test.test | 10 | 0.000807s | 0.000791s | 0.000788s | byte equality observed |
| is_polymorphic_test.test | 10 | 0.000789s | 0.000792s | 0.000795s | byte equality observed |
| is_reference_test.test | 10 | 0.000792s | 0.000792s | 0.000786s | byte equality observed |
| is_rvalue_reference_test.test | 10 | 0.000783s | 0.000808s | 0.000783s | byte equality observed |
| is_same_test.test | 10 | 0.000764s | 0.000780s | 0.000794s | byte equality observed |
| is_scalar_test.test | 10 | 0.000772s | 0.000802s | 0.000786s | byte equality observed |
| is_scoped_enum_test.test | 10 | 0.000777s | 0.000804s | 0.000805s | byte equality observed |
| is_signed_test.test | 10 | 0.000785s | 0.000791s | 0.000803s | byte equality observed |
| is_stateless_test.test | 10 | 0.000804s | 0.000804s | 0.000804s | byte equality observed |
| is_swappable_test.test | 10 | 0.000797s | 0.000777s | 0.000795s | byte equality observed |
| is_trivially_copyable_test.test | 10 | 0.000799s | 0.000791s | 0.000801s | byte equality observed |
| is_unbounded_array_test.test | 10 | 0.000789s | 0.000794s | 0.000777s | byte equality observed |
| is_union_test.test | 10 | 0.000783s | 0.000777s | 0.000793s | byte equality observed |
| is_unscoped_enum_test.test | 10 | 0.000771s | 0.000785s | 0.000805s | byte equality observed |
| is_unsigned_test.test | 10 | 0.000778s | 0.000774s | 0.000819s | byte equality observed |
| is_virtual_base_of_test.test | 10 | 0.000796s | 0.000794s | 0.000782s | byte equality observed |
| is_void_test.test | 10 | 0.000796s | 0.000758s | 0.000821s | byte equality observed |
| is_volatile_test.test | 10 | 0.000773s | 0.000762s | 0.000818s | byte equality observed |
| make_signed_test.test | 10 | 0.000811s | 0.000756s | 0.000786s | byte equality observed |
| make_unsigned_test.test | 10 | 0.000788s | 0.000773s | 0.000763s | byte equality observed |
| make_void_test.test | 10 | 0.000792s | 0.000780s | 0.000817s | byte equality observed |
| mpl_interop_test1.test | 10 | 0.000368s | 0.000366s | 0.000811s | byte equality observed |
| mpl_interop_test2.test | 10 | 0.000366s | 0.000371s | 0.000822s | byte equality observed |
| mpl_interop_test3.test | 10 | 0.000357s | 0.000362s | 0.000813s | byte equality observed |
| negation_test.test | 10 | 0.000785s | 0.000778s | 0.000774s | byte equality observed |
| promote_basic_test.test | 10 | 0.000358s | 0.000363s | 0.000783s | byte equality observed |
| promote_enum_msvc_bug_test.test | 10 | 0.000368s | 0.000372s | 0.000782s | byte equality observed |
| promote_enum_test.test | 10 | 0.000358s | 0.000364s | 0.000803s | byte equality observed |
| promote_mpl_test.test | 10 | 0.000358s | 0.000358s | 0.000824s | byte equality observed |
| rank_test.test | 10 | 0.000776s | 0.000815s | 0.000804s | byte equality observed |
| remove_all_extents_test.test | 10 | 0.000782s | 0.000811s | 0.000772s | byte equality observed |
| remove_bounds_test.test | 10 | 0.000786s | 0.000776s | 0.000783s | byte equality observed |
| remove_const_test.test | 10 | 0.000770s | 0.000807s | 0.000797s | byte equality observed |
| remove_cv_ref_test.test | 10 | 0.000774s | 0.000770s | 0.000807s | byte equality observed |
| remove_cv_test.test | 10 | 0.000777s | 0.000778s | 0.000800s | byte equality observed |
| remove_extent_test.test | 10 | 0.000789s | 0.000769s | 0.000805s | byte equality observed |
| remove_pointer_test.test | 10 | 0.000783s | 0.000817s | 0.000805s | byte equality observed |
| remove_reference_test.test | 10 | 0.000807s | 0.000780s | 0.000798s | byte equality observed |
| remove_volatile_test.test | 10 | 0.000785s | 0.000771s | 0.000803s | byte equality observed |
| tricky_abstract_type_test.test | 10 | 0.000792s | 0.000767s | 0.000805s | byte equality observed |
| tricky_add_pointer_test.test | 10 | 0.000790s | 0.000792s | 0.000793s | byte equality observed |
| tricky_function_type_test.test | 10 | 0.000795s | 0.000790s | 0.000809s | byte equality observed |
| tricky_incomplete_type_test.test | 10 | 0.000787s | 0.000784s | 0.000799s | byte equality observed |
| tricky_is_enum_test.test | 10 | 0.000806s | 0.000816s | 0.000777s | byte equality observed |
| tricky_partial_spec_test.test | 10 | 0.000809s | 0.000800s | 0.000808s | byte equality observed |
| tricky_rvalue_test.test | 10 | 0.000781s | 0.000781s | 0.000829s | byte equality observed |
| type_identity_test.test | 10 | 0.000797s | 0.000798s | 0.000817s | byte equality observed |
| type_traits_test.test | 10 | 0.000369s | 0.000363s | 0.000792s | byte equality observed |
| type_with_alignment_test.test | 10 | 0.000835s | 0.000844s | 0.000825s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/43822097733).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
