# libs/optional/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| optional_test.test | RUN | 0.184188 | 1.069561 | 0.593496 | 0.001027 | 0.001120 | 0.001022 |
| optional_test_assign.test | RUN | 0.089139 | 0.227387 | 0.258976 | 0.000965 | 0.000897 | 0.000919 |
| optional_test_swap.test | RUN | 0.099104 | 0.290885 | 0.279284 | 0.000980 | 0.000980 | 0.000935 |
| optional_test_constexpr.test | COMPILE | 0.063239 | 0.148394 | 0.160673 | — | — | — |
| optional_test_wuninitialized.test | COMPILE | 0.094931 | 0.364028 | 0.266666 | — | — | — |
| optional_test_fwd_header.test | COMPILE | 0.061460 | 0.151350 | 0.165532 | — | — | — |
| optional_test_conversions_from_U.test | RUN | 0.102551 | 0.282085 | 0.307900 | 0.000989 | 0.001030 | 0.000933 |
| optional_test_constructors.test | RUN | 0.216310 | 1.057419 | 0.822067 | 0.000968 | 0.000909 | 0.000943 |
| optional_test_convert_from_T.test | RUN | 0.093899 | 0.239662 | 0.280622 | 0.000914 | 0.001039 | 0.000905 |
| optional_test_convert_assign.test | RUN | 0.091903 | 0.223656 | 0.261682 | 0.000996 | 0.001049 | 0.000851 |
| optional_test_empty_braces.test | RUN | 0.092720 | 0.232351 | 0.263748 | 0.000990 | 0.001076 | 0.000941 |
| optional_test_make_optional.test | RUN | 0.129715 | 0.348661 | 0.412335 | 0.000942 | 0.000892 | 0.000867 |
| optional_test_flat_map.test | RUN | 0.140030 | 0.412359 | 0.484399 | 0.000911 | 0.000979 | 0.000938 |
| optional_test_hash.test | RUN | 0.113273 | 0.331367 | 0.343011 | 0.000930 | 0.001033 | 0.000930 |
| optional_test_map.test | RUN | 0.144282 | 0.403441 | 0.502543 | 0.000901 | 0.000982 | 0.000965 |
| optional_test_tie.test | RUN | 0.100445 | 0.256589 | 0.274081 | 0.000975 | 0.001015 | 0.000935 |
| optional_test_ranges_find.test | RUN | 0.089054 | 0.220583 | 0.249559 | 0.000893 | 0.001000 | 0.000925 |
| optional_test_ref_assign_portable_minimum.test | RUN | 0.117587 | 0.658878 | 0.385063 | 0.000910 | 0.001143 | 0.000944 |
| optional_test_ref_assign_mutable_int.test | RUN | 0.094063 | 0.275557 | 0.279454 | 0.000968 | 0.001033 | 0.000934 |
| optional_test_ref_assign_const_int.test | RUN | 0.095409 | 0.284846 | 0.288607 | 0.001021 | 0.001046 | 0.000858 |
| optional_test_ref_converting_ctor.test | RUN | 0.105160 | 0.394926 | 0.313258 | 0.000954 | 0.001043 | 0.000912 |
| optional_test_ref_convert_assign_non_int.test | RUN | 0.093527 | 0.261385 | 0.274795 | 0.000996 | 0.001019 | 0.000861 |
| optional_test_ref_convert_assign_mutable_int.test | RUN | 0.090110 | 0.240049 | 0.262671 | 0.000902 | 0.001022 | 0.000891 |
| optional_test_ref_convert_assign_const_int.test | RUN | 0.089247 | 0.237952 | 0.256638 | 0.000918 | 0.000982 | 0.000916 |
| optional_test_ref_portable_minimum.test | RUN | 0.441878 | 1.306079 | 0.978517 | 0.001000 | 0.001015 | 0.000991 |
| optional_test_ref_move.test | RUN | 0.097491 | 0.249361 | 0.276481 | 0.000943 | 0.001028 | 0.000860 |
| optional_test_ref_to_val.test | RUN | 0.120192 | 0.516991 | 0.392160 | 0.000888 | 0.000972 | 0.000885 |
| optional_test_inplace_factory.test | RUN | 0.121351 | 0.463071 | 0.360343 | 0.000888 | 0.000991 | 0.000889 |
| optional_test_io.test | RUN | 0.116481 | 0.536750 | 0.376601 | 0.001021 | 0.001085 | 0.001036 |
| optional_test_move.test | RUN | 0.108992 | 0.355979 | 0.327362 | 0.000881 | 0.000982 | 0.000921 |
| optional_test_noexcept_move.test | RUN | 0.061733 | 0.147110 | 0.165065 | 0.000402 | 0.000437 | 0.000893 |
| optional_test_cmp_none.test | RUN | 0.092194 | 0.240582 | 0.264618 | 0.000903 | 0.000939 | 0.000929 |
| optional_test_value_access.test | RUN | 0.113598 | 0.423105 | 0.359557 | 0.000994 | 0.001027 | 0.000973 |
| optional_test_emplace.test | RUN | 0.111127 | 0.411839 | 0.358996 | 0.000974 | 0.000938 | 0.000917 |
| optional_test_minimum_requirements.test | RUN | 0.102054 | 0.331461 | 0.319716 | 0.000979 | 0.001011 | 0.000851 |
| optional_test_msvc_bug_workaround.test | RUN | 0.088332 | 0.220972 | 0.258190 | 0.000938 | 0.000961 | 0.000907 |
| optional_test_member_T.test | RUN | 0.086376 | 0.217735 | 0.250862 | 0.001031 | 0.000906 | 0.000954 |
| optional_test_tc_base.test | RUN | 0.089323 | 0.226744 | 0.262038 | 0.000883 | 0.000951 | 0.000882 |
| optional_test_sfinae_friendly_ctor.test | COMPILE | 0.066000 | 0.152774 | 0.170594 | — | — | — |
| optional_test_path_assignment.test | COMPILE | 0.062525 | 0.148453 | 0.160163 | — | — | — |
| optional_test_fail_const_swap.test | COMPILE_FAIL | 0.058576 | 0.138860 | 0.151623 | — | — | — |
| optional_test_ref_convert_assign_const_int_prevented.test | COMPILE_FAIL | 0.081500 | 0.194432 | 0.230508 | — | — | — |
| optional_test_fail1.test | COMPILE_FAIL | 0.057636 | 0.136357 | 0.147127 | — | — | — |
| optional_test_fail3a.test | COMPILE_FAIL | 0.058540 | 0.139009 | 0.152331 | — | — | — |
| optional_test_fail3b.test | COMPILE_FAIL | 0.059268 | 0.138135 | 0.154063 | — | — | — |
| optional_test_ref_fail1.test | COMPILE_FAIL | 0.058661 | 0.135817 | 0.150788 | — | — | — |
| optional_test_ref_fail3.test | COMPILE_FAIL | 0.058285 | 0.135810 | 0.147021 | — | — | — |
| optional_test_ref_fail4.test | COMPILE_FAIL | 0.058777 | 0.134503 | 0.149606 | — | — | — |
| optional_test_ref_fail_convert_from_temporary_optional_T.test | COMPILE_FAIL | 0.057954 | 0.136269 | 0.147958 | — | — | — |
| optional_test_inplace_fail.test | COMPILE_FAIL | 0.096958 | 0.216383 | 0.258267 | — | — | — |
| optional_test_inplace_fail2.test | COMPILE_FAIL | 0.096910 | 0.216292 | 0.259022 | — | — | — |
| optional_test_fail_implicit_bool_convert.test | COMPILE_FAIL | 0.057700 | 0.136868 | 0.147820 | — | — | — |
| optional_test_fail_copying_a_moveable_type.test | COMPILE_FAIL | 0.059680 | 0.138218 | 0.154566 | — | — | — |
| optional_test_fail_optional_rvalue_ref.test | COMPILE_FAIL | 0.057168 | 0.133794 | 0.149166 | — | — | — |
| optional_test_ref_fail_init_from_Trefref.test | COMPILE_FAIL | 0.059421 | 0.136884 | 0.147982 | — | — | — |
| optional_test_ref_fail_init_from_Urefref.test | COMPILE_FAIL | 0.058614 | 0.135659 | 0.147321 | — | — | — |
| optional_test_ref_fail_assign_from_Trefref.test | COMPILE_FAIL | 0.058962 | 0.136059 | 0.148648 | — | — | — |
| optional_test_ref_fail_assign_from_Urefref.test | COMPILE_FAIL | 0.058009 | 0.135301 | 0.148100 | — | — | — |
| optional_test_fail_convert_from_null.test | COMPILE_FAIL | 0.056916 | 0.135204 | 0.146074 | — | — | — |
| optional_test_fail_explicit_convert_in_value_or.test | COMPILE_FAIL | 0.057578 | 0.136307 | 0.153748 | — | — | — |
| optional_test_fail_explicit_convert_in_value_or_call.test | COMPILE_FAIL | 0.057871 | 0.136747 | 0.151600 | — | — | — |
| optional_test_fail_io_without_io.test | COMPILE_FAIL | 0.079605 | 0.181208 | 0.218553 | — | — | — |
| optional_test_fail_none_io_without_io.test | COMPILE_FAIL | 0.061648 | 0.151442 | 0.181522 | — | — | — |
| optional_test_fail_convert_assign_of_enums.test | COMPILE_FAIL | 0.059601 | 0.138137 | 0.155280 | — | — | — |
| optional_test_static_properties.test | RUN | 0.137481 | 0.308323 | 0.377868 | 0.000869 | 0.000832 | 0.000812 |
| optional_test_maybe_uninitialized_warning.test | COMPILE | 0.061372 | 0.149882 | 0.161300 | — | — | — |
| optional_test_deleted_default_ctor.test | COMPILE | 0.062775 | 0.151249 | 0.165855 | — | — | — |
| optional_test_constructible_from_other.test | COMPILE | 0.059143 | 0.143894 | 0.154685 | — | — | — |
| optional_xconfig_NO_PROPER_ASSIGN_FROM_CONST_INT_pass.test | RUN | 0.071944 | 0.184697 | 0.211527 | 0.000972 | 0.000999 | 0.000880 |
| optional_xconfig_NO_PROPER_ASSIGN_FROM_CONST_INT_fail.test | RUN_FAIL | 0.071664 | 0.188978 | 0.213970 | 0.000999 | 0.001037 | 0.000852 |
| optional_xconfig_NO_PROPER_CONVERT_FROM_CONST_INT_pass.test | RUN | 0.071270 | 0.184544 | 0.213527 | 0.000862 | 0.000928 | 0.000848 |
| optional_xconfig_NO_PROPER_CONVERT_FROM_CONST_INT_fail.test | RUN_FAIL | 0.071526 | 0.189686 | 0.212766 | 0.000849 | 0.000924 | 0.000924 |
| optional_xconfig_NO_LEGAL_CONVERT_FROM_REF_pass.test | RUN | 0.068160 | 0.164903 | 0.200179 | 0.000851 | 0.000866 | 0.000870 |
| optional_xconfig_NO_LEGAL_CONVERT_FROM_REF_fail.test | COMPILE_FAIL | 0.045581 | 0.158048 | 0.193103 | — | — | — |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.999× | 1.000×, 0.997× | 1.001× |
| clang | 1.010× | 1.009×, 1.010× | 1.001× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1365 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/43796354412).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| optional_test.test | 10 | 0.000972s | 0.000970s | 0.000977s | byte equality observed |
| optional_test_assign.test | 10 | 0.000904s | 0.000904s | 0.000906s | byte equality observed |
| optional_test_cmp_none.test | 10 | 0.000904s | 0.000903s | 0.000906s | byte equality observed |
| optional_test_constructors.test | 10 | 0.000924s | 0.000918s | 0.000914s | byte equality observed |
| optional_test_conversions_from_U.test | 10 | 0.000901s | 0.000894s | 0.000905s | byte equality observed |
| optional_test_convert_assign.test | 10 | 0.000903s | 0.000903s | 0.000901s | byte equality observed |
| optional_test_convert_from_T.test | 10 | 0.000915s | 0.000898s | 0.000904s | byte equality observed |
| optional_test_emplace.test | 10 | 0.000937s | 0.000942s | 0.000931s | byte equality observed |
| optional_test_empty_braces.test | 10 | 0.000902s | 0.000904s | 0.000910s | byte equality observed |
| optional_test_flat_map.test | 10 | 0.000901s | 0.000904s | 0.000905s | byte equality observed |
| optional_test_hash.test | 10 | 0.000908s | 0.000917s | 0.000907s | byte equality observed |
| optional_test_inplace_factory.test | 10 | 0.000916s | 0.000907s | 0.000916s | byte equality observed |
| optional_test_io.test | 10 | 0.000929s | 0.000947s | 0.000917s | byte equality observed |
| optional_test_make_optional.test | 10 | 0.000906s | 0.000910s | 0.000898s | byte equality observed |
| optional_test_map.test | 10 | 0.000900s | 0.000905s | 0.000913s | byte equality observed |
| optional_test_member_T.test | 10 | 0.000907s | 0.000897s | 0.000911s | byte equality observed |
| optional_test_minimum_requirements.test | 10 | 0.000949s | 0.000944s | 0.000934s | byte equality observed |
| optional_test_move.test | 10 | 0.000906s | 0.000899s | 0.000906s | byte equality observed |
| optional_test_msvc_bug_workaround.test | 10 | 0.000901s | 0.000901s | 0.000906s | byte equality observed |
| optional_test_noexcept_move.test | 10 | 0.000418s | 0.000420s | 0.000894s | byte equality observed |
| optional_test_ranges_find.test | 10 | 0.000901s | 0.000909s | 0.000908s | byte equality observed |
| optional_test_ref_assign_const_int.test | 10 | 0.000899s | 0.000886s | 0.000904s | byte equality observed |
| optional_test_ref_assign_mutable_int.test | 10 | 0.000900s | 0.000903s | 0.000898s | byte equality observed |
| optional_test_ref_assign_portable_minimum.test | 10 | 0.000911s | 0.000916s | 0.000908s | byte equality observed |
| optional_test_ref_convert_assign_const_int.test | 10 | 0.000902s | 0.000909s | 0.000901s | byte equality observed |
| optional_test_ref_convert_assign_mutable_int.test | 10 | 0.000906s | 0.000907s | 0.000892s | byte equality observed |
| optional_test_ref_convert_assign_non_int.test | 10 | 0.000913s | 0.000910s | 0.000905s | byte equality observed |
| optional_test_ref_converting_ctor.test | 10 | 0.000911s | 0.000900s | 0.000897s | byte equality observed |
| optional_test_ref_move.test | 10 | 0.000922s | 0.000909s | 0.000913s | byte equality observed |
| optional_test_ref_portable_minimum.test | 10 | 0.000953s | 0.000926s | 0.000938s | byte equality observed |
| optional_test_ref_to_val.test | 10 | 0.000905s | 0.000911s | 0.000900s | byte equality observed |
| optional_test_static_properties.test | 10 | 0.000908s | 0.000905s | 0.000913s | byte equality observed |
| optional_test_swap.test | 10 | 0.000916s | 0.000910s | 0.000906s | byte equality observed |
| optional_test_tc_base.test | 10 | 0.000900s | 0.000904s | 0.000899s | byte equality observed |
| optional_test_tie.test | 10 | 0.000910s | 0.000904s | 0.000899s | byte equality observed |
| optional_test_value_access.test | 10 | 0.000958s | 0.000953s | 0.000940s | byte equality observed |
| optional_xconfig_NO_LEGAL_CONVERT_FROM_REF_pass.test | 10 | 0.000889s | 0.000892s | 0.000897s | byte equality observed |
| optional_xconfig_NO_PROPER_ASSIGN_FROM_CONST_INT_pass.test | 10 | 0.000907s | 0.000900s | 0.000902s | byte equality observed |
| optional_xconfig_NO_PROPER_CONVERT_FROM_CONST_INT_pass.test | 10 | 0.000909s | 0.000925s | 0.000908s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/43796354412).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
