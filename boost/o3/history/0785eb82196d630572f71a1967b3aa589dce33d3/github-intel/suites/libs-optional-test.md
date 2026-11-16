# libs/optional/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| optional_test.test | RUN | 0.208945 | 1.334383 | 0.756328 | 0.001222 | 0.001478 | 0.001378 |
| optional_test_assign.test | RUN | 0.105148 | 0.276698 | 0.337938 | 0.001194 | 0.001297 | 0.001409 |
| optional_test_swap.test | RUN | 0.113044 | 0.347190 | 0.368145 | 0.001092 | 0.001348 | 0.000920 |
| optional_test_constexpr.test | COMPILE | 0.075040 | 0.183724 | 0.217984 | — | — | — |
| optional_test_wuninitialized.test | COMPILE | 0.114696 | 0.453273 | 0.361173 | — | — | — |
| optional_test_fwd_header.test | COMPILE | 0.073538 | 0.184758 | 0.211963 | — | — | — |
| optional_test_conversions_from_U.test | RUN | 0.122678 | 0.354343 | 0.417132 | 0.001439 | 0.001444 | 0.001149 |
| optional_test_constructors.test | RUN | 0.251540 | 1.337602 | 1.075461 | 0.001056 | 0.001301 | 0.001280 |
| optional_test_convert_from_T.test | RUN | 0.107018 | 0.288894 | 0.356135 | 0.001074 | 0.001343 | 0.001209 |
| optional_test_convert_assign.test | RUN | 0.107354 | 0.279674 | 0.351536 | 0.001150 | 0.001218 | 0.001078 |
| optional_test_empty_braces.test | RUN | 0.110410 | 0.279422 | 0.332632 | 0.001272 | 0.001512 | 0.001301 |
| optional_test_make_optional.test | RUN | 0.152241 | 0.436651 | 0.535371 | 0.001134 | 0.001291 | 0.001204 |
| optional_test_flat_map.test | RUN | 0.166495 | 0.516246 | 0.619417 | 0.001076 | 0.001268 | 0.001142 |
| optional_test_hash.test | RUN | 0.134293 | 0.411823 | 0.437652 | 0.001211 | 0.001374 | 0.001197 |
| optional_test_map.test | RUN | 0.169256 | 0.498952 | 0.642426 | 0.001396 | 0.001450 | 0.001097 |
| optional_test_tie.test | RUN | 0.117171 | 0.312915 | 0.361798 | 0.001182 | 0.001237 | 0.001257 |
| optional_test_ranges_find.test | RUN | 0.104823 | 0.269126 | 0.320171 | 0.001222 | 0.001232 | 0.001119 |
| optional_test_ref_assign_portable_minimum.test | RUN | 0.135751 | 0.819606 | 0.477644 | 0.001109 | 0.001290 | 0.001165 |
| optional_test_ref_assign_mutable_int.test | RUN | 0.112168 | 0.336718 | 0.357472 | 0.001351 | 0.001362 | 0.001111 |
| optional_test_ref_assign_const_int.test | RUN | 0.114126 | 0.347987 | 0.365320 | 0.001104 | 0.001394 | 0.001150 |
| optional_test_ref_converting_ctor.test | RUN | 0.122241 | 0.487814 | 0.401994 | 0.001168 | 0.001457 | 0.001106 |
| optional_test_ref_convert_assign_non_int.test | RUN | 0.111980 | 0.324291 | 0.363852 | 0.001092 | 0.001316 | 0.001261 |
| optional_test_ref_convert_assign_mutable_int.test | RUN | 0.109368 | 0.295460 | 0.341839 | 0.001144 | 0.001289 | 0.001186 |
| optional_test_ref_convert_assign_const_int.test | RUN | 0.107979 | 0.294805 | 0.336157 | 0.001182 | 0.001220 | 0.001350 |
| optional_test_ref_portable_minimum.test | RUN | 0.469398 | 1.613902 | 1.242350 | 0.001286 | 0.001234 | 0.001220 |
| optional_test_ref_move.test | RUN | 0.115223 | 0.304895 | 0.366740 | 0.001137 | 0.001292 | 0.001116 |
| optional_test_ref_to_val.test | RUN | 0.142901 | 0.638009 | 0.505848 | 0.001087 | 0.001209 | 0.001128 |
| optional_test_inplace_factory.test | RUN | 0.135319 | 0.582701 | 0.462885 | 0.001153 | 0.001177 | 0.001247 |
| optional_test_io.test | RUN | 0.137773 | 0.661011 | 0.470082 | 0.001141 | 0.001257 | 0.001242 |
| optional_test_move.test | RUN | 0.130740 | 0.439600 | 0.413429 | 0.001193 | 0.001330 | 0.001062 |
| optional_test_noexcept_move.test | RUN | 0.076949 | 0.183534 | 0.217454 | 0.000538 | 0.000657 | 0.001008 |
| optional_test_cmp_none.test | RUN | 0.107496 | 0.297678 | 0.344473 | 0.001198 | 0.001415 | 0.001157 |
| optional_test_value_access.test | RUN | 0.129419 | 0.522868 | 0.459326 | 0.001247 | 0.001212 | 0.001254 |
| optional_test_emplace.test | RUN | 0.133776 | 0.503220 | 0.469148 | 0.001391 | 0.001113 | 0.001188 |
| optional_test_minimum_requirements.test | RUN | 0.120948 | 0.402515 | 0.409994 | 0.001339 | 0.001292 | 0.001185 |
| optional_test_msvc_bug_workaround.test | RUN | 0.106587 | 0.276915 | 0.332991 | 0.001055 | 0.001156 | 0.001226 |
| optional_test_member_T.test | RUN | 0.105076 | 0.271725 | 0.332415 | 0.001048 | 0.001269 | 0.001181 |
| optional_test_tc_base.test | RUN | 0.106804 | 0.279713 | 0.334258 | 0.001050 | 0.001492 | 0.001118 |
| optional_test_sfinae_friendly_ctor.test | COMPILE | 0.077888 | 0.187277 | 0.213363 | — | — | — |
| optional_test_path_assignment.test | COMPILE | 0.072930 | 0.182211 | 0.206278 | — | — | — |
| optional_test_fail_const_swap.test | COMPILE_FAIL | 0.071388 | 0.171023 | 0.187189 | — | — | — |
| optional_test_ref_convert_assign_const_int_prevented.test | COMPILE_FAIL | 0.095701 | 0.238872 | 0.301661 | — | — | — |
| optional_test_fail1.test | COMPILE_FAIL | 0.066034 | 0.170778 | 0.196650 | — | — | — |
| optional_test_fail3a.test | COMPILE_FAIL | 0.067935 | 0.173041 | 0.197267 | — | — | — |
| optional_test_fail3b.test | COMPILE_FAIL | 0.069599 | 0.168716 | 0.200444 | — | — | — |
| optional_test_ref_fail1.test | COMPILE_FAIL | 0.066682 | 0.169187 | 0.200439 | — | — | — |
| optional_test_ref_fail3.test | COMPILE_FAIL | 0.063671 | 0.167722 | 0.193978 | — | — | — |
| optional_test_ref_fail4.test | COMPILE_FAIL | 0.065781 | 0.165963 | 0.198610 | — | — | — |
| optional_test_ref_fail_convert_from_temporary_optional_T.test | COMPILE_FAIL | 0.064980 | 0.170270 | 0.196939 | — | — | — |
| optional_test_inplace_fail.test | COMPILE_FAIL | 0.109957 | 0.267688 | 0.339476 | — | — | — |
| optional_test_inplace_fail2.test | COMPILE_FAIL | 0.110584 | 0.267724 | 0.333101 | — | — | — |
| optional_test_fail_implicit_bool_convert.test | COMPILE_FAIL | 0.064088 | 0.171507 | 0.192710 | — | — | — |
| optional_test_fail_copying_a_moveable_type.test | COMPILE_FAIL | 0.068749 | 0.173819 | 0.196624 | — | — | — |
| optional_test_fail_optional_rvalue_ref.test | COMPILE_FAIL | 0.065402 | 0.165628 | 0.186280 | — | — | — |
| optional_test_ref_fail_init_from_Trefref.test | COMPILE_FAIL | 0.066912 | 0.169193 | 0.194781 | — | — | — |
| optional_test_ref_fail_init_from_Urefref.test | COMPILE_FAIL | 0.068514 | 0.167738 | 0.198354 | — | — | — |
| optional_test_ref_fail_assign_from_Trefref.test | COMPILE_FAIL | 0.064950 | 0.168908 | 0.190471 | — | — | — |
| optional_test_ref_fail_assign_from_Urefref.test | COMPILE_FAIL | 0.066048 | 0.167375 | 0.193790 | — | — | — |
| optional_test_fail_convert_from_null.test | COMPILE_FAIL | 0.066843 | 0.170646 | 0.190103 | — | — | — |
| optional_test_fail_explicit_convert_in_value_or.test | COMPILE_FAIL | 0.066524 | 0.169050 | 0.192512 | — | — | — |
| optional_test_fail_explicit_convert_in_value_or_call.test | COMPILE_FAIL | 0.065487 | 0.169956 | 0.194502 | — | — | — |
| optional_test_fail_io_without_io.test | COMPILE_FAIL | 0.090192 | 0.226643 | 0.285659 | — | — | — |
| optional_test_fail_none_io_without_io.test | COMPILE_FAIL | 0.072176 | 0.194104 | 0.235578 | — | — | — |
| optional_test_fail_convert_assign_of_enums.test | COMPILE_FAIL | 0.067250 | 0.171355 | 0.197026 | — | — | — |
| optional_test_static_properties.test | RUN | 0.139391 | 0.390421 | 0.507787 | 0.001172 | 0.001434 | 0.001165 |
| optional_test_maybe_uninitialized_warning.test | COMPILE | 0.072874 | 0.184976 | 0.218586 | — | — | — |
| optional_test_deleted_default_ctor.test | COMPILE | 0.074635 | 0.184452 | 0.218295 | — | — | — |
| optional_test_constructible_from_other.test | COMPILE | 0.070837 | 0.178938 | 0.204833 | — | — | — |
| optional_xconfig_NO_PROPER_ASSIGN_FROM_CONST_INT_pass.test | RUN | 0.082965 | 0.234182 | 0.283571 | 0.001148 | 0.001231 | 0.001142 |
| optional_xconfig_NO_PROPER_ASSIGN_FROM_CONST_INT_fail.test | RUN_FAIL | 0.081418 | 0.236364 | 0.274998 | 0.001121 | 0.001174 | 0.001318 |
| optional_xconfig_NO_PROPER_CONVERT_FROM_CONST_INT_pass.test | RUN | 0.083119 | 0.229292 | 0.279778 | 0.001147 | 0.001098 | 0.001092 |
| optional_xconfig_NO_PROPER_CONVERT_FROM_CONST_INT_fail.test | RUN_FAIL | 0.084088 | 0.241424 | 0.272514 | 0.001007 | 0.000934 | 0.001223 |
| optional_xconfig_NO_LEGAL_CONVERT_FROM_REF_pass.test | RUN | 0.054321 | 0.158539 | 0.181928 | 0.000802 | 0.000942 | 0.000819 |
| optional_xconfig_NO_LEGAL_CONVERT_FROM_REF_fail.test | COMPILE_FAIL | 0.035289 | 0.150372 | 0.186451 | — | — | — |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 1.006× | 1.006×, 1.006× | 1.009× |
| clang | 1.006× | 1.008×, 1.003× | 0.998× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1364 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/43967972441).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| optional_test.test | 10 | 0.000859s | 0.000852s | 0.000858s | byte equality observed |
| optional_test_assign.test | 10 | 0.000811s | 0.000835s | 0.000786s | byte equality observed |
| optional_test_cmp_none.test | 10 | 0.000786s | 0.000806s | 0.000796s | byte equality observed |
| optional_test_constructors.test | 10 | 0.000806s | 0.000819s | 0.000816s | byte equality observed |
| optional_test_conversions_from_U.test | 10 | 0.000790s | 0.000797s | 0.000787s | byte equality observed |
| optional_test_convert_assign.test | 10 | 0.000807s | 0.000825s | 0.000794s | byte equality observed |
| optional_test_convert_from_T.test | 10 | 0.000832s | 0.000806s | 0.000823s | byte equality observed |
| optional_test_emplace.test | 10 | 0.000825s | 0.000844s | 0.000851s | byte equality observed |
| optional_test_empty_braces.test | 10 | 0.000795s | 0.000824s | 0.000824s | byte equality observed |
| optional_test_flat_map.test | 10 | 0.000800s | 0.000810s | 0.000833s | byte equality observed |
| optional_test_hash.test | 10 | 0.000827s | 0.000840s | 0.000830s | byte equality observed |
| optional_test_inplace_factory.test | 10 | 0.000823s | 0.000802s | 0.000814s | byte equality observed |
| optional_test_io.test | 10 | 0.000827s | 0.000822s | 0.000827s | byte equality observed |
| optional_test_make_optional.test | 10 | 0.000833s | 0.000828s | 0.000808s | byte equality observed |
| optional_test_map.test | 10 | 0.000813s | 0.000823s | 0.000799s | byte equality observed |
| optional_test_member_T.test | 10 | 0.000808s | 0.000817s | 0.000785s | byte equality observed |
| optional_test_minimum_requirements.test | 10 | 0.000859s | 0.000868s | 0.000811s | byte equality observed |
| optional_test_move.test | 10 | 0.000812s | 0.000850s | 0.000808s | byte equality observed |
| optional_test_msvc_bug_workaround.test | 10 | 0.000802s | 0.000794s | 0.000780s | byte equality observed |
| optional_test_noexcept_move.test | 10 | 0.000368s | 0.000370s | 0.000761s | byte equality observed |
| optional_test_ranges_find.test | 10 | 0.000818s | 0.000787s | 0.000797s | byte equality observed |
| optional_test_ref_assign_const_int.test | 10 | 0.000820s | 0.000806s | 0.000797s | byte equality observed |
| optional_test_ref_assign_mutable_int.test | 10 | 0.000805s | 0.000787s | 0.000806s | byte equality observed |
| optional_test_ref_assign_portable_minimum.test | 10 | 0.000814s | 0.000799s | 0.000841s | byte equality observed |
| optional_test_ref_convert_assign_const_int.test | 10 | 0.000796s | 0.000790s | 0.000834s | byte equality observed |
| optional_test_ref_convert_assign_mutable_int.test | 10 | 0.000818s | 0.000816s | 0.000821s | byte equality observed |
| optional_test_ref_convert_assign_non_int.test | 10 | 0.000799s | 0.000808s | 0.000817s | byte equality observed |
| optional_test_ref_converting_ctor.test | 10 | 0.000819s | 0.000785s | 0.000797s | byte equality observed |
| optional_test_ref_move.test | 10 | 0.000807s | 0.000838s | 0.000794s | byte equality observed |
| optional_test_ref_portable_minimum.test | 10 | 0.000837s | 0.000852s | 0.000843s | byte equality observed |
| optional_test_ref_to_val.test | 10 | 0.000809s | 0.000799s | 0.000839s | byte equality observed |
| optional_test_static_properties.test | 10 | 0.000805s | 0.000789s | 0.000802s | byte equality observed |
| optional_test_swap.test | 10 | 0.000812s | 0.000839s | 0.000807s | byte equality observed |
| optional_test_tc_base.test | 10 | 0.000825s | 0.000817s | 0.000799s | byte equality observed |
| optional_test_tie.test | 10 | 0.000810s | 0.000810s | 0.000820s | byte equality observed |
| optional_test_value_access.test | 10 | 0.000850s | 0.000852s | 0.000821s | byte equality observed |
| optional_xconfig_NO_LEGAL_CONVERT_FROM_REF_pass.test | 10 | 0.000764s | 0.000802s | 0.000782s | byte equality observed |
| optional_xconfig_NO_PROPER_ASSIGN_FROM_CONST_INT_pass.test | 10 | 0.000789s | 0.000807s | 0.000775s | byte equality observed |
| optional_xconfig_NO_PROPER_CONVERT_FROM_CONST_INT_pass.test | 10 | 0.000795s | 0.000801s | 0.000795s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/43967972441).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
