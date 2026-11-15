# libs/mpl/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| increased_arity.test | COMPILE | 0.496359 | 1.361690 | 1.516562 | — | — | — |
| largest_int.test | COMPILE | 0.165779 | 0.383178 | 0.575066 | — | — | — |
| msvc_is_class.test | COMPILE | 0.020790 | 0.048056 | 0.057484 | — | — | — |
| template_arity.test | COMPILE | 0.161457 | 0.380670 | 0.568543 | — | — | — |
| is_seq.test | COMPILE | 0.006336 | 0.015882 | 0.029982 | — | — | — |
| token_equal.test | COMPILE | 0.006525 | 0.016554 | 0.031240 | — | — | — |
| advance.test | COMPILE | 0.182163 | 0.413892 | 0.619602 | — | — | — |
| always.test | COMPILE | 0.186301 | 0.440955 | 0.644374 | — | — | — |
| apply.test | COMPILE | 0.197804 | 0.459528 | 0.671945 | — | — | — |
| apply_wrap.test | COMPILE | 0.170831 | 0.383658 | 0.559900 | — | — | — |
| arithmetic.test | COMPILE | 0.186291 | 0.470347 | 0.609320 | — | — | — |
| as_sequence.test | COMPILE | 0.201593 | 0.500211 | 0.681144 | — | — | — |
| assert.test | COMPILE | 0.045138 | 0.092308 | 0.123360 | — | — | — |
| at.test | COMPILE | 0.198158 | 0.471465 | 0.673904 | — | — | — |
| back.test | COMPILE | 0.189978 | 0.448358 | 0.639084 | — | — | — |
| bind.test | COMPILE | 0.185046 | 0.443410 | 0.622334 | — | — | — |
| bitwise.test | COMPILE | 0.190872 | 0.457446 | 0.657127 | — | — | — |
| bool.test | RUN | 0.169913 | 0.391788 | 0.588212 | 0.001714 | 0.001786 | 0.001962 |
| comparison.test | COMPILE | 0.184155 | 0.448929 | 0.626672 | — | — | — |
| contains.test | COMPILE | 0.222834 | 0.525960 | 0.775090 | — | — | — |
| copy.test | COMPILE | 0.272063 | 0.650245 | 0.923966 | — | — | — |
| copy_if.test | COMPILE | 0.239106 | 0.567784 | 0.782690 | — | — | — |
| count.test | COMPILE | 0.227195 | 0.525052 | 0.761031 | — | — | — |
| count_if.test | COMPILE | 0.243235 | 0.541020 | 0.825751 | — | — | — |
| deque.test | COMPILE | 0.230149 | 0.546637 | 0.784443 | — | — | — |
| distance.test | COMPILE | 0.211551 | 0.497816 | 0.680185 | — | — | — |
| empty.test | COMPILE | 0.184636 | 0.439809 | 0.630913 | — | — | — |
| equal.test | COMPILE | 0.219520 | 0.500919 | 0.727754 | — | — | — |
| erase.test | COMPILE | 0.250124 | 0.594943 | 0.851849 | — | — | — |
| erase_range.test | COMPILE | 0.231592 | 0.566148 | 0.819988 | — | — | — |
| eval_if.test | COMPILE | 0.176080 | 0.407407 | 0.600782 | — | — | — |
| filter_view.test | COMPILE | 0.243255 | 0.554315 | 0.774583 | — | — | — |
| find.test | COMPILE | 0.231054 | 0.546361 | 0.773070 | — | — | — |
| find_if.test | COMPILE | 0.236057 | 0.560849 | 0.782634 | — | — | — |
| fold.test | COMPILE | 0.245867 | 0.591757 | 0.844556 | — | — | — |
| for_each.test | RUN | 0.357052 | 0.835889 | 1.304142 | 0.001932 | 0.001800 | 0.002290 |
| front.test | COMPILE | 0.191959 | 0.479909 | 0.659559 | — | — | — |
| get_tag_def.test | COMPILE | 0.171727 | 0.390206 | 0.592288 | — | — | — |
| has_xxx.test | COMPILE | 0.193177 | 0.441002 | 0.664723 | — | — | — |
| identity.test | COMPILE | 0.191832 | 0.440820 | 0.662990 | — | — | — |
| if.test | COMPILE | 0.172479 | 0.377372 | 0.588052 | — | — | — |
| index_of.test | COMPILE | 0.222424 | 0.514785 | 0.705688 | — | — | — |
| inherit.test | COMPILE | 0.178240 | 0.411403 | 0.589299 | — | — | — |
| insert.test | COMPILE | 0.255664 | 0.611857 | 0.861057 | — | — | — |
| insert_range.test | COMPILE | 0.350296 | 0.831830 | 1.292329 | — | — | — |
| int.test | RUN | 0.184784 | 0.448913 | 0.650238 | 0.001940 | 0.001928 | 0.002053 |
| char.test | RUN | 0.180660 | 0.466223 | 0.642676 | 0.001970 | 0.001855 | 0.002052 |
| char_unsigned.test | RUN | 0.183561 | 0.437983 | 0.628914 | 0.001754 | 0.002256 | 0.002056 |
| integral_c.test | RUN | 0.211407 | 0.566873 | 0.801482 | 0.001908 | 0.002082 | 0.001738 |
| integral_c_unsigned.test | RUN | 0.208001 | 0.561271 | 0.734980 | 0.001904 | 0.001569 | 0.001909 |
| is_placeholder.test | COMPILE | 0.170925 | 0.408101 | 0.598383 | — | — | — |
| is_sequence.test | COMPILE | 0.206293 | 0.478744 | 0.689802 | — | — | — |
| iterator_tags.test | COMPILE | 0.178544 | 0.405450 | 0.602281 | — | — | — |
| joint_view.test | COMPILE | 0.233336 | 0.565384 | 0.800655 | — | — | — |
| lambda.test | COMPILE | 0.222689 | 0.521484 | 0.752908 | — | — | — |
| lambda_args.test | COMPILE | 0.207238 | 0.484796 | 0.718962 | — | — | — |
| list.test | COMPILE | 0.214600 | 0.515539 | 0.707626 | — | — | — |
| list_c.test | COMPILE | 0.211790 | 0.503651 | 0.747449 | — | — | — |
| logical.test | COMPILE | 0.176181 | 0.403173 | 0.600181 | — | — | — |
| lower_bound.test | COMPILE | 0.224998 | 0.507904 | 0.726180 | — | — | — |
| map.test | COMPILE | 0.260667 | 0.644599 | 0.893295 | — | — | — |
| max_element.test | COMPILE | 0.209606 | 0.479569 | 0.717252 | — | — | — |
| min_max.test | COMPILE | 0.183658 | 0.418082 | 0.620723 | — | — | — |
| multiset.test | COMPILE | 0.228913 | 0.553102 | 0.773888 | — | — | — |
| next.test | COMPILE | 0.171300 | 0.405782 | 0.585662 | — | — | — |
| no_has_xxx.test | COMPILE | 0.184441 | 0.420960 | 0.643838 | — | — | — |
| numeric_ops.test | COMPILE | 0.205055 | 0.487832 | 0.655883 | — | — | — |
| pair_view.test | COMPILE | 0.237510 | 0.541683 | 0.795161 | — | — | — |
| partition.test | COMPILE | 0.251679 | 0.603485 | 0.871597 | — | — | — |
| pop_front.test | COMPILE | 0.211294 | 0.485166 | 0.718136 | — | — | — |
| push_back.test | COMPILE | 0.177219 | 0.408638 | 0.596577 | — | — | — |
| push_front.test | COMPILE | 0.210785 | 0.490631 | 0.712691 | — | — | — |
| quote.test | COMPILE | 0.173113 | 0.393250 | 0.591195 | — | — | — |
| range_c.test | COMPILE | 0.218419 | 0.528247 | 0.726722 | — | — | — |
| remove.test | COMPILE | 0.230389 | 0.557547 | 0.783425 | — | — | — |
| remove_if.test | COMPILE | 0.238424 | 0.562003 | 0.812712 | — | — | — |
| replace.test | COMPILE | 0.252188 | 0.606772 | 0.858670 | — | — | — |
| replace_if.test | COMPILE | 0.259166 | 0.637957 | 0.851685 | — | — | — |
| reverse.test | COMPILE | 0.246950 | 0.590579 | 0.832990 | — | — | — |
| same_as.test | COMPILE | 0.191102 | 0.423326 | 0.622671 | — | — | — |
| set.test | COMPILE | 0.324522 | 0.816717 | 1.258672 | — | — | — |
| set_c.test | COMPILE | 0.241608 | 0.573702 | 0.806531 | — | — | — |
| single_view.test | COMPILE | 0.213194 | 0.523189 | 0.741540 | — | — | — |
| size.test | COMPILE | 0.206107 | 0.491032 | 0.704215 | — | — | — |
| size_t.test | RUN | 0.180954 | 0.455589 | 0.653366 | 0.001824 | 0.002220 | 0.001860 |
| sizeof.test | COMPILE | 0.165773 | 0.377059 | 0.585881 | — | — | — |
| sort.test | COMPILE | 0.267691 | 0.638741 | 0.924287 | — | — | — |
| stable_partition.test | COMPILE | 0.262781 | 0.607266 | 0.873941 | — | — | — |
| transform.test | COMPILE | 0.273423 | 0.650449 | 0.931678 | — | — | — |
| transform_view.test | COMPILE | 0.217699 | 0.517622 | 0.759760 | — | — | — |
| unique.test | COMPILE | 0.233952 | 0.570958 | 0.779678 | — | — | — |
| unpack_args.test | COMPILE | 0.218410 | 0.525776 | 0.728920 | — | — | — |
| upper_bound.test | COMPILE | 0.220222 | 0.505609 | 0.741437 | — | — | — |
| vector.test | COMPILE | 0.252257 | 0.601680 | 0.883549 | — | — | — |
| vector_c.test | COMPILE | 0.224307 | 0.512758 | 0.747941 | — | — | — |
| zip_view.test | COMPILE | 0.315935 | 0.752448 | 1.054368 | — | — | — |
| string.test | RUN | 0.484528 | 1.414360 | 1.379612 | 0.001532 | 0.001399 | 0.001606 |
| issue_69.test | RUN | 0.022940 | 0.063759 | 0.070408 | 0.000720 | 0.000823 | 0.001871 |
| issue_84.test | RUN | 0.048265 | 0.110329 | 0.135867 | 0.000570 | 0.000615 | 0.001355 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.986× | 0.980×, 0.992× | 0.987× |
| clang | 1.096× | 1.086×, 1.105× | 0.994× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1360 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/43712369003).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| bool.test | 10 | 0.001226s | 0.001213s | 0.001255s | byte equality observed |
| char.test | 10 | 0.001237s | 0.001224s | 0.001251s | byte equality observed |
| char_unsigned.test | 10 | 0.001236s | 0.001231s | 0.001279s | byte equality observed |
| for_each.test | 10 | 0.001265s | 0.001258s | 0.001259s | byte equality observed |
| int.test | 10 | 0.001288s | 0.001248s | 0.001263s | byte equality observed |
| integral_c.test | 10 | 0.001255s | 0.001221s | 0.001227s | byte equality observed |
| integral_c_unsigned.test | 10 | 0.001254s | 0.001263s | 0.001216s | byte equality observed |
| issue_69.test | 10 | 0.000587s | 0.000565s | 0.001237s | byte equality observed |
| issue_84.test | 10 | 0.000570s | 0.000558s | 0.001226s | byte equality observed |
| size_t.test | 6 | 0.001285s | 0.001268s | 0.001242s | byte equality observed |
| string.test | 10 | 0.001299s | 0.001232s | 0.001259s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/43712369003).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
