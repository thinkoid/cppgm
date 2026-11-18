# libs/optional/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| optional_test.test | RUN | 0.213435 | 1.326879 | 0.751609 | 0.001262 | 0.001320 | 0.001303 |
| optional_test_assign.test | RUN | 0.105814 | 0.272861 | 0.336745 | 0.001260 | 0.001536 | 0.001194 |
| optional_test_swap.test | RUN | 0.113844 | 0.340588 | 0.369596 | 0.001146 | 0.001229 | 0.001187 |
| optional_test_constexpr.test | COMPILE | 0.077303 | 0.182877 | 0.217112 | — | — | — |
| optional_test_wuninitialized.test | COMPILE | 0.115600 | 0.455073 | 0.354640 | — | — | — |
| optional_test_fwd_header.test | COMPILE | 0.075373 | 0.177412 | 0.209265 | — | — | — |
| optional_test_conversions_from_U.test | RUN | 0.124434 | 0.352995 | 0.411218 | 0.001360 | 0.001328 | 0.001319 |
| optional_test_constructors.test | RUN | 0.260598 | 1.316117 | 1.075240 | 0.001224 | 0.001070 | 0.001172 |
| optional_test_convert_from_T.test | RUN | 0.114393 | 0.289503 | 0.360895 | 0.001310 | 0.001304 | 0.001040 |
| optional_test_convert_assign.test | RUN | 0.110323 | 0.280414 | 0.342681 | 0.001315 | 0.001278 | 0.001116 |
| optional_test_empty_braces.test | RUN | 0.110591 | 0.275381 | 0.347212 | 0.001351 | 0.001401 | 0.001158 |
| optional_test_make_optional.test | RUN | 0.153331 | 0.429608 | 0.539993 | 0.001576 | 0.001260 | 0.001086 |
| optional_test_flat_map.test | RUN | 0.163753 | 0.503353 | 0.612665 | 0.001272 | 0.001150 | 0.001143 |
| optional_test_hash.test | RUN | 0.133434 | 0.402925 | 0.442084 | 0.001207 | 0.001245 | 0.001064 |
| optional_test_map.test | RUN | 0.172228 | 0.493903 | 0.643246 | 0.001286 | 0.001243 | 0.001063 |
| optional_test_tie.test | RUN | 0.122026 | 0.310552 | 0.358326 | 0.001152 | 0.001217 | 0.001171 |
| optional_test_ranges_find.test | RUN | 0.105122 | 0.263750 | 0.316944 | 0.001361 | 0.001210 | 0.001105 |
| optional_test_ref_assign_portable_minimum.test | RUN | 0.137613 | 0.803754 | 0.487103 | 0.001246 | 0.001328 | 0.001248 |
| optional_test_ref_assign_mutable_int.test | RUN | 0.115145 | 0.338544 | 0.361926 | 0.001241 | 0.001126 | 0.001204 |
| optional_test_ref_assign_const_int.test | RUN | 0.118368 | 0.348772 | 0.361629 | 0.001344 | 0.001194 | 0.001214 |
| optional_test_ref_converting_ctor.test | RUN | 0.126222 | 0.486534 | 0.403069 | 0.001296 | 0.001251 | 0.001062 |
| optional_test_ref_convert_assign_non_int.test | RUN | 0.113294 | 0.320535 | 0.359956 | 0.001184 | 0.001337 | 0.001135 |
| optional_test_ref_convert_assign_mutable_int.test | RUN | 0.109615 | 0.292620 | 0.329448 | 0.001319 | 0.001256 | 0.001143 |
| optional_test_ref_convert_assign_const_int.test | RUN | 0.106538 | 0.284582 | 0.335266 | 0.001180 | 0.001194 | 0.001149 |
| optional_test_ref_portable_minimum.test | RUN | 0.471087 | 1.603940 | 1.242950 | 0.001143 | 0.001291 | 0.001108 |
| optional_test_ref_move.test | RUN | 0.118279 | 0.307842 | 0.362430 | 0.001287 | 0.001375 | 0.001121 |
| optional_test_ref_to_val.test | RUN | 0.144932 | 0.630028 | 0.500972 | 0.001315 | 0.001271 | 0.001229 |
| optional_test_inplace_factory.test | RUN | 0.140698 | 0.578797 | 0.460715 | 0.001142 | 0.001270 | 0.001077 |
| optional_test_io.test | RUN | 0.145351 | 0.647369 | 0.468690 | 0.001239 | 0.001332 | 0.001069 |
| optional_test_move.test | RUN | 0.132974 | 0.432214 | 0.410622 | 0.001200 | 0.001308 | 0.001050 |
| optional_test_noexcept_move.test | RUN | 0.076805 | 0.181209 | 0.206563 | 0.000491 | 0.000509 | 0.001071 |
| optional_test_cmp_none.test | RUN | 0.113922 | 0.292425 | 0.342410 | 0.001376 | 0.001313 | 0.001031 |
| optional_test_value_access.test | RUN | 0.132969 | 0.516383 | 0.457189 | 0.001400 | 0.001528 | 0.001279 |
| optional_test_emplace.test | RUN | 0.136118 | 0.496527 | 0.462786 | 0.001125 | 0.001383 | 0.001234 |
| optional_test_minimum_requirements.test | RUN | 0.124218 | 0.396440 | 0.410857 | 0.001222 | 0.001262 | 0.001228 |
| optional_test_msvc_bug_workaround.test | RUN | 0.112943 | 0.271339 | 0.336022 | 0.001199 | 0.001259 | 0.001354 |
| optional_test_member_T.test | RUN | 0.108762 | 0.266246 | 0.336114 | 0.001185 | 0.001388 | 0.001159 |
| optional_test_tc_base.test | RUN | 0.112598 | 0.274610 | 0.336648 | 0.001325 | 0.001043 | 0.001220 |
| optional_test_sfinae_friendly_ctor.test | COMPILE | 0.083889 | 0.185042 | 0.215510 | — | — | — |
| optional_test_path_assignment.test | COMPILE | 0.077631 | 0.180544 | 0.208598 | — | — | — |
| optional_test_fail_const_swap.test | COMPILE_FAIL | 0.075105 | 0.166390 | 0.185681 | — | — | — |
| optional_test_ref_convert_assign_const_int_prevented.test | COMPILE_FAIL | 0.096340 | 0.235147 | 0.306128 | — | — | — |
| optional_test_fail1.test | COMPILE_FAIL | 0.070405 | 0.165190 | 0.197773 | — | — | — |
| optional_test_fail3a.test | COMPILE_FAIL | 0.071238 | 0.170265 | 0.199295 | — | — | — |
| optional_test_fail3b.test | COMPILE_FAIL | 0.072048 | 0.167408 | 0.200906 | — | — | — |
| optional_test_ref_fail1.test | COMPILE_FAIL | 0.070688 | 0.164432 | 0.200868 | — | — | — |
| optional_test_ref_fail3.test | COMPILE_FAIL | 0.069100 | 0.164405 | 0.193827 | — | — | — |
| optional_test_ref_fail4.test | COMPILE_FAIL | 0.068490 | 0.163952 | 0.194724 | — | — | — |
| optional_test_ref_fail_convert_from_temporary_optional_T.test | COMPILE_FAIL | 0.068952 | 0.166817 | 0.192458 | — | — | — |
| optional_test_inplace_fail.test | COMPILE_FAIL | 0.118700 | 0.260257 | 0.336220 | — | — | — |
| optional_test_inplace_fail2.test | COMPILE_FAIL | 0.118779 | 0.261808 | 0.335650 | — | — | — |
| optional_test_fail_implicit_bool_convert.test | COMPILE_FAIL | 0.069773 | 0.167947 | 0.196088 | — | — | — |
| optional_test_fail_copying_a_moveable_type.test | COMPILE_FAIL | 0.073627 | 0.167569 | 0.198881 | — | — | — |
| optional_test_fail_optional_rvalue_ref.test | COMPILE_FAIL | 0.071124 | 0.164549 | 0.194065 | — | — | — |
| optional_test_ref_fail_init_from_Trefref.test | COMPILE_FAIL | 0.073911 | 0.164628 | 0.195940 | — | — | — |
| optional_test_ref_fail_init_from_Urefref.test | COMPILE_FAIL | 0.072259 | 0.164749 | 0.196957 | — | — | — |
| optional_test_ref_fail_assign_from_Trefref.test | COMPILE_FAIL | 0.071686 | 0.165989 | 0.196239 | — | — | — |
| optional_test_ref_fail_assign_from_Urefref.test | COMPILE_FAIL | 0.070828 | 0.165872 | 0.200954 | — | — | — |
| optional_test_fail_convert_from_null.test | COMPILE_FAIL | 0.071110 | 0.166272 | 0.197820 | — | — | — |
| optional_test_fail_explicit_convert_in_value_or.test | COMPILE_FAIL | 0.070226 | 0.168445 | 0.197998 | — | — | — |
| optional_test_fail_explicit_convert_in_value_or_call.test | COMPILE_FAIL | 0.069760 | 0.165718 | 0.194153 | — | — | — |
| optional_test_fail_io_without_io.test | COMPILE_FAIL | 0.096990 | 0.221241 | 0.287261 | — | — | — |
| optional_test_fail_none_io_without_io.test | COMPILE_FAIL | 0.074460 | 0.184275 | 0.239282 | — | — | — |
| optional_test_fail_convert_assign_of_enums.test | COMPILE_FAIL | 0.072919 | 0.170986 | 0.205342 | — | — | — |
| optional_test_static_properties.test | RUN | 0.165946 | 0.379003 | 0.502189 | 0.001286 | 0.001188 | 0.001334 |
| optional_test_maybe_uninitialized_warning.test | COMPILE | 0.076620 | 0.183365 | 0.209830 | — | — | — |
| optional_test_deleted_default_ctor.test | COMPILE | 0.076559 | 0.184832 | 0.218148 | — | — | — |
| optional_test_constructible_from_other.test | COMPILE | 0.074257 | 0.173486 | 0.201140 | — | — | — |
| optional_xconfig_NO_PROPER_ASSIGN_FROM_CONST_INT_pass.test | RUN | 0.090109 | 0.226568 | 0.289394 | 0.001384 | 0.001268 | 0.001297 |
| optional_xconfig_NO_PROPER_ASSIGN_FROM_CONST_INT_fail.test | RUN_FAIL | 0.087305 | 0.229191 | 0.278246 | 0.001371 | 0.001259 | 0.001123 |
| optional_xconfig_NO_PROPER_CONVERT_FROM_CONST_INT_pass.test | RUN | 0.087217 | 0.225956 | 0.282171 | 0.001168 | 0.001218 | 0.001148 |
| optional_xconfig_NO_PROPER_CONVERT_FROM_CONST_INT_fail.test | RUN_FAIL | 0.088202 | 0.236569 | 0.271355 | 0.000912 | 0.001272 | 0.001161 |
| optional_xconfig_NO_LEGAL_CONVERT_FROM_REF_pass.test | RUN | 0.073297 | 0.147461 | 0.183939 | 0.000937 | 0.000890 | 0.000836 |
| optional_xconfig_NO_LEGAL_CONVERT_FROM_REF_fail.test | COMPILE_FAIL | 0.055042 | 0.130695 | 0.192380 | — | — | — |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.999× | 0.997×, 1.001× | 1.014× |
| clang | 1.013× | 1.015×, 1.010× | 0.996× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1364 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44362912212).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| optional_test.test | 10 | 0.000871s | 0.000863s | 0.000878s | byte equality observed |
| optional_test_assign.test | 10 | 0.000794s | 0.000798s | 0.000777s | byte equality observed |
| optional_test_cmp_none.test | 10 | 0.000795s | 0.000803s | 0.000811s | byte equality observed |
| optional_test_constructors.test | 10 | 0.000814s | 0.000815s | 0.000822s | byte equality observed |
| optional_test_conversions_from_U.test | 10 | 0.000808s | 0.000846s | 0.000827s | byte equality observed |
| optional_test_convert_assign.test | 10 | 0.000814s | 0.000818s | 0.000805s | byte equality observed |
| optional_test_convert_from_T.test | 10 | 0.000822s | 0.000806s | 0.000803s | byte equality observed |
| optional_test_emplace.test | 10 | 0.000849s | 0.000830s | 0.000844s | byte equality observed |
| optional_test_empty_braces.test | 10 | 0.000819s | 0.000811s | 0.000818s | byte equality observed |
| optional_test_flat_map.test | 10 | 0.000812s | 0.000805s | 0.000803s | byte equality observed |
| optional_test_hash.test | 10 | 0.000816s | 0.000797s | 0.000828s | byte equality observed |
| optional_test_inplace_factory.test | 10 | 0.000810s | 0.000825s | 0.000809s | byte equality observed |
| optional_test_io.test | 10 | 0.000810s | 0.000834s | 0.000812s | byte equality observed |
| optional_test_make_optional.test | 10 | 0.000803s | 0.000790s | 0.000824s | byte equality observed |
| optional_test_map.test | 10 | 0.000788s | 0.000778s | 0.000827s | byte equality observed |
| optional_test_member_T.test | 10 | 0.000796s | 0.000778s | 0.000777s | byte equality observed |
| optional_test_minimum_requirements.test | 10 | 0.000836s | 0.000813s | 0.000822s | byte equality observed |
| optional_test_move.test | 10 | 0.000784s | 0.000818s | 0.000818s | byte equality observed |
| optional_test_msvc_bug_workaround.test | 10 | 0.000796s | 0.000805s | 0.000819s | byte equality observed |
| optional_test_noexcept_move.test | 10 | 0.000364s | 0.000359s | 0.000780s | byte equality observed |
| optional_test_ranges_find.test | 10 | 0.000816s | 0.000814s | 0.000800s | byte equality observed |
| optional_test_ref_assign_const_int.test | 10 | 0.000789s | 0.000807s | 0.000827s | byte equality observed |
| optional_test_ref_assign_mutable_int.test | 10 | 0.000807s | 0.000800s | 0.000785s | byte equality observed |
| optional_test_ref_assign_portable_minimum.test | 10 | 0.000811s | 0.000824s | 0.000808s | byte equality observed |
| optional_test_ref_convert_assign_const_int.test | 10 | 0.000818s | 0.000805s | 0.000823s | byte equality observed |
| optional_test_ref_convert_assign_mutable_int.test | 10 | 0.000818s | 0.000789s | 0.000802s | byte equality observed |
| optional_test_ref_convert_assign_non_int.test | 10 | 0.000822s | 0.000813s | 0.000839s | byte equality observed |
| optional_test_ref_converting_ctor.test | 10 | 0.000816s | 0.000823s | 0.000799s | byte equality observed |
| optional_test_ref_move.test | 10 | 0.000803s | 0.000813s | 0.000796s | byte equality observed |
| optional_test_ref_portable_minimum.test | 10 | 0.000820s | 0.000848s | 0.000828s | byte equality observed |
| optional_test_ref_to_val.test | 10 | 0.000812s | 0.000814s | 0.000807s | byte equality observed |
| optional_test_static_properties.test | 10 | 0.000807s | 0.000819s | 0.000805s | byte equality observed |
| optional_test_swap.test | 10 | 0.000838s | 0.000801s | 0.000818s | byte equality observed |
| optional_test_tc_base.test | 10 | 0.000820s | 0.000824s | 0.000814s | byte equality observed |
| optional_test_tie.test | 10 | 0.000823s | 0.000844s | 0.000807s | byte equality observed |
| optional_test_value_access.test | 10 | 0.000843s | 0.000870s | 0.000818s | byte equality observed |
| optional_xconfig_NO_LEGAL_CONVERT_FROM_REF_pass.test | 10 | 0.000790s | 0.000789s | 0.000788s | byte equality observed |
| optional_xconfig_NO_PROPER_ASSIGN_FROM_CONST_INT_pass.test | 10 | 0.000802s | 0.000807s | 0.000797s | byte equality observed |
| optional_xconfig_NO_PROPER_CONVERT_FROM_CONST_INT_pass.test | 10 | 0.000801s | 0.000811s | 0.000804s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44362912212).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
