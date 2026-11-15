# libs/type_traits/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| type_with_alignment_test.test | RUN | 0.092582 | 0.273270 | 0.382021 | 0.001236 | 0.001135 | 0.001103 |
| type_traits_test.test | RUN | 0.125192 | 0.275079 | 0.355916 | 0.000429 | 0.000485 | 0.000974 |
| type_identity_test.test | RUN | 0.238190 | 0.917461 | 1.922957 | 0.001039 | 0.001160 | 0.001103 |
| tricky_rvalue_test.test | RUN | 0.084072 | 0.215579 | 0.288690 | 0.001067 | 0.001398 | 0.000943 |
| tricky_partial_spec_test.test | RUN | 0.098686 | 0.309189 | 0.447701 | 0.000792 | 0.001207 | 0.001012 |
| tricky_is_enum_test.test | RUN | 0.075384 | 0.197154 | 0.255615 | 0.001022 | 0.001179 | 0.000764 |
| tricky_incomplete_type_test.test | RUN | 0.131502 | 0.304946 | 0.441438 | 0.001030 | 0.001065 | 0.001018 |
| tricky_function_type_test.test | RUN | 0.102013 | 0.314895 | 0.504280 | 0.001007 | 0.001255 | 0.001030 |
| tricky_add_pointer_test.test | RUN | 0.144262 | 0.553150 | 1.098159 | 0.001029 | 0.001255 | 0.001016 |
| tricky_abstract_type_test.test | RUN | 0.079967 | 0.203562 | 0.272661 | 0.001046 | 0.001178 | 0.001012 |
| remove_volatile_test.test | RUN | 0.200455 | 0.800426 | 1.711776 | 0.001017 | 0.001184 | 0.000894 |
| remove_reference_test.test | RUN | 0.209788 | 0.835374 | 1.756506 | 0.001034 | 0.001237 | 0.001039 |
| remove_pointer_test.test | RUN | 0.219206 | 0.882149 | 1.873455 | 0.001032 | 0.001178 | 0.000919 |
| remove_extent_test.test | RUN | 0.217631 | 0.846368 | 1.799339 | 0.001060 | 0.001300 | 0.000777 |
| remove_cv_test.test | RUN | 0.213761 | 0.850159 | 1.791566 | 0.001040 | 0.001213 | 0.001044 |
| remove_cv_ref_test.test | RUN | 0.446724 | 2.066523 | 4.356431 | 0.001182 | 0.001069 | 0.000987 |
| remove_const_test.test | RUN | 0.203399 | 0.802905 | 1.712550 | 0.001055 | 0.001211 | 0.001094 |
| remove_bounds_test.test | RUN | 0.222546 | 0.850066 | 1.808933 | 0.001103 | 0.001192 | 0.001007 |
| remove_all_extents_test.test | RUN | 0.220526 | 0.841697 | 1.706390 | 0.000989 | 0.001293 | 0.000922 |
| rank_test.test | RUN | 0.081193 | 0.208337 | 0.295245 | 0.000956 | 0.001191 | 0.001010 |
| promote_mpl_test.test | RUN | 0.074381 | 0.193425 | 0.207832 | 0.000480 | 0.000416 | 0.001019 |
| promote_enum_test.test | RUN | 0.016077 | 0.043468 | 0.047284 | 0.000452 | 0.000470 | 0.000996 |
| promote_enum_msvc_bug_test.test | RUN | 0.012310 | 0.037505 | 0.036187 | 0.000471 | 0.000479 | 0.001048 |
| promote_basic_test.test | RUN | 0.016657 | 0.050509 | 0.047870 | 0.000445 | 0.000487 | 0.001009 |
| negation_test.test | RUN | 0.072722 | 0.193039 | 0.261569 | 0.001049 | 0.001178 | 0.001048 |
| mpl_interop_test3.test | RUN | 0.069560 | 0.192728 | 0.188001 | 0.000532 | 0.000448 | 0.000963 |
| mpl_interop_test2.test | RUN | 0.023608 | 0.050141 | 0.046911 | 0.000364 | 0.000500 | 0.001002 |
| mpl_interop_test1.test | RUN | 0.012024 | 0.035037 | 0.031862 | 0.000431 | 0.000500 | 0.001068 |
| make_void_test.test | RUN | 0.081972 | 0.207954 | 0.299122 | 0.001144 | 0.001186 | 0.001022 |
| make_unsigned_test.test | RUN | 0.093205 | 0.270715 | 0.395643 | 0.001120 | 0.001100 | 0.000953 |
| make_signed_test.test | RUN | 0.094097 | 0.278653 | 0.394269 | 0.000947 | 0.001053 | 0.001051 |
| is_volatile_test.test | RUN | 0.083888 | 0.236835 | 0.327440 | 0.000918 | 0.001116 | 0.001012 |
| is_void_test.test | RUN | 0.079472 | 0.222136 | 0.300497 | 0.001198 | 0.001184 | 0.000964 |
| is_virtual_base_of_test.test | RUN | 0.094025 | 0.278914 | 0.418298 | 0.000992 | 0.001146 | 0.000980 |
| is_unsigned_test.test | RUN | 0.082823 | 0.221745 | 0.314513 | 0.001036 | 0.001222 | 0.001032 |
| is_unscoped_enum_test.test | RUN | 0.079662 | 0.209975 | 0.258905 | 0.000956 | 0.001003 | 0.001039 |
| is_union_test.test | RUN | 0.085423 | 0.257766 | 0.377032 | 0.001039 | 0.001242 | 0.000895 |
| is_unbounded_array_test.test | RUN | 0.079411 | 0.215630 | 0.301443 | 0.001133 | 0.001193 | 0.000991 |
| is_trivially_copyable_test.test | RUN | 0.130944 | 0.461723 | 0.773662 | 0.000984 | 0.001233 | 0.001034 |
| is_swappable_test.test | RUN | 0.108555 | 0.346827 | 0.572685 | 0.001023 | 0.001150 | 0.001052 |
| is_stateless_test.test | RUN | 0.123443 | 0.395129 | 0.630400 | 0.001019 | 0.001219 | 0.000971 |
| is_signed_test.test | RUN | 0.082237 | 0.224392 | 0.313238 | 0.001081 | 0.001138 | 0.000939 |
| is_scoped_enum_test.test | RUN | 0.080598 | 0.204893 | 0.259855 | 0.001014 | 0.001130 | 0.000986 |
| is_scalar_test.test | RUN | 0.104619 | 0.361265 | 0.567218 | 0.000754 | 0.001114 | 0.001021 |
| is_same_test.test | RUN | 0.078188 | 0.213183 | 0.303657 | 0.001036 | 0.001161 | 0.000989 |
| is_rvalue_reference_test.test | RUN | 0.083545 | 0.241408 | 0.340898 | 0.000875 | 0.001225 | 0.001025 |
| is_reference_test.test | RUN | 0.084110 | 0.240960 | 0.340339 | 0.001027 | 0.001077 | 0.000968 |
| is_polymorphic_test.test | RUN | 0.088839 | 0.257473 | 0.365375 | 0.000926 | 0.001086 | 0.001000 |
| is_pointer_test.test | RUN | 0.083641 | 0.252636 | 0.366673 | 0.001032 | 0.001130 | 0.000933 |
| is_pod_test.test | RUN | 0.115202 | 0.393859 | 0.668749 | 0.001047 | 0.001218 | 0.001007 |
| is_object_test.test | RUN | 0.079743 | 0.212937 | 0.274795 | 0.000927 | 0.001165 | 0.000947 |
| is_nothrow_swappable_test.test | RUN | 0.116998 | 0.384087 | 0.619913 | 0.001010 | 0.001213 | 0.001019 |
| is_nothrow_move_constructible_test.test | RUN | 0.112421 | 0.386707 | 0.639696 | 0.001039 | 0.001117 | 0.001007 |
| is_nothrow_move_assignable_test.test | RUN | 0.111013 | 0.393180 | 0.649476 | 0.001022 | 0.001193 | 0.000938 |
| is_noncopyable_test.test | RUN | 0.080102 | 0.213698 | 0.285323 | 0.000978 | 0.001137 | 0.001011 |
| is_member_pointer_test.test | RUN | 0.084121 | 0.217352 | 0.294896 | 0.001006 | 0.001211 | 0.001018 |
| is_member_obj_test.test | RUN | 0.080936 | 0.218275 | 0.297512 | 0.001033 | 0.001152 | 0.000953 |
| is_member_func_test.test | RUN | 0.082795 | 0.233993 | 0.320915 | 0.000954 | 0.001185 | 0.000937 |
| is_lvalue_reference_test.test | RUN | 0.085020 | 0.245914 | 0.355501 | 0.000945 | 0.001079 | 0.001018 |
| is_list_constructible_test.test | RUN | 0.099046 | 0.288114 | 0.385398 | 0.000990 | 0.001333 | 0.001006 |
| is_integral_test.test | RUN | 0.099404 | 0.333798 | 0.549847 | 0.001041 | 0.001253 | 0.000982 |
| is_fundamental_test.test | RUN | 0.102363 | 0.346689 | 0.567611 | 0.001029 | 0.001115 | 0.001017 |
| is_function_test.test | RUN | 0.084061 | 0.233631 | 0.312998 | 0.001008 | 0.001098 | 0.001006 |
| is_floating_point_test.test | RUN | 0.086739 | 0.246722 | 0.352253 | 0.001024 | 0.001192 | 0.001010 |
| is_float_test.test | RUN | 0.084479 | 0.242369 | 0.356706 | 0.001048 | 0.001186 | 0.001025 |
| is_final_test.test | RUN | 0.085737 | 0.260029 | 0.362531 | 0.001031 | 0.001077 | 0.000999 |
| is_enum_test.test | RUN | 0.077134 | 0.208369 | 0.282282 | 0.000892 | 0.000931 | 0.001011 |
| is_empty_test.test | RUN | 0.085648 | 0.230786 | 0.313592 | 0.000985 | 0.001215 | 0.000994 |
| is_detected_test.test | RUN | 0.076072 | 0.202536 | 0.256569 | 0.001042 | 0.001081 | 0.001023 |
| is_detected_exact_test.test | RUN | 0.075185 | 0.195634 | 0.261233 | 0.001011 | 0.001111 | 0.000914 |
| is_destructible_test.test | RUN | 0.109036 | 0.385511 | 0.631662 | 0.001049 | 0.001282 | 0.001024 |
| is_default_constr_test.test | RUN | 0.113435 | 0.397806 | 0.634200 | 0.000903 | 0.001209 | 0.001030 |
| is_copy_constructible_test.test | RUN | 0.115486 | 0.419621 | 0.673245 | 0.001049 | 0.001137 | 0.001056 |
| is_copy_assignable_test.test | RUN | 0.117181 | 0.403893 | 0.676075 | 0.000952 | 0.000997 | 0.000988 |
| is_convertible_test.test | RUN | 0.111526 | 0.365865 | 0.554555 | 0.000980 | 0.001246 | 0.000963 |
| is_constructible_test.test | RUN | 0.093078 | 0.265428 | 0.379808 | 0.001009 | 0.001208 | 0.001055 |
| is_const_test.test | RUN | 0.084196 | 0.234911 | 0.321243 | 0.000975 | 0.001226 | 0.001015 |
| is_compound_test.test | RUN | 0.077099 | 0.204387 | 0.263217 | 0.001063 | 0.001090 | 0.001048 |
| is_complex_test.test | RUN | 0.106413 | 0.263639 | 0.362150 | 0.001012 | 0.001171 | 0.001043 |
| is_complete_test.test | RUN | 0.091420 | 0.275518 | 0.410085 | 0.001059 | 0.001136 | 0.001005 |
| is_class_test.test | RUN | 0.084148 | 0.245524 | 0.344279 | 0.000946 | 0.001198 | 0.000946 |
| is_bounded_array_test.test | RUN | 0.081476 | 0.220339 | 0.299807 | 0.001045 | 0.001192 | 0.001000 |
| is_base_of_test.test | RUN | 0.086658 | 0.237512 | 0.340628 | 0.001077 | 0.001142 | 0.001025 |
| is_base_and_derived_test.test | RUN | 0.085340 | 0.236034 | 0.326842 | 0.000912 | 0.001267 | 0.000958 |
| is_assignable_test.test | RUN | 0.103195 | 0.335546 | 0.534128 | 0.001106 | 0.001101 | 0.000960 |
| is_array_test.test | RUN | 0.082246 | 0.231994 | 0.328245 | 0.001012 | 0.001104 | 0.000980 |
| is_arithmetic_test.test | RUN | 0.101831 | 0.338051 | 0.527755 | 0.001051 | 0.001194 | 0.001016 |
| is_abstract_test.test | RUN | 0.177310 | 0.912057 | 2.038819 | 0.000954 | 0.001536 | 0.001017 |
| integral_constant_test.test | RUN | 0.012084 | 0.032212 | 0.033983 | 0.000466 | 0.000482 | 0.001022 |
| has_virtual_destructor_test.test | RUN | 0.086099 | 0.267008 | 0.378679 | 0.001011 | 0.001247 | 0.001005 |
| has_unary_plus_test.test | RUN | 0.176431 | 0.958666 | 1.490441 | 0.001045 | 0.001126 | 0.001025 |
| has_unary_minus_test.test | RUN | 0.165064 | 0.962522 | 1.410094 | 0.001046 | 0.001233 | 0.001018 |
| has_trivial_move_constructor_test.test | RUN | 0.113686 | 0.406199 | 0.693688 | 0.001024 | 0.001144 | 0.001061 |
| has_trivial_move_assign_test.test | RUN | 0.115757 | 0.403630 | 0.624280 | 0.000965 | 0.001234 | 0.001001 |
| has_trivial_destructor_test.test | RUN | 0.112851 | 0.408706 | 0.672689 | 0.001042 | 0.001122 | 0.001009 |
| has_trivial_copy_test.test | RUN | 0.117205 | 0.429870 | 0.678489 | 0.001046 | 0.001140 | 0.001051 |
| has_trivial_constr_test.test | RUN | 0.118818 | 0.433474 | 0.688118 | 0.001015 | 0.001413 | 0.001086 |
| has_trivial_assign_test.test | RUN | 0.118912 | 0.436215 | 0.667655 | 0.001039 | 0.001177 | 0.001065 |
| has_right_shift_test.test | RUN | 0.172843 | 0.777886 | 1.549856 | 0.001039 | 0.001223 | 0.000912 |
| has_right_shift_assign_test.test | RUN | 0.169049 | 0.722738 | 1.441754 | 0.001008 | 0.001119 | 0.000962 |
| has_prefix_classes3_test.test | RUN | 0.129680 | 0.436902 | 0.697175 | 0.001021 | 0.001186 | 0.001019 |
| has_prefix_classes2_test.test | RUN | 0.128671 | 0.431935 | 0.691260 | 0.000988 | 0.001186 | 0.000995 |
| has_prefix_classes1_test.test | RUN | 0.126797 | 0.437825 | 0.703972 | 0.001135 | 0.001273 | 0.000999 |
| has_prefix_classes0_test.test | RUN | 0.125032 | 0.443575 | 0.700115 | 0.001117 | 0.001131 | 0.000990 |
| has_pre_increment_test.test | RUN | 0.173168 | 0.931338 | 1.447472 | 0.000992 | 0.001155 | 0.000990 |
| has_pre_decrement_test.test | RUN | 0.170293 | 0.927568 | 1.445472 | 0.001051 | 0.001023 | 0.001004 |
| has_postfix_classes3_test.test | RUN | 0.125646 | 0.436487 | 0.702956 | 0.001080 | 0.001382 | 0.001023 |
| has_postfix_classes2_test.test | RUN | 0.121982 | 0.439578 | 0.692776 | 0.001078 | 0.001102 | 0.000992 |
| has_postfix_classes1_test.test | RUN | 0.128051 | 0.439427 | 0.686195 | 0.001064 | 0.001151 | 0.001027 |
| has_postfix_classes0_test.test | RUN | 0.128265 | 0.441365 | 0.721861 | 0.000993 | 0.001156 | 0.001005 |
| has_post_increment_test.test | RUN | 0.168946 | 0.935006 | 1.432820 | 0.001135 | 0.001224 | 0.001021 |
| has_post_decrement_test.test | RUN | 0.171811 | 0.925486 | 1.455182 | 0.001084 | 0.001291 | 0.001033 |
| has_plus_test.test | RUN | 0.170598 | 0.727074 | 1.406203 | 0.001067 | 0.001302 | 0.001065 |
| has_plus_assign_test.test | RUN | 0.181046 | 0.731208 | 1.413924 | 0.001042 | 0.001259 | 0.001040 |
| has_operator_new_test.test | RUN | 0.114632 | 0.383547 | 0.602528 | 0.001034 | 0.001144 | 0.000971 |
| has_nothrow_destructor_test.test | RUN | 0.116801 | 0.420876 | 0.699195 | 0.000980 | 0.001099 | 0.000979 |
| has_nothrow_copy_test.test | RUN | 0.116943 | 0.400642 | 0.654331 | 0.001007 | 0.001273 | 0.000961 |
| has_nothrow_constr_test.test | RUN | 0.111885 | 0.403356 | 0.655691 | 0.000997 | 0.001103 | 0.000985 |
| has_nothrow_assign_test.test | RUN | 0.113285 | 0.399565 | 0.646471 | 0.001017 | 0.001139 | 0.000959 |
| has_not_equal_to_test.test | RUN | 0.171270 | 0.928197 | 1.452970 | 0.001026 | 0.001056 | 0.001070 |
| has_negate_test.test | RUN | 0.166831 | 0.717970 | 1.371065 | 0.001101 | 0.001274 | 0.001001 |
| has_multiplies_test.test | RUN | 0.174936 | 0.725098 | 1.440339 | 0.000994 | 0.001210 | 0.001029 |
| has_multiplies_assign_test.test | RUN | 0.171449 | 0.724824 | 1.425716 | 0.001056 | 0.001122 | 0.000975 |
| has_modulus_test.test | RUN | 0.173579 | 0.732037 | 1.442572 | 0.001033 | 0.001363 | 0.001042 |
| has_modulus_assign_test.test | RUN | 0.172120 | 0.746884 | 1.452349 | 0.001111 | 0.001179 | 0.001015 |
| has_minus_test.test | RUN | 0.178003 | 0.739821 | 1.454147 | 0.000995 | 0.001266 | 0.000800 |
| has_minus_assign_test.test | RUN | 0.180202 | 0.735301 | 1.457339 | 0.001049 | 0.001182 | 0.001003 |
| has_logical_or_test.test | RUN | 0.175975 | 0.745985 | 1.460792 | 0.000974 | 0.001195 | 0.001022 |
| has_logical_not_test.test | RUN | 0.166535 | 0.711018 | 1.403404 | 0.001027 | 0.001102 | 0.001006 |
| has_logical_and_test.test | RUN | 0.175605 | 0.733424 | 1.441443 | 0.000998 | 0.001274 | 0.000998 |
| has_less_test.test | RUN | 0.172973 | 0.925997 | 1.445558 | 0.001028 | 0.001306 | 0.000981 |
| has_less_equal_test.test | RUN | 0.172063 | 0.929258 | 1.457141 | 0.001070 | 0.001248 | 0.001009 |
| has_left_shift_test.test | RUN | 0.191890 | 0.926412 | 1.803028 | 0.001015 | 0.001101 | 0.001021 |
| has_left_shift_assign_test.test | RUN | 0.178379 | 0.725318 | 1.429183 | 0.001023 | 0.001201 | 0.001013 |
| has_greater_test.test | RUN | 0.170561 | 0.931177 | 1.441759 | 0.001060 | 0.001257 | 0.001041 |
| has_greater_equal_test.test | RUN | 0.173113 | 0.924006 | 1.441357 | 0.001095 | 0.001072 | 0.001066 |
| has_equal_to_test.test | RUN | 0.170505 | 0.937361 | 1.413803 | 0.001037 | 0.001157 | 0.001085 |
| has_divides_test.test | RUN | 0.167839 | 0.729303 | 1.439665 | 0.000970 | 0.001311 | 0.000972 |
| has_divides_assign_test.test | RUN | 0.170978 | 0.723771 | 1.424366 | 0.001058 | 0.001295 | 0.000975 |
| has_dereference_test.test | RUN | 0.167836 | 0.717834 | 1.398639 | 0.000995 | 0.001162 | 0.001095 |
| has_complement_test.test | RUN | 0.166628 | 0.926775 | 1.421175 | 0.001057 | 0.001183 | 0.001022 |
| has_bit_xor_test.test | RUN | 0.174052 | 0.731553 | 1.444910 | 0.001028 | 0.001190 | 0.000909 |
| has_bit_xor_assign_test.test | RUN | 0.172577 | 0.721334 | 1.434359 | 0.001079 | 0.001215 | 0.000930 |
| has_bit_or_test.test | RUN | 0.170926 | 0.737511 | 1.439561 | 0.001026 | 0.001213 | 0.001001 |
| has_bit_or_assign_test.test | RUN | 0.171972 | 0.735261 | 1.409811 | 0.001069 | 0.001206 | 0.001042 |
| has_bit_and_test.test | RUN | 0.174661 | 0.722724 | 1.441150 | 0.001045 | 0.001283 | 0.000955 |
| has_bit_and_assign_test.test | RUN | 0.162300 | 0.726638 | 1.434905 | 0.001046 | 0.001177 | 0.000958 |
| has_binary_classes9_test.test | RUN | 0.190539 | 0.870400 | 1.625590 | 0.001010 | 0.001316 | 0.001106 |
| has_binary_classes8_test.test | RUN | 0.182528 | 0.884663 | 1.617181 | 0.001031 | 0.001296 | 0.001050 |
| has_binary_classes7_test.test | RUN | 0.190868 | 0.856875 | 1.628205 | 0.001020 | 0.001126 | 0.000964 |
| has_binary_classes6_test.test | RUN | 0.184044 | 0.833524 | 1.636320 | 0.001120 | 0.001114 | 0.000987 |
| has_binary_classes5_test.test | RUN | 0.187802 | 0.845324 | 1.661442 | 0.001009 | 0.001355 | 0.001053 |
| has_binary_classes4_test.test | RUN | 0.186390 | 0.884556 | 1.635502 | 0.001034 | 0.001186 | 0.001090 |
| has_binary_classes3_test.test | RUN | 0.194129 | 0.873156 | 1.645417 | 0.001031 | 0.001222 | 0.001022 |
| has_binary_classes2_test.test | RUN | 0.189519 | 0.862180 | 1.623362 | 0.001017 | 0.001256 | 0.001027 |
| has_binary_classes1_test.test | RUN | 0.187549 | 0.870235 | 1.632118 | 0.001043 | 0.001308 | 0.000986 |
| has_binary_classes0_test.test | RUN | 0.192620 | 0.880107 | 1.599432 | 0.001011 | 0.001090 | 0.000949 |
| function_traits_test.test | RUN | 0.086439 | 0.235652 | 0.333082 | 0.000872 | 0.001176 | 0.001044 |
| floating_point_promotion_test.test | RUN | 0.081319 | 0.225909 | 0.314048 | 0.001046 | 0.001173 | 0.001007 |
| extent_test.test | RUN | 0.082478 | 0.229131 | 0.325583 | 0.001024 | 0.001178 | 0.001036 |
| enable_if_test.test | RUN | 0.077169 | 0.201677 | 0.253398 | 0.001021 | 0.001134 | 0.001039 |
| disjunction_test.test | RUN | 0.080467 | 0.203881 | 0.265258 | 0.001022 | 0.001232 | 0.000991 |
| detected_test.test | RUN | 0.081826 | 0.196489 | 0.248939 | 0.001035 | 0.001123 | 0.000967 |
| detected_or_test.test | RUN | 0.078298 | 0.206201 | 0.275296 | 0.001007 | 0.001165 | 0.001000 |
| decay_test.test | RUN | 0.214097 | 0.778464 | 1.521590 | 0.001103 | 0.001143 | 0.000993 |
| cxx14_aliases_test.test | RUN | 0.128015 | 0.294786 | 0.423448 | 0.000988 | 0.001105 | 0.000934 |
| copy_reference_test.test | RUN | 0.079944 | 0.200690 | 0.264668 | 0.001025 | 0.001263 | 0.000967 |
| copy_cv_test.test | RUN | 0.082296 | 0.219744 | 0.299728 | 0.001017 | 0.001215 | 0.000948 |
| copy_cv_ref_test.test | RUN | 0.113656 | 0.355751 | 0.619637 | 0.000734 | 0.001066 | 0.000999 |
| conjunction_test.test | RUN | 0.079553 | 0.206365 | 0.274783 | 0.001045 | 0.001091 | 0.001035 |
| conditional_test.test | RUN | 0.078419 | 0.205069 | 0.262859 | 0.000971 | 0.001066 | 0.001005 |
| common_type_test.test | RUN | 0.105010 | 0.314840 | 0.514724 | 0.001035 | 0.001190 | 0.000919 |
| common_type_sfinae_test.test | RUN | 0.076566 | 0.195821 | 0.254052 | 0.001003 | 0.001071 | 0.000987 |
| common_type_sfinae2_test.test | RUN | 0.079208 | 0.203388 | 0.260477 | 0.001017 | 0.001031 | 0.000993 |
| common_type_6_test.test | RUN | 0.082417 | 0.204723 | 0.278455 | 0.000976 | 0.001017 | 0.001005 |
| common_type_5_test.test | RUN | 0.081455 | 0.205927 | 0.283640 | 0.001090 | 0.001189 | 0.001000 |
| common_type_4_test.test | RUN | 0.085117 | 0.223189 | 0.320830 | 0.001012 | 0.001123 | 0.000992 |
| common_type_3_test.test | RUN | 0.076874 | 0.192569 | 0.242890 | 0.000962 | 0.001027 | 0.000985 |
| common_type_2_test.test | RUN | 0.105061 | 0.306611 | 0.514837 | 0.000996 | 0.001162 | 0.000769 |
| alignment_of_test.test | RUN | 0.084850 | 0.242509 | 0.336296 | 0.000988 | 0.001285 | 0.000945 |
| alignment_of_a2_test.test | RUN | 0.084761 | 0.248110 | 0.346650 | 0.001011 | 0.001216 | 0.001025 |
| aligned_storage_test.test | RUN | 0.088054 | 0.244830 | 0.308078 | 0.001016 | 0.001185 | 0.001080 |
| aligned_storage_empy_test.test | RUN | 0.099659 | 0.267466 | 0.412338 | 0.001033 | 0.001202 | 0.000929 |
| aligned_storage_a2_test.test | RUN | 0.086817 | 0.238441 | 0.312517 | 0.001091 | 0.001239 | 0.001031 |
| add_volatile_test.test | RUN | 0.184565 | 0.697102 | 1.458590 | 0.001023 | 0.001164 | 0.001020 |
| add_rvalue_reference_test.test | RUN | 0.207279 | 0.784950 | 1.659075 | 0.001040 | 0.001030 | 0.001011 |
| add_reference_test.test | RUN | 0.206782 | 0.759162 | 1.666364 | 0.001031 | 0.001113 | 0.001016 |
| add_pointer_test.test | RUN | 0.134138 | 0.437185 | 0.892209 | 0.001038 | 0.001151 | 0.001071 |
| add_lvalue_reference_test.test | RUN | 0.206380 | 0.762780 | 1.623219 | 0.000953 | 0.001368 | 0.000968 |
| add_cv_test.test | RUN | 0.195670 | 0.723469 | 1.525489 | 0.001088 | 0.001235 | 0.001020 |
| add_const_test.test | RUN | 0.193563 | 0.726834 | 1.532640 | 0.000958 | 0.001005 | 0.001001 |
| is_virtual_base_of_fail.test | COMPILE_FAIL | 0.074299 | 0.189434 | 0.244924 | — | — | — |
| is_stateless_fail.test | COMPILE_FAIL | 0.077426 | 0.192230 | 0.253332 | — | — | — |
| is_polymorphic_fail.test | COMPILE_FAIL | 0.073354 | 0.180958 | 0.238368 | — | — | — |
| is_nothrow_move_constructible_fail.test | COMPILE_FAIL | 0.076014 | 0.183730 | 0.239983 | — | — | — |
| is_nothrow_move_assignable_fail.test | COMPILE_FAIL | 0.075075 | 0.184294 | 0.239545 | — | — | — |
| is_list_constructible_fail.test | COMPILE_FAIL | 0.072987 | 0.185411 | 0.225964 | — | — | — |
| is_empty_fail.test | COMPILE_FAIL | 0.074427 | 0.187917 | 0.237959 | — | — | — |
| is_destructible_fail.test | COMPILE_FAIL | 0.073504 | 0.180141 | 0.233004 | — | — | — |
| is_default_constructible_fail.test | COMPILE_FAIL | 0.074498 | 0.181946 | 0.237374 | — | — | — |
| is_copy_constructible_fail.test | COMPILE_FAIL | 0.071773 | 0.185086 | 0.240220 | — | — | — |
| is_copy_assignable_fail.test | COMPILE_FAIL | 0.073052 | 0.184800 | 0.235981 | — | — | — |
| is_convertible_fail.test | COMPILE_FAIL | 0.073731 | 0.173562 | 0.232819 | — | — | — |
| is_convertible2_fail.test | COMPILE_FAIL | 0.074561 | 0.183059 | 0.236200 | — | — | — |
| is_constructible_fail.test | COMPILE_FAIL | 0.073221 | 0.182823 | 0.238945 | — | — | — |
| is_base_of_fail.test | COMPILE_FAIL | 0.072105 | 0.181658 | 0.231204 | — | — | — |
| is_assignable_fail.test | COMPILE_FAIL | 0.072005 | 0.183178 | 0.235862 | — | — | — |
| has_nothrow_destruct_fail.test | COMPILE_FAIL | 0.073886 | 0.182262 | 0.238063 | — | — | — |
| has_nothrow_copy_fail.test | COMPILE_FAIL | 0.074297 | 0.185746 | 0.239032 | — | — | — |
| has_nothrow_cons_fail.test | COMPILE_FAIL | 0.072922 | 0.187727 | 0.234842 | — | — | — |
| has_nothrow_assign_fail.test | COMPILE_FAIL | 0.073180 | 0.183300 | 0.236880 | — | — | — |
| common_type_fail.test | COMPILE_FAIL | 0.073873 | 0.178814 | 0.239981 | — | — | — |
| common_type2_fail.test | COMPILE_FAIL | 0.073280 | 0.187998 | 0.236528 | — | — | — |
| has_nothrow_assign_test_no_intrinsics.test | RUN | 0.118336 | 0.396891 | 0.657177 | 0.001136 | 0.001334 | 0.001107 |
| has_nothrow_constr_test_no_intrinsics.test | RUN | 0.112261 | 0.402178 | 0.659627 | 0.001143 | 0.001199 | 0.001074 |
| has_nothrow_copy_test_no_intrinsics.test | RUN | 0.112706 | 0.402293 | 0.668672 | 0.000942 | 0.001168 | 0.000731 |
| is_nothrow_move_assignable_test_no_intrinsics.test | RUN | 0.114958 | 0.394766 | 0.637937 | 0.000745 | 0.000811 | 0.000739 |
| is_nothrow_move_constructible_test_no_intrinsics.test | RUN | 0.073227 | 0.292155 | 0.383288 | 0.000701 | 0.000764 | 0.000721 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.992× | 0.989×, 0.994× | 1.001× |
| clang | 1.026× | 1.027×, 1.026× | 0.999× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1362 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43670794197).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| add_const_test.test | 10 | 0.000771s | 0.000784s | 0.000777s | byte equality observed |
| add_cv_test.test | 10 | 0.000780s | 0.000762s | 0.000785s | byte equality observed |
| add_lvalue_reference_test.test | 10 | 0.000813s | 0.000776s | 0.000781s | byte equality observed |
| add_pointer_test.test | 10 | 0.000797s | 0.000766s | 0.000799s | byte equality observed |
| add_reference_test.test | 10 | 0.000783s | 0.000762s | 0.000791s | byte equality observed |
| add_rvalue_reference_test.test | 10 | 0.000792s | 0.000754s | 0.000803s | byte equality observed |
| add_volatile_test.test | 10 | 0.000803s | 0.000788s | 0.000806s | byte equality observed |
| aligned_storage_a2_test.test | 10 | 0.000815s | 0.000827s | 0.000828s | byte equality observed |
| aligned_storage_empy_test.test | 10 | 0.000783s | 0.000783s | 0.000798s | byte equality observed |
| aligned_storage_test.test | 10 | 0.000824s | 0.000817s | 0.000818s | byte equality observed |
| alignment_of_a2_test.test | 10 | 0.000800s | 0.000788s | 0.000809s | byte equality observed |
| alignment_of_test.test | 10 | 0.000777s | 0.000786s | 0.000802s | byte equality observed |
| common_type_2_test.test | 10 | 0.000772s | 0.000782s | 0.000788s | byte equality observed |
| common_type_3_test.test | 10 | 0.000797s | 0.000778s | 0.000791s | byte equality observed |
| common_type_4_test.test | 10 | 0.000785s | 0.000773s | 0.000791s | byte equality observed |
| common_type_5_test.test | 10 | 0.000794s | 0.000800s | 0.000796s | byte equality observed |
| common_type_6_test.test | 10 | 0.000791s | 0.000788s | 0.000777s | byte equality observed |
| common_type_sfinae2_test.test | 10 | 0.000797s | 0.000792s | 0.000786s | byte equality observed |
| common_type_sfinae_test.test | 10 | 0.000795s | 0.000806s | 0.000789s | byte equality observed |
| common_type_test.test | 10 | 0.000796s | 0.000800s | 0.000782s | byte equality observed |
| conditional_test.test | 10 | 0.000793s | 0.000771s | 0.000787s | byte equality observed |
| conjunction_test.test | 10 | 0.000806s | 0.000786s | 0.000792s | byte equality observed |
| copy_cv_ref_test.test | 10 | 0.000826s | 0.000765s | 0.000796s | byte equality observed |
| copy_cv_test.test | 10 | 0.000809s | 0.000777s | 0.000783s | byte equality observed |
| copy_reference_test.test | 10 | 0.000807s | 0.000764s | 0.000776s | byte equality observed |
| cxx14_aliases_test.test | 10 | 0.000805s | 0.000796s | 0.000793s | byte equality observed |
| decay_test.test | 10 | 0.000800s | 0.000774s | 0.000789s | byte equality observed |
| detected_or_test.test | 10 | 0.000782s | 0.000783s | 0.000760s | byte equality observed |
| detected_test.test | 10 | 0.000795s | 0.000794s | 0.000782s | byte equality observed |
| disjunction_test.test | 10 | 0.000772s | 0.000798s | 0.000790s | byte equality observed |
| enable_if_test.test | 10 | 0.000780s | 0.000758s | 0.000805s | byte equality observed |
| extent_test.test | 10 | 0.000799s | 0.000795s | 0.000814s | byte equality observed |
| floating_point_promotion_test.test | 10 | 0.000793s | 0.000795s | 0.000791s | byte equality observed |
| function_traits_test.test | 10 | 0.000806s | 0.000808s | 0.000780s | byte equality observed |
| has_binary_classes0_test.test | 10 | 0.000809s | 0.000790s | 0.000774s | byte equality observed |
| has_binary_classes1_test.test | 10 | 0.000792s | 0.000772s | 0.000797s | byte equality observed |
| has_binary_classes2_test.test | 10 | 0.000792s | 0.000799s | 0.000817s | byte equality observed |
| has_binary_classes3_test.test | 10 | 0.000787s | 0.000790s | 0.000793s | byte equality observed |
| has_binary_classes4_test.test | 10 | 0.000773s | 0.000798s | 0.000800s | byte equality observed |
| has_binary_classes5_test.test | 10 | 0.000775s | 0.000793s | 0.000805s | byte equality observed |
| has_binary_classes6_test.test | 10 | 0.000804s | 0.000804s | 0.000787s | byte equality observed |
| has_binary_classes7_test.test | 10 | 0.000810s | 0.000775s | 0.000762s | byte equality observed |
| has_binary_classes8_test.test | 10 | 0.000772s | 0.000780s | 0.000778s | byte equality observed |
| has_binary_classes9_test.test | 10 | 0.000790s | 0.000818s | 0.000794s | byte equality observed |
| has_bit_and_assign_test.test | 10 | 0.000801s | 0.000810s | 0.000773s | byte equality observed |
| has_bit_and_test.test | 10 | 0.000789s | 0.000759s | 0.000776s | byte equality observed |
| has_bit_or_assign_test.test | 10 | 0.000789s | 0.000779s | 0.000777s | byte equality observed |
| has_bit_or_test.test | 10 | 0.000774s | 0.000780s | 0.000782s | byte equality observed |
| has_bit_xor_assign_test.test | 10 | 0.000771s | 0.000776s | 0.000777s | byte equality observed |
| has_bit_xor_test.test | 10 | 0.000779s | 0.000809s | 0.000780s | byte equality observed |
| has_complement_test.test | 10 | 0.000781s | 0.000768s | 0.000783s | byte equality observed |
| has_dereference_test.test | 10 | 0.000811s | 0.000782s | 0.000782s | byte equality observed |
| has_divides_assign_test.test | 10 | 0.000798s | 0.000780s | 0.000770s | byte equality observed |
| has_divides_test.test | 10 | 0.000801s | 0.000812s | 0.000796s | byte equality observed |
| has_equal_to_test.test | 10 | 0.000812s | 0.000826s | 0.000741s | byte equality observed |
| has_greater_equal_test.test | 10 | 0.000798s | 0.000798s | 0.000787s | byte equality observed |
| has_greater_test.test | 10 | 0.000793s | 0.000804s | 0.000795s | byte equality observed |
| has_left_shift_assign_test.test | 10 | 0.000813s | 0.000817s | 0.000748s | byte equality observed |
| has_left_shift_test.test | 10 | 0.000798s | 0.000763s | 0.000788s | byte equality observed |
| has_less_equal_test.test | 10 | 0.000808s | 0.000771s | 0.000785s | byte equality observed |
| has_less_test.test | 10 | 0.000798s | 0.000820s | 0.000802s | byte equality observed |
| has_logical_and_test.test | 10 | 0.000809s | 0.000793s | 0.000786s | byte equality observed |
| has_logical_not_test.test | 10 | 0.000809s | 0.000789s | 0.000819s | byte equality observed |
| has_logical_or_test.test | 10 | 0.000800s | 0.000780s | 0.000809s | byte equality observed |
| has_minus_assign_test.test | 10 | 0.000791s | 0.000762s | 0.000820s | byte equality observed |
| has_minus_test.test | 10 | 0.000783s | 0.000791s | 0.000813s | byte equality observed |
| has_modulus_assign_test.test | 10 | 0.000800s | 0.000787s | 0.000815s | byte equality observed |
| has_modulus_test.test | 10 | 0.000802s | 0.000770s | 0.000795s | byte equality observed |
| has_multiplies_assign_test.test | 10 | 0.000799s | 0.000775s | 0.000784s | byte equality observed |
| has_multiplies_test.test | 10 | 0.000796s | 0.000817s | 0.000780s | byte equality observed |
| has_negate_test.test | 10 | 0.000788s | 0.000836s | 0.000769s | byte equality observed |
| has_not_equal_to_test.test | 10 | 0.000799s | 0.000760s | 0.000767s | byte equality observed |
| has_nothrow_assign_test.test | 10 | 0.000786s | 0.000774s | 0.000762s | byte equality observed |
| has_nothrow_assign_test_no_intrinsics.test | 10 | 0.000791s | 0.000796s | 0.000787s | byte equality observed |
| has_nothrow_constr_test.test | 10 | 0.000783s | 0.000795s | 0.000782s | byte equality observed |
| has_nothrow_constr_test_no_intrinsics.test | 10 | 0.000775s | 0.000775s | 0.000781s | byte equality observed |
| has_nothrow_copy_test.test | 10 | 0.000786s | 0.000769s | 0.000783s | byte equality observed |
| has_nothrow_copy_test_no_intrinsics.test | 10 | 0.000781s | 0.000796s | 0.000767s | byte equality observed |
| has_nothrow_destructor_test.test | 10 | 0.000785s | 0.000778s | 0.000784s | byte equality observed |
| has_operator_new_test.test | 10 | 0.000780s | 0.000781s | 0.000777s | byte equality observed |
| has_plus_assign_test.test | 10 | 0.000767s | 0.000786s | 0.000767s | byte equality observed |
| has_plus_test.test | 10 | 0.000768s | 0.000784s | 0.000758s | byte equality observed |
| has_post_decrement_test.test | 10 | 0.000780s | 0.000771s | 0.000787s | byte equality observed |
| has_post_increment_test.test | 10 | 0.000790s | 0.000782s | 0.000806s | byte equality observed |
| has_postfix_classes0_test.test | 10 | 0.000797s | 0.000790s | 0.000804s | byte equality observed |
| has_postfix_classes1_test.test | 10 | 0.000798s | 0.000804s | 0.000809s | byte equality observed |
| has_postfix_classes2_test.test | 10 | 0.000793s | 0.000796s | 0.000799s | byte equality observed |
| has_postfix_classes3_test.test | 10 | 0.000803s | 0.000783s | 0.000785s | byte equality observed |
| has_pre_decrement_test.test | 10 | 0.000794s | 0.000816s | 0.000774s | byte equality observed |
| has_pre_increment_test.test | 10 | 0.000774s | 0.000783s | 0.000794s | byte equality observed |
| has_prefix_classes0_test.test | 10 | 0.000786s | 0.000772s | 0.000792s | byte equality observed |
| has_prefix_classes1_test.test | 10 | 0.000791s | 0.000784s | 0.000774s | byte equality observed |
| has_prefix_classes2_test.test | 10 | 0.000765s | 0.000793s | 0.000784s | byte equality observed |
| has_prefix_classes3_test.test | 10 | 0.000776s | 0.000805s | 0.000798s | byte equality observed |
| has_right_shift_assign_test.test | 10 | 0.000778s | 0.000785s | 0.000795s | byte equality observed |
| has_right_shift_test.test | 10 | 0.000781s | 0.000773s | 0.000792s | byte equality observed |
| has_trivial_assign_test.test | 10 | 0.000803s | 0.000799s | 0.000837s | byte equality observed |
| has_trivial_constr_test.test | 10 | 0.000833s | 0.000807s | 0.000832s | native test oracle; output varies |
| has_trivial_copy_test.test | 10 | 0.000822s | 0.000791s | 0.000827s | native test oracle; output varies |
| has_trivial_destructor_test.test | 10 | 0.000787s | 0.000785s | 0.000772s | byte equality observed |
| has_trivial_move_assign_test.test | 10 | 0.000776s | 0.000790s | 0.000763s | byte equality observed |
| has_trivial_move_constructor_test.test | 10 | 0.000786s | 0.000792s | 0.000792s | byte equality observed |
| has_unary_minus_test.test | 10 | 0.000788s | 0.000799s | 0.000779s | byte equality observed |
| has_unary_plus_test.test | 10 | 0.000786s | 0.000809s | 0.000765s | byte equality observed |
| has_virtual_destructor_test.test | 10 | 0.000785s | 0.000771s | 0.000797s | byte equality observed |
| integral_constant_test.test | 10 | 0.000359s | 0.000366s | 0.000768s | byte equality observed |
| is_abstract_test.test | 10 | 0.000795s | 0.000777s | 0.000784s | byte equality observed |
| is_arithmetic_test.test | 10 | 0.000792s | 0.000795s | 0.000779s | byte equality observed |
| is_array_test.test | 10 | 0.000765s | 0.000776s | 0.000805s | byte equality observed |
| is_assignable_test.test | 10 | 0.000768s | 0.000773s | 0.000799s | byte equality observed |
| is_base_and_derived_test.test | 10 | 0.000772s | 0.000763s | 0.000801s | byte equality observed |
| is_base_of_test.test | 10 | 0.000791s | 0.000772s | 0.000805s | byte equality observed |
| is_bounded_array_test.test | 10 | 0.000788s | 0.000763s | 0.000798s | byte equality observed |
| is_class_test.test | 10 | 0.000772s | 0.000772s | 0.000794s | byte equality observed |
| is_complete_test.test | 10 | 0.000783s | 0.000767s | 0.000776s | byte equality observed |
| is_complex_test.test | 10 | 0.000777s | 0.000778s | 0.000774s | byte equality observed |
| is_compound_test.test | 10 | 0.000773s | 0.000773s | 0.000812s | byte equality observed |
| is_const_test.test | 10 | 0.000782s | 0.000784s | 0.000782s | byte equality observed |
| is_constructible_test.test | 10 | 0.000795s | 0.000752s | 0.000792s | byte equality observed |
| is_convertible_test.test | 10 | 0.000798s | 0.000766s | 0.000790s | byte equality observed |
| is_copy_assignable_test.test | 10 | 0.000811s | 0.000776s | 0.000800s | byte equality observed |
| is_copy_constructible_test.test | 10 | 0.000812s | 0.000781s | 0.000783s | byte equality observed |
| is_default_constr_test.test | 10 | 0.000793s | 0.000791s | 0.000781s | byte equality observed |
| is_destructible_test.test | 10 | 0.000802s | 0.000779s | 0.000800s | byte equality observed |
| is_detected_exact_test.test | 10 | 0.000770s | 0.000762s | 0.000805s | byte equality observed |
| is_detected_test.test | 10 | 0.000774s | 0.000797s | 0.000783s | byte equality observed |
| is_empty_test.test | 10 | 0.000783s | 0.000771s | 0.000788s | byte equality observed |
| is_enum_test.test | 10 | 0.000798s | 0.000762s | 0.000784s | byte equality observed |
| is_final_test.test | 10 | 0.000791s | 0.000763s | 0.000783s | byte equality observed |
| is_float_test.test | 10 | 0.000782s | 0.000768s | 0.000805s | byte equality observed |
| is_floating_point_test.test | 10 | 0.000784s | 0.000781s | 0.000772s | byte equality observed |
| is_function_test.test | 10 | 0.000790s | 0.000812s | 0.000775s | byte equality observed |
| is_fundamental_test.test | 10 | 0.000809s | 0.000806s | 0.000754s | byte equality observed |
| is_integral_test.test | 10 | 0.000809s | 0.000794s | 0.000769s | byte equality observed |
| is_list_constructible_test.test | 10 | 0.000761s | 0.000799s | 0.000776s | byte equality observed |
| is_lvalue_reference_test.test | 10 | 0.000762s | 0.000811s | 0.000759s | byte equality observed |
| is_member_func_test.test | 10 | 0.000763s | 0.000793s | 0.000767s | byte equality observed |
| is_member_obj_test.test | 10 | 0.000775s | 0.000755s | 0.000779s | byte equality observed |
| is_member_pointer_test.test | 10 | 0.000799s | 0.000804s | 0.000785s | byte equality observed |
| is_noncopyable_test.test | 10 | 0.000808s | 0.000776s | 0.000783s | byte equality observed |
| is_nothrow_move_assignable_test.test | 10 | 0.000788s | 0.000781s | 0.000778s | byte equality observed |
| is_nothrow_move_assignable_test_no_intrinsics.test | 10 | 0.000782s | 0.000786s | 0.000784s | byte equality observed |
| is_nothrow_move_constructible_test.test | 10 | 0.000796s | 0.000783s | 0.000783s | byte equality observed |
| is_nothrow_move_constructible_test_no_intrinsics.test | 10 | 0.000813s | 0.000768s | 0.000768s | byte equality observed |
| is_nothrow_swappable_test.test | 10 | 0.000799s | 0.000778s | 0.000786s | byte equality observed |
| is_object_test.test | 10 | 0.000797s | 0.000770s | 0.000804s | byte equality observed |
| is_pod_test.test | 10 | 0.000798s | 0.000771s | 0.000814s | byte equality observed |
| is_pointer_test.test | 10 | 0.000800s | 0.000775s | 0.000808s | byte equality observed |
| is_polymorphic_test.test | 10 | 0.000776s | 0.000771s | 0.000779s | byte equality observed |
| is_reference_test.test | 10 | 0.000755s | 0.000778s | 0.000789s | byte equality observed |
| is_rvalue_reference_test.test | 10 | 0.000770s | 0.000773s | 0.000796s | byte equality observed |
| is_same_test.test | 10 | 0.000769s | 0.000773s | 0.000763s | byte equality observed |
| is_scalar_test.test | 10 | 0.000746s | 0.000775s | 0.000762s | byte equality observed |
| is_scoped_enum_test.test | 10 | 0.000767s | 0.000778s | 0.000801s | byte equality observed |
| is_signed_test.test | 10 | 0.000769s | 0.000813s | 0.000796s | byte equality observed |
| is_stateless_test.test | 10 | 0.000771s | 0.000786s | 0.000787s | byte equality observed |
| is_swappable_test.test | 10 | 0.000777s | 0.000760s | 0.000801s | byte equality observed |
| is_trivially_copyable_test.test | 10 | 0.000802s | 0.000783s | 0.000799s | byte equality observed |
| is_unbounded_array_test.test | 10 | 0.000789s | 0.000786s | 0.000791s | byte equality observed |
| is_union_test.test | 10 | 0.000751s | 0.000767s | 0.000800s | byte equality observed |
| is_unscoped_enum_test.test | 10 | 0.000786s | 0.000774s | 0.000757s | byte equality observed |
| is_unsigned_test.test | 10 | 0.000773s | 0.000766s | 0.000780s | byte equality observed |
| is_virtual_base_of_test.test | 10 | 0.000787s | 0.000779s | 0.000772s | byte equality observed |
| is_void_test.test | 10 | 0.000771s | 0.000784s | 0.000775s | byte equality observed |
| is_volatile_test.test | 10 | 0.000802s | 0.000785s | 0.000760s | byte equality observed |
| make_signed_test.test | 10 | 0.000763s | 0.000809s | 0.000789s | byte equality observed |
| make_unsigned_test.test | 10 | 0.000790s | 0.000770s | 0.000790s | byte equality observed |
| make_void_test.test | 10 | 0.000804s | 0.000771s | 0.000790s | byte equality observed |
| mpl_interop_test1.test | 10 | 0.000359s | 0.000351s | 0.000774s | byte equality observed |
| mpl_interop_test2.test | 10 | 0.000352s | 0.000361s | 0.000770s | byte equality observed |
| mpl_interop_test3.test | 10 | 0.000360s | 0.000363s | 0.000780s | byte equality observed |
| negation_test.test | 10 | 0.000780s | 0.000771s | 0.000772s | byte equality observed |
| promote_basic_test.test | 10 | 0.000360s | 0.000362s | 0.000759s | byte equality observed |
| promote_enum_msvc_bug_test.test | 10 | 0.000361s | 0.000360s | 0.000769s | byte equality observed |
| promote_enum_test.test | 10 | 0.000362s | 0.000360s | 0.000776s | byte equality observed |
| promote_mpl_test.test | 10 | 0.000352s | 0.000356s | 0.000801s | byte equality observed |
| rank_test.test | 10 | 0.000802s | 0.000782s | 0.000766s | byte equality observed |
| remove_all_extents_test.test | 10 | 0.000806s | 0.000793s | 0.000775s | byte equality observed |
| remove_bounds_test.test | 10 | 0.000798s | 0.000777s | 0.000803s | byte equality observed |
| remove_const_test.test | 10 | 0.000818s | 0.000776s | 0.000802s | byte equality observed |
| remove_cv_ref_test.test | 10 | 0.000810s | 0.000804s | 0.000806s | byte equality observed |
| remove_cv_test.test | 10 | 0.000782s | 0.000801s | 0.000806s | byte equality observed |
| remove_extent_test.test | 10 | 0.000777s | 0.000753s | 0.000811s | byte equality observed |
| remove_pointer_test.test | 10 | 0.000784s | 0.000771s | 0.000815s | byte equality observed |
| remove_reference_test.test | 10 | 0.000783s | 0.000773s | 0.000811s | byte equality observed |
| remove_volatile_test.test | 10 | 0.000786s | 0.000784s | 0.000779s | byte equality observed |
| tricky_abstract_type_test.test | 10 | 0.000771s | 0.000780s | 0.000784s | byte equality observed |
| tricky_add_pointer_test.test | 10 | 0.000779s | 0.000802s | 0.000810s | byte equality observed |
| tricky_function_type_test.test | 10 | 0.000781s | 0.000814s | 0.000771s | byte equality observed |
| tricky_incomplete_type_test.test | 10 | 0.000796s | 0.000770s | 0.000772s | byte equality observed |
| tricky_is_enum_test.test | 10 | 0.000804s | 0.000794s | 0.000762s | byte equality observed |
| tricky_partial_spec_test.test | 10 | 0.000784s | 0.000773s | 0.000790s | byte equality observed |
| tricky_rvalue_test.test | 10 | 0.000772s | 0.000768s | 0.000773s | byte equality observed |
| type_identity_test.test | 10 | 0.000794s | 0.000771s | 0.000783s | byte equality observed |
| type_traits_test.test | 10 | 0.000362s | 0.000361s | 0.000793s | byte equality observed |
| type_with_alignment_test.test | 10 | 0.000833s | 0.000845s | 0.000812s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43670794197).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
