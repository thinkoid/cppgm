# libs/optional/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| optional_test.test | RUN | 0.203037 | 1.170770 | 0.645486 | 0.001655 | 0.001972 | 0.001538 |
| optional_test_assign.test | RUN | 0.108745 | 0.254138 | 0.298865 | 0.001712 | 0.001760 | 0.001619 |
| optional_test_swap.test | RUN | 0.114829 | 0.321751 | 0.339434 | 0.001357 | 0.001812 | 0.001417 |
| optional_test_constexpr.test | COMPILE | 0.076029 | 0.168239 | 0.195115 | — | — | — |
| optional_test_wuninitialized.test | COMPILE | 0.117549 | 0.406519 | 0.303137 | — | — | — |
| optional_test_fwd_header.test | COMPILE | 0.073418 | 0.172873 | 0.185402 | — | — | — |
| optional_test_conversions_from_U.test | RUN | 0.124034 | 0.330562 | 0.371703 | 0.001500 | 0.001624 | 0.001611 |
| optional_test_constructors.test | RUN | 0.238012 | 1.146602 | 0.924949 | 0.001468 | 0.001620 | 0.001572 |
| optional_test_convert_from_T.test | RUN | 0.115746 | 0.258973 | 0.311074 | 0.001698 | 0.001756 | 0.001488 |
| optional_test_convert_assign.test | RUN | 0.111382 | 0.275103 | 0.298897 | 0.001413 | 0.001744 | 0.001336 |
| optional_test_empty_braces.test | RUN | 0.109056 | 0.252209 | 0.315117 | 0.001795 | 0.001706 | 0.001412 |
| optional_test_make_optional.test | RUN | 0.153864 | 0.396305 | 0.475323 | 0.001796 | 0.001651 | 0.001392 |
| optional_test_flat_map.test | RUN | 0.158014 | 0.463080 | 0.533376 | 0.001444 | 0.001412 | 0.001641 |
| optional_test_hash.test | RUN | 0.132269 | 0.375730 | 0.407659 | 0.001321 | 0.001836 | 0.001714 |
| optional_test_map.test | RUN | 0.166263 | 0.456443 | 0.564354 | 0.001501 | 0.001740 | 0.001424 |
| optional_test_tie.test | RUN | 0.115849 | 0.290771 | 0.332663 | 0.001516 | 0.001699 | 0.001578 |
| optional_test_ranges_find.test | RUN | 0.106466 | 0.248885 | 0.289644 | 0.001364 | 0.001472 | 0.001348 |
| optional_test_ref_assign_portable_minimum.test | RUN | 0.131969 | 0.731314 | 0.447295 | 0.001391 | 0.001392 | 0.001806 |
| optional_test_ref_assign_mutable_int.test | RUN | 0.113010 | 0.320384 | 0.353182 | 0.001643 | 0.001542 | 0.001574 |
| optional_test_ref_assign_const_int.test | RUN | 0.111030 | 0.322565 | 0.361880 | 0.001753 | 0.001499 | 0.001396 |
| optional_test_ref_converting_ctor.test | RUN | 0.120677 | 0.442752 | 0.394904 | 0.001363 | 0.001774 | 0.001693 |
| optional_test_ref_convert_assign_non_int.test | RUN | 0.110241 | 0.297726 | 0.350234 | 0.001353 | 0.001786 | 0.001460 |
| optional_test_ref_convert_assign_mutable_int.test | RUN | 0.113574 | 0.264942 | 0.321068 | 0.001510 | 0.001438 | 0.001616 |
| optional_test_ref_convert_assign_const_int.test | RUN | 0.110121 | 0.260759 | 0.314588 | 0.001343 | 0.001323 | 0.001385 |
| optional_test_ref_portable_minimum.test | RUN | 0.417386 | 1.455044 | 1.125804 | 0.001533 | 0.001650 | 0.001656 |
| optional_test_ref_move.test | RUN | 0.112458 | 0.286335 | 0.325608 | 0.001473 | 0.001765 | 0.001662 |
| optional_test_ref_to_val.test | RUN | 0.138561 | 0.568861 | 0.465133 | 0.001310 | 0.001571 | 0.001556 |
| optional_test_inplace_factory.test | RUN | 0.138242 | 0.520024 | 0.430211 | 0.001640 | 0.001906 | 0.001305 |
| optional_test_io.test | RUN | 0.140984 | 0.592184 | 0.439986 | 0.001547 | 0.001872 | 0.001328 |
| optional_test_move.test | RUN | 0.129105 | 0.404640 | 0.399218 | 0.001707 | 0.001584 | 0.001730 |
| optional_test_noexcept_move.test | RUN | 0.078454 | 0.183884 | 0.188896 | 0.000594 | 0.000693 | 0.001475 |
| optional_test_cmp_none.test | RUN | 0.109152 | 0.279510 | 0.306569 | 0.001768 | 0.001805 | 0.001755 |
| optional_test_value_access.test | RUN | 0.132288 | 0.483256 | 0.443374 | 0.001622 | 0.001542 | 0.001578 |
| optional_test_emplace.test | RUN | 0.131801 | 0.472837 | 0.442083 | 0.001509 | 0.001620 | 0.001348 |
| optional_test_minimum_requirements.test | RUN | 0.120077 | 0.369517 | 0.372854 | 0.001489 | 0.001715 | 0.001696 |
| optional_test_msvc_bug_workaround.test | RUN | 0.112103 | 0.267279 | 0.320498 | 0.001478 | 0.001799 | 0.001726 |
| optional_test_member_T.test | RUN | 0.111005 | 0.257166 | 0.296704 | 0.001400 | 0.001455 | 0.001680 |
| optional_test_tc_base.test | RUN | 0.104255 | 0.268752 | 0.297213 | 0.001511 | 0.001407 | 0.001152 |
| optional_test_sfinae_friendly_ctor.test | COMPILE | 0.078382 | 0.180500 | 0.207929 | — | — | — |
| optional_test_path_assignment.test | COMPILE | 0.076917 | 0.181832 | 0.193537 | — | — | — |
| optional_test_fail_const_swap.test | COMPILE_FAIL | 0.073120 | 0.160967 | 0.176737 | — | — | — |
| optional_test_ref_convert_assign_const_int_prevented.test | COMPILE_FAIL | 0.100282 | 0.219138 | 0.270071 | — | — | — |
| optional_test_fail1.test | COMPILE_FAIL | 0.070716 | 0.158808 | 0.173106 | — | — | — |
| optional_test_fail3a.test | COMPILE_FAIL | 0.071890 | 0.163119 | 0.185224 | — | — | — |
| optional_test_fail3b.test | COMPILE_FAIL | 0.072422 | 0.157917 | 0.183709 | — | — | — |
| optional_test_ref_fail1.test | COMPILE_FAIL | 0.071486 | 0.155371 | 0.176218 | — | — | — |
| optional_test_ref_fail3.test | COMPILE_FAIL | 0.070139 | 0.151890 | 0.180014 | — | — | — |
| optional_test_ref_fail4.test | COMPILE_FAIL | 0.070676 | 0.157565 | 0.180538 | — | — | — |
| optional_test_ref_fail_convert_from_temporary_optional_T.test | COMPILE_FAIL | 0.069512 | 0.157944 | 0.173855 | — | — | — |
| optional_test_inplace_fail.test | COMPILE_FAIL | 0.113082 | 0.241193 | 0.319799 | — | — | — |
| optional_test_inplace_fail2.test | COMPILE_FAIL | 0.112304 | 0.237410 | 0.311906 | — | — | — |
| optional_test_fail_implicit_bool_convert.test | COMPILE_FAIL | 0.068938 | 0.151664 | 0.174052 | — | — | — |
| optional_test_fail_copying_a_moveable_type.test | COMPILE_FAIL | 0.072939 | 0.155934 | 0.177817 | — | — | — |
| optional_test_fail_optional_rvalue_ref.test | COMPILE_FAIL | 0.067847 | 0.150329 | 0.171650 | — | — | — |
| optional_test_ref_fail_init_from_Trefref.test | COMPILE_FAIL | 0.071925 | 0.152325 | 0.175955 | — | — | — |
| optional_test_ref_fail_init_from_Urefref.test | COMPILE_FAIL | 0.069176 | 0.153044 | 0.182677 | — | — | — |
| optional_test_ref_fail_assign_from_Trefref.test | COMPILE_FAIL | 0.072489 | 0.152464 | 0.176578 | — | — | — |
| optional_test_ref_fail_assign_from_Urefref.test | COMPILE_FAIL | 0.071260 | 0.151286 | 0.173157 | — | — | — |
| optional_test_fail_convert_from_null.test | COMPILE_FAIL | 0.070328 | 0.153453 | 0.171959 | — | — | — |
| optional_test_fail_explicit_convert_in_value_or.test | COMPILE_FAIL | 0.067208 | 0.156492 | 0.177250 | — | — | — |
| optional_test_fail_explicit_convert_in_value_or_call.test | COMPILE_FAIL | 0.070300 | 0.155357 | 0.177840 | — | — | — |
| optional_test_fail_io_without_io.test | COMPILE_FAIL | 0.098074 | 0.209809 | 0.257801 | — | — | — |
| optional_test_fail_none_io_without_io.test | COMPILE_FAIL | 0.073409 | 0.177643 | 0.215669 | — | — | — |
| optional_test_fail_convert_assign_of_enums.test | COMPILE_FAIL | 0.071263 | 0.163122 | 0.179628 | — | — | — |
| optional_test_static_properties.test | RUN | 0.165964 | 0.360895 | 0.433240 | 0.001740 | 0.001574 | 0.001639 |
| optional_test_maybe_uninitialized_warning.test | COMPILE | 0.072662 | 0.171131 | 0.185791 | — | — | — |
| optional_test_deleted_default_ctor.test | COMPILE | 0.073428 | 0.179639 | 0.190631 | — | — | — |
| optional_test_constructible_from_other.test | COMPILE | 0.074791 | 0.166649 | 0.177407 | — | — | — |
| optional_xconfig_NO_PROPER_ASSIGN_FROM_CONST_INT_pass.test | RUN | 0.084506 | 0.213897 | 0.254832 | 0.001546 | 0.001511 | 0.001532 |
| optional_xconfig_NO_PROPER_ASSIGN_FROM_CONST_INT_fail.test | RUN_FAIL | 0.084635 | 0.210408 | 0.255806 | 0.001215 | 0.001496 | 0.001354 |
| optional_xconfig_NO_PROPER_CONVERT_FROM_CONST_INT_pass.test | RUN | 0.086716 | 0.212366 | 0.251698 | 0.001472 | 0.001382 | 0.001295 |
| optional_xconfig_NO_PROPER_CONVERT_FROM_CONST_INT_fail.test | RUN_FAIL | 0.094350 | 0.216249 | 0.252998 | 0.001254 | 0.001295 | 0.001608 |
| optional_xconfig_NO_LEGAL_CONVERT_FROM_REF_pass.test | RUN | 0.064527 | 0.142373 | 0.161230 | 0.001251 | 0.001194 | 0.001103 |
| optional_xconfig_NO_LEGAL_CONVERT_FROM_REF_fail.test | COMPILE_FAIL | 0.051736 | 0.132063 | 0.159998 | — | — | — |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.998× | 1.021×, 0.975× | 0.993× |
| clang | 1.001× | 1.022×, 0.980× | 1.005× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1363 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43624536445).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| optional_test.test | 10 | 0.000959s | 0.001012s | 0.000937s | byte equality observed |
| optional_test_assign.test | 10 | 0.000913s | 0.000921s | 0.000884s | byte equality observed |
| optional_test_cmp_none.test | 10 | 0.000905s | 0.000909s | 0.000870s | byte equality observed |
| optional_test_constructors.test | 10 | 0.000912s | 0.000940s | 0.000886s | byte equality observed |
| optional_test_conversions_from_U.test | 10 | 0.000901s | 0.000909s | 0.000875s | byte equality observed |
| optional_test_convert_assign.test | 10 | 0.000908s | 0.000918s | 0.000883s | byte equality observed |
| optional_test_convert_from_T.test | 10 | 0.000888s | 0.000903s | 0.000889s | byte equality observed |
| optional_test_emplace.test | 10 | 0.000929s | 0.000944s | 0.000911s | byte equality observed |
| optional_test_empty_braces.test | 10 | 0.000904s | 0.000944s | 0.000890s | byte equality observed |
| optional_test_flat_map.test | 10 | 0.000895s | 0.000903s | 0.000905s | byte equality observed |
| optional_test_hash.test | 10 | 0.000925s | 0.000902s | 0.000902s | byte equality observed |
| optional_test_inplace_factory.test | 10 | 0.000918s | 0.000892s | 0.000902s | byte equality observed |
| optional_test_io.test | 10 | 0.000928s | 0.000942s | 0.000892s | byte equality observed |
| optional_test_make_optional.test | 10 | 0.000906s | 0.000888s | 0.000888s | byte equality observed |
| optional_test_map.test | 10 | 0.000898s | 0.000897s | 0.000877s | byte equality observed |
| optional_test_member_T.test | 10 | 0.000906s | 0.000936s | 0.000848s | byte equality observed |
| optional_test_minimum_requirements.test | 10 | 0.000931s | 0.000933s | 0.000914s | byte equality observed |
| optional_test_move.test | 10 | 0.000889s | 0.000917s | 0.000878s | byte equality observed |
| optional_test_msvc_bug_workaround.test | 10 | 0.000910s | 0.000921s | 0.000891s | byte equality observed |
| optional_test_noexcept_move.test | 10 | 0.000419s | 0.000415s | 0.000866s | byte equality observed |
| optional_test_ranges_find.test | 10 | 0.000891s | 0.000911s | 0.000905s | byte equality observed |
| optional_test_ref_assign_const_int.test | 10 | 0.000900s | 0.000919s | 0.000903s | byte equality observed |
| optional_test_ref_assign_mutable_int.test | 10 | 0.000889s | 0.000894s | 0.000886s | byte equality observed |
| optional_test_ref_assign_portable_minimum.test | 10 | 0.000906s | 0.000905s | 0.000921s | byte equality observed |
| optional_test_ref_convert_assign_const_int.test | 10 | 0.000901s | 0.000923s | 0.000867s | byte equality observed |
| optional_test_ref_convert_assign_mutable_int.test | 10 | 0.000893s | 0.000915s | 0.000887s | byte equality observed |
| optional_test_ref_convert_assign_non_int.test | 10 | 0.000892s | 0.000913s | 0.000908s | byte equality observed |
| optional_test_ref_converting_ctor.test | 10 | 0.000904s | 0.000897s | 0.000891s | byte equality observed |
| optional_test_ref_move.test | 10 | 0.000907s | 0.000925s | 0.000895s | byte equality observed |
| optional_test_ref_portable_minimum.test | 10 | 0.000947s | 0.000942s | 0.000928s | byte equality observed |
| optional_test_ref_to_val.test | 10 | 0.000898s | 0.000895s | 0.000888s | byte equality observed |
| optional_test_static_properties.test | 10 | 0.000900s | 0.000884s | 0.000883s | byte equality observed |
| optional_test_swap.test | 10 | 0.000894s | 0.000928s | 0.000882s | byte equality observed |
| optional_test_tc_base.test | 10 | 0.000897s | 0.000921s | 0.000873s | byte equality observed |
| optional_test_tie.test | 10 | 0.000915s | 0.000891s | 0.000904s | byte equality observed |
| optional_test_value_access.test | 10 | 0.000942s | 0.000941s | 0.000916s | byte equality observed |
| optional_xconfig_NO_LEGAL_CONVERT_FROM_REF_pass.test | 10 | 0.000901s | 0.000882s | 0.000858s | byte equality observed |
| optional_xconfig_NO_PROPER_ASSIGN_FROM_CONST_INT_pass.test | 10 | 0.000897s | 0.000904s | 0.000872s | byte equality observed |
| optional_xconfig_NO_PROPER_CONVERT_FROM_CONST_INT_pass.test | 10 | 0.000918s | 0.000886s | 0.000897s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43624536445).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
