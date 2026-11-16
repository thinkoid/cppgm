# libs/xpressive/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| regress.test | RUN | 3.643644 | 23.424320 | 19.882299 | 0.014604 | 0.018856 | 0.013686 |
| regress_u.test | RUN | 3.889622 | 24.090290 | 20.173387 | 0.014543 | 0.018786 | 0.013669 |
| c_traits.test | RUN | 3.554500 | 22.891679 | 19.143043 | 0.009977 | 0.014620 | 0.011047 |
| c_traits_u.test | RUN | 3.791962 | 23.690907 | 19.635288 | 0.012210 | 0.016717 | 0.012259 |
| test1.test | RUN | 1.403454 | 6.130123 | 6.189779 | 0.003322 | 0.003819 | 0.003817 |
| test2.test | RUN | 1.877530 | 8.623603 | 8.678515 | 0.003324 | 0.003835 | 0.003898 |
| test3.test | RUN | 1.836002 | 8.577081 | 8.874958 | 0.003547 | 0.003649 | 0.003401 |
| test4.test | RUN | 1.638897 | 7.122412 | 7.319219 | 0.003431 | 0.003551 | 0.003744 |
| test5.test | RUN | 1.708719 | 7.657385 | 7.882573 | 0.003360 | 0.003997 | 0.003765 |
| test6.test | RUN | 1.568476 | 6.417923 | 6.791435 | 0.003219 | 0.003585 | 0.003803 |
| test7.test | RUN | 1.511777 | 6.592639 | 6.783772 | 0.003588 | 0.003641 | 0.003277 |
| test8.test | RUN | 1.519706 | 6.410668 | 6.702438 | 0.003427 | 0.003597 | 0.003579 |
| test9.test | RUN | 1.626336 | 6.866302 | 7.348173 | 0.003517 | 0.004205 | 0.003391 |
| test10.test | RUN | 1.578190 | 6.612715 | 6.997190 | 0.003318 | 0.003850 | 0.003787 |
| test11.test | RUN | 1.552868 | 6.298081 | 6.842638 | 0.003383 | 0.003793 | 0.003886 |
| test1u.test | RUN | 1.404767 | 6.013484 | 6.030897 | 0.003456 | 0.003577 | 0.003569 |
| test2u.test | RUN | 1.908062 | 8.878838 | 9.259428 | 0.003639 | 0.003788 | 0.003778 |
| test3u.test | RUN | 1.884585 | 9.032764 | 9.325388 | 0.003506 | 0.003860 | 0.003964 |
| test4u.test | RUN | 1.669858 | 6.934260 | 7.389093 | 0.003707 | 0.003529 | 0.003668 |
| test5u.test | RUN | 1.731581 | 7.681793 | 8.208158 | 0.003480 | 0.003797 | 0.003587 |
| test6u.test | RUN | 1.648237 | 6.512176 | 7.030673 | 0.003671 | 0.003932 | 0.003806 |
| test7u.test | RUN | 1.559328 | 6.916986 | 6.974428 | 0.003776 | 0.004017 | 0.003740 |
| test8u.test | RUN | 1.519268 | 6.461313 | 6.522296 | 0.003413 | 0.003921 | 0.003802 |
| test9u.test | RUN | 1.630022 | 6.908574 | 7.478521 | 0.003470 | 0.003744 | 0.003751 |
| test10u.test | RUN | 1.620789 | 6.411348 | 6.954822 | 0.003571 | 0.003511 | 0.003733 |
| test11u.test | RUN | 1.615994 | 6.562207 | 7.139439 | 0.003636 | 0.003945 | 0.003736 |
| misc1.test | RUN | 2.796106 | 16.242889 | 14.929661 | 0.004592 | 0.004958 | 0.004772 |
| misc2.test | RUN | 2.831595 | 15.326780 | 14.514355 | 0.004281 | 0.004457 | 0.004171 |
| test_format.test | RUN | 2.978236 | 18.718176 | 16.093211 | 0.003780 | 0.003896 | 0.003830 |
| test_cycles.test | RUN | 1.368111 | 5.905492 | 5.749775 | 0.003558 | 0.003709 | 0.003810 |
| test_non_char.test | RUN | 2.442469 | 13.180554 | 12.265225 | 0.003512 | 0.003845 | 0.003451 |
| test_static.test | RUN | 1.278320 | 5.383931 | 5.008965 | 0.003718 | 0.003887 | 0.003492 |
| test_actions.test | RUN | 3.076478 | 15.868936 | 15.307259 | 0.004653 | 0.005328 | 0.005093 |
| test_assert.test | RUN | 1.762262 | 7.002648 | 7.467462 | 0.003635 | 0.003933 | 0.004098 |
| test_assert_with_placeholder.test | RUN | 1.694463 | 6.283988 | 6.538365 | 0.003490 | 0.003554 | 0.003507 |
| test_symbols.test | RUN | 3.112357 | 15.644565 | 16.976565 | 0.005326 | 0.005021 | 0.005445 |
| test_dynamic.test | RUN | 1.972740 | 10.630390 | 9.838292 | 0.003752 | 0.003864 | 0.003805 |
| test_dynamic_grammar.test | RUN | 2.091650 | 11.125523 | 10.295325 | 0.003998 | 0.004169 | 0.004121 |
| test_skip.test | RUN | 2.491876 | 11.576760 | 11.969436 | 0.003711 | 0.003858 | 0.003770 |
| multiple_defs.test | LINK | 3.978087 | 20.897428 | 20.097376 | — | — | — |
| test_basic_regex.test | COMPILE | 0.875160 | 1.863748 | 2.931635 | — | — | — |
| test_match_results.test | COMPILE | 0.583022 | 1.298266 | 2.020262 | — | — | — |
| test_regex_algorithms.test | COMPILE | 0.581649 | 1.291004 | 1.971525 | — | — | — |
| test_regex_compiler.test | COMPILE | 0.882319 | 2.008173 | 2.904119 | — | — | — |
| test_regex_constants.test | COMPILE | 0.049801 | 0.084448 | 0.092879 | — | — | — |
| test_regex_error.test | COMPILE | 0.328853 | 0.674901 | 1.052595 | — | — | — |
| test_regex_iterator.test | COMPILE | 0.584722 | 1.267292 | 1.866443 | — | — | — |
| test_regex_primitives.test | COMPILE | 0.865648 | 1.971572 | 2.636702 | — | — | — |
| test_regex_token_iterator.test | COMPILE | 0.559843 | 1.242254 | 1.945431 | — | — | — |
| test_regex_traits.test | COMPILE | 0.336539 | 0.672691 | 1.058777 | — | — | — |
| test_sub_match.test | COMPILE | 0.265566 | 0.562611 | 0.752105 | — | — | — |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 1.110× | 1.114×, 1.107× | 0.999× |
| clang | 0.943× | 0.933×, 0.952× | 1.013× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1359 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/43785224349).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| c_traits.test | 2 | 0.010028s | 0.014486s | 0.008868s | byte equality observed |
| c_traits_u.test | 2 | 0.011523s | 0.015547s | 0.010183s | byte equality observed |
| misc1.test | 7 | 0.003282s | 0.003120s | 0.003144s | byte equality observed |
| misc2.test | 8 | 0.002891s | 0.002777s | 0.002885s | byte equality observed |
| regress.test | 2 | 0.013360s | 0.016871s | 0.010704s | byte equality observed |
| regress_u.test | 2 | 0.013654s | 0.017878s | 0.012157s | byte equality observed |
| test1.test | 8 | 0.002583s | 0.002507s | 0.002600s | byte equality observed |
| test10.test | 8 | 0.002553s | 0.002484s | 0.002459s | byte equality observed |
| test10u.test | 8 | 0.002567s | 0.002551s | 0.002489s | byte equality observed |
| test11.test | 9 | 0.002609s | 0.002526s | 0.002452s | byte equality observed |
| test11u.test | 8 | 0.002620s | 0.002588s | 0.002559s | byte equality observed |
| test1u.test | 8 | 0.002612s | 0.002629s | 0.002529s | byte equality observed |
| test2.test | 8 | 0.002658s | 0.002702s | 0.002570s | byte equality observed |
| test2u.test | 8 | 0.002685s | 0.002706s | 0.002525s | byte equality observed |
| test3.test | 8 | 0.002632s | 0.002662s | 0.002534s | byte equality observed |
| test3u.test | 8 | 0.002637s | 0.002666s | 0.002571s | byte equality observed |
| test4.test | 8 | 0.002605s | 0.002629s | 0.002558s | byte equality observed |
| test4u.test | 9 | 0.002647s | 0.002577s | 0.002498s | byte equality observed |
| test5.test | 8 | 0.002604s | 0.002644s | 0.002563s | byte equality observed |
| test5u.test | 8 | 0.002615s | 0.002708s | 0.002630s | byte equality observed |
| test6.test | 9 | 0.002637s | 0.002628s | 0.002544s | byte equality observed |
| test6u.test | 9 | 0.002576s | 0.002599s | 0.002494s | byte equality observed |
| test7.test | 8 | 0.002609s | 0.002590s | 0.002528s | byte equality observed |
| test7u.test | 8 | 0.002596s | 0.002650s | 0.002514s | byte equality observed |
| test8.test | 9 | 0.002607s | 0.002562s | 0.002537s | byte equality observed |
| test8u.test | 9 | 0.002620s | 0.002567s | 0.002497s | byte equality observed |
| test9.test | 9 | 0.002606s | 0.002634s | 0.002553s | byte equality observed |
| test9u.test | 9 | 0.002636s | 0.002595s | 0.002536s | byte equality observed |
| test_actions.test | 7 | 0.003317s | 0.003366s | 0.003167s | byte equality observed |
| test_assert.test | 8 | 0.002756s | 0.002728s | 0.002614s | byte equality observed |
| test_assert_with_placeholder.test | 9 | 0.002558s | 0.002506s | 0.002477s | byte equality observed |
| test_cycles.test | 8 | 0.002595s | 0.002607s | 0.002586s | byte equality observed |
| test_dynamic.test | 8 | 0.002607s | 0.002502s | 0.002511s | byte equality observed |
| test_dynamic_grammar.test | 7 | 0.002814s | 0.002753s | 0.002742s | byte equality observed |
| test_format.test | 8 | 0.002694s | 0.002673s | 0.002589s | byte equality observed |
| test_non_char.test | 9 | 0.002712s | 0.002627s | 0.002594s | byte equality observed |
| test_skip.test | 8 | 0.002559s | 0.002512s | 0.002475s | byte equality observed |
| test_static.test | 9 | 0.002281s | 0.002287s | 0.002322s | byte equality observed |
| test_symbols.test | 7 | 0.002770s | 0.003132s | 0.002735s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/43785224349).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
