# libs/xpressive/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| regress.test | RUN | 3.488410 | 22.567359 | 16.647266 | 0.012354 | 0.014558 | 0.010082 |
| regress_u.test | RUN | 3.682790 | 23.287479 | 16.956234 | 0.012984 | 0.014441 | 0.011952 |
| c_traits.test | RUN | 3.419803 | 22.061636 | 16.139692 | 0.008560 | 0.012142 | 0.009766 |
| c_traits_u.test | RUN | 3.710699 | 22.921409 | 16.717981 | 0.010835 | 0.013302 | 0.010413 |
| test1.test | RUN | 1.225839 | 5.632855 | 4.894488 | 0.002631 | 0.002854 | 0.003025 |
| test2.test | RUN | 1.678154 | 7.979396 | 7.057763 | 0.002784 | 0.003108 | 0.002905 |
| test3.test | RUN | 1.705026 | 8.056450 | 7.166527 | 0.002729 | 0.003042 | 0.002886 |
| test4.test | RUN | 1.444988 | 6.609489 | 5.865284 | 0.002877 | 0.002881 | 0.002792 |
| test5.test | RUN | 1.523754 | 7.142734 | 6.196665 | 0.002784 | 0.003050 | 0.002843 |
| test6.test | RUN | 1.374411 | 5.920523 | 5.278622 | 0.002670 | 0.002971 | 0.002836 |
| test7.test | RUN | 1.331820 | 6.097299 | 5.386677 | 0.002800 | 0.002811 | 0.002943 |
| test8.test | RUN | 1.331152 | 5.885306 | 5.252114 | 0.002708 | 0.002949 | 0.002749 |
| test9.test | RUN | 1.443695 | 6.488995 | 5.796056 | 0.002827 | 0.002965 | 0.002904 |
| test10.test | RUN | 1.390012 | 6.120296 | 5.385332 | 0.002615 | 0.002822 | 0.002791 |
| test11.test | RUN | 1.321916 | 5.845623 | 5.391778 | 0.002729 | 0.002841 | 0.002899 |
| test1u.test | RUN | 1.218020 | 5.566329 | 4.636924 | 0.002880 | 0.002968 | 0.002793 |
| test2u.test | RUN | 1.670313 | 8.200067 | 7.374886 | 0.003005 | 0.003217 | 0.002859 |
| test3u.test | RUN | 1.698858 | 8.382745 | 7.509041 | 0.002682 | 0.003040 | 0.002993 |
| test4u.test | RUN | 1.415235 | 6.508356 | 5.880477 | 0.002767 | 0.002994 | 0.002853 |
| test5u.test | RUN | 1.545903 | 7.277077 | 6.638779 | 0.002902 | 0.002887 | 0.002814 |
| test6u.test | RUN | 1.387659 | 6.018347 | 5.552300 | 0.003430 | 0.002952 | 0.002699 |
| test7u.test | RUN | 1.376202 | 6.383326 | 5.579198 | 0.002942 | 0.002837 | 0.002946 |
| test8u.test | RUN | 1.318795 | 5.906761 | 5.252952 | 0.003236 | 0.003303 | 0.002791 |
| test9u.test | RUN | 1.415224 | 6.422254 | 6.016934 | 0.002842 | 0.003043 | 0.002855 |
| test10u.test | RUN | 1.402173 | 6.047117 | 5.413277 | 0.002832 | 0.002949 | 0.002745 |
| test11u.test | RUN | 1.417522 | 5.942998 | 5.564587 | 0.002960 | 0.003049 | 0.002829 |
| misc1.test | RUN | 2.593755 | 15.493904 | 12.333364 | 0.003499 | 0.003644 | 0.003439 |
| misc2.test | RUN | 2.570847 | 14.683598 | 11.967506 | 0.002994 | 0.003171 | 0.003094 |
| test_format.test | RUN | 2.739225 | 18.090700 | 13.872356 | 0.003011 | 0.003077 | 0.002981 |
| test_cycles.test | RUN | 1.162562 | 5.407725 | 4.408035 | 0.002830 | 0.002934 | 0.002909 |
| test_non_char.test | RUN | 2.224534 | 12.483905 | 10.349327 | 0.002458 | 0.002958 | 0.002799 |
| test_static.test | RUN | 1.079066 | 4.923776 | 3.859292 | 0.002916 | 0.002831 | 0.002952 |
| test_actions.test | RUN | 2.734303 | 14.804539 | 12.474234 | 0.003097 | 0.003529 | 0.003538 |
| test_assert.test | RUN | 1.520692 | 6.392491 | 5.727237 | 0.002969 | 0.003141 | 0.003048 |
| test_assert_with_placeholder.test | RUN | 1.423088 | 5.853828 | 5.234012 | 0.002842 | 0.002865 | 0.002708 |
| test_symbols.test | RUN | 2.760922 | 14.340080 | 14.011835 | 0.003739 | 0.003400 | 0.003592 |
| test_dynamic.test | RUN | 1.781886 | 9.961766 | 8.132068 | 0.002791 | 0.002856 | 0.002754 |
| test_dynamic_grammar.test | RUN | 1.846085 | 10.631964 | 8.397926 | 0.003120 | 0.003472 | 0.003015 |
| test_skip.test | RUN | 2.166787 | 10.537260 | 9.658070 | 0.002707 | 0.002717 | 0.002852 |
| multiple_defs.test | LINK | 3.487047 | 19.428829 | 16.269693 | — | — | — |
| test_basic_regex.test | COMPILE | 0.716985 | 1.554440 | 2.048501 | — | — | — |
| test_match_results.test | COMPILE | 0.475965 | 1.070084 | 1.308039 | — | — | — |
| test_regex_algorithms.test | COMPILE | 0.478630 | 1.066832 | 1.355671 | — | — | — |
| test_regex_compiler.test | COMPILE | 0.735588 | 1.678696 | 2.050882 | — | — | — |
| test_regex_constants.test | COMPILE | 0.037362 | 0.068315 | 0.071765 | — | — | — |
| test_regex_error.test | COMPILE | 0.260943 | 0.561829 | 0.725757 | — | — | — |
| test_regex_iterator.test | COMPILE | 0.472793 | 1.058775 | 1.327271 | — | — | — |
| test_regex_primitives.test | COMPILE | 0.703077 | 1.679345 | 1.956570 | — | — | — |
| test_regex_token_iterator.test | COMPILE | 0.434277 | 1.066831 | 1.325202 | — | — | — |
| test_regex_traits.test | COMPILE | 0.271978 | 0.563087 | 0.648268 | — | — | — |
| test_sub_match.test | COMPILE | 0.227073 | 0.454054 | 0.391563 | — | — | — |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 1.052× | 1.053×, 1.050× | 1.008× |
| clang | 0.954× | 0.948×, 0.960× | 0.994× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1361 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44260407509).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| c_traits.test | 3 | 0.008771s | 0.010575s | 0.008382s | byte equality observed |
| c_traits_u.test | 3 | 0.009599s | 0.011189s | 0.008848s | byte equality observed |
| misc1.test | 9 | 0.002519s | 0.002448s | 0.002389s | byte equality observed |
| misc2.test | 10 | 0.002283s | 0.002204s | 0.002152s | byte equality observed |
| regress.test | 3 | 0.011357s | 0.012800s | 0.010107s | byte equality observed |
| regress_u.test | 3 | 0.011359s | 0.013172s | 0.010624s | byte equality observed |
| test1.test | 10 | 0.002110s | 0.002031s | 0.002036s | byte equality observed |
| test10.test | 10 | 0.002042s | 0.002004s | 0.002007s | byte equality observed |
| test10u.test | 10 | 0.002055s | 0.002014s | 0.001960s | byte equality observed |
| test11.test | 7 | 0.002058s | 0.001983s | 0.002033s | byte equality observed |
| test11u.test | 7 | 0.002070s | 0.002022s | 0.001973s | byte equality observed |
| test1u.test | 10 | 0.002080s | 0.002092s | 0.002024s | byte equality observed |
| test2.test | 10 | 0.002091s | 0.002079s | 0.002029s | byte equality observed |
| test2u.test | 10 | 0.002096s | 0.002094s | 0.002062s | byte equality observed |
| test3.test | 10 | 0.002114s | 0.002108s | 0.002021s | byte equality observed |
| test3u.test | 10 | 0.002130s | 0.002093s | 0.002058s | byte equality observed |
| test4.test | 10 | 0.002042s | 0.002094s | 0.002066s | byte equality observed |
| test4u.test | 10 | 0.002103s | 0.002058s | 0.002026s | byte equality observed |
| test5.test | 10 | 0.002077s | 0.002088s | 0.002017s | byte equality observed |
| test5u.test | 7 | 0.002105s | 0.002097s | 0.002036s | byte equality observed |
| test6.test | 8 | 0.002070s | 0.002032s | 0.002010s | byte equality observed |
| test6u.test | 10 | 0.002084s | 0.001988s | 0.001990s | byte equality observed |
| test7.test | 10 | 0.002031s | 0.002022s | 0.002035s | byte equality observed |
| test7u.test | 10 | 0.002083s | 0.002062s | 0.001976s | byte equality observed |
| test8.test | 6 | 0.002079s | 0.002102s | 0.002026s | byte equality observed |
| test8u.test | 6 | 0.002058s | 0.002027s | 0.001984s | byte equality observed |
| test9.test | 10 | 0.002072s | 0.002044s | 0.001983s | byte equality observed |
| test9u.test | 10 | 0.002072s | 0.002070s | 0.002027s | byte equality observed |
| test_actions.test | 9 | 0.002404s | 0.002396s | 0.002350s | byte equality observed |
| test_assert.test | 9 | 0.002116s | 0.002064s | 0.002049s | byte equality observed |
| test_assert_with_placeholder.test | 10 | 0.002031s | 0.001972s | 0.001956s | byte equality observed |
| test_cycles.test | 10 | 0.002077s | 0.002065s | 0.001997s | byte equality observed |
| test_dynamic.test | 10 | 0.002041s | 0.002041s | 0.002002s | byte equality observed |
| test_dynamic_grammar.test | 9 | 0.002188s | 0.002113s | 0.002078s | byte equality observed |
| test_format.test | 10 | 0.002131s | 0.002101s | 0.002041s | byte equality observed |
| test_non_char.test | 10 | 0.002077s | 0.002022s | 0.001996s | byte equality observed |
| test_skip.test | 9 | 0.002042s | 0.001992s | 0.001945s | byte equality observed |
| test_static.test | 10 | 0.001953s | 0.001913s | 0.001858s | byte equality observed |
| test_symbols.test | 9 | 0.001962s | 0.001960s | 0.001994s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44260407509).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
