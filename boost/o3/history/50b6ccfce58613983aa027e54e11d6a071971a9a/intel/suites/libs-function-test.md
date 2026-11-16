# libs/function/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| function_test.test | RUN | 0.199939 | 1.135350 | 0.868809 | 0.001060 | 0.001124 | 0.000999 |
| function_test_no_rtti.test | RUN | 0.201292 | 1.127452 | 0.889144 | 0.001076 | 0.001124 | 0.001061 |
| function_n_test.test | RUN | 0.190235 | 0.920271 | 0.737036 | 0.001028 | 0.001071 | 0.001032 |
| allocator_test.test | RUN | 0.149132 | 0.514338 | 0.468439 | 0.001058 | 0.001093 | 0.001061 |
| stateless_test.test | RUN | 0.106388 | 0.261542 | 0.304102 | 0.001068 | 0.001093 | 0.000850 |
| lambda_test.test | RUN | 0.233171 | 0.668783 | 0.649561 | 0.001011 | 0.001142 | 0.001052 |
| function_test_fail1.test | COMPILE_FAIL | 0.081223 | 0.184872 | 0.191388 | — | — | — |
| function_test_fail2.test | COMPILE_FAIL | 0.082144 | 0.178021 | 0.197263 | — | — | — |
| function_30.test | COMPILE | 0.083716 | 0.191380 | 0.216839 | — | — | — |
| function_30_repeat.test | COMPILE | 0.086110 | 0.187085 | 0.208735 | — | — | — |
| function_arith_cxx98.test | RUN | 0.110953 | 0.332343 | 0.330802 | 0.001084 | 0.001092 | 0.000947 |
| function_arith_portable.test | RUN | 0.113508 | 0.304755 | 0.298767 | 0.001049 | 0.001074 | 0.001025 |
| sum_avg_cxx98.test | RUN | 0.104990 | 0.268844 | 0.295215 | 0.001007 | 0.001059 | 0.001080 |
| sum_avg_portable.test | RUN | 0.103730 | 0.239045 | 0.282295 | 0.001051 | 0.001012 | 0.001001 |
| mem_fun_cxx98.test | RUN | 0.124140 | 0.384784 | 0.362428 | 0.001069 | 0.001062 | 0.000965 |
| mem_fun_portable.test | RUN | 0.123766 | 0.347163 | 0.355059 | 0.001088 | 0.001057 | 0.001079 |
| std_bind_cxx98.test | RUN | 0.115337 | 0.319801 | 0.329400 | 0.000962 | 0.001058 | 0.001029 |
| std_bind_portable.test | RUN | 0.111011 | 0.295322 | 0.298537 | 0.001031 | 0.001025 | 0.001089 |
| function_ref_cxx98.test | RUN | 0.105093 | 0.266513 | 0.289638 | 0.000946 | 0.001060 | 0.001013 |
| function_ref_portable.test | RUN | 0.106821 | 0.237842 | 0.277123 | 0.001031 | 0.001060 | 0.000977 |
| contains_test.test | RUN | 0.135582 | 0.511691 | 0.451963 | 0.001003 | 0.001070 | 0.000991 |
| contains2_test.test | RUN | 0.120803 | 0.366982 | 0.350758 | 0.001104 | 0.001010 | 0.000967 |
| nothrow_swap.test | RUN | 0.115016 | 0.355954 | 0.340088 | 0.001015 | 0.001110 | 0.001004 |
| rvalues_test.test | RUN | 0.130421 | 0.426770 | 0.397652 | 0.001007 | 0.001076 | 0.001037 |
| function_typeof_test.test | COMPILE | 0.083919 | 0.184769 | 0.214781 | — | — | — |
| result_arg_types_test.test | RUN | 0.119638 | 0.291421 | 0.351529 | 0.001074 | 0.000964 | 0.000981 |
| result_arg_n_types_test.test | RUN | 0.133353 | 0.314847 | 0.419874 | 0.001032 | 0.001055 | 0.000925 |
| test_bad_function_call_shared.test | RUN | 0.105864 | 0.264250 | 0.294939 | 0.001195 | 0.001191 | 0.001149 |
| test_bad_function_call_static.test | RUN | 0.105972 | 0.265611 | 0.292685 | 0.001051 | 0.001114 | 0.001087 |
| mixed_cxxstd_shared.test | RUN | 0.113823 | 0.314790 | 0.328507 | 0.001078 | 0.001111 | 0.001164 |
| mixed_cxxstd_static.test | RUN | 0.114554 | 0.317969 | 0.332736 | 0.001108 | 0.001049 | 0.000999 |
| mixed_cxxstd_shared_0x.test | RUN | 0.112981 | 0.310310 | 0.333590 | 0.001147 | 0.001160 | 0.001075 |
| mixed_cxxstd_static_0x.test | RUN | 0.113067 | 0.311991 | 0.336228 | 0.001095 | 0.001090 | 0.001018 |
| mixed_cxxstd_shared_14.test | RUN | 0.114109 | 0.311412 | 0.328108 | 0.001067 | 0.001053 | 0.001077 |
| mixed_cxxstd_static_14.test | RUN | 0.113356 | 0.316339 | 0.328082 | 0.001041 | 0.001052 | 0.000976 |
| return_function_shared.test | RUN | 0.113574 | 0.323860 | 0.326840 | 0.001159 | 0.001064 | 0.001112 |
| return_function_static.test | RUN | 0.111113 | 0.319774 | 0.328035 | 0.001082 | 0.001088 | 0.001018 |
| return_function_shared_0x.test | RUN | 0.114542 | 0.318837 | 0.328901 | 0.001081 | 0.001181 | 0.001125 |
| return_function_static_0x.test | RUN | 0.111245 | 0.315319 | 0.324363 | 0.001129 | 0.001093 | 0.001036 |
| return_function_shared_14.test | RUN | 0.111125 | 0.323646 | 0.324125 | 0.001128 | 0.001151 | 0.001173 |
| return_function_static_14.test | RUN | 0.112376 | 0.318438 | 0.322656 | 0.001086 | 0.001017 | 0.000951 |
| quick.test | RUN | 0.113383 | 0.317802 | 0.317078 | 0.001113 | 0.001052 | 0.001082 |
| issue_42.test | COMPILE | 0.086554 | 0.201192 | 0.216580 | — | — | — |
| fn_eq_bind_test.test | RUN | 0.148144 | 0.419461 | 0.463591 | 0.001074 | 0.000946 | 0.001002 |
| contains_test_no_rtti.test | RUN | 0.134463 | 0.494422 | 0.452600 | 0.001056 | 0.001313 | 0.001041 |
| contains2_test_no_rtti.test | RUN | 0.119482 | 0.363213 | 0.348864 | 0.001014 | 0.001089 | 0.001013 |
| contains3_test.test | RUN | 0.109494 | 0.278322 | 0.307065 | 0.000972 | 0.001044 | 0.000954 |
| contains3_test_no_rtti.test | RUN | 0.110728 | 0.281328 | 0.307903 | 0.000928 | 0.001051 | 0.000924 |
| issue_53.test | COMPILE | 0.096991 | 0.220732 | 0.245542 | — | — | — |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.997× | 0.999×, 0.995× | 1.000× |
| clang | 0.995× | 0.996×, 0.993× | 1.002× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1364 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/43947487361).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| allocator_test.test | 10 | 0.000945s | 0.000947s | 0.000915s | byte equality observed |
| contains2_test.test | 10 | 0.000942s | 0.000949s | 0.000915s | byte equality observed |
| contains2_test_no_rtti.test | 10 | 0.000943s | 0.000944s | 0.000927s | byte equality observed |
| contains3_test.test | 10 | 0.000938s | 0.000931s | 0.000925s | byte equality observed |
| contains3_test_no_rtti.test | 10 | 0.000930s | 0.000948s | 0.000929s | byte equality observed |
| contains_test.test | 10 | 0.000942s | 0.000937s | 0.000940s | byte equality observed |
| contains_test_no_rtti.test | 10 | 0.000938s | 0.000935s | 0.000927s | byte equality observed |
| fn_eq_bind_test.test | 10 | 0.000940s | 0.000936s | 0.000931s | byte equality observed |
| function_arith_cxx98.test | 10 | 0.000958s | 0.000958s | 0.000953s | byte equality observed |
| function_arith_portable.test | 10 | 0.000951s | 0.000951s | 0.000940s | byte equality observed |
| function_n_test.test | 10 | 0.000953s | 0.000945s | 0.000953s | byte equality observed |
| function_ref_cxx98.test | 10 | 0.000915s | 0.000914s | 0.000911s | byte equality observed |
| function_ref_portable.test | 10 | 0.000917s | 0.000912s | 0.000906s | byte equality observed |
| function_test.test | 10 | 0.000992s | 0.000990s | 0.000994s | byte equality observed |
| function_test_no_rtti.test | 10 | 0.000995s | 0.000996s | 0.000979s | byte equality observed |
| lambda_test.test | 10 | 0.000943s | 0.000930s | 0.000933s | byte equality observed |
| mem_fun_cxx98.test | 10 | 0.000939s | 0.000936s | 0.000933s | byte equality observed |
| mem_fun_portable.test | 10 | 0.000941s | 0.000936s | 0.000928s | byte equality observed |
| mixed_cxxstd_shared.test | 10 | 0.000988s | 0.000993s | 0.000988s | byte equality observed |
| mixed_cxxstd_shared_0x.test | 10 | 0.000993s | 0.000988s | 0.000993s | byte equality observed |
| mixed_cxxstd_shared_14.test | 10 | 0.000985s | 0.000995s | 0.000994s | byte equality observed |
| mixed_cxxstd_static.test | 10 | 0.000945s | 0.000935s | 0.000938s | byte equality observed |
| mixed_cxxstd_static_0x.test | 10 | 0.000941s | 0.000930s | 0.000933s | byte equality observed |
| mixed_cxxstd_static_14.test | 10 | 0.000945s | 0.000936s | 0.000935s | byte equality observed |
| nothrow_swap.test | 10 | 0.000945s | 0.000937s | 0.000934s | byte equality observed |
| quick.test | 10 | 0.000942s | 0.000936s | 0.000933s | byte equality observed |
| result_arg_n_types_test.test | 10 | 0.000940s | 0.000930s | 0.000930s | byte equality observed |
| result_arg_types_test.test | 10 | 0.000922s | 0.000932s | 0.000925s | byte equality observed |
| return_function_shared.test | 10 | 0.000989s | 0.000983s | 0.000998s | byte equality observed |
| return_function_shared_0x.test | 10 | 0.000994s | 0.000997s | 0.000990s | byte equality observed |
| return_function_shared_14.test | 10 | 0.000989s | 0.000986s | 0.000994s | byte equality observed |
| return_function_static.test | 10 | 0.000936s | 0.000944s | 0.000933s | byte equality observed |
| return_function_static_0x.test | 10 | 0.000939s | 0.000947s | 0.000939s | byte equality observed |
| return_function_static_14.test | 10 | 0.000941s | 0.000932s | 0.000945s | byte equality observed |
| rvalues_test.test | 10 | 0.000951s | 0.000946s | 0.000946s | byte equality observed |
| stateless_test.test | 10 | 0.000943s | 0.000932s | 0.000936s | byte equality observed |
| std_bind_cxx98.test | 10 | 0.000919s | 0.000924s | 0.000923s | byte equality observed |
| std_bind_portable.test | 10 | 0.000929s | 0.000919s | 0.000928s | byte equality observed |
| sum_avg_cxx98.test | 10 | 0.000924s | 0.000927s | 0.000912s | byte equality observed |
| sum_avg_portable.test | 10 | 0.000918s | 0.000926s | 0.000918s | byte equality observed |
| test_bad_function_call_shared.test | 10 | 0.001034s | 0.001023s | 0.001021s | byte equality observed |
| test_bad_function_call_static.test | 10 | 0.000980s | 0.000976s | 0.000977s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/43947487361).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
