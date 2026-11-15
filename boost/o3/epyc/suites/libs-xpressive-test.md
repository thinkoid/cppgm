# libs/xpressive/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| regress.test | RUN | 3.744516 | 23.963803 | 20.493336 | 0.014899 | 0.019815 | 0.013686 |
| regress_u.test | RUN | 3.965552 | 24.362355 | 20.231932 | 0.015680 | 0.018482 | 0.014867 |
| c_traits.test | RUN | 3.637165 | 23.291431 | 19.502296 | 0.010797 | 0.015301 | 0.010662 |
| c_traits_u.test | RUN | 3.861184 | 24.164697 | 20.058089 | 0.012322 | 0.018295 | 0.012189 |
| test1.test | RUN | 1.429510 | 6.144359 | 6.364231 | 0.003457 | 0.003864 | 0.003721 |
| test2.test | RUN | 1.910725 | 8.604201 | 8.791927 | 0.003549 | 0.004021 | 0.003644 |
| test3.test | RUN | 1.886182 | 8.828952 | 9.005284 | 0.003532 | 0.004066 | 0.003744 |
| test4.test | RUN | 1.620690 | 7.198729 | 7.489505 | 0.003476 | 0.003794 | 0.003619 |
| test5.test | RUN | 1.768500 | 7.838417 | 8.018008 | 0.003460 | 0.003632 | 0.003589 |
| test6.test | RUN | 1.606563 | 6.556786 | 6.854283 | 0.003457 | 0.003864 | 0.003703 |
| test7.test | RUN | 1.526122 | 6.749159 | 7.001136 | 0.003386 | 0.003870 | 0.003745 |
| test8.test | RUN | 1.564733 | 6.446323 | 6.751521 | 0.003796 | 0.003751 | 0.003760 |
| test9.test | RUN | 1.661949 | 7.030860 | 7.538173 | 0.003284 | 0.003372 | 0.003629 |
| test10.test | RUN | 1.627418 | 6.754869 | 7.037302 | 0.003290 | 0.003404 | 0.003877 |
| test11.test | RUN | 1.562663 | 6.442937 | 7.066361 | 0.003788 | 0.003638 | 0.003994 |
| test1u.test | RUN | 1.443021 | 6.080917 | 6.157671 | 0.003434 | 0.003689 | 0.003309 |
| test2u.test | RUN | 1.955236 | 8.827713 | 9.198914 | 0.003826 | 0.003800 | 0.003806 |
| test3u.test | RUN | 1.915290 | 9.013104 | 9.284056 | 0.003427 | 0.003859 | 0.004066 |
| test4u.test | RUN | 1.677027 | 7.080721 | 7.500893 | 0.003307 | 0.003600 | 0.003879 |
| test5u.test | RUN | 1.750509 | 8.005973 | 8.529988 | 0.003362 | 0.003834 | 0.003956 |
| test6u.test | RUN | 1.666995 | 6.535062 | 7.216387 | 0.003700 | 0.004114 | 0.003837 |
| test7u.test | RUN | 1.616614 | 6.909019 | 7.224403 | 0.003684 | 0.003721 | 0.003858 |
| test8u.test | RUN | 1.522318 | 6.500882 | 6.901016 | 0.003702 | 0.004037 | 0.003760 |
| test9u.test | RUN | 1.677970 | 6.969866 | 7.648889 | 0.003799 | 0.003663 | 0.003192 |
| test10u.test | RUN | 1.667194 | 6.685557 | 7.062515 | 0.003797 | 0.003470 | 0.003573 |
| test11u.test | RUN | 1.622475 | 6.580769 | 7.356894 | 0.003933 | 0.003945 | 0.003899 |
| misc1.test | RUN | 2.863162 | 16.552268 | 15.313792 | 0.004928 | 0.005125 | 0.005115 |
| misc2.test | RUN | 2.879429 | 15.418160 | 14.881980 | 0.004306 | 0.004372 | 0.004259 |
| test_format.test | RUN | 2.941513 | 19.055984 | 16.531823 | 0.003820 | 0.003686 | 0.003439 |
| test_cycles.test | RUN | 1.387148 | 5.974538 | 5.733360 | 0.003624 | 0.003833 | 0.003722 |
| test_non_char.test | RUN | 2.522176 | 13.309037 | 12.570766 | 0.003867 | 0.004015 | 0.004096 |
| test_static.test | RUN | 1.332503 | 5.442416 | 5.241425 | 0.003676 | 0.003570 | 0.003617 |
| test_actions.test | RUN | 3.029728 | 16.000147 | 15.460264 | 0.005051 | 0.004886 | 0.005090 |
| test_assert.test | RUN | 1.772020 | 6.965212 | 7.376455 | 0.004036 | 0.004101 | 0.003190 |
| test_assert_with_placeholder.test | RUN | 1.648718 | 6.406407 | 6.854222 | 0.003656 | 0.003533 | 0.003235 |
| test_symbols.test | RUN | 3.224981 | 15.565831 | 17.274112 | 0.005044 | 0.004921 | 0.005498 |
| test_dynamic.test | RUN | 2.001431 | 10.540759 | 10.260161 | 0.003762 | 0.003901 | 0.003424 |
| test_dynamic_grammar.test | RUN | 2.080205 | 11.186049 | 10.303005 | 0.004273 | 0.004153 | 0.003787 |
| test_skip.test | RUN | 2.505157 | 11.530110 | 12.090189 | 0.003815 | 0.003684 | 0.003936 |
| multiple_defs.test | LINK | 3.933532 | 21.181087 | 20.251335 | — | — | — |
| test_basic_regex.test | COMPILE | 0.891702 | 1.852654 | 2.987199 | — | — | — |
| test_match_results.test | COMPILE | 0.600950 | 1.319456 | 2.078151 | — | — | — |
| test_regex_algorithms.test | COMPILE | 0.592270 | 1.304141 | 2.033101 | — | — | — |
| test_regex_compiler.test | COMPILE | 0.895703 | 2.008062 | 2.882945 | — | — | — |
| test_regex_constants.test | COMPILE | 0.049984 | 0.086431 | 0.097799 | — | — | — |
| test_regex_error.test | COMPILE | 0.330178 | 0.685764 | 1.081928 | — | — | — |
| test_regex_iterator.test | COMPILE | 0.590281 | 1.263061 | 1.939363 | — | — | — |
| test_regex_primitives.test | COMPILE | 0.829260 | 1.953493 | 2.402731 | — | — | — |
| test_regex_token_iterator.test | COMPILE | 0.574211 | 1.243588 | 1.867406 | — | — | — |
| test_regex_traits.test | COMPILE | 0.336471 | 0.678205 | 1.078004 | — | — | — |
| test_sub_match.test | COMPILE | 0.272644 | 0.467426 | 0.764030 | — | — | — |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 1.112× | 1.114×, 1.110× | 0.997× |
| clang | 0.939× | 0.948×, 0.930× | 0.992× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1359 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43674678137).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| c_traits.test | 2 | 0.010327s | 0.014426s | 0.009074s | byte equality observed |
| c_traits_u.test | 2 | 0.011595s | 0.015625s | 0.010149s | byte equality observed |
| misc1.test | 7 | 0.003279s | 0.003213s | 0.003227s | byte equality observed |
| misc2.test | 8 | 0.002964s | 0.002819s | 0.002769s | byte equality observed |
| regress.test | 2 | 0.013366s | 0.016705s | 0.011447s | byte equality observed |
| regress_u.test | 2 | 0.013499s | 0.017340s | 0.011930s | byte equality observed |
| test1.test | 8 | 0.002667s | 0.002599s | 0.002556s | byte equality observed |
| test10.test | 8 | 0.002594s | 0.002593s | 0.002568s | byte equality observed |
| test10u.test | 7 | 0.002584s | 0.002585s | 0.002578s | byte equality observed |
| test11.test | 8 | 0.002605s | 0.002625s | 0.002589s | byte equality observed |
| test11u.test | 8 | 0.002648s | 0.002541s | 0.002547s | byte equality observed |
| test1u.test | 6 | 0.002664s | 0.002650s | 0.002559s | byte equality observed |
| test2.test | 6 | 0.002688s | 0.002740s | 0.002623s | byte equality observed |
| test2u.test | 8 | 0.002716s | 0.002802s | 0.002627s | byte equality observed |
| test3.test | 8 | 0.002682s | 0.002699s | 0.002669s | byte equality observed |
| test3u.test | 8 | 0.002699s | 0.002743s | 0.002642s | byte equality observed |
| test4.test | 8 | 0.002660s | 0.002620s | 0.002549s | byte equality observed |
| test4u.test | 8 | 0.002705s | 0.002608s | 0.002599s | byte equality observed |
| test5.test | 8 | 0.002693s | 0.002676s | 0.002620s | byte equality observed |
| test5u.test | 7 | 0.002739s | 0.002711s | 0.002584s | byte equality observed |
| test6.test | 7 | 0.002594s | 0.002598s | 0.002583s | byte equality observed |
| test6u.test | 7 | 0.002680s | 0.002665s | 0.002581s | byte equality observed |
| test7.test | 7 | 0.002665s | 0.002656s | 0.002489s | byte equality observed |
| test7u.test | 8 | 0.002620s | 0.002586s | 0.002518s | byte equality observed |
| test8.test | 7 | 0.002619s | 0.002653s | 0.002576s | byte equality observed |
| test8u.test | 8 | 0.002634s | 0.002694s | 0.002595s | byte equality observed |
| test9.test | 8 | 0.002648s | 0.002652s | 0.002567s | byte equality observed |
| test9u.test | 8 | 0.002663s | 0.002603s | 0.002578s | byte equality observed |
| test_actions.test | 7 | 0.003364s | 0.003366s | 0.003204s | byte equality observed |
| test_assert.test | 8 | 0.002751s | 0.002783s | 0.002743s | byte equality observed |
| test_assert_with_placeholder.test | 9 | 0.002558s | 0.002561s | 0.002532s | byte equality observed |
| test_cycles.test | 8 | 0.002661s | 0.002625s | 0.002592s | byte equality observed |
| test_dynamic.test | 9 | 0.002624s | 0.002532s | 0.002558s | byte equality observed |
| test_dynamic_grammar.test | 8 | 0.002827s | 0.002762s | 0.002704s | byte equality observed |
| test_format.test | 8 | 0.002743s | 0.002752s | 0.002661s | byte equality observed |
| test_non_char.test | 8 | 0.002764s | 0.002704s | 0.002623s | byte equality observed |
| test_skip.test | 9 | 0.002482s | 0.002539s | 0.002460s | byte equality observed |
| test_static.test | 9 | 0.002307s | 0.002251s | 0.002268s | byte equality observed |
| test_symbols.test | 6 | 0.002940s | 0.003034s | 0.002984s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43674678137).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
