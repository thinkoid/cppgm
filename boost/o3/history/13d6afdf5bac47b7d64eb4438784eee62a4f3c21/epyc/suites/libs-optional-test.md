# libs/optional/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| optional_test.test | RUN | 0.242624 | 1.515810 | 0.943287 | 0.001464 | 0.002016 | 0.001842 |
| optional_test_assign.test | RUN | 0.131292 | 0.329409 | 0.460772 | 0.001794 | 0.001959 | 0.001627 |
| optional_test_swap.test | RUN | 0.140011 | 0.406924 | 0.478789 | 0.002102 | 0.001867 | 0.001608 |
| optional_test_constexpr.test | COMPILE | 0.092846 | 0.223572 | 0.293670 | — | — | — |
| optional_test_wuninitialized.test | COMPILE | 0.146164 | 0.524139 | 0.451492 | — | — | — |
| optional_test_fwd_header.test | COMPILE | 0.094516 | 0.224046 | 0.272848 | — | — | — |
| optional_test_conversions_from_U.test | RUN | 0.154266 | 0.424684 | 0.542674 | 0.001801 | 0.002034 | 0.001703 |
| optional_test_constructors.test | RUN | 0.303845 | 1.563833 | 1.347840 | 0.001317 | 0.001797 | 0.001869 |
| optional_test_convert_from_T.test | RUN | 0.140396 | 0.353564 | 0.471060 | 0.001844 | 0.001873 | 0.001550 |
| optional_test_convert_assign.test | RUN | 0.141082 | 0.328944 | 0.452219 | 0.001492 | 0.002008 | 0.001704 |
| optional_test_empty_braces.test | RUN | 0.145420 | 0.338681 | 0.469740 | 0.001698 | 0.001858 | 0.001770 |
| optional_test_make_optional.test | RUN | 0.196132 | 0.517689 | 0.712191 | 0.001768 | 0.001734 | 0.001860 |
| optional_test_flat_map.test | RUN | 0.204852 | 0.587625 | 0.802572 | 0.001620 | 0.001578 | 0.001741 |
| optional_test_hash.test | RUN | 0.174991 | 0.471580 | 0.532585 | 0.001516 | 0.001928 | 0.001739 |
| optional_test_map.test | RUN | 0.205792 | 0.583332 | 0.798742 | 0.001799 | 0.001669 | 0.001561 |
| optional_test_tie.test | RUN | 0.152449 | 0.376600 | 0.454882 | 0.001118 | 0.001717 | 0.001840 |
| optional_test_ranges_find.test | RUN | 0.138924 | 0.340596 | 0.436574 | 0.001593 | 0.001760 | 0.001411 |
| optional_test_ref_assign_portable_minimum.test | RUN | 0.167099 | 0.930423 | 0.598976 | 0.001422 | 0.001775 | 0.001754 |
| optional_test_ref_assign_mutable_int.test | RUN | 0.149229 | 0.398147 | 0.449467 | 0.001734 | 0.001689 | 0.001791 |
| optional_test_ref_assign_const_int.test | RUN | 0.148986 | 0.413380 | 0.500037 | 0.001685 | 0.001583 | 0.001725 |
| optional_test_ref_converting_ctor.test | RUN | 0.161627 | 0.560577 | 0.547778 | 0.001550 | 0.001945 | 0.001685 |
| optional_test_ref_convert_assign_non_int.test | RUN | 0.148917 | 0.379555 | 0.458057 | 0.001421 | 0.001836 | 0.001719 |
| optional_test_ref_convert_assign_mutable_int.test | RUN | 0.140075 | 0.350244 | 0.436704 | 0.001817 | 0.001892 | 0.001832 |
| optional_test_ref_convert_assign_const_int.test | RUN | 0.138158 | 0.357390 | 0.455029 | 0.001638 | 0.001978 | 0.001714 |
| optional_test_ref_portable_minimum.test | RUN | 0.580372 | 1.894616 | 1.650790 | 0.001458 | 0.001934 | 0.001792 |
| optional_test_ref_move.test | RUN | 0.146282 | 0.373534 | 0.418628 | 0.001668 | 0.001842 | 0.001797 |
| optional_test_ref_to_val.test | RUN | 0.175011 | 0.744494 | 0.661614 | 0.001624 | 0.001648 | 0.001726 |
| optional_test_inplace_factory.test | RUN | 0.175201 | 0.680175 | 0.583471 | 0.001660 | 0.001849 | 0.001799 |
| optional_test_io.test | RUN | 0.170755 | 0.745254 | 0.613775 | 0.001845 | 0.001850 | 0.001977 |
| optional_test_move.test | RUN | 0.161803 | 0.517054 | 0.511019 | 0.001594 | 0.001541 | 0.001389 |
| optional_test_noexcept_move.test | RUN | 0.097829 | 0.228205 | 0.268814 | 0.000797 | 0.000805 | 0.001538 |
| optional_test_cmp_none.test | RUN | 0.140422 | 0.363713 | 0.422807 | 0.001814 | 0.001866 | 0.001828 |
| optional_test_value_access.test | RUN | 0.160429 | 0.563566 | 0.601537 | 0.001691 | 0.001755 | 0.001740 |
| optional_test_emplace.test | RUN | 0.163190 | 0.597138 | 0.610344 | 0.001586 | 0.001734 | 0.001272 |
| optional_test_minimum_requirements.test | RUN | 0.155373 | 0.471978 | 0.505413 | 0.001603 | 0.001716 | 0.001727 |
| optional_test_msvc_bug_workaround.test | RUN | 0.132387 | 0.331192 | 0.442680 | 0.001800 | 0.001931 | 0.001827 |
| optional_test_member_T.test | RUN | 0.134769 | 0.327512 | 0.413207 | 0.001549 | 0.001645 | 0.001426 |
| optional_test_tc_base.test | RUN | 0.136779 | 0.322815 | 0.450195 | 0.001568 | 0.001590 | 0.001794 |
| optional_test_sfinae_friendly_ctor.test | COMPILE | 0.104225 | 0.238867 | 0.313159 | — | — | — |
| optional_test_path_assignment.test | COMPILE | 0.098051 | 0.228823 | 0.281779 | — | — | — |
| optional_test_fail_const_swap.test | COMPILE_FAIL | 0.089016 | 0.205077 | 0.251763 | — | — | — |
| optional_test_ref_convert_assign_const_int_prevented.test | COMPILE_FAIL | 0.123489 | 0.289815 | 0.402030 | — | — | — |
| optional_test_fail1.test | COMPILE_FAIL | 0.090220 | 0.204969 | 0.266733 | — | — | — |
| optional_test_fail3a.test | COMPILE_FAIL | 0.092335 | 0.206317 | 0.266531 | — | — | — |
| optional_test_fail3b.test | COMPILE_FAIL | 0.092469 | 0.212453 | 0.274120 | — | — | — |
| optional_test_ref_fail1.test | COMPILE_FAIL | 0.091182 | 0.207690 | 0.261782 | — | — | — |
| optional_test_ref_fail3.test | COMPILE_FAIL | 0.089417 | 0.210405 | 0.257940 | — | — | — |
| optional_test_ref_fail4.test | COMPILE_FAIL | 0.089926 | 0.255007 | 0.272648 | — | — | — |
| optional_test_ref_fail_convert_from_temporary_optional_T.test | COMPILE_FAIL | 0.089233 | 0.246247 | 0.269726 | — | — | — |
| optional_test_inplace_fail.test | COMPILE_FAIL | 0.145012 | 0.329230 | 0.458485 | — | — | — |
| optional_test_inplace_fail2.test | COMPILE_FAIL | 0.144639 | 0.336769 | 0.449675 | — | — | — |
| optional_test_fail_implicit_bool_convert.test | COMPILE_FAIL | 0.085605 | 0.218059 | 0.267531 | — | — | — |
| optional_test_fail_copying_a_moveable_type.test | COMPILE_FAIL | 0.090173 | 0.218424 | 0.277758 | — | — | — |
| optional_test_fail_optional_rvalue_ref.test | COMPILE_FAIL | 0.090122 | 0.211158 | 0.256395 | — | — | — |
| optional_test_ref_fail_init_from_Trefref.test | COMPILE_FAIL | 0.093377 | 0.205735 | 0.261330 | — | — | — |
| optional_test_ref_fail_init_from_Urefref.test | COMPILE_FAIL | 0.095425 | 0.213430 | 0.255205 | — | — | — |
| optional_test_ref_fail_assign_from_Trefref.test | COMPILE_FAIL | 0.094141 | 0.213792 | 0.259417 | — | — | — |
| optional_test_ref_fail_assign_from_Urefref.test | COMPILE_FAIL | 0.091303 | 0.202840 | 0.268816 | — | — | — |
| optional_test_fail_convert_from_null.test | COMPILE_FAIL | 0.089708 | 0.201040 | 0.253409 | — | — | — |
| optional_test_fail_explicit_convert_in_value_or.test | COMPILE_FAIL | 0.090383 | 0.204806 | 0.266267 | — | — | — |
| optional_test_fail_explicit_convert_in_value_or_call.test | COMPILE_FAIL | 0.088515 | 0.204340 | 0.256455 | — | — | — |
| optional_test_fail_io_without_io.test | COMPILE_FAIL | 0.122174 | 0.278913 | 0.381306 | — | — | — |
| optional_test_fail_none_io_without_io.test | COMPILE_FAIL | 0.098915 | 0.221857 | 0.318345 | — | — | — |
| optional_test_fail_convert_assign_of_enums.test | COMPILE_FAIL | 0.092484 | 0.218026 | 0.280024 | — | — | — |
| optional_test_static_properties.test | RUN | 0.213489 | 0.476424 | 0.685616 | 0.001707 | 0.001912 | 0.001812 |
| optional_test_maybe_uninitialized_warning.test | COMPILE | 0.093221 | 0.233448 | 0.278578 | — | — | — |
| optional_test_deleted_default_ctor.test | COMPILE | 0.094332 | 0.236019 | 0.304700 | — | — | — |
| optional_test_constructible_from_other.test | COMPILE | 0.092411 | 0.224000 | 0.276544 | — | — | — |
| optional_xconfig_NO_PROPER_ASSIGN_FROM_CONST_INT_pass.test | RUN | 0.109737 | 0.272811 | 0.375773 | 0.001696 | 0.001668 | 0.001608 |
| optional_xconfig_NO_PROPER_ASSIGN_FROM_CONST_INT_fail.test | RUN_FAIL | 0.108854 | 0.275180 | 0.348414 | 0.001588 | 0.001745 | 0.001504 |
| optional_xconfig_NO_PROPER_CONVERT_FROM_CONST_INT_pass.test | RUN | 0.112272 | 0.270270 | 0.377912 | 0.001530 | 0.001640 | 0.001486 |
| optional_xconfig_NO_PROPER_CONVERT_FROM_CONST_INT_fail.test | RUN_FAIL | 0.109263 | 0.285228 | 0.344879 | 0.001858 | 0.002017 | 0.001419 |
| optional_xconfig_NO_LEGAL_CONVERT_FROM_REF_pass.test | RUN | 0.076190 | 0.179003 | 0.286427 | 0.001417 | 0.001342 | 0.001170 |
| optional_xconfig_NO_LEGAL_CONVERT_FROM_REF_fail.test | COMPILE_FAIL | 0.068286 | 0.204330 | 0.261857 | — | — | — |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.956×† | 0.897×, 1.015× | 1.014× |
| clang | 1.045×† | 1.082×, 1.007× | 1.002× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1363 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43648658351).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| optional_test.test | 10 | 0.001099s | 0.001071s | 0.001098s | byte equality observed |
| optional_test_assign.test | 10 | 0.001006s | 0.001011s | 0.001029s | byte equality observed |
| optional_test_cmp_none.test | 10 | 0.001009s | 0.000980s | 0.001044s | byte equality observed |
| optional_test_constructors.test | 10 | 0.001035s | 0.000999s | 0.001053s | byte equality observed |
| optional_test_conversions_from_U.test | 10 | 0.001001s | 0.000993s | 0.001031s | byte equality observed |
| optional_test_convert_assign.test | 10 | 0.000989s | 0.000998s | 0.001020s | byte equality observed |
| optional_test_convert_from_T.test | 10 | 0.001016s | 0.001005s | 0.001009s | byte equality observed |
| optional_test_emplace.test | 10 | 0.001048s | 0.001051s | 0.001056s | byte equality observed |
| optional_test_empty_braces.test | 10 | 0.001034s | 0.001013s | 0.001011s | byte equality observed |
| optional_test_flat_map.test | 10 | 0.001009s | 0.001012s | 0.001043s | byte equality observed |
| optional_test_hash.test | 10 | 0.001030s | 0.001020s | 0.001039s | byte equality observed |
| optional_test_inplace_factory.test | 10 | 0.001022s | 0.001014s | 0.001028s | byte equality observed |
| optional_test_io.test | 10 | 0.001048s | 0.001023s | 0.001034s | byte equality observed |
| optional_test_make_optional.test | 10 | 0.001061s | 0.001006s | 0.001010s | byte equality observed |
| optional_test_map.test | 10 | 0.001007s | 0.000996s | 0.001037s | byte equality observed |
| optional_test_member_T.test | 10 | 0.000996s | 0.001008s | 0.001018s | byte equality observed |
| optional_test_minimum_requirements.test | 10 | 0.001053s | 0.001048s | 0.001072s | byte equality observed |
| optional_test_move.test | 10 | 0.001039s | 0.001022s | 0.001001s | byte equality observed |
| optional_test_msvc_bug_workaround.test | 10 | 0.001023s | 0.001044s | 0.001032s | byte equality observed |
| optional_test_noexcept_move.test | 10 | 0.000468s | 0.000470s | 0.001003s | byte equality observed |
| optional_test_ranges_find.test | 10 | 0.001013s | 0.001019s | 0.001012s | byte equality observed |
| optional_test_ref_assign_const_int.test | 10 | 0.001024s | 0.001018s | 0.001095s | byte equality observed |
| optional_test_ref_assign_mutable_int.test | 10 | 0.001019s | 0.000999s | 0.001051s | byte equality observed |
| optional_test_ref_assign_portable_minimum.test | 10 | 0.001019s | 0.001008s | 0.001024s | byte equality observed |
| optional_test_ref_convert_assign_const_int.test | 10 | 0.001024s | 0.001008s | 0.001003s | byte equality observed |
| optional_test_ref_convert_assign_mutable_int.test | 10 | 0.001020s | 0.001040s | 0.001050s | byte equality observed |
| optional_test_ref_convert_assign_non_int.test | 10 | 0.001055s | 0.001025s | 0.001032s | byte equality observed |
| optional_test_ref_converting_ctor.test | 10 | 0.001039s | 0.001001s | 0.001003s | byte equality observed |
| optional_test_ref_move.test | 10 | 0.001020s | 0.000996s | 0.001031s | byte equality observed |
| optional_test_ref_portable_minimum.test | 10 | 0.001082s | 0.001041s | 0.001036s | byte equality observed |
| optional_test_ref_to_val.test | 10 | 0.001012s | 0.001025s | 0.001015s | byte equality observed |
| optional_test_static_properties.test | 10 | 0.001027s | 0.001030s | 0.000984s | byte equality observed |
| optional_test_swap.test | 10 | 0.001024s | 0.001002s | 0.001052s | byte equality observed |
| optional_test_tc_base.test | 10 | 0.000996s | 0.001069s | 0.001048s | byte equality observed |
| optional_test_tie.test | 10 | 0.001026s | 0.000986s | 0.001082s | byte equality observed |
| optional_test_value_access.test | 10 | 0.001082s | 0.001053s | 0.001092s | byte equality observed |
| optional_xconfig_NO_LEGAL_CONVERT_FROM_REF_pass.test | 10 | 0.000983s | 0.000999s | 0.000998s | byte equality observed |
| optional_xconfig_NO_PROPER_ASSIGN_FROM_CONST_INT_pass.test | 10 | 0.001008s | 0.001006s | 0.001015s | byte equality observed |
| optional_xconfig_NO_PROPER_CONVERT_FROM_CONST_INT_pass.test | 10 | 0.001004s | 0.000996s | 0.001007s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43648658351).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
