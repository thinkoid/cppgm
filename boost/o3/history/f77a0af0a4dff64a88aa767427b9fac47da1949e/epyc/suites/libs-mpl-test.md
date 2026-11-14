# libs/mpl/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| increased_arity.test | COMPILE | 0.371435 | 1.026686 | 1.029227 | — | — | — |
| largest_int.test | COMPILE | 0.124227 | 0.289099 | 0.378111 | — | — | — |
| msvc_is_class.test | COMPILE | 0.015435 | 0.038616 | 0.044846 | — | — | — |
| template_arity.test | COMPILE | 0.127456 | 0.287962 | 0.371828 | — | — | — |
| is_seq.test | COMPILE | 0.005296 | 0.013930 | 0.027304 | — | — | — |
| token_equal.test | COMPILE | 0.005447 | 0.013883 | 0.026049 | — | — | — |
| advance.test | COMPILE | 0.140424 | 0.329338 | 0.401453 | — | — | — |
| always.test | COMPILE | 0.140471 | 0.323725 | 0.441722 | — | — | — |
| apply.test | COMPILE | 0.152856 | 0.354017 | 0.460967 | — | — | — |
| apply_wrap.test | COMPILE | 0.130829 | 0.302811 | 0.381749 | — | — | — |
| arithmetic.test | COMPILE | 0.143907 | 0.336101 | 0.436613 | — | — | — |
| as_sequence.test | COMPILE | 0.155989 | 0.372656 | 0.465501 | — | — | — |
| assert.test | COMPILE | 0.036702 | 0.072575 | 0.085919 | — | — | — |
| at.test | COMPILE | 0.152791 | 0.357330 | 0.468922 | — | — | — |
| back.test | COMPILE | 0.142269 | 0.343630 | 0.452754 | — | — | — |
| bind.test | COMPILE | 0.139533 | 0.333844 | 0.423152 | — | — | — |
| bitwise.test | COMPILE | 0.143229 | 0.341056 | 0.440395 | — | — | — |
| bool.test | RUN | 0.127088 | 0.297864 | 0.398760 | 0.001471 | 0.001548 | 0.001815 |
| comparison.test | COMPILE | 0.137231 | 0.317552 | 0.431924 | — | — | — |
| contains.test | COMPILE | 0.168963 | 0.376519 | 0.504484 | — | — | — |
| copy.test | COMPILE | 0.208392 | 0.474363 | 0.621918 | — | — | — |
| copy_if.test | COMPILE | 0.183396 | 0.425166 | 0.547193 | — | — | — |
| count.test | COMPILE | 0.172102 | 0.406369 | 0.527782 | — | — | — |
| count_if.test | COMPILE | 0.182691 | 0.419427 | 0.533947 | — | — | — |
| deque.test | COMPILE | 0.175626 | 0.406449 | 0.518517 | — | — | — |
| distance.test | COMPILE | 0.163825 | 0.375414 | 0.479655 | — | — | — |
| empty.test | COMPILE | 0.142062 | 0.338378 | 0.433052 | — | — | — |
| equal.test | COMPILE | 0.166726 | 0.376361 | 0.476489 | — | — | — |
| erase.test | COMPILE | 0.189628 | 0.451205 | 0.563755 | — | — | — |
| erase_range.test | COMPILE | 0.183832 | 0.425904 | 0.534650 | — | — | — |
| eval_if.test | COMPILE | 0.134943 | 0.302308 | 0.400143 | — | — | — |
| filter_view.test | COMPILE | 0.180303 | 0.427485 | 0.520414 | — | — | — |
| find.test | COMPILE | 0.176497 | 0.413037 | 0.511257 | — | — | — |
| find_if.test | COMPILE | 0.181667 | 0.414452 | 0.525454 | — | — | — |
| fold.test | COMPILE | 0.188679 | 0.431671 | 0.563551 | — | — | — |
| for_each.test | RUN | 0.274085 | 0.652764 | 0.851600 | 0.001689 | 0.001626 | 0.001776 |
| front.test | COMPILE | 0.147608 | 0.349513 | 0.451801 | — | — | — |
| get_tag_def.test | COMPILE | 0.131236 | 0.308716 | 0.378120 | — | — | — |
| has_xxx.test | COMPILE | 0.149435 | 0.318737 | 0.423901 | — | — | — |
| identity.test | COMPILE | 0.152819 | 0.349090 | 0.402701 | — | — | — |
| if.test | COMPILE | 0.131755 | 0.293046 | 0.379325 | — | — | — |
| index_of.test | COMPILE | 0.167608 | 0.386911 | 0.491277 | — | — | — |
| inherit.test | COMPILE | 0.137047 | 0.303893 | 0.382669 | — | — | — |
| insert.test | COMPILE | 0.197172 | 0.464450 | 0.589803 | — | — | — |
| insert_range.test | COMPILE | 0.268882 | 0.632308 | 0.840465 | — | — | — |
| int.test | RUN | 0.137386 | 0.341484 | 0.432030 | 0.001821 | 0.001738 | 0.001647 |
| char.test | RUN | 0.140498 | 0.349337 | 0.422741 | 0.001798 | 0.001630 | 0.001559 |
| char_unsigned.test | RUN | 0.146935 | 0.335710 | 0.406040 | 0.001824 | 0.001976 | 0.001733 |
| integral_c.test | RUN | 0.160931 | 0.430155 | 0.530762 | 0.001772 | 0.001820 | 0.001652 |
| integral_c_unsigned.test | RUN | 0.163427 | 0.422751 | 0.491617 | 0.001786 | 0.001750 | 0.001778 |
| is_placeholder.test | COMPILE | 0.134788 | 0.309577 | 0.400904 | — | — | — |
| is_sequence.test | COMPILE | 0.166325 | 0.366038 | 0.443276 | — | — | — |
| iterator_tags.test | COMPILE | 0.141364 | 0.308221 | 0.372501 | — | — | — |
| joint_view.test | COMPILE | 0.186096 | 0.420139 | 0.535554 | — | — | — |
| lambda.test | COMPILE | 0.169678 | 0.388252 | 0.488713 | — | — | — |
| lambda_args.test | COMPILE | 0.161753 | 0.367827 | 0.501960 | — | — | — |
| list.test | COMPILE | 0.171838 | 0.391103 | 0.489205 | — | — | — |
| list_c.test | COMPILE | 0.167560 | 0.376794 | 0.488941 | — | — | — |
| logical.test | COMPILE | 0.138078 | 0.301249 | 0.379509 | — | — | — |
| lower_bound.test | COMPILE | 0.178106 | 0.395228 | 0.492200 | — | — | — |
| map.test | COMPILE | 0.204644 | 0.491706 | 0.617116 | — | — | — |
| max_element.test | COMPILE | 0.166890 | 0.385967 | 0.464992 | — | — | — |
| min_max.test | COMPILE | 0.141618 | 0.311394 | 0.402544 | — | — | — |
| multiset.test | COMPILE | 0.176227 | 0.419591 | 0.505364 | — | — | — |
| next.test | COMPILE | 0.135356 | 0.297874 | 0.391291 | — | — | — |
| no_has_xxx.test | COMPILE | 0.145826 | 0.320455 | 0.425527 | — | — | — |
| numeric_ops.test | COMPILE | 0.158963 | 0.381534 | 0.450137 | — | — | — |
| pair_view.test | COMPILE | 0.185048 | 0.415652 | 0.518298 | — | — | — |
| partition.test | COMPILE | 0.200303 | 0.469791 | 0.590377 | — | — | — |
| pop_front.test | COMPILE | 0.161884 | 0.374890 | 0.466461 | — | — | — |
| push_back.test | COMPILE | 0.139063 | 0.329467 | 0.407721 | — | — | — |
| push_front.test | COMPILE | 0.164081 | 0.374087 | 0.461806 | — | — | — |
| quote.test | COMPILE | 0.135503 | 0.304076 | 0.384840 | — | — | — |
| range_c.test | COMPILE | 0.169837 | 0.399172 | 0.503500 | — | — | — |
| remove.test | COMPILE | 0.177705 | 0.426236 | 0.513749 | — | — | — |
| remove_if.test | COMPILE | 0.185420 | 0.432385 | 0.539543 | — | — | — |
| replace.test | COMPILE | 0.197391 | 0.464322 | 0.583268 | — | — | — |
| replace_if.test | COMPILE | 0.200202 | 0.479264 | 0.594512 | — | — | — |
| reverse.test | COMPILE | 0.194953 | 0.446174 | 0.559797 | — | — | — |
| same_as.test | COMPILE | 0.147553 | 0.330879 | 0.416749 | — | — | — |
| set.test | COMPILE | 0.265548 | 0.628535 | 0.840393 | — | — | — |
| set_c.test | COMPILE | 0.190115 | 0.433517 | 0.567463 | — | — | — |
| single_view.test | COMPILE | 0.172864 | 0.386229 | 0.485016 | — | — | — |
| size.test | COMPILE | 0.167029 | 0.374259 | 0.462763 | — | — | — |
| size_t.test | RUN | 0.137285 | 0.335641 | 0.421853 | 0.001564 | 0.001938 | 0.001901 |
| sizeof.test | COMPILE | 0.132219 | 0.294436 | 0.376717 | — | — | — |
| sort.test | COMPILE | 0.221029 | 0.491629 | 0.619918 | — | — | — |
| stable_partition.test | COMPILE | 0.202108 | 0.454022 | 0.562382 | — | — | — |
| transform.test | COMPILE | 0.211672 | 0.494026 | 0.634464 | — | — | — |
| transform_view.test | COMPILE | 0.172237 | 0.393582 | 0.497050 | — | — | — |
| unique.test | COMPILE | 0.182599 | 0.419434 | 0.528271 | — | — | — |
| unpack_args.test | COMPILE | 0.170192 | 0.395335 | 0.491772 | — | — | — |
| upper_bound.test | COMPILE | 0.170866 | 0.392762 | 0.477010 | — | — | — |
| vector.test | COMPILE | 0.197583 | 0.468264 | 0.604772 | — | — | — |
| vector_c.test | COMPILE | 0.176620 | 0.395385 | 0.523247 | — | — | — |
| zip_view.test | COMPILE | 0.246136 | 0.601403 | 0.752109 | — | — | — |
| string.test | RUN | 0.381771 | 1.157621 | 1.036797 | 0.001497 | 0.001412 | 0.001295 |
| issue_69.test | RUN | 0.017692 | 0.046720 | 0.045443 | 0.000662 | 0.000628 | 0.001436 |
| issue_84.test | RUN | 0.042838 | 0.093080 | 0.084652 | 0.000680 | 0.000649 | 0.001332 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.997× | 1.002×, 0.993× | 1.002× |
| clang | 1.117×† | 1.107×, 1.127× | 1.073× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1362 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43628287753).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| bool.test | 10 | 0.000993s | 0.001001s | 0.000990s | byte equality observed |
| char.test | 10 | 0.000995s | 0.001059s | 0.001015s | byte equality observed |
| char_unsigned.test | 10 | 0.000999s | 0.000989s | 0.000991s | byte equality observed |
| for_each.test | 10 | 0.001009s | 0.001014s | 0.001009s | byte equality observed |
| int.test | 10 | 0.001005s | 0.000985s | 0.001012s | byte equality observed |
| integral_c.test | 10 | 0.000986s | 0.000967s | 0.001001s | byte equality observed |
| integral_c_unsigned.test | 10 | 0.001023s | 0.001021s | 0.001001s | byte equality observed |
| issue_69.test | 10 | 0.000462s | 0.000460s | 0.000980s | byte equality observed |
| issue_84.test | 10 | 0.000467s | 0.000453s | 0.000985s | byte equality observed |
| size_t.test | 10 | 0.001020s | 0.001017s | 0.001009s | byte equality observed |
| string.test | 10 | 0.000994s | 0.001030s | 0.001017s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43628287753).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
