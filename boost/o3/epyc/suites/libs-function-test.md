# libs/function/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| function_test.test | RUN | 0.370115 | 1.938913 | 1.969318 | 0.002047 | 0.002212 | 0.001779 |
| function_test_no_rtti.test | RUN | 0.365134 | 1.990060 | 1.953550 | 0.001579 | 0.002183 | 0.002050 |
| function_n_test.test | RUN | 0.349733 | 1.608449 | 1.667487 | 0.001998 | 0.002064 | 0.002246 |
| allocator_test.test | RUN | 0.282949 | 0.951726 | 1.156355 | 0.002081 | 0.002016 | 0.002087 |
| stateless_test.test | RUN | 0.217811 | 0.520579 | 0.731925 | 0.002026 | 0.001850 | 0.002068 |
| lambda_test.test | RUN | 0.461241 | 1.250801 | 1.642226 | 0.001949 | 0.001846 | 0.001724 |
| function_test_fail1.test | COMPILE_FAIL | 0.159041 | 0.345124 | 0.524332 | — | — | — |
| function_test_fail2.test | COMPILE_FAIL | 0.166607 | 0.373126 | 0.552732 | — | — | — |
| function_30.test | COMPILE | 0.174409 | 0.369238 | 0.561499 | — | — | — |
| function_30_repeat.test | COMPILE | 0.176717 | 0.377133 | 0.553345 | — | — | — |
| function_arith_cxx98.test | RUN | 0.225066 | 0.620535 | 0.811422 | 0.001861 | 0.001789 | 0.001972 |
| function_arith_portable.test | RUN | 0.226169 | 0.578578 | 0.814978 | 0.001570 | 0.001765 | 0.002147 |
| sum_avg_cxx98.test | RUN | 0.212892 | 0.527042 | 0.726296 | 0.001756 | 0.001799 | 0.002093 |
| sum_avg_portable.test | RUN | 0.212342 | 0.463321 | 0.733866 | 0.002010 | 0.002076 | 0.001938 |
| mem_fun_cxx98.test | RUN | 0.242560 | 0.718593 | 0.901277 | 0.001926 | 0.001781 | 0.002013 |
| mem_fun_portable.test | RUN | 0.234732 | 0.661151 | 0.873974 | 0.001627 | 0.001860 | 0.002074 |
| std_bind_cxx98.test | RUN | 0.226428 | 0.622442 | 0.814016 | 0.001370 | 0.001749 | 0.002046 |
| std_bind_portable.test | RUN | 0.225941 | 0.550736 | 0.750563 | 0.002026 | 0.002090 | 0.001974 |
| function_ref_cxx98.test | RUN | 0.214275 | 0.510680 | 0.722733 | 0.002061 | 0.001835 | 0.001904 |
| function_ref_portable.test | RUN | 0.213572 | 0.471267 | 0.734539 | 0.001990 | 0.002017 | 0.001969 |
| contains_test.test | RUN | 0.263614 | 0.932222 | 1.124814 | 0.001799 | 0.002126 | 0.001993 |
| contains2_test.test | RUN | 0.239345 | 0.681985 | 0.878811 | 0.001978 | 0.002018 | 0.001959 |
| nothrow_swap.test | RUN | 0.227472 | 0.660959 | 0.834706 | 0.001879 | 0.002038 | 0.002092 |
| rvalues_test.test | RUN | 0.255047 | 0.757721 | 0.968671 | 0.001830 | 0.002083 | 0.002094 |
| function_typeof_test.test | COMPILE | 0.170873 | 0.365925 | 0.541148 | — | — | — |
| result_arg_types_test.test | RUN | 0.239459 | 0.549440 | 0.891746 | 0.001686 | 0.001867 | 0.002035 |
| result_arg_n_types_test.test | RUN | 0.266474 | 0.598705 | 1.046017 | 0.001893 | 0.001938 | 0.001976 |
| test_bad_function_call_shared.test | RUN | 0.214532 | 0.519808 | 0.788531 | 0.001867 | 0.002130 | 0.002396 |
| test_bad_function_call_static.test | RUN | 0.213057 | 0.508741 | 0.794728 | 0.001771 | 0.001879 | 0.002160 |
| mixed_cxxstd_shared.test | RUN | 0.223499 | 0.602125 | 0.789155 | 0.002072 | 0.002032 | 0.002081 |
| mixed_cxxstd_static.test | RUN | 0.224117 | 0.602299 | 0.830413 | 0.001744 | 0.001890 | 0.001708 |
| mixed_cxxstd_shared_0x.test | RUN | 0.223685 | 0.606160 | 0.839841 | 0.001944 | 0.002429 | 0.002397 |
| mixed_cxxstd_static_0x.test | RUN | 0.224664 | 0.604780 | 0.814073 | 0.002014 | 0.002176 | 0.002026 |
| mixed_cxxstd_shared_14.test | RUN | 0.227165 | 0.638883 | 0.859449 | 0.002104 | 0.001893 | 0.002400 |
| mixed_cxxstd_static_14.test | RUN | 0.226836 | 0.605176 | 0.832486 | 0.001818 | 0.002142 | 0.001917 |
| return_function_shared.test | RUN | 0.222091 | 0.592548 | 0.819743 | 0.002178 | 0.002274 | 0.002292 |
| return_function_static.test | RUN | 0.223877 | 0.590807 | 0.845907 | 0.001862 | 0.002006 | 0.002150 |
| return_function_shared_0x.test | RUN | 0.226128 | 0.619339 | 0.785779 | 0.001756 | 0.002294 | 0.001816 |
| return_function_static_0x.test | RUN | 0.223456 | 0.582928 | 0.824759 | 0.001674 | 0.002118 | 0.002082 |
| return_function_shared_14.test | RUN | 0.227536 | 0.610637 | 0.811253 | 0.001832 | 0.001952 | 0.002002 |
| return_function_static_14.test | RUN | 0.226282 | 0.594252 | 0.830599 | 0.001682 | 0.002054 | 0.002003 |
| quick.test | RUN | 0.226913 | 0.603510 | 0.867229 | 0.001866 | 0.001936 | 0.001978 |
| issue_42.test | COMPILE | 0.184387 | 0.400508 | 0.544224 | — | — | — |
| fn_eq_bind_test.test | RUN | 0.293043 | 0.834421 | 1.208068 | 0.001924 | 0.002036 | 0.002038 |
| contains_test_no_rtti.test | RUN | 0.263167 | 0.930147 | 1.139281 | 0.001834 | 0.001890 | 0.001684 |
| contains2_test_no_rtti.test | RUN | 0.236188 | 0.682468 | 0.893528 | 0.001754 | 0.001954 | 0.001294 |
| contains3_test.test | RUN | 0.227155 | 0.559780 | 0.787147 | 0.001438 | 0.001641 | 0.001926 |
| contains3_test_no_rtti.test | RUN | 0.135215 | 0.446086 | 0.531948 | 0.001377 | 0.001441 | 0.001583 |
| issue_53.test | COMPILE | 0.120249 | 0.293503 | 0.398660 | — | — | — |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 1.001× | 1.008×, 0.995× | 1.027× |
| clang | 0.991× | 0.998×, 0.985× | 1.003× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1360 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/43712369003).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| allocator_test.test | 10 | 0.001168s | 0.001160s | 0.001159s | byte equality observed |
| contains2_test.test | 10 | 0.001164s | 0.001152s | 0.001136s | byte equality observed |
| contains2_test_no_rtti.test | 10 | 0.001162s | 0.001162s | 0.001137s | byte equality observed |
| contains3_test.test | 6 | 0.001153s | 0.001157s | 0.001143s | byte equality observed |
| contains3_test_no_rtti.test | 10 | 0.001178s | 0.001162s | 0.001183s | byte equality observed |
| contains_test.test | 10 | 0.001176s | 0.001175s | 0.001205s | byte equality observed |
| contains_test_no_rtti.test | 10 | 0.001228s | 0.001198s | 0.001233s | byte equality observed |
| fn_eq_bind_test.test | 10 | 0.001235s | 0.001213s | 0.001249s | byte equality observed |
| function_arith_cxx98.test | 10 | 0.001270s | 0.001246s | 0.001234s | byte equality observed |
| function_arith_portable.test | 10 | 0.001278s | 0.001237s | 0.001215s | byte equality observed |
| function_n_test.test | 10 | 0.001262s | 0.001276s | 0.001246s | byte equality observed |
| function_ref_cxx98.test | 10 | 0.001227s | 0.001209s | 0.001209s | byte equality observed |
| function_ref_portable.test | 10 | 0.001221s | 0.001227s | 0.001234s | byte equality observed |
| function_test.test | 10 | 0.001306s | 0.001335s | 0.001285s | byte equality observed |
| function_test_no_rtti.test | 10 | 0.001319s | 0.001312s | 0.001355s | byte equality observed |
| lambda_test.test | 10 | 0.001274s | 0.001240s | 0.001286s | byte equality observed |
| mem_fun_cxx98.test | 10 | 0.001250s | 0.001312s | 0.001245s | byte equality observed |
| mem_fun_portable.test | 10 | 0.001239s | 0.001255s | 0.001246s | byte equality observed |
| mixed_cxxstd_shared.test | 10 | 0.001329s | 0.001357s | 0.001360s | byte equality observed |
| mixed_cxxstd_shared_0x.test | 10 | 0.001344s | 0.001334s | 0.001359s | byte equality observed |
| mixed_cxxstd_shared_14.test | 10 | 0.001343s | 0.001314s | 0.001351s | byte equality observed |
| mixed_cxxstd_static.test | 10 | 0.001244s | 0.001264s | 0.001224s | byte equality observed |
| mixed_cxxstd_static_0x.test | 10 | 0.001249s | 0.001253s | 0.001297s | byte equality observed |
| mixed_cxxstd_static_14.test | 10 | 0.001286s | 0.001310s | 0.001220s | byte equality observed |
| nothrow_swap.test | 10 | 0.001278s | 0.001245s | 0.001229s | byte equality observed |
| quick.test | 10 | 0.001262s | 0.001254s | 0.001270s | byte equality observed |
| result_arg_n_types_test.test | 10 | 0.001269s | 0.001197s | 0.001286s | byte equality observed |
| result_arg_types_test.test | 10 | 0.001253s | 0.001209s | 0.001226s | byte equality observed |
| return_function_shared.test | 10 | 0.001330s | 0.001356s | 0.001364s | byte equality observed |
| return_function_shared_0x.test | 10 | 0.001356s | 0.001366s | 0.001361s | byte equality observed |
| return_function_shared_14.test | 10 | 0.001352s | 0.001340s | 0.001345s | byte equality observed |
| return_function_static.test | 10 | 0.001232s | 0.001242s | 0.001212s | byte equality observed |
| return_function_static_0x.test | 10 | 0.001276s | 0.001219s | 0.001221s | byte equality observed |
| return_function_static_14.test | 10 | 0.001267s | 0.001281s | 0.001223s | byte equality observed |
| rvalues_test.test | 10 | 0.001255s | 0.001241s | 0.001244s | byte equality observed |
| stateless_test.test | 10 | 0.001256s | 0.001240s | 0.001228s | byte equality observed |
| std_bind_cxx98.test | 10 | 0.001227s | 0.001263s | 0.001224s | byte equality observed |
| std_bind_portable.test | 10 | 0.001247s | 0.001198s | 0.001172s | byte equality observed |
| sum_avg_cxx98.test | 10 | 0.001222s | 0.001220s | 0.001266s | byte equality observed |
| sum_avg_portable.test | 10 | 0.001214s | 0.001241s | 0.001186s | byte equality observed |
| test_bad_function_call_shared.test | 10 | 0.001368s | 0.001350s | 0.001373s | byte equality observed |
| test_bad_function_call_static.test | 10 | 0.001325s | 0.001339s | 0.001260s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/43712369003).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
