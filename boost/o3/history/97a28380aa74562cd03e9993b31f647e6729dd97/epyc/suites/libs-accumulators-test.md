# libs/accumulators/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| count.test | RUN | 0.583472 | 1.662633 | 1.556672 | 0.003024 | 0.002974 | 0.002618 |
| covariance.test | RUN | 1.157669 | 3.876327 | 4.004124 | 0.002942 | 0.002986 | 0.002738 |
| droppable.test | RUN | 0.739340 | 2.090186 | 2.186228 | 0.002980 | 0.003071 | 0.002418 |
| error_of.test | RUN | 0.807150 | 1.914499 | 2.285591 | 0.002917 | 0.003110 | 0.002479 |
| extended_p_square.test | RUN | 0.827608 | 2.570248 | 2.383962 | 0.004115 | 0.004164 | 0.003717 |
| extended_p_square_quantile.test | RUN | 1.072705 | 4.044743 | 3.434656 | 0.006695 | 0.007215 | 0.006130 |
| external_accumulator.test | RUN | 0.699813 | 1.933372 | 2.096964 | 0.002921 | 0.002762 | 0.002768 |
| external_weights.test | RUN | 0.589974 | 1.478688 | 1.609528 | 0.002818 | 0.002816 | 0.002452 |
| kurtosis.test | RUN | 0.949319 | 2.503746 | 2.739862 | 0.003459 | 0.004551 | 0.003460 |
| max.test | RUN | 0.588977 | 1.567819 | 1.508397 | 0.002769 | 0.003037 | 0.002612 |
| mean.test | RUN | 0.798929 | 2.221881 | 2.213083 | 0.002987 | 0.003001 | 0.002701 |
| median.test | RUN | 1.096785 | 4.379942 | 3.451406 | 0.088671 | 0.096932 | 0.085865 |
| min.test | RUN | 0.616372 | 1.573084 | 1.509963 | 0.002815 | 0.003026 | 0.002639 |
| moment.test | RUN | 0.683383 | 1.805788 | 1.892770 | 0.002962 | 0.002983 | 0.002699 |
| p_square_cumul_dist.test | RUN | 0.907804 | 2.969248 | 2.571399 | 0.636935 | 0.743798 | 0.616734 |
| p_square_quantile.test | RUN | 0.812032 | 2.608094 | 2.166803 | 0.021621 | 0.019483 | 0.018793 |
| reference.test | RUN | 0.698584 | 1.658798 | 1.842165 | 0.003114 | 0.002763 | 0.002446 |
| rolling_count.test | RUN | 0.704736 | 1.865759 | 1.860409 | 0.002819 | 0.002808 | 0.002773 |
| rolling_sum.test | RUN | 0.719747 | 1.937998 | 1.793060 | 0.003192 | 0.002877 | 0.002713 |
| rolling_mean.test | RUN | 1.057270 | 3.595827 | 3.143550 | 0.003285 | 0.002907 | 0.002849 |
| rolling_variance.test | RUN | 1.143904 | 4.178392 | 3.531054 | 0.002775 | 0.003228 | 0.002739 |
| rolling_moment.test | RUN | 0.855556 | 2.427097 | 2.332866 | 0.003177 | 0.002828 | 0.003013 |
| skewness.test | RUN | 0.917744 | 2.495176 | 2.664510 | 0.004051 | 0.004440 | 0.003496 |
| sum.test | RUN | 0.622721 | 1.624822 | 1.697067 | 0.002532 | 0.002917 | 0.002582 |
| sum_kahan.test | RUN | 0.679021 | 1.807990 | 1.760805 | 0.012220 | 0.020874 | 0.010212 |
| tail.test | RUN | 0.721054 | 2.411929 | 2.049178 | 0.002803 | 0.003047 | 0.002691 |
| tail_mean.test | RUN | 1.141834 | 2.886292 | 2.957234 | 0.017332 | 0.021376 | 0.017881 |
| tail_quantile.test | RUN | 0.930139 | 2.368594 | 2.279969 | 0.020001 | 0.025521 | 0.018698 |
| variance.test | RUN | 0.891160 | 2.148795 | 2.260504 | 0.002932 | 0.003004 | 0.002950 |
| vector.test | RUN | 0.936325 | 2.577150 | 2.782937 | 0.002841 | 0.002755 | 0.002469 |
| weighted_covariance.test | RUN | 1.117451 | 4.052109 | 4.153734 | 0.002908 | 0.002946 | 0.002530 |
| weighted_extended_p_square.test | RUN | 0.742704 | 2.321863 | 2.185619 | 0.016225 | 0.019022 | 0.015372 |
| weighted_kurtosis.test | RUN | 0.880524 | 2.339119 | 2.597281 | 0.003098 | 0.004840 | 0.003382 |
| weighted_mean.test | RUN | 0.739212 | 2.119870 | 2.217726 | 0.002819 | 0.002889 | 0.002252 |
| weighted_median.test | RUN | 1.010456 | 2.804209 | 2.904060 | 0.868255 | 0.957881 | 0.833009 |
| weighted_moment.test | RUN | 0.624692 | 1.566920 | 1.697137 | 0.002802 | 0.003040 | 0.002626 |
| weighted_p_square_cumul_dist.test | RUN | 0.782485 | 2.394526 | 2.041121 | 0.083930 | 0.127958 | 0.085232 |
| weighted_p_square_quantile.test | RUN | 0.729781 | 2.499992 | 1.744532 | 0.020320 | 0.024877 | 0.018188 |
| weighted_skewness.test | RUN | 0.919620 | 2.373119 | 2.469256 | 0.003476 | 0.004812 | 0.003066 |
| weighted_sum.test | RUN | 0.545965 | 1.378940 | 1.353222 | 0.002766 | 0.002675 | 0.002303 |
| weighted_sum_kahan.test | RUN | 0.544389 | 1.489877 | 1.453912 | 0.007301 | 0.012129 | 0.006482 |
| weighted_variance.test | RUN | 1.010076 | 2.599612 | 2.848629 | 0.002875 | 0.003206 | 0.002564 |
| valarray.test | RUN | 0.934840 | 2.510926 | 2.682502 | 0.003000 | 0.002809 | 0.002636 |
| tail_variate_means.test | RUN | 1.166345 | 4.011334 | 3.745168 | 0.003049 | 0.003025 | 0.002450 |
| pot_quantile.test | RUN | 1.459256 | 4.430823 | 4.352744 | 0.009410 | 0.011407 | 0.008195 |
| weighted_pot_quantile.test | RUN | 1.449970 | 4.348911 | 4.411186 | 0.022468 | 0.024807 | 0.021024 |
| weighted_tail_mean.test | RUN | 1.286647 | 3.458518 | 3.755823 | 0.019042 | 0.022749 | 0.017273 |
| weighted_tail_quantile.test | RUN | 1.299653 | 2.969544 | 3.300721 | 0.015962 | 0.018046 | 0.014669 |
| weighted_tail_variate_means.test | RUN | 1.471526 | 3.750966 | 3.852845 | 0.002235 | 0.002094 | 0.001810 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 1.136× | 1.145×, 1.127× | 0.977× |
| clang | 1.001× | 1.002×, 1.000× | 1.015× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1364 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43686398833).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| count.test | 1 | 0.002230s | 0.002139s | 0.002295s | byte equality observed |
| covariance.test | 1 | 0.002322s | 0.002105s | 0.002269s | byte equality observed |
| droppable.test | 1 | 0.002339s | 0.002034s | 0.002256s | byte equality observed |
| error_of.test | 1 | 0.002151s | 0.002082s | 0.002197s | byte equality observed |
| extended_p_square.test | 6 | 0.002898s | 0.002847s | 0.002884s | byte equality observed |
| extended_p_square_quantile.test | 4 | 0.005092s | 0.005549s | 0.004966s | byte equality observed |
| external_accumulator.test | 8 | 0.001848s | 0.001743s | 0.001807s | byte equality observed |
| external_weights.test | 9 | 0.001724s | 0.001629s | 0.001719s | byte equality observed |
| kurtosis.test | 6 | 0.002457s | 0.003037s | 0.002437s | byte equality observed |
| max.test | 7 | 0.001816s | 0.001731s | 0.001784s | byte equality observed |
| mean.test | 7 | 0.001822s | 0.001734s | 0.001804s | byte equality observed |
| median.test | 1 | 0.085360s | 0.089111s | 0.085498s | byte equality observed |
| min.test | 9 | 0.001858s | 0.001737s | 0.001788s | byte equality observed |
| moment.test | 6 | 0.001847s | 0.001726s | 0.001826s | byte equality observed |
| p_square_cumul_dist.test | 1 | 0.588646s | 0.707947s | 0.596702s | byte equality observed |
| p_square_quantile.test | 1 | 0.020333s | 0.020146s | 0.019452s | byte equality observed |
| pot_quantile.test | 2 | 0.008231s | 0.009051s | 0.008006s | byte equality observed |
| reference.test | 9 | 0.001905s | 0.001750s | 0.001887s | byte equality observed |
| rolling_count.test | 9 | 0.001882s | 0.001729s | 0.001888s | byte equality observed |
| rolling_mean.test | 9 | 0.001950s | 0.001824s | 0.001912s | byte equality observed |
| rolling_moment.test | 9 | 0.001916s | 0.001803s | 0.001895s | byte equality observed |
| rolling_sum.test | 9 | 0.001843s | 0.001712s | 0.001795s | byte equality observed |
| rolling_variance.test | 5 | 0.001954s | 0.001814s | 0.001881s | byte equality observed |
| skewness.test | 4 | 0.002494s | 0.003107s | 0.002545s | byte equality observed |
| sum.test | 9 | 0.001799s | 0.001719s | 0.001857s | byte equality observed |
| sum_kahan.test | 1 | 0.010652s | 0.018777s | 0.009759s | byte equality observed |
| tail.test | 5 | 0.001829s | 0.001696s | 0.001802s | byte equality observed |
| tail_mean.test | 2 | 0.016112s | 0.017435s | 0.017580s | byte equality observed |
| tail_quantile.test | 1 | 0.019195s | 0.021061s | 0.019662s | byte equality observed |
| tail_variate_means.test | 9 | 0.001790s | 0.001653s | 0.001817s | byte equality observed |
| valarray.test | 9 | 0.001719s | 0.001661s | 0.001786s | byte equality observed |
| variance.test | 9 | 0.001804s | 0.001730s | 0.001825s | byte equality observed |
| vector.test | 8 | 0.001694s | 0.001636s | 0.001724s | byte equality observed |
| weighted_covariance.test | 8 | 0.001795s | 0.001674s | 0.001782s | byte equality observed |
| weighted_extended_p_square.test | 1 | 0.015251s | 0.019245s | 0.015019s | byte equality observed |
| weighted_kurtosis.test | 5 | 0.002525s | 0.003525s | 0.002570s | byte equality observed |
| weighted_mean.test | 10 | 0.001763s | 0.001642s | 0.001740s | byte equality observed |
| weighted_median.test | 1 | 0.786397s | 0.852753s | 0.790388s | byte equality observed |
| weighted_moment.test | 8 | 0.001773s | 0.001650s | 0.001708s | byte equality observed |
| weighted_p_square_cumul_dist.test | 1 | 0.088895s | 0.099123s | 0.088198s | byte equality observed |
| weighted_p_square_quantile.test | 1 | 0.020118s | 0.024870s | 0.019604s | byte equality observed |
| weighted_pot_quantile.test | 1 | 0.020157s | 0.021034s | 0.020113s | byte equality observed |
| weighted_skewness.test | 5 | 0.002787s | 0.003608s | 0.002776s | byte equality observed |
| weighted_sum.test | 8 | 0.001738s | 0.001629s | 0.001847s | byte equality observed |
| weighted_sum_kahan.test | 2 | 0.006241s | 0.010171s | 0.005760s | byte equality observed |
| weighted_tail_mean.test | 2 | 0.017573s | 0.018634s | 0.018298s | byte equality observed |
| weighted_tail_quantile.test | 1 | 0.018547s | 0.021546s | 0.019044s | byte equality observed |
| weighted_tail_variate_means.test | 7 | 0.001875s | 0.001648s | 0.001913s | byte equality observed |
| weighted_variance.test | 7 | 0.001835s | 0.001942s | 0.001892s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43686398833).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
