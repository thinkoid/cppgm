# libs/accumulators/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| count.test | RUN | 0.740467 | 2.025478 | 2.415764 | 0.003377 | 0.003157 | 0.003996 |
| covariance.test | RUN | 1.428926 | 5.133744 | 6.304657 | 0.003495 | 0.003629 | 0.003421 |
| droppable.test | RUN | 0.931477 | 2.724107 | 3.305375 | 0.003439 | 0.003538 | 0.003199 |
| error_of.test | RUN | 1.050013 | 2.683052 | 3.581822 | 0.003240 | 0.003231 | 0.003105 |
| extended_p_square.test | RUN | 1.064964 | 3.364803 | 3.720214 | 0.005278 | 0.005107 | 0.004358 |
| extended_p_square_quantile.test | RUN | 1.429938 | 5.382375 | 5.275774 | 0.008842 | 0.009279 | 0.008065 |
| external_accumulator.test | RUN | 0.944159 | 2.706323 | 3.179106 | 0.003389 | 0.003712 | 0.003253 |
| external_weights.test | RUN | 0.819887 | 1.994093 | 2.483138 | 0.003098 | 0.003375 | 0.002826 |
| kurtosis.test | RUN | 1.211095 | 3.418034 | 4.198073 | 0.004334 | 0.005129 | 0.004383 |
| max.test | RUN | 0.739445 | 1.915321 | 2.303839 | 0.003510 | 0.003368 | 0.003172 |
| mean.test | RUN | 0.986386 | 2.918814 | 3.401537 | 0.003391 | 0.003436 | 0.003232 |
| median.test | RUN | 1.429008 | 5.418202 | 5.115255 | 0.116576 | 0.131366 | 0.113363 |
| min.test | RUN | 0.805308 | 1.993784 | 2.309874 | 0.003254 | 0.003525 | 0.003237 |
| moment.test | RUN | 0.882954 | 2.243079 | 2.742100 | 0.003269 | 0.003415 | 0.003329 |
| p_square_cumul_dist.test | RUN | 1.155237 | 3.915433 | 3.910988 | 0.862567 | 1.035863 | 0.801831 |
| p_square_quantile.test | RUN | 0.980764 | 3.522174 | 3.236523 | 0.028047 | 0.026710 | 0.024748 |
| reference.test | RUN | 0.855652 | 2.182106 | 2.690304 | 0.003325 | 0.003294 | 0.002613 |
| rolling_count.test | RUN | 0.872406 | 2.502605 | 2.872921 | 0.003076 | 0.003071 | 0.003317 |
| rolling_sum.test | RUN | 0.868584 | 2.393043 | 2.879411 | 0.003419 | 0.003516 | 0.003333 |
| rolling_mean.test | RUN | 1.274309 | 4.644268 | 4.685559 | 0.003385 | 0.003759 | 0.003453 |
| rolling_variance.test | RUN | 1.430879 | 5.381901 | 5.360499 | 0.003525 | 0.003492 | 0.003470 |
| rolling_moment.test | RUN | 1.069674 | 3.142317 | 3.518557 | 0.003328 | 0.003367 | 0.003553 |
| skewness.test | RUN | 1.139896 | 3.199897 | 3.925743 | 0.004364 | 0.004716 | 0.004506 |
| sum.test | RUN | 0.796097 | 2.103222 | 2.544182 | 0.003434 | 0.003397 | 0.003313 |
| sum_kahan.test | RUN | 0.849656 | 2.310302 | 2.693780 | 0.017192 | 0.027764 | 0.016899 |
| tail.test | RUN | 0.914804 | 3.211386 | 3.011641 | 0.003337 | 0.003486 | 0.003234 |
| tail_mean.test | RUN | 1.309498 | 3.712154 | 4.477130 | 0.020647 | 0.027164 | 0.021201 |
| tail_quantile.test | RUN | 1.083645 | 3.014717 | 3.457412 | 0.023269 | 0.031676 | 0.024208 |
| variance.test | RUN | 1.017530 | 2.841829 | 3.391454 | 0.003126 | 0.003254 | 0.003283 |
| vector.test | RUN | 1.101895 | 3.490894 | 4.099269 | 0.003326 | 0.003414 | 0.003368 |
| weighted_covariance.test | RUN | 1.449366 | 5.425492 | 6.254790 | 0.003227 | 0.003301 | 0.003137 |
| weighted_extended_p_square.test | RUN | 1.007541 | 3.106662 | 3.220486 | 0.021873 | 0.024743 | 0.020006 |
| weighted_kurtosis.test | RUN | 1.201625 | 3.163276 | 3.940669 | 0.004050 | 0.005451 | 0.004194 |
| weighted_mean.test | RUN | 1.005678 | 2.837908 | 3.382042 | 0.003281 | 0.003268 | 0.003055 |
| weighted_median.test | RUN | 1.317343 | 3.863809 | 4.479406 | 1.059909 | 1.169645 | 1.095209 |
| weighted_moment.test | RUN | 0.816826 | 2.052253 | 2.532695 | 0.003225 | 0.003274 | 0.002988 |
| weighted_p_square_cumul_dist.test | RUN | 1.020532 | 3.159886 | 3.140616 | 0.118799 | 0.136873 | 0.109579 |
| weighted_p_square_quantile.test | RUN | 0.918043 | 3.133888 | 2.661849 | 0.028654 | 0.030329 | 0.025415 |
| weighted_skewness.test | RUN | 1.075254 | 3.012695 | 3.783872 | 0.003618 | 0.005291 | 0.003859 |
| weighted_sum.test | RUN | 0.690159 | 1.711361 | 1.997420 | 0.002910 | 0.003209 | 0.002827 |
| weighted_sum_kahan.test | RUN | 0.745908 | 1.888426 | 2.185814 | 0.009571 | 0.015485 | 0.009641 |
| weighted_variance.test | RUN | 1.215632 | 3.525643 | 4.301259 | 0.003153 | 0.003631 | 0.003297 |
| valarray.test | RUN | 1.117112 | 3.227448 | 4.055594 | 0.003361 | 0.003363 | 0.002946 |
| tail_variate_means.test | RUN | 1.410327 | 5.378322 | 5.631812 | 0.003306 | 0.003308 | 0.003097 |
| pot_quantile.test | RUN | 1.760971 | 5.888498 | 6.732381 | 0.011121 | 0.013412 | 0.010832 |
| weighted_pot_quantile.test | RUN | 1.805797 | 5.866021 | 6.803480 | 0.020434 | 0.030852 | 0.025916 |
| weighted_tail_mean.test | RUN | 1.624545 | 4.589939 | 5.584605 | 0.021435 | 0.027170 | 0.022646 |
| weighted_tail_quantile.test | RUN | 1.539902 | 4.059676 | 5.076926 | 0.019334 | 0.022883 | 0.019312 |
| weighted_tail_variate_means.test | RUN | 1.831474 | 4.973621 | 5.781974 | 0.002490 | 0.002469 | 0.002152 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 1.182× | 1.175×, 1.189× | 1.001× |
| clang | 0.983× | 0.982×, 0.985× | 1.003× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1363 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43648658351).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| count.test | 1 | 0.002623s | 0.002584s | 0.002467s | byte equality observed |
| covariance.test | 1 | 0.002621s | 0.002487s | 0.002532s | byte equality observed |
| droppable.test | 1 | 0.002606s | 0.002522s | 0.002481s | byte equality observed |
| error_of.test | 1 | 0.002486s | 0.002436s | 0.002236s | byte equality observed |
| extended_p_square.test | 5 | 0.003523s | 0.003590s | 0.003450s | byte equality observed |
| extended_p_square_quantile.test | 3 | 0.007407s | 0.007021s | 0.006231s | byte equality observed |
| external_accumulator.test | 6 | 0.002126s | 0.002108s | 0.002074s | byte equality observed |
| external_weights.test | 6 | 0.002026s | 0.002029s | 0.001968s | byte equality observed |
| kurtosis.test | 5 | 0.003085s | 0.003665s | 0.003054s | byte equality observed |
| max.test | 7 | 0.002112s | 0.002015s | 0.002072s | byte equality observed |
| mean.test | 7 | 0.002132s | 0.002117s | 0.002066s | byte equality observed |
| median.test | 1 | 0.118173s | 0.125573s | 0.110391s | byte equality observed |
| min.test | 7 | 0.002111s | 0.002053s | 0.002034s | byte equality observed |
| moment.test | 7 | 0.002141s | 0.002128s | 0.002016s | byte equality observed |
| p_square_cumul_dist.test | 1 | 0.779004s | 0.961902s | 0.743898s | byte equality observed |
| p_square_quantile.test | 1 | 0.028927s | 0.026718s | 0.023978s | byte equality observed |
| pot_quantile.test | 2 | 0.010144s | 0.011544s | 0.009732s | byte equality observed |
| reference.test | 7 | 0.002176s | 0.002172s | 0.002085s | byte equality observed |
| rolling_count.test | 7 | 0.002138s | 0.001987s | 0.002045s | byte equality observed |
| rolling_mean.test | 7 | 0.002235s | 0.002210s | 0.002141s | byte equality observed |
| rolling_moment.test | 8 | 0.002225s | 0.002186s | 0.002114s | byte equality observed |
| rolling_sum.test | 7 | 0.002151s | 0.002117s | 0.002065s | byte equality observed |
| rolling_variance.test | 6 | 0.002233s | 0.002218s | 0.002140s | byte equality observed |
| skewness.test | 4 | 0.003085s | 0.003812s | 0.003117s | byte equality observed |
| sum.test | 9 | 0.002137s | 0.002020s | 0.002032s | byte equality observed |
| sum_kahan.test | 1 | 0.015822s | 0.026589s | 0.015557s | byte equality observed |
| tail.test | 6 | 0.002087s | 0.002029s | 0.002002s | byte equality observed |
| tail_mean.test | 1 | 0.019859s | 0.025378s | 0.020550s | byte equality observed |
| tail_quantile.test | 1 | 0.023323s | 0.027860s | 0.022245s | byte equality observed |
| tail_variate_means.test | 8 | 0.002081s | 0.002014s | 0.001999s | byte equality observed |
| valarray.test | 7 | 0.002075s | 0.001987s | 0.002003s | byte equality observed |
| variance.test | 7 | 0.002166s | 0.002064s | 0.002109s | byte equality observed |
| vector.test | 8 | 0.002048s | 0.002041s | 0.001956s | byte equality observed |
| weighted_covariance.test | 8 | 0.002031s | 0.002013s | 0.001944s | byte equality observed |
| weighted_extended_p_square.test | 1 | 0.020819s | 0.023667s | 0.019166s | byte equality observed |
| weighted_kurtosis.test | 4 | 0.003151s | 0.004309s | 0.003027s | byte equality observed |
| weighted_mean.test | 6 | 0.002027s | 0.001982s | 0.001958s | byte equality observed |
| weighted_median.test | 1 | 0.984876s | 1.115597s | 1.005575s | byte equality observed |
| weighted_moment.test | 7 | 0.002013s | 0.001930s | 0.001894s | byte equality observed |
| weighted_p_square_cumul_dist.test | 1 | 0.117665s | 0.174500s | 0.118468s | byte equality observed |
| weighted_p_square_quantile.test | 1 | 0.029150s | 0.035219s | 0.025866s | byte equality observed |
| weighted_pot_quantile.test | 1 | 0.024889s | 0.027488s | 0.023970s | byte equality observed |
| weighted_skewness.test | 4 | 0.003231s | 0.004474s | 0.003160s | byte equality observed |
| weighted_sum.test | 7 | 0.001993s | 0.002004s | 0.002040s | byte equality observed |
| weighted_sum_kahan.test | 2 | 0.008822s | 0.013919s | 0.008793s | byte equality observed |
| weighted_tail_mean.test | 1 | 0.020797s | 0.022812s | 0.020657s | byte equality observed |
| weighted_tail_quantile.test | 1 | 0.022217s | 0.025834s | 0.021616s | byte equality observed |
| weighted_tail_variate_means.test | 7 | 0.002137s | 0.001958s | 0.002008s | byte equality observed |
| weighted_variance.test | 6 | 0.002191s | 0.002306s | 0.002164s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43648658351).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
