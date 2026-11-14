# libs/type_traits/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| type_with_alignment_test.test | RUN | 0.091608 | 0.261941 | 0.338125 | 0.001559 | 0.001688 | 0.001575 |
| type_traits_test.test | RUN | 0.130965 | 0.278409 | 0.322134 | 0.000657 | 0.000546 | 0.001379 |
| type_identity_test.test | RUN | 0.226026 | 0.877213 | 1.767104 | 0.001719 | 0.001866 | 0.001534 |
| tricky_rvalue_test.test | RUN | 0.086333 | 0.213153 | 0.262925 | 0.001587 | 0.001694 | 0.001372 |
| tricky_partial_spec_test.test | RUN | 0.102806 | 0.311821 | 0.416919 | 0.001352 | 0.001692 | 0.001546 |
| tricky_is_enum_test.test | RUN | 0.081684 | 0.201974 | 0.252744 | 0.001558 | 0.001488 | 0.001353 |
| tricky_incomplete_type_test.test | RUN | 0.134358 | 0.311613 | 0.409722 | 0.001410 | 0.001532 | 0.001562 |
| tricky_function_type_test.test | RUN | 0.112090 | 0.331868 | 0.459484 | 0.001643 | 0.001735 | 0.001531 |
| tricky_add_pointer_test.test | RUN | 0.158755 | 0.533727 | 0.998907 | 0.001429 | 0.001851 | 0.001797 |
| tricky_abstract_type_test.test | RUN | 0.088059 | 0.209389 | 0.264688 | 0.001645 | 0.001381 | 0.001337 |
| remove_volatile_test.test | RUN | 0.203341 | 0.767664 | 1.510654 | 0.001748 | 0.001746 | 0.001626 |
| remove_reference_test.test | RUN | 0.209693 | 0.804715 | 1.611259 | 0.001712 | 0.001845 | 0.001582 |
| remove_pointer_test.test | RUN | 0.227730 | 0.870344 | 1.720192 | 0.001777 | 0.001861 | 0.001620 |
| remove_extent_test.test | RUN | 0.218075 | 0.819803 | 1.641279 | 0.001512 | 0.001881 | 0.001892 |
| remove_cv_test.test | RUN | 0.213491 | 0.825202 | 1.672571 | 0.001503 | 0.001817 | 0.001491 |
| remove_cv_ref_test.test | RUN | 0.442918 | 1.969532 | 3.931945 | 0.001432 | 0.001532 | 0.001500 |
| remove_const_test.test | RUN | 0.208208 | 0.773707 | 1.531329 | 0.001446 | 0.001740 | 0.001704 |
| remove_bounds_test.test | RUN | 0.220711 | 0.832274 | 1.591281 | 0.001642 | 0.001854 | 0.001614 |
| remove_all_extents_test.test | RUN | 0.221539 | 0.804500 | 1.606084 | 0.001461 | 0.001639 | 0.001147 |
| rank_test.test | RUN | 0.091262 | 0.214758 | 0.271187 | 0.001502 | 0.001746 | 0.001604 |
| promote_mpl_test.test | RUN | 0.071417 | 0.183932 | 0.183826 | 0.000552 | 0.000672 | 0.001450 |
| promote_enum_test.test | RUN | 0.017286 | 0.047890 | 0.046981 | 0.000626 | 0.000591 | 0.001518 |
| promote_enum_msvc_bug_test.test | RUN | 0.016498 | 0.042187 | 0.043444 | 0.000521 | 0.000791 | 0.001464 |
| promote_basic_test.test | RUN | 0.020553 | 0.054965 | 0.050163 | 0.000570 | 0.000600 | 0.001638 |
| negation_test.test | RUN | 0.085862 | 0.204956 | 0.238383 | 0.001456 | 0.001684 | 0.001538 |
| mpl_interop_test3.test | RUN | 0.068097 | 0.174008 | 0.181562 | 0.000533 | 0.000653 | 0.001329 |
| mpl_interop_test2.test | RUN | 0.026040 | 0.054853 | 0.056721 | 0.000597 | 0.000533 | 0.001580 |
| mpl_interop_test1.test | RUN | 0.014430 | 0.041020 | 0.038990 | 0.000674 | 0.000782 | 0.001356 |
| make_void_test.test | RUN | 0.090908 | 0.215873 | 0.252257 | 0.001576 | 0.001785 | 0.001596 |
| make_unsigned_test.test | RUN | 0.107197 | 0.272120 | 0.341135 | 0.001444 | 0.001586 | 0.001720 |
| make_signed_test.test | RUN | 0.106395 | 0.277156 | 0.363737 | 0.001490 | 0.001940 | 0.001490 |
| is_volatile_test.test | RUN | 0.094248 | 0.234212 | 0.307124 | 0.001716 | 0.001640 | 0.001598 |
| is_void_test.test | RUN | 0.092495 | 0.226059 | 0.274977 | 0.001565 | 0.001718 | 0.001416 |
| is_virtual_base_of_test.test | RUN | 0.104245 | 0.282626 | 0.402742 | 0.001547 | 0.001676 | 0.001337 |
| is_unsigned_test.test | RUN | 0.094807 | 0.238766 | 0.287501 | 0.001446 | 0.001461 | 0.001700 |
| is_unscoped_enum_test.test | RUN | 0.094349 | 0.218421 | 0.254086 | 0.001513 | 0.001791 | 0.001607 |
| is_union_test.test | RUN | 0.099736 | 0.262668 | 0.339658 | 0.001739 | 0.001856 | 0.001830 |
| is_unbounded_array_test.test | RUN | 0.089853 | 0.221250 | 0.284660 | 0.001552 | 0.001819 | 0.001662 |
| is_trivially_copyable_test.test | RUN | 0.139208 | 0.466455 | 0.693057 | 0.001495 | 0.001522 | 0.001488 |
| is_swappable_test.test | RUN | 0.120653 | 0.342091 | 0.505860 | 0.001523 | 0.001479 | 0.001381 |
| is_stateless_test.test | RUN | 0.129435 | 0.403164 | 0.594172 | 0.001648 | 0.001808 | 0.001653 |
| is_signed_test.test | RUN | 0.095669 | 0.221738 | 0.274998 | 0.001395 | 0.001751 | 0.001363 |
| is_scoped_enum_test.test | RUN | 0.092351 | 0.206556 | 0.254686 | 0.001698 | 0.001842 | 0.001498 |
| is_scalar_test.test | RUN | 0.114845 | 0.364650 | 0.542440 | 0.001740 | 0.001694 | 0.001307 |
| is_same_test.test | RUN | 0.089867 | 0.222780 | 0.268401 | 0.001606 | 0.001546 | 0.001610 |
| is_rvalue_reference_test.test | RUN | 0.097160 | 0.239873 | 0.338531 | 0.001239 | 0.001592 | 0.001619 |
| is_reference_test.test | RUN | 0.100094 | 0.256470 | 0.328639 | 0.001514 | 0.001786 | 0.001674 |
| is_polymorphic_test.test | RUN | 0.099872 | 0.259997 | 0.358801 | 0.001553 | 0.001924 | 0.001698 |
| is_pointer_test.test | RUN | 0.099196 | 0.256720 | 0.341911 | 0.001757 | 0.001614 | 0.001468 |
| is_pod_test.test | RUN | 0.127258 | 0.418644 | 0.601717 | 0.001479 | 0.001635 | 0.001604 |
| is_object_test.test | RUN | 0.096500 | 0.219676 | 0.264353 | 0.001493 | 0.001761 | 0.001562 |
| is_nothrow_swappable_test.test | RUN | 0.127681 | 0.391932 | 0.564019 | 0.001504 | 0.001451 | 0.001623 |
| is_nothrow_move_constructible_test.test | RUN | 0.125149 | 0.405887 | 0.575543 | 0.001758 | 0.001431 | 0.003207 |
| is_nothrow_move_assignable_test.test | RUN | 0.127149 | 0.399342 | 0.574608 | 0.001483 | 0.001812 | 0.001681 |
| is_noncopyable_test.test | RUN | 0.090216 | 0.223866 | 0.275653 | 0.001492 | 0.001510 | 0.003213 |
| is_member_pointer_test.test | RUN | 0.092898 | 0.225461 | 0.319511 | 0.001938 | 0.001678 | 0.001662 |
| is_member_obj_test.test | RUN | 0.091108 | 0.227779 | 0.290605 | 0.001633 | 0.001551 | 0.001585 |
| is_member_func_test.test | RUN | 0.092468 | 0.227586 | 0.319786 | 0.001452 | 0.001772 | 0.001440 |
| is_lvalue_reference_test.test | RUN | 0.097953 | 0.252799 | 0.308290 | 0.001360 | 0.001893 | 0.001570 |
| is_list_constructible_test.test | RUN | 0.111226 | 0.302352 | 0.363906 | 0.001667 | 0.001827 | 0.001574 |
| is_integral_test.test | RUN | 0.112922 | 0.372246 | 0.496000 | 0.001621 | 0.001529 | 0.001420 |
| is_fundamental_test.test | RUN | 0.108569 | 0.359443 | 0.494377 | 0.001377 | 0.001811 | 0.001281 |
| is_function_test.test | RUN | 0.094502 | 0.240078 | 0.310893 | 0.001467 | 0.001756 | 0.001581 |
| is_floating_point_test.test | RUN | 0.099130 | 0.257472 | 0.319150 | 0.001752 | 0.001860 | 0.001889 |
| is_float_test.test | RUN | 0.097674 | 0.257287 | 0.363430 | 0.001767 | 0.001734 | 0.001440 |
| is_final_test.test | RUN | 0.094108 | 0.259989 | 0.371514 | 0.001227 | 0.001753 | 0.001477 |
| is_enum_test.test | RUN | 0.090263 | 0.224247 | 0.282398 | 0.001359 | 0.001594 | 0.001644 |
| is_empty_test.test | RUN | 0.096023 | 0.237798 | 0.293790 | 0.001715 | 0.001633 | 0.001757 |
| is_detected_test.test | RUN | 0.084364 | 0.207588 | 0.238579 | 0.001485 | 0.001854 | 0.001460 |
| is_detected_exact_test.test | RUN | 0.084750 | 0.213370 | 0.252936 | 0.001500 | 0.001807 | 0.001308 |
| is_destructible_test.test | RUN | 0.116789 | 0.384705 | 0.606970 | 0.001304 | 0.001848 | 0.001465 |
| is_default_constr_test.test | RUN | 0.123733 | 0.427936 | 0.589065 | 0.001560 | 0.001828 | 0.001709 |
| is_copy_constructible_test.test | RUN | 0.123620 | 0.442932 | 0.655536 | 0.001549 | 0.001749 | 0.001527 |
| is_copy_assignable_test.test | RUN | 0.129191 | 0.433917 | 0.632243 | 0.001404 | 0.001517 | 0.001297 |
| is_convertible_test.test | RUN | 0.120566 | 0.375202 | 0.489221 | 0.001311 | 0.001922 | 0.001271 |
| is_constructible_test.test | RUN | 0.104274 | 0.285564 | 0.348389 | 0.001703 | 0.001758 | 0.001652 |
| is_const_test.test | RUN | 0.092816 | 0.241707 | 0.296293 | 0.001599 | 0.001471 | 0.001557 |
| is_compound_test.test | RUN | 0.089185 | 0.207277 | 0.238733 | 0.001431 | 0.001470 | 0.001698 |
| is_complex_test.test | RUN | 0.120911 | 0.275095 | 0.347867 | 0.001443 | 0.001818 | 0.001652 |
| is_complete_test.test | RUN | 0.103602 | 0.276288 | 0.378888 | 0.001381 | 0.001604 | 0.001304 |
| is_class_test.test | RUN | 0.097037 | 0.250968 | 0.317541 | 0.001418 | 0.001770 | 0.001387 |
| is_bounded_array_test.test | RUN | 0.091132 | 0.225704 | 0.274141 | 0.001449 | 0.001544 | 0.001289 |
| is_base_of_test.test | RUN | 0.098677 | 0.251762 | 0.326160 | 0.001580 | 0.001830 | 0.001580 |
| is_base_and_derived_test.test | RUN | 0.095771 | 0.234720 | 0.321940 | 0.001498 | 0.001686 | 0.001343 |
| is_assignable_test.test | RUN | 0.118868 | 0.352553 | 0.474654 | 0.001437 | 0.001768 | 0.001330 |
| is_array_test.test | RUN | 0.096662 | 0.231579 | 0.310264 | 0.001557 | 0.001750 | 0.001658 |
| is_arithmetic_test.test | RUN | 0.113502 | 0.356164 | 0.571450 | 0.001666 | 0.001852 | 0.001647 |
| is_abstract_test.test | RUN | 0.195183 | 1.026241 | 1.677726 | 0.001697 | 0.001702 | 0.001517 |
| integral_constant_test.test | RUN | 0.014936 | 0.042808 | 0.041156 | 0.000588 | 0.000783 | 0.001624 |
| has_virtual_destructor_test.test | RUN | 0.098186 | 0.271707 | 0.423887 | 0.001384 | 0.001779 | 0.001459 |
| has_unary_plus_test.test | RUN | 0.175507 | 1.016254 | 1.279620 | 0.001640 | 0.001819 | 0.001470 |
| has_unary_minus_test.test | RUN | 0.177981 | 1.033799 | 1.166803 | 0.001718 | 0.001826 | 0.001577 |
| has_trivial_move_constructor_test.test | RUN | 0.124671 | 0.414184 | 0.613024 | 0.001516 | 0.001410 | 0.001558 |
| has_trivial_move_assign_test.test | RUN | 0.122512 | 0.413929 | 0.597325 | 0.001343 | 0.001760 | 0.001485 |
| has_trivial_destructor_test.test | RUN | 0.127859 | 0.406861 | 0.597549 | 0.001648 | 0.001760 | 0.001591 |
| has_trivial_copy_test.test | RUN | 0.130844 | 0.436079 | 0.631795 | 0.001798 | 0.001892 | 0.001744 |
| has_trivial_constr_test.test | RUN | 0.127259 | 0.441708 | 0.653041 | 0.001505 | 0.001853 | 0.001819 |
| has_trivial_assign_test.test | RUN | 0.126056 | 0.437987 | 0.633993 | 0.001271 | 0.002006 | 0.001621 |
| has_right_shift_test.test | RUN | 0.188580 | 0.870501 | 1.370429 | 0.001591 | 0.001432 | 0.001307 |
| has_right_shift_assign_test.test | RUN | 0.178171 | 0.837246 | 1.262563 | 0.001296 | 0.001740 | 0.001258 |
| has_prefix_classes3_test.test | RUN | 0.132335 | 0.469835 | 0.653003 | 0.001517 | 0.001224 | 0.001452 |
| has_prefix_classes2_test.test | RUN | 0.132276 | 0.436542 | 0.638037 | 0.001345 | 0.001468 | 0.001373 |
| has_prefix_classes1_test.test | RUN | 0.134117 | 0.433773 | 0.633199 | 0.001469 | 0.001265 | 0.001692 |
| has_prefix_classes0_test.test | RUN | 0.134363 | 0.435134 | 0.674881 | 0.001699 | 0.001620 | 0.001734 |
| has_pre_increment_test.test | RUN | 0.175192 | 1.054931 | 1.229629 | 0.001534 | 0.002424 | 0.001668 |
| has_pre_decrement_test.test | RUN | 0.174467 | 1.045756 | 1.231826 | 0.001344 | 0.001462 | 0.001506 |
| has_postfix_classes3_test.test | RUN | 0.135207 | 0.443443 | 0.666234 | 0.001430 | 0.001266 | 0.001478 |
| has_postfix_classes2_test.test | RUN | 0.134657 | 0.443630 | 0.622771 | 0.001454 | 0.001614 | 0.001476 |
| has_postfix_classes1_test.test | RUN | 0.134261 | 0.470813 | 0.672352 | 0.001152 | 0.001638 | 0.001552 |
| has_postfix_classes0_test.test | RUN | 0.133657 | 0.478784 | 0.636045 | 0.001422 | 0.001788 | 0.001362 |
| has_post_increment_test.test | RUN | 0.178232 | 1.114474 | 1.251174 | 0.001403 | 0.001593 | 0.001560 |
| has_post_decrement_test.test | RUN | 0.174115 | 1.124572 | 1.247922 | 0.001714 | 0.001226 | 0.001682 |
| has_plus_test.test | RUN | 0.173566 | 0.828605 | 1.217906 | 0.001428 | 0.001520 | 0.001585 |
| has_plus_assign_test.test | RUN | 0.178084 | 0.815795 | 1.233996 | 0.001397 | 0.001591 | 0.001257 |
| has_operator_new_test.test | RUN | 0.123033 | 0.393642 | 0.569519 | 0.001418 | 0.001679 | 0.001543 |
| has_nothrow_destructor_test.test | RUN | 0.126826 | 0.439453 | 0.627420 | 0.001526 | 0.001441 | 0.001515 |
| has_nothrow_copy_test.test | RUN | 0.121451 | 0.410867 | 0.619089 | 0.001469 | 0.001478 | 0.001365 |
| has_nothrow_constr_test.test | RUN | 0.117459 | 0.398700 | 0.593439 | 0.001312 | 0.001510 | 0.001386 |
| has_nothrow_assign_test.test | RUN | 0.122397 | 0.405066 | 0.598774 | 0.001604 | 0.001815 | 0.001180 |
| has_not_equal_to_test.test | RUN | 0.177708 | 1.015588 | 1.253230 | 0.001518 | 0.001873 | 0.001600 |
| has_negate_test.test | RUN | 0.168399 | 0.766125 | 1.166461 | 0.001498 | 0.001537 | 0.001578 |
| has_multiplies_test.test | RUN | 0.173783 | 0.789068 | 1.254603 | 0.001282 | 0.001533 | 0.001729 |
| has_multiplies_assign_test.test | RUN | 0.178829 | 0.733569 | 1.271629 | 0.001699 | 0.001844 | 0.001513 |
| has_modulus_test.test | RUN | 0.174039 | 0.775809 | 1.222863 | 0.001520 | 0.001853 | 0.001473 |
| has_modulus_assign_test.test | RUN | 0.172657 | 0.767145 | 1.272163 | 0.001374 | 0.001606 | 0.001335 |
| has_minus_test.test | RUN | 0.181079 | 0.822805 | 1.229717 | 0.001299 | 0.001724 | 0.001417 |
| has_minus_assign_test.test | RUN | 0.185310 | 0.770536 | 1.275241 | 0.001703 | 0.001898 | 0.001550 |
| has_logical_or_test.test | RUN | 0.175266 | 0.773204 | 1.225835 | 0.001629 | 0.001392 | 0.001674 |
| has_logical_not_test.test | RUN | 0.170081 | 0.756220 | 1.228798 | 0.001466 | 0.001564 | 0.001362 |
| has_logical_and_test.test | RUN | 0.176687 | 0.811270 | 1.233472 | 0.001408 | 0.001840 | 0.001387 |
| has_less_test.test | RUN | 0.185489 | 1.013229 | 1.250087 | 0.001655 | 0.001890 | 0.001506 |
| has_less_equal_test.test | RUN | 0.179171 | 0.994394 | 1.209045 | 0.001670 | 0.001267 | 0.001618 |
| has_left_shift_test.test | RUN | 0.196644 | 0.958177 | 1.544149 | 0.001403 | 0.001742 | 0.001626 |
| has_left_shift_assign_test.test | RUN | 0.178819 | 0.784013 | 1.256780 | 0.001300 | 0.001655 | 0.001644 |
| has_greater_test.test | RUN | 0.182253 | 1.031843 | 1.261875 | 0.001911 | 0.001924 | 0.001539 |
| has_greater_equal_test.test | RUN | 0.222896 | 1.033370 | 1.294015 | 0.001631 | 0.001509 | 0.003474 |
| has_equal_to_test.test | RUN | 0.218998 | 0.969096 | 1.342132 | 0.001611 | 0.001936 | 0.001326 |
| has_divides_test.test | RUN | 0.216332 | 0.790508 | 1.274955 | 0.001360 | 0.001768 | 0.001543 |
| has_divides_assign_test.test | RUN | 0.181090 | 0.845066 | 1.286749 | 0.001585 | 0.001813 | 0.001422 |
| has_dereference_test.test | RUN | 0.173960 | 0.795041 | 1.165140 | 0.001714 | 0.001652 | 0.001702 |
| has_complement_test.test | RUN | 0.175613 | 1.045009 | 1.237385 | 0.001195 | 0.001909 | 0.001618 |
| has_bit_xor_test.test | RUN | 0.176233 | 0.757813 | 1.215838 | 0.001376 | 0.001922 | 0.001578 |
| has_bit_xor_assign_test.test | RUN | 0.178792 | 0.799218 | 1.233497 | 0.001538 | 0.001679 | 0.001493 |
| has_bit_or_test.test | RUN | 0.172906 | 0.765577 | 1.262353 | 0.001366 | 0.001760 | 0.001681 |
| has_bit_or_assign_test.test | RUN | 0.174132 | 0.746567 | 1.364438 | 0.001603 | 0.001873 | 0.001681 |
| has_bit_and_test.test | RUN | 0.173721 | 0.740386 | 1.366386 | 0.001038 | 0.001853 | 0.001499 |
| has_bit_and_assign_test.test | RUN | 0.181020 | 0.788389 | 1.285178 | 0.001692 | 0.001839 | 0.001351 |
| has_binary_classes9_test.test | RUN | 0.191377 | 0.924723 | 1.428443 | 0.001550 | 0.001861 | 0.001791 |
| has_binary_classes8_test.test | RUN | 0.189453 | 0.905510 | 1.414110 | 0.001654 | 0.001733 | 0.001411 |
| has_binary_classes7_test.test | RUN | 0.187384 | 0.879744 | 1.350212 | 0.001644 | 0.001772 | 0.001229 |
| has_binary_classes6_test.test | RUN | 0.227831 | 0.914707 | 1.414814 | 0.001462 | 0.001878 | 0.001459 |
| has_binary_classes5_test.test | RUN | 0.191290 | 0.867023 | 1.331160 | 0.001654 | 0.001722 | 0.001712 |
| has_binary_classes4_test.test | RUN | 0.193066 | 0.897948 | 1.388058 | 0.001427 | 0.001678 | 0.001482 |
| has_binary_classes3_test.test | RUN | 0.194318 | 0.908595 | 1.380653 | 0.001232 | 0.001815 | 0.001221 |
| has_binary_classes2_test.test | RUN | 0.198535 | 0.931443 | 1.316353 | 0.001634 | 0.001676 | 0.001288 |
| has_binary_classes1_test.test | RUN | 0.193835 | 0.914555 | 1.362119 | 0.001656 | 0.001740 | 0.001718 |
| has_binary_classes0_test.test | RUN | 0.195668 | 0.899451 | 1.362950 | 0.001453 | 0.001402 | 0.001552 |
| function_traits_test.test | RUN | 0.092748 | 0.226519 | 0.315211 | 0.001417 | 0.001622 | 0.001455 |
| floating_point_promotion_test.test | RUN | 0.091524 | 0.218735 | 0.291413 | 0.001492 | 0.001696 | 0.001464 |
| extent_test.test | RUN | 0.095635 | 0.227431 | 0.291763 | 0.001420 | 0.001350 | 0.001500 |
| enable_if_test.test | RUN | 0.088204 | 0.203886 | 0.233141 | 0.001604 | 0.001804 | 0.001595 |
| disjunction_test.test | RUN | 0.087336 | 0.202840 | 0.251288 | 0.001570 | 0.001451 | 0.001552 |
| detected_test.test | RUN | 0.085749 | 0.194976 | 0.252794 | 0.001516 | 0.001740 | 0.001528 |
| detected_or_test.test | RUN | 0.088735 | 0.209923 | 0.264705 | 0.001387 | 0.001377 | 0.001404 |
| decay_test.test | RUN | 0.205036 | 0.758764 | 1.422530 | 0.001584 | 0.001486 | 0.001502 |
| cxx14_aliases_test.test | RUN | 0.137324 | 0.297116 | 0.404559 | 0.001636 | 0.001501 | 0.001351 |
| copy_reference_test.test | RUN | 0.090617 | 0.200886 | 0.260568 | 0.001482 | 0.001740 | 0.001702 |
| copy_cv_test.test | RUN | 0.092895 | 0.213671 | 0.274286 | 0.001460 | 0.001532 | 0.001630 |
| copy_cv_ref_test.test | RUN | 0.133739 | 0.353087 | 0.607727 | 0.001551 | 0.001505 | 0.001503 |
| conjunction_test.test | RUN | 0.089393 | 0.204499 | 0.246539 | 0.001418 | 0.001657 | 0.001340 |
| conditional_test.test | RUN | 0.088081 | 0.210728 | 0.237907 | 0.001460 | 0.001716 | 0.001327 |
| common_type_test.test | RUN | 0.117129 | 0.307485 | 0.487171 | 0.001548 | 0.001511 | 0.001704 |
| common_type_sfinae_test.test | RUN | 0.088193 | 0.198981 | 0.238527 | 0.001574 | 0.001579 | 0.001339 |
| common_type_sfinae2_test.test | RUN | 0.090659 | 0.205164 | 0.266590 | 0.001458 | 0.001530 | 0.001580 |
| common_type_6_test.test | RUN | 0.093068 | 0.211829 | 0.276517 | 0.001466 | 0.001708 | 0.001640 |
| common_type_5_test.test | RUN | 0.094047 | 0.209952 | 0.275062 | 0.001497 | 0.001803 | 0.001657 |
| common_type_4_test.test | RUN | 0.098740 | 0.226841 | 0.317536 | 0.001474 | 0.001590 | 0.001508 |
| common_type_3_test.test | RUN | 0.086466 | 0.197811 | 0.247498 | 0.001412 | 0.001434 | 0.001662 |
| common_type_2_test.test | RUN | 0.114897 | 0.319465 | 0.477957 | 0.001678 | 0.001800 | 0.001558 |
| alignment_of_test.test | RUN | 0.098107 | 0.246373 | 0.317058 | 0.001453 | 0.001490 | 0.001819 |
| alignment_of_a2_test.test | RUN | 0.094426 | 0.243179 | 0.313356 | 0.001648 | 0.001730 | 0.001440 |
| aligned_storage_test.test | RUN | 0.097720 | 0.235377 | 0.296684 | 0.001558 | 0.001689 | 0.001860 |
| aligned_storage_empy_test.test | RUN | 0.101454 | 0.260457 | 0.404738 | 0.001595 | 0.001893 | 0.001711 |
| aligned_storage_a2_test.test | RUN | 0.097503 | 0.242516 | 0.320230 | 0.001516 | 0.002030 | 0.001672 |
| add_volatile_test.test | RUN | 0.192022 | 0.668164 | 1.303005 | 0.001469 | 0.001764 | 0.001796 |
| add_rvalue_reference_test.test | RUN | 0.214004 | 0.750516 | 1.547304 | 0.001477 | 0.001574 | 0.001814 |
| add_reference_test.test | RUN | 0.207844 | 0.732871 | 1.523318 | 0.001363 | 0.001594 | 0.001708 |
| add_pointer_test.test | RUN | 0.136771 | 0.418882 | 0.796154 | 0.001301 | 0.001752 | 0.001679 |
| add_lvalue_reference_test.test | RUN | 0.206873 | 0.745273 | 1.531476 | 0.001386 | 0.001798 | 0.001509 |
| add_cv_test.test | RUN | 0.194584 | 0.714468 | 1.441867 | 0.001208 | 0.001639 | 0.001496 |
| add_const_test.test | RUN | 0.194648 | 0.700689 | 1.408200 | 0.001157 | 0.001728 | 0.001386 |
| is_virtual_base_of_fail.test | COMPILE_FAIL | 0.082967 | 0.188285 | 0.248507 | — | — | — |
| is_stateless_fail.test | COMPILE_FAIL | 0.092232 | 0.195887 | 0.258149 | — | — | — |
| is_polymorphic_fail.test | COMPILE_FAIL | 0.079275 | 0.192311 | 0.251040 | — | — | — |
| is_nothrow_move_constructible_fail.test | COMPILE_FAIL | 0.080764 | 0.187478 | 0.230955 | — | — | — |
| is_nothrow_move_assignable_fail.test | COMPILE_FAIL | 0.078393 | 0.189263 | 0.220011 | — | — | — |
| is_list_constructible_fail.test | COMPILE_FAIL | 0.081035 | 0.189727 | 0.222163 | — | — | — |
| is_empty_fail.test | COMPILE_FAIL | 0.082142 | 0.185139 | 0.233890 | — | — | — |
| is_destructible_fail.test | COMPILE_FAIL | 0.080455 | 0.194295 | 0.235676 | — | — | — |
| is_default_constructible_fail.test | COMPILE_FAIL | 0.080560 | 0.191893 | 0.232760 | — | — | — |
| is_copy_constructible_fail.test | COMPILE_FAIL | 0.079721 | 0.197371 | 0.242800 | — | — | — |
| is_copy_assignable_fail.test | COMPILE_FAIL | 0.084050 | 0.186684 | 0.234915 | — | — | — |
| is_convertible_fail.test | COMPILE_FAIL | 0.082336 | 0.193651 | 0.237942 | — | — | — |
| is_convertible2_fail.test | COMPILE_FAIL | 0.082531 | 0.187363 | 0.237258 | — | — | — |
| is_constructible_fail.test | COMPILE_FAIL | 0.079995 | 0.189845 | 0.233702 | — | — | — |
| is_base_of_fail.test | COMPILE_FAIL | 0.079024 | 0.194450 | 0.234679 | — | — | — |
| is_assignable_fail.test | COMPILE_FAIL | 0.078624 | 0.187799 | 0.234025 | — | — | — |
| has_nothrow_destruct_fail.test | COMPILE_FAIL | 0.078939 | 0.187655 | 0.234129 | — | — | — |
| has_nothrow_copy_fail.test | COMPILE_FAIL | 0.078957 | 0.190223 | 0.235887 | — | — | — |
| has_nothrow_cons_fail.test | COMPILE_FAIL | 0.078951 | 0.192498 | 0.225596 | — | — | — |
| has_nothrow_assign_fail.test | COMPILE_FAIL | 0.079360 | 0.191306 | 0.226787 | — | — | — |
| common_type_fail.test | COMPILE_FAIL | 0.077787 | 0.188003 | 0.226234 | — | — | — |
| common_type2_fail.test | COMPILE_FAIL | 0.077900 | 0.221772 | 0.228197 | — | — | — |
| has_nothrow_assign_test_no_intrinsics.test | RUN | 0.139688 | 0.450766 | 0.611358 | 0.001113 | 0.001604 | 0.001335 |
| has_nothrow_constr_test_no_intrinsics.test | RUN | 0.130428 | 0.419435 | 0.607447 | 0.001086 | 0.001722 | 0.001441 |
| has_nothrow_copy_test_no_intrinsics.test | RUN | 0.133404 | 0.417269 | 0.602655 | 0.001203 | 0.001577 | 0.001566 |
| is_nothrow_move_assignable_test_no_intrinsics.test | RUN | 0.132340 | 0.404858 | 0.591866 | 0.001420 | 0.001406 | 0.001502 |
| is_nothrow_move_constructible_test_no_intrinsics.test | RUN | 0.078442 | 0.277136 | 0.339262 | 0.001211 | 0.001300 | 0.001088 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.992× | 0.993×, 0.991× | 1.018× |
| clang | 1.030×† | 1.034×, 1.026× | 1.102× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1363 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43624536445).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| add_const_test.test | 10 | 0.000881s | 0.000865s | 0.000880s | byte equality observed |
| add_cv_test.test | 10 | 0.000890s | 0.000874s | 0.000897s | byte equality observed |
| add_lvalue_reference_test.test | 10 | 0.000875s | 0.000897s | 0.000896s | byte equality observed |
| add_pointer_test.test | 10 | 0.000884s | 0.000869s | 0.000877s | byte equality observed |
| add_reference_test.test | 10 | 0.000905s | 0.000888s | 0.000883s | byte equality observed |
| add_rvalue_reference_test.test | 10 | 0.000891s | 0.000867s | 0.000878s | byte equality observed |
| add_volatile_test.test | 10 | 0.000896s | 0.000875s | 0.000883s | byte equality observed |
| aligned_storage_a2_test.test | 10 | 0.000957s | 0.000956s | 0.000965s | byte equality observed |
| aligned_storage_empy_test.test | 10 | 0.000888s | 0.000885s | 0.000886s | byte equality observed |
| aligned_storage_test.test | 10 | 0.000990s | 0.000967s | 0.000967s | byte equality observed |
| alignment_of_a2_test.test | 10 | 0.000880s | 0.000893s | 0.000892s | byte equality observed |
| alignment_of_test.test | 10 | 0.000893s | 0.000891s | 0.000871s | byte equality observed |
| common_type_2_test.test | 10 | 0.000878s | 0.000873s | 0.000867s | byte equality observed |
| common_type_3_test.test | 10 | 0.000877s | 0.000875s | 0.000889s | byte equality observed |
| common_type_4_test.test | 10 | 0.000904s | 0.000886s | 0.000879s | byte equality observed |
| common_type_5_test.test | 10 | 0.000885s | 0.000883s | 0.000875s | byte equality observed |
| common_type_6_test.test | 10 | 0.000869s | 0.000879s | 0.000875s | byte equality observed |
| common_type_sfinae2_test.test | 10 | 0.000886s | 0.000876s | 0.000874s | byte equality observed |
| common_type_sfinae_test.test | 10 | 0.000885s | 0.000876s | 0.000877s | byte equality observed |
| common_type_test.test | 10 | 0.000881s | 0.000882s | 0.000867s | byte equality observed |
| conditional_test.test | 10 | 0.000881s | 0.000855s | 0.000857s | byte equality observed |
| conjunction_test.test | 10 | 0.000893s | 0.000877s | 0.000856s | byte equality observed |
| copy_cv_ref_test.test | 10 | 0.000873s | 0.000892s | 0.000876s | byte equality observed |
| copy_cv_test.test | 10 | 0.000869s | 0.000868s | 0.000884s | byte equality observed |
| copy_reference_test.test | 10 | 0.000868s | 0.000877s | 0.000893s | byte equality observed |
| cxx14_aliases_test.test | 10 | 0.000876s | 0.000869s | 0.000883s | byte equality observed |
| decay_test.test | 10 | 0.000890s | 0.000880s | 0.000893s | byte equality observed |
| detected_or_test.test | 10 | 0.000868s | 0.000878s | 0.000887s | byte equality observed |
| detected_test.test | 10 | 0.000879s | 0.000872s | 0.000883s | byte equality observed |
| disjunction_test.test | 10 | 0.000874s | 0.000859s | 0.000905s | byte equality observed |
| enable_if_test.test | 10 | 0.000893s | 0.000873s | 0.000884s | byte equality observed |
| extent_test.test | 10 | 0.000869s | 0.000876s | 0.000892s | byte equality observed |
| floating_point_promotion_test.test | 10 | 0.000877s | 0.000861s | 0.000892s | byte equality observed |
| function_traits_test.test | 10 | 0.000867s | 0.000866s | 0.000881s | byte equality observed |
| has_binary_classes0_test.test | 10 | 0.000889s | 0.000869s | 0.000887s | byte equality observed |
| has_binary_classes1_test.test | 10 | 0.000875s | 0.000843s | 0.000901s | byte equality observed |
| has_binary_classes2_test.test | 10 | 0.000884s | 0.000881s | 0.000889s | byte equality observed |
| has_binary_classes3_test.test | 10 | 0.000873s | 0.000865s | 0.000904s | byte equality observed |
| has_binary_classes4_test.test | 10 | 0.000871s | 0.000873s | 0.000880s | byte equality observed |
| has_binary_classes5_test.test | 10 | 0.000875s | 0.000867s | 0.000886s | byte equality observed |
| has_binary_classes6_test.test | 10 | 0.000881s | 0.000854s | 0.000879s | byte equality observed |
| has_binary_classes7_test.test | 10 | 0.000870s | 0.000867s | 0.000875s | byte equality observed |
| has_binary_classes8_test.test | 10 | 0.000886s | 0.000860s | 0.000887s | byte equality observed |
| has_binary_classes9_test.test | 10 | 0.000876s | 0.000866s | 0.000876s | byte equality observed |
| has_bit_and_assign_test.test | 10 | 0.000876s | 0.000874s | 0.000876s | byte equality observed |
| has_bit_and_test.test | 10 | 0.000878s | 0.000849s | 0.000883s | byte equality observed |
| has_bit_or_assign_test.test | 10 | 0.000877s | 0.000860s | 0.000892s | byte equality observed |
| has_bit_or_test.test | 10 | 0.000866s | 0.000877s | 0.000907s | byte equality observed |
| has_bit_xor_assign_test.test | 10 | 0.000869s | 0.000844s | 0.000899s | byte equality observed |
| has_bit_xor_test.test | 10 | 0.000874s | 0.000848s | 0.000917s | byte equality observed |
| has_complement_test.test | 10 | 0.000874s | 0.000881s | 0.000884s | byte equality observed |
| has_dereference_test.test | 10 | 0.000875s | 0.000858s | 0.000883s | byte equality observed |
| has_divides_assign_test.test | 10 | 0.000875s | 0.000879s | 0.000885s | byte equality observed |
| has_divides_test.test | 10 | 0.000862s | 0.000863s | 0.000892s | byte equality observed |
| has_equal_to_test.test | 10 | 0.000870s | 0.000861s | 0.000866s | byte equality observed |
| has_greater_equal_test.test | 10 | 0.000883s | 0.000860s | 0.000881s | byte equality observed |
| has_greater_test.test | 10 | 0.000875s | 0.000849s | 0.000880s | byte equality observed |
| has_left_shift_assign_test.test | 10 | 0.000868s | 0.000894s | 0.000906s | byte equality observed |
| has_left_shift_test.test | 10 | 0.000876s | 0.000870s | 0.000886s | byte equality observed |
| has_less_equal_test.test | 10 | 0.000874s | 0.000894s | 0.000860s | byte equality observed |
| has_less_test.test | 10 | 0.000866s | 0.000891s | 0.000888s | byte equality observed |
| has_logical_and_test.test | 10 | 0.000880s | 0.000871s | 0.000873s | byte equality observed |
| has_logical_not_test.test | 10 | 0.000887s | 0.000891s | 0.000864s | byte equality observed |
| has_logical_or_test.test | 10 | 0.000886s | 0.000897s | 0.000879s | byte equality observed |
| has_minus_assign_test.test | 10 | 0.000878s | 0.000888s | 0.000861s | byte equality observed |
| has_minus_test.test | 10 | 0.000866s | 0.000873s | 0.000879s | byte equality observed |
| has_modulus_assign_test.test | 10 | 0.000886s | 0.000891s | 0.000865s | byte equality observed |
| has_modulus_test.test | 10 | 0.000875s | 0.000890s | 0.000863s | byte equality observed |
| has_multiplies_assign_test.test | 10 | 0.000890s | 0.000881s | 0.000897s | byte equality observed |
| has_multiplies_test.test | 10 | 0.000882s | 0.000918s | 0.000858s | byte equality observed |
| has_negate_test.test | 10 | 0.000881s | 0.000890s | 0.000865s | byte equality observed |
| has_not_equal_to_test.test | 10 | 0.000864s | 0.000901s | 0.000871s | byte equality observed |
| has_nothrow_assign_test.test | 10 | 0.000884s | 0.000889s | 0.000881s | byte equality observed |
| has_nothrow_assign_test_no_intrinsics.test | 10 | 0.000873s | 0.000875s | 0.000877s | byte equality observed |
| has_nothrow_constr_test.test | 10 | 0.000875s | 0.000890s | 0.000895s | byte equality observed |
| has_nothrow_constr_test_no_intrinsics.test | 10 | 0.000896s | 0.000883s | 0.000868s | byte equality observed |
| has_nothrow_copy_test.test | 10 | 0.000876s | 0.000882s | 0.000884s | byte equality observed |
| has_nothrow_copy_test_no_intrinsics.test | 10 | 0.000878s | 0.000879s | 0.000899s | byte equality observed |
| has_nothrow_destructor_test.test | 10 | 0.000878s | 0.000876s | 0.000891s | byte equality observed |
| has_operator_new_test.test | 10 | 0.000875s | 0.000860s | 0.000875s | byte equality observed |
| has_plus_assign_test.test | 10 | 0.000893s | 0.000897s | 0.000898s | byte equality observed |
| has_plus_test.test | 10 | 0.000865s | 0.000871s | 0.000885s | byte equality observed |
| has_post_decrement_test.test | 10 | 0.000872s | 0.000886s | 0.000867s | byte equality observed |
| has_post_increment_test.test | 10 | 0.000867s | 0.000888s | 0.000894s | byte equality observed |
| has_postfix_classes0_test.test | 10 | 0.000879s | 0.000893s | 0.000897s | byte equality observed |
| has_postfix_classes1_test.test | 10 | 0.000872s | 0.000880s | 0.000902s | byte equality observed |
| has_postfix_classes2_test.test | 10 | 0.000880s | 0.000885s | 0.000901s | byte equality observed |
| has_postfix_classes3_test.test | 10 | 0.000872s | 0.000880s | 0.000868s | byte equality observed |
| has_pre_decrement_test.test | 10 | 0.000877s | 0.000898s | 0.000905s | byte equality observed |
| has_pre_increment_test.test | 10 | 0.000889s | 0.000883s | 0.000871s | byte equality observed |
| has_prefix_classes0_test.test | 10 | 0.000873s | 0.000888s | 0.000895s | byte equality observed |
| has_prefix_classes1_test.test | 10 | 0.000891s | 0.000892s | 0.000873s | byte equality observed |
| has_prefix_classes2_test.test | 10 | 0.000883s | 0.000897s | 0.000874s | byte equality observed |
| has_prefix_classes3_test.test | 10 | 0.000872s | 0.000886s | 0.000872s | byte equality observed |
| has_right_shift_assign_test.test | 10 | 0.000895s | 0.000908s | 0.000884s | byte equality observed |
| has_right_shift_test.test | 10 | 0.000888s | 0.000879s | 0.000869s | byte equality observed |
| has_trivial_assign_test.test | 10 | 0.000929s | 0.000947s | 0.000936s | byte equality observed |
| has_trivial_constr_test.test | 10 | 0.000924s | 0.000935s | 0.000928s | native test oracle; output varies |
| has_trivial_copy_test.test | 10 | 0.000915s | 0.000932s | 0.000955s | native test oracle; output varies |
| has_trivial_destructor_test.test | 10 | 0.000879s | 0.000883s | 0.000872s | byte equality observed |
| has_trivial_move_assign_test.test | 10 | 0.000877s | 0.000899s | 0.000901s | byte equality observed |
| has_trivial_move_constructor_test.test | 10 | 0.000901s | 0.000891s | 0.000875s | byte equality observed |
| has_unary_minus_test.test | 10 | 0.000876s | 0.000876s | 0.000873s | byte equality observed |
| has_unary_plus_test.test | 10 | 0.000879s | 0.000876s | 0.000875s | byte equality observed |
| has_virtual_destructor_test.test | 10 | 0.000874s | 0.000884s | 0.000876s | byte equality observed |
| integral_constant_test.test | 10 | 0.000414s | 0.000419s | 0.000861s | byte equality observed |
| is_abstract_test.test | 10 | 0.000876s | 0.000883s | 0.000858s | byte equality observed |
| is_arithmetic_test.test | 10 | 0.000881s | 0.000873s | 0.000862s | byte equality observed |
| is_array_test.test | 10 | 0.000869s | 0.000867s | 0.000860s | byte equality observed |
| is_assignable_test.test | 10 | 0.000873s | 0.000888s | 0.000873s | byte equality observed |
| is_base_and_derived_test.test | 10 | 0.000864s | 0.000875s | 0.000860s | byte equality observed |
| is_base_of_test.test | 10 | 0.000863s | 0.000888s | 0.000859s | byte equality observed |
| is_bounded_array_test.test | 10 | 0.000860s | 0.000858s | 0.000862s | byte equality observed |
| is_class_test.test | 10 | 0.000873s | 0.000877s | 0.000869s | byte equality observed |
| is_complete_test.test | 10 | 0.000871s | 0.000882s | 0.000878s | byte equality observed |
| is_complex_test.test | 10 | 0.000870s | 0.000868s | 0.000862s | byte equality observed |
| is_compound_test.test | 10 | 0.000861s | 0.000860s | 0.000857s | byte equality observed |
| is_const_test.test | 10 | 0.000865s | 0.000859s | 0.000859s | byte equality observed |
| is_constructible_test.test | 10 | 0.000848s | 0.000873s | 0.000905s | byte equality observed |
| is_convertible_test.test | 10 | 0.000880s | 0.000878s | 0.000891s | byte equality observed |
| is_copy_assignable_test.test | 10 | 0.000866s | 0.000868s | 0.000886s | byte equality observed |
| is_copy_constructible_test.test | 10 | 0.000858s | 0.000869s | 0.000894s | byte equality observed |
| is_default_constr_test.test | 10 | 0.000869s | 0.000857s | 0.000876s | byte equality observed |
| is_destructible_test.test | 10 | 0.000868s | 0.000878s | 0.000888s | byte equality observed |
| is_detected_exact_test.test | 10 | 0.000867s | 0.000864s | 0.000882s | byte equality observed |
| is_detected_test.test | 10 | 0.000857s | 0.000868s | 0.000851s | byte equality observed |
| is_empty_test.test | 10 | 0.000860s | 0.000864s | 0.000853s | byte equality observed |
| is_enum_test.test | 10 | 0.000866s | 0.000863s | 0.000866s | byte equality observed |
| is_final_test.test | 10 | 0.000871s | 0.000873s | 0.000857s | byte equality observed |
| is_float_test.test | 10 | 0.000861s | 0.000869s | 0.000845s | byte equality observed |
| is_floating_point_test.test | 10 | 0.000850s | 0.000889s | 0.000851s | byte equality observed |
| is_function_test.test | 10 | 0.000869s | 0.000865s | 0.000859s | byte equality observed |
| is_fundamental_test.test | 10 | 0.000872s | 0.000867s | 0.000849s | byte equality observed |
| is_integral_test.test | 10 | 0.000878s | 0.000871s | 0.000850s | byte equality observed |
| is_list_constructible_test.test | 10 | 0.000850s | 0.000859s | 0.000856s | byte equality observed |
| is_lvalue_reference_test.test | 10 | 0.000858s | 0.000880s | 0.000830s | byte equality observed |
| is_member_func_test.test | 10 | 0.000865s | 0.000867s | 0.000873s | byte equality observed |
| is_member_obj_test.test | 10 | 0.000872s | 0.000883s | 0.000859s | byte equality observed |
| is_member_pointer_test.test | 10 | 0.000877s | 0.000863s | 0.000869s | byte equality observed |
| is_noncopyable_test.test | 10 | 0.000867s | 0.000867s | 0.000852s | byte equality observed |
| is_nothrow_move_assignable_test.test | 10 | 0.000868s | 0.000894s | 0.000875s | byte equality observed |
| is_nothrow_move_assignable_test_no_intrinsics.test | 10 | 0.000862s | 0.000866s | 0.000865s | byte equality observed |
| is_nothrow_move_constructible_test.test | 10 | 0.000875s | 0.000891s | 0.000878s | byte equality observed |
| is_nothrow_move_constructible_test_no_intrinsics.test | 10 | 0.000858s | 0.000881s | 0.000870s | byte equality observed |
| is_nothrow_swappable_test.test | 10 | 0.000867s | 0.000891s | 0.000868s | byte equality observed |
| is_object_test.test | 10 | 0.000877s | 0.000886s | 0.000893s | byte equality observed |
| is_pod_test.test | 10 | 0.000873s | 0.000886s | 0.000875s | byte equality observed |
| is_pointer_test.test | 10 | 0.000869s | 0.000890s | 0.000865s | byte equality observed |
| is_polymorphic_test.test | 10 | 0.000872s | 0.000893s | 0.000851s | byte equality observed |
| is_reference_test.test | 10 | 0.000887s | 0.000886s | 0.000863s | byte equality observed |
| is_rvalue_reference_test.test | 10 | 0.000876s | 0.000880s | 0.000839s | byte equality observed |
| is_same_test.test | 10 | 0.000873s | 0.000887s | 0.000856s | byte equality observed |
| is_scalar_test.test | 10 | 0.000879s | 0.000887s | 0.000860s | byte equality observed |
| is_scoped_enum_test.test | 10 | 0.000878s | 0.000913s | 0.000879s | byte equality observed |
| is_signed_test.test | 10 | 0.000874s | 0.000867s | 0.000833s | byte equality observed |
| is_stateless_test.test | 10 | 0.000867s | 0.000898s | 0.000843s | byte equality observed |
| is_swappable_test.test | 10 | 0.000862s | 0.000886s | 0.000846s | byte equality observed |
| is_trivially_copyable_test.test | 10 | 0.000904s | 0.000916s | 0.000874s | byte equality observed |
| is_unbounded_array_test.test | 10 | 0.000858s | 0.000890s | 0.000846s | byte equality observed |
| is_union_test.test | 10 | 0.000863s | 0.000892s | 0.000866s | byte equality observed |
| is_unscoped_enum_test.test | 10 | 0.000869s | 0.000878s | 0.000872s | byte equality observed |
| is_unsigned_test.test | 10 | 0.000878s | 0.000902s | 0.000838s | byte equality observed |
| is_virtual_base_of_test.test | 10 | 0.000870s | 0.000868s | 0.000853s | byte equality observed |
| is_void_test.test | 10 | 0.000876s | 0.000882s | 0.000848s | byte equality observed |
| is_volatile_test.test | 10 | 0.000875s | 0.000888s | 0.000862s | byte equality observed |
| make_signed_test.test | 10 | 0.000880s | 0.000876s | 0.000846s | byte equality observed |
| make_unsigned_test.test | 10 | 0.000873s | 0.000866s | 0.000836s | byte equality observed |
| make_void_test.test | 10 | 0.000908s | 0.000881s | 0.000857s | byte equality observed |
| mpl_interop_test1.test | 10 | 0.000416s | 0.000415s | 0.000874s | byte equality observed |
| mpl_interop_test2.test | 10 | 0.000415s | 0.000423s | 0.000871s | byte equality observed |
| mpl_interop_test3.test | 10 | 0.000398s | 0.000423s | 0.000878s | byte equality observed |
| negation_test.test | 10 | 0.000891s | 0.000904s | 0.000867s | byte equality observed |
| promote_basic_test.test | 10 | 0.000402s | 0.000401s | 0.000842s | byte equality observed |
| promote_enum_msvc_bug_test.test | 10 | 0.000406s | 0.000418s | 0.000851s | byte equality observed |
| promote_enum_test.test | 10 | 0.000407s | 0.000425s | 0.000875s | byte equality observed |
| promote_mpl_test.test | 10 | 0.000403s | 0.000404s | 0.000858s | byte equality observed |
| rank_test.test | 10 | 0.000875s | 0.000867s | 0.000875s | byte equality observed |
| remove_all_extents_test.test | 10 | 0.000881s | 0.000868s | 0.000897s | byte equality observed |
| remove_bounds_test.test | 10 | 0.000870s | 0.000867s | 0.000888s | byte equality observed |
| remove_const_test.test | 10 | 0.000867s | 0.000855s | 0.000875s | byte equality observed |
| remove_cv_ref_test.test | 10 | 0.000865s | 0.000880s | 0.000910s | byte equality observed |
| remove_cv_test.test | 10 | 0.000884s | 0.000853s | 0.000865s | byte equality observed |
| remove_extent_test.test | 10 | 0.000866s | 0.000854s | 0.000875s | byte equality observed |
| remove_pointer_test.test | 10 | 0.000871s | 0.000876s | 0.000872s | byte equality observed |
| remove_reference_test.test | 10 | 0.000872s | 0.000853s | 0.000872s | byte equality observed |
| remove_volatile_test.test | 10 | 0.000875s | 0.000863s | 0.000865s | byte equality observed |
| tricky_abstract_type_test.test | 10 | 0.000865s | 0.000866s | 0.000873s | byte equality observed |
| tricky_add_pointer_test.test | 10 | 0.000876s | 0.000856s | 0.000886s | byte equality observed |
| tricky_function_type_test.test | 10 | 0.000871s | 0.000857s | 0.000873s | byte equality observed |
| tricky_incomplete_type_test.test | 10 | 0.000866s | 0.000856s | 0.000911s | byte equality observed |
| tricky_is_enum_test.test | 10 | 0.000871s | 0.000866s | 0.000865s | byte equality observed |
| tricky_partial_spec_test.test | 10 | 0.000876s | 0.000866s | 0.000871s | byte equality observed |
| tricky_rvalue_test.test | 10 | 0.000882s | 0.000876s | 0.000891s | byte equality observed |
| type_identity_test.test | 10 | 0.000904s | 0.000872s | 0.000877s | byte equality observed |
| type_traits_test.test | 10 | 0.000406s | 0.000413s | 0.000859s | byte equality observed |
| type_with_alignment_test.test | 10 | 0.000986s | 0.000972s | 0.000966s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43624536445).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
