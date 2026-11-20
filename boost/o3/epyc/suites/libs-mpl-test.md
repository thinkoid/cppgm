# libs/mpl/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| increased_arity.test | COMPILE | 0.493238 | 1.385738 | 1.547111 | — | — | — |
| largest_int.test | COMPILE | 0.166049 | 0.379623 | 0.513357 | — | — | — |
| msvc_is_class.test | COMPILE | 0.019615 | 0.048377 | 0.058784 | — | — | — |
| template_arity.test | COMPILE | 0.163595 | 0.373211 | 0.522813 | — | — | — |
| is_seq.test | COMPILE | 0.006091 | 0.017495 | 0.032194 | — | — | — |
| token_equal.test | COMPILE | 0.006420 | 0.017628 | 0.033880 | — | — | — |
| advance.test | COMPILE | 0.177054 | 0.407897 | 0.629655 | — | — | — |
| always.test | COMPILE | 0.180595 | 0.439778 | 0.623763 | — | — | — |
| apply.test | COMPILE | 0.190980 | 0.460781 | 0.685405 | — | — | — |
| apply_wrap.test | COMPILE | 0.169204 | 0.398776 | 0.573683 | — | — | — |
| arithmetic.test | COMPILE | 0.183253 | 0.441604 | 0.678329 | — | — | — |
| as_sequence.test | COMPILE | 0.197722 | 0.484668 | 0.689413 | — | — | — |
| assert.test | COMPILE | 0.045011 | 0.094936 | 0.115554 | — | — | — |
| at.test | COMPILE | 0.198920 | 0.472950 | 0.676149 | — | — | — |
| back.test | COMPILE | 0.185492 | 0.450079 | 0.647290 | — | — | — |
| bind.test | COMPILE | 0.182364 | 0.440136 | 0.634456 | — | — | — |
| bitwise.test | COMPILE | 0.187111 | 0.440965 | 0.661449 | — | — | — |
| bool.test | RUN | 0.168772 | 0.390523 | 0.583770 | 0.001785 | 0.002195 | 0.001998 |
| comparison.test | COMPILE | 0.180900 | 0.433733 | 0.661709 | — | — | — |
| contains.test | COMPILE | 0.219219 | 0.542072 | 0.788051 | — | — | — |
| copy.test | COMPILE | 0.257798 | 0.647771 | 0.931433 | — | — | — |
| copy_if.test | COMPILE | 0.233549 | 0.571585 | 0.824355 | — | — | — |
| count.test | COMPILE | 0.225373 | 0.521344 | 0.803074 | — | — | — |
| count_if.test | COMPILE | 0.231825 | 0.569239 | 0.807026 | — | — | — |
| deque.test | COMPILE | 0.221623 | 0.553904 | 0.759374 | — | — | — |
| distance.test | COMPILE | 0.206421 | 0.497776 | 0.719717 | — | — | — |
| empty.test | COMPILE | 0.182341 | 0.434498 | 0.647109 | — | — | — |
| equal.test | COMPILE | 0.218560 | 0.530092 | 0.726763 | — | — | — |
| erase.test | COMPILE | 0.246538 | 0.600199 | 0.862754 | — | — | — |
| erase_range.test | COMPILE | 0.240928 | 0.577705 | 0.810038 | — | — | — |
| eval_if.test | COMPILE | 0.171754 | 0.400666 | 0.569561 | — | — | — |
| filter_view.test | COMPILE | 0.231007 | 0.568239 | 0.791829 | — | — | — |
| find.test | COMPILE | 0.234986 | 0.536424 | 0.756529 | — | — | — |
| find_if.test | COMPILE | 0.232171 | 0.553840 | 0.782438 | — | — | — |
| fold.test | COMPILE | 0.243361 | 0.581333 | 0.845060 | — | — | — |
| for_each.test | RUN | 0.345434 | 0.842828 | 1.301128 | 0.001742 | 0.001992 | 0.001874 |
| front.test | COMPILE | 0.190430 | 0.457304 | 0.657529 | — | — | — |
| get_tag_def.test | COMPILE | 0.171424 | 0.411654 | 0.574121 | — | — | — |
| has_xxx.test | COMPILE | 0.184909 | 0.420383 | 0.642676 | — | — | — |
| identity.test | COMPILE | 0.189410 | 0.443267 | 0.622363 | — | — | — |
| if.test | COMPILE | 0.167352 | 0.384935 | 0.579407 | — | — | — |
| index_of.test | COMPILE | 0.213070 | 0.508474 | 0.724830 | — | — | — |
| inherit.test | COMPILE | 0.172533 | 0.409334 | 0.592534 | — | — | — |
| insert.test | COMPILE | 0.248580 | 0.616189 | 0.866515 | — | — | — |
| insert_range.test | COMPILE | 0.338514 | 0.826845 | 1.249423 | — | — | — |
| int.test | RUN | 0.178350 | 0.452716 | 0.636288 | 0.001853 | 0.002034 | 0.001948 |
| char.test | RUN | 0.182226 | 0.465734 | 0.656966 | 0.001814 | 0.001770 | 0.002148 |
| char_unsigned.test | RUN | 0.179074 | 0.444711 | 0.602465 | 0.001969 | 0.002141 | 0.002060 |
| integral_c.test | RUN | 0.202577 | 0.574081 | 0.781840 | 0.001910 | 0.002051 | 0.001778 |
| integral_c_unsigned.test | RUN | 0.203367 | 0.577671 | 0.707079 | 0.001744 | 0.002052 | 0.001756 |
| is_placeholder.test | COMPILE | 0.167899 | 0.391892 | 0.597146 | — | — | — |
| is_sequence.test | COMPILE | 0.210659 | 0.490719 | 0.646282 | — | — | — |
| iterator_tags.test | COMPILE | 0.175663 | 0.422244 | 0.590614 | — | — | — |
| joint_view.test | COMPILE | 0.236124 | 0.549251 | 0.793896 | — | — | — |
| lambda.test | COMPILE | 0.220894 | 0.515083 | 0.738253 | — | — | — |
| lambda_args.test | COMPILE | 0.202660 | 0.481413 | 0.753750 | — | — | — |
| list.test | COMPILE | 0.212763 | 0.515763 | 0.717936 | — | — | — |
| list_c.test | COMPILE | 0.207360 | 0.503370 | 0.749797 | — | — | — |
| logical.test | COMPILE | 0.172631 | 0.404879 | 0.585735 | — | — | — |
| lower_bound.test | COMPILE | 0.220992 | 0.509110 | 0.743682 | — | — | — |
| map.test | COMPILE | 0.259079 | 0.648962 | 0.915851 | — | — | — |
| max_element.test | COMPILE | 0.204793 | 0.481963 | 0.724963 | — | — | — |
| min_max.test | COMPILE | 0.179883 | 0.418781 | 0.595361 | — | — | — |
| multiset.test | COMPILE | 0.225826 | 0.546315 | 0.767585 | — | — | — |
| next.test | COMPILE | 0.169988 | 0.405614 | 0.576414 | — | — | — |
| no_has_xxx.test | COMPILE | 0.182269 | 0.420616 | 0.646524 | — | — | — |
| numeric_ops.test | COMPILE | 0.201803 | 0.490688 | 0.708832 | — | — | — |
| pair_view.test | COMPILE | 0.230482 | 0.541471 | 0.772831 | — | — | — |
| partition.test | COMPILE | 0.250415 | 0.607736 | 0.868932 | — | — | — |
| pop_front.test | COMPILE | 0.203198 | 0.493421 | 0.691842 | — | — | — |
| push_back.test | COMPILE | 0.175407 | 0.416965 | 0.614937 | — | — | — |
| push_front.test | COMPILE | 0.209437 | 0.487941 | 0.723241 | — | — | — |
| quote.test | COMPILE | 0.172806 | 0.393030 | 0.599991 | — | — | — |
| range_c.test | COMPILE | 0.213855 | 0.530312 | 0.711522 | — | — | — |
| remove.test | COMPILE | 0.224024 | 0.557443 | 0.786062 | — | — | — |
| remove_if.test | COMPILE | 0.232802 | 0.562261 | 0.793495 | — | — | — |
| replace.test | COMPILE | 0.253077 | 0.609716 | 0.856500 | — | — | — |
| replace_if.test | COMPILE | 0.253125 | 0.636588 | 0.869712 | — | — | — |
| reverse.test | COMPILE | 0.237234 | 0.592939 | 0.842006 | — | — | — |
| same_as.test | COMPILE | 0.182768 | 0.427278 | 0.641144 | — | — | — |
| set.test | COMPILE | 0.323931 | 0.817764 | 1.206477 | — | — | — |
| set_c.test | COMPILE | 0.231807 | 0.570408 | 0.842250 | — | — | — |
| single_view.test | COMPILE | 0.208901 | 0.515462 | 0.731956 | — | — | — |
| size.test | COMPILE | 0.210432 | 0.490829 | 0.704831 | — | — | — |
| size_t.test | RUN | 0.179875 | 0.454951 | 0.631336 | 0.001605 | 0.002108 | 0.001958 |
| sizeof.test | COMPILE | 0.167301 | 0.381944 | 0.567833 | — | — | — |
| sort.test | COMPILE | 0.267413 | 0.652322 | 0.896633 | — | — | — |
| stable_partition.test | COMPILE | 0.255685 | 0.600576 | 0.856107 | — | — | — |
| transform.test | COMPILE | 0.267463 | 0.659570 | 0.928558 | — | — | — |
| transform_view.test | COMPILE | 0.216582 | 0.509496 | 0.732051 | — | — | — |
| unique.test | COMPILE | 0.232859 | 0.558453 | 0.805073 | — | — | — |
| unpack_args.test | COMPILE | 0.216420 | 0.505326 | 0.726637 | — | — | — |
| upper_bound.test | COMPILE | 0.220576 | 0.513295 | 0.730214 | — | — | — |
| vector.test | COMPILE | 0.247750 | 0.605918 | 0.872042 | — | — | — |
| vector_c.test | COMPILE | 0.222400 | 0.512391 | 0.781633 | — | — | — |
| zip_view.test | COMPILE | 0.312481 | 0.763494 | 1.107389 | — | — | — |
| string.test | RUN | 0.476753 | 1.388716 | 1.484786 | 0.001483 | 0.001346 | 0.001459 |
| issue_69.test | RUN | 0.022471 | 0.064308 | 0.066674 | 0.000800 | 0.000825 | 0.002081 |
| issue_84.test | RUN | 0.052799 | 0.109643 | 0.096576 | 0.000637 | 0.000622 | 0.001401 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 1.007× | 1.011×, 1.003× | 1.005× |
| clang | 1.100×† | 1.131×, 1.069× | 1.021× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1360 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/thinkoid/cppgm/actions/runs/44661842949).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| bool.test | 10 | 0.001250s | 0.001239s | 0.001294s | byte equality observed |
| char.test | 10 | 0.001239s | 0.001236s | 0.001214s | byte equality observed |
| char_unsigned.test | 10 | 0.001252s | 0.001243s | 0.001281s | byte equality observed |
| for_each.test | 10 | 0.001191s | 0.001265s | 0.001250s | byte equality observed |
| int.test | 10 | 0.001231s | 0.001287s | 0.001269s | byte equality observed |
| integral_c.test | 10 | 0.001235s | 0.001217s | 0.001281s | byte equality observed |
| integral_c_unsigned.test | 10 | 0.001291s | 0.001225s | 0.001264s | byte equality observed |
| issue_69.test | 10 | 0.000581s | 0.000571s | 0.001260s | byte equality observed |
| issue_84.test | 10 | 0.000567s | 0.000573s | 0.001269s | byte equality observed |
| size_t.test | 10 | 0.001239s | 0.001222s | 0.001239s | byte equality observed |
| string.test | 10 | 0.001236s | 0.001253s | 0.001242s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/thinkoid/cppgm/actions/runs/44661842949).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
