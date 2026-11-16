# libs/mpl/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| increased_arity.test | COMPILE | 0.306230 | 0.849760 | 0.807085 | — | — | — |
| largest_int.test | COMPILE | 0.101086 | 0.238321 | 0.272527 | — | — | — |
| msvc_is_class.test | COMPILE | 0.011353 | 0.029518 | 0.032728 | — | — | — |
| template_arity.test | COMPILE | 0.091583 | 0.240721 | 0.266813 | — | — | — |
| is_seq.test | COMPILE | 0.003744 | 0.010701 | 0.021455 | — | — | — |
| token_equal.test | COMPILE | 0.004051 | 0.010475 | 0.022131 | — | — | — |
| advance.test | COMPILE | 0.107839 | 0.275200 | 0.320308 | — | — | — |
| always.test | COMPILE | 0.108743 | 0.274485 | 0.316425 | — | — | — |
| apply.test | COMPILE | 0.114452 | 0.296245 | 0.340589 | — | — | — |
| apply_wrap.test | COMPILE | 0.099365 | 0.247568 | 0.293352 | — | — | — |
| arithmetic.test | COMPILE | 0.111139 | 0.281095 | 0.315376 | — | — | — |
| as_sequence.test | COMPILE | 0.120675 | 0.306918 | 0.344066 | — | — | — |
| assert.test | COMPILE | 0.025949 | 0.054692 | 0.063941 | — | — | — |
| at.test | COMPILE | 0.117407 | 0.300309 | 0.350433 | — | — | — |
| back.test | COMPILE | 0.111768 | 0.287573 | 0.337234 | — | — | — |
| bind.test | COMPILE | 0.108245 | 0.275732 | 0.320463 | — | — | — |
| bitwise.test | COMPILE | 0.110169 | 0.279393 | 0.326872 | — | — | — |
| bool.test | RUN | 0.100437 | 0.246896 | 0.292227 | 0.001174 | 0.001382 | 0.001305 |
| comparison.test | COMPILE | 0.109072 | 0.273370 | 0.327433 | — | — | — |
| contains.test | COMPILE | 0.126550 | 0.335953 | 0.387867 | — | — | — |
| copy.test | COMPILE | 0.155681 | 0.403915 | 0.466023 | — | — | — |
| copy_if.test | COMPILE | 0.140854 | 0.354572 | 0.423666 | — | — | — |
| count.test | COMPILE | 0.129042 | 0.333979 | 0.391319 | — | — | — |
| count_if.test | COMPILE | 0.142009 | 0.352343 | 0.412562 | — | — | — |
| deque.test | COMPILE | 0.132160 | 0.341075 | 0.392208 | — | — | — |
| distance.test | COMPILE | 0.123882 | 0.309630 | 0.363590 | — | — | — |
| empty.test | COMPILE | 0.106024 | 0.272256 | 0.314326 | — | — | — |
| equal.test | COMPILE | 0.126392 | 0.321787 | 0.370120 | — | — | — |
| erase.test | COMPILE | 0.144807 | 0.370630 | 0.432251 | — | — | — |
| erase_range.test | COMPILE | 0.137583 | 0.352396 | 0.410156 | — | — | — |
| eval_if.test | COMPILE | 0.099655 | 0.256811 | 0.298667 | — | — | — |
| filter_view.test | COMPILE | 0.138267 | 0.356042 | 0.407636 | — | — | — |
| find.test | COMPILE | 0.130023 | 0.334432 | 0.393791 | — | — | — |
| find_if.test | COMPILE | 0.139135 | 0.354779 | 0.406800 | — | — | — |
| fold.test | COMPILE | 0.144461 | 0.361597 | 0.432984 | — | — | — |
| for_each.test | RUN | 0.209200 | 0.538957 | 0.672617 | 0.001129 | 0.001335 | 0.001144 |
| front.test | COMPILE | 0.114233 | 0.285777 | 0.332337 | — | — | — |
| get_tag_def.test | COMPILE | 0.099869 | 0.250213 | 0.294684 | — | — | — |
| has_xxx.test | COMPILE | 0.106323 | 0.270371 | 0.333464 | — | — | — |
| identity.test | COMPILE | 0.115845 | 0.280537 | 0.331982 | — | — | — |
| if.test | COMPILE | 0.097515 | 0.247940 | 0.297827 | — | — | — |
| index_of.test | COMPILE | 0.129232 | 0.323449 | 0.372304 | — | — | — |
| inherit.test | COMPILE | 0.102502 | 0.259741 | 0.307980 | — | — | — |
| insert.test | COMPILE | 0.152364 | 0.381365 | 0.443504 | — | — | — |
| insert_range.test | COMPILE | 0.199427 | 0.510981 | 0.625028 | — | — | — |
| int.test | RUN | 0.107060 | 0.278064 | 0.331395 | 0.001103 | 0.001285 | 0.001271 |
| char.test | RUN | 0.104888 | 0.276763 | 0.329167 | 0.001255 | 0.001280 | 0.001062 |
| char_unsigned.test | RUN | 0.108842 | 0.275116 | 0.321433 | 0.001132 | 0.001454 | 0.001324 |
| integral_c.test | RUN | 0.117636 | 0.355796 | 0.394301 | 0.001228 | 0.001455 | 0.001123 |
| integral_c_unsigned.test | RUN | 0.122110 | 0.355025 | 0.401847 | 0.001148 | 0.001454 | 0.001134 |
| is_placeholder.test | COMPILE | 0.102720 | 0.247161 | 0.298733 | — | — | — |
| is_sequence.test | COMPILE | 0.122013 | 0.305728 | 0.355666 | — | — | — |
| iterator_tags.test | COMPILE | 0.102578 | 0.256561 | 0.295383 | — | — | — |
| joint_view.test | COMPILE | 0.139258 | 0.349076 | 0.402387 | — | — | — |
| lambda.test | COMPILE | 0.128339 | 0.321347 | 0.379230 | — | — | — |
| lambda_args.test | COMPILE | 0.120309 | 0.304041 | 0.379789 | — | — | — |
| list.test | COMPILE | 0.126211 | 0.312137 | 0.363305 | — | — | — |
| list_c.test | COMPILE | 0.124840 | 0.309721 | 0.371247 | — | — | — |
| logical.test | COMPILE | 0.101464 | 0.249090 | 0.296953 | — | — | — |
| lower_bound.test | COMPILE | 0.129239 | 0.328153 | 0.380729 | — | — | — |
| map.test | COMPILE | 0.154776 | 0.405632 | 0.476435 | — | — | — |
| max_element.test | COMPILE | 0.126000 | 0.304437 | 0.357115 | — | — | — |
| min_max.test | COMPILE | 0.104431 | 0.271009 | 0.308906 | — | — | — |
| multiset.test | COMPILE | 0.135119 | 0.350866 | 0.399803 | — | — | — |
| next.test | COMPILE | 0.096539 | 0.247158 | 0.296688 | — | — | — |
| no_has_xxx.test | COMPILE | 0.108706 | 0.262267 | 0.328477 | — | — | — |
| numeric_ops.test | COMPILE | 0.117032 | 0.306542 | 0.344870 | — | — | — |
| pair_view.test | COMPILE | 0.138212 | 0.345265 | 0.403472 | — | — | — |
| partition.test | COMPILE | 0.149944 | 0.380168 | 0.443009 | — | — | — |
| pop_front.test | COMPILE | 0.122123 | 0.307452 | 0.364041 | — | — | — |
| push_back.test | COMPILE | 0.102444 | 0.261732 | 0.300918 | — | — | — |
| push_front.test | COMPILE | 0.122568 | 0.311530 | 0.362103 | — | — | — |
| quote.test | COMPILE | 0.101203 | 0.247724 | 0.292395 | — | — | — |
| range_c.test | COMPILE | 0.128150 | 0.329824 | 0.379959 | — | — | — |
| remove.test | COMPILE | 0.134720 | 0.347966 | 0.392429 | — | — | — |
| remove_if.test | COMPILE | 0.136948 | 0.357105 | 0.412624 | — | — | — |
| replace.test | COMPILE | 0.150038 | 0.386580 | 0.447417 | — | — | — |
| replace_if.test | COMPILE | 0.150413 | 0.395897 | 0.455607 | — | — | — |
| reverse.test | COMPILE | 0.141244 | 0.371290 | 0.422625 | — | — | — |
| same_as.test | COMPILE | 0.105067 | 0.270905 | 0.318349 | — | — | — |
| set.test | COMPILE | 0.193309 | 0.518403 | 0.624912 | — | — | — |
| set_c.test | COMPILE | 0.139791 | 0.347410 | 0.424529 | — | — | — |
| single_view.test | COMPILE | 0.125292 | 0.332065 | 0.375063 | — | — | — |
| size.test | COMPILE | 0.121510 | 0.303882 | 0.351785 | — | — | — |
| size_t.test | RUN | 0.109779 | 0.277250 | 0.322382 | 0.001217 | 0.001296 | 0.001137 |
| sizeof.test | COMPILE | 0.098928 | 0.241968 | 0.287688 | — | — | — |
| sort.test | COMPILE | 0.157301 | 0.397755 | 0.472973 | — | — | — |
| stable_partition.test | COMPILE | 0.149997 | 0.387424 | 0.436188 | — | — | — |
| transform.test | COMPILE | 0.162037 | 0.405647 | 0.481617 | — | — | — |
| transform_view.test | COMPILE | 0.130345 | 0.325924 | 0.379320 | — | — | — |
| unique.test | COMPILE | 0.136079 | 0.347116 | 0.402971 | — | — | — |
| unpack_args.test | COMPILE | 0.124035 | 0.318723 | 0.362463 | — | — | — |
| upper_bound.test | COMPILE | 0.129206 | 0.321963 | 0.372391 | — | — | — |
| vector.test | COMPILE | 0.150124 | 0.384960 | 0.447755 | — | — | — |
| vector_c.test | COMPILE | 0.131026 | 0.320450 | 0.391713 | — | — | — |
| zip_view.test | COMPILE | 0.183844 | 0.479689 | 0.561442 | — | — | — |
| string.test | RUN | 0.309302 | 0.957550 | 0.854813 | 0.000900 | 0.000926 | 0.000894 |
| issue_69.test | RUN | 0.012610 | 0.037919 | 0.037609 | 0.000402 | 0.000505 | 0.000868 |
| issue_84.test | RUN | 0.029767 | 0.070760 | 0.071145 | 0.000369 | 0.000385 | 0.000860 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.998× | 1.001×, 0.994× | 1.004× |
| clang | 1.085× | 1.088×, 1.082× | 1.002× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1364 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/43967972441).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| bool.test | 10 | 0.000789s | 0.000790s | 0.000821s | byte equality observed |
| char.test | 10 | 0.000817s | 0.000794s | 0.000822s | byte equality observed |
| char_unsigned.test | 10 | 0.000814s | 0.000803s | 0.000784s | byte equality observed |
| for_each.test | 10 | 0.000831s | 0.000866s | 0.000807s | byte equality observed |
| int.test | 10 | 0.000843s | 0.000820s | 0.000827s | byte equality observed |
| integral_c.test | 10 | 0.000811s | 0.000804s | 0.000786s | byte equality observed |
| integral_c_unsigned.test | 10 | 0.000808s | 0.000824s | 0.000796s | byte equality observed |
| issue_69.test | 10 | 0.000355s | 0.000358s | 0.000801s | byte equality observed |
| issue_84.test | 10 | 0.000370s | 0.000357s | 0.000753s | byte equality observed |
| size_t.test | 10 | 0.000807s | 0.000786s | 0.000784s | byte equality observed |
| string.test | 10 | 0.000817s | 0.000824s | 0.000780s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/43967972441).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
