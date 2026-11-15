# libs/function/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| function_test.test | RUN | 0.357491 | 1.872744 | 1.729318 | 0.001714 | 0.002034 | 0.001708 |
| function_test_no_rtti.test | RUN | 0.348544 | 1.862584 | 1.731826 | 0.001971 | 0.002261 | 0.002062 |
| function_n_test.test | RUN | 0.321350 | 1.550474 | 1.459447 | 0.001989 | 0.002144 | 0.002271 |
| allocator_test.test | RUN | 0.263189 | 0.882307 | 1.006302 | 0.002018 | 0.002080 | 0.002092 |
| stateless_test.test | RUN | 0.201593 | 0.481385 | 0.626521 | 0.002021 | 0.002108 | 0.002077 |
| lambda_test.test | RUN | 0.432344 | 1.163957 | 1.383460 | 0.002038 | 0.002070 | 0.002134 |
| function_test_fail1.test | COMPILE_FAIL | 0.154791 | 0.321528 | 0.463474 | — | — | — |
| function_test_fail2.test | COMPILE_FAIL | 0.155452 | 0.326697 | 0.472966 | — | — | — |
| function_30.test | COMPILE | 0.160885 | 0.354320 | 0.480253 | — | — | — |
| function_30_repeat.test | COMPILE | 0.161975 | 0.342108 | 0.471129 | — | — | — |
| function_arith_cxx98.test | RUN | 0.209764 | 0.582666 | 0.708213 | 0.001786 | 0.001659 | 0.001957 |
| function_arith_portable.test | RUN | 0.212681 | 0.541531 | 0.640927 | 0.001678 | 0.002112 | 0.002128 |
| sum_avg_cxx98.test | RUN | 0.197442 | 0.489874 | 0.584094 | 0.002006 | 0.001940 | 0.001978 |
| sum_avg_portable.test | RUN | 0.201423 | 0.435503 | 0.622082 | 0.002020 | 0.002012 | 0.002008 |
| mem_fun_cxx98.test | RUN | 0.228855 | 0.676964 | 0.774757 | 0.001880 | 0.002082 | 0.002084 |
| mem_fun_portable.test | RUN | 0.229756 | 0.598667 | 0.726792 | 0.001834 | 0.002095 | 0.001955 |
| std_bind_cxx98.test | RUN | 0.210461 | 0.572574 | 0.684735 | 0.001686 | 0.001728 | 0.002032 |
| std_bind_portable.test | RUN | 0.216821 | 0.516381 | 0.620354 | 0.002047 | 0.002122 | 0.001968 |
| function_ref_cxx98.test | RUN | 0.198879 | 0.476041 | 0.601747 | 0.001938 | 0.001970 | 0.001923 |
| function_ref_portable.test | RUN | 0.196445 | 0.427737 | 0.595287 | 0.001973 | 0.001864 | 0.001866 |
| contains_test.test | RUN | 0.248315 | 0.909512 | 0.934685 | 0.001928 | 0.001962 | 0.001875 |
| contains2_test.test | RUN | 0.232404 | 0.643843 | 0.733387 | 0.002051 | 0.002051 | 0.002113 |
| nothrow_swap.test | RUN | 0.217716 | 0.611950 | 0.684711 | 0.001866 | 0.001876 | 0.001794 |
| rvalues_test.test | RUN | 0.243461 | 0.740119 | 0.816982 | 0.002062 | 0.002108 | 0.001927 |
| function_typeof_test.test | COMPILE | 0.165532 | 0.335067 | 0.426169 | — | — | — |
| result_arg_types_test.test | RUN | 0.226477 | 0.522383 | 0.742171 | 0.001843 | 0.002106 | 0.002122 |
| result_arg_n_types_test.test | RUN | 0.244416 | 0.570961 | 0.898626 | 0.001965 | 0.002102 | 0.001961 |
| test_bad_function_call_shared.test | RUN | 0.203409 | 0.488410 | 0.619743 | 0.002004 | 0.002334 | 0.002275 |
| test_bad_function_call_static.test | RUN | 0.200133 | 0.483640 | 0.661338 | 0.001887 | 0.001908 | 0.002167 |
| mixed_cxxstd_shared.test | RUN | 0.216185 | 0.552527 | 0.672013 | 0.002051 | 0.002092 | 0.001936 |
| mixed_cxxstd_static.test | RUN | 0.210230 | 0.561107 | 0.702884 | 0.002119 | 0.002094 | 0.001974 |
| mixed_cxxstd_shared_0x.test | RUN | 0.209920 | 0.544982 | 0.731899 | 0.002236 | 0.002228 | 0.002306 |
| mixed_cxxstd_static_0x.test | RUN | 0.217272 | 0.563875 | 0.720951 | 0.001934 | 0.002047 | 0.002130 |
| mixed_cxxstd_shared_14.test | RUN | 0.215124 | 0.566312 | 0.667185 | 0.002217 | 0.002051 | 0.002224 |
| mixed_cxxstd_static_14.test | RUN | 0.216292 | 0.575727 | 0.691034 | 0.002143 | 0.002164 | 0.002048 |
| return_function_shared.test | RUN | 0.214062 | 0.567766 | 0.713807 | 0.001958 | 0.002218 | 0.002116 |
| return_function_static.test | RUN | 0.216866 | 0.568143 | 0.694884 | 0.001887 | 0.002089 | 0.002120 |
| return_function_shared_0x.test | RUN | 0.203648 | 0.550843 | 0.693442 | 0.001880 | 0.002398 | 0.002238 |
| return_function_static_0x.test | RUN | 0.214801 | 0.552588 | 0.640191 | 0.002084 | 0.002150 | 0.002058 |
| return_function_shared_14.test | RUN | 0.211980 | 0.544994 | 0.717790 | 0.001977 | 0.001796 | 0.002352 |
| return_function_static_14.test | RUN | 0.209245 | 0.558870 | 0.716043 | 0.001915 | 0.002214 | 0.002148 |
| quick.test | RUN | 0.215155 | 0.571687 | 0.697206 | 0.001910 | 0.001799 | 0.001824 |
| issue_42.test | COMPILE | 0.170395 | 0.361008 | 0.475373 | — | — | — |
| fn_eq_bind_test.test | RUN | 0.278897 | 0.783390 | 1.004111 | 0.001940 | 0.001711 | 0.002085 |
| contains_test_no_rtti.test | RUN | 0.246872 | 0.887952 | 0.982055 | 0.001773 | 0.001633 | 0.001932 |
| contains2_test_no_rtti.test | RUN | 0.224810 | 0.641258 | 0.772924 | 0.001874 | 0.002236 | 0.001457 |
| contains3_test.test | RUN | 0.212548 | 0.500628 | 0.664969 | 0.001690 | 0.001914 | 0.001547 |
| contains3_test_no_rtti.test | RUN | 0.143347 | 0.400925 | 0.459489 | 0.001554 | 0.001579 | 0.001496 |
| issue_53.test | COMPILE | 0.130821 | 0.294900 | 0.322928 | — | — | — |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.996× | 0.999×, 0.994× | 0.998× |
| clang | 0.999× | 0.991×, 1.006× | 1.010× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1359 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/43701438216).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| allocator_test.test | 10 | 0.001247s | 0.001220s | 0.001231s | byte equality observed |
| contains2_test.test | 10 | 0.001243s | 0.001215s | 0.001212s | byte equality observed |
| contains2_test_no_rtti.test | 10 | 0.001223s | 0.001246s | 0.001240s | byte equality observed |
| contains3_test.test | 10 | 0.001210s | 0.001215s | 0.001233s | byte equality observed |
| contains3_test_no_rtti.test | 10 | 0.001214s | 0.001211s | 0.001221s | byte equality observed |
| contains_test.test | 10 | 0.001212s | 0.001217s | 0.001265s | byte equality observed |
| contains_test_no_rtti.test | 10 | 0.001229s | 0.001221s | 0.001291s | byte equality observed |
| fn_eq_bind_test.test | 10 | 0.001265s | 0.001223s | 0.001287s | byte equality observed |
| function_arith_cxx98.test | 10 | 0.001313s | 0.001306s | 0.001337s | byte equality observed |
| function_arith_portable.test | 10 | 0.001314s | 0.001327s | 0.001301s | byte equality observed |
| function_n_test.test | 10 | 0.001332s | 0.001342s | 0.001307s | byte equality observed |
| function_ref_cxx98.test | 10 | 0.001233s | 0.001279s | 0.001218s | byte equality observed |
| function_ref_portable.test | 10 | 0.001236s | 0.001235s | 0.001241s | byte equality observed |
| function_test.test | 10 | 0.001343s | 0.001321s | 0.001371s | byte equality observed |
| function_test_no_rtti.test | 10 | 0.001419s | 0.001319s | 0.001360s | byte equality observed |
| lambda_test.test | 10 | 0.001290s | 0.001308s | 0.001280s | byte equality observed |
| mem_fun_cxx98.test | 10 | 0.001288s | 0.001320s | 0.001308s | byte equality observed |
| mem_fun_portable.test | 10 | 0.001303s | 0.001295s | 0.001307s | byte equality observed |
| mixed_cxxstd_shared.test | 10 | 0.001378s | 0.001389s | 0.001387s | byte equality observed |
| mixed_cxxstd_shared_0x.test | 10 | 0.001409s | 0.001393s | 0.001386s | byte equality observed |
| mixed_cxxstd_shared_14.test | 10 | 0.001431s | 0.001379s | 0.001377s | byte equality observed |
| mixed_cxxstd_static.test | 10 | 0.001277s | 0.001294s | 0.001290s | byte equality observed |
| mixed_cxxstd_static_0x.test | 10 | 0.001277s | 0.001342s | 0.001299s | byte equality observed |
| mixed_cxxstd_static_14.test | 10 | 0.001309s | 0.001296s | 0.001284s | byte equality observed |
| nothrow_swap.test | 10 | 0.001342s | 0.001340s | 0.001291s | byte equality observed |
| quick.test | 10 | 0.001296s | 0.001347s | 0.001301s | byte equality observed |
| result_arg_n_types_test.test | 10 | 0.001289s | 0.001317s | 0.001309s | byte equality observed |
| result_arg_types_test.test | 10 | 0.001301s | 0.001256s | 0.001259s | byte equality observed |
| return_function_shared.test | 10 | 0.001433s | 0.001367s | 0.001370s | byte equality observed |
| return_function_shared_0x.test | 10 | 0.001395s | 0.001358s | 0.001443s | byte equality observed |
| return_function_shared_14.test | 10 | 0.001397s | 0.001398s | 0.001405s | byte equality observed |
| return_function_static.test | 8 | 0.001266s | 0.001285s | 0.001243s | byte equality observed |
| return_function_static_0x.test | 10 | 0.001260s | 0.001252s | 0.001314s | byte equality observed |
| return_function_static_14.test | 10 | 0.001271s | 0.001279s | 0.001237s | byte equality observed |
| rvalues_test.test | 10 | 0.001277s | 0.001337s | 0.001286s | byte equality observed |
| stateless_test.test | 10 | 0.001258s | 0.001318s | 0.001251s | byte equality observed |
| std_bind_cxx98.test | 10 | 0.001265s | 0.001258s | 0.001261s | byte equality observed |
| std_bind_portable.test | 9 | 0.001270s | 0.001237s | 0.001249s | byte equality observed |
| sum_avg_cxx98.test | 10 | 0.001262s | 0.001258s | 0.001271s | byte equality observed |
| sum_avg_portable.test | 10 | 0.001269s | 0.001237s | 0.001246s | byte equality observed |
| test_bad_function_call_shared.test | 10 | 0.001418s | 0.001419s | 0.001397s | byte equality observed |
| test_bad_function_call_static.test | 10 | 0.001318s | 0.001313s | 0.001346s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/43701438216).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
