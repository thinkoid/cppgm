# libs/optional/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| optional_test.test | RUN | 0.310355 | 1.883621 | 1.209247 | 0.002015 | 0.002149 | 0.002266 |
| optional_test_assign.test | RUN | 0.164303 | 0.401978 | 0.579694 | 0.001832 | 0.002003 | 0.001964 |
| optional_test_swap.test | RUN | 0.175654 | 0.498187 | 0.622098 | 0.001903 | 0.001914 | 0.001734 |
| optional_test_constexpr.test | COMPILE | 0.119257 | 0.273819 | 0.368707 | — | — | — |
| optional_test_wuninitialized.test | COMPILE | 0.178196 | 0.667834 | 0.610859 | — | — | — |
| optional_test_fwd_header.test | COMPILE | 0.118808 | 0.265183 | 0.361701 | — | — | — |
| optional_test_conversions_from_U.test | RUN | 0.194635 | 0.523634 | 0.686740 | 0.001998 | 0.002194 | 0.002084 |
| optional_test_constructors.test | RUN | 0.386988 | 1.884827 | 1.702525 | 0.001898 | 0.002030 | 0.001822 |
| optional_test_convert_from_T.test | RUN | 0.179605 | 0.413144 | 0.581338 | 0.002149 | 0.002143 | 0.002109 |
| optional_test_convert_assign.test | RUN | 0.168605 | 0.406889 | 0.568821 | 0.001870 | 0.002068 | 0.002083 |
| optional_test_empty_braces.test | RUN | 0.175400 | 0.415193 | 0.579895 | 0.002122 | 0.002186 | 0.002082 |
| optional_test_make_optional.test | RUN | 0.241167 | 0.617002 | 0.845254 | 0.002064 | 0.002060 | 0.001974 |
| optional_test_flat_map.test | RUN | 0.247548 | 0.730464 | 1.013637 | 0.001950 | 0.002030 | 0.001813 |
| optional_test_hash.test | RUN | 0.214701 | 0.605633 | 0.761061 | 0.001805 | 0.002170 | 0.001955 |
| optional_test_map.test | RUN | 0.252604 | 0.702667 | 1.008157 | 0.001948 | 0.002000 | 0.002060 |
| optional_test_tie.test | RUN | 0.183312 | 0.457054 | 0.629870 | 0.002020 | 0.001917 | 0.002082 |
| optional_test_ranges_find.test | RUN | 0.164100 | 0.407816 | 0.545662 | 0.001815 | 0.001796 | 0.001892 |
| optional_test_ref_assign_portable_minimum.test | RUN | 0.208449 | 1.159789 | 0.774142 | 0.002202 | 0.001898 | 0.002134 |
| optional_test_ref_assign_mutable_int.test | RUN | 0.179121 | 0.492318 | 0.581699 | 0.001880 | 0.001900 | 0.002094 |
| optional_test_ref_assign_const_int.test | RUN | 0.180518 | 0.512099 | 0.638129 | 0.001898 | 0.001792 | 0.001761 |
| optional_test_ref_converting_ctor.test | RUN | 0.197301 | 0.702029 | 0.624125 | 0.001906 | 0.002248 | 0.002058 |
| optional_test_ref_convert_assign_non_int.test | RUN | 0.183057 | 0.465559 | 0.581001 | 0.001929 | 0.002132 | 0.002100 |
| optional_test_ref_convert_assign_mutable_int.test | RUN | 0.174624 | 0.435126 | 0.548426 | 0.001965 | 0.001830 | 0.002045 |
| optional_test_ref_convert_assign_const_int.test | RUN | 0.168444 | 0.433928 | 0.527371 | 0.001769 | 0.001964 | 0.002132 |
| optional_test_ref_portable_minimum.test | RUN | 0.736655 | 2.296919 | 2.012208 | 0.001876 | 0.002015 | 0.001595 |
| optional_test_ref_move.test | RUN | 0.179882 | 0.454360 | 0.568449 | 0.002009 | 0.002016 | 0.002166 |
| optional_test_ref_to_val.test | RUN | 0.215961 | 0.919858 | 0.843871 | 0.001921 | 0.001818 | 0.002040 |
| optional_test_inplace_factory.test | RUN | 0.219238 | 0.845816 | 0.735143 | 0.001740 | 0.001860 | 0.002173 |
| optional_test_io.test | RUN | 0.213616 | 0.917590 | 0.764378 | 0.002007 | 0.002025 | 0.002048 |
| optional_test_move.test | RUN | 0.199495 | 0.615937 | 0.639037 | 0.002120 | 0.002262 | 0.001976 |
| optional_test_noexcept_move.test | RUN | 0.124668 | 0.278098 | 0.338162 | 0.000781 | 0.000785 | 0.001886 |
| optional_test_cmp_none.test | RUN | 0.171417 | 0.439566 | 0.587590 | 0.001949 | 0.002216 | 0.002037 |
| optional_test_value_access.test | RUN | 0.201648 | 0.727647 | 0.753283 | 0.002052 | 0.002040 | 0.002132 |
| optional_test_emplace.test | RUN | 0.203389 | 0.721900 | 0.778177 | 0.001903 | 0.001874 | 0.001686 |
| optional_test_minimum_requirements.test | RUN | 0.183783 | 0.585281 | 0.696078 | 0.002472 | 0.001952 | 0.002050 |
| optional_test_msvc_bug_workaround.test | RUN | 0.171857 | 0.400773 | 0.557708 | 0.001911 | 0.001906 | 0.002033 |
| optional_test_member_T.test | RUN | 0.172338 | 0.397226 | 0.541569 | 0.001848 | 0.002030 | 0.002054 |
| optional_test_tc_base.test | RUN | 0.168253 | 0.398579 | 0.574229 | 0.001830 | 0.001889 | 0.002123 |
| optional_test_sfinae_friendly_ctor.test | COMPILE | 0.125895 | 0.291111 | 0.388482 | — | — | — |
| optional_test_path_assignment.test | COMPILE | 0.116782 | 0.285541 | 0.329767 | — | — | — |
| optional_test_fail_const_swap.test | COMPILE_FAIL | 0.110013 | 0.250904 | 0.311710 | — | — | — |
| optional_test_ref_convert_assign_const_int_prevented.test | COMPILE_FAIL | 0.152050 | 0.352231 | 0.522894 | — | — | — |
| optional_test_fail1.test | COMPILE_FAIL | 0.112440 | 0.254101 | 0.332449 | — | — | — |
| optional_test_fail3a.test | COMPILE_FAIL | 0.110068 | 0.262622 | 0.343479 | — | — | — |
| optional_test_fail3b.test | COMPILE_FAIL | 0.111488 | 0.260860 | 0.347695 | — | — | — |
| optional_test_ref_fail1.test | COMPILE_FAIL | 0.113913 | 0.255260 | 0.340540 | — | — | — |
| optional_test_ref_fail3.test | COMPILE_FAIL | 0.109059 | 0.253904 | 0.332892 | — | — | — |
| optional_test_ref_fail4.test | COMPILE_FAIL | 0.113381 | 0.247388 | 0.342696 | — | — | — |
| optional_test_ref_fail_convert_from_temporary_optional_T.test | COMPILE_FAIL | 0.109412 | 0.258663 | 0.337688 | — | — | — |
| optional_test_inplace_fail.test | COMPILE_FAIL | 0.185723 | 0.400541 | 0.561624 | — | — | — |
| optional_test_inplace_fail2.test | COMPILE_FAIL | 0.183880 | 0.404562 | 0.560937 | — | — | — |
| optional_test_fail_implicit_bool_convert.test | COMPILE_FAIL | 0.108558 | 0.253754 | 0.338694 | — | — | — |
| optional_test_fail_copying_a_moveable_type.test | COMPILE_FAIL | 0.110773 | 0.267902 | 0.346938 | — | — | — |
| optional_test_fail_optional_rvalue_ref.test | COMPILE_FAIL | 0.110100 | 0.248372 | 0.317004 | — | — | — |
| optional_test_ref_fail_init_from_Trefref.test | COMPILE_FAIL | 0.113244 | 0.252408 | 0.322299 | — | — | — |
| optional_test_ref_fail_init_from_Urefref.test | COMPILE_FAIL | 0.111629 | 0.257687 | 0.334593 | — | — | — |
| optional_test_ref_fail_assign_from_Trefref.test | COMPILE_FAIL | 0.113555 | 0.254998 | 0.316932 | — | — | — |
| optional_test_ref_fail_assign_from_Urefref.test | COMPILE_FAIL | 0.113209 | 0.249073 | 0.330396 | — | — | — |
| optional_test_fail_convert_from_null.test | COMPILE_FAIL | 0.110097 | 0.253070 | 0.324895 | — | — | — |
| optional_test_fail_explicit_convert_in_value_or.test | COMPILE_FAIL | 0.110002 | 0.257464 | 0.324549 | — | — | — |
| optional_test_fail_explicit_convert_in_value_or_call.test | COMPILE_FAIL | 0.112549 | 0.257848 | 0.325560 | — | — | — |
| optional_test_fail_io_without_io.test | COMPILE_FAIL | 0.153759 | 0.327940 | 0.484227 | — | — | — |
| optional_test_fail_none_io_without_io.test | COMPILE_FAIL | 0.121756 | 0.282938 | 0.403768 | — | — | — |
| optional_test_fail_convert_assign_of_enums.test | COMPILE_FAIL | 0.113706 | 0.259099 | 0.346294 | — | — | — |
| optional_test_static_properties.test | RUN | 0.263171 | 0.580751 | 0.858314 | 0.002103 | 0.002033 | 0.002095 |
| optional_test_maybe_uninitialized_warning.test | COMPILE | 0.118068 | 0.277898 | 0.369671 | — | — | — |
| optional_test_deleted_default_ctor.test | COMPILE | 0.120178 | 0.285094 | 0.366729 | — | — | — |
| optional_test_constructible_from_other.test | COMPILE | 0.116287 | 0.270053 | 0.356938 | — | — | — |
| optional_xconfig_NO_PROPER_ASSIGN_FROM_CONST_INT_pass.test | RUN | 0.136093 | 0.341445 | 0.483117 | 0.001813 | 0.001994 | 0.001908 |
| optional_xconfig_NO_PROPER_ASSIGN_FROM_CONST_INT_fail.test | RUN_FAIL | 0.135995 | 0.343105 | 0.480902 | 0.001932 | 0.001502 | 0.001810 |
| optional_xconfig_NO_PROPER_CONVERT_FROM_CONST_INT_pass.test | RUN | 0.136817 | 0.342723 | 0.445818 | 0.001762 | 0.001641 | 0.001652 |
| optional_xconfig_NO_PROPER_CONVERT_FROM_CONST_INT_fail.test | RUN_FAIL | 0.140536 | 0.351710 | 0.450908 | 0.001734 | 0.001598 | 0.002109 |
| optional_xconfig_NO_LEGAL_CONVERT_FROM_REF_pass.test | RUN | 0.116486 | 0.230114 | 0.322995 | 0.001535 | 0.001486 | 0.001427 |
| optional_xconfig_NO_LEGAL_CONVERT_FROM_REF_fail.test | COMPILE_FAIL | 0.088288 | 0.217561 | 0.299723 | — | — | — |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.985× | 0.971×, 0.998× | 1.009× |
| clang | 1.014× | 1.027×, 1.002× | 0.997× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1359 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/43701438216).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| optional_test.test | 10 | 0.001369s | 0.001362s | 0.001367s | byte equality observed |
| optional_test_assign.test | 10 | 0.001262s | 0.001274s | 0.001288s | byte equality observed |
| optional_test_cmp_none.test | 10 | 0.001267s | 0.001294s | 0.001282s | byte equality observed |
| optional_test_constructors.test | 10 | 0.001316s | 0.001280s | 0.001316s | byte equality observed |
| optional_test_conversions_from_U.test | 10 | 0.001266s | 0.001282s | 0.001266s | byte equality observed |
| optional_test_convert_assign.test | 10 | 0.001281s | 0.001283s | 0.001277s | byte equality observed |
| optional_test_convert_from_T.test | 10 | 0.001293s | 0.001264s | 0.001278s | byte equality observed |
| optional_test_emplace.test | 10 | 0.001309s | 0.001279s | 0.001279s | byte equality observed |
| optional_test_empty_braces.test | 10 | 0.001263s | 0.001226s | 0.001243s | byte equality observed |
| optional_test_flat_map.test | 10 | 0.001281s | 0.001218s | 0.001263s | byte equality observed |
| optional_test_hash.test | 10 | 0.001295s | 0.001288s | 0.001295s | byte equality observed |
| optional_test_inplace_factory.test | 10 | 0.001298s | 0.001268s | 0.001271s | byte equality observed |
| optional_test_io.test | 10 | 0.001303s | 0.001280s | 0.001368s | byte equality observed |
| optional_test_make_optional.test | 10 | 0.001275s | 0.001254s | 0.001304s | byte equality observed |
| optional_test_map.test | 10 | 0.001297s | 0.001263s | 0.001306s | byte equality observed |
| optional_test_member_T.test | 10 | 0.001304s | 0.001251s | 0.001262s | byte equality observed |
| optional_test_minimum_requirements.test | 10 | 0.001316s | 0.001334s | 0.001320s | byte equality observed |
| optional_test_move.test | 10 | 0.001296s | 0.001278s | 0.001299s | byte equality observed |
| optional_test_msvc_bug_workaround.test | 10 | 0.001292s | 0.001266s | 0.001279s | byte equality observed |
| optional_test_noexcept_move.test | 10 | 0.000591s | 0.000586s | 0.001294s | byte equality observed |
| optional_test_ranges_find.test | 10 | 0.001288s | 0.001255s | 0.001269s | byte equality observed |
| optional_test_ref_assign_const_int.test | 10 | 0.001284s | 0.001263s | 0.001354s | byte equality observed |
| optional_test_ref_assign_mutable_int.test | 10 | 0.001298s | 0.001280s | 0.001305s | byte equality observed |
| optional_test_ref_assign_portable_minimum.test | 10 | 0.001307s | 0.001272s | 0.001302s | byte equality observed |
| optional_test_ref_convert_assign_const_int.test | 10 | 0.001301s | 0.001317s | 0.001304s | byte equality observed |
| optional_test_ref_convert_assign_mutable_int.test | 10 | 0.001305s | 0.001291s | 0.001274s | byte equality observed |
| optional_test_ref_convert_assign_non_int.test | 10 | 0.001278s | 0.001318s | 0.001275s | byte equality observed |
| optional_test_ref_converting_ctor.test | 10 | 0.001284s | 0.001276s | 0.001308s | byte equality observed |
| optional_test_ref_move.test | 10 | 0.001296s | 0.001240s | 0.001307s | byte equality observed |
| optional_test_ref_portable_minimum.test | 10 | 0.001314s | 0.001323s | 0.001318s | byte equality observed |
| optional_test_ref_to_val.test | 10 | 0.001272s | 0.001268s | 0.001311s | byte equality observed |
| optional_test_static_properties.test | 10 | 0.001271s | 0.001275s | 0.001301s | byte equality observed |
| optional_test_swap.test | 10 | 0.001300s | 0.001296s | 0.001270s | byte equality observed |
| optional_test_tc_base.test | 10 | 0.001280s | 0.001256s | 0.001303s | byte equality observed |
| optional_test_tie.test | 10 | 0.001352s | 0.001253s | 0.001320s | byte equality observed |
| optional_test_value_access.test | 10 | 0.001347s | 0.001308s | 0.001338s | byte equality observed |
| optional_xconfig_NO_LEGAL_CONVERT_FROM_REF_pass.test | 8 | 0.001255s | 0.001283s | 0.001268s | byte equality observed |
| optional_xconfig_NO_PROPER_ASSIGN_FROM_CONST_INT_pass.test | 10 | 0.001271s | 0.001238s | 0.001285s | byte equality observed |
| optional_xconfig_NO_PROPER_CONVERT_FROM_CONST_INT_pass.test | 10 | 0.001281s | 0.001309s | 0.001291s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/43701438216).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
