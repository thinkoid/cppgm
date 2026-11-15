# libs/mpl/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| increased_arity.test | COMPILE | 0.251336 | 0.715196 | 0.755096 | — | — | — |
| largest_int.test | COMPILE | 0.089418 | 0.210227 | 0.261323 | — | — | — |
| msvc_is_class.test | COMPILE | 0.011744 | 0.028531 | 0.034344 | — | — | — |
| template_arity.test | COMPILE | 0.090025 | 0.209186 | 0.257856 | — | — | — |
| is_seq.test | COMPILE | 0.004084 | 0.010661 | 0.024453 | — | — | — |
| token_equal.test | COMPILE | 0.004234 | 0.010814 | 0.024056 | — | — | — |
| advance.test | COMPILE | 0.097474 | 0.228249 | 0.303395 | — | — | — |
| always.test | COMPILE | 0.101329 | 0.232529 | 0.304512 | — | — | — |
| apply.test | COMPILE | 0.103882 | 0.246053 | 0.316890 | — | — | — |
| apply_wrap.test | COMPILE | 0.092478 | 0.209573 | 0.266274 | — | — | — |
| arithmetic.test | COMPILE | 0.098862 | 0.233732 | 0.308676 | — | — | — |
| as_sequence.test | COMPILE | 0.106351 | 0.259103 | 0.327511 | — | — | — |
| assert.test | COMPILE | 0.026309 | 0.051964 | 0.065106 | — | — | — |
| at.test | COMPILE | 0.104704 | 0.248344 | 0.323817 | — | — | — |
| back.test | COMPILE | 0.100403 | 0.242016 | 0.313426 | — | — | — |
| bind.test | COMPILE | 0.098230 | 0.229634 | 0.299321 | — | — | — |
| bitwise.test | COMPILE | 0.098577 | 0.239820 | 0.310779 | — | — | — |
| bool.test | RUN | 0.091506 | 0.210059 | 0.274958 | 0.001266 | 0.001528 | 0.001588 |
| comparison.test | COMPILE | 0.097365 | 0.232300 | 0.290736 | — | — | — |
| contains.test | COMPILE | 0.116193 | 0.289301 | 0.370839 | — | — | — |
| copy.test | COMPILE | 0.140069 | 0.355936 | 0.447249 | — | — | — |
| copy_if.test | COMPILE | 0.125681 | 0.305949 | 0.384789 | — | — | — |
| count.test | COMPILE | 0.123857 | 0.284132 | 0.375050 | — | — | — |
| count_if.test | COMPILE | 0.129408 | 0.289306 | 0.382340 | — | — | — |
| deque.test | COMPILE | 0.125145 | 0.290164 | 0.364069 | — | — | — |
| distance.test | COMPILE | 0.115679 | 0.263080 | 0.340457 | — | — | — |
| empty.test | COMPILE | 0.099013 | 0.227549 | 0.299318 | — | — | — |
| equal.test | COMPILE | 0.118193 | 0.268593 | 0.346390 | — | — | — |
| erase.test | COMPILE | 0.133573 | 0.314775 | 0.389688 | — | — | — |
| erase_range.test | COMPILE | 0.121972 | 0.299001 | 0.357133 | — | — | — |
| eval_if.test | COMPILE | 0.094075 | 0.217520 | 0.270862 | — | — | — |
| filter_view.test | COMPILE | 0.128976 | 0.298836 | 0.352943 | — | — | — |
| find.test | COMPILE | 0.130275 | 0.289655 | 0.351606 | — | — | — |
| find_if.test | COMPILE | 0.128023 | 0.317680 | 0.360275 | — | — | — |
| fold.test | COMPILE | 0.134762 | 0.324767 | 0.380937 | — | — | — |
| for_each.test | RUN | 0.185479 | 0.479427 | 0.589080 | 0.001430 | 0.001435 | 0.001601 |
| front.test | COMPILE | 0.102844 | 0.260634 | 0.304200 | — | — | — |
| get_tag_def.test | COMPILE | 0.091939 | 0.225678 | 0.259456 | — | — | — |
| has_xxx.test | COMPILE | 0.100933 | 0.241691 | 0.304417 | — | — | — |
| identity.test | COMPILE | 0.103074 | 0.255970 | 0.288636 | — | — | — |
| if.test | COMPILE | 0.090071 | 0.230360 | 0.272893 | — | — | — |
| index_of.test | COMPILE | 0.117556 | 0.292113 | 0.356225 | — | — | — |
| inherit.test | COMPILE | 0.096481 | 0.234061 | 0.283339 | — | — | — |
| insert.test | COMPILE | 0.133225 | 0.339651 | 0.395638 | — | — | — |
| insert_range.test | COMPILE | 0.186208 | 0.460273 | 0.583179 | — | — | — |
| int.test | RUN | 0.098254 | 0.249547 | 0.301448 | 0.001473 | 0.001441 | 0.001634 |
| char.test | RUN | 0.101333 | 0.255046 | 0.294753 | 0.001337 | 0.001390 | 0.001435 |
| char_unsigned.test | RUN | 0.098318 | 0.261714 | 0.295287 | 0.001401 | 0.001806 | 0.001751 |
| integral_c.test | RUN | 0.107339 | 0.314478 | 0.363023 | 0.001246 | 0.001624 | 0.001649 |
| integral_c_unsigned.test | RUN | 0.108737 | 0.313720 | 0.345749 | 0.001434 | 0.001482 | 0.001475 |
| is_placeholder.test | COMPILE | 0.092948 | 0.227658 | 0.278403 | — | — | — |
| is_sequence.test | COMPILE | 0.113870 | 0.275866 | 0.326616 | — | — | — |
| iterator_tags.test | COMPILE | 0.096355 | 0.237977 | 0.270857 | — | — | — |
| joint_view.test | COMPILE | 0.121533 | 0.306791 | 0.365360 | — | — | — |
| lambda.test | COMPILE | 0.115906 | 0.286292 | 0.339847 | — | — | — |
| lambda_args.test | COMPILE | 0.111895 | 0.271703 | 0.347234 | — | — | — |
| list.test | COMPILE | 0.113271 | 0.286898 | 0.336400 | — | — | — |
| list_c.test | COMPILE | 0.113652 | 0.279048 | 0.349990 | — | — | — |
| logical.test | COMPILE | 0.091762 | 0.227577 | 0.268322 | — | — | — |
| lower_bound.test | COMPILE | 0.117653 | 0.293782 | 0.348735 | — | — | — |
| map.test | COMPILE | 0.139133 | 0.359254 | 0.429780 | — | — | — |
| max_element.test | COMPILE | 0.116321 | 0.274203 | 0.327432 | — | — | — |
| min_max.test | COMPILE | 0.097406 | 0.231692 | 0.277806 | — | — | — |
| multiset.test | COMPILE | 0.120394 | 0.300046 | 0.358648 | — | — | — |
| next.test | COMPILE | 0.092495 | 0.210360 | 0.268824 | — | — | — |
| no_has_xxx.test | COMPILE | 0.099156 | 0.224509 | 0.294567 | — | — | — |
| numeric_ops.test | COMPILE | 0.107419 | 0.261842 | 0.316414 | — | — | — |
| pair_view.test | COMPILE | 0.126373 | 0.292070 | 0.372718 | — | — | — |
| partition.test | COMPILE | 0.132445 | 0.318026 | 0.403336 | — | — | — |
| pop_front.test | COMPILE | 0.112225 | 0.264456 | 0.328519 | — | — | — |
| push_back.test | COMPILE | 0.093611 | 0.218874 | 0.278232 | — | — | — |
| push_front.test | COMPILE | 0.113268 | 0.259687 | 0.332870 | — | — | — |
| quote.test | COMPILE | 0.096887 | 0.211260 | 0.278178 | — | — | — |
| range_c.test | COMPILE | 0.117194 | 0.283530 | 0.341897 | — | — | — |
| remove.test | COMPILE | 0.121968 | 0.295560 | 0.357504 | — | — | — |
| remove_if.test | COMPILE | 0.125807 | 0.301698 | 0.382279 | — | — | — |
| replace.test | COMPILE | 0.135139 | 0.336200 | 0.403634 | — | — | — |
| replace_if.test | COMPILE | 0.138960 | 0.329270 | 0.408393 | — | — | — |
| reverse.test | COMPILE | 0.133204 | 0.303915 | 0.383700 | — | — | — |
| same_as.test | COMPILE | 0.100034 | 0.226402 | 0.292043 | — | — | — |
| set.test | COMPILE | 0.181989 | 0.421718 | 0.572752 | — | — | — |
| set_c.test | COMPILE | 0.130270 | 0.300391 | 0.376213 | — | — | — |
| single_view.test | COMPILE | 0.121185 | 0.271198 | 0.337339 | — | — | — |
| size.test | COMPILE | 0.115959 | 0.261295 | 0.319542 | — | — | — |
| size_t.test | RUN | 0.099716 | 0.239739 | 0.306026 | 0.001378 | 0.001523 | 0.001586 |
| sizeof.test | COMPILE | 0.094898 | 0.210178 | 0.277455 | — | — | — |
| sort.test | COMPILE | 0.145860 | 0.339892 | 0.429863 | — | — | — |
| stable_partition.test | COMPILE | 0.140128 | 0.324384 | 0.404963 | — | — | — |
| transform.test | COMPILE | 0.146725 | 0.345748 | 0.426534 | — | — | — |
| transform_view.test | COMPILE | 0.123128 | 0.283945 | 0.347589 | — | — | — |
| unique.test | COMPILE | 0.128399 | 0.292111 | 0.360547 | — | — | — |
| unpack_args.test | COMPILE | 0.116468 | 0.271454 | 0.339459 | — | — | — |
| upper_bound.test | COMPILE | 0.119172 | 0.270693 | 0.339961 | — | — | — |
| vector.test | COMPILE | 0.134201 | 0.324822 | 0.407753 | — | — | — |
| vector_c.test | COMPILE | 0.121053 | 0.271079 | 0.348568 | — | — | — |
| zip_view.test | COMPILE | 0.170279 | 0.407017 | 0.501616 | — | — | — |
| string.test | RUN | 0.252722 | 0.813247 | 0.739805 | 0.001191 | 0.001203 | 0.001162 |
| issue_69.test | RUN | 0.012913 | 0.034465 | 0.041647 | 0.000480 | 0.000449 | 0.001522 |
| issue_84.test | RUN | 0.028661 | 0.066263 | 0.072535 | 0.000448 | 0.000467 | 0.001195 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.978× | 0.992×, 0.965× | 1.029× |
| clang | 1.087× | 1.103×, 1.071× | 0.994× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1363 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43658654032).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| bool.test | 10 | 0.000915s | 0.000877s | 0.000897s | byte equality observed |
| char.test | 10 | 0.000903s | 0.000878s | 0.000918s | byte equality observed |
| char_unsigned.test | 10 | 0.000914s | 0.000872s | 0.000921s | byte equality observed |
| for_each.test | 10 | 0.000897s | 0.000889s | 0.000906s | byte equality observed |
| int.test | 10 | 0.000901s | 0.000863s | 0.000901s | byte equality observed |
| integral_c.test | 10 | 0.000901s | 0.000858s | 0.000900s | byte equality observed |
| integral_c_unsigned.test | 10 | 0.000911s | 0.000880s | 0.000905s | byte equality observed |
| issue_69.test | 10 | 0.000414s | 0.000404s | 0.000869s | byte equality observed |
| issue_84.test | 10 | 0.000407s | 0.000405s | 0.000872s | byte equality observed |
| size_t.test | 10 | 0.000935s | 0.000915s | 0.000878s | byte equality observed |
| string.test | 10 | 0.000930s | 0.000913s | 0.000885s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43658654032).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
