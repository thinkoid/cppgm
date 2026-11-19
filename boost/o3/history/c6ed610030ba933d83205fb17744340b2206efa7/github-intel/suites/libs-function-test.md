# libs/function/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| function_test.test | RUN | 0.236331 | 1.372491 | 1.145656 | 0.001289 | 0.001249 | 0.001125 |
| function_test_no_rtti.test | RUN | 0.233658 | 1.368564 | 1.145347 | 0.001211 | 0.001183 | 0.001340 |
| function_n_test.test | RUN | 0.216412 | 1.106843 | 0.960024 | 0.001211 | 0.001169 | 0.001349 |
| allocator_test.test | RUN | 0.173805 | 0.627404 | 0.621576 | 0.001468 | 0.001257 | 0.001517 |
| stateless_test.test | RUN | 0.127959 | 0.326144 | 0.403408 | 0.001118 | 0.001198 | 0.001112 |
| lambda_test.test | RUN | 0.269512 | 0.804058 | 0.861736 | 0.001139 | 0.001089 | 0.001273 |
| function_test_fail1.test | COMPILE_FAIL | 0.095979 | 0.221301 | 0.266600 | — | — | — |
| function_test_fail2.test | COMPILE_FAIL | 0.097959 | 0.221311 | 0.267678 | — | — | — |
| function_30.test | COMPILE | 0.099534 | 0.227883 | 0.275935 | — | — | — |
| function_30_repeat.test | COMPILE | 0.102748 | 0.233553 | 0.276937 | — | — | — |
| function_arith_cxx98.test | RUN | 0.134142 | 0.398030 | 0.432468 | 0.001378 | 0.001309 | 0.001430 |
| function_arith_portable.test | RUN | 0.130390 | 0.375881 | 0.405922 | 0.001259 | 0.001179 | 0.001290 |
| sum_avg_cxx98.test | RUN | 0.126545 | 0.321011 | 0.387618 | 0.001195 | 0.001052 | 0.001368 |
| sum_avg_portable.test | RUN | 0.122226 | 0.294654 | 0.375212 | 0.001061 | 0.001264 | 0.001437 |
| mem_fun_cxx98.test | RUN | 0.145267 | 0.466406 | 0.487363 | 0.001344 | 0.001482 | 0.001164 |
| mem_fun_portable.test | RUN | 0.145995 | 0.424266 | 0.451265 | 0.000962 | 0.001409 | 0.001138 |
| std_bind_cxx98.test | RUN | 0.136439 | 0.380781 | 0.427621 | 0.001048 | 0.001207 | 0.001285 |
| std_bind_portable.test | RUN | 0.134131 | 0.350688 | 0.390908 | 0.001064 | 0.001468 | 0.001340 |
| function_ref_cxx98.test | RUN | 0.125205 | 0.323221 | 0.386508 | 0.001337 | 0.001280 | 0.001134 |
| function_ref_portable.test | RUN | 0.123960 | 0.295284 | 0.354956 | 0.001233 | 0.001311 | 0.001133 |
| contains_test.test | RUN | 0.156222 | 0.623462 | 0.600477 | 0.001144 | 0.001424 | 0.001335 |
| contains2_test.test | RUN | 0.144380 | 0.449203 | 0.462827 | 0.001143 | 0.000924 | 0.001189 |
| nothrow_swap.test | RUN | 0.137542 | 0.421270 | 0.450443 | 0.001191 | 0.001485 | 0.001295 |
| rvalues_test.test | RUN | 0.157022 | 0.508856 | 0.519616 | 0.001230 | 0.001340 | 0.001332 |
| function_typeof_test.test | COMPILE | 0.101073 | 0.222226 | 0.269631 | — | — | — |
| result_arg_types_test.test | RUN | 0.148370 | 0.354826 | 0.466323 | 0.001128 | 0.001267 | 0.001166 |
| result_arg_n_types_test.test | RUN | 0.159264 | 0.387210 | 0.550177 | 0.001110 | 0.001255 | 0.001291 |
| test_bad_function_call_shared.test | RUN | 0.128811 | 0.325334 | 0.395410 | 0.001298 | 0.001362 | 0.001383 |
| test_bad_function_call_static.test | RUN | 0.128480 | 0.317908 | 0.376715 | 0.001165 | 0.001248 | 0.001289 |
| mixed_cxxstd_shared.test | RUN | 0.137708 | 0.386461 | 0.447443 | 0.001307 | 0.001314 | 0.001279 |
| mixed_cxxstd_static.test | RUN | 0.136955 | 0.387408 | 0.441620 | 0.001250 | 0.001267 | 0.001275 |
| mixed_cxxstd_shared_0x.test | RUN | 0.139344 | 0.390783 | 0.439816 | 0.001225 | 0.001571 | 0.001429 |
| mixed_cxxstd_static_0x.test | RUN | 0.139664 | 0.384470 | 0.439402 | 0.001144 | 0.001162 | 0.001358 |
| mixed_cxxstd_shared_14.test | RUN | 0.137440 | 0.386528 | 0.442261 | 0.001132 | 0.001358 | 0.001347 |
| mixed_cxxstd_static_14.test | RUN | 0.136270 | 0.385762 | 0.440552 | 0.001296 | 0.001381 | 0.001317 |
| return_function_shared.test | RUN | 0.135011 | 0.382790 | 0.431253 | 0.001255 | 0.001354 | 0.001284 |
| return_function_static.test | RUN | 0.132795 | 0.388510 | 0.424539 | 0.001122 | 0.001471 | 0.001224 |
| return_function_shared_0x.test | RUN | 0.131866 | 0.392099 | 0.430344 | 0.001265 | 0.001474 | 0.001407 |
| return_function_static_0x.test | RUN | 0.132928 | 0.387015 | 0.424155 | 0.001182 | 0.001303 | 0.001385 |
| return_function_shared_14.test | RUN | 0.132451 | 0.388387 | 0.434925 | 0.001300 | 0.001348 | 0.001188 |
| return_function_static_14.test | RUN | 0.130468 | 0.388146 | 0.434662 | 0.001180 | 0.001411 | 0.001379 |
| quick.test | RUN | 0.140973 | 0.384288 | 0.430913 | 0.001154 | 0.001354 | 0.001278 |
| issue_42.test | COMPILE | 0.105525 | 0.243892 | 0.294020 | — | — | — |
| fn_eq_bind_test.test | RUN | 0.178576 | 0.527427 | 0.633592 | 0.001198 | 0.001450 | 0.001184 |
| contains_test_no_rtti.test | RUN | 0.159340 | 0.606761 | 0.610229 | 0.001321 | 0.001109 | 0.001143 |
| contains2_test_no_rtti.test | RUN | 0.141222 | 0.451303 | 0.475988 | 0.001101 | 0.001224 | 0.001123 |
| contains3_test.test | RUN | 0.133931 | 0.344894 | 0.417204 | 0.001052 | 0.001222 | 0.000880 |
| contains3_test_no_rtti.test | RUN | 0.095715 | 0.291646 | 0.294865 | 0.000862 | 0.000909 | 0.000913 |
| issue_53.test | COMPILE | 0.080178 | 0.192862 | 0.206260 | — | — | — |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.997× | 0.989×, 1.004× | 1.014× |
| clang | 0.980× | 0.973×, 0.986× | 0.999× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1364 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44481767416).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| allocator_test.test | 10 | 0.000760s | 0.000753s | 0.000747s | byte equality observed |
| contains2_test.test | 10 | 0.000752s | 0.000755s | 0.000759s | byte equality observed |
| contains2_test_no_rtti.test | 10 | 0.000752s | 0.000727s | 0.000736s | byte equality observed |
| contains3_test.test | 10 | 0.000730s | 0.000726s | 0.000721s | byte equality observed |
| contains3_test_no_rtti.test | 10 | 0.000727s | 0.000718s | 0.000746s | byte equality observed |
| contains_test.test | 10 | 0.000746s | 0.000739s | 0.000762s | byte equality observed |
| contains_test_no_rtti.test | 10 | 0.000746s | 0.000730s | 0.000752s | byte equality observed |
| fn_eq_bind_test.test | 10 | 0.000732s | 0.000735s | 0.000735s | byte equality observed |
| function_arith_cxx98.test | 10 | 0.000768s | 0.000748s | 0.000757s | byte equality observed |
| function_arith_portable.test | 10 | 0.000737s | 0.000739s | 0.000736s | byte equality observed |
| function_n_test.test | 10 | 0.000740s | 0.000749s | 0.000751s | byte equality observed |
| function_ref_cxx98.test | 10 | 0.000726s | 0.000717s | 0.000724s | byte equality observed |
| function_ref_portable.test | 10 | 0.000732s | 0.000720s | 0.000720s | byte equality observed |
| function_test.test | 10 | 0.000803s | 0.000781s | 0.000775s | byte equality observed |
| function_test_no_rtti.test | 10 | 0.000788s | 0.000775s | 0.000769s | byte equality observed |
| lambda_test.test | 10 | 0.000750s | 0.000746s | 0.000724s | byte equality observed |
| mem_fun_cxx98.test | 10 | 0.000755s | 0.000808s | 0.000743s | byte equality observed |
| mem_fun_portable.test | 10 | 0.000833s | 0.000816s | 0.000743s | byte equality observed |
| mixed_cxxstd_shared.test | 10 | 0.000883s | 0.000850s | 0.000794s | byte equality observed |
| mixed_cxxstd_shared_0x.test | 10 | 0.000866s | 0.000842s | 0.000785s | byte equality observed |
| mixed_cxxstd_shared_14.test | 10 | 0.000867s | 0.000887s | 0.000791s | byte equality observed |
| mixed_cxxstd_static.test | 10 | 0.000816s | 0.000840s | 0.000832s | byte equality observed |
| mixed_cxxstd_static_0x.test | 10 | 0.000832s | 0.000824s | 0.000782s | byte equality observed |
| mixed_cxxstd_static_14.test | 10 | 0.000814s | 0.000812s | 0.000813s | byte equality observed |
| nothrow_swap.test | 10 | 0.000819s | 0.000835s | 0.000832s | byte equality observed |
| quick.test | 10 | 0.000829s | 0.000809s | 0.000811s | byte equality observed |
| result_arg_n_types_test.test | 10 | 0.000824s | 0.000815s | 0.000825s | byte equality observed |
| result_arg_types_test.test | 10 | 0.000801s | 0.000824s | 0.000827s | byte equality observed |
| return_function_shared.test | 10 | 0.000868s | 0.000899s | 0.000857s | byte equality observed |
| return_function_shared_0x.test | 10 | 0.000877s | 0.000885s | 0.000847s | byte equality observed |
| return_function_shared_14.test | 10 | 0.000856s | 0.000884s | 0.000870s | byte equality observed |
| return_function_static.test | 10 | 0.000829s | 0.000849s | 0.000819s | byte equality observed |
| return_function_static_0x.test | 10 | 0.000829s | 0.000784s | 0.000820s | byte equality observed |
| return_function_static_14.test | 10 | 0.000841s | 0.000823s | 0.000800s | byte equality observed |
| rvalues_test.test | 10 | 0.000821s | 0.000829s | 0.000789s | byte equality observed |
| stateless_test.test | 10 | 0.000820s | 0.000810s | 0.000812s | byte equality observed |
| std_bind_cxx98.test | 10 | 0.000803s | 0.000775s | 0.000775s | byte equality observed |
| std_bind_portable.test | 10 | 0.000794s | 0.000754s | 0.000781s | byte equality observed |
| sum_avg_cxx98.test | 10 | 0.000786s | 0.000764s | 0.000782s | byte equality observed |
| sum_avg_portable.test | 10 | 0.000778s | 0.000766s | 0.000790s | byte equality observed |
| test_bad_function_call_shared.test | 10 | 0.000887s | 0.000859s | 0.000868s | byte equality observed |
| test_bad_function_call_static.test | 10 | 0.000842s | 0.000870s | 0.000816s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44481767416).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
