# libs/xpressive/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| regress.test | RUN | 3.697733 | 24.437246 | 20.735788 | 0.014879 | 0.020102 | 0.013712 |
| regress_u.test | RUN | 3.818897 | 24.896654 | 20.503669 | 0.015414 | 0.017734 | 0.013382 |
| c_traits.test | RUN | 3.616061 | 23.668316 | 19.204904 | 0.010942 | 0.015825 | 0.010918 |
| c_traits_u.test | RUN | 3.978897 | 24.822086 | 20.120043 | 0.012723 | 0.018326 | 0.011325 |
| test1.test | RUN | 1.423756 | 6.369103 | 6.433326 | 0.003372 | 0.003808 | 0.003717 |
| test2.test | RUN | 1.921278 | 8.877343 | 8.877684 | 0.003591 | 0.003772 | 0.003894 |
| test3.test | RUN | 1.855934 | 9.078554 | 9.049373 | 0.003646 | 0.004032 | 0.003464 |
| test4.test | RUN | 1.619005 | 7.296218 | 7.457330 | 0.003583 | 0.003850 | 0.003708 |
| test5.test | RUN | 1.777650 | 7.987275 | 8.168680 | 0.003703 | 0.003801 | 0.003581 |
| test6.test | RUN | 1.566497 | 6.657433 | 6.964806 | 0.003498 | 0.004104 | 0.003805 |
| test7.test | RUN | 1.524237 | 6.884376 | 6.950098 | 0.003598 | 0.003927 | 0.003690 |
| test8.test | RUN | 1.520800 | 6.735085 | 6.848471 | 0.003699 | 0.004098 | 0.003699 |
| test9.test | RUN | 1.648406 | 7.120512 | 7.531070 | 0.003729 | 0.003714 | 0.003719 |
| test10.test | RUN | 1.613622 | 6.881324 | 7.083995 | 0.003398 | 0.003772 | 0.003927 |
| test11.test | RUN | 1.599423 | 6.588757 | 6.959282 | 0.003489 | 0.003960 | 0.003430 |
| test1u.test | RUN | 1.428160 | 6.195346 | 6.138966 | 0.003641 | 0.004016 | 0.003417 |
| test2u.test | RUN | 1.952026 | 9.213517 | 9.251384 | 0.003904 | 0.004092 | 0.003858 |
| test3u.test | RUN | 1.923823 | 9.624432 | 9.390216 | 0.003774 | 0.004345 | 0.004232 |
| test4u.test | RUN | 1.655405 | 7.308205 | 7.459459 | 0.003891 | 0.004036 | 0.003683 |
| test5u.test | RUN | 1.772180 | 8.039947 | 8.333456 | 0.003986 | 0.004248 | 0.003942 |
| test6u.test | RUN | 1.659727 | 6.875344 | 7.202991 | 0.003836 | 0.004053 | 0.003818 |
| test7u.test | RUN | 1.604451 | 7.161386 | 7.423581 | 0.003705 | 0.004143 | 0.003793 |
| test8u.test | RUN | 1.510933 | 6.625387 | 6.872008 | 0.004699 | 0.003889 | 0.003823 |
| test9u.test | RUN | 1.693167 | 7.252059 | 7.780252 | 0.003794 | 0.003913 | 0.003944 |
| test10u.test | RUN | 1.633700 | 6.982208 | 7.320966 | 0.003745 | 0.003835 | 0.003954 |
| test11u.test | RUN | 1.650004 | 6.834727 | 7.554096 | 0.003809 | 0.003686 | 0.004035 |
| misc1.test | RUN | 2.887228 | 16.814454 | 15.372418 | 0.004948 | 0.005187 | 0.004973 |
| misc2.test | RUN | 2.940274 | 16.088237 | 15.237952 | 0.004319 | 0.004394 | 0.004544 |
| test_format.test | RUN | 3.058320 | 19.592725 | 16.761331 | 0.003771 | 0.003861 | 0.003960 |
| test_cycles.test | RUN | 1.385037 | 6.070626 | 6.100474 | 0.003781 | 0.003763 | 0.003939 |
| test_non_char.test | RUN | 2.500783 | 13.741255 | 12.737670 | 0.004094 | 0.004165 | 0.004282 |
| test_static.test | RUN | 1.266065 | 5.562570 | 5.278394 | 0.003655 | 0.003650 | 0.003734 |
| test_actions.test | RUN | 3.144132 | 16.736155 | 15.717477 | 0.004837 | 0.005196 | 0.005207 |
| test_assert.test | RUN | 1.784952 | 7.288144 | 7.566472 | 0.004117 | 0.003548 | 0.004400 |
| test_assert_with_placeholder.test | RUN | 1.670594 | 6.686767 | 6.874241 | 0.003685 | 0.003506 | 0.003905 |
| test_symbols.test | RUN | 3.215184 | 16.281959 | 17.660372 | 0.005449 | 0.005657 | 0.005599 |
| test_dynamic.test | RUN | 2.010852 | 10.848206 | 10.340009 | 0.003940 | 0.003928 | 0.003634 |
| test_dynamic_grammar.test | RUN | 2.091225 | 11.474523 | 10.604053 | 0.003820 | 0.004164 | 0.004191 |
| test_skip.test | RUN | 2.538516 | 12.006775 | 12.532164 | 0.003714 | 0.003731 | 0.003867 |
| multiple_defs.test | LINK | 3.943103 | 21.682389 | 20.682667 | — | — | — |
| test_basic_regex.test | COMPILE | 0.923283 | 1.898761 | 2.947773 | — | — | — |
| test_match_results.test | COMPILE | 0.619358 | 1.335649 | 2.053662 | — | — | — |
| test_regex_algorithms.test | COMPILE | 0.586315 | 1.329961 | 2.007145 | — | — | — |
| test_regex_compiler.test | COMPILE | 0.923467 | 2.066601 | 3.039987 | — | — | — |
| test_regex_constants.test | COMPILE | 0.049263 | 0.087210 | 0.095880 | — | — | — |
| test_regex_error.test | COMPILE | 0.326920 | 0.717438 | 1.100933 | — | — | — |
| test_regex_iterator.test | COMPILE | 0.578953 | 1.301148 | 1.932955 | — | — | — |
| test_regex_primitives.test | COMPILE | 0.894570 | 2.038583 | 2.666281 | — | — | — |
| test_regex_token_iterator.test | COMPILE | 0.537992 | 1.279579 | 1.890930 | — | — | — |
| test_regex_traits.test | COMPILE | 0.336503 | 0.696960 | 1.049435 | — | — | — |
| test_sub_match.test | COMPILE | 0.286543 | 0.544534 | 0.826357 | — | — | — |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 1.118× | 1.124×, 1.112× | 1.000× |
| clang | 0.930× | 0.930×, 0.930× | 0.997× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1359 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44000592280).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| c_traits.test | 2 | 0.010250s | 0.014694s | 0.009204s | byte equality observed |
| c_traits_u.test | 2 | 0.011524s | 0.014830s | 0.010003s | byte equality observed |
| misc1.test | 6 | 0.003413s | 0.003325s | 0.003226s | byte equality observed |
| misc2.test | 8 | 0.003033s | 0.002961s | 0.002917s | byte equality observed |
| regress.test | 2 | 0.013032s | 0.016960s | 0.011161s | byte equality observed |
| regress_u.test | 2 | 0.013918s | 0.017537s | 0.012029s | byte equality observed |
| test1.test | 8 | 0.002670s | 0.002755s | 0.002556s | byte equality observed |
| test10.test | 9 | 0.002598s | 0.002663s | 0.002445s | byte equality observed |
| test10u.test | 9 | 0.002604s | 0.002641s | 0.002499s | byte equality observed |
| test11.test | 9 | 0.002630s | 0.002636s | 0.002444s | byte equality observed |
| test11u.test | 8 | 0.002649s | 0.002643s | 0.002538s | byte equality observed |
| test1u.test | 8 | 0.002633s | 0.002711s | 0.002524s | byte equality observed |
| test2.test | 8 | 0.002648s | 0.002729s | 0.002567s | byte equality observed |
| test2u.test | 8 | 0.002658s | 0.002761s | 0.002538s | byte equality observed |
| test3.test | 8 | 0.002667s | 0.002743s | 0.002559s | byte equality observed |
| test3u.test | 8 | 0.002657s | 0.002751s | 0.002582s | byte equality observed |
| test4.test | 8 | 0.002632s | 0.002588s | 0.002514s | byte equality observed |
| test4u.test | 8 | 0.002703s | 0.002617s | 0.002552s | byte equality observed |
| test5.test | 8 | 0.002636s | 0.002762s | 0.002493s | byte equality observed |
| test5u.test | 8 | 0.002687s | 0.002761s | 0.002577s | byte equality observed |
| test6.test | 8 | 0.002590s | 0.002608s | 0.002471s | byte equality observed |
| test6u.test | 8 | 0.002619s | 0.002642s | 0.002573s | byte equality observed |
| test7.test | 9 | 0.002627s | 0.002692s | 0.002459s | byte equality observed |
| test7u.test | 8 | 0.002615s | 0.002657s | 0.002555s | byte equality observed |
| test8.test | 9 | 0.002601s | 0.002658s | 0.002509s | byte equality observed |
| test8u.test | 8 | 0.002608s | 0.002623s | 0.002506s | byte equality observed |
| test9.test | 8 | 0.002590s | 0.002726s | 0.002514s | byte equality observed |
| test9u.test | 9 | 0.002591s | 0.002567s | 0.002488s | byte equality observed |
| test_actions.test | 7 | 0.003347s | 0.003375s | 0.003160s | byte equality observed |
| test_assert.test | 8 | 0.002764s | 0.002784s | 0.002623s | byte equality observed |
| test_assert_with_placeholder.test | 9 | 0.002588s | 0.002615s | 0.002482s | byte equality observed |
| test_cycles.test | 8 | 0.002615s | 0.002614s | 0.002502s | byte equality observed |
| test_dynamic.test | 8 | 0.002596s | 0.002686s | 0.002451s | byte equality observed |
| test_dynamic_grammar.test | 8 | 0.002780s | 0.002831s | 0.002656s | byte equality observed |
| test_format.test | 8 | 0.002715s | 0.002759s | 0.002611s | byte equality observed |
| test_non_char.test | 8 | 0.002712s | 0.002751s | 0.002588s | byte equality observed |
| test_skip.test | 9 | 0.002581s | 0.002539s | 0.002456s | byte equality observed |
| test_static.test | 9 | 0.002458s | 0.002558s | 0.002345s | byte equality observed |
| test_symbols.test | 7 | 0.002947s | 0.003105s | 0.002771s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44000592280).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
