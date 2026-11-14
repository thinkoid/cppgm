# libs/function/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| function_test.test | RUN | 0.243659 | 1.178731 | 0.990188 | 0.001627 | 0.001624 | 0.001354 |
| function_test_no_rtti.test | RUN | 0.240359 | 1.177889 | 0.987665 | 0.001634 | 0.001739 | 0.001586 |
| function_n_test.test | RUN | 0.222780 | 0.942300 | 0.837150 | 0.001607 | 0.001598 | 0.001630 |
| allocator_test.test | RUN | 0.189481 | 0.540926 | 0.564852 | 0.001764 | 0.001660 | 0.001662 |
| stateless_test.test | RUN | 0.143083 | 0.291706 | 0.368725 | 0.001841 | 0.001532 | 0.001585 |
| lambda_test.test | RUN | 0.301651 | 0.763311 | 0.762421 | 0.001887 | 0.001319 | 0.001658 |
| function_test_fail1.test | COMPILE_FAIL | 0.105488 | 0.203923 | 0.239890 | — | — | — |
| function_test_fail2.test | COMPILE_FAIL | 0.111335 | 0.219770 | 0.244538 | — | — | — |
| function_30.test | COMPILE | 0.112287 | 0.248405 | 0.258283 | — | — | — |
| function_30_repeat.test | COMPILE | 0.113960 | 0.249725 | 0.266741 | — | — | — |
| function_arith_cxx98.test | RUN | 0.144963 | 0.357122 | 0.422881 | 0.001906 | 0.001477 | 0.001708 |
| function_arith_portable.test | RUN | 0.149316 | 0.333208 | 0.412493 | 0.001564 | 0.001255 | 0.001498 |
| sum_avg_cxx98.test | RUN | 0.140466 | 0.300022 | 0.383540 | 0.001455 | 0.001606 | 0.001689 |
| sum_avg_portable.test | RUN | 0.142533 | 0.262833 | 0.327727 | 0.001808 | 0.001696 | 0.001667 |
| mem_fun_cxx98.test | RUN | 0.158962 | 0.422792 | 0.441860 | 0.001784 | 0.001465 | 0.001427 |
| mem_fun_portable.test | RUN | 0.157045 | 0.375684 | 0.410929 | 0.001276 | 0.001798 | 0.001473 |
| std_bind_cxx98.test | RUN | 0.147763 | 0.356843 | 0.374687 | 0.001612 | 0.001474 | 0.001524 |
| std_bind_portable.test | RUN | 0.151812 | 0.328681 | 0.353617 | 0.001845 | 0.001738 | 0.001708 |
| function_ref_cxx98.test | RUN | 0.139427 | 0.298193 | 0.336051 | 0.001660 | 0.001772 | 0.001416 |
| function_ref_portable.test | RUN | 0.135810 | 0.266291 | 0.335102 | 0.001291 | 0.001500 | 0.001624 |
| contains_test.test | RUN | 0.169504 | 0.557439 | 0.523902 | 0.001473 | 0.001679 | 0.001584 |
| contains2_test.test | RUN | 0.154577 | 0.403115 | 0.419022 | 0.001879 | 0.001574 | 0.001381 |
| nothrow_swap.test | RUN | 0.147134 | 0.386108 | 0.410317 | 0.001701 | 0.001780 | 0.001704 |
| rvalues_test.test | RUN | 0.164390 | 0.458717 | 0.477975 | 0.001663 | 0.001738 | 0.001689 |
| function_typeof_test.test | COMPILE | 0.108748 | 0.211869 | 0.249154 | — | — | — |
| result_arg_types_test.test | RUN | 0.153723 | 0.327049 | 0.405628 | 0.001413 | 0.001642 | 0.001333 |
| result_arg_n_types_test.test | RUN | 0.163399 | 0.350696 | 0.505745 | 0.001505 | 0.001763 | 0.001443 |
| test_bad_function_call_shared.test | RUN | 0.139603 | 0.301717 | 0.366838 | 0.001619 | 0.001692 | 0.001814 |
| test_bad_function_call_static.test | RUN | 0.137967 | 0.292484 | 0.349057 | 0.001605 | 0.001649 | 0.001278 |
| mixed_cxxstd_shared.test | RUN | 0.147769 | 0.379335 | 0.403475 | 0.001665 | 0.001609 | 0.001598 |
| mixed_cxxstd_static.test | RUN | 0.145405 | 0.366162 | 0.404049 | 0.001618 | 0.001472 | 0.001437 |
| mixed_cxxstd_shared_0x.test | RUN | 0.143396 | 0.346647 | 0.383454 | 0.001972 | 0.001984 | 0.001932 |
| mixed_cxxstd_static_0x.test | RUN | 0.148854 | 0.350247 | 0.398291 | 0.001625 | 0.001702 | 0.001527 |
| mixed_cxxstd_shared_14.test | RUN | 0.149188 | 0.344399 | 0.388874 | 0.002070 | 0.001728 | 0.001638 |
| mixed_cxxstd_static_14.test | RUN | 0.151174 | 0.342413 | 0.392392 | 0.001495 | 0.001732 | 0.001594 |
| return_function_shared.test | RUN | 0.141358 | 0.342094 | 0.384538 | 0.002513 | 0.001592 | 0.001558 |
| return_function_static.test | RUN | 0.142405 | 0.343458 | 0.388646 | 0.001778 | 0.001575 | 0.001459 |
| return_function_shared_0x.test | RUN | 0.146719 | 0.349002 | 0.391882 | 0.001864 | 0.001836 | 0.001826 |
| return_function_static_0x.test | RUN | 0.143603 | 0.339703 | 0.392938 | 0.001669 | 0.001586 | 0.001610 |
| return_function_shared_14.test | RUN | 0.146002 | 0.341912 | 0.391491 | 0.001863 | 0.001799 | 0.001409 |
| return_function_static_14.test | RUN | 0.142363 | 0.335511 | 0.378915 | 0.001574 | 0.001664 | 0.001736 |
| quick.test | RUN | 0.145798 | 0.341299 | 0.364318 | 0.001808 | 0.001529 | 0.001510 |
| issue_42.test | COMPILE | 0.112122 | 0.219328 | 0.260968 | — | — | — |
| fn_eq_bind_test.test | RUN | 0.191995 | 0.459727 | 0.566960 | 0.001652 | 0.001598 | 0.001275 |
| contains_test_no_rtti.test | RUN | 0.167118 | 0.524143 | 0.541272 | 0.001250 | 0.001476 | 0.001304 |
| contains2_test_no_rtti.test | RUN | 0.154056 | 0.386875 | 0.422806 | 0.001189 | 0.001127 | 0.001523 |
| contains3_test.test | RUN | 0.146699 | 0.312418 | 0.382571 | 0.001692 | 0.001738 | 0.001438 |
| contains3_test_no_rtti.test | RUN | 0.099008 | 0.260217 | 0.251380 | 0.001285 | 0.001121 | 0.001201 |
| issue_53.test | COMPILE | 0.094427 | 0.169977 | 0.185753 | — | — | — |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.986× | 0.998×, 0.974× | 1.020× |
| clang | 0.989× | 0.983×, 0.996× | 1.042× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1363 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43624536445).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| allocator_test.test | 10 | 0.000887s | 0.000893s | 0.000867s | byte equality observed |
| contains2_test.test | 10 | 0.000907s | 0.000918s | 0.000880s | byte equality observed |
| contains2_test_no_rtti.test | 9 | 0.000912s | 0.000925s | 0.000892s | byte equality observed |
| contains3_test.test | 10 | 0.000911s | 0.000901s | 0.000902s | byte equality observed |
| contains3_test_no_rtti.test | 9 | 0.000915s | 0.000895s | 0.000882s | byte equality observed |
| contains_test.test | 10 | 0.000904s | 0.000898s | 0.000941s | byte equality observed |
| contains_test_no_rtti.test | 9 | 0.000923s | 0.000916s | 0.000901s | byte equality observed |
| fn_eq_bind_test.test | 10 | 0.000907s | 0.000903s | 0.000912s | byte equality observed |
| function_arith_cxx98.test | 10 | 0.000928s | 0.000919s | 0.000915s | byte equality observed |
| function_arith_portable.test | 10 | 0.000922s | 0.000935s | 0.000907s | byte equality observed |
| function_n_test.test | 10 | 0.000924s | 0.000911s | 0.000898s | byte equality observed |
| function_ref_cxx98.test | 10 | 0.000881s | 0.000884s | 0.000886s | byte equality observed |
| function_ref_portable.test | 10 | 0.000895s | 0.000872s | 0.000876s | byte equality observed |
| function_test.test | 9 | 0.000958s | 0.000948s | 0.000954s | byte equality observed |
| function_test_no_rtti.test | 10 | 0.000958s | 0.000947s | 0.000933s | byte equality observed |
| lambda_test.test | 10 | 0.000922s | 0.000916s | 0.000899s | byte equality observed |
| mem_fun_cxx98.test | 10 | 0.000914s | 0.000919s | 0.000888s | byte equality observed |
| mem_fun_portable.test | 10 | 0.000905s | 0.000918s | 0.000908s | byte equality observed |
| mixed_cxxstd_shared.test | 10 | 0.000992s | 0.001007s | 0.000982s | byte equality observed |
| mixed_cxxstd_shared_0x.test | 10 | 0.000985s | 0.001020s | 0.000984s | byte equality observed |
| mixed_cxxstd_shared_14.test | 10 | 0.000991s | 0.001006s | 0.000984s | byte equality observed |
| mixed_cxxstd_static.test | 10 | 0.000909s | 0.000925s | 0.000889s | byte equality observed |
| mixed_cxxstd_static_0x.test | 10 | 0.000908s | 0.000908s | 0.000901s | byte equality observed |
| mixed_cxxstd_static_14.test | 10 | 0.000918s | 0.000910s | 0.000900s | byte equality observed |
| nothrow_swap.test | 10 | 0.000899s | 0.000906s | 0.000899s | byte equality observed |
| quick.test | 10 | 0.000903s | 0.000889s | 0.000885s | byte equality observed |
| result_arg_n_types_test.test | 10 | 0.000884s | 0.000884s | 0.000916s | byte equality observed |
| result_arg_types_test.test | 10 | 0.000903s | 0.000891s | 0.000887s | byte equality observed |
| return_function_shared.test | 10 | 0.000982s | 0.000978s | 0.000983s | byte equality observed |
| return_function_shared_0x.test | 10 | 0.000979s | 0.000974s | 0.000948s | byte equality observed |
| return_function_shared_14.test | 10 | 0.000980s | 0.000977s | 0.000974s | byte equality observed |
| return_function_static.test | 10 | 0.000913s | 0.000905s | 0.000886s | byte equality observed |
| return_function_static_0x.test | 10 | 0.000919s | 0.000892s | 0.000894s | byte equality observed |
| return_function_static_14.test | 10 | 0.000916s | 0.000899s | 0.000890s | byte equality observed |
| rvalues_test.test | 10 | 0.000897s | 0.000910s | 0.000892s | byte equality observed |
| stateless_test.test | 10 | 0.000906s | 0.000905s | 0.000904s | byte equality observed |
| std_bind_cxx98.test | 10 | 0.000893s | 0.000870s | 0.000864s | byte equality observed |
| std_bind_portable.test | 10 | 0.000877s | 0.000882s | 0.000866s | byte equality observed |
| sum_avg_cxx98.test | 10 | 0.000890s | 0.000888s | 0.000877s | byte equality observed |
| sum_avg_portable.test | 10 | 0.000885s | 0.000892s | 0.000856s | byte equality observed |
| test_bad_function_call_shared.test | 10 | 0.001010s | 0.001012s | 0.000977s | byte equality observed |
| test_bad_function_call_static.test | 10 | 0.000934s | 0.000940s | 0.000878s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43624536445).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
