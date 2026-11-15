# libs/xpressive/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| regress.test | RUN | 2.297979 | 14.557347 | 10.605602 | 0.008766 | 0.010563 | 0.007644 |
| regress_u.test | RUN | 2.608502 | 14.597813 | 10.643363 | 0.008635 | 0.010522 | 0.007896 |
| c_traits.test | RUN | 2.394654 | 13.902096 | 10.146007 | 0.007045 | 0.009334 | 0.006703 |
| c_traits_u.test | RUN | 2.611249 | 14.380136 | 10.545480 | 0.007199 | 0.009757 | 0.006800 |
| test1.test | RUN | 0.923714 | 3.533278 | 2.945808 | 0.002710 | 0.002787 | 0.002836 |
| test2.test | RUN | 1.187091 | 5.047513 | 4.509524 | 0.002788 | 0.003115 | 0.002765 |
| test3.test | RUN | 1.187566 | 5.057310 | 4.463654 | 0.002060 | 0.002927 | 0.002572 |
| test4.test | RUN | 1.032460 | 4.210790 | 3.633144 | 0.002662 | 0.002867 | 0.002712 |
| test5.test | RUN | 1.084869 | 4.519310 | 3.859109 | 0.002850 | 0.002757 | 0.002518 |
| test6.test | RUN | 0.929211 | 3.843514 | 3.219890 | 0.002436 | 0.002736 | 0.002636 |
| test7.test | RUN | 0.906300 | 3.938542 | 3.284151 | 0.002652 | 0.002755 | 0.002821 |
| test8.test | RUN | 0.906409 | 3.801553 | 3.260494 | 0.002391 | 0.002783 | 0.002805 |
| test9.test | RUN | 0.987167 | 4.053257 | 3.657493 | 0.003832 | 0.002806 | 0.002319 |
| test10.test | RUN | 0.988816 | 3.880338 | 3.429432 | 0.002647 | 0.002687 | 0.002637 |
| test11.test | RUN | 0.946549 | 3.744022 | 3.369806 | 0.002720 | 0.002863 | 0.002533 |
| test1u.test | RUN | 0.886938 | 3.569292 | 2.930030 | 0.002814 | 0.002739 | 0.002362 |
| test2u.test | RUN | 1.176787 | 5.127477 | 4.528837 | 0.003102 | 0.002928 | 0.002943 |
| test3u.test | RUN | 1.209109 | 5.326674 | 4.644060 | 0.002813 | 0.003002 | 0.002778 |
| test4u.test | RUN | 1.030294 | 4.265362 | 3.681093 | 0.002922 | 0.002886 | 0.003022 |
| test5u.test | RUN | 1.059386 | 4.689909 | 4.136102 | 0.002861 | 0.002941 | 0.002883 |
| test6u.test | RUN | 0.998068 | 3.947932 | 3.512742 | 0.002816 | 0.002866 | 0.002720 |
| test7u.test | RUN | 1.038237 | 4.088814 | 3.605154 | 0.002650 | 0.002810 | 0.002834 |
| test8u.test | RUN | 0.967299 | 3.809662 | 3.315362 | 0.002798 | 0.002821 | 0.002815 |
| test9u.test | RUN | 1.084236 | 4.116063 | 3.771254 | 0.002710 | 0.003025 | 0.002852 |
| test10u.test | RUN | 1.031742 | 3.915957 | 3.439419 | 0.002996 | 0.002786 | 0.002846 |
| test11u.test | RUN | 1.001449 | 3.858283 | 3.571820 | 0.003073 | 0.002810 | 0.002676 |
| misc1.test | RUN | 1.814373 | 9.846635 | 7.875544 | 0.003895 | 0.003495 | 0.003481 |
| misc2.test | RUN | 1.824958 | 9.296017 | 7.628211 | 0.003238 | 0.003202 | 0.003060 |
| test_format.test | RUN | 1.832822 | 11.369782 | 8.774284 | 0.003072 | 0.003036 | 0.002857 |
| test_cycles.test | RUN | 0.833852 | 3.380776 | 2.793437 | 0.002832 | 0.002785 | 0.002699 |
| test_non_char.test | RUN | 1.528437 | 8.017391 | 6.567098 | 0.003107 | 0.003006 | 0.002859 |
| test_static.test | RUN | 0.766321 | 3.147437 | 2.518463 | 0.002883 | 0.002863 | 0.002717 |
| test_actions.test | RUN | 1.873280 | 9.516153 | 8.073572 | 0.003917 | 0.003856 | 0.003520 |
| test_assert.test | RUN | 1.088618 | 4.003273 | 3.569843 | 0.003300 | 0.002831 | 0.003028 |
| test_assert_with_placeholder.test | RUN | 1.028899 | 3.786376 | 3.251028 | 0.002914 | 0.002778 | 0.002840 |
| test_symbols.test | RUN | 2.082803 | 9.382059 | 8.902310 | 0.003960 | 0.003870 | 0.003602 |
| test_dynamic.test | RUN | 1.257617 | 6.494496 | 5.118123 | 0.003018 | 0.002854 | 0.002818 |
| test_dynamic_grammar.test | RUN | 1.265367 | 6.786918 | 5.400726 | 0.003443 | 0.002888 | 0.003210 |
| test_skip.test | RUN | 1.596920 | 7.044123 | 6.171980 | 0.003159 | 0.002634 | 0.003482 |
| multiple_defs.test | LINK | 2.523700 | 12.289255 | 10.317857 | — | — | — |
| test_basic_regex.test | COMPILE | 0.569554 | 1.020967 | 1.311310 | — | — | — |
| test_match_results.test | COMPILE | 0.395547 | 0.686414 | 0.813670 | — | — | — |
| test_regex_algorithms.test | COMPILE | 0.387474 | 0.676620 | 0.825822 | — | — | — |
| test_regex_compiler.test | COMPILE | 0.568669 | 1.074161 | 1.245256 | — | — | — |
| test_regex_constants.test | COMPILE | 0.030146 | 0.047452 | 0.051298 | — | — | — |
| test_regex_error.test | COMPILE | 0.205307 | 0.344090 | 0.436178 | — | — | — |
| test_regex_iterator.test | COMPILE | 0.359908 | 0.654319 | 0.797645 | — | — | — |
| test_regex_primitives.test | COMPILE | 0.554835 | 1.076275 | 1.143230 | — | — | — |
| test_regex_token_iterator.test | COMPILE | 0.368648 | 0.667327 | 0.792262 | — | — | — |
| test_regex_traits.test | COMPILE | 0.222846 | 0.332412 | 0.406012 | — | — | — |
| test_sub_match.test | COMPILE | 0.142435 | 0.283818 | 0.338056 | — | — | — |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 1.175×† | 1.182×, 1.167× | 1.066× |
| clang | 1.009× | 1.023×, 0.995× | 1.020× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1364 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43686398833).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| c_traits.test | 3 | 0.004536s | 0.006677s | 0.005723s | byte equality observed |
| c_traits_u.test | 3 | 0.004788s | 0.006747s | 0.006120s | byte equality observed |
| misc1.test | 10 | 0.001832s | 0.001993s | 0.002236s | byte equality observed |
| misc2.test | 10 | 0.001644s | 0.001743s | 0.001957s | byte equality observed |
| regress.test | 3 | 0.005403s | 0.007916s | 0.006357s | byte equality observed |
| regress_u.test | 3 | 0.005426s | 0.008110s | 0.006772s | byte equality observed |
| test1.test | 10 | 0.001520s | 0.001653s | 0.001769s | byte equality observed |
| test10.test | 10 | 0.001472s | 0.001640s | 0.001752s | byte equality observed |
| test10u.test | 10 | 0.001507s | 0.001686s | 0.001755s | byte equality observed |
| test11.test | 10 | 0.001468s | 0.001677s | 0.001737s | byte equality observed |
| test11u.test | 10 | 0.001494s | 0.001653s | 0.001767s | byte equality observed |
| test1u.test | 10 | 0.001494s | 0.001677s | 0.001771s | byte equality observed |
| test2.test | 10 | 0.001533s | 0.001732s | 0.001770s | byte equality observed |
| test2u.test | 9 | 0.001535s | 0.001721s | 0.001820s | byte equality observed |
| test3.test | 10 | 0.001618s | 0.001749s | 0.001779s | byte equality observed |
| test3u.test | 10 | 0.001631s | 0.001760s | 0.001791s | byte equality observed |
| test4.test | 10 | 0.001660s | 0.001709s | 0.001741s | byte equality observed |
| test4u.test | 10 | 0.001711s | 0.001701s | 0.001769s | byte equality observed |
| test5.test | 10 | 0.001676s | 0.001694s | 0.001713s | byte equality observed |
| test5u.test | 10 | 0.001702s | 0.001727s | 0.001750s | byte equality observed |
| test6.test | 10 | 0.001675s | 0.001679s | 0.001709s | byte equality observed |
| test6u.test | 10 | 0.001697s | 0.001696s | 0.001728s | byte equality observed |
| test7.test | 10 | 0.001705s | 0.001703s | 0.001722s | byte equality observed |
| test7u.test | 10 | 0.001684s | 0.001685s | 0.001750s | byte equality observed |
| test8.test | 10 | 0.001701s | 0.001665s | 0.001753s | byte equality observed |
| test8u.test | 10 | 0.001664s | 0.001667s | 0.001753s | byte equality observed |
| test9.test | 10 | 0.001697s | 0.001678s | 0.001775s | byte equality observed |
| test9u.test | 10 | 0.001705s | 0.001683s | 0.001774s | byte equality observed |
| test_actions.test | 10 | 0.002109s | 0.002085s | 0.002214s | byte equality observed |
| test_assert.test | 10 | 0.001798s | 0.001748s | 0.001846s | byte equality observed |
| test_assert_with_placeholder.test | 10 | 0.001683s | 0.001664s | 0.001756s | byte equality observed |
| test_cycles.test | 10 | 0.001734s | 0.001712s | 0.001733s | byte equality observed |
| test_dynamic.test | 10 | 0.001708s | 0.001724s | 0.001755s | byte equality observed |
| test_dynamic_grammar.test | 9 | 0.001832s | 0.001824s | 0.001879s | byte equality observed |
| test_format.test | 10 | 0.001790s | 0.001781s | 0.001812s | byte equality observed |
| test_non_char.test | 10 | 0.001796s | 0.001772s | 0.001781s | byte equality observed |
| test_skip.test | 10 | 0.001691s | 0.001721s | 0.001715s | byte equality observed |
| test_static.test | 10 | 0.001638s | 0.001647s | 0.001668s | byte equality observed |
| test_symbols.test | 10 | 0.001998s | 0.002073s | 0.001963s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43686398833).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
