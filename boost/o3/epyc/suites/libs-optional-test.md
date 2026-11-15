# libs/optional/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| optional_test.test | RUN | 0.184204 | 1.086710 | 0.683714 | 0.001380 | 0.001685 | 0.001768 |
| optional_test_assign.test | RUN | 0.101057 | 0.230296 | 0.310270 | 0.001272 | 0.001635 | 0.001482 |
| optional_test_swap.test | RUN | 0.107644 | 0.283555 | 0.332885 | 0.001506 | 0.001394 | 0.001341 |
| optional_test_constexpr.test | COMPILE | 0.072067 | 0.155386 | 0.191492 | — | — | — |
| optional_test_wuninitialized.test | COMPILE | 0.102959 | 0.397369 | 0.340591 | — | — | — |
| optional_test_fwd_header.test | COMPILE | 0.069473 | 0.156492 | 0.193666 | — | — | — |
| optional_test_conversions_from_U.test | RUN | 0.113017 | 0.303658 | 0.379591 | 0.001425 | 0.001643 | 0.001674 |
| optional_test_constructors.test | RUN | 0.226138 | 1.085135 | 0.970081 | 0.001370 | 0.001374 | 0.001662 |
| optional_test_convert_from_T.test | RUN | 0.105086 | 0.253445 | 0.328214 | 0.001594 | 0.001475 | 0.001623 |
| optional_test_convert_assign.test | RUN | 0.101094 | 0.252881 | 0.325663 | 0.001433 | 0.001623 | 0.001648 |
| optional_test_empty_braces.test | RUN | 0.103955 | 0.238719 | 0.304159 | 0.001610 | 0.001682 | 0.001698 |
| optional_test_make_optional.test | RUN | 0.145082 | 0.376037 | 0.488334 | 0.001646 | 0.001301 | 0.001635 |
| optional_test_flat_map.test | RUN | 0.151214 | 0.433651 | 0.544366 | 0.001398 | 0.001461 | 0.001601 |
| optional_test_hash.test | RUN | 0.126652 | 0.356199 | 0.409363 | 0.001392 | 0.001479 | 0.001652 |
| optional_test_map.test | RUN | 0.154443 | 0.413737 | 0.581363 | 0.001456 | 0.001236 | 0.001449 |
| optional_test_tie.test | RUN | 0.110253 | 0.275338 | 0.317603 | 0.001529 | 0.001405 | 0.001422 |
| optional_test_ranges_find.test | RUN | 0.096189 | 0.227190 | 0.306012 | 0.001427 | 0.001536 | 0.001322 |
| optional_test_ref_assign_portable_minimum.test | RUN | 0.126146 | 0.673846 | 0.416576 | 0.001470 | 0.001404 | 0.001588 |
| optional_test_ref_assign_mutable_int.test | RUN | 0.112920 | 0.299982 | 0.312027 | 0.001592 | 0.001499 | 0.001596 |
| optional_test_ref_assign_const_int.test | RUN | 0.110790 | 0.292363 | 0.338441 | 0.001717 | 0.001462 | 0.001584 |
| optional_test_ref_converting_ctor.test | RUN | 0.112339 | 0.392448 | 0.375896 | 0.001398 | 0.001523 | 0.001534 |
| optional_test_ref_convert_assign_non_int.test | RUN | 0.106504 | 0.277422 | 0.323676 | 0.001334 | 0.001552 | 0.001664 |
| optional_test_ref_convert_assign_mutable_int.test | RUN | 0.105591 | 0.246855 | 0.323841 | 0.001499 | 0.001474 | 0.001623 |
| optional_test_ref_convert_assign_const_int.test | RUN | 0.103359 | 0.251905 | 0.316646 | 0.001564 | 0.001435 | 0.001664 |
| optional_test_ref_portable_minimum.test | RUN | 0.398126 | 1.331581 | 1.091644 | 0.001467 | 0.001562 | 0.001664 |
| optional_test_ref_move.test | RUN | 0.110322 | 0.263958 | 0.300307 | 0.001402 | 0.001627 | 0.001618 |
| optional_test_ref_to_val.test | RUN | 0.129570 | 0.524866 | 0.442541 | 0.001620 | 0.001554 | 0.001583 |
| optional_test_inplace_factory.test | RUN | 0.134507 | 0.483032 | 0.412509 | 0.001358 | 0.001378 | 0.001693 |
| optional_test_io.test | RUN | 0.124909 | 0.547142 | 0.430323 | 0.001403 | 0.001487 | 0.001455 |
| optional_test_move.test | RUN | 0.121519 | 0.368266 | 0.358191 | 0.001389 | 0.001370 | 0.001402 |
| optional_test_noexcept_move.test | RUN | 0.074000 | 0.165651 | 0.182491 | 0.000515 | 0.000583 | 0.001644 |
| optional_test_cmp_none.test | RUN | 0.103194 | 0.254084 | 0.294212 | 0.001380 | 0.001667 | 0.001556 |
| optional_test_value_access.test | RUN | 0.127275 | 0.435758 | 0.397776 | 0.001385 | 0.001474 | 0.001741 |
| optional_test_emplace.test | RUN | 0.123800 | 0.432846 | 0.411033 | 0.001385 | 0.001350 | 0.001547 |
| optional_test_minimum_requirements.test | RUN | 0.112168 | 0.334313 | 0.366574 | 0.001387 | 0.001522 | 0.001382 |
| optional_test_msvc_bug_workaround.test | RUN | 0.098964 | 0.237134 | 0.302713 | 0.001395 | 0.001393 | 0.001588 |
| optional_test_member_T.test | RUN | 0.101456 | 0.230753 | 0.292988 | 0.001263 | 0.001468 | 0.001646 |
| optional_test_tc_base.test | RUN | 0.101098 | 0.237286 | 0.294016 | 0.001619 | 0.001257 | 0.001366 |
| optional_test_sfinae_friendly_ctor.test | COMPILE | 0.075144 | 0.166261 | 0.186215 | — | — | — |
| optional_test_path_assignment.test | COMPILE | 0.070387 | 0.168047 | 0.191745 | — | — | — |
| optional_test_fail_const_swap.test | COMPILE_FAIL | 0.068998 | 0.144864 | 0.179695 | — | — | — |
| optional_test_ref_convert_assign_const_int_prevented.test | COMPILE_FAIL | 0.087624 | 0.200584 | 0.280478 | — | — | — |
| optional_test_fail1.test | COMPILE_FAIL | 0.064874 | 0.142972 | 0.174457 | — | — | — |
| optional_test_fail3a.test | COMPILE_FAIL | 0.064442 | 0.144066 | 0.181945 | — | — | — |
| optional_test_fail3b.test | COMPILE_FAIL | 0.065968 | 0.148092 | 0.188268 | — | — | — |
| optional_test_ref_fail1.test | COMPILE_FAIL | 0.064020 | 0.146212 | 0.174054 | — | — | — |
| optional_test_ref_fail3.test | COMPILE_FAIL | 0.063432 | 0.147797 | 0.173392 | — | — | — |
| optional_test_ref_fail4.test | COMPILE_FAIL | 0.064361 | 0.147161 | 0.179894 | — | — | — |
| optional_test_ref_fail_convert_from_temporary_optional_T.test | COMPILE_FAIL | 0.064428 | 0.153476 | 0.174101 | — | — | — |
| optional_test_inplace_fail.test | COMPILE_FAIL | 0.104385 | 0.234136 | 0.310131 | — | — | — |
| optional_test_inplace_fail2.test | COMPILE_FAIL | 0.104139 | 0.230043 | 0.298647 | — | — | — |
| optional_test_fail_implicit_bool_convert.test | COMPILE_FAIL | 0.063870 | 0.145472 | 0.177368 | — | — | — |
| optional_test_fail_copying_a_moveable_type.test | COMPILE_FAIL | 0.066075 | 0.148241 | 0.175803 | — | — | — |
| optional_test_fail_optional_rvalue_ref.test | COMPILE_FAIL | 0.064873 | 0.140695 | 0.173438 | — | — | — |
| optional_test_ref_fail_init_from_Trefref.test | COMPILE_FAIL | 0.063011 | 0.141856 | 0.173561 | — | — | — |
| optional_test_ref_fail_init_from_Urefref.test | COMPILE_FAIL | 0.063437 | 0.141927 | 0.176135 | — | — | — |
| optional_test_ref_fail_assign_from_Trefref.test | COMPILE_FAIL | 0.066193 | 0.145734 | 0.175144 | — | — | — |
| optional_test_ref_fail_assign_from_Urefref.test | COMPILE_FAIL | 0.063196 | 0.144211 | 0.178565 | — | — | — |
| optional_test_fail_convert_from_null.test | COMPILE_FAIL | 0.061696 | 0.142459 | 0.172944 | — | — | — |
| optional_test_fail_explicit_convert_in_value_or.test | COMPILE_FAIL | 0.063006 | 0.143939 | 0.177478 | — | — | — |
| optional_test_fail_explicit_convert_in_value_or_call.test | COMPILE_FAIL | 0.063872 | 0.145361 | 0.178192 | — | — | — |
| optional_test_fail_io_without_io.test | COMPILE_FAIL | 0.086266 | 0.189791 | 0.261979 | — | — | — |
| optional_test_fail_none_io_without_io.test | COMPILE_FAIL | 0.066204 | 0.159599 | 0.208971 | — | — | — |
| optional_test_fail_convert_assign_of_enums.test | COMPILE_FAIL | 0.063006 | 0.144325 | 0.175616 | — | — | — |
| optional_test_static_properties.test | RUN | 0.149084 | 0.329142 | 0.452057 | 0.001486 | 0.001569 | 0.001704 |
| optional_test_maybe_uninitialized_warning.test | COMPILE | 0.067623 | 0.162056 | 0.197755 | — | — | — |
| optional_test_deleted_default_ctor.test | COMPILE | 0.068636 | 0.161124 | 0.202583 | — | — | — |
| optional_test_constructible_from_other.test | COMPILE | 0.065840 | 0.151534 | 0.188315 | — | — | — |
| optional_xconfig_NO_PROPER_ASSIGN_FROM_CONST_INT_pass.test | RUN | 0.078298 | 0.194515 | 0.253010 | 0.001400 | 0.001517 | 0.001447 |
| optional_xconfig_NO_PROPER_ASSIGN_FROM_CONST_INT_fail.test | RUN_FAIL | 0.077930 | 0.195764 | 0.259088 | 0.001301 | 0.001146 | 0.001271 |
| optional_xconfig_NO_PROPER_CONVERT_FROM_CONST_INT_pass.test | RUN | 0.079424 | 0.192493 | 0.259384 | 0.001179 | 0.001241 | 0.001288 |
| optional_xconfig_NO_PROPER_CONVERT_FROM_CONST_INT_fail.test | RUN_FAIL | 0.079584 | 0.205673 | 0.246333 | 0.001115 | 0.001641 | 0.001702 |
| optional_xconfig_NO_LEGAL_CONVERT_FROM_REF_pass.test | RUN | 0.057347 | 0.128960 | 0.178029 | 0.001075 | 0.001017 | 0.001142 |
| optional_xconfig_NO_LEGAL_CONVERT_FROM_REF_fail.test | COMPILE_FAIL | 0.049204 | 0.135002 | 0.149053 | — | — | — |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.981× | 0.973×, 0.988× | 1.023× |
| clang | 1.001×† | 1.025×, 0.976× | 0.990× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1363 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43658654032).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| optional_test.test | 10 | 0.000992s | 0.000936s | 0.000969s | byte equality observed |
| optional_test_assign.test | 10 | 0.000889s | 0.000880s | 0.000878s | byte equality observed |
| optional_test_cmp_none.test | 10 | 0.000903s | 0.000887s | 0.000912s | byte equality observed |
| optional_test_constructors.test | 10 | 0.000929s | 0.000885s | 0.000904s | byte equality observed |
| optional_test_conversions_from_U.test | 10 | 0.000909s | 0.000873s | 0.000891s | byte equality observed |
| optional_test_convert_assign.test | 10 | 0.000907s | 0.000869s | 0.000883s | byte equality observed |
| optional_test_convert_from_T.test | 10 | 0.000903s | 0.000873s | 0.000881s | byte equality observed |
| optional_test_emplace.test | 10 | 0.000928s | 0.000942s | 0.000922s | byte equality observed |
| optional_test_empty_braces.test | 10 | 0.000883s | 0.000893s | 0.000885s | byte equality observed |
| optional_test_flat_map.test | 10 | 0.000917s | 0.000868s | 0.000880s | byte equality observed |
| optional_test_hash.test | 10 | 0.000905s | 0.000874s | 0.000901s | byte equality observed |
| optional_test_inplace_factory.test | 10 | 0.000899s | 0.000912s | 0.000913s | byte equality observed |
| optional_test_io.test | 10 | 0.000917s | 0.000915s | 0.000915s | byte equality observed |
| optional_test_make_optional.test | 10 | 0.000886s | 0.000878s | 0.000896s | byte equality observed |
| optional_test_map.test | 10 | 0.000888s | 0.000879s | 0.000893s | byte equality observed |
| optional_test_member_T.test | 10 | 0.000902s | 0.000888s | 0.000902s | byte equality observed |
| optional_test_minimum_requirements.test | 10 | 0.000930s | 0.000912s | 0.000939s | byte equality observed |
| optional_test_move.test | 10 | 0.000890s | 0.000903s | 0.000904s | byte equality observed |
| optional_test_msvc_bug_workaround.test | 10 | 0.000913s | 0.000887s | 0.000889s | byte equality observed |
| optional_test_noexcept_move.test | 10 | 0.000415s | 0.000403s | 0.000880s | byte equality observed |
| optional_test_ranges_find.test | 10 | 0.000906s | 0.000879s | 0.000891s | byte equality observed |
| optional_test_ref_assign_const_int.test | 10 | 0.000902s | 0.000894s | 0.000907s | byte equality observed |
| optional_test_ref_assign_mutable_int.test | 10 | 0.000914s | 0.000883s | 0.000892s | byte equality observed |
| optional_test_ref_assign_portable_minimum.test | 10 | 0.000908s | 0.000875s | 0.000890s | byte equality observed |
| optional_test_ref_convert_assign_const_int.test | 10 | 0.000900s | 0.000883s | 0.000896s | byte equality observed |
| optional_test_ref_convert_assign_mutable_int.test | 10 | 0.000894s | 0.000857s | 0.000880s | byte equality observed |
| optional_test_ref_convert_assign_non_int.test | 10 | 0.000900s | 0.000858s | 0.000901s | byte equality observed |
| optional_test_ref_converting_ctor.test | 10 | 0.000892s | 0.000865s | 0.000937s | byte equality observed |
| optional_test_ref_move.test | 10 | 0.000898s | 0.000858s | 0.000883s | byte equality observed |
| optional_test_ref_portable_minimum.test | 10 | 0.000943s | 0.000897s | 0.000932s | byte equality observed |
| optional_test_ref_to_val.test | 10 | 0.000902s | 0.000884s | 0.000911s | byte equality observed |
| optional_test_static_properties.test | 10 | 0.000891s | 0.000864s | 0.000901s | byte equality observed |
| optional_test_swap.test | 10 | 0.000887s | 0.000865s | 0.000915s | byte equality observed |
| optional_test_tc_base.test | 10 | 0.000923s | 0.000881s | 0.000900s | byte equality observed |
| optional_test_tie.test | 10 | 0.000901s | 0.000879s | 0.000886s | byte equality observed |
| optional_test_value_access.test | 10 | 0.000947s | 0.000915s | 0.000932s | byte equality observed |
| optional_xconfig_NO_LEGAL_CONVERT_FROM_REF_pass.test | 10 | 0.000869s | 0.000876s | 0.000879s | byte equality observed |
| optional_xconfig_NO_PROPER_ASSIGN_FROM_CONST_INT_pass.test | 10 | 0.000881s | 0.000871s | 0.000883s | byte equality observed |
| optional_xconfig_NO_PROPER_CONVERT_FROM_CONST_INT_pass.test | 10 | 0.000875s | 0.000870s | 0.000889s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43658654032).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
