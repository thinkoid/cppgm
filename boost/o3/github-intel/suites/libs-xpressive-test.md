# libs/xpressive/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| regress.test | RUN | 2.537663 | 17.309036 | 12.260437 | 0.008912 | 0.010814 | 0.008264 |
| regress_u.test | RUN | 2.709857 | 17.829884 | 12.344102 | 0.009108 | 0.011185 | 0.008650 |
| c_traits.test | RUN | 2.558177 | 17.086472 | 11.823859 | 0.007018 | 0.009411 | 0.006981 |
| c_traits_u.test | RUN | 2.742704 | 17.621587 | 12.304566 | 0.007633 | 0.010080 | 0.007534 |
| test1.test | RUN | 0.905302 | 4.256225 | 3.496216 | 0.002131 | 0.002344 | 0.002161 |
| test2.test | RUN | 1.207545 | 6.116423 | 5.192913 | 0.002603 | 0.002669 | 0.002180 |
| test3.test | RUN | 1.202706 | 6.228216 | 5.231417 | 0.002128 | 0.002510 | 0.002144 |
| test4.test | RUN | 1.050633 | 4.981676 | 4.263930 | 0.002138 | 0.002499 | 0.002193 |
| test5.test | RUN | 1.123875 | 5.417101 | 4.532701 | 0.002135 | 0.002253 | 0.001923 |
| test6.test | RUN | 1.008857 | 4.548050 | 3.801936 | 0.002052 | 0.002553 | 0.001967 |
| test7.test | RUN | 0.978883 | 4.696770 | 3.904444 | 0.002238 | 0.002511 | 0.002103 |
| test8.test | RUN | 0.967672 | 4.493713 | 3.814925 | 0.002050 | 0.002316 | 0.002269 |
| test9.test | RUN | 1.058003 | 4.897528 | 4.265156 | 0.002301 | 0.002558 | 0.002029 |
| test10.test | RUN | 1.038773 | 4.660177 | 3.950110 | 0.001984 | 0.002614 | 0.001792 |
| test11.test | RUN | 0.999809 | 4.488285 | 3.882666 | 0.002064 | 0.002542 | 0.002230 |
| test1u.test | RUN | 0.904271 | 4.211245 | 3.372106 | 0.002438 | 0.002476 | 0.001795 |
| test2u.test | RUN | 1.245983 | 6.330694 | 5.350317 | 0.002374 | 0.002396 | 0.002057 |
| test3u.test | RUN | 1.256112 | 6.495665 | 5.445285 | 0.002079 | 0.002579 | 0.002165 |
| test4u.test | RUN | 1.055136 | 4.954411 | 4.214369 | 0.002184 | 0.002310 | 0.002025 |
| test5u.test | RUN | 1.144256 | 5.534639 | 4.755496 | 0.001985 | 0.002295 | 0.002003 |
| test6u.test | RUN | 1.041483 | 4.616762 | 3.929187 | 0.001987 | 0.002370 | 0.002038 |
| test7u.test | RUN | 1.004051 | 4.807612 | 3.976836 | 0.002149 | 0.002539 | 0.002066 |
| test8u.test | RUN | 0.957681 | 4.458845 | 3.765250 | 0.002412 | 0.002150 | 0.002050 |
| test9u.test | RUN | 1.047159 | 4.844491 | 4.304919 | 0.002180 | 0.002460 | 0.001968 |
| test10u.test | RUN | 1.029024 | 4.558314 | 3.933161 | 0.002110 | 0.002212 | 0.002121 |
| test11u.test | RUN | 1.022833 | 4.571762 | 4.051592 | 0.002589 | 0.002376 | 0.002088 |
| misc1.test | RUN | 1.903743 | 11.798177 | 9.073233 | 0.002854 | 0.002754 | 0.002483 |
| misc2.test | RUN | 1.881925 | 11.113096 | 8.775854 | 0.002288 | 0.002520 | 0.002344 |
| test_format.test | RUN | 2.024910 | 13.784788 | 10.154602 | 0.002466 | 0.002417 | 0.002098 |
| test_cycles.test | RUN | 0.850397 | 4.081354 | 3.174173 | 0.001957 | 0.002343 | 0.002111 |
| test_non_char.test | RUN | 1.651983 | 9.595547 | 7.521508 | 0.002231 | 0.002406 | 0.001942 |
| test_static.test | RUN | 0.799511 | 3.716190 | 2.828083 | 0.002306 | 0.002355 | 0.001866 |
| test_actions.test | RUN | 2.071135 | 11.437367 | 9.197427 | 0.002572 | 0.002887 | 0.002542 |
| test_assert.test | RUN | 1.114761 | 4.880563 | 4.148821 | 0.002379 | 0.002345 | 0.002148 |
| test_assert_with_placeholder.test | RUN | 1.049245 | 4.403327 | 3.791039 | 0.002158 | 0.002433 | 0.002087 |
| test_symbols.test | RUN | 2.107617 | 11.082592 | 10.190028 | 0.002261 | 0.002717 | 0.002690 |
| test_dynamic.test | RUN | 1.322782 | 7.607376 | 6.091938 | 0.002352 | 0.002251 | 0.002016 |
| test_dynamic_grammar.test | RUN | 1.389640 | 8.089916 | 6.115731 | 0.002309 | 0.002404 | 0.002211 |
| test_skip.test | RUN | 1.612370 | 8.265685 | 7.182159 | 0.001954 | 0.002288 | 0.002168 |
| multiple_defs.test | LINK | 2.608911 | 14.712871 | 12.000444 | — | — | — |
| test_basic_regex.test | COMPILE | 0.530237 | 1.131712 | 1.463459 | — | — | — |
| test_match_results.test | COMPILE | 0.352670 | 0.757955 | 1.049944 | — | — | — |
| test_regex_algorithms.test | COMPILE | 0.364953 | 0.754283 | 1.002355 | — | — | — |
| test_regex_compiler.test | COMPILE | 0.546392 | 1.229254 | 1.528217 | — | — | — |
| test_regex_constants.test | COMPILE | 0.027842 | 0.049602 | 0.052677 | — | — | — |
| test_regex_error.test | COMPILE | 0.188101 | 0.410556 | 0.540560 | — | — | — |
| test_regex_iterator.test | COMPILE | 0.366191 | 0.762300 | 0.958131 | — | — | — |
| test_regex_primitives.test | COMPILE | 0.526452 | 1.267839 | 1.372709 | — | — | — |
| test_regex_token_iterator.test | COMPILE | 0.323501 | 0.782382 | 0.987759 | — | — | — |
| test_regex_traits.test | COMPILE | 0.197178 | 0.414244 | 0.451508 | — | — | — |
| test_sub_match.test | COMPILE | 0.161039 | 0.335419 | 0.376207 | — | — | — |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 1.081× | 1.083×, 1.080× | 0.995× |
| clang | 0.961× | 0.966×, 0.956× | 1.009× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1364 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/43967972441).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| c_traits.test | 3 | 0.004897s | 0.006439s | 0.004795s | byte equality observed |
| c_traits_u.test | 3 | 0.005280s | 0.006877s | 0.005091s | byte equality observed |
| misc1.test | 10 | 0.001505s | 0.001489s | 0.001454s | byte equality observed |
| misc2.test | 10 | 0.001386s | 0.001373s | 0.001299s | byte equality observed |
| regress.test | 3 | 0.005887s | 0.007193s | 0.005363s | byte equality observed |
| regress_u.test | 3 | 0.006158s | 0.007541s | 0.005698s | byte equality observed |
| test1.test | 10 | 0.001274s | 0.001266s | 0.001227s | byte equality observed |
| test10.test | 9 | 0.001264s | 0.001264s | 0.001240s | byte equality observed |
| test10u.test | 10 | 0.001277s | 0.001246s | 0.001251s | byte equality observed |
| test11.test | 10 | 0.001285s | 0.001279s | 0.001240s | byte equality observed |
| test11u.test | 10 | 0.001309s | 0.001260s | 0.001244s | byte equality observed |
| test1u.test | 10 | 0.001297s | 0.001289s | 0.001251s | byte equality observed |
| test2.test | 10 | 0.001316s | 0.001301s | 0.001290s | byte equality observed |
| test2u.test | 10 | 0.001294s | 0.001298s | 0.001298s | byte equality observed |
| test3.test | 10 | 0.001330s | 0.001310s | 0.001241s | byte equality observed |
| test3u.test | 10 | 0.001321s | 0.001320s | 0.001282s | byte equality observed |
| test4.test | 10 | 0.001291s | 0.001293s | 0.001225s | byte equality observed |
| test4u.test | 10 | 0.001294s | 0.001283s | 0.001247s | byte equality observed |
| test5.test | 10 | 0.001301s | 0.001313s | 0.001241s | byte equality observed |
| test5u.test | 10 | 0.001280s | 0.001317s | 0.001257s | byte equality observed |
| test6.test | 8 | 0.001285s | 0.001323s | 0.001254s | byte equality observed |
| test6u.test | 10 | 0.001288s | 0.001278s | 0.001240s | byte equality observed |
| test7.test | 10 | 0.001300s | 0.001281s | 0.001253s | byte equality observed |
| test7u.test | 10 | 0.001288s | 0.001274s | 0.001254s | byte equality observed |
| test8.test | 10 | 0.001285s | 0.001298s | 0.001222s | byte equality observed |
| test8u.test | 10 | 0.001272s | 0.001303s | 0.001240s | byte equality observed |
| test9.test | 10 | 0.001277s | 0.001278s | 0.001250s | byte equality observed |
| test9u.test | 10 | 0.001281s | 0.001301s | 0.001246s | byte equality observed |
| test_actions.test | 10 | 0.001467s | 0.001470s | 0.001419s | byte equality observed |
| test_assert.test | 10 | 0.001355s | 0.001306s | 0.001276s | byte equality observed |
| test_assert_with_placeholder.test | 9 | 0.001246s | 0.001227s | 0.001197s | byte equality observed |
| test_cycles.test | 10 | 0.001287s | 0.001263s | 0.001230s | byte equality observed |
| test_dynamic.test | 10 | 0.001267s | 0.001226s | 0.001211s | byte equality observed |
| test_dynamic_grammar.test | 10 | 0.001330s | 0.001300s | 0.001314s | byte equality observed |
| test_format.test | 10 | 0.001321s | 0.001322s | 0.001272s | byte equality observed |
| test_non_char.test | 10 | 0.001279s | 0.001266s | 0.001265s | byte equality observed |
| test_skip.test | 10 | 0.001257s | 0.001254s | 0.001244s | byte equality observed |
| test_static.test | 10 | 0.001235s | 0.001238s | 0.001226s | byte equality observed |
| test_symbols.test | 10 | 0.001465s | 0.001442s | 0.001385s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/43967972441).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
