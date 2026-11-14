# libs/optional/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| optional_test.test | RUN | 0.241518 | 1.476408 | 0.960747 | 0.001971 | 0.001932 | 0.001828 |
| optional_test_assign.test | RUN | 0.132273 | 0.321259 | 0.435469 | 0.001330 | 0.001865 | 0.001700 |
| optional_test_swap.test | RUN | 0.138123 | 0.397947 | 0.489831 | 0.001594 | 0.001670 | 0.001544 |
| optional_test_constexpr.test | COMPILE | 0.092344 | 0.218451 | 0.290704 | — | — | — |
| optional_test_wuninitialized.test | COMPILE | 0.143155 | 0.526042 | 0.469435 | — | — | — |
| optional_test_fwd_header.test | COMPILE | 0.095559 | 0.213004 | 0.283815 | — | — | — |
| optional_test_conversions_from_U.test | RUN | 0.154398 | 0.428638 | 0.520815 | 0.001695 | 0.001886 | 0.001804 |
| optional_test_constructors.test | RUN | 0.303899 | 1.525586 | 1.352326 | 0.001544 | 0.001629 | 0.001798 |
| optional_test_convert_from_T.test | RUN | 0.139098 | 0.337788 | 0.490184 | 0.001659 | 0.001812 | 0.001668 |
| optional_test_convert_assign.test | RUN | 0.135101 | 0.345225 | 0.425533 | 0.001610 | 0.001578 | 0.001781 |
| optional_test_empty_braces.test | RUN | 0.127861 | 0.315276 | 0.427878 | 0.001823 | 0.001830 | 0.001754 |
| optional_test_make_optional.test | RUN | 0.185111 | 0.490705 | 0.689064 | 0.001874 | 0.001805 | 0.001854 |
| optional_test_flat_map.test | RUN | 0.196652 | 0.565059 | 0.777300 | 0.001814 | 0.001781 | 0.001555 |
| optional_test_hash.test | RUN | 0.165958 | 0.464365 | 0.599502 | 0.001447 | 0.001535 | 0.001503 |
| optional_test_map.test | RUN | 0.206932 | 0.570652 | 0.794443 | 0.001798 | 0.001744 | 0.001601 |
| optional_test_tie.test | RUN | 0.149454 | 0.364320 | 0.501230 | 0.001812 | 0.001712 | 0.001507 |
| optional_test_ranges_find.test | RUN | 0.133041 | 0.322213 | 0.429455 | 0.001548 | 0.001734 | 0.001569 |
| optional_test_ref_assign_portable_minimum.test | RUN | 0.163651 | 0.941088 | 0.606298 | 0.001649 | 0.001607 | 0.001742 |
| optional_test_ref_assign_mutable_int.test | RUN | 0.137226 | 0.404971 | 0.469664 | 0.001830 | 0.001698 | 0.001629 |
| optional_test_ref_assign_const_int.test | RUN | 0.144121 | 0.414022 | 0.502280 | 0.001735 | 0.001722 | 0.001583 |
| optional_test_ref_converting_ctor.test | RUN | 0.150803 | 0.578058 | 0.506499 | 0.001598 | 0.001802 | 0.001481 |
| optional_test_ref_convert_assign_non_int.test | RUN | 0.144734 | 0.377210 | 0.450983 | 0.001390 | 0.001866 | 0.001760 |
| optional_test_ref_convert_assign_mutable_int.test | RUN | 0.133860 | 0.334359 | 0.423852 | 0.001733 | 0.001585 | 0.001838 |
| optional_test_ref_convert_assign_const_int.test | RUN | 0.133509 | 0.340974 | 0.455142 | 0.001706 | 0.001587 | 0.001788 |
| optional_test_ref_portable_minimum.test | RUN | 0.578708 | 1.828263 | 1.586235 | 0.001670 | 0.001891 | 0.001526 |
| optional_test_ref_move.test | RUN | 0.143134 | 0.355115 | 0.443491 | 0.001448 | 0.001831 | 0.001605 |
| optional_test_ref_to_val.test | RUN | 0.172910 | 0.729018 | 0.660723 | 0.001674 | 0.001763 | 0.001720 |
| optional_test_inplace_factory.test | RUN | 0.174031 | 0.660738 | 0.606150 | 0.001646 | 0.001873 | 0.001524 |
| optional_test_io.test | RUN | 0.164798 | 0.735277 | 0.587691 | 0.001786 | 0.001694 | 0.001638 |
| optional_test_move.test | RUN | 0.156724 | 0.511160 | 0.536292 | 0.001675 | 0.001698 | 0.001869 |
| optional_test_noexcept_move.test | RUN | 0.095525 | 0.222644 | 0.304523 | 0.000618 | 0.000601 | 0.001696 |
| optional_test_cmp_none.test | RUN | 0.136232 | 0.345676 | 0.454011 | 0.001763 | 0.001908 | 0.001704 |
| optional_test_value_access.test | RUN | 0.155704 | 0.592538 | 0.584748 | 0.001616 | 0.001596 | 0.001814 |
| optional_test_emplace.test | RUN | 0.156763 | 0.587738 | 0.598744 | 0.001830 | 0.001593 | 0.001602 |
| optional_test_minimum_requirements.test | RUN | 0.143828 | 0.447700 | 0.535623 | 0.001358 | 0.001609 | 0.001786 |
| optional_test_msvc_bug_workaround.test | RUN | 0.129794 | 0.326249 | 0.429811 | 0.001730 | 0.001709 | 0.001634 |
| optional_test_member_T.test | RUN | 0.131587 | 0.312282 | 0.420765 | 0.001492 | 0.001650 | 0.001748 |
| optional_test_tc_base.test | RUN | 0.131618 | 0.320512 | 0.447133 | 0.001500 | 0.001779 | 0.004572 |
| optional_test_sfinae_friendly_ctor.test | COMPILE | 0.098495 | 0.212424 | 0.310122 | — | — | — |
| optional_test_path_assignment.test | COMPILE | 0.094222 | 0.226067 | 0.255872 | — | — | — |
| optional_test_fail_const_swap.test | COMPILE_FAIL | 0.084303 | 0.201160 | 0.276537 | — | — | — |
| optional_test_ref_convert_assign_const_int_prevented.test | COMPILE_FAIL | 0.120112 | 0.299198 | 0.414404 | — | — | — |
| optional_test_fail1.test | COMPILE_FAIL | 0.086388 | 0.206029 | 0.270045 | — | — | — |
| optional_test_fail3a.test | COMPILE_FAIL | 0.087778 | 0.236086 | 0.270551 | — | — | — |
| optional_test_fail3b.test | COMPILE_FAIL | 0.087906 | 0.230350 | 0.267708 | — | — | — |
| optional_test_ref_fail1.test | COMPILE_FAIL | 0.087019 | 0.198507 | 0.261954 | — | — | — |
| optional_test_ref_fail3.test | COMPILE_FAIL | 0.086578 | 0.204287 | 0.262447 | — | — | — |
| optional_test_ref_fail4.test | COMPILE_FAIL | 0.086325 | 0.210049 | 0.267794 | — | — | — |
| optional_test_ref_fail_convert_from_temporary_optional_T.test | COMPILE_FAIL | 0.085648 | 0.201239 | 0.258997 | — | — | — |
| optional_test_inplace_fail.test | COMPILE_FAIL | 0.143038 | 0.322059 | 0.455955 | — | — | — |
| optional_test_inplace_fail2.test | COMPILE_FAIL | 0.142904 | 0.321922 | 0.444280 | — | — | — |
| optional_test_fail_implicit_bool_convert.test | COMPILE_FAIL | 0.085083 | 0.210704 | 0.269998 | — | — | — |
| optional_test_fail_copying_a_moveable_type.test | COMPILE_FAIL | 0.087034 | 0.211670 | 0.267628 | — | — | — |
| optional_test_fail_optional_rvalue_ref.test | COMPILE_FAIL | 0.084783 | 0.202164 | 0.246704 | — | — | — |
| optional_test_ref_fail_init_from_Trefref.test | COMPILE_FAIL | 0.087425 | 0.203939 | 0.261419 | — | — | — |
| optional_test_ref_fail_init_from_Urefref.test | COMPILE_FAIL | 0.085747 | 0.199542 | 0.265684 | — | — | — |
| optional_test_ref_fail_assign_from_Trefref.test | COMPILE_FAIL | 0.087270 | 0.205533 | 0.255260 | — | — | — |
| optional_test_ref_fail_assign_from_Urefref.test | COMPILE_FAIL | 0.087697 | 0.201175 | 0.261296 | — | — | — |
| optional_test_fail_convert_from_null.test | COMPILE_FAIL | 0.087395 | 0.202292 | 0.259989 | — | — | — |
| optional_test_fail_explicit_convert_in_value_or.test | COMPILE_FAIL | 0.085303 | 0.208313 | 0.263002 | — | — | — |
| optional_test_fail_explicit_convert_in_value_or_call.test | COMPILE_FAIL | 0.087356 | 0.209486 | 0.253066 | — | — | — |
| optional_test_fail_io_without_io.test | COMPILE_FAIL | 0.121452 | 0.262888 | 0.383066 | — | — | — |
| optional_test_fail_none_io_without_io.test | COMPILE_FAIL | 0.095383 | 0.228822 | 0.317156 | — | — | — |
| optional_test_fail_convert_assign_of_enums.test | COMPILE_FAIL | 0.088214 | 0.207374 | 0.272234 | — | — | — |
| optional_test_static_properties.test | RUN | 0.211124 | 0.464045 | 0.683213 | 0.001784 | 0.001704 | 0.001819 |
| optional_test_maybe_uninitialized_warning.test | COMPILE | 0.093148 | 0.222918 | 0.285912 | — | — | — |
| optional_test_deleted_default_ctor.test | COMPILE | 0.093539 | 0.224372 | 0.301151 | — | — | — |
| optional_test_constructible_from_other.test | COMPILE | 0.090427 | 0.213605 | 0.281189 | — | — | — |
| optional_xconfig_NO_PROPER_ASSIGN_FROM_CONST_INT_pass.test | RUN | 0.108356 | 0.258743 | 0.359242 | 0.001688 | 0.001636 | 0.001434 |
| optional_xconfig_NO_PROPER_ASSIGN_FROM_CONST_INT_fail.test | RUN_FAIL | 0.106102 | 0.260349 | 0.370467 | 0.001606 | 0.001390 | 0.001568 |
| optional_xconfig_NO_PROPER_CONVERT_FROM_CONST_INT_pass.test | RUN | 0.105727 | 0.262070 | 0.376505 | 0.001349 | 0.001522 | 0.001214 |
| optional_xconfig_NO_PROPER_CONVERT_FROM_CONST_INT_fail.test | RUN_FAIL | 0.111374 | 0.277143 | 0.361138 | 0.001466 | 0.001944 | 0.001798 |
| optional_xconfig_NO_LEGAL_CONVERT_FROM_REF_pass.test | RUN | 0.091915 | 0.197861 | 0.231455 | 0.001285 | 0.001291 | 0.001258 |
| optional_xconfig_NO_LEGAL_CONVERT_FROM_REF_fail.test | COMPILE_FAIL | 0.058673 | 0.164006 | 0.244075 | — | — | — |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 1.066× | 1.080×, 1.052× | 0.998× |
| clang | 0.949×† | 0.880×, 1.017× | 1.011× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1362 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43619774656).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| optional_test.test | 10 | 0.001082s | 0.001077s | 0.001082s | byte equality observed |
| optional_test_assign.test | 10 | 0.000993s | 0.001069s | 0.001002s | byte equality observed |
| optional_test_cmp_none.test | 10 | 0.001026s | 0.001048s | 0.000986s | byte equality observed |
| optional_test_constructors.test | 10 | 0.001027s | 0.001069s | 0.000994s | byte equality observed |
| optional_test_conversions_from_U.test | 10 | 0.000986s | 0.001075s | 0.001001s | byte equality observed |
| optional_test_convert_assign.test | 10 | 0.001013s | 0.001073s | 0.000990s | byte equality observed |
| optional_test_convert_from_T.test | 10 | 0.000991s | 0.001090s | 0.000990s | byte equality observed |
| optional_test_emplace.test | 10 | 0.001034s | 0.001100s | 0.001066s | byte equality observed |
| optional_test_empty_braces.test | 10 | 0.001002s | 0.001063s | 0.001004s | byte equality observed |
| optional_test_flat_map.test | 10 | 0.001010s | 0.001051s | 0.000980s | byte equality observed |
| optional_test_hash.test | 10 | 0.001023s | 0.001131s | 0.000971s | byte equality observed |
| optional_test_inplace_factory.test | 10 | 0.001002s | 0.001084s | 0.001031s | byte equality observed |
| optional_test_io.test | 10 | 0.001043s | 0.001101s | 0.001027s | byte equality observed |
| optional_test_make_optional.test | 10 | 0.000996s | 0.001066s | 0.001004s | byte equality observed |
| optional_test_map.test | 10 | 0.001020s | 0.001060s | 0.001004s | byte equality observed |
| optional_test_member_T.test | 10 | 0.001036s | 0.001070s | 0.000992s | byte equality observed |
| optional_test_minimum_requirements.test | 10 | 0.001029s | 0.001106s | 0.001033s | byte equality observed |
| optional_test_move.test | 10 | 0.001025s | 0.001056s | 0.001019s | byte equality observed |
| optional_test_msvc_bug_workaround.test | 10 | 0.001015s | 0.001106s | 0.001020s | byte equality observed |
| optional_test_noexcept_move.test | 10 | 0.000469s | 0.000469s | 0.000980s | byte equality observed |
| optional_test_ranges_find.test | 10 | 0.001019s | 0.001019s | 0.001001s | byte equality observed |
| optional_test_ref_assign_const_int.test | 10 | 0.001015s | 0.001088s | 0.001009s | byte equality observed |
| optional_test_ref_assign_mutable_int.test | 10 | 0.001025s | 0.001082s | 0.001027s | byte equality observed |
| optional_test_ref_assign_portable_minimum.test | 10 | 0.001040s | 0.001077s | 0.001006s | byte equality observed |
| optional_test_ref_convert_assign_const_int.test | 10 | 0.001061s | 0.001077s | 0.000996s | byte equality observed |
| optional_test_ref_convert_assign_mutable_int.test | 10 | 0.000998s | 0.001091s | 0.001012s | byte equality observed |
| optional_test_ref_convert_assign_non_int.test | 10 | 0.001055s | 0.001057s | 0.000983s | byte equality observed |
| optional_test_ref_converting_ctor.test | 10 | 0.001040s | 0.001066s | 0.001025s | byte equality observed |
| optional_test_ref_move.test | 10 | 0.001033s | 0.001048s | 0.001061s | byte equality observed |
| optional_test_ref_portable_minimum.test | 10 | 0.001032s | 0.001102s | 0.001007s | byte equality observed |
| optional_test_ref_to_val.test | 10 | 0.001031s | 0.001090s | 0.000994s | byte equality observed |
| optional_test_static_properties.test | 10 | 0.001038s | 0.001076s | 0.001017s | byte equality observed |
| optional_test_swap.test | 10 | 0.001041s | 0.001089s | 0.000992s | byte equality observed |
| optional_test_tc_base.test | 10 | 0.001021s | 0.001060s | 0.000994s | byte equality observed |
| optional_test_tie.test | 10 | 0.001007s | 0.001118s | 0.000987s | byte equality observed |
| optional_test_value_access.test | 10 | 0.001051s | 0.001101s | 0.001034s | byte equality observed |
| optional_xconfig_NO_LEGAL_CONVERT_FROM_REF_pass.test | 10 | 0.001011s | 0.001068s | 0.000986s | byte equality observed |
| optional_xconfig_NO_PROPER_ASSIGN_FROM_CONST_INT_pass.test | 10 | 0.000982s | 0.001074s | 0.000991s | byte equality observed |
| optional_xconfig_NO_PROPER_CONVERT_FROM_CONST_INT_pass.test | 10 | 0.000988s | 0.001053s | 0.001003s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43619774656).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
