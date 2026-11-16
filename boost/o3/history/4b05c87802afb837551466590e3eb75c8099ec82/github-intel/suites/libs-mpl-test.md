# libs/mpl/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| increased_arity.test | COMPILE | 0.309318 | 0.857722 | 0.811766 | — | — | — |
| largest_int.test | COMPILE | 0.104655 | 0.240808 | 0.304516 | — | — | — |
| msvc_is_class.test | COMPILE | 0.011361 | 0.030400 | 0.034759 | — | — | — |
| template_arity.test | COMPILE | 0.103253 | 0.238796 | 0.301842 | — | — | — |
| is_seq.test | COMPILE | 0.003845 | 0.010951 | 0.021954 | — | — | — |
| token_equal.test | COMPILE | 0.004392 | 0.011074 | 0.022444 | — | — | — |
| advance.test | COMPILE | 0.110098 | 0.274655 | 0.321923 | — | — | — |
| always.test | COMPILE | 0.112696 | 0.271724 | 0.339736 | — | — | — |
| apply.test | COMPILE | 0.114944 | 0.296795 | 0.355815 | — | — | — |
| apply_wrap.test | COMPILE | 0.103423 | 0.249420 | 0.298067 | — | — | — |
| arithmetic.test | COMPILE | 0.114926 | 0.283109 | 0.339120 | — | — | — |
| as_sequence.test | COMPILE | 0.119524 | 0.307008 | 0.360969 | — | — | — |
| assert.test | COMPILE | 0.027718 | 0.057165 | 0.066743 | — | — | — |
| at.test | COMPILE | 0.121437 | 0.298292 | 0.359700 | — | — | — |
| back.test | COMPILE | 0.116021 | 0.290635 | 0.339500 | — | — | — |
| bind.test | COMPILE | 0.111845 | 0.268181 | 0.330770 | — | — | — |
| bitwise.test | COMPILE | 0.112626 | 0.274073 | 0.342403 | — | — | — |
| bool.test | RUN | 0.102155 | 0.250180 | 0.306993 | 0.001126 | 0.001235 | 0.001241 |
| comparison.test | COMPILE | 0.111403 | 0.285056 | 0.332051 | — | — | — |
| contains.test | COMPILE | 0.137450 | 0.338694 | 0.395894 | — | — | — |
| copy.test | COMPILE | 0.171120 | 0.404547 | 0.486970 | — | — | — |
| copy_if.test | COMPILE | 0.144751 | 0.355209 | 0.430230 | — | — | — |
| count.test | COMPILE | 0.138086 | 0.327934 | 0.408906 | — | — | — |
| count_if.test | COMPILE | 0.144702 | 0.350005 | 0.422305 | — | — | — |
| deque.test | COMPILE | 0.137038 | 0.337739 | 0.409519 | — | — | — |
| distance.test | COMPILE | 0.130336 | 0.312936 | 0.373400 | — | — | — |
| empty.test | COMPILE | 0.110359 | 0.277471 | 0.330868 | — | — | — |
| equal.test | COMPILE | 0.130545 | 0.319753 | 0.381557 | — | — | — |
| erase.test | COMPILE | 0.149999 | 0.372873 | 0.446754 | — | — | — |
| erase_range.test | COMPILE | 0.145058 | 0.356144 | 0.423149 | — | — | — |
| eval_if.test | COMPILE | 0.104541 | 0.255645 | 0.307239 | — | — | — |
| filter_view.test | COMPILE | 0.138180 | 0.350463 | 0.414112 | — | — | — |
| find.test | COMPILE | 0.137102 | 0.341236 | 0.404414 | — | — | — |
| find_if.test | COMPILE | 0.143476 | 0.348657 | 0.411618 | — | — | — |
| fold.test | COMPILE | 0.149191 | 0.362913 | 0.440848 | — | — | — |
| for_each.test | RUN | 0.219635 | 0.521204 | 0.676327 | 0.001325 | 0.001401 | 0.001257 |
| front.test | COMPILE | 0.114826 | 0.287623 | 0.342508 | — | — | — |
| get_tag_def.test | COMPILE | 0.105409 | 0.242774 | 0.295902 | — | — | — |
| has_xxx.test | COMPILE | 0.114676 | 0.265343 | 0.333825 | — | — | — |
| identity.test | COMPILE | 0.111568 | 0.280530 | 0.337419 | — | — | — |
| if.test | COMPILE | 0.104297 | 0.239430 | 0.294962 | — | — | — |
| index_of.test | COMPILE | 0.125790 | 0.317482 | 0.384412 | — | — | — |
| inherit.test | COMPILE | 0.106099 | 0.247851 | 0.310176 | — | — | — |
| insert.test | COMPILE | 0.152286 | 0.374817 | 0.459129 | — | — | — |
| insert_range.test | COMPILE | 0.212012 | 0.504828 | 0.652713 | — | — | — |
| int.test | RUN | 0.109548 | 0.277055 | 0.336831 | 0.001440 | 0.001260 | 0.001381 |
| char.test | RUN | 0.108290 | 0.270117 | 0.332867 | 0.001201 | 0.001280 | 0.001253 |
| char_unsigned.test | RUN | 0.110484 | 0.270854 | 0.325430 | 0.001185 | 0.001288 | 0.001271 |
| integral_c.test | RUN | 0.123869 | 0.356271 | 0.399027 | 0.001314 | 0.001314 | 0.001239 |
| integral_c_unsigned.test | RUN | 0.125237 | 0.351673 | 0.411517 | 0.001199 | 0.001020 | 0.001198 |
| is_placeholder.test | COMPILE | 0.104163 | 0.246699 | 0.306433 | — | — | — |
| is_sequence.test | COMPILE | 0.128989 | 0.303074 | 0.358541 | — | — | — |
| iterator_tags.test | COMPILE | 0.107804 | 0.257952 | 0.311299 | — | — | — |
| joint_view.test | COMPILE | 0.139233 | 0.338345 | 0.413588 | — | — | — |
| lambda.test | COMPILE | 0.131539 | 0.310975 | 0.383463 | — | — | — |
| lambda_args.test | COMPILE | 0.124821 | 0.296863 | 0.389854 | — | — | — |
| list.test | COMPILE | 0.126783 | 0.314471 | 0.375733 | — | — | — |
| list_c.test | COMPILE | 0.129248 | 0.305574 | 0.383698 | — | — | — |
| logical.test | COMPILE | 0.101729 | 0.246811 | 0.301244 | — | — | — |
| lower_bound.test | COMPILE | 0.131638 | 0.322200 | 0.387005 | — | — | — |
| map.test | COMPILE | 0.161886 | 0.398314 | 0.491144 | — | — | — |
| max_element.test | COMPILE | 0.126300 | 0.304932 | 0.364202 | — | — | — |
| min_max.test | COMPILE | 0.107874 | 0.256111 | 0.320080 | — | — | — |
| multiset.test | COMPILE | 0.139116 | 0.339921 | 0.404375 | — | — | — |
| next.test | COMPILE | 0.102407 | 0.243718 | 0.309348 | — | — | — |
| no_has_xxx.test | COMPILE | 0.114020 | 0.255932 | 0.338838 | — | — | — |
| numeric_ops.test | COMPILE | 0.120690 | 0.297791 | 0.353077 | — | — | — |
| pair_view.test | COMPILE | 0.144413 | 0.337280 | 0.411028 | — | — | — |
| partition.test | COMPILE | 0.151927 | 0.372572 | 0.455106 | — | — | — |
| pop_front.test | COMPILE | 0.127013 | 0.300578 | 0.368707 | — | — | — |
| push_back.test | COMPILE | 0.108064 | 0.255031 | 0.308391 | — | — | — |
| push_front.test | COMPILE | 0.126170 | 0.302568 | 0.371829 | — | — | — |
| quote.test | COMPILE | 0.104459 | 0.245963 | 0.303019 | — | — | — |
| range_c.test | COMPILE | 0.130590 | 0.326039 | 0.387244 | — | — | — |
| remove.test | COMPILE | 0.139544 | 0.337363 | 0.401140 | — | — | — |
| remove_if.test | COMPILE | 0.141705 | 0.349881 | 0.427086 | — | — | — |
| replace.test | COMPILE | 0.155808 | 0.383143 | 0.454219 | — | — | — |
| replace_if.test | COMPILE | 0.155027 | 0.393301 | 0.463870 | — | — | — |
| reverse.test | COMPILE | 0.148904 | 0.356748 | 0.431267 | — | — | — |
| same_as.test | COMPILE | 0.099351 | 0.265039 | 0.315893 | — | — | — |
| set.test | COMPILE | 0.192182 | 0.503377 | 0.632330 | — | — | — |
| set_c.test | COMPILE | 0.140207 | 0.353912 | 0.416192 | — | — | — |
| single_view.test | COMPILE | 0.134480 | 0.317619 | 0.378484 | — | — | — |
| size.test | COMPILE | 0.124276 | 0.299263 | 0.357444 | — | — | — |
| size_t.test | RUN | 0.109751 | 0.273053 | 0.332329 | 0.001263 | 0.001254 | 0.001160 |
| sizeof.test | COMPILE | 0.101854 | 0.238125 | 0.298704 | — | — | — |
| sort.test | COMPILE | 0.162891 | 0.394042 | 0.472071 | — | — | — |
| stable_partition.test | COMPILE | 0.155445 | 0.379004 | 0.443347 | — | — | — |
| transform.test | COMPILE | 0.167519 | 0.405874 | 0.486293 | — | — | — |
| transform_view.test | COMPILE | 0.132926 | 0.318793 | 0.384601 | — | — | — |
| unique.test | COMPILE | 0.142908 | 0.338819 | 0.401594 | — | — | — |
| unpack_args.test | COMPILE | 0.131851 | 0.312664 | 0.373762 | — | — | — |
| upper_bound.test | COMPILE | 0.135097 | 0.315185 | 0.381979 | — | — | — |
| vector.test | COMPILE | 0.155046 | 0.377607 | 0.449124 | — | — | — |
| vector_c.test | COMPILE | 0.133247 | 0.311409 | 0.379714 | — | — | — |
| zip_view.test | COMPILE | 0.192555 | 0.484649 | 0.549332 | — | — | — |
| string.test | RUN | 0.314437 | 0.935957 | 0.836767 | 0.001001 | 0.001142 | 0.000866 |
| issue_69.test | RUN | 0.012868 | 0.035453 | 0.036789 | 0.000503 | 0.000503 | 0.001035 |
| issue_84.test | RUN | 0.030461 | 0.071918 | 0.070186 | 0.000379 | 0.000360 | 0.000813 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 1.004× | 0.991×, 1.017× | 0.989× |
| clang | 1.117× | 1.110×, 1.123× | 1.016× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1362 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/43822097733).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| bool.test | 10 | 0.000813s | 0.000841s | 0.000824s | byte equality observed |
| char.test | 10 | 0.000830s | 0.000818s | 0.000802s | byte equality observed |
| char_unsigned.test | 10 | 0.000782s | 0.000821s | 0.000799s | byte equality observed |
| for_each.test | 10 | 0.000826s | 0.000826s | 0.000844s | byte equality observed |
| int.test | 10 | 0.000823s | 0.000843s | 0.000847s | byte equality observed |
| integral_c.test | 10 | 0.000806s | 0.000820s | 0.000853s | byte equality observed |
| integral_c_unsigned.test | 10 | 0.000821s | 0.000810s | 0.000780s | byte equality observed |
| issue_69.test | 10 | 0.000360s | 0.000364s | 0.000821s | byte equality observed |
| issue_84.test | 10 | 0.000364s | 0.000361s | 0.000805s | byte equality observed |
| size_t.test | 10 | 0.000817s | 0.000781s | 0.000812s | byte equality observed |
| string.test | 10 | 0.000833s | 0.000842s | 0.000831s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/43822097733).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
