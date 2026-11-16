# libs/xpressive/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| regress.test | RUN | 2.590660 | 17.139601 | 12.717269 | 0.009003 | 0.010751 | 0.008200 |
| regress_u.test | RUN | 2.734957 | 17.644476 | 12.634626 | 0.009142 | 0.010960 | 0.008164 |
| c_traits.test | RUN | 2.595352 | 16.734960 | 12.275399 | 0.007102 | 0.009021 | 0.006892 |
| c_traits_u.test | RUN | 2.788116 | 17.491562 | 12.514558 | 0.007928 | 0.009843 | 0.007290 |
| test1.test | RUN | 0.927813 | 4.146496 | 3.622164 | 0.002199 | 0.002412 | 0.002094 |
| test2.test | RUN | 1.231467 | 6.056714 | 5.217497 | 0.002095 | 0.002486 | 0.001994 |
| test3.test | RUN | 1.234767 | 6.093054 | 5.308906 | 0.002118 | 0.002490 | 0.002073 |
| test4.test | RUN | 1.064287 | 4.972752 | 4.292960 | 0.002397 | 0.002339 | 0.002034 |
| test5.test | RUN | 1.144292 | 5.404538 | 4.647136 | 0.002400 | 0.002357 | 0.002023 |
| test6.test | RUN | 1.038750 | 4.471290 | 3.923763 | 0.002390 | 0.002434 | 0.001978 |
| test7.test | RUN | 0.999138 | 4.633244 | 3.912485 | 0.002205 | 0.002190 | 0.001989 |
| test8.test | RUN | 1.003816 | 4.475936 | 3.789325 | 0.002233 | 0.002314 | 0.001930 |
| test9.test | RUN | 1.079699 | 4.819113 | 4.306151 | 0.002378 | 0.002222 | 0.001948 |
| test10.test | RUN | 1.065720 | 4.597621 | 4.003013 | 0.002095 | 0.002277 | 0.001918 |
| test11.test | RUN | 1.026324 | 4.402134 | 3.941638 | 0.002139 | 0.002238 | 0.002011 |
| test1u.test | RUN | 0.911585 | 4.150373 | 3.417736 | 0.002377 | 0.002356 | 0.001950 |
| test2u.test | RUN | 1.279764 | 6.235901 | 5.351261 | 0.002425 | 0.002400 | 0.002277 |
| test3u.test | RUN | 1.284502 | 6.315913 | 5.512977 | 0.002119 | 0.002309 | 0.002029 |
| test4u.test | RUN | 1.095057 | 4.887528 | 4.321558 | 0.002451 | 0.002575 | 0.002089 |
| test5u.test | RUN | 1.174821 | 5.399538 | 4.846579 | 0.002242 | 0.002212 | 0.002004 |
| test6u.test | RUN | 1.072808 | 4.546152 | 4.075511 | 0.002334 | 0.002084 | 0.001969 |
| test7u.test | RUN | 1.032289 | 4.791389 | 4.095414 | 0.002357 | 0.002150 | 0.002043 |
| test8u.test | RUN | 0.996215 | 4.359707 | 3.804740 | 0.001891 | 0.002308 | 0.002033 |
| test9u.test | RUN | 1.063480 | 4.717958 | 4.378600 | 0.002101 | 0.002237 | 0.002055 |
| test10u.test | RUN | 1.057634 | 4.507506 | 4.061894 | 0.002294 | 0.002251 | 0.002092 |
| test11u.test | RUN | 1.049728 | 4.498302 | 4.149051 | 0.002837 | 0.002269 | 0.002142 |
| misc1.test | RUN | 1.942260 | 11.755298 | 9.162117 | 0.002628 | 0.002591 | 0.002448 |
| misc2.test | RUN | 1.959673 | 10.995154 | 8.903155 | 0.002672 | 0.002579 | 0.002154 |
| test_format.test | RUN | 2.069917 | 13.671403 | 10.042863 | 0.002391 | 0.002282 | 0.001980 |
| test_cycles.test | RUN | 0.884079 | 4.054963 | 3.239709 | 0.002154 | 0.002091 | 0.001988 |
| test_non_char.test | RUN | 1.698757 | 9.526771 | 7.377524 | 0.002636 | 0.002391 | 0.002217 |
| test_static.test | RUN | 0.812369 | 3.628743 | 2.889376 | 0.002096 | 0.002076 | 0.001943 |
| test_actions.test | RUN | 2.104609 | 11.326253 | 9.032354 | 0.002537 | 0.002567 | 0.002387 |
| test_assert.test | RUN | 1.187758 | 4.755014 | 4.173837 | 0.002191 | 0.002201 | 0.002008 |
| test_assert_with_placeholder.test | RUN | 1.104542 | 4.341248 | 3.744511 | 0.002245 | 0.002130 | 0.002047 |
| test_symbols.test | RUN | 2.166308 | 11.014395 | 10.241949 | 0.002587 | 0.002642 | 0.002354 |
| test_dynamic.test | RUN | 1.364395 | 7.505073 | 5.946587 | 0.002275 | 0.002206 | 0.001940 |
| test_dynamic_grammar.test | RUN | 1.402963 | 7.953945 | 6.125552 | 0.002242 | 0.002335 | 0.002059 |
| test_skip.test | RUN | 1.667570 | 8.091848 | 7.007680 | 0.001988 | 0.002358 | 0.001961 |
| multiple_defs.test | LINK | 2.663892 | 14.524264 | 11.802510 | — | — | — |
| test_basic_regex.test | COMPILE | 0.544325 | 1.115644 | 1.479557 | — | — | — |
| test_match_results.test | COMPILE | 0.359095 | 0.765336 | 0.955277 | — | — | — |
| test_regex_algorithms.test | COMPILE | 0.360931 | 0.762737 | 0.973849 | — | — | — |
| test_regex_compiler.test | COMPILE | 0.552934 | 1.240524 | 1.496848 | — | — | — |
| test_regex_constants.test | COMPILE | 0.027635 | 0.049635 | 0.051995 | — | — | — |
| test_regex_error.test | COMPILE | 0.186087 | 0.408578 | 0.515005 | — | — | — |
| test_regex_iterator.test | COMPILE | 0.370730 | 0.768396 | 0.954624 | — | — | — |
| test_regex_primitives.test | COMPILE | 0.526770 | 1.240217 | 1.301422 | — | — | — |
| test_regex_token_iterator.test | COMPILE | 0.335684 | 0.774607 | 0.974505 | — | — | — |
| test_regex_traits.test | COMPILE | 0.202406 | 0.410307 | 0.467006 | — | — | — |
| test_sub_match.test | COMPILE | 0.167652 | 0.331658 | 0.382893 | — | — | — |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 1.085× | 1.090×, 1.080× | 1.000× |
| clang | 0.965× | 0.963×, 0.967× | 1.030× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1362 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/43822097733).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| c_traits.test | 3 | 0.004835s | 0.006516s | 0.004816s | byte equality observed |
| c_traits_u.test | 3 | 0.005317s | 0.006817s | 0.005084s | byte equality observed |
| misc1.test | 10 | 0.001527s | 0.001553s | 0.001467s | byte equality observed |
| misc2.test | 10 | 0.001409s | 0.001381s | 0.001318s | byte equality observed |
| regress.test | 3 | 0.005862s | 0.007231s | 0.005416s | byte equality observed |
| regress_u.test | 3 | 0.006148s | 0.007555s | 0.005723s | byte equality observed |
| test1.test | 8 | 0.001277s | 0.001284s | 0.001267s | byte equality observed |
| test10.test | 10 | 0.001286s | 0.001270s | 0.001244s | byte equality observed |
| test10u.test | 10 | 0.001273s | 0.001275s | 0.001251s | byte equality observed |
| test11.test | 10 | 0.001287s | 0.001251s | 0.001277s | byte equality observed |
| test11u.test | 10 | 0.001266s | 0.001280s | 0.001271s | byte equality observed |
| test1u.test | 10 | 0.001291s | 0.001279s | 0.001296s | byte equality observed |
| test2.test | 10 | 0.001325s | 0.001332s | 0.001280s | byte equality observed |
| test2u.test | 10 | 0.001325s | 0.001323s | 0.001293s | byte equality observed |
| test3.test | 10 | 0.001295s | 0.001332s | 0.001281s | byte equality observed |
| test3u.test | 10 | 0.001305s | 0.001335s | 0.001320s | byte equality observed |
| test4.test | 10 | 0.001283s | 0.001282s | 0.001266s | byte equality observed |
| test4u.test | 10 | 0.001306s | 0.001287s | 0.001270s | byte equality observed |
| test5.test | 10 | 0.001293s | 0.001295s | 0.001251s | byte equality observed |
| test5u.test | 10 | 0.001312s | 0.001324s | 0.001262s | byte equality observed |
| test6.test | 10 | 0.001282s | 0.001293s | 0.001265s | byte equality observed |
| test6u.test | 10 | 0.001301s | 0.001279s | 0.001297s | byte equality observed |
| test7.test | 10 | 0.001300s | 0.001290s | 0.001253s | byte equality observed |
| test7u.test | 10 | 0.001300s | 0.001272s | 0.001263s | byte equality observed |
| test8.test | 10 | 0.001298s | 0.001275s | 0.001267s | byte equality observed |
| test8u.test | 10 | 0.001308s | 0.001318s | 0.001262s | byte equality observed |
| test9.test | 10 | 0.001326s | 0.001288s | 0.001249s | byte equality observed |
| test9u.test | 10 | 0.001289s | 0.001288s | 0.001236s | byte equality observed |
| test_actions.test | 10 | 0.001498s | 0.001493s | 0.001442s | byte equality observed |
| test_assert.test | 10 | 0.001368s | 0.001356s | 0.001284s | byte equality observed |
| test_assert_with_placeholder.test | 10 | 0.001258s | 0.001271s | 0.001232s | byte equality observed |
| test_cycles.test | 10 | 0.001297s | 0.001271s | 0.001239s | byte equality observed |
| test_dynamic.test | 10 | 0.001278s | 0.001271s | 0.001244s | byte equality observed |
| test_dynamic_grammar.test | 10 | 0.001357s | 0.001327s | 0.001283s | byte equality observed |
| test_format.test | 10 | 0.001346s | 0.001360s | 0.001323s | byte equality observed |
| test_non_char.test | 10 | 0.001287s | 0.001290s | 0.001281s | byte equality observed |
| test_skip.test | 10 | 0.001261s | 0.001247s | 0.001208s | byte equality observed |
| test_static.test | 10 | 0.001267s | 0.001270s | 0.001205s | byte equality observed |
| test_symbols.test | 10 | 0.001478s | 0.001433s | 0.001409s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/43822097733).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
