# libs/type_traits/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| type_with_alignment_test.test | RUN | 0.149304 | 0.409314 | 0.650719 | 0.002088 | 0.001990 | 0.001982 |
| type_traits_test.test | RUN | 0.214527 | 0.426163 | 0.647066 | 0.000718 | 0.000784 | 0.002128 |
| type_identity_test.test | RUN | 0.397787 | 1.486464 | 3.736822 | 0.001874 | 0.002150 | 0.002045 |
| tricky_rvalue_test.test | RUN | 0.140950 | 0.328921 | 0.503771 | 0.001897 | 0.002204 | 0.001783 |
| tricky_partial_spec_test.test | RUN | 0.170020 | 0.466734 | 0.791627 | 0.001858 | 0.001997 | 0.002046 |
| tricky_is_enum_test.test | RUN | 0.135410 | 0.312589 | 0.459960 | 0.002076 | 0.001990 | 0.001808 |
| tricky_incomplete_type_test.test | RUN | 0.221268 | 0.488494 | 0.801484 | 0.002004 | 0.002025 | 0.002082 |
| tricky_function_type_test.test | RUN | 0.181552 | 0.510814 | 0.892970 | 0.001973 | 0.001964 | 0.001920 |
| tricky_add_pointer_test.test | RUN | 0.260820 | 0.893669 | 2.083773 | 0.002090 | 0.002157 | 0.001990 |
| tricky_abstract_type_test.test | RUN | 0.141295 | 0.305006 | 0.487450 | 0.001980 | 0.002074 | 0.002074 |
| remove_volatile_test.test | RUN | 0.361775 | 1.254548 | 3.392289 | 0.002206 | 0.002204 | 0.002036 |
| remove_reference_test.test | RUN | 0.376983 | 1.345960 | 3.563727 | 0.002117 | 0.002156 | 0.002007 |
| remove_pointer_test.test | RUN | 0.382796 | 1.370444 | 3.661766 | 0.002114 | 0.002282 | 0.002104 |
| remove_extent_test.test | RUN | 0.375329 | 1.340390 | 3.515070 | 0.001961 | 0.002122 | 0.001936 |
| remove_cv_test.test | RUN | 0.373436 | 1.341356 | 3.540151 | 0.002192 | 0.002044 | 0.002024 |
| remove_cv_ref_test.test | RUN | 0.774060 | 3.147369 | 8.616815 | 0.001978 | 0.001806 | 0.002218 |
| remove_const_test.test | RUN | 0.366040 | 1.248210 | 3.346667 | 0.002207 | 0.002165 | 0.002204 |
| remove_bounds_test.test | RUN | 0.377621 | 1.329582 | 3.540598 | 0.001885 | 0.002026 | 0.002112 |
| remove_all_extents_test.test | RUN | 0.377133 | 1.303251 | 3.428234 | 0.001962 | 0.001858 | 0.001976 |
| rank_test.test | RUN | 0.139578 | 0.318113 | 0.514407 | 0.002028 | 0.001964 | 0.001916 |
| promote_mpl_test.test | RUN | 0.125560 | 0.285999 | 0.351967 | 0.000787 | 0.000867 | 0.001910 |
| promote_enum_test.test | RUN | 0.028777 | 0.070417 | 0.079513 | 0.000760 | 0.000801 | 0.001988 |
| promote_enum_msvc_bug_test.test | RUN | 0.027557 | 0.063280 | 0.065114 | 0.000727 | 0.000805 | 0.001823 |
| promote_basic_test.test | RUN | 0.032822 | 0.084644 | 0.082444 | 0.000905 | 0.000721 | 0.002022 |
| negation_test.test | RUN | 0.139224 | 0.288888 | 0.405646 | 0.001871 | 0.001882 | 0.001724 |
| mpl_interop_test3.test | RUN | 0.113851 | 0.280420 | 0.303304 | 0.000708 | 0.000696 | 0.001879 |
| mpl_interop_test2.test | RUN | 0.043790 | 0.080247 | 0.081601 | 0.000898 | 0.000805 | 0.001923 |
| mpl_interop_test1.test | RUN | 0.023113 | 0.059833 | 0.067573 | 0.000721 | 0.000795 | 0.001917 |
| make_void_test.test | RUN | 0.141859 | 0.321055 | 0.512718 | 0.001888 | 0.001873 | 0.002206 |
| make_unsigned_test.test | RUN | 0.163944 | 0.427361 | 0.687754 | 0.001901 | 0.001963 | 0.002047 |
| make_signed_test.test | RUN | 0.167790 | 0.431335 | 0.743340 | 0.001952 | 0.001806 | 0.002017 |
| is_volatile_test.test | RUN | 0.148925 | 0.361555 | 0.573606 | 0.001778 | 0.001812 | 0.002090 |
| is_void_test.test | RUN | 0.142516 | 0.340497 | 0.524647 | 0.002104 | 0.001968 | 0.002144 |
| is_virtual_base_of_test.test | RUN | 0.166423 | 0.428888 | 0.732832 | 0.001770 | 0.001733 | 0.001911 |
| is_unsigned_test.test | RUN | 0.146270 | 0.359539 | 0.578391 | 0.001930 | 0.002062 | 0.001775 |
| is_unscoped_enum_test.test | RUN | 0.140739 | 0.318840 | 0.443286 | 0.001826 | 0.001306 | 0.001957 |
| is_union_test.test | RUN | 0.157687 | 0.402031 | 0.655558 | 0.001644 | 0.002130 | 0.001850 |
| is_unbounded_array_test.test | RUN | 0.141522 | 0.346826 | 0.508970 | 0.001872 | 0.002006 | 0.002146 |
| is_trivially_copyable_test.test | RUN | 0.226373 | 0.702104 | 1.376824 | 0.001862 | 0.002172 | 0.001940 |
| is_swappable_test.test | RUN | 0.191847 | 0.540953 | 1.050794 | 0.001953 | 0.002154 | 0.002070 |
| is_stateless_test.test | RUN | 0.213420 | 0.609775 | 1.124144 | 0.001839 | 0.002045 | 0.002091 |
| is_signed_test.test | RUN | 0.147836 | 0.348150 | 0.582857 | 0.001924 | 0.001832 | 0.002136 |
| is_scoped_enum_test.test | RUN | 0.140807 | 0.320916 | 0.461401 | 0.001953 | 0.001934 | 0.002068 |
| is_scalar_test.test | RUN | 0.185065 | 0.549186 | 1.051609 | 0.001841 | 0.002166 | 0.001924 |
| is_same_test.test | RUN | 0.146082 | 0.336397 | 0.520977 | 0.001833 | 0.001792 | 0.002180 |
| is_rvalue_reference_test.test | RUN | 0.152591 | 0.369812 | 0.596061 | 0.001832 | 0.001966 | 0.001842 |
| is_reference_test.test | RUN | 0.151728 | 0.386514 | 0.647364 | 0.001916 | 0.001938 | 0.002072 |
| is_polymorphic_test.test | RUN | 0.158350 | 0.392616 | 0.634665 | 0.001830 | 0.002224 | 0.002046 |
| is_pointer_test.test | RUN | 0.153930 | 0.385863 | 0.660569 | 0.002148 | 0.001767 | 0.002072 |
| is_pod_test.test | RUN | 0.199829 | 0.634558 | 1.235355 | 0.001972 | 0.002053 | 0.002159 |
| is_object_test.test | RUN | 0.140100 | 0.327505 | 0.448060 | 0.001611 | 0.002154 | 0.002092 |
| is_nothrow_swappable_test.test | RUN | 0.199802 | 0.577484 | 1.105109 | 0.002273 | 0.002103 | 0.002128 |
| is_nothrow_move_constructible_test.test | RUN | 0.195806 | 0.614638 | 1.130877 | 0.002059 | 0.002135 | 0.001763 |
| is_nothrow_move_assignable_test.test | RUN | 0.199614 | 0.608520 | 1.217358 | 0.001858 | 0.001931 | 0.001576 |
| is_noncopyable_test.test | RUN | 0.141518 | 0.328106 | 0.539963 | 0.001930 | 0.001940 | 0.001798 |
| is_member_pointer_test.test | RUN | 0.150038 | 0.334309 | 0.498741 | 0.002002 | 0.002130 | 0.002054 |
| is_member_obj_test.test | RUN | 0.142495 | 0.332870 | 0.513195 | 0.002083 | 0.002080 | 0.002094 |
| is_member_func_test.test | RUN | 0.149146 | 0.365120 | 0.584256 | 0.001880 | 0.001910 | 0.002052 |
| is_lvalue_reference_test.test | RUN | 0.155127 | 0.374955 | 0.632665 | 0.001824 | 0.001798 | 0.002129 |
| is_list_constructible_test.test | RUN | 0.172258 | 0.457602 | 0.636828 | 0.002096 | 0.001854 | 0.002208 |
| is_integral_test.test | RUN | 0.176203 | 0.526690 | 0.976183 | 0.002200 | 0.001973 | 0.001594 |
| is_fundamental_test.test | RUN | 0.186179 | 0.556562 | 1.021625 | 0.001880 | 0.002136 | 0.002008 |
| is_function_test.test | RUN | 0.154691 | 0.361509 | 0.588961 | 0.001962 | 0.002006 | 0.001895 |
| is_floating_point_test.test | RUN | 0.148649 | 0.382475 | 0.670750 | 0.001729 | 0.002152 | 0.001806 |
| is_float_test.test | RUN | 0.153491 | 0.391563 | 0.663723 | 0.002030 | 0.001880 | 0.001700 |
| is_final_test.test | RUN | 0.154712 | 0.403969 | 0.672733 | 0.001898 | 0.001922 | 0.001752 |
| is_enum_test.test | RUN | 0.141383 | 0.323577 | 0.508844 | 0.001851 | 0.002044 | 0.001852 |
| is_empty_test.test | RUN | 0.151732 | 0.369985 | 0.585014 | 0.002008 | 0.001852 | 0.002035 |
| is_detected_test.test | RUN | 0.138443 | 0.315728 | 0.432974 | 0.002001 | 0.001866 | 0.002110 |
| is_detected_exact_test.test | RUN | 0.138383 | 0.311482 | 0.459206 | 0.001877 | 0.002190 | 0.001908 |
| is_destructible_test.test | RUN | 0.195570 | 0.614146 | 1.146230 | 0.001671 | 0.002275 | 0.002128 |
| is_default_constr_test.test | RUN | 0.200735 | 0.651788 | 1.171070 | 0.002106 | 0.002072 | 0.002295 |
| is_copy_constructible_test.test | RUN | 0.207769 | 0.666780 | 1.241774 | 0.002154 | 0.002016 | 0.001981 |
| is_copy_assignable_test.test | RUN | 0.212425 | 0.642880 | 1.229910 | 0.002079 | 0.002058 | 0.002008 |
| is_convertible_test.test | RUN | 0.198538 | 0.574225 | 1.011790 | 0.001928 | 0.002252 | 0.001768 |
| is_constructible_test.test | RUN | 0.165084 | 0.431178 | 0.674279 | 0.002146 | 0.002100 | 0.002010 |
| is_const_test.test | RUN | 0.150883 | 0.376172 | 0.600615 | 0.001882 | 0.001888 | 0.002024 |
| is_compound_test.test | RUN | 0.142194 | 0.307880 | 0.425324 | 0.001770 | 0.001955 | 0.001979 |
| is_complex_test.test | RUN | 0.183183 | 0.421146 | 0.649427 | 0.002265 | 0.001808 | 0.002180 |
| is_complete_test.test | RUN | 0.163584 | 0.446362 | 0.750285 | 0.001992 | 0.001866 | 0.001940 |
| is_class_test.test | RUN | 0.152410 | 0.393325 | 0.636787 | 0.002016 | 0.001867 | 0.001815 |
| is_bounded_array_test.test | RUN | 0.143819 | 0.345774 | 0.502991 | 0.001852 | 0.001938 | 0.002054 |
| is_base_of_test.test | RUN | 0.149257 | 0.381302 | 0.595721 | 0.002100 | 0.001996 | 0.002182 |
| is_base_and_derived_test.test | RUN | 0.148404 | 0.371571 | 0.600732 | 0.001999 | 0.001892 | 0.001961 |
| is_assignable_test.test | RUN | 0.181948 | 0.529734 | 0.969673 | 0.001956 | 0.002204 | 0.001944 |
| is_array_test.test | RUN | 0.143717 | 0.369172 | 0.595286 | 0.001817 | 0.001852 | 0.002038 |
| is_arithmetic_test.test | RUN | 0.183600 | 0.541030 | 0.962049 | 0.002076 | 0.002108 | 0.002178 |
| is_abstract_test.test | RUN | 0.326664 | 1.476393 | 3.300649 | 0.002106 | 0.001825 | 0.002147 |
| integral_constant_test.test | RUN | 0.020364 | 0.057557 | 0.067963 | 0.000784 | 0.000912 | 0.002068 |
| has_virtual_destructor_test.test | RUN | 0.157304 | 0.421261 | 0.685240 | 0.002191 | 0.002280 | 0.002127 |
| has_unary_plus_test.test | RUN | 0.300098 | 1.690097 | 2.569920 | 0.002242 | 0.002422 | 0.001993 |
| has_unary_minus_test.test | RUN | 0.292729 | 1.653770 | 2.467237 | 0.001902 | 0.002143 | 0.002204 |
| has_trivial_move_constructor_test.test | RUN | 0.203788 | 0.606730 | 1.240667 | 0.001896 | 0.001938 | 0.002164 |
| has_trivial_move_assign_test.test | RUN | 0.206280 | 0.638084 | 1.143318 | 0.002184 | 0.001922 | 0.002035 |
| has_trivial_destructor_test.test | RUN | 0.196755 | 0.666668 | 1.211209 | 0.002098 | 0.001826 | 0.002002 |
| has_trivial_copy_test.test | RUN | 0.207028 | 0.683692 | 1.240417 | 0.002340 | 0.002101 | 0.002320 |
| has_trivial_constr_test.test | RUN | 0.209867 | 0.681141 | 1.262208 | 0.002004 | 0.002349 | 0.002264 |
| has_trivial_assign_test.test | RUN | 0.202332 | 0.682438 | 1.221569 | 0.002135 | 0.002020 | 0.002154 |
| has_right_shift_test.test | RUN | 0.315155 | 1.218230 | 2.704622 | 0.002029 | 0.002308 | 0.001779 |
| has_right_shift_assign_test.test | RUN | 0.302375 | 1.181837 | 2.529783 | 0.001889 | 0.002289 | 0.002112 |
| has_prefix_classes3_test.test | RUN | 0.219406 | 0.699032 | 1.274551 | 0.001913 | 0.001962 | 0.002024 |
| has_prefix_classes2_test.test | RUN | 0.222418 | 0.666963 | 1.254932 | 0.001916 | 0.001822 | 0.001946 |
| has_prefix_classes1_test.test | RUN | 0.219799 | 0.689000 | 1.202868 | 0.001998 | 0.002263 | 0.002058 |
| has_prefix_classes0_test.test | RUN | 0.222986 | 0.695199 | 1.288193 | 0.001850 | 0.002076 | 0.002042 |
| has_pre_increment_test.test | RUN | 0.296099 | 1.583242 | 2.441258 | 0.002090 | 0.002184 | 0.002087 |
| has_pre_decrement_test.test | RUN | 0.295435 | 1.617691 | 2.510765 | 0.001820 | 0.002210 | 0.001900 |
| has_postfix_classes3_test.test | RUN | 0.223838 | 0.702705 | 1.341381 | 0.002092 | 0.002164 | 0.002098 |
| has_postfix_classes2_test.test | RUN | 0.221671 | 0.651174 | 1.274139 | 0.001910 | 0.001794 | 0.001643 |
| has_postfix_classes1_test.test | RUN | 0.221310 | 0.713266 | 1.249038 | 0.002112 | 0.002324 | 0.002067 |
| has_postfix_classes0_test.test | RUN | 0.224685 | 0.690826 | 1.309329 | 0.001868 | 0.002286 | 0.002070 |
| has_post_increment_test.test | RUN | 0.294106 | 1.656736 | 2.519762 | 0.002082 | 0.002052 | 0.002034 |
| has_post_decrement_test.test | RUN | 0.300189 | 1.653512 | 2.530167 | 0.002176 | 0.001998 | 0.001710 |
| has_plus_test.test | RUN | 0.297033 | 1.138153 | 2.521278 | 0.002091 | 0.002012 | 0.002054 |
| has_plus_assign_test.test | RUN | 0.307956 | 1.172787 | 2.483695 | 0.001994 | 0.002232 | 0.001956 |
| has_operator_new_test.test | RUN | 0.204644 | 0.624146 | 1.141307 | 0.002208 | 0.002088 | 0.001770 |
| has_nothrow_destructor_test.test | RUN | 0.212398 | 0.688671 | 1.241411 | 0.001929 | 0.001710 | 0.002025 |
| has_nothrow_copy_test.test | RUN | 0.200633 | 0.631951 | 1.216728 | 0.001876 | 0.002096 | 0.002179 |
| has_nothrow_constr_test.test | RUN | 0.200288 | 0.619265 | 1.134816 | 0.001912 | 0.002289 | 0.001880 |
| has_nothrow_assign_test.test | RUN | 0.203445 | 0.613989 | 1.206620 | 0.002008 | 0.002196 | 0.002142 |
| has_not_equal_to_test.test | RUN | 0.300389 | 1.607111 | 2.580783 | 0.001893 | 0.002183 | 0.002051 |
| has_negate_test.test | RUN | 0.290717 | 1.136550 | 2.452063 | 0.001938 | 0.001944 | 0.002208 |
| has_multiplies_test.test | RUN | 0.301334 | 1.123847 | 2.557744 | 0.001862 | 0.002042 | 0.002251 |
| has_multiplies_assign_test.test | RUN | 0.300698 | 1.151397 | 2.434554 | 0.002128 | 0.002187 | 0.001920 |
| has_modulus_test.test | RUN | 0.295685 | 1.181737 | 2.527492 | 0.002092 | 0.002022 | 0.002256 |
| has_modulus_assign_test.test | RUN | 0.297180 | 1.151377 | 2.560105 | 0.001921 | 0.002060 | 0.002158 |
| has_minus_test.test | RUN | 0.306677 | 1.187257 | 2.526937 | 0.002047 | 0.001991 | 0.002306 |
| has_minus_assign_test.test | RUN | 0.318186 | 1.160881 | 2.583913 | 0.001870 | 0.002206 | 0.001833 |
| has_logical_or_test.test | RUN | 0.300034 | 1.184209 | 2.585649 | 0.001826 | 0.002099 | 0.002302 |
| has_logical_not_test.test | RUN | 0.291452 | 1.119763 | 2.456544 | 0.001890 | 0.001932 | 0.002093 |
| has_logical_and_test.test | RUN | 0.304751 | 1.213743 | 2.599566 | 0.001768 | 0.001998 | 0.001764 |
| has_less_test.test | RUN | 0.301114 | 1.562311 | 2.534331 | 0.001960 | 0.002247 | 0.001785 |
| has_less_equal_test.test | RUN | 0.300602 | 1.585952 | 2.658453 | 0.001904 | 0.002132 | 0.002272 |
| has_left_shift_test.test | RUN | 0.325213 | 1.499156 | 3.139630 | 0.001994 | 0.001716 | 0.002268 |
| has_left_shift_assign_test.test | RUN | 0.294229 | 1.164895 | 2.633915 | 0.001958 | 0.002196 | 0.001969 |
| has_greater_test.test | RUN | 0.298823 | 1.589648 | 2.655906 | 0.001820 | 0.002142 | 0.001740 |
| has_greater_equal_test.test | RUN | 0.301358 | 1.562485 | 2.528632 | 0.001817 | 0.002097 | 0.002292 |
| has_equal_to_test.test | RUN | 0.300583 | 1.533072 | 2.612830 | 0.001858 | 0.002026 | 0.001846 |
| has_divides_test.test | RUN | 0.302825 | 1.164933 | 2.613038 | 0.002201 | 0.002042 | 0.002238 |
| has_divides_assign_test.test | RUN | 0.301212 | 1.136168 | 2.641926 | 0.001872 | 0.002204 | 0.001909 |
| has_dereference_test.test | RUN | 0.293768 | 1.167389 | 2.409686 | 0.001662 | 0.002126 | 0.001974 |
| has_complement_test.test | RUN | 0.290769 | 1.574286 | 2.565243 | 0.001921 | 0.002282 | 0.001858 |
| has_bit_xor_test.test | RUN | 0.291657 | 1.156395 | 2.568223 | 0.002046 | 0.002236 | 0.001715 |
| has_bit_xor_assign_test.test | RUN | 0.297509 | 1.165725 | 2.524662 | 0.001954 | 0.002242 | 0.001684 |
| has_bit_or_test.test | RUN | 0.299418 | 1.144024 | 2.530858 | 0.002136 | 0.002275 | 0.002112 |
| has_bit_or_assign_test.test | RUN | 0.294211 | 1.169162 | 2.488060 | 0.001835 | 0.002171 | 0.001926 |
| has_bit_and_test.test | RUN | 0.295206 | 1.154639 | 2.527023 | 0.001818 | 0.002193 | 0.001946 |
| has_bit_and_assign_test.test | RUN | 0.328114 | 1.150747 | 2.542103 | 0.002104 | 0.002210 | 0.001842 |
| has_binary_classes9_test.test | RUN | 0.334454 | 1.368532 | 2.780508 | 0.001979 | 0.002296 | 0.002017 |
| has_binary_classes8_test.test | RUN | 0.330141 | 1.400452 | 2.748529 | 0.001800 | 0.002140 | 0.002124 |
| has_binary_classes7_test.test | RUN | 0.331376 | 1.352973 | 2.758324 | 0.001725 | 0.002254 | 0.002029 |
| has_binary_classes6_test.test | RUN | 0.321627 | 1.323287 | 2.821122 | 0.002204 | 0.002228 | 0.001910 |
| has_binary_classes5_test.test | RUN | 0.322372 | 1.342866 | 2.711748 | 0.001861 | 0.002232 | 0.002110 |
| has_binary_classes4_test.test | RUN | 0.326782 | 1.389258 | 2.769768 | 0.001923 | 0.002316 | 0.002079 |
| has_binary_classes3_test.test | RUN | 0.330336 | 1.376962 | 2.796778 | 0.001732 | 0.002320 | 0.002180 |
| has_binary_classes2_test.test | RUN | 0.326399 | 1.395934 | 2.798148 | 0.001928 | 0.002246 | 0.001998 |
| has_binary_classes1_test.test | RUN | 0.325548 | 1.329906 | 2.755114 | 0.001913 | 0.001962 | 0.002118 |
| has_binary_classes0_test.test | RUN | 0.326896 | 1.423349 | 2.734609 | 0.001816 | 0.001929 | 0.001822 |
| function_traits_test.test | RUN | 0.144192 | 0.382473 | 0.613294 | 0.001830 | 0.002086 | 0.001813 |
| floating_point_promotion_test.test | RUN | 0.143829 | 0.359271 | 0.572860 | 0.001960 | 0.002076 | 0.001963 |
| extent_test.test | RUN | 0.147622 | 0.349391 | 0.607410 | 0.001949 | 0.002038 | 0.002033 |
| enable_if_test.test | RUN | 0.132313 | 0.312297 | 0.400926 | 0.001840 | 0.001807 | 0.002114 |
| disjunction_test.test | RUN | 0.138756 | 0.329102 | 0.456338 | 0.001758 | 0.002042 | 0.002057 |
| detected_test.test | RUN | 0.132666 | 0.301266 | 0.428085 | 0.001858 | 0.002034 | 0.002122 |
| detected_or_test.test | RUN | 0.139072 | 0.316417 | 0.463111 | 0.001898 | 0.001892 | 0.001896 |
| decay_test.test | RUN | 0.354867 | 1.270657 | 3.031129 | 0.001936 | 0.001932 | 0.002102 |
| cxx14_aliases_test.test | RUN | 0.226348 | 0.479803 | 0.796011 | 0.001871 | 0.002149 | 0.001975 |
| copy_reference_test.test | RUN | 0.138584 | 0.318064 | 0.484045 | 0.001794 | 0.002244 | 0.001933 |
| copy_cv_test.test | RUN | 0.143686 | 0.342081 | 0.532698 | 0.001952 | 0.002026 | 0.001604 |
| copy_cv_ref_test.test | RUN | 0.206184 | 0.565543 | 1.173248 | 0.001887 | 0.001811 | 0.001743 |
| conjunction_test.test | RUN | 0.139683 | 0.339825 | 0.506442 | 0.001782 | 0.001924 | 0.002246 |
| conditional_test.test | RUN | 0.137523 | 0.319788 | 0.479594 | 0.001816 | 0.001728 | 0.001866 |
| common_type_test.test | RUN | 0.186361 | 0.501013 | 0.991506 | 0.002150 | 0.001643 | 0.001760 |
| common_type_sfinae_test.test | RUN | 0.134196 | 0.305730 | 0.424351 | 0.002046 | 0.002170 | 0.002224 |
| common_type_sfinae2_test.test | RUN | 0.138668 | 0.333476 | 0.468469 | 0.001841 | 0.001988 | 0.001981 |
| common_type_6_test.test | RUN | 0.142841 | 0.332345 | 0.486089 | 0.001826 | 0.001590 | 0.002123 |
| common_type_5_test.test | RUN | 0.142692 | 0.327088 | 0.466798 | 0.002178 | 0.002287 | 0.002040 |
| common_type_4_test.test | RUN | 0.153641 | 0.365271 | 0.616661 | 0.002209 | 0.001982 | 0.002122 |
| common_type_3_test.test | RUN | 0.136384 | 0.306092 | 0.446844 | 0.001994 | 0.001801 | 0.002062 |
| common_type_2_test.test | RUN | 0.183388 | 0.487104 | 0.947744 | 0.001976 | 0.002152 | 0.001737 |
| alignment_of_test.test | RUN | 0.149951 | 0.387016 | 0.583108 | 0.002080 | 0.002224 | 0.001931 |
| alignment_of_a2_test.test | RUN | 0.146570 | 0.393021 | 0.589351 | 0.002068 | 0.001974 | 0.001737 |
| aligned_storage_test.test | RUN | 0.156227 | 0.385561 | 0.532772 | 0.002059 | 0.001972 | 0.002280 |
| aligned_storage_empy_test.test | RUN | 0.176227 | 0.437096 | 0.708206 | 0.001962 | 0.002221 | 0.002006 |
| aligned_storage_a2_test.test | RUN | 0.152094 | 0.371062 | 0.542259 | 0.002223 | 0.002492 | 0.002262 |
| add_volatile_test.test | RUN | 0.319928 | 1.090197 | 2.829514 | 0.001993 | 0.001907 | 0.002240 |
| add_rvalue_reference_test.test | RUN | 0.369058 | 1.232938 | 3.234837 | 0.002033 | 0.001880 | 0.002181 |
| add_reference_test.test | RUN | 0.348060 | 1.235562 | 3.229057 | 0.001910 | 0.002288 | 0.002130 |
| add_pointer_test.test | RUN | 0.234984 | 0.707943 | 1.675930 | 0.001840 | 0.001849 | 0.002248 |
| add_lvalue_reference_test.test | RUN | 0.359884 | 1.248235 | 3.258677 | 0.001964 | 0.002214 | 0.002065 |
| add_cv_test.test | RUN | 0.338978 | 1.156049 | 3.023441 | 0.001872 | 0.001980 | 0.002088 |
| add_const_test.test | RUN | 0.332635 | 1.160081 | 2.987134 | 0.001849 | 0.001816 | 0.001922 |
| is_virtual_base_of_fail.test | COMPILE_FAIL | 0.129376 | 0.301544 | 0.452197 | — | — | — |
| is_stateless_fail.test | COMPILE_FAIL | 0.138603 | 0.309085 | 0.465548 | — | — | — |
| is_polymorphic_fail.test | COMPILE_FAIL | 0.129368 | 0.284625 | 0.446024 | — | — | — |
| is_nothrow_move_constructible_fail.test | COMPILE_FAIL | 0.132770 | 0.290060 | 0.415788 | — | — | — |
| is_nothrow_move_assignable_fail.test | COMPILE_FAIL | 0.130619 | 0.287220 | 0.416819 | — | — | — |
| is_list_constructible_fail.test | COMPILE_FAIL | 0.133324 | 0.296984 | 0.377044 | — | — | — |
| is_empty_fail.test | COMPILE_FAIL | 0.132047 | 0.301012 | 0.411832 | — | — | — |
| is_destructible_fail.test | COMPILE_FAIL | 0.132102 | 0.283018 | 0.410011 | — | — | — |
| is_default_constructible_fail.test | COMPILE_FAIL | 0.129235 | 0.290015 | 0.418199 | — | — | — |
| is_copy_constructible_fail.test | COMPILE_FAIL | 0.133055 | 0.298960 | 0.424348 | — | — | — |
| is_copy_assignable_fail.test | COMPILE_FAIL | 0.131848 | 0.295125 | 0.413607 | — | — | — |
| is_convertible_fail.test | COMPILE_FAIL | 0.131518 | 0.294887 | 0.434219 | — | — | — |
| is_convertible2_fail.test | COMPILE_FAIL | 0.132137 | 0.298815 | 0.434850 | — | — | — |
| is_constructible_fail.test | COMPILE_FAIL | 0.131353 | 0.285879 | 0.429498 | — | — | — |
| is_base_of_fail.test | COMPILE_FAIL | 0.128117 | 0.299867 | 0.426880 | — | — | — |
| is_assignable_fail.test | COMPILE_FAIL | 0.131644 | 0.293031 | 0.435015 | — | — | — |
| has_nothrow_destruct_fail.test | COMPILE_FAIL | 0.128294 | 0.295738 | 0.439227 | — | — | — |
| has_nothrow_copy_fail.test | COMPILE_FAIL | 0.134873 | 0.293220 | 0.442419 | — | — | — |
| has_nothrow_cons_fail.test | COMPILE_FAIL | 0.132116 | 0.303329 | 0.439354 | — | — | — |
| has_nothrow_assign_fail.test | COMPILE_FAIL | 0.135409 | 0.290751 | 0.444581 | — | — | — |
| common_type_fail.test | COMPILE_FAIL | 0.131893 | 0.289065 | 0.448218 | — | — | — |
| common_type2_fail.test | COMPILE_FAIL | 0.137173 | 0.298682 | 0.433241 | — | — | — |
| has_nothrow_assign_test_no_intrinsics.test | RUN | 0.205230 | 0.642881 | 1.249633 | 0.002209 | 0.002142 | 0.002071 |
| has_nothrow_constr_test_no_intrinsics.test | RUN | 0.194841 | 0.638925 | 1.231240 | 0.001828 | 0.002010 | 0.001957 |
| has_nothrow_copy_test_no_intrinsics.test | RUN | 0.200354 | 0.640809 | 1.254891 | 0.001936 | 0.001600 | 0.001530 |
| is_nothrow_move_assignable_test_no_intrinsics.test | RUN | 0.198814 | 0.621420 | 1.165839 | 0.001511 | 0.001532 | 0.001670 |
| is_nothrow_move_constructible_test_no_intrinsics.test | RUN | 0.126883 | 0.449552 | 0.764349 | 0.001552 | 0.001620 | 0.001638 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.995× | 1.003×, 0.987× | 1.006× |
| clang | 1.019× | 1.020×, 1.018× | 0.990× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1359 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44390936409).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| add_const_test.test | 10 | 0.001487s | 0.001440s | 0.001456s | byte equality observed |
| add_cv_test.test | 10 | 0.001468s | 0.001454s | 0.001488s | byte equality observed |
| add_lvalue_reference_test.test | 10 | 0.001500s | 0.001479s | 0.001467s | byte equality observed |
| add_pointer_test.test | 10 | 0.001476s | 0.001457s | 0.001469s | byte equality observed |
| add_reference_test.test | 10 | 0.001466s | 0.001449s | 0.001416s | byte equality observed |
| add_rvalue_reference_test.test | 10 | 0.001472s | 0.001455s | 0.001467s | byte equality observed |
| add_volatile_test.test | 10 | 0.001489s | 0.001465s | 0.001455s | byte equality observed |
| aligned_storage_a2_test.test | 10 | 0.001619s | 0.001619s | 0.001634s | byte equality observed |
| aligned_storage_empy_test.test | 10 | 0.001479s | 0.001465s | 0.001489s | byte equality observed |
| aligned_storage_test.test | 10 | 0.001644s | 0.001620s | 0.001613s | byte equality observed |
| alignment_of_a2_test.test | 10 | 0.001478s | 0.001500s | 0.001472s | byte equality observed |
| alignment_of_test.test | 10 | 0.001485s | 0.001490s | 0.001451s | byte equality observed |
| common_type_2_test.test | 10 | 0.001461s | 0.001470s | 0.001486s | byte equality observed |
| common_type_3_test.test | 10 | 0.001471s | 0.001472s | 0.001457s | byte equality observed |
| common_type_4_test.test | 10 | 0.001466s | 0.001471s | 0.001467s | byte equality observed |
| common_type_5_test.test | 10 | 0.001472s | 0.001453s | 0.001467s | byte equality observed |
| common_type_6_test.test | 10 | 0.001488s | 0.001448s | 0.001437s | byte equality observed |
| common_type_sfinae2_test.test | 10 | 0.001474s | 0.001453s | 0.001475s | byte equality observed |
| common_type_sfinae_test.test | 10 | 0.001465s | 0.001474s | 0.001471s | byte equality observed |
| common_type_test.test | 10 | 0.001486s | 0.001471s | 0.001459s | byte equality observed |
| conditional_test.test | 10 | 0.001466s | 0.001440s | 0.001457s | byte equality observed |
| conjunction_test.test | 10 | 0.001466s | 0.001450s | 0.001479s | byte equality observed |
| copy_cv_ref_test.test | 10 | 0.001451s | 0.001460s | 0.001471s | byte equality observed |
| copy_cv_test.test | 10 | 0.001459s | 0.001470s | 0.001444s | byte equality observed |
| copy_reference_test.test | 10 | 0.001467s | 0.001447s | 0.001468s | byte equality observed |
| cxx14_aliases_test.test | 10 | 0.001475s | 0.001458s | 0.001475s | byte equality observed |
| decay_test.test | 10 | 0.001474s | 0.001495s | 0.001462s | byte equality observed |
| detected_or_test.test | 10 | 0.001456s | 0.001460s | 0.001436s | byte equality observed |
| detected_test.test | 10 | 0.001476s | 0.001464s | 0.001472s | byte equality observed |
| disjunction_test.test | 10 | 0.001453s | 0.001469s | 0.001482s | byte equality observed |
| enable_if_test.test | 10 | 0.001485s | 0.001456s | 0.001479s | byte equality observed |
| extent_test.test | 10 | 0.001485s | 0.001464s | 0.001466s | byte equality observed |
| floating_point_promotion_test.test | 10 | 0.001476s | 0.001468s | 0.001455s | byte equality observed |
| function_traits_test.test | 10 | 0.001467s | 0.001471s | 0.001462s | byte equality observed |
| has_binary_classes0_test.test | 10 | 0.001478s | 0.001452s | 0.001464s | byte equality observed |
| has_binary_classes1_test.test | 7 | 0.001455s | 0.001475s | 0.001447s | byte equality observed |
| has_binary_classes2_test.test | 9 | 0.001450s | 0.001465s | 0.001472s | byte equality observed |
| has_binary_classes3_test.test | 10 | 0.001473s | 0.001452s | 0.001466s | byte equality observed |
| has_binary_classes4_test.test | 9 | 0.001456s | 0.001468s | 0.001472s | byte equality observed |
| has_binary_classes5_test.test | 9 | 0.001457s | 0.001453s | 0.001428s | byte equality observed |
| has_binary_classes6_test.test | 9 | 0.001485s | 0.001463s | 0.001446s | byte equality observed |
| has_binary_classes7_test.test | 8 | 0.001475s | 0.001449s | 0.001463s | byte equality observed |
| has_binary_classes8_test.test | 8 | 0.001470s | 0.001469s | 0.001479s | byte equality observed |
| has_binary_classes9_test.test | 10 | 0.001465s | 0.001449s | 0.001452s | byte equality observed |
| has_bit_and_assign_test.test | 10 | 0.001481s | 0.001489s | 0.001451s | byte equality observed |
| has_bit_and_test.test | 10 | 0.001471s | 0.001457s | 0.001470s | byte equality observed |
| has_bit_or_assign_test.test | 10 | 0.001487s | 0.001428s | 0.001442s | byte equality observed |
| has_bit_or_test.test | 10 | 0.001458s | 0.001465s | 0.001465s | byte equality observed |
| has_bit_xor_assign_test.test | 10 | 0.001472s | 0.001460s | 0.001460s | byte equality observed |
| has_bit_xor_test.test | 10 | 0.001470s | 0.001488s | 0.001464s | byte equality observed |
| has_complement_test.test | 10 | 0.001473s | 0.001466s | 0.001479s | byte equality observed |
| has_dereference_test.test | 10 | 0.001475s | 0.001470s | 0.001467s | byte equality observed |
| has_divides_assign_test.test | 10 | 0.001472s | 0.001464s | 0.001463s | byte equality observed |
| has_divides_test.test | 10 | 0.001472s | 0.001462s | 0.001454s | byte equality observed |
| has_equal_to_test.test | 10 | 0.001467s | 0.001464s | 0.001445s | byte equality observed |
| has_greater_equal_test.test | 10 | 0.001449s | 0.001454s | 0.001475s | byte equality observed |
| has_greater_test.test | 10 | 0.001453s | 0.001470s | 0.001459s | byte equality observed |
| has_left_shift_assign_test.test | 10 | 0.001468s | 0.001449s | 0.001459s | byte equality observed |
| has_left_shift_test.test | 10 | 0.001475s | 0.001461s | 0.001471s | byte equality observed |
| has_less_equal_test.test | 10 | 0.001476s | 0.001428s | 0.001465s | byte equality observed |
| has_less_test.test | 10 | 0.001447s | 0.001461s | 0.001433s | byte equality observed |
| has_logical_and_test.test | 10 | 0.001461s | 0.001433s | 0.001484s | byte equality observed |
| has_logical_not_test.test | 10 | 0.001477s | 0.001462s | 0.001477s | byte equality observed |
| has_logical_or_test.test | 10 | 0.001488s | 0.001475s | 0.001450s | byte equality observed |
| has_minus_assign_test.test | 10 | 0.001461s | 0.001469s | 0.001408s | byte equality observed |
| has_minus_test.test | 10 | 0.001486s | 0.001453s | 0.001454s | byte equality observed |
| has_modulus_assign_test.test | 10 | 0.001474s | 0.001456s | 0.001447s | byte equality observed |
| has_modulus_test.test | 8 | 0.001451s | 0.001484s | 0.001446s | byte equality observed |
| has_multiplies_assign_test.test | 10 | 0.001455s | 0.001461s | 0.001490s | byte equality observed |
| has_multiplies_test.test | 10 | 0.001470s | 0.001454s | 0.001490s | byte equality observed |
| has_negate_test.test | 10 | 0.001470s | 0.001471s | 0.001447s | byte equality observed |
| has_not_equal_to_test.test | 10 | 0.001475s | 0.001443s | 0.001453s | byte equality observed |
| has_nothrow_assign_test.test | 10 | 0.001482s | 0.001467s | 0.001456s | byte equality observed |
| has_nothrow_assign_test_no_intrinsics.test | 9 | 0.001483s | 0.001458s | 0.001455s | byte equality observed |
| has_nothrow_constr_test.test | 10 | 0.001490s | 0.001437s | 0.001457s | byte equality observed |
| has_nothrow_constr_test_no_intrinsics.test | 10 | 0.001490s | 0.001454s | 0.001446s | byte equality observed |
| has_nothrow_copy_test.test | 10 | 0.001475s | 0.001478s | 0.001462s | byte equality observed |
| has_nothrow_copy_test_no_intrinsics.test | 10 | 0.001468s | 0.001458s | 0.001466s | byte equality observed |
| has_nothrow_destructor_test.test | 10 | 0.001486s | 0.001448s | 0.001504s | byte equality observed |
| has_operator_new_test.test | 10 | 0.001458s | 0.001470s | 0.001465s | byte equality observed |
| has_plus_assign_test.test | 10 | 0.001458s | 0.001445s | 0.001459s | byte equality observed |
| has_plus_test.test | 10 | 0.001503s | 0.001456s | 0.001459s | byte equality observed |
| has_post_decrement_test.test | 10 | 0.001469s | 0.001464s | 0.001475s | byte equality observed |
| has_post_increment_test.test | 10 | 0.001475s | 0.001475s | 0.001498s | byte equality observed |
| has_postfix_classes0_test.test | 10 | 0.001476s | 0.001463s | 0.001449s | byte equality observed |
| has_postfix_classes1_test.test | 9 | 0.001461s | 0.001459s | 0.001491s | byte equality observed |
| has_postfix_classes2_test.test | 10 | 0.001477s | 0.001458s | 0.001475s | byte equality observed |
| has_postfix_classes3_test.test | 10 | 0.001444s | 0.001429s | 0.001454s | byte equality observed |
| has_pre_decrement_test.test | 10 | 0.001463s | 0.001458s | 0.001488s | byte equality observed |
| has_pre_increment_test.test | 10 | 0.001485s | 0.001488s | 0.001458s | byte equality observed |
| has_prefix_classes0_test.test | 10 | 0.001468s | 0.001462s | 0.001458s | byte equality observed |
| has_prefix_classes1_test.test | 10 | 0.001454s | 0.001444s | 0.001461s | byte equality observed |
| has_prefix_classes2_test.test | 10 | 0.001478s | 0.001430s | 0.001446s | byte equality observed |
| has_prefix_classes3_test.test | 8 | 0.001469s | 0.001468s | 0.001460s | byte equality observed |
| has_right_shift_assign_test.test | 10 | 0.001457s | 0.001468s | 0.001463s | byte equality observed |
| has_right_shift_test.test | 10 | 0.001464s | 0.001476s | 0.001462s | byte equality observed |
| has_trivial_assign_test.test | 10 | 0.001578s | 0.001573s | 0.001549s | byte equality observed |
| has_trivial_constr_test.test | 10 | 0.001534s | 0.001550s | 0.001549s | native test oracle; output varies |
| has_trivial_copy_test.test | 10 | 0.001561s | 0.001530s | 0.001620s | native test oracle; output varies |
| has_trivial_destructor_test.test | 10 | 0.001467s | 0.001459s | 0.001476s | byte equality observed |
| has_trivial_move_assign_test.test | 10 | 0.001469s | 0.001446s | 0.001487s | byte equality observed |
| has_trivial_move_constructor_test.test | 10 | 0.001493s | 0.001455s | 0.001448s | byte equality observed |
| has_unary_minus_test.test | 10 | 0.001461s | 0.001451s | 0.001463s | byte equality observed |
| has_unary_plus_test.test | 10 | 0.001495s | 0.001478s | 0.001486s | byte equality observed |
| has_virtual_destructor_test.test | 10 | 0.001473s | 0.001468s | 0.001481s | byte equality observed |
| integral_constant_test.test | 10 | 0.000649s | 0.000644s | 0.001456s | byte equality observed |
| is_abstract_test.test | 10 | 0.001466s | 0.001480s | 0.001465s | byte equality observed |
| is_arithmetic_test.test | 10 | 0.001473s | 0.001435s | 0.001464s | byte equality observed |
| is_array_test.test | 10 | 0.001498s | 0.001451s | 0.001473s | byte equality observed |
| is_assignable_test.test | 10 | 0.001490s | 0.001441s | 0.001480s | byte equality observed |
| is_base_and_derived_test.test | 10 | 0.001461s | 0.001450s | 0.001452s | byte equality observed |
| is_base_of_test.test | 10 | 0.001453s | 0.001454s | 0.001457s | byte equality observed |
| is_bounded_array_test.test | 10 | 0.001451s | 0.001477s | 0.001448s | byte equality observed |
| is_class_test.test | 10 | 0.001454s | 0.001458s | 0.001447s | byte equality observed |
| is_complete_test.test | 10 | 0.001470s | 0.001435s | 0.001460s | byte equality observed |
| is_complex_test.test | 10 | 0.001471s | 0.001442s | 0.001477s | byte equality observed |
| is_compound_test.test | 10 | 0.001479s | 0.001472s | 0.001434s | byte equality observed |
| is_const_test.test | 10 | 0.001469s | 0.001449s | 0.001464s | byte equality observed |
| is_constructible_test.test | 10 | 0.001466s | 0.001462s | 0.001495s | byte equality observed |
| is_convertible_test.test | 10 | 0.001467s | 0.001470s | 0.001472s | byte equality observed |
| is_copy_assignable_test.test | 10 | 0.001462s | 0.001442s | 0.001449s | byte equality observed |
| is_copy_constructible_test.test | 10 | 0.001454s | 0.001439s | 0.001478s | byte equality observed |
| is_default_constr_test.test | 10 | 0.001486s | 0.001456s | 0.001450s | byte equality observed |
| is_destructible_test.test | 10 | 0.001452s | 0.001458s | 0.001470s | byte equality observed |
| is_detected_exact_test.test | 10 | 0.001471s | 0.001437s | 0.001453s | byte equality observed |
| is_detected_test.test | 10 | 0.001468s | 0.001448s | 0.001450s | byte equality observed |
| is_empty_test.test | 10 | 0.001442s | 0.001466s | 0.001454s | byte equality observed |
| is_enum_test.test | 10 | 0.001470s | 0.001443s | 0.001458s | byte equality observed |
| is_final_test.test | 10 | 0.001464s | 0.001434s | 0.001458s | byte equality observed |
| is_float_test.test | 10 | 0.001457s | 0.001440s | 0.001459s | byte equality observed |
| is_floating_point_test.test | 10 | 0.001458s | 0.001442s | 0.001482s | byte equality observed |
| is_function_test.test | 10 | 0.001463s | 0.001470s | 0.001444s | byte equality observed |
| is_fundamental_test.test | 10 | 0.001454s | 0.001466s | 0.001460s | byte equality observed |
| is_integral_test.test | 10 | 0.001464s | 0.001451s | 0.001463s | byte equality observed |
| is_list_constructible_test.test | 10 | 0.001465s | 0.001456s | 0.001460s | byte equality observed |
| is_lvalue_reference_test.test | 10 | 0.001446s | 0.001433s | 0.001459s | byte equality observed |
| is_member_func_test.test | 10 | 0.001466s | 0.001460s | 0.001440s | byte equality observed |
| is_member_obj_test.test | 10 | 0.001467s | 0.001446s | 0.001461s | byte equality observed |
| is_member_pointer_test.test | 10 | 0.001458s | 0.001424s | 0.001471s | byte equality observed |
| is_noncopyable_test.test | 10 | 0.001461s | 0.001494s | 0.001443s | byte equality observed |
| is_nothrow_move_assignable_test.test | 10 | 0.001460s | 0.001441s | 0.001480s | byte equality observed |
| is_nothrow_move_assignable_test_no_intrinsics.test | 9 | 0.001464s | 0.001450s | 0.001448s | byte equality observed |
| is_nothrow_move_constructible_test.test | 10 | 0.001461s | 0.001460s | 0.001462s | byte equality observed |
| is_nothrow_move_constructible_test_no_intrinsics.test | 10 | 0.001462s | 0.001471s | 0.001453s | byte equality observed |
| is_nothrow_swappable_test.test | 10 | 0.001461s | 0.001444s | 0.001445s | byte equality observed |
| is_object_test.test | 10 | 0.001452s | 0.001461s | 0.001473s | byte equality observed |
| is_pod_test.test | 10 | 0.001464s | 0.001444s | 0.001459s | byte equality observed |
| is_pointer_test.test | 10 | 0.001455s | 0.001435s | 0.001467s | byte equality observed |
| is_polymorphic_test.test | 10 | 0.001472s | 0.001414s | 0.001470s | byte equality observed |
| is_reference_test.test | 10 | 0.001462s | 0.001430s | 0.001449s | byte equality observed |
| is_rvalue_reference_test.test | 10 | 0.001478s | 0.001442s | 0.001470s | byte equality observed |
| is_same_test.test | 10 | 0.001477s | 0.001469s | 0.001475s | byte equality observed |
| is_scalar_test.test | 10 | 0.001475s | 0.001468s | 0.001468s | byte equality observed |
| is_scoped_enum_test.test | 9 | 0.001466s | 0.001477s | 0.001474s | byte equality observed |
| is_signed_test.test | 10 | 0.001466s | 0.001452s | 0.001454s | byte equality observed |
| is_stateless_test.test | 7 | 0.001469s | 0.001444s | 0.001489s | byte equality observed |
| is_swappable_test.test | 10 | 0.001468s | 0.001472s | 0.001459s | byte equality observed |
| is_trivially_copyable_test.test | 10 | 0.001507s | 0.001484s | 0.001470s | byte equality observed |
| is_unbounded_array_test.test | 8 | 0.001473s | 0.001455s | 0.001472s | byte equality observed |
| is_union_test.test | 10 | 0.001469s | 0.001486s | 0.001454s | byte equality observed |
| is_unscoped_enum_test.test | 10 | 0.001455s | 0.001447s | 0.001471s | byte equality observed |
| is_unsigned_test.test | 10 | 0.001466s | 0.001437s | 0.001464s | byte equality observed |
| is_virtual_base_of_test.test | 10 | 0.001462s | 0.001442s | 0.001456s | byte equality observed |
| is_void_test.test | 10 | 0.001504s | 0.001475s | 0.001449s | byte equality observed |
| is_volatile_test.test | 8 | 0.001481s | 0.001453s | 0.001457s | byte equality observed |
| make_signed_test.test | 10 | 0.001481s | 0.001450s | 0.001465s | byte equality observed |
| make_unsigned_test.test | 10 | 0.001474s | 0.001459s | 0.001447s | byte equality observed |
| make_void_test.test | 9 | 0.001455s | 0.001480s | 0.001453s | byte equality observed |
| mpl_interop_test1.test | 10 | 0.000662s | 0.000648s | 0.001473s | byte equality observed |
| mpl_interop_test2.test | 10 | 0.000664s | 0.000661s | 0.001467s | byte equality observed |
| mpl_interop_test3.test | 10 | 0.000659s | 0.000658s | 0.001454s | byte equality observed |
| negation_test.test | 10 | 0.001510s | 0.001510s | 0.001466s | byte equality observed |
| promote_basic_test.test | 10 | 0.000655s | 0.000659s | 0.001465s | byte equality observed |
| promote_enum_msvc_bug_test.test | 10 | 0.000652s | 0.000663s | 0.001446s | byte equality observed |
| promote_enum_test.test | 10 | 0.000651s | 0.000649s | 0.001455s | byte equality observed |
| promote_mpl_test.test | 10 | 0.000649s | 0.000644s | 0.001481s | byte equality observed |
| rank_test.test | 10 | 0.001484s | 0.001478s | 0.001467s | byte equality observed |
| remove_all_extents_test.test | 9 | 0.001480s | 0.001484s | 0.001459s | byte equality observed |
| remove_bounds_test.test | 9 | 0.001485s | 0.001467s | 0.001466s | byte equality observed |
| remove_const_test.test | 10 | 0.001471s | 0.001447s | 0.001450s | byte equality observed |
| remove_cv_ref_test.test | 10 | 0.001483s | 0.001439s | 0.001458s | byte equality observed |
| remove_cv_test.test | 10 | 0.001475s | 0.001479s | 0.001432s | byte equality observed |
| remove_extent_test.test | 10 | 0.001468s | 0.001444s | 0.001453s | byte equality observed |
| remove_pointer_test.test | 10 | 0.001464s | 0.001449s | 0.001469s | byte equality observed |
| remove_reference_test.test | 10 | 0.001486s | 0.001465s | 0.001468s | byte equality observed |
| remove_volatile_test.test | 10 | 0.001474s | 0.001446s | 0.001460s | byte equality observed |
| tricky_abstract_type_test.test | 10 | 0.001448s | 0.001458s | 0.001455s | byte equality observed |
| tricky_add_pointer_test.test | 10 | 0.001480s | 0.001462s | 0.001444s | byte equality observed |
| tricky_function_type_test.test | 10 | 0.001446s | 0.001467s | 0.001459s | byte equality observed |
| tricky_incomplete_type_test.test | 10 | 0.001463s | 0.001464s | 0.001459s | byte equality observed |
| tricky_is_enum_test.test | 10 | 0.001464s | 0.001464s | 0.001458s | byte equality observed |
| tricky_partial_spec_test.test | 10 | 0.001462s | 0.001458s | 0.001468s | byte equality observed |
| tricky_rvalue_test.test | 10 | 0.001477s | 0.001447s | 0.001446s | byte equality observed |
| type_identity_test.test | 10 | 0.001492s | 0.001475s | 0.001449s | byte equality observed |
| type_traits_test.test | 10 | 0.000646s | 0.000645s | 0.001454s | byte equality observed |
| type_with_alignment_test.test | 10 | 0.001653s | 0.001664s | 0.001654s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44390936409).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
