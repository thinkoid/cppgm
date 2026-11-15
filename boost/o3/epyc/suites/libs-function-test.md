# libs/function/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| function_test.test | RUN | 0.199232 | 1.195581 | 0.994963 | 0.001372 | 0.001690 | 0.001629 |
| function_test_no_rtti.test | RUN | 0.198858 | 1.194541 | 0.992935 | 0.001194 | 0.001775 | 0.001609 |
| function_n_test.test | RUN | 0.186130 | 0.978805 | 0.846712 | 0.001299 | 0.001714 | 0.001512 |
| allocator_test.test | RUN | 0.151089 | 0.562674 | 0.560258 | 0.001592 | 0.001684 | 0.001760 |
| stateless_test.test | RUN | 0.115116 | 0.300992 | 0.373641 | 0.001658 | 0.001560 | 0.001627 |
| lambda_test.test | RUN | 0.256084 | 0.745137 | 0.773964 | 0.001644 | 0.001598 | 0.001615 |
| function_test_fail1.test | COMPILE_FAIL | 0.088431 | 0.203296 | 0.243716 | — | — | — |
| function_test_fail2.test | COMPILE_FAIL | 0.090176 | 0.208921 | 0.251519 | — | — | — |
| function_30.test | COMPILE | 0.092986 | 0.210892 | 0.262010 | — | — | — |
| function_30_repeat.test | COMPILE | 0.091705 | 0.216408 | 0.257472 | — | — | — |
| function_arith_cxx98.test | RUN | 0.125107 | 0.377279 | 0.397295 | 0.001605 | 0.001452 | 0.001764 |
| function_arith_portable.test | RUN | 0.121182 | 0.350555 | 0.366545 | 0.001481 | 0.001547 | 0.001737 |
| sum_avg_cxx98.test | RUN | 0.117867 | 0.317035 | 0.339683 | 0.001237 | 0.001602 | 0.001575 |
| sum_avg_portable.test | RUN | 0.117537 | 0.277467 | 0.336112 | 0.001489 | 0.001744 | 0.001662 |
| mem_fun_cxx98.test | RUN | 0.133474 | 0.440039 | 0.437489 | 0.001600 | 0.001486 | 0.001587 |
| mem_fun_portable.test | RUN | 0.131886 | 0.393141 | 0.400827 | 0.001250 | 0.001780 | 0.001381 |
| std_bind_cxx98.test | RUN | 0.126214 | 0.373458 | 0.405113 | 0.001339 | 0.001401 | 0.001437 |
| std_bind_portable.test | RUN | 0.128918 | 0.339958 | 0.368508 | 0.001574 | 0.001742 | 0.001514 |
| function_ref_cxx98.test | RUN | 0.117217 | 0.307061 | 0.339651 | 0.001557 | 0.001289 | 0.001635 |
| function_ref_portable.test | RUN | 0.113869 | 0.278019 | 0.331397 | 0.001150 | 0.001675 | 0.001660 |
| contains_test.test | RUN | 0.139089 | 0.581473 | 0.533396 | 0.001400 | 0.001620 | 0.001682 |
| contains2_test.test | RUN | 0.134320 | 0.428184 | 0.424190 | 0.001546 | 0.001625 | 0.001595 |
| nothrow_swap.test | RUN | 0.125037 | 0.390774 | 0.405632 | 0.001522 | 0.001582 | 0.001677 |
| rvalues_test.test | RUN | 0.140561 | 0.475707 | 0.466551 | 0.001447 | 0.001604 | 0.001658 |
| function_typeof_test.test | COMPILE | 0.094240 | 0.213461 | 0.257032 | — | — | — |
| result_arg_types_test.test | RUN | 0.132446 | 0.331118 | 0.415913 | 0.001438 | 0.001698 | 0.001636 |
| result_arg_n_types_test.test | RUN | 0.142580 | 0.361155 | 0.481416 | 0.001197 | 0.001481 | 0.001668 |
| test_bad_function_call_shared.test | RUN | 0.116783 | 0.312903 | 0.358733 | 0.001383 | 0.001946 | 0.001794 |
| test_bad_function_call_static.test | RUN | 0.115148 | 0.296623 | 0.328841 | 0.001355 | 0.001846 | 0.001615 |
| mixed_cxxstd_shared.test | RUN | 0.124494 | 0.364053 | 0.403963 | 0.001438 | 0.001664 | 0.001480 |
| mixed_cxxstd_static.test | RUN | 0.122267 | 0.365274 | 0.395378 | 0.001290 | 0.001717 | 0.001347 |
| mixed_cxxstd_shared_0x.test | RUN | 0.121928 | 0.366286 | 0.375422 | 0.001508 | 0.001916 | 0.001818 |
| mixed_cxxstd_static_0x.test | RUN | 0.118979 | 0.363548 | 0.372354 | 0.001524 | 0.001661 | 0.001602 |
| mixed_cxxstd_shared_14.test | RUN | 0.127618 | 0.367600 | 0.398115 | 0.001646 | 0.001712 | 0.001485 |
| mixed_cxxstd_static_14.test | RUN | 0.126230 | 0.358067 | 0.378435 | 0.001317 | 0.001745 | 0.001634 |
| return_function_shared.test | RUN | 0.119224 | 0.361110 | 0.360141 | 0.001504 | 0.001782 | 0.001669 |
| return_function_static.test | RUN | 0.121432 | 0.361838 | 0.368933 | 0.001424 | 0.001748 | 0.001590 |
| return_function_shared_0x.test | RUN | 0.125174 | 0.373678 | 0.387067 | 0.001541 | 0.001936 | 0.001699 |
| return_function_static_0x.test | RUN | 0.116925 | 0.358367 | 0.381598 | 0.001338 | 0.001773 | 0.001662 |
| return_function_shared_14.test | RUN | 0.116772 | 0.356526 | 0.370676 | 0.001483 | 0.001585 | 0.001703 |
| return_function_static_14.test | RUN | 0.125541 | 0.364243 | 0.377846 | 0.001239 | 0.001653 | 0.001337 |
| quick.test | RUN | 0.129340 | 0.375174 | 0.351873 | 0.001496 | 0.001480 | 0.001362 |
| issue_42.test | COMPILE | 0.098248 | 0.237384 | 0.245490 | — | — | — |
| fn_eq_bind_test.test | RUN | 0.160988 | 0.497929 | 0.577954 | 0.001300 | 0.001697 | 0.001221 |
| contains_test_no_rtti.test | RUN | 0.141284 | 0.566435 | 0.554206 | 0.001437 | 0.001663 | 0.001372 |
| contains2_test_no_rtti.test | RUN | 0.133978 | 0.407030 | 0.434306 | 0.001315 | 0.001593 | 0.001404 |
| contains3_test.test | RUN | 0.123764 | 0.318349 | 0.388683 | 0.001392 | 0.001412 | 0.001644 |
| contains3_test_no_rtti.test | RUN | 0.091549 | 0.256177 | 0.251071 | 0.001091 | 0.001209 | 0.001317 |
| issue_53.test | COMPILE | 0.076035 | 0.183898 | 0.200518 | — | — | — |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 1.000× | 1.007×, 0.994× | 1.019× |
| clang | 0.949×† | 0.973×, 0.925× | 1.009× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1363 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43658654032).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| allocator_test.test | 10 | 0.000920s | 0.000915s | 0.000855s | byte equality observed |
| contains2_test.test | 10 | 0.000919s | 0.000910s | 0.000904s | byte equality observed |
| contains2_test_no_rtti.test | 10 | 0.000915s | 0.000943s | 0.000894s | byte equality observed |
| contains3_test.test | 10 | 0.000911s | 0.000906s | 0.000880s | byte equality observed |
| contains3_test_no_rtti.test | 10 | 0.000920s | 0.000911s | 0.000885s | byte equality observed |
| contains_test.test | 10 | 0.000938s | 0.000918s | 0.000885s | byte equality observed |
| contains_test_no_rtti.test | 10 | 0.000940s | 0.000924s | 0.000865s | byte equality observed |
| fn_eq_bind_test.test | 10 | 0.000914s | 0.000896s | 0.000873s | byte equality observed |
| function_arith_cxx98.test | 10 | 0.000959s | 0.000923s | 0.000882s | byte equality observed |
| function_arith_portable.test | 10 | 0.000956s | 0.000925s | 0.000893s | byte equality observed |
| function_n_test.test | 10 | 0.000937s | 0.000903s | 0.000885s | byte equality observed |
| function_ref_cxx98.test | 10 | 0.000887s | 0.000883s | 0.000864s | byte equality observed |
| function_ref_portable.test | 10 | 0.000885s | 0.000859s | 0.000875s | byte equality observed |
| function_test.test | 10 | 0.000977s | 0.000961s | 0.000933s | byte equality observed |
| function_test_no_rtti.test | 10 | 0.000971s | 0.000919s | 0.000923s | byte equality observed |
| lambda_test.test | 10 | 0.000931s | 0.000904s | 0.000873s | byte equality observed |
| mem_fun_cxx98.test | 10 | 0.000905s | 0.000885s | 0.000878s | byte equality observed |
| mem_fun_portable.test | 10 | 0.000903s | 0.000898s | 0.000870s | byte equality observed |
| mixed_cxxstd_shared.test | 10 | 0.000984s | 0.000973s | 0.000975s | byte equality observed |
| mixed_cxxstd_shared_0x.test | 10 | 0.000996s | 0.000979s | 0.000960s | byte equality observed |
| mixed_cxxstd_shared_14.test | 10 | 0.000994s | 0.000988s | 0.000965s | byte equality observed |
| mixed_cxxstd_static.test | 10 | 0.000913s | 0.000901s | 0.000897s | byte equality observed |
| mixed_cxxstd_static_0x.test | 10 | 0.000912s | 0.000891s | 0.000875s | byte equality observed |
| mixed_cxxstd_static_14.test | 10 | 0.000904s | 0.000890s | 0.000887s | byte equality observed |
| nothrow_swap.test | 10 | 0.000939s | 0.000889s | 0.000902s | byte equality observed |
| quick.test | 10 | 0.000920s | 0.000877s | 0.000882s | byte equality observed |
| result_arg_n_types_test.test | 10 | 0.000902s | 0.000888s | 0.000884s | byte equality observed |
| result_arg_types_test.test | 10 | 0.000924s | 0.000882s | 0.000897s | byte equality observed |
| return_function_shared.test | 10 | 0.000985s | 0.000979s | 0.000953s | byte equality observed |
| return_function_shared_0x.test | 10 | 0.000984s | 0.000955s | 0.000955s | byte equality observed |
| return_function_shared_14.test | 10 | 0.000983s | 0.000955s | 0.000924s | byte equality observed |
| return_function_static.test | 10 | 0.000915s | 0.000914s | 0.000858s | byte equality observed |
| return_function_static_0x.test | 10 | 0.000921s | 0.000886s | 0.000848s | byte equality observed |
| return_function_static_14.test | 10 | 0.000906s | 0.000904s | 0.000900s | byte equality observed |
| rvalues_test.test | 10 | 0.000921s | 0.000875s | 0.000863s | byte equality observed |
| stateless_test.test | 10 | 0.000921s | 0.000866s | 0.000877s | byte equality observed |
| std_bind_cxx98.test | 10 | 0.000887s | 0.000868s | 0.000870s | byte equality observed |
| std_bind_portable.test | 10 | 0.000882s | 0.000867s | 0.000852s | byte equality observed |
| sum_avg_cxx98.test | 10 | 0.000878s | 0.000867s | 0.000845s | byte equality observed |
| sum_avg_portable.test | 10 | 0.000888s | 0.000862s | 0.000849s | byte equality observed |
| test_bad_function_call_shared.test | 10 | 0.001014s | 0.001008s | 0.001000s | byte equality observed |
| test_bad_function_call_static.test | 10 | 0.000953s | 0.000907s | 0.000903s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43658654032).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
