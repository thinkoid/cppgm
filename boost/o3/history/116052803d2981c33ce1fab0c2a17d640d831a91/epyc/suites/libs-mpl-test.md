# libs/mpl/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| increased_arity.test | COMPILE | 0.264914 | 0.744926 | 0.700725 | — | — | — |
| largest_int.test | COMPILE | 0.097526 | 0.217478 | 0.248511 | — | — | — |
| msvc_is_class.test | COMPILE | 0.012365 | 0.030090 | 0.031723 | — | — | — |
| template_arity.test | COMPILE | 0.097423 | 0.218406 | 0.242343 | — | — | — |
| is_seq.test | COMPILE | 0.003992 | 0.010821 | 0.023862 | — | — | — |
| token_equal.test | COMPILE | 0.004465 | 0.012512 | 0.023628 | — | — | — |
| advance.test | COMPILE | 0.108792 | 0.235022 | 0.280558 | — | — | — |
| always.test | COMPILE | 0.107867 | 0.243578 | 0.279194 | — | — | — |
| apply.test | COMPILE | 0.113820 | 0.254407 | 0.292119 | — | — | — |
| apply_wrap.test | COMPILE | 0.098814 | 0.211799 | 0.260191 | — | — | — |
| arithmetic.test | COMPILE | 0.105227 | 0.243323 | 0.273800 | — | — | — |
| as_sequence.test | COMPILE | 0.112422 | 0.268962 | 0.316304 | — | — | — |
| assert.test | COMPILE | 0.026504 | 0.052368 | 0.059556 | — | — | — |
| at.test | COMPILE | 0.121238 | 0.252030 | 0.320134 | — | — | — |
| back.test | COMPILE | 0.114175 | 0.244804 | 0.295334 | — | — | — |
| bind.test | COMPILE | 0.112171 | 0.232546 | 0.287339 | — | — | — |
| bitwise.test | COMPILE | 0.113096 | 0.241316 | 0.291821 | — | — | — |
| bool.test | RUN | 0.104820 | 0.208970 | 0.258805 | 0.001725 | 0.001416 | 0.001484 |
| comparison.test | COMPILE | 0.113270 | 0.240767 | 0.279293 | — | — | — |
| contains.test | COMPILE | 0.137082 | 0.296783 | 0.331649 | — | — | — |
| copy.test | COMPILE | 0.166235 | 0.357095 | 0.410220 | — | — | — |
| copy_if.test | COMPILE | 0.145086 | 0.309149 | 0.355986 | — | — | — |
| count.test | COMPILE | 0.143204 | 0.279372 | 0.342108 | — | — | — |
| count_if.test | COMPILE | 0.144291 | 0.295010 | 0.364666 | — | — | — |
| deque.test | COMPILE | 0.141664 | 0.296187 | 0.337277 | — | — | — |
| distance.test | COMPILE | 0.128530 | 0.271933 | 0.314422 | — | — | — |
| empty.test | COMPILE | 0.111929 | 0.240132 | 0.278716 | — | — | — |
| equal.test | COMPILE | 0.136157 | 0.267412 | 0.328740 | — | — | — |
| erase.test | COMPILE | 0.156758 | 0.319185 | 0.376012 | — | — | — |
| erase_range.test | COMPILE | 0.147679 | 0.305772 | 0.353372 | — | — | — |
| eval_if.test | COMPILE | 0.111043 | 0.221229 | 0.261943 | — | — | — |
| filter_view.test | COMPILE | 0.146472 | 0.305995 | 0.362668 | — | — | — |
| find.test | COMPILE | 0.147998 | 0.279761 | 0.346981 | — | — | — |
| find_if.test | COMPILE | 0.144710 | 0.293870 | 0.372119 | — | — | — |
| fold.test | COMPILE | 0.151243 | 0.306005 | 0.389606 | — | — | — |
| for_each.test | RUN | 0.215338 | 0.455906 | 0.613300 | 0.001453 | 0.001456 | 0.001588 |
| front.test | COMPILE | 0.115036 | 0.249961 | 0.298301 | — | — | — |
| get_tag_def.test | COMPILE | 0.101357 | 0.218571 | 0.264161 | — | — | — |
| has_xxx.test | COMPILE | 0.112487 | 0.237283 | 0.294052 | — | — | — |
| identity.test | COMPILE | 0.116949 | 0.242093 | 0.295072 | — | — | — |
| if.test | COMPILE | 0.103994 | 0.208496 | 0.263326 | — | — | — |
| index_of.test | COMPILE | 0.131298 | 0.279881 | 0.317899 | — | — | — |
| inherit.test | COMPILE | 0.108506 | 0.217915 | 0.259038 | — | — | — |
| insert.test | COMPILE | 0.149551 | 0.327369 | 0.373909 | — | — | — |
| insert_range.test | COMPILE | 0.201189 | 0.440986 | 0.518599 | — | — | — |
| int.test | RUN | 0.107252 | 0.248086 | 0.270117 | 0.001876 | 0.001435 | 0.001478 |
| char.test | RUN | 0.105505 | 0.248806 | 0.275255 | 0.002423 | 0.001463 | 0.001391 |
| char_unsigned.test | RUN | 0.113364 | 0.250691 | 0.289935 | 0.001944 | 0.001728 | 0.001476 |
| integral_c.test | RUN | 0.132590 | 0.307322 | 0.361234 | 0.001427 | 0.001548 | 0.001334 |
| integral_c_unsigned.test | RUN | 0.125655 | 0.305219 | 0.366131 | 0.001472 | 0.001359 | 0.001299 |
| is_placeholder.test | COMPILE | 0.103815 | 0.223730 | 0.266163 | — | — | — |
| is_sequence.test | COMPILE | 0.117872 | 0.263226 | 0.292104 | — | — | — |
| iterator_tags.test | COMPILE | 0.100853 | 0.219181 | 0.257351 | — | — | — |
| joint_view.test | COMPILE | 0.129912 | 0.294160 | 0.342936 | — | — | — |
| lambda.test | COMPILE | 0.120162 | 0.273325 | 0.311297 | — | — | — |
| lambda_args.test | COMPILE | 0.114676 | 0.258942 | 0.312687 | — | — | — |
| list.test | COMPILE | 0.117757 | 0.271510 | 0.312845 | — | — | — |
| list_c.test | COMPILE | 0.119478 | 0.265349 | 0.314180 | — | — | — |
| logical.test | COMPILE | 0.098294 | 0.211515 | 0.247763 | — | — | — |
| lower_bound.test | COMPILE | 0.125848 | 0.277402 | 0.322995 | — | — | — |
| map.test | COMPILE | 0.143338 | 0.343034 | 0.386702 | — | — | — |
| max_element.test | COMPILE | 0.121020 | 0.268534 | 0.306952 | — | — | — |
| min_max.test | COMPILE | 0.104742 | 0.223628 | 0.251012 | — | — | — |
| multiset.test | COMPILE | 0.125297 | 0.297486 | 0.327200 | — | — | — |
| next.test | COMPILE | 0.099508 | 0.213096 | 0.251154 | — | — | — |
| no_has_xxx.test | COMPILE | 0.107357 | 0.232105 | 0.273110 | — | — | — |
| numeric_ops.test | COMPILE | 0.115725 | 0.255449 | 0.292643 | — | — | — |
| pair_view.test | COMPILE | 0.133232 | 0.289423 | 0.341262 | — | — | — |
| partition.test | COMPILE | 0.145980 | 0.314206 | 0.378303 | — | — | — |
| pop_front.test | COMPILE | 0.119450 | 0.261243 | 0.306764 | — | — | — |
| push_back.test | COMPILE | 0.105036 | 0.218661 | 0.259651 | — | — | — |
| push_front.test | COMPILE | 0.121885 | 0.270865 | 0.352145 | — | — | — |
| quote.test | COMPILE | 0.100506 | 0.224578 | 0.303234 | — | — | — |
| range_c.test | COMPILE | 0.123169 | 0.287359 | 0.372216 | — | — | — |
| remove.test | COMPILE | 0.130550 | 0.310152 | 0.397606 | — | — | — |
| remove_if.test | COMPILE | 0.134740 | 0.307476 | 0.360495 | — | — | — |
| replace.test | COMPILE | 0.142783 | 0.331208 | 0.382678 | — | — | — |
| replace_if.test | COMPILE | 0.144381 | 0.344912 | 0.386513 | — | — | — |
| reverse.test | COMPILE | 0.141476 | 0.318839 | 0.397998 | — | — | — |
| same_as.test | COMPILE | 0.104952 | 0.234814 | 0.313336 | — | — | — |
| set.test | COMPILE | 0.187319 | 0.425696 | 0.591086 | — | — | — |
| set_c.test | COMPILE | 0.136978 | 0.296670 | 0.370279 | — | — | — |
| single_view.test | COMPILE | 0.123483 | 0.280676 | 0.329623 | — | — | — |
| size.test | COMPILE | 0.125562 | 0.259221 | 0.313461 | — | — | — |
| size_t.test | RUN | 0.111402 | 0.241468 | 0.295345 | 0.001798 | 0.001619 | 0.001628 |
| sizeof.test | COMPILE | 0.104769 | 0.212694 | 0.267011 | — | — | — |
| sort.test | COMPILE | 0.168117 | 0.339145 | 0.409591 | — | — | — |
| stable_partition.test | COMPILE | 0.160084 | 0.324831 | 0.386384 | — | — | — |
| transform.test | COMPILE | 0.171554 | 0.342590 | 0.407565 | — | — | — |
| transform_view.test | COMPILE | 0.140175 | 0.277736 | 0.335777 | — | — | — |
| unique.test | COMPILE | 0.144148 | 0.287620 | 0.347750 | — | — | — |
| unpack_args.test | COMPILE | 0.135515 | 0.275313 | 0.323432 | — | — | — |
| upper_bound.test | COMPILE | 0.134501 | 0.271664 | 0.322708 | — | — | — |
| vector.test | COMPILE | 0.151240 | 0.318659 | 0.385553 | — | — | — |
| vector_c.test | COMPILE | 0.133609 | 0.276403 | 0.335991 | — | — | — |
| zip_view.test | COMPILE | 0.196391 | 0.409566 | 0.491350 | — | — | — |
| string.test | RUN | 0.302110 | 0.788673 | 0.727365 | 0.001326 | 0.001080 | 0.001236 |
| issue_69.test | RUN | 0.014750 | 0.036288 | 0.036074 | 0.000670 | 0.000445 | 0.001346 |
| issue_84.test | RUN | 0.030481 | 0.064975 | 0.064527 | 0.000689 | 0.000436 | 0.001221 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.981× | 0.964×, 0.999× | 0.969× |
| clang | 1.096× | 1.107×, 1.085× | 0.994× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1364 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43666517673).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| bool.test | 10 | 0.000861s | 0.000862s | 0.000847s | byte equality observed |
| char.test | 10 | 0.000874s | 0.000834s | 0.000862s | byte equality observed |
| char_unsigned.test | 10 | 0.000866s | 0.000831s | 0.000846s | byte equality observed |
| for_each.test | 10 | 0.000869s | 0.000847s | 0.000866s | byte equality observed |
| int.test | 10 | 0.000881s | 0.000842s | 0.000850s | byte equality observed |
| integral_c.test | 10 | 0.000867s | 0.000839s | 0.000843s | byte equality observed |
| integral_c_unsigned.test | 10 | 0.000872s | 0.000850s | 0.000883s | byte equality observed |
| issue_69.test | 10 | 0.000389s | 0.000397s | 0.000865s | byte equality observed |
| issue_84.test | 10 | 0.000403s | 0.000388s | 0.000856s | byte equality observed |
| size_t.test | 10 | 0.000864s | 0.000872s | 0.000855s | byte equality observed |
| string.test | 10 | 0.000870s | 0.000865s | 0.000852s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43666517673).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
