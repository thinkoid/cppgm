# libs/optional/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| optional_test.test | RUN | 0.283509 | 1.710332 | 0.969789 | 0.001465 | 0.001480 | 0.001425 |
| optional_test_assign.test | RUN | 0.143431 | 0.359748 | 0.441100 | 0.001667 | 0.001488 | 0.001396 |
| optional_test_swap.test | RUN | 0.153017 | 0.447047 | 0.481849 | 0.001446 | 0.001386 | 0.001231 |
| optional_test_constexpr.test | COMPILE | 0.102381 | 0.242701 | 0.269251 | — | — | — |
| optional_test_wuninitialized.test | COMPILE | 0.150841 | 0.590501 | 0.466109 | — | — | — |
| optional_test_fwd_header.test | COMPILE | 0.098404 | 0.231215 | 0.267773 | — | — | — |
| optional_test_conversions_from_U.test | RUN | 0.161305 | 0.459561 | 0.535111 | 0.001398 | 0.001491 | 0.001499 |
| optional_test_constructors.test | RUN | 0.339664 | 1.712978 | 1.371890 | 0.001375 | 0.001389 | 0.001380 |
| optional_test_convert_from_T.test | RUN | 0.147735 | 0.370543 | 0.458594 | 0.001392 | 0.001430 | 0.001409 |
| optional_test_convert_assign.test | RUN | 0.146728 | 0.364478 | 0.459549 | 0.001360 | 0.001379 | 0.001415 |
| optional_test_empty_braces.test | RUN | 0.143663 | 0.356894 | 0.423616 | 0.001486 | 0.001444 | 0.001356 |
| optional_test_make_optional.test | RUN | 0.201722 | 0.560544 | 0.688774 | 0.001593 | 0.001466 | 0.001365 |
| optional_test_flat_map.test | RUN | 0.218875 | 0.654759 | 0.781258 | 0.001463 | 0.001378 | 0.001264 |
| optional_test_hash.test | RUN | 0.183540 | 0.514780 | 0.568164 | 0.001386 | 0.001375 | 0.001190 |
| optional_test_map.test | RUN | 0.227633 | 0.622219 | 0.819212 | 0.001470 | 0.001336 | 0.001409 |
| optional_test_tie.test | RUN | 0.155944 | 0.400435 | 0.476263 | 0.001141 | 0.001311 | 0.001350 |
| optional_test_ranges_find.test | RUN | 0.140860 | 0.343051 | 0.424328 | 0.001467 | 0.001488 | 0.001373 |
| optional_test_ref_assign_portable_minimum.test | RUN | 0.182869 | 1.046530 | 0.623197 | 0.001306 | 0.001336 | 0.001363 |
| optional_test_ref_assign_mutable_int.test | RUN | 0.150060 | 0.437625 | 0.465717 | 0.001430 | 0.001511 | 0.001388 |
| optional_test_ref_assign_const_int.test | RUN | 0.153295 | 0.453933 | 0.473946 | 0.001232 | 0.001460 | 0.001334 |
| optional_test_ref_converting_ctor.test | RUN | 0.165188 | 0.618985 | 0.516865 | 0.001382 | 0.001541 | 0.001286 |
| optional_test_ref_convert_assign_non_int.test | RUN | 0.151499 | 0.416757 | 0.460981 | 0.001404 | 0.001524 | 0.001351 |
| optional_test_ref_convert_assign_mutable_int.test | RUN | 0.147883 | 0.374864 | 0.439738 | 0.001421 | 0.001482 | 0.001337 |
| optional_test_ref_convert_assign_const_int.test | RUN | 0.142616 | 0.376413 | 0.429027 | 0.001442 | 0.001437 | 0.001357 |
| optional_test_ref_portable_minimum.test | RUN | 0.674526 | 2.049230 | 1.613860 | 0.001421 | 0.001393 | 0.001343 |
| optional_test_ref_move.test | RUN | 0.150200 | 0.399198 | 0.472669 | 0.001322 | 0.001441 | 0.001377 |
| optional_test_ref_to_val.test | RUN | 0.179638 | 0.812347 | 0.653955 | 0.001387 | 0.001500 | 0.001455 |
| optional_test_inplace_factory.test | RUN | 0.190312 | 0.749059 | 0.602190 | 0.001385 | 0.001337 | 0.001249 |
| optional_test_io.test | RUN | 0.183298 | 0.825993 | 0.601795 | 0.001328 | 0.001461 | 0.001312 |
| optional_test_move.test | RUN | 0.169321 | 0.555950 | 0.534436 | 0.001440 | 0.001480 | 0.001311 |
| optional_test_noexcept_move.test | RUN | 0.102411 | 0.238617 | 0.277903 | 0.000572 | 0.000619 | 0.001235 |
| optional_test_cmp_none.test | RUN | 0.143387 | 0.383538 | 0.440509 | 0.001400 | 0.001488 | 0.001350 |
| optional_test_value_access.test | RUN | 0.175644 | 0.660983 | 0.580308 | 0.001324 | 0.001438 | 0.001391 |
| optional_test_emplace.test | RUN | 0.180247 | 0.649785 | 0.603819 | 0.001368 | 0.001331 | 0.001363 |
| optional_test_minimum_requirements.test | RUN | 0.162870 | 0.518787 | 0.542045 | 0.001375 | 0.001510 | 0.001390 |
| optional_test_msvc_bug_workaround.test | RUN | 0.145394 | 0.353022 | 0.426802 | 0.001320 | 0.001403 | 0.001327 |
| optional_test_member_T.test | RUN | 0.142282 | 0.348074 | 0.437046 | 0.001279 | 0.001460 | 0.001340 |
| optional_test_tc_base.test | RUN | 0.141826 | 0.353990 | 0.437141 | 0.001404 | 0.001482 | 0.001310 |
| optional_test_sfinae_friendly_ctor.test | COMPILE | 0.105663 | 0.242110 | 0.271068 | — | — | — |
| optional_test_path_assignment.test | COMPILE | 0.098365 | 0.237195 | 0.255226 | — | — | — |
| optional_test_fail_const_swap.test | COMPILE_FAIL | 0.092062 | 0.218615 | 0.234224 | — | — | — |
| optional_test_ref_convert_assign_const_int_prevented.test | COMPILE_FAIL | 0.126289 | 0.304376 | 0.388536 | — | — | — |
| optional_test_fail1.test | COMPILE_FAIL | 0.094368 | 0.224480 | 0.244752 | — | — | — |
| optional_test_fail3a.test | COMPILE_FAIL | 0.092908 | 0.225987 | 0.255385 | — | — | — |
| optional_test_fail3b.test | COMPILE_FAIL | 0.093730 | 0.232640 | 0.252540 | — | — | — |
| optional_test_ref_fail1.test | COMPILE_FAIL | 0.093490 | 0.222678 | 0.252950 | — | — | — |
| optional_test_ref_fail3.test | COMPILE_FAIL | 0.091738 | 0.223099 | 0.245127 | — | — | — |
| optional_test_ref_fail4.test | COMPILE_FAIL | 0.094603 | 0.216623 | 0.249751 | — | — | — |
| optional_test_ref_fail_convert_from_temporary_optional_T.test | COMPILE_FAIL | 0.092681 | 0.222060 | 0.250891 | — | — | — |
| optional_test_inplace_fail.test | COMPILE_FAIL | 0.155918 | 0.348115 | 0.438705 | — | — | — |
| optional_test_inplace_fail2.test | COMPILE_FAIL | 0.155030 | 0.353713 | 0.439489 | — | — | — |
| optional_test_fail_implicit_bool_convert.test | COMPILE_FAIL | 0.094753 | 0.216456 | 0.247300 | — | — | — |
| optional_test_fail_copying_a_moveable_type.test | COMPILE_FAIL | 0.092042 | 0.226032 | 0.255965 | — | — | — |
| optional_test_fail_optional_rvalue_ref.test | COMPILE_FAIL | 0.090873 | 0.217343 | 0.248352 | — | — | — |
| optional_test_ref_fail_init_from_Trefref.test | COMPILE_FAIL | 0.090965 | 0.218976 | 0.253619 | — | — | — |
| optional_test_ref_fail_init_from_Urefref.test | COMPILE_FAIL | 0.090653 | 0.223620 | 0.247244 | — | — | — |
| optional_test_ref_fail_assign_from_Trefref.test | COMPILE_FAIL | 0.094640 | 0.219223 | 0.254219 | — | — | — |
| optional_test_ref_fail_assign_from_Urefref.test | COMPILE_FAIL | 0.090762 | 0.212755 | 0.250790 | — | — | — |
| optional_test_fail_convert_from_null.test | COMPILE_FAIL | 0.082084 | 0.213533 | 0.247498 | — | — | — |
| optional_test_fail_explicit_convert_in_value_or.test | COMPILE_FAIL | 0.089460 | 0.219079 | 0.248028 | — | — | — |
| optional_test_fail_explicit_convert_in_value_or_call.test | COMPILE_FAIL | 0.090031 | 0.219123 | 0.243775 | — | — | — |
| optional_test_fail_io_without_io.test | COMPILE_FAIL | 0.125849 | 0.291413 | 0.370845 | — | — | — |
| optional_test_fail_none_io_without_io.test | COMPILE_FAIL | 0.097571 | 0.241180 | 0.303732 | — | — | — |
| optional_test_fail_convert_assign_of_enums.test | COMPILE_FAIL | 0.092193 | 0.224694 | 0.255180 | — | — | — |
| optional_test_static_properties.test | RUN | 0.215482 | 0.502907 | 0.640136 | 0.001294 | 0.001380 | 0.001406 |
| optional_test_maybe_uninitialized_warning.test | COMPILE | 0.096047 | 0.242257 | 0.271423 | — | — | — |
| optional_test_deleted_default_ctor.test | COMPILE | 0.097687 | 0.242400 | 0.270969 | — | — | — |
| optional_test_constructible_from_other.test | COMPILE | 0.093817 | 0.228314 | 0.255116 | — | — | — |
| optional_xconfig_NO_PROPER_ASSIGN_FROM_CONST_INT_pass.test | RUN | 0.113333 | 0.299309 | 0.370761 | 0.001401 | 0.001432 | 0.001324 |
| optional_xconfig_NO_PROPER_ASSIGN_FROM_CONST_INT_fail.test | RUN_FAIL | 0.112629 | 0.299276 | 0.356345 | 0.001402 | 0.001322 | 0.001358 |
| optional_xconfig_NO_PROPER_CONVERT_FROM_CONST_INT_pass.test | RUN | 0.113381 | 0.298316 | 0.367058 | 0.001288 | 0.001302 | 0.001261 |
| optional_xconfig_NO_PROPER_CONVERT_FROM_CONST_INT_fail.test | RUN_FAIL | 0.112699 | 0.303280 | 0.347160 | 0.000906 | 0.001032 | 0.001072 |
| optional_xconfig_NO_LEGAL_CONVERT_FROM_REF_pass.test | RUN | 0.094406 | 0.195910 | 0.266596 | 0.000939 | 0.001010 | 0.001020 |
| optional_xconfig_NO_LEGAL_CONVERT_FROM_REF_fail.test | COMPILE_FAIL | 0.056876 | 0.179814 | 0.259565 | — | — | — |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 1.004× | 1.012×, 0.996× | 0.997× |
| clang | 1.019× | 1.012×, 1.026× | 0.990× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1360 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43654890423).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| optional_test.test | 10 | 0.001061s | 0.001038s | 0.001028s | byte equality observed |
| optional_test_assign.test | 10 | 0.000963s | 0.000965s | 0.000977s | byte equality observed |
| optional_test_cmp_none.test | 10 | 0.000966s | 0.000959s | 0.000976s | byte equality observed |
| optional_test_constructors.test | 10 | 0.000998s | 0.000986s | 0.000966s | byte equality observed |
| optional_test_conversions_from_U.test | 10 | 0.000965s | 0.000969s | 0.000987s | byte equality observed |
| optional_test_convert_assign.test | 10 | 0.000970s | 0.000964s | 0.000963s | byte equality observed |
| optional_test_convert_from_T.test | 10 | 0.000972s | 0.001030s | 0.000938s | byte equality observed |
| optional_test_emplace.test | 10 | 0.000987s | 0.001017s | 0.000972s | byte equality observed |
| optional_test_empty_braces.test | 10 | 0.000989s | 0.001010s | 0.000952s | byte equality observed |
| optional_test_flat_map.test | 10 | 0.000990s | 0.000987s | 0.000941s | byte equality observed |
| optional_test_hash.test | 10 | 0.000972s | 0.000998s | 0.000993s | byte equality observed |
| optional_test_inplace_factory.test | 10 | 0.000962s | 0.000996s | 0.000995s | byte equality observed |
| optional_test_io.test | 10 | 0.000997s | 0.001057s | 0.001003s | byte equality observed |
| optional_test_make_optional.test | 10 | 0.000967s | 0.000982s | 0.000982s | byte equality observed |
| optional_test_map.test | 10 | 0.000978s | 0.000970s | 0.000993s | byte equality observed |
| optional_test_member_T.test | 10 | 0.000969s | 0.000981s | 0.001015s | byte equality observed |
| optional_test_minimum_requirements.test | 10 | 0.001006s | 0.001014s | 0.001024s | byte equality observed |
| optional_test_move.test | 10 | 0.000942s | 0.001012s | 0.000996s | byte equality observed |
| optional_test_msvc_bug_workaround.test | 10 | 0.000973s | 0.000963s | 0.000971s | byte equality observed |
| optional_test_noexcept_move.test | 10 | 0.000426s | 0.000421s | 0.000941s | byte equality observed |
| optional_test_ranges_find.test | 10 | 0.000977s | 0.000987s | 0.000993s | byte equality observed |
| optional_test_ref_assign_const_int.test | 10 | 0.000958s | 0.001030s | 0.001023s | byte equality observed |
| optional_test_ref_assign_mutable_int.test | 10 | 0.000974s | 0.000967s | 0.000997s | byte equality observed |
| optional_test_ref_assign_portable_minimum.test | 10 | 0.000986s | 0.000983s | 0.000969s | byte equality observed |
| optional_test_ref_convert_assign_const_int.test | 10 | 0.000980s | 0.001010s | 0.000981s | byte equality observed |
| optional_test_ref_convert_assign_mutable_int.test | 10 | 0.000965s | 0.000979s | 0.001003s | byte equality observed |
| optional_test_ref_convert_assign_non_int.test | 10 | 0.000975s | 0.000975s | 0.000978s | byte equality observed |
| optional_test_ref_converting_ctor.test | 10 | 0.001000s | 0.000969s | 0.000987s | byte equality observed |
| optional_test_ref_move.test | 10 | 0.001005s | 0.000954s | 0.001010s | byte equality observed |
| optional_test_ref_portable_minimum.test | 10 | 0.001026s | 0.000970s | 0.001007s | byte equality observed |
| optional_test_ref_to_val.test | 10 | 0.000968s | 0.001016s | 0.000934s | byte equality observed |
| optional_test_static_properties.test | 10 | 0.000957s | 0.000991s | 0.000991s | byte equality observed |
| optional_test_swap.test | 10 | 0.001012s | 0.000968s | 0.000956s | byte equality observed |
| optional_test_tc_base.test | 10 | 0.000969s | 0.000988s | 0.000966s | byte equality observed |
| optional_test_tie.test | 10 | 0.000975s | 0.000992s | 0.000943s | byte equality observed |
| optional_test_value_access.test | 10 | 0.001037s | 0.001065s | 0.001042s | byte equality observed |
| optional_xconfig_NO_LEGAL_CONVERT_FROM_REF_pass.test | 10 | 0.000957s | 0.000939s | 0.000928s | byte equality observed |
| optional_xconfig_NO_PROPER_ASSIGN_FROM_CONST_INT_pass.test | 10 | 0.000963s | 0.000987s | 0.000951s | byte equality observed |
| optional_xconfig_NO_PROPER_CONVERT_FROM_CONST_INT_pass.test | 10 | 0.000956s | 0.000969s | 0.000955s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43654890423).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
