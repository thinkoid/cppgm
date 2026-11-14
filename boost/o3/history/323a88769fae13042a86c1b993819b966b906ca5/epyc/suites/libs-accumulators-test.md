# libs/accumulators/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| count.test | RUN | 0.732317 | 2.027947 | 2.402745 | 0.003560 | 0.003159 | 0.003095 |
| covariance.test | RUN | 1.486696 | 5.078309 | 6.379004 | 0.003587 | 0.003404 | 0.003408 |
| droppable.test | RUN | 0.988131 | 2.682346 | 3.300565 | 0.003596 | 0.003521 | 0.004128 |
| error_of.test | RUN | 1.039331 | 2.636713 | 3.642091 | 0.003172 | 0.003164 | 0.003351 |
| extended_p_square.test | RUN | 1.079495 | 3.261140 | 3.649310 | 0.004858 | 0.004936 | 0.004417 |
| extended_p_square_quantile.test | RUN | 1.403062 | 5.131887 | 5.208739 | 0.008578 | 0.009248 | 0.008306 |
| external_accumulator.test | RUN | 0.913206 | 2.639209 | 3.163966 | 0.003598 | 0.003421 | 0.003093 |
| external_weights.test | RUN | 0.799283 | 1.934906 | 2.538738 | 0.003347 | 0.003163 | 0.003028 |
| kurtosis.test | RUN | 1.249032 | 3.264905 | 4.284184 | 0.006032 | 0.004694 | 0.004445 |
| max.test | RUN | 0.765562 | 2.025336 | 2.312095 | 0.003091 | 0.003111 | 0.003270 |
| mean.test | RUN | 1.055178 | 2.722900 | 3.470557 | 0.003346 | 0.003313 | 0.003052 |
| median.test | RUN | 1.394806 | 5.381752 | 5.256747 | 0.123720 | 0.135329 | 0.109933 |
| min.test | RUN | 0.776231 | 1.952852 | 2.364765 | 0.003310 | 0.003362 | 0.003406 |
| moment.test | RUN | 0.887435 | 2.261450 | 2.769711 | 0.003339 | 0.003505 | 0.003011 |
| p_square_cumul_dist.test | RUN | 1.150604 | 3.832876 | 3.865661 | 0.994358 | 1.045743 | 0.815026 |
| p_square_quantile.test | RUN | 1.007267 | 3.311045 | 3.370878 | 0.028976 | 0.027752 | 0.025331 |
| reference.test | RUN | 0.893456 | 2.200423 | 2.837481 | 0.003232 | 0.003060 | 0.003588 |
| rolling_count.test | RUN | 0.914141 | 2.451872 | 2.862484 | 0.003242 | 0.003433 | 0.003267 |
| rolling_sum.test | RUN | 0.870569 | 2.379822 | 2.638928 | 0.003074 | 0.003486 | 0.003202 |
| rolling_mean.test | RUN | 1.312576 | 4.432724 | 4.799516 | 0.003439 | 0.003438 | 0.003455 |
| rolling_variance.test | RUN | 1.442165 | 5.133021 | 5.497237 | 0.003543 | 0.003337 | 0.003508 |
| rolling_moment.test | RUN | 1.107701 | 3.016136 | 3.544277 | 0.003786 | 0.003367 | 0.003490 |
| skewness.test | RUN | 1.207667 | 3.120353 | 4.041117 | 0.006016 | 0.005107 | 0.004148 |
| sum.test | RUN | 0.803338 | 2.136387 | 2.600836 | 0.003582 | 0.003220 | 0.003355 |
| sum_kahan.test | RUN | 0.858112 | 2.287093 | 2.761820 | 0.017145 | 0.027973 | 0.017174 |
| tail.test | RUN | 0.948723 | 3.074564 | 3.105019 | 0.003304 | 0.003386 | 0.003340 |
| tail_mean.test | RUN | 1.324914 | 3.652569 | 4.730321 | 0.021632 | 0.028062 | 0.022178 |
| tail_quantile.test | RUN | 1.053963 | 2.952613 | 3.532445 | 0.025668 | 0.029803 | 0.023861 |
| variance.test | RUN | 1.002699 | 2.752191 | 3.559139 | 0.003416 | 0.003327 | 0.003363 |
| vector.test | RUN | 1.118797 | 3.430827 | 4.298333 | 0.003281 | 0.003332 | 0.003129 |
| weighted_covariance.test | RUN | 1.532798 | 5.152101 | 6.436117 | 0.002867 | 0.003312 | 0.003007 |
| weighted_extended_p_square.test | RUN | 1.028279 | 3.046489 | 3.268077 | 0.025401 | 0.025407 | 0.019888 |
| weighted_kurtosis.test | RUN | 1.212264 | 3.084356 | 4.071490 | 0.006124 | 0.005357 | 0.004199 |
| weighted_mean.test | RUN | 1.034104 | 2.667720 | 3.530866 | 0.003076 | 0.003197 | 0.002946 |
| weighted_median.test | RUN | 1.269270 | 3.627989 | 4.650330 | 1.147846 | 1.193711 | 1.095186 |
| weighted_moment.test | RUN | 0.823639 | 1.966701 | 2.645441 | 0.003104 | 0.003374 | 0.003275 |
| weighted_p_square_cumul_dist.test | RUN | 1.012845 | 3.039140 | 3.229064 | 0.152281 | 0.178000 | 0.109754 |
| weighted_p_square_quantile.test | RUN | 0.929010 | 2.988612 | 2.742432 | 0.035883 | 0.031497 | 0.026150 |
| weighted_skewness.test | RUN | 1.119982 | 2.918437 | 3.817104 | 0.006421 | 0.005642 | 0.003849 |
| weighted_sum.test | RUN | 0.691772 | 1.720530 | 2.063959 | 0.003211 | 0.003197 | 0.002941 |
| weighted_sum_kahan.test | RUN | 0.671374 | 1.793072 | 2.216339 | 0.009342 | 0.015518 | 0.010254 |
| weighted_variance.test | RUN | 1.242442 | 3.421035 | 4.442444 | 0.004953 | 0.003618 | 0.003613 |
| valarray.test | RUN | 1.177490 | 3.288575 | 4.216351 | 0.003098 | 0.003292 | 0.003261 |
| tail_variate_means.test | RUN | 1.461759 | 5.259372 | 5.728203 | 0.003240 | 0.003033 | 0.002992 |
| pot_quantile.test | RUN | 1.844091 | 5.703330 | 6.910969 | 0.017086 | 0.013074 | 0.010898 |
| weighted_pot_quantile.test | RUN | 1.823848 | 5.620296 | 7.051837 | 0.026378 | 0.030787 | 0.025555 |
| weighted_tail_mean.test | RUN | 1.576284 | 4.376137 | 5.832371 | 0.023643 | 0.027734 | 0.019259 |
| weighted_tail_quantile.test | RUN | 1.564600 | 3.909196 | 5.340522 | 0.022932 | 0.022618 | 0.019700 |
| weighted_tail_variate_means.test | RUN | 1.744680 | 5.113462 | 6.168347 | 0.002413 | 0.002437 | 0.002328 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 1.069× | 1.069×, 1.069× | 0.970× |
| clang | 0.902× | 0.908×, 0.896× | 0.977× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1363 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43620819273).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| count.test | 1 | 0.002605s | 0.002577s | 0.002465s | byte equality observed |
| covariance.test | 1 | 0.002621s | 0.002510s | 0.002473s | byte equality observed |
| droppable.test | 1 | 0.002622s | 0.002519s | 0.002515s | byte equality observed |
| error_of.test | 1 | 0.002534s | 0.002443s | 0.002291s | byte equality observed |
| extended_p_square.test | 4 | 0.003635s | 0.003695s | 0.003412s | byte equality observed |
| extended_p_square_quantile.test | 3 | 0.006949s | 0.007512s | 0.006774s | byte equality observed |
| external_accumulator.test | 5 | 0.002191s | 0.002156s | 0.002060s | byte equality observed |
| external_weights.test | 6 | 0.002045s | 0.001924s | 0.001967s | byte equality observed |
| kurtosis.test | 4 | 0.004801s | 0.003575s | 0.002915s | byte equality observed |
| max.test | 7 | 0.002083s | 0.002024s | 0.002058s | byte equality observed |
| mean.test | 7 | 0.002163s | 0.002079s | 0.002099s | byte equality observed |
| median.test | 1 | 0.117219s | 0.125741s | 0.111296s | byte equality observed |
| min.test | 5 | 0.002130s | 0.002087s | 0.002092s | byte equality observed |
| moment.test | 6 | 0.002133s | 0.002074s | 0.002061s | byte equality observed |
| p_square_cumul_dist.test | 1 | 0.857082s | 0.955561s | 0.753510s | byte equality observed |
| p_square_quantile.test | 1 | 0.030262s | 0.028429s | 0.024014s | byte equality observed |
| pot_quantile.test | 2 | 0.015237s | 0.011534s | 0.009692s | byte equality observed |
| reference.test | 7 | 0.002260s | 0.002198s | 0.002103s | byte equality observed |
| rolling_count.test | 7 | 0.002193s | 0.002101s | 0.002080s | byte equality observed |
| rolling_mean.test | 7 | 0.002250s | 0.002252s | 0.002174s | byte equality observed |
| rolling_moment.test | 8 | 0.002248s | 0.002173s | 0.002141s | byte equality observed |
| rolling_sum.test | 7 | 0.002152s | 0.002025s | 0.002063s | byte equality observed |
| rolling_variance.test | 6 | 0.002250s | 0.002232s | 0.002151s | byte equality observed |
| skewness.test | 4 | 0.004877s | 0.003637s | 0.003149s | byte equality observed |
| sum.test | 6 | 0.002145s | 0.002025s | 0.002044s | byte equality observed |
| sum_kahan.test | 1 | 0.015713s | 0.026539s | 0.015773s | byte equality observed |
| tail.test | 8 | 0.002154s | 0.002113s | 0.002032s | byte equality observed |
| tail_mean.test | 1 | 0.019667s | 0.023148s | 0.021230s | byte equality observed |
| tail_quantile.test | 1 | 0.024522s | 0.028297s | 0.023214s | byte equality observed |
| tail_variate_means.test | 8 | 0.002035s | 0.002046s | 0.001981s | byte equality observed |
| valarray.test | 9 | 0.002027s | 0.002012s | 0.001944s | byte equality observed |
| variance.test | 6 | 0.002146s | 0.002050s | 0.002042s | byte equality observed |
| vector.test | 9 | 0.002044s | 0.001974s | 0.001937s | byte equality observed |
| weighted_covariance.test | 9 | 0.002006s | 0.002012s | 0.001938s | byte equality observed |
| weighted_extended_p_square.test | 1 | 0.023727s | 0.023078s | 0.018765s | byte equality observed |
| weighted_kurtosis.test | 4 | 0.005238s | 0.004282s | 0.002937s | byte equality observed |
| weighted_mean.test | 9 | 0.002005s | 0.001978s | 0.001896s | byte equality observed |
| weighted_median.test | 1 | 1.079841s | 1.119850s | 1.008925s | byte equality observed |
| weighted_moment.test | 7 | 0.001997s | 0.001958s | 0.001945s | byte equality observed |
| weighted_p_square_cumul_dist.test | 1 | 0.148864s | 0.177648s | 0.116822s | byte equality observed |
| weighted_p_square_quantile.test | 1 | 0.035868s | 0.033197s | 0.025676s | byte equality observed |
| weighted_pot_quantile.test | 1 | 0.030212s | 0.027867s | 0.023862s | byte equality observed |
| weighted_skewness.test | 4 | 0.005437s | 0.004684s | 0.003120s | byte equality observed |
| weighted_sum.test | 8 | 0.002010s | 0.002024s | 0.001902s | byte equality observed |
| weighted_sum_kahan.test | 2 | 0.008795s | 0.014079s | 0.008591s | byte equality observed |
| weighted_tail_mean.test | 1 | 0.021476s | 0.023032s | 0.021405s | byte equality observed |
| weighted_tail_quantile.test | 1 | 0.024888s | 0.026103s | 0.022416s | byte equality observed |
| weighted_tail_variate_means.test | 5 | 0.002103s | 0.002075s | 0.002127s | byte equality observed |
| weighted_variance.test | 7 | 0.002533s | 0.002387s | 0.002127s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43620819273).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
