# libs/function/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| function_test.test | RUN | 0.232780 | 1.335223 | 1.109913 | 0.001115 | 0.001386 | 0.001241 |
| function_test_no_rtti.test | RUN | 0.231046 | 1.334808 | 1.126610 | 0.001323 | 0.001215 | 0.001128 |
| function_n_test.test | RUN | 0.218272 | 1.103637 | 0.929962 | 0.001251 | 0.001318 | 0.001171 |
| allocator_test.test | RUN | 0.172681 | 0.610536 | 0.620020 | 0.001376 | 0.001356 | 0.001299 |
| stateless_test.test | RUN | 0.126036 | 0.323311 | 0.391278 | 0.001138 | 0.001194 | 0.001144 |
| lambda_test.test | RUN | 0.271460 | 0.795251 | 0.840077 | 0.001187 | 0.001348 | 0.001141 |
| function_test_fail1.test | COMPILE_FAIL | 0.097048 | 0.217377 | 0.257539 | — | — | — |
| function_test_fail2.test | COMPILE_FAIL | 0.097235 | 0.210387 | 0.260498 | — | — | — |
| function_30.test | COMPILE | 0.098926 | 0.230550 | 0.270974 | — | — | — |
| function_30_repeat.test | COMPILE | 0.102102 | 0.229783 | 0.277326 | — | — | — |
| function_arith_cxx98.test | RUN | 0.130271 | 0.392581 | 0.419442 | 0.001173 | 0.001325 | 0.001035 |
| function_arith_portable.test | RUN | 0.131140 | 0.369539 | 0.398660 | 0.001145 | 0.001210 | 0.001043 |
| sum_avg_cxx98.test | RUN | 0.126988 | 0.316005 | 0.376656 | 0.000963 | 0.001049 | 0.001212 |
| sum_avg_portable.test | RUN | 0.120040 | 0.289663 | 0.364845 | 0.001085 | 0.001291 | 0.001124 |
| mem_fun_cxx98.test | RUN | 0.144342 | 0.460150 | 0.490402 | 0.001251 | 0.001206 | 0.001177 |
| mem_fun_portable.test | RUN | 0.142532 | 0.416831 | 0.454215 | 0.001090 | 0.001214 | 0.001082 |
| std_bind_cxx98.test | RUN | 0.133274 | 0.375448 | 0.414927 | 0.001098 | 0.001202 | 0.001156 |
| std_bind_portable.test | RUN | 0.134121 | 0.354397 | 0.387163 | 0.001057 | 0.001175 | 0.001215 |
| function_ref_cxx98.test | RUN | 0.125450 | 0.319183 | 0.385798 | 0.001091 | 0.001199 | 0.001150 |
| function_ref_portable.test | RUN | 0.123945 | 0.287201 | 0.369158 | 0.001030 | 0.001087 | 0.001232 |
| contains_test.test | RUN | 0.158269 | 0.613021 | 0.590188 | 0.001246 | 0.001364 | 0.001234 |
| contains2_test.test | RUN | 0.139917 | 0.437539 | 0.460194 | 0.001120 | 0.001191 | 0.001207 |
| nothrow_swap.test | RUN | 0.136713 | 0.415679 | 0.442853 | 0.001267 | 0.001187 | 0.001293 |
| rvalues_test.test | RUN | 0.154240 | 0.511881 | 0.510374 | 0.001134 | 0.001310 | 0.001100 |
| function_typeof_test.test | COMPILE | 0.100016 | 0.221576 | 0.268811 | — | — | — |
| result_arg_types_test.test | RUN | 0.142871 | 0.353004 | 0.457546 | 0.001123 | 0.001162 | 0.001168 |
| result_arg_n_types_test.test | RUN | 0.158479 | 0.382342 | 0.534849 | 0.001144 | 0.001221 | 0.001152 |
| test_bad_function_call_shared.test | RUN | 0.126941 | 0.316665 | 0.375471 | 0.001359 | 0.001323 | 0.001225 |
| test_bad_function_call_static.test | RUN | 0.124839 | 0.318019 | 0.380589 | 0.001192 | 0.001215 | 0.001182 |
| mixed_cxxstd_shared.test | RUN | 0.139010 | 0.386440 | 0.428964 | 0.001207 | 0.001464 | 0.001206 |
| mixed_cxxstd_static.test | RUN | 0.132198 | 0.380340 | 0.436215 | 0.001176 | 0.001145 | 0.001238 |
| mixed_cxxstd_shared_0x.test | RUN | 0.136481 | 0.375617 | 0.433860 | 0.001165 | 0.001438 | 0.001226 |
| mixed_cxxstd_static_0x.test | RUN | 0.128699 | 0.377049 | 0.434945 | 0.001329 | 0.001387 | 0.001156 |
| mixed_cxxstd_shared_14.test | RUN | 0.134052 | 0.375346 | 0.436774 | 0.001131 | 0.001320 | 0.001277 |
| mixed_cxxstd_static_14.test | RUN | 0.133235 | 0.383286 | 0.432307 | 0.001133 | 0.001311 | 0.001180 |
| return_function_shared.test | RUN | 0.128402 | 0.380606 | 0.428131 | 0.001105 | 0.001368 | 0.001297 |
| return_function_static.test | RUN | 0.133625 | 0.384933 | 0.424278 | 0.001067 | 0.001203 | 0.001161 |
| return_function_shared_0x.test | RUN | 0.132575 | 0.388035 | 0.421435 | 0.001236 | 0.001413 | 0.001253 |
| return_function_static_0x.test | RUN | 0.128071 | 0.380905 | 0.422785 | 0.001107 | 0.001204 | 0.001162 |
| return_function_shared_14.test | RUN | 0.128097 | 0.384127 | 0.413880 | 0.001403 | 0.001449 | 0.001276 |
| return_function_static_14.test | RUN | 0.132491 | 0.382865 | 0.425381 | 0.001209 | 0.001263 | 0.001180 |
| quick.test | RUN | 0.141286 | 0.381180 | 0.414190 | 0.001074 | 0.001274 | 0.001258 |
| issue_42.test | COMPILE | 0.107813 | 0.245395 | 0.282956 | — | — | — |
| fn_eq_bind_test.test | RUN | 0.178964 | 0.526317 | 0.604166 | 0.001204 | 0.001196 | 0.001265 |
| contains_test_no_rtti.test | RUN | 0.162019 | 0.607586 | 0.597895 | 0.001194 | 0.000832 | 0.001036 |
| contains2_test_no_rtti.test | RUN | 0.142306 | 0.447407 | 0.467178 | 0.001258 | 0.001221 | 0.000797 |
| contains3_test.test | RUN | 0.132696 | 0.346828 | 0.407321 | 0.000817 | 0.001153 | 0.001137 |
| contains3_test_no_rtti.test | RUN | 0.090881 | 0.292279 | 0.284485 | 0.000915 | 0.000931 | 0.000860 |
| issue_53.test | COMPILE | 0.083491 | 0.205501 | 0.198122 | — | — | — |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.997× | 0.995×, 0.998× | 1.014× |
| clang | 0.999× | 0.996×, 1.002× | 0.994× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1364 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44402206984).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| allocator_test.test | 10 | 0.000725s | 0.000728s | 0.000733s | byte equality observed |
| contains2_test.test | 10 | 0.000716s | 0.000725s | 0.000734s | byte equality observed |
| contains2_test_no_rtti.test | 10 | 0.000712s | 0.000719s | 0.000726s | byte equality observed |
| contains3_test.test | 10 | 0.000706s | 0.000726s | 0.000737s | byte equality observed |
| contains3_test_no_rtti.test | 10 | 0.000710s | 0.000734s | 0.000733s | byte equality observed |
| contains_test.test | 10 | 0.000714s | 0.000742s | 0.000728s | byte equality observed |
| contains_test_no_rtti.test | 10 | 0.000722s | 0.000735s | 0.000721s | byte equality observed |
| fn_eq_bind_test.test | 10 | 0.000710s | 0.000727s | 0.000714s | byte equality observed |
| function_arith_cxx98.test | 10 | 0.000731s | 0.000743s | 0.000724s | byte equality observed |
| function_arith_portable.test | 10 | 0.000724s | 0.000743s | 0.000736s | byte equality observed |
| function_n_test.test | 10 | 0.000737s | 0.000745s | 0.000735s | byte equality observed |
| function_ref_cxx98.test | 10 | 0.000710s | 0.000717s | 0.000712s | byte equality observed |
| function_ref_portable.test | 10 | 0.000711s | 0.000706s | 0.000715s | byte equality observed |
| function_test.test | 10 | 0.000763s | 0.000774s | 0.000754s | byte equality observed |
| function_test_no_rtti.test | 10 | 0.000752s | 0.000762s | 0.000763s | byte equality observed |
| lambda_test.test | 10 | 0.000720s | 0.000724s | 0.000738s | byte equality observed |
| mem_fun_cxx98.test | 10 | 0.000728s | 0.000732s | 0.000741s | byte equality observed |
| mem_fun_portable.test | 10 | 0.000762s | 0.000735s | 0.000735s | byte equality observed |
| mixed_cxxstd_shared.test | 10 | 0.000826s | 0.000822s | 0.000770s | byte equality observed |
| mixed_cxxstd_shared_0x.test | 10 | 0.000861s | 0.000861s | 0.000793s | byte equality observed |
| mixed_cxxstd_shared_14.test | 10 | 0.000834s | 0.000830s | 0.000810s | byte equality observed |
| mixed_cxxstd_static.test | 10 | 0.000811s | 0.000829s | 0.000753s | byte equality observed |
| mixed_cxxstd_static_0x.test | 10 | 0.000800s | 0.000787s | 0.000808s | byte equality observed |
| mixed_cxxstd_static_14.test | 10 | 0.000829s | 0.000774s | 0.000793s | byte equality observed |
| nothrow_swap.test | 10 | 0.000817s | 0.000800s | 0.000789s | byte equality observed |
| quick.test | 10 | 0.000816s | 0.000823s | 0.000801s | byte equality observed |
| result_arg_n_types_test.test | 10 | 0.000814s | 0.000788s | 0.000810s | byte equality observed |
| result_arg_types_test.test | 10 | 0.000807s | 0.000798s | 0.000810s | byte equality observed |
| return_function_shared.test | 10 | 0.000835s | 0.000860s | 0.000831s | byte equality observed |
| return_function_shared_0x.test | 10 | 0.000837s | 0.000863s | 0.000839s | byte equality observed |
| return_function_shared_14.test | 10 | 0.000832s | 0.000833s | 0.000850s | byte equality observed |
| return_function_static.test | 10 | 0.000791s | 0.000836s | 0.000821s | byte equality observed |
| return_function_static_0x.test | 10 | 0.000800s | 0.000774s | 0.000806s | byte equality observed |
| return_function_static_14.test | 10 | 0.000792s | 0.000791s | 0.000818s | byte equality observed |
| rvalues_test.test | 10 | 0.000798s | 0.000807s | 0.000812s | byte equality observed |
| stateless_test.test | 10 | 0.000801s | 0.000799s | 0.000788s | byte equality observed |
| std_bind_cxx98.test | 10 | 0.000785s | 0.000788s | 0.000756s | byte equality observed |
| std_bind_portable.test | 10 | 0.000764s | 0.000779s | 0.000772s | byte equality observed |
| sum_avg_cxx98.test | 10 | 0.000769s | 0.000803s | 0.000792s | byte equality observed |
| sum_avg_portable.test | 10 | 0.000788s | 0.000769s | 0.000776s | byte equality observed |
| test_bad_function_call_shared.test | 10 | 0.000842s | 0.000861s | 0.000854s | byte equality observed |
| test_bad_function_call_static.test | 10 | 0.000814s | 0.000822s | 0.000808s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44402206984).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
