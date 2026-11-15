# libs/type_traits/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| type_with_alignment_test.test | RUN | 0.121370 | 0.333552 | 0.511037 | 0.001741 | 0.001597 | 0.001543 |
| type_traits_test.test | RUN | 0.168446 | 0.344460 | 0.507040 | 0.000725 | 0.000571 | 0.001450 |
| type_identity_test.test | RUN | 0.311108 | 1.190367 | 2.985499 | 0.001819 | 0.001900 | 0.001919 |
| tricky_rvalue_test.test | RUN | 0.112057 | 0.260809 | 0.394536 | 0.001790 | 0.001741 | 0.001706 |
| tricky_partial_spec_test.test | RUN | 0.138669 | 0.387414 | 0.628659 | 0.001537 | 0.001833 | 0.001822 |
| tricky_is_enum_test.test | RUN | 0.106384 | 0.262302 | 0.358471 | 0.001791 | 0.001843 | 0.001770 |
| tricky_incomplete_type_test.test | RUN | 0.181871 | 0.399610 | 0.632409 | 0.001587 | 0.001593 | 0.001824 |
| tricky_function_type_test.test | RUN | 0.139881 | 0.404410 | 0.692133 | 0.001651 | 0.001741 | 0.001448 |
| tricky_add_pointer_test.test | RUN | 0.213516 | 0.683540 | 1.661911 | 0.001797 | 0.001877 | 0.001840 |
| tricky_abstract_type_test.test | RUN | 0.118399 | 0.257433 | 0.382431 | 0.001819 | 0.001249 | 0.001526 |
| remove_volatile_test.test | RUN | 0.279587 | 1.019963 | 2.599674 | 0.001773 | 0.001824 | 0.001595 |
| remove_reference_test.test | RUN | 0.285838 | 1.040944 | 2.730926 | 0.001832 | 0.001725 | 0.001829 |
| remove_pointer_test.test | RUN | 0.302895 | 1.085599 | 2.914068 | 0.001774 | 0.001523 | 0.001643 |
| remove_extent_test.test | RUN | 0.301841 | 1.095906 | 2.776441 | 0.001668 | 0.001808 | 0.001676 |
| remove_cv_test.test | RUN | 0.289991 | 1.100541 | 2.762504 | 0.001885 | 0.001873 | 0.001815 |
| remove_cv_ref_test.test | RUN | 0.613070 | 2.553830 | 6.723293 | 0.001627 | 0.001424 | 0.001668 |
| remove_const_test.test | RUN | 0.287769 | 0.998738 | 2.618279 | 0.001746 | 0.001840 | 0.001678 |
| remove_bounds_test.test | RUN | 0.297786 | 1.088539 | 2.753527 | 0.001694 | 0.001493 | 0.001808 |
| remove_all_extents_test.test | RUN | 0.298265 | 1.049554 | 2.689531 | 0.001852 | 0.001701 | 0.001365 |
| rank_test.test | RUN | 0.115755 | 0.255016 | 0.358910 | 0.001520 | 0.001486 | 0.001738 |
| promote_mpl_test.test | RUN | 0.098665 | 0.229380 | 0.263396 | 0.000608 | 0.000674 | 0.001701 |
| promote_enum_test.test | RUN | 0.022116 | 0.056736 | 0.064121 | 0.000796 | 0.000800 | 0.001898 |
| promote_enum_msvc_bug_test.test | RUN | 0.020007 | 0.050573 | 0.049193 | 0.000692 | 0.000654 | 0.001866 |
| promote_basic_test.test | RUN | 0.026113 | 0.067597 | 0.076935 | 0.000675 | 0.000612 | 0.001781 |
| negation_test.test | RUN | 0.108753 | 0.245514 | 0.368743 | 0.001548 | 0.001693 | 0.001587 |
| mpl_interop_test3.test | RUN | 0.091730 | 0.226896 | 0.256910 | 0.000642 | 0.000635 | 0.001629 |
| mpl_interop_test2.test | RUN | 0.033115 | 0.061828 | 0.064275 | 0.000714 | 0.000696 | 0.001346 |
| mpl_interop_test1.test | RUN | 0.018540 | 0.047226 | 0.048352 | 0.000767 | 0.000729 | 0.001786 |
| make_void_test.test | RUN | 0.115097 | 0.262356 | 0.406957 | 0.001712 | 0.001672 | 0.001773 |
| make_unsigned_test.test | RUN | 0.135631 | 0.342788 | 0.546153 | 0.001550 | 0.001693 | 0.001800 |
| make_signed_test.test | RUN | 0.134365 | 0.345923 | 0.598957 | 0.001597 | 0.001546 | 0.001611 |
| is_volatile_test.test | RUN | 0.120186 | 0.297055 | 0.454494 | 0.001670 | 0.001506 | 0.001723 |
| is_void_test.test | RUN | 0.116562 | 0.281614 | 0.411888 | 0.001800 | 0.001730 | 0.001778 |
| is_virtual_base_of_test.test | RUN | 0.138336 | 0.348012 | 0.598052 | 0.001590 | 0.001471 | 0.001503 |
| is_unsigned_test.test | RUN | 0.123424 | 0.290722 | 0.456330 | 0.001556 | 0.001930 | 0.001377 |
| is_unscoped_enum_test.test | RUN | 0.112087 | 0.266764 | 0.351179 | 0.001528 | 0.001452 | 0.001711 |
| is_union_test.test | RUN | 0.125605 | 0.328210 | 0.517134 | 0.001726 | 0.001727 | 0.001883 |
| is_unbounded_array_test.test | RUN | 0.115300 | 0.280484 | 0.431726 | 0.001540 | 0.001638 | 0.001886 |
| is_trivially_copyable_test.test | RUN | 0.182461 | 0.575638 | 1.087927 | 0.001778 | 0.001776 | 0.001751 |
| is_swappable_test.test | RUN | 0.153225 | 0.433839 | 0.792969 | 0.001312 | 0.001514 | 0.001762 |
| is_stateless_test.test | RUN | 0.175750 | 0.504046 | 0.887302 | 0.001277 | 0.001576 | 0.001642 |
| is_signed_test.test | RUN | 0.121171 | 0.288434 | 0.434293 | 0.001396 | 0.001652 | 0.001370 |
| is_scoped_enum_test.test | RUN | 0.115895 | 0.251138 | 0.351112 | 0.001325 | 0.001532 | 0.001777 |
| is_scalar_test.test | RUN | 0.147819 | 0.447870 | 0.829072 | 0.001545 | 0.001774 | 0.001655 |
| is_same_test.test | RUN | 0.112730 | 0.275658 | 0.386032 | 0.001849 | 0.001659 | 0.001845 |
| is_rvalue_reference_test.test | RUN | 0.117256 | 0.303817 | 0.500163 | 0.001584 | 0.001732 | 0.001786 |
| is_reference_test.test | RUN | 0.122348 | 0.316429 | 0.466386 | 0.001483 | 0.001523 | 0.001353 |
| is_polymorphic_test.test | RUN | 0.125943 | 0.330820 | 0.504065 | 0.001444 | 0.001816 | 0.001811 |
| is_pointer_test.test | RUN | 0.119390 | 0.323767 | 0.522282 | 0.001758 | 0.001801 | 0.001675 |
| is_pod_test.test | RUN | 0.155303 | 0.501099 | 0.954691 | 0.001499 | 0.001816 | 0.001752 |
| is_object_test.test | RUN | 0.113453 | 0.267727 | 0.346627 | 0.001720 | 0.001732 | 0.001759 |
| is_nothrow_swappable_test.test | RUN | 0.165293 | 0.487919 | 0.854504 | 0.001759 | 0.001787 | 0.001786 |
| is_nothrow_move_constructible_test.test | RUN | 0.156831 | 0.485925 | 0.898714 | 0.001569 | 0.001685 | 0.001528 |
| is_nothrow_move_assignable_test.test | RUN | 0.154770 | 0.508967 | 0.895958 | 0.001329 | 0.001539 | 0.001575 |
| is_noncopyable_test.test | RUN | 0.114189 | 0.262630 | 0.398536 | 0.001560 | 0.001518 | 0.001498 |
| is_member_pointer_test.test | RUN | 0.116790 | 0.270131 | 0.392657 | 0.001723 | 0.001774 | 0.001733 |
| is_member_obj_test.test | RUN | 0.113951 | 0.274941 | 0.418722 | 0.001742 | 0.001587 | 0.001652 |
| is_member_func_test.test | RUN | 0.117168 | 0.283458 | 0.431872 | 0.001668 | 0.001624 | 0.001844 |
| is_lvalue_reference_test.test | RUN | 0.118754 | 0.318293 | 0.474596 | 0.001650 | 0.001711 | 0.001637 |
| is_list_constructible_test.test | RUN | 0.136283 | 0.356671 | 0.531254 | 0.001804 | 0.001738 | 0.001782 |
| is_integral_test.test | RUN | 0.141144 | 0.445563 | 0.760390 | 0.001715 | 0.001523 | 0.001608 |
| is_fundamental_test.test | RUN | 0.143700 | 0.451111 | 0.791279 | 0.001499 | 0.001786 | 0.001810 |
| is_function_test.test | RUN | 0.115819 | 0.287791 | 0.465916 | 0.001537 | 0.001670 | 0.001582 |
| is_floating_point_test.test | RUN | 0.122967 | 0.314012 | 0.518029 | 0.001568 | 0.001839 | 0.001664 |
| is_float_test.test | RUN | 0.120847 | 0.321259 | 0.467914 | 0.001784 | 0.001574 | 0.001749 |
| is_final_test.test | RUN | 0.123002 | 0.317680 | 0.512039 | 0.001571 | 0.001702 | 0.001752 |
| is_enum_test.test | RUN | 0.113380 | 0.274566 | 0.390276 | 0.001538 | 0.001509 | 0.001564 |
| is_empty_test.test | RUN | 0.122441 | 0.291177 | 0.415079 | 0.001813 | 0.001489 | 0.001754 |
| is_detected_test.test | RUN | 0.120646 | 0.247342 | 0.347144 | 0.001744 | 0.001724 | 0.001778 |
| is_detected_exact_test.test | RUN | 0.122023 | 0.255315 | 0.357761 | 0.001471 | 0.001578 | 0.001804 |
| is_destructible_test.test | RUN | 0.156384 | 0.489468 | 0.855825 | 0.001554 | 0.001851 | 0.001680 |
| is_default_constr_test.test | RUN | 0.160339 | 0.500058 | 0.944532 | 0.001798 | 0.001858 | 0.001804 |
| is_copy_constructible_test.test | RUN | 0.162017 | 0.524122 | 0.979147 | 0.001487 | 0.001767 | 0.001781 |
| is_copy_assignable_test.test | RUN | 0.161418 | 0.524557 | 0.966843 | 0.001784 | 0.001410 | 0.001756 |
| is_convertible_test.test | RUN | 0.156474 | 0.448556 | 0.773686 | 0.001580 | 0.001852 | 0.001828 |
| is_constructible_test.test | RUN | 0.132464 | 0.323609 | 0.529981 | 0.001248 | 0.001663 | 0.001818 |
| is_const_test.test | RUN | 0.115086 | 0.288199 | 0.438408 | 0.001692 | 0.001512 | 0.001738 |
| is_compound_test.test | RUN | 0.110141 | 0.253367 | 0.343402 | 0.001723 | 0.001579 | 0.001534 |
| is_complex_test.test | RUN | 0.148917 | 0.333729 | 0.511091 | 0.001725 | 0.001771 | 0.001623 |
| is_complete_test.test | RUN | 0.130976 | 0.353327 | 0.597197 | 0.001522 | 0.001748 | 0.001579 |
| is_class_test.test | RUN | 0.116284 | 0.308918 | 0.495378 | 0.001380 | 0.001435 | 0.001716 |
| is_bounded_array_test.test | RUN | 0.110037 | 0.266423 | 0.401331 | 0.001463 | 0.001625 | 0.001496 |
| is_base_of_test.test | RUN | 0.120956 | 0.297383 | 0.470516 | 0.001803 | 0.001865 | 0.001888 |
| is_base_and_derived_test.test | RUN | 0.122119 | 0.293527 | 0.483585 | 0.001604 | 0.001828 | 0.001854 |
| is_assignable_test.test | RUN | 0.142975 | 0.408079 | 0.727224 | 0.001547 | 0.001760 | 0.001781 |
| is_array_test.test | RUN | 0.118263 | 0.293922 | 0.438834 | 0.001656 | 0.001709 | 0.001580 |
| is_arithmetic_test.test | RUN | 0.140013 | 0.417864 | 0.753950 | 0.001619 | 0.001782 | 0.001766 |
| is_abstract_test.test | RUN | 0.249988 | 1.176596 | 2.560324 | 0.001555 | 0.001682 | 0.001836 |
| integral_constant_test.test | RUN | 0.018103 | 0.046248 | 0.055991 | 0.000729 | 0.000631 | 0.001740 |
| has_virtual_destructor_test.test | RUN | 0.126073 | 0.325016 | 0.531935 | 0.001760 | 0.001902 | 0.001845 |
| has_unary_plus_test.test | RUN | 0.236157 | 1.265659 | 2.001099 | 0.001750 | 0.001828 | 0.001864 |
| has_unary_minus_test.test | RUN | 0.229493 | 1.209967 | 1.946464 | 0.001538 | 0.001711 | 0.001804 |
| has_trivial_move_constructor_test.test | RUN | 0.163754 | 0.510283 | 0.961330 | 0.001396 | 0.001554 | 0.001801 |
| has_trivial_move_assign_test.test | RUN | 0.160929 | 0.467654 | 0.869583 | 0.001750 | 0.001744 | 0.001770 |
| has_trivial_destructor_test.test | RUN | 0.158878 | 0.484454 | 0.955711 | 0.001660 | 0.001784 | 0.001694 |
| has_trivial_copy_test.test | RUN | 0.164123 | 0.530015 | 0.979026 | 0.001343 | 0.001841 | 0.001971 |
| has_trivial_constr_test.test | RUN | 0.165288 | 0.548609 | 0.990085 | 0.001651 | 0.001872 | 0.001856 |
| has_trivial_assign_test.test | RUN | 0.163054 | 0.541317 | 1.006836 | 0.001811 | 0.001931 | 0.002019 |
| has_right_shift_test.test | RUN | 0.250196 | 0.978316 | 2.064809 | 0.002126 | 0.001798 | 0.001665 |
| has_right_shift_assign_test.test | RUN | 0.228286 | 0.953933 | 1.923701 | 0.001382 | 0.001616 | 0.001690 |
| has_prefix_classes3_test.test | RUN | 0.169979 | 0.529753 | 1.066718 | 0.001528 | 0.001526 | 0.001914 |
| has_prefix_classes2_test.test | RUN | 0.171504 | 0.545749 | 1.057890 | 0.001425 | 0.001728 | 0.001720 |
| has_prefix_classes1_test.test | RUN | 0.172935 | 0.528407 | 1.041078 | 0.001584 | 0.001594 | 0.001771 |
| has_prefix_classes0_test.test | RUN | 0.171132 | 0.528804 | 1.026159 | 0.001491 | 0.001584 | 0.001804 |
| has_pre_increment_test.test | RUN | 0.228286 | 1.288077 | 2.046937 | 0.001577 | 0.001802 | 0.001711 |
| has_pre_decrement_test.test | RUN | 0.227768 | 1.262195 | 2.024999 | 0.001485 | 0.001756 | 0.001514 |
| has_postfix_classes3_test.test | RUN | 0.173661 | 0.555943 | 1.015459 | 0.001715 | 0.001620 | 0.001876 |
| has_postfix_classes2_test.test | RUN | 0.171386 | 0.550999 | 1.023257 | 0.001531 | 0.001836 | 0.001440 |
| has_postfix_classes1_test.test | RUN | 0.172314 | 0.545866 | 1.024092 | 0.001606 | 0.001781 | 0.001818 |
| has_postfix_classes0_test.test | RUN | 0.174815 | 0.530481 | 1.011253 | 0.001488 | 0.001466 | 0.001780 |
| has_post_increment_test.test | RUN | 0.231482 | 1.277277 | 2.038355 | 0.001712 | 0.001785 | 0.001728 |
| has_post_decrement_test.test | RUN | 0.229565 | 1.250333 | 2.038847 | 0.001544 | 0.001491 | 0.001308 |
| has_plus_test.test | RUN | 0.230666 | 0.900891 | 2.011314 | 0.001806 | 0.001598 | 0.001715 |
| has_plus_assign_test.test | RUN | 0.238674 | 0.924530 | 2.031213 | 0.001570 | 0.001680 | 0.001541 |
| has_operator_new_test.test | RUN | 0.159624 | 0.469840 | 0.940361 | 0.001762 | 0.001493 | 0.001892 |
| has_nothrow_destructor_test.test | RUN | 0.164470 | 0.523062 | 1.019805 | 0.001518 | 0.001682 | 0.001513 |
| has_nothrow_copy_test.test | RUN | 0.160290 | 0.480164 | 0.984077 | 0.001524 | 0.001468 | 0.001523 |
| has_nothrow_constr_test.test | RUN | 0.151119 | 0.485934 | 0.944910 | 0.001415 | 0.001700 | 0.001654 |
| has_nothrow_assign_test.test | RUN | 0.154785 | 0.480090 | 0.956532 | 0.001787 | 0.001835 | 0.001779 |
| has_not_equal_to_test.test | RUN | 0.234426 | 1.205765 | 2.030176 | 0.001791 | 0.001782 | 0.001797 |
| has_negate_test.test | RUN | 0.224334 | 0.871530 | 1.943580 | 0.001566 | 0.001730 | 0.001858 |
| has_multiplies_test.test | RUN | 0.230349 | 0.934079 | 2.049544 | 0.001569 | 0.001792 | 0.001444 |
| has_multiplies_assign_test.test | RUN | 0.240353 | 0.914132 | 1.972192 | 0.001736 | 0.001923 | 0.001674 |
| has_modulus_test.test | RUN | 0.228464 | 0.969387 | 2.005468 | 0.001768 | 0.001627 | 0.001832 |
| has_modulus_assign_test.test | RUN | 0.241262 | 0.956284 | 1.997601 | 0.001488 | 0.001617 | 0.001846 |
| has_minus_test.test | RUN | 0.243584 | 0.953292 | 2.080840 | 0.001428 | 0.001840 | 0.001878 |
| has_minus_assign_test.test | RUN | 0.242079 | 0.940920 | 2.092235 | 0.001849 | 0.001802 | 0.001359 |
| has_logical_or_test.test | RUN | 0.243855 | 0.895777 | 1.945948 | 0.001884 | 0.001895 | 0.001836 |
| has_logical_not_test.test | RUN | 0.230058 | 0.933676 | 1.980665 | 0.001664 | 0.001640 | 0.001872 |
| has_logical_and_test.test | RUN | 0.241388 | 0.932498 | 2.028670 | 0.001511 | 0.001720 | 0.001809 |
| has_less_test.test | RUN | 0.238686 | 1.266494 | 1.964763 | 0.001832 | 0.001684 | 0.001949 |
| has_less_equal_test.test | RUN | 0.242688 | 1.218645 | 2.028166 | 0.001840 | 0.001572 | 0.001832 |
| has_left_shift_test.test | RUN | 0.261469 | 1.167883 | 2.539156 | 0.001658 | 0.001711 | 0.001732 |
| has_left_shift_assign_test.test | RUN | 0.239137 | 0.928548 | 1.999811 | 0.001432 | 0.001534 | 0.001869 |
| has_greater_test.test | RUN | 0.244975 | 1.252936 | 2.081591 | 0.001765 | 0.001676 | 0.001916 |
| has_greater_equal_test.test | RUN | 0.236252 | 1.270064 | 2.064106 | 0.001810 | 0.001657 | 0.001818 |
| has_equal_to_test.test | RUN | 0.244500 | 1.272643 | 2.102828 | 0.001780 | 0.001454 | 0.001693 |
| has_divides_test.test | RUN | 0.239091 | 0.893510 | 2.092592 | 0.001541 | 0.001823 | 0.001842 |
| has_divides_assign_test.test | RUN | 0.239360 | 0.923025 | 2.013336 | 0.001829 | 0.001678 | 0.001552 |
| has_dereference_test.test | RUN | 0.229444 | 0.873518 | 1.941677 | 0.001676 | 0.001936 | 0.001941 |
| has_complement_test.test | RUN | 0.235080 | 1.234759 | 2.068922 | 0.001764 | 0.001758 | 0.001659 |
| has_bit_xor_test.test | RUN | 0.236549 | 0.902330 | 1.993195 | 0.001534 | 0.001724 | 0.001848 |
| has_bit_xor_assign_test.test | RUN | 0.240944 | 0.942588 | 2.071278 | 0.001823 | 0.001834 | 0.001569 |
| has_bit_or_test.test | RUN | 0.258430 | 0.953603 | 1.986069 | 0.001748 | 0.001832 | 0.001766 |
| has_bit_or_assign_test.test | RUN | 0.241094 | 0.890233 | 2.022053 | 0.001568 | 0.001752 | 0.001559 |
| has_bit_and_test.test | RUN | 0.226995 | 0.872815 | 1.971366 | 0.001826 | 0.001851 | 0.001636 |
| has_bit_and_assign_test.test | RUN | 0.237898 | 0.925379 | 2.028160 | 0.001851 | 0.001780 | 0.001798 |
| has_binary_classes9_test.test | RUN | 0.259544 | 1.110505 | 2.214147 | 0.001768 | 0.001891 | 0.001843 |
| has_binary_classes8_test.test | RUN | 0.260835 | 1.133270 | 2.252190 | 0.001810 | 0.001656 | 0.001998 |
| has_binary_classes7_test.test | RUN | 0.256305 | 1.046079 | 2.282846 | 0.001613 | 0.001839 | 0.001570 |
| has_binary_classes6_test.test | RUN | 0.269400 | 1.033097 | 2.180649 | 0.001836 | 0.001824 | 0.001487 |
| has_binary_classes5_test.test | RUN | 0.259836 | 1.023052 | 2.240525 | 0.001738 | 0.001838 | 0.001883 |
| has_binary_classes4_test.test | RUN | 0.262148 | 1.087288 | 2.195199 | 0.001516 | 0.001662 | 0.001908 |
| has_binary_classes3_test.test | RUN | 0.255657 | 1.053056 | 2.273543 | 0.001705 | 0.001760 | 0.001517 |
| has_binary_classes2_test.test | RUN | 0.259233 | 1.089952 | 2.268489 | 0.001790 | 0.001723 | 0.001697 |
| has_binary_classes1_test.test | RUN | 0.256039 | 1.053375 | 2.209239 | 0.001463 | 0.001808 | 0.001912 |
| has_binary_classes0_test.test | RUN | 0.260597 | 1.115592 | 2.224515 | 0.001652 | 0.001530 | 0.001886 |
| function_traits_test.test | RUN | 0.117240 | 0.296259 | 0.483009 | 0.001417 | 0.001588 | 0.001372 |
| floating_point_promotion_test.test | RUN | 0.119494 | 0.279227 | 0.454213 | 0.001570 | 0.001603 | 0.001718 |
| extent_test.test | RUN | 0.118886 | 0.277180 | 0.492015 | 0.001828 | 0.001593 | 0.001633 |
| enable_if_test.test | RUN | 0.108533 | 0.245563 | 0.338236 | 0.001764 | 0.001801 | 0.001891 |
| disjunction_test.test | RUN | 0.114475 | 0.247771 | 0.364656 | 0.001786 | 0.001539 | 0.001647 |
| detected_test.test | RUN | 0.113596 | 0.233974 | 0.372039 | 0.002140 | 0.001669 | 0.001765 |
| detected_or_test.test | RUN | 0.145512 | 0.252971 | 0.387701 | 0.001766 | 0.001579 | 0.001898 |
| decay_test.test | RUN | 0.319533 | 1.005049 | 2.316550 | 0.001535 | 0.001507 | 0.001473 |
| cxx14_aliases_test.test | RUN | 0.197436 | 0.376469 | 0.596302 | 0.001503 | 0.001829 | 0.001503 |
| copy_reference_test.test | RUN | 0.114109 | 0.247321 | 0.403557 | 0.001700 | 0.001381 | 0.001734 |
| copy_cv_test.test | RUN | 0.115334 | 0.265432 | 0.412963 | 0.001875 | 0.001702 | 0.001807 |
| copy_cv_ref_test.test | RUN | 0.162917 | 0.436775 | 1.012757 | 0.001538 | 0.001714 | 0.001724 |
| conjunction_test.test | RUN | 0.111121 | 0.249823 | 0.369842 | 0.001659 | 0.001823 | 0.001612 |
| conditional_test.test | RUN | 0.109694 | 0.251562 | 0.359239 | 0.001652 | 0.001596 | 0.001922 |
| common_type_test.test | RUN | 0.151058 | 0.387928 | 0.749495 | 0.001827 | 0.001616 | 0.001842 |
| common_type_sfinae_test.test | RUN | 0.113536 | 0.230116 | 0.377788 | 0.001431 | 0.001568 | 0.001588 |
| common_type_sfinae2_test.test | RUN | 0.115159 | 0.263270 | 0.401574 | 0.001756 | 0.001608 | 0.001636 |
| common_type_6_test.test | RUN | 0.120476 | 0.254832 | 0.419483 | 0.001522 | 0.001893 | 0.001582 |
| common_type_5_test.test | RUN | 0.119771 | 0.252918 | 0.397085 | 0.001684 | 0.001610 | 0.001809 |
| common_type_4_test.test | RUN | 0.122377 | 0.283589 | 0.504002 | 0.001597 | 0.001487 | 0.001771 |
| common_type_3_test.test | RUN | 0.109279 | 0.246624 | 0.344647 | 0.001840 | 0.001717 | 0.001879 |
| common_type_2_test.test | RUN | 0.147813 | 0.380133 | 0.754913 | 0.001566 | 0.001840 | 0.001868 |
| alignment_of_test.test | RUN | 0.121715 | 0.306856 | 0.506053 | 0.001611 | 0.001824 | 0.001802 |
| alignment_of_a2_test.test | RUN | 0.118677 | 0.295653 | 0.479827 | 0.001592 | 0.001765 | 0.001641 |
| aligned_storage_test.test | RUN | 0.125987 | 0.301035 | 0.445924 | 0.001754 | 0.001650 | 0.001882 |
| aligned_storage_empy_test.test | RUN | 0.144553 | 0.337149 | 0.591974 | 0.001760 | 0.001672 | 0.001503 |
| aligned_storage_a2_test.test | RUN | 0.124300 | 0.288235 | 0.454497 | 0.001944 | 0.002066 | 0.001824 |
| add_volatile_test.test | RUN | 0.257829 | 0.877090 | 2.284926 | 0.001628 | 0.001673 | 0.001815 |
| add_rvalue_reference_test.test | RUN | 0.294688 | 0.987502 | 2.567810 | 0.001607 | 0.001525 | 0.001826 |
| add_reference_test.test | RUN | 0.280566 | 0.965327 | 2.525665 | 0.001566 | 0.001872 | 0.001794 |
| add_pointer_test.test | RUN | 0.177734 | 0.535382 | 1.331322 | 0.001597 | 0.001676 | 0.001842 |
| add_lvalue_reference_test.test | RUN | 0.282199 | 0.944246 | 2.498773 | 0.001555 | 0.001556 | 0.001832 |
| add_cv_test.test | RUN | 0.263937 | 0.939273 | 2.355009 | 0.001544 | 0.001670 | 0.001460 |
| add_const_test.test | RUN | 0.265218 | 0.901311 | 2.375264 | 0.001606 | 0.001570 | 0.001552 |
| is_virtual_base_of_fail.test | COMPILE_FAIL | 0.107153 | 0.240716 | 0.355281 | — | — | — |
| is_stateless_fail.test | COMPILE_FAIL | 0.111622 | 0.242374 | 0.372095 | — | — | — |
| is_polymorphic_fail.test | COMPILE_FAIL | 0.104907 | 0.222922 | 0.351587 | — | — | — |
| is_nothrow_move_constructible_fail.test | COMPILE_FAIL | 0.105879 | 0.226208 | 0.296447 | — | — | — |
| is_nothrow_move_assignable_fail.test | COMPILE_FAIL | 0.111121 | 0.234085 | 0.345394 | — | — | — |
| is_list_constructible_fail.test | COMPILE_FAIL | 0.111017 | 0.223870 | 0.336569 | — | — | — |
| is_empty_fail.test | COMPILE_FAIL | 0.114103 | 0.233014 | 0.346674 | — | — | — |
| is_destructible_fail.test | COMPILE_FAIL | 0.107821 | 0.226066 | 0.335411 | — | — | — |
| is_default_constructible_fail.test | COMPILE_FAIL | 0.107585 | 0.232996 | 0.337624 | — | — | — |
| is_copy_constructible_fail.test | COMPILE_FAIL | 0.108355 | 0.226014 | 0.350896 | — | — | — |
| is_copy_assignable_fail.test | COMPILE_FAIL | 0.105761 | 0.228641 | 0.345191 | — | — | — |
| is_convertible_fail.test | COMPILE_FAIL | 0.106106 | 0.226989 | 0.330574 | — | — | — |
| is_convertible2_fail.test | COMPILE_FAIL | 0.106209 | 0.226149 | 0.352988 | — | — | — |
| is_constructible_fail.test | COMPILE_FAIL | 0.106832 | 0.232591 | 0.349672 | — | — | — |
| is_base_of_fail.test | COMPILE_FAIL | 0.104484 | 0.226760 | 0.328142 | — | — | — |
| is_assignable_fail.test | COMPILE_FAIL | 0.105770 | 0.224716 | 0.330066 | — | — | — |
| has_nothrow_destruct_fail.test | COMPILE_FAIL | 0.107164 | 0.226877 | 0.347606 | — | — | — |
| has_nothrow_copy_fail.test | COMPILE_FAIL | 0.109667 | 0.226130 | 0.355142 | — | — | — |
| has_nothrow_cons_fail.test | COMPILE_FAIL | 0.110383 | 0.233861 | 0.330425 | — | — | — |
| has_nothrow_assign_fail.test | COMPILE_FAIL | 0.105919 | 0.224545 | 0.342062 | — | — | — |
| common_type_fail.test | COMPILE_FAIL | 0.107321 | 0.227095 | 0.336605 | — | — | — |
| common_type2_fail.test | COMPILE_FAIL | 0.108389 | 0.226674 | 0.351165 | — | — | — |
| has_nothrow_assign_test_no_intrinsics.test | RUN | 0.164252 | 0.503872 | 0.975721 | 0.001667 | 0.001871 | 0.001870 |
| has_nothrow_constr_test_no_intrinsics.test | RUN | 0.162386 | 0.516989 | 0.968964 | 0.001588 | 0.001697 | 0.001736 |
| has_nothrow_copy_test_no_intrinsics.test | RUN | 0.162613 | 0.525422 | 0.972075 | 0.001564 | 0.001322 | 0.001258 |
| is_nothrow_move_assignable_test_no_intrinsics.test | RUN | 0.162237 | 0.507598 | 0.909323 | 0.001370 | 0.001390 | 0.001462 |
| is_nothrow_move_constructible_test_no_intrinsics.test | RUN | 0.102139 | 0.363713 | 0.624920 | 0.001416 | 0.001329 | 0.001360 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.978× | 1.002×, 0.955× | 0.957× |
| clang | 1.001× | 0.991×, 1.011× | 1.000× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1363 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43648658351).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| add_const_test.test | 10 | 0.001147s | 0.001052s | 0.001053s | byte equality observed |
| add_cv_test.test | 10 | 0.001137s | 0.001068s | 0.001059s | byte equality observed |
| add_lvalue_reference_test.test | 10 | 0.001155s | 0.001060s | 0.001092s | byte equality observed |
| add_pointer_test.test | 10 | 0.001151s | 0.001059s | 0.001048s | byte equality observed |
| add_reference_test.test | 10 | 0.001130s | 0.001072s | 0.001072s | byte equality observed |
| add_rvalue_reference_test.test | 10 | 0.001158s | 0.001065s | 0.001081s | byte equality observed |
| add_volatile_test.test | 10 | 0.001155s | 0.001066s | 0.001091s | byte equality observed |
| aligned_storage_a2_test.test | 10 | 0.001259s | 0.001201s | 0.001221s | byte equality observed |
| aligned_storage_empy_test.test | 10 | 0.001136s | 0.001077s | 0.001119s | byte equality observed |
| aligned_storage_test.test | 10 | 0.001260s | 0.001170s | 0.001244s | byte equality observed |
| alignment_of_a2_test.test | 10 | 0.001154s | 0.001057s | 0.001083s | byte equality observed |
| alignment_of_test.test | 10 | 0.001130s | 0.001104s | 0.001077s | byte equality observed |
| common_type_2_test.test | 10 | 0.001153s | 0.001092s | 0.001040s | byte equality observed |
| common_type_3_test.test | 10 | 0.001134s | 0.001117s | 0.001066s | byte equality observed |
| common_type_4_test.test | 10 | 0.001140s | 0.001110s | 0.001063s | byte equality observed |
| common_type_5_test.test | 10 | 0.001129s | 0.001110s | 0.001056s | byte equality observed |
| common_type_6_test.test | 10 | 0.001116s | 0.001101s | 0.001048s | byte equality observed |
| common_type_sfinae2_test.test | 10 | 0.001147s | 0.001133s | 0.001035s | byte equality observed |
| common_type_sfinae_test.test | 10 | 0.001131s | 0.001126s | 0.001023s | byte equality observed |
| common_type_test.test | 10 | 0.001149s | 0.001111s | 0.001065s | byte equality observed |
| conditional_test.test | 10 | 0.001138s | 0.001145s | 0.001056s | byte equality observed |
| conjunction_test.test | 10 | 0.001141s | 0.001148s | 0.001049s | byte equality observed |
| copy_cv_ref_test.test | 10 | 0.001134s | 0.001121s | 0.001051s | byte equality observed |
| copy_cv_test.test | 10 | 0.001133s | 0.001149s | 0.001053s | byte equality observed |
| copy_reference_test.test | 10 | 0.001139s | 0.001107s | 0.001038s | byte equality observed |
| cxx14_aliases_test.test | 10 | 0.001131s | 0.001112s | 0.001075s | byte equality observed |
| decay_test.test | 10 | 0.001146s | 0.001131s | 0.001084s | byte equality observed |
| detected_or_test.test | 10 | 0.001131s | 0.001158s | 0.001064s | byte equality observed |
| detected_test.test | 10 | 0.001139s | 0.001127s | 0.001089s | byte equality observed |
| disjunction_test.test | 10 | 0.001148s | 0.001116s | 0.001047s | byte equality observed |
| enable_if_test.test | 10 | 0.001150s | 0.001141s | 0.001073s | byte equality observed |
| extent_test.test | 10 | 0.001133s | 0.001128s | 0.001052s | byte equality observed |
| floating_point_promotion_test.test | 10 | 0.001139s | 0.001148s | 0.001060s | byte equality observed |
| function_traits_test.test | 10 | 0.001129s | 0.001136s | 0.001075s | byte equality observed |
| has_binary_classes0_test.test | 10 | 0.001155s | 0.001111s | 0.001049s | byte equality observed |
| has_binary_classes1_test.test | 10 | 0.001146s | 0.001140s | 0.001101s | byte equality observed |
| has_binary_classes2_test.test | 10 | 0.001139s | 0.001129s | 0.001066s | byte equality observed |
| has_binary_classes3_test.test | 10 | 0.001169s | 0.001142s | 0.001136s | byte equality observed |
| has_binary_classes4_test.test | 10 | 0.001149s | 0.001131s | 0.001053s | byte equality observed |
| has_binary_classes5_test.test | 10 | 0.001147s | 0.001149s | 0.001074s | byte equality observed |
| has_binary_classes6_test.test | 10 | 0.001134s | 0.001115s | 0.001088s | byte equality observed |
| has_binary_classes7_test.test | 10 | 0.001137s | 0.001113s | 0.001084s | byte equality observed |
| has_binary_classes8_test.test | 10 | 0.001129s | 0.001134s | 0.001126s | byte equality observed |
| has_binary_classes9_test.test | 10 | 0.001131s | 0.001107s | 0.001133s | byte equality observed |
| has_bit_and_assign_test.test | 10 | 0.001149s | 0.001131s | 0.001136s | byte equality observed |
| has_bit_and_test.test | 10 | 0.001140s | 0.001159s | 0.001135s | byte equality observed |
| has_bit_or_assign_test.test | 10 | 0.001152s | 0.001149s | 0.001160s | byte equality observed |
| has_bit_or_test.test | 10 | 0.001145s | 0.001142s | 0.001142s | byte equality observed |
| has_bit_xor_assign_test.test | 10 | 0.001151s | 0.001140s | 0.001117s | byte equality observed |
| has_bit_xor_test.test | 10 | 0.001145s | 0.001149s | 0.001133s | byte equality observed |
| has_complement_test.test | 10 | 0.001132s | 0.001137s | 0.001140s | byte equality observed |
| has_dereference_test.test | 10 | 0.001171s | 0.001139s | 0.001139s | byte equality observed |
| has_divides_assign_test.test | 10 | 0.001139s | 0.001132s | 0.001124s | byte equality observed |
| has_divides_test.test | 10 | 0.001149s | 0.001134s | 0.001138s | byte equality observed |
| has_equal_to_test.test | 10 | 0.001158s | 0.001137s | 0.001132s | byte equality observed |
| has_greater_equal_test.test | 10 | 0.001150s | 0.001135s | 0.001120s | byte equality observed |
| has_greater_test.test | 10 | 0.001127s | 0.001146s | 0.001141s | byte equality observed |
| has_left_shift_assign_test.test | 10 | 0.001149s | 0.001141s | 0.001122s | byte equality observed |
| has_left_shift_test.test | 10 | 0.001151s | 0.001131s | 0.001130s | byte equality observed |
| has_less_equal_test.test | 10 | 0.001124s | 0.001144s | 0.001128s | byte equality observed |
| has_less_test.test | 10 | 0.001135s | 0.001139s | 0.001125s | byte equality observed |
| has_logical_and_test.test | 10 | 0.001124s | 0.001118s | 0.001152s | byte equality observed |
| has_logical_not_test.test | 10 | 0.001144s | 0.001149s | 0.001120s | byte equality observed |
| has_logical_or_test.test | 10 | 0.001157s | 0.001152s | 0.001148s | byte equality observed |
| has_minus_assign_test.test | 10 | 0.001141s | 0.001150s | 0.001110s | byte equality observed |
| has_minus_test.test | 9 | 0.001142s | 0.001111s | 0.001117s | byte equality observed |
| has_modulus_assign_test.test | 10 | 0.001145s | 0.001153s | 0.001136s | byte equality observed |
| has_modulus_test.test | 10 | 0.001158s | 0.001148s | 0.001108s | byte equality observed |
| has_multiplies_assign_test.test | 10 | 0.001138s | 0.001140s | 0.001150s | byte equality observed |
| has_multiplies_test.test | 10 | 0.001152s | 0.001128s | 0.001127s | byte equality observed |
| has_negate_test.test | 10 | 0.001146s | 0.001112s | 0.001141s | byte equality observed |
| has_not_equal_to_test.test | 10 | 0.001153s | 0.001147s | 0.001121s | byte equality observed |
| has_nothrow_assign_test.test | 10 | 0.001141s | 0.001124s | 0.001117s | byte equality observed |
| has_nothrow_assign_test_no_intrinsics.test | 10 | 0.001127s | 0.001125s | 0.001139s | byte equality observed |
| has_nothrow_constr_test.test | 10 | 0.001142s | 0.001150s | 0.001147s | byte equality observed |
| has_nothrow_constr_test_no_intrinsics.test | 10 | 0.001148s | 0.001121s | 0.001132s | byte equality observed |
| has_nothrow_copy_test.test | 10 | 0.001145s | 0.001104s | 0.001152s | byte equality observed |
| has_nothrow_copy_test_no_intrinsics.test | 10 | 0.001136s | 0.001143s | 0.001105s | byte equality observed |
| has_nothrow_destructor_test.test | 10 | 0.001143s | 0.001158s | 0.001140s | byte equality observed |
| has_operator_new_test.test | 10 | 0.001156s | 0.001140s | 0.001149s | byte equality observed |
| has_plus_assign_test.test | 10 | 0.001140s | 0.001129s | 0.001146s | byte equality observed |
| has_plus_test.test | 10 | 0.001133s | 0.001143s | 0.001148s | byte equality observed |
| has_post_decrement_test.test | 10 | 0.001145s | 0.001142s | 0.001137s | byte equality observed |
| has_post_increment_test.test | 10 | 0.001147s | 0.001116s | 0.001124s | byte equality observed |
| has_postfix_classes0_test.test | 10 | 0.001152s | 0.001145s | 0.001122s | byte equality observed |
| has_postfix_classes1_test.test | 10 | 0.001140s | 0.001136s | 0.001138s | byte equality observed |
| has_postfix_classes2_test.test | 10 | 0.001150s | 0.001138s | 0.001146s | byte equality observed |
| has_postfix_classes3_test.test | 10 | 0.001146s | 0.001149s | 0.001144s | byte equality observed |
| has_pre_decrement_test.test | 10 | 0.001150s | 0.001118s | 0.001143s | byte equality observed |
| has_pre_increment_test.test | 10 | 0.001156s | 0.001130s | 0.001146s | byte equality observed |
| has_prefix_classes0_test.test | 10 | 0.001109s | 0.001136s | 0.001153s | byte equality observed |
| has_prefix_classes1_test.test | 10 | 0.001153s | 0.001133s | 0.001140s | byte equality observed |
| has_prefix_classes2_test.test | 10 | 0.001143s | 0.001117s | 0.001148s | byte equality observed |
| has_prefix_classes3_test.test | 10 | 0.001140s | 0.001149s | 0.001131s | byte equality observed |
| has_right_shift_assign_test.test | 10 | 0.001135s | 0.001118s | 0.001141s | byte equality observed |
| has_right_shift_test.test | 10 | 0.001140s | 0.001123s | 0.001134s | byte equality observed |
| has_trivial_assign_test.test | 10 | 0.001206s | 0.001185s | 0.001211s | byte equality observed |
| has_trivial_constr_test.test | 10 | 0.001200s | 0.001182s | 0.001202s | native test oracle; output varies |
| has_trivial_copy_test.test | 10 | 0.001198s | 0.001185s | 0.001224s | native test oracle; output varies |
| has_trivial_destructor_test.test | 10 | 0.001152s | 0.001116s | 0.001130s | byte equality observed |
| has_trivial_move_assign_test.test | 10 | 0.001130s | 0.001155s | 0.001120s | byte equality observed |
| has_trivial_move_constructor_test.test | 10 | 0.001143s | 0.001121s | 0.001127s | byte equality observed |
| has_unary_minus_test.test | 10 | 0.001140s | 0.001140s | 0.001117s | byte equality observed |
| has_unary_plus_test.test | 10 | 0.001127s | 0.001144s | 0.001150s | byte equality observed |
| has_virtual_destructor_test.test | 10 | 0.001161s | 0.001149s | 0.001126s | byte equality observed |
| integral_constant_test.test | 10 | 0.000506s | 0.000503s | 0.001149s | byte equality observed |
| is_abstract_test.test | 10 | 0.001140s | 0.001139s | 0.001158s | byte equality observed |
| is_arithmetic_test.test | 10 | 0.001137s | 0.001154s | 0.001138s | byte equality observed |
| is_array_test.test | 10 | 0.001105s | 0.001133s | 0.001158s | byte equality observed |
| is_assignable_test.test | 10 | 0.001149s | 0.001135s | 0.001138s | byte equality observed |
| is_base_and_derived_test.test | 10 | 0.001141s | 0.001141s | 0.001147s | byte equality observed |
| is_base_of_test.test | 10 | 0.001138s | 0.001117s | 0.001139s | byte equality observed |
| is_bounded_array_test.test | 10 | 0.001144s | 0.001153s | 0.001148s | byte equality observed |
| is_class_test.test | 10 | 0.001134s | 0.001130s | 0.001109s | byte equality observed |
| is_complete_test.test | 10 | 0.001139s | 0.001135s | 0.001131s | byte equality observed |
| is_complex_test.test | 10 | 0.001154s | 0.001117s | 0.001152s | byte equality observed |
| is_compound_test.test | 10 | 0.001138s | 0.001117s | 0.001150s | byte equality observed |
| is_const_test.test | 10 | 0.001158s | 0.001139s | 0.001135s | byte equality observed |
| is_constructible_test.test | 10 | 0.001137s | 0.001128s | 0.001152s | byte equality observed |
| is_convertible_test.test | 10 | 0.001136s | 0.001138s | 0.001129s | byte equality observed |
| is_copy_assignable_test.test | 10 | 0.001151s | 0.001156s | 0.001132s | byte equality observed |
| is_copy_constructible_test.test | 10 | 0.001150s | 0.001140s | 0.001135s | byte equality observed |
| is_default_constr_test.test | 10 | 0.001152s | 0.001149s | 0.001150s | byte equality observed |
| is_destructible_test.test | 10 | 0.001155s | 0.001145s | 0.001116s | byte equality observed |
| is_detected_exact_test.test | 10 | 0.001145s | 0.001138s | 0.001142s | byte equality observed |
| is_detected_test.test | 10 | 0.001155s | 0.001133s | 0.001124s | byte equality observed |
| is_empty_test.test | 10 | 0.001155s | 0.001132s | 0.001156s | byte equality observed |
| is_enum_test.test | 10 | 0.001139s | 0.001158s | 0.001143s | byte equality observed |
| is_final_test.test | 10 | 0.001152s | 0.001122s | 0.001156s | byte equality observed |
| is_float_test.test | 10 | 0.001137s | 0.001140s | 0.001130s | byte equality observed |
| is_floating_point_test.test | 10 | 0.001142s | 0.001135s | 0.001144s | byte equality observed |
| is_function_test.test | 10 | 0.001131s | 0.001142s | 0.001126s | byte equality observed |
| is_fundamental_test.test | 10 | 0.001146s | 0.001137s | 0.001160s | byte equality observed |
| is_integral_test.test | 10 | 0.001153s | 0.001156s | 0.001143s | byte equality observed |
| is_list_constructible_test.test | 10 | 0.001131s | 0.001145s | 0.001154s | byte equality observed |
| is_lvalue_reference_test.test | 10 | 0.001155s | 0.001142s | 0.001148s | byte equality observed |
| is_member_func_test.test | 10 | 0.001141s | 0.001141s | 0.001127s | byte equality observed |
| is_member_obj_test.test | 10 | 0.001143s | 0.001160s | 0.001136s | byte equality observed |
| is_member_pointer_test.test | 10 | 0.001152s | 0.001135s | 0.001136s | byte equality observed |
| is_noncopyable_test.test | 10 | 0.001146s | 0.001145s | 0.001132s | byte equality observed |
| is_nothrow_move_assignable_test.test | 10 | 0.001138s | 0.001148s | 0.001170s | byte equality observed |
| is_nothrow_move_assignable_test_no_intrinsics.test | 10 | 0.001157s | 0.001136s | 0.001143s | byte equality observed |
| is_nothrow_move_constructible_test.test | 10 | 0.001139s | 0.001142s | 0.001166s | byte equality observed |
| is_nothrow_move_constructible_test_no_intrinsics.test | 10 | 0.001142s | 0.001131s | 0.001118s | byte equality observed |
| is_nothrow_swappable_test.test | 10 | 0.001131s | 0.001145s | 0.001161s | byte equality observed |
| is_object_test.test | 10 | 0.001147s | 0.001140s | 0.001127s | byte equality observed |
| is_pod_test.test | 10 | 0.001142s | 0.001130s | 0.001137s | byte equality observed |
| is_pointer_test.test | 10 | 0.001141s | 0.001124s | 0.001145s | byte equality observed |
| is_polymorphic_test.test | 10 | 0.001135s | 0.001142s | 0.001148s | byte equality observed |
| is_reference_test.test | 10 | 0.001153s | 0.001148s | 0.001131s | byte equality observed |
| is_rvalue_reference_test.test | 10 | 0.001145s | 0.001124s | 0.001158s | byte equality observed |
| is_same_test.test | 10 | 0.001155s | 0.001131s | 0.001161s | byte equality observed |
| is_scalar_test.test | 10 | 0.001154s | 0.001139s | 0.001128s | byte equality observed |
| is_scoped_enum_test.test | 10 | 0.001151s | 0.001141s | 0.001140s | byte equality observed |
| is_signed_test.test | 10 | 0.001137s | 0.001139s | 0.001146s | byte equality observed |
| is_stateless_test.test | 10 | 0.001149s | 0.001124s | 0.001151s | byte equality observed |
| is_swappable_test.test | 10 | 0.001154s | 0.001167s | 0.001124s | byte equality observed |
| is_trivially_copyable_test.test | 10 | 0.001185s | 0.001194s | 0.001185s | byte equality observed |
| is_unbounded_array_test.test | 10 | 0.001134s | 0.001114s | 0.001152s | byte equality observed |
| is_union_test.test | 10 | 0.001133s | 0.001105s | 0.001141s | byte equality observed |
| is_unscoped_enum_test.test | 10 | 0.001149s | 0.001124s | 0.001137s | byte equality observed |
| is_unsigned_test.test | 10 | 0.001139s | 0.001117s | 0.001155s | byte equality observed |
| is_virtual_base_of_test.test | 10 | 0.001146s | 0.001134s | 0.001124s | byte equality observed |
| is_void_test.test | 10 | 0.001145s | 0.001146s | 0.001144s | byte equality observed |
| is_volatile_test.test | 10 | 0.001132s | 0.001143s | 0.001154s | byte equality observed |
| make_signed_test.test | 10 | 0.001162s | 0.001122s | 0.001145s | byte equality observed |
| make_unsigned_test.test | 10 | 0.001158s | 0.001132s | 0.001155s | byte equality observed |
| make_void_test.test | 10 | 0.001154s | 0.001144s | 0.001168s | byte equality observed |
| mpl_interop_test1.test | 10 | 0.000518s | 0.000507s | 0.001131s | byte equality observed |
| mpl_interop_test2.test | 10 | 0.000508s | 0.000509s | 0.001144s | byte equality observed |
| mpl_interop_test3.test | 10 | 0.000514s | 0.000527s | 0.001135s | byte equality observed |
| negation_test.test | 10 | 0.001187s | 0.001189s | 0.001132s | byte equality observed |
| promote_basic_test.test | 10 | 0.000515s | 0.000506s | 0.001134s | byte equality observed |
| promote_enum_msvc_bug_test.test | 10 | 0.000516s | 0.000518s | 0.001137s | byte equality observed |
| promote_enum_test.test | 10 | 0.000514s | 0.000512s | 0.001141s | byte equality observed |
| promote_mpl_test.test | 10 | 0.000509s | 0.000519s | 0.001155s | byte equality observed |
| rank_test.test | 10 | 0.001150s | 0.001127s | 0.001123s | byte equality observed |
| remove_all_extents_test.test | 10 | 0.001168s | 0.001143s | 0.001133s | byte equality observed |
| remove_bounds_test.test | 10 | 0.001158s | 0.001119s | 0.001167s | byte equality observed |
| remove_const_test.test | 10 | 0.001151s | 0.001152s | 0.001155s | byte equality observed |
| remove_cv_ref_test.test | 10 | 0.001146s | 0.001132s | 0.001139s | byte equality observed |
| remove_cv_test.test | 10 | 0.001161s | 0.001145s | 0.001151s | byte equality observed |
| remove_extent_test.test | 10 | 0.001164s | 0.001103s | 0.001125s | byte equality observed |
| remove_pointer_test.test | 10 | 0.001157s | 0.001130s | 0.001138s | byte equality observed |
| remove_reference_test.test | 10 | 0.001152s | 0.001138s | 0.001158s | byte equality observed |
| remove_volatile_test.test | 10 | 0.001147s | 0.001150s | 0.001145s | byte equality observed |
| tricky_abstract_type_test.test | 10 | 0.001137s | 0.001134s | 0.001149s | byte equality observed |
| tricky_add_pointer_test.test | 10 | 0.001145s | 0.001126s | 0.001154s | byte equality observed |
| tricky_function_type_test.test | 10 | 0.001153s | 0.001120s | 0.001150s | byte equality observed |
| tricky_incomplete_type_test.test | 10 | 0.001137s | 0.001142s | 0.001129s | byte equality observed |
| tricky_is_enum_test.test | 10 | 0.001150s | 0.001117s | 0.001160s | byte equality observed |
| tricky_partial_spec_test.test | 10 | 0.001158s | 0.001162s | 0.001159s | byte equality observed |
| tricky_rvalue_test.test | 10 | 0.001155s | 0.001137s | 0.001138s | byte equality observed |
| type_identity_test.test | 10 | 0.001184s | 0.001158s | 0.001163s | byte equality observed |
| type_traits_test.test | 10 | 0.000507s | 0.000505s | 0.001159s | byte equality observed |
| type_with_alignment_test.test | 10 | 0.001273s | 0.001288s | 0.001280s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43648658351).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
