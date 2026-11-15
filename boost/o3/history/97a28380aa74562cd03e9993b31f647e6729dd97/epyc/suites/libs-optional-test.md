# libs/optional/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| optional_test.test | RUN | 0.200117 | 1.115331 | 0.606023 | 0.001456 | 0.001659 | 0.001548 |
| optional_test_assign.test | RUN | 0.108025 | 0.237843 | 0.273927 | 0.001740 | 0.001695 | 0.001288 |
| optional_test_swap.test | RUN | 0.118109 | 0.296503 | 0.312602 | 0.001542 | 0.001420 | 0.001370 |
| optional_test_constexpr.test | COMPILE | 0.076887 | 0.158599 | 0.175818 | — | — | — |
| optional_test_wuninitialized.test | COMPILE | 0.116868 | 0.383052 | 0.289992 | — | — | — |
| optional_test_fwd_header.test | COMPILE | 0.074970 | 0.157305 | 0.173707 | — | — | — |
| optional_test_conversions_from_U.test | RUN | 0.119107 | 0.308573 | 0.342059 | 0.001604 | 0.001692 | 0.001499 |
| optional_test_constructors.test | RUN | 0.239363 | 1.113198 | 0.896391 | 0.001533 | 0.001557 | 0.001517 |
| optional_test_convert_from_T.test | RUN | 0.111493 | 0.251401 | 0.304041 | 0.001427 | 0.001683 | 0.001351 |
| optional_test_convert_assign.test | RUN | 0.115541 | 0.252061 | 0.292995 | 0.001346 | 0.001520 | 0.001238 |
| optional_test_empty_braces.test | RUN | 0.106582 | 0.237581 | 0.316392 | 0.001721 | 0.001571 | 0.001365 |
| optional_test_make_optional.test | RUN | 0.152558 | 0.378463 | 0.457564 | 0.001641 | 0.001609 | 0.001467 |
| optional_test_flat_map.test | RUN | 0.157071 | 0.444523 | 0.552158 | 0.001493 | 0.001543 | 0.001541 |
| optional_test_hash.test | RUN | 0.132196 | 0.364833 | 0.408864 | 0.001359 | 0.001328 | 0.001507 |
| optional_test_map.test | RUN | 0.160246 | 0.465159 | 0.541866 | 0.001336 | 0.001347 | 0.001466 |
| optional_test_tie.test | RUN | 0.118914 | 0.303047 | 0.309555 | 0.001547 | 0.001444 | 0.001287 |
| optional_test_ranges_find.test | RUN | 0.105516 | 0.273847 | 0.279281 | 0.001443 | 0.001490 | 0.001482 |
| optional_test_ref_assign_portable_minimum.test | RUN | 0.130941 | 0.712313 | 0.409181 | 0.001480 | 0.001340 | 0.001484 |
| optional_test_ref_assign_mutable_int.test | RUN | 0.104890 | 0.287600 | 0.312581 | 0.001600 | 0.001492 | 0.001619 |
| optional_test_ref_assign_const_int.test | RUN | 0.120771 | 0.296020 | 0.306205 | 0.001521 | 0.001339 | 0.001374 |
| optional_test_ref_converting_ctor.test | RUN | 0.130086 | 0.396967 | 0.352463 | 0.001402 | 0.001576 | 0.001500 |
| optional_test_ref_convert_assign_non_int.test | RUN | 0.115867 | 0.277432 | 0.314932 | 0.001420 | 0.001456 | 0.001237 |
| optional_test_ref_convert_assign_mutable_int.test | RUN | 0.104610 | 0.259859 | 0.293221 | 0.002078 | 0.001319 | 0.001510 |
| optional_test_ref_convert_assign_const_int.test | RUN | 0.106738 | 0.246779 | 0.290069 | 0.001684 | 0.001263 | 0.001327 |
| optional_test_ref_portable_minimum.test | RUN | 0.457863 | 1.320176 | 1.019719 | 0.001387 | 0.001592 | 0.001420 |
| optional_test_ref_move.test | RUN | 0.149181 | 0.261704 | 0.298824 | 0.001523 | 0.001556 | 0.001538 |
| optional_test_ref_to_val.test | RUN | 0.141113 | 0.517194 | 0.415278 | 0.001447 | 0.001328 | 0.001240 |
| optional_test_inplace_factory.test | RUN | 0.138835 | 0.474770 | 0.379121 | 0.001521 | 0.001348 | 0.001538 |
| optional_test_io.test | RUN | 0.134498 | 0.548485 | 0.419536 | 0.001686 | 0.001594 | 0.001442 |
| optional_test_move.test | RUN | 0.121739 | 0.360524 | 0.368959 | 0.001549 | 0.001217 | 0.001492 |
| optional_test_noexcept_move.test | RUN | 0.073417 | 0.159980 | 0.174071 | 0.000521 | 0.000654 | 0.001496 |
| optional_test_cmp_none.test | RUN | 0.105235 | 0.255980 | 0.302777 | 0.001385 | 0.001684 | 0.001528 |
| optional_test_value_access.test | RUN | 0.126692 | 0.434855 | 0.394772 | 0.001470 | 0.001423 | 0.001441 |
| optional_test_emplace.test | RUN | 0.129152 | 0.430508 | 0.389973 | 0.001633 | 0.001406 | 0.001309 |
| optional_test_minimum_requirements.test | RUN | 0.118825 | 0.333002 | 0.368863 | 0.001479 | 0.001536 | 0.001588 |
| optional_test_msvc_bug_workaround.test | RUN | 0.107354 | 0.235044 | 0.310674 | 0.001321 | 0.001417 | 0.001574 |
| optional_test_member_T.test | RUN | 0.101430 | 0.236697 | 0.270614 | 0.001601 | 0.001395 | 0.001425 |
| optional_test_tc_base.test | RUN | 0.099539 | 0.244520 | 0.302196 | 0.001466 | 0.001424 | 0.001363 |
| optional_test_sfinae_friendly_ctor.test | COMPILE | 0.074871 | 0.164046 | 0.194738 | — | — | — |
| optional_test_path_assignment.test | COMPILE | 0.071676 | 0.167857 | 0.187899 | — | — | — |
| optional_test_fail_const_swap.test | COMPILE_FAIL | 0.068610 | 0.146464 | 0.168315 | — | — | — |
| optional_test_ref_convert_assign_const_int_prevented.test | COMPILE_FAIL | 0.092217 | 0.200660 | 0.258858 | — | — | — |
| optional_test_fail1.test | COMPILE_FAIL | 0.063744 | 0.142947 | 0.175531 | — | — | — |
| optional_test_fail3a.test | COMPILE_FAIL | 0.068892 | 0.150412 | 0.168560 | — | — | — |
| optional_test_fail3b.test | COMPILE_FAIL | 0.068458 | 0.144481 | 0.178187 | — | — | — |
| optional_test_ref_fail1.test | COMPILE_FAIL | 0.067671 | 0.141697 | 0.174881 | — | — | — |
| optional_test_ref_fail3.test | COMPILE_FAIL | 0.066401 | 0.143840 | 0.174705 | — | — | — |
| optional_test_ref_fail4.test | COMPILE_FAIL | 0.070003 | 0.148792 | 0.170921 | — | — | — |
| optional_test_ref_fail_convert_from_temporary_optional_T.test | COMPILE_FAIL | 0.068025 | 0.150350 | 0.169474 | — | — | — |
| optional_test_inplace_fail.test | COMPILE_FAIL | 0.111813 | 0.233837 | 0.297447 | — | — | — |
| optional_test_inplace_fail2.test | COMPILE_FAIL | 0.110178 | 0.233573 | 0.292893 | — | — | — |
| optional_test_fail_implicit_bool_convert.test | COMPILE_FAIL | 0.064030 | 0.145273 | 0.162603 | — | — | — |
| optional_test_fail_copying_a_moveable_type.test | COMPILE_FAIL | 0.066547 | 0.150536 | 0.169778 | — | — | — |
| optional_test_fail_optional_rvalue_ref.test | COMPILE_FAIL | 0.064666 | 0.140260 | 0.165661 | — | — | — |
| optional_test_ref_fail_init_from_Trefref.test | COMPILE_FAIL | 0.069502 | 0.143647 | 0.171738 | — | — | — |
| optional_test_ref_fail_init_from_Urefref.test | COMPILE_FAIL | 0.063318 | 0.148568 | 0.176684 | — | — | — |
| optional_test_ref_fail_assign_from_Trefref.test | COMPILE_FAIL | 0.068429 | 0.149259 | 0.172925 | — | — | — |
| optional_test_ref_fail_assign_from_Urefref.test | COMPILE_FAIL | 0.068169 | 0.137957 | 0.182257 | — | — | — |
| optional_test_fail_convert_from_null.test | COMPILE_FAIL | 0.065099 | 0.136029 | 0.177933 | — | — | — |
| optional_test_fail_explicit_convert_in_value_or.test | COMPILE_FAIL | 0.068280 | 0.149257 | 0.175782 | — | — | — |
| optional_test_fail_explicit_convert_in_value_or_call.test | COMPILE_FAIL | 0.068893 | 0.142021 | 0.173578 | — | — | — |
| optional_test_fail_io_without_io.test | COMPILE_FAIL | 0.094200 | 0.193324 | 0.260619 | — | — | — |
| optional_test_fail_none_io_without_io.test | COMPILE_FAIL | 0.072079 | 0.163706 | 0.219422 | — | — | — |
| optional_test_fail_convert_assign_of_enums.test | COMPILE_FAIL | 0.070994 | 0.150481 | 0.179397 | — | — | — |
| optional_test_static_properties.test | RUN | 0.164541 | 0.332236 | 0.436703 | 0.001627 | 0.001611 | 0.001510 |
| optional_test_maybe_uninitialized_warning.test | COMPILE | 0.072176 | 0.163329 | 0.184937 | — | — | — |
| optional_test_deleted_default_ctor.test | COMPILE | 0.075686 | 0.162135 | 0.189909 | — | — | — |
| optional_test_constructible_from_other.test | COMPILE | 0.069724 | 0.156912 | 0.176300 | — | — | — |
| optional_xconfig_NO_PROPER_ASSIGN_FROM_CONST_INT_pass.test | RUN | 0.081389 | 0.203990 | 0.247602 | 0.001536 | 0.001397 | 0.001545 |
| optional_xconfig_NO_PROPER_ASSIGN_FROM_CONST_INT_fail.test | RUN_FAIL | 0.082612 | 0.207637 | 0.246827 | 0.001498 | 0.001367 | 0.001390 |
| optional_xconfig_NO_PROPER_CONVERT_FROM_CONST_INT_pass.test | RUN | 0.081658 | 0.199714 | 0.249074 | 0.001352 | 0.001395 | 0.001108 |
| optional_xconfig_NO_PROPER_CONVERT_FROM_CONST_INT_fail.test | RUN_FAIL | 0.084672 | 0.208076 | 0.247277 | 0.001222 | 0.001604 | 0.001504 |
| optional_xconfig_NO_LEGAL_CONVERT_FROM_REF_pass.test | RUN | 0.076645 | 0.137240 | 0.178255 | 0.001115 | 0.001099 | 0.003143 |
| optional_xconfig_NO_LEGAL_CONVERT_FROM_REF_fail.test | COMPILE_FAIL | 0.039955 | 0.143227 | 0.153450 | — | — | — |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.987× | 0.977×, 0.997× | 1.020× |
| clang | 1.029× | 1.039×, 1.018× | 0.975× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1364 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43686398833).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| optional_test.test | 10 | 0.000944s | 0.000930s | 0.000953s | byte equality observed |
| optional_test_assign.test | 10 | 0.000858s | 0.000855s | 0.000911s | byte equality observed |
| optional_test_cmp_none.test | 10 | 0.000867s | 0.000842s | 0.000877s | byte equality observed |
| optional_test_constructors.test | 10 | 0.000892s | 0.000850s | 0.000925s | byte equality observed |
| optional_test_conversions_from_U.test | 10 | 0.000869s | 0.000856s | 0.000882s | byte equality observed |
| optional_test_convert_assign.test | 10 | 0.000856s | 0.000860s | 0.000892s | byte equality observed |
| optional_test_convert_from_T.test | 10 | 0.000869s | 0.000858s | 0.000881s | byte equality observed |
| optional_test_emplace.test | 10 | 0.000887s | 0.000877s | 0.000893s | byte equality observed |
| optional_test_empty_braces.test | 10 | 0.000866s | 0.000862s | 0.000875s | byte equality observed |
| optional_test_flat_map.test | 10 | 0.000874s | 0.000850s | 0.000879s | byte equality observed |
| optional_test_hash.test | 10 | 0.000883s | 0.000862s | 0.000936s | byte equality observed |
| optional_test_inplace_factory.test | 10 | 0.000884s | 0.000884s | 0.000919s | byte equality observed |
| optional_test_io.test | 10 | 0.000896s | 0.000903s | 0.000925s | byte equality observed |
| optional_test_make_optional.test | 10 | 0.000872s | 0.000868s | 0.000908s | byte equality observed |
| optional_test_map.test | 10 | 0.000866s | 0.000879s | 0.000908s | byte equality observed |
| optional_test_member_T.test | 10 | 0.000871s | 0.000874s | 0.000885s | byte equality observed |
| optional_test_minimum_requirements.test | 10 | 0.000889s | 0.000901s | 0.000933s | byte equality observed |
| optional_test_move.test | 10 | 0.000880s | 0.000880s | 0.000891s | byte equality observed |
| optional_test_msvc_bug_workaround.test | 10 | 0.000879s | 0.000856s | 0.000890s | byte equality observed |
| optional_test_noexcept_move.test | 10 | 0.000397s | 0.000391s | 0.000851s | byte equality observed |
| optional_test_ranges_find.test | 10 | 0.000869s | 0.000858s | 0.000893s | byte equality observed |
| optional_test_ref_assign_const_int.test | 10 | 0.000874s | 0.000852s | 0.000900s | byte equality observed |
| optional_test_ref_assign_mutable_int.test | 10 | 0.000875s | 0.000866s | 0.000902s | byte equality observed |
| optional_test_ref_assign_portable_minimum.test | 10 | 0.000881s | 0.000878s | 0.000904s | byte equality observed |
| optional_test_ref_convert_assign_const_int.test | 10 | 0.000876s | 0.000841s | 0.000880s | byte equality observed |
| optional_test_ref_convert_assign_mutable_int.test | 10 | 0.000860s | 0.000850s | 0.000864s | byte equality observed |
| optional_test_ref_convert_assign_non_int.test | 10 | 0.000884s | 0.000850s | 0.000871s | byte equality observed |
| optional_test_ref_converting_ctor.test | 10 | 0.000888s | 0.000865s | 0.000897s | byte equality observed |
| optional_test_ref_move.test | 10 | 0.000889s | 0.000860s | 0.000906s | byte equality observed |
| optional_test_ref_portable_minimum.test | 10 | 0.000906s | 0.000902s | 0.000920s | byte equality observed |
| optional_test_ref_to_val.test | 10 | 0.000877s | 0.000864s | 0.000893s | byte equality observed |
| optional_test_static_properties.test | 10 | 0.000891s | 0.000858s | 0.000881s | byte equality observed |
| optional_test_swap.test | 10 | 0.000879s | 0.000863s | 0.000889s | byte equality observed |
| optional_test_tc_base.test | 10 | 0.000868s | 0.000868s | 0.000871s | byte equality observed |
| optional_test_tie.test | 10 | 0.000862s | 0.000855s | 0.000883s | byte equality observed |
| optional_test_value_access.test | 10 | 0.000931s | 0.000892s | 0.000929s | byte equality observed |
| optional_xconfig_NO_LEGAL_CONVERT_FROM_REF_pass.test | 10 | 0.000856s | 0.000836s | 0.000875s | byte equality observed |
| optional_xconfig_NO_PROPER_ASSIGN_FROM_CONST_INT_pass.test | 10 | 0.000875s | 0.000850s | 0.000880s | byte equality observed |
| optional_xconfig_NO_PROPER_CONVERT_FROM_CONST_INT_pass.test | 10 | 0.000859s | 0.000841s | 0.000880s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43686398833).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
