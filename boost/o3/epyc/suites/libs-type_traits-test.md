# libs/type_traits/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| type_with_alignment_test.test | RUN | 0.147636 | 0.403162 | 0.655215 | 0.001801 | 0.002168 | 0.002090 |
| type_traits_test.test | RUN | 0.205886 | 0.430484 | 0.629860 | 0.000677 | 0.000782 | 0.001781 |
| type_identity_test.test | RUN | 0.389041 | 1.483001 | 3.757006 | 0.001995 | 0.002055 | 0.002043 |
| tricky_rvalue_test.test | RUN | 0.137596 | 0.329251 | 0.499017 | 0.001934 | 0.002064 | 0.001669 |
| tricky_partial_spec_test.test | RUN | 0.168412 | 0.463195 | 0.828981 | 0.001899 | 0.001997 | 0.001687 |
| tricky_is_enum_test.test | RUN | 0.128713 | 0.313668 | 0.460500 | 0.001942 | 0.002060 | 0.002060 |
| tricky_incomplete_type_test.test | RUN | 0.220990 | 0.486847 | 0.771872 | 0.001898 | 0.001992 | 0.001718 |
| tricky_function_type_test.test | RUN | 0.174452 | 0.489004 | 0.927371 | 0.002084 | 0.001969 | 0.001988 |
| tricky_add_pointer_test.test | RUN | 0.264681 | 0.892320 | 2.117700 | 0.001861 | 0.002097 | 0.002046 |
| tricky_abstract_type_test.test | RUN | 0.142765 | 0.325852 | 0.477327 | 0.002124 | 0.001814 | 0.001906 |
| remove_volatile_test.test | RUN | 0.354264 | 1.295649 | 3.372947 | 0.002122 | 0.002138 | 0.002016 |
| remove_reference_test.test | RUN | 0.360849 | 1.322521 | 3.499337 | 0.002014 | 0.002134 | 0.002014 |
| remove_pointer_test.test | RUN | 0.384113 | 1.352028 | 3.647911 | 0.001952 | 0.002158 | 0.001982 |
| remove_extent_test.test | RUN | 0.365927 | 1.344216 | 3.543086 | 0.001889 | 0.001990 | 0.002010 |
| remove_cv_test.test | RUN | 0.359892 | 1.341984 | 3.516683 | 0.001998 | 0.002233 | 0.001998 |
| remove_cv_ref_test.test | RUN | 0.771254 | 3.149405 | 8.537255 | 0.001957 | 0.001747 | 0.001955 |
| remove_const_test.test | RUN | 0.358834 | 1.228554 | 3.349421 | 0.002036 | 0.002146 | 0.001983 |
| remove_bounds_test.test | RUN | 0.369404 | 1.320637 | 3.542403 | 0.001897 | 0.001961 | 0.002036 |
| remove_all_extents_test.test | RUN | 0.367579 | 1.356725 | 3.398116 | 0.001834 | 0.001869 | 0.001793 |
| rank_test.test | RUN | 0.136758 | 0.336825 | 0.511638 | 0.001784 | 0.002154 | 0.002017 |
| promote_mpl_test.test | RUN | 0.125936 | 0.302939 | 0.354090 | 0.000706 | 0.000834 | 0.002086 |
| promote_enum_test.test | RUN | 0.028374 | 0.075120 | 0.089115 | 0.000703 | 0.000795 | 0.001872 |
| promote_enum_msvc_bug_test.test | RUN | 0.027374 | 0.061542 | 0.074563 | 0.000766 | 0.000781 | 0.001915 |
| promote_basic_test.test | RUN | 0.032228 | 0.085586 | 0.091646 | 0.000786 | 0.000749 | 0.001901 |
| negation_test.test | RUN | 0.132337 | 0.297220 | 0.407891 | 0.001880 | 0.001967 | 0.001806 |
| mpl_interop_test3.test | RUN | 0.113694 | 0.287282 | 0.312002 | 0.000731 | 0.000685 | 0.001860 |
| mpl_interop_test2.test | RUN | 0.042358 | 0.076874 | 0.082380 | 0.000812 | 0.000860 | 0.001941 |
| mpl_interop_test1.test | RUN | 0.022814 | 0.058619 | 0.058711 | 0.000772 | 0.000825 | 0.001940 |
| make_void_test.test | RUN | 0.138791 | 0.317237 | 0.513181 | 0.002014 | 0.001953 | 0.002037 |
| make_unsigned_test.test | RUN | 0.163637 | 0.432334 | 0.686404 | 0.001853 | 0.002012 | 0.002104 |
| make_signed_test.test | RUN | 0.165282 | 0.432509 | 0.736391 | 0.001884 | 0.001886 | 0.002001 |
| is_volatile_test.test | RUN | 0.150945 | 0.358741 | 0.571016 | 0.001954 | 0.001794 | 0.001833 |
| is_void_test.test | RUN | 0.141097 | 0.340065 | 0.505169 | 0.001996 | 0.001989 | 0.002026 |
| is_virtual_base_of_test.test | RUN | 0.162488 | 0.438660 | 0.729811 | 0.001764 | 0.001734 | 0.001699 |
| is_unsigned_test.test | RUN | 0.145675 | 0.349066 | 0.536559 | 0.001846 | 0.001913 | 0.001791 |
| is_unscoped_enum_test.test | RUN | 0.143542 | 0.330164 | 0.451497 | 0.001907 | 0.001766 | 0.001613 |
| is_union_test.test | RUN | 0.152049 | 0.400444 | 0.689511 | 0.001866 | 0.002061 | 0.001869 |
| is_unbounded_array_test.test | RUN | 0.141659 | 0.340807 | 0.535414 | 0.001790 | 0.002155 | 0.001980 |
| is_trivially_copyable_test.test | RUN | 0.228659 | 0.709329 | 1.394821 | 0.002029 | 0.002074 | 0.002076 |
| is_swappable_test.test | RUN | 0.191707 | 0.518611 | 0.982292 | 0.001926 | 0.002086 | 0.001912 |
| is_stateless_test.test | RUN | 0.205710 | 0.599784 | 1.153410 | 0.001872 | 0.002126 | 0.002152 |
| is_signed_test.test | RUN | 0.143797 | 0.346379 | 0.561830 | 0.001918 | 0.001951 | 0.001964 |
| is_scoped_enum_test.test | RUN | 0.138087 | 0.315227 | 0.434535 | 0.002038 | 0.001833 | 0.001812 |
| is_scalar_test.test | RUN | 0.179273 | 0.555079 | 1.024636 | 0.002014 | 0.001927 | 0.001610 |
| is_same_test.test | RUN | 0.137694 | 0.335976 | 0.502404 | 0.001563 | 0.001732 | 0.002026 |
| is_rvalue_reference_test.test | RUN | 0.146880 | 0.391298 | 0.591390 | 0.001784 | 0.001916 | 0.001716 |
| is_reference_test.test | RUN | 0.147676 | 0.384052 | 0.643296 | 0.002013 | 0.001983 | 0.001888 |
| is_polymorphic_test.test | RUN | 0.151991 | 0.394966 | 0.636797 | 0.002070 | 0.001951 | 0.001994 |
| is_pointer_test.test | RUN | 0.149969 | 0.387306 | 0.663197 | 0.001978 | 0.001769 | 0.001905 |
| is_pod_test.test | RUN | 0.190580 | 0.632389 | 1.207986 | 0.001868 | 0.002134 | 0.001990 |
| is_object_test.test | RUN | 0.136678 | 0.335334 | 0.456700 | 0.001724 | 0.002126 | 0.002006 |
| is_nothrow_swappable_test.test | RUN | 0.198241 | 0.578757 | 1.113188 | 0.002118 | 0.002027 | 0.002037 |
| is_nothrow_move_constructible_test.test | RUN | 0.190862 | 0.587757 | 1.136455 | 0.002159 | 0.001742 | 0.001930 |
| is_nothrow_move_assignable_test.test | RUN | 0.194593 | 0.613679 | 1.146906 | 0.001790 | 0.001622 | 0.001721 |
| is_noncopyable_test.test | RUN | 0.140903 | 0.333942 | 0.514627 | 0.001643 | 0.002052 | 0.001850 |
| is_member_pointer_test.test | RUN | 0.141826 | 0.341992 | 0.500734 | 0.002126 | 0.002141 | 0.001976 |
| is_member_obj_test.test | RUN | 0.138808 | 0.350911 | 0.499232 | 0.002118 | 0.001754 | 0.001960 |
| is_member_func_test.test | RUN | 0.140380 | 0.356432 | 0.591447 | 0.001755 | 0.002040 | 0.001864 |
| is_lvalue_reference_test.test | RUN | 0.141809 | 0.381855 | 0.640208 | 0.001656 | 0.001870 | 0.001866 |
| is_list_constructible_test.test | RUN | 0.175083 | 0.445069 | 0.673489 | 0.002061 | 0.001847 | 0.002014 |
| is_integral_test.test | RUN | 0.174970 | 0.527328 | 0.954691 | 0.002054 | 0.002125 | 0.001608 |
| is_fundamental_test.test | RUN | 0.180612 | 0.550603 | 0.977175 | 0.001717 | 0.001995 | 0.001770 |
| is_function_test.test | RUN | 0.145863 | 0.364076 | 0.578211 | 0.001782 | 0.001796 | 0.002016 |
| is_floating_point_test.test | RUN | 0.148511 | 0.389385 | 0.643868 | 0.001984 | 0.002021 | 0.001988 |
| is_float_test.test | RUN | 0.148764 | 0.392095 | 0.613367 | 0.001986 | 0.001838 | 0.001960 |
| is_final_test.test | RUN | 0.148354 | 0.391074 | 0.654097 | 0.001834 | 0.002092 | 0.001802 |
| is_enum_test.test | RUN | 0.139121 | 0.329379 | 0.514517 | 0.001562 | 0.002082 | 0.001972 |
| is_empty_test.test | RUN | 0.147289 | 0.353470 | 0.514765 | 0.002072 | 0.002234 | 0.002022 |
| is_detected_test.test | RUN | 0.131609 | 0.306462 | 0.414559 | 0.001708 | 0.002040 | 0.002033 |
| is_detected_exact_test.test | RUN | 0.130772 | 0.316889 | 0.459522 | 0.001894 | 0.001788 | 0.002046 |
| is_destructible_test.test | RUN | 0.190304 | 0.599702 | 1.182390 | 0.001817 | 0.002163 | 0.001924 |
| is_default_constr_test.test | RUN | 0.192831 | 0.627644 | 1.148744 | 0.002109 | 0.001932 | 0.002057 |
| is_copy_constructible_test.test | RUN | 0.204936 | 0.657294 | 1.197250 | 0.001869 | 0.001996 | 0.001870 |
| is_copy_assignable_test.test | RUN | 0.200894 | 0.622198 | 1.214894 | 0.001870 | 0.001646 | 0.002014 |
| is_convertible_test.test | RUN | 0.194481 | 0.561617 | 1.021424 | 0.001934 | 0.002127 | 0.001822 |
| is_constructible_test.test | RUN | 0.159538 | 0.422235 | 0.739802 | 0.002072 | 0.001756 | 0.001831 |
| is_const_test.test | RUN | 0.141947 | 0.375189 | 0.554795 | 0.001889 | 0.001659 | 0.001736 |
| is_compound_test.test | RUN | 0.136549 | 0.309486 | 0.459028 | 0.001659 | 0.002042 | 0.001947 |
| is_complex_test.test | RUN | 0.181423 | 0.410985 | 0.617168 | 0.002028 | 0.002172 | 0.001818 |
| is_complete_test.test | RUN | 0.161189 | 0.426754 | 0.751799 | 0.001918 | 0.001710 | 0.001746 |
| is_class_test.test | RUN | 0.145102 | 0.382537 | 0.646917 | 0.001984 | 0.001974 | 0.001657 |
| is_bounded_array_test.test | RUN | 0.141363 | 0.339598 | 0.507653 | 0.001721 | 0.001862 | 0.001831 |
| is_base_of_test.test | RUN | 0.149105 | 0.371276 | 0.606943 | 0.002040 | 0.002214 | 0.001774 |
| is_base_and_derived_test.test | RUN | 0.148516 | 0.369285 | 0.584762 | 0.002036 | 0.001864 | 0.001938 |
| is_assignable_test.test | RUN | 0.178395 | 0.512696 | 0.921778 | 0.001881 | 0.001872 | 0.001800 |
| is_array_test.test | RUN | 0.145819 | 0.362593 | 0.601053 | 0.001908 | 0.001854 | 0.001872 |
| is_arithmetic_test.test | RUN | 0.176025 | 0.523042 | 0.989211 | 0.001941 | 0.002136 | 0.001981 |
| is_abstract_test.test | RUN | 0.318288 | 1.419016 | 3.204962 | 0.001933 | 0.001970 | 0.001985 |
| integral_constant_test.test | RUN | 0.021370 | 0.061493 | 0.057509 | 0.000768 | 0.000847 | 0.001683 |
| has_virtual_destructor_test.test | RUN | 0.156895 | 0.428024 | 0.707397 | 0.001926 | 0.002132 | 0.002046 |
| has_unary_plus_test.test | RUN | 0.299833 | 1.634099 | 2.571544 | 0.001971 | 0.002012 | 0.002056 |
| has_unary_minus_test.test | RUN | 0.292419 | 1.572817 | 2.446313 | 0.002056 | 0.001929 | 0.002002 |
| has_trivial_move_constructor_test.test | RUN | 0.200627 | 0.587706 | 1.207019 | 0.001706 | 0.001714 | 0.001978 |
| has_trivial_move_assign_test.test | RUN | 0.202959 | 0.605926 | 1.086050 | 0.001804 | 0.001905 | 0.002052 |
| has_trivial_destructor_test.test | RUN | 0.197129 | 0.616687 | 1.159755 | 0.001993 | 0.001759 | 0.001552 |
| has_trivial_copy_test.test | RUN | 0.205515 | 0.656564 | 1.230701 | 0.002210 | 0.002344 | 0.002244 |
| has_trivial_constr_test.test | RUN | 0.206859 | 0.677862 | 1.239157 | 0.001896 | 0.002230 | 0.002213 |
| has_trivial_assign_test.test | RUN | 0.209046 | 0.650769 | 1.225416 | 0.001992 | 0.002239 | 0.002106 |
| has_right_shift_test.test | RUN | 0.306968 | 1.211671 | 2.689152 | 0.002000 | 0.002026 | 0.002038 |
| has_right_shift_assign_test.test | RUN | 0.291479 | 1.142455 | 2.529764 | 0.001938 | 0.002162 | 0.001553 |
| has_prefix_classes3_test.test | RUN | 0.213748 | 0.657639 | 1.281697 | 0.001986 | 0.001888 | 0.001986 |
| has_prefix_classes2_test.test | RUN | 0.216239 | 0.684933 | 1.256600 | 0.001656 | 0.001962 | 0.002058 |
| has_prefix_classes1_test.test | RUN | 0.214670 | 0.668124 | 1.236450 | 0.001778 | 0.002178 | 0.001930 |
| has_prefix_classes0_test.test | RUN | 0.212996 | 0.695037 | 1.220884 | 0.001580 | 0.002102 | 0.002022 |
| has_pre_increment_test.test | RUN | 0.292818 | 1.563084 | 2.527320 | 0.001812 | 0.002106 | 0.002108 |
| has_pre_decrement_test.test | RUN | 0.289751 | 1.577506 | 2.478647 | 0.001933 | 0.001944 | 0.001873 |
| has_postfix_classes3_test.test | RUN | 0.218288 | 0.674270 | 1.341206 | 0.001920 | 0.001907 | 0.001940 |
| has_postfix_classes2_test.test | RUN | 0.215638 | 0.655264 | 1.315605 | 0.001841 | 0.001984 | 0.001798 |
| has_postfix_classes1_test.test | RUN | 0.217588 | 0.674122 | 1.263213 | 0.001979 | 0.002138 | 0.002082 |
| has_postfix_classes0_test.test | RUN | 0.218005 | 0.690729 | 1.293515 | 0.001676 | 0.002122 | 0.001965 |
| has_post_increment_test.test | RUN | 0.292081 | 1.620161 | 2.521663 | 0.001934 | 0.002042 | 0.001869 |
| has_post_decrement_test.test | RUN | 0.292497 | 1.609995 | 2.546595 | 0.001806 | 0.001794 | 0.001924 |
| has_plus_test.test | RUN | 0.292709 | 1.125250 | 2.530127 | 0.001873 | 0.001608 | 0.001996 |
| has_plus_assign_test.test | RUN | 0.310306 | 1.102521 | 2.534271 | 0.001841 | 0.002126 | 0.001965 |
| has_operator_new_test.test | RUN | 0.202867 | 0.605635 | 1.162663 | 0.001818 | 0.001875 | 0.001869 |
| has_nothrow_destructor_test.test | RUN | 0.204281 | 0.676779 | 1.259709 | 0.001695 | 0.001762 | 0.002002 |
| has_nothrow_copy_test.test | RUN | 0.198845 | 0.619481 | 1.196812 | 0.001782 | 0.002010 | 0.001925 |
| has_nothrow_constr_test.test | RUN | 0.193438 | 0.610610 | 1.173028 | 0.001735 | 0.002179 | 0.001938 |
| has_nothrow_assign_test.test | RUN | 0.194959 | 0.622515 | 1.157689 | 0.002020 | 0.002079 | 0.001718 |
| has_not_equal_to_test.test | RUN | 0.296861 | 1.544283 | 2.550154 | 0.001682 | 0.002062 | 0.002041 |
| has_negate_test.test | RUN | 0.282643 | 1.119161 | 2.441427 | 0.002097 | 0.002195 | 0.001898 |
| has_multiplies_test.test | RUN | 0.295361 | 1.148209 | 2.505759 | 0.001664 | 0.002026 | 0.002040 |
| has_multiplies_assign_test.test | RUN | 0.299463 | 1.130586 | 2.482276 | 0.001985 | 0.002140 | 0.001746 |
| has_modulus_test.test | RUN | 0.295129 | 1.142678 | 2.485369 | 0.002004 | 0.002202 | 0.001994 |
| has_modulus_assign_test.test | RUN | 0.296970 | 1.144519 | 2.538878 | 0.001985 | 0.002042 | 0.001890 |
| has_minus_test.test | RUN | 0.298984 | 1.147708 | 2.520964 | 0.001756 | 0.002128 | 0.001980 |
| has_minus_assign_test.test | RUN | 0.305639 | 1.110969 | 2.546138 | 0.001904 | 0.002312 | 0.001826 |
| has_logical_or_test.test | RUN | 0.287603 | 1.156940 | 2.507949 | 0.001773 | 0.002036 | 0.002056 |
| has_logical_not_test.test | RUN | 0.282097 | 1.098088 | 2.449233 | 0.001935 | 0.002023 | 0.002204 |
| has_logical_and_test.test | RUN | 0.294028 | 1.157877 | 2.510736 | 0.001628 | 0.002140 | 0.002154 |
| has_less_test.test | RUN | 0.297201 | 1.608425 | 2.508207 | 0.002018 | 0.002182 | 0.001887 |
| has_less_equal_test.test | RUN | 0.295619 | 1.533058 | 2.494461 | 0.001896 | 0.001951 | 0.002005 |
| has_left_shift_test.test | RUN | 0.320104 | 1.475267 | 3.158859 | 0.001649 | 0.001764 | 0.001958 |
| has_left_shift_assign_test.test | RUN | 0.290795 | 1.137392 | 2.550480 | 0.001956 | 0.001906 | 0.001904 |
| has_greater_test.test | RUN | 0.293743 | 1.569374 | 2.521874 | 0.001834 | 0.002332 | 0.001742 |
| has_greater_equal_test.test | RUN | 0.296856 | 1.493884 | 2.480680 | 0.001901 | 0.002072 | 0.002087 |
| has_equal_to_test.test | RUN | 0.297437 | 1.521959 | 2.587966 | 0.001948 | 0.001865 | 0.001849 |
| has_divides_test.test | RUN | 0.290281 | 1.132731 | 2.496879 | 0.001734 | 0.001962 | 0.001924 |
| has_divides_assign_test.test | RUN | 0.295945 | 1.132023 | 2.537702 | 0.001853 | 0.002061 | 0.001893 |
| has_dereference_test.test | RUN | 0.286843 | 1.149463 | 2.391055 | 0.001752 | 0.002036 | 0.002026 |
| has_complement_test.test | RUN | 0.288187 | 1.581740 | 2.526972 | 0.001825 | 0.002091 | 0.002008 |
| has_bit_xor_test.test | RUN | 0.287265 | 1.132984 | 2.474991 | 0.001932 | 0.002082 | 0.001962 |
| has_bit_xor_assign_test.test | RUN | 0.295897 | 1.082544 | 2.526741 | 0.001697 | 0.002150 | 0.001868 |
| has_bit_or_test.test | RUN | 0.293444 | 1.169812 | 2.472738 | 0.001897 | 0.002114 | 0.002054 |
| has_bit_or_assign_test.test | RUN | 0.293582 | 1.123816 | 2.545421 | 0.001970 | 0.002165 | 0.001829 |
| has_bit_and_test.test | RUN | 0.291220 | 1.173191 | 2.496784 | 0.001817 | 0.002106 | 0.001697 |
| has_bit_and_assign_test.test | RUN | 0.294032 | 1.121803 | 2.528619 | 0.001804 | 0.002206 | 0.001945 |
| has_binary_classes9_test.test | RUN | 0.318743 | 1.339474 | 2.748632 | 0.001766 | 0.002016 | 0.002022 |
| has_binary_classes8_test.test | RUN | 0.325480 | 1.331102 | 2.784579 | 0.001528 | 0.002116 | 0.001823 |
| has_binary_classes7_test.test | RUN | 0.317511 | 1.346974 | 2.734994 | 0.001925 | 0.001956 | 0.001690 |
| has_binary_classes6_test.test | RUN | 0.316755 | 1.275181 | 2.798784 | 0.001972 | 0.002218 | 0.002026 |
| has_binary_classes5_test.test | RUN | 0.314397 | 1.305704 | 2.728185 | 0.001796 | 0.002037 | 0.002063 |
| has_binary_classes4_test.test | RUN | 0.316447 | 1.370496 | 2.812046 | 0.001650 | 0.002235 | 0.001944 |
| has_binary_classes3_test.test | RUN | 0.317658 | 1.333314 | 2.801408 | 0.002013 | 0.002236 | 0.001508 |
| has_binary_classes2_test.test | RUN | 0.324747 | 1.377627 | 2.724062 | 0.002020 | 0.002144 | 0.002024 |
| has_binary_classes1_test.test | RUN | 0.319530 | 1.312664 | 2.729571 | 0.001673 | 0.001968 | 0.002028 |
| has_binary_classes0_test.test | RUN | 0.324152 | 1.335573 | 2.702805 | 0.002154 | 0.002048 | 0.002181 |
| function_traits_test.test | RUN | 0.148597 | 0.357690 | 0.605341 | 0.001769 | 0.001888 | 0.002046 |
| floating_point_promotion_test.test | RUN | 0.141031 | 0.350061 | 0.556995 | 0.001634 | 0.002128 | 0.001812 |
| extent_test.test | RUN | 0.141352 | 0.356257 | 0.522315 | 0.001694 | 0.002141 | 0.001874 |
| enable_if_test.test | RUN | 0.130764 | 0.296645 | 0.451628 | 0.002032 | 0.001932 | 0.001578 |
| disjunction_test.test | RUN | 0.136584 | 0.317479 | 0.494771 | 0.002060 | 0.002170 | 0.001976 |
| detected_test.test | RUN | 0.133216 | 0.295833 | 0.444245 | 0.001734 | 0.001870 | 0.002088 |
| detected_or_test.test | RUN | 0.137258 | 0.311282 | 0.479703 | 0.001644 | 0.001850 | 0.001820 |
| decay_test.test | RUN | 0.349485 | 1.250361 | 2.976480 | 0.001894 | 0.001912 | 0.001694 |
| cxx14_aliases_test.test | RUN | 0.229782 | 0.481447 | 0.772217 | 0.001986 | 0.001802 | 0.001962 |
| copy_reference_test.test | RUN | 0.135918 | 0.311353 | 0.436994 | 0.001886 | 0.001752 | 0.002061 |
| copy_cv_test.test | RUN | 0.134804 | 0.338199 | 0.513252 | 0.001994 | 0.001892 | 0.001547 |
| copy_cv_ref_test.test | RUN | 0.197617 | 0.575854 | 1.149643 | 0.001792 | 0.002096 | 0.001908 |
| conjunction_test.test | RUN | 0.137179 | 0.317038 | 0.499744 | 0.001716 | 0.001847 | 0.001984 |
| conditional_test.test | RUN | 0.136643 | 0.328744 | 0.475558 | 0.001614 | 0.002004 | 0.001927 |
| common_type_test.test | RUN | 0.181221 | 0.477787 | 0.926045 | 0.001808 | 0.001898 | 0.001852 |
| common_type_sfinae_test.test | RUN | 0.138565 | 0.296282 | 0.455113 | 0.001773 | 0.002142 | 0.001551 |
| common_type_sfinae2_test.test | RUN | 0.140100 | 0.314150 | 0.482662 | 0.001790 | 0.001786 | 0.001685 |
| common_type_6_test.test | RUN | 0.139774 | 0.325844 | 0.470193 | 0.001959 | 0.001910 | 0.002025 |
| common_type_5_test.test | RUN | 0.140977 | 0.322842 | 0.505880 | 0.001797 | 0.001855 | 0.001813 |
| common_type_4_test.test | RUN | 0.149304 | 0.354766 | 0.589091 | 0.001894 | 0.001893 | 0.001646 |
| common_type_3_test.test | RUN | 0.132934 | 0.295183 | 0.407251 | 0.001747 | 0.001762 | 0.001789 |
| common_type_2_test.test | RUN | 0.179011 | 0.487466 | 0.903869 | 0.001935 | 0.002113 | 0.001702 |
| alignment_of_test.test | RUN | 0.144312 | 0.387942 | 0.605486 | 0.001743 | 0.001764 | 0.001730 |
| alignment_of_a2_test.test | RUN | 0.145643 | 0.376684 | 0.596414 | 0.001774 | 0.002163 | 0.001475 |
| aligned_storage_test.test | RUN | 0.152183 | 0.377312 | 0.548746 | 0.001892 | 0.001784 | 0.001666 |
| aligned_storage_empy_test.test | RUN | 0.166146 | 0.425048 | 0.733257 | 0.001741 | 0.002029 | 0.001952 |
| aligned_storage_a2_test.test | RUN | 0.149604 | 0.364300 | 0.523943 | 0.002164 | 0.002282 | 0.002102 |
| add_volatile_test.test | RUN | 0.317609 | 1.104455 | 2.834480 | 0.001940 | 0.001945 | 0.002032 |
| add_rvalue_reference_test.test | RUN | 0.355413 | 1.252876 | 3.128927 | 0.001669 | 0.001938 | 0.002026 |
| add_reference_test.test | RUN | 0.341564 | 1.221209 | 3.211340 | 0.001738 | 0.002100 | 0.002079 |
| add_pointer_test.test | RUN | 0.221799 | 0.686393 | 1.636542 | 0.001950 | 0.001968 | 0.002008 |
| add_lvalue_reference_test.test | RUN | 0.350341 | 1.188937 | 3.140549 | 0.002025 | 0.001824 | 0.002052 |
| add_cv_test.test | RUN | 0.330242 | 1.122572 | 2.993502 | 0.001805 | 0.001542 | 0.001939 |
| add_const_test.test | RUN | 0.328264 | 1.169594 | 2.991512 | 0.001562 | 0.001902 | 0.001926 |
| is_virtual_base_of_fail.test | COMPILE_FAIL | 0.133624 | 0.299432 | 0.435781 | — | — | — |
| is_stateless_fail.test | COMPILE_FAIL | 0.132619 | 0.308225 | 0.462644 | — | — | — |
| is_polymorphic_fail.test | COMPILE_FAIL | 0.126242 | 0.284017 | 0.424566 | — | — | — |
| is_nothrow_move_constructible_fail.test | COMPILE_FAIL | 0.127695 | 0.290782 | 0.375502 | — | — | — |
| is_nothrow_move_assignable_fail.test | COMPILE_FAIL | 0.128273 | 0.284668 | 0.392397 | — | — | — |
| is_list_constructible_fail.test | COMPILE_FAIL | 0.125671 | 0.293352 | 0.411888 | — | — | — |
| is_empty_fail.test | COMPILE_FAIL | 0.131123 | 0.284701 | 0.423927 | — | — | — |
| is_destructible_fail.test | COMPILE_FAIL | 0.127392 | 0.288767 | 0.417383 | — | — | — |
| is_default_constructible_fail.test | COMPILE_FAIL | 0.126402 | 0.284392 | 0.422943 | — | — | — |
| is_copy_constructible_fail.test | COMPILE_FAIL | 0.127696 | 0.297498 | 0.418394 | — | — | — |
| is_copy_assignable_fail.test | COMPILE_FAIL | 0.128651 | 0.283111 | 0.417790 | — | — | — |
| is_convertible_fail.test | COMPILE_FAIL | 0.127739 | 0.286611 | 0.415059 | — | — | — |
| is_convertible2_fail.test | COMPILE_FAIL | 0.128707 | 0.292116 | 0.422482 | — | — | — |
| is_constructible_fail.test | COMPILE_FAIL | 0.126433 | 0.292028 | 0.414889 | — | — | — |
| is_base_of_fail.test | COMPILE_FAIL | 0.125178 | 0.284601 | 0.414018 | — | — | — |
| is_assignable_fail.test | COMPILE_FAIL | 0.128973 | 0.289677 | 0.413366 | — | — | — |
| has_nothrow_destruct_fail.test | COMPILE_FAIL | 0.125907 | 0.282742 | 0.417649 | — | — | — |
| has_nothrow_copy_fail.test | COMPILE_FAIL | 0.127973 | 0.293921 | 0.422545 | — | — | — |
| has_nothrow_cons_fail.test | COMPILE_FAIL | 0.127739 | 0.287307 | 0.419303 | — | — | — |
| has_nothrow_assign_fail.test | COMPILE_FAIL | 0.126468 | 0.291561 | 0.414942 | — | — | — |
| common_type_fail.test | COMPILE_FAIL | 0.127479 | 0.281923 | 0.422857 | — | — | — |
| common_type2_fail.test | COMPILE_FAIL | 0.128045 | 0.293537 | 0.410032 | — | — | — |
| has_nothrow_assign_test_no_intrinsics.test | RUN | 0.200804 | 0.630771 | 1.218065 | 0.002048 | 0.001880 | 0.001996 |
| has_nothrow_constr_test_no_intrinsics.test | RUN | 0.191131 | 0.627502 | 1.193740 | 0.001639 | 0.001984 | 0.001678 |
| has_nothrow_copy_test_no_intrinsics.test | RUN | 0.192185 | 0.626241 | 1.207773 | 0.001529 | 0.001533 | 0.001586 |
| is_nothrow_move_assignable_test_no_intrinsics.test | RUN | 0.194935 | 0.624240 | 1.137849 | 0.001491 | 0.001610 | 0.001563 |
| is_nothrow_move_constructible_test_no_intrinsics.test | RUN | 0.124822 | 0.414221 | 0.688375 | 0.001538 | 0.001492 | 0.001415 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.998× | 0.998×, 0.998× | 1.001× |
| clang | 1.025× | 1.027×, 1.023× | 1.007× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1359 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/43701438216).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| add_const_test.test | 10 | 0.001476s | 0.001478s | 0.001457s | byte equality observed |
| add_cv_test.test | 10 | 0.001482s | 0.001447s | 0.001475s | byte equality observed |
| add_lvalue_reference_test.test | 10 | 0.001466s | 0.001461s | 0.001462s | byte equality observed |
| add_pointer_test.test | 10 | 0.001458s | 0.001460s | 0.001471s | byte equality observed |
| add_reference_test.test | 10 | 0.001462s | 0.001483s | 0.001435s | byte equality observed |
| add_rvalue_reference_test.test | 8 | 0.001468s | 0.001482s | 0.001488s | byte equality observed |
| add_volatile_test.test | 10 | 0.001454s | 0.001452s | 0.001445s | byte equality observed |
| aligned_storage_a2_test.test | 10 | 0.001611s | 0.001585s | 0.001612s | byte equality observed |
| aligned_storage_empy_test.test | 10 | 0.001463s | 0.001493s | 0.001452s | byte equality observed |
| aligned_storage_test.test | 10 | 0.001595s | 0.001643s | 0.001600s | byte equality observed |
| alignment_of_a2_test.test | 10 | 0.001478s | 0.001458s | 0.001466s | byte equality observed |
| alignment_of_test.test | 10 | 0.001458s | 0.001457s | 0.001456s | byte equality observed |
| common_type_2_test.test | 10 | 0.001441s | 0.001464s | 0.001458s | byte equality observed |
| common_type_3_test.test | 10 | 0.001455s | 0.001463s | 0.001485s | byte equality observed |
| common_type_4_test.test | 10 | 0.001449s | 0.001453s | 0.001459s | byte equality observed |
| common_type_5_test.test | 10 | 0.001457s | 0.001463s | 0.001452s | byte equality observed |
| common_type_6_test.test | 10 | 0.001442s | 0.001460s | 0.001459s | byte equality observed |
| common_type_sfinae2_test.test | 10 | 0.001453s | 0.001437s | 0.001430s | byte equality observed |
| common_type_sfinae_test.test | 10 | 0.001448s | 0.001449s | 0.001458s | byte equality observed |
| common_type_test.test | 10 | 0.001437s | 0.001474s | 0.001459s | byte equality observed |
| conditional_test.test | 8 | 0.001452s | 0.001455s | 0.001429s | byte equality observed |
| conjunction_test.test | 10 | 0.001457s | 0.001450s | 0.001463s | byte equality observed |
| copy_cv_ref_test.test | 10 | 0.001443s | 0.001467s | 0.001459s | byte equality observed |
| copy_cv_test.test | 10 | 0.001442s | 0.001452s | 0.001445s | byte equality observed |
| copy_reference_test.test | 10 | 0.001440s | 0.001482s | 0.001447s | byte equality observed |
| cxx14_aliases_test.test | 10 | 0.001460s | 0.001454s | 0.001472s | byte equality observed |
| decay_test.test | 10 | 0.001460s | 0.001487s | 0.001446s | byte equality observed |
| detected_or_test.test | 10 | 0.001467s | 0.001437s | 0.001461s | byte equality observed |
| detected_test.test | 10 | 0.001453s | 0.001459s | 0.001454s | byte equality observed |
| disjunction_test.test | 10 | 0.001446s | 0.001456s | 0.001482s | byte equality observed |
| enable_if_test.test | 10 | 0.001442s | 0.001458s | 0.001437s | byte equality observed |
| extent_test.test | 10 | 0.001474s | 0.001450s | 0.001426s | byte equality observed |
| floating_point_promotion_test.test | 10 | 0.001439s | 0.001506s | 0.001434s | byte equality observed |
| function_traits_test.test | 10 | 0.001446s | 0.001464s | 0.001452s | byte equality observed |
| has_binary_classes0_test.test | 10 | 0.001461s | 0.001443s | 0.001461s | byte equality observed |
| has_binary_classes1_test.test | 10 | 0.001467s | 0.001472s | 0.001452s | byte equality observed |
| has_binary_classes2_test.test | 10 | 0.001454s | 0.001439s | 0.001433s | byte equality observed |
| has_binary_classes3_test.test | 10 | 0.001461s | 0.001465s | 0.001461s | byte equality observed |
| has_binary_classes4_test.test | 10 | 0.001461s | 0.001451s | 0.001448s | byte equality observed |
| has_binary_classes5_test.test | 10 | 0.001459s | 0.001478s | 0.001448s | byte equality observed |
| has_binary_classes6_test.test | 10 | 0.001454s | 0.001465s | 0.001426s | byte equality observed |
| has_binary_classes7_test.test | 10 | 0.001442s | 0.001465s | 0.001450s | byte equality observed |
| has_binary_classes8_test.test | 9 | 0.001465s | 0.001462s | 0.001480s | byte equality observed |
| has_binary_classes9_test.test | 10 | 0.001451s | 0.001444s | 0.001453s | byte equality observed |
| has_bit_and_assign_test.test | 10 | 0.001453s | 0.001468s | 0.001469s | byte equality observed |
| has_bit_and_test.test | 10 | 0.001449s | 0.001431s | 0.001480s | byte equality observed |
| has_bit_or_assign_test.test | 10 | 0.001456s | 0.001442s | 0.001436s | byte equality observed |
| has_bit_or_test.test | 10 | 0.001472s | 0.001466s | 0.001463s | byte equality observed |
| has_bit_xor_assign_test.test | 10 | 0.001458s | 0.001463s | 0.001442s | byte equality observed |
| has_bit_xor_test.test | 10 | 0.001433s | 0.001452s | 0.001456s | byte equality observed |
| has_complement_test.test | 10 | 0.001469s | 0.001459s | 0.001458s | byte equality observed |
| has_dereference_test.test | 10 | 0.001458s | 0.001438s | 0.001469s | byte equality observed |
| has_divides_assign_test.test | 10 | 0.001463s | 0.001472s | 0.001445s | byte equality observed |
| has_divides_test.test | 10 | 0.001454s | 0.001468s | 0.001466s | byte equality observed |
| has_equal_to_test.test | 10 | 0.001450s | 0.001476s | 0.001465s | byte equality observed |
| has_greater_equal_test.test | 10 | 0.001461s | 0.001439s | 0.001446s | byte equality observed |
| has_greater_test.test | 10 | 0.001447s | 0.001475s | 0.001460s | byte equality observed |
| has_left_shift_assign_test.test | 10 | 0.001454s | 0.001462s | 0.001457s | byte equality observed |
| has_left_shift_test.test | 10 | 0.001440s | 0.001438s | 0.001425s | byte equality observed |
| has_less_equal_test.test | 9 | 0.001463s | 0.001450s | 0.001454s | byte equality observed |
| has_less_test.test | 10 | 0.001463s | 0.001468s | 0.001476s | byte equality observed |
| has_logical_and_test.test | 10 | 0.001439s | 0.001465s | 0.001421s | byte equality observed |
| has_logical_not_test.test | 10 | 0.001456s | 0.001464s | 0.001467s | byte equality observed |
| has_logical_or_test.test | 10 | 0.001461s | 0.001446s | 0.001452s | byte equality observed |
| has_minus_assign_test.test | 10 | 0.001465s | 0.001473s | 0.001475s | byte equality observed |
| has_minus_test.test | 10 | 0.001452s | 0.001449s | 0.001432s | byte equality observed |
| has_modulus_assign_test.test | 10 | 0.001458s | 0.001421s | 0.001450s | byte equality observed |
| has_modulus_test.test | 10 | 0.001444s | 0.001466s | 0.001452s | byte equality observed |
| has_multiplies_assign_test.test | 10 | 0.001459s | 0.001465s | 0.001451s | byte equality observed |
| has_multiplies_test.test | 10 | 0.001469s | 0.001457s | 0.001443s | byte equality observed |
| has_negate_test.test | 10 | 0.001459s | 0.001464s | 0.001468s | byte equality observed |
| has_not_equal_to_test.test | 10 | 0.001456s | 0.001459s | 0.001449s | byte equality observed |
| has_nothrow_assign_test.test | 10 | 0.001451s | 0.001480s | 0.001458s | byte equality observed |
| has_nothrow_assign_test_no_intrinsics.test | 10 | 0.001443s | 0.001470s | 0.001436s | byte equality observed |
| has_nothrow_constr_test.test | 10 | 0.001459s | 0.001457s | 0.001473s | byte equality observed |
| has_nothrow_constr_test_no_intrinsics.test | 10 | 0.001456s | 0.001464s | 0.001446s | byte equality observed |
| has_nothrow_copy_test.test | 10 | 0.001482s | 0.001466s | 0.001462s | byte equality observed |
| has_nothrow_copy_test_no_intrinsics.test | 10 | 0.001450s | 0.001448s | 0.001457s | byte equality observed |
| has_nothrow_destructor_test.test | 10 | 0.001438s | 0.001458s | 0.001463s | byte equality observed |
| has_operator_new_test.test | 10 | 0.001458s | 0.001467s | 0.001435s | byte equality observed |
| has_plus_assign_test.test | 10 | 0.001463s | 0.001501s | 0.001466s | byte equality observed |
| has_plus_test.test | 10 | 0.001476s | 0.001447s | 0.001446s | byte equality observed |
| has_post_decrement_test.test | 10 | 0.001462s | 0.001464s | 0.001467s | byte equality observed |
| has_post_increment_test.test | 10 | 0.001458s | 0.001473s | 0.001453s | byte equality observed |
| has_postfix_classes0_test.test | 10 | 0.001464s | 0.001452s | 0.001456s | byte equality observed |
| has_postfix_classes1_test.test | 10 | 0.001444s | 0.001484s | 0.001444s | byte equality observed |
| has_postfix_classes2_test.test | 10 | 0.001469s | 0.001468s | 0.001456s | byte equality observed |
| has_postfix_classes3_test.test | 10 | 0.001461s | 0.001439s | 0.001453s | byte equality observed |
| has_pre_decrement_test.test | 10 | 0.001452s | 0.001465s | 0.001437s | byte equality observed |
| has_pre_increment_test.test | 10 | 0.001457s | 0.001428s | 0.001470s | byte equality observed |
| has_prefix_classes0_test.test | 10 | 0.001460s | 0.001464s | 0.001430s | byte equality observed |
| has_prefix_classes1_test.test | 10 | 0.001475s | 0.001440s | 0.001464s | byte equality observed |
| has_prefix_classes2_test.test | 10 | 0.001450s | 0.001458s | 0.001466s | byte equality observed |
| has_prefix_classes3_test.test | 10 | 0.001463s | 0.001456s | 0.001446s | byte equality observed |
| has_right_shift_assign_test.test | 10 | 0.001465s | 0.001453s | 0.001446s | byte equality observed |
| has_right_shift_test.test | 10 | 0.001478s | 0.001456s | 0.001461s | byte equality observed |
| has_trivial_assign_test.test | 10 | 0.001536s | 0.001538s | 0.001521s | byte equality observed |
| has_trivial_constr_test.test | 10 | 0.001542s | 0.001545s | 0.001557s | native test oracle; output varies |
| has_trivial_copy_test.test | 10 | 0.001549s | 0.001551s | 0.001599s | native test oracle; output varies |
| has_trivial_destructor_test.test | 10 | 0.001480s | 0.001491s | 0.001464s | byte equality observed |
| has_trivial_move_assign_test.test | 10 | 0.001473s | 0.001457s | 0.001473s | byte equality observed |
| has_trivial_move_constructor_test.test | 10 | 0.001460s | 0.001456s | 0.001416s | byte equality observed |
| has_unary_minus_test.test | 10 | 0.001464s | 0.001449s | 0.001456s | byte equality observed |
| has_unary_plus_test.test | 10 | 0.001450s | 0.001460s | 0.001418s | byte equality observed |
| has_virtual_destructor_test.test | 10 | 0.001477s | 0.001458s | 0.001457s | byte equality observed |
| integral_constant_test.test | 10 | 0.000655s | 0.000649s | 0.001454s | byte equality observed |
| is_abstract_test.test | 10 | 0.001456s | 0.001457s | 0.001428s | byte equality observed |
| is_arithmetic_test.test | 10 | 0.001465s | 0.001458s | 0.001467s | byte equality observed |
| is_array_test.test | 10 | 0.001468s | 0.001467s | 0.001445s | byte equality observed |
| is_assignable_test.test | 10 | 0.001463s | 0.001445s | 0.001450s | byte equality observed |
| is_base_and_derived_test.test | 7 | 0.001459s | 0.001459s | 0.001443s | byte equality observed |
| is_base_of_test.test | 9 | 0.001479s | 0.001470s | 0.001439s | byte equality observed |
| is_bounded_array_test.test | 10 | 0.001458s | 0.001443s | 0.001444s | byte equality observed |
| is_class_test.test | 10 | 0.001460s | 0.001441s | 0.001456s | byte equality observed |
| is_complete_test.test | 10 | 0.001459s | 0.001471s | 0.001446s | byte equality observed |
| is_complex_test.test | 10 | 0.001448s | 0.001467s | 0.001443s | byte equality observed |
| is_compound_test.test | 10 | 0.001448s | 0.001469s | 0.001444s | byte equality observed |
| is_const_test.test | 10 | 0.001446s | 0.001460s | 0.001485s | byte equality observed |
| is_constructible_test.test | 10 | 0.001465s | 0.001454s | 0.001461s | byte equality observed |
| is_convertible_test.test | 10 | 0.001452s | 0.001456s | 0.001465s | byte equality observed |
| is_copy_assignable_test.test | 10 | 0.001456s | 0.001463s | 0.001449s | byte equality observed |
| is_copy_constructible_test.test | 10 | 0.001468s | 0.001442s | 0.001480s | byte equality observed |
| is_default_constr_test.test | 10 | 0.001453s | 0.001466s | 0.001460s | byte equality observed |
| is_destructible_test.test | 10 | 0.001478s | 0.001457s | 0.001467s | byte equality observed |
| is_detected_exact_test.test | 10 | 0.001479s | 0.001474s | 0.001476s | byte equality observed |
| is_detected_test.test | 10 | 0.001485s | 0.001459s | 0.001452s | byte equality observed |
| is_empty_test.test | 10 | 0.001471s | 0.001442s | 0.001453s | byte equality observed |
| is_enum_test.test | 10 | 0.001463s | 0.001468s | 0.001458s | byte equality observed |
| is_final_test.test | 9 | 0.001458s | 0.001473s | 0.001478s | byte equality observed |
| is_float_test.test | 10 | 0.001455s | 0.001440s | 0.001470s | byte equality observed |
| is_floating_point_test.test | 10 | 0.001449s | 0.001451s | 0.001441s | byte equality observed |
| is_function_test.test | 10 | 0.001456s | 0.001439s | 0.001453s | byte equality observed |
| is_fundamental_test.test | 10 | 0.001468s | 0.001480s | 0.001441s | byte equality observed |
| is_integral_test.test | 10 | 0.001451s | 0.001467s | 0.001449s | byte equality observed |
| is_list_constructible_test.test | 10 | 0.001458s | 0.001429s | 0.001474s | byte equality observed |
| is_lvalue_reference_test.test | 10 | 0.001453s | 0.001458s | 0.001484s | byte equality observed |
| is_member_func_test.test | 8 | 0.001461s | 0.001438s | 0.001399s | byte equality observed |
| is_member_obj_test.test | 10 | 0.001445s | 0.001413s | 0.001461s | byte equality observed |
| is_member_pointer_test.test | 9 | 0.001438s | 0.001440s | 0.001481s | byte equality observed |
| is_noncopyable_test.test | 10 | 0.001446s | 0.001456s | 0.001460s | byte equality observed |
| is_nothrow_move_assignable_test.test | 10 | 0.001473s | 0.001441s | 0.001463s | byte equality observed |
| is_nothrow_move_assignable_test_no_intrinsics.test | 10 | 0.001450s | 0.001478s | 0.001481s | byte equality observed |
| is_nothrow_move_constructible_test.test | 10 | 0.001446s | 0.001438s | 0.001460s | byte equality observed |
| is_nothrow_move_constructible_test_no_intrinsics.test | 10 | 0.001461s | 0.001425s | 0.001483s | byte equality observed |
| is_nothrow_swappable_test.test | 10 | 0.001450s | 0.001448s | 0.001420s | byte equality observed |
| is_object_test.test | 10 | 0.001463s | 0.001463s | 0.001460s | byte equality observed |
| is_pod_test.test | 10 | 0.001442s | 0.001436s | 0.001447s | byte equality observed |
| is_pointer_test.test | 10 | 0.001444s | 0.001446s | 0.001475s | byte equality observed |
| is_polymorphic_test.test | 10 | 0.001439s | 0.001448s | 0.001434s | byte equality observed |
| is_reference_test.test | 10 | 0.001473s | 0.001460s | 0.001453s | byte equality observed |
| is_rvalue_reference_test.test | 10 | 0.001442s | 0.001443s | 0.001453s | byte equality observed |
| is_same_test.test | 10 | 0.001441s | 0.001464s | 0.001448s | byte equality observed |
| is_scalar_test.test | 10 | 0.001451s | 0.001450s | 0.001436s | byte equality observed |
| is_scoped_enum_test.test | 8 | 0.001466s | 0.001449s | 0.001440s | byte equality observed |
| is_signed_test.test | 10 | 0.001455s | 0.001485s | 0.001456s | byte equality observed |
| is_stateless_test.test | 10 | 0.001435s | 0.001454s | 0.001450s | byte equality observed |
| is_swappable_test.test | 10 | 0.001446s | 0.001468s | 0.001469s | byte equality observed |
| is_trivially_copyable_test.test | 10 | 0.001488s | 0.001539s | 0.001482s | byte equality observed |
| is_unbounded_array_test.test | 10 | 0.001464s | 0.001479s | 0.001438s | byte equality observed |
| is_union_test.test | 10 | 0.001472s | 0.001489s | 0.001439s | byte equality observed |
| is_unscoped_enum_test.test | 10 | 0.001472s | 0.001449s | 0.001462s | byte equality observed |
| is_unsigned_test.test | 10 | 0.001451s | 0.001429s | 0.001446s | byte equality observed |
| is_virtual_base_of_test.test | 10 | 0.001463s | 0.001459s | 0.001462s | byte equality observed |
| is_void_test.test | 10 | 0.001457s | 0.001456s | 0.001452s | byte equality observed |
| is_volatile_test.test | 10 | 0.001449s | 0.001442s | 0.001443s | byte equality observed |
| make_signed_test.test | 10 | 0.001460s | 0.001461s | 0.001448s | byte equality observed |
| make_unsigned_test.test | 10 | 0.001479s | 0.001479s | 0.001428s | byte equality observed |
| make_void_test.test | 10 | 0.001451s | 0.001478s | 0.001460s | byte equality observed |
| mpl_interop_test1.test | 10 | 0.000649s | 0.000644s | 0.001449s | byte equality observed |
| mpl_interop_test2.test | 10 | 0.000643s | 0.000649s | 0.001451s | byte equality observed |
| mpl_interop_test3.test | 10 | 0.000649s | 0.000645s | 0.001432s | byte equality observed |
| negation_test.test | 10 | 0.001512s | 0.001496s | 0.001442s | byte equality observed |
| promote_basic_test.test | 10 | 0.000650s | 0.000643s | 0.001437s | byte equality observed |
| promote_enum_msvc_bug_test.test | 10 | 0.000647s | 0.000657s | 0.001457s | byte equality observed |
| promote_enum_test.test | 10 | 0.000659s | 0.000649s | 0.001445s | byte equality observed |
| promote_mpl_test.test | 10 | 0.000646s | 0.000651s | 0.001461s | byte equality observed |
| rank_test.test | 8 | 0.001469s | 0.001473s | 0.001458s | byte equality observed |
| remove_all_extents_test.test | 7 | 0.001465s | 0.001475s | 0.001446s | byte equality observed |
| remove_bounds_test.test | 10 | 0.001469s | 0.001478s | 0.001441s | byte equality observed |
| remove_const_test.test | 10 | 0.001487s | 0.001455s | 0.001427s | byte equality observed |
| remove_cv_ref_test.test | 10 | 0.001450s | 0.001471s | 0.001454s | byte equality observed |
| remove_cv_test.test | 10 | 0.001452s | 0.001457s | 0.001465s | byte equality observed |
| remove_extent_test.test | 10 | 0.001461s | 0.001446s | 0.001439s | byte equality observed |
| remove_pointer_test.test | 10 | 0.001472s | 0.001434s | 0.001452s | byte equality observed |
| remove_reference_test.test | 10 | 0.001486s | 0.001443s | 0.001467s | byte equality observed |
| remove_volatile_test.test | 10 | 0.001465s | 0.001457s | 0.001428s | byte equality observed |
| tricky_abstract_type_test.test | 10 | 0.001440s | 0.001456s | 0.001461s | byte equality observed |
| tricky_add_pointer_test.test | 10 | 0.001474s | 0.001458s | 0.001448s | byte equality observed |
| tricky_function_type_test.test | 10 | 0.001458s | 0.001450s | 0.001474s | byte equality observed |
| tricky_incomplete_type_test.test | 10 | 0.001420s | 0.001469s | 0.001435s | byte equality observed |
| tricky_is_enum_test.test | 10 | 0.001466s | 0.001467s | 0.001422s | byte equality observed |
| tricky_partial_spec_test.test | 10 | 0.001458s | 0.001444s | 0.001473s | byte equality observed |
| tricky_rvalue_test.test | 10 | 0.001474s | 0.001476s | 0.001450s | byte equality observed |
| type_identity_test.test | 10 | 0.001481s | 0.001481s | 0.001454s | byte equality observed |
| type_traits_test.test | 10 | 0.000639s | 0.000648s | 0.001452s | byte equality observed |
| type_with_alignment_test.test | 10 | 0.001631s | 0.001667s | 0.001622s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/43701438216).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
