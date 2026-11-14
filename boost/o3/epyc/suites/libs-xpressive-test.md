# libs/xpressive/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| regress.test | RUN | 2.960198 | 19.157222 | 14.573573 | 0.010804 | 0.013787 | 0.008499 |
| regress_u.test | RUN | 3.123924 | 19.561704 | 14.666858 | 0.010155 | 0.013371 | 0.008746 |
| c_traits.test | RUN | 2.904894 | 18.562393 | 13.989012 | 0.008386 | 0.011977 | 0.008224 |
| c_traits_u.test | RUN | 3.123340 | 19.457919 | 14.541962 | 0.009205 | 0.012918 | 0.008597 |
| test1.test | RUN | 1.180688 | 4.959780 | 4.365615 | 0.003226 | 0.003304 | 0.003255 |
| test2.test | RUN | 1.519867 | 6.969651 | 6.383843 | 0.003280 | 0.003062 | 0.003209 |
| test3.test | RUN | 1.507055 | 7.052705 | 6.354607 | 0.003300 | 0.003558 | 0.003269 |
| test4.test | RUN | 1.302242 | 5.719670 | 5.188815 | 0.003187 | 0.003525 | 0.003188 |
| test5.test | RUN | 1.403249 | 6.232958 | 5.604043 | 0.002917 | 0.003587 | 0.003216 |
| test6.test | RUN | 1.252125 | 5.176005 | 4.720717 | 0.003268 | 0.003410 | 0.003189 |
| test7.test | RUN | 1.238336 | 5.295965 | 4.872450 | 0.003081 | 0.003459 | 0.002765 |
| test8.test | RUN | 1.226814 | 5.126439 | 4.661244 | 0.003384 | 0.003399 | 0.003208 |
| test9.test | RUN | 1.328741 | 5.623718 | 5.258077 | 0.003566 | 0.003302 | 0.003150 |
| test10.test | RUN | 1.300634 | 5.303382 | 4.908176 | 0.002989 | 0.003098 | 0.003010 |
| test11.test | RUN | 1.260480 | 5.052612 | 4.812041 | 0.002971 | 0.003423 | 0.003130 |
| test1u.test | RUN | 1.153375 | 4.797283 | 4.167770 | 0.003278 | 0.003435 | 0.003288 |
| test2u.test | RUN | 1.573295 | 7.207379 | 6.508888 | 0.003393 | 0.003173 | 0.003325 |
| test3u.test | RUN | 1.555845 | 7.418751 | 6.763906 | 0.003406 | 0.003404 | 0.003325 |
| test4u.test | RUN | 1.315609 | 5.694104 | 5.194750 | 0.003119 | 0.003670 | 0.003258 |
| test5u.test | RUN | 1.403380 | 6.313590 | 5.947682 | 0.003419 | 0.003460 | 0.003229 |
| test6u.test | RUN | 1.337622 | 5.262842 | 4.953932 | 0.003276 | 0.003393 | 0.003391 |
| test7u.test | RUN | 1.273063 | 5.497847 | 5.064532 | 0.003386 | 0.003360 | 0.003364 |
| test8u.test | RUN | 1.224154 | 5.054497 | 4.745876 | 0.003133 | 0.003606 | 0.003361 |
| test9u.test | RUN | 1.326057 | 5.612835 | 5.361262 | 0.003467 | 0.003400 | 0.003342 |
| test10u.test | RUN | 1.310371 | 5.217215 | 4.922591 | 0.003423 | 0.003276 | 0.003224 |
| test11u.test | RUN | 1.315213 | 5.120129 | 5.090864 | 0.003411 | 0.003184 | 0.003212 |
| misc1.test | RUN | 2.300560 | 12.896635 | 10.986469 | 0.004228 | 0.004230 | 0.004174 |
| misc2.test | RUN | 2.340365 | 12.348571 | 10.587023 | 0.003269 | 0.003309 | 0.003778 |
| test_format.test | RUN | 2.340390 | 15.183633 | 11.743274 | 0.003461 | 0.003621 | 0.003274 |
| test_cycles.test | RUN | 1.114866 | 4.613223 | 4.010765 | 0.003216 | 0.003315 | 0.003325 |
| test_non_char.test | RUN | 1.945613 | 10.603781 | 8.915378 | 0.003396 | 0.003544 | 0.003339 |
| test_static.test | RUN | 1.016899 | 4.179443 | 3.437926 | 0.003507 | 0.003211 | 0.002807 |
| test_actions.test | RUN | 2.426761 | 13.031046 | 11.278990 | 0.004337 | 0.004450 | 0.004374 |
| test_assert.test | RUN | 1.407732 | 5.520311 | 5.236489 | 0.003218 | 0.003618 | 0.003183 |
| test_assert_with_placeholder.test | RUN | 1.288545 | 5.096355 | 4.740285 | 0.003401 | 0.003209 | 0.003436 |
| test_symbols.test | RUN | 2.529314 | 12.736246 | 12.670558 | 0.004718 | 0.004556 | 0.004516 |
| test_dynamic.test | RUN | 1.564705 | 8.467475 | 7.076018 | 0.003168 | 0.003287 | 0.003200 |
| test_dynamic_grammar.test | RUN | 1.639645 | 8.922396 | 7.468292 | 0.003524 | 0.003703 | 0.003542 |
| test_skip.test | RUN | 1.986383 | 9.322619 | 8.710532 | 0.003568 | 0.003658 | 0.002797 |
| multiple_defs.test | LINK | 3.204550 | 16.725199 | 14.419874 | — | — | — |
| test_basic_regex.test | COMPILE | 0.729719 | 1.343700 | 1.874106 | — | — | — |
| test_match_results.test | COMPILE | 0.497843 | 0.976622 | 1.321034 | — | — | — |
| test_regex_algorithms.test | COMPILE | 0.489896 | 0.966329 | 1.334631 | — | — | — |
| test_regex_compiler.test | COMPILE | 0.727090 | 1.556090 | 1.940181 | — | — | — |
| test_regex_constants.test | COMPILE | 0.043421 | 0.068834 | 0.073639 | — | — | — |
| test_regex_error.test | COMPILE | 0.274566 | 0.510853 | 0.746519 | — | — | — |
| test_regex_iterator.test | COMPILE | 0.479739 | 0.954205 | 1.258731 | — | — | — |
| test_regex_primitives.test | COMPILE | 0.672291 | 1.517146 | 1.877047 | — | — | — |
| test_regex_token_iterator.test | COMPILE | 0.465549 | 0.952538 | 1.248360 | — | — | — |
| test_regex_traits.test | COMPILE | 0.276608 | 0.499645 | 0.693773 | — | — | — |
| test_sub_match.test | COMPILE | 0.219078 | 0.419613 | 0.537853 | — | — | — |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 1.119× | 1.120×, 1.118× | 1.013× |
| clang | 0.963× | 0.974×, 0.951× | 0.993× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1362 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43628287753).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| c_traits.test | 3 | 0.007317s | 0.010251s | 0.006616s | byte equality observed |
| c_traits_u.test | 3 | 0.007803s | 0.010708s | 0.007215s | byte equality observed |
| misc1.test | 7 | 0.002621s | 0.002570s | 0.002595s | byte equality observed |
| misc2.test | 6 | 0.002359s | 0.002252s | 0.002303s | byte equality observed |
| regress.test | 2 | 0.008916s | 0.012033s | 0.007848s | byte equality observed |
| regress_u.test | 3 | 0.008942s | 0.012142s | 0.008436s | byte equality observed |
| test1.test | 9 | 0.002077s | 0.002096s | 0.002054s | byte equality observed |
| test10.test | 8 | 0.002083s | 0.002032s | 0.001978s | byte equality observed |
| test10u.test | 10 | 0.002035s | 0.002025s | 0.001994s | byte equality observed |
| test11.test | 10 | 0.002008s | 0.002052s | 0.001963s | byte equality observed |
| test11u.test | 10 | 0.002022s | 0.002067s | 0.001988s | byte equality observed |
| test1u.test | 10 | 0.002008s | 0.002057s | 0.001964s | byte equality observed |
| test2.test | 10 | 0.002058s | 0.002106s | 0.002045s | byte equality observed |
| test2u.test | 10 | 0.002079s | 0.002156s | 0.002050s | byte equality observed |
| test3.test | 10 | 0.002078s | 0.002171s | 0.002017s | byte equality observed |
| test3u.test | 9 | 0.002098s | 0.002131s | 0.002031s | byte equality observed |
| test4.test | 10 | 0.002077s | 0.002051s | 0.001975s | byte equality observed |
| test4u.test | 10 | 0.002042s | 0.002062s | 0.002006s | byte equality observed |
| test5.test | 9 | 0.002086s | 0.002128s | 0.002024s | byte equality observed |
| test5u.test | 10 | 0.002043s | 0.002111s | 0.002061s | byte equality observed |
| test6.test | 10 | 0.002033s | 0.002065s | 0.001995s | byte equality observed |
| test6u.test | 9 | 0.002046s | 0.002058s | 0.002018s | byte equality observed |
| test7.test | 10 | 0.002055s | 0.002081s | 0.001962s | byte equality observed |
| test7u.test | 10 | 0.002058s | 0.002090s | 0.001975s | byte equality observed |
| test8.test | 10 | 0.001982s | 0.002052s | 0.001995s | byte equality observed |
| test8u.test | 10 | 0.002035s | 0.002047s | 0.001996s | byte equality observed |
| test9.test | 10 | 0.002040s | 0.002083s | 0.001971s | byte equality observed |
| test9u.test | 10 | 0.002046s | 0.002053s | 0.002023s | byte equality observed |
| test_actions.test | 8 | 0.002623s | 0.002679s | 0.002537s | byte equality observed |
| test_assert.test | 9 | 0.002148s | 0.002133s | 0.002113s | byte equality observed |
| test_assert_with_placeholder.test | 10 | 0.002038s | 0.001997s | 0.001943s | byte equality observed |
| test_cycles.test | 9 | 0.002061s | 0.001996s | 0.002020s | byte equality observed |
| test_dynamic.test | 10 | 0.002036s | 0.002024s | 0.001994s | byte equality observed |
| test_dynamic_grammar.test | 10 | 0.002181s | 0.002194s | 0.002125s | byte equality observed |
| test_format.test | 10 | 0.002093s | 0.002113s | 0.002058s | byte equality observed |
| test_non_char.test | 10 | 0.002130s | 0.002111s | 0.002045s | byte equality observed |
| test_skip.test | 10 | 0.001991s | 0.002007s | 0.001925s | byte equality observed |
| test_static.test | 10 | 0.001866s | 0.001925s | 0.001845s | byte equality observed |
| test_symbols.test | 8 | 0.002412s | 0.002486s | 0.002426s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43628287753).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
