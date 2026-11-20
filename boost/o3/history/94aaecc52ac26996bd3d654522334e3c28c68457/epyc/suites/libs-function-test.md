# libs/function/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| function_test.test | RUN | 0.370122 | 1.968304 | 1.990853 | 0.001834 | 0.002044 | 0.002187 |
| function_test_no_rtti.test | RUN | 0.363245 | 1.936827 | 2.048289 | 0.001793 | 0.002015 | 0.002006 |
| function_n_test.test | RUN | 0.337953 | 1.641317 | 1.709756 | 0.002045 | 0.002048 | 0.002019 |
| allocator_test.test | RUN | 0.274134 | 0.934009 | 1.173176 | 0.001881 | 0.001920 | 0.002086 |
| stateless_test.test | RUN | 0.215067 | 0.502810 | 0.763104 | 0.001990 | 0.001828 | 0.002127 |
| lambda_test.test | RUN | 0.455333 | 1.252044 | 1.653322 | 0.001757 | 0.001826 | 0.001728 |
| function_test_fail1.test | COMPILE_FAIL | 0.159334 | 0.348252 | 0.566528 | — | — | — |
| function_test_fail2.test | COMPILE_FAIL | 0.172419 | 0.368300 | 0.549530 | — | — | — |
| function_30.test | COMPILE | 0.166794 | 0.369783 | 0.563408 | — | — | — |
| function_30_repeat.test | COMPILE | 0.168461 | 0.383283 | 0.549200 | — | — | — |
| function_arith_cxx98.test | RUN | 0.213351 | 0.628798 | 0.853273 | 0.001893 | 0.001842 | 0.002243 |
| function_arith_portable.test | RUN | 0.216699 | 0.586104 | 0.827427 | 0.001869 | 0.001788 | 0.002124 |
| sum_avg_cxx98.test | RUN | 0.208195 | 0.529965 | 0.720323 | 0.001804 | 0.002118 | 0.001977 |
| sum_avg_portable.test | RUN | 0.202719 | 0.462233 | 0.679701 | 0.001935 | 0.002094 | 0.002048 |
| mem_fun_cxx98.test | RUN | 0.234941 | 0.718150 | 0.947367 | 0.001918 | 0.001910 | 0.001669 |
| mem_fun_portable.test | RUN | 0.240619 | 0.660728 | 0.906634 | 0.001942 | 0.001973 | 0.002060 |
| std_bind_cxx98.test | RUN | 0.217193 | 0.595533 | 0.801979 | 0.001665 | 0.001808 | 0.002009 |
| std_bind_portable.test | RUN | 0.216216 | 0.551962 | 0.767326 | 0.001981 | 0.002128 | 0.002071 |
| function_ref_cxx98.test | RUN | 0.205030 | 0.510476 | 0.765032 | 0.001888 | 0.001889 | 0.001622 |
| function_ref_portable.test | RUN | 0.201928 | 0.472347 | 0.723254 | 0.001839 | 0.001870 | 0.002030 |
| contains_test.test | RUN | 0.251804 | 0.959400 | 1.123358 | 0.001834 | 0.002012 | 0.001809 |
| contains2_test.test | RUN | 0.232421 | 0.681422 | 0.899391 | 0.001648 | 0.001844 | 0.001664 |
| nothrow_swap.test | RUN | 0.219178 | 0.645256 | 0.860451 | 0.001839 | 0.002060 | 0.002088 |
| rvalues_test.test | RUN | 0.251487 | 0.788277 | 0.981887 | 0.001915 | 0.001883 | 0.002084 |
| function_typeof_test.test | COMPILE | 0.167658 | 0.354890 | 0.556126 | — | — | — |
| result_arg_types_test.test | RUN | 0.236525 | 0.554034 | 0.912099 | 0.001879 | 0.001972 | 0.001905 |
| result_arg_n_types_test.test | RUN | 0.254519 | 0.616422 | 1.064012 | 0.001796 | 0.001928 | 0.002160 |
| test_bad_function_call_shared.test | RUN | 0.210060 | 0.507023 | 0.807859 | 0.001800 | 0.002010 | 0.002219 |
| test_bad_function_call_static.test | RUN | 0.211048 | 0.509723 | 0.811883 | 0.001798 | 0.002245 | 0.001744 |
| mixed_cxxstd_shared.test | RUN | 0.220304 | 0.614868 | 0.835877 | 0.001884 | 0.002022 | 0.002382 |
| mixed_cxxstd_static.test | RUN | 0.221979 | 0.621421 | 0.885574 | 0.001930 | 0.001858 | 0.002114 |
| mixed_cxxstd_shared_0x.test | RUN | 0.224227 | 0.588190 | 0.873306 | 0.002067 | 0.002305 | 0.002375 |
| mixed_cxxstd_static_0x.test | RUN | 0.218276 | 0.587747 | 0.821568 | 0.002010 | 0.001854 | 0.002000 |
| mixed_cxxstd_shared_14.test | RUN | 0.232207 | 0.616455 | 0.843779 | 0.002088 | 0.002078 | 0.002291 |
| mixed_cxxstd_static_14.test | RUN | 0.216938 | 0.609969 | 0.860989 | 0.001896 | 0.002322 | 0.001953 |
| return_function_shared.test | RUN | 0.212615 | 0.588571 | 0.797733 | 0.002030 | 0.002292 | 0.002307 |
| return_function_static.test | RUN | 0.219972 | 0.618020 | 0.856918 | 0.001920 | 0.001897 | 0.002157 |
| return_function_shared_0x.test | RUN | 0.221671 | 0.612854 | 0.812260 | 0.001920 | 0.002472 | 0.002322 |
| return_function_static_0x.test | RUN | 0.216801 | 0.594451 | 0.807011 | 0.001908 | 0.002059 | 0.002078 |
| return_function_shared_14.test | RUN | 0.214070 | 0.608573 | 0.861008 | 0.002067 | 0.002286 | 0.002316 |
| return_function_static_14.test | RUN | 0.216786 | 0.605257 | 0.850897 | 0.002064 | 0.002100 | 0.001861 |
| quick.test | RUN | 0.227491 | 0.618776 | 0.811005 | 0.001888 | 0.001972 | 0.001956 |
| issue_42.test | COMPILE | 0.174002 | 0.390928 | 0.585127 | — | — | — |
| fn_eq_bind_test.test | RUN | 0.294707 | 0.829932 | 1.236308 | 0.001980 | 0.002200 | 0.001545 |
| contains_test_no_rtti.test | RUN | 0.261407 | 0.951400 | 1.122651 | 0.001752 | 0.001798 | 0.001729 |
| contains2_test_no_rtti.test | RUN | 0.241093 | 0.694824 | 0.909375 | 0.001691 | 0.001972 | 0.001990 |
| contains3_test.test | RUN | 0.220354 | 0.568355 | 0.813823 | 0.001406 | 0.001908 | 0.001485 |
| contains3_test_no_rtti.test | RUN | 0.135218 | 0.433760 | 0.503736 | 0.001512 | 0.001518 | 0.001618 |
| issue_53.test | COMPILE | 0.118505 | 0.290985 | 0.391374 | — | — | — |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 1.004× | 1.013×, 0.994× | 0.975× |
| clang | 0.984× | 0.996×, 0.972× | 1.015× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1360 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/thinkoid/cppgm/actions/runs/44661842949).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| allocator_test.test | 10 | 0.001164s | 0.001150s | 0.001176s | byte equality observed |
| contains2_test.test | 10 | 0.001170s | 0.001148s | 0.001180s | byte equality observed |
| contains2_test_no_rtti.test | 10 | 0.001157s | 0.001142s | 0.001183s | byte equality observed |
| contains3_test.test | 10 | 0.001158s | 0.001142s | 0.001233s | byte equality observed |
| contains3_test_no_rtti.test | 10 | 0.001157s | 0.001130s | 0.001218s | byte equality observed |
| contains_test.test | 10 | 0.001210s | 0.001151s | 0.001262s | byte equality observed |
| contains_test_no_rtti.test | 10 | 0.001202s | 0.001258s | 0.001253s | byte equality observed |
| fn_eq_bind_test.test | 10 | 0.001292s | 0.001276s | 0.001296s | byte equality observed |
| function_arith_cxx98.test | 10 | 0.001278s | 0.001275s | 0.001304s | byte equality observed |
| function_arith_portable.test | 10 | 0.001316s | 0.001315s | 0.001322s | byte equality observed |
| function_n_test.test | 10 | 0.001271s | 0.001289s | 0.001280s | byte equality observed |
| function_ref_cxx98.test | 10 | 0.001281s | 0.001179s | 0.001286s | byte equality observed |
| function_ref_portable.test | 10 | 0.001227s | 0.001184s | 0.001343s | byte equality observed |
| function_test.test | 10 | 0.001273s | 0.001280s | 0.001335s | byte equality observed |
| function_test_no_rtti.test | 10 | 0.001312s | 0.001319s | 0.001376s | byte equality observed |
| lambda_test.test | 10 | 0.001293s | 0.001239s | 0.001259s | byte equality observed |
| mem_fun_cxx98.test | 10 | 0.001282s | 0.001306s | 0.001211s | byte equality observed |
| mem_fun_portable.test | 10 | 0.001284s | 0.001243s | 0.001179s | byte equality observed |
| mixed_cxxstd_shared.test | 10 | 0.001367s | 0.001298s | 0.001366s | byte equality observed |
| mixed_cxxstd_shared_0x.test | 10 | 0.001341s | 0.001345s | 0.001375s | byte equality observed |
| mixed_cxxstd_shared_14.test | 10 | 0.001359s | 0.001348s | 0.001349s | byte equality observed |
| mixed_cxxstd_static.test | 10 | 0.001200s | 0.001286s | 0.001274s | byte equality observed |
| mixed_cxxstd_static_0x.test | 10 | 0.001227s | 0.001316s | 0.001276s | byte equality observed |
| mixed_cxxstd_static_14.test | 10 | 0.001249s | 0.001247s | 0.001314s | byte equality observed |
| nothrow_swap.test | 8 | 0.001255s | 0.001228s | 0.001288s | byte equality observed |
| quick.test | 10 | 0.001270s | 0.001272s | 0.001221s | byte equality observed |
| result_arg_n_types_test.test | 10 | 0.001295s | 0.001241s | 0.001258s | byte equality observed |
| result_arg_types_test.test | 10 | 0.001298s | 0.001246s | 0.001236s | byte equality observed |
| return_function_shared.test | 10 | 0.001368s | 0.001329s | 0.001370s | byte equality observed |
| return_function_shared_0x.test | 10 | 0.001353s | 0.001360s | 0.001400s | byte equality observed |
| return_function_shared_14.test | 10 | 0.001376s | 0.001318s | 0.001358s | byte equality observed |
| return_function_static.test | 10 | 0.001260s | 0.001243s | 0.001242s | byte equality observed |
| return_function_static_0x.test | 10 | 0.001259s | 0.001218s | 0.001232s | byte equality observed |
| return_function_static_14.test | 10 | 0.001276s | 0.001239s | 0.001259s | byte equality observed |
| rvalues_test.test | 10 | 0.001239s | 0.001249s | 0.001227s | byte equality observed |
| stateless_test.test | 10 | 0.001293s | 0.001264s | 0.001198s | byte equality observed |
| std_bind_cxx98.test | 10 | 0.001197s | 0.001213s | 0.001265s | byte equality observed |
| std_bind_portable.test | 10 | 0.001235s | 0.001230s | 0.001168s | byte equality observed |
| sum_avg_cxx98.test | 10 | 0.001244s | 0.001192s | 0.001221s | byte equality observed |
| sum_avg_portable.test | 10 | 0.001227s | 0.001184s | 0.001198s | byte equality observed |
| test_bad_function_call_shared.test | 10 | 0.001341s | 0.001377s | 0.001388s | byte equality observed |
| test_bad_function_call_static.test | 10 | 0.001294s | 0.001253s | 0.001256s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/thinkoid/cppgm/actions/runs/44661842949).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
