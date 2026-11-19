# libs/xpressive/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| regress.test | RUN | 2.527570 | 17.075983 | 12.209471 | 0.009020 | 0.010725 | 0.008182 |
| regress_u.test | RUN | 2.689766 | 17.738170 | 12.588205 | 0.009105 | 0.010893 | 0.008437 |
| c_traits.test | RUN | 2.548549 | 16.969737 | 11.814242 | 0.007392 | 0.009151 | 0.006916 |
| c_traits_u.test | RUN | 2.739814 | 17.580762 | 12.217027 | 0.008012 | 0.009802 | 0.007296 |
| test1.test | RUN | 0.906433 | 4.242444 | 3.543739 | 0.002340 | 0.002342 | 0.002065 |
| test2.test | RUN | 1.221110 | 6.167942 | 5.213199 | 0.002153 | 0.002586 | 0.002186 |
| test3.test | RUN | 1.220621 | 6.167465 | 5.316374 | 0.002158 | 0.002492 | 0.002252 |
| test4.test | RUN | 1.045632 | 5.014795 | 4.352172 | 0.002256 | 0.002344 | 0.002299 |
| test5.test | RUN | 1.123438 | 5.420305 | 4.707368 | 0.002138 | 0.002414 | 0.002174 |
| test6.test | RUN | 1.008416 | 4.521759 | 3.925682 | 0.002345 | 0.002590 | 0.002051 |
| test7.test | RUN | 0.985703 | 4.658721 | 4.026693 | 0.002021 | 0.002314 | 0.002308 |
| test8.test | RUN | 0.976198 | 4.486705 | 3.821404 | 0.001962 | 0.002303 | 0.002200 |
| test9.test | RUN | 1.058241 | 4.906859 | 4.341576 | 0.002300 | 0.002447 | 0.002179 |
| test10.test | RUN | 1.027344 | 4.582624 | 4.111662 | 0.002075 | 0.002272 | 0.002186 |
| test11.test | RUN | 0.997622 | 4.431743 | 4.058741 | 0.001843 | 0.002352 | 0.002128 |
| test1u.test | RUN | 0.901735 | 4.172125 | 3.494445 | 0.002290 | 0.002134 | 0.002129 |
| test2u.test | RUN | 1.227851 | 6.217189 | 5.474784 | 0.002308 | 0.002209 | 0.002346 |
| test3u.test | RUN | 1.251312 | 6.363310 | 5.638202 | 0.002103 | 0.002330 | 0.002414 |
| test4u.test | RUN | 1.044247 | 4.920995 | 4.397805 | 0.002158 | 0.002427 | 0.002118 |
| test5u.test | RUN | 1.136307 | 5.498648 | 4.922637 | 0.002409 | 0.002193 | 0.002190 |
| test6u.test | RUN | 1.038203 | 4.547713 | 4.123714 | 0.002198 | 0.002302 | 0.002161 |
| test7u.test | RUN | 1.000550 | 4.777888 | 4.202066 | 0.002174 | 0.002514 | 0.002226 |
| test8u.test | RUN | 0.963877 | 4.429988 | 3.888028 | 0.002352 | 0.002372 | 0.002168 |
| test9u.test | RUN | 1.050210 | 4.818753 | 4.368824 | 0.002129 | 0.002416 | 0.002122 |
| test10u.test | RUN | 1.036278 | 4.546938 | 4.013734 | 0.002138 | 0.002339 | 0.002156 |
| test11u.test | RUN | 1.018199 | 4.562230 | 4.160393 | 0.002319 | 0.002281 | 0.001959 |
| misc1.test | RUN | 1.901596 | 11.736584 | 9.218222 | 0.002452 | 0.002785 | 0.002610 |
| misc2.test | RUN | 1.893569 | 11.090446 | 8.910280 | 0.002030 | 0.002463 | 0.002357 |
| test_format.test | RUN | 2.023731 | 13.732624 | 10.315813 | 0.002222 | 0.002506 | 0.002228 |
| test_cycles.test | RUN | 0.851949 | 4.011978 | 3.231309 | 0.002214 | 0.002278 | 0.002106 |
| test_non_char.test | RUN | 1.646988 | 9.524580 | 7.568778 | 0.002442 | 0.002376 | 0.002002 |
| test_static.test | RUN | 0.788088 | 3.652005 | 2.852801 | 0.002240 | 0.002249 | 0.002154 |
| test_actions.test | RUN | 2.022328 | 11.328890 | 9.404239 | 0.002739 | 0.002744 | 0.002553 |
| test_assert.test | RUN | 1.119104 | 4.832653 | 4.162671 | 0.002250 | 0.002281 | 0.002238 |
| test_assert_with_placeholder.test | RUN | 1.043556 | 4.362159 | 3.789988 | 0.001976 | 0.002170 | 0.001967 |
| test_symbols.test | RUN | 2.072861 | 11.037323 | 10.386855 | 0.002660 | 0.002687 | 0.002730 |
| test_dynamic.test | RUN | 1.327371 | 7.488668 | 6.045381 | 0.002140 | 0.002334 | 0.002021 |
| test_dynamic_grammar.test | RUN | 1.371018 | 7.981316 | 6.114784 | 0.002207 | 0.002344 | 0.002174 |
| test_skip.test | RUN | 1.607499 | 8.126734 | 7.235255 | 0.002006 | 0.002072 | 0.002248 |
| multiple_defs.test | LINK | 2.599339 | 14.550005 | 12.112130 | — | — | — |
| test_basic_regex.test | COMPILE | 0.530226 | 1.100492 | 1.534775 | — | — | — |
| test_match_results.test | COMPILE | 0.351246 | 0.745728 | 1.001743 | — | — | — |
| test_regex_algorithms.test | COMPILE | 0.350297 | 0.751232 | 1.009603 | — | — | — |
| test_regex_compiler.test | COMPILE | 0.530059 | 1.224293 | 1.513134 | — | — | — |
| test_regex_constants.test | COMPILE | 0.027784 | 0.047801 | 0.052832 | — | — | — |
| test_regex_error.test | COMPILE | 0.180825 | 0.398975 | 0.541204 | — | — | — |
| test_regex_iterator.test | COMPILE | 0.351399 | 0.747359 | 0.963837 | — | — | — |
| test_regex_primitives.test | COMPILE | 0.523105 | 1.216305 | 1.415189 | — | — | — |
| test_regex_token_iterator.test | COMPILE | 0.339330 | 0.762423 | 0.959984 | — | — | — |
| test_regex_traits.test | COMPILE | 0.199098 | 0.395094 | 0.512890 | — | — | — |
| test_sub_match.test | COMPILE | 0.154106 | 0.287244 | 0.374759 | — | — | — |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 1.083× | 1.079×, 1.086× | 0.996× |
| clang | 0.967× | 0.968×, 0.966× | 1.003× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1364 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44481767416).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| c_traits.test | 4 | 0.004913s | 0.006393s | 0.004771s | byte equality observed |
| c_traits_u.test | 3 | 0.005266s | 0.006762s | 0.005113s | byte equality observed |
| misc1.test | 10 | 0.001514s | 0.001527s | 0.001450s | byte equality observed |
| misc2.test | 10 | 0.001379s | 0.001359s | 0.001344s | byte equality observed |
| regress.test | 3 | 0.005874s | 0.007139s | 0.005409s | byte equality observed |
| regress_u.test | 3 | 0.006054s | 0.007520s | 0.005709s | byte equality observed |
| test1.test | 10 | 0.001276s | 0.001267s | 0.001285s | byte equality observed |
| test10.test | 10 | 0.001278s | 0.001248s | 0.001279s | byte equality observed |
| test10u.test | 10 | 0.001279s | 0.001259s | 0.001241s | byte equality observed |
| test11.test | 10 | 0.001288s | 0.001272s | 0.001251s | byte equality observed |
| test11u.test | 10 | 0.001282s | 0.001261s | 0.001223s | byte equality observed |
| test1u.test | 10 | 0.001284s | 0.001286s | 0.001260s | byte equality observed |
| test2.test | 10 | 0.001310s | 0.001339s | 0.001267s | byte equality observed |
| test2u.test | 10 | 0.001329s | 0.001325s | 0.001317s | byte equality observed |
| test3.test | 10 | 0.001311s | 0.001315s | 0.001261s | byte equality observed |
| test3u.test | 10 | 0.001315s | 0.001345s | 0.001283s | byte equality observed |
| test4.test | 10 | 0.001296s | 0.001256s | 0.001274s | byte equality observed |
| test4u.test | 10 | 0.001285s | 0.001272s | 0.001272s | byte equality observed |
| test5.test | 10 | 0.001297s | 0.001297s | 0.001264s | byte equality observed |
| test5u.test | 10 | 0.001291s | 0.001295s | 0.001292s | byte equality observed |
| test6.test | 10 | 0.001284s | 0.001275s | 0.001285s | byte equality observed |
| test6u.test | 10 | 0.001275s | 0.001294s | 0.001269s | byte equality observed |
| test7.test | 10 | 0.001270s | 0.001292s | 0.001235s | byte equality observed |
| test7u.test | 10 | 0.001276s | 0.001286s | 0.001246s | byte equality observed |
| test8.test | 10 | 0.001268s | 0.001263s | 0.001237s | byte equality observed |
| test8u.test | 10 | 0.001270s | 0.001280s | 0.001233s | byte equality observed |
| test9.test | 10 | 0.001272s | 0.001273s | 0.001236s | byte equality observed |
| test9u.test | 10 | 0.001267s | 0.001297s | 0.001257s | byte equality observed |
| test_actions.test | 8 | 0.001467s | 0.001481s | 0.001448s | byte equality observed |
| test_assert.test | 10 | 0.001340s | 0.001328s | 0.001316s | byte equality observed |
| test_assert_with_placeholder.test | 10 | 0.001263s | 0.001253s | 0.001225s | byte equality observed |
| test_cycles.test | 10 | 0.001288s | 0.001261s | 0.001248s | byte equality observed |
| test_dynamic.test | 10 | 0.001267s | 0.001237s | 0.001235s | byte equality observed |
| test_dynamic_grammar.test | 10 | 0.001336s | 0.001317s | 0.001307s | byte equality observed |
| test_format.test | 10 | 0.001328s | 0.001341s | 0.001274s | byte equality observed |
| test_non_char.test | 9 | 0.001295s | 0.001291s | 0.001267s | byte equality observed |
| test_skip.test | 10 | 0.001263s | 0.001247s | 0.001216s | byte equality observed |
| test_static.test | 10 | 0.001240s | 0.001215s | 0.001213s | byte equality observed |
| test_symbols.test | 10 | 0.001439s | 0.001411s | 0.001388s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44481767416).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
