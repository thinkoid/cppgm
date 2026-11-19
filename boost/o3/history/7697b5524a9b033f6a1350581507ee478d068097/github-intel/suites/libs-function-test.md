# libs/function/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| function_test.test | RUN | 0.237489 | 1.365622 | 1.122619 | 0.001167 | 0.001433 | 0.001181 |
| function_test_no_rtti.test | RUN | 0.231298 | 1.332173 | 1.123852 | 0.001213 | 0.001432 | 0.001298 |
| function_n_test.test | RUN | 0.218401 | 1.099954 | 0.957434 | 0.001240 | 0.001347 | 0.001244 |
| allocator_test.test | RUN | 0.173787 | 0.614350 | 0.624048 | 0.001310 | 0.001340 | 0.001290 |
| stateless_test.test | RUN | 0.127396 | 0.324402 | 0.397208 | 0.001131 | 0.001317 | 0.001265 |
| lambda_test.test | RUN | 0.272174 | 0.807979 | 0.862523 | 0.001317 | 0.001215 | 0.001150 |
| function_test_fail1.test | COMPILE_FAIL | 0.095628 | 0.215186 | 0.268258 | — | — | — |
| function_test_fail2.test | COMPILE_FAIL | 0.096815 | 0.217733 | 0.267504 | — | — | — |
| function_30.test | COMPILE | 0.103238 | 0.229368 | 0.278108 | — | — | — |
| function_30_repeat.test | COMPILE | 0.098069 | 0.231534 | 0.277991 | — | — | — |
| function_arith_cxx98.test | RUN | 0.131706 | 0.394783 | 0.434350 | 0.001578 | 0.001213 | 0.001230 |
| function_arith_portable.test | RUN | 0.130577 | 0.370059 | 0.414619 | 0.001196 | 0.001104 | 0.001290 |
| sum_avg_cxx98.test | RUN | 0.127557 | 0.323084 | 0.394413 | 0.001138 | 0.001257 | 0.001182 |
| sum_avg_portable.test | RUN | 0.129287 | 0.295317 | 0.374227 | 0.001160 | 0.001215 | 0.001255 |
| mem_fun_cxx98.test | RUN | 0.147264 | 0.451344 | 0.486590 | 0.001189 | 0.001265 | 0.001172 |
| mem_fun_portable.test | RUN | 0.139966 | 0.411876 | 0.461120 | 0.001100 | 0.001294 | 0.001334 |
| std_bind_cxx98.test | RUN | 0.129551 | 0.384957 | 0.426385 | 0.001075 | 0.001316 | 0.001459 |
| std_bind_portable.test | RUN | 0.136162 | 0.362789 | 0.394117 | 0.001276 | 0.001362 | 0.001359 |
| function_ref_cxx98.test | RUN | 0.125642 | 0.319896 | 0.384786 | 0.001297 | 0.001078 | 0.001343 |
| function_ref_portable.test | RUN | 0.125569 | 0.289807 | 0.368232 | 0.001159 | 0.001120 | 0.001097 |
| contains_test.test | RUN | 0.157102 | 0.618682 | 0.603954 | 0.001162 | 0.001411 | 0.001261 |
| contains2_test.test | RUN | 0.142122 | 0.443337 | 0.466194 | 0.001320 | 0.001154 | 0.001296 |
| nothrow_swap.test | RUN | 0.137970 | 0.416350 | 0.451804 | 0.001234 | 0.001097 | 0.001181 |
| rvalues_test.test | RUN | 0.154489 | 0.509837 | 0.518963 | 0.001184 | 0.001207 | 0.001172 |
| function_typeof_test.test | COMPILE | 0.099571 | 0.221181 | 0.266514 | — | — | — |
| result_arg_types_test.test | RUN | 0.143864 | 0.348564 | 0.463697 | 0.001314 | 0.001370 | 0.001185 |
| result_arg_n_types_test.test | RUN | 0.157787 | 0.389408 | 0.540618 | 0.001179 | 0.001345 | 0.001336 |
| test_bad_function_call_shared.test | RUN | 0.124865 | 0.320752 | 0.390828 | 0.001322 | 0.001501 | 0.001272 |
| test_bad_function_call_static.test | RUN | 0.125657 | 0.317803 | 0.389340 | 0.001219 | 0.001175 | 0.001358 |
| mixed_cxxstd_shared.test | RUN | 0.133785 | 0.385823 | 0.435260 | 0.001240 | 0.001381 | 0.001164 |
| mixed_cxxstd_static.test | RUN | 0.134881 | 0.384173 | 0.441949 | 0.001311 | 0.001176 | 0.001170 |
| mixed_cxxstd_shared_0x.test | RUN | 0.137854 | 0.378814 | 0.434161 | 0.001262 | 0.001301 | 0.001570 |
| mixed_cxxstd_static_0x.test | RUN | 0.134151 | 0.383916 | 0.440605 | 0.001508 | 0.001394 | 0.001350 |
| mixed_cxxstd_shared_14.test | RUN | 0.134208 | 0.383060 | 0.434132 | 0.001455 | 0.001389 | 0.001285 |
| mixed_cxxstd_static_14.test | RUN | 0.136381 | 0.381579 | 0.434461 | 0.001339 | 0.001218 | 0.001287 |
| return_function_shared.test | RUN | 0.133699 | 0.379648 | 0.435916 | 0.001171 | 0.001350 | 0.001254 |
| return_function_static.test | RUN | 0.136169 | 0.386134 | 0.435370 | 0.001147 | 0.001215 | 0.001199 |
| return_function_shared_0x.test | RUN | 0.135756 | 0.388533 | 0.429956 | 0.001368 | 0.001352 | 0.001489 |
| return_function_static_0x.test | RUN | 0.131507 | 0.386950 | 0.430362 | 0.001303 | 0.001389 | 0.001176 |
| return_function_shared_14.test | RUN | 0.134994 | 0.385797 | 0.422011 | 0.001182 | 0.001355 | 0.001254 |
| return_function_static_14.test | RUN | 0.136089 | 0.376848 | 0.433405 | 0.001285 | 0.001331 | 0.001221 |
| quick.test | RUN | 0.137537 | 0.386097 | 0.429132 | 0.001211 | 0.001300 | 0.001277 |
| issue_42.test | COMPILE | 0.104435 | 0.246574 | 0.289419 | — | — | — |
| fn_eq_bind_test.test | RUN | 0.174675 | 0.534097 | 0.625905 | 0.001054 | 0.001332 | 0.001207 |
| contains_test_no_rtti.test | RUN | 0.156243 | 0.605563 | 0.598089 | 0.001252 | 0.001273 | 0.001018 |
| contains2_test_no_rtti.test | RUN | 0.144211 | 0.450939 | 0.470422 | 0.001346 | 0.001335 | 0.001026 |
| contains3_test.test | RUN | 0.131432 | 0.347924 | 0.414816 | 0.001154 | 0.001230 | 0.001334 |
| contains3_test_no_rtti.test | RUN | 0.106910 | 0.284975 | 0.269338 | 0.001120 | 0.000898 | 0.000869 |
| issue_53.test | COMPILE | 0.079935 | 0.182626 | 0.204752 | — | — | — |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.984× | 0.991×, 0.978× | 0.988× |
| clang | 0.983× | 0.984×, 0.981× | 0.990× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1363 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44560957980).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| allocator_test.test | 10 | 0.000742s | 0.000734s | 0.000751s | byte equality observed |
| contains2_test.test | 10 | 0.000749s | 0.000729s | 0.000732s | byte equality observed |
| contains2_test_no_rtti.test | 10 | 0.000749s | 0.000727s | 0.000750s | byte equality observed |
| contains3_test.test | 10 | 0.000747s | 0.000719s | 0.000735s | byte equality observed |
| contains3_test_no_rtti.test | 10 | 0.000744s | 0.000723s | 0.000747s | byte equality observed |
| contains_test.test | 10 | 0.000745s | 0.000734s | 0.000748s | byte equality observed |
| contains_test_no_rtti.test | 10 | 0.000750s | 0.000727s | 0.000734s | byte equality observed |
| fn_eq_bind_test.test | 10 | 0.000727s | 0.000718s | 0.000737s | byte equality observed |
| function_arith_cxx98.test | 10 | 0.000765s | 0.000736s | 0.000736s | byte equality observed |
| function_arith_portable.test | 10 | 0.000747s | 0.000730s | 0.000740s | byte equality observed |
| function_n_test.test | 10 | 0.000749s | 0.000732s | 0.000745s | byte equality observed |
| function_ref_cxx98.test | 10 | 0.000730s | 0.000705s | 0.000726s | byte equality observed |
| function_ref_portable.test | 10 | 0.000721s | 0.000706s | 0.000723s | byte equality observed |
| function_test.test | 10 | 0.000777s | 0.000761s | 0.000770s | byte equality observed |
| function_test_no_rtti.test | 10 | 0.000776s | 0.000760s | 0.000771s | byte equality observed |
| lambda_test.test | 10 | 0.000755s | 0.000739s | 0.000732s | byte equality observed |
| mem_fun_cxx98.test | 10 | 0.000793s | 0.000788s | 0.000736s | byte equality observed |
| mem_fun_portable.test | 10 | 0.000782s | 0.000793s | 0.000739s | byte equality observed |
| mixed_cxxstd_shared.test | 10 | 0.000866s | 0.000863s | 0.000787s | byte equality observed |
| mixed_cxxstd_shared_0x.test | 10 | 0.000900s | 0.000845s | 0.000804s | byte equality observed |
| mixed_cxxstd_shared_14.test | 10 | 0.000872s | 0.000867s | 0.000868s | byte equality observed |
| mixed_cxxstd_static.test | 10 | 0.000832s | 0.000835s | 0.000789s | byte equality observed |
| mixed_cxxstd_static_0x.test | 10 | 0.000837s | 0.000838s | 0.000804s | byte equality observed |
| mixed_cxxstd_static_14.test | 10 | 0.000838s | 0.000829s | 0.000800s | byte equality observed |
| nothrow_swap.test | 10 | 0.000808s | 0.000805s | 0.000826s | byte equality observed |
| quick.test | 10 | 0.000818s | 0.000811s | 0.000827s | byte equality observed |
| result_arg_n_types_test.test | 10 | 0.000822s | 0.000805s | 0.000822s | byte equality observed |
| result_arg_types_test.test | 10 | 0.000831s | 0.000814s | 0.000795s | byte equality observed |
| return_function_shared.test | 10 | 0.000863s | 0.000848s | 0.000842s | byte equality observed |
| return_function_shared_0x.test | 10 | 0.000860s | 0.000867s | 0.000875s | byte equality observed |
| return_function_shared_14.test | 10 | 0.000870s | 0.000867s | 0.000895s | byte equality observed |
| return_function_static.test | 10 | 0.000832s | 0.000819s | 0.000843s | byte equality observed |
| return_function_static_0x.test | 10 | 0.000813s | 0.000805s | 0.000820s | byte equality observed |
| return_function_static_14.test | 10 | 0.000813s | 0.000832s | 0.000808s | byte equality observed |
| rvalues_test.test | 10 | 0.000819s | 0.000815s | 0.000800s | byte equality observed |
| stateless_test.test | 10 | 0.000821s | 0.000804s | 0.000787s | byte equality observed |
| std_bind_cxx98.test | 10 | 0.000808s | 0.000773s | 0.000791s | byte equality observed |
| std_bind_portable.test | 10 | 0.000826s | 0.000788s | 0.000806s | byte equality observed |
| sum_avg_cxx98.test | 10 | 0.000799s | 0.000798s | 0.000790s | byte equality observed |
| sum_avg_portable.test | 10 | 0.000803s | 0.000799s | 0.000814s | byte equality observed |
| test_bad_function_call_shared.test | 10 | 0.000874s | 0.000855s | 0.000884s | byte equality observed |
| test_bad_function_call_static.test | 10 | 0.000830s | 0.000803s | 0.000828s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44560957980).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
