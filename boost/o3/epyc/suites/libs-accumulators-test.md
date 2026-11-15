# libs/accumulators/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| count.test | RUN | 0.542954 | 1.655080 | 1.640913 | 0.002898 | 0.003221 | 0.002709 |
| covariance.test | RUN | 1.072502 | 4.394122 | 4.352664 | 0.002871 | 0.003216 | 0.002994 |
| droppable.test | RUN | 0.667930 | 2.243878 | 2.213176 | 0.002858 | 0.003169 | 0.004476 |
| error_of.test | RUN | 0.734557 | 2.186841 | 2.388893 | 0.002525 | 0.003118 | 0.002692 |
| extended_p_square.test | RUN | 0.774062 | 2.793251 | 2.554014 | 0.003945 | 0.004536 | 0.003811 |
| extended_p_square_quantile.test | RUN | 0.989085 | 4.507530 | 3.562821 | 0.006216 | 0.007971 | 0.006039 |
| external_accumulator.test | RUN | 0.639896 | 2.116110 | 2.203429 | 0.002786 | 0.003120 | 0.002780 |
| external_weights.test | RUN | 0.571830 | 1.669028 | 1.649405 | 0.002758 | 0.003028 | 0.002564 |
| kurtosis.test | RUN | 0.908958 | 2.727714 | 2.802916 | 0.003402 | 0.004360 | 0.003524 |
| max.test | RUN | 0.576725 | 1.608066 | 1.552303 | 0.002939 | 0.002738 | 0.002686 |
| mean.test | RUN | 0.767380 | 2.317533 | 2.265804 | 0.002971 | 0.003159 | 0.002311 |
| median.test | RUN | 1.061942 | 4.719535 | 3.501979 | 0.085196 | 0.098250 | 0.084249 |
| min.test | RUN | 0.521391 | 1.629989 | 1.584137 | 0.002148 | 0.002981 | 0.002517 |
| moment.test | RUN | 0.627015 | 1.875196 | 1.905065 | 0.002752 | 0.003164 | 0.002705 |
| p_square_cumul_dist.test | RUN | 0.823401 | 3.249331 | 2.578124 | 0.606787 | 0.773943 | 0.618080 |
| p_square_quantile.test | RUN | 0.715306 | 2.861604 | 2.181669 | 0.020173 | 0.021391 | 0.018748 |
| reference.test | RUN | 0.624544 | 1.950087 | 1.810929 | 0.002904 | 0.003090 | 0.005036 |
| rolling_count.test | RUN | 0.636278 | 1.993386 | 1.875666 | 0.002540 | 0.002816 | 0.002674 |
| rolling_sum.test | RUN | 0.620627 | 2.026839 | 1.834868 | 0.003027 | 0.003173 | 0.002686 |
| rolling_mean.test | RUN | 0.898109 | 3.663462 | 3.129512 | 0.002769 | 0.003268 | 0.002988 |
| rolling_variance.test | RUN | 1.010745 | 4.318142 | 3.545184 | 0.002338 | 0.003325 | 0.002614 |
| rolling_moment.test | RUN | 0.769960 | 2.509850 | 2.341827 | 0.002861 | 0.003147 | 0.002949 |
| skewness.test | RUN | 0.821513 | 2.542113 | 2.614215 | 0.003498 | 0.004913 | 0.003158 |
| sum.test | RUN | 0.567214 | 1.770365 | 1.702434 | 0.002255 | 0.003142 | 0.002726 |
| sum_kahan.test | RUN | 0.605489 | 1.920446 | 1.747876 | 0.011203 | 0.020991 | 0.010142 |
| tail.test | RUN | 0.647891 | 2.611732 | 1.990466 | 0.002432 | 0.003169 | 0.002772 |
| tail_mean.test | RUN | 0.918888 | 3.028654 | 2.985377 | 0.016375 | 0.022200 | 0.017654 |
| tail_quantile.test | RUN | 0.750446 | 2.474287 | 2.289765 | 0.019212 | 0.025581 | 0.020506 |
| variance.test | RUN | 0.709266 | 2.227216 | 2.234912 | 0.002682 | 0.003400 | 0.003001 |
| vector.test | RUN | 0.759940 | 2.751537 | 2.855662 | 0.002572 | 0.003155 | 0.002813 |
| weighted_covariance.test | RUN | 1.039765 | 4.333414 | 4.427510 | 0.002681 | 0.002973 | 0.002478 |
| weighted_extended_p_square.test | RUN | 0.720609 | 2.536192 | 2.231791 | 0.015924 | 0.019821 | 0.016046 |
| weighted_kurtosis.test | RUN | 0.842333 | 2.515942 | 2.794248 | 0.003314 | 0.004965 | 0.003540 |
| weighted_mean.test | RUN | 0.702581 | 2.191411 | 2.411042 | 0.002459 | 0.002933 | 0.002613 |
| weighted_median.test | RUN | 0.926779 | 3.106605 | 3.124404 | 0.825691 | 0.950966 | 0.881531 |
| weighted_moment.test | RUN | 0.562698 | 1.688485 | 1.746970 | 0.002541 | 0.003067 | 0.002626 |
| weighted_p_square_cumul_dist.test | RUN | 0.718001 | 2.551281 | 2.182561 | 0.081214 | 0.128860 | 0.084694 |
| weighted_p_square_quantile.test | RUN | 0.675840 | 2.485384 | 1.886126 | 0.020206 | 0.025137 | 0.020250 |
| weighted_skewness.test | RUN | 0.799612 | 2.402303 | 2.567132 | 0.003022 | 0.005043 | 0.002974 |
| weighted_sum.test | RUN | 0.485927 | 1.384011 | 1.407805 | 0.002214 | 0.002903 | 0.002486 |
| weighted_sum_kahan.test | RUN | 0.472794 | 1.502590 | 1.488885 | 0.006736 | 0.012152 | 0.006387 |
| weighted_variance.test | RUN | 0.900476 | 2.803688 | 2.950866 | 0.002666 | 0.003328 | 0.002755 |
| valarray.test | RUN | 0.832707 | 2.669112 | 2.790954 | 0.002776 | 0.003084 | 0.002913 |
| tail_variate_means.test | RUN | 1.060671 | 4.388542 | 3.966162 | 0.002583 | 0.003017 | 0.002684 |
| pot_quantile.test | RUN | 1.308054 | 4.826669 | 4.683017 | 0.008737 | 0.010395 | 0.008819 |
| weighted_pot_quantile.test | RUN | 1.320490 | 4.718400 | 4.731678 | 0.017440 | 0.024880 | 0.021128 |
| weighted_tail_mean.test | RUN | 1.157209 | 3.703128 | 3.888936 | 0.017686 | 0.021531 | 0.015822 |
| weighted_tail_quantile.test | RUN | 1.140406 | 3.438407 | 3.616246 | 0.018245 | 0.018254 | 0.015525 |
| weighted_tail_variate_means.test | RUN | 1.306166 | 3.984318 | 4.195003 | 0.002034 | 0.002160 | 0.002088 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 1.141× | 1.138×, 1.144× | 1.005× |
| clang | 1.003× | 0.993×, 1.012× | 1.029× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1364 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43666517673).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| count.test | 1 | 0.002212s | 0.002197s | 0.002253s | byte equality observed |
| covariance.test | 1 | 0.002273s | 0.002232s | 0.002309s | byte equality observed |
| droppable.test | 1 | 0.002228s | 0.002156s | 0.002177s | byte equality observed |
| error_of.test | 1 | 0.002166s | 0.001967s | 0.002182s | byte equality observed |
| extended_p_square.test | 6 | 0.002808s | 0.002888s | 0.002814s | byte equality observed |
| extended_p_square_quantile.test | 4 | 0.005067s | 0.005525s | 0.004970s | byte equality observed |
| external_accumulator.test | 8 | 0.001806s | 0.001763s | 0.001743s | byte equality observed |
| external_weights.test | 7 | 0.001699s | 0.001667s | 0.001655s | byte equality observed |
| kurtosis.test | 5 | 0.002405s | 0.003101s | 0.002383s | byte equality observed |
| max.test | 8 | 0.001771s | 0.001723s | 0.001719s | byte equality observed |
| mean.test | 6 | 0.001785s | 0.001732s | 0.001749s | byte equality observed |
| median.test | 1 | 0.085024s | 0.092660s | 0.083504s | byte equality observed |
| min.test | 8 | 0.001763s | 0.001691s | 0.001758s | byte equality observed |
| moment.test | 7 | 0.001789s | 0.001732s | 0.001764s | byte equality observed |
| p_square_cumul_dist.test | 1 | 0.579835s | 0.688065s | 0.585140s | byte equality observed |
| p_square_quantile.test | 1 | 0.019435s | 0.020125s | 0.018275s | byte equality observed |
| pot_quantile.test | 3 | 0.007771s | 0.009025s | 0.007380s | byte equality observed |
| reference.test | 8 | 0.001793s | 0.001747s | 0.001746s | byte equality observed |
| rolling_count.test | 8 | 0.001813s | 0.001713s | 0.001724s | byte equality observed |
| rolling_mean.test | 9 | 0.001822s | 0.001825s | 0.001811s | byte equality observed |
| rolling_moment.test | 7 | 0.001847s | 0.001789s | 0.001799s | byte equality observed |
| rolling_sum.test | 8 | 0.001778s | 0.001723s | 0.001798s | byte equality observed |
| rolling_variance.test | 8 | 0.001850s | 0.001792s | 0.001859s | byte equality observed |
| skewness.test | 6 | 0.002449s | 0.003170s | 0.002545s | byte equality observed |
| sum.test | 9 | 0.001774s | 0.001745s | 0.001779s | byte equality observed |
| sum_kahan.test | 1 | 0.010656s | 0.018994s | 0.009648s | byte equality observed |
| tail.test | 7 | 0.001781s | 0.001734s | 0.001778s | byte equality observed |
| tail_mean.test | 2 | 0.015648s | 0.018604s | 0.015739s | byte equality observed |
| tail_quantile.test | 1 | 0.018870s | 0.022568s | 0.018091s | byte equality observed |
| tail_variate_means.test | 9 | 0.001718s | 0.001683s | 0.001685s | byte equality observed |
| valarray.test | 9 | 0.001684s | 0.001674s | 0.001601s | byte equality observed |
| variance.test | 9 | 0.001782s | 0.001751s | 0.001680s | byte equality observed |
| vector.test | 10 | 0.001692s | 0.001659s | 0.001626s | byte equality observed |
| weighted_covariance.test | 8 | 0.001684s | 0.001664s | 0.001648s | byte equality observed |
| weighted_extended_p_square.test | 2 | 0.014264s | 0.017739s | 0.013914s | byte equality observed |
| weighted_kurtosis.test | 6 | 0.002477s | 0.003466s | 0.002403s | byte equality observed |
| weighted_mean.test | 10 | 0.001667s | 0.001640s | 0.001679s | byte equality observed |
| weighted_median.test | 1 | 0.776731s | 0.834681s | 0.788263s | byte equality observed |
| weighted_moment.test | 6 | 0.001687s | 0.001649s | 0.001598s | byte equality observed |
| weighted_p_square_cumul_dist.test | 1 | 0.087406s | 0.121927s | 0.087118s | byte equality observed |
| weighted_p_square_quantile.test | 1 | 0.019630s | 0.024144s | 0.019962s | byte equality observed |
| weighted_pot_quantile.test | 1 | 0.019672s | 0.021164s | 0.019710s | byte equality observed |
| weighted_skewness.test | 5 | 0.002501s | 0.003676s | 0.002514s | byte equality observed |
| weighted_sum.test | 8 | 0.001676s | 0.001659s | 0.001661s | byte equality observed |
| weighted_sum_kahan.test | 2 | 0.006229s | 0.010387s | 0.005419s | byte equality observed |
| weighted_tail_mean.test | 2 | 0.017095s | 0.018800s | 0.017098s | byte equality observed |
| weighted_tail_quantile.test | 1 | 0.018187s | 0.020626s | 0.017992s | byte equality observed |
| weighted_tail_variate_means.test | 7 | 0.001738s | 0.001750s | 0.001681s | byte equality observed |
| weighted_variance.test | 8 | 0.001829s | 0.001970s | 0.001710s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43666517673).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
