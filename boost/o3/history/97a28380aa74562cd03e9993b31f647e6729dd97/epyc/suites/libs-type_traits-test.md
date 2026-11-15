# libs/type_traits/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| type_with_alignment_test.test | RUN | 0.088011 | 0.237029 | 0.314192 | 0.001585 | 0.001533 | 0.001466 |
| type_traits_test.test | RUN | 0.128256 | 0.248344 | 0.317413 | 0.000510 | 0.000487 | 0.001203 |
| type_identity_test.test | RUN | 0.225835 | 0.808919 | 1.633237 | 0.001604 | 0.001629 | 0.001472 |
| tricky_rvalue_test.test | RUN | 0.083950 | 0.194503 | 0.247692 | 0.001306 | 0.001502 | 0.001299 |
| tricky_partial_spec_test.test | RUN | 0.099958 | 0.273635 | 0.379500 | 0.001405 | 0.001538 | 0.001351 |
| tricky_is_enum_test.test | RUN | 0.080559 | 0.178366 | 0.230971 | 0.001392 | 0.001459 | 0.001426 |
| tricky_incomplete_type_test.test | RUN | 0.133591 | 0.277300 | 0.386850 | 0.001340 | 0.001286 | 0.001579 |
| tricky_function_type_test.test | RUN | 0.103792 | 0.281273 | 0.458508 | 0.001290 | 0.001311 | 0.001282 |
| tricky_add_pointer_test.test | RUN | 0.149042 | 0.474250 | 0.950978 | 0.001404 | 0.001569 | 0.001529 |
| tricky_abstract_type_test.test | RUN | 0.081690 | 0.184944 | 0.250007 | 0.001596 | 0.001577 | 0.001384 |
| remove_volatile_test.test | RUN | 0.202960 | 0.699281 | 1.475613 | 0.001547 | 0.001570 | 0.001556 |
| remove_reference_test.test | RUN | 0.210781 | 0.731913 | 1.523288 | 0.001475 | 0.001440 | 0.001528 |
| remove_pointer_test.test | RUN | 0.221247 | 0.746784 | 1.580963 | 0.001610 | 0.001390 | 0.001685 |
| remove_extent_test.test | RUN | 0.213664 | 0.743555 | 1.540675 | 0.001425 | 0.001560 | 0.001497 |
| remove_cv_test.test | RUN | 0.216024 | 0.750730 | 1.638503 | 0.001568 | 0.001754 | 0.001591 |
| remove_cv_ref_test.test | RUN | 0.433323 | 1.831472 | 3.904934 | 0.001437 | 0.001493 | 0.001647 |
| remove_const_test.test | RUN | 0.201262 | 0.740831 | 1.519235 | 0.001421 | 0.001470 | 0.001652 |
| remove_bounds_test.test | RUN | 0.212547 | 0.804488 | 1.595042 | 0.001328 | 0.001601 | 0.001446 |
| remove_all_extents_test.test | RUN | 0.207326 | 0.760173 | 1.559756 | 0.001504 | 0.001666 | 0.001336 |
| rank_test.test | RUN | 0.088657 | 0.196041 | 0.261555 | 0.001403 | 0.001659 | 0.001546 |
| promote_mpl_test.test | RUN | 0.070846 | 0.171960 | 0.186579 | 0.000594 | 0.000541 | 0.001425 |
| promote_enum_test.test | RUN | 0.017688 | 0.045794 | 0.050117 | 0.000538 | 0.000624 | 0.001604 |
| promote_enum_msvc_bug_test.test | RUN | 0.016567 | 0.041414 | 0.047295 | 0.000642 | 0.000524 | 0.001752 |
| promote_basic_test.test | RUN | 0.019568 | 0.051174 | 0.054650 | 0.000667 | 0.000541 | 0.001454 |
| negation_test.test | RUN | 0.083463 | 0.174486 | 0.253802 | 0.001377 | 0.001365 | 0.001476 |
| mpl_interop_test3.test | RUN | 0.066826 | 0.160203 | 0.182288 | 0.000620 | 0.000673 | 0.001509 |
| mpl_interop_test2.test | RUN | 0.024707 | 0.049026 | 0.060661 | 0.000551 | 0.000549 | 0.001483 |
| mpl_interop_test1.test | RUN | 0.014535 | 0.035633 | 0.038046 | 0.000648 | 0.000714 | 0.001488 |
| make_void_test.test | RUN | 0.088603 | 0.199678 | 0.254577 | 0.001600 | 0.001474 | 0.001330 |
| make_unsigned_test.test | RUN | 0.105246 | 0.252527 | 0.364331 | 0.001504 | 0.001654 | 0.001291 |
| make_signed_test.test | RUN | 0.104433 | 0.247393 | 0.363127 | 0.001436 | 0.001411 | 0.001377 |
| is_volatile_test.test | RUN | 0.093590 | 0.212937 | 0.304933 | 0.001250 | 0.001612 | 0.001366 |
| is_void_test.test | RUN | 0.089497 | 0.202575 | 0.274875 | 0.001587 | 0.001592 | 0.001628 |
| is_virtual_base_of_test.test | RUN | 0.097247 | 0.258174 | 0.389591 | 0.001575 | 0.001370 | 0.001515 |
| is_unsigned_test.test | RUN | 0.089904 | 0.213055 | 0.298641 | 0.001552 | 0.001312 | 0.001489 |
| is_unscoped_enum_test.test | RUN | 0.087895 | 0.189288 | 0.243354 | 0.001599 | 0.001362 | 0.001514 |
| is_union_test.test | RUN | 0.092769 | 0.227039 | 0.329938 | 0.001502 | 0.001378 | 0.001496 |
| is_unbounded_array_test.test | RUN | 0.088032 | 0.201352 | 0.258890 | 0.001522 | 0.001397 | 0.001662 |
| is_trivially_copyable_test.test | RUN | 0.136654 | 0.409320 | 0.698903 | 0.001450 | 0.001438 | 0.001334 |
| is_swappable_test.test | RUN | 0.111108 | 0.313483 | 0.528781 | 0.001379 | 0.001476 | 0.001465 |
| is_stateless_test.test | RUN | 0.122714 | 0.347240 | 0.585577 | 0.001618 | 0.001330 | 0.001550 |
| is_signed_test.test | RUN | 0.090162 | 0.210141 | 0.307247 | 0.001298 | 0.001673 | 0.001608 |
| is_scoped_enum_test.test | RUN | 0.087170 | 0.194140 | 0.245280 | 0.001403 | 0.001547 | 0.001447 |
| is_scalar_test.test | RUN | 0.115084 | 0.323885 | 0.506878 | 0.001488 | 0.001538 | 0.001324 |
| is_same_test.test | RUN | 0.087037 | 0.234702 | 0.250348 | 0.001483 | 0.001398 | 0.001424 |
| is_rvalue_reference_test.test | RUN | 0.089210 | 0.256147 | 0.320930 | 0.001360 | 0.001439 | 0.001553 |
| is_reference_test.test | RUN | 0.090790 | 0.240342 | 0.289982 | 0.001403 | 0.001499 | 0.001477 |
| is_polymorphic_test.test | RUN | 0.091380 | 0.239076 | 0.321293 | 0.001459 | 0.001378 | 0.001573 |
| is_pointer_test.test | RUN | 0.093246 | 0.235329 | 0.324966 | 0.001648 | 0.001444 | 0.001465 |
| is_pod_test.test | RUN | 0.114442 | 0.363090 | 0.565010 | 0.001402 | 0.001352 | 0.001524 |
| is_object_test.test | RUN | 0.085505 | 0.199679 | 0.244350 | 0.001368 | 0.001586 | 0.001291 |
| is_nothrow_swappable_test.test | RUN | 0.115739 | 0.343751 | 0.532309 | 0.001586 | 0.001574 | 0.001598 |
| is_nothrow_move_constructible_test.test | RUN | 0.112826 | 0.352205 | 0.563909 | 0.001554 | 0.001655 | 0.001342 |
| is_nothrow_move_assignable_test.test | RUN | 0.114067 | 0.365253 | 0.560652 | 0.001365 | 0.001746 | 0.001230 |
| is_noncopyable_test.test | RUN | 0.085836 | 0.197087 | 0.254437 | 0.001411 | 0.001355 | 0.001515 |
| is_member_pointer_test.test | RUN | 0.089144 | 0.209381 | 0.257698 | 0.001626 | 0.001686 | 0.001638 |
| is_member_obj_test.test | RUN | 0.087040 | 0.216236 | 0.277153 | 0.001551 | 0.001857 | 0.001589 |
| is_member_func_test.test | RUN | 0.092067 | 0.226840 | 0.276863 | 0.001398 | 0.001498 | 0.001236 |
| is_lvalue_reference_test.test | RUN | 0.092328 | 0.240297 | 0.324878 | 0.001319 | 0.001766 | 0.001562 |
| is_list_constructible_test.test | RUN | 0.105321 | 0.275282 | 0.346758 | 0.001554 | 0.001732 | 0.001622 |
| is_integral_test.test | RUN | 0.102104 | 0.330079 | 0.490646 | 0.001626 | 0.001491 | 0.001494 |
| is_fundamental_test.test | RUN | 0.105085 | 0.335247 | 0.492966 | 0.001297 | 0.001553 | 0.001314 |
| is_function_test.test | RUN | 0.082440 | 0.219294 | 0.272520 | 0.001450 | 0.001470 | 0.001366 |
| is_floating_point_test.test | RUN | 0.092087 | 0.226061 | 0.306412 | 0.001623 | 0.001738 | 0.001562 |
| is_float_test.test | RUN | 0.092602 | 0.231385 | 0.304487 | 0.001545 | 0.001428 | 0.001512 |
| is_final_test.test | RUN | 0.091856 | 0.237796 | 0.319807 | 0.001168 | 0.001245 | 0.001419 |
| is_enum_test.test | RUN | 0.087894 | 0.199672 | 0.253283 | 0.001431 | 0.001573 | 0.001243 |
| is_empty_test.test | RUN | 0.094540 | 0.226474 | 0.275300 | 0.001630 | 0.001690 | 0.001507 |
| is_detected_test.test | RUN | 0.084441 | 0.193765 | 0.226164 | 0.001686 | 0.001407 | 0.001516 |
| is_detected_exact_test.test | RUN | 0.084425 | 0.189794 | 0.234706 | 0.001380 | 0.001489 | 0.001390 |
| is_destructible_test.test | RUN | 0.117745 | 0.355302 | 0.507823 | 0.001406 | 0.001580 | 0.001406 |
| is_default_constr_test.test | RUN | 0.120456 | 0.351198 | 0.522968 | 0.001656 | 0.001612 | 0.001686 |
| is_copy_constructible_test.test | RUN | 0.126220 | 0.366460 | 0.587342 | 0.001680 | 0.001368 | 0.001502 |
| is_copy_assignable_test.test | RUN | 0.125321 | 0.357702 | 0.618956 | 0.001410 | 0.001407 | 0.001477 |
| is_convertible_test.test | RUN | 0.120323 | 0.318927 | 0.490407 | 0.001410 | 0.001471 | 0.001446 |
| is_constructible_test.test | RUN | 0.104524 | 0.236080 | 0.329065 | 0.001592 | 0.001413 | 0.001518 |
| is_const_test.test | RUN | 0.088570 | 0.203983 | 0.282317 | 0.001517 | 0.001546 | 0.001719 |
| is_compound_test.test | RUN | 0.085615 | 0.180960 | 0.241048 | 0.001365 | 0.001502 | 0.001392 |
| is_complex_test.test | RUN | 0.113363 | 0.235388 | 0.311899 | 0.001315 | 0.001507 | 0.001490 |
| is_complete_test.test | RUN | 0.100348 | 0.237663 | 0.356618 | 0.001419 | 0.001288 | 0.001183 |
| is_class_test.test | RUN | 0.093286 | 0.216215 | 0.293163 | 0.001483 | 0.001578 | 0.001513 |
| is_bounded_array_test.test | RUN | 0.088597 | 0.196215 | 0.258714 | 0.001412 | 0.001684 | 0.001330 |
| is_base_of_test.test | RUN | 0.095194 | 0.222555 | 0.290442 | 0.001278 | 0.001600 | 0.001444 |
| is_base_and_derived_test.test | RUN | 0.095521 | 0.216390 | 0.317860 | 0.001358 | 0.001375 | 0.001266 |
| is_assignable_test.test | RUN | 0.108931 | 0.304217 | 0.474262 | 0.001501 | 0.001454 | 0.001489 |
| is_array_test.test | RUN | 0.088998 | 0.206411 | 0.319900 | 0.001317 | 0.001421 | 0.001512 |
| is_arithmetic_test.test | RUN | 0.109790 | 0.314614 | 0.482412 | 0.001205 | 0.001579 | 0.001740 |
| is_abstract_test.test | RUN | 0.182534 | 0.847932 | 1.582050 | 0.001386 | 0.001453 | 0.001296 |
| integral_constant_test.test | RUN | 0.013902 | 0.036419 | 0.037951 | 0.000527 | 0.000660 | 0.001325 |
| has_virtual_destructor_test.test | RUN | 0.094953 | 0.239014 | 0.365272 | 0.001368 | 0.001652 | 0.001640 |
| has_unary_plus_test.test | RUN | 0.175009 | 0.936263 | 1.231908 | 0.001462 | 0.001455 | 0.001543 |
| has_unary_minus_test.test | RUN | 0.177226 | 0.880628 | 1.149691 | 0.001389 | 0.001386 | 0.001619 |
| has_trivial_move_constructor_test.test | RUN | 0.121276 | 0.358608 | 0.587648 | 0.001546 | 0.001436 | 0.001414 |
| has_trivial_move_assign_test.test | RUN | 0.121494 | 0.346816 | 0.571651 | 0.001247 | 0.001446 | 0.001762 |
| has_trivial_destructor_test.test | RUN | 0.121771 | 0.358623 | 0.625872 | 0.001574 | 0.001581 | 0.001410 |
| has_trivial_copy_test.test | RUN | 0.124795 | 0.371344 | 0.643079 | 0.001557 | 0.001713 | 0.001541 |
| has_trivial_constr_test.test | RUN | 0.129000 | 0.369081 | 0.595956 | 0.001357 | 0.001434 | 0.001722 |
| has_trivial_assign_test.test | RUN | 0.125698 | 0.363515 | 0.618868 | 0.001406 | 0.001526 | 0.001758 |
| has_right_shift_test.test | RUN | 0.183539 | 0.669350 | 1.297061 | 0.001514 | 0.001397 | 0.001366 |
| has_right_shift_assign_test.test | RUN | 0.169348 | 0.646142 | 1.246599 | 0.001257 | 0.001522 | 0.001468 |
| has_prefix_classes3_test.test | RUN | 0.126010 | 0.362925 | 0.657829 | 0.001534 | 0.001334 | 0.001702 |
| has_prefix_classes2_test.test | RUN | 0.125300 | 0.381507 | 0.641765 | 0.001394 | 0.001542 | 0.001282 |
| has_prefix_classes1_test.test | RUN | 0.132590 | 0.371358 | 0.633740 | 0.001538 | 0.001582 | 0.001617 |
| has_prefix_classes0_test.test | RUN | 0.131934 | 0.383735 | 0.611219 | 0.001539 | 0.001336 | 0.001470 |
| has_pre_increment_test.test | RUN | 0.173799 | 0.874392 | 1.217865 | 0.001340 | 0.001319 | 0.001416 |
| has_pre_decrement_test.test | RUN | 0.173835 | 0.857715 | 1.227550 | 0.001164 | 0.001658 | 0.001230 |
| has_postfix_classes3_test.test | RUN | 0.129691 | 0.376512 | 0.609260 | 0.001495 | 0.001454 | 0.001612 |
| has_postfix_classes2_test.test | RUN | 0.130015 | 0.365747 | 0.604020 | 0.001667 | 0.001384 | 0.001586 |
| has_postfix_classes1_test.test | RUN | 0.133647 | 0.375083 | 0.604695 | 0.001402 | 0.001287 | 0.001566 |
| has_postfix_classes0_test.test | RUN | 0.133938 | 0.367370 | 0.623286 | 0.001446 | 0.001506 | 0.001545 |
| has_post_increment_test.test | RUN | 0.173556 | 0.877058 | 1.169217 | 0.001512 | 0.001612 | 0.001386 |
| has_post_decrement_test.test | RUN | 0.176175 | 0.896246 | 1.146250 | 0.001668 | 0.001528 | 0.001646 |
| has_plus_test.test | RUN | 0.175075 | 0.641448 | 1.241091 | 0.001282 | 0.001456 | 0.001582 |
| has_plus_assign_test.test | RUN | 0.182382 | 0.639911 | 1.229397 | 0.001394 | 0.001172 | 0.001364 |
| has_operator_new_test.test | RUN | 0.119875 | 0.326233 | 0.575972 | 0.001607 | 0.001489 | 0.001576 |
| has_nothrow_destructor_test.test | RUN | 0.127593 | 0.362756 | 0.625380 | 0.001656 | 0.001417 | 0.001532 |
| has_nothrow_copy_test.test | RUN | 0.123013 | 0.344202 | 0.595418 | 0.001401 | 0.001434 | 0.001525 |
| has_nothrow_constr_test.test | RUN | 0.119410 | 0.337763 | 0.571752 | 0.001379 | 0.001293 | 0.001425 |
| has_nothrow_assign_test.test | RUN | 0.115396 | 0.349006 | 0.582207 | 0.001575 | 0.001508 | 0.001557 |
| has_not_equal_to_test.test | RUN | 0.170752 | 0.882444 | 1.228495 | 0.001566 | 0.001418 | 0.001622 |
| has_negate_test.test | RUN | 0.164083 | 0.632321 | 1.147530 | 0.001258 | 0.001384 | 0.001636 |
| has_multiplies_test.test | RUN | 0.170020 | 0.645718 | 1.225713 | 0.001512 | 0.001351 | 0.001316 |
| has_multiplies_assign_test.test | RUN | 0.176181 | 0.658677 | 1.234516 | 0.001424 | 0.001697 | 0.001429 |
| has_modulus_test.test | RUN | 0.169379 | 0.667835 | 1.176661 | 0.001500 | 0.001525 | 0.001597 |
| has_modulus_assign_test.test | RUN | 0.169582 | 0.675792 | 1.193847 | 0.001268 | 0.001406 | 0.001552 |
| has_minus_test.test | RUN | 0.172313 | 0.668041 | 1.246368 | 0.001304 | 0.001684 | 0.001334 |
| has_minus_assign_test.test | RUN | 0.173897 | 0.677100 | 1.266296 | 0.001521 | 0.001574 | 0.001520 |
| has_logical_or_test.test | RUN | 0.203638 | 0.652150 | 1.216819 | 0.001431 | 0.001635 | 0.001663 |
| has_logical_not_test.test | RUN | 0.203442 | 0.645351 | 1.143701 | 0.001353 | 0.001473 | 0.001727 |
| has_logical_and_test.test | RUN | 0.208766 | 0.659393 | 1.248273 | 0.001446 | 0.001471 | 0.001582 |
| has_less_test.test | RUN | 0.174829 | 0.842742 | 1.262303 | 0.001450 | 0.001561 | 0.001743 |
| has_less_equal_test.test | RUN | 0.174383 | 0.857733 | 1.204741 | 0.001461 | 0.001350 | 0.001800 |
| has_left_shift_test.test | RUN | 0.186892 | 0.822981 | 1.573077 | 0.001294 | 0.001324 | 0.001350 |
| has_left_shift_assign_test.test | RUN | 0.171439 | 0.632548 | 1.246158 | 0.001463 | 0.001607 | 0.001384 |
| has_greater_test.test | RUN | 0.171164 | 0.861411 | 1.201919 | 0.001449 | 0.001590 | 0.001148 |
| has_greater_equal_test.test | RUN | 0.175210 | 0.862346 | 1.201459 | 0.001546 | 0.001367 | 0.001538 |
| has_equal_to_test.test | RUN | 0.171480 | 0.860814 | 1.154879 | 0.001394 | 0.001412 | 0.001324 |
| has_divides_test.test | RUN | 0.174288 | 0.662101 | 1.148127 | 0.001471 | 0.001422 | 0.001439 |
| has_divides_assign_test.test | RUN | 0.181300 | 0.619219 | 1.152168 | 0.001373 | 0.001463 | 0.001145 |
| has_dereference_test.test | RUN | 0.174351 | 0.622321 | 1.090541 | 0.001683 | 0.001636 | 0.001494 |
| has_complement_test.test | RUN | 0.170142 | 0.870669 | 1.127352 | 0.001494 | 0.001304 | 0.001618 |
| has_bit_xor_test.test | RUN | 0.175761 | 0.639876 | 1.176624 | 0.001577 | 0.001567 | 0.001376 |
| has_bit_xor_assign_test.test | RUN | 0.175789 | 0.631495 | 1.175714 | 0.001339 | 0.001425 | 0.001361 |
| has_bit_or_test.test | RUN | 0.173037 | 0.617049 | 1.146871 | 0.001358 | 0.001543 | 0.001631 |
| has_bit_or_assign_test.test | RUN | 0.175533 | 0.647623 | 1.135773 | 0.001673 | 0.001629 | 0.001544 |
| has_bit_and_test.test | RUN | 0.176307 | 0.623383 | 1.174847 | 0.001480 | 0.001551 | 0.001552 |
| has_bit_and_assign_test.test | RUN | 0.178693 | 0.639931 | 1.172661 | 0.001470 | 0.001555 | 0.001186 |
| has_binary_classes9_test.test | RUN | 0.190356 | 0.744618 | 1.258936 | 0.001509 | 0.001690 | 0.001503 |
| has_binary_classes8_test.test | RUN | 0.191760 | 0.777838 | 1.299395 | 0.001336 | 0.001592 | 0.001412 |
| has_binary_classes7_test.test | RUN | 0.189997 | 0.752385 | 1.299783 | 0.001348 | 0.001618 | 0.001205 |
| has_binary_classes6_test.test | RUN | 0.187854 | 0.731836 | 1.254652 | 0.001597 | 0.001419 | 0.001344 |
| has_binary_classes5_test.test | RUN | 0.186112 | 0.721081 | 1.255686 | 0.001605 | 0.001618 | 0.001549 |
| has_binary_classes4_test.test | RUN | 0.191469 | 0.754443 | 1.288857 | 0.001404 | 0.001516 | 0.001325 |
| has_binary_classes3_test.test | RUN | 0.191740 | 0.763450 | 1.250377 | 0.001466 | 0.001555 | 0.001555 |
| has_binary_classes2_test.test | RUN | 0.195108 | 0.770625 | 1.269471 | 0.001547 | 0.001592 | 0.001300 |
| has_binary_classes1_test.test | RUN | 0.185544 | 0.719094 | 1.303198 | 0.001347 | 0.001165 | 0.001521 |
| has_binary_classes0_test.test | RUN | 0.190642 | 0.762895 | 1.309833 | 0.001318 | 0.001382 | 0.001414 |
| function_traits_test.test | RUN | 0.092804 | 0.196603 | 0.309722 | 0.001474 | 0.001282 | 0.001585 |
| floating_point_promotion_test.test | RUN | 0.087633 | 0.202412 | 0.289802 | 0.001646 | 0.001440 | 0.001254 |
| extent_test.test | RUN | 0.087959 | 0.205045 | 0.294292 | 0.001291 | 0.001471 | 0.001523 |
| enable_if_test.test | RUN | 0.079893 | 0.172583 | 0.215408 | 0.001472 | 0.001265 | 0.001475 |
| disjunction_test.test | RUN | 0.083980 | 0.184019 | 0.235333 | 0.001295 | 0.001263 | 0.001612 |
| detected_test.test | RUN | 0.083836 | 0.169588 | 0.226350 | 0.001669 | 0.001511 | 0.001236 |
| detected_or_test.test | RUN | 0.085914 | 0.180057 | 0.242544 | 0.001576 | 0.001271 | 0.001563 |
| decay_test.test | RUN | 0.210291 | 0.684251 | 1.340903 | 0.001578 | 0.001538 | 0.001216 |
| cxx14_aliases_test.test | RUN | 0.140863 | 0.265243 | 0.365014 | 0.001648 | 0.001668 | 0.001282 |
| copy_reference_test.test | RUN | 0.088920 | 0.181915 | 0.244675 | 0.001340 | 0.001630 | 0.001523 |
| copy_cv_test.test | RUN | 0.088535 | 0.196014 | 0.262424 | 0.001580 | 0.001622 | 0.001297 |
| copy_cv_ref_test.test | RUN | 0.118070 | 0.318610 | 0.559352 | 0.001461 | 0.001451 | 0.001473 |
| conjunction_test.test | RUN | 0.082808 | 0.190847 | 0.244383 | 0.001305 | 0.001640 | 0.001456 |
| conditional_test.test | RUN | 0.082960 | 0.193751 | 0.235199 | 0.001288 | 0.001504 | 0.001210 |
| common_type_test.test | RUN | 0.106252 | 0.279358 | 0.442064 | 0.001468 | 0.001275 | 0.001323 |
| common_type_sfinae_test.test | RUN | 0.082794 | 0.177632 | 0.223147 | 0.001324 | 0.001360 | 0.001243 |
| common_type_sfinae2_test.test | RUN | 0.087105 | 0.188210 | 0.244238 | 0.001368 | 0.001522 | 0.001206 |
| common_type_6_test.test | RUN | 0.090214 | 0.190276 | 0.256488 | 0.001345 | 0.001359 | 0.001458 |
| common_type_5_test.test | RUN | 0.088459 | 0.183026 | 0.238760 | 0.001409 | 0.001367 | 0.001258 |
| common_type_4_test.test | RUN | 0.095614 | 0.196022 | 0.295028 | 0.001289 | 0.001422 | 0.001396 |
| common_type_3_test.test | RUN | 0.084147 | 0.167840 | 0.220863 | 0.001368 | 0.001457 | 0.001140 |
| common_type_2_test.test | RUN | 0.115009 | 0.261370 | 0.427693 | 0.001874 | 0.001550 | 0.001520 |
| alignment_of_test.test | RUN | 0.090924 | 0.215459 | 0.297280 | 0.001385 | 0.001358 | 0.001491 |
| alignment_of_a2_test.test | RUN | 0.096978 | 0.211376 | 0.301240 | 0.001373 | 0.001394 | 0.001265 |
| aligned_storage_test.test | RUN | 0.096908 | 0.215736 | 0.274756 | 0.001449 | 0.001445 | 0.001574 |
| aligned_storage_empy_test.test | RUN | 0.106127 | 0.235369 | 0.331461 | 0.001452 | 0.001622 | 0.001381 |
| aligned_storage_a2_test.test | RUN | 0.094287 | 0.209480 | 0.267582 | 0.001636 | 0.001721 | 0.001433 |
| add_volatile_test.test | RUN | 0.180008 | 0.603368 | 1.213379 | 0.001716 | 0.001560 | 0.001534 |
| add_rvalue_reference_test.test | RUN | 0.202761 | 0.693944 | 1.369959 | 0.001712 | 0.001056 | 0.001523 |
| add_reference_test.test | RUN | 0.200581 | 0.671962 | 1.374428 | 0.001427 | 0.001561 | 0.001460 |
| add_pointer_test.test | RUN | 0.136734 | 0.371244 | 0.718824 | 0.001404 | 0.001491 | 0.001590 |
| add_lvalue_reference_test.test | RUN | 0.198814 | 0.644158 | 1.364399 | 0.001335 | 0.001365 | 0.001427 |
| add_cv_test.test | RUN | 0.189627 | 0.604827 | 1.261590 | 0.001450 | 0.001464 | 0.001461 |
| add_const_test.test | RUN | 0.190017 | 0.606910 | 1.258236 | 0.001494 | 0.001223 | 0.001366 |
| is_virtual_base_of_fail.test | COMPILE_FAIL | 0.077714 | 0.165415 | 0.210703 | — | — | — |
| is_stateless_fail.test | COMPILE_FAIL | 0.083810 | 0.165145 | 0.218416 | — | — | — |
| is_polymorphic_fail.test | COMPILE_FAIL | 0.077078 | 0.161750 | 0.214116 | — | — | — |
| is_nothrow_move_constructible_fail.test | COMPILE_FAIL | 0.078366 | 0.168125 | 0.203209 | — | — | — |
| is_nothrow_move_assignable_fail.test | COMPILE_FAIL | 0.079450 | 0.158359 | 0.205418 | — | — | — |
| is_list_constructible_fail.test | COMPILE_FAIL | 0.079177 | 0.154964 | 0.202442 | — | — | — |
| is_empty_fail.test | COMPILE_FAIL | 0.078264 | 0.161427 | 0.213796 | — | — | — |
| is_destructible_fail.test | COMPILE_FAIL | 0.077632 | 0.164820 | 0.209831 | — | — | — |
| is_default_constructible_fail.test | COMPILE_FAIL | 0.077537 | 0.162156 | 0.210809 | — | — | — |
| is_copy_constructible_fail.test | COMPILE_FAIL | 0.078796 | 0.161377 | 0.211554 | — | — | — |
| is_copy_assignable_fail.test | COMPILE_FAIL | 0.079350 | 0.159395 | 0.213173 | — | — | — |
| is_convertible_fail.test | COMPILE_FAIL | 0.078466 | 0.167167 | 0.207478 | — | — | — |
| is_convertible2_fail.test | COMPILE_FAIL | 0.078801 | 0.161554 | 0.209780 | — | — | — |
| is_constructible_fail.test | COMPILE_FAIL | 0.076002 | 0.161694 | 0.209780 | — | — | — |
| is_base_of_fail.test | COMPILE_FAIL | 0.075754 | 0.161814 | 0.213359 | — | — | — |
| is_assignable_fail.test | COMPILE_FAIL | 0.079016 | 0.165215 | 0.211987 | — | — | — |
| has_nothrow_destruct_fail.test | COMPILE_FAIL | 0.080362 | 0.161801 | 0.210194 | — | — | — |
| has_nothrow_copy_fail.test | COMPILE_FAIL | 0.079948 | 0.163035 | 0.219600 | — | — | — |
| has_nothrow_cons_fail.test | COMPILE_FAIL | 0.078227 | 0.162159 | 0.216277 | — | — | — |
| has_nothrow_assign_fail.test | COMPILE_FAIL | 0.079664 | 0.165992 | 0.214580 | — | — | — |
| common_type_fail.test | COMPILE_FAIL | 0.080297 | 0.161840 | 0.217892 | — | — | — |
| common_type2_fail.test | COMPILE_FAIL | 0.080117 | 0.160479 | 0.214502 | — | — | — |
| has_nothrow_assign_test_no_intrinsics.test | RUN | 0.118728 | 0.335028 | 0.573540 | 0.001534 | 0.001534 | 0.001496 |
| has_nothrow_constr_test_no_intrinsics.test | RUN | 0.114706 | 0.332791 | 0.563128 | 0.001344 | 0.001370 | 0.001457 |
| has_nothrow_copy_test_no_intrinsics.test | RUN | 0.115703 | 0.343079 | 0.578023 | 0.001169 | 0.001042 | 0.001099 |
| is_nothrow_move_assignable_test_no_intrinsics.test | RUN | 0.114880 | 0.335680 | 0.556222 | 0.001163 | 0.001436 | 0.001179 |
| is_nothrow_move_constructible_test_no_intrinsics.test | RUN | 0.082559 | 0.233475 | 0.334723 | 0.001090 | 0.001067 | 0.001111 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.986× | 1.000×, 0.971× | 1.003× |
| clang | 1.036× | 1.056×, 1.015× | 1.003× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1364 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43686398833).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| add_const_test.test | 10 | 0.000866s | 0.000830s | 0.000872s | byte equality observed |
| add_cv_test.test | 10 | 0.000870s | 0.000849s | 0.000864s | byte equality observed |
| add_lvalue_reference_test.test | 10 | 0.000874s | 0.000844s | 0.000880s | byte equality observed |
| add_pointer_test.test | 10 | 0.000890s | 0.000845s | 0.000844s | byte equality observed |
| add_reference_test.test | 10 | 0.000899s | 0.000830s | 0.000872s | byte equality observed |
| add_rvalue_reference_test.test | 10 | 0.000893s | 0.000837s | 0.000871s | byte equality observed |
| add_volatile_test.test | 10 | 0.000892s | 0.000851s | 0.000865s | byte equality observed |
| aligned_storage_a2_test.test | 10 | 0.000952s | 0.000911s | 0.000941s | byte equality observed |
| aligned_storage_empy_test.test | 10 | 0.000858s | 0.000834s | 0.000849s | byte equality observed |
| aligned_storage_test.test | 10 | 0.000939s | 0.000933s | 0.000953s | byte equality observed |
| alignment_of_a2_test.test | 10 | 0.000859s | 0.000836s | 0.000870s | byte equality observed |
| alignment_of_test.test | 10 | 0.000866s | 0.000832s | 0.000852s | byte equality observed |
| common_type_2_test.test | 10 | 0.000858s | 0.000826s | 0.000872s | byte equality observed |
| common_type_3_test.test | 10 | 0.000876s | 0.000855s | 0.000874s | byte equality observed |
| common_type_4_test.test | 10 | 0.000864s | 0.000848s | 0.000875s | byte equality observed |
| common_type_5_test.test | 10 | 0.000886s | 0.000830s | 0.000870s | byte equality observed |
| common_type_6_test.test | 10 | 0.000866s | 0.000841s | 0.000864s | byte equality observed |
| common_type_sfinae2_test.test | 10 | 0.000862s | 0.000854s | 0.000863s | byte equality observed |
| common_type_sfinae_test.test | 10 | 0.000856s | 0.000829s | 0.000882s | byte equality observed |
| common_type_test.test | 10 | 0.000858s | 0.000840s | 0.000846s | byte equality observed |
| conditional_test.test | 10 | 0.000867s | 0.000845s | 0.000854s | byte equality observed |
| conjunction_test.test | 10 | 0.000862s | 0.000846s | 0.000849s | byte equality observed |
| copy_cv_ref_test.test | 10 | 0.000856s | 0.000826s | 0.000860s | byte equality observed |
| copy_cv_test.test | 10 | 0.000841s | 0.000844s | 0.000872s | byte equality observed |
| copy_reference_test.test | 10 | 0.000872s | 0.000818s | 0.000840s | byte equality observed |
| cxx14_aliases_test.test | 10 | 0.000864s | 0.000828s | 0.000855s | byte equality observed |
| decay_test.test | 10 | 0.000877s | 0.000838s | 0.000859s | byte equality observed |
| detected_or_test.test | 10 | 0.000867s | 0.000842s | 0.000839s | byte equality observed |
| detected_test.test | 10 | 0.000856s | 0.000835s | 0.000844s | byte equality observed |
| disjunction_test.test | 10 | 0.000853s | 0.000830s | 0.000854s | byte equality observed |
| enable_if_test.test | 10 | 0.000859s | 0.000846s | 0.000841s | byte equality observed |
| extent_test.test | 10 | 0.000853s | 0.000837s | 0.000854s | byte equality observed |
| floating_point_promotion_test.test | 10 | 0.000867s | 0.000837s | 0.000844s | byte equality observed |
| function_traits_test.test | 10 | 0.000862s | 0.000839s | 0.000840s | byte equality observed |
| has_binary_classes0_test.test | 10 | 0.000856s | 0.000838s | 0.000868s | byte equality observed |
| has_binary_classes1_test.test | 10 | 0.000853s | 0.000832s | 0.000856s | byte equality observed |
| has_binary_classes2_test.test | 10 | 0.000860s | 0.000839s | 0.000859s | byte equality observed |
| has_binary_classes3_test.test | 10 | 0.000867s | 0.000838s | 0.000856s | byte equality observed |
| has_binary_classes4_test.test | 10 | 0.000875s | 0.000828s | 0.000859s | byte equality observed |
| has_binary_classes5_test.test | 10 | 0.000874s | 0.000825s | 0.000849s | byte equality observed |
| has_binary_classes6_test.test | 10 | 0.000871s | 0.000842s | 0.000876s | byte equality observed |
| has_binary_classes7_test.test | 10 | 0.000860s | 0.000835s | 0.000872s | byte equality observed |
| has_binary_classes8_test.test | 10 | 0.000846s | 0.000854s | 0.000864s | byte equality observed |
| has_binary_classes9_test.test | 10 | 0.000848s | 0.000826s | 0.000860s | byte equality observed |
| has_bit_and_assign_test.test | 10 | 0.000868s | 0.000831s | 0.000888s | byte equality observed |
| has_bit_and_test.test | 10 | 0.000836s | 0.000828s | 0.000847s | byte equality observed |
| has_bit_or_assign_test.test | 10 | 0.000870s | 0.000824s | 0.000870s | byte equality observed |
| has_bit_or_test.test | 10 | 0.000868s | 0.000836s | 0.000845s | byte equality observed |
| has_bit_xor_assign_test.test | 10 | 0.000861s | 0.000845s | 0.000866s | byte equality observed |
| has_bit_xor_test.test | 10 | 0.000858s | 0.000825s | 0.000892s | byte equality observed |
| has_complement_test.test | 10 | 0.000848s | 0.000867s | 0.000876s | byte equality observed |
| has_dereference_test.test | 10 | 0.000865s | 0.000829s | 0.000874s | byte equality observed |
| has_divides_assign_test.test | 10 | 0.000884s | 0.000816s | 0.000879s | byte equality observed |
| has_divides_test.test | 10 | 0.000860s | 0.000840s | 0.000878s | byte equality observed |
| has_equal_to_test.test | 10 | 0.000874s | 0.000833s | 0.000890s | byte equality observed |
| has_greater_equal_test.test | 10 | 0.000842s | 0.000855s | 0.000878s | byte equality observed |
| has_greater_test.test | 10 | 0.000881s | 0.000837s | 0.000867s | byte equality observed |
| has_left_shift_assign_test.test | 10 | 0.000870s | 0.000842s | 0.000861s | byte equality observed |
| has_left_shift_test.test | 10 | 0.000851s | 0.000843s | 0.000894s | byte equality observed |
| has_less_equal_test.test | 10 | 0.000850s | 0.000848s | 0.000887s | byte equality observed |
| has_less_test.test | 10 | 0.000862s | 0.000824s | 0.000869s | byte equality observed |
| has_logical_and_test.test | 10 | 0.000853s | 0.000856s | 0.000888s | byte equality observed |
| has_logical_not_test.test | 10 | 0.000864s | 0.000818s | 0.000865s | byte equality observed |
| has_logical_or_test.test | 10 | 0.000848s | 0.000844s | 0.000873s | byte equality observed |
| has_minus_assign_test.test | 10 | 0.000866s | 0.000835s | 0.000859s | byte equality observed |
| has_minus_test.test | 10 | 0.000860s | 0.000842s | 0.000868s | byte equality observed |
| has_modulus_assign_test.test | 10 | 0.000872s | 0.000826s | 0.000869s | byte equality observed |
| has_modulus_test.test | 10 | 0.000870s | 0.000830s | 0.000867s | byte equality observed |
| has_multiplies_assign_test.test | 10 | 0.000856s | 0.000846s | 0.000878s | byte equality observed |
| has_multiplies_test.test | 10 | 0.000847s | 0.000836s | 0.000882s | byte equality observed |
| has_negate_test.test | 10 | 0.000865s | 0.000851s | 0.000868s | byte equality observed |
| has_not_equal_to_test.test | 10 | 0.000860s | 0.000829s | 0.000871s | byte equality observed |
| has_nothrow_assign_test.test | 10 | 0.000858s | 0.000822s | 0.000862s | byte equality observed |
| has_nothrow_assign_test_no_intrinsics.test | 10 | 0.000841s | 0.000834s | 0.000888s | byte equality observed |
| has_nothrow_constr_test.test | 10 | 0.000857s | 0.000827s | 0.000868s | byte equality observed |
| has_nothrow_constr_test_no_intrinsics.test | 10 | 0.000852s | 0.000837s | 0.000866s | byte equality observed |
| has_nothrow_copy_test.test | 10 | 0.000870s | 0.000841s | 0.000870s | byte equality observed |
| has_nothrow_copy_test_no_intrinsics.test | 10 | 0.000852s | 0.000835s | 0.000862s | byte equality observed |
| has_nothrow_destructor_test.test | 10 | 0.000875s | 0.000835s | 0.000869s | byte equality observed |
| has_operator_new_test.test | 10 | 0.000851s | 0.000846s | 0.000866s | byte equality observed |
| has_plus_assign_test.test | 10 | 0.000854s | 0.000860s | 0.000858s | byte equality observed |
| has_plus_test.test | 10 | 0.000860s | 0.000861s | 0.000868s | byte equality observed |
| has_post_decrement_test.test | 10 | 0.000866s | 0.000840s | 0.000856s | byte equality observed |
| has_post_increment_test.test | 10 | 0.000859s | 0.000859s | 0.000848s | byte equality observed |
| has_postfix_classes0_test.test | 10 | 0.000853s | 0.000847s | 0.000871s | byte equality observed |
| has_postfix_classes1_test.test | 10 | 0.000857s | 0.000841s | 0.000871s | byte equality observed |
| has_postfix_classes2_test.test | 10 | 0.000861s | 0.000853s | 0.000911s | byte equality observed |
| has_postfix_classes3_test.test | 10 | 0.000853s | 0.000849s | 0.000880s | byte equality observed |
| has_pre_decrement_test.test | 10 | 0.000851s | 0.000848s | 0.000882s | byte equality observed |
| has_pre_increment_test.test | 10 | 0.000877s | 0.000833s | 0.000866s | byte equality observed |
| has_prefix_classes0_test.test | 10 | 0.000860s | 0.000852s | 0.000883s | byte equality observed |
| has_prefix_classes1_test.test | 10 | 0.000852s | 0.000830s | 0.000860s | byte equality observed |
| has_prefix_classes2_test.test | 10 | 0.000842s | 0.000845s | 0.000871s | byte equality observed |
| has_prefix_classes3_test.test | 10 | 0.000865s | 0.000830s | 0.000883s | byte equality observed |
| has_right_shift_assign_test.test | 10 | 0.000847s | 0.000856s | 0.000873s | byte equality observed |
| has_right_shift_test.test | 10 | 0.000856s | 0.000849s | 0.000889s | byte equality observed |
| has_trivial_assign_test.test | 10 | 0.000898s | 0.000896s | 0.000926s | byte equality observed |
| has_trivial_constr_test.test | 10 | 0.000892s | 0.000886s | 0.000929s | native test oracle; output varies |
| has_trivial_copy_test.test | 10 | 0.000913s | 0.000888s | 0.000947s | native test oracle; output varies |
| has_trivial_destructor_test.test | 10 | 0.000857s | 0.000838s | 0.000875s | byte equality observed |
| has_trivial_move_assign_test.test | 10 | 0.000847s | 0.000839s | 0.000866s | byte equality observed |
| has_trivial_move_constructor_test.test | 10 | 0.000876s | 0.000853s | 0.000886s | byte equality observed |
| has_unary_minus_test.test | 10 | 0.000868s | 0.000827s | 0.000865s | byte equality observed |
| has_unary_plus_test.test | 10 | 0.000872s | 0.000856s | 0.000875s | byte equality observed |
| has_virtual_destructor_test.test | 10 | 0.000864s | 0.000864s | 0.000886s | byte equality observed |
| integral_constant_test.test | 10 | 0.000395s | 0.000403s | 0.000871s | byte equality observed |
| is_abstract_test.test | 10 | 0.000859s | 0.000852s | 0.000869s | byte equality observed |
| is_arithmetic_test.test | 10 | 0.000848s | 0.000853s | 0.000866s | byte equality observed |
| is_array_test.test | 10 | 0.000858s | 0.000850s | 0.000876s | byte equality observed |
| is_assignable_test.test | 10 | 0.000856s | 0.000859s | 0.000861s | byte equality observed |
| is_base_and_derived_test.test | 10 | 0.000849s | 0.000870s | 0.000859s | byte equality observed |
| is_base_of_test.test | 10 | 0.000859s | 0.000869s | 0.000849s | byte equality observed |
| is_bounded_array_test.test | 10 | 0.000847s | 0.000856s | 0.000857s | byte equality observed |
| is_class_test.test | 10 | 0.000865s | 0.000856s | 0.000866s | byte equality observed |
| is_complete_test.test | 10 | 0.000865s | 0.000849s | 0.000866s | byte equality observed |
| is_complex_test.test | 10 | 0.000845s | 0.000845s | 0.000870s | byte equality observed |
| is_compound_test.test | 10 | 0.000848s | 0.000846s | 0.000861s | byte equality observed |
| is_const_test.test | 10 | 0.000837s | 0.000849s | 0.000876s | byte equality observed |
| is_constructible_test.test | 10 | 0.000844s | 0.000850s | 0.000879s | byte equality observed |
| is_convertible_test.test | 10 | 0.000847s | 0.000839s | 0.000906s | byte equality observed |
| is_copy_assignable_test.test | 10 | 0.000834s | 0.000854s | 0.000883s | byte equality observed |
| is_copy_constructible_test.test | 10 | 0.000852s | 0.000839s | 0.000878s | byte equality observed |
| is_default_constr_test.test | 10 | 0.000854s | 0.000838s | 0.000879s | byte equality observed |
| is_destructible_test.test | 10 | 0.000847s | 0.000851s | 0.000875s | byte equality observed |
| is_detected_exact_test.test | 10 | 0.000836s | 0.000856s | 0.000879s | byte equality observed |
| is_detected_test.test | 10 | 0.000840s | 0.000819s | 0.000883s | byte equality observed |
| is_empty_test.test | 10 | 0.000840s | 0.000846s | 0.000870s | byte equality observed |
| is_enum_test.test | 10 | 0.000858s | 0.000836s | 0.000876s | byte equality observed |
| is_final_test.test | 10 | 0.000842s | 0.000840s | 0.000891s | byte equality observed |
| is_float_test.test | 10 | 0.000851s | 0.000852s | 0.000879s | byte equality observed |
| is_floating_point_test.test | 10 | 0.000861s | 0.000854s | 0.000873s | byte equality observed |
| is_function_test.test | 10 | 0.000854s | 0.000830s | 0.000889s | byte equality observed |
| is_fundamental_test.test | 10 | 0.000848s | 0.000839s | 0.000887s | byte equality observed |
| is_integral_test.test | 10 | 0.000858s | 0.000831s | 0.000870s | byte equality observed |
| is_list_constructible_test.test | 10 | 0.000852s | 0.000859s | 0.000876s | byte equality observed |
| is_lvalue_reference_test.test | 10 | 0.000866s | 0.000860s | 0.000860s | byte equality observed |
| is_member_func_test.test | 10 | 0.000846s | 0.000830s | 0.000866s | byte equality observed |
| is_member_obj_test.test | 10 | 0.000851s | 0.000837s | 0.000858s | byte equality observed |
| is_member_pointer_test.test | 10 | 0.000854s | 0.000842s | 0.000893s | byte equality observed |
| is_noncopyable_test.test | 10 | 0.000849s | 0.000855s | 0.000838s | byte equality observed |
| is_nothrow_move_assignable_test.test | 10 | 0.000859s | 0.000817s | 0.000859s | byte equality observed |
| is_nothrow_move_assignable_test_no_intrinsics.test | 10 | 0.000843s | 0.000811s | 0.000860s | byte equality observed |
| is_nothrow_move_constructible_test.test | 10 | 0.000854s | 0.000839s | 0.000869s | byte equality observed |
| is_nothrow_move_constructible_test_no_intrinsics.test | 10 | 0.000859s | 0.000825s | 0.000871s | byte equality observed |
| is_nothrow_swappable_test.test | 10 | 0.000843s | 0.000819s | 0.000853s | byte equality observed |
| is_object_test.test | 10 | 0.000845s | 0.000835s | 0.000866s | byte equality observed |
| is_pod_test.test | 10 | 0.000847s | 0.000839s | 0.000847s | byte equality observed |
| is_pointer_test.test | 10 | 0.000857s | 0.000833s | 0.000865s | byte equality observed |
| is_polymorphic_test.test | 10 | 0.000850s | 0.000824s | 0.000861s | byte equality observed |
| is_reference_test.test | 10 | 0.000849s | 0.000835s | 0.000864s | byte equality observed |
| is_rvalue_reference_test.test | 10 | 0.000847s | 0.000845s | 0.000864s | byte equality observed |
| is_same_test.test | 10 | 0.000837s | 0.000857s | 0.000885s | byte equality observed |
| is_scalar_test.test | 10 | 0.000843s | 0.000851s | 0.000893s | byte equality observed |
| is_scoped_enum_test.test | 10 | 0.000861s | 0.000835s | 0.000862s | byte equality observed |
| is_signed_test.test | 10 | 0.000825s | 0.000842s | 0.000871s | byte equality observed |
| is_stateless_test.test | 10 | 0.000833s | 0.000835s | 0.000854s | byte equality observed |
| is_swappable_test.test | 10 | 0.000837s | 0.000834s | 0.000874s | byte equality observed |
| is_trivially_copyable_test.test | 10 | 0.000872s | 0.000878s | 0.000897s | byte equality observed |
| is_unbounded_array_test.test | 10 | 0.000846s | 0.000816s | 0.000853s | byte equality observed |
| is_union_test.test | 10 | 0.000848s | 0.000853s | 0.000856s | byte equality observed |
| is_unscoped_enum_test.test | 10 | 0.000832s | 0.000830s | 0.000866s | byte equality observed |
| is_unsigned_test.test | 10 | 0.000844s | 0.000837s | 0.000906s | byte equality observed |
| is_virtual_base_of_test.test | 10 | 0.000838s | 0.000857s | 0.000867s | byte equality observed |
| is_void_test.test | 10 | 0.000846s | 0.000842s | 0.000853s | byte equality observed |
| is_volatile_test.test | 10 | 0.000830s | 0.000839s | 0.000879s | byte equality observed |
| make_signed_test.test | 10 | 0.000842s | 0.000835s | 0.000875s | byte equality observed |
| make_unsigned_test.test | 10 | 0.000836s | 0.000848s | 0.000861s | byte equality observed |
| make_void_test.test | 10 | 0.000839s | 0.000835s | 0.000885s | byte equality observed |
| mpl_interop_test1.test | 10 | 0.000400s | 0.000402s | 0.000851s | byte equality observed |
| mpl_interop_test2.test | 10 | 0.000398s | 0.000401s | 0.000860s | byte equality observed |
| mpl_interop_test3.test | 10 | 0.000395s | 0.000397s | 0.000888s | byte equality observed |
| negation_test.test | 10 | 0.000857s | 0.000848s | 0.000856s | byte equality observed |
| promote_basic_test.test | 10 | 0.000392s | 0.000392s | 0.000874s | byte equality observed |
| promote_enum_msvc_bug_test.test | 10 | 0.000390s | 0.000407s | 0.000857s | byte equality observed |
| promote_enum_test.test | 10 | 0.000400s | 0.000388s | 0.000867s | byte equality observed |
| promote_mpl_test.test | 10 | 0.000394s | 0.000384s | 0.000877s | byte equality observed |
| rank_test.test | 10 | 0.000842s | 0.000841s | 0.000860s | byte equality observed |
| remove_all_extents_test.test | 10 | 0.000849s | 0.000847s | 0.000881s | byte equality observed |
| remove_bounds_test.test | 10 | 0.000834s | 0.000849s | 0.000866s | byte equality observed |
| remove_const_test.test | 10 | 0.000842s | 0.000843s | 0.000861s | byte equality observed |
| remove_cv_ref_test.test | 10 | 0.000842s | 0.000836s | 0.000876s | byte equality observed |
| remove_cv_test.test | 10 | 0.000828s | 0.000829s | 0.000846s | byte equality observed |
| remove_extent_test.test | 10 | 0.000849s | 0.000845s | 0.000888s | byte equality observed |
| remove_pointer_test.test | 10 | 0.000844s | 0.000809s | 0.000867s | byte equality observed |
| remove_reference_test.test | 10 | 0.000848s | 0.000845s | 0.000860s | byte equality observed |
| remove_volatile_test.test | 10 | 0.000830s | 0.000820s | 0.000845s | byte equality observed |
| tricky_abstract_type_test.test | 10 | 0.000847s | 0.000819s | 0.000858s | byte equality observed |
| tricky_add_pointer_test.test | 10 | 0.000834s | 0.000846s | 0.000875s | byte equality observed |
| tricky_function_type_test.test | 10 | 0.000858s | 0.000828s | 0.000870s | byte equality observed |
| tricky_incomplete_type_test.test | 10 | 0.000838s | 0.000830s | 0.000881s | byte equality observed |
| tricky_is_enum_test.test | 10 | 0.000839s | 0.000841s | 0.000869s | byte equality observed |
| tricky_partial_spec_test.test | 10 | 0.000843s | 0.000827s | 0.000859s | byte equality observed |
| tricky_rvalue_test.test | 10 | 0.000851s | 0.000826s | 0.000877s | byte equality observed |
| type_identity_test.test | 10 | 0.000859s | 0.000832s | 0.000852s | byte equality observed |
| type_traits_test.test | 10 | 0.000390s | 0.000386s | 0.000854s | byte equality observed |
| type_with_alignment_test.test | 10 | 0.000943s | 0.000946s | 0.000972s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43686398833).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
