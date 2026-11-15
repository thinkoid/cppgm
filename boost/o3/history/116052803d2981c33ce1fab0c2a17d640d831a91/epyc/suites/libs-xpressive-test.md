# libs/xpressive/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| regress.test | RUN | 2.450559 | 14.359511 | 10.741251 | 0.009099 | 0.010524 | 0.007444 |
| regress_u.test | RUN | 2.680199 | 14.900499 | 10.893681 | 0.008677 | 0.010237 | 0.007794 |
| c_traits.test | RUN | 2.521955 | 14.124547 | 10.334299 | 0.007292 | 0.008831 | 0.006969 |
| c_traits_u.test | RUN | 2.673794 | 14.793177 | 10.825967 | 0.007419 | 0.009670 | 0.007289 |
| test1.test | RUN | 0.954633 | 3.671084 | 2.931398 | 0.002683 | 0.002747 | 0.002969 |
| test2.test | RUN | 1.304466 | 5.100582 | 4.650086 | 0.002768 | 0.002893 | 0.002488 |
| test3.test | RUN | 1.304874 | 5.165515 | 4.678009 | 0.003180 | 0.002892 | 0.002835 |
| test4.test | RUN | 1.103593 | 4.244540 | 3.764346 | 0.003186 | 0.002866 | 0.002786 |
| test5.test | RUN | 1.174454 | 4.541477 | 4.135797 | 0.002742 | 0.002863 | 0.002796 |
| test6.test | RUN | 1.057508 | 3.861825 | 3.504878 | 0.002971 | 0.002827 | 0.002691 |
| test7.test | RUN | 1.041737 | 3.914608 | 3.388030 | 0.002720 | 0.002923 | 0.002793 |
| test8.test | RUN | 1.025622 | 3.791516 | 3.179231 | 0.002711 | 0.002813 | 0.002650 |
| test9.test | RUN | 1.122394 | 4.141134 | 3.710687 | 0.003048 | 0.002881 | 0.002744 |
| test10.test | RUN | 1.065318 | 3.925037 | 3.407155 | 0.003024 | 0.002924 | 0.002750 |
| test11.test | RUN | 1.050931 | 3.786740 | 3.423045 | 0.002707 | 0.002976 | 0.002661 |
| test1u.test | RUN | 0.962483 | 3.505152 | 2.890220 | 0.003112 | 0.002660 | 0.002734 |
| test2u.test | RUN | 1.303362 | 5.346982 | 4.527293 | 0.003153 | 0.002892 | 0.002801 |
| test3u.test | RUN | 1.288476 | 5.466874 | 4.648553 | 0.003110 | 0.002887 | 0.002783 |
| test4u.test | RUN | 1.090615 | 4.282465 | 3.684659 | 0.003254 | 0.002941 | 0.002739 |
| test5u.test | RUN | 1.182844 | 4.762446 | 4.192456 | 0.002943 | 0.003055 | 0.002853 |
| test6u.test | RUN | 1.095411 | 3.904970 | 3.588115 | 0.003020 | 0.003100 | 0.002810 |
| test7u.test | RUN | 1.033364 | 4.184937 | 3.638321 | 0.003033 | 0.002898 | 0.002593 |
| test8u.test | RUN | 1.000443 | 3.904669 | 3.335276 | 0.003273 | 0.003058 | 0.002602 |
| test9u.test | RUN | 1.080532 | 4.221186 | 3.808964 | 0.003150 | 0.003010 | 0.002590 |
| test10u.test | RUN | 1.057577 | 4.021871 | 3.313429 | 0.003048 | 0.002916 | 0.002631 |
| test11u.test | RUN | 1.054403 | 4.011345 | 3.386458 | 0.003185 | 0.003077 | 0.002536 |
| misc1.test | RUN | 1.842952 | 10.381910 | 7.818561 | 0.003912 | 0.003698 | 0.003561 |
| misc2.test | RUN | 1.953227 | 9.851946 | 7.561036 | 0.003402 | 0.003342 | 0.003030 |
| test_format.test | RUN | 1.989313 | 12.033712 | 9.132303 | 0.003179 | 0.002611 | 0.002689 |
| test_cycles.test | RUN | 0.895931 | 3.590467 | 2.901571 | 0.002979 | 0.003020 | 0.002780 |
| test_non_char.test | RUN | 1.660687 | 8.371598 | 6.762064 | 0.003145 | 0.002985 | 0.002661 |
| test_static.test | RUN | 0.810839 | 3.300384 | 2.704445 | 0.003096 | 0.002799 | 0.002974 |
| test_actions.test | RUN | 2.073596 | 9.896724 | 8.408204 | 0.003836 | 0.003696 | 0.003572 |
| test_assert.test | RUN | 1.139715 | 4.165513 | 3.712805 | 0.003760 | 0.003076 | 0.002935 |
| test_assert_with_placeholder.test | RUN | 1.102641 | 3.813290 | 3.285974 | 0.002739 | 0.002815 | 0.002768 |
| test_symbols.test | RUN | 2.159799 | 9.529604 | 8.973440 | 0.004192 | 0.003433 | 0.003796 |
| test_dynamic.test | RUN | 1.313550 | 6.461493 | 5.248025 | 0.003333 | 0.002707 | 0.002877 |
| test_dynamic_grammar.test | RUN | 1.365014 | 6.748904 | 5.461787 | 0.003411 | 0.003075 | 0.002864 |
| test_skip.test | RUN | 1.634103 | 7.143639 | 6.215767 | 0.003091 | 0.002990 | 0.002601 |
| multiple_defs.test | LINK | 2.577808 | 12.776865 | 10.445680 | — | — | — |
| test_basic_regex.test | COMPILE | 0.561156 | 0.964448 | 1.275377 | — | — | — |
| test_match_results.test | COMPILE | 0.378820 | 0.706196 | 0.907886 | — | — | — |
| test_regex_algorithms.test | COMPILE | 0.387650 | 0.726963 | 0.874709 | — | — | — |
| test_regex_compiler.test | COMPILE | 0.573238 | 1.166005 | 1.304073 | — | — | — |
| test_regex_constants.test | COMPILE | 0.030635 | 0.051511 | 0.052568 | — | — | — |
| test_regex_error.test | COMPILE | 0.211727 | 0.375634 | 0.464854 | — | — | — |
| test_regex_iterator.test | COMPILE | 0.376378 | 0.730801 | 0.834510 | — | — | — |
| test_regex_primitives.test | COMPILE | 0.560908 | 1.160954 | 1.281272 | — | — | — |
| test_regex_token_iterator.test | COMPILE | 0.371084 | 0.715055 | 0.832920 | — | — | — |
| test_regex_traits.test | COMPILE | 0.219308 | 0.369099 | 0.438253 | — | — | — |
| test_sub_match.test | COMPILE | 0.179978 | 0.304145 | 0.308457 | — | — | — |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 1.126×† | 1.105×, 1.147× | 0.882× |
| clang | 0.967×† | 0.971×, 0.963× | 1.062× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1364 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43666517673).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| c_traits.test | 4 | 0.005380s | 0.007674s | 0.004851s | byte equality observed |
| c_traits_u.test | 3 | 0.005847s | 0.008065s | 0.005104s | byte equality observed |
| misc1.test | 10 | 0.002099s | 0.002147s | 0.001882s | byte equality observed |
| misc2.test | 10 | 0.001813s | 0.001896s | 0.001677s | byte equality observed |
| regress.test | 3 | 0.006382s | 0.008692s | 0.005489s | byte equality observed |
| regress_u.test | 3 | 0.006498s | 0.008906s | 0.005689s | byte equality observed |
| test1.test | 10 | 0.001680s | 0.001722s | 0.001573s | byte equality observed |
| test10.test | 10 | 0.001683s | 0.001661s | 0.001601s | byte equality observed |
| test10u.test | 10 | 0.001616s | 0.001667s | 0.001632s | byte equality observed |
| test11.test | 10 | 0.001627s | 0.001652s | 0.001635s | byte equality observed |
| test11u.test | 10 | 0.001632s | 0.001679s | 0.001602s | byte equality observed |
| test1u.test | 10 | 0.001599s | 0.001670s | 0.001623s | byte equality observed |
| test2.test | 10 | 0.001672s | 0.001707s | 0.001641s | byte equality observed |
| test2u.test | 10 | 0.001650s | 0.001753s | 0.001682s | byte equality observed |
| test3.test | 10 | 0.001684s | 0.001729s | 0.001669s | byte equality observed |
| test3u.test | 10 | 0.001624s | 0.001751s | 0.001680s | byte equality observed |
| test4.test | 10 | 0.001657s | 0.001707s | 0.001612s | byte equality observed |
| test4u.test | 10 | 0.001703s | 0.001706s | 0.001637s | byte equality observed |
| test5.test | 10 | 0.001724s | 0.001700s | 0.001654s | byte equality observed |
| test5u.test | 10 | 0.001719s | 0.001719s | 0.001663s | byte equality observed |
| test6.test | 10 | 0.001670s | 0.001679s | 0.001646s | byte equality observed |
| test6u.test | 10 | 0.001673s | 0.001709s | 0.001639s | byte equality observed |
| test7.test | 10 | 0.001690s | 0.001682s | 0.001647s | byte equality observed |
| test7u.test | 10 | 0.001674s | 0.001720s | 0.001653s | byte equality observed |
| test8.test | 10 | 0.001663s | 0.001712s | 0.001630s | byte equality observed |
| test8u.test | 10 | 0.001703s | 0.001695s | 0.001645s | byte equality observed |
| test9.test | 10 | 0.001711s | 0.001699s | 0.001644s | byte equality observed |
| test9u.test | 10 | 0.001696s | 0.001741s | 0.001625s | byte equality observed |
| test_actions.test | 10 | 0.002126s | 0.002166s | 0.002064s | byte equality observed |
| test_assert.test | 10 | 0.001750s | 0.001794s | 0.001673s | byte equality observed |
| test_assert_with_placeholder.test | 10 | 0.001682s | 0.001698s | 0.001606s | byte equality observed |
| test_cycles.test | 10 | 0.001705s | 0.001715s | 0.001628s | byte equality observed |
| test_dynamic.test | 10 | 0.001689s | 0.001687s | 0.001654s | byte equality observed |
| test_dynamic_grammar.test | 10 | 0.001788s | 0.001831s | 0.001707s | byte equality observed |
| test_format.test | 10 | 0.001755s | 0.001769s | 0.001693s | byte equality observed |
| test_non_char.test | 10 | 0.001780s | 0.001760s | 0.001692s | byte equality observed |
| test_skip.test | 10 | 0.001687s | 0.001653s | 0.001597s | byte equality observed |
| test_static.test | 10 | 0.001597s | 0.001591s | 0.001538s | byte equality observed |
| test_symbols.test | 10 | 0.001982s | 0.001993s | 0.001922s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43666517673).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
