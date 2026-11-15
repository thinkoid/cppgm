# libs/mpl/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| increased_arity.test | COMPILE | 0.312053 | 0.849259 | 0.823756 | — | — | — |
| largest_int.test | COMPILE | 0.101772 | 0.246033 | 0.282516 | — | — | — |
| msvc_is_class.test | COMPILE | 0.011113 | 0.030026 | 0.034038 | — | — | — |
| template_arity.test | COMPILE | 0.095788 | 0.246031 | 0.277975 | — | — | — |
| is_seq.test | COMPILE | 0.004208 | 0.010346 | 0.022590 | — | — | — |
| token_equal.test | COMPILE | 0.004641 | 0.010840 | 0.022819 | — | — | — |
| advance.test | COMPILE | 0.108903 | 0.265950 | 0.323794 | — | — | — |
| always.test | COMPILE | 0.111641 | 0.277053 | 0.329330 | — | — | — |
| apply.test | COMPILE | 0.121820 | 0.292977 | 0.350669 | — | — | — |
| apply_wrap.test | COMPILE | 0.103556 | 0.241100 | 0.292851 | — | — | — |
| arithmetic.test | COMPILE | 0.111633 | 0.277076 | 0.337151 | — | — | — |
| as_sequence.test | COMPILE | 0.122467 | 0.302540 | 0.361768 | — | — | — |
| assert.test | COMPILE | 0.027661 | 0.055087 | 0.066352 | — | — | — |
| at.test | COMPILE | 0.123959 | 0.295270 | 0.350142 | — | — | — |
| back.test | COMPILE | 0.116942 | 0.280997 | 0.330369 | — | — | — |
| bind.test | COMPILE | 0.116389 | 0.268363 | 0.327160 | — | — | — |
| bitwise.test | COMPILE | 0.114986 | 0.277055 | 0.334965 | — | — | — |
| bool.test | RUN | 0.102537 | 0.245885 | 0.298524 | 0.001171 | 0.001202 | 0.001278 |
| comparison.test | COMPILE | 0.111046 | 0.276915 | 0.318180 | — | — | — |
| contains.test | COMPILE | 0.133150 | 0.333828 | 0.380625 | — | — | — |
| copy.test | COMPILE | 0.164440 | 0.401495 | 0.468732 | — | — | — |
| copy_if.test | COMPILE | 0.143260 | 0.356891 | 0.425416 | — | — | — |
| count.test | COMPILE | 0.138535 | 0.334357 | 0.398312 | — | — | — |
| count_if.test | COMPILE | 0.143183 | 0.350251 | 0.416077 | — | — | — |
| deque.test | COMPILE | 0.139138 | 0.341660 | 0.397528 | — | — | — |
| distance.test | COMPILE | 0.128365 | 0.305075 | 0.370617 | — | — | — |
| empty.test | COMPILE | 0.113015 | 0.272860 | 0.323330 | — | — | — |
| equal.test | COMPILE | 0.132990 | 0.324799 | 0.375955 | — | — | — |
| erase.test | COMPILE | 0.147765 | 0.371050 | 0.437968 | — | — | — |
| erase_range.test | COMPILE | 0.145192 | 0.352688 | 0.418294 | — | — | — |
| eval_if.test | COMPILE | 0.103846 | 0.251481 | 0.300343 | — | — | — |
| filter_view.test | COMPILE | 0.139839 | 0.348465 | 0.410024 | — | — | — |
| find.test | COMPILE | 0.138707 | 0.339242 | 0.392676 | — | — | — |
| find_if.test | COMPILE | 0.143328 | 0.346796 | 0.411578 | — | — | — |
| fold.test | COMPILE | 0.154177 | 0.360334 | 0.435639 | — | — | — |
| for_each.test | RUN | 0.217950 | 0.525266 | 0.677403 | 0.001310 | 0.001287 | 0.001306 |
| front.test | COMPILE | 0.113801 | 0.292246 | 0.335333 | — | — | — |
| get_tag_def.test | COMPILE | 0.102346 | 0.246119 | 0.302158 | — | — | — |
| has_xxx.test | COMPILE | 0.114307 | 0.263197 | 0.332134 | — | — | — |
| identity.test | COMPILE | 0.117900 | 0.286851 | 0.329450 | — | — | — |
| if.test | COMPILE | 0.101590 | 0.246790 | 0.289821 | — | — | — |
| index_of.test | COMPILE | 0.130147 | 0.322262 | 0.380960 | — | — | — |
| inherit.test | COMPILE | 0.108711 | 0.255766 | 0.309847 | — | — | — |
| insert.test | COMPILE | 0.154901 | 0.382368 | 0.451362 | — | — | — |
| insert_range.test | COMPILE | 0.205695 | 0.510170 | 0.641637 | — | — | — |
| int.test | RUN | 0.107643 | 0.268120 | 0.327634 | 0.001354 | 0.001206 | 0.001403 |
| char.test | RUN | 0.109931 | 0.281773 | 0.327930 | 0.001186 | 0.001261 | 0.001145 |
| char_unsigned.test | RUN | 0.114558 | 0.275109 | 0.330436 | 0.001138 | 0.001477 | 0.001233 |
| integral_c.test | RUN | 0.130060 | 0.358560 | 0.400228 | 0.001135 | 0.001501 | 0.001206 |
| integral_c_unsigned.test | RUN | 0.126069 | 0.355283 | 0.403966 | 0.001219 | 0.001259 | 0.001128 |
| is_placeholder.test | COMPILE | 0.105496 | 0.246918 | 0.302778 | — | — | — |
| is_sequence.test | COMPILE | 0.127985 | 0.301385 | 0.355223 | — | — | — |
| iterator_tags.test | COMPILE | 0.108286 | 0.258939 | 0.300187 | — | — | — |
| joint_view.test | COMPILE | 0.137153 | 0.348548 | 0.408304 | — | — | — |
| lambda.test | COMPILE | 0.129541 | 0.316435 | 0.378060 | — | — | — |
| lambda_args.test | COMPILE | 0.124928 | 0.302393 | 0.380300 | — | — | — |
| list.test | COMPILE | 0.130254 | 0.316262 | 0.360897 | — | — | — |
| list_c.test | COMPILE | 0.129581 | 0.306546 | 0.382659 | — | — | — |
| logical.test | COMPILE | 0.108312 | 0.247647 | 0.290885 | — | — | — |
| lower_bound.test | COMPILE | 0.132655 | 0.322868 | 0.377525 | — | — | — |
| map.test | COMPILE | 0.160620 | 0.404396 | 0.477217 | — | — | — |
| max_element.test | COMPILE | 0.128546 | 0.303926 | 0.366944 | — | — | — |
| min_max.test | COMPILE | 0.110095 | 0.263132 | 0.308362 | — | — | — |
| multiset.test | COMPILE | 0.139612 | 0.346761 | 0.398449 | — | — | — |
| next.test | COMPILE | 0.104072 | 0.247189 | 0.298471 | — | — | — |
| no_has_xxx.test | COMPILE | 0.113159 | 0.262990 | 0.330442 | — | — | — |
| numeric_ops.test | COMPILE | 0.121427 | 0.303004 | 0.350854 | — | — | — |
| pair_view.test | COMPILE | 0.145630 | 0.342376 | 0.403444 | — | — | — |
| partition.test | COMPILE | 0.154780 | 0.380765 | 0.443759 | — | — | — |
| pop_front.test | COMPILE | 0.127785 | 0.305765 | 0.355423 | — | — | — |
| push_back.test | COMPILE | 0.106578 | 0.259968 | 0.305022 | — | — | — |
| push_front.test | COMPILE | 0.129671 | 0.307391 | 0.364725 | — | — | — |
| quote.test | COMPILE | 0.106126 | 0.248493 | 0.297697 | — | — | — |
| range_c.test | COMPILE | 0.132914 | 0.331733 | 0.389669 | — | — | — |
| remove.test | COMPILE | 0.142532 | 0.345499 | 0.405545 | — | — | — |
| remove_if.test | COMPILE | 0.142607 | 0.357042 | 0.417656 | — | — | — |
| replace.test | COMPILE | 0.155943 | 0.386595 | 0.435321 | — | — | — |
| replace_if.test | COMPILE | 0.157808 | 0.393436 | 0.459635 | — | — | — |
| reverse.test | COMPILE | 0.149331 | 0.370198 | 0.429677 | — | — | — |
| same_as.test | COMPILE | 0.112279 | 0.270380 | 0.316130 | — | — | — |
| set.test | COMPILE | 0.201435 | 0.507064 | 0.631903 | — | — | — |
| set_c.test | COMPILE | 0.146780 | 0.348916 | 0.425554 | — | — | — |
| single_view.test | COMPILE | 0.130018 | 0.332945 | 0.383722 | — | — | — |
| size.test | COMPILE | 0.128542 | 0.300095 | 0.356702 | — | — | — |
| size_t.test | RUN | 0.110688 | 0.277178 | 0.340788 | 0.001144 | 0.001369 | 0.001237 |
| sizeof.test | COMPILE | 0.103028 | 0.244677 | 0.303053 | — | — | — |
| sort.test | COMPILE | 0.164955 | 0.409786 | 0.482980 | — | — | — |
| stable_partition.test | COMPILE | 0.162515 | 0.373436 | 0.453430 | — | — | — |
| transform.test | COMPILE | 0.166698 | 0.412128 | 0.486875 | — | — | — |
| transform_view.test | COMPILE | 0.137739 | 0.328756 | 0.389951 | — | — | — |
| unique.test | COMPILE | 0.142508 | 0.347785 | 0.406012 | — | — | — |
| unpack_args.test | COMPILE | 0.131602 | 0.317657 | 0.374079 | — | — | — |
| upper_bound.test | COMPILE | 0.136452 | 0.321810 | 0.379895 | — | — | — |
| vector.test | COMPILE | 0.154179 | 0.383984 | 0.457179 | — | — | — |
| vector_c.test | COMPILE | 0.135898 | 0.319874 | 0.387737 | — | — | — |
| zip_view.test | COMPILE | 0.193397 | 0.489047 | 0.561563 | — | — | — |
| string.test | RUN | 0.309124 | 0.972495 | 0.851104 | 0.000956 | 0.001040 | 0.000854 |
| issue_69.test | RUN | 0.010888 | 0.038025 | 0.038870 | 0.000476 | 0.000529 | 0.001145 |
| issue_84.test | RUN | 0.032257 | 0.070149 | 0.073744 | 0.000421 | 0.000371 | 0.000930 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 1.000× | 0.997×, 1.003× | 1.007× |
| clang | 1.107× | 1.104×, 1.110× | 0.999× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1364 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/43740486413).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| bool.test | 10 | 0.000824s | 0.000807s | 0.000807s | byte equality observed |
| char.test | 10 | 0.000830s | 0.000809s | 0.000805s | byte equality observed |
| char_unsigned.test | 10 | 0.000823s | 0.000785s | 0.000828s | byte equality observed |
| for_each.test | 10 | 0.000815s | 0.000816s | 0.000837s | byte equality observed |
| int.test | 10 | 0.000796s | 0.000813s | 0.000854s | byte equality observed |
| integral_c.test | 10 | 0.000798s | 0.000834s | 0.000815s | byte equality observed |
| integral_c_unsigned.test | 10 | 0.000808s | 0.000820s | 0.000781s | byte equality observed |
| issue_69.test | 10 | 0.000363s | 0.000365s | 0.000812s | byte equality observed |
| issue_84.test | 10 | 0.000346s | 0.000352s | 0.000760s | byte equality observed |
| size_t.test | 10 | 0.000808s | 0.000795s | 0.000794s | byte equality observed |
| string.test | 10 | 0.000811s | 0.000812s | 0.000814s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/43740486413).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
