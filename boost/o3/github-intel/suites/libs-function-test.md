# libs/function/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| function_test.test | RUN | 0.250557 | 1.401008 | 1.151395 | 0.001113 | 0.001455 | 0.001170 |
| function_test_no_rtti.test | RUN | 0.243579 | 1.363756 | 1.141515 | 0.001175 | 0.001580 | 0.001423 |
| function_n_test.test | RUN | 0.227289 | 1.122112 | 0.954718 | 0.001140 | 0.001466 | 0.001479 |
| allocator_test.test | RUN | 0.181311 | 0.628392 | 0.627487 | 0.001588 | 0.001486 | 0.001528 |
| stateless_test.test | RUN | 0.134253 | 0.330436 | 0.406203 | 0.001302 | 0.001235 | 0.001211 |
| lambda_test.test | RUN | 0.284379 | 0.821096 | 0.862988 | 0.001354 | 0.001260 | 0.001297 |
| function_test_fail1.test | COMPILE_FAIL | 0.099418 | 0.223092 | 0.266974 | — | — | — |
| function_test_fail2.test | COMPILE_FAIL | 0.102088 | 0.225751 | 0.270568 | — | — | — |
| function_30.test | COMPILE | 0.106131 | 0.234491 | 0.278320 | — | — | — |
| function_30_repeat.test | COMPILE | 0.102859 | 0.231793 | 0.276042 | — | — | — |
| function_arith_cxx98.test | RUN | 0.140224 | 0.406364 | 0.435517 | 0.001523 | 0.001292 | 0.001376 |
| function_arith_portable.test | RUN | 0.139861 | 0.378141 | 0.409806 | 0.001150 | 0.001282 | 0.001262 |
| sum_avg_cxx98.test | RUN | 0.130741 | 0.327004 | 0.374977 | 0.001179 | 0.001290 | 0.001328 |
| sum_avg_portable.test | RUN | 0.134630 | 0.298797 | 0.377899 | 0.001507 | 0.001355 | 0.001455 |
| mem_fun_cxx98.test | RUN | 0.155211 | 0.469263 | 0.496439 | 0.001552 | 0.001238 | 0.001281 |
| mem_fun_portable.test | RUN | 0.151473 | 0.429988 | 0.445498 | 0.001261 | 0.001336 | 0.001273 |
| std_bind_cxx98.test | RUN | 0.141962 | 0.384871 | 0.431438 | 0.001236 | 0.001472 | 0.001360 |
| std_bind_portable.test | RUN | 0.143699 | 0.366124 | 0.391903 | 0.001241 | 0.001327 | 0.001374 |
| function_ref_cxx98.test | RUN | 0.132293 | 0.325296 | 0.380458 | 0.001361 | 0.001093 | 0.001296 |
| function_ref_portable.test | RUN | 0.128486 | 0.294990 | 0.370751 | 0.001253 | 0.001316 | 0.001136 |
| contains_test.test | RUN | 0.164975 | 0.636491 | 0.589439 | 0.001320 | 0.001316 | 0.001318 |
| contains2_test.test | RUN | 0.146030 | 0.453859 | 0.462839 | 0.001295 | 0.001316 | 0.001231 |
| nothrow_swap.test | RUN | 0.144319 | 0.425461 | 0.459803 | 0.001446 | 0.001392 | 0.001356 |
| rvalues_test.test | RUN | 0.160271 | 0.521339 | 0.521769 | 0.001415 | 0.001221 | 0.001370 |
| function_typeof_test.test | COMPILE | 0.103819 | 0.227106 | 0.280291 | — | — | — |
| result_arg_types_test.test | RUN | 0.155466 | 0.357501 | 0.479722 | 0.001235 | 0.001421 | 0.001266 |
| result_arg_n_types_test.test | RUN | 0.172762 | 0.398673 | 0.547361 | 0.001286 | 0.001416 | 0.001201 |
| test_bad_function_call_shared.test | RUN | 0.134181 | 0.323018 | 0.379351 | 0.001336 | 0.001488 | 0.001601 |
| test_bad_function_call_static.test | RUN | 0.133580 | 0.321431 | 0.380623 | 0.001334 | 0.001523 | 0.001240 |
| mixed_cxxstd_shared.test | RUN | 0.142348 | 0.387612 | 0.424387 | 0.001145 | 0.001700 | 0.001486 |
| mixed_cxxstd_static.test | RUN | 0.141723 | 0.395882 | 0.441760 | 0.001410 | 0.001398 | 0.001131 |
| mixed_cxxstd_shared_0x.test | RUN | 0.140817 | 0.397719 | 0.446865 | 0.001421 | 0.001546 | 0.001429 |
| mixed_cxxstd_static_0x.test | RUN | 0.142456 | 0.392266 | 0.443069 | 0.001175 | 0.001557 | 0.001430 |
| mixed_cxxstd_shared_14.test | RUN | 0.143382 | 0.388127 | 0.434401 | 0.001421 | 0.001466 | 0.001212 |
| mixed_cxxstd_static_14.test | RUN | 0.136789 | 0.386538 | 0.445211 | 0.001019 | 0.001486 | 0.001342 |
| return_function_shared.test | RUN | 0.137771 | 0.392978 | 0.422980 | 0.001319 | 0.001599 | 0.001444 |
| return_function_static.test | RUN | 0.138417 | 0.395022 | 0.425792 | 0.001269 | 0.001497 | 0.001177 |
| return_function_shared_0x.test | RUN | 0.140027 | 0.393316 | 0.435900 | 0.001420 | 0.001603 | 0.001513 |
| return_function_static_0x.test | RUN | 0.137594 | 0.397243 | 0.432476 | 0.001367 | 0.001305 | 0.001407 |
| return_function_shared_14.test | RUN | 0.140959 | 0.398008 | 0.434274 | 0.001366 | 0.001228 | 0.001303 |
| return_function_static_14.test | RUN | 0.138789 | 0.400451 | 0.432502 | 0.001241 | 0.001419 | 0.001207 |
| quick.test | RUN | 0.147334 | 0.396397 | 0.419944 | 0.001188 | 0.001421 | 0.001199 |
| issue_42.test | COMPILE | 0.112470 | 0.253536 | 0.285674 | — | — | — |
| fn_eq_bind_test.test | RUN | 0.184491 | 0.540262 | 0.629856 | 0.001197 | 0.001485 | 0.001278 |
| contains_test_no_rtti.test | RUN | 0.165500 | 0.616629 | 0.608754 | 0.001206 | 0.001252 | 0.000922 |
| contains2_test_no_rtti.test | RUN | 0.148543 | 0.457310 | 0.475372 | 0.001247 | 0.001196 | 0.001358 |
| contains3_test.test | RUN | 0.140470 | 0.347102 | 0.413737 | 0.001236 | 0.001335 | 0.001356 |
| contains3_test_no_rtti.test | RUN | 0.094033 | 0.306051 | 0.299233 | 0.000935 | 0.000981 | 0.000953 |
| issue_53.test | COMPILE | 0.082156 | 0.206668 | 0.207556 | — | — | — |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.991× | 0.987×, 0.994× | 1.009× |
| clang | 0.974× | 0.971×, 0.977× | 0.997× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1364 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/43740486413).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| allocator_test.test | 10 | 0.000757s | 0.000732s | 0.000730s | byte equality observed |
| contains2_test.test | 10 | 0.000743s | 0.000718s | 0.000720s | byte equality observed |
| contains2_test_no_rtti.test | 10 | 0.000724s | 0.000729s | 0.000721s | byte equality observed |
| contains3_test.test | 10 | 0.000733s | 0.000724s | 0.000727s | byte equality observed |
| contains3_test_no_rtti.test | 10 | 0.000731s | 0.000728s | 0.000715s | byte equality observed |
| contains_test.test | 10 | 0.000747s | 0.000735s | 0.000715s | byte equality observed |
| contains_test_no_rtti.test | 10 | 0.000748s | 0.000731s | 0.000756s | byte equality observed |
| fn_eq_bind_test.test | 10 | 0.000737s | 0.000748s | 0.000725s | byte equality observed |
| function_arith_cxx98.test | 10 | 0.000750s | 0.000749s | 0.000731s | byte equality observed |
| function_arith_portable.test | 10 | 0.000743s | 0.000744s | 0.000726s | byte equality observed |
| function_n_test.test | 10 | 0.000753s | 0.000747s | 0.000734s | byte equality observed |
| function_ref_cxx98.test | 10 | 0.000730s | 0.000716s | 0.000703s | byte equality observed |
| function_ref_portable.test | 10 | 0.000718s | 0.000713s | 0.000705s | byte equality observed |
| function_test.test | 10 | 0.000784s | 0.000805s | 0.000769s | byte equality observed |
| function_test_no_rtti.test | 10 | 0.000785s | 0.000774s | 0.000763s | byte equality observed |
| lambda_test.test | 10 | 0.000762s | 0.000746s | 0.000733s | byte equality observed |
| mem_fun_cxx98.test | 10 | 0.000817s | 0.000752s | 0.000737s | byte equality observed |
| mem_fun_portable.test | 10 | 0.000817s | 0.000769s | 0.000750s | byte equality observed |
| mixed_cxxstd_shared.test | 10 | 0.000904s | 0.000853s | 0.000789s | byte equality observed |
| mixed_cxxstd_shared_0x.test | 10 | 0.000880s | 0.000851s | 0.000793s | byte equality observed |
| mixed_cxxstd_shared_14.test | 10 | 0.000878s | 0.000874s | 0.000785s | byte equality observed |
| mixed_cxxstd_static.test | 10 | 0.000827s | 0.000815s | 0.000753s | byte equality observed |
| mixed_cxxstd_static_0x.test | 10 | 0.000826s | 0.000795s | 0.000834s | byte equality observed |
| mixed_cxxstd_static_14.test | 10 | 0.000811s | 0.000827s | 0.000841s | byte equality observed |
| nothrow_swap.test | 10 | 0.000809s | 0.000822s | 0.000825s | byte equality observed |
| quick.test | 10 | 0.000817s | 0.000829s | 0.000820s | byte equality observed |
| result_arg_n_types_test.test | 10 | 0.000822s | 0.000791s | 0.000837s | byte equality observed |
| result_arg_types_test.test | 10 | 0.000799s | 0.000804s | 0.000803s | byte equality observed |
| return_function_shared.test | 10 | 0.000878s | 0.000842s | 0.000874s | byte equality observed |
| return_function_shared_0x.test | 10 | 0.000873s | 0.000849s | 0.000866s | byte equality observed |
| return_function_shared_14.test | 10 | 0.000853s | 0.000865s | 0.000847s | byte equality observed |
| return_function_static.test | 10 | 0.000833s | 0.000834s | 0.000804s | byte equality observed |
| return_function_static_0x.test | 10 | 0.000835s | 0.000806s | 0.000813s | byte equality observed |
| return_function_static_14.test | 10 | 0.000832s | 0.000801s | 0.000829s | byte equality observed |
| rvalues_test.test | 10 | 0.000839s | 0.000823s | 0.000795s | byte equality observed |
| stateless_test.test | 10 | 0.000828s | 0.000806s | 0.000799s | byte equality observed |
| std_bind_cxx98.test | 10 | 0.000793s | 0.000808s | 0.000797s | byte equality observed |
| std_bind_portable.test | 10 | 0.000782s | 0.000768s | 0.000767s | byte equality observed |
| sum_avg_cxx98.test | 10 | 0.000788s | 0.000781s | 0.000807s | byte equality observed |
| sum_avg_portable.test | 10 | 0.000780s | 0.000759s | 0.000809s | byte equality observed |
| test_bad_function_call_shared.test | 10 | 0.000855s | 0.000876s | 0.000862s | byte equality observed |
| test_bad_function_call_static.test | 10 | 0.000814s | 0.000818s | 0.000826s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/43740486413).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
