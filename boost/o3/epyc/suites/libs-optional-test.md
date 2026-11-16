# libs/optional/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| optional_test.test | RUN | 0.323447 | 2.023957 | 1.397663 | 0.002118 | 0.002141 | 0.002130 |
| optional_test_assign.test | RUN | 0.173079 | 0.440146 | 0.694971 | 0.001702 | 0.001831 | 0.001965 |
| optional_test_swap.test | RUN | 0.181746 | 0.537437 | 0.744501 | 0.001906 | 0.001906 | 0.001793 |
| optional_test_constexpr.test | COMPILE | 0.125329 | 0.301541 | 0.434654 | — | — | — |
| optional_test_wuninitialized.test | COMPILE | 0.185245 | 0.732647 | 0.682102 | — | — | — |
| optional_test_fwd_header.test | COMPILE | 0.123235 | 0.292907 | 0.422645 | — | — | — |
| optional_test_conversions_from_U.test | RUN | 0.202052 | 0.578936 | 0.805021 | 0.001986 | 0.002162 | 0.002098 |
| optional_test_constructors.test | RUN | 0.414816 | 2.100460 | 2.039556 | 0.001861 | 0.001804 | 0.002020 |
| optional_test_convert_from_T.test | RUN | 0.192498 | 0.453188 | 0.692760 | 0.002042 | 0.001958 | 0.002044 |
| optional_test_convert_assign.test | RUN | 0.180073 | 0.469417 | 0.703611 | 0.001798 | 0.002032 | 0.001970 |
| optional_test_empty_braces.test | RUN | 0.178755 | 0.437768 | 0.638086 | 0.002016 | 0.002151 | 0.002112 |
| optional_test_make_optional.test | RUN | 0.250399 | 0.672927 | 1.041078 | 0.001834 | 0.002102 | 0.002079 |
| optional_test_flat_map.test | RUN | 0.267877 | 0.768505 | 1.131884 | 0.001941 | 0.001809 | 0.002047 |
| optional_test_hash.test | RUN | 0.225707 | 0.633713 | 0.871765 | 0.001810 | 0.002143 | 0.002062 |
| optional_test_map.test | RUN | 0.276509 | 0.767425 | 1.176732 | 0.001810 | 0.001758 | 0.001717 |
| optional_test_tie.test | RUN | 0.197018 | 0.490458 | 0.683505 | 0.002074 | 0.001743 | 0.002138 |
| optional_test_ranges_find.test | RUN | 0.175236 | 0.427264 | 0.661225 | 0.001826 | 0.001822 | 0.001738 |
| optional_test_ref_assign_portable_minimum.test | RUN | 0.220323 | 1.257399 | 0.909964 | 0.001756 | 0.001840 | 0.002027 |
| optional_test_ref_assign_mutable_int.test | RUN | 0.187621 | 0.525687 | 0.689885 | 0.001774 | 0.002066 | 0.002014 |
| optional_test_ref_assign_const_int.test | RUN | 0.191169 | 0.552000 | 0.754785 | 0.001942 | 0.001644 | 0.001828 |
| optional_test_ref_converting_ctor.test | RUN | 0.207316 | 0.767316 | 0.826493 | 0.001984 | 0.002242 | 0.001880 |
| optional_test_ref_convert_assign_non_int.test | RUN | 0.189297 | 0.511237 | 0.696266 | 0.001756 | 0.001928 | 0.002143 |
| optional_test_ref_convert_assign_mutable_int.test | RUN | 0.181437 | 0.476411 | 0.716383 | 0.001840 | 0.001812 | 0.002177 |
| optional_test_ref_convert_assign_const_int.test | RUN | 0.175211 | 0.455666 | 0.642216 | 0.001638 | 0.001916 | 0.001933 |
| optional_test_ref_portable_minimum.test | RUN | 0.801898 | 2.474512 | 2.416438 | 0.001918 | 0.001922 | 0.001728 |
| optional_test_ref_move.test | RUN | 0.192807 | 0.479964 | 0.689020 | 0.001986 | 0.002080 | 0.001773 |
| optional_test_ref_to_val.test | RUN | 0.231783 | 0.981050 | 1.014130 | 0.001836 | 0.001942 | 0.001896 |
| optional_test_inplace_factory.test | RUN | 0.235397 | 0.907877 | 0.881590 | 0.001668 | 0.002136 | 0.001959 |
| optional_test_io.test | RUN | 0.221673 | 0.974892 | 0.870135 | 0.002149 | 0.001953 | 0.002127 |
| optional_test_move.test | RUN | 0.214270 | 0.664252 | 0.794744 | 0.001942 | 0.001900 | 0.002142 |
| optional_test_noexcept_move.test | RUN | 0.132898 | 0.297602 | 0.407986 | 0.000848 | 0.000811 | 0.001650 |
| optional_test_cmp_none.test | RUN | 0.185308 | 0.478264 | 0.670932 | 0.001926 | 0.002160 | 0.002056 |
| optional_test_value_access.test | RUN | 0.218589 | 0.787336 | 0.910840 | 0.001946 | 0.002110 | 0.001887 |
| optional_test_emplace.test | RUN | 0.219107 | 0.775498 | 0.933001 | 0.001769 | 0.001922 | 0.001698 |
| optional_test_minimum_requirements.test | RUN | 0.200228 | 0.616735 | 0.783431 | 0.002004 | 0.001929 | 0.002202 |
| optional_test_msvc_bug_workaround.test | RUN | 0.183124 | 0.434629 | 0.685357 | 0.001874 | 0.001826 | 0.002092 |
| optional_test_member_T.test | RUN | 0.184304 | 0.428138 | 0.648239 | 0.001924 | 0.001907 | 0.001869 |
| optional_test_tc_base.test | RUN | 0.181082 | 0.435922 | 0.653455 | 0.001730 | 0.001957 | 0.001824 |
| optional_test_sfinae_friendly_ctor.test | COMPILE | 0.137898 | 0.314943 | 0.455609 | — | — | — |
| optional_test_path_assignment.test | COMPILE | 0.123555 | 0.307732 | 0.417880 | — | — | — |
| optional_test_fail_const_swap.test | COMPILE_FAIL | 0.120157 | 0.272309 | 0.404122 | — | — | — |
| optional_test_ref_convert_assign_const_int_prevented.test | COMPILE_FAIL | 0.164780 | 0.382414 | 0.620049 | — | — | — |
| optional_test_fail1.test | COMPILE_FAIL | 0.117714 | 0.285694 | 0.401856 | — | — | — |
| optional_test_fail3a.test | COMPILE_FAIL | 0.118436 | 0.281898 | 0.426218 | — | — | — |
| optional_test_fail3b.test | COMPILE_FAIL | 0.123439 | 0.282958 | 0.403375 | — | — | — |
| optional_test_ref_fail1.test | COMPILE_FAIL | 0.120809 | 0.252525 | 0.404986 | — | — | — |
| optional_test_ref_fail3.test | COMPILE_FAIL | 0.117555 | 0.253035 | 0.404368 | — | — | — |
| optional_test_ref_fail4.test | COMPILE_FAIL | 0.118416 | 0.281121 | 0.415050 | — | — | — |
| optional_test_ref_fail_convert_from_temporary_optional_T.test | COMPILE_FAIL | 0.119548 | 0.281595 | 0.394289 | — | — | — |
| optional_test_inplace_fail.test | COMPILE_FAIL | 0.195942 | 0.396567 | 0.683554 | — | — | — |
| optional_test_inplace_fail2.test | COMPILE_FAIL | 0.196213 | 0.396691 | 0.678107 | — | — | — |
| optional_test_fail_implicit_bool_convert.test | COMPILE_FAIL | 0.114422 | 0.276894 | 0.404410 | — | — | — |
| optional_test_fail_copying_a_moveable_type.test | COMPILE_FAIL | 0.121100 | 0.280973 | 0.413582 | — | — | — |
| optional_test_fail_optional_rvalue_ref.test | COMPILE_FAIL | 0.115856 | 0.275583 | 0.395441 | — | — | — |
| optional_test_ref_fail_init_from_Trefref.test | COMPILE_FAIL | 0.118623 | 0.277105 | 0.395251 | — | — | — |
| optional_test_ref_fail_init_from_Urefref.test | COMPILE_FAIL | 0.118841 | 0.280974 | 0.409012 | — | — | — |
| optional_test_ref_fail_assign_from_Trefref.test | COMPILE_FAIL | 0.119017 | 0.278411 | 0.410571 | — | — | — |
| optional_test_ref_fail_assign_from_Urefref.test | COMPILE_FAIL | 0.119154 | 0.276315 | 0.394230 | — | — | — |
| optional_test_fail_convert_from_null.test | COMPILE_FAIL | 0.116513 | 0.280237 | 0.398748 | — | — | — |
| optional_test_fail_explicit_convert_in_value_or.test | COMPILE_FAIL | 0.116914 | 0.282477 | 0.406050 | — | — | — |
| optional_test_fail_explicit_convert_in_value_or_call.test | COMPILE_FAIL | 0.116333 | 0.278690 | 0.413966 | — | — | — |
| optional_test_fail_io_without_io.test | COMPILE_FAIL | 0.159531 | 0.365126 | 0.588266 | — | — | — |
| optional_test_fail_none_io_without_io.test | COMPILE_FAIL | 0.129300 | 0.304747 | 0.496998 | — | — | — |
| optional_test_fail_convert_assign_of_enums.test | COMPILE_FAIL | 0.119098 | 0.280954 | 0.409754 | — | — | — |
| optional_test_static_properties.test | RUN | 0.282012 | 0.629091 | 1.072526 | 0.001941 | 0.002178 | 0.002132 |
| optional_test_maybe_uninitialized_warning.test | COMPILE | 0.124796 | 0.296174 | 0.439052 | — | — | — |
| optional_test_deleted_default_ctor.test | COMPILE | 0.131178 | 0.317892 | 0.443982 | — | — | — |
| optional_test_constructible_from_other.test | COMPILE | 0.120839 | 0.294036 | 0.436796 | — | — | — |
| optional_xconfig_NO_PROPER_ASSIGN_FROM_CONST_INT_pass.test | RUN | 0.142722 | 0.371511 | 0.558604 | 0.001954 | 0.001893 | 0.001782 |
| optional_xconfig_NO_PROPER_ASSIGN_FROM_CONST_INT_fail.test | RUN_FAIL | 0.142590 | 0.368756 | 0.521285 | 0.001683 | 0.001962 | 0.001868 |
| optional_xconfig_NO_PROPER_CONVERT_FROM_CONST_INT_pass.test | RUN | 0.147911 | 0.377075 | 0.571975 | 0.001574 | 0.001703 | 0.001580 |
| optional_xconfig_NO_PROPER_CONVERT_FROM_CONST_INT_fail.test | RUN_FAIL | 0.147509 | 0.359580 | 0.552743 | 0.001713 | 0.001561 | 0.002088 |
| optional_xconfig_NO_LEGAL_CONVERT_FROM_REF_pass.test | RUN | 0.103493 | 0.278679 | 0.402931 | 0.001318 | 0.001549 | 0.001426 |
| optional_xconfig_NO_LEGAL_CONVERT_FROM_REF_fail.test | COMPILE_FAIL | 0.066632 | 0.256263 | 0.348047 | — | — | — |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 1.000× | 1.010×, 0.991× | 0.993× |
| clang | 1.010× | 1.010×, 1.010× | 1.004× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1359 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/43785224349).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| optional_test.test | 10 | 0.001302s | 0.001314s | 0.001319s | byte equality observed |
| optional_test_assign.test | 10 | 0.001236s | 0.001219s | 0.001228s | byte equality observed |
| optional_test_cmp_none.test | 10 | 0.001221s | 0.001205s | 0.001229s | byte equality observed |
| optional_test_constructors.test | 10 | 0.001267s | 0.001204s | 0.001287s | byte equality observed |
| optional_test_conversions_from_U.test | 10 | 0.001229s | 0.001210s | 0.001261s | byte equality observed |
| optional_test_convert_assign.test | 10 | 0.001222s | 0.001236s | 0.001230s | byte equality observed |
| optional_test_convert_from_T.test | 10 | 0.001264s | 0.001252s | 0.001260s | byte equality observed |
| optional_test_emplace.test | 10 | 0.001298s | 0.001250s | 0.001268s | byte equality observed |
| optional_test_empty_braces.test | 10 | 0.001252s | 0.001244s | 0.001227s | byte equality observed |
| optional_test_flat_map.test | 10 | 0.001227s | 0.001222s | 0.001204s | byte equality observed |
| optional_test_hash.test | 10 | 0.001259s | 0.001195s | 0.001226s | byte equality observed |
| optional_test_inplace_factory.test | 10 | 0.001271s | 0.001211s | 0.001211s | byte equality observed |
| optional_test_io.test | 10 | 0.001253s | 0.001240s | 0.001256s | byte equality observed |
| optional_test_make_optional.test | 10 | 0.001223s | 0.001269s | 0.001212s | byte equality observed |
| optional_test_map.test | 10 | 0.001221s | 0.001220s | 0.001228s | byte equality observed |
| optional_test_member_T.test | 10 | 0.001252s | 0.001254s | 0.001240s | byte equality observed |
| optional_test_minimum_requirements.test | 10 | 0.001253s | 0.001263s | 0.001284s | byte equality observed |
| optional_test_move.test | 10 | 0.001210s | 0.001195s | 0.001257s | byte equality observed |
| optional_test_msvc_bug_workaround.test | 10 | 0.001222s | 0.001195s | 0.001230s | byte equality observed |
| optional_test_noexcept_move.test | 10 | 0.000578s | 0.000569s | 0.001229s | byte equality observed |
| optional_test_ranges_find.test | 10 | 0.001240s | 0.001216s | 0.001206s | byte equality observed |
| optional_test_ref_assign_const_int.test | 10 | 0.001273s | 0.001302s | 0.001263s | byte equality observed |
| optional_test_ref_assign_mutable_int.test | 10 | 0.001259s | 0.001249s | 0.001248s | byte equality observed |
| optional_test_ref_assign_portable_minimum.test | 10 | 0.001262s | 0.001243s | 0.001245s | byte equality observed |
| optional_test_ref_convert_assign_const_int.test | 10 | 0.001253s | 0.001220s | 0.001234s | byte equality observed |
| optional_test_ref_convert_assign_mutable_int.test | 10 | 0.001224s | 0.001253s | 0.001246s | byte equality observed |
| optional_test_ref_convert_assign_non_int.test | 10 | 0.001237s | 0.001228s | 0.001252s | byte equality observed |
| optional_test_ref_converting_ctor.test | 10 | 0.001226s | 0.001276s | 0.001232s | byte equality observed |
| optional_test_ref_move.test | 10 | 0.001245s | 0.001246s | 0.001243s | byte equality observed |
| optional_test_ref_portable_minimum.test | 10 | 0.001277s | 0.001267s | 0.001275s | byte equality observed |
| optional_test_ref_to_val.test | 10 | 0.001240s | 0.001197s | 0.001231s | byte equality observed |
| optional_test_static_properties.test | 10 | 0.001211s | 0.001208s | 0.001273s | byte equality observed |
| optional_test_swap.test | 10 | 0.001252s | 0.001259s | 0.001241s | byte equality observed |
| optional_test_tc_base.test | 10 | 0.001198s | 0.001246s | 0.001234s | byte equality observed |
| optional_test_tie.test | 10 | 0.001231s | 0.001235s | 0.001218s | byte equality observed |
| optional_test_value_access.test | 10 | 0.001298s | 0.001285s | 0.001272s | byte equality observed |
| optional_xconfig_NO_LEGAL_CONVERT_FROM_REF_pass.test | 10 | 0.001192s | 0.001185s | 0.001161s | byte equality observed |
| optional_xconfig_NO_PROPER_ASSIGN_FROM_CONST_INT_pass.test | 10 | 0.001206s | 0.001255s | 0.001191s | byte equality observed |
| optional_xconfig_NO_PROPER_CONVERT_FROM_CONST_INT_pass.test | 10 | 0.001181s | 0.001211s | 0.001211s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/43785224349).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
