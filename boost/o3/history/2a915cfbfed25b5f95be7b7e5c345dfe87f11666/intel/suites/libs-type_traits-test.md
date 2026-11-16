# libs/type_traits/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| type_with_alignment_test.test | RUN | 0.079590 | 0.219831 | 0.287106 | 0.001066 | 0.001015 | 0.000977 |
| type_traits_test.test | RUN | 0.111009 | 0.225032 | 0.282585 | 0.000437 | 0.000404 | 0.000834 |
| type_identity_test.test | RUN | 0.205939 | 0.736197 | 1.351183 | 0.000920 | 0.000974 | 0.000927 |
| tricky_rvalue_test.test | RUN | 0.072379 | 0.180776 | 0.215801 | 0.000883 | 0.001003 | 0.000971 |
| tricky_partial_spec_test.test | RUN | 0.089462 | 0.242967 | 0.338645 | 0.000911 | 0.001062 | 0.000839 |
| tricky_is_enum_test.test | RUN | 0.069411 | 0.166008 | 0.206503 | 0.000932 | 0.001015 | 0.000876 |
| tricky_incomplete_type_test.test | RUN | 0.112935 | 0.260149 | 0.341514 | 0.001006 | 0.001060 | 0.000917 |
| tricky_function_type_test.test | RUN | 0.094774 | 0.265484 | 0.375255 | 0.000904 | 0.000989 | 0.000848 |
| tricky_add_pointer_test.test | RUN | 0.133513 | 0.448215 | 0.789412 | 0.000974 | 0.001023 | 0.000817 |
| tricky_abstract_type_test.test | RUN | 0.072140 | 0.169207 | 0.213960 | 0.000923 | 0.001025 | 0.000887 |
| remove_volatile_test.test | RUN | 0.178567 | 0.640002 | 1.164560 | 0.000923 | 0.000943 | 0.000899 |
| remove_reference_test.test | RUN | 0.190458 | 0.684762 | 1.249783 | 0.000913 | 0.001115 | 0.000862 |
| remove_pointer_test.test | RUN | 0.197408 | 0.718956 | 1.296655 | 0.000896 | 0.000974 | 0.000882 |
| remove_extent_test.test | RUN | 0.187429 | 0.679379 | 1.230963 | 0.000962 | 0.000970 | 0.000896 |
| remove_cv_test.test | RUN | 0.185683 | 0.675851 | 1.238243 | 0.000915 | 0.001019 | 0.000876 |
| remove_cv_ref_test.test | RUN | 0.387690 | 1.642954 | 3.045546 | 0.000989 | 0.000944 | 0.000890 |
| remove_const_test.test | RUN | 0.179122 | 0.636579 | 1.172891 | 0.000959 | 0.000995 | 0.000932 |
| remove_bounds_test.test | RUN | 0.187346 | 0.690191 | 1.254719 | 0.000907 | 0.000995 | 0.000882 |
| remove_all_extents_test.test | RUN | 0.188927 | 0.679211 | 1.247457 | 0.000952 | 0.000960 | 0.000913 |
| rank_test.test | RUN | 0.071146 | 0.182731 | 0.227974 | 0.000948 | 0.000987 | 0.000881 |
| promote_mpl_test.test | RUN | 0.065286 | 0.161191 | 0.160974 | 0.000398 | 0.000454 | 0.000882 |
| promote_enum_test.test | RUN | 0.013070 | 0.037990 | 0.038398 | 0.000408 | 0.000444 | 0.000906 |
| promote_enum_msvc_bug_test.test | RUN | 0.011694 | 0.033656 | 0.032973 | 0.000448 | 0.000431 | 0.000911 |
| promote_basic_test.test | RUN | 0.015152 | 0.042722 | 0.042077 | 0.000415 | 0.000431 | 0.000880 |
| negation_test.test | RUN | 0.069954 | 0.165956 | 0.201111 | 0.000919 | 0.000977 | 0.000795 |
| mpl_interop_test3.test | RUN | 0.061585 | 0.151822 | 0.149040 | 0.000444 | 0.000418 | 0.000814 |
| mpl_interop_test2.test | RUN | 0.020497 | 0.041054 | 0.040925 | 0.000416 | 0.000389 | 0.000885 |
| mpl_interop_test1.test | RUN | 0.010274 | 0.029888 | 0.029340 | 0.000416 | 0.000408 | 0.000892 |
| make_void_test.test | RUN | 0.072558 | 0.173798 | 0.225388 | 0.000922 | 0.001000 | 0.000922 |
| make_unsigned_test.test | RUN | 0.084534 | 0.228069 | 0.297078 | 0.000891 | 0.000946 | 0.000796 |
| make_signed_test.test | RUN | 0.084235 | 0.226016 | 0.297186 | 0.000907 | 0.001000 | 0.000878 |
| is_volatile_test.test | RUN | 0.073717 | 0.193128 | 0.252490 | 0.001031 | 0.000952 | 0.000872 |
| is_void_test.test | RUN | 0.072683 | 0.182431 | 0.235241 | 0.000970 | 0.000928 | 0.000892 |
| is_virtual_base_of_test.test | RUN | 0.083302 | 0.229191 | 0.335639 | 0.000942 | 0.001012 | 0.000945 |
| is_unsigned_test.test | RUN | 0.074672 | 0.191375 | 0.242828 | 0.000895 | 0.001009 | 0.000884 |
| is_unscoped_enum_test.test | RUN | 0.072020 | 0.171707 | 0.216552 | 0.000916 | 0.000895 | 0.000895 |
| is_union_test.test | RUN | 0.078695 | 0.210532 | 0.285493 | 0.000905 | 0.000950 | 0.000845 |
| is_unbounded_array_test.test | RUN | 0.072239 | 0.180309 | 0.227641 | 0.000870 | 0.000897 | 0.000919 |
| is_trivially_copyable_test.test | RUN | 0.115947 | 0.366095 | 0.568088 | 0.000942 | 0.000943 | 0.000912 |
| is_swappable_test.test | RUN | 0.094581 | 0.281986 | 0.423980 | 0.000956 | 0.001071 | 0.000879 |
| is_stateless_test.test | RUN | 0.106358 | 0.318118 | 0.485436 | 0.000923 | 0.001002 | 0.000869 |
| is_signed_test.test | RUN | 0.074256 | 0.188023 | 0.239393 | 0.000909 | 0.001027 | 0.000919 |
| is_scoped_enum_test.test | RUN | 0.072313 | 0.174169 | 0.209697 | 0.000883 | 0.000894 | 0.000881 |
| is_scalar_test.test | RUN | 0.093056 | 0.291679 | 0.430766 | 0.000938 | 0.000976 | 0.000916 |
| is_same_test.test | RUN | 0.074091 | 0.180654 | 0.231025 | 0.000908 | 0.001002 | 0.000905 |
| is_rvalue_reference_test.test | RUN | 0.076079 | 0.198401 | 0.263854 | 0.000891 | 0.000951 | 0.000900 |
| is_reference_test.test | RUN | 0.075997 | 0.205334 | 0.263560 | 0.000895 | 0.000934 | 0.000874 |
| is_polymorphic_test.test | RUN | 0.078616 | 0.212587 | 0.283564 | 0.000943 | 0.000922 | 0.000876 |
| is_pointer_test.test | RUN | 0.077728 | 0.207853 | 0.276813 | 0.000945 | 0.000932 | 0.000859 |
| is_pod_test.test | RUN | 0.099491 | 0.324260 | 0.489831 | 0.000948 | 0.000977 | 0.000877 |
| is_object_test.test | RUN | 0.070261 | 0.174238 | 0.217683 | 0.000893 | 0.000951 | 0.000818 |
| is_nothrow_swappable_test.test | RUN | 0.098835 | 0.305459 | 0.476235 | 0.000964 | 0.001026 | 0.000843 |
| is_nothrow_move_constructible_test.test | RUN | 0.098619 | 0.315558 | 0.470997 | 0.000949 | 0.001019 | 0.000915 |
| is_nothrow_move_assignable_test.test | RUN | 0.099183 | 0.317716 | 0.474268 | 0.000941 | 0.000952 | 0.000890 |
| is_noncopyable_test.test | RUN | 0.072807 | 0.182085 | 0.223971 | 0.000917 | 0.000959 | 0.000923 |
| is_member_pointer_test.test | RUN | 0.073025 | 0.182329 | 0.228123 | 0.000901 | 0.000969 | 0.000906 |
| is_member_obj_test.test | RUN | 0.073592 | 0.182511 | 0.233760 | 0.000917 | 0.001021 | 0.000876 |
| is_member_func_test.test | RUN | 0.074719 | 0.195448 | 0.259007 | 0.000881 | 0.000966 | 0.000874 |
| is_lvalue_reference_test.test | RUN | 0.076932 | 0.201763 | 0.265645 | 0.000908 | 0.000994 | 0.000922 |
| is_list_constructible_test.test | RUN | 0.090597 | 0.237104 | 0.318972 | 0.000837 | 0.000951 | 0.000878 |
| is_integral_test.test | RUN | 0.091105 | 0.275505 | 0.395086 | 0.000923 | 0.000962 | 0.000883 |
| is_fundamental_test.test | RUN | 0.091103 | 0.288003 | 0.417371 | 0.001080 | 0.000958 | 0.000890 |
| is_function_test.test | RUN | 0.075599 | 0.191094 | 0.245941 | 0.000945 | 0.001021 | 0.000880 |
| is_floating_point_test.test | RUN | 0.076113 | 0.205515 | 0.267562 | 0.000909 | 0.000907 | 0.000861 |
| is_float_test.test | RUN | 0.076993 | 0.208070 | 0.270117 | 0.000932 | 0.000978 | 0.000871 |
| is_final_test.test | RUN | 0.076520 | 0.206206 | 0.275914 | 0.000924 | 0.000913 | 0.000863 |
| is_enum_test.test | RUN | 0.071517 | 0.177484 | 0.219855 | 0.000939 | 0.000982 | 0.000869 |
| is_empty_test.test | RUN | 0.076030 | 0.190483 | 0.249981 | 0.000853 | 0.000975 | 0.000963 |
| is_detected_test.test | RUN | 0.069998 | 0.167674 | 0.209779 | 0.000923 | 0.000932 | 0.000865 |
| is_detected_exact_test.test | RUN | 0.070391 | 0.165266 | 0.201795 | 0.000911 | 0.001045 | 0.000992 |
| is_destructible_test.test | RUN | 0.098097 | 0.318268 | 0.483309 | 0.000961 | 0.001075 | 0.000846 |
| is_default_constr_test.test | RUN | 0.099604 | 0.323452 | 0.481067 | 0.000937 | 0.000930 | 0.000820 |
| is_copy_constructible_test.test | RUN | 0.102733 | 0.341915 | 0.512698 | 0.000913 | 0.001019 | 0.000918 |
| is_copy_assignable_test.test | RUN | 0.103223 | 0.332898 | 0.508878 | 0.000901 | 0.000941 | 0.000834 |
| is_convertible_test.test | RUN | 0.098836 | 0.303666 | 0.414785 | 0.000901 | 0.000934 | 0.000996 |
| is_constructible_test.test | RUN | 0.081083 | 0.221621 | 0.302516 | 0.000865 | 0.000996 | 0.000876 |
| is_const_test.test | RUN | 0.074433 | 0.194539 | 0.249688 | 0.000865 | 0.000942 | 0.000916 |
| is_compound_test.test | RUN | 0.070763 | 0.173106 | 0.207569 | 0.000894 | 0.000941 | 0.000900 |
| is_complex_test.test | RUN | 0.094212 | 0.224552 | 0.284178 | 0.000905 | 0.000913 | 0.000859 |
| is_complete_test.test | RUN | 0.081697 | 0.228453 | 0.317335 | 0.000901 | 0.000876 | 0.000899 |
| is_class_test.test | RUN | 0.076916 | 0.202589 | 0.267248 | 0.000860 | 0.001009 | 0.000824 |
| is_bounded_array_test.test | RUN | 0.071919 | 0.188023 | 0.240757 | 0.000903 | 0.000947 | 0.000892 |
| is_base_of_test.test | RUN | 0.076354 | 0.200857 | 0.262438 | 0.000929 | 0.001000 | 0.000891 |
| is_base_and_derived_test.test | RUN | 0.075779 | 0.195848 | 0.255867 | 0.000936 | 0.000991 | 0.000912 |
| is_assignable_test.test | RUN | 0.090778 | 0.272712 | 0.396264 | 0.000905 | 0.000943 | 0.000922 |
| is_array_test.test | RUN | 0.074446 | 0.193839 | 0.253231 | 0.000911 | 0.000972 | 0.000915 |
| is_arithmetic_test.test | RUN | 0.090273 | 0.279121 | 0.398758 | 0.000913 | 0.001028 | 0.000940 |
| is_abstract_test.test | RUN | 0.162016 | 0.712448 | 1.419519 | 0.000892 | 0.000957 | 0.000949 |
| integral_constant_test.test | RUN | 0.010322 | 0.029568 | 0.031995 | 0.000426 | 0.000436 | 0.000950 |
| has_virtual_destructor_test.test | RUN | 0.079071 | 0.216020 | 0.303116 | 0.000866 | 0.001077 | 0.000861 |
| has_unary_plus_test.test | RUN | 0.150830 | 0.759360 | 1.003793 | 0.000925 | 0.001029 | 0.000941 |
| has_unary_minus_test.test | RUN | 0.147400 | 0.755753 | 1.014892 | 0.000935 | 0.000863 | 0.000907 |
| has_trivial_move_constructor_test.test | RUN | 0.100671 | 0.323060 | 0.487072 | 0.000997 | 0.001015 | 0.000984 |
| has_trivial_move_assign_test.test | RUN | 0.100781 | 0.320459 | 0.477585 | 0.001063 | 0.001148 | 0.000918 |
| has_trivial_destructor_test.test | RUN | 0.099780 | 0.323320 | 0.485316 | 0.000942 | 0.001037 | 0.000817 |
| has_trivial_copy_test.test | RUN | 0.104508 | 0.343555 | 0.510279 | 0.000926 | 0.000952 | 0.000874 |
| has_trivial_constr_test.test | RUN | 0.105037 | 0.359654 | 0.524259 | 0.000965 | 0.000955 | 0.000976 |
| has_trivial_assign_test.test | RUN | 0.103007 | 0.340193 | 0.501534 | 0.001023 | 0.000997 | 0.000930 |
| has_right_shift_test.test | RUN | 0.156328 | 0.610200 | 1.088990 | 0.000940 | 0.000950 | 0.000885 |
| has_right_shift_assign_test.test | RUN | 0.148839 | 0.587062 | 1.001948 | 0.000932 | 0.001014 | 0.000818 |
| has_prefix_classes3_test.test | RUN | 0.110182 | 0.351632 | 0.554337 | 0.000903 | 0.001020 | 0.000825 |
| has_prefix_classes2_test.test | RUN | 0.109852 | 0.348419 | 0.513719 | 0.000851 | 0.000995 | 0.000948 |
| has_prefix_classes1_test.test | RUN | 0.110259 | 0.355981 | 0.516687 | 0.000943 | 0.000899 | 0.000909 |
| has_prefix_classes0_test.test | RUN | 0.110251 | 0.357694 | 0.528147 | 0.000891 | 0.000994 | 0.000963 |
| has_pre_increment_test.test | RUN | 0.148312 | 0.755202 | 1.003718 | 0.000980 | 0.001000 | 0.000949 |
| has_pre_decrement_test.test | RUN | 0.149355 | 0.766191 | 1.003884 | 0.000929 | 0.001028 | 0.000859 |
| has_postfix_classes3_test.test | RUN | 0.109996 | 0.353288 | 0.529350 | 0.000902 | 0.001038 | 0.000887 |
| has_postfix_classes2_test.test | RUN | 0.109942 | 0.353942 | 0.518774 | 0.000992 | 0.000938 | 0.000847 |
| has_postfix_classes1_test.test | RUN | 0.109348 | 0.349416 | 0.529416 | 0.000975 | 0.001019 | 0.000934 |
| has_postfix_classes0_test.test | RUN | 0.109960 | 0.351481 | 0.528447 | 0.000950 | 0.000949 | 0.000845 |
| has_post_increment_test.test | RUN | 0.148497 | 0.768887 | 1.008954 | 0.000961 | 0.001005 | 0.000862 |
| has_post_decrement_test.test | RUN | 0.149126 | 0.770068 | 1.025170 | 0.000870 | 0.001067 | 0.000942 |
| has_plus_test.test | RUN | 0.149049 | 0.587010 | 1.010059 | 0.000960 | 0.001006 | 0.000914 |
| has_plus_assign_test.test | RUN | 0.157777 | 0.596964 | 1.061751 | 0.000928 | 0.001123 | 0.000952 |
| has_operator_new_test.test | RUN | 0.100818 | 0.308192 | 0.472192 | 0.000898 | 0.001004 | 0.000949 |
| has_nothrow_destructor_test.test | RUN | 0.104540 | 0.338822 | 0.518067 | 0.000948 | 0.001043 | 0.000945 |
| has_nothrow_copy_test.test | RUN | 0.102040 | 0.327739 | 0.515162 | 0.000858 | 0.001029 | 0.000898 |
| has_nothrow_constr_test.test | RUN | 0.099599 | 0.326336 | 0.483312 | 0.000926 | 0.000982 | 0.000951 |
| has_nothrow_assign_test.test | RUN | 0.099496 | 0.315690 | 0.477018 | 0.000900 | 0.001015 | 0.000865 |
| has_not_equal_to_test.test | RUN | 0.151430 | 0.748749 | 1.015384 | 0.000923 | 0.000984 | 0.000947 |
| has_negate_test.test | RUN | 0.144257 | 0.560501 | 0.954549 | 0.001005 | 0.000921 | 0.000842 |
| has_multiplies_test.test | RUN | 0.149232 | 0.570571 | 1.011825 | 0.001018 | 0.001061 | 0.000903 |
| has_multiplies_assign_test.test | RUN | 0.150534 | 0.580883 | 1.007609 | 0.000931 | 0.001032 | 0.000902 |
| has_modulus_test.test | RUN | 0.147749 | 0.571937 | 1.029105 | 0.000971 | 0.000946 | 0.000893 |
| has_modulus_assign_test.test | RUN | 0.147864 | 0.577446 | 1.010566 | 0.000970 | 0.001058 | 0.000957 |
| has_minus_test.test | RUN | 0.153268 | 0.587697 | 1.023183 | 0.000941 | 0.001067 | 0.000831 |
| has_minus_assign_test.test | RUN | 0.155967 | 0.584299 | 1.027644 | 0.000893 | 0.001034 | 0.000916 |
| has_logical_or_test.test | RUN | 0.151679 | 0.604111 | 1.024223 | 0.000911 | 0.001170 | 0.000866 |
| has_logical_not_test.test | RUN | 0.144891 | 0.572418 | 0.972252 | 0.000937 | 0.001050 | 0.000933 |
| has_logical_and_test.test | RUN | 0.149200 | 0.587910 | 1.028583 | 0.000946 | 0.001020 | 0.000819 |
| has_less_test.test | RUN | 0.152634 | 0.753851 | 1.025154 | 0.000878 | 0.000924 | 0.000964 |
| has_less_equal_test.test | RUN | 0.150738 | 0.748392 | 1.019163 | 0.000905 | 0.001046 | 0.000897 |
| has_left_shift_test.test | RUN | 0.167392 | 0.718327 | 1.296613 | 0.000934 | 0.001025 | 0.000950 |
| has_left_shift_assign_test.test | RUN | 0.151532 | 0.581981 | 1.012131 | 0.000855 | 0.000999 | 0.000829 |
| has_greater_test.test | RUN | 0.151214 | 0.750727 | 1.049972 | 0.000843 | 0.000991 | 0.000994 |
| has_greater_equal_test.test | RUN | 0.151598 | 0.754372 | 1.036290 | 0.000944 | 0.000974 | 0.000877 |
| has_equal_to_test.test | RUN | 0.150365 | 0.764658 | 1.033073 | 0.000957 | 0.001199 | 0.000989 |
| has_divides_test.test | RUN | 0.148879 | 0.586277 | 1.020539 | 0.001009 | 0.001043 | 0.000930 |
| has_divides_assign_test.test | RUN | 0.151073 | 0.585618 | 1.010609 | 0.000899 | 0.001042 | 0.000861 |
| has_dereference_test.test | RUN | 0.144300 | 0.561121 | 0.968276 | 0.000958 | 0.001004 | 0.000929 |
| has_complement_test.test | RUN | 0.146241 | 0.755794 | 1.010383 | 0.001074 | 0.001027 | 0.000956 |
| has_bit_xor_test.test | RUN | 0.151924 | 0.573695 | 1.011052 | 0.000940 | 0.001047 | 0.000899 |
| has_bit_xor_assign_test.test | RUN | 0.149942 | 0.573572 | 1.009577 | 0.000907 | 0.001011 | 0.000946 |
| has_bit_or_test.test | RUN | 0.148800 | 0.572643 | 1.006718 | 0.000924 | 0.000913 | 0.000946 |
| has_bit_or_assign_test.test | RUN | 0.150758 | 0.594383 | 1.010563 | 0.000954 | 0.001065 | 0.000978 |
| has_bit_and_test.test | RUN | 0.149889 | 0.575809 | 1.018645 | 0.000940 | 0.001017 | 0.000851 |
| has_bit_and_assign_test.test | RUN | 0.151411 | 0.584277 | 1.004589 | 0.000960 | 0.001039 | 0.000937 |
| has_binary_classes9_test.test | RUN | 0.162371 | 0.665485 | 1.151080 | 0.000879 | 0.000971 | 0.000919 |
| has_binary_classes8_test.test | RUN | 0.164252 | 0.677166 | 1.153739 | 0.000924 | 0.001040 | 0.000897 |
| has_binary_classes7_test.test | RUN | 0.163038 | 0.687627 | 1.179030 | 0.000854 | 0.001004 | 0.000857 |
| has_binary_classes6_test.test | RUN | 0.160308 | 0.661401 | 1.165295 | 0.000863 | 0.000974 | 0.000907 |
| has_binary_classes5_test.test | RUN | 0.161143 | 0.666040 | 1.175036 | 0.000931 | 0.001004 | 0.000852 |
| has_binary_classes4_test.test | RUN | 0.162334 | 0.672832 | 1.197148 | 0.000918 | 0.001022 | 0.000909 |
| has_binary_classes3_test.test | RUN | 0.161969 | 0.674284 | 1.148544 | 0.000911 | 0.000961 | 0.000851 |
| has_binary_classes2_test.test | RUN | 0.163110 | 0.677343 | 1.167884 | 0.000920 | 0.000930 | 0.000888 |
| has_binary_classes1_test.test | RUN | 0.161534 | 0.672704 | 1.155247 | 0.000909 | 0.001045 | 0.000882 |
| has_binary_classes0_test.test | RUN | 0.162298 | 0.679056 | 1.145881 | 0.000911 | 0.001023 | 0.000862 |
| function_traits_test.test | RUN | 0.075325 | 0.189951 | 0.263288 | 0.000993 | 0.001011 | 0.000956 |
| floating_point_promotion_test.test | RUN | 0.073557 | 0.191591 | 0.234954 | 0.000987 | 0.001023 | 0.000908 |
| extent_test.test | RUN | 0.074141 | 0.194825 | 0.267275 | 0.000965 | 0.000901 | 0.000932 |
| enable_if_test.test | RUN | 0.070357 | 0.166434 | 0.198851 | 0.000872 | 0.001021 | 0.000856 |
| disjunction_test.test | RUN | 0.070939 | 0.175642 | 0.211733 | 0.000867 | 0.000997 | 0.000934 |
| detected_test.test | RUN | 0.070140 | 0.165730 | 0.204986 | 0.000851 | 0.001159 | 0.000923 |
| detected_or_test.test | RUN | 0.071355 | 0.175122 | 0.215338 | 0.000960 | 0.001017 | 0.000923 |
| decay_test.test | RUN | 0.182183 | 0.632702 | 1.107054 | 0.000935 | 0.001045 | 0.000843 |
| cxx14_aliases_test.test | RUN | 0.113532 | 0.251969 | 0.326459 | 0.000886 | 0.000974 | 0.000822 |
| copy_reference_test.test | RUN | 0.072482 | 0.167746 | 0.208370 | 0.000929 | 0.001025 | 0.000849 |
| copy_cv_test.test | RUN | 0.073285 | 0.176743 | 0.234762 | 0.000894 | 0.000983 | 0.000891 |
| copy_cv_ref_test.test | RUN | 0.102630 | 0.286812 | 0.463056 | 0.000959 | 0.000970 | 0.000843 |
| conjunction_test.test | RUN | 0.072124 | 0.173765 | 0.213178 | 0.000913 | 0.001029 | 0.000819 |
| conditional_test.test | RUN | 0.069832 | 0.168047 | 0.206785 | 0.000915 | 0.000957 | 0.000838 |
| common_type_test.test | RUN | 0.093822 | 0.252799 | 0.391184 | 0.000938 | 0.000902 | 0.001040 |
| common_type_sfinae_test.test | RUN | 0.070674 | 0.161178 | 0.198843 | 0.000925 | 0.000983 | 0.000891 |
| common_type_sfinae2_test.test | RUN | 0.071994 | 0.170088 | 0.208830 | 0.000870 | 0.000991 | 0.000898 |
| common_type_6_test.test | RUN | 0.073274 | 0.172472 | 0.218837 | 0.000956 | 0.000947 | 0.000922 |
| common_type_5_test.test | RUN | 0.073302 | 0.170888 | 0.218380 | 0.000894 | 0.000953 | 0.000890 |
| common_type_4_test.test | RUN | 0.079012 | 0.189094 | 0.252248 | 0.000904 | 0.001005 | 0.000900 |
| common_type_3_test.test | RUN | 0.069257 | 0.161343 | 0.195555 | 0.000897 | 0.001012 | 0.000920 |
| common_type_2_test.test | RUN | 0.092893 | 0.250711 | 0.378574 | 0.000876 | 0.000971 | 0.000848 |
| alignment_of_test.test | RUN | 0.075937 | 0.203767 | 0.256784 | 0.000897 | 0.000949 | 0.000874 |
| alignment_of_a2_test.test | RUN | 0.075905 | 0.203923 | 0.257278 | 0.000913 | 0.000964 | 0.000894 |
| aligned_storage_test.test | RUN | 0.078398 | 0.203699 | 0.241796 | 0.001020 | 0.001056 | 0.000959 |
| aligned_storage_empy_test.test | RUN | 0.088644 | 0.223031 | 0.316499 | 0.000896 | 0.000954 | 0.000860 |
| aligned_storage_a2_test.test | RUN | 0.077995 | 0.203889 | 0.242278 | 0.000989 | 0.001008 | 0.000947 |
| add_volatile_test.test | RUN | 0.162442 | 0.549946 | 0.998788 | 0.000964 | 0.001027 | 0.000945 |
| add_rvalue_reference_test.test | RUN | 0.181762 | 0.632802 | 1.156650 | 0.000909 | 0.000992 | 0.000862 |
| add_reference_test.test | RUN | 0.176067 | 0.608691 | 1.137344 | 0.000922 | 0.000953 | 0.000855 |
| add_pointer_test.test | RUN | 0.115414 | 0.354560 | 0.594474 | 0.000959 | 0.001022 | 0.000906 |
| add_lvalue_reference_test.test | RUN | 0.178345 | 0.604588 | 1.119964 | 0.000864 | 0.001060 | 0.000859 |
| add_cv_test.test | RUN | 0.165516 | 0.581448 | 1.074768 | 0.000894 | 0.001026 | 0.000897 |
| add_const_test.test | RUN | 0.169285 | 0.576498 | 1.058260 | 0.000862 | 0.001014 | 0.000874 |
| is_virtual_base_of_fail.test | COMPILE_FAIL | 0.066513 | 0.155264 | 0.188334 | — | — | — |
| is_stateless_fail.test | COMPILE_FAIL | 0.066547 | 0.156455 | 0.192491 | — | — | — |
| is_polymorphic_fail.test | COMPILE_FAIL | 0.065419 | 0.156646 | 0.184291 | — | — | — |
| is_nothrow_move_constructible_fail.test | COMPILE_FAIL | 0.065751 | 0.153673 | 0.189256 | — | — | — |
| is_nothrow_move_assignable_fail.test | COMPILE_FAIL | 0.066226 | 0.156691 | 0.190919 | — | — | — |
| is_list_constructible_fail.test | COMPILE_FAIL | 0.067271 | 0.155134 | 0.191901 | — | — | — |
| is_empty_fail.test | COMPILE_FAIL | 0.068113 | 0.156951 | 0.195186 | — | — | — |
| is_destructible_fail.test | COMPILE_FAIL | 0.066676 | 0.155864 | 0.189638 | — | — | — |
| is_default_constructible_fail.test | COMPILE_FAIL | 0.066645 | 0.153798 | 0.187058 | — | — | — |
| is_copy_constructible_fail.test | COMPILE_FAIL | 0.066716 | 0.156262 | 0.186544 | — | — | — |
| is_copy_assignable_fail.test | COMPILE_FAIL | 0.067463 | 0.154930 | 0.186348 | — | — | — |
| is_convertible_fail.test | COMPILE_FAIL | 0.066459 | 0.157348 | 0.191892 | — | — | — |
| is_convertible2_fail.test | COMPILE_FAIL | 0.065873 | 0.156013 | 0.188048 | — | — | — |
| is_constructible_fail.test | COMPILE_FAIL | 0.065295 | 0.154356 | 0.187442 | — | — | — |
| is_base_of_fail.test | COMPILE_FAIL | 0.066160 | 0.153300 | 0.185582 | — | — | — |
| is_assignable_fail.test | COMPILE_FAIL | 0.064130 | 0.153693 | 0.185405 | — | — | — |
| has_nothrow_destruct_fail.test | COMPILE_FAIL | 0.065720 | 0.154103 | 0.187139 | — | — | — |
| has_nothrow_copy_fail.test | COMPILE_FAIL | 0.066199 | 0.156102 | 0.190864 | — | — | — |
| has_nothrow_cons_fail.test | COMPILE_FAIL | 0.066115 | 0.153602 | 0.187101 | — | — | — |
| has_nothrow_assign_fail.test | COMPILE_FAIL | 0.065832 | 0.153474 | 0.187385 | — | — | — |
| common_type_fail.test | COMPILE_FAIL | 0.066148 | 0.153352 | 0.188775 | — | — | — |
| common_type2_fail.test | COMPILE_FAIL | 0.066403 | 0.153391 | 0.186933 | — | — | — |
| has_nothrow_assign_test_no_intrinsics.test | RUN | 0.102279 | 0.313142 | 0.478280 | 0.000947 | 0.001004 | 0.000887 |
| has_nothrow_constr_test_no_intrinsics.test | RUN | 0.098080 | 0.312264 | 0.472273 | 0.000910 | 0.000848 | 0.000875 |
| has_nothrow_copy_test_no_intrinsics.test | RUN | 0.099848 | 0.317566 | 0.478946 | 0.001001 | 0.000899 | 0.000824 |
| is_nothrow_move_assignable_test_no_intrinsics.test | RUN | 0.098451 | 0.310724 | 0.468588 | 0.000803 | 0.000891 | 0.000862 |
| is_nothrow_move_constructible_test_no_intrinsics.test | RUN | 0.097514 | 0.307384 | 0.462526 | 0.000855 | 0.000831 | 0.000888 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 1.001× | 0.999×, 1.002× | 1.001× |
| clang | 1.026× | 1.027×, 1.026× | 1.000× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1365 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/43796354412).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| add_const_test.test | 10 | 0.000907s | 0.000899s | 0.000903s | byte equality observed |
| add_cv_test.test | 10 | 0.000891s | 0.000889s | 0.000886s | byte equality observed |
| add_lvalue_reference_test.test | 10 | 0.000888s | 0.000885s | 0.000887s | byte equality observed |
| add_pointer_test.test | 10 | 0.000884s | 0.000882s | 0.000884s | byte equality observed |
| add_reference_test.test | 10 | 0.000885s | 0.000876s | 0.000871s | byte equality observed |
| add_rvalue_reference_test.test | 10 | 0.000890s | 0.000877s | 0.000874s | byte equality observed |
| add_volatile_test.test | 10 | 0.000882s | 0.000882s | 0.000872s | byte equality observed |
| aligned_storage_a2_test.test | 10 | 0.000930s | 0.000930s | 0.000937s | byte equality observed |
| aligned_storage_empy_test.test | 10 | 0.000884s | 0.000876s | 0.000879s | byte equality observed |
| aligned_storage_test.test | 10 | 0.000929s | 0.000932s | 0.000925s | byte equality observed |
| alignment_of_a2_test.test | 10 | 0.000875s | 0.000878s | 0.000881s | byte equality observed |
| alignment_of_test.test | 10 | 0.000882s | 0.000876s | 0.000875s | byte equality observed |
| common_type_2_test.test | 10 | 0.000876s | 0.000878s | 0.000880s | byte equality observed |
| common_type_3_test.test | 10 | 0.000877s | 0.000877s | 0.000878s | byte equality observed |
| common_type_4_test.test | 10 | 0.000876s | 0.000879s | 0.000879s | byte equality observed |
| common_type_5_test.test | 10 | 0.000877s | 0.000882s | 0.000867s | byte equality observed |
| common_type_6_test.test | 10 | 0.000873s | 0.000870s | 0.000861s | byte equality observed |
| common_type_sfinae2_test.test | 10 | 0.000871s | 0.000874s | 0.000870s | byte equality observed |
| common_type_sfinae_test.test | 10 | 0.000874s | 0.000871s | 0.000869s | byte equality observed |
| common_type_test.test | 10 | 0.000872s | 0.000870s | 0.000874s | byte equality observed |
| conditional_test.test | 10 | 0.000876s | 0.000871s | 0.000861s | byte equality observed |
| conjunction_test.test | 10 | 0.000873s | 0.000871s | 0.000874s | byte equality observed |
| copy_cv_ref_test.test | 10 | 0.000875s | 0.000871s | 0.000868s | byte equality observed |
| copy_cv_test.test | 10 | 0.000871s | 0.000869s | 0.000876s | byte equality observed |
| copy_reference_test.test | 10 | 0.000872s | 0.000876s | 0.000867s | byte equality observed |
| cxx14_aliases_test.test | 10 | 0.000869s | 0.000870s | 0.000869s | byte equality observed |
| decay_test.test | 10 | 0.000884s | 0.000880s | 0.000878s | byte equality observed |
| detected_or_test.test | 10 | 0.000873s | 0.000872s | 0.000878s | byte equality observed |
| detected_test.test | 10 | 0.000874s | 0.000870s | 0.000872s | byte equality observed |
| disjunction_test.test | 10 | 0.000875s | 0.000871s | 0.000870s | byte equality observed |
| enable_if_test.test | 10 | 0.000872s | 0.000875s | 0.000870s | byte equality observed |
| extent_test.test | 10 | 0.000874s | 0.000864s | 0.000867s | byte equality observed |
| floating_point_promotion_test.test | 10 | 0.000870s | 0.000868s | 0.000872s | byte equality observed |
| function_traits_test.test | 10 | 0.000873s | 0.000868s | 0.000869s | byte equality observed |
| has_binary_classes0_test.test | 10 | 0.000872s | 0.000870s | 0.000872s | byte equality observed |
| has_binary_classes1_test.test | 10 | 0.000874s | 0.000870s | 0.000876s | byte equality observed |
| has_binary_classes2_test.test | 10 | 0.000874s | 0.000881s | 0.000877s | byte equality observed |
| has_binary_classes3_test.test | 10 | 0.000875s | 0.000876s | 0.000865s | byte equality observed |
| has_binary_classes4_test.test | 10 | 0.000871s | 0.000869s | 0.000875s | byte equality observed |
| has_binary_classes5_test.test | 10 | 0.000869s | 0.000871s | 0.000871s | byte equality observed |
| has_binary_classes6_test.test | 10 | 0.000875s | 0.000871s | 0.000868s | byte equality observed |
| has_binary_classes7_test.test | 10 | 0.000874s | 0.000873s | 0.000870s | byte equality observed |
| has_binary_classes8_test.test | 10 | 0.000868s | 0.000872s | 0.000878s | byte equality observed |
| has_binary_classes9_test.test | 10 | 0.000876s | 0.000871s | 0.000872s | byte equality observed |
| has_bit_and_assign_test.test | 10 | 0.000870s | 0.000867s | 0.000880s | byte equality observed |
| has_bit_and_test.test | 10 | 0.000871s | 0.000873s | 0.000871s | byte equality observed |
| has_bit_or_assign_test.test | 10 | 0.000874s | 0.000876s | 0.000873s | byte equality observed |
| has_bit_or_test.test | 10 | 0.000870s | 0.000878s | 0.000874s | byte equality observed |
| has_bit_xor_assign_test.test | 10 | 0.000869s | 0.000872s | 0.000874s | byte equality observed |
| has_bit_xor_test.test | 10 | 0.000874s | 0.000875s | 0.000877s | byte equality observed |
| has_complement_test.test | 10 | 0.000869s | 0.000872s | 0.000871s | byte equality observed |
| has_dereference_test.test | 10 | 0.000871s | 0.000877s | 0.000868s | byte equality observed |
| has_divides_assign_test.test | 10 | 0.000875s | 0.000867s | 0.000875s | byte equality observed |
| has_divides_test.test | 10 | 0.000873s | 0.000876s | 0.000869s | byte equality observed |
| has_equal_to_test.test | 10 | 0.000868s | 0.000870s | 0.000874s | byte equality observed |
| has_greater_equal_test.test | 10 | 0.000869s | 0.000873s | 0.000873s | byte equality observed |
| has_greater_test.test | 10 | 0.000867s | 0.000874s | 0.000873s | byte equality observed |
| has_left_shift_assign_test.test | 10 | 0.000874s | 0.000878s | 0.000868s | byte equality observed |
| has_left_shift_test.test | 10 | 0.000876s | 0.000864s | 0.000863s | byte equality observed |
| has_less_equal_test.test | 10 | 0.000868s | 0.000870s | 0.000868s | byte equality observed |
| has_less_test.test | 10 | 0.000866s | 0.000871s | 0.000880s | byte equality observed |
| has_logical_and_test.test | 10 | 0.000868s | 0.000872s | 0.000871s | byte equality observed |
| has_logical_not_test.test | 10 | 0.000870s | 0.000874s | 0.000871s | byte equality observed |
| has_logical_or_test.test | 10 | 0.000866s | 0.000877s | 0.000867s | byte equality observed |
| has_minus_assign_test.test | 10 | 0.000873s | 0.000865s | 0.000872s | byte equality observed |
| has_minus_test.test | 10 | 0.000871s | 0.000876s | 0.000869s | byte equality observed |
| has_modulus_assign_test.test | 10 | 0.000873s | 0.000873s | 0.000875s | byte equality observed |
| has_modulus_test.test | 10 | 0.000870s | 0.000867s | 0.000872s | byte equality observed |
| has_multiplies_assign_test.test | 10 | 0.000871s | 0.000872s | 0.000875s | byte equality observed |
| has_multiplies_test.test | 10 | 0.000873s | 0.000872s | 0.000879s | byte equality observed |
| has_negate_test.test | 10 | 0.000867s | 0.000877s | 0.000872s | byte equality observed |
| has_not_equal_to_test.test | 10 | 0.000873s | 0.000871s | 0.000876s | byte equality observed |
| has_nothrow_assign_test.test | 10 | 0.000871s | 0.000879s | 0.000872s | byte equality observed |
| has_nothrow_assign_test_no_intrinsics.test | 10 | 0.000874s | 0.000881s | 0.000871s | byte equality observed |
| has_nothrow_constr_test.test | 10 | 0.000864s | 0.000876s | 0.000877s | byte equality observed |
| has_nothrow_constr_test_no_intrinsics.test | 10 | 0.000873s | 0.000879s | 0.000877s | byte equality observed |
| has_nothrow_copy_test.test | 10 | 0.000874s | 0.000879s | 0.000866s | byte equality observed |
| has_nothrow_copy_test_no_intrinsics.test | 10 | 0.000868s | 0.000868s | 0.000874s | byte equality observed |
| has_nothrow_destructor_test.test | 10 | 0.000868s | 0.000873s | 0.000875s | byte equality observed |
| has_operator_new_test.test | 10 | 0.000872s | 0.000872s | 0.000871s | byte equality observed |
| has_plus_assign_test.test | 10 | 0.000872s | 0.000877s | 0.000871s | byte equality observed |
| has_plus_test.test | 10 | 0.000870s | 0.000866s | 0.000868s | byte equality observed |
| has_post_decrement_test.test | 10 | 0.000866s | 0.000866s | 0.000870s | byte equality observed |
| has_post_increment_test.test | 10 | 0.000870s | 0.000877s | 0.000875s | byte equality observed |
| has_postfix_classes0_test.test | 10 | 0.000871s | 0.000866s | 0.000869s | byte equality observed |
| has_postfix_classes1_test.test | 10 | 0.000872s | 0.000867s | 0.000877s | byte equality observed |
| has_postfix_classes2_test.test | 10 | 0.000870s | 0.000871s | 0.000872s | byte equality observed |
| has_postfix_classes3_test.test | 10 | 0.000876s | 0.000877s | 0.000873s | byte equality observed |
| has_pre_decrement_test.test | 10 | 0.000869s | 0.000872s | 0.000864s | byte equality observed |
| has_pre_increment_test.test | 10 | 0.000868s | 0.000861s | 0.000871s | byte equality observed |
| has_prefix_classes0_test.test | 10 | 0.000873s | 0.000871s | 0.000874s | byte equality observed |
| has_prefix_classes1_test.test | 10 | 0.000880s | 0.000879s | 0.000873s | byte equality observed |
| has_prefix_classes2_test.test | 10 | 0.000869s | 0.000870s | 0.000874s | byte equality observed |
| has_prefix_classes3_test.test | 10 | 0.000868s | 0.000881s | 0.000871s | byte equality observed |
| has_right_shift_assign_test.test | 10 | 0.000875s | 0.000876s | 0.000879s | byte equality observed |
| has_right_shift_test.test | 10 | 0.000874s | 0.000873s | 0.000874s | byte equality observed |
| has_trivial_assign_test.test | 10 | 0.000917s | 0.000912s | 0.000921s | byte equality observed |
| has_trivial_constr_test.test | 10 | 0.000909s | 0.000904s | 0.000901s | native test oracle; output varies |
| has_trivial_copy_test.test | 10 | 0.000912s | 0.000918s | 0.000924s | native test oracle; output varies |
| has_trivial_destructor_test.test | 10 | 0.000875s | 0.000880s | 0.000876s | byte equality observed |
| has_trivial_move_assign_test.test | 10 | 0.000884s | 0.000882s | 0.000883s | byte equality observed |
| has_trivial_move_constructor_test.test | 10 | 0.000879s | 0.000876s | 0.000871s | byte equality observed |
| has_unary_minus_test.test | 10 | 0.000869s | 0.000881s | 0.000876s | byte equality observed |
| has_unary_plus_test.test | 10 | 0.000882s | 0.000870s | 0.000876s | byte equality observed |
| has_virtual_destructor_test.test | 10 | 0.000871s | 0.000869s | 0.000868s | byte equality observed |
| integral_constant_test.test | 10 | 0.000409s | 0.000407s | 0.000876s | byte equality observed |
| is_abstract_test.test | 10 | 0.000874s | 0.000869s | 0.000874s | byte equality observed |
| is_arithmetic_test.test | 10 | 0.000869s | 0.000868s | 0.000875s | byte equality observed |
| is_array_test.test | 10 | 0.000872s | 0.000869s | 0.000878s | byte equality observed |
| is_assignable_test.test | 10 | 0.000867s | 0.000870s | 0.000874s | byte equality observed |
| is_base_and_derived_test.test | 10 | 0.000870s | 0.000872s | 0.000874s | byte equality observed |
| is_base_of_test.test | 10 | 0.000874s | 0.000874s | 0.000867s | byte equality observed |
| is_bounded_array_test.test | 10 | 0.000869s | 0.000878s | 0.000882s | byte equality observed |
| is_class_test.test | 10 | 0.000870s | 0.000877s | 0.000875s | byte equality observed |
| is_complete_test.test | 10 | 0.000874s | 0.000873s | 0.000871s | byte equality observed |
| is_complex_test.test | 10 | 0.000876s | 0.000878s | 0.000875s | byte equality observed |
| is_compound_test.test | 10 | 0.000877s | 0.000876s | 0.000872s | byte equality observed |
| is_const_test.test | 10 | 0.000863s | 0.000870s | 0.000865s | byte equality observed |
| is_constructible_test.test | 10 | 0.000867s | 0.000872s | 0.000869s | byte equality observed |
| is_convertible_test.test | 10 | 0.000877s | 0.000868s | 0.000882s | byte equality observed |
| is_copy_assignable_test.test | 10 | 0.000873s | 0.000868s | 0.000876s | byte equality observed |
| is_copy_constructible_test.test | 10 | 0.000870s | 0.000872s | 0.000871s | byte equality observed |
| is_default_constr_test.test | 10 | 0.000871s | 0.000874s | 0.000871s | byte equality observed |
| is_destructible_test.test | 10 | 0.000869s | 0.000872s | 0.000880s | byte equality observed |
| is_detected_exact_test.test | 10 | 0.000872s | 0.000879s | 0.000867s | byte equality observed |
| is_detected_test.test | 10 | 0.000868s | 0.000873s | 0.000875s | byte equality observed |
| is_empty_test.test | 10 | 0.000869s | 0.000869s | 0.000870s | byte equality observed |
| is_enum_test.test | 10 | 0.000871s | 0.000866s | 0.000869s | byte equality observed |
| is_final_test.test | 10 | 0.000864s | 0.000870s | 0.000884s | byte equality observed |
| is_float_test.test | 10 | 0.000873s | 0.000871s | 0.000872s | byte equality observed |
| is_floating_point_test.test | 10 | 0.000868s | 0.000870s | 0.000882s | byte equality observed |
| is_function_test.test | 10 | 0.000871s | 0.000876s | 0.000867s | byte equality observed |
| is_fundamental_test.test | 10 | 0.000869s | 0.000862s | 0.000869s | byte equality observed |
| is_integral_test.test | 10 | 0.000872s | 0.000871s | 0.000873s | byte equality observed |
| is_list_constructible_test.test | 10 | 0.000871s | 0.000866s | 0.000875s | byte equality observed |
| is_lvalue_reference_test.test | 10 | 0.000868s | 0.000873s | 0.000875s | byte equality observed |
| is_member_func_test.test | 10 | 0.000870s | 0.000868s | 0.000871s | byte equality observed |
| is_member_obj_test.test | 10 | 0.000871s | 0.000867s | 0.000873s | byte equality observed |
| is_member_pointer_test.test | 10 | 0.000871s | 0.000873s | 0.000872s | byte equality observed |
| is_noncopyable_test.test | 10 | 0.000867s | 0.000871s | 0.000879s | byte equality observed |
| is_nothrow_move_assignable_test.test | 10 | 0.000865s | 0.000871s | 0.000876s | byte equality observed |
| is_nothrow_move_assignable_test_no_intrinsics.test | 10 | 0.000873s | 0.000872s | 0.000871s | byte equality observed |
| is_nothrow_move_constructible_test.test | 10 | 0.000870s | 0.000871s | 0.000878s | byte equality observed |
| is_nothrow_move_constructible_test_no_intrinsics.test | 10 | 0.000872s | 0.000878s | 0.000876s | byte equality observed |
| is_nothrow_swappable_test.test | 10 | 0.000876s | 0.000877s | 0.000868s | byte equality observed |
| is_object_test.test | 10 | 0.000868s | 0.000872s | 0.000873s | byte equality observed |
| is_pod_test.test | 10 | 0.000874s | 0.000872s | 0.000870s | byte equality observed |
| is_pointer_test.test | 10 | 0.000870s | 0.000867s | 0.000868s | byte equality observed |
| is_polymorphic_test.test | 10 | 0.000875s | 0.000875s | 0.000871s | byte equality observed |
| is_reference_test.test | 10 | 0.000866s | 0.000874s | 0.000868s | byte equality observed |
| is_rvalue_reference_test.test | 10 | 0.000867s | 0.000864s | 0.000881s | byte equality observed |
| is_same_test.test | 10 | 0.000876s | 0.000868s | 0.000874s | byte equality observed |
| is_scalar_test.test | 10 | 0.000872s | 0.000871s | 0.000876s | byte equality observed |
| is_scoped_enum_test.test | 10 | 0.000869s | 0.000875s | 0.000871s | byte equality observed |
| is_signed_test.test | 10 | 0.000872s | 0.000869s | 0.000876s | byte equality observed |
| is_stateless_test.test | 10 | 0.000875s | 0.000862s | 0.000879s | byte equality observed |
| is_swappable_test.test | 10 | 0.000869s | 0.000873s | 0.000874s | byte equality observed |
| is_trivially_copyable_test.test | 10 | 0.000895s | 0.000902s | 0.000903s | byte equality observed |
| is_unbounded_array_test.test | 10 | 0.000881s | 0.000877s | 0.000874s | byte equality observed |
| is_union_test.test | 10 | 0.000876s | 0.000882s | 0.000877s | byte equality observed |
| is_unscoped_enum_test.test | 10 | 0.000873s | 0.000870s | 0.000875s | byte equality observed |
| is_unsigned_test.test | 10 | 0.000868s | 0.000870s | 0.000873s | byte equality observed |
| is_virtual_base_of_test.test | 10 | 0.000867s | 0.000872s | 0.000873s | byte equality observed |
| is_void_test.test | 10 | 0.000872s | 0.000871s | 0.000876s | byte equality observed |
| is_volatile_test.test | 10 | 0.000878s | 0.000871s | 0.000873s | byte equality observed |
| make_signed_test.test | 10 | 0.000869s | 0.000872s | 0.000874s | byte equality observed |
| make_unsigned_test.test | 10 | 0.000868s | 0.000866s | 0.000871s | byte equality observed |
| make_void_test.test | 10 | 0.000863s | 0.000861s | 0.000872s | byte equality observed |
| mpl_interop_test1.test | 10 | 0.000401s | 0.000406s | 0.000878s | byte equality observed |
| mpl_interop_test2.test | 10 | 0.000393s | 0.000400s | 0.000874s | byte equality observed |
| mpl_interop_test3.test | 10 | 0.000393s | 0.000401s | 0.000875s | byte equality observed |
| negation_test.test | 10 | 0.000859s | 0.000855s | 0.000867s | byte equality observed |
| promote_basic_test.test | 10 | 0.000401s | 0.000402s | 0.000870s | byte equality observed |
| promote_enum_msvc_bug_test.test | 10 | 0.000398s | 0.000393s | 0.000868s | byte equality observed |
| promote_enum_test.test | 10 | 0.000400s | 0.000395s | 0.000869s | byte equality observed |
| promote_mpl_test.test | 10 | 0.000395s | 0.000393s | 0.000870s | byte equality observed |
| rank_test.test | 10 | 0.000861s | 0.000855s | 0.000871s | byte equality observed |
| remove_all_extents_test.test | 10 | 0.000863s | 0.000873s | 0.000878s | byte equality observed |
| remove_bounds_test.test | 10 | 0.000873s | 0.000873s | 0.000875s | byte equality observed |
| remove_const_test.test | 10 | 0.000878s | 0.000871s | 0.000869s | byte equality observed |
| remove_cv_ref_test.test | 10 | 0.000873s | 0.000877s | 0.000870s | byte equality observed |
| remove_cv_test.test | 10 | 0.000873s | 0.000870s | 0.000867s | byte equality observed |
| remove_extent_test.test | 10 | 0.000877s | 0.000873s | 0.000872s | byte equality observed |
| remove_pointer_test.test | 10 | 0.000880s | 0.000862s | 0.000870s | byte equality observed |
| remove_reference_test.test | 10 | 0.000872s | 0.000870s | 0.000871s | byte equality observed |
| remove_volatile_test.test | 10 | 0.000870s | 0.000870s | 0.000876s | byte equality observed |
| tricky_abstract_type_test.test | 10 | 0.000869s | 0.000866s | 0.000868s | byte equality observed |
| tricky_add_pointer_test.test | 10 | 0.000874s | 0.000868s | 0.000872s | byte equality observed |
| tricky_function_type_test.test | 10 | 0.000874s | 0.000874s | 0.000876s | byte equality observed |
| tricky_incomplete_type_test.test | 10 | 0.000871s | 0.000873s | 0.000864s | byte equality observed |
| tricky_is_enum_test.test | 10 | 0.000870s | 0.000870s | 0.000876s | byte equality observed |
| tricky_partial_spec_test.test | 10 | 0.000868s | 0.000871s | 0.000876s | byte equality observed |
| tricky_rvalue_test.test | 10 | 0.000865s | 0.000876s | 0.000872s | byte equality observed |
| type_identity_test.test | 10 | 0.000886s | 0.000878s | 0.000875s | byte equality observed |
| type_traits_test.test | 10 | 0.000414s | 0.000415s | 0.000885s | byte equality observed |
| type_with_alignment_test.test | 10 | 0.000930s | 0.000957s | 0.000946s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/43796354412).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
