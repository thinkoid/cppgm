# libs/function/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| function_test.test | RUN | 0.374384 | 2.012756 | 1.962425 | 0.001661 | 0.002023 | 0.002216 |
| function_test_no_rtti.test | RUN | 0.366813 | 1.970199 | 2.034990 | 0.001674 | 0.002182 | 0.002034 |
| function_n_test.test | RUN | 0.342794 | 1.643006 | 1.677926 | 0.001955 | 0.001655 | 0.002120 |
| allocator_test.test | RUN | 0.280926 | 0.942916 | 1.165724 | 0.002150 | 0.002090 | 0.002012 |
| stateless_test.test | RUN | 0.213209 | 0.520663 | 0.751169 | 0.001896 | 0.001952 | 0.002090 |
| lambda_test.test | RUN | 0.461562 | 1.246374 | 1.650893 | 0.001821 | 0.001802 | 0.002022 |
| function_test_fail1.test | COMPILE_FAIL | 0.159527 | 0.348520 | 0.521855 | — | — | — |
| function_test_fail2.test | COMPILE_FAIL | 0.168420 | 0.356439 | 0.567732 | — | — | — |
| function_30.test | COMPILE | 0.172285 | 0.380553 | 0.571328 | — | — | — |
| function_30_repeat.test | COMPILE | 0.177276 | 0.370758 | 0.554584 | — | — | — |
| function_arith_cxx98.test | RUN | 0.223094 | 0.621523 | 0.815313 | 0.001805 | 0.001784 | 0.002092 |
| function_arith_portable.test | RUN | 0.212244 | 0.584058 | 0.812628 | 0.001820 | 0.002036 | 0.001962 |
| sum_avg_cxx98.test | RUN | 0.215166 | 0.525764 | 0.746997 | 0.001674 | 0.001833 | 0.002092 |
| sum_avg_portable.test | RUN | 0.216781 | 0.466674 | 0.732394 | 0.002001 | 0.002226 | 0.002031 |
| mem_fun_cxx98.test | RUN | 0.246717 | 0.711349 | 0.900003 | 0.001671 | 0.001458 | 0.002132 |
| mem_fun_portable.test | RUN | 0.237354 | 0.647682 | 0.859062 | 0.002042 | 0.001773 | 0.002049 |
| std_bind_cxx98.test | RUN | 0.224997 | 0.614998 | 0.793291 | 0.001835 | 0.001758 | 0.001996 |
| std_bind_portable.test | RUN | 0.224568 | 0.554233 | 0.766138 | 0.001985 | 0.002118 | 0.001995 |
| function_ref_cxx98.test | RUN | 0.217592 | 0.515330 | 0.777801 | 0.001937 | 0.001795 | 0.002099 |
| function_ref_portable.test | RUN | 0.206837 | 0.473905 | 0.715848 | 0.001814 | 0.001972 | 0.001210 |
| contains_test.test | RUN | 0.262162 | 0.931117 | 1.077437 | 0.001736 | 0.002194 | 0.001870 |
| contains2_test.test | RUN | 0.241512 | 0.694465 | 0.885799 | 0.001943 | 0.002111 | 0.001936 |
| nothrow_swap.test | RUN | 0.232269 | 0.670399 | 0.877547 | 0.001933 | 0.001787 | 0.001858 |
| rvalues_test.test | RUN | 0.259315 | 0.764683 | 0.977463 | 0.001999 | 0.001818 | 0.001977 |
| function_typeof_test.test | COMPILE | 0.169676 | 0.372352 | 0.573635 | — | — | — |
| result_arg_types_test.test | RUN | 0.243029 | 0.555964 | 0.918075 | 0.001684 | 0.002084 | 0.001811 |
| result_arg_n_types_test.test | RUN | 0.266633 | 0.619393 | 1.065184 | 0.001832 | 0.002216 | 0.002106 |
| test_bad_function_call_shared.test | RUN | 0.216482 | 0.520409 | 0.768117 | 0.002115 | 0.002338 | 0.002393 |
| test_bad_function_call_static.test | RUN | 0.217715 | 0.510469 | 0.755281 | 0.001746 | 0.002073 | 0.001546 |
| mixed_cxxstd_shared.test | RUN | 0.237076 | 0.609757 | 0.859491 | 0.001729 | 0.002201 | 0.002338 |
| mixed_cxxstd_static.test | RUN | 0.231711 | 0.608847 | 0.864147 | 0.001981 | 0.001843 | 0.002131 |
| mixed_cxxstd_shared_0x.test | RUN | 0.227224 | 0.614602 | 0.826255 | 0.002289 | 0.002407 | 0.002510 |
| mixed_cxxstd_static_0x.test | RUN | 0.228560 | 0.611376 | 0.807112 | 0.002011 | 0.001920 | 0.002094 |
| mixed_cxxstd_shared_14.test | RUN | 0.233604 | 0.619239 | 0.882852 | 0.002190 | 0.002003 | 0.002188 |
| mixed_cxxstd_static_14.test | RUN | 0.230298 | 0.603704 | 0.796924 | 0.002044 | 0.002162 | 0.002140 |
| return_function_shared.test | RUN | 0.225484 | 0.603016 | 0.835708 | 0.001890 | 0.002334 | 0.002306 |
| return_function_static.test | RUN | 0.217868 | 0.604966 | 0.862389 | 0.001656 | 0.002172 | 0.002071 |
| return_function_shared_0x.test | RUN | 0.228349 | 0.618675 | 0.788961 | 0.001936 | 0.002326 | 0.002334 |
| return_function_static_0x.test | RUN | 0.227512 | 0.608477 | 0.856974 | 0.001998 | 0.002205 | 0.002168 |
| return_function_shared_14.test | RUN | 0.222555 | 0.622104 | 0.834557 | 0.002145 | 0.002198 | 0.002372 |
| return_function_static_14.test | RUN | 0.223293 | 0.606968 | 0.801194 | 0.001860 | 0.001935 | 0.002024 |
| quick.test | RUN | 0.220981 | 0.627179 | 0.817472 | 0.001769 | 0.002174 | 0.002142 |
| issue_42.test | COMPILE | 0.176242 | 0.421638 | 0.593301 | — | — | — |
| fn_eq_bind_test.test | RUN | 0.300322 | 0.834142 | 1.248531 | 0.001895 | 0.002070 | 0.002072 |
| contains_test_no_rtti.test | RUN | 0.260915 | 0.949800 | 1.130367 | 0.001853 | 0.001669 | 0.001694 |
| contains2_test_no_rtti.test | RUN | 0.246721 | 0.685439 | 0.927076 | 0.001858 | 0.001415 | 0.002158 |
| contains3_test.test | RUN | 0.223104 | 0.560599 | 0.789168 | 0.001812 | 0.001993 | 0.001765 |
| contains3_test_no_rtti.test | RUN | 0.141455 | 0.457252 | 0.547804 | 0.001434 | 0.001480 | 0.001500 |
| issue_53.test | COMPILE | 0.121839 | 0.282995 | 0.392522 | — | — | — |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 1.002× | 1.009×, 0.996× | 1.003× |
| clang | 1.005× | 1.006×, 1.004× | 1.016× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1359 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/43750858933).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| allocator_test.test | 10 | 0.001127s | 0.001153s | 0.001134s | byte equality observed |
| contains2_test.test | 10 | 0.001131s | 0.001146s | 0.001143s | byte equality observed |
| contains2_test_no_rtti.test | 10 | 0.001132s | 0.001148s | 0.001129s | byte equality observed |
| contains3_test.test | 10 | 0.001138s | 0.001145s | 0.001127s | byte equality observed |
| contains3_test_no_rtti.test | 10 | 0.001141s | 0.001128s | 0.001183s | byte equality observed |
| contains_test.test | 10 | 0.001133s | 0.001155s | 0.001248s | byte equality observed |
| contains_test_no_rtti.test | 10 | 0.001142s | 0.001196s | 0.001245s | byte equality observed |
| fn_eq_bind_test.test | 10 | 0.001203s | 0.001192s | 0.001234s | byte equality observed |
| function_arith_cxx98.test | 10 | 0.001278s | 0.001245s | 0.001295s | byte equality observed |
| function_arith_portable.test | 10 | 0.001264s | 0.001287s | 0.001256s | byte equality observed |
| function_n_test.test | 10 | 0.001243s | 0.001252s | 0.001270s | byte equality observed |
| function_ref_cxx98.test | 10 | 0.001227s | 0.001206s | 0.001197s | byte equality observed |
| function_ref_portable.test | 9 | 0.001201s | 0.001176s | 0.001175s | byte equality observed |
| function_test.test | 9 | 0.001270s | 0.001291s | 0.001299s | byte equality observed |
| function_test_no_rtti.test | 10 | 0.001298s | 0.001317s | 0.001307s | byte equality observed |
| lambda_test.test | 10 | 0.001254s | 0.001316s | 0.001224s | byte equality observed |
| mem_fun_cxx98.test | 10 | 0.001236s | 0.001209s | 0.001268s | byte equality observed |
| mem_fun_portable.test | 10 | 0.001244s | 0.001215s | 0.001218s | byte equality observed |
| mixed_cxxstd_shared.test | 10 | 0.001317s | 0.001326s | 0.001358s | byte equality observed |
| mixed_cxxstd_shared_0x.test | 10 | 0.001393s | 0.001384s | 0.001335s | byte equality observed |
| mixed_cxxstd_shared_14.test | 10 | 0.001360s | 0.001315s | 0.001323s | byte equality observed |
| mixed_cxxstd_static.test | 10 | 0.001213s | 0.001282s | 0.001255s | byte equality observed |
| mixed_cxxstd_static_0x.test | 7 | 0.001214s | 0.001205s | 0.001192s | byte equality observed |
| mixed_cxxstd_static_14.test | 7 | 0.001250s | 0.001234s | 0.001278s | byte equality observed |
| nothrow_swap.test | 10 | 0.001236s | 0.001280s | 0.001262s | byte equality observed |
| quick.test | 10 | 0.001223s | 0.001259s | 0.001230s | byte equality observed |
| result_arg_n_types_test.test | 10 | 0.001238s | 0.001215s | 0.001290s | byte equality observed |
| result_arg_types_test.test | 10 | 0.001203s | 0.001279s | 0.001193s | byte equality observed |
| return_function_shared.test | 10 | 0.001312s | 0.001302s | 0.001314s | byte equality observed |
| return_function_shared_0x.test | 10 | 0.001341s | 0.001353s | 0.001329s | byte equality observed |
| return_function_shared_14.test | 10 | 0.001350s | 0.001292s | 0.001354s | byte equality observed |
| return_function_static.test | 10 | 0.001208s | 0.001226s | 0.001203s | byte equality observed |
| return_function_static_0x.test | 10 | 0.001223s | 0.001240s | 0.001194s | byte equality observed |
| return_function_static_14.test | 10 | 0.001249s | 0.001220s | 0.001231s | byte equality observed |
| rvalues_test.test | 10 | 0.001248s | 0.001297s | 0.001238s | byte equality observed |
| stateless_test.test | 10 | 0.001248s | 0.001240s | 0.001220s | byte equality observed |
| std_bind_cxx98.test | 10 | 0.001203s | 0.001220s | 0.001194s | byte equality observed |
| std_bind_portable.test | 10 | 0.001197s | 0.001228s | 0.001188s | byte equality observed |
| sum_avg_cxx98.test | 10 | 0.001176s | 0.001224s | 0.001276s | byte equality observed |
| sum_avg_portable.test | 10 | 0.001226s | 0.001174s | 0.001184s | byte equality observed |
| test_bad_function_call_shared.test | 10 | 0.001369s | 0.001355s | 0.001354s | byte equality observed |
| test_bad_function_call_static.test | 10 | 0.001282s | 0.001238s | 0.001227s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/43750858933).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
