# libs/mpl/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| increased_arity.test | COMPILE | 0.310019 | 0.850448 | 0.787225 | — | — | — |
| largest_int.test | COMPILE | 0.095652 | 0.242154 | 0.299035 | — | — | — |
| msvc_is_class.test | COMPILE | 0.011746 | 0.028505 | 0.032526 | — | — | — |
| template_arity.test | COMPILE | 0.099376 | 0.237284 | 0.291496 | — | — | — |
| is_seq.test | COMPILE | 0.004141 | 0.010355 | 0.019805 | — | — | — |
| token_equal.test | COMPILE | 0.003913 | 0.010674 | 0.021198 | — | — | — |
| advance.test | COMPILE | 0.110949 | 0.267876 | 0.315410 | — | — | — |
| always.test | COMPILE | 0.112796 | 0.265866 | 0.323455 | — | — | — |
| apply.test | COMPILE | 0.117308 | 0.285340 | 0.344130 | — | — | — |
| apply_wrap.test | COMPILE | 0.101900 | 0.244829 | 0.290692 | — | — | — |
| arithmetic.test | COMPILE | 0.114542 | 0.273103 | 0.324876 | — | — | — |
| as_sequence.test | COMPILE | 0.119843 | 0.294769 | 0.335684 | — | — | — |
| assert.test | COMPILE | 0.026899 | 0.053790 | 0.060134 | — | — | — |
| at.test | COMPILE | 0.118667 | 0.294475 | 0.346146 | — | — | — |
| back.test | COMPILE | 0.113499 | 0.277262 | 0.326698 | — | — | — |
| bind.test | COMPILE | 0.111081 | 0.266865 | 0.320411 | — | — | — |
| bitwise.test | COMPILE | 0.109689 | 0.269866 | 0.325538 | — | — | — |
| bool.test | RUN | 0.103016 | 0.240713 | 0.295737 | 0.001137 | 0.001347 | 0.001275 |
| comparison.test | COMPILE | 0.112150 | 0.267147 | 0.319054 | — | — | — |
| contains.test | COMPILE | 0.134585 | 0.328977 | 0.387476 | — | — | — |
| copy.test | COMPILE | 0.158563 | 0.396815 | 0.462956 | — | — | — |
| copy_if.test | COMPILE | 0.142756 | 0.353782 | 0.415527 | — | — | — |
| count.test | COMPILE | 0.139424 | 0.322697 | 0.386366 | — | — | — |
| count_if.test | COMPILE | 0.142646 | 0.338643 | 0.410096 | — | — | — |
| deque.test | COMPILE | 0.135173 | 0.332109 | 0.387757 | — | — | — |
| distance.test | COMPILE | 0.121403 | 0.305200 | 0.356340 | — | — | — |
| empty.test | COMPILE | 0.112056 | 0.272183 | 0.313808 | — | — | — |
| equal.test | COMPILE | 0.129986 | 0.310115 | 0.366409 | — | — | — |
| erase.test | COMPILE | 0.150165 | 0.364557 | 0.429679 | — | — | — |
| erase_range.test | COMPILE | 0.143166 | 0.350857 | 0.402441 | — | — | — |
| eval_if.test | COMPILE | 0.102179 | 0.248291 | 0.296013 | — | — | — |
| filter_view.test | COMPILE | 0.138024 | 0.341686 | 0.406786 | — | — | — |
| find.test | COMPILE | 0.134565 | 0.334429 | 0.393066 | — | — | — |
| find_if.test | COMPILE | 0.142075 | 0.340286 | 0.404467 | — | — | — |
| fold.test | COMPILE | 0.143725 | 0.359391 | 0.421686 | — | — | — |
| for_each.test | RUN | 0.216033 | 0.518905 | 0.665077 | 0.001151 | 0.001283 | 0.001259 |
| front.test | COMPILE | 0.115176 | 0.286222 | 0.331242 | — | — | — |
| get_tag_def.test | COMPILE | 0.100638 | 0.236775 | 0.294956 | — | — | — |
| has_xxx.test | COMPILE | 0.114001 | 0.262803 | 0.331270 | — | — | — |
| identity.test | COMPILE | 0.107981 | 0.274851 | 0.332374 | — | — | — |
| if.test | COMPILE | 0.103680 | 0.243130 | 0.296311 | — | — | — |
| index_of.test | COMPILE | 0.125258 | 0.313429 | 0.377132 | — | — | — |
| inherit.test | COMPILE | 0.104513 | 0.245982 | 0.306800 | — | — | — |
| insert.test | COMPILE | 0.147524 | 0.374895 | 0.446005 | — | — | — |
| insert_range.test | COMPILE | 0.202831 | 0.505872 | 0.637251 | — | — | — |
| int.test | RUN | 0.104031 | 0.273726 | 0.321137 | 0.001299 | 0.001370 | 0.001151 |
| char.test | RUN | 0.106244 | 0.275569 | 0.322876 | 0.001102 | 0.001188 | 0.001085 |
| char_unsigned.test | RUN | 0.113416 | 0.270660 | 0.317490 | 0.001234 | 0.001385 | 0.001228 |
| integral_c.test | RUN | 0.121635 | 0.347583 | 0.402050 | 0.001286 | 0.001353 | 0.001089 |
| integral_c_unsigned.test | RUN | 0.123414 | 0.354934 | 0.397155 | 0.001042 | 0.001267 | 0.001082 |
| is_placeholder.test | COMPILE | 0.105585 | 0.238539 | 0.281548 | — | — | — |
| is_sequence.test | COMPILE | 0.127086 | 0.302599 | 0.355125 | — | — | — |
| iterator_tags.test | COMPILE | 0.106781 | 0.249661 | 0.299113 | — | — | — |
| joint_view.test | COMPILE | 0.140765 | 0.340884 | 0.401848 | — | — | — |
| lambda.test | COMPILE | 0.132184 | 0.312971 | 0.372296 | — | — | — |
| lambda_args.test | COMPILE | 0.123895 | 0.299379 | 0.363732 | — | — | — |
| list.test | COMPILE | 0.127740 | 0.310221 | 0.370832 | — | — | — |
| list_c.test | COMPILE | 0.128539 | 0.303132 | 0.368133 | — | — | — |
| logical.test | COMPILE | 0.102342 | 0.243753 | 0.291148 | — | — | — |
| lower_bound.test | COMPILE | 0.135582 | 0.321314 | 0.375228 | — | — | — |
| map.test | COMPILE | 0.156676 | 0.395743 | 0.473716 | — | — | — |
| max_element.test | COMPILE | 0.126945 | 0.296332 | 0.352782 | — | — | — |
| min_max.test | COMPILE | 0.105193 | 0.262785 | 0.307597 | — | — | — |
| multiset.test | COMPILE | 0.136802 | 0.341941 | 0.399822 | — | — | — |
| next.test | COMPILE | 0.104141 | 0.242187 | 0.299265 | — | — | — |
| no_has_xxx.test | COMPILE | 0.112123 | 0.255938 | 0.319968 | — | — | — |
| numeric_ops.test | COMPILE | 0.116488 | 0.295275 | 0.350828 | — | — | — |
| pair_view.test | COMPILE | 0.140433 | 0.333505 | 0.396857 | — | — | — |
| partition.test | COMPILE | 0.147927 | 0.371580 | 0.439855 | — | — | — |
| pop_front.test | COMPILE | 0.124963 | 0.304956 | 0.356980 | — | — | — |
| push_back.test | COMPILE | 0.103336 | 0.251184 | 0.304525 | — | — | — |
| push_front.test | COMPILE | 0.126232 | 0.306703 | 0.359532 | — | — | — |
| quote.test | COMPILE | 0.102083 | 0.244792 | 0.291116 | — | — | — |
| range_c.test | COMPILE | 0.130719 | 0.325004 | 0.379394 | — | — | — |
| remove.test | COMPILE | 0.139960 | 0.337888 | 0.387158 | — | — | — |
| remove_if.test | COMPILE | 0.142029 | 0.354772 | 0.416939 | — | — | — |
| replace.test | COMPILE | 0.151355 | 0.381634 | 0.432558 | — | — | — |
| replace_if.test | COMPILE | 0.152784 | 0.390862 | 0.447624 | — | — | — |
| reverse.test | COMPILE | 0.142474 | 0.359581 | 0.417400 | — | — | — |
| same_as.test | COMPILE | 0.111135 | 0.262595 | 0.315260 | — | — | — |
| set.test | COMPILE | 0.197054 | 0.501077 | 0.621104 | — | — | — |
| set_c.test | COMPILE | 0.143515 | 0.343614 | 0.414078 | — | — | — |
| single_view.test | COMPILE | 0.130253 | 0.330520 | 0.379862 | — | — | — |
| size.test | COMPILE | 0.122660 | 0.298700 | 0.354971 | — | — | — |
| size_t.test | RUN | 0.106021 | 0.275150 | 0.324095 | 0.001092 | 0.001252 | 0.001154 |
| sizeof.test | COMPILE | 0.099332 | 0.239194 | 0.284305 | — | — | — |
| sort.test | COMPILE | 0.162988 | 0.404513 | 0.467150 | — | — | — |
| stable_partition.test | COMPILE | 0.150033 | 0.371379 | 0.438471 | — | — | — |
| transform.test | COMPILE | 0.163126 | 0.405201 | 0.477280 | — | — | — |
| transform_view.test | COMPILE | 0.130824 | 0.322949 | 0.378759 | — | — | — |
| unique.test | COMPILE | 0.139840 | 0.344294 | 0.392896 | — | — | — |
| unpack_args.test | COMPILE | 0.124924 | 0.314353 | 0.367710 | — | — | — |
| upper_bound.test | COMPILE | 0.128479 | 0.319860 | 0.366378 | — | — | — |
| vector.test | COMPILE | 0.151172 | 0.384064 | 0.446150 | — | — | — |
| vector_c.test | COMPILE | 0.133660 | 0.320151 | 0.384467 | — | — | — |
| zip_view.test | COMPILE | 0.180157 | 0.472262 | 0.548973 | — | — | — |
| string.test | RUN | 0.325796 | 0.950208 | 0.840818 | 0.000984 | 0.000945 | 0.000914 |
| issue_69.test | RUN | 0.011424 | 0.034846 | 0.036237 | 0.000476 | 0.000509 | 0.001071 |
| issue_84.test | RUN | 0.025032 | 0.068773 | 0.068998 | 0.000391 | 0.000371 | 0.000817 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 1.003× | 1.009×, 0.998× | 1.016× |
| clang | 1.097× | 1.107×, 1.086× | 0.993× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1364 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44362912212).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| bool.test | 10 | 0.000803s | 0.000826s | 0.000812s | byte equality observed |
| char.test | 10 | 0.000805s | 0.000815s | 0.000821s | byte equality observed |
| char_unsigned.test | 10 | 0.000816s | 0.000817s | 0.000805s | byte equality observed |
| for_each.test | 10 | 0.000808s | 0.000838s | 0.000807s | byte equality observed |
| int.test | 10 | 0.000808s | 0.000805s | 0.000782s | byte equality observed |
| integral_c.test | 10 | 0.000805s | 0.000817s | 0.000807s | byte equality observed |
| integral_c_unsigned.test | 10 | 0.000813s | 0.000819s | 0.000806s | byte equality observed |
| issue_69.test | 10 | 0.000363s | 0.000362s | 0.000785s | byte equality observed |
| issue_84.test | 10 | 0.000353s | 0.000363s | 0.000772s | byte equality observed |
| size_t.test | 10 | 0.000798s | 0.000807s | 0.000774s | byte equality observed |
| string.test | 10 | 0.000810s | 0.000810s | 0.000821s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44362912212).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
