# libs/accumulators/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| count.test | RUN | 0.581884 | 1.712135 | 1.896888 | 0.002406 | 0.002160 | 0.002292 |
| covariance.test | RUN | 1.154857 | 4.442892 | 4.887803 | 0.002462 | 0.002332 | 0.002331 |
| droppable.test | RUN | 0.734093 | 2.311156 | 2.591754 | 0.002265 | 0.002324 | 0.002277 |
| error_of.test | RUN | 0.793260 | 2.217969 | 2.828624 | 0.002119 | 0.001798 | 0.002087 |
| extended_p_square.test | RUN | 0.867923 | 2.929583 | 2.962475 | 0.003586 | 0.003762 | 0.003354 |
| extended_p_square_quantile.test | RUN | 1.116622 | 4.619761 | 4.133594 | 0.006956 | 0.007837 | 0.006676 |
| external_accumulator.test | RUN | 0.711747 | 2.179102 | 2.513282 | 0.002065 | 0.002389 | 0.002267 |
| external_weights.test | RUN | 0.624388 | 1.732977 | 1.984668 | 0.002138 | 0.002477 | 0.002016 |
| kurtosis.test | RUN | 0.934890 | 2.844428 | 3.341295 | 0.003071 | 0.003899 | 0.003016 |
| max.test | RUN | 0.587212 | 1.671187 | 1.945828 | 0.002191 | 0.002221 | 0.002307 |
| mean.test | RUN | 0.766645 | 2.416218 | 2.827102 | 0.002410 | 0.002287 | 0.002098 |
| median.test | RUN | 1.095014 | 4.785964 | 4.237139 | 0.102486 | 0.122668 | 0.101197 |
| min.test | RUN | 0.579451 | 1.704186 | 1.844100 | 0.002119 | 0.002158 | 0.002220 |
| moment.test | RUN | 0.670405 | 1.912900 | 2.225705 | 0.002184 | 0.002400 | 0.002152 |
| p_square_cumul_dist.test | RUN | 0.878956 | 3.352948 | 3.214413 | 0.725290 | 0.907004 | 0.706012 |
| p_square_quantile.test | RUN | 0.777613 | 2.969521 | 2.690965 | 0.021481 | 0.024450 | 0.020725 |
| reference.test | RUN | 0.648820 | 1.896429 | 2.245592 | 0.001988 | 0.002079 | 0.002121 |
| rolling_count.test | RUN | 0.691768 | 2.045608 | 2.179862 | 0.002324 | 0.002355 | 0.002014 |
| rolling_sum.test | RUN | 0.664010 | 2.149322 | 2.328859 | 0.002410 | 0.002216 | 0.002163 |
| rolling_mean.test | RUN | 1.014594 | 3.947994 | 3.819506 | 0.002374 | 0.002327 | 0.002497 |
| rolling_variance.test | RUN | 1.153001 | 4.546444 | 4.371583 | 0.002282 | 0.002140 | 0.002408 |
| rolling_moment.test | RUN | 0.840954 | 2.658460 | 2.847314 | 0.002623 | 0.002134 | 0.002611 |
| skewness.test | RUN | 0.886239 | 2.682751 | 3.207406 | 0.003160 | 0.003750 | 0.002977 |
| sum.test | RUN | 0.627151 | 1.846858 | 2.119905 | 0.002319 | 0.002119 | 0.002175 |
| sum_kahan.test | RUN | 0.669359 | 1.946237 | 2.211099 | 0.010737 | 0.019222 | 0.011619 |
| tail.test | RUN | 0.717461 | 2.728965 | 2.499204 | 0.002161 | 0.002217 | 0.002187 |
| tail_mean.test | RUN | 1.006392 | 3.146314 | 3.645755 | 0.018819 | 0.021255 | 0.019348 |
| tail_quantile.test | RUN | 0.823509 | 2.664022 | 2.808578 | 0.021329 | 0.026647 | 0.021286 |
| variance.test | RUN | 0.783021 | 2.377378 | 2.808806 | 0.002198 | 0.002252 | 0.002260 |
| vector.test | RUN | 0.843924 | 2.886976 | 3.396991 | 0.002038 | 0.002144 | 0.002128 |
| weighted_covariance.test | RUN | 1.128054 | 4.581663 | 5.037922 | 0.002091 | 0.002324 | 0.002025 |
| weighted_extended_p_square.test | RUN | 0.775918 | 2.642232 | 2.573574 | 0.018579 | 0.022039 | 0.017508 |
| weighted_kurtosis.test | RUN | 0.900846 | 2.639231 | 3.175760 | 0.003081 | 0.004225 | 0.003088 |
| weighted_mean.test | RUN | 0.770207 | 2.351748 | 2.771466 | 0.002146 | 0.002019 | 0.002088 |
| weighted_median.test | RUN | 0.988194 | 3.207114 | 3.648468 | 0.976275 | 1.062682 | 0.980905 |
| weighted_moment.test | RUN | 0.622174 | 1.753598 | 2.056240 | 0.002015 | 0.002134 | 0.002104 |
| weighted_p_square_cumul_dist.test | RUN | 0.765669 | 2.713130 | 2.359389 | 0.098427 | 0.144913 | 0.102905 |
| weighted_p_square_quantile.test | RUN | 0.714405 | 2.510299 | 2.344213 | 0.021971 | 0.026830 | 0.022508 |
| weighted_skewness.test | RUN | 0.753993 | 2.540685 | 2.977446 | 0.003095 | 0.004414 | 0.003103 |
| weighted_sum.test | RUN | 0.522758 | 1.484417 | 1.635739 | 0.002061 | 0.002092 | 0.002070 |
| weighted_sum_kahan.test | RUN | 0.565410 | 1.534426 | 1.752116 | 0.006626 | 0.010661 | 0.006506 |
| weighted_variance.test | RUN | 0.916401 | 2.865283 | 3.440601 | 0.002312 | 0.002683 | 0.002404 |
| valarray.test | RUN | 0.877536 | 2.702372 | 3.220315 | 0.001989 | 0.002132 | 0.002001 |
| tail_variate_means.test | RUN | 1.136214 | 4.424446 | 4.523166 | 0.001969 | 0.002282 | 0.002018 |
| pot_quantile.test | RUN | 1.347441 | 4.905022 | 5.348905 | 0.009155 | 0.011177 | 0.008129 |
| weighted_pot_quantile.test | RUN | 1.298468 | 4.593122 | 5.418744 | 0.016927 | 0.019021 | 0.020694 |
| weighted_tail_mean.test | RUN | 1.175816 | 3.751133 | 4.413921 | 0.019957 | 0.022544 | 0.015745 |
| weighted_tail_quantile.test | RUN | 1.147765 | 3.251533 | 4.035882 | 0.016044 | 0.018164 | 0.015650 |
| weighted_tail_variate_means.test | RUN | 1.336926 | 4.040532 | 4.832979 | 0.001537 | 0.001514 | 0.001574 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 1.168× | 1.166×, 1.169× | 0.999× |
| clang | 0.992× | 0.986×, 0.998× | 0.997× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1364 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44481767416).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| count.test | 1 | 0.001874s | 0.001822s | 0.001772s | byte equality observed |
| covariance.test | 1 | 0.001987s | 0.001878s | 0.002027s | byte equality observed |
| droppable.test | 1 | 0.001959s | 0.001798s | 0.002018s | byte equality observed |
| error_of.test | 1 | 0.001890s | 0.001890s | 0.001620s | byte equality observed |
| extended_p_square.test | 5 | 0.002901s | 0.002902s | 0.002729s | byte equality observed |
| extended_p_square_quantile.test | 3 | 0.006115s | 0.006558s | 0.005802s | byte equality observed |
| external_accumulator.test | 7 | 0.001588s | 0.001539s | 0.001539s | byte equality observed |
| external_weights.test | 8 | 0.001514s | 0.001491s | 0.001466s | byte equality observed |
| kurtosis.test | 4 | 0.002331s | 0.003114s | 0.002251s | byte equality observed |
| max.test | 5 | 0.001609s | 0.001553s | 0.001507s | byte equality observed |
| mean.test | 5 | 0.001595s | 0.001570s | 0.001548s | byte equality observed |
| median.test | 1 | 0.099906s | 0.116377s | 0.098890s | byte equality observed |
| min.test | 9 | 0.001568s | 0.001521s | 0.001508s | byte equality observed |
| moment.test | 5 | 0.001588s | 0.001528s | 0.001532s | byte equality observed |
| p_square_cumul_dist.test | 1 | 0.633149s | 0.798521s | 0.618829s | byte equality observed |
| p_square_quantile.test | 1 | 0.021595s | 0.023271s | 0.020788s | byte equality observed |
| pot_quantile.test | 2 | 0.008412s | 0.009556s | 0.008190s | byte equality observed |
| reference.test | 10 | 0.001554s | 0.001506s | 0.001494s | byte equality observed |
| rolling_count.test | 10 | 0.001584s | 0.001538s | 0.001527s | byte equality observed |
| rolling_mean.test | 10 | 0.001653s | 0.001572s | 0.001595s | byte equality observed |
| rolling_moment.test | 10 | 0.001597s | 0.001565s | 0.001575s | byte equality observed |
| rolling_sum.test | 8 | 0.001577s | 0.001523s | 0.001535s | byte equality observed |
| rolling_variance.test | 8 | 0.001643s | 0.001618s | 0.001584s | byte equality observed |
| skewness.test | 6 | 0.002289s | 0.003042s | 0.002353s | byte equality observed |
| sum.test | 9 | 0.001563s | 0.001502s | 0.001483s | byte equality observed |
| sum_kahan.test | 2 | 0.010512s | 0.017698s | 0.010517s | byte equality observed |
| tail.test | 10 | 0.001595s | 0.001475s | 0.001524s | byte equality observed |
| tail_mean.test | 2 | 0.017883s | 0.017570s | 0.018340s | byte equality observed |
| tail_quantile.test | 1 | 0.020778s | 0.022815s | 0.019801s | byte equality observed |
| tail_variate_means.test | 10 | 0.001520s | 0.001516s | 0.001558s | byte equality observed |
| valarray.test | 9 | 0.001545s | 0.001481s | 0.001467s | byte equality observed |
| variance.test | 10 | 0.001587s | 0.001549s | 0.001530s | byte equality observed |
| vector.test | 10 | 0.001529s | 0.001493s | 0.001463s | byte equality observed |
| weighted_covariance.test | 10 | 0.001523s | 0.001481s | 0.001465s | byte equality observed |
| weighted_extended_p_square.test | 1 | 0.016572s | 0.019754s | 0.015382s | byte equality observed |
| weighted_kurtosis.test | 6 | 0.002353s | 0.003575s | 0.002385s | byte equality observed |
| weighted_mean.test | 10 | 0.001500s | 0.001420s | 0.001434s | byte equality observed |
| weighted_median.test | 1 | 0.857054s | 0.924857s | 0.863355s | byte equality observed |
| weighted_moment.test | 10 | 0.001461s | 0.001419s | 0.001402s | byte equality observed |
| weighted_p_square_cumul_dist.test | 1 | 0.101574s | 0.143761s | 0.102515s | byte equality observed |
| weighted_p_square_quantile.test | 1 | 0.021579s | 0.026313s | 0.021748s | byte equality observed |
| weighted_pot_quantile.test | 1 | 0.021560s | 0.023235s | 0.020956s | byte equality observed |
| weighted_skewness.test | 6 | 0.002266s | 0.003544s | 0.002345s | byte equality observed |
| weighted_sum.test | 10 | 0.001452s | 0.001416s | 0.001400s | byte equality observed |
| weighted_sum_kahan.test | 3 | 0.005796s | 0.009298s | 0.005669s | byte equality observed |
| weighted_tail_mean.test | 2 | 0.018561s | 0.019306s | 0.018164s | byte equality observed |
| weighted_tail_quantile.test | 1 | 0.019257s | 0.021374s | 0.019002s | byte equality observed |
| weighted_tail_variate_means.test | 6 | 0.001532s | 0.001471s | 0.001458s | byte equality observed |
| weighted_variance.test | 10 | 0.001625s | 0.001780s | 0.001600s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44481767416).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
