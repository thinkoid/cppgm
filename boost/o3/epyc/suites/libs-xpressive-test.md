# libs/xpressive/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| regress.test | RUN | 3.622856 | 23.449684 | 19.624097 | 0.014732 | 0.019943 | 0.013690 |
| regress_u.test | RUN | 3.739897 | 23.957779 | 19.378779 | 0.015158 | 0.018436 | 0.013781 |
| c_traits.test | RUN | 3.541101 | 22.976020 | 18.591089 | 0.011064 | 0.016092 | 0.009518 |
| c_traits_u.test | RUN | 3.923450 | 23.702097 | 19.650564 | 0.012543 | 0.018496 | 0.011210 |
| test1.test | RUN | 1.388703 | 6.068768 | 6.186847 | 0.003571 | 0.003712 | 0.003748 |
| test2.test | RUN | 1.843828 | 8.495721 | 8.741434 | 0.003222 | 0.004122 | 0.003858 |
| test3.test | RUN | 1.848774 | 8.673594 | 8.877420 | 0.003657 | 0.003500 | 0.003573 |
| test4.test | RUN | 1.602421 | 7.021894 | 7.211286 | 0.003427 | 0.003793 | 0.003627 |
| test5.test | RUN | 1.696294 | 7.615390 | 8.047251 | 0.003116 | 0.003638 | 0.003856 |
| test6.test | RUN | 1.539845 | 6.455641 | 6.661142 | 0.003554 | 0.003766 | 0.004092 |
| test7.test | RUN | 1.511141 | 6.616364 | 6.800038 | 0.003046 | 0.003843 | 0.003802 |
| test8.test | RUN | 1.492353 | 6.321920 | 6.533671 | 0.003345 | 0.004021 | 0.003935 |
| test9.test | RUN | 1.616719 | 6.981213 | 7.395054 | 0.003652 | 0.003502 | 0.003347 |
| test10.test | RUN | 1.582027 | 6.634767 | 6.835921 | 0.003618 | 0.003919 | 0.003213 |
| test11.test | RUN | 1.521135 | 6.328112 | 6.816040 | 0.003508 | 0.004044 | 0.003554 |
| test1u.test | RUN | 1.412275 | 6.003647 | 6.044257 | 0.003376 | 0.004064 | 0.003675 |
| test2u.test | RUN | 1.883089 | 8.913404 | 9.162429 | 0.003871 | 0.003826 | 0.003514 |
| test3u.test | RUN | 1.889874 | 9.082501 | 9.358822 | 0.003625 | 0.004149 | 0.003772 |
| test4u.test | RUN | 1.626560 | 7.090309 | 7.346245 | 0.003756 | 0.004078 | 0.003735 |
| test5u.test | RUN | 1.733504 | 7.844085 | 8.072902 | 0.003645 | 0.003781 | 0.003887 |
| test6u.test | RUN | 1.599994 | 6.590438 | 6.866076 | 0.003648 | 0.004136 | 0.003791 |
| test7u.test | RUN | 1.582026 | 6.864165 | 7.048766 | 0.003812 | 0.003878 | 0.003854 |
| test8u.test | RUN | 1.515628 | 6.296340 | 6.509044 | 0.003801 | 0.003370 | 0.003803 |
| test9u.test | RUN | 1.611578 | 6.915563 | 7.525511 | 0.003634 | 0.003715 | 0.003733 |
| test10u.test | RUN | 1.628692 | 6.622744 | 6.850294 | 0.003635 | 0.003881 | 0.003753 |
| test11u.test | RUN | 1.641601 | 6.627305 | 7.161619 | 0.003971 | 0.003854 | 0.003811 |
| misc1.test | RUN | 2.892516 | 16.437363 | 14.842169 | 0.004797 | 0.004557 | 0.005181 |
| misc2.test | RUN | 2.815706 | 15.273420 | 14.174649 | 0.003900 | 0.004213 | 0.004040 |
| test_format.test | RUN | 2.962588 | 18.831095 | 16.100930 | 0.003866 | 0.003882 | 0.003939 |
| test_cycles.test | RUN | 1.344326 | 5.901980 | 5.693794 | 0.003736 | 0.003754 | 0.003184 |
| test_non_char.test | RUN | 2.442844 | 13.037953 | 12.649932 | 0.003905 | 0.004291 | 0.003701 |
| test_static.test | RUN | 1.237841 | 5.434186 | 5.094000 | 0.003488 | 0.003472 | 0.003766 |
| test_actions.test | RUN | 3.036229 | 16.144475 | 15.429905 | 0.004912 | 0.005051 | 0.005275 |
| test_assert.test | RUN | 1.729595 | 7.159315 | 7.268288 | 0.004126 | 0.003318 | 0.003974 |
| test_assert_with_placeholder.test | RUN | 1.664250 | 6.332912 | 6.824223 | 0.003555 | 0.003423 | 0.003650 |
| test_symbols.test | RUN | 3.157122 | 15.468408 | 17.178836 | 0.005293 | 0.004399 | 0.005191 |
| test_dynamic.test | RUN | 1.973777 | 10.440794 | 9.691510 | 0.003738 | 0.003589 | 0.003677 |
| test_dynamic_grammar.test | RUN | 2.101985 | 11.092773 | 10.232621 | 0.003728 | 0.003786 | 0.003979 |
| test_skip.test | RUN | 2.437945 | 11.281038 | 11.871229 | 0.003707 | 0.003711 | 0.003815 |
| multiple_defs.test | LINK | 3.893768 | 20.770840 | 19.574724 | — | — | — |
| test_basic_regex.test | COMPILE | 0.894667 | 1.823705 | 2.780611 | — | — | — |
| test_match_results.test | COMPILE | 0.577893 | 1.309033 | 1.895124 | — | — | — |
| test_regex_algorithms.test | COMPILE | 0.580807 | 1.255727 | 1.928020 | — | — | — |
| test_regex_compiler.test | COMPILE | 0.888378 | 1.995284 | 2.960852 | — | — | — |
| test_regex_constants.test | COMPILE | 0.048629 | 0.085627 | 0.096033 | — | — | — |
| test_regex_error.test | COMPILE | 0.312213 | 0.682932 | 1.055782 | — | — | — |
| test_regex_iterator.test | COMPILE | 0.578213 | 1.245280 | 1.901050 | — | — | — |
| test_regex_primitives.test | COMPILE | 0.884104 | 1.947293 | 2.653648 | — | — | — |
| test_regex_token_iterator.test | COMPILE | 0.551542 | 1.249121 | 1.942949 | — | — | — |
| test_regex_traits.test | COMPILE | 0.332728 | 0.664100 | 1.007249 | — | — | — |
| test_sub_match.test | COMPILE | 0.278037 | 0.484171 | 0.796205 | — | — | — |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 1.111× | 1.105×, 1.117× | 1.000× |
| clang | 0.933× | 0.943×, 0.924× | 1.002× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1360 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/thinkoid/cppgm/actions/runs/44661842949).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| c_traits.test | 2 | 0.010260s | 0.014752s | 0.008980s | byte equality observed |
| c_traits_u.test | 2 | 0.010960s | 0.015258s | 0.009913s | byte equality observed |
| misc1.test | 7 | 0.003371s | 0.003074s | 0.003298s | byte equality observed |
| misc2.test | 8 | 0.003011s | 0.002805s | 0.002928s | byte equality observed |
| regress.test | 2 | 0.013325s | 0.017197s | 0.011512s | byte equality observed |
| regress_u.test | 2 | 0.013816s | 0.017181s | 0.012141s | byte equality observed |
| test1.test | 9 | 0.002661s | 0.002580s | 0.002626s | byte equality observed |
| test10.test | 8 | 0.002622s | 0.002464s | 0.002628s | byte equality observed |
| test10u.test | 9 | 0.002619s | 0.002534s | 0.002578s | byte equality observed |
| test11.test | 9 | 0.002649s | 0.002615s | 0.002541s | byte equality observed |
| test11u.test | 9 | 0.002616s | 0.002551s | 0.002601s | byte equality observed |
| test1u.test | 9 | 0.002602s | 0.002558s | 0.002592s | byte equality observed |
| test2.test | 8 | 0.002706s | 0.002664s | 0.002605s | byte equality observed |
| test2u.test | 8 | 0.002709s | 0.002702s | 0.002647s | byte equality observed |
| test3.test | 9 | 0.002679s | 0.002713s | 0.002627s | byte equality observed |
| test3u.test | 8 | 0.002703s | 0.002657s | 0.002619s | byte equality observed |
| test4.test | 9 | 0.002643s | 0.002539s | 0.002584s | byte equality observed |
| test4u.test | 9 | 0.002637s | 0.002638s | 0.002586s | byte equality observed |
| test5.test | 8 | 0.002696s | 0.002634s | 0.002569s | byte equality observed |
| test5u.test | 8 | 0.002706s | 0.002662s | 0.002624s | byte equality observed |
| test6.test | 9 | 0.002616s | 0.002604s | 0.002520s | byte equality observed |
| test6u.test | 8 | 0.002666s | 0.002557s | 0.002594s | byte equality observed |
| test7.test | 7 | 0.002621s | 0.002626s | 0.002503s | byte equality observed |
| test7u.test | 8 | 0.002608s | 0.002603s | 0.002636s | byte equality observed |
| test8.test | 8 | 0.002650s | 0.002570s | 0.002575s | byte equality observed |
| test8u.test | 8 | 0.002649s | 0.002582s | 0.002506s | byte equality observed |
| test9.test | 6 | 0.002687s | 0.002653s | 0.002588s | byte equality observed |
| test9u.test | 7 | 0.002623s | 0.002618s | 0.002626s | byte equality observed |
| test_actions.test | 6 | 0.003374s | 0.003334s | 0.003292s | byte equality observed |
| test_assert.test | 7 | 0.002812s | 0.002730s | 0.002697s | byte equality observed |
| test_assert_with_placeholder.test | 9 | 0.002596s | 0.002519s | 0.002576s | byte equality observed |
| test_cycles.test | 9 | 0.002644s | 0.002608s | 0.002564s | byte equality observed |
| test_dynamic.test | 9 | 0.002687s | 0.002512s | 0.002565s | byte equality observed |
| test_dynamic_grammar.test | 8 | 0.002820s | 0.002732s | 0.002759s | byte equality observed |
| test_format.test | 8 | 0.002741s | 0.002691s | 0.002657s | byte equality observed |
| test_non_char.test | 8 | 0.002747s | 0.002603s | 0.002632s | byte equality observed |
| test_skip.test | 9 | 0.002613s | 0.002482s | 0.002464s | byte equality observed |
| test_static.test | 9 | 0.002476s | 0.002368s | 0.002449s | byte equality observed |
| test_symbols.test | 7 | 0.003122s | 0.003063s | 0.003083s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/thinkoid/cppgm/actions/runs/44661842949).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
