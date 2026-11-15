# libs/function/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| function_test.test | RUN | 0.377702 | 2.113504 | 2.026557 | 0.001618 | 0.002150 | 0.001814 |
| function_test_no_rtti.test | RUN | 0.373499 | 2.094059 | 2.015974 | 0.001914 | 0.002106 | 0.002074 |
| function_n_test.test | RUN | 0.354231 | 1.774655 | 1.724000 | 0.001892 | 0.001867 | 0.002092 |
| allocator_test.test | RUN | 0.288929 | 0.998117 | 1.178011 | 0.002036 | 0.002402 | 0.002054 |
| stateless_test.test | RUN | 0.221047 | 0.550637 | 0.763122 | 0.002084 | 0.001986 | 0.002170 |
| lambda_test.test | RUN | 0.466993 | 1.323917 | 1.630366 | 0.002034 | 0.002330 | 0.002068 |
| function_test_fail1.test | COMPILE_FAIL | 0.165195 | 0.373703 | 0.556524 | — | — | — |
| function_test_fail2.test | COMPILE_FAIL | 0.167050 | 0.388225 | 0.576605 | — | — | — |
| function_30.test | COMPILE | 0.170171 | 0.400695 | 0.589777 | — | — | — |
| function_30_repeat.test | COMPILE | 0.169117 | 0.411537 | 0.574878 | — | — | — |
| function_arith_cxx98.test | RUN | 0.224825 | 0.666587 | 0.860560 | 0.001885 | 0.002130 | 0.002024 |
| function_arith_portable.test | RUN | 0.222890 | 0.629409 | 0.783229 | 0.001917 | 0.001766 | 0.002146 |
| sum_avg_cxx98.test | RUN | 0.216284 | 0.530154 | 0.749630 | 0.001583 | 0.002228 | 0.002005 |
| sum_avg_portable.test | RUN | 0.211340 | 0.495937 | 0.734819 | 0.002064 | 0.002262 | 0.002027 |
| mem_fun_cxx98.test | RUN | 0.244442 | 0.728498 | 0.878503 | 0.002096 | 0.002002 | 0.002011 |
| mem_fun_portable.test | RUN | 0.235549 | 0.664290 | 0.930563 | 0.001693 | 0.002013 | 0.002090 |
| std_bind_cxx98.test | RUN | 0.222244 | 0.632435 | 0.841101 | 0.002015 | 0.002128 | 0.001804 |
| std_bind_portable.test | RUN | 0.231351 | 0.593969 | 0.733312 | 0.001952 | 0.002066 | 0.002007 |
| function_ref_cxx98.test | RUN | 0.216870 | 0.546289 | 0.772991 | 0.001866 | 0.002342 | 0.001952 |
| function_ref_portable.test | RUN | 0.212974 | 0.501666 | 0.712722 | 0.002007 | 0.001867 | 0.002050 |
| contains_test.test | RUN | 0.263209 | 1.015327 | 1.136394 | 0.001827 | 0.002305 | 0.002038 |
| contains2_test.test | RUN | 0.245545 | 0.741911 | 0.892138 | 0.002079 | 0.002685 | 0.001525 |
| nothrow_swap.test | RUN | 0.230258 | 0.713752 | 0.864074 | 0.001921 | 0.002389 | 0.002064 |
| rvalues_test.test | RUN | 0.262213 | 0.817538 | 0.978602 | 0.002130 | 0.002068 | 0.002060 |
| function_typeof_test.test | COMPILE | 0.178579 | 0.384040 | 0.533230 | — | — | — |
| result_arg_types_test.test | RUN | 0.238050 | 0.591708 | 0.907369 | 0.002019 | 0.001983 | 0.002064 |
| result_arg_n_types_test.test | RUN | 0.265338 | 0.643285 | 1.076288 | 0.001870 | 0.002452 | 0.002043 |
| test_bad_function_call_shared.test | RUN | 0.214315 | 0.547864 | 0.749718 | 0.002055 | 0.002464 | 0.002170 |
| test_bad_function_call_static.test | RUN | 0.214559 | 0.560564 | 0.770761 | 0.001772 | 0.002359 | 0.001726 |
| mixed_cxxstd_shared.test | RUN | 0.228134 | 0.625024 | 0.850878 | 0.001774 | 0.002187 | 0.002216 |
| mixed_cxxstd_static.test | RUN | 0.229093 | 0.653763 | 0.879860 | 0.001795 | 0.001974 | 0.002098 |
| mixed_cxxstd_shared_0x.test | RUN | 0.227573 | 0.651012 | 0.830043 | 0.002190 | 0.002623 | 0.002344 |
| mixed_cxxstd_static_0x.test | RUN | 0.238922 | 0.640002 | 0.766954 | 0.002137 | 0.002128 | 0.002132 |
| mixed_cxxstd_shared_14.test | RUN | 0.233314 | 0.652116 | 0.853469 | 0.002178 | 0.002288 | 0.002408 |
| mixed_cxxstd_static_14.test | RUN | 0.240184 | 0.652429 | 0.884161 | 0.002282 | 0.002326 | 0.002205 |
| return_function_shared.test | RUN | 0.229841 | 0.629585 | 0.845945 | 0.002138 | 0.002572 | 0.002282 |
| return_function_static.test | RUN | 0.233239 | 0.666380 | 0.845689 | 0.001934 | 0.001976 | 0.001949 |
| return_function_shared_0x.test | RUN | 0.221919 | 0.663684 | 0.845639 | 0.002172 | 0.002514 | 0.002340 |
| return_function_static_0x.test | RUN | 0.230650 | 0.643752 | 0.808947 | 0.001970 | 0.002350 | 0.002011 |
| return_function_shared_14.test | RUN | 0.231126 | 0.648506 | 0.853609 | 0.002104 | 0.002083 | 0.002290 |
| return_function_static_14.test | RUN | 0.227134 | 0.640606 | 0.797153 | 0.001778 | 0.002090 | 0.002131 |
| quick.test | RUN | 0.233968 | 0.657156 | 0.847596 | 0.002097 | 0.002303 | 0.001953 |
| issue_42.test | COMPILE | 0.182812 | 0.420891 | 0.554139 | — | — | — |
| fn_eq_bind_test.test | RUN | 0.300332 | 0.856552 | 1.214518 | 0.001877 | 0.002140 | 0.001628 |
| contains_test_no_rtti.test | RUN | 0.263931 | 0.991583 | 1.146462 | 0.001746 | 0.001887 | 0.001756 |
| contains2_test_no_rtti.test | RUN | 0.248963 | 0.714660 | 0.950080 | 0.001762 | 0.002047 | 0.001702 |
| contains3_test.test | RUN | 0.227739 | 0.591390 | 0.836335 | 0.001624 | 0.001891 | 0.001698 |
| contains3_test_no_rtti.test | RUN | 0.163681 | 0.470753 | 0.470423 | 0.001611 | 0.001508 | 0.001307 |
| issue_53.test | COMPILE | 0.145791 | 0.318992 | 0.378245 | — | — | — |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 1.008× | 1.009×, 1.007× | 0.993× |
| clang | 1.004× | 1.005×, 1.003× | 0.982× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1361 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43664060660).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| allocator_test.test | 10 | 0.001172s | 0.001156s | 0.001174s | byte equality observed |
| contains2_test.test | 10 | 0.001160s | 0.001152s | 0.001161s | byte equality observed |
| contains2_test_no_rtti.test | 10 | 0.001165s | 0.001157s | 0.001158s | byte equality observed |
| contains3_test.test | 10 | 0.001154s | 0.001154s | 0.001180s | byte equality observed |
| contains3_test_no_rtti.test | 10 | 0.001168s | 0.001166s | 0.001253s | byte equality observed |
| contains_test.test | 10 | 0.001175s | 0.001204s | 0.001247s | byte equality observed |
| contains_test_no_rtti.test | 10 | 0.001235s | 0.001343s | 0.001267s | byte equality observed |
| fn_eq_bind_test.test | 10 | 0.001266s | 0.001280s | 0.001303s | byte equality observed |
| function_arith_cxx98.test | 10 | 0.001285s | 0.001265s | 0.001284s | byte equality observed |
| function_arith_portable.test | 10 | 0.001297s | 0.001334s | 0.001240s | byte equality observed |
| function_n_test.test | 10 | 0.001255s | 0.001288s | 0.001261s | byte equality observed |
| function_ref_cxx98.test | 10 | 0.001302s | 0.001239s | 0.001210s | byte equality observed |
| function_ref_portable.test | 10 | 0.001201s | 0.001227s | 0.001233s | byte equality observed |
| function_test.test | 10 | 0.001288s | 0.001323s | 0.001344s | byte equality observed |
| function_test_no_rtti.test | 10 | 0.001281s | 0.001372s | 0.001341s | byte equality observed |
| lambda_test.test | 10 | 0.001266s | 0.001256s | 0.001274s | byte equality observed |
| mem_fun_cxx98.test | 10 | 0.001239s | 0.001277s | 0.001224s | byte equality observed |
| mem_fun_portable.test | 10 | 0.001235s | 0.001296s | 0.001272s | byte equality observed |
| mixed_cxxstd_shared.test | 10 | 0.001368s | 0.001356s | 0.001421s | byte equality observed |
| mixed_cxxstd_shared_0x.test | 10 | 0.001384s | 0.001346s | 0.001405s | byte equality observed |
| mixed_cxxstd_shared_14.test | 10 | 0.001318s | 0.001367s | 0.001339s | byte equality observed |
| mixed_cxxstd_static.test | 10 | 0.001303s | 0.001310s | 0.001268s | byte equality observed |
| mixed_cxxstd_static_0x.test | 10 | 0.001274s | 0.001257s | 0.001239s | byte equality observed |
| mixed_cxxstd_static_14.test | 10 | 0.001234s | 0.001293s | 0.001264s | byte equality observed |
| nothrow_swap.test | 10 | 0.001240s | 0.001269s | 0.001276s | byte equality observed |
| quick.test | 10 | 0.001283s | 0.001256s | 0.001252s | byte equality observed |
| result_arg_n_types_test.test | 10 | 0.001223s | 0.001310s | 0.001307s | byte equality observed |
| result_arg_types_test.test | 10 | 0.001249s | 0.001214s | 0.001206s | byte equality observed |
| return_function_shared.test | 10 | 0.001324s | 0.001394s | 0.001355s | byte equality observed |
| return_function_shared_0x.test | 10 | 0.001330s | 0.001330s | 0.001367s | byte equality observed |
| return_function_shared_14.test | 10 | 0.001330s | 0.001374s | 0.001362s | byte equality observed |
| return_function_static.test | 10 | 0.001260s | 0.001260s | 0.001226s | byte equality observed |
| return_function_static_0x.test | 10 | 0.001264s | 0.001232s | 0.001270s | byte equality observed |
| return_function_static_14.test | 10 | 0.001251s | 0.001269s | 0.001303s | byte equality observed |
| rvalues_test.test | 10 | 0.001252s | 0.001272s | 0.001236s | byte equality observed |
| stateless_test.test | 10 | 0.001259s | 0.001227s | 0.001264s | byte equality observed |
| std_bind_cxx98.test | 10 | 0.001235s | 0.001232s | 0.001255s | byte equality observed |
| std_bind_portable.test | 9 | 0.001210s | 0.001235s | 0.001254s | byte equality observed |
| sum_avg_cxx98.test | 10 | 0.001245s | 0.001201s | 0.001235s | byte equality observed |
| sum_avg_portable.test | 10 | 0.001204s | 0.001203s | 0.001207s | byte equality observed |
| test_bad_function_call_shared.test | 10 | 0.001361s | 0.001408s | 0.001431s | byte equality observed |
| test_bad_function_call_static.test | 10 | 0.001313s | 0.001282s | 0.001275s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43664060660).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
