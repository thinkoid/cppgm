# libs/function/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| function_test.test | RUN | 0.270892 | 1.500389 | 1.344660 | 0.001676 | 0.001783 | 0.001649 |
| function_test_no_rtti.test | RUN | 0.270895 | 1.493635 | 1.360841 | 0.001545 | 0.001737 | 0.001630 |
| function_n_test.test | RUN | 0.255618 | 1.229683 | 1.146885 | 0.001639 | 0.001914 | 0.001770 |
| allocator_test.test | RUN | 0.206045 | 0.689176 | 0.796896 | 0.001801 | 0.001883 | 0.001714 |
| stateless_test.test | RUN | 0.157879 | 0.391510 | 0.505377 | 0.001749 | 0.001720 | 0.001785 |
| lambda_test.test | RUN | 0.337398 | 0.928986 | 1.093661 | 0.001776 | 0.001742 | 0.001595 |
| function_test_fail1.test | COMPILE_FAIL | 0.119122 | 0.254470 | 0.330559 | — | — | — |
| function_test_fail2.test | COMPILE_FAIL | 0.120306 | 0.274751 | 0.372809 | — | — | — |
| function_30.test | COMPILE | 0.126165 | 0.270245 | 0.366180 | — | — | — |
| function_30_repeat.test | COMPILE | 0.126511 | 0.276472 | 0.366457 | — | — | — |
| function_arith_cxx98.test | RUN | 0.166215 | 0.460759 | 0.549613 | 0.001776 | 0.001606 | 0.001714 |
| function_arith_portable.test | RUN | 0.161835 | 0.431402 | 0.530650 | 0.001478 | 0.001759 | 0.001888 |
| sum_avg_cxx98.test | RUN | 0.157839 | 0.389014 | 0.508364 | 0.001289 | 0.001923 | 0.001820 |
| sum_avg_portable.test | RUN | 0.158476 | 0.348413 | 0.461751 | 0.001774 | 0.001805 | 0.001702 |
| mem_fun_cxx98.test | RUN | 0.184808 | 0.533879 | 0.573138 | 0.001868 | 0.001453 | 0.001759 |
| mem_fun_portable.test | RUN | 0.173495 | 0.500334 | 0.595961 | 0.001481 | 0.001655 | 0.001514 |
| std_bind_cxx98.test | RUN | 0.172264 | 0.439030 | 0.542273 | 0.001680 | 0.001631 | 0.001795 |
| std_bind_portable.test | RUN | 0.162801 | 0.414055 | 0.498738 | 0.001641 | 0.001780 | 0.001716 |
| function_ref_cxx98.test | RUN | 0.155596 | 0.368690 | 0.486477 | 0.001549 | 0.001606 | 0.001617 |
| function_ref_portable.test | RUN | 0.152884 | 0.338902 | 0.470238 | 0.001539 | 0.001666 | 0.001759 |
| contains_test.test | RUN | 0.188648 | 0.687482 | 0.755320 | 0.001559 | 0.001769 | 0.001548 |
| contains2_test.test | RUN | 0.172357 | 0.506691 | 0.555211 | 0.001751 | 0.001831 | 0.001784 |
| nothrow_swap.test | RUN | 0.171887 | 0.487701 | 0.546974 | 0.001799 | 0.001920 | 0.001766 |
| rvalues_test.test | RUN | 0.189153 | 0.576258 | 0.641263 | 0.001447 | 0.001885 | 0.001793 |
| function_typeof_test.test | COMPILE | 0.125764 | 0.276381 | 0.378340 | — | — | — |
| result_arg_types_test.test | RUN | 0.172694 | 0.403757 | 0.594913 | 0.001447 | 0.001896 | 0.001761 |
| result_arg_n_types_test.test | RUN | 0.189724 | 0.447149 | 0.648661 | 0.001561 | 0.001582 | 0.001652 |
| test_bad_function_call_shared.test | RUN | 0.157507 | 0.376256 | 0.502385 | 0.001760 | 0.001896 | 0.001580 |
| test_bad_function_call_static.test | RUN | 0.154697 | 0.383122 | 0.495948 | 0.001594 | 0.001764 | 0.001776 |
| mixed_cxxstd_shared.test | RUN | 0.165369 | 0.447844 | 0.566853 | 0.001670 | 0.002016 | 0.001645 |
| mixed_cxxstd_static.test | RUN | 0.164968 | 0.447270 | 0.567223 | 0.001768 | 0.001660 | 0.001364 |
| mixed_cxxstd_shared_0x.test | RUN | 0.165496 | 0.455735 | 0.541681 | 0.001802 | 0.002012 | 0.001909 |
| mixed_cxxstd_static_0x.test | RUN | 0.168844 | 0.453200 | 0.582776 | 0.001747 | 0.001672 | 0.001770 |
| mixed_cxxstd_shared_14.test | RUN | 0.169107 | 0.456977 | 0.559727 | 0.001574 | 0.001878 | 0.001828 |
| mixed_cxxstd_static_14.test | RUN | 0.166470 | 0.444387 | 0.566436 | 0.001662 | 0.001917 | 0.001730 |
| return_function_shared.test | RUN | 0.162307 | 0.450172 | 0.568955 | 0.001616 | 0.002042 | 0.001811 |
| return_function_static.test | RUN | 0.163187 | 0.444266 | 0.568693 | 0.001705 | 0.001890 | 0.001704 |
| return_function_shared_0x.test | RUN | 0.163809 | 0.459679 | 0.544858 | 0.001753 | 0.002058 | 0.001531 |
| return_function_static_0x.test | RUN | 0.162201 | 0.458048 | 0.560613 | 0.001750 | 0.001917 | 0.001740 |
| return_function_shared_14.test | RUN | 0.168074 | 0.466470 | 0.565367 | 0.001650 | 0.001781 | 0.001784 |
| return_function_static_14.test | RUN | 0.164686 | 0.458178 | 0.569670 | 0.001461 | 0.001759 | 0.001712 |
| quick.test | RUN | 0.165583 | 0.453505 | 0.505583 | 0.001835 | 0.001501 | 0.001757 |
| issue_42.test | COMPILE | 0.126938 | 0.288050 | 0.353704 | — | — | — |
| fn_eq_bind_test.test | RUN | 0.213787 | 0.626937 | 0.784399 | 0.001596 | 0.001714 | 0.001736 |
| contains_test_no_rtti.test | RUN | 0.189551 | 0.700054 | 0.764769 | 0.001588 | 0.001405 | 0.001532 |
| contains2_test_no_rtti.test | RUN | 0.174909 | 0.509856 | 0.589831 | 0.001524 | 0.001908 | 0.001571 |
| contains3_test.test | RUN | 0.165952 | 0.408598 | 0.544224 | 0.001798 | 0.001754 | 0.001472 |
| contains3_test_no_rtti.test | RUN | 0.120572 | 0.337291 | 0.364924 | 0.001259 | 0.001291 | 0.001229 |
| issue_53.test | COMPILE | 0.108629 | 0.237648 | 0.256174 | — | — | — |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.955× | 0.941×, 0.969× | 1.006× |
| clang | 1.004× | 1.002×, 1.006× | 1.011× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1363 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/43916760662).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| allocator_test.test | 10 | 0.001013s | 0.001000s | 0.001006s | byte equality observed |
| contains2_test.test | 10 | 0.001010s | 0.000972s | 0.000995s | byte equality observed |
| contains2_test_no_rtti.test | 10 | 0.001011s | 0.000973s | 0.001008s | byte equality observed |
| contains3_test.test | 10 | 0.001008s | 0.001042s | 0.000979s | byte equality observed |
| contains3_test_no_rtti.test | 10 | 0.001025s | 0.001006s | 0.000996s | byte equality observed |
| contains_test.test | 10 | 0.001036s | 0.001026s | 0.001021s | byte equality observed |
| contains_test_no_rtti.test | 10 | 0.001029s | 0.001035s | 0.001026s | byte equality observed |
| fn_eq_bind_test.test | 10 | 0.001015s | 0.000986s | 0.000998s | byte equality observed |
| function_arith_cxx98.test | 10 | 0.001041s | 0.001001s | 0.001010s | byte equality observed |
| function_arith_portable.test | 10 | 0.001033s | 0.001007s | 0.000999s | byte equality observed |
| function_n_test.test | 10 | 0.001035s | 0.001012s | 0.001027s | byte equality observed |
| function_ref_cxx98.test | 10 | 0.000991s | 0.000976s | 0.000974s | byte equality observed |
| function_ref_portable.test | 10 | 0.000991s | 0.000967s | 0.000991s | byte equality observed |
| function_test.test | 10 | 0.001056s | 0.001047s | 0.001050s | byte equality observed |
| function_test_no_rtti.test | 10 | 0.001081s | 0.001050s | 0.001073s | byte equality observed |
| lambda_test.test | 10 | 0.001017s | 0.001050s | 0.000976s | byte equality observed |
| mem_fun_cxx98.test | 10 | 0.001008s | 0.001013s | 0.001012s | byte equality observed |
| mem_fun_portable.test | 10 | 0.000998s | 0.001058s | 0.001028s | byte equality observed |
| mixed_cxxstd_shared.test | 10 | 0.001089s | 0.001105s | 0.001112s | byte equality observed |
| mixed_cxxstd_shared_0x.test | 10 | 0.001102s | 0.001060s | 0.001132s | byte equality observed |
| mixed_cxxstd_shared_14.test | 10 | 0.001111s | 0.001073s | 0.001103s | byte equality observed |
| mixed_cxxstd_static.test | 10 | 0.001050s | 0.001008s | 0.001016s | byte equality observed |
| mixed_cxxstd_static_0x.test | 10 | 0.000997s | 0.001015s | 0.001028s | byte equality observed |
| mixed_cxxstd_static_14.test | 10 | 0.001027s | 0.001001s | 0.001012s | byte equality observed |
| nothrow_swap.test | 10 | 0.001029s | 0.001016s | 0.001035s | byte equality observed |
| quick.test | 10 | 0.001035s | 0.001031s | 0.001008s | byte equality observed |
| result_arg_n_types_test.test | 10 | 0.001012s | 0.001000s | 0.000995s | byte equality observed |
| result_arg_types_test.test | 10 | 0.001026s | 0.001001s | 0.001004s | byte equality observed |
| return_function_shared.test | 10 | 0.001099s | 0.001115s | 0.001125s | byte equality observed |
| return_function_shared_0x.test | 10 | 0.001106s | 0.001127s | 0.001132s | byte equality observed |
| return_function_shared_14.test | 10 | 0.001111s | 0.001086s | 0.001125s | byte equality observed |
| return_function_static.test | 10 | 0.001030s | 0.001031s | 0.000996s | byte equality observed |
| return_function_static_0x.test | 10 | 0.001025s | 0.000998s | 0.001009s | byte equality observed |
| return_function_static_14.test | 10 | 0.001009s | 0.001020s | 0.001016s | byte equality observed |
| rvalues_test.test | 10 | 0.001018s | 0.001027s | 0.001013s | byte equality observed |
| stateless_test.test | 10 | 0.001034s | 0.001013s | 0.001026s | byte equality observed |
| std_bind_cxx98.test | 10 | 0.000988s | 0.000996s | 0.000974s | byte equality observed |
| std_bind_portable.test | 10 | 0.001017s | 0.001009s | 0.000988s | byte equality observed |
| sum_avg_cxx98.test | 10 | 0.000980s | 0.000976s | 0.000989s | byte equality observed |
| sum_avg_portable.test | 10 | 0.000992s | 0.001001s | 0.001008s | byte equality observed |
| test_bad_function_call_shared.test | 10 | 0.001135s | 0.001100s | 0.001107s | byte equality observed |
| test_bad_function_call_static.test | 10 | 0.001062s | 0.001019s | 0.001045s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/43916760662).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
