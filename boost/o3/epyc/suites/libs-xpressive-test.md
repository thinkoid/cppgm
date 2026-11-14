# libs/xpressive/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| regress.test | RUN | 2.766686 | 18.176020 | 14.201756 | 0.010680 | 0.013829 | 0.009785 |
| regress_u.test | RUN | 2.927601 | 18.534001 | 13.979359 | 0.010505 | 0.013265 | 0.010194 |
| c_traits.test | RUN | 2.752091 | 17.680142 | 13.450593 | 0.008595 | 0.011655 | 0.007515 |
| c_traits_u.test | RUN | 2.996977 | 18.567257 | 14.032017 | 0.009187 | 0.012124 | 0.008225 |
| test1.test | RUN | 1.088995 | 4.696900 | 4.207033 | 0.002616 | 0.003215 | 0.003159 |
| test2.test | RUN | 1.405174 | 6.626349 | 6.042862 | 0.003362 | 0.003344 | 0.002964 |
| test3.test | RUN | 1.410128 | 6.523279 | 6.144565 | 0.003073 | 0.003301 | 0.002960 |
| test4.test | RUN | 1.222960 | 5.409492 | 5.070995 | 0.002842 | 0.003205 | 0.003032 |
| test5.test | RUN | 1.318779 | 5.835084 | 5.332334 | 0.002875 | 0.003138 | 0.003071 |
| test6.test | RUN | 1.191051 | 4.840370 | 4.636984 | 0.003278 | 0.003102 | 0.002726 |
| test7.test | RUN | 1.132866 | 5.028461 | 4.643262 | 0.002966 | 0.003202 | 0.003093 |
| test8.test | RUN | 1.153664 | 4.911402 | 4.551298 | 0.003034 | 0.003031 | 0.003058 |
| test9.test | RUN | 1.225817 | 5.227128 | 5.050591 | 0.003161 | 0.003055 | 0.002850 |
| test10.test | RUN | 1.214206 | 4.989905 | 4.715066 | 0.003109 | 0.003097 | 0.002986 |
| test11.test | RUN | 1.172488 | 4.817528 | 4.623481 | 0.002861 | 0.002983 | 0.002919 |
| test1u.test | RUN | 1.064903 | 4.577225 | 4.082453 | 0.002947 | 0.003237 | 0.003124 |
| test2u.test | RUN | 1.433133 | 6.718912 | 6.272153 | 0.003183 | 0.003345 | 0.003062 |
| test3u.test | RUN | 1.432477 | 6.903380 | 6.479614 | 0.002994 | 0.003311 | 0.003185 |
| test4u.test | RUN | 1.233579 | 5.291722 | 5.066235 | 0.002958 | 0.003214 | 0.003187 |
| test5u.test | RUN | 1.309529 | 5.890847 | 5.673756 | 0.003183 | 0.003429 | 0.003125 |
| test6u.test | RUN | 1.208313 | 4.904064 | 4.749741 | 0.003078 | 0.003176 | 0.003068 |
| test7u.test | RUN | 1.170506 | 5.177001 | 4.891711 | 0.002950 | 0.003304 | 0.003176 |
| test8u.test | RUN | 1.133760 | 4.797437 | 4.563803 | 0.002932 | 0.003346 | 0.003058 |
| test9u.test | RUN | 1.220447 | 5.267579 | 5.124667 | 0.003096 | 0.003437 | 0.003068 |
| test10u.test | RUN | 1.212063 | 4.906892 | 4.724551 | 0.003057 | 0.003308 | 0.003061 |
| test11u.test | RUN | 1.188016 | 4.950516 | 4.865280 | 0.003269 | 0.003395 | 0.002956 |
| misc1.test | RUN | 2.116959 | 12.352723 | 10.516021 | 0.003793 | 0.004144 | 0.004066 |
| misc2.test | RUN | 2.150988 | 11.872462 | 10.157980 | 0.003560 | 0.003844 | 0.003550 |
| test_format.test | RUN | 2.180008 | 14.518012 | 11.518674 | 0.003231 | 0.003429 | 0.003208 |
| test_cycles.test | RUN | 1.032407 | 4.457584 | 3.854309 | 0.003084 | 0.003060 | 0.003174 |
| test_non_char.test | RUN | 1.858337 | 10.192607 | 8.645276 | 0.002934 | 0.003144 | 0.003258 |
| test_static.test | RUN | 0.942317 | 4.082318 | 3.378432 | 0.003182 | 0.002909 | 0.003028 |
| test_actions.test | RUN | 2.278206 | 12.317661 | 10.772313 | 0.004010 | 0.004307 | 0.004095 |
| test_assert.test | RUN | 1.337951 | 5.345067 | 4.961673 | 0.003225 | 0.003394 | 0.003237 |
| test_assert_with_placeholder.test | RUN | 1.257827 | 4.921957 | 4.509133 | 0.003182 | 0.003302 | 0.002988 |
| test_symbols.test | RUN | 2.318239 | 12.346739 | 12.136606 | 0.004168 | 0.004649 | 0.004352 |
| test_dynamic.test | RUN | 1.477132 | 8.275917 | 6.862256 | 0.003255 | 0.003223 | 0.002808 |
| test_dynamic_grammar.test | RUN | 1.553965 | 8.831470 | 7.181226 | 0.003364 | 0.003326 | 0.003389 |
| test_skip.test | RUN | 1.824882 | 9.007222 | 8.497083 | 0.003179 | 0.003072 | 0.003382 |
| multiple_defs.test | LINK | 2.922258 | 16.075006 | 13.920453 | — | — | — |
| test_basic_regex.test | COMPILE | 0.652834 | 1.339961 | 1.953690 | — | — | — |
| test_match_results.test | COMPILE | 0.451730 | 0.892755 | 1.275553 | — | — | — |
| test_regex_algorithms.test | COMPILE | 0.449441 | 0.939609 | 1.270147 | — | — | — |
| test_regex_compiler.test | COMPILE | 0.660537 | 1.527897 | 1.931381 | — | — | — |
| test_regex_constants.test | COMPILE | 0.036432 | 0.063589 | 0.070911 | — | — | — |
| test_regex_error.test | COMPILE | 0.231945 | 0.503042 | 0.704030 | — | — | — |
| test_regex_iterator.test | COMPILE | 0.428850 | 0.930551 | 1.189903 | — | — | — |
| test_regex_primitives.test | COMPILE | 0.671783 | 1.489604 | 1.802472 | — | — | — |
| test_regex_token_iterator.test | COMPILE | 0.405462 | 0.924684 | 1.246937 | — | — | — |
| test_regex_traits.test | COMPILE | 0.250251 | 0.490113 | 0.668860 | — | — | — |
| test_sub_match.test | COMPILE | 0.196105 | 0.405266 | 0.439434 | — | — | — |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 1.089× | 1.085×, 1.094× | 1.026× |
| clang | 0.946× | 0.950×, 0.941× | 0.987× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1362 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43619774656).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| c_traits.test | 3 | 0.007249s | 0.010253s | 0.006530s | byte equality observed |
| c_traits_u.test | 3 | 0.007945s | 0.010614s | 0.007137s | byte equality observed |
| misc1.test | 8 | 0.002621s | 0.002507s | 0.002550s | byte equality observed |
| misc2.test | 9 | 0.002311s | 0.002218s | 0.002246s | byte equality observed |
| regress.test | 3 | 0.009366s | 0.011666s | 0.007827s | byte equality observed |
| regress_u.test | 3 | 0.009345s | 0.012123s | 0.008209s | byte equality observed |
| test1.test | 10 | 0.002043s | 0.002036s | 0.001984s | byte equality observed |
| test10.test | 10 | 0.002024s | 0.001983s | 0.001960s | byte equality observed |
| test10u.test | 10 | 0.002059s | 0.002005s | 0.002002s | byte equality observed |
| test11.test | 10 | 0.002016s | 0.002003s | 0.001963s | byte equality observed |
| test11u.test | 10 | 0.002030s | 0.001952s | 0.001975s | byte equality observed |
| test1u.test | 10 | 0.002053s | 0.002017s | 0.002005s | byte equality observed |
| test2.test | 10 | 0.002076s | 0.002120s | 0.002016s | byte equality observed |
| test2u.test | 10 | 0.002084s | 0.002099s | 0.002033s | byte equality observed |
| test3.test | 10 | 0.002058s | 0.002089s | 0.002026s | byte equality observed |
| test3u.test | 10 | 0.002078s | 0.002062s | 0.002031s | byte equality observed |
| test4.test | 10 | 0.002066s | 0.002028s | 0.002006s | byte equality observed |
| test4u.test | 10 | 0.002048s | 0.002039s | 0.002018s | byte equality observed |
| test5.test | 10 | 0.002074s | 0.002039s | 0.002041s | byte equality observed |
| test5u.test | 10 | 0.002080s | 0.002058s | 0.002030s | byte equality observed |
| test6.test | 10 | 0.002034s | 0.002001s | 0.001980s | byte equality observed |
| test6u.test | 10 | 0.002041s | 0.001975s | 0.001995s | byte equality observed |
| test7.test | 10 | 0.002028s | 0.002073s | 0.001980s | byte equality observed |
| test7u.test | 10 | 0.002058s | 0.002034s | 0.002007s | byte equality observed |
| test8.test | 10 | 0.002029s | 0.002021s | 0.001973s | byte equality observed |
| test8u.test | 10 | 0.002018s | 0.002025s | 0.002005s | byte equality observed |
| test9.test | 10 | 0.002044s | 0.002034s | 0.001950s | byte equality observed |
| test9u.test | 9 | 0.002033s | 0.002006s | 0.002011s | byte equality observed |
| test_actions.test | 8 | 0.002583s | 0.002600s | 0.002508s | byte equality observed |
| test_assert.test | 10 | 0.002145s | 0.002121s | 0.002102s | byte equality observed |
| test_assert_with_placeholder.test | 10 | 0.002011s | 0.001979s | 0.001948s | byte equality observed |
| test_cycles.test | 9 | 0.002064s | 0.001991s | 0.001955s | byte equality observed |
| test_dynamic.test | 10 | 0.002044s | 0.001984s | 0.001961s | byte equality observed |
| test_dynamic_grammar.test | 10 | 0.002191s | 0.002116s | 0.002133s | byte equality observed |
| test_format.test | 10 | 0.002122s | 0.002108s | 0.002054s | byte equality observed |
| test_non_char.test | 10 | 0.002131s | 0.002075s | 0.002052s | byte equality observed |
| test_skip.test | 10 | 0.002012s | 0.001960s | 0.001906s | byte equality observed |
| test_static.test | 10 | 0.001883s | 0.001829s | 0.001734s | byte equality observed |
| test_symbols.test | 9 | 0.002404s | 0.002329s | 0.002239s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43619774656).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
