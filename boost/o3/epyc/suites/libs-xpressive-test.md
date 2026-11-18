# libs/xpressive/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| regress.test | RUN | 3.492681 | 23.103779 | 18.164301 | 0.013520 | 0.017720 | 0.012397 |
| regress_u.test | RUN | 3.718232 | 23.708741 | 17.975765 | 0.013020 | 0.017144 | 0.012843 |
| c_traits.test | RUN | 3.460106 | 22.823655 | 17.146693 | 0.010047 | 0.014993 | 0.010446 |
| c_traits_u.test | RUN | 3.702179 | 23.611409 | 17.929924 | 0.011059 | 0.016257 | 0.011188 |
| test1.test | RUN | 1.360115 | 6.051366 | 5.331477 | 0.003730 | 0.004107 | 0.003850 |
| test2.test | RUN | 1.794999 | 8.503737 | 7.830159 | 0.003682 | 0.004261 | 0.003690 |
| test3.test | RUN | 1.767041 | 8.551121 | 8.311521 | 0.003564 | 0.004034 | 0.003883 |
| test4.test | RUN | 1.555270 | 6.948931 | 6.872131 | 0.003668 | 0.003849 | 0.003953 |
| test5.test | RUN | 1.641027 | 7.613960 | 7.217117 | 0.003645 | 0.004278 | 0.003950 |
| test6.test | RUN | 1.463262 | 6.388575 | 6.149156 | 0.003938 | 0.004109 | 0.003696 |
| test7.test | RUN | 1.428096 | 6.425604 | 6.190759 | 0.003503 | 0.003957 | 0.003423 |
| test8.test | RUN | 1.421015 | 6.274814 | 5.904363 | 0.003736 | 0.004017 | 0.004022 |
| test9.test | RUN | 1.536145 | 6.895621 | 6.700898 | 0.003587 | 0.003810 | 0.003843 |
| test10.test | RUN | 1.523639 | 6.502555 | 6.248588 | 0.003422 | 0.003996 | 0.003883 |
| test11.test | RUN | 1.449435 | 6.298297 | 6.300943 | 0.003922 | 0.003790 | 0.003866 |
| test1u.test | RUN | 1.350871 | 5.918907 | 5.434314 | 0.003358 | 0.004014 | 0.004037 |
| test2u.test | RUN | 1.809346 | 8.624246 | 8.456964 | 0.003703 | 0.004097 | 0.004158 |
| test3u.test | RUN | 1.785622 | 8.845503 | 8.577458 | 0.003964 | 0.004042 | 0.004278 |
| test4u.test | RUN | 1.559000 | 6.679482 | 6.854619 | 0.003730 | 0.004162 | 0.004279 |
| test5u.test | RUN | 1.633681 | 7.429592 | 7.780362 | 0.003772 | 0.004032 | 0.004100 |
| test6u.test | RUN | 1.546834 | 6.358028 | 6.533894 | 0.003779 | 0.004005 | 0.003647 |
| test7u.test | RUN | 1.454665 | 6.655999 | 6.521975 | 0.003375 | 0.004116 | 0.004102 |
| test8u.test | RUN | 1.437766 | 6.334027 | 6.115718 | 0.003451 | 0.004054 | 0.003964 |
| test9u.test | RUN | 1.542477 | 6.801173 | 6.826475 | 0.003854 | 0.004005 | 0.003895 |
| test10u.test | RUN | 1.526661 | 6.496862 | 6.183655 | 0.003654 | 0.003960 | 0.003869 |
| test11u.test | RUN | 1.559986 | 6.466245 | 6.449698 | 0.003971 | 0.003732 | 0.003920 |
| misc1.test | RUN | 2.712926 | 15.729388 | 13.949731 | 0.004732 | 0.005020 | 0.004513 |
| misc2.test | RUN | 2.678389 | 14.953077 | 13.588221 | 0.004371 | 0.004653 | 0.004880 |
| test_format.test | RUN | 2.843130 | 18.263000 | 15.315108 | 0.004216 | 0.003948 | 0.004195 |
| test_cycles.test | RUN | 1.304151 | 5.638371 | 5.195324 | 0.003668 | 0.003888 | 0.004043 |
| test_non_char.test | RUN | 2.322202 | 12.747083 | 11.653850 | 0.003801 | 0.004207 | 0.004152 |
| test_static.test | RUN | 1.198700 | 5.260011 | 4.613284 | 0.003848 | 0.003783 | 0.003789 |
| test_actions.test | RUN | 2.879113 | 15.584778 | 14.075014 | 0.004728 | 0.005448 | 0.004925 |
| test_assert.test | RUN | 1.679676 | 6.753138 | 6.563276 | 0.004144 | 0.004043 | 0.003949 |
| test_assert_with_placeholder.test | RUN | 1.585817 | 6.231970 | 6.056762 | 0.003820 | 0.003594 | 0.003593 |
| test_symbols.test | RUN | 2.977007 | 15.759171 | 15.751525 | 0.005430 | 0.005268 | 0.005465 |
| test_dynamic.test | RUN | 1.905109 | 10.610127 | 9.104004 | 0.003819 | 0.003953 | 0.003898 |
| test_dynamic_grammar.test | RUN | 1.956930 | 11.459141 | 9.291889 | 0.004306 | 0.004345 | 0.004012 |
| test_skip.test | RUN | 2.326748 | 11.600102 | 10.872959 | 0.003761 | 0.004448 | 0.003731 |
| multiple_defs.test | LINK | 3.681365 | 20.703085 | 17.788221 | — | — | — |
| test_basic_regex.test | COMPILE | 0.842416 | 1.669045 | 2.463418 | — | — | — |
| test_match_results.test | COMPILE | 0.552912 | 1.249809 | 1.586798 | — | — | — |
| test_regex_algorithms.test | COMPILE | 0.562988 | 1.244760 | 1.685659 | — | — | — |
| test_regex_compiler.test | COMPILE | 0.837372 | 1.939050 | 2.449896 | — | — | — |
| test_regex_constants.test | COMPILE | 0.048521 | 0.080237 | 0.085356 | — | — | — |
| test_regex_error.test | COMPILE | 0.297275 | 0.658136 | 0.884589 | — | — | — |
| test_regex_iterator.test | COMPILE | 0.554088 | 1.220786 | 1.580684 | — | — | — |
| test_regex_primitives.test | COMPILE | 0.813628 | 1.914399 | 2.135883 | — | — | — |
| test_regex_token_iterator.test | COMPILE | 0.550142 | 1.217568 | 1.590197 | — | — | — |
| test_regex_traits.test | COMPILE | 0.316534 | 0.638572 | 0.911023 | — | — | — |
| test_sub_match.test | COMPILE | 0.270690 | 0.530533 | 0.409472 | — | — | — |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 1.104× | 1.112×, 1.096× | 1.006× |
| clang | 0.953× | 0.960×, 0.946× | 0.991× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1359 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44390936409).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| c_traits.test | 2 | 0.009496s | 0.013495s | 0.008766s | byte equality observed |
| c_traits_u.test | 2 | 0.010353s | 0.014277s | 0.009253s | byte equality observed |
| misc1.test | 7 | 0.003445s | 0.003239s | 0.003332s | byte equality observed |
| misc2.test | 7 | 0.003110s | 0.002854s | 0.002910s | byte equality observed |
| regress.test | 2 | 0.011647s | 0.015213s | 0.010916s | byte equality observed |
| regress_u.test | 2 | 0.012089s | 0.015605s | 0.010999s | byte equality observed |
| test1.test | 8 | 0.002698s | 0.002632s | 0.002575s | byte equality observed |
| test10.test | 8 | 0.002658s | 0.002525s | 0.002568s | byte equality observed |
| test10u.test | 8 | 0.002655s | 0.002596s | 0.002586s | byte equality observed |
| test11.test | 8 | 0.002682s | 0.002586s | 0.002585s | byte equality observed |
| test11u.test | 8 | 0.002685s | 0.002636s | 0.002582s | byte equality observed |
| test1u.test | 8 | 0.002699s | 0.002680s | 0.002631s | byte equality observed |
| test2.test | 8 | 0.002771s | 0.002715s | 0.002649s | byte equality observed |
| test2u.test | 8 | 0.002768s | 0.002706s | 0.002732s | byte equality observed |
| test3.test | 8 | 0.002696s | 0.002746s | 0.002631s | byte equality observed |
| test3u.test | 8 | 0.002759s | 0.002770s | 0.002724s | byte equality observed |
| test4.test | 7 | 0.002665s | 0.002682s | 0.002649s | byte equality observed |
| test4u.test | 8 | 0.002721s | 0.002688s | 0.002609s | byte equality observed |
| test5.test | 8 | 0.002702s | 0.002726s | 0.002658s | byte equality observed |
| test5u.test | 6 | 0.002766s | 0.002711s | 0.002657s | byte equality observed |
| test6.test | 8 | 0.002680s | 0.002708s | 0.002611s | byte equality observed |
| test6u.test | 8 | 0.002726s | 0.002670s | 0.002590s | byte equality observed |
| test7.test | 8 | 0.002679s | 0.002690s | 0.002615s | byte equality observed |
| test7u.test | 8 | 0.002621s | 0.002699s | 0.002643s | byte equality observed |
| test8.test | 7 | 0.002676s | 0.002655s | 0.002572s | byte equality observed |
| test8u.test | 8 | 0.002642s | 0.002661s | 0.002641s | byte equality observed |
| test9.test | 8 | 0.002647s | 0.002693s | 0.002612s | byte equality observed |
| test9u.test | 7 | 0.002719s | 0.002631s | 0.002677s | byte equality observed |
| test_actions.test | 6 | 0.003439s | 0.003405s | 0.003298s | byte equality observed |
| test_assert.test | 6 | 0.002877s | 0.002787s | 0.002793s | byte equality observed |
| test_assert_with_placeholder.test | 8 | 0.002630s | 0.002589s | 0.002575s | byte equality observed |
| test_cycles.test | 8 | 0.002698s | 0.002639s | 0.002625s | byte equality observed |
| test_dynamic.test | 7 | 0.002663s | 0.002601s | 0.002647s | byte equality observed |
| test_dynamic_grammar.test | 7 | 0.002875s | 0.002861s | 0.002795s | byte equality observed |
| test_format.test | 8 | 0.002775s | 0.002731s | 0.002704s | byte equality observed |
| test_non_char.test | 8 | 0.002817s | 0.002732s | 0.002630s | byte equality observed |
| test_skip.test | 8 | 0.002657s | 0.002593s | 0.002571s | byte equality observed |
| test_static.test | 8 | 0.002543s | 0.002425s | 0.002508s | byte equality observed |
| test_symbols.test | 7 | 0.002942s | 0.002900s | 0.002821s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44390936409).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
