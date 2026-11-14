# libs/type_traits/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| type_with_alignment_test.test | RUN | 0.117226 | 0.329106 | 0.506230 | 0.001608 | 0.001698 | 0.001838 |
| type_traits_test.test | RUN | 0.166835 | 0.338093 | 0.508449 | 0.000578 | 0.000578 | 0.001436 |
| type_identity_test.test | RUN | 0.309320 | 1.186541 | 2.965086 | 0.001594 | 0.001876 | 0.001755 |
| tricky_rvalue_test.test | RUN | 0.110325 | 0.259596 | 0.391641 | 0.001333 | 0.001728 | 0.001382 |
| tricky_partial_spec_test.test | RUN | 0.129172 | 0.370018 | 0.617779 | 0.001439 | 0.001746 | 0.001764 |
| tricky_is_enum_test.test | RUN | 0.109356 | 0.248074 | 0.358470 | 0.001612 | 0.001732 | 0.001379 |
| tricky_incomplete_type_test.test | RUN | 0.179163 | 0.390570 | 0.622039 | 0.001401 | 0.001754 | 0.001782 |
| tricky_function_type_test.test | RUN | 0.139457 | 0.398855 | 0.678726 | 0.001734 | 0.001669 | 0.001388 |
| tricky_add_pointer_test.test | RUN | 0.204123 | 0.704841 | 1.673264 | 0.001414 | 0.001805 | 0.001713 |
| tricky_abstract_type_test.test | RUN | 0.109081 | 0.243139 | 0.374403 | 0.001571 | 0.001393 | 0.001538 |
| remove_volatile_test.test | RUN | 0.279287 | 0.990629 | 2.617161 | 0.001668 | 0.001881 | 0.001498 |
| remove_reference_test.test | RUN | 0.293602 | 1.045325 | 2.740067 | 0.001643 | 0.001750 | 0.001747 |
| remove_pointer_test.test | RUN | 0.307156 | 1.081164 | 2.917559 | 0.001662 | 0.001605 | 0.001622 |
| remove_extent_test.test | RUN | 0.287665 | 1.078019 | 2.738549 | 0.001774 | 0.001939 | 0.001773 |
| remove_cv_test.test | RUN | 0.285584 | 1.044744 | 2.700732 | 0.001651 | 0.001902 | 0.001746 |
| remove_cv_ref_test.test | RUN | 0.603280 | 2.499770 | 6.648824 | 0.001608 | 0.001844 | 0.001759 |
| remove_const_test.test | RUN | 0.285123 | 1.018561 | 2.577343 | 0.001634 | 0.001855 | 0.001701 |
| remove_bounds_test.test | RUN | 0.295966 | 1.078327 | 2.746136 | 0.001522 | 0.001383 | 0.001680 |
| remove_all_extents_test.test | RUN | 0.290893 | 1.045791 | 2.705053 | 0.001502 | 0.001643 | 0.001503 |
| rank_test.test | RUN | 0.110054 | 0.259848 | 0.389665 | 0.001298 | 0.001728 | 0.001754 |
| promote_mpl_test.test | RUN | 0.095388 | 0.226590 | 0.270284 | 0.000573 | 0.000593 | 0.001578 |
| promote_enum_test.test | RUN | 0.023376 | 0.056833 | 0.063974 | 0.000612 | 0.000786 | 0.001780 |
| promote_enum_msvc_bug_test.test | RUN | 0.020374 | 0.050459 | 0.051722 | 0.000617 | 0.000609 | 0.001528 |
| promote_basic_test.test | RUN | 0.025319 | 0.065719 | 0.074970 | 0.000648 | 0.000717 | 0.001708 |
| negation_test.test | RUN | 0.105356 | 0.240383 | 0.344993 | 0.001467 | 0.001570 | 0.001509 |
| mpl_interop_test3.test | RUN | 0.090545 | 0.208598 | 0.232018 | 0.000636 | 0.000616 | 0.001621 |
| mpl_interop_test2.test | RUN | 0.033057 | 0.068266 | 0.066094 | 0.000565 | 0.000570 | 0.001704 |
| mpl_interop_test1.test | RUN | 0.017407 | 0.045643 | 0.052636 | 0.000592 | 0.000753 | 0.001722 |
| make_void_test.test | RUN | 0.111396 | 0.258849 | 0.369769 | 0.001754 | 0.001558 | 0.001682 |
| make_unsigned_test.test | RUN | 0.129520 | 0.338519 | 0.570255 | 0.001504 | 0.001811 | 0.001594 |
| make_signed_test.test | RUN | 0.128362 | 0.337087 | 0.543396 | 0.001482 | 0.001568 | 0.001664 |
| is_volatile_test.test | RUN | 0.114363 | 0.294946 | 0.420257 | 0.001475 | 0.001754 | 0.001847 |
| is_void_test.test | RUN | 0.111669 | 0.272762 | 0.401609 | 0.001728 | 0.001576 | 0.001812 |
| is_virtual_base_of_test.test | RUN | 0.127448 | 0.338123 | 0.581418 | 0.001406 | 0.001287 | 0.001465 |
| is_unsigned_test.test | RUN | 0.113539 | 0.277349 | 0.416408 | 0.001575 | 0.001560 | 0.001394 |
| is_unscoped_enum_test.test | RUN | 0.110272 | 0.250122 | 0.379158 | 0.001539 | 0.001750 | 0.001431 |
| is_union_test.test | RUN | 0.120013 | 0.324515 | 0.518529 | 0.001566 | 0.001736 | 0.001685 |
| is_unbounded_array_test.test | RUN | 0.109602 | 0.276475 | 0.429494 | 0.001576 | 0.001774 | 0.001813 |
| is_trivially_copyable_test.test | RUN | 0.177052 | 0.566956 | 1.087506 | 0.001540 | 0.001428 | 0.001495 |
| is_swappable_test.test | RUN | 0.143848 | 0.433119 | 0.770733 | 0.001431 | 0.001592 | 0.001760 |
| is_stateless_test.test | RUN | 0.163390 | 0.493939 | 0.913204 | 0.001461 | 0.001744 | 0.001436 |
| is_signed_test.test | RUN | 0.114873 | 0.291959 | 0.446966 | 0.001622 | 0.001507 | 0.001454 |
| is_scoped_enum_test.test | RUN | 0.112042 | 0.242384 | 0.385965 | 0.001605 | 0.001738 | 0.001648 |
| is_scalar_test.test | RUN | 0.144639 | 0.439469 | 0.803734 | 0.001282 | 0.001876 | 0.001581 |
| is_same_test.test | RUN | 0.109358 | 0.269033 | 0.431295 | 0.001531 | 0.001695 | 0.001731 |
| is_rvalue_reference_test.test | RUN | 0.115521 | 0.300761 | 0.495627 | 0.001484 | 0.001796 | 0.001470 |
| is_reference_test.test | RUN | 0.118503 | 0.300147 | 0.498805 | 0.001488 | 0.001750 | 0.001463 |
| is_polymorphic_test.test | RUN | 0.117449 | 0.319242 | 0.504393 | 0.001443 | 0.001889 | 0.001787 |
| is_pointer_test.test | RUN | 0.120670 | 0.304585 | 0.487710 | 0.001493 | 0.001636 | 0.001770 |
| is_pod_test.test | RUN | 0.155031 | 0.513512 | 0.927372 | 0.001501 | 0.001834 | 0.001822 |
| is_object_test.test | RUN | 0.108551 | 0.255572 | 0.385949 | 0.001517 | 0.001885 | 0.001784 |
| is_nothrow_swappable_test.test | RUN | 0.155650 | 0.466747 | 0.874652 | 0.001406 | 0.001885 | 0.001807 |
| is_nothrow_move_constructible_test.test | RUN | 0.149622 | 0.482839 | 0.891192 | 0.001654 | 0.001595 | 0.001606 |
| is_nothrow_move_assignable_test.test | RUN | 0.150616 | 0.481750 | 0.898482 | 0.001547 | 0.001692 | 0.001405 |
| is_noncopyable_test.test | RUN | 0.109113 | 0.259127 | 0.397702 | 0.001303 | 0.001830 | 0.001485 |
| is_member_pointer_test.test | RUN | 0.112371 | 0.265391 | 0.388954 | 0.001562 | 0.001863 | 0.001807 |
| is_member_obj_test.test | RUN | 0.110055 | 0.266135 | 0.426973 | 0.001741 | 0.001715 | 0.001782 |
| is_member_func_test.test | RUN | 0.112038 | 0.287839 | 0.457897 | 0.001570 | 0.001928 | 0.001498 |
| is_lvalue_reference_test.test | RUN | 0.118818 | 0.303128 | 0.472124 | 0.001512 | 0.001895 | 0.001858 |
| is_list_constructible_test.test | RUN | 0.134391 | 0.353264 | 0.531832 | 0.001414 | 0.001832 | 0.001828 |
| is_integral_test.test | RUN | 0.138048 | 0.429684 | 0.790932 | 0.001775 | 0.001612 | 0.001614 |
| is_fundamental_test.test | RUN | 0.143476 | 0.427848 | 0.808722 | 0.001448 | 0.001834 | 0.001442 |
| is_function_test.test | RUN | 0.113043 | 0.289649 | 0.403012 | 0.001466 | 0.001714 | 0.001651 |
| is_floating_point_test.test | RUN | 0.120900 | 0.305901 | 0.476473 | 0.001495 | 0.001823 | 0.001566 |
| is_float_test.test | RUN | 0.112578 | 0.301205 | 0.508464 | 0.001818 | 0.001762 | 0.001776 |
| is_final_test.test | RUN | 0.117252 | 0.313412 | 0.489931 | 0.001684 | 0.001723 | 0.001528 |
| is_enum_test.test | RUN | 0.107983 | 0.254853 | 0.392536 | 0.001442 | 0.001362 | 0.001677 |
| is_empty_test.test | RUN | 0.118942 | 0.295743 | 0.449030 | 0.001686 | 0.001723 | 0.001624 |
| is_detected_test.test | RUN | 0.105570 | 0.254914 | 0.340073 | 0.001714 | 0.001699 | 0.001811 |
| is_detected_exact_test.test | RUN | 0.108926 | 0.249792 | 0.355651 | 0.001443 | 0.001877 | 0.001707 |
| is_destructible_test.test | RUN | 0.149026 | 0.484017 | 0.905282 | 0.001559 | 0.001920 | 0.001622 |
| is_default_constr_test.test | RUN | 0.156101 | 0.508628 | 0.897217 | 0.001765 | 0.001866 | 0.001619 |
| is_copy_constructible_test.test | RUN | 0.161851 | 0.521685 | 0.980864 | 0.001762 | 0.001620 | 0.001647 |
| is_copy_assignable_test.test | RUN | 0.168925 | 0.515474 | 0.958796 | 0.001589 | 0.001880 | 0.001771 |
| is_convertible_test.test | RUN | 0.160938 | 0.438600 | 0.797750 | 0.001493 | 0.001568 | 0.001511 |
| is_constructible_test.test | RUN | 0.126840 | 0.302615 | 0.578847 | 0.001601 | 0.001849 | 0.001530 |
| is_const_test.test | RUN | 0.117293 | 0.284119 | 0.449758 | 0.001730 | 0.001666 | 0.001572 |
| is_compound_test.test | RUN | 0.110182 | 0.253679 | 0.369365 | 0.001470 | 0.001872 | 0.001519 |
| is_complex_test.test | RUN | 0.149223 | 0.328880 | 0.517970 | 0.001456 | 0.001640 | 0.001780 |
| is_complete_test.test | RUN | 0.129885 | 0.332989 | 0.572601 | 0.001778 | 0.001618 | 0.001818 |
| is_class_test.test | RUN | 0.120406 | 0.304887 | 0.497510 | 0.001448 | 0.001534 | 0.001486 |
| is_bounded_array_test.test | RUN | 0.112768 | 0.274621 | 0.431334 | 0.001904 | 0.001807 | 0.001504 |
| is_base_of_test.test | RUN | 0.118922 | 0.299364 | 0.467637 | 0.001287 | 0.001906 | 0.001770 |
| is_base_and_derived_test.test | RUN | 0.117028 | 0.301544 | 0.471664 | 0.001297 | 0.001559 | 0.001740 |
| is_assignable_test.test | RUN | 0.139043 | 0.422139 | 0.698376 | 0.001663 | 0.001805 | 0.001844 |
| is_array_test.test | RUN | 0.113442 | 0.285727 | 0.457194 | 0.001518 | 0.001685 | 0.001591 |
| is_arithmetic_test.test | RUN | 0.138711 | 0.424141 | 0.731582 | 0.001478 | 0.001667 | 0.001730 |
| is_abstract_test.test | RUN | 0.250254 | 1.169205 | 2.523502 | 0.001659 | 0.003358 | 0.001762 |
| integral_constant_test.test | RUN | 0.018183 | 0.048664 | 0.055093 | 0.000778 | 0.000707 | 0.001732 |
| has_virtual_destructor_test.test | RUN | 0.126185 | 0.322134 | 0.546312 | 0.001804 | 0.001853 | 0.001804 |
| has_unary_plus_test.test | RUN | 0.233797 | 1.283856 | 2.001101 | 0.001634 | 0.001769 | 0.001614 |
| has_unary_minus_test.test | RUN | 0.230207 | 1.266375 | 1.886347 | 0.001606 | 0.001596 | 0.001740 |
| has_trivial_move_constructor_test.test | RUN | 0.160177 | 0.495340 | 0.964109 | 0.001599 | 0.001579 | 0.001855 |
| has_trivial_move_assign_test.test | RUN | 0.158389 | 0.463763 | 0.888328 | 0.001890 | 0.001810 | 0.001716 |
| has_trivial_destructor_test.test | RUN | 0.187541 | 0.463559 | 0.922036 | 0.001513 | 0.001622 | 0.001785 |
| has_trivial_copy_test.test | RUN | 0.179534 | 0.532725 | 0.957562 | 0.001641 | 0.001978 | 0.001822 |
| has_trivial_constr_test.test | RUN | 0.170896 | 0.540000 | 0.965712 | 0.001612 | 0.001662 | 0.001771 |
| has_trivial_assign_test.test | RUN | 0.157899 | 0.521497 | 0.950495 | 0.001544 | 0.001712 | 0.001806 |
| has_right_shift_test.test | RUN | 0.243015 | 0.990865 | 2.051064 | 0.001675 | 0.001586 | 0.001642 |
| has_right_shift_assign_test.test | RUN | 0.231319 | 0.919627 | 1.939215 | 0.001543 | 0.001852 | 0.001546 |
| has_prefix_classes3_test.test | RUN | 0.170523 | 0.518197 | 1.034491 | 0.001329 | 0.001541 | 0.001686 |
| has_prefix_classes2_test.test | RUN | 0.174417 | 0.546423 | 1.022763 | 0.001572 | 0.001736 | 0.001546 |
| has_prefix_classes1_test.test | RUN | 0.173782 | 0.558883 | 0.958204 | 0.001876 | 0.001598 | 0.001764 |
| has_prefix_classes0_test.test | RUN | 0.171050 | 0.549040 | 0.958887 | 0.001666 | 0.001656 | 0.001716 |
| has_pre_increment_test.test | RUN | 0.230915 | 1.277694 | 1.942181 | 0.001525 | 0.001615 | 0.001437 |
| has_pre_decrement_test.test | RUN | 0.233852 | 1.250921 | 1.941299 | 0.001490 | 0.001866 | 0.001634 |
| has_postfix_classes3_test.test | RUN | 0.172163 | 0.547860 | 1.032340 | 0.001565 | 0.001815 | 0.001780 |
| has_postfix_classes2_test.test | RUN | 0.169847 | 0.542053 | 0.984477 | 0.001614 | 0.001730 | 0.001582 |
| has_postfix_classes1_test.test | RUN | 0.172591 | 0.552980 | 0.995561 | 0.001551 | 0.001576 | 0.001694 |
| has_postfix_classes0_test.test | RUN | 0.172632 | 0.542814 | 0.983560 | 0.001710 | 0.001734 | 0.001693 |
| has_post_increment_test.test | RUN | 0.228620 | 1.295733 | 1.980529 | 0.001583 | 0.001910 | 0.001720 |
| has_post_decrement_test.test | RUN | 0.225812 | 1.255377 | 1.984292 | 0.001686 | 0.001852 | 0.001476 |
| has_plus_test.test | RUN | 0.231631 | 0.942452 | 1.973632 | 0.001861 | 0.001612 | 0.001658 |
| has_plus_assign_test.test | RUN | 0.241390 | 0.943047 | 1.962593 | 0.001708 | 0.001794 | 0.001482 |
| has_operator_new_test.test | RUN | 0.159700 | 0.466780 | 0.911181 | 0.001760 | 0.001774 | 0.001476 |
| has_nothrow_destructor_test.test | RUN | 0.168937 | 0.515565 | 0.999174 | 0.001593 | 0.001919 | 0.001694 |
| has_nothrow_copy_test.test | RUN | 0.160120 | 0.530628 | 0.916929 | 0.001657 | 0.001570 | 0.001704 |
| has_nothrow_constr_test.test | RUN | 0.152797 | 0.509051 | 0.887091 | 0.001563 | 0.001949 | 0.001656 |
| has_nothrow_assign_test.test | RUN | 0.157376 | 0.487954 | 0.914674 | 0.001747 | 0.001888 | 0.001495 |
| has_not_equal_to_test.test | RUN | 0.238009 | 1.229302 | 2.000658 | 0.001568 | 0.001733 | 0.001788 |
| has_negate_test.test | RUN | 0.224859 | 0.907934 | 1.835209 | 0.001512 | 0.001610 | 0.001830 |
| has_multiplies_test.test | RUN | 0.235169 | 0.895896 | 2.012033 | 0.001700 | 0.001732 | 0.001462 |
| has_multiplies_assign_test.test | RUN | 0.233974 | 0.943137 | 1.998929 | 0.001518 | 0.001948 | 0.001411 |
| has_modulus_test.test | RUN | 0.233337 | 0.962620 | 1.944547 | 0.001758 | 0.001584 | 0.001663 |
| has_modulus_assign_test.test | RUN | 0.231701 | 0.938235 | 1.919264 | 0.001616 | 0.001681 | 0.001714 |
| has_minus_test.test | RUN | 0.235833 | 0.978865 | 2.010640 | 0.001538 | 0.001879 | 0.001562 |
| has_minus_assign_test.test | RUN | 0.240505 | 0.962623 | 2.020463 | 0.001731 | 0.001875 | 0.001544 |
| has_logical_or_test.test | RUN | 0.230195 | 0.922231 | 1.969070 | 0.001720 | 0.001785 | 0.001672 |
| has_logical_not_test.test | RUN | 0.228410 | 0.921436 | 1.908087 | 0.001556 | 0.001659 | 0.001759 |
| has_logical_and_test.test | RUN | 0.234004 | 0.910830 | 2.032884 | 0.001667 | 0.001851 | 0.001509 |
| has_less_test.test | RUN | 0.228971 | 1.241912 | 2.043430 | 0.001650 | 0.001840 | 0.001435 |
| has_less_equal_test.test | RUN | 0.236446 | 1.197583 | 2.001784 | 0.001654 | 0.001632 | 0.001826 |
| has_left_shift_test.test | RUN | 0.260250 | 1.148969 | 2.432003 | 0.001968 | 0.001682 | 0.001818 |
| has_left_shift_assign_test.test | RUN | 0.240144 | 0.931084 | 2.001544 | 0.001716 | 0.003028 | 0.001548 |
| has_greater_test.test | RUN | 0.242744 | 1.269967 | 2.016441 | 0.001622 | 0.001803 | 0.001453 |
| has_greater_equal_test.test | RUN | 0.239264 | 1.264031 | 1.955294 | 0.001668 | 0.001906 | 0.001768 |
| has_equal_to_test.test | RUN | 0.227733 | 1.248202 | 1.951544 | 0.001566 | 0.001687 | 0.001666 |
| has_divides_test.test | RUN | 0.237853 | 0.893817 | 2.002234 | 0.001706 | 0.001739 | 0.001473 |
| has_divides_assign_test.test | RUN | 0.237498 | 0.904588 | 2.007620 | 0.001494 | 0.001880 | 0.001519 |
| has_dereference_test.test | RUN | 0.230396 | 0.895317 | 1.841356 | 0.001490 | 0.001770 | 0.001755 |
| has_complement_test.test | RUN | 0.228701 | 1.273086 | 1.898846 | 0.001464 | 0.001688 | 0.001820 |
| has_bit_xor_test.test | RUN | 0.235141 | 0.868701 | 1.987059 | 0.001700 | 0.001822 | 0.001756 |
| has_bit_xor_assign_test.test | RUN | 0.229853 | 0.941635 | 2.018977 | 0.001590 | 0.001714 | 0.001572 |
| has_bit_or_test.test | RUN | 0.232100 | 0.902351 | 1.896280 | 0.001789 | 0.001702 | 0.001828 |
| has_bit_or_assign_test.test | RUN | 0.232750 | 0.903200 | 1.953717 | 0.001617 | 0.001931 | 0.001694 |
| has_bit_and_test.test | RUN | 0.230866 | 0.962988 | 1.930745 | 0.001784 | 0.001792 | 0.001751 |
| has_bit_and_assign_test.test | RUN | 0.240110 | 0.910328 | 1.921518 | 0.001648 | 0.001878 | 0.001586 |
| has_binary_classes9_test.test | RUN | 0.253905 | 1.126047 | 2.158616 | 0.001945 | 0.001694 | 0.001636 |
| has_binary_classes8_test.test | RUN | 0.262369 | 1.075230 | 2.125755 | 0.001580 | 0.001887 | 0.001766 |
| has_binary_classes7_test.test | RUN | 0.256046 | 1.110387 | 2.182860 | 0.001748 | 0.001990 | 0.001598 |
| has_binary_classes6_test.test | RUN | 0.262294 | 1.099380 | 2.153570 | 0.001741 | 0.001956 | 0.001786 |
| has_binary_classes5_test.test | RUN | 0.255870 | 1.054470 | 2.117367 | 0.001671 | 0.001924 | 0.001793 |
| has_binary_classes4_test.test | RUN | 0.255824 | 1.104119 | 2.195231 | 0.001593 | 0.001817 | 0.001799 |
| has_binary_classes3_test.test | RUN | 0.260162 | 1.101593 | 2.138427 | 0.001792 | 0.002014 | 0.001630 |
| has_binary_classes2_test.test | RUN | 0.260648 | 1.113887 | 2.123834 | 0.001568 | 0.001600 | 0.001601 |
| has_binary_classes1_test.test | RUN | 0.258796 | 1.076235 | 2.128948 | 0.001675 | 0.001437 | 0.001835 |
| has_binary_classes0_test.test | RUN | 0.255467 | 1.124507 | 2.091138 | 0.001314 | 0.001690 | 0.001566 |
| function_traits_test.test | RUN | 0.119417 | 0.300474 | 0.477879 | 0.001499 | 0.001463 | 0.001772 |
| floating_point_promotion_test.test | RUN | 0.113879 | 0.273235 | 0.441038 | 0.001620 | 0.001852 | 0.001710 |
| extent_test.test | RUN | 0.118416 | 0.282002 | 0.413013 | 0.001492 | 0.001638 | 0.001582 |
| enable_if_test.test | RUN | 0.106443 | 0.235826 | 0.356971 | 0.001504 | 0.001529 | 0.001880 |
| disjunction_test.test | RUN | 0.109920 | 0.256258 | 0.362426 | 0.001373 | 0.001895 | 0.001642 |
| detected_test.test | RUN | 0.109149 | 0.245476 | 0.366204 | 0.001712 | 0.001768 | 0.001566 |
| detected_or_test.test | RUN | 0.108306 | 0.262621 | 0.394620 | 0.001641 | 0.001709 | 0.001389 |
| decay_test.test | RUN | 0.274387 | 0.996276 | 2.293275 | 0.001729 | 0.001818 | 0.001640 |
| cxx14_aliases_test.test | RUN | 0.172436 | 0.375256 | 0.581531 | 0.001489 | 0.001771 | 0.001583 |
| copy_reference_test.test | RUN | 0.110243 | 0.257275 | 0.385926 | 0.001539 | 0.001335 | 0.001587 |
| copy_cv_test.test | RUN | 0.114318 | 0.265279 | 0.438143 | 0.001611 | 0.001499 | 0.001704 |
| copy_cv_ref_test.test | RUN | 0.161039 | 0.456213 | 0.934650 | 0.001553 | 0.001956 | 0.001770 |
| conjunction_test.test | RUN | 0.112209 | 0.250221 | 0.390764 | 0.001664 | 0.001834 | 0.001580 |
| conditional_test.test | RUN | 0.110722 | 0.255584 | 0.380539 | 0.001532 | 0.001515 | 0.001466 |
| common_type_test.test | RUN | 0.145313 | 0.382735 | 0.688608 | 0.001709 | 0.001808 | 0.001442 |
| common_type_sfinae_test.test | RUN | 0.111005 | 0.240326 | 0.360939 | 0.001581 | 0.001614 | 0.001775 |
| common_type_sfinae2_test.test | RUN | 0.114894 | 0.247721 | 0.373907 | 0.001651 | 0.001616 | 0.001665 |
| common_type_6_test.test | RUN | 0.114958 | 0.243138 | 0.380908 | 0.001524 | 0.001714 | 0.001844 |
| common_type_5_test.test | RUN | 0.116564 | 0.261535 | 0.380838 | 0.001671 | 0.001738 | 0.001539 |
| common_type_4_test.test | RUN | 0.122832 | 0.279805 | 0.426481 | 0.001803 | 0.001482 | 0.001498 |
| common_type_3_test.test | RUN | 0.108925 | 0.243161 | 0.346661 | 0.001620 | 0.001654 | 0.001660 |
| common_type_2_test.test | RUN | 0.142434 | 0.375984 | 0.744842 | 0.001614 | 0.001725 | 0.001413 |
| alignment_of_test.test | RUN | 0.116959 | 0.305776 | 0.483234 | 0.001741 | 0.001868 | 0.001576 |
| alignment_of_a2_test.test | RUN | 0.117163 | 0.312160 | 0.466043 | 0.001648 | 0.001772 | 0.001264 |
| aligned_storage_test.test | RUN | 0.124909 | 0.289682 | 0.433420 | 0.001842 | 0.001972 | 0.001543 |
| aligned_storage_empy_test.test | RUN | 0.141279 | 0.330255 | 0.549710 | 0.001645 | 0.001777 | 0.001579 |
| aligned_storage_a2_test.test | RUN | 0.118651 | 0.288923 | 0.425064 | 0.001948 | 0.002077 | 0.001574 |
| add_volatile_test.test | RUN | 0.251966 | 0.884019 | 2.219297 | 0.001639 | 0.001794 | 0.001787 |
| add_rvalue_reference_test.test | RUN | 0.285816 | 0.980006 | 2.514985 | 0.001722 | 0.001646 | 0.001756 |
| add_reference_test.test | RUN | 0.276322 | 0.968875 | 2.461152 | 0.001600 | 0.001878 | 0.001804 |
| add_pointer_test.test | RUN | 0.175700 | 0.551758 | 1.280352 | 0.001493 | 0.001569 | 0.001808 |
| add_lvalue_reference_test.test | RUN | 0.274233 | 0.987132 | 2.453780 | 0.001821 | 0.001583 | 0.001785 |
| add_cv_test.test | RUN | 0.260936 | 0.910465 | 2.340969 | 0.001422 | 0.001499 | 0.001692 |
| add_const_test.test | RUN | 0.260278 | 0.906872 | 2.341693 | 0.001834 | 0.001746 | 0.001844 |
| is_virtual_base_of_fail.test | COMPILE_FAIL | 0.104017 | 0.236491 | 0.339636 | — | — | — |
| is_stateless_fail.test | COMPILE_FAIL | 0.111285 | 0.243366 | 0.353262 | — | — | — |
| is_polymorphic_fail.test | COMPILE_FAIL | 0.105219 | 0.225395 | 0.339038 | — | — | — |
| is_nothrow_move_constructible_fail.test | COMPILE_FAIL | 0.108848 | 0.225992 | 0.295155 | — | — | — |
| is_nothrow_move_assignable_fail.test | COMPILE_FAIL | 0.104601 | 0.229298 | 0.332511 | — | — | — |
| is_list_constructible_fail.test | COMPILE_FAIL | 0.105741 | 0.234019 | 0.296646 | — | — | — |
| is_empty_fail.test | COMPILE_FAIL | 0.106465 | 0.230527 | 0.329906 | — | — | — |
| is_destructible_fail.test | COMPILE_FAIL | 0.105285 | 0.232511 | 0.322694 | — | — | — |
| is_default_constructible_fail.test | COMPILE_FAIL | 0.104022 | 0.224551 | 0.332422 | — | — | — |
| is_copy_constructible_fail.test | COMPILE_FAIL | 0.105088 | 0.233169 | 0.339867 | — | — | — |
| is_copy_assignable_fail.test | COMPILE_FAIL | 0.103974 | 0.228512 | 0.322208 | — | — | — |
| is_convertible_fail.test | COMPILE_FAIL | 0.101816 | 0.233191 | 0.333827 | — | — | — |
| is_convertible2_fail.test | COMPILE_FAIL | 0.105717 | 0.228455 | 0.340171 | — | — | — |
| is_constructible_fail.test | COMPILE_FAIL | 0.103576 | 0.236767 | 0.327520 | — | — | — |
| is_base_of_fail.test | COMPILE_FAIL | 0.103255 | 0.230541 | 0.326791 | — | — | — |
| is_assignable_fail.test | COMPILE_FAIL | 0.103293 | 0.228004 | 0.335413 | — | — | — |
| has_nothrow_destruct_fail.test | COMPILE_FAIL | 0.103863 | 0.227689 | 0.328187 | — | — | — |
| has_nothrow_copy_fail.test | COMPILE_FAIL | 0.103560 | 0.236841 | 0.338927 | — | — | — |
| has_nothrow_cons_fail.test | COMPILE_FAIL | 0.102769 | 0.232353 | 0.334192 | — | — | — |
| has_nothrow_assign_fail.test | COMPILE_FAIL | 0.103642 | 0.227922 | 0.323264 | — | — | — |
| common_type_fail.test | COMPILE_FAIL | 0.106544 | 0.230371 | 0.331680 | — | — | — |
| common_type2_fail.test | COMPILE_FAIL | 0.102552 | 0.233866 | 0.333900 | — | — | — |
| has_nothrow_assign_test_no_intrinsics.test | RUN | 0.159519 | 0.510985 | 0.953348 | 0.001698 | 0.001756 | 0.001789 |
| has_nothrow_constr_test_no_intrinsics.test | RUN | 0.155343 | 0.506957 | 0.901151 | 0.001595 | 0.001422 | 0.001680 |
| has_nothrow_copy_test_no_intrinsics.test | RUN | 0.155096 | 0.513760 | 0.951206 | 0.001620 | 0.001710 | 0.001413 |
| is_nothrow_move_assignable_test_no_intrinsics.test | RUN | 0.155597 | 0.496430 | 0.939467 | 0.001384 | 0.001359 | 0.001351 |
| is_nothrow_move_constructible_test_no_intrinsics.test | RUN | 0.104174 | 0.317275 | 0.594280 | 0.001390 | 0.001268 | 0.001300 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.999×† | 1.031×, 0.967× | 1.055× |
| clang | 1.013× | 1.022×, 1.004× | 0.970× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1363 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43638391827).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| add_const_test.test | 10 | 0.001019s | 0.001081s | 0.001016s | byte equality observed |
| add_cv_test.test | 10 | 0.001037s | 0.001054s | 0.001045s | byte equality observed |
| add_lvalue_reference_test.test | 10 | 0.001026s | 0.001076s | 0.001026s | byte equality observed |
| add_pointer_test.test | 10 | 0.001027s | 0.001068s | 0.001064s | byte equality observed |
| add_reference_test.test | 10 | 0.001041s | 0.001074s | 0.001046s | byte equality observed |
| add_rvalue_reference_test.test | 10 | 0.001043s | 0.001043s | 0.001089s | byte equality observed |
| add_volatile_test.test | 10 | 0.001060s | 0.001066s | 0.001104s | byte equality observed |
| aligned_storage_a2_test.test | 10 | 0.001103s | 0.001190s | 0.001179s | byte equality observed |
| aligned_storage_empy_test.test | 10 | 0.001035s | 0.001062s | 0.001061s | byte equality observed |
| aligned_storage_test.test | 10 | 0.001118s | 0.001203s | 0.001188s | byte equality observed |
| alignment_of_a2_test.test | 10 | 0.001022s | 0.001037s | 0.001083s | byte equality observed |
| alignment_of_test.test | 10 | 0.001009s | 0.001059s | 0.001070s | byte equality observed |
| common_type_2_test.test | 10 | 0.001019s | 0.001075s | 0.001061s | byte equality observed |
| common_type_3_test.test | 10 | 0.001028s | 0.001061s | 0.001090s | byte equality observed |
| common_type_4_test.test | 10 | 0.001027s | 0.001074s | 0.001073s | byte equality observed |
| common_type_5_test.test | 10 | 0.001012s | 0.001058s | 0.001080s | byte equality observed |
| common_type_6_test.test | 10 | 0.001022s | 0.001061s | 0.001074s | byte equality observed |
| common_type_sfinae2_test.test | 10 | 0.001031s | 0.001064s | 0.001067s | byte equality observed |
| common_type_sfinae_test.test | 10 | 0.001087s | 0.001081s | 0.001102s | byte equality observed |
| common_type_test.test | 10 | 0.001025s | 0.001069s | 0.001081s | byte equality observed |
| conditional_test.test | 10 | 0.001015s | 0.001088s | 0.001080s | byte equality observed |
| conjunction_test.test | 10 | 0.001072s | 0.001061s | 0.001129s | byte equality observed |
| copy_cv_ref_test.test | 10 | 0.001050s | 0.001085s | 0.001090s | byte equality observed |
| copy_cv_test.test | 10 | 0.001007s | 0.001054s | 0.001100s | byte equality observed |
| copy_reference_test.test | 10 | 0.001016s | 0.001051s | 0.001096s | byte equality observed |
| cxx14_aliases_test.test | 10 | 0.001013s | 0.001080s | 0.001085s | byte equality observed |
| decay_test.test | 10 | 0.001044s | 0.001051s | 0.001087s | byte equality observed |
| detected_or_test.test | 10 | 0.001037s | 0.001070s | 0.001059s | byte equality observed |
| detected_test.test | 10 | 0.001023s | 0.001083s | 0.001065s | byte equality observed |
| disjunction_test.test | 10 | 0.001019s | 0.001070s | 0.001079s | byte equality observed |
| enable_if_test.test | 10 | 0.001043s | 0.001056s | 0.001073s | byte equality observed |
| extent_test.test | 10 | 0.001010s | 0.001096s | 0.001099s | byte equality observed |
| floating_point_promotion_test.test | 10 | 0.001004s | 0.001045s | 0.001097s | byte equality observed |
| function_traits_test.test | 10 | 0.001038s | 0.001077s | 0.001058s | byte equality observed |
| has_binary_classes0_test.test | 10 | 0.000997s | 0.001051s | 0.001091s | byte equality observed |
| has_binary_classes1_test.test | 10 | 0.001049s | 0.001080s | 0.001084s | byte equality observed |
| has_binary_classes2_test.test | 10 | 0.001041s | 0.001041s | 0.001056s | byte equality observed |
| has_binary_classes3_test.test | 10 | 0.001027s | 0.001056s | 0.001083s | byte equality observed |
| has_binary_classes4_test.test | 10 | 0.001070s | 0.001088s | 0.001054s | byte equality observed |
| has_binary_classes5_test.test | 10 | 0.001071s | 0.001059s | 0.001066s | byte equality observed |
| has_binary_classes6_test.test | 10 | 0.001070s | 0.001055s | 0.001081s | byte equality observed |
| has_binary_classes7_test.test | 10 | 0.001089s | 0.001067s | 0.001047s | byte equality observed |
| has_binary_classes8_test.test | 10 | 0.001076s | 0.001057s | 0.001086s | byte equality observed |
| has_binary_classes9_test.test | 10 | 0.001133s | 0.001091s | 0.001092s | byte equality observed |
| has_bit_and_assign_test.test | 10 | 0.001073s | 0.001047s | 0.001052s | byte equality observed |
| has_bit_and_test.test | 10 | 0.001122s | 0.001078s | 0.001063s | byte equality observed |
| has_bit_or_assign_test.test | 10 | 0.001114s | 0.001063s | 0.001086s | byte equality observed |
| has_bit_or_test.test | 10 | 0.001137s | 0.001077s | 0.001079s | byte equality observed |
| has_bit_xor_assign_test.test | 10 | 0.001115s | 0.001053s | 0.001080s | byte equality observed |
| has_bit_xor_test.test | 10 | 0.001143s | 0.001030s | 0.001093s | byte equality observed |
| has_complement_test.test | 10 | 0.001128s | 0.001041s | 0.001081s | byte equality observed |
| has_dereference_test.test | 10 | 0.001136s | 0.001092s | 0.001084s | byte equality observed |
| has_divides_assign_test.test | 10 | 0.001137s | 0.001049s | 0.001076s | byte equality observed |
| has_divides_test.test | 10 | 0.001149s | 0.001070s | 0.001085s | byte equality observed |
| has_equal_to_test.test | 10 | 0.001134s | 0.001065s | 0.001079s | byte equality observed |
| has_greater_equal_test.test | 10 | 0.001138s | 0.001113s | 0.001049s | byte equality observed |
| has_greater_test.test | 10 | 0.001130s | 0.001093s | 0.001089s | byte equality observed |
| has_left_shift_assign_test.test | 10 | 0.001106s | 0.001112s | 0.001059s | byte equality observed |
| has_left_shift_test.test | 10 | 0.001147s | 0.001143s | 0.001057s | byte equality observed |
| has_less_equal_test.test | 10 | 0.001122s | 0.001130s | 0.001095s | byte equality observed |
| has_less_test.test | 10 | 0.001131s | 0.001120s | 0.001071s | byte equality observed |
| has_logical_and_test.test | 10 | 0.001135s | 0.001138s | 0.001082s | byte equality observed |
| has_logical_not_test.test | 10 | 0.001134s | 0.001123s | 0.001077s | byte equality observed |
| has_logical_or_test.test | 10 | 0.001159s | 0.001096s | 0.001064s | byte equality observed |
| has_minus_assign_test.test | 10 | 0.001143s | 0.001121s | 0.001083s | byte equality observed |
| has_minus_test.test | 10 | 0.001156s | 0.001146s | 0.001065s | byte equality observed |
| has_modulus_assign_test.test | 10 | 0.001124s | 0.001133s | 0.001083s | byte equality observed |
| has_modulus_test.test | 10 | 0.001151s | 0.001140s | 0.001090s | byte equality observed |
| has_multiplies_assign_test.test | 10 | 0.001133s | 0.001122s | 0.001066s | byte equality observed |
| has_multiplies_test.test | 10 | 0.001145s | 0.001124s | 0.001056s | byte equality observed |
| has_negate_test.test | 10 | 0.001119s | 0.001137s | 0.001085s | byte equality observed |
| has_not_equal_to_test.test | 10 | 0.001156s | 0.001159s | 0.001091s | byte equality observed |
| has_nothrow_assign_test.test | 10 | 0.001133s | 0.001130s | 0.001112s | byte equality observed |
| has_nothrow_assign_test_no_intrinsics.test | 10 | 0.001126s | 0.001128s | 0.001115s | byte equality observed |
| has_nothrow_constr_test.test | 10 | 0.001137s | 0.001138s | 0.001131s | byte equality observed |
| has_nothrow_constr_test_no_intrinsics.test | 10 | 0.001133s | 0.001108s | 0.001139s | byte equality observed |
| has_nothrow_copy_test.test | 10 | 0.001112s | 0.001149s | 0.001174s | byte equality observed |
| has_nothrow_copy_test_no_intrinsics.test | 10 | 0.001143s | 0.001134s | 0.001150s | byte equality observed |
| has_nothrow_destructor_test.test | 10 | 0.001144s | 0.001145s | 0.001165s | byte equality observed |
| has_operator_new_test.test | 10 | 0.001131s | 0.001132s | 0.001124s | byte equality observed |
| has_plus_assign_test.test | 10 | 0.001129s | 0.001164s | 0.001125s | byte equality observed |
| has_plus_test.test | 10 | 0.001156s | 0.001116s | 0.001147s | byte equality observed |
| has_post_decrement_test.test | 10 | 0.001166s | 0.001139s | 0.001115s | byte equality observed |
| has_post_increment_test.test | 10 | 0.001158s | 0.001141s | 0.001169s | byte equality observed |
| has_postfix_classes0_test.test | 10 | 0.001144s | 0.001138s | 0.001159s | byte equality observed |
| has_postfix_classes1_test.test | 10 | 0.001142s | 0.001132s | 0.001132s | byte equality observed |
| has_postfix_classes2_test.test | 10 | 0.001150s | 0.001138s | 0.001130s | byte equality observed |
| has_postfix_classes3_test.test | 10 | 0.001156s | 0.001134s | 0.001146s | byte equality observed |
| has_pre_decrement_test.test | 10 | 0.001150s | 0.001107s | 0.001144s | byte equality observed |
| has_pre_increment_test.test | 6 | 0.001158s | 0.001117s | 0.001127s | byte equality observed |
| has_prefix_classes0_test.test | 10 | 0.001146s | 0.001130s | 0.001163s | byte equality observed |
| has_prefix_classes1_test.test | 10 | 0.001161s | 0.001156s | 0.001164s | byte equality observed |
| has_prefix_classes2_test.test | 10 | 0.001155s | 0.001141s | 0.001179s | byte equality observed |
| has_prefix_classes3_test.test | 10 | 0.001165s | 0.001133s | 0.001166s | byte equality observed |
| has_right_shift_assign_test.test | 10 | 0.001172s | 0.001173s | 0.001141s | byte equality observed |
| has_right_shift_test.test | 10 | 0.001135s | 0.001138s | 0.001122s | byte equality observed |
| has_trivial_assign_test.test | 10 | 0.001214s | 0.001197s | 0.001197s | byte equality observed |
| has_trivial_constr_test.test | 10 | 0.001206s | 0.001186s | 0.001213s | native test oracle; output varies |
| has_trivial_copy_test.test | 10 | 0.001211s | 0.001221s | 0.001229s | native test oracle; output varies |
| has_trivial_destructor_test.test | 10 | 0.001153s | 0.001132s | 0.001167s | byte equality observed |
| has_trivial_move_assign_test.test | 10 | 0.001137s | 0.001150s | 0.001147s | byte equality observed |
| has_trivial_move_constructor_test.test | 10 | 0.001154s | 0.001150s | 0.001167s | byte equality observed |
| has_unary_minus_test.test | 10 | 0.001148s | 0.001139s | 0.001154s | byte equality observed |
| has_unary_plus_test.test | 10 | 0.001157s | 0.001173s | 0.001142s | byte equality observed |
| has_virtual_destructor_test.test | 10 | 0.001156s | 0.001144s | 0.001140s | byte equality observed |
| integral_constant_test.test | 10 | 0.000515s | 0.000524s | 0.001158s | byte equality observed |
| is_abstract_test.test | 10 | 0.001161s | 0.001150s | 0.001162s | byte equality observed |
| is_arithmetic_test.test | 10 | 0.001162s | 0.001166s | 0.001129s | byte equality observed |
| is_array_test.test | 10 | 0.001130s | 0.001147s | 0.001166s | byte equality observed |
| is_assignable_test.test | 10 | 0.001158s | 0.001159s | 0.001146s | byte equality observed |
| is_base_and_derived_test.test | 10 | 0.001144s | 0.001133s | 0.001181s | byte equality observed |
| is_base_of_test.test | 10 | 0.001150s | 0.001144s | 0.001152s | byte equality observed |
| is_bounded_array_test.test | 10 | 0.001144s | 0.001149s | 0.001156s | byte equality observed |
| is_class_test.test | 10 | 0.001162s | 0.001158s | 0.001155s | byte equality observed |
| is_complete_test.test | 10 | 0.001144s | 0.001167s | 0.001140s | byte equality observed |
| is_complex_test.test | 10 | 0.001155s | 0.001146s | 0.001145s | byte equality observed |
| is_compound_test.test | 10 | 0.001155s | 0.001137s | 0.001148s | byte equality observed |
| is_const_test.test | 10 | 0.001160s | 0.001167s | 0.001171s | byte equality observed |
| is_constructible_test.test | 10 | 0.001167s | 0.001139s | 0.001156s | byte equality observed |
| is_convertible_test.test | 10 | 0.001157s | 0.001145s | 0.001137s | byte equality observed |
| is_copy_assignable_test.test | 10 | 0.001146s | 0.001152s | 0.001164s | byte equality observed |
| is_copy_constructible_test.test | 10 | 0.001168s | 0.001166s | 0.001151s | byte equality observed |
| is_default_constr_test.test | 10 | 0.001157s | 0.001137s | 0.001142s | byte equality observed |
| is_destructible_test.test | 10 | 0.001157s | 0.001167s | 0.001147s | byte equality observed |
| is_detected_exact_test.test | 10 | 0.001159s | 0.001154s | 0.001163s | byte equality observed |
| is_detected_test.test | 10 | 0.001142s | 0.001158s | 0.001151s | byte equality observed |
| is_empty_test.test | 10 | 0.001147s | 0.001143s | 0.001152s | byte equality observed |
| is_enum_test.test | 10 | 0.001155s | 0.001138s | 0.001140s | byte equality observed |
| is_final_test.test | 10 | 0.001141s | 0.001160s | 0.001156s | byte equality observed |
| is_float_test.test | 10 | 0.001148s | 0.001142s | 0.001164s | byte equality observed |
| is_floating_point_test.test | 10 | 0.001178s | 0.001151s | 0.001148s | byte equality observed |
| is_function_test.test | 10 | 0.001148s | 0.001169s | 0.001172s | byte equality observed |
| is_fundamental_test.test | 10 | 0.001170s | 0.001138s | 0.001144s | byte equality observed |
| is_integral_test.test | 10 | 0.001170s | 0.001120s | 0.001165s | byte equality observed |
| is_list_constructible_test.test | 10 | 0.001163s | 0.001143s | 0.001169s | byte equality observed |
| is_lvalue_reference_test.test | 10 | 0.001157s | 0.001164s | 0.001172s | byte equality observed |
| is_member_func_test.test | 10 | 0.001157s | 0.001159s | 0.001160s | byte equality observed |
| is_member_obj_test.test | 10 | 0.001156s | 0.001163s | 0.001159s | byte equality observed |
| is_member_pointer_test.test | 10 | 0.001156s | 0.001151s | 0.001169s | byte equality observed |
| is_noncopyable_test.test | 10 | 0.001141s | 0.001148s | 0.001171s | byte equality observed |
| is_nothrow_move_assignable_test.test | 10 | 0.001159s | 0.001146s | 0.001186s | byte equality observed |
| is_nothrow_move_assignable_test_no_intrinsics.test | 10 | 0.001159s | 0.001153s | 0.001150s | byte equality observed |
| is_nothrow_move_constructible_test.test | 10 | 0.001154s | 0.001171s | 0.001153s | byte equality observed |
| is_nothrow_move_constructible_test_no_intrinsics.test | 10 | 0.001168s | 0.001124s | 0.001152s | byte equality observed |
| is_nothrow_swappable_test.test | 10 | 0.001162s | 0.001168s | 0.001150s | byte equality observed |
| is_object_test.test | 10 | 0.001150s | 0.001133s | 0.001150s | byte equality observed |
| is_pod_test.test | 10 | 0.001147s | 0.001147s | 0.001147s | byte equality observed |
| is_pointer_test.test | 10 | 0.001151s | 0.001154s | 0.001152s | byte equality observed |
| is_polymorphic_test.test | 10 | 0.001142s | 0.001169s | 0.001154s | byte equality observed |
| is_reference_test.test | 10 | 0.001165s | 0.001179s | 0.001149s | byte equality observed |
| is_rvalue_reference_test.test | 10 | 0.001158s | 0.001148s | 0.001151s | byte equality observed |
| is_same_test.test | 10 | 0.001146s | 0.001158s | 0.001152s | byte equality observed |
| is_scalar_test.test | 10 | 0.001154s | 0.001164s | 0.001138s | byte equality observed |
| is_scoped_enum_test.test | 10 | 0.001157s | 0.001169s | 0.001154s | byte equality observed |
| is_signed_test.test | 10 | 0.001152s | 0.001162s | 0.001149s | byte equality observed |
| is_stateless_test.test | 10 | 0.001145s | 0.001136s | 0.001164s | byte equality observed |
| is_swappable_test.test | 10 | 0.001122s | 0.001170s | 0.001148s | byte equality observed |
| is_trivially_copyable_test.test | 10 | 0.001200s | 0.001179s | 0.001184s | byte equality observed |
| is_unbounded_array_test.test | 10 | 0.001158s | 0.001141s | 0.001138s | byte equality observed |
| is_union_test.test | 10 | 0.001149s | 0.001159s | 0.001152s | byte equality observed |
| is_unscoped_enum_test.test | 10 | 0.001156s | 0.001153s | 0.001134s | byte equality observed |
| is_unsigned_test.test | 10 | 0.001130s | 0.001159s | 0.001147s | byte equality observed |
| is_virtual_base_of_test.test | 10 | 0.001142s | 0.001162s | 0.001140s | byte equality observed |
| is_void_test.test | 10 | 0.001142s | 0.001172s | 0.001150s | byte equality observed |
| is_volatile_test.test | 10 | 0.001143s | 0.001138s | 0.001140s | byte equality observed |
| make_signed_test.test | 10 | 0.001144s | 0.001153s | 0.001139s | byte equality observed |
| make_unsigned_test.test | 10 | 0.001153s | 0.001151s | 0.001152s | byte equality observed |
| make_void_test.test | 10 | 0.001155s | 0.001161s | 0.001145s | byte equality observed |
| mpl_interop_test1.test | 10 | 0.000519s | 0.000521s | 0.001162s | byte equality observed |
| mpl_interop_test2.test | 10 | 0.000522s | 0.000523s | 0.001146s | byte equality observed |
| mpl_interop_test3.test | 10 | 0.000515s | 0.000535s | 0.001155s | byte equality observed |
| negation_test.test | 10 | 0.001207s | 0.001236s | 0.001152s | byte equality observed |
| promote_basic_test.test | 10 | 0.000513s | 0.000518s | 0.001134s | byte equality observed |
| promote_enum_msvc_bug_test.test | 10 | 0.000518s | 0.000530s | 0.001162s | byte equality observed |
| promote_enum_test.test | 10 | 0.000516s | 0.000542s | 0.001138s | byte equality observed |
| promote_mpl_test.test | 10 | 0.000514s | 0.000519s | 0.001160s | byte equality observed |
| rank_test.test | 10 | 0.001163s | 0.001175s | 0.001142s | byte equality observed |
| remove_all_extents_test.test | 10 | 0.001140s | 0.001154s | 0.001156s | byte equality observed |
| remove_bounds_test.test | 10 | 0.001159s | 0.001180s | 0.001159s | byte equality observed |
| remove_const_test.test | 10 | 0.001146s | 0.001189s | 0.001138s | byte equality observed |
| remove_cv_ref_test.test | 10 | 0.001161s | 0.001155s | 0.001143s | byte equality observed |
| remove_cv_test.test | 10 | 0.001144s | 0.001165s | 0.001157s | byte equality observed |
| remove_extent_test.test | 10 | 0.001173s | 0.001155s | 0.001154s | byte equality observed |
| remove_pointer_test.test | 10 | 0.001170s | 0.001173s | 0.001149s | byte equality observed |
| remove_reference_test.test | 10 | 0.001170s | 0.001156s | 0.001137s | byte equality observed |
| remove_volatile_test.test | 10 | 0.001161s | 0.001151s | 0.001164s | byte equality observed |
| tricky_abstract_type_test.test | 10 | 0.001166s | 0.001138s | 0.001160s | byte equality observed |
| tricky_add_pointer_test.test | 10 | 0.001150s | 0.001158s | 0.001174s | byte equality observed |
| tricky_function_type_test.test | 10 | 0.001155s | 0.001172s | 0.001155s | byte equality observed |
| tricky_incomplete_type_test.test | 10 | 0.001166s | 0.001161s | 0.001158s | byte equality observed |
| tricky_is_enum_test.test | 10 | 0.001142s | 0.001150s | 0.001144s | byte equality observed |
| tricky_partial_spec_test.test | 10 | 0.001166s | 0.001158s | 0.001154s | byte equality observed |
| tricky_rvalue_test.test | 10 | 0.001156s | 0.001154s | 0.001156s | byte equality observed |
| type_identity_test.test | 10 | 0.001175s | 0.001144s | 0.001135s | byte equality observed |
| type_traits_test.test | 10 | 0.000521s | 0.000526s | 0.001147s | byte equality observed |
| type_with_alignment_test.test | 10 | 0.001277s | 0.001292s | 0.001302s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43638391827).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
