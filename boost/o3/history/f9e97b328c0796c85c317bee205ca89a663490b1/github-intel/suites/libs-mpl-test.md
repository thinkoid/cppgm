# libs/mpl/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| increased_arity.test | COMPILE | 0.397784 | 1.169685 | 1.084653 | — | — | — |
| largest_int.test | COMPILE | 0.129439 | 0.316536 | 0.369832 | — | — | — |
| msvc_is_class.test | COMPILE | 0.015228 | 0.039483 | 0.042496 | — | — | — |
| template_arity.test | COMPILE | 0.123175 | 0.312442 | 0.366925 | — | — | — |
| is_seq.test | COMPILE | 0.004495 | 0.013231 | 0.025989 | — | — | — |
| token_equal.test | COMPILE | 0.004345 | 0.013929 | 0.025182 | — | — | — |
| advance.test | COMPILE | 0.144394 | 0.346391 | 0.410124 | — | — | — |
| always.test | COMPILE | 0.149084 | 0.359895 | 0.420427 | — | — | — |
| apply.test | COMPILE | 0.156985 | 0.379894 | 0.432666 | — | — | — |
| apply_wrap.test | COMPILE | 0.135583 | 0.322177 | 0.364010 | — | — | — |
| arithmetic.test | COMPILE | 0.150165 | 0.361351 | 0.426079 | — | — | — |
| as_sequence.test | COMPILE | 0.154205 | 0.396891 | 0.458317 | — | — | — |
| assert.test | COMPILE | 0.033472 | 0.072295 | 0.077255 | — | — | — |
| at.test | COMPILE | 0.154790 | 0.391390 | 0.449002 | — | — | — |
| back.test | COMPILE | 0.147211 | 0.370822 | 0.421509 | — | — | — |
| bind.test | COMPILE | 0.144995 | 0.355839 | 0.413307 | — | — | — |
| bitwise.test | COMPILE | 0.147658 | 0.360951 | 0.426174 | — | — | — |
| bool.test | RUN | 0.133646 | 0.318394 | 0.386886 | 0.001360 | 0.001420 | 0.001336 |
| comparison.test | COMPILE | 0.142965 | 0.354887 | 0.425381 | — | — | — |
| contains.test | COMPILE | 0.176904 | 0.433513 | 0.498148 | — | — | — |
| copy.test | COMPILE | 0.205814 | 0.518309 | 0.611004 | — | — | — |
| copy_if.test | COMPILE | 0.185825 | 0.476846 | 0.546725 | — | — | — |
| count.test | COMPILE | 0.178682 | 0.437111 | 0.522170 | — | — | — |
| count_if.test | COMPILE | 0.189701 | 0.460713 | 0.532394 | — | — | — |
| deque.test | COMPILE | 0.178766 | 0.447555 | 0.521618 | — | — | — |
| distance.test | COMPILE | 0.164159 | 0.410840 | 0.479054 | — | — | — |
| empty.test | COMPILE | 0.141144 | 0.351355 | 0.419993 | — | — | — |
| equal.test | COMPILE | 0.166699 | 0.424055 | 0.474924 | — | — | — |
| erase.test | COMPILE | 0.193785 | 0.500492 | 0.563925 | — | — | — |
| erase_range.test | COMPILE | 0.182096 | 0.474792 | 0.538408 | — | — | — |
| eval_if.test | COMPILE | 0.132922 | 0.340686 | 0.389028 | — | — | — |
| filter_view.test | COMPILE | 0.181054 | 0.461724 | 0.529996 | — | — | — |
| find.test | COMPILE | 0.176939 | 0.462806 | 0.522528 | — | — | — |
| find_if.test | COMPILE | 0.178467 | 0.453327 | 0.527130 | — | — | — |
| fold.test | COMPILE | 0.185801 | 0.485946 | 0.571582 | — | — | — |
| for_each.test | RUN | 0.271459 | 0.707292 | 0.859948 | 0.001337 | 0.001501 | 0.001389 |
| front.test | COMPILE | 0.145756 | 0.381030 | 0.437684 | — | — | — |
| get_tag_def.test | COMPILE | 0.129430 | 0.330418 | 0.393563 | — | — | — |
| has_xxx.test | COMPILE | 0.141077 | 0.359899 | 0.428723 | — | — | — |
| identity.test | COMPILE | 0.148971 | 0.377490 | 0.414504 | — | — | — |
| if.test | COMPILE | 0.130909 | 0.330496 | 0.373400 | — | — | — |
| index_of.test | COMPILE | 0.173176 | 0.426138 | 0.481853 | — | — | — |
| inherit.test | COMPILE | 0.139193 | 0.340265 | 0.385859 | — | — | — |
| insert.test | COMPILE | 0.205028 | 0.512263 | 0.595196 | — | — | — |
| insert_range.test | COMPILE | 0.271220 | 0.686870 | 0.833916 | — | — | — |
| int.test | RUN | 0.142094 | 0.372069 | 0.424402 | 0.001378 | 0.001494 | 0.001384 |
| char.test | RUN | 0.142844 | 0.370322 | 0.435073 | 0.001309 | 0.001350 | 0.001322 |
| char_unsigned.test | RUN | 0.142096 | 0.366968 | 0.418211 | 0.001365 | 0.001436 | 0.001407 |
| integral_c.test | RUN | 0.157387 | 0.469502 | 0.522271 | 0.001340 | 0.001542 | 0.001372 |
| integral_c_unsigned.test | RUN | 0.156345 | 0.457573 | 0.512406 | 0.001318 | 0.001548 | 0.001294 |
| is_placeholder.test | COMPILE | 0.123627 | 0.321769 | 0.394144 | — | — | — |
| is_sequence.test | COMPILE | 0.162677 | 0.401712 | 0.448958 | — | — | — |
| iterator_tags.test | COMPILE | 0.137193 | 0.336818 | 0.384272 | — | — | — |
| joint_view.test | COMPILE | 0.183261 | 0.458083 | 0.528383 | — | — | — |
| lambda.test | COMPILE | 0.168828 | 0.426157 | 0.486541 | — | — | — |
| lambda_args.test | COMPILE | 0.161323 | 0.398329 | 0.490019 | — | — | — |
| list.test | COMPILE | 0.170256 | 0.423319 | 0.482171 | — | — | — |
| list_c.test | COMPILE | 0.167505 | 0.411650 | 0.491773 | — | — | — |
| logical.test | COMPILE | 0.134264 | 0.331472 | 0.386660 | — | — | — |
| lower_bound.test | COMPILE | 0.174695 | 0.436903 | 0.493605 | — | — | — |
| map.test | COMPILE | 0.203020 | 0.540127 | 0.624511 | — | — | — |
| max_element.test | COMPILE | 0.162954 | 0.403253 | 0.463782 | — | — | — |
| min_max.test | COMPILE | 0.137542 | 0.353806 | 0.403946 | — | — | — |
| multiset.test | COMPILE | 0.174105 | 0.469435 | 0.522469 | — | — | — |
| next.test | COMPILE | 0.133301 | 0.330964 | 0.394944 | — | — | — |
| no_has_xxx.test | COMPILE | 0.143275 | 0.353995 | 0.429856 | — | — | — |
| numeric_ops.test | COMPILE | 0.160026 | 0.402332 | 0.456135 | — | — | — |
| pair_view.test | COMPILE | 0.181386 | 0.456098 | 0.526676 | — | — | — |
| partition.test | COMPILE | 0.199542 | 0.511107 | 0.577002 | — | — | — |
| pop_front.test | COMPILE | 0.164523 | 0.408784 | 0.469717 | — | — | — |
| push_back.test | COMPILE | 0.137101 | 0.350482 | 0.394612 | — | — | — |
| push_front.test | COMPILE | 0.168121 | 0.413662 | 0.477304 | — | — | — |
| quote.test | COMPILE | 0.133430 | 0.326790 | 0.386933 | — | — | — |
| range_c.test | COMPILE | 0.169915 | 0.439212 | 0.494669 | — | — | — |
| remove.test | COMPILE | 0.179169 | 0.463235 | 0.514758 | — | — | — |
| remove_if.test | COMPILE | 0.185452 | 0.474329 | 0.541155 | — | — | — |
| replace.test | COMPILE | 0.200265 | 0.508731 | 0.577758 | — | — | — |
| replace_if.test | COMPILE | 0.200240 | 0.526196 | 0.586167 | — | — | — |
| reverse.test | COMPILE | 0.190597 | 0.484817 | 0.543748 | — | — | — |
| same_as.test | COMPILE | 0.143325 | 0.357524 | 0.410171 | — | — | — |
| set.test | COMPILE | 0.249407 | 0.667240 | 0.811878 | — | — | — |
| set_c.test | COMPILE | 0.181344 | 0.472383 | 0.537576 | — | — | — |
| single_view.test | COMPILE | 0.165752 | 0.439544 | 0.484052 | — | — | — |
| size.test | COMPILE | 0.157288 | 0.399732 | 0.459241 | — | — | — |
| size_t.test | RUN | 0.140257 | 0.370800 | 0.429879 | 0.001411 | 0.001413 | 0.001322 |
| sizeof.test | COMPILE | 0.130121 | 0.321845 | 0.384787 | — | — | — |
| sort.test | COMPILE | 0.209684 | 0.524736 | 0.611802 | — | — | — |
| stable_partition.test | COMPILE | 0.200593 | 0.503011 | 0.570075 | — | — | — |
| transform.test | COMPILE | 0.212750 | 0.538269 | 0.613381 | — | — | — |
| transform_view.test | COMPILE | 0.170347 | 0.427863 | 0.493460 | — | — | — |
| unique.test | COMPILE | 0.180910 | 0.460707 | 0.518447 | — | — | — |
| unpack_args.test | COMPILE | 0.167415 | 0.421661 | 0.483909 | — | — | — |
| upper_bound.test | COMPILE | 0.176310 | 0.420358 | 0.476637 | — | — | — |
| vector.test | COMPILE | 0.200898 | 0.501526 | 0.586816 | — | — | — |
| vector_c.test | COMPILE | 0.175733 | 0.421077 | 0.502410 | — | — | — |
| zip_view.test | COMPILE | 0.244757 | 0.641764 | 0.722104 | — | — | — |
| string.test | RUN | 0.389303 | 1.183323 | 1.082499 | 0.001113 | 0.001312 | 0.001049 |
| issue_69.test | RUN | 0.015395 | 0.046969 | 0.045945 | 0.000430 | 0.000544 | 0.001297 |
| issue_84.test | RUN | 0.039928 | 0.098224 | 0.083441 | 0.000474 | 0.000616 | 0.000962 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 1.017× | 1.034×, 1.001× | 1.003× |
| clang | 1.115× | 1.118×, 1.113× | 0.974× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1360 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43654890423).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| bool.test | 10 | 0.000940s | 0.000981s | 0.001021s | byte equality observed |
| char.test | 10 | 0.000948s | 0.000980s | 0.000971s | byte equality observed |
| char_unsigned.test | 10 | 0.000997s | 0.001006s | 0.000973s | byte equality observed |
| for_each.test | 10 | 0.000962s | 0.001031s | 0.000975s | byte equality observed |
| int.test | 10 | 0.000942s | 0.000973s | 0.000989s | byte equality observed |
| integral_c.test | 10 | 0.001005s | 0.000977s | 0.000934s | byte equality observed |
| integral_c_unsigned.test | 10 | 0.000979s | 0.000987s | 0.000962s | byte equality observed |
| issue_69.test | 10 | 0.000425s | 0.000435s | 0.000957s | byte equality observed |
| issue_84.test | 10 | 0.000426s | 0.000436s | 0.000943s | byte equality observed |
| size_t.test | 10 | 0.000989s | 0.000996s | 0.000981s | byte equality observed |
| string.test | 10 | 0.000982s | 0.000977s | 0.000961s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43654890423).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
