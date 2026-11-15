# libs/type_traits/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| type_with_alignment_test.test | RUN | 0.158671 | 0.432032 | 0.741906 | 0.002082 | 0.002276 | 0.002012 |
| type_traits_test.test | RUN | 0.225459 | 0.466949 | 0.822505 | 0.000711 | 0.000859 | 0.001830 |
| type_identity_test.test | RUN | 0.441819 | 1.765807 | 4.580661 | 0.001748 | 0.001964 | 0.002062 |
| tricky_rvalue_test.test | RUN | 0.146425 | 0.346445 | 0.605023 | 0.001832 | 0.001878 | 0.002243 |
| tricky_partial_spec_test.test | RUN | 0.185529 | 0.524792 | 1.028229 | 0.001830 | 0.002058 | 0.002039 |
| tricky_is_enum_test.test | RUN | 0.145710 | 0.350563 | 0.548949 | 0.001904 | 0.002070 | 0.002179 |
| tricky_incomplete_type_test.test | RUN | 0.236612 | 0.547798 | 0.915002 | 0.001746 | 0.002060 | 0.002060 |
| tricky_function_type_test.test | RUN | 0.196876 | 0.559083 | 1.097006 | 0.001800 | 0.001914 | 0.002121 |
| tricky_add_pointer_test.test | RUN | 0.300891 | 1.032551 | 2.549485 | 0.001999 | 0.002026 | 0.002096 |
| tricky_abstract_type_test.test | RUN | 0.152841 | 0.359164 | 0.584098 | 0.001742 | 0.001737 | 0.002078 |
| remove_volatile_test.test | RUN | 0.411329 | 1.445796 | 3.939184 | 0.002126 | 0.001988 | 0.002062 |
| remove_reference_test.test | RUN | 0.412371 | 1.556876 | 4.133219 | 0.002016 | 0.002021 | 0.002100 |
| remove_pointer_test.test | RUN | 0.430785 | 1.589115 | 4.372721 | 0.001906 | 0.001730 | 0.002101 |
| remove_extent_test.test | RUN | 0.430530 | 1.559441 | 4.190831 | 0.001956 | 0.002069 | 0.001701 |
| remove_cv_test.test | RUN | 0.425844 | 1.584904 | 4.141091 | 0.002196 | 0.001968 | 0.002167 |
| remove_cv_ref_test.test | RUN | 0.869334 | 3.665747 | 10.118641 | 0.001911 | 0.001710 | 0.001834 |
| remove_const_test.test | RUN | 0.401904 | 1.415563 | 3.962980 | 0.001962 | 0.001964 | 0.002122 |
| remove_bounds_test.test | RUN | 0.422156 | 1.572446 | 4.193854 | 0.001908 | 0.001929 | 0.002166 |
| remove_all_extents_test.test | RUN | 0.426884 | 1.575467 | 4.095987 | 0.001714 | 0.001842 | 0.001739 |
| rank_test.test | RUN | 0.150954 | 0.359017 | 0.544450 | 0.001427 | 0.002071 | 0.001866 |
| promote_mpl_test.test | RUN | 0.131140 | 0.320178 | 0.392734 | 0.000806 | 0.000857 | 0.001816 |
| promote_enum_test.test | RUN | 0.029678 | 0.081020 | 0.091531 | 0.000837 | 0.000747 | 0.001751 |
| promote_enum_msvc_bug_test.test | RUN | 0.026339 | 0.069935 | 0.073884 | 0.000670 | 0.000795 | 0.001680 |
| promote_basic_test.test | RUN | 0.034277 | 0.093759 | 0.094170 | 0.000714 | 0.000941 | 0.002070 |
| negation_test.test | RUN | 0.144775 | 0.329878 | 0.500328 | 0.001984 | 0.001896 | 0.002092 |
| mpl_interop_test3.test | RUN | 0.123382 | 0.310156 | 0.379537 | 0.000752 | 0.000773 | 0.001730 |
| mpl_interop_test2.test | RUN | 0.042686 | 0.085537 | 0.102288 | 0.000718 | 0.000751 | 0.001852 |
| mpl_interop_test1.test | RUN | 0.022748 | 0.063171 | 0.063072 | 0.000713 | 0.000840 | 0.002038 |
| make_void_test.test | RUN | 0.148191 | 0.357572 | 0.633400 | 0.001710 | 0.002106 | 0.002026 |
| make_unsigned_test.test | RUN | 0.173248 | 0.489067 | 0.874503 | 0.001752 | 0.001861 | 0.001738 |
| make_signed_test.test | RUN | 0.176298 | 0.495685 | 0.862482 | 0.001498 | 0.001883 | 0.001952 |
| is_volatile_test.test | RUN | 0.152877 | 0.406093 | 0.720370 | 0.001824 | 0.001712 | 0.001944 |
| is_void_test.test | RUN | 0.151851 | 0.373460 | 0.652505 | 0.001666 | 0.002150 | 0.002065 |
| is_virtual_base_of_test.test | RUN | 0.176018 | 0.499479 | 0.897098 | 0.001600 | 0.001881 | 0.002024 |
| is_unsigned_test.test | RUN | 0.154554 | 0.406787 | 0.661856 | 0.001848 | 0.001599 | 0.001896 |
| is_unscoped_enum_test.test | RUN | 0.151049 | 0.344642 | 0.587239 | 0.001562 | 0.002004 | 0.001884 |
| is_union_test.test | RUN | 0.164533 | 0.458099 | 0.760067 | 0.001827 | 0.001954 | 0.002040 |
| is_unbounded_array_test.test | RUN | 0.148709 | 0.381847 | 0.621353 | 0.001823 | 0.001950 | 0.002164 |
| is_trivially_copyable_test.test | RUN | 0.247693 | 0.821774 | 1.621550 | 0.001912 | 0.002170 | 0.002244 |
| is_swappable_test.test | RUN | 0.205138 | 0.614744 | 1.211583 | 0.001752 | 0.002136 | 0.002142 |
| is_stateless_test.test | RUN | 0.235608 | 0.726087 | 1.433716 | 0.001629 | 0.002016 | 0.002076 |
| is_signed_test.test | RUN | 0.157211 | 0.388199 | 0.717565 | 0.001883 | 0.002053 | 0.002022 |
| is_scoped_enum_test.test | RUN | 0.152210 | 0.363514 | 0.566322 | 0.001854 | 0.001724 | 0.002018 |
| is_scalar_test.test | RUN | 0.209425 | 0.654411 | 1.252732 | 0.001658 | 0.001815 | 0.001992 |
| is_same_test.test | RUN | 0.152538 | 0.393046 | 0.607700 | 0.001872 | 0.001848 | 0.002090 |
| is_rvalue_reference_test.test | RUN | 0.158191 | 0.432663 | 0.765782 | 0.001743 | 0.001432 | 0.001631 |
| is_reference_test.test | RUN | 0.160418 | 0.439835 | 0.740036 | 0.001728 | 0.002096 | 0.002098 |
| is_polymorphic_test.test | RUN | 0.165157 | 0.447072 | 0.815123 | 0.001705 | 0.002136 | 0.002066 |
| is_pointer_test.test | RUN | 0.163683 | 0.436754 | 0.812320 | 0.001758 | 0.001819 | 0.002005 |
| is_pod_test.test | RUN | 0.216880 | 0.722697 | 1.467741 | 0.001405 | 0.002121 | 0.002162 |
| is_object_test.test | RUN | 0.151736 | 0.366058 | 0.552292 | 0.001740 | 0.001963 | 0.001906 |
| is_nothrow_swappable_test.test | RUN | 0.220898 | 0.668807 | 1.344654 | 0.001833 | 0.001851 | 0.002154 |
| is_nothrow_move_constructible_test.test | RUN | 0.211270 | 0.691613 | 1.399580 | 0.001806 | 0.001767 | 0.001826 |
| is_nothrow_move_assignable_test.test | RUN | 0.213388 | 0.707678 | 1.399657 | 0.001738 | 0.002106 | 0.001914 |
| is_noncopyable_test.test | RUN | 0.153173 | 0.365418 | 0.641067 | 0.001849 | 0.001912 | 0.002006 |
| is_member_pointer_test.test | RUN | 0.155868 | 0.379164 | 0.605341 | 0.001814 | 0.001824 | 0.001932 |
| is_member_obj_test.test | RUN | 0.152200 | 0.387765 | 0.648234 | 0.001888 | 0.001951 | 0.001871 |
| is_member_func_test.test | RUN | 0.157516 | 0.403912 | 0.697011 | 0.001912 | 0.001809 | 0.002138 |
| is_lvalue_reference_test.test | RUN | 0.159643 | 0.437509 | 0.751488 | 0.001759 | 0.001903 | 0.001987 |
| is_list_constructible_test.test | RUN | 0.185296 | 0.500980 | 0.850727 | 0.001962 | 0.001819 | 0.001982 |
| is_integral_test.test | RUN | 0.189598 | 0.597248 | 1.172947 | 0.001847 | 0.001932 | 0.001877 |
| is_fundamental_test.test | RUN | 0.192658 | 0.612855 | 1.225504 | 0.001719 | 0.001907 | 0.002174 |
| is_function_test.test | RUN | 0.152188 | 0.408566 | 0.655967 | 0.001704 | 0.001740 | 0.002144 |
| is_floating_point_test.test | RUN | 0.163399 | 0.438051 | 0.753969 | 0.001857 | 0.001752 | 0.002044 |
| is_float_test.test | RUN | 0.160415 | 0.433186 | 0.807067 | 0.001855 | 0.001874 | 0.001944 |
| is_final_test.test | RUN | 0.161170 | 0.441150 | 0.737274 | 0.001716 | 0.001558 | 0.002093 |
| is_enum_test.test | RUN | 0.147391 | 0.372178 | 0.586395 | 0.001738 | 0.001788 | 0.001951 |
| is_empty_test.test | RUN | 0.156710 | 0.399275 | 0.681173 | 0.001921 | 0.001862 | 0.002090 |
| is_detected_test.test | RUN | 0.143670 | 0.337375 | 0.536818 | 0.002052 | 0.001855 | 0.001816 |
| is_detected_exact_test.test | RUN | 0.143178 | 0.339725 | 0.505833 | 0.001630 | 0.001784 | 0.002008 |
| is_destructible_test.test | RUN | 0.211177 | 0.666892 | 1.397706 | 0.002018 | 0.002062 | 0.002065 |
| is_default_constr_test.test | RUN | 0.212372 | 0.697608 | 1.393973 | 0.001933 | 0.002182 | 0.002108 |
| is_copy_constructible_test.test | RUN | 0.225369 | 0.731668 | 1.494400 | 0.001712 | 0.001821 | 0.002086 |
| is_copy_assignable_test.test | RUN | 0.222633 | 0.712832 | 1.479514 | 0.001928 | 0.001856 | 0.002026 |
| is_convertible_test.test | RUN | 0.214412 | 0.655521 | 1.195778 | 0.001736 | 0.002248 | 0.001864 |
| is_constructible_test.test | RUN | 0.174276 | 0.469360 | 0.808504 | 0.001572 | 0.001966 | 0.001792 |
| is_const_test.test | RUN | 0.154505 | 0.394675 | 0.710855 | 0.001672 | 0.001754 | 0.002019 |
| is_compound_test.test | RUN | 0.144576 | 0.358682 | 0.578909 | 0.002018 | 0.001848 | 0.001765 |
| is_complex_test.test | RUN | 0.200245 | 0.467884 | 0.797240 | 0.001988 | 0.002124 | 0.001819 |
| is_complete_test.test | RUN | 0.175666 | 0.481804 | 0.883692 | 0.001749 | 0.001707 | 0.001778 |
| is_class_test.test | RUN | 0.162373 | 0.423797 | 0.741000 | 0.001881 | 0.001743 | 0.001630 |
| is_bounded_array_test.test | RUN | 0.144325 | 0.372913 | 0.659018 | 0.001895 | 0.002122 | 0.001980 |
| is_base_of_test.test | RUN | 0.165989 | 0.419404 | 0.735927 | 0.001914 | 0.002104 | 0.001826 |
| is_base_and_derived_test.test | RUN | 0.164119 | 0.403425 | 0.726404 | 0.001904 | 0.001860 | 0.001605 |
| is_assignable_test.test | RUN | 0.192435 | 0.580406 | 1.129026 | 0.001776 | 0.002127 | 0.001957 |
| is_array_test.test | RUN | 0.159812 | 0.397966 | 0.701238 | 0.001941 | 0.001797 | 0.001910 |
| is_arithmetic_test.test | RUN | 0.193944 | 0.602556 | 1.149512 | 0.001838 | 0.002116 | 0.002113 |
| is_abstract_test.test | RUN | 0.362484 | 1.594689 | 3.905229 | 0.001820 | 0.001883 | 0.001856 |
| integral_constant_test.test | RUN | 0.024360 | 0.060207 | 0.073556 | 0.000786 | 0.000901 | 0.001906 |
| has_virtual_destructor_test.test | RUN | 0.167889 | 0.462374 | 0.891626 | 0.001767 | 0.002134 | 0.002104 |
| has_unary_plus_test.test | RUN | 0.333478 | 1.805131 | 2.954518 | 0.001902 | 0.002154 | 0.002061 |
| has_unary_minus_test.test | RUN | 0.332620 | 1.850715 | 2.919001 | 0.001953 | 0.001868 | 0.002126 |
| has_trivial_move_constructor_test.test | RUN | 0.223405 | 0.704221 | 1.472945 | 0.001734 | 0.001728 | 0.001864 |
| has_trivial_move_assign_test.test | RUN | 0.224925 | 0.646167 | 1.424362 | 0.001862 | 0.001888 | 0.002048 |
| has_trivial_destructor_test.test | RUN | 0.225640 | 0.632604 | 1.432739 | 0.001942 | 0.001798 | 0.002125 |
| has_trivial_copy_test.test | RUN | 0.228108 | 0.745672 | 1.470716 | 0.001927 | 0.001932 | 0.002242 |
| has_trivial_constr_test.test | RUN | 0.226230 | 0.735469 | 1.521410 | 0.001655 | 0.001913 | 0.002227 |
| has_trivial_assign_test.test | RUN | 0.224439 | 0.725848 | 1.500768 | 0.001822 | 0.002025 | 0.002122 |
| has_right_shift_test.test | RUN | 0.352854 | 1.401251 | 3.184390 | 0.001778 | 0.001909 | 0.002054 |
| has_right_shift_assign_test.test | RUN | 0.317426 | 1.326399 | 3.000744 | 0.001748 | 0.002107 | 0.001995 |
| has_prefix_classes3_test.test | RUN | 0.235218 | 0.740803 | 1.565282 | 0.001820 | 0.001966 | 0.002076 |
| has_prefix_classes2_test.test | RUN | 0.243305 | 0.763496 | 1.557576 | 0.001753 | 0.001731 | 0.001916 |
| has_prefix_classes1_test.test | RUN | 0.240119 | 0.754876 | 1.564604 | 0.001978 | 0.002086 | 0.002018 |
| has_prefix_classes0_test.test | RUN | 0.236608 | 0.761270 | 1.518077 | 0.001729 | 0.002134 | 0.002142 |
| has_pre_increment_test.test | RUN | 0.324384 | 1.832080 | 3.009434 | 0.001893 | 0.001654 | 0.001746 |
| has_pre_decrement_test.test | RUN | 0.326889 | 1.813797 | 2.935173 | 0.001721 | 0.002139 | 0.001888 |
| has_postfix_classes3_test.test | RUN | 0.242057 | 0.793596 | 1.607625 | 0.002108 | 0.001998 | 0.002130 |
| has_postfix_classes2_test.test | RUN | 0.238294 | 0.772105 | 1.533859 | 0.001732 | 0.001910 | 0.002228 |
| has_postfix_classes1_test.test | RUN | 0.246635 | 0.789387 | 1.516719 | 0.001891 | 0.001948 | 0.002071 |
| has_postfix_classes0_test.test | RUN | 0.239830 | 0.767624 | 1.535327 | 0.001566 | 0.002173 | 0.002062 |
| has_post_increment_test.test | RUN | 0.321625 | 1.848329 | 2.993200 | 0.001879 | 0.001876 | 0.002007 |
| has_post_decrement_test.test | RUN | 0.322236 | 1.824183 | 3.054151 | 0.001805 | 0.002134 | 0.002039 |
| has_plus_test.test | RUN | 0.319750 | 1.323342 | 3.018480 | 0.001897 | 0.001752 | 0.001786 |
| has_plus_assign_test.test | RUN | 0.330192 | 1.326711 | 2.956674 | 0.001773 | 0.002198 | 0.001963 |
| has_operator_new_test.test | RUN | 0.219257 | 0.683428 | 1.398845 | 0.002010 | 0.002170 | 0.001827 |
| has_nothrow_destructor_test.test | RUN | 0.227243 | 0.739249 | 1.489768 | 0.001766 | 0.001851 | 0.002039 |
| has_nothrow_copy_test.test | RUN | 0.224545 | 0.742840 | 1.451161 | 0.001760 | 0.001690 | 0.001753 |
| has_nothrow_constr_test.test | RUN | 0.212024 | 0.707274 | 1.428370 | 0.001898 | 0.001880 | 0.002131 |
| has_nothrow_assign_test.test | RUN | 0.214446 | 0.693761 | 1.406952 | 0.001942 | 0.002079 | 0.002044 |
| has_not_equal_to_test.test | RUN | 0.328872 | 1.818919 | 3.042221 | 0.001916 | 0.001966 | 0.002123 |
| has_negate_test.test | RUN | 0.311814 | 1.300655 | 2.854001 | 0.001861 | 0.001901 | 0.001956 |
| has_multiplies_test.test | RUN | 0.320703 | 1.290966 | 3.019522 | 0.001785 | 0.001905 | 0.002054 |
| has_multiplies_assign_test.test | RUN | 0.336820 | 1.330456 | 3.001308 | 0.001865 | 0.002090 | 0.001885 |
| has_modulus_test.test | RUN | 0.326115 | 1.318031 | 2.969299 | 0.001933 | 0.001744 | 0.002063 |
| has_modulus_assign_test.test | RUN | 0.326982 | 1.315316 | 3.025727 | 0.001792 | 0.002013 | 0.001944 |
| has_minus_test.test | RUN | 0.335307 | 1.318485 | 3.013555 | 0.001838 | 0.001741 | 0.001872 |
| has_minus_assign_test.test | RUN | 0.341121 | 1.326206 | 3.031696 | 0.001919 | 0.001899 | 0.001812 |
| has_logical_or_test.test | RUN | 0.334246 | 1.273565 | 3.013981 | 0.001934 | 0.001936 | 0.002046 |
| has_logical_not_test.test | RUN | 0.320772 | 1.243947 | 2.869667 | 0.001773 | 0.001901 | 0.002120 |
| has_logical_and_test.test | RUN | 0.327793 | 1.302556 | 2.991534 | 0.001783 | 0.001858 | 0.001804 |
| has_less_test.test | RUN | 0.330430 | 1.773824 | 3.003620 | 0.002056 | 0.002110 | 0.002057 |
| has_less_equal_test.test | RUN | 0.329250 | 1.789155 | 2.934494 | 0.002016 | 0.001750 | 0.002044 |
| has_left_shift_test.test | RUN | 0.364987 | 1.613798 | 3.627815 | 0.001868 | 0.001984 | 0.001877 |
| has_left_shift_assign_test.test | RUN | 0.328165 | 1.294883 | 3.030608 | 0.001596 | 0.001920 | 0.001769 |
| has_greater_test.test | RUN | 0.336097 | 1.855801 | 3.088911 | 0.002082 | 0.002034 | 0.001949 |
| has_greater_equal_test.test | RUN | 0.333987 | 1.778211 | 2.967645 | 0.001906 | 0.002014 | 0.002124 |
| has_equal_to_test.test | RUN | 0.322324 | 1.765749 | 3.039292 | 0.001739 | 0.001660 | 0.001803 |
| has_divides_test.test | RUN | 0.317908 | 1.250504 | 2.951961 | 0.001834 | 0.001818 | 0.001953 |
| has_divides_assign_test.test | RUN | 0.332664 | 1.292209 | 3.027291 | 0.001843 | 0.002120 | 0.002002 |
| has_dereference_test.test | RUN | 0.321286 | 1.271925 | 2.918199 | 0.001700 | 0.001998 | 0.002122 |
| has_complement_test.test | RUN | 0.325597 | 1.804276 | 2.912626 | 0.001852 | 0.002054 | 0.001818 |
| has_bit_xor_test.test | RUN | 0.329494 | 1.292307 | 3.019298 | 0.001834 | 0.001800 | 0.001999 |
| has_bit_xor_assign_test.test | RUN | 0.332989 | 1.290498 | 3.003668 | 0.001940 | 0.002242 | 0.001741 |
| has_bit_or_test.test | RUN | 0.329083 | 1.241925 | 2.939059 | 0.001977 | 0.002082 | 0.002108 |
| has_bit_or_assign_test.test | RUN | 0.326014 | 1.318696 | 2.950714 | 0.001780 | 0.001862 | 0.001865 |
| has_bit_and_test.test | RUN | 0.320088 | 1.289624 | 2.990851 | 0.001818 | 0.002080 | 0.002002 |
| has_bit_and_assign_test.test | RUN | 0.334161 | 1.309192 | 3.020398 | 0.001867 | 0.002132 | 0.002130 |
| has_binary_classes9_test.test | RUN | 0.357706 | 1.517221 | 3.297613 | 0.001937 | 0.002002 | 0.002122 |
| has_binary_classes8_test.test | RUN | 0.360083 | 1.501201 | 3.337396 | 0.001753 | 0.002060 | 0.002032 |
| has_binary_classes7_test.test | RUN | 0.363009 | 1.506944 | 3.268751 | 0.001792 | 0.002053 | 0.002078 |
| has_binary_classes6_test.test | RUN | 0.353424 | 1.450975 | 3.185710 | 0.001798 | 0.002016 | 0.002062 |
| has_binary_classes5_test.test | RUN | 0.358476 | 1.466401 | 3.284699 | 0.001911 | 0.002083 | 0.002055 |
| has_binary_classes4_test.test | RUN | 0.361615 | 1.547664 | 3.302886 | 0.001979 | 0.002014 | 0.001811 |
| has_binary_classes3_test.test | RUN | 0.360938 | 1.524425 | 3.243725 | 0.001846 | 0.002048 | 0.001966 |
| has_binary_classes2_test.test | RUN | 0.362616 | 1.541485 | 3.274471 | 0.001818 | 0.002106 | 0.002187 |
| has_binary_classes1_test.test | RUN | 0.362890 | 1.491361 | 3.259743 | 0.002004 | 0.001760 | 0.001944 |
| has_binary_classes0_test.test | RUN | 0.364005 | 1.539015 | 3.115131 | 0.001982 | 0.001727 | 0.002128 |
| function_traits_test.test | RUN | 0.159792 | 0.395293 | 0.739301 | 0.001950 | 0.001910 | 0.002052 |
| floating_point_promotion_test.test | RUN | 0.153938 | 0.392087 | 0.679950 | 0.001870 | 0.001924 | 0.002079 |
| extent_test.test | RUN | 0.156136 | 0.401845 | 0.695686 | 0.001697 | 0.001699 | 0.001834 |
| enable_if_test.test | RUN | 0.146983 | 0.326354 | 0.557537 | 0.001610 | 0.002052 | 0.001629 |
| disjunction_test.test | RUN | 0.146066 | 0.359337 | 0.567223 | 0.002008 | 0.001888 | 0.001816 |
| detected_test.test | RUN | 0.144180 | 0.324045 | 0.547383 | 0.002036 | 0.002144 | 0.001802 |
| detected_or_test.test | RUN | 0.146012 | 0.347132 | 0.591308 | 0.001660 | 0.001651 | 0.001448 |
| decay_test.test | RUN | 0.406396 | 1.473488 | 3.556426 | 0.001769 | 0.001978 | 0.001928 |
| cxx14_aliases_test.test | RUN | 0.251668 | 0.526659 | 0.986429 | 0.001792 | 0.001846 | 0.002072 |
| copy_reference_test.test | RUN | 0.149886 | 0.345760 | 0.527457 | 0.001774 | 0.001903 | 0.002138 |
| copy_cv_test.test | RUN | 0.147927 | 0.375442 | 0.610565 | 0.001696 | 0.002006 | 0.001878 |
| copy_cv_ref_test.test | RUN | 0.222379 | 0.660809 | 1.415741 | 0.001777 | 0.001716 | 0.001994 |
| conjunction_test.test | RUN | 0.147399 | 0.346897 | 0.601514 | 0.001900 | 0.001717 | 0.001743 |
| conditional_test.test | RUN | 0.147624 | 0.352341 | 0.578981 | 0.001750 | 0.001849 | 0.002121 |
| common_type_test.test | RUN | 0.206393 | 0.542037 | 1.188844 | 0.001684 | 0.001858 | 0.001747 |
| common_type_sfinae_test.test | RUN | 0.143963 | 0.332778 | 0.495982 | 0.001926 | 0.001941 | 0.002052 |
| common_type_sfinae2_test.test | RUN | 0.147959 | 0.348302 | 0.542551 | 0.001824 | 0.001889 | 0.002164 |
| common_type_6_test.test | RUN | 0.155035 | 0.362972 | 0.579288 | 0.001796 | 0.001764 | 0.001909 |
| common_type_5_test.test | RUN | 0.158448 | 0.354250 | 0.595979 | 0.001787 | 0.001980 | 0.002102 |
| common_type_4_test.test | RUN | 0.160664 | 0.391611 | 0.668541 | 0.001793 | 0.001782 | 0.002092 |
| common_type_3_test.test | RUN | 0.141410 | 0.329362 | 0.526927 | 0.001629 | 0.001959 | 0.001885 |
| common_type_2_test.test | RUN | 0.199973 | 0.551504 | 1.097275 | 0.001834 | 0.002161 | 0.002084 |
| alignment_of_test.test | RUN | 0.156161 | 0.429359 | 0.685028 | 0.001732 | 0.001872 | 0.001776 |
| alignment_of_a2_test.test | RUN | 0.160786 | 0.434238 | 0.690334 | 0.002077 | 0.001547 | 0.001978 |
| aligned_storage_test.test | RUN | 0.161298 | 0.405376 | 0.629835 | 0.001838 | 0.002290 | 0.002354 |
| aligned_storage_empy_test.test | RUN | 0.185063 | 0.476055 | 0.838244 | 0.001726 | 0.002044 | 0.001996 |
| aligned_storage_a2_test.test | RUN | 0.165308 | 0.401945 | 0.601377 | 0.002054 | 0.002264 | 0.002281 |
| add_volatile_test.test | RUN | 0.360339 | 1.250104 | 3.330556 | 0.001903 | 0.002046 | 0.002098 |
| add_rvalue_reference_test.test | RUN | 0.413715 | 1.459820 | 3.816087 | 0.001876 | 0.001908 | 0.002038 |
| add_reference_test.test | RUN | 0.394383 | 1.397763 | 3.813332 | 0.001930 | 0.002056 | 0.002130 |
| add_pointer_test.test | RUN | 0.249789 | 0.780399 | 1.955387 | 0.001744 | 0.001843 | 0.002079 |
| add_lvalue_reference_test.test | RUN | 0.381267 | 1.472041 | 3.839149 | 0.002081 | 0.001493 | 0.002090 |
| add_cv_test.test | RUN | 0.361298 | 1.304761 | 3.569587 | 0.001752 | 0.001808 | 0.002168 |
| add_const_test.test | RUN | 0.373873 | 1.317789 | 3.492851 | 0.001904 | 0.001731 | 0.002090 |
| is_virtual_base_of_fail.test | COMPILE_FAIL | 0.140150 | 0.330329 | 0.531723 | — | — | — |
| is_stateless_fail.test | COMPILE_FAIL | 0.143190 | 0.336755 | 0.550796 | — | — | — |
| is_polymorphic_fail.test | COMPILE_FAIL | 0.134842 | 0.308060 | 0.522849 | — | — | — |
| is_nothrow_move_constructible_fail.test | COMPILE_FAIL | 0.138101 | 0.310299 | 0.527547 | — | — | — |
| is_nothrow_move_assignable_fail.test | COMPILE_FAIL | 0.137264 | 0.313512 | 0.517791 | — | — | — |
| is_list_constructible_fail.test | COMPILE_FAIL | 0.138668 | 0.312835 | 0.489416 | — | — | — |
| is_empty_fail.test | COMPILE_FAIL | 0.141249 | 0.324887 | 0.510097 | — | — | — |
| is_destructible_fail.test | COMPILE_FAIL | 0.135296 | 0.309164 | 0.503224 | — | — | — |
| is_default_constructible_fail.test | COMPILE_FAIL | 0.134871 | 0.317175 | 0.520280 | — | — | — |
| is_copy_constructible_fail.test | COMPILE_FAIL | 0.142157 | 0.314169 | 0.506930 | — | — | — |
| is_copy_assignable_fail.test | COMPILE_FAIL | 0.134978 | 0.327055 | 0.518648 | — | — | — |
| is_convertible_fail.test | COMPILE_FAIL | 0.137795 | 0.313287 | 0.479950 | — | — | — |
| is_convertible2_fail.test | COMPILE_FAIL | 0.136775 | 0.325238 | 0.520059 | — | — | — |
| is_constructible_fail.test | COMPILE_FAIL | 0.143485 | 0.312006 | 0.520707 | — | — | — |
| is_base_of_fail.test | COMPILE_FAIL | 0.133778 | 0.316541 | 0.504693 | — | — | — |
| is_assignable_fail.test | COMPILE_FAIL | 0.136427 | 0.316216 | 0.512291 | — | — | — |
| has_nothrow_destruct_fail.test | COMPILE_FAIL | 0.138137 | 0.286101 | 0.514890 | — | — | — |
| has_nothrow_copy_fail.test | COMPILE_FAIL | 0.141267 | 0.288544 | 0.513874 | — | — | — |
| has_nothrow_cons_fail.test | COMPILE_FAIL | 0.131967 | 0.316625 | 0.502346 | — | — | — |
| has_nothrow_assign_fail.test | COMPILE_FAIL | 0.133113 | 0.317626 | 0.509568 | — | — | — |
| common_type_fail.test | COMPILE_FAIL | 0.138189 | 0.302107 | 0.503989 | — | — | — |
| common_type2_fail.test | COMPILE_FAIL | 0.145241 | 0.307766 | 0.523029 | — | — | — |
| has_nothrow_assign_test_no_intrinsics.test | RUN | 0.217509 | 0.714605 | 1.488152 | 0.001512 | 0.001948 | 0.001966 |
| has_nothrow_constr_test_no_intrinsics.test | RUN | 0.210211 | 0.687693 | 1.392264 | 0.001941 | 0.001920 | 0.001902 |
| has_nothrow_copy_test_no_intrinsics.test | RUN | 0.212834 | 0.694739 | 1.455913 | 0.001712 | 0.001980 | 0.001639 |
| is_nothrow_move_assignable_test_no_intrinsics.test | RUN | 0.219232 | 0.700267 | 1.413915 | 0.001344 | 0.001280 | 0.001426 |
| is_nothrow_move_constructible_test_no_intrinsics.test | RUN | 0.125971 | 0.449461 | 0.877310 | 0.001577 | 0.001464 | 0.001422 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.996× | 0.997×, 0.995× | 1.007× |
| clang | 1.021× | 1.020×, 1.021× | 1.005× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1359 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43674678137).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| add_const_test.test | 10 | 0.001495s | 0.001482s | 0.001472s | byte equality observed |
| add_cv_test.test | 10 | 0.001508s | 0.001460s | 0.001450s | byte equality observed |
| add_lvalue_reference_test.test | 10 | 0.001499s | 0.001471s | 0.001451s | byte equality observed |
| add_pointer_test.test | 10 | 0.001471s | 0.001478s | 0.001454s | byte equality observed |
| add_reference_test.test | 10 | 0.001477s | 0.001477s | 0.001427s | byte equality observed |
| add_rvalue_reference_test.test | 10 | 0.001474s | 0.001454s | 0.001469s | byte equality observed |
| add_volatile_test.test | 10 | 0.001490s | 0.001485s | 0.001456s | byte equality observed |
| aligned_storage_a2_test.test | 10 | 0.001629s | 0.001586s | 0.001617s | byte equality observed |
| aligned_storage_empy_test.test | 10 | 0.001484s | 0.001448s | 0.001473s | byte equality observed |
| aligned_storage_test.test | 10 | 0.001612s | 0.001616s | 0.001593s | byte equality observed |
| alignment_of_a2_test.test | 10 | 0.001484s | 0.001464s | 0.001458s | byte equality observed |
| alignment_of_test.test | 10 | 0.001459s | 0.001426s | 0.001452s | byte equality observed |
| common_type_2_test.test | 10 | 0.001476s | 0.001467s | 0.001460s | byte equality observed |
| common_type_3_test.test | 10 | 0.001490s | 0.001445s | 0.001460s | byte equality observed |
| common_type_4_test.test | 10 | 0.001464s | 0.001474s | 0.001456s | byte equality observed |
| common_type_5_test.test | 10 | 0.001488s | 0.001456s | 0.001472s | byte equality observed |
| common_type_6_test.test | 10 | 0.001472s | 0.001465s | 0.001454s | byte equality observed |
| common_type_sfinae2_test.test | 10 | 0.001462s | 0.001421s | 0.001447s | byte equality observed |
| common_type_sfinae_test.test | 10 | 0.001458s | 0.001460s | 0.001462s | byte equality observed |
| common_type_test.test | 10 | 0.001466s | 0.001454s | 0.001459s | byte equality observed |
| conditional_test.test | 10 | 0.001462s | 0.001485s | 0.001461s | byte equality observed |
| conjunction_test.test | 10 | 0.001466s | 0.001431s | 0.001484s | byte equality observed |
| copy_cv_ref_test.test | 10 | 0.001440s | 0.001471s | 0.001452s | byte equality observed |
| copy_cv_test.test | 10 | 0.001473s | 0.001459s | 0.001455s | byte equality observed |
| copy_reference_test.test | 10 | 0.001437s | 0.001470s | 0.001459s | byte equality observed |
| cxx14_aliases_test.test | 10 | 0.001460s | 0.001468s | 0.001475s | byte equality observed |
| decay_test.test | 10 | 0.001473s | 0.001456s | 0.001466s | byte equality observed |
| detected_or_test.test | 10 | 0.001442s | 0.001475s | 0.001453s | byte equality observed |
| detected_test.test | 10 | 0.001452s | 0.001471s | 0.001439s | byte equality observed |
| disjunction_test.test | 10 | 0.001461s | 0.001455s | 0.001417s | byte equality observed |
| enable_if_test.test | 10 | 0.001431s | 0.001476s | 0.001463s | byte equality observed |
| extent_test.test | 10 | 0.001474s | 0.001452s | 0.001461s | byte equality observed |
| floating_point_promotion_test.test | 10 | 0.001458s | 0.001473s | 0.001459s | byte equality observed |
| function_traits_test.test | 10 | 0.001467s | 0.001444s | 0.001449s | byte equality observed |
| has_binary_classes0_test.test | 10 | 0.001442s | 0.001444s | 0.001451s | byte equality observed |
| has_binary_classes1_test.test | 10 | 0.001450s | 0.001439s | 0.001438s | byte equality observed |
| has_binary_classes2_test.test | 10 | 0.001445s | 0.001452s | 0.001453s | byte equality observed |
| has_binary_classes3_test.test | 10 | 0.001472s | 0.001434s | 0.001430s | byte equality observed |
| has_binary_classes4_test.test | 10 | 0.001453s | 0.001443s | 0.001444s | byte equality observed |
| has_binary_classes5_test.test | 10 | 0.001477s | 0.001428s | 0.001436s | byte equality observed |
| has_binary_classes6_test.test | 10 | 0.001450s | 0.001463s | 0.001459s | byte equality observed |
| has_binary_classes7_test.test | 10 | 0.001457s | 0.001447s | 0.001443s | byte equality observed |
| has_binary_classes8_test.test | 10 | 0.001472s | 0.001442s | 0.001469s | byte equality observed |
| has_binary_classes9_test.test | 10 | 0.001478s | 0.001443s | 0.001435s | byte equality observed |
| has_bit_and_assign_test.test | 10 | 0.001466s | 0.001445s | 0.001450s | byte equality observed |
| has_bit_and_test.test | 10 | 0.001469s | 0.001446s | 0.001446s | byte equality observed |
| has_bit_or_assign_test.test | 10 | 0.001456s | 0.001455s | 0.001458s | byte equality observed |
| has_bit_or_test.test | 10 | 0.001454s | 0.001464s | 0.001444s | byte equality observed |
| has_bit_xor_assign_test.test | 10 | 0.001458s | 0.001458s | 0.001470s | byte equality observed |
| has_bit_xor_test.test | 10 | 0.001448s | 0.001433s | 0.001458s | byte equality observed |
| has_complement_test.test | 10 | 0.001456s | 0.001461s | 0.001468s | byte equality observed |
| has_dereference_test.test | 10 | 0.001454s | 0.001451s | 0.001491s | byte equality observed |
| has_divides_assign_test.test | 10 | 0.001485s | 0.001434s | 0.001439s | byte equality observed |
| has_divides_test.test | 10 | 0.001451s | 0.001452s | 0.001458s | byte equality observed |
| has_equal_to_test.test | 10 | 0.001444s | 0.001461s | 0.001437s | byte equality observed |
| has_greater_equal_test.test | 10 | 0.001474s | 0.001432s | 0.001441s | byte equality observed |
| has_greater_test.test | 10 | 0.001487s | 0.001440s | 0.001438s | byte equality observed |
| has_left_shift_assign_test.test | 10 | 0.001449s | 0.001436s | 0.001444s | byte equality observed |
| has_left_shift_test.test | 10 | 0.001453s | 0.001456s | 0.001481s | byte equality observed |
| has_less_equal_test.test | 10 | 0.001458s | 0.001423s | 0.001452s | byte equality observed |
| has_less_test.test | 10 | 0.001461s | 0.001455s | 0.001476s | byte equality observed |
| has_logical_and_test.test | 10 | 0.001464s | 0.001466s | 0.001464s | byte equality observed |
| has_logical_not_test.test | 10 | 0.001464s | 0.001452s | 0.001428s | byte equality observed |
| has_logical_or_test.test | 10 | 0.001481s | 0.001468s | 0.001428s | byte equality observed |
| has_minus_assign_test.test | 10 | 0.001469s | 0.001463s | 0.001438s | byte equality observed |
| has_minus_test.test | 10 | 0.001459s | 0.001440s | 0.001436s | byte equality observed |
| has_modulus_assign_test.test | 10 | 0.001478s | 0.001456s | 0.001460s | byte equality observed |
| has_modulus_test.test | 10 | 0.001460s | 0.001464s | 0.001448s | byte equality observed |
| has_multiplies_assign_test.test | 10 | 0.001482s | 0.001422s | 0.001431s | byte equality observed |
| has_multiplies_test.test | 10 | 0.001445s | 0.001425s | 0.001450s | byte equality observed |
| has_negate_test.test | 10 | 0.001465s | 0.001458s | 0.001472s | byte equality observed |
| has_not_equal_to_test.test | 10 | 0.001458s | 0.001476s | 0.001449s | byte equality observed |
| has_nothrow_assign_test.test | 10 | 0.001446s | 0.001442s | 0.001469s | byte equality observed |
| has_nothrow_assign_test_no_intrinsics.test | 10 | 0.001494s | 0.001452s | 0.001453s | byte equality observed |
| has_nothrow_constr_test.test | 10 | 0.001458s | 0.001437s | 0.001424s | byte equality observed |
| has_nothrow_constr_test_no_intrinsics.test | 10 | 0.001468s | 0.001465s | 0.001424s | byte equality observed |
| has_nothrow_copy_test.test | 10 | 0.001458s | 0.001456s | 0.001450s | byte equality observed |
| has_nothrow_copy_test_no_intrinsics.test | 10 | 0.001454s | 0.001459s | 0.001456s | byte equality observed |
| has_nothrow_destructor_test.test | 9 | 0.001487s | 0.001425s | 0.001429s | byte equality observed |
| has_operator_new_test.test | 10 | 0.001459s | 0.001440s | 0.001427s | byte equality observed |
| has_plus_assign_test.test | 10 | 0.001475s | 0.001457s | 0.001476s | byte equality observed |
| has_plus_test.test | 9 | 0.001455s | 0.001446s | 0.001455s | byte equality observed |
| has_post_decrement_test.test | 10 | 0.001480s | 0.001455s | 0.001479s | byte equality observed |
| has_post_increment_test.test | 10 | 0.001469s | 0.001457s | 0.001443s | byte equality observed |
| has_postfix_classes0_test.test | 10 | 0.001469s | 0.001447s | 0.001458s | byte equality observed |
| has_postfix_classes1_test.test | 10 | 0.001442s | 0.001467s | 0.001447s | byte equality observed |
| has_postfix_classes2_test.test | 10 | 0.001464s | 0.001455s | 0.001455s | byte equality observed |
| has_postfix_classes3_test.test | 10 | 0.001455s | 0.001458s | 0.001434s | byte equality observed |
| has_pre_decrement_test.test | 10 | 0.001444s | 0.001470s | 0.001464s | byte equality observed |
| has_pre_increment_test.test | 10 | 0.001465s | 0.001463s | 0.001455s | byte equality observed |
| has_prefix_classes0_test.test | 10 | 0.001466s | 0.001450s | 0.001467s | byte equality observed |
| has_prefix_classes1_test.test | 10 | 0.001474s | 0.001487s | 0.001451s | byte equality observed |
| has_prefix_classes2_test.test | 10 | 0.001470s | 0.001462s | 0.001473s | byte equality observed |
| has_prefix_classes3_test.test | 10 | 0.001481s | 0.001464s | 0.001467s | byte equality observed |
| has_right_shift_assign_test.test | 10 | 0.001484s | 0.001479s | 0.001469s | byte equality observed |
| has_right_shift_test.test | 10 | 0.001487s | 0.001458s | 0.001496s | byte equality observed |
| has_trivial_assign_test.test | 10 | 0.001565s | 0.001555s | 0.001547s | byte equality observed |
| has_trivial_constr_test.test | 10 | 0.001529s | 0.001547s | 0.001570s | native test oracle; output varies |
| has_trivial_copy_test.test | 8 | 0.001566s | 0.001582s | 0.001584s | native test oracle; output varies |
| has_trivial_destructor_test.test | 10 | 0.001434s | 0.001494s | 0.001473s | byte equality observed |
| has_trivial_move_assign_test.test | 10 | 0.001473s | 0.001477s | 0.001441s | byte equality observed |
| has_trivial_move_constructor_test.test | 10 | 0.001470s | 0.001481s | 0.001467s | byte equality observed |
| has_unary_minus_test.test | 10 | 0.001470s | 0.001485s | 0.001447s | byte equality observed |
| has_unary_plus_test.test | 10 | 0.001477s | 0.001494s | 0.001458s | byte equality observed |
| has_virtual_destructor_test.test | 10 | 0.001484s | 0.001461s | 0.001458s | byte equality observed |
| integral_constant_test.test | 10 | 0.000654s | 0.000645s | 0.001453s | byte equality observed |
| is_abstract_test.test | 10 | 0.001498s | 0.001464s | 0.001447s | byte equality observed |
| is_arithmetic_test.test | 10 | 0.001479s | 0.001462s | 0.001469s | byte equality observed |
| is_array_test.test | 8 | 0.001481s | 0.001475s | 0.001466s | byte equality observed |
| is_assignable_test.test | 10 | 0.001472s | 0.001461s | 0.001476s | byte equality observed |
| is_base_and_derived_test.test | 10 | 0.001468s | 0.001430s | 0.001435s | byte equality observed |
| is_base_of_test.test | 10 | 0.001474s | 0.001432s | 0.001462s | byte equality observed |
| is_bounded_array_test.test | 10 | 0.001457s | 0.001466s | 0.001472s | byte equality observed |
| is_class_test.test | 10 | 0.001439s | 0.001440s | 0.001459s | byte equality observed |
| is_complete_test.test | 10 | 0.001464s | 0.001464s | 0.001477s | byte equality observed |
| is_complex_test.test | 10 | 0.001458s | 0.001465s | 0.001449s | byte equality observed |
| is_compound_test.test | 10 | 0.001476s | 0.001455s | 0.001462s | byte equality observed |
| is_const_test.test | 10 | 0.001478s | 0.001439s | 0.001435s | byte equality observed |
| is_constructible_test.test | 10 | 0.001447s | 0.001445s | 0.001447s | byte equality observed |
| is_convertible_test.test | 10 | 0.001496s | 0.001468s | 0.001456s | byte equality observed |
| is_copy_assignable_test.test | 10 | 0.001478s | 0.001460s | 0.001459s | byte equality observed |
| is_copy_constructible_test.test | 10 | 0.001462s | 0.001431s | 0.001458s | byte equality observed |
| is_default_constr_test.test | 10 | 0.001481s | 0.001439s | 0.001469s | byte equality observed |
| is_destructible_test.test | 10 | 0.001475s | 0.001448s | 0.001459s | byte equality observed |
| is_detected_exact_test.test | 10 | 0.001437s | 0.001488s | 0.001459s | byte equality observed |
| is_detected_test.test | 10 | 0.001458s | 0.001478s | 0.001444s | byte equality observed |
| is_empty_test.test | 10 | 0.001472s | 0.001437s | 0.001486s | byte equality observed |
| is_enum_test.test | 10 | 0.001466s | 0.001466s | 0.001465s | byte equality observed |
| is_final_test.test | 10 | 0.001484s | 0.001468s | 0.001450s | byte equality observed |
| is_float_test.test | 10 | 0.001485s | 0.001459s | 0.001460s | byte equality observed |
| is_floating_point_test.test | 10 | 0.001447s | 0.001463s | 0.001449s | byte equality observed |
| is_function_test.test | 10 | 0.001463s | 0.001469s | 0.001473s | byte equality observed |
| is_fundamental_test.test | 10 | 0.001460s | 0.001440s | 0.001454s | byte equality observed |
| is_integral_test.test | 10 | 0.001454s | 0.001450s | 0.001457s | byte equality observed |
| is_list_constructible_test.test | 10 | 0.001474s | 0.001447s | 0.001465s | byte equality observed |
| is_lvalue_reference_test.test | 10 | 0.001485s | 0.001446s | 0.001478s | byte equality observed |
| is_member_func_test.test | 10 | 0.001466s | 0.001432s | 0.001483s | byte equality observed |
| is_member_obj_test.test | 10 | 0.001460s | 0.001432s | 0.001456s | byte equality observed |
| is_member_pointer_test.test | 10 | 0.001466s | 0.001455s | 0.001456s | byte equality observed |
| is_noncopyable_test.test | 10 | 0.001476s | 0.001467s | 0.001470s | byte equality observed |
| is_nothrow_move_assignable_test.test | 10 | 0.001477s | 0.001466s | 0.001486s | byte equality observed |
| is_nothrow_move_assignable_test_no_intrinsics.test | 10 | 0.001467s | 0.001438s | 0.001445s | byte equality observed |
| is_nothrow_move_constructible_test.test | 10 | 0.001441s | 0.001493s | 0.001442s | byte equality observed |
| is_nothrow_move_constructible_test_no_intrinsics.test | 10 | 0.001457s | 0.001466s | 0.001442s | byte equality observed |
| is_nothrow_swappable_test.test | 10 | 0.001465s | 0.001470s | 0.001455s | byte equality observed |
| is_object_test.test | 10 | 0.001482s | 0.001469s | 0.001444s | byte equality observed |
| is_pod_test.test | 10 | 0.001479s | 0.001462s | 0.001494s | byte equality observed |
| is_pointer_test.test | 10 | 0.001443s | 0.001425s | 0.001476s | byte equality observed |
| is_polymorphic_test.test | 10 | 0.001460s | 0.001482s | 0.001479s | byte equality observed |
| is_reference_test.test | 10 | 0.001462s | 0.001488s | 0.001465s | byte equality observed |
| is_rvalue_reference_test.test | 10 | 0.001452s | 0.001447s | 0.001451s | byte equality observed |
| is_same_test.test | 10 | 0.001472s | 0.001466s | 0.001468s | byte equality observed |
| is_scalar_test.test | 10 | 0.001458s | 0.001490s | 0.001452s | byte equality observed |
| is_scoped_enum_test.test | 10 | 0.001464s | 0.001458s | 0.001440s | byte equality observed |
| is_signed_test.test | 10 | 0.001462s | 0.001477s | 0.001476s | byte equality observed |
| is_stateless_test.test | 10 | 0.001467s | 0.001462s | 0.001487s | byte equality observed |
| is_swappable_test.test | 10 | 0.001463s | 0.001459s | 0.001469s | byte equality observed |
| is_trivially_copyable_test.test | 10 | 0.001501s | 0.001486s | 0.001487s | byte equality observed |
| is_unbounded_array_test.test | 10 | 0.001457s | 0.001464s | 0.001496s | byte equality observed |
| is_union_test.test | 10 | 0.001446s | 0.001494s | 0.001467s | byte equality observed |
| is_unscoped_enum_test.test | 10 | 0.001468s | 0.001455s | 0.001485s | byte equality observed |
| is_unsigned_test.test | 10 | 0.001440s | 0.001463s | 0.001475s | byte equality observed |
| is_virtual_base_of_test.test | 10 | 0.001463s | 0.001458s | 0.001472s | byte equality observed |
| is_void_test.test | 10 | 0.001454s | 0.001440s | 0.001480s | byte equality observed |
| is_volatile_test.test | 10 | 0.001463s | 0.001422s | 0.001485s | byte equality observed |
| make_signed_test.test | 10 | 0.001464s | 0.001489s | 0.001454s | byte equality observed |
| make_unsigned_test.test | 10 | 0.001457s | 0.001479s | 0.001463s | byte equality observed |
| make_void_test.test | 10 | 0.001468s | 0.001502s | 0.001474s | byte equality observed |
| mpl_interop_test1.test | 10 | 0.000653s | 0.000636s | 0.001453s | byte equality observed |
| mpl_interop_test2.test | 10 | 0.000639s | 0.000634s | 0.001445s | byte equality observed |
| mpl_interop_test3.test | 10 | 0.000658s | 0.000651s | 0.001449s | byte equality observed |
| negation_test.test | 10 | 0.001509s | 0.001497s | 0.001464s | byte equality observed |
| promote_basic_test.test | 10 | 0.000654s | 0.000654s | 0.001468s | byte equality observed |
| promote_enum_msvc_bug_test.test | 10 | 0.000659s | 0.000650s | 0.001475s | byte equality observed |
| promote_enum_test.test | 10 | 0.000652s | 0.000656s | 0.001442s | byte equality observed |
| promote_mpl_test.test | 10 | 0.000658s | 0.000662s | 0.001467s | byte equality observed |
| rank_test.test | 10 | 0.001470s | 0.001498s | 0.001451s | byte equality observed |
| remove_all_extents_test.test | 9 | 0.001498s | 0.001477s | 0.001436s | byte equality observed |
| remove_bounds_test.test | 10 | 0.001470s | 0.001478s | 0.001455s | byte equality observed |
| remove_const_test.test | 10 | 0.001459s | 0.001469s | 0.001456s | byte equality observed |
| remove_cv_ref_test.test | 10 | 0.001456s | 0.001468s | 0.001465s | byte equality observed |
| remove_cv_test.test | 8 | 0.001451s | 0.001491s | 0.001481s | byte equality observed |
| remove_extent_test.test | 10 | 0.001471s | 0.001490s | 0.001449s | byte equality observed |
| remove_pointer_test.test | 10 | 0.001462s | 0.001425s | 0.001480s | byte equality observed |
| remove_reference_test.test | 10 | 0.001446s | 0.001445s | 0.001477s | byte equality observed |
| remove_volatile_test.test | 10 | 0.001436s | 0.001477s | 0.001455s | byte equality observed |
| tricky_abstract_type_test.test | 10 | 0.001444s | 0.001427s | 0.001488s | byte equality observed |
| tricky_add_pointer_test.test | 10 | 0.001473s | 0.001462s | 0.001450s | byte equality observed |
| tricky_function_type_test.test | 10 | 0.001455s | 0.001460s | 0.001482s | byte equality observed |
| tricky_incomplete_type_test.test | 10 | 0.001456s | 0.001477s | 0.001433s | byte equality observed |
| tricky_is_enum_test.test | 10 | 0.001473s | 0.001451s | 0.001417s | byte equality observed |
| tricky_partial_spec_test.test | 10 | 0.001441s | 0.001466s | 0.001441s | byte equality observed |
| tricky_rvalue_test.test | 10 | 0.001462s | 0.001420s | 0.001444s | byte equality observed |
| type_identity_test.test | 10 | 0.001468s | 0.001450s | 0.001453s | byte equality observed |
| type_traits_test.test | 10 | 0.000634s | 0.000655s | 0.001473s | byte equality observed |
| type_with_alignment_test.test | 10 | 0.001597s | 0.001635s | 0.001629s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43674678137).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
