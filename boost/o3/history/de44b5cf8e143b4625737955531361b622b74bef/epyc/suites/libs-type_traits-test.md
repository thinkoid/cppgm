# libs/type_traits/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| type_with_alignment_test.test | RUN | 0.093254 | 0.224116 | 0.348594 | 0.001571 | 0.001536 | 0.001412 |
| type_traits_test.test | RUN | 0.133540 | 0.243726 | 0.356114 | 0.000629 | 0.000528 | 0.001358 |
| type_identity_test.test | RUN | 0.228891 | 0.787849 | 1.750279 | 0.001649 | 0.001595 | 0.001696 |
| tricky_rvalue_test.test | RUN | 0.087158 | 0.182103 | 0.279418 | 0.001596 | 0.001528 | 0.001650 |
| tricky_partial_spec_test.test | RUN | 0.102634 | 0.264362 | 0.414386 | 0.001471 | 0.001491 | 0.001604 |
| tricky_is_enum_test.test | RUN | 0.082730 | 0.178255 | 0.249701 | 0.001562 | 0.001349 | 0.001574 |
| tricky_incomplete_type_test.test | RUN | 0.137402 | 0.272277 | 0.404747 | 0.001455 | 0.001348 | 0.001386 |
| tricky_function_type_test.test | RUN | 0.112535 | 0.280347 | 0.473649 | 0.001885 | 0.001526 | 0.001473 |
| tricky_add_pointer_test.test | RUN | 0.160908 | 0.469706 | 0.992113 | 0.001504 | 0.001608 | 0.001648 |
| tricky_abstract_type_test.test | RUN | 0.090086 | 0.185989 | 0.259049 | 0.001712 | 0.001400 | 0.001725 |
| remove_volatile_test.test | RUN | 0.215446 | 0.692366 | 1.533300 | 0.001637 | 0.001680 | 0.001565 |
| remove_reference_test.test | RUN | 0.221305 | 0.737371 | 1.625259 | 0.001649 | 0.001619 | 0.001686 |
| remove_pointer_test.test | RUN | 0.235623 | 0.752400 | 1.708606 | 0.001648 | 0.001428 | 0.001782 |
| remove_extent_test.test | RUN | 0.226322 | 0.735317 | 1.658637 | 0.001427 | 0.001662 | 0.001755 |
| remove_cv_test.test | RUN | 0.224616 | 0.733605 | 1.655882 | 0.001739 | 0.001592 | 0.001656 |
| remove_cv_ref_test.test | RUN | 0.447039 | 1.760789 | 3.905951 | 0.001359 | 0.001291 | 0.001685 |
| remove_const_test.test | RUN | 0.221312 | 0.694538 | 1.597140 | 0.001690 | 0.001618 | 0.001600 |
| remove_bounds_test.test | RUN | 0.225014 | 0.731479 | 1.655992 | 0.001454 | 0.001415 | 0.001588 |
| remove_all_extents_test.test | RUN | 0.226942 | 0.732512 | 1.540359 | 0.001545 | 0.001276 | 0.001569 |
| rank_test.test | RUN | 0.091897 | 0.183363 | 0.287209 | 0.001380 | 0.001523 | 0.001659 |
| promote_mpl_test.test | RUN | 0.073390 | 0.165688 | 0.198393 | 0.000564 | 0.000513 | 0.001415 |
| promote_enum_test.test | RUN | 0.018133 | 0.044481 | 0.051666 | 0.000667 | 0.000554 | 0.001727 |
| promote_enum_msvc_bug_test.test | RUN | 0.016437 | 0.039518 | 0.044362 | 0.000643 | 0.000632 | 0.001660 |
| promote_basic_test.test | RUN | 0.021117 | 0.050244 | 0.054008 | 0.000539 | 0.000528 | 0.001377 |
| negation_test.test | RUN | 0.086805 | 0.178511 | 0.251519 | 0.001411 | 0.001328 | 0.001342 |
| mpl_interop_test3.test | RUN | 0.068359 | 0.157998 | 0.171766 | 0.000610 | 0.000568 | 0.001521 |
| mpl_interop_test2.test | RUN | 0.026919 | 0.048905 | 0.053163 | 0.000484 | 0.000506 | 0.001613 |
| mpl_interop_test1.test | RUN | 0.015043 | 0.036154 | 0.041228 | 0.000607 | 0.000707 | 0.001573 |
| make_void_test.test | RUN | 0.092817 | 0.183518 | 0.264459 | 0.001732 | 0.001487 | 0.001624 |
| make_unsigned_test.test | RUN | 0.107485 | 0.239874 | 0.355973 | 0.001519 | 0.001460 | 0.001585 |
| make_signed_test.test | RUN | 0.106284 | 0.240359 | 0.358030 | 0.001427 | 0.001389 | 0.001552 |
| is_volatile_test.test | RUN | 0.094815 | 0.210451 | 0.279592 | 0.001483 | 0.001446 | 0.001649 |
| is_void_test.test | RUN | 0.093769 | 0.197240 | 0.260955 | 0.001716 | 0.001487 | 0.001457 |
| is_virtual_base_of_test.test | RUN | 0.106627 | 0.240457 | 0.373267 | 0.001229 | 0.001493 | 0.001512 |
| is_unsigned_test.test | RUN | 0.096273 | 0.204297 | 0.297624 | 0.001557 | 0.001196 | 0.001499 |
| is_unscoped_enum_test.test | RUN | 0.094172 | 0.189935 | 0.247756 | 0.001439 | 0.001403 | 0.001432 |
| is_union_test.test | RUN | 0.104504 | 0.224867 | 0.315965 | 0.001400 | 0.001638 | 0.001683 |
| is_unbounded_array_test.test | RUN | 0.091671 | 0.193442 | 0.280219 | 0.001350 | 0.001541 | 0.001679 |
| is_trivially_copyable_test.test | RUN | 0.145298 | 0.390621 | 0.716188 | 0.001386 | 0.001353 | 0.001316 |
| is_swappable_test.test | RUN | 0.121270 | 0.299162 | 0.512300 | 0.001411 | 0.001533 | 0.001498 |
| is_stateless_test.test | RUN | 0.132223 | 0.344592 | 0.613863 | 0.001302 | 0.001318 | 0.001747 |
| is_signed_test.test | RUN | 0.094811 | 0.200193 | 0.278463 | 0.001319 | 0.001607 | 0.001400 |
| is_scoped_enum_test.test | RUN | 0.092774 | 0.182872 | 0.245795 | 0.001345 | 0.001634 | 0.001732 |
| is_scalar_test.test | RUN | 0.116144 | 0.328236 | 0.532922 | 0.001161 | 0.001526 | 0.001614 |
| is_same_test.test | RUN | 0.090744 | 0.205009 | 0.299747 | 0.001375 | 0.001571 | 0.001514 |
| is_rvalue_reference_test.test | RUN | 0.091666 | 0.224385 | 0.314588 | 0.001448 | 0.001463 | 0.001651 |
| is_reference_test.test | RUN | 0.095864 | 0.228729 | 0.344362 | 0.001368 | 0.001636 | 0.001647 |
| is_polymorphic_test.test | RUN | 0.097800 | 0.225709 | 0.347536 | 0.001347 | 0.001582 | 0.001420 |
| is_pointer_test.test | RUN | 0.095292 | 0.220342 | 0.345713 | 0.001589 | 0.001440 | 0.001697 |
| is_pod_test.test | RUN | 0.114856 | 0.351293 | 0.597675 | 0.001347 | 0.001382 | 0.001648 |
| is_object_test.test | RUN | 0.090445 | 0.186499 | 0.252443 | 0.001365 | 0.001618 | 0.001672 |
| is_nothrow_swappable_test.test | RUN | 0.123558 | 0.334154 | 0.569660 | 0.001506 | 0.001468 | 0.001668 |
| is_nothrow_move_constructible_test.test | RUN | 0.119430 | 0.344503 | 0.579460 | 0.001454 | 0.001520 | 0.001564 |
| is_nothrow_move_assignable_test.test | RUN | 0.121426 | 0.341915 | 0.575345 | 0.001343 | 0.001630 | 0.001768 |
| is_noncopyable_test.test | RUN | 0.088640 | 0.193640 | 0.279101 | 0.001374 | 0.001363 | 0.001564 |
| is_member_pointer_test.test | RUN | 0.092447 | 0.193240 | 0.294371 | 0.001379 | 0.001618 | 0.001570 |
| is_member_obj_test.test | RUN | 0.091385 | 0.197765 | 0.277741 | 0.001182 | 0.001582 | 0.001650 |
| is_member_func_test.test | RUN | 0.092564 | 0.208252 | 0.305130 | 0.001257 | 0.001474 | 0.001411 |
| is_lvalue_reference_test.test | RUN | 0.095909 | 0.218630 | 0.326536 | 0.001397 | 0.001393 | 0.001650 |
| is_list_constructible_test.test | RUN | 0.110406 | 0.250032 | 0.371539 | 0.001566 | 0.001470 | 0.001732 |
| is_integral_test.test | RUN | 0.111331 | 0.305912 | 0.511357 | 0.001543 | 0.001514 | 0.001544 |
| is_fundamental_test.test | RUN | 0.112989 | 0.318004 | 0.487648 | 0.001340 | 0.001528 | 0.001437 |
| is_function_test.test | RUN | 0.091790 | 0.201943 | 0.311244 | 0.001497 | 0.001193 | 0.001335 |
| is_floating_point_test.test | RUN | 0.095217 | 0.221605 | 0.326330 | 0.001280 | 0.001559 | 0.001636 |
| is_float_test.test | RUN | 0.096558 | 0.219647 | 0.354237 | 0.001126 | 0.001515 | 0.001370 |
| is_final_test.test | RUN | 0.092453 | 0.221362 | 0.335391 | 0.001047 | 0.001434 | 0.001319 |
| is_enum_test.test | RUN | 0.088060 | 0.185895 | 0.276490 | 0.001532 | 0.001434 | 0.001470 |
| is_empty_test.test | RUN | 0.096475 | 0.208449 | 0.298919 | 0.001178 | 0.001611 | 0.001657 |
| is_detected_test.test | RUN | 0.084379 | 0.178674 | 0.256713 | 0.001163 | 0.001526 | 0.001620 |
| is_detected_exact_test.test | RUN | 0.083319 | 0.181862 | 0.241567 | 0.001377 | 0.001277 | 0.001359 |
| is_destructible_test.test | RUN | 0.121265 | 0.334621 | 0.618534 | 0.001320 | 0.001583 | 0.001658 |
| is_default_constr_test.test | RUN | 0.123166 | 0.348221 | 0.596525 | 0.001411 | 0.001468 | 0.001740 |
| is_copy_constructible_test.test | RUN | 0.123051 | 0.372281 | 0.660398 | 0.001360 | 0.001317 | 0.001460 |
| is_copy_assignable_test.test | RUN | 0.123819 | 0.356636 | 0.656250 | 0.001143 | 0.001313 | 0.001438 |
| is_convertible_test.test | RUN | 0.119658 | 0.316405 | 0.539010 | 0.001336 | 0.001648 | 0.001556 |
| is_constructible_test.test | RUN | 0.100614 | 0.238856 | 0.385689 | 0.001557 | 0.001528 | 0.001370 |
| is_const_test.test | RUN | 0.088872 | 0.205792 | 0.304275 | 0.001439 | 0.001232 | 0.001374 |
| is_compound_test.test | RUN | 0.085577 | 0.185007 | 0.248490 | 0.001486 | 0.001430 | 0.001593 |
| is_complex_test.test | RUN | 0.115061 | 0.240933 | 0.341472 | 0.001545 | 0.001578 | 0.001364 |
| is_complete_test.test | RUN | 0.101447 | 0.241798 | 0.385703 | 0.001341 | 0.001318 | 0.001561 |
| is_class_test.test | RUN | 0.091920 | 0.205899 | 0.314443 | 0.001284 | 0.001248 | 0.001470 |
| is_bounded_array_test.test | RUN | 0.088968 | 0.186492 | 0.285400 | 0.001475 | 0.001293 | 0.001384 |
| is_base_of_test.test | RUN | 0.095432 | 0.216820 | 0.341948 | 0.001618 | 0.001630 | 0.001640 |
| is_base_and_derived_test.test | RUN | 0.094186 | 0.205326 | 0.336310 | 0.001412 | 0.001249 | 0.001519 |
| is_assignable_test.test | RUN | 0.110298 | 0.287904 | 0.469789 | 0.001416 | 0.001410 | 0.001559 |
| is_array_test.test | RUN | 0.087282 | 0.204597 | 0.321310 | 0.001476 | 0.001450 | 0.001453 |
| is_arithmetic_test.test | RUN | 0.107800 | 0.304528 | 0.531402 | 0.001258 | 0.001592 | 0.001664 |
| is_abstract_test.test | RUN | 0.187528 | 0.847288 | 1.640780 | 0.001308 | 0.001517 | 0.001616 |
| integral_constant_test.test | RUN | 0.013809 | 0.036912 | 0.040322 | 0.000673 | 0.000702 | 0.001624 |
| has_virtual_destructor_test.test | RUN | 0.093376 | 0.231253 | 0.365966 | 0.001585 | 0.001591 | 0.001390 |
| has_unary_plus_test.test | RUN | 0.173002 | 0.875498 | 1.229673 | 0.001403 | 0.001650 | 0.001441 |
| has_unary_minus_test.test | RUN | 0.174615 | 0.894069 | 1.190417 | 0.001333 | 0.001566 | 0.001608 |
| has_trivial_move_constructor_test.test | RUN | 0.122815 | 0.357073 | 0.616130 | 0.001106 | 0.001112 | 0.001614 |
| has_trivial_move_assign_test.test | RUN | 0.119407 | 0.340449 | 0.589107 | 0.001542 | 0.001443 | 0.001697 |
| has_trivial_destructor_test.test | RUN | 0.119359 | 0.355564 | 0.607433 | 0.001584 | 0.001403 | 0.001586 |
| has_trivial_copy_test.test | RUN | 0.121916 | 0.372581 | 0.615191 | 0.001665 | 0.001774 | 0.001733 |
| has_trivial_constr_test.test | RUN | 0.124546 | 0.391265 | 0.648198 | 0.001395 | 0.001459 | 0.001768 |
| has_trivial_assign_test.test | RUN | 0.120532 | 0.377103 | 0.611329 | 0.001709 | 0.001592 | 0.001840 |
| has_right_shift_test.test | RUN | 0.176107 | 0.696744 | 1.374378 | 0.001646 | 0.001574 | 0.001475 |
| has_right_shift_assign_test.test | RUN | 0.167706 | 0.653775 | 1.285898 | 0.001394 | 0.001297 | 0.001280 |
| has_prefix_classes3_test.test | RUN | 0.130006 | 0.392668 | 0.656501 | 0.001106 | 0.001451 | 0.001662 |
| has_prefix_classes2_test.test | RUN | 0.128872 | 0.381789 | 0.637753 | 0.001580 | 0.001444 | 0.001577 |
| has_prefix_classes1_test.test | RUN | 0.128738 | 0.385638 | 0.639912 | 0.001619 | 0.001547 | 0.001661 |
| has_prefix_classes0_test.test | RUN | 0.126956 | 0.377627 | 0.652730 | 0.001367 | 0.001566 | 0.001678 |
| has_pre_increment_test.test | RUN | 0.154334 | 0.897126 | 1.234029 | 0.001218 | 0.001322 | 0.001314 |
| has_pre_decrement_test.test | RUN | 0.159848 | 0.887651 | 1.234888 | 0.001614 | 0.001429 | 0.001150 |
| has_postfix_classes3_test.test | RUN | 0.126840 | 0.375067 | 0.673335 | 0.001418 | 0.001498 | 0.001484 |
| has_postfix_classes2_test.test | RUN | 0.125613 | 0.377335 | 0.614827 | 0.001440 | 0.001447 | 0.001606 |
| has_postfix_classes1_test.test | RUN | 0.125206 | 0.382050 | 0.651757 | 0.001300 | 0.001625 | 0.001751 |
| has_postfix_classes0_test.test | RUN | 0.132468 | 0.390551 | 0.673636 | 0.001541 | 0.001539 | 0.001556 |
| has_post_increment_test.test | RUN | 0.170290 | 0.907049 | 1.254450 | 0.001466 | 0.001378 | 0.001716 |
| has_post_decrement_test.test | RUN | 0.169575 | 0.901587 | 1.260203 | 0.001385 | 0.001215 | 0.001668 |
| has_plus_test.test | RUN | 0.168556 | 0.647974 | 1.272491 | 0.001273 | 0.001615 | 0.001358 |
| has_plus_assign_test.test | RUN | 0.176485 | 0.633444 | 1.252361 | 0.001642 | 0.001659 | 0.001461 |
| has_operator_new_test.test | RUN | 0.122130 | 0.339241 | 0.593458 | 0.001398 | 0.001606 | 0.001466 |
| has_nothrow_destructor_test.test | RUN | 0.124344 | 0.366051 | 0.651154 | 0.001263 | 0.001361 | 0.001612 |
| has_nothrow_copy_test.test | RUN | 0.121372 | 0.357478 | 0.602765 | 0.001383 | 0.001514 | 0.001508 |
| has_nothrow_constr_test.test | RUN | 0.118324 | 0.344075 | 0.596889 | 0.001624 | 0.001638 | 0.001471 |
| has_nothrow_assign_test.test | RUN | 0.120113 | 0.331025 | 0.591108 | 0.001572 | 0.001554 | 0.001360 |
| has_not_equal_to_test.test | RUN | 0.174769 | 0.872311 | 1.262199 | 0.001355 | 0.001647 | 0.001632 |
| has_negate_test.test | RUN | 0.166337 | 0.637941 | 1.221314 | 0.001415 | 0.001493 | 0.001486 |
| has_multiplies_test.test | RUN | 0.172649 | 0.675717 | 1.260705 | 0.001651 | 0.001447 | 0.001304 |
| has_multiplies_assign_test.test | RUN | 0.179957 | 0.652888 | 1.224494 | 0.001722 | 0.001582 | 0.001256 |
| has_modulus_test.test | RUN | 0.174338 | 0.670621 | 1.242486 | 0.001660 | 0.001525 | 0.001658 |
| has_modulus_assign_test.test | RUN | 0.176140 | 0.649612 | 1.274960 | 0.001138 | 0.001598 | 0.001333 |
| has_minus_test.test | RUN | 0.180994 | 0.671293 | 1.222241 | 0.001698 | 0.001403 | 0.001670 |
| has_minus_assign_test.test | RUN | 0.188698 | 0.656774 | 1.289538 | 0.001557 | 0.001596 | 0.001727 |
| has_logical_or_test.test | RUN | 0.176471 | 0.664357 | 1.235698 | 0.001405 | 0.001553 | 0.001776 |
| has_logical_not_test.test | RUN | 0.172416 | 0.658372 | 1.256995 | 0.001290 | 0.001562 | 0.001534 |
| has_logical_and_test.test | RUN | 0.175533 | 0.653490 | 1.239399 | 0.001576 | 0.001338 | 0.001382 |
| has_less_test.test | RUN | 0.170983 | 0.907600 | 1.285081 | 0.001612 | 0.001507 | 0.001628 |
| has_less_equal_test.test | RUN | 0.168435 | 0.860649 | 1.252669 | 0.001314 | 0.001320 | 0.001634 |
| has_left_shift_test.test | RUN | 0.188427 | 0.809274 | 1.558930 | 0.001422 | 0.001431 | 0.001611 |
| has_left_shift_assign_test.test | RUN | 0.179308 | 0.638258 | 1.265145 | 0.001582 | 0.001544 | 0.001759 |
| has_greater_test.test | RUN | 0.180091 | 0.885684 | 1.307257 | 0.001654 | 0.001586 | 0.001640 |
| has_greater_equal_test.test | RUN | 0.175681 | 0.896207 | 1.217286 | 0.001359 | 0.001455 | 0.001772 |
| has_equal_to_test.test | RUN | 0.178561 | 0.865942 | 1.280972 | 0.001417 | 0.001311 | 0.001513 |
| has_divides_test.test | RUN | 0.173882 | 0.631700 | 1.253631 | 0.001653 | 0.001444 | 0.001655 |
| has_divides_assign_test.test | RUN | 0.179471 | 0.646984 | 1.246135 | 0.001553 | 0.001668 | 0.001705 |
| has_dereference_test.test | RUN | 0.174317 | 0.630834 | 1.149238 | 0.001359 | 0.001491 | 0.001664 |
| has_complement_test.test | RUN | 0.173774 | 0.883682 | 1.290158 | 0.001449 | 0.001557 | 0.001616 |
| has_bit_xor_test.test | RUN | 0.174195 | 0.633251 | 1.288422 | 0.001611 | 0.001458 | 0.001420 |
| has_bit_xor_assign_test.test | RUN | 0.176048 | 0.652783 | 1.243508 | 0.001545 | 0.001593 | 0.001527 |
| has_bit_or_test.test | RUN | 0.168664 | 0.648426 | 1.220571 | 0.001391 | 0.001619 | 0.001621 |
| has_bit_or_assign_test.test | RUN | 0.173766 | 0.658385 | 1.228201 | 0.001399 | 0.001638 | 0.001348 |
| has_bit_and_test.test | RUN | 0.174306 | 0.638441 | 1.265564 | 0.001276 | 0.001591 | 0.001509 |
| has_bit_and_assign_test.test | RUN | 0.172787 | 0.632098 | 1.255865 | 0.001596 | 0.001666 | 0.001648 |
| has_binary_classes9_test.test | RUN | 0.188327 | 0.752261 | 1.354811 | 0.001432 | 0.001669 | 0.001594 |
| has_binary_classes8_test.test | RUN | 0.188522 | 0.765889 | 1.394994 | 0.001395 | 0.001494 | 0.001544 |
| has_binary_classes7_test.test | RUN | 0.191259 | 0.747069 | 1.376856 | 0.001531 | 0.001454 | 0.001631 |
| has_binary_classes6_test.test | RUN | 0.191101 | 0.715315 | 1.408687 | 0.001701 | 0.001596 | 0.001696 |
| has_binary_classes5_test.test | RUN | 0.189966 | 0.757945 | 1.357397 | 0.001486 | 0.001518 | 0.001689 |
| has_binary_classes4_test.test | RUN | 0.191747 | 0.763454 | 1.410069 | 0.001492 | 0.001643 | 0.001571 |
| has_binary_classes3_test.test | RUN | 0.191197 | 0.798331 | 1.382585 | 0.001330 | 0.001550 | 0.001590 |
| has_binary_classes2_test.test | RUN | 0.190669 | 0.770721 | 1.403856 | 0.001489 | 0.001626 | 0.001765 |
| has_binary_classes1_test.test | RUN | 0.186584 | 0.774084 | 1.408998 | 0.001310 | 0.001252 | 0.001408 |
| has_binary_classes0_test.test | RUN | 0.191221 | 0.764667 | 1.365941 | 0.001388 | 0.001341 | 0.001580 |
| function_traits_test.test | RUN | 0.095482 | 0.201984 | 0.333166 | 0.001332 | 0.001614 | 0.001596 |
| floating_point_promotion_test.test | RUN | 0.087241 | 0.198559 | 0.289289 | 0.001625 | 0.001611 | 0.001300 |
| extent_test.test | RUN | 0.090802 | 0.205868 | 0.311270 | 0.001377 | 0.001529 | 0.001278 |
| enable_if_test.test | RUN | 0.082609 | 0.174625 | 0.242522 | 0.001348 | 0.001562 | 0.001449 |
| disjunction_test.test | RUN | 0.085507 | 0.178048 | 0.257603 | 0.001297 | 0.001254 | 0.001170 |
| detected_test.test | RUN | 0.086890 | 0.175333 | 0.243533 | 0.001546 | 0.001437 | 0.001383 |
| detected_or_test.test | RUN | 0.087049 | 0.182131 | 0.248600 | 0.001361 | 0.001281 | 0.001218 |
| decay_test.test | RUN | 0.209473 | 0.680906 | 1.435169 | 0.001423 | 0.001362 | 0.001563 |
| cxx14_aliases_test.test | RUN | 0.141805 | 0.267413 | 0.388248 | 0.001659 | 0.001497 | 0.001242 |
| copy_reference_test.test | RUN | 0.085322 | 0.180548 | 0.268757 | 0.001529 | 0.001570 | 0.001541 |
| copy_cv_test.test | RUN | 0.087703 | 0.189899 | 0.279874 | 0.001374 | 0.001290 | 0.001542 |
| copy_cv_ref_test.test | RUN | 0.120825 | 0.308498 | 0.591287 | 0.001606 | 0.001418 | 0.001481 |
| conjunction_test.test | RUN | 0.085120 | 0.181080 | 0.256689 | 0.001337 | 0.001131 | 0.001683 |
| conditional_test.test | RUN | 0.089123 | 0.180598 | 0.248283 | 0.001581 | 0.001294 | 0.001274 |
| common_type_test.test | RUN | 0.113544 | 0.271187 | 0.479339 | 0.001330 | 0.001185 | 0.001538 |
| common_type_sfinae_test.test | RUN | 0.085124 | 0.176150 | 0.253969 | 0.001651 | 0.001302 | 0.001510 |
| common_type_sfinae2_test.test | RUN | 0.087555 | 0.181581 | 0.258338 | 0.001373 | 0.001368 | 0.001216 |
| common_type_6_test.test | RUN | 0.089867 | 0.184064 | 0.266234 | 0.001681 | 0.001199 | 0.001480 |
| common_type_5_test.test | RUN | 0.090146 | 0.183156 | 0.261587 | 0.001764 | 0.001308 | 0.001596 |
| common_type_4_test.test | RUN | 0.092450 | 0.196542 | 0.311330 | 0.001607 | 0.001280 | 0.001680 |
| common_type_3_test.test | RUN | 0.083262 | 0.169797 | 0.228545 | 0.001264 | 0.001255 | 0.001514 |
| common_type_2_test.test | RUN | 0.114716 | 0.263173 | 0.468131 | 0.001557 | 0.001445 | 0.001645 |
| alignment_of_test.test | RUN | 0.091744 | 0.214633 | 0.322136 | 0.001546 | 0.001335 | 0.001423 |
| alignment_of_a2_test.test | RUN | 0.091196 | 0.210497 | 0.309423 | 0.001694 | 0.001427 | 0.001706 |
| aligned_storage_test.test | RUN | 0.094425 | 0.214759 | 0.287217 | 0.001348 | 0.001390 | 0.001718 |
| aligned_storage_empy_test.test | RUN | 0.103096 | 0.243509 | 0.383964 | 0.001568 | 0.001570 | 0.001669 |
| aligned_storage_a2_test.test | RUN | 0.093766 | 0.210074 | 0.294769 | 0.001545 | 0.001756 | 0.001640 |
| add_volatile_test.test | RUN | 0.186171 | 0.598104 | 1.274251 | 0.001606 | 0.001463 | 0.001533 |
| add_rvalue_reference_test.test | RUN | 0.210394 | 0.679470 | 1.505235 | 0.001490 | 0.001398 | 0.001700 |
| add_reference_test.test | RUN | 0.206095 | 0.652906 | 1.484113 | 0.001400 | 0.001470 | 0.001595 |
| add_pointer_test.test | RUN | 0.135563 | 0.376032 | 0.760245 | 0.001571 | 0.001503 | 0.001427 |
| add_lvalue_reference_test.test | RUN | 0.200783 | 0.660086 | 1.429240 | 0.001456 | 0.001392 | 0.001430 |
| add_cv_test.test | RUN | 0.188278 | 0.632862 | 1.367835 | 0.001372 | 0.001109 | 0.001054 |
| add_const_test.test | RUN | 0.198807 | 0.624904 | 1.390636 | 0.001345 | 0.001476 | 0.001315 |
| is_virtual_base_of_fail.test | COMPILE_FAIL | 0.083170 | 0.167811 | 0.232212 | — | — | — |
| is_stateless_fail.test | COMPILE_FAIL | 0.082677 | 0.169944 | 0.255864 | — | — | — |
| is_polymorphic_fail.test | COMPILE_FAIL | 0.078294 | 0.157451 | 0.230328 | — | — | — |
| is_nothrow_move_constructible_fail.test | COMPILE_FAIL | 0.078650 | 0.166743 | 0.226911 | — | — | — |
| is_nothrow_move_assignable_fail.test | COMPILE_FAIL | 0.081247 | 0.163435 | 0.230188 | — | — | — |
| is_list_constructible_fail.test | COMPILE_FAIL | 0.079792 | 0.165788 | 0.235585 | — | — | — |
| is_empty_fail.test | COMPILE_FAIL | 0.081658 | 0.168488 | 0.229507 | — | — | — |
| is_destructible_fail.test | COMPILE_FAIL | 0.079422 | 0.168943 | 0.223670 | — | — | — |
| is_default_constructible_fail.test | COMPILE_FAIL | 0.081158 | 0.164645 | 0.225202 | — | — | — |
| is_copy_constructible_fail.test | COMPILE_FAIL | 0.081206 | 0.167228 | 0.226937 | — | — | — |
| is_copy_assignable_fail.test | COMPILE_FAIL | 0.079712 | 0.160537 | 0.215739 | — | — | — |
| is_convertible_fail.test | COMPILE_FAIL | 0.081505 | 0.165056 | 0.213752 | — | — | — |
| is_convertible2_fail.test | COMPILE_FAIL | 0.082087 | 0.168387 | 0.220038 | — | — | — |
| is_constructible_fail.test | COMPILE_FAIL | 0.082071 | 0.162976 | 0.220389 | — | — | — |
| is_base_of_fail.test | COMPILE_FAIL | 0.077679 | 0.166307 | 0.224341 | — | — | — |
| is_assignable_fail.test | COMPILE_FAIL | 0.081798 | 0.164313 | 0.228087 | — | — | — |
| has_nothrow_destruct_fail.test | COMPILE_FAIL | 0.080752 | 0.166899 | 0.222120 | — | — | — |
| has_nothrow_copy_fail.test | COMPILE_FAIL | 0.080031 | 0.163640 | 0.229520 | — | — | — |
| has_nothrow_cons_fail.test | COMPILE_FAIL | 0.078528 | 0.166687 | 0.222472 | — | — | — |
| has_nothrow_assign_fail.test | COMPILE_FAIL | 0.080641 | 0.162843 | 0.222905 | — | — | — |
| common_type_fail.test | COMPILE_FAIL | 0.079260 | 0.164562 | 0.222053 | — | — | — |
| common_type2_fail.test | COMPILE_FAIL | 0.079323 | 0.167806 | 0.224100 | — | — | — |
| has_nothrow_assign_test_no_intrinsics.test | RUN | 0.118620 | 0.348181 | 0.616841 | 0.001314 | 0.001598 | 0.001598 |
| has_nothrow_constr_test_no_intrinsics.test | RUN | 0.115036 | 0.343402 | 0.604035 | 0.001354 | 0.001388 | 0.001441 |
| has_nothrow_copy_test_no_intrinsics.test | RUN | 0.122327 | 0.356455 | 0.606561 | 0.001568 | 0.001583 | 0.001193 |
| is_nothrow_move_assignable_test_no_intrinsics.test | RUN | 0.121228 | 0.351058 | 0.599663 | 0.001126 | 0.000975 | 0.001264 |
| is_nothrow_move_constructible_test_no_intrinsics.test | RUN | 0.095865 | 0.233510 | 0.355874 | 0.001216 | 0.001126 | 0.001248 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 1.005× | 1.016×, 0.993× | 1.029× |
| clang | 0.997× | 1.017×, 0.976× | 1.014× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1363 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43658654032).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| add_const_test.test | 10 | 0.000874s | 0.000858s | 0.000843s | byte equality observed |
| add_cv_test.test | 10 | 0.000856s | 0.000860s | 0.000845s | byte equality observed |
| add_lvalue_reference_test.test | 10 | 0.000883s | 0.000871s | 0.000859s | byte equality observed |
| add_pointer_test.test | 10 | 0.000864s | 0.000884s | 0.000874s | byte equality observed |
| add_reference_test.test | 10 | 0.000877s | 0.000859s | 0.000868s | byte equality observed |
| add_rvalue_reference_test.test | 10 | 0.000907s | 0.000884s | 0.000857s | byte equality observed |
| add_volatile_test.test | 10 | 0.000874s | 0.000875s | 0.000866s | byte equality observed |
| aligned_storage_a2_test.test | 10 | 0.000971s | 0.000952s | 0.000937s | byte equality observed |
| aligned_storage_empy_test.test | 10 | 0.000878s | 0.000860s | 0.000843s | byte equality observed |
| aligned_storage_test.test | 10 | 0.000957s | 0.000961s | 0.000955s | byte equality observed |
| alignment_of_a2_test.test | 10 | 0.000880s | 0.000861s | 0.000893s | byte equality observed |
| alignment_of_test.test | 10 | 0.000869s | 0.000862s | 0.000876s | byte equality observed |
| common_type_2_test.test | 10 | 0.000857s | 0.000886s | 0.000856s | byte equality observed |
| common_type_3_test.test | 10 | 0.000887s | 0.000860s | 0.000855s | byte equality observed |
| common_type_4_test.test | 10 | 0.000875s | 0.000868s | 0.000894s | byte equality observed |
| common_type_5_test.test | 10 | 0.000900s | 0.000866s | 0.000861s | byte equality observed |
| common_type_6_test.test | 10 | 0.000875s | 0.000855s | 0.000871s | byte equality observed |
| common_type_sfinae2_test.test | 10 | 0.000894s | 0.000872s | 0.000867s | byte equality observed |
| common_type_sfinae_test.test | 10 | 0.000872s | 0.000857s | 0.000873s | byte equality observed |
| common_type_test.test | 10 | 0.000878s | 0.000878s | 0.000876s | byte equality observed |
| conditional_test.test | 10 | 0.000890s | 0.000866s | 0.000883s | byte equality observed |
| conjunction_test.test | 10 | 0.000880s | 0.000872s | 0.000881s | byte equality observed |
| copy_cv_ref_test.test | 10 | 0.000899s | 0.000863s | 0.000862s | byte equality observed |
| copy_cv_test.test | 10 | 0.000872s | 0.000876s | 0.000842s | byte equality observed |
| copy_reference_test.test | 10 | 0.000887s | 0.000876s | 0.000887s | byte equality observed |
| cxx14_aliases_test.test | 10 | 0.000894s | 0.000879s | 0.000853s | byte equality observed |
| decay_test.test | 10 | 0.000908s | 0.000896s | 0.000873s | byte equality observed |
| detected_or_test.test | 10 | 0.000885s | 0.000864s | 0.000861s | byte equality observed |
| detected_test.test | 10 | 0.000885s | 0.000868s | 0.000864s | byte equality observed |
| disjunction_test.test | 10 | 0.000894s | 0.000870s | 0.000857s | byte equality observed |
| enable_if_test.test | 10 | 0.000894s | 0.000870s | 0.000867s | byte equality observed |
| extent_test.test | 10 | 0.000890s | 0.000863s | 0.000862s | byte equality observed |
| floating_point_promotion_test.test | 10 | 0.000897s | 0.000871s | 0.000866s | byte equality observed |
| function_traits_test.test | 10 | 0.000899s | 0.000865s | 0.000869s | byte equality observed |
| has_binary_classes0_test.test | 10 | 0.000880s | 0.000870s | 0.000862s | byte equality observed |
| has_binary_classes1_test.test | 10 | 0.000899s | 0.000849s | 0.000871s | byte equality observed |
| has_binary_classes2_test.test | 10 | 0.000891s | 0.000867s | 0.000883s | byte equality observed |
| has_binary_classes3_test.test | 10 | 0.000880s | 0.000869s | 0.000873s | byte equality observed |
| has_binary_classes4_test.test | 10 | 0.000882s | 0.000860s | 0.000860s | byte equality observed |
| has_binary_classes5_test.test | 10 | 0.000912s | 0.000867s | 0.000863s | byte equality observed |
| has_binary_classes6_test.test | 10 | 0.000890s | 0.000863s | 0.000863s | byte equality observed |
| has_binary_classes7_test.test | 10 | 0.000878s | 0.000848s | 0.000885s | byte equality observed |
| has_binary_classes8_test.test | 6 | 0.000903s | 0.000866s | 0.000867s | byte equality observed |
| has_binary_classes9_test.test | 6 | 0.000881s | 0.000861s | 0.000882s | byte equality observed |
| has_bit_and_assign_test.test | 10 | 0.000895s | 0.000850s | 0.000871s | byte equality observed |
| has_bit_and_test.test | 10 | 0.000888s | 0.000872s | 0.000866s | byte equality observed |
| has_bit_or_assign_test.test | 10 | 0.000900s | 0.000843s | 0.000876s | byte equality observed |
| has_bit_or_test.test | 10 | 0.000891s | 0.000876s | 0.000866s | byte equality observed |
| has_bit_xor_assign_test.test | 10 | 0.000886s | 0.000847s | 0.000857s | byte equality observed |
| has_bit_xor_test.test | 10 | 0.000885s | 0.000884s | 0.000872s | byte equality observed |
| has_complement_test.test | 10 | 0.000867s | 0.000855s | 0.000861s | byte equality observed |
| has_dereference_test.test | 10 | 0.000888s | 0.000868s | 0.000866s | byte equality observed |
| has_divides_assign_test.test | 10 | 0.000878s | 0.000889s | 0.000877s | byte equality observed |
| has_divides_test.test | 10 | 0.000886s | 0.000889s | 0.000867s | byte equality observed |
| has_equal_to_test.test | 10 | 0.000880s | 0.000861s | 0.000875s | byte equality observed |
| has_greater_equal_test.test | 10 | 0.000878s | 0.000853s | 0.000865s | byte equality observed |
| has_greater_test.test | 10 | 0.000892s | 0.000883s | 0.000862s | byte equality observed |
| has_left_shift_assign_test.test | 10 | 0.000887s | 0.000883s | 0.000885s | byte equality observed |
| has_left_shift_test.test | 10 | 0.000889s | 0.000860s | 0.000883s | byte equality observed |
| has_less_equal_test.test | 10 | 0.000882s | 0.000863s | 0.000873s | byte equality observed |
| has_less_test.test | 10 | 0.000895s | 0.000880s | 0.000869s | byte equality observed |
| has_logical_and_test.test | 10 | 0.000888s | 0.000885s | 0.000854s | byte equality observed |
| has_logical_not_test.test | 10 | 0.000889s | 0.000884s | 0.000885s | byte equality observed |
| has_logical_or_test.test | 10 | 0.000886s | 0.000872s | 0.000852s | byte equality observed |
| has_minus_assign_test.test | 10 | 0.000906s | 0.000873s | 0.000865s | byte equality observed |
| has_minus_test.test | 10 | 0.000892s | 0.000900s | 0.000884s | byte equality observed |
| has_modulus_assign_test.test | 10 | 0.000881s | 0.000864s | 0.000870s | byte equality observed |
| has_modulus_test.test | 10 | 0.000883s | 0.000870s | 0.000856s | byte equality observed |
| has_multiplies_assign_test.test | 10 | 0.000882s | 0.000880s | 0.000852s | byte equality observed |
| has_multiplies_test.test | 10 | 0.000899s | 0.000880s | 0.000860s | byte equality observed |
| has_negate_test.test | 10 | 0.000882s | 0.000904s | 0.000850s | byte equality observed |
| has_not_equal_to_test.test | 10 | 0.000889s | 0.000880s | 0.000851s | byte equality observed |
| has_nothrow_assign_test.test | 10 | 0.000881s | 0.000880s | 0.000864s | byte equality observed |
| has_nothrow_assign_test_no_intrinsics.test | 10 | 0.000868s | 0.000858s | 0.000887s | byte equality observed |
| has_nothrow_constr_test.test | 10 | 0.000881s | 0.000894s | 0.000866s | byte equality observed |
| has_nothrow_constr_test_no_intrinsics.test | 10 | 0.000883s | 0.000860s | 0.000864s | byte equality observed |
| has_nothrow_copy_test.test | 10 | 0.000884s | 0.000896s | 0.000882s | byte equality observed |
| has_nothrow_copy_test_no_intrinsics.test | 10 | 0.000879s | 0.000887s | 0.000858s | byte equality observed |
| has_nothrow_destructor_test.test | 10 | 0.000874s | 0.000885s | 0.000862s | byte equality observed |
| has_operator_new_test.test | 10 | 0.000883s | 0.000879s | 0.000876s | byte equality observed |
| has_plus_assign_test.test | 10 | 0.000869s | 0.000879s | 0.000877s | byte equality observed |
| has_plus_test.test | 10 | 0.000881s | 0.000873s | 0.000851s | byte equality observed |
| has_post_decrement_test.test | 10 | 0.000878s | 0.000865s | 0.000887s | byte equality observed |
| has_post_increment_test.test | 10 | 0.000882s | 0.000881s | 0.000872s | byte equality observed |
| has_postfix_classes0_test.test | 10 | 0.000893s | 0.000880s | 0.000876s | byte equality observed |
| has_postfix_classes1_test.test | 10 | 0.000903s | 0.000877s | 0.000895s | byte equality observed |
| has_postfix_classes2_test.test | 10 | 0.000889s | 0.000895s | 0.000879s | byte equality observed |
| has_postfix_classes3_test.test | 10 | 0.000883s | 0.000864s | 0.000870s | byte equality observed |
| has_pre_decrement_test.test | 10 | 0.000862s | 0.000892s | 0.000873s | byte equality observed |
| has_pre_increment_test.test | 10 | 0.000880s | 0.000851s | 0.000859s | byte equality observed |
| has_prefix_classes0_test.test | 10 | 0.000890s | 0.000884s | 0.000863s | byte equality observed |
| has_prefix_classes1_test.test | 10 | 0.000876s | 0.000879s | 0.000878s | byte equality observed |
| has_prefix_classes2_test.test | 10 | 0.000864s | 0.000875s | 0.000878s | byte equality observed |
| has_prefix_classes3_test.test | 10 | 0.000897s | 0.000874s | 0.000859s | byte equality observed |
| has_right_shift_assign_test.test | 10 | 0.000877s | 0.000874s | 0.000864s | byte equality observed |
| has_right_shift_test.test | 10 | 0.000885s | 0.000888s | 0.000882s | byte equality observed |
| has_trivial_assign_test.test | 10 | 0.000933s | 0.000926s | 0.000920s | byte equality observed |
| has_trivial_constr_test.test | 10 | 0.000923s | 0.000905s | 0.000911s | native test oracle; output varies |
| has_trivial_copy_test.test | 10 | 0.000929s | 0.000935s | 0.000946s | native test oracle; output varies |
| has_trivial_destructor_test.test | 10 | 0.000881s | 0.000890s | 0.000853s | byte equality observed |
| has_trivial_move_assign_test.test | 10 | 0.000887s | 0.000871s | 0.000885s | byte equality observed |
| has_trivial_move_constructor_test.test | 10 | 0.000864s | 0.000897s | 0.000850s | byte equality observed |
| has_unary_minus_test.test | 10 | 0.000879s | 0.000891s | 0.000873s | byte equality observed |
| has_unary_plus_test.test | 10 | 0.000883s | 0.000876s | 0.000871s | byte equality observed |
| has_virtual_destructor_test.test | 10 | 0.000880s | 0.000889s | 0.000863s | byte equality observed |
| integral_constant_test.test | 10 | 0.000420s | 0.000425s | 0.000879s | byte equality observed |
| is_abstract_test.test | 10 | 0.000891s | 0.000883s | 0.000897s | byte equality observed |
| is_arithmetic_test.test | 10 | 0.000876s | 0.000879s | 0.000861s | byte equality observed |
| is_array_test.test | 10 | 0.000863s | 0.000889s | 0.000837s | byte equality observed |
| is_assignable_test.test | 10 | 0.000874s | 0.000880s | 0.000901s | byte equality observed |
| is_base_and_derived_test.test | 10 | 0.000877s | 0.000888s | 0.000867s | byte equality observed |
| is_base_of_test.test | 10 | 0.000877s | 0.000883s | 0.000896s | byte equality observed |
| is_bounded_array_test.test | 10 | 0.000884s | 0.000870s | 0.000872s | byte equality observed |
| is_class_test.test | 10 | 0.000878s | 0.000898s | 0.000877s | byte equality observed |
| is_complete_test.test | 10 | 0.000883s | 0.000879s | 0.000851s | byte equality observed |
| is_complex_test.test | 10 | 0.000873s | 0.000880s | 0.000876s | byte equality observed |
| is_compound_test.test | 10 | 0.000881s | 0.000871s | 0.000887s | byte equality observed |
| is_const_test.test | 10 | 0.000878s | 0.000882s | 0.000876s | byte equality observed |
| is_constructible_test.test | 10 | 0.000874s | 0.000867s | 0.000894s | byte equality observed |
| is_convertible_test.test | 10 | 0.000897s | 0.000902s | 0.000888s | byte equality observed |
| is_copy_assignable_test.test | 10 | 0.000875s | 0.000888s | 0.000894s | byte equality observed |
| is_copy_constructible_test.test | 10 | 0.000884s | 0.000902s | 0.000873s | byte equality observed |
| is_default_constr_test.test | 10 | 0.000883s | 0.000858s | 0.000868s | byte equality observed |
| is_destructible_test.test | 10 | 0.000888s | 0.000897s | 0.000877s | byte equality observed |
| is_detected_exact_test.test | 10 | 0.000884s | 0.000872s | 0.000875s | byte equality observed |
| is_detected_test.test | 10 | 0.000879s | 0.000892s | 0.000868s | byte equality observed |
| is_empty_test.test | 10 | 0.000879s | 0.000899s | 0.000874s | byte equality observed |
| is_enum_test.test | 10 | 0.000870s | 0.000900s | 0.000879s | byte equality observed |
| is_final_test.test | 10 | 0.000893s | 0.000869s | 0.000860s | byte equality observed |
| is_float_test.test | 10 | 0.000897s | 0.000881s | 0.000870s | byte equality observed |
| is_floating_point_test.test | 10 | 0.000888s | 0.000879s | 0.000877s | byte equality observed |
| is_function_test.test | 10 | 0.000891s | 0.000874s | 0.000871s | byte equality observed |
| is_fundamental_test.test | 10 | 0.000890s | 0.000874s | 0.000859s | byte equality observed |
| is_integral_test.test | 10 | 0.000892s | 0.000890s | 0.000885s | byte equality observed |
| is_list_constructible_test.test | 10 | 0.000887s | 0.000857s | 0.000875s | byte equality observed |
| is_lvalue_reference_test.test | 10 | 0.000888s | 0.000887s | 0.000880s | byte equality observed |
| is_member_func_test.test | 10 | 0.000884s | 0.000856s | 0.000869s | byte equality observed |
| is_member_obj_test.test | 10 | 0.000878s | 0.000870s | 0.000883s | byte equality observed |
| is_member_pointer_test.test | 10 | 0.000890s | 0.000900s | 0.000863s | byte equality observed |
| is_noncopyable_test.test | 10 | 0.000868s | 0.000868s | 0.000873s | byte equality observed |
| is_nothrow_move_assignable_test.test | 10 | 0.000904s | 0.000869s | 0.000869s | byte equality observed |
| is_nothrow_move_assignable_test_no_intrinsics.test | 10 | 0.000876s | 0.000871s | 0.000864s | byte equality observed |
| is_nothrow_move_constructible_test.test | 10 | 0.000872s | 0.000866s | 0.000869s | byte equality observed |
| is_nothrow_move_constructible_test_no_intrinsics.test | 10 | 0.000887s | 0.000875s | 0.000888s | byte equality observed |
| is_nothrow_swappable_test.test | 10 | 0.000859s | 0.000863s | 0.000872s | byte equality observed |
| is_object_test.test | 10 | 0.000899s | 0.000885s | 0.000895s | byte equality observed |
| is_pod_test.test | 10 | 0.000887s | 0.000875s | 0.000889s | byte equality observed |
| is_pointer_test.test | 10 | 0.000882s | 0.000870s | 0.000869s | byte equality observed |
| is_polymorphic_test.test | 10 | 0.000877s | 0.000877s | 0.000857s | byte equality observed |
| is_reference_test.test | 10 | 0.000879s | 0.000902s | 0.000862s | byte equality observed |
| is_rvalue_reference_test.test | 10 | 0.000876s | 0.000883s | 0.000867s | byte equality observed |
| is_same_test.test | 10 | 0.000885s | 0.000870s | 0.000864s | byte equality observed |
| is_scalar_test.test | 10 | 0.000866s | 0.000876s | 0.000854s | byte equality observed |
| is_scoped_enum_test.test | 10 | 0.000878s | 0.000867s | 0.000875s | byte equality observed |
| is_signed_test.test | 10 | 0.000875s | 0.000880s | 0.000871s | byte equality observed |
| is_stateless_test.test | 10 | 0.000886s | 0.000887s | 0.000883s | byte equality observed |
| is_swappable_test.test | 10 | 0.000879s | 0.000867s | 0.000877s | byte equality observed |
| is_trivially_copyable_test.test | 10 | 0.000916s | 0.000917s | 0.000890s | byte equality observed |
| is_unbounded_array_test.test | 10 | 0.000884s | 0.000860s | 0.000890s | byte equality observed |
| is_union_test.test | 10 | 0.000880s | 0.000861s | 0.000877s | byte equality observed |
| is_unscoped_enum_test.test | 10 | 0.000888s | 0.000880s | 0.000863s | byte equality observed |
| is_unsigned_test.test | 10 | 0.000892s | 0.000866s | 0.000871s | byte equality observed |
| is_virtual_base_of_test.test | 10 | 0.000887s | 0.000879s | 0.000835s | byte equality observed |
| is_void_test.test | 10 | 0.000870s | 0.000857s | 0.000875s | byte equality observed |
| is_volatile_test.test | 10 | 0.000887s | 0.000872s | 0.000831s | byte equality observed |
| make_signed_test.test | 10 | 0.000874s | 0.000890s | 0.000871s | byte equality observed |
| make_unsigned_test.test | 10 | 0.000873s | 0.000856s | 0.000852s | byte equality observed |
| make_void_test.test | 10 | 0.000901s | 0.000884s | 0.000861s | byte equality observed |
| mpl_interop_test1.test | 10 | 0.000415s | 0.000412s | 0.000848s | byte equality observed |
| mpl_interop_test2.test | 10 | 0.000412s | 0.000413s | 0.000863s | byte equality observed |
| mpl_interop_test3.test | 10 | 0.000412s | 0.000406s | 0.000849s | byte equality observed |
| negation_test.test | 10 | 0.000981s | 0.000949s | 0.000858s | byte equality observed |
| promote_basic_test.test | 10 | 0.000415s | 0.000410s | 0.000864s | byte equality observed |
| promote_enum_msvc_bug_test.test | 10 | 0.000423s | 0.000419s | 0.000871s | byte equality observed |
| promote_enum_test.test | 10 | 0.000418s | 0.000420s | 0.000880s | byte equality observed |
| promote_mpl_test.test | 10 | 0.000410s | 0.000418s | 0.000872s | byte equality observed |
| rank_test.test | 10 | 0.000952s | 0.000946s | 0.000859s | byte equality observed |
| remove_all_extents_test.test | 10 | 0.000899s | 0.000878s | 0.000849s | byte equality observed |
| remove_bounds_test.test | 10 | 0.000882s | 0.000871s | 0.000876s | byte equality observed |
| remove_const_test.test | 10 | 0.000892s | 0.000886s | 0.000863s | byte equality observed |
| remove_cv_ref_test.test | 10 | 0.000913s | 0.000857s | 0.000865s | byte equality observed |
| remove_cv_test.test | 10 | 0.000891s | 0.000885s | 0.000889s | byte equality observed |
| remove_extent_test.test | 10 | 0.000901s | 0.000851s | 0.000847s | byte equality observed |
| remove_pointer_test.test | 10 | 0.000897s | 0.000859s | 0.000880s | byte equality observed |
| remove_reference_test.test | 10 | 0.000891s | 0.000869s | 0.000859s | byte equality observed |
| remove_volatile_test.test | 10 | 0.000903s | 0.000848s | 0.000878s | byte equality observed |
| tricky_abstract_type_test.test | 10 | 0.000882s | 0.000875s | 0.000850s | byte equality observed |
| tricky_add_pointer_test.test | 10 | 0.000891s | 0.000896s | 0.000867s | byte equality observed |
| tricky_function_type_test.test | 10 | 0.000885s | 0.000856s | 0.000847s | byte equality observed |
| tricky_incomplete_type_test.test | 10 | 0.000894s | 0.000869s | 0.000868s | byte equality observed |
| tricky_is_enum_test.test | 10 | 0.000873s | 0.000872s | 0.000866s | byte equality observed |
| tricky_partial_spec_test.test | 10 | 0.000897s | 0.000860s | 0.000858s | byte equality observed |
| tricky_rvalue_test.test | 10 | 0.000893s | 0.000875s | 0.000872s | byte equality observed |
| type_identity_test.test | 10 | 0.000895s | 0.000879s | 0.000860s | byte equality observed |
| type_traits_test.test | 10 | 0.000426s | 0.000413s | 0.000853s | byte equality observed |
| type_with_alignment_test.test | 10 | 0.000996s | 0.000980s | 0.000938s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43658654032).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
