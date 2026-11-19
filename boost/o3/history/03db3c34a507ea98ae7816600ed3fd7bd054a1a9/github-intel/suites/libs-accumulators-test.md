# libs/accumulators/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| count.test | RUN | 0.576785 | 1.695097 | 1.853395 | 0.002202 | 0.002212 | 0.002247 |
| covariance.test | RUN | 1.094977 | 4.510047 | 4.877078 | 0.002307 | 0.002195 | 0.002278 |
| droppable.test | RUN | 0.714199 | 2.340373 | 2.519192 | 0.002426 | 0.002214 | 0.001811 |
| error_of.test | RUN | 0.775683 | 2.296712 | 2.708314 | 0.002004 | 0.002106 | 0.001905 |
| extended_p_square.test | RUN | 0.841905 | 2.964271 | 2.850686 | 0.003258 | 0.003771 | 0.003425 |
| extended_p_square_quantile.test | RUN | 1.084133 | 4.651425 | 4.121848 | 0.006546 | 0.007604 | 0.006365 |
| external_accumulator.test | RUN | 0.692820 | 2.162779 | 2.490751 | 0.002135 | 0.002220 | 0.002116 |
| external_weights.test | RUN | 0.613051 | 1.722949 | 1.939107 | 0.001993 | 0.002114 | 0.001930 |
| kurtosis.test | RUN | 0.914268 | 2.824798 | 3.270059 | 0.002971 | 0.003829 | 0.002945 |
| max.test | RUN | 0.570090 | 1.683920 | 1.917822 | 0.002286 | 0.002175 | 0.002183 |
| mean.test | RUN | 0.764507 | 2.394643 | 2.740760 | 0.002122 | 0.002355 | 0.002131 |
| median.test | RUN | 1.055294 | 4.798466 | 4.196920 | 0.103628 | 0.117495 | 0.100953 |
| min.test | RUN | 0.577863 | 1.675930 | 1.843250 | 0.001829 | 0.002429 | 0.002179 |
| moment.test | RUN | 0.651318 | 1.946511 | 2.216121 | 0.002092 | 0.002322 | 0.002186 |
| p_square_cumul_dist.test | RUN | 0.871767 | 3.360103 | 3.165224 | 0.724632 | 0.900048 | 0.706329 |
| p_square_quantile.test | RUN | 0.764538 | 3.019032 | 2.618692 | 0.021543 | 0.024062 | 0.021679 |
| reference.test | RUN | 0.652298 | 1.857867 | 2.107660 | 0.002277 | 0.001969 | 0.001825 |
| rolling_count.test | RUN | 0.661571 | 2.158147 | 2.303304 | 0.001800 | 0.002351 | 0.002355 |
| rolling_sum.test | RUN | 0.679653 | 2.175526 | 2.304361 | 0.002307 | 0.002285 | 0.002062 |
| rolling_mean.test | RUN | 0.997732 | 3.848702 | 3.690422 | 0.002199 | 0.002491 | 0.002189 |
| rolling_variance.test | RUN | 1.082647 | 4.578554 | 4.283382 | 0.002409 | 0.002324 | 0.002261 |
| rolling_moment.test | RUN | 0.828787 | 2.619195 | 2.811201 | 0.002157 | 0.002220 | 0.002339 |
| skewness.test | RUN | 0.867981 | 2.668134 | 3.106049 | 0.003313 | 0.004088 | 0.003004 |
| sum.test | RUN | 0.611639 | 1.873413 | 2.009353 | 0.002317 | 0.002308 | 0.002130 |
| sum_kahan.test | RUN | 0.654960 | 1.990918 | 2.138682 | 0.011079 | 0.019045 | 0.011279 |
| tail.test | RUN | 0.721144 | 2.728726 | 2.435797 | 0.002103 | 0.002360 | 0.002068 |
| tail_mean.test | RUN | 1.017428 | 3.165778 | 3.578069 | 0.018619 | 0.023222 | 0.019390 |
| tail_quantile.test | RUN | 0.822661 | 2.639930 | 2.766925 | 0.021814 | 0.024327 | 0.019826 |
| variance.test | RUN | 0.781124 | 2.323303 | 2.695371 | 0.001634 | 0.002352 | 0.002087 |
| vector.test | RUN | 0.853446 | 2.855666 | 3.342799 | 0.002176 | 0.002210 | 0.001994 |
| weighted_covariance.test | RUN | 1.111181 | 4.473558 | 5.016595 | 0.002220 | 0.002138 | 0.002007 |
| weighted_extended_p_square.test | RUN | 0.760401 | 2.608493 | 2.487430 | 0.017590 | 0.021005 | 0.017202 |
| weighted_kurtosis.test | RUN | 0.886512 | 2.560976 | 3.149436 | 0.003000 | 0.004271 | 0.003043 |
| weighted_mean.test | RUN | 0.759372 | 2.302853 | 2.732447 | 0.001984 | 0.001999 | 0.001922 |
| weighted_median.test | RUN | 0.981253 | 3.161681 | 3.527332 | 0.971847 | 1.043147 | 0.980132 |
| weighted_moment.test | RUN | 0.614531 | 1.729470 | 1.999240 | 0.002108 | 0.002048 | 0.001988 |
| weighted_p_square_cumul_dist.test | RUN | 0.768638 | 2.663736 | 2.505135 | 0.097903 | 0.118344 | 0.095821 |
| weighted_p_square_quantile.test | RUN | 0.718371 | 2.496058 | 2.291672 | 0.021794 | 0.025918 | 0.021624 |
| weighted_skewness.test | RUN | 0.838523 | 2.459233 | 2.716791 | 0.002602 | 0.004353 | 0.002722 |
| weighted_sum.test | RUN | 0.525372 | 1.467740 | 1.628955 | 0.001996 | 0.002102 | 0.001996 |
| weighted_sum_kahan.test | RUN | 0.487521 | 1.548859 | 1.690219 | 0.006532 | 0.010617 | 0.006503 |
| weighted_variance.test | RUN | 0.948249 | 2.846155 | 3.456279 | 0.002190 | 0.002669 | 0.002124 |
| valarray.test | RUN | 0.824895 | 2.700573 | 3.230396 | 0.002178 | 0.002058 | 0.001951 |
| tail_variate_means.test | RUN | 1.119653 | 4.359706 | 4.418743 | 0.002074 | 0.002055 | 0.001988 |
| pot_quantile.test | RUN | 1.324731 | 4.835675 | 5.275461 | 0.008911 | 0.010813 | 0.008006 |
| weighted_pot_quantile.test | RUN | 1.335391 | 4.767427 | 5.305048 | 0.022854 | 0.026689 | 0.021949 |
| weighted_tail_mean.test | RUN | 1.173045 | 3.768807 | 4.434841 | 0.019462 | 0.021514 | 0.015278 |
| weighted_tail_quantile.test | RUN | 1.174332 | 3.392287 | 4.106400 | 0.015724 | 0.018016 | 0.015275 |
| weighted_tail_variate_means.test | RUN | 1.271785 | 3.813085 | 4.625799 | 0.001532 | 0.001524 | 0.001422 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 1.176× | 1.182×, 1.170× | 1.007× |
| clang | 0.987× | 0.993×, 0.980× | 0.992× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1364 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44402206984).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| count.test | 1 | 0.001883s | 0.001889s | 0.001723s | byte equality observed |
| covariance.test | 1 | 0.002077s | 0.002047s | 0.001988s | byte equality observed |
| droppable.test | 1 | 0.001887s | 0.001784s | 0.001749s | byte equality observed |
| error_of.test | 1 | 0.001897s | 0.001852s | 0.001801s | byte equality observed |
| extended_p_square.test | 6 | 0.002835s | 0.002944s | 0.002741s | byte equality observed |
| extended_p_square_quantile.test | 3 | 0.006034s | 0.006547s | 0.005640s | byte equality observed |
| external_accumulator.test | 7 | 0.001584s | 0.001525s | 0.001535s | byte equality observed |
| external_weights.test | 8 | 0.001508s | 0.001471s | 0.001468s | byte equality observed |
| kurtosis.test | 6 | 0.002223s | 0.003079s | 0.002262s | byte equality observed |
| max.test | 7 | 0.001559s | 0.001522s | 0.001513s | byte equality observed |
| mean.test | 8 | 0.001591s | 0.001543s | 0.001528s | byte equality observed |
| median.test | 1 | 0.098506s | 0.121961s | 0.099048s | byte equality observed |
| min.test | 10 | 0.001546s | 0.001520s | 0.001503s | byte equality observed |
| moment.test | 7 | 0.001578s | 0.001510s | 0.001496s | byte equality observed |
| p_square_cumul_dist.test | 1 | 0.628522s | 0.812847s | 0.617246s | byte equality observed |
| p_square_quantile.test | 1 | 0.021596s | 0.023668s | 0.020538s | byte equality observed |
| pot_quantile.test | 3 | 0.008334s | 0.009383s | 0.008035s | byte equality observed |
| reference.test | 10 | 0.001530s | 0.001500s | 0.001464s | byte equality observed |
| rolling_count.test | 10 | 0.001566s | 0.001504s | 0.001514s | byte equality observed |
| rolling_mean.test | 8 | 0.001641s | 0.001580s | 0.001579s | byte equality observed |
| rolling_moment.test | 8 | 0.001621s | 0.001534s | 0.001549s | byte equality observed |
| rolling_sum.test | 9 | 0.001572s | 0.001527s | 0.001499s | byte equality observed |
| rolling_variance.test | 7 | 0.001664s | 0.001590s | 0.001577s | byte equality observed |
| skewness.test | 6 | 0.002276s | 0.003047s | 0.002320s | byte equality observed |
| sum.test | 6 | 0.001569s | 0.001511s | 0.001517s | byte equality observed |
| sum_kahan.test | 2 | 0.010427s | 0.017285s | 0.010318s | byte equality observed |
| tail.test | 8 | 0.001494s | 0.001488s | 0.001496s | byte equality observed |
| tail_mean.test | 2 | 0.017588s | 0.018331s | 0.018437s | byte equality observed |
| tail_quantile.test | 1 | 0.020344s | 0.024118s | 0.020208s | byte equality observed |
| tail_variate_means.test | 10 | 0.001571s | 0.001501s | 0.001457s | byte equality observed |
| valarray.test | 10 | 0.001501s | 0.001495s | 0.001469s | byte equality observed |
| variance.test | 10 | 0.001576s | 0.001530s | 0.001531s | byte equality observed |
| vector.test | 8 | 0.001528s | 0.001503s | 0.001450s | byte equality observed |
| weighted_covariance.test | 10 | 0.001495s | 0.001482s | 0.001421s | byte equality observed |
| weighted_extended_p_square.test | 1 | 0.017035s | 0.020965s | 0.016400s | byte equality observed |
| weighted_kurtosis.test | 6 | 0.002323s | 0.003549s | 0.002378s | byte equality observed |
| weighted_mean.test | 10 | 0.001485s | 0.001443s | 0.001425s | byte equality observed |
| weighted_median.test | 1 | 0.852414s | 0.928588s | 0.858466s | byte equality observed |
| weighted_moment.test | 10 | 0.001463s | 0.001397s | 0.001393s | byte equality observed |
| weighted_p_square_cumul_dist.test | 1 | 0.102413s | 0.123183s | 0.099444s | byte equality observed |
| weighted_p_square_quantile.test | 1 | 0.021604s | 0.027064s | 0.021737s | byte equality observed |
| weighted_pot_quantile.test | 1 | 0.021624s | 0.023317s | 0.020891s | byte equality observed |
| weighted_skewness.test | 5 | 0.002285s | 0.003528s | 0.002346s | byte equality observed |
| weighted_sum.test | 10 | 0.001452s | 0.001406s | 0.001397s | byte equality observed |
| weighted_sum_kahan.test | 3 | 0.005717s | 0.009300s | 0.005653s | byte equality observed |
| weighted_tail_mean.test | 2 | 0.018438s | 0.019607s | 0.018700s | byte equality observed |
| weighted_tail_quantile.test | 1 | 0.018737s | 0.022658s | 0.019561s | byte equality observed |
| weighted_tail_variate_means.test | 10 | 0.001497s | 0.001483s | 0.001438s | byte equality observed |
| weighted_variance.test | 10 | 0.001632s | 0.001734s | 0.001586s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44402206984).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
