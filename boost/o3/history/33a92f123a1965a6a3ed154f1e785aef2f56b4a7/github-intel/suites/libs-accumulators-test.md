# libs/accumulators/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| count.test | RUN | 0.576133 | 1.681562 | 1.874993 | 0.002268 | 0.002430 | 0.002097 |
| covariance.test | RUN | 1.116683 | 4.449698 | 4.885816 | 0.002231 | 0.002108 | 0.002171 |
| droppable.test | RUN | 0.718459 | 2.306382 | 2.552001 | 0.002115 | 0.002152 | 0.002219 |
| error_of.test | RUN | 0.788782 | 2.319497 | 2.816851 | 0.001980 | 0.002048 | 0.001989 |
| extended_p_square.test | RUN | 0.851988 | 2.890745 | 2.888138 | 0.003511 | 0.003753 | 0.003210 |
| extended_p_square_quantile.test | RUN | 1.115849 | 4.521653 | 4.130614 | 0.006806 | 0.007425 | 0.006429 |
| external_accumulator.test | RUN | 0.708071 | 2.211792 | 2.516562 | 0.002138 | 0.002010 | 0.002031 |
| external_weights.test | RUN | 0.618432 | 1.655672 | 1.977307 | 0.001980 | 0.002202 | 0.001999 |
| kurtosis.test | RUN | 0.915628 | 2.767948 | 3.400511 | 0.002898 | 0.003519 | 0.003079 |
| max.test | RUN | 0.581526 | 1.687309 | 1.833583 | 0.002126 | 0.002034 | 0.002100 |
| mean.test | RUN | 0.777028 | 2.345648 | 2.707633 | 0.002027 | 0.002278 | 0.002256 |
| median.test | RUN | 1.041335 | 4.758113 | 4.198928 | 0.102682 | 0.127820 | 0.101696 |
| min.test | RUN | 0.588521 | 1.675650 | 1.811596 | 0.001835 | 0.002226 | 0.002103 |
| moment.test | RUN | 0.657445 | 1.924484 | 2.271017 | 0.002009 | 0.002089 | 0.001832 |
| p_square_cumul_dist.test | RUN | 0.878099 | 3.316681 | 3.089560 | 0.727499 | 0.912516 | 0.712415 |
| p_square_quantile.test | RUN | 0.797610 | 2.932700 | 2.626205 | 0.021363 | 0.024137 | 0.020198 |
| reference.test | RUN | 0.649247 | 1.836173 | 2.207945 | 0.002158 | 0.002220 | 0.002142 |
| rolling_count.test | RUN | 0.671205 | 2.113133 | 2.237673 | 0.002130 | 0.002177 | 0.002064 |
| rolling_sum.test | RUN | 0.650272 | 2.028308 | 2.123593 | 0.002035 | 0.002108 | 0.002204 |
| rolling_mean.test | RUN | 1.003156 | 3.890571 | 3.779463 | 0.002193 | 0.002450 | 0.002286 |
| rolling_variance.test | RUN | 1.137069 | 4.532643 | 4.310624 | 0.002286 | 0.002267 | 0.002250 |
| rolling_moment.test | RUN | 0.822293 | 2.598952 | 2.807465 | 0.002068 | 0.002396 | 0.002249 |
| skewness.test | RUN | 0.891154 | 2.650904 | 3.160442 | 0.002903 | 0.004034 | 0.002974 |
| sum.test | RUN | 0.605528 | 1.818678 | 2.093265 | 0.002214 | 0.002145 | 0.002070 |
| sum_kahan.test | RUN | 0.666604 | 1.937440 | 2.192585 | 0.010486 | 0.018742 | 0.011340 |
| tail.test | RUN | 0.711336 | 2.702365 | 2.479956 | 0.001958 | 0.002325 | 0.002065 |
| tail_mean.test | RUN | 0.993374 | 3.131581 | 3.616546 | 0.017499 | 0.021539 | 0.019560 |
| tail_quantile.test | RUN | 0.810055 | 2.584668 | 2.780433 | 0.021309 | 0.026129 | 0.020958 |
| variance.test | RUN | 0.783584 | 2.266559 | 2.779447 | 0.002076 | 0.002288 | 0.002153 |
| vector.test | RUN | 0.840211 | 2.828909 | 3.368829 | 0.001949 | 0.002120 | 0.002022 |
| weighted_covariance.test | RUN | 1.120029 | 4.432713 | 4.999195 | 0.001760 | 0.001979 | 0.002040 |
| weighted_extended_p_square.test | RUN | 0.773812 | 2.592064 | 2.562660 | 0.018406 | 0.020959 | 0.017246 |
| weighted_kurtosis.test | RUN | 0.903228 | 2.547543 | 3.200140 | 0.002752 | 0.004241 | 0.003027 |
| weighted_mean.test | RUN | 0.755607 | 2.288172 | 2.742713 | 0.002075 | 0.002169 | 0.002203 |
| weighted_median.test | RUN | 0.981720 | 3.108247 | 3.486858 | 0.975192 | 1.053801 | 0.974123 |
| weighted_moment.test | RUN | 0.605346 | 1.722589 | 2.023404 | 0.001931 | 0.001940 | 0.002225 |
| weighted_p_square_cumul_dist.test | RUN | 0.756042 | 2.484448 | 2.535812 | 0.103711 | 0.142877 | 0.095898 |
| weighted_p_square_quantile.test | RUN | 0.713084 | 2.580711 | 2.055471 | 0.022001 | 0.026974 | 0.022372 |
| weighted_skewness.test | RUN | 0.862158 | 2.493869 | 3.014184 | 0.002694 | 0.003991 | 0.002962 |
| weighted_sum.test | RUN | 0.522008 | 1.441697 | 1.604609 | 0.002035 | 0.001956 | 0.002017 |
| weighted_sum_kahan.test | RUN | 0.498652 | 1.534603 | 1.766582 | 0.006197 | 0.010207 | 0.006772 |
| weighted_variance.test | RUN | 0.899068 | 2.795081 | 3.448506 | 0.002214 | 0.002124 | 0.002305 |
| valarray.test | RUN | 0.859746 | 2.694589 | 3.194705 | 0.002156 | 0.002124 | 0.002102 |
| tail_variate_means.test | RUN | 1.139528 | 4.292562 | 4.516146 | 0.002157 | 0.002047 | 0.002162 |
| pot_quantile.test | RUN | 1.378919 | 4.796777 | 5.389688 | 0.008980 | 0.010661 | 0.008552 |
| weighted_pot_quantile.test | RUN | 1.365453 | 4.471842 | 5.265975 | 0.022066 | 0.018694 | 0.019845 |
| weighted_tail_mean.test | RUN | 1.219643 | 3.677196 | 4.433179 | 0.019749 | 0.021329 | 0.015589 |
| weighted_tail_quantile.test | RUN | 1.156416 | 3.106614 | 4.028243 | 0.015703 | 0.017893 | 0.015497 |
| weighted_tail_variate_means.test | RUN | 1.305665 | 3.924553 | 4.728901 | 0.001475 | 0.001474 | 0.001499 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 1.173× | 1.167×, 1.179× | 0.995× |
| clang | 0.986× | 0.982×, 0.990× | 0.999× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1363 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/43801643681).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| count.test | 1 | 0.002010s | 0.002031s | 0.001831s | byte equality observed |
| covariance.test | 1 | 0.002029s | 0.001865s | 0.001945s | byte equality observed |
| droppable.test | 1 | 0.002025s | 0.001950s | 0.001919s | byte equality observed |
| error_of.test | 1 | 0.001822s | 0.001874s | 0.001597s | byte equality observed |
| extended_p_square.test | 5 | 0.002870s | 0.002931s | 0.002729s | byte equality observed |
| extended_p_square_quantile.test | 3 | 0.005849s | 0.006592s | 0.005666s | byte equality observed |
| external_accumulator.test | 6 | 0.001572s | 0.001575s | 0.001504s | byte equality observed |
| external_weights.test | 7 | 0.001520s | 0.001499s | 0.001466s | byte equality observed |
| kurtosis.test | 6 | 0.002274s | 0.003068s | 0.002286s | byte equality observed |
| max.test | 6 | 0.001564s | 0.001540s | 0.001504s | byte equality observed |
| mean.test | 8 | 0.001577s | 0.001535s | 0.001530s | byte equality observed |
| median.test | 1 | 0.099538s | 0.128022s | 0.097278s | byte equality observed |
| min.test | 8 | 0.001546s | 0.001513s | 0.001492s | byte equality observed |
| moment.test | 9 | 0.001546s | 0.001498s | 0.001487s | byte equality observed |
| p_square_cumul_dist.test | 1 | 0.636125s | 0.815437s | 0.618129s | byte equality observed |
| p_square_quantile.test | 1 | 0.021511s | 0.022740s | 0.020606s | byte equality observed |
| pot_quantile.test | 3 | 0.008332s | 0.009608s | 0.008103s | byte equality observed |
| reference.test | 10 | 0.001517s | 0.001487s | 0.001457s | byte equality observed |
| rolling_count.test | 10 | 0.001562s | 0.001533s | 0.001510s | byte equality observed |
| rolling_mean.test | 10 | 0.001641s | 0.001591s | 0.001576s | byte equality observed |
| rolling_moment.test | 10 | 0.001609s | 0.001533s | 0.001546s | byte equality observed |
| rolling_sum.test | 10 | 0.001568s | 0.001505s | 0.001505s | byte equality observed |
| rolling_variance.test | 10 | 0.001667s | 0.001588s | 0.001588s | byte equality observed |
| skewness.test | 7 | 0.002264s | 0.003071s | 0.002305s | byte equality observed |
| sum.test | 10 | 0.001554s | 0.001492s | 0.001486s | byte equality observed |
| sum_kahan.test | 2 | 0.010446s | 0.017631s | 0.010484s | byte equality observed |
| tail.test | 10 | 0.001533s | 0.001471s | 0.001484s | byte equality observed |
| tail_mean.test | 2 | 0.017587s | 0.018954s | 0.018164s | byte equality observed |
| tail_quantile.test | 1 | 0.020324s | 0.022745s | 0.019489s | byte equality observed |
| tail_variate_means.test | 8 | 0.001605s | 0.001494s | 0.001535s | byte equality observed |
| valarray.test | 10 | 0.001533s | 0.001494s | 0.001472s | byte equality observed |
| variance.test | 9 | 0.001564s | 0.001533s | 0.001497s | byte equality observed |
| vector.test | 10 | 0.001487s | 0.001494s | 0.001440s | byte equality observed |
| weighted_covariance.test | 6 | 0.001524s | 0.001477s | 0.001469s | byte equality observed |
| weighted_extended_p_square.test | 1 | 0.018250s | 0.018675s | 0.016463s | byte equality observed |
| weighted_kurtosis.test | 6 | 0.002237s | 0.003547s | 0.002373s | byte equality observed |
| weighted_mean.test | 10 | 0.001488s | 0.001444s | 0.001424s | byte equality observed |
| weighted_median.test | 1 | 0.854996s | 0.926624s | 0.858515s | byte equality observed |
| weighted_moment.test | 10 | 0.001452s | 0.001416s | 0.001399s | byte equality observed |
| weighted_p_square_cumul_dist.test | 1 | 0.101505s | 0.140339s | 0.103383s | byte equality observed |
| weighted_p_square_quantile.test | 1 | 0.021512s | 0.026469s | 0.021760s | byte equality observed |
| weighted_pot_quantile.test | 1 | 0.021528s | 0.023700s | 0.020941s | byte equality observed |
| weighted_skewness.test | 3 | 0.002279s | 0.003583s | 0.002342s | byte equality observed |
| weighted_sum.test | 10 | 0.001444s | 0.001439s | 0.001389s | byte equality observed |
| weighted_sum_kahan.test | 3 | 0.005780s | 0.009325s | 0.005648s | byte equality observed |
| weighted_tail_mean.test | 1 | 0.018557s | 0.019835s | 0.018108s | byte equality observed |
| weighted_tail_quantile.test | 1 | 0.019338s | 0.023166s | 0.018701s | byte equality observed |
| weighted_tail_variate_means.test | 8 | 0.001507s | 0.001519s | 0.001433s | byte equality observed |
| weighted_variance.test | 10 | 0.001617s | 0.001810s | 0.001578s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/43801643681).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
