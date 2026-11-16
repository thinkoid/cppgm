# libs/function/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| function_test.test | RUN | 0.243855 | 1.399868 | 1.138296 | 0.000954 | 0.001462 | 0.001206 |
| function_test_no_rtti.test | RUN | 0.242925 | 1.380782 | 1.137283 | 0.001091 | 0.001390 | 0.001260 |
| function_n_test.test | RUN | 0.226433 | 1.137053 | 0.954415 | 0.001242 | 0.001401 | 0.001281 |
| allocator_test.test | RUN | 0.179842 | 0.632724 | 0.634134 | 0.001461 | 0.001384 | 0.001200 |
| stateless_test.test | RUN | 0.133230 | 0.335416 | 0.401532 | 0.001153 | 0.001272 | 0.001243 |
| lambda_test.test | RUN | 0.281945 | 0.826750 | 0.857015 | 0.001231 | 0.001129 | 0.001261 |
| function_test_fail1.test | COMPILE_FAIL | 0.100102 | 0.218126 | 0.261541 | — | — | — |
| function_test_fail2.test | COMPILE_FAIL | 0.099884 | 0.222916 | 0.266998 | — | — | — |
| function_30.test | COMPILE | 0.106363 | 0.231035 | 0.276201 | — | — | — |
| function_30_repeat.test | COMPILE | 0.103001 | 0.238361 | 0.274711 | — | — | — |
| function_arith_cxx98.test | RUN | 0.139714 | 0.413324 | 0.429790 | 0.001410 | 0.001253 | 0.001205 |
| function_arith_portable.test | RUN | 0.139046 | 0.385323 | 0.408308 | 0.001106 | 0.001191 | 0.001250 |
| sum_avg_cxx98.test | RUN | 0.133084 | 0.332782 | 0.384795 | 0.001153 | 0.001160 | 0.001228 |
| sum_avg_portable.test | RUN | 0.133867 | 0.303324 | 0.379277 | 0.001165 | 0.001389 | 0.001238 |
| mem_fun_cxx98.test | RUN | 0.152470 | 0.480469 | 0.489746 | 0.001367 | 0.001410 | 0.001182 |
| mem_fun_portable.test | RUN | 0.147556 | 0.432715 | 0.457866 | 0.001143 | 0.001400 | 0.001139 |
| std_bind_cxx98.test | RUN | 0.138973 | 0.390483 | 0.428264 | 0.001276 | 0.001401 | 0.001216 |
| std_bind_portable.test | RUN | 0.140195 | 0.372599 | 0.389795 | 0.001235 | 0.001321 | 0.001166 |
| function_ref_cxx98.test | RUN | 0.129180 | 0.332801 | 0.387967 | 0.001318 | 0.001226 | 0.001156 |
| function_ref_portable.test | RUN | 0.130959 | 0.297128 | 0.367570 | 0.001116 | 0.001413 | 0.001096 |
| contains_test.test | RUN | 0.169455 | 0.645394 | 0.602391 | 0.001189 | 0.001299 | 0.001148 |
| contains2_test.test | RUN | 0.150183 | 0.461412 | 0.470581 | 0.001188 | 0.001405 | 0.001143 |
| nothrow_swap.test | RUN | 0.147866 | 0.434770 | 0.454241 | 0.001268 | 0.001364 | 0.001194 |
| rvalues_test.test | RUN | 0.163373 | 0.528691 | 0.529341 | 0.001272 | 0.001440 | 0.001141 |
| function_typeof_test.test | COMPILE | 0.107544 | 0.228720 | 0.276854 | — | — | — |
| result_arg_types_test.test | RUN | 0.150678 | 0.366472 | 0.470243 | 0.001139 | 0.001517 | 0.001117 |
| result_arg_n_types_test.test | RUN | 0.167868 | 0.402368 | 0.554760 | 0.001210 | 0.001632 | 0.001282 |
| test_bad_function_call_shared.test | RUN | 0.134310 | 0.329521 | 0.402318 | 0.001491 | 0.001406 | 0.001283 |
| test_bad_function_call_static.test | RUN | 0.132857 | 0.331544 | 0.394262 | 0.001317 | 0.001511 | 0.001137 |
| mixed_cxxstd_shared.test | RUN | 0.141930 | 0.398677 | 0.442189 | 0.001178 | 0.001575 | 0.001280 |
| mixed_cxxstd_static.test | RUN | 0.140542 | 0.397011 | 0.435046 | 0.001130 | 0.001605 | 0.001116 |
| mixed_cxxstd_shared_0x.test | RUN | 0.141262 | 0.390387 | 0.438195 | 0.001393 | 0.001684 | 0.001392 |
| mixed_cxxstd_static_0x.test | RUN | 0.138547 | 0.391877 | 0.441461 | 0.001031 | 0.001550 | 0.001206 |
| mixed_cxxstd_shared_14.test | RUN | 0.141316 | 0.397465 | 0.433703 | 0.001279 | 0.001510 | 0.001343 |
| mixed_cxxstd_static_14.test | RUN | 0.137124 | 0.400012 | 0.436456 | 0.001163 | 0.001594 | 0.001182 |
| return_function_shared.test | RUN | 0.135692 | 0.401333 | 0.429855 | 0.001327 | 0.001692 | 0.001302 |
| return_function_static.test | RUN | 0.135470 | 0.398122 | 0.426139 | 0.001142 | 0.001324 | 0.001144 |
| return_function_shared_0x.test | RUN | 0.133797 | 0.401623 | 0.428925 | 0.001264 | 0.001730 | 0.001302 |
| return_function_static_0x.test | RUN | 0.137711 | 0.396629 | 0.438378 | 0.001156 | 0.001378 | 0.001190 |
| return_function_shared_14.test | RUN | 0.137496 | 0.401966 | 0.433734 | 0.001292 | 0.001356 | 0.001234 |
| return_function_static_14.test | RUN | 0.132870 | 0.404098 | 0.428982 | 0.001221 | 0.001462 | 0.001213 |
| quick.test | RUN | 0.141582 | 0.399071 | 0.427373 | 0.001227 | 0.001582 | 0.001184 |
| issue_42.test | COMPILE | 0.105601 | 0.258001 | 0.294219 | — | — | — |
| fn_eq_bind_test.test | RUN | 0.184276 | 0.549077 | 0.633510 | 0.001224 | 0.001335 | 0.001113 |
| contains_test_no_rtti.test | RUN | 0.164356 | 0.634089 | 0.605143 | 0.001214 | 0.001494 | 0.000805 |
| contains2_test_no_rtti.test | RUN | 0.145165 | 0.460479 | 0.474299 | 0.001240 | 0.001264 | 0.001188 |
| contains3_test.test | RUN | 0.135475 | 0.357918 | 0.417481 | 0.001070 | 0.001140 | 0.001185 |
| contains3_test_no_rtti.test | RUN | 0.091962 | 0.283876 | 0.290592 | 0.000879 | 0.000997 | 0.000867 |
| issue_53.test | COMPILE | 0.081273 | 0.198577 | 0.203887 | — | — | — |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.991× | 0.978×, 1.003× | 0.982× |
| clang | 0.978× | 0.978×, 0.979× | 0.995× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1362 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/43822097733).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| allocator_test.test | 10 | 0.000771s | 0.000757s | 0.000755s | byte equality observed |
| contains2_test.test | 10 | 0.000767s | 0.000742s | 0.000744s | byte equality observed |
| contains2_test_no_rtti.test | 10 | 0.000749s | 0.000740s | 0.000746s | byte equality observed |
| contains3_test.test | 10 | 0.000746s | 0.000738s | 0.000754s | byte equality observed |
| contains3_test_no_rtti.test | 10 | 0.000745s | 0.000735s | 0.000739s | byte equality observed |
| contains_test.test | 10 | 0.000750s | 0.000752s | 0.000739s | byte equality observed |
| contains_test_no_rtti.test | 10 | 0.000744s | 0.000745s | 0.000733s | byte equality observed |
| fn_eq_bind_test.test | 10 | 0.000739s | 0.000731s | 0.000738s | byte equality observed |
| function_arith_cxx98.test | 10 | 0.000755s | 0.000751s | 0.000737s | byte equality observed |
| function_arith_portable.test | 10 | 0.000740s | 0.000749s | 0.000732s | byte equality observed |
| function_n_test.test | 10 | 0.000746s | 0.000739s | 0.000738s | byte equality observed |
| function_ref_cxx98.test | 10 | 0.000727s | 0.000717s | 0.000714s | byte equality observed |
| function_ref_portable.test | 10 | 0.000730s | 0.000714s | 0.000713s | byte equality observed |
| function_test.test | 10 | 0.000793s | 0.000763s | 0.000790s | byte equality observed |
| function_test_no_rtti.test | 10 | 0.000789s | 0.000795s | 0.000774s | byte equality observed |
| lambda_test.test | 10 | 0.000789s | 0.000751s | 0.000753s | byte equality observed |
| mem_fun_cxx98.test | 10 | 0.000829s | 0.000755s | 0.000737s | byte equality observed |
| mem_fun_portable.test | 10 | 0.000834s | 0.000788s | 0.000744s | byte equality observed |
| mixed_cxxstd_shared.test | 10 | 0.000867s | 0.000868s | 0.000787s | byte equality observed |
| mixed_cxxstd_shared_0x.test | 10 | 0.000880s | 0.000893s | 0.000772s | byte equality observed |
| mixed_cxxstd_shared_14.test | 10 | 0.000889s | 0.000857s | 0.000815s | byte equality observed |
| mixed_cxxstd_static.test | 10 | 0.000819s | 0.000804s | 0.000799s | byte equality observed |
| mixed_cxxstd_static_0x.test | 10 | 0.000844s | 0.000831s | 0.000801s | byte equality observed |
| mixed_cxxstd_static_14.test | 10 | 0.000851s | 0.000814s | 0.000813s | byte equality observed |
| nothrow_swap.test | 10 | 0.000830s | 0.000830s | 0.000810s | byte equality observed |
| quick.test | 10 | 0.000837s | 0.000812s | 0.000814s | byte equality observed |
| result_arg_n_types_test.test | 10 | 0.000796s | 0.000824s | 0.000847s | byte equality observed |
| result_arg_types_test.test | 10 | 0.000816s | 0.000807s | 0.000823s | byte equality observed |
| return_function_shared.test | 10 | 0.000854s | 0.000884s | 0.000872s | byte equality observed |
| return_function_shared_0x.test | 10 | 0.000865s | 0.000886s | 0.000884s | byte equality observed |
| return_function_shared_14.test | 10 | 0.000890s | 0.000880s | 0.000865s | byte equality observed |
| return_function_static.test | 10 | 0.000817s | 0.000861s | 0.000813s | byte equality observed |
| return_function_static_0x.test | 10 | 0.000814s | 0.000845s | 0.000800s | byte equality observed |
| return_function_static_14.test | 10 | 0.000814s | 0.000843s | 0.000808s | byte equality observed |
| rvalues_test.test | 10 | 0.000810s | 0.000847s | 0.000819s | byte equality observed |
| stateless_test.test | 10 | 0.000807s | 0.000858s | 0.000819s | byte equality observed |
| std_bind_cxx98.test | 10 | 0.000810s | 0.000817s | 0.000789s | byte equality observed |
| std_bind_portable.test | 10 | 0.000782s | 0.000813s | 0.000792s | byte equality observed |
| sum_avg_cxx98.test | 10 | 0.000817s | 0.000828s | 0.000805s | byte equality observed |
| sum_avg_portable.test | 10 | 0.000800s | 0.000806s | 0.000782s | byte equality observed |
| test_bad_function_call_shared.test | 10 | 0.000875s | 0.000871s | 0.000879s | byte equality observed |
| test_bad_function_call_static.test | 10 | 0.000851s | 0.000824s | 0.000866s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/43822097733).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
