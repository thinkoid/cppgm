# libs/mpl/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| increased_arity.test | COMPILE | 0.305409 | 0.837324 | 0.801865 | — | — | — |
| largest_int.test | COMPILE | 0.096055 | 0.244852 | 0.275699 | — | — | — |
| msvc_is_class.test | COMPILE | 0.011696 | 0.029477 | 0.035801 | — | — | — |
| template_arity.test | COMPILE | 0.092641 | 0.240807 | 0.270135 | — | — | — |
| is_seq.test | COMPILE | 0.004040 | 0.009988 | 0.021318 | — | — | — |
| token_equal.test | COMPILE | 0.004342 | 0.010405 | 0.020255 | — | — | — |
| advance.test | COMPILE | 0.106805 | 0.264859 | 0.307273 | — | — | — |
| always.test | COMPILE | 0.107151 | 0.276181 | 0.327692 | — | — | — |
| apply.test | COMPILE | 0.116415 | 0.290776 | 0.336219 | — | — | — |
| apply_wrap.test | COMPILE | 0.100573 | 0.245931 | 0.290937 | — | — | — |
| arithmetic.test | COMPILE | 0.108619 | 0.273939 | 0.328481 | — | — | — |
| as_sequence.test | COMPILE | 0.118355 | 0.299330 | 0.333026 | — | — | — |
| assert.test | COMPILE | 0.026742 | 0.054242 | 0.064287 | — | — | — |
| at.test | COMPILE | 0.115062 | 0.293283 | 0.343593 | — | — | — |
| back.test | COMPILE | 0.113105 | 0.279767 | 0.325405 | — | — | — |
| bind.test | COMPILE | 0.107439 | 0.269527 | 0.319079 | — | — | — |
| bitwise.test | COMPILE | 0.107284 | 0.271418 | 0.321084 | — | — | — |
| bool.test | RUN | 0.099845 | 0.242498 | 0.286050 | 0.001073 | 0.001199 | 0.001104 |
| comparison.test | COMPILE | 0.108653 | 0.272546 | 0.316741 | — | — | — |
| contains.test | COMPILE | 0.129851 | 0.330525 | 0.385493 | — | — | — |
| copy.test | COMPILE | 0.152405 | 0.397184 | 0.460695 | — | — | — |
| copy_if.test | COMPILE | 0.139328 | 0.354515 | 0.413767 | — | — | — |
| count.test | COMPILE | 0.131512 | 0.328363 | 0.390305 | — | — | — |
| count_if.test | COMPILE | 0.143171 | 0.336570 | 0.408975 | — | — | — |
| deque.test | COMPILE | 0.130822 | 0.332607 | 0.388834 | — | — | — |
| distance.test | COMPILE | 0.123321 | 0.304203 | 0.362413 | — | — | — |
| empty.test | COMPILE | 0.106610 | 0.274438 | 0.312881 | — | — | — |
| equal.test | COMPILE | 0.127298 | 0.307230 | 0.370582 | — | — | — |
| erase.test | COMPILE | 0.143887 | 0.363094 | 0.433706 | — | — | — |
| erase_range.test | COMPILE | 0.139120 | 0.346737 | 0.406641 | — | — | — |
| eval_if.test | COMPILE | 0.099954 | 0.252636 | 0.298929 | — | — | — |
| filter_view.test | COMPILE | 0.140462 | 0.343553 | 0.408602 | — | — | — |
| find.test | COMPILE | 0.132995 | 0.333680 | 0.396222 | — | — | — |
| find_if.test | COMPILE | 0.134730 | 0.346376 | 0.404609 | — | — | — |
| fold.test | COMPILE | 0.140368 | 0.360788 | 0.425316 | — | — | — |
| for_each.test | RUN | 0.206175 | 0.528997 | 0.667655 | 0.001126 | 0.001285 | 0.001130 |
| front.test | COMPILE | 0.111128 | 0.284571 | 0.334509 | — | — | — |
| get_tag_def.test | COMPILE | 0.096961 | 0.247118 | 0.293350 | — | — | — |
| has_xxx.test | COMPILE | 0.107483 | 0.259964 | 0.336495 | — | — | — |
| identity.test | COMPILE | 0.110482 | 0.277337 | 0.328832 | — | — | — |
| if.test | COMPILE | 0.101584 | 0.245397 | 0.295408 | — | — | — |
| index_of.test | COMPILE | 0.125391 | 0.317811 | 0.371506 | — | — | — |
| inherit.test | COMPILE | 0.101521 | 0.256163 | 0.304372 | — | — | — |
| insert.test | COMPILE | 0.147437 | 0.375223 | 0.441702 | — | — | — |
| insert_range.test | COMPILE | 0.198865 | 0.510920 | 0.628843 | — | — | — |
| int.test | RUN | 0.105126 | 0.273964 | 0.319913 | 0.001054 | 0.001138 | 0.001105 |
| char.test | RUN | 0.103143 | 0.273939 | 0.324901 | 0.001118 | 0.001130 | 0.001111 |
| char_unsigned.test | RUN | 0.104317 | 0.272828 | 0.320428 | 0.001067 | 0.001411 | 0.001119 |
| integral_c.test | RUN | 0.122123 | 0.352026 | 0.404084 | 0.001092 | 0.001201 | 0.001125 |
| integral_c_unsigned.test | RUN | 0.121162 | 0.348877 | 0.396978 | 0.001133 | 0.001204 | 0.001062 |
| is_placeholder.test | COMPILE | 0.097253 | 0.244492 | 0.286697 | — | — | — |
| is_sequence.test | COMPILE | 0.122670 | 0.299379 | 0.360020 | — | — | — |
| iterator_tags.test | COMPILE | 0.100910 | 0.252164 | 0.306705 | — | — | — |
| joint_view.test | COMPILE | 0.136190 | 0.337857 | 0.405141 | — | — | — |
| lambda.test | COMPILE | 0.128080 | 0.319631 | 0.383450 | — | — | — |
| lambda_args.test | COMPILE | 0.118495 | 0.300370 | 0.376252 | — | — | — |
| list.test | COMPILE | 0.123966 | 0.312689 | 0.372656 | — | — | — |
| list_c.test | COMPILE | 0.120237 | 0.308377 | 0.380638 | — | — | — |
| logical.test | COMPILE | 0.098705 | 0.249769 | 0.298848 | — | — | — |
| lower_bound.test | COMPILE | 0.129672 | 0.311153 | 0.368725 | — | — | — |
| map.test | COMPILE | 0.155280 | 0.396825 | 0.471729 | — | — | — |
| max_element.test | COMPILE | 0.124401 | 0.302545 | 0.357982 | — | — | — |
| min_max.test | COMPILE | 0.101549 | 0.257995 | 0.312213 | — | — | — |
| multiset.test | COMPILE | 0.134104 | 0.336466 | 0.391576 | — | — | — |
| next.test | COMPILE | 0.100347 | 0.242721 | 0.292063 | — | — | — |
| no_has_xxx.test | COMPILE | 0.108445 | 0.258240 | 0.322948 | — | — | — |
| numeric_ops.test | COMPILE | 0.120638 | 0.296250 | 0.356467 | — | — | — |
| pair_view.test | COMPILE | 0.137682 | 0.339007 | 0.394282 | — | — | — |
| partition.test | COMPILE | 0.150714 | 0.370299 | 0.440464 | — | — | — |
| pop_front.test | COMPILE | 0.122690 | 0.299189 | 0.354863 | — | — | — |
| push_back.test | COMPILE | 0.106206 | 0.255432 | 0.303692 | — | — | — |
| push_front.test | COMPILE | 0.124284 | 0.306961 | 0.356892 | — | — | — |
| quote.test | COMPILE | 0.103481 | 0.244005 | 0.296277 | — | — | — |
| range_c.test | COMPILE | 0.128727 | 0.323632 | 0.378474 | — | — | — |
| remove.test | COMPILE | 0.137883 | 0.337950 | 0.389504 | — | — | — |
| remove_if.test | COMPILE | 0.140742 | 0.351710 | 0.410891 | — | — | — |
| replace.test | COMPILE | 0.147561 | 0.381345 | 0.440813 | — | — | — |
| replace_if.test | COMPILE | 0.151737 | 0.391556 | 0.452186 | — | — | — |
| reverse.test | COMPILE | 0.145164 | 0.363053 | 0.415916 | — | — | — |
| same_as.test | COMPILE | 0.110841 | 0.266243 | 0.317762 | — | — | — |
| set.test | COMPILE | 0.191373 | 0.500666 | 0.619442 | — | — | — |
| set_c.test | COMPILE | 0.137015 | 0.346799 | 0.414274 | — | — | — |
| single_view.test | COMPILE | 0.130440 | 0.329485 | 0.373286 | — | — | — |
| size.test | COMPILE | 0.123275 | 0.295974 | 0.346649 | — | — | — |
| size_t.test | RUN | 0.107339 | 0.275261 | 0.315665 | 0.001140 | 0.001427 | 0.001197 |
| sizeof.test | COMPILE | 0.099336 | 0.238962 | 0.287201 | — | — | — |
| sort.test | COMPILE | 0.163803 | 0.397199 | 0.468154 | — | — | — |
| stable_partition.test | COMPILE | 0.150567 | 0.379698 | 0.437615 | — | — | — |
| transform.test | COMPILE | 0.160921 | 0.402636 | 0.474612 | — | — | — |
| transform_view.test | COMPILE | 0.130035 | 0.318539 | 0.377712 | — | — | — |
| unique.test | COMPILE | 0.135930 | 0.340432 | 0.396501 | — | — | — |
| unpack_args.test | COMPILE | 0.127595 | 0.320683 | 0.361866 | — | — | — |
| upper_bound.test | COMPILE | 0.129790 | 0.309297 | 0.365904 | — | — | — |
| vector.test | COMPILE | 0.150435 | 0.382347 | 0.450599 | — | — | — |
| vector_c.test | COMPILE | 0.130730 | 0.321303 | 0.386838 | — | — | — |
| zip_view.test | COMPILE | 0.183395 | 0.468063 | 0.555309 | — | — | — |
| string.test | RUN | 0.312675 | 0.953870 | 0.854160 | 0.000966 | 0.000871 | 0.000823 |
| issue_69.test | RUN | 0.011748 | 0.034881 | 0.036895 | 0.000459 | 0.000489 | 0.001168 |
| issue_84.test | RUN | 0.022156 | 0.068629 | 0.068725 | 0.000376 | 0.000385 | 0.000817 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 1.012× | 1.011×, 1.014× | 1.009× |
| clang | 1.104× | 1.123×, 1.085× | 0.999× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1364 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44402206984).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| bool.test | 10 | 0.000804s | 0.000788s | 0.000822s | byte equality observed |
| char.test | 10 | 0.000806s | 0.000771s | 0.000816s | byte equality observed |
| char_unsigned.test | 10 | 0.000802s | 0.000778s | 0.000809s | byte equality observed |
| for_each.test | 10 | 0.000804s | 0.000830s | 0.000803s | byte equality observed |
| int.test | 10 | 0.000795s | 0.000788s | 0.000791s | byte equality observed |
| integral_c.test | 10 | 0.000786s | 0.000803s | 0.000810s | byte equality observed |
| integral_c_unsigned.test | 10 | 0.000781s | 0.000804s | 0.000804s | byte equality observed |
| issue_69.test | 10 | 0.000355s | 0.000368s | 0.000790s | byte equality observed |
| issue_84.test | 10 | 0.000363s | 0.000359s | 0.000774s | byte equality observed |
| size_t.test | 10 | 0.000800s | 0.000806s | 0.000774s | byte equality observed |
| string.test | 10 | 0.000797s | 0.000802s | 0.000826s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44402206984).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
