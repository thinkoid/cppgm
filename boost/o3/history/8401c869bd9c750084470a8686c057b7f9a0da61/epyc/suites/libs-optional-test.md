# libs/optional/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| optional_test.test | RUN | 0.249666 | 1.570014 | 0.922896 | 0.001620 | 0.001720 | 0.001833 |
| optional_test_assign.test | RUN | 0.128340 | 0.328466 | 0.437445 | 0.001660 | 0.001822 | 0.001859 |
| optional_test_swap.test | RUN | 0.141305 | 0.397134 | 0.491300 | 0.001472 | 0.001806 | 0.001573 |
| optional_test_constexpr.test | COMPILE | 0.092114 | 0.220701 | 0.286591 | — | — | — |
| optional_test_wuninitialized.test | COMPILE | 0.140143 | 0.580626 | 0.440631 | — | — | — |
| optional_test_fwd_header.test | COMPILE | 0.095805 | 0.257238 | 0.274155 | — | — | — |
| optional_test_conversions_from_U.test | RUN | 0.148601 | 0.454320 | 0.506277 | 0.001744 | 0.001976 | 0.001684 |
| optional_test_constructors.test | RUN | 0.305879 | 1.546594 | 1.340590 | 0.001626 | 0.001952 | 0.001754 |
| optional_test_convert_from_T.test | RUN | 0.139744 | 0.340761 | 0.489283 | 0.001670 | 0.001946 | 0.001875 |
| optional_test_convert_assign.test | RUN | 0.136368 | 0.324145 | 0.419216 | 0.001572 | 0.001814 | 0.001666 |
| optional_test_empty_braces.test | RUN | 0.132771 | 0.338473 | 0.430739 | 0.001880 | 0.001929 | 0.001773 |
| optional_test_make_optional.test | RUN | 0.187718 | 0.507138 | 0.674013 | 0.001742 | 0.001828 | 0.001631 |
| optional_test_flat_map.test | RUN | 0.200716 | 0.596058 | 0.757210 | 0.001554 | 0.001706 | 0.001523 |
| optional_test_hash.test | RUN | 0.170812 | 0.490713 | 0.579890 | 0.001397 | 0.001749 | 0.001706 |
| optional_test_map.test | RUN | 0.200407 | 0.576619 | 0.783798 | 0.001596 | 0.001898 | 0.001665 |
| optional_test_tie.test | RUN | 0.147617 | 0.368772 | 0.496294 | 0.001526 | 0.001818 | 0.001679 |
| optional_test_ranges_find.test | RUN | 0.126938 | 0.334158 | 0.421015 | 0.001584 | 0.001674 | 0.001371 |
| optional_test_ref_assign_portable_minimum.test | RUN | 0.161340 | 0.937561 | 0.602450 | 0.001552 | 0.001814 | 0.001773 |
| optional_test_ref_assign_mutable_int.test | RUN | 0.143892 | 0.400588 | 0.477829 | 0.001520 | 0.001771 | 0.001621 |
| optional_test_ref_assign_const_int.test | RUN | 0.139014 | 0.412845 | 0.440713 | 0.001715 | 0.001619 | 0.001508 |
| optional_test_ref_converting_ctor.test | RUN | 0.151655 | 0.564630 | 0.530294 | 0.001591 | 0.002010 | 0.001415 |
| optional_test_ref_convert_assign_non_int.test | RUN | 0.138327 | 0.382540 | 0.450838 | 0.001512 | 0.001806 | 0.001730 |
| optional_test_ref_convert_assign_mutable_int.test | RUN | 0.135300 | 0.361115 | 0.447089 | 0.001604 | 0.001514 | 0.001662 |
| optional_test_ref_convert_assign_const_int.test | RUN | 0.134001 | 0.363398 | 0.408981 | 0.001704 | 0.001593 | 0.001541 |
| optional_test_ref_portable_minimum.test | RUN | 0.572977 | 1.873554 | 1.617776 | 0.001696 | 0.001763 | 0.001430 |
| optional_test_ref_move.test | RUN | 0.139747 | 0.366891 | 0.472152 | 0.001781 | 0.001888 | 0.001850 |
| optional_test_ref_to_val.test | RUN | 0.168112 | 0.745584 | 0.677633 | 0.001695 | 0.001652 | 0.001478 |
| optional_test_inplace_factory.test | RUN | 0.175425 | 0.682548 | 0.629370 | 0.001758 | 0.001866 | 0.001614 |
| optional_test_io.test | RUN | 0.164638 | 0.747543 | 0.600068 | 0.001611 | 0.001872 | 0.001911 |
| optional_test_move.test | RUN | 0.154776 | 0.510784 | 0.532319 | 0.001654 | 0.001849 | 0.001822 |
| optional_test_noexcept_move.test | RUN | 0.100173 | 0.227449 | 0.292277 | 0.000627 | 0.001735 | 0.001733 |
| optional_test_cmp_none.test | RUN | 0.134278 | 0.361192 | 0.439185 | 0.001790 | 0.001970 | 0.001802 |
| optional_test_value_access.test | RUN | 0.164126 | 0.608259 | 0.570223 | 0.001765 | 0.001822 | 0.001908 |
| optional_test_emplace.test | RUN | 0.158623 | 0.601255 | 0.589791 | 0.001568 | 0.001696 | 0.001707 |
| optional_test_minimum_requirements.test | RUN | 0.149146 | 0.460614 | 0.504361 | 0.001666 | 0.001794 | 0.001904 |
| optional_test_msvc_bug_workaround.test | RUN | 0.133258 | 0.331818 | 0.431667 | 0.001592 | 0.001623 | 0.001831 |
| optional_test_member_T.test | RUN | 0.134440 | 0.324922 | 0.392998 | 0.001816 | 0.001683 | 0.001742 |
| optional_test_tc_base.test | RUN | 0.135101 | 0.330285 | 0.451981 | 0.001507 | 0.001596 | 0.001603 |
| optional_test_sfinae_friendly_ctor.test | COMPILE | 0.100332 | 0.235466 | 0.307899 | — | — | — |
| optional_test_path_assignment.test | COMPILE | 0.094850 | 0.228832 | 0.258512 | — | — | — |
| optional_test_fail_const_swap.test | COMPILE_FAIL | 0.087657 | 0.203928 | 0.246199 | — | — | — |
| optional_test_ref_convert_assign_const_int_prevented.test | COMPILE_FAIL | 0.122846 | 0.286752 | 0.399145 | — | — | — |
| optional_test_fail1.test | COMPILE_FAIL | 0.088649 | 0.208561 | 0.254548 | — | — | — |
| optional_test_fail3a.test | COMPILE_FAIL | 0.087320 | 0.215271 | 0.269065 | — | — | — |
| optional_test_fail3b.test | COMPILE_FAIL | 0.087583 | 0.210704 | 0.257775 | — | — | — |
| optional_test_ref_fail1.test | COMPILE_FAIL | 0.091787 | 0.205996 | 0.264502 | — | — | — |
| optional_test_ref_fail3.test | COMPILE_FAIL | 0.087289 | 0.207286 | 0.251046 | — | — | — |
| optional_test_ref_fail4.test | COMPILE_FAIL | 0.089036 | 0.207378 | 0.264360 | — | — | — |
| optional_test_ref_fail_convert_from_temporary_optional_T.test | COMPILE_FAIL | 0.087245 | 0.206326 | 0.256873 | — | — | — |
| optional_test_inplace_fail.test | COMPILE_FAIL | 0.143638 | 0.329878 | 0.436482 | — | — | — |
| optional_test_inplace_fail2.test | COMPILE_FAIL | 0.145082 | 0.328137 | 0.445831 | — | — | — |
| optional_test_fail_implicit_bool_convert.test | COMPILE_FAIL | 0.087232 | 0.203596 | 0.266321 | — | — | — |
| optional_test_fail_copying_a_moveable_type.test | COMPILE_FAIL | 0.088748 | 0.215704 | 0.273565 | — | — | — |
| optional_test_fail_optional_rvalue_ref.test | COMPILE_FAIL | 0.087296 | 0.205421 | 0.239234 | — | — | — |
| optional_test_ref_fail_init_from_Trefref.test | COMPILE_FAIL | 0.086369 | 0.210891 | 0.274034 | — | — | — |
| optional_test_ref_fail_init_from_Urefref.test | COMPILE_FAIL | 0.088507 | 0.205713 | 0.270494 | — | — | — |
| optional_test_ref_fail_assign_from_Trefref.test | COMPILE_FAIL | 0.088514 | 0.214486 | 0.252180 | — | — | — |
| optional_test_ref_fail_assign_from_Urefref.test | COMPILE_FAIL | 0.090230 | 0.209065 | 0.261242 | — | — | — |
| optional_test_fail_convert_from_null.test | COMPILE_FAIL | 0.085310 | 0.210543 | 0.267106 | — | — | — |
| optional_test_fail_explicit_convert_in_value_or.test | COMPILE_FAIL | 0.086312 | 0.209797 | 0.265352 | — | — | — |
| optional_test_fail_explicit_convert_in_value_or_call.test | COMPILE_FAIL | 0.088423 | 0.215832 | 0.249535 | — | — | — |
| optional_test_fail_io_without_io.test | COMPILE_FAIL | 0.116713 | 0.276719 | 0.377274 | — | — | — |
| optional_test_fail_none_io_without_io.test | COMPILE_FAIL | 0.095727 | 0.234280 | 0.327103 | — | — | — |
| optional_test_fail_convert_assign_of_enums.test | COMPILE_FAIL | 0.088127 | 0.203527 | 0.265661 | — | — | — |
| optional_test_static_properties.test | RUN | 0.210885 | 0.475952 | 0.679774 | 0.001502 | 0.001925 | 0.001792 |
| optional_test_maybe_uninitialized_warning.test | COMPILE | 0.091569 | 0.230582 | 0.283114 | — | — | — |
| optional_test_deleted_default_ctor.test | COMPILE | 0.091866 | 0.240562 | 0.293779 | — | — | — |
| optional_test_constructible_from_other.test | COMPILE | 0.091173 | 0.224114 | 0.277192 | — | — | — |
| optional_xconfig_NO_PROPER_ASSIGN_FROM_CONST_INT_pass.test | RUN | 0.109343 | 0.280360 | 0.373608 | 0.001418 | 0.002030 | 0.001658 |
| optional_xconfig_NO_PROPER_ASSIGN_FROM_CONST_INT_fail.test | RUN_FAIL | 0.104416 | 0.282711 | 0.353000 | 0.001673 | 0.001638 | 0.001556 |
| optional_xconfig_NO_PROPER_CONVERT_FROM_CONST_INT_pass.test | RUN | 0.103805 | 0.281076 | 0.376972 | 0.001298 | 0.001569 | 0.001460 |
| optional_xconfig_NO_PROPER_CONVERT_FROM_CONST_INT_fail.test | RUN_FAIL | 0.111090 | 0.282007 | 0.358555 | 0.001394 | 0.001500 | 0.001716 |
| optional_xconfig_NO_LEGAL_CONVERT_FROM_REF_pass.test | RUN | 0.074036 | 0.219996 | 0.236989 | 0.001251 | 0.001417 | 0.001156 |
| optional_xconfig_NO_LEGAL_CONVERT_FROM_REF_fail.test | COMPILE_FAIL | 0.051477 | 0.204732 | 0.226481 | — | — | — |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 1.041×† | 1.069×, 1.012× | 0.999× |
| clang | 1.014× | 1.019×, 1.010× | 1.003× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1363 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43638391827).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| optional_test.test | 10 | 0.001094s | 0.001106s | 0.001072s | byte equality observed |
| optional_test_assign.test | 10 | 0.001017s | 0.001050s | 0.000992s | byte equality observed |
| optional_test_cmp_none.test | 10 | 0.001011s | 0.001032s | 0.001030s | byte equality observed |
| optional_test_constructors.test | 10 | 0.001022s | 0.001053s | 0.001021s | byte equality observed |
| optional_test_conversions_from_U.test | 10 | 0.001003s | 0.001050s | 0.001001s | byte equality observed |
| optional_test_convert_assign.test | 10 | 0.001020s | 0.001049s | 0.001011s | byte equality observed |
| optional_test_convert_from_T.test | 10 | 0.001002s | 0.001086s | 0.001006s | byte equality observed |
| optional_test_emplace.test | 10 | 0.001040s | 0.001098s | 0.001030s | byte equality observed |
| optional_test_empty_braces.test | 10 | 0.001006s | 0.001043s | 0.001023s | byte equality observed |
| optional_test_flat_map.test | 10 | 0.001005s | 0.001070s | 0.001031s | byte equality observed |
| optional_test_hash.test | 10 | 0.001025s | 0.001030s | 0.001026s | byte equality observed |
| optional_test_inplace_factory.test | 10 | 0.001021s | 0.001097s | 0.001032s | byte equality observed |
| optional_test_io.test | 10 | 0.001058s | 0.001046s | 0.001024s | byte equality observed |
| optional_test_make_optional.test | 10 | 0.001021s | 0.001032s | 0.001026s | byte equality observed |
| optional_test_map.test | 10 | 0.001001s | 0.001040s | 0.001009s | byte equality observed |
| optional_test_member_T.test | 10 | 0.001002s | 0.001001s | 0.001027s | byte equality observed |
| optional_test_minimum_requirements.test | 10 | 0.001071s | 0.001041s | 0.001054s | byte equality observed |
| optional_test_move.test | 10 | 0.001007s | 0.001004s | 0.001045s | byte equality observed |
| optional_test_msvc_bug_workaround.test | 10 | 0.001014s | 0.001044s | 0.001001s | byte equality observed |
| optional_test_noexcept_move.test | 10 | 0.000474s | 0.000485s | 0.001028s | byte equality observed |
| optional_test_ranges_find.test | 10 | 0.001013s | 0.001039s | 0.001006s | byte equality observed |
| optional_test_ref_assign_const_int.test | 10 | 0.001027s | 0.001053s | 0.001046s | byte equality observed |
| optional_test_ref_assign_mutable_int.test | 10 | 0.001020s | 0.001020s | 0.001008s | byte equality observed |
| optional_test_ref_assign_portable_minimum.test | 10 | 0.001024s | 0.001066s | 0.001004s | byte equality observed |
| optional_test_ref_convert_assign_const_int.test | 10 | 0.001041s | 0.001045s | 0.000989s | byte equality observed |
| optional_test_ref_convert_assign_mutable_int.test | 10 | 0.001012s | 0.001036s | 0.001000s | byte equality observed |
| optional_test_ref_convert_assign_non_int.test | 10 | 0.001004s | 0.001030s | 0.001032s | byte equality observed |
| optional_test_ref_converting_ctor.test | 10 | 0.001005s | 0.001021s | 0.001038s | byte equality observed |
| optional_test_ref_move.test | 10 | 0.001033s | 0.001008s | 0.001017s | byte equality observed |
| optional_test_ref_portable_minimum.test | 10 | 0.001063s | 0.001026s | 0.001051s | byte equality observed |
| optional_test_ref_to_val.test | 10 | 0.001019s | 0.001014s | 0.001032s | byte equality observed |
| optional_test_static_properties.test | 10 | 0.001002s | 0.001048s | 0.001043s | byte equality observed |
| optional_test_swap.test | 10 | 0.001022s | 0.001032s | 0.001072s | byte equality observed |
| optional_test_tc_base.test | 10 | 0.001019s | 0.001034s | 0.001050s | byte equality observed |
| optional_test_tie.test | 10 | 0.001009s | 0.000990s | 0.001006s | byte equality observed |
| optional_test_value_access.test | 10 | 0.001048s | 0.001053s | 0.001071s | byte equality observed |
| optional_xconfig_NO_LEGAL_CONVERT_FROM_REF_pass.test | 10 | 0.000989s | 0.001072s | 0.000992s | byte equality observed |
| optional_xconfig_NO_PROPER_ASSIGN_FROM_CONST_INT_pass.test | 10 | 0.001033s | 0.001051s | 0.001018s | byte equality observed |
| optional_xconfig_NO_PROPER_CONVERT_FROM_CONST_INT_pass.test | 10 | 0.001021s | 0.001070s | 0.001008s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43638391827).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
