# libs/type_traits/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| type_with_alignment_test.test | RUN | 0.158440 | 0.445008 | 0.775070 | 0.001894 | 0.002218 | 0.002154 |
| type_traits_test.test | RUN | 0.215501 | 0.473602 | 0.798670 | 0.000686 | 0.000734 | 0.001856 |
| type_identity_test.test | RUN | 0.442661 | 1.729953 | 4.466837 | 0.001914 | 0.002074 | 0.001856 |
| tricky_rvalue_test.test | RUN | 0.146303 | 0.355768 | 0.577985 | 0.001900 | 0.001916 | 0.002035 |
| tricky_partial_spec_test.test | RUN | 0.182977 | 0.515279 | 0.973305 | 0.001736 | 0.002041 | 0.001783 |
| tricky_is_enum_test.test | RUN | 0.143133 | 0.342050 | 0.528566 | 0.001724 | 0.002028 | 0.002062 |
| tricky_incomplete_type_test.test | RUN | 0.235342 | 0.536509 | 0.916825 | 0.001748 | 0.002086 | 0.001979 |
| tricky_function_type_test.test | RUN | 0.192319 | 0.567018 | 1.112339 | 0.002000 | 0.001954 | 0.001756 |
| tricky_add_pointer_test.test | RUN | 0.294609 | 1.009135 | 2.448986 | 0.001904 | 0.001994 | 0.002034 |
| tricky_abstract_type_test.test | RUN | 0.150113 | 0.354231 | 0.583298 | 0.002050 | 0.001894 | 0.002012 |
| remove_volatile_test.test | RUN | 0.398303 | 1.490910 | 3.896478 | 0.002006 | 0.001893 | 0.002088 |
| remove_reference_test.test | RUN | 0.416459 | 1.497414 | 4.096238 | 0.001813 | 0.001894 | 0.001944 |
| remove_pointer_test.test | RUN | 0.432343 | 1.536857 | 4.277807 | 0.001719 | 0.001787 | 0.002064 |
| remove_extent_test.test | RUN | 0.406545 | 1.578371 | 4.111643 | 0.001840 | 0.002124 | 0.002133 |
| remove_cv_test.test | RUN | 0.418511 | 1.553915 | 4.044929 | 0.001894 | 0.002120 | 0.002056 |
| remove_cv_ref_test.test | RUN | 0.886232 | 3.635014 | 10.114729 | 0.001872 | 0.001942 | 0.002030 |
| remove_const_test.test | RUN | 0.392744 | 1.413112 | 3.812634 | 0.002017 | 0.001964 | 0.001949 |
| remove_bounds_test.test | RUN | 0.421296 | 1.565047 | 4.098873 | 0.001985 | 0.002100 | 0.002006 |
| remove_all_extents_test.test | RUN | 0.424759 | 1.515524 | 4.066718 | 0.001872 | 0.002035 | 0.002204 |
| rank_test.test | RUN | 0.146554 | 0.358939 | 0.519457 | 0.001632 | 0.002210 | 0.001862 |
| promote_mpl_test.test | RUN | 0.125274 | 0.314323 | 0.367128 | 0.000779 | 0.000836 | 0.001846 |
| promote_enum_test.test | RUN | 0.029347 | 0.073593 | 0.085803 | 0.000654 | 0.000772 | 0.002022 |
| promote_enum_msvc_bug_test.test | RUN | 0.026167 | 0.066819 | 0.070272 | 0.000747 | 0.000750 | 0.001851 |
| promote_basic_test.test | RUN | 0.033102 | 0.089942 | 0.093069 | 0.000753 | 0.000807 | 0.002012 |
| negation_test.test | RUN | 0.142602 | 0.330235 | 0.534345 | 0.001758 | 0.001862 | 0.001940 |
| mpl_interop_test3.test | RUN | 0.120599 | 0.311227 | 0.377784 | 0.000666 | 0.000728 | 0.001862 |
| mpl_interop_test2.test | RUN | 0.042128 | 0.080502 | 0.101807 | 0.000730 | 0.000729 | 0.002088 |
| mpl_interop_test1.test | RUN | 0.022136 | 0.061748 | 0.073536 | 0.000733 | 0.000787 | 0.001724 |
| make_void_test.test | RUN | 0.148164 | 0.355500 | 0.606271 | 0.001968 | 0.001996 | 0.002007 |
| make_unsigned_test.test | RUN | 0.176431 | 0.485701 | 0.855011 | 0.001796 | 0.001685 | 0.002134 |
| make_signed_test.test | RUN | 0.174988 | 0.490474 | 0.819845 | 0.001578 | 0.002062 | 0.001932 |
| is_volatile_test.test | RUN | 0.152717 | 0.402752 | 0.677994 | 0.001639 | 0.001699 | 0.002429 |
| is_void_test.test | RUN | 0.149824 | 0.375313 | 0.662575 | 0.002041 | 0.002126 | 0.001965 |
| is_virtual_base_of_test.test | RUN | 0.169739 | 0.489980 | 0.893827 | 0.001544 | 0.001942 | 0.002160 |
| is_unsigned_test.test | RUN | 0.153193 | 0.402849 | 0.635042 | 0.001625 | 0.001686 | 0.001748 |
| is_unscoped_enum_test.test | RUN | 0.144076 | 0.341475 | 0.543315 | 0.001876 | 0.001790 | 0.001962 |
| is_union_test.test | RUN | 0.163189 | 0.441408 | 0.802146 | 0.001759 | 0.001998 | 0.001948 |
| is_unbounded_array_test.test | RUN | 0.150454 | 0.378881 | 0.601043 | 0.001774 | 0.001913 | 0.001814 |
| is_trivially_copyable_test.test | RUN | 0.242928 | 0.792975 | 1.592268 | 0.001858 | 0.001998 | 0.002129 |
| is_swappable_test.test | RUN | 0.199357 | 0.604213 | 1.169365 | 0.001699 | 0.001813 | 0.001785 |
| is_stateless_test.test | RUN | 0.226180 | 0.695944 | 1.347328 | 0.001591 | 0.001944 | 0.001648 |
| is_signed_test.test | RUN | 0.155086 | 0.406563 | 0.684528 | 0.001956 | 0.001886 | 0.001979 |
| is_scoped_enum_test.test | RUN | 0.149534 | 0.348064 | 0.537109 | 0.001758 | 0.002010 | 0.001770 |
| is_scalar_test.test | RUN | 0.203310 | 0.646443 | 1.255810 | 0.001736 | 0.001657 | 0.001938 |
| is_same_test.test | RUN | 0.149506 | 0.363970 | 0.591130 | 0.001809 | 0.001938 | 0.002058 |
| is_rvalue_reference_test.test | RUN | 0.157286 | 0.415374 | 0.682350 | 0.001699 | 0.001901 | 0.001938 |
| is_reference_test.test | RUN | 0.160291 | 0.418416 | 0.782012 | 0.001698 | 0.002096 | 0.002124 |
| is_polymorphic_test.test | RUN | 0.159285 | 0.441358 | 0.775115 | 0.001939 | 0.001726 | 0.002056 |
| is_pointer_test.test | RUN | 0.159612 | 0.440064 | 0.778337 | 0.001975 | 0.001888 | 0.002142 |
| is_pod_test.test | RUN | 0.213189 | 0.718160 | 1.430717 | 0.001622 | 0.002138 | 0.001967 |
| is_object_test.test | RUN | 0.147830 | 0.355012 | 0.523759 | 0.001847 | 0.002009 | 0.002043 |
| is_nothrow_swappable_test.test | RUN | 0.214192 | 0.660446 | 1.308817 | 0.001776 | 0.001815 | 0.001990 |
| is_nothrow_move_constructible_test.test | RUN | 0.209978 | 0.685500 | 1.360365 | 0.001584 | 0.001804 | 0.001971 |
| is_nothrow_move_assignable_test.test | RUN | 0.215138 | 0.690202 | 1.380009 | 0.001760 | 0.001766 | 0.001744 |
| is_noncopyable_test.test | RUN | 0.151434 | 0.364906 | 0.616355 | 0.001896 | 0.001864 | 0.001718 |
| is_member_pointer_test.test | RUN | 0.153261 | 0.371920 | 0.577263 | 0.001768 | 0.001777 | 0.002161 |
| is_member_obj_test.test | RUN | 0.150177 | 0.377234 | 0.613363 | 0.001750 | 0.001738 | 0.001793 |
| is_member_func_test.test | RUN | 0.153916 | 0.402512 | 0.685385 | 0.001784 | 0.001982 | 0.001810 |
| is_lvalue_reference_test.test | RUN | 0.160461 | 0.428361 | 0.764482 | 0.001739 | 0.001898 | 0.002014 |
| is_list_constructible_test.test | RUN | 0.181530 | 0.492557 | 0.822260 | 0.001647 | 0.001974 | 0.002214 |
| is_integral_test.test | RUN | 0.185731 | 0.598572 | 1.164897 | 0.001847 | 0.001605 | 0.002180 |
| is_fundamental_test.test | RUN | 0.189795 | 0.618705 | 1.222222 | 0.001688 | 0.002034 | 0.002185 |
| is_function_test.test | RUN | 0.154032 | 0.403125 | 0.634658 | 0.001540 | 0.002078 | 0.001809 |
| is_floating_point_test.test | RUN | 0.161124 | 0.427557 | 0.713656 | 0.001618 | 0.001830 | 0.002150 |
| is_float_test.test | RUN | 0.156828 | 0.417753 | 0.744022 | 0.001671 | 0.001932 | 0.002195 |
| is_final_test.test | RUN | 0.162192 | 0.422078 | 0.771401 | 0.001701 | 0.001860 | 0.001910 |
| is_enum_test.test | RUN | 0.143798 | 0.354792 | 0.581757 | 0.001572 | 0.001845 | 0.002166 |
| is_empty_test.test | RUN | 0.162479 | 0.393141 | 0.689881 | 0.001896 | 0.001745 | 0.002202 |
| is_detected_test.test | RUN | 0.141567 | 0.343393 | 0.514427 | 0.002013 | 0.001733 | 0.002112 |
| is_detected_exact_test.test | RUN | 0.144432 | 0.329955 | 0.519261 | 0.001688 | 0.001843 | 0.002049 |
| is_destructible_test.test | RUN | 0.209310 | 0.679515 | 1.363658 | 0.001940 | 0.002094 | 0.001887 |
| is_default_constr_test.test | RUN | 0.208954 | 0.680353 | 1.380311 | 0.001924 | 0.001912 | 0.002246 |
| is_copy_constructible_test.test | RUN | 0.220524 | 0.737737 | 1.489576 | 0.001480 | 0.001727 | 0.001999 |
| is_copy_assignable_test.test | RUN | 0.222478 | 0.697857 | 1.465718 | 0.001656 | 0.001842 | 0.002148 |
| is_convertible_test.test | RUN | 0.216435 | 0.639476 | 1.207081 | 0.001860 | 0.002133 | 0.002184 |
| is_constructible_test.test | RUN | 0.164742 | 0.467845 | 0.854764 | 0.001678 | 0.001639 | 0.001842 |
| is_const_test.test | RUN | 0.152165 | 0.391034 | 0.669081 | 0.001876 | 0.001959 | 0.002190 |
| is_compound_test.test | RUN | 0.143843 | 0.356059 | 0.568811 | 0.001516 | 0.001770 | 0.002168 |
| is_complex_test.test | RUN | 0.194553 | 0.454283 | 0.802696 | 0.001773 | 0.002079 | 0.001922 |
| is_complete_test.test | RUN | 0.169987 | 0.466753 | 0.882643 | 0.001738 | 0.001847 | 0.001597 |
| is_class_test.test | RUN | 0.156243 | 0.412380 | 0.737006 | 0.001902 | 0.001921 | 0.001765 |
| is_bounded_array_test.test | RUN | 0.148856 | 0.369911 | 0.648025 | 0.001628 | 0.001727 | 0.001538 |
| is_base_of_test.test | RUN | 0.154690 | 0.407300 | 0.699731 | 0.001829 | 0.001861 | 0.001990 |
| is_base_and_derived_test.test | RUN | 0.153479 | 0.388338 | 0.720474 | 0.001755 | 0.002002 | 0.001969 |
| is_assignable_test.test | RUN | 0.195507 | 0.577695 | 1.108469 | 0.001698 | 0.001816 | 0.001622 |
| is_array_test.test | RUN | 0.154837 | 0.411231 | 0.671518 | 0.001980 | 0.001888 | 0.002120 |
| is_arithmetic_test.test | RUN | 0.193102 | 0.622253 | 1.192026 | 0.001987 | 0.002118 | 0.002119 |
| is_abstract_test.test | RUN | 0.347123 | 1.652566 | 3.786581 | 0.001909 | 0.001847 | 0.002192 |
| integral_constant_test.test | RUN | 0.020842 | 0.060110 | 0.069956 | 0.000861 | 0.000801 | 0.001768 |
| has_virtual_destructor_test.test | RUN | 0.165133 | 0.463010 | 0.878313 | 0.001871 | 0.002126 | 0.002218 |
| has_unary_plus_test.test | RUN | 0.333838 | 1.855786 | 3.008255 | 0.002066 | 0.001822 | 0.002282 |
| has_unary_minus_test.test | RUN | 0.333274 | 1.800971 | 2.942066 | 0.001713 | 0.002000 | 0.002120 |
| has_trivial_move_constructor_test.test | RUN | 0.217373 | 0.680559 | 1.442995 | 0.001706 | 0.001884 | 0.002070 |
| has_trivial_move_assign_test.test | RUN | 0.215551 | 0.662908 | 1.327959 | 0.001576 | 0.001742 | 0.002166 |
| has_trivial_destructor_test.test | RUN | 0.215784 | 0.674096 | 1.369119 | 0.002002 | 0.001551 | 0.001830 |
| has_trivial_copy_test.test | RUN | 0.227648 | 0.734342 | 1.498651 | 0.001792 | 0.002260 | 0.002188 |
| has_trivial_constr_test.test | RUN | 0.227029 | 0.749865 | 1.521717 | 0.001786 | 0.002277 | 0.002204 |
| has_trivial_assign_test.test | RUN | 0.217468 | 0.732549 | 1.477047 | 0.002023 | 0.002050 | 0.002210 |
| has_right_shift_test.test | RUN | 0.343477 | 1.372235 | 3.135306 | 0.001726 | 0.002135 | 0.002162 |
| has_right_shift_assign_test.test | RUN | 0.325736 | 1.284917 | 2.916675 | 0.001768 | 0.002152 | 0.002120 |
| has_prefix_classes3_test.test | RUN | 0.239239 | 0.735698 | 1.585641 | 0.001936 | 0.002152 | 0.002176 |
| has_prefix_classes2_test.test | RUN | 0.236983 | 0.762820 | 1.537448 | 0.001669 | 0.001900 | 0.002090 |
| has_prefix_classes1_test.test | RUN | 0.239424 | 0.743376 | 1.486513 | 0.001914 | 0.002075 | 0.002081 |
| has_prefix_classes0_test.test | RUN | 0.232484 | 0.741927 | 1.474853 | 0.001344 | 0.002117 | 0.002212 |
| has_pre_increment_test.test | RUN | 0.317949 | 1.836078 | 2.932729 | 0.001616 | 0.001985 | 0.001908 |
| has_pre_decrement_test.test | RUN | 0.327876 | 1.785587 | 2.934183 | 0.001711 | 0.002244 | 0.002188 |
| has_postfix_classes3_test.test | RUN | 0.234442 | 0.767291 | 1.587892 | 0.001758 | 0.002098 | 0.001953 |
| has_postfix_classes2_test.test | RUN | 0.231401 | 0.751647 | 1.521313 | 0.001811 | 0.002160 | 0.002188 |
| has_postfix_classes1_test.test | RUN | 0.237230 | 0.774299 | 1.528923 | 0.001842 | 0.001966 | 0.002439 |
| has_postfix_classes0_test.test | RUN | 0.237664 | 0.767956 | 1.573684 | 0.001706 | 0.002136 | 0.002250 |
| has_post_increment_test.test | RUN | 0.316533 | 1.859126 | 2.973296 | 0.001920 | 0.002051 | 0.002026 |
| has_post_decrement_test.test | RUN | 0.316525 | 1.845937 | 2.985662 | 0.001508 | 0.002223 | 0.002056 |
| has_plus_test.test | RUN | 0.326807 | 1.212514 | 2.956755 | 0.001618 | 0.001858 | 0.001672 |
| has_plus_assign_test.test | RUN | 0.337130 | 1.279134 | 3.017206 | 0.001682 | 0.002119 | 0.001946 |
| has_operator_new_test.test | RUN | 0.212247 | 0.660357 | 1.333742 | 0.001752 | 0.001649 | 0.001830 |
| has_nothrow_destructor_test.test | RUN | 0.218302 | 0.740625 | 1.486934 | 0.001653 | 0.002104 | 0.001712 |
| has_nothrow_copy_test.test | RUN | 0.218798 | 0.695171 | 1.449091 | 0.001884 | 0.002046 | 0.001888 |
| has_nothrow_constr_test.test | RUN | 0.216938 | 0.681347 | 1.419309 | 0.001827 | 0.002159 | 0.001900 |
| has_nothrow_assign_test.test | RUN | 0.216088 | 0.702958 | 1.385062 | 0.001900 | 0.002084 | 0.002142 |
| has_not_equal_to_test.test | RUN | 0.327054 | 1.799910 | 3.046995 | 0.001754 | 0.002264 | 0.002142 |
| has_negate_test.test | RUN | 0.316262 | 1.318748 | 2.833227 | 0.001630 | 0.002067 | 0.002024 |
| has_multiplies_test.test | RUN | 0.332974 | 1.252667 | 2.952772 | 0.002007 | 0.001944 | 0.001930 |
| has_multiplies_assign_test.test | RUN | 0.329368 | 1.310520 | 2.975521 | 0.001771 | 0.002290 | 0.002232 |
| has_modulus_test.test | RUN | 0.331000 | 1.326274 | 3.041035 | 0.001606 | 0.002112 | 0.002060 |
| has_modulus_assign_test.test | RUN | 0.320280 | 1.309744 | 2.940159 | 0.001816 | 0.001787 | 0.001875 |
| has_minus_test.test | RUN | 0.335584 | 1.287877 | 2.926068 | 0.001783 | 0.002116 | 0.001928 |
| has_minus_assign_test.test | RUN | 0.337418 | 1.330451 | 3.035930 | 0.002086 | 0.002131 | 0.002108 |
| has_logical_or_test.test | RUN | 0.329374 | 1.344558 | 2.986984 | 0.001854 | 0.002062 | 0.002157 |
| has_logical_not_test.test | RUN | 0.322891 | 1.277388 | 2.894694 | 0.001850 | 0.001812 | 0.001968 |
| has_logical_and_test.test | RUN | 0.324424 | 1.294460 | 2.914273 | 0.002072 | 0.002163 | 0.002036 |
| has_less_test.test | RUN | 0.329244 | 1.838615 | 2.953627 | 0.002176 | 0.002100 | 0.002304 |
| has_less_equal_test.test | RUN | 0.334833 | 1.779800 | 2.941178 | 0.002028 | 0.002154 | 0.002216 |
| has_left_shift_test.test | RUN | 0.370016 | 1.608367 | 3.664024 | 0.001753 | 0.002040 | 0.002262 |
| has_left_shift_assign_test.test | RUN | 0.325067 | 1.239720 | 3.024981 | 0.002036 | 0.001986 | 0.001949 |
| has_greater_test.test | RUN | 0.331870 | 1.778365 | 3.060916 | 0.002112 | 0.001877 | 0.001956 |
| has_greater_equal_test.test | RUN | 0.343024 | 1.751956 | 3.068914 | 0.001919 | 0.001938 | 0.002243 |
| has_equal_to_test.test | RUN | 0.340897 | 1.761270 | 2.981969 | 0.001385 | 0.001939 | 0.002260 |
| has_divides_test.test | RUN | 0.326000 | 1.229927 | 2.961029 | 0.001739 | 0.002016 | 0.002199 |
| has_divides_assign_test.test | RUN | 0.337908 | 1.286593 | 2.951571 | 0.001869 | 0.001957 | 0.002164 |
| has_dereference_test.test | RUN | 0.329908 | 1.217741 | 2.938491 | 0.001936 | 0.002048 | 0.002182 |
| has_complement_test.test | RUN | 0.325877 | 1.837154 | 3.029592 | 0.002005 | 0.002159 | 0.002138 |
| has_bit_xor_test.test | RUN | 0.326673 | 1.253624 | 2.959596 | 0.001815 | 0.002110 | 0.002016 |
| has_bit_xor_assign_test.test | RUN | 0.328353 | 1.328043 | 2.973944 | 0.001978 | 0.001880 | 0.002034 |
| has_bit_or_test.test | RUN | 0.328529 | 1.242352 | 2.936460 | 0.001876 | 0.001920 | 0.002236 |
| has_bit_or_assign_test.test | RUN | 0.326979 | 1.318027 | 2.998324 | 0.001985 | 0.002101 | 0.001990 |
| has_bit_and_test.test | RUN | 0.327416 | 1.254612 | 2.957500 | 0.001928 | 0.002461 | 0.002320 |
| has_bit_and_assign_test.test | RUN | 0.333969 | 1.335764 | 2.921032 | 0.001849 | 0.002222 | 0.002020 |
| has_binary_classes9_test.test | RUN | 0.358717 | 1.525519 | 3.265603 | 0.001630 | 0.002314 | 0.002077 |
| has_binary_classes8_test.test | RUN | 0.357219 | 1.493093 | 3.213640 | 0.001983 | 0.002059 | 0.002028 |
| has_binary_classes7_test.test | RUN | 0.361951 | 1.463358 | 3.251893 | 0.001866 | 0.002146 | 0.001988 |
| has_binary_classes6_test.test | RUN | 0.348028 | 1.461684 | 3.289762 | 0.001942 | 0.001866 | 0.002144 |
| has_binary_classes5_test.test | RUN | 0.360023 | 1.474477 | 3.267361 | 0.001836 | 0.002116 | 0.002314 |
| has_binary_classes4_test.test | RUN | 0.364714 | 1.483150 | 3.194066 | 0.001702 | 0.002174 | 0.002205 |
| has_binary_classes3_test.test | RUN | 0.356533 | 1.528967 | 3.359652 | 0.001772 | 0.002022 | 0.002046 |
| has_binary_classes2_test.test | RUN | 0.367697 | 1.492847 | 3.225683 | 0.002047 | 0.002032 | 0.002302 |
| has_binary_classes1_test.test | RUN | 0.360703 | 1.550330 | 3.163798 | 0.001632 | 0.002018 | 0.001766 |
| has_binary_classes0_test.test | RUN | 0.360297 | 1.507344 | 3.195354 | 0.001756 | 0.001886 | 0.001510 |
| function_traits_test.test | RUN | 0.163201 | 0.378035 | 0.733013 | 0.001576 | 0.002072 | 0.002338 |
| floating_point_promotion_test.test | RUN | 0.149834 | 0.384353 | 0.674536 | 0.002071 | 0.002122 | 0.001973 |
| extent_test.test | RUN | 0.151793 | 0.408630 | 0.628462 | 0.001604 | 0.001874 | 0.002244 |
| enable_if_test.test | RUN | 0.140224 | 0.331614 | 0.558929 | 0.001770 | 0.002038 | 0.001742 |
| disjunction_test.test | RUN | 0.145109 | 0.352388 | 0.581183 | 0.001610 | 0.001658 | 0.001844 |
| detected_test.test | RUN | 0.143318 | 0.338714 | 0.523775 | 0.002124 | 0.001994 | 0.001965 |
| detected_or_test.test | RUN | 0.146382 | 0.346700 | 0.549401 | 0.001897 | 0.001761 | 0.001835 |
| decay_test.test | RUN | 0.398449 | 1.464458 | 3.583872 | 0.001857 | 0.001830 | 0.002222 |
| cxx14_aliases_test.test | RUN | 0.234279 | 0.528427 | 0.972587 | 0.001960 | 0.001768 | 0.002198 |
| copy_reference_test.test | RUN | 0.141959 | 0.337751 | 0.581445 | 0.001830 | 0.001866 | 0.001944 |
| copy_cv_test.test | RUN | 0.145386 | 0.358227 | 0.639748 | 0.001892 | 0.001696 | 0.001802 |
| copy_cv_ref_test.test | RUN | 0.218590 | 0.642147 | 1.434577 | 0.001680 | 0.002154 | 0.002191 |
| conjunction_test.test | RUN | 0.147568 | 0.348891 | 0.593906 | 0.002014 | 0.001950 | 0.002113 |
| conditional_test.test | RUN | 0.143961 | 0.352338 | 0.561259 | 0.001866 | 0.001624 | 0.002144 |
| common_type_test.test | RUN | 0.196497 | 0.547832 | 1.129650 | 0.002008 | 0.002027 | 0.002138 |
| common_type_sfinae_test.test | RUN | 0.134872 | 0.323147 | 0.531562 | 0.001846 | 0.001877 | 0.002188 |
| common_type_sfinae2_test.test | RUN | 0.141380 | 0.340559 | 0.607912 | 0.001982 | 0.001826 | 0.002073 |
| common_type_6_test.test | RUN | 0.152548 | 0.362456 | 0.566542 | 0.001890 | 0.002045 | 0.001863 |
| common_type_5_test.test | RUN | 0.149637 | 0.348185 | 0.582234 | 0.001791 | 0.002105 | 0.002162 |
| common_type_4_test.test | RUN | 0.161778 | 0.382420 | 0.659338 | 0.001569 | 0.001726 | 0.001803 |
| common_type_3_test.test | RUN | 0.139997 | 0.327653 | 0.545356 | 0.001940 | 0.001860 | 0.002084 |
| common_type_2_test.test | RUN | 0.197302 | 0.535276 | 1.148215 | 0.001982 | 0.002304 | 0.001942 |
| alignment_of_test.test | RUN | 0.152575 | 0.417228 | 0.709968 | 0.002032 | 0.001568 | 0.001982 |
| alignment_of_a2_test.test | RUN | 0.154659 | 0.421086 | 0.682897 | 0.001921 | 0.001975 | 0.001868 |
| aligned_storage_test.test | RUN | 0.162763 | 0.421130 | 0.622652 | 0.001776 | 0.002360 | 0.001974 |
| aligned_storage_empy_test.test | RUN | 0.188839 | 0.489624 | 0.857663 | 0.001833 | 0.001694 | 0.002146 |
| aligned_storage_a2_test.test | RUN | 0.163624 | 0.411241 | 0.665520 | 0.001871 | 0.002220 | 0.002244 |
| add_volatile_test.test | RUN | 0.347624 | 1.238306 | 3.230174 | 0.001839 | 0.002009 | 0.001995 |
| add_rvalue_reference_test.test | RUN | 0.388679 | 1.402809 | 3.847694 | 0.001822 | 0.001990 | 0.002052 |
| add_reference_test.test | RUN | 0.385832 | 1.417961 | 3.714693 | 0.001780 | 0.002182 | 0.002262 |
| add_pointer_test.test | RUN | 0.249767 | 0.789014 | 1.918020 | 0.001887 | 0.001868 | 0.002075 |
| add_lvalue_reference_test.test | RUN | 0.394014 | 1.380257 | 3.617469 | 0.001777 | 0.001728 | 0.002185 |
| add_cv_test.test | RUN | 0.368417 | 1.377000 | 3.486148 | 0.001767 | 0.002000 | 0.002153 |
| add_const_test.test | RUN | 0.373098 | 1.290843 | 3.565297 | 0.001643 | 0.001946 | 0.002116 |
| is_virtual_base_of_fail.test | COMPILE_FAIL | 0.140724 | 0.323558 | 0.518779 | — | — | — |
| is_stateless_fail.test | COMPILE_FAIL | 0.136608 | 0.334062 | 0.527392 | — | — | — |
| is_polymorphic_fail.test | COMPILE_FAIL | 0.130924 | 0.306746 | 0.512398 | — | — | — |
| is_nothrow_move_constructible_fail.test | COMPILE_FAIL | 0.131381 | 0.306640 | 0.513965 | — | — | — |
| is_nothrow_move_assignable_fail.test | COMPILE_FAIL | 0.137666 | 0.312465 | 0.467175 | — | — | — |
| is_list_constructible_fail.test | COMPILE_FAIL | 0.138260 | 0.305865 | 0.512197 | — | — | — |
| is_empty_fail.test | COMPILE_FAIL | 0.137802 | 0.322599 | 0.505537 | — | — | — |
| is_destructible_fail.test | COMPILE_FAIL | 0.134900 | 0.311872 | 0.500380 | — | — | — |
| is_default_constructible_fail.test | COMPILE_FAIL | 0.135195 | 0.314757 | 0.499578 | — | — | — |
| is_copy_constructible_fail.test | COMPILE_FAIL | 0.137211 | 0.307243 | 0.511430 | — | — | — |
| is_copy_assignable_fail.test | COMPILE_FAIL | 0.135524 | 0.319587 | 0.502693 | — | — | — |
| is_convertible_fail.test | COMPILE_FAIL | 0.136963 | 0.309930 | 0.506136 | — | — | — |
| is_convertible2_fail.test | COMPILE_FAIL | 0.136539 | 0.318414 | 0.510509 | — | — | — |
| is_constructible_fail.test | COMPILE_FAIL | 0.137442 | 0.311742 | 0.512154 | — | — | — |
| is_base_of_fail.test | COMPILE_FAIL | 0.136037 | 0.316778 | 0.497140 | — | — | — |
| is_assignable_fail.test | COMPILE_FAIL | 0.134949 | 0.308850 | 0.508787 | — | — | — |
| has_nothrow_destruct_fail.test | COMPILE_FAIL | 0.137592 | 0.317311 | 0.497474 | — | — | — |
| has_nothrow_copy_fail.test | COMPILE_FAIL | 0.136758 | 0.322909 | 0.499510 | — | — | — |
| has_nothrow_cons_fail.test | COMPILE_FAIL | 0.135278 | 0.309321 | 0.488215 | — | — | — |
| has_nothrow_assign_fail.test | COMPILE_FAIL | 0.135309 | 0.314019 | 0.493433 | — | — | — |
| common_type_fail.test | COMPILE_FAIL | 0.135895 | 0.310908 | 0.503983 | — | — | — |
| common_type2_fail.test | COMPILE_FAIL | 0.137408 | 0.310141 | 0.488380 | — | — | — |
| has_nothrow_assign_test_no_intrinsics.test | RUN | 0.218390 | 0.708131 | 1.431273 | 0.001812 | 0.001957 | 0.001305 |
| has_nothrow_constr_test_no_intrinsics.test | RUN | 0.210303 | 0.712966 | 1.388342 | 0.001497 | 0.001546 | 0.002128 |
| has_nothrow_copy_test_no_intrinsics.test | RUN | 0.211252 | 0.704018 | 1.433021 | 0.001662 | 0.001419 | 0.002311 |
| is_nothrow_move_assignable_test_no_intrinsics.test | RUN | 0.219148 | 0.692557 | 1.338806 | 0.001267 | 0.001439 | 0.001372 |
| is_nothrow_move_constructible_test_no_intrinsics.test | RUN | 0.124524 | 0.426608 | 0.822202 | 0.001417 | 0.001356 | 0.001425 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.997× | 0.997×, 0.997× | 0.990× |
| clang | 1.023× | 1.032×, 1.014× | 1.002× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1360 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/43712369003).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| add_const_test.test | 10 | 0.001485s | 0.001479s | 0.001478s | byte equality observed |
| add_cv_test.test | 10 | 0.001471s | 0.001444s | 0.001452s | byte equality observed |
| add_lvalue_reference_test.test | 10 | 0.001473s | 0.001470s | 0.001441s | byte equality observed |
| add_pointer_test.test | 7 | 0.001484s | 0.001468s | 0.001469s | byte equality observed |
| add_reference_test.test | 9 | 0.001469s | 0.001491s | 0.001431s | byte equality observed |
| add_rvalue_reference_test.test | 10 | 0.001476s | 0.001483s | 0.001483s | byte equality observed |
| add_volatile_test.test | 10 | 0.001486s | 0.001483s | 0.001474s | byte equality observed |
| aligned_storage_a2_test.test | 10 | 0.001623s | 0.001597s | 0.001620s | byte equality observed |
| aligned_storage_empy_test.test | 10 | 0.001472s | 0.001424s | 0.001445s | byte equality observed |
| aligned_storage_test.test | 10 | 0.001597s | 0.001612s | 0.001609s | byte equality observed |
| alignment_of_a2_test.test | 9 | 0.001462s | 0.001490s | 0.001448s | byte equality observed |
| alignment_of_test.test | 10 | 0.001464s | 0.001463s | 0.001453s | byte equality observed |
| common_type_2_test.test | 10 | 0.001454s | 0.001486s | 0.001441s | byte equality observed |
| common_type_3_test.test | 10 | 0.001480s | 0.001480s | 0.001468s | byte equality observed |
| common_type_4_test.test | 10 | 0.001476s | 0.001426s | 0.001468s | byte equality observed |
| common_type_5_test.test | 10 | 0.001481s | 0.001435s | 0.001455s | byte equality observed |
| common_type_6_test.test | 10 | 0.001455s | 0.001433s | 0.001472s | byte equality observed |
| common_type_sfinae2_test.test | 10 | 0.001445s | 0.001440s | 0.001481s | byte equality observed |
| common_type_sfinae_test.test | 10 | 0.001436s | 0.001451s | 0.001505s | byte equality observed |
| common_type_test.test | 10 | 0.001468s | 0.001444s | 0.001472s | byte equality observed |
| conditional_test.test | 10 | 0.001480s | 0.001450s | 0.001474s | byte equality observed |
| conjunction_test.test | 10 | 0.001468s | 0.001470s | 0.001463s | byte equality observed |
| copy_cv_ref_test.test | 10 | 0.001451s | 0.001463s | 0.001453s | byte equality observed |
| copy_cv_test.test | 10 | 0.001483s | 0.001453s | 0.001459s | byte equality observed |
| copy_reference_test.test | 10 | 0.001464s | 0.001455s | 0.001462s | byte equality observed |
| cxx14_aliases_test.test | 10 | 0.001476s | 0.001458s | 0.001446s | byte equality observed |
| decay_test.test | 10 | 0.001478s | 0.001459s | 0.001471s | byte equality observed |
| detected_or_test.test | 10 | 0.001452s | 0.001451s | 0.001467s | byte equality observed |
| detected_test.test | 10 | 0.001486s | 0.001477s | 0.001464s | byte equality observed |
| disjunction_test.test | 10 | 0.001459s | 0.001447s | 0.001462s | byte equality observed |
| enable_if_test.test | 10 | 0.001474s | 0.001462s | 0.001461s | byte equality observed |
| extent_test.test | 10 | 0.001450s | 0.001449s | 0.001467s | byte equality observed |
| floating_point_promotion_test.test | 10 | 0.001461s | 0.001489s | 0.001488s | byte equality observed |
| function_traits_test.test | 10 | 0.001467s | 0.001462s | 0.001483s | byte equality observed |
| has_binary_classes0_test.test | 10 | 0.001440s | 0.001455s | 0.001485s | byte equality observed |
| has_binary_classes1_test.test | 10 | 0.001450s | 0.001458s | 0.001429s | byte equality observed |
| has_binary_classes2_test.test | 10 | 0.001467s | 0.001421s | 0.001469s | byte equality observed |
| has_binary_classes3_test.test | 10 | 0.001469s | 0.001426s | 0.001444s | byte equality observed |
| has_binary_classes4_test.test | 10 | 0.001458s | 0.001459s | 0.001419s | byte equality observed |
| has_binary_classes5_test.test | 10 | 0.001466s | 0.001462s | 0.001451s | byte equality observed |
| has_binary_classes6_test.test | 10 | 0.001485s | 0.001453s | 0.001473s | byte equality observed |
| has_binary_classes7_test.test | 10 | 0.001480s | 0.001467s | 0.001456s | byte equality observed |
| has_binary_classes8_test.test | 10 | 0.001471s | 0.001421s | 0.001485s | byte equality observed |
| has_binary_classes9_test.test | 10 | 0.001463s | 0.001467s | 0.001449s | byte equality observed |
| has_bit_and_assign_test.test | 10 | 0.001480s | 0.001465s | 0.001469s | byte equality observed |
| has_bit_and_test.test | 10 | 0.001470s | 0.001469s | 0.001473s | byte equality observed |
| has_bit_or_assign_test.test | 10 | 0.001459s | 0.001454s | 0.001450s | byte equality observed |
| has_bit_or_test.test | 10 | 0.001467s | 0.001449s | 0.001488s | byte equality observed |
| has_bit_xor_assign_test.test | 9 | 0.001455s | 0.001486s | 0.001493s | byte equality observed |
| has_bit_xor_test.test | 10 | 0.001457s | 0.001460s | 0.001448s | byte equality observed |
| has_complement_test.test | 10 | 0.001439s | 0.001449s | 0.001441s | byte equality observed |
| has_dereference_test.test | 10 | 0.001440s | 0.001449s | 0.001486s | byte equality observed |
| has_divides_assign_test.test | 10 | 0.001486s | 0.001475s | 0.001460s | byte equality observed |
| has_divides_test.test | 10 | 0.001476s | 0.001477s | 0.001439s | byte equality observed |
| has_equal_to_test.test | 10 | 0.001461s | 0.001432s | 0.001456s | byte equality observed |
| has_greater_equal_test.test | 10 | 0.001466s | 0.001458s | 0.001451s | byte equality observed |
| has_greater_test.test | 10 | 0.001464s | 0.001442s | 0.001498s | byte equality observed |
| has_left_shift_assign_test.test | 10 | 0.001451s | 0.001473s | 0.001459s | byte equality observed |
| has_left_shift_test.test | 10 | 0.001466s | 0.001430s | 0.001482s | byte equality observed |
| has_less_equal_test.test | 9 | 0.001484s | 0.001433s | 0.001458s | byte equality observed |
| has_less_test.test | 10 | 0.001481s | 0.001455s | 0.001447s | byte equality observed |
| has_logical_and_test.test | 10 | 0.001459s | 0.001443s | 0.001472s | byte equality observed |
| has_logical_not_test.test | 10 | 0.001447s | 0.001454s | 0.001474s | byte equality observed |
| has_logical_or_test.test | 10 | 0.001449s | 0.001448s | 0.001472s | byte equality observed |
| has_minus_assign_test.test | 10 | 0.001482s | 0.001459s | 0.001487s | byte equality observed |
| has_minus_test.test | 10 | 0.001458s | 0.001413s | 0.001469s | byte equality observed |
| has_modulus_assign_test.test | 10 | 0.001464s | 0.001469s | 0.001439s | byte equality observed |
| has_modulus_test.test | 10 | 0.001456s | 0.001436s | 0.001465s | byte equality observed |
| has_multiplies_assign_test.test | 10 | 0.001487s | 0.001475s | 0.001468s | byte equality observed |
| has_multiplies_test.test | 10 | 0.001455s | 0.001440s | 0.001484s | byte equality observed |
| has_negate_test.test | 10 | 0.001464s | 0.001438s | 0.001485s | byte equality observed |
| has_not_equal_to_test.test | 10 | 0.001438s | 0.001451s | 0.001491s | byte equality observed |
| has_nothrow_assign_test.test | 10 | 0.001466s | 0.001433s | 0.001452s | byte equality observed |
| has_nothrow_assign_test_no_intrinsics.test | 10 | 0.001469s | 0.001443s | 0.001449s | byte equality observed |
| has_nothrow_constr_test.test | 10 | 0.001459s | 0.001420s | 0.001431s | byte equality observed |
| has_nothrow_constr_test_no_intrinsics.test | 10 | 0.001463s | 0.001473s | 0.001460s | byte equality observed |
| has_nothrow_copy_test.test | 10 | 0.001453s | 0.001445s | 0.001488s | byte equality observed |
| has_nothrow_copy_test_no_intrinsics.test | 10 | 0.001458s | 0.001476s | 0.001437s | byte equality observed |
| has_nothrow_destructor_test.test | 9 | 0.001444s | 0.001427s | 0.001451s | byte equality observed |
| has_operator_new_test.test | 10 | 0.001462s | 0.001462s | 0.001481s | byte equality observed |
| has_plus_assign_test.test | 10 | 0.001492s | 0.001465s | 0.001454s | byte equality observed |
| has_plus_test.test | 10 | 0.001477s | 0.001450s | 0.001449s | byte equality observed |
| has_post_decrement_test.test | 10 | 0.001451s | 0.001445s | 0.001441s | byte equality observed |
| has_post_increment_test.test | 10 | 0.001455s | 0.001446s | 0.001480s | byte equality observed |
| has_postfix_classes0_test.test | 10 | 0.001455s | 0.001471s | 0.001447s | byte equality observed |
| has_postfix_classes1_test.test | 10 | 0.001451s | 0.001424s | 0.001452s | byte equality observed |
| has_postfix_classes2_test.test | 10 | 0.001459s | 0.001438s | 0.001426s | byte equality observed |
| has_postfix_classes3_test.test | 10 | 0.001475s | 0.001481s | 0.001454s | byte equality observed |
| has_pre_decrement_test.test | 10 | 0.001471s | 0.001430s | 0.001438s | byte equality observed |
| has_pre_increment_test.test | 10 | 0.001439s | 0.001464s | 0.001483s | byte equality observed |
| has_prefix_classes0_test.test | 10 | 0.001441s | 0.001467s | 0.001454s | byte equality observed |
| has_prefix_classes1_test.test | 10 | 0.001472s | 0.001444s | 0.001471s | byte equality observed |
| has_prefix_classes2_test.test | 10 | 0.001442s | 0.001428s | 0.001426s | byte equality observed |
| has_prefix_classes3_test.test | 10 | 0.001443s | 0.001480s | 0.001455s | byte equality observed |
| has_right_shift_assign_test.test | 10 | 0.001458s | 0.001450s | 0.001468s | byte equality observed |
| has_right_shift_test.test | 9 | 0.001463s | 0.001432s | 0.001471s | byte equality observed |
| has_trivial_assign_test.test | 10 | 0.001550s | 0.001527s | 0.001546s | byte equality observed |
| has_trivial_constr_test.test | 10 | 0.001539s | 0.001531s | 0.001521s | native test oracle; output varies |
| has_trivial_copy_test.test | 10 | 0.001560s | 0.001492s | 0.001596s | native test oracle; output varies |
| has_trivial_destructor_test.test | 10 | 0.001483s | 0.001449s | 0.001478s | byte equality observed |
| has_trivial_move_assign_test.test | 10 | 0.001470s | 0.001474s | 0.001449s | byte equality observed |
| has_trivial_move_constructor_test.test | 10 | 0.001440s | 0.001453s | 0.001461s | byte equality observed |
| has_unary_minus_test.test | 10 | 0.001493s | 0.001486s | 0.001452s | byte equality observed |
| has_unary_plus_test.test | 8 | 0.001470s | 0.001453s | 0.001419s | byte equality observed |
| has_virtual_destructor_test.test | 10 | 0.001461s | 0.001464s | 0.001463s | byte equality observed |
| integral_constant_test.test | 10 | 0.000650s | 0.000651s | 0.001467s | byte equality observed |
| is_abstract_test.test | 10 | 0.001485s | 0.001467s | 0.001464s | byte equality observed |
| is_arithmetic_test.test | 9 | 0.001448s | 0.001445s | 0.001457s | byte equality observed |
| is_array_test.test | 10 | 0.001484s | 0.001461s | 0.001432s | byte equality observed |
| is_assignable_test.test | 10 | 0.001458s | 0.001457s | 0.001482s | byte equality observed |
| is_base_and_derived_test.test | 10 | 0.001461s | 0.001467s | 0.001463s | byte equality observed |
| is_base_of_test.test | 10 | 0.001451s | 0.001440s | 0.001469s | byte equality observed |
| is_bounded_array_test.test | 10 | 0.001452s | 0.001475s | 0.001453s | byte equality observed |
| is_class_test.test | 10 | 0.001450s | 0.001441s | 0.001456s | byte equality observed |
| is_complete_test.test | 10 | 0.001464s | 0.001463s | 0.001451s | byte equality observed |
| is_complex_test.test | 10 | 0.001464s | 0.001442s | 0.001439s | byte equality observed |
| is_compound_test.test | 10 | 0.001492s | 0.001472s | 0.001466s | byte equality observed |
| is_const_test.test | 10 | 0.001456s | 0.001453s | 0.001458s | byte equality observed |
| is_constructible_test.test | 10 | 0.001450s | 0.001463s | 0.001461s | byte equality observed |
| is_convertible_test.test | 10 | 0.001456s | 0.001429s | 0.001438s | byte equality observed |
| is_copy_assignable_test.test | 10 | 0.001481s | 0.001465s | 0.001473s | byte equality observed |
| is_copy_constructible_test.test | 10 | 0.001456s | 0.001470s | 0.001458s | byte equality observed |
| is_default_constr_test.test | 10 | 0.001466s | 0.001444s | 0.001479s | byte equality observed |
| is_destructible_test.test | 8 | 0.001474s | 0.001464s | 0.001495s | byte equality observed |
| is_detected_exact_test.test | 10 | 0.001441s | 0.001415s | 0.001464s | byte equality observed |
| is_detected_test.test | 10 | 0.001470s | 0.001420s | 0.001478s | byte equality observed |
| is_empty_test.test | 10 | 0.001460s | 0.001439s | 0.001481s | byte equality observed |
| is_enum_test.test | 10 | 0.001440s | 0.001472s | 0.001470s | byte equality observed |
| is_final_test.test | 10 | 0.001440s | 0.001463s | 0.001442s | byte equality observed |
| is_float_test.test | 10 | 0.001476s | 0.001449s | 0.001471s | byte equality observed |
| is_floating_point_test.test | 10 | 0.001454s | 0.001475s | 0.001490s | byte equality observed |
| is_function_test.test | 9 | 0.001458s | 0.001448s | 0.001485s | byte equality observed |
| is_fundamental_test.test | 10 | 0.001424s | 0.001445s | 0.001466s | byte equality observed |
| is_integral_test.test | 10 | 0.001480s | 0.001457s | 0.001454s | byte equality observed |
| is_list_constructible_test.test | 10 | 0.001445s | 0.001450s | 0.001489s | byte equality observed |
| is_lvalue_reference_test.test | 10 | 0.001443s | 0.001446s | 0.001476s | byte equality observed |
| is_member_func_test.test | 10 | 0.001460s | 0.001455s | 0.001478s | byte equality observed |
| is_member_obj_test.test | 10 | 0.001455s | 0.001457s | 0.001483s | byte equality observed |
| is_member_pointer_test.test | 10 | 0.001467s | 0.001445s | 0.001473s | byte equality observed |
| is_noncopyable_test.test | 10 | 0.001472s | 0.001464s | 0.001449s | byte equality observed |
| is_nothrow_move_assignable_test.test | 10 | 0.001469s | 0.001460s | 0.001472s | byte equality observed |
| is_nothrow_move_assignable_test_no_intrinsics.test | 10 | 0.001478s | 0.001484s | 0.001468s | byte equality observed |
| is_nothrow_move_constructible_test.test | 10 | 0.001452s | 0.001456s | 0.001439s | byte equality observed |
| is_nothrow_move_constructible_test_no_intrinsics.test | 10 | 0.001469s | 0.001458s | 0.001470s | byte equality observed |
| is_nothrow_swappable_test.test | 10 | 0.001478s | 0.001428s | 0.001447s | byte equality observed |
| is_object_test.test | 10 | 0.001421s | 0.001437s | 0.001486s | byte equality observed |
| is_pod_test.test | 10 | 0.001473s | 0.001428s | 0.001477s | byte equality observed |
| is_pointer_test.test | 10 | 0.001453s | 0.001449s | 0.001461s | byte equality observed |
| is_polymorphic_test.test | 10 | 0.001458s | 0.001450s | 0.001458s | byte equality observed |
| is_reference_test.test | 10 | 0.001432s | 0.001465s | 0.001460s | byte equality observed |
| is_rvalue_reference_test.test | 10 | 0.001476s | 0.001444s | 0.001466s | byte equality observed |
| is_same_test.test | 10 | 0.001460s | 0.001448s | 0.001474s | byte equality observed |
| is_scalar_test.test | 10 | 0.001460s | 0.001455s | 0.001451s | byte equality observed |
| is_scoped_enum_test.test | 10 | 0.001475s | 0.001481s | 0.001434s | byte equality observed |
| is_signed_test.test | 10 | 0.001433s | 0.001466s | 0.001453s | byte equality observed |
| is_stateless_test.test | 10 | 0.001479s | 0.001429s | 0.001486s | byte equality observed |
| is_swappable_test.test | 10 | 0.001471s | 0.001437s | 0.001470s | byte equality observed |
| is_trivially_copyable_test.test | 10 | 0.001495s | 0.001500s | 0.001486s | byte equality observed |
| is_unbounded_array_test.test | 10 | 0.001457s | 0.001440s | 0.001474s | byte equality observed |
| is_union_test.test | 10 | 0.001447s | 0.001450s | 0.001450s | byte equality observed |
| is_unscoped_enum_test.test | 10 | 0.001473s | 0.001454s | 0.001446s | byte equality observed |
| is_unsigned_test.test | 10 | 0.001478s | 0.001431s | 0.001450s | byte equality observed |
| is_virtual_base_of_test.test | 10 | 0.001454s | 0.001441s | 0.001481s | byte equality observed |
| is_void_test.test | 10 | 0.001447s | 0.001426s | 0.001481s | byte equality observed |
| is_volatile_test.test | 10 | 0.001454s | 0.001478s | 0.001474s | byte equality observed |
| make_signed_test.test | 10 | 0.001486s | 0.001450s | 0.001471s | byte equality observed |
| make_unsigned_test.test | 10 | 0.001481s | 0.001487s | 0.001505s | byte equality observed |
| make_void_test.test | 10 | 0.001471s | 0.001491s | 0.001479s | byte equality observed |
| mpl_interop_test1.test | 10 | 0.000649s | 0.000641s | 0.001473s | byte equality observed |
| mpl_interop_test2.test | 10 | 0.000658s | 0.000648s | 0.001452s | byte equality observed |
| mpl_interop_test3.test | 10 | 0.000658s | 0.000660s | 0.001463s | byte equality observed |
| negation_test.test | 10 | 0.001515s | 0.001499s | 0.001453s | byte equality observed |
| promote_basic_test.test | 10 | 0.000654s | 0.000645s | 0.001477s | byte equality observed |
| promote_enum_msvc_bug_test.test | 10 | 0.000661s | 0.000665s | 0.001443s | byte equality observed |
| promote_enum_test.test | 10 | 0.000657s | 0.000662s | 0.001466s | byte equality observed |
| promote_mpl_test.test | 10 | 0.000645s | 0.000648s | 0.001453s | byte equality observed |
| rank_test.test | 10 | 0.001478s | 0.001474s | 0.001457s | byte equality observed |
| remove_all_extents_test.test | 10 | 0.001490s | 0.001463s | 0.001482s | byte equality observed |
| remove_bounds_test.test | 10 | 0.001489s | 0.001465s | 0.001484s | byte equality observed |
| remove_const_test.test | 10 | 0.001456s | 0.001460s | 0.001450s | byte equality observed |
| remove_cv_ref_test.test | 10 | 0.001475s | 0.001476s | 0.001448s | byte equality observed |
| remove_cv_test.test | 8 | 0.001465s | 0.001438s | 0.001446s | byte equality observed |
| remove_extent_test.test | 10 | 0.001468s | 0.001436s | 0.001452s | byte equality observed |
| remove_pointer_test.test | 10 | 0.001476s | 0.001473s | 0.001477s | byte equality observed |
| remove_reference_test.test | 10 | 0.001500s | 0.001456s | 0.001438s | byte equality observed |
| remove_volatile_test.test | 10 | 0.001481s | 0.001469s | 0.001472s | byte equality observed |
| tricky_abstract_type_test.test | 10 | 0.001466s | 0.001453s | 0.001431s | byte equality observed |
| tricky_add_pointer_test.test | 10 | 0.001438s | 0.001437s | 0.001451s | byte equality observed |
| tricky_function_type_test.test | 10 | 0.001454s | 0.001408s | 0.001489s | byte equality observed |
| tricky_incomplete_type_test.test | 10 | 0.001452s | 0.001425s | 0.001456s | byte equality observed |
| tricky_is_enum_test.test | 10 | 0.001431s | 0.001456s | 0.001465s | byte equality observed |
| tricky_partial_spec_test.test | 10 | 0.001473s | 0.001469s | 0.001431s | byte equality observed |
| tricky_rvalue_test.test | 10 | 0.001465s | 0.001464s | 0.001417s | byte equality observed |
| type_identity_test.test | 9 | 0.001466s | 0.001492s | 0.001461s | byte equality observed |
| type_traits_test.test | 10 | 0.000647s | 0.000639s | 0.001460s | byte equality observed |
| type_with_alignment_test.test | 10 | 0.001623s | 0.001639s | 0.001639s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/43712369003).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
