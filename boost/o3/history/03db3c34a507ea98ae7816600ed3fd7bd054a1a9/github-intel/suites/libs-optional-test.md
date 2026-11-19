# libs/optional/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| optional_test.test | RUN | 0.211533 | 1.308361 | 0.755897 | 0.001202 | 0.001504 | 0.001258 |
| optional_test_assign.test | RUN | 0.105297 | 0.274547 | 0.336225 | 0.001204 | 0.001364 | 0.001141 |
| optional_test_swap.test | RUN | 0.114271 | 0.338884 | 0.373171 | 0.001165 | 0.001323 | 0.001092 |
| optional_test_constexpr.test | COMPILE | 0.075834 | 0.181487 | 0.213299 | — | — | — |
| optional_test_wuninitialized.test | COMPILE | 0.112372 | 0.444661 | 0.362059 | — | — | — |
| optional_test_fwd_header.test | COMPILE | 0.076062 | 0.180449 | 0.209829 | — | — | — |
| optional_test_conversions_from_U.test | RUN | 0.122248 | 0.350618 | 0.401463 | 0.001214 | 0.001357 | 0.001124 |
| optional_test_constructors.test | RUN | 0.258654 | 1.308526 | 1.074848 | 0.001204 | 0.001130 | 0.001424 |
| optional_test_convert_from_T.test | RUN | 0.110769 | 0.289305 | 0.363030 | 0.001213 | 0.001180 | 0.001171 |
| optional_test_convert_assign.test | RUN | 0.109335 | 0.274333 | 0.339539 | 0.001124 | 0.001146 | 0.001180 |
| optional_test_empty_braces.test | RUN | 0.106911 | 0.275427 | 0.335804 | 0.001296 | 0.001372 | 0.001300 |
| optional_test_make_optional.test | RUN | 0.154730 | 0.426688 | 0.546440 | 0.001463 | 0.000978 | 0.001159 |
| optional_test_flat_map.test | RUN | 0.170107 | 0.504091 | 0.616515 | 0.001258 | 0.001202 | 0.001154 |
| optional_test_hash.test | RUN | 0.136604 | 0.400150 | 0.454353 | 0.001317 | 0.001118 | 0.001084 |
| optional_test_map.test | RUN | 0.170565 | 0.485631 | 0.632147 | 0.001384 | 0.001205 | 0.000969 |
| optional_test_tie.test | RUN | 0.116966 | 0.315945 | 0.373712 | 0.001146 | 0.001416 | 0.001210 |
| optional_test_ranges_find.test | RUN | 0.110352 | 0.262832 | 0.324811 | 0.001321 | 0.001194 | 0.001081 |
| optional_test_ref_assign_portable_minimum.test | RUN | 0.138010 | 0.794867 | 0.477374 | 0.001105 | 0.001216 | 0.001145 |
| optional_test_ref_assign_mutable_int.test | RUN | 0.114229 | 0.334785 | 0.364384 | 0.001376 | 0.001410 | 0.001172 |
| optional_test_ref_assign_const_int.test | RUN | 0.113753 | 0.347295 | 0.371418 | 0.000912 | 0.001426 | 0.001069 |
| optional_test_ref_converting_ctor.test | RUN | 0.124775 | 0.491931 | 0.393909 | 0.001171 | 0.001408 | 0.001058 |
| optional_test_ref_convert_assign_non_int.test | RUN | 0.111279 | 0.320612 | 0.353677 | 0.001207 | 0.001206 | 0.001088 |
| optional_test_ref_convert_assign_mutable_int.test | RUN | 0.107254 | 0.290074 | 0.330573 | 0.001358 | 0.001232 | 0.001126 |
| optional_test_ref_convert_assign_const_int.test | RUN | 0.108379 | 0.290315 | 0.338380 | 0.001066 | 0.001058 | 0.001098 |
| optional_test_ref_portable_minimum.test | RUN | 0.467660 | 1.620058 | 1.233420 | 0.001277 | 0.001316 | 0.001127 |
| optional_test_ref_move.test | RUN | 0.114229 | 0.302262 | 0.346558 | 0.001199 | 0.001243 | 0.001174 |
| optional_test_ref_to_val.test | RUN | 0.140343 | 0.626669 | 0.498155 | 0.001367 | 0.001257 | 0.001149 |
| optional_test_inplace_factory.test | RUN | 0.145786 | 0.572739 | 0.459486 | 0.001121 | 0.001472 | 0.001085 |
| optional_test_io.test | RUN | 0.136720 | 0.645275 | 0.480153 | 0.001125 | 0.001344 | 0.001134 |
| optional_test_move.test | RUN | 0.126330 | 0.430308 | 0.409876 | 0.001087 | 0.001187 | 0.001074 |
| optional_test_noexcept_move.test | RUN | 0.077803 | 0.181423 | 0.211180 | 0.000521 | 0.000518 | 0.001079 |
| optional_test_cmp_none.test | RUN | 0.109857 | 0.292489 | 0.336848 | 0.001320 | 0.001406 | 0.001212 |
| optional_test_value_access.test | RUN | 0.133735 | 0.508193 | 0.465488 | 0.001302 | 0.001403 | 0.001142 |
| optional_test_emplace.test | RUN | 0.135219 | 0.491259 | 0.462057 | 0.001131 | 0.001042 | 0.001156 |
| optional_test_minimum_requirements.test | RUN | 0.123520 | 0.392786 | 0.404104 | 0.001502 | 0.001243 | 0.001060 |
| optional_test_msvc_bug_workaround.test | RUN | 0.111194 | 0.266112 | 0.337015 | 0.001100 | 0.001173 | 0.001211 |
| optional_test_member_T.test | RUN | 0.107453 | 0.265131 | 0.327899 | 0.001182 | 0.001293 | 0.001066 |
| optional_test_tc_base.test | RUN | 0.110034 | 0.274982 | 0.331587 | 0.001173 | 0.001286 | 0.001018 |
| optional_test_sfinae_friendly_ctor.test | COMPILE | 0.082557 | 0.184678 | 0.213147 | — | — | — |
| optional_test_path_assignment.test | COMPILE | 0.078494 | 0.178835 | 0.206593 | — | — | — |
| optional_test_fail_const_swap.test | COMPILE_FAIL | 0.068182 | 0.165276 | 0.192120 | — | — | — |
| optional_test_ref_convert_assign_const_int_prevented.test | COMPILE_FAIL | 0.096287 | 0.229869 | 0.300861 | — | — | — |
| optional_test_fail1.test | COMPILE_FAIL | 0.069576 | 0.158391 | 0.189867 | — | — | — |
| optional_test_fail3a.test | COMPILE_FAIL | 0.070747 | 0.165063 | 0.195147 | — | — | — |
| optional_test_fail3b.test | COMPILE_FAIL | 0.072796 | 0.171018 | 0.196844 | — | — | — |
| optional_test_ref_fail1.test | COMPILE_FAIL | 0.070650 | 0.165434 | 0.193152 | — | — | — |
| optional_test_ref_fail3.test | COMPILE_FAIL | 0.071984 | 0.166830 | 0.194503 | — | — | — |
| optional_test_ref_fail4.test | COMPILE_FAIL | 0.071381 | 0.161497 | 0.198067 | — | — | — |
| optional_test_ref_fail_convert_from_temporary_optional_T.test | COMPILE_FAIL | 0.070775 | 0.167543 | 0.188940 | — | — | — |
| optional_test_inplace_fail.test | COMPILE_FAIL | 0.116185 | 0.263214 | 0.334457 | — | — | — |
| optional_test_inplace_fail2.test | COMPILE_FAIL | 0.117277 | 0.262062 | 0.338478 | — | — | — |
| optional_test_fail_implicit_bool_convert.test | COMPILE_FAIL | 0.069960 | 0.163621 | 0.194101 | — | — | — |
| optional_test_fail_copying_a_moveable_type.test | COMPILE_FAIL | 0.069915 | 0.168982 | 0.195626 | — | — | — |
| optional_test_fail_optional_rvalue_ref.test | COMPILE_FAIL | 0.069138 | 0.163268 | 0.189194 | — | — | — |
| optional_test_ref_fail_init_from_Trefref.test | COMPILE_FAIL | 0.071502 | 0.163799 | 0.197895 | — | — | — |
| optional_test_ref_fail_init_from_Urefref.test | COMPILE_FAIL | 0.072093 | 0.165480 | 0.196218 | — | — | — |
| optional_test_ref_fail_assign_from_Trefref.test | COMPILE_FAIL | 0.071190 | 0.164527 | 0.186998 | — | — | — |
| optional_test_ref_fail_assign_from_Urefref.test | COMPILE_FAIL | 0.071671 | 0.165726 | 0.196302 | — | — | — |
| optional_test_fail_convert_from_null.test | COMPILE_FAIL | 0.070353 | 0.164417 | 0.192303 | — | — | — |
| optional_test_fail_explicit_convert_in_value_or.test | COMPILE_FAIL | 0.069701 | 0.168849 | 0.190635 | — | — | — |
| optional_test_fail_explicit_convert_in_value_or_call.test | COMPILE_FAIL | 0.069204 | 0.167511 | 0.191166 | — | — | — |
| optional_test_fail_io_without_io.test | COMPILE_FAIL | 0.094672 | 0.215436 | 0.285134 | — | — | — |
| optional_test_fail_none_io_without_io.test | COMPILE_FAIL | 0.077208 | 0.181978 | 0.238191 | — | — | — |
| optional_test_fail_convert_assign_of_enums.test | COMPILE_FAIL | 0.071900 | 0.168504 | 0.201234 | — | — | — |
| optional_test_static_properties.test | RUN | 0.163015 | 0.379778 | 0.500534 | 0.001138 | 0.001348 | 0.001283 |
| optional_test_maybe_uninitialized_warning.test | COMPILE | 0.074134 | 0.186131 | 0.215981 | — | — | — |
| optional_test_deleted_default_ctor.test | COMPILE | 0.075843 | 0.186778 | 0.217582 | — | — | — |
| optional_test_constructible_from_other.test | COMPILE | 0.071695 | 0.174711 | 0.203338 | — | — | — |
| optional_xconfig_NO_PROPER_ASSIGN_FROM_CONST_INT_pass.test | RUN | 0.087336 | 0.229371 | 0.283222 | 0.001383 | 0.001182 | 0.000869 |
| optional_xconfig_NO_PROPER_ASSIGN_FROM_CONST_INT_fail.test | RUN_FAIL | 0.087863 | 0.232281 | 0.279910 | 0.001088 | 0.001185 | 0.001249 |
| optional_xconfig_NO_PROPER_CONVERT_FROM_CONST_INT_pass.test | RUN | 0.086786 | 0.226608 | 0.270065 | 0.001110 | 0.001101 | 0.001063 |
| optional_xconfig_NO_PROPER_CONVERT_FROM_CONST_INT_fail.test | RUN_FAIL | 0.091792 | 0.235908 | 0.277787 | 0.001360 | 0.001388 | 0.000861 |
| optional_xconfig_NO_LEGAL_CONVERT_FROM_REF_pass.test | RUN | 0.069162 | 0.151970 | 0.206442 | 0.000872 | 0.000852 | 0.000813 |
| optional_xconfig_NO_LEGAL_CONVERT_FROM_REF_fail.test | COMPILE_FAIL | 0.047690 | 0.132426 | 0.195201 | — | — | — |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 1.003× | 1.007×, 0.998× | 0.990× |
| clang | 1.022× | 1.032×, 1.012× | 1.004× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1364 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44402206984).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| optional_test.test | 10 | 0.000848s | 0.000865s | 0.000845s | byte equality observed |
| optional_test_assign.test | 10 | 0.000806s | 0.000796s | 0.000777s | byte equality observed |
| optional_test_cmp_none.test | 10 | 0.000806s | 0.000791s | 0.000807s | byte equality observed |
| optional_test_constructors.test | 10 | 0.000803s | 0.000791s | 0.000790s | byte equality observed |
| optional_test_conversions_from_U.test | 10 | 0.000792s | 0.000809s | 0.000821s | byte equality observed |
| optional_test_convert_assign.test | 10 | 0.000799s | 0.000804s | 0.000817s | byte equality observed |
| optional_test_convert_from_T.test | 10 | 0.000812s | 0.000831s | 0.000841s | byte equality observed |
| optional_test_emplace.test | 10 | 0.000841s | 0.000854s | 0.000800s | byte equality observed |
| optional_test_empty_braces.test | 10 | 0.000786s | 0.000796s | 0.000770s | byte equality observed |
| optional_test_flat_map.test | 10 | 0.000775s | 0.000799s | 0.000799s | byte equality observed |
| optional_test_hash.test | 10 | 0.000797s | 0.000802s | 0.000836s | byte equality observed |
| optional_test_inplace_factory.test | 10 | 0.000805s | 0.000818s | 0.000823s | byte equality observed |
| optional_test_io.test | 10 | 0.000824s | 0.000834s | 0.000834s | byte equality observed |
| optional_test_make_optional.test | 10 | 0.000804s | 0.000833s | 0.000842s | byte equality observed |
| optional_test_map.test | 10 | 0.000809s | 0.000768s | 0.000822s | byte equality observed |
| optional_test_member_T.test | 10 | 0.000786s | 0.000803s | 0.000810s | byte equality observed |
| optional_test_minimum_requirements.test | 10 | 0.000819s | 0.000829s | 0.000859s | byte equality observed |
| optional_test_move.test | 10 | 0.000793s | 0.000797s | 0.000795s | byte equality observed |
| optional_test_msvc_bug_workaround.test | 10 | 0.000793s | 0.000802s | 0.000796s | byte equality observed |
| optional_test_noexcept_move.test | 10 | 0.000360s | 0.000359s | 0.000805s | byte equality observed |
| optional_test_ranges_find.test | 10 | 0.000784s | 0.000784s | 0.000782s | byte equality observed |
| optional_test_ref_assign_const_int.test | 10 | 0.000770s | 0.000807s | 0.000800s | byte equality observed |
| optional_test_ref_assign_mutable_int.test | 10 | 0.000781s | 0.000778s | 0.000813s | byte equality observed |
| optional_test_ref_assign_portable_minimum.test | 10 | 0.000808s | 0.000808s | 0.000788s | byte equality observed |
| optional_test_ref_convert_assign_const_int.test | 10 | 0.000787s | 0.000798s | 0.000801s | byte equality observed |
| optional_test_ref_convert_assign_mutable_int.test | 10 | 0.000797s | 0.000800s | 0.000786s | byte equality observed |
| optional_test_ref_convert_assign_non_int.test | 10 | 0.000806s | 0.000797s | 0.000800s | byte equality observed |
| optional_test_ref_converting_ctor.test | 10 | 0.000813s | 0.000823s | 0.000789s | byte equality observed |
| optional_test_ref_move.test | 10 | 0.000811s | 0.000791s | 0.000791s | byte equality observed |
| optional_test_ref_portable_minimum.test | 10 | 0.000839s | 0.000818s | 0.000820s | byte equality observed |
| optional_test_ref_to_val.test | 10 | 0.000788s | 0.000776s | 0.000790s | byte equality observed |
| optional_test_static_properties.test | 10 | 0.000787s | 0.000784s | 0.000803s | byte equality observed |
| optional_test_swap.test | 10 | 0.000809s | 0.000797s | 0.000815s | byte equality observed |
| optional_test_tc_base.test | 10 | 0.000810s | 0.000776s | 0.000812s | byte equality observed |
| optional_test_tie.test | 10 | 0.000787s | 0.000827s | 0.000811s | byte equality observed |
| optional_test_value_access.test | 10 | 0.000821s | 0.000835s | 0.000832s | byte equality observed |
| optional_xconfig_NO_LEGAL_CONVERT_FROM_REF_pass.test | 10 | 0.000763s | 0.000796s | 0.000780s | byte equality observed |
| optional_xconfig_NO_PROPER_ASSIGN_FROM_CONST_INT_pass.test | 10 | 0.000780s | 0.000798s | 0.000783s | byte equality observed |
| optional_xconfig_NO_PROPER_CONVERT_FROM_CONST_INT_pass.test | 10 | 0.000808s | 0.000800s | 0.000813s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44402206984).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
