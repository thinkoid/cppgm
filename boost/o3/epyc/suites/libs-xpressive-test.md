# libs/xpressive/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| regress.test | RUN | 3.532097 | 22.386392 | 17.892102 | 0.013495 | 0.017266 | 0.012786 |
| regress_u.test | RUN | 3.740400 | 23.021457 | 17.797255 | 0.012909 | 0.016853 | 0.012676 |
| c_traits.test | RUN | 3.523949 | 21.853381 | 17.138657 | 0.010311 | 0.014545 | 0.010228 |
| c_traits_u.test | RUN | 3.853763 | 22.608038 | 17.619522 | 0.011407 | 0.016743 | 0.010866 |
| test1.test | RUN | 1.377706 | 5.800987 | 5.379484 | 0.003490 | 0.003845 | 0.003303 |
| test2.test | RUN | 1.825074 | 8.157316 | 7.639896 | 0.003611 | 0.003937 | 0.003995 |
| test3.test | RUN | 1.794454 | 8.171401 | 7.876280 | 0.003831 | 0.003978 | 0.003701 |
| test4.test | RUN | 1.547082 | 6.775119 | 6.398628 | 0.003657 | 0.004101 | 0.003741 |
| test5.test | RUN | 1.671322 | 7.262481 | 6.888769 | 0.003478 | 0.003997 | 0.003945 |
| test6.test | RUN | 1.497558 | 6.040564 | 5.917693 | 0.003446 | 0.003995 | 0.003811 |
| test7.test | RUN | 1.462891 | 6.293967 | 5.998242 | 0.003624 | 0.004080 | 0.003733 |
| test8.test | RUN | 1.439029 | 6.064693 | 5.737445 | 0.003764 | 0.003809 | 0.003808 |
| test9.test | RUN | 1.548280 | 6.612771 | 6.552989 | 0.003791 | 0.003983 | 0.003606 |
| test10.test | RUN | 1.519721 | 6.246978 | 5.983053 | 0.003141 | 0.003852 | 0.003582 |
| test11.test | RUN | 1.470216 | 6.029647 | 5.998802 | 0.003751 | 0.003761 | 0.003333 |
| test1u.test | RUN | 1.359554 | 5.609013 | 5.220793 | 0.003371 | 0.003915 | 0.003877 |
| test2u.test | RUN | 1.809109 | 8.477534 | 7.913887 | 0.003727 | 0.003818 | 0.003494 |
| test3u.test | RUN | 1.858134 | 8.659143 | 8.072533 | 0.003810 | 0.004031 | 0.003912 |
| test4u.test | RUN | 1.561155 | 6.650136 | 6.443137 | 0.003638 | 0.004088 | 0.003707 |
| test5u.test | RUN | 1.669038 | 7.416325 | 7.251129 | 0.003619 | 0.003946 | 0.003755 |
| test6u.test | RUN | 1.566906 | 6.213603 | 6.008253 | 0.003703 | 0.003653 | 0.003834 |
| test7u.test | RUN | 1.497067 | 6.450773 | 6.270644 | 0.003683 | 0.004098 | 0.003866 |
| test8u.test | RUN | 1.435957 | 6.091749 | 5.867713 | 0.003535 | 0.004090 | 0.003759 |
| test9u.test | RUN | 1.594104 | 6.448795 | 6.472882 | 0.003560 | 0.003781 | 0.003779 |
| test10u.test | RUN | 1.558521 | 6.138089 | 5.923530 | 0.003750 | 0.003818 | 0.003694 |
| test11u.test | RUN | 1.561359 | 6.204996 | 6.227249 | 0.003940 | 0.004008 | 0.003889 |
| misc1.test | RUN | 2.740371 | 15.517010 | 13.308297 | 0.004770 | 0.004626 | 0.004971 |
| misc2.test | RUN | 2.737469 | 14.649597 | 12.920985 | 0.004231 | 0.004235 | 0.004496 |
| test_format.test | RUN | 2.846267 | 18.035261 | 14.378877 | 0.003824 | 0.003893 | 0.003943 |
| test_cycles.test | RUN | 1.311816 | 5.555886 | 4.959318 | 0.003633 | 0.003825 | 0.003729 |
| test_non_char.test | RUN | 2.411375 | 12.596073 | 10.997245 | 0.004123 | 0.003940 | 0.003818 |
| test_static.test | RUN | 1.196681 | 4.988844 | 4.466784 | 0.003809 | 0.003972 | 0.003478 |
| test_actions.test | RUN | 2.942087 | 15.071423 | 13.453453 | 0.004962 | 0.005334 | 0.005166 |
| test_assert.test | RUN | 1.652212 | 6.641183 | 6.407385 | 0.004100 | 0.003878 | 0.004143 |
| test_assert_with_placeholder.test | RUN | 1.565930 | 5.986585 | 5.717139 | 0.003795 | 0.003750 | 0.003841 |
| test_symbols.test | RUN | 3.036800 | 14.759051 | 15.300312 | 0.005335 | 0.005348 | 0.005310 |
| test_dynamic.test | RUN | 1.919143 | 10.149403 | 8.873011 | 0.003946 | 0.003833 | 0.003835 |
| test_dynamic_grammar.test | RUN | 2.006963 | 10.572713 | 9.082161 | 0.004086 | 0.003994 | 0.003936 |
| test_skip.test | RUN | 2.312014 | 10.843072 | 10.441462 | 0.003598 | 0.003664 | 0.003822 |
| multiple_defs.test | LINK | 3.751432 | 19.317305 | 17.596838 | — | — | — |
| test_basic_regex.test | COMPILE | 0.856807 | 1.664743 | 2.440769 | — | — | — |
| test_match_results.test | COMPILE | 0.566355 | 1.179260 | 1.661989 | — | — | — |
| test_regex_algorithms.test | COMPILE | 0.548882 | 1.158440 | 1.632745 | — | — | — |
| test_regex_compiler.test | COMPILE | 0.830909 | 1.854711 | 2.431726 | — | — | — |
| test_regex_constants.test | COMPILE | 0.047955 | 0.081406 | 0.085485 | — | — | — |
| test_regex_error.test | COMPILE | 0.314373 | 0.624386 | 0.884417 | — | — | — |
| test_regex_iterator.test | COMPILE | 0.550727 | 1.162852 | 1.606444 | — | — | — |
| test_regex_primitives.test | COMPILE | 0.849727 | 1.834278 | 2.369578 | — | — | — |
| test_regex_token_iterator.test | COMPILE | 0.548742 | 1.167365 | 1.358452 | — | — | — |
| test_regex_traits.test | COMPILE | 0.318441 | 0.614265 | 0.894328 | — | — | — |
| test_sub_match.test | COMPILE | 0.247053 | 0.490467 | 0.672122 | — | — | — |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 1.097× | 1.101×, 1.093× | 0.999× |
| clang | 0.963× | 0.963×, 0.962× | 0.997× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1359 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/43701438216).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| c_traits.test | 2 | 0.009259s | 0.013281s | 0.008947s | byte equality observed |
| c_traits_u.test | 2 | 0.010167s | 0.013943s | 0.009462s | byte equality observed |
| misc1.test | 6 | 0.003375s | 0.003295s | 0.003262s | byte equality observed |
| misc2.test | 7 | 0.002979s | 0.002862s | 0.002888s | byte equality observed |
| regress.test | 2 | 0.012022s | 0.015281s | 0.010704s | byte equality observed |
| regress_u.test | 2 | 0.012386s | 0.015965s | 0.010878s | byte equality observed |
| test1.test | 7 | 0.002618s | 0.002631s | 0.002587s | byte equality observed |
| test10.test | 7 | 0.002650s | 0.002601s | 0.002605s | byte equality observed |
| test10u.test | 8 | 0.002621s | 0.002601s | 0.002602s | byte equality observed |
| test11.test | 8 | 0.002637s | 0.002600s | 0.002547s | byte equality observed |
| test11u.test | 8 | 0.002668s | 0.002657s | 0.002584s | byte equality observed |
| test1u.test | 8 | 0.002658s | 0.002628s | 0.002647s | byte equality observed |
| test2.test | 8 | 0.002726s | 0.002729s | 0.002628s | byte equality observed |
| test2u.test | 7 | 0.002742s | 0.002748s | 0.002623s | byte equality observed |
| test3.test | 8 | 0.002680s | 0.002758s | 0.002635s | byte equality observed |
| test3u.test | 8 | 0.002729s | 0.002758s | 0.002651s | byte equality observed |
| test4.test | 8 | 0.002656s | 0.002676s | 0.002591s | byte equality observed |
| test4u.test | 8 | 0.002682s | 0.002652s | 0.002635s | byte equality observed |
| test5.test | 8 | 0.002688s | 0.002732s | 0.002608s | byte equality observed |
| test5u.test | 8 | 0.002722s | 0.002729s | 0.002682s | byte equality observed |
| test6.test | 8 | 0.002659s | 0.002685s | 0.002618s | byte equality observed |
| test6u.test | 8 | 0.002655s | 0.002648s | 0.002570s | byte equality observed |
| test7.test | 8 | 0.002652s | 0.002701s | 0.002610s | byte equality observed |
| test7u.test | 8 | 0.002656s | 0.002679s | 0.002598s | byte equality observed |
| test8.test | 8 | 0.002650s | 0.002631s | 0.002570s | byte equality observed |
| test8u.test | 8 | 0.002621s | 0.002649s | 0.002599s | byte equality observed |
| test9.test | 8 | 0.002637s | 0.002614s | 0.002600s | byte equality observed |
| test9u.test | 8 | 0.002649s | 0.002632s | 0.002587s | byte equality observed |
| test_actions.test | 7 | 0.003374s | 0.003413s | 0.003288s | byte equality observed |
| test_assert.test | 8 | 0.002804s | 0.002785s | 0.002757s | byte equality observed |
| test_assert_with_placeholder.test | 8 | 0.002595s | 0.002581s | 0.002568s | byte equality observed |
| test_cycles.test | 7 | 0.002667s | 0.002624s | 0.002605s | byte equality observed |
| test_dynamic.test | 5 | 0.002646s | 0.002590s | 0.002601s | byte equality observed |
| test_dynamic_grammar.test | 7 | 0.002822s | 0.002830s | 0.002759s | byte equality observed |
| test_format.test | 6 | 0.002756s | 0.002708s | 0.002674s | byte equality observed |
| test_non_char.test | 7 | 0.002727s | 0.002751s | 0.002663s | byte equality observed |
| test_skip.test | 7 | 0.002630s | 0.002543s | 0.002575s | byte equality observed |
| test_static.test | 7 | 0.002351s | 0.002407s | 0.002341s | byte equality observed |
| test_symbols.test | 7 | 0.003013s | 0.002948s | 0.002938s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/43701438216).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
