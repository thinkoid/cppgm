# libs/accumulators/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| count.test | RUN | 0.761826 | 2.019528 | 2.431947 | 0.003529 | 0.003346 | 0.003439 |
| covariance.test | RUN | 1.501734 | 5.365746 | 6.268288 | 0.003518 | 0.003596 | 0.003520 |
| droppable.test | RUN | 0.958600 | 2.788451 | 3.324895 | 0.003469 | 0.003477 | 0.003401 |
| error_of.test | RUN | 1.048239 | 2.832378 | 3.632308 | 0.003160 | 0.003170 | 0.003216 |
| extended_p_square.test | RUN | 1.078105 | 3.527010 | 3.689834 | 0.004982 | 0.005349 | 0.004658 |
| extended_p_square_quantile.test | RUN | 1.430157 | 5.484338 | 5.255717 | 0.008584 | 0.009517 | 0.007772 |
| external_accumulator.test | RUN | 0.965512 | 2.644735 | 3.222210 | 0.003635 | 0.003542 | 0.003206 |
| external_weights.test | RUN | 0.837062 | 2.079928 | 2.567272 | 0.003150 | 0.002530 | 0.002818 |
| kurtosis.test | RUN | 1.230761 | 3.469821 | 4.298495 | 0.007455 | 0.005314 | 0.004309 |
| max.test | RUN | 0.773995 | 1.956287 | 2.377041 | 0.003388 | 0.003406 | 0.003313 |
| mean.test | RUN | 1.011694 | 2.964480 | 3.451053 | 0.003474 | 0.003414 | 0.003445 |
| median.test | RUN | 1.416596 | 5.724141 | 5.389801 | 0.121740 | 0.133584 | 0.110274 |
| min.test | RUN | 0.772738 | 2.058133 | 2.321449 | 0.003165 | 0.003751 | 0.003210 |
| moment.test | RUN | 0.870408 | 2.268091 | 2.891580 | 0.003363 | 0.003626 | 0.003405 |
| p_square_cumul_dist.test | RUN | 1.140861 | 4.013300 | 4.004895 | 0.986640 | 1.036422 | 0.810174 |
| p_square_quantile.test | RUN | 1.007817 | 3.542400 | 3.417569 | 0.031260 | 0.027252 | 0.022970 |
| reference.test | RUN | 0.901316 | 2.326901 | 2.939519 | 0.003243 | 0.003170 | 0.003254 |
| rolling_count.test | RUN | 0.881648 | 2.451378 | 2.947363 | 0.003338 | 0.003469 | 0.003550 |
| rolling_sum.test | RUN | 0.881229 | 2.540026 | 2.831577 | 0.003487 | 0.003497 | 0.003390 |
| rolling_mean.test | RUN | 1.283632 | 4.620843 | 4.926207 | 0.003528 | 0.003617 | 0.003477 |
| rolling_variance.test | RUN | 1.453053 | 5.331505 | 5.590261 | 0.003293 | 0.003475 | 0.003550 |
| rolling_moment.test | RUN | 1.111004 | 3.090439 | 3.684123 | 0.003661 | 0.003599 | 0.003229 |
| skewness.test | RUN | 1.162093 | 3.171041 | 4.103704 | 0.006425 | 0.005068 | 0.004424 |
| sum.test | RUN | 0.806491 | 2.227721 | 2.610243 | 0.003383 | 0.003587 | 0.003318 |
| sum_kahan.test | RUN | 0.885331 | 2.394919 | 2.833328 | 0.017526 | 0.027900 | 0.017092 |
| tail.test | RUN | 0.958470 | 3.228873 | 3.105449 | 0.003290 | 0.003355 | 0.003241 |
| tail_mean.test | RUN | 1.328894 | 3.714517 | 4.575456 | 0.021124 | 0.025893 | 0.021675 |
| tail_quantile.test | RUN | 1.079594 | 3.121137 | 3.534805 | 0.025151 | 0.029936 | 0.023833 |
| variance.test | RUN | 1.022647 | 2.778287 | 3.452884 | 0.003441 | 0.003465 | 0.003389 |
| vector.test | RUN | 1.111078 | 3.284972 | 4.354496 | 0.003291 | 0.003279 | 0.003218 |
| weighted_covariance.test | RUN | 1.479106 | 5.302062 | 6.513012 | 0.003021 | 0.003423 | 0.003131 |
| weighted_extended_p_square.test | RUN | 1.008306 | 3.107678 | 3.288491 | 0.024187 | 0.024759 | 0.019789 |
| weighted_kurtosis.test | RUN | 1.207207 | 3.068694 | 4.125006 | 0.006262 | 0.005673 | 0.004349 |
| weighted_mean.test | RUN | 1.029672 | 2.803317 | 3.585636 | 0.002959 | 0.003229 | 0.002727 |
| weighted_median.test | RUN | 1.297590 | 3.818228 | 4.703153 | 1.146469 | 1.192823 | 1.095149 |
| weighted_moment.test | RUN | 0.823582 | 2.000137 | 2.725182 | 0.003231 | 0.003357 | 0.003097 |
| weighted_p_square_cumul_dist.test | RUN | 1.019375 | 3.156710 | 3.316177 | 0.155795 | 0.179116 | 0.109363 |
| weighted_p_square_quantile.test | RUN | 0.933820 | 3.086098 | 2.737392 | 0.035559 | 0.031249 | 0.026381 |
| weighted_skewness.test | RUN | 1.162339 | 2.972182 | 3.943279 | 0.006311 | 0.005607 | 0.004242 |
| weighted_sum.test | RUN | 0.702341 | 1.677281 | 2.091612 | 0.003237 | 0.003107 | 0.003159 |
| weighted_sum_kahan.test | RUN | 0.680205 | 1.845640 | 2.238479 | 0.010068 | 0.015512 | 0.010000 |
| weighted_variance.test | RUN | 1.246484 | 3.424738 | 4.528853 | 0.003904 | 0.003693 | 0.003448 |
| valarray.test | RUN | 1.178123 | 3.258531 | 4.162230 | 0.003252 | 0.003206 | 0.003087 |
| tail_variate_means.test | RUN | 1.503545 | 5.238419 | 5.851686 | 0.003350 | 0.003161 | 0.003075 |
| pot_quantile.test | RUN | 1.820514 | 5.712300 | 6.919982 | 0.017167 | 0.013024 | 0.010808 |
| weighted_pot_quantile.test | RUN | 1.814418 | 5.365395 | 6.980435 | 0.030824 | 0.023023 | 0.025769 |
| weighted_tail_mean.test | RUN | 1.649618 | 4.454634 | 5.849594 | 0.023215 | 0.027662 | 0.023387 |
| weighted_tail_quantile.test | RUN | 1.603687 | 4.051495 | 5.240498 | 0.023247 | 0.022559 | 0.019741 |
| weighted_tail_variate_means.test | RUN | 1.845609 | 5.113773 | 6.097410 | 0.002538 | 0.002340 | 0.002333 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 1.088× | 1.099×, 1.076× | 1.002× |
| clang | 0.890× | 0.892×, 0.889× | 0.995× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1362 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43628287753).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| count.test | 1 | 0.002616s | 0.002491s | 0.002432s | byte equality observed |
| covariance.test | 1 | 0.002687s | 0.002527s | 0.002570s | byte equality observed |
| droppable.test | 1 | 0.002629s | 0.002417s | 0.002400s | byte equality observed |
| error_of.test | 1 | 0.002442s | 0.002409s | 0.002445s | byte equality observed |
| extended_p_square.test | 4 | 0.003680s | 0.003722s | 0.003412s | byte equality observed |
| extended_p_square_quantile.test | 2 | 0.007329s | 0.008008s | 0.006809s | byte equality observed |
| external_accumulator.test | 4 | 0.002183s | 0.002107s | 0.002096s | byte equality observed |
| external_weights.test | 6 | 0.002059s | 0.002004s | 0.001950s | byte equality observed |
| kurtosis.test | 4 | 0.004835s | 0.003795s | 0.002993s | byte equality observed |
| max.test | 5 | 0.002108s | 0.002055s | 0.002062s | byte equality observed |
| mean.test | 5 | 0.002135s | 0.002102s | 0.002109s | byte equality observed |
| median.test | 1 | 0.121877s | 0.144637s | 0.109231s | byte equality observed |
| min.test | 6 | 0.002108s | 0.002023s | 0.002038s | byte equality observed |
| moment.test | 6 | 0.002103s | 0.002064s | 0.002036s | byte equality observed |
| p_square_cumul_dist.test | 1 | 0.869589s | 1.034424s | 0.754319s | byte equality observed |
| p_square_quantile.test | 1 | 0.030119s | 0.026943s | 0.024520s | byte equality observed |
| pot_quantile.test | 2 | 0.015151s | 0.011455s | 0.009798s | byte equality observed |
| reference.test | 8 | 0.002145s | 0.002117s | 0.002074s | byte equality observed |
| rolling_count.test | 9 | 0.002126s | 0.002059s | 0.002061s | byte equality observed |
| rolling_mean.test | 8 | 0.002217s | 0.002134s | 0.002136s | byte equality observed |
| rolling_moment.test | 8 | 0.002209s | 0.002126s | 0.002131s | byte equality observed |
| rolling_sum.test | 5 | 0.002132s | 0.002081s | 0.002052s | byte equality observed |
| rolling_variance.test | 6 | 0.002203s | 0.002165s | 0.002130s | byte equality observed |
| skewness.test | 4 | 0.004793s | 0.003751s | 0.003147s | byte equality observed |
| sum.test | 6 | 0.002100s | 0.002025s | 0.002014s | byte equality observed |
| sum_kahan.test | 1 | 0.015680s | 0.026440s | 0.015664s | byte equality observed |
| tail.test | 6 | 0.002119s | 0.001943s | 0.002001s | byte equality observed |
| tail_mean.test | 1 | 0.019957s | 0.022130s | 0.020946s | byte equality observed |
| tail_quantile.test | 1 | 0.024210s | 0.028462s | 0.022827s | byte equality observed |
| tail_variate_means.test | 8 | 0.002059s | 0.001927s | 0.001966s | byte equality observed |
| valarray.test | 8 | 0.002016s | 0.001940s | 0.001958s | byte equality observed |
| variance.test | 8 | 0.002127s | 0.002081s | 0.002021s | byte equality observed |
| vector.test | 7 | 0.002039s | 0.001991s | 0.001942s | byte equality observed |
| weighted_covariance.test | 9 | 0.002018s | 0.001962s | 0.001945s | byte equality observed |
| weighted_extended_p_square.test | 1 | 0.024462s | 0.023266s | 0.019507s | byte equality observed |
| weighted_kurtosis.test | 4 | 0.005227s | 0.004269s | 0.003019s | byte equality observed |
| weighted_mean.test | 8 | 0.001996s | 0.001945s | 0.001901s | byte equality observed |
| weighted_median.test | 1 | 1.080470s | 1.129378s | 1.009938s | byte equality observed |
| weighted_moment.test | 8 | 0.001982s | 0.001949s | 0.001866s | byte equality observed |
| weighted_p_square_cumul_dist.test | 1 | 0.148303s | 0.139188s | 0.117211s | byte equality observed |
| weighted_p_square_quantile.test | 1 | 0.036150s | 0.033736s | 0.025410s | byte equality observed |
| weighted_pot_quantile.test | 1 | 0.030242s | 0.027280s | 0.023184s | byte equality observed |
| weighted_skewness.test | 4 | 0.005421s | 0.004343s | 0.003031s | byte equality observed |
| weighted_sum.test | 6 | 0.002007s | 0.001959s | 0.001862s | byte equality observed |
| weighted_sum_kahan.test | 2 | 0.008837s | 0.014128s | 0.008620s | byte equality observed |
| weighted_tail_mean.test | 1 | 0.021706s | 0.024510s | 0.021392s | byte equality observed |
| weighted_tail_quantile.test | 1 | 0.025110s | 0.027803s | 0.022751s | byte equality observed |
| weighted_tail_variate_means.test | 7 | 0.002108s | 0.001946s | 0.001944s | byte equality observed |
| weighted_variance.test | 7 | 0.002538s | 0.002252s | 0.002137s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43628287753).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
