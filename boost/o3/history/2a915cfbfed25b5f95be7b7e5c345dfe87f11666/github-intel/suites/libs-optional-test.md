# libs/optional/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| optional_test.test | RUN | 0.214644 | 1.353549 | 0.764840 | 0.001220 | 0.001690 | 0.001254 |
| optional_test_assign.test | RUN | 0.107432 | 0.275140 | 0.342841 | 0.001297 | 0.001226 | 0.001235 |
| optional_test_swap.test | RUN | 0.115522 | 0.346803 | 0.369046 | 0.001130 | 0.001231 | 0.001114 |
| optional_test_constexpr.test | COMPILE | 0.076207 | 0.183762 | 0.213308 | — | — | — |
| optional_test_wuninitialized.test | COMPILE | 0.114115 | 0.452975 | 0.368793 | — | — | — |
| optional_test_fwd_header.test | COMPILE | 0.069402 | 0.180996 | 0.209698 | — | — | — |
| optional_test_conversions_from_U.test | RUN | 0.122532 | 0.358558 | 0.408790 | 0.001122 | 0.001450 | 0.001252 |
| optional_test_constructors.test | RUN | 0.252384 | 1.355530 | 1.080419 | 0.001081 | 0.001304 | 0.001279 |
| optional_test_convert_from_T.test | RUN | 0.110559 | 0.290800 | 0.352958 | 0.000992 | 0.001483 | 0.001314 |
| optional_test_convert_assign.test | RUN | 0.110890 | 0.286057 | 0.352487 | 0.001166 | 0.001275 | 0.001323 |
| optional_test_empty_braces.test | RUN | 0.104615 | 0.275202 | 0.335639 | 0.001166 | 0.001380 | 0.001201 |
| optional_test_make_optional.test | RUN | 0.151515 | 0.441786 | 0.543760 | 0.001261 | 0.000953 | 0.001094 |
| optional_test_flat_map.test | RUN | 0.166860 | 0.519024 | 0.611971 | 0.001122 | 0.001228 | 0.001204 |
| optional_test_hash.test | RUN | 0.135890 | 0.405946 | 0.446351 | 0.001231 | 0.001191 | 0.001098 |
| optional_test_map.test | RUN | 0.169585 | 0.500286 | 0.644150 | 0.001343 | 0.001436 | 0.001262 |
| optional_test_tie.test | RUN | 0.116203 | 0.316241 | 0.357836 | 0.001083 | 0.001114 | 0.001123 |
| optional_test_ranges_find.test | RUN | 0.106103 | 0.271205 | 0.335985 | 0.001098 | 0.001233 | 0.001088 |
| optional_test_ref_assign_portable_minimum.test | RUN | 0.139593 | 0.811737 | 0.477129 | 0.000905 | 0.001260 | 0.001074 |
| optional_test_ref_assign_mutable_int.test | RUN | 0.113997 | 0.340846 | 0.360862 | 0.001187 | 0.001220 | 0.001209 |
| optional_test_ref_assign_const_int.test | RUN | 0.115569 | 0.350282 | 0.377239 | 0.001071 | 0.001060 | 0.001287 |
| optional_test_ref_converting_ctor.test | RUN | 0.127571 | 0.499997 | 0.411578 | 0.001192 | 0.001577 | 0.001065 |
| optional_test_ref_convert_assign_non_int.test | RUN | 0.111324 | 0.315882 | 0.357687 | 0.001175 | 0.001214 | 0.001063 |
| optional_test_ref_convert_assign_mutable_int.test | RUN | 0.102111 | 0.292512 | 0.343461 | 0.001179 | 0.001276 | 0.001215 |
| optional_test_ref_convert_assign_const_int.test | RUN | 0.103690 | 0.293626 | 0.336490 | 0.001168 | 0.001372 | 0.001157 |
| optional_test_ref_portable_minimum.test | RUN | 0.518175 | 1.646690 | 1.252435 | 0.001184 | 0.001572 | 0.001191 |
| optional_test_ref_move.test | RUN | 0.116770 | 0.318001 | 0.353586 | 0.000970 | 0.001358 | 0.001210 |
| optional_test_ref_to_val.test | RUN | 0.138461 | 0.632443 | 0.509018 | 0.001155 | 0.001310 | 0.001271 |
| optional_test_inplace_factory.test | RUN | 0.140089 | 0.582440 | 0.462390 | 0.001141 | 0.001560 | 0.001313 |
| optional_test_io.test | RUN | 0.138409 | 0.656453 | 0.477601 | 0.001280 | 0.001457 | 0.001237 |
| optional_test_move.test | RUN | 0.126829 | 0.427982 | 0.412613 | 0.000942 | 0.001333 | 0.001151 |
| optional_test_noexcept_move.test | RUN | 0.077332 | 0.187015 | 0.213757 | 0.000469 | 0.000593 | 0.001027 |
| optional_test_cmp_none.test | RUN | 0.107218 | 0.300349 | 0.341147 | 0.001107 | 0.001264 | 0.001140 |
| optional_test_value_access.test | RUN | 0.132615 | 0.514492 | 0.462945 | 0.001297 | 0.001276 | 0.001248 |
| optional_test_emplace.test | RUN | 0.129772 | 0.501194 | 0.470390 | 0.001188 | 0.001234 | 0.001142 |
| optional_test_minimum_requirements.test | RUN | 0.126505 | 0.401598 | 0.412877 | 0.001345 | 0.001513 | 0.001132 |
| optional_test_msvc_bug_workaround.test | RUN | 0.110266 | 0.276745 | 0.343042 | 0.001078 | 0.001491 | 0.001198 |
| optional_test_member_T.test | RUN | 0.103950 | 0.274388 | 0.331037 | 0.001169 | 0.001170 | 0.001224 |
| optional_test_tc_base.test | RUN | 0.104417 | 0.274116 | 0.335982 | 0.001250 | 0.001244 | 0.001086 |
| optional_test_sfinae_friendly_ctor.test | COMPILE | 0.083965 | 0.191238 | 0.217423 | — | — | — |
| optional_test_path_assignment.test | COMPILE | 0.068925 | 0.183333 | 0.211029 | — | — | — |
| optional_test_fail_const_swap.test | COMPILE_FAIL | 0.070882 | 0.170676 | 0.186345 | — | — | — |
| optional_test_ref_convert_assign_const_int_prevented.test | COMPILE_FAIL | 0.094471 | 0.236324 | 0.304743 | — | — | — |
| optional_test_fail1.test | COMPILE_FAIL | 0.070288 | 0.173533 | 0.199762 | — | — | — |
| optional_test_fail3a.test | COMPILE_FAIL | 0.066945 | 0.170151 | 0.197472 | — | — | — |
| optional_test_fail3b.test | COMPILE_FAIL | 0.070307 | 0.171507 | 0.199604 | — | — | — |
| optional_test_ref_fail1.test | COMPILE_FAIL | 0.066911 | 0.167126 | 0.193312 | — | — | — |
| optional_test_ref_fail3.test | COMPILE_FAIL | 0.068219 | 0.170105 | 0.199345 | — | — | — |
| optional_test_ref_fail4.test | COMPILE_FAIL | 0.070043 | 0.168118 | 0.197853 | — | — | — |
| optional_test_ref_fail_convert_from_temporary_optional_T.test | COMPILE_FAIL | 0.070424 | 0.166130 | 0.186957 | — | — | — |
| optional_test_inplace_fail.test | COMPILE_FAIL | 0.117295 | 0.271144 | 0.333603 | — | — | — |
| optional_test_inplace_fail2.test | COMPILE_FAIL | 0.115896 | 0.270249 | 0.335263 | — | — | — |
| optional_test_fail_implicit_bool_convert.test | COMPILE_FAIL | 0.070380 | 0.184050 | 0.190282 | — | — | — |
| optional_test_fail_copying_a_moveable_type.test | COMPILE_FAIL | 0.071278 | 0.172066 | 0.197596 | — | — | — |
| optional_test_fail_optional_rvalue_ref.test | COMPILE_FAIL | 0.070241 | 0.176484 | 0.193589 | — | — | — |
| optional_test_ref_fail_init_from_Trefref.test | COMPILE_FAIL | 0.071012 | 0.169784 | 0.194009 | — | — | — |
| optional_test_ref_fail_init_from_Urefref.test | COMPILE_FAIL | 0.070730 | 0.171124 | 0.195154 | — | — | — |
| optional_test_ref_fail_assign_from_Trefref.test | COMPILE_FAIL | 0.070773 | 0.167230 | 0.196960 | — | — | — |
| optional_test_ref_fail_assign_from_Urefref.test | COMPILE_FAIL | 0.070209 | 0.168900 | 0.197224 | — | — | — |
| optional_test_fail_convert_from_null.test | COMPILE_FAIL | 0.069294 | 0.171605 | 0.191877 | — | — | — |
| optional_test_fail_explicit_convert_in_value_or.test | COMPILE_FAIL | 0.069883 | 0.171920 | 0.192788 | — | — | — |
| optional_test_fail_explicit_convert_in_value_or_call.test | COMPILE_FAIL | 0.069326 | 0.176595 | 0.196405 | — | — | — |
| optional_test_fail_io_without_io.test | COMPILE_FAIL | 0.092467 | 0.227737 | 0.283565 | — | — | — |
| optional_test_fail_none_io_without_io.test | COMPILE_FAIL | 0.076659 | 0.194761 | 0.235374 | — | — | — |
| optional_test_fail_convert_assign_of_enums.test | COMPILE_FAIL | 0.071057 | 0.171590 | 0.201657 | — | — | — |
| optional_test_static_properties.test | RUN | 0.162574 | 0.393676 | 0.510668 | 0.001085 | 0.001485 | 0.001166 |
| optional_test_maybe_uninitialized_warning.test | COMPILE | 0.074807 | 0.186129 | 0.213436 | — | — | — |
| optional_test_deleted_default_ctor.test | COMPILE | 0.076068 | 0.186055 | 0.218200 | — | — | — |
| optional_test_constructible_from_other.test | COMPILE | 0.072919 | 0.182016 | 0.203885 | — | — | — |
| optional_xconfig_NO_PROPER_ASSIGN_FROM_CONST_INT_pass.test | RUN | 0.087855 | 0.229740 | 0.283290 | 0.001326 | 0.001272 | 0.001210 |
| optional_xconfig_NO_PROPER_ASSIGN_FROM_CONST_INT_fail.test | RUN_FAIL | 0.087680 | 0.236100 | 0.282007 | 0.001230 | 0.001027 | 0.001209 |
| optional_xconfig_NO_PROPER_CONVERT_FROM_CONST_INT_pass.test | RUN | 0.086320 | 0.228915 | 0.270832 | 0.001081 | 0.001140 | 0.001183 |
| optional_xconfig_NO_PROPER_CONVERT_FROM_CONST_INT_fail.test | RUN_FAIL | 0.092866 | 0.235408 | 0.282086 | 0.001199 | 0.001556 | 0.001259 |
| optional_xconfig_NO_LEGAL_CONVERT_FROM_REF_pass.test | RUN | 0.065967 | 0.150040 | 0.201462 | 0.000883 | 0.001015 | 0.000910 |
| optional_xconfig_NO_LEGAL_CONVERT_FROM_REF_fail.test | COMPILE_FAIL | 0.038497 | 0.150147 | 0.201004 | — | — | — |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.995× | 0.997×, 0.994× | 1.007× |
| clang | 1.013× | 1.011×, 1.015× | 1.007× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1364 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/43778388618).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| optional_test.test | 10 | 0.000876s | 0.000871s | 0.000860s | byte equality observed |
| optional_test_assign.test | 10 | 0.000819s | 0.000784s | 0.000805s | byte equality observed |
| optional_test_cmp_none.test | 10 | 0.000829s | 0.000797s | 0.000789s | byte equality observed |
| optional_test_constructors.test | 10 | 0.000838s | 0.000823s | 0.000797s | byte equality observed |
| optional_test_conversions_from_U.test | 10 | 0.000807s | 0.000825s | 0.000801s | byte equality observed |
| optional_test_convert_assign.test | 10 | 0.000814s | 0.000805s | 0.000831s | byte equality observed |
| optional_test_convert_from_T.test | 10 | 0.000822s | 0.000800s | 0.000824s | byte equality observed |
| optional_test_emplace.test | 10 | 0.000828s | 0.000816s | 0.000826s | byte equality observed |
| optional_test_empty_braces.test | 10 | 0.000796s | 0.000785s | 0.000801s | byte equality observed |
| optional_test_flat_map.test | 10 | 0.000804s | 0.000791s | 0.000816s | byte equality observed |
| optional_test_hash.test | 10 | 0.000798s | 0.000791s | 0.000808s | byte equality observed |
| optional_test_inplace_factory.test | 10 | 0.000800s | 0.000780s | 0.000813s | byte equality observed |
| optional_test_io.test | 10 | 0.000808s | 0.000821s | 0.000818s | byte equality observed |
| optional_test_make_optional.test | 10 | 0.000820s | 0.000815s | 0.000804s | byte equality observed |
| optional_test_map.test | 10 | 0.000801s | 0.000794s | 0.000810s | byte equality observed |
| optional_test_member_T.test | 10 | 0.000798s | 0.000802s | 0.000803s | byte equality observed |
| optional_test_minimum_requirements.test | 10 | 0.000831s | 0.000835s | 0.000841s | byte equality observed |
| optional_test_move.test | 10 | 0.000802s | 0.000837s | 0.000787s | byte equality observed |
| optional_test_msvc_bug_workaround.test | 10 | 0.000789s | 0.000818s | 0.000797s | byte equality observed |
| optional_test_noexcept_move.test | 10 | 0.000362s | 0.000360s | 0.000795s | byte equality observed |
| optional_test_ranges_find.test | 10 | 0.000810s | 0.000771s | 0.000804s | byte equality observed |
| optional_test_ref_assign_const_int.test | 10 | 0.000809s | 0.000786s | 0.000811s | byte equality observed |
| optional_test_ref_assign_mutable_int.test | 10 | 0.000818s | 0.000811s | 0.000803s | byte equality observed |
| optional_test_ref_assign_portable_minimum.test | 10 | 0.000813s | 0.000809s | 0.000834s | byte equality observed |
| optional_test_ref_convert_assign_const_int.test | 10 | 0.000806s | 0.000817s | 0.000807s | byte equality observed |
| optional_test_ref_convert_assign_mutable_int.test | 10 | 0.000807s | 0.000822s | 0.000794s | byte equality observed |
| optional_test_ref_convert_assign_non_int.test | 10 | 0.000795s | 0.000800s | 0.000804s | byte equality observed |
| optional_test_ref_converting_ctor.test | 10 | 0.000800s | 0.000795s | 0.000838s | byte equality observed |
| optional_test_ref_move.test | 10 | 0.000795s | 0.000821s | 0.000826s | byte equality observed |
| optional_test_ref_portable_minimum.test | 10 | 0.000850s | 0.000822s | 0.000849s | byte equality observed |
| optional_test_ref_to_val.test | 10 | 0.000804s | 0.000826s | 0.000800s | byte equality observed |
| optional_test_static_properties.test | 10 | 0.000804s | 0.000815s | 0.000799s | byte equality observed |
| optional_test_swap.test | 10 | 0.000820s | 0.000802s | 0.000807s | byte equality observed |
| optional_test_tc_base.test | 10 | 0.000828s | 0.000817s | 0.000812s | byte equality observed |
| optional_test_tie.test | 10 | 0.000825s | 0.000784s | 0.000818s | byte equality observed |
| optional_test_value_access.test | 10 | 0.000851s | 0.000851s | 0.000832s | byte equality observed |
| optional_xconfig_NO_LEGAL_CONVERT_FROM_REF_pass.test | 10 | 0.000787s | 0.000800s | 0.000773s | byte equality observed |
| optional_xconfig_NO_PROPER_ASSIGN_FROM_CONST_INT_pass.test | 10 | 0.000803s | 0.000798s | 0.000788s | byte equality observed |
| optional_xconfig_NO_PROPER_CONVERT_FROM_CONST_INT_pass.test | 10 | 0.000791s | 0.000803s | 0.000785s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/43778388618).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
