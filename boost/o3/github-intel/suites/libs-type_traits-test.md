# libs/type_traits/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| type_with_alignment_test.test | RUN | 0.093091 | 0.280387 | 0.372893 | 0.001185 | 0.001414 | 0.001078 |
| type_traits_test.test | RUN | 0.126104 | 0.282091 | 0.375075 | 0.000426 | 0.000412 | 0.001056 |
| type_identity_test.test | RUN | 0.247529 | 0.974996 | 1.965229 | 0.001203 | 0.001334 | 0.001146 |
| tricky_rvalue_test.test | RUN | 0.086093 | 0.220590 | 0.288345 | 0.001142 | 0.001225 | 0.001132 |
| tricky_partial_spec_test.test | RUN | 0.102333 | 0.309718 | 0.468937 | 0.001042 | 0.001234 | 0.001102 |
| tricky_is_enum_test.test | RUN | 0.082566 | 0.209122 | 0.270048 | 0.001223 | 0.001213 | 0.001220 |
| tricky_incomplete_type_test.test | RUN | 0.133547 | 0.321198 | 0.436928 | 0.001120 | 0.001286 | 0.001224 |
| tricky_function_type_test.test | RUN | 0.113084 | 0.336978 | 0.536477 | 0.001179 | 0.001568 | 0.001184 |
| tricky_add_pointer_test.test | RUN | 0.164648 | 0.580470 | 1.110097 | 0.000991 | 0.001330 | 0.001142 |
| tricky_abstract_type_test.test | RUN | 0.085111 | 0.216140 | 0.276947 | 0.001271 | 0.001232 | 0.001181 |
| remove_volatile_test.test | RUN | 0.220391 | 0.835035 | 1.723381 | 0.001151 | 0.001362 | 0.001248 |
| remove_reference_test.test | RUN | 0.228233 | 0.890824 | 1.811395 | 0.001367 | 0.001276 | 0.001219 |
| remove_pointer_test.test | RUN | 0.238113 | 0.926195 | 1.924997 | 0.001183 | 0.001305 | 0.001173 |
| remove_extent_test.test | RUN | 0.230600 | 0.885485 | 1.850011 | 0.001133 | 0.001362 | 0.001079 |
| remove_cv_test.test | RUN | 0.228408 | 0.885232 | 1.836810 | 0.001071 | 0.001385 | 0.001221 |
| remove_cv_ref_test.test | RUN | 0.477880 | 2.168653 | 4.406695 | 0.001099 | 0.001159 | 0.001071 |
| remove_const_test.test | RUN | 0.218488 | 0.836656 | 1.718829 | 0.001214 | 0.001440 | 0.001149 |
| remove_bounds_test.test | RUN | 0.231395 | 0.877593 | 1.881242 | 0.001133 | 0.001403 | 0.001127 |
| remove_all_extents_test.test | RUN | 0.231321 | 0.885413 | 1.724336 | 0.001097 | 0.001288 | 0.001030 |
| rank_test.test | RUN | 0.086855 | 0.218688 | 0.299297 | 0.001055 | 0.001345 | 0.001134 |
| promote_mpl_test.test | RUN | 0.079300 | 0.195771 | 0.215822 | 0.000496 | 0.000465 | 0.001091 |
| promote_enum_test.test | RUN | 0.016289 | 0.047133 | 0.052947 | 0.000481 | 0.000457 | 0.001180 |
| promote_enum_msvc_bug_test.test | RUN | 0.014862 | 0.039370 | 0.045464 | 0.000397 | 0.000434 | 0.001119 |
| promote_basic_test.test | RUN | 0.018474 | 0.055610 | 0.054847 | 0.000490 | 0.000480 | 0.001067 |
| negation_test.test | RUN | 0.085186 | 0.199216 | 0.268388 | 0.001054 | 0.001436 | 0.001119 |
| mpl_interop_test3.test | RUN | 0.073366 | 0.195920 | 0.189997 | 0.000424 | 0.000480 | 0.001057 |
| mpl_interop_test2.test | RUN | 0.024246 | 0.053654 | 0.054294 | 0.000498 | 0.000439 | 0.001126 |
| mpl_interop_test1.test | RUN | 0.012926 | 0.037386 | 0.034992 | 0.000479 | 0.000512 | 0.001054 |
| make_void_test.test | RUN | 0.086303 | 0.214779 | 0.289556 | 0.001334 | 0.001334 | 0.001121 |
| make_unsigned_test.test | RUN | 0.101932 | 0.283376 | 0.397127 | 0.001024 | 0.001148 | 0.001069 |
| make_signed_test.test | RUN | 0.101866 | 0.290712 | 0.395262 | 0.000860 | 0.001211 | 0.000994 |
| is_volatile_test.test | RUN | 0.088278 | 0.244907 | 0.329933 | 0.001050 | 0.001169 | 0.001357 |
| is_void_test.test | RUN | 0.088529 | 0.232704 | 0.302480 | 0.001087 | 0.001296 | 0.001260 |
| is_virtual_base_of_test.test | RUN | 0.102663 | 0.294244 | 0.439114 | 0.001122 | 0.001137 | 0.001131 |
| is_unsigned_test.test | RUN | 0.088799 | 0.237225 | 0.337177 | 0.001113 | 0.001407 | 0.001212 |
| is_unscoped_enum_test.test | RUN | 0.090072 | 0.215617 | 0.266586 | 0.001012 | 0.001216 | 0.001079 |
| is_union_test.test | RUN | 0.094962 | 0.273081 | 0.387153 | 0.001165 | 0.001264 | 0.001107 |
| is_unbounded_array_test.test | RUN | 0.086619 | 0.229824 | 0.309312 | 0.001212 | 0.001247 | 0.001147 |
| is_trivially_copyable_test.test | RUN | 0.136900 | 0.474293 | 0.779012 | 0.001013 | 0.001304 | 0.001121 |
| is_swappable_test.test | RUN | 0.118952 | 0.359631 | 0.565519 | 0.001063 | 0.001222 | 0.001294 |
| is_stateless_test.test | RUN | 0.130800 | 0.407831 | 0.655543 | 0.001218 | 0.001230 | 0.001194 |
| is_signed_test.test | RUN | 0.090131 | 0.235961 | 0.314467 | 0.001277 | 0.001215 | 0.001082 |
| is_scoped_enum_test.test | RUN | 0.085071 | 0.217442 | 0.273872 | 0.001268 | 0.001238 | 0.001195 |
| is_scalar_test.test | RUN | 0.112461 | 0.360492 | 0.582737 | 0.001014 | 0.001352 | 0.001161 |
| is_same_test.test | RUN | 0.087513 | 0.225312 | 0.291338 | 0.001310 | 0.001222 | 0.001075 |
| is_rvalue_reference_test.test | RUN | 0.089732 | 0.253214 | 0.350497 | 0.001228 | 0.001219 | 0.001124 |
| is_reference_test.test | RUN | 0.090914 | 0.255882 | 0.349827 | 0.001177 | 0.001241 | 0.001161 |
| is_polymorphic_test.test | RUN | 0.095505 | 0.262899 | 0.380952 | 0.001084 | 0.001387 | 0.001176 |
| is_pointer_test.test | RUN | 0.093395 | 0.262019 | 0.364119 | 0.001416 | 0.001303 | 0.001142 |
| is_pod_test.test | RUN | 0.120201 | 0.420325 | 0.659887 | 0.000988 | 0.001286 | 0.001215 |
| is_object_test.test | RUN | 0.085558 | 0.218669 | 0.289583 | 0.001197 | 0.001173 | 0.001077 |
| is_nothrow_swappable_test.test | RUN | 0.126786 | 0.393780 | 0.633484 | 0.001129 | 0.001335 | 0.001131 |
| is_nothrow_move_constructible_test.test | RUN | 0.123082 | 0.411462 | 0.635388 | 0.001264 | 0.001151 | 0.001197 |
| is_nothrow_move_assignable_test.test | RUN | 0.116494 | 0.406579 | 0.632842 | 0.001175 | 0.001201 | 0.001077 |
| is_noncopyable_test.test | RUN | 0.086120 | 0.224555 | 0.295881 | 0.001152 | 0.001334 | 0.001066 |
| is_member_pointer_test.test | RUN | 0.091607 | 0.227497 | 0.297405 | 0.001077 | 0.001370 | 0.001139 |
| is_member_obj_test.test | RUN | 0.088713 | 0.232092 | 0.316035 | 0.001335 | 0.001213 | 0.001206 |
| is_member_func_test.test | RUN | 0.092132 | 0.245426 | 0.333236 | 0.001155 | 0.001541 | 0.001142 |
| is_lvalue_reference_test.test | RUN | 0.091907 | 0.257373 | 0.360035 | 0.001154 | 0.001183 | 0.000967 |
| is_list_constructible_test.test | RUN | 0.110727 | 0.303142 | 0.401385 | 0.001089 | 0.001294 | 0.001112 |
| is_integral_test.test | RUN | 0.108914 | 0.358292 | 0.541546 | 0.001156 | 0.001199 | 0.001114 |
| is_fundamental_test.test | RUN | 0.113806 | 0.369329 | 0.561974 | 0.001142 | 0.001161 | 0.001119 |
| is_function_test.test | RUN | 0.090471 | 0.244185 | 0.328184 | 0.001244 | 0.001318 | 0.001205 |
| is_floating_point_test.test | RUN | 0.095538 | 0.256573 | 0.362121 | 0.001027 | 0.001186 | 0.001029 |
| is_float_test.test | RUN | 0.092574 | 0.256351 | 0.365428 | 0.001109 | 0.001193 | 0.001084 |
| is_final_test.test | RUN | 0.093431 | 0.258904 | 0.363539 | 0.001033 | 0.001219 | 0.001042 |
| is_enum_test.test | RUN | 0.085120 | 0.222557 | 0.289406 | 0.001097 | 0.001136 | 0.001053 |
| is_empty_test.test | RUN | 0.093909 | 0.240548 | 0.324776 | 0.001101 | 0.001253 | 0.001097 |
| is_detected_test.test | RUN | 0.083872 | 0.207178 | 0.269193 | 0.001116 | 0.001437 | 0.001235 |
| is_detected_exact_test.test | RUN | 0.079927 | 0.207276 | 0.263401 | 0.001037 | 0.001309 | 0.001116 |
| is_destructible_test.test | RUN | 0.117789 | 0.404006 | 0.649673 | 0.001130 | 0.001233 | 0.001220 |
| is_default_constr_test.test | RUN | 0.121987 | 0.409515 | 0.660714 | 0.001081 | 0.001246 | 0.001133 |
| is_copy_constructible_test.test | RUN | 0.123459 | 0.431846 | 0.712489 | 0.001264 | 0.001554 | 0.001121 |
| is_copy_assignable_test.test | RUN | 0.123915 | 0.429994 | 0.705111 | 0.001132 | 0.001235 | 0.001071 |
| is_convertible_test.test | RUN | 0.119877 | 0.381261 | 0.587078 | 0.001211 | 0.001308 | 0.001034 |
| is_constructible_test.test | RUN | 0.099569 | 0.283828 | 0.425218 | 0.001102 | 0.001387 | 0.001215 |
| is_const_test.test | RUN | 0.088908 | 0.244265 | 0.334601 | 0.001257 | 0.001294 | 0.001163 |
| is_compound_test.test | RUN | 0.083013 | 0.212223 | 0.272641 | 0.001243 | 0.001170 | 0.001082 |
| is_complex_test.test | RUN | 0.110862 | 0.284342 | 0.384050 | 0.001220 | 0.001462 | 0.001185 |
| is_complete_test.test | RUN | 0.099221 | 0.289523 | 0.421467 | 0.001142 | 0.001232 | 0.001189 |
| is_class_test.test | RUN | 0.094007 | 0.255822 | 0.363179 | 0.001126 | 0.001246 | 0.001021 |
| is_bounded_array_test.test | RUN | 0.087502 | 0.232960 | 0.313476 | 0.001365 | 0.001209 | 0.001216 |
| is_base_of_test.test | RUN | 0.092112 | 0.254425 | 0.357320 | 0.000989 | 0.001282 | 0.001217 |
| is_base_and_derived_test.test | RUN | 0.092277 | 0.243208 | 0.341496 | 0.001079 | 0.001177 | 0.001087 |
| is_assignable_test.test | RUN | 0.107837 | 0.348340 | 0.527642 | 0.001225 | 0.001243 | 0.001170 |
| is_array_test.test | RUN | 0.091296 | 0.237827 | 0.339614 | 0.001183 | 0.001328 | 0.001108 |
| is_arithmetic_test.test | RUN | 0.110729 | 0.360575 | 0.561638 | 0.001022 | 0.001349 | 0.001368 |
| is_abstract_test.test | RUN | 0.198330 | 0.964896 | 1.974194 | 0.001251 | 0.001443 | 0.001155 |
| integral_constant_test.test | RUN | 0.012852 | 0.037947 | 0.038566 | 0.000503 | 0.000539 | 0.001026 |
| has_virtual_destructor_test.test | RUN | 0.096519 | 0.278004 | 0.406102 | 0.001114 | 0.001431 | 0.001263 |
| has_unary_plus_test.test | RUN | 0.183016 | 1.010613 | 1.435369 | 0.001140 | 0.001340 | 0.001107 |
| has_unary_minus_test.test | RUN | 0.179100 | 0.975571 | 1.424381 | 0.000975 | 0.001518 | 0.001154 |
| has_trivial_move_constructor_test.test | RUN | 0.123575 | 0.426750 | 0.686811 | 0.001103 | 0.001229 | 0.001284 |
| has_trivial_move_assign_test.test | RUN | 0.122606 | 0.408908 | 0.674673 | 0.001069 | 0.001424 | 0.001163 |
| has_trivial_destructor_test.test | RUN | 0.110618 | 0.424469 | 0.667130 | 0.001325 | 0.001205 | 0.001137 |
| has_trivial_copy_test.test | RUN | 0.124555 | 0.449174 | 0.707062 | 0.001255 | 0.001496 | 0.001271 |
| has_trivial_constr_test.test | RUN | 0.125705 | 0.457020 | 0.710564 | 0.001196 | 0.001448 | 0.001141 |
| has_trivial_assign_test.test | RUN | 0.124180 | 0.448659 | 0.706580 | 0.001069 | 0.001478 | 0.001196 |
| has_right_shift_test.test | RUN | 0.192735 | 0.815019 | 1.527085 | 0.001147 | 0.001390 | 0.001241 |
| has_right_shift_assign_test.test | RUN | 0.183039 | 0.768419 | 1.431881 | 0.001166 | 0.001302 | 0.001164 |
| has_prefix_classes3_test.test | RUN | 0.134464 | 0.463215 | 0.734339 | 0.001275 | 0.001331 | 0.001211 |
| has_prefix_classes2_test.test | RUN | 0.132633 | 0.454541 | 0.716375 | 0.000948 | 0.001195 | 0.001261 |
| has_prefix_classes1_test.test | RUN | 0.136114 | 0.445962 | 0.693198 | 0.001144 | 0.001385 | 0.001138 |
| has_prefix_classes0_test.test | RUN | 0.133836 | 0.458657 | 0.727628 | 0.001261 | 0.001320 | 0.001210 |
| has_pre_increment_test.test | RUN | 0.182389 | 0.986015 | 1.426844 | 0.001158 | 0.001251 | 0.001109 |
| has_pre_decrement_test.test | RUN | 0.179971 | 0.993115 | 1.430076 | 0.001044 | 0.001170 | 0.001128 |
| has_postfix_classes3_test.test | RUN | 0.132147 | 0.451935 | 0.748401 | 0.001147 | 0.001032 | 0.001101 |
| has_postfix_classes2_test.test | RUN | 0.136260 | 0.444813 | 0.693931 | 0.001140 | 0.001188 | 0.001076 |
| has_postfix_classes1_test.test | RUN | 0.135991 | 0.461485 | 0.725296 | 0.001105 | 0.001490 | 0.001258 |
| has_postfix_classes0_test.test | RUN | 0.135176 | 0.446271 | 0.753568 | 0.001083 | 0.001383 | 0.001129 |
| has_post_increment_test.test | RUN | 0.181703 | 0.968900 | 1.454725 | 0.001209 | 0.001256 | 0.001226 |
| has_post_decrement_test.test | RUN | 0.180077 | 0.986895 | 1.438330 | 0.001239 | 0.001313 | 0.001191 |
| has_plus_test.test | RUN | 0.186968 | 0.754704 | 1.410926 | 0.001161 | 0.001219 | 0.001245 |
| has_plus_assign_test.test | RUN | 0.190102 | 0.759273 | 1.434017 | 0.001091 | 0.001302 | 0.001089 |
| has_operator_new_test.test | RUN | 0.121967 | 0.401372 | 0.630800 | 0.001202 | 0.001264 | 0.001035 |
| has_nothrow_destructor_test.test | RUN | 0.125037 | 0.420019 | 0.665050 | 0.001130 | 0.001208 | 0.001028 |
| has_nothrow_copy_test.test | RUN | 0.124336 | 0.413576 | 0.672310 | 0.001174 | 0.001404 | 0.001104 |
| has_nothrow_constr_test.test | RUN | 0.118726 | 0.412407 | 0.656718 | 0.001059 | 0.001295 | 0.000979 |
| has_nothrow_assign_test.test | RUN | 0.120326 | 0.406021 | 0.660696 | 0.001265 | 0.001320 | 0.001108 |
| has_not_equal_to_test.test | RUN | 0.183192 | 0.980929 | 1.481191 | 0.001237 | 0.001446 | 0.001170 |
| has_negate_test.test | RUN | 0.172929 | 0.723106 | 1.349900 | 0.001125 | 0.001255 | 0.001145 |
| has_multiplies_test.test | RUN | 0.185053 | 0.756915 | 1.476030 | 0.001064 | 0.001278 | 0.001197 |
| has_multiplies_assign_test.test | RUN | 0.184791 | 0.742635 | 1.459693 | 0.001299 | 0.001352 | 0.001034 |
| has_modulus_test.test | RUN | 0.181929 | 0.759211 | 1.436035 | 0.001159 | 0.001395 | 0.001196 |
| has_modulus_assign_test.test | RUN | 0.180987 | 0.761080 | 1.408092 | 0.001100 | 0.001284 | 0.001133 |
| has_minus_test.test | RUN | 0.182988 | 0.775552 | 1.491829 | 0.001124 | 0.001371 | 0.001189 |
| has_minus_assign_test.test | RUN | 0.193142 | 0.776764 | 1.488626 | 0.001228 | 0.001341 | 0.001086 |
| has_logical_or_test.test | RUN | 0.183185 | 0.763478 | 1.440364 | 0.001163 | 0.001483 | 0.001160 |
| has_logical_not_test.test | RUN | 0.175983 | 0.744895 | 1.377203 | 0.001112 | 0.001216 | 0.001134 |
| has_logical_and_test.test | RUN | 0.179146 | 0.769029 | 1.463041 | 0.001053 | 0.001415 | 0.001286 |
| has_less_test.test | RUN | 0.183981 | 0.965612 | 1.466092 | 0.001290 | 0.001282 | 0.001087 |
| has_less_equal_test.test | RUN | 0.181659 | 0.958705 | 1.449571 | 0.001172 | 0.001345 | 0.001160 |
| has_left_shift_test.test | RUN | 0.205387 | 0.967004 | 1.784289 | 0.001155 | 0.001183 | 0.001118 |
| has_left_shift_assign_test.test | RUN | 0.181284 | 0.739716 | 1.476381 | 0.001102 | 0.001442 | 0.001090 |
| has_greater_test.test | RUN | 0.187939 | 0.966181 | 1.487038 | 0.001275 | 0.001417 | 0.001050 |
| has_greater_equal_test.test | RUN | 0.185652 | 0.964623 | 1.403800 | 0.001101 | 0.001229 | 0.001103 |
| has_equal_to_test.test | RUN | 0.183141 | 0.956763 | 1.474495 | 0.001139 | 0.001201 | 0.001217 |
| has_divides_test.test | RUN | 0.179498 | 0.771321 | 1.402686 | 0.000989 | 0.001338 | 0.001106 |
| has_divides_assign_test.test | RUN | 0.185280 | 0.753273 | 1.442407 | 0.001319 | 0.001315 | 0.001110 |
| has_dereference_test.test | RUN | 0.180173 | 0.740243 | 1.373898 | 0.001114 | 0.001416 | 0.001162 |
| has_complement_test.test | RUN | 0.178195 | 0.982279 | 1.456958 | 0.001247 | 0.001352 | 0.001172 |
| has_bit_xor_test.test | RUN | 0.182021 | 0.758455 | 1.416307 | 0.001040 | 0.001382 | 0.001100 |
| has_bit_xor_assign_test.test | RUN | 0.183174 | 0.750112 | 1.460198 | 0.001276 | 0.001399 | 0.001249 |
| has_bit_or_test.test | RUN | 0.183361 | 0.750274 | 1.386430 | 0.001283 | 0.001443 | 0.001179 |
| has_bit_or_assign_test.test | RUN | 0.179675 | 0.762085 | 1.479351 | 0.001226 | 0.001321 | 0.001034 |
| has_bit_and_test.test | RUN | 0.179141 | 0.759036 | 1.471797 | 0.001061 | 0.001453 | 0.001139 |
| has_bit_and_assign_test.test | RUN | 0.183316 | 0.748789 | 1.410531 | 0.001153 | 0.001286 | 0.001163 |
| has_binary_classes9_test.test | RUN | 0.195231 | 0.911625 | 1.607760 | 0.001377 | 0.001460 | 0.001134 |
| has_binary_classes8_test.test | RUN | 0.195674 | 0.922662 | 1.687778 | 0.001131 | 0.001223 | 0.001143 |
| has_binary_classes7_test.test | RUN | 0.201204 | 0.892687 | 1.672549 | 0.001162 | 0.001406 | 0.001181 |
| has_binary_classes6_test.test | RUN | 0.198702 | 0.866090 | 1.628683 | 0.001131 | 0.001403 | 0.001094 |
| has_binary_classes5_test.test | RUN | 0.196120 | 0.884028 | 1.610546 | 0.001394 | 0.001422 | 0.001170 |
| has_binary_classes4_test.test | RUN | 0.196000 | 0.907343 | 1.664861 | 0.001215 | 0.001432 | 0.001045 |
| has_binary_classes3_test.test | RUN | 0.202284 | 0.920717 | 1.677699 | 0.000998 | 0.001277 | 0.001078 |
| has_binary_classes2_test.test | RUN | 0.196866 | 0.914894 | 1.608166 | 0.001278 | 0.001254 | 0.001119 |
| has_binary_classes1_test.test | RUN | 0.196643 | 0.912704 | 1.599662 | 0.001210 | 0.001290 | 0.001105 |
| has_binary_classes0_test.test | RUN | 0.200672 | 0.914807 | 1.616804 | 0.001106 | 0.001349 | 0.001155 |
| function_traits_test.test | RUN | 0.091257 | 0.246403 | 0.339972 | 0.001195 | 0.001377 | 0.001209 |
| floating_point_promotion_test.test | RUN | 0.090027 | 0.236219 | 0.302956 | 0.001221 | 0.001415 | 0.001191 |
| extent_test.test | RUN | 0.086803 | 0.242231 | 0.337528 | 0.001106 | 0.001256 | 0.001118 |
| enable_if_test.test | RUN | 0.086385 | 0.203601 | 0.256029 | 0.001038 | 0.001195 | 0.001069 |
| disjunction_test.test | RUN | 0.086027 | 0.213804 | 0.270594 | 0.001150 | 0.001176 | 0.001106 |
| detected_test.test | RUN | 0.085434 | 0.201888 | 0.254947 | 0.001218 | 0.001238 | 0.001230 |
| detected_or_test.test | RUN | 0.084825 | 0.210691 | 0.277562 | 0.001194 | 0.001411 | 0.001262 |
| decay_test.test | RUN | 0.224114 | 0.828010 | 1.587067 | 0.001351 | 0.001306 | 0.001098 |
| cxx14_aliases_test.test | RUN | 0.139324 | 0.308294 | 0.446286 | 0.001192 | 0.001236 | 0.001067 |
| copy_reference_test.test | RUN | 0.082307 | 0.212218 | 0.268419 | 0.001018 | 0.001181 | 0.001159 |
| copy_cv_test.test | RUN | 0.090664 | 0.220793 | 0.290215 | 0.001090 | 0.001309 | 0.001175 |
| copy_cv_ref_test.test | RUN | 0.123131 | 0.365874 | 0.670807 | 0.001213 | 0.001241 | 0.001247 |
| conjunction_test.test | RUN | 0.083754 | 0.215665 | 0.272490 | 0.001174 | 0.001145 | 0.001080 |
| conditional_test.test | RUN | 0.083369 | 0.212516 | 0.262863 | 0.001047 | 0.001299 | 0.001153 |
| common_type_test.test | RUN | 0.113988 | 0.320891 | 0.526739 | 0.001213 | 0.001206 | 0.001084 |
| common_type_sfinae_test.test | RUN | 0.084923 | 0.200580 | 0.263966 | 0.001380 | 0.001337 | 0.001077 |
| common_type_sfinae2_test.test | RUN | 0.086794 | 0.218323 | 0.279670 | 0.001026 | 0.001229 | 0.001113 |
| common_type_6_test.test | RUN | 0.088243 | 0.217216 | 0.288783 | 0.000960 | 0.001343 | 0.001100 |
| common_type_5_test.test | RUN | 0.091935 | 0.217265 | 0.280520 | 0.001142 | 0.001487 | 0.001298 |
| common_type_4_test.test | RUN | 0.092575 | 0.235591 | 0.339694 | 0.001021 | 0.001320 | 0.000996 |
| common_type_3_test.test | RUN | 0.081149 | 0.201951 | 0.261980 | 0.001135 | 0.001197 | 0.001006 |
| common_type_2_test.test | RUN | 0.113831 | 0.316817 | 0.520554 | 0.001166 | 0.001383 | 0.001305 |
| alignment_of_test.test | RUN | 0.096622 | 0.263474 | 0.339087 | 0.000998 | 0.001295 | 0.000975 |
| alignment_of_a2_test.test | RUN | 0.092057 | 0.261568 | 0.347022 | 0.001217 | 0.001218 | 0.001040 |
| aligned_storage_test.test | RUN | 0.091044 | 0.256712 | 0.322348 | 0.001227 | 0.001434 | 0.001165 |
| aligned_storage_empy_test.test | RUN | 0.103546 | 0.290600 | 0.422366 | 0.001011 | 0.001367 | 0.001157 |
| aligned_storage_a2_test.test | RUN | 0.092079 | 0.250522 | 0.311714 | 0.001160 | 0.001548 | 0.001189 |
| add_volatile_test.test | RUN | 0.196087 | 0.739433 | 1.442025 | 0.001164 | 0.001286 | 0.001067 |
| add_rvalue_reference_test.test | RUN | 0.220849 | 0.820310 | 1.692588 | 0.001231 | 0.001253 | 0.001053 |
| add_reference_test.test | RUN | 0.213666 | 0.817459 | 1.668530 | 0.001184 | 0.001528 | 0.001198 |
| add_pointer_test.test | RUN | 0.139562 | 0.454278 | 0.880763 | 0.001122 | 0.001213 | 0.001199 |
| add_lvalue_reference_test.test | RUN | 0.216153 | 0.808022 | 1.675651 | 0.001249 | 0.001415 | 0.001083 |
| add_cv_test.test | RUN | 0.200811 | 0.773260 | 1.567813 | 0.001129 | 0.001261 | 0.001182 |
| add_const_test.test | RUN | 0.204247 | 0.763807 | 1.499535 | 0.001081 | 0.001211 | 0.001092 |
| is_virtual_base_of_fail.test | COMPILE_FAIL | 0.078174 | 0.200029 | 0.253139 | — | — | — |
| is_stateless_fail.test | COMPILE_FAIL | 0.084470 | 0.205940 | 0.260403 | — | — | — |
| is_polymorphic_fail.test | COMPILE_FAIL | 0.077773 | 0.192335 | 0.249878 | — | — | — |
| is_nothrow_move_constructible_fail.test | COMPILE_FAIL | 0.076866 | 0.196081 | 0.238724 | — | — | — |
| is_nothrow_move_assignable_fail.test | COMPILE_FAIL | 0.078022 | 0.195759 | 0.245355 | — | — | — |
| is_list_constructible_fail.test | COMPILE_FAIL | 0.077161 | 0.196111 | 0.234275 | — | — | — |
| is_empty_fail.test | COMPILE_FAIL | 0.080217 | 0.195374 | 0.244090 | — | — | — |
| is_destructible_fail.test | COMPILE_FAIL | 0.077764 | 0.194407 | 0.241344 | — | — | — |
| is_default_constructible_fail.test | COMPILE_FAIL | 0.077646 | 0.193739 | 0.244172 | — | — | — |
| is_copy_constructible_fail.test | COMPILE_FAIL | 0.077466 | 0.197048 | 0.244807 | — | — | — |
| is_copy_assignable_fail.test | COMPILE_FAIL | 0.077150 | 0.193564 | 0.245151 | — | — | — |
| is_convertible_fail.test | COMPILE_FAIL | 0.080677 | 0.196466 | 0.238092 | — | — | — |
| is_convertible2_fail.test | COMPILE_FAIL | 0.079635 | 0.194397 | 0.244127 | — | — | — |
| is_constructible_fail.test | COMPILE_FAIL | 0.078782 | 0.194090 | 0.247609 | — | — | — |
| is_base_of_fail.test | COMPILE_FAIL | 0.078520 | 0.196240 | 0.243926 | — | — | — |
| is_assignable_fail.test | COMPILE_FAIL | 0.077924 | 0.194699 | 0.242475 | — | — | — |
| has_nothrow_destruct_fail.test | COMPILE_FAIL | 0.077259 | 0.199521 | 0.240939 | — | — | — |
| has_nothrow_copy_fail.test | COMPILE_FAIL | 0.077493 | 0.198746 | 0.248331 | — | — | — |
| has_nothrow_cons_fail.test | COMPILE_FAIL | 0.078576 | 0.195085 | 0.244263 | — | — | — |
| has_nothrow_assign_fail.test | COMPILE_FAIL | 0.078133 | 0.195932 | 0.243712 | — | — | — |
| common_type_fail.test | COMPILE_FAIL | 0.077995 | 0.196854 | 0.247877 | — | — | — |
| common_type2_fail.test | COMPILE_FAIL | 0.078546 | 0.195462 | 0.239908 | — | — | — |
| has_nothrow_assign_test_no_intrinsics.test | RUN | 0.123237 | 0.424412 | 0.679856 | 0.001184 | 0.001626 | 0.001113 |
| has_nothrow_constr_test_no_intrinsics.test | RUN | 0.116255 | 0.422236 | 0.668070 | 0.001122 | 0.001451 | 0.001066 |
| has_nothrow_copy_test_no_intrinsics.test | RUN | 0.119910 | 0.424702 | 0.660569 | 0.001161 | 0.000922 | 0.000845 |
| is_nothrow_move_assignable_test_no_intrinsics.test | RUN | 0.121904 | 0.414634 | 0.652144 | 0.000802 | 0.000860 | 0.000796 |
| is_nothrow_move_constructible_test_no_intrinsics.test | RUN | 0.078139 | 0.319418 | 0.390156 | 0.000817 | 0.000991 | 0.000839 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 1.000× | 1.001×, 1.000× | 0.998× |
| clang | 1.019× | 1.023×, 1.016× | 0.995× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1364 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/43967972441).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| add_const_test.test | 10 | 0.000788s | 0.000776s | 0.000799s | byte equality observed |
| add_cv_test.test | 10 | 0.000774s | 0.000790s | 0.000782s | byte equality observed |
| add_lvalue_reference_test.test | 10 | 0.000802s | 0.000796s | 0.000759s | byte equality observed |
| add_pointer_test.test | 10 | 0.000767s | 0.000770s | 0.000768s | byte equality observed |
| add_reference_test.test | 10 | 0.000781s | 0.000743s | 0.000777s | byte equality observed |
| add_rvalue_reference_test.test | 10 | 0.000806s | 0.000759s | 0.000787s | byte equality observed |
| add_volatile_test.test | 10 | 0.000787s | 0.000789s | 0.000791s | byte equality observed |
| aligned_storage_a2_test.test | 10 | 0.000836s | 0.000825s | 0.000842s | byte equality observed |
| aligned_storage_empy_test.test | 10 | 0.000792s | 0.000784s | 0.000823s | byte equality observed |
| aligned_storage_test.test | 10 | 0.000818s | 0.000838s | 0.000832s | byte equality observed |
| alignment_of_a2_test.test | 10 | 0.000789s | 0.000803s | 0.000794s | byte equality observed |
| alignment_of_test.test | 10 | 0.000804s | 0.000779s | 0.000780s | byte equality observed |
| common_type_2_test.test | 10 | 0.000784s | 0.000767s | 0.000782s | byte equality observed |
| common_type_3_test.test | 10 | 0.000767s | 0.000796s | 0.000754s | byte equality observed |
| common_type_4_test.test | 10 | 0.000791s | 0.000797s | 0.000763s | byte equality observed |
| common_type_5_test.test | 10 | 0.000780s | 0.000802s | 0.000769s | byte equality observed |
| common_type_6_test.test | 10 | 0.000790s | 0.000790s | 0.000750s | byte equality observed |
| common_type_sfinae2_test.test | 10 | 0.000772s | 0.000798s | 0.000767s | byte equality observed |
| common_type_sfinae_test.test | 10 | 0.000786s | 0.000807s | 0.000756s | byte equality observed |
| common_type_test.test | 10 | 0.000797s | 0.000790s | 0.000763s | byte equality observed |
| conditional_test.test | 10 | 0.000785s | 0.000786s | 0.000788s | byte equality observed |
| conjunction_test.test | 10 | 0.000768s | 0.000763s | 0.000794s | byte equality observed |
| copy_cv_ref_test.test | 10 | 0.000789s | 0.000774s | 0.000771s | byte equality observed |
| copy_cv_test.test | 10 | 0.000800s | 0.000798s | 0.000790s | byte equality observed |
| copy_reference_test.test | 10 | 0.000798s | 0.000801s | 0.000808s | byte equality observed |
| cxx14_aliases_test.test | 10 | 0.000783s | 0.000806s | 0.000791s | byte equality observed |
| decay_test.test | 10 | 0.000815s | 0.000764s | 0.000784s | byte equality observed |
| detected_or_test.test | 10 | 0.000759s | 0.000761s | 0.000786s | byte equality observed |
| detected_test.test | 10 | 0.000762s | 0.000769s | 0.000794s | byte equality observed |
| disjunction_test.test | 10 | 0.000770s | 0.000798s | 0.000780s | byte equality observed |
| enable_if_test.test | 10 | 0.000773s | 0.000791s | 0.000770s | byte equality observed |
| extent_test.test | 10 | 0.000776s | 0.000798s | 0.000792s | byte equality observed |
| floating_point_promotion_test.test | 10 | 0.000776s | 0.000790s | 0.000787s | byte equality observed |
| function_traits_test.test | 10 | 0.000797s | 0.000780s | 0.000792s | byte equality observed |
| has_binary_classes0_test.test | 10 | 0.000783s | 0.000790s | 0.000798s | byte equality observed |
| has_binary_classes1_test.test | 10 | 0.000770s | 0.000749s | 0.000793s | byte equality observed |
| has_binary_classes2_test.test | 10 | 0.000788s | 0.000765s | 0.000784s | byte equality observed |
| has_binary_classes3_test.test | 10 | 0.000805s | 0.000796s | 0.000806s | byte equality observed |
| has_binary_classes4_test.test | 10 | 0.000776s | 0.000799s | 0.000805s | byte equality observed |
| has_binary_classes5_test.test | 10 | 0.000790s | 0.000792s | 0.000791s | byte equality observed |
| has_binary_classes6_test.test | 10 | 0.000791s | 0.000789s | 0.000784s | byte equality observed |
| has_binary_classes7_test.test | 10 | 0.000790s | 0.000757s | 0.000786s | byte equality observed |
| has_binary_classes8_test.test | 10 | 0.000807s | 0.000758s | 0.000774s | byte equality observed |
| has_binary_classes9_test.test | 10 | 0.000773s | 0.000774s | 0.000816s | byte equality observed |
| has_bit_and_assign_test.test | 10 | 0.000795s | 0.000785s | 0.000805s | byte equality observed |
| has_bit_and_test.test | 10 | 0.000810s | 0.000786s | 0.000822s | byte equality observed |
| has_bit_or_assign_test.test | 10 | 0.000788s | 0.000773s | 0.000820s | byte equality observed |
| has_bit_or_test.test | 10 | 0.000774s | 0.000776s | 0.000782s | byte equality observed |
| has_bit_xor_assign_test.test | 10 | 0.000788s | 0.000768s | 0.000788s | byte equality observed |
| has_bit_xor_test.test | 10 | 0.000782s | 0.000748s | 0.000761s | byte equality observed |
| has_complement_test.test | 10 | 0.000810s | 0.000804s | 0.000776s | byte equality observed |
| has_dereference_test.test | 10 | 0.000803s | 0.000801s | 0.000790s | byte equality observed |
| has_divides_assign_test.test | 10 | 0.000799s | 0.000781s | 0.000770s | byte equality observed |
| has_divides_test.test | 10 | 0.000779s | 0.000787s | 0.000769s | byte equality observed |
| has_equal_to_test.test | 10 | 0.000775s | 0.000759s | 0.000797s | byte equality observed |
| has_greater_equal_test.test | 10 | 0.000797s | 0.000775s | 0.000785s | byte equality observed |
| has_greater_test.test | 10 | 0.000780s | 0.000777s | 0.000781s | byte equality observed |
| has_left_shift_assign_test.test | 10 | 0.000782s | 0.000777s | 0.000799s | byte equality observed |
| has_left_shift_test.test | 10 | 0.000775s | 0.000804s | 0.000801s | byte equality observed |
| has_less_equal_test.test | 10 | 0.000802s | 0.000775s | 0.000782s | byte equality observed |
| has_less_test.test | 10 | 0.000788s | 0.000781s | 0.000768s | byte equality observed |
| has_logical_and_test.test | 10 | 0.000793s | 0.000781s | 0.000772s | byte equality observed |
| has_logical_not_test.test | 10 | 0.000788s | 0.000788s | 0.000775s | byte equality observed |
| has_logical_or_test.test | 10 | 0.000787s | 0.000797s | 0.000763s | byte equality observed |
| has_minus_assign_test.test | 10 | 0.000780s | 0.000807s | 0.000768s | byte equality observed |
| has_minus_test.test | 10 | 0.000783s | 0.000782s | 0.000785s | byte equality observed |
| has_modulus_assign_test.test | 10 | 0.000789s | 0.000797s | 0.000765s | byte equality observed |
| has_modulus_test.test | 10 | 0.000788s | 0.000792s | 0.000773s | byte equality observed |
| has_multiplies_assign_test.test | 10 | 0.000798s | 0.000794s | 0.000771s | byte equality observed |
| has_multiplies_test.test | 10 | 0.000779s | 0.000811s | 0.000816s | byte equality observed |
| has_negate_test.test | 10 | 0.000785s | 0.000810s | 0.000798s | byte equality observed |
| has_not_equal_to_test.test | 10 | 0.000787s | 0.000801s | 0.000774s | byte equality observed |
| has_nothrow_assign_test.test | 10 | 0.000791s | 0.000821s | 0.000784s | byte equality observed |
| has_nothrow_assign_test_no_intrinsics.test | 10 | 0.000768s | 0.000786s | 0.000810s | byte equality observed |
| has_nothrow_constr_test.test | 10 | 0.000756s | 0.000791s | 0.000767s | byte equality observed |
| has_nothrow_constr_test_no_intrinsics.test | 10 | 0.000768s | 0.000765s | 0.000775s | byte equality observed |
| has_nothrow_copy_test.test | 10 | 0.000769s | 0.000762s | 0.000810s | byte equality observed |
| has_nothrow_copy_test_no_intrinsics.test | 10 | 0.000794s | 0.000758s | 0.000807s | byte equality observed |
| has_nothrow_destructor_test.test | 10 | 0.000760s | 0.000778s | 0.000784s | byte equality observed |
| has_operator_new_test.test | 10 | 0.000766s | 0.000803s | 0.000774s | byte equality observed |
| has_plus_assign_test.test | 10 | 0.000782s | 0.000803s | 0.000794s | byte equality observed |
| has_plus_test.test | 10 | 0.000769s | 0.000806s | 0.000775s | byte equality observed |
| has_post_decrement_test.test | 10 | 0.000784s | 0.000801s | 0.000749s | byte equality observed |
| has_post_increment_test.test | 10 | 0.000789s | 0.000788s | 0.000764s | byte equality observed |
| has_postfix_classes0_test.test | 10 | 0.000802s | 0.000792s | 0.000747s | byte equality observed |
| has_postfix_classes1_test.test | 10 | 0.000800s | 0.000820s | 0.000785s | byte equality observed |
| has_postfix_classes2_test.test | 10 | 0.000803s | 0.000805s | 0.000762s | byte equality observed |
| has_postfix_classes3_test.test | 10 | 0.000797s | 0.000781s | 0.000799s | byte equality observed |
| has_pre_decrement_test.test | 10 | 0.000797s | 0.000765s | 0.000783s | byte equality observed |
| has_pre_increment_test.test | 10 | 0.000792s | 0.000774s | 0.000751s | byte equality observed |
| has_prefix_classes0_test.test | 10 | 0.000769s | 0.000789s | 0.000774s | byte equality observed |
| has_prefix_classes1_test.test | 10 | 0.000776s | 0.000832s | 0.000760s | byte equality observed |
| has_prefix_classes2_test.test | 10 | 0.000761s | 0.000820s | 0.000770s | byte equality observed |
| has_prefix_classes3_test.test | 10 | 0.000800s | 0.000810s | 0.000753s | byte equality observed |
| has_right_shift_assign_test.test | 10 | 0.000804s | 0.000801s | 0.000779s | byte equality observed |
| has_right_shift_test.test | 10 | 0.000784s | 0.000766s | 0.000765s | byte equality observed |
| has_trivial_assign_test.test | 10 | 0.000799s | 0.000798s | 0.000829s | byte equality observed |
| has_trivial_constr_test.test | 10 | 0.000805s | 0.000807s | 0.000814s | native test oracle; output varies |
| has_trivial_copy_test.test | 10 | 0.000803s | 0.000815s | 0.000829s | native test oracle; output varies |
| has_trivial_destructor_test.test | 10 | 0.000768s | 0.000792s | 0.000753s | byte equality observed |
| has_trivial_move_assign_test.test | 10 | 0.000767s | 0.000808s | 0.000744s | byte equality observed |
| has_trivial_move_constructor_test.test | 10 | 0.000768s | 0.000775s | 0.000778s | byte equality observed |
| has_unary_minus_test.test | 10 | 0.000786s | 0.000766s | 0.000788s | byte equality observed |
| has_unary_plus_test.test | 10 | 0.000768s | 0.000775s | 0.000788s | byte equality observed |
| has_virtual_destructor_test.test | 10 | 0.000786s | 0.000792s | 0.000794s | byte equality observed |
| integral_constant_test.test | 10 | 0.000362s | 0.000369s | 0.000754s | byte equality observed |
| is_abstract_test.test | 10 | 0.000797s | 0.000780s | 0.000783s | byte equality observed |
| is_arithmetic_test.test | 10 | 0.000780s | 0.000811s | 0.000799s | byte equality observed |
| is_array_test.test | 10 | 0.000811s | 0.000802s | 0.000785s | byte equality observed |
| is_assignable_test.test | 10 | 0.000809s | 0.000803s | 0.000782s | byte equality observed |
| is_base_and_derived_test.test | 10 | 0.000797s | 0.000815s | 0.000753s | byte equality observed |
| is_base_of_test.test | 10 | 0.000796s | 0.000764s | 0.000779s | byte equality observed |
| is_bounded_array_test.test | 10 | 0.000782s | 0.000768s | 0.000751s | byte equality observed |
| is_class_test.test | 10 | 0.000778s | 0.000756s | 0.000783s | byte equality observed |
| is_complete_test.test | 10 | 0.000793s | 0.000767s | 0.000794s | byte equality observed |
| is_complex_test.test | 10 | 0.000770s | 0.000798s | 0.000804s | byte equality observed |
| is_compound_test.test | 10 | 0.000784s | 0.000770s | 0.000809s | byte equality observed |
| is_const_test.test | 10 | 0.000776s | 0.000786s | 0.000793s | byte equality observed |
| is_constructible_test.test | 10 | 0.000793s | 0.000795s | 0.000804s | byte equality observed |
| is_convertible_test.test | 10 | 0.000806s | 0.000765s | 0.000786s | byte equality observed |
| is_copy_assignable_test.test | 10 | 0.000793s | 0.000803s | 0.000797s | byte equality observed |
| is_copy_constructible_test.test | 10 | 0.000795s | 0.000775s | 0.000767s | byte equality observed |
| is_default_constr_test.test | 10 | 0.000802s | 0.000768s | 0.000772s | byte equality observed |
| is_destructible_test.test | 10 | 0.000772s | 0.000773s | 0.000768s | byte equality observed |
| is_detected_exact_test.test | 10 | 0.000778s | 0.000779s | 0.000758s | byte equality observed |
| is_detected_test.test | 10 | 0.000788s | 0.000786s | 0.000763s | byte equality observed |
| is_empty_test.test | 10 | 0.000779s | 0.000768s | 0.000776s | byte equality observed |
| is_enum_test.test | 10 | 0.000781s | 0.000778s | 0.000795s | byte equality observed |
| is_final_test.test | 10 | 0.000771s | 0.000797s | 0.000807s | byte equality observed |
| is_float_test.test | 10 | 0.000775s | 0.000774s | 0.000800s | byte equality observed |
| is_floating_point_test.test | 10 | 0.000776s | 0.000789s | 0.000771s | byte equality observed |
| is_function_test.test | 10 | 0.000784s | 0.000787s | 0.000766s | byte equality observed |
| is_fundamental_test.test | 10 | 0.000776s | 0.000763s | 0.000789s | byte equality observed |
| is_integral_test.test | 10 | 0.000764s | 0.000782s | 0.000772s | byte equality observed |
| is_list_constructible_test.test | 10 | 0.000786s | 0.000794s | 0.000769s | byte equality observed |
| is_lvalue_reference_test.test | 10 | 0.000783s | 0.000777s | 0.000786s | byte equality observed |
| is_member_func_test.test | 10 | 0.000806s | 0.000810s | 0.000780s | byte equality observed |
| is_member_obj_test.test | 10 | 0.000789s | 0.000755s | 0.000794s | byte equality observed |
| is_member_pointer_test.test | 10 | 0.000766s | 0.000760s | 0.000784s | byte equality observed |
| is_noncopyable_test.test | 10 | 0.000766s | 0.000770s | 0.000761s | byte equality observed |
| is_nothrow_move_assignable_test.test | 10 | 0.000787s | 0.000783s | 0.000798s | byte equality observed |
| is_nothrow_move_assignable_test_no_intrinsics.test | 10 | 0.000781s | 0.000778s | 0.000779s | byte equality observed |
| is_nothrow_move_constructible_test.test | 10 | 0.000751s | 0.000814s | 0.000772s | byte equality observed |
| is_nothrow_move_constructible_test_no_intrinsics.test | 10 | 0.000776s | 0.000782s | 0.000758s | byte equality observed |
| is_nothrow_swappable_test.test | 10 | 0.000798s | 0.000798s | 0.000772s | byte equality observed |
| is_object_test.test | 10 | 0.000804s | 0.000796s | 0.000761s | byte equality observed |
| is_pod_test.test | 10 | 0.000811s | 0.000783s | 0.000765s | byte equality observed |
| is_pointer_test.test | 10 | 0.000795s | 0.000792s | 0.000763s | byte equality observed |
| is_polymorphic_test.test | 10 | 0.000800s | 0.000772s | 0.000769s | byte equality observed |
| is_reference_test.test | 10 | 0.000779s | 0.000773s | 0.000770s | byte equality observed |
| is_rvalue_reference_test.test | 10 | 0.000762s | 0.000750s | 0.000765s | byte equality observed |
| is_same_test.test | 10 | 0.000781s | 0.000781s | 0.000775s | byte equality observed |
| is_scalar_test.test | 10 | 0.000771s | 0.000783s | 0.000792s | byte equality observed |
| is_scoped_enum_test.test | 10 | 0.000784s | 0.000797s | 0.000793s | byte equality observed |
| is_signed_test.test | 10 | 0.000779s | 0.000777s | 0.000784s | byte equality observed |
| is_stateless_test.test | 10 | 0.000796s | 0.000785s | 0.000789s | byte equality observed |
| is_swappable_test.test | 10 | 0.000799s | 0.000779s | 0.000822s | byte equality observed |
| is_trivially_copyable_test.test | 10 | 0.000791s | 0.000795s | 0.000805s | byte equality observed |
| is_unbounded_array_test.test | 10 | 0.000796s | 0.000789s | 0.000775s | byte equality observed |
| is_union_test.test | 10 | 0.000812s | 0.000782s | 0.000782s | byte equality observed |
| is_unscoped_enum_test.test | 10 | 0.000774s | 0.000780s | 0.000762s | byte equality observed |
| is_unsigned_test.test | 10 | 0.000768s | 0.000789s | 0.000777s | byte equality observed |
| is_virtual_base_of_test.test | 10 | 0.000779s | 0.000815s | 0.000785s | byte equality observed |
| is_void_test.test | 10 | 0.000763s | 0.000767s | 0.000777s | byte equality observed |
| is_volatile_test.test | 10 | 0.000776s | 0.000793s | 0.000780s | byte equality observed |
| make_signed_test.test | 10 | 0.000788s | 0.000793s | 0.000783s | byte equality observed |
| make_unsigned_test.test | 10 | 0.000786s | 0.000794s | 0.000755s | byte equality observed |
| make_void_test.test | 10 | 0.000792s | 0.000784s | 0.000764s | byte equality observed |
| mpl_interop_test1.test | 10 | 0.000357s | 0.000371s | 0.000762s | byte equality observed |
| mpl_interop_test2.test | 10 | 0.000357s | 0.000353s | 0.000778s | byte equality observed |
| mpl_interop_test3.test | 10 | 0.000363s | 0.000366s | 0.000768s | byte equality observed |
| negation_test.test | 10 | 0.000778s | 0.000773s | 0.000780s | byte equality observed |
| promote_basic_test.test | 10 | 0.000359s | 0.000365s | 0.000761s | byte equality observed |
| promote_enum_msvc_bug_test.test | 10 | 0.000363s | 0.000367s | 0.000771s | byte equality observed |
| promote_enum_test.test | 10 | 0.000358s | 0.000363s | 0.000793s | byte equality observed |
| promote_mpl_test.test | 10 | 0.000354s | 0.000353s | 0.000780s | byte equality observed |
| rank_test.test | 10 | 0.000785s | 0.000776s | 0.000800s | byte equality observed |
| remove_all_extents_test.test | 10 | 0.000780s | 0.000812s | 0.000772s | byte equality observed |
| remove_bounds_test.test | 10 | 0.000796s | 0.000758s | 0.000763s | byte equality observed |
| remove_const_test.test | 10 | 0.000790s | 0.000763s | 0.000797s | byte equality observed |
| remove_cv_ref_test.test | 10 | 0.000771s | 0.000766s | 0.000778s | byte equality observed |
| remove_cv_test.test | 10 | 0.000768s | 0.000781s | 0.000781s | byte equality observed |
| remove_extent_test.test | 10 | 0.000783s | 0.000772s | 0.000791s | byte equality observed |
| remove_pointer_test.test | 10 | 0.000791s | 0.000788s | 0.000772s | byte equality observed |
| remove_reference_test.test | 10 | 0.000794s | 0.000762s | 0.000763s | byte equality observed |
| remove_volatile_test.test | 10 | 0.000790s | 0.000782s | 0.000766s | byte equality observed |
| tricky_abstract_type_test.test | 10 | 0.000803s | 0.000788s | 0.000779s | byte equality observed |
| tricky_add_pointer_test.test | 10 | 0.000801s | 0.000765s | 0.000814s | byte equality observed |
| tricky_function_type_test.test | 10 | 0.000792s | 0.000787s | 0.000807s | byte equality observed |
| tricky_incomplete_type_test.test | 10 | 0.000799s | 0.000780s | 0.000795s | byte equality observed |
| tricky_is_enum_test.test | 10 | 0.000787s | 0.000815s | 0.000794s | byte equality observed |
| tricky_partial_spec_test.test | 10 | 0.000772s | 0.000789s | 0.000800s | byte equality observed |
| tricky_rvalue_test.test | 10 | 0.000780s | 0.000798s | 0.000776s | byte equality observed |
| type_identity_test.test | 10 | 0.000791s | 0.000774s | 0.000810s | byte equality observed |
| type_traits_test.test | 10 | 0.000363s | 0.000353s | 0.000826s | byte equality observed |
| type_with_alignment_test.test | 10 | 0.000838s | 0.000828s | 0.000824s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/43967972441).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
