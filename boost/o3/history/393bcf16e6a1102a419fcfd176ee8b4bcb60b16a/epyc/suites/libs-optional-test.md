# libs/optional/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| optional_test.test | RUN | 0.329625 | 2.037124 | 1.443626 | 0.002126 | 0.002016 | 0.002304 |
| optional_test_assign.test | RUN | 0.180216 | 0.442217 | 0.690514 | 0.001900 | 0.001930 | 0.001899 |
| optional_test_swap.test | RUN | 0.187214 | 0.549702 | 0.759334 | 0.001804 | 0.001980 | 0.001684 |
| optional_test_constexpr.test | COMPILE | 0.126791 | 0.301235 | 0.455300 | — | — | — |
| optional_test_wuninitialized.test | COMPILE | 0.187453 | 0.714980 | 0.743407 | — | — | — |
| optional_test_fwd_header.test | COMPILE | 0.128079 | 0.302130 | 0.442228 | — | — | — |
| optional_test_conversions_from_U.test | RUN | 0.207241 | 0.563730 | 0.816583 | 0.001874 | 0.001961 | 0.002112 |
| optional_test_constructors.test | RUN | 0.425264 | 2.084944 | 2.042373 | 0.001834 | 0.001636 | 0.001890 |
| optional_test_convert_from_T.test | RUN | 0.186355 | 0.482163 | 0.739211 | 0.001866 | 0.002072 | 0.002093 |
| optional_test_convert_assign.test | RUN | 0.195816 | 0.442003 | 0.655704 | 0.002044 | 0.001864 | 0.002058 |
| optional_test_empty_braces.test | RUN | 0.181545 | 0.458204 | 0.694717 | 0.001980 | 0.001958 | 0.002046 |
| optional_test_make_optional.test | RUN | 0.249053 | 0.692231 | 1.028776 | 0.001965 | 0.001845 | 0.002163 |
| optional_test_flat_map.test | RUN | 0.280930 | 0.805682 | 1.138377 | 0.002029 | 0.001930 | 0.001477 |
| optional_test_hash.test | RUN | 0.232130 | 0.623356 | 0.879873 | 0.001823 | 0.002127 | 0.002074 |
| optional_test_map.test | RUN | 0.275323 | 0.763054 | 1.180438 | 0.002030 | 0.002215 | 0.002157 |
| optional_test_tie.test | RUN | 0.194398 | 0.464681 | 0.746032 | 0.002028 | 0.001824 | 0.001849 |
| optional_test_ranges_find.test | RUN | 0.176994 | 0.399778 | 0.647629 | 0.001860 | 0.001904 | 0.002046 |
| optional_test_ref_assign_portable_minimum.test | RUN | 0.223886 | 1.280743 | 1.001998 | 0.001835 | 0.001905 | 0.002197 |
| optional_test_ref_assign_mutable_int.test | RUN | 0.189207 | 0.543063 | 0.751518 | 0.002076 | 0.001943 | 0.002099 |
| optional_test_ref_assign_const_int.test | RUN | 0.191141 | 0.564841 | 0.706788 | 0.001808 | 0.001938 | 0.002141 |
| optional_test_ref_converting_ctor.test | RUN | 0.212196 | 0.763069 | 0.810812 | 0.001810 | 0.002146 | 0.002170 |
| optional_test_ref_convert_assign_non_int.test | RUN | 0.184693 | 0.515320 | 0.729785 | 0.001871 | 0.001906 | 0.002191 |
| optional_test_ref_convert_assign_mutable_int.test | RUN | 0.182975 | 0.468137 | 0.711080 | 0.002126 | 0.001743 | 0.002232 |
| optional_test_ref_convert_assign_const_int.test | RUN | 0.180663 | 0.484014 | 0.665341 | 0.002018 | 0.002129 | 0.001966 |
| optional_test_ref_portable_minimum.test | RUN | 0.818326 | 2.507943 | 2.397947 | 0.002030 | 0.002054 | 0.001943 |
| optional_test_ref_move.test | RUN | 0.194986 | 0.495578 | 0.689442 | 0.002003 | 0.002145 | 0.002016 |
| optional_test_ref_to_val.test | RUN | 0.238938 | 1.007840 | 1.035301 | 0.002042 | 0.002155 | 0.001672 |
| optional_test_inplace_factory.test | RUN | 0.241635 | 0.909877 | 0.914509 | 0.002062 | 0.001984 | 0.001538 |
| optional_test_io.test | RUN | 0.221144 | 0.983163 | 0.887723 | 0.002043 | 0.001938 | 0.001824 |
| optional_test_move.test | RUN | 0.207278 | 0.673006 | 0.838644 | 0.001682 | 0.001868 | 0.002144 |
| optional_test_noexcept_move.test | RUN | 0.124851 | 0.302937 | 0.470321 | 0.000705 | 0.000928 | 0.001622 |
| optional_test_cmp_none.test | RUN | 0.181859 | 0.488513 | 0.709578 | 0.001857 | 0.002021 | 0.002163 |
| optional_test_value_access.test | RUN | 0.222462 | 0.799791 | 0.847769 | 0.002023 | 0.002209 | 0.002068 |
| optional_test_emplace.test | RUN | 0.221550 | 0.803149 | 0.949480 | 0.002096 | 0.001732 | 0.001861 |
| optional_test_minimum_requirements.test | RUN | 0.197761 | 0.639153 | 0.801639 | 0.001692 | 0.001996 | 0.002115 |
| optional_test_msvc_bug_workaround.test | RUN | 0.177697 | 0.443015 | 0.649359 | 0.001862 | 0.002130 | 0.002173 |
| optional_test_member_T.test | RUN | 0.180114 | 0.433000 | 0.649822 | 0.001729 | 0.002055 | 0.001727 |
| optional_test_tc_base.test | RUN | 0.180542 | 0.446358 | 0.665450 | 0.001858 | 0.002009 | 0.002150 |
| optional_test_sfinae_friendly_ctor.test | COMPILE | 0.137525 | 0.312643 | 0.455226 | — | — | — |
| optional_test_path_assignment.test | COMPILE | 0.131797 | 0.302422 | 0.412095 | — | — | — |
| optional_test_fail_const_swap.test | COMPILE_FAIL | 0.120986 | 0.276118 | 0.417318 | — | — | — |
| optional_test_ref_convert_assign_const_int_prevented.test | COMPILE_FAIL | 0.170958 | 0.394635 | 0.644551 | — | — | — |
| optional_test_fail1.test | COMPILE_FAIL | 0.120950 | 0.274618 | 0.411438 | — | — | — |
| optional_test_fail3a.test | COMPILE_FAIL | 0.122577 | 0.285294 | 0.424109 | — | — | — |
| optional_test_fail3b.test | COMPILE_FAIL | 0.124455 | 0.284522 | 0.409185 | — | — | — |
| optional_test_ref_fail1.test | COMPILE_FAIL | 0.123039 | 0.281770 | 0.418105 | — | — | — |
| optional_test_ref_fail3.test | COMPILE_FAIL | 0.120097 | 0.281123 | 0.414078 | — | — | — |
| optional_test_ref_fail4.test | COMPILE_FAIL | 0.121425 | 0.278233 | 0.402991 | — | — | — |
| optional_test_ref_fail_convert_from_temporary_optional_T.test | COMPILE_FAIL | 0.120108 | 0.289474 | 0.412657 | — | — | — |
| optional_test_inplace_fail.test | COMPILE_FAIL | 0.198699 | 0.436502 | 0.689329 | — | — | — |
| optional_test_inplace_fail2.test | COMPILE_FAIL | 0.198893 | 0.452264 | 0.708474 | — | — | — |
| optional_test_fail_implicit_bool_convert.test | COMPILE_FAIL | 0.118416 | 0.275454 | 0.407451 | — | — | — |
| optional_test_fail_copying_a_moveable_type.test | COMPILE_FAIL | 0.121687 | 0.290310 | 0.415671 | — | — | — |
| optional_test_fail_optional_rvalue_ref.test | COMPILE_FAIL | 0.120517 | 0.275510 | 0.400201 | — | — | — |
| optional_test_ref_fail_init_from_Trefref.test | COMPILE_FAIL | 0.120768 | 0.276737 | 0.421020 | — | — | — |
| optional_test_ref_fail_init_from_Urefref.test | COMPILE_FAIL | 0.120690 | 0.287144 | 0.414981 | — | — | — |
| optional_test_ref_fail_assign_from_Trefref.test | COMPILE_FAIL | 0.121897 | 0.286781 | 0.400186 | — | — | — |
| optional_test_ref_fail_assign_from_Urefref.test | COMPILE_FAIL | 0.120716 | 0.274985 | 0.410292 | — | — | — |
| optional_test_fail_convert_from_null.test | COMPILE_FAIL | 0.117739 | 0.274024 | 0.417157 | — | — | — |
| optional_test_fail_explicit_convert_in_value_or.test | COMPILE_FAIL | 0.118694 | 0.288679 | 0.421302 | — | — | — |
| optional_test_fail_explicit_convert_in_value_or_call.test | COMPILE_FAIL | 0.118738 | 0.288251 | 0.397746 | — | — | — |
| optional_test_fail_io_without_io.test | COMPILE_FAIL | 0.164790 | 0.368608 | 0.601267 | — | — | — |
| optional_test_fail_none_io_without_io.test | COMPILE_FAIL | 0.129139 | 0.299513 | 0.489370 | — | — | — |
| optional_test_fail_convert_assign_of_enums.test | COMPILE_FAIL | 0.120545 | 0.289700 | 0.434601 | — | — | — |
| optional_test_static_properties.test | RUN | 0.288547 | 0.640707 | 1.095374 | 0.001907 | 0.002178 | 0.002229 |
| optional_test_maybe_uninitialized_warning.test | COMPILE | 0.126972 | 0.316014 | 0.443850 | — | — | — |
| optional_test_deleted_default_ctor.test | COMPILE | 0.133466 | 0.308179 | 0.456127 | — | — | — |
| optional_test_constructible_from_other.test | COMPILE | 0.123601 | 0.295888 | 0.442245 | — | — | — |
| optional_xconfig_NO_PROPER_ASSIGN_FROM_CONST_INT_pass.test | RUN | 0.151444 | 0.377444 | 0.586730 | 0.001565 | 0.001890 | 0.001923 |
| optional_xconfig_NO_PROPER_ASSIGN_FROM_CONST_INT_fail.test | RUN_FAIL | 0.143756 | 0.377008 | 0.544504 | 0.001972 | 0.002073 | 0.001994 |
| optional_xconfig_NO_PROPER_CONVERT_FROM_CONST_INT_pass.test | RUN | 0.150971 | 0.376513 | 0.583245 | 0.001776 | 0.001715 | 0.001761 |
| optional_xconfig_NO_PROPER_CONVERT_FROM_CONST_INT_fail.test | RUN_FAIL | 0.147379 | 0.386721 | 0.540639 | 0.002003 | 0.002236 | 0.002133 |
| optional_xconfig_NO_LEGAL_CONVERT_FROM_REF_pass.test | RUN | 0.103792 | 0.255364 | 0.372404 | 0.001559 | 0.001544 | 0.001566 |
| optional_xconfig_NO_LEGAL_CONVERT_FROM_REF_fail.test | COMPILE_FAIL | 0.069630 | 0.238540 | 0.349951 | — | — | — |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.992× | 0.992×, 0.992× | 0.998× |
| clang | 1.003× | 0.997×, 1.010× | 1.000× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1359 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43674678137).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| optional_test.test | 10 | 0.001332s | 0.001333s | 0.001317s | byte equality observed |
| optional_test_assign.test | 10 | 0.001214s | 0.001280s | 0.001224s | byte equality observed |
| optional_test_cmp_none.test | 10 | 0.001236s | 0.001216s | 0.001276s | byte equality observed |
| optional_test_constructors.test | 10 | 0.001256s | 0.001254s | 0.001228s | byte equality observed |
| optional_test_conversions_from_U.test | 10 | 0.001244s | 0.001237s | 0.001233s | byte equality observed |
| optional_test_convert_assign.test | 10 | 0.001253s | 0.001289s | 0.001245s | byte equality observed |
| optional_test_convert_from_T.test | 10 | 0.001270s | 0.001249s | 0.001225s | byte equality observed |
| optional_test_emplace.test | 10 | 0.001285s | 0.001287s | 0.001238s | byte equality observed |
| optional_test_empty_braces.test | 10 | 0.001271s | 0.001256s | 0.001241s | byte equality observed |
| optional_test_flat_map.test | 10 | 0.001218s | 0.001295s | 0.001228s | byte equality observed |
| optional_test_hash.test | 10 | 0.001263s | 0.001295s | 0.001256s | byte equality observed |
| optional_test_inplace_factory.test | 10 | 0.001289s | 0.001340s | 0.001260s | byte equality observed |
| optional_test_io.test | 10 | 0.001307s | 0.001262s | 0.001268s | byte equality observed |
| optional_test_make_optional.test | 10 | 0.001250s | 0.001204s | 0.001235s | byte equality observed |
| optional_test_map.test | 10 | 0.001282s | 0.001254s | 0.001217s | byte equality observed |
| optional_test_member_T.test | 10 | 0.001266s | 0.001249s | 0.001213s | byte equality observed |
| optional_test_minimum_requirements.test | 10 | 0.001304s | 0.001294s | 0.001308s | byte equality observed |
| optional_test_move.test | 10 | 0.001309s | 0.001224s | 0.001248s | byte equality observed |
| optional_test_msvc_bug_workaround.test | 10 | 0.001261s | 0.001294s | 0.001214s | byte equality observed |
| optional_test_noexcept_move.test | 10 | 0.000573s | 0.000569s | 0.001228s | byte equality observed |
| optional_test_ranges_find.test | 10 | 0.001234s | 0.001278s | 0.001253s | byte equality observed |
| optional_test_ref_assign_const_int.test | 10 | 0.001228s | 0.001284s | 0.001234s | byte equality observed |
| optional_test_ref_assign_mutable_int.test | 10 | 0.001228s | 0.001249s | 0.001287s | byte equality observed |
| optional_test_ref_assign_portable_minimum.test | 10 | 0.001245s | 0.001267s | 0.001238s | byte equality observed |
| optional_test_ref_convert_assign_const_int.test | 10 | 0.001222s | 0.001243s | 0.001264s | byte equality observed |
| optional_test_ref_convert_assign_mutable_int.test | 10 | 0.001277s | 0.001206s | 0.001243s | byte equality observed |
| optional_test_ref_convert_assign_non_int.test | 10 | 0.001241s | 0.001201s | 0.001286s | byte equality observed |
| optional_test_ref_converting_ctor.test | 10 | 0.001228s | 0.001227s | 0.001227s | byte equality observed |
| optional_test_ref_move.test | 10 | 0.001285s | 0.001206s | 0.001277s | byte equality observed |
| optional_test_ref_portable_minimum.test | 10 | 0.001275s | 0.001303s | 0.001276s | byte equality observed |
| optional_test_ref_to_val.test | 10 | 0.001280s | 0.001229s | 0.001244s | byte equality observed |
| optional_test_static_properties.test | 10 | 0.001278s | 0.001223s | 0.001216s | byte equality observed |
| optional_test_swap.test | 10 | 0.001251s | 0.001286s | 0.001299s | byte equality observed |
| optional_test_tc_base.test | 10 | 0.001263s | 0.001265s | 0.001253s | byte equality observed |
| optional_test_tie.test | 10 | 0.001254s | 0.001304s | 0.001219s | byte equality observed |
| optional_test_value_access.test | 10 | 0.001299s | 0.001285s | 0.001252s | byte equality observed |
| optional_xconfig_NO_LEGAL_CONVERT_FROM_REF_pass.test | 10 | 0.001209s | 0.001226s | 0.001242s | byte equality observed |
| optional_xconfig_NO_PROPER_ASSIGN_FROM_CONST_INT_pass.test | 10 | 0.001229s | 0.001224s | 0.001237s | byte equality observed |
| optional_xconfig_NO_PROPER_CONVERT_FROM_CONST_INT_pass.test | 10 | 0.001216s | 0.001248s | 0.001253s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43674678137).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
