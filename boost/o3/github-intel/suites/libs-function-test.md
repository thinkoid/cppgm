# libs/function/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| function_test.test | RUN | 0.241648 | 1.358319 | 1.142590 | 0.001101 | 0.001210 | 0.000975 |
| function_test_no_rtti.test | RUN | 0.237837 | 1.332357 | 1.133404 | 0.001171 | 0.001398 | 0.001115 |
| function_n_test.test | RUN | 0.217982 | 1.098499 | 0.953136 | 0.001214 | 0.001211 | 0.001437 |
| allocator_test.test | RUN | 0.176443 | 0.619505 | 0.627160 | 0.001351 | 0.001314 | 0.001352 |
| stateless_test.test | RUN | 0.130713 | 0.324291 | 0.396357 | 0.001110 | 0.001283 | 0.001149 |
| lambda_test.test | RUN | 0.275948 | 0.794665 | 0.852921 | 0.001067 | 0.001387 | 0.001322 |
| function_test_fail1.test | COMPILE_FAIL | 0.096864 | 0.215916 | 0.266110 | — | — | — |
| function_test_fail2.test | COMPILE_FAIL | 0.098305 | 0.219470 | 0.267684 | — | — | — |
| function_30.test | COMPILE | 0.098001 | 0.229246 | 0.279305 | — | — | — |
| function_30_repeat.test | COMPILE | 0.099015 | 0.229828 | 0.272708 | — | — | — |
| function_arith_cxx98.test | RUN | 0.132298 | 0.393708 | 0.430883 | 0.001129 | 0.001293 | 0.001208 |
| function_arith_portable.test | RUN | 0.130685 | 0.370246 | 0.404964 | 0.000977 | 0.001074 | 0.001368 |
| sum_avg_cxx98.test | RUN | 0.128200 | 0.312371 | 0.382511 | 0.001021 | 0.001157 | 0.001281 |
| sum_avg_portable.test | RUN | 0.124132 | 0.291505 | 0.376207 | 0.001032 | 0.001300 | 0.001293 |
| mem_fun_cxx98.test | RUN | 0.139676 | 0.454627 | 0.486401 | 0.001113 | 0.001117 | 0.001300 |
| mem_fun_portable.test | RUN | 0.137583 | 0.413656 | 0.453482 | 0.001043 | 0.001183 | 0.001126 |
| std_bind_cxx98.test | RUN | 0.130490 | 0.379335 | 0.421131 | 0.001063 | 0.001356 | 0.001342 |
| std_bind_portable.test | RUN | 0.134263 | 0.351750 | 0.381676 | 0.001090 | 0.001324 | 0.001196 |
| function_ref_cxx98.test | RUN | 0.121341 | 0.320856 | 0.377707 | 0.001077 | 0.001170 | 0.001083 |
| function_ref_portable.test | RUN | 0.124898 | 0.288419 | 0.361126 | 0.001063 | 0.000986 | 0.001246 |
| contains_test.test | RUN | 0.160084 | 0.617009 | 0.597623 | 0.001077 | 0.001288 | 0.001354 |
| contains2_test.test | RUN | 0.141250 | 0.444334 | 0.459691 | 0.001030 | 0.001284 | 0.001287 |
| nothrow_swap.test | RUN | 0.138817 | 0.419422 | 0.444365 | 0.001141 | 0.001328 | 0.001217 |
| rvalues_test.test | RUN | 0.140561 | 0.506973 | 0.517814 | 0.001064 | 0.001302 | 0.001185 |
| function_typeof_test.test | COMPILE | 0.102825 | 0.224592 | 0.268207 | — | — | — |
| result_arg_types_test.test | RUN | 0.143309 | 0.354605 | 0.466655 | 0.001074 | 0.001168 | 0.001344 |
| result_arg_n_types_test.test | RUN | 0.159139 | 0.382764 | 0.550235 | 0.001051 | 0.001236 | 0.001244 |
| test_bad_function_call_shared.test | RUN | 0.128102 | 0.321539 | 0.375996 | 0.001215 | 0.001276 | 0.001341 |
| test_bad_function_call_static.test | RUN | 0.127850 | 0.315959 | 0.393261 | 0.001164 | 0.001275 | 0.001288 |
| mixed_cxxstd_shared.test | RUN | 0.138913 | 0.382338 | 0.433899 | 0.001305 | 0.001245 | 0.001291 |
| mixed_cxxstd_static.test | RUN | 0.131514 | 0.382624 | 0.436773 | 0.001010 | 0.001191 | 0.001164 |
| mixed_cxxstd_shared_0x.test | RUN | 0.134082 | 0.376591 | 0.430589 | 0.001141 | 0.001442 | 0.001386 |
| mixed_cxxstd_static_0x.test | RUN | 0.132730 | 0.374244 | 0.444347 | 0.001246 | 0.001313 | 0.001343 |
| mixed_cxxstd_shared_14.test | RUN | 0.131632 | 0.380356 | 0.431563 | 0.001191 | 0.001430 | 0.001321 |
| mixed_cxxstd_static_14.test | RUN | 0.136080 | 0.384931 | 0.435702 | 0.001047 | 0.001260 | 0.001384 |
| return_function_shared.test | RUN | 0.134467 | 0.386086 | 0.430911 | 0.001168 | 0.001481 | 0.001326 |
| return_function_static.test | RUN | 0.128459 | 0.384140 | 0.427637 | 0.001100 | 0.001376 | 0.001150 |
| return_function_shared_0x.test | RUN | 0.130531 | 0.388332 | 0.428158 | 0.001209 | 0.001488 | 0.001397 |
| return_function_static_0x.test | RUN | 0.133982 | 0.385482 | 0.417904 | 0.001029 | 0.001303 | 0.001303 |
| return_function_shared_14.test | RUN | 0.130544 | 0.391318 | 0.425714 | 0.001218 | 0.001061 | 0.001250 |
| return_function_static_14.test | RUN | 0.133466 | 0.385537 | 0.423626 | 0.001287 | 0.001194 | 0.001360 |
| quick.test | RUN | 0.141595 | 0.386313 | 0.409145 | 0.001171 | 0.001271 | 0.001182 |
| issue_42.test | COMPILE | 0.104880 | 0.249360 | 0.281941 | — | — | — |
| fn_eq_bind_test.test | RUN | 0.178558 | 0.525139 | 0.625331 | 0.001046 | 0.001130 | 0.001273 |
| contains_test_no_rtti.test | RUN | 0.165357 | 0.607100 | 0.596739 | 0.001264 | 0.001114 | 0.001180 |
| contains2_test_no_rtti.test | RUN | 0.144151 | 0.450474 | 0.467481 | 0.001090 | 0.001330 | 0.001011 |
| contains3_test.test | RUN | 0.137835 | 0.342736 | 0.414060 | 0.001081 | 0.001140 | 0.001277 |
| contains3_test_no_rtti.test | RUN | 0.091545 | 0.294638 | 0.281377 | 0.000828 | 0.000882 | 0.000935 |
| issue_53.test | COMPILE | 0.093208 | 0.200355 | 0.204171 | — | — | — |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.996× | 0.992×, 1.001× | 0.985× |
| clang | 0.982× | 0.979×, 0.985× | 1.009× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1363 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/43801643681).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| allocator_test.test | 10 | 0.000747s | 0.000724s | 0.000711s | byte equality observed |
| contains2_test.test | 10 | 0.000731s | 0.000734s | 0.000705s | byte equality observed |
| contains2_test_no_rtti.test | 10 | 0.000726s | 0.000747s | 0.000700s | byte equality observed |
| contains3_test.test | 10 | 0.000732s | 0.000735s | 0.000708s | byte equality observed |
| contains3_test_no_rtti.test | 10 | 0.000733s | 0.000736s | 0.000722s | byte equality observed |
| contains_test.test | 10 | 0.000745s | 0.000723s | 0.000704s | byte equality observed |
| contains_test_no_rtti.test | 10 | 0.000744s | 0.000743s | 0.000714s | byte equality observed |
| fn_eq_bind_test.test | 10 | 0.000728s | 0.000737s | 0.000701s | byte equality observed |
| function_arith_cxx98.test | 10 | 0.000739s | 0.000757s | 0.000720s | byte equality observed |
| function_arith_portable.test | 10 | 0.000746s | 0.000747s | 0.000718s | byte equality observed |
| function_n_test.test | 10 | 0.000749s | 0.000742s | 0.000722s | byte equality observed |
| function_ref_cxx98.test | 10 | 0.000707s | 0.000727s | 0.000695s | byte equality observed |
| function_ref_portable.test | 10 | 0.000704s | 0.000712s | 0.000694s | byte equality observed |
| function_test.test | 10 | 0.000778s | 0.000771s | 0.000767s | byte equality observed |
| function_test_no_rtti.test | 10 | 0.000776s | 0.000772s | 0.000765s | byte equality observed |
| lambda_test.test | 10 | 0.000745s | 0.000793s | 0.000720s | byte equality observed |
| mem_fun_cxx98.test | 10 | 0.000769s | 0.000822s | 0.000723s | byte equality observed |
| mem_fun_portable.test | 10 | 0.000778s | 0.000817s | 0.000734s | byte equality observed |
| mixed_cxxstd_shared.test | 10 | 0.000832s | 0.000880s | 0.000778s | byte equality observed |
| mixed_cxxstd_shared_0x.test | 10 | 0.000829s | 0.000851s | 0.000779s | byte equality observed |
| mixed_cxxstd_shared_14.test | 10 | 0.000835s | 0.000865s | 0.000781s | byte equality observed |
| mixed_cxxstd_static.test | 10 | 0.000812s | 0.000817s | 0.000733s | byte equality observed |
| mixed_cxxstd_static_0x.test | 10 | 0.000820s | 0.000807s | 0.000742s | byte equality observed |
| mixed_cxxstd_static_14.test | 10 | 0.000807s | 0.000793s | 0.000728s | byte equality observed |
| nothrow_swap.test | 10 | 0.000811s | 0.000823s | 0.000769s | byte equality observed |
| quick.test | 10 | 0.000811s | 0.000843s | 0.000807s | byte equality observed |
| result_arg_n_types_test.test | 10 | 0.000799s | 0.000805s | 0.000786s | byte equality observed |
| result_arg_types_test.test | 10 | 0.000807s | 0.000795s | 0.000800s | byte equality observed |
| return_function_shared.test | 10 | 0.000845s | 0.000824s | 0.000861s | byte equality observed |
| return_function_shared_0x.test | 10 | 0.000857s | 0.000852s | 0.000861s | byte equality observed |
| return_function_shared_14.test | 10 | 0.000851s | 0.000863s | 0.000863s | byte equality observed |
| return_function_static.test | 10 | 0.000809s | 0.000823s | 0.000806s | byte equality observed |
| return_function_static_0x.test | 10 | 0.000799s | 0.000786s | 0.000779s | byte equality observed |
| return_function_static_14.test | 10 | 0.000802s | 0.000799s | 0.000783s | byte equality observed |
| rvalues_test.test | 10 | 0.000818s | 0.000793s | 0.000815s | byte equality observed |
| stateless_test.test | 10 | 0.000797s | 0.000790s | 0.000808s | byte equality observed |
| std_bind_cxx98.test | 10 | 0.000793s | 0.000789s | 0.000775s | byte equality observed |
| std_bind_portable.test | 10 | 0.000779s | 0.000781s | 0.000766s | byte equality observed |
| sum_avg_cxx98.test | 10 | 0.000782s | 0.000778s | 0.000766s | byte equality observed |
| sum_avg_portable.test | 10 | 0.000781s | 0.000797s | 0.000780s | byte equality observed |
| test_bad_function_call_shared.test | 10 | 0.000881s | 0.000844s | 0.000848s | byte equality observed |
| test_bad_function_call_static.test | 10 | 0.000829s | 0.000812s | 0.000799s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/43801643681).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
