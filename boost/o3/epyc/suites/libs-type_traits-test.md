# libs/type_traits/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| type_with_alignment_test.test | RUN | 0.115207 | 0.321096 | 0.496373 | 0.001608 | 0.001786 | 0.001867 |
| type_traits_test.test | RUN | 0.162086 | 0.336064 | 0.522117 | 0.000519 | 0.000556 | 0.001545 |
| type_identity_test.test | RUN | 0.304952 | 1.166250 | 2.930241 | 0.001596 | 0.001749 | 0.001679 |
| tricky_rvalue_test.test | RUN | 0.106688 | 0.256022 | 0.396219 | 0.001585 | 0.001711 | 0.001450 |
| tricky_partial_spec_test.test | RUN | 0.128325 | 0.370130 | 0.654282 | 0.001524 | 0.001783 | 0.001551 |
| tricky_is_enum_test.test | RUN | 0.104502 | 0.247313 | 0.366933 | 0.001401 | 0.001639 | 0.001806 |
| tricky_incomplete_type_test.test | RUN | 0.174007 | 0.385517 | 0.608811 | 0.001540 | 0.001752 | 0.001423 |
| tricky_function_type_test.test | RUN | 0.137662 | 0.402153 | 0.718326 | 0.001659 | 0.001564 | 0.001618 |
| tricky_add_pointer_test.test | RUN | 0.205376 | 0.696083 | 1.650165 | 0.001693 | 0.001786 | 0.001837 |
| tricky_abstract_type_test.test | RUN | 0.108638 | 0.237809 | 0.372416 | 0.001446 | 0.001706 | 0.001734 |
| remove_volatile_test.test | RUN | 0.273677 | 0.992352 | 2.567286 | 0.001692 | 0.001790 | 0.001801 |
| remove_reference_test.test | RUN | 0.287145 | 1.055802 | 2.728471 | 0.001654 | 0.001637 | 0.001727 |
| remove_pointer_test.test | RUN | 0.300460 | 1.073806 | 2.868723 | 0.001627 | 0.001640 | 0.001762 |
| remove_extent_test.test | RUN | 0.287141 | 1.050875 | 2.734077 | 0.001395 | 0.001804 | 0.001788 |
| remove_cv_test.test | RUN | 0.285709 | 1.048633 | 2.703487 | 0.001653 | 0.001713 | 0.001752 |
| remove_cv_ref_test.test | RUN | 0.596330 | 2.495389 | 6.658780 | 0.001561 | 0.001566 | 0.001505 |
| remove_const_test.test | RUN | 0.278464 | 0.998583 | 2.629887 | 0.001646 | 0.001792 | 0.001706 |
| remove_bounds_test.test | RUN | 0.292147 | 1.062198 | 2.751069 | 0.001564 | 0.001659 | 0.001746 |
| remove_all_extents_test.test | RUN | 0.295128 | 1.039772 | 2.606963 | 0.001489 | 0.001616 | 0.001753 |
| rank_test.test | RUN | 0.108197 | 0.251420 | 0.410390 | 0.001314 | 0.001516 | 0.001612 |
| promote_mpl_test.test | RUN | 0.096668 | 0.225464 | 0.278007 | 0.000623 | 0.000701 | 0.001717 |
| promote_enum_test.test | RUN | 0.021850 | 0.055400 | 0.070418 | 0.000549 | 0.000731 | 0.001744 |
| promote_enum_msvc_bug_test.test | RUN | 0.019822 | 0.050497 | 0.058295 | 0.000598 | 0.000813 | 0.001751 |
| promote_basic_test.test | RUN | 0.024672 | 0.066125 | 0.075528 | 0.000622 | 0.000667 | 0.001729 |
| negation_test.test | RUN | 0.103305 | 0.236422 | 0.353521 | 0.001523 | 0.001664 | 0.001250 |
| mpl_interop_test3.test | RUN | 0.089202 | 0.210267 | 0.248061 | 0.000593 | 0.000568 | 0.001411 |
| mpl_interop_test2.test | RUN | 0.032596 | 0.067513 | 0.064438 | 0.000608 | 0.000688 | 0.001373 |
| mpl_interop_test1.test | RUN | 0.017239 | 0.046537 | 0.050514 | 0.000570 | 0.000678 | 0.001523 |
| make_void_test.test | RUN | 0.108990 | 0.250646 | 0.379792 | 0.001701 | 0.001581 | 0.001683 |
| make_unsigned_test.test | RUN | 0.128168 | 0.324699 | 0.564808 | 0.001541 | 0.001645 | 0.001306 |
| make_signed_test.test | RUN | 0.126966 | 0.339342 | 0.565107 | 0.001541 | 0.001643 | 0.001354 |
| is_volatile_test.test | RUN | 0.111432 | 0.295728 | 0.465143 | 0.001319 | 0.001634 | 0.001440 |
| is_void_test.test | RUN | 0.108827 | 0.264066 | 0.433932 | 0.001675 | 0.001834 | 0.001794 |
| is_virtual_base_of_test.test | RUN | 0.126612 | 0.347748 | 0.615873 | 0.001575 | 0.001734 | 0.001896 |
| is_unsigned_test.test | RUN | 0.111240 | 0.285310 | 0.408622 | 0.001402 | 0.001340 | 0.001516 |
| is_unscoped_enum_test.test | RUN | 0.106718 | 0.246835 | 0.374325 | 0.001264 | 0.001359 | 0.001366 |
| is_union_test.test | RUN | 0.114437 | 0.321182 | 0.534647 | 0.001642 | 0.001536 | 0.001850 |
| is_unbounded_array_test.test | RUN | 0.107894 | 0.270906 | 0.419040 | 0.001646 | 0.001573 | 0.001726 |
| is_trivially_copyable_test.test | RUN | 0.175320 | 0.555837 | 1.095952 | 0.001556 | 0.001780 | 0.001611 |
| is_swappable_test.test | RUN | 0.143113 | 0.428886 | 0.757968 | 0.001509 | 0.001694 | 0.001773 |
| is_stateless_test.test | RUN | 0.165417 | 0.470672 | 0.887941 | 0.001306 | 0.001741 | 0.001767 |
| is_signed_test.test | RUN | 0.111629 | 0.277356 | 0.413964 | 0.001702 | 0.001795 | 0.001872 |
| is_scoped_enum_test.test | RUN | 0.111118 | 0.250461 | 0.338345 | 0.001501 | 0.001802 | 0.001847 |
| is_scalar_test.test | RUN | 0.144500 | 0.441194 | 0.831356 | 0.001421 | 0.001561 | 0.001550 |
| is_same_test.test | RUN | 0.108551 | 0.258813 | 0.390039 | 0.001590 | 0.001635 | 0.001708 |
| is_rvalue_reference_test.test | RUN | 0.113339 | 0.291337 | 0.503926 | 0.001578 | 0.001566 | 0.001391 |
| is_reference_test.test | RUN | 0.114965 | 0.300935 | 0.459663 | 0.001548 | 0.001670 | 0.001361 |
| is_polymorphic_test.test | RUN | 0.119161 | 0.307885 | 0.518207 | 0.001448 | 0.001693 | 0.001744 |
| is_pointer_test.test | RUN | 0.111993 | 0.304777 | 0.518000 | 0.001962 | 0.001557 | 0.001739 |
| is_pod_test.test | RUN | 0.152599 | 0.489393 | 0.883071 | 0.001465 | 0.001639 | 0.001806 |
| is_object_test.test | RUN | 0.108486 | 0.257540 | 0.399722 | 0.001466 | 0.001582 | 0.001700 |
| is_nothrow_swappable_test.test | RUN | 0.158381 | 0.457599 | 0.873802 | 0.001682 | 0.001658 | 0.001812 |
| is_nothrow_move_constructible_test.test | RUN | 0.147049 | 0.474237 | 0.845161 | 0.001611 | 0.001509 | 0.001466 |
| is_nothrow_move_assignable_test.test | RUN | 0.149104 | 0.489214 | 0.919960 | 0.001361 | 0.001568 | 0.001606 |
| is_noncopyable_test.test | RUN | 0.109491 | 0.272343 | 0.413966 | 0.001377 | 0.001514 | 0.001640 |
| is_member_pointer_test.test | RUN | 0.110015 | 0.269833 | 0.367135 | 0.001511 | 0.001734 | 0.001670 |
| is_member_obj_test.test | RUN | 0.109917 | 0.275437 | 0.428163 | 0.001700 | 0.001555 | 0.001748 |
| is_member_func_test.test | RUN | 0.111654 | 0.286405 | 0.459760 | 0.001277 | 0.001613 | 0.001384 |
| is_lvalue_reference_test.test | RUN | 0.114506 | 0.311816 | 0.472952 | 0.001516 | 0.001810 | 0.001774 |
| is_list_constructible_test.test | RUN | 0.133126 | 0.350997 | 0.564960 | 0.001550 | 0.001759 | 0.001736 |
| is_integral_test.test | RUN | 0.134066 | 0.410891 | 0.747136 | 0.001312 | 0.001623 | 0.001676 |
| is_fundamental_test.test | RUN | 0.136116 | 0.430479 | 0.767555 | 0.001644 | 0.001343 | 0.001472 |
| is_function_test.test | RUN | 0.117315 | 0.282428 | 0.453512 | 0.001385 | 0.001669 | 0.001504 |
| is_floating_point_test.test | RUN | 0.116380 | 0.309726 | 0.475589 | 0.001499 | 0.001546 | 0.001742 |
| is_float_test.test | RUN | 0.113089 | 0.303496 | 0.502669 | 0.001345 | 0.001698 | 0.001338 |
| is_final_test.test | RUN | 0.112248 | 0.307884 | 0.512092 | 0.001651 | 0.001638 | 0.001476 |
| is_enum_test.test | RUN | 0.108011 | 0.256418 | 0.372101 | 0.001363 | 0.001610 | 0.001463 |
| is_empty_test.test | RUN | 0.112791 | 0.282770 | 0.430216 | 0.001459 | 0.001756 | 0.001700 |
| is_detected_test.test | RUN | 0.104259 | 0.238235 | 0.349973 | 0.001646 | 0.001521 | 0.001602 |
| is_detected_exact_test.test | RUN | 0.102062 | 0.244408 | 0.324677 | 0.001646 | 0.001634 | 0.001621 |
| is_destructible_test.test | RUN | 0.147676 | 0.470047 | 0.874660 | 0.001646 | 0.001796 | 0.001746 |
| is_default_constr_test.test | RUN | 0.154146 | 0.494601 | 0.907548 | 0.001698 | 0.001586 | 0.001726 |
| is_copy_constructible_test.test | RUN | 0.154370 | 0.504754 | 0.961068 | 0.001520 | 0.001606 | 0.001402 |
| is_copy_assignable_test.test | RUN | 0.154690 | 0.518591 | 0.942982 | 0.001666 | 0.001474 | 0.001666 |
| is_convertible_test.test | RUN | 0.152131 | 0.447908 | 0.774389 | 0.001664 | 0.001664 | 0.001142 |
| is_constructible_test.test | RUN | 0.127631 | 0.317397 | 0.509237 | 0.001719 | 0.001534 | 0.001639 |
| is_const_test.test | RUN | 0.110690 | 0.287223 | 0.423368 | 0.001590 | 0.001674 | 0.001646 |
| is_compound_test.test | RUN | 0.104703 | 0.256079 | 0.346236 | 0.001412 | 0.001596 | 0.001699 |
| is_complex_test.test | RUN | 0.146199 | 0.326846 | 0.514731 | 0.001707 | 0.001753 | 0.001626 |
| is_complete_test.test | RUN | 0.126494 | 0.337399 | 0.577144 | 0.001562 | 0.001252 | 0.001534 |
| is_class_test.test | RUN | 0.114189 | 0.300125 | 0.463589 | 0.001611 | 0.001659 | 0.001448 |
| is_bounded_array_test.test | RUN | 0.108114 | 0.265409 | 0.416787 | 0.001300 | 0.001348 | 0.001441 |
| is_base_of_test.test | RUN | 0.112898 | 0.292705 | 0.465750 | 0.001709 | 0.001676 | 0.001554 |
| is_base_and_derived_test.test | RUN | 0.115240 | 0.285992 | 0.469377 | 0.001559 | 0.001574 | 0.001521 |
| is_assignable_test.test | RUN | 0.135345 | 0.409551 | 0.742219 | 0.001594 | 0.001740 | 0.001601 |
| is_array_test.test | RUN | 0.111876 | 0.279549 | 0.430990 | 0.001638 | 0.001424 | 0.001443 |
| is_arithmetic_test.test | RUN | 0.136073 | 0.426257 | 0.752060 | 0.001540 | 0.001850 | 0.001640 |
| is_abstract_test.test | RUN | 0.253152 | 1.149758 | 2.515010 | 0.001630 | 0.001590 | 0.001661 |
| integral_constant_test.test | RUN | 0.016949 | 0.045374 | 0.054325 | 0.000644 | 0.000656 | 0.001470 |
| has_virtual_destructor_test.test | RUN | 0.116870 | 0.330058 | 0.523940 | 0.001573 | 0.001774 | 0.001654 |
| has_unary_plus_test.test | RUN | 0.229371 | 1.247797 | 1.981129 | 0.001737 | 0.001831 | 0.001701 |
| has_unary_minus_test.test | RUN | 0.226319 | 1.202348 | 1.909289 | 0.001746 | 0.001695 | 0.001647 |
| has_trivial_move_constructor_test.test | RUN | 0.155972 | 0.494078 | 0.950754 | 0.001318 | 0.001498 | 0.001683 |
| has_trivial_move_assign_test.test | RUN | 0.156472 | 0.473319 | 0.874713 | 0.001578 | 0.001769 | 0.001732 |
| has_trivial_destructor_test.test | RUN | 0.155018 | 0.470001 | 0.928002 | 0.001714 | 0.001512 | 0.001602 |
| has_trivial_copy_test.test | RUN | 0.156575 | 0.517505 | 0.956398 | 0.001771 | 0.001931 | 0.001840 |
| has_trivial_constr_test.test | RUN | 0.160370 | 0.532591 | 0.960898 | 0.001410 | 0.001874 | 0.001748 |
| has_trivial_assign_test.test | RUN | 0.155806 | 0.516465 | 0.981127 | 0.001600 | 0.001842 | 0.001822 |
| has_right_shift_test.test | RUN | 0.244228 | 0.933642 | 2.031836 | 0.001696 | 0.001841 | 0.001677 |
| has_right_shift_assign_test.test | RUN | 0.226975 | 0.902109 | 1.938532 | 0.001524 | 0.001592 | 0.001731 |
| has_prefix_classes3_test.test | RUN | 0.167026 | 0.533949 | 1.031609 | 0.001272 | 0.001575 | 0.001692 |
| has_prefix_classes2_test.test | RUN | 0.172595 | 0.506755 | 1.000359 | 0.001274 | 0.001558 | 0.001924 |
| has_prefix_classes1_test.test | RUN | 0.165097 | 0.531081 | 0.995321 | 0.001695 | 0.001846 | 0.001728 |
| has_prefix_classes0_test.test | RUN | 0.165042 | 0.549371 | 0.973978 | 0.001256 | 0.001783 | 0.001642 |
| has_pre_increment_test.test | RUN | 0.220306 | 1.237154 | 1.977847 | 0.001582 | 0.001698 | 0.001407 |
| has_pre_decrement_test.test | RUN | 0.222510 | 1.249432 | 1.903587 | 0.001259 | 0.001583 | 0.001348 |
| has_postfix_classes3_test.test | RUN | 0.168592 | 0.540443 | 0.985147 | 0.001568 | 0.001746 | 0.001662 |
| has_postfix_classes2_test.test | RUN | 0.168739 | 0.507479 | 0.998696 | 0.001632 | 0.001567 | 0.001361 |
| has_postfix_classes1_test.test | RUN | 0.171580 | 0.544648 | 1.032381 | 0.001520 | 0.001575 | 0.001622 |
| has_postfix_classes0_test.test | RUN | 0.168296 | 0.536602 | 1.034905 | 0.001474 | 0.001652 | 0.001652 |
| has_post_increment_test.test | RUN | 0.227478 | 1.259690 | 1.949779 | 0.001640 | 0.001807 | 0.001472 |
| has_post_decrement_test.test | RUN | 0.227516 | 1.245585 | 1.969090 | 0.001302 | 0.001560 | 0.001630 |
| has_plus_test.test | RUN | 0.231311 | 0.936246 | 1.943457 | 0.001505 | 0.001681 | 0.001595 |
| has_plus_assign_test.test | RUN | 0.240584 | 0.910914 | 1.938130 | 0.001292 | 0.001783 | 0.001475 |
| has_operator_new_test.test | RUN | 0.152549 | 0.467339 | 0.843119 | 0.001509 | 0.001801 | 0.001611 |
| has_nothrow_destructor_test.test | RUN | 0.155302 | 0.511253 | 0.958260 | 0.001533 | 0.001652 | 0.001678 |
| has_nothrow_copy_test.test | RUN | 0.154610 | 0.484495 | 0.943899 | 0.001244 | 0.001580 | 0.001536 |
| has_nothrow_constr_test.test | RUN | 0.148591 | 0.485347 | 0.914377 | 0.001474 | 0.001814 | 0.001718 |
| has_nothrow_assign_test.test | RUN | 0.153665 | 0.466724 | 0.915653 | 0.001664 | 0.001816 | 0.001666 |
| has_not_equal_to_test.test | RUN | 0.232831 | 1.204522 | 1.980587 | 0.001628 | 0.001428 | 0.001713 |
| has_negate_test.test | RUN | 0.215217 | 0.855280 | 1.922446 | 0.001608 | 0.001810 | 0.001745 |
| has_multiplies_test.test | RUN | 0.232131 | 0.910384 | 1.969126 | 0.001411 | 0.001770 | 0.001883 |
| has_multiplies_assign_test.test | RUN | 0.231258 | 0.911746 | 1.935220 | 0.001700 | 0.001779 | 0.001560 |
| has_modulus_test.test | RUN | 0.229317 | 0.880177 | 1.931603 | 0.001622 | 0.001688 | 0.001693 |
| has_modulus_assign_test.test | RUN | 0.234015 | 0.881703 | 1.973832 | 0.001522 | 0.001809 | 0.001713 |
| has_minus_test.test | RUN | 0.232712 | 0.936854 | 1.961397 | 0.001352 | 0.001631 | 0.001397 |
| has_minus_assign_test.test | RUN | 0.235863 | 0.903976 | 1.975018 | 0.001646 | 0.001781 | 0.001512 |
| has_logical_or_test.test | RUN | 0.231325 | 0.901395 | 1.974441 | 0.001586 | 0.001754 | 0.001680 |
| has_logical_not_test.test | RUN | 0.222027 | 0.922282 | 1.857545 | 0.001604 | 0.001729 | 0.001685 |
| has_logical_and_test.test | RUN | 0.233450 | 0.896429 | 1.975016 | 0.001328 | 0.001644 | 0.001539 |
| has_less_test.test | RUN | 0.228426 | 1.193156 | 1.984407 | 0.001572 | 0.001735 | 0.001630 |
| has_less_equal_test.test | RUN | 0.232202 | 1.244228 | 1.924176 | 0.001294 | 0.001650 | 0.001641 |
| has_left_shift_test.test | RUN | 0.251617 | 1.119285 | 2.426950 | 0.001349 | 0.001910 | 0.001576 |
| has_left_shift_assign_test.test | RUN | 0.228012 | 0.902653 | 1.988285 | 0.001574 | 0.001762 | 0.001574 |
| has_greater_test.test | RUN | 0.234570 | 1.205263 | 1.979619 | 0.001749 | 0.001833 | 0.001755 |
| has_greater_equal_test.test | RUN | 0.231212 | 1.245853 | 1.919429 | 0.001727 | 0.001678 | 0.001628 |
| has_equal_to_test.test | RUN | 0.230809 | 1.232949 | 1.989205 | 0.001610 | 0.001463 | 0.001336 |
| has_divides_test.test | RUN | 0.228309 | 0.863846 | 1.992024 | 0.001276 | 0.001801 | 0.001522 |
| has_divides_assign_test.test | RUN | 0.225836 | 0.922631 | 1.897534 | 0.001678 | 0.001754 | 0.001584 |
| has_dereference_test.test | RUN | 0.225210 | 0.863550 | 1.864141 | 0.001606 | 0.001891 | 0.001664 |
| has_complement_test.test | RUN | 0.227170 | 1.210441 | 1.969601 | 0.001395 | 0.001830 | 0.001496 |
| has_bit_xor_test.test | RUN | 0.229682 | 0.892549 | 1.928850 | 0.001326 | 0.001603 | 0.001508 |
| has_bit_xor_assign_test.test | RUN | 0.230067 | 0.930280 | 1.916398 | 0.001748 | 0.001744 | 0.001515 |
| has_bit_or_test.test | RUN | 0.230721 | 0.880026 | 1.921978 | 0.001636 | 0.001940 | 0.001640 |
| has_bit_or_assign_test.test | RUN | 0.226951 | 0.916100 | 1.975693 | 0.001406 | 0.001744 | 0.001503 |
| has_bit_and_test.test | RUN | 0.231802 | 0.880855 | 1.984086 | 0.001406 | 0.001863 | 0.001323 |
| has_bit_and_assign_test.test | RUN | 0.228195 | 0.907378 | 1.891986 | 0.001660 | 0.001790 | 0.001378 |
| has_binary_classes9_test.test | RUN | 0.253678 | 1.037945 | 2.121340 | 0.001454 | 0.001804 | 0.001672 |
| has_binary_classes8_test.test | RUN | 0.249226 | 1.077945 | 2.168026 | 0.001281 | 0.001646 | 0.001615 |
| has_binary_classes7_test.test | RUN | 0.250583 | 1.029770 | 2.169403 | 0.001316 | 0.001778 | 0.001427 |
| has_binary_classes6_test.test | RUN | 0.247133 | 1.060744 | 2.109679 | 0.001593 | 0.001736 | 0.001499 |
| has_binary_classes5_test.test | RUN | 0.249620 | 1.023565 | 2.143641 | 0.001513 | 0.001791 | 0.001637 |
| has_binary_classes4_test.test | RUN | 0.255959 | 1.069695 | 2.160872 | 0.001248 | 0.001688 | 0.001483 |
| has_binary_classes3_test.test | RUN | 0.246852 | 1.045860 | 2.131086 | 0.001330 | 0.001793 | 0.001508 |
| has_binary_classes2_test.test | RUN | 0.250811 | 1.076403 | 2.163853 | 0.001506 | 0.001548 | 0.001289 |
| has_binary_classes1_test.test | RUN | 0.252276 | 1.086941 | 2.075994 | 0.001599 | 0.001599 | 0.001624 |
| has_binary_classes0_test.test | RUN | 0.252097 | 1.048515 | 2.108324 | 0.001701 | 0.001688 | 0.001668 |
| function_traits_test.test | RUN | 0.114734 | 0.272505 | 0.469536 | 0.001510 | 0.001703 | 0.001447 |
| floating_point_promotion_test.test | RUN | 0.109527 | 0.273830 | 0.429996 | 0.001513 | 0.001635 | 0.001598 |
| extent_test.test | RUN | 0.112745 | 0.283734 | 0.463920 | 0.001519 | 0.001618 | 0.001603 |
| enable_if_test.test | RUN | 0.102673 | 0.237119 | 0.305092 | 0.001519 | 0.001700 | 0.001713 |
| disjunction_test.test | RUN | 0.106091 | 0.247359 | 0.331977 | 0.001758 | 0.001564 | 0.001626 |
| detected_test.test | RUN | 0.106228 | 0.230168 | 0.357209 | 0.001685 | 0.001785 | 0.001485 |
| detected_or_test.test | RUN | 0.105629 | 0.242652 | 0.347799 | 0.001569 | 0.001392 | 0.001694 |
| decay_test.test | RUN | 0.275355 | 0.987319 | 2.311566 | 0.001501 | 0.001424 | 0.001340 |
| cxx14_aliases_test.test | RUN | 0.174362 | 0.364220 | 0.524221 | 0.001568 | 0.001568 | 0.001630 |
| copy_reference_test.test | RUN | 0.107516 | 0.250904 | 0.384319 | 0.001280 | 0.001560 | 0.001427 |
| copy_cv_test.test | RUN | 0.112092 | 0.263735 | 0.376100 | 0.001416 | 0.001303 | 0.001602 |
| copy_cv_ref_test.test | RUN | 0.152828 | 0.437096 | 0.892314 | 0.001523 | 0.001704 | 0.001686 |
| conjunction_test.test | RUN | 0.107309 | 0.251631 | 0.382144 | 0.001524 | 0.001276 | 0.001634 |
| conditional_test.test | RUN | 0.103985 | 0.245166 | 0.377154 | 0.001572 | 0.001660 | 0.001664 |
| common_type_test.test | RUN | 0.144085 | 0.375533 | 0.758474 | 0.001599 | 0.001714 | 0.001612 |
| common_type_sfinae_test.test | RUN | 0.105663 | 0.237427 | 0.314593 | 0.001607 | 0.001614 | 0.001580 |
| common_type_sfinae2_test.test | RUN | 0.107692 | 0.242413 | 0.344757 | 0.001487 | 0.001474 | 0.001698 |
| common_type_6_test.test | RUN | 0.111470 | 0.255656 | 0.379716 | 0.001535 | 0.001519 | 0.001558 |
| common_type_5_test.test | RUN | 0.112186 | 0.255401 | 0.388287 | 0.001335 | 0.001685 | 0.001514 |
| common_type_4_test.test | RUN | 0.116743 | 0.279466 | 0.452534 | 0.001670 | 0.001539 | 0.001481 |
| common_type_3_test.test | RUN | 0.106084 | 0.232068 | 0.321794 | 0.001484 | 0.001530 | 0.001674 |
| common_type_2_test.test | RUN | 0.139576 | 0.377882 | 0.711718 | 0.001601 | 0.001830 | 0.001640 |
| alignment_of_test.test | RUN | 0.116540 | 0.297474 | 0.454301 | 0.001563 | 0.001550 | 0.001553 |
| alignment_of_a2_test.test | RUN | 0.114261 | 0.300499 | 0.473336 | 0.001610 | 0.001652 | 0.001132 |
| aligned_storage_test.test | RUN | 0.118617 | 0.305644 | 0.412959 | 0.001603 | 0.001797 | 0.001706 |
| aligned_storage_empy_test.test | RUN | 0.135954 | 0.333861 | 0.551132 | 0.001490 | 0.001849 | 0.001566 |
| aligned_storage_a2_test.test | RUN | 0.115262 | 0.281838 | 0.422479 | 0.001506 | 0.001998 | 0.001909 |
| add_volatile_test.test | RUN | 0.249563 | 0.866532 | 2.176594 | 0.001605 | 0.001722 | 0.001680 |
| add_rvalue_reference_test.test | RUN | 0.279578 | 0.982535 | 2.477515 | 0.001552 | 0.001639 | 0.001627 |
| add_reference_test.test | RUN | 0.269450 | 0.954023 | 2.473117 | 0.001404 | 0.001851 | 0.001630 |
| add_pointer_test.test | RUN | 0.175621 | 0.540376 | 1.269458 | 0.001487 | 0.001687 | 0.001642 |
| add_lvalue_reference_test.test | RUN | 0.269052 | 0.943681 | 2.459764 | 0.001533 | 0.001630 | 0.001558 |
| add_cv_test.test | RUN | 0.253101 | 0.877078 | 2.351362 | 0.001514 | 0.001675 | 0.001672 |
| add_const_test.test | RUN | 0.252271 | 0.931931 | 2.272903 | 0.001468 | 0.001704 | 0.001594 |
| is_virtual_base_of_fail.test | COMPILE_FAIL | 0.102968 | 0.236091 | 0.336473 | — | — | — |
| is_stateless_fail.test | COMPILE_FAIL | 0.106680 | 0.240939 | 0.352305 | — | — | — |
| is_polymorphic_fail.test | COMPILE_FAIL | 0.099109 | 0.220990 | 0.335930 | — | — | — |
| is_nothrow_move_constructible_fail.test | COMPILE_FAIL | 0.099948 | 0.216419 | 0.327074 | — | — | — |
| is_nothrow_move_assignable_fail.test | COMPILE_FAIL | 0.100402 | 0.221127 | 0.312599 | — | — | — |
| is_list_constructible_fail.test | COMPILE_FAIL | 0.099266 | 0.229866 | 0.294953 | — | — | — |
| is_empty_fail.test | COMPILE_FAIL | 0.101958 | 0.221694 | 0.323779 | — | — | — |
| is_destructible_fail.test | COMPILE_FAIL | 0.100319 | 0.226317 | 0.316238 | — | — | — |
| is_default_constructible_fail.test | COMPILE_FAIL | 0.099700 | 0.222209 | 0.331894 | — | — | — |
| is_copy_constructible_fail.test | COMPILE_FAIL | 0.098905 | 0.231617 | 0.332865 | — | — | — |
| is_copy_assignable_fail.test | COMPILE_FAIL | 0.100465 | 0.219114 | 0.314975 | — | — | — |
| is_convertible_fail.test | COMPILE_FAIL | 0.100573 | 0.224813 | 0.316607 | — | — | — |
| is_convertible2_fail.test | COMPILE_FAIL | 0.101063 | 0.222594 | 0.327579 | — | — | — |
| is_constructible_fail.test | COMPILE_FAIL | 0.098859 | 0.225905 | 0.334439 | — | — | — |
| is_base_of_fail.test | COMPILE_FAIL | 0.099761 | 0.226289 | 0.316178 | — | — | — |
| is_assignable_fail.test | COMPILE_FAIL | 0.100407 | 0.223918 | 0.326161 | — | — | — |
| has_nothrow_destruct_fail.test | COMPILE_FAIL | 0.101745 | 0.222349 | 0.316691 | — | — | — |
| has_nothrow_copy_fail.test | COMPILE_FAIL | 0.098728 | 0.229472 | 0.334216 | — | — | — |
| has_nothrow_cons_fail.test | COMPILE_FAIL | 0.100450 | 0.219556 | 0.323957 | — | — | — |
| has_nothrow_assign_fail.test | COMPILE_FAIL | 0.099210 | 0.225259 | 0.318437 | — | — | — |
| common_type_fail.test | COMPILE_FAIL | 0.099613 | 0.224136 | 0.327165 | — | — | — |
| common_type2_fail.test | COMPILE_FAIL | 0.100456 | 0.222426 | 0.331000 | — | — | — |
| has_nothrow_assign_test_no_intrinsics.test | RUN | 0.154018 | 0.481680 | 0.945425 | 0.001640 | 0.001860 | 0.001635 |
| has_nothrow_constr_test_no_intrinsics.test | RUN | 0.149575 | 0.497511 | 0.894025 | 0.001658 | 0.001654 | 0.001675 |
| has_nothrow_copy_test_no_intrinsics.test | RUN | 0.153941 | 0.499713 | 0.932013 | 0.001272 | 0.001303 | 0.001608 |
| is_nothrow_move_assignable_test_no_intrinsics.test | RUN | 0.153372 | 0.477322 | 0.921911 | 0.001251 | 0.001281 | 0.001175 |
| is_nothrow_move_constructible_test_no_intrinsics.test | RUN | 0.094707 | 0.352931 | 0.549773 | 0.001228 | 0.001262 | 0.001203 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.966×† | 0.950×, 0.981× | 0.932× |
| clang | 1.050× | 1.067×, 1.033× | 0.954× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1361 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43632677224).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| add_const_test.test | 10 | 0.000964s | 0.000945s | 0.000968s | byte equality observed |
| add_cv_test.test | 10 | 0.000985s | 0.000969s | 0.000999s | byte equality observed |
| add_lvalue_reference_test.test | 10 | 0.000964s | 0.000982s | 0.000966s | byte equality observed |
| add_pointer_test.test | 10 | 0.000982s | 0.000977s | 0.000988s | byte equality observed |
| add_reference_test.test | 10 | 0.000962s | 0.000947s | 0.000961s | byte equality observed |
| add_rvalue_reference_test.test | 10 | 0.000970s | 0.000955s | 0.000984s | byte equality observed |
| add_volatile_test.test | 10 | 0.000982s | 0.001003s | 0.000967s | byte equality observed |
| aligned_storage_a2_test.test | 10 | 0.001066s | 0.001066s | 0.001079s | byte equality observed |
| aligned_storage_empy_test.test | 10 | 0.000963s | 0.000985s | 0.000977s | byte equality observed |
| aligned_storage_test.test | 10 | 0.001075s | 0.001067s | 0.001081s | byte equality observed |
| alignment_of_a2_test.test | 10 | 0.000987s | 0.000970s | 0.000970s | byte equality observed |
| alignment_of_test.test | 10 | 0.000994s | 0.000979s | 0.000985s | byte equality observed |
| common_type_2_test.test | 10 | 0.000969s | 0.001016s | 0.000978s | byte equality observed |
| common_type_3_test.test | 10 | 0.000978s | 0.000964s | 0.000992s | byte equality observed |
| common_type_4_test.test | 10 | 0.000988s | 0.000990s | 0.000969s | byte equality observed |
| common_type_5_test.test | 10 | 0.000989s | 0.000972s | 0.000971s | byte equality observed |
| common_type_6_test.test | 10 | 0.000976s | 0.000942s | 0.001016s | byte equality observed |
| common_type_sfinae2_test.test | 10 | 0.000972s | 0.000976s | 0.001031s | byte equality observed |
| common_type_sfinae_test.test | 10 | 0.000956s | 0.000959s | 0.001042s | byte equality observed |
| common_type_test.test | 10 | 0.000980s | 0.000977s | 0.001050s | byte equality observed |
| conditional_test.test | 10 | 0.000953s | 0.000974s | 0.000982s | byte equality observed |
| conjunction_test.test | 10 | 0.000996s | 0.000988s | 0.000993s | byte equality observed |
| copy_cv_ref_test.test | 10 | 0.000976s | 0.000955s | 0.000998s | byte equality observed |
| copy_cv_test.test | 10 | 0.000972s | 0.000961s | 0.000978s | byte equality observed |
| copy_reference_test.test | 10 | 0.000984s | 0.001006s | 0.001015s | byte equality observed |
| cxx14_aliases_test.test | 10 | 0.000974s | 0.001017s | 0.001002s | byte equality observed |
| decay_test.test | 10 | 0.000992s | 0.000991s | 0.001011s | byte equality observed |
| detected_or_test.test | 10 | 0.000989s | 0.000986s | 0.001055s | byte equality observed |
| detected_test.test | 10 | 0.000994s | 0.000978s | 0.001031s | byte equality observed |
| disjunction_test.test | 10 | 0.000997s | 0.000985s | 0.001074s | byte equality observed |
| enable_if_test.test | 10 | 0.000963s | 0.000967s | 0.001042s | byte equality observed |
| extent_test.test | 10 | 0.000973s | 0.000987s | 0.001074s | byte equality observed |
| floating_point_promotion_test.test | 10 | 0.001013s | 0.000964s | 0.001070s | byte equality observed |
| function_traits_test.test | 10 | 0.001000s | 0.000973s | 0.001090s | byte equality observed |
| has_binary_classes0_test.test | 10 | 0.000985s | 0.000975s | 0.001074s | byte equality observed |
| has_binary_classes1_test.test | 10 | 0.000975s | 0.000975s | 0.001046s | byte equality observed |
| has_binary_classes2_test.test | 10 | 0.001013s | 0.000958s | 0.001077s | byte equality observed |
| has_binary_classes3_test.test | 10 | 0.000978s | 0.000969s | 0.001054s | byte equality observed |
| has_binary_classes4_test.test | 10 | 0.000974s | 0.000968s | 0.001041s | byte equality observed |
| has_binary_classes5_test.test | 10 | 0.000964s | 0.000949s | 0.001054s | byte equality observed |
| has_binary_classes6_test.test | 10 | 0.000961s | 0.000967s | 0.001052s | byte equality observed |
| has_binary_classes7_test.test | 10 | 0.000974s | 0.000961s | 0.001049s | byte equality observed |
| has_binary_classes8_test.test | 10 | 0.000976s | 0.000969s | 0.001093s | byte equality observed |
| has_binary_classes9_test.test | 10 | 0.000987s | 0.000958s | 0.001073s | byte equality observed |
| has_bit_and_assign_test.test | 10 | 0.000972s | 0.000976s | 0.001070s | byte equality observed |
| has_bit_and_test.test | 10 | 0.000984s | 0.000967s | 0.001063s | byte equality observed |
| has_bit_or_assign_test.test | 10 | 0.000995s | 0.000981s | 0.001054s | byte equality observed |
| has_bit_or_test.test | 10 | 0.000986s | 0.000975s | 0.001112s | byte equality observed |
| has_bit_xor_assign_test.test | 10 | 0.000959s | 0.000972s | 0.001081s | byte equality observed |
| has_bit_xor_test.test | 10 | 0.000973s | 0.000975s | 0.001061s | byte equality observed |
| has_complement_test.test | 10 | 0.000973s | 0.000952s | 0.001085s | byte equality observed |
| has_dereference_test.test | 10 | 0.000968s | 0.000973s | 0.001043s | byte equality observed |
| has_divides_assign_test.test | 10 | 0.001006s | 0.000961s | 0.001064s | byte equality observed |
| has_divides_test.test | 10 | 0.000958s | 0.000955s | 0.001068s | byte equality observed |
| has_equal_to_test.test | 10 | 0.000973s | 0.000985s | 0.001070s | byte equality observed |
| has_greater_equal_test.test | 10 | 0.001007s | 0.000982s | 0.001068s | byte equality observed |
| has_greater_test.test | 10 | 0.000955s | 0.000968s | 0.001072s | byte equality observed |
| has_left_shift_assign_test.test | 10 | 0.000966s | 0.000976s | 0.001040s | byte equality observed |
| has_left_shift_test.test | 10 | 0.000972s | 0.000989s | 0.001065s | byte equality observed |
| has_less_equal_test.test | 10 | 0.000978s | 0.000960s | 0.001077s | byte equality observed |
| has_less_test.test | 10 | 0.000984s | 0.000967s | 0.001080s | byte equality observed |
| has_logical_and_test.test | 10 | 0.000958s | 0.001006s | 0.001063s | byte equality observed |
| has_logical_not_test.test | 10 | 0.000975s | 0.000967s | 0.001033s | byte equality observed |
| has_logical_or_test.test | 10 | 0.000996s | 0.000955s | 0.001033s | byte equality observed |
| has_minus_assign_test.test | 10 | 0.000989s | 0.000989s | 0.001083s | byte equality observed |
| has_minus_test.test | 10 | 0.001006s | 0.000987s | 0.001055s | byte equality observed |
| has_modulus_assign_test.test | 10 | 0.000997s | 0.000991s | 0.001067s | byte equality observed |
| has_modulus_test.test | 10 | 0.001008s | 0.000967s | 0.001065s | byte equality observed |
| has_multiplies_assign_test.test | 10 | 0.000981s | 0.000986s | 0.001057s | byte equality observed |
| has_multiplies_test.test | 10 | 0.001023s | 0.000959s | 0.001068s | byte equality observed |
| has_negate_test.test | 10 | 0.001044s | 0.000972s | 0.001053s | byte equality observed |
| has_not_equal_to_test.test | 10 | 0.001014s | 0.000965s | 0.001056s | byte equality observed |
| has_nothrow_assign_test.test | 10 | 0.001001s | 0.000979s | 0.001034s | byte equality observed |
| has_nothrow_assign_test_no_intrinsics.test | 10 | 0.001007s | 0.000977s | 0.001065s | byte equality observed |
| has_nothrow_constr_test.test | 10 | 0.001009s | 0.000966s | 0.001075s | byte equality observed |
| has_nothrow_constr_test_no_intrinsics.test | 10 | 0.000984s | 0.000977s | 0.001060s | byte equality observed |
| has_nothrow_copy_test.test | 10 | 0.001023s | 0.000972s | 0.001037s | byte equality observed |
| has_nothrow_copy_test_no_intrinsics.test | 10 | 0.001004s | 0.000980s | 0.001055s | byte equality observed |
| has_nothrow_destructor_test.test | 10 | 0.001016s | 0.000991s | 0.001044s | byte equality observed |
| has_operator_new_test.test | 10 | 0.000999s | 0.000997s | 0.001061s | byte equality observed |
| has_plus_assign_test.test | 10 | 0.001008s | 0.000949s | 0.001100s | byte equality observed |
| has_plus_test.test | 10 | 0.001022s | 0.000976s | 0.001058s | byte equality observed |
| has_post_decrement_test.test | 10 | 0.001025s | 0.000954s | 0.001083s | byte equality observed |
| has_post_increment_test.test | 10 | 0.001025s | 0.000957s | 0.001073s | byte equality observed |
| has_postfix_classes0_test.test | 10 | 0.000964s | 0.000973s | 0.001063s | byte equality observed |
| has_postfix_classes1_test.test | 10 | 0.001019s | 0.001016s | 0.001064s | byte equality observed |
| has_postfix_classes2_test.test | 10 | 0.001003s | 0.000945s | 0.001055s | byte equality observed |
| has_postfix_classes3_test.test | 10 | 0.001010s | 0.000974s | 0.001069s | byte equality observed |
| has_pre_decrement_test.test | 10 | 0.001011s | 0.000958s | 0.001051s | byte equality observed |
| has_pre_increment_test.test | 10 | 0.001030s | 0.000959s | 0.001060s | byte equality observed |
| has_prefix_classes0_test.test | 10 | 0.001001s | 0.000985s | 0.001039s | byte equality observed |
| has_prefix_classes1_test.test | 10 | 0.001040s | 0.000975s | 0.001062s | byte equality observed |
| has_prefix_classes2_test.test | 10 | 0.001021s | 0.000972s | 0.001069s | byte equality observed |
| has_prefix_classes3_test.test | 10 | 0.001040s | 0.000981s | 0.001048s | byte equality observed |
| has_right_shift_assign_test.test | 10 | 0.001058s | 0.000965s | 0.001067s | byte equality observed |
| has_right_shift_test.test | 10 | 0.001053s | 0.000987s | 0.001057s | byte equality observed |
| has_trivial_assign_test.test | 10 | 0.001115s | 0.001038s | 0.001118s | byte equality observed |
| has_trivial_constr_test.test | 10 | 0.001128s | 0.001086s | 0.001132s | native test oracle; output varies |
| has_trivial_copy_test.test | 10 | 0.001102s | 0.001024s | 0.001151s | native test oracle; output varies |
| has_trivial_destructor_test.test | 10 | 0.001072s | 0.000997s | 0.001065s | byte equality observed |
| has_trivial_move_assign_test.test | 10 | 0.001029s | 0.000989s | 0.001056s | byte equality observed |
| has_trivial_move_constructor_test.test | 10 | 0.001063s | 0.000968s | 0.001054s | byte equality observed |
| has_unary_minus_test.test | 10 | 0.001069s | 0.001022s | 0.001066s | byte equality observed |
| has_unary_plus_test.test | 10 | 0.001068s | 0.000960s | 0.001088s | byte equality observed |
| has_virtual_destructor_test.test | 10 | 0.001077s | 0.001002s | 0.001090s | byte equality observed |
| integral_constant_test.test | 10 | 0.000480s | 0.000475s | 0.001047s | byte equality observed |
| is_abstract_test.test | 10 | 0.001072s | 0.000997s | 0.001048s | byte equality observed |
| is_arithmetic_test.test | 10 | 0.001027s | 0.000977s | 0.001070s | byte equality observed |
| is_array_test.test | 10 | 0.001053s | 0.000998s | 0.001041s | byte equality observed |
| is_assignable_test.test | 10 | 0.001055s | 0.000973s | 0.001057s | byte equality observed |
| is_base_and_derived_test.test | 10 | 0.001071s | 0.000984s | 0.001081s | byte equality observed |
| is_base_of_test.test | 10 | 0.001072s | 0.000981s | 0.001054s | byte equality observed |
| is_bounded_array_test.test | 10 | 0.001042s | 0.000962s | 0.001054s | byte equality observed |
| is_class_test.test | 10 | 0.001069s | 0.000980s | 0.001085s | byte equality observed |
| is_complete_test.test | 10 | 0.001082s | 0.000985s | 0.001050s | byte equality observed |
| is_complex_test.test | 10 | 0.001045s | 0.001016s | 0.001068s | byte equality observed |
| is_compound_test.test | 10 | 0.001058s | 0.001016s | 0.001066s | byte equality observed |
| is_const_test.test | 10 | 0.001030s | 0.000952s | 0.001067s | byte equality observed |
| is_constructible_test.test | 10 | 0.001056s | 0.000967s | 0.001070s | byte equality observed |
| is_convertible_test.test | 10 | 0.001048s | 0.000977s | 0.001068s | byte equality observed |
| is_copy_assignable_test.test | 10 | 0.001103s | 0.000970s | 0.001061s | byte equality observed |
| is_copy_constructible_test.test | 10 | 0.001097s | 0.000972s | 0.001074s | byte equality observed |
| is_default_constr_test.test | 10 | 0.001090s | 0.000966s | 0.001073s | byte equality observed |
| is_destructible_test.test | 10 | 0.001109s | 0.001020s | 0.001112s | byte equality observed |
| is_detected_exact_test.test | 10 | 0.001106s | 0.001006s | 0.001071s | byte equality observed |
| is_detected_test.test | 10 | 0.001109s | 0.000963s | 0.001113s | byte equality observed |
| is_empty_test.test | 10 | 0.001128s | 0.000972s | 0.001134s | byte equality observed |
| is_enum_test.test | 10 | 0.001107s | 0.000962s | 0.001136s | byte equality observed |
| is_final_test.test | 10 | 0.001115s | 0.000982s | 0.001129s | byte equality observed |
| is_float_test.test | 10 | 0.001125s | 0.001008s | 0.001140s | byte equality observed |
| is_floating_point_test.test | 10 | 0.001131s | 0.001001s | 0.001152s | byte equality observed |
| is_function_test.test | 10 | 0.001132s | 0.000958s | 0.001120s | byte equality observed |
| is_fundamental_test.test | 10 | 0.001144s | 0.000946s | 0.001155s | byte equality observed |
| is_integral_test.test | 10 | 0.001114s | 0.001003s | 0.001143s | byte equality observed |
| is_list_constructible_test.test | 10 | 0.001116s | 0.000967s | 0.001157s | byte equality observed |
| is_lvalue_reference_test.test | 10 | 0.001108s | 0.000980s | 0.001130s | byte equality observed |
| is_member_func_test.test | 10 | 0.001125s | 0.001005s | 0.001144s | byte equality observed |
| is_member_obj_test.test | 10 | 0.001122s | 0.000963s | 0.001151s | byte equality observed |
| is_member_pointer_test.test | 10 | 0.001119s | 0.000985s | 0.001125s | byte equality observed |
| is_noncopyable_test.test | 10 | 0.001121s | 0.001006s | 0.001131s | byte equality observed |
| is_nothrow_move_assignable_test.test | 10 | 0.001108s | 0.000980s | 0.001134s | byte equality observed |
| is_nothrow_move_assignable_test_no_intrinsics.test | 10 | 0.001128s | 0.000974s | 0.001147s | byte equality observed |
| is_nothrow_move_constructible_test.test | 10 | 0.001119s | 0.000973s | 0.001151s | byte equality observed |
| is_nothrow_move_constructible_test_no_intrinsics.test | 10 | 0.001134s | 0.000996s | 0.001132s | byte equality observed |
| is_nothrow_swappable_test.test | 10 | 0.001126s | 0.000990s | 0.001130s | byte equality observed |
| is_object_test.test | 10 | 0.001118s | 0.000987s | 0.001127s | byte equality observed |
| is_pod_test.test | 10 | 0.001123s | 0.000989s | 0.001123s | byte equality observed |
| is_pointer_test.test | 10 | 0.001109s | 0.000966s | 0.001121s | byte equality observed |
| is_polymorphic_test.test | 10 | 0.001106s | 0.000953s | 0.001120s | byte equality observed |
| is_reference_test.test | 10 | 0.001125s | 0.000955s | 0.001133s | byte equality observed |
| is_rvalue_reference_test.test | 10 | 0.001138s | 0.001003s | 0.001137s | byte equality observed |
| is_same_test.test | 10 | 0.001126s | 0.001001s | 0.001148s | byte equality observed |
| is_scalar_test.test | 10 | 0.001136s | 0.001058s | 0.001143s | byte equality observed |
| is_scoped_enum_test.test | 10 | 0.001124s | 0.001032s | 0.001116s | byte equality observed |
| is_signed_test.test | 10 | 0.001133s | 0.001040s | 0.001128s | byte equality observed |
| is_stateless_test.test | 10 | 0.001129s | 0.001051s | 0.001128s | byte equality observed |
| is_swappable_test.test | 10 | 0.001133s | 0.001098s | 0.001142s | byte equality observed |
| is_trivially_copyable_test.test | 10 | 0.001165s | 0.001146s | 0.001173s | byte equality observed |
| is_unbounded_array_test.test | 10 | 0.001124s | 0.001084s | 0.001157s | byte equality observed |
| is_union_test.test | 10 | 0.001114s | 0.001103s | 0.001145s | byte equality observed |
| is_unscoped_enum_test.test | 10 | 0.001151s | 0.001110s | 0.001133s | byte equality observed |
| is_unsigned_test.test | 10 | 0.001136s | 0.001107s | 0.001146s | byte equality observed |
| is_virtual_base_of_test.test | 10 | 0.001123s | 0.001117s | 0.001133s | byte equality observed |
| is_void_test.test | 10 | 0.001122s | 0.001103s | 0.001133s | byte equality observed |
| is_volatile_test.test | 10 | 0.001139s | 0.001149s | 0.001134s | byte equality observed |
| make_signed_test.test | 10 | 0.001137s | 0.001111s | 0.001143s | byte equality observed |
| make_unsigned_test.test | 10 | 0.001132s | 0.001136s | 0.001147s | byte equality observed |
| make_void_test.test | 10 | 0.001156s | 0.001147s | 0.001142s | byte equality observed |
| mpl_interop_test1.test | 10 | 0.000507s | 0.000495s | 0.001139s | byte equality observed |
| mpl_interop_test2.test | 10 | 0.000504s | 0.000501s | 0.001133s | byte equality observed |
| mpl_interop_test3.test | 10 | 0.000502s | 0.000505s | 0.001147s | byte equality observed |
| negation_test.test | 10 | 0.001182s | 0.001156s | 0.001143s | byte equality observed |
| promote_basic_test.test | 10 | 0.000509s | 0.000508s | 0.001137s | byte equality observed |
| promote_enum_msvc_bug_test.test | 10 | 0.000512s | 0.000519s | 0.001120s | byte equality observed |
| promote_enum_test.test | 10 | 0.000507s | 0.000503s | 0.001134s | byte equality observed |
| promote_mpl_test.test | 10 | 0.000508s | 0.000512s | 0.001133s | byte equality observed |
| rank_test.test | 10 | 0.001150s | 0.001126s | 0.001141s | byte equality observed |
| remove_all_extents_test.test | 10 | 0.001155s | 0.001131s | 0.001176s | byte equality observed |
| remove_bounds_test.test | 10 | 0.001159s | 0.001141s | 0.001137s | byte equality observed |
| remove_const_test.test | 10 | 0.001136s | 0.001113s | 0.001160s | byte equality observed |
| remove_cv_ref_test.test | 10 | 0.001137s | 0.001153s | 0.001137s | byte equality observed |
| remove_cv_test.test | 10 | 0.001128s | 0.001117s | 0.001139s | byte equality observed |
| remove_extent_test.test | 10 | 0.001132s | 0.001138s | 0.001142s | byte equality observed |
| remove_pointer_test.test | 10 | 0.001143s | 0.001134s | 0.001147s | byte equality observed |
| remove_reference_test.test | 10 | 0.001118s | 0.001122s | 0.001145s | byte equality observed |
| remove_volatile_test.test | 10 | 0.001131s | 0.001138s | 0.001121s | byte equality observed |
| tricky_abstract_type_test.test | 10 | 0.001134s | 0.001125s | 0.001153s | byte equality observed |
| tricky_add_pointer_test.test | 10 | 0.001123s | 0.001147s | 0.001151s | byte equality observed |
| tricky_function_type_test.test | 10 | 0.001119s | 0.001122s | 0.001134s | byte equality observed |
| tricky_incomplete_type_test.test | 10 | 0.001126s | 0.001118s | 0.001157s | byte equality observed |
| tricky_is_enum_test.test | 10 | 0.001143s | 0.001122s | 0.001139s | byte equality observed |
| tricky_partial_spec_test.test | 10 | 0.001147s | 0.001109s | 0.001158s | byte equality observed |
| tricky_rvalue_test.test | 10 | 0.001147s | 0.001150s | 0.001159s | byte equality observed |
| type_identity_test.test | 10 | 0.001143s | 0.001125s | 0.001152s | byte equality observed |
| type_traits_test.test | 10 | 0.000506s | 0.000503s | 0.001125s | byte equality observed |
| type_with_alignment_test.test | 10 | 0.001275s | 0.001257s | 0.001296s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43632677224).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
