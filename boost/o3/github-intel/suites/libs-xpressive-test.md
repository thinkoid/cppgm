# libs/xpressive/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| regress.test | RUN | 2.623451 | 17.107291 | 12.541441 | 0.009023 | 0.010541 | 0.008300 |
| regress_u.test | RUN | 2.773139 | 17.622718 | 12.681143 | 0.008815 | 0.010962 | 0.008291 |
| c_traits.test | RUN | 2.618642 | 16.653183 | 11.974076 | 0.007334 | 0.008971 | 0.006883 |
| c_traits_u.test | RUN | 2.814914 | 17.394586 | 12.486556 | 0.007874 | 0.009649 | 0.007583 |
| test1.test | RUN | 0.932312 | 4.194880 | 3.607851 | 0.002555 | 0.002235 | 0.002194 |
| test2.test | RUN | 1.259760 | 5.978874 | 5.185629 | 0.002272 | 0.002264 | 0.002078 |
| test3.test | RUN | 1.244752 | 6.023219 | 5.317780 | 0.002064 | 0.002237 | 0.002311 |
| test4.test | RUN | 1.090954 | 4.912861 | 4.343474 | 0.002062 | 0.002373 | 0.002230 |
| test5.test | RUN | 1.166006 | 5.293438 | 4.687771 | 0.002225 | 0.002361 | 0.002295 |
| test6.test | RUN | 1.048391 | 4.429910 | 3.957007 | 0.001975 | 0.002233 | 0.002036 |
| test7.test | RUN | 1.015242 | 4.512229 | 4.023863 | 0.002028 | 0.002319 | 0.002242 |
| test8.test | RUN | 0.998124 | 4.393353 | 3.819200 | 0.001766 | 0.002060 | 0.002172 |
| test9.test | RUN | 1.089301 | 4.811641 | 4.373446 | 0.002291 | 0.002523 | 0.001983 |
| test10.test | RUN | 1.076601 | 4.528157 | 4.072433 | 0.002057 | 0.002165 | 0.001949 |
| test11.test | RUN | 1.029075 | 4.345398 | 4.035239 | 0.002233 | 0.002085 | 0.002231 |
| test1u.test | RUN | 0.942112 | 4.131393 | 3.481918 | 0.002301 | 0.002111 | 0.002122 |
| test2u.test | RUN | 1.297749 | 6.147543 | 5.463411 | 0.002479 | 0.002278 | 0.002256 |
| test3u.test | RUN | 1.309984 | 6.298503 | 5.580531 | 0.002384 | 0.002524 | 0.002281 |
| test4u.test | RUN | 1.114444 | 4.878468 | 4.307065 | 0.002445 | 0.002478 | 0.002255 |
| test5u.test | RUN | 1.186542 | 5.398159 | 4.878971 | 0.002148 | 0.002549 | 0.002300 |
| test6u.test | RUN | 1.079974 | 4.583464 | 4.072388 | 0.002366 | 0.002374 | 0.002226 |
| test7u.test | RUN | 1.059279 | 4.763784 | 4.136376 | 0.002403 | 0.002125 | 0.002169 |
| test8u.test | RUN | 1.019380 | 4.366624 | 3.833649 | 0.002247 | 0.002271 | 0.002036 |
| test9u.test | RUN | 1.111058 | 4.776686 | 4.412599 | 0.002324 | 0.002377 | 0.002266 |
| test10u.test | RUN | 1.084829 | 4.509645 | 3.970354 | 0.002270 | 0.002125 | 0.002018 |
| test11u.test | RUN | 1.064604 | 4.529350 | 4.106935 | 0.002424 | 0.002236 | 0.002109 |
| misc1.test | RUN | 1.987700 | 11.626106 | 9.272912 | 0.002740 | 0.002706 | 0.002761 |
| misc2.test | RUN | 1.986184 | 11.084268 | 9.003388 | 0.002490 | 0.002540 | 0.002354 |
| test_format.test | RUN | 2.099248 | 13.718741 | 10.327631 | 0.002506 | 0.002460 | 0.002284 |
| test_cycles.test | RUN | 0.900907 | 4.020734 | 3.218015 | 0.002244 | 0.002205 | 0.002279 |
| test_non_char.test | RUN | 1.738424 | 9.548789 | 7.692150 | 0.002185 | 0.002504 | 0.002367 |
| test_static.test | RUN | 0.832205 | 3.701549 | 2.872270 | 0.002554 | 0.002187 | 0.002174 |
| test_actions.test | RUN | 2.173346 | 11.287261 | 9.532420 | 0.002627 | 0.002994 | 0.002515 |
| test_assert.test | RUN | 1.195185 | 4.827766 | 4.262842 | 0.002408 | 0.002392 | 0.002322 |
| test_assert_with_placeholder.test | RUN | 1.109108 | 4.373824 | 3.901389 | 0.002530 | 0.002423 | 0.002225 |
| test_symbols.test | RUN | 2.185968 | 11.074048 | 10.663507 | 0.002910 | 0.002852 | 0.002952 |
| test_dynamic.test | RUN | 1.366396 | 7.564385 | 6.122148 | 0.002307 | 0.002232 | 0.002479 |
| test_dynamic_grammar.test | RUN | 1.418026 | 7.959465 | 6.410456 | 0.002528 | 0.002430 | 0.002446 |
| test_skip.test | RUN | 1.682728 | 8.153638 | 7.390855 | 0.002169 | 0.002304 | 0.002142 |
| multiple_defs.test | LINK | 2.701921 | 14.472674 | 12.375694 | — | — | — |
| test_basic_regex.test | COMPILE | 0.549387 | 1.116417 | 1.531971 | — | — | — |
| test_match_results.test | COMPILE | 0.363237 | 0.759125 | 0.987105 | — | — | — |
| test_regex_algorithms.test | COMPILE | 0.365700 | 0.749005 | 1.004332 | — | — | — |
| test_regex_compiler.test | COMPILE | 0.555070 | 1.215309 | 1.501049 | — | — | — |
| test_regex_constants.test | COMPILE | 0.028376 | 0.048559 | 0.053568 | — | — | — |
| test_regex_error.test | COMPILE | 0.192322 | 0.410870 | 0.521970 | — | — | — |
| test_regex_iterator.test | COMPILE | 0.363992 | 0.739349 | 0.996506 | — | — | — |
| test_regex_primitives.test | COMPILE | 0.561508 | 1.226868 | 1.387425 | — | — | — |
| test_regex_token_iterator.test | COMPILE | 0.347715 | 0.755200 | 0.994626 | — | — | — |
| test_regex_traits.test | COMPILE | 0.204455 | 0.390183 | 0.497338 | — | — | — |
| test_sub_match.test | COMPILE | 0.171149 | 0.327562 | 0.414588 | — | — | — |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 1.079× | 1.073×, 1.084× | 1.002× |
| clang | 0.961× | 0.963×, 0.960× | 1.005× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1364 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/43740486413).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| c_traits.test | 3 | 0.004807s | 0.006523s | 0.004811s | byte equality observed |
| c_traits_u.test | 3 | 0.005269s | 0.006681s | 0.005097s | byte equality observed |
| misc1.test | 10 | 0.001475s | 0.001511s | 0.001469s | byte equality observed |
| misc2.test | 10 | 0.001361s | 0.001311s | 0.001304s | byte equality observed |
| regress.test | 3 | 0.005850s | 0.007199s | 0.005425s | byte equality observed |
| regress_u.test | 3 | 0.006105s | 0.007426s | 0.005755s | byte equality observed |
| test1.test | 9 | 0.001263s | 0.001266s | 0.001226s | byte equality observed |
| test10.test | 10 | 0.001282s | 0.001300s | 0.001255s | byte equality observed |
| test10u.test | 10 | 0.001264s | 0.001250s | 0.001217s | byte equality observed |
| test11.test | 10 | 0.001281s | 0.001250s | 0.001222s | byte equality observed |
| test11u.test | 10 | 0.001270s | 0.001258s | 0.001225s | byte equality observed |
| test1u.test | 10 | 0.001286s | 0.001257s | 0.001238s | byte equality observed |
| test2.test | 10 | 0.001294s | 0.001297s | 0.001233s | byte equality observed |
| test2u.test | 10 | 0.001303s | 0.001279s | 0.001259s | byte equality observed |
| test3.test | 10 | 0.001309s | 0.001295s | 0.001237s | byte equality observed |
| test3u.test | 10 | 0.001326s | 0.001297s | 0.001250s | byte equality observed |
| test4.test | 10 | 0.001284s | 0.001253s | 0.001247s | byte equality observed |
| test4u.test | 10 | 0.001278s | 0.001282s | 0.001242s | byte equality observed |
| test5.test | 10 | 0.001293s | 0.001271s | 0.001260s | byte equality observed |
| test5u.test | 10 | 0.001275s | 0.001292s | 0.001245s | byte equality observed |
| test6.test | 10 | 0.001273s | 0.001239s | 0.001231s | byte equality observed |
| test6u.test | 10 | 0.001264s | 0.001266s | 0.001242s | byte equality observed |
| test7.test | 7 | 0.001292s | 0.001236s | 0.001249s | byte equality observed |
| test7u.test | 8 | 0.001303s | 0.001289s | 0.001240s | byte equality observed |
| test8.test | 10 | 0.001274s | 0.001252s | 0.001231s | byte equality observed |
| test8u.test | 10 | 0.001262s | 0.001247s | 0.001241s | byte equality observed |
| test9.test | 10 | 0.001274s | 0.001292s | 0.001212s | byte equality observed |
| test9u.test | 10 | 0.001280s | 0.001272s | 0.001243s | byte equality observed |
| test_actions.test | 10 | 0.001472s | 0.001466s | 0.001419s | byte equality observed |
| test_assert.test | 10 | 0.001330s | 0.001345s | 0.001316s | byte equality observed |
| test_assert_with_placeholder.test | 10 | 0.001237s | 0.001232s | 0.001223s | byte equality observed |
| test_cycles.test | 10 | 0.001279s | 0.001260s | 0.001244s | byte equality observed |
| test_dynamic.test | 10 | 0.001270s | 0.001222s | 0.001215s | byte equality observed |
| test_dynamic_grammar.test | 10 | 0.001344s | 0.001307s | 0.001280s | byte equality observed |
| test_format.test | 10 | 0.001326s | 0.001317s | 0.001275s | byte equality observed |
| test_non_char.test | 10 | 0.001303s | 0.001267s | 0.001257s | byte equality observed |
| test_skip.test | 10 | 0.001264s | 0.001220s | 0.001229s | byte equality observed |
| test_static.test | 10 | 0.001250s | 0.001238s | 0.001237s | byte equality observed |
| test_symbols.test | 10 | 0.001447s | 0.001421s | 0.001393s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/43740486413).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
