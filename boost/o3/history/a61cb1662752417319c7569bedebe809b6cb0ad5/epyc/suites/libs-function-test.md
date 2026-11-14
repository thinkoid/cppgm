# libs/function/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| function_test.test | RUN | 0.286418 | 1.480203 | 1.340914 | 0.001430 | 0.001894 | 0.001625 |
| function_test_no_rtti.test | RUN | 0.278857 | 1.475597 | 1.329848 | 0.001332 | 0.001405 | 0.001467 |
| function_n_test.test | RUN | 0.256190 | 1.231776 | 1.138306 | 0.001585 | 0.001786 | 0.001748 |
| allocator_test.test | RUN | 0.213292 | 0.708110 | 0.779173 | 0.001743 | 0.001804 | 0.001703 |
| stateless_test.test | RUN | 0.162187 | 0.374227 | 0.499949 | 0.001811 | 0.001722 | 0.001788 |
| lambda_test.test | RUN | 0.351149 | 0.931739 | 1.086449 | 0.001776 | 0.001748 | 0.001812 |
| function_test_fail1.test | COMPILE_FAIL | 0.125211 | 0.259767 | 0.329028 | — | — | — |
| function_test_fail2.test | COMPILE_FAIL | 0.124811 | 0.273319 | 0.365604 | — | — | — |
| function_30.test | COMPILE | 0.124853 | 0.261578 | 0.361446 | — | — | — |
| function_30_repeat.test | COMPILE | 0.124027 | 0.272657 | 0.373424 | — | — | — |
| function_arith_cxx98.test | RUN | 0.175078 | 0.461356 | 0.550877 | 0.001612 | 0.001644 | 0.001514 |
| function_arith_portable.test | RUN | 0.171136 | 0.426790 | 0.519625 | 0.001694 | 0.001625 | 0.001810 |
| sum_avg_cxx98.test | RUN | 0.157589 | 0.389702 | 0.473833 | 0.001711 | 0.001732 | 0.001668 |
| sum_avg_portable.test | RUN | 0.161454 | 0.349226 | 0.462805 | 0.001786 | 0.001793 | 0.001751 |
| mem_fun_cxx98.test | RUN | 0.187897 | 0.529064 | 0.594912 | 0.001778 | 0.001543 | 0.001505 |
| mem_fun_portable.test | RUN | 0.181831 | 0.485725 | 0.581264 | 0.001825 | 0.001554 | 0.001585 |
| std_bind_cxx98.test | RUN | 0.174151 | 0.457135 | 0.534418 | 0.001398 | 0.001652 | 0.001708 |
| std_bind_portable.test | RUN | 0.174369 | 0.414123 | 0.492017 | 0.001754 | 0.001804 | 0.001780 |
| function_ref_cxx98.test | RUN | 0.162261 | 0.376073 | 0.491402 | 0.001610 | 0.001321 | 0.001570 |
| function_ref_portable.test | RUN | 0.156227 | 0.344208 | 0.485226 | 0.001677 | 0.001710 | 0.001976 |
| contains_test.test | RUN | 0.199782 | 0.705941 | 0.708803 | 0.001330 | 0.001852 | 0.001682 |
| contains2_test.test | RUN | 0.185479 | 0.513400 | 0.553838 | 0.001795 | 0.002132 | 0.001312 |
| nothrow_swap.test | RUN | 0.174912 | 0.466058 | 0.585496 | 0.001653 | 0.001702 | 0.001730 |
| rvalues_test.test | RUN | 0.195628 | 0.620267 | 0.653154 | 0.001671 | 0.001625 | 0.001596 |
| function_typeof_test.test | COMPILE | 0.131311 | 0.299572 | 0.362811 | — | — | — |
| result_arg_types_test.test | RUN | 0.184308 | 0.415060 | 0.610497 | 0.001656 | 0.001676 | 0.001568 |
| result_arg_n_types_test.test | RUN | 0.198331 | 0.451754 | 0.677920 | 0.001636 | 0.001832 | 0.001710 |
| test_bad_function_call_shared.test | RUN | 0.165721 | 0.388459 | 0.512867 | 0.001843 | 0.001943 | 0.001978 |
| test_bad_function_call_static.test | RUN | 0.160638 | 0.385889 | 0.496631 | 0.001543 | 0.001883 | 0.001764 |
| mixed_cxxstd_shared.test | RUN | 0.172361 | 0.431947 | 0.584993 | 0.001907 | 0.001798 | 0.001556 |
| mixed_cxxstd_static.test | RUN | 0.160934 | 0.444671 | 0.575793 | 0.001650 | 0.001531 | 0.001672 |
| mixed_cxxstd_shared_0x.test | RUN | 0.166328 | 0.458336 | 0.576739 | 0.001925 | 0.002002 | 0.001949 |
| mixed_cxxstd_static_0x.test | RUN | 0.172318 | 0.447754 | 0.572920 | 0.001676 | 0.001855 | 0.001838 |
| mixed_cxxstd_shared_14.test | RUN | 0.172788 | 0.448027 | 0.540525 | 0.001905 | 0.001753 | 0.001629 |
| mixed_cxxstd_static_14.test | RUN | 0.167025 | 0.435299 | 0.550101 | 0.001810 | 0.001936 | 0.001737 |
| return_function_shared.test | RUN | 0.168099 | 0.452464 | 0.579669 | 0.001780 | 0.001948 | 0.001802 |
| return_function_static.test | RUN | 0.168586 | 0.452893 | 0.571891 | 0.001884 | 0.001681 | 0.001668 |
| return_function_shared_0x.test | RUN | 0.166075 | 0.442836 | 0.556196 | 0.001571 | 0.001576 | 0.001886 |
| return_function_static_0x.test | RUN | 0.168015 | 0.450035 | 0.548878 | 0.001668 | 0.001750 | 0.001668 |
| return_function_shared_14.test | RUN | 0.170314 | 0.463137 | 0.507086 | 0.001796 | 0.001825 | 0.001709 |
| return_function_static_14.test | RUN | 0.166949 | 0.455336 | 0.526409 | 0.001346 | 0.001872 | 0.001758 |
| quick.test | RUN | 0.174261 | 0.436885 | 0.543388 | 0.001638 | 0.001862 | 0.001781 |
| issue_42.test | COMPILE | 0.135084 | 0.285722 | 0.369095 | — | — | — |
| fn_eq_bind_test.test | RUN | 0.219351 | 0.621970 | 0.787742 | 0.001342 | 0.001834 | 0.001727 |
| contains_test_no_rtti.test | RUN | 0.196524 | 0.704538 | 0.767969 | 0.001754 | 0.001930 | 0.001578 |
| contains2_test_no_rtti.test | RUN | 0.180318 | 0.520052 | 0.592710 | 0.001330 | 0.001487 | 0.001088 |
| contains3_test.test | RUN | 0.169189 | 0.428398 | 0.536977 | 0.001357 | 0.001671 | 0.001488 |
| contains3_test_no_rtti.test | RUN | 0.113128 | 0.348391 | 0.342230 | 0.001386 | 0.001362 | 0.001287 |
| issue_53.test | COMPILE | 0.102137 | 0.226171 | 0.267680 | — | — | — |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.999× | 1.006×, 0.992× | 0.997× |
| clang | 1.003× | 0.997×, 1.009× | 1.009× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1362 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43619774656).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| allocator_test.test | 10 | 0.000980s | 0.000971s | 0.001004s | byte equality observed |
| contains2_test.test | 10 | 0.000976s | 0.001008s | 0.000986s | byte equality observed |
| contains2_test_no_rtti.test | 10 | 0.000961s | 0.000997s | 0.001027s | byte equality observed |
| contains3_test.test | 10 | 0.000964s | 0.000997s | 0.001002s | byte equality observed |
| contains3_test_no_rtti.test | 10 | 0.000976s | 0.001021s | 0.001036s | byte equality observed |
| contains_test.test | 10 | 0.000977s | 0.000999s | 0.001022s | byte equality observed |
| contains_test_no_rtti.test | 10 | 0.000991s | 0.001012s | 0.001001s | byte equality observed |
| fn_eq_bind_test.test | 10 | 0.001010s | 0.001000s | 0.001028s | byte equality observed |
| function_arith_cxx98.test | 10 | 0.001017s | 0.001010s | 0.001011s | byte equality observed |
| function_arith_portable.test | 10 | 0.001030s | 0.001021s | 0.000997s | byte equality observed |
| function_n_test.test | 10 | 0.001014s | 0.001007s | 0.001035s | byte equality observed |
| function_ref_cxx98.test | 10 | 0.000998s | 0.000973s | 0.000972s | byte equality observed |
| function_ref_portable.test | 10 | 0.000988s | 0.000979s | 0.000946s | byte equality observed |
| function_test.test | 10 | 0.001059s | 0.001052s | 0.001064s | byte equality observed |
| function_test_no_rtti.test | 10 | 0.001080s | 0.001047s | 0.001089s | byte equality observed |
| lambda_test.test | 10 | 0.001040s | 0.000983s | 0.001005s | byte equality observed |
| mem_fun_cxx98.test | 10 | 0.001012s | 0.001015s | 0.000994s | byte equality observed |
| mem_fun_portable.test | 10 | 0.000993s | 0.001000s | 0.001045s | byte equality observed |
| mixed_cxxstd_shared.test | 10 | 0.001069s | 0.001066s | 0.001066s | byte equality observed |
| mixed_cxxstd_shared_0x.test | 10 | 0.001090s | 0.001059s | 0.001090s | byte equality observed |
| mixed_cxxstd_shared_14.test | 10 | 0.001099s | 0.001104s | 0.001087s | byte equality observed |
| mixed_cxxstd_static.test | 10 | 0.001019s | 0.001036s | 0.001004s | byte equality observed |
| mixed_cxxstd_static_0x.test | 10 | 0.000995s | 0.001026s | 0.000982s | byte equality observed |
| mixed_cxxstd_static_14.test | 10 | 0.000992s | 0.001006s | 0.000991s | byte equality observed |
| nothrow_swap.test | 10 | 0.000999s | 0.001033s | 0.000993s | byte equality observed |
| quick.test | 10 | 0.001007s | 0.001012s | 0.001013s | byte equality observed |
| result_arg_n_types_test.test | 10 | 0.000992s | 0.000978s | 0.001010s | byte equality observed |
| result_arg_types_test.test | 10 | 0.000989s | 0.000980s | 0.000990s | byte equality observed |
| return_function_shared.test | 10 | 0.001084s | 0.001097s | 0.001071s | byte equality observed |
| return_function_shared_0x.test | 10 | 0.001091s | 0.001104s | 0.001128s | byte equality observed |
| return_function_shared_14.test | 10 | 0.001087s | 0.001099s | 0.001089s | byte equality observed |
| return_function_static.test | 10 | 0.001024s | 0.001009s | 0.001014s | byte equality observed |
| return_function_static_0x.test | 10 | 0.001016s | 0.000988s | 0.000979s | byte equality observed |
| return_function_static_14.test | 10 | 0.001013s | 0.001003s | 0.001007s | byte equality observed |
| rvalues_test.test | 10 | 0.001000s | 0.000991s | 0.001054s | byte equality observed |
| stateless_test.test | 10 | 0.000983s | 0.000986s | 0.001007s | byte equality observed |
| std_bind_cxx98.test | 10 | 0.001004s | 0.000960s | 0.000979s | byte equality observed |
| std_bind_portable.test | 10 | 0.000993s | 0.000977s | 0.001013s | byte equality observed |
| sum_avg_cxx98.test | 10 | 0.000976s | 0.000983s | 0.000979s | byte equality observed |
| sum_avg_portable.test | 10 | 0.000976s | 0.000972s | 0.001002s | byte equality observed |
| test_bad_function_call_shared.test | 10 | 0.001110s | 0.001112s | 0.001117s | byte equality observed |
| test_bad_function_call_static.test | 10 | 0.001018s | 0.001019s | 0.001018s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43619774656).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
