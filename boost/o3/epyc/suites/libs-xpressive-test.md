# libs/xpressive/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| regress.test | RUN | 2.789364 | 18.217529 | 14.133069 | 0.011036 | 0.014046 | 0.009678 |
| regress_u.test | RUN | 3.019099 | 18.493622 | 14.134750 | 0.009967 | 0.013346 | 0.010220 |
| c_traits.test | RUN | 2.771692 | 17.861165 | 13.470160 | 0.008198 | 0.011630 | 0.007174 |
| c_traits_u.test | RUN | 3.011707 | 18.335325 | 13.912852 | 0.009285 | 0.012455 | 0.008677 |
| test1.test | RUN | 1.061126 | 4.610750 | 4.192464 | 0.003138 | 0.003354 | 0.003156 |
| test2.test | RUN | 1.404115 | 6.567807 | 5.972392 | 0.003201 | 0.003497 | 0.003225 |
| test3.test | RUN | 1.433153 | 6.703581 | 6.096470 | 0.002928 | 0.003252 | 0.002666 |
| test4.test | RUN | 1.246899 | 5.416220 | 5.039571 | 0.003152 | 0.003283 | 0.003233 |
| test5.test | RUN | 1.320388 | 5.886337 | 5.401711 | 0.002914 | 0.003370 | 0.003172 |
| test6.test | RUN | 1.204990 | 4.909798 | 4.620406 | 0.003249 | 0.003320 | 0.003064 |
| test7.test | RUN | 1.143059 | 5.042506 | 4.661073 | 0.002848 | 0.003446 | 0.003130 |
| test8.test | RUN | 1.131567 | 4.890534 | 4.537164 | 0.003184 | 0.003269 | 0.003084 |
| test9.test | RUN | 1.251769 | 5.321869 | 5.096042 | 0.003135 | 0.003007 | 0.003075 |
| test10.test | RUN | 1.194827 | 5.005246 | 4.780201 | 0.002897 | 0.003044 | 0.003000 |
| test11.test | RUN | 1.166807 | 4.814861 | 4.726364 | 0.002774 | 0.003297 | 0.002967 |
| test1u.test | RUN | 1.064983 | 4.478315 | 4.101455 | 0.003153 | 0.003279 | 0.002868 |
| test2u.test | RUN | 1.439461 | 6.771428 | 6.331507 | 0.003368 | 0.003325 | 0.003224 |
| test3u.test | RUN | 1.450673 | 6.960747 | 6.475960 | 0.003228 | 0.003169 | 0.003129 |
| test4u.test | RUN | 1.234691 | 5.363488 | 5.047279 | 0.003139 | 0.003331 | 0.003195 |
| test5u.test | RUN | 1.316164 | 5.969279 | 5.641756 | 0.002833 | 0.003349 | 0.003094 |
| test6u.test | RUN | 1.236825 | 4.922799 | 4.750097 | 0.003169 | 0.003355 | 0.003079 |
| test7u.test | RUN | 1.199403 | 5.311689 | 4.833835 | 0.003012 | 0.003268 | 0.003144 |
| test8u.test | RUN | 1.148713 | 4.904850 | 4.552682 | 0.003046 | 0.003379 | 0.003082 |
| test9u.test | RUN | 1.238347 | 5.234941 | 5.141324 | 0.003165 | 0.003512 | 0.003252 |
| test10u.test | RUN | 1.232907 | 5.042584 | 4.744823 | 0.003162 | 0.003388 | 0.003621 |
| test11u.test | RUN | 1.246590 | 5.019835 | 4.870556 | 0.003255 | 0.003312 | 0.003238 |
| misc1.test | RUN | 2.154444 | 12.561334 | 10.383958 | 0.003748 | 0.004104 | 0.004035 |
| misc2.test | RUN | 2.155722 | 11.816124 | 10.038294 | 0.003534 | 0.003519 | 0.003453 |
| test_format.test | RUN | 2.225757 | 14.342121 | 11.497185 | 0.003291 | 0.003110 | 0.003167 |
| test_cycles.test | RUN | 1.055231 | 4.475346 | 3.850389 | 0.003002 | 0.003463 | 0.002881 |
| test_non_char.test | RUN | 1.874883 | 10.180334 | 8.732482 | 0.003239 | 0.003411 | 0.003229 |
| test_static.test | RUN | 0.984619 | 4.053610 | 3.421155 | 0.003325 | 0.003249 | 0.003177 |
| test_actions.test | RUN | 2.240466 | 11.927693 | 10.711439 | 0.004124 | 0.004271 | 0.004221 |
| test_assert.test | RUN | 1.319077 | 5.197871 | 4.994627 | 0.003249 | 0.003345 | 0.003248 |
| test_assert_with_placeholder.test | RUN | 1.239420 | 4.849315 | 4.524256 | 0.003203 | 0.003366 | 0.003108 |
| test_symbols.test | RUN | 2.378301 | 11.769859 | 12.114067 | 0.004466 | 0.004522 | 0.003608 |
| test_dynamic.test | RUN | 1.483030 | 7.878304 | 6.786468 | 0.003202 | 0.003314 | 0.003219 |
| test_dynamic_grammar.test | RUN | 1.548411 | 8.454612 | 7.147653 | 0.003522 | 0.003466 | 0.003325 |
| test_skip.test | RUN | 1.843761 | 8.730206 | 8.320341 | 0.003139 | 0.003249 | 0.003054 |
| multiple_defs.test | LINK | 2.949420 | 15.775111 | 13.806737 | — | — | — |
| test_basic_regex.test | COMPILE | 0.660113 | 1.326605 | 1.921295 | — | — | — |
| test_match_results.test | COMPILE | 0.445525 | 0.923694 | 1.277501 | — | — | — |
| test_regex_algorithms.test | COMPILE | 0.456407 | 0.922452 | 1.311765 | — | — | — |
| test_regex_compiler.test | COMPILE | 0.677749 | 1.431554 | 1.891039 | — | — | — |
| test_regex_constants.test | COMPILE | 0.037453 | 0.063845 | 0.067825 | — | — | — |
| test_regex_error.test | COMPILE | 0.241791 | 0.476335 | 0.696554 | — | — | — |
| test_regex_iterator.test | COMPILE | 0.443811 | 0.849677 | 1.222664 | — | — | — |
| test_regex_primitives.test | COMPILE | 0.676437 | 1.450488 | 1.665103 | — | — | — |
| test_regex_token_iterator.test | COMPILE | 0.436982 | 0.910612 | 1.181929 | — | — | — |
| test_regex_traits.test | COMPILE | 0.253929 | 0.483075 | 0.670626 | — | — | — |
| test_sub_match.test | COMPILE | 0.184700 | 0.402543 | 0.509151 | — | — | — |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 1.086× | 1.082×, 1.089× | 0.998× |
| clang | 0.939× | 0.938×, 0.940× | 1.027× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1363 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43638391827).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| c_traits.test | 3 | 0.007385s | 0.010431s | 0.006556s | byte equality observed |
| c_traits_u.test | 3 | 0.007855s | 0.010707s | 0.006840s | byte equality observed |
| misc1.test | 8 | 0.002704s | 0.002593s | 0.002537s | byte equality observed |
| misc2.test | 9 | 0.002420s | 0.002289s | 0.002253s | byte equality observed |
| regress.test | 3 | 0.009444s | 0.011978s | 0.008282s | byte equality observed |
| regress_u.test | 3 | 0.009344s | 0.012014s | 0.008524s | byte equality observed |
| test1.test | 10 | 0.002111s | 0.002067s | 0.002015s | byte equality observed |
| test10.test | 10 | 0.002097s | 0.002062s | 0.002006s | byte equality observed |
| test10u.test | 10 | 0.002084s | 0.002054s | 0.002030s | byte equality observed |
| test11.test | 10 | 0.002081s | 0.002063s | 0.001999s | byte equality observed |
| test11u.test | 10 | 0.002092s | 0.002062s | 0.002016s | byte equality observed |
| test1u.test | 10 | 0.002101s | 0.002061s | 0.002069s | byte equality observed |
| test2.test | 10 | 0.002140s | 0.002128s | 0.002065s | byte equality observed |
| test2u.test | 10 | 0.002134s | 0.002123s | 0.002086s | byte equality observed |
| test3.test | 10 | 0.002125s | 0.002180s | 0.002047s | byte equality observed |
| test3u.test | 10 | 0.002142s | 0.002138s | 0.002081s | byte equality observed |
| test4.test | 10 | 0.002124s | 0.002068s | 0.002030s | byte equality observed |
| test4u.test | 9 | 0.002115s | 0.002044s | 0.002017s | byte equality observed |
| test5.test | 10 | 0.002119s | 0.002114s | 0.002032s | byte equality observed |
| test5u.test | 10 | 0.002128s | 0.002148s | 0.002091s | byte equality observed |
| test6.test | 10 | 0.002084s | 0.002050s | 0.002002s | byte equality observed |
| test6u.test | 10 | 0.002114s | 0.002046s | 0.001988s | byte equality observed |
| test7.test | 9 | 0.002104s | 0.002115s | 0.002022s | byte equality observed |
| test7u.test | 10 | 0.002111s | 0.002133s | 0.002008s | byte equality observed |
| test8.test | 9 | 0.002092s | 0.002069s | 0.001964s | byte equality observed |
| test8u.test | 10 | 0.002091s | 0.002114s | 0.002008s | byte equality observed |
| test9.test | 10 | 0.002085s | 0.002096s | 0.002021s | byte equality observed |
| test9u.test | 10 | 0.002098s | 0.002131s | 0.002015s | byte equality observed |
| test_actions.test | 9 | 0.002648s | 0.002672s | 0.002542s | byte equality observed |
| test_assert.test | 9 | 0.002194s | 0.002152s | 0.002121s | byte equality observed |
| test_assert_with_placeholder.test | 9 | 0.002068s | 0.001983s | 0.001942s | byte equality observed |
| test_cycles.test | 10 | 0.002100s | 0.002069s | 0.002038s | byte equality observed |
| test_dynamic.test | 10 | 0.002073s | 0.001967s | 0.001971s | byte equality observed |
| test_dynamic_grammar.test | 10 | 0.002250s | 0.002211s | 0.002145s | byte equality observed |
| test_format.test | 10 | 0.002195s | 0.002163s | 0.002031s | byte equality observed |
| test_non_char.test | 10 | 0.002154s | 0.002117s | 0.002049s | byte equality observed |
| test_skip.test | 10 | 0.002054s | 0.001971s | 0.001975s | byte equality observed |
| test_static.test | 9 | 0.002013s | 0.001931s | 0.001878s | byte equality observed |
| test_symbols.test | 6 | 0.002604s | 0.002541s | 0.002534s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43638391827).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
