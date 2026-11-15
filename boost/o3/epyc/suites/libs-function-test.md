# libs/function/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| function_test.test | RUN | 0.273637 | 1.522544 | 1.338754 | 0.001403 | 0.001883 | 0.001694 |
| function_test_no_rtti.test | RUN | 0.268971 | 1.512946 | 1.361167 | 0.001740 | 0.001664 | 0.001608 |
| function_n_test.test | RUN | 0.252904 | 1.230061 | 1.156649 | 0.001655 | 0.001652 | 0.001828 |
| allocator_test.test | RUN | 0.208634 | 0.703248 | 0.797561 | 0.001872 | 0.001912 | 0.001879 |
| stateless_test.test | RUN | 0.158861 | 0.356052 | 0.496870 | 0.001807 | 0.001896 | 0.001729 |
| lambda_test.test | RUN | 0.351004 | 0.946896 | 1.075030 | 0.001690 | 0.001964 | 0.001717 |
| function_test_fail1.test | COMPILE_FAIL | 0.120892 | 0.278295 | 0.325743 | — | — | — |
| function_test_fail2.test | COMPILE_FAIL | 0.121686 | 0.258724 | 0.367393 | — | — | — |
| function_30.test | COMPILE | 0.126136 | 0.264259 | 0.355688 | — | — | — |
| function_30_repeat.test | COMPILE | 0.127294 | 0.288078 | 0.379465 | — | — | — |
| function_arith_cxx98.test | RUN | 0.163444 | 0.453184 | 0.554137 | 0.001799 | 0.001563 | 0.001601 |
| function_arith_portable.test | RUN | 0.163233 | 0.427126 | 0.521847 | 0.001469 | 0.002062 | 0.001888 |
| sum_avg_cxx98.test | RUN | 0.157201 | 0.382444 | 0.480226 | 0.001850 | 0.001926 | 0.001698 |
| sum_avg_portable.test | RUN | 0.159382 | 0.347539 | 0.465579 | 0.001696 | 0.001833 | 0.001804 |
| mem_fun_cxx98.test | RUN | 0.176683 | 0.547545 | 0.623729 | 0.001867 | 0.001540 | 0.001550 |
| mem_fun_portable.test | RUN | 0.177054 | 0.500144 | 0.593909 | 0.001781 | 0.001762 | 0.001515 |
| std_bind_cxx98.test | RUN | 0.166173 | 0.448223 | 0.517229 | 0.001342 | 0.001901 | 0.001784 |
| std_bind_portable.test | RUN | 0.169660 | 0.422416 | 0.528976 | 0.001598 | 0.001910 | 0.001772 |
| function_ref_cxx98.test | RUN | 0.159488 | 0.386959 | 0.479178 | 0.001660 | 0.001839 | 0.001577 |
| function_ref_portable.test | RUN | 0.154649 | 0.358179 | 0.483013 | 0.001634 | 0.001704 | 0.001630 |
| contains_test.test | RUN | 0.191721 | 0.665076 | 0.742676 | 0.001621 | 0.001698 | 0.001673 |
| contains2_test.test | RUN | 0.176836 | 0.494646 | 0.574681 | 0.001659 | 0.001875 | 0.001573 |
| nothrow_swap.test | RUN | 0.171035 | 0.462230 | 0.578909 | 0.001610 | 0.001895 | 0.001795 |
| rvalues_test.test | RUN | 0.192508 | 0.587963 | 0.639120 | 0.001788 | 0.001820 | 0.001676 |
| function_typeof_test.test | COMPILE | 0.131888 | 0.280258 | 0.351232 | — | — | — |
| result_arg_types_test.test | RUN | 0.176228 | 0.371753 | 0.585043 | 0.001732 | 0.001928 | 0.001460 |
| result_arg_n_types_test.test | RUN | 0.195389 | 0.419795 | 0.706458 | 0.001610 | 0.001886 | 0.001622 |
| test_bad_function_call_shared.test | RUN | 0.158922 | 0.398644 | 0.536417 | 0.001829 | 0.002064 | 0.001848 |
| test_bad_function_call_static.test | RUN | 0.157040 | 0.388983 | 0.533485 | 0.001522 | 0.001824 | 0.001683 |
| mixed_cxxstd_shared.test | RUN | 0.167432 | 0.462389 | 0.536746 | 0.001873 | 0.001752 | 0.002034 |
| mixed_cxxstd_static.test | RUN | 0.169170 | 0.472278 | 0.581712 | 0.001710 | 0.001812 | 0.001595 |
| mixed_cxxstd_shared_0x.test | RUN | 0.168899 | 0.443852 | 0.579914 | 0.001904 | 0.001930 | 0.002052 |
| mixed_cxxstd_static_0x.test | RUN | 0.172294 | 0.461351 | 0.561422 | 0.001827 | 0.001807 | 0.001791 |
| mixed_cxxstd_shared_14.test | RUN | 0.173589 | 0.462401 | 0.586279 | 0.001488 | 0.001823 | 0.001933 |
| mixed_cxxstd_static_14.test | RUN | 0.169401 | 0.467044 | 0.534796 | 0.001762 | 0.001947 | 0.001928 |
| return_function_shared.test | RUN | 0.169738 | 0.454064 | 0.570578 | 0.001533 | 0.002006 | 0.002164 |
| return_function_static.test | RUN | 0.170931 | 0.452256 | 0.567798 | 0.001615 | 0.001753 | 0.001713 |
| return_function_shared_0x.test | RUN | 0.164252 | 0.458908 | 0.518001 | 0.001959 | 0.002044 | 0.001968 |
| return_function_static_0x.test | RUN | 0.167520 | 0.453447 | 0.554909 | 0.001685 | 0.001843 | 0.001871 |
| return_function_shared_14.test | RUN | 0.165347 | 0.441985 | 0.542194 | 0.001701 | 0.001860 | 0.002070 |
| return_function_static_14.test | RUN | 0.164915 | 0.459967 | 0.533883 | 0.001686 | 0.001650 | 0.001664 |
| quick.test | RUN | 0.171000 | 0.464481 | 0.497269 | 0.001728 | 0.001860 | 0.001313 |
| issue_42.test | COMPILE | 0.132135 | 0.292675 | 0.347718 | — | — | — |
| fn_eq_bind_test.test | RUN | 0.220201 | 0.631581 | 0.772329 | 0.001427 | 0.001664 | 0.001718 |
| contains_test_no_rtti.test | RUN | 0.203191 | 0.693873 | 0.741104 | 0.001762 | 0.001507 | 0.001268 |
| contains2_test_no_rtti.test | RUN | 0.177157 | 0.517210 | 0.608062 | 0.001572 | 0.001573 | 0.001583 |
| contains3_test.test | RUN | 0.173711 | 0.413793 | 0.544300 | 0.001460 | 0.001788 | 0.001762 |
| contains3_test_no_rtti.test | RUN | 0.133918 | 0.323750 | 0.377847 | 0.001402 | 0.001393 | 0.001220 |
| issue_53.test | COMPILE | 0.123212 | 0.236919 | 0.280799 | — | — | — |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.997× | 0.990×, 1.004× | 1.003× |
| clang | 0.998× | 0.989×, 1.006× | 0.990× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1363 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43648658351).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| allocator_test.test | 10 | 0.000975s | 0.000993s | 0.000991s | byte equality observed |
| contains2_test.test | 10 | 0.000988s | 0.000978s | 0.000988s | byte equality observed |
| contains2_test_no_rtti.test | 10 | 0.000986s | 0.000973s | 0.000987s | byte equality observed |
| contains3_test.test | 10 | 0.000998s | 0.000999s | 0.001017s | byte equality observed |
| contains3_test_no_rtti.test | 10 | 0.001020s | 0.001022s | 0.000999s | byte equality observed |
| contains_test.test | 10 | 0.001040s | 0.001022s | 0.000997s | byte equality observed |
| contains_test_no_rtti.test | 10 | 0.001019s | 0.000997s | 0.001004s | byte equality observed |
| fn_eq_bind_test.test | 10 | 0.001010s | 0.000982s | 0.000991s | byte equality observed |
| function_arith_cxx98.test | 10 | 0.001025s | 0.000998s | 0.001013s | byte equality observed |
| function_arith_portable.test | 10 | 0.001028s | 0.000997s | 0.001031s | byte equality observed |
| function_n_test.test | 10 | 0.001024s | 0.001014s | 0.001007s | byte equality observed |
| function_ref_cxx98.test | 10 | 0.001001s | 0.000983s | 0.001004s | byte equality observed |
| function_ref_portable.test | 10 | 0.000993s | 0.001008s | 0.000986s | byte equality observed |
| function_test.test | 10 | 0.001067s | 0.001061s | 0.001054s | byte equality observed |
| function_test_no_rtti.test | 10 | 0.001068s | 0.001054s | 0.001061s | byte equality observed |
| lambda_test.test | 10 | 0.001024s | 0.001009s | 0.001016s | byte equality observed |
| mem_fun_cxx98.test | 10 | 0.001042s | 0.001039s | 0.000996s | byte equality observed |
| mem_fun_portable.test | 10 | 0.001022s | 0.001007s | 0.001004s | byte equality observed |
| mixed_cxxstd_shared.test | 10 | 0.001075s | 0.001102s | 0.001096s | byte equality observed |
| mixed_cxxstd_shared_0x.test | 10 | 0.001107s | 0.001079s | 0.001144s | byte equality observed |
| mixed_cxxstd_shared_14.test | 10 | 0.001109s | 0.001087s | 0.001108s | byte equality observed |
| mixed_cxxstd_static.test | 10 | 0.000996s | 0.001030s | 0.001003s | byte equality observed |
| mixed_cxxstd_static_0x.test | 10 | 0.001011s | 0.001036s | 0.001025s | byte equality observed |
| mixed_cxxstd_static_14.test | 10 | 0.001017s | 0.001020s | 0.000989s | byte equality observed |
| nothrow_swap.test | 10 | 0.001005s | 0.001040s | 0.000991s | byte equality observed |
| quick.test | 10 | 0.001012s | 0.001037s | 0.000998s | byte equality observed |
| result_arg_n_types_test.test | 10 | 0.001001s | 0.001032s | 0.000988s | byte equality observed |
| result_arg_types_test.test | 10 | 0.001004s | 0.000998s | 0.001000s | byte equality observed |
| return_function_shared.test | 10 | 0.001068s | 0.001078s | 0.001082s | byte equality observed |
| return_function_shared_0x.test | 10 | 0.001074s | 0.001098s | 0.001107s | byte equality observed |
| return_function_shared_14.test | 10 | 0.001063s | 0.001086s | 0.001091s | byte equality observed |
| return_function_static.test | 10 | 0.001020s | 0.000978s | 0.001021s | byte equality observed |
| return_function_static_0x.test | 10 | 0.001019s | 0.001017s | 0.001028s | byte equality observed |
| return_function_static_14.test | 10 | 0.001010s | 0.001036s | 0.001043s | byte equality observed |
| rvalues_test.test | 10 | 0.001006s | 0.001040s | 0.001029s | byte equality observed |
| stateless_test.test | 10 | 0.000994s | 0.001018s | 0.001027s | byte equality observed |
| std_bind_cxx98.test | 10 | 0.001001s | 0.000996s | 0.000973s | byte equality observed |
| std_bind_portable.test | 10 | 0.000977s | 0.000968s | 0.000987s | byte equality observed |
| sum_avg_cxx98.test | 10 | 0.000988s | 0.001012s | 0.000989s | byte equality observed |
| sum_avg_portable.test | 10 | 0.000971s | 0.000989s | 0.000988s | byte equality observed |
| test_bad_function_call_shared.test | 10 | 0.001120s | 0.001100s | 0.001151s | byte equality observed |
| test_bad_function_call_static.test | 10 | 0.001031s | 0.001031s | 0.000992s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43648658351).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
