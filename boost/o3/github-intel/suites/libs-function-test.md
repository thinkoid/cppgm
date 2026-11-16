# libs/function/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| function_test.test | RUN | 0.238320 | 1.364813 | 1.104592 | 0.001287 | 0.001388 | 0.001121 |
| function_test_no_rtti.test | RUN | 0.236782 | 1.363534 | 1.139510 | 0.001256 | 0.001283 | 0.001169 |
| function_n_test.test | RUN | 0.223327 | 1.092457 | 0.928621 | 0.001267 | 0.001514 | 0.001302 |
| allocator_test.test | RUN | 0.176532 | 0.625433 | 0.622900 | 0.001380 | 0.001263 | 0.001228 |
| stateless_test.test | RUN | 0.130263 | 0.327224 | 0.396351 | 0.001196 | 0.001293 | 0.001041 |
| lambda_test.test | RUN | 0.282998 | 0.801132 | 0.839967 | 0.001405 | 0.001291 | 0.001148 |
| function_test_fail1.test | COMPILE_FAIL | 0.098296 | 0.215855 | 0.260426 | — | — | — |
| function_test_fail2.test | COMPILE_FAIL | 0.102232 | 0.216942 | 0.263830 | — | — | — |
| function_30.test | COMPILE | 0.104480 | 0.231661 | 0.273103 | — | — | — |
| function_30_repeat.test | COMPILE | 0.102109 | 0.228360 | 0.274704 | — | — | — |
| function_arith_cxx98.test | RUN | 0.137216 | 0.393114 | 0.422011 | 0.001232 | 0.000961 | 0.001156 |
| function_arith_portable.test | RUN | 0.135799 | 0.369196 | 0.403944 | 0.001117 | 0.001192 | 0.001050 |
| sum_avg_cxx98.test | RUN | 0.125904 | 0.326750 | 0.387451 | 0.001177 | 0.001129 | 0.001129 |
| sum_avg_portable.test | RUN | 0.127783 | 0.297722 | 0.364852 | 0.001150 | 0.001357 | 0.001242 |
| mem_fun_cxx98.test | RUN | 0.151320 | 0.465097 | 0.475612 | 0.001395 | 0.001350 | 0.001113 |
| mem_fun_portable.test | RUN | 0.146514 | 0.418116 | 0.449996 | 0.001221 | 0.001229 | 0.001171 |
| std_bind_cxx98.test | RUN | 0.139392 | 0.383879 | 0.424859 | 0.001250 | 0.001392 | 0.001107 |
| std_bind_portable.test | RUN | 0.138369 | 0.358784 | 0.382394 | 0.001223 | 0.001330 | 0.001166 |
| function_ref_cxx98.test | RUN | 0.127511 | 0.322043 | 0.371724 | 0.001254 | 0.001190 | 0.001310 |
| function_ref_portable.test | RUN | 0.129464 | 0.294905 | 0.354993 | 0.001102 | 0.001275 | 0.001169 |
| contains_test.test | RUN | 0.163393 | 0.624539 | 0.587905 | 0.001212 | 0.001202 | 0.001313 |
| contains2_test.test | RUN | 0.146536 | 0.445010 | 0.458508 | 0.001155 | 0.001239 | 0.001106 |
| nothrow_swap.test | RUN | 0.140442 | 0.419468 | 0.429750 | 0.001129 | 0.001301 | 0.001165 |
| rvalues_test.test | RUN | 0.156026 | 0.512213 | 0.518339 | 0.001304 | 0.001378 | 0.001163 |
| function_typeof_test.test | COMPILE | 0.103179 | 0.223432 | 0.261662 | — | — | — |
| result_arg_types_test.test | RUN | 0.147686 | 0.353280 | 0.461518 | 0.001243 | 0.001427 | 0.001121 |
| result_arg_n_types_test.test | RUN | 0.160928 | 0.386931 | 0.538442 | 0.001203 | 0.001415 | 0.001180 |
| test_bad_function_call_shared.test | RUN | 0.134326 | 0.317715 | 0.381328 | 0.001468 | 0.001296 | 0.001240 |
| test_bad_function_call_static.test | RUN | 0.130740 | 0.325087 | 0.376033 | 0.001005 | 0.001475 | 0.001154 |
| mixed_cxxstd_shared.test | RUN | 0.143660 | 0.386827 | 0.426376 | 0.001301 | 0.001357 | 0.001330 |
| mixed_cxxstd_static.test | RUN | 0.137512 | 0.390220 | 0.435543 | 0.001251 | 0.001160 | 0.001171 |
| mixed_cxxstd_shared_0x.test | RUN | 0.137272 | 0.384648 | 0.428893 | 0.001310 | 0.001441 | 0.001222 |
| mixed_cxxstd_static_0x.test | RUN | 0.137017 | 0.382425 | 0.443761 | 0.001140 | 0.001351 | 0.001275 |
| mixed_cxxstd_shared_14.test | RUN | 0.138249 | 0.386398 | 0.442976 | 0.001187 | 0.001391 | 0.001245 |
| mixed_cxxstd_static_14.test | RUN | 0.141365 | 0.388342 | 0.431222 | 0.001216 | 0.001308 | 0.001190 |
| return_function_shared.test | RUN | 0.137130 | 0.387915 | 0.430220 | 0.001374 | 0.001387 | 0.001258 |
| return_function_static.test | RUN | 0.136467 | 0.390068 | 0.429745 | 0.001379 | 0.001149 | 0.001208 |
| return_function_shared_0x.test | RUN | 0.138908 | 0.392446 | 0.420587 | 0.001253 | 0.001507 | 0.001305 |
| return_function_static_0x.test | RUN | 0.134229 | 0.379734 | 0.423002 | 0.001181 | 0.000972 | 0.001212 |
| return_function_shared_14.test | RUN | 0.140136 | 0.387214 | 0.416325 | 0.001380 | 0.001362 | 0.001362 |
| return_function_static_14.test | RUN | 0.134164 | 0.388124 | 0.422929 | 0.001181 | 0.001329 | 0.001125 |
| quick.test | RUN | 0.143997 | 0.390827 | 0.422974 | 0.001106 | 0.001299 | 0.001270 |
| issue_42.test | COMPILE | 0.107287 | 0.246660 | 0.282539 | — | — | — |
| fn_eq_bind_test.test | RUN | 0.182491 | 0.535282 | 0.616593 | 0.001290 | 0.001217 | 0.001153 |
| contains_test_no_rtti.test | RUN | 0.163140 | 0.615741 | 0.593093 | 0.001181 | 0.001477 | 0.001165 |
| contains2_test_no_rtti.test | RUN | 0.145188 | 0.445324 | 0.474029 | 0.001142 | 0.001405 | 0.001051 |
| contains3_test.test | RUN | 0.135595 | 0.350268 | 0.417854 | 0.000824 | 0.001098 | 0.001099 |
| contains3_test_no_rtti.test | RUN | 0.090913 | 0.276931 | 0.292950 | 0.000924 | 0.000950 | 0.000825 |
| issue_53.test | COMPILE | 0.080562 | 0.207669 | 0.198429 | — | — | — |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.984× | 0.998×, 0.969× | 1.008× |
| clang | 0.973× | 0.970×, 0.977× | 0.977× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1364 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/43778388618).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| allocator_test.test | 10 | 0.000746s | 0.000734s | 0.000726s | byte equality observed |
| contains2_test.test | 10 | 0.000743s | 0.000727s | 0.000722s | byte equality observed |
| contains2_test_no_rtti.test | 10 | 0.000734s | 0.000733s | 0.000723s | byte equality observed |
| contains3_test.test | 10 | 0.000724s | 0.000722s | 0.000715s | byte equality observed |
| contains3_test_no_rtti.test | 10 | 0.000740s | 0.000726s | 0.000711s | byte equality observed |
| contains_test.test | 10 | 0.000746s | 0.000723s | 0.000722s | byte equality observed |
| contains_test_no_rtti.test | 10 | 0.000744s | 0.000727s | 0.000717s | byte equality observed |
| fn_eq_bind_test.test | 10 | 0.000743s | 0.000713s | 0.000715s | byte equality observed |
| function_arith_cxx98.test | 10 | 0.000753s | 0.000730s | 0.000722s | byte equality observed |
| function_arith_portable.test | 10 | 0.000758s | 0.000744s | 0.000725s | byte equality observed |
| function_n_test.test | 10 | 0.000754s | 0.000726s | 0.000726s | byte equality observed |
| function_ref_cxx98.test | 10 | 0.000718s | 0.000702s | 0.000701s | byte equality observed |
| function_ref_portable.test | 10 | 0.000720s | 0.000690s | 0.000695s | byte equality observed |
| function_test.test | 10 | 0.000783s | 0.000750s | 0.000763s | byte equality observed |
| function_test_no_rtti.test | 10 | 0.000768s | 0.000759s | 0.000768s | byte equality observed |
| lambda_test.test | 10 | 0.000749s | 0.000720s | 0.000725s | byte equality observed |
| mem_fun_cxx98.test | 10 | 0.000750s | 0.000714s | 0.000726s | byte equality observed |
| mem_fun_portable.test | 10 | 0.000752s | 0.000722s | 0.000724s | byte equality observed |
| mixed_cxxstd_shared.test | 10 | 0.000828s | 0.000869s | 0.000775s | byte equality observed |
| mixed_cxxstd_shared_0x.test | 10 | 0.000864s | 0.000878s | 0.000780s | byte equality observed |
| mixed_cxxstd_shared_14.test | 10 | 0.000870s | 0.000847s | 0.000786s | byte equality observed |
| mixed_cxxstd_static.test | 10 | 0.000797s | 0.000823s | 0.000752s | byte equality observed |
| mixed_cxxstd_static_0x.test | 10 | 0.000816s | 0.000805s | 0.000734s | byte equality observed |
| mixed_cxxstd_static_14.test | 10 | 0.000832s | 0.000789s | 0.000745s | byte equality observed |
| nothrow_swap.test | 10 | 0.000819s | 0.000792s | 0.000765s | byte equality observed |
| quick.test | 10 | 0.000840s | 0.000788s | 0.000780s | byte equality observed |
| result_arg_n_types_test.test | 10 | 0.000828s | 0.000802s | 0.000812s | byte equality observed |
| result_arg_types_test.test | 10 | 0.000809s | 0.000819s | 0.000784s | byte equality observed |
| return_function_shared.test | 10 | 0.000862s | 0.000861s | 0.000870s | byte equality observed |
| return_function_shared_0x.test | 10 | 0.000875s | 0.000818s | 0.000885s | byte equality observed |
| return_function_shared_14.test | 10 | 0.000859s | 0.000860s | 0.000854s | byte equality observed |
| return_function_static.test | 10 | 0.000817s | 0.000825s | 0.000825s | byte equality observed |
| return_function_static_0x.test | 10 | 0.000808s | 0.000820s | 0.000824s | byte equality observed |
| return_function_static_14.test | 10 | 0.000809s | 0.000833s | 0.000831s | byte equality observed |
| rvalues_test.test | 10 | 0.000812s | 0.000791s | 0.000784s | byte equality observed |
| stateless_test.test | 10 | 0.000803s | 0.000791s | 0.000815s | byte equality observed |
| std_bind_cxx98.test | 10 | 0.000796s | 0.000779s | 0.000780s | byte equality observed |
| std_bind_portable.test | 10 | 0.000774s | 0.000764s | 0.000767s | byte equality observed |
| sum_avg_cxx98.test | 10 | 0.000775s | 0.000783s | 0.000796s | byte equality observed |
| sum_avg_portable.test | 10 | 0.000782s | 0.000778s | 0.000801s | byte equality observed |
| test_bad_function_call_shared.test | 10 | 0.000858s | 0.000874s | 0.000868s | byte equality observed |
| test_bad_function_call_static.test | 10 | 0.000841s | 0.000822s | 0.000829s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/43778388618).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
