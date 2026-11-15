# libs/xpressive/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| regress.test | RUN | 3.321609 | 21.369139 | 15.422576 | 0.011794 | 0.013203 | 0.010623 |
| regress_u.test | RUN | 3.498178 | 21.963882 | 15.485293 | 0.011894 | 0.013897 | 0.011092 |
| c_traits.test | RUN | 3.273658 | 20.882329 | 15.066556 | 0.009548 | 0.011634 | 0.009069 |
| c_traits_u.test | RUN | 3.521989 | 21.703313 | 15.385409 | 0.009938 | 0.012393 | 0.008989 |
| test1.test | RUN | 1.158397 | 5.247482 | 4.534650 | 0.002372 | 0.002547 | 0.002570 |
| test2.test | RUN | 1.557028 | 7.503995 | 6.455560 | 0.002696 | 0.002827 | 0.002409 |
| test3.test | RUN | 1.558777 | 7.645774 | 6.532921 | 0.002490 | 0.002735 | 0.002609 |
| test4.test | RUN | 1.342124 | 6.241873 | 5.355289 | 0.002531 | 0.002540 | 0.002459 |
| test5.test | RUN | 1.445666 | 6.725565 | 5.717438 | 0.002586 | 0.002647 | 0.002420 |
| test6.test | RUN | 1.298011 | 5.640277 | 4.880957 | 0.002262 | 0.002688 | 0.002227 |
| test7.test | RUN | 1.261804 | 5.814961 | 4.996615 | 0.002501 | 0.002651 | 0.002518 |
| test8.test | RUN | 1.253302 | 5.606170 | 4.902035 | 0.002465 | 0.002703 | 0.002332 |
| test9.test | RUN | 1.358481 | 6.083535 | 5.475423 | 0.002509 | 0.002834 | 0.002373 |
| test10.test | RUN | 1.312652 | 5.751232 | 5.036369 | 0.002269 | 0.002491 | 0.002515 |
| test11.test | RUN | 1.262981 | 5.545315 | 5.013004 | 0.002448 | 0.002693 | 0.002592 |
| test1u.test | RUN | 1.148442 | 5.210872 | 4.402844 | 0.002595 | 0.002578 | 0.002505 |
| test2u.test | RUN | 1.556331 | 7.833654 | 6.715375 | 0.002638 | 0.002638 | 0.002464 |
| test3u.test | RUN | 1.590590 | 8.059205 | 6.915236 | 0.002479 | 0.002663 | 0.002420 |
| test4u.test | RUN | 1.359691 | 6.231317 | 5.363074 | 0.002510 | 0.002717 | 0.002299 |
| test5u.test | RUN | 1.441189 | 6.883968 | 6.010924 | 0.002435 | 0.002672 | 0.002454 |
| test6u.test | RUN | 1.323834 | 5.730212 | 5.048456 | 0.002592 | 0.002665 | 0.002387 |
| test7u.test | RUN | 1.286642 | 5.984980 | 5.131942 | 0.002433 | 0.002544 | 0.002437 |
| test8u.test | RUN | 1.241892 | 5.564421 | 4.730614 | 0.002467 | 0.002665 | 0.002473 |
| test9u.test | RUN | 1.342720 | 5.948703 | 5.394265 | 0.002466 | 0.002629 | 0.002586 |
| test10u.test | RUN | 1.310286 | 5.643453 | 4.955482 | 0.002541 | 0.002646 | 0.002412 |
| test11u.test | RUN | 1.337926 | 5.701202 | 5.163774 | 0.002513 | 0.002560 | 0.002362 |
| misc1.test | RUN | 2.439397 | 14.561575 | 11.313800 | 0.003485 | 0.003175 | 0.002867 |
| misc2.test | RUN | 2.437694 | 13.713048 | 10.975309 | 0.002672 | 0.002829 | 0.002720 |
| test_format.test | RUN | 2.591478 | 16.995821 | 12.629532 | 0.002675 | 0.002607 | 0.002532 |
| test_cycles.test | RUN | 1.110100 | 5.130518 | 4.068663 | 0.002346 | 0.002560 | 0.002413 |
| test_non_char.test | RUN | 2.152459 | 11.784268 | 9.369771 | 0.002467 | 0.002562 | 0.002522 |
| test_static.test | RUN | 1.040213 | 4.675633 | 3.681320 | 0.002438 | 0.002521 | 0.002362 |
| test_actions.test | RUN | 2.582271 | 13.830085 | 11.362368 | 0.003791 | 0.003222 | 0.003055 |
| test_assert.test | RUN | 1.469207 | 6.027703 | 5.336030 | 0.002587 | 0.002724 | 0.002655 |
| test_assert_with_placeholder.test | RUN | 1.345919 | 5.432080 | 4.736755 | 0.002590 | 0.002608 | 0.002447 |
| test_symbols.test | RUN | 2.701901 | 13.643848 | 12.960961 | 0.003293 | 0.003216 | 0.003202 |
| test_dynamic.test | RUN | 1.683643 | 9.389190 | 7.592982 | 0.002691 | 0.002551 | 0.002433 |
| test_dynamic_grammar.test | RUN | 1.797155 | 10.045454 | 7.836285 | 0.002787 | 0.003052 | 0.002798 |
| test_skip.test | RUN | 2.048035 | 10.015202 | 8.888103 | 0.002366 | 0.002558 | 0.002598 |
| multiple_defs.test | LINK | 3.370539 | 18.270030 | 15.203093 | — | — | — |
| test_basic_regex.test | COMPILE | 0.697673 | 1.486169 | 1.946057 | — | — | — |
| test_match_results.test | COMPILE | 0.464132 | 1.002124 | 1.309880 | — | — | — |
| test_regex_algorithms.test | COMPILE | 0.473566 | 1.020270 | 1.303656 | — | — | — |
| test_regex_compiler.test | COMPILE | 0.732717 | 1.595068 | 1.939009 | — | — | — |
| test_regex_constants.test | COMPILE | 0.036393 | 0.064751 | 0.068521 | — | — | — |
| test_regex_error.test | COMPILE | 0.250527 | 0.528817 | 0.677280 | — | — | — |
| test_regex_iterator.test | COMPILE | 0.482103 | 0.999945 | 1.241237 | — | — | — |
| test_regex_primitives.test | COMPILE | 0.696693 | 1.592850 | 1.595856 | — | — | — |
| test_regex_token_iterator.test | COMPILE | 0.423481 | 1.009196 | 1.221092 | — | — | — |
| test_regex_traits.test | COMPILE | 0.265446 | 0.529968 | 0.649300 | — | — | — |
| test_sub_match.test | COMPILE | 0.219869 | 0.429297 | 0.517605 | — | — | — |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 1.079× | 1.083×, 1.075× | 0.996× |
| clang | 0.957× | 0.958×, 0.955× | 1.000× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1360 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43654890423).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| c_traits.test | 3 | 0.008281s | 0.010128s | 0.008165s | byte equality observed |
| c_traits_u.test | 3 | 0.008977s | 0.010865s | 0.008732s | byte equality observed |
| misc1.test | 9 | 0.002342s | 0.002327s | 0.002312s | byte equality observed |
| misc2.test | 10 | 0.002111s | 0.002061s | 0.002059s | byte equality observed |
| regress.test | 3 | 0.010413s | 0.012264s | 0.009585s | byte equality observed |
| regress_u.test | 3 | 0.010294s | 0.012420s | 0.009466s | byte equality observed |
| test1.test | 10 | 0.001955s | 0.001884s | 0.001891s | byte equality observed |
| test10.test | 10 | 0.001938s | 0.001899s | 0.001827s | byte equality observed |
| test10u.test | 10 | 0.001913s | 0.001914s | 0.001869s | byte equality observed |
| test11.test | 10 | 0.001922s | 0.001898s | 0.001868s | byte equality observed |
| test11u.test | 10 | 0.001891s | 0.001883s | 0.001815s | byte equality observed |
| test1u.test | 10 | 0.001945s | 0.001894s | 0.001816s | byte equality observed |
| test2.test | 10 | 0.001967s | 0.002007s | 0.001906s | byte equality observed |
| test2u.test | 10 | 0.001988s | 0.001988s | 0.001956s | byte equality observed |
| test3.test | 10 | 0.001985s | 0.002009s | 0.001926s | byte equality observed |
| test3u.test | 10 | 0.002015s | 0.002023s | 0.001940s | byte equality observed |
| test4.test | 10 | 0.001971s | 0.001933s | 0.001861s | byte equality observed |
| test4u.test | 10 | 0.001965s | 0.001928s | 0.001877s | byte equality observed |
| test5.test | 10 | 0.001981s | 0.001966s | 0.001884s | byte equality observed |
| test5u.test | 8 | 0.001962s | 0.001937s | 0.001836s | byte equality observed |
| test6.test | 10 | 0.001937s | 0.001929s | 0.001890s | byte equality observed |
| test6u.test | 10 | 0.001916s | 0.001956s | 0.001840s | byte equality observed |
| test7.test | 10 | 0.001907s | 0.001949s | 0.001874s | byte equality observed |
| test7u.test | 10 | 0.001934s | 0.001963s | 0.001851s | byte equality observed |
| test8.test | 10 | 0.001912s | 0.001943s | 0.001888s | byte equality observed |
| test8u.test | 10 | 0.001905s | 0.001934s | 0.001894s | byte equality observed |
| test9.test | 10 | 0.001896s | 0.001897s | 0.001883s | byte equality observed |
| test9u.test | 10 | 0.001894s | 0.001916s | 0.001934s | byte equality observed |
| test_actions.test | 10 | 0.002281s | 0.002285s | 0.002225s | byte equality observed |
| test_assert.test | 10 | 0.001985s | 0.001982s | 0.001931s | byte equality observed |
| test_assert_with_placeholder.test | 10 | 0.001907s | 0.001877s | 0.001850s | byte equality observed |
| test_cycles.test | 10 | 0.001945s | 0.001896s | 0.001837s | byte equality observed |
| test_dynamic.test | 10 | 0.001929s | 0.001936s | 0.001856s | byte equality observed |
| test_dynamic_grammar.test | 10 | 0.002044s | 0.002047s | 0.001997s | byte equality observed |
| test_format.test | 10 | 0.002014s | 0.002003s | 0.001935s | byte equality observed |
| test_non_char.test | 10 | 0.001953s | 0.001957s | 0.001881s | byte equality observed |
| test_skip.test | 9 | 0.001874s | 0.001883s | 0.001824s | byte equality observed |
| test_static.test | 10 | 0.001736s | 0.001800s | 0.001682s | byte equality observed |
| test_symbols.test | 10 | 0.002004s | 0.002053s | 0.002001s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43654890423).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
