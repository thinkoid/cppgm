# libs/function/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| function_test.test | RUN | 0.208171 | 1.105873 | 0.941544 | 0.001306 | 0.001499 | 0.001542 |
| function_test_no_rtti.test | RUN | 0.205656 | 1.101270 | 0.945010 | 0.001473 | 0.001470 | 0.001332 |
| function_n_test.test | RUN | 0.192438 | 0.903932 | 0.802014 | 0.001261 | 0.001564 | 0.001475 |
| allocator_test.test | RUN | 0.161914 | 0.514465 | 0.531067 | 0.001644 | 0.001570 | 0.001566 |
| stateless_test.test | RUN | 0.121497 | 0.280920 | 0.353358 | 0.001636 | 0.001390 | 0.001492 |
| lambda_test.test | RUN | 0.274298 | 0.669741 | 0.725609 | 0.001636 | 0.001526 | 0.001199 |
| function_test_fail1.test | COMPILE_FAIL | 0.092237 | 0.187141 | 0.226290 | — | — | — |
| function_test_fail2.test | COMPILE_FAIL | 0.093272 | 0.179320 | 0.234222 | — | — | — |
| function_30.test | COMPILE | 0.100735 | 0.187564 | 0.237294 | — | — | — |
| function_30_repeat.test | COMPILE | 0.099475 | 0.205318 | 0.238668 | — | — | — |
| function_arith_cxx98.test | RUN | 0.126712 | 0.317767 | 0.365270 | 0.001615 | 0.001371 | 0.001506 |
| function_arith_portable.test | RUN | 0.125782 | 0.302885 | 0.342859 | 0.001375 | 0.001475 | 0.001619 |
| sum_avg_cxx98.test | RUN | 0.117422 | 0.268551 | 0.332513 | 0.001538 | 0.001463 | 0.001450 |
| sum_avg_portable.test | RUN | 0.125783 | 0.247217 | 0.317167 | 0.001573 | 0.001562 | 0.001536 |
| mem_fun_cxx98.test | RUN | 0.142437 | 0.388460 | 0.404384 | 0.001894 | 0.001400 | 0.001536 |
| mem_fun_portable.test | RUN | 0.148687 | 0.354305 | 0.398292 | 0.001414 | 0.001405 | 0.001574 |
| std_bind_cxx98.test | RUN | 0.132217 | 0.332086 | 0.368366 | 0.001814 | 0.001483 | 0.001388 |
| std_bind_portable.test | RUN | 0.174317 | 0.303491 | 0.315967 | 0.001680 | 0.001607 | 0.001488 |
| function_ref_cxx98.test | RUN | 0.135894 | 0.278226 | 0.328738 | 0.001660 | 0.001426 | 0.001312 |
| function_ref_portable.test | RUN | 0.130962 | 0.248784 | 0.315780 | 0.001422 | 0.001426 | 0.001404 |
| contains_test.test | RUN | 0.165524 | 0.517298 | 0.509863 | 0.001622 | 0.001501 | 0.001168 |
| contains2_test.test | RUN | 0.151879 | 0.370851 | 0.397497 | 0.001572 | 0.001499 | 0.001550 |
| nothrow_swap.test | RUN | 0.144185 | 0.351020 | 0.379793 | 0.001758 | 0.001456 | 0.001505 |
| rvalues_test.test | RUN | 0.163783 | 0.437078 | 0.450769 | 0.001778 | 0.001586 | 0.001399 |
| function_typeof_test.test | COMPILE | 0.109832 | 0.191364 | 0.216946 | — | — | — |
| result_arg_types_test.test | RUN | 0.150795 | 0.294533 | 0.380641 | 0.001702 | 0.001520 | 0.001281 |
| result_arg_n_types_test.test | RUN | 0.161557 | 0.321595 | 0.442856 | 0.001790 | 0.001515 | 0.001476 |
| test_bad_function_call_shared.test | RUN | 0.136841 | 0.275117 | 0.326851 | 0.001688 | 0.001417 | 0.001265 |
| test_bad_function_call_static.test | RUN | 0.138033 | 0.268723 | 0.318863 | 0.001594 | 0.001538 | 0.001358 |
| mixed_cxxstd_shared.test | RUN | 0.143210 | 0.330717 | 0.352034 | 0.001612 | 0.001534 | 0.001383 |
| mixed_cxxstd_static.test | RUN | 0.144861 | 0.370574 | 0.380121 | 0.001669 | 0.001465 | 0.001454 |
| mixed_cxxstd_shared_0x.test | RUN | 0.142659 | 0.367702 | 0.358360 | 0.001580 | 0.001706 | 0.001652 |
| mixed_cxxstd_static_0x.test | RUN | 0.136189 | 0.322880 | 0.373014 | 0.001666 | 0.001455 | 0.001421 |
| mixed_cxxstd_shared_14.test | RUN | 0.142069 | 0.326687 | 0.371524 | 0.001713 | 0.001510 | 0.001396 |
| mixed_cxxstd_static_14.test | RUN | 0.138895 | 0.326548 | 0.373012 | 0.001506 | 0.001505 | 0.001415 |
| return_function_shared.test | RUN | 0.134696 | 0.319058 | 0.358961 | 0.001656 | 0.001721 | 0.001394 |
| return_function_static.test | RUN | 0.166005 | 0.324179 | 0.354641 | 0.001582 | 0.001418 | 0.001501 |
| return_function_shared_0x.test | RUN | 0.149969 | 0.344000 | 0.374110 | 0.001491 | 0.001632 | 0.001589 |
| return_function_static_0x.test | RUN | 0.132280 | 0.330741 | 0.350632 | 0.001440 | 0.001384 | 0.001486 |
| return_function_shared_14.test | RUN | 0.133130 | 0.331872 | 0.331789 | 0.002827 | 0.001426 | 0.001469 |
| return_function_static_14.test | RUN | 0.130815 | 0.322871 | 0.367143 | 0.001976 | 0.001632 | 0.001526 |
| quick.test | RUN | 0.147854 | 0.327722 | 0.339869 | 0.001734 | 0.001362 | 0.001444 |
| issue_42.test | COMPILE | 0.128758 | 0.215516 | 0.237090 | — | — | — |
| fn_eq_bind_test.test | RUN | 0.189542 | 0.461244 | 0.509757 | 0.001482 | 0.001487 | 0.001334 |
| contains_test_no_rtti.test | RUN | 0.161378 | 0.522570 | 0.482468 | 0.001467 | 0.001523 | 0.001382 |
| contains2_test_no_rtti.test | RUN | 0.149144 | 0.377527 | 0.391165 | 0.001751 | 0.001528 | 0.001313 |
| contains3_test.test | RUN | 0.143953 | 0.292521 | 0.341097 | 0.001360 | 0.001343 | 0.001164 |
| contains3_test_no_rtti.test | RUN | 0.101547 | 0.231728 | 0.216282 | 0.001240 | 0.001078 | 0.001049 |
| issue_53.test | COMPILE | 0.092607 | 0.172579 | 0.163875 | — | — | — |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 1.018× | 1.032×, 1.004× | 1.030× |
| clang | 1.001× | 0.994×, 1.008× | 0.985× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1364 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43686398833).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| allocator_test.test | 10 | 0.000890s | 0.000882s | 0.000871s | byte equality observed |
| contains2_test.test | 10 | 0.000879s | 0.000865s | 0.000863s | byte equality observed |
| contains2_test_no_rtti.test | 10 | 0.000883s | 0.000895s | 0.000877s | byte equality observed |
| contains3_test.test | 10 | 0.000882s | 0.000862s | 0.000871s | byte equality observed |
| contains3_test_no_rtti.test | 10 | 0.000865s | 0.000866s | 0.000907s | byte equality observed |
| contains_test.test | 10 | 0.000893s | 0.000892s | 0.000919s | byte equality observed |
| contains_test_no_rtti.test | 10 | 0.000885s | 0.000894s | 0.000914s | byte equality observed |
| fn_eq_bind_test.test | 10 | 0.000870s | 0.000880s | 0.000888s | byte equality observed |
| function_arith_cxx98.test | 10 | 0.000907s | 0.000890s | 0.000905s | byte equality observed |
| function_arith_portable.test | 10 | 0.000897s | 0.000875s | 0.000910s | byte equality observed |
| function_n_test.test | 10 | 0.000887s | 0.000923s | 0.000891s | byte equality observed |
| function_ref_cxx98.test | 10 | 0.000861s | 0.000866s | 0.000850s | byte equality observed |
| function_ref_portable.test | 10 | 0.000855s | 0.000841s | 0.000846s | byte equality observed |
| function_test.test | 10 | 0.000927s | 0.000925s | 0.000930s | byte equality observed |
| function_test_no_rtti.test | 10 | 0.000934s | 0.000921s | 0.000965s | byte equality observed |
| lambda_test.test | 10 | 0.000881s | 0.000912s | 0.000876s | byte equality observed |
| mem_fun_cxx98.test | 10 | 0.000893s | 0.000883s | 0.000899s | byte equality observed |
| mem_fun_portable.test | 10 | 0.000863s | 0.000878s | 0.000875s | byte equality observed |
| mixed_cxxstd_shared.test | 10 | 0.000940s | 0.000944s | 0.000975s | byte equality observed |
| mixed_cxxstd_shared_0x.test | 10 | 0.000932s | 0.000949s | 0.000974s | byte equality observed |
| mixed_cxxstd_shared_14.test | 10 | 0.000924s | 0.000921s | 0.000980s | byte equality observed |
| mixed_cxxstd_static.test | 10 | 0.000866s | 0.000875s | 0.000910s | byte equality observed |
| mixed_cxxstd_static_0x.test | 10 | 0.000891s | 0.000856s | 0.000914s | byte equality observed |
| mixed_cxxstd_static_14.test | 10 | 0.000890s | 0.000875s | 0.000914s | byte equality observed |
| nothrow_swap.test | 10 | 0.000876s | 0.000873s | 0.000914s | byte equality observed |
| quick.test | 10 | 0.000871s | 0.000870s | 0.000925s | byte equality observed |
| result_arg_n_types_test.test | 10 | 0.000873s | 0.000854s | 0.000943s | byte equality observed |
| result_arg_types_test.test | 10 | 0.000867s | 0.000870s | 0.000913s | byte equality observed |
| return_function_shared.test | 9 | 0.000935s | 0.000945s | 0.001009s | byte equality observed |
| return_function_shared_0x.test | 10 | 0.000940s | 0.000935s | 0.000977s | byte equality observed |
| return_function_shared_14.test | 10 | 0.000931s | 0.000947s | 0.000980s | byte equality observed |
| return_function_static.test | 10 | 0.000898s | 0.000858s | 0.000897s | byte equality observed |
| return_function_static_0x.test | 10 | 0.000866s | 0.000886s | 0.000906s | byte equality observed |
| return_function_static_14.test | 10 | 0.000888s | 0.000888s | 0.000900s | byte equality observed |
| rvalues_test.test | 10 | 0.000872s | 0.000870s | 0.000881s | byte equality observed |
| stateless_test.test | 10 | 0.000870s | 0.000873s | 0.000894s | byte equality observed |
| std_bind_cxx98.test | 10 | 0.000853s | 0.000876s | 0.000868s | byte equality observed |
| std_bind_portable.test | 10 | 0.000850s | 0.000865s | 0.000880s | byte equality observed |
| sum_avg_cxx98.test | 10 | 0.000865s | 0.000849s | 0.000860s | byte equality observed |
| sum_avg_portable.test | 10 | 0.000842s | 0.000863s | 0.000862s | byte equality observed |
| test_bad_function_call_shared.test | 10 | 0.000971s | 0.000982s | 0.000995s | byte equality observed |
| test_bad_function_call_static.test | 10 | 0.000895s | 0.000901s | 0.000920s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43686398833).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
