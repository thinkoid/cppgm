# libs/accumulators/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| count.test | RUN | 0.577655 | 1.719222 | 1.874519 | 0.002446 | 0.002402 | 0.002039 |
| covariance.test | RUN | 1.122867 | 4.517121 | 5.059144 | 0.002242 | 0.002469 | 0.002308 |
| droppable.test | RUN | 0.738551 | 2.369038 | 2.586792 | 0.002154 | 0.002214 | 0.002230 |
| error_of.test | RUN | 0.786472 | 2.295115 | 2.786690 | 0.002094 | 0.002190 | 0.001934 |
| extended_p_square.test | RUN | 0.828730 | 2.962321 | 2.914068 | 0.003684 | 0.003390 | 0.003502 |
| extended_p_square_quantile.test | RUN | 1.082842 | 4.679021 | 4.236516 | 0.006708 | 0.007583 | 0.006401 |
| external_accumulator.test | RUN | 0.695541 | 2.253366 | 2.581398 | 0.002133 | 0.002242 | 0.002184 |
| external_weights.test | RUN | 0.613255 | 1.694059 | 1.980158 | 0.001984 | 0.002205 | 0.002224 |
| kurtosis.test | RUN | 0.902276 | 2.824983 | 3.426570 | 0.002853 | 0.003847 | 0.003037 |
| max.test | RUN | 0.564516 | 1.678591 | 1.872923 | 0.002165 | 0.002440 | 0.002395 |
| mean.test | RUN | 0.757170 | 2.421394 | 2.798350 | 0.002305 | 0.002431 | 0.002214 |
| median.test | RUN | 1.086821 | 4.838310 | 4.252874 | 0.102338 | 0.115873 | 0.105449 |
| min.test | RUN | 0.574407 | 1.669061 | 1.874620 | 0.002307 | 0.002290 | 0.002334 |
| moment.test | RUN | 0.650593 | 1.944054 | 2.205641 | 0.002186 | 0.002407 | 0.002286 |
| p_square_cumul_dist.test | RUN | 0.883807 | 3.386780 | 3.168284 | 0.723582 | 0.903123 | 0.705152 |
| p_square_quantile.test | RUN | 0.782894 | 2.997082 | 2.710568 | 0.023386 | 0.024304 | 0.021609 |
| reference.test | RUN | 0.653170 | 1.906437 | 2.298278 | 0.001890 | 0.002170 | 0.002078 |
| rolling_count.test | RUN | 0.696795 | 2.172337 | 2.148719 | 0.001862 | 0.002436 | 0.002076 |
| rolling_sum.test | RUN | 0.647164 | 2.022966 | 2.328734 | 0.002125 | 0.002369 | 0.002197 |
| rolling_mean.test | RUN | 0.989791 | 3.915693 | 3.820801 | 0.002264 | 0.002534 | 0.002380 |
| rolling_variance.test | RUN | 1.126079 | 4.537069 | 4.346577 | 0.002270 | 0.002377 | 0.002574 |
| rolling_moment.test | RUN | 0.820124 | 2.624660 | 2.875228 | 0.002420 | 0.002306 | 0.002373 |
| skewness.test | RUN | 0.889251 | 2.696212 | 3.184134 | 0.003144 | 0.003976 | 0.003128 |
| sum.test | RUN | 0.606906 | 1.854246 | 2.053659 | 0.002430 | 0.002184 | 0.002222 |
| sum_kahan.test | RUN | 0.661010 | 1.951523 | 2.208507 | 0.012899 | 0.018450 | 0.011455 |
| tail.test | RUN | 0.742692 | 2.745632 | 2.500250 | 0.002231 | 0.002208 | 0.002370 |
| tail_mean.test | RUN | 0.997754 | 3.237974 | 3.654229 | 0.019099 | 0.021475 | 0.019321 |
| tail_quantile.test | RUN | 0.808951 | 2.546673 | 2.818955 | 0.020969 | 0.025266 | 0.020234 |
| variance.test | RUN | 0.796292 | 2.344005 | 2.787242 | 0.002267 | 0.002389 | 0.002145 |
| vector.test | RUN | 0.849341 | 2.889436 | 3.382198 | 0.002114 | 0.002252 | 0.002080 |
| weighted_covariance.test | RUN | 1.150862 | 4.538978 | 4.988028 | 0.002195 | 0.002194 | 0.002223 |
| weighted_extended_p_square.test | RUN | 0.783780 | 2.624675 | 2.612480 | 0.018285 | 0.021251 | 0.017991 |
| weighted_kurtosis.test | RUN | 0.908615 | 2.648143 | 3.158195 | 0.002803 | 0.004174 | 0.003162 |
| weighted_mean.test | RUN | 0.772471 | 2.336395 | 2.768415 | 0.002039 | 0.001875 | 0.002115 |
| weighted_median.test | RUN | 1.004040 | 3.144398 | 3.581091 | 0.975297 | 1.058420 | 0.975548 |
| weighted_moment.test | RUN | 0.632728 | 1.742358 | 2.081968 | 0.002088 | 0.002083 | 0.002225 |
| weighted_p_square_cumul_dist.test | RUN | 0.769793 | 2.685046 | 2.551045 | 0.103909 | 0.115391 | 0.101317 |
| weighted_p_square_quantile.test | RUN | 0.720441 | 2.642589 | 2.202710 | 0.022805 | 0.026239 | 0.021629 |
| weighted_skewness.test | RUN | 0.856945 | 2.246196 | 3.013462 | 0.002813 | 0.004180 | 0.003094 |
| weighted_sum.test | RUN | 0.458464 | 1.473656 | 1.644515 | 0.001797 | 0.002215 | 0.002068 |
| weighted_sum_kahan.test | RUN | 0.558864 | 1.559947 | 1.759559 | 0.006181 | 0.010206 | 0.006601 |
| weighted_variance.test | RUN | 0.944571 | 2.875374 | 3.503209 | 0.002481 | 0.002536 | 0.002371 |
| valarray.test | RUN | 0.864280 | 2.717659 | 3.246375 | 0.002110 | 0.002005 | 0.002091 |
| tail_variate_means.test | RUN | 1.160073 | 4.383690 | 4.568184 | 0.002213 | 0.002260 | 0.002131 |
| pot_quantile.test | RUN | 1.372643 | 4.841583 | 5.371588 | 0.009112 | 0.010371 | 0.009167 |
| weighted_pot_quantile.test | RUN | 1.363735 | 4.501501 | 5.438484 | 0.022851 | 0.026683 | 0.022582 |
| weighted_tail_mean.test | RUN | 1.192197 | 3.742348 | 4.625161 | 0.019296 | 0.021730 | 0.019907 |
| weighted_tail_quantile.test | RUN | 1.172005 | 3.241636 | 4.113411 | 0.015905 | 0.018108 | 0.015502 |
| weighted_tail_variate_means.test | RUN | 1.333761 | 4.008330 | 4.673278 | 0.001635 | 0.001503 | 0.001521 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 1.167× | 1.153×, 1.182× | 0.985× |
| clang | 0.990× | 0.980×, 1.000× | 0.992× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1364 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/43967972441).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| count.test | 1 | 0.001878s | 0.001936s | 0.001962s | byte equality observed |
| covariance.test | 1 | 0.001968s | 0.001891s | 0.001872s | byte equality observed |
| droppable.test | 1 | 0.002046s | 0.001951s | 0.001723s | byte equality observed |
| error_of.test | 1 | 0.001867s | 0.001973s | 0.001845s | byte equality observed |
| extended_p_square.test | 5 | 0.002866s | 0.003030s | 0.002741s | byte equality observed |
| extended_p_square_quantile.test | 3 | 0.006026s | 0.006658s | 0.005801s | byte equality observed |
| external_accumulator.test | 8 | 0.001599s | 0.001542s | 0.001514s | byte equality observed |
| external_weights.test | 8 | 0.001520s | 0.001505s | 0.001476s | byte equality observed |
| kurtosis.test | 5 | 0.002289s | 0.003111s | 0.002276s | byte equality observed |
| max.test | 7 | 0.001567s | 0.001528s | 0.001509s | byte equality observed |
| mean.test | 9 | 0.001595s | 0.001554s | 0.001503s | byte equality observed |
| median.test | 1 | 0.100904s | 0.115312s | 0.096002s | byte equality observed |
| min.test | 7 | 0.001586s | 0.001526s | 0.001505s | byte equality observed |
| moment.test | 7 | 0.001574s | 0.001539s | 0.001517s | byte equality observed |
| p_square_cumul_dist.test | 1 | 0.629370s | 0.791930s | 0.614108s | byte equality observed |
| p_square_quantile.test | 1 | 0.021623s | 0.023955s | 0.020640s | byte equality observed |
| pot_quantile.test | 2 | 0.008390s | 0.009540s | 0.008137s | byte equality observed |
| reference.test | 8 | 0.001561s | 0.001510s | 0.001470s | byte equality observed |
| rolling_count.test | 10 | 0.001588s | 0.001532s | 0.001515s | byte equality observed |
| rolling_mean.test | 10 | 0.001647s | 0.001619s | 0.001588s | byte equality observed |
| rolling_moment.test | 10 | 0.001613s | 0.001591s | 0.001554s | byte equality observed |
| rolling_sum.test | 10 | 0.001582s | 0.001541s | 0.001524s | byte equality observed |
| rolling_variance.test | 9 | 0.001665s | 0.001631s | 0.001572s | byte equality observed |
| skewness.test | 6 | 0.002305s | 0.003078s | 0.002178s | byte equality observed |
| sum.test | 9 | 0.001559s | 0.001538s | 0.001484s | byte equality observed |
| sum_kahan.test | 2 | 0.010550s | 0.017433s | 0.010378s | byte equality observed |
| tail.test | 8 | 0.001538s | 0.001510s | 0.001467s | byte equality observed |
| tail_mean.test | 1 | 0.017813s | 0.018402s | 0.018075s | byte equality observed |
| tail_quantile.test | 1 | 0.020738s | 0.022881s | 0.019857s | byte equality observed |
| tail_variate_means.test | 8 | 0.001589s | 0.001502s | 0.001553s | byte equality observed |
| valarray.test | 10 | 0.001519s | 0.001470s | 0.001468s | byte equality observed |
| variance.test | 10 | 0.001586s | 0.001545s | 0.001530s | byte equality observed |
| vector.test | 7 | 0.001530s | 0.001502s | 0.001471s | byte equality observed |
| weighted_covariance.test | 10 | 0.001521s | 0.001493s | 0.001453s | byte equality observed |
| weighted_extended_p_square.test | 1 | 0.017291s | 0.021119s | 0.016667s | byte equality observed |
| weighted_kurtosis.test | 5 | 0.002369s | 0.003570s | 0.002357s | byte equality observed |
| weighted_mean.test | 10 | 0.001497s | 0.001460s | 0.001409s | byte equality observed |
| weighted_median.test | 1 | 0.858159s | 0.930806s | 0.861084s | byte equality observed |
| weighted_moment.test | 10 | 0.001483s | 0.001426s | 0.001411s | byte equality observed |
| weighted_p_square_cumul_dist.test | 1 | 0.101421s | 0.144209s | 0.101972s | byte equality observed |
| weighted_p_square_quantile.test | 1 | 0.021754s | 0.026913s | 0.021547s | byte equality observed |
| weighted_pot_quantile.test | 1 | 0.021802s | 0.023456s | 0.020754s | byte equality observed |
| weighted_skewness.test | 5 | 0.002309s | 0.003568s | 0.002340s | byte equality observed |
| weighted_sum.test | 10 | 0.001458s | 0.001434s | 0.001402s | byte equality observed |
| weighted_sum_kahan.test | 3 | 0.005779s | 0.009397s | 0.005663s | byte equality observed |
| weighted_tail_mean.test | 2 | 0.018574s | 0.019774s | 0.018153s | byte equality observed |
| weighted_tail_quantile.test | 1 | 0.019358s | 0.021816s | 0.018856s | byte equality observed |
| weighted_tail_variate_means.test | 10 | 0.001517s | 0.001487s | 0.001446s | byte equality observed |
| weighted_variance.test | 8 | 0.001644s | 0.001780s | 0.001595s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/43967972441).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
