# libs/type_traits/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| type_with_alignment_test.test | RUN | 0.093557 | 0.271610 | 0.386907 | 0.001263 | 0.001285 | 0.001260 |
| type_traits_test.test | RUN | 0.130318 | 0.278794 | 0.376552 | 0.000423 | 0.000487 | 0.001179 |
| type_identity_test.test | RUN | 0.248072 | 0.952188 | 1.966419 | 0.001542 | 0.001292 | 0.001387 |
| tricky_rvalue_test.test | RUN | 0.085147 | 0.218891 | 0.297426 | 0.001243 | 0.001273 | 0.001101 |
| tricky_partial_spec_test.test | RUN | 0.107021 | 0.309759 | 0.486442 | 0.001248 | 0.001256 | 0.001252 |
| tricky_is_enum_test.test | RUN | 0.088280 | 0.200928 | 0.270679 | 0.001213 | 0.001371 | 0.001283 |
| tricky_incomplete_type_test.test | RUN | 0.136249 | 0.312718 | 0.438341 | 0.001168 | 0.001200 | 0.001173 |
| tricky_function_type_test.test | RUN | 0.113097 | 0.336325 | 0.526026 | 0.001371 | 0.001263 | 0.001265 |
| tricky_add_pointer_test.test | RUN | 0.165341 | 0.568557 | 1.148417 | 0.001162 | 0.001340 | 0.001248 |
| tricky_abstract_type_test.test | RUN | 0.090655 | 0.212903 | 0.283052 | 0.001352 | 0.001284 | 0.001171 |
| remove_volatile_test.test | RUN | 0.221135 | 0.825239 | 1.775621 | 0.001158 | 0.001311 | 0.001242 |
| remove_reference_test.test | RUN | 0.224232 | 0.845059 | 1.842010 | 0.001224 | 0.001443 | 0.001320 |
| remove_pointer_test.test | RUN | 0.234983 | 0.887837 | 1.949380 | 0.001278 | 0.001170 | 0.001286 |
| remove_extent_test.test | RUN | 0.228884 | 0.871006 | 1.828634 | 0.000905 | 0.001187 | 0.001406 |
| remove_cv_test.test | RUN | 0.229759 | 0.852428 | 1.901081 | 0.001287 | 0.001309 | 0.001364 |
| remove_cv_ref_test.test | RUN | 0.482368 | 2.114241 | 4.491264 | 0.001283 | 0.001193 | 0.001336 |
| remove_const_test.test | RUN | 0.222172 | 0.797807 | 1.795789 | 0.001444 | 0.001302 | 0.001338 |
| remove_bounds_test.test | RUN | 0.228283 | 0.867825 | 1.892110 | 0.001399 | 0.001265 | 0.001385 |
| remove_all_extents_test.test | RUN | 0.235122 | 0.853394 | 1.809269 | 0.001199 | 0.001164 | 0.001162 |
| rank_test.test | RUN | 0.091093 | 0.216830 | 0.292839 | 0.001174 | 0.001171 | 0.001140 |
| promote_mpl_test.test | RUN | 0.080013 | 0.191710 | 0.217397 | 0.000515 | 0.000495 | 0.001178 |
| promote_enum_test.test | RUN | 0.017209 | 0.047103 | 0.054045 | 0.000427 | 0.000482 | 0.001189 |
| promote_enum_msvc_bug_test.test | RUN | 0.016138 | 0.036658 | 0.046006 | 0.000485 | 0.000450 | 0.001282 |
| promote_basic_test.test | RUN | 0.019164 | 0.051885 | 0.052506 | 0.000495 | 0.000502 | 0.001161 |
| negation_test.test | RUN | 0.085201 | 0.196393 | 0.270504 | 0.000887 | 0.001119 | 0.001196 |
| mpl_interop_test3.test | RUN | 0.074471 | 0.195104 | 0.200698 | 0.000487 | 0.000468 | 0.001327 |
| mpl_interop_test2.test | RUN | 0.024702 | 0.051809 | 0.056041 | 0.000529 | 0.000469 | 0.001193 |
| mpl_interop_test1.test | RUN | 0.014311 | 0.036304 | 0.039715 | 0.000530 | 0.000480 | 0.001147 |
| make_void_test.test | RUN | 0.090193 | 0.208284 | 0.313652 | 0.001258 | 0.001263 | 0.001289 |
| make_unsigned_test.test | RUN | 0.102481 | 0.277240 | 0.423022 | 0.001192 | 0.001123 | 0.001190 |
| make_signed_test.test | RUN | 0.102989 | 0.281012 | 0.423424 | 0.001293 | 0.001168 | 0.001190 |
| is_volatile_test.test | RUN | 0.096065 | 0.234931 | 0.346178 | 0.001211 | 0.001079 | 0.001271 |
| is_void_test.test | RUN | 0.090244 | 0.221444 | 0.313935 | 0.001321 | 0.001260 | 0.001415 |
| is_virtual_base_of_test.test | RUN | 0.102985 | 0.286469 | 0.451053 | 0.001320 | 0.000974 | 0.001209 |
| is_unsigned_test.test | RUN | 0.092891 | 0.227765 | 0.343349 | 0.001182 | 0.001104 | 0.001098 |
| is_unscoped_enum_test.test | RUN | 0.087558 | 0.208498 | 0.280345 | 0.001049 | 0.001091 | 0.001189 |
| is_union_test.test | RUN | 0.097256 | 0.258745 | 0.383186 | 0.001276 | 0.001321 | 0.001223 |
| is_unbounded_array_test.test | RUN | 0.089672 | 0.223431 | 0.313453 | 0.001248 | 0.001262 | 0.001233 |
| is_trivially_copyable_test.test | RUN | 0.143480 | 0.466052 | 0.785800 | 0.001134 | 0.001304 | 0.001134 |
| is_swappable_test.test | RUN | 0.118478 | 0.350918 | 0.597728 | 0.001087 | 0.001244 | 0.001324 |
| is_stateless_test.test | RUN | 0.132847 | 0.408008 | 0.655671 | 0.001208 | 0.001514 | 0.001302 |
| is_signed_test.test | RUN | 0.090897 | 0.232535 | 0.332146 | 0.001502 | 0.001412 | 0.001192 |
| is_scoped_enum_test.test | RUN | 0.088759 | 0.209310 | 0.274977 | 0.001245 | 0.001120 | 0.001337 |
| is_scalar_test.test | RUN | 0.117482 | 0.377263 | 0.589107 | 0.001213 | 0.001292 | 0.001177 |
| is_same_test.test | RUN | 0.090562 | 0.226076 | 0.312724 | 0.001335 | 0.001299 | 0.001434 |
| is_rvalue_reference_test.test | RUN | 0.095359 | 0.245694 | 0.359038 | 0.001340 | 0.001153 | 0.001212 |
| is_reference_test.test | RUN | 0.095122 | 0.252384 | 0.352573 | 0.001091 | 0.001387 | 0.001359 |
| is_polymorphic_test.test | RUN | 0.098344 | 0.253879 | 0.394430 | 0.001118 | 0.001073 | 0.001342 |
| is_pointer_test.test | RUN | 0.093432 | 0.249721 | 0.376680 | 0.001259 | 0.001079 | 0.001321 |
| is_pod_test.test | RUN | 0.121857 | 0.407419 | 0.673024 | 0.001205 | 0.001202 | 0.001236 |
| is_object_test.test | RUN | 0.085611 | 0.218719 | 0.299381 | 0.001224 | 0.001245 | 0.001242 |
| is_nothrow_swappable_test.test | RUN | 0.126868 | 0.390283 | 0.660149 | 0.001222 | 0.001163 | 0.001394 |
| is_nothrow_move_constructible_test.test | RUN | 0.115175 | 0.398083 | 0.658556 | 0.001222 | 0.001076 | 0.001434 |
| is_nothrow_move_assignable_test.test | RUN | 0.123154 | 0.398847 | 0.665700 | 0.001152 | 0.001272 | 0.001214 |
| is_noncopyable_test.test | RUN | 0.088579 | 0.218488 | 0.314654 | 0.001323 | 0.001297 | 0.000879 |
| is_member_pointer_test.test | RUN | 0.088552 | 0.226453 | 0.301113 | 0.001200 | 0.001140 | 0.001416 |
| is_member_obj_test.test | RUN | 0.090441 | 0.221644 | 0.322144 | 0.001161 | 0.001120 | 0.001481 |
| is_member_func_test.test | RUN | 0.092571 | 0.238987 | 0.346638 | 0.001296 | 0.001238 | 0.001201 |
| is_lvalue_reference_test.test | RUN | 0.096117 | 0.250691 | 0.370619 | 0.001236 | 0.001319 | 0.001254 |
| is_list_constructible_test.test | RUN | 0.107577 | 0.294077 | 0.408257 | 0.001205 | 0.001260 | 0.001451 |
| is_integral_test.test | RUN | 0.108303 | 0.352599 | 0.570850 | 0.001221 | 0.001141 | 0.001296 |
| is_fundamental_test.test | RUN | 0.113386 | 0.358532 | 0.586665 | 0.001035 | 0.001180 | 0.001160 |
| is_function_test.test | RUN | 0.091143 | 0.236958 | 0.322978 | 0.001118 | 0.001138 | 0.001166 |
| is_floating_point_test.test | RUN | 0.093047 | 0.254593 | 0.363035 | 0.001163 | 0.001146 | 0.001254 |
| is_float_test.test | RUN | 0.096406 | 0.257211 | 0.375500 | 0.001205 | 0.001257 | 0.001277 |
| is_final_test.test | RUN | 0.097499 | 0.261377 | 0.376227 | 0.001086 | 0.001160 | 0.001175 |
| is_enum_test.test | RUN | 0.087742 | 0.211977 | 0.294457 | 0.001217 | 0.001029 | 0.001159 |
| is_empty_test.test | RUN | 0.093716 | 0.238899 | 0.332236 | 0.001255 | 0.001272 | 0.001429 |
| is_detected_test.test | RUN | 0.086882 | 0.202099 | 0.274074 | 0.001342 | 0.001120 | 0.001302 |
| is_detected_exact_test.test | RUN | 0.086427 | 0.204827 | 0.273943 | 0.001198 | 0.001130 | 0.001145 |
| is_destructible_test.test | RUN | 0.120434 | 0.394361 | 0.661171 | 0.001160 | 0.001327 | 0.001283 |
| is_default_constr_test.test | RUN | 0.120055 | 0.409907 | 0.661110 | 0.001128 | 0.001258 | 0.001331 |
| is_copy_constructible_test.test | RUN | 0.129662 | 0.423405 | 0.727563 | 0.001124 | 0.001102 | 0.001438 |
| is_copy_assignable_test.test | RUN | 0.126976 | 0.410486 | 0.719179 | 0.001181 | 0.000814 | 0.001170 |
| is_convertible_test.test | RUN | 0.123060 | 0.372445 | 0.601755 | 0.001141 | 0.001325 | 0.000770 |
| is_constructible_test.test | RUN | 0.106021 | 0.269427 | 0.432730 | 0.001134 | 0.001132 | 0.001017 |
| is_const_test.test | RUN | 0.091550 | 0.233340 | 0.346131 | 0.001372 | 0.000847 | 0.001130 |
| is_compound_test.test | RUN | 0.084451 | 0.208960 | 0.287451 | 0.001186 | 0.001290 | 0.001305 |
| is_complex_test.test | RUN | 0.116018 | 0.269889 | 0.394852 | 0.001097 | 0.001210 | 0.001456 |
| is_complete_test.test | RUN | 0.102388 | 0.278565 | 0.438761 | 0.001167 | 0.001167 | 0.001081 |
| is_class_test.test | RUN | 0.096156 | 0.243563 | 0.369158 | 0.001254 | 0.001149 | 0.001125 |
| is_bounded_array_test.test | RUN | 0.090156 | 0.217913 | 0.316791 | 0.001149 | 0.001382 | 0.001154 |
| is_base_of_test.test | RUN | 0.096112 | 0.244474 | 0.365282 | 0.001155 | 0.001307 | 0.001236 |
| is_base_and_derived_test.test | RUN | 0.094206 | 0.239217 | 0.352205 | 0.001110 | 0.001297 | 0.001146 |
| is_assignable_test.test | RUN | 0.113095 | 0.342245 | 0.536778 | 0.001312 | 0.001240 | 0.001123 |
| is_array_test.test | RUN | 0.091874 | 0.238893 | 0.347893 | 0.001200 | 0.001302 | 0.001226 |
| is_arithmetic_test.test | RUN | 0.115925 | 0.346361 | 0.591434 | 0.001240 | 0.001320 | 0.001261 |
| is_abstract_test.test | RUN | 0.206101 | 0.914063 | 2.018457 | 0.001257 | 0.001263 | 0.001372 |
| integral_constant_test.test | RUN | 0.013521 | 0.037468 | 0.040417 | 0.000539 | 0.000530 | 0.001086 |
| has_virtual_destructor_test.test | RUN | 0.099157 | 0.269808 | 0.412801 | 0.001187 | 0.001193 | 0.001372 |
| has_unary_plus_test.test | RUN | 0.184328 | 0.968561 | 1.485537 | 0.001448 | 0.001248 | 0.001241 |
| has_unary_minus_test.test | RUN | 0.179343 | 0.938851 | 1.449388 | 0.001123 | 0.001237 | 0.001276 |
| has_trivial_move_constructor_test.test | RUN | 0.121625 | 0.417707 | 0.685588 | 0.001250 | 0.001190 | 0.001473 |
| has_trivial_move_assign_test.test | RUN | 0.126846 | 0.388646 | 0.696102 | 0.001229 | 0.001176 | 0.001281 |
| has_trivial_destructor_test.test | RUN | 0.123428 | 0.401684 | 0.665534 | 0.001325 | 0.001246 | 0.001384 |
| has_trivial_copy_test.test | RUN | 0.127250 | 0.427313 | 0.723650 | 0.001282 | 0.001417 | 0.001362 |
| has_trivial_constr_test.test | RUN | 0.131067 | 0.430947 | 0.707552 | 0.001292 | 0.001287 | 0.001463 |
| has_trivial_assign_test.test | RUN | 0.130752 | 0.431188 | 0.712626 | 0.001207 | 0.001373 | 0.001478 |
| has_right_shift_test.test | RUN | 0.193559 | 0.784583 | 1.558615 | 0.001168 | 0.001097 | 0.001077 |
| has_right_shift_assign_test.test | RUN | 0.184617 | 0.734436 | 1.462163 | 0.001173 | 0.001209 | 0.001208 |
| has_prefix_classes3_test.test | RUN | 0.133313 | 0.442067 | 0.756865 | 0.001305 | 0.001343 | 0.001248 |
| has_prefix_classes2_test.test | RUN | 0.139349 | 0.442971 | 0.759388 | 0.001230 | 0.001332 | 0.001156 |
| has_prefix_classes1_test.test | RUN | 0.134896 | 0.441725 | 0.731451 | 0.001215 | 0.001258 | 0.001309 |
| has_prefix_classes0_test.test | RUN | 0.134260 | 0.443601 | 0.719884 | 0.001112 | 0.001154 | 0.001292 |
| has_pre_increment_test.test | RUN | 0.183960 | 0.938861 | 1.468717 | 0.001125 | 0.001124 | 0.001182 |
| has_pre_decrement_test.test | RUN | 0.182460 | 0.961953 | 1.456456 | 0.001100 | 0.001152 | 0.001144 |
| has_postfix_classes3_test.test | RUN | 0.132826 | 0.442071 | 0.729999 | 0.001213 | 0.001216 | 0.001229 |
| has_postfix_classes2_test.test | RUN | 0.133183 | 0.434878 | 0.720822 | 0.001236 | 0.001167 | 0.001236 |
| has_postfix_classes1_test.test | RUN | 0.136591 | 0.445525 | 0.738367 | 0.001385 | 0.001141 | 0.001281 |
| has_postfix_classes0_test.test | RUN | 0.139816 | 0.438392 | 0.732383 | 0.001227 | 0.001257 | 0.001301 |
| has_post_increment_test.test | RUN | 0.182463 | 0.959926 | 1.500641 | 0.001174 | 0.001268 | 0.001079 |
| has_post_decrement_test.test | RUN | 0.180910 | 0.970310 | 1.490381 | 0.001313 | 0.001344 | 0.001149 |
| has_plus_test.test | RUN | 0.185223 | 0.734589 | 1.477084 | 0.001320 | 0.001237 | 0.001401 |
| has_plus_assign_test.test | RUN | 0.191644 | 0.749171 | 1.489413 | 0.001199 | 0.001231 | 0.001139 |
| has_operator_new_test.test | RUN | 0.127348 | 0.389525 | 0.666035 | 0.001137 | 0.001323 | 0.001262 |
| has_nothrow_destructor_test.test | RUN | 0.128138 | 0.430516 | 0.722533 | 0.001149 | 0.001242 | 0.001099 |
| has_nothrow_copy_test.test | RUN | 0.125147 | 0.409365 | 0.686063 | 0.001391 | 0.001233 | 0.001207 |
| has_nothrow_constr_test.test | RUN | 0.124815 | 0.394429 | 0.669305 | 0.001241 | 0.001312 | 0.001137 |
| has_nothrow_assign_test.test | RUN | 0.120319 | 0.399983 | 0.647765 | 0.001121 | 0.001214 | 0.001264 |
| has_not_equal_to_test.test | RUN | 0.184963 | 0.939442 | 1.469845 | 0.001140 | 0.001257 | 0.001172 |
| has_negate_test.test | RUN | 0.177664 | 0.709314 | 1.411983 | 0.001422 | 0.001267 | 0.001381 |
| has_multiplies_test.test | RUN | 0.182328 | 0.740773 | 1.442084 | 0.001137 | 0.001135 | 0.001252 |
| has_multiplies_assign_test.test | RUN | 0.187536 | 0.735153 | 1.419338 | 0.001386 | 0.001371 | 0.001218 |
| has_modulus_test.test | RUN | 0.185072 | 0.736135 | 1.431057 | 0.001121 | 0.001228 | 0.001116 |
| has_modulus_assign_test.test | RUN | 0.184794 | 0.741069 | 1.463314 | 0.001314 | 0.001130 | 0.001304 |
| has_minus_test.test | RUN | 0.187824 | 0.765050 | 1.425532 | 0.001228 | 0.001146 | 0.001176 |
| has_minus_assign_test.test | RUN | 0.191869 | 0.761199 | 1.480271 | 0.001418 | 0.001284 | 0.001108 |
| has_logical_or_test.test | RUN | 0.184039 | 0.739066 | 1.423890 | 0.001212 | 0.001192 | 0.001162 |
| has_logical_not_test.test | RUN | 0.178982 | 0.720004 | 1.403386 | 0.001369 | 0.000863 | 0.001283 |
| has_logical_and_test.test | RUN | 0.183058 | 0.749702 | 1.432979 | 0.001265 | 0.001242 | 0.001085 |
| has_less_test.test | RUN | 0.184467 | 0.940111 | 1.454830 | 0.001548 | 0.001205 | 0.001082 |
| has_less_equal_test.test | RUN | 0.186354 | 0.939736 | 1.432049 | 0.001170 | 0.001256 | 0.001156 |
| has_left_shift_test.test | RUN | 0.205545 | 0.924459 | 1.824316 | 0.001085 | 0.001081 | 0.001297 |
| has_left_shift_assign_test.test | RUN | 0.183849 | 0.728334 | 1.411862 | 0.001129 | 0.001326 | 0.001172 |
| has_greater_test.test | RUN | 0.185925 | 0.927843 | 1.481512 | 0.001488 | 0.001327 | 0.001320 |
| has_greater_equal_test.test | RUN | 0.184274 | 0.948703 | 1.450264 | 0.001205 | 0.001109 | 0.001142 |
| has_equal_to_test.test | RUN | 0.186170 | 0.928911 | 1.437856 | 0.001207 | 0.001378 | 0.001140 |
| has_divides_test.test | RUN | 0.188367 | 0.746707 | 1.471410 | 0.001179 | 0.001316 | 0.001202 |
| has_divides_assign_test.test | RUN | 0.181814 | 0.731284 | 1.459501 | 0.001235 | 0.001160 | 0.001112 |
| has_dereference_test.test | RUN | 0.180017 | 0.722423 | 1.341476 | 0.001199 | 0.001290 | 0.001166 |
| has_complement_test.test | RUN | 0.182576 | 0.960305 | 1.447287 | 0.001234 | 0.001320 | 0.001290 |
| has_bit_xor_test.test | RUN | 0.183635 | 0.741627 | 1.423117 | 0.001199 | 0.001278 | 0.001124 |
| has_bit_xor_assign_test.test | RUN | 0.184607 | 0.726974 | 1.436085 | 0.001460 | 0.001164 | 0.001175 |
| has_bit_or_test.test | RUN | 0.182249 | 0.731039 | 1.411466 | 0.001064 | 0.001300 | 0.001162 |
| has_bit_or_assign_test.test | RUN | 0.185380 | 0.737945 | 1.452793 | 0.001183 | 0.001201 | 0.001180 |
| has_bit_and_test.test | RUN | 0.182415 | 0.724261 | 1.421444 | 0.001107 | 0.001241 | 0.001104 |
| has_bit_and_assign_test.test | RUN | 0.189871 | 0.730661 | 1.439798 | 0.001437 | 0.001248 | 0.001141 |
| has_binary_classes9_test.test | RUN | 0.200340 | 0.880515 | 1.632650 | 0.001159 | 0.001391 | 0.001170 |
| has_binary_classes8_test.test | RUN | 0.200709 | 0.889066 | 1.630896 | 0.001139 | 0.001254 | 0.001233 |
| has_binary_classes7_test.test | RUN | 0.198616 | 0.876929 | 1.603038 | 0.001082 | 0.001250 | 0.001048 |
| has_binary_classes6_test.test | RUN | 0.198316 | 0.839871 | 1.635818 | 0.001101 | 0.001140 | 0.001042 |
| has_binary_classes5_test.test | RUN | 0.197837 | 0.853156 | 1.612260 | 0.001189 | 0.001237 | 0.001193 |
| has_binary_classes4_test.test | RUN | 0.205360 | 0.886060 | 1.648934 | 0.001239 | 0.001041 | 0.001129 |
| has_binary_classes3_test.test | RUN | 0.204500 | 0.879212 | 1.615056 | 0.001180 | 0.001302 | 0.001079 |
| has_binary_classes2_test.test | RUN | 0.206829 | 0.883902 | 1.642718 | 0.001353 | 0.001202 | 0.001094 |
| has_binary_classes1_test.test | RUN | 0.199435 | 0.886191 | 1.582911 | 0.001233 | 0.001352 | 0.001133 |
| has_binary_classes0_test.test | RUN | 0.205561 | 0.895194 | 1.603350 | 0.001274 | 0.001089 | 0.001112 |
| function_traits_test.test | RUN | 0.092816 | 0.238585 | 0.338809 | 0.001140 | 0.001318 | 0.001058 |
| floating_point_promotion_test.test | RUN | 0.090469 | 0.233286 | 0.305239 | 0.001356 | 0.001287 | 0.001067 |
| extent_test.test | RUN | 0.093461 | 0.238577 | 0.318938 | 0.001327 | 0.001088 | 0.001137 |
| enable_if_test.test | RUN | 0.085184 | 0.199771 | 0.262766 | 0.001098 | 0.001175 | 0.001118 |
| disjunction_test.test | RUN | 0.091150 | 0.204828 | 0.272570 | 0.001263 | 0.001260 | 0.001197 |
| detected_test.test | RUN | 0.086406 | 0.197359 | 0.252417 | 0.001352 | 0.001410 | 0.001092 |
| detected_or_test.test | RUN | 0.088179 | 0.209943 | 0.273539 | 0.001212 | 0.001190 | 0.001054 |
| decay_test.test | RUN | 0.223716 | 0.786526 | 1.563673 | 0.001268 | 0.001373 | 0.001032 |
| cxx14_aliases_test.test | RUN | 0.138921 | 0.310788 | 0.437733 | 0.001261 | 0.001311 | 0.001155 |
| copy_reference_test.test | RUN | 0.087591 | 0.201141 | 0.270916 | 0.001217 | 0.001218 | 0.001105 |
| copy_cv_test.test | RUN | 0.091168 | 0.218691 | 0.282507 | 0.001295 | 0.001163 | 0.001034 |
| copy_cv_ref_test.test | RUN | 0.131061 | 0.361193 | 0.634329 | 0.001247 | 0.001174 | 0.001081 |
| conjunction_test.test | RUN | 0.089931 | 0.209701 | 0.279806 | 0.001163 | 0.001396 | 0.001057 |
| conditional_test.test | RUN | 0.090029 | 0.204072 | 0.270951 | 0.001342 | 0.001210 | 0.001045 |
| common_type_test.test | RUN | 0.121864 | 0.320851 | 0.511559 | 0.001243 | 0.001384 | 0.001045 |
| common_type_sfinae_test.test | RUN | 0.088561 | 0.199513 | 0.245715 | 0.001086 | 0.001382 | 0.001001 |
| common_type_sfinae2_test.test | RUN | 0.091875 | 0.208537 | 0.268877 | 0.001214 | 0.001185 | 0.001115 |
| common_type_6_test.test | RUN | 0.094020 | 0.214611 | 0.281042 | 0.001293 | 0.001206 | 0.001048 |
| common_type_5_test.test | RUN | 0.094098 | 0.212816 | 0.280800 | 0.001211 | 0.001366 | 0.001088 |
| common_type_4_test.test | RUN | 0.098890 | 0.228345 | 0.329523 | 0.001188 | 0.001166 | 0.001080 |
| common_type_3_test.test | RUN | 0.085277 | 0.196146 | 0.248233 | 0.001251 | 0.001010 | 0.001134 |
| common_type_2_test.test | RUN | 0.117990 | 0.312432 | 0.517797 | 0.001342 | 0.001333 | 0.001038 |
| alignment_of_test.test | RUN | 0.094682 | 0.250644 | 0.338552 | 0.001214 | 0.001223 | 0.001127 |
| alignment_of_a2_test.test | RUN | 0.093987 | 0.250499 | 0.332571 | 0.001292 | 0.001204 | 0.001112 |
| aligned_storage_test.test | RUN | 0.098470 | 0.247600 | 0.316994 | 0.001246 | 0.001009 | 0.001114 |
| aligned_storage_empy_test.test | RUN | 0.106941 | 0.276103 | 0.416497 | 0.001326 | 0.001173 | 0.001097 |
| aligned_storage_a2_test.test | RUN | 0.093966 | 0.247477 | 0.311869 | 0.001357 | 0.001472 | 0.001061 |
| add_volatile_test.test | RUN | 0.205057 | 0.700792 | 1.464857 | 0.001190 | 0.001194 | 0.001081 |
| add_rvalue_reference_test.test | RUN | 0.229559 | 0.795426 | 1.701448 | 0.001327 | 0.001221 | 0.001200 |
| add_reference_test.test | RUN | 0.224640 | 0.779121 | 1.609494 | 0.001440 | 0.001312 | 0.001170 |
| add_pointer_test.test | RUN | 0.144281 | 0.455317 | 0.853853 | 0.001239 | 0.001281 | 0.001082 |
| add_lvalue_reference_test.test | RUN | 0.221320 | 0.776315 | 1.673607 | 0.001451 | 0.001281 | 0.001107 |
| add_cv_test.test | RUN | 0.207805 | 0.741964 | 1.569985 | 0.000999 | 0.001338 | 0.001072 |
| add_const_test.test | RUN | 0.210262 | 0.738657 | 1.481651 | 0.001195 | 0.001229 | 0.001050 |
| is_virtual_base_of_fail.test | COMPILE_FAIL | 0.082124 | 0.191963 | 0.256695 | — | — | — |
| is_stateless_fail.test | COMPILE_FAIL | 0.086868 | 0.195354 | 0.263393 | — | — | — |
| is_polymorphic_fail.test | COMPILE_FAIL | 0.081648 | 0.186854 | 0.249095 | — | — | — |
| is_nothrow_move_constructible_fail.test | COMPILE_FAIL | 0.081574 | 0.187258 | 0.237591 | — | — | — |
| is_nothrow_move_assignable_fail.test | COMPILE_FAIL | 0.083213 | 0.191099 | 0.243180 | — | — | — |
| is_list_constructible_fail.test | COMPILE_FAIL | 0.081563 | 0.189867 | 0.230157 | — | — | — |
| is_empty_fail.test | COMPILE_FAIL | 0.083317 | 0.189105 | 0.238593 | — | — | — |
| is_destructible_fail.test | COMPILE_FAIL | 0.080911 | 0.186614 | 0.240139 | — | — | — |
| is_default_constructible_fail.test | COMPILE_FAIL | 0.081032 | 0.190890 | 0.241197 | — | — | — |
| is_copy_constructible_fail.test | COMPILE_FAIL | 0.081079 | 0.191336 | 0.241050 | — | — | — |
| is_copy_assignable_fail.test | COMPILE_FAIL | 0.081992 | 0.187568 | 0.239257 | — | — | — |
| is_convertible_fail.test | COMPILE_FAIL | 0.081431 | 0.189678 | 0.238209 | — | — | — |
| is_convertible2_fail.test | COMPILE_FAIL | 0.081973 | 0.192885 | 0.238937 | — | — | — |
| is_constructible_fail.test | COMPILE_FAIL | 0.082277 | 0.190885 | 0.242241 | — | — | — |
| is_base_of_fail.test | COMPILE_FAIL | 0.080815 | 0.187742 | 0.232531 | — | — | — |
| is_assignable_fail.test | COMPILE_FAIL | 0.082267 | 0.189538 | 0.244725 | — | — | — |
| has_nothrow_destruct_fail.test | COMPILE_FAIL | 0.080992 | 0.190642 | 0.245874 | — | — | — |
| has_nothrow_copy_fail.test | COMPILE_FAIL | 0.084168 | 0.191383 | 0.246298 | — | — | — |
| has_nothrow_cons_fail.test | COMPILE_FAIL | 0.083174 | 0.187791 | 0.243032 | — | — | — |
| has_nothrow_assign_fail.test | COMPILE_FAIL | 0.082134 | 0.188552 | 0.247341 | — | — | — |
| common_type_fail.test | COMPILE_FAIL | 0.082822 | 0.191224 | 0.247203 | — | — | — |
| common_type2_fail.test | COMPILE_FAIL | 0.084021 | 0.191625 | 0.243403 | — | — | — |
| has_nothrow_assign_test_no_intrinsics.test | RUN | 0.128010 | 0.399830 | 0.675497 | 0.001447 | 0.001237 | 0.001079 |
| has_nothrow_constr_test_no_intrinsics.test | RUN | 0.121925 | 0.405977 | 0.668452 | 0.001224 | 0.001491 | 0.001111 |
| has_nothrow_copy_test_no_intrinsics.test | RUN | 0.123494 | 0.406848 | 0.675898 | 0.001229 | 0.001276 | 0.000804 |
| is_nothrow_move_assignable_test_no_intrinsics.test | RUN | 0.125513 | 0.402917 | 0.639347 | 0.000925 | 0.000903 | 0.000748 |
| is_nothrow_move_constructible_test_no_intrinsics.test | RUN | 0.081273 | 0.287106 | 0.409387 | 0.001023 | 0.000876 | 0.000748 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.994× | 0.993×, 0.996× | 0.997× |
| clang | 1.030× | 1.030×, 1.030× | 0.992× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1364 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44362912212).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| add_const_test.test | 10 | 0.000780s | 0.000763s | 0.000772s | byte equality observed |
| add_cv_test.test | 10 | 0.000785s | 0.000762s | 0.000814s | byte equality observed |
| add_lvalue_reference_test.test | 10 | 0.000800s | 0.000746s | 0.000767s | byte equality observed |
| add_pointer_test.test | 10 | 0.000776s | 0.000783s | 0.000775s | byte equality observed |
| add_reference_test.test | 10 | 0.000796s | 0.000795s | 0.000757s | byte equality observed |
| add_rvalue_reference_test.test | 10 | 0.000772s | 0.000755s | 0.000791s | byte equality observed |
| add_volatile_test.test | 10 | 0.000798s | 0.000789s | 0.000781s | byte equality observed |
| aligned_storage_a2_test.test | 10 | 0.000826s | 0.000843s | 0.000804s | byte equality observed |
| aligned_storage_empy_test.test | 10 | 0.000795s | 0.000770s | 0.000791s | byte equality observed |
| aligned_storage_test.test | 10 | 0.000829s | 0.000829s | 0.000839s | byte equality observed |
| alignment_of_a2_test.test | 10 | 0.000763s | 0.000796s | 0.000806s | byte equality observed |
| alignment_of_test.test | 10 | 0.000787s | 0.000770s | 0.000806s | byte equality observed |
| common_type_2_test.test | 10 | 0.000761s | 0.000780s | 0.000772s | byte equality observed |
| common_type_3_test.test | 10 | 0.000758s | 0.000771s | 0.000777s | byte equality observed |
| common_type_4_test.test | 10 | 0.000758s | 0.000777s | 0.000764s | byte equality observed |
| common_type_5_test.test | 10 | 0.000776s | 0.000798s | 0.000783s | byte equality observed |
| common_type_6_test.test | 10 | 0.000808s | 0.000809s | 0.000774s | byte equality observed |
| common_type_sfinae2_test.test | 10 | 0.000776s | 0.000796s | 0.000793s | byte equality observed |
| common_type_sfinae_test.test | 10 | 0.000783s | 0.000784s | 0.000798s | byte equality observed |
| common_type_test.test | 10 | 0.000773s | 0.000788s | 0.000787s | byte equality observed |
| conditional_test.test | 10 | 0.000782s | 0.000759s | 0.000787s | byte equality observed |
| conjunction_test.test | 10 | 0.000777s | 0.000772s | 0.000768s | byte equality observed |
| copy_cv_ref_test.test | 10 | 0.000795s | 0.000757s | 0.000779s | byte equality observed |
| copy_cv_test.test | 10 | 0.000781s | 0.000789s | 0.000790s | byte equality observed |
| copy_reference_test.test | 10 | 0.000781s | 0.000792s | 0.000795s | byte equality observed |
| cxx14_aliases_test.test | 10 | 0.000791s | 0.000787s | 0.000785s | byte equality observed |
| decay_test.test | 10 | 0.000807s | 0.000808s | 0.000765s | byte equality observed |
| detected_or_test.test | 10 | 0.000792s | 0.000814s | 0.000782s | byte equality observed |
| detected_test.test | 10 | 0.000777s | 0.000821s | 0.000779s | byte equality observed |
| disjunction_test.test | 10 | 0.000780s | 0.000801s | 0.000772s | byte equality observed |
| enable_if_test.test | 10 | 0.000791s | 0.000816s | 0.000771s | byte equality observed |
| extent_test.test | 10 | 0.000780s | 0.000812s | 0.000808s | byte equality observed |
| floating_point_promotion_test.test | 10 | 0.000783s | 0.000799s | 0.000762s | byte equality observed |
| function_traits_test.test | 10 | 0.000758s | 0.000807s | 0.000790s | byte equality observed |
| has_binary_classes0_test.test | 10 | 0.000780s | 0.000801s | 0.000796s | byte equality observed |
| has_binary_classes1_test.test | 10 | 0.000783s | 0.000780s | 0.000793s | byte equality observed |
| has_binary_classes2_test.test | 10 | 0.000780s | 0.000781s | 0.000786s | byte equality observed |
| has_binary_classes3_test.test | 10 | 0.000771s | 0.000806s | 0.000793s | byte equality observed |
| has_binary_classes4_test.test | 10 | 0.000799s | 0.000796s | 0.000791s | byte equality observed |
| has_binary_classes5_test.test | 10 | 0.000769s | 0.000797s | 0.000792s | byte equality observed |
| has_binary_classes6_test.test | 10 | 0.000781s | 0.000763s | 0.000788s | byte equality observed |
| has_binary_classes7_test.test | 10 | 0.000783s | 0.000769s | 0.000761s | byte equality observed |
| has_binary_classes8_test.test | 10 | 0.000767s | 0.000791s | 0.000793s | byte equality observed |
| has_binary_classes9_test.test | 10 | 0.000786s | 0.000802s | 0.000799s | byte equality observed |
| has_bit_and_assign_test.test | 10 | 0.000780s | 0.000785s | 0.000802s | byte equality observed |
| has_bit_and_test.test | 10 | 0.000796s | 0.000789s | 0.000803s | byte equality observed |
| has_bit_or_assign_test.test | 10 | 0.000821s | 0.000778s | 0.000783s | byte equality observed |
| has_bit_or_test.test | 10 | 0.000782s | 0.000770s | 0.000788s | byte equality observed |
| has_bit_xor_assign_test.test | 10 | 0.000780s | 0.000789s | 0.000786s | byte equality observed |
| has_bit_xor_test.test | 10 | 0.000767s | 0.000795s | 0.000781s | byte equality observed |
| has_complement_test.test | 10 | 0.000775s | 0.000814s | 0.000777s | byte equality observed |
| has_dereference_test.test | 10 | 0.000792s | 0.000765s | 0.000784s | byte equality observed |
| has_divides_assign_test.test | 10 | 0.000756s | 0.000781s | 0.000791s | byte equality observed |
| has_divides_test.test | 10 | 0.000777s | 0.000793s | 0.000787s | byte equality observed |
| has_equal_to_test.test | 10 | 0.000799s | 0.000773s | 0.000784s | byte equality observed |
| has_greater_equal_test.test | 10 | 0.000807s | 0.000802s | 0.000771s | byte equality observed |
| has_greater_test.test | 10 | 0.000800s | 0.000808s | 0.000785s | byte equality observed |
| has_left_shift_assign_test.test | 10 | 0.000809s | 0.000766s | 0.000787s | byte equality observed |
| has_left_shift_test.test | 10 | 0.000811s | 0.000779s | 0.000809s | byte equality observed |
| has_less_equal_test.test | 10 | 0.000786s | 0.000775s | 0.000770s | byte equality observed |
| has_less_test.test | 10 | 0.000776s | 0.000773s | 0.000776s | byte equality observed |
| has_logical_and_test.test | 10 | 0.000765s | 0.000813s | 0.000761s | byte equality observed |
| has_logical_not_test.test | 10 | 0.000775s | 0.000789s | 0.000766s | byte equality observed |
| has_logical_or_test.test | 10 | 0.000787s | 0.000785s | 0.000778s | byte equality observed |
| has_minus_assign_test.test | 10 | 0.000774s | 0.000790s | 0.000796s | byte equality observed |
| has_minus_test.test | 10 | 0.000790s | 0.000797s | 0.000796s | byte equality observed |
| has_modulus_assign_test.test | 10 | 0.000770s | 0.000812s | 0.000797s | byte equality observed |
| has_modulus_test.test | 10 | 0.000782s | 0.000772s | 0.000785s | byte equality observed |
| has_multiplies_assign_test.test | 10 | 0.000765s | 0.000760s | 0.000776s | byte equality observed |
| has_multiplies_test.test | 10 | 0.000778s | 0.000786s | 0.000798s | byte equality observed |
| has_negate_test.test | 10 | 0.000774s | 0.000779s | 0.000779s | byte equality observed |
| has_not_equal_to_test.test | 10 | 0.000783s | 0.000794s | 0.000780s | byte equality observed |
| has_nothrow_assign_test.test | 10 | 0.000789s | 0.000793s | 0.000784s | byte equality observed |
| has_nothrow_assign_test_no_intrinsics.test | 10 | 0.000777s | 0.000795s | 0.000783s | byte equality observed |
| has_nothrow_constr_test.test | 10 | 0.000781s | 0.000785s | 0.000792s | byte equality observed |
| has_nothrow_constr_test_no_intrinsics.test | 10 | 0.000786s | 0.000776s | 0.000793s | byte equality observed |
| has_nothrow_copy_test.test | 10 | 0.000806s | 0.000766s | 0.000791s | byte equality observed |
| has_nothrow_copy_test_no_intrinsics.test | 10 | 0.000786s | 0.000778s | 0.000791s | byte equality observed |
| has_nothrow_destructor_test.test | 10 | 0.000790s | 0.000778s | 0.000773s | byte equality observed |
| has_operator_new_test.test | 10 | 0.000768s | 0.000759s | 0.000776s | byte equality observed |
| has_plus_assign_test.test | 10 | 0.000778s | 0.000773s | 0.000773s | byte equality observed |
| has_plus_test.test | 10 | 0.000799s | 0.000796s | 0.000774s | byte equality observed |
| has_post_decrement_test.test | 10 | 0.000763s | 0.000784s | 0.000789s | byte equality observed |
| has_post_increment_test.test | 10 | 0.000795s | 0.000794s | 0.000785s | byte equality observed |
| has_postfix_classes0_test.test | 10 | 0.000806s | 0.000800s | 0.000795s | byte equality observed |
| has_postfix_classes1_test.test | 10 | 0.000780s | 0.000801s | 0.000773s | byte equality observed |
| has_postfix_classes2_test.test | 10 | 0.000794s | 0.000781s | 0.000774s | byte equality observed |
| has_postfix_classes3_test.test | 10 | 0.000783s | 0.000797s | 0.000775s | byte equality observed |
| has_pre_decrement_test.test | 10 | 0.000793s | 0.000813s | 0.000781s | byte equality observed |
| has_pre_increment_test.test | 10 | 0.000791s | 0.000805s | 0.000780s | byte equality observed |
| has_prefix_classes0_test.test | 10 | 0.000793s | 0.000792s | 0.000781s | byte equality observed |
| has_prefix_classes1_test.test | 10 | 0.000813s | 0.000783s | 0.000798s | byte equality observed |
| has_prefix_classes2_test.test | 10 | 0.000783s | 0.000790s | 0.000804s | byte equality observed |
| has_prefix_classes3_test.test | 10 | 0.000777s | 0.000798s | 0.000820s | byte equality observed |
| has_right_shift_assign_test.test | 10 | 0.000788s | 0.000785s | 0.000812s | byte equality observed |
| has_right_shift_test.test | 10 | 0.000797s | 0.000783s | 0.000820s | byte equality observed |
| has_trivial_assign_test.test | 10 | 0.000813s | 0.000801s | 0.000782s | byte equality observed |
| has_trivial_constr_test.test | 10 | 0.000811s | 0.000810s | 0.000810s | native test oracle; output varies |
| has_trivial_copy_test.test | 10 | 0.000819s | 0.000807s | 0.000834s | native test oracle; output varies |
| has_trivial_destructor_test.test | 10 | 0.000793s | 0.000803s | 0.000785s | byte equality observed |
| has_trivial_move_assign_test.test | 10 | 0.000792s | 0.000784s | 0.000779s | byte equality observed |
| has_trivial_move_constructor_test.test | 10 | 0.000784s | 0.000776s | 0.000785s | byte equality observed |
| has_unary_minus_test.test | 10 | 0.000780s | 0.000780s | 0.000758s | byte equality observed |
| has_unary_plus_test.test | 10 | 0.000782s | 0.000789s | 0.000758s | byte equality observed |
| has_virtual_destructor_test.test | 10 | 0.000772s | 0.000778s | 0.000774s | byte equality observed |
| integral_constant_test.test | 10 | 0.000356s | 0.000355s | 0.000796s | byte equality observed |
| is_abstract_test.test | 10 | 0.000775s | 0.000768s | 0.000755s | byte equality observed |
| is_arithmetic_test.test | 10 | 0.000781s | 0.000795s | 0.000769s | byte equality observed |
| is_array_test.test | 10 | 0.000781s | 0.000780s | 0.000760s | byte equality observed |
| is_assignable_test.test | 10 | 0.000763s | 0.000776s | 0.000785s | byte equality observed |
| is_base_and_derived_test.test | 10 | 0.000775s | 0.000803s | 0.000810s | byte equality observed |
| is_base_of_test.test | 10 | 0.000764s | 0.000792s | 0.000801s | byte equality observed |
| is_bounded_array_test.test | 10 | 0.000776s | 0.000805s | 0.000803s | byte equality observed |
| is_class_test.test | 10 | 0.000779s | 0.000777s | 0.000811s | byte equality observed |
| is_complete_test.test | 10 | 0.000782s | 0.000769s | 0.000807s | byte equality observed |
| is_complex_test.test | 10 | 0.000778s | 0.000787s | 0.000780s | byte equality observed |
| is_compound_test.test | 10 | 0.000797s | 0.000780s | 0.000782s | byte equality observed |
| is_const_test.test | 10 | 0.000781s | 0.000790s | 0.000777s | byte equality observed |
| is_constructible_test.test | 10 | 0.000790s | 0.000770s | 0.000779s | byte equality observed |
| is_convertible_test.test | 10 | 0.000786s | 0.000783s | 0.000801s | byte equality observed |
| is_copy_assignable_test.test | 10 | 0.000784s | 0.000787s | 0.000803s | byte equality observed |
| is_copy_constructible_test.test | 10 | 0.000785s | 0.000757s | 0.000772s | byte equality observed |
| is_default_constr_test.test | 10 | 0.000802s | 0.000764s | 0.000787s | byte equality observed |
| is_destructible_test.test | 10 | 0.000794s | 0.000783s | 0.000787s | byte equality observed |
| is_detected_exact_test.test | 10 | 0.000797s | 0.000782s | 0.000782s | byte equality observed |
| is_detected_test.test | 10 | 0.000788s | 0.000770s | 0.000789s | byte equality observed |
| is_empty_test.test | 10 | 0.000793s | 0.000773s | 0.000810s | byte equality observed |
| is_enum_test.test | 10 | 0.000806s | 0.000783s | 0.000802s | byte equality observed |
| is_final_test.test | 10 | 0.000786s | 0.000806s | 0.000770s | byte equality observed |
| is_float_test.test | 10 | 0.000805s | 0.000810s | 0.000776s | byte equality observed |
| is_floating_point_test.test | 10 | 0.000786s | 0.000766s | 0.000790s | byte equality observed |
| is_function_test.test | 10 | 0.000755s | 0.000804s | 0.000809s | byte equality observed |
| is_fundamental_test.test | 10 | 0.000799s | 0.000806s | 0.000806s | byte equality observed |
| is_integral_test.test | 10 | 0.000789s | 0.000779s | 0.000823s | byte equality observed |
| is_list_constructible_test.test | 10 | 0.000782s | 0.000787s | 0.000777s | byte equality observed |
| is_lvalue_reference_test.test | 10 | 0.000778s | 0.000767s | 0.000776s | byte equality observed |
| is_member_func_test.test | 10 | 0.000783s | 0.000782s | 0.000766s | byte equality observed |
| is_member_obj_test.test | 10 | 0.000775s | 0.000821s | 0.000788s | byte equality observed |
| is_member_pointer_test.test | 10 | 0.000796s | 0.000794s | 0.000776s | byte equality observed |
| is_noncopyable_test.test | 10 | 0.000773s | 0.000799s | 0.000794s | byte equality observed |
| is_nothrow_move_assignable_test.test | 10 | 0.000776s | 0.000772s | 0.000790s | byte equality observed |
| is_nothrow_move_assignable_test_no_intrinsics.test | 10 | 0.000773s | 0.000762s | 0.000778s | byte equality observed |
| is_nothrow_move_constructible_test.test | 10 | 0.000776s | 0.000774s | 0.000768s | byte equality observed |
| is_nothrow_move_constructible_test_no_intrinsics.test | 10 | 0.000767s | 0.000763s | 0.000790s | byte equality observed |
| is_nothrow_swappable_test.test | 10 | 0.000788s | 0.000792s | 0.000787s | byte equality observed |
| is_object_test.test | 10 | 0.000800s | 0.000753s | 0.000784s | byte equality observed |
| is_pod_test.test | 10 | 0.000797s | 0.000768s | 0.000766s | byte equality observed |
| is_pointer_test.test | 10 | 0.000781s | 0.000773s | 0.000812s | byte equality observed |
| is_polymorphic_test.test | 10 | 0.000778s | 0.000793s | 0.000777s | byte equality observed |
| is_reference_test.test | 10 | 0.000762s | 0.000774s | 0.000795s | byte equality observed |
| is_rvalue_reference_test.test | 10 | 0.000770s | 0.000755s | 0.000791s | byte equality observed |
| is_same_test.test | 10 | 0.000780s | 0.000755s | 0.000766s | byte equality observed |
| is_scalar_test.test | 10 | 0.000784s | 0.000781s | 0.000787s | byte equality observed |
| is_scoped_enum_test.test | 10 | 0.000784s | 0.000785s | 0.000784s | byte equality observed |
| is_signed_test.test | 10 | 0.000795s | 0.000789s | 0.000790s | byte equality observed |
| is_stateless_test.test | 10 | 0.000790s | 0.000779s | 0.000794s | byte equality observed |
| is_swappable_test.test | 10 | 0.000790s | 0.000786s | 0.000806s | byte equality observed |
| is_trivially_copyable_test.test | 10 | 0.000792s | 0.000790s | 0.000809s | byte equality observed |
| is_unbounded_array_test.test | 10 | 0.000777s | 0.000760s | 0.000758s | byte equality observed |
| is_union_test.test | 10 | 0.000777s | 0.000763s | 0.000799s | byte equality observed |
| is_unscoped_enum_test.test | 10 | 0.000771s | 0.000799s | 0.000769s | byte equality observed |
| is_unsigned_test.test | 10 | 0.000771s | 0.000784s | 0.000785s | byte equality observed |
| is_virtual_base_of_test.test | 10 | 0.000779s | 0.000797s | 0.000780s | byte equality observed |
| is_void_test.test | 10 | 0.000786s | 0.000778s | 0.000786s | byte equality observed |
| is_volatile_test.test | 10 | 0.000798s | 0.000762s | 0.000786s | byte equality observed |
| make_signed_test.test | 10 | 0.000783s | 0.000762s | 0.000775s | byte equality observed |
| make_unsigned_test.test | 10 | 0.000792s | 0.000774s | 0.000774s | byte equality observed |
| make_void_test.test | 10 | 0.000775s | 0.000792s | 0.000789s | byte equality observed |
| mpl_interop_test1.test | 10 | 0.000368s | 0.000355s | 0.000789s | byte equality observed |
| mpl_interop_test2.test | 10 | 0.000361s | 0.000357s | 0.000778s | byte equality observed |
| mpl_interop_test3.test | 10 | 0.000351s | 0.000355s | 0.000799s | byte equality observed |
| negation_test.test | 10 | 0.000788s | 0.000772s | 0.000765s | byte equality observed |
| promote_basic_test.test | 10 | 0.000356s | 0.000360s | 0.000784s | byte equality observed |
| promote_enum_msvc_bug_test.test | 10 | 0.000365s | 0.000360s | 0.000745s | byte equality observed |
| promote_enum_test.test | 10 | 0.000360s | 0.000357s | 0.000770s | byte equality observed |
| promote_mpl_test.test | 10 | 0.000349s | 0.000358s | 0.000765s | byte equality observed |
| rank_test.test | 10 | 0.000762s | 0.000786s | 0.000762s | byte equality observed |
| remove_all_extents_test.test | 10 | 0.000797s | 0.000763s | 0.000766s | byte equality observed |
| remove_bounds_test.test | 10 | 0.000790s | 0.000786s | 0.000758s | byte equality observed |
| remove_const_test.test | 10 | 0.000785s | 0.000766s | 0.000752s | byte equality observed |
| remove_cv_ref_test.test | 10 | 0.000792s | 0.000798s | 0.000750s | byte equality observed |
| remove_cv_test.test | 10 | 0.000787s | 0.000766s | 0.000775s | byte equality observed |
| remove_extent_test.test | 10 | 0.000773s | 0.000773s | 0.000763s | byte equality observed |
| remove_pointer_test.test | 10 | 0.000780s | 0.000749s | 0.000763s | byte equality observed |
| remove_reference_test.test | 10 | 0.000784s | 0.000771s | 0.000797s | byte equality observed |
| remove_volatile_test.test | 10 | 0.000787s | 0.000774s | 0.000771s | byte equality observed |
| tricky_abstract_type_test.test | 10 | 0.000780s | 0.000757s | 0.000779s | byte equality observed |
| tricky_add_pointer_test.test | 10 | 0.000784s | 0.000784s | 0.000790s | byte equality observed |
| tricky_function_type_test.test | 10 | 0.000763s | 0.000788s | 0.000779s | byte equality observed |
| tricky_incomplete_type_test.test | 10 | 0.000774s | 0.000797s | 0.000785s | byte equality observed |
| tricky_is_enum_test.test | 10 | 0.000759s | 0.000799s | 0.000779s | byte equality observed |
| tricky_partial_spec_test.test | 10 | 0.000785s | 0.000794s | 0.000808s | byte equality observed |
| tricky_rvalue_test.test | 10 | 0.000790s | 0.000807s | 0.000822s | byte equality observed |
| type_identity_test.test | 10 | 0.000804s | 0.000798s | 0.000788s | byte equality observed |
| type_traits_test.test | 10 | 0.000355s | 0.000363s | 0.000794s | byte equality observed |
| type_with_alignment_test.test | 10 | 0.000838s | 0.000843s | 0.000819s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44362912212).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
