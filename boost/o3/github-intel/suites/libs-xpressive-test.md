# libs/xpressive/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| regress.test | RUN | 2.527643 | 17.169658 | 12.517185 | 0.008867 | 0.010567 | 0.008257 |
| regress_u.test | RUN | 2.681478 | 17.638183 | 12.360042 | 0.009176 | 0.011102 | 0.008607 |
| c_traits.test | RUN | 2.518567 | 16.764870 | 11.828563 | 0.007044 | 0.008345 | 0.006906 |
| c_traits_u.test | RUN | 2.732159 | 17.404884 | 12.622223 | 0.007766 | 0.009730 | 0.007317 |
| test1.test | RUN | 0.898125 | 4.146749 | 3.566377 | 0.002042 | 0.002386 | 0.002094 |
| test2.test | RUN | 1.218066 | 6.009282 | 5.311222 | 0.002215 | 0.002364 | 0.002264 |
| test3.test | RUN | 1.212347 | 6.073560 | 5.297107 | 0.002082 | 0.002452 | 0.002069 |
| test4.test | RUN | 1.055606 | 4.965427 | 4.412781 | 0.002288 | 0.002406 | 0.002282 |
| test5.test | RUN | 1.113586 | 5.361056 | 4.752393 | 0.002190 | 0.002217 | 0.002210 |
| test6.test | RUN | 1.001021 | 4.471780 | 3.972339 | 0.002059 | 0.002476 | 0.002036 |
| test7.test | RUN | 0.961571 | 4.634730 | 4.071201 | 0.002145 | 0.002319 | 0.002025 |
| test8.test | RUN | 0.956096 | 4.524204 | 3.816680 | 0.002079 | 0.002636 | 0.002101 |
| test9.test | RUN | 1.041704 | 4.833398 | 4.440209 | 0.002256 | 0.002161 | 0.002073 |
| test10.test | RUN | 1.020684 | 4.587659 | 4.060955 | 0.001911 | 0.002173 | 0.002221 |
| test11.test | RUN | 0.992672 | 4.411768 | 4.061814 | 0.002069 | 0.002450 | 0.002165 |
| test1u.test | RUN | 0.893893 | 4.160878 | 3.517439 | 0.002405 | 0.002132 | 0.002222 |
| test2u.test | RUN | 1.241921 | 6.156122 | 5.431875 | 0.002320 | 0.002506 | 0.002138 |
| test3u.test | RUN | 1.242429 | 6.316497 | 5.495425 | 0.002297 | 0.002308 | 0.002049 |
| test4u.test | RUN | 1.058454 | 4.931938 | 4.412781 | 0.002335 | 0.002359 | 0.002045 |
| test5u.test | RUN | 1.140792 | 5.443931 | 4.884100 | 0.002063 | 0.002475 | 0.002163 |
| test6u.test | RUN | 1.050333 | 4.538847 | 4.072676 | 0.002219 | 0.002421 | 0.002006 |
| test7u.test | RUN | 1.013977 | 4.799325 | 4.132308 | 0.002302 | 0.002508 | 0.001991 |
| test8u.test | RUN | 0.962632 | 4.441228 | 3.855801 | 0.002127 | 0.002379 | 0.002050 |
| test9u.test | RUN | 1.056590 | 4.871884 | 4.341782 | 0.002126 | 0.002439 | 0.001979 |
| test10u.test | RUN | 1.044958 | 4.508661 | 4.021177 | 0.002271 | 0.002371 | 0.002044 |
| test11u.test | RUN | 1.035543 | 4.559128 | 4.150849 | 0.002395 | 0.002432 | 0.002017 |
| misc1.test | RUN | 1.910278 | 11.799399 | 9.252507 | 0.002934 | 0.002747 | 0.002744 |
| misc2.test | RUN | 1.904753 | 11.113753 | 9.021886 | 0.002463 | 0.002435 | 0.002464 |
| test_format.test | RUN | 2.015082 | 13.702062 | 10.326438 | 0.002156 | 0.002361 | 0.002185 |
| test_cycles.test | RUN | 0.856322 | 4.061828 | 3.198170 | 0.002122 | 0.002307 | 0.002050 |
| test_non_char.test | RUN | 1.637643 | 9.528779 | 7.669538 | 0.002207 | 0.002271 | 0.002066 |
| test_static.test | RUN | 0.794126 | 3.661516 | 2.895675 | 0.002088 | 0.002131 | 0.001893 |
| test_actions.test | RUN | 2.068894 | 11.249828 | 9.357904 | 0.002798 | 0.002600 | 0.002716 |
| test_assert.test | RUN | 1.140717 | 4.757798 | 4.225949 | 0.002232 | 0.002321 | 0.002284 |
| test_assert_with_placeholder.test | RUN | 1.057118 | 4.322102 | 3.843345 | 0.001995 | 0.002356 | 0.001998 |
| test_symbols.test | RUN | 2.088828 | 11.029374 | 10.354348 | 0.002667 | 0.002697 | 0.002422 |
| test_dynamic.test | RUN | 1.313475 | 7.542697 | 6.170983 | 0.002008 | 0.002455 | 0.002022 |
| test_dynamic_grammar.test | RUN | 1.378958 | 8.045154 | 6.147507 | 0.002014 | 0.002290 | 0.002066 |
| test_skip.test | RUN | 1.594887 | 8.077460 | 7.227468 | 0.002058 | 0.002193 | 0.002046 |
| multiple_defs.test | LINK | 2.594835 | 14.555912 | 12.075629 | — | — | — |
| test_basic_regex.test | COMPILE | 0.520586 | 1.120157 | 1.515756 | — | — | — |
| test_match_results.test | COMPILE | 0.339763 | 0.758459 | 0.986905 | — | — | — |
| test_regex_algorithms.test | COMPILE | 0.344995 | 0.764294 | 1.060922 | — | — | — |
| test_regex_compiler.test | COMPILE | 0.523173 | 1.235192 | 1.489579 | — | — | — |
| test_regex_constants.test | COMPILE | 0.027492 | 0.049573 | 0.054159 | — | — | — |
| test_regex_error.test | COMPILE | 0.189351 | 0.411335 | 0.549468 | — | — | — |
| test_regex_iterator.test | COMPILE | 0.345302 | 0.759160 | 0.997689 | — | — | — |
| test_regex_primitives.test | COMPILE | 0.498122 | 1.239979 | 1.431990 | — | — | — |
| test_regex_token_iterator.test | COMPILE | 0.342075 | 0.775109 | 0.946668 | — | — | — |
| test_regex_traits.test | COMPILE | 0.195058 | 0.415689 | 0.496113 | — | — | — |
| test_sub_match.test | COMPILE | 0.160093 | 0.332262 | 0.359098 | — | — | — |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 1.086× | 1.082×, 1.091× | 1.006× |
| clang | 0.963× | 0.963×, 0.964× | 0.988× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1363 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44560957980).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| c_traits.test | 3 | 0.004969s | 0.006452s | 0.004780s | byte equality observed |
| c_traits_u.test | 3 | 0.005296s | 0.006837s | 0.005166s | byte equality observed |
| misc1.test | 10 | 0.001509s | 0.001486s | 0.001456s | byte equality observed |
| misc2.test | 10 | 0.001372s | 0.001390s | 0.001309s | byte equality observed |
| regress.test | 3 | 0.005866s | 0.007256s | 0.005420s | byte equality observed |
| regress_u.test | 3 | 0.006143s | 0.007529s | 0.005751s | byte equality observed |
| test1.test | 10 | 0.001242s | 0.001254s | 0.001223s | byte equality observed |
| test10.test | 10 | 0.001294s | 0.001261s | 0.001231s | byte equality observed |
| test10u.test | 10 | 0.001267s | 0.001255s | 0.001253s | byte equality observed |
| test11.test | 10 | 0.001271s | 0.001257s | 0.001216s | byte equality observed |
| test11u.test | 10 | 0.001278s | 0.001247s | 0.001244s | byte equality observed |
| test1u.test | 10 | 0.001273s | 0.001287s | 0.001236s | byte equality observed |
| test2.test | 10 | 0.001320s | 0.001320s | 0.001283s | byte equality observed |
| test2u.test | 10 | 0.001334s | 0.001333s | 0.001286s | byte equality observed |
| test3.test | 10 | 0.001298s | 0.001346s | 0.001281s | byte equality observed |
| test3u.test | 10 | 0.001314s | 0.001316s | 0.001278s | byte equality observed |
| test4.test | 10 | 0.001274s | 0.001304s | 0.001269s | byte equality observed |
| test4u.test | 10 | 0.001291s | 0.001306s | 0.001238s | byte equality observed |
| test5.test | 10 | 0.001313s | 0.001323s | 0.001253s | byte equality observed |
| test5u.test | 10 | 0.001305s | 0.001294s | 0.001276s | byte equality observed |
| test6.test | 10 | 0.001279s | 0.001306s | 0.001247s | byte equality observed |
| test6u.test | 10 | 0.001276s | 0.001295s | 0.001253s | byte equality observed |
| test7.test | 10 | 0.001298s | 0.001270s | 0.001227s | byte equality observed |
| test7u.test | 10 | 0.001274s | 0.001287s | 0.001259s | byte equality observed |
| test8.test | 10 | 0.001271s | 0.001274s | 0.001265s | byte equality observed |
| test8u.test | 10 | 0.001279s | 0.001267s | 0.001270s | byte equality observed |
| test9.test | 10 | 0.001308s | 0.001262s | 0.001255s | byte equality observed |
| test9u.test | 10 | 0.001286s | 0.001281s | 0.001269s | byte equality observed |
| test_actions.test | 10 | 0.001497s | 0.001503s | 0.001451s | byte equality observed |
| test_assert.test | 10 | 0.001340s | 0.001328s | 0.001294s | byte equality observed |
| test_assert_with_placeholder.test | 10 | 0.001270s | 0.001225s | 0.001217s | byte equality observed |
| test_cycles.test | 10 | 0.001303s | 0.001267s | 0.001244s | byte equality observed |
| test_dynamic.test | 10 | 0.001264s | 0.001228s | 0.001232s | byte equality observed |
| test_dynamic_grammar.test | 10 | 0.001340s | 0.001329s | 0.001306s | byte equality observed |
| test_format.test | 10 | 0.001340s | 0.001340s | 0.001294s | byte equality observed |
| test_non_char.test | 10 | 0.001302s | 0.001306s | 0.001277s | byte equality observed |
| test_skip.test | 10 | 0.001265s | 0.001280s | 0.001223s | byte equality observed |
| test_static.test | 10 | 0.001254s | 0.001264s | 0.001227s | byte equality observed |
| test_symbols.test | 10 | 0.001448s | 0.001430s | 0.001388s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44560957980).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
