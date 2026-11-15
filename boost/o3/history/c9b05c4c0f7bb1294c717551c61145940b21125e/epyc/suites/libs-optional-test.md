# libs/optional/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| optional_test.test | RUN | 0.319023 | 2.048533 | 1.400022 | 0.001986 | 0.002092 | 0.002269 |
| optional_test_assign.test | RUN | 0.174531 | 0.435487 | 0.679750 | 0.001881 | 0.002060 | 0.001827 |
| optional_test_swap.test | RUN | 0.190786 | 0.537413 | 0.755107 | 0.001820 | 0.002056 | 0.001791 |
| optional_test_constexpr.test | COMPILE | 0.126727 | 0.296694 | 0.452521 | — | — | — |
| optional_test_wuninitialized.test | COMPILE | 0.182560 | 0.735630 | 0.674647 | — | — | — |
| optional_test_fwd_header.test | COMPILE | 0.125534 | 0.300029 | 0.427653 | — | — | — |
| optional_test_conversions_from_U.test | RUN | 0.206745 | 0.549317 | 0.842000 | 0.001980 | 0.002155 | 0.002116 |
| optional_test_constructors.test | RUN | 0.420303 | 2.041247 | 1.977403 | 0.002114 | 0.001867 | 0.002024 |
| optional_test_convert_from_T.test | RUN | 0.187374 | 0.453057 | 0.677444 | 0.001792 | 0.002136 | 0.002101 |
| optional_test_convert_assign.test | RUN | 0.187411 | 0.431430 | 0.705641 | 0.001858 | 0.002012 | 0.001742 |
| optional_test_empty_braces.test | RUN | 0.183484 | 0.441889 | 0.664209 | 0.002056 | 0.002160 | 0.002176 |
| optional_test_make_optional.test | RUN | 0.254731 | 0.660581 | 0.993987 | 0.001593 | 0.001722 | 0.002066 |
| optional_test_flat_map.test | RUN | 0.268080 | 0.789017 | 1.159285 | 0.001915 | 0.001851 | 0.002141 |
| optional_test_hash.test | RUN | 0.226443 | 0.646342 | 0.853250 | 0.001884 | 0.002122 | 0.002037 |
| optional_test_map.test | RUN | 0.270673 | 0.752540 | 1.160353 | 0.001804 | 0.002000 | 0.001725 |
| optional_test_tie.test | RUN | 0.194834 | 0.493193 | 0.712995 | 0.001914 | 0.001574 | 0.002166 |
| optional_test_ranges_find.test | RUN | 0.176622 | 0.430880 | 0.659016 | 0.001731 | 0.001766 | 0.001580 |
| optional_test_ref_assign_portable_minimum.test | RUN | 0.224785 | 1.265515 | 0.919493 | 0.002108 | 0.002062 | 0.002169 |
| optional_test_ref_assign_mutable_int.test | RUN | 0.183003 | 0.495516 | 0.715032 | 0.001977 | 0.001814 | 0.001914 |
| optional_test_ref_assign_const_int.test | RUN | 0.190200 | 0.513642 | 0.704648 | 0.001656 | 0.001798 | 0.001915 |
| optional_test_ref_converting_ctor.test | RUN | 0.205862 | 0.759354 | 0.793725 | 0.001877 | 0.001854 | 0.002020 |
| optional_test_ref_convert_assign_non_int.test | RUN | 0.189532 | 0.511615 | 0.746896 | 0.001920 | 0.001730 | 0.001782 |
| optional_test_ref_convert_assign_mutable_int.test | RUN | 0.181896 | 0.474203 | 0.670014 | 0.002092 | 0.001946 | 0.002152 |
| optional_test_ref_convert_assign_const_int.test | RUN | 0.180639 | 0.469464 | 0.655746 | 0.002038 | 0.002104 | 0.002160 |
| optional_test_ref_portable_minimum.test | RUN | 0.812053 | 2.495865 | 2.434792 | 0.001784 | 0.002148 | 0.002206 |
| optional_test_ref_move.test | RUN | 0.194445 | 0.474487 | 0.677781 | 0.002036 | 0.002214 | 0.002166 |
| optional_test_ref_to_val.test | RUN | 0.225062 | 0.996241 | 1.006921 | 0.001928 | 0.001918 | 0.001890 |
| optional_test_inplace_factory.test | RUN | 0.235265 | 0.902870 | 0.870593 | 0.001669 | 0.002146 | 0.001824 |
| optional_test_io.test | RUN | 0.223133 | 0.970487 | 0.920678 | 0.002026 | 0.001808 | 0.002145 |
| optional_test_move.test | RUN | 0.207222 | 0.665104 | 0.818760 | 0.001789 | 0.002030 | 0.002072 |
| optional_test_noexcept_move.test | RUN | 0.123237 | 0.298758 | 0.403003 | 0.000798 | 0.000789 | 0.001654 |
| optional_test_cmp_none.test | RUN | 0.178903 | 0.471449 | 0.647081 | 0.002018 | 0.002170 | 0.002130 |
| optional_test_value_access.test | RUN | 0.216545 | 0.778900 | 0.888344 | 0.001854 | 0.002158 | 0.002021 |
| optional_test_emplace.test | RUN | 0.216774 | 0.781643 | 0.907927 | 0.001743 | 0.001775 | 0.001956 |
| optional_test_minimum_requirements.test | RUN | 0.196428 | 0.611689 | 0.780405 | 0.002076 | 0.002092 | 0.002080 |
| optional_test_msvc_bug_workaround.test | RUN | 0.178928 | 0.435380 | 0.651203 | 0.001892 | 0.001906 | 0.002112 |
| optional_test_member_T.test | RUN | 0.181482 | 0.426970 | 0.655258 | 0.001878 | 0.002108 | 0.001750 |
| optional_test_tc_base.test | RUN | 0.176243 | 0.442983 | 0.676921 | 0.002056 | 0.001992 | 0.002152 |
| optional_test_sfinae_friendly_ctor.test | COMPILE | 0.132878 | 0.303265 | 0.420496 | — | — | — |
| optional_test_path_assignment.test | COMPILE | 0.122602 | 0.304651 | 0.427301 | — | — | — |
| optional_test_fail_const_swap.test | COMPILE_FAIL | 0.122190 | 0.275799 | 0.355385 | — | — | — |
| optional_test_ref_convert_assign_const_int_prevented.test | COMPILE_FAIL | 0.167827 | 0.377921 | 0.632928 | — | — | — |
| optional_test_fail1.test | COMPILE_FAIL | 0.116034 | 0.282750 | 0.397895 | — | — | — |
| optional_test_fail3a.test | COMPILE_FAIL | 0.116587 | 0.288838 | 0.418746 | — | — | — |
| optional_test_fail3b.test | COMPILE_FAIL | 0.121578 | 0.278810 | 0.418563 | — | — | — |
| optional_test_ref_fail1.test | COMPILE_FAIL | 0.122658 | 0.277307 | 0.401812 | — | — | — |
| optional_test_ref_fail3.test | COMPILE_FAIL | 0.114747 | 0.277547 | 0.401250 | — | — | — |
| optional_test_ref_fail4.test | COMPILE_FAIL | 0.117572 | 0.278230 | 0.419264 | — | — | — |
| optional_test_ref_fail_convert_from_temporary_optional_T.test | COMPILE_FAIL | 0.116034 | 0.273140 | 0.398022 | — | — | — |
| optional_test_inplace_fail.test | COMPILE_FAIL | 0.196656 | 0.436411 | 0.683298 | — | — | — |
| optional_test_inplace_fail2.test | COMPILE_FAIL | 0.192562 | 0.435657 | 0.660202 | — | — | — |
| optional_test_fail_implicit_bool_convert.test | COMPILE_FAIL | 0.113761 | 0.285258 | 0.413530 | — | — | — |
| optional_test_fail_copying_a_moveable_type.test | COMPILE_FAIL | 0.119191 | 0.283379 | 0.419847 | — | — | — |
| optional_test_fail_optional_rvalue_ref.test | COMPILE_FAIL | 0.115677 | 0.270444 | 0.388478 | — | — | — |
| optional_test_ref_fail_init_from_Trefref.test | COMPILE_FAIL | 0.117029 | 0.268553 | 0.405106 | — | — | — |
| optional_test_ref_fail_init_from_Urefref.test | COMPILE_FAIL | 0.115824 | 0.265320 | 0.399071 | — | — | — |
| optional_test_ref_fail_assign_from_Trefref.test | COMPILE_FAIL | 0.120777 | 0.281703 | 0.402309 | — | — | — |
| optional_test_ref_fail_assign_from_Urefref.test | COMPILE_FAIL | 0.120015 | 0.269834 | 0.406239 | — | — | — |
| optional_test_fail_convert_from_null.test | COMPILE_FAIL | 0.115250 | 0.273570 | 0.395182 | — | — | — |
| optional_test_fail_explicit_convert_in_value_or.test | COMPILE_FAIL | 0.114900 | 0.273382 | 0.398282 | — | — | — |
| optional_test_fail_explicit_convert_in_value_or_call.test | COMPILE_FAIL | 0.118826 | 0.286468 | 0.402289 | — | — | — |
| optional_test_fail_io_without_io.test | COMPILE_FAIL | 0.163366 | 0.356379 | 0.590840 | — | — | — |
| optional_test_fail_none_io_without_io.test | COMPILE_FAIL | 0.127007 | 0.303688 | 0.474964 | — | — | — |
| optional_test_fail_convert_assign_of_enums.test | COMPILE_FAIL | 0.119959 | 0.276782 | 0.421450 | — | — | — |
| optional_test_static_properties.test | RUN | 0.284780 | 0.633601 | 1.066475 | 0.002044 | 0.001992 | 0.002158 |
| optional_test_maybe_uninitialized_warning.test | COMPILE | 0.125701 | 0.301306 | 0.429583 | — | — | — |
| optional_test_deleted_default_ctor.test | COMPILE | 0.130180 | 0.315009 | 0.459027 | — | — | — |
| optional_test_constructible_from_other.test | COMPILE | 0.123957 | 0.295764 | 0.428655 | — | — | — |
| optional_xconfig_NO_PROPER_ASSIGN_FROM_CONST_INT_pass.test | RUN | 0.143425 | 0.368035 | 0.579855 | 0.001774 | 0.001866 | 0.001675 |
| optional_xconfig_NO_PROPER_ASSIGN_FROM_CONST_INT_fail.test | RUN_FAIL | 0.141945 | 0.380454 | 0.571261 | 0.001699 | 0.002062 | 0.001661 |
| optional_xconfig_NO_PROPER_CONVERT_FROM_CONST_INT_pass.test | RUN | 0.143953 | 0.367123 | 0.521097 | 0.001771 | 0.001848 | 0.001671 |
| optional_xconfig_NO_PROPER_CONVERT_FROM_CONST_INT_fail.test | RUN_FAIL | 0.143994 | 0.380192 | 0.521738 | 0.001355 | 0.002160 | 0.002098 |
| optional_xconfig_NO_LEGAL_CONVERT_FROM_REF_pass.test | RUN | 0.120820 | 0.245601 | 0.367111 | 0.001322 | 0.001439 | 0.001423 |
| optional_xconfig_NO_LEGAL_CONVERT_FROM_REF_fail.test | COMPILE_FAIL | 0.061196 | 0.216308 | 0.348563 | — | — | — |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.994× | 0.987×, 1.001× | 0.993× |
| clang | 1.013× | 1.019×, 1.008× | 1.017× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1359 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/43750858933).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| optional_test.test | 10 | 0.001327s | 0.001307s | 0.001340s | byte equality observed |
| optional_test_assign.test | 10 | 0.001205s | 0.001211s | 0.001213s | byte equality observed |
| optional_test_cmp_none.test | 10 | 0.001235s | 0.001236s | 0.001224s | byte equality observed |
| optional_test_constructors.test | 10 | 0.001218s | 0.001280s | 0.001254s | byte equality observed |
| optional_test_conversions_from_U.test | 10 | 0.001239s | 0.001262s | 0.001213s | byte equality observed |
| optional_test_convert_assign.test | 10 | 0.001286s | 0.001270s | 0.001236s | byte equality observed |
| optional_test_convert_from_T.test | 10 | 0.001250s | 0.001252s | 0.001276s | byte equality observed |
| optional_test_emplace.test | 10 | 0.001276s | 0.001246s | 0.001235s | byte equality observed |
| optional_test_empty_braces.test | 10 | 0.001247s | 0.001240s | 0.001208s | byte equality observed |
| optional_test_flat_map.test | 10 | 0.001212s | 0.001240s | 0.001215s | byte equality observed |
| optional_test_hash.test | 10 | 0.001277s | 0.001252s | 0.001193s | byte equality observed |
| optional_test_inplace_factory.test | 10 | 0.001248s | 0.001246s | 0.001252s | byte equality observed |
| optional_test_io.test | 10 | 0.001262s | 0.001295s | 0.001273s | byte equality observed |
| optional_test_make_optional.test | 10 | 0.001260s | 0.001214s | 0.001202s | byte equality observed |
| optional_test_map.test | 10 | 0.001283s | 0.001237s | 0.001228s | byte equality observed |
| optional_test_member_T.test | 10 | 0.001219s | 0.001283s | 0.001200s | byte equality observed |
| optional_test_minimum_requirements.test | 10 | 0.001263s | 0.001280s | 0.001285s | byte equality observed |
| optional_test_move.test | 10 | 0.001282s | 0.001265s | 0.001230s | byte equality observed |
| optional_test_msvc_bug_workaround.test | 10 | 0.001244s | 0.001283s | 0.001214s | byte equality observed |
| optional_test_noexcept_move.test | 10 | 0.000572s | 0.000546s | 0.001168s | byte equality observed |
| optional_test_ranges_find.test | 10 | 0.001227s | 0.001197s | 0.001205s | byte equality observed |
| optional_test_ref_assign_const_int.test | 10 | 0.001253s | 0.001224s | 0.001273s | byte equality observed |
| optional_test_ref_assign_mutable_int.test | 10 | 0.001209s | 0.001233s | 0.001244s | byte equality observed |
| optional_test_ref_assign_portable_minimum.test | 10 | 0.001285s | 0.001244s | 0.001272s | byte equality observed |
| optional_test_ref_convert_assign_const_int.test | 10 | 0.001221s | 0.001250s | 0.001223s | byte equality observed |
| optional_test_ref_convert_assign_mutable_int.test | 10 | 0.001198s | 0.001242s | 0.001237s | byte equality observed |
| optional_test_ref_convert_assign_non_int.test | 10 | 0.001280s | 0.001224s | 0.001237s | byte equality observed |
| optional_test_ref_converting_ctor.test | 10 | 0.001231s | 0.001235s | 0.001287s | byte equality observed |
| optional_test_ref_move.test | 10 | 0.001218s | 0.001292s | 0.001222s | byte equality observed |
| optional_test_ref_portable_minimum.test | 10 | 0.001283s | 0.001291s | 0.001286s | byte equality observed |
| optional_test_ref_to_val.test | 10 | 0.001227s | 0.001283s | 0.001243s | byte equality observed |
| optional_test_static_properties.test | 10 | 0.001217s | 0.001229s | 0.001190s | byte equality observed |
| optional_test_swap.test | 10 | 0.001228s | 0.001203s | 0.001246s | byte equality observed |
| optional_test_tc_base.test | 10 | 0.001245s | 0.001216s | 0.001235s | byte equality observed |
| optional_test_tie.test | 10 | 0.001251s | 0.001216s | 0.001262s | byte equality observed |
| optional_test_value_access.test | 10 | 0.001287s | 0.001313s | 0.001288s | byte equality observed |
| optional_xconfig_NO_LEGAL_CONVERT_FROM_REF_pass.test | 10 | 0.001186s | 0.001192s | 0.001230s | byte equality observed |
| optional_xconfig_NO_PROPER_ASSIGN_FROM_CONST_INT_pass.test | 10 | 0.001231s | 0.001223s | 0.001214s | byte equality observed |
| optional_xconfig_NO_PROPER_CONVERT_FROM_CONST_INT_pass.test | 10 | 0.001206s | 0.001210s | 0.001223s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/43750858933).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
