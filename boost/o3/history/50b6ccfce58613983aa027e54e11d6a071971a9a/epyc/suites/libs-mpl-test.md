# libs/mpl/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| increased_arity.test | COMPILE | 0.362973 | 1.019283 | 1.032949 | — | — | — |
| largest_int.test | COMPILE | 0.124627 | 0.279152 | 0.354097 | — | — | — |
| msvc_is_class.test | COMPILE | 0.015660 | 0.038031 | 0.041528 | — | — | — |
| template_arity.test | COMPILE | 0.121764 | 0.275074 | 0.336901 | — | — | — |
| is_seq.test | COMPILE | 0.005194 | 0.013805 | 0.026919 | — | — | — |
| token_equal.test | COMPILE | 0.005275 | 0.014141 | 0.027116 | — | — | — |
| advance.test | COMPILE | 0.134968 | 0.312239 | 0.413253 | — | — | — |
| always.test | COMPILE | 0.140133 | 0.321767 | 0.413507 | — | — | — |
| apply.test | COMPILE | 0.152317 | 0.340522 | 0.450174 | — | — | — |
| apply_wrap.test | COMPILE | 0.128683 | 0.284379 | 0.381459 | — | — | — |
| arithmetic.test | COMPILE | 0.134256 | 0.335358 | 0.405025 | — | — | — |
| as_sequence.test | COMPILE | 0.150829 | 0.361711 | 0.451653 | — | — | — |
| assert.test | COMPILE | 0.035700 | 0.070947 | 0.086150 | — | — | — |
| at.test | COMPILE | 0.146821 | 0.354589 | 0.452322 | — | — | — |
| back.test | COMPILE | 0.138409 | 0.342455 | 0.420883 | — | — | — |
| bind.test | COMPILE | 0.136591 | 0.326791 | 0.425675 | — | — | — |
| bitwise.test | COMPILE | 0.138824 | 0.329082 | 0.428639 | — | — | — |
| bool.test | RUN | 0.123258 | 0.290838 | 0.379065 | 0.001254 | 0.001530 | 0.001835 |
| comparison.test | COMPILE | 0.133037 | 0.321964 | 0.405911 | — | — | — |
| contains.test | COMPILE | 0.163641 | 0.396727 | 0.496635 | — | — | — |
| copy.test | COMPILE | 0.198424 | 0.469843 | 0.612209 | — | — | — |
| copy_if.test | COMPILE | 0.175774 | 0.423341 | 0.538289 | — | — | — |
| count.test | COMPILE | 0.167379 | 0.385846 | 0.522998 | — | — | — |
| count_if.test | COMPILE | 0.176658 | 0.411551 | 0.547105 | — | — | — |
| deque.test | COMPILE | 0.169514 | 0.404405 | 0.500726 | — | — | — |
| distance.test | COMPILE | 0.154437 | 0.364591 | 0.471099 | — | — | — |
| empty.test | COMPILE | 0.139482 | 0.321042 | 0.418699 | — | — | — |
| equal.test | COMPILE | 0.159749 | 0.374159 | 0.494344 | — | — | — |
| erase.test | COMPILE | 0.179890 | 0.437538 | 0.564154 | — | — | — |
| erase_range.test | COMPILE | 0.170664 | 0.414362 | 0.526308 | — | — | — |
| eval_if.test | COMPILE | 0.129212 | 0.303396 | 0.398733 | — | — | — |
| filter_view.test | COMPILE | 0.174410 | 0.412910 | 0.534796 | — | — | — |
| find.test | COMPILE | 0.164466 | 0.406928 | 0.500088 | — | — | — |
| find_if.test | COMPILE | 0.172372 | 0.409581 | 0.521512 | — | — | — |
| fold.test | COMPILE | 0.176489 | 0.426327 | 0.562345 | — | — | — |
| for_each.test | RUN | 0.253516 | 0.607693 | 0.863898 | 0.001565 | 0.001810 | 0.001798 |
| front.test | COMPILE | 0.140052 | 0.342251 | 0.431545 | — | — | — |
| get_tag_def.test | COMPILE | 0.127756 | 0.282856 | 0.401908 | — | — | — |
| has_xxx.test | COMPILE | 0.135475 | 0.314889 | 0.426721 | — | — | — |
| identity.test | COMPILE | 0.137730 | 0.328515 | 0.415336 | — | — | — |
| if.test | COMPILE | 0.118312 | 0.280741 | 0.356343 | — | — | — |
| index_of.test | COMPILE | 0.162742 | 0.391384 | 0.475080 | — | — | — |
| inherit.test | COMPILE | 0.134731 | 0.298373 | 0.386074 | — | — | — |
| insert.test | COMPILE | 0.183639 | 0.433692 | 0.584595 | — | — | — |
| insert_range.test | COMPILE | 0.254710 | 0.598687 | 0.833008 | — | — | — |
| int.test | RUN | 0.129832 | 0.334787 | 0.435644 | 0.001642 | 0.001554 | 0.001464 |
| char.test | RUN | 0.136387 | 0.318350 | 0.420929 | 0.001747 | 0.001578 | 0.001558 |
| char_unsigned.test | RUN | 0.134240 | 0.325407 | 0.403663 | 0.001645 | 0.001898 | 0.001748 |
| integral_c.test | RUN | 0.147343 | 0.420127 | 0.526019 | 0.001790 | 0.001765 | 0.001566 |
| integral_c_unsigned.test | RUN | 0.150279 | 0.412831 | 0.525197 | 0.001537 | 0.001770 | 0.001406 |
| is_placeholder.test | COMPILE | 0.127581 | 0.277619 | 0.354616 | — | — | — |
| is_sequence.test | COMPILE | 0.151103 | 0.356895 | 0.466609 | — | — | — |
| iterator_tags.test | COMPILE | 0.129565 | 0.307575 | 0.410629 | — | — | — |
| joint_view.test | COMPILE | 0.169866 | 0.401345 | 0.527100 | — | — | — |
| lambda.test | COMPILE | 0.162038 | 0.374548 | 0.496617 | — | — | — |
| lambda_args.test | COMPILE | 0.153971 | 0.346434 | 0.486617 | — | — | — |
| list.test | COMPILE | 0.156438 | 0.379086 | 0.490759 | — | — | — |
| list_c.test | COMPILE | 0.160947 | 0.362332 | 0.497803 | — | — | — |
| logical.test | COMPILE | 0.126957 | 0.284989 | 0.393397 | — | — | — |
| lower_bound.test | COMPILE | 0.165325 | 0.381834 | 0.477926 | — | — | — |
| map.test | COMPILE | 0.189841 | 0.469556 | 0.610351 | — | — | — |
| max_element.test | COMPILE | 0.157350 | 0.364969 | 0.471574 | — | — | — |
| min_max.test | COMPILE | 0.131842 | 0.300315 | 0.415005 | — | — | — |
| multiset.test | COMPILE | 0.168856 | 0.406887 | 0.512428 | — | — | — |
| next.test | COMPILE | 0.126574 | 0.290209 | 0.389351 | — | — | — |
| no_has_xxx.test | COMPILE | 0.135002 | 0.305756 | 0.419548 | — | — | — |
| numeric_ops.test | COMPILE | 0.148633 | 0.299816 | 0.467146 | — | — | — |
| pair_view.test | COMPILE | 0.174686 | 0.385181 | 0.512601 | — | — | — |
| partition.test | COMPILE | 0.188118 | 0.430239 | 0.575108 | — | — | — |
| pop_front.test | COMPILE | 0.156510 | 0.356073 | 0.466088 | — | — | — |
| push_back.test | COMPILE | 0.133092 | 0.307203 | 0.407386 | — | — | — |
| push_front.test | COMPILE | 0.154381 | 0.367362 | 0.464216 | — | — | — |
| quote.test | COMPILE | 0.127213 | 0.291206 | 0.387202 | — | — | — |
| range_c.test | COMPILE | 0.160478 | 0.387139 | 0.489330 | — | — | — |
| remove.test | COMPILE | 0.171870 | 0.397734 | 0.514958 | — | — | — |
| remove_if.test | COMPILE | 0.175769 | 0.418135 | 0.539022 | — | — | — |
| replace.test | COMPILE | 0.188454 | 0.452213 | 0.567413 | — | — | — |
| replace_if.test | COMPILE | 0.186798 | 0.464303 | 0.574336 | — | — | — |
| reverse.test | COMPILE | 0.179809 | 0.427902 | 0.552782 | — | — | — |
| same_as.test | COMPILE | 0.137264 | 0.327221 | 0.411655 | — | — | — |
| set.test | COMPILE | 0.245266 | 0.598471 | 0.830974 | — | — | — |
| set_c.test | COMPILE | 0.174441 | 0.419619 | 0.543517 | — | — | — |
| single_view.test | COMPILE | 0.161780 | 0.377628 | 0.499884 | — | — | — |
| size.test | COMPILE | 0.151836 | 0.358128 | 0.459258 | — | — | — |
| size_t.test | RUN | 0.134571 | 0.327413 | 0.409334 | 0.001550 | 0.001754 | 0.001744 |
| sizeof.test | COMPILE | 0.127085 | 0.287390 | 0.376227 | — | — | — |
| sort.test | COMPILE | 0.200556 | 0.456017 | 0.588823 | — | — | — |
| stable_partition.test | COMPILE | 0.191350 | 0.432428 | 0.571678 | — | — | — |
| transform.test | COMPILE | 0.204459 | 0.476900 | 0.626308 | — | — | — |
| transform_view.test | COMPILE | 0.169753 | 0.382630 | 0.490464 | — | — | — |
| unique.test | COMPILE | 0.170592 | 0.414043 | 0.516067 | — | — | — |
| unpack_args.test | COMPILE | 0.160191 | 0.382161 | 0.472263 | — | — | — |
| upper_bound.test | COMPILE | 0.161204 | 0.379608 | 0.475246 | — | — | — |
| vector.test | COMPILE | 0.193077 | 0.446563 | 0.590907 | — | — | — |
| vector_c.test | COMPILE | 0.166350 | 0.389659 | 0.509854 | — | — | — |
| zip_view.test | COMPILE | 0.228259 | 0.572357 | 0.732973 | — | — | — |
| string.test | RUN | 0.378503 | 1.088852 | 1.047586 | 0.001302 | 0.001343 | 0.001257 |
| issue_69.test | RUN | 0.017178 | 0.045486 | 0.045788 | 0.000616 | 0.000574 | 0.001553 |
| issue_84.test | RUN | 0.035625 | 0.089024 | 0.086416 | 0.000526 | 0.000582 | 0.001273 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 1.006× | 1.008×, 1.004× | 1.027× |
| clang | 1.058×† | 0.997×, 1.119× | 0.994× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1363 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/43916760662).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| bool.test | 10 | 0.001016s | 0.001002s | 0.000976s | byte equality observed |
| char.test | 10 | 0.001028s | 0.000995s | 0.000991s | byte equality observed |
| char_unsigned.test | 10 | 0.001020s | 0.001028s | 0.001004s | byte equality observed |
| for_each.test | 10 | 0.001032s | 0.001012s | 0.001038s | byte equality observed |
| int.test | 10 | 0.001001s | 0.001000s | 0.001043s | byte equality observed |
| integral_c.test | 10 | 0.000995s | 0.001014s | 0.001007s | byte equality observed |
| integral_c_unsigned.test | 10 | 0.001026s | 0.000987s | 0.001006s | byte equality observed |
| issue_69.test | 10 | 0.000472s | 0.000470s | 0.000983s | byte equality observed |
| issue_84.test | 10 | 0.000468s | 0.000461s | 0.001005s | byte equality observed |
| size_t.test | 10 | 0.001003s | 0.001048s | 0.000998s | byte equality observed |
| string.test | 10 | 0.001022s | 0.001022s | 0.000997s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/43916760662).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
