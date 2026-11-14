# libs/type_traits/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| type_with_alignment_test.test | RUN | 0.118469 | 0.338444 | 0.510411 | 0.001443 | 0.001666 | 0.001874 |
| type_traits_test.test | RUN | 0.167706 | 0.351283 | 0.506602 | 0.000606 | 0.000644 | 0.001478 |
| type_identity_test.test | RUN | 0.311925 | 1.186935 | 2.892331 | 0.001654 | 0.001876 | 0.001784 |
| tricky_rvalue_test.test | RUN | 0.110554 | 0.269457 | 0.398504 | 0.001692 | 0.001778 | 0.001748 |
| tricky_partial_spec_test.test | RUN | 0.135523 | 0.379340 | 0.659519 | 0.001658 | 0.001636 | 0.001826 |
| tricky_is_enum_test.test | RUN | 0.112636 | 0.255398 | 0.359011 | 0.001822 | 0.001773 | 0.001794 |
| tricky_incomplete_type_test.test | RUN | 0.184648 | 0.394772 | 0.608491 | 0.001650 | 0.001677 | 0.001572 |
| tricky_function_type_test.test | RUN | 0.145649 | 0.401043 | 0.707923 | 0.001576 | 0.001948 | 0.001845 |
| tricky_add_pointer_test.test | RUN | 0.222724 | 0.720182 | 1.680689 | 0.001604 | 0.001863 | 0.001748 |
| tricky_abstract_type_test.test | RUN | 0.117672 | 0.267992 | 0.381222 | 0.001704 | 0.001720 | 0.001866 |
| remove_volatile_test.test | RUN | 0.292303 | 1.018066 | 2.595771 | 0.001803 | 0.001841 | 0.001715 |
| remove_reference_test.test | RUN | 0.290357 | 1.059812 | 2.733308 | 0.001736 | 0.001926 | 0.001835 |
| remove_pointer_test.test | RUN | 0.307651 | 1.109463 | 2.896575 | 0.001961 | 0.001811 | 0.001796 |
| remove_extent_test.test | RUN | 0.291130 | 1.082055 | 2.754501 | 0.001740 | 0.001951 | 0.001783 |
| remove_cv_test.test | RUN | 0.284113 | 1.066257 | 2.746911 | 0.001963 | 0.001916 | 0.001776 |
| remove_cv_ref_test.test | RUN | 0.622285 | 2.558137 | 6.614984 | 0.001526 | 0.001544 | 0.001806 |
| remove_const_test.test | RUN | 0.292246 | 1.029330 | 2.606623 | 0.001649 | 0.001740 | 0.001764 |
| remove_bounds_test.test | RUN | 0.314237 | 1.083714 | 2.800601 | 0.001537 | 0.001764 | 0.001856 |
| remove_all_extents_test.test | RUN | 0.292154 | 1.071297 | 2.611429 | 0.001618 | 0.001566 | 0.001628 |
| rank_test.test | RUN | 0.115998 | 0.252643 | 0.405906 | 0.001358 | 0.001754 | 0.001758 |
| promote_mpl_test.test | RUN | 0.094931 | 0.232159 | 0.287439 | 0.000559 | 0.000791 | 0.001629 |
| promote_enum_test.test | RUN | 0.023544 | 0.057419 | 0.072122 | 0.000587 | 0.000686 | 0.001558 |
| promote_enum_msvc_bug_test.test | RUN | 0.021034 | 0.049389 | 0.058611 | 0.000640 | 0.000646 | 0.001808 |
| promote_basic_test.test | RUN | 0.024223 | 0.067924 | 0.076077 | 0.000656 | 0.000767 | 0.001599 |
| negation_test.test | RUN | 0.106615 | 0.241379 | 0.345709 | 0.001547 | 0.001592 | 0.001393 |
| mpl_interop_test3.test | RUN | 0.090804 | 0.229814 | 0.260736 | 0.000587 | 0.000644 | 0.001742 |
| mpl_interop_test2.test | RUN | 0.035775 | 0.065440 | 0.066212 | 0.000560 | 0.000775 | 0.001798 |
| mpl_interop_test1.test | RUN | 0.017211 | 0.048117 | 0.048291 | 0.000590 | 0.000838 | 0.001584 |
| make_void_test.test | RUN | 0.111399 | 0.257592 | 0.422406 | 0.001806 | 0.001815 | 0.001849 |
| make_unsigned_test.test | RUN | 0.129247 | 0.332698 | 0.574162 | 0.001482 | 0.001540 | 0.001632 |
| make_signed_test.test | RUN | 0.127854 | 0.331630 | 0.575501 | 0.001310 | 0.001589 | 0.001623 |
| is_volatile_test.test | RUN | 0.114050 | 0.285051 | 0.460241 | 0.001381 | 0.002997 | 0.001807 |
| is_void_test.test | RUN | 0.112008 | 0.301990 | 0.427691 | 0.001784 | 0.001721 | 0.001876 |
| is_virtual_base_of_test.test | RUN | 0.127144 | 0.382725 | 0.591851 | 0.001305 | 0.001509 | 0.001367 |
| is_unsigned_test.test | RUN | 0.112955 | 0.321339 | 0.424594 | 0.001161 | 0.001611 | 0.001727 |
| is_unscoped_enum_test.test | RUN | 0.108025 | 0.254007 | 0.343555 | 0.001640 | 0.001695 | 0.001503 |
| is_union_test.test | RUN | 0.120122 | 0.335639 | 0.536195 | 0.001759 | 0.001818 | 0.001771 |
| is_unbounded_array_test.test | RUN | 0.109335 | 0.281172 | 0.415959 | 0.001556 | 0.001794 | 0.001800 |
| is_trivially_copyable_test.test | RUN | 0.175425 | 0.597664 | 1.096778 | 0.001617 | 0.001696 | 0.001621 |
| is_swappable_test.test | RUN | 0.144810 | 0.445503 | 0.778985 | 0.001592 | 0.001873 | 0.001777 |
| is_stateless_test.test | RUN | 0.165220 | 0.503109 | 0.901649 | 0.001408 | 0.001754 | 0.001612 |
| is_signed_test.test | RUN | 0.118839 | 0.281557 | 0.414521 | 0.001391 | 0.001922 | 0.001898 |
| is_scoped_enum_test.test | RUN | 0.112376 | 0.263575 | 0.349221 | 0.001519 | 0.001633 | 0.001732 |
| is_scalar_test.test | RUN | 0.146347 | 0.470838 | 0.808477 | 0.001475 | 0.001532 | 0.001824 |
| is_same_test.test | RUN | 0.111397 | 0.287312 | 0.383127 | 0.001674 | 0.001817 | 0.001721 |
| is_rvalue_reference_test.test | RUN | 0.115121 | 0.322123 | 0.506595 | 0.001464 | 0.002245 | 0.001297 |
| is_reference_test.test | RUN | 0.118818 | 0.325605 | 0.470514 | 0.001570 | 0.001725 | 0.001494 |
| is_polymorphic_test.test | RUN | 0.120458 | 0.320348 | 0.496432 | 0.001744 | 0.001803 | 0.001723 |
| is_pointer_test.test | RUN | 0.117804 | 0.317411 | 0.517019 | 0.001658 | 0.001469 | 0.001445 |
| is_pod_test.test | RUN | 0.152773 | 0.522833 | 0.943905 | 0.001324 | 0.001972 | 0.001645 |
| is_object_test.test | RUN | 0.109814 | 0.272906 | 0.399325 | 0.001534 | 0.001744 | 0.001690 |
| is_nothrow_swappable_test.test | RUN | 0.164574 | 0.489411 | 0.866858 | 0.001788 | 0.001806 | 0.001779 |
| is_nothrow_move_constructible_test.test | RUN | 0.152506 | 0.505124 | 0.933841 | 0.001692 | 0.001542 | 0.001309 |
| is_nothrow_move_assignable_test.test | RUN | 0.153557 | 0.514699 | 0.938015 | 0.001411 | 0.001598 | 0.001458 |
| is_noncopyable_test.test | RUN | 0.110306 | 0.272869 | 0.379810 | 0.001195 | 0.001774 | 0.001770 |
| is_member_pointer_test.test | RUN | 0.114615 | 0.278025 | 0.403016 | 0.001730 | 0.001636 | 0.001880 |
| is_member_obj_test.test | RUN | 0.109054 | 0.276893 | 0.429788 | 0.001621 | 0.001869 | 0.001436 |
| is_member_func_test.test | RUN | 0.111496 | 0.290485 | 0.436951 | 0.001658 | 0.001887 | 0.001696 |
| is_lvalue_reference_test.test | RUN | 0.121346 | 0.303301 | 0.500803 | 0.001586 | 0.001839 | 0.001670 |
| is_list_constructible_test.test | RUN | 0.143139 | 0.357585 | 0.547300 | 0.001827 | 0.001820 | 0.001772 |
| is_integral_test.test | RUN | 0.141278 | 0.418093 | 0.756141 | 0.001484 | 0.001738 | 0.001548 |
| is_fundamental_test.test | RUN | 0.142811 | 0.436848 | 0.777106 | 0.001260 | 0.001882 | 0.001524 |
| is_function_test.test | RUN | 0.121610 | 0.283603 | 0.457713 | 0.001530 | 0.001952 | 0.001820 |
| is_floating_point_test.test | RUN | 0.121667 | 0.309043 | 0.503407 | 0.001573 | 0.001729 | 0.001528 |
| is_float_test.test | RUN | 0.117450 | 0.309324 | 0.482005 | 0.001230 | 0.001536 | 0.001688 |
| is_final_test.test | RUN | 0.117781 | 0.325990 | 0.516937 | 0.001571 | 0.001717 | 0.001699 |
| is_enum_test.test | RUN | 0.112608 | 0.267566 | 0.408848 | 0.001498 | 0.001880 | 0.001633 |
| is_empty_test.test | RUN | 0.118283 | 0.293775 | 0.435238 | 0.001629 | 0.001868 | 0.001572 |
| is_detected_test.test | RUN | 0.109304 | 0.252504 | 0.320260 | 0.001668 | 0.001659 | 0.001704 |
| is_detected_exact_test.test | RUN | 0.110844 | 0.251675 | 0.357237 | 0.001370 | 0.001902 | 0.001786 |
| is_destructible_test.test | RUN | 0.158125 | 0.512049 | 0.892856 | 0.001644 | 0.001843 | 0.001858 |
| is_default_constr_test.test | RUN | 0.151960 | 0.515128 | 0.900494 | 0.001796 | 0.001823 | 0.001827 |
| is_copy_constructible_test.test | RUN | 0.162063 | 0.525865 | 0.968418 | 0.001494 | 0.001698 | 0.001786 |
| is_copy_assignable_test.test | RUN | 0.160941 | 0.523908 | 0.958692 | 0.001492 | 0.001686 | 0.001776 |
| is_convertible_test.test | RUN | 0.157735 | 0.457839 | 0.769923 | 0.001715 | 0.001750 | 0.001866 |
| is_constructible_test.test | RUN | 0.126862 | 0.351535 | 0.546226 | 0.001544 | 0.001594 | 0.001803 |
| is_const_test.test | RUN | 0.113494 | 0.292923 | 0.437747 | 0.001621 | 0.001600 | 0.001742 |
| is_compound_test.test | RUN | 0.107187 | 0.254379 | 0.352606 | 0.001624 | 0.001791 | 0.001573 |
| is_complex_test.test | RUN | 0.154278 | 0.345545 | 0.495995 | 0.001420 | 0.001698 | 0.001844 |
| is_complete_test.test | RUN | 0.133835 | 0.341545 | 0.587446 | 0.001825 | 0.001593 | 0.001149 |
| is_class_test.test | RUN | 0.119592 | 0.319407 | 0.470577 | 0.001421 | 0.001576 | 0.001507 |
| is_bounded_array_test.test | RUN | 0.112432 | 0.273160 | 0.430471 | 0.001798 | 0.001862 | 0.001588 |
| is_base_of_test.test | RUN | 0.116488 | 0.314256 | 0.467724 | 0.001312 | 0.001766 | 0.001906 |
| is_base_and_derived_test.test | RUN | 0.112407 | 0.294606 | 0.482507 | 0.001783 | 0.001605 | 0.001572 |
| is_assignable_test.test | RUN | 0.141229 | 0.421024 | 0.723617 | 0.001505 | 0.001558 | 0.001723 |
| is_array_test.test | RUN | 0.115069 | 0.295636 | 0.434714 | 0.001710 | 0.001686 | 0.001614 |
| is_arithmetic_test.test | RUN | 0.139148 | 0.451862 | 0.778065 | 0.001730 | 0.001753 | 0.001740 |
| is_abstract_test.test | RUN | 0.251617 | 1.229965 | 2.567251 | 0.001779 | 0.001599 | 0.001680 |
| integral_constant_test.test | RUN | 0.018963 | 0.048814 | 0.048093 | 0.000626 | 0.000829 | 0.001752 |
| has_virtual_destructor_test.test | RUN | 0.122681 | 0.340108 | 0.563900 | 0.001725 | 0.001562 | 0.001815 |
| has_unary_plus_test.test | RUN | 0.238083 | 1.265235 | 1.960549 | 0.001745 | 0.002403 | 0.001887 |
| has_unary_minus_test.test | RUN | 0.240801 | 1.323200 | 1.933772 | 0.001564 | 0.001676 | 0.001774 |
| has_trivial_move_constructor_test.test | RUN | 0.163039 | 0.533941 | 0.968708 | 0.001538 | 0.001724 | 0.001787 |
| has_trivial_move_assign_test.test | RUN | 0.157708 | 0.527813 | 0.938089 | 0.001646 | 0.001817 | 0.001642 |
| has_trivial_destructor_test.test | RUN | 0.159170 | 0.537239 | 0.937770 | 0.001738 | 0.001582 | 0.001906 |
| has_trivial_copy_test.test | RUN | 0.161170 | 0.554709 | 0.991423 | 0.001665 | 0.001984 | 0.001839 |
| has_trivial_constr_test.test | RUN | 0.160274 | 0.552556 | 0.993616 | 0.001567 | 0.001656 | 0.002674 |
| has_trivial_assign_test.test | RUN | 0.161072 | 0.542665 | 0.987880 | 0.001678 | 0.001625 | 0.001891 |
| has_right_shift_test.test | RUN | 0.242854 | 1.031216 | 2.132082 | 0.001431 | 0.001838 | 0.001560 |
| has_right_shift_assign_test.test | RUN | 0.227715 | 0.940926 | 1.974569 | 0.001515 | 0.001648 | 0.001725 |
| has_prefix_classes3_test.test | RUN | 0.170590 | 0.553465 | 1.040522 | 0.001655 | 0.001911 | 0.001774 |
| has_prefix_classes2_test.test | RUN | 0.175335 | 0.551508 | 1.034119 | 0.001536 | 0.001654 | 0.001539 |
| has_prefix_classes1_test.test | RUN | 0.171588 | 0.575864 | 0.954125 | 0.001402 | 0.001709 | 0.001829 |
| has_prefix_classes0_test.test | RUN | 0.171257 | 0.550456 | 1.030841 | 0.001506 | 0.001751 | 0.001822 |
| has_pre_increment_test.test | RUN | 0.229107 | 1.313189 | 2.006463 | 0.001475 | 0.001620 | 0.001662 |
| has_pre_decrement_test.test | RUN | 0.229045 | 1.350490 | 1.894237 | 0.001545 | 0.001573 | 0.001871 |
| has_postfix_classes3_test.test | RUN | 0.171947 | 0.561936 | 1.068710 | 0.001523 | 0.001741 | 0.001793 |
| has_postfix_classes2_test.test | RUN | 0.172668 | 0.552220 | 0.986132 | 0.001504 | 0.001845 | 0.001542 |
| has_postfix_classes1_test.test | RUN | 0.174060 | 0.587457 | 0.999728 | 0.001449 | 0.002110 | 0.001774 |
| has_postfix_classes0_test.test | RUN | 0.167563 | 0.596098 | 1.016960 | 0.001317 | 0.001725 | 0.001813 |
| has_post_increment_test.test | RUN | 0.233382 | 1.360190 | 1.953417 | 0.001560 | 0.001868 | 0.001800 |
| has_post_decrement_test.test | RUN | 0.231666 | 1.346248 | 2.003600 | 0.001403 | 0.001638 | 0.001554 |
| has_plus_test.test | RUN | 0.235344 | 0.947304 | 1.966728 | 0.001548 | 0.001669 | 0.001790 |
| has_plus_assign_test.test | RUN | 0.243130 | 0.957003 | 2.032563 | 0.001400 | 0.001972 | 0.001534 |
| has_operator_new_test.test | RUN | 0.161360 | 0.526271 | 0.854481 | 0.001640 | 0.001850 | 0.001705 |
| has_nothrow_destructor_test.test | RUN | 0.165332 | 0.558980 | 0.976935 | 0.001557 | 0.001787 | 0.001692 |
| has_nothrow_copy_test.test | RUN | 0.160975 | 0.515465 | 0.932660 | 0.001304 | 0.001836 | 0.001765 |
| has_nothrow_constr_test.test | RUN | 0.156778 | 0.507648 | 0.930959 | 0.001409 | 0.001996 | 0.001702 |
| has_nothrow_assign_test.test | RUN | 0.159616 | 0.520528 | 0.946489 | 0.001728 | 0.001899 | 0.001727 |
| has_not_equal_to_test.test | RUN | 0.236513 | 1.306080 | 1.986648 | 0.001728 | 0.001726 | 0.001749 |
| has_negate_test.test | RUN | 0.233249 | 0.935488 | 1.921436 | 0.001386 | 0.001895 | 0.001768 |
| has_multiplies_test.test | RUN | 0.232224 | 0.980693 | 1.961111 | 0.001736 | 0.001647 | 0.001512 |
| has_multiplies_assign_test.test | RUN | 0.237608 | 0.948814 | 1.970456 | 0.001510 | 0.001951 | 0.001577 |
| has_modulus_test.test | RUN | 0.232546 | 0.994896 | 2.005136 | 0.001550 | 0.001728 | 0.001775 |
| has_modulus_assign_test.test | RUN | 0.234936 | 0.953905 | 1.954902 | 0.001737 | 0.001678 | 0.001798 |
| has_minus_test.test | RUN | 0.244493 | 0.963772 | 2.003001 | 0.001732 | 0.001665 | 0.001625 |
| has_minus_assign_test.test | RUN | 0.240032 | 0.944698 | 2.040384 | 0.001596 | 0.001926 | 0.001879 |
| has_logical_or_test.test | RUN | 0.233709 | 0.985532 | 1.882390 | 0.001452 | 0.001936 | 0.001747 |
| has_logical_not_test.test | RUN | 0.228944 | 0.957556 | 1.950090 | 0.001438 | 0.001618 | 0.001758 |
| has_logical_and_test.test | RUN | 0.231517 | 0.955031 | 1.991652 | 0.001374 | 0.001692 | 0.001673 |
| has_less_test.test | RUN | 0.232928 | 1.277279 | 1.980470 | 0.001618 | 0.001921 | 0.001772 |
| has_less_equal_test.test | RUN | 0.233277 | 1.333832 | 1.997731 | 0.001546 | 0.001758 | 0.002002 |
| has_left_shift_test.test | RUN | 0.254537 | 1.233336 | 2.432987 | 0.001542 | 0.001979 | 0.001531 |
| has_left_shift_assign_test.test | RUN | 0.228726 | 0.943015 | 1.932969 | 0.001541 | 0.001882 | 0.001766 |
| has_greater_test.test | RUN | 0.231463 | 1.275002 | 1.989401 | 0.001504 | 0.001729 | 0.001434 |
| has_greater_equal_test.test | RUN | 0.232633 | 1.320612 | 1.944803 | 0.001638 | 0.001790 | 0.001748 |
| has_equal_to_test.test | RUN | 0.231420 | 1.278059 | 1.965745 | 0.001602 | 0.001811 | 0.001749 |
| has_divides_test.test | RUN | 0.229862 | 0.989027 | 2.000475 | 0.001435 | 0.001777 | 0.001262 |
| has_divides_assign_test.test | RUN | 0.232964 | 0.940804 | 1.993893 | 0.001628 | 0.001943 | 0.001717 |
| has_dereference_test.test | RUN | 0.227446 | 0.968327 | 1.876964 | 0.001536 | 0.001844 | 0.001812 |
| has_complement_test.test | RUN | 0.230263 | 1.294563 | 1.926097 | 0.001697 | 0.001772 | 0.001901 |
| has_bit_xor_test.test | RUN | 0.229904 | 0.946619 | 2.004470 | 0.001334 | 0.001900 | 0.001653 |
| has_bit_xor_assign_test.test | RUN | 0.230012 | 0.982806 | 2.004802 | 0.001657 | 0.001922 | 0.001595 |
| has_bit_or_test.test | RUN | 0.227072 | 0.943901 | 1.894607 | 0.001483 | 0.001896 | 0.001774 |
| has_bit_or_assign_test.test | RUN | 0.231482 | 0.945069 | 1.953546 | 0.001351 | 0.001817 | 0.001711 |
| has_bit_and_test.test | RUN | 0.230408 | 1.017803 | 2.040394 | 0.001404 | 0.001733 | 0.001534 |
| has_bit_and_assign_test.test | RUN | 0.232542 | 0.973510 | 1.964234 | 0.001464 | 0.001864 | 0.001864 |
| has_binary_classes9_test.test | RUN | 0.252340 | 1.151457 | 2.124980 | 0.001699 | 0.001764 | 0.001770 |
| has_binary_classes8_test.test | RUN | 0.256209 | 1.168649 | 2.181673 | 0.001502 | 0.002013 | 0.001637 |
| has_binary_classes7_test.test | RUN | 0.251277 | 1.091700 | 2.138612 | 0.001702 | 0.001873 | 0.001672 |
| has_binary_classes6_test.test | RUN | 0.249220 | 1.071077 | 2.177525 | 0.001723 | 0.001894 | 0.001581 |
| has_binary_classes5_test.test | RUN | 0.251753 | 1.149927 | 2.127472 | 0.001735 | 0.002046 | 0.001797 |
| has_binary_classes4_test.test | RUN | 0.256042 | 1.186766 | 2.189676 | 0.001327 | 0.001684 | 0.001768 |
| has_binary_classes3_test.test | RUN | 0.252706 | 1.127565 | 2.211589 | 0.001667 | 0.001684 | 0.001626 |
| has_binary_classes2_test.test | RUN | 0.250719 | 1.094959 | 2.074909 | 0.001562 | 0.001744 | 0.001759 |
| has_binary_classes1_test.test | RUN | 0.250507 | 1.156544 | 2.140629 | 0.001490 | 0.001943 | 0.001732 |
| has_binary_classes0_test.test | RUN | 0.256262 | 1.149289 | 2.143317 | 0.001461 | 0.001492 | 0.001770 |
| function_traits_test.test | RUN | 0.119719 | 0.295400 | 0.455375 | 0.001252 | 0.001630 | 0.001531 |
| floating_point_promotion_test.test | RUN | 0.114167 | 0.289240 | 0.448156 | 0.001689 | 0.001755 | 0.001382 |
| extent_test.test | RUN | 0.112887 | 0.304552 | 0.478851 | 0.001248 | 0.001586 | 0.001562 |
| enable_if_test.test | RUN | 0.107179 | 0.263749 | 0.341302 | 0.001498 | 0.001746 | 0.001735 |
| disjunction_test.test | RUN | 0.109825 | 0.249562 | 0.362952 | 0.001684 | 0.001804 | 0.001557 |
| detected_test.test | RUN | 0.105841 | 0.250953 | 0.341980 | 0.001766 | 0.001744 | 0.001864 |
| detected_or_test.test | RUN | 0.106729 | 0.264800 | 0.365237 | 0.001576 | 0.001974 | 0.001739 |
| decay_test.test | RUN | 0.276682 | 1.040267 | 2.251495 | 0.001431 | 0.001836 | 0.001641 |
| cxx14_aliases_test.test | RUN | 0.179319 | 0.389671 | 0.582011 | 0.001500 | 0.001794 | 0.001788 |
| copy_reference_test.test | RUN | 0.108677 | 0.267389 | 0.390742 | 0.001758 | 0.001547 | 0.001714 |
| copy_cv_test.test | RUN | 0.110506 | 0.300866 | 0.425517 | 0.001514 | 0.001900 | 0.001570 |
| copy_cv_ref_test.test | RUN | 0.157903 | 0.448142 | 0.900318 | 0.001540 | 0.001504 | 0.001812 |
| conjunction_test.test | RUN | 0.106928 | 0.255212 | 0.391168 | 0.001516 | 0.001794 | 0.001767 |
| conditional_test.test | RUN | 0.107610 | 0.250789 | 0.377399 | 0.001314 | 0.001656 | 0.001795 |
| common_type_test.test | RUN | 0.145005 | 0.408478 | 0.770611 | 0.001501 | 0.001592 | 0.001726 |
| common_type_sfinae_test.test | RUN | 0.113137 | 0.258990 | 0.330542 | 0.001619 | 0.001652 | 0.001686 |
| common_type_sfinae2_test.test | RUN | 0.113898 | 0.269389 | 0.391323 | 0.001672 | 0.001712 | 0.001462 |
| common_type_6_test.test | RUN | 0.113584 | 0.276539 | 0.374707 | 0.001826 | 0.001930 | 0.001678 |
| common_type_5_test.test | RUN | 0.114894 | 0.273096 | 0.380053 | 0.001597 | 0.001782 | 0.001706 |
| common_type_4_test.test | RUN | 0.120630 | 0.302672 | 0.470045 | 0.001901 | 0.001628 | 0.001449 |
| common_type_3_test.test | RUN | 0.106885 | 0.258174 | 0.355990 | 0.001691 | 0.001849 | 0.001731 |
| common_type_2_test.test | RUN | 0.145208 | 0.397340 | 0.713085 | 0.001674 | 0.001801 | 0.001874 |
| alignment_of_test.test | RUN | 0.117138 | 0.308237 | 0.484537 | 0.001458 | 0.001746 | 0.001634 |
| alignment_of_a2_test.test | RUN | 0.119013 | 0.318070 | 0.471788 | 0.001840 | 0.001684 | 0.001594 |
| aligned_storage_test.test | RUN | 0.123744 | 0.320031 | 0.433009 | 0.001782 | 0.001890 | 0.001728 |
| aligned_storage_empy_test.test | RUN | 0.136916 | 0.350123 | 0.567019 | 0.001336 | 0.001792 | 0.001494 |
| aligned_storage_a2_test.test | RUN | 0.121692 | 0.309459 | 0.437923 | 0.002027 | 0.002120 | 0.001525 |
| add_volatile_test.test | RUN | 0.255728 | 0.909223 | 2.200629 | 0.001626 | 0.001451 | 0.001801 |
| add_rvalue_reference_test.test | RUN | 0.283234 | 0.998014 | 2.515196 | 0.001634 | 0.001744 | 0.001776 |
| add_reference_test.test | RUN | 0.270467 | 0.981149 | 2.471606 | 0.001650 | 0.001890 | 0.001756 |
| add_pointer_test.test | RUN | 0.176842 | 0.562556 | 1.278049 | 0.001663 | 0.001574 | 0.001764 |
| add_lvalue_reference_test.test | RUN | 0.284378 | 0.983855 | 2.467107 | 0.001524 | 0.001882 | 0.001898 |
| add_cv_test.test | RUN | 0.271228 | 0.922064 | 2.325462 | 0.001537 | 0.001511 | 0.001557 |
| add_const_test.test | RUN | 0.259138 | 0.906661 | 2.380675 | 0.001484 | 0.001434 | 0.001785 |
| is_virtual_base_of_fail.test | COMPILE_FAIL | 0.103824 | 0.239106 | 0.353757 | — | — | — |
| is_stateless_fail.test | COMPILE_FAIL | 0.105968 | 0.236013 | 0.372349 | — | — | — |
| is_polymorphic_fail.test | COMPILE_FAIL | 0.101473 | 0.238558 | 0.351385 | — | — | — |
| is_nothrow_move_constructible_fail.test | COMPILE_FAIL | 0.100508 | 0.240368 | 0.308116 | — | — | — |
| is_nothrow_move_assignable_fail.test | COMPILE_FAIL | 0.103493 | 0.231348 | 0.310861 | — | — | — |
| is_list_constructible_fail.test | COMPILE_FAIL | 0.099573 | 0.228264 | 0.344492 | — | — | — |
| is_empty_fail.test | COMPILE_FAIL | 0.102224 | 0.240923 | 0.334339 | — | — | — |
| is_destructible_fail.test | COMPILE_FAIL | 0.103773 | 0.237628 | 0.332914 | — | — | — |
| is_default_constructible_fail.test | COMPILE_FAIL | 0.102493 | 0.223179 | 0.313773 | — | — | — |
| is_copy_constructible_fail.test | COMPILE_FAIL | 0.098151 | 0.222058 | 0.338266 | — | — | — |
| is_copy_assignable_fail.test | COMPILE_FAIL | 0.101690 | 0.235336 | 0.322177 | — | — | — |
| is_convertible_fail.test | COMPILE_FAIL | 0.102792 | 0.242102 | 0.330193 | — | — | — |
| is_convertible2_fail.test | COMPILE_FAIL | 0.102710 | 0.237420 | 0.333522 | — | — | — |
| is_constructible_fail.test | COMPILE_FAIL | 0.100739 | 0.233002 | 0.342058 | — | — | — |
| is_base_of_fail.test | COMPILE_FAIL | 0.100630 | 0.236327 | 0.335562 | — | — | — |
| is_assignable_fail.test | COMPILE_FAIL | 0.102079 | 0.240180 | 0.322321 | — | — | — |
| has_nothrow_destruct_fail.test | COMPILE_FAIL | 0.100513 | 0.230894 | 0.328189 | — | — | — |
| has_nothrow_copy_fail.test | COMPILE_FAIL | 0.100255 | 0.229495 | 0.327504 | — | — | — |
| has_nothrow_cons_fail.test | COMPILE_FAIL | 0.102441 | 0.214697 | 0.334443 | — | — | — |
| has_nothrow_assign_fail.test | COMPILE_FAIL | 0.101473 | 0.231924 | 0.339265 | — | — | — |
| common_type_fail.test | COMPILE_FAIL | 0.105037 | 0.228159 | 0.319773 | — | — | — |
| common_type2_fail.test | COMPILE_FAIL | 0.103580 | 0.240579 | 0.324719 | — | — | — |
| has_nothrow_assign_test_no_intrinsics.test | RUN | 0.162560 | 0.519981 | 0.959747 | 0.001554 | 0.001703 | 0.001592 |
| has_nothrow_constr_test_no_intrinsics.test | RUN | 0.156067 | 0.513366 | 0.944368 | 0.001555 | 0.001748 | 0.001355 |
| has_nothrow_copy_test_no_intrinsics.test | RUN | 0.160700 | 0.529795 | 0.966019 | 0.001261 | 0.001382 | 0.001690 |
| is_nothrow_move_assignable_test_no_intrinsics.test | RUN | 0.154007 | 0.520256 | 0.889680 | 0.001269 | 0.001440 | 0.001306 |
| is_nothrow_move_constructible_test_no_intrinsics.test | RUN | 0.107153 | 0.338563 | 0.557347 | 0.001339 | 0.001375 | 0.001274 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 1.004× | 1.004×, 1.004× | 0.993× |
| clang | 1.042× | 1.038×, 1.047× | 0.993× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1363 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43620819273).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| add_const_test.test | 10 | 0.001139s | 0.001141s | 0.001175s | byte equality observed |
| add_cv_test.test | 10 | 0.001150s | 0.001148s | 0.001159s | byte equality observed |
| add_lvalue_reference_test.test | 10 | 0.001140s | 0.001137s | 0.001169s | byte equality observed |
| add_pointer_test.test | 10 | 0.001135s | 0.001150s | 0.001165s | byte equality observed |
| add_reference_test.test | 10 | 0.001142s | 0.001129s | 0.001144s | byte equality observed |
| add_rvalue_reference_test.test | 10 | 0.001153s | 0.001156s | 0.001152s | byte equality observed |
| add_volatile_test.test | 10 | 0.001152s | 0.001127s | 0.001151s | byte equality observed |
| aligned_storage_a2_test.test | 10 | 0.001286s | 0.001282s | 0.001287s | byte equality observed |
| aligned_storage_empy_test.test | 10 | 0.001135s | 0.001154s | 0.001140s | byte equality observed |
| aligned_storage_test.test | 10 | 0.001232s | 0.001252s | 0.001283s | byte equality observed |
| alignment_of_a2_test.test | 10 | 0.001114s | 0.001154s | 0.001164s | byte equality observed |
| alignment_of_test.test | 10 | 0.001114s | 0.001121s | 0.001147s | byte equality observed |
| common_type_2_test.test | 10 | 0.001062s | 0.001138s | 0.001134s | byte equality observed |
| common_type_3_test.test | 10 | 0.001092s | 0.001138s | 0.001142s | byte equality observed |
| common_type_4_test.test | 10 | 0.001125s | 0.001151s | 0.001151s | byte equality observed |
| common_type_5_test.test | 10 | 0.001154s | 0.001139s | 0.001142s | byte equality observed |
| common_type_6_test.test | 10 | 0.001138s | 0.001157s | 0.001140s | byte equality observed |
| common_type_sfinae2_test.test | 10 | 0.001109s | 0.001139s | 0.001119s | byte equality observed |
| common_type_sfinae_test.test | 10 | 0.001144s | 0.001156s | 0.001131s | byte equality observed |
| common_type_test.test | 10 | 0.001141s | 0.001154s | 0.001147s | byte equality observed |
| conditional_test.test | 10 | 0.001136s | 0.001166s | 0.001153s | byte equality observed |
| conjunction_test.test | 10 | 0.001136s | 0.001151s | 0.001149s | byte equality observed |
| copy_cv_ref_test.test | 10 | 0.001134s | 0.001134s | 0.001164s | byte equality observed |
| copy_cv_test.test | 10 | 0.001158s | 0.001134s | 0.001118s | byte equality observed |
| copy_reference_test.test | 10 | 0.001134s | 0.001138s | 0.001134s | byte equality observed |
| cxx14_aliases_test.test | 10 | 0.001131s | 0.001147s | 0.001137s | byte equality observed |
| decay_test.test | 10 | 0.001157s | 0.001152s | 0.001148s | byte equality observed |
| detected_or_test.test | 10 | 0.001144s | 0.001150s | 0.001121s | byte equality observed |
| detected_test.test | 10 | 0.001135s | 0.001138s | 0.001159s | byte equality observed |
| disjunction_test.test | 10 | 0.001134s | 0.001150s | 0.001129s | byte equality observed |
| enable_if_test.test | 10 | 0.001137s | 0.001139s | 0.001137s | byte equality observed |
| extent_test.test | 10 | 0.001151s | 0.001145s | 0.001135s | byte equality observed |
| floating_point_promotion_test.test | 10 | 0.001125s | 0.001155s | 0.001154s | byte equality observed |
| function_traits_test.test | 10 | 0.001132s | 0.001167s | 0.001140s | byte equality observed |
| has_binary_classes0_test.test | 10 | 0.001139s | 0.001153s | 0.001134s | byte equality observed |
| has_binary_classes1_test.test | 10 | 0.001143s | 0.001150s | 0.001122s | byte equality observed |
| has_binary_classes2_test.test | 10 | 0.001137s | 0.001152s | 0.001135s | byte equality observed |
| has_binary_classes3_test.test | 10 | 0.001137s | 0.001141s | 0.001151s | byte equality observed |
| has_binary_classes4_test.test | 10 | 0.001148s | 0.001163s | 0.001129s | byte equality observed |
| has_binary_classes5_test.test | 10 | 0.001139s | 0.001151s | 0.001142s | byte equality observed |
| has_binary_classes6_test.test | 10 | 0.001142s | 0.001141s | 0.001123s | byte equality observed |
| has_binary_classes7_test.test | 10 | 0.001159s | 0.001148s | 0.001127s | byte equality observed |
| has_binary_classes8_test.test | 10 | 0.001137s | 0.001142s | 0.001150s | byte equality observed |
| has_binary_classes9_test.test | 10 | 0.001134s | 0.001126s | 0.001140s | byte equality observed |
| has_bit_and_assign_test.test | 10 | 0.001137s | 0.001139s | 0.001159s | byte equality observed |
| has_bit_and_test.test | 10 | 0.001146s | 0.001139s | 0.001164s | byte equality observed |
| has_bit_or_assign_test.test | 10 | 0.001127s | 0.001149s | 0.001129s | byte equality observed |
| has_bit_or_test.test | 10 | 0.001140s | 0.001118s | 0.001140s | byte equality observed |
| has_bit_xor_assign_test.test | 10 | 0.001126s | 0.001149s | 0.001120s | byte equality observed |
| has_bit_xor_test.test | 10 | 0.001138s | 0.001142s | 0.001143s | byte equality observed |
| has_complement_test.test | 10 | 0.001133s | 0.001146s | 0.001148s | byte equality observed |
| has_dereference_test.test | 10 | 0.001141s | 0.001144s | 0.001128s | byte equality observed |
| has_divides_assign_test.test | 10 | 0.001130s | 0.001136s | 0.001147s | byte equality observed |
| has_divides_test.test | 10 | 0.001141s | 0.001126s | 0.001134s | byte equality observed |
| has_equal_to_test.test | 10 | 0.001131s | 0.001153s | 0.001163s | byte equality observed |
| has_greater_equal_test.test | 10 | 0.001143s | 0.001165s | 0.001140s | byte equality observed |
| has_greater_test.test | 10 | 0.001139s | 0.001148s | 0.001133s | byte equality observed |
| has_left_shift_assign_test.test | 10 | 0.001130s | 0.001148s | 0.001136s | byte equality observed |
| has_left_shift_test.test | 10 | 0.001137s | 0.001143s | 0.001132s | byte equality observed |
| has_less_equal_test.test | 10 | 0.001144s | 0.001146s | 0.001152s | byte equality observed |
| has_less_test.test | 10 | 0.001134s | 0.001149s | 0.001148s | byte equality observed |
| has_logical_and_test.test | 10 | 0.001138s | 0.001145s | 0.001136s | byte equality observed |
| has_logical_not_test.test | 10 | 0.001131s | 0.001145s | 0.001150s | byte equality observed |
| has_logical_or_test.test | 10 | 0.001128s | 0.001148s | 0.001155s | byte equality observed |
| has_minus_assign_test.test | 10 | 0.001107s | 0.001166s | 0.001152s | byte equality observed |
| has_minus_test.test | 10 | 0.001139s | 0.001154s | 0.001135s | byte equality observed |
| has_modulus_assign_test.test | 10 | 0.001114s | 0.001147s | 0.001172s | byte equality observed |
| has_modulus_test.test | 10 | 0.001137s | 0.001157s | 0.001119s | byte equality observed |
| has_multiplies_assign_test.test | 10 | 0.001126s | 0.001166s | 0.001140s | byte equality observed |
| has_multiplies_test.test | 10 | 0.001129s | 0.001132s | 0.001162s | byte equality observed |
| has_negate_test.test | 10 | 0.001144s | 0.001142s | 0.001143s | byte equality observed |
| has_not_equal_to_test.test | 10 | 0.001154s | 0.001153s | 0.001136s | byte equality observed |
| has_nothrow_assign_test.test | 10 | 0.001129s | 0.001118s | 0.001158s | byte equality observed |
| has_nothrow_assign_test_no_intrinsics.test | 10 | 0.001123s | 0.001168s | 0.001167s | byte equality observed |
| has_nothrow_constr_test.test | 10 | 0.001146s | 0.001121s | 0.001148s | byte equality observed |
| has_nothrow_constr_test_no_intrinsics.test | 10 | 0.001135s | 0.001153s | 0.001148s | byte equality observed |
| has_nothrow_copy_test.test | 10 | 0.001132s | 0.001145s | 0.001125s | byte equality observed |
| has_nothrow_copy_test_no_intrinsics.test | 10 | 0.001146s | 0.001163s | 0.001158s | byte equality observed |
| has_nothrow_destructor_test.test | 10 | 0.001148s | 0.001137s | 0.001140s | byte equality observed |
| has_operator_new_test.test | 10 | 0.001149s | 0.001166s | 0.001135s | byte equality observed |
| has_plus_assign_test.test | 10 | 0.001136s | 0.001168s | 0.001138s | byte equality observed |
| has_plus_test.test | 10 | 0.001147s | 0.001127s | 0.001142s | byte equality observed |
| has_post_decrement_test.test | 10 | 0.001142s | 0.001165s | 0.001154s | byte equality observed |
| has_post_increment_test.test | 10 | 0.001144s | 0.001138s | 0.001136s | byte equality observed |
| has_postfix_classes0_test.test | 10 | 0.001156s | 0.001144s | 0.001143s | byte equality observed |
| has_postfix_classes1_test.test | 10 | 0.001133s | 0.001150s | 0.001166s | byte equality observed |
| has_postfix_classes2_test.test | 10 | 0.001141s | 0.001138s | 0.001138s | byte equality observed |
| has_postfix_classes3_test.test | 10 | 0.001129s | 0.001154s | 0.001119s | byte equality observed |
| has_pre_decrement_test.test | 10 | 0.001134s | 0.001154s | 0.001139s | byte equality observed |
| has_pre_increment_test.test | 10 | 0.001134s | 0.001149s | 0.001162s | byte equality observed |
| has_prefix_classes0_test.test | 10 | 0.001122s | 0.001153s | 0.001141s | byte equality observed |
| has_prefix_classes1_test.test | 10 | 0.001146s | 0.001139s | 0.001123s | byte equality observed |
| has_prefix_classes2_test.test | 10 | 0.001149s | 0.001155s | 0.001163s | byte equality observed |
| has_prefix_classes3_test.test | 10 | 0.001116s | 0.001138s | 0.001149s | byte equality observed |
| has_right_shift_assign_test.test | 10 | 0.001135s | 0.001145s | 0.001116s | byte equality observed |
| has_right_shift_test.test | 10 | 0.001126s | 0.001154s | 0.001120s | byte equality observed |
| has_trivial_assign_test.test | 10 | 0.001194s | 0.001205s | 0.001205s | byte equality observed |
| has_trivial_constr_test.test | 10 | 0.001204s | 0.001209s | 0.001212s | native test oracle; output varies |
| has_trivial_copy_test.test | 10 | 0.001188s | 0.001186s | 0.001228s | native test oracle; output varies |
| has_trivial_destructor_test.test | 10 | 0.001075s | 0.001122s | 0.001035s | byte equality observed |
| has_trivial_move_assign_test.test | 10 | 0.001035s | 0.001073s | 0.001119s | byte equality observed |
| has_trivial_move_constructor_test.test | 10 | 0.001089s | 0.001089s | 0.001165s | byte equality observed |
| has_unary_minus_test.test | 10 | 0.001131s | 0.001075s | 0.001140s | byte equality observed |
| has_unary_plus_test.test | 10 | 0.001151s | 0.001093s | 0.001143s | byte equality observed |
| has_virtual_destructor_test.test | 10 | 0.001148s | 0.001082s | 0.001168s | byte equality observed |
| integral_constant_test.test | 10 | 0.000507s | 0.000489s | 0.001149s | byte equality observed |
| is_abstract_test.test | 10 | 0.001133s | 0.001155s | 0.001146s | byte equality observed |
| is_arithmetic_test.test | 10 | 0.001131s | 0.001118s | 0.001150s | byte equality observed |
| is_array_test.test | 10 | 0.001108s | 0.001147s | 0.001144s | byte equality observed |
| is_assignable_test.test | 10 | 0.001116s | 0.001157s | 0.001151s | byte equality observed |
| is_base_and_derived_test.test | 10 | 0.001115s | 0.001124s | 0.001140s | byte equality observed |
| is_base_of_test.test | 10 | 0.001127s | 0.001148s | 0.001145s | byte equality observed |
| is_bounded_array_test.test | 10 | 0.001141s | 0.001123s | 0.001152s | byte equality observed |
| is_class_test.test | 10 | 0.001125s | 0.001143s | 0.001159s | byte equality observed |
| is_complete_test.test | 10 | 0.001158s | 0.001145s | 0.001152s | byte equality observed |
| is_complex_test.test | 10 | 0.001125s | 0.001135s | 0.001155s | byte equality observed |
| is_compound_test.test | 10 | 0.001137s | 0.001139s | 0.001146s | byte equality observed |
| is_const_test.test | 10 | 0.001135s | 0.001125s | 0.001162s | byte equality observed |
| is_constructible_test.test | 10 | 0.001140s | 0.001156s | 0.001152s | byte equality observed |
| is_convertible_test.test | 10 | 0.001130s | 0.001162s | 0.001157s | byte equality observed |
| is_copy_assignable_test.test | 10 | 0.001136s | 0.001159s | 0.001129s | byte equality observed |
| is_copy_constructible_test.test | 10 | 0.001133s | 0.001163s | 0.001151s | byte equality observed |
| is_default_constr_test.test | 10 | 0.001132s | 0.001153s | 0.001157s | byte equality observed |
| is_destructible_test.test | 10 | 0.001135s | 0.001166s | 0.001126s | byte equality observed |
| is_detected_exact_test.test | 10 | 0.001143s | 0.001167s | 0.001149s | byte equality observed |
| is_detected_test.test | 10 | 0.001132s | 0.001150s | 0.001147s | byte equality observed |
| is_empty_test.test | 9 | 0.001145s | 0.001122s | 0.001172s | byte equality observed |
| is_enum_test.test | 10 | 0.001117s | 0.001162s | 0.001151s | byte equality observed |
| is_final_test.test | 10 | 0.001134s | 0.001184s | 0.001155s | byte equality observed |
| is_float_test.test | 10 | 0.001142s | 0.001163s | 0.001175s | byte equality observed |
| is_floating_point_test.test | 10 | 0.001135s | 0.001139s | 0.001149s | byte equality observed |
| is_function_test.test | 10 | 0.001127s | 0.001134s | 0.001132s | byte equality observed |
| is_fundamental_test.test | 10 | 0.001142s | 0.001137s | 0.001144s | byte equality observed |
| is_integral_test.test | 10 | 0.001133s | 0.001129s | 0.001141s | byte equality observed |
| is_list_constructible_test.test | 10 | 0.001133s | 0.001159s | 0.001131s | byte equality observed |
| is_lvalue_reference_test.test | 10 | 0.001122s | 0.001151s | 0.001135s | byte equality observed |
| is_member_func_test.test | 10 | 0.001130s | 0.001120s | 0.001137s | byte equality observed |
| is_member_obj_test.test | 10 | 0.001136s | 0.001146s | 0.001162s | byte equality observed |
| is_member_pointer_test.test | 10 | 0.001146s | 0.001147s | 0.001148s | byte equality observed |
| is_noncopyable_test.test | 10 | 0.001130s | 0.001162s | 0.001152s | byte equality observed |
| is_nothrow_move_assignable_test.test | 10 | 0.001137s | 0.001145s | 0.001120s | byte equality observed |
| is_nothrow_move_assignable_test_no_intrinsics.test | 10 | 0.001132s | 0.001163s | 0.001154s | byte equality observed |
| is_nothrow_move_constructible_test.test | 10 | 0.001121s | 0.001126s | 0.001152s | byte equality observed |
| is_nothrow_move_constructible_test_no_intrinsics.test | 10 | 0.001138s | 0.001124s | 0.001143s | byte equality observed |
| is_nothrow_swappable_test.test | 10 | 0.001129s | 0.001142s | 0.001154s | byte equality observed |
| is_object_test.test | 10 | 0.001148s | 0.001132s | 0.001163s | byte equality observed |
| is_pod_test.test | 10 | 0.001122s | 0.001161s | 0.001138s | byte equality observed |
| is_pointer_test.test | 10 | 0.001129s | 0.001135s | 0.001131s | byte equality observed |
| is_polymorphic_test.test | 10 | 0.001140s | 0.001142s | 0.001153s | byte equality observed |
| is_reference_test.test | 10 | 0.001143s | 0.001163s | 0.001110s | byte equality observed |
| is_rvalue_reference_test.test | 10 | 0.001148s | 0.001159s | 0.001140s | byte equality observed |
| is_same_test.test | 10 | 0.001144s | 0.001148s | 0.001146s | byte equality observed |
| is_scalar_test.test | 10 | 0.001143s | 0.001147s | 0.001165s | byte equality observed |
| is_scoped_enum_test.test | 10 | 0.001133s | 0.001163s | 0.001147s | byte equality observed |
| is_signed_test.test | 10 | 0.001145s | 0.001154s | 0.001129s | byte equality observed |
| is_stateless_test.test | 10 | 0.001138s | 0.001134s | 0.001166s | byte equality observed |
| is_swappable_test.test | 10 | 0.001143s | 0.001151s | 0.001145s | byte equality observed |
| is_trivially_copyable_test.test | 10 | 0.001166s | 0.001177s | 0.001159s | byte equality observed |
| is_unbounded_array_test.test | 10 | 0.001154s | 0.001137s | 0.001140s | byte equality observed |
| is_union_test.test | 10 | 0.001114s | 0.001128s | 0.001152s | byte equality observed |
| is_unscoped_enum_test.test | 10 | 0.001138s | 0.001124s | 0.001149s | byte equality observed |
| is_unsigned_test.test | 10 | 0.001146s | 0.001148s | 0.001122s | byte equality observed |
| is_virtual_base_of_test.test | 10 | 0.001138s | 0.001148s | 0.001132s | byte equality observed |
| is_void_test.test | 10 | 0.001126s | 0.001132s | 0.001108s | byte equality observed |
| is_volatile_test.test | 10 | 0.001141s | 0.001136s | 0.001132s | byte equality observed |
| make_signed_test.test | 10 | 0.001141s | 0.001153s | 0.001122s | byte equality observed |
| make_unsigned_test.test | 10 | 0.001142s | 0.001140s | 0.001130s | byte equality observed |
| make_void_test.test | 10 | 0.001145s | 0.001167s | 0.001136s | byte equality observed |
| mpl_interop_test1.test | 10 | 0.000509s | 0.000530s | 0.001142s | byte equality observed |
| mpl_interop_test2.test | 10 | 0.000513s | 0.000517s | 0.001150s | byte equality observed |
| mpl_interop_test3.test | 10 | 0.000517s | 0.000511s | 0.001130s | byte equality observed |
| negation_test.test | 10 | 0.001170s | 0.001178s | 0.001132s | byte equality observed |
| promote_basic_test.test | 10 | 0.000511s | 0.000507s | 0.001138s | byte equality observed |
| promote_enum_msvc_bug_test.test | 10 | 0.000513s | 0.000515s | 0.001125s | byte equality observed |
| promote_enum_test.test | 10 | 0.000517s | 0.000514s | 0.001123s | byte equality observed |
| promote_mpl_test.test | 10 | 0.000514s | 0.000515s | 0.001129s | byte equality observed |
| rank_test.test | 10 | 0.001154s | 0.001145s | 0.001139s | byte equality observed |
| remove_all_extents_test.test | 10 | 0.001160s | 0.001174s | 0.001142s | byte equality observed |
| remove_bounds_test.test | 10 | 0.001158s | 0.001156s | 0.001127s | byte equality observed |
| remove_const_test.test | 10 | 0.001143s | 0.001125s | 0.001166s | byte equality observed |
| remove_cv_ref_test.test | 10 | 0.001141s | 0.001154s | 0.001144s | byte equality observed |
| remove_cv_test.test | 10 | 0.001147s | 0.001147s | 0.001117s | byte equality observed |
| remove_extent_test.test | 10 | 0.001153s | 0.001139s | 0.001158s | byte equality observed |
| remove_pointer_test.test | 10 | 0.001154s | 0.001118s | 0.001134s | byte equality observed |
| remove_reference_test.test | 10 | 0.001153s | 0.001151s | 0.001129s | byte equality observed |
| remove_volatile_test.test | 10 | 0.001148s | 0.001121s | 0.001126s | byte equality observed |
| tricky_abstract_type_test.test | 10 | 0.001126s | 0.001154s | 0.001125s | byte equality observed |
| tricky_add_pointer_test.test | 10 | 0.001137s | 0.001144s | 0.001138s | byte equality observed |
| tricky_function_type_test.test | 10 | 0.001136s | 0.001147s | 0.001128s | byte equality observed |
| tricky_incomplete_type_test.test | 10 | 0.001124s | 0.001113s | 0.001152s | byte equality observed |
| tricky_is_enum_test.test | 10 | 0.001131s | 0.001149s | 0.001133s | byte equality observed |
| tricky_partial_spec_test.test | 10 | 0.001143s | 0.001137s | 0.001149s | byte equality observed |
| tricky_rvalue_test.test | 10 | 0.001149s | 0.001136s | 0.001125s | byte equality observed |
| type_identity_test.test | 10 | 0.001154s | 0.001155s | 0.001135s | byte equality observed |
| type_traits_test.test | 10 | 0.000509s | 0.000503s | 0.001123s | byte equality observed |
| type_with_alignment_test.test | 10 | 0.001289s | 0.001290s | 0.001281s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43620819273).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
