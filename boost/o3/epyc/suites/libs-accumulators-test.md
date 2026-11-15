# libs/accumulators/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| count.test | RUN | 0.901973 | 2.532199 | 2.964603 | 0.004281 | 0.003863 | 0.003945 |
| covariance.test | RUN | 1.713450 | 6.308000 | 7.591055 | 0.004006 | 0.004123 | 0.004118 |
| droppable.test | RUN | 1.150012 | 3.343349 | 4.008770 | 0.003949 | 0.004290 | 0.004012 |
| error_of.test | RUN | 1.225370 | 3.273715 | 4.392180 | 0.003725 | 0.003953 | 0.003840 |
| extended_p_square.test | RUN | 1.272446 | 4.150206 | 4.531360 | 0.005969 | 0.006198 | 0.005697 |
| extended_p_square_quantile.test | RUN | 1.693470 | 6.395545 | 6.279866 | 0.010388 | 0.011574 | 0.009968 |
| external_accumulator.test | RUN | 1.090380 | 3.317277 | 3.941026 | 0.003795 | 0.004236 | 0.003800 |
| external_weights.test | RUN | 0.967555 | 2.444666 | 3.164212 | 0.003373 | 0.003875 | 0.003883 |
| kurtosis.test | RUN | 1.462874 | 4.000817 | 5.192679 | 0.005159 | 0.005852 | 0.005088 |
| max.test | RUN | 0.914459 | 2.541010 | 2.939531 | 0.004296 | 0.003525 | 0.003890 |
| mean.test | RUN | 1.194406 | 3.366614 | 4.237647 | 0.003987 | 0.003872 | 0.003695 |
| median.test | RUN | 1.675010 | 6.695202 | 6.384155 | 0.147116 | 0.168384 | 0.142211 |
| min.test | RUN | 0.933117 | 2.512601 | 2.957924 | 0.004019 | 0.004002 | 0.004028 |
| moment.test | RUN | 1.018179 | 2.750325 | 3.553171 | 0.003634 | 0.003850 | 0.003699 |
| p_square_cumul_dist.test | RUN | 1.374643 | 4.778200 | 4.831588 | 1.041948 | 1.334481 | 1.056307 |
| p_square_quantile.test | RUN | 1.216722 | 4.182837 | 4.146221 | 0.034431 | 0.033699 | 0.031699 |
| reference.test | RUN | 0.996216 | 2.719921 | 3.481855 | 0.003722 | 0.003978 | 0.004221 |
| rolling_count.test | RUN | 1.078845 | 3.037790 | 3.548100 | 0.003857 | 0.003825 | 0.003859 |
| rolling_sum.test | RUN | 1.080097 | 2.931105 | 3.304269 | 0.004008 | 0.003984 | 0.003838 |
| rolling_mean.test | RUN | 1.528930 | 5.656549 | 5.844149 | 0.004001 | 0.004323 | 0.004105 |
| rolling_variance.test | RUN | 1.736266 | 6.445323 | 6.575118 | 0.004109 | 0.004309 | 0.003631 |
| rolling_moment.test | RUN | 1.279302 | 3.825254 | 4.404747 | 0.003843 | 0.004169 | 0.004141 |
| skewness.test | RUN | 1.402676 | 3.911185 | 4.903878 | 0.005227 | 0.006126 | 0.005340 |
| sum.test | RUN | 0.958867 | 2.704531 | 3.171178 | 0.003945 | 0.004289 | 0.004030 |
| sum_kahan.test | RUN | 1.055341 | 2.808017 | 3.364641 | 0.021411 | 0.035764 | 0.021660 |
| tail.test | RUN | 1.114804 | 3.915381 | 3.874249 | 0.003917 | 0.004120 | 0.003868 |
| tail_mean.test | RUN | 1.597652 | 4.566037 | 5.689148 | 0.026156 | 0.037329 | 0.027905 |
| tail_quantile.test | RUN | 1.325485 | 3.657133 | 4.309533 | 0.030086 | 0.037596 | 0.030776 |
| variance.test | RUN | 1.227324 | 3.490264 | 4.243406 | 0.003608 | 0.003631 | 0.003906 |
| vector.test | RUN | 1.307568 | 4.251548 | 5.118018 | 0.003818 | 0.003954 | 0.003726 |
| weighted_covariance.test | RUN | 1.755936 | 6.347029 | 7.728158 | 0.003724 | 0.003901 | 0.003206 |
| weighted_extended_p_square.test | RUN | 1.214405 | 3.779019 | 4.013457 | 0.027125 | 0.031064 | 0.025563 |
| weighted_kurtosis.test | RUN | 1.403083 | 3.806618 | 5.035363 | 0.005088 | 0.006304 | 0.005252 |
| weighted_mean.test | RUN | 1.201688 | 3.393672 | 4.317294 | 0.003723 | 0.003869 | 0.003456 |
| weighted_median.test | RUN | 1.540948 | 4.532238 | 5.533503 | 1.379502 | 1.529727 | 1.437669 |
| weighted_moment.test | RUN | 0.964183 | 2.458490 | 3.261157 | 0.003819 | 0.003937 | 0.003452 |
| weighted_p_square_cumul_dist.test | RUN | 1.198266 | 3.774151 | 3.957582 | 0.149178 | 0.210234 | 0.144627 |
| weighted_p_square_quantile.test | RUN | 1.109694 | 3.817108 | 3.647834 | 0.033563 | 0.042053 | 0.033640 |
| weighted_skewness.test | RUN | 1.284737 | 3.647804 | 4.262938 | 0.004765 | 0.006427 | 0.005250 |
| weighted_sum.test | RUN | 0.832680 | 2.096142 | 2.555480 | 0.003504 | 0.003845 | 0.003330 |
| weighted_sum_kahan.test | RUN | 0.885856 | 2.244174 | 2.677885 | 0.012289 | 0.019502 | 0.012504 |
| weighted_variance.test | RUN | 1.460838 | 4.178459 | 5.406238 | 0.003767 | 0.004452 | 0.004055 |
| valarray.test | RUN | 1.395174 | 3.970365 | 4.999414 | 0.003445 | 0.003717 | 0.003701 |
| tail_variate_means.test | RUN | 1.768297 | 6.182745 | 6.936809 | 0.003720 | 0.003795 | 0.003639 |
| pot_quantile.test | RUN | 2.135991 | 6.854639 | 8.414686 | 0.013835 | 0.015604 | 0.013475 |
| weighted_pot_quantile.test | RUN | 2.203598 | 6.704131 | 8.463955 | 0.032891 | 0.040830 | 0.033018 |
| weighted_tail_mean.test | RUN | 1.847918 | 5.445154 | 7.197425 | 0.028127 | 0.033322 | 0.029238 |
| weighted_tail_quantile.test | RUN | 1.909280 | 4.970615 | 6.475142 | 0.024567 | 0.028704 | 0.024835 |
| weighted_tail_variate_means.test | RUN | 2.144052 | 5.647985 | 7.174978 | 0.002856 | 0.002720 | 0.002791 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 1.216× | 1.220×, 1.211× | 1.008× |
| clang | 1.005× | 1.007×, 1.003× | 0.999× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1359 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/43701438216).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| count.test | 1 | 0.003128s | 0.002964s | 0.003078s | byte equality observed |
| covariance.test | 1 | 0.003211s | 0.003007s | 0.003128s | byte equality observed |
| droppable.test | 1 | 0.003076s | 0.003132s | 0.003174s | byte equality observed |
| error_of.test | 1 | 0.003045s | 0.002950s | 0.002874s | byte equality observed |
| extended_p_square.test | 4 | 0.004616s | 0.004779s | 0.004417s | byte equality observed |
| extended_p_square_quantile.test | 2 | 0.009298s | 0.010509s | 0.008690s | byte equality observed |
| external_accumulator.test | 5 | 0.002787s | 0.002716s | 0.002690s | byte equality observed |
| external_weights.test | 6 | 0.002604s | 0.002530s | 0.002480s | byte equality observed |
| kurtosis.test | 3 | 0.004036s | 0.004857s | 0.004011s | byte equality observed |
| max.test | 4 | 0.002739s | 0.002643s | 0.002698s | byte equality observed |
| mean.test | 5 | 0.002766s | 0.002688s | 0.002652s | byte equality observed |
| median.test | 1 | 0.142041s | 0.173994s | 0.144726s | byte equality observed |
| min.test | 4 | 0.002692s | 0.002621s | 0.002655s | byte equality observed |
| moment.test | 5 | 0.002700s | 0.002621s | 0.002666s | byte equality observed |
| p_square_cumul_dist.test | 1 | 0.955234s | 1.266684s | 0.960218s | byte equality observed |
| p_square_quantile.test | 1 | 0.033392s | 0.032216s | 0.030781s | byte equality observed |
| pot_quantile.test | 2 | 0.012987s | 0.014530s | 0.012422s | byte equality observed |
| reference.test | 7 | 0.002737s | 0.002600s | 0.002671s | byte equality observed |
| rolling_count.test | 7 | 0.002700s | 0.002590s | 0.002663s | byte equality observed |
| rolling_mean.test | 7 | 0.002817s | 0.002701s | 0.002742s | byte equality observed |
| rolling_moment.test | 7 | 0.002823s | 0.002715s | 0.002729s | byte equality observed |
| rolling_sum.test | 6 | 0.002728s | 0.002607s | 0.002652s | byte equality observed |
| rolling_variance.test | 6 | 0.002863s | 0.002735s | 0.002736s | byte equality observed |
| skewness.test | 4 | 0.003961s | 0.004843s | 0.004035s | byte equality observed |
| sum.test | 7 | 0.002623s | 0.002591s | 0.002591s | byte equality observed |
| sum_kahan.test | 1 | 0.020320s | 0.033974s | 0.019991s | byte equality observed |
| tail.test | 5 | 0.002701s | 0.002552s | 0.002627s | byte equality observed |
| tail_mean.test | 1 | 0.025064s | 0.029380s | 0.027630s | byte equality observed |
| tail_quantile.test | 1 | 0.029902s | 0.032859s | 0.029406s | byte equality observed |
| tail_variate_means.test | 6 | 0.002624s | 0.002459s | 0.002534s | byte equality observed |
| valarray.test | 6 | 0.002628s | 0.002493s | 0.002500s | byte equality observed |
| variance.test | 6 | 0.002739s | 0.002635s | 0.002665s | byte equality observed |
| vector.test | 7 | 0.002587s | 0.002518s | 0.002511s | byte equality observed |
| weighted_covariance.test | 7 | 0.002588s | 0.002518s | 0.002488s | byte equality observed |
| weighted_extended_p_square.test | 1 | 0.027060s | 0.032421s | 0.024683s | byte equality observed |
| weighted_kurtosis.test | 4 | 0.004051s | 0.005428s | 0.003913s | byte equality observed |
| weighted_mean.test | 7 | 0.002547s | 0.002456s | 0.002476s | byte equality observed |
| weighted_median.test | 1 | 1.273677s | 1.447232s | 1.301337s | byte equality observed |
| weighted_moment.test | 5 | 0.002531s | 0.002463s | 0.002416s | byte equality observed |
| weighted_p_square_cumul_dist.test | 1 | 0.151474s | 0.179290s | 0.149198s | byte equality observed |
| weighted_p_square_quantile.test | 1 | 0.033426s | 0.042736s | 0.032257s | byte equality observed |
| weighted_pot_quantile.test | 1 | 0.031516s | 0.034544s | 0.030092s | byte equality observed |
| weighted_skewness.test | 4 | 0.004038s | 0.005445s | 0.003870s | byte equality observed |
| weighted_sum.test | 7 | 0.002495s | 0.002429s | 0.002404s | byte equality observed |
| weighted_sum_kahan.test | 2 | 0.011243s | 0.017886s | 0.011060s | byte equality observed |
| weighted_tail_mean.test | 1 | 0.026046s | 0.032731s | 0.026309s | byte equality observed |
| weighted_tail_quantile.test | 1 | 0.028036s | 0.035489s | 0.027832s | byte equality observed |
| weighted_tail_variate_means.test | 7 | 0.002589s | 0.002510s | 0.002486s | byte equality observed |
| weighted_variance.test | 6 | 0.002778s | 0.002977s | 0.002715s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/43701438216).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
