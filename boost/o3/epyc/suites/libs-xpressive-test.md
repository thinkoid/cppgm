# libs/xpressive/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| regress.test | RUN | 2.359541 | 15.462356 | 11.408281 | 0.009057 | 0.011056 | 0.008642 |
| regress_u.test | RUN | 2.536435 | 15.497194 | 11.797823 | 0.009335 | 0.011378 | 0.008454 |
| c_traits.test | RUN | 2.376248 | 14.948451 | 11.127441 | 0.007357 | 0.009731 | 0.007144 |
| c_traits_u.test | RUN | 2.540408 | 15.719588 | 11.481282 | 0.007709 | 0.010389 | 0.007447 |
| test1.test | RUN | 0.920477 | 3.787703 | 3.304897 | 0.002681 | 0.002974 | 0.002907 |
| test2.test | RUN | 1.178105 | 5.547370 | 4.853306 | 0.002905 | 0.003168 | 0.003095 |
| test3.test | RUN | 1.191102 | 5.681702 | 4.850353 | 0.002700 | 0.003232 | 0.002894 |
| test4.test | RUN | 1.039360 | 4.660590 | 3.983827 | 0.002636 | 0.003089 | 0.002655 |
| test5.test | RUN | 1.113545 | 5.055414 | 4.306129 | 0.003103 | 0.003166 | 0.002873 |
| test6.test | RUN | 0.973688 | 4.194280 | 3.630287 | 0.002977 | 0.002825 | 0.002838 |
| test7.test | RUN | 0.959612 | 4.315618 | 3.528307 | 0.004152 | 0.003330 | 0.002742 |
| test8.test | RUN | 0.958085 | 4.145259 | 3.470166 | 0.002979 | 0.003119 | 0.002909 |
| test9.test | RUN | 1.033367 | 4.588970 | 3.902326 | 0.003102 | 0.002877 | 0.002796 |
| test10.test | RUN | 1.064386 | 4.335968 | 3.602466 | 0.002502 | 0.002958 | 0.002787 |
| test11.test | RUN | 1.033845 | 4.117884 | 3.515022 | 0.002902 | 0.003076 | 0.002782 |
| test1u.test | RUN | 0.932168 | 3.910254 | 3.038834 | 0.002754 | 0.002995 | 0.002953 |
| test2u.test | RUN | 1.262964 | 5.725572 | 4.777563 | 0.003108 | 0.003153 | 0.003080 |
| test3u.test | RUN | 1.241775 | 5.922154 | 4.918285 | 0.003053 | 0.003509 | 0.002848 |
| test4u.test | RUN | 1.061751 | 4.582692 | 3.892337 | 0.003140 | 0.003337 | 0.003008 |
| test5u.test | RUN | 1.147034 | 5.143285 | 4.359624 | 0.003198 | 0.003269 | 0.003279 |
| test6u.test | RUN | 1.094250 | 4.293476 | 3.746744 | 0.003110 | 0.003330 | 0.002997 |
| test7u.test | RUN | 1.029518 | 4.431179 | 3.853643 | 0.002890 | 0.003242 | 0.002842 |
| test8u.test | RUN | 0.997667 | 4.220167 | 3.553033 | 0.003255 | 0.003111 | 0.003001 |
| test9u.test | RUN | 1.067265 | 4.522618 | 4.093847 | 0.003255 | 0.003212 | 0.002798 |
| test10u.test | RUN | 1.060286 | 4.190349 | 3.677607 | 0.003105 | 0.003486 | 0.002842 |
| test11u.test | RUN | 1.033701 | 4.231218 | 3.773508 | 0.003141 | 0.003150 | 0.002816 |
| misc1.test | RUN | 1.787995 | 11.016319 | 8.299336 | 0.003993 | 0.003887 | 0.003682 |
| misc2.test | RUN | 1.921981 | 10.394129 | 8.104933 | 0.003258 | 0.003388 | 0.003238 |
| test_format.test | RUN | 1.954542 | 12.562541 | 9.314685 | 0.003218 | 0.003276 | 0.002939 |
| test_cycles.test | RUN | 0.877182 | 3.790842 | 2.984218 | 0.002647 | 0.002899 | 0.002973 |
| test_non_char.test | RUN | 1.595372 | 8.520869 | 6.875344 | 0.003280 | 0.003012 | 0.002946 |
| test_static.test | RUN | 0.794486 | 3.171704 | 2.704885 | 0.003018 | 0.002637 | 0.002800 |
| test_actions.test | RUN | 2.004136 | 10.025440 | 8.422720 | 0.004030 | 0.004080 | 0.003596 |
| test_assert.test | RUN | 1.126460 | 4.348103 | 3.746221 | 0.003327 | 0.003263 | 0.003098 |
| test_assert_with_placeholder.test | RUN | 1.076455 | 4.034231 | 3.394307 | 0.002914 | 0.003083 | 0.002890 |
| test_symbols.test | RUN | 1.984541 | 10.256457 | 9.406498 | 0.004146 | 0.003901 | 0.003978 |
| test_dynamic.test | RUN | 1.243294 | 6.921294 | 5.454753 | 0.003075 | 0.003003 | 0.002914 |
| test_dynamic_grammar.test | RUN | 1.261612 | 7.440883 | 5.738168 | 0.003315 | 0.003266 | 0.003092 |
| test_skip.test | RUN | 1.529548 | 7.809551 | 6.721388 | 0.002498 | 0.003027 | 0.002916 |
| multiple_defs.test | LINK | 2.365038 | 13.560675 | 11.223277 | — | — | — |
| test_basic_regex.test | COMPILE | 0.530845 | 1.128483 | 1.362010 | — | — | — |
| test_match_results.test | COMPILE | 0.353536 | 0.730371 | 0.924307 | — | — | — |
| test_regex_algorithms.test | COMPILE | 0.358060 | 0.744513 | 0.926150 | — | — | — |
| test_regex_compiler.test | COMPILE | 0.542682 | 1.195012 | 1.347597 | — | — | — |
| test_regex_constants.test | COMPILE | 0.030433 | 0.054206 | 0.053436 | — | — | — |
| test_regex_error.test | COMPILE | 0.207984 | 0.390205 | 0.477600 | — | — | — |
| test_regex_iterator.test | COMPILE | 0.346535 | 0.713776 | 0.896974 | — | — | — |
| test_regex_primitives.test | COMPILE | 0.488909 | 1.208850 | 1.190296 | — | — | — |
| test_regex_token_iterator.test | COMPILE | 0.341648 | 0.745442 | 0.893158 | — | — | — |
| test_regex_traits.test | COMPILE | 0.199910 | 0.356346 | 0.477539 | — | — | — |
| test_sub_match.test | COMPILE | 0.154355 | 0.284851 | 0.372004 | — | — | — |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 1.039×† | 0.961×, 1.117× | 1.017× |
| clang | 0.945×† | 0.940×, 0.950× | 1.060× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1363 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43624536445).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| c_traits.test | 3 | 0.005593s | 0.008122s | 0.005596s | byte equality observed |
| c_traits_u.test | 3 | 0.006078s | 0.008315s | 0.005781s | byte equality observed |
| misc1.test | 10 | 0.002246s | 0.002254s | 0.002173s | byte equality observed |
| misc2.test | 10 | 0.001974s | 0.002004s | 0.001985s | byte equality observed |
| regress.test | 3 | 0.007147s | 0.009178s | 0.006378s | byte equality observed |
| regress_u.test | 3 | 0.007455s | 0.009340s | 0.006516s | byte equality observed |
| test1.test | 10 | 0.001819s | 0.001817s | 0.001723s | byte equality observed |
| test10.test | 10 | 0.001781s | 0.001766s | 0.001683s | byte equality observed |
| test10u.test | 10 | 0.001773s | 0.001736s | 0.001691s | byte equality observed |
| test11.test | 10 | 0.001720s | 0.001752s | 0.001722s | byte equality observed |
| test11u.test | 10 | 0.001795s | 0.001724s | 0.001694s | byte equality observed |
| test1u.test | 10 | 0.001813s | 0.001778s | 0.001743s | byte equality observed |
| test2.test | 10 | 0.001846s | 0.001801s | 0.001761s | byte equality observed |
| test2u.test | 10 | 0.001837s | 0.001815s | 0.001769s | byte equality observed |
| test3.test | 10 | 0.001855s | 0.001780s | 0.001746s | byte equality observed |
| test3u.test | 10 | 0.001800s | 0.001867s | 0.001752s | byte equality observed |
| test4.test | 10 | 0.001829s | 0.001756s | 0.001685s | byte equality observed |
| test4u.test | 10 | 0.001764s | 0.001730s | 0.001709s | byte equality observed |
| test5.test | 10 | 0.001808s | 0.001785s | 0.001697s | byte equality observed |
| test5u.test | 10 | 0.001792s | 0.001767s | 0.001711s | byte equality observed |
| test6.test | 10 | 0.001791s | 0.001721s | 0.001642s | byte equality observed |
| test6u.test | 10 | 0.001810s | 0.001756s | 0.001693s | byte equality observed |
| test7.test | 9 | 0.001797s | 0.001739s | 0.001716s | byte equality observed |
| test7u.test | 8 | 0.001793s | 0.001754s | 0.001755s | byte equality observed |
| test8.test | 10 | 0.001765s | 0.001698s | 0.001695s | byte equality observed |
| test8u.test | 10 | 0.001809s | 0.001751s | 0.001710s | byte equality observed |
| test9.test | 10 | 0.001767s | 0.001768s | 0.001715s | byte equality observed |
| test9u.test | 10 | 0.001784s | 0.001715s | 0.001737s | byte equality observed |
| test_actions.test | 7 | 0.002215s | 0.002203s | 0.002157s | byte equality observed |
| test_assert.test | 10 | 0.001845s | 0.001826s | 0.001778s | byte equality observed |
| test_assert_with_placeholder.test | 10 | 0.001750s | 0.001731s | 0.001670s | byte equality observed |
| test_cycles.test | 10 | 0.001775s | 0.001782s | 0.001696s | byte equality observed |
| test_dynamic.test | 10 | 0.001794s | 0.001735s | 0.001690s | byte equality observed |
| test_dynamic_grammar.test | 10 | 0.001854s | 0.001829s | 0.001865s | byte equality observed |
| test_format.test | 10 | 0.001865s | 0.001850s | 0.001779s | byte equality observed |
| test_non_char.test | 10 | 0.001860s | 0.001811s | 0.001752s | byte equality observed |
| test_skip.test | 10 | 0.001764s | 0.001756s | 0.001670s | byte equality observed |
| test_static.test | 10 | 0.001639s | 0.001643s | 0.001575s | byte equality observed |
| test_symbols.test | 9 | 0.002058s | 0.002072s | 0.001925s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43624536445).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
