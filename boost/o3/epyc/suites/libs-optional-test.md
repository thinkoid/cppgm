# libs/optional/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| optional_test.test | RUN | 0.194809 | 1.134019 | 0.661173 | 0.001367 | 0.001795 | 0.001755 |
| optional_test_assign.test | RUN | 0.100289 | 0.239589 | 0.288379 | 0.001638 | 0.001667 | 0.001679 |
| optional_test_swap.test | RUN | 0.107296 | 0.305874 | 0.337339 | 0.001348 | 0.001689 | 0.001377 |
| optional_test_constexpr.test | COMPILE | 0.072361 | 0.165208 | 0.195698 | — | — | — |
| optional_test_wuninitialized.test | COMPILE | 0.115028 | 0.397021 | 0.299326 | — | — | — |
| optional_test_fwd_header.test | COMPILE | 0.072874 | 0.168941 | 0.190989 | — | — | — |
| optional_test_conversions_from_U.test | RUN | 0.107012 | 0.318805 | 0.372836 | 0.001568 | 0.001662 | 0.001625 |
| optional_test_constructors.test | RUN | 0.228361 | 1.126718 | 0.937189 | 0.001456 | 0.001526 | 0.001732 |
| optional_test_convert_from_T.test | RUN | 0.112821 | 0.261259 | 0.327293 | 0.001618 | 0.001698 | 0.001536 |
| optional_test_convert_assign.test | RUN | 0.105267 | 0.251124 | 0.312749 | 0.001458 | 0.001678 | 0.001478 |
| optional_test_empty_braces.test | RUN | 0.100286 | 0.250941 | 0.313381 | 0.001604 | 0.001702 | 0.001408 |
| optional_test_make_optional.test | RUN | 0.140297 | 0.381875 | 0.486997 | 0.001550 | 0.001706 | 0.001742 |
| optional_test_flat_map.test | RUN | 0.158237 | 0.457291 | 0.558102 | 0.001347 | 0.001546 | 0.001537 |
| optional_test_hash.test | RUN | 0.130849 | 0.387986 | 0.414443 | 0.001544 | 0.001718 | 0.001739 |
| optional_test_map.test | RUN | 0.155595 | 0.430350 | 0.565471 | 0.001692 | 0.001332 | 0.001358 |
| optional_test_tie.test | RUN | 0.112405 | 0.281508 | 0.329235 | 0.001630 | 0.001596 | 0.001464 |
| optional_test_ranges_find.test | RUN | 0.105016 | 0.246426 | 0.294826 | 0.001473 | 0.001504 | 0.001680 |
| optional_test_ref_assign_portable_minimum.test | RUN | 0.132953 | 0.699844 | 0.431187 | 0.001270 | 0.001428 | 0.001725 |
| optional_test_ref_assign_mutable_int.test | RUN | 0.109844 | 0.294550 | 0.330808 | 0.001483 | 0.001557 | 0.001544 |
| optional_test_ref_assign_const_int.test | RUN | 0.114544 | 0.307232 | 0.321919 | 0.001470 | 0.001509 | 0.001585 |
| optional_test_ref_converting_ctor.test | RUN | 0.117415 | 0.418368 | 0.344984 | 0.001504 | 0.001676 | 0.001716 |
| optional_test_ref_convert_assign_non_int.test | RUN | 0.108793 | 0.286716 | 0.315558 | 0.001331 | 0.001544 | 0.001760 |
| optional_test_ref_convert_assign_mutable_int.test | RUN | 0.104878 | 0.261681 | 0.302315 | 0.001592 | 0.001540 | 0.001255 |
| optional_test_ref_convert_assign_const_int.test | RUN | 0.101893 | 0.261369 | 0.296646 | 0.001402 | 0.001466 | 0.001558 |
| optional_test_ref_portable_minimum.test | RUN | 0.417616 | 1.367285 | 1.081935 | 0.001576 | 0.001553 | 0.001681 |
| optional_test_ref_move.test | RUN | 0.113216 | 0.269573 | 0.312860 | 0.001496 | 0.001700 | 0.001411 |
| optional_test_ref_to_val.test | RUN | 0.129890 | 0.558973 | 0.438714 | 0.001526 | 0.001424 | 0.001360 |
| optional_test_inplace_factory.test | RUN | 0.136047 | 0.500298 | 0.402551 | 0.001413 | 0.001557 | 0.001678 |
| optional_test_io.test | RUN | 0.128761 | 0.577083 | 0.420491 | 0.001301 | 0.001657 | 0.001639 |
| optional_test_move.test | RUN | 0.121804 | 0.388256 | 0.376221 | 0.001522 | 0.001658 | 0.001666 |
| optional_test_noexcept_move.test | RUN | 0.069222 | 0.167860 | 0.208383 | 0.000543 | 0.000597 | 0.001443 |
| optional_test_cmp_none.test | RUN | 0.104975 | 0.268070 | 0.323341 | 0.001316 | 0.001738 | 0.001684 |
| optional_test_value_access.test | RUN | 0.122248 | 0.459702 | 0.416341 | 0.001371 | 0.001690 | 0.001576 |
| optional_test_emplace.test | RUN | 0.126282 | 0.444957 | 0.432172 | 0.001444 | 0.001459 | 0.001512 |
| optional_test_minimum_requirements.test | RUN | 0.117780 | 0.365769 | 0.383242 | 0.001671 | 0.001437 | 0.001366 |
| optional_test_msvc_bug_workaround.test | RUN | 0.105959 | 0.250157 | 0.311865 | 0.001432 | 0.001626 | 0.001437 |
| optional_test_member_T.test | RUN | 0.105124 | 0.241676 | 0.291697 | 0.001247 | 0.001553 | 0.001717 |
| optional_test_tc_base.test | RUN | 0.108154 | 0.250335 | 0.307782 | 0.001474 | 0.001472 | 0.001621 |
| optional_test_sfinae_friendly_ctor.test | COMPILE | 0.079489 | 0.167201 | 0.212942 | — | — | — |
| optional_test_path_assignment.test | COMPILE | 0.073597 | 0.166355 | 0.191670 | — | — | — |
| optional_test_fail_const_swap.test | COMPILE_FAIL | 0.063570 | 0.158774 | 0.177171 | — | — | — |
| optional_test_ref_convert_assign_const_int_prevented.test | COMPILE_FAIL | 0.089164 | 0.210833 | 0.279883 | — | — | — |
| optional_test_fail1.test | COMPILE_FAIL | 0.083633 | 0.152215 | 0.178098 | — | — | — |
| optional_test_fail3a.test | COMPILE_FAIL | 0.091370 | 0.153242 | 0.185544 | — | — | — |
| optional_test_fail3b.test | COMPILE_FAIL | 0.091930 | 0.157751 | 0.182300 | — | — | — |
| optional_test_ref_fail1.test | COMPILE_FAIL | 0.074155 | 0.148295 | 0.173489 | — | — | — |
| optional_test_ref_fail3.test | COMPILE_FAIL | 0.066644 | 0.151471 | 0.172407 | — | — | — |
| optional_test_ref_fail4.test | COMPILE_FAIL | 0.066324 | 0.152310 | 0.180268 | — | — | — |
| optional_test_ref_fail_convert_from_temporary_optional_T.test | COMPILE_FAIL | 0.068418 | 0.155680 | 0.171842 | — | — | — |
| optional_test_inplace_fail.test | COMPILE_FAIL | 0.110171 | 0.273638 | 0.303817 | — | — | — |
| optional_test_inplace_fail2.test | COMPILE_FAIL | 0.113029 | 0.275067 | 0.298562 | — | — | — |
| optional_test_fail_implicit_bool_convert.test | COMPILE_FAIL | 0.069362 | 0.186283 | 0.179012 | — | — | — |
| optional_test_fail_copying_a_moveable_type.test | COMPILE_FAIL | 0.071365 | 0.184081 | 0.181010 | — | — | — |
| optional_test_fail_optional_rvalue_ref.test | COMPILE_FAIL | 0.065575 | 0.149463 | 0.174687 | — | — | — |
| optional_test_ref_fail_init_from_Trefref.test | COMPILE_FAIL | 0.068697 | 0.149631 | 0.182566 | — | — | — |
| optional_test_ref_fail_init_from_Urefref.test | COMPILE_FAIL | 0.068161 | 0.152411 | 0.177243 | — | — | — |
| optional_test_ref_fail_assign_from_Trefref.test | COMPILE_FAIL | 0.068338 | 0.153916 | 0.178928 | — | — | — |
| optional_test_ref_fail_assign_from_Urefref.test | COMPILE_FAIL | 0.068608 | 0.150489 | 0.177607 | — | — | — |
| optional_test_fail_convert_from_null.test | COMPILE_FAIL | 0.068903 | 0.149286 | 0.174912 | — | — | — |
| optional_test_fail_explicit_convert_in_value_or.test | COMPILE_FAIL | 0.069222 | 0.152026 | 0.173194 | — | — | — |
| optional_test_fail_explicit_convert_in_value_or_call.test | COMPILE_FAIL | 0.068058 | 0.151629 | 0.170299 | — | — | — |
| optional_test_fail_io_without_io.test | COMPILE_FAIL | 0.093438 | 0.200739 | 0.253231 | — | — | — |
| optional_test_fail_none_io_without_io.test | COMPILE_FAIL | 0.074497 | 0.163096 | 0.213461 | — | — | — |
| optional_test_fail_convert_assign_of_enums.test | COMPILE_FAIL | 0.069066 | 0.159491 | 0.180070 | — | — | — |
| optional_test_static_properties.test | RUN | 0.157873 | 0.349088 | 0.445893 | 0.001334 | 0.001478 | 0.001778 |
| optional_test_maybe_uninitialized_warning.test | COMPILE | 0.072077 | 0.167624 | 0.194136 | — | — | — |
| optional_test_deleted_default_ctor.test | COMPILE | 0.074252 | 0.173707 | 0.198099 | — | — | — |
| optional_test_constructible_from_other.test | COMPILE | 0.069615 | 0.162618 | 0.188655 | — | — | — |
| optional_xconfig_NO_PROPER_ASSIGN_FROM_CONST_INT_pass.test | RUN | 0.083145 | 0.204145 | 0.264844 | 0.001544 | 0.001425 | 0.001450 |
| optional_xconfig_NO_PROPER_ASSIGN_FROM_CONST_INT_fail.test | RUN_FAIL | 0.083036 | 0.209015 | 0.259656 | 0.001380 | 0.001431 | 0.001356 |
| optional_xconfig_NO_PROPER_CONVERT_FROM_CONST_INT_pass.test | RUN | 0.084594 | 0.205572 | 0.263117 | 0.001226 | 0.001380 | 0.001131 |
| optional_xconfig_NO_PROPER_CONVERT_FROM_CONST_INT_fail.test | RUN_FAIL | 0.085735 | 0.213816 | 0.255676 | 0.001436 | 0.001240 | 0.001652 |
| optional_xconfig_NO_LEGAL_CONVERT_FROM_REF_pass.test | RUN | 0.068466 | 0.148096 | 0.161820 | 0.001160 | 0.001173 | 0.001238 |
| optional_xconfig_NO_LEGAL_CONVERT_FROM_REF_fail.test | COMPILE_FAIL | 0.039752 | 0.135966 | 0.160257 | — | — | — |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.968× | 0.962×, 0.973× | 0.954× |
| clang | 1.007× | 0.995×, 1.020× | 0.983× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1364 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43639138948).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| optional_test.test | 10 | 0.000981s | 0.000937s | 0.000959s | byte equality observed |
| optional_test_assign.test | 10 | 0.000892s | 0.000851s | 0.000889s | byte equality observed |
| optional_test_cmp_none.test | 10 | 0.000889s | 0.000868s | 0.000887s | byte equality observed |
| optional_test_constructors.test | 10 | 0.000917s | 0.000870s | 0.000897s | byte equality observed |
| optional_test_conversions_from_U.test | 10 | 0.000900s | 0.000878s | 0.000888s | byte equality observed |
| optional_test_convert_assign.test | 10 | 0.000899s | 0.000877s | 0.000897s | byte equality observed |
| optional_test_convert_from_T.test | 10 | 0.000914s | 0.000901s | 0.000892s | byte equality observed |
| optional_test_emplace.test | 10 | 0.000937s | 0.000932s | 0.000913s | byte equality observed |
| optional_test_empty_braces.test | 10 | 0.000895s | 0.000880s | 0.000899s | byte equality observed |
| optional_test_flat_map.test | 10 | 0.000903s | 0.000893s | 0.000895s | byte equality observed |
| optional_test_hash.test | 10 | 0.000907s | 0.000883s | 0.000870s | byte equality observed |
| optional_test_inplace_factory.test | 10 | 0.000916s | 0.000869s | 0.000890s | byte equality observed |
| optional_test_io.test | 10 | 0.000942s | 0.000900s | 0.000913s | byte equality observed |
| optional_test_make_optional.test | 10 | 0.000901s | 0.000867s | 0.000882s | byte equality observed |
| optional_test_map.test | 10 | 0.000901s | 0.000876s | 0.000876s | byte equality observed |
| optional_test_member_T.test | 10 | 0.000915s | 0.000877s | 0.000894s | byte equality observed |
| optional_test_minimum_requirements.test | 10 | 0.000922s | 0.000947s | 0.000931s | byte equality observed |
| optional_test_move.test | 10 | 0.000903s | 0.000897s | 0.000907s | byte equality observed |
| optional_test_msvc_bug_workaround.test | 10 | 0.000898s | 0.000894s | 0.000922s | byte equality observed |
| optional_test_noexcept_move.test | 10 | 0.000407s | 0.000411s | 0.000871s | byte equality observed |
| optional_test_ranges_find.test | 10 | 0.000918s | 0.000879s | 0.000894s | byte equality observed |
| optional_test_ref_assign_const_int.test | 10 | 0.000902s | 0.000879s | 0.000889s | byte equality observed |
| optional_test_ref_assign_mutable_int.test | 10 | 0.000901s | 0.000881s | 0.000881s | byte equality observed |
| optional_test_ref_assign_portable_minimum.test | 10 | 0.000917s | 0.000876s | 0.000906s | byte equality observed |
| optional_test_ref_convert_assign_const_int.test | 10 | 0.000890s | 0.000870s | 0.000895s | byte equality observed |
| optional_test_ref_convert_assign_mutable_int.test | 10 | 0.000912s | 0.000876s | 0.000896s | byte equality observed |
| optional_test_ref_convert_assign_non_int.test | 10 | 0.000904s | 0.000881s | 0.000890s | byte equality observed |
| optional_test_ref_converting_ctor.test | 10 | 0.000897s | 0.000853s | 0.000908s | byte equality observed |
| optional_test_ref_move.test | 10 | 0.000902s | 0.000864s | 0.000881s | byte equality observed |
| optional_test_ref_portable_minimum.test | 10 | 0.000930s | 0.000899s | 0.000948s | byte equality observed |
| optional_test_ref_to_val.test | 10 | 0.000901s | 0.000865s | 0.000903s | byte equality observed |
| optional_test_static_properties.test | 10 | 0.000898s | 0.000875s | 0.000888s | byte equality observed |
| optional_test_swap.test | 10 | 0.000893s | 0.000869s | 0.000879s | byte equality observed |
| optional_test_tc_base.test | 10 | 0.000899s | 0.000886s | 0.000886s | byte equality observed |
| optional_test_tie.test | 10 | 0.000900s | 0.000888s | 0.000884s | byte equality observed |
| optional_test_value_access.test | 10 | 0.000949s | 0.000952s | 0.000942s | byte equality observed |
| optional_xconfig_NO_LEGAL_CONVERT_FROM_REF_pass.test | 10 | 0.000889s | 0.000884s | 0.000867s | byte equality observed |
| optional_xconfig_NO_PROPER_ASSIGN_FROM_CONST_INT_pass.test | 10 | 0.000884s | 0.000885s | 0.000912s | byte equality observed |
| optional_xconfig_NO_PROPER_CONVERT_FROM_CONST_INT_pass.test | 10 | 0.000889s | 0.000889s | 0.000890s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43639138948).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
