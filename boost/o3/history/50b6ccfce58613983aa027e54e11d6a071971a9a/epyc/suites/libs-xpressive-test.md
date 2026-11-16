# libs/xpressive/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| regress.test | RUN | 2.740440 | 18.047194 | 14.322360 | 0.011014 | 0.013935 | 0.008047 |
| regress_u.test | RUN | 2.912112 | 18.620717 | 14.157832 | 0.010571 | 0.013220 | 0.010041 |
| c_traits.test | RUN | 2.755678 | 17.604140 | 13.668150 | 0.007640 | 0.011083 | 0.008006 |
| c_traits_u.test | RUN | 2.972611 | 18.426954 | 14.150588 | 0.008565 | 0.012574 | 0.008552 |
| test1.test | RUN | 1.090208 | 4.589659 | 4.232029 | 0.003241 | 0.003235 | 0.003067 |
| test2.test | RUN | 1.416528 | 6.553315 | 6.065242 | 0.003073 | 0.003387 | 0.003128 |
| test3.test | RUN | 1.390872 | 6.548065 | 6.323293 | 0.003093 | 0.003407 | 0.003165 |
| test4.test | RUN | 1.218747 | 5.389832 | 5.040924 | 0.002785 | 0.003239 | 0.003201 |
| test5.test | RUN | 1.312042 | 5.810060 | 5.563911 | 0.003050 | 0.003325 | 0.003325 |
| test6.test | RUN | 1.172610 | 4.905282 | 4.730336 | 0.002726 | 0.003356 | 0.003050 |
| test7.test | RUN | 1.140357 | 5.050654 | 4.762961 | 0.003213 | 0.003247 | 0.003105 |
| test8.test | RUN | 1.130615 | 4.887191 | 4.681662 | 0.002859 | 0.003201 | 0.003138 |
| test9.test | RUN | 1.225467 | 5.327167 | 5.255210 | 0.003185 | 0.002996 | 0.002878 |
| test10.test | RUN | 1.174734 | 5.041538 | 4.831268 | 0.002924 | 0.003161 | 0.002977 |
| test11.test | RUN | 1.135245 | 4.819946 | 4.803938 | 0.002960 | 0.003355 | 0.002742 |
| test1u.test | RUN | 1.065786 | 4.550979 | 4.144594 | 0.002906 | 0.003289 | 0.003179 |
| test2u.test | RUN | 1.422675 | 6.780054 | 6.408799 | 0.003045 | 0.003124 | 0.003131 |
| test3u.test | RUN | 1.422671 | 6.976444 | 6.525802 | 0.003243 | 0.003332 | 0.003161 |
| test4u.test | RUN | 1.232985 | 5.320203 | 5.132250 | 0.003116 | 0.003223 | 0.003191 |
| test5u.test | RUN | 1.298527 | 5.901498 | 5.758521 | 0.003133 | 0.003289 | 0.003234 |
| test6u.test | RUN | 1.206862 | 4.919746 | 4.833929 | 0.003149 | 0.003262 | 0.003171 |
| test7u.test | RUN | 1.161131 | 5.162349 | 4.871983 | 0.003130 | 0.003377 | 0.003085 |
| test8u.test | RUN | 1.133221 | 4.791587 | 4.587687 | 0.003230 | 0.003417 | 0.003231 |
| test9u.test | RUN | 1.221934 | 5.233250 | 5.206839 | 0.003171 | 0.003339 | 0.003188 |
| test10u.test | RUN | 1.181320 | 4.859835 | 4.814038 | 0.003176 | 0.003343 | 0.003316 |
| test11u.test | RUN | 1.208236 | 4.979588 | 4.938072 | 0.003148 | 0.003289 | 0.003408 |
| misc1.test | RUN | 2.088079 | 12.404768 | 10.624341 | 0.003918 | 0.004265 | 0.004085 |
| misc2.test | RUN | 2.154163 | 11.766460 | 10.322306 | 0.003486 | 0.003689 | 0.003587 |
| test_format.test | RUN | 2.235358 | 14.316074 | 11.529098 | 0.003230 | 0.003440 | 0.003353 |
| test_cycles.test | RUN | 1.011339 | 4.428133 | 3.938066 | 0.003056 | 0.003134 | 0.003199 |
| test_non_char.test | RUN | 1.846537 | 9.980848 | 8.775993 | 0.003370 | 0.003348 | 0.003225 |
| test_static.test | RUN | 0.931584 | 4.108538 | 3.492727 | 0.003156 | 0.003266 | 0.003134 |
| test_actions.test | RUN | 2.271237 | 12.139074 | 10.776518 | 0.004083 | 0.004258 | 0.003805 |
| test_assert.test | RUN | 1.344318 | 5.208040 | 4.943901 | 0.002988 | 0.003097 | 0.003068 |
| test_assert_with_placeholder.test | RUN | 1.246653 | 4.795618 | 4.669359 | 0.003119 | 0.003253 | 0.003065 |
| test_symbols.test | RUN | 2.356094 | 11.880968 | 12.194972 | 0.004045 | 0.004447 | 0.004391 |
| test_dynamic.test | RUN | 1.488350 | 8.029457 | 6.967726 | 0.003186 | 0.003285 | 0.003101 |
| test_dynamic_grammar.test | RUN | 1.542547 | 8.441665 | 7.131777 | 0.003372 | 0.003568 | 0.003287 |
| test_skip.test | RUN | 1.809180 | 8.698746 | 8.474610 | 0.003224 | 0.003138 | 0.003075 |
| multiple_defs.test | LINK | 2.909866 | 15.973574 | 13.898425 | — | — | — |
| test_basic_regex.test | COMPILE | 0.666529 | 1.356511 | 1.942668 | — | — | — |
| test_match_results.test | COMPILE | 0.452233 | 0.917013 | 1.326804 | — | — | — |
| test_regex_algorithms.test | COMPILE | 0.433295 | 0.936126 | 1.264411 | — | — | — |
| test_regex_compiler.test | COMPILE | 0.670491 | 1.478527 | 1.886750 | — | — | — |
| test_regex_constants.test | COMPILE | 0.037533 | 0.064494 | 0.067988 | — | — | — |
| test_regex_error.test | COMPILE | 0.234793 | 0.498382 | 0.688544 | — | — | — |
| test_regex_iterator.test | COMPILE | 0.430760 | 0.914782 | 1.268672 | — | — | — |
| test_regex_primitives.test | COMPILE | 0.659657 | 1.449888 | 1.778371 | — | — | — |
| test_regex_token_iterator.test | COMPILE | 0.390259 | 0.902900 | 1.112550 | — | — | — |
| test_regex_traits.test | COMPILE | 0.248206 | 0.488033 | 0.707707 | — | — | — |
| test_sub_match.test | COMPILE | 0.197575 | 0.394139 | 0.419751 | — | — | — |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 1.103× | 1.118×, 1.088× | 0.978× |
| clang | 0.942× | 0.941×, 0.943× | 0.991× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1363 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/43916760662).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| c_traits.test | 3 | 0.007311s | 0.010367s | 0.006685s | byte equality observed |
| c_traits_u.test | 3 | 0.007981s | 0.010748s | 0.006925s | byte equality observed |
| misc1.test | 8 | 0.002651s | 0.002577s | 0.002550s | byte equality observed |
| misc2.test | 9 | 0.002360s | 0.002264s | 0.002235s | byte equality observed |
| regress.test | 3 | 0.009154s | 0.011910s | 0.008142s | byte equality observed |
| regress_u.test | 3 | 0.009330s | 0.012083s | 0.008114s | byte equality observed |
| test1.test | 10 | 0.002088s | 0.002013s | 0.001963s | byte equality observed |
| test10.test | 10 | 0.002036s | 0.002028s | 0.001988s | byte equality observed |
| test10u.test | 10 | 0.002060s | 0.002025s | 0.001992s | byte equality observed |
| test11.test | 10 | 0.002028s | 0.002062s | 0.002015s | byte equality observed |
| test11u.test | 10 | 0.002072s | 0.001987s | 0.001966s | byte equality observed |
| test1u.test | 10 | 0.002070s | 0.002040s | 0.001993s | byte equality observed |
| test2.test | 10 | 0.002076s | 0.002123s | 0.002024s | byte equality observed |
| test2u.test | 10 | 0.002112s | 0.002127s | 0.002028s | byte equality observed |
| test3.test | 10 | 0.002092s | 0.002154s | 0.002044s | byte equality observed |
| test3u.test | 10 | 0.002083s | 0.002148s | 0.002076s | byte equality observed |
| test4.test | 9 | 0.002084s | 0.002072s | 0.002017s | byte equality observed |
| test4u.test | 9 | 0.002084s | 0.002055s | 0.002050s | byte equality observed |
| test5.test | 10 | 0.002112s | 0.002075s | 0.002075s | byte equality observed |
| test5u.test | 10 | 0.002078s | 0.002113s | 0.002064s | byte equality observed |
| test6.test | 10 | 0.002041s | 0.002040s | 0.002052s | byte equality observed |
| test6u.test | 8 | 0.002064s | 0.002103s | 0.002045s | byte equality observed |
| test7.test | 10 | 0.002053s | 0.002043s | 0.002004s | byte equality observed |
| test7u.test | 9 | 0.002076s | 0.002059s | 0.002048s | byte equality observed |
| test8.test | 10 | 0.002083s | 0.002034s | 0.002022s | byte equality observed |
| test8u.test | 9 | 0.002065s | 0.002056s | 0.002048s | byte equality observed |
| test9.test | 10 | 0.002068s | 0.002043s | 0.002019s | byte equality observed |
| test9u.test | 10 | 0.002051s | 0.002072s | 0.002024s | byte equality observed |
| test_actions.test | 8 | 0.002643s | 0.002614s | 0.002538s | byte equality observed |
| test_assert.test | 10 | 0.002188s | 0.002143s | 0.002117s | byte equality observed |
| test_assert_with_placeholder.test | 10 | 0.002060s | 0.002001s | 0.001947s | byte equality observed |
| test_cycles.test | 10 | 0.002033s | 0.002005s | 0.001974s | byte equality observed |
| test_dynamic.test | 10 | 0.002080s | 0.002037s | 0.002011s | byte equality observed |
| test_dynamic_grammar.test | 8 | 0.002207s | 0.002163s | 0.002157s | byte equality observed |
| test_format.test | 9 | 0.002148s | 0.002090s | 0.002031s | byte equality observed |
| test_non_char.test | 9 | 0.002119s | 0.002078s | 0.002063s | byte equality observed |
| test_skip.test | 10 | 0.001994s | 0.001962s | 0.001957s | byte equality observed |
| test_static.test | 10 | 0.001953s | 0.001868s | 0.001914s | byte equality observed |
| test_symbols.test | 9 | 0.002370s | 0.002467s | 0.002210s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/43916760662).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
