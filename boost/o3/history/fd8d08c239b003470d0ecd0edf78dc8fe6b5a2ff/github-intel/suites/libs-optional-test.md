# libs/optional/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| optional_test.test | RUN | 0.217738 | 1.332392 | 0.771997 | 0.001550 | 0.001627 | 0.001348 |
| optional_test_assign.test | RUN | 0.110429 | 0.275987 | 0.342283 | 0.000959 | 0.001374 | 0.001490 |
| optional_test_swap.test | RUN | 0.117322 | 0.345183 | 0.370440 | 0.001193 | 0.001369 | 0.001192 |
| optional_test_constexpr.test | COMPILE | 0.077832 | 0.182662 | 0.218587 | — | — | — |
| optional_test_wuninitialized.test | COMPILE | 0.119192 | 0.456887 | 0.369627 | — | — | — |
| optional_test_fwd_header.test | COMPILE | 0.077855 | 0.179357 | 0.210722 | — | — | — |
| optional_test_conversions_from_U.test | RUN | 0.126129 | 0.357778 | 0.410083 | 0.001225 | 0.001342 | 0.001302 |
| optional_test_constructors.test | RUN | 0.268554 | 1.337595 | 1.100247 | 0.001280 | 0.001385 | 0.001478 |
| optional_test_convert_from_T.test | RUN | 0.119924 | 0.292212 | 0.357233 | 0.001218 | 0.001490 | 0.001363 |
| optional_test_convert_assign.test | RUN | 0.111969 | 0.276374 | 0.352100 | 0.001401 | 0.001299 | 0.001402 |
| optional_test_empty_braces.test | RUN | 0.113946 | 0.279502 | 0.343665 | 0.001501 | 0.001449 | 0.001282 |
| optional_test_make_optional.test | RUN | 0.162148 | 0.434366 | 0.552548 | 0.001376 | 0.001173 | 0.001260 |
| optional_test_flat_map.test | RUN | 0.168927 | 0.517533 | 0.623537 | 0.001216 | 0.001223 | 0.001203 |
| optional_test_hash.test | RUN | 0.138954 | 0.409561 | 0.456032 | 0.001227 | 0.001178 | 0.001192 |
| optional_test_map.test | RUN | 0.177692 | 0.497278 | 0.648558 | 0.001198 | 0.001312 | 0.001277 |
| optional_test_tie.test | RUN | 0.122189 | 0.315169 | 0.366316 | 0.001440 | 0.001156 | 0.001332 |
| optional_test_ranges_find.test | RUN | 0.107982 | 0.271091 | 0.337585 | 0.001301 | 0.001228 | 0.001162 |
| optional_test_ref_assign_portable_minimum.test | RUN | 0.144514 | 0.813352 | 0.478864 | 0.001261 | 0.001314 | 0.001426 |
| optional_test_ref_assign_mutable_int.test | RUN | 0.117175 | 0.334098 | 0.359785 | 0.001250 | 0.001377 | 0.001455 |
| optional_test_ref_assign_const_int.test | RUN | 0.122847 | 0.349939 | 0.377669 | 0.001372 | 0.001259 | 0.001302 |
| optional_test_ref_converting_ctor.test | RUN | 0.127357 | 0.494866 | 0.413847 | 0.001358 | 0.001443 | 0.001238 |
| optional_test_ref_convert_assign_non_int.test | RUN | 0.117772 | 0.323234 | 0.364521 | 0.001233 | 0.001310 | 0.001308 |
| optional_test_ref_convert_assign_mutable_int.test | RUN | 0.116354 | 0.299584 | 0.349527 | 0.001332 | 0.001154 | 0.001330 |
| optional_test_ref_convert_assign_const_int.test | RUN | 0.109967 | 0.290400 | 0.349722 | 0.001521 | 0.001210 | 0.001498 |
| optional_test_ref_portable_minimum.test | RUN | 0.528351 | 1.620923 | 1.255078 | 0.001433 | 0.001244 | 0.001245 |
| optional_test_ref_move.test | RUN | 0.122268 | 0.312942 | 0.367702 | 0.001408 | 0.001355 | 0.001308 |
| optional_test_ref_to_val.test | RUN | 0.146052 | 0.640510 | 0.513484 | 0.001012 | 0.001377 | 0.001242 |
| optional_test_inplace_factory.test | RUN | 0.150667 | 0.587287 | 0.461776 | 0.001130 | 0.001162 | 0.001313 |
| optional_test_io.test | RUN | 0.140269 | 0.655117 | 0.486733 | 0.001215 | 0.001420 | 0.001280 |
| optional_test_move.test | RUN | 0.136013 | 0.438217 | 0.422245 | 0.001280 | 0.001386 | 0.001356 |
| optional_test_noexcept_move.test | RUN | 0.082060 | 0.186367 | 0.211152 | 0.000528 | 0.000596 | 0.001271 |
| optional_test_cmp_none.test | RUN | 0.118243 | 0.300986 | 0.339684 | 0.001295 | 0.001486 | 0.001362 |
| optional_test_value_access.test | RUN | 0.139672 | 0.515092 | 0.474857 | 0.001490 | 0.001376 | 0.001213 |
| optional_test_emplace.test | RUN | 0.137528 | 0.500864 | 0.476266 | 0.001171 | 0.001300 | 0.001399 |
| optional_test_minimum_requirements.test | RUN | 0.128424 | 0.399783 | 0.408340 | 0.001447 | 0.001403 | 0.001188 |
| optional_test_msvc_bug_workaround.test | RUN | 0.112179 | 0.274512 | 0.343178 | 0.001152 | 0.001386 | 0.001444 |
| optional_test_member_T.test | RUN | 0.112558 | 0.268653 | 0.333682 | 0.001293 | 0.001339 | 0.001244 |
| optional_test_tc_base.test | RUN | 0.109993 | 0.279345 | 0.338118 | 0.001224 | 0.001289 | 0.001040 |
| optional_test_sfinae_friendly_ctor.test | COMPILE | 0.082035 | 0.181017 | 0.216182 | — | — | — |
| optional_test_path_assignment.test | COMPILE | 0.078575 | 0.177089 | 0.212965 | — | — | — |
| optional_test_fail_const_swap.test | COMPILE_FAIL | 0.072170 | 0.168288 | 0.195539 | — | — | — |
| optional_test_ref_convert_assign_const_int_prevented.test | COMPILE_FAIL | 0.099166 | 0.234533 | 0.303120 | — | — | — |
| optional_test_fail1.test | COMPILE_FAIL | 0.073719 | 0.166010 | 0.194590 | — | — | — |
| optional_test_fail3a.test | COMPILE_FAIL | 0.073180 | 0.171948 | 0.201413 | — | — | — |
| optional_test_fail3b.test | COMPILE_FAIL | 0.074125 | 0.164954 | 0.200920 | — | — | — |
| optional_test_ref_fail1.test | COMPILE_FAIL | 0.074019 | 0.171035 | 0.201379 | — | — | — |
| optional_test_ref_fail3.test | COMPILE_FAIL | 0.073792 | 0.167623 | 0.195541 | — | — | — |
| optional_test_ref_fail4.test | COMPILE_FAIL | 0.075013 | 0.163473 | 0.199922 | — | — | — |
| optional_test_ref_fail_convert_from_temporary_optional_T.test | COMPILE_FAIL | 0.071936 | 0.169031 | 0.196070 | — | — | — |
| optional_test_inplace_fail.test | COMPILE_FAIL | 0.122387 | 0.269320 | 0.341120 | — | — | — |
| optional_test_inplace_fail2.test | COMPILE_FAIL | 0.119334 | 0.266824 | 0.337243 | — | — | — |
| optional_test_fail_implicit_bool_convert.test | COMPILE_FAIL | 0.072889 | 0.165970 | 0.197381 | — | — | — |
| optional_test_fail_copying_a_moveable_type.test | COMPILE_FAIL | 0.074091 | 0.173004 | 0.201454 | — | — | — |
| optional_test_fail_optional_rvalue_ref.test | COMPILE_FAIL | 0.071728 | 0.163675 | 0.193873 | — | — | — |
| optional_test_ref_fail_init_from_Trefref.test | COMPILE_FAIL | 0.073598 | 0.165372 | 0.194531 | — | — | — |
| optional_test_ref_fail_init_from_Urefref.test | COMPILE_FAIL | 0.074022 | 0.168695 | 0.192196 | — | — | — |
| optional_test_ref_fail_assign_from_Trefref.test | COMPILE_FAIL | 0.074215 | 0.167591 | 0.193232 | — | — | — |
| optional_test_ref_fail_assign_from_Urefref.test | COMPILE_FAIL | 0.075678 | 0.169751 | 0.198455 | — | — | — |
| optional_test_fail_convert_from_null.test | COMPILE_FAIL | 0.073840 | 0.167353 | 0.194449 | — | — | — |
| optional_test_fail_explicit_convert_in_value_or.test | COMPILE_FAIL | 0.073888 | 0.164348 | 0.196406 | — | — | — |
| optional_test_fail_explicit_convert_in_value_or_call.test | COMPILE_FAIL | 0.072192 | 0.164571 | 0.195956 | — | — | — |
| optional_test_fail_io_without_io.test | COMPILE_FAIL | 0.101064 | 0.225408 | 0.294907 | — | — | — |
| optional_test_fail_none_io_without_io.test | COMPILE_FAIL | 0.079832 | 0.188458 | 0.239518 | — | — | — |
| optional_test_fail_convert_assign_of_enums.test | COMPILE_FAIL | 0.074423 | 0.168993 | 0.206419 | — | — | — |
| optional_test_static_properties.test | RUN | 0.171804 | 0.383324 | 0.507216 | 0.001382 | 0.001150 | 0.001415 |
| optional_test_maybe_uninitialized_warning.test | COMPILE | 0.076608 | 0.187758 | 0.221596 | — | — | — |
| optional_test_deleted_default_ctor.test | COMPILE | 0.078887 | 0.187542 | 0.220910 | — | — | — |
| optional_test_constructible_from_other.test | COMPILE | 0.076637 | 0.171706 | 0.209030 | — | — | — |
| optional_xconfig_NO_PROPER_ASSIGN_FROM_CONST_INT_pass.test | RUN | 0.093590 | 0.229765 | 0.283810 | 0.001236 | 0.001329 | 0.001255 |
| optional_xconfig_NO_PROPER_ASSIGN_FROM_CONST_INT_fail.test | RUN_FAIL | 0.089873 | 0.231111 | 0.286656 | 0.001343 | 0.001186 | 0.001148 |
| optional_xconfig_NO_PROPER_CONVERT_FROM_CONST_INT_pass.test | RUN | 0.089191 | 0.229116 | 0.287113 | 0.001289 | 0.001067 | 0.001143 |
| optional_xconfig_NO_PROPER_CONVERT_FROM_CONST_INT_fail.test | RUN_FAIL | 0.094595 | 0.236561 | 0.283473 | 0.001472 | 0.001296 | 0.001384 |
| optional_xconfig_NO_LEGAL_CONVERT_FROM_REF_pass.test | RUN | 0.074668 | 0.138118 | 0.187209 | 0.000980 | 0.000896 | 0.000837 |
| optional_xconfig_NO_LEGAL_CONVERT_FROM_REF_fail.test | COMPILE_FAIL | 0.039278 | 0.139410 | 0.179851 | — | — | — |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.994× | 0.990×, 0.999× | 1.001× |
| clang | 1.011× | 1.009×, 1.013× | 0.997× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1364 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/43740486413).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| optional_test.test | 10 | 0.000862s | 0.000863s | 0.000876s | byte equality observed |
| optional_test_assign.test | 10 | 0.000803s | 0.000783s | 0.000798s | byte equality observed |
| optional_test_cmp_none.test | 10 | 0.000795s | 0.000800s | 0.000807s | byte equality observed |
| optional_test_constructors.test | 10 | 0.000809s | 0.000806s | 0.000812s | byte equality observed |
| optional_test_conversions_from_U.test | 10 | 0.000833s | 0.000820s | 0.000821s | byte equality observed |
| optional_test_convert_assign.test | 10 | 0.000793s | 0.000828s | 0.000816s | byte equality observed |
| optional_test_convert_from_T.test | 10 | 0.000794s | 0.000791s | 0.000801s | byte equality observed |
| optional_test_emplace.test | 10 | 0.000800s | 0.000819s | 0.000827s | byte equality observed |
| optional_test_empty_braces.test | 10 | 0.000788s | 0.000808s | 0.000789s | byte equality observed |
| optional_test_flat_map.test | 10 | 0.000778s | 0.000772s | 0.000786s | byte equality observed |
| optional_test_hash.test | 10 | 0.000844s | 0.000787s | 0.000786s | byte equality observed |
| optional_test_inplace_factory.test | 10 | 0.000843s | 0.000797s | 0.000805s | byte equality observed |
| optional_test_io.test | 10 | 0.000822s | 0.000846s | 0.000823s | byte equality observed |
| optional_test_make_optional.test | 10 | 0.000799s | 0.000817s | 0.000834s | byte equality observed |
| optional_test_map.test | 10 | 0.000805s | 0.000789s | 0.000788s | byte equality observed |
| optional_test_member_T.test | 10 | 0.000829s | 0.000808s | 0.000800s | byte equality observed |
| optional_test_minimum_requirements.test | 10 | 0.000844s | 0.000811s | 0.000828s | byte equality observed |
| optional_test_move.test | 10 | 0.000781s | 0.000822s | 0.000799s | byte equality observed |
| optional_test_msvc_bug_workaround.test | 10 | 0.000795s | 0.000793s | 0.000802s | byte equality observed |
| optional_test_noexcept_move.test | 10 | 0.000363s | 0.000361s | 0.000774s | byte equality observed |
| optional_test_ranges_find.test | 10 | 0.000800s | 0.000778s | 0.000809s | byte equality observed |
| optional_test_ref_assign_const_int.test | 10 | 0.000792s | 0.000799s | 0.000821s | byte equality observed |
| optional_test_ref_assign_mutable_int.test | 10 | 0.000812s | 0.000775s | 0.000814s | byte equality observed |
| optional_test_ref_assign_portable_minimum.test | 10 | 0.000817s | 0.000777s | 0.000846s | byte equality observed |
| optional_test_ref_convert_assign_const_int.test | 10 | 0.000829s | 0.000790s | 0.000846s | byte equality observed |
| optional_test_ref_convert_assign_mutable_int.test | 10 | 0.000821s | 0.000789s | 0.000827s | byte equality observed |
| optional_test_ref_convert_assign_non_int.test | 10 | 0.000820s | 0.000794s | 0.000810s | byte equality observed |
| optional_test_ref_converting_ctor.test | 10 | 0.000816s | 0.000799s | 0.000839s | byte equality observed |
| optional_test_ref_move.test | 10 | 0.000811s | 0.000820s | 0.000822s | byte equality observed |
| optional_test_ref_portable_minimum.test | 10 | 0.000825s | 0.000827s | 0.000821s | byte equality observed |
| optional_test_ref_to_val.test | 10 | 0.000804s | 0.000818s | 0.000819s | byte equality observed |
| optional_test_static_properties.test | 10 | 0.000823s | 0.000782s | 0.000787s | byte equality observed |
| optional_test_swap.test | 10 | 0.000826s | 0.000820s | 0.000804s | byte equality observed |
| optional_test_tc_base.test | 10 | 0.000787s | 0.000805s | 0.000831s | byte equality observed |
| optional_test_tie.test | 10 | 0.000807s | 0.000810s | 0.000822s | byte equality observed |
| optional_test_value_access.test | 10 | 0.000859s | 0.000835s | 0.000827s | byte equality observed |
| optional_xconfig_NO_LEGAL_CONVERT_FROM_REF_pass.test | 10 | 0.000780s | 0.000779s | 0.000770s | byte equality observed |
| optional_xconfig_NO_PROPER_ASSIGN_FROM_CONST_INT_pass.test | 10 | 0.000779s | 0.000811s | 0.000779s | byte equality observed |
| optional_xconfig_NO_PROPER_CONVERT_FROM_CONST_INT_pass.test | 10 | 0.000803s | 0.000796s | 0.000779s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/43740486413).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
