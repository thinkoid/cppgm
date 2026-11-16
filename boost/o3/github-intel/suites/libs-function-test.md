# libs/function/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| function_test.test | RUN | 0.232471 | 1.373695 | 1.122693 | 0.000992 | 0.001448 | 0.001290 |
| function_test_no_rtti.test | RUN | 0.228858 | 1.373000 | 1.128471 | 0.001046 | 0.001508 | 0.001233 |
| function_n_test.test | RUN | 0.215427 | 1.110578 | 0.939766 | 0.001192 | 0.001324 | 0.001172 |
| allocator_test.test | RUN | 0.167983 | 0.629926 | 0.621225 | 0.001308 | 0.001460 | 0.001304 |
| stateless_test.test | RUN | 0.119349 | 0.324843 | 0.393202 | 0.001011 | 0.001354 | 0.001083 |
| lambda_test.test | RUN | 0.259824 | 0.816894 | 0.851771 | 0.001062 | 0.001128 | 0.001372 |
| function_test_fail1.test | COMPILE_FAIL | 0.088906 | 0.220854 | 0.266403 | — | — | — |
| function_test_fail2.test | COMPILE_FAIL | 0.092596 | 0.227925 | 0.265138 | — | — | — |
| function_30.test | COMPILE | 0.093481 | 0.232977 | 0.270688 | — | — | — |
| function_30_repeat.test | COMPILE | 0.094957 | 0.235267 | 0.273512 | — | — | — |
| function_arith_cxx98.test | RUN | 0.124735 | 0.399997 | 0.429624 | 0.001040 | 0.001143 | 0.001286 |
| function_arith_portable.test | RUN | 0.127734 | 0.376960 | 0.400626 | 0.000971 | 0.001324 | 0.001191 |
| sum_avg_cxx98.test | RUN | 0.119150 | 0.326062 | 0.380440 | 0.001007 | 0.001257 | 0.001209 |
| sum_avg_portable.test | RUN | 0.117418 | 0.299019 | 0.371440 | 0.000952 | 0.001293 | 0.001108 |
| mem_fun_cxx98.test | RUN | 0.138566 | 0.465297 | 0.476593 | 0.001092 | 0.001315 | 0.001239 |
| mem_fun_portable.test | RUN | 0.131599 | 0.419327 | 0.446001 | 0.001085 | 0.001403 | 0.001113 |
| std_bind_cxx98.test | RUN | 0.124366 | 0.387302 | 0.416767 | 0.001024 | 0.001375 | 0.001186 |
| std_bind_portable.test | RUN | 0.125439 | 0.357750 | 0.383587 | 0.001015 | 0.001300 | 0.001287 |
| function_ref_cxx98.test | RUN | 0.119880 | 0.322565 | 0.369366 | 0.001027 | 0.001089 | 0.001227 |
| function_ref_portable.test | RUN | 0.118098 | 0.294331 | 0.362972 | 0.001063 | 0.001091 | 0.001179 |
| contains_test.test | RUN | 0.153357 | 0.626034 | 0.593544 | 0.001048 | 0.001318 | 0.001225 |
| contains2_test.test | RUN | 0.135593 | 0.449895 | 0.456895 | 0.001015 | 0.001427 | 0.001125 |
| nothrow_swap.test | RUN | 0.126551 | 0.420123 | 0.443783 | 0.001006 | 0.001235 | 0.001227 |
| rvalues_test.test | RUN | 0.139688 | 0.506628 | 0.508140 | 0.001148 | 0.001210 | 0.001191 |
| function_typeof_test.test | COMPILE | 0.100224 | 0.224341 | 0.262098 | — | — | — |
| result_arg_types_test.test | RUN | 0.133347 | 0.355894 | 0.452660 | 0.001034 | 0.001149 | 0.001116 |
| result_arg_n_types_test.test | RUN | 0.143191 | 0.387438 | 0.533686 | 0.001022 | 0.001304 | 0.001326 |
| test_bad_function_call_shared.test | RUN | 0.115680 | 0.317916 | 0.384387 | 0.001384 | 0.001428 | 0.001226 |
| test_bad_function_call_static.test | RUN | 0.115829 | 0.321679 | 0.375027 | 0.001119 | 0.001297 | 0.001170 |
| mixed_cxxstd_shared.test | RUN | 0.133909 | 0.384324 | 0.432627 | 0.001191 | 0.001378 | 0.001144 |
| mixed_cxxstd_static.test | RUN | 0.130516 | 0.386225 | 0.427988 | 0.001139 | 0.001187 | 0.001071 |
| mixed_cxxstd_shared_0x.test | RUN | 0.129440 | 0.388477 | 0.436011 | 0.001137 | 0.001522 | 0.001326 |
| mixed_cxxstd_static_0x.test | RUN | 0.128538 | 0.386964 | 0.435771 | 0.001009 | 0.001568 | 0.001155 |
| mixed_cxxstd_shared_14.test | RUN | 0.129655 | 0.386069 | 0.433302 | 0.001066 | 0.001336 | 0.001268 |
| mixed_cxxstd_static_14.test | RUN | 0.128369 | 0.384997 | 0.433004 | 0.001060 | 0.001252 | 0.001160 |
| return_function_shared.test | RUN | 0.129131 | 0.389679 | 0.418275 | 0.001139 | 0.001346 | 0.001423 |
| return_function_static.test | RUN | 0.121674 | 0.390172 | 0.433115 | 0.001045 | 0.000959 | 0.001317 |
| return_function_shared_0x.test | RUN | 0.126077 | 0.392649 | 0.419963 | 0.001130 | 0.001444 | 0.001394 |
| return_function_static_0x.test | RUN | 0.132169 | 0.391501 | 0.427955 | 0.001040 | 0.001432 | 0.001226 |
| return_function_shared_14.test | RUN | 0.131884 | 0.390297 | 0.423048 | 0.001374 | 0.001339 | 0.001167 |
| return_function_static_14.test | RUN | 0.127766 | 0.385924 | 0.423293 | 0.001151 | 0.001431 | 0.001053 |
| quick.test | RUN | 0.134323 | 0.388653 | 0.422108 | 0.001087 | 0.001477 | 0.001145 |
| issue_42.test | COMPILE | 0.100990 | 0.248947 | 0.280959 | — | — | — |
| fn_eq_bind_test.test | RUN | 0.174169 | 0.541474 | 0.612487 | 0.001258 | 0.001354 | 0.001245 |
| contains_test_no_rtti.test | RUN | 0.156422 | 0.617776 | 0.601253 | 0.001042 | 0.001150 | 0.001127 |
| contains2_test_no_rtti.test | RUN | 0.136390 | 0.445429 | 0.470629 | 0.001303 | 0.001343 | 0.001060 |
| contains3_test.test | RUN | 0.130182 | 0.345112 | 0.406354 | 0.001069 | 0.001361 | 0.001131 |
| contains3_test_no_rtti.test | RUN | 0.086669 | 0.286376 | 0.283081 | 0.000842 | 0.000976 | 0.000920 |
| issue_53.test | COMPILE | 0.075759 | 0.194713 | 0.201240 | — | — | — |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.997× | 1.000×, 0.994× | 1.017× |
| clang | 0.980× | 0.976×, 0.983× | 1.008× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1364 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/43967972441).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| allocator_test.test | 10 | 0.000747s | 0.000759s | 0.000757s | byte equality observed |
| contains2_test.test | 10 | 0.000738s | 0.000746s | 0.000737s | byte equality observed |
| contains2_test_no_rtti.test | 10 | 0.000747s | 0.000755s | 0.000738s | byte equality observed |
| contains3_test.test | 10 | 0.000753s | 0.000753s | 0.000731s | byte equality observed |
| contains3_test_no_rtti.test | 10 | 0.000749s | 0.000747s | 0.000744s | byte equality observed |
| contains_test.test | 10 | 0.000749s | 0.000754s | 0.000744s | byte equality observed |
| contains_test_no_rtti.test | 10 | 0.000758s | 0.000730s | 0.000737s | byte equality observed |
| fn_eq_bind_test.test | 10 | 0.000738s | 0.000733s | 0.000722s | byte equality observed |
| function_arith_cxx98.test | 10 | 0.000751s | 0.000752s | 0.000728s | byte equality observed |
| function_arith_portable.test | 10 | 0.000763s | 0.000759s | 0.000728s | byte equality observed |
| function_n_test.test | 10 | 0.000754s | 0.000749s | 0.000748s | byte equality observed |
| function_ref_cxx98.test | 10 | 0.000722s | 0.000727s | 0.000720s | byte equality observed |
| function_ref_portable.test | 10 | 0.000734s | 0.000720s | 0.000714s | byte equality observed |
| function_test.test | 10 | 0.000787s | 0.000788s | 0.000770s | byte equality observed |
| function_test_no_rtti.test | 10 | 0.000794s | 0.000779s | 0.000755s | byte equality observed |
| lambda_test.test | 10 | 0.000745s | 0.000752s | 0.000739s | byte equality observed |
| mem_fun_cxx98.test | 10 | 0.000738s | 0.000740s | 0.000747s | byte equality observed |
| mem_fun_portable.test | 10 | 0.000751s | 0.000772s | 0.000737s | byte equality observed |
| mixed_cxxstd_shared.test | 10 | 0.000846s | 0.000878s | 0.000782s | byte equality observed |
| mixed_cxxstd_shared_0x.test | 10 | 0.000845s | 0.000861s | 0.000776s | byte equality observed |
| mixed_cxxstd_shared_14.test | 10 | 0.000876s | 0.000846s | 0.000788s | byte equality observed |
| mixed_cxxstd_static.test | 10 | 0.000830s | 0.000796s | 0.000724s | byte equality observed |
| mixed_cxxstd_static_0x.test | 10 | 0.000796s | 0.000827s | 0.000768s | byte equality observed |
| mixed_cxxstd_static_14.test | 10 | 0.000823s | 0.000830s | 0.000820s | byte equality observed |
| nothrow_swap.test | 10 | 0.000803s | 0.000857s | 0.000840s | byte equality observed |
| quick.test | 10 | 0.000805s | 0.000840s | 0.000820s | byte equality observed |
| result_arg_n_types_test.test | 10 | 0.000819s | 0.000821s | 0.000797s | byte equality observed |
| result_arg_types_test.test | 10 | 0.000845s | 0.000813s | 0.000829s | byte equality observed |
| return_function_shared.test | 10 | 0.000877s | 0.000866s | 0.000875s | byte equality observed |
| return_function_shared_0x.test | 10 | 0.000868s | 0.000858s | 0.000864s | byte equality observed |
| return_function_shared_14.test | 10 | 0.000858s | 0.000849s | 0.000844s | byte equality observed |
| return_function_static.test | 10 | 0.000807s | 0.000811s | 0.000816s | byte equality observed |
| return_function_static_0x.test | 10 | 0.000830s | 0.000792s | 0.000792s | byte equality observed |
| return_function_static_14.test | 10 | 0.000818s | 0.000812s | 0.000794s | byte equality observed |
| rvalues_test.test | 10 | 0.000805s | 0.000838s | 0.000804s | byte equality observed |
| stateless_test.test | 10 | 0.000816s | 0.000779s | 0.000789s | byte equality observed |
| std_bind_cxx98.test | 10 | 0.000789s | 0.000806s | 0.000796s | byte equality observed |
| std_bind_portable.test | 10 | 0.000801s | 0.000790s | 0.000780s | byte equality observed |
| sum_avg_cxx98.test | 10 | 0.000807s | 0.000773s | 0.000757s | byte equality observed |
| sum_avg_portable.test | 10 | 0.000777s | 0.000775s | 0.000783s | byte equality observed |
| test_bad_function_call_shared.test | 10 | 0.000862s | 0.000850s | 0.000858s | byte equality observed |
| test_bad_function_call_static.test | 10 | 0.000820s | 0.000822s | 0.000837s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/43967972441).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
