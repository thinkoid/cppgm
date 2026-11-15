# libs/mpl/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| increased_arity.test | COMPILE | 0.303841 | 0.842488 | 0.793371 | — | — | — |
| largest_int.test | COMPILE | 0.098866 | 0.234304 | 0.289819 | — | — | — |
| msvc_is_class.test | COMPILE | 0.011071 | 0.027914 | 0.029884 | — | — | — |
| template_arity.test | COMPILE | 0.098626 | 0.229628 | 0.287692 | — | — | — |
| is_seq.test | COMPILE | 0.003300 | 0.009385 | 0.016814 | — | — | — |
| token_equal.test | COMPILE | 0.003465 | 0.010235 | 0.015974 | — | — | — |
| advance.test | COMPILE | 0.101426 | 0.265130 | 0.298149 | — | — | — |
| always.test | COMPILE | 0.104970 | 0.258483 | 0.318456 | — | — | — |
| apply.test | COMPILE | 0.113434 | 0.282222 | 0.336081 | — | — | — |
| apply_wrap.test | COMPILE | 0.094517 | 0.237043 | 0.287140 | — | — | — |
| arithmetic.test | COMPILE | 0.104135 | 0.267586 | 0.316735 | — | — | — |
| as_sequence.test | COMPILE | 0.113140 | 0.292274 | 0.340871 | — | — | — |
| assert.test | COMPILE | 0.025427 | 0.053296 | 0.057721 | — | — | — |
| at.test | COMPILE | 0.109674 | 0.286190 | 0.339698 | — | — | — |
| back.test | COMPILE | 0.105736 | 0.274985 | 0.324013 | — | — | — |
| bind.test | COMPILE | 0.105255 | 0.264254 | 0.307275 | — | — | — |
| bitwise.test | COMPILE | 0.104958 | 0.269324 | 0.321312 | — | — | — |
| bool.test | RUN | 0.092589 | 0.234409 | 0.288588 | 0.001001 | 0.001185 | 0.001044 |
| comparison.test | COMPILE | 0.104059 | 0.264276 | 0.320760 | — | — | — |
| contains.test | COMPILE | 0.123700 | 0.326156 | 0.375222 | — | — | — |
| copy.test | COMPILE | 0.151823 | 0.387527 | 0.462532 | — | — | — |
| copy_if.test | COMPILE | 0.136183 | 0.345273 | 0.405263 | — | — | — |
| count.test | COMPILE | 0.127031 | 0.322774 | 0.395302 | — | — | — |
| count_if.test | COMPILE | 0.134664 | 0.339098 | 0.396411 | — | — | — |
| deque.test | COMPILE | 0.128420 | 0.327593 | 0.384330 | — | — | — |
| distance.test | COMPILE | 0.118718 | 0.297597 | 0.353468 | — | — | — |
| empty.test | COMPILE | 0.101905 | 0.264358 | 0.319933 | — | — | — |
| equal.test | COMPILE | 0.122623 | 0.310576 | 0.352820 | — | — | — |
| erase.test | COMPILE | 0.137630 | 0.356466 | 0.416873 | — | — | — |
| erase_range.test | COMPILE | 0.134490 | 0.345872 | 0.400218 | — | — | — |
| eval_if.test | COMPILE | 0.096187 | 0.237363 | 0.297781 | — | — | — |
| filter_view.test | COMPILE | 0.129610 | 0.339478 | 0.389611 | — | — | — |
| find.test | COMPILE | 0.125882 | 0.326322 | 0.380858 | — | — | — |
| find_if.test | COMPILE | 0.130868 | 0.333789 | 0.397510 | — | — | — |
| fold.test | COMPILE | 0.136942 | 0.348235 | 0.417866 | — | — | — |
| for_each.test | RUN | 0.201334 | 0.511943 | 0.641590 | 0.000979 | 0.001202 | 0.001035 |
| front.test | COMPILE | 0.107602 | 0.278747 | 0.328002 | — | — | — |
| get_tag_def.test | COMPILE | 0.095322 | 0.240911 | 0.282684 | — | — | — |
| has_xxx.test | COMPILE | 0.103097 | 0.251335 | 0.318678 | — | — | — |
| identity.test | COMPILE | 0.106540 | 0.270622 | 0.311984 | — | — | — |
| if.test | COMPILE | 0.092354 | 0.239348 | 0.282920 | — | — | — |
| index_of.test | COMPILE | 0.121334 | 0.308025 | 0.362663 | — | — | — |
| inherit.test | COMPILE | 0.094679 | 0.243626 | 0.286438 | — | — | — |
| insert.test | COMPILE | 0.143016 | 0.372780 | 0.434662 | — | — | — |
| insert_range.test | COMPILE | 0.189623 | 0.504717 | 0.619581 | — | — | — |
| int.test | RUN | 0.099521 | 0.268244 | 0.318197 | 0.001016 | 0.001247 | 0.000956 |
| char.test | RUN | 0.098568 | 0.270752 | 0.312468 | 0.001081 | 0.001251 | 0.001048 |
| char_unsigned.test | RUN | 0.105763 | 0.268474 | 0.311043 | 0.001000 | 0.001220 | 0.001023 |
| integral_c.test | RUN | 0.115076 | 0.347369 | 0.398753 | 0.001031 | 0.001232 | 0.001014 |
| integral_c_unsigned.test | RUN | 0.118150 | 0.343207 | 0.403069 | 0.000968 | 0.001103 | 0.000959 |
| is_placeholder.test | COMPILE | 0.092655 | 0.241163 | 0.281519 | — | — | — |
| is_sequence.test | COMPILE | 0.114037 | 0.291888 | 0.347188 | — | — | — |
| iterator_tags.test | COMPILE | 0.097970 | 0.247411 | 0.297045 | — | — | — |
| joint_view.test | COMPILE | 0.129290 | 0.331011 | 0.394198 | — | — | — |
| lambda.test | COMPILE | 0.118550 | 0.313749 | 0.371500 | — | — | — |
| lambda_args.test | COMPILE | 0.114762 | 0.291607 | 0.365081 | — | — | — |
| list.test | COMPILE | 0.120570 | 0.308038 | 0.361034 | — | — | — |
| list_c.test | COMPILE | 0.119357 | 0.298309 | 0.380764 | — | — | — |
| logical.test | COMPILE | 0.096142 | 0.241069 | 0.295887 | — | — | — |
| lower_bound.test | COMPILE | 0.117363 | 0.311940 | 0.359476 | — | — | — |
| map.test | COMPILE | 0.145219 | 0.394872 | 0.457815 | — | — | — |
| max_element.test | COMPILE | 0.115998 | 0.291058 | 0.352807 | — | — | — |
| min_max.test | COMPILE | 0.100935 | 0.257820 | 0.307950 | — | — | — |
| multiset.test | COMPILE | 0.132563 | 0.333699 | 0.383697 | — | — | — |
| next.test | COMPILE | 0.092937 | 0.238688 | 0.290141 | — | — | — |
| no_has_xxx.test | COMPILE | 0.098990 | 0.251847 | 0.315909 | — | — | — |
| numeric_ops.test | COMPILE | 0.117091 | 0.296368 | 0.351372 | — | — | — |
| pair_view.test | COMPILE | 0.130858 | 0.330407 | 0.390192 | — | — | — |
| partition.test | COMPILE | 0.143394 | 0.369382 | 0.429764 | — | — | — |
| pop_front.test | COMPILE | 0.117013 | 0.300567 | 0.350382 | — | — | — |
| push_back.test | COMPILE | 0.099640 | 0.257317 | 0.301798 | — | — | — |
| push_front.test | COMPILE | 0.114546 | 0.302343 | 0.361815 | — | — | — |
| quote.test | COMPILE | 0.094287 | 0.244324 | 0.296383 | — | — | — |
| range_c.test | COMPILE | 0.123466 | 0.322397 | 0.371575 | — | — | — |
| remove.test | COMPILE | 0.130149 | 0.334173 | 0.391034 | — | — | — |
| remove_if.test | COMPILE | 0.133333 | 0.346925 | 0.405168 | — | — | — |
| replace.test | COMPILE | 0.143169 | 0.384088 | 0.436311 | — | — | — |
| replace_if.test | COMPILE | 0.146290 | 0.385507 | 0.441692 | — | — | — |
| reverse.test | COMPILE | 0.137564 | 0.354397 | 0.419749 | — | — | — |
| same_as.test | COMPILE | 0.101801 | 0.254303 | 0.304814 | — | — | — |
| set.test | COMPILE | 0.185224 | 0.505216 | 0.615166 | — | — | — |
| set_c.test | COMPILE | 0.136058 | 0.342400 | 0.411701 | — | — | — |
| single_view.test | COMPILE | 0.120924 | 0.319954 | 0.368101 | — | — | — |
| size.test | COMPILE | 0.116341 | 0.293501 | 0.344200 | — | — | — |
| size_t.test | RUN | 0.100280 | 0.275243 | 0.332664 | 0.001002 | 0.001177 | 0.001041 |
| sizeof.test | COMPILE | 0.092732 | 0.239720 | 0.294350 | — | — | — |
| sort.test | COMPILE | 0.152471 | 0.394311 | 0.463821 | — | — | — |
| stable_partition.test | COMPILE | 0.148154 | 0.372141 | 0.430785 | — | — | — |
| transform.test | COMPILE | 0.151893 | 0.401224 | 0.469052 | — | — | — |
| transform_view.test | COMPILE | 0.128039 | 0.321953 | 0.377511 | — | — | — |
| unique.test | COMPILE | 0.129926 | 0.327481 | 0.388984 | — | — | — |
| unpack_args.test | COMPILE | 0.121976 | 0.304837 | 0.363359 | — | — | — |
| upper_bound.test | COMPILE | 0.120849 | 0.315584 | 0.366390 | — | — | — |
| vector.test | COMPILE | 0.140112 | 0.381780 | 0.447446 | — | — | — |
| vector_c.test | COMPILE | 0.124320 | 0.308345 | 0.369522 | — | — | — |
| zip_view.test | COMPILE | 0.178982 | 0.473431 | 0.545562 | — | — | — |
| string.test | RUN | 0.297946 | 0.925107 | 0.826135 | 0.000781 | 0.000889 | 0.000735 |
| issue_69.test | RUN | 0.011242 | 0.034095 | 0.033799 | 0.000458 | 0.000459 | 0.000902 |
| issue_84.test | RUN | 0.022638 | 0.069451 | 0.065286 | 0.000361 | 0.000380 | 0.000743 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.999× | 1.010×, 0.988× | 0.992× |
| clang | 1.111× | 1.103×, 1.120× | 1.003× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1362 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43670794197).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| bool.test | 10 | 0.000816s | 0.000823s | 0.000830s | byte equality observed |
| char.test | 10 | 0.000821s | 0.000798s | 0.000837s | byte equality observed |
| char_unsigned.test | 10 | 0.000806s | 0.000826s | 0.000790s | byte equality observed |
| for_each.test | 10 | 0.000807s | 0.000858s | 0.000793s | byte equality observed |
| int.test | 10 | 0.000803s | 0.000804s | 0.000796s | byte equality observed |
| integral_c.test | 10 | 0.000829s | 0.000800s | 0.000824s | byte equality observed |
| integral_c_unsigned.test | 10 | 0.000818s | 0.000803s | 0.000823s | byte equality observed |
| issue_69.test | 10 | 0.000364s | 0.000365s | 0.000793s | byte equality observed |
| issue_84.test | 10 | 0.000352s | 0.000366s | 0.000793s | byte equality observed |
| size_t.test | 10 | 0.000792s | 0.000790s | 0.000794s | byte equality observed |
| string.test | 10 | 0.000790s | 0.000810s | 0.000802s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43670794197).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
