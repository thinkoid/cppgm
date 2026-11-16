# libs/type_traits/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| type_with_alignment_test.test | RUN | 0.081445 | 0.220022 | 0.280978 | 0.001102 | 0.001138 | 0.001069 |
| type_traits_test.test | RUN | 0.108418 | 0.222329 | 0.273174 | 0.000476 | 0.000510 | 0.000935 |
| type_identity_test.test | RUN | 0.197212 | 0.731603 | 1.379759 | 0.000988 | 0.001056 | 0.000989 |
| tricky_rvalue_test.test | RUN | 0.071972 | 0.176437 | 0.215391 | 0.001023 | 0.000997 | 0.001055 |
| tricky_partial_spec_test.test | RUN | 0.087159 | 0.246115 | 0.333237 | 0.001066 | 0.001044 | 0.000986 |
| tricky_is_enum_test.test | RUN | 0.068275 | 0.172932 | 0.197849 | 0.001077 | 0.000967 | 0.001010 |
| tricky_incomplete_type_test.test | RUN | 0.110594 | 0.260249 | 0.320293 | 0.000978 | 0.001062 | 0.001024 |
| tricky_function_type_test.test | RUN | 0.089238 | 0.260707 | 0.372465 | 0.001111 | 0.000909 | 0.001126 |
| tricky_add_pointer_test.test | RUN | 0.131256 | 0.445409 | 0.780857 | 0.001020 | 0.001156 | 0.001018 |
| tricky_abstract_type_test.test | RUN | 0.071539 | 0.177370 | 0.209544 | 0.001041 | 0.001063 | 0.000906 |
| remove_volatile_test.test | RUN | 0.180620 | 0.640568 | 1.166016 | 0.001014 | 0.001005 | 0.001053 |
| remove_reference_test.test | RUN | 0.182986 | 0.684651 | 1.231827 | 0.000962 | 0.001038 | 0.000916 |
| remove_pointer_test.test | RUN | 0.189249 | 0.704387 | 1.327028 | 0.001040 | 0.001072 | 0.000989 |
| remove_extent_test.test | RUN | 0.188382 | 0.678160 | 1.262993 | 0.001074 | 0.001028 | 0.001031 |
| remove_cv_test.test | RUN | 0.185702 | 0.677344 | 1.224394 | 0.000997 | 0.001042 | 0.001008 |
| remove_cv_ref_test.test | RUN | 0.382076 | 1.679811 | 3.067371 | 0.001049 | 0.001041 | 0.000983 |
| remove_const_test.test | RUN | 0.179719 | 0.638315 | 1.176846 | 0.000948 | 0.001061 | 0.001003 |
| remove_bounds_test.test | RUN | 0.184363 | 0.680698 | 1.257684 | 0.000947 | 0.000990 | 0.001040 |
| remove_all_extents_test.test | RUN | 0.187233 | 0.676092 | 1.228964 | 0.000978 | 0.001008 | 0.001000 |
| rank_test.test | RUN | 0.070826 | 0.178658 | 0.231015 | 0.001076 | 0.001014 | 0.000974 |
| promote_mpl_test.test | RUN | 0.065439 | 0.159721 | 0.164199 | 0.000483 | 0.000394 | 0.001077 |
| promote_enum_test.test | RUN | 0.013602 | 0.039061 | 0.043143 | 0.000426 | 0.000456 | 0.001062 |
| promote_enum_msvc_bug_test.test | RUN | 0.011976 | 0.034138 | 0.036068 | 0.000440 | 0.000474 | 0.001152 |
| promote_basic_test.test | RUN | 0.015035 | 0.044912 | 0.045054 | 0.000463 | 0.000456 | 0.001038 |
| negation_test.test | RUN | 0.068610 | 0.166902 | 0.205252 | 0.001008 | 0.001070 | 0.000754 |
| mpl_interop_test3.test | RUN | 0.062063 | 0.152563 | 0.151720 | 0.000413 | 0.000473 | 0.000997 |
| mpl_interop_test2.test | RUN | 0.020996 | 0.041599 | 0.044775 | 0.000453 | 0.000442 | 0.000958 |
| mpl_interop_test1.test | RUN | 0.010832 | 0.030971 | 0.033910 | 0.000478 | 0.000484 | 0.001022 |
| make_void_test.test | RUN | 0.072268 | 0.176183 | 0.224251 | 0.001006 | 0.001085 | 0.001070 |
| make_unsigned_test.test | RUN | 0.086098 | 0.231010 | 0.304051 | 0.000965 | 0.001050 | 0.000978 |
| make_signed_test.test | RUN | 0.084999 | 0.228535 | 0.298134 | 0.001036 | 0.000972 | 0.000976 |
| is_volatile_test.test | RUN | 0.074745 | 0.194419 | 0.250966 | 0.001011 | 0.001076 | 0.000901 |
| is_void_test.test | RUN | 0.071796 | 0.183188 | 0.232540 | 0.001027 | 0.001031 | 0.001030 |
| is_virtual_base_of_test.test | RUN | 0.082157 | 0.230385 | 0.322598 | 0.000975 | 0.001047 | 0.000971 |
| is_unsigned_test.test | RUN | 0.073534 | 0.190762 | 0.248569 | 0.000993 | 0.001025 | 0.000887 |
| is_unscoped_enum_test.test | RUN | 0.070963 | 0.174646 | 0.215920 | 0.000988 | 0.001041 | 0.000918 |
| is_union_test.test | RUN | 0.077761 | 0.213318 | 0.287475 | 0.000985 | 0.001060 | 0.000942 |
| is_unbounded_array_test.test | RUN | 0.071216 | 0.183059 | 0.231536 | 0.001016 | 0.001027 | 0.000911 |
| is_trivially_copyable_test.test | RUN | 0.112942 | 0.371010 | 0.567105 | 0.001001 | 0.000955 | 0.001017 |
| is_swappable_test.test | RUN | 0.093775 | 0.286393 | 0.425258 | 0.000904 | 0.001180 | 0.000992 |
| is_stateless_test.test | RUN | 0.104744 | 0.316998 | 0.482413 | 0.000987 | 0.001021 | 0.000995 |
| is_signed_test.test | RUN | 0.074277 | 0.187715 | 0.241554 | 0.000983 | 0.001088 | 0.001084 |
| is_scoped_enum_test.test | RUN | 0.072105 | 0.172537 | 0.216705 | 0.000903 | 0.001057 | 0.000907 |
| is_scalar_test.test | RUN | 0.092949 | 0.294681 | 0.421946 | 0.001001 | 0.001052 | 0.000926 |
| is_same_test.test | RUN | 0.072604 | 0.184235 | 0.227995 | 0.001021 | 0.001027 | 0.001023 |
| is_rvalue_reference_test.test | RUN | 0.075508 | 0.201782 | 0.276269 | 0.000945 | 0.001064 | 0.000968 |
| is_reference_test.test | RUN | 0.075676 | 0.202480 | 0.263282 | 0.001075 | 0.001038 | 0.000996 |
| is_polymorphic_test.test | RUN | 0.078269 | 0.211745 | 0.286074 | 0.001067 | 0.001092 | 0.001015 |
| is_pointer_test.test | RUN | 0.076206 | 0.208588 | 0.287964 | 0.001008 | 0.001001 | 0.000978 |
| is_pod_test.test | RUN | 0.098422 | 0.332165 | 0.483970 | 0.001056 | 0.001092 | 0.000978 |
| is_object_test.test | RUN | 0.070651 | 0.175929 | 0.229847 | 0.001025 | 0.000978 | 0.001077 |
| is_nothrow_swappable_test.test | RUN | 0.099776 | 0.311266 | 0.465031 | 0.000936 | 0.001041 | 0.000991 |
| is_nothrow_move_constructible_test.test | RUN | 0.097273 | 0.318376 | 0.469375 | 0.000921 | 0.001079 | 0.001025 |
| is_nothrow_move_assignable_test.test | RUN | 0.097565 | 0.316339 | 0.485440 | 0.000912 | 0.001012 | 0.000983 |
| is_noncopyable_test.test | RUN | 0.071047 | 0.177977 | 0.226400 | 0.001017 | 0.001033 | 0.000897 |
| is_member_pointer_test.test | RUN | 0.071905 | 0.186732 | 0.236475 | 0.001025 | 0.001020 | 0.000946 |
| is_member_obj_test.test | RUN | 0.072607 | 0.183349 | 0.232399 | 0.001060 | 0.001022 | 0.000988 |
| is_member_func_test.test | RUN | 0.075735 | 0.193898 | 0.254546 | 0.000935 | 0.000999 | 0.000968 |
| is_lvalue_reference_test.test | RUN | 0.076542 | 0.205243 | 0.273195 | 0.000974 | 0.001029 | 0.000931 |
| is_list_constructible_test.test | RUN | 0.088883 | 0.240502 | 0.317647 | 0.000919 | 0.001046 | 0.000982 |
| is_integral_test.test | RUN | 0.089431 | 0.275847 | 0.400073 | 0.000986 | 0.001097 | 0.000960 |
| is_fundamental_test.test | RUN | 0.090197 | 0.284773 | 0.407647 | 0.001053 | 0.001016 | 0.000947 |
| is_function_test.test | RUN | 0.074697 | 0.191835 | 0.240347 | 0.001113 | 0.001046 | 0.001011 |
| is_floating_point_test.test | RUN | 0.077256 | 0.209763 | 0.271273 | 0.001013 | 0.000916 | 0.001040 |
| is_float_test.test | RUN | 0.077079 | 0.205553 | 0.275527 | 0.001077 | 0.001061 | 0.000987 |
| is_final_test.test | RUN | 0.076223 | 0.207297 | 0.276119 | 0.001012 | 0.000990 | 0.000945 |
| is_enum_test.test | RUN | 0.072167 | 0.176543 | 0.220255 | 0.001017 | 0.001013 | 0.000891 |
| is_empty_test.test | RUN | 0.075532 | 0.192146 | 0.249503 | 0.000983 | 0.001104 | 0.000992 |
| is_detected_test.test | RUN | 0.069724 | 0.166571 | 0.203769 | 0.001041 | 0.001009 | 0.000961 |
| is_detected_exact_test.test | RUN | 0.069334 | 0.167554 | 0.202992 | 0.000921 | 0.000975 | 0.000904 |
| is_destructible_test.test | RUN | 0.096292 | 0.316205 | 0.463713 | 0.000983 | 0.001059 | 0.000934 |
| is_default_constr_test.test | RUN | 0.097903 | 0.326830 | 0.472990 | 0.000936 | 0.001011 | 0.000917 |
| is_copy_constructible_test.test | RUN | 0.103469 | 0.337864 | 0.509755 | 0.000995 | 0.001071 | 0.000959 |
| is_copy_assignable_test.test | RUN | 0.102865 | 0.333971 | 0.514220 | 0.000986 | 0.001120 | 0.001016 |
| is_convertible_test.test | RUN | 0.098531 | 0.301397 | 0.414453 | 0.001079 | 0.001078 | 0.000955 |
| is_constructible_test.test | RUN | 0.081293 | 0.218993 | 0.296803 | 0.001024 | 0.001007 | 0.000994 |
| is_const_test.test | RUN | 0.075939 | 0.193401 | 0.251695 | 0.001007 | 0.001040 | 0.001023 |
| is_compound_test.test | RUN | 0.070861 | 0.172776 | 0.207282 | 0.000955 | 0.000993 | 0.001103 |
| is_complex_test.test | RUN | 0.093594 | 0.222243 | 0.279238 | 0.001044 | 0.001050 | 0.000963 |
| is_complete_test.test | RUN | 0.081609 | 0.229502 | 0.311432 | 0.001010 | 0.001012 | 0.000961 |
| is_class_test.test | RUN | 0.075689 | 0.205173 | 0.264520 | 0.000989 | 0.001009 | 0.000904 |
| is_bounded_array_test.test | RUN | 0.072169 | 0.183733 | 0.233774 | 0.000976 | 0.001106 | 0.000930 |
| is_base_of_test.test | RUN | 0.078547 | 0.200223 | 0.260870 | 0.000976 | 0.001032 | 0.000986 |
| is_base_and_derived_test.test | RUN | 0.076690 | 0.199588 | 0.263834 | 0.000970 | 0.001027 | 0.000922 |
| is_assignable_test.test | RUN | 0.089747 | 0.274604 | 0.395584 | 0.001086 | 0.001063 | 0.000993 |
| is_array_test.test | RUN | 0.073812 | 0.192546 | 0.250638 | 0.000948 | 0.001075 | 0.000986 |
| is_arithmetic_test.test | RUN | 0.089647 | 0.279236 | 0.402105 | 0.000943 | 0.001093 | 0.001083 |
| is_abstract_test.test | RUN | 0.162590 | 0.732147 | 1.374475 | 0.000999 | 0.001047 | 0.000986 |
| integral_constant_test.test | RUN | 0.010668 | 0.030853 | 0.032492 | 0.000548 | 0.000436 | 0.001020 |
| has_virtual_destructor_test.test | RUN | 0.078593 | 0.226078 | 0.295346 | 0.001023 | 0.001097 | 0.001154 |
| has_unary_plus_test.test | RUN | 0.148859 | 0.770213 | 1.034433 | 0.001007 | 0.001057 | 0.001023 |
| has_unary_minus_test.test | RUN | 0.146537 | 0.775213 | 0.994807 | 0.000940 | 0.001054 | 0.001002 |
| has_trivial_move_constructor_test.test | RUN | 0.100735 | 0.336404 | 0.481603 | 0.001034 | 0.001090 | 0.001074 |
| has_trivial_move_assign_test.test | RUN | 0.101597 | 0.325706 | 0.484508 | 0.001041 | 0.001025 | 0.000981 |
| has_trivial_destructor_test.test | RUN | 0.100744 | 0.339163 | 0.511762 | 0.001024 | 0.001054 | 0.001027 |
| has_trivial_copy_test.test | RUN | 0.102407 | 0.347021 | 0.512557 | 0.001018 | 0.001132 | 0.001092 |
| has_trivial_constr_test.test | RUN | 0.103149 | 0.353248 | 0.517341 | 0.001036 | 0.001039 | 0.000987 |
| has_trivial_assign_test.test | RUN | 0.102253 | 0.345171 | 0.497544 | 0.001102 | 0.001032 | 0.001040 |
| has_right_shift_test.test | RUN | 0.155630 | 0.618951 | 1.059387 | 0.000973 | 0.001021 | 0.000998 |
| has_right_shift_assign_test.test | RUN | 0.149285 | 0.599275 | 1.003811 | 0.000933 | 0.000992 | 0.000985 |
| has_prefix_classes3_test.test | RUN | 0.110103 | 0.353225 | 0.515581 | 0.001073 | 0.001073 | 0.000938 |
| has_prefix_classes2_test.test | RUN | 0.110601 | 0.353624 | 0.510581 | 0.000961 | 0.001076 | 0.001017 |
| has_prefix_classes1_test.test | RUN | 0.110219 | 0.352730 | 0.520363 | 0.000888 | 0.001068 | 0.001004 |
| has_prefix_classes0_test.test | RUN | 0.109226 | 0.352843 | 0.515366 | 0.000968 | 0.001051 | 0.001024 |
| has_pre_increment_test.test | RUN | 0.149140 | 0.771230 | 0.986922 | 0.001010 | 0.001114 | 0.000973 |
| has_pre_decrement_test.test | RUN | 0.146205 | 0.768607 | 0.988376 | 0.000962 | 0.001029 | 0.000960 |
| has_postfix_classes3_test.test | RUN | 0.109466 | 0.347444 | 0.525819 | 0.001011 | 0.001148 | 0.000946 |
| has_postfix_classes2_test.test | RUN | 0.110001 | 0.348023 | 0.520880 | 0.001053 | 0.001159 | 0.001069 |
| has_postfix_classes1_test.test | RUN | 0.109270 | 0.361163 | 0.531230 | 0.001034 | 0.001040 | 0.001047 |
| has_postfix_classes0_test.test | RUN | 0.108784 | 0.347954 | 0.521636 | 0.001033 | 0.001011 | 0.000985 |
| has_post_increment_test.test | RUN | 0.147277 | 0.773948 | 1.020234 | 0.000987 | 0.001062 | 0.001089 |
| has_post_decrement_test.test | RUN | 0.147013 | 0.797379 | 1.005005 | 0.001088 | 0.001131 | 0.001041 |
| has_plus_test.test | RUN | 0.148331 | 0.587398 | 1.023971 | 0.001002 | 0.000979 | 0.001176 |
| has_plus_assign_test.test | RUN | 0.152731 | 0.604821 | 1.037021 | 0.001058 | 0.001033 | 0.000942 |
| has_operator_new_test.test | RUN | 0.099420 | 0.314727 | 0.471125 | 0.000949 | 0.001020 | 0.000960 |
| has_nothrow_destructor_test.test | RUN | 0.104576 | 0.350567 | 0.516553 | 0.000958 | 0.001065 | 0.000956 |
| has_nothrow_copy_test.test | RUN | 0.100019 | 0.346149 | 0.484389 | 0.001011 | 0.000951 | 0.000954 |
| has_nothrow_constr_test.test | RUN | 0.098659 | 0.321269 | 0.475574 | 0.000979 | 0.001042 | 0.001086 |
| has_nothrow_assign_test.test | RUN | 0.099117 | 0.323049 | 0.473951 | 0.000969 | 0.001103 | 0.001047 |
| has_not_equal_to_test.test | RUN | 0.149666 | 0.764949 | 1.006168 | 0.000948 | 0.001054 | 0.001050 |
| has_negate_test.test | RUN | 0.143118 | 0.573666 | 0.965865 | 0.001027 | 0.001059 | 0.001103 |
| has_multiplies_test.test | RUN | 0.148553 | 0.585013 | 1.017635 | 0.001045 | 0.001075 | 0.001025 |
| has_multiplies_assign_test.test | RUN | 0.150126 | 0.595123 | 0.994370 | 0.001070 | 0.001085 | 0.001115 |
| has_modulus_test.test | RUN | 0.147172 | 0.593135 | 0.995382 | 0.001046 | 0.001074 | 0.001049 |
| has_modulus_assign_test.test | RUN | 0.149508 | 0.586024 | 1.032220 | 0.000988 | 0.001070 | 0.001026 |
| has_minus_test.test | RUN | 0.151997 | 0.616052 | 1.019585 | 0.001011 | 0.001169 | 0.000997 |
| has_minus_assign_test.test | RUN | 0.152988 | 0.592438 | 1.035702 | 0.001008 | 0.001168 | 0.001019 |
| has_logical_or_test.test | RUN | 0.147722 | 0.590292 | 1.010709 | 0.000989 | 0.000967 | 0.001046 |
| has_logical_not_test.test | RUN | 0.145004 | 0.576072 | 0.972720 | 0.000947 | 0.001080 | 0.001113 |
| has_logical_and_test.test | RUN | 0.148331 | 0.589194 | 1.024885 | 0.001144 | 0.001123 | 0.001028 |
| has_less_test.test | RUN | 0.149107 | 0.769760 | 1.019985 | 0.001010 | 0.001257 | 0.001005 |
| has_less_equal_test.test | RUN | 0.150850 | 0.798558 | 1.010111 | 0.000967 | 0.001033 | 0.001086 |
| has_left_shift_test.test | RUN | 0.164197 | 0.740705 | 1.252070 | 0.000950 | 0.001044 | 0.001088 |
| has_left_shift_assign_test.test | RUN | 0.151526 | 0.591073 | 1.008063 | 0.000907 | 0.001004 | 0.000912 |
| has_greater_test.test | RUN | 0.149812 | 0.771760 | 1.016140 | 0.000984 | 0.001052 | 0.001051 |
| has_greater_equal_test.test | RUN | 0.152221 | 0.772669 | 1.007730 | 0.001019 | 0.001081 | 0.000966 |
| has_equal_to_test.test | RUN | 0.149362 | 0.757397 | 1.017308 | 0.000916 | 0.000992 | 0.001064 |
| has_divides_test.test | RUN | 0.148429 | 0.597296 | 1.010611 | 0.000930 | 0.001017 | 0.001159 |
| has_divides_assign_test.test | RUN | 0.148856 | 0.595306 | 1.034488 | 0.001050 | 0.001045 | 0.000930 |
| has_dereference_test.test | RUN | 0.144820 | 0.579551 | 0.963835 | 0.001057 | 0.001015 | 0.001088 |
| has_complement_test.test | RUN | 0.146521 | 0.795380 | 1.001257 | 0.001123 | 0.001053 | 0.001079 |
| has_bit_xor_test.test | RUN | 0.146400 | 0.594063 | 1.008100 | 0.001010 | 0.001106 | 0.000986 |
| has_bit_xor_assign_test.test | RUN | 0.148421 | 0.587903 | 1.002018 | 0.001051 | 0.001010 | 0.000951 |
| has_bit_or_test.test | RUN | 0.148043 | 0.602725 | 1.004751 | 0.000982 | 0.001092 | 0.001059 |
| has_bit_or_assign_test.test | RUN | 0.147225 | 0.585766 | 1.026720 | 0.000994 | 0.001070 | 0.001031 |
| has_bit_and_test.test | RUN | 0.147785 | 0.589321 | 0.998287 | 0.000953 | 0.001148 | 0.001052 |
| has_bit_and_assign_test.test | RUN | 0.147217 | 0.601678 | 0.996763 | 0.000978 | 0.001087 | 0.001037 |
| has_binary_classes9_test.test | RUN | 0.163011 | 0.690935 | 1.139514 | 0.001064 | 0.001059 | 0.001045 |
| has_binary_classes8_test.test | RUN | 0.164276 | 0.689389 | 1.146022 | 0.001059 | 0.001026 | 0.000939 |
| has_binary_classes7_test.test | RUN | 0.161159 | 0.692916 | 1.150940 | 0.000991 | 0.001022 | 0.000967 |
| has_binary_classes6_test.test | RUN | 0.158500 | 0.664463 | 1.192926 | 0.000997 | 0.001050 | 0.001058 |
| has_binary_classes5_test.test | RUN | 0.161111 | 0.671835 | 1.152576 | 0.000998 | 0.001022 | 0.000908 |
| has_binary_classes4_test.test | RUN | 0.161047 | 0.698832 | 1.175466 | 0.000975 | 0.001027 | 0.000978 |
| has_binary_classes3_test.test | RUN | 0.161970 | 0.719419 | 1.137684 | 0.001014 | 0.001044 | 0.000998 |
| has_binary_classes2_test.test | RUN | 0.163582 | 0.695644 | 1.164763 | 0.000938 | 0.000995 | 0.000891 |
| has_binary_classes1_test.test | RUN | 0.160634 | 0.692300 | 1.145868 | 0.000980 | 0.001044 | 0.000934 |
| has_binary_classes0_test.test | RUN | 0.160885 | 0.701821 | 1.149924 | 0.001070 | 0.001005 | 0.000941 |
| function_traits_test.test | RUN | 0.075455 | 0.199206 | 0.261922 | 0.000968 | 0.001136 | 0.000894 |
| floating_point_promotion_test.test | RUN | 0.074131 | 0.199395 | 0.236992 | 0.000971 | 0.001007 | 0.001056 |
| extent_test.test | RUN | 0.074773 | 0.192256 | 0.249916 | 0.000998 | 0.001132 | 0.000925 |
| enable_if_test.test | RUN | 0.069364 | 0.169909 | 0.197967 | 0.001010 | 0.001041 | 0.000966 |
| disjunction_test.test | RUN | 0.070962 | 0.176856 | 0.215821 | 0.000982 | 0.001049 | 0.001042 |
| detected_test.test | RUN | 0.070602 | 0.164323 | 0.199798 | 0.001025 | 0.000989 | 0.001046 |
| detected_or_test.test | RUN | 0.072904 | 0.173248 | 0.219229 | 0.000993 | 0.000999 | 0.001040 |
| decay_test.test | RUN | 0.181556 | 0.634479 | 1.111171 | 0.000955 | 0.001126 | 0.001054 |
| cxx14_aliases_test.test | RUN | 0.112799 | 0.247998 | 0.325160 | 0.001054 | 0.001127 | 0.000999 |
| copy_reference_test.test | RUN | 0.071491 | 0.170884 | 0.211955 | 0.001045 | 0.001068 | 0.000993 |
| copy_cv_test.test | RUN | 0.072804 | 0.179568 | 0.225702 | 0.001030 | 0.001075 | 0.001004 |
| copy_cv_ref_test.test | RUN | 0.100961 | 0.286428 | 0.460658 | 0.001002 | 0.000880 | 0.001016 |
| conjunction_test.test | RUN | 0.069367 | 0.171327 | 0.210768 | 0.000942 | 0.001044 | 0.000975 |
| conditional_test.test | RUN | 0.069905 | 0.170707 | 0.209927 | 0.000921 | 0.001039 | 0.001087 |
| common_type_test.test | RUN | 0.093630 | 0.255630 | 0.383507 | 0.000985 | 0.001027 | 0.001017 |
| common_type_sfinae_test.test | RUN | 0.068739 | 0.163463 | 0.198879 | 0.001060 | 0.001045 | 0.000986 |
| common_type_sfinae2_test.test | RUN | 0.072838 | 0.173700 | 0.213084 | 0.001021 | 0.001024 | 0.000944 |
| common_type_6_test.test | RUN | 0.072788 | 0.172927 | 0.219222 | 0.000952 | 0.001081 | 0.000993 |
| common_type_5_test.test | RUN | 0.072890 | 0.172673 | 0.219745 | 0.001001 | 0.000988 | 0.000967 |
| common_type_4_test.test | RUN | 0.079996 | 0.187881 | 0.253010 | 0.000942 | 0.001027 | 0.000984 |
| common_type_3_test.test | RUN | 0.070676 | 0.161909 | 0.193861 | 0.000913 | 0.001040 | 0.000943 |
| common_type_2_test.test | RUN | 0.093395 | 0.253730 | 0.378669 | 0.000965 | 0.001092 | 0.000998 |
| alignment_of_test.test | RUN | 0.076664 | 0.204092 | 0.255518 | 0.000951 | 0.001188 | 0.000967 |
| alignment_of_a2_test.test | RUN | 0.076507 | 0.204602 | 0.257692 | 0.001077 | 0.001095 | 0.001014 |
| aligned_storage_test.test | RUN | 0.078674 | 0.207737 | 0.241597 | 0.001208 | 0.001091 | 0.001124 |
| aligned_storage_empy_test.test | RUN | 0.087708 | 0.225079 | 0.316180 | 0.001057 | 0.001012 | 0.000915 |
| aligned_storage_a2_test.test | RUN | 0.078038 | 0.202786 | 0.237388 | 0.001138 | 0.001124 | 0.001077 |
| add_volatile_test.test | RUN | 0.158602 | 0.550851 | 1.003488 | 0.000987 | 0.001048 | 0.000934 |
| add_rvalue_reference_test.test | RUN | 0.180323 | 0.625750 | 1.143102 | 0.000985 | 0.001047 | 0.000926 |
| add_reference_test.test | RUN | 0.173755 | 0.606781 | 1.115646 | 0.000975 | 0.001052 | 0.000989 |
| add_pointer_test.test | RUN | 0.113473 | 0.356355 | 0.609826 | 0.001036 | 0.001100 | 0.001027 |
| add_lvalue_reference_test.test | RUN | 0.173979 | 0.612608 | 1.125651 | 0.001005 | 0.001066 | 0.000958 |
| add_cv_test.test | RUN | 0.164666 | 0.578962 | 1.049545 | 0.000970 | 0.001077 | 0.000950 |
| add_const_test.test | RUN | 0.170315 | 0.579652 | 1.041992 | 0.001009 | 0.000997 | 0.000937 |
| is_virtual_base_of_fail.test | COMPILE_FAIL | 0.066312 | 0.154426 | 0.186939 | — | — | — |
| is_stateless_fail.test | COMPILE_FAIL | 0.068402 | 0.158891 | 0.195007 | — | — | — |
| is_polymorphic_fail.test | COMPILE_FAIL | 0.065493 | 0.155374 | 0.193177 | — | — | — |
| is_nothrow_move_constructible_fail.test | COMPILE_FAIL | 0.067736 | 0.155347 | 0.184927 | — | — | — |
| is_nothrow_move_assignable_fail.test | COMPILE_FAIL | 0.066923 | 0.159582 | 0.197057 | — | — | — |
| is_list_constructible_fail.test | COMPILE_FAIL | 0.066256 | 0.156914 | 0.195396 | — | — | — |
| is_empty_fail.test | COMPILE_FAIL | 0.067779 | 0.155593 | 0.189222 | — | — | — |
| is_destructible_fail.test | COMPILE_FAIL | 0.065970 | 0.155728 | 0.188471 | — | — | — |
| is_default_constructible_fail.test | COMPILE_FAIL | 0.066044 | 0.159007 | 0.186056 | — | — | — |
| is_copy_constructible_fail.test | COMPILE_FAIL | 0.065927 | 0.157052 | 0.191565 | — | — | — |
| is_copy_assignable_fail.test | COMPILE_FAIL | 0.067257 | 0.156785 | 0.191457 | — | — | — |
| is_convertible_fail.test | COMPILE_FAIL | 0.066498 | 0.156743 | 0.187998 | — | — | — |
| is_convertible2_fail.test | COMPILE_FAIL | 0.066666 | 0.156730 | 0.187698 | — | — | — |
| is_constructible_fail.test | COMPILE_FAIL | 0.065545 | 0.157771 | 0.197225 | — | — | — |
| is_base_of_fail.test | COMPILE_FAIL | 0.065675 | 0.154327 | 0.194620 | — | — | — |
| is_assignable_fail.test | COMPILE_FAIL | 0.064726 | 0.153579 | 0.193158 | — | — | — |
| has_nothrow_destruct_fail.test | COMPILE_FAIL | 0.065637 | 0.153971 | 0.192104 | — | — | — |
| has_nothrow_copy_fail.test | COMPILE_FAIL | 0.066117 | 0.155634 | 0.189614 | — | — | — |
| has_nothrow_cons_fail.test | COMPILE_FAIL | 0.065772 | 0.155743 | 0.192955 | — | — | — |
| has_nothrow_assign_fail.test | COMPILE_FAIL | 0.065750 | 0.155647 | 0.192098 | — | — | — |
| common_type_fail.test | COMPILE_FAIL | 0.065804 | 0.155130 | 0.185979 | — | — | — |
| common_type2_fail.test | COMPILE_FAIL | 0.065536 | 0.152863 | 0.190757 | — | — | — |
| has_nothrow_assign_test_no_intrinsics.test | RUN | 0.099877 | 0.314487 | 0.473043 | 0.001065 | 0.001018 | 0.001027 |
| has_nothrow_constr_test_no_intrinsics.test | RUN | 0.095672 | 0.315497 | 0.467296 | 0.000920 | 0.000936 | 0.000987 |
| has_nothrow_copy_test_no_intrinsics.test | RUN | 0.097287 | 0.319306 | 0.473517 | 0.000936 | 0.001068 | 0.000913 |
| is_nothrow_move_assignable_test_no_intrinsics.test | RUN | 0.097871 | 0.316313 | 0.466074 | 0.000941 | 0.000961 | 0.001009 |
| is_nothrow_move_constructible_test_no_intrinsics.test | RUN | 0.096013 | 0.310459 | 0.457559 | 0.000925 | 0.000947 | 0.000882 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.998× | 0.996×, 1.000× | 1.001× |
| clang | 1.028× | 1.027×, 1.029× | 1.001× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1364 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/43947487361).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| add_const_test.test | 10 | 0.000955s | 0.000946s | 0.000932s | byte equality observed |
| add_cv_test.test | 10 | 0.000929s | 0.000922s | 0.000935s | byte equality observed |
| add_lvalue_reference_test.test | 10 | 0.000931s | 0.000917s | 0.000919s | byte equality observed |
| add_pointer_test.test | 10 | 0.000921s | 0.000920s | 0.000932s | byte equality observed |
| add_reference_test.test | 10 | 0.000925s | 0.000919s | 0.000912s | byte equality observed |
| add_rvalue_reference_test.test | 10 | 0.000920s | 0.000918s | 0.000918s | byte equality observed |
| add_volatile_test.test | 10 | 0.000916s | 0.000914s | 0.000904s | byte equality observed |
| aligned_storage_a2_test.test | 10 | 0.000973s | 0.000985s | 0.000965s | byte equality observed |
| aligned_storage_empy_test.test | 10 | 0.000915s | 0.000910s | 0.000915s | byte equality observed |
| aligned_storage_test.test | 10 | 0.000969s | 0.000971s | 0.000973s | byte equality observed |
| alignment_of_a2_test.test | 10 | 0.000912s | 0.000911s | 0.000920s | byte equality observed |
| alignment_of_test.test | 10 | 0.000911s | 0.000909s | 0.000913s | byte equality observed |
| common_type_2_test.test | 10 | 0.000906s | 0.000920s | 0.000910s | byte equality observed |
| common_type_3_test.test | 10 | 0.000907s | 0.000905s | 0.000919s | byte equality observed |
| common_type_4_test.test | 10 | 0.000907s | 0.000914s | 0.000923s | byte equality observed |
| common_type_5_test.test | 10 | 0.000905s | 0.000908s | 0.000904s | byte equality observed |
| common_type_6_test.test | 10 | 0.000907s | 0.000914s | 0.000905s | byte equality observed |
| common_type_sfinae2_test.test | 10 | 0.000909s | 0.000902s | 0.000911s | byte equality observed |
| common_type_sfinae_test.test | 10 | 0.000905s | 0.000906s | 0.000894s | byte equality observed |
| common_type_test.test | 10 | 0.000901s | 0.000907s | 0.000911s | byte equality observed |
| conditional_test.test | 10 | 0.000909s | 0.000905s | 0.000910s | byte equality observed |
| conjunction_test.test | 10 | 0.000909s | 0.000908s | 0.000909s | byte equality observed |
| copy_cv_ref_test.test | 10 | 0.000910s | 0.000912s | 0.000910s | byte equality observed |
| copy_cv_test.test | 10 | 0.000908s | 0.000897s | 0.000908s | byte equality observed |
| copy_reference_test.test | 10 | 0.000906s | 0.000907s | 0.000905s | byte equality observed |
| cxx14_aliases_test.test | 10 | 0.000904s | 0.000904s | 0.000905s | byte equality observed |
| decay_test.test | 10 | 0.000913s | 0.000909s | 0.000913s | byte equality observed |
| detected_or_test.test | 10 | 0.000905s | 0.000909s | 0.000912s | byte equality observed |
| detected_test.test | 10 | 0.000907s | 0.000908s | 0.000909s | byte equality observed |
| disjunction_test.test | 10 | 0.000908s | 0.000909s | 0.000909s | byte equality observed |
| enable_if_test.test | 10 | 0.000906s | 0.000896s | 0.000910s | byte equality observed |
| extent_test.test | 10 | 0.000906s | 0.000902s | 0.000907s | byte equality observed |
| floating_point_promotion_test.test | 10 | 0.000904s | 0.000905s | 0.000909s | byte equality observed |
| function_traits_test.test | 10 | 0.000911s | 0.000908s | 0.000907s | byte equality observed |
| has_binary_classes0_test.test | 10 | 0.000905s | 0.000908s | 0.000905s | byte equality observed |
| has_binary_classes1_test.test | 10 | 0.000907s | 0.000904s | 0.000902s | byte equality observed |
| has_binary_classes2_test.test | 10 | 0.000906s | 0.000906s | 0.000909s | byte equality observed |
| has_binary_classes3_test.test | 10 | 0.000904s | 0.000910s | 0.000906s | byte equality observed |
| has_binary_classes4_test.test | 10 | 0.000903s | 0.000904s | 0.000907s | byte equality observed |
| has_binary_classes5_test.test | 10 | 0.000899s | 0.000896s | 0.000909s | byte equality observed |
| has_binary_classes6_test.test | 10 | 0.000902s | 0.000904s | 0.000906s | byte equality observed |
| has_binary_classes7_test.test | 10 | 0.000907s | 0.000903s | 0.000907s | byte equality observed |
| has_binary_classes8_test.test | 10 | 0.000904s | 0.000894s | 0.000906s | byte equality observed |
| has_binary_classes9_test.test | 10 | 0.000903s | 0.000902s | 0.000912s | byte equality observed |
| has_bit_and_assign_test.test | 10 | 0.000902s | 0.000909s | 0.000907s | byte equality observed |
| has_bit_and_test.test | 10 | 0.000900s | 0.000904s | 0.000907s | byte equality observed |
| has_bit_or_assign_test.test | 10 | 0.000904s | 0.000903s | 0.000905s | byte equality observed |
| has_bit_or_test.test | 10 | 0.000902s | 0.000905s | 0.000913s | byte equality observed |
| has_bit_xor_assign_test.test | 10 | 0.000904s | 0.000908s | 0.000903s | byte equality observed |
| has_bit_xor_test.test | 10 | 0.000902s | 0.000911s | 0.000904s | byte equality observed |
| has_complement_test.test | 10 | 0.000907s | 0.000906s | 0.000908s | byte equality observed |
| has_dereference_test.test | 10 | 0.000909s | 0.000903s | 0.000912s | byte equality observed |
| has_divides_assign_test.test | 10 | 0.000907s | 0.000903s | 0.000903s | byte equality observed |
| has_divides_test.test | 10 | 0.000901s | 0.000901s | 0.000908s | byte equality observed |
| has_equal_to_test.test | 10 | 0.000904s | 0.000902s | 0.000905s | byte equality observed |
| has_greater_equal_test.test | 10 | 0.000908s | 0.000900s | 0.000902s | byte equality observed |
| has_greater_test.test | 10 | 0.000908s | 0.000905s | 0.000908s | byte equality observed |
| has_left_shift_assign_test.test | 10 | 0.000908s | 0.000905s | 0.000909s | byte equality observed |
| has_left_shift_test.test | 10 | 0.000906s | 0.000903s | 0.000898s | byte equality observed |
| has_less_equal_test.test | 10 | 0.000906s | 0.000908s | 0.000900s | byte equality observed |
| has_less_test.test | 9 | 0.000906s | 0.000902s | 0.000909s | byte equality observed |
| has_logical_and_test.test | 10 | 0.000911s | 0.000911s | 0.000908s | byte equality observed |
| has_logical_not_test.test | 10 | 0.000908s | 0.000904s | 0.000906s | byte equality observed |
| has_logical_or_test.test | 10 | 0.000911s | 0.000907s | 0.000904s | byte equality observed |
| has_minus_assign_test.test | 10 | 0.000909s | 0.000903s | 0.000911s | byte equality observed |
| has_minus_test.test | 10 | 0.000904s | 0.000902s | 0.000910s | byte equality observed |
| has_modulus_assign_test.test | 10 | 0.000908s | 0.000906s | 0.000905s | byte equality observed |
| has_modulus_test.test | 10 | 0.000907s | 0.000905s | 0.000912s | byte equality observed |
| has_multiplies_assign_test.test | 10 | 0.000910s | 0.000904s | 0.000915s | byte equality observed |
| has_multiplies_test.test | 10 | 0.000908s | 0.000897s | 0.000904s | byte equality observed |
| has_negate_test.test | 10 | 0.000907s | 0.000904s | 0.000907s | byte equality observed |
| has_not_equal_to_test.test | 10 | 0.000904s | 0.000907s | 0.000904s | byte equality observed |
| has_nothrow_assign_test.test | 10 | 0.000905s | 0.000903s | 0.000905s | byte equality observed |
| has_nothrow_assign_test_no_intrinsics.test | 10 | 0.000913s | 0.000908s | 0.000905s | byte equality observed |
| has_nothrow_constr_test.test | 10 | 0.000899s | 0.000901s | 0.000911s | byte equality observed |
| has_nothrow_constr_test_no_intrinsics.test | 10 | 0.000914s | 0.000901s | 0.000914s | byte equality observed |
| has_nothrow_copy_test.test | 10 | 0.000907s | 0.000913s | 0.000906s | byte equality observed |
| has_nothrow_copy_test_no_intrinsics.test | 10 | 0.000906s | 0.000908s | 0.000902s | byte equality observed |
| has_nothrow_destructor_test.test | 10 | 0.000905s | 0.000902s | 0.000906s | byte equality observed |
| has_operator_new_test.test | 10 | 0.000903s | 0.000905s | 0.000905s | byte equality observed |
| has_plus_assign_test.test | 10 | 0.000907s | 0.000902s | 0.000908s | byte equality observed |
| has_plus_test.test | 10 | 0.000907s | 0.000900s | 0.000909s | byte equality observed |
| has_post_decrement_test.test | 10 | 0.000906s | 0.000907s | 0.000911s | byte equality observed |
| has_post_increment_test.test | 10 | 0.000903s | 0.000897s | 0.000905s | byte equality observed |
| has_postfix_classes0_test.test | 10 | 0.000902s | 0.000901s | 0.000908s | byte equality observed |
| has_postfix_classes1_test.test | 10 | 0.000907s | 0.000903s | 0.000903s | byte equality observed |
| has_postfix_classes2_test.test | 10 | 0.000904s | 0.000903s | 0.000906s | byte equality observed |
| has_postfix_classes3_test.test | 10 | 0.000903s | 0.000906s | 0.000908s | byte equality observed |
| has_pre_decrement_test.test | 10 | 0.000905s | 0.000906s | 0.000911s | byte equality observed |
| has_pre_increment_test.test | 10 | 0.000904s | 0.000892s | 0.000909s | byte equality observed |
| has_prefix_classes0_test.test | 10 | 0.000912s | 0.000907s | 0.000915s | byte equality observed |
| has_prefix_classes1_test.test | 10 | 0.000902s | 0.000902s | 0.000906s | byte equality observed |
| has_prefix_classes2_test.test | 10 | 0.000909s | 0.000908s | 0.000904s | byte equality observed |
| has_prefix_classes3_test.test | 10 | 0.000906s | 0.000903s | 0.000906s | byte equality observed |
| has_right_shift_assign_test.test | 10 | 0.000915s | 0.000903s | 0.000913s | byte equality observed |
| has_right_shift_test.test | 10 | 0.000912s | 0.000911s | 0.000905s | byte equality observed |
| has_trivial_assign_test.test | 10 | 0.000950s | 0.000949s | 0.000948s | byte equality observed |
| has_trivial_constr_test.test | 10 | 0.000942s | 0.000942s | 0.000947s | native test oracle; output varies |
| has_trivial_copy_test.test | 10 | 0.000946s | 0.000945s | 0.000966s | native test oracle; output varies |
| has_trivial_destructor_test.test | 10 | 0.000913s | 0.000908s | 0.000916s | byte equality observed |
| has_trivial_move_assign_test.test | 10 | 0.000916s | 0.000909s | 0.000909s | byte equality observed |
| has_trivial_move_constructor_test.test | 10 | 0.000909s | 0.000918s | 0.000907s | byte equality observed |
| has_unary_minus_test.test | 10 | 0.000911s | 0.000911s | 0.000912s | byte equality observed |
| has_unary_plus_test.test | 10 | 0.000909s | 0.000903s | 0.000919s | byte equality observed |
| has_virtual_destructor_test.test | 10 | 0.000910s | 0.000906s | 0.000911s | byte equality observed |
| integral_constant_test.test | 10 | 0.000436s | 0.000434s | 0.000910s | byte equality observed |
| is_abstract_test.test | 10 | 0.000905s | 0.000907s | 0.000911s | byte equality observed |
| is_arithmetic_test.test | 10 | 0.000912s | 0.000897s | 0.000905s | byte equality observed |
| is_array_test.test | 10 | 0.000900s | 0.000903s | 0.000905s | byte equality observed |
| is_assignable_test.test | 10 | 0.000907s | 0.000909s | 0.000906s | byte equality observed |
| is_base_and_derived_test.test | 10 | 0.000907s | 0.000898s | 0.000912s | byte equality observed |
| is_base_of_test.test | 10 | 0.000909s | 0.000902s | 0.000909s | byte equality observed |
| is_bounded_array_test.test | 10 | 0.000909s | 0.000908s | 0.000911s | byte equality observed |
| is_class_test.test | 10 | 0.000908s | 0.000897s | 0.000903s | byte equality observed |
| is_complete_test.test | 10 | 0.000907s | 0.000897s | 0.000907s | byte equality observed |
| is_complex_test.test | 10 | 0.000901s | 0.000898s | 0.000907s | byte equality observed |
| is_compound_test.test | 10 | 0.000906s | 0.000909s | 0.000905s | byte equality observed |
| is_const_test.test | 10 | 0.000906s | 0.000902s | 0.000909s | byte equality observed |
| is_constructible_test.test | 10 | 0.000905s | 0.000906s | 0.000905s | byte equality observed |
| is_convertible_test.test | 10 | 0.000901s | 0.000909s | 0.000906s | byte equality observed |
| is_copy_assignable_test.test | 10 | 0.000907s | 0.000901s | 0.000905s | byte equality observed |
| is_copy_constructible_test.test | 10 | 0.000909s | 0.000898s | 0.000907s | byte equality observed |
| is_default_constr_test.test | 10 | 0.000903s | 0.000904s | 0.000907s | byte equality observed |
| is_destructible_test.test | 10 | 0.000909s | 0.000902s | 0.000896s | byte equality observed |
| is_detected_exact_test.test | 10 | 0.000897s | 0.000909s | 0.000906s | byte equality observed |
| is_detected_test.test | 10 | 0.000906s | 0.000909s | 0.000910s | byte equality observed |
| is_empty_test.test | 10 | 0.000899s | 0.000902s | 0.000911s | byte equality observed |
| is_enum_test.test | 10 | 0.000907s | 0.000906s | 0.000911s | byte equality observed |
| is_final_test.test | 10 | 0.000904s | 0.000900s | 0.000909s | byte equality observed |
| is_float_test.test | 10 | 0.000906s | 0.000901s | 0.000904s | byte equality observed |
| is_floating_point_test.test | 10 | 0.000909s | 0.000907s | 0.000906s | byte equality observed |
| is_function_test.test | 10 | 0.000908s | 0.000902s | 0.000905s | byte equality observed |
| is_fundamental_test.test | 10 | 0.000900s | 0.000909s | 0.000912s | byte equality observed |
| is_integral_test.test | 10 | 0.000901s | 0.000909s | 0.000902s | byte equality observed |
| is_list_constructible_test.test | 10 | 0.000901s | 0.000903s | 0.000908s | byte equality observed |
| is_lvalue_reference_test.test | 10 | 0.000908s | 0.000904s | 0.000914s | byte equality observed |
| is_member_func_test.test | 10 | 0.000903s | 0.000904s | 0.000908s | byte equality observed |
| is_member_obj_test.test | 10 | 0.000903s | 0.000906s | 0.000909s | byte equality observed |
| is_member_pointer_test.test | 10 | 0.000903s | 0.000914s | 0.000915s | byte equality observed |
| is_noncopyable_test.test | 10 | 0.000903s | 0.000911s | 0.000915s | byte equality observed |
| is_nothrow_move_assignable_test.test | 9 | 0.000902s | 0.000903s | 0.000909s | byte equality observed |
| is_nothrow_move_assignable_test_no_intrinsics.test | 10 | 0.000906s | 0.000907s | 0.000896s | byte equality observed |
| is_nothrow_move_constructible_test.test | 10 | 0.000906s | 0.000898s | 0.000907s | byte equality observed |
| is_nothrow_move_constructible_test_no_intrinsics.test | 10 | 0.000906s | 0.000911s | 0.000913s | byte equality observed |
| is_nothrow_swappable_test.test | 10 | 0.000904s | 0.000907s | 0.000911s | byte equality observed |
| is_object_test.test | 10 | 0.000908s | 0.000906s | 0.000906s | byte equality observed |
| is_pod_test.test | 10 | 0.000904s | 0.000909s | 0.000906s | byte equality observed |
| is_pointer_test.test | 9 | 0.000903s | 0.000895s | 0.000912s | byte equality observed |
| is_polymorphic_test.test | 10 | 0.000905s | 0.000911s | 0.000906s | byte equality observed |
| is_reference_test.test | 10 | 0.000906s | 0.000909s | 0.000900s | byte equality observed |
| is_rvalue_reference_test.test | 10 | 0.000901s | 0.000903s | 0.000902s | byte equality observed |
| is_same_test.test | 10 | 0.000903s | 0.000908s | 0.000912s | byte equality observed |
| is_scalar_test.test | 10 | 0.000909s | 0.000906s | 0.000906s | byte equality observed |
| is_scoped_enum_test.test | 10 | 0.000902s | 0.000898s | 0.000909s | byte equality observed |
| is_signed_test.test | 9 | 0.000908s | 0.000902s | 0.000905s | byte equality observed |
| is_stateless_test.test | 10 | 0.000908s | 0.000914s | 0.000902s | byte equality observed |
| is_swappable_test.test | 10 | 0.000912s | 0.000906s | 0.000922s | byte equality observed |
| is_trivially_copyable_test.test | 10 | 0.000943s | 0.000927s | 0.000941s | byte equality observed |
| is_unbounded_array_test.test | 10 | 0.000907s | 0.000913s | 0.000910s | byte equality observed |
| is_union_test.test | 10 | 0.000912s | 0.000905s | 0.000907s | byte equality observed |
| is_unscoped_enum_test.test | 10 | 0.000909s | 0.000905s | 0.000910s | byte equality observed |
| is_unsigned_test.test | 10 | 0.000907s | 0.000905s | 0.000909s | byte equality observed |
| is_virtual_base_of_test.test | 10 | 0.000908s | 0.000900s | 0.000907s | byte equality observed |
| is_void_test.test | 10 | 0.000912s | 0.000910s | 0.000903s | byte equality observed |
| is_volatile_test.test | 10 | 0.000902s | 0.000899s | 0.000908s | byte equality observed |
| make_signed_test.test | 10 | 0.000902s | 0.000904s | 0.000912s | byte equality observed |
| make_unsigned_test.test | 10 | 0.000906s | 0.000904s | 0.000913s | byte equality observed |
| make_void_test.test | 10 | 0.000897s | 0.000900s | 0.000914s | byte equality observed |
| mpl_interop_test1.test | 10 | 0.000434s | 0.000428s | 0.000906s | byte equality observed |
| mpl_interop_test2.test | 10 | 0.000425s | 0.000428s | 0.000906s | byte equality observed |
| mpl_interop_test3.test | 10 | 0.000428s | 0.000434s | 0.000899s | byte equality observed |
| negation_test.test | 10 | 0.000893s | 0.000900s | 0.000903s | byte equality observed |
| promote_basic_test.test | 10 | 0.000424s | 0.000421s | 0.000901s | byte equality observed |
| promote_enum_msvc_bug_test.test | 10 | 0.000436s | 0.000427s | 0.000908s | byte equality observed |
| promote_enum_test.test | 10 | 0.000427s | 0.000429s | 0.000905s | byte equality observed |
| promote_mpl_test.test | 10 | 0.000430s | 0.000428s | 0.000910s | byte equality observed |
| rank_test.test | 10 | 0.000896s | 0.000899s | 0.000902s | byte equality observed |
| remove_all_extents_test.test | 10 | 0.000906s | 0.000893s | 0.000906s | byte equality observed |
| remove_bounds_test.test | 10 | 0.000905s | 0.000900s | 0.000906s | byte equality observed |
| remove_const_test.test | 10 | 0.000910s | 0.000906s | 0.000904s | byte equality observed |
| remove_cv_ref_test.test | 10 | 0.000904s | 0.000909s | 0.000909s | byte equality observed |
| remove_cv_test.test | 10 | 0.000919s | 0.000910s | 0.000912s | byte equality observed |
| remove_extent_test.test | 10 | 0.000908s | 0.000907s | 0.000907s | byte equality observed |
| remove_pointer_test.test | 10 | 0.000911s | 0.000903s | 0.000905s | byte equality observed |
| remove_reference_test.test | 10 | 0.000912s | 0.000906s | 0.000901s | byte equality observed |
| remove_volatile_test.test | 10 | 0.000917s | 0.000901s | 0.000908s | byte equality observed |
| tricky_abstract_type_test.test | 10 | 0.000907s | 0.000909s | 0.000904s | byte equality observed |
| tricky_add_pointer_test.test | 10 | 0.000907s | 0.000900s | 0.000906s | byte equality observed |
| tricky_function_type_test.test | 10 | 0.000903s | 0.000908s | 0.000906s | byte equality observed |
| tricky_incomplete_type_test.test | 10 | 0.000899s | 0.000904s | 0.000906s | byte equality observed |
| tricky_is_enum_test.test | 10 | 0.000903s | 0.000907s | 0.000911s | byte equality observed |
| tricky_partial_spec_test.test | 10 | 0.000903s | 0.000899s | 0.000909s | byte equality observed |
| tricky_rvalue_test.test | 10 | 0.000904s | 0.000914s | 0.000913s | byte equality observed |
| type_identity_test.test | 10 | 0.000915s | 0.000912s | 0.000915s | byte equality observed |
| type_traits_test.test | 10 | 0.000437s | 0.000437s | 0.000912s | byte equality observed |
| type_with_alignment_test.test | 10 | 0.000974s | 0.000976s | 0.000977s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/43947487361).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
