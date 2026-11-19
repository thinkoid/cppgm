# libs/optional/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| optional_test.test | RUN | 0.213852 | 1.369892 | 0.762795 | 0.001222 | 0.001348 | 0.001310 |
| optional_test_assign.test | RUN | 0.106278 | 0.279833 | 0.336206 | 0.001198 | 0.001598 | 0.001148 |
| optional_test_swap.test | RUN | 0.113722 | 0.346834 | 0.371666 | 0.001170 | 0.001239 | 0.001078 |
| optional_test_constexpr.test | COMPILE | 0.077523 | 0.186447 | 0.214937 | — | — | — |
| optional_test_wuninitialized.test | COMPILE | 0.114861 | 0.459170 | 0.366442 | — | — | — |
| optional_test_fwd_header.test | COMPILE | 0.075500 | 0.180732 | 0.205792 | — | — | — |
| optional_test_conversions_from_U.test | RUN | 0.123062 | 0.356701 | 0.412375 | 0.001219 | 0.001569 | 0.001047 |
| optional_test_constructors.test | RUN | 0.246117 | 1.362359 | 1.079418 | 0.001236 | 0.001370 | 0.001224 |
| optional_test_convert_from_T.test | RUN | 0.114322 | 0.291356 | 0.351059 | 0.001366 | 0.001564 | 0.001121 |
| optional_test_convert_assign.test | RUN | 0.111508 | 0.282531 | 0.357359 | 0.001178 | 0.001293 | 0.001129 |
| optional_test_empty_braces.test | RUN | 0.108092 | 0.287062 | 0.338971 | 0.001318 | 0.001377 | 0.001190 |
| optional_test_make_optional.test | RUN | 0.153694 | 0.441811 | 0.533273 | 0.001271 | 0.001385 | 0.001228 |
| optional_test_flat_map.test | RUN | 0.162424 | 0.513870 | 0.618355 | 0.001213 | 0.001182 | 0.001117 |
| optional_test_hash.test | RUN | 0.134708 | 0.419593 | 0.448734 | 0.001192 | 0.001198 | 0.001132 |
| optional_test_map.test | RUN | 0.166598 | 0.498717 | 0.636915 | 0.001327 | 0.001443 | 0.001203 |
| optional_test_tie.test | RUN | 0.116913 | 0.316509 | 0.363356 | 0.001217 | 0.001268 | 0.001164 |
| optional_test_ranges_find.test | RUN | 0.103533 | 0.271189 | 0.329021 | 0.000894 | 0.001243 | 0.001146 |
| optional_test_ref_assign_portable_minimum.test | RUN | 0.140100 | 0.829714 | 0.481779 | 0.001161 | 0.001485 | 0.001122 |
| optional_test_ref_assign_mutable_int.test | RUN | 0.114674 | 0.345617 | 0.366411 | 0.001357 | 0.001305 | 0.001160 |
| optional_test_ref_assign_const_int.test | RUN | 0.112752 | 0.358291 | 0.375742 | 0.001190 | 0.001456 | 0.001100 |
| optional_test_ref_converting_ctor.test | RUN | 0.127892 | 0.496338 | 0.410994 | 0.001145 | 0.001568 | 0.001113 |
| optional_test_ref_convert_assign_non_int.test | RUN | 0.111716 | 0.332160 | 0.366379 | 0.001207 | 0.001446 | 0.001248 |
| optional_test_ref_convert_assign_mutable_int.test | RUN | 0.102618 | 0.300444 | 0.346604 | 0.001137 | 0.001468 | 0.001093 |
| optional_test_ref_convert_assign_const_int.test | RUN | 0.106466 | 0.302881 | 0.330478 | 0.001254 | 0.001274 | 0.001177 |
| optional_test_ref_portable_minimum.test | RUN | 0.464215 | 1.658646 | 1.243344 | 0.001418 | 0.001299 | 0.001140 |
| optional_test_ref_move.test | RUN | 0.112084 | 0.317111 | 0.353690 | 0.001105 | 0.001494 | 0.001138 |
| optional_test_ref_to_val.test | RUN | 0.139527 | 0.658420 | 0.508060 | 0.001321 | 0.001418 | 0.001213 |
| optional_test_inplace_factory.test | RUN | 0.145631 | 0.595465 | 0.458437 | 0.001211 | 0.001194 | 0.001230 |
| optional_test_io.test | RUN | 0.138409 | 0.661517 | 0.475753 | 0.001205 | 0.001299 | 0.001189 |
| optional_test_move.test | RUN | 0.131480 | 0.429433 | 0.414480 | 0.001226 | 0.001068 | 0.001107 |
| optional_test_noexcept_move.test | RUN | 0.076846 | 0.187142 | 0.219912 | 0.000453 | 0.000578 | 0.001096 |
| optional_test_cmp_none.test | RUN | 0.110281 | 0.305685 | 0.345792 | 0.001162 | 0.001452 | 0.001313 |
| optional_test_value_access.test | RUN | 0.136990 | 0.523751 | 0.463427 | 0.001239 | 0.001401 | 0.001171 |
| optional_test_emplace.test | RUN | 0.134528 | 0.512859 | 0.472998 | 0.001371 | 0.001453 | 0.001241 |
| optional_test_minimum_requirements.test | RUN | 0.121908 | 0.400792 | 0.407488 | 0.001188 | 0.001242 | 0.001092 |
| optional_test_msvc_bug_workaround.test | RUN | 0.108577 | 0.275383 | 0.325851 | 0.001142 | 0.001190 | 0.001352 |
| optional_test_member_T.test | RUN | 0.110000 | 0.274533 | 0.335309 | 0.001276 | 0.001214 | 0.001100 |
| optional_test_tc_base.test | RUN | 0.105701 | 0.274093 | 0.328651 | 0.001222 | 0.001197 | 0.001288 |
| optional_test_sfinae_friendly_ctor.test | COMPILE | 0.081336 | 0.185026 | 0.225342 | — | — | — |
| optional_test_path_assignment.test | COMPILE | 0.077211 | 0.187444 | 0.209124 | — | — | — |
| optional_test_fail_const_swap.test | COMPILE_FAIL | 0.072373 | 0.172791 | 0.188145 | — | — | — |
| optional_test_ref_convert_assign_const_int_prevented.test | COMPILE_FAIL | 0.097319 | 0.239159 | 0.307837 | — | — | — |
| optional_test_fail1.test | COMPILE_FAIL | 0.071177 | 0.167902 | 0.197919 | — | — | — |
| optional_test_fail3a.test | COMPILE_FAIL | 0.071021 | 0.175830 | 0.198303 | — | — | — |
| optional_test_fail3b.test | COMPILE_FAIL | 0.072798 | 0.171284 | 0.202373 | — | — | — |
| optional_test_ref_fail1.test | COMPILE_FAIL | 0.071634 | 0.169187 | 0.199147 | — | — | — |
| optional_test_ref_fail3.test | COMPILE_FAIL | 0.070038 | 0.167463 | 0.192699 | — | — | — |
| optional_test_ref_fail4.test | COMPILE_FAIL | 0.070965 | 0.169094 | 0.195789 | — | — | — |
| optional_test_ref_fail_convert_from_temporary_optional_T.test | COMPILE_FAIL | 0.069694 | 0.168715 | 0.196616 | — | — | — |
| optional_test_inplace_fail.test | COMPILE_FAIL | 0.117255 | 0.270888 | 0.335178 | — | — | — |
| optional_test_inplace_fail2.test | COMPILE_FAIL | 0.117833 | 0.265812 | 0.334595 | — | — | — |
| optional_test_fail_implicit_bool_convert.test | COMPILE_FAIL | 0.068299 | 0.167631 | 0.197817 | — | — | — |
| optional_test_fail_copying_a_moveable_type.test | COMPILE_FAIL | 0.071940 | 0.172436 | 0.197138 | — | — | — |
| optional_test_fail_optional_rvalue_ref.test | COMPILE_FAIL | 0.070394 | 0.166820 | 0.192227 | — | — | — |
| optional_test_ref_fail_init_from_Trefref.test | COMPILE_FAIL | 0.070684 | 0.169048 | 0.193674 | — | — | — |
| optional_test_ref_fail_init_from_Urefref.test | COMPILE_FAIL | 0.071612 | 0.170169 | 0.192331 | — | — | — |
| optional_test_ref_fail_assign_from_Trefref.test | COMPILE_FAIL | 0.070411 | 0.170295 | 0.192528 | — | — | — |
| optional_test_ref_fail_assign_from_Urefref.test | COMPILE_FAIL | 0.070566 | 0.169895 | 0.198026 | — | — | — |
| optional_test_fail_convert_from_null.test | COMPILE_FAIL | 0.066473 | 0.170363 | 0.188382 | — | — | — |
| optional_test_fail_explicit_convert_in_value_or.test | COMPILE_FAIL | 0.065305 | 0.168658 | 0.189783 | — | — | — |
| optional_test_fail_explicit_convert_in_value_or_call.test | COMPILE_FAIL | 0.063174 | 0.171198 | 0.193236 | — | — | — |
| optional_test_fail_io_without_io.test | COMPILE_FAIL | 0.096840 | 0.226720 | 0.287898 | — | — | — |
| optional_test_fail_none_io_without_io.test | COMPILE_FAIL | 0.074939 | 0.189783 | 0.238686 | — | — | — |
| optional_test_fail_convert_assign_of_enums.test | COMPILE_FAIL | 0.072408 | 0.171002 | 0.200967 | — | — | — |
| optional_test_static_properties.test | RUN | 0.165270 | 0.392180 | 0.502889 | 0.001184 | 0.001308 | 0.001171 |
| optional_test_maybe_uninitialized_warning.test | COMPILE | 0.074892 | 0.183657 | 0.217599 | — | — | — |
| optional_test_deleted_default_ctor.test | COMPILE | 0.077445 | 0.188536 | 0.220536 | — | — | — |
| optional_test_constructible_from_other.test | COMPILE | 0.074646 | 0.177336 | 0.204102 | — | — | — |
| optional_xconfig_NO_PROPER_ASSIGN_FROM_CONST_INT_pass.test | RUN | 0.090525 | 0.234383 | 0.288629 | 0.001222 | 0.001318 | 0.001204 |
| optional_xconfig_NO_PROPER_ASSIGN_FROM_CONST_INT_fail.test | RUN_FAIL | 0.085101 | 0.233802 | 0.284797 | 0.001073 | 0.001128 | 0.000992 |
| optional_xconfig_NO_PROPER_CONVERT_FROM_CONST_INT_pass.test | RUN | 0.084076 | 0.231706 | 0.275862 | 0.001089 | 0.001157 | 0.001070 |
| optional_xconfig_NO_PROPER_CONVERT_FROM_CONST_INT_fail.test | RUN_FAIL | 0.092186 | 0.240890 | 0.282595 | 0.000860 | 0.001244 | 0.000906 |
| optional_xconfig_NO_LEGAL_CONVERT_FROM_REF_pass.test | RUN | 0.070652 | 0.151655 | 0.203235 | 0.000866 | 0.000933 | 0.000801 |
| optional_xconfig_NO_LEGAL_CONVERT_FROM_REF_fail.test | COMPILE_FAIL | 0.050259 | 0.134454 | 0.196514 | — | — | — |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.989× | 0.996×, 0.982× | 0.999× |
| clang | 1.010× | 1.012×, 1.009× | 0.992× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1363 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44560957980).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| optional_test.test | 10 | 0.000876s | 0.000858s | 0.000872s | byte equality observed |
| optional_test_assign.test | 10 | 0.000794s | 0.000807s | 0.000802s | byte equality observed |
| optional_test_cmp_none.test | 10 | 0.000795s | 0.000803s | 0.000825s | byte equality observed |
| optional_test_constructors.test | 10 | 0.000813s | 0.000815s | 0.000824s | byte equality observed |
| optional_test_conversions_from_U.test | 10 | 0.000826s | 0.000809s | 0.000815s | byte equality observed |
| optional_test_convert_assign.test | 10 | 0.000815s | 0.000820s | 0.000830s | byte equality observed |
| optional_test_convert_from_T.test | 10 | 0.000830s | 0.000798s | 0.000807s | byte equality observed |
| optional_test_emplace.test | 10 | 0.000844s | 0.000828s | 0.000816s | byte equality observed |
| optional_test_empty_braces.test | 10 | 0.000838s | 0.000819s | 0.000797s | byte equality observed |
| optional_test_flat_map.test | 10 | 0.000818s | 0.000785s | 0.000812s | byte equality observed |
| optional_test_hash.test | 10 | 0.000830s | 0.000790s | 0.000839s | byte equality observed |
| optional_test_inplace_factory.test | 10 | 0.000825s | 0.000819s | 0.000815s | byte equality observed |
| optional_test_io.test | 10 | 0.000835s | 0.000850s | 0.000835s | byte equality observed |
| optional_test_make_optional.test | 10 | 0.000822s | 0.000792s | 0.000821s | byte equality observed |
| optional_test_map.test | 10 | 0.000814s | 0.000856s | 0.000820s | byte equality observed |
| optional_test_member_T.test | 10 | 0.000819s | 0.000828s | 0.000794s | byte equality observed |
| optional_test_minimum_requirements.test | 10 | 0.000836s | 0.000811s | 0.000823s | byte equality observed |
| optional_test_move.test | 10 | 0.000806s | 0.000811s | 0.000827s | byte equality observed |
| optional_test_msvc_bug_workaround.test | 10 | 0.000795s | 0.000787s | 0.000825s | byte equality observed |
| optional_test_noexcept_move.test | 10 | 0.000361s | 0.000362s | 0.000798s | byte equality observed |
| optional_test_ranges_find.test | 10 | 0.000813s | 0.000791s | 0.000802s | byte equality observed |
| optional_test_ref_assign_const_int.test | 10 | 0.000807s | 0.000788s | 0.000795s | byte equality observed |
| optional_test_ref_assign_mutable_int.test | 10 | 0.000811s | 0.000800s | 0.000820s | byte equality observed |
| optional_test_ref_assign_portable_minimum.test | 10 | 0.000808s | 0.000816s | 0.000826s | byte equality observed |
| optional_test_ref_convert_assign_const_int.test | 10 | 0.000810s | 0.000796s | 0.000811s | byte equality observed |
| optional_test_ref_convert_assign_mutable_int.test | 10 | 0.000814s | 0.000797s | 0.000816s | byte equality observed |
| optional_test_ref_convert_assign_non_int.test | 10 | 0.000817s | 0.000808s | 0.000836s | byte equality observed |
| optional_test_ref_converting_ctor.test | 10 | 0.000827s | 0.000789s | 0.000803s | byte equality observed |
| optional_test_ref_move.test | 10 | 0.000832s | 0.000824s | 0.000821s | byte equality observed |
| optional_test_ref_portable_minimum.test | 10 | 0.000853s | 0.000805s | 0.000832s | byte equality observed |
| optional_test_ref_to_val.test | 10 | 0.000808s | 0.000822s | 0.000823s | byte equality observed |
| optional_test_static_properties.test | 10 | 0.000800s | 0.000803s | 0.000827s | byte equality observed |
| optional_test_swap.test | 10 | 0.000817s | 0.000792s | 0.000808s | byte equality observed |
| optional_test_tc_base.test | 10 | 0.000811s | 0.000799s | 0.000781s | byte equality observed |
| optional_test_tie.test | 10 | 0.000810s | 0.000825s | 0.000821s | byte equality observed |
| optional_test_value_access.test | 10 | 0.000843s | 0.000836s | 0.000839s | byte equality observed |
| optional_xconfig_NO_LEGAL_CONVERT_FROM_REF_pass.test | 10 | 0.000788s | 0.000793s | 0.000803s | byte equality observed |
| optional_xconfig_NO_PROPER_ASSIGN_FROM_CONST_INT_pass.test | 10 | 0.000821s | 0.000806s | 0.000803s | byte equality observed |
| optional_xconfig_NO_PROPER_CONVERT_FROM_CONST_INT_pass.test | 10 | 0.000799s | 0.000804s | 0.000798s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44560957980).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
