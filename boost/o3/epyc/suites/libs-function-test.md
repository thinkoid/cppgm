# libs/function/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| function_test.test | RUN | 0.283086 | 1.520935 | 1.376184 | 0.001622 | 0.001796 | 0.001528 |
| function_test_no_rtti.test | RUN | 0.283863 | 1.502403 | 1.376268 | 0.001842 | 0.001934 | 0.001924 |
| function_n_test.test | RUN | 0.264614 | 1.232780 | 1.180960 | 0.001745 | 0.001770 | 0.001825 |
| allocator_test.test | RUN | 0.216793 | 0.704132 | 0.798234 | 0.001891 | 0.001890 | 0.001804 |
| stateless_test.test | RUN | 0.166116 | 0.381178 | 0.501539 | 0.001819 | 0.001770 | 0.001870 |
| lambda_test.test | RUN | 0.363200 | 0.925495 | 1.109018 | 0.001950 | 0.001682 | 0.001629 |
| function_test_fail1.test | COMPILE_FAIL | 0.125211 | 0.257957 | 0.338443 | — | — | — |
| function_test_fail2.test | COMPILE_FAIL | 0.127837 | 0.270982 | 0.375546 | — | — | — |
| function_30.test | COMPILE | 0.136791 | 0.269887 | 0.372447 | — | — | — |
| function_30_repeat.test | COMPILE | 0.134896 | 0.278359 | 0.368931 | — | — | — |
| function_arith_cxx98.test | RUN | 0.173005 | 0.474094 | 0.557874 | 0.001891 | 0.001830 | 0.001644 |
| function_arith_portable.test | RUN | 0.164248 | 0.435866 | 0.537468 | 0.001676 | 0.001731 | 0.001864 |
| sum_avg_cxx98.test | RUN | 0.159576 | 0.399491 | 0.515746 | 0.001766 | 0.001619 | 0.001862 |
| sum_avg_portable.test | RUN | 0.163272 | 0.343285 | 0.517538 | 0.001792 | 0.001897 | 0.001850 |
| mem_fun_cxx98.test | RUN | 0.190193 | 0.545364 | 0.639512 | 0.001864 | 0.001532 | 0.001912 |
| mem_fun_portable.test | RUN | 0.183757 | 0.478998 | 0.565996 | 0.001550 | 0.001859 | 0.001628 |
| std_bind_cxx98.test | RUN | 0.175016 | 0.465221 | 0.503673 | 0.001542 | 0.001372 | 0.001786 |
| std_bind_portable.test | RUN | 0.168462 | 0.423053 | 0.486942 | 0.001794 | 0.001916 | 0.001724 |
| function_ref_cxx98.test | RUN | 0.165456 | 0.384164 | 0.529829 | 0.001816 | 0.001550 | 0.001943 |
| function_ref_portable.test | RUN | 0.159616 | 0.350827 | 0.492028 | 0.001659 | 0.001784 | 0.001610 |
| contains_test.test | RUN | 0.196271 | 0.717628 | 0.697100 | 0.001819 | 0.001984 | 0.001777 |
| contains2_test.test | RUN | 0.180362 | 0.531537 | 0.589339 | 0.001739 | 0.002005 | 0.001786 |
| nothrow_swap.test | RUN | 0.173429 | 0.494480 | 0.578697 | 0.001890 | 0.001819 | 0.001903 |
| rvalues_test.test | RUN | 0.200578 | 0.599961 | 0.667101 | 0.001680 | 0.001831 | 0.001807 |
| function_typeof_test.test | COMPILE | 0.134585 | 0.277216 | 0.369263 | — | — | — |
| result_arg_types_test.test | RUN | 0.187226 | 0.428602 | 0.594318 | 0.001560 | 0.001870 | 0.001730 |
| result_arg_n_types_test.test | RUN | 0.206731 | 0.451268 | 0.719327 | 0.001707 | 0.001900 | 0.001854 |
| test_bad_function_call_shared.test | RUN | 0.167753 | 0.386612 | 0.546612 | 0.002000 | 0.002054 | 0.001844 |
| test_bad_function_call_static.test | RUN | 0.174165 | 0.386140 | 0.513509 | 0.001279 | 0.001634 | 0.001929 |
| mixed_cxxstd_shared.test | RUN | 0.176727 | 0.459010 | 0.554181 | 0.001811 | 0.001801 | 0.001783 |
| mixed_cxxstd_static.test | RUN | 0.172216 | 0.435687 | 0.560894 | 0.001892 | 0.001806 | 0.001455 |
| mixed_cxxstd_shared_0x.test | RUN | 0.168361 | 0.460787 | 0.589765 | 0.001877 | 0.002157 | 0.002038 |
| mixed_cxxstd_static_0x.test | RUN | 0.184106 | 0.445951 | 0.529411 | 0.001756 | 0.001843 | 0.001675 |
| mixed_cxxstd_shared_14.test | RUN | 0.173584 | 0.471338 | 0.571675 | 0.001910 | 0.001902 | 0.002025 |
| mixed_cxxstd_static_14.test | RUN | 0.173685 | 0.458761 | 0.562386 | 0.001682 | 0.001911 | 0.001873 |
| return_function_shared.test | RUN | 0.168386 | 0.461937 | 0.555766 | 0.001717 | 0.001966 | 0.002068 |
| return_function_static.test | RUN | 0.167983 | 0.466254 | 0.549515 | 0.001829 | 0.001832 | 0.001798 |
| return_function_shared_0x.test | RUN | 0.172316 | 0.471411 | 0.558958 | 0.001676 | 0.001994 | 0.002114 |
| return_function_static_0x.test | RUN | 0.172062 | 0.428609 | 0.547878 | 0.001778 | 0.001980 | 0.001854 |
| return_function_shared_14.test | RUN | 0.177538 | 0.456558 | 0.583515 | 0.001687 | 0.001856 | 0.001680 |
| return_function_static_14.test | RUN | 0.175981 | 0.467327 | 0.512979 | 0.001534 | 0.001807 | 0.001787 |
| quick.test | RUN | 0.182433 | 0.457608 | 0.533421 | 0.001403 | 0.001929 | 0.001612 |
| issue_42.test | COMPILE | 0.136182 | 0.306805 | 0.405095 | — | — | — |
| fn_eq_bind_test.test | RUN | 0.229801 | 0.631386 | 0.839256 | 0.001572 | 0.001887 | 0.001873 |
| contains_test_no_rtti.test | RUN | 0.192860 | 0.693165 | 0.755162 | 0.001521 | 0.001870 | 0.001358 |
| contains2_test_no_rtti.test | RUN | 0.182667 | 0.539943 | 0.600845 | 0.001479 | 0.001558 | 0.001169 |
| contains3_test.test | RUN | 0.174025 | 0.425155 | 0.543763 | 0.001364 | 0.001715 | 0.001526 |
| contains3_test_no_rtti.test | RUN | 0.123677 | 0.339189 | 0.379361 | 0.001446 | 0.001408 | 0.001388 |
| issue_53.test | COMPILE | 0.105068 | 0.229302 | 0.279499 | — | — | — |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 1.001× | 1.005×, 0.997× | 1.004× |
| clang | 1.002× | 1.015×, 0.989× | 0.991× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1363 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43620819273).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| allocator_test.test | 10 | 0.001025s | 0.000992s | 0.000989s | byte equality observed |
| contains2_test.test | 10 | 0.001014s | 0.001011s | 0.000973s | byte equality observed |
| contains2_test_no_rtti.test | 10 | 0.001032s | 0.001026s | 0.001000s | byte equality observed |
| contains3_test.test | 10 | 0.001001s | 0.001059s | 0.000970s | byte equality observed |
| contains3_test_no_rtti.test | 10 | 0.000995s | 0.001014s | 0.000979s | byte equality observed |
| contains_test.test | 10 | 0.001013s | 0.001025s | 0.000994s | byte equality observed |
| contains_test_no_rtti.test | 10 | 0.001018s | 0.001073s | 0.001055s | byte equality observed |
| fn_eq_bind_test.test | 10 | 0.001018s | 0.001028s | 0.001018s | byte equality observed |
| function_arith_cxx98.test | 10 | 0.001012s | 0.001079s | 0.001038s | byte equality observed |
| function_arith_portable.test | 10 | 0.001035s | 0.001041s | 0.001034s | byte equality observed |
| function_n_test.test | 10 | 0.001036s | 0.001029s | 0.001030s | byte equality observed |
| function_ref_cxx98.test | 10 | 0.001017s | 0.001021s | 0.001007s | byte equality observed |
| function_ref_portable.test | 10 | 0.001005s | 0.000995s | 0.001002s | byte equality observed |
| function_test.test | 10 | 0.001062s | 0.001092s | 0.001067s | byte equality observed |
| function_test_no_rtti.test | 10 | 0.001060s | 0.001080s | 0.001049s | byte equality observed |
| lambda_test.test | 10 | 0.001013s | 0.001030s | 0.001022s | byte equality observed |
| mem_fun_cxx98.test | 10 | 0.000992s | 0.001009s | 0.001008s | byte equality observed |
| mem_fun_portable.test | 10 | 0.001032s | 0.001045s | 0.001001s | byte equality observed |
| mixed_cxxstd_shared.test | 10 | 0.001093s | 0.001111s | 0.001122s | byte equality observed |
| mixed_cxxstd_shared_0x.test | 10 | 0.001079s | 0.001105s | 0.001118s | byte equality observed |
| mixed_cxxstd_shared_14.test | 10 | 0.001114s | 0.001107s | 0.001094s | byte equality observed |
| mixed_cxxstd_static.test | 10 | 0.000996s | 0.001010s | 0.001024s | byte equality observed |
| mixed_cxxstd_static_0x.test | 10 | 0.001015s | 0.001045s | 0.001021s | byte equality observed |
| mixed_cxxstd_static_14.test | 10 | 0.001027s | 0.001008s | 0.001002s | byte equality observed |
| nothrow_swap.test | 10 | 0.001017s | 0.001014s | 0.001043s | byte equality observed |
| quick.test | 10 | 0.001027s | 0.001020s | 0.001032s | byte equality observed |
| result_arg_n_types_test.test | 10 | 0.001011s | 0.001047s | 0.000992s | byte equality observed |
| result_arg_types_test.test | 10 | 0.001053s | 0.001035s | 0.000989s | byte equality observed |
| return_function_shared.test | 10 | 0.001100s | 0.001074s | 0.001094s | byte equality observed |
| return_function_shared_0x.test | 10 | 0.001091s | 0.001044s | 0.001093s | byte equality observed |
| return_function_shared_14.test | 10 | 0.001089s | 0.001080s | 0.001072s | byte equality observed |
| return_function_static.test | 10 | 0.001029s | 0.001023s | 0.001004s | byte equality observed |
| return_function_static_0x.test | 10 | 0.001020s | 0.001003s | 0.001045s | byte equality observed |
| return_function_static_14.test | 10 | 0.001010s | 0.001025s | 0.001030s | byte equality observed |
| rvalues_test.test | 10 | 0.001008s | 0.000997s | 0.001021s | byte equality observed |
| stateless_test.test | 10 | 0.001005s | 0.001023s | 0.001007s | byte equality observed |
| std_bind_cxx98.test | 10 | 0.000993s | 0.001009s | 0.001005s | byte equality observed |
| std_bind_portable.test | 10 | 0.001021s | 0.001007s | 0.001025s | byte equality observed |
| sum_avg_cxx98.test | 10 | 0.000993s | 0.001020s | 0.000996s | byte equality observed |
| sum_avg_portable.test | 10 | 0.000995s | 0.001003s | 0.001001s | byte equality observed |
| test_bad_function_call_shared.test | 10 | 0.001145s | 0.001124s | 0.001159s | byte equality observed |
| test_bad_function_call_static.test | 10 | 0.001044s | 0.001043s | 0.001040s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43620819273).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
