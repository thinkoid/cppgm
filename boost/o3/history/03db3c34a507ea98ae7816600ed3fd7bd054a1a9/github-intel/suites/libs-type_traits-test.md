# libs/type_traits/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| type_with_alignment_test.test | RUN | 0.093886 | 0.274410 | 0.370709 | 0.000934 | 0.001299 | 0.001141 |
| type_traits_test.test | RUN | 0.126659 | 0.276584 | 0.374152 | 0.000443 | 0.000456 | 0.001122 |
| type_identity_test.test | RUN | 0.246382 | 0.934755 | 1.951625 | 0.001119 | 0.001143 | 0.000977 |
| tricky_rvalue_test.test | RUN | 0.085056 | 0.220919 | 0.290314 | 0.001234 | 0.001183 | 0.001067 |
| tricky_partial_spec_test.test | RUN | 0.103279 | 0.305341 | 0.469711 | 0.001118 | 0.001124 | 0.001080 |
| tricky_is_enum_test.test | RUN | 0.082634 | 0.205576 | 0.271295 | 0.001192 | 0.001080 | 0.001123 |
| tricky_incomplete_type_test.test | RUN | 0.130471 | 0.313698 | 0.436597 | 0.001049 | 0.001221 | 0.001122 |
| tricky_function_type_test.test | RUN | 0.110050 | 0.332979 | 0.505924 | 0.001122 | 0.001283 | 0.001169 |
| tricky_add_pointer_test.test | RUN | 0.167199 | 0.564143 | 1.116226 | 0.001100 | 0.001230 | 0.001217 |
| tricky_abstract_type_test.test | RUN | 0.086380 | 0.208238 | 0.278450 | 0.001104 | 0.001219 | 0.001317 |
| remove_volatile_test.test | RUN | 0.220836 | 0.819735 | 1.746255 | 0.001151 | 0.001315 | 0.001296 |
| remove_reference_test.test | RUN | 0.229366 | 0.845710 | 1.831421 | 0.001149 | 0.001385 | 0.001145 |
| remove_pointer_test.test | RUN | 0.235855 | 0.888456 | 1.920751 | 0.001145 | 0.001210 | 0.001143 |
| remove_extent_test.test | RUN | 0.228085 | 0.874139 | 1.835157 | 0.001105 | 0.001273 | 0.001127 |
| remove_cv_test.test | RUN | 0.224294 | 0.862233 | 1.836280 | 0.001203 | 0.001308 | 0.001222 |
| remove_cv_ref_test.test | RUN | 0.471284 | 2.116905 | 4.531605 | 0.001224 | 0.000886 | 0.001073 |
| remove_const_test.test | RUN | 0.219693 | 0.806211 | 1.734670 | 0.001206 | 0.001173 | 0.001227 |
| remove_bounds_test.test | RUN | 0.227018 | 0.868369 | 1.821034 | 0.001283 | 0.001317 | 0.001201 |
| remove_all_extents_test.test | RUN | 0.230085 | 0.857762 | 1.852789 | 0.001045 | 0.001360 | 0.001105 |
| rank_test.test | RUN | 0.090237 | 0.216902 | 0.278757 | 0.001302 | 0.001195 | 0.001122 |
| promote_mpl_test.test | RUN | 0.076792 | 0.193297 | 0.205775 | 0.000416 | 0.000510 | 0.001193 |
| promote_enum_test.test | RUN | 0.016526 | 0.047560 | 0.049666 | 0.000526 | 0.000489 | 0.001075 |
| promote_enum_msvc_bug_test.test | RUN | 0.014832 | 0.037216 | 0.043599 | 0.000433 | 0.000402 | 0.001125 |
| promote_basic_test.test | RUN | 0.018110 | 0.053965 | 0.049562 | 0.000434 | 0.000499 | 0.001014 |
| negation_test.test | RUN | 0.083440 | 0.198403 | 0.252706 | 0.001290 | 0.001342 | 0.001127 |
| mpl_interop_test3.test | RUN | 0.072770 | 0.188622 | 0.194841 | 0.000469 | 0.000441 | 0.001296 |
| mpl_interop_test2.test | RUN | 0.023234 | 0.054483 | 0.053489 | 0.000478 | 0.000424 | 0.001131 |
| mpl_interop_test1.test | RUN | 0.012774 | 0.037546 | 0.038404 | 0.000471 | 0.000476 | 0.001115 |
| make_void_test.test | RUN | 0.086487 | 0.211679 | 0.296581 | 0.001304 | 0.001178 | 0.001200 |
| make_unsigned_test.test | RUN | 0.099249 | 0.285364 | 0.426155 | 0.001382 | 0.001110 | 0.001088 |
| make_signed_test.test | RUN | 0.101650 | 0.285131 | 0.392298 | 0.000964 | 0.001198 | 0.000942 |
| is_volatile_test.test | RUN | 0.089710 | 0.241797 | 0.335386 | 0.001101 | 0.001085 | 0.001131 |
| is_void_test.test | RUN | 0.087959 | 0.226074 | 0.310663 | 0.001084 | 0.001128 | 0.001118 |
| is_virtual_base_of_test.test | RUN | 0.100445 | 0.287671 | 0.418356 | 0.001105 | 0.001121 | 0.001082 |
| is_unsigned_test.test | RUN | 0.091601 | 0.229524 | 0.318683 | 0.001055 | 0.001322 | 0.001057 |
| is_unscoped_enum_test.test | RUN | 0.086630 | 0.213203 | 0.265469 | 0.001046 | 0.001011 | 0.001149 |
| is_union_test.test | RUN | 0.094893 | 0.262083 | 0.389283 | 0.001365 | 0.001074 | 0.001090 |
| is_unbounded_array_test.test | RUN | 0.087172 | 0.225375 | 0.304795 | 0.001129 | 0.001196 | 0.001083 |
| is_trivially_copyable_test.test | RUN | 0.142627 | 0.466383 | 0.796614 | 0.001018 | 0.001214 | 0.001152 |
| is_swappable_test.test | RUN | 0.115885 | 0.352617 | 0.596527 | 0.001031 | 0.001158 | 0.001031 |
| is_stateless_test.test | RUN | 0.129898 | 0.407000 | 0.648338 | 0.001254 | 0.001209 | 0.001160 |
| is_signed_test.test | RUN | 0.089109 | 0.234974 | 0.323411 | 0.001250 | 0.001312 | 0.000995 |
| is_scoped_enum_test.test | RUN | 0.084947 | 0.211131 | 0.277971 | 0.000960 | 0.001190 | 0.001085 |
| is_scalar_test.test | RUN | 0.111353 | 0.366459 | 0.570722 | 0.001048 | 0.001176 | 0.001216 |
| is_same_test.test | RUN | 0.085998 | 0.220768 | 0.287330 | 0.001229 | 0.001124 | 0.001085 |
| is_rvalue_reference_test.test | RUN | 0.089519 | 0.249471 | 0.354831 | 0.001063 | 0.001155 | 0.001085 |
| is_reference_test.test | RUN | 0.091279 | 0.249000 | 0.343646 | 0.001052 | 0.001202 | 0.001138 |
| is_polymorphic_test.test | RUN | 0.094326 | 0.260059 | 0.372964 | 0.000982 | 0.001233 | 0.001161 |
| is_pointer_test.test | RUN | 0.088094 | 0.256732 | 0.368440 | 0.001230 | 0.001172 | 0.001296 |
| is_pod_test.test | RUN | 0.120029 | 0.406788 | 0.682633 | 0.001114 | 0.001263 | 0.001119 |
| is_object_test.test | RUN | 0.085724 | 0.213815 | 0.280924 | 0.001280 | 0.001186 | 0.001235 |
| is_nothrow_swappable_test.test | RUN | 0.123515 | 0.380582 | 0.634268 | 0.001027 | 0.001180 | 0.001065 |
| is_nothrow_move_constructible_test.test | RUN | 0.118692 | 0.392403 | 0.659750 | 0.001349 | 0.001219 | 0.001092 |
| is_nothrow_move_assignable_test.test | RUN | 0.120489 | 0.405162 | 0.651056 | 0.001053 | 0.001311 | 0.000987 |
| is_noncopyable_test.test | RUN | 0.086719 | 0.218727 | 0.295378 | 0.001229 | 0.001223 | 0.001240 |
| is_member_pointer_test.test | RUN | 0.087734 | 0.220043 | 0.298302 | 0.001136 | 0.001174 | 0.001152 |
| is_member_obj_test.test | RUN | 0.089045 | 0.224818 | 0.292028 | 0.001278 | 0.001315 | 0.001077 |
| is_member_func_test.test | RUN | 0.090162 | 0.238634 | 0.331282 | 0.001072 | 0.001178 | 0.001129 |
| is_lvalue_reference_test.test | RUN | 0.090458 | 0.250114 | 0.357399 | 0.001185 | 0.001312 | 0.001111 |
| is_list_constructible_test.test | RUN | 0.107475 | 0.284731 | 0.390712 | 0.001025 | 0.001156 | 0.001093 |
| is_integral_test.test | RUN | 0.106631 | 0.349006 | 0.552345 | 0.001151 | 0.001280 | 0.001072 |
| is_fundamental_test.test | RUN | 0.110268 | 0.354645 | 0.570901 | 0.001227 | 0.001148 | 0.001066 |
| is_function_test.test | RUN | 0.088580 | 0.236263 | 0.327900 | 0.001131 | 0.001251 | 0.001126 |
| is_floating_point_test.test | RUN | 0.092345 | 0.255167 | 0.369799 | 0.001021 | 0.001167 | 0.001034 |
| is_float_test.test | RUN | 0.092845 | 0.258338 | 0.368415 | 0.001284 | 0.001205 | 0.001139 |
| is_final_test.test | RUN | 0.093231 | 0.257674 | 0.365439 | 0.001149 | 0.001108 | 0.001033 |
| is_enum_test.test | RUN | 0.086630 | 0.214283 | 0.288885 | 0.001200 | 0.001119 | 0.001097 |
| is_empty_test.test | RUN | 0.094555 | 0.237964 | 0.328832 | 0.001031 | 0.001282 | 0.001002 |
| is_detected_test.test | RUN | 0.086415 | 0.203489 | 0.272290 | 0.001336 | 0.001137 | 0.001168 |
| is_detected_exact_test.test | RUN | 0.083285 | 0.201506 | 0.267405 | 0.001364 | 0.001051 | 0.001128 |
| is_destructible_test.test | RUN | 0.117742 | 0.393983 | 0.630993 | 0.001205 | 0.001205 | 0.001200 |
| is_default_constr_test.test | RUN | 0.124611 | 0.401060 | 0.647390 | 0.001143 | 0.001230 | 0.001196 |
| is_copy_constructible_test.test | RUN | 0.128784 | 0.422130 | 0.695044 | 0.001148 | 0.001007 | 0.001108 |
| is_copy_assignable_test.test | RUN | 0.125619 | 0.409654 | 0.678095 | 0.001250 | 0.001144 | 0.001167 |
| is_convertible_test.test | RUN | 0.119507 | 0.374710 | 0.561233 | 0.001195 | 0.001256 | 0.001102 |
| is_constructible_test.test | RUN | 0.102206 | 0.271623 | 0.390342 | 0.001067 | 0.001187 | 0.001279 |
| is_const_test.test | RUN | 0.090350 | 0.236835 | 0.323035 | 0.001125 | 0.001101 | 0.001165 |
| is_compound_test.test | RUN | 0.082802 | 0.206726 | 0.266001 | 0.001210 | 0.001200 | 0.001128 |
| is_complex_test.test | RUN | 0.112582 | 0.274665 | 0.369822 | 0.001058 | 0.001304 | 0.001265 |
| is_complete_test.test | RUN | 0.099863 | 0.280124 | 0.422513 | 0.001047 | 0.001144 | 0.001123 |
| is_class_test.test | RUN | 0.093642 | 0.246536 | 0.346178 | 0.001210 | 0.001221 | 0.001151 |
| is_bounded_array_test.test | RUN | 0.086959 | 0.225535 | 0.305271 | 0.001127 | 0.001300 | 0.001106 |
| is_base_of_test.test | RUN | 0.092212 | 0.242438 | 0.344212 | 0.001178 | 0.001254 | 0.001210 |
| is_base_and_derived_test.test | RUN | 0.093749 | 0.239834 | 0.345643 | 0.001212 | 0.001248 | 0.001096 |
| is_assignable_test.test | RUN | 0.109848 | 0.337877 | 0.522309 | 0.001053 | 0.001175 | 0.001239 |
| is_array_test.test | RUN | 0.088914 | 0.235291 | 0.318717 | 0.001130 | 0.001141 | 0.001158 |
| is_arithmetic_test.test | RUN | 0.109049 | 0.345798 | 0.521872 | 0.001152 | 0.001210 | 0.001235 |
| is_abstract_test.test | RUN | 0.200481 | 0.931136 | 1.995146 | 0.001181 | 0.001207 | 0.001141 |
| integral_constant_test.test | RUN | 0.012961 | 0.035173 | 0.039986 | 0.000489 | 0.000502 | 0.001100 |
| has_virtual_destructor_test.test | RUN | 0.097138 | 0.272173 | 0.385117 | 0.001088 | 0.001311 | 0.001171 |
| has_unary_plus_test.test | RUN | 0.179267 | 0.969125 | 1.464201 | 0.001110 | 0.001305 | 0.001348 |
| has_unary_minus_test.test | RUN | 0.177236 | 0.943327 | 1.439972 | 0.001015 | 0.001172 | 0.001185 |
| has_trivial_move_constructor_test.test | RUN | 0.127224 | 0.414365 | 0.706966 | 0.001088 | 0.001211 | 0.001123 |
| has_trivial_move_assign_test.test | RUN | 0.123765 | 0.401236 | 0.643822 | 0.001100 | 0.001166 | 0.001262 |
| has_trivial_destructor_test.test | RUN | 0.121837 | 0.402900 | 0.681029 | 0.001157 | 0.001162 | 0.001123 |
| has_trivial_copy_test.test | RUN | 0.129591 | 0.430425 | 0.695401 | 0.001180 | 0.001339 | 0.001314 |
| has_trivial_constr_test.test | RUN | 0.126867 | 0.436644 | 0.691885 | 0.001155 | 0.001225 | 0.001282 |
| has_trivial_assign_test.test | RUN | 0.126935 | 0.425894 | 0.679196 | 0.001119 | 0.001374 | 0.001249 |
| has_right_shift_test.test | RUN | 0.191293 | 0.769945 | 1.558240 | 0.001318 | 0.001245 | 0.001166 |
| has_right_shift_assign_test.test | RUN | 0.186318 | 0.753844 | 1.457570 | 0.001085 | 0.001390 | 0.001086 |
| has_prefix_classes3_test.test | RUN | 0.136848 | 0.443334 | 0.706405 | 0.000935 | 0.001153 | 0.001161 |
| has_prefix_classes2_test.test | RUN | 0.135872 | 0.437110 | 0.700591 | 0.001076 | 0.001152 | 0.001231 |
| has_prefix_classes1_test.test | RUN | 0.134955 | 0.445245 | 0.712699 | 0.001392 | 0.001327 | 0.001216 |
| has_prefix_classes0_test.test | RUN | 0.135526 | 0.446608 | 0.706709 | 0.001198 | 0.001178 | 0.001152 |
| has_pre_increment_test.test | RUN | 0.182290 | 0.960105 | 1.468772 | 0.001278 | 0.001058 | 0.001157 |
| has_pre_decrement_test.test | RUN | 0.181354 | 0.948629 | 1.454402 | 0.001191 | 0.001085 | 0.001148 |
| has_postfix_classes3_test.test | RUN | 0.140517 | 0.444940 | 0.715803 | 0.001104 | 0.001237 | 0.001232 |
| has_postfix_classes2_test.test | RUN | 0.134312 | 0.436783 | 0.703402 | 0.001211 | 0.001143 | 0.001148 |
| has_postfix_classes1_test.test | RUN | 0.140160 | 0.446643 | 0.707977 | 0.001201 | 0.001188 | 0.001127 |
| has_postfix_classes0_test.test | RUN | 0.139296 | 0.448264 | 0.735065 | 0.001127 | 0.001272 | 0.001184 |
| has_post_increment_test.test | RUN | 0.183400 | 0.947399 | 1.442291 | 0.001427 | 0.001275 | 0.001227 |
| has_post_decrement_test.test | RUN | 0.182337 | 0.950582 | 1.450077 | 0.001044 | 0.001212 | 0.001224 |
| has_plus_test.test | RUN | 0.185684 | 0.728603 | 1.413293 | 0.001193 | 0.001288 | 0.001208 |
| has_plus_assign_test.test | RUN | 0.189470 | 0.740450 | 1.447423 | 0.001145 | 0.001164 | 0.001102 |
| has_operator_new_test.test | RUN | 0.123944 | 0.385964 | 0.615859 | 0.001141 | 0.001173 | 0.001189 |
| has_nothrow_destructor_test.test | RUN | 0.127572 | 0.423838 | 0.697778 | 0.001060 | 0.001201 | 0.000878 |
| has_nothrow_copy_test.test | RUN | 0.125985 | 0.410629 | 0.659252 | 0.001100 | 0.001295 | 0.001189 |
| has_nothrow_constr_test.test | RUN | 0.121961 | 0.400664 | 0.638413 | 0.001246 | 0.001299 | 0.001111 |
| has_nothrow_assign_test.test | RUN | 0.121765 | 0.403844 | 0.662904 | 0.001220 | 0.001200 | 0.001188 |
| has_not_equal_to_test.test | RUN | 0.184709 | 0.942426 | 1.457614 | 0.001221 | 0.001284 | 0.001310 |
| has_negate_test.test | RUN | 0.177422 | 0.716159 | 1.385967 | 0.001111 | 0.001111 | 0.001123 |
| has_multiplies_test.test | RUN | 0.183779 | 0.737678 | 1.412394 | 0.001182 | 0.001282 | 0.001092 |
| has_multiplies_assign_test.test | RUN | 0.190216 | 0.740155 | 1.397474 | 0.001219 | 0.001255 | 0.001115 |
| has_modulus_test.test | RUN | 0.181907 | 0.740052 | 1.424012 | 0.001089 | 0.001213 | 0.001176 |
| has_modulus_assign_test.test | RUN | 0.184845 | 0.747697 | 1.429739 | 0.001119 | 0.001237 | 0.001141 |
| has_minus_test.test | RUN | 0.189447 | 0.747502 | 1.426336 | 0.001222 | 0.001209 | 0.001236 |
| has_minus_assign_test.test | RUN | 0.194315 | 0.737241 | 1.430600 | 0.001189 | 0.001280 | 0.001167 |
| has_logical_or_test.test | RUN | 0.183867 | 0.742454 | 1.428843 | 0.001170 | 0.001139 | 0.001252 |
| has_logical_not_test.test | RUN | 0.181017 | 0.727020 | 1.391991 | 0.001236 | 0.001249 | 0.001240 |
| has_logical_and_test.test | RUN | 0.184633 | 0.753547 | 1.424136 | 0.001239 | 0.001180 | 0.001128 |
| has_less_test.test | RUN | 0.181948 | 0.937014 | 1.428079 | 0.001180 | 0.001189 | 0.001182 |
| has_less_equal_test.test | RUN | 0.183657 | 0.947731 | 1.428612 | 0.001217 | 0.001264 | 0.001149 |
| has_left_shift_test.test | RUN | 0.202916 | 0.929987 | 1.752162 | 0.001134 | 0.001254 | 0.001123 |
| has_left_shift_assign_test.test | RUN | 0.183150 | 0.736678 | 1.461579 | 0.001188 | 0.001362 | 0.001183 |
| has_greater_test.test | RUN | 0.185696 | 0.927833 | 1.468298 | 0.001202 | 0.001273 | 0.001099 |
| has_greater_equal_test.test | RUN | 0.181670 | 0.965019 | 1.444675 | 0.001081 | 0.001236 | 0.001205 |
| has_equal_to_test.test | RUN | 0.186087 | 0.971753 | 1.423826 | 0.001208 | 0.001265 | 0.001256 |
| has_divides_test.test | RUN | 0.180678 | 0.729329 | 1.473470 | 0.001119 | 0.001243 | 0.001248 |
| has_divides_assign_test.test | RUN | 0.186980 | 0.722083 | 1.471954 | 0.001157 | 0.001240 | 0.001139 |
| has_dereference_test.test | RUN | 0.179049 | 0.725069 | 1.378810 | 0.001128 | 0.001393 | 0.001184 |
| has_complement_test.test | RUN | 0.183978 | 0.951331 | 1.412181 | 0.001168 | 0.001414 | 0.001282 |
| has_bit_xor_test.test | RUN | 0.181515 | 0.739466 | 1.470142 | 0.001108 | 0.001361 | 0.001082 |
| has_bit_xor_assign_test.test | RUN | 0.185483 | 0.752731 | 1.454366 | 0.001132 | 0.001186 | 0.001096 |
| has_bit_or_test.test | RUN | 0.182369 | 0.731735 | 1.426516 | 0.001175 | 0.001221 | 0.001168 |
| has_bit_or_assign_test.test | RUN | 0.185729 | 0.739245 | 1.402259 | 0.001300 | 0.001298 | 0.001242 |
| has_bit_and_test.test | RUN | 0.180640 | 0.749188 | 1.473680 | 0.001239 | 0.001285 | 0.001175 |
| has_bit_and_assign_test.test | RUN | 0.178389 | 0.739677 | 1.463316 | 0.001234 | 0.001230 | 0.001063 |
| has_binary_classes9_test.test | RUN | 0.200834 | 0.870851 | 1.627071 | 0.001164 | 0.001196 | 0.001108 |
| has_binary_classes8_test.test | RUN | 0.196547 | 0.886976 | 1.615325 | 0.001125 | 0.001204 | 0.001230 |
| has_binary_classes7_test.test | RUN | 0.195528 | 0.894585 | 1.672868 | 0.001102 | 0.001339 | 0.001012 |
| has_binary_classes6_test.test | RUN | 0.199825 | 0.848709 | 1.673283 | 0.001210 | 0.001128 | 0.001015 |
| has_binary_classes5_test.test | RUN | 0.197167 | 0.853396 | 1.626195 | 0.001334 | 0.001421 | 0.001127 |
| has_binary_classes4_test.test | RUN | 0.201134 | 0.883529 | 1.608662 | 0.001175 | 0.001313 | 0.001218 |
| has_binary_classes3_test.test | RUN | 0.199745 | 0.877022 | 1.671773 | 0.001101 | 0.001302 | 0.001092 |
| has_binary_classes2_test.test | RUN | 0.201049 | 0.892867 | 1.669016 | 0.001188 | 0.001213 | 0.001113 |
| has_binary_classes1_test.test | RUN | 0.197156 | 0.877272 | 1.596391 | 0.001076 | 0.001204 | 0.001214 |
| has_binary_classes0_test.test | RUN | 0.205297 | 0.890224 | 1.614075 | 0.001060 | 0.001161 | 0.001049 |
| function_traits_test.test | RUN | 0.091023 | 0.238829 | 0.336852 | 0.001129 | 0.001202 | 0.001066 |
| floating_point_promotion_test.test | RUN | 0.083945 | 0.234528 | 0.319646 | 0.001210 | 0.001289 | 0.001226 |
| extent_test.test | RUN | 0.090569 | 0.236592 | 0.337227 | 0.001098 | 0.001205 | 0.001133 |
| enable_if_test.test | RUN | 0.085840 | 0.203773 | 0.252330 | 0.000902 | 0.001340 | 0.001129 |
| disjunction_test.test | RUN | 0.089630 | 0.211092 | 0.279520 | 0.001052 | 0.001240 | 0.001020 |
| detected_test.test | RUN | 0.085858 | 0.198218 | 0.253885 | 0.001232 | 0.001181 | 0.001009 |
| detected_or_test.test | RUN | 0.089790 | 0.212816 | 0.260630 | 0.001147 | 0.001260 | 0.001021 |
| decay_test.test | RUN | 0.219594 | 0.790397 | 1.554340 | 0.001312 | 0.001303 | 0.001271 |
| cxx14_aliases_test.test | RUN | 0.137759 | 0.301000 | 0.419966 | 0.001362 | 0.001365 | 0.001109 |
| copy_reference_test.test | RUN | 0.084918 | 0.210680 | 0.275602 | 0.001141 | 0.001207 | 0.001401 |
| copy_cv_test.test | RUN | 0.092697 | 0.217086 | 0.307427 | 0.001197 | 0.001211 | 0.001090 |
| copy_cv_ref_test.test | RUN | 0.122083 | 0.366303 | 0.636708 | 0.001057 | 0.000975 | 0.001156 |
| conjunction_test.test | RUN | 0.087258 | 0.215438 | 0.286893 | 0.001227 | 0.001412 | 0.001092 |
| conditional_test.test | RUN | 0.082825 | 0.206274 | 0.277939 | 0.001200 | 0.001025 | 0.001046 |
| common_type_test.test | RUN | 0.115019 | 0.318987 | 0.524426 | 0.001226 | 0.001284 | 0.000977 |
| common_type_sfinae_test.test | RUN | 0.082836 | 0.196140 | 0.262561 | 0.001191 | 0.001208 | 0.001155 |
| common_type_sfinae2_test.test | RUN | 0.087752 | 0.207855 | 0.285216 | 0.001203 | 0.001206 | 0.001024 |
| common_type_6_test.test | RUN | 0.085910 | 0.210936 | 0.291525 | 0.001300 | 0.001124 | 0.001074 |
| common_type_5_test.test | RUN | 0.090742 | 0.212811 | 0.282731 | 0.001163 | 0.001323 | 0.001084 |
| common_type_4_test.test | RUN | 0.093512 | 0.232954 | 0.331374 | 0.001187 | 0.001254 | 0.001168 |
| common_type_3_test.test | RUN | 0.085636 | 0.195719 | 0.252689 | 0.001157 | 0.001175 | 0.001110 |
| common_type_2_test.test | RUN | 0.112306 | 0.302384 | 0.512262 | 0.001065 | 0.001189 | 0.001152 |
| alignment_of_test.test | RUN | 0.093282 | 0.247104 | 0.340732 | 0.001163 | 0.001315 | 0.001130 |
| alignment_of_a2_test.test | RUN | 0.092661 | 0.252590 | 0.338055 | 0.001039 | 0.001226 | 0.001093 |
| aligned_storage_test.test | RUN | 0.095721 | 0.247251 | 0.321873 | 0.001251 | 0.001213 | 0.001087 |
| aligned_storage_empy_test.test | RUN | 0.109155 | 0.277706 | 0.420199 | 0.001056 | 0.001189 | 0.001084 |
| aligned_storage_a2_test.test | RUN | 0.095619 | 0.243635 | 0.317616 | 0.001242 | 0.001352 | 0.001405 |
| add_volatile_test.test | RUN | 0.199581 | 0.705684 | 1.488544 | 0.001228 | 0.001098 | 0.001117 |
| add_rvalue_reference_test.test | RUN | 0.223966 | 0.796100 | 1.685804 | 0.001139 | 0.000955 | 0.001153 |
| add_reference_test.test | RUN | 0.216262 | 0.783394 | 1.643178 | 0.001086 | 0.001226 | 0.001161 |
| add_pointer_test.test | RUN | 0.140831 | 0.444752 | 0.868653 | 0.001106 | 0.001194 | 0.001014 |
| add_lvalue_reference_test.test | RUN | 0.216787 | 0.786993 | 1.645533 | 0.001284 | 0.001311 | 0.001195 |
| add_cv_test.test | RUN | 0.202585 | 0.727314 | 1.610260 | 0.001224 | 0.001320 | 0.001108 |
| add_const_test.test | RUN | 0.203764 | 0.731777 | 1.595510 | 0.001123 | 0.001133 | 0.001167 |
| is_virtual_base_of_fail.test | COMPILE_FAIL | 0.079468 | 0.191840 | 0.253605 | — | — | — |
| is_stateless_fail.test | COMPILE_FAIL | 0.085651 | 0.197505 | 0.260242 | — | — | — |
| is_polymorphic_fail.test | COMPILE_FAIL | 0.078231 | 0.185996 | 0.245031 | — | — | — |
| is_nothrow_move_constructible_fail.test | COMPILE_FAIL | 0.080043 | 0.191477 | 0.244227 | — | — | — |
| is_nothrow_move_assignable_fail.test | COMPILE_FAIL | 0.079598 | 0.189495 | 0.246369 | — | — | — |
| is_list_constructible_fail.test | COMPILE_FAIL | 0.077967 | 0.187625 | 0.233442 | — | — | — |
| is_empty_fail.test | COMPILE_FAIL | 0.080485 | 0.191005 | 0.241905 | — | — | — |
| is_destructible_fail.test | COMPILE_FAIL | 0.078759 | 0.186023 | 0.245345 | — | — | — |
| is_default_constructible_fail.test | COMPILE_FAIL | 0.078823 | 0.186567 | 0.240641 | — | — | — |
| is_copy_constructible_fail.test | COMPILE_FAIL | 0.079582 | 0.188551 | 0.244864 | — | — | — |
| is_copy_assignable_fail.test | COMPILE_FAIL | 0.079260 | 0.186581 | 0.240051 | — | — | — |
| is_convertible_fail.test | COMPILE_FAIL | 0.080110 | 0.190065 | 0.243553 | — | — | — |
| is_convertible2_fail.test | COMPILE_FAIL | 0.079356 | 0.189987 | 0.245926 | — | — | — |
| is_constructible_fail.test | COMPILE_FAIL | 0.079587 | 0.187271 | 0.243183 | — | — | — |
| is_base_of_fail.test | COMPILE_FAIL | 0.078795 | 0.187330 | 0.230840 | — | — | — |
| is_assignable_fail.test | COMPILE_FAIL | 0.078447 | 0.188301 | 0.251737 | — | — | — |
| has_nothrow_destruct_fail.test | COMPILE_FAIL | 0.079769 | 0.181276 | 0.252997 | — | — | — |
| has_nothrow_copy_fail.test | COMPILE_FAIL | 0.078893 | 0.187509 | 0.246234 | — | — | — |
| has_nothrow_cons_fail.test | COMPILE_FAIL | 0.079344 | 0.188854 | 0.246531 | — | — | — |
| has_nothrow_assign_fail.test | COMPILE_FAIL | 0.079660 | 0.183964 | 0.241798 | — | — | — |
| common_type_fail.test | COMPILE_FAIL | 0.079286 | 0.181121 | 0.238697 | — | — | — |
| common_type2_fail.test | COMPILE_FAIL | 0.080357 | 0.186635 | 0.249135 | — | — | — |
| has_nothrow_assign_test_no_intrinsics.test | RUN | 0.124775 | 0.401632 | 0.668989 | 0.001394 | 0.001318 | 0.001266 |
| has_nothrow_constr_test_no_intrinsics.test | RUN | 0.118358 | 0.402187 | 0.674320 | 0.001099 | 0.001081 | 0.001212 |
| has_nothrow_copy_test_no_intrinsics.test | RUN | 0.121054 | 0.409186 | 0.674350 | 0.001045 | 0.000994 | 0.001119 |
| is_nothrow_move_assignable_test_no_intrinsics.test | RUN | 0.121177 | 0.406841 | 0.644861 | 0.000774 | 0.000876 | 0.000856 |
| is_nothrow_move_constructible_test_no_intrinsics.test | RUN | 0.077560 | 0.305996 | 0.410809 | 0.000877 | 0.000859 | 0.000904 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 1.000× | 0.994×, 1.006× | 0.998× |
| clang | 1.032× | 1.024×, 1.039× | 0.998× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1364 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44402206984).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| add_const_test.test | 10 | 0.000765s | 0.000768s | 0.000800s | byte equality observed |
| add_cv_test.test | 10 | 0.000769s | 0.000790s | 0.000789s | byte equality observed |
| add_lvalue_reference_test.test | 10 | 0.000769s | 0.000779s | 0.000769s | byte equality observed |
| add_pointer_test.test | 10 | 0.000760s | 0.000797s | 0.000792s | byte equality observed |
| add_reference_test.test | 10 | 0.000783s | 0.000809s | 0.000812s | byte equality observed |
| add_rvalue_reference_test.test | 10 | 0.000787s | 0.000784s | 0.000794s | byte equality observed |
| add_volatile_test.test | 10 | 0.000796s | 0.000788s | 0.000778s | byte equality observed |
| aligned_storage_a2_test.test | 10 | 0.000817s | 0.000826s | 0.000816s | byte equality observed |
| aligned_storage_empy_test.test | 10 | 0.000795s | 0.000775s | 0.000784s | byte equality observed |
| aligned_storage_test.test | 10 | 0.000820s | 0.000827s | 0.000826s | byte equality observed |
| alignment_of_a2_test.test | 10 | 0.000763s | 0.000782s | 0.000792s | byte equality observed |
| alignment_of_test.test | 10 | 0.000770s | 0.000760s | 0.000782s | byte equality observed |
| common_type_2_test.test | 10 | 0.000759s | 0.000732s | 0.000780s | byte equality observed |
| common_type_3_test.test | 10 | 0.000774s | 0.000769s | 0.000777s | byte equality observed |
| common_type_4_test.test | 10 | 0.000777s | 0.000790s | 0.000790s | byte equality observed |
| common_type_5_test.test | 10 | 0.000777s | 0.000770s | 0.000772s | byte equality observed |
| common_type_6_test.test | 10 | 0.000749s | 0.000795s | 0.000790s | byte equality observed |
| common_type_sfinae2_test.test | 10 | 0.000756s | 0.000814s | 0.000803s | byte equality observed |
| common_type_sfinae_test.test | 10 | 0.000770s | 0.000792s | 0.000769s | byte equality observed |
| common_type_test.test | 10 | 0.000772s | 0.000782s | 0.000761s | byte equality observed |
| conditional_test.test | 10 | 0.000794s | 0.000777s | 0.000753s | byte equality observed |
| conjunction_test.test | 10 | 0.000755s | 0.000761s | 0.000766s | byte equality observed |
| copy_cv_ref_test.test | 10 | 0.000773s | 0.000765s | 0.000781s | byte equality observed |
| copy_cv_test.test | 10 | 0.000773s | 0.000767s | 0.000771s | byte equality observed |
| copy_reference_test.test | 10 | 0.000782s | 0.000794s | 0.000767s | byte equality observed |
| cxx14_aliases_test.test | 10 | 0.000775s | 0.000792s | 0.000758s | byte equality observed |
| decay_test.test | 10 | 0.000809s | 0.000792s | 0.000772s | byte equality observed |
| detected_or_test.test | 10 | 0.000754s | 0.000803s | 0.000791s | byte equality observed |
| detected_test.test | 10 | 0.000769s | 0.000771s | 0.000771s | byte equality observed |
| disjunction_test.test | 10 | 0.000769s | 0.000790s | 0.000760s | byte equality observed |
| enable_if_test.test | 10 | 0.000753s | 0.000772s | 0.000779s | byte equality observed |
| extent_test.test | 10 | 0.000767s | 0.000774s | 0.000772s | byte equality observed |
| floating_point_promotion_test.test | 10 | 0.000776s | 0.000783s | 0.000787s | byte equality observed |
| function_traits_test.test | 10 | 0.000772s | 0.000787s | 0.000784s | byte equality observed |
| has_binary_classes0_test.test | 10 | 0.000769s | 0.000793s | 0.000792s | byte equality observed |
| has_binary_classes1_test.test | 10 | 0.000781s | 0.000805s | 0.000795s | byte equality observed |
| has_binary_classes2_test.test | 10 | 0.000795s | 0.000769s | 0.000790s | byte equality observed |
| has_binary_classes3_test.test | 10 | 0.000773s | 0.000774s | 0.000793s | byte equality observed |
| has_binary_classes4_test.test | 10 | 0.000787s | 0.000769s | 0.000785s | byte equality observed |
| has_binary_classes5_test.test | 10 | 0.000767s | 0.000745s | 0.000774s | byte equality observed |
| has_binary_classes6_test.test | 10 | 0.000775s | 0.000759s | 0.000792s | byte equality observed |
| has_binary_classes7_test.test | 10 | 0.000792s | 0.000751s | 0.000769s | byte equality observed |
| has_binary_classes8_test.test | 10 | 0.000765s | 0.000750s | 0.000772s | byte equality observed |
| has_binary_classes9_test.test | 10 | 0.000781s | 0.000759s | 0.000783s | byte equality observed |
| has_bit_and_assign_test.test | 10 | 0.000750s | 0.000777s | 0.000809s | byte equality observed |
| has_bit_and_test.test | 10 | 0.000771s | 0.000771s | 0.000811s | byte equality observed |
| has_bit_or_assign_test.test | 10 | 0.000768s | 0.000758s | 0.000806s | byte equality observed |
| has_bit_or_test.test | 10 | 0.000787s | 0.000772s | 0.000809s | byte equality observed |
| has_bit_xor_assign_test.test | 10 | 0.000776s | 0.000755s | 0.000809s | byte equality observed |
| has_bit_xor_test.test | 10 | 0.000778s | 0.000765s | 0.000800s | byte equality observed |
| has_complement_test.test | 10 | 0.000778s | 0.000778s | 0.000792s | byte equality observed |
| has_dereference_test.test | 10 | 0.000774s | 0.000784s | 0.000784s | byte equality observed |
| has_divides_assign_test.test | 10 | 0.000782s | 0.000746s | 0.000794s | byte equality observed |
| has_divides_test.test | 10 | 0.000797s | 0.000779s | 0.000779s | byte equality observed |
| has_equal_to_test.test | 10 | 0.000774s | 0.000787s | 0.000778s | byte equality observed |
| has_greater_equal_test.test | 10 | 0.000763s | 0.000756s | 0.000791s | byte equality observed |
| has_greater_test.test | 10 | 0.000789s | 0.000771s | 0.000787s | byte equality observed |
| has_left_shift_assign_test.test | 10 | 0.000772s | 0.000756s | 0.000782s | byte equality observed |
| has_left_shift_test.test | 10 | 0.000777s | 0.000762s | 0.000753s | byte equality observed |
| has_less_equal_test.test | 10 | 0.000764s | 0.000777s | 0.000776s | byte equality observed |
| has_less_test.test | 10 | 0.000764s | 0.000776s | 0.000798s | byte equality observed |
| has_logical_and_test.test | 10 | 0.000750s | 0.000778s | 0.000780s | byte equality observed |
| has_logical_not_test.test | 10 | 0.000771s | 0.000790s | 0.000783s | byte equality observed |
| has_logical_or_test.test | 10 | 0.000760s | 0.000788s | 0.000785s | byte equality observed |
| has_minus_assign_test.test | 10 | 0.000771s | 0.000796s | 0.000802s | byte equality observed |
| has_minus_test.test | 10 | 0.000774s | 0.000790s | 0.000794s | byte equality observed |
| has_modulus_assign_test.test | 10 | 0.000769s | 0.000778s | 0.000778s | byte equality observed |
| has_modulus_test.test | 10 | 0.000770s | 0.000761s | 0.000770s | byte equality observed |
| has_multiplies_assign_test.test | 10 | 0.000772s | 0.000742s | 0.000763s | byte equality observed |
| has_multiplies_test.test | 10 | 0.000787s | 0.000764s | 0.000765s | byte equality observed |
| has_negate_test.test | 10 | 0.000768s | 0.000773s | 0.000784s | byte equality observed |
| has_not_equal_to_test.test | 10 | 0.000774s | 0.000770s | 0.000788s | byte equality observed |
| has_nothrow_assign_test.test | 10 | 0.000754s | 0.000769s | 0.000791s | byte equality observed |
| has_nothrow_assign_test_no_intrinsics.test | 10 | 0.000777s | 0.000787s | 0.000786s | byte equality observed |
| has_nothrow_constr_test.test | 10 | 0.000778s | 0.000796s | 0.000781s | byte equality observed |
| has_nothrow_constr_test_no_intrinsics.test | 10 | 0.000790s | 0.000772s | 0.000744s | byte equality observed |
| has_nothrow_copy_test.test | 10 | 0.000798s | 0.000787s | 0.000771s | byte equality observed |
| has_nothrow_copy_test_no_intrinsics.test | 10 | 0.000779s | 0.000753s | 0.000767s | byte equality observed |
| has_nothrow_destructor_test.test | 10 | 0.000786s | 0.000746s | 0.000786s | byte equality observed |
| has_operator_new_test.test | 10 | 0.000755s | 0.000776s | 0.000806s | byte equality observed |
| has_plus_assign_test.test | 10 | 0.000778s | 0.000760s | 0.000803s | byte equality observed |
| has_plus_test.test | 10 | 0.000786s | 0.000775s | 0.000782s | byte equality observed |
| has_post_decrement_test.test | 10 | 0.000786s | 0.000770s | 0.000807s | byte equality observed |
| has_post_increment_test.test | 10 | 0.000753s | 0.000778s | 0.000794s | byte equality observed |
| has_postfix_classes0_test.test | 10 | 0.000782s | 0.000781s | 0.000780s | byte equality observed |
| has_postfix_classes1_test.test | 10 | 0.000752s | 0.000762s | 0.000795s | byte equality observed |
| has_postfix_classes2_test.test | 10 | 0.000779s | 0.000781s | 0.000812s | byte equality observed |
| has_postfix_classes3_test.test | 7 | 0.000762s | 0.000780s | 0.000827s | byte equality observed |
| has_pre_decrement_test.test | 10 | 0.000765s | 0.000800s | 0.000802s | byte equality observed |
| has_pre_increment_test.test | 10 | 0.000794s | 0.000788s | 0.000800s | byte equality observed |
| has_prefix_classes0_test.test | 10 | 0.000778s | 0.000779s | 0.000778s | byte equality observed |
| has_prefix_classes1_test.test | 10 | 0.000773s | 0.000786s | 0.000780s | byte equality observed |
| has_prefix_classes2_test.test | 10 | 0.000761s | 0.000800s | 0.000776s | byte equality observed |
| has_prefix_classes3_test.test | 10 | 0.000777s | 0.000766s | 0.000793s | byte equality observed |
| has_right_shift_assign_test.test | 10 | 0.000752s | 0.000746s | 0.000778s | byte equality observed |
| has_right_shift_test.test | 10 | 0.000774s | 0.000766s | 0.000795s | byte equality observed |
| has_trivial_assign_test.test | 10 | 0.000810s | 0.000806s | 0.000822s | byte equality observed |
| has_trivial_constr_test.test | 10 | 0.000797s | 0.000804s | 0.000806s | native test oracle; output varies |
| has_trivial_copy_test.test | 10 | 0.000797s | 0.000817s | 0.000815s | native test oracle; output varies |
| has_trivial_destructor_test.test | 10 | 0.000796s | 0.000771s | 0.000773s | byte equality observed |
| has_trivial_move_assign_test.test | 10 | 0.000781s | 0.000770s | 0.000780s | byte equality observed |
| has_trivial_move_constructor_test.test | 10 | 0.000767s | 0.000776s | 0.000758s | byte equality observed |
| has_unary_minus_test.test | 10 | 0.000781s | 0.000740s | 0.000774s | byte equality observed |
| has_unary_plus_test.test | 10 | 0.000775s | 0.000774s | 0.000766s | byte equality observed |
| has_virtual_destructor_test.test | 10 | 0.000773s | 0.000781s | 0.000764s | byte equality observed |
| integral_constant_test.test | 10 | 0.000351s | 0.000351s | 0.000778s | byte equality observed |
| is_abstract_test.test | 10 | 0.000757s | 0.000778s | 0.000801s | byte equality observed |
| is_arithmetic_test.test | 10 | 0.000793s | 0.000781s | 0.000824s | byte equality observed |
| is_array_test.test | 10 | 0.000786s | 0.000769s | 0.000762s | byte equality observed |
| is_assignable_test.test | 10 | 0.000780s | 0.000763s | 0.000768s | byte equality observed |
| is_base_and_derived_test.test | 10 | 0.000775s | 0.000760s | 0.000773s | byte equality observed |
| is_base_of_test.test | 10 | 0.000773s | 0.000776s | 0.000781s | byte equality observed |
| is_bounded_array_test.test | 10 | 0.000760s | 0.000773s | 0.000768s | byte equality observed |
| is_class_test.test | 10 | 0.000768s | 0.000785s | 0.000784s | byte equality observed |
| is_complete_test.test | 10 | 0.000762s | 0.000781s | 0.000786s | byte equality observed |
| is_complex_test.test | 10 | 0.000768s | 0.000796s | 0.000767s | byte equality observed |
| is_compound_test.test | 10 | 0.000794s | 0.000798s | 0.000796s | byte equality observed |
| is_const_test.test | 10 | 0.000775s | 0.000789s | 0.000799s | byte equality observed |
| is_constructible_test.test | 10 | 0.000770s | 0.000733s | 0.000765s | byte equality observed |
| is_convertible_test.test | 10 | 0.000792s | 0.000789s | 0.000791s | byte equality observed |
| is_copy_assignable_test.test | 10 | 0.000773s | 0.000757s | 0.000782s | byte equality observed |
| is_copy_constructible_test.test | 10 | 0.000762s | 0.000770s | 0.000769s | byte equality observed |
| is_default_constr_test.test | 10 | 0.000784s | 0.000792s | 0.000786s | byte equality observed |
| is_destructible_test.test | 10 | 0.000758s | 0.000782s | 0.000804s | byte equality observed |
| is_detected_exact_test.test | 10 | 0.000780s | 0.000801s | 0.000784s | byte equality observed |
| is_detected_test.test | 10 | 0.000764s | 0.000802s | 0.000762s | byte equality observed |
| is_empty_test.test | 10 | 0.000797s | 0.000772s | 0.000785s | byte equality observed |
| is_enum_test.test | 10 | 0.000777s | 0.000785s | 0.000759s | byte equality observed |
| is_final_test.test | 10 | 0.000777s | 0.000785s | 0.000768s | byte equality observed |
| is_float_test.test | 10 | 0.000777s | 0.000767s | 0.000798s | byte equality observed |
| is_floating_point_test.test | 10 | 0.000773s | 0.000777s | 0.000774s | byte equality observed |
| is_function_test.test | 10 | 0.000792s | 0.000779s | 0.000784s | byte equality observed |
| is_fundamental_test.test | 10 | 0.000773s | 0.000769s | 0.000785s | byte equality observed |
| is_integral_test.test | 10 | 0.000762s | 0.000793s | 0.000789s | byte equality observed |
| is_list_constructible_test.test | 10 | 0.000774s | 0.000776s | 0.000775s | byte equality observed |
| is_lvalue_reference_test.test | 10 | 0.000786s | 0.000793s | 0.000782s | byte equality observed |
| is_member_func_test.test | 10 | 0.000784s | 0.000806s | 0.000753s | byte equality observed |
| is_member_obj_test.test | 10 | 0.000795s | 0.000790s | 0.000786s | byte equality observed |
| is_member_pointer_test.test | 10 | 0.000799s | 0.000775s | 0.000778s | byte equality observed |
| is_noncopyable_test.test | 10 | 0.000770s | 0.000766s | 0.000793s | byte equality observed |
| is_nothrow_move_assignable_test.test | 10 | 0.000787s | 0.000773s | 0.000776s | byte equality observed |
| is_nothrow_move_assignable_test_no_intrinsics.test | 10 | 0.000791s | 0.000767s | 0.000787s | byte equality observed |
| is_nothrow_move_constructible_test.test | 10 | 0.000777s | 0.000746s | 0.000757s | byte equality observed |
| is_nothrow_move_constructible_test_no_intrinsics.test | 10 | 0.000780s | 0.000764s | 0.000764s | byte equality observed |
| is_nothrow_swappable_test.test | 10 | 0.000769s | 0.000780s | 0.000781s | byte equality observed |
| is_object_test.test | 10 | 0.000759s | 0.000791s | 0.000802s | byte equality observed |
| is_pod_test.test | 10 | 0.000763s | 0.000778s | 0.000777s | byte equality observed |
| is_pointer_test.test | 10 | 0.000753s | 0.000779s | 0.000760s | byte equality observed |
| is_polymorphic_test.test | 10 | 0.000774s | 0.000788s | 0.000772s | byte equality observed |
| is_reference_test.test | 10 | 0.000780s | 0.000753s | 0.000762s | byte equality observed |
| is_rvalue_reference_test.test | 10 | 0.000750s | 0.000761s | 0.000770s | byte equality observed |
| is_same_test.test | 10 | 0.000768s | 0.000752s | 0.000777s | byte equality observed |
| is_scalar_test.test | 10 | 0.000760s | 0.000780s | 0.000795s | byte equality observed |
| is_scoped_enum_test.test | 10 | 0.000766s | 0.000787s | 0.000765s | byte equality observed |
| is_signed_test.test | 10 | 0.000750s | 0.000768s | 0.000791s | byte equality observed |
| is_stateless_test.test | 10 | 0.000777s | 0.000783s | 0.000774s | byte equality observed |
| is_swappable_test.test | 10 | 0.000761s | 0.000780s | 0.000771s | byte equality observed |
| is_trivially_copyable_test.test | 10 | 0.000792s | 0.000779s | 0.000769s | byte equality observed |
| is_unbounded_array_test.test | 10 | 0.000775s | 0.000768s | 0.000803s | byte equality observed |
| is_union_test.test | 10 | 0.000782s | 0.000759s | 0.000811s | byte equality observed |
| is_unscoped_enum_test.test | 10 | 0.000774s | 0.000763s | 0.000775s | byte equality observed |
| is_unsigned_test.test | 10 | 0.000792s | 0.000761s | 0.000787s | byte equality observed |
| is_virtual_base_of_test.test | 10 | 0.000786s | 0.000772s | 0.000765s | byte equality observed |
| is_void_test.test | 10 | 0.000784s | 0.000772s | 0.000776s | byte equality observed |
| is_volatile_test.test | 10 | 0.000793s | 0.000761s | 0.000753s | byte equality observed |
| make_signed_test.test | 10 | 0.000785s | 0.000769s | 0.000770s | byte equality observed |
| make_unsigned_test.test | 10 | 0.000761s | 0.000753s | 0.000791s | byte equality observed |
| make_void_test.test | 10 | 0.000765s | 0.000760s | 0.000757s | byte equality observed |
| mpl_interop_test1.test | 10 | 0.000363s | 0.000353s | 0.000757s | byte equality observed |
| mpl_interop_test2.test | 10 | 0.000360s | 0.000363s | 0.000759s | byte equality observed |
| mpl_interop_test3.test | 10 | 0.000351s | 0.000350s | 0.000767s | byte equality observed |
| negation_test.test | 10 | 0.000770s | 0.000777s | 0.000776s | byte equality observed |
| promote_basic_test.test | 10 | 0.000354s | 0.000352s | 0.000785s | byte equality observed |
| promote_enum_msvc_bug_test.test | 10 | 0.000356s | 0.000365s | 0.000746s | byte equality observed |
| promote_enum_test.test | 10 | 0.000353s | 0.000358s | 0.000775s | byte equality observed |
| promote_mpl_test.test | 10 | 0.000349s | 0.000358s | 0.000775s | byte equality observed |
| rank_test.test | 10 | 0.000781s | 0.000757s | 0.000771s | byte equality observed |
| remove_all_extents_test.test | 10 | 0.000782s | 0.000769s | 0.000798s | byte equality observed |
| remove_bounds_test.test | 10 | 0.000785s | 0.000775s | 0.000783s | byte equality observed |
| remove_const_test.test | 10 | 0.000787s | 0.000800s | 0.000804s | byte equality observed |
| remove_cv_ref_test.test | 10 | 0.000764s | 0.000769s | 0.000806s | byte equality observed |
| remove_cv_test.test | 10 | 0.000767s | 0.000749s | 0.000803s | byte equality observed |
| remove_extent_test.test | 10 | 0.000772s | 0.000778s | 0.000784s | byte equality observed |
| remove_pointer_test.test | 10 | 0.000791s | 0.000770s | 0.000779s | byte equality observed |
| remove_reference_test.test | 10 | 0.000779s | 0.000764s | 0.000777s | byte equality observed |
| remove_volatile_test.test | 10 | 0.000783s | 0.000757s | 0.000774s | byte equality observed |
| tricky_abstract_type_test.test | 10 | 0.000767s | 0.000760s | 0.000774s | byte equality observed |
| tricky_add_pointer_test.test | 10 | 0.000775s | 0.000754s | 0.000793s | byte equality observed |
| tricky_function_type_test.test | 10 | 0.000770s | 0.000738s | 0.000775s | byte equality observed |
| tricky_incomplete_type_test.test | 10 | 0.000770s | 0.000773s | 0.000783s | byte equality observed |
| tricky_is_enum_test.test | 10 | 0.000769s | 0.000768s | 0.000771s | byte equality observed |
| tricky_partial_spec_test.test | 10 | 0.000782s | 0.000768s | 0.000777s | byte equality observed |
| tricky_rvalue_test.test | 10 | 0.000771s | 0.000775s | 0.000781s | byte equality observed |
| type_identity_test.test | 10 | 0.000778s | 0.000783s | 0.000774s | byte equality observed |
| type_traits_test.test | 10 | 0.000360s | 0.000348s | 0.000803s | byte equality observed |
| type_with_alignment_test.test | 10 | 0.000823s | 0.000830s | 0.000818s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44402206984).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
