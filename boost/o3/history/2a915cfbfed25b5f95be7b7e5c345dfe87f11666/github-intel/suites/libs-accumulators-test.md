# libs/accumulators/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| count.test | RUN | 0.592233 | 1.726123 | 1.853774 | 0.002261 | 0.002563 | 0.002196 |
| covariance.test | RUN | 1.144870 | 4.653128 | 4.932192 | 0.002406 | 0.002552 | 0.002243 |
| droppable.test | RUN | 0.734129 | 2.398364 | 2.565240 | 0.002322 | 0.002551 | 0.001981 |
| error_of.test | RUN | 0.813405 | 2.367536 | 2.806529 | 0.002041 | 0.002513 | 0.001976 |
| extended_p_square.test | RUN | 0.864088 | 3.002398 | 2.955952 | 0.003301 | 0.004127 | 0.003320 |
| extended_p_square_quantile.test | RUN | 1.127806 | 4.829032 | 4.083846 | 0.006608 | 0.007882 | 0.006495 |
| external_accumulator.test | RUN | 0.721407 | 2.263726 | 2.435687 | 0.002298 | 0.002436 | 0.002113 |
| external_weights.test | RUN | 0.641524 | 1.789521 | 2.019518 | 0.002148 | 0.002335 | 0.001965 |
| kurtosis.test | RUN | 0.926183 | 2.894284 | 3.378532 | 0.003052 | 0.004062 | 0.002764 |
| max.test | RUN | 0.591294 | 1.727494 | 1.865259 | 0.002201 | 0.002380 | 0.002164 |
| mean.test | RUN | 0.797666 | 2.437236 | 2.731161 | 0.002216 | 0.002500 | 0.002128 |
| median.test | RUN | 1.101651 | 4.931673 | 4.259181 | 0.102528 | 0.121391 | 0.099276 |
| min.test | RUN | 0.588501 | 1.705804 | 1.841759 | 0.001986 | 0.002538 | 0.002189 |
| moment.test | RUN | 0.679815 | 1.998762 | 2.203493 | 0.002059 | 0.002494 | 0.002299 |
| p_square_cumul_dist.test | RUN | 0.891443 | 3.399508 | 3.256839 | 0.722929 | 0.898494 | 0.711170 |
| p_square_quantile.test | RUN | 0.784553 | 3.046319 | 2.625667 | 0.021869 | 0.024193 | 0.021674 |
| reference.test | RUN | 0.678238 | 1.934649 | 2.237720 | 0.002005 | 0.002400 | 0.002046 |
| rolling_count.test | RUN | 0.704156 | 2.052234 | 2.360408 | 0.002015 | 0.002499 | 0.002207 |
| rolling_sum.test | RUN | 0.646153 | 2.233369 | 2.164148 | 0.002110 | 0.002357 | 0.002018 |
| rolling_mean.test | RUN | 1.026348 | 4.039384 | 3.819440 | 0.002341 | 0.002596 | 0.002415 |
| rolling_variance.test | RUN | 1.162978 | 4.667156 | 4.387858 | 0.002271 | 0.002552 | 0.002322 |
| rolling_moment.test | RUN | 0.840334 | 2.698685 | 2.854775 | 0.002537 | 0.002460 | 0.002428 |
| skewness.test | RUN | 0.921140 | 2.770381 | 3.165216 | 0.002704 | 0.003966 | 0.002979 |
| sum.test | RUN | 0.621159 | 1.911617 | 2.120867 | 0.002331 | 0.002566 | 0.002256 |
| sum_kahan.test | RUN | 0.663350 | 1.993982 | 2.136778 | 0.011343 | 0.019210 | 0.011237 |
| tail.test | RUN | 0.737706 | 2.839144 | 2.459263 | 0.002429 | 0.002469 | 0.002201 |
| tail_mean.test | RUN | 1.048012 | 3.275346 | 3.653487 | 0.018552 | 0.021164 | 0.019244 |
| tail_quantile.test | RUN | 0.832945 | 2.697243 | 2.813004 | 0.021695 | 0.024187 | 0.020817 |
| variance.test | RUN | 0.805954 | 2.412346 | 2.693351 | 0.002266 | 0.002345 | 0.002111 |
| vector.test | RUN | 0.885522 | 2.996712 | 3.322924 | 0.002120 | 0.002549 | 0.002132 |
| weighted_covariance.test | RUN | 1.154324 | 4.564044 | 5.021602 | 0.001968 | 0.002484 | 0.001957 |
| weighted_extended_p_square.test | RUN | 0.789943 | 2.706500 | 2.526755 | 0.017623 | 0.021020 | 0.016548 |
| weighted_kurtosis.test | RUN | 0.932102 | 2.648870 | 3.151563 | 0.003018 | 0.004481 | 0.003012 |
| weighted_mean.test | RUN | 0.789381 | 2.382302 | 2.676591 | 0.002036 | 0.002483 | 0.001996 |
| weighted_median.test | RUN | 1.013400 | 3.269932 | 3.547804 | 0.968164 | 1.049375 | 0.964724 |
| weighted_moment.test | RUN | 0.625575 | 1.787466 | 2.091096 | 0.001964 | 0.002290 | 0.001961 |
| weighted_p_square_cumul_dist.test | RUN | 0.779244 | 2.659165 | 2.300817 | 0.103980 | 0.143502 | 0.102441 |
| weighted_p_square_quantile.test | RUN | 0.742967 | 2.719423 | 2.309851 | 0.021844 | 0.027353 | 0.022374 |
| weighted_skewness.test | RUN | 0.877326 | 2.626323 | 2.976351 | 0.002739 | 0.004500 | 0.002815 |
| weighted_sum.test | RUN | 0.533968 | 1.492779 | 1.625842 | 0.002384 | 0.002564 | 0.001951 |
| weighted_sum_kahan.test | RUN | 0.499573 | 1.629534 | 1.707285 | 0.006710 | 0.010520 | 0.006526 |
| weighted_variance.test | RUN | 0.999410 | 2.971052 | 3.413299 | 0.002232 | 0.002396 | 0.002258 |
| valarray.test | RUN | 0.886578 | 2.834543 | 3.227179 | 0.001878 | 0.002329 | 0.002088 |
| tail_variate_means.test | RUN | 1.167600 | 4.509689 | 4.495375 | 0.002250 | 0.002359 | 0.002079 |
| pot_quantile.test | RUN | 1.437909 | 5.058861 | 5.392760 | 0.009061 | 0.011275 | 0.008834 |
| weighted_pot_quantile.test | RUN | 1.417525 | 5.001293 | 5.335546 | 0.022767 | 0.026394 | 0.021324 |
| weighted_tail_mean.test | RUN | 1.235530 | 3.888133 | 4.257340 | 0.018702 | 0.022145 | 0.015652 |
| weighted_tail_quantile.test | RUN | 1.222535 | 3.259134 | 4.039742 | 0.015896 | 0.018368 | 0.015511 |
| weighted_tail_variate_means.test | RUN | 1.405904 | 4.324404 | 4.715916 | 0.001564 | 0.001581 | 0.001513 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 1.162× | 1.162×, 1.162× | 0.998× |
| clang | 0.998× | 0.995×, 1.002× | 0.997× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1364 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/43778388618).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| count.test | 1 | 0.001920s | 0.002083s | 0.001918s | byte equality observed |
| covariance.test | 1 | 0.001935s | 0.001877s | 0.001909s | byte equality observed |
| droppable.test | 1 | 0.001885s | 0.001793s | 0.001908s | byte equality observed |
| error_of.test | 1 | 0.001791s | 0.001798s | 0.001857s | byte equality observed |
| extended_p_square.test | 6 | 0.002864s | 0.003006s | 0.002784s | byte equality observed |
| extended_p_square_quantile.test | 3 | 0.006140s | 0.006604s | 0.005632s | byte equality observed |
| external_accumulator.test | 7 | 0.001596s | 0.001542s | 0.001531s | byte equality observed |
| external_weights.test | 5 | 0.001567s | 0.001506s | 0.001458s | byte equality observed |
| kurtosis.test | 6 | 0.002339s | 0.003097s | 0.002290s | byte equality observed |
| max.test | 7 | 0.001584s | 0.001537s | 0.001516s | byte equality observed |
| mean.test | 9 | 0.001603s | 0.001560s | 0.001556s | byte equality observed |
| median.test | 1 | 0.100878s | 0.124129s | 0.100183s | byte equality observed |
| min.test | 7 | 0.001583s | 0.001521s | 0.001513s | byte equality observed |
| moment.test | 8 | 0.001575s | 0.001536s | 0.001500s | byte equality observed |
| p_square_cumul_dist.test | 1 | 0.634792s | 0.800585s | 0.622140s | byte equality observed |
| p_square_quantile.test | 1 | 0.021762s | 0.023667s | 0.020680s | byte equality observed |
| pot_quantile.test | 3 | 0.008422s | 0.009443s | 0.008090s | byte equality observed |
| reference.test | 10 | 0.001553s | 0.001513s | 0.001499s | byte equality observed |
| rolling_count.test | 10 | 0.001572s | 0.001522s | 0.001506s | byte equality observed |
| rolling_mean.test | 10 | 0.001661s | 0.001611s | 0.001576s | byte equality observed |
| rolling_moment.test | 10 | 0.001615s | 0.001565s | 0.001574s | byte equality observed |
| rolling_sum.test | 10 | 0.001595s | 0.001525s | 0.001520s | byte equality observed |
| rolling_variance.test | 10 | 0.001642s | 0.001615s | 0.001592s | byte equality observed |
| skewness.test | 6 | 0.002222s | 0.003032s | 0.002284s | byte equality observed |
| sum.test | 10 | 0.001549s | 0.001515s | 0.001500s | byte equality observed |
| sum_kahan.test | 2 | 0.010493s | 0.017378s | 0.010009s | byte equality observed |
| tail.test | 10 | 0.001538s | 0.001488s | 0.001519s | byte equality observed |
| tail_mean.test | 2 | 0.017739s | 0.018832s | 0.017995s | byte equality observed |
| tail_quantile.test | 1 | 0.021261s | 0.024066s | 0.019683s | byte equality observed |
| tail_variate_means.test | 9 | 0.001561s | 0.001518s | 0.001563s | byte equality observed |
| valarray.test | 10 | 0.001527s | 0.001473s | 0.001472s | byte equality observed |
| variance.test | 10 | 0.001570s | 0.001538s | 0.001534s | byte equality observed |
| vector.test | 10 | 0.001519s | 0.001514s | 0.001470s | byte equality observed |
| weighted_covariance.test | 10 | 0.001519s | 0.001468s | 0.001463s | byte equality observed |
| weighted_extended_p_square.test | 1 | 0.016327s | 0.019945s | 0.015531s | byte equality observed |
| weighted_kurtosis.test | 5 | 0.002352s | 0.003607s | 0.002392s | byte equality observed |
| weighted_mean.test | 10 | 0.001498s | 0.001453s | 0.001443s | byte equality observed |
| weighted_median.test | 1 | 0.859426s | 0.923369s | 0.864694s | byte equality observed |
| weighted_moment.test | 10 | 0.001469s | 0.001441s | 0.001416s | byte equality observed |
| weighted_p_square_cumul_dist.test | 1 | 0.101584s | 0.145162s | 0.101562s | byte equality observed |
| weighted_p_square_quantile.test | 1 | 0.021795s | 0.026469s | 0.021896s | byte equality observed |
| weighted_pot_quantile.test | 1 | 0.021706s | 0.023363s | 0.021012s | byte equality observed |
| weighted_skewness.test | 6 | 0.002280s | 0.003513s | 0.002344s | byte equality observed |
| weighted_sum.test | 8 | 0.001464s | 0.001424s | 0.001406s | byte equality observed |
| weighted_sum_kahan.test | 3 | 0.005772s | 0.009367s | 0.005673s | byte equality observed |
| weighted_tail_mean.test | 2 | 0.018661s | 0.019033s | 0.018710s | byte equality observed |
| weighted_tail_quantile.test | 1 | 0.019500s | 0.021225s | 0.018915s | byte equality observed |
| weighted_tail_variate_means.test | 10 | 0.001509s | 0.001452s | 0.001483s | byte equality observed |
| weighted_variance.test | 10 | 0.001631s | 0.001791s | 0.001562s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/43778388618).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
