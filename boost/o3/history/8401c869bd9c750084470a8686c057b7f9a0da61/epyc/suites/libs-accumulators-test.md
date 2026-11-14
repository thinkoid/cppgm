# libs/accumulators/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| count.test | RUN | 0.726402 | 1.982794 | 2.372368 | 0.003290 | 0.003206 | 0.003272 |
| covariance.test | RUN | 1.419302 | 5.058613 | 6.012120 | 0.003460 | 0.003238 | 0.003266 |
| droppable.test | RUN | 0.884929 | 2.749123 | 3.175291 | 0.003277 | 0.003539 | 0.003365 |
| error_of.test | RUN | 0.982537 | 2.616390 | 3.427954 | 0.003123 | 0.003022 | 0.003010 |
| extended_p_square.test | RUN | 1.012732 | 3.396891 | 3.613146 | 0.004973 | 0.004946 | 0.004443 |
| extended_p_square_quantile.test | RUN | 1.335388 | 5.189561 | 4.962409 | 0.008249 | 0.009177 | 0.007965 |
| external_accumulator.test | RUN | 0.914883 | 2.564206 | 3.122756 | 0.002658 | 0.003279 | 0.003301 |
| external_weights.test | RUN | 0.801449 | 2.030477 | 2.477355 | 0.003034 | 0.002833 | 0.003055 |
| kurtosis.test | RUN | 1.207015 | 3.188489 | 4.074916 | 0.005934 | 0.004960 | 0.004306 |
| max.test | RUN | 0.722423 | 1.942363 | 2.339745 | 0.003262 | 0.003308 | 0.003366 |
| mean.test | RUN | 0.966504 | 2.741661 | 3.385756 | 0.003226 | 0.003195 | 0.003333 |
| median.test | RUN | 1.364482 | 5.330760 | 5.074921 | 0.123834 | 0.145006 | 0.113436 |
| min.test | RUN | 0.733075 | 2.017503 | 2.282624 | 0.003135 | 0.003377 | 0.002952 |
| moment.test | RUN | 0.856071 | 2.236396 | 2.733268 | 0.003371 | 0.003441 | 0.003089 |
| p_square_cumul_dist.test | RUN | 1.068242 | 3.795474 | 3.818111 | 0.985476 | 1.044040 | 0.808607 |
| p_square_quantile.test | RUN | 0.976434 | 3.324825 | 3.224701 | 0.029717 | 0.027926 | 0.024578 |
| reference.test | RUN | 0.839147 | 2.210671 | 2.771571 | 0.003362 | 0.002989 | 0.002652 |
| rolling_count.test | RUN | 0.871859 | 2.455285 | 2.692819 | 0.003201 | 0.003441 | 0.003040 |
| rolling_sum.test | RUN | 0.889497 | 2.385654 | 2.828261 | 0.003395 | 0.003449 | 0.003582 |
| rolling_mean.test | RUN | 1.249170 | 4.478172 | 4.659013 | 0.003358 | 0.003239 | 0.003405 |
| rolling_variance.test | RUN | 1.382705 | 5.142670 | 5.309901 | 0.003425 | 0.003547 | 0.003496 |
| rolling_moment.test | RUN | 1.039498 | 3.054199 | 3.517645 | 0.003329 | 0.003411 | 0.003540 |
| skewness.test | RUN | 1.134161 | 3.065677 | 3.958317 | 0.005921 | 0.003930 | 0.004374 |
| sum.test | RUN | 0.774566 | 2.123035 | 2.569538 | 0.003428 | 0.003123 | 0.003242 |
| sum_kahan.test | RUN | 0.827633 | 2.264793 | 2.717296 | 0.016957 | 0.027619 | 0.016698 |
| tail.test | RUN | 0.915646 | 3.121622 | 3.084884 | 0.003284 | 0.003452 | 0.003364 |
| tail_mean.test | RUN | 1.248474 | 3.628229 | 4.466316 | 0.021285 | 0.025924 | 0.022243 |
| tail_quantile.test | RUN | 1.045595 | 2.998128 | 3.438583 | 0.025513 | 0.030996 | 0.024069 |
| variance.test | RUN | 0.969399 | 2.741007 | 3.320268 | 0.003350 | 0.002956 | 0.003283 |
| vector.test | RUN | 1.064046 | 3.321409 | 4.058453 | 0.003088 | 0.003187 | 0.002983 |
| weighted_covariance.test | RUN | 1.408198 | 5.193530 | 6.167673 | 0.003202 | 0.003303 | 0.002911 |
| weighted_extended_p_square.test | RUN | 0.983106 | 2.974567 | 3.183687 | 0.025001 | 0.025432 | 0.019924 |
| weighted_kurtosis.test | RUN | 1.122139 | 3.019213 | 3.886749 | 0.006168 | 0.005070 | 0.004260 |
| weighted_mean.test | RUN | 0.963902 | 2.669670 | 3.351358 | 0.002829 | 0.002966 | 0.003174 |
| weighted_median.test | RUN | 1.240787 | 3.648324 | 4.370111 | 1.150545 | 1.183119 | 1.097648 |
| weighted_moment.test | RUN | 0.785913 | 1.992588 | 2.577925 | 0.002842 | 0.003037 | 0.003289 |
| weighted_p_square_cumul_dist.test | RUN | 0.954410 | 3.063638 | 3.134506 | 0.156564 | 0.136810 | 0.110252 |
| weighted_p_square_quantile.test | RUN | 0.908387 | 2.912186 | 2.656545 | 0.035776 | 0.031306 | 0.026244 |
| weighted_skewness.test | RUN | 1.095628 | 2.794841 | 3.705068 | 0.005777 | 0.005257 | 0.003828 |
| weighted_sum.test | RUN | 0.659421 | 1.742014 | 2.013743 | 0.003082 | 0.002825 | 0.002815 |
| weighted_sum_kahan.test | RUN | 0.661042 | 1.838161 | 2.143924 | 0.009610 | 0.015014 | 0.010065 |
| weighted_variance.test | RUN | 1.234643 | 3.301365 | 4.281670 | 0.003470 | 0.003340 | 0.003301 |
| valarray.test | RUN | 1.107836 | 3.115469 | 3.929452 | 0.003309 | 0.002964 | 0.002991 |
| tail_variate_means.test | RUN | 1.415688 | 4.935007 | 5.441792 | 0.003131 | 0.003219 | 0.003049 |
| pot_quantile.test | RUN | 1.731986 | 5.512242 | 6.553937 | 0.016479 | 0.012226 | 0.010744 |
| weighted_pot_quantile.test | RUN | 1.765209 | 5.466219 | 6.690602 | 0.030471 | 0.031233 | 0.025918 |
| weighted_tail_mean.test | RUN | 1.542885 | 4.273926 | 5.695986 | 0.023425 | 0.026044 | 0.022888 |
| weighted_tail_quantile.test | RUN | 1.554570 | 4.033134 | 5.147922 | 0.022916 | 0.022580 | 0.019326 |
| weighted_tail_variate_means.test | RUN | 1.755220 | 4.539461 | 5.803316 | 0.002333 | 0.002263 | 0.002141 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 1.087× | 1.092×, 1.082× | 1.015× |
| clang | 0.894× | 0.895×, 0.893× | 1.002× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1363 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43638391827).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| count.test | 1 | 0.002685s | 0.002570s | 0.002389s | byte equality observed |
| covariance.test | 1 | 0.002661s | 0.002602s | 0.002514s | byte equality observed |
| droppable.test | 1 | 0.002630s | 0.002632s | 0.002422s | byte equality observed |
| error_of.test | 1 | 0.002592s | 0.002495s | 0.002308s | byte equality observed |
| extended_p_square.test | 5 | 0.003631s | 0.003724s | 0.003477s | byte equality observed |
| extended_p_square_quantile.test | 3 | 0.007238s | 0.007948s | 0.006529s | byte equality observed |
| external_accumulator.test | 6 | 0.002182s | 0.002096s | 0.002081s | byte equality observed |
| external_weights.test | 6 | 0.002070s | 0.001988s | 0.001984s | byte equality observed |
| kurtosis.test | 4 | 0.004817s | 0.003826s | 0.003037s | byte equality observed |
| max.test | 5 | 0.002129s | 0.002103s | 0.002078s | byte equality observed |
| mean.test | 8 | 0.002175s | 0.002113s | 0.002119s | byte equality observed |
| median.test | 1 | 0.118718s | 0.132699s | 0.112134s | byte equality observed |
| min.test | 8 | 0.002151s | 0.002094s | 0.002046s | byte equality observed |
| moment.test | 5 | 0.002112s | 0.002094s | 0.002092s | byte equality observed |
| p_square_cumul_dist.test | 1 | 0.868947s | 1.021680s | 0.769142s | byte equality observed |
| p_square_quantile.test | 1 | 0.028768s | 0.026887s | 0.024020s | byte equality observed |
| pot_quantile.test | 2 | 0.015176s | 0.011496s | 0.009712s | byte equality observed |
| reference.test | 9 | 0.002219s | 0.002112s | 0.002116s | byte equality observed |
| rolling_count.test | 9 | 0.002173s | 0.002097s | 0.002078s | byte equality observed |
| rolling_mean.test | 8 | 0.002238s | 0.002175s | 0.002161s | byte equality observed |
| rolling_moment.test | 9 | 0.002254s | 0.002194s | 0.002161s | byte equality observed |
| rolling_sum.test | 8 | 0.002124s | 0.002065s | 0.002071s | byte equality observed |
| rolling_variance.test | 6 | 0.002262s | 0.002213s | 0.002197s | byte equality observed |
| skewness.test | 4 | 0.004831s | 0.003832s | 0.003161s | byte equality observed |
| sum.test | 9 | 0.002103s | 0.002024s | 0.002022s | byte equality observed |
| sum_kahan.test | 1 | 0.015766s | 0.026333s | 0.015766s | byte equality observed |
| tail.test | 9 | 0.002161s | 0.002041s | 0.002078s | byte equality observed |
| tail_mean.test | 1 | 0.020175s | 0.025249s | 0.021285s | byte equality observed |
| tail_quantile.test | 1 | 0.024266s | 0.028181s | 0.022729s | byte equality observed |
| tail_variate_means.test | 8 | 0.002053s | 0.001980s | 0.002085s | byte equality observed |
| valarray.test | 8 | 0.002011s | 0.002020s | 0.002023s | byte equality observed |
| variance.test | 8 | 0.002156s | 0.002135s | 0.002102s | byte equality observed |
| vector.test | 9 | 0.002030s | 0.001996s | 0.001982s | byte equality observed |
| weighted_covariance.test | 9 | 0.002052s | 0.001973s | 0.001940s | byte equality observed |
| weighted_extended_p_square.test | 1 | 0.025113s | 0.023276s | 0.020753s | byte equality observed |
| weighted_kurtosis.test | 4 | 0.005307s | 0.004309s | 0.002975s | byte equality observed |
| weighted_mean.test | 9 | 0.002041s | 0.001966s | 0.001979s | byte equality observed |
| weighted_median.test | 1 | 1.084194s | 1.133427s | 1.010770s | byte equality observed |
| weighted_moment.test | 9 | 0.002008s | 0.001924s | 0.001998s | byte equality observed |
| weighted_p_square_cumul_dist.test | 1 | 0.149065s | 0.138931s | 0.110580s | byte equality observed |
| weighted_p_square_quantile.test | 1 | 0.035840s | 0.033655s | 0.025807s | byte equality observed |
| weighted_pot_quantile.test | 1 | 0.030167s | 0.027728s | 0.024074s | byte equality observed |
| weighted_skewness.test | 4 | 0.005542s | 0.004498s | 0.003304s | byte equality observed |
| weighted_sum.test | 9 | 0.002059s | 0.001995s | 0.001996s | byte equality observed |
| weighted_sum_kahan.test | 2 | 0.008896s | 0.014179s | 0.008774s | byte equality observed |
| weighted_tail_mean.test | 1 | 0.021608s | 0.024149s | 0.021030s | byte equality observed |
| weighted_tail_quantile.test | 1 | 0.025462s | 0.028027s | 0.022689s | byte equality observed |
| weighted_tail_variate_means.test | 9 | 0.002153s | 0.002047s | 0.002090s | byte equality observed |
| weighted_variance.test | 4 | 0.002624s | 0.002404s | 0.002187s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43638391827).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
