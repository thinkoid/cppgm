# libs/type_traits/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| type_with_alignment_test.test | RUN | 0.114639 | 0.320192 | 0.507922 | 0.001571 | 0.001772 | 0.001542 |
| type_traits_test.test | RUN | 0.160711 | 0.345614 | 0.504305 | 0.000571 | 0.000575 | 0.001286 |
| type_identity_test.test | RUN | 0.309181 | 1.192148 | 2.965155 | 0.001509 | 0.001760 | 0.001773 |
| tricky_rvalue_test.test | RUN | 0.108305 | 0.263794 | 0.392485 | 0.001522 | 0.001802 | 0.001682 |
| tricky_partial_spec_test.test | RUN | 0.134543 | 0.369426 | 0.668906 | 0.001542 | 0.001799 | 0.001604 |
| tricky_is_enum_test.test | RUN | 0.104626 | 0.246225 | 0.357744 | 0.001578 | 0.001596 | 0.001524 |
| tricky_incomplete_type_test.test | RUN | 0.173216 | 0.388843 | 0.574442 | 0.001456 | 0.001733 | 0.001596 |
| tricky_function_type_test.test | RUN | 0.141848 | 0.401664 | 0.685918 | 0.001651 | 0.001482 | 0.001481 |
| tricky_add_pointer_test.test | RUN | 0.198596 | 0.664542 | 1.660367 | 0.001744 | 0.001854 | 0.001710 |
| tricky_abstract_type_test.test | RUN | 0.110481 | 0.257035 | 0.378217 | 0.001716 | 0.001436 | 0.001612 |
| remove_volatile_test.test | RUN | 0.277042 | 0.983343 | 2.616912 | 0.001662 | 0.001738 | 0.001628 |
| remove_reference_test.test | RUN | 0.287638 | 1.058386 | 2.735584 | 0.001610 | 0.001737 | 0.001756 |
| remove_pointer_test.test | RUN | 0.302964 | 1.078714 | 2.848974 | 0.001700 | 0.001656 | 0.001571 |
| remove_extent_test.test | RUN | 0.288332 | 1.077929 | 2.735731 | 0.001552 | 0.001459 | 0.001690 |
| remove_cv_test.test | RUN | 0.284570 | 1.097809 | 2.732245 | 0.001776 | 0.001548 | 0.001518 |
| remove_cv_ref_test.test | RUN | 0.606951 | 2.557279 | 6.671821 | 0.001641 | 0.001544 | 0.001364 |
| remove_const_test.test | RUN | 0.279584 | 0.993252 | 2.599140 | 0.001727 | 0.001795 | 0.001750 |
| remove_bounds_test.test | RUN | 0.290119 | 1.102159 | 2.782628 | 0.001539 | 0.001789 | 0.001750 |
| remove_all_extents_test.test | RUN | 0.290281 | 1.085429 | 2.538909 | 0.001430 | 0.001716 | 0.001567 |
| rank_test.test | RUN | 0.105203 | 0.295570 | 0.400314 | 0.001613 | 0.001623 | 0.001598 |
| promote_mpl_test.test | RUN | 0.096276 | 0.227886 | 0.274019 | 0.000583 | 0.000790 | 0.001690 |
| promote_enum_test.test | RUN | 0.022101 | 0.059203 | 0.071934 | 0.000636 | 0.000789 | 0.001734 |
| promote_enum_msvc_bug_test.test | RUN | 0.018884 | 0.051043 | 0.057943 | 0.000619 | 0.000662 | 0.001717 |
| promote_basic_test.test | RUN | 0.024060 | 0.066664 | 0.075022 | 0.000605 | 0.000665 | 0.001657 |
| negation_test.test | RUN | 0.106067 | 0.241741 | 0.361938 | 0.001554 | 0.001602 | 0.001607 |
| mpl_interop_test3.test | RUN | 0.089554 | 0.211294 | 0.226708 | 0.000560 | 0.000569 | 0.001424 |
| mpl_interop_test2.test | RUN | 0.030864 | 0.067173 | 0.063323 | 0.000610 | 0.000718 | 0.001484 |
| mpl_interop_test1.test | RUN | 0.017066 | 0.046128 | 0.048816 | 0.000585 | 0.000786 | 0.001738 |
| make_void_test.test | RUN | 0.109626 | 0.251347 | 0.380073 | 0.001584 | 0.001903 | 0.001716 |
| make_unsigned_test.test | RUN | 0.129056 | 0.341665 | 0.564182 | 0.001577 | 0.001666 | 0.001604 |
| make_signed_test.test | RUN | 0.130040 | 0.341628 | 0.556963 | 0.001444 | 0.001479 | 0.001286 |
| is_volatile_test.test | RUN | 0.115230 | 0.284821 | 0.421108 | 0.001556 | 0.001696 | 0.001578 |
| is_void_test.test | RUN | 0.110913 | 0.271049 | 0.424853 | 0.001629 | 0.001808 | 0.001651 |
| is_virtual_base_of_test.test | RUN | 0.128364 | 0.343267 | 0.597164 | 0.001599 | 0.001391 | 0.001414 |
| is_unsigned_test.test | RUN | 0.114405 | 0.284904 | 0.423357 | 0.001505 | 0.001779 | 0.001636 |
| is_unscoped_enum_test.test | RUN | 0.108035 | 0.249293 | 0.362349 | 0.001493 | 0.001497 | 0.001540 |
| is_union_test.test | RUN | 0.120190 | 0.319535 | 0.521179 | 0.001450 | 0.001756 | 0.001712 |
| is_unbounded_array_test.test | RUN | 0.111414 | 0.269984 | 0.423767 | 0.001552 | 0.001713 | 0.001680 |
| is_trivially_copyable_test.test | RUN | 0.184062 | 0.577019 | 1.101613 | 0.001143 | 0.001879 | 0.001593 |
| is_swappable_test.test | RUN | 0.143617 | 0.418147 | 0.746639 | 0.001482 | 0.001809 | 0.001727 |
| is_stateless_test.test | RUN | 0.164576 | 0.482679 | 0.895832 | 0.001599 | 0.001591 | 0.001656 |
| is_signed_test.test | RUN | 0.111900 | 0.278898 | 0.405897 | 0.001730 | 0.001823 | 0.001764 |
| is_scoped_enum_test.test | RUN | 0.112522 | 0.250272 | 0.336001 | 0.001700 | 0.001501 | 0.001754 |
| is_scalar_test.test | RUN | 0.142098 | 0.452745 | 0.781813 | 0.001506 | 0.001521 | 0.001498 |
| is_same_test.test | RUN | 0.109487 | 0.283467 | 0.387491 | 0.001717 | 0.001498 | 0.001718 |
| is_rvalue_reference_test.test | RUN | 0.115560 | 0.312678 | 0.470928 | 0.001586 | 0.001629 | 0.001246 |
| is_reference_test.test | RUN | 0.115248 | 0.317702 | 0.499748 | 0.001673 | 0.001649 | 0.001385 |
| is_polymorphic_test.test | RUN | 0.118114 | 0.313723 | 0.502236 | 0.001523 | 0.001270 | 0.001721 |
| is_pointer_test.test | RUN | 0.117684 | 0.305447 | 0.511307 | 0.001541 | 0.001616 | 0.001383 |
| is_pod_test.test | RUN | 0.153733 | 0.496185 | 0.934158 | 0.001622 | 0.001826 | 0.001647 |
| is_object_test.test | RUN | 0.109360 | 0.258149 | 0.399455 | 0.001462 | 0.001695 | 0.001600 |
| is_nothrow_swappable_test.test | RUN | 0.154155 | 0.474583 | 0.849497 | 0.001482 | 0.001635 | 0.001720 |
| is_nothrow_move_constructible_test.test | RUN | 0.151773 | 0.482970 | 0.924404 | 0.001536 | 0.001596 | 0.001418 |
| is_nothrow_move_assignable_test.test | RUN | 0.151691 | 0.489722 | 0.929627 | 0.001550 | 0.001484 | 0.001609 |
| is_noncopyable_test.test | RUN | 0.108457 | 0.257380 | 0.359425 | 0.001544 | 0.001483 | 0.001732 |
| is_member_pointer_test.test | RUN | 0.110911 | 0.263132 | 0.378963 | 0.001392 | 0.001519 | 0.001822 |
| is_member_obj_test.test | RUN | 0.107727 | 0.265231 | 0.420762 | 0.001570 | 0.001564 | 0.001425 |
| is_member_func_test.test | RUN | 0.109532 | 0.286849 | 0.464965 | 0.001587 | 0.001693 | 0.001666 |
| is_lvalue_reference_test.test | RUN | 0.117216 | 0.300666 | 0.442963 | 0.001625 | 0.001554 | 0.001279 |
| is_list_constructible_test.test | RUN | 0.134460 | 0.350148 | 0.556616 | 0.001722 | 0.001698 | 0.001661 |
| is_integral_test.test | RUN | 0.136595 | 0.425883 | 0.759078 | 0.001512 | 0.001615 | 0.001656 |
| is_fundamental_test.test | RUN | 0.140671 | 0.436662 | 0.755962 | 0.001479 | 0.001657 | 0.001778 |
| is_function_test.test | RUN | 0.114881 | 0.285873 | 0.436035 | 0.001472 | 0.001496 | 0.001646 |
| is_floating_point_test.test | RUN | 0.118484 | 0.309115 | 0.478874 | 0.001446 | 0.001552 | 0.001651 |
| is_float_test.test | RUN | 0.115558 | 0.304767 | 0.466243 | 0.001661 | 0.001704 | 0.001647 |
| is_final_test.test | RUN | 0.114848 | 0.273381 | 0.508546 | 0.001477 | 0.001627 | 0.001381 |
| is_enum_test.test | RUN | 0.107760 | 0.256923 | 0.366953 | 0.001408 | 0.001598 | 0.001478 |
| is_empty_test.test | RUN | 0.119133 | 0.286697 | 0.474302 | 0.001378 | 0.001452 | 0.001708 |
| is_detected_test.test | RUN | 0.108000 | 0.236606 | 0.358058 | 0.001607 | 0.001810 | 0.001700 |
| is_detected_exact_test.test | RUN | 0.105508 | 0.233919 | 0.341156 | 0.001462 | 0.001426 | 0.001830 |
| is_destructible_test.test | RUN | 0.154589 | 0.481193 | 0.917108 | 0.001730 | 0.001823 | 0.001596 |
| is_default_constr_test.test | RUN | 0.153626 | 0.498524 | 0.883985 | 0.001568 | 0.001781 | 0.001658 |
| is_copy_constructible_test.test | RUN | 0.163115 | 0.520551 | 0.948577 | 0.001676 | 0.001496 | 0.001710 |
| is_copy_assignable_test.test | RUN | 0.160470 | 0.510819 | 0.944918 | 0.001336 | 0.001469 | 0.001701 |
| is_convertible_test.test | RUN | 0.157656 | 0.453507 | 0.740940 | 0.001586 | 0.001815 | 0.001630 |
| is_constructible_test.test | RUN | 0.127614 | 0.333088 | 0.559062 | 0.001319 | 0.001518 | 0.001802 |
| is_const_test.test | RUN | 0.111800 | 0.289993 | 0.444525 | 0.001524 | 0.001464 | 0.001485 |
| is_compound_test.test | RUN | 0.107460 | 0.248016 | 0.356666 | 0.001553 | 0.001576 | 0.001699 |
| is_complex_test.test | RUN | 0.141985 | 0.336642 | 0.517056 | 0.001549 | 0.001829 | 0.001527 |
| is_complete_test.test | RUN | 0.124688 | 0.330214 | 0.576397 | 0.001320 | 0.001408 | 0.001509 |
| is_class_test.test | RUN | 0.115267 | 0.299205 | 0.487253 | 0.001465 | 0.001602 | 0.001514 |
| is_bounded_array_test.test | RUN | 0.110404 | 0.272146 | 0.419402 | 0.001648 | 0.001490 | 0.001278 |
| is_base_of_test.test | RUN | 0.114447 | 0.293946 | 0.476547 | 0.001339 | 0.001769 | 0.001566 |
| is_base_and_derived_test.test | RUN | 0.114043 | 0.291810 | 0.472431 | 0.001542 | 0.001646 | 0.001692 |
| is_assignable_test.test | RUN | 0.138895 | 0.415427 | 0.686982 | 0.001597 | 0.001667 | 0.001660 |
| is_array_test.test | RUN | 0.112821 | 0.278240 | 0.460896 | 0.001614 | 0.001430 | 0.001538 |
| is_arithmetic_test.test | RUN | 0.137045 | 0.416317 | 0.777833 | 0.001564 | 0.001818 | 0.001501 |
| is_abstract_test.test | RUN | 0.255289 | 1.155872 | 2.561140 | 0.001567 | 0.001664 | 0.001723 |
| integral_constant_test.test | RUN | 0.017548 | 0.044680 | 0.045757 | 0.000703 | 0.000781 | 0.001547 |
| has_virtual_destructor_test.test | RUN | 0.119641 | 0.324767 | 0.544111 | 0.001622 | 0.001883 | 0.001428 |
| has_unary_plus_test.test | RUN | 0.231341 | 1.259673 | 1.994718 | 0.001551 | 0.001636 | 0.001706 |
| has_unary_minus_test.test | RUN | 0.228092 | 1.257307 | 1.939548 | 0.001601 | 0.001751 | 0.001758 |
| has_trivial_move_constructor_test.test | RUN | 0.158774 | 0.505098 | 0.956581 | 0.001672 | 0.001516 | 0.001787 |
| has_trivial_move_assign_test.test | RUN | 0.157713 | 0.498721 | 0.884998 | 0.001646 | 0.001557 | 0.001787 |
| has_trivial_destructor_test.test | RUN | 0.158466 | 0.499009 | 0.931409 | 0.001582 | 0.001498 | 0.001735 |
| has_trivial_copy_test.test | RUN | 0.162087 | 0.546984 | 0.954660 | 0.001396 | 0.001873 | 0.002036 |
| has_trivial_constr_test.test | RUN | 0.163837 | 0.520883 | 0.978673 | 0.001644 | 0.001642 | 0.001799 |
| has_trivial_assign_test.test | RUN | 0.159497 | 0.540868 | 0.993233 | 0.001727 | 0.001929 | 0.001791 |
| has_right_shift_test.test | RUN | 0.246343 | 0.957081 | 2.023351 | 0.001763 | 0.001581 | 0.001525 |
| has_right_shift_assign_test.test | RUN | 0.234290 | 0.923898 | 1.930192 | 0.001602 | 0.001611 | 0.001730 |
| has_prefix_classes3_test.test | RUN | 0.171437 | 0.549456 | 1.027776 | 0.001515 | 0.001635 | 0.001712 |
| has_prefix_classes2_test.test | RUN | 0.174421 | 0.512669 | 1.022446 | 0.001532 | 0.001738 | 0.001439 |
| has_prefix_classes1_test.test | RUN | 0.172385 | 0.529396 | 1.009220 | 0.001517 | 0.001540 | 0.001663 |
| has_prefix_classes0_test.test | RUN | 0.170577 | 0.547243 | 1.000967 | 0.001497 | 0.001581 | 0.001642 |
| has_pre_increment_test.test | RUN | 0.228900 | 1.292900 | 1.936912 | 0.001543 | 0.001725 | 0.001410 |
| has_pre_decrement_test.test | RUN | 0.228922 | 1.275958 | 1.902780 | 0.001559 | 0.001670 | 0.001664 |
| has_postfix_classes3_test.test | RUN | 0.170614 | 0.539202 | 1.027678 | 0.001592 | 0.001560 | 0.001520 |
| has_postfix_classes2_test.test | RUN | 0.171058 | 0.534982 | 1.002175 | 0.001576 | 0.001668 | 0.001755 |
| has_postfix_classes1_test.test | RUN | 0.171078 | 0.539058 | 1.011184 | 0.001442 | 0.001694 | 0.001605 |
| has_postfix_classes0_test.test | RUN | 0.169534 | 0.537474 | 1.013339 | 0.001524 | 0.001776 | 0.001536 |
| has_post_increment_test.test | RUN | 0.227008 | 1.289141 | 1.964106 | 0.001670 | 0.001462 | 0.001757 |
| has_post_decrement_test.test | RUN | 0.225017 | 1.285863 | 1.958711 | 0.001411 | 0.001619 | 0.001676 |
| has_plus_test.test | RUN | 0.233773 | 0.913532 | 1.951709 | 0.001680 | 0.001567 | 0.001585 |
| has_plus_assign_test.test | RUN | 0.241282 | 0.932450 | 1.975308 | 0.001486 | 0.001622 | 0.001530 |
| has_operator_new_test.test | RUN | 0.155423 | 0.479157 | 0.874518 | 0.001561 | 0.001702 | 0.001476 |
| has_nothrow_destructor_test.test | RUN | 0.159423 | 0.518866 | 0.968683 | 0.001402 | 0.001464 | 0.001756 |
| has_nothrow_copy_test.test | RUN | 0.158570 | 0.503809 | 0.950155 | 0.001558 | 0.001564 | 0.001635 |
| has_nothrow_constr_test.test | RUN | 0.153675 | 0.493087 | 0.911985 | 0.001535 | 0.001643 | 0.001354 |
| has_nothrow_assign_test.test | RUN | 0.153590 | 0.495639 | 0.928663 | 0.001394 | 0.001843 | 0.001410 |
| has_not_equal_to_test.test | RUN | 0.234587 | 1.228476 | 1.987879 | 0.001754 | 0.001794 | 0.001720 |
| has_negate_test.test | RUN | 0.223490 | 0.899472 | 1.927844 | 0.001765 | 0.001724 | 0.001602 |
| has_multiplies_test.test | RUN | 0.233225 | 0.933804 | 1.982398 | 0.001563 | 0.001726 | 0.001572 |
| has_multiplies_assign_test.test | RUN | 0.236787 | 0.895709 | 1.938868 | 0.001814 | 0.001771 | 0.001581 |
| has_modulus_test.test | RUN | 0.228234 | 0.930844 | 1.925594 | 0.001766 | 0.001630 | 0.001695 |
| has_modulus_assign_test.test | RUN | 0.230200 | 0.951595 | 2.001774 | 0.001711 | 0.001780 | 0.001607 |
| has_minus_test.test | RUN | 0.243846 | 0.881910 | 2.011294 | 0.001819 | 0.001705 | 0.001648 |
| has_minus_assign_test.test | RUN | 0.238030 | 0.926983 | 1.972111 | 0.001698 | 0.001800 | 0.001589 |
| has_logical_or_test.test | RUN | 0.228244 | 0.929589 | 1.945965 | 0.001516 | 0.001598 | 0.001781 |
| has_logical_not_test.test | RUN | 0.222843 | 0.882412 | 1.925333 | 0.001656 | 0.001542 | 0.001578 |
| has_logical_and_test.test | RUN | 0.228048 | 0.940523 | 1.976592 | 0.001408 | 0.001707 | 0.001808 |
| has_less_test.test | RUN | 0.237077 | 1.240877 | 1.955852 | 0.001807 | 0.001699 | 0.001611 |
| has_less_equal_test.test | RUN | 0.236328 | 1.202977 | 1.961594 | 0.001605 | 0.001846 | 0.001780 |
| has_left_shift_test.test | RUN | 0.253505 | 1.150926 | 2.442298 | 0.001728 | 0.001659 | 0.001789 |
| has_left_shift_assign_test.test | RUN | 0.236925 | 0.904844 | 1.935185 | 0.001711 | 0.001623 | 0.001664 |
| has_greater_test.test | RUN | 0.232851 | 1.238652 | 2.001161 | 0.001868 | 0.001750 | 0.001652 |
| has_greater_equal_test.test | RUN | 0.235606 | 1.218920 | 1.972425 | 0.001633 | 0.001741 | 0.001695 |
| has_equal_to_test.test | RUN | 0.227435 | 1.229286 | 1.967161 | 0.001426 | 0.001776 | 0.001861 |
| has_divides_test.test | RUN | 0.232214 | 0.925069 | 1.975893 | 0.001763 | 0.001582 | 0.001691 |
| has_divides_assign_test.test | RUN | 0.233465 | 0.900470 | 1.962703 | 0.001671 | 0.001877 | 0.001718 |
| has_dereference_test.test | RUN | 0.228649 | 0.909127 | 1.866040 | 0.002094 | 0.001688 | 0.001616 |
| has_complement_test.test | RUN | 0.227664 | 1.230123 | 1.918725 | 0.001724 | 0.001743 | 0.001561 |
| has_bit_xor_test.test | RUN | 0.228192 | 0.896622 | 1.962138 | 0.001540 | 0.001831 | 0.001762 |
| has_bit_xor_assign_test.test | RUN | 0.235282 | 0.892909 | 1.954353 | 0.001748 | 0.001843 | 0.001640 |
| has_bit_or_test.test | RUN | 0.230856 | 0.950130 | 1.919556 | 0.001365 | 0.001666 | 0.001917 |
| has_bit_or_assign_test.test | RUN | 0.233266 | 0.900340 | 1.932794 | 0.001785 | 0.001788 | 0.001515 |
| has_bit_and_test.test | RUN | 0.232095 | 0.919173 | 1.974157 | 0.001520 | 0.001804 | 0.001700 |
| has_bit_and_assign_test.test | RUN | 0.237178 | 0.929380 | 1.959123 | 0.001714 | 0.001854 | 0.001803 |
| has_binary_classes9_test.test | RUN | 0.258598 | 1.042819 | 2.134632 | 0.001622 | 0.001679 | 0.001677 |
| has_binary_classes8_test.test | RUN | 0.250176 | 1.043551 | 2.169546 | 0.001746 | 0.001796 | 0.001528 |
| has_binary_classes7_test.test | RUN | 0.257453 | 1.111647 | 2.119222 | 0.001620 | 0.001822 | 0.001556 |
| has_binary_classes6_test.test | RUN | 0.253424 | 1.052849 | 2.184078 | 0.001675 | 0.001793 | 0.001783 |
| has_binary_classes5_test.test | RUN | 0.252689 | 1.021848 | 2.101261 | 0.001594 | 0.001801 | 0.001844 |
| has_binary_classes4_test.test | RUN | 0.250221 | 1.095996 | 2.193539 | 0.001460 | 0.001756 | 0.001577 |
| has_binary_classes3_test.test | RUN | 0.253642 | 1.039868 | 2.200089 | 0.001422 | 0.001934 | 0.001588 |
| has_binary_classes2_test.test | RUN | 0.255243 | 1.103199 | 2.079694 | 0.001795 | 0.001673 | 0.001772 |
| has_binary_classes1_test.test | RUN | 0.255543 | 1.047123 | 2.103172 | 0.001537 | 0.001708 | 0.001466 |
| has_binary_classes0_test.test | RUN | 0.259170 | 1.120393 | 2.123541 | 0.001478 | 0.001584 | 0.001718 |
| function_traits_test.test | RUN | 0.113495 | 0.296307 | 0.477503 | 0.001789 | 0.001722 | 0.001631 |
| floating_point_promotion_test.test | RUN | 0.111625 | 0.277532 | 0.410651 | 0.001727 | 0.001847 | 0.001522 |
| extent_test.test | RUN | 0.117186 | 0.285736 | 0.474357 | 0.001682 | 0.001858 | 0.001420 |
| enable_if_test.test | RUN | 0.104072 | 0.251050 | 0.339652 | 0.001577 | 0.001586 | 0.001423 |
| disjunction_test.test | RUN | 0.106294 | 0.247513 | 0.364786 | 0.001690 | 0.001822 | 0.001736 |
| detected_test.test | RUN | 0.108958 | 0.235382 | 0.336394 | 0.001769 | 0.001835 | 0.001352 |
| detected_or_test.test | RUN | 0.108842 | 0.248702 | 0.383728 | 0.001785 | 0.001649 | 0.001574 |
| decay_test.test | RUN | 0.277745 | 0.995652 | 2.307061 | 0.001572 | 0.001862 | 0.001659 |
| cxx14_aliases_test.test | RUN | 0.173749 | 0.365692 | 0.586313 | 0.001648 | 0.001675 | 0.001582 |
| copy_reference_test.test | RUN | 0.109186 | 0.254260 | 0.352723 | 0.001497 | 0.001369 | 0.001547 |
| copy_cv_test.test | RUN | 0.113282 | 0.262293 | 0.406067 | 0.001730 | 0.001609 | 0.001745 |
| copy_cv_ref_test.test | RUN | 0.158668 | 0.441885 | 0.901577 | 0.001430 | 0.001812 | 0.001742 |
| conjunction_test.test | RUN | 0.107499 | 0.248839 | 0.387737 | 0.001717 | 0.001347 | 0.001672 |
| conditional_test.test | RUN | 0.108547 | 0.243264 | 0.369704 | 0.001480 | 0.001329 | 0.001676 |
| common_type_test.test | RUN | 0.142320 | 0.375256 | 0.734187 | 0.001786 | 0.001494 | 0.001516 |
| common_type_sfinae_test.test | RUN | 0.106230 | 0.237838 | 0.342660 | 0.001636 | 0.001448 | 0.001604 |
| common_type_sfinae2_test.test | RUN | 0.106603 | 0.247090 | 0.394792 | 0.001634 | 0.001488 | 0.001515 |
| common_type_6_test.test | RUN | 0.114965 | 0.257431 | 0.397656 | 0.001489 | 0.001796 | 0.001594 |
| common_type_5_test.test | RUN | 0.112794 | 0.255109 | 0.397447 | 0.001772 | 0.001852 | 0.001575 |
| common_type_4_test.test | RUN | 0.119096 | 0.273660 | 0.450637 | 0.001367 | 0.001436 | 0.001688 |
| common_type_3_test.test | RUN | 0.103921 | 0.239720 | 0.344086 | 0.001678 | 0.001401 | 0.001385 |
| common_type_2_test.test | RUN | 0.146057 | 0.385332 | 0.713142 | 0.001689 | 0.001814 | 0.001772 |
| alignment_of_test.test | RUN | 0.119419 | 0.296971 | 0.481522 | 0.001710 | 0.001623 | 0.001618 |
| alignment_of_a2_test.test | RUN | 0.114328 | 0.294893 | 0.459604 | 0.001538 | 0.001788 | 0.001478 |
| aligned_storage_test.test | RUN | 0.120514 | 0.289873 | 0.424558 | 0.001598 | 0.001659 | 0.001871 |
| aligned_storage_empy_test.test | RUN | 0.139823 | 0.336459 | 0.557036 | 0.001657 | 0.001898 | 0.001710 |
| aligned_storage_a2_test.test | RUN | 0.120435 | 0.282531 | 0.407713 | 0.001858 | 0.001977 | 0.001756 |
| add_volatile_test.test | RUN | 0.250465 | 0.847200 | 2.147325 | 0.001530 | 0.001752 | 0.001734 |
| add_rvalue_reference_test.test | RUN | 0.282875 | 0.952766 | 2.512418 | 0.001725 | 0.001664 | 0.001694 |
| add_reference_test.test | RUN | 0.275059 | 0.966867 | 2.490259 | 0.001434 | 0.001768 | 0.001749 |
| add_pointer_test.test | RUN | 0.180861 | 0.551342 | 1.292315 | 0.001585 | 0.001614 | 0.001703 |
| add_lvalue_reference_test.test | RUN | 0.273610 | 0.984246 | 2.456162 | 0.001801 | 0.001620 | 0.001674 |
| add_cv_test.test | RUN | 0.261059 | 0.898261 | 2.329867 | 0.001463 | 0.001467 | 0.001773 |
| add_const_test.test | RUN | 0.261970 | 0.882197 | 2.252120 | 0.001696 | 0.001749 | 0.001628 |
| is_virtual_base_of_fail.test | COMPILE_FAIL | 0.103677 | 0.235635 | 0.344298 | — | — | — |
| is_stateless_fail.test | COMPILE_FAIL | 0.107493 | 0.233762 | 0.359523 | — | — | — |
| is_polymorphic_fail.test | COMPILE_FAIL | 0.098944 | 0.223509 | 0.334042 | — | — | — |
| is_nothrow_move_constructible_fail.test | COMPILE_FAIL | 0.101321 | 0.226252 | 0.311099 | — | — | — |
| is_nothrow_move_assignable_fail.test | COMPILE_FAIL | 0.104001 | 0.230403 | 0.333065 | — | — | — |
| is_list_constructible_fail.test | COMPILE_FAIL | 0.103970 | 0.227864 | 0.320005 | — | — | — |
| is_empty_fail.test | COMPILE_FAIL | 0.103074 | 0.235888 | 0.297922 | — | — | — |
| is_destructible_fail.test | COMPILE_FAIL | 0.101696 | 0.228077 | 0.327762 | — | — | — |
| is_default_constructible_fail.test | COMPILE_FAIL | 0.100723 | 0.230424 | 0.324229 | — | — | — |
| is_copy_constructible_fail.test | COMPILE_FAIL | 0.101022 | 0.226330 | 0.329672 | — | — | — |
| is_copy_assignable_fail.test | COMPILE_FAIL | 0.101254 | 0.230558 | 0.328149 | — | — | — |
| is_convertible_fail.test | COMPILE_FAIL | 0.102015 | 0.227154 | 0.324997 | — | — | — |
| is_convertible2_fail.test | COMPILE_FAIL | 0.101420 | 0.232111 | 0.323388 | — | — | — |
| is_constructible_fail.test | COMPILE_FAIL | 0.101643 | 0.225582 | 0.329628 | — | — | — |
| is_base_of_fail.test | COMPILE_FAIL | 0.100792 | 0.230845 | 0.321549 | — | — | — |
| is_assignable_fail.test | COMPILE_FAIL | 0.100449 | 0.223410 | 0.323600 | — | — | — |
| has_nothrow_destruct_fail.test | COMPILE_FAIL | 0.100536 | 0.228460 | 0.326698 | — | — | — |
| has_nothrow_copy_fail.test | COMPILE_FAIL | 0.101876 | 0.226464 | 0.332197 | — | — | — |
| has_nothrow_cons_fail.test | COMPILE_FAIL | 0.101259 | 0.232075 | 0.326119 | — | — | — |
| has_nothrow_assign_fail.test | COMPILE_FAIL | 0.101074 | 0.223739 | 0.320509 | — | — | — |
| common_type_fail.test | COMPILE_FAIL | 0.101490 | 0.229756 | 0.327537 | — | — | — |
| common_type2_fail.test | COMPILE_FAIL | 0.102075 | 0.225029 | 0.332859 | — | — | — |
| has_nothrow_assign_test_no_intrinsics.test | RUN | 0.160495 | 0.489809 | 0.955173 | 0.001473 | 0.001544 | 0.001605 |
| has_nothrow_constr_test_no_intrinsics.test | RUN | 0.152235 | 0.487240 | 0.905183 | 0.001493 | 0.001601 | 0.001632 |
| has_nothrow_copy_test_no_intrinsics.test | RUN | 0.156847 | 0.497004 | 0.950973 | 0.001468 | 0.001370 | 0.001828 |
| is_nothrow_move_assignable_test_no_intrinsics.test | RUN | 0.156745 | 0.485368 | 0.929339 | 0.001292 | 0.001336 | 0.001216 |
| is_nothrow_move_constructible_test_no_intrinsics.test | RUN | 0.109169 | 0.328017 | 0.574314 | 0.001252 | 0.001298 | 0.001194 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 1.002× | 0.995×, 1.009× | 1.003× |
| clang | 1.001× | 1.025×, 0.978× | 0.984× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1363 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/43916760662).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| add_const_test.test | 10 | 0.001080s | 0.000983s | 0.001048s | byte equality observed |
| add_cv_test.test | 10 | 0.001127s | 0.000980s | 0.001071s | byte equality observed |
| add_lvalue_reference_test.test | 10 | 0.001061s | 0.001009s | 0.001077s | byte equality observed |
| add_pointer_test.test | 10 | 0.001052s | 0.000979s | 0.001038s | byte equality observed |
| add_reference_test.test | 10 | 0.001054s | 0.000994s | 0.001064s | byte equality observed |
| add_rvalue_reference_test.test | 10 | 0.001079s | 0.000990s | 0.001075s | byte equality observed |
| add_volatile_test.test | 10 | 0.001076s | 0.001012s | 0.001047s | byte equality observed |
| aligned_storage_a2_test.test | 10 | 0.001176s | 0.001066s | 0.001165s | byte equality observed |
| aligned_storage_empy_test.test | 10 | 0.001054s | 0.000990s | 0.001069s | byte equality observed |
| aligned_storage_test.test | 10 | 0.001188s | 0.001086s | 0.001156s | byte equality observed |
| alignment_of_a2_test.test | 10 | 0.001050s | 0.001008s | 0.001047s | byte equality observed |
| alignment_of_test.test | 10 | 0.001135s | 0.000970s | 0.001062s | byte equality observed |
| common_type_2_test.test | 10 | 0.001099s | 0.001012s | 0.001047s | byte equality observed |
| common_type_3_test.test | 10 | 0.001147s | 0.001006s | 0.001065s | byte equality observed |
| common_type_4_test.test | 10 | 0.001134s | 0.000981s | 0.001043s | byte equality observed |
| common_type_5_test.test | 10 | 0.001126s | 0.000985s | 0.001036s | byte equality observed |
| common_type_6_test.test | 10 | 0.001130s | 0.001012s | 0.001081s | byte equality observed |
| common_type_sfinae2_test.test | 10 | 0.001134s | 0.000997s | 0.001093s | byte equality observed |
| common_type_sfinae_test.test | 10 | 0.001154s | 0.000998s | 0.001048s | byte equality observed |
| common_type_test.test | 10 | 0.001125s | 0.000956s | 0.001051s | byte equality observed |
| conditional_test.test | 10 | 0.001117s | 0.001012s | 0.001084s | byte equality observed |
| conjunction_test.test | 10 | 0.001133s | 0.000999s | 0.001071s | byte equality observed |
| copy_cv_ref_test.test | 10 | 0.001141s | 0.000986s | 0.001084s | byte equality observed |
| copy_cv_test.test | 10 | 0.001123s | 0.000975s | 0.001051s | byte equality observed |
| copy_reference_test.test | 10 | 0.001124s | 0.000989s | 0.001076s | byte equality observed |
| cxx14_aliases_test.test | 10 | 0.001121s | 0.001017s | 0.001067s | byte equality observed |
| decay_test.test | 10 | 0.001155s | 0.000987s | 0.001066s | byte equality observed |
| detected_or_test.test | 10 | 0.001112s | 0.001003s | 0.001090s | byte equality observed |
| detected_test.test | 10 | 0.001098s | 0.000985s | 0.001048s | byte equality observed |
| disjunction_test.test | 10 | 0.001141s | 0.000989s | 0.001078s | byte equality observed |
| enable_if_test.test | 10 | 0.001121s | 0.001007s | 0.001057s | byte equality observed |
| extent_test.test | 10 | 0.001105s | 0.001030s | 0.001056s | byte equality observed |
| floating_point_promotion_test.test | 10 | 0.001125s | 0.000970s | 0.001035s | byte equality observed |
| function_traits_test.test | 10 | 0.001134s | 0.000990s | 0.001061s | byte equality observed |
| has_binary_classes0_test.test | 10 | 0.001128s | 0.000984s | 0.001071s | byte equality observed |
| has_binary_classes1_test.test | 10 | 0.001137s | 0.000998s | 0.001079s | byte equality observed |
| has_binary_classes2_test.test | 10 | 0.001132s | 0.001001s | 0.001066s | byte equality observed |
| has_binary_classes3_test.test | 10 | 0.001126s | 0.001008s | 0.001104s | byte equality observed |
| has_binary_classes4_test.test | 10 | 0.001124s | 0.000999s | 0.001122s | byte equality observed |
| has_binary_classes5_test.test | 10 | 0.001118s | 0.001021s | 0.001102s | byte equality observed |
| has_binary_classes6_test.test | 10 | 0.001111s | 0.000988s | 0.001111s | byte equality observed |
| has_binary_classes7_test.test | 10 | 0.001129s | 0.000994s | 0.001102s | byte equality observed |
| has_binary_classes8_test.test | 10 | 0.001110s | 0.000970s | 0.001126s | byte equality observed |
| has_binary_classes9_test.test | 10 | 0.001132s | 0.000968s | 0.001131s | byte equality observed |
| has_bit_and_assign_test.test | 10 | 0.001121s | 0.001029s | 0.001111s | byte equality observed |
| has_bit_and_test.test | 10 | 0.001124s | 0.000969s | 0.001119s | byte equality observed |
| has_bit_or_assign_test.test | 10 | 0.001099s | 0.000994s | 0.001140s | byte equality observed |
| has_bit_or_test.test | 10 | 0.001101s | 0.000954s | 0.001128s | byte equality observed |
| has_bit_xor_assign_test.test | 10 | 0.001117s | 0.001002s | 0.001120s | byte equality observed |
| has_bit_xor_test.test | 10 | 0.001133s | 0.000978s | 0.001135s | byte equality observed |
| has_complement_test.test | 10 | 0.001103s | 0.000998s | 0.001130s | byte equality observed |
| has_dereference_test.test | 10 | 0.001115s | 0.000998s | 0.001129s | byte equality observed |
| has_divides_assign_test.test | 10 | 0.001138s | 0.001015s | 0.001112s | byte equality observed |
| has_divides_test.test | 10 | 0.001118s | 0.000995s | 0.001140s | byte equality observed |
| has_equal_to_test.test | 10 | 0.001140s | 0.000993s | 0.001125s | byte equality observed |
| has_greater_equal_test.test | 10 | 0.001126s | 0.001033s | 0.001136s | byte equality observed |
| has_greater_test.test | 10 | 0.001103s | 0.000982s | 0.001149s | byte equality observed |
| has_left_shift_assign_test.test | 10 | 0.001113s | 0.001008s | 0.001116s | byte equality observed |
| has_left_shift_test.test | 10 | 0.001117s | 0.000984s | 0.001134s | byte equality observed |
| has_less_equal_test.test | 10 | 0.001121s | 0.000985s | 0.001146s | byte equality observed |
| has_less_test.test | 10 | 0.001139s | 0.000981s | 0.001123s | byte equality observed |
| has_logical_and_test.test | 10 | 0.001118s | 0.000997s | 0.001155s | byte equality observed |
| has_logical_not_test.test | 10 | 0.001121s | 0.001032s | 0.001109s | byte equality observed |
| has_logical_or_test.test | 10 | 0.001116s | 0.001019s | 0.001140s | byte equality observed |
| has_minus_assign_test.test | 10 | 0.001117s | 0.001054s | 0.001138s | byte equality observed |
| has_minus_test.test | 10 | 0.001135s | 0.001022s | 0.001145s | byte equality observed |
| has_modulus_assign_test.test | 10 | 0.001112s | 0.000970s | 0.001117s | byte equality observed |
| has_modulus_test.test | 10 | 0.001126s | 0.000990s | 0.001152s | byte equality observed |
| has_multiplies_assign_test.test | 10 | 0.001088s | 0.000996s | 0.001152s | byte equality observed |
| has_multiplies_test.test | 10 | 0.001106s | 0.001033s | 0.001140s | byte equality observed |
| has_negate_test.test | 10 | 0.001115s | 0.001055s | 0.001140s | byte equality observed |
| has_not_equal_to_test.test | 10 | 0.001120s | 0.000998s | 0.001123s | byte equality observed |
| has_nothrow_assign_test.test | 10 | 0.001122s | 0.001003s | 0.001108s | byte equality observed |
| has_nothrow_assign_test_no_intrinsics.test | 10 | 0.001117s | 0.001047s | 0.001150s | byte equality observed |
| has_nothrow_constr_test.test | 10 | 0.001124s | 0.001061s | 0.001120s | byte equality observed |
| has_nothrow_constr_test_no_intrinsics.test | 10 | 0.001122s | 0.001100s | 0.001150s | byte equality observed |
| has_nothrow_copy_test.test | 10 | 0.001125s | 0.001090s | 0.001129s | byte equality observed |
| has_nothrow_copy_test_no_intrinsics.test | 10 | 0.001120s | 0.000975s | 0.001153s | byte equality observed |
| has_nothrow_destructor_test.test | 10 | 0.001118s | 0.001031s | 0.001152s | byte equality observed |
| has_operator_new_test.test | 10 | 0.001130s | 0.000995s | 0.001141s | byte equality observed |
| has_plus_assign_test.test | 10 | 0.001125s | 0.001014s | 0.001125s | byte equality observed |
| has_plus_test.test | 10 | 0.001113s | 0.001057s | 0.001136s | byte equality observed |
| has_post_decrement_test.test | 10 | 0.001127s | 0.001056s | 0.001147s | byte equality observed |
| has_post_increment_test.test | 10 | 0.001132s | 0.001047s | 0.001118s | byte equality observed |
| has_postfix_classes0_test.test | 10 | 0.001112s | 0.001063s | 0.001115s | byte equality observed |
| has_postfix_classes1_test.test | 10 | 0.001119s | 0.001071s | 0.001150s | byte equality observed |
| has_postfix_classes2_test.test | 10 | 0.001143s | 0.001107s | 0.001152s | byte equality observed |
| has_postfix_classes3_test.test | 10 | 0.001122s | 0.001107s | 0.001147s | byte equality observed |
| has_pre_decrement_test.test | 10 | 0.001131s | 0.001089s | 0.001129s | byte equality observed |
| has_pre_increment_test.test | 10 | 0.001117s | 0.001067s | 0.001132s | byte equality observed |
| has_prefix_classes0_test.test | 10 | 0.001108s | 0.001102s | 0.001158s | byte equality observed |
| has_prefix_classes1_test.test | 10 | 0.001137s | 0.001061s | 0.001159s | byte equality observed |
| has_prefix_classes2_test.test | 10 | 0.001125s | 0.001091s | 0.001158s | byte equality observed |
| has_prefix_classes3_test.test | 10 | 0.001120s | 0.001081s | 0.001147s | byte equality observed |
| has_right_shift_assign_test.test | 10 | 0.001095s | 0.001067s | 0.001156s | byte equality observed |
| has_right_shift_test.test | 10 | 0.001067s | 0.001069s | 0.001149s | byte equality observed |
| has_trivial_assign_test.test | 10 | 0.001202s | 0.001153s | 0.001187s | byte equality observed |
| has_trivial_constr_test.test | 10 | 0.001169s | 0.001154s | 0.001204s | native test oracle; output varies |
| has_trivial_copy_test.test | 10 | 0.001191s | 0.001166s | 0.001205s | native test oracle; output varies |
| has_trivial_destructor_test.test | 10 | 0.001130s | 0.001154s | 0.001129s | byte equality observed |
| has_trivial_move_assign_test.test | 10 | 0.001122s | 0.001132s | 0.001158s | byte equality observed |
| has_trivial_move_constructor_test.test | 10 | 0.001114s | 0.001143s | 0.001143s | byte equality observed |
| has_unary_minus_test.test | 10 | 0.001118s | 0.001122s | 0.001147s | byte equality observed |
| has_unary_plus_test.test | 10 | 0.001105s | 0.001162s | 0.001155s | byte equality observed |
| has_virtual_destructor_test.test | 10 | 0.001128s | 0.001180s | 0.001141s | byte equality observed |
| integral_constant_test.test | 10 | 0.000499s | 0.000517s | 0.001167s | byte equality observed |
| is_abstract_test.test | 10 | 0.001139s | 0.001140s | 0.001147s | byte equality observed |
| is_arithmetic_test.test | 10 | 0.001124s | 0.001148s | 0.001149s | byte equality observed |
| is_array_test.test | 10 | 0.001129s | 0.001143s | 0.001125s | byte equality observed |
| is_assignable_test.test | 10 | 0.001117s | 0.001150s | 0.001144s | byte equality observed |
| is_base_and_derived_test.test | 10 | 0.001132s | 0.001156s | 0.001151s | byte equality observed |
| is_base_of_test.test | 10 | 0.001129s | 0.001142s | 0.001162s | byte equality observed |
| is_bounded_array_test.test | 10 | 0.001129s | 0.001158s | 0.001139s | byte equality observed |
| is_class_test.test | 10 | 0.001138s | 0.001152s | 0.001134s | byte equality observed |
| is_complete_test.test | 10 | 0.001113s | 0.001135s | 0.001160s | byte equality observed |
| is_complex_test.test | 10 | 0.001151s | 0.001142s | 0.001128s | byte equality observed |
| is_compound_test.test | 10 | 0.001140s | 0.001143s | 0.001165s | byte equality observed |
| is_const_test.test | 10 | 0.001141s | 0.001153s | 0.001131s | byte equality observed |
| is_constructible_test.test | 10 | 0.001153s | 0.001145s | 0.001147s | byte equality observed |
| is_convertible_test.test | 10 | 0.001133s | 0.001151s | 0.001122s | byte equality observed |
| is_copy_assignable_test.test | 10 | 0.001123s | 0.001149s | 0.001150s | byte equality observed |
| is_copy_constructible_test.test | 10 | 0.001140s | 0.001150s | 0.001145s | byte equality observed |
| is_default_constr_test.test | 10 | 0.001140s | 0.001151s | 0.001159s | byte equality observed |
| is_destructible_test.test | 10 | 0.001147s | 0.001136s | 0.001125s | byte equality observed |
| is_detected_exact_test.test | 10 | 0.001137s | 0.001144s | 0.001149s | byte equality observed |
| is_detected_test.test | 10 | 0.001141s | 0.001156s | 0.001151s | byte equality observed |
| is_empty_test.test | 10 | 0.001134s | 0.001151s | 0.001132s | byte equality observed |
| is_enum_test.test | 10 | 0.001140s | 0.001147s | 0.001128s | byte equality observed |
| is_final_test.test | 10 | 0.001135s | 0.001169s | 0.001151s | byte equality observed |
| is_float_test.test | 10 | 0.001158s | 0.001159s | 0.001143s | byte equality observed |
| is_floating_point_test.test | 10 | 0.001155s | 0.001160s | 0.001154s | byte equality observed |
| is_function_test.test | 10 | 0.001138s | 0.001157s | 0.001151s | byte equality observed |
| is_fundamental_test.test | 10 | 0.001166s | 0.001142s | 0.001110s | byte equality observed |
| is_integral_test.test | 10 | 0.001147s | 0.001145s | 0.001141s | byte equality observed |
| is_list_constructible_test.test | 10 | 0.001144s | 0.001127s | 0.001158s | byte equality observed |
| is_lvalue_reference_test.test | 10 | 0.001159s | 0.001163s | 0.001143s | byte equality observed |
| is_member_func_test.test | 10 | 0.001147s | 0.001141s | 0.001139s | byte equality observed |
| is_member_obj_test.test | 10 | 0.001148s | 0.001168s | 0.001152s | byte equality observed |
| is_member_pointer_test.test | 10 | 0.001147s | 0.001148s | 0.001139s | byte equality observed |
| is_noncopyable_test.test | 10 | 0.001142s | 0.001174s | 0.001154s | byte equality observed |
| is_nothrow_move_assignable_test.test | 10 | 0.001152s | 0.001147s | 0.001133s | byte equality observed |
| is_nothrow_move_assignable_test_no_intrinsics.test | 10 | 0.001141s | 0.001153s | 0.001161s | byte equality observed |
| is_nothrow_move_constructible_test.test | 10 | 0.001141s | 0.001157s | 0.001158s | byte equality observed |
| is_nothrow_move_constructible_test_no_intrinsics.test | 10 | 0.001142s | 0.001149s | 0.001147s | byte equality observed |
| is_nothrow_swappable_test.test | 10 | 0.001131s | 0.001148s | 0.001168s | byte equality observed |
| is_object_test.test | 10 | 0.001139s | 0.001136s | 0.001130s | byte equality observed |
| is_pod_test.test | 10 | 0.001146s | 0.001138s | 0.001148s | byte equality observed |
| is_pointer_test.test | 10 | 0.001131s | 0.001152s | 0.001127s | byte equality observed |
| is_polymorphic_test.test | 10 | 0.001139s | 0.001170s | 0.001170s | byte equality observed |
| is_reference_test.test | 10 | 0.001149s | 0.001140s | 0.001152s | byte equality observed |
| is_rvalue_reference_test.test | 10 | 0.001132s | 0.001135s | 0.001140s | byte equality observed |
| is_same_test.test | 10 | 0.001152s | 0.001158s | 0.001151s | byte equality observed |
| is_scalar_test.test | 10 | 0.001135s | 0.001160s | 0.001120s | byte equality observed |
| is_scoped_enum_test.test | 10 | 0.001128s | 0.001162s | 0.001168s | byte equality observed |
| is_signed_test.test | 10 | 0.001147s | 0.001154s | 0.001132s | byte equality observed |
| is_stateless_test.test | 10 | 0.001139s | 0.001157s | 0.001135s | byte equality observed |
| is_swappable_test.test | 10 | 0.001136s | 0.001163s | 0.001135s | byte equality observed |
| is_trivially_copyable_test.test | 10 | 0.001177s | 0.001169s | 0.001159s | byte equality observed |
| is_unbounded_array_test.test | 10 | 0.001139s | 0.001146s | 0.001152s | byte equality observed |
| is_union_test.test | 10 | 0.001136s | 0.001165s | 0.001148s | byte equality observed |
| is_unscoped_enum_test.test | 10 | 0.001141s | 0.001174s | 0.001132s | byte equality observed |
| is_unsigned_test.test | 10 | 0.001148s | 0.001157s | 0.001133s | byte equality observed |
| is_virtual_base_of_test.test | 10 | 0.001161s | 0.001157s | 0.001143s | byte equality observed |
| is_void_test.test | 10 | 0.001140s | 0.001139s | 0.001129s | byte equality observed |
| is_volatile_test.test | 10 | 0.001130s | 0.001139s | 0.001137s | byte equality observed |
| make_signed_test.test | 10 | 0.001152s | 0.001123s | 0.001147s | byte equality observed |
| make_unsigned_test.test | 10 | 0.001171s | 0.001163s | 0.001139s | byte equality observed |
| make_void_test.test | 10 | 0.001163s | 0.001160s | 0.001134s | byte equality observed |
| mpl_interop_test1.test | 10 | 0.000513s | 0.000503s | 0.001155s | byte equality observed |
| mpl_interop_test2.test | 10 | 0.000517s | 0.000511s | 0.001138s | byte equality observed |
| mpl_interop_test3.test | 10 | 0.000515s | 0.000504s | 0.001123s | byte equality observed |
| negation_test.test | 10 | 0.001202s | 0.001173s | 0.001134s | byte equality observed |
| promote_basic_test.test | 10 | 0.000520s | 0.000507s | 0.001146s | byte equality observed |
| promote_enum_msvc_bug_test.test | 10 | 0.000520s | 0.000513s | 0.001150s | byte equality observed |
| promote_enum_test.test | 10 | 0.000511s | 0.000518s | 0.001135s | byte equality observed |
| promote_mpl_test.test | 10 | 0.000508s | 0.000510s | 0.001142s | byte equality observed |
| rank_test.test | 10 | 0.001164s | 0.001159s | 0.001141s | byte equality observed |
| remove_all_extents_test.test | 10 | 0.001161s | 0.001150s | 0.001132s | byte equality observed |
| remove_bounds_test.test | 10 | 0.001170s | 0.001141s | 0.001133s | byte equality observed |
| remove_const_test.test | 10 | 0.001153s | 0.001136s | 0.001138s | byte equality observed |
| remove_cv_ref_test.test | 10 | 0.001148s | 0.001126s | 0.001130s | byte equality observed |
| remove_cv_test.test | 10 | 0.001147s | 0.001145s | 0.001128s | byte equality observed |
| remove_extent_test.test | 10 | 0.001156s | 0.001148s | 0.001133s | byte equality observed |
| remove_pointer_test.test | 10 | 0.001157s | 0.001099s | 0.001147s | byte equality observed |
| remove_reference_test.test | 10 | 0.001142s | 0.001141s | 0.001147s | byte equality observed |
| remove_volatile_test.test | 10 | 0.001143s | 0.001129s | 0.001118s | byte equality observed |
| tricky_abstract_type_test.test | 10 | 0.001140s | 0.001143s | 0.001122s | byte equality observed |
| tricky_add_pointer_test.test | 10 | 0.001138s | 0.001141s | 0.001144s | byte equality observed |
| tricky_function_type_test.test | 10 | 0.001128s | 0.001127s | 0.001135s | byte equality observed |
| tricky_incomplete_type_test.test | 10 | 0.001151s | 0.001146s | 0.001130s | byte equality observed |
| tricky_is_enum_test.test | 10 | 0.001141s | 0.001127s | 0.001132s | byte equality observed |
| tricky_partial_spec_test.test | 10 | 0.001156s | 0.001125s | 0.001163s | byte equality observed |
| tricky_rvalue_test.test | 10 | 0.001143s | 0.001151s | 0.001142s | byte equality observed |
| type_identity_test.test | 10 | 0.001161s | 0.001140s | 0.001125s | byte equality observed |
| type_traits_test.test | 10 | 0.000511s | 0.000512s | 0.001142s | byte equality observed |
| type_with_alignment_test.test | 10 | 0.001281s | 0.001258s | 0.001277s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/43916760662).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
