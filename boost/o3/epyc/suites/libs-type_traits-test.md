# libs/type_traits/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| type_with_alignment_test.test | RUN | 0.163553 | 0.455286 | 0.801501 | 0.002137 | 0.001965 | 0.002088 |
| type_traits_test.test | RUN | 0.227633 | 0.474827 | 0.800109 | 0.000661 | 0.000813 | 0.001790 |
| type_identity_test.test | RUN | 0.454876 | 1.762531 | 4.631376 | 0.001691 | 0.001874 | 0.002103 |
| tricky_rvalue_test.test | RUN | 0.150345 | 0.366264 | 0.618205 | 0.002074 | 0.001872 | 0.002021 |
| tricky_partial_spec_test.test | RUN | 0.186274 | 0.538264 | 0.972796 | 0.001702 | 0.002098 | 0.002090 |
| tricky_is_enum_test.test | RUN | 0.143016 | 0.334791 | 0.549304 | 0.001748 | 0.001845 | 0.002127 |
| tricky_incomplete_type_test.test | RUN | 0.240652 | 0.533181 | 0.987426 | 0.001981 | 0.001982 | 0.002002 |
| tricky_function_type_test.test | RUN | 0.190827 | 0.584457 | 1.058563 | 0.002043 | 0.001938 | 0.001806 |
| tricky_add_pointer_test.test | RUN | 0.298550 | 1.056959 | 2.596269 | 0.001712 | 0.002113 | 0.002151 |
| tricky_abstract_type_test.test | RUN | 0.155257 | 0.344200 | 0.574747 | 0.001995 | 0.001735 | 0.001826 |
| remove_volatile_test.test | RUN | 0.404581 | 1.455135 | 3.986758 | 0.002070 | 0.001827 | 0.001984 |
| remove_reference_test.test | RUN | 0.422896 | 1.528557 | 4.160967 | 0.002038 | 0.001809 | 0.001702 |
| remove_pointer_test.test | RUN | 0.444763 | 1.657799 | 4.329477 | 0.002284 | 0.002142 | 0.002111 |
| remove_extent_test.test | RUN | 0.420458 | 1.571269 | 4.230323 | 0.001938 | 0.002216 | 0.002072 |
| remove_cv_test.test | RUN | 0.417436 | 1.560119 | 4.058401 | 0.002058 | 0.002169 | 0.002076 |
| remove_cv_ref_test.test | RUN | 0.892451 | 3.774906 | 10.119892 | 0.001590 | 0.001830 | 0.002058 |
| remove_const_test.test | RUN | 0.406207 | 1.500015 | 3.953786 | 0.001947 | 0.002206 | 0.002172 |
| remove_bounds_test.test | RUN | 0.427136 | 1.598556 | 4.106337 | 0.001981 | 0.002150 | 0.002032 |
| remove_all_extents_test.test | RUN | 0.423934 | 1.586896 | 4.117595 | 0.001960 | 0.001728 | 0.001753 |
| rank_test.test | RUN | 0.148524 | 0.374171 | 0.628221 | 0.002028 | 0.001935 | 0.002000 |
| promote_mpl_test.test | RUN | 0.133489 | 0.329788 | 0.411999 | 0.000697 | 0.000848 | 0.002072 |
| promote_enum_test.test | RUN | 0.027185 | 0.083618 | 0.099157 | 0.000752 | 0.000926 | 0.001937 |
| promote_enum_msvc_bug_test.test | RUN | 0.027139 | 0.071824 | 0.066868 | 0.000880 | 0.000809 | 0.002016 |
| promote_basic_test.test | RUN | 0.031155 | 0.098888 | 0.095979 | 0.000704 | 0.000686 | 0.002083 |
| negation_test.test | RUN | 0.146346 | 0.338770 | 0.500651 | 0.001836 | 0.001498 | 0.001768 |
| mpl_interop_test3.test | RUN | 0.124225 | 0.306630 | 0.362015 | 0.000793 | 0.000736 | 0.002032 |
| mpl_interop_test2.test | RUN | 0.042123 | 0.081790 | 0.089289 | 0.000824 | 0.000784 | 0.002005 |
| mpl_interop_test1.test | RUN | 0.023725 | 0.063042 | 0.060758 | 0.000678 | 0.000799 | 0.001562 |
| make_void_test.test | RUN | 0.152588 | 0.371519 | 0.638174 | 0.001803 | 0.002010 | 0.002096 |
| make_unsigned_test.test | RUN | 0.179247 | 0.502949 | 0.867650 | 0.001872 | 0.001983 | 0.002160 |
| make_signed_test.test | RUN | 0.178344 | 0.496552 | 0.899374 | 0.001693 | 0.001899 | 0.002112 |
| is_volatile_test.test | RUN | 0.156738 | 0.430204 | 0.692582 | 0.001735 | 0.001761 | 0.001931 |
| is_void_test.test | RUN | 0.154688 | 0.390098 | 0.620527 | 0.002000 | 0.002068 | 0.002145 |
| is_virtual_base_of_test.test | RUN | 0.182180 | 0.497619 | 0.904693 | 0.001891 | 0.001940 | 0.001619 |
| is_unsigned_test.test | RUN | 0.159049 | 0.394148 | 0.686442 | 0.001597 | 0.001968 | 0.001784 |
| is_unscoped_enum_test.test | RUN | 0.154457 | 0.364182 | 0.546259 | 0.001669 | 0.001704 | 0.002036 |
| is_union_test.test | RUN | 0.167023 | 0.455892 | 0.828949 | 0.001829 | 0.002104 | 0.002127 |
| is_unbounded_array_test.test | RUN | 0.150366 | 0.380252 | 0.655513 | 0.001807 | 0.002107 | 0.001801 |
| is_trivially_copyable_test.test | RUN | 0.249355 | 0.836752 | 1.651588 | 0.001852 | 0.002169 | 0.001750 |
| is_swappable_test.test | RUN | 0.205864 | 0.612135 | 1.241233 | 0.001936 | 0.002115 | 0.002019 |
| is_stateless_test.test | RUN | 0.236598 | 0.702156 | 1.441570 | 0.001897 | 0.002039 | 0.001710 |
| is_signed_test.test | RUN | 0.161472 | 0.388376 | 0.695417 | 0.001940 | 0.002058 | 0.001787 |
| is_scoped_enum_test.test | RUN | 0.154762 | 0.350024 | 0.566577 | 0.001748 | 0.002080 | 0.001912 |
| is_scalar_test.test | RUN | 0.200926 | 0.647619 | 1.262741 | 0.001968 | 0.001894 | 0.001865 |
| is_same_test.test | RUN | 0.152379 | 0.372164 | 0.666794 | 0.002022 | 0.002150 | 0.002142 |
| is_rvalue_reference_test.test | RUN | 0.162056 | 0.428333 | 0.744832 | 0.001775 | 0.001576 | 0.001706 |
| is_reference_test.test | RUN | 0.165695 | 0.427001 | 0.762317 | 0.001861 | 0.002164 | 0.002028 |
| is_polymorphic_test.test | RUN | 0.162605 | 0.453753 | 0.786976 | 0.001918 | 0.001870 | 0.002280 |
| is_pointer_test.test | RUN | 0.163952 | 0.433036 | 0.788638 | 0.002082 | 0.001699 | 0.001823 |
| is_pod_test.test | RUN | 0.216075 | 0.711543 | 1.486653 | 0.001736 | 0.002234 | 0.002139 |
| is_object_test.test | RUN | 0.150562 | 0.364843 | 0.600531 | 0.001896 | 0.001938 | 0.001652 |
| is_nothrow_swappable_test.test | RUN | 0.221191 | 0.673332 | 1.353847 | 0.001864 | 0.001853 | 0.002016 |
| is_nothrow_move_constructible_test.test | RUN | 0.215465 | 0.709278 | 1.421658 | 0.001857 | 0.001736 | 0.001966 |
| is_nothrow_move_assignable_test.test | RUN | 0.216711 | 0.715755 | 1.436783 | 0.001718 | 0.001947 | 0.002058 |
| is_noncopyable_test.test | RUN | 0.152216 | 0.375095 | 0.576086 | 0.001761 | 0.001896 | 0.001804 |
| is_member_pointer_test.test | RUN | 0.157469 | 0.382157 | 0.593244 | 0.001812 | 0.002032 | 0.002110 |
| is_member_obj_test.test | RUN | 0.155945 | 0.384123 | 0.642179 | 0.002127 | 0.001718 | 0.001997 |
| is_member_func_test.test | RUN | 0.158144 | 0.416068 | 0.702933 | 0.001800 | 0.002127 | 0.001717 |
| is_lvalue_reference_test.test | RUN | 0.164490 | 0.438773 | 0.751315 | 0.001768 | 0.001933 | 0.002140 |
| is_list_constructible_test.test | RUN | 0.193558 | 0.495752 | 0.843046 | 0.001965 | 0.002156 | 0.002048 |
| is_integral_test.test | RUN | 0.197656 | 0.622341 | 1.170294 | 0.001908 | 0.001753 | 0.002023 |
| is_fundamental_test.test | RUN | 0.203336 | 0.621516 | 1.227711 | 0.001814 | 0.002244 | 0.001797 |
| is_function_test.test | RUN | 0.162347 | 0.402147 | 0.651683 | 0.001712 | 0.001756 | 0.002101 |
| is_floating_point_test.test | RUN | 0.163360 | 0.435300 | 0.738126 | 0.001830 | 0.001968 | 0.001647 |
| is_float_test.test | RUN | 0.163666 | 0.440399 | 0.776660 | 0.001956 | 0.002054 | 0.001737 |
| is_final_test.test | RUN | 0.163013 | 0.449423 | 0.770524 | 0.001749 | 0.001773 | 0.001867 |
| is_enum_test.test | RUN | 0.149391 | 0.366208 | 0.600412 | 0.001678 | 0.001846 | 0.001626 |
| is_empty_test.test | RUN | 0.156635 | 0.398623 | 0.718804 | 0.001748 | 0.001802 | 0.002064 |
| is_detected_test.test | RUN | 0.147494 | 0.342095 | 0.563477 | 0.001957 | 0.001884 | 0.002023 |
| is_detected_exact_test.test | RUN | 0.143524 | 0.352893 | 0.541095 | 0.001838 | 0.001526 | 0.002077 |
| is_destructible_test.test | RUN | 0.210422 | 0.701765 | 1.358674 | 0.001744 | 0.002068 | 0.002094 |
| is_default_constr_test.test | RUN | 0.211444 | 0.718448 | 1.387338 | 0.001946 | 0.002166 | 0.002050 |
| is_copy_constructible_test.test | RUN | 0.226619 | 0.727829 | 1.551626 | 0.001858 | 0.001755 | 0.001826 |
| is_copy_assignable_test.test | RUN | 0.224912 | 0.745451 | 1.467245 | 0.001687 | 0.001982 | 0.002099 |
| is_convertible_test.test | RUN | 0.217568 | 0.641813 | 1.245390 | 0.001726 | 0.002172 | 0.002069 |
| is_constructible_test.test | RUN | 0.183176 | 0.475977 | 0.836636 | 0.001935 | 0.001967 | 0.002008 |
| is_const_test.test | RUN | 0.162357 | 0.389961 | 0.678100 | 0.001840 | 0.001988 | 0.001690 |
| is_compound_test.test | RUN | 0.151625 | 0.364684 | 0.524516 | 0.002028 | 0.001866 | 0.001848 |
| is_complex_test.test | RUN | 0.202578 | 0.459941 | 0.826670 | 0.002048 | 0.002119 | 0.002166 |
| is_complete_test.test | RUN | 0.178410 | 0.479257 | 0.918028 | 0.001759 | 0.001662 | 0.002026 |
| is_class_test.test | RUN | 0.162079 | 0.425587 | 0.738052 | 0.001878 | 0.001896 | 0.001564 |
| is_bounded_array_test.test | RUN | 0.154423 | 0.378466 | 0.668901 | 0.002068 | 0.001619 | 0.001762 |
| is_base_of_test.test | RUN | 0.165899 | 0.424318 | 0.719297 | 0.001720 | 0.002143 | 0.001942 |
| is_base_and_derived_test.test | RUN | 0.156710 | 0.419126 | 0.687159 | 0.001828 | 0.001556 | 0.001788 |
| is_assignable_test.test | RUN | 0.200160 | 0.581952 | 1.163991 | 0.001725 | 0.001878 | 0.001831 |
| is_array_test.test | RUN | 0.159654 | 0.400668 | 0.724363 | 0.001941 | 0.001726 | 0.001716 |
| is_arithmetic_test.test | RUN | 0.199218 | 0.631488 | 1.204696 | 0.001863 | 0.002179 | 0.002134 |
| is_abstract_test.test | RUN | 0.366179 | 1.720631 | 3.905462 | 0.001913 | 0.001756 | 0.001890 |
| integral_constant_test.test | RUN | 0.023106 | 0.060088 | 0.070298 | 0.000768 | 0.000790 | 0.002058 |
| has_virtual_destructor_test.test | RUN | 0.173562 | 0.480311 | 0.877990 | 0.002214 | 0.002142 | 0.002100 |
| has_unary_plus_test.test | RUN | 0.339390 | 1.960040 | 2.925447 | 0.001912 | 0.001875 | 0.002114 |
| has_unary_minus_test.test | RUN | 0.336600 | 1.863546 | 2.858684 | 0.001830 | 0.001830 | 0.002129 |
| has_trivial_move_constructor_test.test | RUN | 0.229742 | 0.715808 | 1.476470 | 0.001682 | 0.001950 | 0.001935 |
| has_trivial_move_assign_test.test | RUN | 0.226845 | 0.722474 | 1.436927 | 0.001743 | 0.001956 | 0.002137 |
| has_trivial_destructor_test.test | RUN | 0.216850 | 0.728306 | 1.450690 | 0.002054 | 0.001789 | 0.002130 |
| has_trivial_copy_test.test | RUN | 0.227320 | 0.770305 | 1.504317 | 0.002126 | 0.002270 | 0.002202 |
| has_trivial_constr_test.test | RUN | 0.233148 | 0.785547 | 1.511573 | 0.001957 | 0.002291 | 0.002149 |
| has_trivial_assign_test.test | RUN | 0.222387 | 0.748325 | 1.476754 | 0.002046 | 0.002056 | 0.002204 |
| has_right_shift_test.test | RUN | 0.357161 | 1.454602 | 3.239433 | 0.001910 | 0.002072 | 0.002129 |
| has_right_shift_assign_test.test | RUN | 0.338442 | 1.336870 | 2.927712 | 0.001834 | 0.001782 | 0.001996 |
| has_prefix_classes3_test.test | RUN | 0.247020 | 0.775205 | 1.597266 | 0.001852 | 0.001852 | 0.001961 |
| has_prefix_classes2_test.test | RUN | 0.245890 | 0.750003 | 1.596684 | 0.001804 | 0.001890 | 0.001559 |
| has_prefix_classes1_test.test | RUN | 0.244390 | 0.786296 | 1.531431 | 0.001961 | 0.001902 | 0.002173 |
| has_prefix_classes0_test.test | RUN | 0.245982 | 0.780950 | 1.531754 | 0.001824 | 0.002124 | 0.002124 |
| has_pre_increment_test.test | RUN | 0.326898 | 1.811365 | 2.973008 | 0.002004 | 0.001887 | 0.001449 |
| has_pre_decrement_test.test | RUN | 0.331973 | 1.787741 | 2.980258 | 0.001741 | 0.001890 | 0.001830 |
| has_postfix_classes3_test.test | RUN | 0.247675 | 0.793285 | 1.584534 | 0.002084 | 0.001930 | 0.002010 |
| has_postfix_classes2_test.test | RUN | 0.245836 | 0.792001 | 1.528827 | 0.001856 | 0.001714 | 0.001992 |
| has_postfix_classes1_test.test | RUN | 0.245878 | 0.806371 | 1.548180 | 0.001927 | 0.002132 | 0.001946 |
| has_postfix_classes0_test.test | RUN | 0.244032 | 0.781340 | 1.546870 | 0.001852 | 0.002180 | 0.001990 |
| has_post_increment_test.test | RUN | 0.332379 | 1.868812 | 2.927465 | 0.001850 | 0.002000 | 0.001835 |
| has_post_decrement_test.test | RUN | 0.335797 | 1.943975 | 2.978321 | 0.001870 | 0.001910 | 0.001959 |
| has_plus_test.test | RUN | 0.341576 | 1.294498 | 2.975568 | 0.001741 | 0.001820 | 0.001992 |
| has_plus_assign_test.test | RUN | 0.340423 | 1.249714 | 3.075766 | 0.001873 | 0.001894 | 0.002078 |
| has_operator_new_test.test | RUN | 0.226040 | 0.704927 | 1.385356 | 0.001855 | 0.001954 | 0.002025 |
| has_nothrow_destructor_test.test | RUN | 0.234685 | 0.754740 | 1.458183 | 0.001752 | 0.001924 | 0.001865 |
| has_nothrow_copy_test.test | RUN | 0.228470 | 0.711151 | 1.433327 | 0.001582 | 0.001926 | 0.001971 |
| has_nothrow_constr_test.test | RUN | 0.218098 | 0.692094 | 1.395266 | 0.001819 | 0.002259 | 0.001842 |
| has_nothrow_assign_test.test | RUN | 0.217941 | 0.714014 | 1.412217 | 0.001778 | 0.002178 | 0.001839 |
| has_not_equal_to_test.test | RUN | 0.337603 | 1.801921 | 2.966677 | 0.002114 | 0.002127 | 0.002102 |
| has_negate_test.test | RUN | 0.327720 | 1.240178 | 2.910144 | 0.002084 | 0.001910 | 0.001846 |
| has_multiplies_test.test | RUN | 0.337100 | 1.391356 | 2.976336 | 0.001859 | 0.002007 | 0.001948 |
| has_multiplies_assign_test.test | RUN | 0.344571 | 1.348758 | 2.992562 | 0.001910 | 0.002089 | 0.001820 |
| has_modulus_test.test | RUN | 0.335160 | 1.363094 | 2.960725 | 0.002022 | 0.001932 | 0.002057 |
| has_modulus_assign_test.test | RUN | 0.335826 | 1.389714 | 2.984503 | 0.001878 | 0.002012 | 0.001850 |
| has_minus_test.test | RUN | 0.336637 | 1.325443 | 3.079910 | 0.001892 | 0.002000 | 0.001880 |
| has_minus_assign_test.test | RUN | 0.344970 | 1.370926 | 2.910351 | 0.001964 | 0.002144 | 0.002045 |
| has_logical_or_test.test | RUN | 0.342673 | 1.362786 | 2.944785 | 0.001827 | 0.002013 | 0.002106 |
| has_logical_not_test.test | RUN | 0.331836 | 1.343710 | 2.863913 | 0.001969 | 0.002188 | 0.002127 |
| has_logical_and_test.test | RUN | 0.331338 | 1.320943 | 2.962078 | 0.001929 | 0.002136 | 0.002058 |
| has_less_test.test | RUN | 0.342805 | 1.885525 | 3.048047 | 0.002138 | 0.001868 | 0.001952 |
| has_less_equal_test.test | RUN | 0.343058 | 1.874616 | 3.047008 | 0.002030 | 0.002032 | 0.002046 |
| has_left_shift_test.test | RUN | 0.372248 | 1.633593 | 3.635334 | 0.001908 | 0.001927 | 0.001724 |
| has_left_shift_assign_test.test | RUN | 0.333344 | 1.248950 | 2.987193 | 0.001870 | 0.002150 | 0.001741 |
| has_greater_test.test | RUN | 0.340560 | 1.899007 | 2.989668 | 0.001740 | 0.001716 | 0.001783 |
| has_greater_equal_test.test | RUN | 0.343270 | 1.837759 | 3.043093 | 0.001476 | 0.002284 | 0.002078 |
| has_equal_to_test.test | RUN | 0.338927 | 1.800530 | 3.039212 | 0.001856 | 0.001939 | 0.001779 |
| has_divides_test.test | RUN | 0.337785 | 1.284680 | 3.031665 | 0.001786 | 0.001904 | 0.001759 |
| has_divides_assign_test.test | RUN | 0.338819 | 1.335685 | 2.980472 | 0.001988 | 0.001895 | 0.001670 |
| has_dereference_test.test | RUN | 0.335753 | 1.305524 | 2.851559 | 0.001798 | 0.002034 | 0.002184 |
| has_complement_test.test | RUN | 0.325225 | 1.880205 | 2.934348 | 0.001536 | 0.002140 | 0.001662 |
| has_bit_xor_test.test | RUN | 0.339334 | 1.342015 | 2.984467 | 0.001938 | 0.002198 | 0.001711 |
| has_bit_xor_assign_test.test | RUN | 0.328809 | 1.348064 | 2.978693 | 0.001822 | 0.002266 | 0.001633 |
| has_bit_or_test.test | RUN | 0.336649 | 1.274994 | 3.037630 | 0.001726 | 0.001847 | 0.002050 |
| has_bit_or_assign_test.test | RUN | 0.330869 | 1.399132 | 2.967583 | 0.001872 | 0.002244 | 0.001856 |
| has_bit_and_test.test | RUN | 0.337735 | 1.429790 | 3.032833 | 0.002000 | 0.002230 | 0.002092 |
| has_bit_and_assign_test.test | RUN | 0.333462 | 1.373194 | 2.956390 | 0.001746 | 0.002133 | 0.001716 |
| has_binary_classes9_test.test | RUN | 0.360966 | 1.574114 | 3.354922 | 0.001903 | 0.002152 | 0.002142 |
| has_binary_classes8_test.test | RUN | 0.366380 | 1.606047 | 3.311623 | 0.001928 | 0.002188 | 0.001768 |
| has_binary_classes7_test.test | RUN | 0.367411 | 1.580439 | 3.308093 | 0.001790 | 0.002121 | 0.001960 |
| has_binary_classes6_test.test | RUN | 0.361968 | 1.515516 | 3.316182 | 0.002247 | 0.002110 | 0.001654 |
| has_binary_classes5_test.test | RUN | 0.373882 | 1.497016 | 3.343381 | 0.002004 | 0.001857 | 0.002062 |
| has_binary_classes4_test.test | RUN | 0.360760 | 1.546123 | 3.300745 | 0.001800 | 0.002096 | 0.002174 |
| has_binary_classes3_test.test | RUN | 0.377826 | 1.530302 | 3.302501 | 0.001996 | 0.002082 | 0.001917 |
| has_binary_classes2_test.test | RUN | 0.370588 | 1.626097 | 3.237977 | 0.001920 | 0.001909 | 0.001710 |
| has_binary_classes1_test.test | RUN | 0.361306 | 1.564398 | 3.282655 | 0.001960 | 0.001863 | 0.001786 |
| has_binary_classes0_test.test | RUN | 0.364400 | 1.569160 | 3.201500 | 0.001814 | 0.001664 | 0.002082 |
| function_traits_test.test | RUN | 0.157555 | 0.394652 | 0.721254 | 0.001877 | 0.001770 | 0.001674 |
| floating_point_promotion_test.test | RUN | 0.149897 | 0.392594 | 0.672337 | 0.002046 | 0.001825 | 0.001696 |
| extent_test.test | RUN | 0.160221 | 0.387437 | 0.701520 | 0.001778 | 0.001868 | 0.001920 |
| enable_if_test.test | RUN | 0.150975 | 0.349341 | 0.551252 | 0.002040 | 0.001776 | 0.001955 |
| disjunction_test.test | RUN | 0.146971 | 0.354239 | 0.575214 | 0.001777 | 0.002134 | 0.001807 |
| detected_test.test | RUN | 0.151057 | 0.338089 | 0.552527 | 0.002072 | 0.001908 | 0.001933 |
| detected_or_test.test | RUN | 0.149116 | 0.357697 | 0.584359 | 0.002028 | 0.001702 | 0.001573 |
| decay_test.test | RUN | 0.397981 | 1.510389 | 3.489400 | 0.001766 | 0.002273 | 0.002050 |
| cxx14_aliases_test.test | RUN | 0.241037 | 0.539966 | 0.841457 | 0.001938 | 0.001956 | 0.001918 |
| copy_reference_test.test | RUN | 0.145807 | 0.347511 | 0.597505 | 0.001656 | 0.001510 | 0.001884 |
| copy_cv_test.test | RUN | 0.151424 | 0.366210 | 0.642380 | 0.002034 | 0.001768 | 0.002021 |
| copy_cv_ref_test.test | RUN | 0.221401 | 0.655431 | 1.426913 | 0.001799 | 0.002066 | 0.002073 |
| conjunction_test.test | RUN | 0.149656 | 0.354968 | 0.570368 | 0.001902 | 0.001778 | 0.002058 |
| conditional_test.test | RUN | 0.149520 | 0.356273 | 0.573833 | 0.001776 | 0.001904 | 0.002123 |
| common_type_test.test | RUN | 0.201325 | 0.560664 | 1.137717 | 0.001955 | 0.001996 | 0.001619 |
| common_type_sfinae_test.test | RUN | 0.150455 | 0.349035 | 0.558649 | 0.002091 | 0.002051 | 0.002054 |
| common_type_sfinae2_test.test | RUN | 0.151241 | 0.358888 | 0.584426 | 0.001767 | 0.001896 | 0.001830 |
| common_type_6_test.test | RUN | 0.153690 | 0.381894 | 0.585604 | 0.001738 | 0.001544 | 0.002073 |
| common_type_5_test.test | RUN | 0.154263 | 0.369215 | 0.624677 | 0.002037 | 0.002184 | 0.001786 |
| common_type_4_test.test | RUN | 0.171190 | 0.404158 | 0.716841 | 0.001829 | 0.001744 | 0.002084 |
| common_type_3_test.test | RUN | 0.143258 | 0.339457 | 0.501579 | 0.002056 | 0.001966 | 0.001900 |
| common_type_2_test.test | RUN | 0.209025 | 0.568178 | 1.091529 | 0.001859 | 0.002236 | 0.001961 |
| alignment_of_test.test | RUN | 0.158686 | 0.432912 | 0.693829 | 0.001949 | 0.002170 | 0.001583 |
| alignment_of_a2_test.test | RUN | 0.157610 | 0.445759 | 0.711052 | 0.001674 | 0.002144 | 0.001825 |
| aligned_storage_test.test | RUN | 0.160543 | 0.436571 | 0.644153 | 0.002024 | 0.002015 | 0.002012 |
| aligned_storage_empy_test.test | RUN | 0.189545 | 0.480163 | 0.859188 | 0.001943 | 0.002184 | 0.001662 |
| aligned_storage_a2_test.test | RUN | 0.163866 | 0.412823 | 0.664365 | 0.002258 | 0.002443 | 0.001981 |
| add_volatile_test.test | RUN | 0.361112 | 1.330099 | 3.367701 | 0.002046 | 0.001880 | 0.002078 |
| add_rvalue_reference_test.test | RUN | 0.417764 | 1.475415 | 3.832754 | 0.001842 | 0.002010 | 0.002129 |
| add_reference_test.test | RUN | 0.397716 | 1.462910 | 3.789538 | 0.001766 | 0.002176 | 0.002016 |
| add_pointer_test.test | RUN | 0.252210 | 0.812413 | 1.958961 | 0.002023 | 0.001839 | 0.002099 |
| add_lvalue_reference_test.test | RUN | 0.400334 | 1.398818 | 3.826275 | 0.001780 | 0.001844 | 0.002065 |
| add_cv_test.test | RUN | 0.380214 | 1.311793 | 3.543410 | 0.001925 | 0.001654 | 0.001967 |
| add_const_test.test | RUN | 0.379680 | 1.426537 | 3.583472 | 0.002044 | 0.002064 | 0.001664 |
| is_virtual_base_of_fail.test | COMPILE_FAIL | 0.140391 | 0.344480 | 0.513554 | — | — | — |
| is_stateless_fail.test | COMPILE_FAIL | 0.149937 | 0.353571 | 0.540265 | — | — | — |
| is_polymorphic_fail.test | COMPILE_FAIL | 0.135252 | 0.320802 | 0.524386 | — | — | — |
| is_nothrow_move_constructible_fail.test | COMPILE_FAIL | 0.141301 | 0.322193 | 0.473450 | — | — | — |
| is_nothrow_move_assignable_fail.test | COMPILE_FAIL | 0.144405 | 0.333829 | 0.517448 | — | — | — |
| is_list_constructible_fail.test | COMPILE_FAIL | 0.142923 | 0.335887 | 0.511256 | — | — | — |
| is_empty_fail.test | COMPILE_FAIL | 0.142565 | 0.326331 | 0.518860 | — | — | — |
| is_destructible_fail.test | COMPILE_FAIL | 0.142773 | 0.335776 | 0.497887 | — | — | — |
| is_default_constructible_fail.test | COMPILE_FAIL | 0.142249 | 0.330799 | 0.520579 | — | — | — |
| is_copy_constructible_fail.test | COMPILE_FAIL | 0.142532 | 0.330081 | 0.525359 | — | — | — |
| is_copy_assignable_fail.test | COMPILE_FAIL | 0.140450 | 0.328378 | 0.504764 | — | — | — |
| is_convertible_fail.test | COMPILE_FAIL | 0.141397 | 0.337239 | 0.511657 | — | — | — |
| is_convertible2_fail.test | COMPILE_FAIL | 0.144571 | 0.338148 | 0.515843 | — | — | — |
| is_constructible_fail.test | COMPILE_FAIL | 0.142968 | 0.338883 | 0.522591 | — | — | — |
| is_base_of_fail.test | COMPILE_FAIL | 0.140613 | 0.324981 | 0.500841 | — | — | — |
| is_assignable_fail.test | COMPILE_FAIL | 0.143131 | 0.326696 | 0.489567 | — | — | — |
| has_nothrow_destruct_fail.test | COMPILE_FAIL | 0.149084 | 0.332647 | 0.515082 | — | — | — |
| has_nothrow_copy_fail.test | COMPILE_FAIL | 0.147408 | 0.337566 | 0.533746 | — | — | — |
| has_nothrow_cons_fail.test | COMPILE_FAIL | 0.146326 | 0.324963 | 0.499453 | — | — | — |
| has_nothrow_assign_fail.test | COMPILE_FAIL | 0.147367 | 0.337500 | 0.497013 | — | — | — |
| common_type_fail.test | COMPILE_FAIL | 0.148098 | 0.335520 | 0.514259 | — | — | — |
| common_type2_fail.test | COMPILE_FAIL | 0.142425 | 0.331248 | 0.497606 | — | — | — |
| has_nothrow_assign_test_no_intrinsics.test | RUN | 0.227493 | 0.735649 | 1.475601 | 0.001930 | 0.002102 | 0.002139 |
| has_nothrow_constr_test_no_intrinsics.test | RUN | 0.217534 | 0.712794 | 1.431337 | 0.001861 | 0.002004 | 0.002056 |
| has_nothrow_copy_test_no_intrinsics.test | RUN | 0.223853 | 0.719240 | 1.460338 | 0.001546 | 0.002086 | 0.002004 |
| is_nothrow_move_assignable_test_no_intrinsics.test | RUN | 0.219220 | 0.704308 | 1.438877 | 0.001529 | 0.001541 | 0.001460 |
| is_nothrow_move_constructible_test_no_intrinsics.test | RUN | 0.128729 | 0.477345 | 0.903858 | 0.001653 | 0.001543 | 0.001406 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 1.002× | 1.002×, 1.001× | 1.004× |
| clang | 1.021× | 1.017×, 1.026× | 0.998× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1359 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44000592280).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| add_const_test.test | 10 | 0.001475s | 0.001455s | 0.001434s | byte equality observed |
| add_cv_test.test | 10 | 0.001459s | 0.001461s | 0.001461s | byte equality observed |
| add_lvalue_reference_test.test | 10 | 0.001482s | 0.001472s | 0.001480s | byte equality observed |
| add_pointer_test.test | 10 | 0.001443s | 0.001467s | 0.001452s | byte equality observed |
| add_reference_test.test | 10 | 0.001463s | 0.001486s | 0.001437s | byte equality observed |
| add_rvalue_reference_test.test | 10 | 0.001482s | 0.001458s | 0.001465s | byte equality observed |
| add_volatile_test.test | 9 | 0.001490s | 0.001445s | 0.001422s | byte equality observed |
| aligned_storage_a2_test.test | 10 | 0.001587s | 0.001611s | 0.001579s | byte equality observed |
| aligned_storage_empy_test.test | 10 | 0.001466s | 0.001460s | 0.001504s | byte equality observed |
| aligned_storage_test.test | 10 | 0.001580s | 0.001632s | 0.001594s | byte equality observed |
| alignment_of_a2_test.test | 10 | 0.001463s | 0.001485s | 0.001444s | byte equality observed |
| alignment_of_test.test | 10 | 0.001492s | 0.001472s | 0.001463s | byte equality observed |
| common_type_2_test.test | 10 | 0.001472s | 0.001482s | 0.001433s | byte equality observed |
| common_type_3_test.test | 10 | 0.001461s | 0.001460s | 0.001463s | byte equality observed |
| common_type_4_test.test | 10 | 0.001442s | 0.001460s | 0.001460s | byte equality observed |
| common_type_5_test.test | 10 | 0.001462s | 0.001478s | 0.001466s | byte equality observed |
| common_type_6_test.test | 10 | 0.001454s | 0.001447s | 0.001438s | byte equality observed |
| common_type_sfinae2_test.test | 10 | 0.001478s | 0.001454s | 0.001415s | byte equality observed |
| common_type_sfinae_test.test | 10 | 0.001446s | 0.001460s | 0.001471s | byte equality observed |
| common_type_test.test | 10 | 0.001468s | 0.001478s | 0.001457s | byte equality observed |
| conditional_test.test | 10 | 0.001456s | 0.001438s | 0.001446s | byte equality observed |
| conjunction_test.test | 10 | 0.001463s | 0.001466s | 0.001430s | byte equality observed |
| copy_cv_ref_test.test | 10 | 0.001464s | 0.001472s | 0.001442s | byte equality observed |
| copy_cv_test.test | 10 | 0.001442s | 0.001478s | 0.001432s | byte equality observed |
| copy_reference_test.test | 10 | 0.001470s | 0.001467s | 0.001439s | byte equality observed |
| cxx14_aliases_test.test | 9 | 0.001456s | 0.001461s | 0.001451s | byte equality observed |
| decay_test.test | 10 | 0.001484s | 0.001477s | 0.001423s | byte equality observed |
| detected_or_test.test | 10 | 0.001468s | 0.001487s | 0.001441s | byte equality observed |
| detected_test.test | 10 | 0.001452s | 0.001458s | 0.001458s | byte equality observed |
| disjunction_test.test | 10 | 0.001449s | 0.001463s | 0.001462s | byte equality observed |
| enable_if_test.test | 10 | 0.001458s | 0.001454s | 0.001430s | byte equality observed |
| extent_test.test | 10 | 0.001446s | 0.001470s | 0.001441s | byte equality observed |
| floating_point_promotion_test.test | 10 | 0.001459s | 0.001517s | 0.001453s | byte equality observed |
| function_traits_test.test | 10 | 0.001470s | 0.001442s | 0.001440s | byte equality observed |
| has_binary_classes0_test.test | 10 | 0.001454s | 0.001477s | 0.001439s | byte equality observed |
| has_binary_classes1_test.test | 10 | 0.001443s | 0.001467s | 0.001437s | byte equality observed |
| has_binary_classes2_test.test | 10 | 0.001477s | 0.001448s | 0.001435s | byte equality observed |
| has_binary_classes3_test.test | 10 | 0.001453s | 0.001471s | 0.001441s | byte equality observed |
| has_binary_classes4_test.test | 10 | 0.001462s | 0.001500s | 0.001461s | byte equality observed |
| has_binary_classes5_test.test | 10 | 0.001453s | 0.001459s | 0.001446s | byte equality observed |
| has_binary_classes6_test.test | 10 | 0.001437s | 0.001462s | 0.001470s | byte equality observed |
| has_binary_classes7_test.test | 10 | 0.001458s | 0.001482s | 0.001445s | byte equality observed |
| has_binary_classes8_test.test | 10 | 0.001482s | 0.001458s | 0.001449s | byte equality observed |
| has_binary_classes9_test.test | 10 | 0.001455s | 0.001448s | 0.001461s | byte equality observed |
| has_bit_and_assign_test.test | 10 | 0.001460s | 0.001455s | 0.001460s | byte equality observed |
| has_bit_and_test.test | 10 | 0.001454s | 0.001473s | 0.001430s | byte equality observed |
| has_bit_or_assign_test.test | 10 | 0.001468s | 0.001459s | 0.001436s | byte equality observed |
| has_bit_or_test.test | 10 | 0.001470s | 0.001471s | 0.001455s | byte equality observed |
| has_bit_xor_assign_test.test | 10 | 0.001452s | 0.001474s | 0.001446s | byte equality observed |
| has_bit_xor_test.test | 10 | 0.001471s | 0.001469s | 0.001427s | byte equality observed |
| has_complement_test.test | 10 | 0.001448s | 0.001459s | 0.001469s | byte equality observed |
| has_dereference_test.test | 10 | 0.001468s | 0.001484s | 0.001428s | byte equality observed |
| has_divides_assign_test.test | 10 | 0.001482s | 0.001482s | 0.001434s | byte equality observed |
| has_divides_test.test | 10 | 0.001454s | 0.001432s | 0.001435s | byte equality observed |
| has_equal_to_test.test | 10 | 0.001459s | 0.001463s | 0.001436s | byte equality observed |
| has_greater_equal_test.test | 10 | 0.001450s | 0.001463s | 0.001476s | byte equality observed |
| has_greater_test.test | 10 | 0.001460s | 0.001493s | 0.001425s | byte equality observed |
| has_left_shift_assign_test.test | 10 | 0.001436s | 0.001488s | 0.001463s | byte equality observed |
| has_left_shift_test.test | 8 | 0.001448s | 0.001464s | 0.001450s | byte equality observed |
| has_less_equal_test.test | 10 | 0.001482s | 0.001461s | 0.001460s | byte equality observed |
| has_less_test.test | 10 | 0.001468s | 0.001452s | 0.001412s | byte equality observed |
| has_logical_and_test.test | 10 | 0.001482s | 0.001453s | 0.001436s | byte equality observed |
| has_logical_not_test.test | 10 | 0.001480s | 0.001454s | 0.001471s | byte equality observed |
| has_logical_or_test.test | 10 | 0.001470s | 0.001460s | 0.001451s | byte equality observed |
| has_minus_assign_test.test | 10 | 0.001476s | 0.001443s | 0.001461s | byte equality observed |
| has_minus_test.test | 10 | 0.001443s | 0.001478s | 0.001433s | byte equality observed |
| has_modulus_assign_test.test | 10 | 0.001465s | 0.001481s | 0.001456s | byte equality observed |
| has_modulus_test.test | 10 | 0.001483s | 0.001460s | 0.001454s | byte equality observed |
| has_multiplies_assign_test.test | 10 | 0.001441s | 0.001458s | 0.001440s | byte equality observed |
| has_multiplies_test.test | 8 | 0.001439s | 0.001481s | 0.001474s | byte equality observed |
| has_negate_test.test | 10 | 0.001471s | 0.001466s | 0.001441s | byte equality observed |
| has_not_equal_to_test.test | 10 | 0.001472s | 0.001462s | 0.001449s | byte equality observed |
| has_nothrow_assign_test.test | 10 | 0.001480s | 0.001442s | 0.001435s | byte equality observed |
| has_nothrow_assign_test_no_intrinsics.test | 10 | 0.001453s | 0.001461s | 0.001421s | byte equality observed |
| has_nothrow_constr_test.test | 10 | 0.001451s | 0.001462s | 0.001400s | byte equality observed |
| has_nothrow_constr_test_no_intrinsics.test | 10 | 0.001451s | 0.001487s | 0.001447s | byte equality observed |
| has_nothrow_copy_test.test | 10 | 0.001437s | 0.001433s | 0.001473s | byte equality observed |
| has_nothrow_copy_test_no_intrinsics.test | 10 | 0.001472s | 0.001463s | 0.001409s | byte equality observed |
| has_nothrow_destructor_test.test | 10 | 0.001480s | 0.001501s | 0.001467s | byte equality observed |
| has_operator_new_test.test | 10 | 0.001440s | 0.001439s | 0.001438s | byte equality observed |
| has_plus_assign_test.test | 10 | 0.001461s | 0.001485s | 0.001470s | byte equality observed |
| has_plus_test.test | 10 | 0.001475s | 0.001487s | 0.001419s | byte equality observed |
| has_post_decrement_test.test | 10 | 0.001444s | 0.001466s | 0.001436s | byte equality observed |
| has_post_increment_test.test | 10 | 0.001436s | 0.001457s | 0.001485s | byte equality observed |
| has_postfix_classes0_test.test | 10 | 0.001426s | 0.001449s | 0.001452s | byte equality observed |
| has_postfix_classes1_test.test | 10 | 0.001469s | 0.001503s | 0.001448s | byte equality observed |
| has_postfix_classes2_test.test | 10 | 0.001452s | 0.001450s | 0.001424s | byte equality observed |
| has_postfix_classes3_test.test | 10 | 0.001451s | 0.001482s | 0.001447s | byte equality observed |
| has_pre_decrement_test.test | 10 | 0.001461s | 0.001467s | 0.001404s | byte equality observed |
| has_pre_increment_test.test | 9 | 0.001468s | 0.001461s | 0.001442s | byte equality observed |
| has_prefix_classes0_test.test | 10 | 0.001436s | 0.001474s | 0.001444s | byte equality observed |
| has_prefix_classes1_test.test | 10 | 0.001469s | 0.001468s | 0.001457s | byte equality observed |
| has_prefix_classes2_test.test | 10 | 0.001454s | 0.001494s | 0.001430s | byte equality observed |
| has_prefix_classes3_test.test | 10 | 0.001440s | 0.001490s | 0.001450s | byte equality observed |
| has_right_shift_assign_test.test | 10 | 0.001473s | 0.001475s | 0.001430s | byte equality observed |
| has_right_shift_test.test | 10 | 0.001445s | 0.001491s | 0.001436s | byte equality observed |
| has_trivial_assign_test.test | 10 | 0.001548s | 0.001588s | 0.001524s | byte equality observed |
| has_trivial_constr_test.test | 10 | 0.001507s | 0.001508s | 0.001535s | native test oracle; output varies |
| has_trivial_copy_test.test | 9 | 0.001564s | 0.001522s | 0.001587s | native test oracle; output varies |
| has_trivial_destructor_test.test | 10 | 0.001437s | 0.001455s | 0.001436s | byte equality observed |
| has_trivial_move_assign_test.test | 10 | 0.001483s | 0.001480s | 0.001460s | byte equality observed |
| has_trivial_move_constructor_test.test | 10 | 0.001471s | 0.001448s | 0.001459s | byte equality observed |
| has_unary_minus_test.test | 10 | 0.001467s | 0.001470s | 0.001443s | byte equality observed |
| has_unary_plus_test.test | 10 | 0.001468s | 0.001493s | 0.001447s | byte equality observed |
| has_virtual_destructor_test.test | 10 | 0.001474s | 0.001436s | 0.001448s | byte equality observed |
| integral_constant_test.test | 10 | 0.000638s | 0.000664s | 0.001434s | byte equality observed |
| is_abstract_test.test | 10 | 0.001441s | 0.001476s | 0.001449s | byte equality observed |
| is_arithmetic_test.test | 10 | 0.001458s | 0.001479s | 0.001451s | byte equality observed |
| is_array_test.test | 10 | 0.001451s | 0.001459s | 0.001449s | byte equality observed |
| is_assignable_test.test | 10 | 0.001452s | 0.001440s | 0.001468s | byte equality observed |
| is_base_and_derived_test.test | 10 | 0.001442s | 0.001505s | 0.001456s | byte equality observed |
| is_base_of_test.test | 10 | 0.001438s | 0.001439s | 0.001449s | byte equality observed |
| is_bounded_array_test.test | 10 | 0.001465s | 0.001458s | 0.001436s | byte equality observed |
| is_class_test.test | 10 | 0.001446s | 0.001485s | 0.001429s | byte equality observed |
| is_complete_test.test | 10 | 0.001478s | 0.001475s | 0.001429s | byte equality observed |
| is_complex_test.test | 10 | 0.001442s | 0.001468s | 0.001436s | byte equality observed |
| is_compound_test.test | 10 | 0.001444s | 0.001440s | 0.001462s | byte equality observed |
| is_const_test.test | 9 | 0.001449s | 0.001442s | 0.001413s | byte equality observed |
| is_constructible_test.test | 10 | 0.001469s | 0.001468s | 0.001454s | byte equality observed |
| is_convertible_test.test | 10 | 0.001454s | 0.001460s | 0.001462s | byte equality observed |
| is_copy_assignable_test.test | 10 | 0.001472s | 0.001445s | 0.001441s | byte equality observed |
| is_copy_constructible_test.test | 10 | 0.001475s | 0.001455s | 0.001443s | byte equality observed |
| is_default_constr_test.test | 10 | 0.001452s | 0.001463s | 0.001420s | byte equality observed |
| is_destructible_test.test | 10 | 0.001450s | 0.001463s | 0.001450s | byte equality observed |
| is_detected_exact_test.test | 10 | 0.001443s | 0.001447s | 0.001451s | byte equality observed |
| is_detected_test.test | 10 | 0.001463s | 0.001471s | 0.001437s | byte equality observed |
| is_empty_test.test | 10 | 0.001461s | 0.001476s | 0.001450s | byte equality observed |
| is_enum_test.test | 10 | 0.001453s | 0.001498s | 0.001445s | byte equality observed |
| is_final_test.test | 10 | 0.001462s | 0.001479s | 0.001431s | byte equality observed |
| is_float_test.test | 10 | 0.001452s | 0.001446s | 0.001422s | byte equality observed |
| is_floating_point_test.test | 10 | 0.001469s | 0.001478s | 0.001409s | byte equality observed |
| is_function_test.test | 10 | 0.001455s | 0.001450s | 0.001450s | byte equality observed |
| is_fundamental_test.test | 10 | 0.001482s | 0.001479s | 0.001449s | byte equality observed |
| is_integral_test.test | 10 | 0.001474s | 0.001454s | 0.001457s | byte equality observed |
| is_list_constructible_test.test | 10 | 0.001477s | 0.001479s | 0.001415s | byte equality observed |
| is_lvalue_reference_test.test | 10 | 0.001467s | 0.001478s | 0.001450s | byte equality observed |
| is_member_func_test.test | 10 | 0.001458s | 0.001493s | 0.001445s | byte equality observed |
| is_member_obj_test.test | 10 | 0.001445s | 0.001438s | 0.001445s | byte equality observed |
| is_member_pointer_test.test | 10 | 0.001450s | 0.001472s | 0.001450s | byte equality observed |
| is_noncopyable_test.test | 10 | 0.001439s | 0.001464s | 0.001413s | byte equality observed |
| is_nothrow_move_assignable_test.test | 10 | 0.001474s | 0.001469s | 0.001402s | byte equality observed |
| is_nothrow_move_assignable_test_no_intrinsics.test | 10 | 0.001447s | 0.001456s | 0.001435s | byte equality observed |
| is_nothrow_move_constructible_test.test | 10 | 0.001454s | 0.001454s | 0.001448s | byte equality observed |
| is_nothrow_move_constructible_test_no_intrinsics.test | 10 | 0.001451s | 0.001444s | 0.001453s | byte equality observed |
| is_nothrow_swappable_test.test | 10 | 0.001460s | 0.001473s | 0.001446s | byte equality observed |
| is_object_test.test | 8 | 0.001452s | 0.001468s | 0.001447s | byte equality observed |
| is_pod_test.test | 10 | 0.001468s | 0.001465s | 0.001442s | byte equality observed |
| is_pointer_test.test | 10 | 0.001459s | 0.001485s | 0.001431s | byte equality observed |
| is_polymorphic_test.test | 10 | 0.001440s | 0.001449s | 0.001454s | byte equality observed |
| is_reference_test.test | 10 | 0.001449s | 0.001465s | 0.001422s | byte equality observed |
| is_rvalue_reference_test.test | 10 | 0.001446s | 0.001432s | 0.001439s | byte equality observed |
| is_same_test.test | 10 | 0.001454s | 0.001492s | 0.001440s | byte equality observed |
| is_scalar_test.test | 10 | 0.001465s | 0.001459s | 0.001454s | byte equality observed |
| is_scoped_enum_test.test | 10 | 0.001463s | 0.001473s | 0.001456s | byte equality observed |
| is_signed_test.test | 10 | 0.001458s | 0.001482s | 0.001436s | byte equality observed |
| is_stateless_test.test | 10 | 0.001464s | 0.001466s | 0.001449s | byte equality observed |
| is_swappable_test.test | 10 | 0.001450s | 0.001487s | 0.001461s | byte equality observed |
| is_trivially_copyable_test.test | 10 | 0.001500s | 0.001534s | 0.001509s | byte equality observed |
| is_unbounded_array_test.test | 10 | 0.001451s | 0.001449s | 0.001470s | byte equality observed |
| is_union_test.test | 10 | 0.001457s | 0.001449s | 0.001443s | byte equality observed |
| is_unscoped_enum_test.test | 9 | 0.001453s | 0.001471s | 0.001442s | byte equality observed |
| is_unsigned_test.test | 10 | 0.001462s | 0.001425s | 0.001454s | byte equality observed |
| is_virtual_base_of_test.test | 10 | 0.001439s | 0.001465s | 0.001450s | byte equality observed |
| is_void_test.test | 10 | 0.001447s | 0.001484s | 0.001450s | byte equality observed |
| is_volatile_test.test | 10 | 0.001464s | 0.001433s | 0.001465s | byte equality observed |
| make_signed_test.test | 10 | 0.001482s | 0.001467s | 0.001431s | byte equality observed |
| make_unsigned_test.test | 10 | 0.001477s | 0.001470s | 0.001450s | byte equality observed |
| make_void_test.test | 10 | 0.001492s | 0.001484s | 0.001440s | byte equality observed |
| mpl_interop_test1.test | 10 | 0.000641s | 0.000649s | 0.001449s | byte equality observed |
| mpl_interop_test2.test | 10 | 0.000652s | 0.000654s | 0.001471s | byte equality observed |
| mpl_interop_test3.test | 10 | 0.000653s | 0.000661s | 0.001426s | byte equality observed |
| negation_test.test | 10 | 0.001496s | 0.001572s | 0.001427s | byte equality observed |
| promote_basic_test.test | 10 | 0.000650s | 0.000634s | 0.001435s | byte equality observed |
| promote_enum_msvc_bug_test.test | 10 | 0.000659s | 0.000659s | 0.001446s | byte equality observed |
| promote_enum_test.test | 10 | 0.000644s | 0.000660s | 0.001451s | byte equality observed |
| promote_mpl_test.test | 10 | 0.000654s | 0.000660s | 0.001439s | byte equality observed |
| rank_test.test | 10 | 0.001476s | 0.001470s | 0.001476s | byte equality observed |
| remove_all_extents_test.test | 10 | 0.001482s | 0.001480s | 0.001435s | byte equality observed |
| remove_bounds_test.test | 10 | 0.001473s | 0.001481s | 0.001449s | byte equality observed |
| remove_const_test.test | 10 | 0.001453s | 0.001482s | 0.001448s | byte equality observed |
| remove_cv_ref_test.test | 10 | 0.001472s | 0.001475s | 0.001447s | byte equality observed |
| remove_cv_test.test | 10 | 0.001472s | 0.001474s | 0.001411s | byte equality observed |
| remove_extent_test.test | 10 | 0.001458s | 0.001483s | 0.001452s | byte equality observed |
| remove_pointer_test.test | 10 | 0.001449s | 0.001462s | 0.001457s | byte equality observed |
| remove_reference_test.test | 10 | 0.001425s | 0.001454s | 0.001453s | byte equality observed |
| remove_volatile_test.test | 8 | 0.001472s | 0.001489s | 0.001442s | byte equality observed |
| tricky_abstract_type_test.test | 10 | 0.001479s | 0.001448s | 0.001462s | byte equality observed |
| tricky_add_pointer_test.test | 9 | 0.001446s | 0.001464s | 0.001476s | byte equality observed |
| tricky_function_type_test.test | 10 | 0.001449s | 0.001456s | 0.001463s | byte equality observed |
| tricky_incomplete_type_test.test | 10 | 0.001442s | 0.001477s | 0.001430s | byte equality observed |
| tricky_is_enum_test.test | 10 | 0.001455s | 0.001486s | 0.001440s | byte equality observed |
| tricky_partial_spec_test.test | 10 | 0.001419s | 0.001513s | 0.001400s | byte equality observed |
| tricky_rvalue_test.test | 10 | 0.001459s | 0.001484s | 0.001446s | byte equality observed |
| type_identity_test.test | 10 | 0.001506s | 0.001467s | 0.001455s | byte equality observed |
| type_traits_test.test | 10 | 0.000636s | 0.000654s | 0.001442s | byte equality observed |
| type_with_alignment_test.test | 10 | 0.001602s | 0.001655s | 0.001611s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44000592280).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
