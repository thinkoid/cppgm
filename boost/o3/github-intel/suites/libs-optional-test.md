# libs/optional/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| optional_test.test | RUN | 0.217902 | 1.321024 | 0.750903 | 0.001257 | 0.001338 | 0.001262 |
| optional_test_assign.test | RUN | 0.109203 | 0.269896 | 0.338505 | 0.001338 | 0.001325 | 0.001139 |
| optional_test_swap.test | RUN | 0.116985 | 0.343058 | 0.369170 | 0.001136 | 0.001205 | 0.001055 |
| optional_test_constexpr.test | COMPILE | 0.077808 | 0.183650 | 0.214323 | — | — | — |
| optional_test_wuninitialized.test | COMPILE | 0.118798 | 0.449433 | 0.352261 | — | — | — |
| optional_test_fwd_header.test | COMPILE | 0.077597 | 0.177554 | 0.207520 | — | — | — |
| optional_test_conversions_from_U.test | RUN | 0.129027 | 0.354554 | 0.414922 | 0.001411 | 0.001261 | 0.001206 |
| optional_test_constructors.test | RUN | 0.263881 | 1.304015 | 1.076477 | 0.001232 | 0.001265 | 0.001117 |
| optional_test_convert_from_T.test | RUN | 0.117557 | 0.291802 | 0.358017 | 0.000945 | 0.001336 | 0.001121 |
| optional_test_convert_assign.test | RUN | 0.112934 | 0.274366 | 0.340622 | 0.001191 | 0.001209 | 0.001095 |
| optional_test_empty_braces.test | RUN | 0.113798 | 0.273931 | 0.353660 | 0.001310 | 0.001351 | 0.001121 |
| optional_test_make_optional.test | RUN | 0.155811 | 0.431324 | 0.546069 | 0.001494 | 0.001108 | 0.001002 |
| optional_test_flat_map.test | RUN | 0.168813 | 0.501905 | 0.621281 | 0.001277 | 0.001186 | 0.001051 |
| optional_test_hash.test | RUN | 0.138550 | 0.404183 | 0.432070 | 0.001136 | 0.001184 | 0.001143 |
| optional_test_map.test | RUN | 0.176163 | 0.481172 | 0.639948 | 0.001176 | 0.001156 | 0.001037 |
| optional_test_tie.test | RUN | 0.119464 | 0.314856 | 0.360431 | 0.001209 | 0.001234 | 0.001194 |
| optional_test_ranges_find.test | RUN | 0.107664 | 0.262083 | 0.331242 | 0.001250 | 0.001258 | 0.001019 |
| optional_test_ref_assign_portable_minimum.test | RUN | 0.146490 | 0.807659 | 0.484150 | 0.001242 | 0.001233 | 0.001139 |
| optional_test_ref_assign_mutable_int.test | RUN | 0.120191 | 0.334792 | 0.362775 | 0.001206 | 0.001290 | 0.001141 |
| optional_test_ref_assign_const_int.test | RUN | 0.115651 | 0.345576 | 0.369712 | 0.001217 | 0.001145 | 0.001304 |
| optional_test_ref_converting_ctor.test | RUN | 0.126815 | 0.485248 | 0.406118 | 0.001250 | 0.001211 | 0.001102 |
| optional_test_ref_convert_assign_non_int.test | RUN | 0.114838 | 0.319003 | 0.366546 | 0.001141 | 0.001257 | 0.001073 |
| optional_test_ref_convert_assign_mutable_int.test | RUN | 0.115530 | 0.293804 | 0.344518 | 0.001317 | 0.001319 | 0.001145 |
| optional_test_ref_convert_assign_const_int.test | RUN | 0.108722 | 0.291566 | 0.346885 | 0.001162 | 0.001187 | 0.001165 |
| optional_test_ref_portable_minimum.test | RUN | 0.528691 | 1.615890 | 1.237224 | 0.001391 | 0.001224 | 0.001101 |
| optional_test_ref_move.test | RUN | 0.119296 | 0.305173 | 0.364121 | 0.001303 | 0.001275 | 0.001222 |
| optional_test_ref_to_val.test | RUN | 0.150157 | 0.618165 | 0.513903 | 0.001227 | 0.001394 | 0.001180 |
| optional_test_inplace_factory.test | RUN | 0.142514 | 0.581642 | 0.458212 | 0.001263 | 0.001158 | 0.001069 |
| optional_test_io.test | RUN | 0.147258 | 0.647075 | 0.474749 | 0.001193 | 0.001217 | 0.001251 |
| optional_test_move.test | RUN | 0.136554 | 0.429150 | 0.422691 | 0.001236 | 0.001141 | 0.001101 |
| optional_test_noexcept_move.test | RUN | 0.081877 | 0.180297 | 0.208492 | 0.000520 | 0.000484 | 0.001128 |
| optional_test_cmp_none.test | RUN | 0.113609 | 0.293843 | 0.350541 | 0.001321 | 0.001258 | 0.001096 |
| optional_test_value_access.test | RUN | 0.137893 | 0.513231 | 0.461312 | 0.001218 | 0.001450 | 0.001147 |
| optional_test_emplace.test | RUN | 0.136596 | 0.495569 | 0.470203 | 0.001310 | 0.001130 | 0.001160 |
| optional_test_minimum_requirements.test | RUN | 0.122101 | 0.395632 | 0.412668 | 0.001152 | 0.001364 | 0.001140 |
| optional_test_msvc_bug_workaround.test | RUN | 0.111234 | 0.273908 | 0.337263 | 0.001262 | 0.001245 | 0.001124 |
| optional_test_member_T.test | RUN | 0.108156 | 0.266569 | 0.330393 | 0.001136 | 0.001370 | 0.001116 |
| optional_test_tc_base.test | RUN | 0.110972 | 0.267936 | 0.333480 | 0.001259 | 0.001159 | 0.001130 |
| optional_test_sfinae_friendly_ctor.test | COMPILE | 0.085499 | 0.185089 | 0.216992 | — | — | — |
| optional_test_path_assignment.test | COMPILE | 0.077994 | 0.183332 | 0.210423 | — | — | — |
| optional_test_fail_const_swap.test | COMPILE_FAIL | 0.072140 | 0.164415 | 0.193908 | — | — | — |
| optional_test_ref_convert_assign_const_int_prevented.test | COMPILE_FAIL | 0.102681 | 0.229453 | 0.298837 | — | — | — |
| optional_test_fail1.test | COMPILE_FAIL | 0.072043 | 0.166507 | 0.197890 | — | — | — |
| optional_test_fail3a.test | COMPILE_FAIL | 0.072251 | 0.168437 | 0.197190 | — | — | — |
| optional_test_fail3b.test | COMPILE_FAIL | 0.074881 | 0.164615 | 0.200804 | — | — | — |
| optional_test_ref_fail1.test | COMPILE_FAIL | 0.072522 | 0.168132 | 0.197710 | — | — | — |
| optional_test_ref_fail3.test | COMPILE_FAIL | 0.072409 | 0.162672 | 0.192650 | — | — | — |
| optional_test_ref_fail4.test | COMPILE_FAIL | 0.070362 | 0.164497 | 0.196342 | — | — | — |
| optional_test_ref_fail_convert_from_temporary_optional_T.test | COMPILE_FAIL | 0.072099 | 0.162249 | 0.194696 | — | — | — |
| optional_test_inplace_fail.test | COMPILE_FAIL | 0.120312 | 0.263432 | 0.338654 | — | — | — |
| optional_test_inplace_fail2.test | COMPILE_FAIL | 0.119913 | 0.266409 | 0.337861 | — | — | — |
| optional_test_fail_implicit_bool_convert.test | COMPILE_FAIL | 0.070493 | 0.167163 | 0.194293 | — | — | — |
| optional_test_fail_copying_a_moveable_type.test | COMPILE_FAIL | 0.073743 | 0.168782 | 0.199480 | — | — | — |
| optional_test_fail_optional_rvalue_ref.test | COMPILE_FAIL | 0.072568 | 0.160736 | 0.179652 | — | — | — |
| optional_test_ref_fail_init_from_Trefref.test | COMPILE_FAIL | 0.074981 | 0.163753 | 0.196870 | — | — | — |
| optional_test_ref_fail_init_from_Urefref.test | COMPILE_FAIL | 0.072522 | 0.167530 | 0.197345 | — | — | — |
| optional_test_ref_fail_assign_from_Trefref.test | COMPILE_FAIL | 0.071865 | 0.166281 | 0.188593 | — | — | — |
| optional_test_ref_fail_assign_from_Urefref.test | COMPILE_FAIL | 0.073540 | 0.164914 | 0.195455 | — | — | — |
| optional_test_fail_convert_from_null.test | COMPILE_FAIL | 0.072911 | 0.163591 | 0.194687 | — | — | — |
| optional_test_fail_explicit_convert_in_value_or.test | COMPILE_FAIL | 0.071454 | 0.163543 | 0.196414 | — | — | — |
| optional_test_fail_explicit_convert_in_value_or_call.test | COMPILE_FAIL | 0.070269 | 0.169081 | 0.191312 | — | — | — |
| optional_test_fail_io_without_io.test | COMPILE_FAIL | 0.098617 | 0.221067 | 0.289869 | — | — | — |
| optional_test_fail_none_io_without_io.test | COMPILE_FAIL | 0.078962 | 0.186588 | 0.239320 | — | — | — |
| optional_test_fail_convert_assign_of_enums.test | COMPILE_FAIL | 0.073953 | 0.164433 | 0.203848 | — | — | — |
| optional_test_static_properties.test | RUN | 0.173156 | 0.380462 | 0.503509 | 0.001113 | 0.001216 | 0.001086 |
| optional_test_maybe_uninitialized_warning.test | COMPILE | 0.076831 | 0.184729 | 0.215572 | — | — | — |
| optional_test_deleted_default_ctor.test | COMPILE | 0.078012 | 0.186663 | 0.220962 | — | — | — |
| optional_test_constructible_from_other.test | COMPILE | 0.074749 | 0.177140 | 0.205979 | — | — | — |
| optional_xconfig_NO_PROPER_ASSIGN_FROM_CONST_INT_pass.test | RUN | 0.089553 | 0.228833 | 0.280787 | 0.001477 | 0.001314 | 0.001275 |
| optional_xconfig_NO_PROPER_ASSIGN_FROM_CONST_INT_fail.test | RUN_FAIL | 0.087351 | 0.232553 | 0.286182 | 0.001196 | 0.001157 | 0.000847 |
| optional_xconfig_NO_PROPER_CONVERT_FROM_CONST_INT_pass.test | RUN | 0.089426 | 0.230193 | 0.280210 | 0.001010 | 0.001098 | 0.001032 |
| optional_xconfig_NO_PROPER_CONVERT_FROM_CONST_INT_fail.test | RUN_FAIL | 0.094119 | 0.233726 | 0.276873 | 0.001153 | 0.001239 | 0.001181 |
| optional_xconfig_NO_LEGAL_CONVERT_FROM_REF_pass.test | RUN | 0.069433 | 0.144652 | 0.194481 | 0.000940 | 0.000839 | 0.000772 |
| optional_xconfig_NO_LEGAL_CONVERT_FROM_REF_fail.test | COMPILE_FAIL | 0.041746 | 0.142623 | 0.181660 | — | — | — |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 1.001× | 0.998×, 1.003× | 1.002× |
| clang | 1.015× | 1.007×, 1.023× | 0.983× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1362 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/43822097733).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| optional_test.test | 10 | 0.000867s | 0.000881s | 0.000860s | byte equality observed |
| optional_test_assign.test | 10 | 0.000799s | 0.000837s | 0.000802s | byte equality observed |
| optional_test_cmp_none.test | 10 | 0.000806s | 0.000808s | 0.000814s | byte equality observed |
| optional_test_constructors.test | 10 | 0.000809s | 0.000830s | 0.000843s | byte equality observed |
| optional_test_conversions_from_U.test | 10 | 0.000805s | 0.000813s | 0.000831s | byte equality observed |
| optional_test_convert_assign.test | 10 | 0.000809s | 0.000828s | 0.000828s | byte equality observed |
| optional_test_convert_from_T.test | 10 | 0.000831s | 0.000820s | 0.000829s | byte equality observed |
| optional_test_emplace.test | 10 | 0.000847s | 0.000845s | 0.000836s | byte equality observed |
| optional_test_empty_braces.test | 10 | 0.000829s | 0.000807s | 0.000859s | byte equality observed |
| optional_test_flat_map.test | 10 | 0.000816s | 0.000819s | 0.000809s | byte equality observed |
| optional_test_hash.test | 10 | 0.000827s | 0.000844s | 0.000802s | byte equality observed |
| optional_test_inplace_factory.test | 10 | 0.000815s | 0.000813s | 0.000835s | byte equality observed |
| optional_test_io.test | 10 | 0.000829s | 0.000819s | 0.000842s | byte equality observed |
| optional_test_make_optional.test | 10 | 0.000812s | 0.000783s | 0.000838s | byte equality observed |
| optional_test_map.test | 10 | 0.000831s | 0.000828s | 0.000826s | byte equality observed |
| optional_test_member_T.test | 10 | 0.000798s | 0.000832s | 0.000818s | byte equality observed |
| optional_test_minimum_requirements.test | 10 | 0.000832s | 0.000853s | 0.000849s | byte equality observed |
| optional_test_move.test | 10 | 0.000794s | 0.000807s | 0.000790s | byte equality observed |
| optional_test_msvc_bug_workaround.test | 10 | 0.000799s | 0.000813s | 0.000796s | byte equality observed |
| optional_test_noexcept_move.test | 10 | 0.000362s | 0.000362s | 0.000777s | byte equality observed |
| optional_test_ranges_find.test | 10 | 0.000826s | 0.000810s | 0.000800s | byte equality observed |
| optional_test_ref_assign_const_int.test | 10 | 0.000843s | 0.000806s | 0.000797s | byte equality observed |
| optional_test_ref_assign_mutable_int.test | 10 | 0.000836s | 0.000813s | 0.000811s | byte equality observed |
| optional_test_ref_assign_portable_minimum.test | 10 | 0.000834s | 0.000802s | 0.000832s | byte equality observed |
| optional_test_ref_convert_assign_const_int.test | 10 | 0.000825s | 0.000841s | 0.000831s | byte equality observed |
| optional_test_ref_convert_assign_mutable_int.test | 10 | 0.000824s | 0.000817s | 0.000845s | byte equality observed |
| optional_test_ref_convert_assign_non_int.test | 10 | 0.000832s | 0.000799s | 0.000801s | byte equality observed |
| optional_test_ref_converting_ctor.test | 10 | 0.000854s | 0.000853s | 0.000815s | byte equality observed |
| optional_test_ref_move.test | 10 | 0.000828s | 0.000847s | 0.000812s | byte equality observed |
| optional_test_ref_portable_minimum.test | 10 | 0.000852s | 0.000839s | 0.000856s | byte equality observed |
| optional_test_ref_to_val.test | 10 | 0.000831s | 0.000832s | 0.000839s | byte equality observed |
| optional_test_static_properties.test | 10 | 0.000809s | 0.000823s | 0.000817s | byte equality observed |
| optional_test_swap.test | 10 | 0.000826s | 0.000812s | 0.000842s | byte equality observed |
| optional_test_tc_base.test | 10 | 0.000818s | 0.000815s | 0.000801s | byte equality observed |
| optional_test_tie.test | 10 | 0.000817s | 0.000857s | 0.000822s | byte equality observed |
| optional_test_value_access.test | 10 | 0.000880s | 0.000884s | 0.000846s | byte equality observed |
| optional_xconfig_NO_LEGAL_CONVERT_FROM_REF_pass.test | 10 | 0.000812s | 0.000823s | 0.000786s | byte equality observed |
| optional_xconfig_NO_PROPER_ASSIGN_FROM_CONST_INT_pass.test | 10 | 0.000810s | 0.000814s | 0.000829s | byte equality observed |
| optional_xconfig_NO_PROPER_CONVERT_FROM_CONST_INT_pass.test | 10 | 0.000807s | 0.000796s | 0.000822s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/43822097733).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
