# libs/optional/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| optional_test.test | RUN | 0.208441 | 1.356620 | 0.758535 | 0.001178 | 0.001310 | 0.001322 |
| optional_test_assign.test | RUN | 0.103986 | 0.276694 | 0.333722 | 0.001264 | 0.001380 | 0.001150 |
| optional_test_swap.test | RUN | 0.111407 | 0.349202 | 0.370474 | 0.001112 | 0.001184 | 0.001297 |
| optional_test_constexpr.test | COMPILE | 0.075381 | 0.187582 | 0.217136 | — | — | — |
| optional_test_wuninitialized.test | COMPILE | 0.110937 | 0.465782 | 0.349164 | — | — | — |
| optional_test_fwd_header.test | COMPILE | 0.072313 | 0.184407 | 0.209440 | — | — | — |
| optional_test_conversions_from_U.test | RUN | 0.116577 | 0.358719 | 0.406622 | 0.001113 | 0.001414 | 0.001181 |
| optional_test_constructors.test | RUN | 0.246914 | 1.353125 | 1.083912 | 0.001107 | 0.001387 | 0.001400 |
| optional_test_convert_from_T.test | RUN | 0.107928 | 0.289339 | 0.365594 | 0.001173 | 0.001450 | 0.001287 |
| optional_test_convert_assign.test | RUN | 0.104028 | 0.274328 | 0.339450 | 0.001076 | 0.001170 | 0.001286 |
| optional_test_empty_braces.test | RUN | 0.097883 | 0.279206 | 0.337964 | 0.001078 | 0.001580 | 0.001187 |
| optional_test_make_optional.test | RUN | 0.145550 | 0.436532 | 0.559088 | 0.001061 | 0.001306 | 0.001189 |
| optional_test_flat_map.test | RUN | 0.159160 | 0.515287 | 0.619946 | 0.001036 | 0.000995 | 0.001350 |
| optional_test_hash.test | RUN | 0.127411 | 0.408308 | 0.440911 | 0.001136 | 0.001318 | 0.001184 |
| optional_test_map.test | RUN | 0.159007 | 0.502846 | 0.645586 | 0.001302 | 0.001380 | 0.001157 |
| optional_test_tie.test | RUN | 0.114246 | 0.313301 | 0.372604 | 0.001298 | 0.001310 | 0.001238 |
| optional_test_ranges_find.test | RUN | 0.100083 | 0.264991 | 0.328104 | 0.001034 | 0.001488 | 0.001107 |
| optional_test_ref_assign_portable_minimum.test | RUN | 0.132820 | 0.816965 | 0.484719 | 0.000950 | 0.001393 | 0.001256 |
| optional_test_ref_assign_mutable_int.test | RUN | 0.108454 | 0.341882 | 0.365643 | 0.001261 | 0.001244 | 0.001272 |
| optional_test_ref_assign_const_int.test | RUN | 0.106510 | 0.350365 | 0.371413 | 0.001125 | 0.001316 | 0.001179 |
| optional_test_ref_converting_ctor.test | RUN | 0.119728 | 0.497232 | 0.408292 | 0.001148 | 0.001505 | 0.001278 |
| optional_test_ref_convert_assign_non_int.test | RUN | 0.108663 | 0.327423 | 0.365847 | 0.001093 | 0.001331 | 0.001243 |
| optional_test_ref_convert_assign_mutable_int.test | RUN | 0.097527 | 0.297419 | 0.341834 | 0.001197 | 0.001094 | 0.001239 |
| optional_test_ref_convert_assign_const_int.test | RUN | 0.100936 | 0.291350 | 0.340290 | 0.001142 | 0.001216 | 0.001168 |
| optional_test_ref_portable_minimum.test | RUN | 0.468885 | 1.642197 | 1.246738 | 0.000916 | 0.001469 | 0.001289 |
| optional_test_ref_move.test | RUN | 0.111801 | 0.305182 | 0.359423 | 0.001160 | 0.001312 | 0.001178 |
| optional_test_ref_to_val.test | RUN | 0.134851 | 0.639396 | 0.504664 | 0.001233 | 0.001377 | 0.001150 |
| optional_test_inplace_factory.test | RUN | 0.139188 | 0.587396 | 0.450791 | 0.001328 | 0.001375 | 0.001149 |
| optional_test_io.test | RUN | 0.138812 | 0.655192 | 0.488159 | 0.000968 | 0.001274 | 0.001353 |
| optional_test_move.test | RUN | 0.123057 | 0.437969 | 0.423447 | 0.001185 | 0.001357 | 0.001174 |
| optional_test_noexcept_move.test | RUN | 0.075475 | 0.184182 | 0.208920 | 0.000443 | 0.000577 | 0.001137 |
| optional_test_cmp_none.test | RUN | 0.107832 | 0.302080 | 0.336653 | 0.001255 | 0.001405 | 0.001318 |
| optional_test_value_access.test | RUN | 0.130402 | 0.523192 | 0.467222 | 0.001105 | 0.001354 | 0.001310 |
| optional_test_emplace.test | RUN | 0.128104 | 0.507940 | 0.476648 | 0.001187 | 0.001215 | 0.001341 |
| optional_test_minimum_requirements.test | RUN | 0.117805 | 0.405291 | 0.400465 | 0.001129 | 0.001310 | 0.001102 |
| optional_test_msvc_bug_workaround.test | RUN | 0.101497 | 0.276912 | 0.335137 | 0.001368 | 0.001239 | 0.001210 |
| optional_test_member_T.test | RUN | 0.099066 | 0.274545 | 0.331404 | 0.001167 | 0.001241 | 0.001141 |
| optional_test_tc_base.test | RUN | 0.106420 | 0.274659 | 0.340076 | 0.001123 | 0.001384 | 0.001241 |
| optional_test_sfinae_friendly_ctor.test | COMPILE | 0.076603 | 0.190251 | 0.223986 | — | — | — |
| optional_test_path_assignment.test | COMPILE | 0.072310 | 0.187517 | 0.206466 | — | — | — |
| optional_test_fail_const_swap.test | COMPILE_FAIL | 0.068069 | 0.169954 | 0.189384 | — | — | — |
| optional_test_ref_convert_assign_const_int_prevented.test | COMPILE_FAIL | 0.090918 | 0.238895 | 0.298986 | — | — | — |
| optional_test_fail1.test | COMPILE_FAIL | 0.062225 | 0.168670 | 0.197436 | — | — | — |
| optional_test_fail3a.test | COMPILE_FAIL | 0.065282 | 0.171455 | 0.198057 | — | — | — |
| optional_test_fail3b.test | COMPILE_FAIL | 0.068359 | 0.171482 | 0.201799 | — | — | — |
| optional_test_ref_fail1.test | COMPILE_FAIL | 0.064068 | 0.166747 | 0.198967 | — | — | — |
| optional_test_ref_fail3.test | COMPILE_FAIL | 0.061025 | 0.168506 | 0.194204 | — | — | — |
| optional_test_ref_fail4.test | COMPILE_FAIL | 0.067112 | 0.167997 | 0.195339 | — | — | — |
| optional_test_ref_fail_convert_from_temporary_optional_T.test | COMPILE_FAIL | 0.063813 | 0.169036 | 0.192137 | — | — | — |
| optional_test_inplace_fail.test | COMPILE_FAIL | 0.108985 | 0.266197 | 0.340657 | — | — | — |
| optional_test_inplace_fail2.test | COMPILE_FAIL | 0.113769 | 0.265314 | 0.337622 | — | — | — |
| optional_test_fail_implicit_bool_convert.test | COMPILE_FAIL | 0.067627 | 0.169616 | 0.194883 | — | — | — |
| optional_test_fail_copying_a_moveable_type.test | COMPILE_FAIL | 0.070513 | 0.171922 | 0.198730 | — | — | — |
| optional_test_fail_optional_rvalue_ref.test | COMPILE_FAIL | 0.066883 | 0.163209 | 0.191578 | — | — | — |
| optional_test_ref_fail_init_from_Trefref.test | COMPILE_FAIL | 0.069236 | 0.167428 | 0.194258 | — | — | — |
| optional_test_ref_fail_init_from_Urefref.test | COMPILE_FAIL | 0.068470 | 0.167951 | 0.199693 | — | — | — |
| optional_test_ref_fail_assign_from_Trefref.test | COMPILE_FAIL | 0.068656 | 0.171660 | 0.192048 | — | — | — |
| optional_test_ref_fail_assign_from_Urefref.test | COMPILE_FAIL | 0.067272 | 0.166522 | 0.196858 | — | — | — |
| optional_test_fail_convert_from_null.test | COMPILE_FAIL | 0.066997 | 0.165864 | 0.195562 | — | — | — |
| optional_test_fail_explicit_convert_in_value_or.test | COMPILE_FAIL | 0.067268 | 0.167060 | 0.188867 | — | — | — |
| optional_test_fail_explicit_convert_in_value_or_call.test | COMPILE_FAIL | 0.066210 | 0.172384 | 0.192827 | — | — | — |
| optional_test_fail_io_without_io.test | COMPILE_FAIL | 0.092238 | 0.223424 | 0.288048 | — | — | — |
| optional_test_fail_none_io_without_io.test | COMPILE_FAIL | 0.072958 | 0.189172 | 0.241328 | — | — | — |
| optional_test_fail_convert_assign_of_enums.test | COMPILE_FAIL | 0.069757 | 0.171691 | 0.200018 | — | — | — |
| optional_test_static_properties.test | RUN | 0.163326 | 0.392559 | 0.505279 | 0.001101 | 0.001472 | 0.001205 |
| optional_test_maybe_uninitialized_warning.test | COMPILE | 0.073057 | 0.189302 | 0.213595 | — | — | — |
| optional_test_deleted_default_ctor.test | COMPILE | 0.074471 | 0.189335 | 0.224750 | — | — | — |
| optional_test_constructible_from_other.test | COMPILE | 0.070561 | 0.177964 | 0.204278 | — | — | — |
| optional_xconfig_NO_PROPER_ASSIGN_FROM_CONST_INT_pass.test | RUN | 0.085125 | 0.231981 | 0.280700 | 0.001196 | 0.001197 | 0.001211 |
| optional_xconfig_NO_PROPER_ASSIGN_FROM_CONST_INT_fail.test | RUN_FAIL | 0.082326 | 0.235306 | 0.284734 | 0.001224 | 0.001219 | 0.001230 |
| optional_xconfig_NO_PROPER_CONVERT_FROM_CONST_INT_pass.test | RUN | 0.081371 | 0.232246 | 0.275780 | 0.001062 | 0.001213 | 0.001078 |
| optional_xconfig_NO_PROPER_CONVERT_FROM_CONST_INT_fail.test | RUN_FAIL | 0.088323 | 0.236269 | 0.276351 | 0.000829 | 0.001392 | 0.000871 |
| optional_xconfig_NO_LEGAL_CONVERT_FROM_REF_pass.test | RUN | 0.070310 | 0.158496 | 0.202801 | 0.001031 | 0.000940 | 0.000892 |
| optional_xconfig_NO_LEGAL_CONVERT_FROM_REF_fail.test | COMPILE_FAIL | 0.051698 | 0.146657 | 0.192489 | — | — | — |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.999× | 0.995×, 1.003× | 0.999× |
| clang | 1.014× | 1.008×, 1.021× | 1.007× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1364 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44481767416).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| optional_test.test | 10 | 0.000870s | 0.000861s | 0.000837s | byte equality observed |
| optional_test_assign.test | 10 | 0.000825s | 0.000790s | 0.000810s | byte equality observed |
| optional_test_cmp_none.test | 10 | 0.000790s | 0.000804s | 0.000821s | byte equality observed |
| optional_test_constructors.test | 10 | 0.000813s | 0.000832s | 0.000805s | byte equality observed |
| optional_test_conversions_from_U.test | 10 | 0.000779s | 0.000809s | 0.000800s | byte equality observed |
| optional_test_convert_assign.test | 10 | 0.000791s | 0.000814s | 0.000786s | byte equality observed |
| optional_test_convert_from_T.test | 10 | 0.000794s | 0.000806s | 0.000793s | byte equality observed |
| optional_test_emplace.test | 10 | 0.000824s | 0.000835s | 0.000839s | byte equality observed |
| optional_test_empty_braces.test | 10 | 0.000800s | 0.000816s | 0.000789s | byte equality observed |
| optional_test_flat_map.test | 10 | 0.000812s | 0.000816s | 0.000822s | byte equality observed |
| optional_test_hash.test | 10 | 0.000829s | 0.000807s | 0.000823s | byte equality observed |
| optional_test_inplace_factory.test | 10 | 0.000825s | 0.000810s | 0.000787s | byte equality observed |
| optional_test_io.test | 10 | 0.000824s | 0.000819s | 0.000799s | byte equality observed |
| optional_test_make_optional.test | 10 | 0.000791s | 0.000798s | 0.000835s | byte equality observed |
| optional_test_map.test | 10 | 0.000800s | 0.000798s | 0.000806s | byte equality observed |
| optional_test_member_T.test | 10 | 0.000817s | 0.000830s | 0.000799s | byte equality observed |
| optional_test_minimum_requirements.test | 10 | 0.000839s | 0.000836s | 0.000835s | byte equality observed |
| optional_test_move.test | 10 | 0.000801s | 0.000835s | 0.000801s | byte equality observed |
| optional_test_msvc_bug_workaround.test | 10 | 0.000798s | 0.000808s | 0.000826s | byte equality observed |
| optional_test_noexcept_move.test | 10 | 0.000361s | 0.000362s | 0.000780s | byte equality observed |
| optional_test_ranges_find.test | 10 | 0.000801s | 0.000824s | 0.000783s | byte equality observed |
| optional_test_ref_assign_const_int.test | 10 | 0.000825s | 0.000793s | 0.000831s | byte equality observed |
| optional_test_ref_assign_mutable_int.test | 10 | 0.000808s | 0.000794s | 0.000808s | byte equality observed |
| optional_test_ref_assign_portable_minimum.test | 10 | 0.000820s | 0.000781s | 0.000804s | byte equality observed |
| optional_test_ref_convert_assign_const_int.test | 10 | 0.000843s | 0.000788s | 0.000827s | byte equality observed |
| optional_test_ref_convert_assign_mutable_int.test | 10 | 0.000822s | 0.000808s | 0.000791s | byte equality observed |
| optional_test_ref_convert_assign_non_int.test | 10 | 0.000816s | 0.000807s | 0.000838s | byte equality observed |
| optional_test_ref_converting_ctor.test | 10 | 0.000807s | 0.000822s | 0.000835s | byte equality observed |
| optional_test_ref_move.test | 10 | 0.000799s | 0.000807s | 0.000842s | byte equality observed |
| optional_test_ref_portable_minimum.test | 10 | 0.000831s | 0.000829s | 0.000846s | byte equality observed |
| optional_test_ref_to_val.test | 10 | 0.000785s | 0.000842s | 0.000794s | byte equality observed |
| optional_test_static_properties.test | 10 | 0.000794s | 0.000827s | 0.000779s | byte equality observed |
| optional_test_swap.test | 10 | 0.000808s | 0.000799s | 0.000801s | byte equality observed |
| optional_test_tc_base.test | 10 | 0.000805s | 0.000811s | 0.000813s | byte equality observed |
| optional_test_tie.test | 10 | 0.000808s | 0.000827s | 0.000817s | byte equality observed |
| optional_test_value_access.test | 10 | 0.000850s | 0.000834s | 0.000844s | byte equality observed |
| optional_xconfig_NO_LEGAL_CONVERT_FROM_REF_pass.test | 10 | 0.000791s | 0.000773s | 0.000808s | byte equality observed |
| optional_xconfig_NO_PROPER_ASSIGN_FROM_CONST_INT_pass.test | 10 | 0.000796s | 0.000778s | 0.000831s | byte equality observed |
| optional_xconfig_NO_PROPER_CONVERT_FROM_CONST_INT_pass.test | 10 | 0.000798s | 0.000802s | 0.000830s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44481767416).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
