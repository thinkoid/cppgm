# libs/type_traits/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| type_with_alignment_test.test | RUN | 0.098230 | 0.232580 | 0.314881 | 0.001507 | 0.001455 | 0.001364 |
| type_traits_test.test | RUN | 0.139556 | 0.251676 | 0.312302 | 0.000470 | 0.000511 | 0.001223 |
| type_identity_test.test | RUN | 0.231488 | 0.819563 | 1.618599 | 0.001674 | 0.001747 | 0.001554 |
| tricky_rvalue_test.test | RUN | 0.089004 | 0.183546 | 0.249205 | 0.001446 | 0.001475 | 0.001295 |
| tricky_partial_spec_test.test | RUN | 0.101688 | 0.290277 | 0.394670 | 0.001434 | 0.001456 | 0.001618 |
| tricky_is_enum_test.test | RUN | 0.080535 | 0.198228 | 0.233043 | 0.001483 | 0.001552 | 0.001376 |
| tricky_incomplete_type_test.test | RUN | 0.136826 | 0.304591 | 0.364746 | 0.001370 | 0.001467 | 0.001355 |
| tricky_function_type_test.test | RUN | 0.109066 | 0.298915 | 0.440909 | 0.001589 | 0.001331 | 0.001442 |
| tricky_add_pointer_test.test | RUN | 0.152024 | 0.499591 | 0.939122 | 0.001580 | 0.001715 | 0.001681 |
| tricky_abstract_type_test.test | RUN | 0.085584 | 0.189772 | 0.240931 | 0.001636 | 0.001475 | 0.001510 |
| remove_volatile_test.test | RUN | 0.202292 | 0.717871 | 1.511891 | 0.001582 | 0.001702 | 0.001629 |
| remove_reference_test.test | RUN | 0.203854 | 0.759446 | 1.539093 | 0.001736 | 0.001593 | 0.001553 |
| remove_pointer_test.test | RUN | 0.224046 | 0.811014 | 1.623475 | 0.001614 | 0.001533 | 0.001694 |
| remove_extent_test.test | RUN | 0.211876 | 0.766738 | 1.579432 | 0.001461 | 0.001717 | 0.001679 |
| remove_cv_test.test | RUN | 0.209801 | 0.741035 | 1.558530 | 0.001648 | 0.001753 | 0.001661 |
| remove_cv_ref_test.test | RUN | 0.431982 | 1.823502 | 3.687715 | 0.001428 | 0.001364 | 0.001346 |
| remove_const_test.test | RUN | 0.207483 | 0.714011 | 1.458704 | 0.001425 | 0.001770 | 0.001553 |
| remove_bounds_test.test | RUN | 0.215031 | 0.773530 | 1.543406 | 0.001486 | 0.001593 | 0.001713 |
| remove_all_extents_test.test | RUN | 0.213599 | 0.776527 | 1.509766 | 0.001548 | 0.001292 | 0.001456 |
| rank_test.test | RUN | 0.084845 | 0.190842 | 0.267859 | 0.001426 | 0.001743 | 0.001423 |
| promote_mpl_test.test | RUN | 0.070924 | 0.178928 | 0.200264 | 0.000516 | 0.000548 | 0.001324 |
| promote_enum_test.test | RUN | 0.017244 | 0.046414 | 0.051018 | 0.000626 | 0.000657 | 0.001535 |
| promote_enum_msvc_bug_test.test | RUN | 0.015838 | 0.041968 | 0.042024 | 0.000724 | 0.000637 | 0.001324 |
| promote_basic_test.test | RUN | 0.021426 | 0.051773 | 0.049281 | 0.000612 | 0.000552 | 0.001358 |
| negation_test.test | RUN | 0.085124 | 0.189493 | 0.220531 | 0.001332 | 0.001664 | 0.001153 |
| mpl_interop_test3.test | RUN | 0.063699 | 0.168691 | 0.170283 | 0.000476 | 0.000600 | 0.001206 |
| mpl_interop_test2.test | RUN | 0.025105 | 0.052060 | 0.049533 | 0.000541 | 0.000534 | 0.001200 |
| mpl_interop_test1.test | RUN | 0.014324 | 0.039879 | 0.036146 | 0.000530 | 0.000697 | 0.001388 |
| make_void_test.test | RUN | 0.094408 | 0.209525 | 0.240161 | 0.001736 | 0.001581 | 0.001478 |
| make_unsigned_test.test | RUN | 0.107068 | 0.270731 | 0.324581 | 0.001535 | 0.001479 | 0.001393 |
| make_signed_test.test | RUN | 0.109111 | 0.271139 | 0.336001 | 0.001473 | 0.001494 | 0.001157 |
| is_volatile_test.test | RUN | 0.097022 | 0.233926 | 0.279322 | 0.001547 | 0.001532 | 0.001415 |
| is_void_test.test | RUN | 0.092984 | 0.218209 | 0.254353 | 0.001471 | 0.001837 | 0.001312 |
| is_virtual_base_of_test.test | RUN | 0.100291 | 0.265816 | 0.361216 | 0.001784 | 0.001538 | 0.001355 |
| is_unsigned_test.test | RUN | 0.089588 | 0.214941 | 0.263997 | 0.001552 | 0.001479 | 0.001447 |
| is_unscoped_enum_test.test | RUN | 0.087237 | 0.195711 | 0.229049 | 0.001499 | 0.001320 | 0.001274 |
| is_union_test.test | RUN | 0.099454 | 0.224891 | 0.341547 | 0.001624 | 0.001539 | 0.001708 |
| is_unbounded_array_test.test | RUN | 0.094620 | 0.194377 | 0.294933 | 0.001457 | 0.001583 | 0.001670 |
| is_trivially_copyable_test.test | RUN | 0.145905 | 0.391503 | 0.714814 | 0.001678 | 0.001567 | 0.001291 |
| is_swappable_test.test | RUN | 0.122395 | 0.293585 | 0.514140 | 0.001350 | 0.001468 | 0.001436 |
| is_stateless_test.test | RUN | 0.136662 | 0.336404 | 0.619594 | 0.001818 | 0.001296 | 0.001599 |
| is_signed_test.test | RUN | 0.098183 | 0.203163 | 0.287674 | 0.001544 | 0.001470 | 0.001569 |
| is_scoped_enum_test.test | RUN | 0.096076 | 0.182227 | 0.247358 | 0.001424 | 0.001666 | 0.001666 |
| is_scalar_test.test | RUN | 0.121731 | 0.321155 | 0.514972 | 0.001686 | 0.001400 | 0.001544 |
| is_same_test.test | RUN | 0.093576 | 0.202717 | 0.291308 | 0.001546 | 0.001570 | 0.001697 |
| is_rvalue_reference_test.test | RUN | 0.097456 | 0.223514 | 0.312042 | 0.001303 | 0.001360 | 0.001575 |
| is_reference_test.test | RUN | 0.099040 | 0.229926 | 0.317956 | 0.001326 | 0.001775 | 0.001684 |
| is_polymorphic_test.test | RUN | 0.097627 | 0.243964 | 0.344333 | 0.001754 | 0.001673 | 0.001460 |
| is_pointer_test.test | RUN | 0.097273 | 0.233462 | 0.318031 | 0.001634 | 0.001513 | 0.001483 |
| is_pod_test.test | RUN | 0.126560 | 0.391205 | 0.587702 | 0.001377 | 0.001446 | 0.001681 |
| is_object_test.test | RUN | 0.090962 | 0.201846 | 0.270193 | 0.001342 | 0.001537 | 0.001392 |
| is_nothrow_swappable_test.test | RUN | 0.126818 | 0.365454 | 0.577985 | 0.001753 | 0.001168 | 0.001570 |
| is_nothrow_move_constructible_test.test | RUN | 0.124711 | 0.368868 | 0.585604 | 0.001780 | 0.001762 | 0.001511 |
| is_nothrow_move_assignable_test.test | RUN | 0.125985 | 0.370184 | 0.563372 | 0.001367 | 0.001738 | 0.001652 |
| is_noncopyable_test.test | RUN | 0.093193 | 0.208089 | 0.284183 | 0.001374 | 0.001379 | 0.001346 |
| is_member_pointer_test.test | RUN | 0.092945 | 0.212720 | 0.270218 | 0.001661 | 0.001633 | 0.001545 |
| is_member_obj_test.test | RUN | 0.085981 | 0.208632 | 0.273026 | 0.001564 | 0.001217 | 0.001292 |
| is_member_func_test.test | RUN | 0.088504 | 0.218827 | 0.297829 | 0.001422 | 0.001398 | 0.001642 |
| is_lvalue_reference_test.test | RUN | 0.091868 | 0.240269 | 0.312783 | 0.001300 | 0.001794 | 0.001730 |
| is_list_constructible_test.test | RUN | 0.106789 | 0.310254 | 0.343343 | 0.001728 | 0.001460 | 0.001720 |
| is_integral_test.test | RUN | 0.103070 | 0.373535 | 0.488145 | 0.001102 | 0.001408 | 0.001371 |
| is_fundamental_test.test | RUN | 0.110002 | 0.380942 | 0.495123 | 0.001458 | 0.001376 | 0.001279 |
| is_function_test.test | RUN | 0.088935 | 0.274080 | 0.299072 | 0.001366 | 0.001389 | 0.001413 |
| is_floating_point_test.test | RUN | 0.093485 | 0.219467 | 0.328704 | 0.001653 | 0.001693 | 0.001662 |
| is_float_test.test | RUN | 0.089317 | 0.219107 | 0.314545 | 0.001624 | 0.001290 | 0.001632 |
| is_final_test.test | RUN | 0.090070 | 0.221312 | 0.338987 | 0.001203 | 0.001290 | 0.001509 |
| is_enum_test.test | RUN | 0.082873 | 0.190592 | 0.271632 | 0.001152 | 0.001303 | 0.001483 |
| is_empty_test.test | RUN | 0.094296 | 0.208347 | 0.306546 | 0.001672 | 0.001684 | 0.001754 |
| is_detected_test.test | RUN | 0.082809 | 0.180379 | 0.246205 | 0.001496 | 0.001131 | 0.001756 |
| is_detected_exact_test.test | RUN | 0.082627 | 0.181028 | 0.251684 | 0.001162 | 0.001379 | 0.001454 |
| is_destructible_test.test | RUN | 0.112136 | 0.335438 | 0.537834 | 0.001333 | 0.001663 | 0.001725 |
| is_default_constr_test.test | RUN | 0.116841 | 0.356650 | 0.612167 | 0.001682 | 0.001427 | 0.001624 |
| is_copy_constructible_test.test | RUN | 0.131462 | 0.374720 | 0.633939 | 0.001382 | 0.001369 | 0.001490 |
| is_copy_assignable_test.test | RUN | 0.129548 | 0.355227 | 0.618561 | 0.001676 | 0.001311 | 0.001345 |
| is_convertible_test.test | RUN | 0.124989 | 0.338720 | 0.508507 | 0.001361 | 0.001797 | 0.001422 |
| is_constructible_test.test | RUN | 0.105220 | 0.244865 | 0.348398 | 0.001623 | 0.001487 | 0.001416 |
| is_const_test.test | RUN | 0.095856 | 0.219158 | 0.297254 | 0.001217 | 0.001174 | 0.001310 |
| is_compound_test.test | RUN | 0.092326 | 0.191498 | 0.222509 | 0.001587 | 0.001482 | 0.001396 |
| is_complex_test.test | RUN | 0.125017 | 0.250753 | 0.337148 | 0.001327 | 0.001736 | 0.001511 |
| is_complete_test.test | RUN | 0.100845 | 0.274714 | 0.357237 | 0.001638 | 0.001343 | 0.001576 |
| is_class_test.test | RUN | 0.089473 | 0.240134 | 0.314610 | 0.001636 | 0.001465 | 0.001247 |
| is_bounded_array_test.test | RUN | 0.084857 | 0.222362 | 0.270751 | 0.001628 | 0.001636 | 0.001379 |
| is_base_of_test.test | RUN | 0.090630 | 0.230207 | 0.306867 | 0.001345 | 0.001723 | 0.001768 |
| is_base_and_derived_test.test | RUN | 0.097226 | 0.221093 | 0.307367 | 0.001605 | 0.001331 | 0.001630 |
| is_assignable_test.test | RUN | 0.112988 | 0.315849 | 0.458565 | 0.001489 | 0.001655 | 0.001654 |
| is_array_test.test | RUN | 0.094414 | 0.211928 | 0.281051 | 0.001770 | 0.001614 | 0.001286 |
| is_arithmetic_test.test | RUN | 0.113267 | 0.335875 | 0.470056 | 0.001493 | 0.001640 | 0.001672 |
| is_abstract_test.test | RUN | 0.197646 | 0.931524 | 1.646354 | 0.001566 | 0.001570 | 0.001475 |
| integral_constant_test.test | RUN | 0.015067 | 0.035365 | 0.043936 | 0.000702 | 0.000757 | 0.001530 |
| has_virtual_destructor_test.test | RUN | 0.102409 | 0.256541 | 0.379369 | 0.001235 | 0.001811 | 0.001665 |
| has_unary_plus_test.test | RUN | 0.181229 | 0.890213 | 1.234926 | 0.001726 | 0.001598 | 0.001652 |
| has_unary_minus_test.test | RUN | 0.175151 | 0.922090 | 1.231110 | 0.001697 | 0.001698 | 0.001544 |
| has_trivial_move_constructor_test.test | RUN | 0.128699 | 0.383314 | 0.622953 | 0.001398 | 0.001218 | 0.001657 |
| has_trivial_move_assign_test.test | RUN | 0.128186 | 0.353049 | 0.588507 | 0.001493 | 0.001660 | 0.001643 |
| has_trivial_destructor_test.test | RUN | 0.125838 | 0.364914 | 0.578114 | 0.001760 | 0.001321 | 0.001286 |
| has_trivial_copy_test.test | RUN | 0.134195 | 0.373933 | 0.600653 | 0.001808 | 0.001547 | 0.001748 |
| has_trivial_constr_test.test | RUN | 0.132155 | 0.381797 | 0.611067 | 0.001626 | 0.001712 | 0.001702 |
| has_trivial_assign_test.test | RUN | 0.130539 | 0.369705 | 0.621851 | 0.001470 | 0.001718 | 0.001675 |
| has_right_shift_test.test | RUN | 0.195904 | 0.707041 | 1.255943 | 0.001586 | 0.001405 | 0.001568 |
| has_right_shift_assign_test.test | RUN | 0.180657 | 0.652514 | 1.212811 | 0.001255 | 0.001549 | 0.001426 |
| has_prefix_classes3_test.test | RUN | 0.136042 | 0.380170 | 0.643425 | 0.001364 | 0.001568 | 0.001676 |
| has_prefix_classes2_test.test | RUN | 0.134264 | 0.381099 | 0.633987 | 0.001341 | 0.001506 | 0.001562 |
| has_prefix_classes1_test.test | RUN | 0.129396 | 0.392046 | 0.602059 | 0.001496 | 0.001216 | 0.001710 |
| has_prefix_classes0_test.test | RUN | 0.130926 | 0.391031 | 0.657072 | 0.001672 | 0.001628 | 0.001744 |
| has_pre_increment_test.test | RUN | 0.168276 | 1.006037 | 1.228723 | 0.001304 | 0.001902 | 0.001705 |
| has_pre_decrement_test.test | RUN | 0.168813 | 0.965441 | 1.222475 | 0.001134 | 0.001635 | 0.001586 |
| has_postfix_classes3_test.test | RUN | 0.127667 | 0.397657 | 0.682274 | 0.001653 | 0.001580 | 0.001657 |
| has_postfix_classes2_test.test | RUN | 0.130423 | 0.391185 | 0.628542 | 0.001676 | 0.001159 | 0.001602 |
| has_postfix_classes1_test.test | RUN | 0.127255 | 0.423980 | 0.651151 | 0.001445 | 0.001416 | 0.001572 |
| has_postfix_classes0_test.test | RUN | 0.128353 | 0.413884 | 0.645388 | 0.001150 | 0.001466 | 0.001623 |
| has_post_increment_test.test | RUN | 0.170604 | 0.971257 | 1.164888 | 0.001603 | 0.001594 | 0.001641 |
| has_post_decrement_test.test | RUN | 0.168699 | 0.978320 | 1.201604 | 0.001622 | 0.001431 | 0.001808 |
| has_plus_test.test | RUN | 0.166566 | 0.720163 | 1.184982 | 0.001218 | 0.001546 | 0.001405 |
| has_plus_assign_test.test | RUN | 0.171407 | 0.724868 | 1.214110 | 0.001340 | 0.001460 | 0.001428 |
| has_operator_new_test.test | RUN | 0.118205 | 0.353047 | 0.599917 | 0.001714 | 0.001422 | 0.001476 |
| has_nothrow_destructor_test.test | RUN | 0.125682 | 0.408727 | 0.618505 | 0.001416 | 0.001488 | 0.001803 |
| has_nothrow_copy_test.test | RUN | 0.120764 | 0.375732 | 0.621884 | 0.001271 | 0.001152 | 0.001504 |
| has_nothrow_constr_test.test | RUN | 0.119407 | 0.355163 | 0.605283 | 0.001435 | 0.001445 | 0.001540 |
| has_nothrow_assign_test.test | RUN | 0.123830 | 0.346452 | 0.616585 | 0.001736 | 0.001512 | 0.001561 |
| has_not_equal_to_test.test | RUN | 0.193514 | 0.894601 | 1.231078 | 0.001701 | 0.001579 | 0.001605 |
| has_negate_test.test | RUN | 0.183859 | 0.639351 | 1.186854 | 0.001088 | 0.001312 | 0.001496 |
| has_multiplies_test.test | RUN | 0.187498 | 0.658795 | 1.162055 | 0.001406 | 0.001317 | 0.001268 |
| has_multiplies_assign_test.test | RUN | 0.182739 | 0.675392 | 1.205247 | 0.001778 | 0.001760 | 0.001574 |
| has_modulus_test.test | RUN | 0.178170 | 0.727301 | 1.171986 | 0.001768 | 0.001359 | 0.001752 |
| has_modulus_assign_test.test | RUN | 0.180750 | 0.720376 | 1.191993 | 0.001485 | 0.001282 | 0.001607 |
| has_minus_test.test | RUN | 0.185225 | 0.755012 | 1.247731 | 0.001300 | 0.001633 | 0.001589 |
| has_minus_assign_test.test | RUN | 0.194631 | 0.721258 | 1.266201 | 0.001760 | 0.001770 | 0.001700 |
| has_logical_or_test.test | RUN | 0.186907 | 0.756225 | 1.270459 | 0.001428 | 0.001417 | 0.001792 |
| has_logical_not_test.test | RUN | 0.177918 | 0.733690 | 1.241569 | 0.001502 | 0.001692 | 0.001626 |
| has_logical_and_test.test | RUN | 0.182622 | 0.729372 | 1.201970 | 0.001422 | 0.001681 | 0.001396 |
| has_less_test.test | RUN | 0.182719 | 0.930767 | 1.248539 | 0.001694 | 0.001644 | 0.001668 |
| has_less_equal_test.test | RUN | 0.169558 | 0.884150 | 1.183436 | 0.001338 | 0.001472 | 0.001664 |
| has_left_shift_test.test | RUN | 0.183179 | 0.859473 | 1.511805 | 0.001498 | 0.001026 | 0.001799 |
| has_left_shift_assign_test.test | RUN | 0.172133 | 0.691243 | 1.193715 | 0.001203 | 0.001325 | 0.001678 |
| has_greater_test.test | RUN | 0.179026 | 0.882399 | 1.187707 | 0.001719 | 0.001736 | 0.001580 |
| has_greater_equal_test.test | RUN | 0.186566 | 0.994350 | 1.218600 | 0.001516 | 0.001430 | 0.001624 |
| has_equal_to_test.test | RUN | 0.185898 | 0.967653 | 1.247573 | 0.001447 | 0.001788 | 0.001616 |
| has_divides_test.test | RUN | 0.181892 | 0.757101 | 1.239050 | 0.001250 | 0.001612 | 0.001691 |
| has_divides_assign_test.test | RUN | 0.186200 | 0.755699 | 1.209659 | 0.001636 | 0.001780 | 0.001727 |
| has_dereference_test.test | RUN | 0.170129 | 0.763016 | 1.126886 | 0.001407 | 0.001735 | 0.001705 |
| has_complement_test.test | RUN | 0.167792 | 0.994484 | 1.216163 | 0.001202 | 0.001545 | 0.001642 |
| has_bit_xor_test.test | RUN | 0.172476 | 0.746778 | 1.206959 | 0.001270 | 0.001646 | 0.001602 |
| has_bit_xor_assign_test.test | RUN | 0.175474 | 0.694594 | 1.170978 | 0.001726 | 0.001637 | 0.001709 |
| has_bit_or_test.test | RUN | 0.172435 | 0.699704 | 1.168225 | 0.001561 | 0.001810 | 0.001553 |
| has_bit_or_assign_test.test | RUN | 0.174926 | 0.767515 | 1.197547 | 0.001340 | 0.001655 | 0.001486 |
| has_bit_and_test.test | RUN | 0.173147 | 0.743767 | 1.174487 | 0.001182 | 0.001569 | 0.001658 |
| has_bit_and_assign_test.test | RUN | 0.177464 | 0.724386 | 1.193034 | 0.001688 | 0.001666 | 0.001717 |
| has_binary_classes9_test.test | RUN | 0.185345 | 0.824579 | 1.333591 | 0.001680 | 0.001610 | 0.001636 |
| has_binary_classes8_test.test | RUN | 0.189858 | 0.833529 | 1.299596 | 0.001468 | 0.001623 | 0.001475 |
| has_binary_classes7_test.test | RUN | 0.184592 | 0.820618 | 1.364512 | 0.001444 | 0.001797 | 0.001428 |
| has_binary_classes6_test.test | RUN | 0.194949 | 0.775084 | 1.356929 | 0.001697 | 0.001540 | 0.001450 |
| has_binary_classes5_test.test | RUN | 0.194969 | 0.838473 | 1.294643 | 0.001568 | 0.001670 | 0.001411 |
| has_binary_classes4_test.test | RUN | 0.191078 | 0.875257 | 1.256270 | 0.001470 | 0.001622 | 0.001581 |
| has_binary_classes3_test.test | RUN | 0.192701 | 0.853885 | 1.273665 | 0.001368 | 0.001559 | 0.001303 |
| has_binary_classes2_test.test | RUN | 0.206285 | 0.850949 | 1.270520 | 0.001747 | 0.001409 | 0.001400 |
| has_binary_classes1_test.test | RUN | 0.199138 | 0.880704 | 1.321169 | 0.001435 | 0.001717 | 0.001336 |
| has_binary_classes0_test.test | RUN | 0.200564 | 0.885973 | 1.312690 | 0.001521 | 0.001592 | 0.001658 |
| function_traits_test.test | RUN | 0.097271 | 0.248524 | 0.309343 | 0.001688 | 0.001647 | 0.001536 |
| floating_point_promotion_test.test | RUN | 0.100208 | 0.256008 | 0.295522 | 0.001774 | 0.001356 | 0.001660 |
| extent_test.test | RUN | 0.100309 | 0.220314 | 0.313943 | 0.001553 | 0.001104 | 0.001214 |
| enable_if_test.test | RUN | 0.091642 | 0.186889 | 0.244942 | 0.001500 | 0.001197 | 0.001221 |
| disjunction_test.test | RUN | 0.093089 | 0.199026 | 0.250251 | 0.001242 | 0.001631 | 0.001326 |
| detected_test.test | RUN | 0.083578 | 0.173362 | 0.224048 | 0.001638 | 0.001502 | 0.001477 |
| detected_or_test.test | RUN | 0.092317 | 0.182774 | 0.233070 | 0.001669 | 0.001471 | 0.001313 |
| decay_test.test | RUN | 0.220865 | 0.686103 | 1.365626 | 0.001506 | 0.001791 | 0.001471 |
| cxx14_aliases_test.test | RUN | 0.145848 | 0.276756 | 0.374530 | 0.001842 | 0.001490 | 0.001185 |
| copy_reference_test.test | RUN | 0.095504 | 0.185089 | 0.236241 | 0.001443 | 0.001613 | 0.001518 |
| copy_cv_test.test | RUN | 0.098899 | 0.198004 | 0.272277 | 0.001852 | 0.001329 | 0.001427 |
| copy_cv_ref_test.test | RUN | 0.138327 | 0.334322 | 0.558284 | 0.001687 | 0.001448 | 0.001319 |
| conjunction_test.test | RUN | 0.096712 | 0.202096 | 0.251098 | 0.001457 | 0.001525 | 0.001651 |
| conditional_test.test | RUN | 0.099194 | 0.199718 | 0.241824 | 0.001462 | 0.001312 | 0.001412 |
| common_type_test.test | RUN | 0.122368 | 0.281531 | 0.436403 | 0.001697 | 0.001526 | 0.001446 |
| common_type_sfinae_test.test | RUN | 0.090088 | 0.185506 | 0.218748 | 0.001750 | 0.001497 | 0.001469 |
| common_type_sfinae2_test.test | RUN | 0.087828 | 0.194916 | 0.226302 | 0.001576 | 0.001432 | 0.001398 |
| common_type_6_test.test | RUN | 0.093465 | 0.195432 | 0.256339 | 0.001416 | 0.001326 | 0.001329 |
| common_type_5_test.test | RUN | 0.099907 | 0.190373 | 0.246067 | 0.001773 | 0.001682 | 0.001622 |
| common_type_4_test.test | RUN | 0.095862 | 0.205613 | 0.310719 | 0.001550 | 0.001508 | 0.001423 |
| common_type_3_test.test | RUN | 0.088662 | 0.179914 | 0.216702 | 0.001358 | 0.001502 | 0.001496 |
| common_type_2_test.test | RUN | 0.113606 | 0.271803 | 0.444825 | 0.001322 | 0.001705 | 0.001372 |
| alignment_of_test.test | RUN | 0.090111 | 0.232380 | 0.269703 | 0.001529 | 0.001659 | 0.001360 |
| alignment_of_a2_test.test | RUN | 0.090512 | 0.231472 | 0.292497 | 0.001628 | 0.001456 | 0.001443 |
| aligned_storage_test.test | RUN | 0.094397 | 0.227989 | 0.270993 | 0.001448 | 0.001413 | 0.001662 |
| aligned_storage_empy_test.test | RUN | 0.106898 | 0.254277 | 0.377651 | 0.001565 | 0.001578 | 0.001559 |
| aligned_storage_a2_test.test | RUN | 0.098680 | 0.215434 | 0.286478 | 0.001806 | 0.001840 | 0.001822 |
| add_volatile_test.test | RUN | 0.184436 | 0.622035 | 1.301049 | 0.001680 | 0.001566 | 0.001711 |
| add_rvalue_reference_test.test | RUN | 0.205342 | 0.697858 | 1.452639 | 0.001418 | 0.001379 | 0.001674 |
| add_reference_test.test | RUN | 0.197464 | 0.694598 | 1.460977 | 0.001367 | 0.002080 | 0.001412 |
| add_pointer_test.test | RUN | 0.133167 | 0.404423 | 0.782519 | 0.001193 | 0.001386 | 0.001478 |
| add_lvalue_reference_test.test | RUN | 0.207064 | 0.734850 | 1.351142 | 0.001486 | 0.001583 | 0.001369 |
| add_cv_test.test | RUN | 0.194361 | 0.684893 | 1.280472 | 0.001513 | 0.001571 | 0.001336 |
| add_const_test.test | RUN | 0.201144 | 0.698151 | 1.263865 | 0.001460 | 0.001468 | 0.001365 |
| is_virtual_base_of_fail.test | COMPILE_FAIL | 0.082927 | 0.190052 | 0.210272 | — | — | — |
| is_stateless_fail.test | COMPILE_FAIL | 0.090672 | 0.190482 | 0.220837 | — | — | — |
| is_polymorphic_fail.test | COMPILE_FAIL | 0.082392 | 0.178651 | 0.207453 | — | — | — |
| is_nothrow_move_constructible_fail.test | COMPILE_FAIL | 0.082686 | 0.169586 | 0.209011 | — | — | — |
| is_nothrow_move_assignable_fail.test | COMPILE_FAIL | 0.082848 | 0.170679 | 0.192052 | — | — | — |
| is_list_constructible_fail.test | COMPILE_FAIL | 0.084834 | 0.169924 | 0.200516 | — | — | — |
| is_empty_fail.test | COMPILE_FAIL | 0.087900 | 0.171061 | 0.208170 | — | — | — |
| is_destructible_fail.test | COMPILE_FAIL | 0.086693 | 0.165300 | 0.200478 | — | — | — |
| is_default_constructible_fail.test | COMPILE_FAIL | 0.088058 | 0.164162 | 0.203231 | — | — | — |
| is_copy_constructible_fail.test | COMPILE_FAIL | 0.085573 | 0.168766 | 0.209002 | — | — | — |
| is_copy_assignable_fail.test | COMPILE_FAIL | 0.081370 | 0.166595 | 0.210366 | — | — | — |
| is_convertible_fail.test | COMPILE_FAIL | 0.081741 | 0.166826 | 0.202479 | — | — | — |
| is_convertible2_fail.test | COMPILE_FAIL | 0.083099 | 0.163624 | 0.203148 | — | — | — |
| is_constructible_fail.test | COMPILE_FAIL | 0.088711 | 0.176473 | 0.206702 | — | — | — |
| is_base_of_fail.test | COMPILE_FAIL | 0.087040 | 0.175613 | 0.213370 | — | — | — |
| is_assignable_fail.test | COMPILE_FAIL | 0.087158 | 0.175446 | 0.209474 | — | — | — |
| has_nothrow_destruct_fail.test | COMPILE_FAIL | 0.086909 | 0.175125 | 0.208936 | — | — | — |
| has_nothrow_copy_fail.test | COMPILE_FAIL | 0.087953 | 0.179570 | 0.224161 | — | — | — |
| has_nothrow_cons_fail.test | COMPILE_FAIL | 0.086253 | 0.176991 | 0.235826 | — | — | — |
| has_nothrow_assign_fail.test | COMPILE_FAIL | 0.084854 | 0.180002 | 0.227443 | — | — | — |
| common_type_fail.test | COMPILE_FAIL | 0.085378 | 0.177753 | 0.236308 | — | — | — |
| common_type2_fail.test | COMPILE_FAIL | 0.089748 | 0.179093 | 0.234594 | — | — | — |
| has_nothrow_assign_test_no_intrinsics.test | RUN | 0.128637 | 0.384844 | 0.627135 | 0.001484 | 0.001686 | 0.001377 |
| has_nothrow_constr_test_no_intrinsics.test | RUN | 0.124909 | 0.408713 | 0.604872 | 0.001161 | 0.001472 | 0.001208 |
| has_nothrow_copy_test_no_intrinsics.test | RUN | 0.126112 | 0.399060 | 0.614869 | 0.001203 | 0.001859 | 0.001259 |
| is_nothrow_move_assignable_test_no_intrinsics.test | RUN | 0.121553 | 0.413771 | 0.608630 | 0.001294 | 0.001333 | 0.001209 |
| is_nothrow_move_constructible_test_no_intrinsics.test | RUN | 0.077327 | 0.287722 | 0.322182 | 0.001294 | 0.001198 | 0.001068 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.999× | 0.983×, 1.015× | 0.978× |
| clang | 1.017× | 1.013×, 1.022× | 1.026× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1364 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43666517673).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| add_const_test.test | 10 | 0.000855s | 0.000823s | 0.000837s | byte equality observed |
| add_cv_test.test | 10 | 0.000846s | 0.000830s | 0.000841s | byte equality observed |
| add_lvalue_reference_test.test | 10 | 0.000864s | 0.000853s | 0.000846s | byte equality observed |
| add_pointer_test.test | 10 | 0.000853s | 0.000833s | 0.000833s | byte equality observed |
| add_reference_test.test | 10 | 0.000859s | 0.000838s | 0.000844s | byte equality observed |
| add_rvalue_reference_test.test | 10 | 0.000863s | 0.000848s | 0.000866s | byte equality observed |
| add_volatile_test.test | 10 | 0.000865s | 0.000830s | 0.000843s | byte equality observed |
| aligned_storage_a2_test.test | 10 | 0.000927s | 0.000925s | 0.000917s | byte equality observed |
| aligned_storage_empy_test.test | 10 | 0.000834s | 0.000844s | 0.000832s | byte equality observed |
| aligned_storage_test.test | 10 | 0.000919s | 0.000922s | 0.000919s | byte equality observed |
| alignment_of_a2_test.test | 10 | 0.000838s | 0.000834s | 0.000841s | byte equality observed |
| alignment_of_test.test | 10 | 0.000844s | 0.000845s | 0.000832s | byte equality observed |
| common_type_2_test.test | 10 | 0.000855s | 0.000820s | 0.000830s | byte equality observed |
| common_type_3_test.test | 10 | 0.000854s | 0.000832s | 0.000831s | byte equality observed |
| common_type_4_test.test | 10 | 0.000860s | 0.000842s | 0.000841s | byte equality observed |
| common_type_5_test.test | 10 | 0.000872s | 0.000836s | 0.000817s | byte equality observed |
| common_type_6_test.test | 10 | 0.000855s | 0.000838s | 0.000848s | byte equality observed |
| common_type_sfinae2_test.test | 10 | 0.000836s | 0.000838s | 0.000840s | byte equality observed |
| common_type_sfinae_test.test | 10 | 0.000840s | 0.000837s | 0.000835s | byte equality observed |
| common_type_test.test | 10 | 0.000860s | 0.000855s | 0.000833s | byte equality observed |
| conditional_test.test | 10 | 0.000868s | 0.000854s | 0.000840s | byte equality observed |
| conjunction_test.test | 10 | 0.000834s | 0.000856s | 0.000829s | byte equality observed |
| copy_cv_ref_test.test | 10 | 0.000857s | 0.000837s | 0.000837s | byte equality observed |
| copy_cv_test.test | 10 | 0.000855s | 0.000821s | 0.000847s | byte equality observed |
| copy_reference_test.test | 10 | 0.000846s | 0.000824s | 0.000859s | byte equality observed |
| cxx14_aliases_test.test | 10 | 0.000849s | 0.000823s | 0.000841s | byte equality observed |
| decay_test.test | 10 | 0.000872s | 0.000857s | 0.000840s | byte equality observed |
| detected_or_test.test | 10 | 0.000859s | 0.000826s | 0.000824s | byte equality observed |
| detected_test.test | 10 | 0.000852s | 0.000826s | 0.000842s | byte equality observed |
| disjunction_test.test | 10 | 0.000845s | 0.000860s | 0.000849s | byte equality observed |
| enable_if_test.test | 10 | 0.000857s | 0.000840s | 0.000866s | byte equality observed |
| extent_test.test | 10 | 0.000860s | 0.000838s | 0.000850s | byte equality observed |
| floating_point_promotion_test.test | 10 | 0.000846s | 0.000852s | 0.000866s | byte equality observed |
| function_traits_test.test | 10 | 0.000852s | 0.000830s | 0.000867s | byte equality observed |
| has_binary_classes0_test.test | 10 | 0.000858s | 0.000844s | 0.000868s | byte equality observed |
| has_binary_classes1_test.test | 10 | 0.000853s | 0.000818s | 0.000842s | byte equality observed |
| has_binary_classes2_test.test | 10 | 0.000858s | 0.000834s | 0.000851s | byte equality observed |
| has_binary_classes3_test.test | 10 | 0.000858s | 0.000835s | 0.000840s | byte equality observed |
| has_binary_classes4_test.test | 10 | 0.000857s | 0.000822s | 0.000857s | byte equality observed |
| has_binary_classes5_test.test | 10 | 0.000850s | 0.000824s | 0.000839s | byte equality observed |
| has_binary_classes6_test.test | 10 | 0.000853s | 0.000838s | 0.000850s | byte equality observed |
| has_binary_classes7_test.test | 10 | 0.000849s | 0.000841s | 0.000850s | byte equality observed |
| has_binary_classes8_test.test | 10 | 0.000842s | 0.000853s | 0.000826s | byte equality observed |
| has_binary_classes9_test.test | 10 | 0.000841s | 0.000847s | 0.000847s | byte equality observed |
| has_bit_and_assign_test.test | 10 | 0.000832s | 0.000826s | 0.000856s | byte equality observed |
| has_bit_and_test.test | 10 | 0.000832s | 0.000819s | 0.000852s | byte equality observed |
| has_bit_or_assign_test.test | 10 | 0.000862s | 0.000840s | 0.000865s | byte equality observed |
| has_bit_or_test.test | 10 | 0.000837s | 0.000846s | 0.000844s | byte equality observed |
| has_bit_xor_assign_test.test | 10 | 0.000860s | 0.000856s | 0.000843s | byte equality observed |
| has_bit_xor_test.test | 10 | 0.000859s | 0.000825s | 0.000851s | byte equality observed |
| has_complement_test.test | 10 | 0.000859s | 0.000842s | 0.000841s | byte equality observed |
| has_dereference_test.test | 10 | 0.000852s | 0.000845s | 0.000837s | byte equality observed |
| has_divides_assign_test.test | 10 | 0.000849s | 0.000829s | 0.000830s | byte equality observed |
| has_divides_test.test | 10 | 0.000840s | 0.000838s | 0.000836s | byte equality observed |
| has_equal_to_test.test | 10 | 0.000843s | 0.000839s | 0.000825s | byte equality observed |
| has_greater_equal_test.test | 10 | 0.000863s | 0.000839s | 0.000823s | byte equality observed |
| has_greater_test.test | 10 | 0.000838s | 0.000850s | 0.000826s | byte equality observed |
| has_left_shift_assign_test.test | 10 | 0.000852s | 0.000845s | 0.000832s | byte equality observed |
| has_left_shift_test.test | 10 | 0.000859s | 0.000854s | 0.000829s | byte equality observed |
| has_less_equal_test.test | 10 | 0.000864s | 0.000839s | 0.000846s | byte equality observed |
| has_less_test.test | 10 | 0.000863s | 0.000833s | 0.000838s | byte equality observed |
| has_logical_and_test.test | 10 | 0.000845s | 0.000844s | 0.000810s | byte equality observed |
| has_logical_not_test.test | 10 | 0.000867s | 0.000841s | 0.000857s | byte equality observed |
| has_logical_or_test.test | 10 | 0.000867s | 0.000834s | 0.000849s | byte equality observed |
| has_minus_assign_test.test | 10 | 0.000859s | 0.000839s | 0.000833s | byte equality observed |
| has_minus_test.test | 10 | 0.000857s | 0.000834s | 0.000839s | byte equality observed |
| has_modulus_assign_test.test | 10 | 0.000838s | 0.000843s | 0.000842s | byte equality observed |
| has_modulus_test.test | 10 | 0.000845s | 0.000832s | 0.000845s | byte equality observed |
| has_multiplies_assign_test.test | 10 | 0.000846s | 0.000841s | 0.000818s | byte equality observed |
| has_multiplies_test.test | 10 | 0.000834s | 0.000825s | 0.000837s | byte equality observed |
| has_negate_test.test | 10 | 0.000844s | 0.000835s | 0.000810s | byte equality observed |
| has_not_equal_to_test.test | 10 | 0.000848s | 0.000830s | 0.000834s | byte equality observed |
| has_nothrow_assign_test.test | 10 | 0.000846s | 0.000860s | 0.000847s | byte equality observed |
| has_nothrow_assign_test_no_intrinsics.test | 10 | 0.000850s | 0.000833s | 0.000845s | byte equality observed |
| has_nothrow_constr_test.test | 10 | 0.000841s | 0.000841s | 0.000845s | byte equality observed |
| has_nothrow_constr_test_no_intrinsics.test | 10 | 0.000858s | 0.000829s | 0.000847s | byte equality observed |
| has_nothrow_copy_test.test | 10 | 0.000834s | 0.000831s | 0.000842s | byte equality observed |
| has_nothrow_copy_test_no_intrinsics.test | 10 | 0.000841s | 0.000830s | 0.000835s | byte equality observed |
| has_nothrow_destructor_test.test | 10 | 0.000831s | 0.000854s | 0.000847s | byte equality observed |
| has_operator_new_test.test | 10 | 0.000848s | 0.000824s | 0.000824s | byte equality observed |
| has_plus_assign_test.test | 10 | 0.000861s | 0.000835s | 0.000846s | byte equality observed |
| has_plus_test.test | 10 | 0.000839s | 0.000832s | 0.000836s | byte equality observed |
| has_post_decrement_test.test | 10 | 0.000839s | 0.000844s | 0.000844s | byte equality observed |
| has_post_increment_test.test | 10 | 0.000841s | 0.000857s | 0.000831s | byte equality observed |
| has_postfix_classes0_test.test | 10 | 0.000843s | 0.000854s | 0.000842s | byte equality observed |
| has_postfix_classes1_test.test | 10 | 0.000838s | 0.000843s | 0.000857s | byte equality observed |
| has_postfix_classes2_test.test | 10 | 0.000844s | 0.000822s | 0.000839s | byte equality observed |
| has_postfix_classes3_test.test | 10 | 0.000853s | 0.000832s | 0.000856s | byte equality observed |
| has_pre_decrement_test.test | 10 | 0.000840s | 0.000851s | 0.000850s | byte equality observed |
| has_pre_increment_test.test | 10 | 0.000851s | 0.000843s | 0.000838s | byte equality observed |
| has_prefix_classes0_test.test | 10 | 0.000840s | 0.000826s | 0.000859s | byte equality observed |
| has_prefix_classes1_test.test | 10 | 0.000830s | 0.000824s | 0.000837s | byte equality observed |
| has_prefix_classes2_test.test | 10 | 0.000848s | 0.000828s | 0.000832s | byte equality observed |
| has_prefix_classes3_test.test | 10 | 0.000850s | 0.000832s | 0.000841s | byte equality observed |
| has_right_shift_assign_test.test | 10 | 0.000851s | 0.000830s | 0.000862s | byte equality observed |
| has_right_shift_test.test | 10 | 0.000842s | 0.000838s | 0.000858s | byte equality observed |
| has_trivial_assign_test.test | 10 | 0.000880s | 0.000891s | 0.000885s | byte equality observed |
| has_trivial_constr_test.test | 10 | 0.000855s | 0.000864s | 0.000880s | native test oracle; output varies |
| has_trivial_copy_test.test | 10 | 0.000879s | 0.000882s | 0.000925s | native test oracle; output varies |
| has_trivial_destructor_test.test | 10 | 0.000827s | 0.000831s | 0.000839s | byte equality observed |
| has_trivial_move_assign_test.test | 10 | 0.000847s | 0.000838s | 0.000835s | byte equality observed |
| has_trivial_move_constructor_test.test | 10 | 0.000824s | 0.000831s | 0.000852s | byte equality observed |
| has_unary_minus_test.test | 10 | 0.000835s | 0.000850s | 0.000826s | byte equality observed |
| has_unary_plus_test.test | 10 | 0.000851s | 0.000842s | 0.000832s | byte equality observed |
| has_virtual_destructor_test.test | 10 | 0.000854s | 0.000823s | 0.000856s | byte equality observed |
| integral_constant_test.test | 10 | 0.000396s | 0.000391s | 0.000834s | byte equality observed |
| is_abstract_test.test | 10 | 0.000842s | 0.000843s | 0.000840s | byte equality observed |
| is_arithmetic_test.test | 10 | 0.000853s | 0.000835s | 0.000843s | byte equality observed |
| is_array_test.test | 10 | 0.000839s | 0.000840s | 0.000842s | byte equality observed |
| is_assignable_test.test | 10 | 0.000856s | 0.000830s | 0.000843s | byte equality observed |
| is_base_and_derived_test.test | 10 | 0.000841s | 0.000827s | 0.000844s | byte equality observed |
| is_base_of_test.test | 10 | 0.000837s | 0.000841s | 0.000831s | byte equality observed |
| is_bounded_array_test.test | 10 | 0.000855s | 0.000834s | 0.000845s | byte equality observed |
| is_class_test.test | 10 | 0.000852s | 0.000824s | 0.000833s | byte equality observed |
| is_complete_test.test | 10 | 0.000834s | 0.000826s | 0.000854s | byte equality observed |
| is_complex_test.test | 10 | 0.000833s | 0.000832s | 0.000840s | byte equality observed |
| is_compound_test.test | 10 | 0.000836s | 0.000824s | 0.000854s | byte equality observed |
| is_const_test.test | 10 | 0.000849s | 0.000843s | 0.000838s | byte equality observed |
| is_constructible_test.test | 10 | 0.000834s | 0.000818s | 0.000844s | byte equality observed |
| is_convertible_test.test | 10 | 0.000834s | 0.000837s | 0.000866s | byte equality observed |
| is_copy_assignable_test.test | 10 | 0.000829s | 0.000848s | 0.000863s | byte equality observed |
| is_copy_constructible_test.test | 10 | 0.000842s | 0.000833s | 0.000861s | byte equality observed |
| is_default_constr_test.test | 10 | 0.000833s | 0.000833s | 0.000869s | byte equality observed |
| is_destructible_test.test | 10 | 0.000856s | 0.000852s | 0.000852s | byte equality observed |
| is_detected_exact_test.test | 10 | 0.000825s | 0.000840s | 0.000851s | byte equality observed |
| is_detected_test.test | 10 | 0.000847s | 0.000831s | 0.000855s | byte equality observed |
| is_empty_test.test | 10 | 0.000849s | 0.000826s | 0.000835s | byte equality observed |
| is_enum_test.test | 10 | 0.000845s | 0.000866s | 0.000859s | byte equality observed |
| is_final_test.test | 10 | 0.000845s | 0.000843s | 0.000843s | byte equality observed |
| is_float_test.test | 10 | 0.000833s | 0.000842s | 0.000854s | byte equality observed |
| is_floating_point_test.test | 10 | 0.000865s | 0.000848s | 0.000849s | byte equality observed |
| is_function_test.test | 10 | 0.000835s | 0.000834s | 0.000844s | byte equality observed |
| is_fundamental_test.test | 10 | 0.000846s | 0.000852s | 0.000863s | byte equality observed |
| is_integral_test.test | 10 | 0.000850s | 0.000855s | 0.000881s | byte equality observed |
| is_list_constructible_test.test | 10 | 0.000856s | 0.000826s | 0.000857s | byte equality observed |
| is_lvalue_reference_test.test | 10 | 0.000855s | 0.000844s | 0.000860s | byte equality observed |
| is_member_func_test.test | 10 | 0.000849s | 0.000834s | 0.000835s | byte equality observed |
| is_member_obj_test.test | 10 | 0.000842s | 0.000844s | 0.000864s | byte equality observed |
| is_member_pointer_test.test | 10 | 0.000850s | 0.000845s | 0.000856s | byte equality observed |
| is_noncopyable_test.test | 10 | 0.000848s | 0.000856s | 0.000853s | byte equality observed |
| is_nothrow_move_assignable_test.test | 10 | 0.000845s | 0.000845s | 0.000855s | byte equality observed |
| is_nothrow_move_assignable_test_no_intrinsics.test | 10 | 0.000856s | 0.000850s | 0.000851s | byte equality observed |
| is_nothrow_move_constructible_test.test | 10 | 0.000861s | 0.000851s | 0.000865s | byte equality observed |
| is_nothrow_move_constructible_test_no_intrinsics.test | 10 | 0.000858s | 0.000847s | 0.000846s | byte equality observed |
| is_nothrow_swappable_test.test | 10 | 0.000836s | 0.000855s | 0.000841s | byte equality observed |
| is_object_test.test | 10 | 0.000864s | 0.000854s | 0.000849s | byte equality observed |
| is_pod_test.test | 10 | 0.000842s | 0.000872s | 0.000861s | byte equality observed |
| is_pointer_test.test | 10 | 0.000860s | 0.000831s | 0.000836s | byte equality observed |
| is_polymorphic_test.test | 10 | 0.000852s | 0.000838s | 0.000855s | byte equality observed |
| is_reference_test.test | 10 | 0.000840s | 0.000845s | 0.000847s | byte equality observed |
| is_rvalue_reference_test.test | 10 | 0.000838s | 0.000863s | 0.000841s | byte equality observed |
| is_same_test.test | 10 | 0.000846s | 0.000841s | 0.000872s | byte equality observed |
| is_scalar_test.test | 10 | 0.000842s | 0.000864s | 0.000858s | byte equality observed |
| is_scoped_enum_test.test | 10 | 0.000853s | 0.000844s | 0.000859s | byte equality observed |
| is_signed_test.test | 10 | 0.000847s | 0.000880s | 0.000860s | byte equality observed |
| is_stateless_test.test | 10 | 0.000844s | 0.000873s | 0.000850s | byte equality observed |
| is_swappable_test.test | 10 | 0.000840s | 0.000877s | 0.000856s | byte equality observed |
| is_trivially_copyable_test.test | 10 | 0.000867s | 0.000881s | 0.000881s | byte equality observed |
| is_unbounded_array_test.test | 10 | 0.000846s | 0.000827s | 0.000845s | byte equality observed |
| is_union_test.test | 10 | 0.000841s | 0.000835s | 0.000834s | byte equality observed |
| is_unscoped_enum_test.test | 10 | 0.000846s | 0.000867s | 0.000830s | byte equality observed |
| is_unsigned_test.test | 10 | 0.000838s | 0.000838s | 0.000855s | byte equality observed |
| is_virtual_base_of_test.test | 10 | 0.000835s | 0.000862s | 0.000837s | byte equality observed |
| is_void_test.test | 10 | 0.000839s | 0.000848s | 0.000843s | byte equality observed |
| is_volatile_test.test | 10 | 0.000835s | 0.000865s | 0.000824s | byte equality observed |
| make_signed_test.test | 10 | 0.000836s | 0.000843s | 0.000841s | byte equality observed |
| make_unsigned_test.test | 10 | 0.000842s | 0.000867s | 0.000851s | byte equality observed |
| make_void_test.test | 10 | 0.000833s | 0.000857s | 0.000851s | byte equality observed |
| mpl_interop_test1.test | 10 | 0.000401s | 0.000409s | 0.000846s | byte equality observed |
| mpl_interop_test2.test | 10 | 0.000401s | 0.000409s | 0.000837s | byte equality observed |
| mpl_interop_test3.test | 10 | 0.000389s | 0.000410s | 0.000830s | byte equality observed |
| negation_test.test | 10 | 0.000877s | 0.000893s | 0.000846s | byte equality observed |
| promote_basic_test.test | 10 | 0.000384s | 0.000399s | 0.000835s | byte equality observed |
| promote_enum_msvc_bug_test.test | 10 | 0.000396s | 0.000411s | 0.000844s | byte equality observed |
| promote_enum_test.test | 10 | 0.000400s | 0.000397s | 0.000836s | byte equality observed |
| promote_mpl_test.test | 10 | 0.000395s | 0.000389s | 0.000848s | byte equality observed |
| rank_test.test | 10 | 0.000855s | 0.000869s | 0.000831s | byte equality observed |
| remove_all_extents_test.test | 10 | 0.000850s | 0.000845s | 0.000851s | byte equality observed |
| remove_bounds_test.test | 10 | 0.000832s | 0.000835s | 0.000849s | byte equality observed |
| remove_const_test.test | 10 | 0.000848s | 0.000860s | 0.000838s | byte equality observed |
| remove_cv_ref_test.test | 10 | 0.000834s | 0.000850s | 0.000831s | byte equality observed |
| remove_cv_test.test | 10 | 0.000844s | 0.000840s | 0.000829s | byte equality observed |
| remove_extent_test.test | 10 | 0.000840s | 0.000837s | 0.000839s | byte equality observed |
| remove_pointer_test.test | 10 | 0.000860s | 0.000853s | 0.000854s | byte equality observed |
| remove_reference_test.test | 10 | 0.000848s | 0.000865s | 0.000856s | byte equality observed |
| remove_volatile_test.test | 10 | 0.000849s | 0.000858s | 0.000873s | byte equality observed |
| tricky_abstract_type_test.test | 10 | 0.000852s | 0.000876s | 0.000836s | byte equality observed |
| tricky_add_pointer_test.test | 10 | 0.000854s | 0.000856s | 0.000844s | byte equality observed |
| tricky_function_type_test.test | 10 | 0.000833s | 0.000840s | 0.000830s | byte equality observed |
| tricky_incomplete_type_test.test | 10 | 0.000842s | 0.000853s | 0.000843s | byte equality observed |
| tricky_is_enum_test.test | 10 | 0.000838s | 0.000846s | 0.000827s | byte equality observed |
| tricky_partial_spec_test.test | 10 | 0.000832s | 0.000856s | 0.000839s | byte equality observed |
| tricky_rvalue_test.test | 10 | 0.000840s | 0.000834s | 0.000843s | byte equality observed |
| type_identity_test.test | 10 | 0.000853s | 0.000871s | 0.000858s | byte equality observed |
| type_traits_test.test | 10 | 0.000393s | 0.000398s | 0.000840s | byte equality observed |
| type_with_alignment_test.test | 10 | 0.000947s | 0.000965s | 0.000937s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43666517673).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
