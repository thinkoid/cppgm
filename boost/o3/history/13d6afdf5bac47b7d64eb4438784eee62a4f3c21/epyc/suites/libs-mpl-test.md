# libs/mpl/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| increased_arity.test | COMPILE | 0.375548 | 1.017330 | 1.061945 | — | — | — |
| largest_int.test | COMPILE | 0.132016 | 0.290264 | 0.362293 | — | — | — |
| msvc_is_class.test | COMPILE | 0.014938 | 0.037394 | 0.040154 | — | — | — |
| template_arity.test | COMPILE | 0.127984 | 0.283979 | 0.358731 | — | — | — |
| is_seq.test | COMPILE | 0.005275 | 0.013945 | 0.027531 | — | — | — |
| token_equal.test | COMPILE | 0.005315 | 0.014620 | 0.028116 | — | — | — |
| advance.test | COMPILE | 0.139415 | 0.316500 | 0.397663 | — | — | — |
| always.test | COMPILE | 0.140840 | 0.331144 | 0.435504 | — | — | — |
| apply.test | COMPILE | 0.150013 | 0.352131 | 0.453887 | — | — | — |
| apply_wrap.test | COMPILE | 0.128873 | 0.293542 | 0.376166 | — | — | — |
| arithmetic.test | COMPILE | 0.144848 | 0.333055 | 0.433371 | — | — | — |
| as_sequence.test | COMPILE | 0.149617 | 0.373766 | 0.458885 | — | — | — |
| assert.test | COMPILE | 0.036492 | 0.073921 | 0.082615 | — | — | — |
| at.test | COMPILE | 0.153008 | 0.303833 | 0.456593 | — | — | — |
| back.test | COMPILE | 0.147053 | 0.279832 | 0.437417 | — | — | — |
| bind.test | COMPILE | 0.143555 | 0.313832 | 0.420588 | — | — | — |
| bitwise.test | COMPILE | 0.143634 | 0.329640 | 0.435234 | — | — | — |
| bool.test | RUN | 0.128894 | 0.277598 | 0.397887 | 0.001570 | 0.001818 | 0.001814 |
| comparison.test | COMPILE | 0.138260 | 0.296436 | 0.435521 | — | — | — |
| contains.test | COMPILE | 0.165891 | 0.331742 | 0.485434 | — | — | — |
| copy.test | COMPILE | 0.206222 | 0.464611 | 0.601480 | — | — | — |
| copy_if.test | COMPILE | 0.183308 | 0.405004 | 0.545725 | — | — | — |
| count.test | COMPILE | 0.173847 | 0.404960 | 0.506284 | — | — | — |
| count_if.test | COMPILE | 0.183387 | 0.414559 | 0.539935 | — | — | — |
| deque.test | COMPILE | 0.177920 | 0.413349 | 0.519670 | — | — | — |
| distance.test | COMPILE | 0.161237 | 0.349126 | 0.472397 | — | — | — |
| empty.test | COMPILE | 0.141317 | 0.326079 | 0.413689 | — | — | — |
| equal.test | COMPILE | 0.168544 | 0.380344 | 0.493711 | — | — | — |
| erase.test | COMPILE | 0.191662 | 0.451815 | 0.560757 | — | — | — |
| erase_range.test | COMPILE | 0.180172 | 0.429989 | 0.528174 | — | — | — |
| eval_if.test | COMPILE | 0.133649 | 0.290770 | 0.395593 | — | — | — |
| filter_view.test | COMPILE | 0.185982 | 0.424065 | 0.532024 | — | — | — |
| find.test | COMPILE | 0.180573 | 0.406344 | 0.513686 | — | — | — |
| find_if.test | COMPILE | 0.183424 | 0.413843 | 0.531764 | — | — | — |
| fold.test | COMPILE | 0.191010 | 0.421837 | 0.557903 | — | — | — |
| for_each.test | RUN | 0.280943 | 0.648276 | 0.889511 | 0.001549 | 0.001807 | 0.001642 |
| front.test | COMPILE | 0.153215 | 0.340297 | 0.443906 | — | — | — |
| get_tag_def.test | COMPILE | 0.131484 | 0.307676 | 0.398064 | — | — | — |
| has_xxx.test | COMPILE | 0.144898 | 0.319322 | 0.445420 | — | — | — |
| identity.test | COMPILE | 0.145702 | 0.335262 | 0.440911 | — | — | — |
| if.test | COMPILE | 0.129888 | 0.289255 | 0.402837 | — | — | — |
| index_of.test | COMPILE | 0.167956 | 0.395761 | 0.489971 | — | — | — |
| inherit.test | COMPILE | 0.133873 | 0.312552 | 0.410578 | — | — | — |
| insert.test | COMPILE | 0.194786 | 0.453183 | 0.579404 | — | — | — |
| insert_range.test | COMPILE | 0.267587 | 0.569097 | 0.884523 | — | — | — |
| int.test | RUN | 0.137873 | 0.334137 | 0.447188 | 0.001736 | 0.001518 | 0.001868 |
| char.test | RUN | 0.138449 | 0.322755 | 0.457772 | 0.001778 | 0.001567 | 0.001786 |
| char_unsigned.test | RUN | 0.142314 | 0.223408 | 0.457749 | 0.001696 | 0.001343 | 0.001792 |
| integral_c.test | RUN | 0.155645 | 0.285078 | 0.515334 | 0.001744 | 0.001576 | 0.001748 |
| integral_c_unsigned.test | RUN | 0.154370 | 0.420112 | 0.494264 | 0.001817 | 0.001808 | 0.001330 |
| is_placeholder.test | COMPILE | 0.131167 | 0.293120 | 0.409104 | — | — | — |
| is_sequence.test | COMPILE | 0.158818 | 0.351724 | 0.441512 | — | — | — |
| iterator_tags.test | COMPILE | 0.139537 | 0.315458 | 0.383578 | — | — | — |
| joint_view.test | COMPILE | 0.178636 | 0.416314 | 0.533788 | — | — | — |
| lambda.test | COMPILE | 0.163086 | 0.376876 | 0.481519 | — | — | — |
| lambda_args.test | COMPILE | 0.154787 | 0.368676 | 0.504704 | — | — | — |
| list.test | COMPILE | 0.166978 | 0.391327 | 0.482789 | — | — | — |
| list_c.test | COMPILE | 0.161303 | 0.373567 | 0.496146 | — | — | — |
| logical.test | COMPILE | 0.130462 | 0.304625 | 0.384215 | — | — | — |
| lower_bound.test | COMPILE | 0.171828 | 0.382174 | 0.499451 | — | — | — |
| map.test | COMPILE | 0.205608 | 0.482293 | 0.621439 | — | — | — |
| max_element.test | COMPILE | 0.159218 | 0.365976 | 0.464770 | — | — | — |
| min_max.test | COMPILE | 0.135143 | 0.318197 | 0.415563 | — | — | — |
| multiset.test | COMPILE | 0.173888 | 0.416360 | 0.527202 | — | — | — |
| next.test | COMPILE | 0.132449 | 0.295087 | 0.390141 | — | — | — |
| no_has_xxx.test | COMPILE | 0.141313 | 0.321761 | 0.424519 | — | — | — |
| numeric_ops.test | COMPILE | 0.155082 | 0.348121 | 0.474428 | — | — | — |
| pair_view.test | COMPILE | 0.179773 | 0.410108 | 0.536103 | — | — | — |
| partition.test | COMPILE | 0.192659 | 0.470212 | 0.596024 | — | — | — |
| pop_front.test | COMPILE | 0.159610 | 0.387347 | 0.479452 | — | — | — |
| push_back.test | COMPILE | 0.134983 | 0.333234 | 0.423577 | — | — | — |
| push_front.test | COMPILE | 0.154819 | 0.375288 | 0.476018 | — | — | — |
| quote.test | COMPILE | 0.126822 | 0.297011 | 0.392486 | — | — | — |
| range_c.test | COMPILE | 0.163234 | 0.395399 | 0.506850 | — | — | — |
| remove.test | COMPILE | 0.174625 | 0.413091 | 0.537501 | — | — | — |
| remove_if.test | COMPILE | 0.174749 | 0.429403 | 0.529731 | — | — | — |
| replace.test | COMPILE | 0.191087 | 0.459744 | 0.577893 | — | — | — |
| replace_if.test | COMPILE | 0.194215 | 0.479237 | 0.597043 | — | — | — |
| reverse.test | COMPILE | 0.185691 | 0.439169 | 0.557334 | — | — | — |
| same_as.test | COMPILE | 0.137631 | 0.339661 | 0.416962 | — | — | — |
| set.test | COMPILE | 0.251074 | 0.619393 | 0.844890 | — | — | — |
| set_c.test | COMPILE | 0.179762 | 0.431685 | 0.550973 | — | — | — |
| single_view.test | COMPILE | 0.169926 | 0.380570 | 0.507667 | — | — | — |
| size.test | COMPILE | 0.149726 | 0.368381 | 0.467050 | — | — | — |
| size_t.test | RUN | 0.141608 | 0.345730 | 0.421868 | 0.001588 | 0.001786 | 0.001888 |
| sizeof.test | COMPILE | 0.130092 | 0.301093 | 0.373970 | — | — | — |
| sort.test | COMPILE | 0.212451 | 0.486507 | 0.599736 | — | — | — |
| stable_partition.test | COMPILE | 0.193977 | 0.466659 | 0.579250 | — | — | — |
| transform.test | COMPILE | 0.212563 | 0.483968 | 0.638591 | — | — | — |
| transform_view.test | COMPILE | 0.171843 | 0.404398 | 0.500941 | — | — | — |
| unique.test | COMPILE | 0.176550 | 0.413794 | 0.520871 | — | — | — |
| unpack_args.test | COMPILE | 0.162086 | 0.388734 | 0.490257 | — | — | — |
| upper_bound.test | COMPILE | 0.172177 | 0.380922 | 0.495265 | — | — | — |
| vector.test | COMPILE | 0.188884 | 0.467125 | 0.575526 | — | — | — |
| vector_c.test | COMPILE | 0.170256 | 0.383109 | 0.521680 | — | — | — |
| zip_view.test | COMPILE | 0.241981 | 0.583166 | 0.712853 | — | — | — |
| string.test | RUN | 0.404052 | 1.150810 | 1.015710 | 0.001474 | 0.001394 | 0.001232 |
| issue_69.test | RUN | 0.016498 | 0.047189 | 0.050345 | 0.000801 | 0.000527 | 0.001685 |
| issue_84.test | RUN | 0.042036 | 0.091897 | 0.096559 | 0.000542 | 0.000663 | 0.001288 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.954×† | 0.915×, 0.993× | 1.032× |
| clang | 1.151×† | 1.187×, 1.116× | 0.982× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1363 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43648658351).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| bool.test | 10 | 0.000986s | 0.000985s | 0.001036s | byte equality observed |
| char.test | 10 | 0.001015s | 0.001012s | 0.001061s | byte equality observed |
| char_unsigned.test | 10 | 0.000998s | 0.001033s | 0.001104s | byte equality observed |
| for_each.test | 10 | 0.001014s | 0.001020s | 0.001038s | byte equality observed |
| int.test | 10 | 0.001035s | 0.000985s | 0.001055s | byte equality observed |
| integral_c.test | 10 | 0.001021s | 0.001015s | 0.001008s | byte equality observed |
| integral_c_unsigned.test | 10 | 0.001028s | 0.001027s | 0.001046s | byte equality observed |
| issue_69.test | 10 | 0.000476s | 0.000468s | 0.000992s | byte equality observed |
| issue_84.test | 10 | 0.000472s | 0.000468s | 0.001032s | byte equality observed |
| size_t.test | 10 | 0.001032s | 0.001019s | 0.000996s | byte equality observed |
| string.test | 10 | 0.001012s | 0.001015s | 0.001048s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43648658351).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
