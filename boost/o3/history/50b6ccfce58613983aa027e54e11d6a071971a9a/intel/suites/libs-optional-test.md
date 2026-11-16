# libs/optional/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| optional_test.test | RUN | 0.175341 | 1.083191 | 0.596654 | 0.001132 | 0.001118 | 0.001151 |
| optional_test_assign.test | RUN | 0.089584 | 0.220921 | 0.260924 | 0.001029 | 0.001080 | 0.000928 |
| optional_test_swap.test | RUN | 0.093842 | 0.279016 | 0.279560 | 0.001083 | 0.001068 | 0.000955 |
| optional_test_constexpr.test | COMPILE | 0.064347 | 0.153078 | 0.165146 | — | — | — |
| optional_test_wuninitialized.test | COMPILE | 0.097093 | 0.371544 | 0.281259 | — | — | — |
| optional_test_fwd_header.test | COMPILE | 0.060760 | 0.150366 | 0.156916 | — | — | — |
| optional_test_conversions_from_U.test | RUN | 0.101588 | 0.284995 | 0.307698 | 0.001009 | 0.001055 | 0.000946 |
| optional_test_constructors.test | RUN | 0.212189 | 1.059726 | 0.835669 | 0.001026 | 0.001100 | 0.000970 |
| optional_test_convert_from_T.test | RUN | 0.090493 | 0.232652 | 0.267546 | 0.001027 | 0.001123 | 0.001026 |
| optional_test_convert_assign.test | RUN | 0.091704 | 0.229997 | 0.253158 | 0.001036 | 0.001083 | 0.001061 |
| optional_test_empty_braces.test | RUN | 0.087668 | 0.222672 | 0.254873 | 0.001045 | 0.001041 | 0.000990 |
| optional_test_make_optional.test | RUN | 0.128349 | 0.353868 | 0.414040 | 0.001042 | 0.000999 | 0.000985 |
| optional_test_flat_map.test | RUN | 0.141412 | 0.421629 | 0.481576 | 0.000996 | 0.001053 | 0.001082 |
| optional_test_hash.test | RUN | 0.110609 | 0.337082 | 0.342898 | 0.000992 | 0.001031 | 0.000944 |
| optional_test_map.test | RUN | 0.141445 | 0.397294 | 0.499022 | 0.001003 | 0.001060 | 0.001003 |
| optional_test_tie.test | RUN | 0.099089 | 0.259947 | 0.283872 | 0.000986 | 0.001071 | 0.000942 |
| optional_test_ranges_find.test | RUN | 0.088803 | 0.218028 | 0.249027 | 0.000948 | 0.001034 | 0.001040 |
| optional_test_ref_assign_portable_minimum.test | RUN | 0.115445 | 0.658174 | 0.373712 | 0.001020 | 0.001103 | 0.001057 |
| optional_test_ref_assign_mutable_int.test | RUN | 0.093569 | 0.276061 | 0.276889 | 0.001041 | 0.001137 | 0.000988 |
| optional_test_ref_assign_const_int.test | RUN | 0.095258 | 0.290197 | 0.286103 | 0.001057 | 0.001099 | 0.000951 |
| optional_test_ref_converting_ctor.test | RUN | 0.103946 | 0.399169 | 0.316492 | 0.001060 | 0.001055 | 0.000969 |
| optional_test_ref_convert_assign_non_int.test | RUN | 0.092454 | 0.269095 | 0.274232 | 0.001013 | 0.001041 | 0.000962 |
| optional_test_ref_convert_assign_mutable_int.test | RUN | 0.089382 | 0.243565 | 0.264996 | 0.001034 | 0.001061 | 0.001003 |
| optional_test_ref_convert_assign_const_int.test | RUN | 0.087438 | 0.238809 | 0.261233 | 0.000989 | 0.001085 | 0.000977 |
| optional_test_ref_portable_minimum.test | RUN | 0.396951 | 1.316266 | 0.971632 | 0.001000 | 0.001171 | 0.001017 |
| optional_test_ref_move.test | RUN | 0.095272 | 0.265653 | 0.279510 | 0.001052 | 0.001101 | 0.000979 |
| optional_test_ref_to_val.test | RUN | 0.117943 | 0.514079 | 0.394809 | 0.001018 | 0.001046 | 0.000929 |
| optional_test_inplace_factory.test | RUN | 0.120518 | 0.465255 | 0.361250 | 0.000983 | 0.001010 | 0.001049 |
| optional_test_io.test | RUN | 0.116521 | 0.544986 | 0.382767 | 0.000987 | 0.001107 | 0.000959 |
| optional_test_move.test | RUN | 0.107372 | 0.355120 | 0.321114 | 0.000983 | 0.001084 | 0.000973 |
| optional_test_noexcept_move.test | RUN | 0.062992 | 0.148799 | 0.168000 | 0.000474 | 0.000451 | 0.000939 |
| optional_test_cmp_none.test | RUN | 0.090847 | 0.243836 | 0.264716 | 0.001105 | 0.001074 | 0.001074 |
| optional_test_value_access.test | RUN | 0.110498 | 0.424568 | 0.357500 | 0.001025 | 0.001056 | 0.001096 |
| optional_test_emplace.test | RUN | 0.111914 | 0.411251 | 0.362789 | 0.001104 | 0.001113 | 0.001039 |
| optional_test_minimum_requirements.test | RUN | 0.100990 | 0.328111 | 0.314708 | 0.001065 | 0.001113 | 0.001028 |
| optional_test_msvc_bug_workaround.test | RUN | 0.088029 | 0.221610 | 0.260405 | 0.001052 | 0.001135 | 0.001128 |
| optional_test_member_T.test | RUN | 0.087548 | 0.218637 | 0.258559 | 0.000960 | 0.001093 | 0.001007 |
| optional_test_tc_base.test | RUN | 0.087536 | 0.224481 | 0.264778 | 0.001038 | 0.001097 | 0.000985 |
| optional_test_sfinae_friendly_ctor.test | COMPILE | 0.066058 | 0.153590 | 0.170272 | — | — | — |
| optional_test_path_assignment.test | COMPILE | 0.063389 | 0.148801 | 0.163473 | — | — | — |
| optional_test_fail_const_swap.test | COMPILE_FAIL | 0.059175 | 0.137494 | 0.151115 | — | — | — |
| optional_test_ref_convert_assign_const_int_prevented.test | COMPILE_FAIL | 0.080846 | 0.191657 | 0.232332 | — | — | — |
| optional_test_fail1.test | COMPILE_FAIL | 0.057831 | 0.135282 | 0.151096 | — | — | — |
| optional_test_fail3a.test | COMPILE_FAIL | 0.058128 | 0.137710 | 0.152886 | — | — | — |
| optional_test_fail3b.test | COMPILE_FAIL | 0.060388 | 0.139178 | 0.156345 | — | — | — |
| optional_test_ref_fail1.test | COMPILE_FAIL | 0.059093 | 0.135197 | 0.151377 | — | — | — |
| optional_test_ref_fail3.test | COMPILE_FAIL | 0.059019 | 0.135758 | 0.149255 | — | — | — |
| optional_test_ref_fail4.test | COMPILE_FAIL | 0.058600 | 0.134936 | 0.153240 | — | — | — |
| optional_test_ref_fail_convert_from_temporary_optional_T.test | COMPILE_FAIL | 0.058104 | 0.135709 | 0.150965 | — | — | — |
| optional_test_inplace_fail.test | COMPILE_FAIL | 0.097272 | 0.217313 | 0.257849 | — | — | — |
| optional_test_inplace_fail2.test | COMPILE_FAIL | 0.096647 | 0.214422 | 0.258342 | — | — | — |
| optional_test_fail_implicit_bool_convert.test | COMPILE_FAIL | 0.057708 | 0.136355 | 0.148697 | — | — | — |
| optional_test_fail_copying_a_moveable_type.test | COMPILE_FAIL | 0.059158 | 0.137154 | 0.153180 | — | — | — |
| optional_test_fail_optional_rvalue_ref.test | COMPILE_FAIL | 0.057580 | 0.134362 | 0.145258 | — | — | — |
| optional_test_ref_fail_init_from_Trefref.test | COMPILE_FAIL | 0.058236 | 0.135723 | 0.149491 | — | — | — |
| optional_test_ref_fail_init_from_Urefref.test | COMPILE_FAIL | 0.057444 | 0.134697 | 0.151025 | — | — | — |
| optional_test_ref_fail_assign_from_Trefref.test | COMPILE_FAIL | 0.059321 | 0.136637 | 0.150720 | — | — | — |
| optional_test_ref_fail_assign_from_Urefref.test | COMPILE_FAIL | 0.058832 | 0.135548 | 0.150895 | — | — | — |
| optional_test_fail_convert_from_null.test | COMPILE_FAIL | 0.056701 | 0.135265 | 0.151122 | — | — | — |
| optional_test_fail_explicit_convert_in_value_or.test | COMPILE_FAIL | 0.057405 | 0.138805 | 0.150285 | — | — | — |
| optional_test_fail_explicit_convert_in_value_or_call.test | COMPILE_FAIL | 0.057320 | 0.137070 | 0.149221 | — | — | — |
| optional_test_fail_io_without_io.test | COMPILE_FAIL | 0.079133 | 0.183627 | 0.219725 | — | — | — |
| optional_test_fail_none_io_without_io.test | COMPILE_FAIL | 0.062695 | 0.152176 | 0.182372 | — | — | — |
| optional_test_fail_convert_assign_of_enums.test | COMPILE_FAIL | 0.058871 | 0.138839 | 0.153195 | — | — | — |
| optional_test_static_properties.test | RUN | 0.135478 | 0.310336 | 0.378070 | 0.000984 | 0.001000 | 0.001012 |
| optional_test_maybe_uninitialized_warning.test | COMPILE | 0.061772 | 0.151971 | 0.162218 | — | — | — |
| optional_test_deleted_default_ctor.test | COMPILE | 0.062307 | 0.151187 | 0.167632 | — | — | — |
| optional_test_constructible_from_other.test | COMPILE | 0.059360 | 0.144474 | 0.154198 | — | — | — |
| optional_xconfig_NO_PROPER_ASSIGN_FROM_CONST_INT_pass.test | RUN | 0.070718 | 0.186453 | 0.212217 | 0.001046 | 0.001127 | 0.001051 |
| optional_xconfig_NO_PROPER_ASSIGN_FROM_CONST_INT_fail.test | RUN_FAIL | 0.070266 | 0.189207 | 0.211340 | 0.001115 | 0.000932 | 0.000965 |
| optional_xconfig_NO_PROPER_CONVERT_FROM_CONST_INT_pass.test | RUN | 0.070719 | 0.186203 | 0.210386 | 0.000985 | 0.001065 | 0.000914 |
| optional_xconfig_NO_PROPER_CONVERT_FROM_CONST_INT_fail.test | RUN_FAIL | 0.070556 | 0.189291 | 0.212762 | 0.000959 | 0.001041 | 0.001011 |
| optional_xconfig_NO_LEGAL_CONVERT_FROM_REF_pass.test | RUN | 0.067699 | 0.164154 | 0.199195 | 0.000866 | 0.000980 | 0.000961 |
| optional_xconfig_NO_LEGAL_CONVERT_FROM_REF_fail.test | COMPILE_FAIL | 0.044271 | 0.158281 | 0.192505 | — | — | — |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.995× | 0.992×, 0.997× | 1.001× |
| clang | 1.010× | 1.011×, 1.009× | 1.004× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1364 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/43947487361).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| optional_test.test | 10 | 0.001015s | 0.001020s | 0.001010s | byte equality observed |
| optional_test_assign.test | 10 | 0.000939s | 0.000940s | 0.000939s | byte equality observed |
| optional_test_cmp_none.test | 10 | 0.000952s | 0.000940s | 0.000950s | byte equality observed |
| optional_test_constructors.test | 10 | 0.000955s | 0.000946s | 0.000954s | byte equality observed |
| optional_test_conversions_from_U.test | 10 | 0.000936s | 0.000948s | 0.000937s | byte equality observed |
| optional_test_convert_assign.test | 10 | 0.000943s | 0.000942s | 0.000944s | byte equality observed |
| optional_test_convert_from_T.test | 10 | 0.000950s | 0.000937s | 0.000947s | byte equality observed |
| optional_test_emplace.test | 10 | 0.000971s | 0.000962s | 0.000976s | byte equality observed |
| optional_test_empty_braces.test | 10 | 0.000951s | 0.000930s | 0.000944s | byte equality observed |
| optional_test_flat_map.test | 10 | 0.000944s | 0.000929s | 0.000943s | byte equality observed |
| optional_test_hash.test | 10 | 0.000949s | 0.000948s | 0.000964s | byte equality observed |
| optional_test_inplace_factory.test | 10 | 0.000951s | 0.000945s | 0.000938s | byte equality observed |
| optional_test_io.test | 10 | 0.000967s | 0.000973s | 0.000955s | byte equality observed |
| optional_test_make_optional.test | 10 | 0.000947s | 0.000942s | 0.000942s | byte equality observed |
| optional_test_map.test | 10 | 0.000943s | 0.000938s | 0.000935s | byte equality observed |
| optional_test_member_T.test | 10 | 0.000944s | 0.000934s | 0.000935s | byte equality observed |
| optional_test_minimum_requirements.test | 10 | 0.000974s | 0.000980s | 0.000973s | byte equality observed |
| optional_test_move.test | 10 | 0.000946s | 0.000930s | 0.000939s | byte equality observed |
| optional_test_msvc_bug_workaround.test | 10 | 0.000936s | 0.000930s | 0.000932s | byte equality observed |
| optional_test_noexcept_move.test | 10 | 0.000446s | 0.000458s | 0.000930s | byte equality observed |
| optional_test_ranges_find.test | 10 | 0.000932s | 0.000931s | 0.000943s | byte equality observed |
| optional_test_ref_assign_const_int.test | 10 | 0.000936s | 0.000947s | 0.000946s | byte equality observed |
| optional_test_ref_assign_mutable_int.test | 10 | 0.000948s | 0.000951s | 0.000931s | byte equality observed |
| optional_test_ref_assign_portable_minimum.test | 10 | 0.000951s | 0.000946s | 0.000952s | byte equality observed |
| optional_test_ref_convert_assign_const_int.test | 10 | 0.000940s | 0.000940s | 0.000945s | byte equality observed |
| optional_test_ref_convert_assign_mutable_int.test | 10 | 0.000935s | 0.000947s | 0.000940s | byte equality observed |
| optional_test_ref_convert_assign_non_int.test | 10 | 0.000957s | 0.000944s | 0.000936s | byte equality observed |
| optional_test_ref_converting_ctor.test | 10 | 0.000949s | 0.000941s | 0.000936s | byte equality observed |
| optional_test_ref_move.test | 10 | 0.000947s | 0.000964s | 0.000942s | byte equality observed |
| optional_test_ref_portable_minimum.test | 10 | 0.001002s | 0.000963s | 0.000977s | byte equality observed |
| optional_test_ref_to_val.test | 10 | 0.000952s | 0.000944s | 0.000936s | byte equality observed |
| optional_test_static_properties.test | 10 | 0.000936s | 0.000943s | 0.000941s | byte equality observed |
| optional_test_swap.test | 10 | 0.000947s | 0.000943s | 0.000939s | byte equality observed |
| optional_test_tc_base.test | 10 | 0.000950s | 0.000942s | 0.000952s | byte equality observed |
| optional_test_tie.test | 10 | 0.000947s | 0.000943s | 0.000948s | byte equality observed |
| optional_test_value_access.test | 10 | 0.000994s | 0.000989s | 0.000984s | byte equality observed |
| optional_xconfig_NO_LEGAL_CONVERT_FROM_REF_pass.test | 10 | 0.000927s | 0.000920s | 0.000930s | byte equality observed |
| optional_xconfig_NO_PROPER_ASSIGN_FROM_CONST_INT_pass.test | 10 | 0.000951s | 0.000941s | 0.000936s | byte equality observed |
| optional_xconfig_NO_PROPER_CONVERT_FROM_CONST_INT_pass.test | 10 | 0.000952s | 0.000950s | 0.000939s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/43947487361).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
