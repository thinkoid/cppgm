# libs/optional/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| optional_test.test | RUN | 0.242443 | 1.473824 | 0.917529 | 0.001567 | 0.002031 | 0.001758 |
| optional_test_assign.test | RUN | 0.128960 | 0.322170 | 0.451274 | 0.001606 | 0.001754 | 0.001574 |
| optional_test_swap.test | RUN | 0.138773 | 0.392622 | 0.470301 | 0.001439 | 0.001879 | 0.001465 |
| optional_test_constexpr.test | COMPILE | 0.091785 | 0.219390 | 0.286645 | — | — | — |
| optional_test_wuninitialized.test | COMPILE | 0.139128 | 0.529982 | 0.429951 | — | — | — |
| optional_test_fwd_header.test | COMPILE | 0.092055 | 0.210887 | 0.265687 | — | — | — |
| optional_test_conversions_from_U.test | RUN | 0.146009 | 0.402479 | 0.534322 | 0.001654 | 0.001996 | 0.001678 |
| optional_test_constructors.test | RUN | 0.299226 | 1.543713 | 1.324690 | 0.001648 | 0.001964 | 0.001756 |
| optional_test_convert_from_T.test | RUN | 0.139301 | 0.347263 | 0.455593 | 0.001562 | 0.001891 | 0.001555 |
| optional_test_convert_assign.test | RUN | 0.133000 | 0.350271 | 0.468848 | 0.001276 | 0.001974 | 0.001340 |
| optional_test_empty_braces.test | RUN | 0.129108 | 0.326521 | 0.436635 | 0.001792 | 0.002016 | 0.001637 |
| optional_test_make_optional.test | RUN | 0.183398 | 0.511085 | 0.694152 | 0.001672 | 0.001821 | 0.001648 |
| optional_test_flat_map.test | RUN | 0.195440 | 0.609448 | 0.769439 | 0.001533 | 0.001567 | 0.001536 |
| optional_test_hash.test | RUN | 0.161992 | 0.500323 | 0.554444 | 0.001510 | 0.001820 | 0.001611 |
| optional_test_map.test | RUN | 0.199591 | 0.569789 | 0.808325 | 0.001602 | 0.001520 | 0.001632 |
| optional_test_tie.test | RUN | 0.143308 | 0.383425 | 0.438697 | 0.001676 | 0.001475 | 0.001857 |
| optional_test_ranges_find.test | RUN | 0.126737 | 0.311701 | 0.433455 | 0.001530 | 0.001654 | 0.001450 |
| optional_test_ref_assign_portable_minimum.test | RUN | 0.161987 | 0.932386 | 0.592052 | 0.001608 | 0.001577 | 0.001613 |
| optional_test_ref_assign_mutable_int.test | RUN | 0.137502 | 0.404291 | 0.439160 | 0.001622 | 0.001800 | 0.001613 |
| optional_test_ref_assign_const_int.test | RUN | 0.139090 | 0.416078 | 0.491178 | 0.001512 | 0.001568 | 0.001464 |
| optional_test_ref_converting_ctor.test | RUN | 0.149189 | 0.570667 | 0.534924 | 0.001515 | 0.001808 | 0.001388 |
| optional_test_ref_convert_assign_non_int.test | RUN | 0.135975 | 0.387596 | 0.447707 | 0.001484 | 0.001784 | 0.001680 |
| optional_test_ref_convert_assign_mutable_int.test | RUN | 0.133848 | 0.343894 | 0.429307 | 0.001604 | 0.001750 | 0.001714 |
| optional_test_ref_convert_assign_const_int.test | RUN | 0.130937 | 0.357052 | 0.442501 | 0.001678 | 0.001535 | 0.001606 |
| optional_test_ref_portable_minimum.test | RUN | 0.569147 | 1.858779 | 1.575111 | 0.001515 | 0.001655 | 0.001608 |
| optional_test_ref_move.test | RUN | 0.137293 | 0.370660 | 0.414140 | 0.001556 | 0.001840 | 0.001750 |
| optional_test_ref_to_val.test | RUN | 0.167123 | 0.748944 | 0.645542 | 0.001705 | 0.001704 | 0.001781 |
| optional_test_inplace_factory.test | RUN | 0.167066 | 0.654525 | 0.566109 | 0.001723 | 0.001975 | 0.001684 |
| optional_test_io.test | RUN | 0.164363 | 0.741700 | 0.590310 | 0.001588 | 0.001776 | 0.001747 |
| optional_test_move.test | RUN | 0.152351 | 0.517320 | 0.514061 | 0.001651 | 0.001748 | 0.001702 |
| optional_test_noexcept_move.test | RUN | 0.095107 | 0.223814 | 0.253256 | 0.000586 | 0.000786 | 0.001389 |
| optional_test_cmp_none.test | RUN | 0.131682 | 0.355334 | 0.469673 | 0.001741 | 0.001981 | 0.001734 |
| optional_test_value_access.test | RUN | 0.156946 | 0.598022 | 0.584420 | 0.001763 | 0.001696 | 0.001600 |
| optional_test_emplace.test | RUN | 0.154948 | 0.600037 | 0.543258 | 0.001775 | 0.001838 | 0.001468 |
| optional_test_minimum_requirements.test | RUN | 0.146148 | 0.457519 | 0.545355 | 0.001439 | 0.001938 | 0.001787 |
| optional_test_msvc_bug_workaround.test | RUN | 0.130365 | 0.328462 | 0.430361 | 0.001693 | 0.001713 | 0.001701 |
| optional_test_member_T.test | RUN | 0.129543 | 0.317104 | 0.441324 | 0.001559 | 0.001856 | 0.001626 |
| optional_test_tc_base.test | RUN | 0.132730 | 0.322117 | 0.450082 | 0.001621 | 0.001714 | 0.001366 |
| optional_test_sfinae_friendly_ctor.test | COMPILE | 0.098339 | 0.231436 | 0.267858 | — | — | — |
| optional_test_path_assignment.test | COMPILE | 0.092687 | 0.230795 | 0.257764 | — | — | — |
| optional_test_fail_const_swap.test | COMPILE_FAIL | 0.086717 | 0.200755 | 0.260726 | — | — | — |
| optional_test_ref_convert_assign_const_int_prevented.test | COMPILE_FAIL | 0.118646 | 0.279874 | 0.404881 | — | — | — |
| optional_test_fail1.test | COMPILE_FAIL | 0.086434 | 0.209179 | 0.250707 | — | — | — |
| optional_test_fail3a.test | COMPILE_FAIL | 0.087096 | 0.209221 | 0.259999 | — | — | — |
| optional_test_fail3b.test | COMPILE_FAIL | 0.087895 | 0.210230 | 0.264702 | — | — | — |
| optional_test_ref_fail1.test | COMPILE_FAIL | 0.087918 | 0.206129 | 0.253260 | — | — | — |
| optional_test_ref_fail3.test | COMPILE_FAIL | 0.085805 | 0.196448 | 0.252933 | — | — | — |
| optional_test_ref_fail4.test | COMPILE_FAIL | 0.088011 | 0.196390 | 0.252687 | — | — | — |
| optional_test_ref_fail_convert_from_temporary_optional_T.test | COMPILE_FAIL | 0.086368 | 0.207001 | 0.254932 | — | — | — |
| optional_test_inplace_fail.test | COMPILE_FAIL | 0.143743 | 0.313964 | 0.443867 | — | — | — |
| optional_test_inplace_fail2.test | COMPILE_FAIL | 0.142202 | 0.313614 | 0.440101 | — | — | — |
| optional_test_fail_implicit_bool_convert.test | COMPILE_FAIL | 0.086867 | 0.205826 | 0.246617 | — | — | — |
| optional_test_fail_copying_a_moveable_type.test | COMPILE_FAIL | 0.088155 | 0.202475 | 0.260376 | — | — | — |
| optional_test_fail_optional_rvalue_ref.test | COMPILE_FAIL | 0.085866 | 0.204033 | 0.246342 | — | — | — |
| optional_test_ref_fail_init_from_Trefref.test | COMPILE_FAIL | 0.087784 | 0.199133 | 0.247086 | — | — | — |
| optional_test_ref_fail_init_from_Urefref.test | COMPILE_FAIL | 0.088613 | 0.197916 | 0.257627 | — | — | — |
| optional_test_ref_fail_assign_from_Trefref.test | COMPILE_FAIL | 0.086291 | 0.201331 | 0.252581 | — | — | — |
| optional_test_ref_fail_assign_from_Urefref.test | COMPILE_FAIL | 0.087447 | 0.207779 | 0.255532 | — | — | — |
| optional_test_fail_convert_from_null.test | COMPILE_FAIL | 0.087135 | 0.199103 | 0.255447 | — | — | — |
| optional_test_fail_explicit_convert_in_value_or.test | COMPILE_FAIL | 0.085657 | 0.199576 | 0.253006 | — | — | — |
| optional_test_fail_explicit_convert_in_value_or_call.test | COMPILE_FAIL | 0.085326 | 0.204619 | 0.253868 | — | — | — |
| optional_test_fail_io_without_io.test | COMPILE_FAIL | 0.119190 | 0.273863 | 0.375592 | — | — | — |
| optional_test_fail_none_io_without_io.test | COMPILE_FAIL | 0.093533 | 0.234903 | 0.309632 | — | — | — |
| optional_test_fail_convert_assign_of_enums.test | COMPILE_FAIL | 0.086460 | 0.202795 | 0.263253 | — | — | — |
| optional_test_static_properties.test | RUN | 0.201888 | 0.467137 | 0.666023 | 0.001434 | 0.001906 | 0.001650 |
| optional_test_maybe_uninitialized_warning.test | COMPILE | 0.091827 | 0.227541 | 0.272624 | — | — | — |
| optional_test_deleted_default_ctor.test | COMPILE | 0.093827 | 0.225439 | 0.297217 | — | — | — |
| optional_test_constructible_from_other.test | COMPILE | 0.089461 | 0.217770 | 0.270282 | — | — | — |
| optional_xconfig_NO_PROPER_ASSIGN_FROM_CONST_INT_pass.test | RUN | 0.106559 | 0.272630 | 0.338130 | 0.001568 | 0.001605 | 0.001546 |
| optional_xconfig_NO_PROPER_ASSIGN_FROM_CONST_INT_fail.test | RUN_FAIL | 0.107322 | 0.273868 | 0.377483 | 0.001344 | 0.001618 | 0.001612 |
| optional_xconfig_NO_PROPER_CONVERT_FROM_CONST_INT_pass.test | RUN | 0.105631 | 0.272994 | 0.364348 | 0.001540 | 0.001827 | 0.001497 |
| optional_xconfig_NO_PROPER_CONVERT_FROM_CONST_INT_fail.test | RUN_FAIL | 0.108338 | 0.287521 | 0.340304 | 0.001546 | 0.001955 | 0.001264 |
| optional_xconfig_NO_LEGAL_CONVERT_FROM_REF_pass.test | RUN | 0.081354 | 0.186492 | 0.292897 | 0.001222 | 0.001382 | 0.001190 |
| optional_xconfig_NO_LEGAL_CONVERT_FROM_REF_fail.test | COMPILE_FAIL | 0.055688 | 0.198918 | 0.269742 | — | — | — |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 1.004× | 0.995×, 1.012× | 0.988× |
| clang | 1.013× | 1.012×, 1.014× | 1.005× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1361 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43632677224).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| optional_test.test | 10 | 0.001053s | 0.001075s | 0.001080s | byte equality observed |
| optional_test_assign.test | 10 | 0.000988s | 0.000972s | 0.000985s | byte equality observed |
| optional_test_cmp_none.test | 10 | 0.001005s | 0.000991s | 0.001030s | byte equality observed |
| optional_test_constructors.test | 10 | 0.001028s | 0.000993s | 0.001026s | byte equality observed |
| optional_test_conversions_from_U.test | 10 | 0.001005s | 0.001001s | 0.000999s | byte equality observed |
| optional_test_convert_assign.test | 10 | 0.000987s | 0.001006s | 0.000999s | byte equality observed |
| optional_test_convert_from_T.test | 10 | 0.000989s | 0.001038s | 0.001011s | byte equality observed |
| optional_test_emplace.test | 10 | 0.001007s | 0.001042s | 0.001021s | byte equality observed |
| optional_test_empty_braces.test | 10 | 0.000990s | 0.001004s | 0.001004s | byte equality observed |
| optional_test_flat_map.test | 10 | 0.000998s | 0.001002s | 0.001026s | byte equality observed |
| optional_test_hash.test | 10 | 0.001001s | 0.001028s | 0.000989s | byte equality observed |
| optional_test_inplace_factory.test | 10 | 0.000993s | 0.001018s | 0.000975s | byte equality observed |
| optional_test_io.test | 10 | 0.001039s | 0.001005s | 0.001045s | byte equality observed |
| optional_test_make_optional.test | 10 | 0.000981s | 0.001052s | 0.001033s | byte equality observed |
| optional_test_map.test | 10 | 0.001012s | 0.001013s | 0.001008s | byte equality observed |
| optional_test_member_T.test | 10 | 0.000997s | 0.000984s | 0.001011s | byte equality observed |
| optional_test_minimum_requirements.test | 10 | 0.001018s | 0.001017s | 0.001044s | byte equality observed |
| optional_test_move.test | 10 | 0.001041s | 0.001049s | 0.001014s | byte equality observed |
| optional_test_msvc_bug_workaround.test | 10 | 0.000999s | 0.000992s | 0.001001s | byte equality observed |
| optional_test_noexcept_move.test | 10 | 0.000457s | 0.000454s | 0.000969s | byte equality observed |
| optional_test_ranges_find.test | 10 | 0.000987s | 0.000989s | 0.000998s | byte equality observed |
| optional_test_ref_assign_const_int.test | 10 | 0.001004s | 0.000992s | 0.001001s | byte equality observed |
| optional_test_ref_assign_mutable_int.test | 10 | 0.001003s | 0.001006s | 0.000998s | byte equality observed |
| optional_test_ref_assign_portable_minimum.test | 10 | 0.001001s | 0.001003s | 0.001013s | byte equality observed |
| optional_test_ref_convert_assign_const_int.test | 10 | 0.001004s | 0.000988s | 0.001003s | byte equality observed |
| optional_test_ref_convert_assign_mutable_int.test | 10 | 0.000982s | 0.001037s | 0.000990s | byte equality observed |
| optional_test_ref_convert_assign_non_int.test | 10 | 0.001003s | 0.001053s | 0.000997s | byte equality observed |
| optional_test_ref_converting_ctor.test | 10 | 0.001003s | 0.000982s | 0.001031s | byte equality observed |
| optional_test_ref_move.test | 10 | 0.000984s | 0.000966s | 0.001003s | byte equality observed |
| optional_test_ref_portable_minimum.test | 10 | 0.001026s | 0.001030s | 0.001021s | byte equality observed |
| optional_test_ref_to_val.test | 10 | 0.000986s | 0.000976s | 0.001004s | byte equality observed |
| optional_test_static_properties.test | 10 | 0.001023s | 0.000970s | 0.000996s | byte equality observed |
| optional_test_swap.test | 10 | 0.001012s | 0.000978s | 0.001006s | byte equality observed |
| optional_test_tc_base.test | 10 | 0.001005s | 0.001011s | 0.001003s | byte equality observed |
| optional_test_tie.test | 10 | 0.001012s | 0.001015s | 0.001020s | byte equality observed |
| optional_test_value_access.test | 10 | 0.001042s | 0.001053s | 0.001027s | byte equality observed |
| optional_xconfig_NO_LEGAL_CONVERT_FROM_REF_pass.test | 10 | 0.000978s | 0.000963s | 0.000974s | byte equality observed |
| optional_xconfig_NO_PROPER_ASSIGN_FROM_CONST_INT_pass.test | 10 | 0.000988s | 0.000991s | 0.000979s | byte equality observed |
| optional_xconfig_NO_PROPER_CONVERT_FROM_CONST_INT_pass.test | 10 | 0.000987s | 0.000977s | 0.000970s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43632677224).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
