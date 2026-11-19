# libs/xpressive/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| regress.test | RUN | 2.484907 | 16.737667 | 12.232441 | 0.008699 | 0.010406 | 0.008136 |
| regress_u.test | RUN | 2.685463 | 17.231419 | 12.463509 | 0.008666 | 0.010717 | 0.008662 |
| c_traits.test | RUN | 2.469211 | 16.501637 | 11.809260 | 0.006743 | 0.008779 | 0.006763 |
| c_traits_u.test | RUN | 2.682297 | 17.041961 | 12.350502 | 0.007554 | 0.009591 | 0.007238 |
| test1.test | RUN | 0.886090 | 4.099643 | 3.536343 | 0.001938 | 0.002098 | 0.002146 |
| test2.test | RUN | 1.195357 | 5.908137 | 5.138256 | 0.002280 | 0.002374 | 0.002187 |
| test3.test | RUN | 1.199053 | 5.962457 | 5.288671 | 0.002334 | 0.002142 | 0.002048 |
| test4.test | RUN | 1.042306 | 4.761845 | 4.303810 | 0.002169 | 0.002266 | 0.002031 |
| test5.test | RUN | 1.102944 | 5.194757 | 4.646784 | 0.002016 | 0.002119 | 0.001986 |
| test6.test | RUN | 0.992647 | 4.400027 | 3.926534 | 0.002070 | 0.002360 | 0.002089 |
| test7.test | RUN | 0.960169 | 4.502461 | 3.957333 | 0.002249 | 0.002227 | 0.002265 |
| test8.test | RUN | 0.946176 | 4.343349 | 3.801754 | 0.002032 | 0.002148 | 0.001994 |
| test9.test | RUN | 1.035243 | 4.740964 | 4.352753 | 0.002050 | 0.002337 | 0.002091 |
| test10.test | RUN | 1.007075 | 4.464014 | 4.020867 | 0.002024 | 0.002069 | 0.002078 |
| test11.test | RUN | 0.974579 | 4.344761 | 3.968830 | 0.001886 | 0.002141 | 0.001990 |
| test1u.test | RUN | 0.884010 | 4.077252 | 3.442377 | 0.002366 | 0.002082 | 0.002171 |
| test2u.test | RUN | 1.213154 | 6.037161 | 5.319189 | 0.002227 | 0.002154 | 0.002030 |
| test3u.test | RUN | 1.232918 | 6.292362 | 5.485448 | 0.001961 | 0.002291 | 0.002028 |
| test4u.test | RUN | 1.051419 | 4.801939 | 4.227126 | 0.002104 | 0.002299 | 0.002109 |
| test5u.test | RUN | 1.114848 | 5.355260 | 4.720773 | 0.002208 | 0.002230 | 0.002146 |
| test6u.test | RUN | 1.014555 | 4.443155 | 3.947650 | 0.002178 | 0.002111 | 0.002192 |
| test7u.test | RUN | 0.984777 | 4.671577 | 4.073622 | 0.002083 | 0.002100 | 0.002191 |
| test8u.test | RUN | 0.948301 | 4.339014 | 3.788552 | 0.002111 | 0.002197 | 0.002173 |
| test9u.test | RUN | 1.035955 | 4.678131 | 4.303227 | 0.001954 | 0.002178 | 0.002130 |
| test10u.test | RUN | 1.016045 | 4.398958 | 3.912186 | 0.001978 | 0.002079 | 0.002058 |
| test11u.test | RUN | 1.006521 | 4.447877 | 4.093636 | 0.002066 | 0.002345 | 0.002016 |
| misc1.test | RUN | 1.885673 | 11.453650 | 9.058734 | 0.002568 | 0.002517 | 0.002444 |
| misc2.test | RUN | 1.852297 | 10.908055 | 8.711215 | 0.002132 | 0.002421 | 0.002246 |
| test_format.test | RUN | 2.002122 | 13.526887 | 10.144698 | 0.002122 | 0.002257 | 0.002202 |
| test_cycles.test | RUN | 0.844873 | 3.972749 | 3.173601 | 0.001932 | 0.002216 | 0.002088 |
| test_non_char.test | RUN | 1.631858 | 9.350940 | 7.585805 | 0.002115 | 0.002306 | 0.002046 |
| test_static.test | RUN | 0.788516 | 3.600721 | 2.817726 | 0.002023 | 0.002090 | 0.002056 |
| test_actions.test | RUN | 2.022735 | 11.096049 | 9.302318 | 0.002415 | 0.002657 | 0.002417 |
| test_assert.test | RUN | 1.100473 | 4.749944 | 4.184061 | 0.002208 | 0.002426 | 0.002294 |
| test_assert_with_placeholder.test | RUN | 1.043367 | 4.232841 | 3.774218 | 0.002128 | 0.002062 | 0.002007 |
| test_symbols.test | RUN | 2.069804 | 10.832463 | 10.292247 | 0.002662 | 0.002652 | 0.002619 |
| test_dynamic.test | RUN | 1.310916 | 7.325268 | 5.952229 | 0.002193 | 0.002337 | 0.001880 |
| test_dynamic_grammar.test | RUN | 1.376474 | 7.852509 | 6.192495 | 0.001989 | 0.002164 | 0.002254 |
| test_skip.test | RUN | 1.574865 | 7.906906 | 7.132525 | 0.001876 | 0.002214 | 0.002130 |
| multiple_defs.test | LINK | 2.574949 | 14.364683 | 11.986678 | — | — | — |
| test_basic_regex.test | COMPILE | 0.528827 | 1.103553 | 1.469977 | — | — | — |
| test_match_results.test | COMPILE | 0.347687 | 0.751234 | 0.970012 | — | — | — |
| test_regex_algorithms.test | COMPILE | 0.348306 | 0.747075 | 0.969807 | — | — | — |
| test_regex_compiler.test | COMPILE | 0.530305 | 1.208694 | 1.498689 | — | — | — |
| test_regex_constants.test | COMPILE | 0.027256 | 0.047251 | 0.053162 | — | — | — |
| test_regex_error.test | COMPILE | 0.180534 | 0.388814 | 0.530345 | — | — | — |
| test_regex_iterator.test | COMPILE | 0.362328 | 0.736572 | 0.948108 | — | — | — |
| test_regex_primitives.test | COMPILE | 0.523426 | 1.210467 | 1.357163 | — | — | — |
| test_regex_token_iterator.test | COMPILE | 0.329499 | 0.749580 | 0.908622 | — | — | — |
| test_regex_traits.test | COMPILE | 0.194643 | 0.392970 | 0.502265 | — | — | — |
| test_sub_match.test | COMPILE | 0.155291 | 0.254201 | 0.386714 | — | — | — |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 1.086× | 1.081×, 1.091× | 0.994× |
| clang | 0.969× | 0.970×, 0.969× | 1.010× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1364 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44402206984).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| c_traits.test | 4 | 0.004859s | 0.006344s | 0.004903s | byte equality observed |
| c_traits_u.test | 3 | 0.005114s | 0.006733s | 0.005013s | byte equality observed |
| misc1.test | 10 | 0.001504s | 0.001473s | 0.001469s | byte equality observed |
| misc2.test | 10 | 0.001345s | 0.001356s | 0.001302s | byte equality observed |
| regress.test | 3 | 0.005906s | 0.007171s | 0.005462s | byte equality observed |
| regress_u.test | 3 | 0.006002s | 0.007397s | 0.005681s | byte equality observed |
| test1.test | 10 | 0.001280s | 0.001298s | 0.001206s | byte equality observed |
| test10.test | 10 | 0.001280s | 0.001227s | 0.001242s | byte equality observed |
| test10u.test | 10 | 0.001243s | 0.001237s | 0.001208s | byte equality observed |
| test11.test | 10 | 0.001240s | 0.001225s | 0.001225s | byte equality observed |
| test11u.test | 10 | 0.001255s | 0.001279s | 0.001203s | byte equality observed |
| test1u.test | 10 | 0.001256s | 0.001272s | 0.001248s | byte equality observed |
| test2.test | 10 | 0.001301s | 0.001273s | 0.001228s | byte equality observed |
| test2u.test | 10 | 0.001290s | 0.001309s | 0.001259s | byte equality observed |
| test3.test | 10 | 0.001303s | 0.001286s | 0.001248s | byte equality observed |
| test3u.test | 10 | 0.001279s | 0.001313s | 0.001241s | byte equality observed |
| test4.test | 10 | 0.001264s | 0.001275s | 0.001256s | byte equality observed |
| test4u.test | 10 | 0.001274s | 0.001256s | 0.001259s | byte equality observed |
| test5.test | 10 | 0.001283s | 0.001274s | 0.001235s | byte equality observed |
| test5u.test | 10 | 0.001287s | 0.001308s | 0.001281s | byte equality observed |
| test6.test | 10 | 0.001260s | 0.001261s | 0.001231s | byte equality observed |
| test6u.test | 10 | 0.001266s | 0.001276s | 0.001227s | byte equality observed |
| test7.test | 10 | 0.001254s | 0.001243s | 0.001215s | byte equality observed |
| test7u.test | 10 | 0.001256s | 0.001272s | 0.001249s | byte equality observed |
| test8.test | 10 | 0.001250s | 0.001279s | 0.001190s | byte equality observed |
| test8u.test | 10 | 0.001254s | 0.001265s | 0.001217s | byte equality observed |
| test9.test | 10 | 0.001247s | 0.001242s | 0.001239s | byte equality observed |
| test9u.test | 10 | 0.001268s | 0.001273s | 0.001240s | byte equality observed |
| test_actions.test | 10 | 0.001463s | 0.001477s | 0.001428s | byte equality observed |
| test_assert.test | 10 | 0.001325s | 0.001304s | 0.001262s | byte equality observed |
| test_assert_with_placeholder.test | 10 | 0.001250s | 0.001212s | 0.001205s | byte equality observed |
| test_cycles.test | 10 | 0.001266s | 0.001262s | 0.001246s | byte equality observed |
| test_dynamic.test | 10 | 0.001257s | 0.001275s | 0.001217s | byte equality observed |
| test_dynamic_grammar.test | 10 | 0.001314s | 0.001317s | 0.001295s | byte equality observed |
| test_format.test | 10 | 0.001307s | 0.001311s | 0.001285s | byte equality observed |
| test_non_char.test | 10 | 0.001286s | 0.001249s | 0.001279s | byte equality observed |
| test_skip.test | 9 | 0.001230s | 0.001228s | 0.001239s | byte equality observed |
| test_static.test | 10 | 0.001248s | 0.001205s | 0.001221s | byte equality observed |
| test_symbols.test | 10 | 0.001433s | 0.001414s | 0.001383s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44402206984).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
