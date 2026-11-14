# libs/type_traits/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| type_with_alignment_test.test | RUN | 0.120442 | 0.335756 | 0.489257 | 0.001744 | 0.001687 | 0.001513 |
| type_traits_test.test | RUN | 0.172539 | 0.351029 | 0.505869 | 0.000626 | 0.000601 | 0.001456 |
| type_identity_test.test | RUN | 0.311471 | 1.187533 | 2.874757 | 0.001746 | 0.001860 | 0.001700 |
| tricky_rvalue_test.test | RUN | 0.111176 | 0.271271 | 0.392048 | 0.001662 | 0.001709 | 0.001434 |
| tricky_partial_spec_test.test | RUN | 0.133568 | 0.375919 | 0.654109 | 0.001731 | 0.001775 | 0.001758 |
| tricky_is_enum_test.test | RUN | 0.109584 | 0.242715 | 0.362143 | 0.001580 | 0.001854 | 0.001785 |
| tricky_incomplete_type_test.test | RUN | 0.179313 | 0.401904 | 0.610937 | 0.001924 | 0.001554 | 0.001767 |
| tricky_function_type_test.test | RUN | 0.145390 | 0.420428 | 0.715009 | 0.001870 | 0.001911 | 0.001627 |
| tricky_add_pointer_test.test | RUN | 0.211597 | 0.704219 | 1.694173 | 0.001648 | 0.001937 | 0.001697 |
| tricky_abstract_type_test.test | RUN | 0.119477 | 0.250403 | 0.385237 | 0.001883 | 0.001878 | 0.001849 |
| remove_volatile_test.test | RUN | 0.283025 | 1.015586 | 2.592866 | 0.001875 | 0.001940 | 0.001774 |
| remove_reference_test.test | RUN | 0.294651 | 1.091464 | 2.749279 | 0.001706 | 0.001876 | 0.001782 |
| remove_pointer_test.test | RUN | 0.305394 | 1.116983 | 2.901184 | 0.001889 | 0.001537 | 0.001785 |
| remove_extent_test.test | RUN | 0.293356 | 1.083917 | 2.709878 | 0.001795 | 0.001910 | 0.001768 |
| remove_cv_test.test | RUN | 0.286710 | 1.087977 | 2.735034 | 0.001877 | 0.001912 | 0.001920 |
| remove_cv_ref_test.test | RUN | 0.612469 | 2.652657 | 6.913621 | 0.001697 | 0.001824 | 0.001655 |
| remove_const_test.test | RUN | 0.280317 | 0.998132 | 2.585023 | 0.001633 | 0.001884 | 0.001854 |
| remove_bounds_test.test | RUN | 0.309464 | 1.117443 | 2.775625 | 0.001848 | 0.001907 | 0.001766 |
| remove_all_extents_test.test | RUN | 0.295841 | 1.084726 | 2.781847 | 0.001551 | 0.001756 | 0.001751 |
| rank_test.test | RUN | 0.112476 | 0.279078 | 0.356315 | 0.001614 | 0.001852 | 0.001651 |
| promote_mpl_test.test | RUN | 0.098174 | 0.231954 | 0.248708 | 0.000635 | 0.000767 | 0.001637 |
| promote_enum_test.test | RUN | 0.022749 | 0.062408 | 0.061993 | 0.000589 | 0.000721 | 0.001701 |
| promote_enum_msvc_bug_test.test | RUN | 0.019674 | 0.049910 | 0.051851 | 0.000577 | 0.000595 | 0.001610 |
| promote_basic_test.test | RUN | 0.025797 | 0.073196 | 0.063161 | 0.000738 | 0.000771 | 0.001279 |
| negation_test.test | RUN | 0.108174 | 0.246332 | 0.330429 | 0.001616 | 0.001524 | 0.001679 |
| mpl_interop_test3.test | RUN | 0.092014 | 0.230875 | 0.256128 | 0.000629 | 0.000701 | 0.001430 |
| mpl_interop_test2.test | RUN | 0.033876 | 0.062084 | 0.066256 | 0.000738 | 0.000705 | 0.001583 |
| mpl_interop_test1.test | RUN | 0.019001 | 0.046327 | 0.048140 | 0.000612 | 0.000793 | 0.001603 |
| make_void_test.test | RUN | 0.113635 | 0.272441 | 0.395752 | 0.001642 | 0.001880 | 0.001412 |
| make_unsigned_test.test | RUN | 0.136222 | 0.354395 | 0.543321 | 0.001610 | 0.001580 | 0.001796 |
| make_signed_test.test | RUN | 0.138376 | 0.359032 | 0.587296 | 0.001631 | 0.001744 | 0.001760 |
| is_volatile_test.test | RUN | 0.115794 | 0.313956 | 0.423234 | 0.001513 | 0.001669 | 0.001651 |
| is_void_test.test | RUN | 0.115679 | 0.277576 | 0.432756 | 0.001732 | 0.001826 | 0.001565 |
| is_virtual_base_of_test.test | RUN | 0.133669 | 0.362321 | 0.550094 | 0.001561 | 0.001674 | 0.001786 |
| is_unsigned_test.test | RUN | 0.116456 | 0.280480 | 0.434114 | 0.001664 | 0.001802 | 0.001558 |
| is_unscoped_enum_test.test | RUN | 0.113532 | 0.266678 | 0.338264 | 0.001552 | 0.001674 | 0.001419 |
| is_union_test.test | RUN | 0.124994 | 0.326892 | 0.557344 | 0.001534 | 0.001876 | 0.001793 |
| is_unbounded_array_test.test | RUN | 0.114832 | 0.282184 | 0.413041 | 0.001706 | 0.001893 | 0.001844 |
| is_trivially_copyable_test.test | RUN | 0.182502 | 0.596168 | 1.101023 | 0.001530 | 0.001844 | 0.001684 |
| is_swappable_test.test | RUN | 0.152966 | 0.448131 | 0.785480 | 0.001853 | 0.001904 | 0.001511 |
| is_stateless_test.test | RUN | 0.170697 | 0.490719 | 0.935135 | 0.001553 | 0.001705 | 0.001788 |
| is_signed_test.test | RUN | 0.117157 | 0.287768 | 0.427728 | 0.001861 | 0.001787 | 0.001530 |
| is_scoped_enum_test.test | RUN | 0.117059 | 0.264039 | 0.327630 | 0.001748 | 0.001842 | 0.001754 |
| is_scalar_test.test | RUN | 0.150919 | 0.480587 | 0.818377 | 0.001551 | 0.001493 | 0.001736 |
| is_same_test.test | RUN | 0.113703 | 0.271142 | 0.380078 | 0.001726 | 0.001824 | 0.001752 |
| is_rvalue_reference_test.test | RUN | 0.117803 | 0.329153 | 0.499169 | 0.001628 | 0.001725 | 0.001457 |
| is_reference_test.test | RUN | 0.121334 | 0.311356 | 0.455665 | 0.001304 | 0.001881 | 0.001596 |
| is_polymorphic_test.test | RUN | 0.127096 | 0.326938 | 0.487785 | 0.001604 | 0.001930 | 0.001845 |
| is_pointer_test.test | RUN | 0.122806 | 0.313042 | 0.531740 | 0.001849 | 0.001838 | 0.001449 |
| is_pod_test.test | RUN | 0.159171 | 0.526529 | 0.932655 | 0.001582 | 0.001888 | 0.001827 |
| is_object_test.test | RUN | 0.109037 | 0.264009 | 0.361662 | 0.001424 | 0.001782 | 0.001346 |
| is_nothrow_swappable_test.test | RUN | 0.160892 | 0.472504 | 0.884518 | 0.001609 | 0.001455 | 0.001787 |
| is_nothrow_move_constructible_test.test | RUN | 0.156584 | 0.499580 | 0.898424 | 0.001790 | 0.001519 | 0.001464 |
| is_nothrow_move_assignable_test.test | RUN | 0.155206 | 0.510399 | 0.897659 | 0.001488 | 0.001556 | 0.001692 |
| is_noncopyable_test.test | RUN | 0.113789 | 0.280112 | 0.421051 | 0.001648 | 0.001561 | 0.001746 |
| is_member_pointer_test.test | RUN | 0.114343 | 0.276827 | 0.392194 | 0.001643 | 0.001739 | 0.001660 |
| is_member_obj_test.test | RUN | 0.115285 | 0.281569 | 0.393642 | 0.001865 | 0.001614 | 0.001844 |
| is_member_func_test.test | RUN | 0.119985 | 0.289790 | 0.456368 | 0.001550 | 0.001870 | 0.001623 |
| is_lvalue_reference_test.test | RUN | 0.118418 | 0.309176 | 0.494909 | 0.001552 | 0.001694 | 0.001670 |
| is_list_constructible_test.test | RUN | 0.136998 | 0.371555 | 0.490292 | 0.001761 | 0.001589 | 0.001794 |
| is_integral_test.test | RUN | 0.138910 | 0.438537 | 0.789860 | 0.001924 | 0.001764 | 0.001422 |
| is_fundamental_test.test | RUN | 0.142903 | 0.461681 | 0.814381 | 0.001316 | 0.001766 | 0.001636 |
| is_function_test.test | RUN | 0.119214 | 0.293353 | 0.409574 | 0.001548 | 0.001658 | 0.001813 |
| is_floating_point_test.test | RUN | 0.121671 | 0.321690 | 0.477012 | 0.001466 | 0.001725 | 0.001762 |
| is_float_test.test | RUN | 0.121875 | 0.319743 | 0.491129 | 0.001669 | 0.001589 | 0.001640 |
| is_final_test.test | RUN | 0.122471 | 0.323558 | 0.507526 | 0.001390 | 0.001604 | 0.001496 |
| is_enum_test.test | RUN | 0.112295 | 0.274666 | 0.375406 | 0.001522 | 0.001598 | 0.001581 |
| is_empty_test.test | RUN | 0.120932 | 0.289467 | 0.448880 | 0.001804 | 0.001747 | 0.001785 |
| is_detected_test.test | RUN | 0.107974 | 0.252254 | 0.320820 | 0.001873 | 0.001604 | 0.001775 |
| is_detected_exact_test.test | RUN | 0.110455 | 0.259135 | 0.367397 | 0.001556 | 0.001854 | 0.001738 |
| is_destructible_test.test | RUN | 0.154139 | 0.493753 | 0.879389 | 0.001632 | 0.002021 | 0.001743 |
| is_default_constr_test.test | RUN | 0.159585 | 0.513594 | 0.915912 | 0.001816 | 0.001899 | 0.001795 |
| is_copy_constructible_test.test | RUN | 0.165807 | 0.545485 | 0.990272 | 0.001715 | 0.001650 | 0.001588 |
| is_copy_assignable_test.test | RUN | 0.164395 | 0.533117 | 0.912156 | 0.001648 | 0.001742 | 0.001766 |
| is_convertible_test.test | RUN | 0.158347 | 0.468749 | 0.748111 | 0.001534 | 0.001808 | 0.001538 |
| is_constructible_test.test | RUN | 0.128781 | 0.347129 | 0.547339 | 0.001490 | 0.001574 | 0.001674 |
| is_const_test.test | RUN | 0.119696 | 0.302504 | 0.434579 | 0.001654 | 0.001493 | 0.001818 |
| is_compound_test.test | RUN | 0.110200 | 0.251169 | 0.345785 | 0.001550 | 0.001521 | 0.001543 |
| is_complex_test.test | RUN | 0.145585 | 0.340160 | 0.489972 | 0.001592 | 0.001820 | 0.001714 |
| is_complete_test.test | RUN | 0.129654 | 0.343756 | 0.571550 | 0.001777 | 0.001533 | 0.001678 |
| is_class_test.test | RUN | 0.118729 | 0.301506 | 0.468352 | 0.001513 | 0.001652 | 0.001700 |
| is_bounded_array_test.test | RUN | 0.110917 | 0.270775 | 0.418686 | 0.001568 | 0.001896 | 0.001406 |
| is_base_of_test.test | RUN | 0.119837 | 0.303759 | 0.464804 | 0.001794 | 0.001901 | 0.001523 |
| is_base_and_derived_test.test | RUN | 0.123259 | 0.302027 | 0.467869 | 0.001825 | 0.001769 | 0.001843 |
| is_assignable_test.test | RUN | 0.147963 | 0.423976 | 0.689826 | 0.001666 | 0.001846 | 0.001832 |
| is_array_test.test | RUN | 0.114681 | 0.299232 | 0.449574 | 0.001376 | 0.001631 | 0.001566 |
| is_arithmetic_test.test | RUN | 0.145146 | 0.434445 | 0.738423 | 0.001498 | 0.001836 | 0.001687 |
| is_abstract_test.test | RUN | 0.246376 | 1.250192 | 2.549311 | 0.001535 | 0.001672 | 0.001739 |
| integral_constant_test.test | RUN | 0.017755 | 0.045722 | 0.053174 | 0.000740 | 0.000697 | 0.001647 |
| has_virtual_destructor_test.test | RUN | 0.124174 | 0.328682 | 0.542234 | 0.001678 | 0.001923 | 0.001727 |
| has_unary_plus_test.test | RUN | 0.229725 | 1.344609 | 1.958612 | 0.001709 | 0.001857 | 0.001711 |
| has_unary_minus_test.test | RUN | 0.230987 | 1.305511 | 1.882921 | 0.001795 | 0.001848 | 0.001759 |
| has_trivial_move_constructor_test.test | RUN | 0.163686 | 0.493955 | 0.956438 | 0.001689 | 0.001779 | 0.001643 |
| has_trivial_move_assign_test.test | RUN | 0.162684 | 0.514117 | 0.853910 | 0.001872 | 0.001702 | 0.001718 |
| has_trivial_destructor_test.test | RUN | 0.157672 | 0.519172 | 0.923426 | 0.001691 | 0.001805 | 0.001770 |
| has_trivial_copy_test.test | RUN | 0.165451 | 0.543229 | 0.962906 | 0.001924 | 0.001866 | 0.001893 |
| has_trivial_constr_test.test | RUN | 0.167433 | 0.555392 | 0.963715 | 0.001573 | 0.001852 | 0.001802 |
| has_trivial_assign_test.test | RUN | 0.164158 | 0.539080 | 0.917538 | 0.001951 | 0.002022 | 0.001905 |
| has_right_shift_test.test | RUN | 0.249754 | 1.037834 | 2.077019 | 0.001618 | 0.001793 | 0.001534 |
| has_right_shift_assign_test.test | RUN | 0.234749 | 0.973556 | 1.966199 | 0.001591 | 0.001774 | 0.001776 |
| has_prefix_classes3_test.test | RUN | 0.178762 | 0.540468 | 0.996973 | 0.001761 | 0.001598 | 0.001759 |
| has_prefix_classes2_test.test | RUN | 0.179757 | 0.565900 | 1.034283 | 0.001646 | 0.001837 | 0.001792 |
| has_prefix_classes1_test.test | RUN | 0.179193 | 0.560928 | 0.977357 | 0.001817 | 0.001592 | 0.001764 |
| has_prefix_classes0_test.test | RUN | 0.178123 | 0.555372 | 1.022345 | 0.001449 | 0.001842 | 0.001759 |
| has_pre_increment_test.test | RUN | 0.235547 | 1.313794 | 1.922597 | 0.001721 | 0.001714 | 0.001744 |
| has_pre_decrement_test.test | RUN | 0.232825 | 1.314798 | 1.936673 | 0.001541 | 0.001890 | 0.001462 |
| has_postfix_classes3_test.test | RUN | 0.179019 | 0.577718 | 1.043505 | 0.001662 | 0.001688 | 0.001706 |
| has_postfix_classes2_test.test | RUN | 0.176616 | 0.561680 | 1.013291 | 0.001539 | 0.001626 | 0.001541 |
| has_postfix_classes1_test.test | RUN | 0.177617 | 0.581437 | 1.012637 | 0.001914 | 0.001756 | 0.001806 |
| has_postfix_classes0_test.test | RUN | 0.176231 | 0.564858 | 1.054467 | 0.001680 | 0.001876 | 0.001804 |
| has_post_increment_test.test | RUN | 0.240772 | 1.335930 | 1.997140 | 0.001924 | 0.001764 | 0.001479 |
| has_post_decrement_test.test | RUN | 0.237060 | 1.348456 | 1.946932 | 0.001816 | 0.001702 | 0.001603 |
| has_plus_test.test | RUN | 0.235435 | 0.942762 | 1.986506 | 0.001611 | 0.001900 | 0.001674 |
| has_plus_assign_test.test | RUN | 0.247203 | 0.989331 | 1.986865 | 0.001563 | 0.001915 | 0.001385 |
| has_operator_new_test.test | RUN | 0.164071 | 0.491835 | 0.909596 | 0.001592 | 0.002017 | 0.001567 |
| has_nothrow_destructor_test.test | RUN | 0.167951 | 0.547834 | 0.993616 | 0.001643 | 0.001907 | 0.001457 |
| has_nothrow_copy_test.test | RUN | 0.160894 | 0.533483 | 0.940409 | 0.001435 | 0.001738 | 0.001600 |
| has_nothrow_constr_test.test | RUN | 0.155169 | 0.526744 | 0.913558 | 0.001537 | 0.001840 | 0.001754 |
| has_nothrow_assign_test.test | RUN | 0.158342 | 0.504952 | 0.916651 | 0.001824 | 0.001872 | 0.001820 |
| has_not_equal_to_test.test | RUN | 0.244098 | 1.278113 | 1.988716 | 0.001900 | 0.001662 | 0.001777 |
| has_negate_test.test | RUN | 0.225672 | 0.945635 | 1.845060 | 0.001624 | 0.001462 | 0.001772 |
| has_multiplies_test.test | RUN | 0.240169 | 0.990579 | 2.005566 | 0.001484 | 0.001810 | 0.001386 |
| has_multiplies_assign_test.test | RUN | 0.239134 | 0.967913 | 1.971385 | 0.001619 | 0.001866 | 0.001684 |
| has_modulus_test.test | RUN | 0.232092 | 1.007568 | 1.927578 | 0.001770 | 0.001726 | 0.001524 |
| has_modulus_assign_test.test | RUN | 0.239126 | 0.978450 | 1.943964 | 0.001590 | 0.001800 | 0.001834 |
| has_minus_test.test | RUN | 0.243659 | 0.986044 | 2.008016 | 0.001626 | 0.001906 | 0.001606 |
| has_minus_assign_test.test | RUN | 0.249819 | 0.961721 | 2.014576 | 0.001766 | 0.001884 | 0.001316 |
| has_logical_or_test.test | RUN | 0.237373 | 0.978961 | 1.934070 | 0.001617 | 0.001796 | 0.001728 |
| has_logical_not_test.test | RUN | 0.230584 | 0.926156 | 1.869246 | 0.001607 | 0.001738 | 0.001758 |
| has_logical_and_test.test | RUN | 0.236656 | 1.016586 | 2.000492 | 0.001843 | 0.001934 | 0.001450 |
| has_less_test.test | RUN | 0.237321 | 1.306315 | 1.992229 | 0.001857 | 0.001879 | 0.001579 |
| has_less_equal_test.test | RUN | 0.238524 | 1.301757 | 1.965643 | 0.001640 | 0.001786 | 0.001826 |
| has_left_shift_test.test | RUN | 0.261002 | 1.205217 | 2.506004 | 0.001648 | 0.001471 | 0.001580 |
| has_left_shift_assign_test.test | RUN | 0.238672 | 0.998788 | 1.950327 | 0.001622 | 0.001507 | 0.001515 |
| has_greater_test.test | RUN | 0.244393 | 1.278686 | 1.942931 | 0.001611 | 0.001701 | 0.001590 |
| has_greater_equal_test.test | RUN | 0.236641 | 1.273784 | 1.968960 | 0.001837 | 0.001866 | 0.001761 |
| has_equal_to_test.test | RUN | 0.235154 | 1.263717 | 1.949952 | 0.001651 | 0.001721 | 0.001486 |
| has_divides_test.test | RUN | 0.236959 | 0.974873 | 1.991766 | 0.001573 | 0.001744 | 0.001469 |
| has_divides_assign_test.test | RUN | 0.243452 | 0.943925 | 1.977966 | 0.001817 | 0.001872 | 0.001294 |
| has_dereference_test.test | RUN | 0.231064 | 0.967146 | 1.846214 | 0.001864 | 0.001855 | 0.001804 |
| has_complement_test.test | RUN | 0.233834 | 1.303294 | 1.939271 | 0.001830 | 0.001916 | 0.001785 |
| has_bit_xor_test.test | RUN | 0.234334 | 0.979651 | 2.000314 | 0.001657 | 0.001822 | 0.001382 |
| has_bit_xor_assign_test.test | RUN | 0.238163 | 0.940416 | 1.992528 | 0.001751 | 0.001914 | 0.001266 |
| has_bit_or_test.test | RUN | 0.240058 | 0.934720 | 1.943097 | 0.001801 | 0.001835 | 0.001781 |
| has_bit_or_assign_test.test | RUN | 0.238635 | 0.980521 | 1.935512 | 0.001550 | 0.001735 | 0.001473 |
| has_bit_and_test.test | RUN | 0.227611 | 0.963966 | 1.992535 | 0.001256 | 0.001994 | 0.001236 |
| has_bit_and_assign_test.test | RUN | 0.239952 | 0.953440 | 1.993374 | 0.001826 | 0.001693 | 0.001400 |
| has_binary_classes9_test.test | RUN | 0.259944 | 1.126902 | 2.148335 | 0.001786 | 0.001895 | 0.001808 |
| has_binary_classes8_test.test | RUN | 0.259906 | 1.146584 | 2.134071 | 0.001690 | 0.001705 | 0.001695 |
| has_binary_classes7_test.test | RUN | 0.255794 | 1.126095 | 2.200166 | 0.001692 | 0.001780 | 0.001782 |
| has_binary_classes6_test.test | RUN | 0.260472 | 1.081601 | 2.205049 | 0.001798 | 0.001568 | 0.001637 |
| has_binary_classes5_test.test | RUN | 0.258737 | 1.122676 | 2.123437 | 0.001789 | 0.001718 | 0.001631 |
| has_binary_classes4_test.test | RUN | 0.257193 | 1.100301 | 2.188962 | 0.001646 | 0.001978 | 0.001782 |
| has_binary_classes3_test.test | RUN | 0.260371 | 1.100668 | 2.146090 | 0.001650 | 0.001526 | 0.001597 |
| has_binary_classes2_test.test | RUN | 0.266737 | 1.112426 | 2.179925 | 0.001876 | 0.001543 | 0.001743 |
| has_binary_classes1_test.test | RUN | 0.259393 | 1.165329 | 2.126581 | 0.001840 | 0.001819 | 0.001717 |
| has_binary_classes0_test.test | RUN | 0.260920 | 1.133769 | 2.137667 | 0.001591 | 0.001714 | 0.001881 |
| function_traits_test.test | RUN | 0.120483 | 0.291318 | 0.473773 | 0.001545 | 0.001777 | 0.001544 |
| floating_point_promotion_test.test | RUN | 0.121536 | 0.281983 | 0.438673 | 0.001690 | 0.001590 | 0.001603 |
| extent_test.test | RUN | 0.118205 | 0.296111 | 0.473090 | 0.001653 | 0.001534 | 0.001759 |
| enable_if_test.test | RUN | 0.114365 | 0.253583 | 0.318210 | 0.001782 | 0.001736 | 0.001761 |
| disjunction_test.test | RUN | 0.116010 | 0.256427 | 0.348703 | 0.001589 | 0.001854 | 0.001792 |
| detected_test.test | RUN | 0.112168 | 0.244632 | 0.315859 | 0.001781 | 0.001719 | 0.001773 |
| detected_or_test.test | RUN | 0.111261 | 0.252996 | 0.386611 | 0.001589 | 0.001732 | 0.001841 |
| decay_test.test | RUN | 0.285678 | 0.995674 | 2.329934 | 0.001783 | 0.001849 | 0.001560 |
| cxx14_aliases_test.test | RUN | 0.185628 | 0.367313 | 0.637621 | 0.001883 | 0.001796 | 0.001800 |
| copy_reference_test.test | RUN | 0.115226 | 0.247953 | 0.362856 | 0.002038 | 0.001950 | 0.001852 |
| copy_cv_test.test | RUN | 0.124350 | 0.280306 | 0.396779 | 0.001430 | 0.001735 | 0.001775 |
| copy_cv_ref_test.test | RUN | 0.168254 | 0.472934 | 0.899942 | 0.001813 | 0.001724 | 0.002103 |
| conjunction_test.test | RUN | 0.113278 | 0.276644 | 0.393356 | 0.001621 | 0.001699 | 0.001676 |
| conditional_test.test | RUN | 0.109438 | 0.240510 | 0.384848 | 0.001617 | 0.001471 | 0.001728 |
| common_type_test.test | RUN | 0.149156 | 0.396503 | 0.749894 | 0.001845 | 0.001714 | 0.001610 |
| common_type_sfinae_test.test | RUN | 0.110443 | 0.241754 | 0.327014 | 0.001349 | 0.001593 | 0.001649 |
| common_type_sfinae2_test.test | RUN | 0.112379 | 0.251785 | 0.347158 | 0.001804 | 0.001498 | 0.001551 |
| common_type_6_test.test | RUN | 0.112056 | 0.269370 | 0.367470 | 0.001263 | 0.001535 | 0.001891 |
| common_type_5_test.test | RUN | 0.118311 | 0.257978 | 0.359177 | 0.001832 | 0.001740 | 0.001554 |
| common_type_4_test.test | RUN | 0.122675 | 0.285750 | 0.445213 | 0.001638 | 0.001508 | 0.001635 |
| common_type_3_test.test | RUN | 0.113222 | 0.246402 | 0.311556 | 0.001538 | 0.001538 | 0.001734 |
| common_type_2_test.test | RUN | 0.146777 | 0.391608 | 0.724344 | 0.001540 | 0.001792 | 0.001547 |
| alignment_of_test.test | RUN | 0.119702 | 0.319732 | 0.435761 | 0.001706 | 0.001770 | 0.001820 |
| alignment_of_a2_test.test | RUN | 0.119188 | 0.317019 | 0.438610 | 0.001759 | 0.001361 | 0.001449 |
| aligned_storage_test.test | RUN | 0.123747 | 0.298290 | 0.430223 | 0.001689 | 0.001753 | 0.001851 |
| aligned_storage_empy_test.test | RUN | 0.138544 | 0.350759 | 0.531899 | 0.001674 | 0.001898 | 0.001816 |
| aligned_storage_a2_test.test | RUN | 0.124054 | 0.306597 | 0.431475 | 0.001700 | 0.002096 | 0.002028 |
| add_volatile_test.test | RUN | 0.262178 | 0.904696 | 2.184219 | 0.001691 | 0.001738 | 0.001794 |
| add_rvalue_reference_test.test | RUN | 0.297049 | 0.985846 | 2.520618 | 0.001657 | 0.001554 | 0.001850 |
| add_reference_test.test | RUN | 0.278713 | 0.970824 | 2.470245 | 0.001652 | 0.001755 | 0.001734 |
| add_pointer_test.test | RUN | 0.185998 | 0.551139 | 1.308796 | 0.001341 | 0.001778 | 0.001634 |
| add_lvalue_reference_test.test | RUN | 0.278762 | 0.995816 | 2.527210 | 0.001669 | 0.001634 | 0.001515 |
| add_cv_test.test | RUN | 0.263116 | 0.927003 | 2.397662 | 0.001576 | 0.001487 | 0.001335 |
| add_const_test.test | RUN | 0.263331 | 0.913793 | 2.283965 | 0.001469 | 0.001738 | 0.001584 |
| is_virtual_base_of_fail.test | COMPILE_FAIL | 0.104568 | 0.242342 | 0.348984 | — | — | — |
| is_stateless_fail.test | COMPILE_FAIL | 0.112313 | 0.247407 | 0.360441 | — | — | — |
| is_polymorphic_fail.test | COMPILE_FAIL | 0.103960 | 0.226354 | 0.334837 | — | — | — |
| is_nothrow_move_constructible_fail.test | COMPILE_FAIL | 0.106020 | 0.235675 | 0.349245 | — | — | — |
| is_nothrow_move_assignable_fail.test | COMPILE_FAIL | 0.107648 | 0.232560 | 0.342860 | — | — | — |
| is_list_constructible_fail.test | COMPILE_FAIL | 0.104932 | 0.235046 | 0.354119 | — | — | — |
| is_empty_fail.test | COMPILE_FAIL | 0.110391 | 0.238073 | 0.361497 | — | — | — |
| is_destructible_fail.test | COMPILE_FAIL | 0.110633 | 0.233875 | 0.332265 | — | — | — |
| is_default_constructible_fail.test | COMPILE_FAIL | 0.104860 | 0.229699 | 0.337836 | — | — | — |
| is_copy_constructible_fail.test | COMPILE_FAIL | 0.105844 | 0.237110 | 0.343577 | — | — | — |
| is_copy_assignable_fail.test | COMPILE_FAIL | 0.102812 | 0.237832 | 0.327768 | — | — | — |
| is_convertible_fail.test | COMPILE_FAIL | 0.108679 | 0.232568 | 0.331015 | — | — | — |
| is_convertible2_fail.test | COMPILE_FAIL | 0.107163 | 0.239328 | 0.331499 | — | — | — |
| is_constructible_fail.test | COMPILE_FAIL | 0.104850 | 0.238860 | 0.328490 | — | — | — |
| is_base_of_fail.test | COMPILE_FAIL | 0.105198 | 0.238445 | 0.329957 | — | — | — |
| is_assignable_fail.test | COMPILE_FAIL | 0.105092 | 0.238618 | 0.333751 | — | — | — |
| has_nothrow_destruct_fail.test | COMPILE_FAIL | 0.105465 | 0.235098 | 0.335573 | — | — | — |
| has_nothrow_copy_fail.test | COMPILE_FAIL | 0.104928 | 0.244288 | 0.336606 | — | — | — |
| has_nothrow_cons_fail.test | COMPILE_FAIL | 0.104126 | 0.243013 | 0.335817 | — | — | — |
| has_nothrow_assign_fail.test | COMPILE_FAIL | 0.100900 | 0.236842 | 0.335163 | — | — | — |
| common_type_fail.test | COMPILE_FAIL | 0.101936 | 0.234971 | 0.341398 | — | — | — |
| common_type2_fail.test | COMPILE_FAIL | 0.101924 | 0.236620 | 0.336858 | — | — | — |
| has_nothrow_assign_test_no_intrinsics.test | RUN | 0.165078 | 0.525468 | 0.969972 | 0.001822 | 0.001540 | 0.001883 |
| has_nothrow_constr_test_no_intrinsics.test | RUN | 0.155448 | 0.518160 | 0.908299 | 0.001694 | 0.001567 | 0.001775 |
| has_nothrow_copy_test_no_intrinsics.test | RUN | 0.161531 | 0.519289 | 0.959929 | 0.001547 | 0.001846 | 0.001880 |
| is_nothrow_move_assignable_test_no_intrinsics.test | RUN | 0.156469 | 0.507774 | 0.949503 | 0.001396 | 0.001360 | 0.001278 |
| is_nothrow_move_constructible_test_no_intrinsics.test | RUN | 0.100954 | 0.345718 | 0.593944 | 0.001420 | 0.001352 | 0.001264 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 1.009× | 1.001×, 1.016× | 1.027× |
| clang | 1.023×† | 1.060×, 0.986× | 1.042× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1362 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43628287753).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| add_const_test.test | 10 | 0.000987s | 0.000976s | 0.001076s | byte equality observed |
| add_cv_test.test | 10 | 0.001018s | 0.000978s | 0.001116s | byte equality observed |
| add_lvalue_reference_test.test | 10 | 0.000998s | 0.000982s | 0.001089s | byte equality observed |
| add_pointer_test.test | 10 | 0.000988s | 0.000997s | 0.001097s | byte equality observed |
| add_reference_test.test | 10 | 0.001034s | 0.000980s | 0.001103s | byte equality observed |
| add_rvalue_reference_test.test | 10 | 0.001004s | 0.000996s | 0.001116s | byte equality observed |
| add_volatile_test.test | 10 | 0.001000s | 0.000970s | 0.001126s | byte equality observed |
| aligned_storage_a2_test.test | 10 | 0.001082s | 0.001091s | 0.001216s | byte equality observed |
| aligned_storage_empy_test.test | 10 | 0.000990s | 0.000971s | 0.001140s | byte equality observed |
| aligned_storage_test.test | 10 | 0.001079s | 0.001086s | 0.001225s | byte equality observed |
| alignment_of_a2_test.test | 10 | 0.001003s | 0.000984s | 0.001083s | byte equality observed |
| alignment_of_test.test | 10 | 0.000977s | 0.000974s | 0.001094s | byte equality observed |
| common_type_2_test.test | 10 | 0.000973s | 0.000987s | 0.001065s | byte equality observed |
| common_type_3_test.test | 10 | 0.000988s | 0.000998s | 0.001085s | byte equality observed |
| common_type_4_test.test | 10 | 0.001021s | 0.000961s | 0.001055s | byte equality observed |
| common_type_5_test.test | 10 | 0.000982s | 0.001022s | 0.001046s | byte equality observed |
| common_type_6_test.test | 10 | 0.001000s | 0.000953s | 0.001064s | byte equality observed |
| common_type_sfinae2_test.test | 10 | 0.001005s | 0.000959s | 0.001058s | byte equality observed |
| common_type_sfinae_test.test | 10 | 0.000974s | 0.000992s | 0.001073s | byte equality observed |
| common_type_test.test | 10 | 0.000995s | 0.000974s | 0.001064s | byte equality observed |
| conditional_test.test | 10 | 0.000989s | 0.000969s | 0.001077s | byte equality observed |
| conjunction_test.test | 10 | 0.000979s | 0.000993s | 0.001090s | byte equality observed |
| copy_cv_ref_test.test | 10 | 0.001002s | 0.000985s | 0.001063s | byte equality observed |
| copy_cv_test.test | 10 | 0.000987s | 0.000990s | 0.001058s | byte equality observed |
| copy_reference_test.test | 10 | 0.001000s | 0.000983s | 0.001075s | byte equality observed |
| cxx14_aliases_test.test | 10 | 0.001001s | 0.000978s | 0.001092s | byte equality observed |
| decay_test.test | 10 | 0.000986s | 0.001009s | 0.001068s | byte equality observed |
| detected_or_test.test | 10 | 0.001000s | 0.001001s | 0.001089s | byte equality observed |
| detected_test.test | 10 | 0.001019s | 0.000992s | 0.001087s | byte equality observed |
| disjunction_test.test | 10 | 0.001021s | 0.000988s | 0.001050s | byte equality observed |
| enable_if_test.test | 10 | 0.000983s | 0.000990s | 0.001065s | byte equality observed |
| extent_test.test | 10 | 0.000999s | 0.000967s | 0.001107s | byte equality observed |
| floating_point_promotion_test.test | 10 | 0.000987s | 0.000956s | 0.001147s | byte equality observed |
| function_traits_test.test | 10 | 0.000993s | 0.000975s | 0.001116s | byte equality observed |
| has_binary_classes0_test.test | 10 | 0.000995s | 0.001000s | 0.001140s | byte equality observed |
| has_binary_classes1_test.test | 10 | 0.000989s | 0.000970s | 0.001129s | byte equality observed |
| has_binary_classes2_test.test | 10 | 0.001012s | 0.001022s | 0.001114s | byte equality observed |
| has_binary_classes3_test.test | 10 | 0.000988s | 0.001010s | 0.001141s | byte equality observed |
| has_binary_classes4_test.test | 10 | 0.000987s | 0.000967s | 0.001115s | byte equality observed |
| has_binary_classes5_test.test | 10 | 0.000995s | 0.001007s | 0.001136s | byte equality observed |
| has_binary_classes6_test.test | 10 | 0.000983s | 0.000981s | 0.001140s | byte equality observed |
| has_binary_classes7_test.test | 10 | 0.000982s | 0.001011s | 0.001118s | byte equality observed |
| has_binary_classes8_test.test | 10 | 0.001007s | 0.000990s | 0.001106s | byte equality observed |
| has_binary_classes9_test.test | 10 | 0.000988s | 0.001013s | 0.001121s | byte equality observed |
| has_bit_and_assign_test.test | 7 | 0.001014s | 0.000977s | 0.001126s | byte equality observed |
| has_bit_and_test.test | 10 | 0.000998s | 0.000993s | 0.001118s | byte equality observed |
| has_bit_or_assign_test.test | 10 | 0.001034s | 0.000972s | 0.001136s | byte equality observed |
| has_bit_or_test.test | 10 | 0.001011s | 0.000993s | 0.001157s | byte equality observed |
| has_bit_xor_assign_test.test | 10 | 0.001033s | 0.000988s | 0.001097s | byte equality observed |
| has_bit_xor_test.test | 10 | 0.001017s | 0.000982s | 0.001132s | byte equality observed |
| has_complement_test.test | 10 | 0.001020s | 0.000994s | 0.001138s | byte equality observed |
| has_dereference_test.test | 10 | 0.000979s | 0.001059s | 0.001117s | byte equality observed |
| has_divides_assign_test.test | 10 | 0.001025s | 0.001037s | 0.001116s | byte equality observed |
| has_divides_test.test | 10 | 0.001060s | 0.001026s | 0.001144s | byte equality observed |
| has_equal_to_test.test | 10 | 0.001056s | 0.001039s | 0.001131s | byte equality observed |
| has_greater_equal_test.test | 10 | 0.001063s | 0.001060s | 0.001115s | byte equality observed |
| has_greater_test.test | 10 | 0.001069s | 0.001042s | 0.001137s | byte equality observed |
| has_left_shift_assign_test.test | 10 | 0.001047s | 0.001066s | 0.001122s | byte equality observed |
| has_left_shift_test.test | 10 | 0.001048s | 0.001060s | 0.001116s | byte equality observed |
| has_less_equal_test.test | 10 | 0.001086s | 0.001080s | 0.001126s | byte equality observed |
| has_less_test.test | 10 | 0.001059s | 0.001055s | 0.001132s | byte equality observed |
| has_logical_and_test.test | 10 | 0.001075s | 0.001063s | 0.001134s | byte equality observed |
| has_logical_not_test.test | 10 | 0.001080s | 0.001085s | 0.001151s | byte equality observed |
| has_logical_or_test.test | 10 | 0.001047s | 0.001070s | 0.001112s | byte equality observed |
| has_minus_assign_test.test | 10 | 0.001061s | 0.001073s | 0.001140s | byte equality observed |
| has_minus_test.test | 10 | 0.001031s | 0.001052s | 0.001138s | byte equality observed |
| has_modulus_assign_test.test | 10 | 0.001080s | 0.001080s | 0.001158s | byte equality observed |
| has_modulus_test.test | 10 | 0.001099s | 0.001061s | 0.001116s | byte equality observed |
| has_multiplies_assign_test.test | 10 | 0.001088s | 0.001076s | 0.001114s | byte equality observed |
| has_multiplies_test.test | 10 | 0.001108s | 0.001045s | 0.001138s | byte equality observed |
| has_negate_test.test | 10 | 0.001099s | 0.001051s | 0.001125s | byte equality observed |
| has_not_equal_to_test.test | 10 | 0.001128s | 0.001061s | 0.001120s | byte equality observed |
| has_nothrow_assign_test.test | 10 | 0.001131s | 0.001046s | 0.001162s | byte equality observed |
| has_nothrow_assign_test_no_intrinsics.test | 10 | 0.001130s | 0.001051s | 0.001140s | byte equality observed |
| has_nothrow_constr_test.test | 10 | 0.001133s | 0.001053s | 0.001127s | byte equality observed |
| has_nothrow_constr_test_no_intrinsics.test | 10 | 0.001127s | 0.001054s | 0.001146s | byte equality observed |
| has_nothrow_copy_test.test | 10 | 0.001134s | 0.001040s | 0.001130s | byte equality observed |
| has_nothrow_copy_test_no_intrinsics.test | 10 | 0.001108s | 0.001048s | 0.001118s | byte equality observed |
| has_nothrow_destructor_test.test | 10 | 0.001095s | 0.001067s | 0.001134s | byte equality observed |
| has_operator_new_test.test | 10 | 0.001112s | 0.001071s | 0.001128s | byte equality observed |
| has_plus_assign_test.test | 10 | 0.001125s | 0.001076s | 0.001143s | byte equality observed |
| has_plus_test.test | 10 | 0.001122s | 0.001066s | 0.001138s | byte equality observed |
| has_post_decrement_test.test | 10 | 0.001127s | 0.001024s | 0.001141s | byte equality observed |
| has_post_increment_test.test | 10 | 0.001122s | 0.001092s | 0.001133s | byte equality observed |
| has_postfix_classes0_test.test | 10 | 0.001117s | 0.001094s | 0.001144s | byte equality observed |
| has_postfix_classes1_test.test | 10 | 0.001125s | 0.001081s | 0.001128s | byte equality observed |
| has_postfix_classes2_test.test | 10 | 0.001141s | 0.001115s | 0.001129s | byte equality observed |
| has_postfix_classes3_test.test | 10 | 0.001112s | 0.001129s | 0.001130s | byte equality observed |
| has_pre_decrement_test.test | 10 | 0.001105s | 0.001153s | 0.001169s | byte equality observed |
| has_pre_increment_test.test | 10 | 0.001132s | 0.001152s | 0.001152s | byte equality observed |
| has_prefix_classes0_test.test | 10 | 0.001120s | 0.001115s | 0.001138s | byte equality observed |
| has_prefix_classes1_test.test | 10 | 0.001110s | 0.001116s | 0.001135s | byte equality observed |
| has_prefix_classes2_test.test | 10 | 0.001137s | 0.001145s | 0.001135s | byte equality observed |
| has_prefix_classes3_test.test | 10 | 0.001120s | 0.001123s | 0.001158s | byte equality observed |
| has_right_shift_assign_test.test | 10 | 0.001119s | 0.001117s | 0.001121s | byte equality observed |
| has_right_shift_test.test | 10 | 0.001129s | 0.001117s | 0.001156s | byte equality observed |
| has_trivial_assign_test.test | 10 | 0.001196s | 0.001172s | 0.001221s | byte equality observed |
| has_trivial_constr_test.test | 10 | 0.001188s | 0.001179s | 0.001195s | native test oracle; output varies |
| has_trivial_copy_test.test | 10 | 0.001202s | 0.001195s | 0.001224s | native test oracle; output varies |
| has_trivial_destructor_test.test | 10 | 0.001125s | 0.001146s | 0.001154s | byte equality observed |
| has_trivial_move_assign_test.test | 10 | 0.001136s | 0.001108s | 0.001075s | byte equality observed |
| has_trivial_move_constructor_test.test | 10 | 0.001149s | 0.001133s | 0.001101s | byte equality observed |
| has_unary_minus_test.test | 10 | 0.001139s | 0.001119s | 0.001129s | byte equality observed |
| has_unary_plus_test.test | 10 | 0.001152s | 0.001140s | 0.001108s | byte equality observed |
| has_virtual_destructor_test.test | 10 | 0.001143s | 0.001115s | 0.001107s | byte equality observed |
| integral_constant_test.test | 10 | 0.000514s | 0.000506s | 0.001127s | byte equality observed |
| is_abstract_test.test | 10 | 0.001143s | 0.001144s | 0.001163s | byte equality observed |
| is_arithmetic_test.test | 10 | 0.001134s | 0.001119s | 0.001137s | byte equality observed |
| is_array_test.test | 10 | 0.001139s | 0.001133s | 0.001149s | byte equality observed |
| is_assignable_test.test | 10 | 0.001146s | 0.001143s | 0.001147s | byte equality observed |
| is_base_and_derived_test.test | 10 | 0.001144s | 0.001123s | 0.001155s | byte equality observed |
| is_base_of_test.test | 10 | 0.001127s | 0.001141s | 0.001141s | byte equality observed |
| is_bounded_array_test.test | 10 | 0.001122s | 0.001149s | 0.001135s | byte equality observed |
| is_class_test.test | 10 | 0.001095s | 0.001124s | 0.001127s | byte equality observed |
| is_complete_test.test | 10 | 0.001135s | 0.001117s | 0.001148s | byte equality observed |
| is_complex_test.test | 10 | 0.001127s | 0.001135s | 0.001131s | byte equality observed |
| is_compound_test.test | 10 | 0.001145s | 0.001139s | 0.001142s | byte equality observed |
| is_const_test.test | 10 | 0.001143s | 0.001121s | 0.001128s | byte equality observed |
| is_constructible_test.test | 10 | 0.001151s | 0.001106s | 0.001135s | byte equality observed |
| is_convertible_test.test | 10 | 0.001158s | 0.001131s | 0.001123s | byte equality observed |
| is_copy_assignable_test.test | 10 | 0.001140s | 0.001113s | 0.001152s | byte equality observed |
| is_copy_constructible_test.test | 10 | 0.001129s | 0.001127s | 0.001132s | byte equality observed |
| is_default_constr_test.test | 10 | 0.001128s | 0.001145s | 0.001141s | byte equality observed |
| is_destructible_test.test | 10 | 0.001143s | 0.001129s | 0.001128s | byte equality observed |
| is_detected_exact_test.test | 10 | 0.001139s | 0.001094s | 0.001150s | byte equality observed |
| is_detected_test.test | 10 | 0.001126s | 0.001145s | 0.001138s | byte equality observed |
| is_empty_test.test | 10 | 0.001117s | 0.001141s | 0.001153s | byte equality observed |
| is_enum_test.test | 10 | 0.001138s | 0.001161s | 0.001130s | byte equality observed |
| is_final_test.test | 10 | 0.001139s | 0.001142s | 0.001154s | byte equality observed |
| is_float_test.test | 10 | 0.001149s | 0.001158s | 0.001141s | byte equality observed |
| is_floating_point_test.test | 10 | 0.001142s | 0.001146s | 0.001129s | byte equality observed |
| is_function_test.test | 10 | 0.001137s | 0.001142s | 0.001139s | byte equality observed |
| is_fundamental_test.test | 10 | 0.001126s | 0.001145s | 0.001118s | byte equality observed |
| is_integral_test.test | 10 | 0.001149s | 0.001154s | 0.001143s | byte equality observed |
| is_list_constructible_test.test | 10 | 0.001126s | 0.001135s | 0.001134s | byte equality observed |
| is_lvalue_reference_test.test | 10 | 0.001144s | 0.001144s | 0.001125s | byte equality observed |
| is_member_func_test.test | 10 | 0.001143s | 0.001128s | 0.001144s | byte equality observed |
| is_member_obj_test.test | 10 | 0.001131s | 0.001137s | 0.001144s | byte equality observed |
| is_member_pointer_test.test | 10 | 0.001142s | 0.001144s | 0.001136s | byte equality observed |
| is_noncopyable_test.test | 10 | 0.001151s | 0.001147s | 0.001133s | byte equality observed |
| is_nothrow_move_assignable_test.test | 10 | 0.001145s | 0.001162s | 0.001139s | byte equality observed |
| is_nothrow_move_assignable_test_no_intrinsics.test | 10 | 0.001133s | 0.001149s | 0.001135s | byte equality observed |
| is_nothrow_move_constructible_test.test | 10 | 0.001138s | 0.001126s | 0.001114s | byte equality observed |
| is_nothrow_move_constructible_test_no_intrinsics.test | 10 | 0.001131s | 0.001137s | 0.001150s | byte equality observed |
| is_nothrow_swappable_test.test | 10 | 0.001140s | 0.001126s | 0.001118s | byte equality observed |
| is_object_test.test | 10 | 0.001133s | 0.001153s | 0.001157s | byte equality observed |
| is_pod_test.test | 10 | 0.001143s | 0.001155s | 0.001130s | byte equality observed |
| is_pointer_test.test | 10 | 0.001134s | 0.001145s | 0.001140s | byte equality observed |
| is_polymorphic_test.test | 10 | 0.001139s | 0.001154s | 0.001145s | byte equality observed |
| is_reference_test.test | 10 | 0.001135s | 0.001146s | 0.001140s | byte equality observed |
| is_rvalue_reference_test.test | 10 | 0.001140s | 0.001141s | 0.001119s | byte equality observed |
| is_same_test.test | 10 | 0.001138s | 0.001143s | 0.001111s | byte equality observed |
| is_scalar_test.test | 10 | 0.001143s | 0.001141s | 0.001145s | byte equality observed |
| is_scoped_enum_test.test | 10 | 0.001149s | 0.001135s | 0.001156s | byte equality observed |
| is_signed_test.test | 10 | 0.001132s | 0.001129s | 0.001118s | byte equality observed |
| is_stateless_test.test | 10 | 0.001150s | 0.001130s | 0.001149s | byte equality observed |
| is_swappable_test.test | 10 | 0.001150s | 0.001127s | 0.001146s | byte equality observed |
| is_trivially_copyable_test.test | 10 | 0.001167s | 0.001169s | 0.001163s | byte equality observed |
| is_unbounded_array_test.test | 10 | 0.001159s | 0.001136s | 0.001165s | byte equality observed |
| is_union_test.test | 10 | 0.001137s | 0.001121s | 0.001130s | byte equality observed |
| is_unscoped_enum_test.test | 10 | 0.001133s | 0.001125s | 0.001133s | byte equality observed |
| is_unsigned_test.test | 10 | 0.001129s | 0.001126s | 0.001148s | byte equality observed |
| is_virtual_base_of_test.test | 10 | 0.001133s | 0.001126s | 0.001154s | byte equality observed |
| is_void_test.test | 10 | 0.001123s | 0.001134s | 0.001137s | byte equality observed |
| is_volatile_test.test | 10 | 0.001134s | 0.001126s | 0.001147s | byte equality observed |
| make_signed_test.test | 10 | 0.001131s | 0.001139s | 0.001159s | byte equality observed |
| make_unsigned_test.test | 10 | 0.001140s | 0.001132s | 0.001141s | byte equality observed |
| make_void_test.test | 10 | 0.001153s | 0.001175s | 0.001156s | byte equality observed |
| mpl_interop_test1.test | 10 | 0.000505s | 0.000514s | 0.001123s | byte equality observed |
| mpl_interop_test2.test | 10 | 0.000511s | 0.000527s | 0.001132s | byte equality observed |
| mpl_interop_test3.test | 10 | 0.000510s | 0.000516s | 0.001138s | byte equality observed |
| negation_test.test | 10 | 0.001192s | 0.001197s | 0.001131s | byte equality observed |
| promote_basic_test.test | 10 | 0.000509s | 0.000521s | 0.001156s | byte equality observed |
| promote_enum_msvc_bug_test.test | 10 | 0.000506s | 0.000517s | 0.001147s | byte equality observed |
| promote_enum_test.test | 10 | 0.000513s | 0.000511s | 0.001157s | byte equality observed |
| promote_mpl_test.test | 10 | 0.000509s | 0.000514s | 0.001159s | byte equality observed |
| rank_test.test | 10 | 0.001140s | 0.001132s | 0.001155s | byte equality observed |
| remove_all_extents_test.test | 10 | 0.001155s | 0.001155s | 0.001166s | byte equality observed |
| remove_bounds_test.test | 10 | 0.001158s | 0.001152s | 0.001150s | byte equality observed |
| remove_const_test.test | 10 | 0.001147s | 0.001131s | 0.001146s | byte equality observed |
| remove_cv_ref_test.test | 10 | 0.001128s | 0.001135s | 0.001131s | byte equality observed |
| remove_cv_test.test | 10 | 0.001141s | 0.001149s | 0.001159s | byte equality observed |
| remove_extent_test.test | 10 | 0.001143s | 0.001151s | 0.001162s | byte equality observed |
| remove_pointer_test.test | 10 | 0.001145s | 0.001151s | 0.001146s | byte equality observed |
| remove_reference_test.test | 10 | 0.001133s | 0.001139s | 0.001132s | byte equality observed |
| remove_volatile_test.test | 10 | 0.001142s | 0.001130s | 0.001160s | byte equality observed |
| tricky_abstract_type_test.test | 10 | 0.001120s | 0.001130s | 0.001143s | byte equality observed |
| tricky_add_pointer_test.test | 10 | 0.001149s | 0.001162s | 0.001157s | byte equality observed |
| tricky_function_type_test.test | 10 | 0.001134s | 0.001140s | 0.001140s | byte equality observed |
| tricky_incomplete_type_test.test | 10 | 0.001130s | 0.001142s | 0.001117s | byte equality observed |
| tricky_is_enum_test.test | 10 | 0.001129s | 0.001130s | 0.001134s | byte equality observed |
| tricky_partial_spec_test.test | 10 | 0.001149s | 0.001152s | 0.001144s | byte equality observed |
| tricky_rvalue_test.test | 10 | 0.001140s | 0.001142s | 0.001146s | byte equality observed |
| type_identity_test.test | 10 | 0.001156s | 0.001150s | 0.001162s | byte equality observed |
| type_traits_test.test | 10 | 0.000507s | 0.000504s | 0.001150s | byte equality observed |
| type_with_alignment_test.test | 10 | 0.001269s | 0.001263s | 0.001306s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43628287753).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
