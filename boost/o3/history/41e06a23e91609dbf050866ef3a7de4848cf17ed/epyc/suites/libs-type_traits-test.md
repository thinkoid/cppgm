# libs/type_traits/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| type_with_alignment_test.test | RUN | 0.160482 | 0.442829 | 0.741628 | 0.001850 | 0.001922 | 0.002245 |
| type_traits_test.test | RUN | 0.225313 | 0.458721 | 0.812007 | 0.000676 | 0.000755 | 0.001890 |
| type_identity_test.test | RUN | 0.443458 | 1.708764 | 4.463681 | 0.001894 | 0.001910 | 0.001898 |
| tricky_rvalue_test.test | RUN | 0.144436 | 0.351925 | 0.597383 | 0.001938 | 0.001930 | 0.001914 |
| tricky_partial_spec_test.test | RUN | 0.184699 | 0.515687 | 0.943490 | 0.001776 | 0.001910 | 0.002042 |
| tricky_is_enum_test.test | RUN | 0.138047 | 0.324780 | 0.547462 | 0.001737 | 0.001956 | 0.002053 |
| tricky_incomplete_type_test.test | RUN | 0.237409 | 0.523745 | 0.965351 | 0.001967 | 0.001982 | 0.002008 |
| tricky_function_type_test.test | RUN | 0.189564 | 0.550237 | 1.051279 | 0.001820 | 0.001836 | 0.001636 |
| tricky_add_pointer_test.test | RUN | 0.293149 | 1.015003 | 2.520299 | 0.001936 | 0.002070 | 0.001974 |
| tricky_abstract_type_test.test | RUN | 0.150401 | 0.359480 | 0.563706 | 0.001633 | 0.001730 | 0.002021 |
| remove_volatile_test.test | RUN | 0.400074 | 1.433539 | 3.890481 | 0.001880 | 0.001919 | 0.001979 |
| remove_reference_test.test | RUN | 0.419574 | 1.519990 | 4.106673 | 0.001814 | 0.002070 | 0.002066 |
| remove_pointer_test.test | RUN | 0.438280 | 1.603301 | 4.358792 | 0.001861 | 0.001960 | 0.001994 |
| remove_extent_test.test | RUN | 0.408034 | 1.516769 | 4.095385 | 0.001950 | 0.002097 | 0.002025 |
| remove_cv_test.test | RUN | 0.419272 | 1.510345 | 4.109328 | 0.002027 | 0.002082 | 0.002064 |
| remove_cv_ref_test.test | RUN | 0.884073 | 3.650824 | 10.191994 | 0.001898 | 0.001742 | 0.002124 |
| remove_const_test.test | RUN | 0.401304 | 1.451993 | 3.866335 | 0.001485 | 0.002142 | 0.001965 |
| remove_bounds_test.test | RUN | 0.419907 | 1.547893 | 4.098406 | 0.001941 | 0.001820 | 0.001954 |
| remove_all_extents_test.test | RUN | 0.417709 | 1.528190 | 3.936251 | 0.001645 | 0.001740 | 0.001662 |
| rank_test.test | RUN | 0.151114 | 0.345121 | 0.566665 | 0.001754 | 0.001972 | 0.001760 |
| promote_mpl_test.test | RUN | 0.127375 | 0.323424 | 0.377556 | 0.000755 | 0.000827 | 0.001947 |
| promote_enum_test.test | RUN | 0.030399 | 0.079872 | 0.088482 | 0.000733 | 0.000896 | 0.001822 |
| promote_enum_msvc_bug_test.test | RUN | 0.026415 | 0.069291 | 0.065225 | 0.000712 | 0.000781 | 0.001471 |
| promote_basic_test.test | RUN | 0.034053 | 0.086052 | 0.105343 | 0.000683 | 0.000692 | 0.002150 |
| negation_test.test | RUN | 0.142577 | 0.324734 | 0.552631 | 0.001799 | 0.001693 | 0.002012 |
| mpl_interop_test3.test | RUN | 0.120721 | 0.297137 | 0.382668 | 0.000717 | 0.000903 | 0.001957 |
| mpl_interop_test2.test | RUN | 0.043256 | 0.082018 | 0.098925 | 0.000617 | 0.000767 | 0.001614 |
| mpl_interop_test1.test | RUN | 0.021462 | 0.060789 | 0.069868 | 0.000754 | 0.000649 | 0.002004 |
| make_void_test.test | RUN | 0.150030 | 0.360454 | 0.615557 | 0.001744 | 0.002098 | 0.002012 |
| make_unsigned_test.test | RUN | 0.166370 | 0.479045 | 0.828047 | 0.001472 | 0.001956 | 0.001979 |
| make_signed_test.test | RUN | 0.166284 | 0.473383 | 0.867032 | 0.001646 | 0.001606 | 0.001922 |
| is_volatile_test.test | RUN | 0.155414 | 0.406059 | 0.664911 | 0.001788 | 0.001737 | 0.001368 |
| is_void_test.test | RUN | 0.149641 | 0.374715 | 0.654818 | 0.001737 | 0.002086 | 0.001972 |
| is_virtual_base_of_test.test | RUN | 0.175742 | 0.482664 | 0.871361 | 0.001692 | 0.001917 | 0.002044 |
| is_unsigned_test.test | RUN | 0.153347 | 0.379969 | 0.668283 | 0.001858 | 0.001768 | 0.001957 |
| is_unscoped_enum_test.test | RUN | 0.150144 | 0.351896 | 0.521670 | 0.001708 | 0.001976 | 0.001830 |
| is_union_test.test | RUN | 0.164292 | 0.436465 | 0.788477 | 0.001697 | 0.002112 | 0.002106 |
| is_unbounded_array_test.test | RUN | 0.150233 | 0.373182 | 0.607671 | 0.001776 | 0.002120 | 0.001926 |
| is_trivially_copyable_test.test | RUN | 0.246824 | 0.800370 | 1.659658 | 0.001640 | 0.001922 | 0.001674 |
| is_swappable_test.test | RUN | 0.203704 | 0.583862 | 1.197133 | 0.001802 | 0.001960 | 0.001917 |
| is_stateless_test.test | RUN | 0.231130 | 0.692282 | 1.420167 | 0.001752 | 0.001784 | 0.002000 |
| is_signed_test.test | RUN | 0.153929 | 0.379232 | 0.669261 | 0.001815 | 0.001998 | 0.001399 |
| is_scoped_enum_test.test | RUN | 0.149943 | 0.338872 | 0.575741 | 0.001903 | 0.002119 | 0.001980 |
| is_scalar_test.test | RUN | 0.200698 | 0.624073 | 1.254040 | 0.001722 | 0.001819 | 0.001852 |
| is_same_test.test | RUN | 0.149324 | 0.371285 | 0.626663 | 0.001770 | 0.001854 | 0.002017 |
| is_rvalue_reference_test.test | RUN | 0.157567 | 0.432736 | 0.711868 | 0.001714 | 0.001763 | 0.001861 |
| is_reference_test.test | RUN | 0.160594 | 0.425566 | 0.724688 | 0.001780 | 0.001860 | 0.001967 |
| is_polymorphic_test.test | RUN | 0.166439 | 0.446924 | 0.796215 | 0.001644 | 0.001884 | 0.002400 |
| is_pointer_test.test | RUN | 0.160522 | 0.440269 | 0.744452 | 0.001814 | 0.002071 | 0.001955 |
| is_pod_test.test | RUN | 0.209786 | 0.717881 | 1.411333 | 0.001682 | 0.002245 | 0.002012 |
| is_object_test.test | RUN | 0.148636 | 0.374108 | 0.589466 | 0.001883 | 0.001913 | 0.002027 |
| is_nothrow_swappable_test.test | RUN | 0.221668 | 0.654974 | 1.292249 | 0.001674 | 0.001913 | 0.001723 |
| is_nothrow_move_constructible_test.test | RUN | 0.213597 | 0.697402 | 1.374406 | 0.001804 | 0.001883 | 0.001955 |
| is_nothrow_move_assignable_test.test | RUN | 0.213752 | 0.695681 | 1.413665 | 0.001938 | 0.002102 | 0.001974 |
| is_noncopyable_test.test | RUN | 0.149280 | 0.359197 | 0.605430 | 0.001720 | 0.001728 | 0.001986 |
| is_member_pointer_test.test | RUN | 0.150478 | 0.365925 | 0.619119 | 0.001595 | 0.002042 | 0.001939 |
| is_member_obj_test.test | RUN | 0.151702 | 0.376293 | 0.611450 | 0.001962 | 0.002078 | 0.001677 |
| is_member_func_test.test | RUN | 0.153244 | 0.409260 | 0.674024 | 0.001784 | 0.002055 | 0.001818 |
| is_lvalue_reference_test.test | RUN | 0.160826 | 0.418019 | 0.766503 | 0.001854 | 0.002026 | 0.002066 |
| is_list_constructible_test.test | RUN | 0.183076 | 0.494793 | 0.822800 | 0.001818 | 0.001730 | 0.001988 |
| is_integral_test.test | RUN | 0.191835 | 0.573962 | 1.164673 | 0.001862 | 0.001994 | 0.001898 |
| is_fundamental_test.test | RUN | 0.194086 | 0.628404 | 1.218776 | 0.001694 | 0.001936 | 0.001928 |
| is_function_test.test | RUN | 0.158577 | 0.406429 | 0.639672 | 0.001714 | 0.001966 | 0.001822 |
| is_floating_point_test.test | RUN | 0.157243 | 0.422249 | 0.747304 | 0.001886 | 0.002092 | 0.002052 |
| is_float_test.test | RUN | 0.158495 | 0.428730 | 0.740570 | 0.001870 | 0.002151 | 0.001866 |
| is_final_test.test | RUN | 0.157758 | 0.430955 | 0.773281 | 0.001667 | 0.001876 | 0.001592 |
| is_enum_test.test | RUN | 0.144568 | 0.369625 | 0.615001 | 0.001818 | 0.001770 | 0.001935 |
| is_empty_test.test | RUN | 0.155210 | 0.390576 | 0.665818 | 0.001824 | 0.001768 | 0.001948 |
| is_detected_test.test | RUN | 0.143245 | 0.346713 | 0.509011 | 0.001813 | 0.002006 | 0.001821 |
| is_detected_exact_test.test | RUN | 0.141686 | 0.325778 | 0.551073 | 0.001754 | 0.001742 | 0.002106 |
| is_destructible_test.test | RUN | 0.209382 | 0.673772 | 1.365579 | 0.001737 | 0.002088 | 0.002016 |
| is_default_constr_test.test | RUN | 0.218549 | 0.704007 | 1.394044 | 0.001930 | 0.001752 | 0.002016 |
| is_copy_constructible_test.test | RUN | 0.225254 | 0.735577 | 1.465326 | 0.001806 | 0.001916 | 0.002005 |
| is_copy_assignable_test.test | RUN | 0.220303 | 0.722995 | 1.490060 | 0.001825 | 0.001755 | 0.001962 |
| is_convertible_test.test | RUN | 0.216861 | 0.636917 | 1.243566 | 0.001933 | 0.001964 | 0.001441 |
| is_constructible_test.test | RUN | 0.167623 | 0.453712 | 0.802796 | 0.001740 | 0.001978 | 0.001845 |
| is_const_test.test | RUN | 0.154723 | 0.402909 | 0.679694 | 0.001863 | 0.001744 | 0.001758 |
| is_compound_test.test | RUN | 0.145267 | 0.341752 | 0.532575 | 0.001586 | 0.001367 | 0.001892 |
| is_complex_test.test | RUN | 0.193461 | 0.449209 | 0.783850 | 0.001774 | 0.002138 | 0.001717 |
| is_complete_test.test | RUN | 0.172034 | 0.478081 | 0.868569 | 0.001800 | 0.001889 | 0.001754 |
| is_class_test.test | RUN | 0.148510 | 0.420792 | 0.716572 | 0.001916 | 0.001806 | 0.002107 |
| is_bounded_array_test.test | RUN | 0.154732 | 0.375289 | 0.651291 | 0.001881 | 0.001688 | 0.001608 |
| is_base_of_test.test | RUN | 0.161487 | 0.412003 | 0.730993 | 0.001860 | 0.002029 | 0.002014 |
| is_base_and_derived_test.test | RUN | 0.160890 | 0.407282 | 0.727693 | 0.001807 | 0.001757 | 0.001744 |
| is_assignable_test.test | RUN | 0.193510 | 0.585432 | 1.129265 | 0.001678 | 0.001921 | 0.001797 |
| is_array_test.test | RUN | 0.153033 | 0.393928 | 0.671917 | 0.001736 | 0.001961 | 0.001610 |
| is_arithmetic_test.test | RUN | 0.191193 | 0.600550 | 1.175469 | 0.001643 | 0.002043 | 0.001923 |
| is_abstract_test.test | RUN | 0.356568 | 1.598192 | 3.745848 | 0.001652 | 0.001938 | 0.002074 |
| integral_constant_test.test | RUN | 0.020864 | 0.065747 | 0.068566 | 0.000776 | 0.000901 | 0.002055 |
| has_virtual_destructor_test.test | RUN | 0.165030 | 0.473810 | 0.864623 | 0.001702 | 0.002210 | 0.001942 |
| has_unary_plus_test.test | RUN | 0.330567 | 1.790175 | 2.933049 | 0.001986 | 0.002076 | 0.002045 |
| has_unary_minus_test.test | RUN | 0.326706 | 1.842419 | 2.930656 | 0.001678 | 0.001893 | 0.001846 |
| has_trivial_move_constructor_test.test | RUN | 0.224189 | 0.707106 | 1.438704 | 0.001856 | 0.001888 | 0.001936 |
| has_trivial_move_assign_test.test | RUN | 0.226005 | 0.650924 | 1.218898 | 0.001782 | 0.001788 | 0.001839 |
| has_trivial_destructor_test.test | RUN | 0.215756 | 0.649477 | 1.440225 | 0.001914 | 0.001742 | 0.001973 |
| has_trivial_copy_test.test | RUN | 0.225607 | 0.740818 | 1.418583 | 0.002102 | 0.001991 | 0.002050 |
| has_trivial_constr_test.test | RUN | 0.224540 | 0.734259 | 1.511139 | 0.001691 | 0.001970 | 0.001710 |
| has_trivial_assign_test.test | RUN | 0.226021 | 0.736094 | 1.484669 | 0.002080 | 0.002038 | 0.001686 |
| has_right_shift_test.test | RUN | 0.346761 | 1.361195 | 3.160768 | 0.001692 | 0.002008 | 0.001746 |
| has_right_shift_assign_test.test | RUN | 0.320037 | 1.333711 | 2.915685 | 0.001756 | 0.001912 | 0.001746 |
| has_prefix_classes3_test.test | RUN | 0.230560 | 0.769306 | 1.500752 | 0.001739 | 0.001743 | 0.001934 |
| has_prefix_classes2_test.test | RUN | 0.239183 | 0.721046 | 1.519085 | 0.001754 | 0.001977 | 0.001971 |
| has_prefix_classes1_test.test | RUN | 0.237246 | 0.764223 | 1.545893 | 0.001693 | 0.001915 | 0.001611 |
| has_prefix_classes0_test.test | RUN | 0.237100 | 0.746351 | 1.506572 | 0.001866 | 0.002065 | 0.001533 |
| has_pre_increment_test.test | RUN | 0.324010 | 1.826852 | 2.948427 | 0.001941 | 0.001694 | 0.001638 |
| has_pre_decrement_test.test | RUN | 0.325713 | 1.797912 | 2.874318 | 0.001572 | 0.001890 | 0.001646 |
| has_postfix_classes3_test.test | RUN | 0.234515 | 0.766021 | 1.512265 | 0.001396 | 0.001854 | 0.001811 |
| has_postfix_classes2_test.test | RUN | 0.238901 | 0.753860 | 1.522554 | 0.001842 | 0.001873 | 0.001752 |
| has_postfix_classes1_test.test | RUN | 0.235601 | 0.760858 | 1.547716 | 0.001916 | 0.001964 | 0.001707 |
| has_postfix_classes0_test.test | RUN | 0.236506 | 0.760043 | 1.535544 | 0.001533 | 0.002173 | 0.001582 |
| has_post_increment_test.test | RUN | 0.326638 | 1.820153 | 2.945539 | 0.001716 | 0.001994 | 0.001807 |
| has_post_decrement_test.test | RUN | 0.321609 | 1.814285 | 2.976501 | 0.001824 | 0.001550 | 0.001836 |
| has_plus_test.test | RUN | 0.321388 | 1.323308 | 2.964701 | 0.001871 | 0.001888 | 0.001696 |
| has_plus_assign_test.test | RUN | 0.329986 | 1.299298 | 2.977456 | 0.001786 | 0.002152 | 0.001761 |
| has_operator_new_test.test | RUN | 0.215257 | 0.685962 | 1.383731 | 0.001772 | 0.001796 | 0.001926 |
| has_nothrow_destructor_test.test | RUN | 0.225715 | 0.725481 | 1.509955 | 0.001810 | 0.001870 | 0.001692 |
| has_nothrow_copy_test.test | RUN | 0.217888 | 0.729021 | 1.434469 | 0.001583 | 0.001844 | 0.001696 |
| has_nothrow_constr_test.test | RUN | 0.205947 | 0.695272 | 1.407442 | 0.001793 | 0.002102 | 0.001908 |
| has_nothrow_assign_test.test | RUN | 0.210691 | 0.687370 | 1.378546 | 0.002057 | 0.002100 | 0.001822 |
| has_not_equal_to_test.test | RUN | 0.336015 | 1.835190 | 3.016169 | 0.001984 | 0.001942 | 0.001928 |
| has_negate_test.test | RUN | 0.322793 | 1.261138 | 2.834529 | 0.001950 | 0.001818 | 0.001658 |
| has_multiplies_test.test | RUN | 0.318945 | 1.272015 | 2.930584 | 0.001649 | 0.002116 | 0.001858 |
| has_multiplies_assign_test.test | RUN | 0.331728 | 1.235983 | 2.911337 | 0.001876 | 0.002341 | 0.002028 |
| has_modulus_test.test | RUN | 0.329506 | 1.303072 | 2.902899 | 0.001826 | 0.001838 | 0.001894 |
| has_modulus_assign_test.test | RUN | 0.329193 | 1.286052 | 2.966513 | 0.001708 | 0.002096 | 0.001890 |
| has_minus_test.test | RUN | 0.338277 | 1.304076 | 2.970519 | 0.001992 | 0.002098 | 0.001776 |
| has_minus_assign_test.test | RUN | 0.343563 | 1.286233 | 2.946028 | 0.001906 | 0.002130 | 0.001690 |
| has_logical_or_test.test | RUN | 0.330469 | 1.380657 | 2.992343 | 0.001823 | 0.001872 | 0.001996 |
| has_logical_not_test.test | RUN | 0.314380 | 1.323830 | 2.871799 | 0.001745 | 0.001931 | 0.002076 |
| has_logical_and_test.test | RUN | 0.329978 | 1.318367 | 2.975497 | 0.001657 | 0.002130 | 0.001854 |
| has_less_test.test | RUN | 0.329010 | 1.828405 | 2.939304 | 0.001874 | 0.001989 | 0.001832 |
| has_less_equal_test.test | RUN | 0.334658 | 1.743559 | 2.959943 | 0.001853 | 0.002049 | 0.001970 |
| has_left_shift_test.test | RUN | 0.359424 | 1.610360 | 3.684476 | 0.001550 | 0.001696 | 0.002022 |
| has_left_shift_assign_test.test | RUN | 0.325298 | 1.258132 | 2.949307 | 0.001698 | 0.001659 | 0.001717 |
| has_greater_test.test | RUN | 0.329103 | 1.763328 | 2.984279 | 0.001886 | 0.002004 | 0.002019 |
| has_greater_equal_test.test | RUN | 0.333587 | 1.757057 | 2.919172 | 0.001854 | 0.001938 | 0.001922 |
| has_equal_to_test.test | RUN | 0.333199 | 1.752331 | 2.985339 | 0.001706 | 0.002191 | 0.001808 |
| has_divides_test.test | RUN | 0.321120 | 1.229194 | 2.958614 | 0.001553 | 0.002059 | 0.002017 |
| has_divides_assign_test.test | RUN | 0.332200 | 1.313229 | 2.915663 | 0.001910 | 0.002166 | 0.001958 |
| has_dereference_test.test | RUN | 0.322949 | 1.319629 | 2.857115 | 0.001908 | 0.001902 | 0.001925 |
| has_complement_test.test | RUN | 0.329736 | 1.825463 | 2.962938 | 0.001670 | 0.001908 | 0.001837 |
| has_bit_xor_test.test | RUN | 0.321079 | 1.248702 | 2.954650 | 0.001613 | 0.001762 | 0.001888 |
| has_bit_xor_assign_test.test | RUN | 0.333858 | 1.300982 | 2.906418 | 0.001936 | 0.002116 | 0.001990 |
| has_bit_or_test.test | RUN | 0.329204 | 1.289846 | 2.965527 | 0.001880 | 0.002040 | 0.001915 |
| has_bit_or_assign_test.test | RUN | 0.328919 | 1.228929 | 2.878174 | 0.001576 | 0.002094 | 0.002010 |
| has_bit_and_test.test | RUN | 0.322500 | 1.308329 | 2.938212 | 0.001971 | 0.001786 | 0.002033 |
| has_bit_and_assign_test.test | RUN | 0.328518 | 1.310690 | 2.914615 | 0.001837 | 0.001958 | 0.002013 |
| has_binary_classes9_test.test | RUN | 0.363637 | 1.470606 | 3.256614 | 0.001998 | 0.001885 | 0.001995 |
| has_binary_classes8_test.test | RUN | 0.363409 | 1.486365 | 3.181873 | 0.001500 | 0.002078 | 0.001878 |
| has_binary_classes7_test.test | RUN | 0.352289 | 1.490475 | 3.234771 | 0.001903 | 0.001679 | 0.002010 |
| has_binary_classes6_test.test | RUN | 0.361403 | 1.420494 | 3.236783 | 0.001918 | 0.001906 | 0.001936 |
| has_binary_classes5_test.test | RUN | 0.357782 | 1.475088 | 3.249123 | 0.001930 | 0.001876 | 0.001940 |
| has_binary_classes4_test.test | RUN | 0.357940 | 1.486616 | 3.248595 | 0.001857 | 0.002034 | 0.001976 |
| has_binary_classes3_test.test | RUN | 0.360118 | 1.492746 | 3.274743 | 0.001699 | 0.001775 | 0.001918 |
| has_binary_classes2_test.test | RUN | 0.367430 | 1.484682 | 3.077762 | 0.001867 | 0.001934 | 0.001872 |
| has_binary_classes1_test.test | RUN | 0.357368 | 1.488460 | 3.202086 | 0.001840 | 0.001938 | 0.001760 |
| has_binary_classes0_test.test | RUN | 0.360439 | 1.515953 | 3.198273 | 0.001851 | 0.001742 | 0.002078 |
| function_traits_test.test | RUN | 0.153229 | 0.396955 | 0.705373 | 0.001618 | 0.001851 | 0.002008 |
| floating_point_promotion_test.test | RUN | 0.150948 | 0.388360 | 0.653707 | 0.001810 | 0.001724 | 0.001851 |
| extent_test.test | RUN | 0.152674 | 0.379604 | 0.715538 | 0.001537 | 0.002014 | 0.001976 |
| enable_if_test.test | RUN | 0.141632 | 0.331965 | 0.463730 | 0.001638 | 0.001789 | 0.001816 |
| disjunction_test.test | RUN | 0.142984 | 0.352171 | 0.546035 | 0.001904 | 0.002066 | 0.001692 |
| detected_test.test | RUN | 0.142633 | 0.329141 | 0.538635 | 0.001876 | 0.001989 | 0.001829 |
| detected_or_test.test | RUN | 0.144573 | 0.335752 | 0.565380 | 0.001742 | 0.002102 | 0.001768 |
| decay_test.test | RUN | 0.398203 | 1.475837 | 3.539701 | 0.001909 | 0.001800 | 0.001669 |
| cxx14_aliases_test.test | RUN | 0.241062 | 0.516297 | 0.919963 | 0.001783 | 0.002086 | 0.001816 |
| copy_reference_test.test | RUN | 0.147647 | 0.363785 | 0.574195 | 0.001800 | 0.001973 | 0.001837 |
| copy_cv_test.test | RUN | 0.154760 | 0.356091 | 0.650494 | 0.001807 | 0.002095 | 0.002018 |
| copy_cv_ref_test.test | RUN | 0.221302 | 0.653694 | 1.406666 | 0.001984 | 0.001734 | 0.001663 |
| conjunction_test.test | RUN | 0.144189 | 0.348036 | 0.570832 | 0.001537 | 0.001891 | 0.001976 |
| conditional_test.test | RUN | 0.145734 | 0.346683 | 0.571865 | 0.001788 | 0.001808 | 0.001950 |
| common_type_test.test | RUN | 0.193678 | 0.552464 | 1.147855 | 0.001798 | 0.001581 | 0.001949 |
| common_type_sfinae_test.test | RUN | 0.143130 | 0.321394 | 0.505969 | 0.001627 | 0.001708 | 0.001978 |
| common_type_sfinae2_test.test | RUN | 0.147394 | 0.359579 | 0.556059 | 0.001886 | 0.001598 | 0.001642 |
| common_type_6_test.test | RUN | 0.151934 | 0.355065 | 0.601706 | 0.001729 | 0.002002 | 0.002061 |
| common_type_5_test.test | RUN | 0.153109 | 0.350825 | 0.577056 | 0.001863 | 0.002118 | 0.002073 |
| common_type_4_test.test | RUN | 0.153278 | 0.364704 | 0.677089 | 0.001700 | 0.001767 | 0.001417 |
| common_type_3_test.test | RUN | 0.136859 | 0.298831 | 0.532993 | 0.001778 | 0.001778 | 0.001804 |
| common_type_2_test.test | RUN | 0.197951 | 0.545211 | 1.094181 | 0.001722 | 0.002098 | 0.001779 |
| alignment_of_test.test | RUN | 0.156912 | 0.422041 | 0.690511 | 0.001692 | 0.001930 | 0.001695 |
| alignment_of_a2_test.test | RUN | 0.156008 | 0.421300 | 0.714528 | 0.001881 | 0.001728 | 0.001797 |
| aligned_storage_test.test | RUN | 0.158922 | 0.394944 | 0.635370 | 0.001744 | 0.001734 | 0.002025 |
| aligned_storage_empy_test.test | RUN | 0.185647 | 0.467088 | 0.838066 | 0.001608 | 0.002052 | 0.001967 |
| aligned_storage_a2_test.test | RUN | 0.163524 | 0.396033 | 0.645331 | 0.002094 | 0.002276 | 0.001932 |
| add_volatile_test.test | RUN | 0.357989 | 1.270104 | 3.289600 | 0.001822 | 0.001962 | 0.002034 |
| add_rvalue_reference_test.test | RUN | 0.407537 | 1.441542 | 3.764158 | 0.001950 | 0.001968 | 0.002007 |
| add_reference_test.test | RUN | 0.387170 | 1.425083 | 3.710810 | 0.001815 | 0.002190 | 0.002057 |
| add_pointer_test.test | RUN | 0.254212 | 0.771407 | 1.920779 | 0.001708 | 0.001921 | 0.002072 |
| add_lvalue_reference_test.test | RUN | 0.382576 | 1.458300 | 3.788311 | 0.001901 | 0.002114 | 0.002188 |
| add_cv_test.test | RUN | 0.370686 | 1.282357 | 3.426533 | 0.001713 | 0.002042 | 0.001782 |
| add_const_test.test | RUN | 0.365320 | 1.290015 | 3.484659 | 0.001628 | 0.001596 | 0.001666 |
| is_virtual_base_of_fail.test | COMPILE_FAIL | 0.141687 | 0.325477 | 0.524360 | — | — | — |
| is_stateless_fail.test | COMPILE_FAIL | 0.141160 | 0.329186 | 0.526645 | — | — | — |
| is_polymorphic_fail.test | COMPILE_FAIL | 0.131724 | 0.305662 | 0.499971 | — | — | — |
| is_nothrow_move_constructible_fail.test | COMPILE_FAIL | 0.134851 | 0.304359 | 0.485181 | — | — | — |
| is_nothrow_move_assignable_fail.test | COMPILE_FAIL | 0.133184 | 0.321256 | 0.524759 | — | — | — |
| is_list_constructible_fail.test | COMPILE_FAIL | 0.132529 | 0.304725 | 0.518104 | — | — | — |
| is_empty_fail.test | COMPILE_FAIL | 0.137825 | 0.323266 | 0.483318 | — | — | — |
| is_destructible_fail.test | COMPILE_FAIL | 0.132335 | 0.306774 | 0.511283 | — | — | — |
| is_default_constructible_fail.test | COMPILE_FAIL | 0.134472 | 0.317909 | 0.499504 | — | — | — |
| is_copy_constructible_fail.test | COMPILE_FAIL | 0.133598 | 0.310251 | 0.521529 | — | — | — |
| is_copy_assignable_fail.test | COMPILE_FAIL | 0.134643 | 0.322833 | 0.514597 | — | — | — |
| is_convertible_fail.test | COMPILE_FAIL | 0.135914 | 0.308166 | 0.494636 | — | — | — |
| is_convertible2_fail.test | COMPILE_FAIL | 0.135582 | 0.321489 | 0.503709 | — | — | — |
| is_constructible_fail.test | COMPILE_FAIL | 0.132837 | 0.308929 | 0.508910 | — | — | — |
| is_base_of_fail.test | COMPILE_FAIL | 0.134673 | 0.317999 | 0.498785 | — | — | — |
| is_assignable_fail.test | COMPILE_FAIL | 0.134704 | 0.307499 | 0.500635 | — | — | — |
| has_nothrow_destruct_fail.test | COMPILE_FAIL | 0.133138 | 0.311392 | 0.517146 | — | — | — |
| has_nothrow_copy_fail.test | COMPILE_FAIL | 0.133154 | 0.323589 | 0.523266 | — | — | — |
| has_nothrow_cons_fail.test | COMPILE_FAIL | 0.135361 | 0.323624 | 0.507989 | — | — | — |
| has_nothrow_assign_fail.test | COMPILE_FAIL | 0.134738 | 0.310634 | 0.496789 | — | — | — |
| common_type_fail.test | COMPILE_FAIL | 0.133638 | 0.311092 | 0.506998 | — | — | — |
| common_type2_fail.test | COMPILE_FAIL | 0.134703 | 0.315586 | 0.512169 | — | — | — |
| has_nothrow_assign_test_no_intrinsics.test | RUN | 0.218059 | 0.710970 | 1.453782 | 0.001706 | 0.001914 | 0.001970 |
| has_nothrow_constr_test_no_intrinsics.test | RUN | 0.206434 | 0.690237 | 1.390231 | 0.001706 | 0.001636 | 0.001608 |
| has_nothrow_copy_test_no_intrinsics.test | RUN | 0.207761 | 0.705878 | 1.454973 | 0.001563 | 0.001750 | 0.001417 |
| is_nothrow_move_assignable_test_no_intrinsics.test | RUN | 0.213363 | 0.696453 | 1.345398 | 0.001263 | 0.001859 | 0.001483 |
| is_nothrow_move_constructible_test_no_intrinsics.test | RUN | 0.128162 | 0.456597 | 0.927756 | 0.001412 | 0.001450 | 0.001313 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.996× | 0.997×, 0.994× | 1.000× |
| clang | 1.026× | 1.026×, 1.026× | 0.998× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1359 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/43785224349).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| add_const_test.test | 10 | 0.001457s | 0.001467s | 0.001456s | byte equality observed |
| add_cv_test.test | 10 | 0.001473s | 0.001457s | 0.001436s | byte equality observed |
| add_lvalue_reference_test.test | 10 | 0.001472s | 0.001449s | 0.001466s | byte equality observed |
| add_pointer_test.test | 10 | 0.001475s | 0.001449s | 0.001457s | byte equality observed |
| add_reference_test.test | 10 | 0.001458s | 0.001437s | 0.001452s | byte equality observed |
| add_rvalue_reference_test.test | 10 | 0.001460s | 0.001453s | 0.001436s | byte equality observed |
| add_volatile_test.test | 9 | 0.001457s | 0.001460s | 0.001452s | byte equality observed |
| aligned_storage_a2_test.test | 10 | 0.001602s | 0.001571s | 0.001603s | byte equality observed |
| aligned_storage_empy_test.test | 10 | 0.001463s | 0.001431s | 0.001447s | byte equality observed |
| aligned_storage_test.test | 10 | 0.001580s | 0.001567s | 0.001581s | byte equality observed |
| alignment_of_a2_test.test | 10 | 0.001455s | 0.001434s | 0.001426s | byte equality observed |
| alignment_of_test.test | 10 | 0.001435s | 0.001444s | 0.001469s | byte equality observed |
| common_type_2_test.test | 9 | 0.001445s | 0.001438s | 0.001415s | byte equality observed |
| common_type_3_test.test | 10 | 0.001429s | 0.001444s | 0.001414s | byte equality observed |
| common_type_4_test.test | 10 | 0.001428s | 0.001478s | 0.001433s | byte equality observed |
| common_type_5_test.test | 10 | 0.001452s | 0.001429s | 0.001425s | byte equality observed |
| common_type_6_test.test | 10 | 0.001491s | 0.001456s | 0.001435s | byte equality observed |
| common_type_sfinae2_test.test | 10 | 0.001457s | 0.001446s | 0.001419s | byte equality observed |
| common_type_sfinae_test.test | 10 | 0.001422s | 0.001467s | 0.001445s | byte equality observed |
| common_type_test.test | 10 | 0.001440s | 0.001456s | 0.001484s | byte equality observed |
| conditional_test.test | 10 | 0.001430s | 0.001451s | 0.001431s | byte equality observed |
| conjunction_test.test | 10 | 0.001464s | 0.001465s | 0.001467s | byte equality observed |
| copy_cv_ref_test.test | 10 | 0.001435s | 0.001431s | 0.001429s | byte equality observed |
| copy_cv_test.test | 10 | 0.001441s | 0.001434s | 0.001424s | byte equality observed |
| copy_reference_test.test | 10 | 0.001426s | 0.001440s | 0.001438s | byte equality observed |
| cxx14_aliases_test.test | 10 | 0.001418s | 0.001433s | 0.001446s | byte equality observed |
| decay_test.test | 10 | 0.001453s | 0.001484s | 0.001457s | byte equality observed |
| detected_or_test.test | 10 | 0.001446s | 0.001438s | 0.001441s | byte equality observed |
| detected_test.test | 10 | 0.001447s | 0.001415s | 0.001454s | byte equality observed |
| disjunction_test.test | 10 | 0.001446s | 0.001422s | 0.001421s | byte equality observed |
| enable_if_test.test | 10 | 0.001457s | 0.001456s | 0.001439s | byte equality observed |
| extent_test.test | 10 | 0.001435s | 0.001465s | 0.001432s | byte equality observed |
| floating_point_promotion_test.test | 10 | 0.001436s | 0.001480s | 0.001452s | byte equality observed |
| function_traits_test.test | 10 | 0.001435s | 0.001450s | 0.001423s | byte equality observed |
| has_binary_classes0_test.test | 10 | 0.001426s | 0.001467s | 0.001409s | byte equality observed |
| has_binary_classes1_test.test | 10 | 0.001441s | 0.001436s | 0.001459s | byte equality observed |
| has_binary_classes2_test.test | 10 | 0.001451s | 0.001464s | 0.001448s | byte equality observed |
| has_binary_classes3_test.test | 10 | 0.001439s | 0.001419s | 0.001435s | byte equality observed |
| has_binary_classes4_test.test | 10 | 0.001428s | 0.001434s | 0.001463s | byte equality observed |
| has_binary_classes5_test.test | 10 | 0.001470s | 0.001448s | 0.001444s | byte equality observed |
| has_binary_classes6_test.test | 10 | 0.001424s | 0.001460s | 0.001431s | byte equality observed |
| has_binary_classes7_test.test | 10 | 0.001448s | 0.001466s | 0.001452s | byte equality observed |
| has_binary_classes8_test.test | 10 | 0.001449s | 0.001461s | 0.001441s | byte equality observed |
| has_binary_classes9_test.test | 10 | 0.001445s | 0.001434s | 0.001463s | byte equality observed |
| has_bit_and_assign_test.test | 10 | 0.001451s | 0.001446s | 0.001470s | byte equality observed |
| has_bit_and_test.test | 10 | 0.001454s | 0.001441s | 0.001417s | byte equality observed |
| has_bit_or_assign_test.test | 10 | 0.001443s | 0.001438s | 0.001441s | byte equality observed |
| has_bit_or_test.test | 10 | 0.001438s | 0.001437s | 0.001432s | byte equality observed |
| has_bit_xor_assign_test.test | 10 | 0.001459s | 0.001437s | 0.001455s | byte equality observed |
| has_bit_xor_test.test | 10 | 0.001435s | 0.001458s | 0.001447s | byte equality observed |
| has_complement_test.test | 10 | 0.001457s | 0.001428s | 0.001439s | byte equality observed |
| has_dereference_test.test | 10 | 0.001439s | 0.001456s | 0.001450s | byte equality observed |
| has_divides_assign_test.test | 10 | 0.001453s | 0.001438s | 0.001436s | byte equality observed |
| has_divides_test.test | 10 | 0.001437s | 0.001425s | 0.001453s | byte equality observed |
| has_equal_to_test.test | 10 | 0.001430s | 0.001422s | 0.001452s | byte equality observed |
| has_greater_equal_test.test | 10 | 0.001465s | 0.001439s | 0.001445s | byte equality observed |
| has_greater_test.test | 10 | 0.001443s | 0.001430s | 0.001436s | byte equality observed |
| has_left_shift_assign_test.test | 10 | 0.001435s | 0.001436s | 0.001436s | byte equality observed |
| has_left_shift_test.test | 10 | 0.001441s | 0.001448s | 0.001440s | byte equality observed |
| has_less_equal_test.test | 10 | 0.001444s | 0.001451s | 0.001397s | byte equality observed |
| has_less_test.test | 10 | 0.001456s | 0.001447s | 0.001442s | byte equality observed |
| has_logical_and_test.test | 10 | 0.001430s | 0.001438s | 0.001453s | byte equality observed |
| has_logical_not_test.test | 10 | 0.001434s | 0.001466s | 0.001436s | byte equality observed |
| has_logical_or_test.test | 10 | 0.001457s | 0.001436s | 0.001448s | byte equality observed |
| has_minus_assign_test.test | 10 | 0.001438s | 0.001455s | 0.001435s | byte equality observed |
| has_minus_test.test | 10 | 0.001461s | 0.001419s | 0.001437s | byte equality observed |
| has_modulus_assign_test.test | 10 | 0.001446s | 0.001449s | 0.001429s | byte equality observed |
| has_modulus_test.test | 10 | 0.001485s | 0.001472s | 0.001452s | byte equality observed |
| has_multiplies_assign_test.test | 9 | 0.001448s | 0.001464s | 0.001467s | byte equality observed |
| has_multiplies_test.test | 10 | 0.001455s | 0.001449s | 0.001448s | byte equality observed |
| has_negate_test.test | 10 | 0.001451s | 0.001446s | 0.001439s | byte equality observed |
| has_not_equal_to_test.test | 10 | 0.001441s | 0.001449s | 0.001472s | byte equality observed |
| has_nothrow_assign_test.test | 10 | 0.001448s | 0.001454s | 0.001469s | byte equality observed |
| has_nothrow_assign_test_no_intrinsics.test | 10 | 0.001440s | 0.001430s | 0.001462s | byte equality observed |
| has_nothrow_constr_test.test | 10 | 0.001457s | 0.001445s | 0.001429s | byte equality observed |
| has_nothrow_constr_test_no_intrinsics.test | 10 | 0.001459s | 0.001436s | 0.001452s | byte equality observed |
| has_nothrow_copy_test.test | 10 | 0.001463s | 0.001414s | 0.001441s | byte equality observed |
| has_nothrow_copy_test_no_intrinsics.test | 10 | 0.001439s | 0.001434s | 0.001499s | byte equality observed |
| has_nothrow_destructor_test.test | 10 | 0.001441s | 0.001453s | 0.001479s | byte equality observed |
| has_operator_new_test.test | 10 | 0.001460s | 0.001454s | 0.001420s | byte equality observed |
| has_plus_assign_test.test | 10 | 0.001453s | 0.001434s | 0.001433s | byte equality observed |
| has_plus_test.test | 10 | 0.001448s | 0.001449s | 0.001474s | byte equality observed |
| has_post_decrement_test.test | 10 | 0.001453s | 0.001466s | 0.001427s | byte equality observed |
| has_post_increment_test.test | 10 | 0.001427s | 0.001432s | 0.001428s | byte equality observed |
| has_postfix_classes0_test.test | 10 | 0.001468s | 0.001439s | 0.001418s | byte equality observed |
| has_postfix_classes1_test.test | 10 | 0.001445s | 0.001431s | 0.001443s | byte equality observed |
| has_postfix_classes2_test.test | 10 | 0.001419s | 0.001456s | 0.001463s | byte equality observed |
| has_postfix_classes3_test.test | 10 | 0.001463s | 0.001442s | 0.001468s | byte equality observed |
| has_pre_decrement_test.test | 10 | 0.001441s | 0.001445s | 0.001442s | byte equality observed |
| has_pre_increment_test.test | 10 | 0.001450s | 0.001458s | 0.001437s | byte equality observed |
| has_prefix_classes0_test.test | 10 | 0.001455s | 0.001452s | 0.001443s | byte equality observed |
| has_prefix_classes1_test.test | 9 | 0.001432s | 0.001450s | 0.001445s | byte equality observed |
| has_prefix_classes2_test.test | 10 | 0.001433s | 0.001450s | 0.001440s | byte equality observed |
| has_prefix_classes3_test.test | 10 | 0.001454s | 0.001410s | 0.001450s | byte equality observed |
| has_right_shift_assign_test.test | 10 | 0.001438s | 0.001433s | 0.001478s | byte equality observed |
| has_right_shift_test.test | 10 | 0.001448s | 0.001435s | 0.001426s | byte equality observed |
| has_trivial_assign_test.test | 10 | 0.001533s | 0.001527s | 0.001543s | byte equality observed |
| has_trivial_constr_test.test | 10 | 0.001518s | 0.001511s | 0.001543s | native test oracle; output varies |
| has_trivial_copy_test.test | 10 | 0.001530s | 0.001505s | 0.001578s | native test oracle; output varies |
| has_trivial_destructor_test.test | 10 | 0.001451s | 0.001488s | 0.001450s | byte equality observed |
| has_trivial_move_assign_test.test | 10 | 0.001429s | 0.001451s | 0.001469s | byte equality observed |
| has_trivial_move_constructor_test.test | 10 | 0.001429s | 0.001425s | 0.001471s | byte equality observed |
| has_unary_minus_test.test | 10 | 0.001459s | 0.001441s | 0.001465s | byte equality observed |
| has_unary_plus_test.test | 10 | 0.001451s | 0.001452s | 0.001424s | byte equality observed |
| has_virtual_destructor_test.test | 10 | 0.001445s | 0.001471s | 0.001444s | byte equality observed |
| integral_constant_test.test | 10 | 0.000639s | 0.000651s | 0.001459s | byte equality observed |
| is_abstract_test.test | 10 | 0.001460s | 0.001454s | 0.001452s | byte equality observed |
| is_arithmetic_test.test | 10 | 0.001453s | 0.001397s | 0.001454s | byte equality observed |
| is_array_test.test | 10 | 0.001434s | 0.001422s | 0.001417s | byte equality observed |
| is_assignable_test.test | 10 | 0.001447s | 0.001470s | 0.001437s | byte equality observed |
| is_base_and_derived_test.test | 10 | 0.001449s | 0.001427s | 0.001442s | byte equality observed |
| is_base_of_test.test | 10 | 0.001453s | 0.001427s | 0.001461s | byte equality observed |
| is_bounded_array_test.test | 10 | 0.001431s | 0.001432s | 0.001445s | byte equality observed |
| is_class_test.test | 10 | 0.001441s | 0.001418s | 0.001429s | byte equality observed |
| is_complete_test.test | 10 | 0.001435s | 0.001424s | 0.001433s | byte equality observed |
| is_complex_test.test | 10 | 0.001417s | 0.001452s | 0.001451s | byte equality observed |
| is_compound_test.test | 10 | 0.001440s | 0.001399s | 0.001431s | byte equality observed |
| is_const_test.test | 10 | 0.001457s | 0.001437s | 0.001421s | byte equality observed |
| is_constructible_test.test | 10 | 0.001448s | 0.001465s | 0.001412s | byte equality observed |
| is_convertible_test.test | 10 | 0.001415s | 0.001452s | 0.001438s | byte equality observed |
| is_copy_assignable_test.test | 10 | 0.001450s | 0.001442s | 0.001421s | byte equality observed |
| is_copy_constructible_test.test | 10 | 0.001452s | 0.001416s | 0.001410s | byte equality observed |
| is_default_constr_test.test | 10 | 0.001422s | 0.001452s | 0.001456s | byte equality observed |
| is_destructible_test.test | 10 | 0.001439s | 0.001451s | 0.001427s | byte equality observed |
| is_detected_exact_test.test | 10 | 0.001453s | 0.001429s | 0.001432s | byte equality observed |
| is_detected_test.test | 10 | 0.001447s | 0.001453s | 0.001447s | byte equality observed |
| is_empty_test.test | 10 | 0.001447s | 0.001421s | 0.001444s | byte equality observed |
| is_enum_test.test | 10 | 0.001446s | 0.001459s | 0.001446s | byte equality observed |
| is_final_test.test | 10 | 0.001435s | 0.001478s | 0.001421s | byte equality observed |
| is_float_test.test | 10 | 0.001441s | 0.001453s | 0.001472s | byte equality observed |
| is_floating_point_test.test | 10 | 0.001439s | 0.001462s | 0.001413s | byte equality observed |
| is_function_test.test | 10 | 0.001429s | 0.001423s | 0.001434s | byte equality observed |
| is_fundamental_test.test | 10 | 0.001445s | 0.001439s | 0.001410s | byte equality observed |
| is_integral_test.test | 10 | 0.001439s | 0.001452s | 0.001450s | byte equality observed |
| is_list_constructible_test.test | 10 | 0.001455s | 0.001466s | 0.001476s | byte equality observed |
| is_lvalue_reference_test.test | 10 | 0.001443s | 0.001460s | 0.001436s | byte equality observed |
| is_member_func_test.test | 10 | 0.001420s | 0.001472s | 0.001442s | byte equality observed |
| is_member_obj_test.test | 10 | 0.001432s | 0.001446s | 0.001445s | byte equality observed |
| is_member_pointer_test.test | 10 | 0.001433s | 0.001414s | 0.001462s | byte equality observed |
| is_noncopyable_test.test | 10 | 0.001453s | 0.001469s | 0.001440s | byte equality observed |
| is_nothrow_move_assignable_test.test | 10 | 0.001446s | 0.001419s | 0.001448s | byte equality observed |
| is_nothrow_move_assignable_test_no_intrinsics.test | 10 | 0.001444s | 0.001457s | 0.001410s | byte equality observed |
| is_nothrow_move_constructible_test.test | 8 | 0.001460s | 0.001430s | 0.001456s | byte equality observed |
| is_nothrow_move_constructible_test_no_intrinsics.test | 10 | 0.001461s | 0.001442s | 0.001424s | byte equality observed |
| is_nothrow_swappable_test.test | 10 | 0.001452s | 0.001466s | 0.001441s | byte equality observed |
| is_object_test.test | 10 | 0.001425s | 0.001451s | 0.001450s | byte equality observed |
| is_pod_test.test | 10 | 0.001450s | 0.001425s | 0.001435s | byte equality observed |
| is_pointer_test.test | 10 | 0.001424s | 0.001450s | 0.001440s | byte equality observed |
| is_polymorphic_test.test | 10 | 0.001463s | 0.001430s | 0.001453s | byte equality observed |
| is_reference_test.test | 7 | 0.001465s | 0.001459s | 0.001436s | byte equality observed |
| is_rvalue_reference_test.test | 9 | 0.001426s | 0.001463s | 0.001432s | byte equality observed |
| is_same_test.test | 10 | 0.001459s | 0.001448s | 0.001439s | byte equality observed |
| is_scalar_test.test | 10 | 0.001451s | 0.001448s | 0.001460s | byte equality observed |
| is_scoped_enum_test.test | 10 | 0.001458s | 0.001455s | 0.001462s | byte equality observed |
| is_signed_test.test | 10 | 0.001448s | 0.001430s | 0.001443s | byte equality observed |
| is_stateless_test.test | 10 | 0.001471s | 0.001437s | 0.001426s | byte equality observed |
| is_swappable_test.test | 10 | 0.001429s | 0.001457s | 0.001415s | byte equality observed |
| is_trivially_copyable_test.test | 10 | 0.001476s | 0.001492s | 0.001439s | byte equality observed |
| is_unbounded_array_test.test | 10 | 0.001460s | 0.001479s | 0.001454s | byte equality observed |
| is_union_test.test | 10 | 0.001451s | 0.001468s | 0.001479s | byte equality observed |
| is_unscoped_enum_test.test | 10 | 0.001446s | 0.001430s | 0.001454s | byte equality observed |
| is_unsigned_test.test | 10 | 0.001449s | 0.001459s | 0.001464s | byte equality observed |
| is_virtual_base_of_test.test | 10 | 0.001462s | 0.001425s | 0.001415s | byte equality observed |
| is_void_test.test | 10 | 0.001445s | 0.001445s | 0.001440s | byte equality observed |
| is_volatile_test.test | 10 | 0.001424s | 0.001433s | 0.001466s | byte equality observed |
| make_signed_test.test | 10 | 0.001452s | 0.001442s | 0.001472s | byte equality observed |
| make_unsigned_test.test | 10 | 0.001467s | 0.001458s | 0.001438s | byte equality observed |
| make_void_test.test | 10 | 0.001463s | 0.001453s | 0.001436s | byte equality observed |
| mpl_interop_test1.test | 10 | 0.000642s | 0.000641s | 0.001445s | byte equality observed |
| mpl_interop_test2.test | 10 | 0.000653s | 0.000643s | 0.001433s | byte equality observed |
| mpl_interop_test3.test | 10 | 0.000663s | 0.000639s | 0.001422s | byte equality observed |
| negation_test.test | 10 | 0.001496s | 0.001484s | 0.001434s | byte equality observed |
| promote_basic_test.test | 10 | 0.000650s | 0.000648s | 0.001423s | byte equality observed |
| promote_enum_msvc_bug_test.test | 10 | 0.000648s | 0.000649s | 0.001439s | byte equality observed |
| promote_enum_test.test | 10 | 0.000650s | 0.000648s | 0.001475s | byte equality observed |
| promote_mpl_test.test | 10 | 0.000640s | 0.000635s | 0.001449s | byte equality observed |
| rank_test.test | 10 | 0.001465s | 0.001429s | 0.001423s | byte equality observed |
| remove_all_extents_test.test | 10 | 0.001465s | 0.001440s | 0.001426s | byte equality observed |
| remove_bounds_test.test | 10 | 0.001479s | 0.001445s | 0.001467s | byte equality observed |
| remove_const_test.test | 10 | 0.001470s | 0.001451s | 0.001476s | byte equality observed |
| remove_cv_ref_test.test | 10 | 0.001481s | 0.001452s | 0.001443s | byte equality observed |
| remove_cv_test.test | 10 | 0.001465s | 0.001438s | 0.001461s | byte equality observed |
| remove_extent_test.test | 10 | 0.001454s | 0.001440s | 0.001447s | byte equality observed |
| remove_pointer_test.test | 10 | 0.001441s | 0.001442s | 0.001441s | byte equality observed |
| remove_reference_test.test | 10 | 0.001480s | 0.001471s | 0.001433s | byte equality observed |
| remove_volatile_test.test | 10 | 0.001455s | 0.001431s | 0.001441s | byte equality observed |
| tricky_abstract_type_test.test | 10 | 0.001427s | 0.001395s | 0.001425s | byte equality observed |
| tricky_add_pointer_test.test | 10 | 0.001448s | 0.001463s | 0.001440s | byte equality observed |
| tricky_function_type_test.test | 10 | 0.001441s | 0.001446s | 0.001482s | byte equality observed |
| tricky_incomplete_type_test.test | 10 | 0.001445s | 0.001450s | 0.001438s | byte equality observed |
| tricky_is_enum_test.test | 10 | 0.001453s | 0.001415s | 0.001466s | byte equality observed |
| tricky_partial_spec_test.test | 10 | 0.001464s | 0.001438s | 0.001427s | byte equality observed |
| tricky_rvalue_test.test | 10 | 0.001444s | 0.001419s | 0.001471s | byte equality observed |
| type_identity_test.test | 10 | 0.001489s | 0.001433s | 0.001437s | byte equality observed |
| type_traits_test.test | 10 | 0.000630s | 0.000647s | 0.001452s | byte equality observed |
| type_with_alignment_test.test | 9 | 0.001623s | 0.001588s | 0.001587s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/43785224349).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
