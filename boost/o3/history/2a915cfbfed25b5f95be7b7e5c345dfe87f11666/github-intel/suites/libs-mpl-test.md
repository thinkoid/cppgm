# libs/mpl/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| increased_arity.test | COMPILE | 0.307253 | 0.844238 | 0.782739 | — | — | — |
| largest_int.test | COMPILE | 0.096172 | 0.240410 | 0.291094 | — | — | — |
| msvc_is_class.test | COMPILE | 0.011681 | 0.029438 | 0.033552 | — | — | — |
| template_arity.test | COMPILE | 0.094219 | 0.239653 | 0.292261 | — | — | — |
| is_seq.test | COMPILE | 0.004018 | 0.010582 | 0.021295 | — | — | — |
| token_equal.test | COMPILE | 0.004242 | 0.010672 | 0.020875 | — | — | — |
| advance.test | COMPILE | 0.106163 | 0.269937 | 0.309576 | — | — | — |
| always.test | COMPILE | 0.114016 | 0.273019 | 0.325186 | — | — | — |
| apply.test | COMPILE | 0.116842 | 0.294226 | 0.338917 | — | — | — |
| apply_wrap.test | COMPILE | 0.103109 | 0.243111 | 0.290686 | — | — | — |
| arithmetic.test | COMPILE | 0.108203 | 0.277657 | 0.318640 | — | — | — |
| as_sequence.test | COMPILE | 0.121487 | 0.306138 | 0.342744 | — | — | — |
| assert.test | COMPILE | 0.027748 | 0.057471 | 0.063853 | — | — | — |
| at.test | COMPILE | 0.121651 | 0.298375 | 0.353411 | — | — | — |
| back.test | COMPILE | 0.114956 | 0.284880 | 0.324164 | — | — | — |
| bind.test | COMPILE | 0.109318 | 0.271047 | 0.320745 | — | — | — |
| bitwise.test | COMPILE | 0.111558 | 0.275224 | 0.323348 | — | — | — |
| bool.test | RUN | 0.101922 | 0.247959 | 0.293773 | 0.001174 | 0.001255 | 0.001182 |
| comparison.test | COMPILE | 0.109725 | 0.276335 | 0.311318 | — | — | — |
| contains.test | COMPILE | 0.134187 | 0.338104 | 0.385982 | — | — | — |
| copy.test | COMPILE | 0.158769 | 0.400314 | 0.468902 | — | — | — |
| copy_if.test | COMPILE | 0.141912 | 0.361346 | 0.413371 | — | — | — |
| count.test | COMPILE | 0.136946 | 0.336008 | 0.396368 | — | — | — |
| count_if.test | COMPILE | 0.140410 | 0.345774 | 0.412901 | — | — | — |
| deque.test | COMPILE | 0.133052 | 0.337622 | 0.389381 | — | — | — |
| distance.test | COMPILE | 0.128467 | 0.311653 | 0.359264 | — | — | — |
| empty.test | COMPILE | 0.110766 | 0.279912 | 0.321351 | — | — | — |
| equal.test | COMPILE | 0.128685 | 0.314669 | 0.375773 | — | — | — |
| erase.test | COMPILE | 0.148483 | 0.369753 | 0.429509 | — | — | — |
| erase_range.test | COMPILE | 0.141523 | 0.359183 | 0.403271 | — | — | — |
| eval_if.test | COMPILE | 0.101945 | 0.256743 | 0.293907 | — | — | — |
| filter_view.test | COMPILE | 0.138145 | 0.348542 | 0.406277 | — | — | — |
| find.test | COMPILE | 0.132503 | 0.339270 | 0.390000 | — | — | — |
| find_if.test | COMPILE | 0.138890 | 0.350307 | 0.405136 | — | — | — |
| fold.test | COMPILE | 0.142937 | 0.367539 | 0.423482 | — | — | — |
| for_each.test | RUN | 0.213270 | 0.527036 | 0.672320 | 0.001128 | 0.001401 | 0.001317 |
| front.test | COMPILE | 0.113195 | 0.290087 | 0.332089 | — | — | — |
| get_tag_def.test | COMPILE | 0.102705 | 0.244557 | 0.296912 | — | — | — |
| has_xxx.test | COMPILE | 0.108514 | 0.269006 | 0.325935 | — | — | — |
| identity.test | COMPILE | 0.111369 | 0.280289 | 0.325697 | — | — | — |
| if.test | COMPILE | 0.100081 | 0.243359 | 0.297495 | — | — | — |
| index_of.test | COMPILE | 0.128329 | 0.324263 | 0.375822 | — | — | — |
| inherit.test | COMPILE | 0.103640 | 0.253831 | 0.305576 | — | — | — |
| insert.test | COMPILE | 0.154161 | 0.381592 | 0.450365 | — | — | — |
| insert_range.test | COMPILE | 0.209192 | 0.518543 | 0.628914 | — | — | — |
| int.test | RUN | 0.108100 | 0.277822 | 0.329039 | 0.001036 | 0.001240 | 0.001188 |
| char.test | RUN | 0.109873 | 0.283525 | 0.327869 | 0.001291 | 0.001300 | 0.001114 |
| char_unsigned.test | RUN | 0.110154 | 0.274757 | 0.331434 | 0.000902 | 0.001501 | 0.001177 |
| integral_c.test | RUN | 0.123673 | 0.351539 | 0.398049 | 0.001129 | 0.001487 | 0.001199 |
| integral_c_unsigned.test | RUN | 0.126701 | 0.353426 | 0.393071 | 0.001254 | 0.001262 | 0.001294 |
| is_placeholder.test | COMPILE | 0.100288 | 0.254265 | 0.295008 | — | — | — |
| is_sequence.test | COMPILE | 0.121655 | 0.303602 | 0.347389 | — | — | — |
| iterator_tags.test | COMPILE | 0.102583 | 0.257268 | 0.304566 | — | — | — |
| joint_view.test | COMPILE | 0.138978 | 0.351157 | 0.401460 | — | — | — |
| lambda.test | COMPILE | 0.124788 | 0.320049 | 0.375392 | — | — | — |
| lambda_args.test | COMPILE | 0.121893 | 0.305651 | 0.375392 | — | — | — |
| list.test | COMPILE | 0.124770 | 0.318228 | 0.368312 | — | — | — |
| list_c.test | COMPILE | 0.126356 | 0.313859 | 0.378724 | — | — | — |
| logical.test | COMPILE | 0.101212 | 0.247980 | 0.296732 | — | — | — |
| lower_bound.test | COMPILE | 0.133995 | 0.320608 | 0.382126 | — | — | — |
| map.test | COMPILE | 0.157504 | 0.403939 | 0.471350 | — | — | — |
| max_element.test | COMPILE | 0.123108 | 0.314755 | 0.360936 | — | — | — |
| min_max.test | COMPILE | 0.106476 | 0.262582 | 0.302010 | — | — | — |
| multiset.test | COMPILE | 0.137044 | 0.347620 | 0.402485 | — | — | — |
| next.test | COMPILE | 0.099915 | 0.245981 | 0.296214 | — | — | — |
| no_has_xxx.test | COMPILE | 0.110366 | 0.262552 | 0.321272 | — | — | — |
| numeric_ops.test | COMPILE | 0.120556 | 0.305859 | 0.348437 | — | — | — |
| pair_view.test | COMPILE | 0.136316 | 0.341940 | 0.403337 | — | — | — |
| partition.test | COMPILE | 0.150625 | 0.379844 | 0.441589 | — | — | — |
| pop_front.test | COMPILE | 0.124704 | 0.308815 | 0.358714 | — | — | — |
| push_back.test | COMPILE | 0.104946 | 0.262255 | 0.302484 | — | — | — |
| push_front.test | COMPILE | 0.126863 | 0.314046 | 0.364717 | — | — | — |
| quote.test | COMPILE | 0.102198 | 0.255652 | 0.296488 | — | — | — |
| range_c.test | COMPILE | 0.131219 | 0.331912 | 0.373271 | — | — | — |
| remove.test | COMPILE | 0.138566 | 0.350351 | 0.396967 | — | — | — |
| remove_if.test | COMPILE | 0.135286 | 0.359629 | 0.420450 | — | — | — |
| replace.test | COMPILE | 0.149713 | 0.396250 | 0.447571 | — | — | — |
| replace_if.test | COMPILE | 0.154371 | 0.400991 | 0.443105 | — | — | — |
| reverse.test | COMPILE | 0.147097 | 0.372069 | 0.421085 | — | — | — |
| same_as.test | COMPILE | 0.100027 | 0.267200 | 0.319306 | — | — | — |
| set.test | COMPILE | 0.196902 | 0.519065 | 0.637464 | — | — | — |
| set_c.test | COMPILE | 0.144064 | 0.350781 | 0.416210 | — | — | — |
| single_view.test | COMPILE | 0.131043 | 0.325557 | 0.371609 | — | — | — |
| size.test | COMPILE | 0.121577 | 0.305417 | 0.357052 | — | — | — |
| size_t.test | RUN | 0.107598 | 0.276835 | 0.330866 | 0.001146 | 0.001566 | 0.001197 |
| sizeof.test | COMPILE | 0.099260 | 0.244404 | 0.294844 | — | — | — |
| sort.test | COMPILE | 0.164762 | 0.412327 | 0.477377 | — | — | — |
| stable_partition.test | COMPILE | 0.156386 | 0.374644 | 0.446538 | — | — | — |
| transform.test | COMPILE | 0.161361 | 0.411121 | 0.484187 | — | — | — |
| transform_view.test | COMPILE | 0.132970 | 0.333403 | 0.385775 | — | — | — |
| unique.test | COMPILE | 0.141327 | 0.343825 | 0.405152 | — | — | — |
| unpack_args.test | COMPILE | 0.131838 | 0.323400 | 0.373707 | — | — | — |
| upper_bound.test | COMPILE | 0.131597 | 0.316556 | 0.377655 | — | — | — |
| vector.test | COMPILE | 0.150214 | 0.393300 | 0.448854 | — | — | — |
| vector_c.test | COMPILE | 0.134029 | 0.322940 | 0.385718 | — | — | — |
| zip_view.test | COMPILE | 0.191182 | 0.477206 | 0.552640 | — | — | — |
| string.test | RUN | 0.314318 | 0.961910 | 0.853859 | 0.000938 | 0.001003 | 0.000835 |
| issue_69.test | RUN | 0.011790 | 0.037046 | 0.037938 | 0.000491 | 0.000501 | 0.001309 |
| issue_84.test | RUN | 0.031085 | 0.070928 | 0.071330 | 0.000354 | 0.000452 | 0.000873 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.989× | 1.003×, 0.976× | 1.014× |
| clang | 1.110× | 1.098×, 1.122× | 1.012× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1364 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/43778388618).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| bool.test | 10 | 0.000819s | 0.000810s | 0.000822s | byte equality observed |
| char.test | 10 | 0.000780s | 0.000825s | 0.000802s | byte equality observed |
| char_unsigned.test | 10 | 0.000808s | 0.000788s | 0.000812s | byte equality observed |
| for_each.test | 10 | 0.000828s | 0.000798s | 0.000806s | byte equality observed |
| int.test | 10 | 0.000812s | 0.000791s | 0.000792s | byte equality observed |
| integral_c.test | 10 | 0.000816s | 0.000812s | 0.000827s | byte equality observed |
| integral_c_unsigned.test | 10 | 0.000793s | 0.000798s | 0.000803s | byte equality observed |
| issue_69.test | 10 | 0.000355s | 0.000369s | 0.000785s | byte equality observed |
| issue_84.test | 10 | 0.000353s | 0.000357s | 0.000800s | byte equality observed |
| size_t.test | 10 | 0.000789s | 0.000785s | 0.000794s | byte equality observed |
| string.test | 10 | 0.000819s | 0.000800s | 0.000808s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/43778388618).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
