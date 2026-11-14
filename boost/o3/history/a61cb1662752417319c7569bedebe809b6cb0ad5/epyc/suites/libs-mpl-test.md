# libs/mpl/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| increased_arity.test | COMPILE | 0.360917 | 1.027054 | 1.027875 | — | — | — |
| largest_int.test | COMPILE | 0.121094 | 0.276097 | 0.354406 | — | — | — |
| msvc_is_class.test | COMPILE | 0.014931 | 0.036205 | 0.040825 | — | — | — |
| template_arity.test | COMPILE | 0.123653 | 0.278545 | 0.355594 | — | — | — |
| is_seq.test | COMPILE | 0.005081 | 0.014170 | 0.026546 | — | — | — |
| token_equal.test | COMPILE | 0.005218 | 0.014547 | 0.027121 | — | — | — |
| advance.test | COMPILE | 0.139981 | 0.313689 | 0.421698 | — | — | — |
| always.test | COMPILE | 0.136301 | 0.329738 | 0.431907 | — | — | — |
| apply.test | COMPILE | 0.146821 | 0.346873 | 0.438502 | — | — | — |
| apply_wrap.test | COMPILE | 0.127310 | 0.300146 | 0.391317 | — | — | — |
| arithmetic.test | COMPILE | 0.138942 | 0.326137 | 0.434192 | — | — | — |
| as_sequence.test | COMPILE | 0.149548 | 0.364767 | 0.427950 | — | — | — |
| assert.test | COMPILE | 0.036624 | 0.074693 | 0.086399 | — | — | — |
| at.test | COMPILE | 0.148588 | 0.351406 | 0.450512 | — | — | — |
| back.test | COMPILE | 0.142115 | 0.335384 | 0.427061 | — | — | — |
| bind.test | COMPILE | 0.137088 | 0.318048 | 0.417558 | — | — | — |
| bitwise.test | COMPILE | 0.138795 | 0.327037 | 0.432153 | — | — | — |
| bool.test | RUN | 0.126151 | 0.282206 | 0.374711 | 0.001429 | 0.001647 | 0.001724 |
| comparison.test | COMPILE | 0.137545 | 0.323077 | 0.419628 | — | — | — |
| contains.test | COMPILE | 0.164458 | 0.386791 | 0.505551 | — | — | — |
| copy.test | COMPILE | 0.204357 | 0.475397 | 0.589808 | — | — | — |
| copy_if.test | COMPILE | 0.178054 | 0.426177 | 0.537057 | — | — | — |
| count.test | COMPILE | 0.173666 | 0.387933 | 0.518485 | — | — | — |
| count_if.test | COMPILE | 0.177444 | 0.419255 | 0.529464 | — | — | — |
| deque.test | COMPILE | 0.177835 | 0.406549 | 0.508092 | — | — | — |
| distance.test | COMPILE | 0.158306 | 0.361053 | 0.478169 | — | — | — |
| empty.test | COMPILE | 0.134791 | 0.326172 | 0.395138 | — | — | — |
| equal.test | COMPILE | 0.163953 | 0.381712 | 0.488512 | — | — | — |
| erase.test | COMPILE | 0.182648 | 0.444333 | 0.566918 | — | — | — |
| erase_range.test | COMPILE | 0.179977 | 0.411007 | 0.535511 | — | — | — |
| eval_if.test | COMPILE | 0.127031 | 0.300410 | 0.381221 | — | — | — |
| filter_view.test | COMPILE | 0.175441 | 0.417927 | 0.524698 | — | — | — |
| find.test | COMPILE | 0.170366 | 0.392932 | 0.506138 | — | — | — |
| find_if.test | COMPILE | 0.178016 | 0.418114 | 0.528420 | — | — | — |
| fold.test | COMPILE | 0.186756 | 0.426083 | 0.555759 | — | — | — |
| for_each.test | RUN | 0.266957 | 0.635485 | 0.858839 | 0.001620 | 0.001600 | 0.001832 |
| front.test | COMPILE | 0.147439 | 0.337484 | 0.426549 | — | — | — |
| get_tag_def.test | COMPILE | 0.127567 | 0.296318 | 0.399641 | — | — | — |
| has_xxx.test | COMPILE | 0.139406 | 0.326202 | 0.422154 | — | — | — |
| identity.test | COMPILE | 0.143890 | 0.335145 | 0.408974 | — | — | — |
| if.test | COMPILE | 0.125527 | 0.302566 | 0.372184 | — | — | — |
| index_of.test | COMPILE | 0.161886 | 0.377153 | 0.484885 | — | — | — |
| inherit.test | COMPILE | 0.130804 | 0.303340 | 0.391557 | — | — | — |
| insert.test | COMPILE | 0.188934 | 0.439191 | 0.587699 | — | — | — |
| insert_range.test | COMPILE | 0.254238 | 0.597919 | 0.834190 | — | — | — |
| int.test | RUN | 0.132018 | 0.323120 | 0.434031 | 0.001849 | 0.001595 | 0.001479 |
| char.test | RUN | 0.134968 | 0.329864 | 0.421555 | 0.001505 | 0.001516 | 0.001622 |
| char_unsigned.test | RUN | 0.134954 | 0.331083 | 0.408220 | 0.001741 | 0.001902 | 0.001762 |
| integral_c.test | RUN | 0.152706 | 0.424054 | 0.529668 | 0.001739 | 0.001882 | 0.001792 |
| integral_c_unsigned.test | RUN | 0.153511 | 0.420560 | 0.533888 | 0.001808 | 0.001726 | 0.001577 |
| is_placeholder.test | COMPILE | 0.129580 | 0.285454 | 0.352880 | — | — | — |
| is_sequence.test | COMPILE | 0.152380 | 0.362057 | 0.435612 | — | — | — |
| iterator_tags.test | COMPILE | 0.136464 | 0.301244 | 0.373148 | — | — | — |
| joint_view.test | COMPILE | 0.174448 | 0.410887 | 0.528434 | — | — | — |
| lambda.test | COMPILE | 0.158149 | 0.372980 | 0.481793 | — | — | — |
| lambda_args.test | COMPILE | 0.151057 | 0.360770 | 0.500554 | — | — | — |
| list.test | COMPILE | 0.159168 | 0.383188 | 0.485036 | — | — | — |
| list_c.test | COMPILE | 0.157752 | 0.367973 | 0.495346 | — | — | — |
| logical.test | COMPILE | 0.126693 | 0.290137 | 0.380521 | — | — | — |
| lower_bound.test | COMPILE | 0.164004 | 0.390536 | 0.503708 | — | — | — |
| map.test | COMPILE | 0.195840 | 0.478431 | 0.612777 | — | — | — |
| max_element.test | COMPILE | 0.158875 | 0.370529 | 0.477153 | — | — | — |
| min_max.test | COMPILE | 0.132759 | 0.306767 | 0.396948 | — | — | — |
| multiset.test | COMPILE | 0.171332 | 0.420448 | 0.515536 | — | — | — |
| next.test | COMPILE | 0.127850 | 0.290139 | 0.385765 | — | — | — |
| no_has_xxx.test | COMPILE | 0.140143 | 0.320804 | 0.427193 | — | — | — |
| numeric_ops.test | COMPILE | 0.152185 | 0.368711 | 0.445389 | — | — | — |
| pair_view.test | COMPILE | 0.175541 | 0.406373 | 0.515233 | — | — | — |
| partition.test | COMPILE | 0.194883 | 0.454215 | 0.586405 | — | — | — |
| pop_front.test | COMPILE | 0.153836 | 0.372781 | 0.476456 | — | — | — |
| push_back.test | COMPILE | 0.131965 | 0.310435 | 0.399575 | — | — | — |
| push_front.test | COMPILE | 0.153935 | 0.366276 | 0.476691 | — | — | — |
| quote.test | COMPILE | 0.127295 | 0.291225 | 0.398026 | — | — | — |
| range_c.test | COMPILE | 0.165322 | 0.393216 | 0.495420 | — | — | — |
| remove.test | COMPILE | 0.173798 | 0.406334 | 0.523098 | — | — | — |
| remove_if.test | COMPILE | 0.180965 | 0.426349 | 0.540156 | — | — | — |
| replace.test | COMPILE | 0.192875 | 0.457896 | 0.580413 | — | — | — |
| replace_if.test | COMPILE | 0.192515 | 0.470253 | 0.583379 | — | — | — |
| reverse.test | COMPILE | 0.182893 | 0.442685 | 0.555869 | — | — | — |
| same_as.test | COMPILE | 0.136103 | 0.325026 | 0.405329 | — | — | — |
| set.test | COMPILE | 0.243872 | 0.621873 | 0.851229 | — | — | — |
| set_c.test | COMPILE | 0.175628 | 0.419105 | 0.546073 | — | — | — |
| single_view.test | COMPILE | 0.158697 | 0.403716 | 0.492086 | — | — | — |
| size.test | COMPILE | 0.152733 | 0.368212 | 0.471029 | — | — | — |
| size_t.test | RUN | 0.133388 | 0.334480 | 0.437798 | 0.001578 | 0.001948 | 0.001772 |
| sizeof.test | COMPILE | 0.124742 | 0.285394 | 0.394241 | — | — | — |
| sort.test | COMPILE | 0.206639 | 0.486551 | 0.620225 | — | — | — |
| stable_partition.test | COMPILE | 0.189266 | 0.448307 | 0.583034 | — | — | — |
| transform.test | COMPILE | 0.204107 | 0.494556 | 0.614079 | — | — | — |
| transform_view.test | COMPILE | 0.162798 | 0.391966 | 0.507577 | — | — | — |
| unique.test | COMPILE | 0.169871 | 0.417313 | 0.547792 | — | — | — |
| unpack_args.test | COMPILE | 0.157482 | 0.381104 | 0.512412 | — | — | — |
| upper_bound.test | COMPILE | 0.163825 | 0.389680 | 0.510334 | — | — | — |
| vector.test | COMPILE | 0.188327 | 0.459391 | 0.601013 | — | — | — |
| vector_c.test | COMPILE | 0.163222 | 0.387038 | 0.502828 | — | — | — |
| zip_view.test | COMPILE | 0.234518 | 0.577618 | 0.721272 | — | — | — |
| string.test | RUN | 0.377842 | 1.127294 | 1.032902 | 0.001322 | 0.001375 | 0.001246 |
| issue_69.test | RUN | 0.016626 | 0.045079 | 0.049726 | 0.000562 | 0.000763 | 0.001648 |
| issue_84.test | RUN | 0.035482 | 0.086947 | 0.094073 | 0.000506 | 0.000620 | 0.001335 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 1.034×† | 1.081×, 0.988× | 0.988× |
| clang | 1.024×† | 0.952×, 1.097× | 1.010× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1362 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43619774656).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| bool.test | 10 | 0.001034s | 0.000983s | 0.001010s | byte equality observed |
| char.test | 10 | 0.001014s | 0.001013s | 0.001013s | byte equality observed |
| char_unsigned.test | 10 | 0.001017s | 0.001009s | 0.000983s | byte equality observed |
| for_each.test | 10 | 0.001048s | 0.001025s | 0.001013s | byte equality observed |
| int.test | 10 | 0.001032s | 0.001020s | 0.000992s | byte equality observed |
| integral_c.test | 10 | 0.001033s | 0.001025s | 0.000982s | byte equality observed |
| integral_c_unsigned.test | 10 | 0.001028s | 0.001024s | 0.000986s | byte equality observed |
| issue_69.test | 10 | 0.000466s | 0.000482s | 0.000964s | byte equality observed |
| issue_84.test | 10 | 0.000470s | 0.000486s | 0.001016s | byte equality observed |
| size_t.test | 10 | 0.001020s | 0.001008s | 0.001005s | byte equality observed |
| string.test | 10 | 0.000985s | 0.001046s | 0.001005s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43619774656).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
