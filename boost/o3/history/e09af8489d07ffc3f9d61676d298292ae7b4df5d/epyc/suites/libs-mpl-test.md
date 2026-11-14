# libs/mpl/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| increased_arity.test | COMPILE | 0.261343 | 0.790297 | 0.708750 | — | — | — |
| largest_int.test | COMPILE | 0.096646 | 0.223681 | 0.242668 | — | — | — |
| msvc_is_class.test | COMPILE | 0.012230 | 0.031069 | 0.032533 | — | — | — |
| template_arity.test | COMPILE | 0.096200 | 0.222182 | 0.242522 | — | — | — |
| is_seq.test | COMPILE | 0.004577 | 0.012188 | 0.023103 | — | — | — |
| token_equal.test | COMPILE | 0.004627 | 0.012068 | 0.023471 | — | — | — |
| advance.test | COMPILE | 0.107176 | 0.253684 | 0.275389 | — | — | — |
| always.test | COMPILE | 0.112389 | 0.249816 | 0.278071 | — | — | — |
| apply.test | COMPILE | 0.118534 | 0.269572 | 0.287131 | — | — | — |
| apply_wrap.test | COMPILE | 0.101729 | 0.226992 | 0.256501 | — | — | — |
| arithmetic.test | COMPILE | 0.110971 | 0.258416 | 0.272597 | — | — | — |
| as_sequence.test | COMPILE | 0.118081 | 0.281372 | 0.304526 | — | — | — |
| assert.test | COMPILE | 0.028190 | 0.054569 | 0.061791 | — | — | — |
| at.test | COMPILE | 0.117675 | 0.274443 | 0.301702 | — | — | — |
| back.test | COMPILE | 0.110710 | 0.260255 | 0.280116 | — | — | — |
| bind.test | COMPILE | 0.109046 | 0.249459 | 0.276741 | — | — | — |
| bitwise.test | COMPILE | 0.109041 | 0.254547 | 0.282273 | — | — | — |
| bool.test | RUN | 0.101363 | 0.237139 | 0.253539 | 0.001448 | 0.001449 | 0.001572 |
| comparison.test | COMPILE | 0.107940 | 0.265229 | 0.265862 | — | — | — |
| contains.test | COMPILE | 0.130666 | 0.310998 | 0.328920 | — | — | — |
| copy.test | COMPILE | 0.160002 | 0.373671 | 0.390180 | — | — | — |
| copy_if.test | COMPILE | 0.141344 | 0.333926 | 0.362160 | — | — | — |
| count.test | COMPILE | 0.137905 | 0.310778 | 0.348996 | — | — | — |
| count_if.test | COMPILE | 0.140763 | 0.324402 | 0.352392 | — | — | — |
| deque.test | COMPILE | 0.133809 | 0.319042 | 0.346107 | — | — | — |
| distance.test | COMPILE | 0.120374 | 0.291106 | 0.316685 | — | — | — |
| empty.test | COMPILE | 0.107455 | 0.252531 | 0.271328 | — | — | — |
| equal.test | COMPILE | 0.129531 | 0.306061 | 0.324786 | — | — | — |
| erase.test | COMPILE | 0.142339 | 0.353895 | 0.378446 | — | — | — |
| erase_range.test | COMPILE | 0.138767 | 0.336716 | 0.343952 | — | — | — |
| eval_if.test | COMPILE | 0.103174 | 0.244548 | 0.251871 | — | — | — |
| filter_view.test | COMPILE | 0.138040 | 0.328825 | 0.353425 | — | — | — |
| find.test | COMPILE | 0.131081 | 0.321921 | 0.335619 | — | — | — |
| find_if.test | COMPILE | 0.136956 | 0.323377 | 0.343030 | — | — | — |
| fold.test | COMPILE | 0.144960 | 0.345158 | 0.366809 | — | — | — |
| for_each.test | RUN | 0.218476 | 0.488642 | 0.570798 | 0.001692 | 0.001633 | 0.001375 |
| front.test | COMPILE | 0.112634 | 0.272229 | 0.283623 | — | — | — |
| get_tag_def.test | COMPILE | 0.102692 | 0.225232 | 0.248450 | — | — | — |
| has_xxx.test | COMPILE | 0.117235 | 0.251066 | 0.287687 | — | — | — |
| identity.test | COMPILE | 0.118375 | 0.262343 | 0.285972 | — | — | — |
| if.test | COMPILE | 0.102262 | 0.227805 | 0.255030 | — | — | — |
| index_of.test | COMPILE | 0.131794 | 0.297680 | 0.326910 | — | — | — |
| inherit.test | COMPILE | 0.106460 | 0.236155 | 0.272183 | — | — | — |
| insert.test | COMPILE | 0.155886 | 0.351964 | 0.375638 | — | — | — |
| insert_range.test | COMPILE | 0.203254 | 0.458657 | 0.558029 | — | — | — |
| int.test | RUN | 0.106327 | 0.259048 | 0.285527 | 0.001457 | 0.001666 | 0.001280 |
| char.test | RUN | 0.106281 | 0.253911 | 0.289439 | 0.001453 | 0.001491 | 0.001207 |
| char_unsigned.test | RUN | 0.109631 | 0.260613 | 0.278123 | 0.001476 | 0.001780 | 0.001574 |
| integral_c.test | RUN | 0.123178 | 0.320728 | 0.326095 | 0.001495 | 0.001712 | 0.001560 |
| integral_c_unsigned.test | RUN | 0.119643 | 0.318587 | 0.342456 | 0.001237 | 0.001662 | 0.001544 |
| is_placeholder.test | COMPILE | 0.100561 | 0.235986 | 0.258162 | — | — | — |
| is_sequence.test | COMPILE | 0.122023 | 0.280228 | 0.316036 | — | — | — |
| iterator_tags.test | COMPILE | 0.102320 | 0.241691 | 0.276230 | — | — | — |
| joint_view.test | COMPILE | 0.132578 | 0.316814 | 0.350385 | — | — | — |
| lambda.test | COMPILE | 0.128864 | 0.291026 | 0.324220 | — | — | — |
| lambda_args.test | COMPILE | 0.124824 | 0.278274 | 0.328535 | — | — | — |
| list.test | COMPILE | 0.125814 | 0.294928 | 0.319895 | — | — | — |
| list_c.test | COMPILE | 0.129200 | 0.284286 | 0.325064 | — | — | — |
| logical.test | COMPILE | 0.100005 | 0.229734 | 0.250751 | — | — | — |
| lower_bound.test | COMPILE | 0.134114 | 0.292376 | 0.320908 | — | — | — |
| map.test | COMPILE | 0.156492 | 0.368001 | 0.403444 | — | — | — |
| max_element.test | COMPILE | 0.127081 | 0.286214 | 0.323976 | — | — | — |
| min_max.test | COMPILE | 0.107345 | 0.232706 | 0.262455 | — | — | — |
| multiset.test | COMPILE | 0.133326 | 0.319392 | 0.356555 | — | — | — |
| next.test | COMPILE | 0.104917 | 0.230295 | 0.258280 | — | — | — |
| no_has_xxx.test | COMPILE | 0.114039 | 0.241492 | 0.270271 | — | — | — |
| numeric_ops.test | COMPILE | 0.122411 | 0.289469 | 0.308402 | — | — | — |
| pair_view.test | COMPILE | 0.140913 | 0.314993 | 0.350518 | — | — | — |
| partition.test | COMPILE | 0.147454 | 0.369137 | 0.384245 | — | — | — |
| pop_front.test | COMPILE | 0.123366 | 0.305170 | 0.305875 | — | — | — |
| push_back.test | COMPILE | 0.104004 | 0.270137 | 0.270957 | — | — | — |
| push_front.test | COMPILE | 0.120696 | 0.315351 | 0.302358 | — | — | — |
| quote.test | COMPILE | 0.098518 | 0.236229 | 0.252538 | — | — | — |
| range_c.test | COMPILE | 0.123529 | 0.307403 | 0.325028 | — | — | — |
| remove.test | COMPILE | 0.132651 | 0.323270 | 0.344518 | — | — | — |
| remove_if.test | COMPILE | 0.140162 | 0.331038 | 0.356931 | — | — | — |
| replace.test | COMPILE | 0.142774 | 0.363813 | 0.379877 | — | — | — |
| replace_if.test | COMPILE | 0.147577 | 0.368945 | 0.382704 | — | — | — |
| reverse.test | COMPILE | 0.139838 | 0.341488 | 0.363872 | — | — | — |
| same_as.test | COMPILE | 0.109360 | 0.254565 | 0.280152 | — | — | — |
| set.test | COMPILE | 0.189335 | 0.466131 | 0.542210 | — | — | — |
| set_c.test | COMPILE | 0.142790 | 0.329721 | 0.364552 | — | — | — |
| single_view.test | COMPILE | 0.127923 | 0.300712 | 0.331762 | — | — | — |
| size.test | COMPILE | 0.119797 | 0.284249 | 0.308776 | — | — | — |
| size_t.test | RUN | 0.106643 | 0.265224 | 0.274932 | 0.001486 | 0.001713 | 0.001559 |
| sizeof.test | COMPILE | 0.100933 | 0.232241 | 0.239213 | — | — | — |
| sort.test | COMPILE | 0.157259 | 0.370250 | 0.402302 | — | — | — |
| stable_partition.test | COMPILE | 0.153036 | 0.352654 | 0.371417 | — | — | — |
| transform.test | COMPILE | 0.163385 | 0.387780 | 0.404198 | — | — | — |
| transform_view.test | COMPILE | 0.128622 | 0.312661 | 0.329748 | — | — | — |
| unique.test | COMPILE | 0.131858 | 0.323771 | 0.340326 | — | — | — |
| unpack_args.test | COMPILE | 0.125096 | 0.307897 | 0.315838 | — | — | — |
| upper_bound.test | COMPILE | 0.129469 | 0.321699 | 0.321169 | — | — | — |
| vector.test | COMPILE | 0.148647 | 0.361186 | 0.396822 | — | — | — |
| vector_c.test | COMPILE | 0.131857 | 0.300011 | 0.345185 | — | — | — |
| zip_view.test | COMPILE | 0.183784 | 0.440888 | 0.493292 | — | — | — |
| string.test | RUN | 0.274733 | 0.857234 | 0.736856 | 0.001268 | 0.001208 | 0.001150 |
| issue_69.test | RUN | 0.012699 | 0.037813 | 0.037678 | 0.000536 | 0.000620 | 0.001416 |
| issue_84.test | RUN | 0.028424 | 0.073936 | 0.066566 | 0.000532 | 0.000613 | 0.001130 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.993× | 0.997×, 0.990× | 1.004× |
| clang | 1.083× | 1.087×, 1.078× | 1.011× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1363 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43624536445).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| bool.test | 10 | 0.000902s | 0.000886s | 0.000897s | byte equality observed |
| char.test | 10 | 0.000915s | 0.000888s | 0.000889s | byte equality observed |
| char_unsigned.test | 10 | 0.000917s | 0.000892s | 0.000876s | byte equality observed |
| for_each.test | 10 | 0.000904s | 0.000913s | 0.000896s | byte equality observed |
| int.test | 10 | 0.000897s | 0.000906s | 0.000881s | byte equality observed |
| integral_c.test | 10 | 0.000897s | 0.000903s | 0.000873s | byte equality observed |
| integral_c_unsigned.test | 10 | 0.000908s | 0.000930s | 0.000876s | byte equality observed |
| issue_69.test | 10 | 0.000415s | 0.000421s | 0.000845s | byte equality observed |
| issue_84.test | 10 | 0.000417s | 0.000417s | 0.000871s | byte equality observed |
| size_t.test | 10 | 0.000913s | 0.000919s | 0.000883s | byte equality observed |
| string.test | 10 | 0.000896s | 0.000946s | 0.000886s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43624536445).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
