# libs/accumulators/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| count.test | RUN | 0.609987 | 1.755986 | 1.868478 | 0.002288 | 0.002392 | 0.002114 |
| covariance.test | RUN | 1.179760 | 4.594866 | 4.945082 | 0.002215 | 0.002466 | 0.002159 |
| droppable.test | RUN | 0.769577 | 2.373175 | 2.704786 | 0.002084 | 0.002460 | 0.002272 |
| error_of.test | RUN | 0.827129 | 2.296489 | 2.828654 | 0.002099 | 0.002192 | 0.002030 |
| extended_p_square.test | RUN | 0.851998 | 2.997761 | 2.928444 | 0.003810 | 0.003967 | 0.003319 |
| extended_p_square_quantile.test | RUN | 1.143774 | 4.687631 | 4.220678 | 0.006789 | 0.007727 | 0.006641 |
| external_accumulator.test | RUN | 0.726746 | 2.252737 | 2.570093 | 0.002249 | 0.002396 | 0.002218 |
| external_weights.test | RUN | 0.639582 | 1.703652 | 2.027941 | 0.002198 | 0.002326 | 0.002273 |
| kurtosis.test | RUN | 0.998272 | 2.880715 | 3.464374 | 0.003228 | 0.004040 | 0.003058 |
| max.test | RUN | 0.604276 | 1.711759 | 1.844088 | 0.002354 | 0.002298 | 0.002127 |
| mean.test | RUN | 0.815573 | 2.429334 | 2.784066 | 0.002431 | 0.002586 | 0.002209 |
| median.test | RUN | 1.095447 | 4.902430 | 4.309233 | 0.104394 | 0.121445 | 0.105888 |
| min.test | RUN | 0.626549 | 1.749669 | 1.863969 | 0.002005 | 0.002403 | 0.002110 |
| moment.test | RUN | 0.704629 | 1.962947 | 2.230606 | 0.002428 | 0.002300 | 0.002238 |
| p_square_cumul_dist.test | RUN | 0.885863 | 3.408050 | 3.182785 | 0.733203 | 0.911300 | 0.707713 |
| p_square_quantile.test | RUN | 0.804216 | 3.033345 | 2.744414 | 0.021929 | 0.024475 | 0.022102 |
| reference.test | RUN | 0.684429 | 1.930647 | 2.245838 | 0.002544 | 0.002218 | 0.002123 |
| rolling_count.test | RUN | 0.724615 | 2.056052 | 2.168086 | 0.002243 | 0.002302 | 0.002215 |
| rolling_sum.test | RUN | 0.714260 | 2.226591 | 2.354538 | 0.002633 | 0.002274 | 0.002341 |
| rolling_mean.test | RUN | 1.016346 | 4.027003 | 3.851328 | 0.002687 | 0.002492 | 0.002398 |
| rolling_variance.test | RUN | 1.205093 | 4.626170 | 4.380946 | 0.002601 | 0.002317 | 0.002295 |
| rolling_moment.test | RUN | 0.890614 | 2.672269 | 2.882647 | 0.002266 | 0.002403 | 0.002526 |
| skewness.test | RUN | 0.962995 | 2.703205 | 3.219809 | 0.003073 | 0.003968 | 0.003153 |
| sum.test | RUN | 0.635309 | 1.887209 | 2.083931 | 0.002209 | 0.002301 | 0.002424 |
| sum_kahan.test | RUN | 0.689826 | 1.994208 | 2.216403 | 0.010561 | 0.019097 | 0.011317 |
| tail.test | RUN | 0.742914 | 2.761991 | 2.468165 | 0.002300 | 0.002311 | 0.002287 |
| tail_mean.test | RUN | 1.034477 | 3.233444 | 3.687909 | 0.018946 | 0.021367 | 0.019565 |
| tail_quantile.test | RUN | 0.831000 | 2.699598 | 2.867307 | 0.021590 | 0.024402 | 0.020737 |
| variance.test | RUN | 0.806427 | 2.369329 | 2.781659 | 0.002215 | 0.002314 | 0.002258 |
| vector.test | RUN | 0.867447 | 2.923259 | 3.396602 | 0.002216 | 0.002306 | 0.002210 |
| weighted_covariance.test | RUN | 1.182779 | 4.580972 | 5.110724 | 0.002526 | 0.002244 | 0.002056 |
| weighted_extended_p_square.test | RUN | 0.804756 | 2.659557 | 2.619474 | 0.019300 | 0.021574 | 0.017150 |
| weighted_kurtosis.test | RUN | 0.963838 | 2.630098 | 3.176193 | 0.003043 | 0.004367 | 0.003124 |
| weighted_mean.test | RUN | 0.802733 | 2.345450 | 2.755440 | 0.002144 | 0.002371 | 0.002126 |
| weighted_median.test | RUN | 1.028474 | 3.251202 | 3.608030 | 0.975617 | 1.046227 | 0.983134 |
| weighted_moment.test | RUN | 0.646279 | 1.770938 | 2.113420 | 0.002104 | 0.002217 | 0.002086 |
| weighted_p_square_cumul_dist.test | RUN | 0.792156 | 2.632586 | 2.570947 | 0.098828 | 0.119611 | 0.097654 |
| weighted_p_square_quantile.test | RUN | 0.740800 | 2.673849 | 2.186650 | 0.022807 | 0.026521 | 0.021448 |
| weighted_skewness.test | RUN | 0.873578 | 2.554912 | 3.054357 | 0.002714 | 0.004470 | 0.003030 |
| weighted_sum.test | RUN | 0.533220 | 1.476522 | 1.592296 | 0.002018 | 0.002264 | 0.002264 |
| weighted_sum_kahan.test | RUN | 0.516112 | 1.594577 | 1.762929 | 0.006067 | 0.010760 | 0.006862 |
| weighted_variance.test | RUN | 0.971261 | 2.926959 | 3.541617 | 0.002286 | 0.002588 | 0.002351 |
| valarray.test | RUN | 0.896668 | 2.796769 | 3.252579 | 0.002185 | 0.002361 | 0.002069 |
| tail_variate_means.test | RUN | 1.186574 | 4.518320 | 4.623366 | 0.002284 | 0.002267 | 0.002232 |
| pot_quantile.test | RUN | 1.429180 | 4.936710 | 5.441398 | 0.008785 | 0.011309 | 0.008841 |
| weighted_pot_quantile.test | RUN | 1.405264 | 4.647654 | 5.512452 | 0.020708 | 0.019070 | 0.022066 |
| weighted_tail_mean.test | RUN | 1.229607 | 3.826660 | 4.643121 | 0.019573 | 0.022241 | 0.015802 |
| weighted_tail_quantile.test | RUN | 1.235530 | 3.317262 | 4.179617 | 0.016000 | 0.018215 | 0.015631 |
| weighted_tail_variate_means.test | RUN | 1.381811 | 4.152095 | 4.856951 | 0.001482 | 0.001607 | 0.001493 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 1.160× | 1.155×, 1.166× | 1.005× |
| clang | 0.995× | 0.995×, 0.994× | 1.002× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1362 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/43822097733).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| count.test | 1 | 0.001880s | 0.001793s | 0.001922s | byte equality observed |
| covariance.test | 1 | 0.001979s | 0.002027s | 0.001922s | byte equality observed |
| droppable.test | 1 | 0.001995s | 0.001915s | 0.001842s | byte equality observed |
| error_of.test | 1 | 0.001894s | 0.001801s | 0.001883s | byte equality observed |
| extended_p_square.test | 5 | 0.002869s | 0.002941s | 0.002703s | byte equality observed |
| extended_p_square_quantile.test | 3 | 0.006155s | 0.006555s | 0.005626s | byte equality observed |
| external_accumulator.test | 9 | 0.001601s | 0.001565s | 0.001523s | byte equality observed |
| external_weights.test | 6 | 0.001559s | 0.001513s | 0.001478s | byte equality observed |
| kurtosis.test | 5 | 0.002295s | 0.003107s | 0.002359s | byte equality observed |
| max.test | 9 | 0.001594s | 0.001555s | 0.001520s | byte equality observed |
| mean.test | 9 | 0.001625s | 0.001552s | 0.001547s | byte equality observed |
| median.test | 1 | 0.099575s | 0.116049s | 0.099009s | byte equality observed |
| min.test | 9 | 0.001579s | 0.001534s | 0.001507s | byte equality observed |
| moment.test | 8 | 0.001560s | 0.001530s | 0.001528s | byte equality observed |
| p_square_cumul_dist.test | 1 | 0.635064s | 0.810744s | 0.624313s | byte equality observed |
| p_square_quantile.test | 1 | 0.021633s | 0.023921s | 0.020689s | byte equality observed |
| pot_quantile.test | 3 | 0.008393s | 0.009555s | 0.008023s | byte equality observed |
| reference.test | 10 | 0.001544s | 0.001517s | 0.001490s | byte equality observed |
| rolling_count.test | 10 | 0.001592s | 0.001543s | 0.001522s | byte equality observed |
| rolling_mean.test | 10 | 0.001662s | 0.001620s | 0.001598s | byte equality observed |
| rolling_moment.test | 10 | 0.001631s | 0.001590s | 0.001576s | byte equality observed |
| rolling_sum.test | 10 | 0.001579s | 0.001564s | 0.001537s | byte equality observed |
| rolling_variance.test | 9 | 0.001669s | 0.001616s | 0.001587s | byte equality observed |
| skewness.test | 6 | 0.002274s | 0.003063s | 0.002364s | byte equality observed |
| sum.test | 10 | 0.001553s | 0.001513s | 0.001492s | byte equality observed |
| sum_kahan.test | 2 | 0.010146s | 0.017504s | 0.010050s | byte equality observed |
| tail.test | 10 | 0.001585s | 0.001540s | 0.001493s | byte equality observed |
| tail_mean.test | 1 | 0.018128s | 0.018741s | 0.017948s | byte equality observed |
| tail_quantile.test | 1 | 0.020513s | 0.024527s | 0.019868s | byte equality observed |
| tail_variate_means.test | 8 | 0.001535s | 0.001514s | 0.001527s | byte equality observed |
| valarray.test | 10 | 0.001544s | 0.001554s | 0.001456s | byte equality observed |
| variance.test | 10 | 0.001594s | 0.001548s | 0.001541s | byte equality observed |
| vector.test | 10 | 0.001531s | 0.001490s | 0.001458s | byte equality observed |
| weighted_covariance.test | 10 | 0.001514s | 0.001498s | 0.001452s | byte equality observed |
| weighted_extended_p_square.test | 1 | 0.017019s | 0.019771s | 0.016064s | byte equality observed |
| weighted_kurtosis.test | 6 | 0.002310s | 0.003615s | 0.002347s | byte equality observed |
| weighted_mean.test | 10 | 0.001504s | 0.001451s | 0.001453s | byte equality observed |
| weighted_median.test | 1 | 0.856154s | 0.934682s | 0.862355s | byte equality observed |
| weighted_moment.test | 10 | 0.001483s | 0.001452s | 0.001434s | byte equality observed |
| weighted_p_square_cumul_dist.test | 1 | 0.101664s | 0.131842s | 0.101380s | byte equality observed |
| weighted_p_square_quantile.test | 1 | 0.021600s | 0.027238s | 0.021592s | byte equality observed |
| weighted_pot_quantile.test | 1 | 0.021598s | 0.023611s | 0.020778s | byte equality observed |
| weighted_skewness.test | 6 | 0.002271s | 0.003616s | 0.002331s | byte equality observed |
| weighted_sum.test | 10 | 0.001460s | 0.001455s | 0.001404s | byte equality observed |
| weighted_sum_kahan.test | 3 | 0.005814s | 0.009431s | 0.005671s | byte equality observed |
| weighted_tail_mean.test | 2 | 0.018588s | 0.019933s | 0.018501s | byte equality observed |
| weighted_tail_quantile.test | 1 | 0.019507s | 0.022959s | 0.018924s | byte equality observed |
| weighted_tail_variate_means.test | 8 | 0.001506s | 0.001480s | 0.001458s | byte equality observed |
| weighted_variance.test | 7 | 0.001648s | 0.001792s | 0.001611s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/43822097733).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
