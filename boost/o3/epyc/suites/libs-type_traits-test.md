# libs/type_traits/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| type_with_alignment_test.test | RUN | 0.158605 | 0.440202 | 0.774699 | 0.001858 | 0.001862 | 0.001533 |
| type_traits_test.test | RUN | 0.225700 | 0.461777 | 0.787737 | 0.000663 | 0.000751 | 0.001595 |
| type_identity_test.test | RUN | 0.450838 | 1.738018 | 4.487133 | 0.001743 | 0.001615 | 0.001951 |
| tricky_rvalue_test.test | RUN | 0.146201 | 0.358168 | 0.599945 | 0.001930 | 0.001782 | 0.001821 |
| tricky_partial_spec_test.test | RUN | 0.175599 | 0.510346 | 1.006324 | 0.002040 | 0.001753 | 0.001942 |
| tricky_is_enum_test.test | RUN | 0.143719 | 0.340998 | 0.531217 | 0.001896 | 0.001825 | 0.001935 |
| tricky_incomplete_type_test.test | RUN | 0.224414 | 0.532697 | 0.901752 | 0.002097 | 0.001873 | 0.001860 |
| tricky_function_type_test.test | RUN | 0.186554 | 0.561787 | 0.994405 | 0.001754 | 0.001840 | 0.001634 |
| tricky_add_pointer_test.test | RUN | 0.288313 | 1.023386 | 2.511167 | 0.001888 | 0.002075 | 0.002105 |
| tricky_abstract_type_test.test | RUN | 0.150629 | 0.328893 | 0.565369 | 0.001675 | 0.001715 | 0.001798 |
| remove_volatile_test.test | RUN | 0.405558 | 1.422022 | 3.900724 | 0.002010 | 0.001947 | 0.002039 |
| remove_reference_test.test | RUN | 0.426846 | 1.533687 | 4.081050 | 0.002045 | 0.001847 | 0.002014 |
| remove_pointer_test.test | RUN | 0.435438 | 1.564854 | 4.309163 | 0.001652 | 0.001860 | 0.001806 |
| remove_extent_test.test | RUN | 0.414069 | 1.526303 | 4.103899 | 0.001706 | 0.002051 | 0.001620 |
| remove_cv_test.test | RUN | 0.415434 | 1.509322 | 4.118701 | 0.002084 | 0.002000 | 0.001992 |
| remove_cv_ref_test.test | RUN | 0.904527 | 3.626097 | 9.965849 | 0.001619 | 0.001770 | 0.001981 |
| remove_const_test.test | RUN | 0.408074 | 1.441593 | 3.935040 | 0.001889 | 0.001882 | 0.001646 |
| remove_bounds_test.test | RUN | 0.423212 | 1.499760 | 4.136521 | 0.001982 | 0.002001 | 0.002052 |
| remove_all_extents_test.test | RUN | 0.420454 | 1.596892 | 4.006332 | 0.001915 | 0.001879 | 0.001527 |
| rank_test.test | RUN | 0.151517 | 0.366782 | 0.597676 | 0.001662 | 0.001784 | 0.002064 |
| promote_mpl_test.test | RUN | 0.127645 | 0.319862 | 0.407065 | 0.000740 | 0.000819 | 0.001851 |
| promote_enum_test.test | RUN | 0.030263 | 0.081069 | 0.100354 | 0.000762 | 0.000881 | 0.002018 |
| promote_enum_msvc_bug_test.test | RUN | 0.025897 | 0.067927 | 0.080714 | 0.000789 | 0.000895 | 0.001937 |
| promote_basic_test.test | RUN | 0.033903 | 0.092246 | 0.106577 | 0.000683 | 0.000745 | 0.002006 |
| negation_test.test | RUN | 0.144465 | 0.332778 | 0.559325 | 0.001714 | 0.001810 | 0.002040 |
| mpl_interop_test3.test | RUN | 0.119953 | 0.294419 | 0.365103 | 0.000697 | 0.000691 | 0.001954 |
| mpl_interop_test2.test | RUN | 0.044775 | 0.086494 | 0.085531 | 0.000747 | 0.000666 | 0.001853 |
| mpl_interop_test1.test | RUN | 0.022124 | 0.061541 | 0.070850 | 0.000643 | 0.000788 | 0.002018 |
| make_void_test.test | RUN | 0.153110 | 0.352215 | 0.577615 | 0.001916 | 0.001982 | 0.001960 |
| make_unsigned_test.test | RUN | 0.171847 | 0.482839 | 0.875987 | 0.001670 | 0.001704 | 0.001869 |
| make_signed_test.test | RUN | 0.170782 | 0.482024 | 0.849703 | 0.001736 | 0.001856 | 0.001992 |
| is_volatile_test.test | RUN | 0.157916 | 0.395962 | 0.699440 | 0.001691 | 0.002098 | 0.001909 |
| is_void_test.test | RUN | 0.150307 | 0.371485 | 0.624809 | 0.001936 | 0.002174 | 0.002052 |
| is_virtual_base_of_test.test | RUN | 0.176136 | 0.490976 | 0.867567 | 0.001655 | 0.001854 | 0.001826 |
| is_unsigned_test.test | RUN | 0.152690 | 0.381926 | 0.644404 | 0.001760 | 0.001968 | 0.001872 |
| is_unscoped_enum_test.test | RUN | 0.145710 | 0.358708 | 0.559711 | 0.001782 | 0.001732 | 0.001876 |
| is_union_test.test | RUN | 0.166304 | 0.442204 | 0.811449 | 0.001907 | 0.002027 | 0.002014 |
| is_unbounded_array_test.test | RUN | 0.148170 | 0.369593 | 0.639702 | 0.001804 | 0.002140 | 0.002006 |
| is_trivially_copyable_test.test | RUN | 0.248597 | 0.789507 | 1.619432 | 0.001828 | 0.001921 | 0.001868 |
| is_swappable_test.test | RUN | 0.203341 | 0.596072 | 1.200894 | 0.001581 | 0.001838 | 0.002056 |
| is_stateless_test.test | RUN | 0.230016 | 0.693704 | 1.386929 | 0.001868 | 0.002064 | 0.002020 |
| is_signed_test.test | RUN | 0.157359 | 0.404513 | 0.695138 | 0.001697 | 0.001812 | 0.001897 |
| is_scoped_enum_test.test | RUN | 0.148855 | 0.341554 | 0.525167 | 0.001731 | 0.001593 | 0.001850 |
| is_scalar_test.test | RUN | 0.199028 | 0.627148 | 1.256640 | 0.001916 | 0.002186 | 0.001700 |
| is_same_test.test | RUN | 0.149943 | 0.366652 | 0.575991 | 0.001814 | 0.001818 | 0.002066 |
| is_rvalue_reference_test.test | RUN | 0.152674 | 0.402695 | 0.752142 | 0.001728 | 0.002000 | 0.001740 |
| is_reference_test.test | RUN | 0.160249 | 0.424584 | 0.716633 | 0.001796 | 0.001846 | 0.001592 |
| is_polymorphic_test.test | RUN | 0.160651 | 0.438173 | 0.781645 | 0.001508 | 0.002086 | 0.001903 |
| is_pointer_test.test | RUN | 0.161470 | 0.429768 | 0.785554 | 0.001841 | 0.001686 | 0.002060 |
| is_pod_test.test | RUN | 0.215993 | 0.708500 | 1.442634 | 0.001755 | 0.002318 | 0.001946 |
| is_object_test.test | RUN | 0.147692 | 0.356212 | 0.527063 | 0.001687 | 0.001864 | 0.001794 |
| is_nothrow_swappable_test.test | RUN | 0.213763 | 0.625004 | 1.331061 | 0.001929 | 0.001986 | 0.001965 |
| is_nothrow_move_constructible_test.test | RUN | 0.216176 | 0.666754 | 1.413072 | 0.001746 | 0.001684 | 0.001759 |
| is_nothrow_move_assignable_test.test | RUN | 0.213104 | 0.680389 | 1.346816 | 0.001784 | 0.001743 | 0.001728 |
| is_noncopyable_test.test | RUN | 0.150945 | 0.367774 | 0.578625 | 0.001716 | 0.001903 | 0.001880 |
| is_member_pointer_test.test | RUN | 0.153018 | 0.365408 | 0.602900 | 0.001990 | 0.001916 | 0.002011 |
| is_member_obj_test.test | RUN | 0.150276 | 0.374207 | 0.626855 | 0.001658 | 0.001924 | 0.001763 |
| is_member_func_test.test | RUN | 0.157823 | 0.397939 | 0.658038 | 0.001885 | 0.001822 | 0.001809 |
| is_lvalue_reference_test.test | RUN | 0.158852 | 0.421819 | 0.783411 | 0.001788 | 0.001725 | 0.001996 |
| is_list_constructible_test.test | RUN | 0.184984 | 0.485029 | 0.798098 | 0.001706 | 0.001891 | 0.001965 |
| is_integral_test.test | RUN | 0.192173 | 0.580156 | 1.176116 | 0.001890 | 0.001735 | 0.001864 |
| is_fundamental_test.test | RUN | 0.193471 | 0.620215 | 1.212147 | 0.001749 | 0.002186 | 0.001590 |
| is_function_test.test | RUN | 0.157248 | 0.399817 | 0.622456 | 0.001713 | 0.001761 | 0.002084 |
| is_floating_point_test.test | RUN | 0.159153 | 0.420177 | 0.739090 | 0.001723 | 0.002031 | 0.001918 |
| is_float_test.test | RUN | 0.157742 | 0.430880 | 0.771990 | 0.001725 | 0.001780 | 0.001645 |
| is_final_test.test | RUN | 0.163773 | 0.436439 | 0.774152 | 0.001715 | 0.001702 | 0.001684 |
| is_enum_test.test | RUN | 0.146858 | 0.358605 | 0.581177 | 0.001743 | 0.001560 | 0.001802 |
| is_empty_test.test | RUN | 0.159931 | 0.384719 | 0.698189 | 0.001961 | 0.001757 | 0.001930 |
| is_detected_test.test | RUN | 0.146496 | 0.334287 | 0.522692 | 0.001778 | 0.001698 | 0.001819 |
| is_detected_exact_test.test | RUN | 0.143747 | 0.332649 | 0.530680 | 0.001704 | 0.002120 | 0.002162 |
| is_destructible_test.test | RUN | 0.208406 | 0.678208 | 1.355916 | 0.001616 | 0.002088 | 0.001871 |
| is_default_constr_test.test | RUN | 0.211987 | 0.708412 | 1.427102 | 0.001975 | 0.001706 | 0.002058 |
| is_copy_constructible_test.test | RUN | 0.228467 | 0.733689 | 1.478389 | 0.001737 | 0.001833 | 0.001970 |
| is_copy_assignable_test.test | RUN | 0.223737 | 0.719224 | 1.446113 | 0.001871 | 0.001824 | 0.002036 |
| is_convertible_test.test | RUN | 0.219678 | 0.632988 | 1.182015 | 0.001873 | 0.002152 | 0.001606 |
| is_constructible_test.test | RUN | 0.167890 | 0.470744 | 0.825104 | 0.001791 | 0.001864 | 0.002039 |
| is_const_test.test | RUN | 0.157345 | 0.409500 | 0.649750 | 0.001604 | 0.001936 | 0.001875 |
| is_compound_test.test | RUN | 0.146658 | 0.333311 | 0.513218 | 0.001687 | 0.001911 | 0.001871 |
| is_complex_test.test | RUN | 0.193939 | 0.460587 | 0.780670 | 0.001739 | 0.002100 | 0.002054 |
| is_complete_test.test | RUN | 0.169566 | 0.479635 | 0.881685 | 0.001669 | 0.001697 | 0.001692 |
| is_class_test.test | RUN | 0.154788 | 0.417507 | 0.721798 | 0.001574 | 0.001507 | 0.001811 |
| is_bounded_array_test.test | RUN | 0.148682 | 0.385818 | 0.642311 | 0.001714 | 0.001958 | 0.001695 |
| is_base_of_test.test | RUN | 0.160025 | 0.409680 | 0.717492 | 0.001878 | 0.001956 | 0.002030 |
| is_base_and_derived_test.test | RUN | 0.157874 | 0.392932 | 0.721360 | 0.001871 | 0.001790 | 0.002078 |
| is_assignable_test.test | RUN | 0.193320 | 0.575691 | 1.051764 | 0.001715 | 0.001888 | 0.001916 |
| is_array_test.test | RUN | 0.148534 | 0.401085 | 0.703009 | 0.001830 | 0.001820 | 0.001784 |
| is_arithmetic_test.test | RUN | 0.190209 | 0.585537 | 1.132149 | 0.001890 | 0.002076 | 0.001973 |
| is_abstract_test.test | RUN | 0.354639 | 1.612458 | 3.736653 | 0.002110 | 0.001540 | 0.001934 |
| integral_constant_test.test | RUN | 0.022796 | 0.064345 | 0.070666 | 0.000815 | 0.000879 | 0.001920 |
| has_virtual_destructor_test.test | RUN | 0.165166 | 0.468242 | 0.818852 | 0.002038 | 0.002016 | 0.002187 |
| has_unary_plus_test.test | RUN | 0.331970 | 1.829333 | 2.968630 | 0.002476 | 0.001898 | 0.002075 |
| has_unary_minus_test.test | RUN | 0.336068 | 1.797571 | 2.911099 | 0.001727 | 0.001848 | 0.002044 |
| has_trivial_move_constructor_test.test | RUN | 0.223013 | 0.679285 | 1.451374 | 0.001852 | 0.001897 | 0.002036 |
| has_trivial_move_assign_test.test | RUN | 0.220763 | 0.636636 | 1.362243 | 0.001708 | 0.001924 | 0.002070 |
| has_trivial_destructor_test.test | RUN | 0.219093 | 0.641776 | 1.416650 | 0.001742 | 0.001662 | 0.002006 |
| has_trivial_copy_test.test | RUN | 0.227902 | 0.725557 | 1.446699 | 0.002159 | 0.002198 | 0.002164 |
| has_trivial_constr_test.test | RUN | 0.230176 | 0.732269 | 1.468962 | 0.001938 | 0.001856 | 0.002182 |
| has_trivial_assign_test.test | RUN | 0.223434 | 0.729408 | 1.475449 | 0.002020 | 0.001800 | 0.002230 |
| has_right_shift_test.test | RUN | 0.348858 | 1.401588 | 3.084464 | 0.001858 | 0.001924 | 0.002077 |
| has_right_shift_assign_test.test | RUN | 0.333961 | 1.295499 | 2.936373 | 0.001764 | 0.002056 | 0.002022 |
| has_prefix_classes3_test.test | RUN | 0.241556 | 0.746154 | 1.562501 | 0.001780 | 0.001715 | 0.002042 |
| has_prefix_classes2_test.test | RUN | 0.243770 | 0.747383 | 1.535664 | 0.001537 | 0.001805 | 0.001943 |
| has_prefix_classes1_test.test | RUN | 0.239539 | 0.745670 | 1.527016 | 0.001868 | 0.002106 | 0.002012 |
| has_prefix_classes0_test.test | RUN | 0.237749 | 0.762406 | 1.510536 | 0.001714 | 0.002072 | 0.002020 |
| has_pre_increment_test.test | RUN | 0.326303 | 1.834386 | 2.912723 | 0.001949 | 0.002052 | 0.001768 |
| has_pre_decrement_test.test | RUN | 0.321750 | 1.845391 | 2.892110 | 0.001832 | 0.002069 | 0.001865 |
| has_postfix_classes3_test.test | RUN | 0.235252 | 0.761319 | 1.551756 | 0.002015 | 0.001806 | 0.001902 |
| has_postfix_classes2_test.test | RUN | 0.234965 | 0.703692 | 1.521128 | 0.001755 | 0.001892 | 0.001814 |
| has_postfix_classes1_test.test | RUN | 0.234075 | 0.726649 | 1.506406 | 0.001787 | 0.002103 | 0.002056 |
| has_postfix_classes0_test.test | RUN | 0.239321 | 0.752432 | 1.492306 | 0.001808 | 0.002020 | 0.001968 |
| has_post_increment_test.test | RUN | 0.333676 | 1.864566 | 3.024108 | 0.002042 | 0.001853 | 0.001839 |
| has_post_decrement_test.test | RUN | 0.333108 | 1.857237 | 3.038844 | 0.001662 | 0.001876 | 0.001968 |
| has_plus_test.test | RUN | 0.335404 | 1.280648 | 2.918441 | 0.001868 | 0.001629 | 0.002122 |
| has_plus_assign_test.test | RUN | 0.351471 | 1.237148 | 3.032537 | 0.001697 | 0.001675 | 0.001688 |
| has_operator_new_test.test | RUN | 0.213881 | 0.681109 | 1.315614 | 0.001975 | 0.001955 | 0.001944 |
| has_nothrow_destructor_test.test | RUN | 0.227905 | 0.746971 | 1.470147 | 0.001761 | 0.001854 | 0.002006 |
| has_nothrow_copy_test.test | RUN | 0.217626 | 0.711017 | 1.423618 | 0.001959 | 0.001858 | 0.002040 |
| has_nothrow_constr_test.test | RUN | 0.209061 | 0.692088 | 1.388026 | 0.001839 | 0.001767 | 0.001504 |
| has_nothrow_assign_test.test | RUN | 0.210262 | 0.695878 | 1.383031 | 0.001903 | 0.002154 | 0.001719 |
| has_not_equal_to_test.test | RUN | 0.334403 | 1.770598 | 3.051032 | 0.001919 | 0.002142 | 0.002177 |
| has_negate_test.test | RUN | 0.319612 | 1.295767 | 2.883419 | 0.001840 | 0.001539 | 0.002057 |
| has_multiplies_test.test | RUN | 0.324268 | 1.258556 | 2.959029 | 0.001747 | 0.001950 | 0.001842 |
| has_multiplies_assign_test.test | RUN | 0.334424 | 1.268600 | 2.932044 | 0.001810 | 0.002072 | 0.002122 |
| has_modulus_test.test | RUN | 0.328943 | 1.314795 | 2.938346 | 0.001976 | 0.001756 | 0.002021 |
| has_modulus_assign_test.test | RUN | 0.327502 | 1.291011 | 2.950695 | 0.001998 | 0.001968 | 0.001947 |
| has_minus_test.test | RUN | 0.334590 | 1.278417 | 2.913475 | 0.001795 | 0.002102 | 0.001674 |
| has_minus_assign_test.test | RUN | 0.337721 | 1.305507 | 2.979915 | 0.001965 | 0.002024 | 0.001892 |
| has_logical_or_test.test | RUN | 0.333096 | 1.320626 | 2.973058 | 0.001694 | 0.001928 | 0.002070 |
| has_logical_not_test.test | RUN | 0.314541 | 1.264927 | 2.895307 | 0.001806 | 0.001934 | 0.001808 |
| has_logical_and_test.test | RUN | 0.329223 | 1.282410 | 2.903313 | 0.001898 | 0.001944 | 0.001968 |
| has_less_test.test | RUN | 0.328617 | 1.794044 | 2.976698 | 0.001867 | 0.001878 | 0.001995 |
| has_less_equal_test.test | RUN | 0.340633 | 1.807529 | 3.004539 | 0.001965 | 0.001940 | 0.002056 |
| has_left_shift_test.test | RUN | 0.371384 | 1.593965 | 3.617656 | 0.001868 | 0.001954 | 0.002048 |
| has_left_shift_assign_test.test | RUN | 0.321554 | 1.249186 | 2.900960 | 0.001917 | 0.001589 | 0.002077 |
| has_greater_test.test | RUN | 0.328025 | 1.818845 | 2.963295 | 0.001860 | 0.001984 | 0.001855 |
| has_greater_equal_test.test | RUN | 0.337217 | 1.765197 | 2.948958 | 0.002035 | 0.001824 | 0.002036 |
| has_equal_to_test.test | RUN | 0.333808 | 1.753442 | 2.988899 | 0.001840 | 0.001730 | 0.001744 |
| has_divides_test.test | RUN | 0.327063 | 1.250984 | 2.961269 | 0.001681 | 0.001785 | 0.002107 |
| has_divides_assign_test.test | RUN | 0.332664 | 1.239158 | 2.962047 | 0.001697 | 0.001964 | 0.001853 |
| has_dereference_test.test | RUN | 0.319820 | 1.204539 | 2.843025 | 0.001849 | 0.001912 | 0.002022 |
| has_complement_test.test | RUN | 0.319173 | 1.771647 | 2.964879 | 0.001743 | 0.001888 | 0.001702 |
| has_bit_xor_test.test | RUN | 0.320181 | 1.249065 | 2.910661 | 0.001830 | 0.002042 | 0.001936 |
| has_bit_xor_assign_test.test | RUN | 0.335210 | 1.237800 | 2.945190 | 0.001860 | 0.002060 | 0.001653 |
| has_bit_or_test.test | RUN | 0.330927 | 1.328259 | 2.938925 | 0.001833 | 0.001974 | 0.002064 |
| has_bit_or_assign_test.test | RUN | 0.321518 | 1.266505 | 2.978136 | 0.002031 | 0.002122 | 0.002032 |
| has_bit_and_test.test | RUN | 0.330748 | 1.307700 | 2.986843 | 0.001786 | 0.001933 | 0.001987 |
| has_bit_and_assign_test.test | RUN | 0.331689 | 1.268112 | 2.939596 | 0.002072 | 0.002038 | 0.001835 |
| has_binary_classes9_test.test | RUN | 0.367396 | 1.485645 | 3.179401 | 0.001780 | 0.002064 | 0.002059 |
| has_binary_classes8_test.test | RUN | 0.361094 | 1.490749 | 3.245677 | 0.001834 | 0.002101 | 0.001830 |
| has_binary_classes7_test.test | RUN | 0.365864 | 1.509422 | 3.224438 | 0.001768 | 0.002077 | 0.002166 |
| has_binary_classes6_test.test | RUN | 0.351072 | 1.468810 | 3.259154 | 0.002038 | 0.002004 | 0.001892 |
| has_binary_classes5_test.test | RUN | 0.360081 | 1.491435 | 3.240079 | 0.001859 | 0.002086 | 0.002068 |
| has_binary_classes4_test.test | RUN | 0.354233 | 1.504869 | 3.222917 | 0.001770 | 0.002006 | 0.001852 |
| has_binary_classes3_test.test | RUN | 0.356792 | 1.485184 | 3.241986 | 0.001871 | 0.002147 | 0.001947 |
| has_binary_classes2_test.test | RUN | 0.367099 | 1.516866 | 3.186547 | 0.001870 | 0.002006 | 0.001877 |
| has_binary_classes1_test.test | RUN | 0.359720 | 1.546503 | 3.203144 | 0.002147 | 0.002019 | 0.001940 |
| has_binary_classes0_test.test | RUN | 0.363362 | 1.506229 | 3.163701 | 0.002042 | 0.001858 | 0.002152 |
| function_traits_test.test | RUN | 0.154612 | 0.385098 | 0.727699 | 0.001856 | 0.001972 | 0.001880 |
| floating_point_promotion_test.test | RUN | 0.148609 | 0.393354 | 0.668923 | 0.001876 | 0.001914 | 0.001964 |
| extent_test.test | RUN | 0.158949 | 0.404161 | 0.640754 | 0.001877 | 0.001718 | 0.001745 |
| enable_if_test.test | RUN | 0.147696 | 0.341451 | 0.536797 | 0.002054 | 0.002115 | 0.001826 |
| disjunction_test.test | RUN | 0.148819 | 0.350948 | 0.589636 | 0.002047 | 0.001819 | 0.001755 |
| detected_test.test | RUN | 0.141545 | 0.338549 | 0.537138 | 0.001948 | 0.001970 | 0.001702 |
| detected_or_test.test | RUN | 0.143745 | 0.339863 | 0.571738 | 0.001954 | 0.001900 | 0.001735 |
| decay_test.test | RUN | 0.402243 | 1.437963 | 3.522799 | 0.001628 | 0.001622 | 0.002041 |
| cxx14_aliases_test.test | RUN | 0.232083 | 0.504009 | 0.865732 | 0.002012 | 0.001733 | 0.002024 |
| copy_reference_test.test | RUN | 0.151960 | 0.347303 | 0.584869 | 0.001804 | 0.001915 | 0.002116 |
| copy_cv_test.test | RUN | 0.146308 | 0.371846 | 0.611369 | 0.001859 | 0.001853 | 0.002106 |
| copy_cv_ref_test.test | RUN | 0.222477 | 0.624841 | 1.464608 | 0.001990 | 0.001858 | 0.002024 |
| conjunction_test.test | RUN | 0.146894 | 0.353673 | 0.543006 | 0.001803 | 0.001736 | 0.002037 |
| conditional_test.test | RUN | 0.146744 | 0.342916 | 0.534995 | 0.001796 | 0.001970 | 0.002052 |
| common_type_test.test | RUN | 0.199634 | 0.535365 | 1.127582 | 0.002010 | 0.001911 | 0.001637 |
| common_type_sfinae_test.test | RUN | 0.143709 | 0.325346 | 0.541656 | 0.001872 | 0.001696 | 0.002038 |
| common_type_sfinae2_test.test | RUN | 0.147649 | 0.338436 | 0.559204 | 0.001599 | 0.001543 | 0.001770 |
| common_type_6_test.test | RUN | 0.150779 | 0.350235 | 0.596546 | 0.001716 | 0.001660 | 0.001889 |
| common_type_5_test.test | RUN | 0.153311 | 0.345071 | 0.541431 | 0.001715 | 0.001800 | 0.001986 |
| common_type_4_test.test | RUN | 0.162902 | 0.386299 | 0.668568 | 0.001732 | 0.001918 | 0.002076 |
| common_type_3_test.test | RUN | 0.143079 | 0.323875 | 0.503472 | 0.001940 | 0.001791 | 0.001934 |
| common_type_2_test.test | RUN | 0.198885 | 0.541701 | 1.094084 | 0.001710 | 0.002230 | 0.001638 |
| alignment_of_test.test | RUN | 0.159129 | 0.413335 | 0.668568 | 0.001803 | 0.001808 | 0.001861 |
| alignment_of_a2_test.test | RUN | 0.158127 | 0.415776 | 0.689208 | 0.001956 | 0.002108 | 0.002091 |
| aligned_storage_test.test | RUN | 0.162944 | 0.413079 | 0.616632 | 0.001882 | 0.002060 | 0.001968 |
| aligned_storage_empy_test.test | RUN | 0.188422 | 0.460535 | 0.847825 | 0.001981 | 0.002035 | 0.001815 |
| aligned_storage_a2_test.test | RUN | 0.160995 | 0.393686 | 0.615604 | 0.001720 | 0.002217 | 0.002098 |
| add_volatile_test.test | RUN | 0.352649 | 1.274338 | 3.201768 | 0.001579 | 0.001962 | 0.002258 |
| add_rvalue_reference_test.test | RUN | 0.404652 | 1.413291 | 3.808880 | 0.002060 | 0.001932 | 0.001985 |
| add_reference_test.test | RUN | 0.385267 | 1.378009 | 3.763382 | 0.001853 | 0.002076 | 0.002167 |
| add_pointer_test.test | RUN | 0.242813 | 0.776730 | 1.910312 | 0.002095 | 0.001762 | 0.002047 |
| add_lvalue_reference_test.test | RUN | 0.391675 | 1.378563 | 3.711161 | 0.001714 | 0.001938 | 0.002051 |
| add_cv_test.test | RUN | 0.375171 | 1.381244 | 3.512725 | 0.001704 | 0.001843 | 0.001890 |
| add_const_test.test | RUN | 0.369357 | 1.293959 | 3.480607 | 0.001956 | 0.001671 | 0.001955 |
| is_virtual_base_of_fail.test | COMPILE_FAIL | 0.141043 | 0.323283 | 0.528476 | — | — | — |
| is_stateless_fail.test | COMPILE_FAIL | 0.136145 | 0.334028 | 0.537688 | — | — | — |
| is_polymorphic_fail.test | COMPILE_FAIL | 0.133683 | 0.301801 | 0.512222 | — | — | — |
| is_nothrow_move_constructible_fail.test | COMPILE_FAIL | 0.138214 | 0.305409 | 0.519325 | — | — | — |
| is_nothrow_move_assignable_fail.test | COMPILE_FAIL | 0.137195 | 0.312301 | 0.470068 | — | — | — |
| is_list_constructible_fail.test | COMPILE_FAIL | 0.143429 | 0.310389 | 0.472350 | — | — | — |
| is_empty_fail.test | COMPILE_FAIL | 0.138588 | 0.317248 | 0.486879 | — | — | — |
| is_destructible_fail.test | COMPILE_FAIL | 0.136273 | 0.314597 | 0.490822 | — | — | — |
| is_default_constructible_fail.test | COMPILE_FAIL | 0.136985 | 0.310273 | 0.514980 | — | — | — |
| is_copy_constructible_fail.test | COMPILE_FAIL | 0.138662 | 0.311184 | 0.521422 | — | — | — |
| is_copy_assignable_fail.test | COMPILE_FAIL | 0.136561 | 0.314520 | 0.501739 | — | — | — |
| is_convertible_fail.test | COMPILE_FAIL | 0.137659 | 0.312978 | 0.486623 | — | — | — |
| is_convertible2_fail.test | COMPILE_FAIL | 0.137787 | 0.326388 | 0.514796 | — | — | — |
| is_constructible_fail.test | COMPILE_FAIL | 0.141634 | 0.307825 | 0.519444 | — | — | — |
| is_base_of_fail.test | COMPILE_FAIL | 0.139376 | 0.320904 | 0.487686 | — | — | — |
| is_assignable_fail.test | COMPILE_FAIL | 0.136365 | 0.306587 | 0.491724 | — | — | — |
| has_nothrow_destruct_fail.test | COMPILE_FAIL | 0.133111 | 0.320568 | 0.515607 | — | — | — |
| has_nothrow_copy_fail.test | COMPILE_FAIL | 0.141531 | 0.312060 | 0.513055 | — | — | — |
| has_nothrow_cons_fail.test | COMPILE_FAIL | 0.138037 | 0.317812 | 0.504925 | — | — | — |
| has_nothrow_assign_fail.test | COMPILE_FAIL | 0.136679 | 0.308099 | 0.509083 | — | — | — |
| common_type_fail.test | COMPILE_FAIL | 0.140255 | 0.283051 | 0.516417 | — | — | — |
| common_type2_fail.test | COMPILE_FAIL | 0.140493 | 0.282417 | 0.510728 | — | — | — |
| has_nothrow_assign_test_no_intrinsics.test | RUN | 0.219734 | 0.710967 | 1.458093 | 0.001846 | 0.002086 | 0.002014 |
| has_nothrow_constr_test_no_intrinsics.test | RUN | 0.208432 | 0.694148 | 1.428897 | 0.001826 | 0.002074 | 0.001857 |
| has_nothrow_copy_test_no_intrinsics.test | RUN | 0.216427 | 0.678597 | 1.409565 | 0.001695 | 0.001964 | 0.001521 |
| is_nothrow_move_assignable_test_no_intrinsics.test | RUN | 0.215620 | 0.670105 | 1.355538 | 0.001500 | 0.001315 | 0.001651 |
| is_nothrow_move_constructible_test_no_intrinsics.test | RUN | 0.125811 | 0.455501 | 0.880253 | 0.001451 | 0.001410 | 0.001538 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 1.001× | 1.008×, 0.995× | 0.997× |
| clang | 1.016× | 1.022×, 1.010× | 1.006× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1360 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/thinkoid/cppgm/actions/runs/44661842949).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| add_const_test.test | 10 | 0.001461s | 0.001471s | 0.001463s | byte equality observed |
| add_cv_test.test | 10 | 0.001494s | 0.001436s | 0.001473s | byte equality observed |
| add_lvalue_reference_test.test | 10 | 0.001479s | 0.001436s | 0.001490s | byte equality observed |
| add_pointer_test.test | 10 | 0.001453s | 0.001439s | 0.001432s | byte equality observed |
| add_reference_test.test | 10 | 0.001462s | 0.001446s | 0.001453s | byte equality observed |
| add_rvalue_reference_test.test | 10 | 0.001491s | 0.001436s | 0.001469s | byte equality observed |
| add_volatile_test.test | 10 | 0.001458s | 0.001462s | 0.001474s | byte equality observed |
| aligned_storage_a2_test.test | 10 | 0.001639s | 0.001612s | 0.001606s | byte equality observed |
| aligned_storage_empy_test.test | 10 | 0.001476s | 0.001440s | 0.001477s | byte equality observed |
| aligned_storage_test.test | 10 | 0.001591s | 0.001604s | 0.001604s | byte equality observed |
| alignment_of_a2_test.test | 10 | 0.001463s | 0.001476s | 0.001481s | byte equality observed |
| alignment_of_test.test | 10 | 0.001456s | 0.001468s | 0.001461s | byte equality observed |
| common_type_2_test.test | 10 | 0.001481s | 0.001471s | 0.001448s | byte equality observed |
| common_type_3_test.test | 10 | 0.001448s | 0.001456s | 0.001449s | byte equality observed |
| common_type_4_test.test | 10 | 0.001460s | 0.001459s | 0.001458s | byte equality observed |
| common_type_5_test.test | 10 | 0.001448s | 0.001458s | 0.001477s | byte equality observed |
| common_type_6_test.test | 10 | 0.001459s | 0.001450s | 0.001478s | byte equality observed |
| common_type_sfinae2_test.test | 10 | 0.001453s | 0.001439s | 0.001473s | byte equality observed |
| common_type_sfinae_test.test | 10 | 0.001458s | 0.001424s | 0.001471s | byte equality observed |
| common_type_test.test | 10 | 0.001466s | 0.001450s | 0.001498s | byte equality observed |
| conditional_test.test | 10 | 0.001488s | 0.001419s | 0.001462s | byte equality observed |
| conjunction_test.test | 10 | 0.001467s | 0.001447s | 0.001470s | byte equality observed |
| copy_cv_ref_test.test | 10 | 0.001456s | 0.001446s | 0.001444s | byte equality observed |
| copy_cv_test.test | 10 | 0.001477s | 0.001429s | 0.001494s | byte equality observed |
| copy_reference_test.test | 10 | 0.001452s | 0.001446s | 0.001444s | byte equality observed |
| cxx14_aliases_test.test | 10 | 0.001470s | 0.001437s | 0.001467s | byte equality observed |
| decay_test.test | 10 | 0.001454s | 0.001445s | 0.001496s | byte equality observed |
| detected_or_test.test | 10 | 0.001430s | 0.001453s | 0.001486s | byte equality observed |
| detected_test.test | 10 | 0.001479s | 0.001445s | 0.001471s | byte equality observed |
| disjunction_test.test | 10 | 0.001448s | 0.001451s | 0.001465s | byte equality observed |
| enable_if_test.test | 10 | 0.001472s | 0.001467s | 0.001450s | byte equality observed |
| extent_test.test | 10 | 0.001468s | 0.001465s | 0.001512s | byte equality observed |
| floating_point_promotion_test.test | 10 | 0.001462s | 0.001474s | 0.001514s | byte equality observed |
| function_traits_test.test | 10 | 0.001448s | 0.001455s | 0.001473s | byte equality observed |
| has_binary_classes0_test.test | 10 | 0.001457s | 0.001438s | 0.001468s | byte equality observed |
| has_binary_classes1_test.test | 10 | 0.001466s | 0.001413s | 0.001457s | byte equality observed |
| has_binary_classes2_test.test | 10 | 0.001486s | 0.001471s | 0.001463s | byte equality observed |
| has_binary_classes3_test.test | 10 | 0.001464s | 0.001463s | 0.001452s | byte equality observed |
| has_binary_classes4_test.test | 10 | 0.001463s | 0.001424s | 0.001478s | byte equality observed |
| has_binary_classes5_test.test | 10 | 0.001455s | 0.001447s | 0.001477s | byte equality observed |
| has_binary_classes6_test.test | 10 | 0.001426s | 0.001458s | 0.001434s | byte equality observed |
| has_binary_classes7_test.test | 10 | 0.001466s | 0.001449s | 0.001466s | byte equality observed |
| has_binary_classes8_test.test | 10 | 0.001463s | 0.001458s | 0.001448s | byte equality observed |
| has_binary_classes9_test.test | 10 | 0.001456s | 0.001461s | 0.001462s | byte equality observed |
| has_bit_and_assign_test.test | 10 | 0.001459s | 0.001424s | 0.001474s | byte equality observed |
| has_bit_and_test.test | 10 | 0.001448s | 0.001428s | 0.001484s | byte equality observed |
| has_bit_or_assign_test.test | 10 | 0.001465s | 0.001459s | 0.001426s | byte equality observed |
| has_bit_or_test.test | 10 | 0.001476s | 0.001438s | 0.001486s | byte equality observed |
| has_bit_xor_assign_test.test | 10 | 0.001455s | 0.001458s | 0.001453s | byte equality observed |
| has_bit_xor_test.test | 10 | 0.001458s | 0.001465s | 0.001478s | byte equality observed |
| has_complement_test.test | 10 | 0.001468s | 0.001463s | 0.001476s | byte equality observed |
| has_dereference_test.test | 10 | 0.001447s | 0.001447s | 0.001464s | byte equality observed |
| has_divides_assign_test.test | 10 | 0.001457s | 0.001443s | 0.001453s | byte equality observed |
| has_divides_test.test | 10 | 0.001473s | 0.001452s | 0.001469s | byte equality observed |
| has_equal_to_test.test | 10 | 0.001445s | 0.001463s | 0.001448s | byte equality observed |
| has_greater_equal_test.test | 10 | 0.001444s | 0.001484s | 0.001425s | byte equality observed |
| has_greater_test.test | 10 | 0.001458s | 0.001465s | 0.001425s | byte equality observed |
| has_left_shift_assign_test.test | 10 | 0.001441s | 0.001455s | 0.001443s | byte equality observed |
| has_left_shift_test.test | 10 | 0.001457s | 0.001458s | 0.001503s | byte equality observed |
| has_less_equal_test.test | 10 | 0.001471s | 0.001426s | 0.001461s | byte equality observed |
| has_less_test.test | 10 | 0.001480s | 0.001460s | 0.001462s | byte equality observed |
| has_logical_and_test.test | 10 | 0.001446s | 0.001409s | 0.001463s | byte equality observed |
| has_logical_not_test.test | 10 | 0.001465s | 0.001453s | 0.001482s | byte equality observed |
| has_logical_or_test.test | 10 | 0.001459s | 0.001441s | 0.001508s | byte equality observed |
| has_minus_assign_test.test | 10 | 0.001451s | 0.001429s | 0.001461s | byte equality observed |
| has_minus_test.test | 10 | 0.001464s | 0.001416s | 0.001441s | byte equality observed |
| has_modulus_assign_test.test | 10 | 0.001454s | 0.001476s | 0.001444s | byte equality observed |
| has_modulus_test.test | 10 | 0.001444s | 0.001451s | 0.001493s | byte equality observed |
| has_multiplies_assign_test.test | 10 | 0.001467s | 0.001453s | 0.001458s | byte equality observed |
| has_multiplies_test.test | 10 | 0.001483s | 0.001454s | 0.001455s | byte equality observed |
| has_negate_test.test | 10 | 0.001476s | 0.001435s | 0.001431s | byte equality observed |
| has_not_equal_to_test.test | 10 | 0.001485s | 0.001437s | 0.001470s | byte equality observed |
| has_nothrow_assign_test.test | 10 | 0.001475s | 0.001439s | 0.001466s | byte equality observed |
| has_nothrow_assign_test_no_intrinsics.test | 10 | 0.001449s | 0.001438s | 0.001438s | byte equality observed |
| has_nothrow_constr_test.test | 10 | 0.001462s | 0.001446s | 0.001446s | byte equality observed |
| has_nothrow_constr_test_no_intrinsics.test | 10 | 0.001453s | 0.001444s | 0.001474s | byte equality observed |
| has_nothrow_copy_test.test | 10 | 0.001443s | 0.001470s | 0.001451s | byte equality observed |
| has_nothrow_copy_test_no_intrinsics.test | 10 | 0.001475s | 0.001437s | 0.001471s | byte equality observed |
| has_nothrow_destructor_test.test | 10 | 0.001466s | 0.001485s | 0.001449s | byte equality observed |
| has_operator_new_test.test | 10 | 0.001456s | 0.001457s | 0.001455s | byte equality observed |
| has_plus_assign_test.test | 10 | 0.001466s | 0.001433s | 0.001465s | byte equality observed |
| has_plus_test.test | 10 | 0.001448s | 0.001450s | 0.001452s | byte equality observed |
| has_post_decrement_test.test | 10 | 0.001446s | 0.001447s | 0.001504s | byte equality observed |
| has_post_increment_test.test | 10 | 0.001455s | 0.001456s | 0.001482s | byte equality observed |
| has_postfix_classes0_test.test | 10 | 0.001443s | 0.001420s | 0.001469s | byte equality observed |
| has_postfix_classes1_test.test | 10 | 0.001459s | 0.001450s | 0.001463s | byte equality observed |
| has_postfix_classes2_test.test | 10 | 0.001469s | 0.001453s | 0.001484s | byte equality observed |
| has_postfix_classes3_test.test | 10 | 0.001469s | 0.001415s | 0.001460s | byte equality observed |
| has_pre_decrement_test.test | 10 | 0.001453s | 0.001426s | 0.001441s | byte equality observed |
| has_pre_increment_test.test | 10 | 0.001457s | 0.001470s | 0.001434s | byte equality observed |
| has_prefix_classes0_test.test | 10 | 0.001487s | 0.001468s | 0.001474s | byte equality observed |
| has_prefix_classes1_test.test | 10 | 0.001463s | 0.001445s | 0.001470s | byte equality observed |
| has_prefix_classes2_test.test | 10 | 0.001450s | 0.001416s | 0.001458s | byte equality observed |
| has_prefix_classes3_test.test | 10 | 0.001429s | 0.001413s | 0.001462s | byte equality observed |
| has_right_shift_assign_test.test | 10 | 0.001446s | 0.001470s | 0.001464s | byte equality observed |
| has_right_shift_test.test | 10 | 0.001446s | 0.001480s | 0.001452s | byte equality observed |
| has_trivial_assign_test.test | 10 | 0.001547s | 0.001525s | 0.001558s | byte equality observed |
| has_trivial_constr_test.test | 10 | 0.001525s | 0.001506s | 0.001556s | native test oracle; output varies |
| has_trivial_copy_test.test | 10 | 0.001549s | 0.001516s | 0.001581s | native test oracle; output varies |
| has_trivial_destructor_test.test | 10 | 0.001465s | 0.001432s | 0.001461s | byte equality observed |
| has_trivial_move_assign_test.test | 10 | 0.001471s | 0.001448s | 0.001453s | byte equality observed |
| has_trivial_move_constructor_test.test | 10 | 0.001449s | 0.001440s | 0.001458s | byte equality observed |
| has_unary_minus_test.test | 10 | 0.001446s | 0.001466s | 0.001490s | byte equality observed |
| has_unary_plus_test.test | 10 | 0.001476s | 0.001442s | 0.001449s | byte equality observed |
| has_virtual_destructor_test.test | 10 | 0.001469s | 0.001456s | 0.001447s | byte equality observed |
| integral_constant_test.test | 10 | 0.000640s | 0.000634s | 0.001477s | byte equality observed |
| is_abstract_test.test | 9 | 0.001469s | 0.001444s | 0.001486s | byte equality observed |
| is_arithmetic_test.test | 9 | 0.001482s | 0.001463s | 0.001460s | byte equality observed |
| is_array_test.test | 10 | 0.001466s | 0.001441s | 0.001487s | byte equality observed |
| is_assignable_test.test | 10 | 0.001473s | 0.001439s | 0.001477s | byte equality observed |
| is_base_and_derived_test.test | 10 | 0.001456s | 0.001448s | 0.001466s | byte equality observed |
| is_base_of_test.test | 10 | 0.001462s | 0.001468s | 0.001463s | byte equality observed |
| is_bounded_array_test.test | 10 | 0.001446s | 0.001408s | 0.001466s | byte equality observed |
| is_class_test.test | 10 | 0.001433s | 0.001417s | 0.001450s | byte equality observed |
| is_complete_test.test | 9 | 0.001459s | 0.001437s | 0.001474s | byte equality observed |
| is_complex_test.test | 10 | 0.001455s | 0.001439s | 0.001452s | byte equality observed |
| is_compound_test.test | 10 | 0.001459s | 0.001459s | 0.001420s | byte equality observed |
| is_const_test.test | 10 | 0.001426s | 0.001447s | 0.001452s | byte equality observed |
| is_constructible_test.test | 10 | 0.001450s | 0.001437s | 0.001468s | byte equality observed |
| is_convertible_test.test | 10 | 0.001450s | 0.001439s | 0.001464s | byte equality observed |
| is_copy_assignable_test.test | 10 | 0.001460s | 0.001462s | 0.001453s | byte equality observed |
| is_copy_constructible_test.test | 10 | 0.001461s | 0.001442s | 0.001449s | byte equality observed |
| is_default_constr_test.test | 10 | 0.001457s | 0.001431s | 0.001474s | byte equality observed |
| is_destructible_test.test | 10 | 0.001449s | 0.001432s | 0.001470s | byte equality observed |
| is_detected_exact_test.test | 10 | 0.001445s | 0.001426s | 0.001460s | byte equality observed |
| is_detected_test.test | 10 | 0.001462s | 0.001450s | 0.001436s | byte equality observed |
| is_empty_test.test | 10 | 0.001464s | 0.001454s | 0.001498s | byte equality observed |
| is_enum_test.test | 10 | 0.001433s | 0.001449s | 0.001472s | byte equality observed |
| is_final_test.test | 10 | 0.001459s | 0.001447s | 0.001456s | byte equality observed |
| is_float_test.test | 10 | 0.001460s | 0.001446s | 0.001449s | byte equality observed |
| is_floating_point_test.test | 10 | 0.001446s | 0.001467s | 0.001471s | byte equality observed |
| is_function_test.test | 10 | 0.001433s | 0.001431s | 0.001475s | byte equality observed |
| is_fundamental_test.test | 10 | 0.001494s | 0.001419s | 0.001473s | byte equality observed |
| is_integral_test.test | 10 | 0.001429s | 0.001446s | 0.001460s | byte equality observed |
| is_list_constructible_test.test | 10 | 0.001442s | 0.001437s | 0.001462s | byte equality observed |
| is_lvalue_reference_test.test | 10 | 0.001464s | 0.001447s | 0.001459s | byte equality observed |
| is_member_func_test.test | 10 | 0.001457s | 0.001457s | 0.001480s | byte equality observed |
| is_member_obj_test.test | 10 | 0.001478s | 0.001428s | 0.001496s | byte equality observed |
| is_member_pointer_test.test | 10 | 0.001448s | 0.001431s | 0.001485s | byte equality observed |
| is_noncopyable_test.test | 10 | 0.001439s | 0.001420s | 0.001473s | byte equality observed |
| is_nothrow_move_assignable_test.test | 10 | 0.001436s | 0.001413s | 0.001472s | byte equality observed |
| is_nothrow_move_assignable_test_no_intrinsics.test | 10 | 0.001483s | 0.001451s | 0.001466s | byte equality observed |
| is_nothrow_move_constructible_test.test | 10 | 0.001464s | 0.001442s | 0.001463s | byte equality observed |
| is_nothrow_move_constructible_test_no_intrinsics.test | 10 | 0.001454s | 0.001457s | 0.001470s | byte equality observed |
| is_nothrow_swappable_test.test | 10 | 0.001464s | 0.001419s | 0.001457s | byte equality observed |
| is_object_test.test | 10 | 0.001433s | 0.001438s | 0.001424s | byte equality observed |
| is_pod_test.test | 10 | 0.001469s | 0.001431s | 0.001486s | byte equality observed |
| is_pointer_test.test | 10 | 0.001496s | 0.001426s | 0.001467s | byte equality observed |
| is_polymorphic_test.test | 10 | 0.001449s | 0.001450s | 0.001447s | byte equality observed |
| is_reference_test.test | 10 | 0.001475s | 0.001441s | 0.001466s | byte equality observed |
| is_rvalue_reference_test.test | 10 | 0.001444s | 0.001423s | 0.001438s | byte equality observed |
| is_same_test.test | 10 | 0.001449s | 0.001448s | 0.001472s | byte equality observed |
| is_scalar_test.test | 10 | 0.001450s | 0.001435s | 0.001463s | byte equality observed |
| is_scoped_enum_test.test | 10 | 0.001465s | 0.001429s | 0.001478s | byte equality observed |
| is_signed_test.test | 10 | 0.001466s | 0.001413s | 0.001433s | byte equality observed |
| is_stateless_test.test | 10 | 0.001448s | 0.001459s | 0.001445s | byte equality observed |
| is_swappable_test.test | 10 | 0.001466s | 0.001428s | 0.001464s | byte equality observed |
| is_trivially_copyable_test.test | 10 | 0.001515s | 0.001520s | 0.001515s | byte equality observed |
| is_unbounded_array_test.test | 10 | 0.001459s | 0.001430s | 0.001476s | byte equality observed |
| is_union_test.test | 10 | 0.001457s | 0.001443s | 0.001506s | byte equality observed |
| is_unscoped_enum_test.test | 10 | 0.001460s | 0.001452s | 0.001488s | byte equality observed |
| is_unsigned_test.test | 10 | 0.001451s | 0.001427s | 0.001453s | byte equality observed |
| is_virtual_base_of_test.test | 10 | 0.001466s | 0.001444s | 0.001486s | byte equality observed |
| is_void_test.test | 10 | 0.001467s | 0.001456s | 0.001487s | byte equality observed |
| is_volatile_test.test | 10 | 0.001454s | 0.001417s | 0.001430s | byte equality observed |
| make_signed_test.test | 10 | 0.001471s | 0.001435s | 0.001462s | byte equality observed |
| make_unsigned_test.test | 10 | 0.001491s | 0.001457s | 0.001449s | byte equality observed |
| make_void_test.test | 10 | 0.001469s | 0.001442s | 0.001466s | byte equality observed |
| mpl_interop_test1.test | 10 | 0.000642s | 0.000634s | 0.001469s | byte equality observed |
| mpl_interop_test2.test | 10 | 0.000666s | 0.000651s | 0.001470s | byte equality observed |
| mpl_interop_test3.test | 10 | 0.000654s | 0.000654s | 0.001494s | byte equality observed |
| negation_test.test | 10 | 0.001508s | 0.001500s | 0.001458s | byte equality observed |
| promote_basic_test.test | 10 | 0.000662s | 0.000654s | 0.001446s | byte equality observed |
| promote_enum_msvc_bug_test.test | 10 | 0.000654s | 0.000634s | 0.001458s | byte equality observed |
| promote_enum_test.test | 10 | 0.000658s | 0.000641s | 0.001458s | byte equality observed |
| promote_mpl_test.test | 10 | 0.000650s | 0.000642s | 0.001476s | byte equality observed |
| rank_test.test | 10 | 0.001492s | 0.001470s | 0.001462s | byte equality observed |
| remove_all_extents_test.test | 10 | 0.001469s | 0.001446s | 0.001482s | byte equality observed |
| remove_bounds_test.test | 10 | 0.001468s | 0.001433s | 0.001479s | byte equality observed |
| remove_const_test.test | 10 | 0.001472s | 0.001436s | 0.001477s | byte equality observed |
| remove_cv_ref_test.test | 10 | 0.001450s | 0.001440s | 0.001441s | byte equality observed |
| remove_cv_test.test | 10 | 0.001462s | 0.001439s | 0.001470s | byte equality observed |
| remove_extent_test.test | 10 | 0.001482s | 0.001469s | 0.001441s | byte equality observed |
| remove_pointer_test.test | 10 | 0.001489s | 0.001445s | 0.001494s | byte equality observed |
| remove_reference_test.test | 10 | 0.001464s | 0.001498s | 0.001494s | byte equality observed |
| remove_volatile_test.test | 10 | 0.001463s | 0.001465s | 0.001463s | byte equality observed |
| tricky_abstract_type_test.test | 10 | 0.001452s | 0.001439s | 0.001480s | byte equality observed |
| tricky_add_pointer_test.test | 10 | 0.001447s | 0.001429s | 0.001483s | byte equality observed |
| tricky_function_type_test.test | 10 | 0.001455s | 0.001438s | 0.001480s | byte equality observed |
| tricky_incomplete_type_test.test | 10 | 0.001456s | 0.001426s | 0.001458s | byte equality observed |
| tricky_is_enum_test.test | 10 | 0.001459s | 0.001442s | 0.001459s | byte equality observed |
| tricky_partial_spec_test.test | 10 | 0.001461s | 0.001436s | 0.001465s | byte equality observed |
| tricky_rvalue_test.test | 10 | 0.001465s | 0.001460s | 0.001459s | byte equality observed |
| type_identity_test.test | 10 | 0.001512s | 0.001438s | 0.001426s | byte equality observed |
| type_traits_test.test | 10 | 0.000657s | 0.000632s | 0.001444s | byte equality observed |
| type_with_alignment_test.test | 10 | 0.001624s | 0.001604s | 0.001616s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/thinkoid/cppgm/actions/runs/44661842949).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
