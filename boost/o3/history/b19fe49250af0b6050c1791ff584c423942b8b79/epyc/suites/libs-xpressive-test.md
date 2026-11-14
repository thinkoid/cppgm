# libs/xpressive/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| regress.test | RUN | 2.789374 | 17.575999 | 14.233419 | 0.010641 | 0.013860 | 0.009642 |
| regress_u.test | RUN | 2.961722 | 18.144630 | 14.154977 | 0.010803 | 0.013192 | 0.009834 |
| c_traits.test | RUN | 2.799709 | 17.404137 | 13.443788 | 0.008272 | 0.011535 | 0.008146 |
| c_traits_u.test | RUN | 2.971735 | 17.989274 | 14.126951 | 0.008756 | 0.012656 | 0.008633 |
| test1.test | RUN | 1.065788 | 4.502806 | 4.202736 | 0.003097 | 0.003297 | 0.003215 |
| test2.test | RUN | 1.401231 | 6.407565 | 6.041419 | 0.002933 | 0.003351 | 0.003348 |
| test3.test | RUN | 1.443557 | 6.401576 | 6.160278 | 0.002769 | 0.002968 | 0.003076 |
| test4.test | RUN | 1.222819 | 5.294488 | 5.110428 | 0.003026 | 0.003134 | 0.003261 |
| test5.test | RUN | 1.317700 | 5.689736 | 5.503890 | 0.002971 | 0.003208 | 0.002986 |
| test6.test | RUN | 1.183705 | 4.849710 | 4.689751 | 0.002858 | 0.002913 | 0.002828 |
| test7.test | RUN | 1.173827 | 4.898572 | 4.645593 | 0.003055 | 0.003219 | 0.002936 |
| test8.test | RUN | 1.149352 | 4.717758 | 4.475191 | 0.002814 | 0.003079 | 0.003151 |
| test9.test | RUN | 1.255329 | 5.129737 | 5.084081 | 0.003102 | 0.003007 | 0.003114 |
| test10.test | RUN | 1.197595 | 4.961524 | 4.705756 | 0.002614 | 0.002882 | 0.002995 |
| test11.test | RUN | 1.163628 | 4.733756 | 4.693170 | 0.002997 | 0.003172 | 0.003073 |
| test1u.test | RUN | 1.075956 | 4.454159 | 4.090786 | 0.003309 | 0.003130 | 0.003151 |
| test2u.test | RUN | 1.437106 | 6.604881 | 6.314127 | 0.003102 | 0.003439 | 0.003208 |
| test3u.test | RUN | 1.436406 | 6.839063 | 6.471728 | 0.003283 | 0.003415 | 0.003280 |
| test4u.test | RUN | 1.238450 | 5.283138 | 5.043699 | 0.003135 | 0.003248 | 0.003085 |
| test5u.test | RUN | 1.308643 | 5.809379 | 5.659338 | 0.003264 | 0.003304 | 0.003163 |
| test6u.test | RUN | 1.214799 | 4.874482 | 4.812982 | 0.003291 | 0.003251 | 0.003142 |
| test7u.test | RUN | 1.199381 | 5.112275 | 4.825548 | 0.003025 | 0.003114 | 0.003114 |
| test8u.test | RUN | 1.145996 | 4.775212 | 4.533674 | 0.002940 | 0.003314 | 0.003176 |
| test9u.test | RUN | 1.252524 | 5.139060 | 5.080532 | 0.003269 | 0.003171 | 0.003141 |
| test10u.test | RUN | 1.228768 | 4.895584 | 4.750994 | 0.003189 | 0.003292 | 0.003099 |
| test11u.test | RUN | 1.248150 | 4.863897 | 4.870382 | 0.003213 | 0.003266 | 0.003130 |
| misc1.test | RUN | 2.115996 | 12.338363 | 10.342365 | 0.003999 | 0.003701 | 0.003987 |
| misc2.test | RUN | 2.143122 | 11.520461 | 10.100209 | 0.003200 | 0.003439 | 0.003628 |
| test_format.test | RUN | 2.196881 | 14.237537 | 11.365252 | 0.003321 | 0.003192 | 0.003119 |
| test_cycles.test | RUN | 1.060695 | 4.340067 | 3.843870 | 0.003125 | 0.003262 | 0.003054 |
| test_non_char.test | RUN | 1.882592 | 9.984668 | 8.500570 | 0.003499 | 0.003392 | 0.003204 |
| test_static.test | RUN | 0.944048 | 3.966213 | 3.473745 | 0.003157 | 0.003169 | 0.003092 |
| test_actions.test | RUN | 2.344206 | 11.982830 | 10.544843 | 0.004152 | 0.004199 | 0.004182 |
| test_assert.test | RUN | 1.337073 | 5.086813 | 4.998334 | 0.003388 | 0.003174 | 0.003331 |
| test_assert_with_placeholder.test | RUN | 1.266025 | 4.789354 | 4.479750 | 0.003111 | 0.003040 | 0.003064 |
| test_symbols.test | RUN | 2.432564 | 11.743056 | 11.932433 | 0.004215 | 0.004362 | 0.004435 |
| test_dynamic.test | RUN | 1.526774 | 7.916169 | 6.779147 | 0.003340 | 0.002722 | 0.003169 |
| test_dynamic_grammar.test | RUN | 1.530854 | 8.345823 | 7.138061 | 0.003481 | 0.003190 | 0.003243 |
| test_skip.test | RUN | 1.882276 | 8.579738 | 8.313977 | 0.003428 | 0.003255 | 0.003073 |
| multiple_defs.test | LINK | 2.979596 | 15.501438 | 13.716377 | — | — | — |
| test_basic_regex.test | COMPILE | 0.674648 | 1.299118 | 1.915554 | — | — | — |
| test_match_results.test | COMPILE | 0.472288 | 0.919391 | 1.329820 | — | — | — |
| test_regex_algorithms.test | COMPILE | 0.471451 | 0.909111 | 1.298941 | — | — | — |
| test_regex_compiler.test | COMPILE | 0.688757 | 1.475360 | 1.869108 | — | — | — |
| test_regex_constants.test | COMPILE | 0.038236 | 0.064627 | 0.071716 | — | — | — |
| test_regex_error.test | COMPILE | 0.247841 | 0.483159 | 0.683168 | — | — | — |
| test_regex_iterator.test | COMPILE | 0.446863 | 0.899364 | 1.263859 | — | — | — |
| test_regex_primitives.test | COMPILE | 0.656025 | 1.451861 | 1.892882 | — | — | — |
| test_regex_token_iterator.test | COMPILE | 0.439639 | 0.899459 | 1.074143 | — | — | — |
| test_regex_traits.test | COMPILE | 0.262011 | 0.481058 | 0.699018 | — | — | — |
| test_sub_match.test | COMPILE | 0.159873 | 0.393949 | 0.510913 | — | — | — |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 1.121× | 1.096×, 1.146× | 0.998× |
| clang | 0.955× | 0.950×, 0.960× | 1.014× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1361 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43632677224).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| c_traits.test | 3 | 0.007209s | 0.010092s | 0.006651s | byte equality observed |
| c_traits_u.test | 3 | 0.007904s | 0.010590s | 0.007161s | byte equality observed |
| misc1.test | 8 | 0.002590s | 0.002530s | 0.002496s | byte equality observed |
| misc2.test | 9 | 0.002341s | 0.002200s | 0.002249s | byte equality observed |
| regress.test | 3 | 0.009162s | 0.011647s | 0.007883s | byte equality observed |
| regress_u.test | 3 | 0.008996s | 0.011956s | 0.008304s | byte equality observed |
| test1.test | 10 | 0.002032s | 0.002008s | 0.001991s | byte equality observed |
| test10.test | 10 | 0.002030s | 0.001977s | 0.001958s | byte equality observed |
| test10u.test | 10 | 0.002019s | 0.001973s | 0.001961s | byte equality observed |
| test11.test | 10 | 0.002028s | 0.001942s | 0.001964s | byte equality observed |
| test11u.test | 10 | 0.002030s | 0.001991s | 0.001979s | byte equality observed |
| test1u.test | 10 | 0.002033s | 0.002001s | 0.002005s | byte equality observed |
| test2.test | 10 | 0.002057s | 0.002062s | 0.002038s | byte equality observed |
| test2u.test | 10 | 0.002091s | 0.002098s | 0.002028s | byte equality observed |
| test3.test | 10 | 0.002087s | 0.002099s | 0.002018s | byte equality observed |
| test3u.test | 10 | 0.002053s | 0.002091s | 0.002042s | byte equality observed |
| test4.test | 10 | 0.002059s | 0.002024s | 0.001998s | byte equality observed |
| test4u.test | 10 | 0.002027s | 0.002027s | 0.001991s | byte equality observed |
| test5.test | 10 | 0.002052s | 0.002067s | 0.002034s | byte equality observed |
| test5u.test | 10 | 0.002034s | 0.002080s | 0.002038s | byte equality observed |
| test6.test | 10 | 0.001999s | 0.001999s | 0.001952s | byte equality observed |
| test6u.test | 10 | 0.002027s | 0.002043s | 0.001954s | byte equality observed |
| test7.test | 10 | 0.002036s | 0.002003s | 0.001985s | byte equality observed |
| test7u.test | 10 | 0.002025s | 0.002027s | 0.001965s | byte equality observed |
| test8.test | 10 | 0.002021s | 0.002005s | 0.001961s | byte equality observed |
| test8u.test | 10 | 0.002016s | 0.002000s | 0.001975s | byte equality observed |
| test9.test | 10 | 0.002007s | 0.002010s | 0.002007s | byte equality observed |
| test9u.test | 10 | 0.002011s | 0.002010s | 0.002026s | byte equality observed |
| test_actions.test | 8 | 0.002557s | 0.002626s | 0.002545s | byte equality observed |
| test_assert.test | 10 | 0.002126s | 0.002122s | 0.002104s | byte equality observed |
| test_assert_with_placeholder.test | 10 | 0.001996s | 0.001977s | 0.001973s | byte equality observed |
| test_cycles.test | 10 | 0.002056s | 0.001998s | 0.001999s | byte equality observed |
| test_dynamic.test | 10 | 0.002016s | 0.002002s | 0.001960s | byte equality observed |
| test_dynamic_grammar.test | 10 | 0.002132s | 0.002158s | 0.002127s | byte equality observed |
| test_format.test | 10 | 0.002086s | 0.002126s | 0.002069s | byte equality observed |
| test_non_char.test | 10 | 0.002128s | 0.002052s | 0.002034s | byte equality observed |
| test_skip.test | 10 | 0.001989s | 0.001911s | 0.001965s | byte equality observed |
| test_static.test | 10 | 0.001845s | 0.001842s | 0.001885s | byte equality observed |
| test_symbols.test | 9 | 0.002356s | 0.002396s | 0.002339s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43632677224).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
