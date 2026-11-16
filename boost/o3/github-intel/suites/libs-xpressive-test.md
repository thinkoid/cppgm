# libs/xpressive/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| regress.test | RUN | 2.500314 | 16.681047 | 12.314985 | 0.008589 | 0.010559 | 0.007968 |
| regress_u.test | RUN | 2.651134 | 17.310477 | 12.482563 | 0.008636 | 0.010631 | 0.008299 |
| c_traits.test | RUN | 2.487256 | 16.741028 | 12.064206 | 0.006884 | 0.008759 | 0.007019 |
| c_traits_u.test | RUN | 2.684523 | 17.244876 | 12.209896 | 0.007760 | 0.009514 | 0.007134 |
| test1.test | RUN | 0.877785 | 4.139811 | 3.575587 | 0.001970 | 0.002375 | 0.002290 |
| test2.test | RUN | 1.196443 | 5.954906 | 5.174061 | 0.002038 | 0.002132 | 0.002136 |
| test3.test | RUN | 1.200895 | 5.919607 | 5.236884 | 0.001898 | 0.002176 | 0.002064 |
| test4.test | RUN | 1.042983 | 4.786541 | 4.240778 | 0.001900 | 0.002099 | 0.002007 |
| test5.test | RUN | 1.108194 | 5.205592 | 4.603987 | 0.002010 | 0.002208 | 0.001967 |
| test6.test | RUN | 0.999903 | 4.369164 | 3.863121 | 0.001712 | 0.002187 | 0.001965 |
| test7.test | RUN | 0.950907 | 4.515477 | 3.911330 | 0.002020 | 0.002134 | 0.002308 |
| test8.test | RUN | 0.964559 | 4.371258 | 3.778180 | 0.001888 | 0.002151 | 0.002076 |
| test9.test | RUN | 1.039106 | 4.699733 | 4.242665 | 0.002122 | 0.002413 | 0.002148 |
| test10.test | RUN | 1.013587 | 4.472079 | 4.024747 | 0.001888 | 0.002038 | 0.001968 |
| test11.test | RUN | 0.986914 | 4.290844 | 3.953440 | 0.001972 | 0.002198 | 0.001996 |
| test1u.test | RUN | 0.892151 | 4.057931 | 3.419013 | 0.002440 | 0.002200 | 0.001928 |
| test2u.test | RUN | 1.226404 | 6.105954 | 5.363048 | 0.002217 | 0.002210 | 0.002103 |
| test3u.test | RUN | 1.250752 | 6.239177 | 5.508606 | 0.001987 | 0.002207 | 0.002123 |
| test4u.test | RUN | 1.064225 | 4.823669 | 4.300427 | 0.002222 | 0.002258 | 0.002102 |
| test5u.test | RUN | 1.125856 | 5.386062 | 4.805386 | 0.001910 | 0.002212 | 0.002106 |
| test6u.test | RUN | 1.032636 | 4.525529 | 4.031568 | 0.002080 | 0.002359 | 0.002276 |
| test7u.test | RUN | 0.997736 | 4.690021 | 4.095188 | 0.002180 | 0.002248 | 0.002042 |
| test8u.test | RUN | 0.956387 | 4.341838 | 3.839717 | 0.001946 | 0.002146 | 0.002179 |
| test9u.test | RUN | 1.045322 | 4.713482 | 4.323434 | 0.001911 | 0.002539 | 0.002334 |
| test10u.test | RUN | 1.008786 | 4.485050 | 4.002044 | 0.002107 | 0.002256 | 0.002086 |
| test11u.test | RUN | 1.021014 | 4.506694 | 4.121792 | 0.002356 | 0.002205 | 0.001934 |
| misc1.test | RUN | 1.881306 | 11.608432 | 9.103859 | 0.002208 | 0.002552 | 0.002670 |
| misc2.test | RUN | 1.908583 | 10.927122 | 8.707879 | 0.002162 | 0.002356 | 0.002308 |
| test_format.test | RUN | 1.980090 | 13.470945 | 9.941745 | 0.002011 | 0.002499 | 0.002247 |
| test_cycles.test | RUN | 0.842580 | 3.967996 | 3.233567 | 0.001975 | 0.002187 | 0.001965 |
| test_non_char.test | RUN | 1.633303 | 9.406317 | 7.453755 | 0.002140 | 0.002439 | 0.002092 |
| test_static.test | RUN | 0.784147 | 3.590963 | 2.895649 | 0.002160 | 0.002152 | 0.002004 |
| test_actions.test | RUN | 2.030268 | 11.159245 | 9.136492 | 0.002372 | 0.002743 | 0.002404 |
| test_assert.test | RUN | 1.132915 | 4.778023 | 4.165326 | 0.002208 | 0.002441 | 0.002002 |
| test_assert_with_placeholder.test | RUN | 1.050878 | 4.299337 | 3.730437 | 0.001990 | 0.002084 | 0.001961 |
| test_symbols.test | RUN | 2.054740 | 10.777298 | 10.303566 | 0.002512 | 0.002994 | 0.002725 |
| test_dynamic.test | RUN | 1.313247 | 7.386996 | 5.867169 | 0.002166 | 0.002196 | 0.001884 |
| test_dynamic_grammar.test | RUN | 1.349905 | 7.889927 | 6.126261 | 0.002332 | 0.002256 | 0.002195 |
| test_skip.test | RUN | 1.607075 | 8.049417 | 7.054100 | 0.002180 | 0.002120 | 0.002230 |
| multiple_defs.test | LINK | 2.609572 | 14.509051 | 11.933972 | — | — | — |
| test_basic_regex.test | COMPILE | 0.530424 | 1.095007 | 1.517662 | — | — | — |
| test_match_results.test | COMPILE | 0.346340 | 0.741723 | 1.000103 | — | — | — |
| test_regex_algorithms.test | COMPILE | 0.341242 | 0.749939 | 1.020454 | — | — | — |
| test_regex_compiler.test | COMPILE | 0.524455 | 1.219214 | 1.490350 | — | — | — |
| test_regex_constants.test | COMPILE | 0.027082 | 0.048071 | 0.053030 | — | — | — |
| test_regex_error.test | COMPILE | 0.186739 | 0.396961 | 0.530054 | — | — | — |
| test_regex_iterator.test | COMPILE | 0.342824 | 0.737377 | 0.959918 | — | — | — |
| test_regex_primitives.test | COMPILE | 0.531871 | 1.223506 | 1.394784 | — | — | — |
| test_regex_token_iterator.test | COMPILE | 0.349112 | 0.752166 | 0.906459 | — | — | — |
| test_regex_traits.test | COMPILE | 0.200487 | 0.394181 | 0.505969 | — | — | — |
| test_sub_match.test | COMPILE | 0.162796 | 0.277027 | 0.381017 | — | — | — |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 1.080× | 1.074×, 1.087× | 1.000× |
| clang | 0.962× | 0.966×, 0.958× | 1.001× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1363 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/43801643681).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| c_traits.test | 3 | 0.004965s | 0.006390s | 0.004749s | byte equality observed |
| c_traits_u.test | 3 | 0.005213s | 0.006846s | 0.005118s | byte equality observed |
| misc1.test | 10 | 0.001494s | 0.001469s | 0.001439s | byte equality observed |
| misc2.test | 10 | 0.001326s | 0.001375s | 0.001326s | byte equality observed |
| regress.test | 3 | 0.005937s | 0.007238s | 0.005320s | byte equality observed |
| regress_u.test | 3 | 0.006204s | 0.007554s | 0.005735s | byte equality observed |
| test1.test | 10 | 0.001259s | 0.001275s | 0.001196s | byte equality observed |
| test10.test | 10 | 0.001257s | 0.001285s | 0.001214s | byte equality observed |
| test10u.test | 10 | 0.001241s | 0.001245s | 0.001234s | byte equality observed |
| test11.test | 9 | 0.001253s | 0.001268s | 0.001210s | byte equality observed |
| test11u.test | 10 | 0.001252s | 0.001257s | 0.001212s | byte equality observed |
| test1u.test | 10 | 0.001271s | 0.001254s | 0.001229s | byte equality observed |
| test2.test | 10 | 0.001296s | 0.001295s | 0.001274s | byte equality observed |
| test2u.test | 10 | 0.001304s | 0.001302s | 0.001274s | byte equality observed |
| test3.test | 10 | 0.001314s | 0.001300s | 0.001266s | byte equality observed |
| test3u.test | 10 | 0.001305s | 0.001335s | 0.001259s | byte equality observed |
| test4.test | 10 | 0.001257s | 0.001268s | 0.001253s | byte equality observed |
| test4u.test | 10 | 0.001291s | 0.001252s | 0.001278s | byte equality observed |
| test5.test | 10 | 0.001279s | 0.001280s | 0.001253s | byte equality observed |
| test5u.test | 10 | 0.001275s | 0.001262s | 0.001272s | byte equality observed |
| test6.test | 10 | 0.001286s | 0.001288s | 0.001214s | byte equality observed |
| test6u.test | 10 | 0.001266s | 0.001278s | 0.001248s | byte equality observed |
| test7.test | 10 | 0.001274s | 0.001273s | 0.001215s | byte equality observed |
| test7u.test | 10 | 0.001277s | 0.001295s | 0.001233s | byte equality observed |
| test8.test | 10 | 0.001265s | 0.001288s | 0.001208s | byte equality observed |
| test8u.test | 10 | 0.001259s | 0.001267s | 0.001260s | byte equality observed |
| test9.test | 10 | 0.001248s | 0.001246s | 0.001246s | byte equality observed |
| test9u.test | 10 | 0.001290s | 0.001254s | 0.001265s | byte equality observed |
| test_actions.test | 10 | 0.001463s | 0.001473s | 0.001393s | byte equality observed |
| test_assert.test | 10 | 0.001333s | 0.001325s | 0.001281s | byte equality observed |
| test_assert_with_placeholder.test | 10 | 0.001242s | 0.001247s | 0.001221s | byte equality observed |
| test_cycles.test | 10 | 0.001258s | 0.001266s | 0.001209s | byte equality observed |
| test_dynamic.test | 10 | 0.001262s | 0.001242s | 0.001246s | byte equality observed |
| test_dynamic_grammar.test | 10 | 0.001308s | 0.001312s | 0.001281s | byte equality observed |
| test_format.test | 10 | 0.001304s | 0.001308s | 0.001284s | byte equality observed |
| test_non_char.test | 10 | 0.001278s | 0.001227s | 0.001279s | byte equality observed |
| test_skip.test | 10 | 0.001256s | 0.001231s | 0.001238s | byte equality observed |
| test_static.test | 10 | 0.001231s | 0.001229s | 0.001202s | byte equality observed |
| test_symbols.test | 10 | 0.001423s | 0.001400s | 0.001363s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/43801643681).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
