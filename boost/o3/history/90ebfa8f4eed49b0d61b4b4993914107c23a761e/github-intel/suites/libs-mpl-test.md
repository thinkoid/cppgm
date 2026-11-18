# libs/mpl/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| increased_arity.test | COMPILE | 0.418031 | 1.229209 | 1.166766 | — | — | — |
| largest_int.test | COMPILE | 0.139174 | 0.330747 | 0.391740 | — | — | — |
| msvc_is_class.test | COMPILE | 0.016016 | 0.041730 | 0.044256 | — | — | — |
| template_arity.test | COMPILE | 0.139112 | 0.322633 | 0.384863 | — | — | — |
| is_seq.test | COMPILE | 0.005031 | 0.014535 | 0.027326 | — | — | — |
| token_equal.test | COMPILE | 0.005299 | 0.014878 | 0.027752 | — | — | — |
| advance.test | COMPILE | 0.153313 | 0.363552 | 0.440884 | — | — | — |
| always.test | COMPILE | 0.152054 | 0.377408 | 0.441539 | — | — | — |
| apply.test | COMPILE | 0.169620 | 0.397501 | 0.475455 | — | — | — |
| apply_wrap.test | COMPILE | 0.142330 | 0.336078 | 0.405491 | — | — | — |
| arithmetic.test | COMPILE | 0.154165 | 0.387489 | 0.455634 | — | — | — |
| as_sequence.test | COMPILE | 0.167651 | 0.420918 | 0.469532 | — | — | — |
| assert.test | COMPILE | 0.038387 | 0.082070 | 0.086223 | — | — | — |
| at.test | COMPILE | 0.165295 | 0.409329 | 0.471068 | — | — | — |
| back.test | COMPILE | 0.157838 | 0.389187 | 0.459986 | — | — | — |
| bind.test | COMPILE | 0.151720 | 0.367613 | 0.448863 | — | — | — |
| bitwise.test | COMPILE | 0.153570 | 0.382491 | 0.451427 | — | — | — |
| bool.test | RUN | 0.140277 | 0.339518 | 0.420832 | 0.001443 | 0.001561 | 0.001756 |
| comparison.test | COMPILE | 0.153154 | 0.384651 | 0.452911 | — | — | — |
| contains.test | COMPILE | 0.185051 | 0.463061 | 0.527489 | — | — | — |
| copy.test | COMPILE | 0.220828 | 0.555730 | 0.640988 | — | — | — |
| copy_if.test | COMPILE | 0.197877 | 0.497986 | 0.576485 | — | — | — |
| count.test | COMPILE | 0.190750 | 0.454043 | 0.540241 | — | — | — |
| count_if.test | COMPILE | 0.199758 | 0.472836 | 0.575083 | — | — | — |
| deque.test | COMPILE | 0.189371 | 0.467312 | 0.540816 | — | — | — |
| distance.test | COMPILE | 0.174827 | 0.428707 | 0.500363 | — | — | — |
| empty.test | COMPILE | 0.154159 | 0.371888 | 0.429070 | — | — | — |
| equal.test | COMPILE | 0.178613 | 0.442748 | 0.512023 | — | — | — |
| erase.test | COMPILE | 0.204090 | 0.516075 | 0.599350 | — | — | — |
| erase_range.test | COMPILE | 0.194601 | 0.495003 | 0.565694 | — | — | — |
| eval_if.test | COMPILE | 0.141812 | 0.351985 | 0.411035 | — | — | — |
| filter_view.test | COMPILE | 0.192465 | 0.487004 | 0.563106 | — | — | — |
| find.test | COMPILE | 0.188071 | 0.462292 | 0.543688 | — | — | — |
| find_if.test | COMPILE | 0.192348 | 0.489946 | 0.560166 | — | — | — |
| fold.test | COMPILE | 0.201392 | 0.498704 | 0.596485 | — | — | — |
| for_each.test | RUN | 0.291090 | 0.723952 | 0.934641 | 0.001567 | 0.001466 | 0.001596 |
| front.test | COMPILE | 0.158379 | 0.392584 | 0.460297 | — | — | — |
| get_tag_def.test | COMPILE | 0.139613 | 0.339300 | 0.405599 | — | — | — |
| has_xxx.test | COMPILE | 0.151896 | 0.364287 | 0.465919 | — | — | — |
| identity.test | COMPILE | 0.159248 | 0.379597 | 0.451873 | — | — | — |
| if.test | COMPILE | 0.140519 | 0.342519 | 0.406412 | — | — | — |
| index_of.test | COMPILE | 0.181484 | 0.442322 | 0.522421 | — | — | — |
| inherit.test | COMPILE | 0.148473 | 0.356208 | 0.424362 | — | — | — |
| insert.test | COMPILE | 0.205712 | 0.530856 | 0.610216 | — | — | — |
| insert_range.test | COMPILE | 0.277176 | 0.708014 | 0.867486 | — | — | — |
| int.test | RUN | 0.148331 | 0.382686 | 0.450783 | 0.001846 | 0.001450 | 0.001482 |
| char.test | RUN | 0.148281 | 0.380874 | 0.451089 | 0.001604 | 0.001534 | 0.001420 |
| char_unsigned.test | RUN | 0.147636 | 0.380220 | 0.444315 | 0.001509 | 0.001618 | 0.001608 |
| integral_c.test | RUN | 0.166525 | 0.480667 | 0.548042 | 0.001444 | 0.001509 | 0.001567 |
| integral_c_unsigned.test | RUN | 0.168700 | 0.483016 | 0.553427 | 0.001540 | 0.001413 | 0.001570 |
| is_placeholder.test | COMPILE | 0.142199 | 0.346034 | 0.412181 | — | — | — |
| is_sequence.test | COMPILE | 0.172341 | 0.415962 | 0.472913 | — | — | — |
| iterator_tags.test | COMPILE | 0.150431 | 0.350563 | 0.407648 | — | — | — |
| joint_view.test | COMPILE | 0.197084 | 0.478923 | 0.542431 | — | — | — |
| lambda.test | COMPILE | 0.181630 | 0.436632 | 0.533301 | — | — | — |
| lambda_args.test | COMPILE | 0.166899 | 0.418025 | 0.522011 | — | — | — |
| list.test | COMPILE | 0.179902 | 0.442052 | 0.507078 | — | — | — |
| list_c.test | COMPILE | 0.177159 | 0.436452 | 0.518280 | — | — | — |
| logical.test | COMPILE | 0.141192 | 0.346797 | 0.411980 | — | — | — |
| lower_bound.test | COMPILE | 0.184007 | 0.462639 | 0.523803 | — | — | — |
| map.test | COMPILE | 0.216666 | 0.563769 | 0.658686 | — | — | — |
| max_element.test | COMPILE | 0.175584 | 0.432475 | 0.506274 | — | — | — |
| min_max.test | COMPILE | 0.149393 | 0.357321 | 0.429275 | — | — | — |
| multiset.test | COMPILE | 0.188763 | 0.483489 | 0.553220 | — | — | — |
| next.test | COMPILE | 0.141464 | 0.342187 | 0.407061 | — | — | — |
| no_has_xxx.test | COMPILE | 0.155166 | 0.363279 | 0.447636 | — | — | — |
| numeric_ops.test | COMPILE | 0.167987 | 0.424651 | 0.479816 | — | — | — |
| pair_view.test | COMPILE | 0.195128 | 0.475587 | 0.560848 | — | — | — |
| partition.test | COMPILE | 0.209385 | 0.522226 | 0.615961 | — | — | — |
| pop_front.test | COMPILE | 0.173782 | 0.429339 | 0.490717 | — | — | — |
| push_back.test | COMPILE | 0.146886 | 0.357573 | 0.423187 | — | — | — |
| push_front.test | COMPILE | 0.177009 | 0.422201 | 0.500867 | — | — | — |
| quote.test | COMPILE | 0.146841 | 0.341068 | 0.411548 | — | — | — |
| range_c.test | COMPILE | 0.182252 | 0.458696 | 0.524101 | — | — | — |
| remove.test | COMPILE | 0.191016 | 0.476449 | 0.549753 | — | — | — |
| remove_if.test | COMPILE | 0.195954 | 0.499725 | 0.575278 | — | — | — |
| replace.test | COMPILE | 0.213097 | 0.532583 | 0.618643 | — | — | — |
| replace_if.test | COMPILE | 0.212217 | 0.555448 | 0.621789 | — | — | — |
| reverse.test | COMPILE | 0.200207 | 0.509235 | 0.592654 | — | — | — |
| same_as.test | COMPILE | 0.152543 | 0.369084 | 0.439217 | — | — | — |
| set.test | COMPILE | 0.265611 | 0.714786 | 0.863604 | — | — | — |
| set_c.test | COMPILE | 0.197292 | 0.484771 | 0.585000 | — | — | — |
| single_view.test | COMPILE | 0.181322 | 0.445728 | 0.523676 | — | — | — |
| size.test | COMPILE | 0.170580 | 0.424754 | 0.487932 | — | — | — |
| size_t.test | RUN | 0.151457 | 0.394834 | 0.440343 | 0.001456 | 0.001553 | 0.001672 |
| sizeof.test | COMPILE | 0.142474 | 0.344130 | 0.391067 | — | — | — |
| sort.test | COMPILE | 0.224798 | 0.556111 | 0.645756 | — | — | — |
| stable_partition.test | COMPILE | 0.212844 | 0.528553 | 0.603869 | — | — | — |
| transform.test | COMPILE | 0.224517 | 0.569531 | 0.671789 | — | — | — |
| transform_view.test | COMPILE | 0.183437 | 0.463507 | 0.531599 | — | — | — |
| unique.test | COMPILE | 0.191202 | 0.476521 | 0.556712 | — | — | — |
| unpack_args.test | COMPILE | 0.179790 | 0.445742 | 0.515181 | — | — | — |
| upper_bound.test | COMPILE | 0.185668 | 0.443103 | 0.507035 | — | — | — |
| vector.test | COMPILE | 0.206707 | 0.545515 | 0.626946 | — | — | — |
| vector_c.test | COMPILE | 0.182048 | 0.435653 | 0.538214 | — | — | — |
| zip_view.test | COMPILE | 0.258911 | 0.672317 | 0.778561 | — | — | — |
| string.test | RUN | 0.444641 | 1.294868 | 1.158554 | 0.001179 | 0.001209 | 0.001135 |
| issue_69.test | RUN | 0.017781 | 0.052732 | 0.048516 | 0.000663 | 0.000709 | 0.001460 |
| issue_84.test | RUN | 0.037225 | 0.095829 | 0.096452 | 0.000503 | 0.000463 | 0.001198 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.992× | 0.998×, 0.986× | 1.018× |
| clang | 1.107× | 1.114×, 1.101× | 0.987× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1361 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44260407509).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| bool.test | 10 | 0.001028s | 0.000989s | 0.001051s | byte equality observed |
| char.test | 10 | 0.001047s | 0.001007s | 0.001041s | byte equality observed |
| char_unsigned.test | 10 | 0.001015s | 0.001062s | 0.001025s | byte equality observed |
| for_each.test | 10 | 0.001014s | 0.001040s | 0.001068s | byte equality observed |
| int.test | 10 | 0.001034s | 0.001006s | 0.001049s | byte equality observed |
| integral_c.test | 10 | 0.001018s | 0.001001s | 0.001027s | byte equality observed |
| integral_c_unsigned.test | 10 | 0.001055s | 0.001010s | 0.001010s | byte equality observed |
| issue_69.test | 10 | 0.000458s | 0.000459s | 0.001011s | byte equality observed |
| issue_84.test | 10 | 0.000468s | 0.000455s | 0.001010s | byte equality observed |
| size_t.test | 10 | 0.001026s | 0.001008s | 0.001040s | byte equality observed |
| string.test | 10 | 0.001057s | 0.001021s | 0.001028s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44260407509).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
