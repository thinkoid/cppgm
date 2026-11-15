# libs/optional/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| optional_test.test | RUN | 0.211748 | 1.305190 | 0.743061 | 0.001085 | 0.001260 | 0.001101 |
| optional_test_assign.test | RUN | 0.102276 | 0.268551 | 0.331110 | 0.000993 | 0.001293 | 0.001053 |
| optional_test_swap.test | RUN | 0.112518 | 0.335203 | 0.364546 | 0.001000 | 0.001204 | 0.001000 |
| optional_test_constexpr.test | COMPILE | 0.074260 | 0.180310 | 0.209346 | — | — | — |
| optional_test_wuninitialized.test | COMPILE | 0.106681 | 0.449158 | 0.339654 | — | — | — |
| optional_test_fwd_header.test | COMPILE | 0.068650 | 0.168371 | 0.199967 | — | — | — |
| optional_test_conversions_from_U.test | RUN | 0.115888 | 0.341276 | 0.408349 | 0.001086 | 0.001343 | 0.001011 |
| optional_test_constructors.test | RUN | 0.245848 | 1.288947 | 1.061783 | 0.001046 | 0.001412 | 0.001076 |
| optional_test_convert_from_T.test | RUN | 0.105266 | 0.281699 | 0.344926 | 0.001030 | 0.001274 | 0.000937 |
| optional_test_convert_assign.test | RUN | 0.102753 | 0.276259 | 0.317865 | 0.001072 | 0.001260 | 0.001021 |
| optional_test_empty_braces.test | RUN | 0.102163 | 0.267991 | 0.342614 | 0.001055 | 0.001133 | 0.001056 |
| optional_test_make_optional.test | RUN | 0.143831 | 0.422384 | 0.531216 | 0.001144 | 0.001478 | 0.000998 |
| optional_test_flat_map.test | RUN | 0.156235 | 0.495877 | 0.606132 | 0.001126 | 0.001074 | 0.001021 |
| optional_test_hash.test | RUN | 0.126548 | 0.404477 | 0.436777 | 0.000932 | 0.001132 | 0.001100 |
| optional_test_map.test | RUN | 0.162553 | 0.472915 | 0.630972 | 0.001061 | 0.001175 | 0.001004 |
| optional_test_tie.test | RUN | 0.107696 | 0.303000 | 0.347608 | 0.001051 | 0.001053 | 0.001031 |
| optional_test_ranges_find.test | RUN | 0.097811 | 0.263710 | 0.314150 | 0.000972 | 0.001227 | 0.000998 |
| optional_test_ref_assign_portable_minimum.test | RUN | 0.131825 | 0.799484 | 0.481981 | 0.001075 | 0.001116 | 0.001037 |
| optional_test_ref_assign_mutable_int.test | RUN | 0.106250 | 0.329884 | 0.353897 | 0.001111 | 0.001305 | 0.001004 |
| optional_test_ref_assign_const_int.test | RUN | 0.104570 | 0.340681 | 0.357408 | 0.001140 | 0.001164 | 0.001021 |
| optional_test_ref_converting_ctor.test | RUN | 0.116542 | 0.479920 | 0.389964 | 0.001069 | 0.001124 | 0.001008 |
| optional_test_ref_convert_assign_non_int.test | RUN | 0.103913 | 0.316138 | 0.350940 | 0.000966 | 0.001157 | 0.001039 |
| optional_test_ref_convert_assign_mutable_int.test | RUN | 0.101218 | 0.288586 | 0.325725 | 0.001035 | 0.001296 | 0.001001 |
| optional_test_ref_convert_assign_const_int.test | RUN | 0.098593 | 0.284785 | 0.327057 | 0.001112 | 0.001116 | 0.001028 |
| optional_test_ref_portable_minimum.test | RUN | 0.503567 | 1.588565 | 1.226347 | 0.001090 | 0.001326 | 0.000973 |
| optional_test_ref_move.test | RUN | 0.108288 | 0.303791 | 0.349673 | 0.001033 | 0.001516 | 0.001028 |
| optional_test_ref_to_val.test | RUN | 0.128040 | 0.618922 | 0.488151 | 0.001048 | 0.001119 | 0.001009 |
| optional_test_inplace_factory.test | RUN | 0.130072 | 0.570251 | 0.459172 | 0.001096 | 0.001234 | 0.001008 |
| optional_test_io.test | RUN | 0.130231 | 0.635445 | 0.483674 | 0.001018 | 0.001332 | 0.001076 |
| optional_test_move.test | RUN | 0.121200 | 0.418492 | 0.420036 | 0.000958 | 0.001153 | 0.001024 |
| optional_test_noexcept_move.test | RUN | 0.072815 | 0.173973 | 0.195591 | 0.000450 | 0.000521 | 0.000997 |
| optional_test_cmp_none.test | RUN | 0.101634 | 0.289610 | 0.333803 | 0.001043 | 0.001194 | 0.001046 |
| optional_test_value_access.test | RUN | 0.124115 | 0.499395 | 0.452353 | 0.001094 | 0.001338 | 0.001115 |
| optional_test_emplace.test | RUN | 0.123929 | 0.490763 | 0.460053 | 0.001091 | 0.001191 | 0.001094 |
| optional_test_minimum_requirements.test | RUN | 0.117214 | 0.388790 | 0.397006 | 0.001062 | 0.001121 | 0.001033 |
| optional_test_msvc_bug_workaround.test | RUN | 0.100985 | 0.263353 | 0.314399 | 0.000982 | 0.001195 | 0.001055 |
| optional_test_member_T.test | RUN | 0.100146 | 0.261017 | 0.320413 | 0.000981 | 0.001054 | 0.000951 |
| optional_test_tc_base.test | RUN | 0.097121 | 0.269183 | 0.330124 | 0.001019 | 0.001272 | 0.001013 |
| optional_test_sfinae_friendly_ctor.test | COMPILE | 0.077143 | 0.175986 | 0.210799 | — | — | — |
| optional_test_path_assignment.test | COMPILE | 0.068626 | 0.177744 | 0.201919 | — | — | — |
| optional_test_fail_const_swap.test | COMPILE_FAIL | 0.064233 | 0.159617 | 0.189956 | — | — | — |
| optional_test_ref_convert_assign_const_int_prevented.test | COMPILE_FAIL | 0.091390 | 0.223489 | 0.290958 | — | — | — |
| optional_test_fail1.test | COMPILE_FAIL | 0.064806 | 0.164361 | 0.186184 | — | — | — |
| optional_test_fail3a.test | COMPILE_FAIL | 0.063763 | 0.160979 | 0.191906 | — | — | — |
| optional_test_fail3b.test | COMPILE_FAIL | 0.066512 | 0.167847 | 0.195742 | — | — | — |
| optional_test_ref_fail1.test | COMPILE_FAIL | 0.065521 | 0.157004 | 0.190947 | — | — | — |
| optional_test_ref_fail3.test | COMPILE_FAIL | 0.063791 | 0.158536 | 0.188740 | — | — | — |
| optional_test_ref_fail4.test | COMPILE_FAIL | 0.064594 | 0.162703 | 0.187976 | — | — | — |
| optional_test_ref_fail_convert_from_temporary_optional_T.test | COMPILE_FAIL | 0.064007 | 0.165018 | 0.188027 | — | — | — |
| optional_test_inplace_fail.test | COMPILE_FAIL | 0.107371 | 0.256695 | 0.327755 | — | — | — |
| optional_test_inplace_fail2.test | COMPILE_FAIL | 0.107870 | 0.254886 | 0.327208 | — | — | — |
| optional_test_fail_implicit_bool_convert.test | COMPILE_FAIL | 0.063538 | 0.160881 | 0.186823 | — | — | — |
| optional_test_fail_copying_a_moveable_type.test | COMPILE_FAIL | 0.065350 | 0.163792 | 0.192739 | — | — | — |
| optional_test_fail_optional_rvalue_ref.test | COMPILE_FAIL | 0.063122 | 0.159225 | 0.181177 | — | — | — |
| optional_test_ref_fail_init_from_Trefref.test | COMPILE_FAIL | 0.064608 | 0.158073 | 0.187938 | — | — | — |
| optional_test_ref_fail_init_from_Urefref.test | COMPILE_FAIL | 0.064451 | 0.155330 | 0.186964 | — | — | — |
| optional_test_ref_fail_assign_from_Trefref.test | COMPILE_FAIL | 0.065574 | 0.161475 | 0.186529 | — | — | — |
| optional_test_ref_fail_assign_from_Urefref.test | COMPILE_FAIL | 0.066354 | 0.160317 | 0.183990 | — | — | — |
| optional_test_fail_convert_from_null.test | COMPILE_FAIL | 0.060895 | 0.156845 | 0.187632 | — | — | — |
| optional_test_fail_explicit_convert_in_value_or.test | COMPILE_FAIL | 0.066972 | 0.156958 | 0.188045 | — | — | — |
| optional_test_fail_explicit_convert_in_value_or_call.test | COMPILE_FAIL | 0.063013 | 0.162418 | 0.186628 | — | — | — |
| optional_test_fail_io_without_io.test | COMPILE_FAIL | 0.090508 | 0.216267 | 0.281158 | — | — | — |
| optional_test_fail_none_io_without_io.test | COMPILE_FAIL | 0.069332 | 0.177571 | 0.234837 | — | — | — |
| optional_test_fail_convert_assign_of_enums.test | COMPILE_FAIL | 0.064584 | 0.162851 | 0.195374 | — | — | — |
| optional_test_static_properties.test | RUN | 0.154299 | 0.374729 | 0.489130 | 0.001071 | 0.001224 | 0.001053 |
| optional_test_maybe_uninitialized_warning.test | COMPILE | 0.067510 | 0.175645 | 0.205679 | — | — | — |
| optional_test_deleted_default_ctor.test | COMPILE | 0.071216 | 0.180654 | 0.212111 | — | — | — |
| optional_test_constructible_from_other.test | COMPILE | 0.067612 | 0.170130 | 0.198269 | — | — | — |
| optional_xconfig_NO_PROPER_ASSIGN_FROM_CONST_INT_pass.test | RUN | 0.080054 | 0.222912 | 0.275994 | 0.001051 | 0.001282 | 0.001061 |
| optional_xconfig_NO_PROPER_ASSIGN_FROM_CONST_INT_fail.test | RUN_FAIL | 0.078310 | 0.225924 | 0.266715 | 0.001072 | 0.001094 | 0.001058 |
| optional_xconfig_NO_PROPER_CONVERT_FROM_CONST_INT_pass.test | RUN | 0.079282 | 0.219882 | 0.275932 | 0.000916 | 0.001075 | 0.000929 |
| optional_xconfig_NO_PROPER_CONVERT_FROM_CONST_INT_fail.test | RUN_FAIL | 0.081399 | 0.231039 | 0.266263 | 0.001060 | 0.001054 | 0.000765 |
| optional_xconfig_NO_LEGAL_CONVERT_FROM_REF_pass.test | RUN | 0.063773 | 0.140738 | 0.202047 | 0.000757 | 0.000717 | 0.000731 |
| optional_xconfig_NO_LEGAL_CONVERT_FROM_REF_fail.test | COMPILE_FAIL | 0.037170 | 0.129088 | 0.198625 | — | — | — |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 1.003× | 1.006×, 1.001× | 0.988× |
| clang | 1.020× | 1.021×, 1.019× | 1.002× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1362 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43670794197).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| optional_test.test | 10 | 0.000848s | 0.000857s | 0.000840s | byte equality observed |
| optional_test_assign.test | 10 | 0.000801s | 0.000830s | 0.000815s | byte equality observed |
| optional_test_cmp_none.test | 10 | 0.000803s | 0.000787s | 0.000838s | byte equality observed |
| optional_test_constructors.test | 10 | 0.000805s | 0.000828s | 0.000822s | byte equality observed |
| optional_test_conversions_from_U.test | 10 | 0.000814s | 0.000836s | 0.000802s | byte equality observed |
| optional_test_convert_assign.test | 10 | 0.000810s | 0.000813s | 0.000818s | byte equality observed |
| optional_test_convert_from_T.test | 10 | 0.000810s | 0.000809s | 0.000823s | byte equality observed |
| optional_test_emplace.test | 10 | 0.000821s | 0.000846s | 0.000855s | byte equality observed |
| optional_test_empty_braces.test | 10 | 0.000786s | 0.000813s | 0.000821s | byte equality observed |
| optional_test_flat_map.test | 10 | 0.000799s | 0.000795s | 0.000801s | byte equality observed |
| optional_test_hash.test | 10 | 0.000793s | 0.000819s | 0.000789s | byte equality observed |
| optional_test_inplace_factory.test | 10 | 0.000801s | 0.000818s | 0.000798s | byte equality observed |
| optional_test_io.test | 10 | 0.000846s | 0.000827s | 0.000802s | byte equality observed |
| optional_test_make_optional.test | 10 | 0.000826s | 0.000812s | 0.000790s | byte equality observed |
| optional_test_map.test | 10 | 0.000807s | 0.000851s | 0.000814s | byte equality observed |
| optional_test_member_T.test | 10 | 0.000801s | 0.000831s | 0.000802s | byte equality observed |
| optional_test_minimum_requirements.test | 10 | 0.000834s | 0.000850s | 0.000840s | byte equality observed |
| optional_test_move.test | 10 | 0.000807s | 0.000799s | 0.000820s | byte equality observed |
| optional_test_msvc_bug_workaround.test | 10 | 0.000796s | 0.000808s | 0.000826s | byte equality observed |
| optional_test_noexcept_move.test | 10 | 0.000363s | 0.000364s | 0.000783s | byte equality observed |
| optional_test_ranges_find.test | 10 | 0.000820s | 0.000796s | 0.000812s | byte equality observed |
| optional_test_ref_assign_const_int.test | 10 | 0.000793s | 0.000812s | 0.000792s | byte equality observed |
| optional_test_ref_assign_mutable_int.test | 10 | 0.000804s | 0.000766s | 0.000789s | byte equality observed |
| optional_test_ref_assign_portable_minimum.test | 10 | 0.000817s | 0.000818s | 0.000797s | byte equality observed |
| optional_test_ref_convert_assign_const_int.test | 10 | 0.000812s | 0.000795s | 0.000783s | byte equality observed |
| optional_test_ref_convert_assign_mutable_int.test | 10 | 0.000792s | 0.000824s | 0.000813s | byte equality observed |
| optional_test_ref_convert_assign_non_int.test | 10 | 0.000809s | 0.000817s | 0.000815s | byte equality observed |
| optional_test_ref_converting_ctor.test | 10 | 0.000799s | 0.000823s | 0.000829s | byte equality observed |
| optional_test_ref_move.test | 10 | 0.000817s | 0.000823s | 0.000827s | byte equality observed |
| optional_test_ref_portable_minimum.test | 10 | 0.000856s | 0.000865s | 0.000855s | byte equality observed |
| optional_test_ref_to_val.test | 10 | 0.000816s | 0.000814s | 0.000844s | byte equality observed |
| optional_test_static_properties.test | 10 | 0.000812s | 0.000823s | 0.000843s | byte equality observed |
| optional_test_swap.test | 10 | 0.000827s | 0.000827s | 0.000833s | byte equality observed |
| optional_test_tc_base.test | 10 | 0.000807s | 0.000809s | 0.000813s | byte equality observed |
| optional_test_tie.test | 10 | 0.000816s | 0.000824s | 0.000819s | byte equality observed |
| optional_test_value_access.test | 10 | 0.000837s | 0.000846s | 0.000828s | byte equality observed |
| optional_xconfig_NO_LEGAL_CONVERT_FROM_REF_pass.test | 10 | 0.000789s | 0.000763s | 0.000801s | byte equality observed |
| optional_xconfig_NO_PROPER_ASSIGN_FROM_CONST_INT_pass.test | 10 | 0.000801s | 0.000795s | 0.000830s | byte equality observed |
| optional_xconfig_NO_PROPER_CONVERT_FROM_CONST_INT_pass.test | 10 | 0.000810s | 0.000809s | 0.000807s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43670794197).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
