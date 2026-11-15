# libs/function/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| function_test.test | RUN | 0.209684 | 1.208813 | 0.915730 | 0.001346 | 0.001422 | 0.001139 |
| function_test_no_rtti.test | RUN | 0.205662 | 1.220726 | 0.932433 | 0.001285 | 0.001483 | 0.001490 |
| function_n_test.test | RUN | 0.198559 | 0.998793 | 0.792003 | 0.001432 | 0.001673 | 0.002895 |
| allocator_test.test | RUN | 0.158228 | 0.572085 | 0.521782 | 0.001625 | 0.001894 | 0.001500 |
| stateless_test.test | RUN | 0.119803 | 0.314402 | 0.347399 | 0.002310 | 0.001605 | 0.001525 |
| lambda_test.test | RUN | 0.273551 | 0.754870 | 0.712389 | 0.001648 | 0.001648 | 0.001591 |
| function_test_fail1.test | COMPILE_FAIL | 0.092511 | 0.200447 | 0.209643 | — | — | — |
| function_test_fail2.test | COMPILE_FAIL | 0.095787 | 0.214751 | 0.220758 | — | — | — |
| function_30.test | COMPILE | 0.103154 | 0.227414 | 0.227204 | — | — | — |
| function_30_repeat.test | COMPILE | 0.102624 | 0.214212 | 0.223655 | — | — | — |
| function_arith_cxx98.test | RUN | 0.127877 | 0.390602 | 0.358436 | 0.001686 | 0.001489 | 0.001522 |
| function_arith_portable.test | RUN | 0.125206 | 0.357600 | 0.351716 | 0.001610 | 0.001515 | 0.001720 |
| sum_avg_cxx98.test | RUN | 0.123487 | 0.320855 | 0.346253 | 0.001419 | 0.001666 | 0.001442 |
| sum_avg_portable.test | RUN | 0.124131 | 0.277828 | 0.321565 | 0.001618 | 0.001718 | 0.001487 |
| mem_fun_cxx98.test | RUN | 0.139370 | 0.421027 | 0.420997 | 0.001841 | 0.001410 | 0.001336 |
| mem_fun_portable.test | RUN | 0.135758 | 0.383977 | 0.395744 | 0.001346 | 0.001531 | 0.001424 |
| std_bind_cxx98.test | RUN | 0.127805 | 0.360163 | 0.362398 | 0.001402 | 0.001541 | 0.001419 |
| std_bind_portable.test | RUN | 0.132287 | 0.339093 | 0.339417 | 0.001621 | 0.001793 | 0.001532 |
| function_ref_cxx98.test | RUN | 0.121546 | 0.298012 | 0.321946 | 0.001529 | 0.001636 | 0.001362 |
| function_ref_portable.test | RUN | 0.120388 | 0.270901 | 0.313288 | 0.001355 | 0.001466 | 0.001394 |
| contains_test.test | RUN | 0.150838 | 0.554935 | 0.527437 | 0.001412 | 0.001640 | 0.001514 |
| contains2_test.test | RUN | 0.135992 | 0.397561 | 0.402738 | 0.001697 | 0.001643 | 0.001290 |
| nothrow_swap.test | RUN | 0.133602 | 0.379821 | 0.380930 | 0.001668 | 0.001665 | 0.001483 |
| rvalues_test.test | RUN | 0.150455 | 0.452686 | 0.444636 | 0.001614 | 0.001460 | 0.001404 |
| function_typeof_test.test | COMPILE | 0.096630 | 0.208862 | 0.236765 | — | — | — |
| result_arg_types_test.test | RUN | 0.139666 | 0.337790 | 0.393155 | 0.001151 | 0.001682 | 0.001374 |
| result_arg_n_types_test.test | RUN | 0.148055 | 0.361710 | 0.457050 | 0.001452 | 0.001736 | 0.001512 |
| test_bad_function_call_shared.test | RUN | 0.126612 | 0.308297 | 0.334752 | 0.001534 | 0.001412 | 0.001766 |
| test_bad_function_call_static.test | RUN | 0.125210 | 0.296854 | 0.342564 | 0.001388 | 0.001638 | 0.001470 |
| mixed_cxxstd_shared.test | RUN | 0.135634 | 0.336308 | 0.354529 | 0.001648 | 0.001800 | 0.001565 |
| mixed_cxxstd_static.test | RUN | 0.130875 | 0.387472 | 0.377449 | 0.001381 | 0.001604 | 0.001586 |
| mixed_cxxstd_shared_0x.test | RUN | 0.132411 | 0.397916 | 0.385828 | 0.001728 | 0.002004 | 0.001557 |
| mixed_cxxstd_static_0x.test | RUN | 0.130383 | 0.364571 | 0.369088 | 0.001610 | 0.001573 | 0.001574 |
| mixed_cxxstd_shared_14.test | RUN | 0.126776 | 0.369635 | 0.376208 | 0.002814 | 0.001792 | 0.001542 |
| mixed_cxxstd_static_14.test | RUN | 0.136958 | 0.384842 | 0.367663 | 0.001559 | 0.001722 | 0.001416 |
| return_function_shared.test | RUN | 0.153195 | 0.373146 | 0.361625 | 0.001602 | 0.001989 | 0.001408 |
| return_function_static.test | RUN | 0.134007 | 0.372823 | 0.352696 | 0.001521 | 0.001473 | 0.001564 |
| return_function_shared_0x.test | RUN | 0.148988 | 0.380214 | 0.342174 | 0.001709 | 0.001808 | 0.001535 |
| return_function_static_0x.test | RUN | 0.123306 | 0.334500 | 0.342585 | 0.001442 | 0.001545 | 0.001556 |
| return_function_shared_14.test | RUN | 0.126078 | 0.338511 | 0.368452 | 0.001325 | 0.001800 | 0.001569 |
| return_function_static_14.test | RUN | 0.126424 | 0.338903 | 0.363365 | 0.001337 | 0.001688 | 0.001431 |
| quick.test | RUN | 0.130259 | 0.340416 | 0.343555 | 0.001586 | 0.001552 | 0.001192 |
| issue_42.test | COMPILE | 0.101353 | 0.215309 | 0.235978 | — | — | — |
| fn_eq_bind_test.test | RUN | 0.166361 | 0.455281 | 0.504775 | 0.001384 | 0.001600 | 0.001487 |
| contains_test_no_rtti.test | RUN | 0.149201 | 0.539399 | 0.489069 | 0.001383 | 0.001772 | 0.001095 |
| contains2_test_no_rtti.test | RUN | 0.136015 | 0.415773 | 0.390784 | 0.001174 | 0.001242 | 0.001218 |
| contains3_test.test | RUN | 0.138509 | 0.305879 | 0.340714 | 0.001545 | 0.001550 | 0.001598 |
| contains3_test_no_rtti.test | RUN | 0.089140 | 0.295712 | 0.247247 | 0.001102 | 0.001280 | 0.001126 |
| issue_53.test | COMPILE | 0.088326 | 0.211401 | 0.168751 | — | — | — |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 1.000× | 0.980×, 1.021× | 0.960× |
| clang | 0.996× | 0.979×, 1.012× | 0.972× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1364 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43666517673).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| allocator_test.test | 10 | 0.000875s | 0.000872s | 0.000856s | byte equality observed |
| contains2_test.test | 10 | 0.000905s | 0.000885s | 0.000864s | byte equality observed |
| contains2_test_no_rtti.test | 10 | 0.000896s | 0.000884s | 0.000861s | byte equality observed |
| contains3_test.test | 10 | 0.000875s | 0.000860s | 0.000842s | byte equality observed |
| contains3_test_no_rtti.test | 10 | 0.000890s | 0.000862s | 0.000862s | byte equality observed |
| contains_test.test | 10 | 0.000879s | 0.000888s | 0.000886s | byte equality observed |
| contains_test_no_rtti.test | 10 | 0.000880s | 0.000856s | 0.000871s | byte equality observed |
| fn_eq_bind_test.test | 10 | 0.000877s | 0.000872s | 0.000847s | byte equality observed |
| function_arith_cxx98.test | 10 | 0.000868s | 0.000894s | 0.000875s | byte equality observed |
| function_arith_portable.test | 10 | 0.000870s | 0.000873s | 0.000884s | byte equality observed |
| function_n_test.test | 10 | 0.000889s | 0.000870s | 0.000877s | byte equality observed |
| function_ref_cxx98.test | 10 | 0.000854s | 0.000847s | 0.000855s | byte equality observed |
| function_ref_portable.test | 10 | 0.000844s | 0.000858s | 0.000842s | byte equality observed |
| function_test.test | 10 | 0.000914s | 0.000915s | 0.000914s | byte equality observed |
| function_test_no_rtti.test | 10 | 0.000936s | 0.000919s | 0.000919s | byte equality observed |
| lambda_test.test | 10 | 0.000873s | 0.000835s | 0.000870s | byte equality observed |
| mem_fun_cxx98.test | 10 | 0.000868s | 0.000860s | 0.000877s | byte equality observed |
| mem_fun_portable.test | 10 | 0.000850s | 0.000868s | 0.000870s | byte equality observed |
| mixed_cxxstd_shared.test | 10 | 0.000927s | 0.000946s | 0.000944s | byte equality observed |
| mixed_cxxstd_shared_0x.test | 10 | 0.000930s | 0.000939s | 0.000938s | byte equality observed |
| mixed_cxxstd_shared_14.test | 10 | 0.000952s | 0.000928s | 0.000992s | byte equality observed |
| mixed_cxxstd_static.test | 10 | 0.000867s | 0.000896s | 0.000868s | byte equality observed |
| mixed_cxxstd_static_0x.test | 10 | 0.000866s | 0.000870s | 0.000858s | byte equality observed |
| mixed_cxxstd_static_14.test | 10 | 0.000873s | 0.000865s | 0.000869s | byte equality observed |
| nothrow_swap.test | 10 | 0.000879s | 0.000861s | 0.000847s | byte equality observed |
| quick.test | 10 | 0.000861s | 0.000877s | 0.000850s | byte equality observed |
| result_arg_n_types_test.test | 10 | 0.000840s | 0.000837s | 0.000851s | byte equality observed |
| result_arg_types_test.test | 10 | 0.000834s | 0.000873s | 0.000849s | byte equality observed |
| return_function_shared.test | 10 | 0.000943s | 0.000935s | 0.000937s | byte equality observed |
| return_function_shared_0x.test | 10 | 0.000930s | 0.000935s | 0.000942s | byte equality observed |
| return_function_shared_14.test | 10 | 0.000929s | 0.000928s | 0.000942s | byte equality observed |
| return_function_static.test | 10 | 0.000862s | 0.000832s | 0.000874s | byte equality observed |
| return_function_static_0x.test | 10 | 0.000857s | 0.000845s | 0.000874s | byte equality observed |
| return_function_static_14.test | 10 | 0.000864s | 0.000844s | 0.000879s | byte equality observed |
| rvalues_test.test | 10 | 0.000855s | 0.000870s | 0.000889s | byte equality observed |
| stateless_test.test | 10 | 0.000858s | 0.000843s | 0.000874s | byte equality observed |
| std_bind_cxx98.test | 10 | 0.000834s | 0.000888s | 0.000861s | byte equality observed |
| std_bind_portable.test | 10 | 0.000844s | 0.000879s | 0.000883s | byte equality observed |
| sum_avg_cxx98.test | 10 | 0.000838s | 0.000880s | 0.000839s | byte equality observed |
| sum_avg_portable.test | 10 | 0.000841s | 0.000852s | 0.000844s | byte equality observed |
| test_bad_function_call_shared.test | 10 | 0.000967s | 0.000987s | 0.000962s | byte equality observed |
| test_bad_function_call_static.test | 10 | 0.000887s | 0.000910s | 0.000892s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43666517673).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
