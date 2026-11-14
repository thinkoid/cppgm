# libs/xpressive/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| regress.test | RUN | 2.247360 | 14.920542 | 10.982720 | 0.008907 | 0.010790 | 0.007847 |
| regress_u.test | RUN | 2.471972 | 15.553792 | 11.310759 | 0.008475 | 0.011266 | 0.008069 |
| c_traits.test | RUN | 2.291301 | 14.618829 | 10.669264 | 0.007203 | 0.009471 | 0.007045 |
| c_traits_u.test | RUN | 2.475223 | 15.263530 | 11.091244 | 0.007917 | 0.010201 | 0.007248 |
| test1.test | RUN | 0.899666 | 3.740081 | 3.237731 | 0.002364 | 0.002947 | 0.002712 |
| test2.test | RUN | 1.142127 | 5.296679 | 4.679685 | 0.002982 | 0.003000 | 0.002924 |
| test3.test | RUN | 1.172443 | 5.358218 | 4.838355 | 0.002740 | 0.002756 | 0.002916 |
| test4.test | RUN | 0.997907 | 4.476781 | 3.936237 | 0.002713 | 0.002861 | 0.002900 |
| test5.test | RUN | 1.079351 | 4.768869 | 4.311002 | 0.002855 | 0.002865 | 0.002958 |
| test6.test | RUN | 0.965658 | 4.058880 | 3.574200 | 0.002693 | 0.002964 | 0.003006 |
| test7.test | RUN | 0.937019 | 4.117609 | 3.626270 | 0.002689 | 0.003080 | 0.002801 |
| test8.test | RUN | 0.931409 | 4.039083 | 3.396359 | 0.002575 | 0.003064 | 0.002479 |
| test9.test | RUN | 1.005188 | 4.336781 | 3.920964 | 0.002843 | 0.002900 | 0.002888 |
| test10.test | RUN | 0.963734 | 4.140266 | 3.610406 | 0.002530 | 0.002864 | 0.002281 |
| test11.test | RUN | 0.923613 | 3.849383 | 3.540069 | 0.002581 | 0.002947 | 0.002804 |
| test1u.test | RUN | 0.862065 | 3.686809 | 3.083945 | 0.002603 | 0.003068 | 0.003007 |
| test2u.test | RUN | 1.147371 | 5.257526 | 4.857206 | 0.002957 | 0.002884 | 0.002879 |
| test3u.test | RUN | 1.154366 | 5.457396 | 4.989384 | 0.002661 | 0.002995 | 0.002946 |
| test4u.test | RUN | 0.969942 | 4.310576 | 3.861026 | 0.002869 | 0.002998 | 0.003116 |
| test5u.test | RUN | 1.052328 | 4.780051 | 4.341819 | 0.002893 | 0.003035 | 0.002838 |
| test6u.test | RUN | 0.958302 | 3.978929 | 3.558636 | 0.002905 | 0.003026 | 0.002958 |
| test7u.test | RUN | 0.943567 | 4.142473 | 3.697686 | 0.002783 | 0.002963 | 0.003018 |
| test8u.test | RUN | 0.896150 | 3.905796 | 3.497334 | 0.002576 | 0.002997 | 0.002956 |
| test9u.test | RUN | 0.987642 | 4.182503 | 4.009268 | 0.002799 | 0.002889 | 0.002986 |
| test10u.test | RUN | 0.973981 | 3.970425 | 3.572233 | 0.002819 | 0.002787 | 0.002852 |
| test11u.test | RUN | 0.952772 | 3.943614 | 3.718129 | 0.002937 | 0.002978 | 0.002784 |
| misc1.test | RUN | 1.720789 | 10.157719 | 8.292646 | 0.003674 | 0.003679 | 0.003635 |
| misc2.test | RUN | 1.706293 | 9.531806 | 8.106284 | 0.003387 | 0.003253 | 0.003286 |
| test_format.test | RUN | 1.812778 | 11.835813 | 9.222978 | 0.002914 | 0.003120 | 0.003036 |
| test_cycles.test | RUN | 0.807421 | 3.558951 | 2.915917 | 0.002669 | 0.002813 | 0.002977 |
| test_non_char.test | RUN | 1.500466 | 8.353496 | 7.039607 | 0.003019 | 0.003039 | 0.003027 |
| test_static.test | RUN | 0.760473 | 3.269494 | 2.581681 | 0.002835 | 0.002861 | 0.002899 |
| test_actions.test | RUN | 1.881775 | 10.035040 | 8.379646 | 0.003597 | 0.003873 | 0.003775 |
| test_assert.test | RUN | 1.045516 | 4.211393 | 3.757008 | 0.003042 | 0.003211 | 0.003159 |
| test_assert_with_placeholder.test | RUN | 0.999715 | 3.930326 | 3.459906 | 0.002600 | 0.002890 | 0.002948 |
| test_symbols.test | RUN | 1.915052 | 9.732357 | 9.316430 | 0.003731 | 0.003869 | 0.003772 |
| test_dynamic.test | RUN | 1.198552 | 6.601030 | 5.484651 | 0.002807 | 0.002796 | 0.002790 |
| test_dynamic_grammar.test | RUN | 1.241346 | 6.889077 | 5.596351 | 0.003175 | 0.003138 | 0.003115 |
| test_skip.test | RUN | 1.481902 | 7.166253 | 6.494190 | 0.002789 | 0.003045 | 0.002822 |
| multiple_defs.test | LINK | 2.343168 | 13.172166 | 10.817056 | — | — | — |
| test_basic_regex.test | COMPILE | 0.530058 | 1.004849 | 1.316189 | — | — | — |
| test_match_results.test | COMPILE | 0.349796 | 0.730656 | 0.910440 | — | — | — |
| test_regex_algorithms.test | COMPILE | 0.350863 | 0.713767 | 0.896487 | — | — | — |
| test_regex_compiler.test | COMPILE | 0.523712 | 1.178859 | 1.354137 | — | — | — |
| test_regex_constants.test | COMPILE | 0.030134 | 0.051316 | 0.054673 | — | — | — |
| test_regex_error.test | COMPILE | 0.185327 | 0.388029 | 0.490644 | — | — | — |
| test_regex_iterator.test | COMPILE | 0.349510 | 0.720861 | 0.842838 | — | — | — |
| test_regex_primitives.test | COMPILE | 0.513349 | 1.179021 | 1.272825 | — | — | — |
| test_regex_token_iterator.test | COMPILE | 0.340809 | 0.726484 | 0.818001 | — | — | — |
| test_regex_traits.test | COMPILE | 0.205671 | 0.382669 | 0.462481 | — | — | — |
| test_sub_match.test | COMPILE | 0.164003 | 0.312070 | 0.267453 | — | — | — |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 1.038× | 1.057×, 1.020× | 0.991× |
| clang | 0.925× | 0.918×, 0.932× | 0.995× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1364 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43639138948).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| c_traits.test | 3 | 0.005799s | 0.007490s | 0.005738s | byte equality observed |
| c_traits_u.test | 3 | 0.006509s | 0.007991s | 0.006011s | byte equality observed |
| misc1.test | 9 | 0.002260s | 0.002189s | 0.002181s | byte equality observed |
| misc2.test | 10 | 0.002032s | 0.001871s | 0.001955s | byte equality observed |
| regress.test | 3 | 0.007068s | 0.008887s | 0.006668s | byte equality observed |
| regress_u.test | 3 | 0.007466s | 0.008979s | 0.006755s | byte equality observed |
| test1.test | 10 | 0.001816s | 0.001696s | 0.001760s | byte equality observed |
| test10.test | 8 | 0.001778s | 0.001666s | 0.001733s | byte equality observed |
| test10u.test | 10 | 0.001785s | 0.001713s | 0.001706s | byte equality observed |
| test11.test | 10 | 0.001790s | 0.001635s | 0.001732s | byte equality observed |
| test11u.test | 10 | 0.001786s | 0.001659s | 0.001738s | byte equality observed |
| test1u.test | 10 | 0.001798s | 0.001728s | 0.001777s | byte equality observed |
| test2.test | 10 | 0.001828s | 0.001786s | 0.001770s | byte equality observed |
| test2u.test | 10 | 0.001838s | 0.001782s | 0.001805s | byte equality observed |
| test3.test | 10 | 0.001811s | 0.001762s | 0.001799s | byte equality observed |
| test3u.test | 10 | 0.001846s | 0.001786s | 0.001808s | byte equality observed |
| test4.test | 10 | 0.001798s | 0.001708s | 0.001737s | byte equality observed |
| test4u.test | 10 | 0.001810s | 0.001773s | 0.001765s | byte equality observed |
| test5.test | 10 | 0.001782s | 0.001771s | 0.001769s | byte equality observed |
| test5u.test | 10 | 0.001833s | 0.001804s | 0.001759s | byte equality observed |
| test6.test | 10 | 0.001808s | 0.001754s | 0.001725s | byte equality observed |
| test6u.test | 10 | 0.001815s | 0.001721s | 0.001758s | byte equality observed |
| test7.test | 10 | 0.001802s | 0.001739s | 0.001736s | byte equality observed |
| test7u.test | 10 | 0.001793s | 0.001724s | 0.001722s | byte equality observed |
| test8.test | 10 | 0.001783s | 0.001732s | 0.001712s | byte equality observed |
| test8u.test | 10 | 0.001777s | 0.001717s | 0.001706s | byte equality observed |
| test9.test | 10 | 0.001803s | 0.001766s | 0.001721s | byte equality observed |
| test9u.test | 10 | 0.001798s | 0.001751s | 0.001713s | byte equality observed |
| test_actions.test | 9 | 0.002215s | 0.002230s | 0.002106s | byte equality observed |
| test_assert.test | 10 | 0.001855s | 0.001821s | 0.001787s | byte equality observed |
| test_assert_with_placeholder.test | 10 | 0.001766s | 0.001747s | 0.001668s | byte equality observed |
| test_cycles.test | 10 | 0.001805s | 0.001719s | 0.001701s | byte equality observed |
| test_dynamic.test | 10 | 0.001751s | 0.001737s | 0.001702s | byte equality observed |
| test_dynamic_grammar.test | 10 | 0.001911s | 0.001863s | 0.001799s | byte equality observed |
| test_format.test | 10 | 0.001849s | 0.001813s | 0.001734s | byte equality observed |
| test_non_char.test | 9 | 0.001844s | 0.001789s | 0.001716s | byte equality observed |
| test_skip.test | 7 | 0.001807s | 0.001708s | 0.001652s | byte equality observed |
| test_static.test | 7 | 0.001684s | 0.001632s | 0.001634s | byte equality observed |
| test_symbols.test | 9 | 0.001991s | 0.001997s | 0.001940s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43639138948).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
