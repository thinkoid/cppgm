# libs/optional/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| optional_test.test | RUN | 0.333187 | 2.065058 | 1.441498 | 0.002222 | 0.002429 | 0.002389 |
| optional_test_assign.test | RUN | 0.177417 | 0.445196 | 0.693052 | 0.002108 | 0.001971 | 0.002000 |
| optional_test_swap.test | RUN | 0.188895 | 0.553816 | 0.748978 | 0.001918 | 0.001892 | 0.001807 |
| optional_test_constexpr.test | COMPILE | 0.129367 | 0.303444 | 0.448849 | — | — | — |
| optional_test_wuninitialized.test | COMPILE | 0.195869 | 0.722008 | 0.706525 | — | — | — |
| optional_test_fwd_header.test | COMPILE | 0.127235 | 0.305735 | 0.430211 | — | — | — |
| optional_test_conversions_from_U.test | RUN | 0.209037 | 0.577106 | 0.792734 | 0.001818 | 0.002054 | 0.002219 |
| optional_test_constructors.test | RUN | 0.431184 | 2.092666 | 2.125156 | 0.002102 | 0.002056 | 0.001784 |
| optional_test_convert_from_T.test | RUN | 0.188203 | 0.494313 | 0.774864 | 0.001902 | 0.002107 | 0.002260 |
| optional_test_convert_assign.test | RUN | 0.198859 | 0.453962 | 0.677129 | 0.002151 | 0.001814 | 0.002240 |
| optional_test_empty_braces.test | RUN | 0.180724 | 0.456214 | 0.674294 | 0.002202 | 0.002058 | 0.001557 |
| optional_test_make_optional.test | RUN | 0.255465 | 0.704842 | 1.061817 | 0.002150 | 0.002060 | 0.002131 |
| optional_test_flat_map.test | RUN | 0.276887 | 0.805752 | 1.162927 | 0.002031 | 0.001800 | 0.002178 |
| optional_test_hash.test | RUN | 0.229941 | 0.642256 | 0.905028 | 0.001750 | 0.001947 | 0.002044 |
| optional_test_map.test | RUN | 0.276022 | 0.783160 | 1.195224 | 0.002070 | 0.002002 | 0.002005 |
| optional_test_tie.test | RUN | 0.203032 | 0.508021 | 0.746543 | 0.001645 | 0.001934 | 0.002044 |
| optional_test_ranges_find.test | RUN | 0.184439 | 0.459919 | 0.679243 | 0.002134 | 0.001918 | 0.001863 |
| optional_test_ref_assign_portable_minimum.test | RUN | 0.229797 | 1.271693 | 0.952203 | 0.001850 | 0.001926 | 0.002152 |
| optional_test_ref_assign_mutable_int.test | RUN | 0.188635 | 0.551786 | 0.671061 | 0.002129 | 0.001977 | 0.002030 |
| optional_test_ref_assign_const_int.test | RUN | 0.194699 | 0.558642 | 0.763099 | 0.001845 | 0.001558 | 0.001926 |
| optional_test_ref_converting_ctor.test | RUN | 0.211012 | 0.790197 | 0.837921 | 0.001936 | 0.002306 | 0.001858 |
| optional_test_ref_convert_assign_non_int.test | RUN | 0.189586 | 0.542555 | 0.714009 | 0.001883 | 0.001930 | 0.002166 |
| optional_test_ref_convert_assign_mutable_int.test | RUN | 0.182152 | 0.489122 | 0.686913 | 0.002082 | 0.002090 | 0.002092 |
| optional_test_ref_convert_assign_const_int.test | RUN | 0.186173 | 0.480437 | 0.675792 | 0.002040 | 0.001820 | 0.002092 |
| optional_test_ref_portable_minimum.test | RUN | 0.743743 | 2.568239 | 2.467603 | 0.001899 | 0.002108 | 0.001920 |
| optional_test_ref_move.test | RUN | 0.191144 | 0.508096 | 0.709627 | 0.002086 | 0.002134 | 0.002190 |
| optional_test_ref_to_val.test | RUN | 0.231331 | 1.015126 | 0.999362 | 0.002081 | 0.001744 | 0.001972 |
| optional_test_inplace_factory.test | RUN | 0.232510 | 0.946621 | 0.911050 | 0.001752 | 0.002075 | 0.002061 |
| optional_test_io.test | RUN | 0.225202 | 0.994511 | 0.902327 | 0.002178 | 0.001823 | 0.001906 |
| optional_test_move.test | RUN | 0.224419 | 0.700921 | 0.809577 | 0.002031 | 0.001947 | 0.002048 |
| optional_test_noexcept_move.test | RUN | 0.140028 | 0.312532 | 0.473986 | 0.000811 | 0.000880 | 0.001751 |
| optional_test_cmp_none.test | RUN | 0.188978 | 0.483631 | 0.674396 | 0.002171 | 0.001968 | 0.002178 |
| optional_test_value_access.test | RUN | 0.217413 | 0.816578 | 0.887949 | 0.002040 | 0.001985 | 0.002192 |
| optional_test_emplace.test | RUN | 0.215800 | 0.816354 | 0.937944 | 0.002202 | 0.001957 | 0.001860 |
| optional_test_minimum_requirements.test | RUN | 0.198749 | 0.633168 | 0.827306 | 0.002138 | 0.001846 | 0.001769 |
| optional_test_msvc_bug_workaround.test | RUN | 0.183852 | 0.470108 | 0.659214 | 0.002015 | 0.001564 | 0.002153 |
| optional_test_member_T.test | RUN | 0.174478 | 0.451784 | 0.647957 | 0.001753 | 0.001844 | 0.001539 |
| optional_test_tc_base.test | RUN | 0.183479 | 0.459774 | 0.687804 | 0.001812 | 0.001944 | 0.002196 |
| optional_test_sfinae_friendly_ctor.test | COMPILE | 0.138231 | 0.304841 | 0.484312 | — | — | — |
| optional_test_path_assignment.test | COMPILE | 0.130809 | 0.295135 | 0.426636 | — | — | — |
| optional_test_fail_const_swap.test | COMPILE_FAIL | 0.117538 | 0.283078 | 0.376514 | — | — | — |
| optional_test_ref_convert_assign_const_int_prevented.test | COMPILE_FAIL | 0.169586 | 0.401881 | 0.618065 | — | — | — |
| optional_test_fail1.test | COMPILE_FAIL | 0.122461 | 0.283928 | 0.402624 | — | — | — |
| optional_test_fail3a.test | COMPILE_FAIL | 0.124599 | 0.291479 | 0.443433 | — | — | — |
| optional_test_fail3b.test | COMPILE_FAIL | 0.125019 | 0.284730 | 0.431049 | — | — | — |
| optional_test_ref_fail1.test | COMPILE_FAIL | 0.123197 | 0.286106 | 0.407538 | — | — | — |
| optional_test_ref_fail3.test | COMPILE_FAIL | 0.118657 | 0.292227 | 0.407700 | — | — | — |
| optional_test_ref_fail4.test | COMPILE_FAIL | 0.124538 | 0.280935 | 0.412640 | — | — | — |
| optional_test_ref_fail_convert_from_temporary_optional_T.test | COMPILE_FAIL | 0.119038 | 0.283705 | 0.413634 | — | — | — |
| optional_test_inplace_fail.test | COMPILE_FAIL | 0.203016 | 0.446455 | 0.704909 | — | — | — |
| optional_test_inplace_fail2.test | COMPILE_FAIL | 0.198770 | 0.453368 | 0.699911 | — | — | — |
| optional_test_fail_implicit_bool_convert.test | COMPILE_FAIL | 0.119700 | 0.288459 | 0.412816 | — | — | — |
| optional_test_fail_copying_a_moveable_type.test | COMPILE_FAIL | 0.124909 | 0.293387 | 0.429076 | — | — | — |
| optional_test_fail_optional_rvalue_ref.test | COMPILE_FAIL | 0.122072 | 0.278202 | 0.382733 | — | — | — |
| optional_test_ref_fail_init_from_Trefref.test | COMPILE_FAIL | 0.125042 | 0.285666 | 0.424430 | — | — | — |
| optional_test_ref_fail_init_from_Urefref.test | COMPILE_FAIL | 0.123010 | 0.279404 | 0.417854 | — | — | — |
| optional_test_ref_fail_assign_from_Trefref.test | COMPILE_FAIL | 0.123594 | 0.292151 | 0.416173 | — | — | — |
| optional_test_ref_fail_assign_from_Urefref.test | COMPILE_FAIL | 0.123150 | 0.275888 | 0.405536 | — | — | — |
| optional_test_fail_convert_from_null.test | COMPILE_FAIL | 0.118767 | 0.282657 | 0.432610 | — | — | — |
| optional_test_fail_explicit_convert_in_value_or.test | COMPILE_FAIL | 0.120234 | 0.279709 | 0.420287 | — | — | — |
| optional_test_fail_explicit_convert_in_value_or_call.test | COMPILE_FAIL | 0.123006 | 0.291216 | 0.411667 | — | — | — |
| optional_test_fail_io_without_io.test | COMPILE_FAIL | 0.169067 | 0.373516 | 0.595565 | — | — | — |
| optional_test_fail_none_io_without_io.test | COMPILE_FAIL | 0.130489 | 0.301321 | 0.501941 | — | — | — |
| optional_test_fail_convert_assign_of_enums.test | COMPILE_FAIL | 0.126726 | 0.291374 | 0.445431 | — | — | — |
| optional_test_static_properties.test | RUN | 0.290242 | 0.646767 | 1.066198 | 0.002046 | 0.001996 | 0.002205 |
| optional_test_maybe_uninitialized_warning.test | COMPILE | 0.128396 | 0.317669 | 0.448567 | — | — | — |
| optional_test_deleted_default_ctor.test | COMPILE | 0.132929 | 0.306345 | 0.465704 | — | — | — |
| optional_test_constructible_from_other.test | COMPILE | 0.125399 | 0.290467 | 0.441883 | — | — | — |
| optional_xconfig_NO_PROPER_ASSIGN_FROM_CONST_INT_pass.test | RUN | 0.151117 | 0.347334 | 0.597887 | 0.001981 | 0.001803 | 0.001784 |
| optional_xconfig_NO_PROPER_ASSIGN_FROM_CONST_INT_fail.test | RUN_FAIL | 0.151711 | 0.355867 | 0.539151 | 0.002020 | 0.001901 | 0.002048 |
| optional_xconfig_NO_PROPER_CONVERT_FROM_CONST_INT_pass.test | RUN | 0.149877 | 0.374273 | 0.599187 | 0.001707 | 0.001784 | 0.001651 |
| optional_xconfig_NO_PROPER_CONVERT_FROM_CONST_INT_fail.test | RUN_FAIL | 0.148462 | 0.388309 | 0.489740 | 0.002104 | 0.001565 | 0.001524 |
| optional_xconfig_NO_LEGAL_CONVERT_FROM_REF_pass.test | RUN | 0.112469 | 0.260975 | 0.421273 | 0.001547 | 0.001664 | 0.001380 |
| optional_xconfig_NO_LEGAL_CONVERT_FROM_REF_fail.test | COMPILE_FAIL | 0.075711 | 0.253664 | 0.414113 | — | — | — |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 1.006× | 1.001×, 1.011× | 0.993× |
| clang | 1.001× | 0.983×, 1.019× | 1.013× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1359 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44000592280).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| optional_test.test | 10 | 0.001320s | 0.001345s | 0.001317s | byte equality observed |
| optional_test_assign.test | 10 | 0.001236s | 0.001230s | 0.001208s | byte equality observed |
| optional_test_cmp_none.test | 10 | 0.001233s | 0.001242s | 0.001211s | byte equality observed |
| optional_test_constructors.test | 10 | 0.001255s | 0.001292s | 0.001232s | byte equality observed |
| optional_test_conversions_from_U.test | 10 | 0.001227s | 0.001246s | 0.001228s | byte equality observed |
| optional_test_convert_assign.test | 10 | 0.001282s | 0.001226s | 0.001212s | byte equality observed |
| optional_test_convert_from_T.test | 10 | 0.001279s | 0.001293s | 0.001215s | byte equality observed |
| optional_test_emplace.test | 10 | 0.001267s | 0.001311s | 0.001277s | byte equality observed |
| optional_test_empty_braces.test | 10 | 0.001249s | 0.001299s | 0.001276s | byte equality observed |
| optional_test_flat_map.test | 10 | 0.001244s | 0.001238s | 0.001221s | byte equality observed |
| optional_test_hash.test | 10 | 0.001235s | 0.001267s | 0.001270s | byte equality observed |
| optional_test_inplace_factory.test | 10 | 0.001273s | 0.001245s | 0.001285s | byte equality observed |
| optional_test_io.test | 10 | 0.001303s | 0.001286s | 0.001268s | byte equality observed |
| optional_test_make_optional.test | 10 | 0.001230s | 0.001240s | 0.001271s | byte equality observed |
| optional_test_map.test | 10 | 0.001232s | 0.001268s | 0.001207s | byte equality observed |
| optional_test_member_T.test | 10 | 0.001238s | 0.001226s | 0.001251s | byte equality observed |
| optional_test_minimum_requirements.test | 10 | 0.001293s | 0.001284s | 0.001313s | byte equality observed |
| optional_test_move.test | 10 | 0.001230s | 0.001274s | 0.001194s | byte equality observed |
| optional_test_msvc_bug_workaround.test | 10 | 0.001259s | 0.001287s | 0.001207s | byte equality observed |
| optional_test_noexcept_move.test | 10 | 0.000553s | 0.000559s | 0.001189s | byte equality observed |
| optional_test_ranges_find.test | 10 | 0.001217s | 0.001263s | 0.001224s | byte equality observed |
| optional_test_ref_assign_const_int.test | 10 | 0.001254s | 0.001227s | 0.001174s | byte equality observed |
| optional_test_ref_assign_mutable_int.test | 10 | 0.001229s | 0.001255s | 0.001211s | byte equality observed |
| optional_test_ref_assign_portable_minimum.test | 10 | 0.001244s | 0.001270s | 0.001236s | byte equality observed |
| optional_test_ref_convert_assign_const_int.test | 10 | 0.001219s | 0.001251s | 0.001231s | byte equality observed |
| optional_test_ref_convert_assign_mutable_int.test | 10 | 0.001267s | 0.001275s | 0.001193s | byte equality observed |
| optional_test_ref_convert_assign_non_int.test | 10 | 0.001272s | 0.001250s | 0.001216s | byte equality observed |
| optional_test_ref_converting_ctor.test | 10 | 0.001243s | 0.001302s | 0.001253s | byte equality observed |
| optional_test_ref_move.test | 10 | 0.001245s | 0.001274s | 0.001273s | byte equality observed |
| optional_test_ref_portable_minimum.test | 10 | 0.001311s | 0.001313s | 0.001215s | byte equality observed |
| optional_test_ref_to_val.test | 10 | 0.001253s | 0.001262s | 0.001233s | byte equality observed |
| optional_test_static_properties.test | 10 | 0.001253s | 0.001244s | 0.001228s | byte equality observed |
| optional_test_swap.test | 10 | 0.001253s | 0.001232s | 0.001256s | byte equality observed |
| optional_test_tc_base.test | 10 | 0.001258s | 0.001258s | 0.001223s | byte equality observed |
| optional_test_tie.test | 10 | 0.001277s | 0.001251s | 0.001203s | byte equality observed |
| optional_test_value_access.test | 10 | 0.001286s | 0.001272s | 0.001244s | byte equality observed |
| optional_xconfig_NO_LEGAL_CONVERT_FROM_REF_pass.test | 10 | 0.001211s | 0.001244s | 0.001211s | byte equality observed |
| optional_xconfig_NO_PROPER_ASSIGN_FROM_CONST_INT_pass.test | 10 | 0.001217s | 0.001227s | 0.001196s | byte equality observed |
| optional_xconfig_NO_PROPER_CONVERT_FROM_CONST_INT_pass.test | 10 | 0.001224s | 0.001257s | 0.001215s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44000592280).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
