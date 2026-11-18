# libs/function/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| function_test.test | RUN | 0.351849 | 1.899945 | 1.776319 | 0.001751 | 0.001788 | 0.002042 |
| function_test_no_rtti.test | RUN | 0.343262 | 1.882740 | 1.738765 | 0.001928 | 0.002300 | 0.002462 |
| function_n_test.test | RUN | 0.328063 | 1.548515 | 1.499133 | 0.002167 | 0.002027 | 0.002288 |
| allocator_test.test | RUN | 0.264877 | 0.884167 | 1.012740 | 0.002132 | 0.002188 | 0.002364 |
| stateless_test.test | RUN | 0.201386 | 0.482304 | 0.658101 | 0.002170 | 0.001946 | 0.002192 |
| lambda_test.test | RUN | 0.428495 | 1.175364 | 1.430606 | 0.002122 | 0.001994 | 0.001906 |
| function_test_fail1.test | COMPILE_FAIL | 0.152646 | 0.320600 | 0.482970 | — | — | — |
| function_test_fail2.test | COMPILE_FAIL | 0.153984 | 0.344922 | 0.461825 | — | — | — |
| function_30.test | COMPILE | 0.164607 | 0.343525 | 0.482981 | — | — | — |
| function_30_repeat.test | COMPILE | 0.163680 | 0.345876 | 0.479813 | — | — | — |
| function_arith_cxx98.test | RUN | 0.214362 | 0.579238 | 0.720135 | 0.002165 | 0.002048 | 0.002190 |
| function_arith_portable.test | RUN | 0.210298 | 0.548415 | 0.688963 | 0.001956 | 0.001766 | 0.002224 |
| sum_avg_cxx98.test | RUN | 0.203372 | 0.505003 | 0.638419 | 0.001739 | 0.002028 | 0.002178 |
| sum_avg_portable.test | RUN | 0.196874 | 0.445088 | 0.644666 | 0.002049 | 0.002204 | 0.002230 |
| mem_fun_cxx98.test | RUN | 0.232894 | 0.683484 | 0.797716 | 0.002092 | 0.001874 | 0.002140 |
| mem_fun_portable.test | RUN | 0.231423 | 0.627319 | 0.747476 | 0.001847 | 0.002135 | 0.002187 |
| std_bind_cxx98.test | RUN | 0.214090 | 0.585823 | 0.698825 | 0.001597 | 0.001847 | 0.002220 |
| std_bind_portable.test | RUN | 0.208125 | 0.522497 | 0.643894 | 0.002122 | 0.002136 | 0.002325 |
| function_ref_cxx98.test | RUN | 0.200990 | 0.470782 | 0.682811 | 0.001860 | 0.002054 | 0.002210 |
| function_ref_portable.test | RUN | 0.200149 | 0.451368 | 0.625574 | 0.001782 | 0.002004 | 0.002178 |
| contains_test.test | RUN | 0.243315 | 0.897465 | 0.941541 | 0.001980 | 0.002015 | 0.002234 |
| contains2_test.test | RUN | 0.219111 | 0.647393 | 0.757262 | 0.002074 | 0.001896 | 0.001951 |
| nothrow_swap.test | RUN | 0.214463 | 0.600704 | 0.730267 | 0.001978 | 0.002060 | 0.002212 |
| rvalues_test.test | RUN | 0.239910 | 0.757227 | 0.831013 | 0.002042 | 0.001960 | 0.001985 |
| function_typeof_test.test | COMPILE | 0.164612 | 0.348701 | 0.428513 | — | — | — |
| result_arg_types_test.test | RUN | 0.222661 | 0.523683 | 0.769890 | 0.001906 | 0.002112 | 0.001772 |
| result_arg_n_types_test.test | RUN | 0.244227 | 0.582633 | 0.922354 | 0.002134 | 0.002111 | 0.002284 |
| test_bad_function_call_shared.test | RUN | 0.202640 | 0.482888 | 0.695036 | 0.001771 | 0.002224 | 0.002560 |
| test_bad_function_call_static.test | RUN | 0.228602 | 0.472977 | 0.694803 | 0.001844 | 0.002078 | 0.002261 |
| mixed_cxxstd_shared.test | RUN | 0.219121 | 0.564132 | 0.707883 | 0.002326 | 0.001780 | 0.002128 |
| mixed_cxxstd_static.test | RUN | 0.209505 | 0.573317 | 0.704839 | 0.001800 | 0.001982 | 0.002033 |
| mixed_cxxstd_shared_0x.test | RUN | 0.209479 | 0.541855 | 0.763599 | 0.002318 | 0.002215 | 0.002545 |
| mixed_cxxstd_static_0x.test | RUN | 0.218922 | 0.562238 | 0.739414 | 0.001897 | 0.002115 | 0.001809 |
| mixed_cxxstd_shared_14.test | RUN | 0.224314 | 0.559746 | 0.769676 | 0.001895 | 0.002268 | 0.002408 |
| mixed_cxxstd_static_14.test | RUN | 0.221988 | 0.572946 | 0.679264 | 0.002036 | 0.002223 | 0.002278 |
| return_function_shared.test | RUN | 0.205505 | 0.557120 | 0.694850 | 0.002372 | 0.002160 | 0.002290 |
| return_function_static.test | RUN | 0.221581 | 0.557268 | 0.748341 | 0.001906 | 0.002016 | 0.002241 |
| return_function_shared_0x.test | RUN | 0.215966 | 0.572902 | 0.674808 | 0.001946 | 0.002140 | 0.002487 |
| return_function_static_0x.test | RUN | 0.209018 | 0.555194 | 0.673767 | 0.002046 | 0.001901 | 0.002338 |
| return_function_shared_14.test | RUN | 0.211102 | 0.572190 | 0.742502 | 0.001961 | 0.002111 | 0.002462 |
| return_function_static_14.test | RUN | 0.217226 | 0.568025 | 0.746374 | 0.002128 | 0.002206 | 0.002380 |
| quick.test | RUN | 0.209831 | 0.560403 | 0.701099 | 0.001802 | 0.002054 | 0.002296 |
| issue_42.test | COMPILE | 0.172126 | 0.361844 | 0.513961 | — | — | — |
| fn_eq_bind_test.test | RUN | 0.286829 | 0.767357 | 1.077432 | 0.001753 | 0.002055 | 0.002124 |
| contains_test_no_rtti.test | RUN | 0.255088 | 0.876165 | 0.992831 | 0.002118 | 0.002049 | 0.002132 |
| contains2_test_no_rtti.test | RUN | 0.225781 | 0.661172 | 0.806563 | 0.001742 | 0.001824 | 0.001997 |
| contains3_test.test | RUN | 0.222039 | 0.511495 | 0.689601 | 0.001519 | 0.001822 | 0.002077 |
| contains3_test_no_rtti.test | RUN | 0.142240 | 0.411031 | 0.469617 | 0.001612 | 0.001527 | 0.001536 |
| issue_53.test | COMPILE | 0.127206 | 0.301730 | 0.344739 | — | — | — |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.994× | 0.983×, 1.005× | 1.014× |
| clang | 0.999× | 1.000×, 0.999× | 0.992× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1359 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44390936409).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| allocator_test.test | 10 | 0.001249s | 0.001243s | 0.001257s | byte equality observed |
| contains2_test.test | 10 | 0.001245s | 0.001220s | 0.001249s | byte equality observed |
| contains2_test_no_rtti.test | 10 | 0.001235s | 0.001239s | 0.001237s | byte equality observed |
| contains3_test.test | 10 | 0.001209s | 0.001210s | 0.001234s | byte equality observed |
| contains3_test_no_rtti.test | 10 | 0.001200s | 0.001244s | 0.001249s | byte equality observed |
| contains_test.test | 10 | 0.001239s | 0.001229s | 0.001251s | byte equality observed |
| contains_test_no_rtti.test | 10 | 0.001223s | 0.001234s | 0.001296s | byte equality observed |
| fn_eq_bind_test.test | 10 | 0.001236s | 0.001241s | 0.001278s | byte equality observed |
| function_arith_cxx98.test | 10 | 0.001262s | 0.001272s | 0.001326s | byte equality observed |
| function_arith_portable.test | 10 | 0.001350s | 0.001329s | 0.001295s | byte equality observed |
| function_n_test.test | 10 | 0.001321s | 0.001337s | 0.001292s | byte equality observed |
| function_ref_cxx98.test | 10 | 0.001273s | 0.001266s | 0.001278s | byte equality observed |
| function_ref_portable.test | 10 | 0.001245s | 0.001236s | 0.001274s | byte equality observed |
| function_test.test | 10 | 0.001345s | 0.001369s | 0.001357s | byte equality observed |
| function_test_no_rtti.test | 10 | 0.001373s | 0.001381s | 0.001367s | byte equality observed |
| lambda_test.test | 10 | 0.001306s | 0.001298s | 0.001283s | byte equality observed |
| mem_fun_cxx98.test | 10 | 0.001299s | 0.001327s | 0.001309s | byte equality observed |
| mem_fun_portable.test | 10 | 0.001331s | 0.001277s | 0.001341s | byte equality observed |
| mixed_cxxstd_shared.test | 10 | 0.001393s | 0.001427s | 0.001409s | byte equality observed |
| mixed_cxxstd_shared_0x.test | 10 | 0.001425s | 0.001384s | 0.001430s | byte equality observed |
| mixed_cxxstd_shared_14.test | 10 | 0.001416s | 0.001390s | 0.001433s | byte equality observed |
| mixed_cxxstd_static.test | 10 | 0.001335s | 0.001277s | 0.001268s | byte equality observed |
| mixed_cxxstd_static_0x.test | 10 | 0.001300s | 0.001311s | 0.001270s | byte equality observed |
| mixed_cxxstd_static_14.test | 10 | 0.001316s | 0.001302s | 0.001293s | byte equality observed |
| nothrow_swap.test | 10 | 0.001308s | 0.001305s | 0.001306s | byte equality observed |
| quick.test | 10 | 0.001298s | 0.001304s | 0.001323s | byte equality observed |
| result_arg_n_types_test.test | 10 | 0.001317s | 0.001309s | 0.001290s | byte equality observed |
| result_arg_types_test.test | 10 | 0.001285s | 0.001264s | 0.001265s | byte equality observed |
| return_function_shared.test | 10 | 0.001409s | 0.001416s | 0.001413s | byte equality observed |
| return_function_shared_0x.test | 10 | 0.001406s | 0.001404s | 0.001394s | byte equality observed |
| return_function_shared_14.test | 10 | 0.001446s | 0.001372s | 0.001362s | byte equality observed |
| return_function_static.test | 10 | 0.001306s | 0.001264s | 0.001273s | byte equality observed |
| return_function_static_0x.test | 10 | 0.001316s | 0.001271s | 0.001303s | byte equality observed |
| return_function_static_14.test | 10 | 0.001326s | 0.001259s | 0.001303s | byte equality observed |
| rvalues_test.test | 10 | 0.001317s | 0.001277s | 0.001307s | byte equality observed |
| stateless_test.test | 10 | 0.001303s | 0.001286s | 0.001318s | byte equality observed |
| std_bind_cxx98.test | 10 | 0.001261s | 0.001285s | 0.001266s | byte equality observed |
| std_bind_portable.test | 10 | 0.001261s | 0.001252s | 0.001289s | byte equality observed |
| sum_avg_cxx98.test | 10 | 0.001272s | 0.001292s | 0.001269s | byte equality observed |
| sum_avg_portable.test | 10 | 0.001289s | 0.001239s | 0.001253s | byte equality observed |
| test_bad_function_call_shared.test | 10 | 0.001416s | 0.001389s | 0.001420s | byte equality observed |
| test_bad_function_call_static.test | 10 | 0.001338s | 0.001356s | 0.001348s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44390936409).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
