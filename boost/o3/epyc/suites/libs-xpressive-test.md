# libs/xpressive/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| regress.test | RUN | 2.082503 | 14.101743 | 11.262130 | 0.008349 | 0.010267 | 0.007992 |
| regress_u.test | RUN | 2.282347 | 14.427027 | 11.379095 | 0.007117 | 0.010512 | 0.008315 |
| c_traits.test | RUN | 2.131856 | 13.744121 | 10.733102 | 0.004963 | 0.009205 | 0.007098 |
| c_traits_u.test | RUN | 2.306550 | 14.305206 | 11.221561 | 0.007768 | 0.009495 | 0.007487 |
| test1.test | RUN | 0.810477 | 3.569051 | 3.235709 | 0.006584 | 0.002896 | 0.002692 |
| test2.test | RUN | 1.131340 | 5.005036 | 4.768609 | 0.002598 | 0.002878 | 0.002761 |
| test3.test | RUN | 1.076196 | 5.013002 | 4.896319 | 0.002629 | 0.002827 | 0.002915 |
| test4.test | RUN | 0.915754 | 4.174703 | 3.965031 | 0.002476 | 0.002805 | 0.002935 |
| test5.test | RUN | 0.979704 | 4.522448 | 4.337361 | 0.002652 | 0.002963 | 0.003056 |
| test6.test | RUN | 0.894093 | 3.787783 | 3.597143 | 0.002803 | 0.002704 | 0.002855 |
| test7.test | RUN | 0.863234 | 3.776668 | 3.602931 | 0.002357 | 0.002950 | 0.002986 |
| test8.test | RUN | 0.870500 | 3.659458 | 3.538183 | 0.002417 | 0.002903 | 0.003066 |
| test9.test | RUN | 0.947502 | 4.127698 | 3.987067 | 0.002663 | 0.002839 | 0.002978 |
| test10.test | RUN | 0.891507 | 3.864067 | 3.745064 | 0.002806 | 0.003329 | 0.002877 |
| test11.test | RUN | 0.884742 | 3.660266 | 3.643367 | 0.002283 | 0.002881 | 0.002844 |
| test1u.test | RUN | 0.813160 | 3.492971 | 3.100020 | 0.002337 | 0.002801 | 0.002911 |
| test2u.test | RUN | 1.067860 | 5.237595 | 4.960747 | 0.002722 | 0.002767 | 0.003064 |
| test3u.test | RUN | 1.100951 | 5.321527 | 5.016414 | 0.002635 | 0.003012 | 0.003075 |
| test4u.test | RUN | 0.948242 | 4.037645 | 4.005861 | 0.002664 | 0.002817 | 0.003024 |
| test5u.test | RUN | 0.994445 | 4.555228 | 4.466290 | 0.002628 | 0.002974 | 0.002969 |
| test6u.test | RUN | 0.925547 | 3.837573 | 3.744003 | 0.002555 | 0.002973 | 0.003010 |
| test7u.test | RUN | 0.921784 | 3.992644 | 3.819768 | 0.002514 | 0.002682 | 0.002776 |
| test8u.test | RUN | 0.854048 | 3.744824 | 3.461780 | 0.002694 | 0.002832 | 0.002790 |
| test9u.test | RUN | 0.954822 | 4.000077 | 3.966044 | 0.002591 | 0.003022 | 0.003001 |
| test10u.test | RUN | 0.914023 | 3.818567 | 3.591977 | 0.002696 | 0.002779 | 0.002954 |
| test11u.test | RUN | 0.906958 | 3.795576 | 3.770495 | 0.002911 | 0.002809 | 0.002679 |
| misc1.test | RUN | 1.686377 | 9.845943 | 8.138555 | 0.003626 | 0.003384 | 0.003722 |
| misc2.test | RUN | 1.691453 | 9.450318 | 8.053799 | 0.002594 | 0.003157 | 0.003179 |
| test_format.test | RUN | 1.792455 | 11.578680 | 9.246181 | 0.002843 | 0.003057 | 0.002966 |
| test_cycles.test | RUN | 0.797229 | 3.447897 | 2.954726 | 0.002540 | 0.002884 | 0.002947 |
| test_non_char.test | RUN | 1.415722 | 7.933204 | 6.783686 | 0.002727 | 0.002887 | 0.002771 |
| test_static.test | RUN | 0.702009 | 3.173681 | 2.621311 | 0.003048 | 0.002724 | 0.002841 |
| test_actions.test | RUN | 1.762253 | 9.615396 | 8.449868 | 0.003514 | 0.003674 | 0.003718 |
| test_assert.test | RUN | 0.991514 | 4.189777 | 3.757347 | 0.003009 | 0.002845 | 0.002963 |
| test_assert_with_placeholder.test | RUN | 0.923845 | 3.715598 | 3.383002 | 0.002585 | 0.002802 | 0.002726 |
| test_symbols.test | RUN | 1.858883 | 9.473604 | 9.379064 | 0.003658 | 0.003863 | 0.003810 |
| test_dynamic.test | RUN | 1.141551 | 6.316325 | 5.475827 | 0.002693 | 0.002934 | 0.003009 |
| test_dynamic_grammar.test | RUN | 1.182496 | 6.615730 | 5.704205 | 0.003041 | 0.003214 | 0.003001 |
| test_skip.test | RUN | 1.403846 | 7.002775 | 6.554237 | 0.002732 | 0.003007 | 0.002867 |
| multiple_defs.test | LINK | 2.233989 | 12.687507 | 11.042492 | — | — | — |
| test_basic_regex.test | COMPILE | 0.476502 | 0.974865 | 1.342377 | — | — | — |
| test_match_results.test | COMPILE | 0.318533 | 0.724691 | 0.889944 | — | — | — |
| test_regex_algorithms.test | COMPILE | 0.345876 | 0.702285 | 0.909080 | — | — | — |
| test_regex_compiler.test | COMPILE | 0.544594 | 1.158230 | 1.299576 | — | — | — |
| test_regex_constants.test | COMPILE | 0.028185 | 0.050657 | 0.053623 | — | — | — |
| test_regex_error.test | COMPILE | 0.194479 | 0.382156 | 0.478109 | — | — | — |
| test_regex_iterator.test | COMPILE | 0.350415 | 0.700595 | 0.876977 | — | — | — |
| test_regex_primitives.test | COMPILE | 0.532364 | 1.152049 | 1.298451 | — | — | — |
| test_regex_token_iterator.test | COMPILE | 0.333344 | 0.698189 | 0.861689 | — | — | — |
| test_regex_traits.test | COMPILE | 0.206299 | 0.377905 | 0.387242 | — | — | — |
| test_sub_match.test | COMPILE | 0.163257 | 0.307218 | 0.351697 | — | — | — |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 1.062×† | 1.070×, 1.054× | 1.139× |
| clang | 0.902×† | 0.969×, 0.836× | 0.981× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1363 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43658654032).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| c_traits.test | 4 | 0.006086s | 0.007947s | 0.004970s | byte equality observed |
| c_traits_u.test | 3 | 0.006435s | 0.008288s | 0.005388s | byte equality observed |
| misc1.test | 10 | 0.002332s | 0.002303s | 0.002161s | byte equality observed |
| misc2.test | 10 | 0.002152s | 0.002024s | 0.001879s | byte equality observed |
| regress.test | 3 | 0.007498s | 0.009469s | 0.006370s | byte equality observed |
| regress_u.test | 3 | 0.007577s | 0.009470s | 0.006720s | byte equality observed |
| test1.test | 10 | 0.001911s | 0.001858s | 0.001745s | byte equality observed |
| test10.test | 10 | 0.001864s | 0.001789s | 0.001724s | byte equality observed |
| test10u.test | 10 | 0.001854s | 0.001795s | 0.001738s | byte equality observed |
| test11.test | 10 | 0.001851s | 0.001832s | 0.001732s | byte equality observed |
| test11u.test | 10 | 0.001892s | 0.001811s | 0.001757s | byte equality observed |
| test1u.test | 10 | 0.001853s | 0.001799s | 0.001763s | byte equality observed |
| test2.test | 10 | 0.001931s | 0.001856s | 0.001768s | byte equality observed |
| test2u.test | 10 | 0.001878s | 0.001835s | 0.001822s | byte equality observed |
| test3.test | 10 | 0.001889s | 0.001871s | 0.001801s | byte equality observed |
| test3u.test | 10 | 0.001905s | 0.001891s | 0.001866s | byte equality observed |
| test4.test | 10 | 0.001869s | 0.001809s | 0.001793s | byte equality observed |
| test4u.test | 10 | 0.001836s | 0.001821s | 0.001788s | byte equality observed |
| test5.test | 10 | 0.001879s | 0.001858s | 0.001810s | byte equality observed |
| test5u.test | 10 | 0.001907s | 0.001866s | 0.001797s | byte equality observed |
| test6.test | 10 | 0.001868s | 0.001837s | 0.001718s | byte equality observed |
| test6u.test | 10 | 0.001881s | 0.001868s | 0.001744s | byte equality observed |
| test7.test | 10 | 0.001860s | 0.001806s | 0.001771s | byte equality observed |
| test7u.test | 9 | 0.001836s | 0.001848s | 0.001761s | byte equality observed |
| test8.test | 10 | 0.001853s | 0.001840s | 0.001720s | byte equality observed |
| test8u.test | 10 | 0.001842s | 0.001814s | 0.001765s | byte equality observed |
| test9.test | 10 | 0.001889s | 0.001821s | 0.001744s | byte equality observed |
| test9u.test | 10 | 0.001862s | 0.001823s | 0.001731s | byte equality observed |
| test_actions.test | 10 | 0.002331s | 0.002270s | 0.002167s | byte equality observed |
| test_assert.test | 10 | 0.001952s | 0.001899s | 0.001797s | byte equality observed |
| test_assert_with_placeholder.test | 10 | 0.001835s | 0.001788s | 0.001730s | byte equality observed |
| test_cycles.test | 10 | 0.001861s | 0.001789s | 0.001725s | byte equality observed |
| test_dynamic.test | 10 | 0.001868s | 0.001800s | 0.001758s | byte equality observed |
| test_dynamic_grammar.test | 8 | 0.002011s | 0.001908s | 0.001841s | byte equality observed |
| test_format.test | 10 | 0.001933s | 0.001889s | 0.001784s | byte equality observed |
| test_non_char.test | 10 | 0.001915s | 0.001845s | 0.001782s | byte equality observed |
| test_skip.test | 10 | 0.001810s | 0.001751s | 0.001704s | byte equality observed |
| test_static.test | 10 | 0.001754s | 0.001709s | 0.001660s | byte equality observed |
| test_symbols.test | 10 | 0.002121s | 0.002090s | 0.001978s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43658654032).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
