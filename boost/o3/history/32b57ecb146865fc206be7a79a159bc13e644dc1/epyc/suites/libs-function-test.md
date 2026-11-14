# libs/function/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| function_test.test | RUN | 0.233901 | 1.152797 | 0.947563 | 0.001357 | 0.001648 | 0.001346 |
| function_test_no_rtti.test | RUN | 0.228553 | 1.129870 | 0.960700 | 0.001509 | 0.002981 | 0.001516 |
| function_n_test.test | RUN | 0.213209 | 0.935536 | 0.806341 | 0.001430 | 0.001638 | 0.001609 |
| allocator_test.test | RUN | 0.178007 | 0.526092 | 0.538491 | 0.001674 | 0.001598 | 0.001651 |
| stateless_test.test | RUN | 0.133045 | 0.298612 | 0.342886 | 0.001625 | 0.001470 | 0.001682 |
| lambda_test.test | RUN | 0.285141 | 0.749291 | 0.761699 | 0.001862 | 0.001489 | 0.001487 |
| function_test_fail1.test | COMPILE_FAIL | 0.099765 | 0.235755 | 0.231696 | — | — | — |
| function_test_fail2.test | COMPILE_FAIL | 0.102585 | 0.201434 | 0.238589 | — | — | — |
| function_30.test | COMPILE | 0.099483 | 0.202772 | 0.250468 | — | — | — |
| function_30_repeat.test | COMPILE | 0.106008 | 0.201859 | 0.253813 | — | — | — |
| function_arith_cxx98.test | RUN | 0.140343 | 0.352721 | 0.375714 | 0.001704 | 0.001454 | 0.001408 |
| function_arith_portable.test | RUN | 0.138761 | 0.331233 | 0.359522 | 0.001440 | 0.001334 | 0.001590 |
| sum_avg_cxx98.test | RUN | 0.132390 | 0.293425 | 0.347199 | 0.001332 | 0.001428 | 0.001531 |
| sum_avg_portable.test | RUN | 0.129800 | 0.257380 | 0.331802 | 0.001698 | 0.001607 | 0.001500 |
| mem_fun_cxx98.test | RUN | 0.145296 | 0.405482 | 0.411466 | 0.001191 | 0.001475 | 0.001539 |
| mem_fun_portable.test | RUN | 0.138969 | 0.367866 | 0.390513 | 0.001307 | 0.001632 | 0.001503 |
| std_bind_cxx98.test | RUN | 0.130965 | 0.347115 | 0.372054 | 0.001441 | 0.001320 | 0.001352 |
| std_bind_portable.test | RUN | 0.140016 | 0.318926 | 0.335892 | 0.001711 | 0.001682 | 0.001490 |
| function_ref_cxx98.test | RUN | 0.126144 | 0.286449 | 0.336202 | 0.001714 | 0.001345 | 0.001480 |
| function_ref_portable.test | RUN | 0.123974 | 0.258280 | 0.323080 | 0.001261 | 0.001581 | 0.001251 |
| contains_test.test | RUN | 0.154868 | 0.540835 | 0.520379 | 0.001558 | 0.001678 | 0.001452 |
| contains2_test.test | RUN | 0.146200 | 0.414992 | 0.411081 | 0.001765 | 0.001638 | 0.001223 |
| nothrow_swap.test | RUN | 0.143834 | 0.406204 | 0.390563 | 0.001792 | 0.001377 | 0.001543 |
| rvalues_test.test | RUN | 0.158191 | 0.469214 | 0.451544 | 0.001707 | 0.001452 | 0.001528 |
| function_typeof_test.test | COMPILE | 0.107964 | 0.202450 | 0.242365 | — | — | — |
| result_arg_types_test.test | RUN | 0.156881 | 0.310110 | 0.405066 | 0.001772 | 0.001570 | 0.001413 |
| result_arg_n_types_test.test | RUN | 0.164760 | 0.343365 | 0.468320 | 0.001470 | 0.001556 | 0.001535 |
| test_bad_function_call_shared.test | RUN | 0.131817 | 0.286043 | 0.328759 | 0.001716 | 0.001558 | 0.001865 |
| test_bad_function_call_static.test | RUN | 0.126688 | 0.276930 | 0.328315 | 0.001400 | 0.001606 | 0.001459 |
| mixed_cxxstd_shared.test | RUN | 0.134750 | 0.337619 | 0.382635 | 0.001852 | 0.001516 | 0.001596 |
| mixed_cxxstd_static.test | RUN | 0.141568 | 0.341229 | 0.398031 | 0.001407 | 0.001584 | 0.001493 |
| mixed_cxxstd_shared_0x.test | RUN | 0.142361 | 0.338234 | 0.370395 | 0.001658 | 0.002560 | 0.001752 |
| mixed_cxxstd_static_0x.test | RUN | 0.141927 | 0.350716 | 0.378451 | 0.001434 | 0.001700 | 0.001471 |
| mixed_cxxstd_shared_14.test | RUN | 0.143013 | 0.342975 | 0.378542 | 0.001518 | 0.001660 | 0.001897 |
| mixed_cxxstd_static_14.test | RUN | 0.139955 | 0.344169 | 0.375031 | 0.001770 | 0.001708 | 0.001695 |
| return_function_shared.test | RUN | 0.139587 | 0.342941 | 0.378351 | 0.001824 | 0.001627 | 0.001660 |
| return_function_static.test | RUN | 0.138613 | 0.342516 | 0.387802 | 0.001450 | 0.001604 | 0.001542 |
| return_function_shared_0x.test | RUN | 0.141387 | 0.341463 | 0.384016 | 0.001578 | 0.001865 | 0.001593 |
| return_function_static_0x.test | RUN | 0.142191 | 0.345692 | 0.374943 | 0.001788 | 0.001665 | 0.001410 |
| return_function_shared_14.test | RUN | 0.143523 | 0.355226 | 0.364390 | 0.001784 | 0.001498 | 0.001421 |
| return_function_static_14.test | RUN | 0.138548 | 0.342879 | 0.360314 | 0.001490 | 0.001605 | 0.001440 |
| quick.test | RUN | 0.142523 | 0.345105 | 0.363583 | 0.001807 | 0.001406 | 0.001524 |
| issue_42.test | COMPILE | 0.110922 | 0.227598 | 0.263639 | — | — | — |
| fn_eq_bind_test.test | RUN | 0.184795 | 0.472073 | 0.553839 | 0.001579 | 0.001586 | 0.001292 |
| contains_test_no_rtti.test | RUN | 0.167733 | 0.538162 | 0.527590 | 0.001308 | 0.001679 | 0.001428 |
| contains2_test_no_rtti.test | RUN | 0.149995 | 0.393091 | 0.411996 | 0.001485 | 0.001180 | 0.001091 |
| contains3_test.test | RUN | 0.142850 | 0.306918 | 0.360887 | 0.001766 | 0.001481 | 0.001413 |
| contains3_test_no_rtti.test | RUN | 0.104117 | 0.259010 | 0.237093 | 0.001319 | 0.001113 | 0.001062 |
| issue_53.test | COMPILE | 0.086173 | 0.177914 | 0.176607 | — | — | — |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.992× | 0.987×, 0.996× | 1.003× |
| clang | 0.991× | 0.981×, 1.000× | 0.980× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1364 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43639138948).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| allocator_test.test | 10 | 0.000897s | 0.000891s | 0.000870s | byte equality observed |
| contains2_test.test | 10 | 0.000911s | 0.000922s | 0.000896s | byte equality observed |
| contains2_test_no_rtti.test | 10 | 0.000904s | 0.000919s | 0.000896s | byte equality observed |
| contains3_test.test | 10 | 0.000901s | 0.000895s | 0.000897s | byte equality observed |
| contains3_test_no_rtti.test | 10 | 0.000907s | 0.000906s | 0.000904s | byte equality observed |
| contains_test.test | 10 | 0.000924s | 0.000895s | 0.000912s | byte equality observed |
| contains_test_no_rtti.test | 10 | 0.000909s | 0.000894s | 0.000891s | byte equality observed |
| fn_eq_bind_test.test | 10 | 0.000904s | 0.000899s | 0.000886s | byte equality observed |
| function_arith_cxx98.test | 10 | 0.000924s | 0.000909s | 0.000914s | byte equality observed |
| function_arith_portable.test | 10 | 0.000915s | 0.000899s | 0.000908s | byte equality observed |
| function_n_test.test | 10 | 0.000919s | 0.000912s | 0.000901s | byte equality observed |
| function_ref_cxx98.test | 10 | 0.000890s | 0.000893s | 0.000891s | byte equality observed |
| function_ref_portable.test | 10 | 0.000892s | 0.000897s | 0.000868s | byte equality observed |
| function_test.test | 10 | 0.000956s | 0.000965s | 0.000929s | byte equality observed |
| function_test_no_rtti.test | 10 | 0.000957s | 0.000991s | 0.000952s | byte equality observed |
| lambda_test.test | 10 | 0.000910s | 0.000922s | 0.000908s | byte equality observed |
| mem_fun_cxx98.test | 10 | 0.000900s | 0.000944s | 0.000901s | byte equality observed |
| mem_fun_portable.test | 10 | 0.000904s | 0.000905s | 0.000882s | byte equality observed |
| mixed_cxxstd_shared.test | 10 | 0.000974s | 0.000973s | 0.000957s | byte equality observed |
| mixed_cxxstd_shared_0x.test | 10 | 0.000985s | 0.000966s | 0.000985s | byte equality observed |
| mixed_cxxstd_shared_14.test | 10 | 0.000969s | 0.000952s | 0.000964s | byte equality observed |
| mixed_cxxstd_static.test | 10 | 0.000922s | 0.000890s | 0.000905s | byte equality observed |
| mixed_cxxstd_static_0x.test | 10 | 0.000893s | 0.000897s | 0.000894s | byte equality observed |
| mixed_cxxstd_static_14.test | 10 | 0.000902s | 0.000904s | 0.000874s | byte equality observed |
| nothrow_swap.test | 10 | 0.000907s | 0.000904s | 0.000887s | byte equality observed |
| quick.test | 10 | 0.000889s | 0.000916s | 0.000882s | byte equality observed |
| result_arg_n_types_test.test | 10 | 0.000908s | 0.000938s | 0.000868s | byte equality observed |
| result_arg_types_test.test | 10 | 0.000897s | 0.000893s | 0.000881s | byte equality observed |
| return_function_shared.test | 10 | 0.000964s | 0.001001s | 0.000966s | byte equality observed |
| return_function_shared_0x.test | 10 | 0.000985s | 0.000965s | 0.000985s | byte equality observed |
| return_function_shared_14.test | 10 | 0.000978s | 0.000986s | 0.000975s | byte equality observed |
| return_function_static.test | 10 | 0.000903s | 0.000881s | 0.000883s | byte equality observed |
| return_function_static_0x.test | 10 | 0.000906s | 0.000898s | 0.000913s | byte equality observed |
| return_function_static_14.test | 10 | 0.000906s | 0.000874s | 0.000876s | byte equality observed |
| rvalues_test.test | 10 | 0.000892s | 0.000902s | 0.000890s | byte equality observed |
| stateless_test.test | 10 | 0.000913s | 0.000873s | 0.000887s | byte equality observed |
| std_bind_cxx98.test | 10 | 0.000882s | 0.000853s | 0.000866s | byte equality observed |
| std_bind_portable.test | 10 | 0.000889s | 0.000873s | 0.000869s | byte equality observed |
| sum_avg_cxx98.test | 10 | 0.000878s | 0.000857s | 0.000870s | byte equality observed |
| sum_avg_portable.test | 10 | 0.000855s | 0.000861s | 0.000878s | byte equality observed |
| test_bad_function_call_shared.test | 10 | 0.000992s | 0.000969s | 0.000998s | byte equality observed |
| test_bad_function_call_static.test | 10 | 0.000931s | 0.000905s | 0.000908s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43639138948).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
