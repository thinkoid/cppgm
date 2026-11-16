# libs/optional/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| optional_test.test | RUN | 0.241230 | 1.455662 | 0.944767 | 0.001899 | 0.001835 | 0.001895 |
| optional_test_assign.test | RUN | 0.131365 | 0.321387 | 0.448849 | 0.001831 | 0.001897 | 0.001532 |
| optional_test_swap.test | RUN | 0.139188 | 0.385983 | 0.488518 | 0.001210 | 0.001845 | 0.001437 |
| optional_test_constexpr.test | COMPILE | 0.094903 | 0.214512 | 0.290661 | — | — | — |
| optional_test_wuninitialized.test | COMPILE | 0.141087 | 0.516441 | 0.479417 | — | — | — |
| optional_test_fwd_header.test | COMPILE | 0.092273 | 0.213460 | 0.282137 | — | — | — |
| optional_test_conversions_from_U.test | RUN | 0.152347 | 0.413812 | 0.546640 | 0.001614 | 0.001856 | 0.001842 |
| optional_test_constructors.test | RUN | 0.301161 | 1.499429 | 1.334425 | 0.001528 | 0.001701 | 0.001672 |
| optional_test_convert_from_T.test | RUN | 0.135257 | 0.335786 | 0.452165 | 0.001663 | 0.001779 | 0.001737 |
| optional_test_convert_assign.test | RUN | 0.137639 | 0.336904 | 0.474210 | 0.001628 | 0.001795 | 0.001801 |
| optional_test_empty_braces.test | RUN | 0.138631 | 0.323870 | 0.423828 | 0.001694 | 0.001845 | 0.001719 |
| optional_test_make_optional.test | RUN | 0.181804 | 0.486932 | 0.683726 | 0.001712 | 0.001858 | 0.001681 |
| optional_test_flat_map.test | RUN | 0.196773 | 0.577034 | 0.756795 | 0.001322 | 0.001694 | 0.001760 |
| optional_test_hash.test | RUN | 0.165042 | 0.467075 | 0.558730 | 0.001756 | 0.001861 | 0.001628 |
| optional_test_map.test | RUN | 0.198747 | 0.557594 | 0.788451 | 0.001734 | 0.001552 | 0.001773 |
| optional_test_tie.test | RUN | 0.148525 | 0.363949 | 0.453025 | 0.001670 | 0.001771 | 0.001754 |
| optional_test_ranges_find.test | RUN | 0.133688 | 0.320084 | 0.434994 | 0.001601 | 0.001385 | 0.001616 |
| optional_test_ref_assign_portable_minimum.test | RUN | 0.159999 | 0.918700 | 0.575795 | 0.001470 | 0.001610 | 0.001616 |
| optional_test_ref_assign_mutable_int.test | RUN | 0.136061 | 0.392559 | 0.451804 | 0.001656 | 0.001638 | 0.001821 |
| optional_test_ref_assign_const_int.test | RUN | 0.138024 | 0.403214 | 0.460653 | 0.001713 | 0.001552 | 0.001710 |
| optional_test_ref_converting_ctor.test | RUN | 0.149676 | 0.560030 | 0.509723 | 0.001608 | 0.001858 | 0.001679 |
| optional_test_ref_convert_assign_non_int.test | RUN | 0.137992 | 0.362574 | 0.456608 | 0.001498 | 0.001597 | 0.001704 |
| optional_test_ref_convert_assign_mutable_int.test | RUN | 0.132530 | 0.340049 | 0.426889 | 0.001759 | 0.001776 | 0.001654 |
| optional_test_ref_convert_assign_const_int.test | RUN | 0.135894 | 0.343670 | 0.420795 | 0.001648 | 0.001756 | 0.001876 |
| optional_test_ref_portable_minimum.test | RUN | 0.528820 | 1.800229 | 1.565077 | 0.001917 | 0.001433 | 0.001889 |
| optional_test_ref_move.test | RUN | 0.143709 | 0.354246 | 0.491376 | 0.001790 | 0.001834 | 0.001693 |
| optional_test_ref_to_val.test | RUN | 0.168733 | 0.721155 | 0.646244 | 0.001620 | 0.001782 | 0.001481 |
| optional_test_inplace_factory.test | RUN | 0.172466 | 0.651212 | 0.582190 | 0.001910 | 0.001595 | 0.001606 |
| optional_test_io.test | RUN | 0.161999 | 0.724762 | 0.586005 | 0.001536 | 0.001768 | 0.001618 |
| optional_test_move.test | RUN | 0.155186 | 0.501848 | 0.531961 | 0.001602 | 0.001832 | 0.001842 |
| optional_test_noexcept_move.test | RUN | 0.094694 | 0.215830 | 0.300670 | 0.000643 | 0.000725 | 0.001372 |
| optional_test_cmp_none.test | RUN | 0.133465 | 0.343976 | 0.423632 | 0.001717 | 0.001844 | 0.001762 |
| optional_test_value_access.test | RUN | 0.158499 | 0.590516 | 0.610197 | 0.001693 | 0.001659 | 0.001788 |
| optional_test_emplace.test | RUN | 0.158163 | 0.601453 | 0.613972 | 0.001631 | 0.001597 | 0.001472 |
| optional_test_minimum_requirements.test | RUN | 0.145717 | 0.450518 | 0.497234 | 0.001567 | 0.001634 | 0.001549 |
| optional_test_msvc_bug_workaround.test | RUN | 0.133023 | 0.336683 | 0.438327 | 0.001777 | 0.001732 | 0.001865 |
| optional_test_member_T.test | RUN | 0.131838 | 0.316180 | 0.446550 | 0.001572 | 0.001650 | 0.001719 |
| optional_test_tc_base.test | RUN | 0.132153 | 0.316876 | 0.455461 | 0.001459 | 0.001519 | 0.001524 |
| optional_test_sfinae_friendly_ctor.test | COMPILE | 0.099887 | 0.230909 | 0.271434 | — | — | — |
| optional_test_path_assignment.test | COMPILE | 0.092960 | 0.223043 | 0.290030 | — | — | — |
| optional_test_fail_const_swap.test | COMPILE_FAIL | 0.087821 | 0.199119 | 0.278384 | — | — | — |
| optional_test_ref_convert_assign_const_int_prevented.test | COMPILE_FAIL | 0.123457 | 0.277879 | 0.401752 | — | — | — |
| optional_test_fail1.test | COMPILE_FAIL | 0.087606 | 0.204484 | 0.275660 | — | — | — |
| optional_test_fail3a.test | COMPILE_FAIL | 0.087635 | 0.207676 | 0.268393 | — | — | — |
| optional_test_fail3b.test | COMPILE_FAIL | 0.090629 | 0.206974 | 0.272472 | — | — | — |
| optional_test_ref_fail1.test | COMPILE_FAIL | 0.089418 | 0.200868 | 0.263737 | — | — | — |
| optional_test_ref_fail3.test | COMPILE_FAIL | 0.087305 | 0.205198 | 0.257971 | — | — | — |
| optional_test_ref_fail4.test | COMPILE_FAIL | 0.087601 | 0.198369 | 0.265936 | — | — | — |
| optional_test_ref_fail_convert_from_temporary_optional_T.test | COMPILE_FAIL | 0.088671 | 0.206897 | 0.261948 | — | — | — |
| optional_test_inplace_fail.test | COMPILE_FAIL | 0.145443 | 0.318902 | 0.433705 | — | — | — |
| optional_test_inplace_fail2.test | COMPILE_FAIL | 0.143866 | 0.318404 | 0.430105 | — | — | — |
| optional_test_fail_implicit_bool_convert.test | COMPILE_FAIL | 0.087453 | 0.203473 | 0.267652 | — | — | — |
| optional_test_fail_copying_a_moveable_type.test | COMPILE_FAIL | 0.089007 | 0.207371 | 0.267321 | — | — | — |
| optional_test_fail_optional_rvalue_ref.test | COMPILE_FAIL | 0.088321 | 0.199947 | 0.247910 | — | — | — |
| optional_test_ref_fail_init_from_Trefref.test | COMPILE_FAIL | 0.089165 | 0.201432 | 0.252247 | — | — | — |
| optional_test_ref_fail_init_from_Urefref.test | COMPILE_FAIL | 0.088380 | 0.196255 | 0.259506 | — | — | — |
| optional_test_ref_fail_assign_from_Trefref.test | COMPILE_FAIL | 0.088451 | 0.204574 | 0.257378 | — | — | — |
| optional_test_ref_fail_assign_from_Urefref.test | COMPILE_FAIL | 0.089524 | 0.202072 | 0.264175 | — | — | — |
| optional_test_fail_convert_from_null.test | COMPILE_FAIL | 0.087064 | 0.198668 | 0.257527 | — | — | — |
| optional_test_fail_explicit_convert_in_value_or.test | COMPILE_FAIL | 0.087630 | 0.203808 | 0.260404 | — | — | — |
| optional_test_fail_explicit_convert_in_value_or_call.test | COMPILE_FAIL | 0.087171 | 0.209275 | 0.260312 | — | — | — |
| optional_test_fail_io_without_io.test | COMPILE_FAIL | 0.119570 | 0.263907 | 0.381660 | — | — | — |
| optional_test_fail_none_io_without_io.test | COMPILE_FAIL | 0.095550 | 0.230567 | 0.315390 | — | — | — |
| optional_test_fail_convert_assign_of_enums.test | COMPILE_FAIL | 0.089748 | 0.211204 | 0.277337 | — | — | — |
| optional_test_static_properties.test | RUN | 0.208883 | 0.461467 | 0.674875 | 0.001714 | 0.001914 | 0.001743 |
| optional_test_maybe_uninitialized_warning.test | COMPILE | 0.092165 | 0.221914 | 0.283046 | — | — | — |
| optional_test_deleted_default_ctor.test | COMPILE | 0.093800 | 0.232926 | 0.286752 | — | — | — |
| optional_test_constructible_from_other.test | COMPILE | 0.091741 | 0.216188 | 0.282450 | — | — | — |
| optional_xconfig_NO_PROPER_ASSIGN_FROM_CONST_INT_pass.test | RUN | 0.106226 | 0.276898 | 0.345954 | 0.001589 | 0.001674 | 0.001305 |
| optional_xconfig_NO_PROPER_ASSIGN_FROM_CONST_INT_fail.test | RUN_FAIL | 0.106684 | 0.272771 | 0.380481 | 0.001592 | 0.001557 | 0.001626 |
| optional_xconfig_NO_PROPER_CONVERT_FROM_CONST_INT_pass.test | RUN | 0.106512 | 0.281130 | 0.383024 | 0.001374 | 0.001651 | 0.001369 |
| optional_xconfig_NO_PROPER_CONVERT_FROM_CONST_INT_fail.test | RUN_FAIL | 0.107931 | 0.279576 | 0.356373 | 0.001816 | 0.001924 | 0.001266 |
| optional_xconfig_NO_LEGAL_CONVERT_FROM_REF_pass.test | RUN | 0.076127 | 0.174784 | 0.271872 | 0.001272 | 0.001256 | 0.001302 |
| optional_xconfig_NO_LEGAL_CONVERT_FROM_REF_fail.test | COMPILE_FAIL | 0.065439 | 0.186042 | 0.246935 | — | — | — |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.997× | 0.996×, 0.998× | 0.995× |
| clang | 0.955× | 0.953×, 0.958× | 1.022× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1363 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/43916760662).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| optional_test.test | 10 | 0.001075s | 0.001094s | 0.001084s | byte equality observed |
| optional_test_assign.test | 10 | 0.000993s | 0.001002s | 0.001020s | byte equality observed |
| optional_test_cmp_none.test | 10 | 0.000984s | 0.000976s | 0.001007s | byte equality observed |
| optional_test_constructors.test | 10 | 0.001005s | 0.000991s | 0.001018s | byte equality observed |
| optional_test_conversions_from_U.test | 10 | 0.001040s | 0.000999s | 0.000999s | byte equality observed |
| optional_test_convert_assign.test | 10 | 0.000996s | 0.000977s | 0.001043s | byte equality observed |
| optional_test_convert_from_T.test | 10 | 0.001046s | 0.000980s | 0.001018s | byte equality observed |
| optional_test_emplace.test | 10 | 0.001035s | 0.001046s | 0.001049s | byte equality observed |
| optional_test_empty_braces.test | 10 | 0.001030s | 0.000994s | 0.001007s | byte equality observed |
| optional_test_flat_map.test | 10 | 0.001038s | 0.001029s | 0.001007s | byte equality observed |
| optional_test_hash.test | 10 | 0.001022s | 0.001006s | 0.001022s | byte equality observed |
| optional_test_inplace_factory.test | 10 | 0.001066s | 0.001030s | 0.001009s | byte equality observed |
| optional_test_io.test | 10 | 0.001043s | 0.001035s | 0.001042s | byte equality observed |
| optional_test_make_optional.test | 10 | 0.001016s | 0.000995s | 0.001019s | byte equality observed |
| optional_test_map.test | 10 | 0.001014s | 0.001010s | 0.001016s | byte equality observed |
| optional_test_member_T.test | 10 | 0.001008s | 0.001041s | 0.001004s | byte equality observed |
| optional_test_minimum_requirements.test | 10 | 0.001067s | 0.001060s | 0.001036s | byte equality observed |
| optional_test_move.test | 10 | 0.001016s | 0.000999s | 0.000980s | byte equality observed |
| optional_test_msvc_bug_workaround.test | 10 | 0.001064s | 0.001045s | 0.001013s | byte equality observed |
| optional_test_noexcept_move.test | 10 | 0.000471s | 0.000467s | 0.000973s | byte equality observed |
| optional_test_ranges_find.test | 10 | 0.001063s | 0.001006s | 0.001002s | byte equality observed |
| optional_test_ref_assign_const_int.test | 10 | 0.001014s | 0.000992s | 0.001012s | byte equality observed |
| optional_test_ref_assign_mutable_int.test | 10 | 0.001003s | 0.000993s | 0.001047s | byte equality observed |
| optional_test_ref_assign_portable_minimum.test | 10 | 0.001013s | 0.001000s | 0.001035s | byte equality observed |
| optional_test_ref_convert_assign_const_int.test | 10 | 0.000999s | 0.001003s | 0.001042s | byte equality observed |
| optional_test_ref_convert_assign_mutable_int.test | 10 | 0.001013s | 0.001027s | 0.000989s | byte equality observed |
| optional_test_ref_convert_assign_non_int.test | 10 | 0.001014s | 0.001023s | 0.001024s | byte equality observed |
| optional_test_ref_converting_ctor.test | 10 | 0.001041s | 0.001011s | 0.001044s | byte equality observed |
| optional_test_ref_move.test | 10 | 0.001048s | 0.001012s | 0.001004s | byte equality observed |
| optional_test_ref_portable_minimum.test | 10 | 0.001046s | 0.001043s | 0.001071s | byte equality observed |
| optional_test_ref_to_val.test | 10 | 0.001066s | 0.001018s | 0.001031s | byte equality observed |
| optional_test_static_properties.test | 10 | 0.001035s | 0.001037s | 0.001043s | byte equality observed |
| optional_test_swap.test | 10 | 0.001036s | 0.001008s | 0.001004s | byte equality observed |
| optional_test_tc_base.test | 10 | 0.001055s | 0.001028s | 0.001001s | byte equality observed |
| optional_test_tie.test | 10 | 0.001012s | 0.000999s | 0.001001s | byte equality observed |
| optional_test_value_access.test | 10 | 0.001035s | 0.001059s | 0.001053s | byte equality observed |
| optional_xconfig_NO_LEGAL_CONVERT_FROM_REF_pass.test | 10 | 0.000991s | 0.000993s | 0.000971s | byte equality observed |
| optional_xconfig_NO_PROPER_ASSIGN_FROM_CONST_INT_pass.test | 10 | 0.001011s | 0.001021s | 0.000993s | byte equality observed |
| optional_xconfig_NO_PROPER_CONVERT_FROM_CONST_INT_pass.test | 10 | 0.001002s | 0.001007s | 0.000994s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/43916760662).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
