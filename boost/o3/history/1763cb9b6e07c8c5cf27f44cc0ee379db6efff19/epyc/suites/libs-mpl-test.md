# libs/mpl/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| increased_arity.test | COMPILE | 0.462486 | 1.291210 | 1.302057 | — | — | — |
| largest_int.test | COMPILE | 0.159812 | 0.372782 | 0.506793 | — | — | — |
| msvc_is_class.test | COMPILE | 0.019434 | 0.047351 | 0.054502 | — | — | — |
| template_arity.test | COMPILE | 0.158444 | 0.368004 | 0.500048 | — | — | — |
| is_seq.test | COMPILE | 0.006363 | 0.016591 | 0.030370 | — | — | — |
| token_equal.test | COMPILE | 0.006921 | 0.016792 | 0.032282 | — | — | — |
| advance.test | COMPILE | 0.175058 | 0.405161 | 0.496503 | — | — | — |
| always.test | COMPILE | 0.180907 | 0.421530 | 0.557055 | — | — | — |
| apply.test | COMPILE | 0.193456 | 0.419669 | 0.583482 | — | — | — |
| apply_wrap.test | COMPILE | 0.162093 | 0.361729 | 0.487314 | — | — | — |
| arithmetic.test | COMPILE | 0.179192 | 0.420967 | 0.558053 | — | — | — |
| as_sequence.test | COMPILE | 0.191705 | 0.462547 | 0.588914 | — | — | — |
| assert.test | COMPILE | 0.046465 | 0.094408 | 0.106329 | — | — | — |
| at.test | COMPILE | 0.188257 | 0.448698 | 0.586004 | — | — | — |
| back.test | COMPILE | 0.177644 | 0.432180 | 0.559652 | — | — | — |
| bind.test | COMPILE | 0.175035 | 0.419452 | 0.546739 | — | — | — |
| bitwise.test | COMPILE | 0.174647 | 0.422159 | 0.560953 | — | — | — |
| bool.test | RUN | 0.161515 | 0.368278 | 0.510165 | 0.001968 | 0.002031 | 0.002114 |
| comparison.test | COMPILE | 0.170878 | 0.416015 | 0.551016 | — | — | — |
| contains.test | COMPILE | 0.212166 | 0.502830 | 0.647752 | — | — | — |
| copy.test | COMPILE | 0.253104 | 0.611056 | 0.785916 | — | — | — |
| copy_if.test | COMPILE | 0.226354 | 0.537814 | 0.689450 | — | — | — |
| count.test | COMPILE | 0.214742 | 0.487512 | 0.671920 | — | — | — |
| count_if.test | COMPILE | 0.224837 | 0.528606 | 0.679940 | — | — | — |
| deque.test | COMPILE | 0.223259 | 0.520950 | 0.659333 | — | — | — |
| distance.test | COMPILE | 0.199268 | 0.457294 | 0.606799 | — | — | — |
| empty.test | COMPILE | 0.177441 | 0.401831 | 0.547695 | — | — | — |
| equal.test | COMPILE | 0.206432 | 0.489048 | 0.621461 | — | — | — |
| erase.test | COMPILE | 0.236880 | 0.563391 | 0.734156 | — | — | — |
| erase_range.test | COMPILE | 0.221028 | 0.525411 | 0.695740 | — | — | — |
| eval_if.test | COMPILE | 0.163899 | 0.386353 | 0.517566 | — | — | — |
| filter_view.test | COMPILE | 0.219951 | 0.534834 | 0.689296 | — | — | — |
| find.test | COMPILE | 0.218057 | 0.497706 | 0.661436 | — | — | — |
| find_if.test | COMPILE | 0.222899 | 0.528944 | 0.692602 | — | — | — |
| fold.test | COMPILE | 0.231188 | 0.541663 | 0.733564 | — | — | — |
| for_each.test | RUN | 0.328498 | 0.803292 | 1.134313 | 0.002214 | 0.002220 | 0.001857 |
| front.test | COMPILE | 0.180939 | 0.429722 | 0.581116 | — | — | — |
| get_tag_def.test | COMPILE | 0.161120 | 0.377200 | 0.493688 | — | — | — |
| has_xxx.test | COMPILE | 0.175446 | 0.414774 | 0.555806 | — | — | — |
| identity.test | COMPILE | 0.184286 | 0.425943 | 0.510016 | — | — | — |
| if.test | COMPILE | 0.162933 | 0.389115 | 0.497858 | — | — | — |
| index_of.test | COMPILE | 0.206767 | 0.486755 | 0.628763 | — | — | — |
| inherit.test | COMPILE | 0.168945 | 0.392856 | 0.480730 | — | — | — |
| insert.test | COMPILE | 0.237197 | 0.561087 | 0.760132 | — | — | — |
| insert_range.test | COMPILE | 0.321659 | 0.772438 | 1.103000 | — | — | — |
| int.test | RUN | 0.169861 | 0.405454 | 0.538432 | 0.001976 | 0.001757 | 0.002029 |
| char.test | RUN | 0.176269 | 0.408897 | 0.536460 | 0.001897 | 0.001940 | 0.002047 |
| char_unsigned.test | RUN | 0.169226 | 0.425274 | 0.543897 | 0.002031 | 0.002102 | 0.002079 |
| integral_c.test | RUN | 0.189349 | 0.537669 | 0.661027 | 0.002086 | 0.002301 | 0.001842 |
| integral_c_unsigned.test | RUN | 0.190231 | 0.541441 | 0.629437 | 0.001791 | 0.002289 | 0.002128 |
| is_placeholder.test | COMPILE | 0.163557 | 0.367615 | 0.515602 | — | — | — |
| is_sequence.test | COMPILE | 0.198833 | 0.462083 | 0.554731 | — | — | — |
| iterator_tags.test | COMPILE | 0.169303 | 0.381117 | 0.499454 | — | — | — |
| joint_view.test | COMPILE | 0.217153 | 0.525069 | 0.672437 | — | — | — |
| lambda.test | COMPILE | 0.205902 | 0.485018 | 0.620016 | — | — | — |
| lambda_args.test | COMPILE | 0.194676 | 0.451569 | 0.638023 | — | — | — |
| list.test | COMPILE | 0.200781 | 0.493604 | 0.612844 | — | — | — |
| list_c.test | COMPILE | 0.199964 | 0.475834 | 0.632527 | — | — | — |
| logical.test | COMPILE | 0.164823 | 0.374274 | 0.486492 | — | — | — |
| lower_bound.test | COMPILE | 0.211643 | 0.494959 | 0.626531 | — | — | — |
| map.test | COMPILE | 0.241137 | 0.610766 | 0.780023 | — | — | — |
| max_element.test | COMPILE | 0.195289 | 0.464793 | 0.592670 | — | — | — |
| min_max.test | COMPILE | 0.169431 | 0.391075 | 0.528925 | — | — | — |
| multiset.test | COMPILE | 0.215096 | 0.525266 | 0.659165 | — | — | — |
| next.test | COMPILE | 0.162264 | 0.373088 | 0.485832 | — | — | — |
| no_has_xxx.test | COMPILE | 0.172305 | 0.395667 | 0.534789 | — | — | — |
| numeric_ops.test | COMPILE | 0.191131 | 0.456737 | 0.600819 | — | — | — |
| pair_view.test | COMPILE | 0.225328 | 0.520984 | 0.661869 | — | — | — |
| partition.test | COMPILE | 0.235797 | 0.572298 | 0.745629 | — | — | — |
| pop_front.test | COMPILE | 0.197146 | 0.464662 | 0.600735 | — | — | — |
| push_back.test | COMPILE | 0.164974 | 0.398229 | 0.530171 | — | — | — |
| push_front.test | COMPILE | 0.198884 | 0.467212 | 0.607174 | — | — | — |
| quote.test | COMPILE | 0.164683 | 0.363566 | 0.505711 | — | — | — |
| range_c.test | COMPILE | 0.205048 | 0.491749 | 0.639415 | — | — | — |
| remove.test | COMPILE | 0.215342 | 0.520545 | 0.666021 | — | — | — |
| remove_if.test | COMPILE | 0.223702 | 0.531128 | 0.680260 | — | — | — |
| replace.test | COMPILE | 0.241813 | 0.571939 | 0.740463 | — | — | — |
| replace_if.test | COMPILE | 0.241867 | 0.614137 | 0.745946 | — | — | — |
| reverse.test | COMPILE | 0.228422 | 0.567263 | 0.706046 | — | — | — |
| same_as.test | COMPILE | 0.177399 | 0.404908 | 0.514365 | — | — | — |
| set.test | COMPILE | 0.309348 | 0.782676 | 1.073831 | — | — | — |
| set_c.test | COMPILE | 0.229320 | 0.525591 | 0.701014 | — | — | — |
| single_view.test | COMPILE | 0.203734 | 0.506910 | 0.626729 | — | — | — |
| size.test | COMPILE | 0.199126 | 0.463718 | 0.612591 | — | — | — |
| size_t.test | RUN | 0.174468 | 0.435623 | 0.562392 | 0.001896 | 0.002072 | 0.001984 |
| sizeof.test | COMPILE | 0.163468 | 0.376689 | 0.511703 | — | — | — |
| sort.test | COMPILE | 0.260963 | 0.586406 | 0.786814 | — | — | — |
| stable_partition.test | COMPILE | 0.241340 | 0.574942 | 0.746346 | — | — | — |
| transform.test | COMPILE | 0.256491 | 0.610549 | 0.799180 | — | — | — |
| transform_view.test | COMPILE | 0.213456 | 0.492615 | 0.651314 | — | — | — |
| unique.test | COMPILE | 0.223296 | 0.523423 | 0.669651 | — | — | — |
| unpack_args.test | COMPILE | 0.206191 | 0.487550 | 0.626899 | — | — | — |
| upper_bound.test | COMPILE | 0.213308 | 0.468884 | 0.636858 | — | — | — |
| vector.test | COMPILE | 0.235540 | 0.589416 | 0.750575 | — | — | — |
| vector_c.test | COMPILE | 0.210714 | 0.491849 | 0.636184 | — | — | — |
| zip_view.test | COMPILE | 0.295206 | 0.710327 | 0.913856 | — | — | — |
| string.test | RUN | 0.457723 | 1.400852 | 1.251543 | 0.001582 | 0.001608 | 0.001485 |
| issue_69.test | RUN | 0.020997 | 0.057360 | 0.062057 | 0.000667 | 0.000785 | 0.001904 |
| issue_84.test | RUN | 0.050017 | 0.110478 | 0.119838 | 0.000687 | 0.000718 | 0.001511 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.990× | 0.986×, 0.994× | 0.982× |
| clang | 1.102× | 1.107×, 1.097× | 1.012× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1359 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44390936409).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| bool.test | 10 | 0.001304s | 0.001276s | 0.001311s | byte equality observed |
| char.test | 10 | 0.001274s | 0.001291s | 0.001275s | byte equality observed |
| char_unsigned.test | 10 | 0.001289s | 0.001292s | 0.001313s | byte equality observed |
| for_each.test | 10 | 0.001329s | 0.001265s | 0.001302s | byte equality observed |
| int.test | 10 | 0.001283s | 0.001273s | 0.001299s | byte equality observed |
| integral_c.test | 10 | 0.001275s | 0.001318s | 0.001327s | byte equality observed |
| integral_c_unsigned.test | 10 | 0.001309s | 0.001294s | 0.001291s | byte equality observed |
| issue_69.test | 10 | 0.000602s | 0.000594s | 0.001267s | byte equality observed |
| issue_84.test | 10 | 0.000603s | 0.000588s | 0.001314s | byte equality observed |
| size_t.test | 10 | 0.001290s | 0.001318s | 0.001246s | byte equality observed |
| string.test | 10 | 0.001296s | 0.001263s | 0.001327s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44390936409).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
