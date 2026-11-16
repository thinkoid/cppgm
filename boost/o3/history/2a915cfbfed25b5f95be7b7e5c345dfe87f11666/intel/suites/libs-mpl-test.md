# libs/mpl/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| increased_arity.test | COMPILE | 0.268704 | 0.709947 | 0.630722 | — | — | — |
| largest_int.test | COMPILE | 0.084830 | 0.200932 | 0.223067 | — | — | — |
| msvc_is_class.test | COMPILE | 0.009710 | 0.023842 | 0.025710 | — | — | — |
| template_arity.test | COMPILE | 0.084347 | 0.201772 | 0.228639 | — | — | — |
| is_seq.test | COMPILE | 0.003085 | 0.008429 | 0.016310 | — | — | — |
| token_equal.test | COMPILE | 0.003222 | 0.008903 | 0.015113 | — | — | — |
| advance.test | COMPILE | 0.095495 | 0.221686 | 0.246012 | — | — | — |
| always.test | COMPILE | 0.094529 | 0.226772 | 0.245494 | — | — | — |
| apply.test | COMPILE | 0.098551 | 0.239846 | 0.268314 | — | — | — |
| apply_wrap.test | COMPILE | 0.085528 | 0.199941 | 0.224507 | — | — | — |
| arithmetic.test | COMPILE | 0.093069 | 0.228691 | 0.248050 | — | — | — |
| as_sequence.test | COMPILE | 0.101782 | 0.245681 | 0.264285 | — | — | — |
| assert.test | COMPILE | 0.022847 | 0.045667 | 0.050341 | — | — | — |
| at.test | COMPILE | 0.101244 | 0.243515 | 0.265287 | — | — | — |
| back.test | COMPILE | 0.095894 | 0.232490 | 0.249377 | — | — | — |
| bind.test | COMPILE | 0.093556 | 0.221212 | 0.245586 | — | — | — |
| bitwise.test | COMPILE | 0.093116 | 0.227810 | 0.255894 | — | — | — |
| bool.test | RUN | 0.084327 | 0.203567 | 0.231987 | 0.001018 | 0.001057 | 0.001045 |
| comparison.test | COMPILE | 0.096024 | 0.225168 | 0.254343 | — | — | — |
| contains.test | COMPILE | 0.112274 | 0.278974 | 0.301406 | — | — | — |
| copy.test | COMPILE | 0.134347 | 0.322570 | 0.362919 | — | — | — |
| copy_if.test | COMPILE | 0.120776 | 0.292948 | 0.323594 | — | — | — |
| count.test | COMPILE | 0.114585 | 0.274908 | 0.312257 | — | — | — |
| count_if.test | COMPILE | 0.121625 | 0.286547 | 0.317023 | — | — | — |
| deque.test | COMPILE | 0.114206 | 0.272061 | 0.303676 | — | — | — |
| distance.test | COMPILE | 0.106754 | 0.252109 | 0.284301 | — | — | — |
| empty.test | COMPILE | 0.092097 | 0.229391 | 0.248167 | — | — | — |
| equal.test | COMPILE | 0.108218 | 0.259382 | 0.287824 | — | — | — |
| erase.test | COMPILE | 0.123367 | 0.305179 | 0.341401 | — | — | — |
| erase_range.test | COMPILE | 0.119039 | 0.289604 | 0.322654 | — | — | — |
| eval_if.test | COMPILE | 0.085764 | 0.206926 | 0.233842 | — | — | — |
| filter_view.test | COMPILE | 0.117698 | 0.288296 | 0.316698 | — | — | — |
| find.test | COMPILE | 0.114819 | 0.278005 | 0.304127 | — | — | — |
| find_if.test | COMPILE | 0.116984 | 0.285706 | 0.315985 | — | — | — |
| fold.test | COMPILE | 0.122882 | 0.292181 | 0.332885 | — | — | — |
| for_each.test | RUN | 0.178629 | 0.428246 | 0.508939 | 0.001034 | 0.000996 | 0.000925 |
| front.test | COMPILE | 0.096207 | 0.232239 | 0.262508 | — | — | — |
| get_tag_def.test | COMPILE | 0.085669 | 0.196825 | 0.223488 | — | — | — |
| has_xxx.test | COMPILE | 0.092605 | 0.211962 | 0.246257 | — | — | — |
| identity.test | COMPILE | 0.095226 | 0.228128 | 0.251370 | — | — | — |
| if.test | COMPILE | 0.084671 | 0.198607 | 0.228383 | — | — | — |
| index_of.test | COMPILE | 0.109086 | 0.266529 | 0.286772 | — | — | — |
| inherit.test | COMPILE | 0.087740 | 0.209700 | 0.241157 | — | — | — |
| insert.test | COMPILE | 0.128970 | 0.308021 | 0.339161 | — | — | — |
| insert_range.test | COMPILE | 0.172299 | 0.412855 | 0.469984 | — | — | — |
| int.test | RUN | 0.088817 | 0.224966 | 0.246489 | 0.000944 | 0.001094 | 0.000949 |
| char.test | RUN | 0.090909 | 0.222427 | 0.248843 | 0.000907 | 0.001017 | 0.000872 |
| char_unsigned.test | RUN | 0.088693 | 0.222425 | 0.248195 | 0.000957 | 0.000978 | 0.000889 |
| integral_c.test | RUN | 0.104129 | 0.283569 | 0.305849 | 0.000917 | 0.001025 | 0.000908 |
| integral_c_unsigned.test | RUN | 0.103850 | 0.284135 | 0.305520 | 0.000947 | 0.000925 | 0.000932 |
| is_placeholder.test | COMPILE | 0.084478 | 0.202849 | 0.224815 | — | — | — |
| is_sequence.test | COMPILE | 0.103484 | 0.246188 | 0.274613 | — | — | — |
| iterator_tags.test | COMPILE | 0.088879 | 0.210600 | 0.237292 | — | — | — |
| joint_view.test | COMPILE | 0.116894 | 0.282433 | 0.311536 | — | — | — |
| lambda.test | COMPILE | 0.107986 | 0.262603 | 0.289830 | — | — | — |
| lambda_args.test | COMPILE | 0.101867 | 0.245694 | 0.287718 | — | — | — |
| list.test | COMPILE | 0.107538 | 0.258327 | 0.280531 | — | — | — |
| list_c.test | COMPILE | 0.107278 | 0.254152 | 0.289296 | — | — | — |
| logical.test | COMPILE | 0.085123 | 0.204043 | 0.226823 | — | — | — |
| lower_bound.test | COMPILE | 0.111777 | 0.265766 | 0.290252 | — | — | — |
| map.test | COMPILE | 0.132644 | 0.324347 | 0.358904 | — | — | — |
| max_element.test | COMPILE | 0.106258 | 0.251344 | 0.278060 | — | — | — |
| min_max.test | COMPILE | 0.089314 | 0.214503 | 0.243441 | — | — | — |
| multiset.test | COMPILE | 0.114911 | 0.282090 | 0.302554 | — | — | — |
| next.test | COMPILE | 0.085517 | 0.202074 | 0.230179 | — | — | — |
| no_has_xxx.test | COMPILE | 0.092126 | 0.211807 | 0.249740 | — | — | — |
| numeric_ops.test | COMPILE | 0.101951 | 0.245962 | 0.269349 | — | — | — |
| pair_view.test | COMPILE | 0.118428 | 0.282053 | 0.309048 | — | — | — |
| partition.test | COMPILE | 0.128034 | 0.305711 | 0.334185 | — | — | — |
| pop_front.test | COMPILE | 0.103784 | 0.250653 | 0.272346 | — | — | — |
| push_back.test | COMPILE | 0.087832 | 0.211230 | 0.236009 | — | — | — |
| push_front.test | COMPILE | 0.105148 | 0.258590 | 0.278300 | — | — | — |
| quote.test | COMPILE | 0.086851 | 0.204606 | 0.225764 | — | — | — |
| range_c.test | COMPILE | 0.109457 | 0.267140 | 0.292507 | — | — | — |
| remove.test | COMPILE | 0.116186 | 0.283165 | 0.303739 | — | — | — |
| remove_if.test | COMPILE | 0.120182 | 0.293956 | 0.329732 | — | — | — |
| replace.test | COMPILE | 0.129244 | 0.317880 | 0.340570 | — | — | — |
| replace_if.test | COMPILE | 0.128977 | 0.323489 | 0.354409 | — | — | — |
| reverse.test | COMPILE | 0.122283 | 0.297726 | 0.325213 | — | — | — |
| same_as.test | COMPILE | 0.092647 | 0.222784 | 0.245888 | — | — | — |
| set.test | COMPILE | 0.163035 | 0.411383 | 0.474186 | — | — | — |
| set_c.test | COMPILE | 0.119430 | 0.287298 | 0.320011 | — | — | — |
| single_view.test | COMPILE | 0.109170 | 0.263690 | 0.285464 | — | — | — |
| size.test | COMPILE | 0.103024 | 0.249027 | 0.268911 | — | — | — |
| size_t.test | RUN | 0.091665 | 0.231893 | 0.258299 | 0.000885 | 0.001052 | 0.000955 |
| sizeof.test | COMPILE | 0.085526 | 0.198944 | 0.224165 | — | — | — |
| sort.test | COMPILE | 0.136690 | 0.326770 | 0.358460 | — | — | — |
| stable_partition.test | COMPILE | 0.128488 | 0.310702 | 0.338272 | — | — | — |
| transform.test | COMPILE | 0.136997 | 0.339118 | 0.369356 | — | — | — |
| transform_view.test | COMPILE | 0.113330 | 0.268726 | 0.294958 | — | — | — |
| unique.test | COMPILE | 0.116498 | 0.283371 | 0.306143 | — | — | — |
| unpack_args.test | COMPILE | 0.110263 | 0.261665 | 0.282978 | — | — | — |
| upper_bound.test | COMPILE | 0.111947 | 0.263534 | 0.291410 | — | — | — |
| vector.test | COMPILE | 0.127083 | 0.313165 | 0.342293 | — | — | — |
| vector_c.test | COMPILE | 0.110962 | 0.260444 | 0.290627 | — | — | — |
| zip_view.test | COMPILE | 0.155105 | 0.389784 | 0.415616 | — | — | — |
| string.test | RUN | 0.327698 | 1.066789 | 0.903176 | 0.001148 | 0.001000 | 0.001141 |
| issue_69.test | RUN | 0.009962 | 0.029176 | 0.029611 | 0.000361 | 0.000421 | 0.000909 |
| issue_84.test | RUN | 0.026582 | 0.057242 | 0.054227 | 0.000350 | 0.000366 | 0.000839 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 1.006× | 1.004×, 1.007× | 1.010× |
| clang | 1.109× | 1.107×, 1.110× | 0.998× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1365 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/43796354412).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| bool.test | 10 | 0.000903s | 0.000910s | 0.000913s | byte equality observed |
| char.test | 10 | 0.000900s | 0.000904s | 0.000907s | byte equality observed |
| char_unsigned.test | 10 | 0.000898s | 0.000896s | 0.000903s | byte equality observed |
| for_each.test | 10 | 0.000916s | 0.000917s | 0.000910s | byte equality observed |
| int.test | 10 | 0.000904s | 0.000904s | 0.000904s | byte equality observed |
| integral_c.test | 10 | 0.000900s | 0.000904s | 0.000902s | byte equality observed |
| integral_c_unsigned.test | 10 | 0.000895s | 0.000897s | 0.000907s | byte equality observed |
| issue_69.test | 10 | 0.000413s | 0.000431s | 0.000883s | byte equality observed |
| issue_84.test | 10 | 0.000407s | 0.000410s | 0.000880s | byte equality observed |
| size_t.test | 10 | 0.000897s | 0.000903s | 0.000907s | byte equality observed |
| string.test | 10 | 0.000910s | 0.000905s | 0.000911s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/43796354412).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
