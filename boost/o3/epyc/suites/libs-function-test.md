# libs/function/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| function_test.test | RUN | 0.370868 | 2.029254 | 2.002284 | 0.001798 | 0.002131 | 0.002314 |
| function_test_no_rtti.test | RUN | 0.370249 | 1.988665 | 2.066541 | 0.001605 | 0.001856 | 0.002019 |
| function_n_test.test | RUN | 0.341459 | 1.671580 | 1.733204 | 0.001854 | 0.002059 | 0.002062 |
| allocator_test.test | RUN | 0.281901 | 0.947962 | 1.216372 | 0.001924 | 0.002036 | 0.002070 |
| stateless_test.test | RUN | 0.218407 | 0.527423 | 0.761069 | 0.001970 | 0.001862 | 0.002118 |
| lambda_test.test | RUN | 0.464800 | 1.284922 | 1.676424 | 0.002038 | 0.002180 | 0.002028 |
| function_test_fail1.test | COMPILE_FAIL | 0.164747 | 0.357163 | 0.558293 | — | — | — |
| function_test_fail2.test | COMPILE_FAIL | 0.172476 | 0.369109 | 0.561464 | — | — | — |
| function_30.test | COMPILE | 0.176690 | 0.393232 | 0.567126 | — | — | — |
| function_30_repeat.test | COMPILE | 0.176109 | 0.379862 | 0.591449 | — | — | — |
| function_arith_cxx98.test | RUN | 0.230925 | 0.641881 | 0.864983 | 0.002047 | 0.001944 | 0.001855 |
| function_arith_portable.test | RUN | 0.232317 | 0.592887 | 0.793989 | 0.001965 | 0.001714 | 0.002046 |
| sum_avg_cxx98.test | RUN | 0.217050 | 0.529343 | 0.782052 | 0.001636 | 0.001807 | 0.002104 |
| sum_avg_portable.test | RUN | 0.218512 | 0.477343 | 0.737125 | 0.001984 | 0.002071 | 0.002134 |
| mem_fun_cxx98.test | RUN | 0.249835 | 0.728156 | 0.952922 | 0.002035 | 0.001808 | 0.001845 |
| mem_fun_portable.test | RUN | 0.237140 | 0.665056 | 0.940198 | 0.001629 | 0.002034 | 0.001670 |
| std_bind_cxx98.test | RUN | 0.231518 | 0.620208 | 0.835723 | 0.002024 | 0.001834 | 0.002069 |
| std_bind_portable.test | RUN | 0.222499 | 0.564941 | 0.773833 | 0.002034 | 0.001896 | 0.002170 |
| function_ref_cxx98.test | RUN | 0.202044 | 0.524485 | 0.779205 | 0.001916 | 0.001898 | 0.002115 |
| function_ref_portable.test | RUN | 0.210677 | 0.476298 | 0.731630 | 0.001829 | 0.001990 | 0.002018 |
| contains_test.test | RUN | 0.266662 | 0.960515 | 1.127839 | 0.001827 | 0.002118 | 0.001834 |
| contains2_test.test | RUN | 0.243706 | 0.699754 | 0.893611 | 0.001704 | 0.001944 | 0.002109 |
| nothrow_swap.test | RUN | 0.231638 | 0.643937 | 0.850975 | 0.001950 | 0.001953 | 0.002029 |
| rvalues_test.test | RUN | 0.258780 | 0.822310 | 0.999651 | 0.002002 | 0.001975 | 0.002100 |
| function_typeof_test.test | COMPILE | 0.177298 | 0.388226 | 0.569003 | — | — | — |
| result_arg_types_test.test | RUN | 0.245365 | 0.571014 | 0.876402 | 0.001815 | 0.002211 | 0.001574 |
| result_arg_n_types_test.test | RUN | 0.262759 | 0.636924 | 1.086414 | 0.001919 | 0.001892 | 0.002170 |
| test_bad_function_call_shared.test | RUN | 0.213627 | 0.529082 | 0.822682 | 0.002065 | 0.002282 | 0.002115 |
| test_bad_function_call_static.test | RUN | 0.220134 | 0.519174 | 0.788137 | 0.001756 | 0.002180 | 0.002057 |
| mixed_cxxstd_shared.test | RUN | 0.241456 | 0.625102 | 0.893007 | 0.001767 | 0.002222 | 0.002346 |
| mixed_cxxstd_static.test | RUN | 0.227373 | 0.633810 | 0.891239 | 0.001903 | 0.001898 | 0.001802 |
| mixed_cxxstd_shared_0x.test | RUN | 0.229494 | 0.593864 | 0.844000 | 0.002197 | 0.002337 | 0.002360 |
| mixed_cxxstd_static_0x.test | RUN | 0.230901 | 0.621277 | 0.883717 | 0.001764 | 0.002195 | 0.002126 |
| mixed_cxxstd_shared_14.test | RUN | 0.231985 | 0.619540 | 0.849263 | 0.002185 | 0.002416 | 0.001836 |
| mixed_cxxstd_static_14.test | RUN | 0.233169 | 0.634325 | 0.897807 | 0.002015 | 0.001966 | 0.002148 |
| return_function_shared.test | RUN | 0.225516 | 0.607652 | 0.842776 | 0.002057 | 0.002188 | 0.002136 |
| return_function_static.test | RUN | 0.231900 | 0.612174 | 0.841740 | 0.001935 | 0.001808 | 0.002094 |
| return_function_shared_0x.test | RUN | 0.229728 | 0.628753 | 0.884744 | 0.001980 | 0.002322 | 0.002306 |
| return_function_static_0x.test | RUN | 0.220422 | 0.603159 | 0.850113 | 0.002022 | 0.002003 | 0.002140 |
| return_function_shared_14.test | RUN | 0.229456 | 0.614897 | 0.837709 | 0.002096 | 0.002214 | 0.002389 |
| return_function_static_14.test | RUN | 0.231103 | 0.614545 | 0.844323 | 0.001725 | 0.002020 | 0.002148 |
| quick.test | RUN | 0.227940 | 0.597410 | 0.792335 | 0.001922 | 0.002186 | 0.002065 |
| issue_42.test | COMPILE | 0.175450 | 0.408145 | 0.568726 | — | — | — |
| fn_eq_bind_test.test | RUN | 0.293959 | 0.848382 | 1.207662 | 0.001789 | 0.002064 | 0.002238 |
| contains_test_no_rtti.test | RUN | 0.263133 | 0.955267 | 1.188998 | 0.001943 | 0.002040 | 0.001886 |
| contains2_test_no_rtti.test | RUN | 0.247908 | 0.706690 | 0.923909 | 0.001724 | 0.002076 | 0.001948 |
| contains3_test.test | RUN | 0.227083 | 0.575589 | 0.850318 | 0.001840 | 0.001810 | 0.001510 |
| contains3_test_no_rtti.test | RUN | 0.138852 | 0.431427 | 0.559841 | 0.001593 | 0.001478 | 0.001430 |
| issue_53.test | COMPILE | 0.122154 | 0.294654 | 0.387289 | — | — | — |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 1.001× | 0.993×, 1.008× | 1.003× |
| clang | 0.995× | 0.984×, 1.005× | 1.003× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1359 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43674678137).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| allocator_test.test | 10 | 0.001185s | 0.001187s | 0.001174s | byte equality observed |
| contains2_test.test | 10 | 0.001160s | 0.001164s | 0.001168s | byte equality observed |
| contains2_test_no_rtti.test | 10 | 0.001157s | 0.001157s | 0.001149s | byte equality observed |
| contains3_test.test | 10 | 0.001154s | 0.001161s | 0.001150s | byte equality observed |
| contains3_test_no_rtti.test | 10 | 0.001156s | 0.001151s | 0.001250s | byte equality observed |
| contains_test.test | 10 | 0.001172s | 0.001198s | 0.001236s | byte equality observed |
| contains_test_no_rtti.test | 10 | 0.001247s | 0.001255s | 0.001246s | byte equality observed |
| fn_eq_bind_test.test | 10 | 0.001254s | 0.001249s | 0.001247s | byte equality observed |
| function_arith_cxx98.test | 10 | 0.001307s | 0.001256s | 0.001302s | byte equality observed |
| function_arith_portable.test | 10 | 0.001258s | 0.001237s | 0.001285s | byte equality observed |
| function_n_test.test | 10 | 0.001238s | 0.001257s | 0.001228s | byte equality observed |
| function_ref_cxx98.test | 10 | 0.001299s | 0.001205s | 0.001201s | byte equality observed |
| function_ref_portable.test | 10 | 0.001242s | 0.001216s | 0.001244s | byte equality observed |
| function_test.test | 10 | 0.001295s | 0.001294s | 0.001273s | byte equality observed |
| function_test_no_rtti.test | 10 | 0.001329s | 0.001278s | 0.001289s | byte equality observed |
| lambda_test.test | 10 | 0.001276s | 0.001268s | 0.001213s | byte equality observed |
| mem_fun_cxx98.test | 10 | 0.001262s | 0.001290s | 0.001245s | byte equality observed |
| mem_fun_portable.test | 10 | 0.001250s | 0.001228s | 0.001237s | byte equality observed |
| mixed_cxxstd_shared.test | 10 | 0.001361s | 0.001342s | 0.001379s | byte equality observed |
| mixed_cxxstd_shared_0x.test | 8 | 0.001363s | 0.001404s | 0.001390s | byte equality observed |
| mixed_cxxstd_shared_14.test | 10 | 0.001351s | 0.001354s | 0.001333s | byte equality observed |
| mixed_cxxstd_static.test | 10 | 0.001240s | 0.001226s | 0.001232s | byte equality observed |
| mixed_cxxstd_static_0x.test | 10 | 0.001258s | 0.001225s | 0.001212s | byte equality observed |
| mixed_cxxstd_static_14.test | 10 | 0.001256s | 0.001277s | 0.001217s | byte equality observed |
| nothrow_swap.test | 10 | 0.001256s | 0.001317s | 0.001250s | byte equality observed |
| quick.test | 10 | 0.001283s | 0.001247s | 0.001255s | byte equality observed |
| result_arg_n_types_test.test | 10 | 0.001270s | 0.001247s | 0.001280s | byte equality observed |
| result_arg_types_test.test | 10 | 0.001308s | 0.001232s | 0.001279s | byte equality observed |
| return_function_shared.test | 10 | 0.001363s | 0.001341s | 0.001361s | byte equality observed |
| return_function_shared_0x.test | 10 | 0.001325s | 0.001345s | 0.001397s | byte equality observed |
| return_function_shared_14.test | 10 | 0.001356s | 0.001350s | 0.001365s | byte equality observed |
| return_function_static.test | 10 | 0.001239s | 0.001304s | 0.001281s | byte equality observed |
| return_function_static_0x.test | 10 | 0.001251s | 0.001245s | 0.001227s | byte equality observed |
| return_function_static_14.test | 10 | 0.001247s | 0.001325s | 0.001217s | byte equality observed |
| rvalues_test.test | 10 | 0.001264s | 0.001252s | 0.001252s | byte equality observed |
| stateless_test.test | 10 | 0.001234s | 0.001247s | 0.001298s | byte equality observed |
| std_bind_cxx98.test | 10 | 0.001252s | 0.001216s | 0.001217s | byte equality observed |
| std_bind_portable.test | 10 | 0.001251s | 0.001254s | 0.001225s | byte equality observed |
| sum_avg_cxx98.test | 10 | 0.001243s | 0.001237s | 0.001239s | byte equality observed |
| sum_avg_portable.test | 10 | 0.001201s | 0.001236s | 0.001191s | byte equality observed |
| test_bad_function_call_shared.test | 10 | 0.001378s | 0.001387s | 0.001380s | byte equality observed |
| test_bad_function_call_static.test | 10 | 0.001247s | 0.001264s | 0.001237s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43674678137).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
