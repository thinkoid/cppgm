# libs/mpl/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| increased_arity.test | COMPILE | 0.306548 | 0.841617 | 0.793334 | — | — | — |
| largest_int.test | COMPILE | 0.094401 | 0.231608 | 0.267933 | — | — | — |
| msvc_is_class.test | COMPILE | 0.011144 | 0.029036 | 0.034096 | — | — | — |
| template_arity.test | COMPILE | 0.099653 | 0.230610 | 0.267743 | — | — | — |
| is_seq.test | COMPILE | 0.003783 | 0.010341 | 0.019617 | — | — | — |
| token_equal.test | COMPILE | 0.003968 | 0.010588 | 0.019239 | — | — | — |
| advance.test | COMPILE | 0.106318 | 0.266724 | 0.311460 | — | — | — |
| always.test | COMPILE | 0.111099 | 0.263650 | 0.321224 | — | — | — |
| apply.test | COMPILE | 0.116237 | 0.286549 | 0.334963 | — | — | — |
| apply_wrap.test | COMPILE | 0.100822 | 0.239261 | 0.290489 | — | — | — |
| arithmetic.test | COMPILE | 0.110093 | 0.276077 | 0.323182 | — | — | — |
| as_sequence.test | COMPILE | 0.120144 | 0.296786 | 0.330033 | — | — | — |
| assert.test | COMPILE | 0.025676 | 0.054795 | 0.062462 | — | — | — |
| at.test | COMPILE | 0.120032 | 0.290436 | 0.343726 | — | — | — |
| back.test | COMPILE | 0.115104 | 0.279230 | 0.323298 | — | — | — |
| bind.test | COMPILE | 0.110362 | 0.263713 | 0.314504 | — | — | — |
| bitwise.test | COMPILE | 0.107863 | 0.270157 | 0.316880 | — | — | — |
| bool.test | RUN | 0.098168 | 0.240544 | 0.286852 | 0.001034 | 0.001205 | 0.001068 |
| comparison.test | COMPILE | 0.105174 | 0.266990 | 0.315523 | — | — | — |
| contains.test | COMPILE | 0.133424 | 0.331108 | 0.377204 | — | — | — |
| copy.test | COMPILE | 0.153286 | 0.396321 | 0.456843 | — | — | — |
| copy_if.test | COMPILE | 0.139144 | 0.351436 | 0.406692 | — | — | — |
| count.test | COMPILE | 0.129535 | 0.328379 | 0.390174 | — | — | — |
| count_if.test | COMPILE | 0.137901 | 0.339695 | 0.405749 | — | — | — |
| deque.test | COMPILE | 0.134767 | 0.325393 | 0.386711 | — | — | — |
| distance.test | COMPILE | 0.124687 | 0.300066 | 0.356738 | — | — | — |
| empty.test | COMPILE | 0.107145 | 0.269151 | 0.310187 | — | — | — |
| equal.test | COMPILE | 0.128094 | 0.309064 | 0.365657 | — | — | — |
| erase.test | COMPILE | 0.144827 | 0.357972 | 0.431459 | — | — | — |
| erase_range.test | COMPILE | 0.135849 | 0.342538 | 0.402518 | — | — | — |
| eval_if.test | COMPILE | 0.101359 | 0.242105 | 0.297071 | — | — | — |
| filter_view.test | COMPILE | 0.137395 | 0.339839 | 0.404958 | — | — | — |
| find.test | COMPILE | 0.133944 | 0.327621 | 0.391714 | — | — | — |
| find_if.test | COMPILE | 0.136315 | 0.340577 | 0.407261 | — | — | — |
| fold.test | COMPILE | 0.141995 | 0.355013 | 0.422197 | — | — | — |
| for_each.test | RUN | 0.210420 | 0.512507 | 0.662933 | 0.001153 | 0.001336 | 0.001180 |
| front.test | COMPILE | 0.111844 | 0.279312 | 0.329441 | — | — | — |
| get_tag_def.test | COMPILE | 0.100695 | 0.244928 | 0.289712 | — | — | — |
| has_xxx.test | COMPILE | 0.110270 | 0.254373 | 0.331921 | — | — | — |
| identity.test | COMPILE | 0.107316 | 0.271782 | 0.333486 | — | — | — |
| if.test | COMPILE | 0.101465 | 0.236651 | 0.297894 | — | — | — |
| index_of.test | COMPILE | 0.130546 | 0.310668 | 0.352928 | — | — | — |
| inherit.test | COMPILE | 0.107583 | 0.247272 | 0.296478 | — | — | — |
| insert.test | COMPILE | 0.151167 | 0.371587 | 0.440882 | — | — | — |
| insert_range.test | COMPILE | 0.208830 | 0.499319 | 0.631432 | — | — | — |
| int.test | RUN | 0.108573 | 0.277757 | 0.328669 | 0.001354 | 0.001262 | 0.001228 |
| char.test | RUN | 0.109417 | 0.267703 | 0.323732 | 0.001138 | 0.001331 | 0.001149 |
| char_unsigned.test | RUN | 0.109385 | 0.271988 | 0.321027 | 0.001097 | 0.001211 | 0.001267 |
| integral_c.test | RUN | 0.124767 | 0.348029 | 0.404955 | 0.001001 | 0.001242 | 0.001065 |
| integral_c_unsigned.test | RUN | 0.121312 | 0.349870 | 0.387879 | 0.001072 | 0.001221 | 0.001135 |
| is_placeholder.test | COMPILE | 0.100480 | 0.239207 | 0.296817 | — | — | — |
| is_sequence.test | COMPILE | 0.124918 | 0.294995 | 0.346370 | — | — | — |
| iterator_tags.test | COMPILE | 0.107077 | 0.254088 | 0.304117 | — | — | — |
| joint_view.test | COMPILE | 0.141446 | 0.338455 | 0.400207 | — | — | — |
| lambda.test | COMPILE | 0.126600 | 0.315132 | 0.372146 | — | — | — |
| lambda_args.test | COMPILE | 0.120567 | 0.292420 | 0.368863 | — | — | — |
| list.test | COMPILE | 0.126069 | 0.311623 | 0.367157 | — | — | — |
| list_c.test | COMPILE | 0.122869 | 0.307042 | 0.372411 | — | — | — |
| logical.test | COMPILE | 0.101248 | 0.248929 | 0.294960 | — | — | — |
| lower_bound.test | COMPILE | 0.132100 | 0.313745 | 0.376321 | — | — | — |
| map.test | COMPILE | 0.155774 | 0.395133 | 0.472787 | — | — | — |
| max_element.test | COMPILE | 0.123333 | 0.301068 | 0.366635 | — | — | — |
| min_max.test | COMPILE | 0.106471 | 0.261055 | 0.301896 | — | — | — |
| multiset.test | COMPILE | 0.134849 | 0.337027 | 0.396784 | — | — | — |
| next.test | COMPILE | 0.100530 | 0.247104 | 0.300680 | — | — | — |
| no_has_xxx.test | COMPILE | 0.109002 | 0.258853 | 0.332269 | — | — | — |
| numeric_ops.test | COMPILE | 0.120334 | 0.300921 | 0.343078 | — | — | — |
| pair_view.test | COMPILE | 0.138226 | 0.336041 | 0.401875 | — | — | — |
| partition.test | COMPILE | 0.150300 | 0.373988 | 0.440959 | — | — | — |
| pop_front.test | COMPILE | 0.122003 | 0.300349 | 0.360228 | — | — | — |
| push_back.test | COMPILE | 0.103937 | 0.253049 | 0.299857 | — | — | — |
| push_front.test | COMPILE | 0.124318 | 0.305210 | 0.366751 | — | — | — |
| quote.test | COMPILE | 0.100062 | 0.246451 | 0.298180 | — | — | — |
| range_c.test | COMPILE | 0.129659 | 0.320711 | 0.383781 | — | — | — |
| remove.test | COMPILE | 0.138471 | 0.335729 | 0.394933 | — | — | — |
| remove_if.test | COMPILE | 0.144591 | 0.354087 | 0.417263 | — | — | — |
| replace.test | COMPILE | 0.151707 | 0.385613 | 0.442019 | — | — | — |
| replace_if.test | COMPILE | 0.155338 | 0.391061 | 0.450325 | — | — | — |
| reverse.test | COMPILE | 0.144860 | 0.356957 | 0.420687 | — | — | — |
| same_as.test | COMPILE | 0.105516 | 0.259934 | 0.314759 | — | — | — |
| set.test | COMPILE | 0.193878 | 0.504637 | 0.627490 | — | — | — |
| set_c.test | COMPILE | 0.142376 | 0.341055 | 0.419126 | — | — | — |
| single_view.test | COMPILE | 0.125788 | 0.318613 | 0.369894 | — | — | — |
| size.test | COMPILE | 0.121687 | 0.294746 | 0.352208 | — | — | — |
| size_t.test | RUN | 0.105800 | 0.268517 | 0.333613 | 0.001212 | 0.001316 | 0.001297 |
| sizeof.test | COMPILE | 0.096864 | 0.234249 | 0.296952 | — | — | — |
| sort.test | COMPILE | 0.161763 | 0.399270 | 0.483178 | — | — | — |
| stable_partition.test | COMPILE | 0.154494 | 0.377512 | 0.452900 | — | — | — |
| transform.test | COMPILE | 0.158880 | 0.394522 | 0.486602 | — | — | — |
| transform_view.test | COMPILE | 0.128139 | 0.323200 | 0.388806 | — | — | — |
| unique.test | COMPILE | 0.135655 | 0.341759 | 0.399266 | — | — | — |
| unpack_args.test | COMPILE | 0.126203 | 0.307533 | 0.371666 | — | — | — |
| upper_bound.test | COMPILE | 0.127940 | 0.316523 | 0.376042 | — | — | — |
| vector.test | COMPILE | 0.147608 | 0.375102 | 0.452734 | — | — | — |
| vector_c.test | COMPILE | 0.124068 | 0.308658 | 0.379592 | — | — | — |
| zip_view.test | COMPILE | 0.187640 | 0.473564 | 0.555122 | — | — | — |
| string.test | RUN | 0.313243 | 0.950057 | 0.844139 | 0.000918 | 0.000865 | 0.000877 |
| issue_69.test | RUN | 0.012448 | 0.034917 | 0.038046 | 0.000502 | 0.000505 | 0.001126 |
| issue_84.test | RUN | 0.029754 | 0.071209 | 0.071683 | 0.000378 | 0.000365 | 0.000879 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.996× | 1.001×, 0.992× | 0.983× |
| clang | 1.097× | 1.101×, 1.094× | 1.010× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1363 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/43801643681).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| bool.test | 10 | 0.000800s | 0.000794s | 0.000812s | byte equality observed |
| char.test | 10 | 0.000805s | 0.000793s | 0.000769s | byte equality observed |
| char_unsigned.test | 10 | 0.000795s | 0.000798s | 0.000824s | byte equality observed |
| for_each.test | 10 | 0.000817s | 0.000820s | 0.000817s | byte equality observed |
| int.test | 10 | 0.000805s | 0.000806s | 0.000777s | byte equality observed |
| integral_c.test | 10 | 0.000795s | 0.000781s | 0.000790s | byte equality observed |
| integral_c_unsigned.test | 10 | 0.000811s | 0.000799s | 0.000798s | byte equality observed |
| issue_69.test | 10 | 0.000363s | 0.000356s | 0.000783s | byte equality observed |
| issue_84.test | 10 | 0.000352s | 0.000365s | 0.000778s | byte equality observed |
| size_t.test | 10 | 0.000788s | 0.000787s | 0.000772s | byte equality observed |
| string.test | 10 | 0.000805s | 0.000812s | 0.000809s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/43801643681).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
