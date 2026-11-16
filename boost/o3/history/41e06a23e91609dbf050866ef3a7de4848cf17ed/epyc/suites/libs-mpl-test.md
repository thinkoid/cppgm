# libs/mpl/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| increased_arity.test | COMPILE | 0.493859 | 1.385179 | 1.556925 | — | — | — |
| largest_int.test | COMPILE | 0.166468 | 0.379544 | 0.531583 | — | — | — |
| msvc_is_class.test | COMPILE | 0.020588 | 0.047810 | 0.056313 | — | — | — |
| template_arity.test | COMPILE | 0.166821 | 0.376027 | 0.519798 | — | — | — |
| is_seq.test | COMPILE | 0.005992 | 0.017232 | 0.031183 | — | — | — |
| token_equal.test | COMPILE | 0.006042 | 0.017691 | 0.033288 | — | — | — |
| advance.test | COMPILE | 0.182198 | 0.413701 | 0.628722 | — | — | — |
| always.test | COMPILE | 0.185673 | 0.443451 | 0.653296 | — | — | — |
| apply.test | COMPILE | 0.198702 | 0.464652 | 0.659130 | — | — | — |
| apply_wrap.test | COMPILE | 0.172725 | 0.400506 | 0.569478 | — | — | — |
| arithmetic.test | COMPILE | 0.187231 | 0.443609 | 0.624905 | — | — | — |
| as_sequence.test | COMPILE | 0.206639 | 0.493046 | 0.673293 | — | — | — |
| assert.test | COMPILE | 0.047646 | 0.099075 | 0.120073 | — | — | — |
| at.test | COMPILE | 0.199527 | 0.477008 | 0.682230 | — | — | — |
| back.test | COMPILE | 0.191902 | 0.454860 | 0.661350 | — | — | — |
| bind.test | COMPILE | 0.189083 | 0.443024 | 0.639417 | — | — | — |
| bitwise.test | COMPILE | 0.189954 | 0.446622 | 0.641934 | — | — | — |
| bool.test | RUN | 0.168329 | 0.396325 | 0.575194 | 0.001716 | 0.002038 | 0.002076 |
| comparison.test | COMPILE | 0.183292 | 0.450869 | 0.617776 | — | — | — |
| contains.test | COMPILE | 0.220618 | 0.517006 | 0.757490 | — | — | — |
| copy.test | COMPILE | 0.271201 | 0.641026 | 0.890716 | — | — | — |
| copy_if.test | COMPILE | 0.238097 | 0.559757 | 0.821514 | — | — | — |
| count.test | COMPILE | 0.225579 | 0.525441 | 0.774083 | — | — | — |
| count_if.test | COMPILE | 0.238856 | 0.560646 | 0.814419 | — | — | — |
| deque.test | COMPILE | 0.230383 | 0.556487 | 0.777697 | — | — | — |
| distance.test | COMPILE | 0.210254 | 0.493901 | 0.717752 | — | — | — |
| empty.test | COMPILE | 0.182683 | 0.423733 | 0.629801 | — | — | — |
| equal.test | COMPILE | 0.218536 | 0.519092 | 0.731242 | — | — | — |
| erase.test | COMPILE | 0.245970 | 0.601463 | 0.844468 | — | — | — |
| erase_range.test | COMPILE | 0.235437 | 0.573970 | 0.802280 | — | — | — |
| eval_if.test | COMPILE | 0.171869 | 0.421053 | 0.615319 | — | — | — |
| filter_view.test | COMPILE | 0.233302 | 0.581699 | 0.791204 | — | — | — |
| find.test | COMPILE | 0.229919 | 0.543769 | 0.770591 | — | — | — |
| find_if.test | COMPILE | 0.235991 | 0.580234 | 0.796857 | — | — | — |
| fold.test | COMPILE | 0.243765 | 0.586324 | 0.850448 | — | — | — |
| for_each.test | RUN | 0.353041 | 0.874828 | 1.336530 | 0.001966 | 0.001834 | 0.002045 |
| front.test | COMPILE | 0.194871 | 0.465314 | 0.666580 | — | — | — |
| get_tag_def.test | COMPILE | 0.175621 | 0.414605 | 0.604657 | — | — | — |
| has_xxx.test | COMPILE | 0.185951 | 0.449515 | 0.678936 | — | — | — |
| identity.test | COMPILE | 0.194345 | 0.462794 | 0.658551 | — | — | — |
| if.test | COMPILE | 0.169411 | 0.424616 | 0.589938 | — | — | — |
| index_of.test | COMPILE | 0.215636 | 0.530265 | 0.722940 | — | — | — |
| inherit.test | COMPILE | 0.176000 | 0.426195 | 0.624950 | — | — | — |
| insert.test | COMPILE | 0.253169 | 0.612485 | 0.851053 | — | — | — |
| insert_range.test | COMPILE | 0.345387 | 0.844961 | 1.264213 | — | — | — |
| int.test | RUN | 0.178727 | 0.454393 | 0.628030 | 0.001892 | 0.001827 | 0.001977 |
| char.test | RUN | 0.185415 | 0.459536 | 0.649984 | 0.001924 | 0.001828 | 0.002009 |
| char_unsigned.test | RUN | 0.180648 | 0.462594 | 0.646393 | 0.001877 | 0.002160 | 0.002129 |
| integral_c.test | RUN | 0.206423 | 0.578878 | 0.785237 | 0.001975 | 0.002092 | 0.002068 |
| integral_c_unsigned.test | RUN | 0.207595 | 0.578172 | 0.751149 | 0.001660 | 0.001891 | 0.001944 |
| is_placeholder.test | COMPILE | 0.171859 | 0.389866 | 0.612975 | — | — | — |
| is_sequence.test | COMPILE | 0.208021 | 0.476068 | 0.653432 | — | — | — |
| iterator_tags.test | COMPILE | 0.177268 | 0.414745 | 0.583231 | — | — | — |
| joint_view.test | COMPILE | 0.230716 | 0.553667 | 0.795790 | — | — | — |
| lambda.test | COMPILE | 0.217819 | 0.501941 | 0.744005 | — | — | — |
| lambda_args.test | COMPILE | 0.209076 | 0.487862 | 0.746229 | — | — | — |
| list.test | COMPILE | 0.215083 | 0.519841 | 0.742372 | — | — | — |
| list_c.test | COMPILE | 0.211924 | 0.499983 | 0.751542 | — | — | — |
| logical.test | COMPILE | 0.174655 | 0.396642 | 0.593218 | — | — | — |
| lower_bound.test | COMPILE | 0.219544 | 0.522506 | 0.735410 | — | — | — |
| map.test | COMPILE | 0.258457 | 0.647166 | 0.910359 | — | — | — |
| max_element.test | COMPILE | 0.210377 | 0.512865 | 0.718171 | — | — | — |
| min_max.test | COMPILE | 0.178171 | 0.411218 | 0.596716 | — | — | — |
| multiset.test | COMPILE | 0.227280 | 0.561224 | 0.760619 | — | — | — |
| next.test | COMPILE | 0.174123 | 0.407563 | 0.602318 | — | — | — |
| no_has_xxx.test | COMPILE | 0.186494 | 0.422190 | 0.656845 | — | — | — |
| numeric_ops.test | COMPILE | 0.202801 | 0.496090 | 0.676166 | — | — | — |
| pair_view.test | COMPILE | 0.238574 | 0.550949 | 0.799493 | — | — | — |
| partition.test | COMPILE | 0.249725 | 0.610331 | 0.852276 | — | — | — |
| pop_front.test | COMPILE | 0.203482 | 0.500500 | 0.700012 | — | — | — |
| push_back.test | COMPILE | 0.177642 | 0.431761 | 0.629117 | — | — | — |
| push_front.test | COMPILE | 0.211861 | 0.498489 | 0.706239 | — | — | — |
| quote.test | COMPILE | 0.176883 | 0.390166 | 0.597984 | — | — | — |
| range_c.test | COMPILE | 0.215180 | 0.528822 | 0.747286 | — | — | — |
| remove.test | COMPILE | 0.227767 | 0.558211 | 0.772807 | — | — | — |
| remove_if.test | COMPILE | 0.236687 | 0.564859 | 0.807030 | — | — | — |
| replace.test | COMPILE | 0.255888 | 0.610828 | 0.868663 | — | — | — |
| replace_if.test | COMPILE | 0.260522 | 0.635851 | 0.890303 | — | — | — |
| reverse.test | COMPILE | 0.245657 | 0.590523 | 0.831266 | — | — | — |
| same_as.test | COMPILE | 0.185852 | 0.449716 | 0.619860 | — | — | — |
| set.test | COMPILE | 0.335609 | 0.851850 | 1.240432 | — | — | — |
| set_c.test | COMPILE | 0.234991 | 0.593071 | 0.845411 | — | — | — |
| single_view.test | COMPILE | 0.211495 | 0.521969 | 0.731630 | — | — | — |
| size.test | COMPILE | 0.209441 | 0.501762 | 0.700887 | — | — | — |
| size_t.test | RUN | 0.182790 | 0.450529 | 0.628725 | 0.002054 | 0.002170 | 0.002052 |
| sizeof.test | COMPILE | 0.166478 | 0.390379 | 0.572249 | — | — | — |
| sort.test | COMPILE | 0.271705 | 0.665203 | 0.909135 | — | — | — |
| stable_partition.test | COMPILE | 0.255149 | 0.623866 | 0.827068 | — | — | — |
| transform.test | COMPILE | 0.270598 | 0.686437 | 0.953993 | — | — | — |
| transform_view.test | COMPILE | 0.219476 | 0.547970 | 0.730658 | — | — | — |
| unique.test | COMPILE | 0.232739 | 0.539418 | 0.784043 | — | — | — |
| unpack_args.test | COMPILE | 0.212309 | 0.503517 | 0.718910 | — | — | — |
| upper_bound.test | COMPILE | 0.219943 | 0.508011 | 0.748593 | — | — | — |
| vector.test | COMPILE | 0.246890 | 0.627775 | 0.867790 | — | — | — |
| vector_c.test | COMPILE | 0.218415 | 0.520529 | 0.774776 | — | — | — |
| zip_view.test | COMPILE | 0.312321 | 0.796274 | 0.991229 | — | — | — |
| string.test | RUN | 0.484982 | 1.342587 | 1.397897 | 0.001685 | 0.001444 | 0.001482 |
| issue_69.test | RUN | 0.022235 | 0.058830 | 0.069110 | 0.000566 | 0.000777 | 0.001948 |
| issue_84.test | RUN | 0.043201 | 0.121625 | 0.123799 | 0.000604 | 0.000730 | 0.001391 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.997× | 1.014×, 0.980× | 0.998× |
| clang | 1.099× | 1.096×, 1.103× | 1.009× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1359 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/43785224349).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| bool.test | 10 | 0.001245s | 0.001169s | 0.001305s | byte equality observed |
| char.test | 10 | 0.001212s | 0.001209s | 0.001242s | byte equality observed |
| char_unsigned.test | 10 | 0.001233s | 0.001252s | 0.001304s | byte equality observed |
| for_each.test | 10 | 0.001272s | 0.001242s | 0.001237s | byte equality observed |
| int.test | 10 | 0.001241s | 0.001290s | 0.001236s | byte equality observed |
| integral_c.test | 10 | 0.001271s | 0.001234s | 0.001209s | byte equality observed |
| integral_c_unsigned.test | 10 | 0.001261s | 0.001258s | 0.001196s | byte equality observed |
| issue_69.test | 10 | 0.000570s | 0.000558s | 0.001176s | byte equality observed |
| issue_84.test | 10 | 0.000564s | 0.000547s | 0.001264s | byte equality observed |
| size_t.test | 10 | 0.001261s | 0.001260s | 0.001208s | byte equality observed |
| string.test | 10 | 0.001236s | 0.001301s | 0.001194s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/43785224349).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
