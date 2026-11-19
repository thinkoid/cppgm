# libs/mpl/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| increased_arity.test | COMPILE | 0.306094 | 0.859015 | 0.823158 | — | — | — |
| largest_int.test | COMPILE | 0.090188 | 0.244333 | 0.278468 | — | — | — |
| msvc_is_class.test | COMPILE | 0.011418 | 0.029959 | 0.033323 | — | — | — |
| template_arity.test | COMPILE | 0.097770 | 0.242474 | 0.273069 | — | — | — |
| is_seq.test | COMPILE | 0.003756 | 0.010642 | 0.022380 | — | — | — |
| token_equal.test | COMPILE | 0.003692 | 0.011777 | 0.022694 | — | — | — |
| advance.test | COMPILE | 0.106947 | 0.276275 | 0.329584 | — | — | — |
| always.test | COMPILE | 0.110537 | 0.279750 | 0.323430 | — | — | — |
| apply.test | COMPILE | 0.113369 | 0.286336 | 0.352686 | — | — | — |
| apply_wrap.test | COMPILE | 0.103012 | 0.247040 | 0.290227 | — | — | — |
| arithmetic.test | COMPILE | 0.110609 | 0.280692 | 0.333117 | — | — | — |
| as_sequence.test | COMPILE | 0.121969 | 0.300986 | 0.361704 | — | — | — |
| assert.test | COMPILE | 0.027125 | 0.056508 | 0.065489 | — | — | — |
| at.test | COMPILE | 0.118085 | 0.301220 | 0.354135 | — | — | — |
| back.test | COMPILE | 0.114228 | 0.288670 | 0.332429 | — | — | — |
| bind.test | COMPILE | 0.109826 | 0.273024 | 0.324388 | — | — | — |
| bitwise.test | COMPILE | 0.112151 | 0.276974 | 0.338586 | — | — | — |
| bool.test | RUN | 0.099347 | 0.249420 | 0.294445 | 0.001177 | 0.001224 | 0.001166 |
| comparison.test | COMPILE | 0.110475 | 0.280650 | 0.329286 | — | — | — |
| contains.test | COMPILE | 0.130825 | 0.339852 | 0.399830 | — | — | — |
| copy.test | COMPILE | 0.161034 | 0.403589 | 0.478803 | — | — | — |
| copy_if.test | COMPILE | 0.140332 | 0.367134 | 0.426940 | — | — | — |
| count.test | COMPILE | 0.132329 | 0.334489 | 0.392627 | — | — | — |
| count_if.test | COMPILE | 0.137139 | 0.350489 | 0.423979 | — | — | — |
| deque.test | COMPILE | 0.132377 | 0.340972 | 0.399415 | — | — | — |
| distance.test | COMPILE | 0.121867 | 0.306593 | 0.369938 | — | — | — |
| empty.test | COMPILE | 0.106002 | 0.276318 | 0.324456 | — | — | — |
| equal.test | COMPILE | 0.123244 | 0.315971 | 0.366880 | — | — | — |
| erase.test | COMPILE | 0.144908 | 0.373847 | 0.433577 | — | — | — |
| erase_range.test | COMPILE | 0.138630 | 0.359155 | 0.415182 | — | — | — |
| eval_if.test | COMPILE | 0.098029 | 0.252244 | 0.302825 | — | — | — |
| filter_view.test | COMPILE | 0.137093 | 0.347758 | 0.410906 | — | — | — |
| find.test | COMPILE | 0.135360 | 0.338630 | 0.395991 | — | — | — |
| find_if.test | COMPILE | 0.135442 | 0.353754 | 0.402572 | — | — | — |
| fold.test | COMPILE | 0.144391 | 0.360333 | 0.432732 | — | — | — |
| for_each.test | RUN | 0.210133 | 0.533391 | 0.667094 | 0.001223 | 0.001237 | 0.001300 |
| front.test | COMPILE | 0.111064 | 0.286750 | 0.335387 | — | — | — |
| get_tag_def.test | COMPILE | 0.098251 | 0.246714 | 0.289741 | — | — | — |
| has_xxx.test | COMPILE | 0.107500 | 0.269167 | 0.328205 | — | — | — |
| identity.test | COMPILE | 0.114679 | 0.282729 | 0.322818 | — | — | — |
| if.test | COMPILE | 0.097563 | 0.249214 | 0.289203 | — | — | — |
| index_of.test | COMPILE | 0.126197 | 0.327528 | 0.369193 | — | — | — |
| inherit.test | COMPILE | 0.099770 | 0.259090 | 0.302070 | — | — | — |
| insert.test | COMPILE | 0.150237 | 0.385233 | 0.450862 | — | — | — |
| insert_range.test | COMPILE | 0.199792 | 0.519145 | 0.640699 | — | — | — |
| int.test | RUN | 0.104840 | 0.276588 | 0.325175 | 0.001204 | 0.001479 | 0.001192 |
| char.test | RUN | 0.104895 | 0.283758 | 0.326710 | 0.001218 | 0.001257 | 0.001071 |
| char_unsigned.test | RUN | 0.106062 | 0.275538 | 0.322226 | 0.001177 | 0.001582 | 0.001223 |
| integral_c.test | RUN | 0.120815 | 0.358131 | 0.406172 | 0.001114 | 0.001319 | 0.001301 |
| integral_c_unsigned.test | RUN | 0.113120 | 0.356565 | 0.404004 | 0.001098 | 0.001414 | 0.001168 |
| is_placeholder.test | COMPILE | 0.101025 | 0.251765 | 0.289405 | — | — | — |
| is_sequence.test | COMPILE | 0.120122 | 0.312007 | 0.359050 | — | — | — |
| iterator_tags.test | COMPILE | 0.099685 | 0.259228 | 0.313349 | — | — | — |
| joint_view.test | COMPILE | 0.133916 | 0.345696 | 0.409922 | — | — | — |
| lambda.test | COMPILE | 0.124177 | 0.320393 | 0.384671 | — | — | — |
| lambda_args.test | COMPILE | 0.120255 | 0.306104 | 0.379361 | — | — | — |
| list.test | COMPILE | 0.125308 | 0.316569 | 0.379222 | — | — | — |
| list_c.test | COMPILE | 0.121926 | 0.307516 | 0.386066 | — | — | — |
| logical.test | COMPILE | 0.098708 | 0.249660 | 0.300720 | — | — | — |
| lower_bound.test | COMPILE | 0.130637 | 0.325527 | 0.382094 | — | — | — |
| map.test | COMPILE | 0.152594 | 0.407750 | 0.481505 | — | — | — |
| max_element.test | COMPILE | 0.124326 | 0.299900 | 0.368354 | — | — | — |
| min_max.test | COMPILE | 0.102509 | 0.264851 | 0.317598 | — | — | — |
| multiset.test | COMPILE | 0.134782 | 0.348777 | 0.399785 | — | — | — |
| next.test | COMPILE | 0.099945 | 0.249912 | 0.301123 | — | — | — |
| no_has_xxx.test | COMPILE | 0.108085 | 0.263719 | 0.333204 | — | — | — |
| numeric_ops.test | COMPILE | 0.118138 | 0.310550 | 0.359960 | — | — | — |
| pair_view.test | COMPILE | 0.138040 | 0.347573 | 0.401827 | — | — | — |
| partition.test | COMPILE | 0.148892 | 0.378849 | 0.448554 | — | — | — |
| pop_front.test | COMPILE | 0.121609 | 0.310854 | 0.364162 | — | — | — |
| push_back.test | COMPILE | 0.102595 | 0.261539 | 0.310938 | — | — | — |
| push_front.test | COMPILE | 0.123009 | 0.316734 | 0.369020 | — | — | — |
| quote.test | COMPILE | 0.099708 | 0.252105 | 0.304738 | — | — | — |
| range_c.test | COMPILE | 0.125627 | 0.330827 | 0.386558 | — | — | — |
| remove.test | COMPILE | 0.134674 | 0.347147 | 0.400944 | — | — | — |
| remove_if.test | COMPILE | 0.141317 | 0.367075 | 0.421393 | — | — | — |
| replace.test | COMPILE | 0.149970 | 0.392380 | 0.454218 | — | — | — |
| replace_if.test | COMPILE | 0.154223 | 0.398764 | 0.452591 | — | — | — |
| reverse.test | COMPILE | 0.148858 | 0.367601 | 0.421344 | — | — | — |
| same_as.test | COMPILE | 0.110678 | 0.269119 | 0.318493 | — | — | — |
| set.test | COMPILE | 0.186903 | 0.516108 | 0.645306 | — | — | — |
| set_c.test | COMPILE | 0.141811 | 0.346883 | 0.421192 | — | — | — |
| single_view.test | COMPILE | 0.125261 | 0.320481 | 0.377458 | — | — | — |
| size.test | COMPILE | 0.120251 | 0.308293 | 0.354516 | — | — | — |
| size_t.test | RUN | 0.103940 | 0.282219 | 0.339143 | 0.001152 | 0.001369 | 0.001363 |
| sizeof.test | COMPILE | 0.097422 | 0.248819 | 0.298740 | — | — | — |
| sort.test | COMPILE | 0.160933 | 0.407301 | 0.478042 | — | — | — |
| stable_partition.test | COMPILE | 0.147464 | 0.385171 | 0.450891 | — | — | — |
| transform.test | COMPILE | 0.157192 | 0.415262 | 0.489673 | — | — | — |
| transform_view.test | COMPILE | 0.127496 | 0.337783 | 0.388282 | — | — | — |
| unique.test | COMPILE | 0.136425 | 0.348199 | 0.399284 | — | — | — |
| unpack_args.test | COMPILE | 0.127691 | 0.323705 | 0.376247 | — | — | — |
| upper_bound.test | COMPILE | 0.128416 | 0.327833 | 0.381307 | — | — | — |
| vector.test | COMPILE | 0.143744 | 0.393606 | 0.452447 | — | — | — |
| vector_c.test | COMPILE | 0.129851 | 0.323146 | 0.385820 | — | — | — |
| zip_view.test | COMPILE | 0.191352 | 0.490041 | 0.566203 | — | — | — |
| string.test | RUN | 0.305669 | 0.963524 | 0.854104 | 0.000864 | 0.000952 | 0.000972 |
| issue_69.test | RUN | 0.011661 | 0.036306 | 0.039736 | 0.000472 | 0.000508 | 0.001133 |
| issue_84.test | RUN | 0.029618 | 0.073739 | 0.075363 | 0.000391 | 0.000435 | 0.000914 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 1.000× | 0.993×, 1.008× | 1.007× |
| clang | 1.095× | 1.071×, 1.118× | 0.995× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1364 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44481767416).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| bool.test | 10 | 0.000823s | 0.000796s | 0.000795s | byte equality observed |
| char.test | 10 | 0.000803s | 0.000780s | 0.000799s | byte equality observed |
| char_unsigned.test | 10 | 0.000804s | 0.000807s | 0.000808s | byte equality observed |
| for_each.test | 10 | 0.000824s | 0.000831s | 0.000829s | byte equality observed |
| int.test | 10 | 0.000811s | 0.000821s | 0.000818s | byte equality observed |
| integral_c.test | 10 | 0.000824s | 0.000828s | 0.000830s | byte equality observed |
| integral_c_unsigned.test | 10 | 0.000835s | 0.000809s | 0.000785s | byte equality observed |
| issue_69.test | 10 | 0.000362s | 0.000361s | 0.000775s | byte equality observed |
| issue_84.test | 10 | 0.000358s | 0.000358s | 0.000782s | byte equality observed |
| size_t.test | 10 | 0.000797s | 0.000812s | 0.000776s | byte equality observed |
| string.test | 10 | 0.000808s | 0.000811s | 0.000830s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44481767416).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
