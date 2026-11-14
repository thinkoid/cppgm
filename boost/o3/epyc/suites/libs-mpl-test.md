# libs/mpl/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| increased_arity.test | COMPILE | 0.279550 | 0.784161 | 0.722959 | — | — | — |
| largest_int.test | COMPILE | 0.096464 | 0.219860 | 0.250982 | — | — | — |
| msvc_is_class.test | COMPILE | 0.012621 | 0.030014 | 0.034330 | — | — | — |
| template_arity.test | COMPILE | 0.096284 | 0.214717 | 0.247211 | — | — | — |
| is_seq.test | COMPILE | 0.004285 | 0.011795 | 0.024288 | — | — | — |
| token_equal.test | COMPILE | 0.004422 | 0.011579 | 0.024175 | — | — | — |
| advance.test | COMPILE | 0.102770 | 0.248269 | 0.287002 | — | — | — |
| always.test | COMPILE | 0.104592 | 0.249621 | 0.295865 | — | — | — |
| apply.test | COMPILE | 0.113454 | 0.258596 | 0.301849 | — | — | — |
| apply_wrap.test | COMPILE | 0.097376 | 0.229828 | 0.272764 | — | — | — |
| arithmetic.test | COMPILE | 0.105504 | 0.258692 | 0.278554 | — | — | — |
| as_sequence.test | COMPILE | 0.114439 | 0.280696 | 0.319717 | — | — | — |
| assert.test | COMPILE | 0.027827 | 0.056560 | 0.066179 | — | — | — |
| at.test | COMPILE | 0.112376 | 0.268680 | 0.316690 | — | — | — |
| back.test | COMPILE | 0.107435 | 0.255390 | 0.300438 | — | — | — |
| bind.test | COMPILE | 0.104004 | 0.247796 | 0.290786 | — | — | — |
| bitwise.test | COMPILE | 0.106240 | 0.254755 | 0.305883 | — | — | — |
| bool.test | RUN | 0.098319 | 0.224520 | 0.278777 | 0.001406 | 0.001400 | 0.001395 |
| comparison.test | COMPILE | 0.104939 | 0.248011 | 0.296802 | — | — | — |
| contains.test | COMPILE | 0.128881 | 0.295270 | 0.352182 | — | — | — |
| copy.test | COMPILE | 0.156123 | 0.355505 | 0.433957 | — | — | — |
| copy_if.test | COMPILE | 0.137194 | 0.320730 | 0.386092 | — | — | — |
| count.test | COMPILE | 0.129577 | 0.296215 | 0.352346 | — | — | — |
| count_if.test | COMPILE | 0.133640 | 0.305352 | 0.376257 | — | — | — |
| deque.test | COMPILE | 0.128693 | 0.313379 | 0.354968 | — | — | — |
| distance.test | COMPILE | 0.118907 | 0.288520 | 0.336103 | — | — | — |
| empty.test | COMPILE | 0.105692 | 0.262591 | 0.296986 | — | — | — |
| equal.test | COMPILE | 0.122388 | 0.301040 | 0.347254 | — | — | — |
| erase.test | COMPILE | 0.137049 | 0.346334 | 0.400571 | — | — | — |
| erase_range.test | COMPILE | 0.131161 | 0.319442 | 0.362463 | — | — | — |
| eval_if.test | COMPILE | 0.098496 | 0.237060 | 0.267530 | — | — | — |
| filter_view.test | COMPILE | 0.132658 | 0.326422 | 0.366522 | — | — | — |
| find.test | COMPILE | 0.128830 | 0.308364 | 0.359695 | — | — | — |
| find_if.test | COMPILE | 0.132059 | 0.318228 | 0.380174 | — | — | — |
| fold.test | COMPILE | 0.139283 | 0.325834 | 0.406014 | — | — | — |
| for_each.test | RUN | 0.196458 | 0.468258 | 0.622677 | 0.001543 | 0.001530 | 0.001430 |
| front.test | COMPILE | 0.107317 | 0.266386 | 0.304096 | — | — | — |
| get_tag_def.test | COMPILE | 0.098711 | 0.221347 | 0.273443 | — | — | — |
| has_xxx.test | COMPILE | 0.108255 | 0.246627 | 0.304324 | — | — | — |
| identity.test | COMPILE | 0.113311 | 0.256275 | 0.299956 | — | — | — |
| if.test | COMPILE | 0.098098 | 0.223935 | 0.268297 | — | — | — |
| index_of.test | COMPILE | 0.126173 | 0.299994 | 0.327322 | — | — | — |
| inherit.test | COMPILE | 0.101632 | 0.231400 | 0.278471 | — | — | — |
| insert.test | COMPILE | 0.140669 | 0.350186 | 0.409440 | — | — | — |
| insert_range.test | COMPILE | 0.190349 | 0.459514 | 0.581499 | — | — | — |
| int.test | RUN | 0.101996 | 0.258653 | 0.287041 | 0.001481 | 0.001533 | 0.001712 |
| char.test | RUN | 0.105504 | 0.260258 | 0.298959 | 0.001606 | 0.001312 | 0.001443 |
| char_unsigned.test | RUN | 0.104391 | 0.254692 | 0.294064 | 0.001373 | 0.001744 | 0.001721 |
| integral_c.test | RUN | 0.117253 | 0.318249 | 0.370766 | 0.001350 | 0.001721 | 0.001556 |
| integral_c_unsigned.test | RUN | 0.120549 | 0.317875 | 0.372236 | 0.001447 | 0.001412 | 0.001689 |
| is_placeholder.test | COMPILE | 0.100540 | 0.230319 | 0.258594 | — | — | — |
| is_sequence.test | COMPILE | 0.120581 | 0.286829 | 0.324907 | — | — | — |
| iterator_tags.test | COMPILE | 0.112690 | 0.243538 | 0.280931 | — | — | — |
| joint_view.test | COMPILE | 0.139130 | 0.319686 | 0.374577 | — | — | — |
| lambda.test | COMPILE | 0.121851 | 0.291811 | 0.343405 | — | — | — |
| lambda_args.test | COMPILE | 0.115978 | 0.280095 | 0.344029 | — | — | — |
| list.test | COMPILE | 0.122591 | 0.301740 | 0.342627 | — | — | — |
| list_c.test | COMPILE | 0.122181 | 0.286404 | 0.342785 | — | — | — |
| logical.test | COMPILE | 0.100514 | 0.231174 | 0.274583 | — | — | — |
| lower_bound.test | COMPILE | 0.127367 | 0.305167 | 0.346793 | — | — | — |
| map.test | COMPILE | 0.148002 | 0.364671 | 0.427215 | — | — | — |
| max_element.test | COMPILE | 0.119959 | 0.276335 | 0.323910 | — | — | — |
| min_max.test | COMPILE | 0.101094 | 0.249887 | 0.277461 | — | — | — |
| multiset.test | COMPILE | 0.127021 | 0.330069 | 0.349666 | — | — | — |
| next.test | COMPILE | 0.099132 | 0.231865 | 0.268073 | — | — | — |
| no_has_xxx.test | COMPILE | 0.106978 | 0.255450 | 0.297027 | — | — | — |
| numeric_ops.test | COMPILE | 0.114989 | 0.284718 | 0.311927 | — | — | — |
| pair_view.test | COMPILE | 0.137698 | 0.324261 | 0.366640 | — | — | — |
| partition.test | COMPILE | 0.145997 | 0.342465 | 0.408471 | — | — | — |
| pop_front.test | COMPILE | 0.116626 | 0.291464 | 0.333557 | — | — | — |
| push_back.test | COMPILE | 0.100635 | 0.247253 | 0.286239 | — | — | — |
| push_front.test | COMPILE | 0.120167 | 0.283460 | 0.329307 | — | — | — |
| quote.test | COMPILE | 0.099816 | 0.225127 | 0.272772 | — | — | — |
| range_c.test | COMPILE | 0.123866 | 0.309728 | 0.345105 | — | — | — |
| remove.test | COMPILE | 0.132908 | 0.323845 | 0.360899 | — | — | — |
| remove_if.test | COMPILE | 0.138665 | 0.324951 | 0.388156 | — | — | — |
| replace.test | COMPILE | 0.143754 | 0.356651 | 0.413853 | — | — | — |
| replace_if.test | COMPILE | 0.149931 | 0.370933 | 0.417281 | — | — | — |
| reverse.test | COMPILE | 0.138331 | 0.335165 | 0.394748 | — | — | — |
| same_as.test | COMPILE | 0.109194 | 0.252209 | 0.301491 | — | — | — |
| set.test | COMPILE | 0.180313 | 0.459095 | 0.564328 | — | — | — |
| set_c.test | COMPILE | 0.136470 | 0.317729 | 0.387671 | — | — | — |
| single_view.test | COMPILE | 0.120764 | 0.306413 | 0.339502 | — | — | — |
| size.test | COMPILE | 0.121811 | 0.309455 | 0.321699 | — | — | — |
| size_t.test | RUN | 0.107612 | 0.287640 | 0.295493 | 0.001416 | 0.001742 | 0.001732 |
| sizeof.test | COMPILE | 0.097424 | 0.252776 | 0.265803 | — | — | — |
| sort.test | COMPILE | 0.154167 | 0.407019 | 0.428334 | — | — | — |
| stable_partition.test | COMPILE | 0.147385 | 0.359905 | 0.405312 | — | — | — |
| transform.test | COMPILE | 0.158215 | 0.371948 | 0.443989 | — | — | — |
| transform_view.test | COMPILE | 0.127654 | 0.301132 | 0.345052 | — | — | — |
| unique.test | COMPILE | 0.133701 | 0.308201 | 0.353593 | — | — | — |
| unpack_args.test | COMPILE | 0.125034 | 0.293158 | 0.334566 | — | — | — |
| upper_bound.test | COMPILE | 0.126863 | 0.289495 | 0.346267 | — | — | — |
| vector.test | COMPILE | 0.141726 | 0.345175 | 0.404672 | — | — | — |
| vector_c.test | COMPILE | 0.125468 | 0.294468 | 0.358811 | — | — | — |
| zip_view.test | COMPILE | 0.172328 | 0.437595 | 0.514284 | — | — | — |
| string.test | RUN | 0.274133 | 0.839192 | 0.764737 | 0.001202 | 0.001182 | 0.001231 |
| issue_69.test | RUN | 0.013544 | 0.038281 | 0.041659 | 0.000473 | 0.000505 | 0.001215 |
| issue_84.test | RUN | 0.031122 | 0.072645 | 0.072055 | 0.000561 | 0.000485 | 0.001282 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.963× | 0.962×, 0.963× | 0.973× |
| clang | 1.091× | 1.088×, 1.093× | 0.981× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1364 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43639138948).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| bool.test | 10 | 0.000901s | 0.000875s | 0.000881s | byte equality observed |
| char.test | 10 | 0.000917s | 0.000888s | 0.000895s | byte equality observed |
| char_unsigned.test | 10 | 0.000904s | 0.000887s | 0.000876s | byte equality observed |
| for_each.test | 10 | 0.000918s | 0.000892s | 0.000872s | byte equality observed |
| int.test | 10 | 0.000898s | 0.000871s | 0.000887s | byte equality observed |
| integral_c.test | 10 | 0.000904s | 0.000880s | 0.000890s | byte equality observed |
| integral_c_unsigned.test | 10 | 0.000918s | 0.000880s | 0.000904s | byte equality observed |
| issue_69.test | 10 | 0.000418s | 0.000398s | 0.000867s | byte equality observed |
| issue_84.test | 10 | 0.000411s | 0.000396s | 0.000870s | byte equality observed |
| size_t.test | 10 | 0.000907s | 0.000879s | 0.000909s | byte equality observed |
| string.test | 10 | 0.000921s | 0.000877s | 0.000888s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43639138948).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
