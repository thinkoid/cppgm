# libs/accumulators/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| count.test | RUN | 0.702921 | 1.987664 | 2.386374 | 0.003524 | 0.003419 | 0.003342 |
| covariance.test | RUN | 1.410595 | 5.042678 | 6.121129 | 0.003439 | 0.003394 | 0.003452 |
| droppable.test | RUN | 0.903789 | 2.670676 | 3.179623 | 0.003599 | 0.003452 | 0.003451 |
| error_of.test | RUN | 0.988128 | 2.646392 | 3.446155 | 0.002994 | 0.003099 | 0.003176 |
| extended_p_square.test | RUN | 1.044571 | 3.274436 | 3.617673 | 0.004837 | 0.005047 | 0.004720 |
| extended_p_square_quantile.test | RUN | 1.347010 | 5.072927 | 4.913945 | 0.009423 | 0.009453 | 0.008123 |
| external_accumulator.test | RUN | 0.920081 | 2.593953 | 3.131462 | 0.003290 | 0.003198 | 0.002934 |
| external_weights.test | RUN | 0.785676 | 1.983604 | 2.457807 | 0.003027 | 0.002839 | 0.003139 |
| kurtosis.test | RUN | 1.140978 | 3.209804 | 4.138803 | 0.004368 | 0.005004 | 0.004378 |
| max.test | RUN | 0.717441 | 1.965924 | 2.315415 | 0.003143 | 0.003291 | 0.003328 |
| mean.test | RUN | 0.946034 | 2.848432 | 3.345839 | 0.003231 | 0.003457 | 0.003357 |
| median.test | RUN | 1.318303 | 5.332695 | 5.050827 | 0.109734 | 0.133645 | 0.113312 |
| min.test | RUN | 0.754550 | 1.946239 | 2.343111 | 0.002943 | 0.003135 | 0.002748 |
| moment.test | RUN | 0.823018 | 2.264271 | 2.745671 | 0.003748 | 0.003299 | 0.002985 |
| p_square_cumul_dist.test | RUN | 1.085415 | 3.782848 | 3.834684 | 0.812362 | 1.038082 | 0.810112 |
| p_square_quantile.test | RUN | 0.949492 | 3.301795 | 3.273284 | 0.026518 | 0.027053 | 0.024583 |
| reference.test | RUN | 0.816141 | 2.237276 | 2.793042 | 0.003164 | 0.003202 | 0.003168 |
| rolling_count.test | RUN | 0.828075 | 2.356018 | 2.662108 | 0.003079 | 0.003376 | 0.003333 |
| rolling_sum.test | RUN | 0.831162 | 2.497525 | 2.852639 | 0.003332 | 0.003375 | 0.003294 |
| rolling_mean.test | RUN | 1.210140 | 4.485130 | 4.714803 | 0.003099 | 0.003334 | 0.003343 |
| rolling_variance.test | RUN | 1.353950 | 5.069743 | 5.299421 | 0.003406 | 0.003325 | 0.003366 |
| rolling_moment.test | RUN | 1.005333 | 3.034892 | 3.520728 | 0.003430 | 0.003401 | 0.003469 |
| skewness.test | RUN | 1.080036 | 3.064704 | 3.914641 | 0.004445 | 0.005012 | 0.004410 |
| sum.test | RUN | 0.767130 | 2.119971 | 2.551012 | 0.003435 | 0.003507 | 0.003231 |
| sum_kahan.test | RUN | 0.822937 | 2.249061 | 2.649108 | 0.017094 | 0.027944 | 0.017017 |
| tail.test | RUN | 0.865978 | 3.133697 | 3.086392 | 0.003169 | 0.003292 | 0.003089 |
| tail_mean.test | RUN | 1.242450 | 3.599735 | 4.513478 | 0.020111 | 0.026356 | 0.021426 |
| tail_quantile.test | RUN | 1.000247 | 3.044812 | 3.455172 | 0.024558 | 0.031876 | 0.022761 |
| variance.test | RUN | 0.984571 | 2.765901 | 3.369035 | 0.002976 | 0.003196 | 0.003282 |
| vector.test | RUN | 1.028410 | 3.254571 | 4.100024 | 0.002975 | 0.003272 | 0.003056 |
| weighted_covariance.test | RUN | 1.415594 | 5.111291 | 6.309873 | 0.003311 | 0.003261 | 0.003073 |
| weighted_extended_p_square.test | RUN | 0.964790 | 2.967282 | 3.204695 | 0.021434 | 0.024647 | 0.020044 |
| weighted_kurtosis.test | RUN | 1.099318 | 2.980809 | 4.007349 | 0.004024 | 0.005212 | 0.004132 |
| weighted_mean.test | RUN | 0.976509 | 2.746802 | 3.452219 | 0.002783 | 0.003165 | 0.002987 |
| weighted_median.test | RUN | 1.196367 | 3.747067 | 4.485055 | 1.064723 | 1.178704 | 1.099728 |
| weighted_moment.test | RUN | 0.774431 | 1.977941 | 2.605095 | 0.003076 | 0.003030 | 0.003089 |
| weighted_p_square_cumul_dist.test | RUN | 0.937209 | 3.167919 | 3.167849 | 0.108295 | 0.138943 | 0.110158 |
| weighted_p_square_quantile.test | RUN | 0.897740 | 2.984393 | 2.631962 | 0.025415 | 0.031186 | 0.025762 |
| weighted_skewness.test | RUN | 0.985198 | 2.859605 | 3.715886 | 0.004009 | 0.005456 | 0.004034 |
| weighted_sum.test | RUN | 0.652815 | 1.711261 | 2.047473 | 0.002481 | 0.002973 | 0.003035 |
| weighted_sum_kahan.test | RUN | 0.694983 | 1.895487 | 2.169203 | 0.009818 | 0.015166 | 0.010060 |
| weighted_variance.test | RUN | 1.178381 | 3.332508 | 4.401027 | 0.003289 | 0.003362 | 0.003365 |
| valarray.test | RUN | 1.067543 | 3.172140 | 4.090649 | 0.003222 | 0.003096 | 0.003131 |
| tail_variate_means.test | RUN | 1.356732 | 4.986229 | 5.682740 | 0.003108 | 0.003140 | 0.003151 |
| pot_quantile.test | RUN | 1.654400 | 5.535967 | 6.741352 | 0.011028 | 0.013213 | 0.010913 |
| weighted_pot_quantile.test | RUN | 1.653584 | 5.078595 | 6.852497 | 0.026124 | 0.022927 | 0.024672 |
| weighted_tail_mean.test | RUN | 1.471932 | 4.252005 | 5.854064 | 0.021490 | 0.027042 | 0.022641 |
| weighted_tail_quantile.test | RUN | 1.439132 | 3.872784 | 5.059358 | 0.020517 | 0.023106 | 0.019603 |
| weighted_tail_variate_means.test | RUN | 1.638202 | 4.705096 | 6.004652 | 0.002273 | 0.002248 | 0.002246 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 1.218× | 1.219×, 1.216× | 0.996× |
| clang | 1.000× | 0.992×, 1.008× | 0.969× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1363 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/43916760662).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| count.test | 1 | 0.002592s | 0.002570s | 0.002384s | byte equality observed |
| covariance.test | 1 | 0.002674s | 0.002534s | 0.002532s | byte equality observed |
| droppable.test | 1 | 0.002619s | 0.002524s | 0.002462s | byte equality observed |
| error_of.test | 1 | 0.002489s | 0.002371s | 0.002414s | byte equality observed |
| extended_p_square.test | 5 | 0.003566s | 0.003732s | 0.003287s | byte equality observed |
| extended_p_square_quantile.test | 3 | 0.006925s | 0.007917s | 0.006034s | byte equality observed |
| external_accumulator.test | 7 | 0.002137s | 0.002107s | 0.002094s | byte equality observed |
| external_weights.test | 7 | 0.002044s | 0.001994s | 0.002027s | byte equality observed |
| kurtosis.test | 5 | 0.003077s | 0.003769s | 0.002770s | byte equality observed |
| max.test | 8 | 0.002102s | 0.002059s | 0.002043s | byte equality observed |
| mean.test | 7 | 0.002152s | 0.002073s | 0.002089s | byte equality observed |
| median.test | 1 | 0.109039s | 0.143939s | 0.112028s | byte equality observed |
| min.test | 6 | 0.002106s | 0.002054s | 0.002060s | byte equality observed |
| moment.test | 5 | 0.002119s | 0.002068s | 0.002050s | byte equality observed |
| p_square_cumul_dist.test | 1 | 0.749318s | 0.987871s | 0.743932s | byte equality observed |
| p_square_quantile.test | 1 | 0.027000s | 0.025111s | 0.024127s | byte equality observed |
| pot_quantile.test | 2 | 0.010145s | 0.011455s | 0.009784s | byte equality observed |
| reference.test | 9 | 0.002142s | 0.002116s | 0.002085s | byte equality observed |
| rolling_count.test | 8 | 0.002154s | 0.002079s | 0.002058s | byte equality observed |
| rolling_mean.test | 8 | 0.002236s | 0.002189s | 0.002133s | byte equality observed |
| rolling_moment.test | 8 | 0.002228s | 0.002203s | 0.002132s | byte equality observed |
| rolling_sum.test | 7 | 0.002121s | 0.002090s | 0.002101s | byte equality observed |
| rolling_variance.test | 8 | 0.002219s | 0.002180s | 0.002192s | byte equality observed |
| skewness.test | 5 | 0.003008s | 0.003820s | 0.002973s | byte equality observed |
| sum.test | 9 | 0.002097s | 0.002065s | 0.002020s | byte equality observed |
| sum_kahan.test | 1 | 0.015631s | 0.026181s | 0.015443s | byte equality observed |
| tail.test | 7 | 0.002083s | 0.002051s | 0.002062s | byte equality observed |
| tail_mean.test | 1 | 0.019189s | 0.023349s | 0.020396s | byte equality observed |
| tail_quantile.test | 1 | 0.022542s | 0.027017s | 0.021929s | byte equality observed |
| tail_variate_means.test | 5 | 0.002084s | 0.001985s | 0.001986s | byte equality observed |
| valarray.test | 8 | 0.001990s | 0.002018s | 0.001965s | byte equality observed |
| variance.test | 8 | 0.002129s | 0.002092s | 0.002126s | byte equality observed |
| vector.test | 8 | 0.002021s | 0.001975s | 0.001976s | byte equality observed |
| weighted_covariance.test | 5 | 0.002030s | 0.001947s | 0.001999s | byte equality observed |
| weighted_extended_p_square.test | 1 | 0.019853s | 0.023397s | 0.020736s | byte equality observed |
| weighted_kurtosis.test | 5 | 0.003202s | 0.004241s | 0.002943s | byte equality observed |
| weighted_mean.test | 8 | 0.002017s | 0.001924s | 0.001939s | byte equality observed |
| weighted_median.test | 1 | 0.988566s | 1.103349s | 1.003449s | byte equality observed |
| weighted_moment.test | 9 | 0.001979s | 0.001900s | 0.001932s | byte equality observed |
| weighted_p_square_cumul_dist.test | 1 | 0.118917s | 0.175444s | 0.119638s | byte equality observed |
| weighted_p_square_quantile.test | 1 | 0.026908s | 0.032992s | 0.026166s | byte equality observed |
| weighted_pot_quantile.test | 1 | 0.025050s | 0.026975s | 0.024175s | byte equality observed |
| weighted_skewness.test | 5 | 0.003255s | 0.004290s | 0.003265s | byte equality observed |
| weighted_sum.test | 8 | 0.002012s | 0.001915s | 0.002031s | byte equality observed |
| weighted_sum_kahan.test | 2 | 0.008812s | 0.013924s | 0.008791s | byte equality observed |
| weighted_tail_mean.test | 1 | 0.020388s | 0.022935s | 0.020354s | byte equality observed |
| weighted_tail_quantile.test | 1 | 0.022111s | 0.025979s | 0.022156s | byte equality observed |
| weighted_tail_variate_means.test | 6 | 0.002068s | 0.002059s | 0.002009s | byte equality observed |
| weighted_variance.test | 5 | 0.002193s | 0.002329s | 0.002150s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/43916760662).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
