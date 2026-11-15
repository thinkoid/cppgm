# libs/xpressive/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| regress.test | RUN | 3.736258 | 23.292337 | 21.276539 | 0.014008 | 0.019559 | 0.013476 |
| regress_u.test | RUN | 3.875417 | 24.375319 | 20.473897 | 0.014147 | 0.019028 | 0.014015 |
| c_traits.test | RUN | 3.694641 | 23.365421 | 19.244359 | 0.011765 | 0.016163 | 0.010931 |
| c_traits_u.test | RUN | 4.005888 | 24.257372 | 19.767716 | 0.011757 | 0.016145 | 0.011972 |
| test1.test | RUN | 1.414700 | 6.214394 | 6.241002 | 0.003377 | 0.003679 | 0.003980 |
| test2.test | RUN | 1.866375 | 8.776763 | 8.645834 | 0.003813 | 0.003713 | 0.003785 |
| test3.test | RUN | 1.892213 | 8.575128 | 8.969112 | 0.003676 | 0.003766 | 0.004036 |
| test4.test | RUN | 1.629905 | 7.099400 | 7.407122 | 0.003533 | 0.003877 | 0.003917 |
| test5.test | RUN | 1.755256 | 7.740956 | 8.052215 | 0.003752 | 0.004045 | 0.003910 |
| test6.test | RUN | 1.570264 | 6.467125 | 6.881299 | 0.003637 | 0.003614 | 0.003884 |
| test7.test | RUN | 1.539485 | 6.636944 | 6.974552 | 0.003675 | 0.003842 | 0.003982 |
| test8.test | RUN | 1.512014 | 6.501618 | 6.921968 | 0.003517 | 0.003724 | 0.003854 |
| test9.test | RUN | 1.633999 | 6.786912 | 7.630533 | 0.003569 | 0.004153 | 0.003591 |
| test10.test | RUN | 1.587498 | 6.601482 | 7.232232 | 0.003449 | 0.003854 | 0.003576 |
| test11.test | RUN | 1.540252 | 6.376027 | 7.096438 | 0.003276 | 0.003941 | 0.004006 |
| test1u.test | RUN | 1.410491 | 6.023620 | 6.050174 | 0.003588 | 0.003935 | 0.003802 |
| test2u.test | RUN | 1.917435 | 8.958119 | 9.439098 | 0.003742 | 0.004262 | 0.004001 |
| test3u.test | RUN | 1.905934 | 9.096720 | 9.623395 | 0.003769 | 0.004231 | 0.004074 |
| test4u.test | RUN | 1.630832 | 7.017116 | 7.593259 | 0.004047 | 0.004107 | 0.003656 |
| test5u.test | RUN | 1.750479 | 7.871586 | 8.505720 | 0.003800 | 0.003708 | 0.003937 |
| test6u.test | RUN | 1.631958 | 6.619491 | 7.197207 | 0.003744 | 0.003965 | 0.004057 |
| test7u.test | RUN | 1.587193 | 6.860174 | 7.328601 | 0.003786 | 0.003805 | 0.004097 |
| test8u.test | RUN | 1.516416 | 6.418720 | 6.869045 | 0.003545 | 0.004090 | 0.003936 |
| test9u.test | RUN | 1.647692 | 6.929114 | 7.647306 | 0.003734 | 0.003831 | 0.003831 |
| test10u.test | RUN | 1.615403 | 6.610942 | 7.068240 | 0.003554 | 0.003968 | 0.003968 |
| test11u.test | RUN | 1.600720 | 6.540387 | 7.332737 | 0.003775 | 0.004080 | 0.004124 |
| misc1.test | RUN | 2.825405 | 16.409711 | 15.336168 | 0.004501 | 0.004894 | 0.005009 |
| misc2.test | RUN | 2.872136 | 15.324961 | 14.912539 | 0.004163 | 0.004372 | 0.004575 |
| test_format.test | RUN | 2.971536 | 18.974691 | 16.936779 | 0.003932 | 0.004036 | 0.003445 |
| test_cycles.test | RUN | 1.385975 | 5.935227 | 5.761277 | 0.003713 | 0.003815 | 0.003856 |
| test_non_char.test | RUN | 2.521579 | 13.038790 | 12.704477 | 0.003840 | 0.003771 | 0.004291 |
| test_static.test | RUN | 1.290044 | 5.481050 | 5.137835 | 0.003785 | 0.003307 | 0.003961 |
| test_actions.test | RUN | 3.031205 | 15.990874 | 15.840744 | 0.005196 | 0.005379 | 0.005335 |
| test_assert.test | RUN | 1.805078 | 7.033149 | 7.503369 | 0.004158 | 0.004316 | 0.004015 |
| test_assert_with_placeholder.test | RUN | 1.682583 | 6.271586 | 6.829249 | 0.003762 | 0.003645 | 0.003960 |
| test_symbols.test | RUN | 3.218108 | 15.718859 | 17.834386 | 0.005523 | 0.005039 | 0.005693 |
| test_dynamic.test | RUN | 1.971327 | 10.513295 | 10.096651 | 0.003892 | 0.003605 | 0.003835 |
| test_dynamic_grammar.test | RUN | 2.103204 | 11.143870 | 10.590561 | 0.004127 | 0.004105 | 0.004316 |
| test_skip.test | RUN | 2.473018 | 11.601571 | 12.314077 | 0.003829 | 0.003673 | 0.003524 |
| multiple_defs.test | LINK | 3.917174 | 21.034045 | 20.356172 | — | — | — |
| test_basic_regex.test | COMPILE | 0.877857 | 1.840362 | 2.815494 | — | — | — |
| test_match_results.test | COMPILE | 0.597289 | 1.278143 | 1.981531 | — | — | — |
| test_regex_algorithms.test | COMPILE | 0.600072 | 1.289065 | 2.006849 | — | — | — |
| test_regex_compiler.test | COMPILE | 0.879571 | 2.015949 | 3.012221 | — | — | — |
| test_regex_constants.test | COMPILE | 0.049234 | 0.082662 | 0.100648 | — | — | — |
| test_regex_error.test | COMPILE | 0.312251 | 0.677827 | 1.120267 | — | — | — |
| test_regex_iterator.test | COMPILE | 0.570814 | 1.238325 | 1.959144 | — | — | — |
| test_regex_primitives.test | COMPILE | 0.909417 | 1.970825 | 2.759009 | — | — | — |
| test_regex_token_iterator.test | COMPILE | 0.535997 | 1.260574 | 1.868537 | — | — | — |
| test_regex_traits.test | COMPILE | 0.336276 | 0.643403 | 1.044597 | — | — | — |
| test_sub_match.test | COMPILE | 0.274187 | 0.409825 | 0.714272 | — | — | — |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 1.098× | 1.085×, 1.111× | 1.002× |
| clang | 0.940× | 0.947×, 0.933× | 0.999× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1360 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/43712369003).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| c_traits.test | 2 | 0.009678s | 0.014652s | 0.009527s | byte equality observed |
| c_traits_u.test | 2 | 0.011195s | 0.015417s | 0.009767s | byte equality observed |
| misc1.test | 6 | 0.003288s | 0.003200s | 0.003181s | byte equality observed |
| misc2.test | 8 | 0.002973s | 0.002805s | 0.002876s | byte equality observed |
| regress.test | 2 | 0.013227s | 0.017418s | 0.011337s | byte equality observed |
| regress_u.test | 2 | 0.013867s | 0.017271s | 0.011554s | byte equality observed |
| test1.test | 7 | 0.002640s | 0.002598s | 0.002531s | byte equality observed |
| test10.test | 8 | 0.002631s | 0.002451s | 0.002498s | byte equality observed |
| test10u.test | 9 | 0.002649s | 0.002562s | 0.002544s | byte equality observed |
| test11.test | 8 | 0.002646s | 0.002542s | 0.002567s | byte equality observed |
| test11u.test | 9 | 0.002670s | 0.002606s | 0.002553s | byte equality observed |
| test1u.test | 8 | 0.002661s | 0.002597s | 0.002576s | byte equality observed |
| test2.test | 8 | 0.002705s | 0.002709s | 0.002630s | byte equality observed |
| test2u.test | 8 | 0.002694s | 0.002674s | 0.002568s | byte equality observed |
| test3.test | 9 | 0.002706s | 0.002684s | 0.002575s | byte equality observed |
| test3u.test | 8 | 0.002670s | 0.002704s | 0.002606s | byte equality observed |
| test4.test | 9 | 0.002721s | 0.002621s | 0.002548s | byte equality observed |
| test4u.test | 8 | 0.002680s | 0.002614s | 0.002529s | byte equality observed |
| test5.test | 7 | 0.002689s | 0.002633s | 0.002575s | byte equality observed |
| test5u.test | 7 | 0.002687s | 0.002745s | 0.002590s | byte equality observed |
| test6.test | 8 | 0.002627s | 0.002618s | 0.002558s | byte equality observed |
| test6u.test | 7 | 0.002680s | 0.002645s | 0.002532s | byte equality observed |
| test7.test | 8 | 0.002601s | 0.002654s | 0.002531s | byte equality observed |
| test7u.test | 8 | 0.002632s | 0.002568s | 0.002560s | byte equality observed |
| test8.test | 8 | 0.002637s | 0.002577s | 0.002502s | byte equality observed |
| test8u.test | 7 | 0.002638s | 0.002584s | 0.002563s | byte equality observed |
| test9.test | 8 | 0.002637s | 0.002555s | 0.002495s | byte equality observed |
| test9u.test | 8 | 0.002672s | 0.002573s | 0.002529s | byte equality observed |
| test_actions.test | 7 | 0.003340s | 0.003371s | 0.003261s | byte equality observed |
| test_assert.test | 8 | 0.002826s | 0.002831s | 0.002634s | byte equality observed |
| test_assert_with_placeholder.test | 9 | 0.002580s | 0.002582s | 0.002445s | byte equality observed |
| test_cycles.test | 9 | 0.002644s | 0.002561s | 0.002591s | byte equality observed |
| test_dynamic.test | 9 | 0.002584s | 0.002619s | 0.002556s | byte equality observed |
| test_dynamic_grammar.test | 8 | 0.002801s | 0.002820s | 0.002732s | byte equality observed |
| test_format.test | 8 | 0.002748s | 0.002742s | 0.002625s | byte equality observed |
| test_non_char.test | 8 | 0.002738s | 0.002623s | 0.002625s | byte equality observed |
| test_skip.test | 7 | 0.002570s | 0.002448s | 0.002482s | byte equality observed |
| test_static.test | 9 | 0.002358s | 0.002405s | 0.002337s | byte equality observed |
| test_symbols.test | 7 | 0.002885s | 0.002984s | 0.002788s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/43712369003).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
