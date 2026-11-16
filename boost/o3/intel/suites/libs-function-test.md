# libs/function/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| function_test.test | RUN | 0.205179 | 1.129118 | 0.882747 | 0.001035 | 0.000999 | 0.000952 |
| function_test_no_rtti.test | RUN | 0.201851 | 1.104381 | 0.882398 | 0.000966 | 0.001035 | 0.001013 |
| function_n_test.test | RUN | 0.188623 | 0.923154 | 0.733559 | 0.001042 | 0.000981 | 0.000970 |
| allocator_test.test | RUN | 0.151841 | 0.513360 | 0.476433 | 0.000979 | 0.000934 | 0.000896 |
| stateless_test.test | RUN | 0.107777 | 0.261762 | 0.302227 | 0.001068 | 0.001049 | 0.000916 |
| lambda_test.test | RUN | 0.230656 | 0.652649 | 0.648641 | 0.000958 | 0.000915 | 0.000871 |
| function_test_fail1.test | COMPILE_FAIL | 0.081145 | 0.179775 | 0.193051 | — | — | — |
| function_test_fail2.test | COMPILE_FAIL | 0.084334 | 0.179068 | 0.204676 | — | — | — |
| function_30.test | COMPILE | 0.087196 | 0.185402 | 0.205921 | — | — | — |
| function_30_repeat.test | COMPILE | 0.088387 | 0.185317 | 0.208224 | — | — | — |
| function_arith_cxx98.test | RUN | 0.112788 | 0.334155 | 0.339702 | 0.001052 | 0.000985 | 0.000899 |
| function_arith_portable.test | RUN | 0.115826 | 0.310865 | 0.299848 | 0.000969 | 0.000971 | 0.000902 |
| sum_avg_cxx98.test | RUN | 0.107507 | 0.265904 | 0.288030 | 0.000979 | 0.000994 | 0.000958 |
| sum_avg_portable.test | RUN | 0.108194 | 0.243473 | 0.285834 | 0.000942 | 0.001040 | 0.000939 |
| mem_fun_cxx98.test | RUN | 0.124770 | 0.383804 | 0.371688 | 0.000932 | 0.001015 | 0.000936 |
| mem_fun_portable.test | RUN | 0.122748 | 0.354110 | 0.359765 | 0.000961 | 0.001024 | 0.000933 |
| std_bind_cxx98.test | RUN | 0.115113 | 0.318440 | 0.319804 | 0.000928 | 0.000908 | 0.000858 |
| std_bind_portable.test | RUN | 0.113947 | 0.295549 | 0.300660 | 0.000922 | 0.000959 | 0.000842 |
| function_ref_cxx98.test | RUN | 0.106662 | 0.263382 | 0.288295 | 0.000904 | 0.001018 | 0.000918 |
| function_ref_portable.test | RUN | 0.104295 | 0.238913 | 0.275380 | 0.000945 | 0.000966 | 0.000884 |
| contains_test.test | RUN | 0.135522 | 0.506201 | 0.456213 | 0.000981 | 0.001064 | 0.000929 |
| contains2_test.test | RUN | 0.122671 | 0.374839 | 0.351523 | 0.001022 | 0.001026 | 0.000839 |
| nothrow_swap.test | RUN | 0.118000 | 0.351960 | 0.340839 | 0.001019 | 0.000940 | 0.001015 |
| rvalues_test.test | RUN | 0.134427 | 0.421569 | 0.399540 | 0.001000 | 0.000993 | 0.000889 |
| function_typeof_test.test | COMPILE | 0.084533 | 0.183067 | 0.202541 | — | — | — |
| result_arg_types_test.test | RUN | 0.120956 | 0.288788 | 0.355858 | 0.000950 | 0.000961 | 0.000904 |
| result_arg_n_types_test.test | RUN | 0.136665 | 0.312792 | 0.415127 | 0.000929 | 0.000970 | 0.000908 |
| test_bad_function_call_shared.test | RUN | 0.106719 | 0.269947 | 0.294797 | 0.001048 | 0.001170 | 0.001165 |
| test_bad_function_call_static.test | RUN | 0.106352 | 0.259149 | 0.292251 | 0.001004 | 0.001023 | 0.000946 |
| mixed_cxxstd_shared.test | RUN | 0.115579 | 0.315520 | 0.330293 | 0.000994 | 0.001122 | 0.001007 |
| mixed_cxxstd_static.test | RUN | 0.116467 | 0.311491 | 0.332965 | 0.001009 | 0.001051 | 0.000951 |
| mixed_cxxstd_shared_0x.test | RUN | 0.115156 | 0.312463 | 0.332653 | 0.001001 | 0.001005 | 0.001033 |
| mixed_cxxstd_static_0x.test | RUN | 0.114489 | 0.311280 | 0.330965 | 0.000985 | 0.001017 | 0.000935 |
| mixed_cxxstd_shared_14.test | RUN | 0.116359 | 0.313339 | 0.332440 | 0.001056 | 0.000981 | 0.000994 |
| mixed_cxxstd_static_14.test | RUN | 0.114495 | 0.311042 | 0.328014 | 0.000941 | 0.000923 | 0.000928 |
| return_function_shared.test | RUN | 0.112159 | 0.317948 | 0.323333 | 0.001018 | 0.001027 | 0.000961 |
| return_function_static.test | RUN | 0.112996 | 0.314488 | 0.326254 | 0.000958 | 0.001181 | 0.000955 |
| return_function_shared_0x.test | RUN | 0.115742 | 0.324404 | 0.326645 | 0.001012 | 0.001080 | 0.000963 |
| return_function_static_0x.test | RUN | 0.113610 | 0.317596 | 0.322810 | 0.000940 | 0.000960 | 0.000892 |
| return_function_shared_14.test | RUN | 0.112364 | 0.317527 | 0.325079 | 0.001033 | 0.001078 | 0.000954 |
| return_function_static_14.test | RUN | 0.112441 | 0.315194 | 0.325240 | 0.000899 | 0.000960 | 0.000950 |
| quick.test | RUN | 0.114173 | 0.319127 | 0.319036 | 0.001217 | 0.000942 | 0.000921 |
| issue_42.test | COMPILE | 0.087468 | 0.200049 | 0.218027 | — | — | — |
| fn_eq_bind_test.test | RUN | 0.150101 | 0.416749 | 0.461807 | 0.000853 | 0.000874 | 0.000823 |
| contains_test_no_rtti.test | RUN | 0.135374 | 0.491162 | 0.453474 | 0.000860 | 0.000960 | 0.001074 |
| contains2_test_no_rtti.test | RUN | 0.121490 | 0.363279 | 0.350083 | 0.000919 | 0.000841 | 0.000807 |
| contains3_test.test | RUN | 0.109729 | 0.279069 | 0.307549 | 0.001011 | 0.000912 | 0.000938 |
| contains3_test_no_rtti.test | RUN | 0.111387 | 0.282196 | 0.310657 | 0.000856 | 0.000953 | 0.000897 |
| issue_53.test | COMPILE | 0.097624 | 0.222117 | 0.243043 | — | — | — |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.998× | 0.996×, 1.000× | 1.001× |
| clang | 0.993× | 0.993×, 0.994× | 1.000× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1365 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/43796354412).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| allocator_test.test | 10 | 0.000918s | 0.000902s | 0.000877s | byte equality observed |
| contains2_test.test | 10 | 0.000910s | 0.000908s | 0.000896s | byte equality observed |
| contains2_test_no_rtti.test | 10 | 0.000909s | 0.000914s | 0.000895s | byte equality observed |
| contains3_test.test | 10 | 0.000906s | 0.000911s | 0.000897s | byte equality observed |
| contains3_test_no_rtti.test | 10 | 0.000906s | 0.000912s | 0.000909s | byte equality observed |
| contains_test.test | 10 | 0.000909s | 0.000927s | 0.000899s | byte equality observed |
| contains_test_no_rtti.test | 10 | 0.000908s | 0.000916s | 0.000903s | byte equality observed |
| fn_eq_bind_test.test | 10 | 0.000902s | 0.000906s | 0.000889s | byte equality observed |
| function_arith_cxx98.test | 10 | 0.000920s | 0.000928s | 0.000915s | byte equality observed |
| function_arith_portable.test | 10 | 0.000922s | 0.000919s | 0.000912s | byte equality observed |
| function_n_test.test | 10 | 0.000926s | 0.000912s | 0.000919s | byte equality observed |
| function_ref_cxx98.test | 10 | 0.000886s | 0.000889s | 0.000882s | byte equality observed |
| function_ref_portable.test | 10 | 0.000881s | 0.000879s | 0.000882s | byte equality observed |
| function_test.test | 10 | 0.000959s | 0.000951s | 0.000948s | byte equality observed |
| function_test_no_rtti.test | 10 | 0.000964s | 0.000959s | 0.000952s | byte equality observed |
| lambda_test.test | 10 | 0.000913s | 0.000902s | 0.000908s | byte equality observed |
| mem_fun_cxx98.test | 10 | 0.000914s | 0.000915s | 0.000904s | byte equality observed |
| mem_fun_portable.test | 10 | 0.000912s | 0.000907s | 0.000899s | byte equality observed |
| mixed_cxxstd_shared.test | 10 | 0.000953s | 0.000949s | 0.000960s | byte equality observed |
| mixed_cxxstd_shared_0x.test | 10 | 0.000962s | 0.000963s | 0.000971s | byte equality observed |
| mixed_cxxstd_shared_14.test | 10 | 0.000960s | 0.000965s | 0.000958s | byte equality observed |
| mixed_cxxstd_static.test | 10 | 0.000910s | 0.000911s | 0.000901s | byte equality observed |
| mixed_cxxstd_static_0x.test | 10 | 0.000899s | 0.000907s | 0.000897s | byte equality observed |
| mixed_cxxstd_static_14.test | 10 | 0.000913s | 0.000898s | 0.000914s | byte equality observed |
| nothrow_swap.test | 10 | 0.000911s | 0.000911s | 0.000898s | byte equality observed |
| quick.test | 10 | 0.000915s | 0.000905s | 0.000901s | byte equality observed |
| result_arg_n_types_test.test | 10 | 0.000898s | 0.000896s | 0.000898s | byte equality observed |
| result_arg_types_test.test | 10 | 0.000892s | 0.000897s | 0.000903s | byte equality observed |
| return_function_shared.test | 10 | 0.000955s | 0.000968s | 0.000949s | byte equality observed |
| return_function_shared_0x.test | 10 | 0.000963s | 0.000955s | 0.000952s | byte equality observed |
| return_function_shared_14.test | 10 | 0.000963s | 0.000948s | 0.000955s | byte equality observed |
| return_function_static.test | 10 | 0.000905s | 0.000911s | 0.000900s | byte equality observed |
| return_function_static_0x.test | 10 | 0.000914s | 0.000901s | 0.000913s | byte equality observed |
| return_function_static_14.test | 10 | 0.000909s | 0.000907s | 0.000903s | byte equality observed |
| rvalues_test.test | 10 | 0.000905s | 0.000909s | 0.000899s | byte equality observed |
| stateless_test.test | 10 | 0.000893s | 0.000889s | 0.000892s | byte equality observed |
| std_bind_cxx98.test | 10 | 0.000883s | 0.000889s | 0.000871s | byte equality observed |
| std_bind_portable.test | 10 | 0.000889s | 0.000890s | 0.000867s | byte equality observed |
| sum_avg_cxx98.test | 10 | 0.000881s | 0.000884s | 0.000872s | byte equality observed |
| sum_avg_portable.test | 10 | 0.000876s | 0.000881s | 0.000865s | byte equality observed |
| test_bad_function_call_shared.test | 10 | 0.000984s | 0.000977s | 0.000987s | byte equality observed |
| test_bad_function_call_static.test | 10 | 0.000929s | 0.000934s | 0.000922s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/43796354412).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
