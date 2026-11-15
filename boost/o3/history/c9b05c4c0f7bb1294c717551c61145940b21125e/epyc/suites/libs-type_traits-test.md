# libs/type_traits/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| type_with_alignment_test.test | RUN | 0.158605 | 0.415360 | 0.756795 | 0.001976 | 0.001992 | 0.001972 |
| type_traits_test.test | RUN | 0.220702 | 0.467546 | 0.791321 | 0.000658 | 0.000632 | 0.001588 |
| type_identity_test.test | RUN | 0.442825 | 1.750656 | 4.458500 | 0.001745 | 0.001800 | 0.001967 |
| tricky_rvalue_test.test | RUN | 0.146127 | 0.331919 | 0.595486 | 0.001912 | 0.001834 | 0.001952 |
| tricky_partial_spec_test.test | RUN | 0.182884 | 0.514707 | 0.999116 | 0.001908 | 0.001864 | 0.002056 |
| tricky_is_enum_test.test | RUN | 0.139095 | 0.341924 | 0.544044 | 0.001742 | 0.001878 | 0.002158 |
| tricky_incomplete_type_test.test | RUN | 0.239124 | 0.539312 | 0.912048 | 0.001820 | 0.002080 | 0.001866 |
| tricky_function_type_test.test | RUN | 0.193313 | 0.563133 | 1.065219 | 0.001898 | 0.001812 | 0.001984 |
| tricky_add_pointer_test.test | RUN | 0.294134 | 1.043466 | 2.520541 | 0.001780 | 0.002100 | 0.002019 |
| tricky_abstract_type_test.test | RUN | 0.150756 | 0.327829 | 0.566328 | 0.001811 | 0.001749 | 0.001982 |
| remove_volatile_test.test | RUN | 0.403192 | 1.481268 | 3.846362 | 0.002014 | 0.002024 | 0.002058 |
| remove_reference_test.test | RUN | 0.418791 | 1.493762 | 4.097947 | 0.001987 | 0.001763 | 0.002038 |
| remove_pointer_test.test | RUN | 0.434536 | 1.550343 | 4.289662 | 0.001857 | 0.001710 | 0.002006 |
| remove_extent_test.test | RUN | 0.416965 | 1.578175 | 4.117808 | 0.002054 | 0.002114 | 0.001872 |
| remove_cv_test.test | RUN | 0.423019 | 1.576627 | 4.025393 | 0.001976 | 0.002112 | 0.002060 |
| remove_cv_ref_test.test | RUN | 0.882364 | 3.609408 | 10.146288 | 0.001810 | 0.001846 | 0.002085 |
| remove_const_test.test | RUN | 0.398630 | 1.412720 | 3.891278 | 0.001725 | 0.001989 | 0.002057 |
| remove_bounds_test.test | RUN | 0.421361 | 1.559565 | 4.093123 | 0.001928 | 0.002092 | 0.002102 |
| remove_all_extents_test.test | RUN | 0.416232 | 1.499821 | 4.110933 | 0.002064 | 0.002144 | 0.001688 |
| rank_test.test | RUN | 0.152179 | 0.358295 | 0.534679 | 0.001844 | 0.001898 | 0.001906 |
| promote_mpl_test.test | RUN | 0.131668 | 0.321785 | 0.370596 | 0.000727 | 0.000715 | 0.001890 |
| promote_enum_test.test | RUN | 0.029471 | 0.081371 | 0.088685 | 0.000605 | 0.000864 | 0.001650 |
| promote_enum_msvc_bug_test.test | RUN | 0.026567 | 0.065135 | 0.066181 | 0.000733 | 0.000698 | 0.001605 |
| promote_basic_test.test | RUN | 0.031650 | 0.087273 | 0.093558 | 0.000696 | 0.000774 | 0.001965 |
| negation_test.test | RUN | 0.145498 | 0.330978 | 0.478809 | 0.001990 | 0.001904 | 0.001746 |
| mpl_interop_test3.test | RUN | 0.123444 | 0.279362 | 0.342938 | 0.000688 | 0.000671 | 0.001799 |
| mpl_interop_test2.test | RUN | 0.044308 | 0.080158 | 0.087319 | 0.000696 | 0.000779 | 0.001564 |
| mpl_interop_test1.test | RUN | 0.023297 | 0.060177 | 0.057364 | 0.000671 | 0.000889 | 0.001640 |
| make_void_test.test | RUN | 0.149040 | 0.351164 | 0.627392 | 0.001982 | 0.002112 | 0.001968 |
| make_unsigned_test.test | RUN | 0.175956 | 0.465261 | 0.850764 | 0.001722 | 0.001704 | 0.001860 |
| make_signed_test.test | RUN | 0.172243 | 0.448223 | 0.871743 | 0.001683 | 0.001902 | 0.001530 |
| is_volatile_test.test | RUN | 0.151329 | 0.395493 | 0.715545 | 0.001817 | 0.001889 | 0.001946 |
| is_void_test.test | RUN | 0.151759 | 0.373292 | 0.649106 | 0.001938 | 0.002040 | 0.001820 |
| is_virtual_base_of_test.test | RUN | 0.175389 | 0.495422 | 0.889425 | 0.001573 | 0.001836 | 0.002068 |
| is_unsigned_test.test | RUN | 0.152668 | 0.383617 | 0.643777 | 0.001794 | 0.001785 | 0.001706 |
| is_unscoped_enum_test.test | RUN | 0.147544 | 0.363174 | 0.544299 | 0.001730 | 0.001704 | 0.001578 |
| is_union_test.test | RUN | 0.158367 | 0.441540 | 0.799812 | 0.001760 | 0.002190 | 0.002107 |
| is_unbounded_array_test.test | RUN | 0.146662 | 0.375912 | 0.626819 | 0.001710 | 0.002102 | 0.001838 |
| is_trivially_copyable_test.test | RUN | 0.244508 | 0.807914 | 1.655755 | 0.001882 | 0.002054 | 0.001869 |
| is_swappable_test.test | RUN | 0.203990 | 0.598066 | 1.215421 | 0.001788 | 0.002108 | 0.001969 |
| is_stateless_test.test | RUN | 0.230420 | 0.677530 | 1.400679 | 0.001785 | 0.002012 | 0.001636 |
| is_signed_test.test | RUN | 0.154301 | 0.386606 | 0.684857 | 0.001878 | 0.002022 | 0.001487 |
| is_scoped_enum_test.test | RUN | 0.153343 | 0.340913 | 0.528924 | 0.001730 | 0.002112 | 0.001794 |
| is_scalar_test.test | RUN | 0.197395 | 0.636597 | 1.209111 | 0.002078 | 0.001936 | 0.001920 |
| is_same_test.test | RUN | 0.148794 | 0.359300 | 0.646712 | 0.001968 | 0.001918 | 0.001757 |
| is_rvalue_reference_test.test | RUN | 0.159094 | 0.417514 | 0.740271 | 0.001818 | 0.001842 | 0.001500 |
| is_reference_test.test | RUN | 0.160836 | 0.403569 | 0.733874 | 0.001830 | 0.001864 | 0.002064 |
| is_polymorphic_test.test | RUN | 0.163714 | 0.452982 | 0.794761 | 0.001545 | 0.001741 | 0.001598 |
| is_pointer_test.test | RUN | 0.163618 | 0.440164 | 0.750234 | 0.002034 | 0.001750 | 0.001764 |
| is_pod_test.test | RUN | 0.217607 | 0.704610 | 1.445341 | 0.001883 | 0.001881 | 0.001942 |
| is_object_test.test | RUN | 0.148754 | 0.372627 | 0.602775 | 0.001584 | 0.001825 | 0.002022 |
| is_nothrow_swappable_test.test | RUN | 0.221650 | 0.658806 | 1.343047 | 0.001882 | 0.001858 | 0.001947 |
| is_nothrow_move_constructible_test.test | RUN | 0.213697 | 0.684390 | 1.384096 | 0.001754 | 0.001706 | 0.001900 |
| is_nothrow_move_assignable_test.test | RUN | 0.212188 | 0.685460 | 1.361422 | 0.001708 | 0.002131 | 0.001646 |
| is_noncopyable_test.test | RUN | 0.143539 | 0.379675 | 0.614545 | 0.001755 | 0.001602 | 0.001759 |
| is_member_pointer_test.test | RUN | 0.150225 | 0.365078 | 0.605213 | 0.001950 | 0.001978 | 0.001975 |
| is_member_obj_test.test | RUN | 0.152359 | 0.377003 | 0.630092 | 0.001744 | 0.002061 | 0.001699 |
| is_member_func_test.test | RUN | 0.153623 | 0.404836 | 0.696525 | 0.001706 | 0.001911 | 0.001944 |
| is_lvalue_reference_test.test | RUN | 0.161489 | 0.409218 | 0.723870 | 0.001525 | 0.002080 | 0.001966 |
| is_list_constructible_test.test | RUN | 0.181675 | 0.487192 | 0.794232 | 0.002047 | 0.002086 | 0.002029 |
| is_integral_test.test | RUN | 0.193595 | 0.592956 | 1.177898 | 0.001846 | 0.001999 | 0.001739 |
| is_fundamental_test.test | RUN | 0.183676 | 0.615583 | 1.186161 | 0.001748 | 0.001843 | 0.001868 |
| is_function_test.test | RUN | 0.158750 | 0.384237 | 0.642678 | 0.001771 | 0.001932 | 0.002030 |
| is_floating_point_test.test | RUN | 0.156201 | 0.426497 | 0.741990 | 0.002012 | 0.002124 | 0.002000 |
| is_float_test.test | RUN | 0.157968 | 0.430384 | 0.747331 | 0.001891 | 0.001854 | 0.002094 |
| is_final_test.test | RUN | 0.158304 | 0.434411 | 0.795005 | 0.001704 | 0.001693 | 0.001922 |
| is_enum_test.test | RUN | 0.148220 | 0.362816 | 0.601917 | 0.001801 | 0.001847 | 0.001884 |
| is_empty_test.test | RUN | 0.155143 | 0.391506 | 0.666126 | 0.001968 | 0.001986 | 0.001697 |
| is_detected_test.test | RUN | 0.143892 | 0.338383 | 0.521481 | 0.001718 | 0.001922 | 0.001941 |
| is_detected_exact_test.test | RUN | 0.142061 | 0.337482 | 0.533535 | 0.001836 | 0.001602 | 0.002055 |
| is_destructible_test.test | RUN | 0.208171 | 0.683736 | 1.369216 | 0.001786 | 0.002064 | 0.002044 |
| is_default_constr_test.test | RUN | 0.209667 | 0.684873 | 1.396970 | 0.002053 | 0.002065 | 0.001722 |
| is_copy_constructible_test.test | RUN | 0.217636 | 0.699913 | 1.473813 | 0.001734 | 0.001792 | 0.002010 |
| is_copy_assignable_test.test | RUN | 0.227207 | 0.685486 | 1.463287 | 0.001736 | 0.001889 | 0.002041 |
| is_convertible_test.test | RUN | 0.217844 | 0.624946 | 1.249213 | 0.001942 | 0.002083 | 0.001588 |
| is_constructible_test.test | RUN | 0.170156 | 0.464867 | 0.847294 | 0.001730 | 0.001996 | 0.001752 |
| is_const_test.test | RUN | 0.153663 | 0.385701 | 0.655629 | 0.001894 | 0.001837 | 0.001681 |
| is_compound_test.test | RUN | 0.145696 | 0.353615 | 0.544516 | 0.001754 | 0.001838 | 0.001757 |
| is_complex_test.test | RUN | 0.192517 | 0.449774 | 0.805224 | 0.001892 | 0.002037 | 0.001567 |
| is_complete_test.test | RUN | 0.172956 | 0.478855 | 0.893849 | 0.001958 | 0.002000 | 0.001509 |
| is_class_test.test | RUN | 0.157802 | 0.428096 | 0.727573 | 0.001780 | 0.001696 | 0.001665 |
| is_bounded_array_test.test | RUN | 0.151007 | 0.371341 | 0.643717 | 0.001846 | 0.001544 | 0.001586 |
| is_base_of_test.test | RUN | 0.156468 | 0.406324 | 0.738932 | 0.001943 | 0.002116 | 0.001689 |
| is_base_and_derived_test.test | RUN | 0.156285 | 0.398803 | 0.693846 | 0.001867 | 0.001938 | 0.001491 |
| is_assignable_test.test | RUN | 0.192316 | 0.573026 | 1.120423 | 0.001689 | 0.001846 | 0.001813 |
| is_array_test.test | RUN | 0.150448 | 0.396351 | 0.693205 | 0.001858 | 0.001790 | 0.001647 |
| is_arithmetic_test.test | RUN | 0.193700 | 0.597924 | 1.131119 | 0.001868 | 0.002092 | 0.001740 |
| is_abstract_test.test | RUN | 0.363469 | 1.567485 | 3.699064 | 0.001957 | 0.001845 | 0.001986 |
| integral_constant_test.test | RUN | 0.022196 | 0.063994 | 0.071722 | 0.000650 | 0.000845 | 0.001808 |
| has_virtual_destructor_test.test | RUN | 0.165288 | 0.455440 | 0.823080 | 0.001684 | 0.002074 | 0.002040 |
| has_unary_plus_test.test | RUN | 0.333916 | 1.817627 | 2.902653 | 0.001944 | 0.002033 | 0.001797 |
| has_unary_minus_test.test | RUN | 0.324797 | 1.812567 | 2.898349 | 0.001726 | 0.001640 | 0.002034 |
| has_trivial_move_constructor_test.test | RUN | 0.216935 | 0.698457 | 1.400521 | 0.001746 | 0.001849 | 0.002002 |
| has_trivial_move_assign_test.test | RUN | 0.212023 | 0.635979 | 1.355286 | 0.001393 | 0.001542 | 0.002036 |
| has_trivial_destructor_test.test | RUN | 0.216661 | 0.628200 | 1.409028 | 0.001942 | 0.001730 | 0.002077 |
| has_trivial_copy_test.test | RUN | 0.226112 | 0.741666 | 1.460162 | 0.001936 | 0.002284 | 0.002132 |
| has_trivial_constr_test.test | RUN | 0.221026 | 0.732982 | 1.476107 | 0.001711 | 0.001551 | 0.002098 |
| has_trivial_assign_test.test | RUN | 0.213950 | 0.735572 | 1.446824 | 0.001747 | 0.002120 | 0.002167 |
| has_right_shift_test.test | RUN | 0.339295 | 1.376607 | 3.134206 | 0.001660 | 0.002156 | 0.001898 |
| has_right_shift_assign_test.test | RUN | 0.323253 | 1.277848 | 2.934166 | 0.001748 | 0.002088 | 0.001878 |
| has_prefix_classes3_test.test | RUN | 0.225807 | 0.690037 | 1.505501 | 0.001426 | 0.001791 | 0.001888 |
| has_prefix_classes2_test.test | RUN | 0.223839 | 0.688488 | 1.462139 | 0.001568 | 0.001739 | 0.002082 |
| has_prefix_classes1_test.test | RUN | 0.229721 | 0.770703 | 1.492583 | 0.001765 | 0.002126 | 0.001953 |
| has_prefix_classes0_test.test | RUN | 0.234505 | 0.760882 | 1.483110 | 0.001648 | 0.002136 | 0.001946 |
| has_pre_increment_test.test | RUN | 0.317576 | 1.864070 | 2.938236 | 0.001737 | 0.002158 | 0.001645 |
| has_pre_decrement_test.test | RUN | 0.322669 | 1.865352 | 2.884796 | 0.001640 | 0.002220 | 0.001948 |
| has_postfix_classes3_test.test | RUN | 0.230790 | 0.745400 | 1.514290 | 0.001822 | 0.001877 | 0.002012 |
| has_postfix_classes2_test.test | RUN | 0.230033 | 0.748657 | 1.507924 | 0.001794 | 0.002139 | 0.001819 |
| has_postfix_classes1_test.test | RUN | 0.239298 | 0.767940 | 1.501424 | 0.001862 | 0.002144 | 0.001967 |
| has_postfix_classes0_test.test | RUN | 0.238151 | 0.744443 | 1.528527 | 0.001708 | 0.002174 | 0.002078 |
| has_post_increment_test.test | RUN | 0.327278 | 1.879828 | 2.991544 | 0.001832 | 0.001878 | 0.002021 |
| has_post_decrement_test.test | RUN | 0.324930 | 1.884288 | 2.966648 | 0.001830 | 0.001810 | 0.001915 |
| has_plus_test.test | RUN | 0.329854 | 1.232491 | 2.863759 | 0.001760 | 0.001724 | 0.001790 |
| has_plus_assign_test.test | RUN | 0.342690 | 1.283623 | 2.904158 | 0.001758 | 0.002030 | 0.001936 |
| has_operator_new_test.test | RUN | 0.217780 | 0.673476 | 1.371490 | 0.002040 | 0.002006 | 0.001556 |
| has_nothrow_destructor_test.test | RUN | 0.226041 | 0.741025 | 1.494529 | 0.001958 | 0.001886 | 0.002046 |
| has_nothrow_copy_test.test | RUN | 0.218472 | 0.673487 | 1.402161 | 0.001849 | 0.001752 | 0.002004 |
| has_nothrow_constr_test.test | RUN | 0.212596 | 0.662435 | 1.358892 | 0.001655 | 0.001599 | 0.001978 |
| has_nothrow_assign_test.test | RUN | 0.215962 | 0.690477 | 1.335653 | 0.001812 | 0.002117 | 0.001822 |
| has_not_equal_to_test.test | RUN | 0.334267 | 1.810145 | 2.947411 | 0.001710 | 0.002131 | 0.001928 |
| has_negate_test.test | RUN | 0.315386 | 1.232554 | 2.799395 | 0.001873 | 0.001838 | 0.002117 |
| has_multiplies_test.test | RUN | 0.331485 | 1.418979 | 2.866616 | 0.001842 | 0.001908 | 0.001916 |
| has_multiplies_assign_test.test | RUN | 0.332213 | 1.295402 | 2.953208 | 0.001766 | 0.002084 | 0.001925 |
| has_modulus_test.test | RUN | 0.326072 | 1.311485 | 2.953508 | 0.001755 | 0.001910 | 0.001926 |
| has_modulus_assign_test.test | RUN | 0.328425 | 1.320670 | 2.953128 | 0.001694 | 0.001895 | 0.001970 |
| has_minus_test.test | RUN | 0.335684 | 1.307841 | 2.938701 | 0.001706 | 0.002058 | 0.002083 |
| has_minus_assign_test.test | RUN | 0.344614 | 1.292699 | 2.956326 | 0.001952 | 0.002101 | 0.001899 |
| has_logical_or_test.test | RUN | 0.329984 | 1.340045 | 2.995691 | 0.001833 | 0.002173 | 0.002028 |
| has_logical_not_test.test | RUN | 0.322592 | 1.266317 | 2.749717 | 0.001733 | 0.001870 | 0.002020 |
| has_logical_and_test.test | RUN | 0.334681 | 1.274485 | 3.056694 | 0.001799 | 0.002049 | 0.002044 |
| has_less_test.test | RUN | 0.331831 | 1.807661 | 2.928383 | 0.001800 | 0.002126 | 0.001850 |
| has_less_equal_test.test | RUN | 0.330614 | 1.827103 | 2.993311 | 0.001750 | 0.001861 | 0.001948 |
| has_left_shift_test.test | RUN | 0.364505 | 1.613189 | 3.615767 | 0.001641 | 0.001817 | 0.001656 |
| has_left_shift_assign_test.test | RUN | 0.329820 | 1.256369 | 2.922144 | 0.001552 | 0.001772 | 0.001594 |
| has_greater_test.test | RUN | 0.333027 | 1.828905 | 2.932964 | 0.001885 | 0.001858 | 0.001832 |
| has_greater_equal_test.test | RUN | 0.338433 | 1.785474 | 3.012589 | 0.002014 | 0.002042 | 0.002018 |
| has_equal_to_test.test | RUN | 0.328065 | 1.787230 | 2.952575 | 0.001745 | 0.002164 | 0.001651 |
| has_divides_test.test | RUN | 0.322712 | 1.258155 | 2.970484 | 0.001803 | 0.001906 | 0.002046 |
| has_divides_assign_test.test | RUN | 0.329072 | 1.300759 | 2.945796 | 0.001792 | 0.002116 | 0.002030 |
| has_dereference_test.test | RUN | 0.322610 | 1.303110 | 2.810452 | 0.002056 | 0.002008 | 0.002027 |
| has_complement_test.test | RUN | 0.323938 | 1.873058 | 2.967626 | 0.001707 | 0.002107 | 0.002025 |
| has_bit_xor_test.test | RUN | 0.326850 | 1.275410 | 2.934954 | 0.001800 | 0.002116 | 0.001817 |
| has_bit_xor_assign_test.test | RUN | 0.328422 | 1.246570 | 2.869766 | 0.001949 | 0.001955 | 0.001938 |
| has_bit_or_test.test | RUN | 0.324304 | 1.277997 | 2.905266 | 0.001829 | 0.002128 | 0.002060 |
| has_bit_or_assign_test.test | RUN | 0.323171 | 1.370154 | 2.938562 | 0.001788 | 0.002184 | 0.001744 |
| has_bit_and_test.test | RUN | 0.325620 | 1.328022 | 2.889631 | 0.001792 | 0.001895 | 0.001618 |
| has_bit_and_assign_test.test | RUN | 0.332120 | 1.235970 | 3.004215 | 0.001896 | 0.001918 | 0.002112 |
| has_binary_classes9_test.test | RUN | 0.361005 | 1.536337 | 3.280997 | 0.001821 | 0.002114 | 0.002093 |
| has_binary_classes8_test.test | RUN | 0.362580 | 1.504347 | 3.226956 | 0.001742 | 0.001761 | 0.001809 |
| has_binary_classes7_test.test | RUN | 0.351409 | 1.464915 | 3.236390 | 0.001614 | 0.002054 | 0.001854 |
| has_binary_classes6_test.test | RUN | 0.357634 | 1.481849 | 3.223567 | 0.001817 | 0.002073 | 0.002011 |
| has_binary_classes5_test.test | RUN | 0.353184 | 1.495881 | 3.159584 | 0.001854 | 0.002112 | 0.002086 |
| has_binary_classes4_test.test | RUN | 0.354525 | 1.492813 | 3.173655 | 0.001694 | 0.001826 | 0.001711 |
| has_binary_classes3_test.test | RUN | 0.352724 | 1.470836 | 3.175674 | 0.001472 | 0.002124 | 0.001629 |
| has_binary_classes2_test.test | RUN | 0.360981 | 1.540457 | 3.319807 | 0.001734 | 0.002070 | 0.001972 |
| has_binary_classes1_test.test | RUN | 0.357185 | 1.493689 | 3.120801 | 0.001919 | 0.001944 | 0.001681 |
| has_binary_classes0_test.test | RUN | 0.354313 | 1.529792 | 3.187900 | 0.001736 | 0.001918 | 0.002096 |
| function_traits_test.test | RUN | 0.151605 | 0.406092 | 0.709402 | 0.001876 | 0.002162 | 0.002040 |
| floating_point_promotion_test.test | RUN | 0.154715 | 0.368215 | 0.662233 | 0.001778 | 0.001966 | 0.001874 |
| extent_test.test | RUN | 0.153583 | 0.388935 | 0.706929 | 0.001406 | 0.001942 | 0.002024 |
| enable_if_test.test | RUN | 0.144205 | 0.320461 | 0.473991 | 0.001566 | 0.001641 | 0.001792 |
| disjunction_test.test | RUN | 0.145550 | 0.343754 | 0.574107 | 0.001685 | 0.001979 | 0.001831 |
| detected_test.test | RUN | 0.143857 | 0.324265 | 0.535305 | 0.001959 | 0.002036 | 0.001551 |
| detected_or_test.test | RUN | 0.149329 | 0.343412 | 0.579613 | 0.001787 | 0.002087 | 0.001642 |
| decay_test.test | RUN | 0.400713 | 1.452908 | 3.462650 | 0.001849 | 0.001878 | 0.001834 |
| cxx14_aliases_test.test | RUN | 0.236704 | 0.521115 | 0.898518 | 0.001898 | 0.002125 | 0.001961 |
| copy_reference_test.test | RUN | 0.146792 | 0.339340 | 0.567384 | 0.001778 | 0.001740 | 0.001976 |
| copy_cv_test.test | RUN | 0.147956 | 0.362925 | 0.620134 | 0.001801 | 0.001931 | 0.001994 |
| copy_cv_ref_test.test | RUN | 0.221151 | 0.640966 | 1.393721 | 0.001917 | 0.001856 | 0.001932 |
| conjunction_test.test | RUN | 0.150865 | 0.344255 | 0.587164 | 0.001970 | 0.001772 | 0.001933 |
| conditional_test.test | RUN | 0.145249 | 0.344699 | 0.565177 | 0.001630 | 0.001768 | 0.002003 |
| common_type_test.test | RUN | 0.198222 | 0.535490 | 1.125055 | 0.001854 | 0.001731 | 0.001861 |
| common_type_sfinae_test.test | RUN | 0.144281 | 0.316864 | 0.477108 | 0.001935 | 0.001836 | 0.001862 |
| common_type_sfinae2_test.test | RUN | 0.146071 | 0.352264 | 0.522566 | 0.001959 | 0.001772 | 0.002118 |
| common_type_6_test.test | RUN | 0.155205 | 0.363405 | 0.565283 | 0.001640 | 0.001838 | 0.001980 |
| common_type_5_test.test | RUN | 0.154850 | 0.343383 | 0.617227 | 0.001688 | 0.001882 | 0.001733 |
| common_type_4_test.test | RUN | 0.163326 | 0.387579 | 0.662080 | 0.001856 | 0.001740 | 0.001556 |
| common_type_3_test.test | RUN | 0.147972 | 0.329672 | 0.495097 | 0.001788 | 0.001764 | 0.001840 |
| common_type_2_test.test | RUN | 0.204886 | 0.529771 | 1.094257 | 0.001602 | 0.002068 | 0.001487 |
| alignment_of_test.test | RUN | 0.163212 | 0.424428 | 0.699325 | 0.001908 | 0.001809 | 0.001676 |
| alignment_of_a2_test.test | RUN | 0.156834 | 0.425638 | 0.702486 | 0.002009 | 0.001727 | 0.001708 |
| aligned_storage_test.test | RUN | 0.165663 | 0.397841 | 0.636689 | 0.001990 | 0.002220 | 0.001668 |
| aligned_storage_empy_test.test | RUN | 0.192775 | 0.478761 | 0.861371 | 0.001508 | 0.002179 | 0.002020 |
| aligned_storage_a2_test.test | RUN | 0.150864 | 0.393578 | 0.616629 | 0.001810 | 0.002337 | 0.001872 |
| add_volatile_test.test | RUN | 0.361310 | 1.240779 | 3.325778 | 0.001880 | 0.001688 | 0.001981 |
| add_rvalue_reference_test.test | RUN | 0.403893 | 1.402229 | 3.735823 | 0.001834 | 0.001811 | 0.002024 |
| add_reference_test.test | RUN | 0.388352 | 1.390592 | 3.723965 | 0.001758 | 0.002364 | 0.002078 |
| add_pointer_test.test | RUN | 0.253012 | 0.767130 | 1.876483 | 0.001687 | 0.001662 | 0.001932 |
| add_lvalue_reference_test.test | RUN | 0.390542 | 1.371809 | 3.637277 | 0.001880 | 0.001809 | 0.002002 |
| add_cv_test.test | RUN | 0.367168 | 1.372321 | 3.536888 | 0.001748 | 0.001719 | 0.001887 |
| add_const_test.test | RUN | 0.374368 | 1.303091 | 3.435444 | 0.001549 | 0.001763 | 0.001964 |
| is_virtual_base_of_fail.test | COMPILE_FAIL | 0.141403 | 0.323767 | 0.516887 | — | — | — |
| is_stateless_fail.test | COMPILE_FAIL | 0.143556 | 0.331233 | 0.537194 | — | — | — |
| is_polymorphic_fail.test | COMPILE_FAIL | 0.135470 | 0.303458 | 0.512289 | — | — | — |
| is_nothrow_move_constructible_fail.test | COMPILE_FAIL | 0.137524 | 0.309325 | 0.504290 | — | — | — |
| is_nothrow_move_assignable_fail.test | COMPILE_FAIL | 0.136047 | 0.314366 | 0.500807 | — | — | — |
| is_list_constructible_fail.test | COMPILE_FAIL | 0.136358 | 0.309766 | 0.475346 | — | — | — |
| is_empty_fail.test | COMPILE_FAIL | 0.140332 | 0.321876 | 0.461385 | — | — | — |
| is_destructible_fail.test | COMPILE_FAIL | 0.134941 | 0.306746 | 0.472848 | — | — | — |
| is_default_constructible_fail.test | COMPILE_FAIL | 0.135813 | 0.306864 | 0.501187 | — | — | — |
| is_copy_constructible_fail.test | COMPILE_FAIL | 0.137660 | 0.314267 | 0.503024 | — | — | — |
| is_copy_assignable_fail.test | COMPILE_FAIL | 0.135562 | 0.312618 | 0.503051 | — | — | — |
| is_convertible_fail.test | COMPILE_FAIL | 0.136016 | 0.311673 | 0.479911 | — | — | — |
| is_convertible2_fail.test | COMPILE_FAIL | 0.138239 | 0.308077 | 0.493263 | — | — | — |
| is_constructible_fail.test | COMPILE_FAIL | 0.136217 | 0.314432 | 0.507728 | — | — | — |
| is_base_of_fail.test | COMPILE_FAIL | 0.135286 | 0.317687 | 0.494731 | — | — | — |
| is_assignable_fail.test | COMPILE_FAIL | 0.135305 | 0.304500 | 0.483712 | — | — | — |
| has_nothrow_destruct_fail.test | COMPILE_FAIL | 0.136273 | 0.314225 | 0.498751 | — | — | — |
| has_nothrow_copy_fail.test | COMPILE_FAIL | 0.136229 | 0.322158 | 0.506296 | — | — | — |
| has_nothrow_cons_fail.test | COMPILE_FAIL | 0.135350 | 0.324070 | 0.494330 | — | — | — |
| has_nothrow_assign_fail.test | COMPILE_FAIL | 0.136419 | 0.312515 | 0.506855 | — | — | — |
| common_type_fail.test | COMPILE_FAIL | 0.138331 | 0.306518 | 0.498907 | — | — | — |
| common_type2_fail.test | COMPILE_FAIL | 0.139927 | 0.318563 | 0.503752 | — | — | — |
| has_nothrow_assign_test_no_intrinsics.test | RUN | 0.221683 | 0.708157 | 1.407608 | 0.001866 | 0.001975 | 0.001892 |
| has_nothrow_constr_test_no_intrinsics.test | RUN | 0.206878 | 0.693506 | 1.406709 | 0.001421 | 0.002120 | 0.001908 |
| has_nothrow_copy_test_no_intrinsics.test | RUN | 0.208278 | 0.694819 | 1.391473 | 0.001672 | 0.001989 | 0.001840 |
| is_nothrow_move_assignable_test_no_intrinsics.test | RUN | 0.222986 | 0.684508 | 1.383039 | 0.001437 | 0.001416 | 0.001503 |
| is_nothrow_move_constructible_test_no_intrinsics.test | RUN | 0.123052 | 0.473571 | 0.888559 | 0.001407 | 0.001399 | 0.001296 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.998× | 0.997×, 0.999× | 0.992× |
| clang | 1.021× | 1.026×, 1.017× | 1.002× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1359 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/43750858933).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| add_const_test.test | 10 | 0.001466s | 0.001481s | 0.001478s | byte equality observed |
| add_cv_test.test | 10 | 0.001450s | 0.001448s | 0.001433s | byte equality observed |
| add_lvalue_reference_test.test | 10 | 0.001469s | 0.001451s | 0.001438s | byte equality observed |
| add_pointer_test.test | 10 | 0.001424s | 0.001464s | 0.001413s | byte equality observed |
| add_reference_test.test | 10 | 0.001460s | 0.001474s | 0.001463s | byte equality observed |
| add_rvalue_reference_test.test | 10 | 0.001469s | 0.001429s | 0.001474s | byte equality observed |
| add_volatile_test.test | 10 | 0.001471s | 0.001415s | 0.001477s | byte equality observed |
| aligned_storage_a2_test.test | 10 | 0.001585s | 0.001586s | 0.001605s | byte equality observed |
| aligned_storage_empy_test.test | 10 | 0.001446s | 0.001484s | 0.001459s | byte equality observed |
| aligned_storage_test.test | 10 | 0.001580s | 0.001581s | 0.001595s | byte equality observed |
| alignment_of_a2_test.test | 10 | 0.001445s | 0.001451s | 0.001433s | byte equality observed |
| alignment_of_test.test | 10 | 0.001461s | 0.001451s | 0.001431s | byte equality observed |
| common_type_2_test.test | 10 | 0.001473s | 0.001441s | 0.001429s | byte equality observed |
| common_type_3_test.test | 10 | 0.001439s | 0.001441s | 0.001450s | byte equality observed |
| common_type_4_test.test | 10 | 0.001430s | 0.001440s | 0.001442s | byte equality observed |
| common_type_5_test.test | 10 | 0.001442s | 0.001427s | 0.001447s | byte equality observed |
| common_type_6_test.test | 10 | 0.001453s | 0.001434s | 0.001420s | byte equality observed |
| common_type_sfinae2_test.test | 10 | 0.001425s | 0.001431s | 0.001486s | byte equality observed |
| common_type_sfinae_test.test | 9 | 0.001440s | 0.001465s | 0.001442s | byte equality observed |
| common_type_test.test | 10 | 0.001451s | 0.001417s | 0.001442s | byte equality observed |
| conditional_test.test | 10 | 0.001437s | 0.001437s | 0.001436s | byte equality observed |
| conjunction_test.test | 10 | 0.001448s | 0.001433s | 0.001459s | byte equality observed |
| copy_cv_ref_test.test | 10 | 0.001436s | 0.001460s | 0.001398s | byte equality observed |
| copy_cv_test.test | 10 | 0.001440s | 0.001436s | 0.001450s | byte equality observed |
| copy_reference_test.test | 10 | 0.001421s | 0.001417s | 0.001440s | byte equality observed |
| cxx14_aliases_test.test | 10 | 0.001457s | 0.001440s | 0.001458s | byte equality observed |
| decay_test.test | 10 | 0.001451s | 0.001473s | 0.001423s | byte equality observed |
| detected_or_test.test | 10 | 0.001451s | 0.001419s | 0.001446s | byte equality observed |
| detected_test.test | 10 | 0.001440s | 0.001430s | 0.001467s | byte equality observed |
| disjunction_test.test | 10 | 0.001449s | 0.001457s | 0.001431s | byte equality observed |
| enable_if_test.test | 10 | 0.001443s | 0.001454s | 0.001438s | byte equality observed |
| extent_test.test | 10 | 0.001451s | 0.001467s | 0.001434s | byte equality observed |
| floating_point_promotion_test.test | 10 | 0.001449s | 0.001439s | 0.001465s | byte equality observed |
| function_traits_test.test | 10 | 0.001449s | 0.001460s | 0.001425s | byte equality observed |
| has_binary_classes0_test.test | 10 | 0.001429s | 0.001434s | 0.001434s | byte equality observed |
| has_binary_classes1_test.test | 10 | 0.001451s | 0.001416s | 0.001447s | byte equality observed |
| has_binary_classes2_test.test | 10 | 0.001454s | 0.001451s | 0.001433s | byte equality observed |
| has_binary_classes3_test.test | 10 | 0.001444s | 0.001457s | 0.001430s | byte equality observed |
| has_binary_classes4_test.test | 10 | 0.001437s | 0.001416s | 0.001420s | byte equality observed |
| has_binary_classes5_test.test | 10 | 0.001455s | 0.001446s | 0.001430s | byte equality observed |
| has_binary_classes6_test.test | 10 | 0.001432s | 0.001449s | 0.001446s | byte equality observed |
| has_binary_classes7_test.test | 10 | 0.001443s | 0.001454s | 0.001460s | byte equality observed |
| has_binary_classes8_test.test | 10 | 0.001442s | 0.001437s | 0.001459s | byte equality observed |
| has_binary_classes9_test.test | 10 | 0.001429s | 0.001436s | 0.001437s | byte equality observed |
| has_bit_and_assign_test.test | 10 | 0.001452s | 0.001456s | 0.001436s | byte equality observed |
| has_bit_and_test.test | 10 | 0.001418s | 0.001466s | 0.001442s | byte equality observed |
| has_bit_or_assign_test.test | 10 | 0.001451s | 0.001442s | 0.001449s | byte equality observed |
| has_bit_or_test.test | 10 | 0.001445s | 0.001438s | 0.001425s | byte equality observed |
| has_bit_xor_assign_test.test | 10 | 0.001438s | 0.001466s | 0.001430s | byte equality observed |
| has_bit_xor_test.test | 10 | 0.001441s | 0.001452s | 0.001433s | byte equality observed |
| has_complement_test.test | 10 | 0.001426s | 0.001448s | 0.001434s | byte equality observed |
| has_dereference_test.test | 10 | 0.001451s | 0.001460s | 0.001420s | byte equality observed |
| has_divides_assign_test.test | 8 | 0.001450s | 0.001456s | 0.001428s | byte equality observed |
| has_divides_test.test | 10 | 0.001485s | 0.001429s | 0.001414s | byte equality observed |
| has_equal_to_test.test | 10 | 0.001461s | 0.001432s | 0.001433s | byte equality observed |
| has_greater_equal_test.test | 9 | 0.001446s | 0.001419s | 0.001433s | byte equality observed |
| has_greater_test.test | 10 | 0.001455s | 0.001455s | 0.001414s | byte equality observed |
| has_left_shift_assign_test.test | 10 | 0.001442s | 0.001448s | 0.001459s | byte equality observed |
| has_left_shift_test.test | 10 | 0.001444s | 0.001436s | 0.001415s | byte equality observed |
| has_less_equal_test.test | 10 | 0.001445s | 0.001432s | 0.001439s | byte equality observed |
| has_less_test.test | 10 | 0.001433s | 0.001433s | 0.001442s | byte equality observed |
| has_logical_and_test.test | 10 | 0.001422s | 0.001424s | 0.001442s | byte equality observed |
| has_logical_not_test.test | 10 | 0.001445s | 0.001459s | 0.001426s | byte equality observed |
| has_logical_or_test.test | 9 | 0.001435s | 0.001445s | 0.001426s | byte equality observed |
| has_minus_assign_test.test | 10 | 0.001447s | 0.001447s | 0.001432s | byte equality observed |
| has_minus_test.test | 10 | 0.001438s | 0.001420s | 0.001458s | byte equality observed |
| has_modulus_assign_test.test | 10 | 0.001437s | 0.001444s | 0.001427s | byte equality observed |
| has_modulus_test.test | 10 | 0.001458s | 0.001444s | 0.001456s | byte equality observed |
| has_multiplies_assign_test.test | 10 | 0.001438s | 0.001414s | 0.001438s | byte equality observed |
| has_multiplies_test.test | 10 | 0.001453s | 0.001455s | 0.001403s | byte equality observed |
| has_negate_test.test | 10 | 0.001455s | 0.001411s | 0.001427s | byte equality observed |
| has_not_equal_to_test.test | 10 | 0.001427s | 0.001412s | 0.001446s | byte equality observed |
| has_nothrow_assign_test.test | 10 | 0.001444s | 0.001416s | 0.001409s | byte equality observed |
| has_nothrow_assign_test_no_intrinsics.test | 10 | 0.001447s | 0.001471s | 0.001459s | byte equality observed |
| has_nothrow_constr_test.test | 10 | 0.001437s | 0.001477s | 0.001457s | byte equality observed |
| has_nothrow_constr_test_no_intrinsics.test | 10 | 0.001466s | 0.001435s | 0.001449s | byte equality observed |
| has_nothrow_copy_test.test | 10 | 0.001422s | 0.001424s | 0.001430s | byte equality observed |
| has_nothrow_copy_test_no_intrinsics.test | 10 | 0.001448s | 0.001424s | 0.001444s | byte equality observed |
| has_nothrow_destructor_test.test | 10 | 0.001431s | 0.001445s | 0.001438s | byte equality observed |
| has_operator_new_test.test | 10 | 0.001438s | 0.001448s | 0.001459s | byte equality observed |
| has_plus_assign_test.test | 10 | 0.001448s | 0.001463s | 0.001448s | byte equality observed |
| has_plus_test.test | 10 | 0.001430s | 0.001455s | 0.001412s | byte equality observed |
| has_post_decrement_test.test | 10 | 0.001456s | 0.001433s | 0.001420s | byte equality observed |
| has_post_increment_test.test | 10 | 0.001443s | 0.001413s | 0.001420s | byte equality observed |
| has_postfix_classes0_test.test | 10 | 0.001452s | 0.001425s | 0.001455s | byte equality observed |
| has_postfix_classes1_test.test | 10 | 0.001441s | 0.001464s | 0.001431s | byte equality observed |
| has_postfix_classes2_test.test | 10 | 0.001446s | 0.001427s | 0.001420s | byte equality observed |
| has_postfix_classes3_test.test | 10 | 0.001426s | 0.001423s | 0.001450s | byte equality observed |
| has_pre_decrement_test.test | 10 | 0.001445s | 0.001462s | 0.001441s | byte equality observed |
| has_pre_increment_test.test | 10 | 0.001436s | 0.001459s | 0.001430s | byte equality observed |
| has_prefix_classes0_test.test | 10 | 0.001430s | 0.001461s | 0.001458s | byte equality observed |
| has_prefix_classes1_test.test | 10 | 0.001460s | 0.001445s | 0.001431s | byte equality observed |
| has_prefix_classes2_test.test | 9 | 0.001434s | 0.001457s | 0.001415s | byte equality observed |
| has_prefix_classes3_test.test | 10 | 0.001444s | 0.001440s | 0.001441s | byte equality observed |
| has_right_shift_assign_test.test | 10 | 0.001440s | 0.001437s | 0.001424s | byte equality observed |
| has_right_shift_test.test | 10 | 0.001419s | 0.001430s | 0.001447s | byte equality observed |
| has_trivial_assign_test.test | 10 | 0.001508s | 0.001522s | 0.001514s | byte equality observed |
| has_trivial_constr_test.test | 10 | 0.001514s | 0.001481s | 0.001502s | native test oracle; output varies |
| has_trivial_copy_test.test | 10 | 0.001535s | 0.001523s | 0.001586s | native test oracle; output varies |
| has_trivial_destructor_test.test | 10 | 0.001461s | 0.001437s | 0.001437s | byte equality observed |
| has_trivial_move_assign_test.test | 10 | 0.001451s | 0.001427s | 0.001414s | byte equality observed |
| has_trivial_move_constructor_test.test | 10 | 0.001448s | 0.001433s | 0.001458s | byte equality observed |
| has_unary_minus_test.test | 10 | 0.001444s | 0.001459s | 0.001439s | byte equality observed |
| has_unary_plus_test.test | 10 | 0.001467s | 0.001445s | 0.001422s | byte equality observed |
| has_virtual_destructor_test.test | 10 | 0.001432s | 0.001462s | 0.001433s | byte equality observed |
| integral_constant_test.test | 10 | 0.000628s | 0.000634s | 0.001432s | byte equality observed |
| is_abstract_test.test | 10 | 0.001477s | 0.001452s | 0.001444s | byte equality observed |
| is_arithmetic_test.test | 10 | 0.001447s | 0.001444s | 0.001455s | byte equality observed |
| is_array_test.test | 10 | 0.001454s | 0.001413s | 0.001432s | byte equality observed |
| is_assignable_test.test | 10 | 0.001436s | 0.001427s | 0.001447s | byte equality observed |
| is_base_and_derived_test.test | 10 | 0.001436s | 0.001417s | 0.001450s | byte equality observed |
| is_base_of_test.test | 10 | 0.001441s | 0.001461s | 0.001422s | byte equality observed |
| is_bounded_array_test.test | 10 | 0.001449s | 0.001445s | 0.001441s | byte equality observed |
| is_class_test.test | 10 | 0.001440s | 0.001449s | 0.001455s | byte equality observed |
| is_complete_test.test | 10 | 0.001439s | 0.001452s | 0.001465s | byte equality observed |
| is_complex_test.test | 10 | 0.001431s | 0.001436s | 0.001419s | byte equality observed |
| is_compound_test.test | 10 | 0.001416s | 0.001468s | 0.001443s | byte equality observed |
| is_const_test.test | 10 | 0.001412s | 0.001427s | 0.001429s | byte equality observed |
| is_constructible_test.test | 10 | 0.001454s | 0.001448s | 0.001455s | byte equality observed |
| is_convertible_test.test | 10 | 0.001473s | 0.001435s | 0.001442s | byte equality observed |
| is_copy_assignable_test.test | 10 | 0.001446s | 0.001457s | 0.001440s | byte equality observed |
| is_copy_constructible_test.test | 10 | 0.001436s | 0.001430s | 0.001449s | byte equality observed |
| is_default_constr_test.test | 10 | 0.001449s | 0.001424s | 0.001436s | byte equality observed |
| is_destructible_test.test | 10 | 0.001442s | 0.001479s | 0.001429s | byte equality observed |
| is_detected_exact_test.test | 10 | 0.001435s | 0.001420s | 0.001429s | byte equality observed |
| is_detected_test.test | 10 | 0.001448s | 0.001454s | 0.001445s | byte equality observed |
| is_empty_test.test | 10 | 0.001455s | 0.001408s | 0.001423s | byte equality observed |
| is_enum_test.test | 10 | 0.001448s | 0.001461s | 0.001443s | byte equality observed |
| is_final_test.test | 10 | 0.001439s | 0.001436s | 0.001421s | byte equality observed |
| is_float_test.test | 10 | 0.001470s | 0.001417s | 0.001452s | byte equality observed |
| is_floating_point_test.test | 10 | 0.001439s | 0.001436s | 0.001457s | byte equality observed |
| is_function_test.test | 10 | 0.001468s | 0.001450s | 0.001415s | byte equality observed |
| is_fundamental_test.test | 10 | 0.001418s | 0.001429s | 0.001420s | byte equality observed |
| is_integral_test.test | 8 | 0.001436s | 0.001422s | 0.001392s | byte equality observed |
| is_list_constructible_test.test | 10 | 0.001443s | 0.001461s | 0.001406s | byte equality observed |
| is_lvalue_reference_test.test | 10 | 0.001439s | 0.001454s | 0.001441s | byte equality observed |
| is_member_func_test.test | 10 | 0.001446s | 0.001418s | 0.001432s | byte equality observed |
| is_member_obj_test.test | 10 | 0.001438s | 0.001445s | 0.001420s | byte equality observed |
| is_member_pointer_test.test | 10 | 0.001460s | 0.001416s | 0.001428s | byte equality observed |
| is_noncopyable_test.test | 10 | 0.001458s | 0.001428s | 0.001445s | byte equality observed |
| is_nothrow_move_assignable_test.test | 10 | 0.001462s | 0.001439s | 0.001457s | byte equality observed |
| is_nothrow_move_assignable_test_no_intrinsics.test | 10 | 0.001425s | 0.001452s | 0.001460s | byte equality observed |
| is_nothrow_move_constructible_test.test | 10 | 0.001449s | 0.001458s | 0.001434s | byte equality observed |
| is_nothrow_move_constructible_test_no_intrinsics.test | 10 | 0.001445s | 0.001452s | 0.001437s | byte equality observed |
| is_nothrow_swappable_test.test | 10 | 0.001449s | 0.001437s | 0.001447s | byte equality observed |
| is_object_test.test | 10 | 0.001432s | 0.001439s | 0.001432s | byte equality observed |
| is_pod_test.test | 10 | 0.001432s | 0.001425s | 0.001423s | byte equality observed |
| is_pointer_test.test | 10 | 0.001452s | 0.001427s | 0.001466s | byte equality observed |
| is_polymorphic_test.test | 10 | 0.001452s | 0.001435s | 0.001433s | byte equality observed |
| is_reference_test.test | 10 | 0.001444s | 0.001444s | 0.001417s | byte equality observed |
| is_rvalue_reference_test.test | 10 | 0.001439s | 0.001437s | 0.001439s | byte equality observed |
| is_same_test.test | 10 | 0.001456s | 0.001437s | 0.001425s | byte equality observed |
| is_scalar_test.test | 10 | 0.001437s | 0.001439s | 0.001449s | byte equality observed |
| is_scoped_enum_test.test | 10 | 0.001437s | 0.001436s | 0.001439s | byte equality observed |
| is_signed_test.test | 10 | 0.001468s | 0.001428s | 0.001458s | byte equality observed |
| is_stateless_test.test | 10 | 0.001469s | 0.001428s | 0.001449s | byte equality observed |
| is_swappable_test.test | 10 | 0.001437s | 0.001468s | 0.001439s | byte equality observed |
| is_trivially_copyable_test.test | 10 | 0.001485s | 0.001446s | 0.001487s | byte equality observed |
| is_unbounded_array_test.test | 10 | 0.001429s | 0.001447s | 0.001438s | byte equality observed |
| is_union_test.test | 10 | 0.001450s | 0.001417s | 0.001439s | byte equality observed |
| is_unscoped_enum_test.test | 9 | 0.001456s | 0.001427s | 0.001400s | byte equality observed |
| is_unsigned_test.test | 10 | 0.001441s | 0.001448s | 0.001450s | byte equality observed |
| is_virtual_base_of_test.test | 10 | 0.001420s | 0.001459s | 0.001467s | byte equality observed |
| is_void_test.test | 10 | 0.001444s | 0.001467s | 0.001440s | byte equality observed |
| is_volatile_test.test | 10 | 0.001418s | 0.001435s | 0.001437s | byte equality observed |
| make_signed_test.test | 10 | 0.001436s | 0.001452s | 0.001457s | byte equality observed |
| make_unsigned_test.test | 10 | 0.001472s | 0.001434s | 0.001438s | byte equality observed |
| make_void_test.test | 10 | 0.001461s | 0.001480s | 0.001441s | byte equality observed |
| mpl_interop_test1.test | 10 | 0.000643s | 0.000638s | 0.001440s | byte equality observed |
| mpl_interop_test2.test | 10 | 0.000635s | 0.000654s | 0.001435s | byte equality observed |
| mpl_interop_test3.test | 10 | 0.000646s | 0.000655s | 0.001418s | byte equality observed |
| negation_test.test | 10 | 0.001506s | 0.001502s | 0.001424s | byte equality observed |
| promote_basic_test.test | 10 | 0.000646s | 0.000649s | 0.001463s | byte equality observed |
| promote_enum_msvc_bug_test.test | 10 | 0.000648s | 0.000630s | 0.001445s | byte equality observed |
| promote_enum_test.test | 10 | 0.000643s | 0.000647s | 0.001435s | byte equality observed |
| promote_mpl_test.test | 10 | 0.000637s | 0.000634s | 0.001451s | byte equality observed |
| rank_test.test | 10 | 0.001456s | 0.001482s | 0.001453s | byte equality observed |
| remove_all_extents_test.test | 10 | 0.001442s | 0.001448s | 0.001446s | byte equality observed |
| remove_bounds_test.test | 10 | 0.001454s | 0.001433s | 0.001465s | byte equality observed |
| remove_const_test.test | 10 | 0.001450s | 0.001412s | 0.001428s | byte equality observed |
| remove_cv_ref_test.test | 10 | 0.001466s | 0.001460s | 0.001434s | byte equality observed |
| remove_cv_test.test | 10 | 0.001456s | 0.001412s | 0.001444s | byte equality observed |
| remove_extent_test.test | 10 | 0.001447s | 0.001425s | 0.001424s | byte equality observed |
| remove_pointer_test.test | 10 | 0.001458s | 0.001449s | 0.001456s | byte equality observed |
| remove_reference_test.test | 10 | 0.001454s | 0.001441s | 0.001475s | byte equality observed |
| remove_volatile_test.test | 10 | 0.001430s | 0.001443s | 0.001420s | byte equality observed |
| tricky_abstract_type_test.test | 10 | 0.001436s | 0.001446s | 0.001415s | byte equality observed |
| tricky_add_pointer_test.test | 10 | 0.001464s | 0.001415s | 0.001416s | byte equality observed |
| tricky_function_type_test.test | 10 | 0.001432s | 0.001431s | 0.001431s | byte equality observed |
| tricky_incomplete_type_test.test | 10 | 0.001457s | 0.001422s | 0.001430s | byte equality observed |
| tricky_is_enum_test.test | 10 | 0.001434s | 0.001445s | 0.001454s | byte equality observed |
| tricky_partial_spec_test.test | 10 | 0.001464s | 0.001436s | 0.001469s | byte equality observed |
| tricky_rvalue_test.test | 10 | 0.001454s | 0.001455s | 0.001454s | byte equality observed |
| type_identity_test.test | 10 | 0.001450s | 0.001413s | 0.001437s | byte equality observed |
| type_traits_test.test | 10 | 0.000635s | 0.000633s | 0.001427s | byte equality observed |
| type_with_alignment_test.test | 10 | 0.001626s | 0.001620s | 0.001618s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/43750858933).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
