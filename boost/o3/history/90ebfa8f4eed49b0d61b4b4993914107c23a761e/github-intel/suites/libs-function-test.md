# libs/function/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| function_test.test | RUN | 0.329506 | 1.818483 | 1.539857 | 0.001685 | 0.001731 | 0.001444 |
| function_test_no_rtti.test | RUN | 0.322617 | 1.824272 | 1.516859 | 0.001704 | 0.001709 | 0.001496 |
| function_n_test.test | RUN | 0.304826 | 1.472940 | 1.297027 | 0.001569 | 0.001627 | 0.001597 |
| allocator_test.test | RUN | 0.244591 | 0.848017 | 0.845950 | 0.001922 | 0.001676 | 0.001712 |
| stateless_test.test | RUN | 0.179506 | 0.447078 | 0.531182 | 0.001630 | 0.001684 | 0.001718 |
| lambda_test.test | RUN | 0.383966 | 1.095714 | 1.147851 | 0.001644 | 0.001725 | 0.001569 |
| function_test_fail1.test | COMPILE_FAIL | 0.136839 | 0.299148 | 0.359853 | — | — | — |
| function_test_fail2.test | COMPILE_FAIL | 0.138553 | 0.314983 | 0.361314 | — | — | — |
| function_30.test | COMPILE | 0.140949 | 0.317600 | 0.372467 | — | — | — |
| function_30_repeat.test | COMPILE | 0.141386 | 0.318973 | 0.370279 | — | — | — |
| function_arith_cxx98.test | RUN | 0.188149 | 0.552594 | 0.579389 | 0.001743 | 0.001556 | 0.001492 |
| function_arith_portable.test | RUN | 0.185919 | 0.512213 | 0.546589 | 0.001464 | 0.001649 | 0.001514 |
| sum_avg_cxx98.test | RUN | 0.173347 | 0.449254 | 0.525935 | 0.001572 | 0.001344 | 0.001530 |
| sum_avg_portable.test | RUN | 0.177503 | 0.400073 | 0.498255 | 0.001614 | 0.001555 | 0.001648 |
| mem_fun_cxx98.test | RUN | 0.204051 | 0.638665 | 0.658823 | 0.001970 | 0.001567 | 0.001679 |
| mem_fun_portable.test | RUN | 0.199758 | 0.568048 | 0.619743 | 0.001452 | 0.001281 | 0.001563 |
| std_bind_cxx98.test | RUN | 0.189317 | 0.523285 | 0.566820 | 0.001473 | 0.001671 | 0.001573 |
| std_bind_portable.test | RUN | 0.188127 | 0.481654 | 0.531505 | 0.001541 | 0.001918 | 0.001545 |
| function_ref_cxx98.test | RUN | 0.175470 | 0.441182 | 0.518252 | 0.001240 | 0.001500 | 0.001638 |
| function_ref_portable.test | RUN | 0.174939 | 0.399294 | 0.496913 | 0.001743 | 0.001591 | 0.001378 |
| contains_test.test | RUN | 0.220355 | 0.859100 | 0.806511 | 0.001510 | 0.001714 | 0.001724 |
| contains2_test.test | RUN | 0.197416 | 0.607365 | 0.630466 | 0.001559 | 0.001598 | 0.001487 |
| nothrow_swap.test | RUN | 0.187452 | 0.582836 | 0.606010 | 0.001653 | 0.001624 | 0.001523 |
| rvalues_test.test | RUN | 0.212779 | 0.700488 | 0.703135 | 0.001570 | 0.001576 | 0.001539 |
| function_typeof_test.test | COMPILE | 0.138578 | 0.310652 | 0.354891 | — | — | — |
| result_arg_types_test.test | RUN | 0.198946 | 0.471420 | 0.618870 | 0.001503 | 0.001695 | 0.001630 |
| result_arg_n_types_test.test | RUN | 0.217891 | 0.533311 | 0.743274 | 0.001556 | 0.001502 | 0.001588 |
| test_bad_function_call_shared.test | RUN | 0.179166 | 0.440986 | 0.537508 | 0.001646 | 0.001898 | 0.001746 |
| test_bad_function_call_static.test | RUN | 0.184892 | 0.442673 | 0.516997 | 0.001511 | 0.001635 | 0.001691 |
| mixed_cxxstd_shared.test | RUN | 0.189960 | 0.532531 | 0.599343 | 0.001708 | 0.001744 | 0.001668 |
| mixed_cxxstd_static.test | RUN | 0.187433 | 0.533061 | 0.596923 | 0.001565 | 0.001595 | 0.001578 |
| mixed_cxxstd_shared_0x.test | RUN | 0.187461 | 0.527314 | 0.593013 | 0.001786 | 0.001918 | 0.001807 |
| mixed_cxxstd_static_0x.test | RUN | 0.189356 | 0.520473 | 0.593407 | 0.001607 | 0.001640 | 0.001538 |
| mixed_cxxstd_shared_14.test | RUN | 0.194438 | 0.531200 | 0.591569 | 0.001567 | 0.001732 | 0.001698 |
| mixed_cxxstd_static_14.test | RUN | 0.187000 | 0.529025 | 0.591027 | 0.001575 | 0.001684 | 0.001642 |
| return_function_shared.test | RUN | 0.185835 | 0.527777 | 0.579808 | 0.001768 | 0.001794 | 0.001792 |
| return_function_static.test | RUN | 0.185675 | 0.537147 | 0.576960 | 0.001690 | 0.001521 | 0.001564 |
| return_function_shared_0x.test | RUN | 0.183275 | 0.540526 | 0.579571 | 0.001673 | 0.001774 | 0.001824 |
| return_function_static_0x.test | RUN | 0.185076 | 0.534780 | 0.581907 | 0.001637 | 0.001660 | 0.001532 |
| return_function_shared_14.test | RUN | 0.184117 | 0.530072 | 0.572225 | 0.001644 | 0.001807 | 0.001664 |
| return_function_static_14.test | RUN | 0.184431 | 0.521966 | 0.573185 | 0.001491 | 0.001774 | 0.001535 |
| quick.test | RUN | 0.189644 | 0.529761 | 0.584704 | 0.001626 | 0.001613 | 0.001591 |
| issue_42.test | COMPILE | 0.147125 | 0.333039 | 0.398909 | — | — | — |
| fn_eq_bind_test.test | RUN | 0.243349 | 0.724188 | 0.836139 | 0.001497 | 0.001580 | 0.001410 |
| contains_test_no_rtti.test | RUN | 0.222208 | 0.825454 | 0.807602 | 0.001662 | 0.001672 | 0.001375 |
| contains2_test_no_rtti.test | RUN | 0.199333 | 0.612321 | 0.631571 | 0.001397 | 0.001696 | 0.001134 |
| contains3_test.test | RUN | 0.184243 | 0.477980 | 0.556592 | 0.001140 | 0.001620 | 0.001449 |
| contains3_test_no_rtti.test | RUN | 0.127679 | 0.362427 | 0.354233 | 0.001137 | 0.001170 | 0.001163 |
| issue_53.test | COMPILE | 0.114093 | 0.257854 | 0.268290 | — | — | — |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.995× | 0.989×, 1.001× | 1.001× |
| clang | 0.993× | 0.996×, 0.991× | 1.019× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1361 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44260407509).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| allocator_test.test | 10 | 0.001007s | 0.001023s | 0.000958s | byte equality observed |
| contains2_test.test | 10 | 0.001038s | 0.001045s | 0.000941s | byte equality observed |
| contains2_test_no_rtti.test | 10 | 0.001042s | 0.001025s | 0.000951s | byte equality observed |
| contains3_test.test | 10 | 0.001022s | 0.001038s | 0.000941s | byte equality observed |
| contains3_test_no_rtti.test | 10 | 0.001051s | 0.001003s | 0.000948s | byte equality observed |
| contains_test.test | 10 | 0.001064s | 0.001025s | 0.000989s | byte equality observed |
| contains_test_no_rtti.test | 10 | 0.001068s | 0.001035s | 0.001090s | byte equality observed |
| fn_eq_bind_test.test | 10 | 0.001026s | 0.001032s | 0.001078s | byte equality observed |
| function_arith_cxx98.test | 10 | 0.001083s | 0.001087s | 0.001034s | byte equality observed |
| function_arith_portable.test | 10 | 0.001083s | 0.001101s | 0.001058s | byte equality observed |
| function_n_test.test | 10 | 0.001060s | 0.001121s | 0.001041s | byte equality observed |
| function_ref_cxx98.test | 10 | 0.001020s | 0.001058s | 0.001021s | byte equality observed |
| function_ref_portable.test | 10 | 0.001024s | 0.001074s | 0.001027s | byte equality observed |
| function_test.test | 10 | 0.001114s | 0.001092s | 0.001102s | byte equality observed |
| function_test_no_rtti.test | 10 | 0.001103s | 0.001122s | 0.001144s | byte equality observed |
| lambda_test.test | 10 | 0.001102s | 0.001057s | 0.001039s | byte equality observed |
| mem_fun_cxx98.test | 10 | 0.001048s | 0.001035s | 0.001049s | byte equality observed |
| mem_fun_portable.test | 10 | 0.001056s | 0.001075s | 0.001076s | byte equality observed |
| mixed_cxxstd_shared.test | 10 | 0.001104s | 0.001141s | 0.001123s | byte equality observed |
| mixed_cxxstd_shared_0x.test | 10 | 0.001133s | 0.001077s | 0.001120s | byte equality observed |
| mixed_cxxstd_shared_14.test | 10 | 0.001114s | 0.001128s | 0.001105s | byte equality observed |
| mixed_cxxstd_static.test | 10 | 0.001051s | 0.001035s | 0.001089s | byte equality observed |
| mixed_cxxstd_static_0x.test | 10 | 0.001038s | 0.001047s | 0.001049s | byte equality observed |
| mixed_cxxstd_static_14.test | 10 | 0.001058s | 0.001027s | 0.001094s | byte equality observed |
| nothrow_swap.test | 10 | 0.001071s | 0.001067s | 0.001060s | byte equality observed |
| quick.test | 10 | 0.001086s | 0.001057s | 0.001049s | byte equality observed |
| result_arg_n_types_test.test | 10 | 0.001034s | 0.001008s | 0.001034s | byte equality observed |
| result_arg_types_test.test | 10 | 0.001055s | 0.001066s | 0.001101s | byte equality observed |
| return_function_shared.test | 10 | 0.001109s | 0.001122s | 0.001173s | byte equality observed |
| return_function_shared_0x.test | 10 | 0.001135s | 0.001155s | 0.001152s | byte equality observed |
| return_function_shared_14.test | 10 | 0.001122s | 0.001107s | 0.001156s | byte equality observed |
| return_function_static.test | 10 | 0.001054s | 0.001085s | 0.001058s | byte equality observed |
| return_function_static_0x.test | 10 | 0.001041s | 0.001042s | 0.001069s | byte equality observed |
| return_function_static_14.test | 10 | 0.001061s | 0.001043s | 0.001044s | byte equality observed |
| rvalues_test.test | 10 | 0.001065s | 0.001065s | 0.001076s | byte equality observed |
| stateless_test.test | 10 | 0.001049s | 0.001069s | 0.001044s | byte equality observed |
| std_bind_cxx98.test | 10 | 0.001021s | 0.001041s | 0.001032s | byte equality observed |
| std_bind_portable.test | 10 | 0.001034s | 0.001029s | 0.001005s | byte equality observed |
| sum_avg_cxx98.test | 10 | 0.001012s | 0.001013s | 0.000994s | byte equality observed |
| sum_avg_portable.test | 10 | 0.001024s | 0.001007s | 0.001022s | byte equality observed |
| test_bad_function_call_shared.test | 10 | 0.001155s | 0.001125s | 0.001133s | byte equality observed |
| test_bad_function_call_static.test | 10 | 0.001091s | 0.001069s | 0.001119s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44260407509).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
