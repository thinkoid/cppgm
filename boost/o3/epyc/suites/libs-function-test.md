# libs/function/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| function_test.test | RUN | 0.271757 | 1.583873 | 1.368062 | 0.001330 | 0.001801 | 0.001635 |
| function_test_no_rtti.test | RUN | 0.271244 | 1.550024 | 1.404883 | 0.001672 | 0.001916 | 0.001856 |
| function_n_test.test | RUN | 0.252815 | 1.310647 | 1.173365 | 0.001582 | 0.001836 | 0.001843 |
| allocator_test.test | RUN | 0.208119 | 0.733384 | 0.810460 | 0.001692 | 0.001944 | 0.001918 |
| stateless_test.test | RUN | 0.162762 | 0.400910 | 0.505984 | 0.001768 | 0.001602 | 0.001789 |
| lambda_test.test | RUN | 0.348390 | 0.951502 | 1.117064 | 0.001760 | 0.001610 | 0.001615 |
| function_test_fail1.test | COMPILE_FAIL | 0.119152 | 0.267898 | 0.333772 | — | — | — |
| function_test_fail2.test | COMPILE_FAIL | 0.122277 | 0.277092 | 0.376927 | — | — | — |
| function_30.test | COMPILE | 0.124234 | 0.282137 | 0.375410 | — | — | — |
| function_30_repeat.test | COMPILE | 0.126459 | 0.288987 | 0.376885 | — | — | — |
| function_arith_cxx98.test | RUN | 0.166623 | 0.476335 | 0.557060 | 0.001772 | 0.001854 | 0.001847 |
| function_arith_portable.test | RUN | 0.163375 | 0.446547 | 0.543438 | 0.001367 | 0.001624 | 0.001683 |
| sum_avg_cxx98.test | RUN | 0.157227 | 0.398818 | 0.503042 | 0.001618 | 0.001819 | 0.001782 |
| sum_avg_portable.test | RUN | 0.158947 | 0.355303 | 0.490462 | 0.001765 | 0.001854 | 0.001856 |
| mem_fun_cxx98.test | RUN | 0.182143 | 0.544096 | 0.609133 | 0.001772 | 0.001691 | 0.001694 |
| mem_fun_portable.test | RUN | 0.175067 | 0.500937 | 0.597238 | 0.001434 | 0.001815 | 0.001559 |
| std_bind_cxx98.test | RUN | 0.164686 | 0.467855 | 0.561676 | 0.001476 | 0.001529 | 0.001798 |
| std_bind_portable.test | RUN | 0.168909 | 0.425620 | 0.501902 | 0.001751 | 0.001830 | 0.001932 |
| function_ref_cxx98.test | RUN | 0.158247 | 0.391890 | 0.485780 | 0.001694 | 0.001539 | 0.001779 |
| function_ref_portable.test | RUN | 0.158983 | 0.360338 | 0.493770 | 0.001589 | 0.001830 | 0.001799 |
| contains_test.test | RUN | 0.188011 | 0.732172 | 0.752942 | 0.001664 | 0.001662 | 0.001792 |
| contains2_test.test | RUN | 0.176756 | 0.526256 | 0.583393 | 0.001800 | 0.001916 | 0.001802 |
| nothrow_swap.test | RUN | 0.170663 | 0.502259 | 0.567961 | 0.001838 | 0.001551 | 0.001809 |
| rvalues_test.test | RUN | 0.191963 | 0.601813 | 0.646280 | 0.001678 | 0.001901 | 0.001490 |
| function_typeof_test.test | COMPILE | 0.131946 | 0.269135 | 0.364313 | — | — | — |
| result_arg_types_test.test | RUN | 0.179213 | 0.410291 | 0.584857 | 0.001450 | 0.001859 | 0.001762 |
| result_arg_n_types_test.test | RUN | 0.196066 | 0.451020 | 0.694301 | 0.001584 | 0.001848 | 0.001837 |
| test_bad_function_call_shared.test | RUN | 0.165877 | 0.374323 | 0.531133 | 0.001680 | 0.001782 | 0.001901 |
| test_bad_function_call_static.test | RUN | 0.161379 | 0.370133 | 0.486730 | 0.001662 | 0.001955 | 0.001691 |
| mixed_cxxstd_shared.test | RUN | 0.171098 | 0.463622 | 0.557315 | 0.001774 | 0.001964 | 0.001652 |
| mixed_cxxstd_static.test | RUN | 0.167969 | 0.451152 | 0.582226 | 0.001679 | 0.001610 | 0.001669 |
| mixed_cxxstd_shared_0x.test | RUN | 0.172077 | 0.454431 | 0.552237 | 0.001716 | 0.002026 | 0.002062 |
| mixed_cxxstd_static_0x.test | RUN | 0.170372 | 0.449769 | 0.586032 | 0.001742 | 0.001751 | 0.001688 |
| mixed_cxxstd_shared_14.test | RUN | 0.168610 | 0.456203 | 0.531946 | 0.001773 | 0.001868 | 0.002018 |
| mixed_cxxstd_static_14.test | RUN | 0.168670 | 0.445153 | 0.581907 | 0.001555 | 0.001820 | 0.001848 |
| return_function_shared.test | RUN | 0.162903 | 0.453765 | 0.565255 | 0.001732 | 0.001924 | 0.001878 |
| return_function_static.test | RUN | 0.164693 | 0.433265 | 0.546459 | 0.001812 | 0.001844 | 0.001819 |
| return_function_shared_0x.test | RUN | 0.170923 | 0.454647 | 0.552032 | 0.001736 | 0.001934 | 0.002046 |
| return_function_static_0x.test | RUN | 0.165895 | 0.445410 | 0.521643 | 0.001823 | 0.001768 | 0.001904 |
| return_function_shared_14.test | RUN | 0.164085 | 0.460874 | 0.571525 | 0.001736 | 0.001708 | 0.002074 |
| return_function_static_14.test | RUN | 0.167376 | 0.458644 | 0.577160 | 0.001500 | 0.001789 | 0.001628 |
| quick.test | RUN | 0.167437 | 0.457306 | 0.493547 | 0.001751 | 0.001837 | 0.001746 |
| issue_42.test | COMPILE | 0.134498 | 0.298041 | 0.400585 | — | — | — |
| fn_eq_bind_test.test | RUN | 0.218941 | 0.642583 | 0.827921 | 0.001328 | 0.001846 | 0.001602 |
| contains_test_no_rtti.test | RUN | 0.190295 | 0.690632 | 0.769107 | 0.001646 | 0.001866 | 0.001524 |
| contains2_test_no_rtti.test | RUN | 0.177587 | 0.511512 | 0.627270 | 0.001556 | 0.001450 | 0.001570 |
| contains3_test.test | RUN | 0.168438 | 0.404798 | 0.535906 | 0.001812 | 0.001514 | 0.001709 |
| contains3_test_no_rtti.test | RUN | 0.123199 | 0.341036 | 0.356127 | 0.001347 | 0.001420 | 0.001346 |
| issue_53.test | COMPILE | 0.105904 | 0.265682 | 0.261116 | — | — | — |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.998× | 1.007×, 0.989× | 1.016× |
| clang | 1.002× | 1.008×, 0.996× | 0.998× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1362 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43628287753).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| allocator_test.test | 10 | 0.001003s | 0.001004s | 0.000955s | byte equality observed |
| contains2_test.test | 10 | 0.000986s | 0.000965s | 0.000981s | byte equality observed |
| contains2_test_no_rtti.test | 10 | 0.000994s | 0.000985s | 0.001007s | byte equality observed |
| contains3_test.test | 10 | 0.000989s | 0.000968s | 0.000976s | byte equality observed |
| contains3_test_no_rtti.test | 10 | 0.000970s | 0.000963s | 0.001030s | byte equality observed |
| contains_test.test | 10 | 0.000996s | 0.001030s | 0.000980s | byte equality observed |
| contains_test_no_rtti.test | 10 | 0.001015s | 0.001007s | 0.000994s | byte equality observed |
| fn_eq_bind_test.test | 10 | 0.001031s | 0.001014s | 0.000984s | byte equality observed |
| function_arith_cxx98.test | 10 | 0.001013s | 0.001042s | 0.001064s | byte equality observed |
| function_arith_portable.test | 10 | 0.001038s | 0.001054s | 0.001048s | byte equality observed |
| function_n_test.test | 10 | 0.001030s | 0.001019s | 0.001008s | byte equality observed |
| function_ref_cxx98.test | 10 | 0.000994s | 0.000999s | 0.000995s | byte equality observed |
| function_ref_portable.test | 10 | 0.000999s | 0.000987s | 0.000982s | byte equality observed |
| function_test.test | 10 | 0.001065s | 0.001059s | 0.001077s | byte equality observed |
| function_test_no_rtti.test | 10 | 0.001059s | 0.001070s | 0.001084s | byte equality observed |
| lambda_test.test | 10 | 0.001021s | 0.001012s | 0.001036s | byte equality observed |
| mem_fun_cxx98.test | 10 | 0.001033s | 0.001016s | 0.001005s | byte equality observed |
| mem_fun_portable.test | 10 | 0.001007s | 0.001001s | 0.000995s | byte equality observed |
| mixed_cxxstd_shared.test | 10 | 0.001110s | 0.001127s | 0.001094s | byte equality observed |
| mixed_cxxstd_shared_0x.test | 9 | 0.001097s | 0.001103s | 0.001104s | byte equality observed |
| mixed_cxxstd_shared_14.test | 10 | 0.001074s | 0.001074s | 0.001112s | byte equality observed |
| mixed_cxxstd_static.test | 10 | 0.001003s | 0.000993s | 0.001002s | byte equality observed |
| mixed_cxxstd_static_0x.test | 10 | 0.001016s | 0.001049s | 0.001032s | byte equality observed |
| mixed_cxxstd_static_14.test | 10 | 0.001020s | 0.001006s | 0.001006s | byte equality observed |
| nothrow_swap.test | 10 | 0.001050s | 0.001034s | 0.000977s | byte equality observed |
| quick.test | 10 | 0.001016s | 0.001041s | 0.001005s | byte equality observed |
| result_arg_n_types_test.test | 10 | 0.000978s | 0.001027s | 0.001003s | byte equality observed |
| result_arg_types_test.test | 10 | 0.000991s | 0.001010s | 0.000993s | byte equality observed |
| return_function_shared.test | 10 | 0.001086s | 0.001114s | 0.001127s | byte equality observed |
| return_function_shared_0x.test | 10 | 0.001087s | 0.001110s | 0.001097s | byte equality observed |
| return_function_shared_14.test | 10 | 0.001101s | 0.001080s | 0.001092s | byte equality observed |
| return_function_static.test | 10 | 0.001024s | 0.001020s | 0.001003s | byte equality observed |
| return_function_static_0x.test | 10 | 0.001027s | 0.001004s | 0.001013s | byte equality observed |
| return_function_static_14.test | 10 | 0.001016s | 0.001005s | 0.000984s | byte equality observed |
| rvalues_test.test | 10 | 0.001028s | 0.001027s | 0.000985s | byte equality observed |
| stateless_test.test | 10 | 0.001009s | 0.001009s | 0.001033s | byte equality observed |
| std_bind_cxx98.test | 10 | 0.000983s | 0.001011s | 0.000980s | byte equality observed |
| std_bind_portable.test | 10 | 0.001018s | 0.000988s | 0.000977s | byte equality observed |
| sum_avg_cxx98.test | 10 | 0.000988s | 0.001015s | 0.001009s | byte equality observed |
| sum_avg_portable.test | 10 | 0.000983s | 0.000999s | 0.000967s | byte equality observed |
| test_bad_function_call_shared.test | 10 | 0.001115s | 0.001117s | 0.001130s | byte equality observed |
| test_bad_function_call_static.test | 10 | 0.001045s | 0.001049s | 0.001027s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43628287753).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
