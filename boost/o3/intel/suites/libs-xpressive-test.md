# libs/xpressive/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| regress.test | RUN | 2.228472 | 14.257377 | 10.060629 | 0.007832 | 0.009896 | 0.007246 |
| regress_u.test | RUN | 2.336164 | 14.785062 | 10.155682 | 0.008090 | 0.010014 | 0.007660 |
| c_traits.test | RUN | 2.180404 | 14.037072 | 9.767686 | 0.006262 | 0.008713 | 0.006279 |
| c_traits_u.test | RUN | 2.344530 | 14.401766 | 10.105345 | 0.006931 | 0.009092 | 0.006857 |
| test1.test | RUN | 0.764782 | 3.443554 | 2.716738 | 0.002044 | 0.002171 | 0.002092 |
| test2.test | RUN | 1.067979 | 4.928358 | 4.035669 | 0.001946 | 0.001958 | 0.002169 |
| test3.test | RUN | 1.042688 | 4.976391 | 4.265396 | 0.001993 | 0.002216 | 0.001664 |
| test4.test | RUN | 0.923612 | 4.049935 | 3.389861 | 0.002119 | 0.001992 | 0.001857 |
| test5.test | RUN | 0.964790 | 4.357986 | 3.710281 | 0.002169 | 0.002037 | 0.002107 |
| test6.test | RUN | 0.860559 | 3.777987 | 3.116969 | 0.001918 | 0.002172 | 0.002053 |
| test7.test | RUN | 0.839653 | 3.776085 | 3.096927 | 0.002003 | 0.001952 | 0.001996 |
| test8.test | RUN | 0.863058 | 3.654967 | 2.977372 | 0.001833 | 0.002019 | 0.002011 |
| test9.test | RUN | 0.930053 | 4.117438 | 3.434493 | 0.001971 | 0.002117 | 0.002092 |
| test10.test | RUN | 0.889110 | 3.894055 | 3.213113 | 0.001781 | 0.001953 | 0.001905 |
| test11.test | RUN | 0.857788 | 3.728860 | 3.163208 | 0.001859 | 0.002164 | 0.002195 |
| test1u.test | RUN | 0.790065 | 3.441711 | 2.768305 | 0.002062 | 0.002011 | 0.002140 |
| test2u.test | RUN | 1.074168 | 5.128878 | 4.310305 | 0.001926 | 0.002244 | 0.001978 |
| test3u.test | RUN | 1.073731 | 5.267253 | 4.459657 | 0.002035 | 0.002074 | 0.002274 |
| test4u.test | RUN | 0.927178 | 4.075611 | 3.395158 | 0.001991 | 0.002221 | 0.002117 |
| test5u.test | RUN | 0.990986 | 4.493359 | 3.871395 | 0.002056 | 0.002212 | 0.002073 |
| test6u.test | RUN | 0.913266 | 3.698523 | 3.219155 | 0.001924 | 0.002125 | 0.002129 |
| test7u.test | RUN | 0.873148 | 3.929903 | 3.305229 | 0.001969 | 0.001996 | 0.002055 |
| test8u.test | RUN | 0.826215 | 3.672432 | 2.977519 | 0.002178 | 0.001978 | 0.001909 |
| test9u.test | RUN | 0.916830 | 4.010979 | 3.470476 | 0.001994 | 0.002216 | 0.002206 |
| test10u.test | RUN | 0.888457 | 3.773699 | 3.195413 | 0.002123 | 0.002161 | 0.001912 |
| test11u.test | RUN | 0.906664 | 3.813567 | 3.273435 | 0.001980 | 0.002168 | 0.001889 |
| misc1.test | RUN | 1.645464 | 9.688769 | 7.302969 | 0.002425 | 0.002255 | 0.002596 |
| misc2.test | RUN | 1.665022 | 9.185940 | 7.128687 | 0.002091 | 0.002023 | 0.002065 |
| test_format.test | RUN | 1.741971 | 11.474078 | 8.180196 | 0.002047 | 0.001937 | 0.002182 |
| test_cycles.test | RUN | 0.732942 | 3.331223 | 2.520950 | 0.001843 | 0.002183 | 0.001841 |
| test_non_char.test | RUN | 1.448076 | 7.893182 | 5.998633 | 0.002000 | 0.001925 | 0.001860 |
| test_static.test | RUN | 0.684093 | 3.041817 | 2.199158 | 0.002089 | 0.001875 | 0.001752 |
| test_actions.test | RUN | 1.765272 | 9.163092 | 7.308204 | 0.002215 | 0.002325 | 0.002187 |
| test_assert.test | RUN | 0.973135 | 3.986258 | 3.337253 | 0.002003 | 0.002259 | 0.001869 |
| test_assert_with_placeholder.test | RUN | 0.918560 | 3.660994 | 3.022191 | 0.001973 | 0.002078 | 0.001850 |
| test_symbols.test | RUN | 1.801932 | 8.979569 | 8.042960 | 0.002333 | 0.002245 | 0.002133 |
| test_dynamic.test | RUN | 1.147384 | 6.252289 | 4.802806 | 0.001896 | 0.001927 | 0.001875 |
| test_dynamic_grammar.test | RUN | 1.196252 | 6.653445 | 4.997531 | 0.002030 | 0.002020 | 0.002089 |
| test_skip.test | RUN | 1.376905 | 6.646046 | 5.581207 | 0.001816 | 0.001819 | 0.001830 |
| multiple_defs.test | LINK | 2.278676 | 12.612208 | 9.637015 | — | — | — |
| test_basic_regex.test | COMPILE | 0.461830 | 0.908870 | 1.091940 | — | — | — |
| test_match_results.test | COMPILE | 0.301420 | 0.639423 | 0.790955 | — | — | — |
| test_regex_algorithms.test | COMPILE | 0.298227 | 0.613162 | 0.755008 | — | — | — |
| test_regex_compiler.test | COMPILE | 0.457427 | 1.028006 | 1.115147 | — | — | — |
| test_regex_constants.test | COMPILE | 0.023843 | 0.041911 | 0.046105 | — | — | — |
| test_regex_error.test | COMPILE | 0.158427 | 0.323610 | 0.421454 | — | — | — |
| test_regex_iterator.test | COMPILE | 0.298776 | 0.614080 | 0.754467 | — | — | — |
| test_regex_primitives.test | COMPILE | 0.454764 | 1.018109 | 1.120069 | — | — | — |
| test_regex_token_iterator.test | COMPILE | 0.298340 | 0.660433 | 0.738988 | — | — | — |
| test_regex_traits.test | COMPILE | 0.164213 | 0.323838 | 0.399839 | — | — | — |
| test_sub_match.test | COMPILE | 0.138294 | 0.263810 | 0.325991 | — | — | — |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 1.087× | 1.087×, 1.086× | 1.003× |
| clang | 0.966× | 0.967×, 0.964× | 1.002× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1364 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/43947487361).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| c_traits.test | 3 | 0.005876s | 0.007916s | 0.005820s | byte equality observed |
| c_traits_u.test | 3 | 0.006328s | 0.008304s | 0.006164s | byte equality observed |
| misc1.test | 8 | 0.001847s | 0.001840s | 0.001800s | byte equality observed |
| misc2.test | 9 | 0.001664s | 0.001635s | 0.001623s | byte equality observed |
| regress.test | 3 | 0.007213s | 0.008907s | 0.006682s | byte equality observed |
| regress_u.test | 3 | 0.007443s | 0.009176s | 0.006948s | byte equality observed |
| test1.test | 10 | 0.001544s | 0.001567s | 0.001506s | byte equality observed |
| test10.test | 10 | 0.001536s | 0.001532s | 0.001490s | byte equality observed |
| test10u.test | 10 | 0.001556s | 0.001520s | 0.001490s | byte equality observed |
| test11.test | 10 | 0.001534s | 0.001530s | 0.001501s | byte equality observed |
| test11u.test | 10 | 0.001563s | 0.001528s | 0.001523s | byte equality observed |
| test1u.test | 10 | 0.001552s | 0.001545s | 0.001515s | byte equality observed |
| test2.test | 10 | 0.001591s | 0.001595s | 0.001546s | byte equality observed |
| test2u.test | 10 | 0.001589s | 0.001625s | 0.001566s | byte equality observed |
| test3.test | 10 | 0.001580s | 0.001600s | 0.001535s | byte equality observed |
| test3u.test | 9 | 0.001593s | 0.001608s | 0.001550s | byte equality observed |
| test4.test | 10 | 0.001553s | 0.001560s | 0.001523s | byte equality observed |
| test4u.test | 10 | 0.001578s | 0.001581s | 0.001530s | byte equality observed |
| test5.test | 10 | 0.001574s | 0.001589s | 0.001530s | byte equality observed |
| test5u.test | 10 | 0.001581s | 0.001589s | 0.001529s | byte equality observed |
| test6.test | 10 | 0.001567s | 0.001547s | 0.001504s | byte equality observed |
| test6u.test | 10 | 0.001570s | 0.001563s | 0.001527s | byte equality observed |
| test7.test | 10 | 0.001544s | 0.001550s | 0.001499s | byte equality observed |
| test7u.test | 10 | 0.001569s | 0.001561s | 0.001513s | byte equality observed |
| test8.test | 9 | 0.001548s | 0.001552s | 0.001490s | byte equality observed |
| test8u.test | 10 | 0.001554s | 0.001537s | 0.001514s | byte equality observed |
| test9.test | 10 | 0.001554s | 0.001553s | 0.001508s | byte equality observed |
| test9u.test | 10 | 0.001562s | 0.001547s | 0.001533s | byte equality observed |
| test_actions.test | 10 | 0.001832s | 0.001818s | 0.001763s | byte equality observed |
| test_assert.test | 10 | 0.001599s | 0.001589s | 0.001542s | byte equality observed |
| test_assert_with_placeholder.test | 10 | 0.001529s | 0.001514s | 0.001487s | byte equality observed |
| test_cycles.test | 10 | 0.001559s | 0.001557s | 0.001508s | byte equality observed |
| test_dynamic.test | 9 | 0.001534s | 0.001531s | 0.001510s | byte equality observed |
| test_dynamic_grammar.test | 10 | 0.001634s | 0.001610s | 0.001597s | byte equality observed |
| test_format.test | 10 | 0.001613s | 0.001604s | 0.001551s | byte equality observed |
| test_non_char.test | 10 | 0.001570s | 0.001545s | 0.001526s | byte equality observed |
| test_skip.test | 10 | 0.001537s | 0.001510s | 0.001466s | byte equality observed |
| test_static.test | 10 | 0.001494s | 0.001492s | 0.001455s | byte equality observed |
| test_symbols.test | 9 | 0.001802s | 0.001789s | 0.001743s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/43947487361).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
