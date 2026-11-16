# libs/accumulators/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| count.test | RUN | 0.953844 | 2.751126 | 3.495838 | 0.004095 | 0.003609 | 0.004021 |
| covariance.test | RUN | 1.836699 | 6.781411 | 8.909146 | 0.003805 | 0.004041 | 0.003853 |
| droppable.test | RUN | 1.187972 | 3.486555 | 4.646581 | 0.003835 | 0.003792 | 0.003921 |
| error_of.test | RUN | 1.286696 | 3.542560 | 4.933972 | 0.003547 | 0.003853 | 0.003708 |
| extended_p_square.test | RUN | 1.365510 | 4.434988 | 5.313460 | 0.005794 | 0.006144 | 0.004743 |
| extended_p_square_quantile.test | RUN | 1.764210 | 6.765194 | 7.217495 | 0.011377 | 0.010793 | 0.010556 |
| external_accumulator.test | RUN | 1.205432 | 3.581792 | 4.571613 | 0.003898 | 0.003573 | 0.003342 |
| external_weights.test | RUN | 1.039353 | 2.595192 | 3.637709 | 0.003533 | 0.003307 | 0.003591 |
| kurtosis.test | RUN | 1.524480 | 4.296344 | 6.129381 | 0.005481 | 0.005891 | 0.005319 |
| max.test | RUN | 0.986041 | 2.584900 | 3.456918 | 0.003869 | 0.003516 | 0.004107 |
| mean.test | RUN | 1.251907 | 3.702884 | 4.959106 | 0.003795 | 0.003685 | 0.003741 |
| median.test | RUN | 1.722258 | 7.017164 | 7.175893 | 0.147952 | 0.168244 | 0.150153 |
| min.test | RUN | 0.960434 | 2.597350 | 3.409075 | 0.003244 | 0.004067 | 0.003559 |
| moment.test | RUN | 1.109033 | 2.927209 | 4.065352 | 0.003784 | 0.004006 | 0.004029 |
| p_square_cumul_dist.test | RUN | 1.434189 | 5.115581 | 5.670412 | 1.047978 | 1.287023 | 1.080101 |
| p_square_quantile.test | RUN | 1.262849 | 4.559798 | 4.750673 | 0.034901 | 0.039777 | 0.033284 |
| reference.test | RUN | 1.109507 | 2.846819 | 4.169774 | 0.003540 | 0.003403 | 0.003956 |
| rolling_count.test | RUN | 1.101481 | 3.234817 | 4.134184 | 0.003446 | 0.003976 | 0.004236 |
| rolling_sum.test | RUN | 1.046885 | 3.094064 | 3.812831 | 0.003913 | 0.004096 | 0.003813 |
| rolling_mean.test | RUN | 1.627867 | 5.967415 | 6.707326 | 0.003750 | 0.003694 | 0.004176 |
| rolling_variance.test | RUN | 1.845813 | 6.758083 | 7.626174 | 0.004039 | 0.003872 | 0.004094 |
| rolling_moment.test | RUN | 1.350094 | 4.053289 | 5.086176 | 0.003815 | 0.003880 | 0.004229 |
| skewness.test | RUN | 1.473567 | 4.208441 | 5.534095 | 0.005268 | 0.005497 | 0.005200 |
| sum.test | RUN | 1.018059 | 2.867575 | 3.794842 | 0.003955 | 0.004049 | 0.003585 |
| sum_kahan.test | RUN | 1.111286 | 3.024119 | 3.976236 | 0.019383 | 0.031564 | 0.019616 |
| tail.test | RUN | 1.193360 | 4.139547 | 4.553366 | 0.003623 | 0.003597 | 0.003691 |
| tail_mean.test | RUN | 1.653028 | 4.923324 | 6.552336 | 0.025288 | 0.035493 | 0.028176 |
| tail_quantile.test | RUN | 1.367790 | 4.003453 | 5.146121 | 0.030669 | 0.041036 | 0.031885 |
| variance.test | RUN | 1.291566 | 3.599825 | 4.969213 | 0.003801 | 0.003329 | 0.004020 |
| vector.test | RUN | 1.400607 | 4.419403 | 5.913379 | 0.003536 | 0.003770 | 0.003733 |
| weighted_covariance.test | RUN | 1.877069 | 6.834796 | 9.082594 | 0.003537 | 0.003650 | 0.003677 |
| weighted_extended_p_square.test | RUN | 1.255487 | 4.000317 | 4.707324 | 0.028944 | 0.031323 | 0.026890 |
| weighted_kurtosis.test | RUN | 1.472600 | 4.036197 | 5.798712 | 0.005108 | 0.006060 | 0.005198 |
| weighted_mean.test | RUN | 1.293545 | 3.646843 | 4.902705 | 0.002957 | 0.003390 | 0.003170 |
| weighted_median.test | RUN | 1.655183 | 4.910851 | 6.569733 | 1.278049 | 1.385909 | 1.301458 |
| weighted_moment.test | RUN | 1.045956 | 2.668582 | 3.869431 | 0.003552 | 0.003764 | 0.003563 |
| weighted_p_square_cumul_dist.test | RUN | 1.233031 | 3.956868 | 4.682527 | 0.148838 | 0.163777 | 0.139066 |
| weighted_p_square_quantile.test | RUN | 1.171384 | 3.953387 | 4.025059 | 0.036479 | 0.040515 | 0.036105 |
| weighted_skewness.test | RUN | 1.437572 | 3.792458 | 5.572496 | 0.004941 | 0.006291 | 0.005293 |
| weighted_sum.test | RUN | 0.881687 | 2.146977 | 2.949257 | 0.003270 | 0.003834 | 0.003677 |
| weighted_sum_kahan.test | RUN | 0.802069 | 2.366523 | 3.223600 | 0.011251 | 0.017639 | 0.011599 |
| weighted_variance.test | RUN | 1.535349 | 4.481097 | 6.315527 | 0.004106 | 0.003991 | 0.003990 |
| valarray.test | RUN | 1.416252 | 4.178083 | 5.800028 | 0.003641 | 0.003903 | 0.003842 |
| tail_variate_means.test | RUN | 1.834751 | 6.440997 | 8.043492 | 0.003801 | 0.003932 | 0.003482 |
| pot_quantile.test | RUN | 2.269771 | 7.106443 | 9.775207 | 0.013937 | 0.016109 | 0.014077 |
| weighted_pot_quantile.test | RUN | 2.230917 | 7.130336 | 9.849018 | 0.023319 | 0.040924 | 0.034024 |
| weighted_tail_mean.test | RUN | 2.001462 | 5.769767 | 8.415549 | 0.026786 | 0.038560 | 0.027876 |
| weighted_tail_quantile.test | RUN | 1.953781 | 5.309382 | 7.200173 | 0.022695 | 0.028694 | 0.022959 |
| weighted_tail_variate_means.test | RUN | 2.173005 | 6.089450 | 8.287579 | 0.002633 | 0.002596 | 0.002624 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 1.190× | 1.197×, 1.183× | 1.004× |
| clang | 0.996× | 0.997×, 0.995× | 1.000× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1359 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/43785224349).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| count.test | 1 | 0.002873s | 0.002961s | 0.002835s | byte equality observed |
| covariance.test | 1 | 0.002927s | 0.002758s | 0.002847s | byte equality observed |
| droppable.test | 1 | 0.002909s | 0.002845s | 0.002857s | byte equality observed |
| error_of.test | 3 | 0.002623s | 0.002551s | 0.002540s | byte equality observed |
| extended_p_square.test | 4 | 0.004431s | 0.004601s | 0.004242s | byte equality observed |
| extended_p_square_quantile.test | 2 | 0.009360s | 0.010165s | 0.009214s | byte equality observed |
| external_accumulator.test | 5 | 0.002666s | 0.002582s | 0.002574s | byte equality observed |
| external_weights.test | 6 | 0.002508s | 0.002462s | 0.002462s | byte equality observed |
| kurtosis.test | 4 | 0.004042s | 0.004699s | 0.003976s | byte equality observed |
| max.test | 7 | 0.002586s | 0.002555s | 0.002519s | byte equality observed |
| mean.test | 5 | 0.002630s | 0.002561s | 0.002535s | byte equality observed |
| median.test | 1 | 0.142035s | 0.165086s | 0.141788s | byte equality observed |
| min.test | 7 | 0.002530s | 0.002508s | 0.002496s | byte equality observed |
| moment.test | 6 | 0.002588s | 0.002473s | 0.002502s | byte equality observed |
| p_square_cumul_dist.test | 1 | 0.902272s | 1.172614s | 0.915434s | byte equality observed |
| p_square_quantile.test | 1 | 0.034130s | 0.035010s | 0.030787s | byte equality observed |
| pot_quantile.test | 2 | 0.012794s | 0.013380s | 0.011865s | byte equality observed |
| reference.test | 7 | 0.002523s | 0.002486s | 0.002451s | byte equality observed |
| rolling_count.test | 6 | 0.002536s | 0.002454s | 0.002454s | byte equality observed |
| rolling_mean.test | 7 | 0.002640s | 0.002565s | 0.002539s | byte equality observed |
| rolling_moment.test | 7 | 0.002622s | 0.002561s | 0.002524s | byte equality observed |
| rolling_sum.test | 7 | 0.002572s | 0.002457s | 0.002470s | byte equality observed |
| rolling_variance.test | 6 | 0.002716s | 0.002574s | 0.002559s | byte equality observed |
| skewness.test | 5 | 0.003807s | 0.004583s | 0.003777s | byte equality observed |
| sum.test | 6 | 0.002522s | 0.002509s | 0.002347s | byte equality observed |
| sum_kahan.test | 1 | 0.018074s | 0.029530s | 0.018269s | byte equality observed |
| tail.test | 6 | 0.002575s | 0.002391s | 0.002397s | byte equality observed |
| tail_mean.test | 1 | 0.023553s | 0.028800s | 0.025607s | byte equality observed |
| tail_quantile.test | 1 | 0.029747s | 0.037417s | 0.028902s | byte equality observed |
| tail_variate_means.test | 7 | 0.002468s | 0.002322s | 0.002331s | byte equality observed |
| valarray.test | 7 | 0.002485s | 0.002448s | 0.002411s | byte equality observed |
| variance.test | 6 | 0.002606s | 0.002552s | 0.002527s | byte equality observed |
| vector.test | 7 | 0.002483s | 0.002421s | 0.002390s | byte equality observed |
| weighted_covariance.test | 7 | 0.002441s | 0.002387s | 0.002370s | byte equality observed |
| weighted_extended_p_square.test | 1 | 0.027351s | 0.031260s | 0.024329s | byte equality observed |
| weighted_kurtosis.test | 4 | 0.003905s | 0.005068s | 0.003869s | byte equality observed |
| weighted_mean.test | 8 | 0.002414s | 0.002347s | 0.002343s | byte equality observed |
| weighted_median.test | 1 | 1.142250s | 1.260001s | 1.141637s | byte equality observed |
| weighted_moment.test | 7 | 0.002372s | 0.002337s | 0.002300s | byte equality observed |
| weighted_p_square_cumul_dist.test | 1 | 0.144199s | 0.187341s | 0.136195s | byte equality observed |
| weighted_p_square_quantile.test | 1 | 0.033787s | 0.039054s | 0.033108s | byte equality observed |
| weighted_pot_quantile.test | 1 | 0.030304s | 0.032230s | 0.028958s | byte equality observed |
| weighted_skewness.test | 4 | 0.003869s | 0.004980s | 0.003680s | byte equality observed |
| weighted_sum.test | 8 | 0.002345s | 0.002275s | 0.002258s | byte equality observed |
| weighted_sum_kahan.test | 2 | 0.010070s | 0.015736s | 0.009988s | byte equality observed |
| weighted_tail_mean.test | 1 | 0.023801s | 0.029156s | 0.024417s | byte equality observed |
| weighted_tail_quantile.test | 1 | 0.026576s | 0.034270s | 0.028700s | byte equality observed |
| weighted_tail_variate_means.test | 6 | 0.002420s | 0.002328s | 0.002448s | byte equality observed |
| weighted_variance.test | 7 | 0.002625s | 0.002746s | 0.002548s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/43785224349).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
