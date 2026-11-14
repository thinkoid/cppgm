# libs/function/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| function_test.test | RUN | 0.276077 | 1.489748 | 1.333171 | 0.001259 | 0.001807 | 0.001636 |
| function_test_no_rtti.test | RUN | 0.271227 | 1.495389 | 1.333431 | 0.001639 | 0.001920 | 0.001384 |
| function_n_test.test | RUN | 0.249976 | 1.223736 | 1.113912 | 0.001650 | 0.001901 | 0.001800 |
| allocator_test.test | RUN | 0.205011 | 0.704555 | 0.772446 | 0.001781 | 0.001839 | 0.001720 |
| stateless_test.test | RUN | 0.157989 | 0.396507 | 0.490068 | 0.001633 | 0.001563 | 0.001789 |
| lambda_test.test | RUN | 0.339352 | 0.925268 | 1.072873 | 0.001782 | 0.001594 | 0.001714 |
| function_test_fail1.test | COMPILE_FAIL | 0.119799 | 0.253686 | 0.363187 | — | — | — |
| function_test_fail2.test | COMPILE_FAIL | 0.123676 | 0.267230 | 0.365579 | — | — | — |
| function_30.test | COMPILE | 0.129133 | 0.273359 | 0.377465 | — | — | — |
| function_30_repeat.test | COMPILE | 0.128165 | 0.278800 | 0.366304 | — | — | — |
| function_arith_cxx98.test | RUN | 0.168748 | 0.463141 | 0.537606 | 0.001596 | 0.001550 | 0.001754 |
| function_arith_portable.test | RUN | 0.161802 | 0.438807 | 0.496190 | 0.001355 | 0.001628 | 0.001726 |
| sum_avg_cxx98.test | RUN | 0.158493 | 0.390917 | 0.450488 | 0.001500 | 0.001655 | 0.001716 |
| sum_avg_portable.test | RUN | 0.157877 | 0.342502 | 0.489747 | 0.001579 | 0.001816 | 0.001693 |
| mem_fun_cxx98.test | RUN | 0.179533 | 0.528813 | 0.615166 | 0.001666 | 0.001762 | 0.001524 |
| mem_fun_portable.test | RUN | 0.171698 | 0.484089 | 0.550173 | 0.001191 | 0.001854 | 0.001730 |
| std_bind_cxx98.test | RUN | 0.166530 | 0.461926 | 0.537692 | 0.001394 | 0.001516 | 0.001729 |
| std_bind_portable.test | RUN | 0.168299 | 0.414146 | 0.488322 | 0.001607 | 0.001885 | 0.001679 |
| function_ref_cxx98.test | RUN | 0.158619 | 0.376602 | 0.491961 | 0.001567 | 0.001690 | 0.001782 |
| function_ref_portable.test | RUN | 0.149815 | 0.349351 | 0.462524 | 0.001679 | 0.001540 | 0.001653 |
| contains_test.test | RUN | 0.193850 | 0.712593 | 0.698020 | 0.001642 | 0.001756 | 0.001588 |
| contains2_test.test | RUN | 0.175640 | 0.525928 | 0.579391 | 0.001710 | 0.001712 | 0.001693 |
| nothrow_swap.test | RUN | 0.167006 | 0.492270 | 0.569012 | 0.001612 | 0.001794 | 0.001654 |
| rvalues_test.test | RUN | 0.189050 | 0.594260 | 0.595274 | 0.001765 | 0.001536 | 0.001437 |
| function_typeof_test.test | COMPILE | 0.123991 | 0.266857 | 0.326350 | — | — | — |
| result_arg_types_test.test | RUN | 0.177743 | 0.412005 | 0.582795 | 0.001731 | 0.001669 | 0.001768 |
| result_arg_n_types_test.test | RUN | 0.181176 | 0.442474 | 0.664409 | 0.001651 | 0.002094 | 0.002009 |
| test_bad_function_call_shared.test | RUN | 0.152970 | 0.376870 | 0.513340 | 0.001863 | 0.001890 | 0.001824 |
| test_bad_function_call_static.test | RUN | 0.153902 | 0.370242 | 0.484175 | 0.001702 | 0.001591 | 0.001806 |
| mixed_cxxstd_shared.test | RUN | 0.169863 | 0.463121 | 0.530446 | 0.001871 | 0.001886 | 0.001870 |
| mixed_cxxstd_static.test | RUN | 0.165103 | 0.447891 | 0.519565 | 0.001550 | 0.001694 | 0.001584 |
| mixed_cxxstd_shared_0x.test | RUN | 0.163722 | 0.458731 | 0.566299 | 0.001757 | 0.002037 | 0.001856 |
| mixed_cxxstd_static_0x.test | RUN | 0.160989 | 0.449810 | 0.514195 | 0.001490 | 0.001797 | 0.001736 |
| mixed_cxxstd_shared_14.test | RUN | 0.168629 | 0.455941 | 0.550185 | 0.001805 | 0.001911 | 0.001907 |
| mixed_cxxstd_static_14.test | RUN | 0.167273 | 0.448635 | 0.562116 | 0.001481 | 0.001751 | 0.001720 |
| return_function_shared.test | RUN | 0.162801 | 0.443313 | 0.534003 | 0.001638 | 0.001916 | 0.001745 |
| return_function_static.test | RUN | 0.159617 | 0.445199 | 0.519448 | 0.001555 | 0.001521 | 0.001724 |
| return_function_shared_0x.test | RUN | 0.162990 | 0.456727 | 0.555032 | 0.001718 | 0.002000 | 0.001912 |
| return_function_static_0x.test | RUN | 0.160452 | 0.439998 | 0.546078 | 0.001697 | 0.001831 | 0.001739 |
| return_function_shared_14.test | RUN | 0.164492 | 0.451255 | 0.527137 | 0.001830 | 0.002083 | 0.001988 |
| return_function_static_14.test | RUN | 0.162125 | 0.457691 | 0.548355 | 0.001633 | 0.001632 | 0.001712 |
| quick.test | RUN | 0.168261 | 0.438379 | 0.491526 | 0.001493 | 0.001774 | 0.001648 |
| issue_42.test | COMPILE | 0.130473 | 0.297966 | 0.346170 | — | — | — |
| fn_eq_bind_test.test | RUN | 0.214563 | 0.637806 | 0.774655 | 0.001620 | 0.001720 | 0.001630 |
| contains_test_no_rtti.test | RUN | 0.188999 | 0.683699 | 0.748659 | 0.001411 | 0.001922 | 0.001316 |
| contains2_test_no_rtti.test | RUN | 0.171128 | 0.512440 | 0.596153 | 0.001524 | 0.001757 | 0.001527 |
| contains3_test.test | RUN | 0.163961 | 0.417204 | 0.544672 | 0.001109 | 0.001682 | 0.001374 |
| contains3_test_no_rtti.test | RUN | 0.121148 | 0.316984 | 0.355242 | 0.001257 | 0.001335 | 0.001217 |
| issue_53.test | COMPILE | 0.106985 | 0.231705 | 0.252065 | — | — | — |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.996× | 0.997×, 0.995× | 1.005× |
| clang | 1.009× | 1.006×, 1.013× | 0.995× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1361 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43632677224).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| allocator_test.test | 10 | 0.000956s | 0.000953s | 0.000976s | byte equality observed |
| contains2_test.test | 10 | 0.000947s | 0.000952s | 0.000961s | byte equality observed |
| contains2_test_no_rtti.test | 10 | 0.000945s | 0.000955s | 0.000968s | byte equality observed |
| contains3_test.test | 10 | 0.000946s | 0.000952s | 0.000992s | byte equality observed |
| contains3_test_no_rtti.test | 10 | 0.000955s | 0.000972s | 0.001038s | byte equality observed |
| contains_test.test | 10 | 0.000962s | 0.001001s | 0.001034s | byte equality observed |
| contains_test_no_rtti.test | 10 | 0.000956s | 0.000991s | 0.001013s | byte equality observed |
| fn_eq_bind_test.test | 10 | 0.000954s | 0.001004s | 0.001010s | byte equality observed |
| function_arith_cxx98.test | 10 | 0.000997s | 0.001016s | 0.001017s | byte equality observed |
| function_arith_portable.test | 10 | 0.001001s | 0.001002s | 0.001015s | byte equality observed |
| function_n_test.test | 10 | 0.001016s | 0.000991s | 0.001009s | byte equality observed |
| function_ref_cxx98.test | 10 | 0.000966s | 0.000974s | 0.000980s | byte equality observed |
| function_ref_portable.test | 10 | 0.000982s | 0.000963s | 0.000964s | byte equality observed |
| function_test.test | 10 | 0.001041s | 0.001038s | 0.001033s | byte equality observed |
| function_test_no_rtti.test | 10 | 0.001105s | 0.001009s | 0.001042s | byte equality observed |
| lambda_test.test | 10 | 0.001025s | 0.000992s | 0.000995s | byte equality observed |
| mem_fun_cxx98.test | 10 | 0.000997s | 0.000993s | 0.000992s | byte equality observed |
| mem_fun_portable.test | 10 | 0.001067s | 0.001024s | 0.000992s | byte equality observed |
| mixed_cxxstd_shared.test | 10 | 0.001078s | 0.001080s | 0.001084s | byte equality observed |
| mixed_cxxstd_shared_0x.test | 10 | 0.001115s | 0.001074s | 0.001089s | byte equality observed |
| mixed_cxxstd_shared_14.test | 10 | 0.001067s | 0.001084s | 0.001078s | byte equality observed |
| mixed_cxxstd_static.test | 10 | 0.001015s | 0.001029s | 0.001020s | byte equality observed |
| mixed_cxxstd_static_0x.test | 10 | 0.000975s | 0.000999s | 0.000978s | byte equality observed |
| mixed_cxxstd_static_14.test | 10 | 0.000993s | 0.001000s | 0.001011s | byte equality observed |
| nothrow_swap.test | 10 | 0.000978s | 0.001044s | 0.000995s | byte equality observed |
| quick.test | 10 | 0.000997s | 0.001027s | 0.001008s | byte equality observed |
| result_arg_n_types_test.test | 10 | 0.000997s | 0.000990s | 0.000992s | byte equality observed |
| result_arg_types_test.test | 10 | 0.001006s | 0.000993s | 0.001019s | byte equality observed |
| return_function_shared.test | 10 | 0.001068s | 0.001087s | 0.001075s | byte equality observed |
| return_function_shared_0x.test | 10 | 0.001086s | 0.001061s | 0.001138s | byte equality observed |
| return_function_shared_14.test | 10 | 0.001108s | 0.001055s | 0.001076s | byte equality observed |
| return_function_static.test | 10 | 0.000989s | 0.000995s | 0.001013s | byte equality observed |
| return_function_static_0x.test | 10 | 0.000993s | 0.000998s | 0.001009s | byte equality observed |
| return_function_static_14.test | 10 | 0.000998s | 0.001007s | 0.001050s | byte equality observed |
| rvalues_test.test | 10 | 0.001020s | 0.000996s | 0.001010s | byte equality observed |
| stateless_test.test | 10 | 0.000996s | 0.001008s | 0.000983s | byte equality observed |
| std_bind_cxx98.test | 10 | 0.001000s | 0.000970s | 0.000986s | byte equality observed |
| std_bind_portable.test | 10 | 0.000995s | 0.000974s | 0.000974s | byte equality observed |
| sum_avg_cxx98.test | 10 | 0.000982s | 0.000975s | 0.000982s | byte equality observed |
| sum_avg_portable.test | 10 | 0.000975s | 0.000987s | 0.000963s | byte equality observed |
| test_bad_function_call_shared.test | 10 | 0.001106s | 0.001103s | 0.001111s | byte equality observed |
| test_bad_function_call_static.test | 10 | 0.001034s | 0.000995s | 0.001021s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43632677224).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
