# libs/accumulators/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| count.test | RUN | 0.749992 | 2.256700 | 2.449387 | 0.002775 | 0.002696 | 0.002360 |
| covariance.test | RUN | 1.427729 | 5.631118 | 6.219178 | 0.002628 | 0.002649 | 0.002559 |
| droppable.test | RUN | 0.933734 | 3.047776 | 3.265159 | 0.002569 | 0.002699 | 0.002324 |
| error_of.test | RUN | 1.000144 | 2.966802 | 3.549154 | 0.002399 | 0.002274 | 0.002471 |
| extended_p_square.test | RUN | 1.096930 | 3.885654 | 3.719596 | 0.004334 | 0.004771 | 0.004337 |
| extended_p_square_quantile.test | RUN | 1.430275 | 5.783336 | 5.105713 | 0.008323 | 0.008752 | 0.007994 |
| external_accumulator.test | RUN | 0.932832 | 2.796137 | 3.092935 | 0.002731 | 0.002641 | 0.002482 |
| external_weights.test | RUN | 0.821683 | 2.219508 | 2.548847 | 0.002664 | 0.002523 | 0.002360 |
| kurtosis.test | RUN | 1.207604 | 3.576692 | 4.173264 | 0.003727 | 0.004640 | 0.003626 |
| max.test | RUN | 0.770188 | 2.183347 | 2.427049 | 0.002735 | 0.002665 | 0.002553 |
| mean.test | RUN | 1.024419 | 3.098808 | 3.441336 | 0.002665 | 0.002617 | 0.002506 |
| median.test | RUN | 1.399212 | 6.049762 | 5.246503 | 0.138138 | 0.157393 | 0.134221 |
| min.test | RUN | 0.778094 | 2.240705 | 2.351633 | 0.002400 | 0.002681 | 0.002429 |
| moment.test | RUN | 0.875544 | 2.492646 | 2.858386 | 0.002675 | 0.002815 | 0.002175 |
| p_square_cumul_dist.test | RUN | 1.181129 | 4.434808 | 3.935656 | 0.973649 | 1.160216 | 0.929754 |
| p_square_quantile.test | RUN | 1.006888 | 3.880851 | 3.314637 | 0.031663 | 0.032761 | 0.027880 |
| reference.test | RUN | 0.873362 | 2.517559 | 2.780589 | 0.002694 | 0.002333 | 0.002422 |
| rolling_count.test | RUN | 0.899837 | 2.882156 | 2.895063 | 0.002502 | 0.002665 | 0.002611 |
| rolling_sum.test | RUN | 0.891732 | 2.827469 | 2.781523 | 0.002513 | 0.002838 | 0.002468 |
| rolling_mean.test | RUN | 1.303851 | 5.019800 | 4.813691 | 0.002921 | 0.002751 | 0.002655 |
| rolling_variance.test | RUN | 1.470888 | 5.795046 | 5.436074 | 0.002772 | 0.002685 | 0.002703 |
| rolling_moment.test | RUN | 1.116061 | 3.420492 | 3.622739 | 0.002759 | 0.002864 | 0.002693 |
| skewness.test | RUN | 1.174061 | 3.439943 | 4.028945 | 0.003699 | 0.004810 | 0.003649 |
| sum.test | RUN | 0.808335 | 2.404545 | 2.666310 | 0.002627 | 0.002743 | 0.002544 |
| sum_kahan.test | RUN | 0.860076 | 2.548343 | 2.786160 | 0.013783 | 0.021569 | 0.013519 |
| tail.test | RUN | 0.968680 | 3.492152 | 3.149803 | 0.002593 | 0.002526 | 0.002608 |
| tail_mean.test | RUN | 1.314656 | 4.132365 | 4.506739 | 0.024331 | 0.025096 | 0.024489 |
| tail_quantile.test | RUN | 1.100349 | 3.370366 | 3.556150 | 0.028676 | 0.029734 | 0.026840 |
| variance.test | RUN | 1.004641 | 2.961618 | 3.502032 | 0.002626 | 0.002576 | 0.002510 |
| vector.test | RUN | 1.145698 | 3.749371 | 4.187858 | 0.002493 | 0.002650 | 0.002465 |
| weighted_covariance.test | RUN | 1.450015 | 5.737307 | 6.218376 | 0.002507 | 0.002496 | 0.002342 |
| weighted_extended_p_square.test | RUN | 1.008469 | 3.386499 | 3.271444 | 0.023951 | 0.026819 | 0.022456 |
| weighted_kurtosis.test | RUN | 1.169671 | 3.418884 | 3.965251 | 0.003604 | 0.005322 | 0.003604 |
| weighted_mean.test | RUN | 0.986870 | 3.066751 | 3.428029 | 0.002422 | 0.002449 | 0.002386 |
| weighted_median.test | RUN | 1.314433 | 4.035768 | 4.439958 | 1.255766 | 1.378441 | 1.263227 |
| weighted_moment.test | RUN | 0.823990 | 2.301975 | 2.595399 | 0.002508 | 0.002430 | 0.002372 |
| weighted_p_square_cumul_dist.test | RUN | 1.028166 | 3.447119 | 3.188443 | 0.127508 | 0.152428 | 0.124048 |
| weighted_p_square_quantile.test | RUN | 0.938609 | 3.402249 | 2.709223 | 0.030552 | 0.035302 | 0.026228 |
| weighted_skewness.test | RUN | 1.124192 | 2.971189 | 3.773094 | 0.003319 | 0.005099 | 0.003488 |
| weighted_sum.test | RUN | 0.689196 | 1.925007 | 2.092405 | 0.002517 | 0.002607 | 0.002085 |
| weighted_sum_kahan.test | RUN | 0.653782 | 2.027233 | 2.219897 | 0.007295 | 0.013263 | 0.007644 |
| weighted_variance.test | RUN | 1.250626 | 3.716224 | 4.358034 | 0.002668 | 0.003090 | 0.002601 |
| valarray.test | RUN | 1.160722 | 3.510129 | 4.017287 | 0.002343 | 0.002372 | 0.002350 |
| tail_variate_means.test | RUN | 1.452065 | 5.590726 | 5.633327 | 0.002678 | 0.002658 | 0.002468 |
| pot_quantile.test | RUN | 1.765955 | 6.230143 | 6.693586 | 0.011103 | 0.014327 | 0.010992 |
| weighted_pot_quantile.test | RUN | 1.752489 | 6.035094 | 6.716678 | 0.021997 | 0.032824 | 0.028353 |
| weighted_tail_mean.test | RUN | 1.539942 | 4.841889 | 5.649190 | 0.024084 | 0.028778 | 0.023900 |
| weighted_tail_quantile.test | RUN | 1.526333 | 4.051032 | 5.029062 | 0.017998 | 0.023263 | 0.019087 |
| weighted_tail_variate_means.test | RUN | 1.698102 | 4.837275 | 5.722701 | 0.001690 | 0.001833 | 0.001702 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 1.125× | 1.142×, 1.108× | 0.986× |
| clang | 0.964× | 0.969×, 0.958× | 1.002× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1360 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43654890423).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| count.test | 1 | 0.002377s | 0.002402s | 0.002149s | byte equality observed |
| covariance.test | 1 | 0.002382s | 0.002297s | 0.002230s | byte equality observed |
| droppable.test | 1 | 0.002308s | 0.002179s | 0.002326s | byte equality observed |
| error_of.test | 1 | 0.002246s | 0.002093s | 0.002122s | byte equality observed |
| extended_p_square.test | 5 | 0.003656s | 0.003825s | 0.003495s | byte equality observed |
| extended_p_square_quantile.test | 2 | 0.007660s | 0.007901s | 0.007172s | byte equality observed |
| external_accumulator.test | 5 | 0.002065s | 0.002001s | 0.001945s | byte equality observed |
| external_weights.test | 5 | 0.001977s | 0.001909s | 0.001846s | byte equality observed |
| kurtosis.test | 5 | 0.002939s | 0.003830s | 0.002958s | byte equality observed |
| max.test | 6 | 0.002037s | 0.001935s | 0.001924s | byte equality observed |
| mean.test | 7 | 0.002081s | 0.001942s | 0.001977s | byte equality observed |
| median.test | 1 | 0.134461s | 0.151175s | 0.126047s | byte equality observed |
| min.test | 7 | 0.001977s | 0.001955s | 0.001963s | byte equality observed |
| moment.test | 7 | 0.001989s | 0.001933s | 0.001905s | byte equality observed |
| p_square_cumul_dist.test | 1 | 0.813694s | 0.965235s | 0.761100s | byte equality observed |
| p_square_quantile.test | 1 | 0.031620s | 0.029665s | 0.027480s | byte equality observed |
| pot_quantile.test | 2 | 0.010894s | 0.011984s | 0.010705s | byte equality observed |
| reference.test | 8 | 0.001990s | 0.001906s | 0.001952s | byte equality observed |
| rolling_count.test | 8 | 0.002035s | 0.001942s | 0.001959s | byte equality observed |
| rolling_mean.test | 8 | 0.002127s | 0.002025s | 0.002073s | byte equality observed |
| rolling_moment.test | 8 | 0.002067s | 0.001986s | 0.002018s | byte equality observed |
| rolling_sum.test | 8 | 0.002024s | 0.001885s | 0.001940s | byte equality observed |
| rolling_variance.test | 8 | 0.002133s | 0.002039s | 0.002066s | byte equality observed |
| skewness.test | 5 | 0.002822s | 0.003773s | 0.002925s | byte equality observed |
| sum.test | 6 | 0.001959s | 0.001883s | 0.001937s | byte equality observed |
| sum_kahan.test | 1 | 0.012830s | 0.021844s | 0.013048s | byte equality observed |
| tail.test | 4 | 0.002000s | 0.001899s | 0.001895s | byte equality observed |
| tail_mean.test | 1 | 0.023531s | 0.022931s | 0.023522s | byte equality observed |
| tail_quantile.test | 1 | 0.027169s | 0.028539s | 0.025403s | byte equality observed |
| tail_variate_means.test | 8 | 0.001990s | 0.001920s | 0.001900s | byte equality observed |
| valarray.test | 8 | 0.001966s | 0.001907s | 0.001843s | byte equality observed |
| variance.test | 7 | 0.002039s | 0.001911s | 0.001956s | byte equality observed |
| vector.test | 8 | 0.001974s | 0.001885s | 0.001805s | byte equality observed |
| weighted_covariance.test | 8 | 0.001924s | 0.001849s | 0.001820s | byte equality observed |
| weighted_extended_p_square.test | 1 | 0.022611s | 0.026691s | 0.020910s | byte equality observed |
| weighted_kurtosis.test | 5 | 0.003023s | 0.004323s | 0.002860s | byte equality observed |
| weighted_mean.test | 10 | 0.001907s | 0.001834s | 0.001817s | byte equality observed |
| weighted_median.test | 1 | 1.095991s | 1.165722s | 1.076426s | byte equality observed |
| weighted_moment.test | 8 | 0.001886s | 0.001824s | 0.001795s | byte equality observed |
| weighted_p_square_cumul_dist.test | 1 | 0.131741s | 0.176412s | 0.124053s | byte equality observed |
| weighted_p_square_quantile.test | 1 | 0.030661s | 0.032989s | 0.028531s | byte equality observed |
| weighted_pot_quantile.test | 1 | 0.027509s | 0.028682s | 0.026110s | byte equality observed |
| weighted_skewness.test | 5 | 0.003030s | 0.004461s | 0.003045s | byte equality observed |
| weighted_sum.test | 10 | 0.001876s | 0.001815s | 0.001815s | byte equality observed |
| weighted_sum_kahan.test | 2 | 0.007114s | 0.011643s | 0.007014s | byte equality observed |
| weighted_tail_mean.test | 1 | 0.022850s | 0.024442s | 0.022866s | byte equality observed |
| weighted_tail_quantile.test | 1 | 0.024219s | 0.027604s | 0.024446s | byte equality observed |
| weighted_tail_variate_means.test | 8 | 0.001890s | 0.001882s | 0.001799s | byte equality observed |
| weighted_variance.test | 8 | 0.002108s | 0.002254s | 0.002029s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43654890423).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
