# libs/function/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| function_test.test | RUN | 0.274826 | 1.507428 | 1.347843 | 0.001526 | 0.001788 | 0.001544 |
| function_test_no_rtti.test | RUN | 0.267842 | 1.485695 | 1.347289 | 0.001637 | 0.001922 | 0.001490 |
| function_n_test.test | RUN | 0.252775 | 1.233928 | 1.143139 | 0.001700 | 0.001980 | 0.001844 |
| allocator_test.test | RUN | 0.210322 | 0.695218 | 0.787330 | 0.001806 | 0.001932 | 0.001862 |
| stateless_test.test | RUN | 0.158287 | 0.387811 | 0.501712 | 0.001812 | 0.001592 | 0.001818 |
| lambda_test.test | RUN | 0.353113 | 0.938867 | 1.102875 | 0.001743 | 0.001681 | 0.001602 |
| function_test_fail1.test | COMPILE_FAIL | 0.120091 | 0.260108 | 0.329146 | — | — | — |
| function_test_fail2.test | COMPILE_FAIL | 0.125578 | 0.265232 | 0.371510 | — | — | — |
| function_30.test | COMPILE | 0.129740 | 0.283794 | 0.365978 | — | — | — |
| function_30_repeat.test | COMPILE | 0.129634 | 0.273088 | 0.358164 | — | — | — |
| function_arith_cxx98.test | RUN | 0.167151 | 0.464993 | 0.546185 | 0.001867 | 0.001695 | 0.001790 |
| function_arith_portable.test | RUN | 0.167763 | 0.434141 | 0.530578 | 0.001778 | 0.001764 | 0.001841 |
| sum_avg_cxx98.test | RUN | 0.162409 | 0.396651 | 0.505623 | 0.001215 | 0.001695 | 0.001828 |
| sum_avg_portable.test | RUN | 0.163210 | 0.350385 | 0.450665 | 0.001770 | 0.001790 | 0.001736 |
| mem_fun_cxx98.test | RUN | 0.184751 | 0.536348 | 0.587227 | 0.001783 | 0.001534 | 0.001540 |
| mem_fun_portable.test | RUN | 0.180278 | 0.488490 | 0.567727 | 0.001609 | 0.001845 | 0.001784 |
| std_bind_cxx98.test | RUN | 0.164957 | 0.455151 | 0.576987 | 0.001622 | 0.001592 | 0.001664 |
| std_bind_portable.test | RUN | 0.166168 | 0.414361 | 0.510715 | 0.001774 | 0.001839 | 0.001761 |
| function_ref_cxx98.test | RUN | 0.163634 | 0.371934 | 0.491488 | 0.001600 | 0.001379 | 0.001740 |
| function_ref_portable.test | RUN | 0.154728 | 0.345365 | 0.472107 | 0.001577 | 0.001697 | 0.001818 |
| contains_test.test | RUN | 0.194750 | 0.703236 | 0.740879 | 0.001612 | 0.001718 | 0.001580 |
| contains2_test.test | RUN | 0.175420 | 0.512334 | 0.577542 | 0.001786 | 0.001661 | 0.001746 |
| nothrow_swap.test | RUN | 0.174958 | 0.480694 | 0.550658 | 0.001802 | 0.001872 | 0.001782 |
| rvalues_test.test | RUN | 0.192543 | 0.580409 | 0.647543 | 0.001612 | 0.001734 | 0.001650 |
| function_typeof_test.test | COMPILE | 0.127216 | 0.258062 | 0.345704 | — | — | — |
| result_arg_types_test.test | RUN | 0.183377 | 0.421468 | 0.592055 | 0.001436 | 0.001786 | 0.001797 |
| result_arg_n_types_test.test | RUN | 0.196252 | 0.457063 | 0.681165 | 0.001636 | 0.001757 | 0.001712 |
| test_bad_function_call_shared.test | RUN | 0.164616 | 0.389236 | 0.525298 | 0.001778 | 0.002052 | 0.001852 |
| test_bad_function_call_static.test | RUN | 0.159830 | 0.386887 | 0.486035 | 0.001407 | 0.002006 | 0.001886 |
| mixed_cxxstd_shared.test | RUN | 0.168303 | 0.443408 | 0.559958 | 0.001715 | 0.001966 | 0.001782 |
| mixed_cxxstd_static.test | RUN | 0.167887 | 0.451376 | 0.542602 | 0.001671 | 0.001555 | 0.001672 |
| mixed_cxxstd_shared_0x.test | RUN | 0.170535 | 0.455418 | 0.574158 | 0.001950 | 0.002072 | 0.001865 |
| mixed_cxxstd_static_0x.test | RUN | 0.170695 | 0.452265 | 0.560534 | 0.001730 | 0.001796 | 0.001603 |
| mixed_cxxstd_shared_14.test | RUN | 0.174656 | 0.461576 | 0.570990 | 0.001620 | 0.001954 | 0.001588 |
| mixed_cxxstd_static_14.test | RUN | 0.165893 | 0.450618 | 0.556451 | 0.001705 | 0.001942 | 0.001810 |
| return_function_shared.test | RUN | 0.168798 | 0.451176 | 0.542227 | 0.001648 | 0.001952 | 0.001986 |
| return_function_static.test | RUN | 0.169869 | 0.449376 | 0.535472 | 0.001678 | 0.001819 | 0.001669 |
| return_function_shared_0x.test | RUN | 0.168628 | 0.458167 | 0.545557 | 0.001846 | 0.002042 | 0.002101 |
| return_function_static_0x.test | RUN | 0.166361 | 0.454322 | 0.565352 | 0.001772 | 0.001897 | 0.001784 |
| return_function_shared_14.test | RUN | 0.166431 | 0.454989 | 0.561316 | 0.002021 | 0.002045 | 0.001625 |
| return_function_static_14.test | RUN | 0.167846 | 0.453282 | 0.571657 | 0.001507 | 0.001926 | 0.001821 |
| quick.test | RUN | 0.172848 | 0.460204 | 0.538369 | 0.001574 | 0.001646 | 0.001596 |
| issue_42.test | COMPILE | 0.134856 | 0.301582 | 0.373555 | — | — | — |
| fn_eq_bind_test.test | RUN | 0.220489 | 0.638282 | 0.816417 | 0.001395 | 0.001815 | 0.001658 |
| contains_test_no_rtti.test | RUN | 0.194785 | 0.716886 | 0.728719 | 0.001682 | 0.001906 | 0.001572 |
| contains2_test_no_rtti.test | RUN | 0.180731 | 0.517294 | 0.616702 | 0.001606 | 0.001760 | 0.001244 |
| contains3_test.test | RUN | 0.169638 | 0.412878 | 0.558738 | 0.001242 | 0.001846 | 0.001551 |
| contains3_test_no_rtti.test | RUN | 0.126347 | 0.336230 | 0.376798 | 0.001300 | 0.001392 | 0.001318 |
| issue_53.test | COMPILE | 0.115777 | 0.245455 | 0.294783 | — | — | — |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 1.013× | 1.020×, 1.005× | 0.999× |
| clang | 0.999× | 1.004×, 0.995× | 1.011× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1363 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43638391827).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| allocator_test.test | 10 | 0.001002s | 0.000999s | 0.000975s | byte equality observed |
| contains2_test.test | 10 | 0.000983s | 0.000976s | 0.000998s | byte equality observed |
| contains2_test_no_rtti.test | 10 | 0.000978s | 0.001006s | 0.000989s | byte equality observed |
| contains3_test.test | 10 | 0.000984s | 0.001015s | 0.000989s | byte equality observed |
| contains3_test_no_rtti.test | 10 | 0.000978s | 0.001033s | 0.001013s | byte equality observed |
| contains_test.test | 10 | 0.001007s | 0.001045s | 0.001044s | byte equality observed |
| contains_test_no_rtti.test | 10 | 0.001022s | 0.001052s | 0.001032s | byte equality observed |
| fn_eq_bind_test.test | 10 | 0.001014s | 0.001032s | 0.001027s | byte equality observed |
| function_arith_cxx98.test | 10 | 0.001044s | 0.001055s | 0.001042s | byte equality observed |
| function_arith_portable.test | 10 | 0.001052s | 0.001056s | 0.001022s | byte equality observed |
| function_n_test.test | 10 | 0.001030s | 0.001015s | 0.001020s | byte equality observed |
| function_ref_cxx98.test | 10 | 0.001004s | 0.001017s | 0.000979s | byte equality observed |
| function_ref_portable.test | 10 | 0.001003s | 0.000997s | 0.000994s | byte equality observed |
| function_test.test | 10 | 0.001074s | 0.001096s | 0.001126s | byte equality observed |
| function_test_no_rtti.test | 10 | 0.001062s | 0.001081s | 0.001072s | byte equality observed |
| lambda_test.test | 10 | 0.001046s | 0.001016s | 0.001040s | byte equality observed |
| mem_fun_cxx98.test | 10 | 0.001037s | 0.001004s | 0.001021s | byte equality observed |
| mem_fun_portable.test | 10 | 0.001022s | 0.001075s | 0.001044s | byte equality observed |
| mixed_cxxstd_shared.test | 10 | 0.001119s | 0.001131s | 0.001095s | byte equality observed |
| mixed_cxxstd_shared_0x.test | 10 | 0.001112s | 0.001103s | 0.001120s | byte equality observed |
| mixed_cxxstd_shared_14.test | 10 | 0.001095s | 0.001088s | 0.001102s | byte equality observed |
| mixed_cxxstd_static.test | 10 | 0.001017s | 0.001022s | 0.001015s | byte equality observed |
| mixed_cxxstd_static_0x.test | 10 | 0.001002s | 0.001001s | 0.001013s | byte equality observed |
| mixed_cxxstd_static_14.test | 10 | 0.001029s | 0.001018s | 0.001010s | byte equality observed |
| nothrow_swap.test | 10 | 0.001018s | 0.001050s | 0.001003s | byte equality observed |
| quick.test | 10 | 0.001029s | 0.001038s | 0.001014s | byte equality observed |
| result_arg_n_types_test.test | 10 | 0.000988s | 0.001033s | 0.000983s | byte equality observed |
| result_arg_types_test.test | 10 | 0.001012s | 0.001033s | 0.001039s | byte equality observed |
| return_function_shared.test | 10 | 0.001120s | 0.001129s | 0.001087s | byte equality observed |
| return_function_shared_0x.test | 10 | 0.001109s | 0.001100s | 0.001090s | byte equality observed |
| return_function_shared_14.test | 10 | 0.001099s | 0.001089s | 0.001116s | byte equality observed |
| return_function_static.test | 10 | 0.001016s | 0.001001s | 0.001034s | byte equality observed |
| return_function_static_0x.test | 10 | 0.001013s | 0.001017s | 0.001008s | byte equality observed |
| return_function_static_14.test | 10 | 0.001000s | 0.001020s | 0.001030s | byte equality observed |
| rvalues_test.test | 10 | 0.001022s | 0.001042s | 0.001031s | byte equality observed |
| stateless_test.test | 10 | 0.001007s | 0.001026s | 0.000998s | byte equality observed |
| std_bind_cxx98.test | 10 | 0.001001s | 0.001002s | 0.000999s | byte equality observed |
| std_bind_portable.test | 10 | 0.000996s | 0.001007s | 0.001003s | byte equality observed |
| sum_avg_cxx98.test | 10 | 0.001001s | 0.001024s | 0.000993s | byte equality observed |
| sum_avg_portable.test | 10 | 0.001000s | 0.000982s | 0.000977s | byte equality observed |
| test_bad_function_call_shared.test | 10 | 0.001139s | 0.001163s | 0.001133s | byte equality observed |
| test_bad_function_call_static.test | 10 | 0.001044s | 0.001072s | 0.001034s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43638391827).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
