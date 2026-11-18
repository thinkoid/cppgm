# libs/optional/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| optional_test.test | RUN | 0.306078 | 1.895617 | 1.186808 | 0.002106 | 0.002100 | 0.002230 |
| optional_test_assign.test | RUN | 0.165587 | 0.417525 | 0.559310 | 0.002068 | 0.002246 | 0.002147 |
| optional_test_swap.test | RUN | 0.178288 | 0.513592 | 0.629976 | 0.001844 | 0.002292 | 0.001935 |
| optional_test_constexpr.test | COMPILE | 0.118790 | 0.281734 | 0.367192 | — | — | — |
| optional_test_wuninitialized.test | COMPILE | 0.173729 | 0.664899 | 0.562983 | — | — | — |
| optional_test_fwd_header.test | COMPILE | 0.116534 | 0.279447 | 0.349691 | — | — | — |
| optional_test_conversions_from_U.test | RUN | 0.188573 | 0.534179 | 0.647876 | 0.002112 | 0.002352 | 0.002215 |
| optional_test_constructors.test | RUN | 0.383776 | 1.951111 | 1.727623 | 0.001722 | 0.001944 | 0.002120 |
| optional_test_convert_from_T.test | RUN | 0.181622 | 0.437422 | 0.635110 | 0.001945 | 0.002246 | 0.002022 |
| optional_test_convert_assign.test | RUN | 0.168324 | 0.415563 | 0.546793 | 0.001874 | 0.002120 | 0.001951 |
| optional_test_empty_braces.test | RUN | 0.169147 | 0.432957 | 0.547190 | 0.002113 | 0.002198 | 0.002244 |
| optional_test_make_optional.test | RUN | 0.239197 | 0.647038 | 0.868303 | 0.002142 | 0.002194 | 0.002022 |
| optional_test_flat_map.test | RUN | 0.248067 | 0.761153 | 0.980438 | 0.001974 | 0.002088 | 0.001946 |
| optional_test_hash.test | RUN | 0.216568 | 0.592710 | 0.754825 | 0.001954 | 0.002298 | 0.002061 |
| optional_test_map.test | RUN | 0.255740 | 0.719042 | 1.002212 | 0.001888 | 0.001818 | 0.001904 |
| optional_test_tie.test | RUN | 0.184557 | 0.469804 | 0.618170 | 0.001974 | 0.001982 | 0.002394 |
| optional_test_ranges_find.test | RUN | 0.167035 | 0.411279 | 0.556344 | 0.001864 | 0.002176 | 0.001609 |
| optional_test_ref_assign_portable_minimum.test | RUN | 0.208579 | 1.186990 | 0.762424 | 0.001573 | 0.002018 | 0.002076 |
| optional_test_ref_assign_mutable_int.test | RUN | 0.174653 | 0.510245 | 0.619114 | 0.001848 | 0.002082 | 0.001668 |
| optional_test_ref_assign_const_int.test | RUN | 0.184082 | 0.533670 | 0.577513 | 0.002108 | 0.001996 | 0.001947 |
| optional_test_ref_converting_ctor.test | RUN | 0.190964 | 0.754198 | 0.685206 | 0.001913 | 0.002304 | 0.002088 |
| optional_test_ref_convert_assign_non_int.test | RUN | 0.183769 | 0.486486 | 0.574299 | 0.002017 | 0.001824 | 0.002026 |
| optional_test_ref_convert_assign_mutable_int.test | RUN | 0.174550 | 0.431465 | 0.549238 | 0.002027 | 0.002065 | 0.002078 |
| optional_test_ref_convert_assign_const_int.test | RUN | 0.171126 | 0.446248 | 0.548586 | 0.002139 | 0.001752 | 0.001774 |
| optional_test_ref_portable_minimum.test | RUN | 0.680403 | 2.346985 | 1.990739 | 0.001884 | 0.001982 | 0.001698 |
| optional_test_ref_move.test | RUN | 0.176198 | 0.462884 | 0.592256 | 0.002152 | 0.002222 | 0.002114 |
| optional_test_ref_to_val.test | RUN | 0.221773 | 0.934575 | 0.828540 | 0.001977 | 0.002158 | 0.001776 |
| optional_test_inplace_factory.test | RUN | 0.219404 | 0.847673 | 0.751362 | 0.002207 | 0.002186 | 0.001948 |
| optional_test_io.test | RUN | 0.211109 | 0.933754 | 0.770335 | 0.002008 | 0.002044 | 0.002052 |
| optional_test_move.test | RUN | 0.205706 | 0.645849 | 0.667291 | 0.002134 | 0.002198 | 0.002050 |
| optional_test_noexcept_move.test | RUN | 0.123997 | 0.291464 | 0.331926 | 0.000808 | 0.000912 | 0.001947 |
| optional_test_cmp_none.test | RUN | 0.170448 | 0.449618 | 0.570797 | 0.002174 | 0.002478 | 0.002038 |
| optional_test_value_access.test | RUN | 0.210503 | 0.750525 | 0.729346 | 0.002026 | 0.002144 | 0.001933 |
| optional_test_emplace.test | RUN | 0.205672 | 0.739839 | 0.740253 | 0.001899 | 0.001967 | 0.002091 |
| optional_test_minimum_requirements.test | RUN | 0.192976 | 0.607997 | 0.647560 | 0.002040 | 0.002095 | 0.002214 |
| optional_test_msvc_bug_workaround.test | RUN | 0.171356 | 0.418784 | 0.579098 | 0.001950 | 0.002029 | 0.002078 |
| optional_test_member_T.test | RUN | 0.168189 | 0.413003 | 0.562312 | 0.001901 | 0.002186 | 0.001914 |
| optional_test_tc_base.test | RUN | 0.170537 | 0.426677 | 0.517714 | 0.001872 | 0.001865 | 0.001907 |
| optional_test_sfinae_friendly_ctor.test | COMPILE | 0.131980 | 0.282725 | 0.368788 | — | — | — |
| optional_test_path_assignment.test | COMPILE | 0.122798 | 0.284376 | 0.344227 | — | — | — |
| optional_test_fail_const_swap.test | COMPILE_FAIL | 0.114860 | 0.256140 | 0.346855 | — | — | — |
| optional_test_ref_convert_assign_const_int_prevented.test | COMPILE_FAIL | 0.159561 | 0.360557 | 0.509060 | — | — | — |
| optional_test_fail1.test | COMPILE_FAIL | 0.114840 | 0.258900 | 0.328202 | — | — | — |
| optional_test_fail3a.test | COMPILE_FAIL | 0.115784 | 0.273315 | 0.333394 | — | — | — |
| optional_test_fail3b.test | COMPILE_FAIL | 0.117978 | 0.272048 | 0.341174 | — | — | — |
| optional_test_ref_fail1.test | COMPILE_FAIL | 0.113534 | 0.254170 | 0.330499 | — | — | — |
| optional_test_ref_fail3.test | COMPILE_FAIL | 0.112210 | 0.256663 | 0.322544 | — | — | — |
| optional_test_ref_fail4.test | COMPILE_FAIL | 0.112234 | 0.262871 | 0.341704 | — | — | — |
| optional_test_ref_fail_convert_from_temporary_optional_T.test | COMPILE_FAIL | 0.112370 | 0.273841 | 0.332205 | — | — | — |
| optional_test_inplace_fail.test | COMPILE_FAIL | 0.186957 | 0.398441 | 0.569918 | — | — | — |
| optional_test_inplace_fail2.test | COMPILE_FAIL | 0.185563 | 0.398834 | 0.588846 | — | — | — |
| optional_test_fail_implicit_bool_convert.test | COMPILE_FAIL | 0.111696 | 0.256819 | 0.331394 | — | — | — |
| optional_test_fail_copying_a_moveable_type.test | COMPILE_FAIL | 0.118441 | 0.267822 | 0.333887 | — | — | — |
| optional_test_fail_optional_rvalue_ref.test | COMPILE_FAIL | 0.113995 | 0.259293 | 0.312924 | — | — | — |
| optional_test_ref_fail_init_from_Trefref.test | COMPILE_FAIL | 0.114816 | 0.256175 | 0.332144 | — | — | — |
| optional_test_ref_fail_init_from_Urefref.test | COMPILE_FAIL | 0.113144 | 0.257812 | 0.339127 | — | — | — |
| optional_test_ref_fail_assign_from_Trefref.test | COMPILE_FAIL | 0.116706 | 0.267485 | 0.328357 | — | — | — |
| optional_test_ref_fail_assign_from_Urefref.test | COMPILE_FAIL | 0.114852 | 0.259631 | 0.334446 | — | — | — |
| optional_test_fail_convert_from_null.test | COMPILE_FAIL | 0.112030 | 0.258223 | 0.321047 | — | — | — |
| optional_test_fail_explicit_convert_in_value_or.test | COMPILE_FAIL | 0.111950 | 0.263192 | 0.332651 | — | — | — |
| optional_test_fail_explicit_convert_in_value_or_call.test | COMPILE_FAIL | 0.113442 | 0.264469 | 0.327971 | — | — | — |
| optional_test_fail_io_without_io.test | COMPILE_FAIL | 0.155984 | 0.340236 | 0.484213 | — | — | — |
| optional_test_fail_none_io_without_io.test | COMPILE_FAIL | 0.123688 | 0.278408 | 0.397041 | — | — | — |
| optional_test_fail_convert_assign_of_enums.test | COMPILE_FAIL | 0.115238 | 0.267328 | 0.357002 | — | — | — |
| optional_test_static_properties.test | RUN | 0.270714 | 0.595528 | 0.858167 | 0.002100 | 0.002238 | 0.002132 |
| optional_test_maybe_uninitialized_warning.test | COMPILE | 0.120548 | 0.271713 | 0.370105 | — | — | — |
| optional_test_deleted_default_ctor.test | COMPILE | 0.123445 | 0.275100 | 0.374959 | — | — | — |
| optional_test_constructible_from_other.test | COMPILE | 0.113248 | 0.279997 | 0.357413 | — | — | — |
| optional_xconfig_NO_PROPER_ASSIGN_FROM_CONST_INT_pass.test | RUN | 0.138172 | 0.341119 | 0.476821 | 0.002150 | 0.001954 | 0.001956 |
| optional_xconfig_NO_PROPER_ASSIGN_FROM_CONST_INT_fail.test | RUN_FAIL | 0.136497 | 0.354025 | 0.449601 | 0.001890 | 0.001971 | 0.001734 |
| optional_xconfig_NO_PROPER_CONVERT_FROM_CONST_INT_pass.test | RUN | 0.135175 | 0.355287 | 0.477733 | 0.001746 | 0.001876 | 0.001763 |
| optional_xconfig_NO_PROPER_CONVERT_FROM_CONST_INT_fail.test | RUN_FAIL | 0.140223 | 0.357366 | 0.459193 | 0.002109 | 0.002360 | 0.002198 |
| optional_xconfig_NO_LEGAL_CONVERT_FROM_REF_pass.test | RUN | 0.114817 | 0.231753 | 0.309430 | 0.001551 | 0.001630 | 0.001532 |
| optional_xconfig_NO_LEGAL_CONVERT_FROM_REF_fail.test | COMPILE_FAIL | 0.064233 | 0.228856 | 0.291492 | — | — | — |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.990× | 0.988×, 0.991× | 1.002× |
| clang | 1.013× | 1.012×, 1.015× | 1.011× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1359 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44390936409).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| optional_test.test | 10 | 0.001394s | 0.001367s | 0.001370s | byte equality observed |
| optional_test_assign.test | 10 | 0.001267s | 0.001320s | 0.001292s | byte equality observed |
| optional_test_cmp_none.test | 10 | 0.001267s | 0.001249s | 0.001295s | byte equality observed |
| optional_test_constructors.test | 10 | 0.001304s | 0.001268s | 0.001316s | byte equality observed |
| optional_test_conversions_from_U.test | 10 | 0.001309s | 0.001310s | 0.001282s | byte equality observed |
| optional_test_convert_assign.test | 10 | 0.001288s | 0.001294s | 0.001350s | byte equality observed |
| optional_test_convert_from_T.test | 10 | 0.001291s | 0.001278s | 0.001297s | byte equality observed |
| optional_test_emplace.test | 10 | 0.001326s | 0.001318s | 0.001317s | byte equality observed |
| optional_test_empty_braces.test | 10 | 0.001319s | 0.001259s | 0.001323s | byte equality observed |
| optional_test_flat_map.test | 10 | 0.001288s | 0.001253s | 0.001296s | byte equality observed |
| optional_test_hash.test | 10 | 0.001295s | 0.001303s | 0.001312s | byte equality observed |
| optional_test_inplace_factory.test | 10 | 0.001311s | 0.001306s | 0.001303s | byte equality observed |
| optional_test_io.test | 10 | 0.001304s | 0.001303s | 0.001367s | byte equality observed |
| optional_test_make_optional.test | 10 | 0.001288s | 0.001247s | 0.001261s | byte equality observed |
| optional_test_map.test | 10 | 0.001283s | 0.001305s | 0.001304s | byte equality observed |
| optional_test_member_T.test | 10 | 0.001303s | 0.001280s | 0.001318s | byte equality observed |
| optional_test_minimum_requirements.test | 10 | 0.001328s | 0.001322s | 0.001341s | byte equality observed |
| optional_test_move.test | 10 | 0.001280s | 0.001248s | 0.001325s | byte equality observed |
| optional_test_msvc_bug_workaround.test | 10 | 0.001308s | 0.001318s | 0.001306s | byte equality observed |
| optional_test_noexcept_move.test | 10 | 0.000594s | 0.000577s | 0.001242s | byte equality observed |
| optional_test_ranges_find.test | 10 | 0.001325s | 0.001285s | 0.001298s | byte equality observed |
| optional_test_ref_assign_const_int.test | 10 | 0.001307s | 0.001292s | 0.001274s | byte equality observed |
| optional_test_ref_assign_mutable_int.test | 10 | 0.001288s | 0.001276s | 0.001312s | byte equality observed |
| optional_test_ref_assign_portable_minimum.test | 10 | 0.001326s | 0.001281s | 0.001308s | byte equality observed |
| optional_test_ref_convert_assign_const_int.test | 10 | 0.001276s | 0.001321s | 0.001297s | byte equality observed |
| optional_test_ref_convert_assign_mutable_int.test | 10 | 0.001290s | 0.001293s | 0.001292s | byte equality observed |
| optional_test_ref_convert_assign_non_int.test | 10 | 0.001287s | 0.001280s | 0.001285s | byte equality observed |
| optional_test_ref_converting_ctor.test | 10 | 0.001321s | 0.001327s | 0.001297s | byte equality observed |
| optional_test_ref_move.test | 10 | 0.001311s | 0.001265s | 0.001296s | byte equality observed |
| optional_test_ref_portable_minimum.test | 10 | 0.001363s | 0.001311s | 0.001355s | byte equality observed |
| optional_test_ref_to_val.test | 10 | 0.001278s | 0.001275s | 0.001293s | byte equality observed |
| optional_test_static_properties.test | 10 | 0.001287s | 0.001257s | 0.001297s | byte equality observed |
| optional_test_swap.test | 10 | 0.001331s | 0.001292s | 0.001310s | byte equality observed |
| optional_test_tc_base.test | 10 | 0.001292s | 0.001304s | 0.001324s | byte equality observed |
| optional_test_tie.test | 10 | 0.001327s | 0.001276s | 0.001258s | byte equality observed |
| optional_test_value_access.test | 10 | 0.001349s | 0.001353s | 0.001363s | byte equality observed |
| optional_xconfig_NO_LEGAL_CONVERT_FROM_REF_pass.test | 10 | 0.001253s | 0.001260s | 0.001259s | byte equality observed |
| optional_xconfig_NO_PROPER_ASSIGN_FROM_CONST_INT_pass.test | 10 | 0.001271s | 0.001275s | 0.001279s | byte equality observed |
| optional_xconfig_NO_PROPER_CONVERT_FROM_CONST_INT_pass.test | 10 | 0.001267s | 0.001290s | 0.001300s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44390936409).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
