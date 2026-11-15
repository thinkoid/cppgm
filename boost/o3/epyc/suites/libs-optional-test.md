# libs/optional/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| optional_test.test | RUN | 0.329162 | 2.049980 | 1.379359 | 0.002168 | 0.002155 | 0.002226 |
| optional_test_assign.test | RUN | 0.174039 | 0.445763 | 0.700907 | 0.001917 | 0.002152 | 0.001826 |
| optional_test_swap.test | RUN | 0.186645 | 0.536590 | 0.737021 | 0.001792 | 0.002237 | 0.001959 |
| optional_test_constexpr.test | COMPILE | 0.128327 | 0.299657 | 0.438167 | — | — | — |
| optional_test_wuninitialized.test | COMPILE | 0.184064 | 0.724696 | 0.685751 | — | — | — |
| optional_test_fwd_header.test | COMPILE | 0.124092 | 0.305689 | 0.427499 | — | — | — |
| optional_test_conversions_from_U.test | RUN | 0.204252 | 0.562726 | 0.799999 | 0.001897 | 0.002057 | 0.002066 |
| optional_test_constructors.test | RUN | 0.411500 | 2.072620 | 2.091404 | 0.001740 | 0.001756 | 0.002106 |
| optional_test_convert_from_T.test | RUN | 0.188189 | 0.463723 | 0.737185 | 0.002068 | 0.002100 | 0.002022 |
| optional_test_convert_assign.test | RUN | 0.187176 | 0.447929 | 0.681898 | 0.001731 | 0.002117 | 0.001988 |
| optional_test_empty_braces.test | RUN | 0.187528 | 0.451637 | 0.672220 | 0.002114 | 0.002280 | 0.001950 |
| optional_test_make_optional.test | RUN | 0.253750 | 0.670116 | 1.053380 | 0.002077 | 0.002184 | 0.001940 |
| optional_test_flat_map.test | RUN | 0.269960 | 0.793613 | 1.125051 | 0.001780 | 0.001913 | 0.002041 |
| optional_test_hash.test | RUN | 0.224165 | 0.651000 | 0.896125 | 0.001700 | 0.002169 | 0.002029 |
| optional_test_map.test | RUN | 0.272559 | 0.778599 | 1.203128 | 0.001647 | 0.001948 | 0.002176 |
| optional_test_tie.test | RUN | 0.197735 | 0.506219 | 0.737939 | 0.001926 | 0.001851 | 0.001869 |
| optional_test_ranges_find.test | RUN | 0.173336 | 0.462847 | 0.667349 | 0.001692 | 0.001910 | 0.001875 |
| optional_test_ref_assign_portable_minimum.test | RUN | 0.219742 | 1.278475 | 0.991661 | 0.001868 | 0.002201 | 0.002090 |
| optional_test_ref_assign_mutable_int.test | RUN | 0.192513 | 0.548444 | 0.732530 | 0.001753 | 0.002070 | 0.002054 |
| optional_test_ref_assign_const_int.test | RUN | 0.190951 | 0.570106 | 0.678826 | 0.001938 | 0.001827 | 0.001816 |
| optional_test_ref_converting_ctor.test | RUN | 0.207580 | 0.788279 | 0.802702 | 0.001854 | 0.002045 | 0.002106 |
| optional_test_ref_convert_assign_non_int.test | RUN | 0.186709 | 0.503459 | 0.713782 | 0.001742 | 0.001831 | 0.002062 |
| optional_test_ref_convert_assign_mutable_int.test | RUN | 0.185112 | 0.478072 | 0.641412 | 0.002010 | 0.001973 | 0.002156 |
| optional_test_ref_convert_assign_const_int.test | RUN | 0.184880 | 0.481976 | 0.692277 | 0.001778 | 0.002050 | 0.001899 |
| optional_test_ref_portable_minimum.test | RUN | 0.818264 | 2.469214 | 2.435771 | 0.002178 | 0.001918 | 0.001697 |
| optional_test_ref_move.test | RUN | 0.187743 | 0.488906 | 0.715520 | 0.001825 | 0.002122 | 0.002161 |
| optional_test_ref_to_val.test | RUN | 0.237788 | 0.982575 | 0.990537 | 0.001903 | 0.002082 | 0.001946 |
| optional_test_inplace_factory.test | RUN | 0.226383 | 0.902053 | 0.909413 | 0.001984 | 0.001928 | 0.001866 |
| optional_test_io.test | RUN | 0.220460 | 0.992063 | 0.915271 | 0.001964 | 0.002004 | 0.002204 |
| optional_test_move.test | RUN | 0.217244 | 0.681894 | 0.756419 | 0.001616 | 0.001971 | 0.002132 |
| optional_test_noexcept_move.test | RUN | 0.129231 | 0.299951 | 0.458414 | 0.000729 | 0.000885 | 0.001675 |
| optional_test_cmp_none.test | RUN | 0.190052 | 0.476939 | 0.714845 | 0.001882 | 0.002199 | 0.002138 |
| optional_test_value_access.test | RUN | 0.219110 | 0.792445 | 0.909928 | 0.002044 | 0.002082 | 0.001896 |
| optional_test_emplace.test | RUN | 0.215944 | 0.798115 | 0.891485 | 0.002035 | 0.001822 | 0.001891 |
| optional_test_minimum_requirements.test | RUN | 0.196366 | 0.617045 | 0.800393 | 0.001844 | 0.001986 | 0.001984 |
| optional_test_msvc_bug_workaround.test | RUN | 0.178620 | 0.456135 | 0.663313 | 0.001709 | 0.001848 | 0.002014 |
| optional_test_member_T.test | RUN | 0.182834 | 0.433837 | 0.672695 | 0.001836 | 0.002012 | 0.001934 |
| optional_test_tc_base.test | RUN | 0.180401 | 0.451807 | 0.656652 | 0.001991 | 0.002057 | 0.001963 |
| optional_test_sfinae_friendly_ctor.test | COMPILE | 0.137893 | 0.291442 | 0.481588 | — | — | — |
| optional_test_path_assignment.test | COMPILE | 0.134736 | 0.283312 | 0.402796 | — | — | — |
| optional_test_fail_const_swap.test | COMPILE_FAIL | 0.116762 | 0.274519 | 0.370798 | — | — | — |
| optional_test_ref_convert_assign_const_int_prevented.test | COMPILE_FAIL | 0.165960 | 0.375911 | 0.648487 | — | — | — |
| optional_test_fail1.test | COMPILE_FAIL | 0.120362 | 0.283213 | 0.405237 | — | — | — |
| optional_test_fail3a.test | COMPILE_FAIL | 0.126493 | 0.291544 | 0.407212 | — | — | — |
| optional_test_fail3b.test | COMPILE_FAIL | 0.123804 | 0.283345 | 0.433307 | — | — | — |
| optional_test_ref_fail1.test | COMPILE_FAIL | 0.123152 | 0.289604 | 0.405398 | — | — | — |
| optional_test_ref_fail3.test | COMPILE_FAIL | 0.119867 | 0.274188 | 0.414618 | — | — | — |
| optional_test_ref_fail4.test | COMPILE_FAIL | 0.122324 | 0.286102 | 0.404494 | — | — | — |
| optional_test_ref_fail_convert_from_temporary_optional_T.test | COMPILE_FAIL | 0.121002 | 0.268006 | 0.408381 | — | — | — |
| optional_test_inplace_fail.test | COMPILE_FAIL | 0.199929 | 0.451358 | 0.695806 | — | — | — |
| optional_test_inplace_fail2.test | COMPILE_FAIL | 0.197329 | 0.441425 | 0.684625 | — | — | — |
| optional_test_fail_implicit_bool_convert.test | COMPILE_FAIL | 0.120388 | 0.283599 | 0.404477 | — | — | — |
| optional_test_fail_copying_a_moveable_type.test | COMPILE_FAIL | 0.123298 | 0.292409 | 0.404259 | — | — | — |
| optional_test_fail_optional_rvalue_ref.test | COMPILE_FAIL | 0.119457 | 0.275456 | 0.420241 | — | — | — |
| optional_test_ref_fail_init_from_Trefref.test | COMPILE_FAIL | 0.120983 | 0.275415 | 0.424667 | — | — | — |
| optional_test_ref_fail_init_from_Urefref.test | COMPILE_FAIL | 0.119841 | 0.283921 | 0.407485 | — | — | — |
| optional_test_ref_fail_assign_from_Trefref.test | COMPILE_FAIL | 0.120667 | 0.291383 | 0.407340 | — | — | — |
| optional_test_ref_fail_assign_from_Urefref.test | COMPILE_FAIL | 0.121159 | 0.273999 | 0.426537 | — | — | — |
| optional_test_fail_convert_from_null.test | COMPILE_FAIL | 0.118291 | 0.277252 | 0.413418 | — | — | — |
| optional_test_fail_explicit_convert_in_value_or.test | COMPILE_FAIL | 0.118507 | 0.282534 | 0.404049 | — | — | — |
| optional_test_fail_explicit_convert_in_value_or_call.test | COMPILE_FAIL | 0.117440 | 0.288595 | 0.407129 | — | — | — |
| optional_test_fail_io_without_io.test | COMPILE_FAIL | 0.167370 | 0.373310 | 0.595682 | — | — | — |
| optional_test_fail_none_io_without_io.test | COMPILE_FAIL | 0.130449 | 0.313520 | 0.507000 | — | — | — |
| optional_test_fail_convert_assign_of_enums.test | COMPILE_FAIL | 0.122400 | 0.277072 | 0.422130 | — | — | — |
| optional_test_static_properties.test | RUN | 0.295059 | 0.643261 | 1.024898 | 0.001686 | 0.002158 | 0.002069 |
| optional_test_maybe_uninitialized_warning.test | COMPILE | 0.130264 | 0.315123 | 0.445217 | — | — | — |
| optional_test_deleted_default_ctor.test | COMPILE | 0.134149 | 0.310816 | 0.446401 | — | — | — |
| optional_test_constructible_from_other.test | COMPILE | 0.124820 | 0.298794 | 0.419073 | — | — | — |
| optional_xconfig_NO_PROPER_ASSIGN_FROM_CONST_INT_pass.test | RUN | 0.148021 | 0.366917 | 0.583749 | 0.002067 | 0.001875 | 0.001966 |
| optional_xconfig_NO_PROPER_ASSIGN_FROM_CONST_INT_fail.test | RUN_FAIL | 0.145442 | 0.379114 | 0.585883 | 0.001755 | 0.001896 | 0.001868 |
| optional_xconfig_NO_PROPER_CONVERT_FROM_CONST_INT_pass.test | RUN | 0.144974 | 0.374359 | 0.531067 | 0.001634 | 0.001792 | 0.001830 |
| optional_xconfig_NO_PROPER_CONVERT_FROM_CONST_INT_fail.test | RUN_FAIL | 0.147055 | 0.385408 | 0.540078 | 0.001585 | 0.002266 | 0.002044 |
| optional_xconfig_NO_LEGAL_CONVERT_FROM_REF_pass.test | RUN | 0.104483 | 0.245292 | 0.402454 | 0.001544 | 0.001417 | 0.001317 |
| optional_xconfig_NO_LEGAL_CONVERT_FROM_REF_fail.test | COMPILE_FAIL | 0.069895 | 0.235132 | 0.353639 | — | — | — |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 1.002× | 0.999×, 1.004× | 0.991× |
| clang | 1.011× | 1.011×, 1.010× | 1.003× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1361 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43664060660).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| optional_test.test | 10 | 0.001352s | 0.001376s | 0.001337s | byte equality observed |
| optional_test_assign.test | 10 | 0.001229s | 0.001231s | 0.001283s | byte equality observed |
| optional_test_cmp_none.test | 10 | 0.001253s | 0.001236s | 0.001241s | byte equality observed |
| optional_test_constructors.test | 10 | 0.001297s | 0.001276s | 0.001290s | byte equality observed |
| optional_test_conversions_from_U.test | 10 | 0.001268s | 0.001279s | 0.001272s | byte equality observed |
| optional_test_convert_assign.test | 10 | 0.001234s | 0.001260s | 0.001259s | byte equality observed |
| optional_test_convert_from_T.test | 10 | 0.001237s | 0.001274s | 0.001271s | byte equality observed |
| optional_test_emplace.test | 10 | 0.001275s | 0.001247s | 0.001287s | byte equality observed |
| optional_test_empty_braces.test | 10 | 0.001289s | 0.001306s | 0.001318s | byte equality observed |
| optional_test_flat_map.test | 10 | 0.001269s | 0.001270s | 0.001254s | byte equality observed |
| optional_test_hash.test | 10 | 0.001307s | 0.001238s | 0.001248s | byte equality observed |
| optional_test_inplace_factory.test | 10 | 0.001250s | 0.001268s | 0.001240s | byte equality observed |
| optional_test_io.test | 10 | 0.001267s | 0.001266s | 0.001278s | byte equality observed |
| optional_test_make_optional.test | 10 | 0.001273s | 0.001220s | 0.001300s | byte equality observed |
| optional_test_map.test | 10 | 0.001211s | 0.001283s | 0.001237s | byte equality observed |
| optional_test_member_T.test | 10 | 0.001239s | 0.001259s | 0.001284s | byte equality observed |
| optional_test_minimum_requirements.test | 9 | 0.001269s | 0.001356s | 0.001320s | byte equality observed |
| optional_test_move.test | 10 | 0.001236s | 0.001235s | 0.001289s | byte equality observed |
| optional_test_msvc_bug_workaround.test | 10 | 0.001288s | 0.001268s | 0.001248s | byte equality observed |
| optional_test_noexcept_move.test | 10 | 0.000581s | 0.000571s | 0.001302s | byte equality observed |
| optional_test_ranges_find.test | 10 | 0.001257s | 0.001265s | 0.001210s | byte equality observed |
| optional_test_ref_assign_const_int.test | 10 | 0.001218s | 0.001254s | 0.001288s | byte equality observed |
| optional_test_ref_assign_mutable_int.test | 10 | 0.001308s | 0.001280s | 0.001286s | byte equality observed |
| optional_test_ref_assign_portable_minimum.test | 10 | 0.001265s | 0.001265s | 0.001246s | byte equality observed |
| optional_test_ref_convert_assign_const_int.test | 10 | 0.001262s | 0.001250s | 0.001234s | byte equality observed |
| optional_test_ref_convert_assign_mutable_int.test | 10 | 0.001252s | 0.001221s | 0.001197s | byte equality observed |
| optional_test_ref_convert_assign_non_int.test | 10 | 0.001289s | 0.001254s | 0.001200s | byte equality observed |
| optional_test_ref_converting_ctor.test | 10 | 0.001279s | 0.001333s | 0.001239s | byte equality observed |
| optional_test_ref_move.test | 10 | 0.001269s | 0.001243s | 0.001268s | byte equality observed |
| optional_test_ref_portable_minimum.test | 10 | 0.001297s | 0.001241s | 0.001333s | byte equality observed |
| optional_test_ref_to_val.test | 10 | 0.001229s | 0.001260s | 0.001256s | byte equality observed |
| optional_test_static_properties.test | 9 | 0.001253s | 0.001286s | 0.001286s | byte equality observed |
| optional_test_swap.test | 10 | 0.001278s | 0.001283s | 0.001275s | byte equality observed |
| optional_test_tc_base.test | 10 | 0.001217s | 0.001262s | 0.001279s | byte equality observed |
| optional_test_tie.test | 10 | 0.001227s | 0.001256s | 0.001218s | byte equality observed |
| optional_test_value_access.test | 10 | 0.001324s | 0.001346s | 0.001261s | byte equality observed |
| optional_xconfig_NO_LEGAL_CONVERT_FROM_REF_pass.test | 10 | 0.001246s | 0.001208s | 0.001193s | byte equality observed |
| optional_xconfig_NO_PROPER_ASSIGN_FROM_CONST_INT_pass.test | 10 | 0.001246s | 0.001212s | 0.001276s | byte equality observed |
| optional_xconfig_NO_PROPER_CONVERT_FROM_CONST_INT_pass.test | 10 | 0.001213s | 0.001224s | 0.001247s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43664060660).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
