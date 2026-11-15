# libs/mpl/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| increased_arity.test | COMPILE | 0.269375 | 0.723990 | 0.652594 | — | — | — |
| largest_int.test | COMPILE | 0.099422 | 0.211964 | 0.255985 | — | — | — |
| msvc_is_class.test | COMPILE | 0.012563 | 0.028939 | 0.032060 | — | — | — |
| template_arity.test | COMPILE | 0.099029 | 0.204757 | 0.247554 | — | — | — |
| is_seq.test | COMPILE | 0.004442 | 0.010700 | 0.021573 | — | — | — |
| token_equal.test | COMPILE | 0.004815 | 0.011132 | 0.021923 | — | — | — |
| advance.test | COMPILE | 0.112228 | 0.230938 | 0.265252 | — | — | — |
| always.test | COMPILE | 0.116284 | 0.230570 | 0.272689 | — | — | — |
| apply.test | COMPILE | 0.125500 | 0.240671 | 0.287439 | — | — | — |
| apply_wrap.test | COMPILE | 0.108878 | 0.233535 | 0.237338 | — | — | — |
| arithmetic.test | COMPILE | 0.115088 | 0.271629 | 0.278706 | — | — | — |
| as_sequence.test | COMPILE | 0.122242 | 0.299105 | 0.302989 | — | — | — |
| assert.test | COMPILE | 0.028169 | 0.054447 | 0.059697 | — | — | — |
| at.test | COMPILE | 0.120941 | 0.261261 | 0.289793 | — | — | — |
| back.test | COMPILE | 0.114572 | 0.251392 | 0.274092 | — | — | — |
| bind.test | COMPILE | 0.111835 | 0.238658 | 0.283680 | — | — | — |
| bitwise.test | COMPILE | 0.111671 | 0.241086 | 0.275065 | — | — | — |
| bool.test | RUN | 0.104094 | 0.222002 | 0.241671 | 0.001674 | 0.001510 | 0.001334 |
| comparison.test | COMPILE | 0.110926 | 0.244365 | 0.272677 | — | — | — |
| contains.test | COMPILE | 0.135436 | 0.295363 | 0.312777 | — | — | — |
| copy.test | COMPILE | 0.161719 | 0.352816 | 0.389393 | — | — | — |
| copy_if.test | COMPILE | 0.138946 | 0.308597 | 0.378300 | — | — | — |
| count.test | COMPILE | 0.134854 | 0.283224 | 0.363664 | — | — | — |
| count_if.test | COMPILE | 0.141145 | 0.302079 | 0.375841 | — | — | — |
| deque.test | COMPILE | 0.133589 | 0.289366 | 0.326329 | — | — | — |
| distance.test | COMPILE | 0.127058 | 0.259643 | 0.300506 | — | — | — |
| empty.test | COMPILE | 0.110665 | 0.235283 | 0.265278 | — | — | — |
| equal.test | COMPILE | 0.132066 | 0.269103 | 0.308565 | — | — | — |
| erase.test | COMPILE | 0.148464 | 0.309305 | 0.362002 | — | — | — |
| erase_range.test | COMPILE | 0.140373 | 0.295696 | 0.336797 | — | — | — |
| eval_if.test | COMPILE | 0.104206 | 0.212621 | 0.253139 | — | — | — |
| filter_view.test | COMPILE | 0.144375 | 0.297765 | 0.336408 | — | — | — |
| find.test | COMPILE | 0.138099 | 0.283763 | 0.334139 | — | — | — |
| find_if.test | COMPILE | 0.139368 | 0.295190 | 0.337535 | — | — | — |
| fold.test | COMPILE | 0.143831 | 0.302327 | 0.357808 | — | — | — |
| for_each.test | RUN | 0.209171 | 0.452494 | 0.561747 | 0.001575 | 0.001390 | 0.001504 |
| front.test | COMPILE | 0.109115 | 0.244187 | 0.274990 | — | — | — |
| get_tag_def.test | COMPILE | 0.099481 | 0.223177 | 0.247662 | — | — | — |
| has_xxx.test | COMPILE | 0.110142 | 0.229028 | 0.287655 | — | — | — |
| identity.test | COMPILE | 0.110569 | 0.249877 | 0.284966 | — | — | — |
| if.test | COMPILE | 0.098000 | 0.208885 | 0.253254 | — | — | — |
| index_of.test | COMPILE | 0.124424 | 0.275395 | 0.329018 | — | — | — |
| inherit.test | COMPILE | 0.102213 | 0.217147 | 0.262054 | — | — | — |
| insert.test | COMPILE | 0.144522 | 0.319977 | 0.375708 | — | — | — |
| insert_range.test | COMPILE | 0.198380 | 0.423216 | 0.533364 | — | — | — |
| int.test | RUN | 0.101968 | 0.232383 | 0.272006 | 0.001692 | 0.001264 | 0.001204 |
| char.test | RUN | 0.105373 | 0.236039 | 0.277783 | 0.001420 | 0.001337 | 0.001360 |
| char_unsigned.test | RUN | 0.109208 | 0.237716 | 0.272648 | 0.001471 | 0.001645 | 0.001444 |
| integral_c.test | RUN | 0.117549 | 0.297968 | 0.323146 | 0.001554 | 0.001522 | 0.001174 |
| integral_c_unsigned.test | RUN | 0.116118 | 0.298718 | 0.336510 | 0.001621 | 0.001539 | 0.001416 |
| is_placeholder.test | COMPILE | 0.100483 | 0.217559 | 0.256348 | — | — | — |
| is_sequence.test | COMPILE | 0.117124 | 0.262938 | 0.293184 | — | — | — |
| iterator_tags.test | COMPILE | 0.099006 | 0.216607 | 0.257863 | — | — | — |
| joint_view.test | COMPILE | 0.128412 | 0.292760 | 0.356004 | — | — | — |
| lambda.test | COMPILE | 0.119834 | 0.270914 | 0.320372 | — | — | — |
| lambda_args.test | COMPILE | 0.115914 | 0.261285 | 0.328141 | — | — | — |
| list.test | COMPILE | 0.124892 | 0.276832 | 0.328380 | — | — | — |
| list_c.test | COMPILE | 0.121172 | 0.263715 | 0.326263 | — | — | — |
| logical.test | COMPILE | 0.099291 | 0.208270 | 0.259001 | — | — | — |
| lower_bound.test | COMPILE | 0.124847 | 0.280167 | 0.329080 | — | — | — |
| map.test | COMPILE | 0.148192 | 0.344750 | 0.412576 | — | — | — |
| max_element.test | COMPILE | 0.120628 | 0.261029 | 0.316496 | — | — | — |
| min_max.test | COMPILE | 0.104989 | 0.232372 | 0.274465 | — | — | — |
| multiset.test | COMPILE | 0.127682 | 0.295699 | 0.344843 | — | — | — |
| next.test | COMPILE | 0.097407 | 0.208802 | 0.261333 | — | — | — |
| no_has_xxx.test | COMPILE | 0.107199 | 0.227159 | 0.285384 | — | — | — |
| numeric_ops.test | COMPILE | 0.117065 | 0.261860 | 0.306200 | — | — | — |
| pair_view.test | COMPILE | 0.136707 | 0.295889 | 0.350212 | — | — | — |
| partition.test | COMPILE | 0.146022 | 0.320820 | 0.382933 | — | — | — |
| pop_front.test | COMPILE | 0.119225 | 0.257697 | 0.313510 | — | — | — |
| push_back.test | COMPILE | 0.100334 | 0.219593 | 0.261676 | — | — | — |
| push_front.test | COMPILE | 0.115891 | 0.258486 | 0.319349 | — | — | — |
| quote.test | COMPILE | 0.097377 | 0.210272 | 0.263413 | — | — | — |
| range_c.test | COMPILE | 0.121294 | 0.285113 | 0.331666 | — | — | — |
| remove.test | COMPILE | 0.128587 | 0.301112 | 0.351860 | — | — | — |
| remove_if.test | COMPILE | 0.134070 | 0.305942 | 0.361725 | — | — | — |
| replace.test | COMPILE | 0.150815 | 0.330253 | 0.388847 | — | — | — |
| replace_if.test | COMPILE | 0.150703 | 0.326789 | 0.387567 | — | — | — |
| reverse.test | COMPILE | 0.148179 | 0.303956 | 0.368907 | — | — | — |
| same_as.test | COMPILE | 0.114208 | 0.227819 | 0.274743 | — | — | — |
| set.test | COMPILE | 0.197836 | 0.418865 | 0.546807 | — | — | — |
| set_c.test | COMPILE | 0.146274 | 0.289637 | 0.356292 | — | — | — |
| single_view.test | COMPILE | 0.128321 | 0.280521 | 0.318574 | — | — | — |
| size.test | COMPILE | 0.123363 | 0.257133 | 0.315518 | — | — | — |
| size_t.test | RUN | 0.110015 | 0.242315 | 0.288412 | 0.001550 | 0.001665 | 0.001451 |
| sizeof.test | COMPILE | 0.101586 | 0.209365 | 0.264852 | — | — | — |
| sort.test | COMPILE | 0.165208 | 0.345957 | 0.409749 | — | — | — |
| stable_partition.test | COMPILE | 0.155323 | 0.323802 | 0.391962 | — | — | — |
| transform.test | COMPILE | 0.162979 | 0.407927 | 0.413246 | — | — | — |
| transform_view.test | COMPILE | 0.137535 | 0.349234 | 0.337255 | — | — | — |
| unique.test | COMPILE | 0.140913 | 0.353205 | 0.349792 | — | — | — |
| unpack_args.test | COMPILE | 0.133066 | 0.342993 | 0.324760 | — | — | — |
| upper_bound.test | COMPILE | 0.132064 | 0.278442 | 0.331319 | — | — | — |
| vector.test | COMPILE | 0.152217 | 0.334776 | 0.387672 | — | — | — |
| vector_c.test | COMPILE | 0.134364 | 0.271332 | 0.331875 | — | — | — |
| zip_view.test | COMPILE | 0.183899 | 0.411221 | 0.479614 | — | — | — |
| string.test | RUN | 0.281940 | 0.834070 | 0.704803 | 0.001303 | 0.001211 | 0.001093 |
| issue_69.test | RUN | 0.013273 | 0.036757 | 0.038869 | 0.000719 | 0.000536 | 0.001310 |
| issue_84.test | RUN | 0.030358 | 0.065455 | 0.064818 | 0.000655 | 0.000460 | 0.001083 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.987× | 0.971×, 1.004× | 1.027× |
| clang | 1.119× | 1.121×, 1.117× | 0.967× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1364 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43686398833).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| bool.test | 10 | 0.000865s | 0.000840s | 0.000887s | byte equality observed |
| char.test | 10 | 0.000862s | 0.000856s | 0.000878s | byte equality observed |
| char_unsigned.test | 10 | 0.000863s | 0.000854s | 0.000886s | byte equality observed |
| for_each.test | 10 | 0.000884s | 0.000887s | 0.000877s | byte equality observed |
| int.test | 10 | 0.000858s | 0.000852s | 0.000866s | byte equality observed |
| integral_c.test | 10 | 0.000880s | 0.000856s | 0.000909s | byte equality observed |
| integral_c_unsigned.test | 10 | 0.000883s | 0.000880s | 0.000875s | byte equality observed |
| issue_69.test | 10 | 0.000410s | 0.000394s | 0.000854s | byte equality observed |
| issue_84.test | 10 | 0.000400s | 0.000395s | 0.000866s | byte equality observed |
| size_t.test | 10 | 0.000883s | 0.000857s | 0.000890s | byte equality observed |
| string.test | 10 | 0.000880s | 0.000862s | 0.000883s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43686398833).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
