# libs/optional/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| optional_test.test | RUN | 0.209845 | 1.311789 | 0.747601 | 0.001176 | 0.001350 | 0.001372 |
| optional_test_assign.test | RUN | 0.105191 | 0.269423 | 0.324946 | 0.001196 | 0.001313 | 0.001187 |
| optional_test_swap.test | RUN | 0.114861 | 0.336358 | 0.373648 | 0.001142 | 0.001236 | 0.001143 |
| optional_test_constexpr.test | COMPILE | 0.075638 | 0.180903 | 0.213734 | — | — | — |
| optional_test_wuninitialized.test | COMPILE | 0.112265 | 0.447364 | 0.346122 | — | — | — |
| optional_test_fwd_header.test | COMPILE | 0.072011 | 0.173606 | 0.205130 | — | — | — |
| optional_test_conversions_from_U.test | RUN | 0.115420 | 0.347525 | 0.401073 | 0.001191 | 0.001365 | 0.001221 |
| optional_test_constructors.test | RUN | 0.250758 | 1.309552 | 1.081200 | 0.001020 | 0.001379 | 0.001238 |
| optional_test_convert_from_T.test | RUN | 0.109258 | 0.285165 | 0.361843 | 0.001055 | 0.001375 | 0.001130 |
| optional_test_convert_assign.test | RUN | 0.108898 | 0.280707 | 0.336136 | 0.001104 | 0.001252 | 0.001113 |
| optional_test_empty_braces.test | RUN | 0.107374 | 0.276368 | 0.333450 | 0.001248 | 0.001196 | 0.001130 |
| optional_test_make_optional.test | RUN | 0.146463 | 0.432595 | 0.544888 | 0.001331 | 0.001265 | 0.001193 |
| optional_test_flat_map.test | RUN | 0.156502 | 0.504198 | 0.614010 | 0.001142 | 0.001125 | 0.001217 |
| optional_test_hash.test | RUN | 0.129232 | 0.405422 | 0.456418 | 0.001056 | 0.001152 | 0.001118 |
| optional_test_map.test | RUN | 0.164456 | 0.477444 | 0.630088 | 0.001262 | 0.001205 | 0.001159 |
| optional_test_tie.test | RUN | 0.109633 | 0.307580 | 0.366972 | 0.001110 | 0.001156 | 0.001125 |
| optional_test_ranges_find.test | RUN | 0.105780 | 0.261629 | 0.323911 | 0.001172 | 0.001044 | 0.001061 |
| optional_test_ref_assign_portable_minimum.test | RUN | 0.136949 | 0.791027 | 0.479135 | 0.000921 | 0.001134 | 0.001175 |
| optional_test_ref_assign_mutable_int.test | RUN | 0.105693 | 0.333488 | 0.358953 | 0.001124 | 0.001157 | 0.001273 |
| optional_test_ref_assign_const_int.test | RUN | 0.111176 | 0.342907 | 0.363940 | 0.001035 | 0.001134 | 0.001217 |
| optional_test_ref_converting_ctor.test | RUN | 0.124437 | 0.482128 | 0.402423 | 0.001093 | 0.001239 | 0.001070 |
| optional_test_ref_convert_assign_non_int.test | RUN | 0.108943 | 0.322368 | 0.364797 | 0.000948 | 0.001397 | 0.001183 |
| optional_test_ref_convert_assign_mutable_int.test | RUN | 0.107434 | 0.293834 | 0.335001 | 0.001161 | 0.001314 | 0.001208 |
| optional_test_ref_convert_assign_const_int.test | RUN | 0.097750 | 0.290841 | 0.330326 | 0.001045 | 0.001263 | 0.001120 |
| optional_test_ref_portable_minimum.test | RUN | 0.502892 | 1.583314 | 1.223693 | 0.000922 | 0.001243 | 0.001110 |
| optional_test_ref_move.test | RUN | 0.115213 | 0.300682 | 0.351652 | 0.001319 | 0.001365 | 0.001278 |
| optional_test_ref_to_val.test | RUN | 0.139836 | 0.629724 | 0.500997 | 0.001137 | 0.001245 | 0.001246 |
| optional_test_inplace_factory.test | RUN | 0.137333 | 0.573738 | 0.447018 | 0.001146 | 0.001208 | 0.001024 |
| optional_test_io.test | RUN | 0.135666 | 0.639088 | 0.476021 | 0.001096 | 0.001378 | 0.001137 |
| optional_test_move.test | RUN | 0.126962 | 0.424762 | 0.416927 | 0.001171 | 0.001231 | 0.001108 |
| optional_test_noexcept_move.test | RUN | 0.072838 | 0.180564 | 0.206365 | 0.000479 | 0.000464 | 0.001175 |
| optional_test_cmp_none.test | RUN | 0.106610 | 0.291749 | 0.332899 | 0.001012 | 0.001306 | 0.001120 |
| optional_test_value_access.test | RUN | 0.130110 | 0.506140 | 0.464921 | 0.001100 | 0.001284 | 0.001277 |
| optional_test_emplace.test | RUN | 0.130468 | 0.495397 | 0.465893 | 0.001040 | 0.001104 | 0.001117 |
| optional_test_minimum_requirements.test | RUN | 0.117327 | 0.389801 | 0.402074 | 0.001180 | 0.001146 | 0.001102 |
| optional_test_msvc_bug_workaround.test | RUN | 0.105002 | 0.269829 | 0.332775 | 0.001125 | 0.001182 | 0.001183 |
| optional_test_member_T.test | RUN | 0.105784 | 0.264781 | 0.326539 | 0.001098 | 0.001328 | 0.001181 |
| optional_test_tc_base.test | RUN | 0.103484 | 0.269558 | 0.337532 | 0.001092 | 0.001304 | 0.001092 |
| optional_test_sfinae_friendly_ctor.test | COMPILE | 0.078169 | 0.184641 | 0.210558 | — | — | — |
| optional_test_path_assignment.test | COMPILE | 0.071674 | 0.179164 | 0.204287 | — | — | — |
| optional_test_fail_const_swap.test | COMPILE_FAIL | 0.069623 | 0.165277 | 0.192321 | — | — | — |
| optional_test_ref_convert_assign_const_int_prevented.test | COMPILE_FAIL | 0.081598 | 0.232329 | 0.301587 | — | — | — |
| optional_test_fail1.test | COMPILE_FAIL | 0.061145 | 0.161377 | 0.195024 | — | — | — |
| optional_test_fail3a.test | COMPILE_FAIL | 0.066775 | 0.169086 | 0.196466 | — | — | — |
| optional_test_fail3b.test | COMPILE_FAIL | 0.069076 | 0.162994 | 0.196237 | — | — | — |
| optional_test_ref_fail1.test | COMPILE_FAIL | 0.066715 | 0.166400 | 0.196982 | — | — | — |
| optional_test_ref_fail3.test | COMPILE_FAIL | 0.066977 | 0.162759 | 0.194911 | — | — | — |
| optional_test_ref_fail4.test | COMPILE_FAIL | 0.069299 | 0.165315 | 0.192689 | — | — | — |
| optional_test_ref_fail_convert_from_temporary_optional_T.test | COMPILE_FAIL | 0.064935 | 0.160813 | 0.190108 | — | — | — |
| optional_test_inplace_fail.test | COMPILE_FAIL | 0.111540 | 0.266452 | 0.336959 | — | — | — |
| optional_test_inplace_fail2.test | COMPILE_FAIL | 0.112558 | 0.261786 | 0.333133 | — | — | — |
| optional_test_fail_implicit_bool_convert.test | COMPILE_FAIL | 0.065237 | 0.168748 | 0.191368 | — | — | — |
| optional_test_fail_copying_a_moveable_type.test | COMPILE_FAIL | 0.068784 | 0.167511 | 0.195567 | — | — | — |
| optional_test_fail_optional_rvalue_ref.test | COMPILE_FAIL | 0.062086 | 0.163229 | 0.187290 | — | — | — |
| optional_test_ref_fail_init_from_Trefref.test | COMPILE_FAIL | 0.070482 | 0.166006 | 0.190134 | — | — | — |
| optional_test_ref_fail_init_from_Urefref.test | COMPILE_FAIL | 0.067696 | 0.162766 | 0.191964 | — | — | — |
| optional_test_ref_fail_assign_from_Trefref.test | COMPILE_FAIL | 0.062863 | 0.164273 | 0.193028 | — | — | — |
| optional_test_ref_fail_assign_from_Urefref.test | COMPILE_FAIL | 0.067639 | 0.165722 | 0.192862 | — | — | — |
| optional_test_fail_convert_from_null.test | COMPILE_FAIL | 0.062965 | 0.165035 | 0.187359 | — | — | — |
| optional_test_fail_explicit_convert_in_value_or.test | COMPILE_FAIL | 0.068299 | 0.160772 | 0.190823 | — | — | — |
| optional_test_fail_explicit_convert_in_value_or_call.test | COMPILE_FAIL | 0.068869 | 0.160169 | 0.189542 | — | — | — |
| optional_test_fail_io_without_io.test | COMPILE_FAIL | 0.092884 | 0.214761 | 0.288219 | — | — | — |
| optional_test_fail_none_io_without_io.test | COMPILE_FAIL | 0.075713 | 0.180918 | 0.232042 | — | — | — |
| optional_test_fail_convert_assign_of_enums.test | COMPILE_FAIL | 0.070217 | 0.165577 | 0.197073 | — | — | — |
| optional_test_static_properties.test | RUN | 0.155862 | 0.375654 | 0.503665 | 0.001083 | 0.000901 | 0.001189 |
| optional_test_maybe_uninitialized_warning.test | COMPILE | 0.072445 | 0.182100 | 0.211643 | — | — | — |
| optional_test_deleted_default_ctor.test | COMPILE | 0.073886 | 0.183884 | 0.222189 | — | — | — |
| optional_test_constructible_from_other.test | COMPILE | 0.069612 | 0.175186 | 0.203133 | — | — | — |
| optional_xconfig_NO_PROPER_ASSIGN_FROM_CONST_INT_pass.test | RUN | 0.084219 | 0.225303 | 0.282374 | 0.001210 | 0.001183 | 0.001243 |
| optional_xconfig_NO_PROPER_ASSIGN_FROM_CONST_INT_fail.test | RUN_FAIL | 0.081737 | 0.226957 | 0.280286 | 0.001036 | 0.001038 | 0.001137 |
| optional_xconfig_NO_PROPER_CONVERT_FROM_CONST_INT_pass.test | RUN | 0.083544 | 0.222130 | 0.274538 | 0.001283 | 0.001058 | 0.001129 |
| optional_xconfig_NO_PROPER_CONVERT_FROM_CONST_INT_fail.test | RUN_FAIL | 0.085375 | 0.229445 | 0.278848 | 0.000788 | 0.001151 | 0.000822 |
| optional_xconfig_NO_LEGAL_CONVERT_FROM_REF_pass.test | RUN | 0.059055 | 0.141916 | 0.211417 | 0.000762 | 0.000845 | 0.000802 |
| optional_xconfig_NO_LEGAL_CONVERT_FROM_REF_fail.test | COMPILE_FAIL | 0.039649 | 0.131212 | 0.201354 | — | — | — |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 1.000× | 1.002×, 0.998× | 0.993× |
| clang | 1.008× | 1.009×, 1.007× | 0.991× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1363 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/43801643681).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| optional_test.test | 10 | 0.000843s | 0.000863s | 0.000844s | byte equality observed |
| optional_test_assign.test | 10 | 0.000820s | 0.000824s | 0.000792s | byte equality observed |
| optional_test_cmp_none.test | 10 | 0.000797s | 0.000793s | 0.000812s | byte equality observed |
| optional_test_constructors.test | 10 | 0.000823s | 0.000791s | 0.000801s | byte equality observed |
| optional_test_conversions_from_U.test | 10 | 0.000826s | 0.000803s | 0.000793s | byte equality observed |
| optional_test_convert_assign.test | 10 | 0.000801s | 0.000812s | 0.000819s | byte equality observed |
| optional_test_convert_from_T.test | 10 | 0.000784s | 0.000785s | 0.000799s | byte equality observed |
| optional_test_emplace.test | 10 | 0.000801s | 0.000820s | 0.000795s | byte equality observed |
| optional_test_empty_braces.test | 10 | 0.000788s | 0.000805s | 0.000807s | byte equality observed |
| optional_test_flat_map.test | 10 | 0.000795s | 0.000801s | 0.000814s | byte equality observed |
| optional_test_hash.test | 10 | 0.000821s | 0.000807s | 0.000818s | byte equality observed |
| optional_test_inplace_factory.test | 10 | 0.000833s | 0.000807s | 0.000808s | byte equality observed |
| optional_test_io.test | 10 | 0.000832s | 0.000864s | 0.000817s | byte equality observed |
| optional_test_make_optional.test | 10 | 0.000809s | 0.000833s | 0.000817s | byte equality observed |
| optional_test_map.test | 10 | 0.000807s | 0.000805s | 0.000779s | byte equality observed |
| optional_test_member_T.test | 10 | 0.000807s | 0.000800s | 0.000802s | byte equality observed |
| optional_test_minimum_requirements.test | 10 | 0.000843s | 0.000838s | 0.000821s | byte equality observed |
| optional_test_move.test | 10 | 0.000827s | 0.000821s | 0.000811s | byte equality observed |
| optional_test_msvc_bug_workaround.test | 10 | 0.000790s | 0.000781s | 0.000787s | byte equality observed |
| optional_test_noexcept_move.test | 10 | 0.000354s | 0.000359s | 0.000793s | byte equality observed |
| optional_test_ranges_find.test | 10 | 0.000793s | 0.000787s | 0.000771s | byte equality observed |
| optional_test_ref_assign_const_int.test | 10 | 0.000790s | 0.000798s | 0.000789s | byte equality observed |
| optional_test_ref_assign_mutable_int.test | 10 | 0.000798s | 0.000812s | 0.000790s | byte equality observed |
| optional_test_ref_assign_portable_minimum.test | 10 | 0.000795s | 0.000810s | 0.000814s | byte equality observed |
| optional_test_ref_convert_assign_const_int.test | 10 | 0.000802s | 0.000797s | 0.000785s | byte equality observed |
| optional_test_ref_convert_assign_mutable_int.test | 10 | 0.000787s | 0.000785s | 0.000804s | byte equality observed |
| optional_test_ref_convert_assign_non_int.test | 10 | 0.000804s | 0.000790s | 0.000818s | byte equality observed |
| optional_test_ref_converting_ctor.test | 10 | 0.000799s | 0.000812s | 0.000837s | byte equality observed |
| optional_test_ref_move.test | 10 | 0.000819s | 0.000795s | 0.000831s | byte equality observed |
| optional_test_ref_portable_minimum.test | 10 | 0.000825s | 0.000832s | 0.000811s | byte equality observed |
| optional_test_ref_to_val.test | 10 | 0.000792s | 0.000811s | 0.000778s | byte equality observed |
| optional_test_static_properties.test | 10 | 0.000798s | 0.000810s | 0.000802s | byte equality observed |
| optional_test_swap.test | 10 | 0.000800s | 0.000829s | 0.000758s | byte equality observed |
| optional_test_tc_base.test | 10 | 0.000788s | 0.000818s | 0.000783s | byte equality observed |
| optional_test_tie.test | 10 | 0.000792s | 0.000800s | 0.000782s | byte equality observed |
| optional_test_value_access.test | 10 | 0.000847s | 0.000829s | 0.000810s | byte equality observed |
| optional_xconfig_NO_LEGAL_CONVERT_FROM_REF_pass.test | 10 | 0.000759s | 0.000788s | 0.000787s | byte equality observed |
| optional_xconfig_NO_PROPER_ASSIGN_FROM_CONST_INT_pass.test | 10 | 0.000783s | 0.000798s | 0.000777s | byte equality observed |
| optional_xconfig_NO_PROPER_CONVERT_FROM_CONST_INT_pass.test | 10 | 0.000775s | 0.000798s | 0.000778s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/43801643681).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
