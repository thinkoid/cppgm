# libs/xpressive/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| regress.test | RUN | 2.849556 | 18.441285 | 14.407187 | 0.010823 | 0.013892 | 0.009627 |
| regress_u.test | RUN | 2.957781 | 18.837205 | 14.504749 | 0.010626 | 0.013576 | 0.009991 |
| c_traits.test | RUN | 2.810996 | 18.162116 | 13.882918 | 0.008706 | 0.011621 | 0.008342 |
| c_traits_u.test | RUN | 3.097432 | 18.850131 | 14.332509 | 0.008827 | 0.012729 | 0.008437 |
| test1.test | RUN | 1.111208 | 4.814111 | 4.272410 | 0.003204 | 0.003401 | 0.003225 |
| test2.test | RUN | 1.444198 | 6.726122 | 6.315253 | 0.003057 | 0.003321 | 0.003283 |
| test3.test | RUN | 1.441263 | 6.753048 | 6.413614 | 0.002676 | 0.003549 | 0.003282 |
| test4.test | RUN | 1.274057 | 5.455247 | 5.215173 | 0.003211 | 0.003390 | 0.003145 |
| test5.test | RUN | 1.361155 | 5.981248 | 5.753223 | 0.003093 | 0.003364 | 0.003351 |
| test6.test | RUN | 1.246996 | 5.187157 | 4.845077 | 0.002891 | 0.003105 | 0.003281 |
| test7.test | RUN | 1.174013 | 5.099301 | 4.898546 | 0.002875 | 0.003592 | 0.003211 |
| test8.test | RUN | 1.200938 | 5.040962 | 4.707168 | 0.002834 | 0.003410 | 0.003159 |
| test9.test | RUN | 1.263531 | 5.435315 | 5.314652 | 0.003203 | 0.002967 | 0.002965 |
| test10.test | RUN | 1.236739 | 5.255513 | 4.940495 | 0.003232 | 0.003325 | 0.003187 |
| test11.test | RUN | 1.200957 | 4.996032 | 4.769400 | 0.002670 | 0.003589 | 0.003226 |
| test1u.test | RUN | 1.105652 | 4.666281 | 4.185691 | 0.003100 | 0.003337 | 0.002810 |
| test2u.test | RUN | 1.493923 | 6.933265 | 6.375362 | 0.003200 | 0.003320 | 0.002913 |
| test3u.test | RUN | 1.479107 | 7.121563 | 6.483303 | 0.002993 | 0.003226 | 0.003283 |
| test4u.test | RUN | 1.258150 | 5.526318 | 5.195937 | 0.003376 | 0.003444 | 0.003142 |
| test5u.test | RUN | 1.366429 | 6.053621 | 5.871719 | 0.002763 | 0.003436 | 0.003217 |
| test6u.test | RUN | 1.261328 | 5.008196 | 4.924201 | 0.003217 | 0.003315 | 0.003245 |
| test7u.test | RUN | 1.205757 | 5.236660 | 5.008615 | 0.003095 | 0.003192 | 0.003466 |
| test8u.test | RUN | 1.175836 | 4.970400 | 4.679852 | 0.002988 | 0.003242 | 0.003193 |
| test9u.test | RUN | 1.273110 | 5.392578 | 5.290397 | 0.003179 | 0.003270 | 0.003364 |
| test10u.test | RUN | 1.240579 | 4.973486 | 4.903444 | 0.003106 | 0.003280 | 0.003102 |
| test11u.test | RUN | 1.231037 | 5.080862 | 5.057529 | 0.003289 | 0.003488 | 0.003147 |
| misc1.test | RUN | 2.183153 | 12.765465 | 10.573607 | 0.004206 | 0.004191 | 0.003944 |
| misc2.test | RUN | 2.216889 | 12.032522 | 10.219394 | 0.003695 | 0.003756 | 0.003578 |
| test_format.test | RUN | 2.239668 | 14.783312 | 11.665481 | 0.003306 | 0.003618 | 0.003332 |
| test_cycles.test | RUN | 1.092201 | 4.522805 | 3.910316 | 0.003135 | 0.003484 | 0.003252 |
| test_non_char.test | RUN | 1.910667 | 10.369629 | 8.877983 | 0.003031 | 0.003488 | 0.003245 |
| test_static.test | RUN | 0.980115 | 4.108287 | 3.487372 | 0.003281 | 0.003125 | 0.003237 |
| test_actions.test | RUN | 2.387671 | 12.495414 | 10.746734 | 0.003992 | 0.004565 | 0.004167 |
| test_assert.test | RUN | 1.414515 | 5.214032 | 4.988624 | 0.003459 | 0.003599 | 0.003268 |
| test_assert_with_placeholder.test | RUN | 1.320324 | 4.946379 | 4.556657 | 0.002827 | 0.003304 | 0.003076 |
| test_symbols.test | RUN | 2.488273 | 12.154961 | 12.136099 | 0.004389 | 0.004192 | 0.004421 |
| test_dynamic.test | RUN | 1.515803 | 8.134968 | 6.976750 | 0.003241 | 0.003300 | 0.002698 |
| test_dynamic_grammar.test | RUN | 1.617792 | 8.730609 | 7.155228 | 0.003337 | 0.003658 | 0.003209 |
| test_skip.test | RUN | 1.902517 | 9.095048 | 8.548568 | 0.003163 | 0.003384 | 0.003110 |
| multiple_defs.test | LINK | 3.016404 | 16.523313 | 14.160817 | — | — | — |
| test_basic_regex.test | COMPILE | 0.668892 | 1.383470 | 1.929513 | — | — | — |
| test_match_results.test | COMPILE | 0.445288 | 0.933658 | 1.344805 | — | — | — |
| test_regex_algorithms.test | COMPILE | 0.471641 | 0.950072 | 1.277438 | — | — | — |
| test_regex_compiler.test | COMPILE | 0.708554 | 1.525710 | 1.915725 | — | — | — |
| test_regex_constants.test | COMPILE | 0.037662 | 0.066532 | 0.069683 | — | — | — |
| test_regex_error.test | COMPILE | 0.242802 | 0.524668 | 0.698159 | — | — | — |
| test_regex_iterator.test | COMPILE | 0.469931 | 0.950311 | 1.276624 | — | — | — |
| test_regex_primitives.test | COMPILE | 0.690926 | 1.542643 | 1.777696 | — | — | — |
| test_regex_token_iterator.test | COMPILE | 0.452124 | 0.973391 | 1.082942 | — | — | — |
| test_regex_traits.test | COMPILE | 0.254054 | 0.349192 | 0.705239 | — | — | — |
| test_sub_match.test | COMPILE | 0.217341 | 0.405310 | 0.442989 | — | — | — |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 1.117× | 1.131×, 1.103× | 1.029× |
| clang | 0.941× | 0.954×, 0.927× | 0.955× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1363 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43620819273).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| c_traits.test | 3 | 0.007072s | 0.010231s | 0.006488s | byte equality observed |
| c_traits_u.test | 3 | 0.007821s | 0.010570s | 0.006560s | byte equality observed |
| misc1.test | 8 | 0.002558s | 0.002574s | 0.002495s | byte equality observed |
| misc2.test | 9 | 0.002356s | 0.002346s | 0.002281s | byte equality observed |
| regress.test | 3 | 0.009105s | 0.010628s | 0.007987s | byte equality observed |
| regress_u.test | 3 | 0.009451s | 0.010580s | 0.008215s | byte equality observed |
| test1.test | 10 | 0.002069s | 0.002050s | 0.001991s | byte equality observed |
| test10.test | 7 | 0.002094s | 0.002024s | 0.001871s | byte equality observed |
| test10u.test | 10 | 0.002067s | 0.002047s | 0.001978s | byte equality observed |
| test11.test | 10 | 0.002077s | 0.002034s | 0.002024s | byte equality observed |
| test11u.test | 10 | 0.002098s | 0.002059s | 0.001972s | byte equality observed |
| test1u.test | 10 | 0.002044s | 0.002017s | 0.002010s | byte equality observed |
| test2.test | 10 | 0.002080s | 0.002104s | 0.001947s | byte equality observed |
| test2u.test | 10 | 0.002073s | 0.002050s | 0.002062s | byte equality observed |
| test3.test | 10 | 0.002113s | 0.002102s | 0.002037s | byte equality observed |
| test3u.test | 10 | 0.002069s | 0.002132s | 0.002026s | byte equality observed |
| test4.test | 10 | 0.002062s | 0.002061s | 0.001996s | byte equality observed |
| test4u.test | 10 | 0.002026s | 0.002061s | 0.001974s | byte equality observed |
| test5.test | 10 | 0.002070s | 0.002106s | 0.002071s | byte equality observed |
| test5u.test | 10 | 0.002064s | 0.002102s | 0.002039s | byte equality observed |
| test6.test | 10 | 0.002044s | 0.002068s | 0.002021s | byte equality observed |
| test6u.test | 10 | 0.002034s | 0.002079s | 0.002012s | byte equality observed |
| test7.test | 10 | 0.002071s | 0.002074s | 0.002013s | byte equality observed |
| test7u.test | 10 | 0.002059s | 0.002071s | 0.001974s | byte equality observed |
| test8.test | 6 | 0.002046s | 0.002085s | 0.002056s | byte equality observed |
| test8u.test | 7 | 0.002083s | 0.002090s | 0.001999s | byte equality observed |
| test9.test | 10 | 0.002031s | 0.002017s | 0.002004s | byte equality observed |
| test9u.test | 10 | 0.002080s | 0.002132s | 0.002015s | byte equality observed |
| test_actions.test | 8 | 0.002572s | 0.002553s | 0.002521s | byte equality observed |
| test_assert.test | 10 | 0.002148s | 0.002172s | 0.002110s | byte equality observed |
| test_assert_with_placeholder.test | 10 | 0.001997s | 0.002051s | 0.001971s | byte equality observed |
| test_cycles.test | 10 | 0.002064s | 0.002098s | 0.001995s | byte equality observed |
| test_dynamic.test | 10 | 0.002007s | 0.001996s | 0.002001s | byte equality observed |
| test_dynamic_grammar.test | 10 | 0.002170s | 0.002151s | 0.002111s | byte equality observed |
| test_format.test | 10 | 0.002121s | 0.002143s | 0.002074s | byte equality observed |
| test_non_char.test | 10 | 0.002118s | 0.002123s | 0.002079s | byte equality observed |
| test_skip.test | 10 | 0.002035s | 0.002014s | 0.001965s | byte equality observed |
| test_static.test | 10 | 0.001882s | 0.001890s | 0.001845s | byte equality observed |
| test_symbols.test | 8 | 0.002338s | 0.002351s | 0.002248s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43620819273).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
