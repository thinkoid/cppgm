# libs/optional/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| optional_test.test | RUN | 0.322287 | 2.021483 | 1.393324 | 0.002079 | 0.002266 | 0.001936 |
| optional_test_assign.test | RUN | 0.172438 | 0.452465 | 0.697069 | 0.001888 | 0.001958 | 0.001758 |
| optional_test_swap.test | RUN | 0.182156 | 0.545372 | 0.707771 | 0.001777 | 0.001896 | 0.001954 |
| optional_test_constexpr.test | COMPILE | 0.125501 | 0.303877 | 0.415621 | — | — | — |
| optional_test_wuninitialized.test | COMPILE | 0.182828 | 0.723498 | 0.691344 | — | — | — |
| optional_test_fwd_header.test | COMPILE | 0.124417 | 0.284493 | 0.428017 | — | — | — |
| optional_test_conversions_from_U.test | RUN | 0.206141 | 0.565435 | 0.834669 | 0.001800 | 0.002057 | 0.002146 |
| optional_test_constructors.test | RUN | 0.415974 | 2.073078 | 2.061396 | 0.001974 | 0.001993 | 0.002218 |
| optional_test_convert_from_T.test | RUN | 0.190131 | 0.451356 | 0.726852 | 0.001810 | 0.002049 | 0.001917 |
| optional_test_convert_assign.test | RUN | 0.177943 | 0.465990 | 0.699765 | 0.001832 | 0.002116 | 0.002008 |
| optional_test_empty_braces.test | RUN | 0.179641 | 0.443870 | 0.727737 | 0.001930 | 0.002158 | 0.002123 |
| optional_test_make_optional.test | RUN | 0.244902 | 0.663842 | 1.076875 | 0.001845 | 0.001901 | 0.001824 |
| optional_test_flat_map.test | RUN | 0.266551 | 0.802456 | 1.178457 | 0.001816 | 0.001854 | 0.002037 |
| optional_test_hash.test | RUN | 0.223388 | 0.659781 | 0.851688 | 0.001651 | 0.001956 | 0.002054 |
| optional_test_map.test | RUN | 0.270547 | 0.757643 | 1.218313 | 0.002016 | 0.001817 | 0.002093 |
| optional_test_tie.test | RUN | 0.195993 | 0.492967 | 0.719828 | 0.001685 | 0.001724 | 0.001817 |
| optional_test_ranges_find.test | RUN | 0.172562 | 0.448681 | 0.665649 | 0.001671 | 0.001710 | 0.001662 |
| optional_test_ref_assign_portable_minimum.test | RUN | 0.216093 | 1.255441 | 0.930474 | 0.001938 | 0.001712 | 0.002118 |
| optional_test_ref_assign_mutable_int.test | RUN | 0.186822 | 0.534829 | 0.709680 | 0.001765 | 0.001805 | 0.001986 |
| optional_test_ref_assign_const_int.test | RUN | 0.188034 | 0.547019 | 0.739103 | 0.001661 | 0.001715 | 0.002089 |
| optional_test_ref_converting_ctor.test | RUN | 0.205440 | 0.763413 | 0.793549 | 0.001882 | 0.001929 | 0.002018 |
| optional_test_ref_convert_assign_non_int.test | RUN | 0.186499 | 0.514309 | 0.710301 | 0.001834 | 0.001873 | 0.002122 |
| optional_test_ref_convert_assign_mutable_int.test | RUN | 0.181870 | 0.478689 | 0.687934 | 0.002000 | 0.001670 | 0.001906 |
| optional_test_ref_convert_assign_const_int.test | RUN | 0.177905 | 0.460968 | 0.676981 | 0.001884 | 0.001778 | 0.001821 |
| optional_test_ref_portable_minimum.test | RUN | 0.740826 | 2.486078 | 2.373297 | 0.001760 | 0.001892 | 0.002122 |
| optional_test_ref_move.test | RUN | 0.188153 | 0.488498 | 0.733977 | 0.001848 | 0.002052 | 0.002114 |
| optional_test_ref_to_val.test | RUN | 0.220989 | 0.988495 | 0.993453 | 0.001957 | 0.001873 | 0.001763 |
| optional_test_inplace_factory.test | RUN | 0.231944 | 0.907625 | 0.896792 | 0.001794 | 0.001897 | 0.001686 |
| optional_test_io.test | RUN | 0.220278 | 0.980637 | 0.849185 | 0.001841 | 0.001862 | 0.001958 |
| optional_test_move.test | RUN | 0.204939 | 0.669782 | 0.801871 | 0.001954 | 0.001887 | 0.002036 |
| optional_test_noexcept_move.test | RUN | 0.128651 | 0.291193 | 0.459910 | 0.000788 | 0.000806 | 0.001803 |
| optional_test_cmp_none.test | RUN | 0.178646 | 0.462766 | 0.655495 | 0.002018 | 0.002186 | 0.002037 |
| optional_test_value_access.test | RUN | 0.210413 | 0.794844 | 0.834472 | 0.002122 | 0.001940 | 0.001957 |
| optional_test_emplace.test | RUN | 0.210824 | 0.801818 | 0.887245 | 0.002430 | 0.001816 | 0.001526 |
| optional_test_minimum_requirements.test | RUN | 0.198241 | 0.618118 | 0.795160 | 0.001842 | 0.001822 | 0.001759 |
| optional_test_msvc_bug_workaround.test | RUN | 0.177765 | 0.449273 | 0.609258 | 0.001954 | 0.001794 | 0.002172 |
| optional_test_member_T.test | RUN | 0.165805 | 0.432256 | 0.671560 | 0.001612 | 0.001885 | 0.001729 |
| optional_test_tc_base.test | RUN | 0.175736 | 0.443986 | 0.668474 | 0.001718 | 0.001797 | 0.001960 |
| optional_test_sfinae_friendly_ctor.test | COMPILE | 0.131812 | 0.307567 | 0.441652 | — | — | — |
| optional_test_path_assignment.test | COMPILE | 0.126275 | 0.297846 | 0.433052 | — | — | — |
| optional_test_fail_const_swap.test | COMPILE_FAIL | 0.118215 | 0.272236 | 0.401702 | — | — | — |
| optional_test_ref_convert_assign_const_int_prevented.test | COMPILE_FAIL | 0.160139 | 0.372956 | 0.611723 | — | — | — |
| optional_test_fail1.test | COMPILE_FAIL | 0.116363 | 0.286941 | 0.396812 | — | — | — |
| optional_test_fail3a.test | COMPILE_FAIL | 0.118565 | 0.286494 | 0.413956 | — | — | — |
| optional_test_fail3b.test | COMPILE_FAIL | 0.120034 | 0.276414 | 0.406438 | — | — | — |
| optional_test_ref_fail1.test | COMPILE_FAIL | 0.115203 | 0.267562 | 0.402928 | — | — | — |
| optional_test_ref_fail3.test | COMPILE_FAIL | 0.116214 | 0.279757 | 0.395285 | — | — | — |
| optional_test_ref_fail4.test | COMPILE_FAIL | 0.120998 | 0.283082 | 0.406908 | — | — | — |
| optional_test_ref_fail_convert_from_temporary_optional_T.test | COMPILE_FAIL | 0.116046 | 0.274167 | 0.390971 | — | — | — |
| optional_test_inplace_fail.test | COMPILE_FAIL | 0.196616 | 0.449014 | 0.682727 | — | — | — |
| optional_test_inplace_fail2.test | COMPILE_FAIL | 0.192541 | 0.440747 | 0.683970 | — | — | — |
| optional_test_fail_implicit_bool_convert.test | COMPILE_FAIL | 0.115530 | 0.279501 | 0.397910 | — | — | — |
| optional_test_fail_copying_a_moveable_type.test | COMPILE_FAIL | 0.120064 | 0.291103 | 0.404611 | — | — | — |
| optional_test_fail_optional_rvalue_ref.test | COMPILE_FAIL | 0.116831 | 0.271800 | 0.383737 | — | — | — |
| optional_test_ref_fail_init_from_Trefref.test | COMPILE_FAIL | 0.119254 | 0.274264 | 0.416110 | — | — | — |
| optional_test_ref_fail_init_from_Urefref.test | COMPILE_FAIL | 0.118373 | 0.285509 | 0.390195 | — | — | — |
| optional_test_ref_fail_assign_from_Trefref.test | COMPILE_FAIL | 0.118385 | 0.282831 | 0.416025 | — | — | — |
| optional_test_ref_fail_assign_from_Urefref.test | COMPILE_FAIL | 0.118250 | 0.278427 | 0.405079 | — | — | — |
| optional_test_fail_convert_from_null.test | COMPILE_FAIL | 0.117578 | 0.279830 | 0.394729 | — | — | — |
| optional_test_fail_explicit_convert_in_value_or.test | COMPILE_FAIL | 0.117082 | 0.281649 | 0.411091 | — | — | — |
| optional_test_fail_explicit_convert_in_value_or_call.test | COMPILE_FAIL | 0.116193 | 0.284126 | 0.415578 | — | — | — |
| optional_test_fail_io_without_io.test | COMPILE_FAIL | 0.157868 | 0.363803 | 0.581753 | — | — | — |
| optional_test_fail_none_io_without_io.test | COMPILE_FAIL | 0.127076 | 0.306749 | 0.494847 | — | — | — |
| optional_test_fail_convert_assign_of_enums.test | COMPILE_FAIL | 0.120990 | 0.288923 | 0.424161 | — | — | — |
| optional_test_static_properties.test | RUN | 0.278602 | 0.643249 | 1.043672 | 0.001807 | 0.002180 | 0.002085 |
| optional_test_maybe_uninitialized_warning.test | COMPILE | 0.127504 | 0.314454 | 0.424331 | — | — | — |
| optional_test_deleted_default_ctor.test | COMPILE | 0.131779 | 0.300383 | 0.434091 | — | — | — |
| optional_test_constructible_from_other.test | COMPILE | 0.124263 | 0.284932 | 0.434942 | — | — | — |
| optional_xconfig_NO_PROPER_ASSIGN_FROM_CONST_INT_pass.test | RUN | 0.141815 | 0.370674 | 0.564005 | 0.001773 | 0.001772 | 0.001929 |
| optional_xconfig_NO_PROPER_ASSIGN_FROM_CONST_INT_fail.test | RUN_FAIL | 0.142123 | 0.354596 | 0.555193 | 0.001756 | 0.001730 | 0.001544 |
| optional_xconfig_NO_PROPER_CONVERT_FROM_CONST_INT_pass.test | RUN | 0.140398 | 0.351644 | 0.536777 | 0.001468 | 0.002000 | 0.001630 |
| optional_xconfig_NO_PROPER_CONVERT_FROM_CONST_INT_fail.test | RUN_FAIL | 0.143226 | 0.380004 | 0.538322 | 0.001942 | 0.001541 | 0.001504 |
| optional_xconfig_NO_LEGAL_CONVERT_FROM_REF_pass.test | RUN | 0.100266 | 0.263065 | 0.386407 | 0.001425 | 0.001504 | 0.001282 |
| optional_xconfig_NO_LEGAL_CONVERT_FROM_REF_fail.test | COMPILE_FAIL | 0.076498 | 0.255270 | 0.380852 | — | — | — |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.987× | 0.985×, 0.988× | 1.001× |
| clang | 1.018× | 1.023×, 1.012× | 0.999× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1360 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/thinkoid/cppgm/actions/runs/44661842949).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| optional_test.test | 10 | 0.001315s | 0.001324s | 0.001307s | byte equality observed |
| optional_test_assign.test | 10 | 0.001243s | 0.001250s | 0.001277s | byte equality observed |
| optional_test_cmp_none.test | 10 | 0.001277s | 0.001202s | 0.001267s | byte equality observed |
| optional_test_constructors.test | 10 | 0.001253s | 0.001235s | 0.001252s | byte equality observed |
| optional_test_conversions_from_U.test | 10 | 0.001255s | 0.001219s | 0.001278s | byte equality observed |
| optional_test_convert_assign.test | 10 | 0.001262s | 0.001275s | 0.001230s | byte equality observed |
| optional_test_convert_from_T.test | 10 | 0.001236s | 0.001216s | 0.001220s | byte equality observed |
| optional_test_emplace.test | 10 | 0.001272s | 0.001258s | 0.001339s | byte equality observed |
| optional_test_empty_braces.test | 10 | 0.001270s | 0.001232s | 0.001284s | byte equality observed |
| optional_test_flat_map.test | 10 | 0.001223s | 0.001253s | 0.001326s | byte equality observed |
| optional_test_hash.test | 10 | 0.001227s | 0.001238s | 0.001294s | byte equality observed |
| optional_test_inplace_factory.test | 10 | 0.001252s | 0.001244s | 0.001325s | byte equality observed |
| optional_test_io.test | 10 | 0.001283s | 0.001270s | 0.001305s | byte equality observed |
| optional_test_make_optional.test | 10 | 0.001235s | 0.001241s | 0.001263s | byte equality observed |
| optional_test_map.test | 10 | 0.001235s | 0.001181s | 0.001267s | byte equality observed |
| optional_test_member_T.test | 10 | 0.001287s | 0.001207s | 0.001318s | byte equality observed |
| optional_test_minimum_requirements.test | 10 | 0.001292s | 0.001223s | 0.001267s | byte equality observed |
| optional_test_move.test | 10 | 0.001268s | 0.001200s | 0.001255s | byte equality observed |
| optional_test_msvc_bug_workaround.test | 10 | 0.001273s | 0.001226s | 0.001241s | byte equality observed |
| optional_test_noexcept_move.test | 10 | 0.000575s | 0.000572s | 0.001283s | byte equality observed |
| optional_test_ranges_find.test | 10 | 0.001287s | 0.001210s | 0.001264s | byte equality observed |
| optional_test_ref_assign_const_int.test | 10 | 0.001251s | 0.001197s | 0.001311s | byte equality observed |
| optional_test_ref_assign_mutable_int.test | 10 | 0.001257s | 0.001182s | 0.001298s | byte equality observed |
| optional_test_ref_assign_portable_minimum.test | 10 | 0.001283s | 0.001197s | 0.001285s | byte equality observed |
| optional_test_ref_convert_assign_const_int.test | 10 | 0.001259s | 0.001207s | 0.001306s | byte equality observed |
| optional_test_ref_convert_assign_mutable_int.test | 10 | 0.001274s | 0.001235s | 0.001295s | byte equality observed |
| optional_test_ref_convert_assign_non_int.test | 10 | 0.001227s | 0.001223s | 0.001286s | byte equality observed |
| optional_test_ref_converting_ctor.test | 10 | 0.001241s | 0.001243s | 0.001276s | byte equality observed |
| optional_test_ref_move.test | 10 | 0.001264s | 0.001247s | 0.001248s | byte equality observed |
| optional_test_ref_portable_minimum.test | 10 | 0.001306s | 0.001253s | 0.001301s | byte equality observed |
| optional_test_ref_to_val.test | 10 | 0.001243s | 0.001215s | 0.001250s | byte equality observed |
| optional_test_static_properties.test | 10 | 0.001267s | 0.001220s | 0.001251s | byte equality observed |
| optional_test_swap.test | 10 | 0.001275s | 0.001243s | 0.001284s | byte equality observed |
| optional_test_tc_base.test | 10 | 0.001249s | 0.001248s | 0.001224s | byte equality observed |
| optional_test_tie.test | 10 | 0.001238s | 0.001260s | 0.001229s | byte equality observed |
| optional_test_value_access.test | 10 | 0.001306s | 0.001268s | 0.001320s | byte equality observed |
| optional_xconfig_NO_LEGAL_CONVERT_FROM_REF_pass.test | 10 | 0.001204s | 0.001246s | 0.001240s | byte equality observed |
| optional_xconfig_NO_PROPER_ASSIGN_FROM_CONST_INT_pass.test | 10 | 0.001228s | 0.001215s | 0.001257s | byte equality observed |
| optional_xconfig_NO_PROPER_CONVERT_FROM_CONST_INT_pass.test | 10 | 0.001238s | 0.001204s | 0.001292s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/thinkoid/cppgm/actions/runs/44661842949).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
