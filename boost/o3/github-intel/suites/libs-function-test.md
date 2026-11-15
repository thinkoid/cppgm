# libs/function/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| function_test.test | RUN | 0.227449 | 1.328424 | 1.111493 | 0.001101 | 0.001239 | 0.001123 |
| function_test_no_rtti.test | RUN | 0.232047 | 1.330402 | 1.116649 | 0.001124 | 0.001255 | 0.001091 |
| function_n_test.test | RUN | 0.216768 | 1.088711 | 0.930419 | 0.001198 | 0.001212 | 0.001031 |
| allocator_test.test | RUN | 0.173150 | 0.601384 | 0.608790 | 0.001205 | 0.001279 | 0.001082 |
| stateless_test.test | RUN | 0.121944 | 0.314278 | 0.379688 | 0.001072 | 0.001144 | 0.000946 |
| lambda_test.test | RUN | 0.266069 | 0.784587 | 0.832900 | 0.001024 | 0.001200 | 0.001102 |
| function_test_fail1.test | COMPILE_FAIL | 0.091824 | 0.212202 | 0.260990 | — | — | — |
| function_test_fail2.test | COMPILE_FAIL | 0.090595 | 0.211171 | 0.255899 | — | — | — |
| function_30.test | COMPILE | 0.092882 | 0.225585 | 0.262740 | — | — | — |
| function_30_repeat.test | COMPILE | 0.097918 | 0.221965 | 0.263613 | — | — | — |
| function_arith_cxx98.test | RUN | 0.124762 | 0.385148 | 0.419109 | 0.001039 | 0.001126 | 0.001027 |
| function_arith_portable.test | RUN | 0.124120 | 0.363219 | 0.387978 | 0.001018 | 0.001072 | 0.001026 |
| sum_avg_cxx98.test | RUN | 0.122143 | 0.310636 | 0.368346 | 0.001044 | 0.000942 | 0.001003 |
| sum_avg_portable.test | RUN | 0.119513 | 0.283717 | 0.357855 | 0.000994 | 0.001116 | 0.000963 |
| mem_fun_cxx98.test | RUN | 0.141687 | 0.453079 | 0.467859 | 0.001081 | 0.000953 | 0.001072 |
| mem_fun_portable.test | RUN | 0.134617 | 0.415570 | 0.432479 | 0.001150 | 0.001177 | 0.001019 |
| std_bind_cxx98.test | RUN | 0.127251 | 0.375716 | 0.405470 | 0.001061 | 0.001219 | 0.000999 |
| std_bind_portable.test | RUN | 0.127442 | 0.346116 | 0.376898 | 0.000977 | 0.001280 | 0.001038 |
| function_ref_cxx98.test | RUN | 0.115605 | 0.309549 | 0.365055 | 0.001030 | 0.001214 | 0.000985 |
| function_ref_portable.test | RUN | 0.115376 | 0.282236 | 0.343780 | 0.001008 | 0.001035 | 0.000984 |
| contains_test.test | RUN | 0.148936 | 0.615153 | 0.574171 | 0.001047 | 0.001061 | 0.001024 |
| contains2_test.test | RUN | 0.135185 | 0.439623 | 0.444348 | 0.001028 | 0.001143 | 0.001002 |
| nothrow_swap.test | RUN | 0.129904 | 0.409316 | 0.435019 | 0.001011 | 0.000941 | 0.001052 |
| rvalues_test.test | RUN | 0.150789 | 0.499862 | 0.495554 | 0.001058 | 0.001164 | 0.001023 |
| function_typeof_test.test | COMPILE | 0.094337 | 0.215486 | 0.255664 | — | — | — |
| result_arg_types_test.test | RUN | 0.135781 | 0.343644 | 0.443593 | 0.001006 | 0.001122 | 0.000986 |
| result_arg_n_types_test.test | RUN | 0.149394 | 0.372173 | 0.531162 | 0.001045 | 0.001051 | 0.001022 |
| test_bad_function_call_shared.test | RUN | 0.122366 | 0.315485 | 0.382426 | 0.001107 | 0.001478 | 0.001096 |
| test_bad_function_call_static.test | RUN | 0.119749 | 0.310373 | 0.371516 | 0.001014 | 0.001216 | 0.001038 |
| mixed_cxxstd_shared.test | RUN | 0.127599 | 0.369881 | 0.426601 | 0.001218 | 0.001323 | 0.001158 |
| mixed_cxxstd_static.test | RUN | 0.126103 | 0.373957 | 0.420995 | 0.001101 | 0.001311 | 0.000945 |
| mixed_cxxstd_shared_0x.test | RUN | 0.127702 | 0.373414 | 0.422106 | 0.001095 | 0.001275 | 0.001110 |
| mixed_cxxstd_static_0x.test | RUN | 0.123801 | 0.371775 | 0.416512 | 0.001087 | 0.001215 | 0.001025 |
| mixed_cxxstd_shared_14.test | RUN | 0.125255 | 0.373275 | 0.427587 | 0.001171 | 0.001233 | 0.001109 |
| mixed_cxxstd_static_14.test | RUN | 0.129663 | 0.376536 | 0.419866 | 0.000953 | 0.001174 | 0.001025 |
| return_function_shared.test | RUN | 0.124515 | 0.379616 | 0.415126 | 0.001188 | 0.001370 | 0.001095 |
| return_function_static.test | RUN | 0.129146 | 0.379065 | 0.410635 | 0.001186 | 0.001225 | 0.001052 |
| return_function_shared_0x.test | RUN | 0.125639 | 0.380081 | 0.416589 | 0.001111 | 0.001391 | 0.001107 |
| return_function_static_0x.test | RUN | 0.122935 | 0.373886 | 0.412029 | 0.001057 | 0.001287 | 0.001038 |
| return_function_shared_14.test | RUN | 0.129519 | 0.375252 | 0.417641 | 0.001116 | 0.001225 | 0.001120 |
| return_function_static_14.test | RUN | 0.125732 | 0.374876 | 0.409326 | 0.000972 | 0.001181 | 0.001009 |
| quick.test | RUN | 0.129732 | 0.376898 | 0.404004 | 0.001037 | 0.001200 | 0.001034 |
| issue_42.test | COMPILE | 0.096867 | 0.236797 | 0.269383 | — | — | — |
| fn_eq_bind_test.test | RUN | 0.168950 | 0.504788 | 0.606693 | 0.000766 | 0.001092 | 0.001015 |
| contains_test_no_rtti.test | RUN | 0.150775 | 0.596947 | 0.590173 | 0.001140 | 0.001133 | 0.001051 |
| contains2_test_no_rtti.test | RUN | 0.136318 | 0.444865 | 0.455138 | 0.001191 | 0.001081 | 0.000723 |
| contains3_test.test | RUN | 0.125870 | 0.336613 | 0.402789 | 0.000788 | 0.001249 | 0.000997 |
| contains3_test_no_rtti.test | RUN | 0.092706 | 0.296046 | 0.278444 | 0.000754 | 0.000816 | 0.000923 |
| issue_53.test | COMPILE | 0.081065 | 0.180718 | 0.194498 | — | — | — |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.992× | 0.988×, 0.995× | 0.997× |
| clang | 0.985× | 0.994×, 0.975× | 1.009× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1362 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43670794197).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| allocator_test.test | 10 | 0.000752s | 0.000732s | 0.000730s | byte equality observed |
| contains2_test.test | 10 | 0.000734s | 0.000731s | 0.000728s | byte equality observed |
| contains2_test_no_rtti.test | 10 | 0.000743s | 0.000741s | 0.000738s | byte equality observed |
| contains3_test.test | 10 | 0.000741s | 0.000724s | 0.000740s | byte equality observed |
| contains3_test_no_rtti.test | 10 | 0.000739s | 0.000741s | 0.000728s | byte equality observed |
| contains_test.test | 10 | 0.000743s | 0.000748s | 0.000740s | byte equality observed |
| contains_test_no_rtti.test | 10 | 0.000741s | 0.000740s | 0.000733s | byte equality observed |
| fn_eq_bind_test.test | 10 | 0.000739s | 0.000745s | 0.000718s | byte equality observed |
| function_arith_cxx98.test | 10 | 0.000754s | 0.000759s | 0.000730s | byte equality observed |
| function_arith_portable.test | 10 | 0.000756s | 0.000760s | 0.000733s | byte equality observed |
| function_n_test.test | 10 | 0.000762s | 0.000754s | 0.000729s | byte equality observed |
| function_ref_cxx98.test | 10 | 0.000719s | 0.000721s | 0.000698s | byte equality observed |
| function_ref_portable.test | 10 | 0.000724s | 0.000712s | 0.000703s | byte equality observed |
| function_test.test | 10 | 0.000784s | 0.000784s | 0.000772s | byte equality observed |
| function_test_no_rtti.test | 10 | 0.000769s | 0.000776s | 0.000764s | byte equality observed |
| lambda_test.test | 10 | 0.000740s | 0.000742s | 0.000740s | byte equality observed |
| mem_fun_cxx98.test | 10 | 0.000745s | 0.000745s | 0.000731s | byte equality observed |
| mem_fun_portable.test | 10 | 0.000751s | 0.000747s | 0.000741s | byte equality observed |
| mixed_cxxstd_shared.test | 10 | 0.000832s | 0.000804s | 0.000770s | byte equality observed |
| mixed_cxxstd_shared_0x.test | 10 | 0.000866s | 0.000857s | 0.000783s | byte equality observed |
| mixed_cxxstd_shared_14.test | 10 | 0.000860s | 0.000866s | 0.000766s | byte equality observed |
| mixed_cxxstd_static.test | 10 | 0.000817s | 0.000825s | 0.000741s | byte equality observed |
| mixed_cxxstd_static_0x.test | 10 | 0.000801s | 0.000829s | 0.000782s | byte equality observed |
| mixed_cxxstd_static_14.test | 10 | 0.000809s | 0.000797s | 0.000838s | byte equality observed |
| nothrow_swap.test | 10 | 0.000792s | 0.000822s | 0.000814s | byte equality observed |
| quick.test | 10 | 0.000822s | 0.000833s | 0.000794s | byte equality observed |
| result_arg_n_types_test.test | 10 | 0.000799s | 0.000770s | 0.000797s | byte equality observed |
| result_arg_types_test.test | 10 | 0.000834s | 0.000804s | 0.000785s | byte equality observed |
| return_function_shared.test | 10 | 0.000869s | 0.000859s | 0.000866s | byte equality observed |
| return_function_shared_0x.test | 10 | 0.000854s | 0.000876s | 0.000855s | byte equality observed |
| return_function_shared_14.test | 10 | 0.000842s | 0.000865s | 0.000840s | byte equality observed |
| return_function_static.test | 10 | 0.000822s | 0.000822s | 0.000795s | byte equality observed |
| return_function_static_0x.test | 10 | 0.000803s | 0.000824s | 0.000804s | byte equality observed |
| return_function_static_14.test | 10 | 0.000822s | 0.000837s | 0.000823s | byte equality observed |
| rvalues_test.test | 10 | 0.000818s | 0.000835s | 0.000808s | byte equality observed |
| stateless_test.test | 10 | 0.000813s | 0.000785s | 0.000818s | byte equality observed |
| std_bind_cxx98.test | 10 | 0.000760s | 0.000812s | 0.000771s | byte equality observed |
| std_bind_portable.test | 10 | 0.000773s | 0.000771s | 0.000808s | byte equality observed |
| sum_avg_cxx98.test | 10 | 0.000789s | 0.000779s | 0.000784s | byte equality observed |
| sum_avg_portable.test | 10 | 0.000801s | 0.000759s | 0.000772s | byte equality observed |
| test_bad_function_call_shared.test | 10 | 0.000875s | 0.000867s | 0.000855s | byte equality observed |
| test_bad_function_call_static.test | 10 | 0.000832s | 0.000855s | 0.000836s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43670794197).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
