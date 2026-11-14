# libs/optional/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| optional_test.test | RUN | 0.252542 | 1.535555 | 0.962887 | 0.001966 | 0.001916 | 0.001904 |
| optional_test_assign.test | RUN | 0.138920 | 0.338167 | 0.460499 | 0.001746 | 0.001788 | 0.001728 |
| optional_test_swap.test | RUN | 0.148753 | 0.411564 | 0.522492 | 0.001670 | 0.001826 | 0.001598 |
| optional_test_constexpr.test | COMPILE | 0.103006 | 0.226455 | 0.295049 | — | — | — |
| optional_test_wuninitialized.test | COMPILE | 0.145333 | 0.560399 | 0.443139 | — | — | — |
| optional_test_fwd_header.test | COMPILE | 0.098369 | 0.219152 | 0.285400 | — | — | — |
| optional_test_conversions_from_U.test | RUN | 0.163305 | 0.435358 | 0.546516 | 0.001785 | 0.001944 | 0.001810 |
| optional_test_constructors.test | RUN | 0.327811 | 1.592661 | 1.370151 | 0.001660 | 0.001818 | 0.001840 |
| optional_test_convert_from_T.test | RUN | 0.147367 | 0.354796 | 0.456887 | 0.001818 | 0.001836 | 0.001675 |
| optional_test_convert_assign.test | RUN | 0.146997 | 0.358441 | 0.479897 | 0.001670 | 0.001898 | 0.001946 |
| optional_test_empty_braces.test | RUN | 0.144308 | 0.325392 | 0.412521 | 0.001880 | 0.001943 | 0.001815 |
| optional_test_make_optional.test | RUN | 0.198484 | 0.531291 | 0.684984 | 0.001815 | 0.001862 | 0.001882 |
| optional_test_flat_map.test | RUN | 0.208920 | 0.606380 | 0.779423 | 0.002049 | 0.001429 | 0.001805 |
| optional_test_hash.test | RUN | 0.182051 | 0.498125 | 0.605266 | 0.001361 | 0.001774 | 0.001832 |
| optional_test_map.test | RUN | 0.220753 | 0.570597 | 0.789644 | 0.001848 | 0.001564 | 0.001578 |
| optional_test_tie.test | RUN | 0.154979 | 0.375876 | 0.476965 | 0.001796 | 0.001724 | 0.001551 |
| optional_test_ranges_find.test | RUN | 0.134190 | 0.330683 | 0.424786 | 0.001833 | 0.001594 | 0.001604 |
| optional_test_ref_assign_portable_minimum.test | RUN | 0.168778 | 0.928276 | 0.595388 | 0.001600 | 0.001598 | 0.001895 |
| optional_test_ref_assign_mutable_int.test | RUN | 0.157860 | 0.404113 | 0.452700 | 0.001784 | 0.001806 | 0.001681 |
| optional_test_ref_assign_const_int.test | RUN | 0.150273 | 0.420190 | 0.491214 | 0.001766 | 0.001587 | 0.001591 |
| optional_test_ref_converting_ctor.test | RUN | 0.163228 | 0.575859 | 0.539060 | 0.001719 | 0.001819 | 0.001784 |
| optional_test_ref_convert_assign_non_int.test | RUN | 0.148044 | 0.385050 | 0.457422 | 0.001618 | 0.001816 | 0.001799 |
| optional_test_ref_convert_assign_mutable_int.test | RUN | 0.148954 | 0.350961 | 0.439882 | 0.001895 | 0.001762 | 0.001587 |
| optional_test_ref_convert_assign_const_int.test | RUN | 0.143666 | 0.352279 | 0.447224 | 0.001884 | 0.001552 | 0.001744 |
| optional_test_ref_portable_minimum.test | RUN | 0.590484 | 1.873972 | 1.574625 | 0.001631 | 0.001862 | 0.001387 |
| optional_test_ref_move.test | RUN | 0.149197 | 0.368899 | 0.452784 | 0.001872 | 0.001858 | 0.001802 |
| optional_test_ref_to_val.test | RUN | 0.180640 | 0.743473 | 0.638965 | 0.001775 | 0.001916 | 0.001887 |
| optional_test_inplace_factory.test | RUN | 0.181491 | 0.677178 | 0.586707 | 0.001574 | 0.001884 | 0.001473 |
| optional_test_io.test | RUN | 0.174262 | 0.750788 | 0.592388 | 0.001906 | 0.001470 | 0.001700 |
| optional_test_move.test | RUN | 0.163632 | 0.506854 | 0.520941 | 0.001750 | 0.001526 | 0.001807 |
| optional_test_noexcept_move.test | RUN | 0.099724 | 0.221341 | 0.266118 | 0.000844 | 0.000757 | 0.001459 |
| optional_test_cmp_none.test | RUN | 0.143159 | 0.358443 | 0.430606 | 0.001560 | 0.001835 | 0.001824 |
| optional_test_value_access.test | RUN | 0.169620 | 0.587746 | 0.610106 | 0.001661 | 0.001679 | 0.001540 |
| optional_test_emplace.test | RUN | 0.170317 | 0.584150 | 0.619729 | 0.002044 | 0.001646 | 0.001508 |
| optional_test_minimum_requirements.test | RUN | 0.158410 | 0.465088 | 0.507847 | 0.001645 | 0.001804 | 0.001821 |
| optional_test_msvc_bug_workaround.test | RUN | 0.137907 | 0.330454 | 0.449261 | 0.001676 | 0.001954 | 0.001796 |
| optional_test_member_T.test | RUN | 0.142899 | 0.326728 | 0.428107 | 0.001665 | 0.001806 | 0.001578 |
| optional_test_tc_base.test | RUN | 0.139145 | 0.322403 | 0.422904 | 0.001630 | 0.001713 | 0.001464 |
| optional_test_sfinae_friendly_ctor.test | COMPILE | 0.106423 | 0.238023 | 0.306574 | — | — | — |
| optional_test_path_assignment.test | COMPILE | 0.103176 | 0.222698 | 0.284445 | — | — | — |
| optional_test_fail_const_swap.test | COMPILE_FAIL | 0.095087 | 0.205139 | 0.269432 | — | — | — |
| optional_test_ref_convert_assign_const_int_prevented.test | COMPILE_FAIL | 0.129165 | 0.286964 | 0.385017 | — | — | — |
| optional_test_fail1.test | COMPILE_FAIL | 0.093902 | 0.203502 | 0.257635 | — | — | — |
| optional_test_fail3a.test | COMPILE_FAIL | 0.093115 | 0.213317 | 0.279777 | — | — | — |
| optional_test_fail3b.test | COMPILE_FAIL | 0.099378 | 0.210018 | 0.266298 | — | — | — |
| optional_test_ref_fail1.test | COMPILE_FAIL | 0.094842 | 0.230429 | 0.257293 | — | — | — |
| optional_test_ref_fail3.test | COMPILE_FAIL | 0.090895 | 0.231245 | 0.258882 | — | — | — |
| optional_test_ref_fail4.test | COMPILE_FAIL | 0.091558 | 0.223249 | 0.257954 | — | — | — |
| optional_test_ref_fail_convert_from_temporary_optional_T.test | COMPILE_FAIL | 0.092619 | 0.214905 | 0.262059 | — | — | — |
| optional_test_inplace_fail.test | COMPILE_FAIL | 0.153906 | 0.330585 | 0.451280 | — | — | — |
| optional_test_inplace_fail2.test | COMPILE_FAIL | 0.153775 | 0.325104 | 0.454168 | — | — | — |
| optional_test_fail_implicit_bool_convert.test | COMPILE_FAIL | 0.091616 | 0.213390 | 0.254332 | — | — | — |
| optional_test_fail_copying_a_moveable_type.test | COMPILE_FAIL | 0.093439 | 0.213378 | 0.264543 | — | — | — |
| optional_test_fail_optional_rvalue_ref.test | COMPILE_FAIL | 0.089666 | 0.203133 | 0.248821 | — | — | — |
| optional_test_ref_fail_init_from_Trefref.test | COMPILE_FAIL | 0.099460 | 0.206980 | 0.263057 | — | — | — |
| optional_test_ref_fail_init_from_Urefref.test | COMPILE_FAIL | 0.099031 | 0.206851 | 0.259645 | — | — | — |
| optional_test_ref_fail_assign_from_Trefref.test | COMPILE_FAIL | 0.098519 | 0.207281 | 0.264015 | — | — | — |
| optional_test_ref_fail_assign_from_Urefref.test | COMPILE_FAIL | 0.095506 | 0.206664 | 0.252714 | — | — | — |
| optional_test_fail_convert_from_null.test | COMPILE_FAIL | 0.088178 | 0.208073 | 0.266859 | — | — | — |
| optional_test_fail_explicit_convert_in_value_or.test | COMPILE_FAIL | 0.088696 | 0.208360 | 0.269704 | — | — | — |
| optional_test_fail_explicit_convert_in_value_or_call.test | COMPILE_FAIL | 0.091414 | 0.208080 | 0.258272 | — | — | — |
| optional_test_fail_io_without_io.test | COMPILE_FAIL | 0.125085 | 0.269529 | 0.383722 | — | — | — |
| optional_test_fail_none_io_without_io.test | COMPILE_FAIL | 0.098725 | 0.230565 | 0.321889 | — | — | — |
| optional_test_fail_convert_assign_of_enums.test | COMPILE_FAIL | 0.094033 | 0.211526 | 0.278283 | — | — | — |
| optional_test_static_properties.test | RUN | 0.226565 | 0.476232 | 0.680040 | 0.001979 | 0.001784 | 0.001732 |
| optional_test_maybe_uninitialized_warning.test | COMPILE | 0.100563 | 0.225159 | 0.294139 | — | — | — |
| optional_test_deleted_default_ctor.test | COMPILE | 0.100670 | 0.226722 | 0.297496 | — | — | — |
| optional_test_constructible_from_other.test | COMPILE | 0.095805 | 0.212559 | 0.280868 | — | — | — |
| optional_xconfig_NO_PROPER_ASSIGN_FROM_CONST_INT_pass.test | RUN | 0.119807 | 0.279681 | 0.381470 | 0.001663 | 0.001776 | 0.001538 |
| optional_xconfig_NO_PROPER_ASSIGN_FROM_CONST_INT_fail.test | RUN_FAIL | 0.118402 | 0.279935 | 0.346424 | 0.001547 | 0.001689 | 0.001616 |
| optional_xconfig_NO_PROPER_CONVERT_FROM_CONST_INT_pass.test | RUN | 0.121696 | 0.270531 | 0.374587 | 0.001755 | 0.001750 | 0.001290 |
| optional_xconfig_NO_PROPER_CONVERT_FROM_CONST_INT_fail.test | RUN_FAIL | 0.115229 | 0.288239 | 0.352566 | 0.001388 | 0.001836 | 0.001397 |
| optional_xconfig_NO_LEGAL_CONVERT_FROM_REF_pass.test | RUN | 0.100007 | 0.179643 | 0.261154 | 0.001407 | 0.001373 | 0.001223 |
| optional_xconfig_NO_LEGAL_CONVERT_FROM_REF_fail.test | COMPILE_FAIL | 0.062064 | 0.167058 | 0.254875 | — | — | — |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.980× | 0.983×, 0.977× | 1.010× |
| clang | 1.039×† | 1.010×, 1.069× | 1.085× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1362 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43628287753).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| optional_test.test | 10 | 0.001092s | 0.001048s | 0.001074s | byte equality observed |
| optional_test_assign.test | 10 | 0.001011s | 0.000989s | 0.001061s | byte equality observed |
| optional_test_cmp_none.test | 10 | 0.001003s | 0.001024s | 0.000987s | byte equality observed |
| optional_test_constructors.test | 10 | 0.001048s | 0.001011s | 0.001009s | byte equality observed |
| optional_test_conversions_from_U.test | 10 | 0.001026s | 0.000987s | 0.001025s | byte equality observed |
| optional_test_convert_assign.test | 10 | 0.001021s | 0.000999s | 0.001032s | byte equality observed |
| optional_test_convert_from_T.test | 10 | 0.001039s | 0.000982s | 0.001022s | byte equality observed |
| optional_test_emplace.test | 10 | 0.001018s | 0.001007s | 0.001020s | byte equality observed |
| optional_test_empty_braces.test | 10 | 0.001014s | 0.001013s | 0.001054s | byte equality observed |
| optional_test_flat_map.test | 10 | 0.001025s | 0.000976s | 0.000998s | byte equality observed |
| optional_test_hash.test | 10 | 0.001003s | 0.000991s | 0.001012s | byte equality observed |
| optional_test_inplace_factory.test | 10 | 0.001011s | 0.001013s | 0.001070s | byte equality observed |
| optional_test_io.test | 10 | 0.001027s | 0.001020s | 0.001025s | byte equality observed |
| optional_test_make_optional.test | 10 | 0.001008s | 0.001007s | 0.001022s | byte equality observed |
| optional_test_map.test | 10 | 0.000998s | 0.000999s | 0.001061s | byte equality observed |
| optional_test_member_T.test | 10 | 0.001016s | 0.001002s | 0.001031s | byte equality observed |
| optional_test_minimum_requirements.test | 10 | 0.001033s | 0.001039s | 0.001091s | byte equality observed |
| optional_test_move.test | 10 | 0.001009s | 0.000998s | 0.001011s | byte equality observed |
| optional_test_msvc_bug_workaround.test | 10 | 0.001036s | 0.001007s | 0.000979s | byte equality observed |
| optional_test_noexcept_move.test | 10 | 0.000478s | 0.000457s | 0.000965s | byte equality observed |
| optional_test_ranges_find.test | 10 | 0.001030s | 0.000999s | 0.001018s | byte equality observed |
| optional_test_ref_assign_const_int.test | 10 | 0.001019s | 0.000990s | 0.001043s | byte equality observed |
| optional_test_ref_assign_mutable_int.test | 10 | 0.001044s | 0.001016s | 0.001007s | byte equality observed |
| optional_test_ref_assign_portable_minimum.test | 10 | 0.001028s | 0.000987s | 0.000969s | byte equality observed |
| optional_test_ref_convert_assign_const_int.test | 10 | 0.001032s | 0.001001s | 0.000987s | byte equality observed |
| optional_test_ref_convert_assign_mutable_int.test | 10 | 0.001019s | 0.000987s | 0.001036s | byte equality observed |
| optional_test_ref_convert_assign_non_int.test | 10 | 0.001033s | 0.000974s | 0.000998s | byte equality observed |
| optional_test_ref_converting_ctor.test | 10 | 0.001049s | 0.000978s | 0.001018s | byte equality observed |
| optional_test_ref_move.test | 10 | 0.001016s | 0.000992s | 0.001062s | byte equality observed |
| optional_test_ref_portable_minimum.test | 10 | 0.001048s | 0.001020s | 0.001046s | byte equality observed |
| optional_test_ref_to_val.test | 10 | 0.001000s | 0.000991s | 0.000979s | byte equality observed |
| optional_test_static_properties.test | 10 | 0.000994s | 0.000977s | 0.001011s | byte equality observed |
| optional_test_swap.test | 10 | 0.000994s | 0.001013s | 0.001025s | byte equality observed |
| optional_test_tc_base.test | 10 | 0.001006s | 0.001037s | 0.001032s | byte equality observed |
| optional_test_tie.test | 10 | 0.001003s | 0.000995s | 0.001042s | byte equality observed |
| optional_test_value_access.test | 10 | 0.001045s | 0.001019s | 0.001036s | byte equality observed |
| optional_xconfig_NO_LEGAL_CONVERT_FROM_REF_pass.test | 10 | 0.000997s | 0.000966s | 0.000969s | byte equality observed |
| optional_xconfig_NO_PROPER_ASSIGN_FROM_CONST_INT_pass.test | 10 | 0.000996s | 0.001002s | 0.001038s | byte equality observed |
| optional_xconfig_NO_PROPER_CONVERT_FROM_CONST_INT_pass.test | 10 | 0.000993s | 0.001006s | 0.000993s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43628287753).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
