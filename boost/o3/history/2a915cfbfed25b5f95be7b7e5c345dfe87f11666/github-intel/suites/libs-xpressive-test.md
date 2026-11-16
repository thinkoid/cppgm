# libs/xpressive/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| regress.test | RUN | 2.621024 | 16.966004 | 11.981037 | 0.008976 | 0.010633 | 0.007884 |
| regress_u.test | RUN | 2.760658 | 17.468512 | 12.191754 | 0.009099 | 0.011095 | 0.008247 |
| c_traits.test | RUN | 2.606602 | 16.581466 | 11.730016 | 0.007193 | 0.009081 | 0.006928 |
| c_traits_u.test | RUN | 2.810080 | 17.303936 | 12.025526 | 0.008067 | 0.009675 | 0.007257 |
| test1.test | RUN | 0.942082 | 4.155621 | 3.455960 | 0.002202 | 0.002318 | 0.001867 |
| test2.test | RUN | 1.260933 | 6.074705 | 5.143778 | 0.002550 | 0.002408 | 0.002024 |
| test3.test | RUN | 1.263112 | 6.055307 | 5.197110 | 0.002198 | 0.002265 | 0.001955 |
| test4.test | RUN | 1.090813 | 4.935279 | 4.226728 | 0.002130 | 0.002266 | 0.001909 |
| test5.test | RUN | 1.159680 | 5.353181 | 4.445781 | 0.002343 | 0.002354 | 0.001845 |
| test6.test | RUN | 1.057112 | 4.448122 | 3.792417 | 0.001578 | 0.002258 | 0.001887 |
| test7.test | RUN | 1.019721 | 4.523529 | 3.900366 | 0.002206 | 0.002269 | 0.001914 |
| test8.test | RUN | 1.011242 | 4.433580 | 3.791141 | 0.002132 | 0.002229 | 0.001982 |
| test9.test | RUN | 1.107063 | 4.732736 | 4.174329 | 0.002289 | 0.002360 | 0.002031 |
| test10.test | RUN | 1.067225 | 4.527162 | 3.833825 | 0.002102 | 0.002372 | 0.001984 |
| test11.test | RUN | 1.032475 | 4.394608 | 3.865737 | 0.002119 | 0.002236 | 0.001967 |
| test1u.test | RUN | 0.940370 | 4.097163 | 3.378270 | 0.002479 | 0.002115 | 0.001924 |
| test2u.test | RUN | 1.294671 | 6.078873 | 5.164358 | 0.002507 | 0.002132 | 0.001971 |
| test3u.test | RUN | 1.319748 | 6.322265 | 5.291869 | 0.002448 | 0.002228 | 0.001944 |
| test4u.test | RUN | 1.116876 | 4.817964 | 4.207416 | 0.002291 | 0.002123 | 0.002158 |
| test5u.test | RUN | 1.205513 | 5.408340 | 4.742666 | 0.002116 | 0.002240 | 0.001998 |
| test6u.test | RUN | 1.091728 | 4.452416 | 3.906151 | 0.002486 | 0.002250 | 0.002025 |
| test7u.test | RUN | 1.038233 | 4.762587 | 3.985964 | 0.002424 | 0.002116 | 0.001963 |
| test8u.test | RUN | 1.005055 | 4.379409 | 3.793626 | 0.002319 | 0.002144 | 0.002102 |
| test9u.test | RUN | 1.088670 | 4.689396 | 4.328083 | 0.002247 | 0.002230 | 0.001962 |
| test10u.test | RUN | 1.077522 | 4.396153 | 3.848289 | 0.002660 | 0.002258 | 0.001908 |
| test11u.test | RUN | 1.081934 | 4.457722 | 4.031411 | 0.002238 | 0.002338 | 0.002094 |
| misc1.test | RUN | 1.946450 | 11.607182 | 9.153441 | 0.002484 | 0.002658 | 0.002480 |
| misc2.test | RUN | 1.990623 | 11.013376 | 8.861295 | 0.002663 | 0.002451 | 0.002174 |
| test_format.test | RUN | 2.093337 | 13.479603 | 10.091909 | 0.002577 | 0.002292 | 0.002085 |
| test_cycles.test | RUN | 0.895366 | 3.986074 | 3.143473 | 0.002148 | 0.002193 | 0.002174 |
| test_non_char.test | RUN | 1.707538 | 9.501764 | 7.505215 | 0.002357 | 0.002794 | 0.002249 |
| test_static.test | RUN | 0.860113 | 3.652010 | 2.831308 | 0.002457 | 0.002457 | 0.002112 |
| test_actions.test | RUN | 2.142616 | 11.176835 | 9.159683 | 0.002601 | 0.002792 | 0.002316 |
| test_assert.test | RUN | 1.168796 | 4.776342 | 4.154312 | 0.002492 | 0.002317 | 0.002151 |
| test_assert_with_placeholder.test | RUN | 1.100104 | 4.343155 | 3.770373 | 0.002275 | 0.002184 | 0.001884 |
| test_symbols.test | RUN | 2.217152 | 11.053402 | 10.162248 | 0.002731 | 0.002853 | 0.002397 |
| test_dynamic.test | RUN | 1.362693 | 7.444225 | 6.021935 | 0.002311 | 0.002414 | 0.001527 |
| test_dynamic_grammar.test | RUN | 1.404658 | 7.965559 | 6.145601 | 0.002493 | 0.002248 | 0.002004 |
| test_skip.test | RUN | 1.691570 | 7.979917 | 6.998106 | 0.002154 | 0.001930 | 0.001866 |
| multiple_defs.test | LINK | 2.705955 | 14.152370 | 11.924132 | — | — | — |
| test_basic_regex.test | COMPILE | 0.558395 | 1.113832 | 1.447783 | — | — | — |
| test_match_results.test | COMPILE | 0.370196 | 0.739527 | 1.027604 | — | — | — |
| test_regex_algorithms.test | COMPILE | 0.364670 | 0.741401 | 0.981325 | — | — | — |
| test_regex_compiler.test | COMPILE | 0.562845 | 1.203715 | 1.514261 | — | — | — |
| test_regex_constants.test | COMPILE | 0.027922 | 0.047919 | 0.051501 | — | — | — |
| test_regex_error.test | COMPILE | 0.192080 | 0.395912 | 0.528892 | — | — | — |
| test_regex_iterator.test | COMPILE | 0.372108 | 0.749942 | 0.972648 | — | — | — |
| test_regex_primitives.test | COMPILE | 0.546124 | 1.212081 | 1.357443 | — | — | — |
| test_regex_token_iterator.test | COMPILE | 0.324937 | 0.760464 | 0.963387 | — | — | — |
| test_regex_traits.test | COMPILE | 0.204660 | 0.397685 | 0.521512 | — | — | — |
| test_sub_match.test | COMPILE | 0.172277 | 0.241217 | 0.405570 | — | — | — |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 1.085× | 1.092×, 1.079× | 1.005× |
| clang | 0.960× | 0.958×, 0.961× | 1.001× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1364 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/43778388618).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| c_traits.test | 3 | 0.004895s | 0.006421s | 0.004833s | byte equality observed |
| c_traits_u.test | 3 | 0.005264s | 0.006750s | 0.005074s | byte equality observed |
| misc1.test | 10 | 0.001487s | 0.001495s | 0.001440s | byte equality observed |
| misc2.test | 10 | 0.001384s | 0.001351s | 0.001310s | byte equality observed |
| regress.test | 3 | 0.005918s | 0.007185s | 0.005447s | byte equality observed |
| regress_u.test | 3 | 0.006094s | 0.007574s | 0.005671s | byte equality observed |
| test1.test | 10 | 0.001252s | 0.001238s | 0.001226s | byte equality observed |
| test10.test | 10 | 0.001252s | 0.001292s | 0.001236s | byte equality observed |
| test10u.test | 10 | 0.001268s | 0.001266s | 0.001236s | byte equality observed |
| test11.test | 10 | 0.001283s | 0.001275s | 0.001246s | byte equality observed |
| test11u.test | 10 | 0.001282s | 0.001240s | 0.001222s | byte equality observed |
| test1u.test | 10 | 0.001273s | 0.001266s | 0.001250s | byte equality observed |
| test2.test | 10 | 0.001315s | 0.001303s | 0.001258s | byte equality observed |
| test2u.test | 10 | 0.001324s | 0.001319s | 0.001268s | byte equality observed |
| test3.test | 10 | 0.001324s | 0.001329s | 0.001245s | byte equality observed |
| test3u.test | 10 | 0.001312s | 0.001343s | 0.001257s | byte equality observed |
| test4.test | 10 | 0.001293s | 0.001285s | 0.001242s | byte equality observed |
| test4u.test | 10 | 0.001287s | 0.001283s | 0.001256s | byte equality observed |
| test5.test | 9 | 0.001289s | 0.001284s | 0.001258s | byte equality observed |
| test5u.test | 10 | 0.001302s | 0.001304s | 0.001267s | byte equality observed |
| test6.test | 10 | 0.001283s | 0.001260s | 0.001261s | byte equality observed |
| test6u.test | 10 | 0.001277s | 0.001259s | 0.001247s | byte equality observed |
| test7.test | 10 | 0.001253s | 0.001278s | 0.001264s | byte equality observed |
| test7u.test | 10 | 0.001273s | 0.001318s | 0.001249s | byte equality observed |
| test8.test | 10 | 0.001257s | 0.001253s | 0.001245s | byte equality observed |
| test8u.test | 10 | 0.001269s | 0.001286s | 0.001256s | byte equality observed |
| test9.test | 10 | 0.001261s | 0.001273s | 0.001237s | byte equality observed |
| test9u.test | 10 | 0.001276s | 0.001321s | 0.001259s | byte equality observed |
| test_actions.test | 10 | 0.001477s | 0.001554s | 0.001440s | byte equality observed |
| test_assert.test | 10 | 0.001335s | 0.001307s | 0.001323s | byte equality observed |
| test_assert_with_placeholder.test | 10 | 0.001268s | 0.001250s | 0.001205s | byte equality observed |
| test_cycles.test | 10 | 0.001335s | 0.001293s | 0.001224s | byte equality observed |
| test_dynamic.test | 10 | 0.001294s | 0.001263s | 0.001224s | byte equality observed |
| test_dynamic_grammar.test | 10 | 0.001343s | 0.001320s | 0.001282s | byte equality observed |
| test_format.test | 10 | 0.001332s | 0.001361s | 0.001286s | byte equality observed |
| test_non_char.test | 10 | 0.001293s | 0.001298s | 0.001247s | byte equality observed |
| test_skip.test | 10 | 0.001278s | 0.001266s | 0.001243s | byte equality observed |
| test_static.test | 10 | 0.001249s | 0.001220s | 0.001210s | byte equality observed |
| test_symbols.test | 10 | 0.001452s | 0.001441s | 0.001395s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/43778388618).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
