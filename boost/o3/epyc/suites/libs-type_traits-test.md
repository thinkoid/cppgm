# libs/type_traits/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| type_with_alignment_test.test | RUN | 0.161095 | 0.419291 | 0.796981 | 0.001770 | 0.002044 | 0.001894 |
| type_traits_test.test | RUN | 0.227264 | 0.472179 | 0.783044 | 0.000680 | 0.000763 | 0.001876 |
| type_identity_test.test | RUN | 0.444606 | 1.769505 | 4.535559 | 0.001931 | 0.001758 | 0.002022 |
| tricky_rvalue_test.test | RUN | 0.143286 | 0.333068 | 0.614419 | 0.001952 | 0.001748 | 0.001886 |
| tricky_partial_spec_test.test | RUN | 0.180960 | 0.518751 | 1.007464 | 0.001807 | 0.001750 | 0.002046 |
| tricky_is_enum_test.test | RUN | 0.140947 | 0.345184 | 0.536848 | 0.001968 | 0.001918 | 0.001979 |
| tricky_incomplete_type_test.test | RUN | 0.232101 | 0.542728 | 0.939008 | 0.001794 | 0.002170 | 0.001870 |
| tricky_function_type_test.test | RUN | 0.194445 | 0.556187 | 1.069037 | 0.001763 | 0.001964 | 0.001888 |
| tricky_add_pointer_test.test | RUN | 0.300777 | 1.028782 | 2.499561 | 0.001756 | 0.002072 | 0.001934 |
| tricky_abstract_type_test.test | RUN | 0.150067 | 0.362048 | 0.579069 | 0.001660 | 0.001717 | 0.001873 |
| remove_volatile_test.test | RUN | 0.400740 | 1.436216 | 3.931313 | 0.001949 | 0.001852 | 0.001734 |
| remove_reference_test.test | RUN | 0.415370 | 1.499632 | 4.146078 | 0.001851 | 0.001831 | 0.002021 |
| remove_pointer_test.test | RUN | 0.433812 | 1.628104 | 4.378840 | 0.001970 | 0.002028 | 0.001748 |
| remove_extent_test.test | RUN | 0.416591 | 1.534593 | 4.204484 | 0.001855 | 0.002264 | 0.001719 |
| remove_cv_test.test | RUN | 0.425649 | 1.532228 | 4.171568 | 0.002020 | 0.002199 | 0.002106 |
| remove_cv_ref_test.test | RUN | 0.882486 | 3.697907 | 10.154367 | 0.001572 | 0.001820 | 0.001704 |
| remove_const_test.test | RUN | 0.394347 | 1.492000 | 3.963672 | 0.001853 | 0.002090 | 0.001998 |
| remove_bounds_test.test | RUN | 0.411777 | 1.563935 | 4.084627 | 0.001954 | 0.002045 | 0.001923 |
| remove_all_extents_test.test | RUN | 0.418043 | 1.580285 | 4.048883 | 0.001961 | 0.001955 | 0.001567 |
| rank_test.test | RUN | 0.147058 | 0.365626 | 0.561910 | 0.001741 | 0.002050 | 0.002064 |
| promote_mpl_test.test | RUN | 0.133081 | 0.327905 | 0.403064 | 0.000693 | 0.000842 | 0.001760 |
| promote_enum_test.test | RUN | 0.029080 | 0.081960 | 0.102795 | 0.000724 | 0.000694 | 0.002170 |
| promote_enum_msvc_bug_test.test | RUN | 0.026060 | 0.070008 | 0.078383 | 0.000734 | 0.000816 | 0.001804 |
| promote_basic_test.test | RUN | 0.034805 | 0.094775 | 0.108291 | 0.000795 | 0.000728 | 0.002058 |
| negation_test.test | RUN | 0.142502 | 0.316086 | 0.559240 | 0.001826 | 0.001841 | 0.002060 |
| mpl_interop_test3.test | RUN | 0.117854 | 0.296260 | 0.381050 | 0.000707 | 0.000725 | 0.001760 |
| mpl_interop_test2.test | RUN | 0.041056 | 0.084790 | 0.100637 | 0.000676 | 0.000682 | 0.002014 |
| mpl_interop_test1.test | RUN | 0.021840 | 0.064047 | 0.060167 | 0.000717 | 0.000800 | 0.002156 |
| make_void_test.test | RUN | 0.151237 | 0.364093 | 0.620296 | 0.001880 | 0.001782 | 0.002038 |
| make_unsigned_test.test | RUN | 0.179385 | 0.483209 | 0.875739 | 0.001764 | 0.001981 | 0.002122 |
| make_signed_test.test | RUN | 0.177530 | 0.493689 | 0.842552 | 0.001538 | 0.001938 | 0.002143 |
| is_volatile_test.test | RUN | 0.155179 | 0.419521 | 0.698173 | 0.001544 | 0.001505 | 0.001878 |
| is_void_test.test | RUN | 0.153203 | 0.381304 | 0.668587 | 0.001945 | 0.002070 | 0.002013 |
| is_virtual_base_of_test.test | RUN | 0.174708 | 0.482918 | 0.949656 | 0.001939 | 0.001731 | 0.001633 |
| is_unsigned_test.test | RUN | 0.155574 | 0.396697 | 0.620551 | 0.001549 | 0.001690 | 0.001942 |
| is_unscoped_enum_test.test | RUN | 0.149729 | 0.345373 | 0.591535 | 0.001719 | 0.001715 | 0.001946 |
| is_union_test.test | RUN | 0.165960 | 0.443430 | 0.811795 | 0.001938 | 0.001937 | 0.001941 |
| is_unbounded_array_test.test | RUN | 0.148470 | 0.379683 | 0.621356 | 0.001738 | 0.002111 | 0.002150 |
| is_trivially_copyable_test.test | RUN | 0.247132 | 0.796077 | 1.648668 | 0.001760 | 0.002056 | 0.002059 |
| is_swappable_test.test | RUN | 0.203512 | 0.604029 | 1.244749 | 0.001756 | 0.001958 | 0.001607 |
| is_stateless_test.test | RUN | 0.226846 | 0.695536 | 1.422637 | 0.001735 | 0.001948 | 0.002002 |
| is_signed_test.test | RUN | 0.156072 | 0.382203 | 0.659990 | 0.001765 | 0.001972 | 0.002058 |
| is_scoped_enum_test.test | RUN | 0.151540 | 0.349520 | 0.560539 | 0.001724 | 0.002026 | 0.002009 |
| is_scalar_test.test | RUN | 0.200069 | 0.637158 | 1.290869 | 0.001700 | 0.001710 | 0.001634 |
| is_same_test.test | RUN | 0.149020 | 0.386250 | 0.567912 | 0.002089 | 0.001838 | 0.002016 |
| is_rvalue_reference_test.test | RUN | 0.156919 | 0.426392 | 0.777699 | 0.001706 | 0.001806 | 0.001964 |
| is_reference_test.test | RUN | 0.163535 | 0.440653 | 0.734248 | 0.001733 | 0.001771 | 0.001942 |
| is_polymorphic_test.test | RUN | 0.168188 | 0.450325 | 0.825583 | 0.001494 | 0.001890 | 0.001988 |
| is_pointer_test.test | RUN | 0.159984 | 0.441398 | 0.779054 | 0.001927 | 0.001724 | 0.001978 |
| is_pod_test.test | RUN | 0.215675 | 0.711221 | 1.455156 | 0.001668 | 0.002124 | 0.002068 |
| is_object_test.test | RUN | 0.149344 | 0.376181 | 0.599515 | 0.001796 | 0.002176 | 0.001717 |
| is_nothrow_swappable_test.test | RUN | 0.221623 | 0.671557 | 1.349077 | 0.001964 | 0.001862 | 0.002048 |
| is_nothrow_move_constructible_test.test | RUN | 0.206412 | 0.683471 | 1.397918 | 0.001938 | 0.001668 | 0.001978 |
| is_nothrow_move_assignable_test.test | RUN | 0.209571 | 0.687866 | 1.412962 | 0.001872 | 0.001727 | 0.001904 |
| is_noncopyable_test.test | RUN | 0.150203 | 0.364524 | 0.637577 | 0.001846 | 0.001937 | 0.001822 |
| is_member_pointer_test.test | RUN | 0.152745 | 0.377141 | 0.603516 | 0.001733 | 0.002056 | 0.001970 |
| is_member_obj_test.test | RUN | 0.154310 | 0.378212 | 0.657886 | 0.001795 | 0.001861 | 0.001781 |
| is_member_func_test.test | RUN | 0.158092 | 0.423368 | 0.734527 | 0.001860 | 0.002109 | 0.001788 |
| is_lvalue_reference_test.test | RUN | 0.163294 | 0.435576 | 0.692051 | 0.001717 | 0.001912 | 0.001848 |
| is_list_constructible_test.test | RUN | 0.182390 | 0.496783 | 0.837973 | 0.001872 | 0.001856 | 0.002048 |
| is_integral_test.test | RUN | 0.185592 | 0.590613 | 1.170690 | 0.001929 | 0.001689 | 0.001774 |
| is_fundamental_test.test | RUN | 0.197571 | 0.611358 | 1.197531 | 0.001666 | 0.001923 | 0.002143 |
| is_function_test.test | RUN | 0.161302 | 0.402391 | 0.634433 | 0.001776 | 0.001700 | 0.001960 |
| is_floating_point_test.test | RUN | 0.150790 | 0.434644 | 0.762582 | 0.001706 | 0.001881 | 0.002030 |
| is_float_test.test | RUN | 0.158001 | 0.434286 | 0.784049 | 0.001880 | 0.001842 | 0.002049 |
| is_final_test.test | RUN | 0.162285 | 0.441306 | 0.777671 | 0.001686 | 0.001893 | 0.001452 |
| is_enum_test.test | RUN | 0.153142 | 0.374216 | 0.562629 | 0.001860 | 0.001976 | 0.002025 |
| is_empty_test.test | RUN | 0.158937 | 0.397011 | 0.666505 | 0.001729 | 0.002150 | 0.002076 |
| is_detected_test.test | RUN | 0.148607 | 0.339303 | 0.509035 | 0.001932 | 0.001875 | 0.001861 |
| is_detected_exact_test.test | RUN | 0.144253 | 0.342194 | 0.545552 | 0.001691 | 0.001696 | 0.001968 |
| is_destructible_test.test | RUN | 0.212880 | 0.676962 | 1.366138 | 0.001934 | 0.002100 | 0.002002 |
| is_default_constr_test.test | RUN | 0.200241 | 0.693180 | 1.415379 | 0.001954 | 0.001882 | 0.002072 |
| is_copy_constructible_test.test | RUN | 0.227687 | 0.743356 | 1.466660 | 0.001684 | 0.001759 | 0.002042 |
| is_copy_assignable_test.test | RUN | 0.224454 | 0.692053 | 1.494523 | 0.001643 | 0.001820 | 0.001976 |
| is_convertible_test.test | RUN | 0.217710 | 0.635712 | 1.234007 | 0.001666 | 0.002210 | 0.001900 |
| is_constructible_test.test | RUN | 0.170673 | 0.462153 | 0.835331 | 0.001833 | 0.001944 | 0.002061 |
| is_const_test.test | RUN | 0.151378 | 0.412621 | 0.694691 | 0.001856 | 0.001834 | 0.001962 |
| is_compound_test.test | RUN | 0.145302 | 0.348174 | 0.551573 | 0.001834 | 0.001650 | 0.002109 |
| is_complex_test.test | RUN | 0.195299 | 0.462699 | 0.806941 | 0.001849 | 0.002028 | 0.002018 |
| is_complete_test.test | RUN | 0.171523 | 0.479136 | 0.868885 | 0.002030 | 0.001932 | 0.001856 |
| is_class_test.test | RUN | 0.161127 | 0.428680 | 0.745441 | 0.001965 | 0.001818 | 0.001848 |
| is_bounded_array_test.test | RUN | 0.147005 | 0.368865 | 0.638416 | 0.001784 | 0.001839 | 0.001712 |
| is_base_of_test.test | RUN | 0.160241 | 0.414618 | 0.745290 | 0.001822 | 0.002039 | 0.001748 |
| is_base_and_derived_test.test | RUN | 0.156138 | 0.414656 | 0.715470 | 0.001773 | 0.001979 | 0.001603 |
| is_assignable_test.test | RUN | 0.189902 | 0.586761 | 1.134885 | 0.001767 | 0.002123 | 0.001577 |
| is_array_test.test | RUN | 0.152815 | 0.403033 | 0.722061 | 0.001998 | 0.001768 | 0.002008 |
| is_arithmetic_test.test | RUN | 0.193887 | 0.600137 | 1.182552 | 0.002033 | 0.002096 | 0.002132 |
| is_abstract_test.test | RUN | 0.362746 | 1.582452 | 3.791953 | 0.001815 | 0.001915 | 0.002072 |
| integral_constant_test.test | RUN | 0.024194 | 0.060293 | 0.070817 | 0.000708 | 0.000892 | 0.001860 |
| has_virtual_destructor_test.test | RUN | 0.166404 | 0.457773 | 0.875418 | 0.001816 | 0.002084 | 0.002016 |
| has_unary_plus_test.test | RUN | 0.325943 | 1.782890 | 3.105215 | 0.002265 | 0.002002 | 0.001862 |
| has_unary_minus_test.test | RUN | 0.327162 | 1.841832 | 2.939093 | 0.001823 | 0.001602 | 0.002004 |
| has_trivial_move_constructor_test.test | RUN | 0.220051 | 0.717034 | 1.463289 | 0.001862 | 0.001732 | 0.001951 |
| has_trivial_move_assign_test.test | RUN | 0.219299 | 0.657976 | 1.362426 | 0.001638 | 0.002056 | 0.001938 |
| has_trivial_destructor_test.test | RUN | 0.217261 | 0.645797 | 1.401379 | 0.001821 | 0.001740 | 0.001923 |
| has_trivial_copy_test.test | RUN | 0.224151 | 0.743180 | 1.494274 | 0.001982 | 0.002158 | 0.002084 |
| has_trivial_constr_test.test | RUN | 0.226639 | 0.723956 | 1.540305 | 0.001866 | 0.002078 | 0.002093 |
| has_trivial_assign_test.test | RUN | 0.218886 | 0.713259 | 1.518037 | 0.001763 | 0.001411 | 0.002100 |
| has_right_shift_test.test | RUN | 0.341733 | 1.425557 | 3.229082 | 0.001756 | 0.002020 | 0.001822 |
| has_right_shift_assign_test.test | RUN | 0.324876 | 1.312227 | 2.968605 | 0.001671 | 0.001987 | 0.001658 |
| has_prefix_classes3_test.test | RUN | 0.238234 | 0.724793 | 1.550847 | 0.001946 | 0.001868 | 0.001994 |
| has_prefix_classes2_test.test | RUN | 0.235847 | 0.718083 | 1.511663 | 0.001680 | 0.001902 | 0.001902 |
| has_prefix_classes1_test.test | RUN | 0.240317 | 0.756175 | 1.524420 | 0.001858 | 0.002120 | 0.002041 |
| has_prefix_classes0_test.test | RUN | 0.232258 | 0.770677 | 1.500310 | 0.001772 | 0.002146 | 0.001961 |
| has_pre_increment_test.test | RUN | 0.318528 | 1.857508 | 3.002561 | 0.001859 | 0.001964 | 0.001840 |
| has_pre_decrement_test.test | RUN | 0.325396 | 1.847988 | 3.014093 | 0.001780 | 0.002172 | 0.001794 |
| has_postfix_classes3_test.test | RUN | 0.244289 | 0.751067 | 1.530083 | 0.001765 | 0.001865 | 0.002081 |
| has_postfix_classes2_test.test | RUN | 0.235719 | 0.739127 | 1.509437 | 0.001898 | 0.001918 | 0.001670 |
| has_postfix_classes1_test.test | RUN | 0.239597 | 0.721593 | 1.531346 | 0.001922 | 0.002090 | 0.002081 |
| has_postfix_classes0_test.test | RUN | 0.239267 | 0.775568 | 1.594721 | 0.001774 | 0.002134 | 0.002012 |
| has_post_increment_test.test | RUN | 0.329884 | 1.849650 | 3.044119 | 0.001788 | 0.001907 | 0.002080 |
| has_post_decrement_test.test | RUN | 0.327887 | 1.797750 | 3.030149 | 0.001601 | 0.001712 | 0.001942 |
| has_plus_test.test | RUN | 0.331137 | 1.312277 | 3.003686 | 0.002028 | 0.001850 | 0.002052 |
| has_plus_assign_test.test | RUN | 0.340253 | 1.314614 | 3.032975 | 0.001796 | 0.002096 | 0.001950 |
| has_operator_new_test.test | RUN | 0.218251 | 0.682466 | 1.374128 | 0.001977 | 0.001734 | 0.002236 |
| has_nothrow_destructor_test.test | RUN | 0.222878 | 0.720594 | 1.476304 | 0.001796 | 0.001981 | 0.002072 |
| has_nothrow_copy_test.test | RUN | 0.222532 | 0.752516 | 1.424778 | 0.001876 | 0.002139 | 0.001817 |
| has_nothrow_constr_test.test | RUN | 0.219430 | 0.711081 | 1.414179 | 0.001750 | 0.001912 | 0.002214 |
| has_nothrow_assign_test.test | RUN | 0.211571 | 0.693025 | 1.380772 | 0.001769 | 0.002098 | 0.001969 |
| has_not_equal_to_test.test | RUN | 0.328832 | 1.839643 | 2.991958 | 0.001922 | 0.001929 | 0.001975 |
| has_negate_test.test | RUN | 0.315228 | 1.269393 | 2.894567 | 0.001742 | 0.001960 | 0.002034 |
| has_multiplies_test.test | RUN | 0.328829 | 1.274559 | 3.014172 | 0.001890 | 0.001952 | 0.001874 |
| has_multiplies_assign_test.test | RUN | 0.339278 | 1.244966 | 2.986037 | 0.002018 | 0.002118 | 0.001981 |
| has_modulus_test.test | RUN | 0.330016 | 1.351202 | 3.004879 | 0.001689 | 0.002204 | 0.002010 |
| has_modulus_assign_test.test | RUN | 0.332759 | 1.348617 | 2.990628 | 0.001841 | 0.002036 | 0.001467 |
| has_minus_test.test | RUN | 0.338897 | 1.279011 | 3.073139 | 0.001945 | 0.002152 | 0.001753 |
| has_minus_assign_test.test | RUN | 0.339430 | 1.340585 | 2.995810 | 0.002031 | 0.002116 | 0.001672 |
| has_logical_or_test.test | RUN | 0.328041 | 1.327086 | 3.007276 | 0.001860 | 0.001824 | 0.001934 |
| has_logical_not_test.test | RUN | 0.317009 | 1.308823 | 2.897788 | 0.001739 | 0.001936 | 0.002112 |
| has_logical_and_test.test | RUN | 0.327041 | 1.314885 | 3.088398 | 0.001782 | 0.002150 | 0.001846 |
| has_less_test.test | RUN | 0.337094 | 1.817505 | 3.003302 | 0.001971 | 0.002125 | 0.002065 |
| has_less_equal_test.test | RUN | 0.335630 | 1.843796 | 3.069561 | 0.001914 | 0.001792 | 0.001940 |
| has_left_shift_test.test | RUN | 0.371731 | 1.596934 | 3.669363 | 0.002010 | 0.001662 | 0.001660 |
| has_left_shift_assign_test.test | RUN | 0.333184 | 1.356269 | 2.949781 | 0.001800 | 0.002024 | 0.002243 |
| has_greater_test.test | RUN | 0.333333 | 1.834772 | 3.005969 | 0.001935 | 0.001980 | 0.001730 |
| has_greater_equal_test.test | RUN | 0.329698 | 1.742748 | 3.040967 | 0.001652 | 0.001856 | 0.001936 |
| has_equal_to_test.test | RUN | 0.330743 | 1.741628 | 3.023563 | 0.001941 | 0.002102 | 0.001914 |
| has_divides_test.test | RUN | 0.338216 | 1.234591 | 3.025906 | 0.001868 | 0.002106 | 0.002027 |
| has_divides_assign_test.test | RUN | 0.331923 | 1.340555 | 2.992960 | 0.001916 | 0.002132 | 0.001706 |
| has_dereference_test.test | RUN | 0.322629 | 1.322736 | 2.925098 | 0.001926 | 0.001882 | 0.001912 |
| has_complement_test.test | RUN | 0.323698 | 1.870902 | 2.995966 | 0.001812 | 0.001890 | 0.001767 |
| has_bit_xor_test.test | RUN | 0.329386 | 1.282688 | 2.995500 | 0.001920 | 0.002026 | 0.002088 |
| has_bit_xor_assign_test.test | RUN | 0.331220 | 1.240806 | 2.995617 | 0.001767 | 0.002176 | 0.001863 |
| has_bit_or_test.test | RUN | 0.327472 | 1.345623 | 3.020529 | 0.001582 | 0.002113 | 0.001947 |
| has_bit_or_assign_test.test | RUN | 0.310734 | 1.290683 | 2.994045 | 0.001626 | 0.002084 | 0.001712 |
| has_bit_and_test.test | RUN | 0.331231 | 1.304228 | 2.989415 | 0.001940 | 0.001898 | 0.001752 |
| has_bit_and_assign_test.test | RUN | 0.333759 | 1.282200 | 2.949531 | 0.001868 | 0.002162 | 0.001818 |
| has_binary_classes9_test.test | RUN | 0.363703 | 1.509943 | 3.299322 | 0.001806 | 0.002072 | 0.001874 |
| has_binary_classes8_test.test | RUN | 0.356243 | 1.499420 | 3.294484 | 0.001810 | 0.002140 | 0.001756 |
| has_binary_classes7_test.test | RUN | 0.359704 | 1.504790 | 3.285179 | 0.001840 | 0.002132 | 0.001777 |
| has_binary_classes6_test.test | RUN | 0.347975 | 1.435481 | 3.266409 | 0.001936 | 0.001940 | 0.001946 |
| has_binary_classes5_test.test | RUN | 0.352969 | 1.506172 | 3.314095 | 0.001591 | 0.002035 | 0.001994 |
| has_binary_classes4_test.test | RUN | 0.359774 | 1.493171 | 3.291470 | 0.001693 | 0.002034 | 0.001908 |
| has_binary_classes3_test.test | RUN | 0.365418 | 1.501145 | 3.240697 | 0.001890 | 0.001844 | 0.001698 |
| has_binary_classes2_test.test | RUN | 0.360783 | 1.494039 | 3.237934 | 0.001647 | 0.002069 | 0.001821 |
| has_binary_classes1_test.test | RUN | 0.343050 | 1.512222 | 3.241754 | 0.001851 | 0.001887 | 0.001918 |
| has_binary_classes0_test.test | RUN | 0.355222 | 1.591553 | 3.199754 | 0.001630 | 0.001866 | 0.001906 |
| function_traits_test.test | RUN | 0.162282 | 0.407036 | 0.730038 | 0.001736 | 0.001905 | 0.001888 |
| floating_point_promotion_test.test | RUN | 0.152950 | 0.377588 | 0.670061 | 0.001768 | 0.001800 | 0.001821 |
| extent_test.test | RUN | 0.155181 | 0.387126 | 0.716094 | 0.001709 | 0.001483 | 0.001780 |
| enable_if_test.test | RUN | 0.143996 | 0.335456 | 0.544543 | 0.001772 | 0.001743 | 0.001801 |
| disjunction_test.test | RUN | 0.147920 | 0.358680 | 0.585217 | 0.001657 | 0.001818 | 0.001762 |
| detected_test.test | RUN | 0.143522 | 0.325515 | 0.469925 | 0.001816 | 0.001886 | 0.001866 |
| detected_or_test.test | RUN | 0.147166 | 0.346803 | 0.564000 | 0.001803 | 0.001816 | 0.001932 |
| decay_test.test | RUN | 0.394678 | 1.492055 | 3.483759 | 0.001735 | 0.001634 | 0.001853 |
| cxx14_aliases_test.test | RUN | 0.237130 | 0.537061 | 0.920739 | 0.001799 | 0.002124 | 0.001989 |
| copy_reference_test.test | RUN | 0.151939 | 0.344224 | 0.589895 | 0.001818 | 0.001854 | 0.002215 |
| copy_cv_test.test | RUN | 0.149637 | 0.376763 | 0.608843 | 0.001767 | 0.002036 | 0.001872 |
| copy_cv_ref_test.test | RUN | 0.214016 | 0.655287 | 1.417498 | 0.001988 | 0.001729 | 0.002022 |
| conjunction_test.test | RUN | 0.147619 | 0.348646 | 0.580656 | 0.001932 | 0.002036 | 0.002045 |
| conditional_test.test | RUN | 0.141170 | 0.355164 | 0.581319 | 0.001972 | 0.001862 | 0.001698 |
| common_type_test.test | RUN | 0.201685 | 0.546701 | 1.119000 | 0.001946 | 0.001777 | 0.001725 |
| common_type_sfinae_test.test | RUN | 0.145853 | 0.323472 | 0.533093 | 0.001771 | 0.001826 | 0.001978 |
| common_type_sfinae2_test.test | RUN | 0.152817 | 0.348360 | 0.535536 | 0.001726 | 0.001789 | 0.001672 |
| common_type_6_test.test | RUN | 0.155889 | 0.359776 | 0.564076 | 0.001986 | 0.001746 | 0.002041 |
| common_type_5_test.test | RUN | 0.155663 | 0.357823 | 0.568515 | 0.001899 | 0.001888 | 0.001694 |
| common_type_4_test.test | RUN | 0.168427 | 0.402319 | 0.694580 | 0.001758 | 0.001849 | 0.001782 |
| common_type_3_test.test | RUN | 0.149396 | 0.319605 | 0.535966 | 0.001666 | 0.001898 | 0.001654 |
| common_type_2_test.test | RUN | 0.195990 | 0.551845 | 1.122329 | 0.002032 | 0.002072 | 0.001891 |
| alignment_of_test.test | RUN | 0.166168 | 0.417547 | 0.718684 | 0.001841 | 0.002134 | 0.001609 |
| alignment_of_a2_test.test | RUN | 0.156046 | 0.424006 | 0.714856 | 0.001725 | 0.001804 | 0.001874 |
| aligned_storage_test.test | RUN | 0.162423 | 0.413556 | 0.655155 | 0.001899 | 0.002112 | 0.002040 |
| aligned_storage_empy_test.test | RUN | 0.182120 | 0.465504 | 0.883046 | 0.002054 | 0.002084 | 0.002188 |
| aligned_storage_a2_test.test | RUN | 0.167414 | 0.397684 | 0.643659 | 0.002041 | 0.002346 | 0.002180 |
| add_volatile_test.test | RUN | 0.359870 | 1.241227 | 3.320837 | 0.002014 | 0.001904 | 0.002094 |
| add_rvalue_reference_test.test | RUN | 0.399938 | 1.412590 | 3.897035 | 0.001909 | 0.001610 | 0.002044 |
| add_reference_test.test | RUN | 0.389790 | 1.430900 | 3.835620 | 0.001904 | 0.002060 | 0.002056 |
| add_pointer_test.test | RUN | 0.249260 | 0.786579 | 1.920653 | 0.001890 | 0.001826 | 0.001936 |
| add_lvalue_reference_test.test | RUN | 0.388321 | 1.474463 | 3.760905 | 0.001875 | 0.001734 | 0.001826 |
| add_cv_test.test | RUN | 0.364139 | 1.280457 | 3.499523 | 0.001775 | 0.002022 | 0.001802 |
| add_const_test.test | RUN | 0.369330 | 1.276226 | 3.600945 | 0.001843 | 0.001684 | 0.001976 |
| is_virtual_base_of_fail.test | COMPILE_FAIL | 0.141247 | 0.326171 | 0.531094 | — | — | — |
| is_stateless_fail.test | COMPILE_FAIL | 0.147294 | 0.335810 | 0.553056 | — | — | — |
| is_polymorphic_fail.test | COMPILE_FAIL | 0.137022 | 0.307803 | 0.510793 | — | — | — |
| is_nothrow_move_constructible_fail.test | COMPILE_FAIL | 0.137744 | 0.310226 | 0.535688 | — | — | — |
| is_nothrow_move_assignable_fail.test | COMPILE_FAIL | 0.140760 | 0.315750 | 0.509392 | — | — | — |
| is_list_constructible_fail.test | COMPILE_FAIL | 0.138908 | 0.319583 | 0.491947 | — | — | — |
| is_empty_fail.test | COMPILE_FAIL | 0.138010 | 0.327995 | 0.507993 | — | — | — |
| is_destructible_fail.test | COMPILE_FAIL | 0.139631 | 0.317229 | 0.491994 | — | — | — |
| is_default_constructible_fail.test | COMPILE_FAIL | 0.139637 | 0.314714 | 0.505930 | — | — | — |
| is_copy_constructible_fail.test | COMPILE_FAIL | 0.137195 | 0.324870 | 0.505257 | — | — | — |
| is_copy_assignable_fail.test | COMPILE_FAIL | 0.138276 | 0.326521 | 0.507644 | — | — | — |
| is_convertible_fail.test | COMPILE_FAIL | 0.136186 | 0.318069 | 0.500742 | — | — | — |
| is_convertible2_fail.test | COMPILE_FAIL | 0.140001 | 0.318853 | 0.508940 | — | — | — |
| is_constructible_fail.test | COMPILE_FAIL | 0.136204 | 0.314713 | 0.498792 | — | — | — |
| is_base_of_fail.test | COMPILE_FAIL | 0.134466 | 0.327930 | 0.505725 | — | — | — |
| is_assignable_fail.test | COMPILE_FAIL | 0.137343 | 0.315047 | 0.505241 | — | — | — |
| has_nothrow_destruct_fail.test | COMPILE_FAIL | 0.141068 | 0.316223 | 0.510031 | — | — | — |
| has_nothrow_copy_fail.test | COMPILE_FAIL | 0.140539 | 0.317200 | 0.516732 | — | — | — |
| has_nothrow_cons_fail.test | COMPILE_FAIL | 0.137992 | 0.328634 | 0.512076 | — | — | — |
| has_nothrow_assign_fail.test | COMPILE_FAIL | 0.139773 | 0.315859 | 0.507625 | — | — | — |
| common_type_fail.test | COMPILE_FAIL | 0.141063 | 0.314537 | 0.514142 | — | — | — |
| common_type2_fail.test | COMPILE_FAIL | 0.140160 | 0.314053 | 0.500662 | — | — | — |
| has_nothrow_assign_test_no_intrinsics.test | RUN | 0.221067 | 0.723182 | 1.469340 | 0.002042 | 0.001925 | 0.001926 |
| has_nothrow_constr_test_no_intrinsics.test | RUN | 0.210877 | 0.675293 | 1.428200 | 0.001743 | 0.001859 | 0.001786 |
| has_nothrow_copy_test_no_intrinsics.test | RUN | 0.216190 | 0.680271 | 1.428742 | 0.001846 | 0.001555 | 0.001911 |
| is_nothrow_move_assignable_test_no_intrinsics.test | RUN | 0.214385 | 0.697388 | 1.413295 | 0.001410 | 0.001466 | 0.001413 |
| is_nothrow_move_constructible_test_no_intrinsics.test | RUN | 0.133435 | 0.441528 | 0.804210 | 0.001426 | 0.001494 | 0.001569 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 1.000× | 0.997×, 1.003× | 0.992× |
| clang | 1.030× | 1.028×, 1.032× | 1.001× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1361 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43664060660).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| add_const_test.test | 10 | 0.001456s | 0.001475s | 0.001450s | byte equality observed |
| add_cv_test.test | 10 | 0.001480s | 0.001455s | 0.001487s | byte equality observed |
| add_lvalue_reference_test.test | 10 | 0.001475s | 0.001462s | 0.001477s | byte equality observed |
| add_pointer_test.test | 10 | 0.001474s | 0.001441s | 0.001495s | byte equality observed |
| add_reference_test.test | 10 | 0.001489s | 0.001462s | 0.001489s | byte equality observed |
| add_rvalue_reference_test.test | 10 | 0.001474s | 0.001465s | 0.001494s | byte equality observed |
| add_volatile_test.test | 10 | 0.001488s | 0.001469s | 0.001466s | byte equality observed |
| aligned_storage_a2_test.test | 10 | 0.001631s | 0.001613s | 0.001665s | byte equality observed |
| aligned_storage_empy_test.test | 10 | 0.001479s | 0.001483s | 0.001461s | byte equality observed |
| aligned_storage_test.test | 10 | 0.001625s | 0.001642s | 0.001611s | byte equality observed |
| alignment_of_a2_test.test | 10 | 0.001473s | 0.001461s | 0.001494s | byte equality observed |
| alignment_of_test.test | 10 | 0.001474s | 0.001503s | 0.001451s | byte equality observed |
| common_type_2_test.test | 10 | 0.001447s | 0.001438s | 0.001426s | byte equality observed |
| common_type_3_test.test | 10 | 0.001483s | 0.001487s | 0.001472s | byte equality observed |
| common_type_4_test.test | 10 | 0.001468s | 0.001499s | 0.001475s | byte equality observed |
| common_type_5_test.test | 10 | 0.001469s | 0.001458s | 0.001489s | byte equality observed |
| common_type_6_test.test | 10 | 0.001457s | 0.001466s | 0.001467s | byte equality observed |
| common_type_sfinae2_test.test | 10 | 0.001482s | 0.001449s | 0.001477s | byte equality observed |
| common_type_sfinae_test.test | 10 | 0.001468s | 0.001467s | 0.001488s | byte equality observed |
| common_type_test.test | 10 | 0.001458s | 0.001465s | 0.001433s | byte equality observed |
| conditional_test.test | 10 | 0.001467s | 0.001472s | 0.001500s | byte equality observed |
| conjunction_test.test | 10 | 0.001455s | 0.001480s | 0.001460s | byte equality observed |
| copy_cv_ref_test.test | 10 | 0.001468s | 0.001465s | 0.001483s | byte equality observed |
| copy_cv_test.test | 10 | 0.001462s | 0.001458s | 0.001462s | byte equality observed |
| copy_reference_test.test | 10 | 0.001469s | 0.001476s | 0.001475s | byte equality observed |
| cxx14_aliases_test.test | 10 | 0.001466s | 0.001476s | 0.001485s | byte equality observed |
| decay_test.test | 10 | 0.001491s | 0.001466s | 0.001473s | byte equality observed |
| detected_or_test.test | 10 | 0.001469s | 0.001467s | 0.001496s | byte equality observed |
| detected_test.test | 10 | 0.001475s | 0.001458s | 0.001493s | byte equality observed |
| disjunction_test.test | 10 | 0.001467s | 0.001466s | 0.001502s | byte equality observed |
| enable_if_test.test | 10 | 0.001474s | 0.001452s | 0.001463s | byte equality observed |
| extent_test.test | 10 | 0.001461s | 0.001482s | 0.001444s | byte equality observed |
| floating_point_promotion_test.test | 10 | 0.001447s | 0.001463s | 0.001465s | byte equality observed |
| function_traits_test.test | 10 | 0.001483s | 0.001457s | 0.001472s | byte equality observed |
| has_binary_classes0_test.test | 10 | 0.001446s | 0.001469s | 0.001474s | byte equality observed |
| has_binary_classes1_test.test | 10 | 0.001465s | 0.001446s | 0.001485s | byte equality observed |
| has_binary_classes2_test.test | 10 | 0.001458s | 0.001448s | 0.001468s | byte equality observed |
| has_binary_classes3_test.test | 10 | 0.001450s | 0.001469s | 0.001502s | byte equality observed |
| has_binary_classes4_test.test | 10 | 0.001453s | 0.001500s | 0.001473s | byte equality observed |
| has_binary_classes5_test.test | 10 | 0.001460s | 0.001463s | 0.001453s | byte equality observed |
| has_binary_classes6_test.test | 10 | 0.001470s | 0.001453s | 0.001490s | byte equality observed |
| has_binary_classes7_test.test | 10 | 0.001460s | 0.001457s | 0.001469s | byte equality observed |
| has_binary_classes8_test.test | 10 | 0.001445s | 0.001463s | 0.001443s | byte equality observed |
| has_binary_classes9_test.test | 10 | 0.001489s | 0.001441s | 0.001474s | byte equality observed |
| has_bit_and_assign_test.test | 10 | 0.001435s | 0.001479s | 0.001513s | byte equality observed |
| has_bit_and_test.test | 10 | 0.001445s | 0.001462s | 0.001473s | byte equality observed |
| has_bit_or_assign_test.test | 10 | 0.001469s | 0.001444s | 0.001466s | byte equality observed |
| has_bit_or_test.test | 10 | 0.001485s | 0.001462s | 0.001467s | byte equality observed |
| has_bit_xor_assign_test.test | 10 | 0.001490s | 0.001475s | 0.001476s | byte equality observed |
| has_bit_xor_test.test | 10 | 0.001469s | 0.001493s | 0.001456s | byte equality observed |
| has_complement_test.test | 10 | 0.001462s | 0.001474s | 0.001435s | byte equality observed |
| has_dereference_test.test | 10 | 0.001469s | 0.001495s | 0.001467s | byte equality observed |
| has_divides_assign_test.test | 10 | 0.001449s | 0.001469s | 0.001455s | byte equality observed |
| has_divides_test.test | 10 | 0.001476s | 0.001451s | 0.001472s | byte equality observed |
| has_equal_to_test.test | 9 | 0.001489s | 0.001484s | 0.001447s | byte equality observed |
| has_greater_equal_test.test | 10 | 0.001446s | 0.001480s | 0.001490s | byte equality observed |
| has_greater_test.test | 10 | 0.001491s | 0.001470s | 0.001440s | byte equality observed |
| has_left_shift_assign_test.test | 10 | 0.001455s | 0.001471s | 0.001446s | byte equality observed |
| has_left_shift_test.test | 8 | 0.001466s | 0.001442s | 0.001518s | byte equality observed |
| has_less_equal_test.test | 10 | 0.001452s | 0.001475s | 0.001462s | byte equality observed |
| has_less_test.test | 10 | 0.001460s | 0.001460s | 0.001466s | byte equality observed |
| has_logical_and_test.test | 10 | 0.001461s | 0.001463s | 0.001504s | byte equality observed |
| has_logical_not_test.test | 10 | 0.001467s | 0.001454s | 0.001482s | byte equality observed |
| has_logical_or_test.test | 10 | 0.001481s | 0.001471s | 0.001497s | byte equality observed |
| has_minus_assign_test.test | 10 | 0.001480s | 0.001468s | 0.001497s | byte equality observed |
| has_minus_test.test | 10 | 0.001431s | 0.001471s | 0.001474s | byte equality observed |
| has_modulus_assign_test.test | 9 | 0.001452s | 0.001471s | 0.001494s | byte equality observed |
| has_modulus_test.test | 10 | 0.001477s | 0.001464s | 0.001469s | byte equality observed |
| has_multiplies_assign_test.test | 10 | 0.001475s | 0.001463s | 0.001491s | byte equality observed |
| has_multiplies_test.test | 10 | 0.001474s | 0.001483s | 0.001492s | byte equality observed |
| has_negate_test.test | 10 | 0.001472s | 0.001437s | 0.001498s | byte equality observed |
| has_not_equal_to_test.test | 10 | 0.001481s | 0.001481s | 0.001486s | byte equality observed |
| has_nothrow_assign_test.test | 10 | 0.001478s | 0.001468s | 0.001461s | byte equality observed |
| has_nothrow_assign_test_no_intrinsics.test | 10 | 0.001457s | 0.001452s | 0.001451s | byte equality observed |
| has_nothrow_constr_test.test | 10 | 0.001443s | 0.001445s | 0.001458s | byte equality observed |
| has_nothrow_constr_test_no_intrinsics.test | 10 | 0.001442s | 0.001464s | 0.001480s | byte equality observed |
| has_nothrow_copy_test.test | 10 | 0.001475s | 0.001484s | 0.001469s | byte equality observed |
| has_nothrow_copy_test_no_intrinsics.test | 10 | 0.001471s | 0.001476s | 0.001458s | byte equality observed |
| has_nothrow_destructor_test.test | 10 | 0.001466s | 0.001487s | 0.001465s | byte equality observed |
| has_operator_new_test.test | 10 | 0.001463s | 0.001460s | 0.001512s | byte equality observed |
| has_plus_assign_test.test | 10 | 0.001472s | 0.001442s | 0.001476s | byte equality observed |
| has_plus_test.test | 10 | 0.001462s | 0.001451s | 0.001464s | byte equality observed |
| has_post_decrement_test.test | 10 | 0.001462s | 0.001509s | 0.001464s | byte equality observed |
| has_post_increment_test.test | 10 | 0.001430s | 0.001461s | 0.001505s | byte equality observed |
| has_postfix_classes0_test.test | 10 | 0.001449s | 0.001502s | 0.001478s | byte equality observed |
| has_postfix_classes1_test.test | 10 | 0.001465s | 0.001449s | 0.001434s | byte equality observed |
| has_postfix_classes2_test.test | 10 | 0.001471s | 0.001465s | 0.001478s | byte equality observed |
| has_postfix_classes3_test.test | 10 | 0.001473s | 0.001477s | 0.001470s | byte equality observed |
| has_pre_decrement_test.test | 10 | 0.001467s | 0.001476s | 0.001484s | byte equality observed |
| has_pre_increment_test.test | 10 | 0.001477s | 0.001493s | 0.001474s | byte equality observed |
| has_prefix_classes0_test.test | 10 | 0.001467s | 0.001460s | 0.001458s | byte equality observed |
| has_prefix_classes1_test.test | 10 | 0.001464s | 0.001491s | 0.001476s | byte equality observed |
| has_prefix_classes2_test.test | 10 | 0.001481s | 0.001456s | 0.001476s | byte equality observed |
| has_prefix_classes3_test.test | 10 | 0.001462s | 0.001466s | 0.001453s | byte equality observed |
| has_right_shift_assign_test.test | 10 | 0.001476s | 0.001464s | 0.001447s | byte equality observed |
| has_right_shift_test.test | 10 | 0.001478s | 0.001481s | 0.001472s | byte equality observed |
| has_trivial_assign_test.test | 10 | 0.001576s | 0.001548s | 0.001554s | byte equality observed |
| has_trivial_constr_test.test | 10 | 0.001511s | 0.001555s | 0.001539s | native test oracle; output varies |
| has_trivial_copy_test.test | 10 | 0.001531s | 0.001555s | 0.001581s | native test oracle; output varies |
| has_trivial_destructor_test.test | 10 | 0.001482s | 0.001476s | 0.001485s | byte equality observed |
| has_trivial_move_assign_test.test | 10 | 0.001474s | 0.001490s | 0.001478s | byte equality observed |
| has_trivial_move_constructor_test.test | 10 | 0.001456s | 0.001481s | 0.001472s | byte equality observed |
| has_unary_minus_test.test | 10 | 0.001465s | 0.001446s | 0.001475s | byte equality observed |
| has_unary_plus_test.test | 10 | 0.001466s | 0.001477s | 0.001489s | byte equality observed |
| has_virtual_destructor_test.test | 10 | 0.001476s | 0.001480s | 0.001443s | byte equality observed |
| integral_constant_test.test | 10 | 0.000653s | 0.000640s | 0.001473s | byte equality observed |
| is_abstract_test.test | 10 | 0.001484s | 0.001451s | 0.001461s | byte equality observed |
| is_arithmetic_test.test | 10 | 0.001447s | 0.001453s | 0.001471s | byte equality observed |
| is_array_test.test | 10 | 0.001476s | 0.001456s | 0.001467s | byte equality observed |
| is_assignable_test.test | 10 | 0.001443s | 0.001449s | 0.001465s | byte equality observed |
| is_base_and_derived_test.test | 10 | 0.001472s | 0.001446s | 0.001477s | byte equality observed |
| is_base_of_test.test | 10 | 0.001481s | 0.001463s | 0.001508s | byte equality observed |
| is_bounded_array_test.test | 10 | 0.001466s | 0.001479s | 0.001474s | byte equality observed |
| is_class_test.test | 10 | 0.001474s | 0.001453s | 0.001476s | byte equality observed |
| is_complete_test.test | 10 | 0.001444s | 0.001497s | 0.001480s | byte equality observed |
| is_complex_test.test | 10 | 0.001436s | 0.001453s | 0.001434s | byte equality observed |
| is_compound_test.test | 10 | 0.001462s | 0.001472s | 0.001456s | byte equality observed |
| is_const_test.test | 10 | 0.001473s | 0.001489s | 0.001431s | byte equality observed |
| is_constructible_test.test | 10 | 0.001457s | 0.001488s | 0.001442s | byte equality observed |
| is_convertible_test.test | 10 | 0.001454s | 0.001471s | 0.001497s | byte equality observed |
| is_copy_assignable_test.test | 10 | 0.001452s | 0.001480s | 0.001449s | byte equality observed |
| is_copy_constructible_test.test | 10 | 0.001459s | 0.001484s | 0.001483s | byte equality observed |
| is_default_constr_test.test | 10 | 0.001464s | 0.001475s | 0.001468s | byte equality observed |
| is_destructible_test.test | 10 | 0.001452s | 0.001467s | 0.001465s | byte equality observed |
| is_detected_exact_test.test | 10 | 0.001457s | 0.001467s | 0.001473s | byte equality observed |
| is_detected_test.test | 10 | 0.001459s | 0.001461s | 0.001476s | byte equality observed |
| is_empty_test.test | 10 | 0.001454s | 0.001487s | 0.001477s | byte equality observed |
| is_enum_test.test | 10 | 0.001465s | 0.001463s | 0.001434s | byte equality observed |
| is_final_test.test | 10 | 0.001463s | 0.001465s | 0.001484s | byte equality observed |
| is_float_test.test | 10 | 0.001466s | 0.001444s | 0.001462s | byte equality observed |
| is_floating_point_test.test | 10 | 0.001460s | 0.001459s | 0.001433s | byte equality observed |
| is_function_test.test | 10 | 0.001469s | 0.001462s | 0.001480s | byte equality observed |
| is_fundamental_test.test | 10 | 0.001457s | 0.001445s | 0.001468s | byte equality observed |
| is_integral_test.test | 10 | 0.001468s | 0.001483s | 0.001474s | byte equality observed |
| is_list_constructible_test.test | 10 | 0.001463s | 0.001471s | 0.001486s | byte equality observed |
| is_lvalue_reference_test.test | 10 | 0.001439s | 0.001490s | 0.001481s | byte equality observed |
| is_member_func_test.test | 10 | 0.001462s | 0.001478s | 0.001429s | byte equality observed |
| is_member_obj_test.test | 10 | 0.001475s | 0.001490s | 0.001483s | byte equality observed |
| is_member_pointer_test.test | 10 | 0.001487s | 0.001454s | 0.001463s | byte equality observed |
| is_noncopyable_test.test | 10 | 0.001465s | 0.001494s | 0.001475s | byte equality observed |
| is_nothrow_move_assignable_test.test | 10 | 0.001456s | 0.001497s | 0.001488s | byte equality observed |
| is_nothrow_move_assignable_test_no_intrinsics.test | 10 | 0.001481s | 0.001452s | 0.001495s | byte equality observed |
| is_nothrow_move_constructible_test.test | 10 | 0.001451s | 0.001455s | 0.001492s | byte equality observed |
| is_nothrow_move_constructible_test_no_intrinsics.test | 10 | 0.001478s | 0.001485s | 0.001441s | byte equality observed |
| is_nothrow_swappable_test.test | 10 | 0.001456s | 0.001458s | 0.001466s | byte equality observed |
| is_object_test.test | 10 | 0.001444s | 0.001483s | 0.001495s | byte equality observed |
| is_pod_test.test | 10 | 0.001465s | 0.001445s | 0.001477s | byte equality observed |
| is_pointer_test.test | 10 | 0.001437s | 0.001453s | 0.001474s | byte equality observed |
| is_polymorphic_test.test | 10 | 0.001477s | 0.001485s | 0.001468s | byte equality observed |
| is_reference_test.test | 10 | 0.001458s | 0.001509s | 0.001460s | byte equality observed |
| is_rvalue_reference_test.test | 10 | 0.001456s | 0.001470s | 0.001470s | byte equality observed |
| is_same_test.test | 10 | 0.001447s | 0.001490s | 0.001474s | byte equality observed |
| is_scalar_test.test | 10 | 0.001450s | 0.001480s | 0.001490s | byte equality observed |
| is_scoped_enum_test.test | 10 | 0.001468s | 0.001466s | 0.001488s | byte equality observed |
| is_signed_test.test | 10 | 0.001447s | 0.001452s | 0.001470s | byte equality observed |
| is_stateless_test.test | 10 | 0.001471s | 0.001508s | 0.001454s | byte equality observed |
| is_swappable_test.test | 10 | 0.001472s | 0.001462s | 0.001444s | byte equality observed |
| is_trivially_copyable_test.test | 10 | 0.001505s | 0.001498s | 0.001536s | byte equality observed |
| is_unbounded_array_test.test | 10 | 0.001464s | 0.001481s | 0.001499s | byte equality observed |
| is_union_test.test | 10 | 0.001476s | 0.001446s | 0.001436s | byte equality observed |
| is_unscoped_enum_test.test | 10 | 0.001456s | 0.001475s | 0.001474s | byte equality observed |
| is_unsigned_test.test | 10 | 0.001462s | 0.001467s | 0.001478s | byte equality observed |
| is_virtual_base_of_test.test | 10 | 0.001493s | 0.001463s | 0.001480s | byte equality observed |
| is_void_test.test | 10 | 0.001465s | 0.001469s | 0.001475s | byte equality observed |
| is_volatile_test.test | 10 | 0.001468s | 0.001468s | 0.001483s | byte equality observed |
| make_signed_test.test | 10 | 0.001464s | 0.001461s | 0.001478s | byte equality observed |
| make_unsigned_test.test | 10 | 0.001474s | 0.001466s | 0.001479s | byte equality observed |
| make_void_test.test | 10 | 0.001490s | 0.001515s | 0.001484s | byte equality observed |
| mpl_interop_test1.test | 10 | 0.000649s | 0.000651s | 0.001484s | byte equality observed |
| mpl_interop_test2.test | 10 | 0.000653s | 0.000631s | 0.001460s | byte equality observed |
| mpl_interop_test3.test | 10 | 0.000644s | 0.000658s | 0.001459s | byte equality observed |
| negation_test.test | 10 | 0.001531s | 0.001529s | 0.001450s | byte equality observed |
| promote_basic_test.test | 10 | 0.000656s | 0.000661s | 0.001455s | byte equality observed |
| promote_enum_msvc_bug_test.test | 10 | 0.000657s | 0.000678s | 0.001443s | byte equality observed |
| promote_enum_test.test | 10 | 0.000655s | 0.000654s | 0.001474s | byte equality observed |
| promote_mpl_test.test | 10 | 0.000643s | 0.000663s | 0.001436s | byte equality observed |
| rank_test.test | 10 | 0.001505s | 0.001473s | 0.001477s | byte equality observed |
| remove_all_extents_test.test | 10 | 0.001468s | 0.001471s | 0.001458s | byte equality observed |
| remove_bounds_test.test | 10 | 0.001493s | 0.001500s | 0.001460s | byte equality observed |
| remove_const_test.test | 10 | 0.001490s | 0.001469s | 0.001496s | byte equality observed |
| remove_cv_ref_test.test | 10 | 0.001471s | 0.001470s | 0.001454s | byte equality observed |
| remove_cv_test.test | 10 | 0.001467s | 0.001460s | 0.001432s | byte equality observed |
| remove_extent_test.test | 10 | 0.001488s | 0.001465s | 0.001473s | byte equality observed |
| remove_pointer_test.test | 10 | 0.001481s | 0.001448s | 0.001459s | byte equality observed |
| remove_reference_test.test | 9 | 0.001468s | 0.001453s | 0.001496s | byte equality observed |
| remove_volatile_test.test | 10 | 0.001476s | 0.001477s | 0.001453s | byte equality observed |
| tricky_abstract_type_test.test | 10 | 0.001480s | 0.001436s | 0.001476s | byte equality observed |
| tricky_add_pointer_test.test | 10 | 0.001462s | 0.001423s | 0.001441s | byte equality observed |
| tricky_function_type_test.test | 10 | 0.001455s | 0.001474s | 0.001457s | byte equality observed |
| tricky_incomplete_type_test.test | 10 | 0.001482s | 0.001465s | 0.001435s | byte equality observed |
| tricky_is_enum_test.test | 10 | 0.001494s | 0.001450s | 0.001476s | byte equality observed |
| tricky_partial_spec_test.test | 10 | 0.001472s | 0.001460s | 0.001482s | byte equality observed |
| tricky_rvalue_test.test | 10 | 0.001463s | 0.001471s | 0.001441s | byte equality observed |
| type_identity_test.test | 10 | 0.001473s | 0.001476s | 0.001491s | byte equality observed |
| type_traits_test.test | 10 | 0.000634s | 0.000640s | 0.001478s | byte equality observed |
| type_with_alignment_test.test | 10 | 0.001652s | 0.001632s | 0.001627s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43664060660).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
