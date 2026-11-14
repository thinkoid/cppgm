# libs/mpl/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| increased_arity.test | COMPILE | 0.370597 | 1.019391 | 1.006688 | — | — | — |
| largest_int.test | COMPILE | 0.128555 | 0.282515 | 0.395981 | — | — | — |
| msvc_is_class.test | COMPILE | 0.015422 | 0.038361 | 0.043149 | — | — | — |
| template_arity.test | COMPILE | 0.126674 | 0.286446 | 0.396578 | — | — | — |
| is_seq.test | COMPILE | 0.005238 | 0.014609 | 0.026197 | — | — | — |
| token_equal.test | COMPILE | 0.005433 | 0.015350 | 0.026809 | — | — | — |
| advance.test | COMPILE | 0.141566 | 0.325686 | 0.405951 | — | — | — |
| always.test | COMPILE | 0.140769 | 0.331933 | 0.427249 | — | — | — |
| apply.test | COMPILE | 0.152166 | 0.329886 | 0.464624 | — | — | — |
| apply_wrap.test | COMPILE | 0.130552 | 0.298194 | 0.368104 | — | — | — |
| arithmetic.test | COMPILE | 0.141379 | 0.331099 | 0.430318 | — | — | — |
| as_sequence.test | COMPILE | 0.154437 | 0.358755 | 0.469090 | — | — | — |
| assert.test | COMPILE | 0.036624 | 0.071062 | 0.087298 | — | — | — |
| at.test | COMPILE | 0.154897 | 0.353954 | 0.429036 | — | — | — |
| back.test | COMPILE | 0.146288 | 0.335846 | 0.436192 | — | — | — |
| bind.test | COMPILE | 0.143530 | 0.332847 | 0.436489 | — | — | — |
| bitwise.test | COMPILE | 0.147669 | 0.336448 | 0.430579 | — | — | — |
| bool.test | RUN | 0.130813 | 0.291599 | 0.380702 | 0.001539 | 0.001884 | 0.001728 |
| comparison.test | COMPILE | 0.139978 | 0.318645 | 0.430564 | — | — | — |
| contains.test | COMPILE | 0.169920 | 0.398384 | 0.520112 | — | — | — |
| copy.test | COMPILE | 0.212020 | 0.472182 | 0.612171 | — | — | — |
| copy_if.test | COMPILE | 0.197733 | 0.423028 | 0.548986 | — | — | — |
| count.test | COMPILE | 0.189567 | 0.380592 | 0.530284 | — | — | — |
| count_if.test | COMPILE | 0.193452 | 0.413646 | 0.528738 | — | — | — |
| deque.test | COMPILE | 0.179619 | 0.407511 | 0.513163 | — | — | — |
| distance.test | COMPILE | 0.166695 | 0.364856 | 0.477288 | — | — | — |
| empty.test | COMPILE | 0.143763 | 0.321149 | 0.430335 | — | — | — |
| equal.test | COMPILE | 0.166250 | 0.361074 | 0.466392 | — | — | — |
| erase.test | COMPILE | 0.191106 | 0.429481 | 0.557650 | — | — | — |
| erase_range.test | COMPILE | 0.179910 | 0.413992 | 0.534318 | — | — | — |
| eval_if.test | COMPILE | 0.136584 | 0.289076 | 0.399071 | — | — | — |
| filter_view.test | COMPILE | 0.179801 | 0.412556 | 0.525106 | — | — | — |
| find.test | COMPILE | 0.173161 | 0.390911 | 0.506837 | — | — | — |
| find_if.test | COMPILE | 0.179474 | 0.400792 | 0.528672 | — | — | — |
| fold.test | COMPILE | 0.192446 | 0.421818 | 0.559144 | — | — | — |
| for_each.test | RUN | 0.270540 | 0.617041 | 0.855482 | 0.001571 | 0.001720 | 0.001768 |
| front.test | COMPILE | 0.148595 | 0.333850 | 0.429668 | — | — | — |
| get_tag_def.test | COMPILE | 0.129605 | 0.297517 | 0.399350 | — | — | — |
| has_xxx.test | COMPILE | 0.143196 | 0.310699 | 0.428730 | — | — | — |
| identity.test | COMPILE | 0.148146 | 0.328781 | 0.421819 | — | — | — |
| if.test | COMPILE | 0.132680 | 0.279676 | 0.367407 | — | — | — |
| index_of.test | COMPILE | 0.168090 | 0.367216 | 0.499307 | — | — | — |
| inherit.test | COMPILE | 0.135664 | 0.302872 | 0.400110 | — | — | — |
| insert.test | COMPILE | 0.196657 | 0.449026 | 0.580519 | — | — | — |
| insert_range.test | COMPILE | 0.265395 | 0.612150 | 0.852043 | — | — | — |
| int.test | RUN | 0.138651 | 0.331533 | 0.422840 | 0.001736 | 0.001484 | 0.001456 |
| char.test | RUN | 0.139197 | 0.335174 | 0.420235 | 0.001663 | 0.001672 | 0.001532 |
| char_unsigned.test | RUN | 0.140602 | 0.325437 | 0.425067 | 0.001732 | 0.001858 | 0.001844 |
| integral_c.test | RUN | 0.158105 | 0.413924 | 0.521266 | 0.001619 | 0.001747 | 0.001708 |
| integral_c_unsigned.test | RUN | 0.158128 | 0.408930 | 0.496208 | 0.001596 | 0.001904 | 0.001475 |
| is_placeholder.test | COMPILE | 0.133876 | 0.296346 | 0.399252 | — | — | — |
| is_sequence.test | COMPILE | 0.163726 | 0.353218 | 0.469620 | — | — | — |
| iterator_tags.test | COMPILE | 0.137816 | 0.300444 | 0.401781 | — | — | — |
| joint_view.test | COMPILE | 0.182790 | 0.395719 | 0.533673 | — | — | — |
| lambda.test | COMPILE | 0.167224 | 0.375488 | 0.502982 | — | — | — |
| lambda_args.test | COMPILE | 0.158139 | 0.356975 | 0.478090 | — | — | — |
| list.test | COMPILE | 0.165151 | 0.371970 | 0.483568 | — | — | — |
| list_c.test | COMPILE | 0.168817 | 0.359301 | 0.504518 | — | — | — |
| logical.test | COMPILE | 0.134983 | 0.287273 | 0.404076 | — | — | — |
| lower_bound.test | COMPILE | 0.178738 | 0.382688 | 0.482396 | — | — | — |
| map.test | COMPILE | 0.202289 | 0.473319 | 0.609752 | — | — | — |
| max_element.test | COMPILE | 0.162081 | 0.346797 | 0.479782 | — | — | — |
| min_max.test | COMPILE | 0.139186 | 0.319199 | 0.418374 | — | — | — |
| multiset.test | COMPILE | 0.173898 | 0.405930 | 0.511677 | — | — | — |
| next.test | COMPILE | 0.130921 | 0.287671 | 0.383011 | — | — | — |
| no_has_xxx.test | COMPILE | 0.137237 | 0.309760 | 0.434173 | — | — | — |
| numeric_ops.test | COMPILE | 0.154470 | 0.361766 | 0.472480 | — | — | — |
| pair_view.test | COMPILE | 0.181520 | 0.399473 | 0.520499 | — | — | — |
| partition.test | COMPILE | 0.191094 | 0.442631 | 0.585468 | — | — | — |
| pop_front.test | COMPILE | 0.156092 | 0.364439 | 0.478970 | — | — | — |
| push_back.test | COMPILE | 0.135228 | 0.308637 | 0.412115 | — | — | — |
| push_front.test | COMPILE | 0.160442 | 0.360475 | 0.474483 | — | — | — |
| quote.test | COMPILE | 0.130895 | 0.290678 | 0.381912 | — | — | — |
| range_c.test | COMPILE | 0.169193 | 0.390652 | 0.496068 | — | — | — |
| remove.test | COMPILE | 0.179471 | 0.410024 | 0.522790 | — | — | — |
| remove_if.test | COMPILE | 0.186063 | 0.412900 | 0.532960 | — | — | — |
| replace.test | COMPILE | 0.195156 | 0.449094 | 0.577635 | — | — | — |
| replace_if.test | COMPILE | 0.194512 | 0.467358 | 0.590265 | — | — | — |
| reverse.test | COMPILE | 0.187025 | 0.430168 | 0.552232 | — | — | — |
| same_as.test | COMPILE | 0.142940 | 0.313619 | 0.414725 | — | — | — |
| set.test | COMPILE | 0.253912 | 0.601702 | 0.824899 | — | — | — |
| set_c.test | COMPILE | 0.182278 | 0.424196 | 0.565936 | — | — | — |
| single_view.test | COMPILE | 0.165890 | 0.376288 | 0.479461 | — | — | — |
| size.test | COMPILE | 0.165320 | 0.353039 | 0.459458 | — | — | — |
| size_t.test | RUN | 0.146268 | 0.333700 | 0.422816 | 0.001800 | 0.001910 | 0.001685 |
| sizeof.test | COMPILE | 0.131814 | 0.279801 | 0.368081 | — | — | — |
| sort.test | COMPILE | 0.210759 | 0.477233 | 0.613222 | — | — | — |
| stable_partition.test | COMPILE | 0.203526 | 0.439405 | 0.582314 | — | — | — |
| transform.test | COMPILE | 0.207105 | 0.486647 | 0.630184 | — | — | — |
| transform_view.test | COMPILE | 0.167575 | 0.388948 | 0.509004 | — | — | — |
| unique.test | COMPILE | 0.178661 | 0.420912 | 0.528552 | — | — | — |
| unpack_args.test | COMPILE | 0.164263 | 0.381341 | 0.494302 | — | — | — |
| upper_bound.test | COMPILE | 0.170011 | 0.379848 | 0.498620 | — | — | — |
| vector.test | COMPILE | 0.192194 | 0.435756 | 0.596871 | — | — | — |
| vector_c.test | COMPILE | 0.170919 | 0.382482 | 0.504749 | — | — | — |
| zip_view.test | COMPILE | 0.241287 | 0.562754 | 0.723851 | — | — | — |
| string.test | RUN | 0.387256 | 1.121410 | 1.000848 | 0.001464 | 0.001274 | 0.001263 |
| issue_69.test | RUN | 0.018018 | 0.045204 | 0.051045 | 0.000647 | 0.000595 | 0.001682 |
| issue_84.test | RUN | 0.032055 | 0.085941 | 0.094138 | 0.000642 | 0.000487 | 0.001335 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 1.030×† | 1.077×, 0.982× | 1.060× |
| clang | 1.059×† | 1.107×, 1.011× | 1.129× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1363 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43620819273).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| bool.test | 10 | 0.001067s | 0.001084s | 0.001001s | byte equality observed |
| char.test | 10 | 0.001067s | 0.001162s | 0.001066s | byte equality observed |
| char_unsigned.test | 10 | 0.001073s | 0.001147s | 0.001033s | byte equality observed |
| for_each.test | 10 | 0.001128s | 0.001176s | 0.001074s | byte equality observed |
| int.test | 10 | 0.001106s | 0.001145s | 0.001042s | byte equality observed |
| integral_c.test | 10 | 0.001084s | 0.001158s | 0.001018s | byte equality observed |
| integral_c_unsigned.test | 10 | 0.001076s | 0.001141s | 0.001037s | byte equality observed |
| issue_69.test | 10 | 0.000475s | 0.000506s | 0.001011s | byte equality observed |
| issue_84.test | 10 | 0.000471s | 0.000512s | 0.001020s | byte equality observed |
| size_t.test | 10 | 0.001097s | 0.001133s | 0.001022s | byte equality observed |
| string.test | 10 | 0.001082s | 0.001153s | 0.001034s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43620819273).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
