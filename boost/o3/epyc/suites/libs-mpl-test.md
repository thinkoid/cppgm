# libs/mpl/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| increased_arity.test | COMPILE | 0.499142 | 1.399182 | 1.532472 | — | — | — |
| largest_int.test | COMPILE | 0.168465 | 0.377357 | 0.605892 | — | — | — |
| msvc_is_class.test | COMPILE | 0.020832 | 0.049700 | 0.054533 | — | — | — |
| template_arity.test | COMPILE | 0.162538 | 0.389931 | 0.592277 | — | — | — |
| is_seq.test | COMPILE | 0.006555 | 0.018165 | 0.030178 | — | — | — |
| token_equal.test | COMPILE | 0.006652 | 0.018299 | 0.029291 | — | — | — |
| advance.test | COMPILE | 0.185420 | 0.432403 | 0.608565 | — | — | — |
| always.test | COMPILE | 0.186999 | 0.423481 | 0.639203 | — | — | — |
| apply.test | COMPILE | 0.200948 | 0.480473 | 0.678267 | — | — | — |
| apply_wrap.test | COMPILE | 0.172456 | 0.394285 | 0.587818 | — | — | — |
| arithmetic.test | COMPILE | 0.187118 | 0.459424 | 0.622284 | — | — | — |
| as_sequence.test | COMPILE | 0.207357 | 0.500294 | 0.690701 | — | — | — |
| assert.test | COMPILE | 0.047490 | 0.100705 | 0.121360 | — | — | — |
| at.test | COMPILE | 0.202057 | 0.484268 | 0.684271 | — | — | — |
| back.test | COMPILE | 0.190046 | 0.467857 | 0.659991 | — | — | — |
| bind.test | COMPILE | 0.183549 | 0.439876 | 0.625559 | — | — | — |
| bitwise.test | COMPILE | 0.189305 | 0.451487 | 0.669652 | — | — | — |
| bool.test | RUN | 0.169224 | 0.402124 | 0.601868 | 0.001860 | 0.002006 | 0.002179 |
| comparison.test | COMPILE | 0.186249 | 0.456716 | 0.634059 | — | — | — |
| contains.test | COMPILE | 0.224282 | 0.535014 | 0.763571 | — | — | — |
| copy.test | COMPILE | 0.273719 | 0.652656 | 0.904230 | — | — | — |
| copy_if.test | COMPILE | 0.235893 | 0.577836 | 0.823493 | — | — | — |
| count.test | COMPILE | 0.225849 | 0.537523 | 0.784085 | — | — | — |
| count_if.test | COMPILE | 0.243367 | 0.557846 | 0.803816 | — | — | — |
| deque.test | COMPILE | 0.230640 | 0.562295 | 0.783624 | — | — | — |
| distance.test | COMPILE | 0.212789 | 0.499964 | 0.719655 | — | — | — |
| empty.test | COMPILE | 0.187268 | 0.443788 | 0.649632 | — | — | — |
| equal.test | COMPILE | 0.216141 | 0.500633 | 0.733364 | — | — | — |
| erase.test | COMPILE | 0.256121 | 0.609879 | 0.869910 | — | — | — |
| erase_range.test | COMPILE | 0.233303 | 0.587284 | 0.806970 | — | — | — |
| eval_if.test | COMPILE | 0.180445 | 0.404349 | 0.628761 | — | — | — |
| filter_view.test | COMPILE | 0.235976 | 0.567513 | 0.801766 | — | — | — |
| find.test | COMPILE | 0.229218 | 0.568215 | 0.795664 | — | — | — |
| find_if.test | COMPILE | 0.237696 | 0.558813 | 0.806289 | — | — | — |
| fold.test | COMPILE | 0.244755 | 0.596059 | 0.843573 | — | — | — |
| for_each.test | RUN | 0.351130 | 0.846622 | 1.338866 | 0.001937 | 0.002015 | 0.002024 |
| front.test | COMPILE | 0.191161 | 0.485100 | 0.672590 | — | — | — |
| get_tag_def.test | COMPILE | 0.173266 | 0.393545 | 0.583808 | — | — | — |
| has_xxx.test | COMPILE | 0.188960 | 0.437082 | 0.673139 | — | — | — |
| identity.test | COMPILE | 0.191132 | 0.451181 | 0.669626 | — | — | — |
| if.test | COMPILE | 0.164438 | 0.395642 | 0.600662 | — | — | — |
| index_of.test | COMPILE | 0.221113 | 0.519128 | 0.730259 | — | — | — |
| inherit.test | COMPILE | 0.175538 | 0.417690 | 0.604251 | — | — | — |
| insert.test | COMPILE | 0.252901 | 0.627776 | 0.886343 | — | — | — |
| insert_range.test | COMPILE | 0.341496 | 0.851253 | 1.285112 | — | — | — |
| int.test | RUN | 0.184168 | 0.465216 | 0.632940 | 0.001886 | 0.001773 | 0.001726 |
| char.test | RUN | 0.182928 | 0.471623 | 0.639136 | 0.001938 | 0.002006 | 0.001877 |
| char_unsigned.test | RUN | 0.186993 | 0.452949 | 0.652713 | 0.001882 | 0.002179 | 0.002114 |
| integral_c.test | RUN | 0.206290 | 0.581594 | 0.770180 | 0.002018 | 0.001956 | 0.002152 |
| integral_c_unsigned.test | RUN | 0.210505 | 0.579873 | 0.800115 | 0.001759 | 0.002031 | 0.002035 |
| is_placeholder.test | COMPILE | 0.169016 | 0.416849 | 0.561830 | — | — | — |
| is_sequence.test | COMPILE | 0.206843 | 0.492776 | 0.676232 | — | — | — |
| iterator_tags.test | COMPILE | 0.176581 | 0.411632 | 0.557981 | — | — | — |
| joint_view.test | COMPILE | 0.234576 | 0.565815 | 0.798382 | — | — | — |
| lambda.test | COMPILE | 0.212708 | 0.519418 | 0.738907 | — | — | — |
| lambda_args.test | COMPILE | 0.200431 | 0.508251 | 0.742184 | — | — | — |
| list.test | COMPILE | 0.211957 | 0.522103 | 0.730677 | — | — | — |
| list_c.test | COMPILE | 0.217526 | 0.502075 | 0.749622 | — | — | — |
| logical.test | COMPILE | 0.171962 | 0.414081 | 0.593809 | — | — | — |
| lower_bound.test | COMPILE | 0.220833 | 0.536116 | 0.751344 | — | — | — |
| map.test | COMPILE | 0.262394 | 0.654460 | 0.928901 | — | — | — |
| max_element.test | COMPILE | 0.211624 | 0.492494 | 0.700797 | — | — | — |
| min_max.test | COMPILE | 0.176459 | 0.445626 | 0.634572 | — | — | — |
| multiset.test | COMPILE | 0.229733 | 0.555358 | 0.792707 | — | — | — |
| next.test | COMPILE | 0.173560 | 0.408663 | 0.572087 | — | — | — |
| no_has_xxx.test | COMPILE | 0.185807 | 0.433459 | 0.640560 | — | — | — |
| numeric_ops.test | COMPILE | 0.207020 | 0.494400 | 0.705414 | — | — | — |
| pair_view.test | COMPILE | 0.236414 | 0.561592 | 0.815651 | — | — | — |
| partition.test | COMPILE | 0.256211 | 0.612380 | 0.883082 | — | — | — |
| pop_front.test | COMPILE | 0.209418 | 0.498245 | 0.731778 | — | — | — |
| push_back.test | COMPILE | 0.180791 | 0.425305 | 0.616436 | — | — | — |
| push_front.test | COMPILE | 0.209513 | 0.507496 | 0.721308 | — | — | — |
| quote.test | COMPILE | 0.172118 | 0.405603 | 0.590096 | — | — | — |
| range_c.test | COMPILE | 0.220490 | 0.523298 | 0.751652 | — | — | — |
| remove.test | COMPILE | 0.231146 | 0.563366 | 0.786339 | — | — | — |
| remove_if.test | COMPILE | 0.237976 | 0.577149 | 0.815526 | — | — | — |
| replace.test | COMPILE | 0.255378 | 0.627793 | 0.860599 | — | — | — |
| replace_if.test | COMPILE | 0.260074 | 0.628421 | 0.894415 | — | — | — |
| reverse.test | COMPILE | 0.245958 | 0.589628 | 0.848575 | — | — | — |
| same_as.test | COMPILE | 0.188204 | 0.430463 | 0.633003 | — | — | — |
| set.test | COMPILE | 0.335034 | 0.841656 | 1.244967 | — | — | — |
| set_c.test | COMPILE | 0.245309 | 0.570715 | 0.866483 | — | — | — |
| single_view.test | COMPILE | 0.216884 | 0.527592 | 0.723125 | — | — | — |
| size.test | COMPILE | 0.215256 | 0.504164 | 0.706774 | — | — | — |
| size_t.test | RUN | 0.180182 | 0.461710 | 0.655701 | 0.001768 | 0.001964 | 0.002086 |
| sizeof.test | COMPILE | 0.173279 | 0.401859 | 0.558429 | — | — | — |
| sort.test | COMPILE | 0.267897 | 0.649881 | 0.937336 | — | — | — |
| stable_partition.test | COMPILE | 0.256904 | 0.631273 | 0.853212 | — | — | — |
| transform.test | COMPILE | 0.273108 | 0.662535 | 0.944096 | — | — | — |
| transform_view.test | COMPILE | 0.219181 | 0.538805 | 0.752979 | — | — | — |
| unique.test | COMPILE | 0.234845 | 0.555618 | 0.786923 | — | — | — |
| unpack_args.test | COMPILE | 0.216794 | 0.525470 | 0.717719 | — | — | — |
| upper_bound.test | COMPILE | 0.224550 | 0.520261 | 0.755966 | — | — | — |
| vector.test | COMPILE | 0.253918 | 0.637777 | 0.878232 | — | — | — |
| vector_c.test | COMPILE | 0.224486 | 0.508067 | 0.799332 | — | — | — |
| zip_view.test | COMPILE | 0.311495 | 0.774659 | 1.000467 | — | — | — |
| string.test | RUN | 0.487371 | 1.406529 | 1.439201 | 0.001446 | 0.001703 | 0.001513 |
| issue_69.test | RUN | 0.022632 | 0.059208 | 0.068843 | 0.000750 | 0.000849 | 0.001934 |
| issue_84.test | RUN | 0.046936 | 0.125591 | 0.123887 | 0.000569 | 0.000684 | 0.001395 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 1.006× | 1.017×, 0.995× | 0.969× |
| clang | 1.086× | 1.074×, 1.099× | 1.007× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1361 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43664060660).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| bool.test | 10 | 0.001244s | 0.001254s | 0.001239s | byte equality observed |
| char.test | 10 | 0.001232s | 0.001268s | 0.001223s | byte equality observed |
| char_unsigned.test | 10 | 0.001279s | 0.001240s | 0.001291s | byte equality observed |
| for_each.test | 10 | 0.001292s | 0.001297s | 0.001228s | byte equality observed |
| int.test | 10 | 0.001284s | 0.001261s | 0.001249s | byte equality observed |
| integral_c.test | 10 | 0.001245s | 0.001260s | 0.001267s | byte equality observed |
| integral_c_unsigned.test | 10 | 0.001249s | 0.001256s | 0.001228s | byte equality observed |
| issue_69.test | 10 | 0.000580s | 0.000593s | 0.001265s | byte equality observed |
| issue_84.test | 10 | 0.000572s | 0.000579s | 0.001206s | byte equality observed |
| size_t.test | 10 | 0.001263s | 0.001248s | 0.001255s | byte equality observed |
| string.test | 10 | 0.001259s | 0.001248s | 0.001282s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43664060660).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
