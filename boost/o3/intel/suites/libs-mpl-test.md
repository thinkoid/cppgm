# libs/mpl/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| increased_arity.test | COMPILE | 0.269558 | 0.708925 | 0.618697 | — | — | — |
| largest_int.test | COMPILE | 0.084303 | 0.200526 | 0.226171 | — | — | — |
| msvc_is_class.test | COMPILE | 0.010208 | 0.025123 | 0.025501 | — | — | — |
| template_arity.test | COMPILE | 0.083822 | 0.197942 | 0.221758 | — | — | — |
| is_seq.test | COMPILE | 0.003189 | 0.008961 | 0.015891 | — | — | — |
| token_equal.test | COMPILE | 0.003778 | 0.009041 | 0.015978 | — | — | — |
| advance.test | COMPILE | 0.093495 | 0.224448 | 0.246294 | — | — | — |
| always.test | COMPILE | 0.094479 | 0.226562 | 0.245631 | — | — | — |
| apply.test | COMPILE | 0.097201 | 0.238808 | 0.258661 | — | — | — |
| apply_wrap.test | COMPILE | 0.085077 | 0.200050 | 0.225241 | — | — | — |
| arithmetic.test | COMPILE | 0.095320 | 0.229206 | 0.246484 | — | — | — |
| as_sequence.test | COMPILE | 0.102286 | 0.251213 | 0.271864 | — | — | — |
| assert.test | COMPILE | 0.022912 | 0.046185 | 0.049281 | — | — | — |
| at.test | COMPILE | 0.098808 | 0.246966 | 0.265950 | — | — | — |
| back.test | COMPILE | 0.095099 | 0.234932 | 0.256696 | — | — | — |
| bind.test | COMPILE | 0.093839 | 0.220533 | 0.246072 | — | — | — |
| bitwise.test | COMPILE | 0.093250 | 0.227655 | 0.255067 | — | — | — |
| bool.test | RUN | 0.084477 | 0.207275 | 0.230892 | 0.001064 | 0.000996 | 0.001014 |
| comparison.test | COMPILE | 0.091313 | 0.225284 | 0.250105 | — | — | — |
| contains.test | COMPILE | 0.115146 | 0.273855 | 0.298350 | — | — | — |
| copy.test | COMPILE | 0.133821 | 0.328488 | 0.355787 | — | — | — |
| copy_if.test | COMPILE | 0.120148 | 0.294841 | 0.325882 | — | — | — |
| count.test | COMPILE | 0.113868 | 0.276203 | 0.304575 | — | — | — |
| count_if.test | COMPILE | 0.118702 | 0.285671 | 0.313937 | — | — | — |
| deque.test | COMPILE | 0.114976 | 0.278009 | 0.310773 | — | — | — |
| distance.test | COMPILE | 0.107818 | 0.255161 | 0.283258 | — | — | — |
| empty.test | COMPILE | 0.094109 | 0.225419 | 0.250778 | — | — | — |
| equal.test | COMPILE | 0.107358 | 0.261824 | 0.283670 | — | — | — |
| erase.test | COMPILE | 0.125269 | 0.305860 | 0.335310 | — | — | — |
| erase_range.test | COMPILE | 0.118428 | 0.295169 | 0.310229 | — | — | — |
| eval_if.test | COMPILE | 0.087251 | 0.207419 | 0.234533 | — | — | — |
| filter_view.test | COMPILE | 0.118610 | 0.289669 | 0.313126 | — | — | — |
| find.test | COMPILE | 0.115104 | 0.280301 | 0.304035 | — | — | — |
| find_if.test | COMPILE | 0.117420 | 0.285109 | 0.315996 | — | — | — |
| fold.test | COMPILE | 0.124394 | 0.296730 | 0.325931 | — | — | — |
| for_each.test | RUN | 0.177409 | 0.431768 | 0.513719 | 0.001076 | 0.001080 | 0.001028 |
| front.test | COMPILE | 0.095374 | 0.231966 | 0.255807 | — | — | — |
| get_tag_def.test | COMPILE | 0.084231 | 0.198921 | 0.222153 | — | — | — |
| has_xxx.test | COMPILE | 0.091477 | 0.211942 | 0.248957 | — | — | — |
| identity.test | COMPILE | 0.096720 | 0.226837 | 0.250153 | — | — | — |
| if.test | COMPILE | 0.083611 | 0.203007 | 0.222985 | — | — | — |
| index_of.test | COMPILE | 0.108794 | 0.267175 | 0.290191 | — | — | — |
| inherit.test | COMPILE | 0.087469 | 0.207809 | 0.234415 | — | — | — |
| insert.test | COMPILE | 0.127033 | 0.319698 | 0.341435 | — | — | — |
| insert_range.test | COMPILE | 0.172039 | 0.411270 | 0.482911 | — | — | — |
| int.test | RUN | 0.088267 | 0.221651 | 0.254341 | 0.001070 | 0.001054 | 0.000891 |
| char.test | RUN | 0.088694 | 0.222668 | 0.244460 | 0.001055 | 0.001032 | 0.001041 |
| char_unsigned.test | RUN | 0.089501 | 0.223363 | 0.255920 | 0.001055 | 0.001096 | 0.000884 |
| integral_c.test | RUN | 0.101462 | 0.285286 | 0.305567 | 0.001010 | 0.001010 | 0.001022 |
| integral_c_unsigned.test | RUN | 0.100797 | 0.285161 | 0.304298 | 0.000967 | 0.001059 | 0.000971 |
| is_placeholder.test | COMPILE | 0.085786 | 0.200792 | 0.226622 | — | — | — |
| is_sequence.test | COMPILE | 0.103842 | 0.246813 | 0.273921 | — | — | — |
| iterator_tags.test | COMPILE | 0.088407 | 0.217546 | 0.238965 | — | — | — |
| joint_view.test | COMPILE | 0.118051 | 0.281496 | 0.311773 | — | — | — |
| lambda.test | COMPILE | 0.109222 | 0.261837 | 0.288123 | — | — | — |
| lambda_args.test | COMPILE | 0.102048 | 0.248565 | 0.291078 | — | — | — |
| list.test | COMPILE | 0.109749 | 0.258173 | 0.285525 | — | — | — |
| list_c.test | COMPILE | 0.106364 | 0.257288 | 0.294569 | — | — | — |
| logical.test | COMPILE | 0.087736 | 0.205051 | 0.232772 | — | — | — |
| lower_bound.test | COMPILE | 0.112264 | 0.265630 | 0.291794 | — | — | — |
| map.test | COMPILE | 0.131825 | 0.324432 | 0.358992 | — | — | — |
| max_element.test | COMPILE | 0.105659 | 0.250539 | 0.276815 | — | — | — |
| min_max.test | COMPILE | 0.089409 | 0.215785 | 0.240034 | — | — | — |
| multiset.test | COMPILE | 0.114431 | 0.282824 | 0.303998 | — | — | — |
| next.test | COMPILE | 0.084797 | 0.202411 | 0.226713 | — | — | — |
| no_has_xxx.test | COMPILE | 0.092142 | 0.216384 | 0.247389 | — | — | — |
| numeric_ops.test | COMPILE | 0.102071 | 0.247151 | 0.272462 | — | — | — |
| pair_view.test | COMPILE | 0.119727 | 0.280148 | 0.311194 | — | — | — |
| partition.test | COMPILE | 0.128720 | 0.309837 | 0.341763 | — | — | — |
| pop_front.test | COMPILE | 0.104489 | 0.252448 | 0.274586 | — | — | — |
| push_back.test | COMPILE | 0.088501 | 0.210157 | 0.232882 | — | — | — |
| push_front.test | COMPILE | 0.104849 | 0.254219 | 0.277647 | — | — | — |
| quote.test | COMPILE | 0.085595 | 0.205818 | 0.230993 | — | — | — |
| range_c.test | COMPILE | 0.109757 | 0.269167 | 0.292771 | — | — | — |
| remove.test | COMPILE | 0.116362 | 0.282065 | 0.306826 | — | — | — |
| remove_if.test | COMPILE | 0.120594 | 0.293931 | 0.322422 | — | — | — |
| replace.test | COMPILE | 0.130397 | 0.321678 | 0.341467 | — | — | — |
| replace_if.test | COMPILE | 0.130754 | 0.321465 | 0.350596 | — | — | — |
| reverse.test | COMPILE | 0.123110 | 0.295980 | 0.321817 | — | — | — |
| same_as.test | COMPILE | 0.093387 | 0.220778 | 0.249277 | — | — | — |
| set.test | COMPILE | 0.163093 | 0.408711 | 0.473751 | — | — | — |
| set_c.test | COMPILE | 0.121629 | 0.292206 | 0.319430 | — | — | — |
| single_view.test | COMPILE | 0.108503 | 0.261265 | 0.287298 | — | — | — |
| size.test | COMPILE | 0.102342 | 0.248814 | 0.272272 | — | — | — |
| size_t.test | RUN | 0.091040 | 0.228837 | 0.252204 | 0.001016 | 0.001115 | 0.001070 |
| sizeof.test | COMPILE | 0.084453 | 0.204249 | 0.225860 | — | — | — |
| sort.test | COMPILE | 0.136183 | 0.331211 | 0.363318 | — | — | — |
| stable_partition.test | COMPILE | 0.127703 | 0.309224 | 0.343024 | — | — | — |
| transform.test | COMPILE | 0.135563 | 0.336918 | 0.367680 | — | — | — |
| transform_view.test | COMPILE | 0.111739 | 0.271373 | 0.294693 | — | — | — |
| unique.test | COMPILE | 0.115818 | 0.281741 | 0.301754 | — | — | — |
| unpack_args.test | COMPILE | 0.109062 | 0.261803 | 0.283388 | — | — | — |
| upper_bound.test | COMPILE | 0.111135 | 0.264010 | 0.288747 | — | — | — |
| vector.test | COMPILE | 0.126035 | 0.314518 | 0.341104 | — | — | — |
| vector_c.test | COMPILE | 0.111577 | 0.259911 | 0.294825 | — | — | — |
| zip_view.test | COMPILE | 0.155344 | 0.388165 | 0.420182 | — | — | — |
| string.test | RUN | 0.330415 | 1.070468 | 0.900373 | 0.001052 | 0.001089 | 0.001133 |
| issue_69.test | RUN | 0.010426 | 0.029883 | 0.032674 | 0.000470 | 0.000460 | 0.001011 |
| issue_84.test | RUN | 0.026655 | 0.057742 | 0.059008 | 0.000426 | 0.000447 | 0.001006 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.997× | 0.998×, 0.996× | 1.005× |
| clang | 1.104× | 1.102×, 1.105× | 1.010× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1364 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/43947487361).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| bool.test | 10 | 0.000955s | 0.000940s | 0.000931s | byte equality observed |
| char.test | 10 | 0.000948s | 0.000934s | 0.000945s | byte equality observed |
| char_unsigned.test | 10 | 0.000945s | 0.000937s | 0.000947s | byte equality observed |
| for_each.test | 10 | 0.000950s | 0.000958s | 0.000954s | byte equality observed |
| int.test | 10 | 0.000933s | 0.000936s | 0.000929s | byte equality observed |
| integral_c.test | 10 | 0.000932s | 0.000935s | 0.000936s | byte equality observed |
| integral_c_unsigned.test | 10 | 0.000931s | 0.000940s | 0.000947s | byte equality observed |
| issue_69.test | 10 | 0.000448s | 0.000441s | 0.000922s | byte equality observed |
| issue_84.test | 10 | 0.000443s | 0.000445s | 0.000923s | byte equality observed |
| size_t.test | 10 | 0.000933s | 0.000940s | 0.000932s | byte equality observed |
| string.test | 10 | 0.000943s | 0.000951s | 0.000937s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/43947487361).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
