# libs/xpressive/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| regress.test | RUN | 3.706954 | 23.616615 | 20.168602 | 0.014543 | 0.020021 | 0.013635 |
| regress_u.test | RUN | 3.818542 | 23.894807 | 19.904080 | 0.013023 | 0.018097 | 0.013316 |
| c_traits.test | RUN | 3.697917 | 22.847137 | 18.969853 | 0.010986 | 0.015849 | 0.011248 |
| c_traits_u.test | RUN | 3.846827 | 23.916239 | 19.455143 | 0.012657 | 0.018138 | 0.011063 |
| test1.test | RUN | 1.398211 | 6.093405 | 6.179713 | 0.003155 | 0.003633 | 0.003606 |
| test2.test | RUN | 1.850646 | 8.602129 | 8.771770 | 0.003274 | 0.004037 | 0.004024 |
| test3.test | RUN | 1.830947 | 8.507783 | 8.920863 | 0.003447 | 0.004253 | 0.003643 |
| test4.test | RUN | 1.609227 | 7.050574 | 7.357237 | 0.003629 | 0.004079 | 0.003647 |
| test5.test | RUN | 1.705354 | 7.639043 | 8.024746 | 0.003276 | 0.003793 | 0.003679 |
| test6.test | RUN | 1.557778 | 6.515833 | 6.871601 | 0.003539 | 0.003612 | 0.003738 |
| test7.test | RUN | 1.510933 | 6.605208 | 6.779816 | 0.003450 | 0.003834 | 0.003246 |
| test8.test | RUN | 1.491785 | 6.411497 | 6.675976 | 0.003415 | 0.003583 | 0.003631 |
| test9.test | RUN | 1.635794 | 6.838212 | 7.325189 | 0.003517 | 0.003599 | 0.003883 |
| test10.test | RUN | 1.618478 | 6.609702 | 7.056495 | 0.003286 | 0.003183 | 0.003685 |
| test11.test | RUN | 1.544122 | 6.313531 | 6.907345 | 0.003489 | 0.003378 | 0.003927 |
| test1u.test | RUN | 1.401897 | 5.940377 | 6.039364 | 0.003550 | 0.003677 | 0.003762 |
| test2u.test | RUN | 1.911230 | 8.895492 | 9.037471 | 0.003625 | 0.003850 | 0.003838 |
| test3u.test | RUN | 1.899455 | 9.220037 | 9.305186 | 0.003406 | 0.003773 | 0.003609 |
| test4u.test | RUN | 1.662143 | 7.002398 | 7.277202 | 0.003901 | 0.004022 | 0.003616 |
| test5u.test | RUN | 1.746089 | 7.740145 | 8.181133 | 0.003295 | 0.004055 | 0.003898 |
| test6u.test | RUN | 1.658791 | 6.618705 | 6.958525 | 0.003841 | 0.004062 | 0.003766 |
| test7u.test | RUN | 1.572620 | 6.906873 | 7.187617 | 0.003498 | 0.003788 | 0.003767 |
| test8u.test | RUN | 1.528043 | 6.321602 | 6.482433 | 0.003558 | 0.003737 | 0.003723 |
| test9u.test | RUN | 1.657803 | 6.844852 | 7.533127 | 0.003554 | 0.003934 | 0.003641 |
| test10u.test | RUN | 1.650670 | 6.665487 | 7.005592 | 0.003588 | 0.003689 | 0.003820 |
| test11u.test | RUN | 1.628658 | 6.502438 | 7.158530 | 0.003747 | 0.003636 | 0.003734 |
| misc1.test | RUN | 2.859739 | 16.162287 | 14.754971 | 0.004834 | 0.005044 | 0.004729 |
| misc2.test | RUN | 2.855236 | 15.434150 | 14.379785 | 0.004197 | 0.004520 | 0.004563 |
| test_format.test | RUN | 3.001610 | 18.728931 | 16.159329 | 0.003831 | 0.003975 | 0.003369 |
| test_cycles.test | RUN | 1.359077 | 5.877353 | 5.746793 | 0.003722 | 0.003486 | 0.003864 |
| test_non_char.test | RUN | 2.482235 | 13.128706 | 12.340912 | 0.003464 | 0.003778 | 0.003832 |
| test_static.test | RUN | 1.252142 | 5.392477 | 5.024197 | 0.003620 | 0.003345 | 0.003679 |
| test_actions.test | RUN | 3.085266 | 16.000838 | 15.183136 | 0.005643 | 0.005097 | 0.005325 |
| test_assert.test | RUN | 1.749299 | 7.100337 | 7.300323 | 0.003912 | 0.004275 | 0.004003 |
| test_assert_with_placeholder.test | RUN | 1.653314 | 6.396411 | 6.681811 | 0.003602 | 0.003524 | 0.003460 |
| test_symbols.test | RUN | 3.209792 | 15.386994 | 17.218902 | 0.005417 | 0.004897 | 0.005510 |
| test_dynamic.test | RUN | 2.013408 | 10.317882 | 9.807843 | 0.003683 | 0.003519 | 0.003799 |
| test_dynamic_grammar.test | RUN | 2.138897 | 11.226537 | 10.319052 | 0.003750 | 0.004173 | 0.004093 |
| test_skip.test | RUN | 2.446952 | 11.583044 | 12.207052 | 0.003617 | 0.003844 | 0.003777 |
| multiple_defs.test | LINK | 3.937044 | 21.154380 | 19.669063 | — | — | — |
| test_basic_regex.test | COMPILE | 0.889376 | 1.832739 | 2.976045 | — | — | — |
| test_match_results.test | COMPILE | 0.571642 | 1.290327 | 1.898174 | — | — | — |
| test_regex_algorithms.test | COMPILE | 0.608738 | 1.304105 | 1.940282 | — | — | — |
| test_regex_compiler.test | COMPILE | 0.892439 | 1.977091 | 2.807670 | — | — | — |
| test_regex_constants.test | COMPILE | 0.049267 | 0.086854 | 0.093495 | — | — | — |
| test_regex_error.test | COMPILE | 0.311750 | 0.675119 | 1.045842 | — | — | — |
| test_regex_iterator.test | COMPILE | 0.591531 | 1.241156 | 1.905050 | — | — | — |
| test_regex_primitives.test | COMPILE | 0.898061 | 1.927595 | 2.615664 | — | — | — |
| test_regex_token_iterator.test | COMPILE | 0.594255 | 1.237245 | 1.868546 | — | — | — |
| test_regex_traits.test | COMPILE | 0.340924 | 0.671663 | 0.796801 | — | — | — |
| test_sub_match.test | COMPILE | 0.273159 | 0.525338 | 0.722460 | — | — | — |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 1.107× | 1.120×, 1.095× | 1.007× |
| clang | 0.936× | 0.939×, 0.934× | 0.994× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1359 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/43750858933).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| c_traits.test | 2 | 0.009918s | 0.014559s | 0.009115s | byte equality observed |
| c_traits_u.test | 2 | 0.011467s | 0.015335s | 0.009841s | byte equality observed |
| misc1.test | 7 | 0.003289s | 0.003243s | 0.003269s | byte equality observed |
| misc2.test | 8 | 0.002964s | 0.002758s | 0.002895s | byte equality observed |
| regress.test | 2 | 0.013468s | 0.016939s | 0.011504s | byte equality observed |
| regress_u.test | 2 | 0.013621s | 0.017259s | 0.011727s | byte equality observed |
| test1.test | 8 | 0.002626s | 0.002586s | 0.002530s | byte equality observed |
| test10.test | 9 | 0.002608s | 0.002496s | 0.002533s | byte equality observed |
| test10u.test | 9 | 0.002569s | 0.002626s | 0.002583s | byte equality observed |
| test11.test | 9 | 0.002636s | 0.002567s | 0.002528s | byte equality observed |
| test11u.test | 9 | 0.002648s | 0.002624s | 0.002490s | byte equality observed |
| test1u.test | 9 | 0.002597s | 0.002634s | 0.002572s | byte equality observed |
| test2.test | 8 | 0.002657s | 0.002690s | 0.002628s | byte equality observed |
| test2u.test | 8 | 0.002669s | 0.002698s | 0.002573s | byte equality observed |
| test3.test | 8 | 0.002697s | 0.002767s | 0.002568s | byte equality observed |
| test3u.test | 8 | 0.002700s | 0.002657s | 0.002645s | byte equality observed |
| test4.test | 8 | 0.002654s | 0.002674s | 0.002601s | byte equality observed |
| test4u.test | 8 | 0.002660s | 0.002638s | 0.002561s | byte equality observed |
| test5.test | 8 | 0.002663s | 0.002652s | 0.002569s | byte equality observed |
| test5u.test | 8 | 0.002661s | 0.002711s | 0.002597s | byte equality observed |
| test6.test | 8 | 0.002658s | 0.002613s | 0.002538s | byte equality observed |
| test6u.test | 9 | 0.002638s | 0.002614s | 0.002542s | byte equality observed |
| test7.test | 9 | 0.002641s | 0.002642s | 0.002520s | byte equality observed |
| test7u.test | 9 | 0.002599s | 0.002623s | 0.002567s | byte equality observed |
| test8.test | 9 | 0.002616s | 0.002577s | 0.002558s | byte equality observed |
| test8u.test | 9 | 0.002609s | 0.002550s | 0.002503s | byte equality observed |
| test9.test | 9 | 0.002584s | 0.002592s | 0.002560s | byte equality observed |
| test9u.test | 8 | 0.002632s | 0.002574s | 0.002583s | byte equality observed |
| test_actions.test | 7 | 0.003295s | 0.003245s | 0.003247s | byte equality observed |
| test_assert.test | 8 | 0.002754s | 0.002710s | 0.002681s | byte equality observed |
| test_assert_with_placeholder.test | 9 | 0.002577s | 0.002539s | 0.002507s | byte equality observed |
| test_cycles.test | 8 | 0.002648s | 0.002644s | 0.002555s | byte equality observed |
| test_dynamic.test | 8 | 0.002641s | 0.002608s | 0.002511s | byte equality observed |
| test_dynamic_grammar.test | 8 | 0.002818s | 0.002768s | 0.002702s | byte equality observed |
| test_format.test | 8 | 0.002712s | 0.002684s | 0.002640s | byte equality observed |
| test_non_char.test | 5 | 0.002604s | 0.002650s | 0.002655s | byte equality observed |
| test_skip.test | 9 | 0.002570s | 0.002513s | 0.002457s | byte equality observed |
| test_static.test | 9 | 0.002324s | 0.002390s | 0.002323s | byte equality observed |
| test_symbols.test | 6 | 0.003066s | 0.003177s | 0.002947s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/43750858933).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
