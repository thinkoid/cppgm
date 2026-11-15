# libs/xpressive/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| regress.test | RUN | 2.513544 | 16.560502 | 11.815135 | 0.008597 | 0.010361 | 0.007717 |
| regress_u.test | RUN | 2.662823 | 16.868044 | 11.961022 | 0.008728 | 0.010585 | 0.008302 |
| c_traits.test | RUN | 2.488887 | 16.233943 | 11.429739 | 0.006753 | 0.008652 | 0.006710 |
| c_traits_u.test | RUN | 2.678933 | 16.632286 | 11.920957 | 0.007400 | 0.008865 | 0.007134 |
| test1.test | RUN | 0.889583 | 4.013524 | 3.402309 | 0.002076 | 0.002100 | 0.002047 |
| test2.test | RUN | 1.185926 | 5.719338 | 5.026927 | 0.001900 | 0.002243 | 0.001909 |
| test3.test | RUN | 1.180396 | 5.789492 | 5.060978 | 0.001952 | 0.002228 | 0.001859 |
| test4.test | RUN | 1.031428 | 4.795005 | 4.171309 | 0.002009 | 0.002088 | 0.001951 |
| test5.test | RUN | 1.097894 | 5.136089 | 4.392137 | 0.001799 | 0.002230 | 0.001773 |
| test6.test | RUN | 0.990992 | 4.254907 | 3.732735 | 0.001768 | 0.002011 | 0.001882 |
| test7.test | RUN | 0.961362 | 4.432072 | 3.853251 | 0.002001 | 0.002128 | 0.001955 |
| test8.test | RUN | 0.942251 | 4.246645 | 3.721036 | 0.002248 | 0.002052 | 0.001758 |
| test9.test | RUN | 1.021746 | 4.683478 | 4.111429 | 0.001871 | 0.002082 | 0.001792 |
| test10.test | RUN | 1.002819 | 4.370141 | 3.761002 | 0.001708 | 0.002166 | 0.001796 |
| test11.test | RUN | 0.964525 | 4.242848 | 3.799710 | 0.001909 | 0.001990 | 0.001844 |
| test1u.test | RUN | 0.885202 | 3.977986 | 3.313559 | 0.002226 | 0.002276 | 0.001897 |
| test2u.test | RUN | 1.209210 | 5.941186 | 5.064405 | 0.002108 | 0.002233 | 0.002174 |
| test3u.test | RUN | 1.225270 | 6.128783 | 5.233618 | 0.001898 | 0.002116 | 0.001848 |
| test4u.test | RUN | 1.042966 | 4.715196 | 4.143993 | 0.002143 | 0.002222 | 0.002060 |
| test5u.test | RUN | 1.125073 | 5.166821 | 4.600780 | 0.001964 | 0.002179 | 0.001909 |
| test6u.test | RUN | 1.012540 | 4.332422 | 3.985489 | 0.001937 | 0.002045 | 0.001964 |
| test7u.test | RUN | 0.986612 | 4.584570 | 4.016076 | 0.002189 | 0.002162 | 0.001766 |
| test8u.test | RUN | 0.945061 | 4.214803 | 3.761867 | 0.002003 | 0.001905 | 0.001915 |
| test9u.test | RUN | 1.031680 | 4.617589 | 4.192190 | 0.001825 | 0.002028 | 0.001867 |
| test10u.test | RUN | 1.005144 | 4.301943 | 3.923365 | 0.001888 | 0.002090 | 0.001976 |
| test11u.test | RUN | 1.001147 | 4.365701 | 4.007031 | 0.001944 | 0.002255 | 0.001851 |
| misc1.test | RUN | 1.864104 | 11.273596 | 8.955434 | 0.002576 | 0.002380 | 0.002247 |
| misc2.test | RUN | 1.856587 | 10.669071 | 8.541657 | 0.002127 | 0.002253 | 0.002036 |
| test_format.test | RUN | 1.976828 | 13.131143 | 10.046878 | 0.002090 | 0.002141 | 0.002000 |
| test_cycles.test | RUN | 0.833486 | 3.904075 | 3.130663 | 0.001881 | 0.002044 | 0.001926 |
| test_non_char.test | RUN | 1.644434 | 9.165118 | 7.252336 | 0.001948 | 0.002144 | 0.001960 |
| test_static.test | RUN | 0.782339 | 3.519585 | 2.793018 | 0.002094 | 0.002145 | 0.001833 |
| test_actions.test | RUN | 1.977693 | 10.731167 | 8.901671 | 0.002352 | 0.002385 | 0.002439 |
| test_assert.test | RUN | 1.099449 | 4.615691 | 4.083237 | 0.002152 | 0.002043 | 0.002022 |
| test_assert_with_placeholder.test | RUN | 1.022415 | 4.192550 | 3.722155 | 0.001840 | 0.002030 | 0.001824 |
| test_symbols.test | RUN | 2.010706 | 10.539717 | 9.958852 | 0.002541 | 0.002293 | 0.002526 |
| test_dynamic.test | RUN | 1.286479 | 7.309764 | 5.823322 | 0.002247 | 0.002111 | 0.001861 |
| test_dynamic_grammar.test | RUN | 1.361488 | 7.697620 | 6.072373 | 0.002031 | 0.002124 | 0.001919 |
| test_skip.test | RUN | 1.539230 | 7.624021 | 6.829449 | 0.001852 | 0.001788 | 0.001853 |
| multiple_defs.test | LINK | 2.526209 | 13.831787 | 11.719422 | — | — | — |
| test_basic_regex.test | COMPILE | 0.520813 | 1.082866 | 1.472339 | — | — | — |
| test_match_results.test | COMPILE | 0.339151 | 0.728741 | 0.999626 | — | — | — |
| test_regex_algorithms.test | COMPILE | 0.345993 | 0.727498 | 1.001071 | — | — | — |
| test_regex_compiler.test | COMPILE | 0.526449 | 1.160542 | 1.478640 | — | — | — |
| test_regex_constants.test | COMPILE | 0.026498 | 0.044253 | 0.045864 | — | — | — |
| test_regex_error.test | COMPILE | 0.182105 | 0.376293 | 0.526407 | — | — | — |
| test_regex_iterator.test | COMPILE | 0.340821 | 0.722791 | 0.947563 | — | — | — |
| test_regex_primitives.test | COMPILE | 0.488034 | 1.205631 | 1.299921 | — | — | — |
| test_regex_token_iterator.test | COMPILE | 0.316427 | 0.743079 | 0.949268 | — | — | — |
| test_regex_traits.test | COMPILE | 0.182206 | 0.388771 | 0.488027 | — | — | — |
| test_sub_match.test | COMPILE | 0.156512 | 0.231532 | 0.306757 | — | — | — |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 1.085× | 1.087×, 1.084× | 1.011× |
| clang | 0.963× | 0.964×, 0.962× | 0.998× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1362 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43670794197).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| c_traits.test | 3 | 0.004868s | 0.006453s | 0.004797s | byte equality observed |
| c_traits_u.test | 3 | 0.005185s | 0.006779s | 0.005082s | byte equality observed |
| misc1.test | 10 | 0.001531s | 0.001506s | 0.001428s | byte equality observed |
| misc2.test | 10 | 0.001352s | 0.001378s | 0.001326s | byte equality observed |
| regress.test | 3 | 0.005819s | 0.007123s | 0.005399s | byte equality observed |
| regress_u.test | 3 | 0.006131s | 0.007500s | 0.005710s | byte equality observed |
| test1.test | 10 | 0.001258s | 0.001252s | 0.001218s | byte equality observed |
| test10.test | 10 | 0.001269s | 0.001250s | 0.001232s | byte equality observed |
| test10u.test | 10 | 0.001245s | 0.001250s | 0.001216s | byte equality observed |
| test11.test | 10 | 0.001267s | 0.001263s | 0.001219s | byte equality observed |
| test11u.test | 10 | 0.001263s | 0.001265s | 0.001245s | byte equality observed |
| test1u.test | 10 | 0.001276s | 0.001283s | 0.001234s | byte equality observed |
| test2.test | 10 | 0.001310s | 0.001309s | 0.001247s | byte equality observed |
| test2u.test | 10 | 0.001318s | 0.001348s | 0.001292s | byte equality observed |
| test3.test | 10 | 0.001312s | 0.001310s | 0.001265s | byte equality observed |
| test3u.test | 10 | 0.001327s | 0.001323s | 0.001288s | byte equality observed |
| test4.test | 10 | 0.001261s | 0.001282s | 0.001236s | byte equality observed |
| test4u.test | 10 | 0.001291s | 0.001280s | 0.001259s | byte equality observed |
| test5.test | 10 | 0.001301s | 0.001332s | 0.001259s | byte equality observed |
| test5u.test | 10 | 0.001306s | 0.001308s | 0.001259s | byte equality observed |
| test6.test | 7 | 0.001308s | 0.001304s | 0.001207s | byte equality observed |
| test6u.test | 8 | 0.001290s | 0.001297s | 0.001240s | byte equality observed |
| test7.test | 10 | 0.001281s | 0.001266s | 0.001211s | byte equality observed |
| test7u.test | 10 | 0.001296s | 0.001274s | 0.001239s | byte equality observed |
| test8.test | 10 | 0.001271s | 0.001260s | 0.001232s | byte equality observed |
| test8u.test | 10 | 0.001293s | 0.001270s | 0.001224s | byte equality observed |
| test9.test | 10 | 0.001259s | 0.001265s | 0.001225s | byte equality observed |
| test9u.test | 10 | 0.001278s | 0.001302s | 0.001264s | byte equality observed |
| test_actions.test | 10 | 0.001476s | 0.001469s | 0.001416s | byte equality observed |
| test_assert.test | 10 | 0.001342s | 0.001322s | 0.001310s | byte equality observed |
| test_assert_with_placeholder.test | 10 | 0.001252s | 0.001227s | 0.001214s | byte equality observed |
| test_cycles.test | 10 | 0.001293s | 0.001273s | 0.001237s | byte equality observed |
| test_dynamic.test | 10 | 0.001296s | 0.001230s | 0.001257s | byte equality observed |
| test_dynamic_grammar.test | 10 | 0.001338s | 0.001308s | 0.001284s | byte equality observed |
| test_format.test | 10 | 0.001331s | 0.001314s | 0.001274s | byte equality observed |
| test_non_char.test | 10 | 0.001295s | 0.001276s | 0.001248s | byte equality observed |
| test_skip.test | 10 | 0.001251s | 0.001254s | 0.001228s | byte equality observed |
| test_static.test | 9 | 0.001265s | 0.001201s | 0.001223s | byte equality observed |
| test_symbols.test | 10 | 0.001452s | 0.001416s | 0.001398s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43670794197).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
