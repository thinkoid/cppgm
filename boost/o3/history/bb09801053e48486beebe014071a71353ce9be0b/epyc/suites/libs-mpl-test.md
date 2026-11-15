# libs/mpl/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| increased_arity.test | COMPILE | 0.477000 | 1.282003 | 1.297876 | — | — | — |
| largest_int.test | COMPILE | 0.158648 | 0.356865 | 0.464461 | — | — | — |
| msvc_is_class.test | COMPILE | 0.019469 | 0.046812 | 0.054080 | — | — | — |
| template_arity.test | COMPILE | 0.155138 | 0.352078 | 0.467723 | — | — | — |
| is_seq.test | COMPILE | 0.006564 | 0.016812 | 0.030801 | — | — | — |
| token_equal.test | COMPILE | 0.007028 | 0.017517 | 0.032904 | — | — | — |
| advance.test | COMPILE | 0.171482 | 0.399108 | 0.516591 | — | — | — |
| always.test | COMPILE | 0.180502 | 0.391372 | 0.538799 | — | — | — |
| apply.test | COMPILE | 0.190257 | 0.435176 | 0.566176 | — | — | — |
| apply_wrap.test | COMPILE | 0.161251 | 0.365077 | 0.467695 | — | — | — |
| arithmetic.test | COMPILE | 0.175878 | 0.421859 | 0.552611 | — | — | — |
| as_sequence.test | COMPILE | 0.190399 | 0.449343 | 0.586850 | — | — | — |
| assert.test | COMPILE | 0.045198 | 0.090741 | 0.106142 | — | — | — |
| at.test | COMPILE | 0.188389 | 0.438995 | 0.569420 | — | — | — |
| back.test | COMPILE | 0.178836 | 0.424349 | 0.536451 | — | — | — |
| bind.test | COMPILE | 0.175057 | 0.405505 | 0.527499 | — | — | — |
| bitwise.test | COMPILE | 0.182017 | 0.419561 | 0.544633 | — | — | — |
| bool.test | RUN | 0.160413 | 0.358713 | 0.491454 | 0.001983 | 0.002235 | 0.002094 |
| comparison.test | COMPILE | 0.172375 | 0.399582 | 0.513503 | — | — | — |
| contains.test | COMPILE | 0.212197 | 0.497999 | 0.611965 | — | — | — |
| copy.test | COMPILE | 0.260621 | 0.600444 | 0.787051 | — | — | — |
| copy_if.test | COMPILE | 0.230800 | 0.536026 | 0.702165 | — | — | — |
| count.test | COMPILE | 0.216301 | 0.495059 | 0.657783 | — | — | — |
| count_if.test | COMPILE | 0.226576 | 0.507968 | 0.684473 | — | — | — |
| deque.test | COMPILE | 0.214151 | 0.512294 | 0.643493 | — | — | — |
| distance.test | COMPILE | 0.200929 | 0.462266 | 0.613497 | — | — | — |
| empty.test | COMPILE | 0.175135 | 0.410954 | 0.523858 | — | — | — |
| equal.test | COMPILE | 0.206115 | 0.462304 | 0.613282 | — | — | — |
| erase.test | COMPILE | 0.232372 | 0.553585 | 0.714989 | — | — | — |
| erase_range.test | COMPILE | 0.224300 | 0.527306 | 0.667078 | — | — | — |
| eval_if.test | COMPILE | 0.166073 | 0.373985 | 0.520038 | — | — | — |
| filter_view.test | COMPILE | 0.224160 | 0.512415 | 0.663298 | — | — | — |
| find.test | COMPILE | 0.216503 | 0.508469 | 0.661879 | — | — | — |
| find_if.test | COMPILE | 0.224214 | 0.508133 | 0.681243 | — | — | — |
| fold.test | COMPILE | 0.235112 | 0.544096 | 0.707816 | — | — | — |
| for_each.test | RUN | 0.330757 | 0.772896 | 1.098978 | 0.001788 | 0.001872 | 0.002141 |
| front.test | COMPILE | 0.185553 | 0.442729 | 0.558309 | — | — | — |
| get_tag_def.test | COMPILE | 0.160864 | 0.360391 | 0.501078 | — | — | — |
| has_xxx.test | COMPILE | 0.177633 | 0.398460 | 0.564696 | — | — | — |
| identity.test | COMPILE | 0.180335 | 0.401831 | 0.544112 | — | — | — |
| if.test | COMPILE | 0.160009 | 0.356741 | 0.514006 | — | — | — |
| index_of.test | COMPILE | 0.205319 | 0.484696 | 0.626664 | — | — | — |
| inherit.test | COMPILE | 0.168965 | 0.383859 | 0.511839 | — | — | — |
| insert.test | COMPILE | 0.239167 | 0.555700 | 0.741692 | — | — | — |
| insert_range.test | COMPILE | 0.323782 | 0.748854 | 1.055919 | — | — | — |
| int.test | RUN | 0.169197 | 0.407322 | 0.530218 | 0.002196 | 0.001951 | 0.002010 |
| char.test | RUN | 0.174360 | 0.418402 | 0.560366 | 0.001966 | 0.002075 | 0.002118 |
| char_unsigned.test | RUN | 0.174314 | 0.411676 | 0.499386 | 0.002062 | 0.002063 | 0.002004 |
| integral_c.test | RUN | 0.194466 | 0.522422 | 0.675904 | 0.002144 | 0.002210 | 0.001826 |
| integral_c_unsigned.test | RUN | 0.193384 | 0.527398 | 0.674185 | 0.002039 | 0.002094 | 0.001926 |
| is_placeholder.test | COMPILE | 0.165095 | 0.378007 | 0.453582 | — | — | — |
| is_sequence.test | COMPILE | 0.195406 | 0.446150 | 0.596281 | — | — | — |
| iterator_tags.test | COMPILE | 0.169268 | 0.376520 | 0.513219 | — | — | — |
| joint_view.test | COMPILE | 0.221719 | 0.515635 | 0.678365 | — | — | — |
| lambda.test | COMPILE | 0.203688 | 0.469616 | 0.634906 | — | — | — |
| lambda_args.test | COMPILE | 0.194753 | 0.456342 | 0.618653 | — | — | — |
| list.test | COMPILE | 0.202727 | 0.478301 | 0.626229 | — | — | — |
| list_c.test | COMPILE | 0.201834 | 0.464027 | 0.642498 | — | — | — |
| logical.test | COMPILE | 0.164219 | 0.364096 | 0.513339 | — | — | — |
| lower_bound.test | COMPILE | 0.207064 | 0.483363 | 0.609564 | — | — | — |
| map.test | COMPILE | 0.252483 | 0.601654 | 0.776273 | — | — | — |
| max_element.test | COMPILE | 0.199182 | 0.449257 | 0.601704 | — | — | — |
| min_max.test | COMPILE | 0.171656 | 0.399864 | 0.527313 | — | — | — |
| multiset.test | COMPILE | 0.215666 | 0.518744 | 0.657825 | — | — | — |
| next.test | COMPILE | 0.163783 | 0.360132 | 0.494760 | — | — | — |
| no_has_xxx.test | COMPILE | 0.174694 | 0.403647 | 0.539951 | — | — | — |
| numeric_ops.test | COMPILE | 0.194240 | 0.453026 | 0.590755 | — | — | — |
| pair_view.test | COMPILE | 0.220824 | 0.512971 | 0.654814 | — | — | — |
| partition.test | COMPILE | 0.238885 | 0.560898 | 0.732229 | — | — | — |
| pop_front.test | COMPILE | 0.198149 | 0.468513 | 0.603129 | — | — | — |
| push_back.test | COMPILE | 0.169877 | 0.390231 | 0.520406 | — | — | — |
| push_front.test | COMPILE | 0.196049 | 0.457356 | 0.614392 | — | — | — |
| quote.test | COMPILE | 0.164610 | 0.368967 | 0.506531 | — | — | — |
| range_c.test | COMPILE | 0.204662 | 0.492504 | 0.633201 | — | — | — |
| remove.test | COMPILE | 0.217009 | 0.513237 | 0.669028 | — | — | — |
| remove_if.test | COMPILE | 0.224152 | 0.518872 | 0.687788 | — | — | — |
| replace.test | COMPILE | 0.240224 | 0.574019 | 0.730990 | — | — | — |
| replace_if.test | COMPILE | 0.240772 | 0.591851 | 0.747072 | — | — | — |
| reverse.test | COMPILE | 0.230745 | 0.545371 | 0.707178 | — | — | — |
| same_as.test | COMPILE | 0.173620 | 0.400025 | 0.526769 | — | — | — |
| set.test | COMPILE | 0.306168 | 0.754107 | 1.086619 | — | — | — |
| set_c.test | COMPILE | 0.224910 | 0.517070 | 0.706053 | — | — | — |
| single_view.test | COMPILE | 0.200841 | 0.491157 | 0.625936 | — | — | — |
| size.test | COMPILE | 0.199397 | 0.453972 | 0.591465 | — | — | — |
| size_t.test | RUN | 0.171544 | 0.415719 | 0.559357 | 0.001938 | 0.002084 | 0.002036 |
| sizeof.test | COMPILE | 0.158905 | 0.353479 | 0.510209 | — | — | — |
| sort.test | COMPILE | 0.254508 | 0.611041 | 0.792294 | — | — | — |
| stable_partition.test | COMPILE | 0.239573 | 0.563122 | 0.744096 | — | — | — |
| transform.test | COMPILE | 0.255110 | 0.602952 | 0.791044 | — | — | — |
| transform_view.test | COMPILE | 0.207255 | 0.482423 | 0.646638 | — | — | — |
| unique.test | COMPILE | 0.220789 | 0.521276 | 0.667843 | — | — | — |
| unpack_args.test | COMPILE | 0.203116 | 0.477187 | 0.619922 | — | — | — |
| upper_bound.test | COMPILE | 0.210799 | 0.474756 | 0.629840 | — | — | — |
| vector.test | COMPILE | 0.237103 | 0.575565 | 0.743828 | — | — | — |
| vector_c.test | COMPILE | 0.210711 | 0.470509 | 0.631974 | — | — | — |
| zip_view.test | COMPILE | 0.295849 | 0.713171 | 0.917791 | — | — | — |
| string.test | RUN | 0.485168 | 1.414480 | 1.317747 | 0.001526 | 0.001552 | 0.001473 |
| issue_69.test | RUN | 0.020679 | 0.060848 | 0.062327 | 0.000788 | 0.000846 | 0.001925 |
| issue_84.test | RUN | 0.053001 | 0.107106 | 0.103831 | 0.000671 | 0.000690 | 0.001512 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 1.001× | 1.001×, 1.002× | 0.995× |
| clang | 1.084× | 1.081×, 1.086× | 0.983× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1359 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/43701438216).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| bool.test | 10 | 0.001273s | 0.001283s | 0.001298s | byte equality observed |
| char.test | 10 | 0.001279s | 0.001274s | 0.001266s | byte equality observed |
| char_unsigned.test | 10 | 0.001298s | 0.001263s | 0.001266s | byte equality observed |
| for_each.test | 10 | 0.001303s | 0.001337s | 0.001305s | byte equality observed |
| int.test | 10 | 0.001278s | 0.001330s | 0.001260s | byte equality observed |
| integral_c.test | 10 | 0.001309s | 0.001304s | 0.001302s | byte equality observed |
| integral_c_unsigned.test | 10 | 0.001318s | 0.001299s | 0.001274s | byte equality observed |
| issue_69.test | 10 | 0.000592s | 0.000590s | 0.001252s | byte equality observed |
| issue_84.test | 10 | 0.000598s | 0.000592s | 0.001271s | byte equality observed |
| size_t.test | 10 | 0.001292s | 0.001286s | 0.001257s | byte equality observed |
| string.test | 10 | 0.001321s | 0.001257s | 0.001279s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/43701438216).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
