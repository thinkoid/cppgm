# libs/type_traits/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| type_with_alignment_test.test | RUN | 0.097062 | 0.274932 | 0.380992 | 0.001252 | 0.001274 | 0.001264 |
| type_traits_test.test | RUN | 0.131866 | 0.279750 | 0.374650 | 0.000421 | 0.000500 | 0.001022 |
| type_identity_test.test | RUN | 0.250489 | 0.954660 | 1.944964 | 0.001318 | 0.001265 | 0.001303 |
| tricky_rvalue_test.test | RUN | 0.089996 | 0.218776 | 0.295113 | 0.001254 | 0.001276 | 0.001058 |
| tricky_partial_spec_test.test | RUN | 0.113144 | 0.308087 | 0.482753 | 0.001362 | 0.001414 | 0.001339 |
| tricky_is_enum_test.test | RUN | 0.086140 | 0.205026 | 0.274866 | 0.001332 | 0.001246 | 0.001221 |
| tricky_incomplete_type_test.test | RUN | 0.141669 | 0.318835 | 0.446031 | 0.001132 | 0.000915 | 0.001088 |
| tricky_function_type_test.test | RUN | 0.117409 | 0.332808 | 0.527859 | 0.001219 | 0.001326 | 0.001190 |
| tricky_add_pointer_test.test | RUN | 0.164423 | 0.570893 | 1.112782 | 0.001413 | 0.001335 | 0.001308 |
| tricky_abstract_type_test.test | RUN | 0.093411 | 0.209421 | 0.279607 | 0.001334 | 0.001320 | 0.001167 |
| remove_volatile_test.test | RUN | 0.226399 | 0.832293 | 1.740097 | 0.001253 | 0.001357 | 0.001170 |
| remove_reference_test.test | RUN | 0.232199 | 0.887706 | 1.814526 | 0.001284 | 0.001362 | 0.001229 |
| remove_pointer_test.test | RUN | 0.245576 | 0.905298 | 1.942345 | 0.001323 | 0.001182 | 0.001205 |
| remove_extent_test.test | RUN | 0.237249 | 0.871415 | 1.842503 | 0.001224 | 0.001297 | 0.001194 |
| remove_cv_test.test | RUN | 0.234745 | 0.871874 | 1.849237 | 0.001347 | 0.001241 | 0.001376 |
| remove_cv_ref_test.test | RUN | 0.484059 | 2.150335 | 4.476461 | 0.001520 | 0.001182 | 0.001305 |
| remove_const_test.test | RUN | 0.222746 | 0.824113 | 1.736946 | 0.001453 | 0.001273 | 0.001206 |
| remove_bounds_test.test | RUN | 0.233672 | 0.875241 | 1.865083 | 0.001208 | 0.001371 | 0.001191 |
| remove_all_extents_test.test | RUN | 0.237222 | 0.871988 | 1.750037 | 0.001236 | 0.001200 | 0.001338 |
| rank_test.test | RUN | 0.086357 | 0.223690 | 0.301002 | 0.001442 | 0.001252 | 0.001153 |
| promote_mpl_test.test | RUN | 0.079832 | 0.194104 | 0.214116 | 0.000521 | 0.000476 | 0.001258 |
| promote_enum_test.test | RUN | 0.017246 | 0.048690 | 0.054519 | 0.000475 | 0.000509 | 0.001221 |
| promote_enum_msvc_bug_test.test | RUN | 0.015471 | 0.039850 | 0.045913 | 0.000448 | 0.000499 | 0.001145 |
| promote_basic_test.test | RUN | 0.018354 | 0.053604 | 0.056105 | 0.000511 | 0.000511 | 0.001293 |
| negation_test.test | RUN | 0.085490 | 0.209093 | 0.272260 | 0.001213 | 0.001188 | 0.001040 |
| mpl_interop_test3.test | RUN | 0.074263 | 0.184425 | 0.194679 | 0.000468 | 0.000423 | 0.001002 |
| mpl_interop_test2.test | RUN | 0.024147 | 0.051105 | 0.055228 | 0.000458 | 0.000428 | 0.001148 |
| mpl_interop_test1.test | RUN | 0.013393 | 0.037429 | 0.040211 | 0.000561 | 0.000542 | 0.001117 |
| make_void_test.test | RUN | 0.090815 | 0.215765 | 0.290052 | 0.001354 | 0.001224 | 0.001211 |
| make_unsigned_test.test | RUN | 0.105602 | 0.290245 | 0.406070 | 0.001325 | 0.001379 | 0.001285 |
| make_signed_test.test | RUN | 0.104732 | 0.285242 | 0.402753 | 0.001331 | 0.001232 | 0.001007 |
| is_volatile_test.test | RUN | 0.097122 | 0.242776 | 0.337843 | 0.001197 | 0.001066 | 0.001224 |
| is_void_test.test | RUN | 0.094475 | 0.232316 | 0.317633 | 0.001358 | 0.001289 | 0.001271 |
| is_virtual_base_of_test.test | RUN | 0.104751 | 0.292027 | 0.426093 | 0.001096 | 0.001161 | 0.001263 |
| is_unsigned_test.test | RUN | 0.093023 | 0.233835 | 0.320519 | 0.001132 | 0.001020 | 0.001066 |
| is_unscoped_enum_test.test | RUN | 0.093688 | 0.211356 | 0.275521 | 0.001164 | 0.001263 | 0.001196 |
| is_union_test.test | RUN | 0.099396 | 0.268246 | 0.388361 | 0.001347 | 0.001324 | 0.001147 |
| is_unbounded_array_test.test | RUN | 0.091607 | 0.225875 | 0.308283 | 0.001094 | 0.001408 | 0.001198 |
| is_trivially_copyable_test.test | RUN | 0.147785 | 0.479188 | 0.781212 | 0.001262 | 0.001479 | 0.001164 |
| is_swappable_test.test | RUN | 0.123578 | 0.359270 | 0.571598 | 0.001293 | 0.001223 | 0.001370 |
| is_stateless_test.test | RUN | 0.133711 | 0.412589 | 0.660369 | 0.001242 | 0.001136 | 0.001430 |
| is_signed_test.test | RUN | 0.091833 | 0.243344 | 0.328867 | 0.001468 | 0.001247 | 0.001057 |
| is_scoped_enum_test.test | RUN | 0.089895 | 0.220224 | 0.280241 | 0.001202 | 0.001278 | 0.001192 |
| is_scalar_test.test | RUN | 0.118543 | 0.378540 | 0.582515 | 0.001257 | 0.001594 | 0.001372 |
| is_same_test.test | RUN | 0.090668 | 0.230872 | 0.314070 | 0.001111 | 0.000886 | 0.001349 |
| is_rvalue_reference_test.test | RUN | 0.093907 | 0.254064 | 0.364959 | 0.001248 | 0.001245 | 0.001131 |
| is_reference_test.test | RUN | 0.095348 | 0.256704 | 0.366720 | 0.001155 | 0.001176 | 0.001144 |
| is_polymorphic_test.test | RUN | 0.095137 | 0.261745 | 0.381442 | 0.001379 | 0.001266 | 0.001180 |
| is_pointer_test.test | RUN | 0.096874 | 0.264967 | 0.369454 | 0.001348 | 0.001258 | 0.001382 |
| is_pod_test.test | RUN | 0.123027 | 0.416639 | 0.668398 | 0.001314 | 0.001336 | 0.001320 |
| is_object_test.test | RUN | 0.088349 | 0.216243 | 0.293060 | 0.001306 | 0.001223 | 0.001285 |
| is_nothrow_swappable_test.test | RUN | 0.127734 | 0.396612 | 0.642234 | 0.001005 | 0.001360 | 0.001188 |
| is_nothrow_move_constructible_test.test | RUN | 0.114706 | 0.399862 | 0.647740 | 0.001273 | 0.001337 | 0.001356 |
| is_nothrow_move_assignable_test.test | RUN | 0.122856 | 0.405427 | 0.649935 | 0.001172 | 0.001236 | 0.001024 |
| is_noncopyable_test.test | RUN | 0.088508 | 0.225103 | 0.305044 | 0.001289 | 0.001340 | 0.001176 |
| is_member_pointer_test.test | RUN | 0.092492 | 0.226092 | 0.299387 | 0.001140 | 0.001358 | 0.001265 |
| is_member_obj_test.test | RUN | 0.093140 | 0.226908 | 0.304166 | 0.001363 | 0.001306 | 0.001105 |
| is_member_func_test.test | RUN | 0.093621 | 0.244248 | 0.339398 | 0.001318 | 0.001118 | 0.001232 |
| is_lvalue_reference_test.test | RUN | 0.095795 | 0.259544 | 0.364262 | 0.001086 | 0.001309 | 0.001224 |
| is_list_constructible_test.test | RUN | 0.112524 | 0.299652 | 0.393846 | 0.001186 | 0.001337 | 0.001267 |
| is_integral_test.test | RUN | 0.113890 | 0.352852 | 0.565965 | 0.001383 | 0.001208 | 0.001157 |
| is_fundamental_test.test | RUN | 0.112987 | 0.365046 | 0.579913 | 0.001205 | 0.001416 | 0.001129 |
| is_function_test.test | RUN | 0.092645 | 0.243968 | 0.315522 | 0.001085 | 0.001240 | 0.001201 |
| is_floating_point_test.test | RUN | 0.095378 | 0.258039 | 0.358884 | 0.001362 | 0.001252 | 0.001210 |
| is_float_test.test | RUN | 0.097195 | 0.260637 | 0.357171 | 0.001400 | 0.001245 | 0.001330 |
| is_final_test.test | RUN | 0.095473 | 0.259807 | 0.381111 | 0.001288 | 0.001336 | 0.001130 |
| is_enum_test.test | RUN | 0.087169 | 0.222106 | 0.296225 | 0.001249 | 0.001155 | 0.001114 |
| is_empty_test.test | RUN | 0.093930 | 0.240566 | 0.326392 | 0.001107 | 0.001465 | 0.001244 |
| is_detected_test.test | RUN | 0.087879 | 0.206620 | 0.270609 | 0.001406 | 0.001187 | 0.001233 |
| is_detected_exact_test.test | RUN | 0.087798 | 0.208962 | 0.274639 | 0.001206 | 0.001162 | 0.001258 |
| is_destructible_test.test | RUN | 0.122438 | 0.398108 | 0.642297 | 0.001124 | 0.001426 | 0.001240 |
| is_default_constr_test.test | RUN | 0.125378 | 0.412322 | 0.656095 | 0.001128 | 0.001437 | 0.001306 |
| is_copy_constructible_test.test | RUN | 0.130553 | 0.431597 | 0.689567 | 0.001146 | 0.001107 | 0.001385 |
| is_copy_assignable_test.test | RUN | 0.132351 | 0.423251 | 0.695779 | 0.001190 | 0.001321 | 0.001310 |
| is_convertible_test.test | RUN | 0.126056 | 0.374736 | 0.564026 | 0.001235 | 0.001234 | 0.001210 |
| is_constructible_test.test | RUN | 0.101811 | 0.276712 | 0.405795 | 0.001116 | 0.001161 | 0.001128 |
| is_const_test.test | RUN | 0.091221 | 0.238270 | 0.331583 | 0.001312 | 0.001162 | 0.001222 |
| is_compound_test.test | RUN | 0.087960 | 0.212058 | 0.270395 | 0.001500 | 0.001210 | 0.001222 |
| is_complex_test.test | RUN | 0.120410 | 0.279473 | 0.377907 | 0.001175 | 0.001373 | 0.001192 |
| is_complete_test.test | RUN | 0.104673 | 0.286868 | 0.431881 | 0.001203 | 0.001166 | 0.001175 |
| is_class_test.test | RUN | 0.097586 | 0.251018 | 0.357899 | 0.001469 | 0.001246 | 0.001113 |
| is_bounded_array_test.test | RUN | 0.090621 | 0.227320 | 0.311361 | 0.001407 | 0.001156 | 0.001323 |
| is_base_of_test.test | RUN | 0.095815 | 0.246580 | 0.359009 | 0.001239 | 0.001382 | 0.001300 |
| is_base_and_derived_test.test | RUN | 0.093418 | 0.245533 | 0.351810 | 0.001061 | 0.001126 | 0.001212 |
| is_assignable_test.test | RUN | 0.116127 | 0.348070 | 0.541611 | 0.001227 | 0.001220 | 0.001320 |
| is_array_test.test | RUN | 0.090130 | 0.242850 | 0.332031 | 0.001173 | 0.000871 | 0.001300 |
| is_arithmetic_test.test | RUN | 0.115497 | 0.350979 | 0.539924 | 0.001097 | 0.001283 | 0.001354 |
| is_abstract_test.test | RUN | 0.203909 | 0.951583 | 1.991580 | 0.001172 | 0.001361 | 0.001239 |
| integral_constant_test.test | RUN | 0.013793 | 0.038816 | 0.040004 | 0.000520 | 0.000497 | 0.001258 |
| has_virtual_destructor_test.test | RUN | 0.099705 | 0.278656 | 0.424623 | 0.001264 | 0.001338 | 0.001364 |
| has_unary_plus_test.test | RUN | 0.192647 | 1.007247 | 1.471081 | 0.001402 | 0.001362 | 0.001380 |
| has_unary_minus_test.test | RUN | 0.182316 | 1.015992 | 1.440431 | 0.001234 | 0.001422 | 0.001350 |
| has_trivial_move_constructor_test.test | RUN | 0.127649 | 0.408762 | 0.685699 | 0.001168 | 0.001336 | 0.001465 |
| has_trivial_move_assign_test.test | RUN | 0.128933 | 0.409864 | 0.659463 | 0.001192 | 0.001324 | 0.001472 |
| has_trivial_destructor_test.test | RUN | 0.126265 | 0.414887 | 0.663680 | 0.001271 | 0.001035 | 0.001346 |
| has_trivial_copy_test.test | RUN | 0.131789 | 0.445379 | 0.720471 | 0.001281 | 0.001294 | 0.001474 |
| has_trivial_constr_test.test | RUN | 0.131372 | 0.447170 | 0.725840 | 0.001101 | 0.001296 | 0.001432 |
| has_trivial_assign_test.test | RUN | 0.131442 | 0.435451 | 0.689668 | 0.001128 | 0.001386 | 0.001244 |
| has_right_shift_test.test | RUN | 0.197294 | 0.791563 | 1.581990 | 0.001159 | 0.001252 | 0.001201 |
| has_right_shift_assign_test.test | RUN | 0.185661 | 0.761106 | 1.449846 | 0.001204 | 0.001308 | 0.001300 |
| has_prefix_classes3_test.test | RUN | 0.135017 | 0.444429 | 0.743353 | 0.001335 | 0.001234 | 0.001433 |
| has_prefix_classes2_test.test | RUN | 0.138648 | 0.446251 | 0.720739 | 0.001151 | 0.001220 | 0.001425 |
| has_prefix_classes1_test.test | RUN | 0.136357 | 0.448669 | 0.742160 | 0.001430 | 0.001244 | 0.001185 |
| has_prefix_classes0_test.test | RUN | 0.137669 | 0.454794 | 0.727531 | 0.001171 | 0.001195 | 0.001426 |
| has_pre_increment_test.test | RUN | 0.183381 | 0.969150 | 1.520373 | 0.001295 | 0.001170 | 0.001343 |
| has_pre_decrement_test.test | RUN | 0.182810 | 0.978522 | 1.497394 | 0.001156 | 0.001285 | 0.001341 |
| has_postfix_classes3_test.test | RUN | 0.137878 | 0.453731 | 0.741440 | 0.001313 | 0.001375 | 0.001282 |
| has_postfix_classes2_test.test | RUN | 0.136411 | 0.442246 | 0.723331 | 0.001200 | 0.001378 | 0.001209 |
| has_postfix_classes1_test.test | RUN | 0.139403 | 0.462411 | 0.729738 | 0.001201 | 0.001466 | 0.001266 |
| has_postfix_classes0_test.test | RUN | 0.138813 | 0.455428 | 0.749502 | 0.001200 | 0.001305 | 0.001217 |
| has_post_increment_test.test | RUN | 0.188182 | 0.981421 | 1.473764 | 0.001176 | 0.001275 | 0.001315 |
| has_post_decrement_test.test | RUN | 0.185520 | 0.972306 | 1.474748 | 0.001287 | 0.001285 | 0.001197 |
| has_plus_test.test | RUN | 0.188688 | 0.759454 | 1.479972 | 0.001256 | 0.001179 | 0.001326 |
| has_plus_assign_test.test | RUN | 0.192229 | 0.773970 | 1.486896 | 0.001120 | 0.001252 | 0.001171 |
| has_operator_new_test.test | RUN | 0.128074 | 0.404140 | 0.664054 | 0.001121 | 0.001395 | 0.001122 |
| has_nothrow_destructor_test.test | RUN | 0.129240 | 0.433777 | 0.727244 | 0.000932 | 0.001175 | 0.001423 |
| has_nothrow_copy_test.test | RUN | 0.128713 | 0.424710 | 0.683533 | 0.001278 | 0.001515 | 0.001200 |
| has_nothrow_constr_test.test | RUN | 0.125972 | 0.407689 | 0.656310 | 0.001199 | 0.001178 | 0.001314 |
| has_nothrow_assign_test.test | RUN | 0.123377 | 0.416943 | 0.669344 | 0.001169 | 0.001422 | 0.001197 |
| has_not_equal_to_test.test | RUN | 0.186530 | 0.960280 | 1.466901 | 0.001178 | 0.001338 | 0.001373 |
| has_negate_test.test | RUN | 0.183368 | 0.744699 | 1.424938 | 0.001287 | 0.001373 | 0.001374 |
| has_multiplies_test.test | RUN | 0.191750 | 0.761016 | 1.469210 | 0.001206 | 0.001231 | 0.001211 |
| has_multiplies_assign_test.test | RUN | 0.190151 | 0.753013 | 1.443846 | 0.001245 | 0.001254 | 0.001107 |
| has_modulus_test.test | RUN | 0.184631 | 0.764537 | 1.452200 | 0.001225 | 0.001320 | 0.001230 |
| has_modulus_assign_test.test | RUN | 0.186104 | 0.750263 | 1.436177 | 0.001336 | 0.001138 | 0.001227 |
| has_minus_test.test | RUN | 0.194695 | 0.772697 | 1.499890 | 0.001249 | 0.001335 | 0.001448 |
| has_minus_assign_test.test | RUN | 0.195398 | 0.750615 | 1.508011 | 0.001207 | 0.001346 | 0.001196 |
| has_logical_or_test.test | RUN | 0.189596 | 0.764218 | 1.469301 | 0.001116 | 0.001272 | 0.001386 |
| has_logical_not_test.test | RUN | 0.184916 | 0.739293 | 1.395518 | 0.001304 | 0.001273 | 0.001362 |
| has_logical_and_test.test | RUN | 0.185867 | 0.763021 | 1.510020 | 0.001152 | 0.001382 | 0.001106 |
| has_less_test.test | RUN | 0.188846 | 0.953648 | 1.511364 | 0.001282 | 0.001286 | 0.001220 |
| has_less_equal_test.test | RUN | 0.190843 | 0.977309 | 1.478020 | 0.001064 | 0.001171 | 0.001302 |
| has_left_shift_test.test | RUN | 0.208838 | 0.958068 | 1.812584 | 0.001217 | 0.001317 | 0.001204 |
| has_left_shift_assign_test.test | RUN | 0.186938 | 0.757021 | 1.532874 | 0.001203 | 0.001444 | 0.001462 |
| has_greater_test.test | RUN | 0.186797 | 0.952278 | 1.544566 | 0.001421 | 0.001345 | 0.001140 |
| has_greater_equal_test.test | RUN | 0.190779 | 0.973736 | 1.436154 | 0.001118 | 0.001356 | 0.001217 |
| has_equal_to_test.test | RUN | 0.187697 | 0.951791 | 1.442927 | 0.001159 | 0.001268 | 0.001278 |
| has_divides_test.test | RUN | 0.189016 | 0.757892 | 1.511842 | 0.001214 | 0.001224 | 0.001183 |
| has_divides_assign_test.test | RUN | 0.190445 | 0.733596 | 1.495738 | 0.001244 | 0.001438 | 0.001206 |
| has_dereference_test.test | RUN | 0.184621 | 0.732671 | 1.359753 | 0.001360 | 0.001335 | 0.001114 |
| has_complement_test.test | RUN | 0.184987 | 0.977413 | 1.465531 | 0.001223 | 0.001255 | 0.001466 |
| has_bit_xor_test.test | RUN | 0.186712 | 0.747976 | 1.429780 | 0.001146 | 0.001308 | 0.001287 |
| has_bit_xor_assign_test.test | RUN | 0.189391 | 0.751824 | 1.470289 | 0.001211 | 0.001353 | 0.001226 |
| has_bit_or_test.test | RUN | 0.186405 | 0.740085 | 1.459187 | 0.001450 | 0.001323 | 0.001355 |
| has_bit_or_assign_test.test | RUN | 0.187875 | 0.763981 | 1.432474 | 0.001154 | 0.001268 | 0.001244 |
| has_bit_and_test.test | RUN | 0.188628 | 0.739856 | 1.494712 | 0.001327 | 0.001321 | 0.001369 |
| has_bit_and_assign_test.test | RUN | 0.188182 | 0.736115 | 1.493334 | 0.001129 | 0.001231 | 0.001178 |
| has_binary_classes9_test.test | RUN | 0.201533 | 0.909377 | 1.648788 | 0.001296 | 0.001378 | 0.001236 |
| has_binary_classes8_test.test | RUN | 0.204720 | 0.909663 | 1.624526 | 0.001262 | 0.001333 | 0.001289 |
| has_binary_classes7_test.test | RUN | 0.202621 | 0.888700 | 1.738603 | 0.001308 | 0.001332 | 0.001448 |
| has_binary_classes6_test.test | RUN | 0.203125 | 0.861449 | 1.742880 | 0.001477 | 0.001261 | 0.001138 |
| has_binary_classes5_test.test | RUN | 0.203936 | 0.888097 | 1.644253 | 0.001147 | 0.001388 | 0.001261 |
| has_binary_classes4_test.test | RUN | 0.206526 | 0.897860 | 1.699756 | 0.001220 | 0.001330 | 0.001532 |
| has_binary_classes3_test.test | RUN | 0.203617 | 0.898972 | 1.685937 | 0.001079 | 0.001421 | 0.001314 |
| has_binary_classes2_test.test | RUN | 0.206528 | 0.911604 | 1.644489 | 0.001284 | 0.001341 | 0.001133 |
| has_binary_classes1_test.test | RUN | 0.202237 | 0.901588 | 1.675409 | 0.001030 | 0.001287 | 0.001340 |
| has_binary_classes0_test.test | RUN | 0.207388 | 0.905377 | 1.639569 | 0.001190 | 0.001182 | 0.001044 |
| function_traits_test.test | RUN | 0.093333 | 0.241162 | 0.347223 | 0.001312 | 0.001372 | 0.001149 |
| floating_point_promotion_test.test | RUN | 0.088930 | 0.238906 | 0.326239 | 0.001327 | 0.001393 | 0.001206 |
| extent_test.test | RUN | 0.091435 | 0.235605 | 0.338909 | 0.001245 | 0.001383 | 0.001171 |
| enable_if_test.test | RUN | 0.086824 | 0.203723 | 0.271351 | 0.001302 | 0.001155 | 0.001106 |
| disjunction_test.test | RUN | 0.089334 | 0.213236 | 0.285407 | 0.001128 | 0.000968 | 0.001436 |
| detected_test.test | RUN | 0.087240 | 0.200066 | 0.267931 | 0.001347 | 0.001226 | 0.001259 |
| detected_or_test.test | RUN | 0.089539 | 0.215039 | 0.286776 | 0.001314 | 0.001291 | 0.001213 |
| decay_test.test | RUN | 0.226607 | 0.808397 | 1.576580 | 0.001187 | 0.001473 | 0.000953 |
| cxx14_aliases_test.test | RUN | 0.144554 | 0.308921 | 0.441477 | 0.001370 | 0.001304 | 0.001111 |
| copy_reference_test.test | RUN | 0.094689 | 0.206719 | 0.286474 | 0.001270 | 0.001251 | 0.001326 |
| copy_cv_test.test | RUN | 0.089290 | 0.223115 | 0.312313 | 0.001279 | 0.001244 | 0.001130 |
| copy_cv_ref_test.test | RUN | 0.129160 | 0.366429 | 0.641652 | 0.001462 | 0.001244 | 0.001259 |
| conjunction_test.test | RUN | 0.089263 | 0.216773 | 0.286888 | 0.001267 | 0.001322 | 0.001387 |
| conditional_test.test | RUN | 0.092381 | 0.209853 | 0.280070 | 0.001352 | 0.001349 | 0.001080 |
| common_type_test.test | RUN | 0.120396 | 0.313938 | 0.522189 | 0.001119 | 0.001219 | 0.001280 |
| common_type_sfinae_test.test | RUN | 0.083345 | 0.199041 | 0.252479 | 0.001242 | 0.001208 | 0.001200 |
| common_type_sfinae2_test.test | RUN | 0.090001 | 0.212760 | 0.282422 | 0.001196 | 0.001297 | 0.001207 |
| common_type_6_test.test | RUN | 0.093264 | 0.215562 | 0.284108 | 0.001452 | 0.001373 | 0.001136 |
| common_type_5_test.test | RUN | 0.094784 | 0.215869 | 0.292762 | 0.001172 | 0.001211 | 0.001278 |
| common_type_4_test.test | RUN | 0.097908 | 0.233540 | 0.342012 | 0.001187 | 0.001220 | 0.001266 |
| common_type_3_test.test | RUN | 0.086169 | 0.200320 | 0.251914 | 0.001634 | 0.001092 | 0.001164 |
| common_type_2_test.test | RUN | 0.115817 | 0.314045 | 0.527015 | 0.001274 | 0.001406 | 0.001372 |
| alignment_of_test.test | RUN | 0.095408 | 0.255137 | 0.339681 | 0.001280 | 0.001289 | 0.001222 |
| alignment_of_a2_test.test | RUN | 0.099619 | 0.253894 | 0.342264 | 0.001085 | 0.001357 | 0.001065 |
| aligned_storage_test.test | RUN | 0.098565 | 0.254839 | 0.311347 | 0.001280 | 0.001277 | 0.001348 |
| aligned_storage_empy_test.test | RUN | 0.114729 | 0.284055 | 0.430182 | 0.001242 | 0.001279 | 0.001061 |
| aligned_storage_a2_test.test | RUN | 0.098206 | 0.246730 | 0.323240 | 0.001442 | 0.001479 | 0.001119 |
| add_volatile_test.test | RUN | 0.204789 | 0.713753 | 1.519534 | 0.001515 | 0.001107 | 0.001268 |
| add_rvalue_reference_test.test | RUN | 0.227136 | 0.816545 | 1.713207 | 0.001197 | 0.001237 | 0.001200 |
| add_reference_test.test | RUN | 0.219316 | 0.788112 | 1.680927 | 0.001224 | 0.001307 | 0.001204 |
| add_pointer_test.test | RUN | 0.142557 | 0.454083 | 0.884491 | 0.001230 | 0.001284 | 0.001339 |
| add_lvalue_reference_test.test | RUN | 0.221909 | 0.796202 | 1.671341 | 0.001396 | 0.001178 | 0.001149 |
| add_cv_test.test | RUN | 0.207646 | 0.756932 | 1.598484 | 0.001231 | 0.001183 | 0.001291 |
| add_const_test.test | RUN | 0.212741 | 0.742523 | 1.584722 | 0.001227 | 0.001223 | 0.001315 |
| is_virtual_base_of_fail.test | COMPILE_FAIL | 0.082000 | 0.194602 | 0.257577 | — | — | — |
| is_stateless_fail.test | COMPILE_FAIL | 0.086242 | 0.200629 | 0.268626 | — | — | — |
| is_polymorphic_fail.test | COMPILE_FAIL | 0.081391 | 0.189461 | 0.251899 | — | — | — |
| is_nothrow_move_constructible_fail.test | COMPILE_FAIL | 0.082276 | 0.186346 | 0.251454 | — | — | — |
| is_nothrow_move_assignable_fail.test | COMPILE_FAIL | 0.081454 | 0.191526 | 0.248497 | — | — | — |
| is_list_constructible_fail.test | COMPILE_FAIL | 0.083552 | 0.189717 | 0.249979 | — | — | — |
| is_empty_fail.test | COMPILE_FAIL | 0.082870 | 0.189626 | 0.251147 | — | — | — |
| is_destructible_fail.test | COMPILE_FAIL | 0.082645 | 0.188952 | 0.249174 | — | — | — |
| is_default_constructible_fail.test | COMPILE_FAIL | 0.081503 | 0.189310 | 0.253558 | — | — | — |
| is_copy_constructible_fail.test | COMPILE_FAIL | 0.083584 | 0.189832 | 0.256436 | — | — | — |
| is_copy_assignable_fail.test | COMPILE_FAIL | 0.081902 | 0.189595 | 0.252190 | — | — | — |
| is_convertible_fail.test | COMPILE_FAIL | 0.083087 | 0.190180 | 0.250563 | — | — | — |
| is_convertible2_fail.test | COMPILE_FAIL | 0.082692 | 0.183270 | 0.253448 | — | — | — |
| is_constructible_fail.test | COMPILE_FAIL | 0.082417 | 0.183497 | 0.261003 | — | — | — |
| is_base_of_fail.test | COMPILE_FAIL | 0.083047 | 0.187718 | 0.253895 | — | — | — |
| is_assignable_fail.test | COMPILE_FAIL | 0.081283 | 0.189266 | 0.250307 | — | — | — |
| has_nothrow_destruct_fail.test | COMPILE_FAIL | 0.081829 | 0.184903 | 0.251916 | — | — | — |
| has_nothrow_copy_fail.test | COMPILE_FAIL | 0.082519 | 0.184398 | 0.258509 | — | — | — |
| has_nothrow_cons_fail.test | COMPILE_FAIL | 0.083399 | 0.185073 | 0.254810 | — | — | — |
| has_nothrow_assign_fail.test | COMPILE_FAIL | 0.083184 | 0.188255 | 0.251731 | — | — | — |
| common_type_fail.test | COMPILE_FAIL | 0.082390 | 0.188344 | 0.254092 | — | — | — |
| common_type2_fail.test | COMPILE_FAIL | 0.084166 | 0.188250 | 0.256271 | — | — | — |
| has_nothrow_assign_test_no_intrinsics.test | RUN | 0.127190 | 0.407902 | 0.689179 | 0.000992 | 0.001425 | 0.001207 |
| has_nothrow_constr_test_no_intrinsics.test | RUN | 0.122610 | 0.416034 | 0.685754 | 0.001091 | 0.001201 | 0.001293 |
| has_nothrow_copy_test_no_intrinsics.test | RUN | 0.124510 | 0.418570 | 0.697995 | 0.001092 | 0.001195 | 0.001366 |
| is_nothrow_move_assignable_test_no_intrinsics.test | RUN | 0.125410 | 0.415875 | 0.656870 | 0.000832 | 0.000826 | 0.000956 |
| is_nothrow_move_constructible_test_no_intrinsics.test | RUN | 0.083697 | 0.299867 | 0.416375 | 0.001038 | 0.000898 | 0.000991 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.993× | 0.989×, 0.996× | 1.003× |
| clang | 1.020× | 1.022×, 1.018× | 1.004× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1364 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/43740486413).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| add_const_test.test | 10 | 0.000781s | 0.000766s | 0.000794s | byte equality observed |
| add_cv_test.test | 10 | 0.000782s | 0.000774s | 0.000778s | byte equality observed |
| add_lvalue_reference_test.test | 10 | 0.000777s | 0.000772s | 0.000808s | byte equality observed |
| add_pointer_test.test | 10 | 0.000792s | 0.000791s | 0.000803s | byte equality observed |
| add_reference_test.test | 10 | 0.000764s | 0.000776s | 0.000800s | byte equality observed |
| add_rvalue_reference_test.test | 10 | 0.000786s | 0.000784s | 0.000778s | byte equality observed |
| add_volatile_test.test | 10 | 0.000795s | 0.000785s | 0.000756s | byte equality observed |
| aligned_storage_a2_test.test | 10 | 0.000831s | 0.000836s | 0.000814s | byte equality observed |
| aligned_storage_empy_test.test | 10 | 0.000794s | 0.000781s | 0.000781s | byte equality observed |
| aligned_storage_test.test | 10 | 0.000823s | 0.000817s | 0.000829s | byte equality observed |
| alignment_of_a2_test.test | 10 | 0.000789s | 0.000786s | 0.000786s | byte equality observed |
| alignment_of_test.test | 10 | 0.000772s | 0.000753s | 0.000768s | byte equality observed |
| common_type_2_test.test | 10 | 0.000772s | 0.000763s | 0.000761s | byte equality observed |
| common_type_3_test.test | 10 | 0.000799s | 0.000772s | 0.000750s | byte equality observed |
| common_type_4_test.test | 10 | 0.000773s | 0.000770s | 0.000757s | byte equality observed |
| common_type_5_test.test | 10 | 0.000789s | 0.000753s | 0.000780s | byte equality observed |
| common_type_6_test.test | 10 | 0.000799s | 0.000757s | 0.000771s | byte equality observed |
| common_type_sfinae2_test.test | 10 | 0.000793s | 0.000756s | 0.000786s | byte equality observed |
| common_type_sfinae_test.test | 10 | 0.000806s | 0.000785s | 0.000773s | byte equality observed |
| common_type_test.test | 10 | 0.000794s | 0.000795s | 0.000751s | byte equality observed |
| conditional_test.test | 10 | 0.000812s | 0.000793s | 0.000759s | byte equality observed |
| conjunction_test.test | 10 | 0.000802s | 0.000799s | 0.000772s | byte equality observed |
| copy_cv_ref_test.test | 10 | 0.000786s | 0.000775s | 0.000762s | byte equality observed |
| copy_cv_test.test | 10 | 0.000802s | 0.000764s | 0.000786s | byte equality observed |
| copy_reference_test.test | 10 | 0.000803s | 0.000760s | 0.000761s | byte equality observed |
| cxx14_aliases_test.test | 10 | 0.000798s | 0.000780s | 0.000806s | byte equality observed |
| decay_test.test | 10 | 0.000811s | 0.000787s | 0.000786s | byte equality observed |
| detected_or_test.test | 10 | 0.000802s | 0.000800s | 0.000776s | byte equality observed |
| detected_test.test | 10 | 0.000788s | 0.000809s | 0.000795s | byte equality observed |
| disjunction_test.test | 10 | 0.000785s | 0.000806s | 0.000768s | byte equality observed |
| enable_if_test.test | 10 | 0.000791s | 0.000808s | 0.000781s | byte equality observed |
| extent_test.test | 10 | 0.000775s | 0.000810s | 0.000775s | byte equality observed |
| floating_point_promotion_test.test | 10 | 0.000771s | 0.000806s | 0.000796s | byte equality observed |
| function_traits_test.test | 10 | 0.000793s | 0.000800s | 0.000766s | byte equality observed |
| has_binary_classes0_test.test | 10 | 0.000796s | 0.000792s | 0.000776s | byte equality observed |
| has_binary_classes1_test.test | 10 | 0.000796s | 0.000794s | 0.000770s | byte equality observed |
| has_binary_classes2_test.test | 10 | 0.000788s | 0.000793s | 0.000767s | byte equality observed |
| has_binary_classes3_test.test | 10 | 0.000807s | 0.000782s | 0.000757s | byte equality observed |
| has_binary_classes4_test.test | 10 | 0.000799s | 0.000792s | 0.000769s | byte equality observed |
| has_binary_classes5_test.test | 10 | 0.000792s | 0.000786s | 0.000760s | byte equality observed |
| has_binary_classes6_test.test | 10 | 0.000793s | 0.000775s | 0.000793s | byte equality observed |
| has_binary_classes7_test.test | 10 | 0.000789s | 0.000751s | 0.000766s | byte equality observed |
| has_binary_classes8_test.test | 10 | 0.000791s | 0.000783s | 0.000777s | byte equality observed |
| has_binary_classes9_test.test | 10 | 0.000774s | 0.000768s | 0.000780s | byte equality observed |
| has_bit_and_assign_test.test | 10 | 0.000776s | 0.000768s | 0.000813s | byte equality observed |
| has_bit_and_test.test | 10 | 0.000782s | 0.000802s | 0.000806s | byte equality observed |
| has_bit_or_assign_test.test | 10 | 0.000785s | 0.000800s | 0.000773s | byte equality observed |
| has_bit_or_test.test | 10 | 0.000806s | 0.000803s | 0.000773s | byte equality observed |
| has_bit_xor_assign_test.test | 10 | 0.000811s | 0.000790s | 0.000790s | byte equality observed |
| has_bit_xor_test.test | 10 | 0.000786s | 0.000764s | 0.000797s | byte equality observed |
| has_complement_test.test | 10 | 0.000773s | 0.000772s | 0.000802s | byte equality observed |
| has_dereference_test.test | 10 | 0.000779s | 0.000766s | 0.000790s | byte equality observed |
| has_divides_assign_test.test | 10 | 0.000803s | 0.000762s | 0.000777s | byte equality observed |
| has_divides_test.test | 10 | 0.000780s | 0.000762s | 0.000777s | byte equality observed |
| has_equal_to_test.test | 10 | 0.000804s | 0.000758s | 0.000796s | byte equality observed |
| has_greater_equal_test.test | 10 | 0.000784s | 0.000785s | 0.000788s | byte equality observed |
| has_greater_test.test | 10 | 0.000784s | 0.000767s | 0.000763s | byte equality observed |
| has_left_shift_assign_test.test | 10 | 0.000783s | 0.000776s | 0.000780s | byte equality observed |
| has_left_shift_test.test | 10 | 0.000757s | 0.000767s | 0.000778s | byte equality observed |
| has_less_equal_test.test | 10 | 0.000768s | 0.000767s | 0.000770s | byte equality observed |
| has_less_test.test | 10 | 0.000772s | 0.000803s | 0.000799s | byte equality observed |
| has_logical_and_test.test | 10 | 0.000764s | 0.000805s | 0.000797s | byte equality observed |
| has_logical_not_test.test | 10 | 0.000787s | 0.000770s | 0.000780s | byte equality observed |
| has_logical_or_test.test | 10 | 0.000785s | 0.000797s | 0.000780s | byte equality observed |
| has_minus_assign_test.test | 10 | 0.000780s | 0.000796s | 0.000792s | byte equality observed |
| has_minus_test.test | 10 | 0.000787s | 0.000773s | 0.000793s | byte equality observed |
| has_modulus_assign_test.test | 10 | 0.000765s | 0.000811s | 0.000780s | byte equality observed |
| has_modulus_test.test | 10 | 0.000768s | 0.000803s | 0.000798s | byte equality observed |
| has_multiplies_assign_test.test | 10 | 0.000785s | 0.000804s | 0.000754s | byte equality observed |
| has_multiplies_test.test | 10 | 0.000769s | 0.000770s | 0.000811s | byte equality observed |
| has_negate_test.test | 10 | 0.000770s | 0.000779s | 0.000811s | byte equality observed |
| has_not_equal_to_test.test | 10 | 0.000772s | 0.000771s | 0.000821s | byte equality observed |
| has_nothrow_assign_test.test | 10 | 0.000768s | 0.000790s | 0.000809s | byte equality observed |
| has_nothrow_assign_test_no_intrinsics.test | 10 | 0.000793s | 0.000774s | 0.000784s | byte equality observed |
| has_nothrow_constr_test.test | 10 | 0.000780s | 0.000794s | 0.000783s | byte equality observed |
| has_nothrow_constr_test_no_intrinsics.test | 10 | 0.000776s | 0.000779s | 0.000789s | byte equality observed |
| has_nothrow_copy_test.test | 10 | 0.000783s | 0.000772s | 0.000786s | byte equality observed |
| has_nothrow_copy_test_no_intrinsics.test | 10 | 0.000803s | 0.000789s | 0.000783s | byte equality observed |
| has_nothrow_destructor_test.test | 10 | 0.000786s | 0.000777s | 0.000785s | byte equality observed |
| has_operator_new_test.test | 10 | 0.000790s | 0.000784s | 0.000768s | byte equality observed |
| has_plus_assign_test.test | 10 | 0.000792s | 0.000790s | 0.000799s | byte equality observed |
| has_plus_test.test | 10 | 0.000807s | 0.000794s | 0.000778s | byte equality observed |
| has_post_decrement_test.test | 10 | 0.000784s | 0.000805s | 0.000768s | byte equality observed |
| has_post_increment_test.test | 10 | 0.000807s | 0.000791s | 0.000789s | byte equality observed |
| has_postfix_classes0_test.test | 10 | 0.000801s | 0.000759s | 0.000775s | byte equality observed |
| has_postfix_classes1_test.test | 10 | 0.000782s | 0.000778s | 0.000758s | byte equality observed |
| has_postfix_classes2_test.test | 10 | 0.000806s | 0.000799s | 0.000767s | byte equality observed |
| has_postfix_classes3_test.test | 10 | 0.000803s | 0.000789s | 0.000760s | byte equality observed |
| has_pre_decrement_test.test | 10 | 0.000801s | 0.000802s | 0.000763s | byte equality observed |
| has_pre_increment_test.test | 10 | 0.000806s | 0.000777s | 0.000756s | byte equality observed |
| has_prefix_classes0_test.test | 10 | 0.000801s | 0.000802s | 0.000778s | byte equality observed |
| has_prefix_classes1_test.test | 10 | 0.000805s | 0.000809s | 0.000776s | byte equality observed |
| has_prefix_classes2_test.test | 10 | 0.000798s | 0.000756s | 0.000787s | byte equality observed |
| has_prefix_classes3_test.test | 10 | 0.000773s | 0.000779s | 0.000799s | byte equality observed |
| has_right_shift_assign_test.test | 10 | 0.000775s | 0.000795s | 0.000786s | byte equality observed |
| has_right_shift_test.test | 10 | 0.000770s | 0.000775s | 0.000792s | byte equality observed |
| has_trivial_assign_test.test | 10 | 0.000801s | 0.000791s | 0.000816s | byte equality observed |
| has_trivial_constr_test.test | 10 | 0.000828s | 0.000811s | 0.000823s | native test oracle; output varies |
| has_trivial_copy_test.test | 10 | 0.000848s | 0.000803s | 0.000808s | native test oracle; output varies |
| has_trivial_destructor_test.test | 10 | 0.000781s | 0.000771s | 0.000777s | byte equality observed |
| has_trivial_move_assign_test.test | 10 | 0.000764s | 0.000759s | 0.000785s | byte equality observed |
| has_trivial_move_constructor_test.test | 10 | 0.000768s | 0.000791s | 0.000795s | byte equality observed |
| has_unary_minus_test.test | 10 | 0.000773s | 0.000814s | 0.000820s | byte equality observed |
| has_unary_plus_test.test | 10 | 0.000786s | 0.000789s | 0.000798s | byte equality observed |
| has_virtual_destructor_test.test | 10 | 0.000784s | 0.000789s | 0.000767s | byte equality observed |
| integral_constant_test.test | 10 | 0.000358s | 0.000367s | 0.000767s | byte equality observed |
| is_abstract_test.test | 10 | 0.000764s | 0.000775s | 0.000762s | byte equality observed |
| is_arithmetic_test.test | 10 | 0.000787s | 0.000770s | 0.000765s | byte equality observed |
| is_array_test.test | 10 | 0.000771s | 0.000745s | 0.000767s | byte equality observed |
| is_assignable_test.test | 10 | 0.000768s | 0.000765s | 0.000769s | byte equality observed |
| is_base_and_derived_test.test | 10 | 0.000763s | 0.000757s | 0.000803s | byte equality observed |
| is_base_of_test.test | 10 | 0.000772s | 0.000777s | 0.000796s | byte equality observed |
| is_bounded_array_test.test | 10 | 0.000808s | 0.000765s | 0.000795s | byte equality observed |
| is_class_test.test | 10 | 0.000791s | 0.000745s | 0.000790s | byte equality observed |
| is_complete_test.test | 10 | 0.000791s | 0.000769s | 0.000790s | byte equality observed |
| is_complex_test.test | 10 | 0.000811s | 0.000787s | 0.000793s | byte equality observed |
| is_compound_test.test | 10 | 0.000800s | 0.000757s | 0.000765s | byte equality observed |
| is_const_test.test | 10 | 0.000805s | 0.000769s | 0.000785s | byte equality observed |
| is_constructible_test.test | 10 | 0.000789s | 0.000805s | 0.000759s | byte equality observed |
| is_convertible_test.test | 10 | 0.000783s | 0.000797s | 0.000758s | byte equality observed |
| is_copy_assignable_test.test | 10 | 0.000793s | 0.000773s | 0.000754s | byte equality observed |
| is_copy_constructible_test.test | 10 | 0.000798s | 0.000764s | 0.000800s | byte equality observed |
| is_default_constr_test.test | 10 | 0.000800s | 0.000784s | 0.000793s | byte equality observed |
| is_destructible_test.test | 10 | 0.000806s | 0.000797s | 0.000797s | byte equality observed |
| is_detected_exact_test.test | 10 | 0.000792s | 0.000797s | 0.000802s | byte equality observed |
| is_detected_test.test | 10 | 0.000785s | 0.000799s | 0.000774s | byte equality observed |
| is_empty_test.test | 10 | 0.000781s | 0.000771s | 0.000784s | byte equality observed |
| is_enum_test.test | 10 | 0.000774s | 0.000753s | 0.000776s | byte equality observed |
| is_final_test.test | 10 | 0.000790s | 0.000765s | 0.000807s | byte equality observed |
| is_float_test.test | 10 | 0.000798s | 0.000759s | 0.000772s | byte equality observed |
| is_floating_point_test.test | 10 | 0.000786s | 0.000772s | 0.000785s | byte equality observed |
| is_function_test.test | 10 | 0.000789s | 0.000760s | 0.000790s | byte equality observed |
| is_fundamental_test.test | 10 | 0.000780s | 0.000785s | 0.000797s | byte equality observed |
| is_integral_test.test | 10 | 0.000795s | 0.000785s | 0.000795s | byte equality observed |
| is_list_constructible_test.test | 10 | 0.000807s | 0.000780s | 0.000788s | byte equality observed |
| is_lvalue_reference_test.test | 10 | 0.000805s | 0.000794s | 0.000779s | byte equality observed |
| is_member_func_test.test | 10 | 0.000784s | 0.000752s | 0.000770s | byte equality observed |
| is_member_obj_test.test | 10 | 0.000777s | 0.000756s | 0.000760s | byte equality observed |
| is_member_pointer_test.test | 10 | 0.000774s | 0.000771s | 0.000745s | byte equality observed |
| is_noncopyable_test.test | 10 | 0.000784s | 0.000772s | 0.000809s | byte equality observed |
| is_nothrow_move_assignable_test.test | 10 | 0.000790s | 0.000799s | 0.000784s | byte equality observed |
| is_nothrow_move_assignable_test_no_intrinsics.test | 10 | 0.000770s | 0.000788s | 0.000808s | byte equality observed |
| is_nothrow_move_constructible_test.test | 10 | 0.000764s | 0.000779s | 0.000801s | byte equality observed |
| is_nothrow_move_constructible_test_no_intrinsics.test | 10 | 0.000778s | 0.000781s | 0.000783s | byte equality observed |
| is_nothrow_swappable_test.test | 10 | 0.000774s | 0.000806s | 0.000788s | byte equality observed |
| is_object_test.test | 10 | 0.000771s | 0.000787s | 0.000799s | byte equality observed |
| is_pod_test.test | 10 | 0.000783s | 0.000759s | 0.000778s | byte equality observed |
| is_pointer_test.test | 10 | 0.000810s | 0.000777s | 0.000785s | byte equality observed |
| is_polymorphic_test.test | 10 | 0.000791s | 0.000749s | 0.000779s | byte equality observed |
| is_reference_test.test | 10 | 0.000798s | 0.000779s | 0.000788s | byte equality observed |
| is_rvalue_reference_test.test | 10 | 0.000782s | 0.000742s | 0.000797s | byte equality observed |
| is_same_test.test | 10 | 0.000782s | 0.000787s | 0.000788s | byte equality observed |
| is_scalar_test.test | 10 | 0.000790s | 0.000778s | 0.000781s | byte equality observed |
| is_scoped_enum_test.test | 10 | 0.000779s | 0.000755s | 0.000780s | byte equality observed |
| is_signed_test.test | 10 | 0.000776s | 0.000764s | 0.000798s | byte equality observed |
| is_stateless_test.test | 10 | 0.000794s | 0.000797s | 0.000770s | byte equality observed |
| is_swappable_test.test | 10 | 0.000756s | 0.000770s | 0.000792s | byte equality observed |
| is_trivially_copyable_test.test | 10 | 0.000800s | 0.000784s | 0.000800s | byte equality observed |
| is_unbounded_array_test.test | 10 | 0.000761s | 0.000741s | 0.000783s | byte equality observed |
| is_union_test.test | 10 | 0.000785s | 0.000771s | 0.000758s | byte equality observed |
| is_unscoped_enum_test.test | 10 | 0.000778s | 0.000762s | 0.000766s | byte equality observed |
| is_unsigned_test.test | 10 | 0.000763s | 0.000747s | 0.000780s | byte equality observed |
| is_virtual_base_of_test.test | 10 | 0.000755s | 0.000784s | 0.000794s | byte equality observed |
| is_void_test.test | 10 | 0.000768s | 0.000781s | 0.000818s | byte equality observed |
| is_volatile_test.test | 10 | 0.000774s | 0.000751s | 0.000789s | byte equality observed |
| make_signed_test.test | 10 | 0.000776s | 0.000785s | 0.000783s | byte equality observed |
| make_unsigned_test.test | 10 | 0.000780s | 0.000787s | 0.000779s | byte equality observed |
| make_void_test.test | 10 | 0.000780s | 0.000766s | 0.000795s | byte equality observed |
| mpl_interop_test1.test | 10 | 0.000358s | 0.000362s | 0.000815s | byte equality observed |
| mpl_interop_test2.test | 10 | 0.000364s | 0.000363s | 0.000780s | byte equality observed |
| mpl_interop_test3.test | 10 | 0.000365s | 0.000358s | 0.000798s | byte equality observed |
| negation_test.test | 10 | 0.000778s | 0.000780s | 0.000793s | byte equality observed |
| promote_basic_test.test | 10 | 0.000360s | 0.000352s | 0.000774s | byte equality observed |
| promote_enum_msvc_bug_test.test | 10 | 0.000361s | 0.000357s | 0.000767s | byte equality observed |
| promote_enum_test.test | 10 | 0.000366s | 0.000362s | 0.000761s | byte equality observed |
| promote_mpl_test.test | 10 | 0.000353s | 0.000354s | 0.000786s | byte equality observed |
| rank_test.test | 10 | 0.000774s | 0.000769s | 0.000764s | byte equality observed |
| remove_all_extents_test.test | 10 | 0.000783s | 0.000760s | 0.000764s | byte equality observed |
| remove_bounds_test.test | 10 | 0.000770s | 0.000792s | 0.000762s | byte equality observed |
| remove_const_test.test | 10 | 0.000769s | 0.000785s | 0.000771s | byte equality observed |
| remove_cv_ref_test.test | 10 | 0.000770s | 0.000767s | 0.000799s | byte equality observed |
| remove_cv_test.test | 10 | 0.000793s | 0.000750s | 0.000793s | byte equality observed |
| remove_extent_test.test | 10 | 0.000780s | 0.000788s | 0.000759s | byte equality observed |
| remove_pointer_test.test | 10 | 0.000813s | 0.000798s | 0.000759s | byte equality observed |
| remove_reference_test.test | 10 | 0.000808s | 0.000814s | 0.000764s | byte equality observed |
| remove_volatile_test.test | 10 | 0.000786s | 0.000791s | 0.000775s | byte equality observed |
| tricky_abstract_type_test.test | 10 | 0.000806s | 0.000766s | 0.000782s | byte equality observed |
| tricky_add_pointer_test.test | 10 | 0.000799s | 0.000781s | 0.000773s | byte equality observed |
| tricky_function_type_test.test | 10 | 0.000789s | 0.000778s | 0.000780s | byte equality observed |
| tricky_incomplete_type_test.test | 10 | 0.000773s | 0.000797s | 0.000792s | byte equality observed |
| tricky_is_enum_test.test | 10 | 0.000804s | 0.000772s | 0.000808s | byte equality observed |
| tricky_partial_spec_test.test | 10 | 0.000774s | 0.000759s | 0.000797s | byte equality observed |
| tricky_rvalue_test.test | 10 | 0.000779s | 0.000755s | 0.000798s | byte equality observed |
| type_identity_test.test | 10 | 0.000779s | 0.000745s | 0.000778s | byte equality observed |
| type_traits_test.test | 10 | 0.000361s | 0.000362s | 0.000797s | byte equality observed |
| type_with_alignment_test.test | 10 | 0.000834s | 0.000823s | 0.000836s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/43740486413).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
