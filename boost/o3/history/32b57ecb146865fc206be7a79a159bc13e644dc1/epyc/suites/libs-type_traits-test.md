# libs/type_traits/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| type_with_alignment_test.test | RUN | 0.089582 | 0.247020 | 0.344352 | 0.001583 | 0.001492 | 0.001518 |
| type_traits_test.test | RUN | 0.126322 | 0.259623 | 0.322501 | 0.000534 | 0.000549 | 0.001343 |
| type_identity_test.test | RUN | 0.228034 | 0.844077 | 1.694834 | 0.001670 | 0.001733 | 0.001573 |
| tricky_rvalue_test.test | RUN | 0.083585 | 0.200955 | 0.259732 | 0.001511 | 0.001474 | 0.001516 |
| tricky_partial_spec_test.test | RUN | 0.100778 | 0.284785 | 0.399806 | 0.001478 | 0.001666 | 0.001513 |
| tricky_is_enum_test.test | RUN | 0.081385 | 0.184204 | 0.239555 | 0.001472 | 0.001369 | 0.001368 |
| tricky_incomplete_type_test.test | RUN | 0.136123 | 0.285833 | 0.391439 | 0.001319 | 0.001468 | 0.001644 |
| tricky_function_type_test.test | RUN | 0.110607 | 0.309128 | 0.474447 | 0.001589 | 0.001712 | 0.001462 |
| tricky_add_pointer_test.test | RUN | 0.154340 | 0.506089 | 0.994508 | 0.001336 | 0.001674 | 0.001363 |
| tricky_abstract_type_test.test | RUN | 0.087793 | 0.193409 | 0.266260 | 0.001317 | 0.001535 | 0.001519 |
| remove_volatile_test.test | RUN | 0.208084 | 0.748099 | 1.483075 | 0.001580 | 0.001605 | 0.001609 |
| remove_reference_test.test | RUN | 0.215693 | 0.769537 | 1.537834 | 0.001600 | 0.001788 | 0.001557 |
| remove_pointer_test.test | RUN | 0.225866 | 0.819453 | 1.599331 | 0.001502 | 0.001860 | 0.001484 |
| remove_extent_test.test | RUN | 0.216780 | 0.786572 | 1.544047 | 0.001390 | 0.001727 | 0.001631 |
| remove_cv_test.test | RUN | 0.214123 | 0.792667 | 1.574406 | 0.001576 | 0.001673 | 0.001512 |
| remove_cv_ref_test.test | RUN | 0.448445 | 1.891994 | 3.829506 | 0.001590 | 0.001461 | 0.001706 |
| remove_const_test.test | RUN | 0.208280 | 0.726620 | 1.500781 | 0.001462 | 0.001625 | 0.001608 |
| remove_bounds_test.test | RUN | 0.216104 | 0.782056 | 1.579122 | 0.001445 | 0.001564 | 0.001752 |
| remove_all_extents_test.test | RUN | 0.221282 | 0.775852 | 1.501610 | 0.001439 | 0.001664 | 0.001612 |
| rank_test.test | RUN | 0.085992 | 0.196149 | 0.265294 | 0.001359 | 0.001686 | 0.001437 |
| promote_mpl_test.test | RUN | 0.072534 | 0.175344 | 0.197218 | 0.000545 | 0.000633 | 0.001521 |
| promote_enum_test.test | RUN | 0.019140 | 0.047427 | 0.050930 | 0.000494 | 0.000723 | 0.001630 |
| promote_enum_msvc_bug_test.test | RUN | 0.015824 | 0.040503 | 0.045489 | 0.000571 | 0.000603 | 0.001562 |
| promote_basic_test.test | RUN | 0.020333 | 0.051994 | 0.054695 | 0.000607 | 0.000620 | 0.001510 |
| negation_test.test | RUN | 0.082083 | 0.188599 | 0.248119 | 0.001280 | 0.001454 | 0.001525 |
| mpl_interop_test3.test | RUN | 0.067068 | 0.172795 | 0.171386 | 0.000517 | 0.000598 | 0.001322 |
| mpl_interop_test2.test | RUN | 0.025454 | 0.051371 | 0.054167 | 0.000625 | 0.000658 | 0.001512 |
| mpl_interop_test1.test | RUN | 0.014513 | 0.038784 | 0.040357 | 0.000649 | 0.000764 | 0.001321 |
| make_void_test.test | RUN | 0.085072 | 0.195485 | 0.279801 | 0.001488 | 0.001399 | 0.001504 |
| make_unsigned_test.test | RUN | 0.097312 | 0.253090 | 0.369349 | 0.001416 | 0.001512 | 0.001492 |
| make_signed_test.test | RUN | 0.099048 | 0.253356 | 0.372725 | 0.001333 | 0.001345 | 0.001334 |
| is_volatile_test.test | RUN | 0.092145 | 0.223571 | 0.311394 | 0.001530 | 0.001598 | 0.001454 |
| is_void_test.test | RUN | 0.085907 | 0.209027 | 0.280210 | 0.001525 | 0.001725 | 0.001542 |
| is_virtual_base_of_test.test | RUN | 0.098740 | 0.268082 | 0.379795 | 0.001454 | 0.001723 | 0.001414 |
| is_unsigned_test.test | RUN | 0.087926 | 0.221533 | 0.293320 | 0.001268 | 0.001673 | 0.001730 |
| is_unscoped_enum_test.test | RUN | 0.090414 | 0.194605 | 0.247071 | 0.001483 | 0.001535 | 0.001582 |
| is_union_test.test | RUN | 0.095642 | 0.238667 | 0.340772 | 0.001534 | 0.001758 | 0.001384 |
| is_unbounded_array_test.test | RUN | 0.085287 | 0.212703 | 0.282435 | 0.001189 | 0.001676 | 0.001637 |
| is_trivially_copyable_test.test | RUN | 0.136021 | 0.438959 | 0.677974 | 0.001388 | 0.001746 | 0.001380 |
| is_swappable_test.test | RUN | 0.111979 | 0.318559 | 0.521720 | 0.001508 | 0.001771 | 0.001420 |
| is_stateless_test.test | RUN | 0.129111 | 0.381183 | 0.572371 | 0.001363 | 0.001435 | 0.001616 |
| is_signed_test.test | RUN | 0.086607 | 0.222846 | 0.285167 | 0.001694 | 0.001552 | 0.001376 |
| is_scoped_enum_test.test | RUN | 0.088189 | 0.195754 | 0.253057 | 0.001265 | 0.001630 | 0.001429 |
| is_scalar_test.test | RUN | 0.112186 | 0.347563 | 0.523281 | 0.001341 | 0.001664 | 0.001714 |
| is_same_test.test | RUN | 0.085925 | 0.208602 | 0.292146 | 0.001631 | 0.001457 | 0.001498 |
| is_rvalue_reference_test.test | RUN | 0.089580 | 0.231497 | 0.362967 | 0.001237 | 0.001546 | 0.001451 |
| is_reference_test.test | RUN | 0.087950 | 0.233497 | 0.333973 | 0.001381 | 0.001722 | 0.001559 |
| is_polymorphic_test.test | RUN | 0.092811 | 0.237728 | 0.357754 | 0.001572 | 0.001485 | 0.001651 |
| is_pointer_test.test | RUN | 0.090822 | 0.240950 | 0.350590 | 0.001498 | 0.001417 | 0.001548 |
| is_pod_test.test | RUN | 0.118041 | 0.381673 | 0.600442 | 0.001302 | 0.001746 | 0.001571 |
| is_object_test.test | RUN | 0.085254 | 0.200485 | 0.263179 | 0.001516 | 0.001586 | 0.001603 |
| is_nothrow_swappable_test.test | RUN | 0.120494 | 0.348481 | 0.537175 | 0.001548 | 0.001652 | 0.001420 |
| is_nothrow_move_constructible_test.test | RUN | 0.117377 | 0.355584 | 0.547155 | 0.001584 | 0.001556 | 0.001472 |
| is_nothrow_move_assignable_test.test | RUN | 0.117441 | 0.360740 | 0.608659 | 0.001415 | 0.001447 | 0.001352 |
| is_noncopyable_test.test | RUN | 0.086087 | 0.199677 | 0.285680 | 0.001461 | 0.001635 | 0.001396 |
| is_member_pointer_test.test | RUN | 0.086837 | 0.208105 | 0.291031 | 0.001538 | 0.001714 | 0.001613 |
| is_member_obj_test.test | RUN | 0.089332 | 0.213309 | 0.262658 | 0.001597 | 0.001546 | 0.001611 |
| is_member_func_test.test | RUN | 0.091207 | 0.217303 | 0.283013 | 0.001439 | 0.001658 | 0.001484 |
| is_lvalue_reference_test.test | RUN | 0.093239 | 0.236311 | 0.312760 | 0.001450 | 0.001636 | 0.001617 |
| is_list_constructible_test.test | RUN | 0.105672 | 0.273796 | 0.353872 | 0.001532 | 0.001644 | 0.001639 |
| is_integral_test.test | RUN | 0.102200 | 0.325933 | 0.493180 | 0.001606 | 0.001721 | 0.001621 |
| is_fundamental_test.test | RUN | 0.105879 | 0.337290 | 0.494186 | 0.001332 | 0.001488 | 0.001263 |
| is_function_test.test | RUN | 0.087126 | 0.224224 | 0.291962 | 0.001440 | 0.001490 | 0.001318 |
| is_floating_point_test.test | RUN | 0.090408 | 0.238407 | 0.312080 | 0.001404 | 0.001386 | 0.001924 |
| is_float_test.test | RUN | 0.091212 | 0.234461 | 0.332626 | 0.001619 | 0.001716 | 0.001239 |
| is_final_test.test | RUN | 0.091795 | 0.237080 | 0.325199 | 0.001413 | 0.001228 | 0.001286 |
| is_enum_test.test | RUN | 0.083932 | 0.205464 | 0.262303 | 0.001206 | 0.001520 | 0.001378 |
| is_empty_test.test | RUN | 0.089872 | 0.221441 | 0.287554 | 0.001389 | 0.001743 | 0.001582 |
| is_detected_test.test | RUN | 0.081782 | 0.190178 | 0.251410 | 0.001430 | 0.001540 | 0.001452 |
| is_detected_exact_test.test | RUN | 0.081889 | 0.190960 | 0.229507 | 0.001348 | 0.001376 | 0.001444 |
| is_destructible_test.test | RUN | 0.113098 | 0.348440 | 0.565928 | 0.001282 | 0.001820 | 0.001548 |
| is_default_constr_test.test | RUN | 0.116500 | 0.374715 | 0.568375 | 0.001654 | 0.001600 | 0.002618 |
| is_copy_constructible_test.test | RUN | 0.123785 | 0.387159 | 0.611125 | 0.001633 | 0.001622 | 0.001567 |
| is_copy_assignable_test.test | RUN | 0.124726 | 0.376228 | 0.634071 | 0.001234 | 0.001312 | 0.001490 |
| is_convertible_test.test | RUN | 0.118070 | 0.338839 | 0.519810 | 0.001393 | 0.001689 | 0.001674 |
| is_constructible_test.test | RUN | 0.098792 | 0.246364 | 0.374342 | 0.001474 | 0.001469 | 0.001232 |
| is_const_test.test | RUN | 0.087675 | 0.207404 | 0.287588 | 0.001591 | 0.001342 | 0.001626 |
| is_compound_test.test | RUN | 0.083928 | 0.183171 | 0.248876 | 0.001404 | 0.001388 | 0.001459 |
| is_complex_test.test | RUN | 0.114641 | 0.253479 | 0.334508 | 0.001281 | 0.001657 | 0.001636 |
| is_complete_test.test | RUN | 0.099000 | 0.252811 | 0.377511 | 0.001480 | 0.001384 | 0.001335 |
| is_class_test.test | RUN | 0.090255 | 0.222865 | 0.309903 | 0.001581 | 0.001422 | 0.001382 |
| is_bounded_array_test.test | RUN | 0.084569 | 0.204642 | 0.269432 | 0.001416 | 0.001631 | 0.001552 |
| is_base_of_test.test | RUN | 0.089926 | 0.228777 | 0.317009 | 0.001382 | 0.001731 | 0.001478 |
| is_base_and_derived_test.test | RUN | 0.088095 | 0.226915 | 0.307668 | 0.001549 | 0.001492 | 0.001159 |
| is_assignable_test.test | RUN | 0.106734 | 0.314456 | 0.465719 | 0.001411 | 0.001510 | 0.001595 |
| is_array_test.test | RUN | 0.086982 | 0.222896 | 0.283131 | 0.001315 | 0.001405 | 0.001645 |
| is_arithmetic_test.test | RUN | 0.105863 | 0.331428 | 0.482503 | 0.001435 | 0.001764 | 0.001668 |
| is_abstract_test.test | RUN | 0.185502 | 0.908497 | 1.584589 | 0.001573 | 0.001417 | 0.001435 |
| integral_constant_test.test | RUN | 0.014190 | 0.037714 | 0.041966 | 0.000598 | 0.000763 | 0.001597 |
| has_virtual_destructor_test.test | RUN | 0.092073 | 0.257419 | 0.372753 | 0.001496 | 0.001671 | 0.001594 |
| has_unary_plus_test.test | RUN | 0.176245 | 0.979446 | 1.220316 | 0.001476 | 0.001530 | 0.001484 |
| has_unary_minus_test.test | RUN | 0.175962 | 0.965044 | 1.233511 | 0.001339 | 0.001386 | 0.001650 |
| has_trivial_move_constructor_test.test | RUN | 0.122732 | 0.362465 | 0.574791 | 0.001423 | 0.001280 | 0.001426 |
| has_trivial_move_assign_test.test | RUN | 0.117754 | 0.355671 | 0.597153 | 0.001286 | 0.001478 | 0.001332 |
| has_trivial_destructor_test.test | RUN | 0.114784 | 0.368016 | 0.567064 | 0.001512 | 0.001510 | 0.001629 |
| has_trivial_copy_test.test | RUN | 0.120428 | 0.396457 | 0.609512 | 0.001684 | 0.001838 | 0.001539 |
| has_trivial_constr_test.test | RUN | 0.121893 | 0.403383 | 0.600576 | 0.001490 | 0.001873 | 0.001703 |
| has_trivial_assign_test.test | RUN | 0.117901 | 0.392907 | 0.628303 | 0.001417 | 0.001842 | 0.001692 |
| has_right_shift_test.test | RUN | 0.182954 | 0.718464 | 1.310228 | 0.001418 | 0.001752 | 0.001522 |
| has_right_shift_assign_test.test | RUN | 0.170429 | 0.722034 | 1.186523 | 0.001196 | 0.001491 | 0.001120 |
| has_prefix_classes3_test.test | RUN | 0.128181 | 0.419386 | 0.645473 | 0.001265 | 0.001526 | 0.001603 |
| has_prefix_classes2_test.test | RUN | 0.126136 | 0.406656 | 0.610219 | 0.001173 | 0.001738 | 0.001453 |
| has_prefix_classes1_test.test | RUN | 0.127564 | 0.401657 | 0.636514 | 0.001519 | 0.001764 | 0.001549 |
| has_prefix_classes0_test.test | RUN | 0.125312 | 0.396360 | 0.667325 | 0.001605 | 0.001853 | 0.001619 |
| has_pre_increment_test.test | RUN | 0.164811 | 0.940740 | 1.209259 | 0.001456 | 0.001558 | 0.001316 |
| has_pre_decrement_test.test | RUN | 0.164512 | 0.931099 | 1.193623 | 0.001312 | 0.001555 | 0.001391 |
| has_postfix_classes3_test.test | RUN | 0.129275 | 0.410895 | 0.635937 | 0.001469 | 0.001590 | 0.001547 |
| has_postfix_classes2_test.test | RUN | 0.128952 | 0.405028 | 0.608850 | 0.001618 | 0.001440 | 0.001617 |
| has_postfix_classes1_test.test | RUN | 0.127466 | 0.399281 | 0.646604 | 0.001228 | 0.001695 | 0.001376 |
| has_postfix_classes0_test.test | RUN | 0.128186 | 0.407181 | 0.644775 | 0.000937 | 0.001718 | 0.001297 |
| has_post_increment_test.test | RUN | 0.170534 | 0.946684 | 1.233325 | 0.001506 | 0.001641 | 0.001589 |
| has_post_decrement_test.test | RUN | 0.170397 | 0.950136 | 1.224465 | 0.001658 | 0.001444 | 0.001555 |
| has_plus_test.test | RUN | 0.170545 | 0.689986 | 1.275167 | 0.001426 | 0.001650 | 0.001218 |
| has_plus_assign_test.test | RUN | 0.175688 | 0.701853 | 1.262411 | 0.001255 | 0.001709 | 0.001422 |
| has_operator_new_test.test | RUN | 0.119196 | 0.373320 | 0.565941 | 0.001326 | 0.001346 | 0.001366 |
| has_nothrow_destructor_test.test | RUN | 0.124537 | 0.395569 | 0.628692 | 0.001375 | 0.001456 | 0.001743 |
| has_nothrow_copy_test.test | RUN | 0.119015 | 0.375845 | 0.635025 | 0.001318 | 0.001380 | 0.001566 |
| has_nothrow_constr_test.test | RUN | 0.113666 | 0.354438 | 0.608804 | 0.001275 | 0.001745 | 0.001288 |
| has_nothrow_assign_test.test | RUN | 0.115116 | 0.359279 | 0.608112 | 0.001525 | 0.001643 | 0.001304 |
| has_not_equal_to_test.test | RUN | 0.171127 | 0.947704 | 1.229185 | 0.001452 | 0.001681 | 0.001570 |
| has_negate_test.test | RUN | 0.162881 | 0.684900 | 1.186188 | 0.001297 | 0.001773 | 0.001528 |
| has_multiplies_test.test | RUN | 0.169667 | 0.696272 | 1.232556 | 0.001316 | 0.001346 | 0.001327 |
| has_multiplies_assign_test.test | RUN | 0.175905 | 0.672304 | 1.192511 | 0.001505 | 0.001764 | 0.001503 |
| has_modulus_test.test | RUN | 0.169842 | 0.709386 | 1.206159 | 0.001507 | 0.001689 | 0.001621 |
| has_modulus_assign_test.test | RUN | 0.170126 | 0.718344 | 1.279340 | 0.001226 | 0.001565 | 0.001324 |
| has_minus_test.test | RUN | 0.171867 | 0.735455 | 1.238892 | 0.001376 | 0.001581 | 0.001279 |
| has_minus_assign_test.test | RUN | 0.176798 | 0.701242 | 1.288779 | 0.001505 | 0.001722 | 0.001472 |
| has_logical_or_test.test | RUN | 0.168128 | 0.718241 | 1.229729 | 0.001424 | 0.001766 | 0.001590 |
| has_logical_not_test.test | RUN | 0.162517 | 0.716318 | 1.155444 | 0.001294 | 0.001513 | 0.001359 |
| has_logical_and_test.test | RUN | 0.167146 | 0.717239 | 1.219367 | 0.001216 | 0.001504 | 0.001496 |
| has_less_test.test | RUN | 0.171296 | 0.932626 | 1.206588 | 0.001564 | 0.001782 | 0.001497 |
| has_less_equal_test.test | RUN | 0.168964 | 0.944637 | 1.187320 | 0.001466 | 0.001580 | 0.001552 |
| has_left_shift_test.test | RUN | 0.182097 | 0.896589 | 1.558679 | 0.001278 | 0.001794 | 0.001568 |
| has_left_shift_assign_test.test | RUN | 0.166447 | 0.692379 | 1.269182 | 0.001259 | 0.001566 | 0.001558 |
| has_greater_test.test | RUN | 0.172638 | 0.952919 | 1.253149 | 0.001600 | 0.001782 | 0.001354 |
| has_greater_equal_test.test | RUN | 0.171775 | 0.954126 | 1.193801 | 0.001440 | 0.001574 | 0.001546 |
| has_equal_to_test.test | RUN | 0.169419 | 0.936370 | 1.257124 | 0.001178 | 0.001602 | 0.001468 |
| has_divides_test.test | RUN | 0.169083 | 0.693770 | 1.239631 | 0.001230 | 0.001472 | 0.001285 |
| has_divides_assign_test.test | RUN | 0.171890 | 0.706811 | 1.204437 | 0.001444 | 0.001764 | 0.001618 |
| has_dereference_test.test | RUN | 0.162561 | 0.705371 | 1.126234 | 0.001225 | 0.001630 | 0.001640 |
| has_complement_test.test | RUN | 0.163350 | 0.959171 | 1.230513 | 0.001305 | 0.001675 | 0.001510 |
| has_bit_xor_test.test | RUN | 0.167240 | 0.733583 | 1.239731 | 0.001405 | 0.001531 | 0.001329 |
| has_bit_xor_assign_test.test | RUN | 0.170143 | 0.695104 | 1.216251 | 0.001588 | 0.001762 | 0.001684 |
| has_bit_or_test.test | RUN | 0.167742 | 0.742743 | 1.225426 | 0.001245 | 0.001661 | 0.001666 |
| has_bit_or_assign_test.test | RUN | 0.168955 | 0.742606 | 1.270451 | 0.001331 | 0.001678 | 0.001481 |
| has_bit_and_test.test | RUN | 0.168608 | 0.699950 | 1.198723 | 0.001264 | 0.001772 | 0.001484 |
| has_bit_and_assign_test.test | RUN | 0.171692 | 0.706280 | 1.228681 | 0.001460 | 0.001730 | 0.001652 |
| has_binary_classes9_test.test | RUN | 0.182970 | 0.831893 | 1.335423 | 0.001307 | 0.001566 | 0.001656 |
| has_binary_classes8_test.test | RUN | 0.181496 | 0.849306 | 1.396596 | 0.001416 | 0.001503 | 0.001335 |
| has_binary_classes7_test.test | RUN | 0.181367 | 0.818401 | 1.337926 | 0.001176 | 0.001446 | 0.001580 |
| has_binary_classes6_test.test | RUN | 0.183430 | 0.782273 | 1.419775 | 0.001420 | 0.001666 | 0.001599 |
| has_binary_classes5_test.test | RUN | 0.181955 | 0.815197 | 1.348583 | 0.001305 | 0.001535 | 0.001571 |
| has_binary_classes4_test.test | RUN | 0.185826 | 0.827076 | 1.308254 | 0.001509 | 0.001652 | 0.001583 |
| has_binary_classes3_test.test | RUN | 0.182939 | 0.841890 | 1.364616 | 0.001184 | 0.001654 | 0.001400 |
| has_binary_classes2_test.test | RUN | 0.188822 | 0.811204 | 1.326375 | 0.001381 | 0.001584 | 0.001592 |
| has_binary_classes1_test.test | RUN | 0.183158 | 0.824338 | 1.312067 | 0.001506 | 0.001636 | 0.001424 |
| has_binary_classes0_test.test | RUN | 0.185043 | 0.832066 | 1.322566 | 0.001283 | 0.001478 | 0.001399 |
| function_traits_test.test | RUN | 0.086596 | 0.213153 | 0.300961 | 0.001350 | 0.001467 | 0.001605 |
| floating_point_promotion_test.test | RUN | 0.086921 | 0.211317 | 0.297842 | 0.001461 | 0.001624 | 0.001503 |
| extent_test.test | RUN | 0.086183 | 0.221785 | 0.309783 | 0.001275 | 0.001578 | 0.001364 |
| enable_if_test.test | RUN | 0.083648 | 0.194529 | 0.247872 | 0.001253 | 0.001501 | 0.001151 |
| disjunction_test.test | RUN | 0.082576 | 0.191292 | 0.246838 | 0.001372 | 0.001432 | 0.001274 |
| detected_test.test | RUN | 0.078882 | 0.183684 | 0.239934 | 0.001535 | 0.001657 | 0.001393 |
| detected_or_test.test | RUN | 0.084096 | 0.196595 | 0.240013 | 0.001366 | 0.001551 | 0.001511 |
| decay_test.test | RUN | 0.210438 | 0.717678 | 1.346914 | 0.001434 | 0.001811 | 0.001643 |
| cxx14_aliases_test.test | RUN | 0.130955 | 0.282074 | 0.378862 | 0.001461 | 0.001512 | 0.001226 |
| copy_reference_test.test | RUN | 0.085571 | 0.194637 | 0.251686 | 0.001372 | 0.001556 | 0.001383 |
| copy_cv_test.test | RUN | 0.088323 | 0.204548 | 0.276017 | 0.001629 | 0.001537 | 0.001604 |
| copy_cv_ref_test.test | RUN | 0.139152 | 0.341051 | 0.564019 | 0.001575 | 0.001772 | 0.001405 |
| conjunction_test.test | RUN | 0.123913 | 0.196177 | 0.245997 | 0.001450 | 0.001666 | 0.001530 |
| conditional_test.test | RUN | 0.109197 | 0.198617 | 0.237697 | 0.001206 | 0.001368 | 0.001635 |
| common_type_test.test | RUN | 0.130112 | 0.292155 | 0.489859 | 0.001284 | 0.001804 | 0.001568 |
| common_type_sfinae_test.test | RUN | 0.081383 | 0.189365 | 0.216051 | 0.001513 | 0.001799 | 0.001670 |
| common_type_sfinae2_test.test | RUN | 0.083837 | 0.199246 | 0.266725 | 0.001425 | 0.001570 | 0.001588 |
| common_type_6_test.test | RUN | 0.086762 | 0.203113 | 0.304866 | 0.001272 | 0.001499 | 0.001483 |
| common_type_5_test.test | RUN | 0.088825 | 0.199974 | 0.258549 | 0.001452 | 0.001656 | 0.001657 |
| common_type_4_test.test | RUN | 0.092295 | 0.215469 | 0.309887 | 0.001473 | 0.001668 | 0.001462 |
| common_type_3_test.test | RUN | 0.081182 | 0.186903 | 0.220677 | 0.001396 | 0.001393 | 0.001477 |
| common_type_2_test.test | RUN | 0.111298 | 0.288764 | 0.449144 | 0.001514 | 0.001632 | 0.001701 |
| alignment_of_test.test | RUN | 0.093783 | 0.240238 | 0.297638 | 0.001393 | 0.001449 | 0.001503 |
| alignment_of_a2_test.test | RUN | 0.089406 | 0.237524 | 0.286785 | 0.001418 | 0.001665 | 0.001615 |
| aligned_storage_test.test | RUN | 0.093018 | 0.235151 | 0.275824 | 0.001209 | 0.001695 | 0.001437 |
| aligned_storage_empy_test.test | RUN | 0.104603 | 0.266281 | 0.356693 | 0.001408 | 0.001794 | 0.001464 |
| aligned_storage_a2_test.test | RUN | 0.089901 | 0.232532 | 0.266959 | 0.001299 | 0.001683 | 0.001720 |
| add_volatile_test.test | RUN | 0.186255 | 0.652643 | 1.240248 | 0.001586 | 0.001682 | 0.001573 |
| add_rvalue_reference_test.test | RUN | 0.205622 | 0.735856 | 1.459300 | 0.001302 | 0.001628 | 0.001577 |
| add_reference_test.test | RUN | 0.197308 | 0.704317 | 1.439895 | 0.001432 | 0.001806 | 0.001606 |
| add_pointer_test.test | RUN | 0.130115 | 0.411746 | 0.752611 | 0.001477 | 0.001574 | 0.001639 |
| add_lvalue_reference_test.test | RUN | 0.200212 | 0.722448 | 1.401299 | 0.001635 | 0.001265 | 0.001340 |
| add_cv_test.test | RUN | 0.184299 | 0.670749 | 1.317275 | 0.001223 | 0.001173 | 0.001494 |
| add_const_test.test | RUN | 0.183784 | 0.672085 | 1.326406 | 0.001346 | 0.001514 | 0.001418 |
| is_virtual_base_of_fail.test | COMPILE_FAIL | 0.078357 | 0.179738 | 0.219044 | — | — | — |
| is_stateless_fail.test | COMPILE_FAIL | 0.081430 | 0.182074 | 0.236015 | — | — | — |
| is_polymorphic_fail.test | COMPILE_FAIL | 0.077085 | 0.173716 | 0.227868 | — | — | — |
| is_nothrow_move_constructible_fail.test | COMPILE_FAIL | 0.077362 | 0.163588 | 0.230606 | — | — | — |
| is_nothrow_move_assignable_fail.test | COMPILE_FAIL | 0.078425 | 0.164150 | 0.219592 | — | — | — |
| is_list_constructible_fail.test | COMPILE_FAIL | 0.076652 | 0.171396 | 0.210147 | — | — | — |
| is_empty_fail.test | COMPILE_FAIL | 0.078909 | 0.174682 | 0.224483 | — | — | — |
| is_destructible_fail.test | COMPILE_FAIL | 0.077724 | 0.171925 | 0.217965 | — | — | — |
| is_default_constructible_fail.test | COMPILE_FAIL | 0.077908 | 0.169183 | 0.227662 | — | — | — |
| is_copy_constructible_fail.test | COMPILE_FAIL | 0.077142 | 0.172947 | 0.226172 | — | — | — |
| is_copy_assignable_fail.test | COMPILE_FAIL | 0.077587 | 0.173530 | 0.224531 | — | — | — |
| is_convertible_fail.test | COMPILE_FAIL | 0.078259 | 0.173120 | 0.225749 | — | — | — |
| is_convertible2_fail.test | COMPILE_FAIL | 0.077902 | 0.178212 | 0.226560 | — | — | — |
| is_constructible_fail.test | COMPILE_FAIL | 0.076364 | 0.175708 | 0.231105 | — | — | — |
| is_base_of_fail.test | COMPILE_FAIL | 0.077534 | 0.170478 | 0.224101 | — | — | — |
| is_assignable_fail.test | COMPILE_FAIL | 0.078187 | 0.173535 | 0.228954 | — | — | — |
| has_nothrow_destruct_fail.test | COMPILE_FAIL | 0.077959 | 0.168420 | 0.256011 | — | — | — |
| has_nothrow_copy_fail.test | COMPILE_FAIL | 0.077116 | 0.173287 | 0.257203 | — | — | — |
| has_nothrow_cons_fail.test | COMPILE_FAIL | 0.076469 | 0.171572 | 0.219717 | — | — | — |
| has_nothrow_assign_fail.test | COMPILE_FAIL | 0.075053 | 0.177316 | 0.224682 | — | — | — |
| common_type_fail.test | COMPILE_FAIL | 0.076579 | 0.172570 | 0.227158 | — | — | — |
| common_type2_fail.test | COMPILE_FAIL | 0.075654 | 0.170517 | 0.219112 | — | — | — |
| has_nothrow_assign_test_no_intrinsics.test | RUN | 0.115358 | 0.354598 | 0.594683 | 0.001364 | 0.001457 | 0.001286 |
| has_nothrow_constr_test_no_intrinsics.test | RUN | 0.111228 | 0.355232 | 0.581167 | 0.001345 | 0.001461 | 0.001266 |
| has_nothrow_copy_test_no_intrinsics.test | RUN | 0.114094 | 0.370299 | 0.600859 | 0.001065 | 0.001219 | 0.001142 |
| is_nothrow_move_assignable_test_no_intrinsics.test | RUN | 0.113545 | 0.366124 | 0.583577 | 0.001138 | 0.001325 | 0.001264 |
| is_nothrow_move_constructible_test_no_intrinsics.test | RUN | 0.074840 | 0.237398 | 0.331288 | 0.001108 | 0.001093 | 0.001076 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.983× | 0.984×, 0.982× | 0.999× |
| clang | 1.013× | 1.015×, 1.011× | 0.973× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1364 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43639138948).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| add_const_test.test | 10 | 0.000883s | 0.000885s | 0.000859s | byte equality observed |
| add_cv_test.test | 10 | 0.000888s | 0.000884s | 0.000861s | byte equality observed |
| add_lvalue_reference_test.test | 10 | 0.000914s | 0.000875s | 0.000856s | byte equality observed |
| add_pointer_test.test | 10 | 0.000896s | 0.000870s | 0.000849s | byte equality observed |
| add_reference_test.test | 10 | 0.000897s | 0.000868s | 0.000854s | byte equality observed |
| add_rvalue_reference_test.test | 10 | 0.000901s | 0.000859s | 0.000855s | byte equality observed |
| add_volatile_test.test | 10 | 0.000915s | 0.000893s | 0.000832s | byte equality observed |
| aligned_storage_a2_test.test | 10 | 0.000994s | 0.000956s | 0.000927s | byte equality observed |
| aligned_storage_empy_test.test | 10 | 0.000890s | 0.000857s | 0.000847s | byte equality observed |
| aligned_storage_test.test | 10 | 0.000969s | 0.000952s | 0.000934s | byte equality observed |
| alignment_of_a2_test.test | 10 | 0.000887s | 0.000870s | 0.000858s | byte equality observed |
| alignment_of_test.test | 10 | 0.000895s | 0.000872s | 0.000860s | byte equality observed |
| common_type_2_test.test | 10 | 0.000888s | 0.000867s | 0.000853s | byte equality observed |
| common_type_3_test.test | 10 | 0.000892s | 0.000887s | 0.000869s | byte equality observed |
| common_type_4_test.test | 10 | 0.000900s | 0.000869s | 0.000869s | byte equality observed |
| common_type_5_test.test | 10 | 0.000880s | 0.000886s | 0.000878s | byte equality observed |
| common_type_6_test.test | 10 | 0.000889s | 0.000882s | 0.000881s | byte equality observed |
| common_type_sfinae2_test.test | 10 | 0.000877s | 0.000877s | 0.000861s | byte equality observed |
| common_type_sfinae_test.test | 10 | 0.000881s | 0.000883s | 0.000866s | byte equality observed |
| common_type_test.test | 10 | 0.000889s | 0.000882s | 0.000862s | byte equality observed |
| conditional_test.test | 10 | 0.000879s | 0.000890s | 0.000853s | byte equality observed |
| conjunction_test.test | 10 | 0.000888s | 0.000893s | 0.000858s | byte equality observed |
| copy_cv_ref_test.test | 10 | 0.000880s | 0.000897s | 0.000862s | byte equality observed |
| copy_cv_test.test | 10 | 0.000896s | 0.000853s | 0.000895s | byte equality observed |
| copy_reference_test.test | 10 | 0.000901s | 0.000885s | 0.000897s | byte equality observed |
| cxx14_aliases_test.test | 10 | 0.000889s | 0.000871s | 0.000878s | byte equality observed |
| decay_test.test | 10 | 0.000898s | 0.000885s | 0.000882s | byte equality observed |
| detected_or_test.test | 10 | 0.000889s | 0.000883s | 0.000885s | byte equality observed |
| detected_test.test | 10 | 0.000893s | 0.000865s | 0.000873s | byte equality observed |
| disjunction_test.test | 10 | 0.000883s | 0.000875s | 0.000889s | byte equality observed |
| enable_if_test.test | 10 | 0.000886s | 0.000858s | 0.000891s | byte equality observed |
| extent_test.test | 10 | 0.000891s | 0.000872s | 0.000867s | byte equality observed |
| floating_point_promotion_test.test | 10 | 0.000895s | 0.000860s | 0.000892s | byte equality observed |
| function_traits_test.test | 10 | 0.000876s | 0.000850s | 0.000874s | byte equality observed |
| has_binary_classes0_test.test | 10 | 0.000902s | 0.000867s | 0.000887s | byte equality observed |
| has_binary_classes1_test.test | 10 | 0.000877s | 0.000840s | 0.000873s | byte equality observed |
| has_binary_classes2_test.test | 10 | 0.000880s | 0.000863s | 0.000877s | byte equality observed |
| has_binary_classes3_test.test | 10 | 0.000872s | 0.000853s | 0.000871s | byte equality observed |
| has_binary_classes4_test.test | 10 | 0.000884s | 0.000848s | 0.000876s | byte equality observed |
| has_binary_classes5_test.test | 10 | 0.000887s | 0.000844s | 0.000862s | byte equality observed |
| has_binary_classes6_test.test | 10 | 0.000903s | 0.000850s | 0.000867s | byte equality observed |
| has_binary_classes7_test.test | 10 | 0.000896s | 0.000832s | 0.000870s | byte equality observed |
| has_binary_classes8_test.test | 10 | 0.000884s | 0.000870s | 0.000878s | byte equality observed |
| has_binary_classes9_test.test | 10 | 0.000888s | 0.000828s | 0.000855s | byte equality observed |
| has_bit_and_assign_test.test | 10 | 0.000886s | 0.000849s | 0.000887s | byte equality observed |
| has_bit_and_test.test | 10 | 0.000890s | 0.000874s | 0.000866s | byte equality observed |
| has_bit_or_assign_test.test | 10 | 0.000882s | 0.000849s | 0.000842s | byte equality observed |
| has_bit_or_test.test | 10 | 0.000901s | 0.000857s | 0.000872s | byte equality observed |
| has_bit_xor_assign_test.test | 10 | 0.000889s | 0.000852s | 0.000877s | byte equality observed |
| has_bit_xor_test.test | 10 | 0.000890s | 0.000850s | 0.000871s | byte equality observed |
| has_complement_test.test | 10 | 0.000880s | 0.000866s | 0.000850s | byte equality observed |
| has_dereference_test.test | 10 | 0.000894s | 0.000873s | 0.000865s | byte equality observed |
| has_divides_assign_test.test | 10 | 0.000886s | 0.000842s | 0.000852s | byte equality observed |
| has_divides_test.test | 10 | 0.000871s | 0.000861s | 0.000870s | byte equality observed |
| has_equal_to_test.test | 10 | 0.000897s | 0.000869s | 0.000873s | byte equality observed |
| has_greater_equal_test.test | 10 | 0.000885s | 0.000847s | 0.000868s | byte equality observed |
| has_greater_test.test | 10 | 0.000897s | 0.000871s | 0.000865s | byte equality observed |
| has_left_shift_assign_test.test | 10 | 0.000877s | 0.000877s | 0.000864s | byte equality observed |
| has_left_shift_test.test | 10 | 0.000876s | 0.000869s | 0.000885s | byte equality observed |
| has_less_equal_test.test | 10 | 0.000876s | 0.000872s | 0.000888s | byte equality observed |
| has_less_test.test | 10 | 0.000883s | 0.000856s | 0.000878s | byte equality observed |
| has_logical_and_test.test | 10 | 0.000871s | 0.000880s | 0.000908s | byte equality observed |
| has_logical_not_test.test | 10 | 0.000890s | 0.000897s | 0.000875s | byte equality observed |
| has_logical_or_test.test | 10 | 0.000878s | 0.000867s | 0.000883s | byte equality observed |
| has_minus_assign_test.test | 10 | 0.000882s | 0.000911s | 0.000874s | byte equality observed |
| has_minus_test.test | 10 | 0.000880s | 0.000889s | 0.000894s | byte equality observed |
| has_modulus_assign_test.test | 10 | 0.000879s | 0.000890s | 0.000868s | byte equality observed |
| has_modulus_test.test | 10 | 0.000875s | 0.000875s | 0.000895s | byte equality observed |
| has_multiplies_assign_test.test | 10 | 0.000890s | 0.000873s | 0.000864s | byte equality observed |
| has_multiplies_test.test | 10 | 0.000892s | 0.000878s | 0.000873s | byte equality observed |
| has_negate_test.test | 10 | 0.000894s | 0.000862s | 0.000855s | byte equality observed |
| has_not_equal_to_test.test | 10 | 0.000878s | 0.000866s | 0.000884s | byte equality observed |
| has_nothrow_assign_test.test | 10 | 0.000891s | 0.000856s | 0.000864s | byte equality observed |
| has_nothrow_assign_test_no_intrinsics.test | 10 | 0.000882s | 0.000864s | 0.000876s | byte equality observed |
| has_nothrow_constr_test.test | 10 | 0.000877s | 0.000840s | 0.000890s | byte equality observed |
| has_nothrow_constr_test_no_intrinsics.test | 10 | 0.000898s | 0.000856s | 0.000890s | byte equality observed |
| has_nothrow_copy_test.test | 10 | 0.000890s | 0.000869s | 0.000887s | byte equality observed |
| has_nothrow_copy_test_no_intrinsics.test | 10 | 0.000890s | 0.000872s | 0.000893s | byte equality observed |
| has_nothrow_destructor_test.test | 10 | 0.000875s | 0.000839s | 0.000883s | byte equality observed |
| has_operator_new_test.test | 10 | 0.000887s | 0.000871s | 0.000887s | byte equality observed |
| has_plus_assign_test.test | 10 | 0.000882s | 0.000841s | 0.000890s | byte equality observed |
| has_plus_test.test | 10 | 0.000892s | 0.000869s | 0.000897s | byte equality observed |
| has_post_decrement_test.test | 10 | 0.000893s | 0.000866s | 0.000895s | byte equality observed |
| has_post_increment_test.test | 10 | 0.000873s | 0.000849s | 0.000893s | byte equality observed |
| has_postfix_classes0_test.test | 10 | 0.000898s | 0.000846s | 0.000891s | byte equality observed |
| has_postfix_classes1_test.test | 10 | 0.000880s | 0.000869s | 0.000899s | byte equality observed |
| has_postfix_classes2_test.test | 10 | 0.000893s | 0.000865s | 0.000878s | byte equality observed |
| has_postfix_classes3_test.test | 10 | 0.000878s | 0.000851s | 0.000885s | byte equality observed |
| has_pre_decrement_test.test | 10 | 0.000897s | 0.000865s | 0.000882s | byte equality observed |
| has_pre_increment_test.test | 10 | 0.000875s | 0.000833s | 0.000886s | byte equality observed |
| has_prefix_classes0_test.test | 10 | 0.000876s | 0.000856s | 0.000891s | byte equality observed |
| has_prefix_classes1_test.test | 10 | 0.000877s | 0.000858s | 0.000893s | byte equality observed |
| has_prefix_classes2_test.test | 10 | 0.000862s | 0.000843s | 0.000891s | byte equality observed |
| has_prefix_classes3_test.test | 10 | 0.000865s | 0.000860s | 0.000883s | byte equality observed |
| has_right_shift_assign_test.test | 10 | 0.000884s | 0.000856s | 0.000892s | byte equality observed |
| has_right_shift_test.test | 10 | 0.000885s | 0.000848s | 0.000902s | byte equality observed |
| has_trivial_assign_test.test | 10 | 0.000926s | 0.000895s | 0.000947s | byte equality observed |
| has_trivial_constr_test.test | 10 | 0.000915s | 0.000897s | 0.000923s | native test oracle; output varies |
| has_trivial_copy_test.test | 10 | 0.000941s | 0.000899s | 0.000960s | native test oracle; output varies |
| has_trivial_destructor_test.test | 10 | 0.000897s | 0.000866s | 0.000888s | byte equality observed |
| has_trivial_move_assign_test.test | 10 | 0.000879s | 0.000860s | 0.000880s | byte equality observed |
| has_trivial_move_constructor_test.test | 10 | 0.000887s | 0.000866s | 0.000894s | byte equality observed |
| has_unary_minus_test.test | 10 | 0.000881s | 0.000860s | 0.000880s | byte equality observed |
| has_unary_plus_test.test | 10 | 0.000898s | 0.000849s | 0.000891s | byte equality observed |
| has_virtual_destructor_test.test | 10 | 0.000894s | 0.000852s | 0.000864s | byte equality observed |
| integral_constant_test.test | 10 | 0.000420s | 0.000398s | 0.000869s | byte equality observed |
| is_abstract_test.test | 10 | 0.000899s | 0.000845s | 0.000883s | byte equality observed |
| is_arithmetic_test.test | 10 | 0.000865s | 0.000846s | 0.000868s | byte equality observed |
| is_array_test.test | 10 | 0.000882s | 0.000863s | 0.000898s | byte equality observed |
| is_assignable_test.test | 10 | 0.000883s | 0.000904s | 0.000883s | byte equality observed |
| is_base_and_derived_test.test | 10 | 0.000890s | 0.000881s | 0.000885s | byte equality observed |
| is_base_of_test.test | 10 | 0.000878s | 0.000891s | 0.000896s | byte equality observed |
| is_bounded_array_test.test | 10 | 0.000905s | 0.000894s | 0.000907s | byte equality observed |
| is_class_test.test | 10 | 0.000883s | 0.000882s | 0.000863s | byte equality observed |
| is_complete_test.test | 10 | 0.000884s | 0.000907s | 0.000869s | byte equality observed |
| is_complex_test.test | 10 | 0.000899s | 0.000895s | 0.000917s | byte equality observed |
| is_compound_test.test | 10 | 0.000887s | 0.000888s | 0.000884s | byte equality observed |
| is_const_test.test | 10 | 0.000895s | 0.000896s | 0.000892s | byte equality observed |
| is_constructible_test.test | 10 | 0.000891s | 0.000881s | 0.000872s | byte equality observed |
| is_convertible_test.test | 10 | 0.000893s | 0.000860s | 0.000891s | byte equality observed |
| is_copy_assignable_test.test | 10 | 0.000891s | 0.000883s | 0.000888s | byte equality observed |
| is_copy_constructible_test.test | 10 | 0.000884s | 0.000873s | 0.000884s | byte equality observed |
| is_default_constr_test.test | 10 | 0.000891s | 0.000877s | 0.000870s | byte equality observed |
| is_destructible_test.test | 10 | 0.000886s | 0.000873s | 0.000876s | byte equality observed |
| is_detected_exact_test.test | 10 | 0.000877s | 0.000868s | 0.000883s | byte equality observed |
| is_detected_test.test | 10 | 0.000881s | 0.000885s | 0.000869s | byte equality observed |
| is_empty_test.test | 10 | 0.000886s | 0.000878s | 0.000896s | byte equality observed |
| is_enum_test.test | 10 | 0.000890s | 0.000895s | 0.000888s | byte equality observed |
| is_final_test.test | 10 | 0.000879s | 0.000888s | 0.000877s | byte equality observed |
| is_float_test.test | 10 | 0.000878s | 0.000870s | 0.000896s | byte equality observed |
| is_floating_point_test.test | 10 | 0.000895s | 0.000876s | 0.000868s | byte equality observed |
| is_function_test.test | 10 | 0.000866s | 0.000860s | 0.000869s | byte equality observed |
| is_fundamental_test.test | 10 | 0.000868s | 0.000872s | 0.000872s | byte equality observed |
| is_integral_test.test | 10 | 0.000892s | 0.000873s | 0.000876s | byte equality observed |
| is_list_constructible_test.test | 10 | 0.000880s | 0.000884s | 0.000857s | byte equality observed |
| is_lvalue_reference_test.test | 10 | 0.000889s | 0.000895s | 0.000874s | byte equality observed |
| is_member_func_test.test | 10 | 0.000886s | 0.000890s | 0.000861s | byte equality observed |
| is_member_obj_test.test | 10 | 0.000893s | 0.000902s | 0.000857s | byte equality observed |
| is_member_pointer_test.test | 10 | 0.000868s | 0.000872s | 0.000887s | byte equality observed |
| is_noncopyable_test.test | 10 | 0.000882s | 0.000876s | 0.000897s | byte equality observed |
| is_nothrow_move_assignable_test.test | 10 | 0.000879s | 0.000870s | 0.000881s | byte equality observed |
| is_nothrow_move_assignable_test_no_intrinsics.test | 10 | 0.000878s | 0.000892s | 0.000901s | byte equality observed |
| is_nothrow_move_constructible_test.test | 10 | 0.000887s | 0.000871s | 0.000873s | byte equality observed |
| is_nothrow_move_constructible_test_no_intrinsics.test | 10 | 0.000893s | 0.000893s | 0.000889s | byte equality observed |
| is_nothrow_swappable_test.test | 10 | 0.000880s | 0.000911s | 0.000905s | byte equality observed |
| is_object_test.test | 10 | 0.000883s | 0.000868s | 0.000927s | byte equality observed |
| is_pod_test.test | 10 | 0.000875s | 0.000872s | 0.000885s | byte equality observed |
| is_pointer_test.test | 10 | 0.000886s | 0.000882s | 0.000910s | byte equality observed |
| is_polymorphic_test.test | 10 | 0.000879s | 0.000868s | 0.000906s | byte equality observed |
| is_reference_test.test | 10 | 0.000879s | 0.000881s | 0.000898s | byte equality observed |
| is_rvalue_reference_test.test | 10 | 0.000886s | 0.000878s | 0.000899s | byte equality observed |
| is_same_test.test | 10 | 0.000892s | 0.000899s | 0.000892s | byte equality observed |
| is_scalar_test.test | 10 | 0.000890s | 0.000886s | 0.000888s | byte equality observed |
| is_scoped_enum_test.test | 10 | 0.000889s | 0.000903s | 0.000884s | byte equality observed |
| is_signed_test.test | 10 | 0.000891s | 0.000891s | 0.000903s | byte equality observed |
| is_stateless_test.test | 10 | 0.000878s | 0.000903s | 0.000894s | byte equality observed |
| is_swappable_test.test | 10 | 0.000883s | 0.000873s | 0.000904s | byte equality observed |
| is_trivially_copyable_test.test | 10 | 0.000905s | 0.000909s | 0.000903s | byte equality observed |
| is_unbounded_array_test.test | 10 | 0.000892s | 0.000866s | 0.000855s | byte equality observed |
| is_union_test.test | 10 | 0.000882s | 0.000887s | 0.000866s | byte equality observed |
| is_unscoped_enum_test.test | 10 | 0.000889s | 0.000884s | 0.000900s | byte equality observed |
| is_unsigned_test.test | 10 | 0.000872s | 0.000885s | 0.000870s | byte equality observed |
| is_virtual_base_of_test.test | 10 | 0.000895s | 0.000877s | 0.000873s | byte equality observed |
| is_void_test.test | 10 | 0.000895s | 0.000865s | 0.000865s | byte equality observed |
| is_volatile_test.test | 10 | 0.000900s | 0.000882s | 0.000872s | byte equality observed |
| make_signed_test.test | 10 | 0.000882s | 0.000873s | 0.000891s | byte equality observed |
| make_unsigned_test.test | 10 | 0.000901s | 0.000872s | 0.000884s | byte equality observed |
| make_void_test.test | 10 | 0.000889s | 0.000884s | 0.000880s | byte equality observed |
| mpl_interop_test1.test | 10 | 0.000415s | 0.000402s | 0.000872s | byte equality observed |
| mpl_interop_test2.test | 10 | 0.000418s | 0.000409s | 0.000865s | byte equality observed |
| mpl_interop_test3.test | 10 | 0.000424s | 0.000402s | 0.000883s | byte equality observed |
| negation_test.test | 10 | 0.000918s | 0.000915s | 0.000871s | byte equality observed |
| promote_basic_test.test | 10 | 0.000416s | 0.000401s | 0.000884s | byte equality observed |
| promote_enum_msvc_bug_test.test | 10 | 0.000415s | 0.000420s | 0.000868s | byte equality observed |
| promote_enum_test.test | 10 | 0.000421s | 0.000419s | 0.000891s | byte equality observed |
| promote_mpl_test.test | 10 | 0.000421s | 0.000406s | 0.000889s | byte equality observed |
| rank_test.test | 10 | 0.000902s | 0.000870s | 0.000869s | byte equality observed |
| remove_all_extents_test.test | 10 | 0.000895s | 0.000887s | 0.000890s | byte equality observed |
| remove_bounds_test.test | 10 | 0.000883s | 0.000860s | 0.000865s | byte equality observed |
| remove_const_test.test | 10 | 0.000894s | 0.000871s | 0.000872s | byte equality observed |
| remove_cv_ref_test.test | 10 | 0.000901s | 0.000868s | 0.000873s | byte equality observed |
| remove_cv_test.test | 10 | 0.000894s | 0.000848s | 0.000860s | byte equality observed |
| remove_extent_test.test | 10 | 0.000903s | 0.000852s | 0.000886s | byte equality observed |
| remove_pointer_test.test | 10 | 0.000893s | 0.000866s | 0.000892s | byte equality observed |
| remove_reference_test.test | 10 | 0.000900s | 0.000869s | 0.000886s | byte equality observed |
| remove_volatile_test.test | 10 | 0.000891s | 0.000856s | 0.000870s | byte equality observed |
| tricky_abstract_type_test.test | 10 | 0.000884s | 0.000857s | 0.000895s | byte equality observed |
| tricky_add_pointer_test.test | 10 | 0.000889s | 0.000854s | 0.000897s | byte equality observed |
| tricky_function_type_test.test | 10 | 0.000903s | 0.000841s | 0.000877s | byte equality observed |
| tricky_incomplete_type_test.test | 10 | 0.000884s | 0.000837s | 0.000881s | byte equality observed |
| tricky_is_enum_test.test | 10 | 0.000897s | 0.000844s | 0.000887s | byte equality observed |
| tricky_partial_spec_test.test | 10 | 0.000898s | 0.000847s | 0.000892s | byte equality observed |
| tricky_rvalue_test.test | 10 | 0.000895s | 0.000853s | 0.000891s | byte equality observed |
| type_identity_test.test | 10 | 0.000902s | 0.000860s | 0.000888s | byte equality observed |
| type_traits_test.test | 10 | 0.000421s | 0.000395s | 0.000891s | byte equality observed |
| type_with_alignment_test.test | 10 | 0.000995s | 0.000950s | 0.001001s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43639138948).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
