# libs/accumulators/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| count.test | RUN | 0.503927 | 1.383520 | 1.418495 | 0.001663 | 0.001697 | 0.001758 |
| covariance.test | RUN | 0.989019 | 3.598092 | 3.650701 | 0.001797 | 0.001875 | 0.001941 |
| droppable.test | RUN | 0.630340 | 1.923358 | 1.978419 | 0.001775 | 0.001777 | 0.001748 |
| error_of.test | RUN | 0.701028 | 1.813648 | 2.083878 | 0.001726 | 0.001619 | 0.001728 |
| extended_p_square.test | RUN | 0.732472 | 2.460420 | 2.196452 | 0.002898 | 0.002976 | 0.003051 |
| extended_p_square_quantile.test | RUN | 0.948475 | 3.731672 | 3.132033 | 0.005257 | 0.005713 | 0.004894 |
| external_accumulator.test | RUN | 0.610642 | 1.793528 | 1.877630 | 0.001915 | 0.001913 | 0.001882 |
| external_weights.test | RUN | 0.530890 | 1.403445 | 1.537044 | 0.001692 | 0.001623 | 0.001747 |
| kurtosis.test | RUN | 0.803409 | 2.284169 | 2.581755 | 0.002278 | 0.003310 | 0.002369 |
| max.test | RUN | 0.505495 | 1.399761 | 1.413047 | 0.001740 | 0.001722 | 0.001649 |
| mean.test | RUN | 0.663336 | 1.955236 | 2.036465 | 0.001840 | 0.001693 | 0.001813 |
| median.test | RUN | 0.945999 | 3.944019 | 3.239343 | 0.092061 | 0.106587 | 0.090078 |
| min.test | RUN | 0.504575 | 1.406037 | 1.404857 | 0.001849 | 0.001656 | 0.001832 |
| moment.test | RUN | 0.574385 | 1.634598 | 1.668290 | 0.001696 | 0.001775 | 0.001601 |
| p_square_cumul_dist.test | RUN | 0.774854 | 2.773091 | 2.472051 | 0.641764 | 0.812129 | 0.628793 |
| p_square_quantile.test | RUN | 0.672718 | 2.454567 | 2.002188 | 0.020650 | 0.019956 | 0.019752 |
| reference.test | RUN | 0.579045 | 1.532830 | 1.646252 | 0.001872 | 0.001937 | 0.001741 |
| rolling_count.test | RUN | 0.622790 | 1.799932 | 1.776454 | 0.001967 | 0.001696 | 0.001745 |
| rolling_sum.test | RUN | 0.592766 | 1.824809 | 1.836613 | 0.001780 | 0.001744 | 0.001859 |
| rolling_mean.test | RUN | 0.880012 | 3.222363 | 2.937091 | 0.001903 | 0.001922 | 0.001973 |
| rolling_variance.test | RUN | 0.992075 | 3.771663 | 3.343353 | 0.001900 | 0.001771 | 0.001920 |
| rolling_moment.test | RUN | 0.728960 | 2.173429 | 2.189225 | 0.001829 | 0.001840 | 0.001822 |
| skewness.test | RUN | 0.776638 | 2.180061 | 2.393048 | 0.002477 | 0.003243 | 0.002620 |
| sum.test | RUN | 0.536816 | 1.527986 | 1.539494 | 0.001732 | 0.001682 | 0.001843 |
| sum_kahan.test | RUN | 0.592652 | 1.635756 | 1.671793 | 0.012250 | 0.020092 | 0.012456 |
| tail.test | RUN | 0.623059 | 2.203036 | 1.890228 | 0.001718 | 0.001641 | 0.001809 |
| tail_mean.test | RUN | 0.866996 | 2.595715 | 2.730417 | 0.018788 | 0.019192 | 0.019613 |
| tail_quantile.test | RUN | 0.718367 | 2.130267 | 2.142263 | 0.021510 | 0.023541 | 0.020965 |
| variance.test | RUN | 0.676164 | 1.956575 | 2.061680 | 0.001948 | 0.001691 | 0.001911 |
| vector.test | RUN | 0.747753 | 2.360520 | 2.526209 | 0.001808 | 0.001683 | 0.001692 |
| weighted_covariance.test | RUN | 0.976216 | 3.560848 | 3.743567 | 0.001839 | 0.001774 | 0.001669 |
| weighted_extended_p_square.test | RUN | 0.685222 | 2.139546 | 1.944937 | 0.016125 | 0.019182 | 0.015295 |
| weighted_kurtosis.test | RUN | 0.812286 | 2.154196 | 2.394766 | 0.002392 | 0.003862 | 0.002459 |
| weighted_mean.test | RUN | 0.691805 | 1.930336 | 2.092853 | 0.001778 | 0.001715 | 0.001611 |
| weighted_median.test | RUN | 0.875215 | 2.640387 | 2.738464 | 1.051629 | 1.123098 | 1.054190 |
| weighted_moment.test | RUN | 0.544286 | 1.427538 | 1.556503 | 0.001697 | 0.001746 | 0.001736 |
| weighted_p_square_cumul_dist.test | RUN | 0.666765 | 2.213746 | 1.927702 | 0.091654 | 0.116694 | 0.092367 |
| weighted_p_square_quantile.test | RUN | 0.624309 | 2.165990 | 1.785442 | 0.020263 | 0.024076 | 0.019902 |
| weighted_skewness.test | RUN | 0.769867 | 2.058438 | 2.264042 | 0.002285 | 0.003846 | 0.002316 |
| weighted_sum.test | RUN | 0.460887 | 1.225447 | 1.244088 | 0.001647 | 0.001705 | 0.001633 |
| weighted_sum_kahan.test | RUN | 0.485475 | 1.293769 | 1.334020 | 0.007012 | 0.010754 | 0.006877 |
| weighted_variance.test | RUN | 0.816689 | 2.340888 | 2.568051 | 0.001825 | 0.002063 | 0.001758 |
| valarray.test | RUN | 0.773695 | 2.246188 | 2.417268 | 0.001634 | 0.001583 | 0.001612 |
| tail_variate_means.test | RUN | 0.979721 | 3.551185 | 3.344739 | 0.001614 | 0.001557 | 0.001600 |
| pot_quantile.test | RUN | 1.182912 | 3.903969 | 3.836788 | 0.007456 | 0.009591 | 0.007372 |
| weighted_pot_quantile.test | RUN | 1.210038 | 3.857740 | 3.834761 | 0.020403 | 0.023632 | 0.020332 |
| weighted_tail_mean.test | RUN | 1.057568 | 3.054661 | 3.268892 | 0.018993 | 0.020622 | 0.019067 |
| weighted_tail_quantile.test | RUN | 1.053992 | 3.288395 | 3.279542 | 0.019247 | 0.022351 | 0.019231 |
| weighted_tail_variate_means.test | RUN | 1.329777 | 4.535906 | 4.520844 | 0.001588 | 0.001579 | 0.001570 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 1.150× | 1.151×, 1.149× | 1.001× |
| clang | 0.989× | 0.991×, 0.988× | 1.003× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1365 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/43796354412).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| count.test | 2 | 0.001647s | 0.001531s | 0.001598s | byte equality observed |
| covariance.test | 2 | 0.001680s | 0.001660s | 0.001615s | byte equality observed |
| droppable.test | 2 | 0.001649s | 0.001667s | 0.001552s | byte equality observed |
| error_of.test | 2 | 0.001616s | 0.001523s | 0.001553s | byte equality observed |
| extended_p_square.test | 2 | 0.002830s | 0.002908s | 0.002668s | byte equality observed |
| extended_p_square_quantile.test | 1 | 0.005078s | 0.005668s | 0.004840s | byte equality observed |
| external_accumulator.test | 2 | 0.001642s | 0.001593s | 0.001581s | byte equality observed |
| external_weights.test | 2 | 0.001603s | 0.001531s | 0.001534s | byte equality observed |
| kurtosis.test | 1 | 0.002279s | 0.003336s | 0.002334s | byte equality observed |
| max.test | 1 | 0.001735s | 0.001652s | 0.001619s | byte equality observed |
| mean.test | 2 | 0.001670s | 0.001602s | 0.001612s | byte equality observed |
| median.test | 1 | 0.092382s | 0.105971s | 0.087860s | byte equality observed |
| min.test | 1 | 0.001768s | 0.001726s | 0.001566s | byte equality observed |
| moment.test | 1 | 0.001767s | 0.001661s | 0.001679s | byte equality observed |
| p_square_cumul_dist.test | 1 | 0.641634s | 0.812473s | 0.626845s | byte equality observed |
| p_square_quantile.test | 1 | 0.020573s | 0.019671s | 0.019395s | byte equality observed |
| pot_quantile.test | 1 | 0.007572s | 0.009566s | 0.007365s | byte equality observed |
| reference.test | 5 | 0.001564s | 0.001530s | 0.001491s | byte equality observed |
| rolling_count.test | 7 | 0.001596s | 0.001524s | 0.001516s | byte equality observed |
| rolling_mean.test | 6 | 0.001653s | 0.001604s | 0.001567s | byte equality observed |
| rolling_moment.test | 7 | 0.001618s | 0.001563s | 0.001553s | byte equality observed |
| rolling_sum.test | 8 | 0.001582s | 0.001517s | 0.001512s | byte equality observed |
| rolling_variance.test | 6 | 0.001664s | 0.001593s | 0.001598s | byte equality observed |
| skewness.test | 4 | 0.002142s | 0.003086s | 0.002126s | byte equality observed |
| sum.test | 6 | 0.001561s | 0.001519s | 0.001500s | byte equality observed |
| sum_kahan.test | 1 | 0.012087s | 0.019837s | 0.012142s | byte equality observed |
| tail.test | 7 | 0.001541s | 0.001517s | 0.001489s | byte equality observed |
| tail_mean.test | 1 | 0.018315s | 0.018767s | 0.019050s | byte equality observed |
| tail_quantile.test | 1 | 0.020853s | 0.023327s | 0.020505s | byte equality observed |
| tail_variate_means.test | 5 | 0.001523s | 0.001500s | 0.001468s | byte equality observed |
| valarray.test | 6 | 0.001499s | 0.001471s | 0.001444s | byte equality observed |
| variance.test | 4 | 0.001582s | 0.001517s | 0.001522s | byte equality observed |
| vector.test | 5 | 0.001505s | 0.001471s | 0.001442s | byte equality observed |
| weighted_covariance.test | 6 | 0.001503s | 0.001461s | 0.001424s | byte equality observed |
| weighted_extended_p_square.test | 1 | 0.015753s | 0.018802s | 0.015022s | byte equality observed |
| weighted_kurtosis.test | 3 | 0.002132s | 0.003628s | 0.002148s | byte equality observed |
| weighted_mean.test | 5 | 0.001478s | 0.001436s | 0.001416s | byte equality observed |
| weighted_median.test | 1 | 1.051848s | 1.123594s | 1.055213s | byte equality observed |
| weighted_moment.test | 4 | 0.001488s | 0.001434s | 0.001419s | byte equality observed |
| weighted_p_square_cumul_dist.test | 1 | 0.091567s | 0.116918s | 0.091757s | byte equality observed |
| weighted_p_square_quantile.test | 1 | 0.019865s | 0.023993s | 0.019763s | byte equality observed |
| weighted_pot_quantile.test | 1 | 0.020427s | 0.023693s | 0.020192s | byte equality observed |
| weighted_skewness.test | 2 | 0.002170s | 0.003674s | 0.002107s | byte equality observed |
| weighted_sum.test | 4 | 0.001471s | 0.001462s | 0.001419s | byte equality observed |
| weighted_sum_kahan.test | 2 | 0.006731s | 0.010655s | 0.006725s | byte equality observed |
| weighted_tail_mean.test | 1 | 0.019345s | 0.021170s | 0.019350s | byte equality observed |
| weighted_tail_quantile.test | 1 | 0.019400s | 0.023098s | 0.019296s | byte equality observed |
| weighted_tail_variate_means.test | 3 | 0.001508s | 0.001480s | 0.001418s | byte equality observed |
| weighted_variance.test | 3 | 0.001621s | 0.001814s | 0.001550s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/43796354412).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
