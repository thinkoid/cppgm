# libs/optional/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| optional_test.test | RUN | 0.198161 | 1.166459 | 0.652480 | 0.001776 | 0.002874 | 0.001954 |
| optional_test_assign.test | RUN | 0.104296 | 0.239801 | 0.284493 | 0.001752 | 0.003205 | 0.001769 |
| optional_test_swap.test | RUN | 0.114236 | 0.298603 | 0.326938 | 0.001519 | 0.001732 | 0.001478 |
| optional_test_constexpr.test | COMPILE | 0.076508 | 0.162020 | 0.189758 | — | — | — |
| optional_test_wuninitialized.test | COMPILE | 0.116195 | 0.450674 | 0.301440 | — | — | — |
| optional_test_fwd_header.test | COMPILE | 0.075625 | 0.170389 | 0.184831 | — | — | — |
| optional_test_conversions_from_U.test | RUN | 0.125562 | 0.323553 | 0.376983 | 0.001789 | 0.001548 | 0.001488 |
| optional_test_constructors.test | RUN | 0.250902 | 1.150331 | 0.966071 | 0.001395 | 0.001610 | 0.001780 |
| optional_test_convert_from_T.test | RUN | 0.119462 | 0.260525 | 0.316014 | 0.001744 | 0.001638 | 0.001710 |
| optional_test_convert_assign.test | RUN | 0.113819 | 0.279435 | 0.322736 | 0.001545 | 0.001448 | 0.001634 |
| optional_test_empty_braces.test | RUN | 0.117250 | 0.256817 | 0.285766 | 0.001621 | 0.001589 | 0.001659 |
| optional_test_make_optional.test | RUN | 0.165625 | 0.382976 | 0.481990 | 0.001776 | 0.001508 | 0.001638 |
| optional_test_flat_map.test | RUN | 0.174560 | 0.441470 | 0.543618 | 0.001548 | 0.001524 | 0.001470 |
| optional_test_hash.test | RUN | 0.145106 | 0.358879 | 0.418370 | 0.001433 | 0.001251 | 0.001353 |
| optional_test_map.test | RUN | 0.173503 | 0.426239 | 0.557581 | 0.001570 | 0.001465 | 0.001340 |
| optional_test_tie.test | RUN | 0.129944 | 0.283962 | 0.334317 | 0.001617 | 0.001418 | 0.001511 |
| optional_test_ranges_find.test | RUN | 0.114556 | 0.225650 | 0.291998 | 0.001506 | 0.001397 | 0.001653 |
| optional_test_ref_assign_portable_minimum.test | RUN | 0.144667 | 0.676863 | 0.434913 | 0.001597 | 0.001176 | 0.001498 |
| optional_test_ref_assign_mutable_int.test | RUN | 0.117101 | 0.297268 | 0.324138 | 0.001606 | 0.001667 | 0.001574 |
| optional_test_ref_assign_const_int.test | RUN | 0.120312 | 0.310174 | 0.317373 | 0.001848 | 0.001415 | 0.001511 |
| optional_test_ref_converting_ctor.test | RUN | 0.131055 | 0.420303 | 0.370732 | 0.001642 | 0.001666 | 0.001654 |
| optional_test_ref_convert_assign_non_int.test | RUN | 0.119953 | 0.284352 | 0.328924 | 0.001577 | 0.001185 | 0.001630 |
| optional_test_ref_convert_assign_mutable_int.test | RUN | 0.118255 | 0.268455 | 0.284562 | 0.001571 | 0.001295 | 0.001598 |
| optional_test_ref_convert_assign_const_int.test | RUN | 0.117693 | 0.253624 | 0.293699 | 0.001386 | 0.001175 | 0.001628 |
| optional_test_ref_portable_minimum.test | RUN | 0.420508 | 1.348752 | 1.141091 | 0.001429 | 0.001403 | 0.001652 |
| optional_test_ref_move.test | RUN | 0.114178 | 0.259621 | 0.318703 | 0.001592 | 0.001410 | 0.001770 |
| optional_test_ref_to_val.test | RUN | 0.141666 | 0.527550 | 0.498516 | 0.001575 | 0.001493 | 0.001633 |
| optional_test_inplace_factory.test | RUN | 0.145029 | 0.471650 | 0.452167 | 0.001328 | 0.001627 | 0.001432 |
| optional_test_io.test | RUN | 0.135385 | 0.566706 | 0.426306 | 0.001573 | 0.001508 | 0.001522 |
| optional_test_move.test | RUN | 0.123403 | 0.389970 | 0.362180 | 0.001617 | 0.001491 | 0.001767 |
| optional_test_noexcept_move.test | RUN | 0.072688 | 0.168540 | 0.188522 | 0.000512 | 0.000707 | 0.001248 |
| optional_test_cmp_none.test | RUN | 0.106098 | 0.272932 | 0.294918 | 0.001414 | 0.001743 | 0.001800 |
| optional_test_value_access.test | RUN | 0.123774 | 0.453744 | 0.413583 | 0.001725 | 0.001453 | 0.001629 |
| optional_test_emplace.test | RUN | 0.123068 | 0.446542 | 0.415044 | 0.001383 | 0.001432 | 0.001369 |
| optional_test_minimum_requirements.test | RUN | 0.110676 | 0.351853 | 0.358885 | 0.001524 | 0.001604 | 0.001686 |
| optional_test_msvc_bug_workaround.test | RUN | 0.100875 | 0.252551 | 0.301175 | 0.001322 | 0.001538 | 0.001485 |
| optional_test_member_T.test | RUN | 0.102406 | 0.240119 | 0.288492 | 0.001378 | 0.001722 | 0.001355 |
| optional_test_tc_base.test | RUN | 0.100236 | 0.250988 | 0.292122 | 0.001387 | 0.001507 | 0.001584 |
| optional_test_sfinae_friendly_ctor.test | COMPILE | 0.075527 | 0.172481 | 0.191887 | — | — | — |
| optional_test_path_assignment.test | COMPILE | 0.070845 | 0.175147 | 0.178680 | — | — | — |
| optional_test_fail_const_swap.test | COMPILE_FAIL | 0.065901 | 0.160521 | 0.162733 | — | — | — |
| optional_test_ref_convert_assign_const_int_prevented.test | COMPILE_FAIL | 0.089794 | 0.216589 | 0.258376 | — | — | — |
| optional_test_fail1.test | COMPILE_FAIL | 0.064586 | 0.155398 | 0.163428 | — | — | — |
| optional_test_fail3a.test | COMPILE_FAIL | 0.066818 | 0.159365 | 0.178253 | — | — | — |
| optional_test_fail3b.test | COMPILE_FAIL | 0.068348 | 0.162046 | 0.169088 | — | — | — |
| optional_test_ref_fail1.test | COMPILE_FAIL | 0.066328 | 0.152176 | 0.172958 | — | — | — |
| optional_test_ref_fail3.test | COMPILE_FAIL | 0.065406 | 0.152265 | 0.160848 | — | — | — |
| optional_test_ref_fail4.test | COMPILE_FAIL | 0.070788 | 0.157068 | 0.163258 | — | — | — |
| optional_test_ref_fail_convert_from_temporary_optional_T.test | COMPILE_FAIL | 0.070603 | 0.159086 | 0.163166 | — | — | — |
| optional_test_inplace_fail.test | COMPILE_FAIL | 0.115234 | 0.245791 | 0.281352 | — | — | — |
| optional_test_inplace_fail2.test | COMPILE_FAIL | 0.111948 | 0.246149 | 0.276926 | — | — | — |
| optional_test_fail_implicit_bool_convert.test | COMPILE_FAIL | 0.066900 | 0.157008 | 0.158028 | — | — | — |
| optional_test_fail_copying_a_moveable_type.test | COMPILE_FAIL | 0.068902 | 0.157464 | 0.166167 | — | — | — |
| optional_test_fail_optional_rvalue_ref.test | COMPILE_FAIL | 0.068174 | 0.149253 | 0.163039 | — | — | — |
| optional_test_ref_fail_init_from_Trefref.test | COMPILE_FAIL | 0.069926 | 0.151230 | 0.163855 | — | — | — |
| optional_test_ref_fail_init_from_Urefref.test | COMPILE_FAIL | 0.068872 | 0.149364 | 0.167932 | — | — | — |
| optional_test_ref_fail_assign_from_Trefref.test | COMPILE_FAIL | 0.068653 | 0.149730 | 0.167997 | — | — | — |
| optional_test_ref_fail_assign_from_Urefref.test | COMPILE_FAIL | 0.066513 | 0.150217 | 0.165778 | — | — | — |
| optional_test_fail_convert_from_null.test | COMPILE_FAIL | 0.067501 | 0.149853 | 0.164948 | — | — | — |
| optional_test_fail_explicit_convert_in_value_or.test | COMPILE_FAIL | 0.069284 | 0.149473 | 0.162712 | — | — | — |
| optional_test_fail_explicit_convert_in_value_or_call.test | COMPILE_FAIL | 0.068477 | 0.150714 | 0.167348 | — | — | — |
| optional_test_fail_io_without_io.test | COMPILE_FAIL | 0.090177 | 0.195161 | 0.241506 | — | — | — |
| optional_test_fail_none_io_without_io.test | COMPILE_FAIL | 0.072672 | 0.164950 | 0.198272 | — | — | — |
| optional_test_fail_convert_assign_of_enums.test | COMPILE_FAIL | 0.067967 | 0.151334 | 0.170878 | — | — | — |
| optional_test_static_properties.test | RUN | 0.161834 | 0.341452 | 0.411463 | 0.001794 | 0.001419 | 0.001550 |
| optional_test_maybe_uninitialized_warning.test | COMPILE | 0.070916 | 0.166015 | 0.177419 | — | — | — |
| optional_test_deleted_default_ctor.test | COMPILE | 0.073187 | 0.164720 | 0.177932 | — | — | — |
| optional_test_constructible_from_other.test | COMPILE | 0.076290 | 0.159639 | 0.170140 | — | — | — |
| optional_xconfig_NO_PROPER_ASSIGN_FROM_CONST_INT_pass.test | RUN | 0.088316 | 0.206334 | 0.246472 | 0.001734 | 0.001168 | 0.001264 |
| optional_xconfig_NO_PROPER_ASSIGN_FROM_CONST_INT_fail.test | RUN_FAIL | 0.090353 | 0.208709 | 0.243543 | 0.001452 | 0.001202 | 0.001314 |
| optional_xconfig_NO_PROPER_CONVERT_FROM_CONST_INT_pass.test | RUN | 0.091856 | 0.205502 | 0.229665 | 0.001395 | 0.001144 | 0.001390 |
| optional_xconfig_NO_PROPER_CONVERT_FROM_CONST_INT_fail.test | RUN_FAIL | 0.094222 | 0.214746 | 0.222694 | 0.001501 | 0.001235 | 0.001482 |
| optional_xconfig_NO_LEGAL_CONVERT_FROM_REF_pass.test | RUN | 0.079842 | 0.138287 | 0.173646 | 0.001188 | 0.001169 | 0.001093 |
| optional_xconfig_NO_LEGAL_CONVERT_FROM_REF_fail.test | COMPILE_FAIL | 0.058555 | 0.131545 | 0.144409 | — | — | — |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.985×† | 0.960×, 1.010× | 0.987× |
| clang | 0.995× | 1.006×, 0.985× | 0.982× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1364 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43666517673).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| optional_test.test | 10 | 0.000927s | 0.000911s | 0.000918s | byte equality observed |
| optional_test_assign.test | 10 | 0.000867s | 0.000851s | 0.000849s | byte equality observed |
| optional_test_cmp_none.test | 10 | 0.000870s | 0.000840s | 0.000865s | byte equality observed |
| optional_test_constructors.test | 10 | 0.000887s | 0.000854s | 0.000859s | byte equality observed |
| optional_test_conversions_from_U.test | 10 | 0.000863s | 0.000849s | 0.000854s | byte equality observed |
| optional_test_convert_assign.test | 10 | 0.000843s | 0.000843s | 0.000835s | byte equality observed |
| optional_test_convert_from_T.test | 10 | 0.000865s | 0.000849s | 0.000837s | byte equality observed |
| optional_test_emplace.test | 10 | 0.000877s | 0.000874s | 0.000863s | byte equality observed |
| optional_test_empty_braces.test | 10 | 0.000850s | 0.000854s | 0.000851s | byte equality observed |
| optional_test_flat_map.test | 10 | 0.000856s | 0.000859s | 0.000856s | byte equality observed |
| optional_test_hash.test | 10 | 0.000861s | 0.000867s | 0.000839s | byte equality observed |
| optional_test_inplace_factory.test | 10 | 0.000862s | 0.000870s | 0.000843s | byte equality observed |
| optional_test_io.test | 10 | 0.000875s | 0.000896s | 0.000860s | byte equality observed |
| optional_test_make_optional.test | 10 | 0.000848s | 0.000860s | 0.000843s | byte equality observed |
| optional_test_map.test | 10 | 0.000881s | 0.000855s | 0.000854s | byte equality observed |
| optional_test_member_T.test | 10 | 0.000856s | 0.000862s | 0.000850s | byte equality observed |
| optional_test_minimum_requirements.test | 10 | 0.000888s | 0.000892s | 0.000868s | byte equality observed |
| optional_test_move.test | 10 | 0.000865s | 0.000853s | 0.000848s | byte equality observed |
| optional_test_msvc_bug_workaround.test | 10 | 0.000880s | 0.000863s | 0.000850s | byte equality observed |
| optional_test_noexcept_move.test | 10 | 0.000397s | 0.000390s | 0.000837s | byte equality observed |
| optional_test_ranges_find.test | 10 | 0.000861s | 0.000872s | 0.000838s | byte equality observed |
| optional_test_ref_assign_const_int.test | 10 | 0.000878s | 0.000868s | 0.000840s | byte equality observed |
| optional_test_ref_assign_mutable_int.test | 10 | 0.000880s | 0.000825s | 0.000836s | byte equality observed |
| optional_test_ref_assign_portable_minimum.test | 10 | 0.000870s | 0.000854s | 0.000862s | byte equality observed |
| optional_test_ref_convert_assign_const_int.test | 10 | 0.000863s | 0.000853s | 0.000845s | byte equality observed |
| optional_test_ref_convert_assign_mutable_int.test | 10 | 0.000874s | 0.000881s | 0.000865s | byte equality observed |
| optional_test_ref_convert_assign_non_int.test | 10 | 0.000865s | 0.000868s | 0.000841s | byte equality observed |
| optional_test_ref_converting_ctor.test | 10 | 0.000881s | 0.000861s | 0.000841s | byte equality observed |
| optional_test_ref_move.test | 10 | 0.000880s | 0.000882s | 0.000867s | byte equality observed |
| optional_test_ref_portable_minimum.test | 10 | 0.000909s | 0.000891s | 0.000901s | byte equality observed |
| optional_test_ref_to_val.test | 10 | 0.000863s | 0.000861s | 0.000873s | byte equality observed |
| optional_test_static_properties.test | 10 | 0.000846s | 0.000848s | 0.000842s | byte equality observed |
| optional_test_swap.test | 10 | 0.000852s | 0.000835s | 0.000868s | byte equality observed |
| optional_test_tc_base.test | 10 | 0.000841s | 0.000823s | 0.000841s | byte equality observed |
| optional_test_tie.test | 10 | 0.000846s | 0.000847s | 0.000847s | byte equality observed |
| optional_test_value_access.test | 10 | 0.000920s | 0.000881s | 0.000888s | byte equality observed |
| optional_xconfig_NO_LEGAL_CONVERT_FROM_REF_pass.test | 10 | 0.000838s | 0.000836s | 0.000831s | byte equality observed |
| optional_xconfig_NO_PROPER_ASSIGN_FROM_CONST_INT_pass.test | 10 | 0.000863s | 0.000845s | 0.000833s | byte equality observed |
| optional_xconfig_NO_PROPER_CONVERT_FROM_CONST_INT_pass.test | 10 | 0.000845s | 0.000848s | 0.000843s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43666517673).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
