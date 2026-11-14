# libs/mpl/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| increased_arity.test | COMPILE | 0.367094 | 1.021673 | 1.041240 | — | — | — |
| largest_int.test | COMPILE | 0.121720 | 0.284595 | 0.346274 | — | — | — |
| msvc_is_class.test | COMPILE | 0.015414 | 0.036156 | 0.040556 | — | — | — |
| template_arity.test | COMPILE | 0.126036 | 0.274582 | 0.343834 | — | — | — |
| is_seq.test | COMPILE | 0.005110 | 0.014187 | 0.026726 | — | — | — |
| token_equal.test | COMPILE | 0.005364 | 0.014602 | 0.028110 | — | — | — |
| advance.test | COMPILE | 0.135468 | 0.322289 | 0.389151 | — | — | — |
| always.test | COMPILE | 0.138109 | 0.313991 | 0.433190 | — | — | — |
| apply.test | COMPILE | 0.146210 | 0.349085 | 0.452134 | — | — | — |
| apply_wrap.test | COMPILE | 0.125222 | 0.291072 | 0.392550 | — | — | — |
| arithmetic.test | COMPILE | 0.135560 | 0.339845 | 0.398911 | — | — | — |
| as_sequence.test | COMPILE | 0.147974 | 0.371140 | 0.450890 | — | — | — |
| assert.test | COMPILE | 0.035058 | 0.072013 | 0.087662 | — | — | — |
| at.test | COMPILE | 0.146488 | 0.351874 | 0.442991 | — | — | — |
| back.test | COMPILE | 0.140203 | 0.340416 | 0.423896 | — | — | — |
| bind.test | COMPILE | 0.134590 | 0.329861 | 0.421984 | — | — | — |
| bitwise.test | COMPILE | 0.138465 | 0.336345 | 0.429892 | — | — | — |
| bool.test | RUN | 0.126825 | 0.292216 | 0.371609 | 0.001732 | 0.001864 | 0.001681 |
| comparison.test | COMPILE | 0.132718 | 0.328437 | 0.407923 | — | — | — |
| contains.test | COMPILE | 0.166147 | 0.408977 | 0.504298 | — | — | — |
| copy.test | COMPILE | 0.199295 | 0.481625 | 0.586500 | — | — | — |
| copy_if.test | COMPILE | 0.173680 | 0.437631 | 0.532492 | — | — | — |
| count.test | COMPILE | 0.169274 | 0.402297 | 0.503347 | — | — | — |
| count_if.test | COMPILE | 0.171431 | 0.411910 | 0.534285 | — | — | — |
| deque.test | COMPILE | 0.167776 | 0.412014 | 0.506536 | — | — | — |
| distance.test | COMPILE | 0.156249 | 0.365213 | 0.466120 | — | — | — |
| empty.test | COMPILE | 0.134979 | 0.322083 | 0.401474 | — | — | — |
| equal.test | COMPILE | 0.158129 | 0.387189 | 0.482269 | — | — | — |
| erase.test | COMPILE | 0.182425 | 0.446973 | 0.564956 | — | — | — |
| erase_range.test | COMPILE | 0.174186 | 0.418106 | 0.523254 | — | — | — |
| eval_if.test | COMPILE | 0.127654 | 0.313946 | 0.394852 | — | — | — |
| filter_view.test | COMPILE | 0.171829 | 0.425812 | 0.525525 | — | — | — |
| find.test | COMPILE | 0.167142 | 0.393149 | 0.512832 | — | — | — |
| find_if.test | COMPILE | 0.172460 | 0.417927 | 0.526880 | — | — | — |
| fold.test | COMPILE | 0.178961 | 0.426562 | 0.552624 | — | — | — |
| for_each.test | RUN | 0.256841 | 0.647048 | 0.866579 | 0.001630 | 0.001620 | 0.001630 |
| front.test | COMPILE | 0.140293 | 0.333644 | 0.436715 | — | — | — |
| get_tag_def.test | COMPILE | 0.125401 | 0.295550 | 0.389524 | — | — | — |
| has_xxx.test | COMPILE | 0.137564 | 0.332017 | 0.438482 | — | — | — |
| identity.test | COMPILE | 0.141162 | 0.332601 | 0.435288 | — | — | — |
| if.test | COMPILE | 0.124641 | 0.305396 | 0.393250 | — | — | — |
| index_of.test | COMPILE | 0.160072 | 0.389919 | 0.473388 | — | — | — |
| inherit.test | COMPILE | 0.130539 | 0.312394 | 0.400772 | — | — | — |
| insert.test | COMPILE | 0.184006 | 0.439563 | 0.574484 | — | — | — |
| insert_range.test | COMPILE | 0.252794 | 0.626341 | 0.834965 | — | — | — |
| int.test | RUN | 0.132300 | 0.341316 | 0.411492 | 0.001540 | 0.001621 | 0.001656 |
| char.test | RUN | 0.134272 | 0.331265 | 0.418022 | 0.001643 | 0.001826 | 0.001664 |
| char_unsigned.test | RUN | 0.131174 | 0.336284 | 0.405313 | 0.001619 | 0.001970 | 0.001776 |
| integral_c.test | RUN | 0.150089 | 0.418893 | 0.523761 | 0.001671 | 0.001714 | 0.001556 |
| integral_c_unsigned.test | RUN | 0.149565 | 0.428059 | 0.521539 | 0.001780 | 0.001690 | 0.001369 |
| is_placeholder.test | COMPILE | 0.126302 | 0.302502 | 0.350648 | — | — | — |
| is_sequence.test | COMPILE | 0.153427 | 0.359842 | 0.467100 | — | — | — |
| iterator_tags.test | COMPILE | 0.131129 | 0.314720 | 0.396025 | — | — | — |
| joint_view.test | COMPILE | 0.170239 | 0.407459 | 0.527396 | — | — | — |
| lambda.test | COMPILE | 0.163112 | 0.392352 | 0.495143 | — | — | — |
| lambda_args.test | COMPILE | 0.152180 | 0.362986 | 0.482167 | — | — | — |
| list.test | COMPILE | 0.156223 | 0.376552 | 0.483987 | — | — | — |
| list_c.test | COMPILE | 0.155635 | 0.383092 | 0.498268 | — | — | — |
| logical.test | COMPILE | 0.128184 | 0.298142 | 0.392244 | — | — | — |
| lower_bound.test | COMPILE | 0.163179 | 0.398823 | 0.475977 | — | — | — |
| map.test | COMPILE | 0.190946 | 0.482664 | 0.606327 | — | — | — |
| max_element.test | COMPILE | 0.152676 | 0.376451 | 0.469757 | — | — | — |
| min_max.test | COMPILE | 0.131224 | 0.309780 | 0.414194 | — | — | — |
| multiset.test | COMPILE | 0.168494 | 0.419525 | 0.511561 | — | — | — |
| next.test | COMPILE | 0.124609 | 0.299569 | 0.381388 | — | — | — |
| no_has_xxx.test | COMPILE | 0.133733 | 0.314734 | 0.419913 | — | — | — |
| numeric_ops.test | COMPILE | 0.146843 | 0.371979 | 0.466159 | — | — | — |
| pair_view.test | COMPILE | 0.175900 | 0.404876 | 0.510422 | — | — | — |
| partition.test | COMPILE | 0.185052 | 0.451532 | 0.572740 | — | — | — |
| pop_front.test | COMPILE | 0.151367 | 0.373035 | 0.464737 | — | — | — |
| push_back.test | COMPILE | 0.129854 | 0.314166 | 0.410319 | — | — | — |
| push_front.test | COMPILE | 0.156986 | 0.373062 | 0.464947 | — | — | — |
| quote.test | COMPILE | 0.130528 | 0.297735 | 0.382326 | — | — | — |
| range_c.test | COMPILE | 0.159722 | 0.391072 | 0.486745 | — | — | — |
| remove.test | COMPILE | 0.167594 | 0.408675 | 0.513699 | — | — | — |
| remove_if.test | COMPILE | 0.173996 | 0.420492 | 0.520982 | — | — | — |
| replace.test | COMPILE | 0.189572 | 0.451142 | 0.565047 | — | — | — |
| replace_if.test | COMPILE | 0.186419 | 0.468420 | 0.578762 | — | — | — |
| reverse.test | COMPILE | 0.177167 | 0.431054 | 0.544551 | — | — | — |
| same_as.test | COMPILE | 0.137122 | 0.321562 | 0.408058 | — | — | — |
| set.test | COMPILE | 0.236257 | 0.597681 | 0.807537 | — | — | — |
| set_c.test | COMPILE | 0.174842 | 0.404683 | 0.557170 | — | — | — |
| single_view.test | COMPILE | 0.156199 | 0.392230 | 0.475375 | — | — | — |
| size.test | COMPILE | 0.153251 | 0.358918 | 0.455325 | — | — | — |
| size_t.test | RUN | 0.133209 | 0.325329 | 0.415119 | 0.001556 | 0.001860 | 0.001751 |
| sizeof.test | COMPILE | 0.122854 | 0.277297 | 0.361209 | — | — | — |
| sort.test | COMPILE | 0.200484 | 0.476654 | 0.585256 | — | — | — |
| stable_partition.test | COMPILE | 0.187078 | 0.440098 | 0.558385 | — | — | — |
| transform.test | COMPILE | 0.197983 | 0.484492 | 0.617919 | — | — | — |
| transform_view.test | COMPILE | 0.161895 | 0.376506 | 0.490633 | — | — | — |
| unique.test | COMPILE | 0.170713 | 0.404428 | 0.496931 | — | — | — |
| unpack_args.test | COMPILE | 0.158062 | 0.376876 | 0.478340 | — | — | — |
| upper_bound.test | COMPILE | 0.164238 | 0.380445 | 0.483724 | — | — | — |
| vector.test | COMPILE | 0.185374 | 0.463858 | 0.576796 | — | — | — |
| vector_c.test | COMPILE | 0.162146 | 0.392266 | 0.509588 | — | — | — |
| zip_view.test | COMPILE | 0.227144 | 0.565386 | 0.708135 | — | — | — |
| string.test | RUN | 0.370889 | 1.112959 | 1.006157 | 0.001276 | 0.001326 | 0.001238 |
| issue_69.test | RUN | 0.016985 | 0.046087 | 0.051817 | 0.000592 | 0.000787 | 0.001572 |
| issue_84.test | RUN | 0.034690 | 0.086413 | 0.090049 | 0.000522 | 0.000665 | 0.001224 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 1.006× | 1.006×, 1.007× | 0.980× |
| clang | 1.118× | 1.117×, 1.118× | 0.990× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1361 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43632677224).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| bool.test | 10 | 0.000971s | 0.001003s | 0.001002s | byte equality observed |
| char.test | 10 | 0.000979s | 0.000972s | 0.001010s | byte equality observed |
| char_unsigned.test | 10 | 0.001006s | 0.000980s | 0.001042s | byte equality observed |
| for_each.test | 10 | 0.000996s | 0.001048s | 0.001018s | byte equality observed |
| int.test | 10 | 0.000982s | 0.001023s | 0.000989s | byte equality observed |
| integral_c.test | 10 | 0.000997s | 0.001008s | 0.001004s | byte equality observed |
| integral_c_unsigned.test | 10 | 0.000989s | 0.001017s | 0.000993s | byte equality observed |
| issue_69.test | 10 | 0.000464s | 0.000458s | 0.000993s | byte equality observed |
| issue_84.test | 10 | 0.000461s | 0.000458s | 0.000959s | byte equality observed |
| size_t.test | 10 | 0.001013s | 0.001007s | 0.000981s | byte equality observed |
| string.test | 10 | 0.000997s | 0.001003s | 0.001021s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43632677224).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
