# libs/xpressive/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| regress.test | RUN | 2.208603 | 13.864129 | 9.824852 | 0.007740 | 0.009493 | 0.006995 |
| regress_u.test | RUN | 2.361665 | 14.436825 | 10.111535 | 0.007961 | 0.009809 | 0.007656 |
| c_traits.test | RUN | 2.217775 | 13.713537 | 9.851920 | 0.006322 | 0.008512 | 0.006130 |
| c_traits_u.test | RUN | 2.369027 | 14.511064 | 9.879700 | 0.007051 | 0.008534 | 0.006865 |
| test1.test | RUN | 0.790971 | 3.506330 | 2.749842 | 0.001925 | 0.001991 | 0.002023 |
| test2.test | RUN | 1.043273 | 4.864948 | 4.075204 | 0.001874 | 0.002030 | 0.001813 |
| test3.test | RUN | 1.051214 | 4.964087 | 4.124302 | 0.001851 | 0.002043 | 0.001912 |
| test4.test | RUN | 0.894987 | 4.013236 | 3.391466 | 0.001836 | 0.002036 | 0.001982 |
| test5.test | RUN | 0.962197 | 4.438240 | 3.613597 | 0.001828 | 0.002048 | 0.001759 |
| test6.test | RUN | 0.893320 | 3.687301 | 3.003606 | 0.001773 | 0.001948 | 0.001903 |
| test7.test | RUN | 0.873041 | 3.854956 | 3.057947 | 0.001779 | 0.001986 | 0.001780 |
| test8.test | RUN | 0.857374 | 3.592537 | 3.078752 | 0.001681 | 0.001987 | 0.001783 |
| test9.test | RUN | 0.937838 | 3.907269 | 3.370931 | 0.001846 | 0.001894 | 0.001862 |
| test10.test | RUN | 0.901259 | 3.686515 | 3.163562 | 0.001766 | 0.001789 | 0.001619 |
| test11.test | RUN | 0.848878 | 3.635024 | 3.114800 | 0.001670 | 0.001914 | 0.001842 |
| test1u.test | RUN | 0.784643 | 3.353138 | 2.680613 | 0.001908 | 0.001883 | 0.001788 |
| test2u.test | RUN | 1.087726 | 5.001013 | 4.277139 | 0.001722 | 0.001836 | 0.002064 |
| test3u.test | RUN | 1.089145 | 5.103840 | 4.433818 | 0.001882 | 0.002034 | 0.002045 |
| test4u.test | RUN | 0.924283 | 4.108981 | 3.357917 | 0.001883 | 0.002088 | 0.001833 |
| test5u.test | RUN | 1.014945 | 4.516704 | 3.709390 | 0.001826 | 0.001881 | 0.001858 |
| test6u.test | RUN | 0.894421 | 3.707502 | 3.102646 | 0.001777 | 0.001802 | 0.001942 |
| test7u.test | RUN | 0.904444 | 4.039223 | 3.178585 | 0.001902 | 0.002018 | 0.001865 |
| test8u.test | RUN | 0.838757 | 3.604306 | 3.026820 | 0.001843 | 0.001930 | 0.001811 |
| test9u.test | RUN | 0.908090 | 3.843599 | 3.302114 | 0.001771 | 0.001775 | 0.001875 |
| test10u.test | RUN | 0.899901 | 3.625645 | 3.125832 | 0.001890 | 0.001926 | 0.001614 |
| test11u.test | RUN | 0.895246 | 3.651838 | 3.315500 | 0.001976 | 0.001990 | 0.001889 |
| misc1.test | RUN | 1.671447 | 9.542141 | 7.207589 | 0.002167 | 0.002105 | 0.002305 |
| misc2.test | RUN | 1.667181 | 9.068935 | 6.990848 | 0.001880 | 0.001904 | 0.001983 |
| test_format.test | RUN | 1.767639 | 11.203779 | 8.111943 | 0.002004 | 0.001762 | 0.001937 |
| test_cycles.test | RUN | 0.742166 | 3.305207 | 2.479863 | 0.002106 | 0.001821 | 0.001858 |
| test_non_char.test | RUN | 1.483302 | 7.722449 | 5.927477 | 0.001784 | 0.001957 | 0.001737 |
| test_static.test | RUN | 0.705447 | 3.005056 | 2.190441 | 0.001898 | 0.001967 | 0.001843 |
| test_actions.test | RUN | 1.774624 | 9.013240 | 7.198033 | 0.002140 | 0.002109 | 0.002164 |
| test_assert.test | RUN | 0.976529 | 3.931127 | 3.207536 | 0.001875 | 0.002118 | 0.001913 |
| test_assert_with_placeholder.test | RUN | 0.925620 | 3.554622 | 3.023935 | 0.001779 | 0.001986 | 0.001733 |
| test_symbols.test | RUN | 1.820515 | 8.820578 | 7.915437 | 0.002251 | 0.002179 | 0.001970 |
| test_dynamic.test | RUN | 1.151501 | 6.176477 | 4.784761 | 0.001840 | 0.001707 | 0.001585 |
| test_dynamic_grammar.test | RUN | 1.194399 | 6.554757 | 4.935406 | 0.001863 | 0.001866 | 0.001910 |
| test_skip.test | RUN | 1.392520 | 6.433134 | 5.474885 | 0.001660 | 0.001724 | 0.001843 |
| multiple_defs.test | LINK | 2.309039 | 12.464221 | 9.471207 | — | — | — |
| test_basic_regex.test | COMPILE | 0.453199 | 0.936511 | 1.167567 | — | — | — |
| test_match_results.test | COMPILE | 0.293619 | 0.617432 | 0.777664 | — | — | — |
| test_regex_algorithms.test | COMPILE | 0.307660 | 0.619874 | 0.745434 | — | — | — |
| test_regex_compiler.test | COMPILE | 0.457239 | 1.020199 | 1.130916 | — | — | — |
| test_regex_constants.test | COMPILE | 0.022924 | 0.041152 | 0.043506 | — | — | — |
| test_regex_error.test | COMPILE | 0.162118 | 0.340687 | 0.415364 | — | — | — |
| test_regex_iterator.test | COMPILE | 0.300938 | 0.624157 | 0.765029 | — | — | — |
| test_regex_primitives.test | COMPILE | 0.454427 | 0.999113 | 1.145406 | — | — | — |
| test_regex_token_iterator.test | COMPILE | 0.295050 | 0.628448 | 0.740962 | — | — | — |
| test_regex_traits.test | COMPILE | 0.168126 | 0.332498 | 0.408089 | — | — | — |
| test_sub_match.test | COMPILE | 0.139123 | 0.265540 | 0.330238 | — | — | — |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 1.084× | 1.082×, 1.086× | 1.000× |
| clang | 0.961× | 0.959×, 0.964× | 0.997× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1365 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/43796354412).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| c_traits.test | 3 | 0.006016s | 0.007810s | 0.005885s | byte equality observed |
| c_traits_u.test | 3 | 0.006438s | 0.008285s | 0.006221s | byte equality observed |
| misc1.test | 10 | 0.001806s | 0.001806s | 0.001740s | byte equality observed |
| misc2.test | 10 | 0.001616s | 0.001601s | 0.001580s | byte equality observed |
| regress.test | 3 | 0.007315s | 0.008966s | 0.006689s | byte equality observed |
| regress_u.test | 3 | 0.007492s | 0.009161s | 0.007033s | byte equality observed |
| test1.test | 10 | 0.001508s | 0.001514s | 0.001471s | byte equality observed |
| test10.test | 10 | 0.001494s | 0.001475s | 0.001458s | byte equality observed |
| test10u.test | 10 | 0.001503s | 0.001507s | 0.001472s | byte equality observed |
| test11.test | 10 | 0.001510s | 0.001505s | 0.001458s | byte equality observed |
| test11u.test | 10 | 0.001515s | 0.001506s | 0.001475s | byte equality observed |
| test1u.test | 10 | 0.001519s | 0.001516s | 0.001480s | byte equality observed |
| test2.test | 10 | 0.001550s | 0.001560s | 0.001515s | byte equality observed |
| test2u.test | 10 | 0.001576s | 0.001577s | 0.001513s | byte equality observed |
| test3.test | 10 | 0.001563s | 0.001592s | 0.001511s | byte equality observed |
| test3u.test | 10 | 0.001564s | 0.001583s | 0.001519s | byte equality observed |
| test4.test | 10 | 0.001526s | 0.001538s | 0.001489s | byte equality observed |
| test4u.test | 10 | 0.001551s | 0.001527s | 0.001508s | byte equality observed |
| test5.test | 10 | 0.001532s | 0.001547s | 0.001503s | byte equality observed |
| test5u.test | 10 | 0.001545s | 0.001547s | 0.001498s | byte equality observed |
| test6.test | 10 | 0.001509s | 0.001517s | 0.001464s | byte equality observed |
| test6u.test | 10 | 0.001522s | 0.001514s | 0.001475s | byte equality observed |
| test7.test | 10 | 0.001515s | 0.001520s | 0.001472s | byte equality observed |
| test7u.test | 10 | 0.001537s | 0.001518s | 0.001484s | byte equality observed |
| test8.test | 10 | 0.001510s | 0.001516s | 0.001458s | byte equality observed |
| test8u.test | 10 | 0.001525s | 0.001517s | 0.001471s | byte equality observed |
| test9.test | 10 | 0.001514s | 0.001529s | 0.001453s | byte equality observed |
| test9u.test | 10 | 0.001521s | 0.001533s | 0.001481s | byte equality observed |
| test_actions.test | 10 | 0.001788s | 0.001776s | 0.001739s | byte equality observed |
| test_assert.test | 10 | 0.001561s | 0.001537s | 0.001511s | byte equality observed |
| test_assert_with_placeholder.test | 10 | 0.001495s | 0.001478s | 0.001432s | byte equality observed |
| test_cycles.test | 10 | 0.001536s | 0.001516s | 0.001477s | byte equality observed |
| test_dynamic.test | 10 | 0.001504s | 0.001477s | 0.001469s | byte equality observed |
| test_dynamic_grammar.test | 10 | 0.001598s | 0.001580s | 0.001561s | byte equality observed |
| test_format.test | 10 | 0.001584s | 0.001547s | 0.001506s | byte equality observed |
| test_non_char.test | 10 | 0.001537s | 0.001505s | 0.001494s | byte equality observed |
| test_skip.test | 10 | 0.001509s | 0.001491s | 0.001434s | byte equality observed |
| test_static.test | 10 | 0.001477s | 0.001458s | 0.001417s | byte equality observed |
| test_symbols.test | 10 | 0.001785s | 0.001778s | 0.001726s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/43796354412).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
