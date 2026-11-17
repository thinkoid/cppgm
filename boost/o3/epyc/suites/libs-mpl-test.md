# libs/mpl/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| increased_arity.test | COMPILE | 0.504901 | 1.399090 | 1.556110 | — | — | — |
| largest_int.test | COMPILE | 0.166891 | 0.402141 | 0.587357 | — | — | — |
| msvc_is_class.test | COMPILE | 0.020510 | 0.046569 | 0.058812 | — | — | — |
| template_arity.test | COMPILE | 0.172404 | 0.380718 | 0.573193 | — | — | — |
| is_seq.test | COMPILE | 0.006778 | 0.017748 | 0.033303 | — | — | — |
| token_equal.test | COMPILE | 0.006685 | 0.018431 | 0.030995 | — | — | — |
| advance.test | COMPILE | 0.185582 | 0.424670 | 0.638062 | — | — | — |
| always.test | COMPILE | 0.189074 | 0.455536 | 0.665316 | — | — | — |
| apply.test | COMPILE | 0.212392 | 0.482377 | 0.683614 | — | — | — |
| apply_wrap.test | COMPILE | 0.175676 | 0.401698 | 0.584329 | — | — | — |
| arithmetic.test | COMPILE | 0.190322 | 0.450606 | 0.678827 | — | — | — |
| as_sequence.test | COMPILE | 0.214119 | 0.496926 | 0.707179 | — | — | — |
| assert.test | COMPILE | 0.048479 | 0.093888 | 0.121731 | — | — | — |
| at.test | COMPILE | 0.210632 | 0.475818 | 0.715567 | — | — | — |
| back.test | COMPILE | 0.195921 | 0.447132 | 0.685205 | — | — | — |
| bind.test | COMPILE | 0.191311 | 0.430588 | 0.657773 | — | — | — |
| bitwise.test | COMPILE | 0.197226 | 0.458466 | 0.673455 | — | — | — |
| bool.test | RUN | 0.173875 | 0.397184 | 0.612353 | 0.002012 | 0.001756 | 0.001692 |
| comparison.test | COMPILE | 0.189280 | 0.455333 | 0.667901 | — | — | — |
| contains.test | COMPILE | 0.226484 | 0.530012 | 0.776234 | — | — | — |
| copy.test | COMPILE | 0.280049 | 0.654850 | 0.928016 | — | — | — |
| copy_if.test | COMPILE | 0.243718 | 0.574383 | 0.846477 | — | — | — |
| count.test | COMPILE | 0.234878 | 0.541116 | 0.812470 | — | — | — |
| count_if.test | COMPILE | 0.242300 | 0.582871 | 0.822189 | — | — | — |
| deque.test | COMPILE | 0.236627 | 0.570985 | 0.790936 | — | — | — |
| distance.test | COMPILE | 0.215448 | 0.509242 | 0.738129 | — | — | — |
| empty.test | COMPILE | 0.186627 | 0.448735 | 0.649450 | — | — | — |
| equal.test | COMPILE | 0.225676 | 0.516660 | 0.745332 | — | — | — |
| erase.test | COMPILE | 0.250558 | 0.612479 | 0.858674 | — | — | — |
| erase_range.test | COMPILE | 0.240467 | 0.593286 | 0.824761 | — | — | — |
| eval_if.test | COMPILE | 0.182340 | 0.408015 | 0.612315 | — | — | — |
| filter_view.test | COMPILE | 0.238733 | 0.592792 | 0.814916 | — | — | — |
| find.test | COMPILE | 0.232111 | 0.552196 | 0.792596 | — | — | — |
| find_if.test | COMPILE | 0.239779 | 0.547326 | 0.807119 | — | — | — |
| fold.test | COMPILE | 0.245902 | 0.599996 | 0.861695 | — | — | — |
| for_each.test | RUN | 0.358102 | 0.865304 | 1.340855 | 0.001840 | 0.002038 | 0.002161 |
| front.test | COMPILE | 0.194645 | 0.459305 | 0.676938 | — | — | — |
| get_tag_def.test | COMPILE | 0.174362 | 0.400531 | 0.605108 | — | — | — |
| has_xxx.test | COMPILE | 0.194712 | 0.457343 | 0.656992 | — | — | — |
| identity.test | COMPILE | 0.195609 | 0.450868 | 0.662803 | — | — | — |
| if.test | COMPILE | 0.175054 | 0.402205 | 0.581241 | — | — | — |
| index_of.test | COMPILE | 0.224574 | 0.519795 | 0.762941 | — | — | — |
| inherit.test | COMPILE | 0.176803 | 0.417967 | 0.595281 | — | — | — |
| insert.test | COMPILE | 0.257083 | 0.609653 | 0.902712 | — | — | — |
| insert_range.test | COMPILE | 0.338855 | 0.838179 | 1.320332 | — | — | — |
| int.test | RUN | 0.183117 | 0.459130 | 0.656525 | 0.002168 | 0.001874 | 0.002196 |
| char.test | RUN | 0.183083 | 0.463578 | 0.677143 | 0.002044 | 0.001734 | 0.002142 |
| char_unsigned.test | RUN | 0.187915 | 0.461196 | 0.601808 | 0.001854 | 0.002249 | 0.002112 |
| integral_c.test | RUN | 0.197378 | 0.586191 | 0.812171 | 0.002026 | 0.002032 | 0.001883 |
| integral_c_unsigned.test | RUN | 0.212804 | 0.586486 | 0.811252 | 0.001854 | 0.002207 | 0.002174 |
| is_placeholder.test | COMPILE | 0.182939 | 0.419159 | 0.568760 | — | — | — |
| is_sequence.test | COMPILE | 0.206391 | 0.484757 | 0.696777 | — | — | — |
| iterator_tags.test | COMPILE | 0.186792 | 0.417370 | 0.620383 | — | — | — |
| joint_view.test | COMPILE | 0.239489 | 0.566810 | 0.813514 | — | — | — |
| lambda.test | COMPILE | 0.223674 | 0.512300 | 0.757768 | — | — | — |
| lambda_args.test | COMPILE | 0.207869 | 0.516121 | 0.777158 | — | — | — |
| list.test | COMPILE | 0.223581 | 0.540763 | 0.726322 | — | — | — |
| list_c.test | COMPILE | 0.216404 | 0.521590 | 0.771039 | — | — | — |
| logical.test | COMPILE | 0.180220 | 0.420222 | 0.606537 | — | — | — |
| lower_bound.test | COMPILE | 0.225348 | 0.521871 | 0.778751 | — | — | — |
| map.test | COMPILE | 0.274794 | 0.663686 | 0.930245 | — | — | — |
| max_element.test | COMPILE | 0.218909 | 0.493974 | 0.720052 | — | — | — |
| min_max.test | COMPILE | 0.192109 | 0.430255 | 0.628830 | — | — | — |
| multiset.test | COMPILE | 0.243990 | 0.562467 | 0.806580 | — | — | — |
| next.test | COMPILE | 0.176787 | 0.420296 | 0.584662 | — | — | — |
| no_has_xxx.test | COMPILE | 0.189240 | 0.428972 | 0.644296 | — | — | — |
| numeric_ops.test | COMPILE | 0.209035 | 0.498642 | 0.720567 | — | — | — |
| pair_view.test | COMPILE | 0.243843 | 0.557947 | 0.794123 | — | — | — |
| partition.test | COMPILE | 0.254889 | 0.621864 | 0.891100 | — | — | — |
| pop_front.test | COMPILE | 0.208215 | 0.494928 | 0.726882 | — | — | — |
| push_back.test | COMPILE | 0.181277 | 0.418939 | 0.630980 | — | — | — |
| push_front.test | COMPILE | 0.216442 | 0.505259 | 0.723073 | — | — | — |
| quote.test | COMPILE | 0.179009 | 0.411447 | 0.579944 | — | — | — |
| range_c.test | COMPILE | 0.231862 | 0.528431 | 0.765595 | — | — | — |
| remove.test | COMPILE | 0.241110 | 0.560204 | 0.804284 | — | — | — |
| remove_if.test | COMPILE | 0.251042 | 0.583293 | 0.829237 | — | — | — |
| replace.test | COMPILE | 0.251277 | 0.642528 | 0.860991 | — | — | — |
| replace_if.test | COMPILE | 0.264055 | 0.630507 | 0.916372 | — | — | — |
| reverse.test | COMPILE | 0.253658 | 0.584882 | 0.854160 | — | — | — |
| same_as.test | COMPILE | 0.197007 | 0.423477 | 0.644282 | — | — | — |
| set.test | COMPILE | 0.334525 | 0.849415 | 1.264468 | — | — | — |
| set_c.test | COMPILE | 0.250738 | 0.551167 | 0.868943 | — | — | — |
| single_view.test | COMPILE | 0.222924 | 0.509456 | 0.748226 | — | — | — |
| size.test | COMPILE | 0.223459 | 0.505731 | 0.703766 | — | — | — |
| size_t.test | RUN | 0.186528 | 0.459433 | 0.645478 | 0.001783 | 0.001954 | 0.002092 |
| sizeof.test | COMPILE | 0.178252 | 0.399768 | 0.559385 | — | — | — |
| sort.test | COMPILE | 0.273910 | 0.656619 | 0.928478 | — | — | — |
| stable_partition.test | COMPILE | 0.266232 | 0.619898 | 0.854634 | — | — | — |
| transform.test | COMPILE | 0.285916 | 0.660538 | 0.956633 | — | — | — |
| transform_view.test | COMPILE | 0.225993 | 0.554955 | 0.766197 | — | — | — |
| unique.test | COMPILE | 0.246629 | 0.563460 | 0.807445 | — | — | — |
| unpack_args.test | COMPILE | 0.223844 | 0.530493 | 0.748392 | — | — | — |
| upper_bound.test | COMPILE | 0.228508 | 0.525151 | 0.774473 | — | — | — |
| vector.test | COMPILE | 0.255625 | 0.643416 | 0.912255 | — | — | — |
| vector_c.test | COMPILE | 0.229838 | 0.516561 | 0.819603 | — | — | — |
| zip_view.test | COMPILE | 0.326407 | 0.779109 | 1.098957 | — | — | — |
| string.test | RUN | 0.466207 | 1.414842 | 1.419668 | 0.001676 | 0.001394 | 0.001628 |
| issue_69.test | RUN | 0.023902 | 0.058536 | 0.070052 | 0.000709 | 0.000829 | 0.002091 |
| issue_84.test | RUN | 0.050625 | 0.120632 | 0.136865 | 0.000673 | 0.000728 | 0.001470 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 1.012× | 1.007×, 1.017× | 0.999× |
| clang | 1.082× | 1.072×, 1.092× | 1.013× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1359 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44000592280).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| bool.test | 10 | 0.001233s | 0.001249s | 0.001225s | byte equality observed |
| char.test | 10 | 0.001245s | 0.001278s | 0.001203s | byte equality observed |
| char_unsigned.test | 10 | 0.001232s | 0.001236s | 0.001221s | byte equality observed |
| for_each.test | 10 | 0.001243s | 0.001243s | 0.001214s | byte equality observed |
| int.test | 10 | 0.001235s | 0.001286s | 0.001176s | byte equality observed |
| integral_c.test | 10 | 0.001249s | 0.001237s | 0.001161s | byte equality observed |
| integral_c_unsigned.test | 10 | 0.001267s | 0.001318s | 0.001230s | byte equality observed |
| issue_69.test | 10 | 0.000583s | 0.000579s | 0.001169s | byte equality observed |
| issue_84.test | 10 | 0.000576s | 0.000603s | 0.001197s | byte equality observed |
| size_t.test | 10 | 0.001247s | 0.001305s | 0.001240s | byte equality observed |
| string.test | 10 | 0.001231s | 0.001262s | 0.001266s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44000592280).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
