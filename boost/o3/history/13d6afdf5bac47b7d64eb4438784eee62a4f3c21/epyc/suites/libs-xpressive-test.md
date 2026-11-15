# libs/xpressive/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| regress.test | RUN | 2.887512 | 17.895611 | 15.074774 | 0.010705 | 0.013592 | 0.008242 |
| regress_u.test | RUN | 3.052240 | 18.273717 | 15.037991 | 0.009941 | 0.014092 | 0.010043 |
| c_traits.test | RUN | 2.823515 | 17.582625 | 14.258658 | 0.008075 | 0.011782 | 0.008266 |
| c_traits_u.test | RUN | 3.031126 | 18.337452 | 14.900248 | 0.008899 | 0.012238 | 0.008443 |
| test1.test | RUN | 1.101876 | 4.620627 | 4.470165 | 0.003154 | 0.003272 | 0.002861 |
| test2.test | RUN | 1.407416 | 6.604301 | 6.374152 | 0.003172 | 0.003394 | 0.003299 |
| test3.test | RUN | 1.452271 | 6.641837 | 6.439241 | 0.002709 | 0.003396 | 0.003291 |
| test4.test | RUN | 1.271731 | 5.456843 | 5.280903 | 0.003293 | 0.003218 | 0.003228 |
| test5.test | RUN | 1.331934 | 5.852647 | 5.821156 | 0.002959 | 0.003266 | 0.003382 |
| test6.test | RUN | 1.219228 | 4.929453 | 4.886592 | 0.003242 | 0.003297 | 0.003250 |
| test7.test | RUN | 1.186115 | 5.077692 | 4.942242 | 0.003158 | 0.003310 | 0.002942 |
| test8.test | RUN | 1.186972 | 4.882495 | 4.775882 | 0.003103 | 0.003296 | 0.003149 |
| test9.test | RUN | 1.247710 | 5.328922 | 5.382765 | 0.003250 | 0.003415 | 0.003299 |
| test10.test | RUN | 1.234823 | 5.050587 | 5.017253 | 0.003144 | 0.003358 | 0.003200 |
| test11.test | RUN | 1.196667 | 4.821161 | 4.927281 | 0.003101 | 0.003362 | 0.003282 |
| test1u.test | RUN | 1.088004 | 4.623838 | 4.292113 | 0.003430 | 0.003273 | 0.003289 |
| test2u.test | RUN | 1.452657 | 6.821620 | 6.728557 | 0.003283 | 0.003442 | 0.003334 |
| test3u.test | RUN | 1.514589 | 6.993985 | 6.840705 | 0.003073 | 0.003412 | 0.003432 |
| test4u.test | RUN | 1.299082 | 5.391182 | 5.401652 | 0.003210 | 0.003345 | 0.003216 |
| test5u.test | RUN | 1.374714 | 5.968801 | 6.100811 | 0.002979 | 0.003304 | 0.003460 |
| test6u.test | RUN | 1.269250 | 5.040121 | 5.070239 | 0.003195 | 0.003427 | 0.003384 |
| test7u.test | RUN | 1.240736 | 5.133364 | 5.103338 | 0.003071 | 0.003313 | 0.003268 |
| test8u.test | RUN | 1.187538 | 4.903333 | 4.783729 | 0.002850 | 0.003383 | 0.003295 |
| test9u.test | RUN | 1.287471 | 5.205579 | 5.486034 | 0.003325 | 0.003391 | 0.003354 |
| test10u.test | RUN | 1.255569 | 4.945093 | 4.996576 | 0.003241 | 0.003243 | 0.003242 |
| test11u.test | RUN | 1.243999 | 4.767579 | 5.184320 | 0.003389 | 0.003253 | 0.003344 |
| misc1.test | RUN | 2.141090 | 12.467393 | 11.196272 | 0.004175 | 0.004238 | 0.004256 |
| misc2.test | RUN | 2.233671 | 11.734120 | 10.881522 | 0.003614 | 0.003731 | 0.003738 |
| test_format.test | RUN | 2.272177 | 14.590324 | 12.376056 | 0.003346 | 0.003538 | 0.003493 |
| test_cycles.test | RUN | 1.060837 | 4.406985 | 4.109856 | 0.003086 | 0.003292 | 0.003211 |
| test_non_char.test | RUN | 1.901307 | 10.163999 | 9.326854 | 0.003288 | 0.003518 | 0.003383 |
| test_static.test | RUN | 0.993936 | 4.077627 | 3.596466 | 0.003342 | 0.002917 | 0.003252 |
| test_actions.test | RUN | 2.292339 | 12.530446 | 11.462743 | 0.004202 | 0.004560 | 0.004436 |
| test_assert.test | RUN | 1.322766 | 5.370307 | 5.237475 | 0.003535 | 0.003629 | 0.003511 |
| test_assert_with_placeholder.test | RUN | 1.268024 | 4.806753 | 4.802467 | 0.003135 | 0.003367 | 0.003135 |
| test_symbols.test | RUN | 2.400953 | 12.638173 | 12.928729 | 0.004465 | 0.004566 | 0.004459 |
| test_dynamic.test | RUN | 1.532127 | 8.209921 | 7.421467 | 0.003246 | 0.003250 | 0.003173 |
| test_dynamic_grammar.test | RUN | 1.549025 | 8.915114 | 7.611025 | 0.003346 | 0.003378 | 0.003532 |
| test_skip.test | RUN | 1.845838 | 9.159522 | 9.002905 | 0.003047 | 0.003314 | 0.003319 |
| multiple_defs.test | LINK | 2.974705 | 16.272902 | 14.610574 | — | — | — |
| test_basic_regex.test | COMPILE | 0.689632 | 1.357734 | 1.945462 | — | — | — |
| test_match_results.test | COMPILE | 0.460923 | 0.953352 | 1.272994 | — | — | — |
| test_regex_algorithms.test | COMPILE | 0.448041 | 0.936334 | 1.339881 | — | — | — |
| test_regex_compiler.test | COMPILE | 0.681354 | 1.537930 | 1.994665 | — | — | — |
| test_regex_constants.test | COMPILE | 0.039847 | 0.063986 | 0.073826 | — | — | — |
| test_regex_error.test | COMPILE | 0.268900 | 0.516178 | 0.723472 | — | — | — |
| test_regex_iterator.test | COMPILE | 0.453616 | 0.926956 | 1.302378 | — | — | — |
| test_regex_primitives.test | COMPILE | 0.659561 | 1.491987 | 1.746750 | — | — | — |
| test_regex_token_iterator.test | COMPILE | 0.455674 | 0.928150 | 1.261709 | — | — | — |
| test_regex_traits.test | COMPILE | 0.260880 | 0.511132 | 0.687705 | — | — | — |
| test_sub_match.test | COMPILE | 0.210270 | 0.399824 | 0.333925 | — | — | — |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 1.101×† | 1.066×, 1.136× | 1.018× |
| clang | 0.947× | 0.933×, 0.960× | 1.001× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1363 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43648658351).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| c_traits.test | 3 | 0.007266s | 0.010238s | 0.006607s | byte equality observed |
| c_traits_u.test | 3 | 0.007874s | 0.010510s | 0.006864s | byte equality observed |
| misc1.test | 8 | 0.002618s | 0.002580s | 0.002531s | byte equality observed |
| misc2.test | 9 | 0.002275s | 0.002267s | 0.002258s | byte equality observed |
| regress.test | 3 | 0.008950s | 0.011804s | 0.008162s | byte equality observed |
| regress_u.test | 3 | 0.009370s | 0.011903s | 0.008131s | byte equality observed |
| test1.test | 10 | 0.002061s | 0.002018s | 0.002009s | byte equality observed |
| test10.test | 10 | 0.002073s | 0.001994s | 0.001976s | byte equality observed |
| test10u.test | 10 | 0.002028s | 0.001994s | 0.001965s | byte equality observed |
| test11.test | 10 | 0.002065s | 0.001979s | 0.002008s | byte equality observed |
| test11u.test | 10 | 0.002058s | 0.002033s | 0.002031s | byte equality observed |
| test1u.test | 10 | 0.002087s | 0.002041s | 0.002029s | byte equality observed |
| test2.test | 10 | 0.002093s | 0.002067s | 0.002061s | byte equality observed |
| test2u.test | 10 | 0.002077s | 0.002110s | 0.002061s | byte equality observed |
| test3.test | 10 | 0.002062s | 0.002102s | 0.002043s | byte equality observed |
| test3u.test | 10 | 0.002089s | 0.002115s | 0.002067s | byte equality observed |
| test4.test | 10 | 0.002087s | 0.002024s | 0.002029s | byte equality observed |
| test4u.test | 9 | 0.002077s | 0.002044s | 0.002006s | byte equality observed |
| test5.test | 10 | 0.002073s | 0.002098s | 0.002039s | byte equality observed |
| test5u.test | 10 | 0.002083s | 0.002091s | 0.002023s | byte equality observed |
| test6.test | 10 | 0.002067s | 0.002011s | 0.001988s | byte equality observed |
| test6u.test | 10 | 0.002066s | 0.002102s | 0.001987s | byte equality observed |
| test7.test | 10 | 0.002044s | 0.002055s | 0.002002s | byte equality observed |
| test7u.test | 9 | 0.002088s | 0.002074s | 0.002032s | byte equality observed |
| test8.test | 10 | 0.002041s | 0.002062s | 0.002009s | byte equality observed |
| test8u.test | 10 | 0.002063s | 0.002001s | 0.002011s | byte equality observed |
| test9.test | 10 | 0.002065s | 0.002064s | 0.002026s | byte equality observed |
| test9u.test | 9 | 0.002065s | 0.002052s | 0.001987s | byte equality observed |
| test_actions.test | 8 | 0.002625s | 0.002616s | 0.002478s | byte equality observed |
| test_assert.test | 10 | 0.002153s | 0.002140s | 0.002164s | byte equality observed |
| test_assert_with_placeholder.test | 10 | 0.002046s | 0.002003s | 0.001986s | byte equality observed |
| test_cycles.test | 10 | 0.002060s | 0.002044s | 0.001980s | byte equality observed |
| test_dynamic.test | 10 | 0.002059s | 0.002020s | 0.001991s | byte equality observed |
| test_dynamic_grammar.test | 10 | 0.002192s | 0.002165s | 0.002134s | byte equality observed |
| test_format.test | 9 | 0.002150s | 0.002150s | 0.002059s | byte equality observed |
| test_non_char.test | 7 | 0.002145s | 0.002120s | 0.002093s | byte equality observed |
| test_skip.test | 10 | 0.001978s | 0.002015s | 0.001940s | byte equality observed |
| test_static.test | 10 | 0.001902s | 0.001874s | 0.001779s | byte equality observed |
| test_symbols.test | 8 | 0.002440s | 0.002484s | 0.002357s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43648658351).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
