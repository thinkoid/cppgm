# libs/mpl/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| increased_arity.test | COMPILE | 0.490716 | 1.387448 | 1.516988 | — | — | — |
| largest_int.test | COMPILE | 0.167308 | 0.381896 | 0.590487 | — | — | — |
| msvc_is_class.test | COMPILE | 0.019827 | 0.048152 | 0.055115 | — | — | — |
| template_arity.test | COMPILE | 0.165252 | 0.377928 | 0.582651 | — | — | — |
| is_seq.test | COMPILE | 0.006096 | 0.017146 | 0.029041 | — | — | — |
| token_equal.test | COMPILE | 0.006115 | 0.017316 | 0.029428 | — | — | — |
| advance.test | COMPILE | 0.181738 | 0.409793 | 0.566782 | — | — | — |
| always.test | COMPILE | 0.187060 | 0.439852 | 0.640525 | — | — | — |
| apply.test | COMPILE | 0.202822 | 0.464052 | 0.686355 | — | — | — |
| apply_wrap.test | COMPILE | 0.169453 | 0.403514 | 0.584027 | — | — | — |
| arithmetic.test | COMPILE | 0.185901 | 0.452570 | 0.647385 | — | — | — |
| as_sequence.test | COMPILE | 0.204480 | 0.496677 | 0.693359 | — | — | — |
| assert.test | COMPILE | 0.046652 | 0.095621 | 0.108197 | — | — | — |
| at.test | COMPILE | 0.199578 | 0.474184 | 0.687378 | — | — | — |
| back.test | COMPILE | 0.189833 | 0.453313 | 0.663063 | — | — | — |
| bind.test | COMPILE | 0.183881 | 0.432228 | 0.633637 | — | — | — |
| bitwise.test | COMPILE | 0.190111 | 0.448027 | 0.650446 | — | — | — |
| bool.test | RUN | 0.168529 | 0.390763 | 0.580208 | 0.001960 | 0.002182 | 0.001945 |
| comparison.test | COMPILE | 0.184976 | 0.426835 | 0.648627 | — | — | — |
| contains.test | COMPILE | 0.219978 | 0.549445 | 0.757830 | — | — | — |
| copy.test | COMPILE | 0.267699 | 0.654602 | 0.906633 | — | — | — |
| copy_if.test | COMPILE | 0.236069 | 0.565177 | 0.808672 | — | — | — |
| count.test | COMPILE | 0.228718 | 0.514139 | 0.815053 | — | — | — |
| count_if.test | COMPILE | 0.234640 | 0.559455 | 0.795362 | — | — | — |
| deque.test | COMPILE | 0.228666 | 0.549664 | 0.751184 | — | — | — |
| distance.test | COMPILE | 0.215974 | 0.490772 | 0.703835 | — | — | — |
| empty.test | COMPILE | 0.183489 | 0.434227 | 0.626853 | — | — | — |
| equal.test | COMPILE | 0.216121 | 0.516258 | 0.726740 | — | — | — |
| erase.test | COMPILE | 0.251518 | 0.605661 | 0.847729 | — | — | — |
| erase_range.test | COMPILE | 0.241805 | 0.557338 | 0.786153 | — | — | — |
| eval_if.test | COMPILE | 0.175453 | 0.415512 | 0.611011 | — | — | — |
| filter_view.test | COMPILE | 0.234540 | 0.570215 | 0.782717 | — | — | — |
| find.test | COMPILE | 0.233225 | 0.532406 | 0.755786 | — | — | — |
| find_if.test | COMPILE | 0.231354 | 0.564221 | 0.795299 | — | — | — |
| fold.test | COMPILE | 0.252258 | 0.571703 | 0.824516 | — | — | — |
| for_each.test | RUN | 0.359456 | 0.839058 | 1.303410 | 0.001820 | 0.001854 | 0.002162 |
| front.test | COMPILE | 0.191309 | 0.456880 | 0.643600 | — | — | — |
| get_tag_def.test | COMPILE | 0.171100 | 0.404779 | 0.593748 | — | — | — |
| has_xxx.test | COMPILE | 0.195168 | 0.438844 | 0.649381 | — | — | — |
| identity.test | COMPILE | 0.192966 | 0.438383 | 0.658013 | — | — | — |
| if.test | COMPILE | 0.164766 | 0.391448 | 0.605205 | — | — | — |
| index_of.test | COMPILE | 0.220172 | 0.502126 | 0.720494 | — | — | — |
| inherit.test | COMPILE | 0.174652 | 0.406618 | 0.611325 | — | — | — |
| insert.test | COMPILE | 0.257950 | 0.618757 | 0.880195 | — | — | — |
| insert_range.test | COMPILE | 0.343882 | 0.821498 | 1.263342 | — | — | — |
| int.test | RUN | 0.183074 | 0.446814 | 0.644764 | 0.001829 | 0.001724 | 0.002186 |
| char.test | RUN | 0.182482 | 0.459925 | 0.629541 | 0.001832 | 0.001974 | 0.002140 |
| char_unsigned.test | RUN | 0.186173 | 0.432449 | 0.614605 | 0.001629 | 0.002260 | 0.002067 |
| integral_c.test | RUN | 0.208050 | 0.565123 | 0.798394 | 0.002174 | 0.001714 | 0.002108 |
| integral_c_unsigned.test | RUN | 0.206745 | 0.575061 | 0.785925 | 0.002066 | 0.001766 | 0.001812 |
| is_placeholder.test | COMPILE | 0.169073 | 0.392892 | 0.529311 | — | — | — |
| is_sequence.test | COMPILE | 0.210674 | 0.482686 | 0.663923 | — | — | — |
| iterator_tags.test | COMPILE | 0.174182 | 0.425524 | 0.577993 | — | — | — |
| joint_view.test | COMPILE | 0.233557 | 0.542629 | 0.796965 | — | — | — |
| lambda.test | COMPILE | 0.214900 | 0.500117 | 0.734274 | — | — | — |
| lambda_args.test | COMPILE | 0.206686 | 0.472415 | 0.745142 | — | — | — |
| list.test | COMPILE | 0.212657 | 0.521089 | 0.722901 | — | — | — |
| list_c.test | COMPILE | 0.213595 | 0.506679 | 0.738026 | — | — | — |
| logical.test | COMPILE | 0.173255 | 0.395175 | 0.582375 | — | — | — |
| lower_bound.test | COMPILE | 0.218126 | 0.497454 | 0.737681 | — | — | — |
| map.test | COMPILE | 0.262366 | 0.643606 | 0.927081 | — | — | — |
| max_element.test | COMPILE | 0.209669 | 0.485420 | 0.704150 | — | — | — |
| min_max.test | COMPILE | 0.183742 | 0.427034 | 0.625674 | — | — | — |
| multiset.test | COMPILE | 0.226571 | 0.553757 | 0.776389 | — | — | — |
| next.test | COMPILE | 0.171653 | 0.386954 | 0.583666 | — | — | — |
| no_has_xxx.test | COMPILE | 0.187043 | 0.429170 | 0.623644 | — | — | — |
| numeric_ops.test | COMPILE | 0.203114 | 0.489772 | 0.702347 | — | — | — |
| pair_view.test | COMPILE | 0.233254 | 0.542975 | 0.775470 | — | — | — |
| partition.test | COMPILE | 0.252967 | 0.603765 | 0.876913 | — | — | — |
| pop_front.test | COMPILE | 0.210197 | 0.502406 | 0.705903 | — | — | — |
| push_back.test | COMPILE | 0.178916 | 0.423140 | 0.624988 | — | — | — |
| push_front.test | COMPILE | 0.206559 | 0.497559 | 0.719081 | — | — | — |
| quote.test | COMPILE | 0.171117 | 0.408000 | 0.583926 | — | — | — |
| range_c.test | COMPILE | 0.221374 | 0.515031 | 0.747572 | — | — | — |
| remove.test | COMPILE | 0.230516 | 0.550367 | 0.782436 | — | — | — |
| remove_if.test | COMPILE | 0.237628 | 0.565153 | 0.806881 | — | — | — |
| replace.test | COMPILE | 0.254593 | 0.624737 | 0.876174 | — | — | — |
| replace_if.test | COMPILE | 0.258203 | 0.623750 | 0.879725 | — | — | — |
| reverse.test | COMPILE | 0.243776 | 0.584420 | 0.816382 | — | — | — |
| same_as.test | COMPILE | 0.183239 | 0.416339 | 0.612234 | — | — | — |
| set.test | COMPILE | 0.328563 | 0.833730 | 1.261214 | — | — | — |
| set_c.test | COMPILE | 0.237425 | 0.557098 | 0.822296 | — | — | — |
| single_view.test | COMPILE | 0.213157 | 0.515455 | 0.740860 | — | — | — |
| size.test | COMPILE | 0.211726 | 0.497466 | 0.706574 | — | — | — |
| size_t.test | RUN | 0.179170 | 0.458945 | 0.659602 | 0.001811 | 0.001925 | 0.001918 |
| sizeof.test | COMPILE | 0.166666 | 0.392040 | 0.604563 | — | — | — |
| sort.test | COMPILE | 0.271221 | 0.647644 | 0.923884 | — | — | — |
| stable_partition.test | COMPILE | 0.256946 | 0.610681 | 0.853603 | — | — | — |
| transform.test | COMPILE | 0.264184 | 0.648631 | 0.933225 | — | — | — |
| transform_view.test | COMPILE | 0.220885 | 0.536201 | 0.764438 | — | — | — |
| unique.test | COMPILE | 0.239538 | 0.543962 | 0.786030 | — | — | — |
| unpack_args.test | COMPILE | 0.220034 | 0.505829 | 0.734772 | — | — | — |
| upper_bound.test | COMPILE | 0.219809 | 0.504884 | 0.734869 | — | — | — |
| vector.test | COMPILE | 0.249461 | 0.627652 | 0.868265 | — | — | — |
| vector_c.test | COMPILE | 0.224841 | 0.503568 | 0.746571 | — | — | — |
| zip_view.test | COMPILE | 0.309588 | 0.777262 | 1.039265 | — | — | — |
| string.test | RUN | 0.475511 | 1.409024 | 1.363645 | 0.001520 | 0.001506 | 0.001449 |
| issue_69.test | RUN | 0.023662 | 0.064187 | 0.069698 | 0.000742 | 0.000651 | 0.001963 |
| issue_84.test | RUN | 0.052332 | 0.111786 | 0.132959 | 0.000575 | 0.000612 | 0.001408 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.997× | 1.001×, 0.992× | 1.009× |
| clang | 1.088× | 1.085×, 1.091× | 1.000× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1359 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/43750858933).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| bool.test | 10 | 0.001224s | 0.001244s | 0.001229s | byte equality observed |
| char.test | 10 | 0.001237s | 0.001302s | 0.001238s | byte equality observed |
| char_unsigned.test | 10 | 0.001215s | 0.001253s | 0.001302s | byte equality observed |
| for_each.test | 10 | 0.001267s | 0.001232s | 0.001238s | byte equality observed |
| int.test | 10 | 0.001255s | 0.001247s | 0.001229s | byte equality observed |
| integral_c.test | 10 | 0.001248s | 0.001272s | 0.001246s | byte equality observed |
| integral_c_unsigned.test | 10 | 0.001249s | 0.001216s | 0.001200s | byte equality observed |
| issue_69.test | 10 | 0.000579s | 0.000558s | 0.001189s | byte equality observed |
| issue_84.test | 10 | 0.000562s | 0.000573s | 0.001184s | byte equality observed |
| size_t.test | 10 | 0.001251s | 0.001208s | 0.001221s | byte equality observed |
| string.test | 10 | 0.001239s | 0.001200s | 0.001183s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/43750858933).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
