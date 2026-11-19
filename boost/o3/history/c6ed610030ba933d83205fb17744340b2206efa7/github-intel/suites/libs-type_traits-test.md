# libs/type_traits/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| type_with_alignment_test.test | RUN | 0.091966 | 0.271843 | 0.383151 | 0.001143 | 0.001383 | 0.000981 |
| type_traits_test.test | RUN | 0.127939 | 0.287322 | 0.373332 | 0.000532 | 0.000512 | 0.001038 |
| type_identity_test.test | RUN | 0.246053 | 0.972728 | 1.927050 | 0.001158 | 0.001429 | 0.001137 |
| tricky_rvalue_test.test | RUN | 0.085568 | 0.217081 | 0.297059 | 0.001224 | 0.001398 | 0.001096 |
| tricky_partial_spec_test.test | RUN | 0.104466 | 0.313011 | 0.472056 | 0.001071 | 0.001173 | 0.001059 |
| tricky_is_enum_test.test | RUN | 0.082410 | 0.212369 | 0.259655 | 0.001180 | 0.001401 | 0.001217 |
| tricky_incomplete_type_test.test | RUN | 0.136159 | 0.320585 | 0.422275 | 0.001035 | 0.001277 | 0.001026 |
| tricky_function_type_test.test | RUN | 0.113193 | 0.333156 | 0.508155 | 0.001074 | 0.001117 | 0.001115 |
| tricky_add_pointer_test.test | RUN | 0.164233 | 0.580225 | 1.115562 | 0.001168 | 0.001501 | 0.001287 |
| tricky_abstract_type_test.test | RUN | 0.088127 | 0.215467 | 0.277232 | 0.001075 | 0.001122 | 0.001088 |
| remove_volatile_test.test | RUN | 0.222493 | 0.830462 | 1.722303 | 0.001282 | 0.001507 | 0.001225 |
| remove_reference_test.test | RUN | 0.229875 | 0.883857 | 1.819926 | 0.001114 | 0.001422 | 0.001189 |
| remove_pointer_test.test | RUN | 0.232074 | 0.913151 | 1.914883 | 0.001157 | 0.001294 | 0.001146 |
| remove_extent_test.test | RUN | 0.227831 | 0.890276 | 1.837011 | 0.001068 | 0.001399 | 0.001105 |
| remove_cv_test.test | RUN | 0.226576 | 0.889339 | 1.825492 | 0.001052 | 0.001458 | 0.001202 |
| remove_cv_ref_test.test | RUN | 0.471147 | 2.184998 | 4.421735 | 0.001121 | 0.001234 | 0.001173 |
| remove_const_test.test | RUN | 0.221661 | 0.824181 | 1.764149 | 0.001225 | 0.001432 | 0.001122 |
| remove_bounds_test.test | RUN | 0.229428 | 0.882953 | 1.818529 | 0.001163 | 0.001474 | 0.001141 |
| remove_all_extents_test.test | RUN | 0.228433 | 0.869747 | 1.761759 | 0.001057 | 0.001363 | 0.000998 |
| rank_test.test | RUN | 0.086562 | 0.224288 | 0.297800 | 0.001034 | 0.001312 | 0.001051 |
| promote_mpl_test.test | RUN | 0.077461 | 0.197931 | 0.211972 | 0.000381 | 0.000525 | 0.001126 |
| promote_enum_test.test | RUN | 0.015830 | 0.047441 | 0.052459 | 0.000463 | 0.000559 | 0.001121 |
| promote_enum_msvc_bug_test.test | RUN | 0.014309 | 0.038952 | 0.044003 | 0.000437 | 0.000510 | 0.001107 |
| promote_basic_test.test | RUN | 0.017924 | 0.055973 | 0.051440 | 0.000475 | 0.000563 | 0.001032 |
| negation_test.test | RUN | 0.077467 | 0.214561 | 0.257098 | 0.001102 | 0.001348 | 0.001047 |
| mpl_interop_test3.test | RUN | 0.072365 | 0.184489 | 0.198490 | 0.000420 | 0.000475 | 0.000912 |
| mpl_interop_test2.test | RUN | 0.025194 | 0.052611 | 0.052024 | 0.000426 | 0.000447 | 0.001124 |
| mpl_interop_test1.test | RUN | 0.013700 | 0.036429 | 0.037838 | 0.000464 | 0.000572 | 0.001128 |
| make_void_test.test | RUN | 0.086291 | 0.221004 | 0.294400 | 0.001336 | 0.001324 | 0.001227 |
| make_unsigned_test.test | RUN | 0.100381 | 0.295287 | 0.397021 | 0.001375 | 0.001616 | 0.001105 |
| make_signed_test.test | RUN | 0.099221 | 0.286581 | 0.403344 | 0.000988 | 0.001238 | 0.001080 |
| is_volatile_test.test | RUN | 0.089238 | 0.245305 | 0.335761 | 0.001058 | 0.001055 | 0.001149 |
| is_void_test.test | RUN | 0.086853 | 0.230991 | 0.309008 | 0.001214 | 0.001339 | 0.000998 |
| is_virtual_base_of_test.test | RUN | 0.098164 | 0.290595 | 0.424722 | 0.001193 | 0.001137 | 0.001084 |
| is_unsigned_test.test | RUN | 0.087266 | 0.239758 | 0.317504 | 0.000958 | 0.001160 | 0.000983 |
| is_unscoped_enum_test.test | RUN | 0.083703 | 0.215805 | 0.268725 | 0.000986 | 0.001222 | 0.001116 |
| is_union_test.test | RUN | 0.091656 | 0.270476 | 0.388281 | 0.001146 | 0.001348 | 0.001155 |
| is_unbounded_array_test.test | RUN | 0.087177 | 0.231358 | 0.303263 | 0.001268 | 0.001295 | 0.001072 |
| is_trivially_copyable_test.test | RUN | 0.136802 | 0.488709 | 0.761839 | 0.001138 | 0.001473 | 0.001099 |
| is_swappable_test.test | RUN | 0.114040 | 0.361019 | 0.565438 | 0.001037 | 0.001483 | 0.001052 |
| is_stateless_test.test | RUN | 0.129459 | 0.418220 | 0.641358 | 0.001328 | 0.001418 | 0.001065 |
| is_signed_test.test | RUN | 0.089296 | 0.242255 | 0.319825 | 0.001188 | 0.001382 | 0.001065 |
| is_scoped_enum_test.test | RUN | 0.084894 | 0.215215 | 0.269466 | 0.001073 | 0.001257 | 0.001039 |
| is_scalar_test.test | RUN | 0.111494 | 0.367561 | 0.565563 | 0.001112 | 0.001468 | 0.001117 |
| is_same_test.test | RUN | 0.085204 | 0.227822 | 0.305795 | 0.001244 | 0.001096 | 0.001042 |
| is_rvalue_reference_test.test | RUN | 0.089020 | 0.257416 | 0.351014 | 0.001168 | 0.001295 | 0.001078 |
| is_reference_test.test | RUN | 0.090992 | 0.255844 | 0.345296 | 0.001100 | 0.001290 | 0.001051 |
| is_polymorphic_test.test | RUN | 0.094181 | 0.268550 | 0.365788 | 0.001099 | 0.001111 | 0.001076 |
| is_pointer_test.test | RUN | 0.093511 | 0.262980 | 0.359039 | 0.001212 | 0.001299 | 0.001159 |
| is_pod_test.test | RUN | 0.119637 | 0.424751 | 0.653911 | 0.001116 | 0.001400 | 0.001091 |
| is_object_test.test | RUN | 0.084376 | 0.221199 | 0.289517 | 0.000856 | 0.001400 | 0.001076 |
| is_nothrow_swappable_test.test | RUN | 0.123651 | 0.400758 | 0.632044 | 0.001074 | 0.001394 | 0.001136 |
| is_nothrow_move_constructible_test.test | RUN | 0.119071 | 0.406717 | 0.631700 | 0.001185 | 0.001381 | 0.001125 |
| is_nothrow_move_assignable_test.test | RUN | 0.115179 | 0.417504 | 0.640016 | 0.001110 | 0.001395 | 0.001014 |
| is_noncopyable_test.test | RUN | 0.087048 | 0.225866 | 0.299806 | 0.001212 | 0.001260 | 0.001063 |
| is_member_pointer_test.test | RUN | 0.086813 | 0.229816 | 0.290685 | 0.001082 | 0.001444 | 0.001025 |
| is_member_obj_test.test | RUN | 0.086227 | 0.231181 | 0.302219 | 0.001283 | 0.001210 | 0.001028 |
| is_member_func_test.test | RUN | 0.087976 | 0.252110 | 0.333356 | 0.001214 | 0.001297 | 0.000953 |
| is_lvalue_reference_test.test | RUN | 0.090895 | 0.258539 | 0.353678 | 0.001179 | 0.001224 | 0.001101 |
| is_list_constructible_test.test | RUN | 0.106150 | 0.302128 | 0.396640 | 0.001166 | 0.001436 | 0.001030 |
| is_integral_test.test | RUN | 0.107915 | 0.349727 | 0.540267 | 0.000993 | 0.001486 | 0.001308 |
| is_fundamental_test.test | RUN | 0.109409 | 0.365747 | 0.553920 | 0.001207 | 0.001192 | 0.001057 |
| is_function_test.test | RUN | 0.088906 | 0.241999 | 0.324880 | 0.000996 | 0.001215 | 0.001089 |
| is_floating_point_test.test | RUN | 0.091171 | 0.259612 | 0.356983 | 0.001148 | 0.001184 | 0.001061 |
| is_float_test.test | RUN | 0.092509 | 0.257751 | 0.360450 | 0.001171 | 0.001308 | 0.001199 |
| is_final_test.test | RUN | 0.090599 | 0.262955 | 0.371005 | 0.001059 | 0.001277 | 0.000784 |
| is_enum_test.test | RUN | 0.084525 | 0.222123 | 0.282940 | 0.001126 | 0.001214 | 0.001027 |
| is_empty_test.test | RUN | 0.091206 | 0.242628 | 0.328557 | 0.001114 | 0.001187 | 0.001027 |
| is_detected_test.test | RUN | 0.082564 | 0.208348 | 0.261520 | 0.001280 | 0.001365 | 0.001069 |
| is_detected_exact_test.test | RUN | 0.082384 | 0.208334 | 0.265900 | 0.001235 | 0.001230 | 0.001022 |
| is_destructible_test.test | RUN | 0.117076 | 0.401735 | 0.635421 | 0.001129 | 0.001421 | 0.001075 |
| is_default_constr_test.test | RUN | 0.120068 | 0.418189 | 0.638113 | 0.001018 | 0.001240 | 0.001052 |
| is_copy_constructible_test.test | RUN | 0.126278 | 0.433531 | 0.687140 | 0.001360 | 0.001422 | 0.001123 |
| is_copy_assignable_test.test | RUN | 0.124708 | 0.431349 | 0.675543 | 0.001145 | 0.001265 | 0.001061 |
| is_convertible_test.test | RUN | 0.117848 | 0.381621 | 0.560186 | 0.001042 | 0.001310 | 0.001056 |
| is_constructible_test.test | RUN | 0.099080 | 0.273835 | 0.392030 | 0.000939 | 0.001377 | 0.001142 |
| is_const_test.test | RUN | 0.087562 | 0.244262 | 0.325556 | 0.001160 | 0.001347 | 0.001058 |
| is_compound_test.test | RUN | 0.082654 | 0.214103 | 0.266245 | 0.001335 | 0.000879 | 0.001074 |
| is_complex_test.test | RUN | 0.111028 | 0.280792 | 0.369678 | 0.001074 | 0.001406 | 0.001056 |
| is_complete_test.test | RUN | 0.096020 | 0.288369 | 0.420309 | 0.001161 | 0.001049 | 0.001023 |
| is_class_test.test | RUN | 0.091122 | 0.256667 | 0.346771 | 0.001011 | 0.001080 | 0.001044 |
| is_bounded_array_test.test | RUN | 0.086219 | 0.229716 | 0.303312 | 0.001111 | 0.001205 | 0.000989 |
| is_base_of_test.test | RUN | 0.090820 | 0.245562 | 0.343300 | 0.001130 | 0.001274 | 0.001071 |
| is_base_and_derived_test.test | RUN | 0.089847 | 0.245879 | 0.338859 | 0.001263 | 0.001194 | 0.000983 |
| is_assignable_test.test | RUN | 0.108927 | 0.346729 | 0.525834 | 0.001236 | 0.001220 | 0.001108 |
| is_array_test.test | RUN | 0.087601 | 0.238303 | 0.324701 | 0.001343 | 0.001172 | 0.000983 |
| is_arithmetic_test.test | RUN | 0.110481 | 0.355186 | 0.531719 | 0.001066 | 0.001379 | 0.001089 |
| is_abstract_test.test | RUN | 0.199906 | 0.957767 | 1.963430 | 0.001146 | 0.001346 | 0.001189 |
| integral_constant_test.test | RUN | 0.012669 | 0.039105 | 0.038192 | 0.000428 | 0.000503 | 0.001186 |
| has_virtual_destructor_test.test | RUN | 0.096597 | 0.280635 | 0.410579 | 0.001276 | 0.001320 | 0.001166 |
| has_unary_plus_test.test | RUN | 0.183671 | 1.017152 | 1.451897 | 0.001340 | 0.001396 | 0.001206 |
| has_unary_minus_test.test | RUN | 0.179322 | 1.010843 | 1.434603 | 0.001137 | 0.001317 | 0.001052 |
| has_trivial_move_constructor_test.test | RUN | 0.120498 | 0.412160 | 0.668837 | 0.001347 | 0.001266 | 0.001274 |
| has_trivial_move_assign_test.test | RUN | 0.125196 | 0.415811 | 0.675719 | 0.001420 | 0.001624 | 0.001160 |
| has_trivial_destructor_test.test | RUN | 0.126567 | 0.424837 | 0.666991 | 0.001276 | 0.001212 | 0.001061 |
| has_trivial_copy_test.test | RUN | 0.127830 | 0.451942 | 0.709402 | 0.001194 | 0.001536 | 0.001066 |
| has_trivial_constr_test.test | RUN | 0.128100 | 0.455943 | 0.691832 | 0.001200 | 0.001393 | 0.000971 |
| has_trivial_assign_test.test | RUN | 0.129441 | 0.447195 | 0.696539 | 0.001333 | 0.001399 | 0.001239 |
| has_right_shift_test.test | RUN | 0.192773 | 0.804234 | 1.530053 | 0.001249 | 0.001430 | 0.001081 |
| has_right_shift_assign_test.test | RUN | 0.183840 | 0.770055 | 1.411941 | 0.001059 | 0.001318 | 0.000959 |
| has_prefix_classes3_test.test | RUN | 0.134918 | 0.461263 | 0.731880 | 0.001173 | 0.001338 | 0.001120 |
| has_prefix_classes2_test.test | RUN | 0.138764 | 0.453672 | 0.710962 | 0.001152 | 0.001282 | 0.000975 |
| has_prefix_classes1_test.test | RUN | 0.133807 | 0.454730 | 0.690379 | 0.001198 | 0.001290 | 0.001037 |
| has_prefix_classes0_test.test | RUN | 0.133858 | 0.459155 | 0.719811 | 0.000984 | 0.001256 | 0.001188 |
| has_pre_increment_test.test | RUN | 0.182928 | 0.989997 | 1.424720 | 0.001170 | 0.001081 | 0.001014 |
| has_pre_decrement_test.test | RUN | 0.182882 | 0.985679 | 1.404819 | 0.001160 | 0.001100 | 0.000973 |
| has_postfix_classes3_test.test | RUN | 0.133846 | 0.457115 | 0.720412 | 0.001158 | 0.001333 | 0.001075 |
| has_postfix_classes2_test.test | RUN | 0.133309 | 0.449025 | 0.695359 | 0.001193 | 0.001183 | 0.001004 |
| has_postfix_classes1_test.test | RUN | 0.137231 | 0.455701 | 0.699715 | 0.001076 | 0.001409 | 0.001029 |
| has_postfix_classes0_test.test | RUN | 0.137793 | 0.456329 | 0.733509 | 0.001184 | 0.001294 | 0.001013 |
| has_post_increment_test.test | RUN | 0.183159 | 1.028671 | 1.455460 | 0.001237 | 0.001216 | 0.001064 |
| has_post_decrement_test.test | RUN | 0.181029 | 1.042286 | 1.438079 | 0.001335 | 0.001149 | 0.001132 |
| has_plus_test.test | RUN | 0.184656 | 0.767622 | 1.441733 | 0.001073 | 0.001329 | 0.001078 |
| has_plus_assign_test.test | RUN | 0.195396 | 0.776014 | 1.427298 | 0.001149 | 0.001224 | 0.001044 |
| has_operator_new_test.test | RUN | 0.127757 | 0.405552 | 0.651612 | 0.001139 | 0.001438 | 0.001038 |
| has_nothrow_destructor_test.test | RUN | 0.117953 | 0.434924 | 0.707765 | 0.001028 | 0.001368 | 0.001024 |
| has_nothrow_copy_test.test | RUN | 0.124844 | 0.419345 | 0.636971 | 0.001048 | 0.001485 | 0.001143 |
| has_nothrow_constr_test.test | RUN | 0.115878 | 0.411919 | 0.678456 | 0.001197 | 0.001302 | 0.001080 |
| has_nothrow_assign_test.test | RUN | 0.122037 | 0.410236 | 0.678325 | 0.001407 | 0.001290 | 0.001121 |
| has_not_equal_to_test.test | RUN | 0.183223 | 0.964816 | 1.441983 | 0.001168 | 0.001471 | 0.001097 |
| has_negate_test.test | RUN | 0.175567 | 0.734835 | 1.352095 | 0.000960 | 0.001147 | 0.001091 |
| has_multiplies_test.test | RUN | 0.185422 | 0.775955 | 1.459907 | 0.001089 | 0.001303 | 0.001152 |
| has_multiplies_assign_test.test | RUN | 0.183142 | 0.743000 | 1.456184 | 0.001374 | 0.001347 | 0.001118 |
| has_modulus_test.test | RUN | 0.177725 | 0.763466 | 1.420840 | 0.001259 | 0.001463 | 0.001104 |
| has_modulus_assign_test.test | RUN | 0.183268 | 0.765127 | 1.439662 | 0.001173 | 0.001272 | 0.001089 |
| has_minus_test.test | RUN | 0.194010 | 0.782889 | 1.479619 | 0.001283 | 0.001469 | 0.001049 |
| has_minus_assign_test.test | RUN | 0.191061 | 0.774389 | 1.448426 | 0.001323 | 0.001262 | 0.001085 |
| has_logical_or_test.test | RUN | 0.180586 | 0.776194 | 1.424115 | 0.001196 | 0.001163 | 0.001163 |
| has_logical_not_test.test | RUN | 0.180623 | 0.740551 | 1.399893 | 0.001060 | 0.001155 | 0.001177 |
| has_logical_and_test.test | RUN | 0.181083 | 0.775407 | 1.470771 | 0.001200 | 0.001292 | 0.001030 |
| has_less_test.test | RUN | 0.184312 | 0.982715 | 1.432983 | 0.001321 | 0.001416 | 0.001092 |
| has_less_equal_test.test | RUN | 0.184993 | 0.986505 | 1.431770 | 0.001172 | 0.001220 | 0.001140 |
| has_left_shift_test.test | RUN | 0.202798 | 0.973984 | 1.819713 | 0.001230 | 0.001173 | 0.001205 |
| has_left_shift_assign_test.test | RUN | 0.184570 | 0.771379 | 1.390897 | 0.001133 | 0.001360 | 0.001028 |
| has_greater_test.test | RUN | 0.185711 | 0.967971 | 1.422230 | 0.001095 | 0.001416 | 0.001034 |
| has_greater_equal_test.test | RUN | 0.187213 | 0.963981 | 1.410469 | 0.001135 | 0.001406 | 0.001116 |
| has_equal_to_test.test | RUN | 0.184839 | 0.978789 | 1.459471 | 0.001183 | 0.001318 | 0.001455 |
| has_divides_test.test | RUN | 0.182752 | 0.766627 | 1.396646 | 0.001140 | 0.001408 | 0.001139 |
| has_divides_assign_test.test | RUN | 0.185097 | 0.751718 | 1.432152 | 0.001472 | 0.001481 | 0.001007 |
| has_dereference_test.test | RUN | 0.178642 | 0.744029 | 1.348278 | 0.001198 | 0.001471 | 0.001087 |
| has_complement_test.test | RUN | 0.180045 | 0.985063 | 1.434127 | 0.001140 | 0.001514 | 0.001199 |
| has_bit_xor_test.test | RUN | 0.186351 | 0.762476 | 1.399917 | 0.001276 | 0.001598 | 0.001044 |
| has_bit_xor_assign_test.test | RUN | 0.184300 | 0.763794 | 1.433482 | 0.001274 | 0.001366 | 0.001036 |
| has_bit_or_test.test | RUN | 0.181756 | 0.746470 | 1.394388 | 0.001187 | 0.001548 | 0.001175 |
| has_bit_or_assign_test.test | RUN | 0.182432 | 0.781682 | 1.434257 | 0.001108 | 0.001527 | 0.001084 |
| has_bit_and_test.test | RUN | 0.179921 | 0.758950 | 1.398031 | 0.001112 | 0.001515 | 0.001075 |
| has_bit_and_assign_test.test | RUN | 0.182107 | 0.759370 | 1.438400 | 0.001487 | 0.001488 | 0.001053 |
| has_binary_classes9_test.test | RUN | 0.196402 | 0.931947 | 1.612084 | 0.001149 | 0.001441 | 0.001166 |
| has_binary_classes8_test.test | RUN | 0.198895 | 0.924171 | 1.602973 | 0.001167 | 0.001444 | 0.001162 |
| has_binary_classes7_test.test | RUN | 0.200091 | 0.901942 | 1.686567 | 0.001117 | 0.001458 | 0.000959 |
| has_binary_classes6_test.test | RUN | 0.193901 | 0.888946 | 1.690602 | 0.001434 | 0.001432 | 0.001119 |
| has_binary_classes5_test.test | RUN | 0.197166 | 0.899928 | 1.625020 | 0.001234 | 0.001475 | 0.001064 |
| has_binary_classes4_test.test | RUN | 0.198340 | 0.925808 | 1.608294 | 0.001061 | 0.001261 | 0.001134 |
| has_binary_classes3_test.test | RUN | 0.199032 | 0.918516 | 1.684077 | 0.001232 | 0.001485 | 0.001120 |
| has_binary_classes2_test.test | RUN | 0.202746 | 0.928255 | 1.682693 | 0.001427 | 0.001470 | 0.001075 |
| has_binary_classes1_test.test | RUN | 0.197711 | 0.907785 | 1.589778 | 0.001168 | 0.001333 | 0.001042 |
| has_binary_classes0_test.test | RUN | 0.199836 | 0.914307 | 1.607582 | 0.001072 | 0.001188 | 0.000958 |
| function_traits_test.test | RUN | 0.093952 | 0.237759 | 0.326991 | 0.001243 | 0.001256 | 0.001119 |
| floating_point_promotion_test.test | RUN | 0.089099 | 0.233113 | 0.321005 | 0.001420 | 0.001396 | 0.001011 |
| extent_test.test | RUN | 0.090351 | 0.240045 | 0.338233 | 0.001304 | 0.001379 | 0.001049 |
| enable_if_test.test | RUN | 0.082746 | 0.203161 | 0.245118 | 0.001156 | 0.001162 | 0.001012 |
| disjunction_test.test | RUN | 0.084898 | 0.215052 | 0.268942 | 0.001196 | 0.001300 | 0.001070 |
| detected_test.test | RUN | 0.085251 | 0.197433 | 0.246469 | 0.001207 | 0.001252 | 0.001044 |
| detected_or_test.test | RUN | 0.084788 | 0.214116 | 0.264041 | 0.001214 | 0.001334 | 0.000903 |
| decay_test.test | RUN | 0.222378 | 0.814063 | 1.561052 | 0.001349 | 0.001428 | 0.001027 |
| cxx14_aliases_test.test | RUN | 0.141243 | 0.318095 | 0.414923 | 0.001175 | 0.001233 | 0.000972 |
| copy_reference_test.test | RUN | 0.086256 | 0.208044 | 0.277806 | 0.001099 | 0.001239 | 0.001046 |
| copy_cv_test.test | RUN | 0.092072 | 0.221723 | 0.295528 | 0.001125 | 0.001463 | 0.000924 |
| copy_cv_ref_test.test | RUN | 0.125207 | 0.369357 | 0.649190 | 0.001361 | 0.001354 | 0.000989 |
| conjunction_test.test | RUN | 0.087703 | 0.211231 | 0.274469 | 0.001241 | 0.001270 | 0.001115 |
| conditional_test.test | RUN | 0.082173 | 0.211970 | 0.262526 | 0.001152 | 0.001176 | 0.000715 |
| common_type_test.test | RUN | 0.117731 | 0.322078 | 0.498273 | 0.001293 | 0.001174 | 0.000972 |
| common_type_sfinae_test.test | RUN | 0.087939 | 0.200653 | 0.247984 | 0.001308 | 0.001362 | 0.001004 |
| common_type_sfinae2_test.test | RUN | 0.086629 | 0.213965 | 0.262317 | 0.001231 | 0.001188 | 0.001030 |
| common_type_6_test.test | RUN | 0.089361 | 0.213161 | 0.274650 | 0.001230 | 0.001180 | 0.000983 |
| common_type_5_test.test | RUN | 0.091770 | 0.210541 | 0.272844 | 0.001294 | 0.001318 | 0.000976 |
| common_type_4_test.test | RUN | 0.094310 | 0.236380 | 0.326095 | 0.001504 | 0.001299 | 0.001026 |
| common_type_3_test.test | RUN | 0.085443 | 0.200420 | 0.237257 | 0.001322 | 0.001246 | 0.000989 |
| common_type_2_test.test | RUN | 0.114125 | 0.316133 | 0.513942 | 0.001221 | 0.001300 | 0.001075 |
| alignment_of_test.test | RUN | 0.094459 | 0.256743 | 0.328796 | 0.001164 | 0.001396 | 0.000983 |
| alignment_of_a2_test.test | RUN | 0.090032 | 0.255979 | 0.341918 | 0.000867 | 0.001201 | 0.000920 |
| aligned_storage_test.test | RUN | 0.092872 | 0.249581 | 0.301259 | 0.001045 | 0.001351 | 0.001115 |
| aligned_storage_empy_test.test | RUN | 0.107527 | 0.284647 | 0.412509 | 0.001280 | 0.001285 | 0.001029 |
| aligned_storage_a2_test.test | RUN | 0.095067 | 0.248787 | 0.309307 | 0.001330 | 0.001414 | 0.001121 |
| add_volatile_test.test | RUN | 0.196447 | 0.732258 | 1.433021 | 0.001327 | 0.001192 | 0.001062 |
| add_rvalue_reference_test.test | RUN | 0.221209 | 0.814452 | 1.695361 | 0.001342 | 0.001031 | 0.001249 |
| add_reference_test.test | RUN | 0.215307 | 0.804804 | 1.649559 | 0.001099 | 0.001396 | 0.001237 |
| add_pointer_test.test | RUN | 0.139631 | 0.457587 | 0.861979 | 0.001195 | 0.001309 | 0.001111 |
| add_lvalue_reference_test.test | RUN | 0.214082 | 0.798361 | 1.682677 | 0.001178 | 0.001435 | 0.001081 |
| add_cv_test.test | RUN | 0.204163 | 0.746087 | 1.574126 | 0.001153 | 0.001339 | 0.001009 |
| add_const_test.test | RUN | 0.203999 | 0.774644 | 1.523511 | 0.001039 | 0.001241 | 0.001181 |
| is_virtual_base_of_fail.test | COMPILE_FAIL | 0.078013 | 0.196360 | 0.253768 | — | — | — |
| is_stateless_fail.test | COMPILE_FAIL | 0.085123 | 0.200466 | 0.263881 | — | — | — |
| is_polymorphic_fail.test | COMPILE_FAIL | 0.079095 | 0.186099 | 0.251424 | — | — | — |
| is_nothrow_move_constructible_fail.test | COMPILE_FAIL | 0.080430 | 0.188979 | 0.254032 | — | — | — |
| is_nothrow_move_assignable_fail.test | COMPILE_FAIL | 0.079876 | 0.192340 | 0.249044 | — | — | — |
| is_list_constructible_fail.test | COMPILE_FAIL | 0.080332 | 0.193586 | 0.242836 | — | — | — |
| is_empty_fail.test | COMPILE_FAIL | 0.081570 | 0.192606 | 0.238323 | — | — | — |
| is_destructible_fail.test | COMPILE_FAIL | 0.080409 | 0.189136 | 0.241640 | — | — | — |
| is_default_constructible_fail.test | COMPILE_FAIL | 0.080923 | 0.190097 | 0.246723 | — | — | — |
| is_copy_constructible_fail.test | COMPILE_FAIL | 0.080608 | 0.193986 | 0.247306 | — | — | — |
| is_copy_assignable_fail.test | COMPILE_FAIL | 0.079118 | 0.193008 | 0.233939 | — | — | — |
| is_convertible_fail.test | COMPILE_FAIL | 0.079481 | 0.193673 | 0.247825 | — | — | — |
| is_convertible2_fail.test | COMPILE_FAIL | 0.079618 | 0.192640 | 0.241027 | — | — | — |
| is_constructible_fail.test | COMPILE_FAIL | 0.080128 | 0.192024 | 0.242118 | — | — | — |
| is_base_of_fail.test | COMPILE_FAIL | 0.077584 | 0.191967 | 0.241462 | — | — | — |
| is_assignable_fail.test | COMPILE_FAIL | 0.078598 | 0.189921 | 0.247184 | — | — | — |
| has_nothrow_destruct_fail.test | COMPILE_FAIL | 0.080012 | 0.193978 | 0.245728 | — | — | — |
| has_nothrow_copy_fail.test | COMPILE_FAIL | 0.080383 | 0.194624 | 0.245730 | — | — | — |
| has_nothrow_cons_fail.test | COMPILE_FAIL | 0.079613 | 0.195265 | 0.244712 | — | — | — |
| has_nothrow_assign_fail.test | COMPILE_FAIL | 0.079788 | 0.191724 | 0.247275 | — | — | — |
| common_type_fail.test | COMPILE_FAIL | 0.079190 | 0.189349 | 0.246225 | — | — | — |
| common_type2_fail.test | COMPILE_FAIL | 0.081167 | 0.191100 | 0.241224 | — | — | — |
| has_nothrow_assign_test_no_intrinsics.test | RUN | 0.124810 | 0.417688 | 0.686300 | 0.000946 | 0.001380 | 0.001172 |
| has_nothrow_constr_test_no_intrinsics.test | RUN | 0.117606 | 0.417598 | 0.674645 | 0.001430 | 0.001416 | 0.001148 |
| has_nothrow_copy_test_no_intrinsics.test | RUN | 0.120953 | 0.423600 | 0.662149 | 0.001065 | 0.000908 | 0.001061 |
| is_nothrow_move_assignable_test_no_intrinsics.test | RUN | 0.124417 | 0.415014 | 0.658316 | 0.000856 | 0.000841 | 0.000991 |
| is_nothrow_move_constructible_test_no_intrinsics.test | RUN | 0.079933 | 0.308304 | 0.413373 | 0.000939 | 0.000931 | 0.000849 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 1.000× | 0.997×, 1.003× | 0.998× |
| clang | 1.027× | 1.025×, 1.029× | 0.999× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1364 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44481767416).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| add_const_test.test | 10 | 0.000786s | 0.000785s | 0.000786s | byte equality observed |
| add_cv_test.test | 10 | 0.000800s | 0.000779s | 0.000789s | byte equality observed |
| add_lvalue_reference_test.test | 10 | 0.000802s | 0.000761s | 0.000773s | byte equality observed |
| add_pointer_test.test | 10 | 0.000805s | 0.000783s | 0.000774s | byte equality observed |
| add_reference_test.test | 10 | 0.000799s | 0.000792s | 0.000762s | byte equality observed |
| add_rvalue_reference_test.test | 10 | 0.000798s | 0.000793s | 0.000788s | byte equality observed |
| add_volatile_test.test | 10 | 0.000805s | 0.000783s | 0.000758s | byte equality observed |
| aligned_storage_a2_test.test | 10 | 0.000834s | 0.000828s | 0.000833s | byte equality observed |
| aligned_storage_empy_test.test | 10 | 0.000773s | 0.000791s | 0.000802s | byte equality observed |
| aligned_storage_test.test | 10 | 0.000816s | 0.000833s | 0.000841s | byte equality observed |
| alignment_of_a2_test.test | 10 | 0.000791s | 0.000803s | 0.000797s | byte equality observed |
| alignment_of_test.test | 10 | 0.000772s | 0.000769s | 0.000773s | byte equality observed |
| common_type_2_test.test | 10 | 0.000793s | 0.000762s | 0.000789s | byte equality observed |
| common_type_3_test.test | 10 | 0.000790s | 0.000785s | 0.000780s | byte equality observed |
| common_type_4_test.test | 10 | 0.000795s | 0.000786s | 0.000771s | byte equality observed |
| common_type_5_test.test | 10 | 0.000794s | 0.000772s | 0.000777s | byte equality observed |
| common_type_6_test.test | 10 | 0.000796s | 0.000757s | 0.000761s | byte equality observed |
| common_type_sfinae2_test.test | 10 | 0.000787s | 0.000800s | 0.000799s | byte equality observed |
| common_type_sfinae_test.test | 10 | 0.000779s | 0.000808s | 0.000762s | byte equality observed |
| common_type_test.test | 10 | 0.000789s | 0.000764s | 0.000777s | byte equality observed |
| conditional_test.test | 10 | 0.000810s | 0.000782s | 0.000764s | byte equality observed |
| conjunction_test.test | 10 | 0.000785s | 0.000794s | 0.000797s | byte equality observed |
| copy_cv_ref_test.test | 10 | 0.000800s | 0.000777s | 0.000765s | byte equality observed |
| copy_cv_test.test | 10 | 0.000787s | 0.000788s | 0.000804s | byte equality observed |
| copy_reference_test.test | 10 | 0.000799s | 0.000781s | 0.000817s | byte equality observed |
| cxx14_aliases_test.test | 10 | 0.000802s | 0.000784s | 0.000819s | byte equality observed |
| decay_test.test | 10 | 0.000795s | 0.000806s | 0.000769s | byte equality observed |
| detected_or_test.test | 10 | 0.000783s | 0.000806s | 0.000771s | byte equality observed |
| detected_test.test | 10 | 0.000777s | 0.000790s | 0.000798s | byte equality observed |
| disjunction_test.test | 10 | 0.000790s | 0.000771s | 0.000783s | byte equality observed |
| enable_if_test.test | 8 | 0.000767s | 0.000780s | 0.000780s | byte equality observed |
| extent_test.test | 10 | 0.000795s | 0.000782s | 0.000791s | byte equality observed |
| floating_point_promotion_test.test | 10 | 0.000782s | 0.000791s | 0.000786s | byte equality observed |
| function_traits_test.test | 10 | 0.000777s | 0.000794s | 0.000816s | byte equality observed |
| has_binary_classes0_test.test | 10 | 0.000794s | 0.000789s | 0.000790s | byte equality observed |
| has_binary_classes1_test.test | 10 | 0.000797s | 0.000805s | 0.000778s | byte equality observed |
| has_binary_classes2_test.test | 10 | 0.000789s | 0.000817s | 0.000791s | byte equality observed |
| has_binary_classes3_test.test | 10 | 0.000788s | 0.000787s | 0.000775s | byte equality observed |
| has_binary_classes4_test.test | 10 | 0.000777s | 0.000759s | 0.000783s | byte equality observed |
| has_binary_classes5_test.test | 10 | 0.000796s | 0.000799s | 0.000768s | byte equality observed |
| has_binary_classes6_test.test | 10 | 0.000794s | 0.000794s | 0.000760s | byte equality observed |
| has_binary_classes7_test.test | 10 | 0.000780s | 0.000787s | 0.000792s | byte equality observed |
| has_binary_classes8_test.test | 10 | 0.000785s | 0.000779s | 0.000794s | byte equality observed |
| has_binary_classes9_test.test | 10 | 0.000758s | 0.000777s | 0.000816s | byte equality observed |
| has_bit_and_assign_test.test | 10 | 0.000796s | 0.000775s | 0.000790s | byte equality observed |
| has_bit_and_test.test | 10 | 0.000818s | 0.000763s | 0.000758s | byte equality observed |
| has_bit_or_assign_test.test | 10 | 0.000786s | 0.000789s | 0.000796s | byte equality observed |
| has_bit_or_test.test | 10 | 0.000796s | 0.000783s | 0.000754s | byte equality observed |
| has_bit_xor_assign_test.test | 10 | 0.000789s | 0.000800s | 0.000794s | byte equality observed |
| has_bit_xor_test.test | 10 | 0.000799s | 0.000790s | 0.000786s | byte equality observed |
| has_complement_test.test | 10 | 0.000777s | 0.000787s | 0.000790s | byte equality observed |
| has_dereference_test.test | 10 | 0.000781s | 0.000776s | 0.000756s | byte equality observed |
| has_divides_assign_test.test | 10 | 0.000790s | 0.000799s | 0.000780s | byte equality observed |
| has_divides_test.test | 10 | 0.000772s | 0.000802s | 0.000821s | byte equality observed |
| has_equal_to_test.test | 10 | 0.000778s | 0.000808s | 0.000799s | byte equality observed |
| has_greater_equal_test.test | 10 | 0.000781s | 0.000775s | 0.000767s | byte equality observed |
| has_greater_test.test | 10 | 0.000778s | 0.000818s | 0.000767s | byte equality observed |
| has_left_shift_assign_test.test | 10 | 0.000772s | 0.000791s | 0.000804s | byte equality observed |
| has_left_shift_test.test | 10 | 0.000776s | 0.000797s | 0.000799s | byte equality observed |
| has_less_equal_test.test | 10 | 0.000791s | 0.000791s | 0.000784s | byte equality observed |
| has_less_test.test | 10 | 0.000777s | 0.000780s | 0.000787s | byte equality observed |
| has_logical_and_test.test | 10 | 0.000787s | 0.000795s | 0.000812s | byte equality observed |
| has_logical_not_test.test | 10 | 0.000803s | 0.000779s | 0.000802s | byte equality observed |
| has_logical_or_test.test | 10 | 0.000791s | 0.000803s | 0.000823s | byte equality observed |
| has_minus_assign_test.test | 10 | 0.000789s | 0.000795s | 0.000789s | byte equality observed |
| has_minus_test.test | 10 | 0.000786s | 0.000801s | 0.000798s | byte equality observed |
| has_modulus_assign_test.test | 10 | 0.000778s | 0.000782s | 0.000809s | byte equality observed |
| has_modulus_test.test | 10 | 0.000780s | 0.000785s | 0.000776s | byte equality observed |
| has_multiplies_assign_test.test | 10 | 0.000787s | 0.000808s | 0.000799s | byte equality observed |
| has_multiplies_test.test | 10 | 0.000790s | 0.000791s | 0.000782s | byte equality observed |
| has_negate_test.test | 10 | 0.000760s | 0.000787s | 0.000799s | byte equality observed |
| has_not_equal_to_test.test | 10 | 0.000780s | 0.000788s | 0.000796s | byte equality observed |
| has_nothrow_assign_test.test | 10 | 0.000773s | 0.000770s | 0.000796s | byte equality observed |
| has_nothrow_assign_test_no_intrinsics.test | 10 | 0.000786s | 0.000781s | 0.000814s | byte equality observed |
| has_nothrow_constr_test.test | 10 | 0.000761s | 0.000786s | 0.000820s | byte equality observed |
| has_nothrow_constr_test_no_intrinsics.test | 10 | 0.000800s | 0.000776s | 0.000813s | byte equality observed |
| has_nothrow_copy_test.test | 10 | 0.000782s | 0.000770s | 0.000818s | byte equality observed |
| has_nothrow_copy_test_no_intrinsics.test | 10 | 0.000782s | 0.000803s | 0.000780s | byte equality observed |
| has_nothrow_destructor_test.test | 10 | 0.000765s | 0.000750s | 0.000789s | byte equality observed |
| has_operator_new_test.test | 10 | 0.000774s | 0.000765s | 0.000784s | byte equality observed |
| has_plus_assign_test.test | 10 | 0.000785s | 0.000760s | 0.000792s | byte equality observed |
| has_plus_test.test | 10 | 0.000771s | 0.000773s | 0.000781s | byte equality observed |
| has_post_decrement_test.test | 10 | 0.000777s | 0.000786s | 0.000775s | byte equality observed |
| has_post_increment_test.test | 10 | 0.000772s | 0.000802s | 0.000812s | byte equality observed |
| has_postfix_classes0_test.test | 10 | 0.000773s | 0.000798s | 0.000801s | byte equality observed |
| has_postfix_classes1_test.test | 10 | 0.000792s | 0.000797s | 0.000804s | byte equality observed |
| has_postfix_classes2_test.test | 10 | 0.000792s | 0.000765s | 0.000810s | byte equality observed |
| has_postfix_classes3_test.test | 10 | 0.000796s | 0.000795s | 0.000771s | byte equality observed |
| has_pre_decrement_test.test | 10 | 0.000803s | 0.000781s | 0.000788s | byte equality observed |
| has_pre_increment_test.test | 10 | 0.000790s | 0.000772s | 0.000812s | byte equality observed |
| has_prefix_classes0_test.test | 10 | 0.000786s | 0.000760s | 0.000803s | byte equality observed |
| has_prefix_classes1_test.test | 10 | 0.000789s | 0.000790s | 0.000780s | byte equality observed |
| has_prefix_classes2_test.test | 10 | 0.000781s | 0.000798s | 0.000779s | byte equality observed |
| has_prefix_classes3_test.test | 10 | 0.000767s | 0.000783s | 0.000779s | byte equality observed |
| has_right_shift_assign_test.test | 10 | 0.000797s | 0.000771s | 0.000796s | byte equality observed |
| has_right_shift_test.test | 10 | 0.000771s | 0.000798s | 0.000803s | byte equality observed |
| has_trivial_assign_test.test | 10 | 0.000814s | 0.000783s | 0.000823s | byte equality observed |
| has_trivial_constr_test.test | 10 | 0.000812s | 0.000835s | 0.000808s | native test oracle; output varies |
| has_trivial_copy_test.test | 10 | 0.000805s | 0.000826s | 0.000820s | native test oracle; output varies |
| has_trivial_destructor_test.test | 10 | 0.000784s | 0.000810s | 0.000773s | byte equality observed |
| has_trivial_move_assign_test.test | 10 | 0.000785s | 0.000804s | 0.000780s | byte equality observed |
| has_trivial_move_constructor_test.test | 10 | 0.000795s | 0.000781s | 0.000789s | byte equality observed |
| has_unary_minus_test.test | 10 | 0.000781s | 0.000793s | 0.000781s | byte equality observed |
| has_unary_plus_test.test | 10 | 0.000800s | 0.000791s | 0.000810s | byte equality observed |
| has_virtual_destructor_test.test | 10 | 0.000799s | 0.000770s | 0.000794s | byte equality observed |
| integral_constant_test.test | 10 | 0.000358s | 0.000355s | 0.000774s | byte equality observed |
| is_abstract_test.test | 10 | 0.000785s | 0.000772s | 0.000776s | byte equality observed |
| is_arithmetic_test.test | 10 | 0.000767s | 0.000771s | 0.000794s | byte equality observed |
| is_array_test.test | 10 | 0.000795s | 0.000778s | 0.000806s | byte equality observed |
| is_assignable_test.test | 10 | 0.000774s | 0.000781s | 0.000801s | byte equality observed |
| is_base_and_derived_test.test | 10 | 0.000788s | 0.000809s | 0.000738s | byte equality observed |
| is_base_of_test.test | 10 | 0.000801s | 0.000792s | 0.000784s | byte equality observed |
| is_bounded_array_test.test | 10 | 0.000765s | 0.000789s | 0.000798s | byte equality observed |
| is_class_test.test | 10 | 0.000772s | 0.000790s | 0.000818s | byte equality observed |
| is_complete_test.test | 10 | 0.000773s | 0.000759s | 0.000800s | byte equality observed |
| is_complex_test.test | 10 | 0.000800s | 0.000774s | 0.000791s | byte equality observed |
| is_compound_test.test | 10 | 0.000778s | 0.000773s | 0.000799s | byte equality observed |
| is_const_test.test | 10 | 0.000776s | 0.000770s | 0.000779s | byte equality observed |
| is_constructible_test.test | 10 | 0.000778s | 0.000765s | 0.000792s | byte equality observed |
| is_convertible_test.test | 10 | 0.000792s | 0.000794s | 0.000790s | byte equality observed |
| is_copy_assignable_test.test | 10 | 0.000763s | 0.000799s | 0.000769s | byte equality observed |
| is_copy_constructible_test.test | 10 | 0.000772s | 0.000773s | 0.000812s | byte equality observed |
| is_default_constr_test.test | 10 | 0.000771s | 0.000774s | 0.000787s | byte equality observed |
| is_destructible_test.test | 10 | 0.000780s | 0.000769s | 0.000805s | byte equality observed |
| is_detected_exact_test.test | 10 | 0.000774s | 0.000763s | 0.000800s | byte equality observed |
| is_detected_test.test | 10 | 0.000780s | 0.000777s | 0.000814s | byte equality observed |
| is_empty_test.test | 10 | 0.000760s | 0.000768s | 0.000785s | byte equality observed |
| is_enum_test.test | 10 | 0.000780s | 0.000814s | 0.000794s | byte equality observed |
| is_final_test.test | 10 | 0.000766s | 0.000786s | 0.000776s | byte equality observed |
| is_float_test.test | 10 | 0.000773s | 0.000782s | 0.000774s | byte equality observed |
| is_floating_point_test.test | 10 | 0.000783s | 0.000767s | 0.000800s | byte equality observed |
| is_function_test.test | 10 | 0.000818s | 0.000824s | 0.000787s | byte equality observed |
| is_fundamental_test.test | 10 | 0.000802s | 0.000793s | 0.000766s | byte equality observed |
| is_integral_test.test | 10 | 0.000793s | 0.000751s | 0.000774s | byte equality observed |
| is_list_constructible_test.test | 10 | 0.000798s | 0.000757s | 0.000770s | byte equality observed |
| is_lvalue_reference_test.test | 10 | 0.000791s | 0.000778s | 0.000768s | byte equality observed |
| is_member_func_test.test | 10 | 0.000808s | 0.000791s | 0.000781s | byte equality observed |
| is_member_obj_test.test | 10 | 0.000805s | 0.000767s | 0.000779s | byte equality observed |
| is_member_pointer_test.test | 10 | 0.000780s | 0.000789s | 0.000793s | byte equality observed |
| is_noncopyable_test.test | 10 | 0.000787s | 0.000782s | 0.000799s | byte equality observed |
| is_nothrow_move_assignable_test.test | 10 | 0.000788s | 0.000765s | 0.000784s | byte equality observed |
| is_nothrow_move_assignable_test_no_intrinsics.test | 10 | 0.000808s | 0.000765s | 0.000766s | byte equality observed |
| is_nothrow_move_constructible_test.test | 10 | 0.000789s | 0.000785s | 0.000753s | byte equality observed |
| is_nothrow_move_constructible_test_no_intrinsics.test | 10 | 0.000776s | 0.000788s | 0.000794s | byte equality observed |
| is_nothrow_swappable_test.test | 10 | 0.000781s | 0.000809s | 0.000793s | byte equality observed |
| is_object_test.test | 10 | 0.000778s | 0.000761s | 0.000783s | byte equality observed |
| is_pod_test.test | 10 | 0.000778s | 0.000793s | 0.000771s | byte equality observed |
| is_pointer_test.test | 10 | 0.000768s | 0.000765s | 0.000798s | byte equality observed |
| is_polymorphic_test.test | 10 | 0.000774s | 0.000793s | 0.000782s | byte equality observed |
| is_reference_test.test | 10 | 0.000766s | 0.000788s | 0.000778s | byte equality observed |
| is_rvalue_reference_test.test | 10 | 0.000775s | 0.000766s | 0.000783s | byte equality observed |
| is_same_test.test | 10 | 0.000768s | 0.000772s | 0.000790s | byte equality observed |
| is_scalar_test.test | 10 | 0.000787s | 0.000786s | 0.000789s | byte equality observed |
| is_scoped_enum_test.test | 10 | 0.000810s | 0.000795s | 0.000795s | byte equality observed |
| is_signed_test.test | 10 | 0.000799s | 0.000796s | 0.000792s | byte equality observed |
| is_stateless_test.test | 10 | 0.000803s | 0.000756s | 0.000795s | byte equality observed |
| is_swappable_test.test | 10 | 0.000806s | 0.000755s | 0.000794s | byte equality observed |
| is_trivially_copyable_test.test | 10 | 0.000807s | 0.000796s | 0.000799s | byte equality observed |
| is_unbounded_array_test.test | 10 | 0.000788s | 0.000787s | 0.000786s | byte equality observed |
| is_union_test.test | 10 | 0.000770s | 0.000775s | 0.000789s | byte equality observed |
| is_unscoped_enum_test.test | 10 | 0.000770s | 0.000770s | 0.000785s | byte equality observed |
| is_unsigned_test.test | 10 | 0.000766s | 0.000780s | 0.000777s | byte equality observed |
| is_virtual_base_of_test.test | 10 | 0.000761s | 0.000781s | 0.000770s | byte equality observed |
| is_void_test.test | 10 | 0.000772s | 0.000776s | 0.000784s | byte equality observed |
| is_volatile_test.test | 10 | 0.000766s | 0.000799s | 0.000773s | byte equality observed |
| make_signed_test.test | 10 | 0.000785s | 0.000794s | 0.000792s | byte equality observed |
| make_unsigned_test.test | 10 | 0.000777s | 0.000795s | 0.000802s | byte equality observed |
| make_void_test.test | 10 | 0.000773s | 0.000787s | 0.000786s | byte equality observed |
| mpl_interop_test1.test | 10 | 0.000370s | 0.000365s | 0.000800s | byte equality observed |
| mpl_interop_test2.test | 10 | 0.000370s | 0.000348s | 0.000796s | byte equality observed |
| mpl_interop_test3.test | 10 | 0.000361s | 0.000361s | 0.000779s | byte equality observed |
| negation_test.test | 10 | 0.000783s | 0.000786s | 0.000792s | byte equality observed |
| promote_basic_test.test | 10 | 0.000355s | 0.000362s | 0.000788s | byte equality observed |
| promote_enum_msvc_bug_test.test | 10 | 0.000357s | 0.000363s | 0.000787s | byte equality observed |
| promote_enum_test.test | 10 | 0.000356s | 0.000358s | 0.000777s | byte equality observed |
| promote_mpl_test.test | 10 | 0.000358s | 0.000354s | 0.000755s | byte equality observed |
| rank_test.test | 10 | 0.000779s | 0.000767s | 0.000776s | byte equality observed |
| remove_all_extents_test.test | 10 | 0.000796s | 0.000812s | 0.000770s | byte equality observed |
| remove_bounds_test.test | 10 | 0.000810s | 0.000762s | 0.000797s | byte equality observed |
| remove_const_test.test | 10 | 0.000773s | 0.000773s | 0.000796s | byte equality observed |
| remove_cv_ref_test.test | 10 | 0.000785s | 0.000767s | 0.000787s | byte equality observed |
| remove_cv_test.test | 10 | 0.000774s | 0.000794s | 0.000792s | byte equality observed |
| remove_extent_test.test | 10 | 0.000793s | 0.000808s | 0.000787s | byte equality observed |
| remove_pointer_test.test | 10 | 0.000790s | 0.000768s | 0.000751s | byte equality observed |
| remove_reference_test.test | 10 | 0.000790s | 0.000753s | 0.000766s | byte equality observed |
| remove_volatile_test.test | 10 | 0.000769s | 0.000768s | 0.000783s | byte equality observed |
| tricky_abstract_type_test.test | 10 | 0.000776s | 0.000779s | 0.000789s | byte equality observed |
| tricky_add_pointer_test.test | 10 | 0.000772s | 0.000767s | 0.000799s | byte equality observed |
| tricky_function_type_test.test | 10 | 0.000784s | 0.000769s | 0.000785s | byte equality observed |
| tricky_incomplete_type_test.test | 10 | 0.000785s | 0.000755s | 0.000772s | byte equality observed |
| tricky_is_enum_test.test | 10 | 0.000776s | 0.000750s | 0.000784s | byte equality observed |
| tricky_partial_spec_test.test | 10 | 0.000796s | 0.000774s | 0.000772s | byte equality observed |
| tricky_rvalue_test.test | 10 | 0.000778s | 0.000766s | 0.000779s | byte equality observed |
| type_identity_test.test | 10 | 0.000774s | 0.000769s | 0.000781s | byte equality observed |
| type_traits_test.test | 10 | 0.000362s | 0.000351s | 0.000795s | byte equality observed |
| type_with_alignment_test.test | 10 | 0.000829s | 0.000859s | 0.000827s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44481767416).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
