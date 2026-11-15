# libs/function/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| function_test.test | RUN | 0.323549 | 1.737274 | 1.446408 | 0.001436 | 0.001451 | 0.001416 |
| function_test_no_rtti.test | RUN | 0.315808 | 1.710715 | 1.459545 | 0.001476 | 0.001478 | 0.001245 |
| function_n_test.test | RUN | 0.286708 | 1.416267 | 1.220313 | 0.001429 | 0.001504 | 0.001335 |
| allocator_test.test | RUN | 0.232976 | 0.799300 | 0.797493 | 0.001531 | 0.001523 | 0.001366 |
| stateless_test.test | RUN | 0.170621 | 0.415826 | 0.528987 | 0.001375 | 0.001497 | 0.001245 |
| lambda_test.test | RUN | 0.362052 | 1.044137 | 1.088300 | 0.001427 | 0.001412 | 0.001372 |
| function_test_fail1.test | COMPILE_FAIL | 0.128957 | 0.282263 | 0.331179 | — | — | — |
| function_test_fail2.test | COMPILE_FAIL | 0.131126 | 0.287524 | 0.338139 | — | — | — |
| function_30.test | COMPILE | 0.132299 | 0.296995 | 0.346250 | — | — | — |
| function_30_repeat.test | COMPILE | 0.129082 | 0.305154 | 0.348111 | — | — | — |
| function_arith_cxx98.test | RUN | 0.177846 | 0.520527 | 0.538378 | 0.001373 | 0.001477 | 0.001364 |
| function_arith_portable.test | RUN | 0.182506 | 0.492992 | 0.510471 | 0.001359 | 0.001432 | 0.001267 |
| sum_avg_cxx98.test | RUN | 0.170687 | 0.415445 | 0.480211 | 0.001289 | 0.001314 | 0.001293 |
| sum_avg_portable.test | RUN | 0.167387 | 0.383475 | 0.466953 | 0.001279 | 0.001422 | 0.001305 |
| mem_fun_cxx98.test | RUN | 0.198496 | 0.605869 | 0.598115 | 0.001421 | 0.001444 | 0.001286 |
| mem_fun_portable.test | RUN | 0.190663 | 0.547861 | 0.570584 | 0.001295 | 0.001362 | 0.001299 |
| std_bind_cxx98.test | RUN | 0.181447 | 0.501657 | 0.524505 | 0.001333 | 0.001502 | 0.001273 |
| std_bind_portable.test | RUN | 0.182171 | 0.466604 | 0.478414 | 0.001342 | 0.001449 | 0.001304 |
| function_ref_cxx98.test | RUN | 0.172557 | 0.424322 | 0.468061 | 0.001438 | 0.001314 | 0.001274 |
| function_ref_portable.test | RUN | 0.169019 | 0.381200 | 0.451598 | 0.001412 | 0.001333 | 0.001250 |
| contains_test.test | RUN | 0.214270 | 0.810015 | 0.744323 | 0.001412 | 0.001550 | 0.001261 |
| contains2_test.test | RUN | 0.193783 | 0.589415 | 0.573637 | 0.001405 | 0.001366 | 0.001207 |
| nothrow_swap.test | RUN | 0.174002 | 0.547635 | 0.551902 | 0.001433 | 0.001436 | 0.001288 |
| rvalues_test.test | RUN | 0.209832 | 0.671169 | 0.639815 | 0.001361 | 0.001504 | 0.001273 |
| function_typeof_test.test | COMPILE | 0.136437 | 0.295087 | 0.329418 | — | — | — |
| result_arg_types_test.test | RUN | 0.190022 | 0.475651 | 0.571633 | 0.001332 | 0.001442 | 0.001252 |
| result_arg_n_types_test.test | RUN | 0.210459 | 0.502892 | 0.670625 | 0.001297 | 0.001549 | 0.001262 |
| test_bad_function_call_shared.test | RUN | 0.162137 | 0.433862 | 0.490484 | 0.001432 | 0.001579 | 0.001422 |
| test_bad_function_call_static.test | RUN | 0.170078 | 0.416804 | 0.472707 | 0.001292 | 0.001374 | 0.001183 |
| mixed_cxxstd_shared.test | RUN | 0.180464 | 0.495373 | 0.537110 | 0.001563 | 0.001484 | 0.001480 |
| mixed_cxxstd_static.test | RUN | 0.177388 | 0.509398 | 0.536678 | 0.001442 | 0.001559 | 0.001071 |
| mixed_cxxstd_shared_0x.test | RUN | 0.176846 | 0.512889 | 0.548581 | 0.001718 | 0.001580 | 0.001596 |
| mixed_cxxstd_static_0x.test | RUN | 0.184555 | 0.506115 | 0.545778 | 0.001473 | 0.001528 | 0.001292 |
| mixed_cxxstd_shared_14.test | RUN | 0.179330 | 0.506479 | 0.531873 | 0.001418 | 0.001485 | 0.001451 |
| mixed_cxxstd_static_14.test | RUN | 0.174082 | 0.518691 | 0.530523 | 0.001368 | 0.001528 | 0.001311 |
| return_function_shared.test | RUN | 0.173785 | 0.516031 | 0.527465 | 0.001690 | 0.001195 | 0.001382 |
| return_function_static.test | RUN | 0.173133 | 0.515672 | 0.524611 | 0.001390 | 0.001492 | 0.001229 |
| return_function_shared_0x.test | RUN | 0.176333 | 0.513194 | 0.529025 | 0.001420 | 0.001578 | 0.001554 |
| return_function_static_0x.test | RUN | 0.175393 | 0.515817 | 0.538292 | 0.001344 | 0.001381 | 0.001283 |
| return_function_shared_14.test | RUN | 0.167878 | 0.519733 | 0.535671 | 0.001423 | 0.001585 | 0.001221 |
| return_function_static_14.test | RUN | 0.174973 | 0.514183 | 0.523247 | 0.001261 | 0.001406 | 0.001289 |
| quick.test | RUN | 0.174766 | 0.510885 | 0.516348 | 0.001362 | 0.001425 | 0.001214 |
| issue_42.test | COMPILE | 0.135797 | 0.328377 | 0.361518 | — | — | — |
| fn_eq_bind_test.test | RUN | 0.233423 | 0.694857 | 0.784942 | 0.001298 | 0.001470 | 0.001414 |
| contains_test_no_rtti.test | RUN | 0.209475 | 0.789377 | 0.756362 | 0.001437 | 0.001018 | 0.001213 |
| contains2_test_no_rtti.test | RUN | 0.187583 | 0.582289 | 0.584991 | 0.001321 | 0.001376 | 0.001233 |
| contains3_test.test | RUN | 0.172651 | 0.455830 | 0.521514 | 0.001283 | 0.001356 | 0.001245 |
| contains3_test_no_rtti.test | RUN | 0.112863 | 0.368250 | 0.362809 | 0.001052 | 0.000957 | 0.000963 |
| issue_53.test | COMPILE | 0.099389 | 0.262622 | 0.240764 | — | — | — |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.999× | 1.003×, 0.995× | 1.020× |
| clang | 0.997× | 0.989×, 1.005× | 1.003× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1360 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43654890423).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| allocator_test.test | 10 | 0.000929s | 0.000958s | 0.000922s | byte equality observed |
| contains2_test.test | 10 | 0.000941s | 0.000978s | 0.000908s | byte equality observed |
| contains2_test_no_rtti.test | 10 | 0.000954s | 0.000986s | 0.000908s | byte equality observed |
| contains3_test.test | 10 | 0.000974s | 0.000983s | 0.000907s | byte equality observed |
| contains3_test_no_rtti.test | 10 | 0.000963s | 0.000984s | 0.000912s | byte equality observed |
| contains_test.test | 10 | 0.000973s | 0.000980s | 0.000948s | byte equality observed |
| contains_test_no_rtti.test | 10 | 0.000989s | 0.000963s | 0.000979s | byte equality observed |
| fn_eq_bind_test.test | 10 | 0.000980s | 0.000971s | 0.000958s | byte equality observed |
| function_arith_cxx98.test | 10 | 0.000998s | 0.001011s | 0.001007s | byte equality observed |
| function_arith_portable.test | 10 | 0.001010s | 0.001007s | 0.001001s | byte equality observed |
| function_n_test.test | 10 | 0.001024s | 0.000985s | 0.000991s | byte equality observed |
| function_ref_cxx98.test | 10 | 0.000960s | 0.000972s | 0.000989s | byte equality observed |
| function_ref_portable.test | 10 | 0.001004s | 0.000930s | 0.000992s | byte equality observed |
| function_test.test | 10 | 0.001053s | 0.001078s | 0.001032s | byte equality observed |
| function_test_no_rtti.test | 10 | 0.001048s | 0.001022s | 0.001038s | byte equality observed |
| lambda_test.test | 10 | 0.000999s | 0.001003s | 0.000993s | byte equality observed |
| mem_fun_cxx98.test | 10 | 0.001025s | 0.001024s | 0.001031s | byte equality observed |
| mem_fun_portable.test | 10 | 0.001018s | 0.000968s | 0.000969s | byte equality observed |
| mixed_cxxstd_shared.test | 10 | 0.001037s | 0.001060s | 0.001094s | byte equality observed |
| mixed_cxxstd_shared_0x.test | 10 | 0.001054s | 0.001082s | 0.001054s | byte equality observed |
| mixed_cxxstd_shared_14.test | 10 | 0.001045s | 0.001071s | 0.001067s | byte equality observed |
| mixed_cxxstd_static.test | 8 | 0.000968s | 0.001020s | 0.000994s | byte equality observed |
| mixed_cxxstd_static_0x.test | 10 | 0.000974s | 0.000985s | 0.001012s | byte equality observed |
| mixed_cxxstd_static_14.test | 10 | 0.000969s | 0.000981s | 0.000977s | byte equality observed |
| nothrow_swap.test | 10 | 0.000977s | 0.001022s | 0.000984s | byte equality observed |
| quick.test | 10 | 0.001003s | 0.000969s | 0.000990s | byte equality observed |
| result_arg_n_types_test.test | 10 | 0.001006s | 0.000968s | 0.001032s | byte equality observed |
| result_arg_types_test.test | 10 | 0.001009s | 0.000985s | 0.001014s | byte equality observed |
| return_function_shared.test | 10 | 0.001072s | 0.001048s | 0.001037s | byte equality observed |
| return_function_shared_0x.test | 10 | 0.001092s | 0.001032s | 0.001090s | byte equality observed |
| return_function_shared_14.test | 9 | 0.001057s | 0.001022s | 0.001043s | byte equality observed |
| return_function_static.test | 9 | 0.000995s | 0.001002s | 0.001018s | byte equality observed |
| return_function_static_0x.test | 10 | 0.000985s | 0.001006s | 0.000956s | byte equality observed |
| return_function_static_14.test | 10 | 0.001001s | 0.000987s | 0.000947s | byte equality observed |
| rvalues_test.test | 10 | 0.001012s | 0.000988s | 0.000990s | byte equality observed |
| stateless_test.test | 10 | 0.000998s | 0.000995s | 0.000964s | byte equality observed |
| std_bind_cxx98.test | 10 | 0.000982s | 0.000977s | 0.000991s | byte equality observed |
| std_bind_portable.test | 10 | 0.000973s | 0.000976s | 0.000997s | byte equality observed |
| sum_avg_cxx98.test | 10 | 0.000960s | 0.000966s | 0.000951s | byte equality observed |
| sum_avg_portable.test | 10 | 0.000966s | 0.000983s | 0.000940s | byte equality observed |
| test_bad_function_call_shared.test | 10 | 0.001072s | 0.001097s | 0.001091s | byte equality observed |
| test_bad_function_call_static.test | 10 | 0.001005s | 0.001067s | 0.000994s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43654890423).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
