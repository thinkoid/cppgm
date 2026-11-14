# libs/optional/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| optional_test.test | RUN | 0.248698 | 1.474289 | 0.937413 | 0.001822 | 0.001948 | 0.001918 |
| optional_test_assign.test | RUN | 0.136616 | 0.323815 | 0.445196 | 0.001864 | 0.001946 | 0.001677 |
| optional_test_swap.test | RUN | 0.146193 | 0.398768 | 0.495678 | 0.001640 | 0.001702 | 0.001583 |
| optional_test_constexpr.test | COMPILE | 0.098410 | 0.217362 | 0.291610 | — | — | — |
| optional_test_wuninitialized.test | COMPILE | 0.146833 | 0.527021 | 0.443889 | — | — | — |
| optional_test_fwd_header.test | COMPILE | 0.095575 | 0.221108 | 0.271000 | — | — | — |
| optional_test_conversions_from_U.test | RUN | 0.151518 | 0.419993 | 0.506250 | 0.001712 | 0.001817 | 0.001793 |
| optional_test_constructors.test | RUN | 0.317409 | 1.498305 | 1.356744 | 0.001640 | 0.001796 | 0.001770 |
| optional_test_convert_from_T.test | RUN | 0.141046 | 0.345912 | 0.485201 | 0.001594 | 0.001898 | 0.001730 |
| optional_test_convert_assign.test | RUN | 0.146403 | 0.318467 | 0.414624 | 0.001541 | 0.001771 | 0.001606 |
| optional_test_empty_braces.test | RUN | 0.138320 | 0.331330 | 0.427781 | 0.001655 | 0.001836 | 0.001724 |
| optional_test_make_optional.test | RUN | 0.188157 | 0.505767 | 0.677107 | 0.001615 | 0.001620 | 0.001668 |
| optional_test_flat_map.test | RUN | 0.202717 | 0.598217 | 0.766963 | 0.001613 | 0.001753 | 0.001454 |
| optional_test_hash.test | RUN | 0.169107 | 0.460293 | 0.589684 | 0.001777 | 0.001735 | 0.001830 |
| optional_test_map.test | RUN | 0.202238 | 0.559768 | 0.784681 | 0.001788 | 0.001787 | 0.001313 |
| optional_test_tie.test | RUN | 0.147732 | 0.364588 | 0.494393 | 0.001540 | 0.001708 | 0.001714 |
| optional_test_ranges_find.test | RUN | 0.134868 | 0.323055 | 0.424658 | 0.001566 | 0.001600 | 0.001886 |
| optional_test_ref_assign_portable_minimum.test | RUN | 0.167726 | 0.922872 | 0.608088 | 0.001507 | 0.001587 | 0.001824 |
| optional_test_ref_assign_mutable_int.test | RUN | 0.137676 | 0.391962 | 0.480551 | 0.001885 | 0.001808 | 0.001734 |
| optional_test_ref_assign_const_int.test | RUN | 0.149794 | 0.414710 | 0.450846 | 0.001834 | 0.001790 | 0.001700 |
| optional_test_ref_converting_ctor.test | RUN | 0.163791 | 0.562508 | 0.527870 | 0.001821 | 0.001868 | 0.001823 |
| optional_test_ref_convert_assign_non_int.test | RUN | 0.138837 | 0.368120 | 0.460667 | 0.001610 | 0.001782 | 0.001808 |
| optional_test_ref_convert_assign_mutable_int.test | RUN | 0.134417 | 0.347809 | 0.452007 | 0.001790 | 0.001572 | 0.001818 |
| optional_test_ref_convert_assign_const_int.test | RUN | 0.141112 | 0.349004 | 0.419558 | 0.001798 | 0.001680 | 0.001662 |
| optional_test_ref_portable_minimum.test | RUN | 0.582908 | 1.820954 | 1.560288 | 0.001694 | 0.001560 | 0.001561 |
| optional_test_ref_move.test | RUN | 0.147741 | 0.361797 | 0.452580 | 0.001887 | 0.001833 | 0.001784 |
| optional_test_ref_to_val.test | RUN | 0.172902 | 0.729670 | 0.632400 | 0.001844 | 0.001598 | 0.001493 |
| optional_test_inplace_factory.test | RUN | 0.185085 | 0.670480 | 0.579113 | 0.001517 | 0.001832 | 0.001668 |
| optional_test_io.test | RUN | 0.168347 | 0.726410 | 0.604193 | 0.001756 | 0.001864 | 0.001535 |
| optional_test_move.test | RUN | 0.161580 | 0.505121 | 0.525561 | 0.001530 | 0.001619 | 0.001839 |
| optional_test_noexcept_move.test | RUN | 0.101196 | 0.215341 | 0.261163 | 0.000739 | 0.000708 | 0.001747 |
| optional_test_cmp_none.test | RUN | 0.142975 | 0.363546 | 0.429557 | 0.001765 | 0.001776 | 0.001829 |
| optional_test_value_access.test | RUN | 0.164996 | 0.597367 | 0.591515 | 0.001718 | 0.001687 | 0.001917 |
| optional_test_emplace.test | RUN | 0.163751 | 0.581239 | 0.617591 | 0.001877 | 0.001792 | 0.001840 |
| optional_test_minimum_requirements.test | RUN | 0.152751 | 0.467316 | 0.479142 | 0.001896 | 0.001872 | 0.001630 |
| optional_test_msvc_bug_workaround.test | RUN | 0.137766 | 0.317952 | 0.408843 | 0.001889 | 0.001710 | 0.001813 |
| optional_test_member_T.test | RUN | 0.141240 | 0.315625 | 0.438929 | 0.001664 | 0.001682 | 0.001522 |
| optional_test_tc_base.test | RUN | 0.138501 | 0.327886 | 0.451216 | 0.001551 | 0.001769 | 0.001655 |
| optional_test_sfinae_friendly_ctor.test | COMPILE | 0.105579 | 0.236498 | 0.284483 | — | — | — |
| optional_test_path_assignment.test | COMPILE | 0.090565 | 0.219371 | 0.286507 | — | — | — |
| optional_test_fail_const_swap.test | COMPILE_FAIL | 0.092608 | 0.203699 | 0.238688 | — | — | — |
| optional_test_ref_convert_assign_const_int_prevented.test | COMPILE_FAIL | 0.126434 | 0.275869 | 0.406656 | — | — | — |
| optional_test_fail1.test | COMPILE_FAIL | 0.089529 | 0.179940 | 0.269702 | — | — | — |
| optional_test_fail3a.test | COMPILE_FAIL | 0.090707 | 0.189938 | 0.259854 | — | — | — |
| optional_test_fail3b.test | COMPILE_FAIL | 0.093471 | 0.207004 | 0.269899 | — | — | — |
| optional_test_ref_fail1.test | COMPILE_FAIL | 0.091513 | 0.201247 | 0.269692 | — | — | — |
| optional_test_ref_fail3.test | COMPILE_FAIL | 0.089628 | 0.204209 | 0.254486 | — | — | — |
| optional_test_ref_fail4.test | COMPILE_FAIL | 0.088129 | 0.201140 | 0.266229 | — | — | — |
| optional_test_ref_fail_convert_from_temporary_optional_T.test | COMPILE_FAIL | 0.088961 | 0.198489 | 0.260944 | — | — | — |
| optional_test_inplace_fail.test | COMPILE_FAIL | 0.151069 | 0.319216 | 0.446580 | — | — | — |
| optional_test_inplace_fail2.test | COMPILE_FAIL | 0.149940 | 0.306292 | 0.444667 | — | — | — |
| optional_test_fail_implicit_bool_convert.test | COMPILE_FAIL | 0.090790 | 0.198568 | 0.272385 | — | — | — |
| optional_test_fail_copying_a_moveable_type.test | COMPILE_FAIL | 0.093019 | 0.200328 | 0.275896 | — | — | — |
| optional_test_fail_optional_rvalue_ref.test | COMPILE_FAIL | 0.092132 | 0.197604 | 0.250392 | — | — | — |
| optional_test_ref_fail_init_from_Trefref.test | COMPILE_FAIL | 0.100166 | 0.205964 | 0.256680 | — | — | — |
| optional_test_ref_fail_init_from_Urefref.test | COMPILE_FAIL | 0.092564 | 0.203778 | 0.271386 | — | — | — |
| optional_test_ref_fail_assign_from_Trefref.test | COMPILE_FAIL | 0.096794 | 0.203685 | 0.266549 | — | — | — |
| optional_test_ref_fail_assign_from_Urefref.test | COMPILE_FAIL | 0.098154 | 0.204362 | 0.258843 | — | — | — |
| optional_test_fail_convert_from_null.test | COMPILE_FAIL | 0.091958 | 0.205054 | 0.273291 | — | — | — |
| optional_test_fail_explicit_convert_in_value_or.test | COMPILE_FAIL | 0.093108 | 0.212433 | 0.269311 | — | — | — |
| optional_test_fail_explicit_convert_in_value_or_call.test | COMPILE_FAIL | 0.091350 | 0.205339 | 0.257681 | — | — | — |
| optional_test_fail_io_without_io.test | COMPILE_FAIL | 0.133244 | 0.274368 | 0.395202 | — | — | — |
| optional_test_fail_none_io_without_io.test | COMPILE_FAIL | 0.105813 | 0.227869 | 0.322399 | — | — | — |
| optional_test_fail_convert_assign_of_enums.test | COMPILE_FAIL | 0.097876 | 0.211033 | 0.270311 | — | — | — |
| optional_test_static_properties.test | RUN | 0.225429 | 0.458762 | 0.687683 | 0.001826 | 0.001888 | 0.001859 |
| optional_test_maybe_uninitialized_warning.test | COMPILE | 0.097923 | 0.227151 | 0.295990 | — | — | — |
| optional_test_deleted_default_ctor.test | COMPILE | 0.098832 | 0.227681 | 0.296165 | — | — | — |
| optional_test_constructible_from_other.test | COMPILE | 0.094191 | 0.215818 | 0.283318 | — | — | — |
| optional_xconfig_NO_PROPER_ASSIGN_FROM_CONST_INT_pass.test | RUN | 0.107468 | 0.272073 | 0.369346 | 0.001240 | 0.001372 | 0.001554 |
| optional_xconfig_NO_PROPER_ASSIGN_FROM_CONST_INT_fail.test | RUN_FAIL | 0.109505 | 0.285524 | 0.345260 | 0.001814 | 0.001794 | 0.001617 |
| optional_xconfig_NO_PROPER_CONVERT_FROM_CONST_INT_pass.test | RUN | 0.110132 | 0.280414 | 0.371495 | 0.001327 | 0.001694 | 0.001641 |
| optional_xconfig_NO_PROPER_CONVERT_FROM_CONST_INT_fail.test | RUN_FAIL | 0.109649 | 0.278946 | 0.359914 | 0.001484 | 0.001405 | 0.001362 |
| optional_xconfig_NO_LEGAL_CONVERT_FROM_REF_pass.test | RUN | 0.093198 | 0.188945 | 0.277864 | 0.001274 | 0.001360 | 0.001236 |
| optional_xconfig_NO_LEGAL_CONVERT_FROM_REF_fail.test | COMPILE_FAIL | 0.069609 | 0.211889 | 0.270620 | — | — | — |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 1.011×† | 1.037×, 0.984× | 1.031× |
| clang | 1.000×† | 1.021×, 0.978× | 1.101× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1363 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43620819273).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| optional_test.test | 10 | 0.001150s | 0.001180s | 0.001145s | byte equality observed |
| optional_test_assign.test | 10 | 0.001067s | 0.001121s | 0.001039s | byte equality observed |
| optional_test_cmp_none.test | 10 | 0.001106s | 0.001114s | 0.001008s | byte equality observed |
| optional_test_constructors.test | 10 | 0.001134s | 0.001164s | 0.001057s | byte equality observed |
| optional_test_conversions_from_U.test | 10 | 0.001109s | 0.001141s | 0.001029s | byte equality observed |
| optional_test_convert_assign.test | 10 | 0.001103s | 0.001146s | 0.001037s | byte equality observed |
| optional_test_convert_from_T.test | 10 | 0.001071s | 0.001148s | 0.000995s | byte equality observed |
| optional_test_emplace.test | 10 | 0.001142s | 0.001193s | 0.001072s | byte equality observed |
| optional_test_empty_braces.test | 10 | 0.001126s | 0.001140s | 0.001025s | byte equality observed |
| optional_test_flat_map.test | 10 | 0.001088s | 0.001150s | 0.001048s | byte equality observed |
| optional_test_hash.test | 10 | 0.001117s | 0.001166s | 0.001067s | byte equality observed |
| optional_test_inplace_factory.test | 10 | 0.001127s | 0.001153s | 0.000998s | byte equality observed |
| optional_test_io.test | 10 | 0.001165s | 0.001162s | 0.001044s | byte equality observed |
| optional_test_make_optional.test | 10 | 0.001115s | 0.001145s | 0.001059s | byte equality observed |
| optional_test_map.test | 10 | 0.001069s | 0.001120s | 0.000999s | byte equality observed |
| optional_test_member_T.test | 10 | 0.001116s | 0.001145s | 0.001011s | byte equality observed |
| optional_test_minimum_requirements.test | 10 | 0.001148s | 0.001188s | 0.001061s | byte equality observed |
| optional_test_move.test | 10 | 0.001153s | 0.001143s | 0.001019s | byte equality observed |
| optional_test_msvc_bug_workaround.test | 10 | 0.001156s | 0.001132s | 0.001044s | byte equality observed |
| optional_test_noexcept_move.test | 10 | 0.000487s | 0.000506s | 0.001044s | byte equality observed |
| optional_test_ranges_find.test | 10 | 0.001105s | 0.001156s | 0.001033s | byte equality observed |
| optional_test_ref_assign_const_int.test | 10 | 0.001110s | 0.001137s | 0.001085s | byte equality observed |
| optional_test_ref_assign_mutable_int.test | 10 | 0.001132s | 0.001134s | 0.001040s | byte equality observed |
| optional_test_ref_assign_portable_minimum.test | 10 | 0.001109s | 0.001101s | 0.001016s | byte equality observed |
| optional_test_ref_convert_assign_const_int.test | 10 | 0.001142s | 0.001112s | 0.001056s | byte equality observed |
| optional_test_ref_convert_assign_mutable_int.test | 10 | 0.001100s | 0.001117s | 0.001016s | byte equality observed |
| optional_test_ref_convert_assign_non_int.test | 10 | 0.001107s | 0.001151s | 0.000998s | byte equality observed |
| optional_test_ref_converting_ctor.test | 10 | 0.001106s | 0.001141s | 0.001117s | byte equality observed |
| optional_test_ref_move.test | 10 | 0.001068s | 0.001175s | 0.001091s | byte equality observed |
| optional_test_ref_portable_minimum.test | 10 | 0.001136s | 0.001122s | 0.001149s | byte equality observed |
| optional_test_ref_to_val.test | 10 | 0.001102s | 0.001116s | 0.001089s | byte equality observed |
| optional_test_static_properties.test | 10 | 0.001147s | 0.001163s | 0.001094s | byte equality observed |
| optional_test_swap.test | 10 | 0.001132s | 0.001144s | 0.001148s | byte equality observed |
| optional_test_tc_base.test | 10 | 0.001111s | 0.001161s | 0.001102s | byte equality observed |
| optional_test_tie.test | 10 | 0.001141s | 0.001140s | 0.001057s | byte equality observed |
| optional_test_value_access.test | 10 | 0.001175s | 0.001215s | 0.001224s | byte equality observed |
| optional_xconfig_NO_LEGAL_CONVERT_FROM_REF_pass.test | 10 | 0.001098s | 0.001127s | 0.001137s | byte equality observed |
| optional_xconfig_NO_PROPER_ASSIGN_FROM_CONST_INT_pass.test | 10 | 0.001104s | 0.001170s | 0.001154s | byte equality observed |
| optional_xconfig_NO_PROPER_CONVERT_FROM_CONST_INT_pass.test | 10 | 0.001103s | 0.001156s | 0.001142s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43620819273).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
