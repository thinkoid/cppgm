# libs/type_traits/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| type_with_alignment_test.test | RUN | 0.115250 | 0.325559 | 0.511888 | 0.001512 | 0.001703 | 0.001749 |
| type_traits_test.test | RUN | 0.160912 | 0.338396 | 0.503580 | 0.000587 | 0.000603 | 0.001345 |
| type_identity_test.test | RUN | 0.302188 | 1.174154 | 2.989522 | 0.001484 | 0.001814 | 0.001647 |
| tricky_rvalue_test.test | RUN | 0.106911 | 0.260280 | 0.399526 | 0.001604 | 0.001740 | 0.001558 |
| tricky_partial_spec_test.test | RUN | 0.129045 | 0.373427 | 0.616944 | 0.001551 | 0.001733 | 0.001514 |
| tricky_is_enum_test.test | RUN | 0.103042 | 0.248779 | 0.360154 | 0.001648 | 0.001661 | 0.001515 |
| tricky_incomplete_type_test.test | RUN | 0.171397 | 0.378875 | 0.621866 | 0.001609 | 0.001595 | 0.001676 |
| tricky_function_type_test.test | RUN | 0.138582 | 0.403076 | 0.686034 | 0.001634 | 0.001617 | 0.001589 |
| tricky_add_pointer_test.test | RUN | 0.203764 | 0.703520 | 1.693758 | 0.001522 | 0.001800 | 0.001790 |
| tricky_abstract_type_test.test | RUN | 0.109646 | 0.239733 | 0.380192 | 0.001622 | 0.001646 | 0.001784 |
| remove_volatile_test.test | RUN | 0.272353 | 1.003244 | 2.579538 | 0.001757 | 0.001795 | 0.001702 |
| remove_reference_test.test | RUN | 0.286995 | 1.051667 | 2.702839 | 0.001686 | 0.001445 | 0.001751 |
| remove_pointer_test.test | RUN | 0.298653 | 1.100196 | 2.905300 | 0.001686 | 0.001850 | 0.001721 |
| remove_extent_test.test | RUN | 0.282771 | 1.055102 | 2.704190 | 0.001437 | 0.001974 | 0.001750 |
| remove_cv_test.test | RUN | 0.281961 | 1.049529 | 2.735132 | 0.001763 | 0.001841 | 0.001720 |
| remove_cv_ref_test.test | RUN | 0.600491 | 2.535795 | 6.675695 | 0.001574 | 0.001434 | 0.001785 |
| remove_const_test.test | RUN | 0.271026 | 0.992492 | 2.632535 | 0.001670 | 0.001772 | 0.001748 |
| remove_bounds_test.test | RUN | 0.291687 | 1.052721 | 2.774771 | 0.001624 | 0.001400 | 0.001762 |
| remove_all_extents_test.test | RUN | 0.283933 | 1.039853 | 2.581673 | 0.001493 | 0.001624 | 0.001600 |
| rank_test.test | RUN | 0.112272 | 0.249867 | 0.409657 | 0.001510 | 0.001756 | 0.001754 |
| promote_mpl_test.test | RUN | 0.096329 | 0.228602 | 0.278328 | 0.000671 | 0.000614 | 0.001520 |
| promote_enum_test.test | RUN | 0.022742 | 0.059187 | 0.072030 | 0.000564 | 0.000666 | 0.001606 |
| promote_enum_msvc_bug_test.test | RUN | 0.019725 | 0.048665 | 0.055551 | 0.000585 | 0.000711 | 0.001568 |
| promote_basic_test.test | RUN | 0.024918 | 0.071435 | 0.074087 | 0.000698 | 0.000563 | 0.001740 |
| negation_test.test | RUN | 0.104660 | 0.237373 | 0.362886 | 0.001559 | 0.001559 | 0.001635 |
| mpl_interop_test3.test | RUN | 0.090347 | 0.208889 | 0.229890 | 0.000633 | 0.000632 | 0.001622 |
| mpl_interop_test2.test | RUN | 0.032890 | 0.067289 | 0.064118 | 0.000745 | 0.000648 | 0.001573 |
| mpl_interop_test1.test | RUN | 0.017012 | 0.045714 | 0.050889 | 0.000597 | 0.000718 | 0.001580 |
| make_void_test.test | RUN | 0.109437 | 0.257293 | 0.404487 | 0.001632 | 0.001595 | 0.001768 |
| make_unsigned_test.test | RUN | 0.127531 | 0.336913 | 0.541239 | 0.001710 | 0.001432 | 0.001723 |
| make_signed_test.test | RUN | 0.127382 | 0.337235 | 0.586138 | 0.001382 | 0.001288 | 0.001703 |
| is_volatile_test.test | RUN | 0.112339 | 0.295845 | 0.450214 | 0.001479 | 0.001545 | 0.001798 |
| is_void_test.test | RUN | 0.112165 | 0.274249 | 0.410836 | 0.001573 | 0.001673 | 0.001772 |
| is_virtual_base_of_test.test | RUN | 0.127596 | 0.332760 | 0.593951 | 0.001587 | 0.001602 | 0.001658 |
| is_unsigned_test.test | RUN | 0.116345 | 0.284580 | 0.448615 | 0.001466 | 0.001698 | 0.001617 |
| is_unscoped_enum_test.test | RUN | 0.111479 | 0.253016 | 0.329757 | 0.001324 | 0.001688 | 0.001724 |
| is_union_test.test | RUN | 0.118980 | 0.319965 | 0.522883 | 0.001706 | 0.001851 | 0.001729 |
| is_unbounded_array_test.test | RUN | 0.108054 | 0.270395 | 0.399559 | 0.001477 | 0.001792 | 0.001702 |
| is_trivially_copyable_test.test | RUN | 0.177099 | 0.558858 | 1.089705 | 0.001571 | 0.001696 | 0.001688 |
| is_swappable_test.test | RUN | 0.141218 | 0.429969 | 0.783590 | 0.001554 | 0.001833 | 0.001492 |
| is_stateless_test.test | RUN | 0.169194 | 0.488459 | 0.955953 | 0.001532 | 0.001704 | 0.001530 |
| is_signed_test.test | RUN | 0.116067 | 0.272163 | 0.424102 | 0.001507 | 0.001652 | 0.001696 |
| is_scoped_enum_test.test | RUN | 0.109853 | 0.248726 | 0.376364 | 0.001491 | 0.001796 | 0.001413 |
| is_scalar_test.test | RUN | 0.145130 | 0.443172 | 0.795957 | 0.001534 | 0.001478 | 0.001727 |
| is_same_test.test | RUN | 0.109658 | 0.266719 | 0.432599 | 0.001483 | 0.001740 | 0.001728 |
| is_rvalue_reference_test.test | RUN | 0.114954 | 0.298441 | 0.491919 | 0.001486 | 0.001732 | 0.001651 |
| is_reference_test.test | RUN | 0.115894 | 0.298035 | 0.501442 | 0.001610 | 0.001747 | 0.001420 |
| is_polymorphic_test.test | RUN | 0.120585 | 0.299914 | 0.504093 | 0.001694 | 0.001672 | 0.001713 |
| is_pointer_test.test | RUN | 0.115048 | 0.306931 | 0.489809 | 0.001711 | 0.001622 | 0.001799 |
| is_pod_test.test | RUN | 0.154019 | 0.504367 | 0.935025 | 0.001471 | 0.001623 | 0.001799 |
| is_object_test.test | RUN | 0.107209 | 0.252101 | 0.394070 | 0.001622 | 0.001484 | 0.001665 |
| is_nothrow_swappable_test.test | RUN | 0.155102 | 0.458526 | 0.867542 | 0.001757 | 0.001736 | 0.001695 |
| is_nothrow_move_constructible_test.test | RUN | 0.149124 | 0.478958 | 0.839415 | 0.001620 | 0.001506 | 0.001648 |
| is_nothrow_move_assignable_test.test | RUN | 0.151072 | 0.495188 | 0.943147 | 0.001608 | 0.001741 | 0.001577 |
| is_noncopyable_test.test | RUN | 0.109467 | 0.278957 | 0.413361 | 0.001552 | 0.001693 | 0.001753 |
| is_member_pointer_test.test | RUN | 0.112666 | 0.265450 | 0.372614 | 0.001516 | 0.001923 | 0.001748 |
| is_member_obj_test.test | RUN | 0.112530 | 0.269760 | 0.378917 | 0.001737 | 0.001682 | 0.001846 |
| is_member_func_test.test | RUN | 0.114487 | 0.289481 | 0.467880 | 0.001592 | 0.001720 | 0.001600 |
| is_lvalue_reference_test.test | RUN | 0.115253 | 0.307843 | 0.499153 | 0.001520 | 0.001783 | 0.001541 |
| is_list_constructible_test.test | RUN | 0.135624 | 0.352289 | 0.529399 | 0.001686 | 0.001800 | 0.001771 |
| is_integral_test.test | RUN | 0.138537 | 0.421085 | 0.765601 | 0.001683 | 0.001840 | 0.001466 |
| is_fundamental_test.test | RUN | 0.140630 | 0.432866 | 0.776763 | 0.001484 | 0.001553 | 0.001754 |
| is_function_test.test | RUN | 0.114379 | 0.278734 | 0.450202 | 0.001610 | 0.001782 | 0.001618 |
| is_floating_point_test.test | RUN | 0.118242 | 0.318997 | 0.488123 | 0.001325 | 0.001392 | 0.001351 |
| is_float_test.test | RUN | 0.120061 | 0.315713 | 0.478979 | 0.001590 | 0.001765 | 0.001647 |
| is_final_test.test | RUN | 0.118439 | 0.321657 | 0.496511 | 0.001479 | 0.001691 | 0.001462 |
| is_enum_test.test | RUN | 0.111546 | 0.269074 | 0.388652 | 0.001527 | 0.001797 | 0.001780 |
| is_empty_test.test | RUN | 0.117877 | 0.287871 | 0.441209 | 0.001305 | 0.001726 | 0.001556 |
| is_detected_test.test | RUN | 0.105108 | 0.247699 | 0.337882 | 0.001518 | 0.001920 | 0.001703 |
| is_detected_exact_test.test | RUN | 0.100940 | 0.252139 | 0.343269 | 0.001629 | 0.001659 | 0.001483 |
| is_destructible_test.test | RUN | 0.147438 | 0.481914 | 0.895243 | 0.001578 | 0.001821 | 0.001607 |
| is_default_constr_test.test | RUN | 0.153268 | 0.487829 | 0.906138 | 0.001444 | 0.001799 | 0.001417 |
| is_copy_constructible_test.test | RUN | 0.164577 | 0.510287 | 0.992786 | 0.001584 | 0.001690 | 0.001677 |
| is_copy_assignable_test.test | RUN | 0.161559 | 0.506133 | 0.985358 | 0.001535 | 0.001501 | 0.001572 |
| is_convertible_test.test | RUN | 0.150534 | 0.457534 | 0.806562 | 0.001359 | 0.001755 | 0.001590 |
| is_constructible_test.test | RUN | 0.126669 | 0.324932 | 0.557633 | 0.001632 | 0.001345 | 0.001801 |
| is_const_test.test | RUN | 0.112931 | 0.286103 | 0.452652 | 0.001572 | 0.001553 | 0.001703 |
| is_compound_test.test | RUN | 0.107794 | 0.250450 | 0.341255 | 0.001510 | 0.001631 | 0.001556 |
| is_complex_test.test | RUN | 0.144716 | 0.329213 | 0.495008 | 0.001343 | 0.002616 | 0.001751 |
| is_complete_test.test | RUN | 0.127172 | 0.352749 | 0.574837 | 0.001583 | 0.001908 | 0.001391 |
| is_class_test.test | RUN | 0.114625 | 0.315364 | 0.464431 | 0.001631 | 0.001382 | 0.001738 |
| is_bounded_array_test.test | RUN | 0.108825 | 0.275953 | 0.428733 | 0.001441 | 0.001542 | 0.001498 |
| is_base_of_test.test | RUN | 0.115441 | 0.299183 | 0.465465 | 0.001457 | 0.001515 | 0.001777 |
| is_base_and_derived_test.test | RUN | 0.117565 | 0.293458 | 0.439242 | 0.001466 | 0.001692 | 0.001766 |
| is_assignable_test.test | RUN | 0.137940 | 0.414020 | 0.727038 | 0.001440 | 0.001663 | 0.001618 |
| is_array_test.test | RUN | 0.112573 | 0.286320 | 0.463522 | 0.001780 | 0.001549 | 0.001712 |
| is_arithmetic_test.test | RUN | 0.137832 | 0.440919 | 0.733461 | 0.001533 | 0.001706 | 0.001766 |
| is_abstract_test.test | RUN | 0.248620 | 1.132643 | 2.527336 | 0.001675 | 0.001679 | 0.001756 |
| integral_constant_test.test | RUN | 0.017109 | 0.045167 | 0.053346 | 0.000705 | 0.000692 | 0.001391 |
| has_virtual_destructor_test.test | RUN | 0.120322 | 0.325245 | 0.563397 | 0.001712 | 0.001795 | 0.001708 |
| has_unary_plus_test.test | RUN | 0.231700 | 1.291526 | 1.953072 | 0.001626 | 0.001765 | 0.001691 |
| has_unary_minus_test.test | RUN | 0.231057 | 1.208907 | 1.924998 | 0.001554 | 0.001534 | 0.001705 |
| has_trivial_move_constructor_test.test | RUN | 0.158768 | 0.494708 | 0.950857 | 0.001713 | 0.001668 | 0.001687 |
| has_trivial_move_assign_test.test | RUN | 0.157541 | 0.463340 | 0.842666 | 0.001549 | 0.001675 | 0.001784 |
| has_trivial_destructor_test.test | RUN | 0.156868 | 0.499934 | 0.945191 | 0.001350 | 0.001635 | 0.001350 |
| has_trivial_copy_test.test | RUN | 0.160271 | 0.536309 | 0.963430 | 0.001850 | 0.001860 | 0.001912 |
| has_trivial_constr_test.test | RUN | 0.160446 | 0.539705 | 0.968008 | 0.001551 | 0.001624 | 0.001854 |
| has_trivial_assign_test.test | RUN | 0.158354 | 0.519680 | 0.956911 | 0.001581 | 0.001790 | 0.001808 |
| has_right_shift_test.test | RUN | 0.242505 | 0.988125 | 2.110038 | 0.004082 | 0.001638 | 0.001422 |
| has_right_shift_assign_test.test | RUN | 0.232942 | 0.915321 | 1.977305 | 0.001241 | 0.001710 | 0.001423 |
| has_prefix_classes3_test.test | RUN | 0.169129 | 0.537084 | 0.987496 | 0.001657 | 0.001603 | 0.001720 |
| has_prefix_classes2_test.test | RUN | 0.169299 | 0.503867 | 0.972834 | 0.001448 | 0.001545 | 0.001834 |
| has_prefix_classes1_test.test | RUN | 0.170823 | 0.518037 | 0.987058 | 0.001555 | 0.001851 | 0.001636 |
| has_prefix_classes0_test.test | RUN | 0.169986 | 0.545582 | 0.992175 | 0.001604 | 0.001862 | 0.001742 |
| has_pre_increment_test.test | RUN | 0.228234 | 1.243878 | 1.951791 | 0.001729 | 0.001532 | 0.001549 |
| has_pre_decrement_test.test | RUN | 0.227076 | 1.251428 | 1.984602 | 0.001414 | 0.001812 | 0.001692 |
| has_postfix_classes3_test.test | RUN | 0.172735 | 0.527068 | 0.987971 | 0.001504 | 0.001673 | 0.001822 |
| has_postfix_classes2_test.test | RUN | 0.174056 | 0.518134 | 1.029028 | 0.001541 | 0.001273 | 0.001477 |
| has_postfix_classes1_test.test | RUN | 0.170981 | 0.548369 | 0.967658 | 0.001753 | 0.001767 | 0.001760 |
| has_postfix_classes0_test.test | RUN | 0.167846 | 0.552827 | 0.993539 | 0.001361 | 0.001679 | 0.001800 |
| has_post_increment_test.test | RUN | 0.227209 | 1.250130 | 2.008190 | 0.001628 | 0.001699 | 0.001686 |
| has_post_decrement_test.test | RUN | 0.225200 | 1.301851 | 1.993289 | 0.001520 | 0.001784 | 0.001723 |
| has_plus_test.test | RUN | 0.228601 | 0.919040 | 1.964420 | 0.001361 | 0.001302 | 0.001528 |
| has_plus_assign_test.test | RUN | 0.235602 | 0.875478 | 1.967817 | 0.001599 | 0.001662 | 0.001515 |
| has_operator_new_test.test | RUN | 0.157828 | 0.489149 | 0.897444 | 0.001644 | 0.001663 | 0.001779 |
| has_nothrow_destructor_test.test | RUN | 0.161833 | 0.520387 | 0.978316 | 0.001534 | 0.001642 | 0.001762 |
| has_nothrow_copy_test.test | RUN | 0.152311 | 0.512610 | 0.865449 | 0.001275 | 0.001536 | 0.001720 |
| has_nothrow_constr_test.test | RUN | 0.146923 | 0.499295 | 0.941343 | 0.001684 | 0.001369 | 0.001556 |
| has_nothrow_assign_test.test | RUN | 0.153787 | 0.494385 | 0.935144 | 0.001566 | 0.001818 | 0.001398 |
| has_not_equal_to_test.test | RUN | 0.229593 | 1.287692 | 1.997212 | 0.001752 | 0.001751 | 0.001671 |
| has_negate_test.test | RUN | 0.220214 | 0.890982 | 1.871094 | 0.001786 | 0.001649 | 0.001733 |
| has_multiplies_test.test | RUN | 0.223976 | 0.899827 | 1.995522 | 0.001671 | 0.001766 | 0.001513 |
| has_multiplies_assign_test.test | RUN | 0.234315 | 0.923139 | 1.992146 | 0.001644 | 0.001729 | 0.001304 |
| has_modulus_test.test | RUN | 0.227108 | 0.892007 | 1.968204 | 0.001836 | 0.001837 | 0.001764 |
| has_modulus_assign_test.test | RUN | 0.226560 | 0.949961 | 1.938204 | 0.001698 | 0.001767 | 0.001744 |
| has_minus_test.test | RUN | 0.235793 | 0.919517 | 2.017361 | 0.001421 | 0.001728 | 0.001626 |
| has_minus_assign_test.test | RUN | 0.243569 | 0.936727 | 2.026171 | 0.001681 | 0.001800 | 0.001559 |
| has_logical_or_test.test | RUN | 0.232307 | 0.930522 | 1.969147 | 0.001713 | 0.001684 | 0.001646 |
| has_logical_not_test.test | RUN | 0.223324 | 0.930172 | 1.922761 | 0.001492 | 0.001787 | 0.001725 |
| has_logical_and_test.test | RUN | 0.233131 | 0.913416 | 2.016321 | 0.001516 | 0.001703 | 0.001413 |
| has_less_test.test | RUN | 0.231805 | 1.239914 | 1.973783 | 0.001696 | 0.001729 | 0.001604 |
| has_less_equal_test.test | RUN | 0.234867 | 1.190251 | 1.976003 | 0.002672 | 0.001742 | 0.001739 |
| has_left_shift_test.test | RUN | 0.251127 | 1.177234 | 2.424796 | 0.001467 | 0.001682 | 0.001628 |
| has_left_shift_assign_test.test | RUN | 0.230409 | 0.898994 | 1.997712 | 0.001720 | 0.001388 | 0.001398 |
| has_greater_test.test | RUN | 0.236345 | 1.218163 | 1.945587 | 0.001594 | 0.001794 | 0.001667 |
| has_greater_equal_test.test | RUN | 0.232574 | 1.205215 | 2.012221 | 0.001856 | 0.001722 | 0.001767 |
| has_equal_to_test.test | RUN | 0.230619 | 1.218020 | 1.980153 | 0.001536 | 0.001431 | 0.001760 |
| has_divides_test.test | RUN | 0.227224 | 0.909172 | 1.972017 | 0.001541 | 0.001784 | 0.001360 |
| has_divides_assign_test.test | RUN | 0.237343 | 0.900640 | 1.945898 | 0.001389 | 0.001810 | 0.001776 |
| has_dereference_test.test | RUN | 0.228896 | 0.938841 | 1.880362 | 0.001762 | 0.001721 | 0.001690 |
| has_complement_test.test | RUN | 0.224408 | 1.248539 | 1.966718 | 0.001398 | 0.001891 | 0.001771 |
| has_bit_xor_test.test | RUN | 0.225292 | 0.927413 | 1.952072 | 0.001496 | 0.001714 | 0.001646 |
| has_bit_xor_assign_test.test | RUN | 0.231147 | 0.901258 | 1.938003 | 0.001711 | 0.001920 | 0.001766 |
| has_bit_or_test.test | RUN | 0.229968 | 0.947497 | 1.960995 | 0.001680 | 0.001898 | 0.001747 |
| has_bit_or_assign_test.test | RUN | 0.225573 | 0.900219 | 1.983228 | 0.001359 | 0.001645 | 0.001673 |
| has_bit_and_test.test | RUN | 0.225003 | 0.923377 | 1.945967 | 0.001500 | 0.001834 | 0.001706 |
| has_bit_and_assign_test.test | RUN | 0.231907 | 0.968475 | 1.956439 | 0.001682 | 0.001765 | 0.001585 |
| has_binary_classes9_test.test | RUN | 0.251924 | 1.074862 | 2.150850 | 0.001703 | 0.001649 | 0.001757 |
| has_binary_classes8_test.test | RUN | 0.246106 | 1.073647 | 2.168741 | 0.001381 | 0.001849 | 0.001654 |
| has_binary_classes7_test.test | RUN | 0.245136 | 1.124350 | 2.162245 | 0.001457 | 0.001704 | 0.001570 |
| has_binary_classes6_test.test | RUN | 0.246490 | 1.035762 | 2.156516 | 0.001617 | 0.001781 | 0.001503 |
| has_binary_classes5_test.test | RUN | 0.246523 | 1.061857 | 2.175596 | 0.001645 | 0.001681 | 0.001766 |
| has_binary_classes4_test.test | RUN | 0.245722 | 1.061506 | 2.184614 | 0.001613 | 0.001856 | 0.001758 |
| has_binary_classes3_test.test | RUN | 0.247508 | 1.097594 | 2.175570 | 0.001280 | 0.001844 | 0.001822 |
| has_binary_classes2_test.test | RUN | 0.252106 | 1.075490 | 2.144505 | 0.001382 | 0.001838 | 0.001581 |
| has_binary_classes1_test.test | RUN | 0.253840 | 1.083224 | 2.115170 | 0.001544 | 0.001894 | 0.001422 |
| has_binary_classes0_test.test | RUN | 0.246610 | 1.086264 | 2.114009 | 0.001551 | 0.001585 | 0.001451 |
| function_traits_test.test | RUN | 0.111108 | 0.277451 | 0.483911 | 0.001620 | 0.001814 | 0.001614 |
| floating_point_promotion_test.test | RUN | 0.112433 | 0.272057 | 0.443557 | 0.001370 | 0.001710 | 0.001353 |
| extent_test.test | RUN | 0.111738 | 0.281472 | 0.423160 | 0.001674 | 0.001699 | 0.001316 |
| enable_if_test.test | RUN | 0.104422 | 0.235162 | 0.362627 | 0.001478 | 0.001535 | 0.001672 |
| disjunction_test.test | RUN | 0.106558 | 0.249229 | 0.356796 | 0.001470 | 0.001674 | 0.001354 |
| detected_test.test | RUN | 0.101558 | 0.238928 | 0.353373 | 0.001334 | 0.001645 | 0.001628 |
| detected_or_test.test | RUN | 0.102977 | 0.259499 | 0.379103 | 0.001770 | 0.001670 | 0.001500 |
| decay_test.test | RUN | 0.282623 | 0.989383 | 2.323279 | 0.001664 | 0.001581 | 0.001493 |
| cxx14_aliases_test.test | RUN | 0.172542 | 0.377892 | 0.583687 | 0.001343 | 0.001722 | 0.001580 |
| copy_reference_test.test | RUN | 0.105839 | 0.245368 | 0.381933 | 0.001304 | 0.001598 | 0.001722 |
| copy_cv_test.test | RUN | 0.106859 | 0.266019 | 0.428226 | 0.001302 | 0.001761 | 0.001660 |
| copy_cv_ref_test.test | RUN | 0.153137 | 0.440349 | 0.973026 | 0.001443 | 0.001589 | 0.001570 |
| conjunction_test.test | RUN | 0.106170 | 0.251724 | 0.367823 | 0.001531 | 0.001613 | 0.001600 |
| conditional_test.test | RUN | 0.104528 | 0.255358 | 0.358084 | 0.001422 | 0.001674 | 0.001614 |
| common_type_test.test | RUN | 0.142311 | 0.392288 | 0.706400 | 0.001414 | 0.001734 | 0.001657 |
| common_type_sfinae_test.test | RUN | 0.105165 | 0.232637 | 0.353245 | 0.001578 | 0.001692 | 0.001636 |
| common_type_sfinae2_test.test | RUN | 0.108640 | 0.261512 | 0.386245 | 0.001536 | 0.001284 | 0.001688 |
| common_type_6_test.test | RUN | 0.107796 | 0.251381 | 0.351654 | 0.001454 | 0.001608 | 0.001494 |
| common_type_5_test.test | RUN | 0.114527 | 0.254790 | 0.371037 | 0.001468 | 0.001583 | 0.001729 |
| common_type_4_test.test | RUN | 0.118778 | 0.277286 | 0.436370 | 0.001698 | 0.001551 | 0.001635 |
| common_type_3_test.test | RUN | 0.104509 | 0.241215 | 0.341195 | 0.001536 | 0.001627 | 0.001449 |
| common_type_2_test.test | RUN | 0.143499 | 0.385987 | 0.767233 | 0.001562 | 0.001810 | 0.001490 |
| alignment_of_test.test | RUN | 0.116587 | 0.310807 | 0.476917 | 0.001520 | 0.001658 | 0.001670 |
| alignment_of_a2_test.test | RUN | 0.118261 | 0.293348 | 0.430358 | 0.001632 | 0.001598 | 0.001856 |
| aligned_storage_test.test | RUN | 0.123057 | 0.303371 | 0.406675 | 0.001681 | 0.001680 | 0.001814 |
| aligned_storage_empy_test.test | RUN | 0.132986 | 0.337703 | 0.549558 | 0.001527 | 0.001808 | 0.001732 |
| aligned_storage_a2_test.test | RUN | 0.121906 | 0.291998 | 0.399063 | 0.001697 | 0.001941 | 0.001900 |
| add_volatile_test.test | RUN | 0.247243 | 0.863162 | 2.178412 | 0.001591 | 0.001755 | 0.001886 |
| add_rvalue_reference_test.test | RUN | 0.276696 | 1.001781 | 2.489576 | 0.001440 | 0.001435 | 0.001756 |
| add_reference_test.test | RUN | 0.265062 | 0.955725 | 2.498313 | 0.001424 | 0.001890 | 0.001768 |
| add_pointer_test.test | RUN | 0.171968 | 0.549923 | 1.291957 | 0.001623 | 0.001560 | 0.001757 |
| add_lvalue_reference_test.test | RUN | 0.268651 | 0.971148 | 2.484862 | 0.001604 | 0.001845 | 0.001564 |
| add_cv_test.test | RUN | 0.255377 | 0.944524 | 2.307429 | 0.001234 | 0.001514 | 0.001526 |
| add_const_test.test | RUN | 0.254403 | 0.912233 | 2.326389 | 0.001513 | 0.001490 | 0.001401 |
| is_virtual_base_of_fail.test | COMPILE_FAIL | 0.101963 | 0.245665 | 0.342003 | — | — | — |
| is_stateless_fail.test | COMPILE_FAIL | 0.106887 | 0.244484 | 0.357524 | — | — | — |
| is_polymorphic_fail.test | COMPILE_FAIL | 0.100150 | 0.225625 | 0.335591 | — | — | — |
| is_nothrow_move_constructible_fail.test | COMPILE_FAIL | 0.100268 | 0.228482 | 0.336783 | — | — | — |
| is_nothrow_move_assignable_fail.test | COMPILE_FAIL | 0.100867 | 0.230251 | 0.325132 | — | — | — |
| is_list_constructible_fail.test | COMPILE_FAIL | 0.100719 | 0.227412 | 0.320306 | — | — | — |
| is_empty_fail.test | COMPILE_FAIL | 0.103310 | 0.230697 | 0.334460 | — | — | — |
| is_destructible_fail.test | COMPILE_FAIL | 0.102446 | 0.232522 | 0.322353 | — | — | — |
| is_default_constructible_fail.test | COMPILE_FAIL | 0.101835 | 0.231289 | 0.336457 | — | — | — |
| is_copy_constructible_fail.test | COMPILE_FAIL | 0.102081 | 0.227960 | 0.339318 | — | — | — |
| is_copy_assignable_fail.test | COMPILE_FAIL | 0.099807 | 0.226579 | 0.324429 | — | — | — |
| is_convertible_fail.test | COMPILE_FAIL | 0.100408 | 0.231509 | 0.333003 | — | — | — |
| is_convertible2_fail.test | COMPILE_FAIL | 0.099776 | 0.231762 | 0.333922 | — | — | — |
| is_constructible_fail.test | COMPILE_FAIL | 0.099293 | 0.228675 | 0.327346 | — | — | — |
| is_base_of_fail.test | COMPILE_FAIL | 0.098784 | 0.231842 | 0.330900 | — | — | — |
| is_assignable_fail.test | COMPILE_FAIL | 0.099187 | 0.229978 | 0.331149 | — | — | — |
| has_nothrow_destruct_fail.test | COMPILE_FAIL | 0.098852 | 0.231400 | 0.333739 | — | — | — |
| has_nothrow_copy_fail.test | COMPILE_FAIL | 0.099445 | 0.231370 | 0.330526 | — | — | — |
| has_nothrow_cons_fail.test | COMPILE_FAIL | 0.100108 | 0.233645 | 0.329267 | — | — | — |
| has_nothrow_assign_fail.test | COMPILE_FAIL | 0.099715 | 0.229207 | 0.331424 | — | — | — |
| common_type_fail.test | COMPILE_FAIL | 0.100317 | 0.219286 | 0.335579 | — | — | — |
| common_type2_fail.test | COMPILE_FAIL | 0.100808 | 0.220337 | 0.326177 | — | — | — |
| has_nothrow_assign_test_no_intrinsics.test | RUN | 0.156830 | 0.502547 | 0.958983 | 0.001679 | 0.001814 | 0.001768 |
| has_nothrow_constr_test_no_intrinsics.test | RUN | 0.151858 | 0.482668 | 0.938156 | 0.001622 | 0.001731 | 0.001696 |
| has_nothrow_copy_test_no_intrinsics.test | RUN | 0.155355 | 0.488995 | 0.909668 | 0.001120 | 0.001391 | 0.001493 |
| is_nothrow_move_assignable_test_no_intrinsics.test | RUN | 0.156954 | 0.481672 | 0.930157 | 0.001470 | 0.001366 | 0.001331 |
| is_nothrow_move_constructible_test_no_intrinsics.test | RUN | 0.096736 | 0.338915 | 0.564199 | 0.001308 | 0.001326 | 0.001237 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 1.003× | 0.997×, 1.010× | 1.003× |
| clang | 1.039× | 1.025×, 1.054× | 1.003× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1362 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43619774656).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| add_const_test.test | 10 | 0.001042s | 0.001038s | 0.001098s | byte equality observed |
| add_cv_test.test | 10 | 0.001051s | 0.001052s | 0.001138s | byte equality observed |
| add_lvalue_reference_test.test | 10 | 0.001083s | 0.001045s | 0.001106s | byte equality observed |
| add_pointer_test.test | 10 | 0.001053s | 0.001091s | 0.001136s | byte equality observed |
| add_reference_test.test | 10 | 0.001127s | 0.001055s | 0.001151s | byte equality observed |
| add_rvalue_reference_test.test | 10 | 0.001073s | 0.001058s | 0.001148s | byte equality observed |
| add_volatile_test.test | 10 | 0.001028s | 0.001048s | 0.001105s | byte equality observed |
| aligned_storage_a2_test.test | 10 | 0.001092s | 0.001170s | 0.001237s | byte equality observed |
| aligned_storage_empy_test.test | 10 | 0.001001s | 0.001043s | 0.001113s | byte equality observed |
| aligned_storage_test.test | 10 | 0.001125s | 0.001155s | 0.001235s | byte equality observed |
| alignment_of_a2_test.test | 10 | 0.001035s | 0.001060s | 0.001097s | byte equality observed |
| alignment_of_test.test | 10 | 0.001039s | 0.001049s | 0.001069s | byte equality observed |
| common_type_2_test.test | 10 | 0.001052s | 0.001043s | 0.001119s | byte equality observed |
| common_type_3_test.test | 10 | 0.001016s | 0.001080s | 0.001097s | byte equality observed |
| common_type_4_test.test | 10 | 0.001008s | 0.001056s | 0.001106s | byte equality observed |
| common_type_5_test.test | 10 | 0.001029s | 0.001080s | 0.001156s | byte equality observed |
| common_type_6_test.test | 10 | 0.001065s | 0.001071s | 0.001144s | byte equality observed |
| common_type_sfinae2_test.test | 10 | 0.001030s | 0.001058s | 0.001145s | byte equality observed |
| common_type_sfinae_test.test | 10 | 0.001058s | 0.001081s | 0.001130s | byte equality observed |
| common_type_test.test | 10 | 0.001027s | 0.001041s | 0.001111s | byte equality observed |
| conditional_test.test | 10 | 0.001027s | 0.001073s | 0.001125s | byte equality observed |
| conjunction_test.test | 10 | 0.001048s | 0.001046s | 0.001141s | byte equality observed |
| copy_cv_ref_test.test | 10 | 0.001042s | 0.001058s | 0.001124s | byte equality observed |
| copy_cv_test.test | 10 | 0.001061s | 0.001046s | 0.001143s | byte equality observed |
| copy_reference_test.test | 10 | 0.001020s | 0.001071s | 0.001129s | byte equality observed |
| cxx14_aliases_test.test | 10 | 0.001044s | 0.001034s | 0.001139s | byte equality observed |
| decay_test.test | 10 | 0.000987s | 0.001070s | 0.001147s | byte equality observed |
| detected_or_test.test | 10 | 0.001024s | 0.001053s | 0.001120s | byte equality observed |
| detected_test.test | 10 | 0.001062s | 0.001057s | 0.001132s | byte equality observed |
| disjunction_test.test | 10 | 0.001023s | 0.001087s | 0.001132s | byte equality observed |
| enable_if_test.test | 10 | 0.001037s | 0.001020s | 0.001121s | byte equality observed |
| extent_test.test | 10 | 0.001027s | 0.001062s | 0.001082s | byte equality observed |
| floating_point_promotion_test.test | 10 | 0.001015s | 0.001068s | 0.001125s | byte equality observed |
| function_traits_test.test | 10 | 0.001023s | 0.001070s | 0.001121s | byte equality observed |
| has_binary_classes0_test.test | 10 | 0.001039s | 0.001059s | 0.001129s | byte equality observed |
| has_binary_classes1_test.test | 10 | 0.001017s | 0.001048s | 0.001136s | byte equality observed |
| has_binary_classes2_test.test | 10 | 0.001018s | 0.001062s | 0.001119s | byte equality observed |
| has_binary_classes3_test.test | 10 | 0.001001s | 0.001071s | 0.001127s | byte equality observed |
| has_binary_classes4_test.test | 10 | 0.001020s | 0.001062s | 0.001108s | byte equality observed |
| has_binary_classes5_test.test | 10 | 0.001040s | 0.001048s | 0.001132s | byte equality observed |
| has_binary_classes6_test.test | 10 | 0.001066s | 0.001079s | 0.001107s | byte equality observed |
| has_binary_classes7_test.test | 10 | 0.001051s | 0.001061s | 0.001111s | byte equality observed |
| has_binary_classes8_test.test | 10 | 0.001091s | 0.001036s | 0.001136s | byte equality observed |
| has_binary_classes9_test.test | 10 | 0.001086s | 0.001060s | 0.001098s | byte equality observed |
| has_bit_and_assign_test.test | 10 | 0.001126s | 0.001086s | 0.001123s | byte equality observed |
| has_bit_and_test.test | 10 | 0.001084s | 0.001057s | 0.001129s | byte equality observed |
| has_bit_or_assign_test.test | 10 | 0.001118s | 0.001064s | 0.001111s | byte equality observed |
| has_bit_or_test.test | 10 | 0.001123s | 0.001057s | 0.001132s | byte equality observed |
| has_bit_xor_assign_test.test | 10 | 0.001098s | 0.001049s | 0.001102s | byte equality observed |
| has_bit_xor_test.test | 10 | 0.001131s | 0.001084s | 0.001113s | byte equality observed |
| has_complement_test.test | 10 | 0.001109s | 0.001039s | 0.001116s | byte equality observed |
| has_dereference_test.test | 10 | 0.001142s | 0.001071s | 0.001131s | byte equality observed |
| has_divides_assign_test.test | 10 | 0.001116s | 0.001052s | 0.001143s | byte equality observed |
| has_divides_test.test | 10 | 0.001098s | 0.001046s | 0.001111s | byte equality observed |
| has_equal_to_test.test | 10 | 0.001130s | 0.001060s | 0.001127s | byte equality observed |
| has_greater_equal_test.test | 10 | 0.001108s | 0.001059s | 0.001130s | byte equality observed |
| has_greater_test.test | 10 | 0.001124s | 0.001060s | 0.001117s | byte equality observed |
| has_left_shift_assign_test.test | 10 | 0.001100s | 0.001086s | 0.001107s | byte equality observed |
| has_left_shift_test.test | 10 | 0.001124s | 0.001035s | 0.001128s | byte equality observed |
| has_less_equal_test.test | 10 | 0.001140s | 0.001038s | 0.001132s | byte equality observed |
| has_less_test.test | 10 | 0.001117s | 0.001040s | 0.001132s | byte equality observed |
| has_logical_and_test.test | 10 | 0.001129s | 0.001041s | 0.001123s | byte equality observed |
| has_logical_not_test.test | 10 | 0.001075s | 0.001063s | 0.001128s | byte equality observed |
| has_logical_or_test.test | 10 | 0.001126s | 0.001041s | 0.001155s | byte equality observed |
| has_minus_assign_test.test | 10 | 0.001128s | 0.001044s | 0.001130s | byte equality observed |
| has_minus_test.test | 10 | 0.001109s | 0.001048s | 0.001131s | byte equality observed |
| has_modulus_assign_test.test | 10 | 0.001138s | 0.001077s | 0.001125s | byte equality observed |
| has_modulus_test.test | 10 | 0.001131s | 0.001079s | 0.001121s | byte equality observed |
| has_multiplies_assign_test.test | 10 | 0.001130s | 0.001061s | 0.001135s | byte equality observed |
| has_multiplies_test.test | 10 | 0.001105s | 0.001057s | 0.001121s | byte equality observed |
| has_negate_test.test | 10 | 0.001119s | 0.001055s | 0.001134s | byte equality observed |
| has_not_equal_to_test.test | 10 | 0.001123s | 0.001071s | 0.001144s | byte equality observed |
| has_nothrow_assign_test.test | 10 | 0.001103s | 0.001064s | 0.001146s | byte equality observed |
| has_nothrow_assign_test_no_intrinsics.test | 10 | 0.001125s | 0.001048s | 0.001112s | byte equality observed |
| has_nothrow_constr_test.test | 10 | 0.001115s | 0.001063s | 0.001125s | byte equality observed |
| has_nothrow_constr_test_no_intrinsics.test | 10 | 0.001114s | 0.001080s | 0.001142s | byte equality observed |
| has_nothrow_copy_test.test | 10 | 0.001119s | 0.001059s | 0.001134s | byte equality observed |
| has_nothrow_copy_test_no_intrinsics.test | 10 | 0.001093s | 0.001046s | 0.001124s | byte equality observed |
| has_nothrow_destructor_test.test | 10 | 0.001126s | 0.001045s | 0.001140s | byte equality observed |
| has_operator_new_test.test | 10 | 0.001114s | 0.001057s | 0.001156s | byte equality observed |
| has_plus_assign_test.test | 10 | 0.001125s | 0.001048s | 0.001122s | byte equality observed |
| has_plus_test.test | 10 | 0.001106s | 0.001072s | 0.001157s | byte equality observed |
| has_post_decrement_test.test | 10 | 0.001122s | 0.001077s | 0.001143s | byte equality observed |
| has_post_increment_test.test | 10 | 0.001114s | 0.001071s | 0.001142s | byte equality observed |
| has_postfix_classes0_test.test | 10 | 0.001122s | 0.001056s | 0.001138s | byte equality observed |
| has_postfix_classes1_test.test | 10 | 0.001129s | 0.001055s | 0.001158s | byte equality observed |
| has_postfix_classes2_test.test | 10 | 0.001106s | 0.001085s | 0.001129s | byte equality observed |
| has_postfix_classes3_test.test | 10 | 0.001134s | 0.001074s | 0.001147s | byte equality observed |
| has_pre_decrement_test.test | 10 | 0.001097s | 0.001035s | 0.001132s | byte equality observed |
| has_pre_increment_test.test | 10 | 0.001115s | 0.001069s | 0.001130s | byte equality observed |
| has_prefix_classes0_test.test | 10 | 0.001114s | 0.001046s | 0.001136s | byte equality observed |
| has_prefix_classes1_test.test | 10 | 0.001113s | 0.001063s | 0.001113s | byte equality observed |
| has_prefix_classes2_test.test | 10 | 0.001115s | 0.001072s | 0.001133s | byte equality observed |
| has_prefix_classes3_test.test | 10 | 0.001074s | 0.001069s | 0.001116s | byte equality observed |
| has_right_shift_assign_test.test | 10 | 0.001116s | 0.001038s | 0.001129s | byte equality observed |
| has_right_shift_test.test | 10 | 0.001110s | 0.001043s | 0.001151s | byte equality observed |
| has_trivial_assign_test.test | 10 | 0.001204s | 0.001117s | 0.001184s | byte equality observed |
| has_trivial_constr_test.test | 10 | 0.001150s | 0.001109s | 0.001195s | native test oracle; output varies |
| has_trivial_copy_test.test | 10 | 0.001185s | 0.001118s | 0.001232s | native test oracle; output varies |
| has_trivial_destructor_test.test | 10 | 0.001071s | 0.001043s | 0.001109s | byte equality observed |
| has_trivial_move_assign_test.test | 10 | 0.001047s | 0.001103s | 0.001140s | byte equality observed |
| has_trivial_move_constructor_test.test | 10 | 0.001065s | 0.001036s | 0.001131s | byte equality observed |
| has_unary_minus_test.test | 10 | 0.001051s | 0.001038s | 0.001125s | byte equality observed |
| has_unary_plus_test.test | 10 | 0.001057s | 0.001070s | 0.001113s | byte equality observed |
| has_virtual_destructor_test.test | 10 | 0.001080s | 0.001091s | 0.001123s | byte equality observed |
| integral_constant_test.test | 10 | 0.000476s | 0.000479s | 0.001134s | byte equality observed |
| is_abstract_test.test | 10 | 0.001072s | 0.001058s | 0.001119s | byte equality observed |
| is_arithmetic_test.test | 10 | 0.001092s | 0.001075s | 0.001116s | byte equality observed |
| is_array_test.test | 10 | 0.001102s | 0.001033s | 0.001131s | byte equality observed |
| is_assignable_test.test | 10 | 0.001096s | 0.001054s | 0.001136s | byte equality observed |
| is_base_and_derived_test.test | 10 | 0.001117s | 0.001074s | 0.001131s | byte equality observed |
| is_base_of_test.test | 10 | 0.001121s | 0.001050s | 0.001122s | byte equality observed |
| is_bounded_array_test.test | 10 | 0.001128s | 0.001035s | 0.001153s | byte equality observed |
| is_class_test.test | 10 | 0.001120s | 0.001051s | 0.001127s | byte equality observed |
| is_complete_test.test | 10 | 0.001122s | 0.001050s | 0.001136s | byte equality observed |
| is_complex_test.test | 10 | 0.001112s | 0.001050s | 0.001121s | byte equality observed |
| is_compound_test.test | 10 | 0.001119s | 0.001075s | 0.001141s | byte equality observed |
| is_const_test.test | 10 | 0.001127s | 0.001085s | 0.001120s | byte equality observed |
| is_constructible_test.test | 10 | 0.001114s | 0.001071s | 0.001130s | byte equality observed |
| is_convertible_test.test | 10 | 0.001118s | 0.001052s | 0.001120s | byte equality observed |
| is_copy_assignable_test.test | 10 | 0.001101s | 0.001039s | 0.001137s | byte equality observed |
| is_copy_constructible_test.test | 10 | 0.001129s | 0.001050s | 0.001110s | byte equality observed |
| is_default_constr_test.test | 10 | 0.001124s | 0.001051s | 0.001119s | byte equality observed |
| is_destructible_test.test | 10 | 0.001110s | 0.001088s | 0.001130s | byte equality observed |
| is_detected_exact_test.test | 10 | 0.001092s | 0.001068s | 0.001142s | byte equality observed |
| is_detected_test.test | 10 | 0.001107s | 0.001045s | 0.001126s | byte equality observed |
| is_empty_test.test | 10 | 0.001106s | 0.001062s | 0.001115s | byte equality observed |
| is_enum_test.test | 10 | 0.001102s | 0.001066s | 0.001100s | byte equality observed |
| is_final_test.test | 10 | 0.001131s | 0.001060s | 0.001135s | byte equality observed |
| is_float_test.test | 10 | 0.001121s | 0.001055s | 0.001138s | byte equality observed |
| is_floating_point_test.test | 10 | 0.001132s | 0.001081s | 0.001118s | byte equality observed |
| is_function_test.test | 10 | 0.001139s | 0.001080s | 0.001145s | byte equality observed |
| is_fundamental_test.test | 10 | 0.001136s | 0.001080s | 0.001130s | byte equality observed |
| is_integral_test.test | 10 | 0.001133s | 0.001066s | 0.001157s | byte equality observed |
| is_list_constructible_test.test | 10 | 0.001150s | 0.001042s | 0.001136s | byte equality observed |
| is_lvalue_reference_test.test | 10 | 0.001120s | 0.001060s | 0.001126s | byte equality observed |
| is_member_func_test.test | 10 | 0.001141s | 0.001078s | 0.001134s | byte equality observed |
| is_member_obj_test.test | 10 | 0.001143s | 0.001073s | 0.001144s | byte equality observed |
| is_member_pointer_test.test | 10 | 0.001137s | 0.001074s | 0.001140s | byte equality observed |
| is_noncopyable_test.test | 10 | 0.001128s | 0.001051s | 0.001142s | byte equality observed |
| is_nothrow_move_assignable_test.test | 10 | 0.001136s | 0.001064s | 0.001120s | byte equality observed |
| is_nothrow_move_assignable_test_no_intrinsics.test | 10 | 0.001138s | 0.001056s | 0.001146s | byte equality observed |
| is_nothrow_move_constructible_test.test | 10 | 0.001118s | 0.001060s | 0.001127s | byte equality observed |
| is_nothrow_move_constructible_test_no_intrinsics.test | 10 | 0.001116s | 0.001075s | 0.001135s | byte equality observed |
| is_nothrow_swappable_test.test | 10 | 0.001125s | 0.001072s | 0.001137s | byte equality observed |
| is_object_test.test | 10 | 0.001122s | 0.001052s | 0.001133s | byte equality observed |
| is_pod_test.test | 10 | 0.001132s | 0.001068s | 0.001137s | byte equality observed |
| is_pointer_test.test | 10 | 0.001135s | 0.001049s | 0.001135s | byte equality observed |
| is_polymorphic_test.test | 10 | 0.001130s | 0.001096s | 0.001132s | byte equality observed |
| is_reference_test.test | 10 | 0.001136s | 0.001065s | 0.001139s | byte equality observed |
| is_rvalue_reference_test.test | 10 | 0.001139s | 0.001112s | 0.001139s | byte equality observed |
| is_same_test.test | 10 | 0.001122s | 0.001106s | 0.001141s | byte equality observed |
| is_scalar_test.test | 10 | 0.001122s | 0.001113s | 0.001127s | byte equality observed |
| is_scoped_enum_test.test | 10 | 0.001126s | 0.001149s | 0.001140s | byte equality observed |
| is_signed_test.test | 10 | 0.001137s | 0.001123s | 0.001126s | byte equality observed |
| is_stateless_test.test | 10 | 0.001126s | 0.001155s | 0.001121s | byte equality observed |
| is_swappable_test.test | 10 | 0.001114s | 0.001128s | 0.001113s | byte equality observed |
| is_trivially_copyable_test.test | 10 | 0.001155s | 0.001161s | 0.001180s | byte equality observed |
| is_unbounded_array_test.test | 10 | 0.001124s | 0.001144s | 0.001125s | byte equality observed |
| is_union_test.test | 10 | 0.001145s | 0.001143s | 0.001119s | byte equality observed |
| is_unscoped_enum_test.test | 10 | 0.001142s | 0.001115s | 0.001158s | byte equality observed |
| is_unsigned_test.test | 10 | 0.001125s | 0.001142s | 0.001154s | byte equality observed |
| is_virtual_base_of_test.test | 10 | 0.001132s | 0.001146s | 0.001133s | byte equality observed |
| is_void_test.test | 10 | 0.001151s | 0.001143s | 0.001132s | byte equality observed |
| is_volatile_test.test | 10 | 0.001138s | 0.001140s | 0.001128s | byte equality observed |
| make_signed_test.test | 10 | 0.001133s | 0.001133s | 0.001136s | byte equality observed |
| make_unsigned_test.test | 10 | 0.001145s | 0.001141s | 0.001133s | byte equality observed |
| make_void_test.test | 10 | 0.001147s | 0.001136s | 0.001132s | byte equality observed |
| mpl_interop_test1.test | 10 | 0.000506s | 0.000509s | 0.001130s | byte equality observed |
| mpl_interop_test2.test | 10 | 0.000513s | 0.000509s | 0.001126s | byte equality observed |
| mpl_interop_test3.test | 10 | 0.000516s | 0.000517s | 0.001139s | byte equality observed |
| negation_test.test | 10 | 0.001177s | 0.001171s | 0.001129s | byte equality observed |
| promote_basic_test.test | 10 | 0.000508s | 0.000514s | 0.001112s | byte equality observed |
| promote_enum_msvc_bug_test.test | 10 | 0.000510s | 0.000516s | 0.001132s | byte equality observed |
| promote_enum_test.test | 10 | 0.000517s | 0.000513s | 0.001143s | byte equality observed |
| promote_mpl_test.test | 10 | 0.000512s | 0.000511s | 0.001129s | byte equality observed |
| rank_test.test | 10 | 0.001152s | 0.001165s | 0.001122s | byte equality observed |
| remove_all_extents_test.test | 10 | 0.001145s | 0.001142s | 0.001130s | byte equality observed |
| remove_bounds_test.test | 10 | 0.001141s | 0.001139s | 0.001117s | byte equality observed |
| remove_const_test.test | 10 | 0.001126s | 0.001129s | 0.001136s | byte equality observed |
| remove_cv_ref_test.test | 10 | 0.001148s | 0.001112s | 0.001107s | byte equality observed |
| remove_cv_test.test | 10 | 0.001128s | 0.001136s | 0.001150s | byte equality observed |
| remove_extent_test.test | 10 | 0.001140s | 0.001140s | 0.001108s | byte equality observed |
| remove_pointer_test.test | 10 | 0.001141s | 0.001135s | 0.001132s | byte equality observed |
| remove_reference_test.test | 10 | 0.001138s | 0.001126s | 0.001137s | byte equality observed |
| remove_volatile_test.test | 10 | 0.001146s | 0.001126s | 0.001139s | byte equality observed |
| tricky_abstract_type_test.test | 10 | 0.001128s | 0.001149s | 0.001126s | byte equality observed |
| tricky_add_pointer_test.test | 10 | 0.001140s | 0.001121s | 0.001132s | byte equality observed |
| tricky_function_type_test.test | 10 | 0.001126s | 0.001139s | 0.001141s | byte equality observed |
| tricky_incomplete_type_test.test | 10 | 0.001137s | 0.001152s | 0.001144s | byte equality observed |
| tricky_is_enum_test.test | 10 | 0.001136s | 0.001128s | 0.001127s | byte equality observed |
| tricky_partial_spec_test.test | 10 | 0.001132s | 0.001135s | 0.001136s | byte equality observed |
| tricky_rvalue_test.test | 10 | 0.001137s | 0.001154s | 0.001130s | byte equality observed |
| type_identity_test.test | 10 | 0.001152s | 0.001137s | 0.001144s | byte equality observed |
| type_traits_test.test | 10 | 0.000505s | 0.000506s | 0.001148s | byte equality observed |
| type_with_alignment_test.test | 10 | 0.001286s | 0.001266s | 0.001256s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43619774656).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
