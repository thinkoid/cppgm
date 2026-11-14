# libs/mpl/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| increased_arity.test | COMPILE | 0.363320 | 1.019402 | 1.024270 | — | — | — |
| largest_int.test | COMPILE | 0.122808 | 0.283216 | 0.371725 | — | — | — |
| msvc_is_class.test | COMPILE | 0.015572 | 0.038535 | 0.042626 | — | — | — |
| template_arity.test | COMPILE | 0.127411 | 0.285739 | 0.368829 | — | — | — |
| is_seq.test | COMPILE | 0.005325 | 0.014268 | 0.027190 | — | — | — |
| token_equal.test | COMPILE | 0.005478 | 0.015099 | 0.026457 | — | — | — |
| advance.test | COMPILE | 0.133627 | 0.327766 | 0.411738 | — | — | — |
| always.test | COMPILE | 0.141439 | 0.331540 | 0.418227 | — | — | — |
| apply.test | COMPILE | 0.151318 | 0.332729 | 0.443326 | — | — | — |
| apply_wrap.test | COMPILE | 0.126823 | 0.301365 | 0.366592 | — | — | — |
| arithmetic.test | COMPILE | 0.136894 | 0.342311 | 0.417015 | — | — | — |
| as_sequence.test | COMPILE | 0.150138 | 0.362067 | 0.455007 | — | — | — |
| assert.test | COMPILE | 0.035941 | 0.072202 | 0.086384 | — | — | — |
| at.test | COMPILE | 0.147251 | 0.356814 | 0.448610 | — | — | — |
| back.test | COMPILE | 0.142119 | 0.344955 | 0.413877 | — | — | — |
| bind.test | COMPILE | 0.136110 | 0.332821 | 0.418173 | — | — | — |
| bitwise.test | COMPILE | 0.140363 | 0.336523 | 0.426282 | — | — | — |
| bool.test | RUN | 0.127852 | 0.293370 | 0.358453 | 0.001498 | 0.001928 | 0.001567 |
| comparison.test | COMPILE | 0.133928 | 0.321055 | 0.411989 | — | — | — |
| contains.test | COMPILE | 0.163887 | 0.400967 | 0.487489 | — | — | — |
| copy.test | COMPILE | 0.204997 | 0.480965 | 0.603292 | — | — | — |
| copy_if.test | COMPILE | 0.179232 | 0.428784 | 0.538884 | — | — | — |
| count.test | COMPILE | 0.171950 | 0.392759 | 0.510686 | — | — | — |
| count_if.test | COMPILE | 0.179915 | 0.426446 | 0.541576 | — | — | — |
| deque.test | COMPILE | 0.170317 | 0.408182 | 0.508500 | — | — | — |
| distance.test | COMPILE | 0.156723 | 0.371090 | 0.477075 | — | — | — |
| empty.test | COMPILE | 0.136087 | 0.325963 | 0.411817 | — | — | — |
| equal.test | COMPILE | 0.158767 | 0.391416 | 0.491655 | — | — | — |
| erase.test | COMPILE | 0.187615 | 0.453791 | 0.573909 | — | — | — |
| erase_range.test | COMPILE | 0.178505 | 0.418825 | 0.525231 | — | — | — |
| eval_if.test | COMPILE | 0.130102 | 0.314710 | 0.403926 | — | — | — |
| filter_view.test | COMPILE | 0.174184 | 0.425808 | 0.529807 | — | — | — |
| find.test | COMPILE | 0.173400 | 0.406116 | 0.525009 | — | — | — |
| find_if.test | COMPILE | 0.178234 | 0.427780 | 0.533123 | — | — | — |
| fold.test | COMPILE | 0.183131 | 0.429398 | 0.552228 | — | — | — |
| for_each.test | RUN | 0.268168 | 0.647192 | 0.871618 | 0.001605 | 0.001884 | 0.001674 |
| front.test | COMPILE | 0.144268 | 0.345982 | 0.435794 | — | — | — |
| get_tag_def.test | COMPILE | 0.130638 | 0.302722 | 0.389191 | — | — | — |
| has_xxx.test | COMPILE | 0.139143 | 0.330585 | 0.440886 | — | — | — |
| identity.test | COMPILE | 0.143016 | 0.335402 | 0.433284 | — | — | — |
| if.test | COMPILE | 0.125844 | 0.290062 | 0.400623 | — | — | — |
| index_of.test | COMPILE | 0.158969 | 0.377680 | 0.482476 | — | — | — |
| inherit.test | COMPILE | 0.132052 | 0.301413 | 0.413907 | — | — | — |
| insert.test | COMPILE | 0.190345 | 0.459601 | 0.593899 | — | — | — |
| insert_range.test | COMPILE | 0.253450 | 0.615919 | 0.835894 | — | — | — |
| int.test | RUN | 0.134500 | 0.339671 | 0.429081 | 0.001714 | 0.001928 | 0.001469 |
| char.test | RUN | 0.134143 | 0.336677 | 0.429909 | 0.001723 | 0.001783 | 0.001605 |
| char_unsigned.test | RUN | 0.134592 | 0.339613 | 0.423671 | 0.001780 | 0.001978 | 0.001652 |
| integral_c.test | RUN | 0.151647 | 0.431818 | 0.496106 | 0.001494 | 0.001726 | 0.001593 |
| integral_c_unsigned.test | RUN | 0.151596 | 0.435067 | 0.512352 | 0.001535 | 0.001774 | 0.001590 |
| is_placeholder.test | COMPILE | 0.130950 | 0.294568 | 0.400045 | — | — | — |
| is_sequence.test | COMPILE | 0.157787 | 0.374370 | 0.433725 | — | — | — |
| iterator_tags.test | COMPILE | 0.135446 | 0.320035 | 0.378690 | — | — | — |
| joint_view.test | COMPILE | 0.178217 | 0.405594 | 0.512916 | — | — | — |
| lambda.test | COMPILE | 0.162469 | 0.380556 | 0.486848 | — | — | — |
| lambda_args.test | COMPILE | 0.153509 | 0.370837 | 0.494992 | — | — | — |
| list.test | COMPILE | 0.160376 | 0.381360 | 0.472594 | — | — | — |
| list_c.test | COMPILE | 0.155966 | 0.382717 | 0.503885 | — | — | — |
| logical.test | COMPILE | 0.128133 | 0.306201 | 0.394001 | — | — | — |
| lower_bound.test | COMPILE | 0.166363 | 0.383326 | 0.482460 | — | — | — |
| map.test | COMPILE | 0.199038 | 0.482436 | 0.586266 | — | — | — |
| max_element.test | COMPILE | 0.154687 | 0.372331 | 0.481635 | — | — | — |
| min_max.test | COMPILE | 0.132681 | 0.321983 | 0.416840 | — | — | — |
| multiset.test | COMPILE | 0.167911 | 0.408985 | 0.507172 | — | — | — |
| next.test | COMPILE | 0.126870 | 0.300173 | 0.380243 | — | — | — |
| no_has_xxx.test | COMPILE | 0.138988 | 0.321925 | 0.420877 | — | — | — |
| numeric_ops.test | COMPILE | 0.149321 | 0.376729 | 0.465044 | — | — | — |
| pair_view.test | COMPILE | 0.178683 | 0.408913 | 0.521949 | — | — | — |
| partition.test | COMPILE | 0.190163 | 0.447854 | 0.578550 | — | — | — |
| pop_front.test | COMPILE | 0.151558 | 0.374226 | 0.475295 | — | — | — |
| push_back.test | COMPILE | 0.131277 | 0.316885 | 0.399660 | — | — | — |
| push_front.test | COMPILE | 0.155344 | 0.378506 | 0.464241 | — | — | — |
| quote.test | COMPILE | 0.131122 | 0.304549 | 0.383235 | — | — | — |
| range_c.test | COMPILE | 0.161939 | 0.397188 | 0.495088 | — | — | — |
| remove.test | COMPILE | 0.172577 | 0.419126 | 0.515172 | — | — | — |
| remove_if.test | COMPILE | 0.175497 | 0.428799 | 0.543639 | — | — | — |
| replace.test | COMPILE | 0.187342 | 0.468935 | 0.560417 | — | — | — |
| replace_if.test | COMPILE | 0.189499 | 0.473805 | 0.584171 | — | — | — |
| reverse.test | COMPILE | 0.181094 | 0.442996 | 0.556093 | — | — | — |
| same_as.test | COMPILE | 0.138731 | 0.318373 | 0.413587 | — | — | — |
| set.test | COMPILE | 0.242649 | 0.620232 | 0.812233 | — | — | — |
| set_c.test | COMPILE | 0.180533 | 0.419953 | 0.540708 | — | — | — |
| single_view.test | COMPILE | 0.162063 | 0.387589 | 0.496477 | — | — | — |
| size.test | COMPILE | 0.156865 | 0.372034 | 0.461646 | — | — | — |
| size_t.test | RUN | 0.137180 | 0.343658 | 0.410609 | 0.001655 | 0.001836 | 0.001757 |
| sizeof.test | COMPILE | 0.128277 | 0.303588 | 0.375491 | — | — | — |
| sort.test | COMPILE | 0.197859 | 0.483655 | 0.611297 | — | — | — |
| stable_partition.test | COMPILE | 0.189068 | 0.468836 | 0.553401 | — | — | — |
| transform.test | COMPILE | 0.202568 | 0.489371 | 0.616708 | — | — | — |
| transform_view.test | COMPILE | 0.165415 | 0.402319 | 0.488277 | — | — | — |
| unique.test | COMPILE | 0.174109 | 0.410929 | 0.506358 | — | — | — |
| unpack_args.test | COMPILE | 0.160908 | 0.386599 | 0.475564 | — | — | — |
| upper_bound.test | COMPILE | 0.166500 | 0.380808 | 0.502520 | — | — | — |
| vector.test | COMPILE | 0.190350 | 0.457863 | 0.583525 | — | — | — |
| vector_c.test | COMPILE | 0.168155 | 0.392905 | 0.508694 | — | — | — |
| zip_view.test | COMPILE | 0.233146 | 0.576576 | 0.700309 | — | — | — |
| string.test | RUN | 0.375434 | 1.132701 | 1.025693 | 0.001354 | 0.001364 | 0.001213 |
| issue_69.test | RUN | 0.016939 | 0.044906 | 0.051577 | 0.000655 | 0.000671 | 0.001728 |
| issue_84.test | RUN | 0.033150 | 0.082331 | 0.093496 | 0.000512 | 0.000538 | 0.001331 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 1.036× | 1.052×, 1.019× | 1.012× |
| clang | 1.104× | 1.106×, 1.101× | 0.991× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1363 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43638391827).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| bool.test | 10 | 0.001039s | 0.001033s | 0.001008s | byte equality observed |
| char.test | 10 | 0.000992s | 0.001033s | 0.001014s | byte equality observed |
| char_unsigned.test | 10 | 0.000998s | 0.001001s | 0.000995s | byte equality observed |
| for_each.test | 10 | 0.001019s | 0.001014s | 0.001022s | byte equality observed |
| int.test | 10 | 0.001006s | 0.001031s | 0.001021s | byte equality observed |
| integral_c.test | 10 | 0.000991s | 0.001056s | 0.001018s | byte equality observed |
| integral_c_unsigned.test | 10 | 0.001013s | 0.001057s | 0.000995s | byte equality observed |
| issue_69.test | 10 | 0.000476s | 0.000486s | 0.001017s | byte equality observed |
| issue_84.test | 10 | 0.000465s | 0.000468s | 0.000999s | byte equality observed |
| size_t.test | 10 | 0.001031s | 0.001041s | 0.001012s | byte equality observed |
| string.test | 10 | 0.001023s | 0.001049s | 0.000998s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43638391827).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
