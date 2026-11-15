# libs/optional/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| optional_test.test | RUN | 0.330848 | 2.014105 | 1.379750 | 0.001885 | 0.002414 | 0.002170 |
| optional_test_assign.test | RUN | 0.175688 | 0.436283 | 0.684029 | 0.001880 | 0.002164 | 0.002115 |
| optional_test_swap.test | RUN | 0.187929 | 0.539141 | 0.728583 | 0.001900 | 0.001984 | 0.001914 |
| optional_test_constexpr.test | COMPILE | 0.126802 | 0.294905 | 0.444376 | — | — | — |
| optional_test_wuninitialized.test | COMPILE | 0.186240 | 0.703627 | 0.690391 | — | — | — |
| optional_test_fwd_header.test | COMPILE | 0.125881 | 0.291413 | 0.412011 | — | — | — |
| optional_test_conversions_from_U.test | RUN | 0.205291 | 0.557938 | 0.819202 | 0.001898 | 0.002099 | 0.002057 |
| optional_test_constructors.test | RUN | 0.418090 | 2.037580 | 2.028129 | 0.002074 | 0.001937 | 0.001881 |
| optional_test_convert_from_T.test | RUN | 0.186171 | 0.449380 | 0.702982 | 0.001889 | 0.002246 | 0.001842 |
| optional_test_convert_assign.test | RUN | 0.188274 | 0.443688 | 0.677461 | 0.001797 | 0.001933 | 0.002085 |
| optional_test_empty_braces.test | RUN | 0.180633 | 0.440387 | 0.718217 | 0.002123 | 0.002044 | 0.002046 |
| optional_test_make_optional.test | RUN | 0.252707 | 0.682376 | 1.035012 | 0.001975 | 0.001852 | 0.002102 |
| optional_test_flat_map.test | RUN | 0.270352 | 0.784166 | 1.171801 | 0.002022 | 0.001772 | 0.001868 |
| optional_test_hash.test | RUN | 0.221705 | 0.620863 | 0.793775 | 0.001924 | 0.002269 | 0.002004 |
| optional_test_map.test | RUN | 0.270923 | 0.753085 | 1.177163 | 0.002152 | 0.001972 | 0.001818 |
| optional_test_tie.test | RUN | 0.195597 | 0.490934 | 0.706728 | 0.002040 | 0.002000 | 0.002094 |
| optional_test_ranges_find.test | RUN | 0.181889 | 0.446786 | 0.672327 | 0.001887 | 0.001780 | 0.001984 |
| optional_test_ref_assign_portable_minimum.test | RUN | 0.227350 | 1.247094 | 0.910938 | 0.001794 | 0.002008 | 0.002160 |
| optional_test_ref_assign_mutable_int.test | RUN | 0.193602 | 0.531710 | 0.701057 | 0.001850 | 0.001964 | 0.001984 |
| optional_test_ref_assign_const_int.test | RUN | 0.193267 | 0.553395 | 0.715415 | 0.001874 | 0.001739 | 0.002108 |
| optional_test_ref_converting_ctor.test | RUN | 0.216170 | 0.769838 | 0.834866 | 0.001792 | 0.002174 | 0.002277 |
| optional_test_ref_convert_assign_non_int.test | RUN | 0.197778 | 0.509135 | 0.763798 | 0.001734 | 0.002136 | 0.002111 |
| optional_test_ref_convert_assign_mutable_int.test | RUN | 0.183158 | 0.478740 | 0.678619 | 0.002068 | 0.001952 | 0.002159 |
| optional_test_ref_convert_assign_const_int.test | RUN | 0.186739 | 0.448388 | 0.613747 | 0.001791 | 0.001834 | 0.002157 |
| optional_test_ref_portable_minimum.test | RUN | 0.821237 | 2.476172 | 2.428624 | 0.001732 | 0.001851 | 0.001924 |
| optional_test_ref_move.test | RUN | 0.186132 | 0.482823 | 0.693991 | 0.001867 | 0.002061 | 0.002036 |
| optional_test_ref_to_val.test | RUN | 0.229977 | 0.973939 | 1.005066 | 0.001992 | 0.001845 | 0.001525 |
| optional_test_inplace_factory.test | RUN | 0.236386 | 0.906263 | 0.870730 | 0.001941 | 0.001931 | 0.002046 |
| optional_test_io.test | RUN | 0.225425 | 0.978332 | 0.895757 | 0.002126 | 0.001792 | 0.001882 |
| optional_test_move.test | RUN | 0.205406 | 0.669971 | 0.745583 | 0.002047 | 0.001846 | 0.002160 |
| optional_test_noexcept_move.test | RUN | 0.131174 | 0.294979 | 0.423223 | 0.000701 | 0.000897 | 0.002002 |
| optional_test_cmp_none.test | RUN | 0.187062 | 0.470404 | 0.690426 | 0.002020 | 0.002218 | 0.002042 |
| optional_test_value_access.test | RUN | 0.226893 | 0.772418 | 0.849904 | 0.002052 | 0.001958 | 0.002216 |
| optional_test_emplace.test | RUN | 0.223895 | 0.788104 | 0.915778 | 0.001790 | 0.001597 | 0.002459 |
| optional_test_minimum_requirements.test | RUN | 0.202116 | 0.622086 | 0.814423 | 0.002028 | 0.002016 | 0.002080 |
| optional_test_msvc_bug_workaround.test | RUN | 0.175031 | 0.438979 | 0.612502 | 0.002076 | 0.001810 | 0.002092 |
| optional_test_member_T.test | RUN | 0.176520 | 0.426920 | 0.658153 | 0.001752 | 0.001807 | 0.001757 |
| optional_test_tc_base.test | RUN | 0.185740 | 0.447228 | 0.673304 | 0.001774 | 0.002126 | 0.002192 |
| optional_test_sfinae_friendly_ctor.test | COMPILE | 0.138781 | 0.292274 | 0.400548 | — | — | — |
| optional_test_path_assignment.test | COMPILE | 0.130636 | 0.287376 | 0.417459 | — | — | — |
| optional_test_fail_const_swap.test | COMPILE_FAIL | 0.123271 | 0.276022 | 0.400378 | — | — | — |
| optional_test_ref_convert_assign_const_int_prevented.test | COMPILE_FAIL | 0.165366 | 0.373979 | 0.617562 | — | — | — |
| optional_test_fail1.test | COMPILE_FAIL | 0.121113 | 0.278987 | 0.393089 | — | — | — |
| optional_test_fail3a.test | COMPILE_FAIL | 0.118988 | 0.281264 | 0.423538 | — | — | — |
| optional_test_fail3b.test | COMPILE_FAIL | 0.125993 | 0.276958 | 0.406384 | — | — | — |
| optional_test_ref_fail1.test | COMPILE_FAIL | 0.122042 | 0.272032 | 0.395698 | — | — | — |
| optional_test_ref_fail3.test | COMPILE_FAIL | 0.118564 | 0.283015 | 0.398416 | — | — | — |
| optional_test_ref_fail4.test | COMPILE_FAIL | 0.118169 | 0.273052 | 0.411102 | — | — | — |
| optional_test_ref_fail_convert_from_temporary_optional_T.test | COMPILE_FAIL | 0.121931 | 0.283802 | 0.405010 | — | — | — |
| optional_test_inplace_fail.test | COMPILE_FAIL | 0.199644 | 0.437233 | 0.673793 | — | — | — |
| optional_test_inplace_fail2.test | COMPILE_FAIL | 0.198629 | 0.435816 | 0.689731 | — | — | — |
| optional_test_fail_implicit_bool_convert.test | COMPILE_FAIL | 0.120101 | 0.271965 | 0.414707 | — | — | — |
| optional_test_fail_copying_a_moveable_type.test | COMPILE_FAIL | 0.121772 | 0.289356 | 0.410609 | — | — | — |
| optional_test_fail_optional_rvalue_ref.test | COMPILE_FAIL | 0.116767 | 0.274248 | 0.388468 | — | — | — |
| optional_test_ref_fail_init_from_Trefref.test | COMPILE_FAIL | 0.119340 | 0.281381 | 0.395423 | — | — | — |
| optional_test_ref_fail_init_from_Urefref.test | COMPILE_FAIL | 0.117352 | 0.269177 | 0.401065 | — | — | — |
| optional_test_ref_fail_assign_from_Trefref.test | COMPILE_FAIL | 0.117105 | 0.283177 | 0.398813 | — | — | — |
| optional_test_ref_fail_assign_from_Urefref.test | COMPILE_FAIL | 0.121003 | 0.276915 | 0.395606 | — | — | — |
| optional_test_fail_convert_from_null.test | COMPILE_FAIL | 0.116094 | 0.280242 | 0.384748 | — | — | — |
| optional_test_fail_explicit_convert_in_value_or.test | COMPILE_FAIL | 0.119121 | 0.272550 | 0.403196 | — | — | — |
| optional_test_fail_explicit_convert_in_value_or_call.test | COMPILE_FAIL | 0.116059 | 0.287213 | 0.400636 | — | — | — |
| optional_test_fail_io_without_io.test | COMPILE_FAIL | 0.160426 | 0.367847 | 0.598854 | — | — | — |
| optional_test_fail_none_io_without_io.test | COMPILE_FAIL | 0.131735 | 0.293820 | 0.475328 | — | — | — |
| optional_test_fail_convert_assign_of_enums.test | COMPILE_FAIL | 0.121179 | 0.283474 | 0.415460 | — | — | — |
| optional_test_static_properties.test | RUN | 0.289068 | 0.630419 | 1.025290 | 0.002038 | 0.002158 | 0.002046 |
| optional_test_maybe_uninitialized_warning.test | COMPILE | 0.129559 | 0.302549 | 0.443785 | — | — | — |
| optional_test_deleted_default_ctor.test | COMPILE | 0.127062 | 0.313857 | 0.448690 | — | — | — |
| optional_test_constructible_from_other.test | COMPILE | 0.121135 | 0.292803 | 0.427592 | — | — | — |
| optional_xconfig_NO_PROPER_ASSIGN_FROM_CONST_INT_pass.test | RUN | 0.146251 | 0.371384 | 0.555797 | 0.001608 | 0.002059 | 0.001768 |
| optional_xconfig_NO_PROPER_ASSIGN_FROM_CONST_INT_fail.test | RUN_FAIL | 0.145401 | 0.365214 | 0.552295 | 0.001684 | 0.001787 | 0.001783 |
| optional_xconfig_NO_PROPER_CONVERT_FROM_CONST_INT_pass.test | RUN | 0.144836 | 0.369579 | 0.514885 | 0.002015 | 0.001656 | 0.001845 |
| optional_xconfig_NO_PROPER_CONVERT_FROM_CONST_INT_fail.test | RUN_FAIL | 0.147423 | 0.375703 | 0.519261 | 0.001977 | 0.002303 | 0.002056 |
| optional_xconfig_NO_LEGAL_CONVERT_FROM_REF_pass.test | RUN | 0.093328 | 0.238520 | 0.367459 | 0.001378 | 0.001606 | 0.001524 |
| optional_xconfig_NO_LEGAL_CONVERT_FROM_REF_fail.test | COMPILE_FAIL | 0.081386 | 0.233101 | 0.326587 | — | — | — |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 1.005× | 1.008×, 1.003× | 0.980× |
| clang | 1.003× | 0.999×, 1.007× | 1.008× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1360 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/43712369003).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| optional_test.test | 10 | 0.001318s | 0.001350s | 0.001333s | byte equality observed |
| optional_test_assign.test | 10 | 0.001242s | 0.001198s | 0.001268s | byte equality observed |
| optional_test_cmp_none.test | 10 | 0.001270s | 0.001223s | 0.001213s | byte equality observed |
| optional_test_constructors.test | 10 | 0.001254s | 0.001285s | 0.001251s | byte equality observed |
| optional_test_conversions_from_U.test | 10 | 0.001221s | 0.001236s | 0.001325s | byte equality observed |
| optional_test_convert_assign.test | 10 | 0.001227s | 0.001268s | 0.001215s | byte equality observed |
| optional_test_convert_from_T.test | 10 | 0.001274s | 0.001243s | 0.001220s | byte equality observed |
| optional_test_emplace.test | 10 | 0.001264s | 0.001301s | 0.001270s | byte equality observed |
| optional_test_empty_braces.test | 10 | 0.001266s | 0.001290s | 0.001225s | byte equality observed |
| optional_test_flat_map.test | 10 | 0.001234s | 0.001258s | 0.001267s | byte equality observed |
| optional_test_hash.test | 10 | 0.001267s | 0.001220s | 0.001263s | byte equality observed |
| optional_test_inplace_factory.test | 10 | 0.001253s | 0.001215s | 0.001280s | byte equality observed |
| optional_test_io.test | 10 | 0.001303s | 0.001244s | 0.001308s | byte equality observed |
| optional_test_make_optional.test | 10 | 0.001312s | 0.001223s | 0.001248s | byte equality observed |
| optional_test_map.test | 10 | 0.001226s | 0.001244s | 0.001258s | byte equality observed |
| optional_test_member_T.test | 10 | 0.001246s | 0.001255s | 0.001272s | byte equality observed |
| optional_test_minimum_requirements.test | 10 | 0.001315s | 0.001248s | 0.001307s | byte equality observed |
| optional_test_move.test | 10 | 0.001276s | 0.001233s | 0.001197s | byte equality observed |
| optional_test_msvc_bug_workaround.test | 10 | 0.001262s | 0.001243s | 0.001214s | byte equality observed |
| optional_test_noexcept_move.test | 10 | 0.000572s | 0.000573s | 0.001212s | byte equality observed |
| optional_test_ranges_find.test | 10 | 0.001294s | 0.001238s | 0.001212s | byte equality observed |
| optional_test_ref_assign_const_int.test | 10 | 0.001235s | 0.001201s | 0.001232s | byte equality observed |
| optional_test_ref_assign_mutable_int.test | 10 | 0.001231s | 0.001216s | 0.001219s | byte equality observed |
| optional_test_ref_assign_portable_minimum.test | 10 | 0.001228s | 0.001204s | 0.001220s | byte equality observed |
| optional_test_ref_convert_assign_const_int.test | 10 | 0.001231s | 0.001230s | 0.001267s | byte equality observed |
| optional_test_ref_convert_assign_mutable_int.test | 10 | 0.001210s | 0.001259s | 0.001273s | byte equality observed |
| optional_test_ref_convert_assign_non_int.test | 10 | 0.001251s | 0.001233s | 0.001266s | byte equality observed |
| optional_test_ref_converting_ctor.test | 10 | 0.001264s | 0.001266s | 0.001255s | byte equality observed |
| optional_test_ref_move.test | 10 | 0.001248s | 0.001319s | 0.001258s | byte equality observed |
| optional_test_ref_portable_minimum.test | 10 | 0.001283s | 0.001280s | 0.001275s | byte equality observed |
| optional_test_ref_to_val.test | 10 | 0.001241s | 0.001246s | 0.001223s | byte equality observed |
| optional_test_static_properties.test | 10 | 0.001251s | 0.001267s | 0.001226s | byte equality observed |
| optional_test_swap.test | 10 | 0.001237s | 0.001288s | 0.001228s | byte equality observed |
| optional_test_tc_base.test | 10 | 0.001266s | 0.001281s | 0.001222s | byte equality observed |
| optional_test_tie.test | 10 | 0.001250s | 0.001256s | 0.001215s | byte equality observed |
| optional_test_value_access.test | 10 | 0.001264s | 0.001303s | 0.001295s | byte equality observed |
| optional_xconfig_NO_LEGAL_CONVERT_FROM_REF_pass.test | 10 | 0.001259s | 0.001185s | 0.001181s | byte equality observed |
| optional_xconfig_NO_PROPER_ASSIGN_FROM_CONST_INT_pass.test | 10 | 0.001216s | 0.001225s | 0.001233s | byte equality observed |
| optional_xconfig_NO_PROPER_CONVERT_FROM_CONST_INT_pass.test | 10 | 0.001195s | 0.001198s | 0.001214s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/43712369003).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
