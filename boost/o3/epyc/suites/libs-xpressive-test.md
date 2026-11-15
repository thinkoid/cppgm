# libs/xpressive/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| regress.test | RUN | 3.673133 | 23.750896 | 20.030223 | 0.014208 | 0.019854 | 0.013781 |
| regress_u.test | RUN | 3.790323 | 24.178702 | 19.673566 | 0.010958 | 0.018728 | 0.014316 |
| c_traits.test | RUN | 3.554263 | 23.011507 | 19.169358 | 0.011011 | 0.016378 | 0.010775 |
| c_traits_u.test | RUN | 3.977322 | 24.131164 | 20.157443 | 0.012562 | 0.018236 | 0.011661 |
| test1.test | RUN | 1.431844 | 6.131755 | 6.292743 | 0.003364 | 0.003949 | 0.003741 |
| test2.test | RUN | 1.883569 | 8.671067 | 8.890562 | 0.003654 | 0.003791 | 0.003567 |
| test3.test | RUN | 1.873377 | 8.703516 | 8.886609 | 0.003701 | 0.003802 | 0.003904 |
| test4.test | RUN | 1.663621 | 7.205029 | 7.454936 | 0.003475 | 0.003839 | 0.003675 |
| test5.test | RUN | 1.747783 | 7.754495 | 7.935261 | 0.003673 | 0.003810 | 0.003492 |
| test6.test | RUN | 1.565023 | 6.590664 | 6.913563 | 0.003778 | 0.003571 | 0.003898 |
| test7.test | RUN | 1.526503 | 6.686190 | 6.959538 | 0.003414 | 0.003751 | 0.003795 |
| test8.test | RUN | 1.518672 | 6.416544 | 6.793809 | 0.003643 | 0.004105 | 0.003947 |
| test9.test | RUN | 1.648759 | 7.015354 | 7.420907 | 0.003651 | 0.003714 | 0.003876 |
| test10.test | RUN | 1.623513 | 6.673121 | 6.889095 | 0.003355 | 0.004086 | 0.003659 |
| test11.test | RUN | 1.556907 | 6.438950 | 6.885717 | 0.003395 | 0.003901 | 0.003678 |
| test1u.test | RUN | 1.471549 | 6.092657 | 6.108220 | 0.003629 | 0.003961 | 0.003783 |
| test2u.test | RUN | 1.943639 | 9.041531 | 9.153712 | 0.003752 | 0.004211 | 0.003854 |
| test3u.test | RUN | 1.922521 | 9.241615 | 9.348719 | 0.003446 | 0.004349 | 0.003854 |
| test4u.test | RUN | 1.634399 | 7.032875 | 7.498824 | 0.003748 | 0.003546 | 0.003847 |
| test5u.test | RUN | 1.792009 | 7.929240 | 8.398132 | 0.003769 | 0.004129 | 0.003903 |
| test6u.test | RUN | 1.649251 | 6.672900 | 7.003684 | 0.003634 | 0.003817 | 0.003822 |
| test7u.test | RUN | 1.566773 | 6.875969 | 7.151999 | 0.003889 | 0.004351 | 0.003721 |
| test8u.test | RUN | 1.495157 | 6.552598 | 6.781914 | 0.003459 | 0.004107 | 0.003956 |
| test9u.test | RUN | 1.614846 | 6.995830 | 7.592896 | 0.003420 | 0.003864 | 0.003533 |
| test10u.test | RUN | 1.635917 | 6.562199 | 7.263742 | 0.003718 | 0.003481 | 0.004030 |
| test11u.test | RUN | 1.627394 | 6.663725 | 7.241323 | 0.003946 | 0.004080 | 0.004016 |
| misc1.test | RUN | 2.849811 | 16.341507 | 15.214179 | 0.004688 | 0.005267 | 0.005142 |
| misc2.test | RUN | 2.881141 | 15.436837 | 14.671968 | 0.004125 | 0.004552 | 0.004460 |
| test_format.test | RUN | 2.936219 | 18.907141 | 16.677331 | 0.003808 | 0.004051 | 0.004040 |
| test_cycles.test | RUN | 1.377050 | 5.995663 | 5.793902 | 0.003661 | 0.003750 | 0.003875 |
| test_non_char.test | RUN | 2.521003 | 13.247368 | 12.353786 | 0.003930 | 0.003752 | 0.004007 |
| test_static.test | RUN | 1.281981 | 5.497852 | 5.238359 | 0.004955 | 0.003627 | 0.003674 |
| test_actions.test | RUN | 3.088013 | 16.096543 | 15.367666 | 0.004970 | 0.005618 | 0.005393 |
| test_assert.test | RUN | 1.808782 | 6.926273 | 7.496872 | 0.003906 | 0.004224 | 0.003565 |
| test_assert_with_placeholder.test | RUN | 1.683921 | 6.556077 | 6.795788 | 0.003792 | 0.003713 | 0.003186 |
| test_symbols.test | RUN | 3.181494 | 15.601436 | 17.514817 | 0.005036 | 0.005174 | 0.005675 |
| test_dynamic.test | RUN | 1.994312 | 10.650864 | 9.975532 | 0.003744 | 0.003770 | 0.003811 |
| test_dynamic_grammar.test | RUN | 2.041265 | 11.357732 | 10.355866 | 0.003834 | 0.003894 | 0.004213 |
| test_skip.test | RUN | 2.498678 | 11.556406 | 11.834372 | 0.003673 | 0.003940 | 0.003810 |
| multiple_defs.test | LINK | 3.877712 | 20.906908 | 20.105854 | — | — | — |
| test_basic_regex.test | COMPILE | 0.891947 | 1.764962 | 2.916550 | — | — | — |
| test_match_results.test | COMPILE | 0.591175 | 1.308807 | 2.048933 | — | — | — |
| test_regex_algorithms.test | COMPILE | 0.588708 | 1.299264 | 2.076300 | — | — | — |
| test_regex_compiler.test | COMPILE | 0.912978 | 1.992240 | 2.929369 | — | — | — |
| test_regex_constants.test | COMPILE | 0.048899 | 0.085424 | 0.099550 | — | — | — |
| test_regex_error.test | COMPILE | 0.318180 | 0.680125 | 1.074103 | — | — | — |
| test_regex_iterator.test | COMPILE | 0.581934 | 1.278394 | 1.885208 | — | — | — |
| test_regex_primitives.test | COMPILE | 0.874605 | 1.944980 | 2.407550 | — | — | — |
| test_regex_token_iterator.test | COMPILE | 0.517298 | 1.255562 | 1.724552 | — | — | — |
| test_regex_traits.test | COMPILE | 0.329593 | 0.657983 | 1.057666 | — | — | — |
| test_sub_match.test | COMPILE | 0.270243 | 0.508384 | 0.758772 | — | — | — |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 1.128× | 1.136×, 1.121× | 1.002× |
| clang | 0.928× | 0.935×, 0.920× | 0.998× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1361 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43664060660).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| c_traits.test | 2 | 0.010455s | 0.015098s | 0.009458s | byte equality observed |
| c_traits_u.test | 2 | 0.011241s | 0.015681s | 0.009830s | byte equality observed |
| misc1.test | 7 | 0.003392s | 0.003270s | 0.003209s | byte equality observed |
| misc2.test | 8 | 0.003015s | 0.002838s | 0.002865s | byte equality observed |
| regress.test | 2 | 0.013754s | 0.017372s | 0.011272s | byte equality observed |
| regress_u.test | 2 | 0.013934s | 0.017332s | 0.012030s | byte equality observed |
| test1.test | 8 | 0.002679s | 0.002655s | 0.002637s | byte equality observed |
| test10.test | 8 | 0.002647s | 0.002559s | 0.002567s | byte equality observed |
| test10u.test | 9 | 0.002652s | 0.002630s | 0.002535s | byte equality observed |
| test11.test | 8 | 0.002629s | 0.002605s | 0.002503s | byte equality observed |
| test11u.test | 8 | 0.002647s | 0.002628s | 0.002542s | byte equality observed |
| test1u.test | 8 | 0.002600s | 0.002713s | 0.002617s | byte equality observed |
| test2.test | 8 | 0.002660s | 0.002729s | 0.002613s | byte equality observed |
| test2u.test | 8 | 0.002750s | 0.002766s | 0.002631s | byte equality observed |
| test3.test | 8 | 0.002677s | 0.002771s | 0.002627s | byte equality observed |
| test3u.test | 8 | 0.002708s | 0.002756s | 0.002645s | byte equality observed |
| test4.test | 8 | 0.002640s | 0.002659s | 0.002571s | byte equality observed |
| test4u.test | 8 | 0.002642s | 0.002641s | 0.002568s | byte equality observed |
| test5.test | 8 | 0.002662s | 0.002709s | 0.002624s | byte equality observed |
| test5u.test | 8 | 0.002659s | 0.002658s | 0.002598s | byte equality observed |
| test6.test | 8 | 0.002644s | 0.002629s | 0.002532s | byte equality observed |
| test6u.test | 8 | 0.002648s | 0.002661s | 0.002564s | byte equality observed |
| test7.test | 8 | 0.002641s | 0.002650s | 0.002553s | byte equality observed |
| test7u.test | 8 | 0.002668s | 0.002636s | 0.002569s | byte equality observed |
| test8.test | 8 | 0.002612s | 0.002623s | 0.002592s | byte equality observed |
| test8u.test | 8 | 0.002609s | 0.002616s | 0.002565s | byte equality observed |
| test9.test | 8 | 0.002662s | 0.002661s | 0.002536s | byte equality observed |
| test9u.test | 9 | 0.002647s | 0.002673s | 0.002531s | byte equality observed |
| test_actions.test | 7 | 0.003317s | 0.003352s | 0.003243s | byte equality observed |
| test_assert.test | 8 | 0.002782s | 0.002756s | 0.002748s | byte equality observed |
| test_assert_with_placeholder.test | 9 | 0.002651s | 0.002596s | 0.002508s | byte equality observed |
| test_cycles.test | 9 | 0.002611s | 0.002620s | 0.002596s | byte equality observed |
| test_dynamic.test | 8 | 0.002600s | 0.002614s | 0.002571s | byte equality observed |
| test_dynamic_grammar.test | 8 | 0.002805s | 0.002844s | 0.002740s | byte equality observed |
| test_format.test | 8 | 0.002744s | 0.002793s | 0.002665s | byte equality observed |
| test_non_char.test | 8 | 0.002741s | 0.002730s | 0.002664s | byte equality observed |
| test_skip.test | 9 | 0.002601s | 0.002492s | 0.002502s | byte equality observed |
| test_static.test | 8 | 0.002478s | 0.002491s | 0.002496s | byte equality observed |
| test_symbols.test | 7 | 0.003030s | 0.003013s | 0.002677s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43664060660).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
