# libs/type_traits/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| type_with_alignment_test.test | RUN | 0.132834 | 0.366326 | 0.527798 | 0.001491 | 0.001653 | 0.001447 |
| type_traits_test.test | RUN | 0.183265 | 0.389775 | 0.512405 | 0.000643 | 0.000643 | 0.001402 |
| type_identity_test.test | RUN | 0.355472 | 1.344485 | 2.818442 | 0.001499 | 0.001657 | 0.001509 |
| tricky_rvalue_test.test | RUN | 0.122479 | 0.291803 | 0.406245 | 0.001572 | 0.001588 | 0.001481 |
| tricky_partial_spec_test.test | RUN | 0.148274 | 0.430677 | 0.671868 | 0.001488 | 0.001552 | 0.001495 |
| tricky_is_enum_test.test | RUN | 0.118872 | 0.286469 | 0.363893 | 0.001468 | 0.001505 | 0.001693 |
| tricky_incomplete_type_test.test | RUN | 0.188464 | 0.448477 | 0.587745 | 0.001613 | 0.001487 | 0.001381 |
| tricky_function_type_test.test | RUN | 0.153407 | 0.468623 | 0.735511 | 0.001658 | 0.001381 | 0.001537 |
| tricky_add_pointer_test.test | RUN | 0.234920 | 0.823008 | 1.593243 | 0.001684 | 0.001638 | 0.001566 |
| tricky_abstract_type_test.test | RUN | 0.124467 | 0.288588 | 0.376061 | 0.001494 | 0.001588 | 0.001520 |
| remove_volatile_test.test | RUN | 0.312553 | 1.178836 | 2.457758 | 0.001627 | 0.001646 | 0.001615 |
| remove_reference_test.test | RUN | 0.326736 | 1.214848 | 2.613131 | 0.001656 | 0.001643 | 0.001530 |
| remove_pointer_test.test | RUN | 0.342377 | 1.297632 | 2.758054 | 0.001621 | 0.001493 | 0.001465 |
| remove_extent_test.test | RUN | 0.327997 | 1.229557 | 2.618001 | 0.001515 | 0.001621 | 0.001470 |
| remove_cv_test.test | RUN | 0.311664 | 1.231820 | 2.624536 | 0.001604 | 0.001702 | 0.001512 |
| remove_cv_ref_test.test | RUN | 0.689786 | 3.012586 | 6.423301 | 0.001637 | 0.001513 | 0.001526 |
| remove_const_test.test | RUN | 0.316282 | 1.153425 | 2.460058 | 0.001572 | 0.001631 | 0.001504 |
| remove_bounds_test.test | RUN | 0.329891 | 1.250727 | 2.608867 | 0.001598 | 0.001661 | 0.001493 |
| remove_all_extents_test.test | RUN | 0.328674 | 1.220263 | 2.644625 | 0.001630 | 0.001505 | 0.001454 |
| rank_test.test | RUN | 0.118779 | 0.311248 | 0.385528 | 0.001534 | 0.001562 | 0.001566 |
| promote_mpl_test.test | RUN | 0.109830 | 0.284508 | 0.289767 | 0.000613 | 0.000647 | 0.001481 |
| promote_enum_test.test | RUN | 0.022019 | 0.065977 | 0.067062 | 0.000636 | 0.000748 | 0.001381 |
| promote_enum_msvc_bug_test.test | RUN | 0.020121 | 0.056647 | 0.057032 | 0.000592 | 0.000762 | 0.001462 |
| promote_basic_test.test | RUN | 0.025998 | 0.075896 | 0.066925 | 0.000591 | 0.000668 | 0.001306 |
| negation_test.test | RUN | 0.117765 | 0.285301 | 0.343864 | 0.001463 | 0.001460 | 0.001482 |
| mpl_interop_test3.test | RUN | 0.102493 | 0.256982 | 0.277833 | 0.000628 | 0.000584 | 0.001614 |
| mpl_interop_test2.test | RUN | 0.034598 | 0.069798 | 0.068122 | 0.000588 | 0.000626 | 0.001511 |
| mpl_interop_test1.test | RUN | 0.017574 | 0.051476 | 0.052255 | 0.000649 | 0.000665 | 0.001378 |
| make_void_test.test | RUN | 0.121056 | 0.296583 | 0.409383 | 0.001631 | 0.001562 | 0.001527 |
| make_unsigned_test.test | RUN | 0.142631 | 0.400017 | 0.582074 | 0.001543 | 0.001456 | 0.001478 |
| make_signed_test.test | RUN | 0.141733 | 0.402869 | 0.549114 | 0.001320 | 0.001514 | 0.001506 |
| is_volatile_test.test | RUN | 0.127188 | 0.337030 | 0.454861 | 0.001413 | 0.001483 | 0.001501 |
| is_void_test.test | RUN | 0.122263 | 0.316410 | 0.436767 | 0.001715 | 0.001683 | 0.001410 |
| is_virtual_base_of_test.test | RUN | 0.143213 | 0.405497 | 0.589300 | 0.001369 | 0.001444 | 0.001390 |
| is_unsigned_test.test | RUN | 0.127959 | 0.329090 | 0.441888 | 0.001615 | 0.001492 | 0.001502 |
| is_unscoped_enum_test.test | RUN | 0.122581 | 0.298144 | 0.375306 | 0.001323 | 0.001549 | 0.001663 |
| is_union_test.test | RUN | 0.131918 | 0.372725 | 0.546724 | 0.001592 | 0.001644 | 0.001640 |
| is_unbounded_array_test.test | RUN | 0.122850 | 0.319678 | 0.420283 | 0.001690 | 0.001796 | 0.001339 |
| is_trivially_copyable_test.test | RUN | 0.195933 | 0.655619 | 1.067806 | 0.001658 | 0.001558 | 0.001434 |
| is_swappable_test.test | RUN | 0.159722 | 0.494229 | 0.792088 | 0.001425 | 0.001472 | 0.001434 |
| is_stateless_test.test | RUN | 0.183153 | 0.575080 | 0.900917 | 0.001596 | 0.001452 | 0.001506 |
| is_signed_test.test | RUN | 0.123647 | 0.337110 | 0.441263 | 0.001112 | 0.001448 | 0.001240 |
| is_scoped_enum_test.test | RUN | 0.121434 | 0.292115 | 0.371622 | 0.001439 | 0.001546 | 0.001465 |
| is_scalar_test.test | RUN | 0.162550 | 0.517441 | 0.808011 | 0.001658 | 0.001780 | 0.001567 |
| is_same_test.test | RUN | 0.124108 | 0.305834 | 0.425616 | 0.001594 | 0.001440 | 0.001579 |
| is_rvalue_reference_test.test | RUN | 0.129820 | 0.346503 | 0.494318 | 0.001284 | 0.001805 | 0.001681 |
| is_reference_test.test | RUN | 0.130361 | 0.357514 | 0.499996 | 0.001475 | 0.001441 | 0.001472 |
| is_polymorphic_test.test | RUN | 0.132706 | 0.372067 | 0.520780 | 0.001485 | 0.001728 | 0.001773 |
| is_pointer_test.test | RUN | 0.132197 | 0.366569 | 0.507408 | 0.001533 | 0.001479 | 0.001540 |
| is_pod_test.test | RUN | 0.168758 | 0.572889 | 0.930808 | 0.001510 | 0.001628 | 0.001552 |
| is_object_test.test | RUN | 0.120689 | 0.307715 | 0.400376 | 0.001334 | 0.001660 | 0.001573 |
| is_nothrow_swappable_test.test | RUN | 0.178869 | 0.543188 | 0.889688 | 0.001538 | 0.001683 | 0.001630 |
| is_nothrow_move_constructible_test.test | RUN | 0.166646 | 0.558579 | 0.932266 | 0.001324 | 0.001471 | 0.001522 |
| is_nothrow_move_assignable_test.test | RUN | 0.159389 | 0.565243 | 0.883988 | 0.001340 | 0.001456 | 0.001377 |
| is_noncopyable_test.test | RUN | 0.117361 | 0.305117 | 0.403814 | 0.001432 | 0.001562 | 0.001442 |
| is_member_pointer_test.test | RUN | 0.121188 | 0.316068 | 0.416665 | 0.001612 | 0.001666 | 0.001618 |
| is_member_obj_test.test | RUN | 0.124959 | 0.318507 | 0.425696 | 0.001279 | 0.001581 | 0.001484 |
| is_member_func_test.test | RUN | 0.125860 | 0.334839 | 0.457396 | 0.001430 | 0.001372 | 0.001597 |
| is_lvalue_reference_test.test | RUN | 0.129557 | 0.352537 | 0.489125 | 0.001342 | 0.001397 | 0.001585 |
| is_list_constructible_test.test | RUN | 0.152328 | 0.413661 | 0.548216 | 0.001478 | 0.001737 | 0.001562 |
| is_integral_test.test | RUN | 0.147404 | 0.486717 | 0.804235 | 0.001521 | 0.001462 | 0.001463 |
| is_fundamental_test.test | RUN | 0.155332 | 0.509402 | 0.819664 | 0.001189 | 0.001643 | 0.001426 |
| is_function_test.test | RUN | 0.129322 | 0.335714 | 0.442972 | 0.001390 | 0.001429 | 0.001646 |
| is_floating_point_test.test | RUN | 0.132398 | 0.355111 | 0.497390 | 0.001490 | 0.001684 | 0.001571 |
| is_float_test.test | RUN | 0.131397 | 0.363759 | 0.503964 | 0.001513 | 0.001638 | 0.001475 |
| is_final_test.test | RUN | 0.129891 | 0.367458 | 0.505535 | 0.001424 | 0.001455 | 0.001443 |
| is_enum_test.test | RUN | 0.119755 | 0.305368 | 0.402974 | 0.001280 | 0.001564 | 0.001613 |
| is_empty_test.test | RUN | 0.131991 | 0.329400 | 0.458937 | 0.001488 | 0.001883 | 0.001392 |
| is_detected_test.test | RUN | 0.114207 | 0.282792 | 0.362951 | 0.001730 | 0.001639 | 0.001574 |
| is_detected_exact_test.test | RUN | 0.114330 | 0.279841 | 0.370352 | 0.001577 | 0.001461 | 0.001560 |
| is_destructible_test.test | RUN | 0.166066 | 0.551733 | 0.900675 | 0.001166 | 0.001799 | 0.001599 |
| is_default_constr_test.test | RUN | 0.171963 | 0.570375 | 0.922552 | 0.001576 | 0.001533 | 0.001594 |
| is_copy_constructible_test.test | RUN | 0.172959 | 0.609630 | 0.964930 | 0.001619 | 0.001454 | 0.001545 |
| is_copy_assignable_test.test | RUN | 0.173258 | 0.584643 | 0.934182 | 0.001539 | 0.001637 | 0.001611 |
| is_convertible_test.test | RUN | 0.166264 | 0.522290 | 0.784042 | 0.001495 | 0.001693 | 0.001467 |
| is_constructible_test.test | RUN | 0.141172 | 0.382955 | 0.563095 | 0.001554 | 0.001874 | 0.001540 |
| is_const_test.test | RUN | 0.123939 | 0.328433 | 0.466770 | 0.001182 | 0.001412 | 0.001499 |
| is_compound_test.test | RUN | 0.118146 | 0.299182 | 0.374314 | 0.001342 | 0.001417 | 0.001578 |
| is_complex_test.test | RUN | 0.162598 | 0.380217 | 0.505429 | 0.001521 | 0.001561 | 0.001588 |
| is_complete_test.test | RUN | 0.138859 | 0.393318 | 0.584582 | 0.001447 | 0.001477 | 0.001498 |
| is_class_test.test | RUN | 0.129162 | 0.344291 | 0.481587 | 0.001364 | 0.001504 | 0.001468 |
| is_bounded_array_test.test | RUN | 0.121709 | 0.319172 | 0.423029 | 0.001436 | 0.001515 | 0.001317 |
| is_base_of_test.test | RUN | 0.129909 | 0.339534 | 0.477338 | 0.001407 | 0.001588 | 0.001489 |
| is_base_and_derived_test.test | RUN | 0.128930 | 0.336382 | 0.459139 | 0.001454 | 0.001527 | 0.001453 |
| is_assignable_test.test | RUN | 0.156198 | 0.473820 | 0.735454 | 0.001518 | 0.001592 | 0.001685 |
| is_array_test.test | RUN | 0.127550 | 0.323922 | 0.473077 | 0.001550 | 0.001492 | 0.001395 |
| is_arithmetic_test.test | RUN | 0.155242 | 0.488126 | 0.776114 | 0.001424 | 0.001757 | 0.001546 |
| is_abstract_test.test | RUN | 0.282238 | 1.275358 | 2.693753 | 0.001437 | 0.001756 | 0.001351 |
| integral_constant_test.test | RUN | 0.018432 | 0.054045 | 0.049893 | 0.000660 | 0.000755 | 0.001502 |
| has_virtual_destructor_test.test | RUN | 0.135063 | 0.392106 | 0.567770 | 0.001620 | 0.001609 | 0.001597 |
| has_unary_plus_test.test | RUN | 0.254339 | 1.353803 | 2.012984 | 0.001463 | 0.001541 | 0.001636 |
| has_unary_minus_test.test | RUN | 0.255478 | 1.325451 | 1.952754 | 0.001363 | 0.001667 | 0.001433 |
| has_trivial_move_constructor_test.test | RUN | 0.173254 | 0.552623 | 0.965530 | 0.001478 | 0.001551 | 0.001620 |
| has_trivial_move_assign_test.test | RUN | 0.173628 | 0.574339 | 0.937919 | 0.001533 | 0.001677 | 0.001573 |
| has_trivial_destructor_test.test | RUN | 0.173707 | 0.585283 | 0.932351 | 0.001555 | 0.001665 | 0.001560 |
| has_trivial_copy_test.test | RUN | 0.177542 | 0.601625 | 0.998926 | 0.001535 | 0.001744 | 0.001472 |
| has_trivial_constr_test.test | RUN | 0.178511 | 0.613081 | 0.992183 | 0.001503 | 0.001613 | 0.001542 |
| has_trivial_assign_test.test | RUN | 0.178177 | 0.598869 | 0.974574 | 0.001602 | 0.001808 | 0.001630 |
| has_right_shift_test.test | RUN | 0.272442 | 1.087482 | 2.153089 | 0.001655 | 0.001606 | 0.001471 |
| has_right_shift_assign_test.test | RUN | 0.258193 | 1.068094 | 1.998078 | 0.001474 | 0.001462 | 0.001541 |
| has_prefix_classes3_test.test | RUN | 0.191776 | 0.624393 | 1.051181 | 0.001531 | 0.001427 | 0.001531 |
| has_prefix_classes2_test.test | RUN | 0.191262 | 0.599230 | 1.023866 | 0.001400 | 0.001621 | 0.001457 |
| has_prefix_classes1_test.test | RUN | 0.189501 | 0.623528 | 0.933087 | 0.001808 | 0.001561 | 0.001596 |
| has_prefix_classes0_test.test | RUN | 0.187517 | 0.619251 | 1.006732 | 0.001470 | 0.001469 | 0.001586 |
| has_pre_increment_test.test | RUN | 0.256013 | 1.321892 | 1.987147 | 0.001563 | 0.001614 | 0.001537 |
| has_pre_decrement_test.test | RUN | 0.252584 | 1.330583 | 1.984877 | 0.001475 | 0.001442 | 0.001494 |
| has_postfix_classes3_test.test | RUN | 0.191177 | 0.617508 | 1.071775 | 0.001649 | 0.001564 | 0.001589 |
| has_postfix_classes2_test.test | RUN | 0.191321 | 0.602382 | 0.969854 | 0.001604 | 0.001317 | 0.001341 |
| has_postfix_classes1_test.test | RUN | 0.190775 | 0.623489 | 0.973010 | 0.001517 | 0.001631 | 0.001487 |
| has_postfix_classes0_test.test | RUN | 0.191970 | 0.619843 | 1.033485 | 0.001453 | 0.001484 | 0.001451 |
| has_post_increment_test.test | RUN | 0.257075 | 1.312713 | 2.008271 | 0.001482 | 0.001449 | 0.001556 |
| has_post_decrement_test.test | RUN | 0.256391 | 1.324739 | 2.015724 | 0.001576 | 0.001479 | 0.001454 |
| has_plus_test.test | RUN | 0.257274 | 1.005818 | 1.937346 | 0.001627 | 0.001500 | 0.001572 |
| has_plus_assign_test.test | RUN | 0.266506 | 1.033608 | 1.990803 | 0.001817 | 0.001381 | 0.001491 |
| has_operator_new_test.test | RUN | 0.175312 | 0.537141 | 0.890582 | 0.001634 | 0.001636 | 0.001449 |
| has_nothrow_destructor_test.test | RUN | 0.176063 | 0.596979 | 0.944142 | 0.001207 | 0.001542 | 0.001428 |
| has_nothrow_copy_test.test | RUN | 0.176216 | 0.563737 | 0.948412 | 0.001666 | 0.001621 | 0.001558 |
| has_nothrow_constr_test.test | RUN | 0.169915 | 0.547976 | 0.890688 | 0.001522 | 0.001550 | 0.001579 |
| has_nothrow_assign_test.test | RUN | 0.169019 | 0.554094 | 0.934476 | 0.001629 | 0.001671 | 0.001497 |
| has_not_equal_to_test.test | RUN | 0.258105 | 1.312251 | 2.053648 | 0.001438 | 0.001690 | 0.001611 |
| has_negate_test.test | RUN | 0.251781 | 1.000682 | 1.871226 | 0.001704 | 0.001600 | 0.001612 |
| has_multiplies_test.test | RUN | 0.254709 | 1.033981 | 2.028090 | 0.001556 | 0.001441 | 0.001475 |
| has_multiplies_assign_test.test | RUN | 0.261371 | 1.035551 | 2.078631 | 0.001677 | 0.001572 | 0.001530 |
| has_modulus_test.test | RUN | 0.257921 | 1.026457 | 1.940675 | 0.001531 | 0.001820 | 0.001604 |
| has_modulus_assign_test.test | RUN | 0.260860 | 1.029505 | 1.992996 | 0.001480 | 0.001594 | 0.001496 |
| has_minus_test.test | RUN | 0.267274 | 1.057890 | 1.984441 | 0.001452 | 0.001542 | 0.001531 |
| has_minus_assign_test.test | RUN | 0.267528 | 1.034721 | 1.978535 | 0.001733 | 0.001622 | 0.001459 |
| has_logical_or_test.test | RUN | 0.260361 | 1.053514 | 1.966343 | 0.001681 | 0.001702 | 0.001556 |
| has_logical_not_test.test | RUN | 0.245845 | 1.034190 | 1.912849 | 0.001599 | 0.001571 | 0.001570 |
| has_logical_and_test.test | RUN | 0.258415 | 1.048318 | 1.967774 | 0.001373 | 0.001430 | 0.001493 |
| has_less_test.test | RUN | 0.257674 | 1.280992 | 1.953297 | 0.001622 | 0.001532 | 0.001535 |
| has_less_equal_test.test | RUN | 0.258116 | 1.287868 | 1.970400 | 0.001593 | 0.001724 | 0.001557 |
| has_left_shift_test.test | RUN | 0.284593 | 1.347975 | 2.528541 | 0.001732 | 0.001597 | 0.001556 |
| has_left_shift_assign_test.test | RUN | 0.252890 | 1.027866 | 1.939471 | 0.001504 | 0.001759 | 0.001469 |
| has_greater_test.test | RUN | 0.257891 | 1.297791 | 2.011427 | 0.001696 | 0.001670 | 0.001581 |
| has_greater_equal_test.test | RUN | 0.261240 | 1.329894 | 1.988504 | 0.001562 | 0.001402 | 0.001520 |
| has_equal_to_test.test | RUN | 0.259024 | 1.282576 | 2.047775 | 0.001489 | 0.001509 | 0.001509 |
| has_divides_test.test | RUN | 0.256836 | 1.059749 | 1.951761 | 0.001465 | 0.001572 | 0.001556 |
| has_divides_assign_test.test | RUN | 0.257813 | 1.034735 | 2.013094 | 0.001858 | 0.001643 | 0.001479 |
| has_dereference_test.test | RUN | 0.251481 | 1.011664 | 1.866649 | 0.001481 | 0.001540 | 0.001714 |
| has_complement_test.test | RUN | 0.254308 | 1.303053 | 1.954955 | 0.001595 | 0.001559 | 0.001552 |
| has_bit_xor_test.test | RUN | 0.253497 | 1.020061 | 2.039747 | 0.001428 | 0.001438 | 0.001481 |
| has_bit_xor_assign_test.test | RUN | 0.256954 | 1.011895 | 2.010206 | 0.001744 | 0.001618 | 0.001481 |
| has_bit_or_test.test | RUN | 0.256857 | 1.034316 | 1.926446 | 0.001406 | 0.001798 | 0.001738 |
| has_bit_or_assign_test.test | RUN | 0.259538 | 1.027849 | 1.960460 | 0.001508 | 0.001476 | 0.001535 |
| has_bit_and_test.test | RUN | 0.255179 | 1.035503 | 2.042101 | 0.001542 | 0.001735 | 0.001510 |
| has_bit_and_assign_test.test | RUN | 0.255687 | 1.041857 | 2.037044 | 0.001616 | 0.001594 | 0.001390 |
| has_binary_classes9_test.test | RUN | 0.281292 | 1.209596 | 2.229428 | 0.001600 | 0.001480 | 0.001539 |
| has_binary_classes8_test.test | RUN | 0.281719 | 1.229031 | 2.198484 | 0.001442 | 0.001540 | 0.001640 |
| has_binary_classes7_test.test | RUN | 0.276334 | 1.217155 | 2.276420 | 0.001548 | 0.001634 | 0.001515 |
| has_binary_classes6_test.test | RUN | 0.273685 | 1.175931 | 2.285054 | 0.001586 | 0.001777 | 0.001564 |
| has_binary_classes5_test.test | RUN | 0.277383 | 1.205634 | 2.217564 | 0.001440 | 0.001573 | 0.001571 |
| has_binary_classes4_test.test | RUN | 0.275952 | 1.240177 | 2.209578 | 0.001675 | 0.001448 | 0.001630 |
| has_binary_classes3_test.test | RUN | 0.280135 | 1.221605 | 2.286916 | 0.001476 | 0.001681 | 0.001514 |
| has_binary_classes2_test.test | RUN | 0.280916 | 1.238801 | 2.278186 | 0.001542 | 0.001614 | 0.001506 |
| has_binary_classes1_test.test | RUN | 0.278496 | 1.225782 | 2.224563 | 0.001497 | 0.001496 | 0.001607 |
| has_binary_classes0_test.test | RUN | 0.280579 | 1.247722 | 2.187041 | 0.001212 | 0.001442 | 0.001506 |
| function_traits_test.test | RUN | 0.128107 | 0.336310 | 0.467499 | 0.001496 | 0.001587 | 0.001442 |
| floating_point_promotion_test.test | RUN | 0.125872 | 0.324604 | 0.431851 | 0.001638 | 0.001586 | 0.001487 |
| extent_test.test | RUN | 0.127159 | 0.328713 | 0.462472 | 0.001435 | 0.001630 | 0.001530 |
| enable_if_test.test | RUN | 0.118268 | 0.278925 | 0.361795 | 0.001655 | 0.001528 | 0.001519 |
| disjunction_test.test | RUN | 0.118241 | 0.290402 | 0.382493 | 0.001604 | 0.001583 | 0.001661 |
| detected_test.test | RUN | 0.115962 | 0.272367 | 0.356676 | 0.001539 | 0.001265 | 0.001425 |
| detected_or_test.test | RUN | 0.121852 | 0.296066 | 0.381438 | 0.001467 | 0.001706 | 0.001350 |
| decay_test.test | RUN | 0.315324 | 1.134043 | 2.207443 | 0.001584 | 0.001550 | 0.001570 |
| cxx14_aliases_test.test | RUN | 0.190367 | 0.422593 | 0.578264 | 0.001708 | 0.001560 | 0.001492 |
| copy_reference_test.test | RUN | 0.118441 | 0.289470 | 0.385279 | 0.001504 | 0.001443 | 0.001360 |
| copy_cv_test.test | RUN | 0.123115 | 0.308486 | 0.430384 | 0.001596 | 0.001554 | 0.001522 |
| copy_cv_ref_test.test | RUN | 0.172347 | 0.507901 | 0.894840 | 0.001436 | 0.001368 | 0.001670 |
| conjunction_test.test | RUN | 0.118357 | 0.300887 | 0.394755 | 0.001686 | 0.001420 | 0.001664 |
| conditional_test.test | RUN | 0.117640 | 0.282811 | 0.378501 | 0.001484 | 0.001450 | 0.001400 |
| common_type_test.test | RUN | 0.165051 | 0.448652 | 0.738758 | 0.001488 | 0.001430 | 0.001635 |
| common_type_sfinae_test.test | RUN | 0.116290 | 0.275296 | 0.367083 | 0.001744 | 0.001623 | 0.001413 |
| common_type_sfinae2_test.test | RUN | 0.117038 | 0.292019 | 0.383266 | 0.001440 | 0.001546 | 0.001565 |
| common_type_6_test.test | RUN | 0.122003 | 0.303906 | 0.408330 | 0.001496 | 0.001488 | 0.001614 |
| common_type_5_test.test | RUN | 0.126073 | 0.299321 | 0.401383 | 0.001509 | 0.001606 | 0.001488 |
| common_type_4_test.test | RUN | 0.127443 | 0.327882 | 0.468108 | 0.001475 | 0.001398 | 0.001342 |
| common_type_3_test.test | RUN | 0.113673 | 0.276548 | 0.357795 | 0.001596 | 0.001506 | 0.001518 |
| common_type_2_test.test | RUN | 0.159517 | 0.445859 | 0.717675 | 0.001493 | 0.001734 | 0.001457 |
| alignment_of_test.test | RUN | 0.130581 | 0.355999 | 0.486603 | 0.001659 | 0.001558 | 0.001507 |
| alignment_of_a2_test.test | RUN | 0.129184 | 0.356498 | 0.472426 | 0.001426 | 0.001381 | 0.001294 |
| aligned_storage_test.test | RUN | 0.134016 | 0.344798 | 0.440332 | 0.001650 | 0.001454 | 0.001629 |
| aligned_storage_empy_test.test | RUN | 0.150735 | 0.390298 | 0.584531 | 0.001618 | 0.001687 | 0.001547 |
| aligned_storage_a2_test.test | RUN | 0.134183 | 0.344476 | 0.434687 | 0.001737 | 0.001819 | 0.001645 |
| add_volatile_test.test | RUN | 0.287736 | 1.015835 | 2.072949 | 0.001533 | 0.001624 | 0.001568 |
| add_rvalue_reference_test.test | RUN | 0.321462 | 1.149348 | 2.402046 | 0.001465 | 0.001660 | 0.001586 |
| add_reference_test.test | RUN | 0.308302 | 1.138575 | 2.373108 | 0.001599 | 0.001693 | 0.001594 |
| add_pointer_test.test | RUN | 0.198752 | 0.645694 | 1.242883 | 0.001452 | 0.001382 | 0.001549 |
| add_lvalue_reference_test.test | RUN | 0.308878 | 1.129344 | 2.388749 | 0.001483 | 0.001613 | 0.001460 |
| add_cv_test.test | RUN | 0.293620 | 1.049319 | 2.250920 | 0.001479 | 0.001599 | 0.001334 |
| add_const_test.test | RUN | 0.296195 | 1.064024 | 2.185126 | 0.001640 | 0.001428 | 0.001525 |
| is_virtual_base_of_fail.test | COMPILE_FAIL | 0.112120 | 0.270221 | 0.346954 | — | — | — |
| is_stateless_fail.test | COMPILE_FAIL | 0.114721 | 0.272961 | 0.358630 | — | — | — |
| is_polymorphic_fail.test | COMPILE_FAIL | 0.109172 | 0.260096 | 0.349519 | — | — | — |
| is_nothrow_move_constructible_fail.test | COMPILE_FAIL | 0.109375 | 0.264588 | 0.349264 | — | — | — |
| is_nothrow_move_assignable_fail.test | COMPILE_FAIL | 0.111784 | 0.271297 | 0.346967 | — | — | — |
| is_list_constructible_fail.test | COMPILE_FAIL | 0.111073 | 0.267609 | 0.343310 | — | — | — |
| is_empty_fail.test | COMPILE_FAIL | 0.111845 | 0.268436 | 0.342565 | — | — | — |
| is_destructible_fail.test | COMPILE_FAIL | 0.111445 | 0.261797 | 0.342580 | — | — | — |
| is_default_constructible_fail.test | COMPILE_FAIL | 0.111635 | 0.267123 | 0.341039 | — | — | — |
| is_copy_constructible_fail.test | COMPILE_FAIL | 0.113660 | 0.263158 | 0.340357 | — | — | — |
| is_copy_assignable_fail.test | COMPILE_FAIL | 0.112029 | 0.263995 | 0.333048 | — | — | — |
| is_convertible_fail.test | COMPILE_FAIL | 0.113009 | 0.258769 | 0.332535 | — | — | — |
| is_convertible2_fail.test | COMPILE_FAIL | 0.111969 | 0.265084 | 0.341344 | — | — | — |
| is_constructible_fail.test | COMPILE_FAIL | 0.112785 | 0.268073 | 0.343337 | — | — | — |
| is_base_of_fail.test | COMPILE_FAIL | 0.111411 | 0.264640 | 0.332203 | — | — | — |
| is_assignable_fail.test | COMPILE_FAIL | 0.111971 | 0.262361 | 0.332480 | — | — | — |
| has_nothrow_destruct_fail.test | COMPILE_FAIL | 0.111437 | 0.267424 | 0.340126 | — | — | — |
| has_nothrow_copy_fail.test | COMPILE_FAIL | 0.113901 | 0.270454 | 0.344030 | — | — | — |
| has_nothrow_cons_fail.test | COMPILE_FAIL | 0.113825 | 0.269057 | 0.337180 | — | — | — |
| has_nothrow_assign_fail.test | COMPILE_FAIL | 0.112513 | 0.264057 | 0.337860 | — | — | — |
| common_type_fail.test | COMPILE_FAIL | 0.114258 | 0.263479 | 0.344508 | — | — | — |
| common_type2_fail.test | COMPILE_FAIL | 0.112403 | 0.264468 | 0.344721 | — | — | — |
| has_nothrow_assign_test_no_intrinsics.test | RUN | 0.174984 | 0.563896 | 0.952010 | 0.001463 | 0.001719 | 0.001506 |
| has_nothrow_constr_test_no_intrinsics.test | RUN | 0.167988 | 0.568410 | 0.932631 | 0.001594 | 0.001504 | 0.001528 |
| has_nothrow_copy_test_no_intrinsics.test | RUN | 0.173230 | 0.580796 | 0.961718 | 0.001336 | 0.001719 | 0.001143 |
| is_nothrow_move_assignable_test_no_intrinsics.test | RUN | 0.174260 | 0.569845 | 0.942255 | 0.001262 | 0.001081 | 0.001155 |
| is_nothrow_move_constructible_test_no_intrinsics.test | RUN | 0.108096 | 0.383108 | 0.565530 | 0.001180 | 0.001146 | 0.001170 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.999× | 1.001×, 0.997× | 0.994× |
| clang | 1.027× | 1.029×, 1.025× | 1.000× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1361 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44260407509).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| add_const_test.test | 10 | 0.001167s | 0.001154s | 0.001210s | byte equality observed |
| add_cv_test.test | 10 | 0.001181s | 0.001151s | 0.001188s | byte equality observed |
| add_lvalue_reference_test.test | 10 | 0.001181s | 0.001156s | 0.001176s | byte equality observed |
| add_pointer_test.test | 10 | 0.001184s | 0.001159s | 0.001185s | byte equality observed |
| add_reference_test.test | 10 | 0.001162s | 0.001140s | 0.001176s | byte equality observed |
| add_rvalue_reference_test.test | 10 | 0.001177s | 0.001174s | 0.001184s | byte equality observed |
| add_volatile_test.test | 10 | 0.001165s | 0.001149s | 0.001189s | byte equality observed |
| aligned_storage_a2_test.test | 10 | 0.001257s | 0.001291s | 0.001276s | byte equality observed |
| aligned_storage_empy_test.test | 10 | 0.001171s | 0.001164s | 0.001194s | byte equality observed |
| aligned_storage_test.test | 10 | 0.001248s | 0.001268s | 0.001298s | byte equality observed |
| alignment_of_a2_test.test | 10 | 0.001168s | 0.001179s | 0.001191s | byte equality observed |
| alignment_of_test.test | 10 | 0.001179s | 0.001193s | 0.001179s | byte equality observed |
| common_type_2_test.test | 10 | 0.001165s | 0.001173s | 0.001205s | byte equality observed |
| common_type_3_test.test | 10 | 0.001159s | 0.001157s | 0.001175s | byte equality observed |
| common_type_4_test.test | 10 | 0.001186s | 0.001183s | 0.001147s | byte equality observed |
| common_type_5_test.test | 10 | 0.001161s | 0.001154s | 0.001158s | byte equality observed |
| common_type_6_test.test | 10 | 0.001154s | 0.001167s | 0.001167s | byte equality observed |
| common_type_sfinae2_test.test | 10 | 0.001153s | 0.001147s | 0.001160s | byte equality observed |
| common_type_sfinae_test.test | 10 | 0.001155s | 0.001150s | 0.001162s | byte equality observed |
| common_type_test.test | 10 | 0.001169s | 0.001183s | 0.001151s | byte equality observed |
| conditional_test.test | 10 | 0.001172s | 0.001181s | 0.001165s | byte equality observed |
| conjunction_test.test | 10 | 0.001159s | 0.001172s | 0.001166s | byte equality observed |
| copy_cv_ref_test.test | 10 | 0.001158s | 0.001161s | 0.001162s | byte equality observed |
| copy_cv_test.test | 10 | 0.001172s | 0.001145s | 0.001183s | byte equality observed |
| copy_reference_test.test | 10 | 0.001163s | 0.001154s | 0.001173s | byte equality observed |
| cxx14_aliases_test.test | 10 | 0.001188s | 0.001152s | 0.001185s | byte equality observed |
| decay_test.test | 10 | 0.001175s | 0.001172s | 0.001139s | byte equality observed |
| detected_or_test.test | 10 | 0.001167s | 0.001152s | 0.001181s | byte equality observed |
| detected_test.test | 10 | 0.001160s | 0.001165s | 0.001146s | byte equality observed |
| disjunction_test.test | 10 | 0.001169s | 0.001161s | 0.001166s | byte equality observed |
| enable_if_test.test | 10 | 0.001148s | 0.001177s | 0.001159s | byte equality observed |
| extent_test.test | 10 | 0.001157s | 0.001153s | 0.001180s | byte equality observed |
| floating_point_promotion_test.test | 10 | 0.001147s | 0.001154s | 0.001171s | byte equality observed |
| function_traits_test.test | 10 | 0.001180s | 0.001164s | 0.001173s | byte equality observed |
| has_binary_classes0_test.test | 10 | 0.001163s | 0.001149s | 0.001160s | byte equality observed |
| has_binary_classes1_test.test | 10 | 0.001162s | 0.001182s | 0.001182s | byte equality observed |
| has_binary_classes2_test.test | 9 | 0.001171s | 0.001189s | 0.001177s | byte equality observed |
| has_binary_classes3_test.test | 10 | 0.001152s | 0.001153s | 0.001176s | byte equality observed |
| has_binary_classes4_test.test | 10 | 0.001160s | 0.001154s | 0.001186s | byte equality observed |
| has_binary_classes5_test.test | 10 | 0.001151s | 0.001162s | 0.001187s | byte equality observed |
| has_binary_classes6_test.test | 10 | 0.001146s | 0.001160s | 0.001175s | byte equality observed |
| has_binary_classes7_test.test | 10 | 0.001158s | 0.001167s | 0.001199s | byte equality observed |
| has_binary_classes8_test.test | 10 | 0.001180s | 0.001148s | 0.001180s | byte equality observed |
| has_binary_classes9_test.test | 8 | 0.001176s | 0.001193s | 0.001164s | byte equality observed |
| has_bit_and_assign_test.test | 10 | 0.001182s | 0.001164s | 0.001185s | byte equality observed |
| has_bit_and_test.test | 10 | 0.001175s | 0.001145s | 0.001173s | byte equality observed |
| has_bit_or_assign_test.test | 10 | 0.001159s | 0.001149s | 0.001159s | byte equality observed |
| has_bit_or_test.test | 10 | 0.001167s | 0.001175s | 0.001151s | byte equality observed |
| has_bit_xor_assign_test.test | 10 | 0.001150s | 0.001154s | 0.001142s | byte equality observed |
| has_bit_xor_test.test | 10 | 0.001145s | 0.001147s | 0.001150s | byte equality observed |
| has_complement_test.test | 10 | 0.001151s | 0.001138s | 0.001164s | byte equality observed |
| has_dereference_test.test | 10 | 0.001149s | 0.001156s | 0.001138s | byte equality observed |
| has_divides_assign_test.test | 10 | 0.001161s | 0.001157s | 0.001155s | byte equality observed |
| has_divides_test.test | 10 | 0.001148s | 0.001138s | 0.001163s | byte equality observed |
| has_equal_to_test.test | 10 | 0.001150s | 0.001148s | 0.001144s | byte equality observed |
| has_greater_equal_test.test | 10 | 0.001167s | 0.001162s | 0.001148s | byte equality observed |
| has_greater_test.test | 10 | 0.001169s | 0.001168s | 0.001168s | byte equality observed |
| has_left_shift_assign_test.test | 10 | 0.001161s | 0.001150s | 0.001170s | byte equality observed |
| has_left_shift_test.test | 10 | 0.001167s | 0.001163s | 0.001179s | byte equality observed |
| has_less_equal_test.test | 10 | 0.001165s | 0.001167s | 0.001150s | byte equality observed |
| has_less_test.test | 10 | 0.001163s | 0.001142s | 0.001167s | byte equality observed |
| has_logical_and_test.test | 10 | 0.001174s | 0.001154s | 0.001159s | byte equality observed |
| has_logical_not_test.test | 10 | 0.001155s | 0.001126s | 0.001163s | byte equality observed |
| has_logical_or_test.test | 10 | 0.001181s | 0.001143s | 0.001158s | byte equality observed |
| has_minus_assign_test.test | 10 | 0.001159s | 0.001147s | 0.001180s | byte equality observed |
| has_minus_test.test | 10 | 0.001162s | 0.001152s | 0.001161s | byte equality observed |
| has_modulus_assign_test.test | 10 | 0.001172s | 0.001168s | 0.001169s | byte equality observed |
| has_modulus_test.test | 10 | 0.001169s | 0.001186s | 0.001159s | byte equality observed |
| has_multiplies_assign_test.test | 10 | 0.001163s | 0.001160s | 0.001166s | byte equality observed |
| has_multiplies_test.test | 10 | 0.001165s | 0.001158s | 0.001145s | byte equality observed |
| has_negate_test.test | 10 | 0.001170s | 0.001174s | 0.001168s | byte equality observed |
| has_not_equal_to_test.test | 10 | 0.001166s | 0.001158s | 0.001160s | byte equality observed |
| has_nothrow_assign_test.test | 10 | 0.001168s | 0.001160s | 0.001143s | byte equality observed |
| has_nothrow_assign_test_no_intrinsics.test | 10 | 0.001169s | 0.001158s | 0.001148s | byte equality observed |
| has_nothrow_constr_test.test | 10 | 0.001183s | 0.001172s | 0.001150s | byte equality observed |
| has_nothrow_constr_test_no_intrinsics.test | 10 | 0.001178s | 0.001148s | 0.001163s | byte equality observed |
| has_nothrow_copy_test.test | 10 | 0.001147s | 0.001168s | 0.001158s | byte equality observed |
| has_nothrow_copy_test_no_intrinsics.test | 10 | 0.001172s | 0.001166s | 0.001176s | byte equality observed |
| has_nothrow_destructor_test.test | 10 | 0.001149s | 0.001155s | 0.001146s | byte equality observed |
| has_operator_new_test.test | 10 | 0.001163s | 0.001161s | 0.001159s | byte equality observed |
| has_plus_assign_test.test | 8 | 0.001155s | 0.001140s | 0.001153s | byte equality observed |
| has_plus_test.test | 10 | 0.001167s | 0.001136s | 0.001179s | byte equality observed |
| has_post_decrement_test.test | 10 | 0.001158s | 0.001182s | 0.001180s | byte equality observed |
| has_post_increment_test.test | 10 | 0.001168s | 0.001147s | 0.001175s | byte equality observed |
| has_postfix_classes0_test.test | 10 | 0.001168s | 0.001153s | 0.001152s | byte equality observed |
| has_postfix_classes1_test.test | 10 | 0.001178s | 0.001156s | 0.001153s | byte equality observed |
| has_postfix_classes2_test.test | 10 | 0.001167s | 0.001169s | 0.001141s | byte equality observed |
| has_postfix_classes3_test.test | 10 | 0.001183s | 0.001158s | 0.001153s | byte equality observed |
| has_pre_decrement_test.test | 10 | 0.001146s | 0.001148s | 0.001162s | byte equality observed |
| has_pre_increment_test.test | 10 | 0.001170s | 0.001169s | 0.001172s | byte equality observed |
| has_prefix_classes0_test.test | 10 | 0.001161s | 0.001158s | 0.001181s | byte equality observed |
| has_prefix_classes1_test.test | 10 | 0.001159s | 0.001163s | 0.001212s | byte equality observed |
| has_prefix_classes2_test.test | 10 | 0.001173s | 0.001138s | 0.001209s | byte equality observed |
| has_prefix_classes3_test.test | 10 | 0.001165s | 0.001154s | 0.001165s | byte equality observed |
| has_right_shift_assign_test.test | 10 | 0.001171s | 0.001162s | 0.001178s | byte equality observed |
| has_right_shift_test.test | 10 | 0.001168s | 0.001174s | 0.001187s | byte equality observed |
| has_trivial_assign_test.test | 10 | 0.001221s | 0.001234s | 0.001219s | byte equality observed |
| has_trivial_constr_test.test | 10 | 0.001209s | 0.001195s | 0.001224s | native test oracle; output varies |
| has_trivial_copy_test.test | 10 | 0.001212s | 0.001209s | 0.001242s | native test oracle; output varies |
| has_trivial_destructor_test.test | 10 | 0.001163s | 0.001197s | 0.001195s | byte equality observed |
| has_trivial_move_assign_test.test | 10 | 0.001168s | 0.001164s | 0.001182s | byte equality observed |
| has_trivial_move_constructor_test.test | 10 | 0.001179s | 0.001161s | 0.001170s | byte equality observed |
| has_unary_minus_test.test | 10 | 0.001170s | 0.001149s | 0.001180s | byte equality observed |
| has_unary_plus_test.test | 10 | 0.001158s | 0.001178s | 0.001154s | byte equality observed |
| has_virtual_destructor_test.test | 10 | 0.001171s | 0.001151s | 0.001160s | byte equality observed |
| integral_constant_test.test | 10 | 0.000498s | 0.000507s | 0.001172s | byte equality observed |
| is_abstract_test.test | 9 | 0.001179s | 0.001148s | 0.001155s | byte equality observed |
| is_arithmetic_test.test | 10 | 0.001158s | 0.001167s | 0.001157s | byte equality observed |
| is_array_test.test | 10 | 0.001153s | 0.001147s | 0.001169s | byte equality observed |
| is_assignable_test.test | 10 | 0.001152s | 0.001127s | 0.001177s | byte equality observed |
| is_base_and_derived_test.test | 10 | 0.001141s | 0.001166s | 0.001181s | byte equality observed |
| is_base_of_test.test | 10 | 0.001168s | 0.001148s | 0.001154s | byte equality observed |
| is_bounded_array_test.test | 10 | 0.001156s | 0.001149s | 0.001175s | byte equality observed |
| is_class_test.test | 10 | 0.001136s | 0.001145s | 0.001182s | byte equality observed |
| is_complete_test.test | 10 | 0.001166s | 0.001161s | 0.001173s | byte equality observed |
| is_complex_test.test | 10 | 0.001160s | 0.001162s | 0.001169s | byte equality observed |
| is_compound_test.test | 10 | 0.001161s | 0.001156s | 0.001149s | byte equality observed |
| is_const_test.test | 10 | 0.001167s | 0.001159s | 0.001169s | byte equality observed |
| is_constructible_test.test | 10 | 0.001153s | 0.001191s | 0.001157s | byte equality observed |
| is_convertible_test.test | 10 | 0.001166s | 0.001154s | 0.001176s | byte equality observed |
| is_copy_assignable_test.test | 10 | 0.001178s | 0.001152s | 0.001157s | byte equality observed |
| is_copy_constructible_test.test | 10 | 0.001155s | 0.001123s | 0.001166s | byte equality observed |
| is_default_constr_test.test | 10 | 0.001156s | 0.001166s | 0.001185s | byte equality observed |
| is_destructible_test.test | 10 | 0.001167s | 0.001157s | 0.001179s | byte equality observed |
| is_detected_exact_test.test | 10 | 0.001163s | 0.001162s | 0.001144s | byte equality observed |
| is_detected_test.test | 10 | 0.001154s | 0.001132s | 0.001182s | byte equality observed |
| is_empty_test.test | 10 | 0.001172s | 0.001143s | 0.001193s | byte equality observed |
| is_enum_test.test | 10 | 0.001152s | 0.001159s | 0.001172s | byte equality observed |
| is_final_test.test | 10 | 0.001149s | 0.001179s | 0.001171s | byte equality observed |
| is_float_test.test | 10 | 0.001150s | 0.001163s | 0.001179s | byte equality observed |
| is_floating_point_test.test | 10 | 0.001168s | 0.001122s | 0.001155s | byte equality observed |
| is_function_test.test | 10 | 0.001157s | 0.001161s | 0.001176s | byte equality observed |
| is_fundamental_test.test | 10 | 0.001161s | 0.001153s | 0.001161s | byte equality observed |
| is_integral_test.test | 10 | 0.001167s | 0.001180s | 0.001156s | byte equality observed |
| is_list_constructible_test.test | 10 | 0.001159s | 0.001156s | 0.001186s | byte equality observed |
| is_lvalue_reference_test.test | 10 | 0.001139s | 0.001160s | 0.001156s | byte equality observed |
| is_member_func_test.test | 10 | 0.001153s | 0.001184s | 0.001148s | byte equality observed |
| is_member_obj_test.test | 10 | 0.001177s | 0.001164s | 0.001171s | byte equality observed |
| is_member_pointer_test.test | 10 | 0.001156s | 0.001180s | 0.001184s | byte equality observed |
| is_noncopyable_test.test | 10 | 0.001166s | 0.001188s | 0.001146s | byte equality observed |
| is_nothrow_move_assignable_test.test | 10 | 0.001169s | 0.001161s | 0.001157s | byte equality observed |
| is_nothrow_move_assignable_test_no_intrinsics.test | 10 | 0.001167s | 0.001171s | 0.001146s | byte equality observed |
| is_nothrow_move_constructible_test.test | 10 | 0.001153s | 0.001194s | 0.001177s | byte equality observed |
| is_nothrow_move_constructible_test_no_intrinsics.test | 10 | 0.001161s | 0.001185s | 0.001169s | byte equality observed |
| is_nothrow_swappable_test.test | 10 | 0.001155s | 0.001168s | 0.001200s | byte equality observed |
| is_object_test.test | 10 | 0.001158s | 0.001162s | 0.001184s | byte equality observed |
| is_pod_test.test | 10 | 0.001154s | 0.001157s | 0.001164s | byte equality observed |
| is_pointer_test.test | 10 | 0.001165s | 0.001180s | 0.001136s | byte equality observed |
| is_polymorphic_test.test | 10 | 0.001159s | 0.001149s | 0.001150s | byte equality observed |
| is_reference_test.test | 10 | 0.001152s | 0.001160s | 0.001168s | byte equality observed |
| is_rvalue_reference_test.test | 10 | 0.001179s | 0.001175s | 0.001167s | byte equality observed |
| is_same_test.test | 10 | 0.001166s | 0.001157s | 0.001169s | byte equality observed |
| is_scalar_test.test | 10 | 0.001176s | 0.001177s | 0.001190s | byte equality observed |
| is_scoped_enum_test.test | 10 | 0.001173s | 0.001182s | 0.001178s | byte equality observed |
| is_signed_test.test | 10 | 0.001168s | 0.001152s | 0.001158s | byte equality observed |
| is_stateless_test.test | 10 | 0.001179s | 0.001170s | 0.001172s | byte equality observed |
| is_swappable_test.test | 10 | 0.001146s | 0.001190s | 0.001156s | byte equality observed |
| is_trivially_copyable_test.test | 10 | 0.001207s | 0.001200s | 0.001194s | byte equality observed |
| is_unbounded_array_test.test | 10 | 0.001170s | 0.001158s | 0.001161s | byte equality observed |
| is_union_test.test | 10 | 0.001183s | 0.001169s | 0.001145s | byte equality observed |
| is_unscoped_enum_test.test | 10 | 0.001174s | 0.001158s | 0.001176s | byte equality observed |
| is_unsigned_test.test | 10 | 0.001179s | 0.001170s | 0.001185s | byte equality observed |
| is_virtual_base_of_test.test | 10 | 0.001170s | 0.001150s | 0.001157s | byte equality observed |
| is_void_test.test | 10 | 0.001168s | 0.001146s | 0.001162s | byte equality observed |
| is_volatile_test.test | 10 | 0.001147s | 0.001182s | 0.001165s | byte equality observed |
| make_signed_test.test | 10 | 0.001152s | 0.001187s | 0.001173s | byte equality observed |
| make_unsigned_test.test | 10 | 0.001177s | 0.001165s | 0.001166s | byte equality observed |
| make_void_test.test | 10 | 0.001168s | 0.001157s | 0.001176s | byte equality observed |
| mpl_interop_test1.test | 10 | 0.000514s | 0.000508s | 0.001176s | byte equality observed |
| mpl_interop_test2.test | 10 | 0.000507s | 0.000491s | 0.001177s | byte equality observed |
| mpl_interop_test3.test | 10 | 0.000514s | 0.000498s | 0.001169s | byte equality observed |
| negation_test.test | 10 | 0.001179s | 0.001156s | 0.001173s | byte equality observed |
| promote_basic_test.test | 10 | 0.000518s | 0.000499s | 0.001160s | byte equality observed |
| promote_enum_msvc_bug_test.test | 10 | 0.000504s | 0.000503s | 0.001176s | byte equality observed |
| promote_enum_test.test | 10 | 0.000519s | 0.000514s | 0.001152s | byte equality observed |
| promote_mpl_test.test | 10 | 0.000514s | 0.000507s | 0.001177s | byte equality observed |
| rank_test.test | 10 | 0.001172s | 0.001166s | 0.001152s | byte equality observed |
| remove_all_extents_test.test | 10 | 0.001165s | 0.001185s | 0.001170s | byte equality observed |
| remove_bounds_test.test | 10 | 0.001171s | 0.001163s | 0.001160s | byte equality observed |
| remove_const_test.test | 10 | 0.001174s | 0.001161s | 0.001152s | byte equality observed |
| remove_cv_ref_test.test | 10 | 0.001149s | 0.001119s | 0.001145s | byte equality observed |
| remove_cv_test.test | 10 | 0.001164s | 0.001149s | 0.001178s | byte equality observed |
| remove_extent_test.test | 10 | 0.001165s | 0.001142s | 0.001168s | byte equality observed |
| remove_pointer_test.test | 10 | 0.001159s | 0.001164s | 0.001159s | byte equality observed |
| remove_reference_test.test | 10 | 0.001160s | 0.001152s | 0.001142s | byte equality observed |
| remove_volatile_test.test | 10 | 0.001167s | 0.001150s | 0.001174s | byte equality observed |
| tricky_abstract_type_test.test | 10 | 0.001165s | 0.001165s | 0.001127s | byte equality observed |
| tricky_add_pointer_test.test | 10 | 0.001173s | 0.001157s | 0.001147s | byte equality observed |
| tricky_function_type_test.test | 10 | 0.001155s | 0.001184s | 0.001158s | byte equality observed |
| tricky_incomplete_type_test.test | 10 | 0.001178s | 0.001187s | 0.001156s | byte equality observed |
| tricky_is_enum_test.test | 10 | 0.001167s | 0.001187s | 0.001183s | byte equality observed |
| tricky_partial_spec_test.test | 10 | 0.001169s | 0.001169s | 0.001181s | byte equality observed |
| tricky_rvalue_test.test | 10 | 0.001168s | 0.001202s | 0.001168s | byte equality observed |
| type_identity_test.test | 10 | 0.001185s | 0.001183s | 0.001165s | byte equality observed |
| type_traits_test.test | 10 | 0.000520s | 0.000519s | 0.001172s | byte equality observed |
| type_with_alignment_test.test | 10 | 0.001275s | 0.001270s | 0.001270s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44260407509).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
