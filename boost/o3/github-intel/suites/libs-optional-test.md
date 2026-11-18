# libs/optional/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| optional_test.test | RUN | 0.297646 | 1.804550 | 1.046591 | 0.001809 | 0.001792 | 0.001746 |
| optional_test_assign.test | RUN | 0.149855 | 0.372748 | 0.459943 | 0.001614 | 0.001520 | 0.001786 |
| optional_test_swap.test | RUN | 0.161266 | 0.471500 | 0.516649 | 0.001562 | 0.001504 | 0.001428 |
| optional_test_constexpr.test | COMPILE | 0.107734 | 0.251992 | 0.292825 | — | — | — |
| optional_test_wuninitialized.test | COMPILE | 0.157387 | 0.618104 | 0.488363 | — | — | — |
| optional_test_fwd_header.test | COMPILE | 0.102353 | 0.247324 | 0.280575 | — | — | — |
| optional_test_conversions_from_U.test | RUN | 0.170080 | 0.486658 | 0.577547 | 0.001636 | 0.001688 | 0.001685 |
| optional_test_constructors.test | RUN | 0.353733 | 1.802105 | 1.485920 | 0.001515 | 0.001776 | 0.001502 |
| optional_test_convert_from_T.test | RUN | 0.154750 | 0.391496 | 0.472579 | 0.001558 | 0.001660 | 0.001667 |
| optional_test_convert_assign.test | RUN | 0.153789 | 0.391873 | 0.486132 | 0.001463 | 0.001415 | 0.001674 |
| optional_test_empty_braces.test | RUN | 0.141015 | 0.372544 | 0.464576 | 0.001634 | 0.001691 | 0.001640 |
| optional_test_make_optional.test | RUN | 0.210298 | 0.590677 | 0.733724 | 0.001478 | 0.001610 | 0.001576 |
| optional_test_flat_map.test | RUN | 0.224277 | 0.692421 | 0.828657 | 0.001439 | 0.001674 | 0.001592 |
| optional_test_hash.test | RUN | 0.183754 | 0.561551 | 0.611050 | 0.001469 | 0.001483 | 0.001593 |
| optional_test_map.test | RUN | 0.231797 | 0.657571 | 0.851011 | 0.001721 | 0.001668 | 0.001517 |
| optional_test_tie.test | RUN | 0.164985 | 0.431771 | 0.492146 | 0.001617 | 0.001504 | 0.001593 |
| optional_test_ranges_find.test | RUN | 0.149163 | 0.369835 | 0.435267 | 0.001493 | 0.001520 | 0.001556 |
| optional_test_ref_assign_portable_minimum.test | RUN | 0.187989 | 1.118724 | 0.659434 | 0.001522 | 0.001565 | 0.001606 |
| optional_test_ref_assign_mutable_int.test | RUN | 0.156912 | 0.469118 | 0.494763 | 0.001524 | 0.001234 | 0.001596 |
| optional_test_ref_assign_const_int.test | RUN | 0.165031 | 0.485318 | 0.505189 | 0.001551 | 0.001558 | 0.001515 |
| optional_test_ref_converting_ctor.test | RUN | 0.173042 | 0.664876 | 0.554556 | 0.001576 | 0.001636 | 0.001623 |
| optional_test_ref_convert_assign_non_int.test | RUN | 0.153968 | 0.437904 | 0.492421 | 0.001427 | 0.001600 | 0.001531 |
| optional_test_ref_convert_assign_mutable_int.test | RUN | 0.152033 | 0.409790 | 0.466092 | 0.001615 | 0.001602 | 0.001713 |
| optional_test_ref_convert_assign_const_int.test | RUN | 0.150746 | 0.401345 | 0.456655 | 0.001549 | 0.001344 | 0.001625 |
| optional_test_ref_portable_minimum.test | RUN | 0.646825 | 2.189754 | 1.742625 | 0.001642 | 0.001592 | 0.001476 |
| optional_test_ref_move.test | RUN | 0.159833 | 0.423221 | 0.500634 | 0.001537 | 0.001674 | 0.001613 |
| optional_test_ref_to_val.test | RUN | 0.197405 | 0.868732 | 0.697249 | 0.001534 | 0.001469 | 0.001611 |
| optional_test_inplace_factory.test | RUN | 0.204078 | 0.792618 | 0.642274 | 0.001575 | 0.001565 | 0.001738 |
| optional_test_io.test | RUN | 0.186573 | 0.886230 | 0.643768 | 0.001637 | 0.001784 | 0.001510 |
| optional_test_move.test | RUN | 0.178353 | 0.592900 | 0.578891 | 0.001525 | 0.001892 | 0.001567 |
| optional_test_noexcept_move.test | RUN | 0.105754 | 0.251319 | 0.303726 | 0.000607 | 0.000706 | 0.001501 |
| optional_test_cmp_none.test | RUN | 0.150851 | 0.414912 | 0.475866 | 0.001537 | 0.001643 | 0.001737 |
| optional_test_value_access.test | RUN | 0.182142 | 0.703365 | 0.628862 | 0.001644 | 0.001642 | 0.001604 |
| optional_test_emplace.test | RUN | 0.184291 | 0.682071 | 0.648235 | 0.001475 | 0.001605 | 0.001608 |
| optional_test_minimum_requirements.test | RUN | 0.168775 | 0.543460 | 0.571789 | 0.001506 | 0.001522 | 0.001442 |
| optional_test_msvc_bug_workaround.test | RUN | 0.150303 | 0.374621 | 0.463801 | 0.001599 | 0.001440 | 0.001615 |
| optional_test_member_T.test | RUN | 0.147280 | 0.369532 | 0.451011 | 0.001690 | 0.001561 | 0.001672 |
| optional_test_tc_base.test | RUN | 0.148880 | 0.378849 | 0.467132 | 0.001478 | 0.001704 | 0.001477 |
| optional_test_sfinae_friendly_ctor.test | COMPILE | 0.110145 | 0.255735 | 0.311209 | — | — | — |
| optional_test_path_assignment.test | COMPILE | 0.103355 | 0.250207 | 0.276294 | — | — | — |
| optional_test_fail_const_swap.test | COMPILE_FAIL | 0.097605 | 0.228351 | 0.255868 | — | — | — |
| optional_test_ref_convert_assign_const_int_prevented.test | COMPILE_FAIL | 0.134092 | 0.319051 | 0.412300 | — | — | — |
| optional_test_fail1.test | COMPILE_FAIL | 0.098297 | 0.232043 | 0.266977 | — | — | — |
| optional_test_fail3a.test | COMPILE_FAIL | 0.098232 | 0.231539 | 0.275309 | — | — | — |
| optional_test_fail3b.test | COMPILE_FAIL | 0.101162 | 0.237839 | 0.276250 | — | — | — |
| optional_test_ref_fail1.test | COMPILE_FAIL | 0.099508 | 0.233555 | 0.268044 | — | — | — |
| optional_test_ref_fail3.test | COMPILE_FAIL | 0.096587 | 0.229127 | 0.263868 | — | — | — |
| optional_test_ref_fail4.test | COMPILE_FAIL | 0.100655 | 0.222779 | 0.272560 | — | — | — |
| optional_test_ref_fail_convert_from_temporary_optional_T.test | COMPILE_FAIL | 0.101971 | 0.227626 | 0.271172 | — | — | — |
| optional_test_inplace_fail.test | COMPILE_FAIL | 0.165141 | 0.375571 | 0.476152 | — | — | — |
| optional_test_inplace_fail2.test | COMPILE_FAIL | 0.162139 | 0.367657 | 0.474281 | — | — | — |
| optional_test_fail_implicit_bool_convert.test | COMPILE_FAIL | 0.097071 | 0.232304 | 0.265938 | — | — | — |
| optional_test_fail_copying_a_moveable_type.test | COMPILE_FAIL | 0.101808 | 0.232915 | 0.274934 | — | — | — |
| optional_test_fail_optional_rvalue_ref.test | COMPILE_FAIL | 0.096086 | 0.228093 | 0.266329 | — | — | — |
| optional_test_ref_fail_init_from_Trefref.test | COMPILE_FAIL | 0.099065 | 0.228360 | 0.269485 | — | — | — |
| optional_test_ref_fail_init_from_Urefref.test | COMPILE_FAIL | 0.097894 | 0.233960 | 0.272208 | — | — | — |
| optional_test_ref_fail_assign_from_Trefref.test | COMPILE_FAIL | 0.098549 | 0.232869 | 0.271908 | — | — | — |
| optional_test_ref_fail_assign_from_Urefref.test | COMPILE_FAIL | 0.090679 | 0.223389 | 0.272326 | — | — | — |
| optional_test_fail_convert_from_null.test | COMPILE_FAIL | 0.098201 | 0.224830 | 0.269756 | — | — | — |
| optional_test_fail_explicit_convert_in_value_or.test | COMPILE_FAIL | 0.098771 | 0.230315 | 0.272889 | — | — | — |
| optional_test_fail_explicit_convert_in_value_or_call.test | COMPILE_FAIL | 0.099834 | 0.228098 | 0.272704 | — | — | — |
| optional_test_fail_io_without_io.test | COMPILE_FAIL | 0.131807 | 0.308672 | 0.399165 | — | — | — |
| optional_test_fail_none_io_without_io.test | COMPILE_FAIL | 0.107478 | 0.258777 | 0.332673 | — | — | — |
| optional_test_fail_convert_assign_of_enums.test | COMPILE_FAIL | 0.099623 | 0.240804 | 0.279361 | — | — | — |
| optional_test_static_properties.test | RUN | 0.228404 | 0.538082 | 0.691574 | 0.001696 | 0.001593 | 0.001630 |
| optional_test_maybe_uninitialized_warning.test | COMPILE | 0.102363 | 0.255010 | 0.289638 | — | — | — |
| optional_test_deleted_default_ctor.test | COMPILE | 0.105571 | 0.253475 | 0.299026 | — | — | — |
| optional_test_constructible_from_other.test | COMPILE | 0.101515 | 0.238972 | 0.282403 | — | — | — |
| optional_xconfig_NO_PROPER_ASSIGN_FROM_CONST_INT_pass.test | RUN | 0.117536 | 0.313163 | 0.389265 | 0.001491 | 0.001510 | 0.001602 |
| optional_xconfig_NO_PROPER_ASSIGN_FROM_CONST_INT_fail.test | RUN_FAIL | 0.117670 | 0.318664 | 0.391706 | 0.001436 | 0.001452 | 0.001599 |
| optional_xconfig_NO_PROPER_CONVERT_FROM_CONST_INT_pass.test | RUN | 0.121003 | 0.310393 | 0.381450 | 0.001448 | 0.001443 | 0.001501 |
| optional_xconfig_NO_PROPER_CONVERT_FROM_CONST_INT_fail.test | RUN_FAIL | 0.121271 | 0.327363 | 0.375425 | 0.001160 | 0.001683 | 0.001221 |
| optional_xconfig_NO_LEGAL_CONVERT_FROM_REF_pass.test | RUN | 0.094976 | 0.195506 | 0.305882 | 0.001142 | 0.001126 | 0.001122 |
| optional_xconfig_NO_LEGAL_CONVERT_FROM_REF_fail.test | COMPILE_FAIL | 0.060782 | 0.173301 | 0.282011 | — | — | — |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 1.009× | 1.018×, 1.000× | 0.991× |
| clang | 1.016× | 1.011×, 1.021× | 0.992× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1361 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44260407509).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| optional_test.test | 10 | 0.001125s | 0.001094s | 0.001118s | byte equality observed |
| optional_test_assign.test | 10 | 0.001023s | 0.001015s | 0.001034s | byte equality observed |
| optional_test_cmp_none.test | 10 | 0.001053s | 0.001047s | 0.001001s | byte equality observed |
| optional_test_constructors.test | 10 | 0.001063s | 0.001021s | 0.001024s | byte equality observed |
| optional_test_conversions_from_U.test | 10 | 0.001046s | 0.001041s | 0.001041s | byte equality observed |
| optional_test_convert_assign.test | 10 | 0.001026s | 0.001017s | 0.001046s | byte equality observed |
| optional_test_convert_from_T.test | 10 | 0.001033s | 0.001036s | 0.001013s | byte equality observed |
| optional_test_emplace.test | 10 | 0.001035s | 0.001058s | 0.001048s | byte equality observed |
| optional_test_empty_braces.test | 10 | 0.001035s | 0.001023s | 0.001023s | byte equality observed |
| optional_test_flat_map.test | 10 | 0.001055s | 0.001012s | 0.001015s | byte equality observed |
| optional_test_hash.test | 10 | 0.001049s | 0.001063s | 0.001068s | byte equality observed |
| optional_test_inplace_factory.test | 10 | 0.001026s | 0.001092s | 0.001041s | byte equality observed |
| optional_test_io.test | 10 | 0.001053s | 0.001045s | 0.001084s | byte equality observed |
| optional_test_make_optional.test | 10 | 0.001044s | 0.001053s | 0.001053s | byte equality observed |
| optional_test_map.test | 10 | 0.001002s | 0.001041s | 0.001046s | byte equality observed |
| optional_test_member_T.test | 10 | 0.001018s | 0.001028s | 0.001029s | byte equality observed |
| optional_test_minimum_requirements.test | 10 | 0.001059s | 0.001059s | 0.001092s | byte equality observed |
| optional_test_move.test | 10 | 0.001037s | 0.001058s | 0.001032s | byte equality observed |
| optional_test_msvc_bug_workaround.test | 10 | 0.001017s | 0.001061s | 0.001013s | byte equality observed |
| optional_test_noexcept_move.test | 10 | 0.000464s | 0.000480s | 0.001002s | byte equality observed |
| optional_test_ranges_find.test | 10 | 0.001026s | 0.001053s | 0.001013s | byte equality observed |
| optional_test_ref_assign_const_int.test | 10 | 0.001017s | 0.001039s | 0.001018s | byte equality observed |
| optional_test_ref_assign_mutable_int.test | 10 | 0.001027s | 0.001050s | 0.001029s | byte equality observed |
| optional_test_ref_assign_portable_minimum.test | 10 | 0.001035s | 0.001002s | 0.001030s | byte equality observed |
| optional_test_ref_convert_assign_const_int.test | 10 | 0.001021s | 0.001073s | 0.001047s | byte equality observed |
| optional_test_ref_convert_assign_mutable_int.test | 10 | 0.001013s | 0.001011s | 0.001035s | byte equality observed |
| optional_test_ref_convert_assign_non_int.test | 10 | 0.001037s | 0.001048s | 0.000999s | byte equality observed |
| optional_test_ref_converting_ctor.test | 10 | 0.001008s | 0.001063s | 0.001061s | byte equality observed |
| optional_test_ref_move.test | 10 | 0.001038s | 0.001048s | 0.001043s | byte equality observed |
| optional_test_ref_portable_minimum.test | 10 | 0.001063s | 0.001048s | 0.001077s | byte equality observed |
| optional_test_ref_to_val.test | 10 | 0.001005s | 0.001057s | 0.001029s | byte equality observed |
| optional_test_static_properties.test | 10 | 0.001002s | 0.001041s | 0.001034s | byte equality observed |
| optional_test_swap.test | 10 | 0.001045s | 0.001049s | 0.001001s | byte equality observed |
| optional_test_tc_base.test | 10 | 0.001062s | 0.001086s | 0.001000s | byte equality observed |
| optional_test_tie.test | 10 | 0.001019s | 0.001128s | 0.001058s | byte equality observed |
| optional_test_value_access.test | 10 | 0.001066s | 0.001086s | 0.001073s | byte equality observed |
| optional_xconfig_NO_LEGAL_CONVERT_FROM_REF_pass.test | 10 | 0.001009s | 0.000994s | 0.001028s | byte equality observed |
| optional_xconfig_NO_PROPER_ASSIGN_FROM_CONST_INT_pass.test | 10 | 0.000994s | 0.001004s | 0.001027s | byte equality observed |
| optional_xconfig_NO_PROPER_CONVERT_FROM_CONST_INT_pass.test | 10 | 0.001044s | 0.001025s | 0.001003s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44260407509).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
