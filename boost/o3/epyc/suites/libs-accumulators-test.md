# libs/accumulators/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| count.test | RUN | 0.960722 | 2.684513 | 3.460019 | 0.004099 | 0.003973 | 0.003945 |
| covariance.test | RUN | 1.801335 | 6.599560 | 8.891895 | 0.003915 | 0.003713 | 0.004119 |
| droppable.test | RUN | 1.165141 | 3.676852 | 4.695250 | 0.004080 | 0.004016 | 0.003878 |
| error_of.test | RUN | 1.285874 | 3.563925 | 5.088954 | 0.003428 | 0.003618 | 0.003738 |
| extended_p_square.test | RUN | 1.364005 | 4.525132 | 5.195655 | 0.005854 | 0.006151 | 0.004954 |
| extended_p_square_quantile.test | RUN | 1.738773 | 6.855404 | 7.477581 | 0.011018 | 0.011960 | 0.010427 |
| external_accumulator.test | RUN | 1.200297 | 3.342693 | 4.480660 | 0.003837 | 0.003994 | 0.004221 |
| external_weights.test | RUN | 1.034496 | 2.701381 | 3.682955 | 0.003719 | 0.003693 | 0.003535 |
| kurtosis.test | RUN | 1.540995 | 4.376977 | 5.934319 | 0.005327 | 0.005726 | 0.005475 |
| max.test | RUN | 0.961508 | 2.719584 | 3.446344 | 0.003433 | 0.003800 | 0.003938 |
| mean.test | RUN | 1.267133 | 3.594068 | 4.944477 | 0.003566 | 0.003718 | 0.004078 |
| median.test | RUN | 1.748345 | 7.109098 | 7.352950 | 0.150082 | 0.165862 | 0.153113 |
| min.test | RUN | 0.975406 | 2.509834 | 3.399658 | 0.003706 | 0.004029 | 0.003529 |
| moment.test | RUN | 1.095352 | 3.097342 | 4.080481 | 0.003934 | 0.003978 | 0.003829 |
| p_square_cumul_dist.test | RUN | 1.428529 | 5.049843 | 5.565847 | 1.041956 | 1.286773 | 1.071458 |
| p_square_quantile.test | RUN | 1.291528 | 4.540729 | 4.819164 | 0.034845 | 0.038326 | 0.033743 |
| reference.test | RUN | 1.055277 | 2.910768 | 3.959735 | 0.003994 | 0.003405 | 0.003837 |
| rolling_count.test | RUN | 1.138402 | 3.295645 | 3.787255 | 0.003512 | 0.003971 | 0.004035 |
| rolling_sum.test | RUN | 1.096259 | 3.255145 | 4.003737 | 0.004064 | 0.004182 | 0.003830 |
| rolling_mean.test | RUN | 1.568930 | 5.998884 | 6.687000 | 0.003508 | 0.003948 | 0.004124 |
| rolling_variance.test | RUN | 1.812710 | 6.851985 | 7.585032 | 0.004199 | 0.003931 | 0.003798 |
| rolling_moment.test | RUN | 1.371283 | 4.062239 | 5.061384 | 0.004176 | 0.003902 | 0.004332 |
| skewness.test | RUN | 1.447182 | 4.188506 | 5.847287 | 0.005260 | 0.006217 | 0.005518 |
| sum.test | RUN | 1.027998 | 2.786804 | 3.705819 | 0.003684 | 0.003983 | 0.004020 |
| sum_kahan.test | RUN | 1.130452 | 3.082363 | 3.897642 | 0.019647 | 0.030800 | 0.019789 |
| tail.test | RUN | 1.189310 | 4.227978 | 4.443527 | 0.003865 | 0.004126 | 0.003862 |
| tail_mean.test | RUN | 1.682509 | 5.031622 | 6.521851 | 0.025028 | 0.040255 | 0.029283 |
| tail_quantile.test | RUN | 1.390163 | 3.978448 | 5.050519 | 0.028850 | 0.042636 | 0.029945 |
| variance.test | RUN | 1.274817 | 3.627230 | 5.015961 | 0.003396 | 0.003636 | 0.004113 |
| vector.test | RUN | 1.356545 | 4.534140 | 5.961514 | 0.003517 | 0.003946 | 0.003635 |
| weighted_covariance.test | RUN | 1.862102 | 6.822503 | 9.133913 | 0.003621 | 0.003758 | 0.003130 |
| weighted_extended_p_square.test | RUN | 1.250067 | 3.946727 | 4.736604 | 0.029778 | 0.031551 | 0.027098 |
| weighted_kurtosis.test | RUN | 1.466660 | 3.979336 | 5.688927 | 0.005359 | 0.006645 | 0.005168 |
| weighted_mean.test | RUN | 1.274301 | 3.656822 | 5.066406 | 0.003674 | 0.003797 | 0.003682 |
| weighted_median.test | RUN | 1.637810 | 4.923471 | 6.569969 | 1.267694 | 1.399510 | 1.292199 |
| weighted_moment.test | RUN | 1.012479 | 2.694059 | 3.872708 | 0.003704 | 0.003658 | 0.003939 |
| weighted_p_square_cumul_dist.test | RUN | 1.243046 | 4.069138 | 4.585192 | 0.138334 | 0.203745 | 0.138815 |
| weighted_p_square_quantile.test | RUN | 1.215754 | 4.074315 | 4.211872 | 0.036531 | 0.040793 | 0.033603 |
| weighted_skewness.test | RUN | 1.441564 | 3.955704 | 5.096237 | 0.005281 | 0.006150 | 0.005250 |
| weighted_sum.test | RUN | 0.761316 | 2.233542 | 2.928003 | 0.003686 | 0.003785 | 0.003495 |
| weighted_sum_kahan.test | RUN | 0.959634 | 2.399793 | 3.253311 | 0.011446 | 0.017119 | 0.011673 |
| weighted_variance.test | RUN | 1.561340 | 4.594655 | 6.233131 | 0.003764 | 0.003990 | 0.003969 |
| valarray.test | RUN | 1.420100 | 4.293979 | 5.748050 | 0.003712 | 0.003546 | 0.003633 |
| tail_variate_means.test | RUN | 1.826563 | 6.544956 | 8.071416 | 0.003785 | 0.003859 | 0.003668 |
| pot_quantile.test | RUN | 2.257522 | 7.392481 | 9.700010 | 0.013993 | 0.016269 | 0.013757 |
| weighted_pot_quantile.test | RUN | 2.332491 | 7.196944 | 9.660166 | 0.032704 | 0.041208 | 0.034042 |
| weighted_tail_mean.test | RUN | 2.036898 | 5.719113 | 8.076859 | 0.024702 | 0.032877 | 0.021808 |
| weighted_tail_quantile.test | RUN | 2.027108 | 5.201508 | 7.258927 | 0.022434 | 0.028382 | 0.022796 |
| weighted_tail_variate_means.test | RUN | 2.197680 | 6.099403 | 8.139473 | 0.002676 | 0.002621 | 0.002647 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 1.198× | 1.202×, 1.194× | 1.000× |
| clang | 0.992× | 0.990×, 0.995× | 1.007× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1359 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/43750858933).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| count.test | 1 | 0.002907s | 0.002886s | 0.002816s | byte equality observed |
| covariance.test | 1 | 0.002997s | 0.002955s | 0.002874s | byte equality observed |
| droppable.test | 1 | 0.002926s | 0.002896s | 0.002994s | byte equality observed |
| error_of.test | 1 | 0.002757s | 0.002760s | 0.002797s | byte equality observed |
| extended_p_square.test | 3 | 0.004494s | 0.004567s | 0.004281s | byte equality observed |
| extended_p_square_quantile.test | 2 | 0.009669s | 0.010384s | 0.009275s | byte equality observed |
| external_accumulator.test | 4 | 0.002676s | 0.002600s | 0.002535s | byte equality observed |
| external_weights.test | 5 | 0.002511s | 0.002448s | 0.002463s | byte equality observed |
| kurtosis.test | 4 | 0.004064s | 0.004628s | 0.003945s | byte equality observed |
| max.test | 6 | 0.002623s | 0.002529s | 0.002500s | byte equality observed |
| mean.test | 3 | 0.002617s | 0.002609s | 0.002554s | byte equality observed |
| median.test | 1 | 0.142220s | 0.164132s | 0.141416s | byte equality observed |
| min.test | 5 | 0.002561s | 0.002575s | 0.002531s | byte equality observed |
| moment.test | 5 | 0.002567s | 0.002452s | 0.002468s | byte equality observed |
| p_square_cumul_dist.test | 1 | 0.891237s | 1.161485s | 0.897409s | byte equality observed |
| p_square_quantile.test | 1 | 0.034200s | 0.035196s | 0.030778s | byte equality observed |
| pot_quantile.test | 2 | 0.012362s | 0.013511s | 0.011889s | byte equality observed |
| reference.test | 6 | 0.002549s | 0.002520s | 0.002442s | byte equality observed |
| rolling_count.test | 6 | 0.002554s | 0.002444s | 0.002430s | byte equality observed |
| rolling_mean.test | 6 | 0.002692s | 0.002565s | 0.002554s | byte equality observed |
| rolling_moment.test | 6 | 0.002651s | 0.002522s | 0.002536s | byte equality observed |
| rolling_sum.test | 6 | 0.002564s | 0.002431s | 0.002471s | byte equality observed |
| rolling_variance.test | 5 | 0.002708s | 0.002576s | 0.002557s | byte equality observed |
| skewness.test | 4 | 0.003896s | 0.004538s | 0.003848s | byte equality observed |
| sum.test | 6 | 0.002548s | 0.002436s | 0.002476s | byte equality observed |
| sum_kahan.test | 1 | 0.018390s | 0.029326s | 0.018003s | byte equality observed |
| tail.test | 5 | 0.002539s | 0.002518s | 0.002387s | byte equality observed |
| tail_mean.test | 1 | 0.022405s | 0.033801s | 0.024805s | byte equality observed |
| tail_quantile.test | 1 | 0.028757s | 0.037566s | 0.028985s | byte equality observed |
| tail_variate_means.test | 6 | 0.002612s | 0.002325s | 0.002346s | byte equality observed |
| valarray.test | 6 | 0.002512s | 0.002396s | 0.002477s | byte equality observed |
| variance.test | 6 | 0.002633s | 0.002575s | 0.002553s | byte equality observed |
| vector.test | 7 | 0.002526s | 0.002454s | 0.002425s | byte equality observed |
| weighted_covariance.test | 7 | 0.002521s | 0.002392s | 0.002307s | byte equality observed |
| weighted_extended_p_square.test | 1 | 0.027189s | 0.030002s | 0.024819s | byte equality observed |
| weighted_kurtosis.test | 4 | 0.003955s | 0.005055s | 0.003874s | byte equality observed |
| weighted_mean.test | 4 | 0.002474s | 0.002350s | 0.002336s | byte equality observed |
| weighted_median.test | 1 | 1.138181s | 1.264888s | 1.135911s | byte equality observed |
| weighted_moment.test | 7 | 0.002393s | 0.002297s | 0.002292s | byte equality observed |
| weighted_p_square_cumul_dist.test | 1 | 0.143710s | 0.186326s | 0.140343s | byte equality observed |
| weighted_p_square_quantile.test | 1 | 0.033888s | 0.038912s | 0.032554s | byte equality observed |
| weighted_pot_quantile.test | 1 | 0.030296s | 0.031802s | 0.028991s | byte equality observed |
| weighted_skewness.test | 4 | 0.003892s | 0.005009s | 0.003719s | byte equality observed |
| weighted_sum.test | 6 | 0.002391s | 0.002290s | 0.002245s | byte equality observed |
| weighted_sum_kahan.test | 2 | 0.010118s | 0.015744s | 0.009913s | byte equality observed |
| weighted_tail_mean.test | 1 | 0.023617s | 0.031200s | 0.024227s | byte equality observed |
| weighted_tail_quantile.test | 1 | 0.026647s | 0.036934s | 0.026187s | byte equality observed |
| weighted_tail_variate_means.test | 7 | 0.002383s | 0.002382s | 0.002347s | byte equality observed |
| weighted_variance.test | 7 | 0.002654s | 0.002763s | 0.002589s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/43750858933).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
