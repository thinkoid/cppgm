# libs/mpl/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| increased_arity.test | COMPILE | 0.499613 | 1.395757 | 1.579731 | — | — | — |
| largest_int.test | COMPILE | 0.170160 | 0.387076 | 0.543183 | — | — | — |
| msvc_is_class.test | COMPILE | 0.020972 | 0.048579 | 0.059487 | — | — | — |
| template_arity.test | COMPILE | 0.167743 | 0.391049 | 0.535515 | — | — | — |
| is_seq.test | COMPILE | 0.006022 | 0.017413 | 0.032340 | — | — | — |
| token_equal.test | COMPILE | 0.006008 | 0.018505 | 0.033878 | — | — | — |
| advance.test | COMPILE | 0.184713 | 0.435925 | 0.655105 | — | — | — |
| always.test | COMPILE | 0.188297 | 0.449443 | 0.656016 | — | — | — |
| apply.test | COMPILE | 0.205417 | 0.442424 | 0.669818 | — | — | — |
| apply_wrap.test | COMPILE | 0.173610 | 0.390505 | 0.602718 | — | — | — |
| arithmetic.test | COMPILE | 0.189551 | 0.453990 | 0.661583 | — | — | — |
| as_sequence.test | COMPILE | 0.210694 | 0.499779 | 0.661917 | — | — | — |
| assert.test | COMPILE | 0.047574 | 0.096927 | 0.121973 | — | — | — |
| at.test | COMPILE | 0.202023 | 0.477382 | 0.706019 | — | — | — |
| back.test | COMPILE | 0.194050 | 0.461161 | 0.670551 | — | — | — |
| bind.test | COMPILE | 0.190462 | 0.449827 | 0.653516 | — | — | — |
| bitwise.test | COMPILE | 0.193925 | 0.449755 | 0.651973 | — | — | — |
| bool.test | RUN | 0.171443 | 0.389069 | 0.577981 | 0.002080 | 0.002026 | 0.002044 |
| comparison.test | COMPILE | 0.185518 | 0.441201 | 0.622936 | — | — | — |
| contains.test | COMPILE | 0.225326 | 0.551626 | 0.743836 | — | — | — |
| copy.test | COMPILE | 0.273398 | 0.662209 | 0.949502 | — | — | — |
| copy_if.test | COMPILE | 0.239591 | 0.577473 | 0.815189 | — | — | — |
| count.test | COMPILE | 0.229641 | 0.539771 | 0.797063 | — | — | — |
| count_if.test | COMPILE | 0.235511 | 0.558065 | 0.838157 | — | — | — |
| deque.test | COMPILE | 0.224283 | 0.553761 | 0.763770 | — | — | — |
| distance.test | COMPILE | 0.211233 | 0.490964 | 0.728524 | — | — | — |
| empty.test | COMPILE | 0.184410 | 0.442751 | 0.641478 | — | — | — |
| equal.test | COMPILE | 0.215172 | 0.509525 | 0.749422 | — | — | — |
| erase.test | COMPILE | 0.250598 | 0.611871 | 0.861619 | — | — | — |
| erase_range.test | COMPILE | 0.239442 | 0.577061 | 0.828935 | — | — | — |
| eval_if.test | COMPILE | 0.175102 | 0.407559 | 0.601068 | — | — | — |
| filter_view.test | COMPILE | 0.234631 | 0.558066 | 0.799697 | — | — | — |
| find.test | COMPILE | 0.232385 | 0.556774 | 0.783155 | — | — | — |
| find_if.test | COMPILE | 0.236025 | 0.560312 | 0.819964 | — | — | — |
| fold.test | COMPILE | 0.247969 | 0.596742 | 0.868633 | — | — | — |
| for_each.test | RUN | 0.354869 | 0.843618 | 1.338836 | 0.001753 | 0.001835 | 0.002072 |
| front.test | COMPILE | 0.193704 | 0.478516 | 0.671482 | — | — | — |
| get_tag_def.test | COMPILE | 0.172688 | 0.394557 | 0.623230 | — | — | — |
| has_xxx.test | COMPILE | 0.191140 | 0.434233 | 0.656992 | — | — | — |
| identity.test | COMPILE | 0.191505 | 0.445193 | 0.651968 | — | — | — |
| if.test | COMPILE | 0.171052 | 0.385513 | 0.567165 | — | — | — |
| index_of.test | COMPILE | 0.220584 | 0.522820 | 0.747524 | — | — | — |
| inherit.test | COMPILE | 0.176378 | 0.420105 | 0.599520 | — | — | — |
| insert.test | COMPILE | 0.256128 | 0.601939 | 0.912711 | — | — | — |
| insert_range.test | COMPILE | 0.354147 | 0.817295 | 1.249717 | — | — | — |
| int.test | RUN | 0.181385 | 0.447149 | 0.674522 | 0.001947 | 0.001900 | 0.001589 |
| char.test | RUN | 0.188406 | 0.454973 | 0.665508 | 0.001882 | 0.001867 | 0.002023 |
| char_unsigned.test | RUN | 0.187938 | 0.451279 | 0.628692 | 0.001915 | 0.001870 | 0.002191 |
| integral_c.test | RUN | 0.207401 | 0.586654 | 0.804952 | 0.001921 | 0.002150 | 0.001972 |
| integral_c_unsigned.test | RUN | 0.210987 | 0.565871 | 0.804041 | 0.001817 | 0.002054 | 0.001744 |
| is_placeholder.test | COMPILE | 0.175598 | 0.415163 | 0.564583 | — | — | — |
| is_sequence.test | COMPILE | 0.213547 | 0.487771 | 0.715118 | — | — | — |
| iterator_tags.test | COMPILE | 0.181727 | 0.403841 | 0.636471 | — | — | — |
| joint_view.test | COMPILE | 0.233339 | 0.565352 | 0.800981 | — | — | — |
| lambda.test | COMPILE | 0.222540 | 0.507002 | 0.753364 | — | — | — |
| lambda_args.test | COMPILE | 0.210092 | 0.507084 | 0.740468 | — | — | — |
| list.test | COMPILE | 0.216441 | 0.526329 | 0.758800 | — | — | — |
| list_c.test | COMPILE | 0.210860 | 0.491697 | 0.757173 | — | — | — |
| logical.test | COMPILE | 0.178797 | 0.401119 | 0.618723 | — | — | — |
| lower_bound.test | COMPILE | 0.231955 | 0.524886 | 0.740092 | — | — | — |
| map.test | COMPILE | 0.265950 | 0.649201 | 0.933553 | — | — | — |
| max_element.test | COMPILE | 0.222232 | 0.485154 | 0.731749 | — | — | — |
| min_max.test | COMPILE | 0.186152 | 0.425426 | 0.631794 | — | — | — |
| multiset.test | COMPILE | 0.237046 | 0.550423 | 0.811540 | — | — | — |
| next.test | COMPILE | 0.172223 | 0.404445 | 0.592726 | — | — | — |
| no_has_xxx.test | COMPILE | 0.186675 | 0.447434 | 0.648192 | — | — | — |
| numeric_ops.test | COMPILE | 0.208521 | 0.502615 | 0.709703 | — | — | — |
| pair_view.test | COMPILE | 0.245169 | 0.560356 | 0.809769 | — | — | — |
| partition.test | COMPILE | 0.252608 | 0.613488 | 0.882501 | — | — | — |
| pop_front.test | COMPILE | 0.206128 | 0.507810 | 0.726226 | — | — | — |
| push_back.test | COMPILE | 0.187122 | 0.441194 | 0.621482 | — | — | — |
| push_front.test | COMPILE | 0.209453 | 0.502703 | 0.735277 | — | — | — |
| quote.test | COMPILE | 0.170640 | 0.405370 | 0.586959 | — | — | — |
| range_c.test | COMPILE | 0.222948 | 0.523712 | 0.763864 | — | — | — |
| remove.test | COMPILE | 0.233996 | 0.552117 | 0.785682 | — | — | — |
| remove_if.test | COMPILE | 0.235730 | 0.570508 | 0.835153 | — | — | — |
| replace.test | COMPILE | 0.256234 | 0.626058 | 0.860803 | — | — | — |
| replace_if.test | COMPILE | 0.256474 | 0.623911 | 0.897188 | — | — | — |
| reverse.test | COMPILE | 0.248268 | 0.579914 | 0.833497 | — | — | — |
| same_as.test | COMPILE | 0.188347 | 0.429507 | 0.636396 | — | — | — |
| set.test | COMPILE | 0.332305 | 0.828558 | 1.256792 | — | — | — |
| set_c.test | COMPILE | 0.238971 | 0.566726 | 0.825527 | — | — | — |
| single_view.test | COMPILE | 0.216580 | 0.526549 | 0.771267 | — | — | — |
| size.test | COMPILE | 0.212100 | 0.492724 | 0.717512 | — | — | — |
| size_t.test | RUN | 0.183512 | 0.464181 | 0.654328 | 0.001778 | 0.001948 | 0.002214 |
| sizeof.test | COMPILE | 0.175725 | 0.385214 | 0.564358 | — | — | — |
| sort.test | COMPILE | 0.273432 | 0.656949 | 0.941090 | — | — | — |
| stable_partition.test | COMPILE | 0.256482 | 0.605441 | 0.868399 | — | — | — |
| transform.test | COMPILE | 0.274425 | 0.665051 | 0.958169 | — | — | — |
| transform_view.test | COMPILE | 0.220637 | 0.520146 | 0.761382 | — | — | — |
| unique.test | COMPILE | 0.233186 | 0.560553 | 0.794508 | — | — | — |
| unpack_args.test | COMPILE | 0.216952 | 0.522672 | 0.723816 | — | — | — |
| upper_bound.test | COMPILE | 0.223663 | 0.527655 | 0.744720 | — | — | — |
| vector.test | COMPILE | 0.251546 | 0.651314 | 0.869329 | — | — | — |
| vector_c.test | COMPILE | 0.223212 | 0.500779 | 0.803290 | — | — | — |
| zip_view.test | COMPILE | 0.313517 | 0.766566 | 0.997576 | — | — | — |
| string.test | RUN | 0.483414 | 1.453230 | 1.483838 | 0.001498 | 0.001430 | 0.001396 |
| issue_69.test | RUN | 0.024018 | 0.057936 | 0.069985 | 0.000748 | 0.000941 | 0.001776 |
| issue_84.test | RUN | 0.054995 | 0.113069 | 0.127259 | 0.000684 | 0.000729 | 0.001429 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.988× | 0.986×, 0.990× | 1.014× |
| clang | 1.062× | 1.042×, 1.083× | 1.013× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1359 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43674678137).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| bool.test | 10 | 0.001246s | 0.001235s | 0.001224s | byte equality observed |
| char.test | 10 | 0.001263s | 0.001216s | 0.001281s | byte equality observed |
| char_unsigned.test | 10 | 0.001263s | 0.001213s | 0.001232s | byte equality observed |
| for_each.test | 10 | 0.001276s | 0.001242s | 0.001261s | byte equality observed |
| int.test | 10 | 0.001266s | 0.001209s | 0.001207s | byte equality observed |
| integral_c.test | 10 | 0.001286s | 0.001226s | 0.001229s | byte equality observed |
| integral_c_unsigned.test | 10 | 0.001282s | 0.001281s | 0.001216s | byte equality observed |
| issue_69.test | 10 | 0.000594s | 0.000602s | 0.001229s | byte equality observed |
| issue_84.test | 10 | 0.000577s | 0.000582s | 0.001188s | byte equality observed |
| size_t.test | 10 | 0.001241s | 0.001262s | 0.001212s | byte equality observed |
| string.test | 10 | 0.001314s | 0.001293s | 0.001212s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43674678137).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
