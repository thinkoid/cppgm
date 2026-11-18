# libs/function/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| function_test.test | RUN | 0.241108 | 1.352051 | 1.141462 | 0.001228 | 0.001299 | 0.001154 |
| function_test_no_rtti.test | RUN | 0.233024 | 1.346530 | 1.125290 | 0.001198 | 0.001418 | 0.001357 |
| function_n_test.test | RUN | 0.220099 | 1.109002 | 0.941159 | 0.001239 | 0.001295 | 0.001194 |
| allocator_test.test | RUN | 0.177457 | 0.613400 | 0.622411 | 0.001557 | 0.001387 | 0.001266 |
| stateless_test.test | RUN | 0.125311 | 0.324739 | 0.395773 | 0.001227 | 0.001240 | 0.001100 |
| lambda_test.test | RUN | 0.278673 | 0.795041 | 0.840801 | 0.001350 | 0.001197 | 0.001248 |
| function_test_fail1.test | COMPILE_FAIL | 0.096230 | 0.215867 | 0.260541 | — | — | — |
| function_test_fail2.test | COMPILE_FAIL | 0.099393 | 0.217011 | 0.263832 | — | — | — |
| function_30.test | COMPILE | 0.100197 | 0.230518 | 0.271058 | — | — | — |
| function_30_repeat.test | COMPILE | 0.099930 | 0.228146 | 0.271634 | — | — | — |
| function_arith_cxx98.test | RUN | 0.137630 | 0.398416 | 0.425757 | 0.001342 | 0.001145 | 0.001116 |
| function_arith_portable.test | RUN | 0.133177 | 0.369243 | 0.398868 | 0.001202 | 0.001378 | 0.001172 |
| sum_avg_cxx98.test | RUN | 0.124700 | 0.319128 | 0.380704 | 0.001114 | 0.001157 | 0.001372 |
| sum_avg_portable.test | RUN | 0.128666 | 0.289664 | 0.367308 | 0.001207 | 0.001352 | 0.001187 |
| mem_fun_cxx98.test | RUN | 0.147205 | 0.460396 | 0.489125 | 0.001592 | 0.001213 | 0.001194 |
| mem_fun_portable.test | RUN | 0.143735 | 0.414937 | 0.445280 | 0.001132 | 0.001173 | 0.001230 |
| std_bind_cxx98.test | RUN | 0.136882 | 0.382495 | 0.422583 | 0.001324 | 0.001442 | 0.001274 |
| std_bind_portable.test | RUN | 0.138405 | 0.353706 | 0.389270 | 0.001163 | 0.001401 | 0.001126 |
| function_ref_cxx98.test | RUN | 0.126132 | 0.321090 | 0.377294 | 0.001285 | 0.001056 | 0.001062 |
| function_ref_portable.test | RUN | 0.125055 | 0.290681 | 0.356164 | 0.001374 | 0.001427 | 0.001111 |
| contains_test.test | RUN | 0.155694 | 0.625212 | 0.589506 | 0.001110 | 0.001233 | 0.001143 |
| contains2_test.test | RUN | 0.146769 | 0.449002 | 0.452340 | 0.001316 | 0.001217 | 0.001131 |
| nothrow_swap.test | RUN | 0.137482 | 0.415266 | 0.438856 | 0.001178 | 0.001245 | 0.001202 |
| rvalues_test.test | RUN | 0.156808 | 0.504438 | 0.509310 | 0.001242 | 0.001263 | 0.001090 |
| function_typeof_test.test | COMPILE | 0.102041 | 0.224340 | 0.261235 | — | — | — |
| result_arg_types_test.test | RUN | 0.143605 | 0.348360 | 0.457249 | 0.001112 | 0.001173 | 0.001174 |
| result_arg_n_types_test.test | RUN | 0.158376 | 0.380172 | 0.539092 | 0.001198 | 0.001208 | 0.001199 |
| test_bad_function_call_shared.test | RUN | 0.126121 | 0.318326 | 0.387856 | 0.001407 | 0.001474 | 0.001177 |
| test_bad_function_call_static.test | RUN | 0.128009 | 0.315407 | 0.379438 | 0.001224 | 0.001224 | 0.001096 |
| mixed_cxxstd_shared.test | RUN | 0.138819 | 0.379778 | 0.435981 | 0.001180 | 0.001341 | 0.001319 |
| mixed_cxxstd_static.test | RUN | 0.136657 | 0.383306 | 0.440379 | 0.001282 | 0.001230 | 0.001061 |
| mixed_cxxstd_shared_0x.test | RUN | 0.134827 | 0.383361 | 0.443420 | 0.001222 | 0.001490 | 0.001301 |
| mixed_cxxstd_static_0x.test | RUN | 0.131724 | 0.381261 | 0.431834 | 0.001160 | 0.001210 | 0.001233 |
| mixed_cxxstd_shared_14.test | RUN | 0.132180 | 0.377943 | 0.434232 | 0.001311 | 0.001354 | 0.001214 |
| mixed_cxxstd_static_14.test | RUN | 0.134078 | 0.382859 | 0.432583 | 0.001198 | 0.001361 | 0.001188 |
| return_function_shared.test | RUN | 0.132602 | 0.381070 | 0.419111 | 0.001284 | 0.001257 | 0.001256 |
| return_function_static.test | RUN | 0.133035 | 0.385575 | 0.419900 | 0.001097 | 0.001428 | 0.001127 |
| return_function_shared_0x.test | RUN | 0.132587 | 0.385302 | 0.423666 | 0.001080 | 0.001431 | 0.001257 |
| return_function_static_0x.test | RUN | 0.130783 | 0.378528 | 0.427021 | 0.001154 | 0.001330 | 0.001402 |
| return_function_shared_14.test | RUN | 0.131083 | 0.381219 | 0.422457 | 0.001250 | 0.001323 | 0.001184 |
| return_function_static_14.test | RUN | 0.130395 | 0.384086 | 0.426624 | 0.001140 | 0.001223 | 0.001208 |
| quick.test | RUN | 0.138214 | 0.382942 | 0.418316 | 0.001104 | 0.001256 | 0.001152 |
| issue_42.test | COMPILE | 0.105991 | 0.244104 | 0.290824 | — | — | — |
| fn_eq_bind_test.test | RUN | 0.179522 | 0.528678 | 0.627586 | 0.001313 | 0.001353 | 0.001148 |
| contains_test_no_rtti.test | RUN | 0.157156 | 0.613203 | 0.592144 | 0.001317 | 0.001200 | 0.000793 |
| contains2_test_no_rtti.test | RUN | 0.140911 | 0.438306 | 0.470840 | 0.001168 | 0.001339 | 0.001077 |
| contains3_test.test | RUN | 0.130890 | 0.335009 | 0.409794 | 0.001197 | 0.001177 | 0.001173 |
| contains3_test_no_rtti.test | RUN | 0.092990 | 0.283223 | 0.280992 | 0.000931 | 0.000877 | 0.000910 |
| issue_53.test | COMPILE | 0.080154 | 0.203868 | 0.198904 | — | — | — |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.988× | 0.987×, 0.989× | 0.998× |
| clang | 0.990× | 0.986×, 0.994× | 1.001× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1364 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44362912212).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| allocator_test.test | 10 | 0.000746s | 0.000750s | 0.000768s | byte equality observed |
| contains2_test.test | 10 | 0.000743s | 0.000734s | 0.000726s | byte equality observed |
| contains2_test_no_rtti.test | 10 | 0.000744s | 0.000752s | 0.000718s | byte equality observed |
| contains3_test.test | 10 | 0.000731s | 0.000722s | 0.000752s | byte equality observed |
| contains3_test_no_rtti.test | 10 | 0.000738s | 0.000727s | 0.000730s | byte equality observed |
| contains_test.test | 10 | 0.000751s | 0.000729s | 0.000729s | byte equality observed |
| contains_test_no_rtti.test | 10 | 0.000746s | 0.000754s | 0.000735s | byte equality observed |
| fn_eq_bind_test.test | 10 | 0.000722s | 0.000728s | 0.000733s | byte equality observed |
| function_arith_cxx98.test | 10 | 0.000750s | 0.000748s | 0.000750s | byte equality observed |
| function_arith_portable.test | 10 | 0.000740s | 0.000742s | 0.000733s | byte equality observed |
| function_n_test.test | 10 | 0.000739s | 0.000762s | 0.000747s | byte equality observed |
| function_ref_cxx98.test | 10 | 0.000709s | 0.000718s | 0.000726s | byte equality observed |
| function_ref_portable.test | 10 | 0.000719s | 0.000714s | 0.000716s | byte equality observed |
| function_test.test | 10 | 0.000784s | 0.000777s | 0.000786s | byte equality observed |
| function_test_no_rtti.test | 10 | 0.000766s | 0.000789s | 0.000756s | byte equality observed |
| lambda_test.test | 10 | 0.000768s | 0.000779s | 0.000710s | byte equality observed |
| mem_fun_cxx98.test | 10 | 0.000778s | 0.000787s | 0.000713s | byte equality observed |
| mem_fun_portable.test | 10 | 0.000803s | 0.000774s | 0.000721s | byte equality observed |
| mixed_cxxstd_shared.test | 10 | 0.000855s | 0.000885s | 0.000776s | byte equality observed |
| mixed_cxxstd_shared_0x.test | 10 | 0.000847s | 0.000872s | 0.000764s | byte equality observed |
| mixed_cxxstd_shared_14.test | 10 | 0.000857s | 0.000860s | 0.000780s | byte equality observed |
| mixed_cxxstd_static.test | 10 | 0.000828s | 0.000804s | 0.000762s | byte equality observed |
| mixed_cxxstd_static_0x.test | 10 | 0.000818s | 0.000803s | 0.000812s | byte equality observed |
| mixed_cxxstd_static_14.test | 10 | 0.000830s | 0.000813s | 0.000805s | byte equality observed |
| nothrow_swap.test | 10 | 0.000832s | 0.000814s | 0.000823s | byte equality observed |
| quick.test | 10 | 0.000815s | 0.000812s | 0.000831s | byte equality observed |
| result_arg_n_types_test.test | 10 | 0.000821s | 0.000826s | 0.000793s | byte equality observed |
| result_arg_types_test.test | 10 | 0.000789s | 0.000789s | 0.000793s | byte equality observed |
| return_function_shared.test | 10 | 0.000851s | 0.000860s | 0.000848s | byte equality observed |
| return_function_shared_0x.test | 10 | 0.000852s | 0.000855s | 0.000862s | byte equality observed |
| return_function_shared_14.test | 10 | 0.000862s | 0.000838s | 0.000875s | byte equality observed |
| return_function_static.test | 10 | 0.000810s | 0.000814s | 0.000840s | byte equality observed |
| return_function_static_0x.test | 10 | 0.000818s | 0.000795s | 0.000797s | byte equality observed |
| return_function_static_14.test | 10 | 0.000847s | 0.000815s | 0.000822s | byte equality observed |
| rvalues_test.test | 10 | 0.000836s | 0.000802s | 0.000789s | byte equality observed |
| stateless_test.test | 10 | 0.000806s | 0.000803s | 0.000798s | byte equality observed |
| std_bind_cxx98.test | 10 | 0.000792s | 0.000817s | 0.000791s | byte equality observed |
| std_bind_portable.test | 10 | 0.000792s | 0.000784s | 0.000783s | byte equality observed |
| sum_avg_cxx98.test | 10 | 0.000780s | 0.000777s | 0.000784s | byte equality observed |
| sum_avg_portable.test | 10 | 0.000764s | 0.000748s | 0.000786s | byte equality observed |
| test_bad_function_call_shared.test | 10 | 0.000863s | 0.000870s | 0.000853s | byte equality observed |
| test_bad_function_call_static.test | 10 | 0.000835s | 0.000837s | 0.000841s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44362912212).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
