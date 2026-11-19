# libs/accumulators/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| count.test | RUN | 0.579417 | 1.754872 | 1.890332 | 0.002310 | 0.002398 | 0.002279 |
| covariance.test | RUN | 1.143482 | 4.572476 | 4.978739 | 0.002225 | 0.002160 | 0.002066 |
| droppable.test | RUN | 0.729716 | 2.350730 | 2.592336 | 0.002512 | 0.002222 | 0.002114 |
| error_of.test | RUN | 0.800500 | 2.274908 | 2.887983 | 0.002227 | 0.002206 | 0.002093 |
| extended_p_square.test | RUN | 0.857289 | 2.993103 | 2.916573 | 0.003319 | 0.003790 | 0.003437 |
| extended_p_square_quantile.test | RUN | 1.094436 | 4.702559 | 4.086349 | 0.006794 | 0.007510 | 0.006682 |
| external_accumulator.test | RUN | 0.699011 | 2.194323 | 2.579801 | 0.002229 | 0.002448 | 0.002273 |
| external_weights.test | RUN | 0.616045 | 1.739511 | 2.035780 | 0.002221 | 0.002249 | 0.001936 |
| kurtosis.test | RUN | 0.906635 | 2.864336 | 3.416510 | 0.002950 | 0.003918 | 0.002991 |
| max.test | RUN | 0.579953 | 1.700029 | 1.903838 | 0.002309 | 0.002234 | 0.002138 |
| mean.test | RUN | 0.785855 | 2.410796 | 2.753132 | 0.002200 | 0.002427 | 0.002180 |
| median.test | RUN | 1.060666 | 4.826844 | 4.271437 | 0.104252 | 0.118146 | 0.106198 |
| min.test | RUN | 0.586670 | 1.721347 | 1.926842 | 0.001868 | 0.002223 | 0.001919 |
| moment.test | RUN | 0.662218 | 1.946265 | 2.258735 | 0.002057 | 0.002352 | 0.002132 |
| p_square_cumul_dist.test | RUN | 0.868125 | 3.400771 | 3.157117 | 0.726377 | 0.904432 | 0.700206 |
| p_square_quantile.test | RUN | 0.774164 | 3.024429 | 2.747213 | 0.021774 | 0.024196 | 0.021550 |
| reference.test | RUN | 0.659223 | 1.897681 | 2.148081 | 0.002235 | 0.002184 | 0.001862 |
| rolling_count.test | RUN | 0.689462 | 2.061453 | 2.375531 | 0.002077 | 0.002371 | 0.002206 |
| rolling_sum.test | RUN | 0.691313 | 2.186164 | 2.349665 | 0.002368 | 0.002245 | 0.001914 |
| rolling_mean.test | RUN | 0.976245 | 3.984648 | 3.781719 | 0.002208 | 0.002107 | 0.002108 |
| rolling_variance.test | RUN | 1.160512 | 4.643762 | 4.425854 | 0.002320 | 0.002253 | 0.002370 |
| rolling_moment.test | RUN | 0.863450 | 2.679564 | 2.869737 | 0.002144 | 0.002285 | 0.002522 |
| skewness.test | RUN | 0.880280 | 2.693059 | 3.192543 | 0.002891 | 0.003807 | 0.002964 |
| sum.test | RUN | 0.614198 | 1.846913 | 2.134318 | 0.002249 | 0.002357 | 0.002110 |
| sum_kahan.test | RUN | 0.677231 | 1.966015 | 2.189429 | 0.011198 | 0.019329 | 0.011405 |
| tail.test | RUN | 0.724934 | 2.765720 | 2.493529 | 0.002135 | 0.002303 | 0.002339 |
| tail_mean.test | RUN | 0.994293 | 3.221165 | 3.691789 | 0.019945 | 0.021789 | 0.019427 |
| tail_quantile.test | RUN | 0.825042 | 2.600245 | 2.775799 | 0.021604 | 0.026254 | 0.020782 |
| variance.test | RUN | 0.782254 | 2.352038 | 2.746631 | 0.002235 | 0.002490 | 0.002298 |
| vector.test | RUN | 0.851078 | 2.880334 | 3.422786 | 0.002022 | 0.002637 | 0.001984 |
| weighted_covariance.test | RUN | 1.124806 | 4.598106 | 5.068736 | 0.001885 | 0.002314 | 0.002051 |
| weighted_extended_p_square.test | RUN | 0.772357 | 2.650241 | 2.515827 | 0.017967 | 0.021566 | 0.017156 |
| weighted_kurtosis.test | RUN | 0.906208 | 2.601795 | 3.113536 | 0.003167 | 0.004303 | 0.002851 |
| weighted_mean.test | RUN | 0.755606 | 2.308365 | 2.722059 | 0.002092 | 0.002146 | 0.001914 |
| weighted_median.test | RUN | 0.984102 | 3.199586 | 3.604285 | 0.971869 | 1.052620 | 0.982406 |
| weighted_moment.test | RUN | 0.617708 | 1.749056 | 2.012970 | 0.002025 | 0.002214 | 0.001965 |
| weighted_p_square_cumul_dist.test | RUN | 0.769086 | 2.722965 | 2.529899 | 0.097997 | 0.128663 | 0.096109 |
| weighted_p_square_quantile.test | RUN | 0.715375 | 2.500225 | 2.320270 | 0.020987 | 0.026006 | 0.019985 |
| weighted_skewness.test | RUN | 0.852034 | 2.554949 | 2.746151 | 0.002810 | 0.004254 | 0.002808 |
| weighted_sum.test | RUN | 0.459658 | 1.442947 | 1.660454 | 0.001849 | 0.002219 | 0.002070 |
| weighted_sum_kahan.test | RUN | 0.564429 | 1.562907 | 1.705409 | 0.006603 | 0.010643 | 0.006508 |
| weighted_variance.test | RUN | 0.898483 | 2.880224 | 3.492766 | 0.002300 | 0.002788 | 0.002324 |
| valarray.test | RUN | 0.885045 | 2.817691 | 3.196982 | 0.002102 | 0.002242 | 0.002242 |
| tail_variate_means.test | RUN | 1.145897 | 4.530381 | 4.497969 | 0.002020 | 0.002324 | 0.002117 |
| pot_quantile.test | RUN | 1.335075 | 4.913891 | 5.360455 | 0.008749 | 0.011033 | 0.008546 |
| weighted_pot_quantile.test | RUN | 1.367511 | 4.815882 | 5.438552 | 0.022870 | 0.018971 | 0.022215 |
| weighted_tail_mean.test | RUN | 1.195776 | 3.818632 | 4.519981 | 0.019310 | 0.022445 | 0.020033 |
| weighted_tail_quantile.test | RUN | 1.118300 | 3.276128 | 4.039893 | 0.015822 | 0.018058 | 0.015489 |
| weighted_tail_variate_means.test | RUN | 1.347002 | 4.166143 | 4.720838 | 0.001557 | 0.001712 | 0.001490 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 1.157× | 1.151×, 1.162× | 0.999× |
| clang | 1.004× | 1.000×, 1.009× | 1.011× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1363 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44560957980).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| count.test | 1 | 0.001970s | 0.001879s | 0.001722s | byte equality observed |
| covariance.test | 1 | 0.001943s | 0.001900s | 0.001860s | byte equality observed |
| droppable.test | 1 | 0.001987s | 0.001852s | 0.001668s | byte equality observed |
| error_of.test | 1 | 0.001818s | 0.001802s | 0.001625s | byte equality observed |
| extended_p_square.test | 5 | 0.002865s | 0.002973s | 0.002788s | byte equality observed |
| extended_p_square_quantile.test | 3 | 0.006006s | 0.006297s | 0.005612s | byte equality observed |
| external_accumulator.test | 8 | 0.001578s | 0.001544s | 0.001535s | byte equality observed |
| external_weights.test | 8 | 0.001549s | 0.001490s | 0.001482s | byte equality observed |
| kurtosis.test | 5 | 0.002294s | 0.003096s | 0.002284s | byte equality observed |
| max.test | 7 | 0.001583s | 0.001544s | 0.001501s | byte equality observed |
| mean.test | 7 | 0.001608s | 0.001575s | 0.001527s | byte equality observed |
| median.test | 1 | 0.099510s | 0.112638s | 0.100829s | byte equality observed |
| min.test | 8 | 0.001577s | 0.001510s | 0.001511s | byte equality observed |
| moment.test | 7 | 0.001585s | 0.001547s | 0.001510s | byte equality observed |
| p_square_cumul_dist.test | 1 | 0.627021s | 0.773446s | 0.632451s | byte equality observed |
| p_square_quantile.test | 1 | 0.021612s | 0.023827s | 0.020587s | byte equality observed |
| pot_quantile.test | 2 | 0.008346s | 0.009471s | 0.008123s | byte equality observed |
| reference.test | 10 | 0.001559s | 0.001517s | 0.001477s | byte equality observed |
| rolling_count.test | 8 | 0.001582s | 0.001536s | 0.001509s | byte equality observed |
| rolling_mean.test | 10 | 0.001652s | 0.001592s | 0.001566s | byte equality observed |
| rolling_moment.test | 10 | 0.001626s | 0.001597s | 0.001562s | byte equality observed |
| rolling_sum.test | 8 | 0.001603s | 0.001526s | 0.001512s | byte equality observed |
| rolling_variance.test | 9 | 0.001693s | 0.001649s | 0.001580s | byte equality observed |
| skewness.test | 5 | 0.002302s | 0.003010s | 0.002332s | byte equality observed |
| sum.test | 10 | 0.001557s | 0.001511s | 0.001485s | byte equality observed |
| sum_kahan.test | 2 | 0.010470s | 0.017317s | 0.010289s | byte equality observed |
| tail.test | 10 | 0.001523s | 0.001508s | 0.001490s | byte equality observed |
| tail_mean.test | 2 | 0.017716s | 0.019230s | 0.018138s | byte equality observed |
| tail_quantile.test | 1 | 0.020420s | 0.023616s | 0.019653s | byte equality observed |
| tail_variate_means.test | 8 | 0.001607s | 0.001446s | 0.001539s | byte equality observed |
| valarray.test | 8 | 0.001536s | 0.001486s | 0.001514s | byte equality observed |
| variance.test | 8 | 0.001613s | 0.001559s | 0.001520s | byte equality observed |
| vector.test | 8 | 0.001538s | 0.001513s | 0.001460s | byte equality observed |
| weighted_covariance.test | 10 | 0.001519s | 0.001482s | 0.001444s | byte equality observed |
| weighted_extended_p_square.test | 1 | 0.016852s | 0.018759s | 0.016399s | byte equality observed |
| weighted_kurtosis.test | 6 | 0.002325s | 0.003583s | 0.002272s | byte equality observed |
| weighted_mean.test | 10 | 0.001496s | 0.001439s | 0.001405s | byte equality observed |
| weighted_median.test | 1 | 0.852236s | 0.924692s | 0.859490s | byte equality observed |
| weighted_moment.test | 9 | 0.001474s | 0.001439s | 0.001400s | byte equality observed |
| weighted_p_square_cumul_dist.test | 1 | 0.101227s | 0.143316s | 0.098603s | byte equality observed |
| weighted_p_square_quantile.test | 1 | 0.021561s | 0.026786s | 0.021779s | byte equality observed |
| weighted_pot_quantile.test | 1 | 0.021585s | 0.023294s | 0.020857s | byte equality observed |
| weighted_skewness.test | 5 | 0.002291s | 0.003560s | 0.002353s | byte equality observed |
| weighted_sum.test | 8 | 0.001459s | 0.001419s | 0.001404s | byte equality observed |
| weighted_sum_kahan.test | 3 | 0.005750s | 0.009280s | 0.005720s | byte equality observed |
| weighted_tail_mean.test | 2 | 0.018475s | 0.019139s | 0.018952s | byte equality observed |
| weighted_tail_quantile.test | 1 | 0.019361s | 0.021240s | 0.020292s | byte equality observed |
| weighted_tail_variate_means.test | 9 | 0.001518s | 0.001476s | 0.001487s | byte equality observed |
| weighted_variance.test | 10 | 0.001632s | 0.001795s | 0.001507s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44560957980).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
