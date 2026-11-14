# libs/accumulators/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| count.test | RUN | 0.705431 | 2.012991 | 2.319342 | 0.003378 | 0.003510 | 0.003214 |
| covariance.test | RUN | 1.354412 | 5.278027 | 5.992074 | 0.003376 | 0.003503 | 0.003271 |
| droppable.test | RUN | 0.872609 | 2.776838 | 3.139281 | 0.003230 | 0.003611 | 0.003390 |
| error_of.test | RUN | 0.991267 | 2.785825 | 3.446353 | 0.003009 | 0.003269 | 0.002933 |
| extended_p_square.test | RUN | 1.009774 | 3.399753 | 3.485482 | 0.004734 | 0.005237 | 0.004565 |
| extended_p_square_quantile.test | RUN | 1.335561 | 5.375412 | 4.967450 | 0.008599 | 0.009430 | 0.008081 |
| external_accumulator.test | RUN | 0.884435 | 2.724878 | 3.065346 | 0.003174 | 0.003564 | 0.003308 |
| external_weights.test | RUN | 0.755647 | 2.038881 | 2.458371 | 0.002902 | 0.003236 | 0.003067 |
| kurtosis.test | RUN | 1.163220 | 3.419115 | 4.085342 | 0.005814 | 0.005297 | 0.004088 |
| max.test | RUN | 0.746807 | 2.060485 | 2.332146 | 0.003193 | 0.003148 | 0.003217 |
| mean.test | RUN | 0.973807 | 2.814086 | 3.325721 | 0.003340 | 0.003680 | 0.003338 |
| median.test | RUN | 1.315668 | 5.635204 | 5.031096 | 0.123596 | 0.135201 | 0.112247 |
| min.test | RUN | 0.723942 | 2.029903 | 2.340118 | 0.002962 | 0.003506 | 0.003169 |
| moment.test | RUN | 0.813831 | 2.280392 | 2.763824 | 0.003320 | 0.003520 | 0.003191 |
| p_square_cumul_dist.test | RUN | 1.080237 | 3.919103 | 3.815363 | 0.997912 | 1.031912 | 0.812670 |
| p_square_quantile.test | RUN | 0.940664 | 3.471094 | 3.210164 | 0.029345 | 0.027565 | 0.024467 |
| reference.test | RUN | 0.831607 | 2.351955 | 2.774977 | 0.003173 | 0.003409 | 0.003436 |
| rolling_count.test | RUN | 0.833191 | 2.449286 | 2.620574 | 0.002928 | 0.003249 | 0.003338 |
| rolling_sum.test | RUN | 0.851196 | 2.532152 | 2.817824 | 0.003420 | 0.003235 | 0.003410 |
| rolling_mean.test | RUN | 1.173121 | 4.760909 | 4.508460 | 0.003337 | 0.003616 | 0.003284 |
| rolling_variance.test | RUN | 1.363763 | 5.440166 | 5.196793 | 0.003508 | 0.003464 | 0.003299 |
| rolling_moment.test | RUN | 1.036774 | 3.085259 | 3.522700 | 0.003358 | 0.003428 | 0.003544 |
| skewness.test | RUN | 1.104554 | 3.195221 | 3.837020 | 0.006798 | 0.005125 | 0.004336 |
| sum.test | RUN | 0.753972 | 2.208678 | 2.476576 | 0.003190 | 0.003554 | 0.003306 |
| sum_kahan.test | RUN | 0.832624 | 2.301791 | 2.683304 | 0.016733 | 0.028200 | 0.016634 |
| tail.test | RUN | 0.898546 | 3.284891 | 3.011125 | 0.003015 | 0.003610 | 0.003187 |
| tail_mean.test | RUN | 1.266539 | 3.781439 | 4.472677 | 0.021406 | 0.025810 | 0.021815 |
| tail_quantile.test | RUN | 1.002742 | 3.083355 | 3.476922 | 0.026442 | 0.031841 | 0.023339 |
| variance.test | RUN | 0.950326 | 2.789936 | 3.389232 | 0.003261 | 0.003409 | 0.003107 |
| vector.test | RUN | 1.062322 | 3.492814 | 4.065709 | 0.003052 | 0.003377 | 0.003066 |
| weighted_covariance.test | RUN | 1.368374 | 5.399913 | 6.109066 | 0.002870 | 0.003110 | 0.002874 |
| weighted_extended_p_square.test | RUN | 0.970078 | 3.159678 | 3.193467 | 0.024476 | 0.023772 | 0.019982 |
| weighted_kurtosis.test | RUN | 1.143074 | 3.180081 | 3.871649 | 0.006033 | 0.005497 | 0.004254 |
| weighted_mean.test | RUN | 0.967604 | 2.805647 | 3.388090 | 0.002678 | 0.003119 | 0.003097 |
| weighted_median.test | RUN | 1.210072 | 3.761250 | 4.335211 | 1.145600 | 1.174037 | 1.102037 |
| weighted_moment.test | RUN | 0.768742 | 2.091134 | 2.523763 | 0.002460 | 0.003098 | 0.003089 |
| weighted_p_square_cumul_dist.test | RUN | 0.934595 | 3.175980 | 2.763310 | 0.148764 | 0.136777 | 0.109646 |
| weighted_p_square_quantile.test | RUN | 0.877379 | 3.132812 | 2.923731 | 0.035702 | 0.030622 | 0.025666 |
| weighted_skewness.test | RUN | 1.058592 | 2.868030 | 3.726575 | 0.006014 | 0.005470 | 0.003881 |
| weighted_sum.test | RUN | 0.648236 | 1.773416 | 1.974223 | 0.002992 | 0.003058 | 0.003040 |
| weighted_sum_kahan.test | RUN | 0.624721 | 1.883776 | 2.114768 | 0.009721 | 0.015234 | 0.009525 |
| weighted_variance.test | RUN | 1.143214 | 3.528059 | 4.270878 | 0.003518 | 0.003583 | 0.003157 |
| valarray.test | RUN | 1.096295 | 3.336434 | 3.984871 | 0.003004 | 0.003455 | 0.002857 |
| tail_variate_means.test | RUN | 1.408765 | 5.170588 | 5.453286 | 0.002964 | 0.003380 | 0.002705 |
| pot_quantile.test | RUN | 1.658443 | 5.755201 | 6.559782 | 0.016214 | 0.013462 | 0.010601 |
| weighted_pot_quantile.test | RUN | 1.690870 | 5.753615 | 6.591277 | 0.026284 | 0.030977 | 0.025716 |
| weighted_tail_mean.test | RUN | 1.499633 | 4.535342 | 5.434957 | 0.023249 | 0.028337 | 0.018819 |
| weighted_tail_quantile.test | RUN | 1.529120 | 4.005342 | 5.052985 | 0.022816 | 0.022646 | 0.019250 |
| weighted_tail_variate_means.test | RUN | 1.727599 | 4.911844 | 5.710707 | 0.002284 | 0.002465 | 0.002118 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 1.071× | 1.075×, 1.067× | 0.994× |
| clang | 0.890× | 0.893×, 0.887× | 0.983× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1361 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43632677224).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| count.test | 1 | 0.002573s | 0.002410s | 0.002489s | byte equality observed |
| covariance.test | 1 | 0.002649s | 0.002420s | 0.002495s | byte equality observed |
| droppable.test | 1 | 0.002632s | 0.002378s | 0.002454s | byte equality observed |
| error_of.test | 1 | 0.002536s | 0.002442s | 0.002532s | byte equality observed |
| extended_p_square.test | 4 | 0.003685s | 0.003774s | 0.003344s | byte equality observed |
| extended_p_square_quantile.test | 3 | 0.007311s | 0.008054s | 0.006271s | byte equality observed |
| external_accumulator.test | 7 | 0.002150s | 0.002066s | 0.002075s | byte equality observed |
| external_weights.test | 6 | 0.002005s | 0.001962s | 0.001955s | byte equality observed |
| kurtosis.test | 4 | 0.004781s | 0.003753s | 0.002854s | byte equality observed |
| max.test | 6 | 0.002107s | 0.001997s | 0.002037s | byte equality observed |
| mean.test | 6 | 0.002123s | 0.002045s | 0.002028s | byte equality observed |
| median.test | 1 | 0.126412s | 0.133178s | 0.109240s | byte equality observed |
| min.test | 7 | 0.002100s | 0.001996s | 0.002043s | byte equality observed |
| moment.test | 4 | 0.002125s | 0.002036s | 0.002071s | byte equality observed |
| p_square_cumul_dist.test | 1 | 0.868379s | 0.973629s | 0.758711s | byte equality observed |
| p_square_quantile.test | 1 | 0.029007s | 0.028229s | 0.024415s | byte equality observed |
| pot_quantile.test | 2 | 0.014992s | 0.011306s | 0.009649s | byte equality observed |
| reference.test | 8 | 0.002119s | 0.002034s | 0.002055s | byte equality observed |
| rolling_count.test | 9 | 0.002113s | 0.002001s | 0.002045s | byte equality observed |
| rolling_mean.test | 8 | 0.002210s | 0.002125s | 0.002129s | byte equality observed |
| rolling_moment.test | 8 | 0.002189s | 0.002102s | 0.002106s | byte equality observed |
| rolling_sum.test | 8 | 0.002133s | 0.002006s | 0.002059s | byte equality observed |
| rolling_variance.test | 8 | 0.002228s | 0.002127s | 0.002130s | byte equality observed |
| skewness.test | 4 | 0.004733s | 0.003756s | 0.003034s | byte equality observed |
| sum.test | 6 | 0.002087s | 0.001963s | 0.002054s | byte equality observed |
| sum_kahan.test | 1 | 0.015656s | 0.026442s | 0.015442s | byte equality observed |
| tail.test | 8 | 0.002078s | 0.001945s | 0.002062s | byte equality observed |
| tail_mean.test | 1 | 0.019849s | 0.022772s | 0.020626s | byte equality observed |
| tail_quantile.test | 1 | 0.024578s | 0.028696s | 0.021923s | byte equality observed |
| tail_variate_means.test | 9 | 0.002033s | 0.001899s | 0.001958s | byte equality observed |
| valarray.test | 9 | 0.002047s | 0.001911s | 0.001941s | byte equality observed |
| variance.test | 8 | 0.002078s | 0.002026s | 0.002041s | byte equality observed |
| vector.test | 9 | 0.001998s | 0.001935s | 0.001921s | byte equality observed |
| weighted_covariance.test | 9 | 0.001998s | 0.001927s | 0.001943s | byte equality observed |
| weighted_extended_p_square.test | 1 | 0.023516s | 0.027367s | 0.018452s | byte equality observed |
| weighted_kurtosis.test | 4 | 0.005243s | 0.004245s | 0.003026s | byte equality observed |
| weighted_mean.test | 8 | 0.001991s | 0.001918s | 0.001918s | byte equality observed |
| weighted_median.test | 1 | 1.083579s | 1.117986s | 1.011122s | byte equality observed |
| weighted_moment.test | 8 | 0.001965s | 0.001882s | 0.001879s | byte equality observed |
| weighted_p_square_cumul_dist.test | 1 | 0.152822s | 0.175727s | 0.116029s | byte equality observed |
| weighted_p_square_quantile.test | 1 | 0.035892s | 0.033132s | 0.025541s | byte equality observed |
| weighted_pot_quantile.test | 1 | 0.029996s | 0.026934s | 0.023373s | byte equality observed |
| weighted_skewness.test | 4 | 0.005304s | 0.004250s | 0.003066s | byte equality observed |
| weighted_sum.test | 9 | 0.001992s | 0.001886s | 0.001885s | byte equality observed |
| weighted_sum_kahan.test | 2 | 0.008750s | 0.013915s | 0.008660s | byte equality observed |
| weighted_tail_mean.test | 1 | 0.021409s | 0.022519s | 0.020326s | byte equality observed |
| weighted_tail_quantile.test | 1 | 0.024738s | 0.025621s | 0.022187s | byte equality observed |
| weighted_tail_variate_means.test | 8 | 0.002016s | 0.001921s | 0.001976s | byte equality observed |
| weighted_variance.test | 8 | 0.002534s | 0.002281s | 0.002070s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43632677224).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
