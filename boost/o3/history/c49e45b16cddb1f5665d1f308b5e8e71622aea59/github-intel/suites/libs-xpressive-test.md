# libs/xpressive/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| regress.test | RUN | 2.519872 | 16.983588 | 12.584212 | 0.008820 | 0.010421 | 0.008426 |
| regress_u.test | RUN | 2.708736 | 17.461174 | 12.758498 | 0.008946 | 0.010711 | 0.008832 |
| c_traits.test | RUN | 2.542544 | 16.614293 | 12.333033 | 0.006960 | 0.008831 | 0.007144 |
| c_traits_u.test | RUN | 2.725306 | 17.170273 | 12.693962 | 0.008018 | 0.009680 | 0.007564 |
| test1.test | RUN | 0.914063 | 4.170729 | 3.652505 | 0.002003 | 0.002389 | 0.001942 |
| test2.test | RUN | 1.221621 | 6.018578 | 5.266552 | 0.002196 | 0.002496 | 0.002060 |
| test3.test | RUN | 1.208775 | 5.977203 | 5.410828 | 0.002060 | 0.002310 | 0.002214 |
| test4.test | RUN | 1.064019 | 4.872176 | 4.399741 | 0.001967 | 0.002273 | 0.002027 |
| test5.test | RUN | 1.117582 | 5.269331 | 4.740831 | 0.002083 | 0.002448 | 0.002067 |
| test6.test | RUN | 1.013629 | 4.461774 | 4.027528 | 0.001987 | 0.002417 | 0.002022 |
| test7.test | RUN | 0.976241 | 4.551329 | 4.080820 | 0.002035 | 0.002339 | 0.002221 |
| test8.test | RUN | 0.964609 | 4.453209 | 3.875269 | 0.002158 | 0.002263 | 0.002153 |
| test9.test | RUN | 1.062669 | 4.726781 | 4.405648 | 0.002202 | 0.002252 | 0.002044 |
| test10.test | RUN | 1.028788 | 4.512443 | 4.128044 | 0.002032 | 0.002375 | 0.002334 |
| test11.test | RUN | 0.982732 | 4.387157 | 4.050611 | 0.002139 | 0.002363 | 0.002289 |
| test1u.test | RUN | 0.908208 | 4.122941 | 3.510963 | 0.002451 | 0.002389 | 0.002208 |
| test2u.test | RUN | 1.238092 | 6.219480 | 5.559962 | 0.002361 | 0.002424 | 0.002265 |
| test3u.test | RUN | 1.279916 | 6.325440 | 5.646728 | 0.002138 | 0.002378 | 0.002276 |
| test4u.test | RUN | 1.070200 | 4.909510 | 4.421683 | 0.002221 | 0.002331 | 0.002423 |
| test5u.test | RUN | 1.150190 | 5.441270 | 4.955634 | 0.002230 | 0.002410 | 0.002054 |
| test6u.test | RUN | 1.032733 | 4.551058 | 4.114896 | 0.002138 | 0.002354 | 0.002321 |
| test7u.test | RUN | 1.005644 | 4.724896 | 4.140148 | 0.002384 | 0.002347 | 0.002180 |
| test8u.test | RUN | 0.966392 | 4.358905 | 3.869337 | 0.002024 | 0.002188 | 0.002006 |
| test9u.test | RUN | 1.048879 | 4.763868 | 4.417611 | 0.002031 | 0.002490 | 0.002242 |
| test10u.test | RUN | 1.021512 | 4.500896 | 4.082492 | 0.002102 | 0.002214 | 0.002114 |
| test11u.test | RUN | 1.039591 | 4.489279 | 4.147146 | 0.002246 | 0.002278 | 0.002131 |
| misc1.test | RUN | 1.899237 | 11.692364 | 9.234537 | 0.002699 | 0.002673 | 0.002519 |
| misc2.test | RUN | 1.903718 | 10.984086 | 8.939112 | 0.002159 | 0.002533 | 0.002236 |
| test_format.test | RUN | 2.027453 | 13.610736 | 10.242315 | 0.002380 | 0.002579 | 0.002018 |
| test_cycles.test | RUN | 0.859745 | 3.981345 | 3.276079 | 0.001997 | 0.002325 | 0.002121 |
| test_non_char.test | RUN | 1.643920 | 9.477196 | 7.500777 | 0.002154 | 0.002596 | 0.002281 |
| test_static.test | RUN | 0.804472 | 3.639167 | 2.930518 | 0.002120 | 0.002134 | 0.002055 |
| test_actions.test | RUN | 2.032058 | 11.273173 | 9.233899 | 0.002685 | 0.002972 | 0.002550 |
| test_assert.test | RUN | 1.131999 | 4.785049 | 4.255869 | 0.002172 | 0.002549 | 0.002081 |
| test_assert_with_placeholder.test | RUN | 1.056498 | 4.357830 | 3.852316 | 0.002088 | 0.002265 | 0.002222 |
| test_symbols.test | RUN | 2.071251 | 11.077319 | 10.288834 | 0.002886 | 0.002775 | 0.002584 |
| test_dynamic.test | RUN | 1.325359 | 7.468800 | 5.904081 | 0.002172 | 0.002369 | 0.001996 |
| test_dynamic_grammar.test | RUN | 1.357545 | 8.006423 | 6.276606 | 0.002368 | 0.002586 | 0.002258 |
| test_skip.test | RUN | 1.608703 | 8.106959 | 7.203558 | 0.002252 | 0.002310 | 0.002098 |
| multiple_defs.test | LINK | 2.623018 | 14.585834 | 12.088434 | — | — | — |
| test_basic_regex.test | COMPILE | 0.522671 | 1.109583 | 1.515592 | — | — | — |
| test_match_results.test | COMPILE | 0.339702 | 0.758256 | 1.010472 | — | — | — |
| test_regex_algorithms.test | COMPILE | 0.344362 | 0.747621 | 1.049173 | — | — | — |
| test_regex_compiler.test | COMPILE | 0.527704 | 1.212314 | 1.493564 | — | — | — |
| test_regex_constants.test | COMPILE | 0.027618 | 0.048026 | 0.050320 | — | — | — |
| test_regex_error.test | COMPILE | 0.190128 | 0.392431 | 0.540956 | — | — | — |
| test_regex_iterator.test | COMPILE | 0.345484 | 0.743081 | 0.992473 | — | — | — |
| test_regex_primitives.test | COMPILE | 0.531640 | 1.215912 | 1.393630 | — | — | — |
| test_regex_token_iterator.test | COMPILE | 0.343537 | 0.755546 | 0.962315 | — | — | — |
| test_regex_traits.test | COMPILE | 0.197001 | 0.396748 | 0.504168 | — | — | — |
| test_sub_match.test | COMPILE | 0.162058 | 0.252403 | 0.329797 | — | — | — |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 1.074× | 1.080×, 1.068× | 0.995× |
| clang | 0.969× | 0.968×, 0.970× | 1.000× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1364 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44362912212).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| c_traits.test | 4 | 0.004865s | 0.006491s | 0.004841s | byte equality observed |
| c_traits_u.test | 3 | 0.005271s | 0.006715s | 0.005059s | byte equality observed |
| misc1.test | 10 | 0.001522s | 0.001513s | 0.001487s | byte equality observed |
| misc2.test | 10 | 0.001384s | 0.001377s | 0.001334s | byte equality observed |
| regress.test | 3 | 0.005877s | 0.007431s | 0.005352s | byte equality observed |
| regress_u.test | 3 | 0.006136s | 0.007442s | 0.005727s | byte equality observed |
| test1.test | 10 | 0.001296s | 0.001310s | 0.001266s | byte equality observed |
| test10.test | 10 | 0.001285s | 0.001269s | 0.001223s | byte equality observed |
| test10u.test | 10 | 0.001262s | 0.001261s | 0.001233s | byte equality observed |
| test11.test | 10 | 0.001262s | 0.001279s | 0.001201s | byte equality observed |
| test11u.test | 10 | 0.001276s | 0.001259s | 0.001227s | byte equality observed |
| test1u.test | 10 | 0.001270s | 0.001262s | 0.001234s | byte equality observed |
| test2.test | 10 | 0.001329s | 0.001312s | 0.001252s | byte equality observed |
| test2u.test | 10 | 0.001324s | 0.001330s | 0.001278s | byte equality observed |
| test3.test | 10 | 0.001301s | 0.001332s | 0.001286s | byte equality observed |
| test3u.test | 10 | 0.001305s | 0.001331s | 0.001301s | byte equality observed |
| test4.test | 10 | 0.001287s | 0.001291s | 0.001271s | byte equality observed |
| test4u.test | 10 | 0.001274s | 0.001290s | 0.001231s | byte equality observed |
| test5.test | 10 | 0.001290s | 0.001312s | 0.001272s | byte equality observed |
| test5u.test | 8 | 0.001323s | 0.001316s | 0.001285s | byte equality observed |
| test6.test | 10 | 0.001272s | 0.001279s | 0.001262s | byte equality observed |
| test6u.test | 10 | 0.001257s | 0.001295s | 0.001272s | byte equality observed |
| test7.test | 10 | 0.001284s | 0.001276s | 0.001244s | byte equality observed |
| test7u.test | 10 | 0.001278s | 0.001294s | 0.001266s | byte equality observed |
| test8.test | 10 | 0.001290s | 0.001265s | 0.001243s | byte equality observed |
| test8u.test | 10 | 0.001278s | 0.001285s | 0.001254s | byte equality observed |
| test9.test | 10 | 0.001301s | 0.001287s | 0.001260s | byte equality observed |
| test9u.test | 10 | 0.001285s | 0.001285s | 0.001248s | byte equality observed |
| test_actions.test | 10 | 0.001485s | 0.001503s | 0.001422s | byte equality observed |
| test_assert.test | 10 | 0.001338s | 0.001326s | 0.001280s | byte equality observed |
| test_assert_with_placeholder.test | 10 | 0.001265s | 0.001276s | 0.001241s | byte equality observed |
| test_cycles.test | 10 | 0.001296s | 0.001314s | 0.001238s | byte equality observed |
| test_dynamic.test | 10 | 0.001275s | 0.001295s | 0.001243s | byte equality observed |
| test_dynamic_grammar.test | 10 | 0.001352s | 0.001315s | 0.001305s | byte equality observed |
| test_format.test | 10 | 0.001339s | 0.001310s | 0.001289s | byte equality observed |
| test_non_char.test | 10 | 0.001316s | 0.001262s | 0.001251s | byte equality observed |
| test_skip.test | 10 | 0.001296s | 0.001239s | 0.001256s | byte equality observed |
| test_static.test | 10 | 0.001283s | 0.001269s | 0.001231s | byte equality observed |
| test_symbols.test | 10 | 0.001433s | 0.001408s | 0.001385s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44362912212).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
