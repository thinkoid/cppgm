# libs/mpl/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| increased_arity.test | COMPILE | 0.303012 | 0.862735 | 0.810261 | — | — | — |
| largest_int.test | COMPILE | 0.100728 | 0.247230 | 0.290690 | — | — | — |
| msvc_is_class.test | COMPILE | 0.011280 | 0.030373 | 0.031792 | — | — | — |
| template_arity.test | COMPILE | 0.101123 | 0.241984 | 0.291042 | — | — | — |
| is_seq.test | COMPILE | 0.003653 | 0.011010 | 0.019270 | — | — | — |
| token_equal.test | COMPILE | 0.004264 | 0.011469 | 0.018371 | — | — | — |
| advance.test | COMPILE | 0.108302 | 0.277959 | 0.307815 | — | — | — |
| always.test | COMPILE | 0.112925 | 0.275476 | 0.326255 | — | — | — |
| apply.test | COMPILE | 0.117718 | 0.300239 | 0.341806 | — | — | — |
| apply_wrap.test | COMPILE | 0.101060 | 0.248652 | 0.293141 | — | — | — |
| arithmetic.test | COMPILE | 0.111976 | 0.280422 | 0.326151 | — | — | — |
| as_sequence.test | COMPILE | 0.119359 | 0.308547 | 0.347529 | — | — | — |
| assert.test | COMPILE | 0.027312 | 0.057893 | 0.063067 | — | — | — |
| at.test | COMPILE | 0.118430 | 0.299130 | 0.351852 | — | — | — |
| back.test | COMPILE | 0.112451 | 0.290654 | 0.334069 | — | — | — |
| bind.test | COMPILE | 0.110373 | 0.275400 | 0.319253 | — | — | — |
| bitwise.test | COMPILE | 0.109069 | 0.281226 | 0.329232 | — | — | — |
| bool.test | RUN | 0.101308 | 0.252588 | 0.302453 | 0.001302 | 0.001326 | 0.001037 |
| comparison.test | COMPILE | 0.111661 | 0.282585 | 0.323400 | — | — | — |
| contains.test | COMPILE | 0.133441 | 0.337939 | 0.382269 | — | — | — |
| copy.test | COMPILE | 0.160030 | 0.403858 | 0.468248 | — | — | — |
| copy_if.test | COMPILE | 0.142532 | 0.368621 | 0.418909 | — | — | — |
| count.test | COMPILE | 0.135584 | 0.334741 | 0.398073 | — | — | — |
| count_if.test | COMPILE | 0.144002 | 0.350134 | 0.401323 | — | — | — |
| deque.test | COMPILE | 0.134913 | 0.342189 | 0.393555 | — | — | — |
| distance.test | COMPILE | 0.125870 | 0.318234 | 0.365668 | — | — | — |
| empty.test | COMPILE | 0.108505 | 0.281580 | 0.325250 | — | — | — |
| equal.test | COMPILE | 0.129552 | 0.324170 | 0.362891 | — | — | — |
| erase.test | COMPILE | 0.146736 | 0.375517 | 0.429332 | — | — | — |
| erase_range.test | COMPILE | 0.141527 | 0.364179 | 0.411000 | — | — | — |
| eval_if.test | COMPILE | 0.099062 | 0.260621 | 0.301181 | — | — | — |
| filter_view.test | COMPILE | 0.137681 | 0.354290 | 0.398216 | — | — | — |
| find.test | COMPILE | 0.137328 | 0.342982 | 0.393077 | — | — | — |
| find_if.test | COMPILE | 0.138587 | 0.355171 | 0.405823 | — | — | — |
| fold.test | COMPILE | 0.145326 | 0.374016 | 0.428183 | — | — | — |
| for_each.test | RUN | 0.211251 | 0.527727 | 0.653600 | 0.001161 | 0.001445 | 0.001244 |
| front.test | COMPILE | 0.111654 | 0.290605 | 0.338172 | — | — | — |
| get_tag_def.test | COMPILE | 0.099791 | 0.247416 | 0.290514 | — | — | — |
| has_xxx.test | COMPILE | 0.104794 | 0.272562 | 0.327603 | — | — | — |
| identity.test | COMPILE | 0.113971 | 0.282414 | 0.324234 | — | — | — |
| if.test | COMPILE | 0.095529 | 0.244190 | 0.289131 | — | — | — |
| index_of.test | COMPILE | 0.127894 | 0.320255 | 0.373893 | — | — | — |
| inherit.test | COMPILE | 0.103080 | 0.254661 | 0.296226 | — | — | — |
| insert.test | COMPILE | 0.148114 | 0.377111 | 0.449725 | — | — | — |
| insert_range.test | COMPILE | 0.205007 | 0.524951 | 0.636239 | — | — | — |
| int.test | RUN | 0.103941 | 0.276017 | 0.320044 | 0.001189 | 0.001384 | 0.001193 |
| char.test | RUN | 0.106799 | 0.282105 | 0.328040 | 0.001197 | 0.001118 | 0.001054 |
| char_unsigned.test | RUN | 0.106257 | 0.274705 | 0.317845 | 0.001303 | 0.001482 | 0.001131 |
| integral_c.test | RUN | 0.125373 | 0.359459 | 0.408575 | 0.001158 | 0.001375 | 0.001087 |
| integral_c_unsigned.test | RUN | 0.116260 | 0.357389 | 0.401626 | 0.001186 | 0.001450 | 0.001016 |
| is_placeholder.test | COMPILE | 0.101233 | 0.253388 | 0.286099 | — | — | — |
| is_sequence.test | COMPILE | 0.125096 | 0.309951 | 0.359490 | — | — | — |
| iterator_tags.test | COMPILE | 0.103741 | 0.263567 | 0.304229 | — | — | — |
| joint_view.test | COMPILE | 0.141830 | 0.347987 | 0.402688 | — | — | — |
| lambda.test | COMPILE | 0.129549 | 0.317615 | 0.380055 | — | — | — |
| lambda_args.test | COMPILE | 0.119491 | 0.305520 | 0.379589 | — | — | — |
| list.test | COMPILE | 0.121228 | 0.323655 | 0.370886 | — | — | — |
| list_c.test | COMPILE | 0.124614 | 0.315095 | 0.387760 | — | — | — |
| logical.test | COMPILE | 0.097507 | 0.253490 | 0.302525 | — | — | — |
| lower_bound.test | COMPILE | 0.126738 | 0.318963 | 0.376766 | — | — | — |
| map.test | COMPILE | 0.153314 | 0.404923 | 0.468865 | — | — | — |
| max_element.test | COMPILE | 0.121048 | 0.313255 | 0.360642 | — | — | — |
| min_max.test | COMPILE | 0.101798 | 0.263487 | 0.312994 | — | — | — |
| multiset.test | COMPILE | 0.132923 | 0.350329 | 0.390273 | — | — | — |
| next.test | COMPILE | 0.098370 | 0.251328 | 0.293824 | — | — | — |
| no_has_xxx.test | COMPILE | 0.106249 | 0.263799 | 0.328068 | — | — | — |
| numeric_ops.test | COMPILE | 0.118521 | 0.309449 | 0.358350 | — | — | — |
| pair_view.test | COMPILE | 0.136895 | 0.349127 | 0.399726 | — | — | — |
| partition.test | COMPILE | 0.147264 | 0.386622 | 0.440022 | — | — | — |
| pop_front.test | COMPILE | 0.122719 | 0.311176 | 0.366721 | — | — | — |
| push_back.test | COMPILE | 0.100924 | 0.266486 | 0.313160 | — | — | — |
| push_front.test | COMPILE | 0.122334 | 0.314402 | 0.361982 | — | — | — |
| quote.test | COMPILE | 0.101592 | 0.252565 | 0.297779 | — | — | — |
| range_c.test | COMPILE | 0.129415 | 0.332327 | 0.385849 | — | — | — |
| remove.test | COMPILE | 0.136133 | 0.342113 | 0.395925 | — | — | — |
| remove_if.test | COMPILE | 0.142776 | 0.361663 | 0.415356 | — | — | — |
| replace.test | COMPILE | 0.154299 | 0.391785 | 0.446877 | — | — | — |
| replace_if.test | COMPILE | 0.156589 | 0.403163 | 0.454045 | — | — | — |
| reverse.test | COMPILE | 0.147120 | 0.371641 | 0.423868 | — | — | — |
| same_as.test | COMPILE | 0.111505 | 0.276535 | 0.318436 | — | — | — |
| set.test | COMPILE | 0.196377 | 0.516329 | 0.632219 | — | — | — |
| set_c.test | COMPILE | 0.143630 | 0.365159 | 0.419359 | — | — | — |
| single_view.test | COMPILE | 0.129443 | 0.324997 | 0.377214 | — | — | — |
| size.test | COMPILE | 0.121668 | 0.303297 | 0.354899 | — | — | — |
| size_t.test | RUN | 0.110460 | 0.280937 | 0.333559 | 0.001027 | 0.001491 | 0.001229 |
| sizeof.test | COMPILE | 0.100988 | 0.244991 | 0.295858 | — | — | — |
| sort.test | COMPILE | 0.155188 | 0.412323 | 0.471092 | — | — | — |
| stable_partition.test | COMPILE | 0.147237 | 0.383172 | 0.443235 | — | — | — |
| transform.test | COMPILE | 0.160939 | 0.411273 | 0.485662 | — | — | — |
| transform_view.test | COMPILE | 0.130447 | 0.333495 | 0.389032 | — | — | — |
| unique.test | COMPILE | 0.139214 | 0.349749 | 0.393201 | — | — | — |
| unpack_args.test | COMPILE | 0.124523 | 0.325981 | 0.367316 | — | — | — |
| upper_bound.test | COMPILE | 0.128965 | 0.324838 | 0.371948 | — | — | — |
| vector.test | COMPILE | 0.149815 | 0.394068 | 0.449401 | — | — | — |
| vector_c.test | COMPILE | 0.129692 | 0.324816 | 0.387096 | — | — | — |
| zip_view.test | COMPILE | 0.184442 | 0.491511 | 0.562686 | — | — | — |
| string.test | RUN | 0.310703 | 0.956167 | 0.830865 | 0.001051 | 0.000962 | 0.000855 |
| issue_69.test | RUN | 0.012148 | 0.036685 | 0.038602 | 0.000581 | 0.000464 | 0.001198 |
| issue_84.test | RUN | 0.023778 | 0.073515 | 0.072534 | 0.000383 | 0.000383 | 0.000773 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.989× | 0.986×, 0.992× | 0.987× |
| clang | 1.104× | 1.107×, 1.101× | 0.989× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1363 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44560957980).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| bool.test | 10 | 0.000820s | 0.000821s | 0.000796s | byte equality observed |
| char.test | 10 | 0.000804s | 0.000803s | 0.000824s | byte equality observed |
| char_unsigned.test | 10 | 0.000821s | 0.000799s | 0.000831s | byte equality observed |
| for_each.test | 10 | 0.000811s | 0.000835s | 0.000839s | byte equality observed |
| int.test | 10 | 0.000811s | 0.000813s | 0.000816s | byte equality observed |
| integral_c.test | 10 | 0.000828s | 0.000815s | 0.000824s | byte equality observed |
| integral_c_unsigned.test | 10 | 0.000836s | 0.000786s | 0.000811s | byte equality observed |
| issue_69.test | 10 | 0.000372s | 0.000366s | 0.000810s | byte equality observed |
| issue_84.test | 10 | 0.000365s | 0.000364s | 0.000807s | byte equality observed |
| size_t.test | 10 | 0.000801s | 0.000791s | 0.000796s | byte equality observed |
| string.test | 10 | 0.000816s | 0.000808s | 0.000790s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44560957980).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
