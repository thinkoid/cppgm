# libs/accumulators/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| count.test | RUN | 0.732602 | 1.969149 | 2.369160 | 0.003291 | 0.003398 | 0.003055 |
| covariance.test | RUN | 1.427812 | 5.202329 | 6.177871 | 0.003360 | 0.003433 | 0.003158 |
| droppable.test | RUN | 0.927990 | 2.643014 | 3.290035 | 0.003274 | 0.003545 | 0.003386 |
| error_of.test | RUN | 1.020819 | 2.646990 | 3.517937 | 0.002912 | 0.003381 | 0.003263 |
| extended_p_square.test | RUN | 1.044503 | 3.324247 | 3.587099 | 0.005305 | 0.004960 | 0.004350 |
| extended_p_square_quantile.test | RUN | 1.306066 | 5.239603 | 5.225923 | 0.008668 | 0.009387 | 0.007591 |
| external_accumulator.test | RUN | 0.882336 | 2.555572 | 3.157033 | 0.003288 | 0.003490 | 0.003192 |
| external_weights.test | RUN | 0.752117 | 2.087131 | 2.566449 | 0.003106 | 0.003140 | 0.003050 |
| kurtosis.test | RUN | 1.176547 | 3.306769 | 4.217456 | 0.006254 | 0.004898 | 0.004306 |
| max.test | RUN | 0.728866 | 2.005233 | 2.340363 | 0.003198 | 0.003353 | 0.003219 |
| mean.test | RUN | 0.964262 | 2.795568 | 3.466411 | 0.003315 | 0.003430 | 0.003436 |
| median.test | RUN | 1.329068 | 5.351523 | 5.225691 | 0.126418 | 0.132925 | 0.112824 |
| min.test | RUN | 0.752634 | 1.933213 | 2.332580 | 0.003252 | 0.003458 | 0.003587 |
| moment.test | RUN | 0.865620 | 2.261484 | 2.806338 | 0.003278 | 0.003270 | 0.002885 |
| p_square_cumul_dist.test | RUN | 1.111785 | 3.694579 | 3.910261 | 0.998384 | 1.041742 | 0.807599 |
| p_square_quantile.test | RUN | 0.938021 | 3.355397 | 3.314948 | 0.030961 | 0.027951 | 0.024877 |
| reference.test | RUN | 0.844629 | 2.253832 | 2.847402 | 0.003312 | 0.002980 | 0.003202 |
| rolling_count.test | RUN | 0.860608 | 2.441980 | 2.686492 | 0.003092 | 0.003336 | 0.003423 |
| rolling_sum.test | RUN | 0.839928 | 2.412520 | 2.873747 | 0.003482 | 0.003453 | 0.003546 |
| rolling_mean.test | RUN | 1.212419 | 4.432943 | 4.681332 | 0.003435 | 0.003064 | 0.003468 |
| rolling_variance.test | RUN | 1.395316 | 5.099961 | 5.324118 | 0.004413 | 0.003278 | 0.003410 |
| rolling_moment.test | RUN | 1.040157 | 3.086934 | 3.503809 | 0.003154 | 0.003295 | 0.003413 |
| skewness.test | RUN | 1.122230 | 3.116219 | 3.926085 | 0.005897 | 0.004951 | 0.004414 |
| sum.test | RUN | 0.752202 | 2.126355 | 2.511479 | 0.003271 | 0.003478 | 0.003223 |
| sum_kahan.test | RUN | 0.825162 | 2.253077 | 2.680433 | 0.016678 | 0.028042 | 0.017134 |
| tail.test | RUN | 0.881469 | 3.186722 | 3.072494 | 0.002965 | 0.003391 | 0.003298 |
| tail_mean.test | RUN | 1.212613 | 3.667417 | 4.578615 | 0.020780 | 0.028132 | 0.022017 |
| tail_quantile.test | RUN | 1.015642 | 3.011113 | 3.430912 | 0.025724 | 0.030122 | 0.023393 |
| variance.test | RUN | 0.962242 | 2.709788 | 3.424521 | 0.003310 | 0.003165 | 0.003170 |
| vector.test | RUN | 1.038179 | 3.307278 | 4.125264 | 0.002894 | 0.003231 | 0.003151 |
| weighted_covariance.test | RUN | 1.395132 | 4.960453 | 6.182046 | 0.003020 | 0.003184 | 0.003013 |
| weighted_extended_p_square.test | RUN | 0.926197 | 2.961222 | 3.210963 | 0.024778 | 0.024973 | 0.020422 |
| weighted_kurtosis.test | RUN | 1.134231 | 3.000010 | 3.936190 | 0.005828 | 0.005490 | 0.003872 |
| weighted_mean.test | RUN | 0.924453 | 2.701697 | 3.395667 | 0.003066 | 0.003184 | 0.003105 |
| weighted_median.test | RUN | 1.226813 | 3.681813 | 4.419296 | 1.152593 | 1.183114 | 1.097111 |
| weighted_moment.test | RUN | 0.775483 | 1.956686 | 2.577539 | 0.002880 | 0.003193 | 0.003059 |
| weighted_p_square_cumul_dist.test | RUN | 0.951852 | 3.058924 | 3.173903 | 0.153277 | 0.139079 | 0.110332 |
| weighted_p_square_quantile.test | RUN | 0.887104 | 2.942334 | 2.706402 | 0.034891 | 0.031355 | 0.026001 |
| weighted_skewness.test | RUN | 1.065345 | 2.765965 | 3.785409 | 0.005830 | 0.005248 | 0.003898 |
| weighted_sum.test | RUN | 0.646527 | 1.665212 | 2.045154 | 0.002922 | 0.003272 | 0.003063 |
| weighted_sum_kahan.test | RUN | 0.646642 | 1.821509 | 2.183353 | 0.009619 | 0.015317 | 0.010060 |
| weighted_variance.test | RUN | 1.197890 | 3.391354 | 4.351484 | 0.003420 | 0.003438 | 0.003311 |
| valarray.test | RUN | 1.099789 | 3.112493 | 4.077213 | 0.002881 | 0.003181 | 0.003099 |
| tail_variate_means.test | RUN | 1.407106 | 5.081212 | 5.597235 | 0.002992 | 0.003261 | 0.003007 |
| pot_quantile.test | RUN | 1.702459 | 5.458540 | 6.777897 | 0.016179 | 0.012654 | 0.010943 |
| weighted_pot_quantile.test | RUN | 1.681697 | 5.403795 | 6.835187 | 0.026374 | 0.030654 | 0.025180 |
| weighted_tail_mean.test | RUN | 1.474496 | 4.337027 | 5.754518 | 0.022748 | 0.027761 | 0.022704 |
| weighted_tail_quantile.test | RUN | 1.503885 | 3.686440 | 5.103257 | 0.022644 | 0.022375 | 0.019493 |
| weighted_tail_variate_means.test | RUN | 1.672754 | 4.757280 | 5.985105 | 0.002320 | 0.002260 | 0.002216 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 1.073× | 1.075×, 1.071× | 1.005× |
| clang | 0.886× | 0.888×, 0.883× | 1.002× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1362 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43619774656).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| count.test | 1 | 0.002459s | 0.002488s | 0.002515s | byte equality observed |
| covariance.test | 1 | 0.002527s | 0.002507s | 0.002514s | byte equality observed |
| droppable.test | 1 | 0.002587s | 0.002361s | 0.002500s | byte equality observed |
| error_of.test | 1 | 0.002442s | 0.002424s | 0.002337s | byte equality observed |
| extended_p_square.test | 5 | 0.003606s | 0.003650s | 0.003427s | byte equality observed |
| extended_p_square_quantile.test | 2 | 0.007368s | 0.007858s | 0.006466s | byte equality observed |
| external_accumulator.test | 5 | 0.002174s | 0.002088s | 0.002067s | byte equality observed |
| external_weights.test | 6 | 0.002019s | 0.001927s | 0.001922s | byte equality observed |
| kurtosis.test | 3 | 0.004756s | 0.003774s | 0.002987s | byte equality observed |
| max.test | 8 | 0.002083s | 0.002043s | 0.002004s | byte equality observed |
| mean.test | 5 | 0.002116s | 0.002053s | 0.002077s | byte equality observed |
| median.test | 1 | 0.121443s | 0.143412s | 0.108687s | byte equality observed |
| min.test | 7 | 0.002103s | 0.002030s | 0.002045s | byte equality observed |
| moment.test | 7 | 0.002110s | 0.002039s | 0.002033s | byte equality observed |
| p_square_cumul_dist.test | 1 | 0.870013s | 0.982115s | 0.748520s | byte equality observed |
| p_square_quantile.test | 1 | 0.030097s | 0.026735s | 0.024475s | byte equality observed |
| pot_quantile.test | 2 | 0.015002s | 0.011362s | 0.009605s | byte equality observed |
| reference.test | 9 | 0.002126s | 0.002050s | 0.002065s | byte equality observed |
| rolling_count.test | 9 | 0.002105s | 0.002041s | 0.002031s | byte equality observed |
| rolling_mean.test | 8 | 0.002193s | 0.002131s | 0.002140s | byte equality observed |
| rolling_moment.test | 8 | 0.002202s | 0.002127s | 0.002078s | byte equality observed |
| rolling_sum.test | 9 | 0.002120s | 0.002018s | 0.002049s | byte equality observed |
| rolling_variance.test | 8 | 0.002192s | 0.002136s | 0.002134s | byte equality observed |
| skewness.test | 4 | 0.004764s | 0.003766s | 0.003041s | byte equality observed |
| sum.test | 7 | 0.002062s | 0.002035s | 0.002042s | byte equality observed |
| sum_kahan.test | 1 | 0.015761s | 0.025985s | 0.015441s | byte equality observed |
| tail.test | 9 | 0.002063s | 0.002005s | 0.002070s | byte equality observed |
| tail_mean.test | 1 | 0.019963s | 0.024383s | 0.020326s | byte equality observed |
| tail_quantile.test | 1 | 0.024175s | 0.025307s | 0.021999s | byte equality observed |
| tail_variate_means.test | 8 | 0.002051s | 0.001944s | 0.001967s | byte equality observed |
| valarray.test | 8 | 0.002009s | 0.001907s | 0.001945s | byte equality observed |
| variance.test | 8 | 0.002099s | 0.002057s | 0.002025s | byte equality observed |
| vector.test | 9 | 0.001994s | 0.001945s | 0.001944s | byte equality observed |
| weighted_covariance.test | 9 | 0.001999s | 0.001929s | 0.001930s | byte equality observed |
| weighted_extended_p_square.test | 1 | 0.024456s | 0.023730s | 0.018152s | byte equality observed |
| weighted_kurtosis.test | 4 | 0.005231s | 0.004258s | 0.003007s | byte equality observed |
| weighted_mean.test | 9 | 0.001982s | 0.001930s | 0.001902s | byte equality observed |
| weighted_median.test | 1 | 1.082531s | 1.122904s | 1.004977s | byte equality observed |
| weighted_moment.test | 4 | 0.001993s | 0.001908s | 0.001901s | byte equality observed |
| weighted_p_square_cumul_dist.test | 1 | 0.148353s | 0.176013s | 0.116954s | byte equality observed |
| weighted_p_square_quantile.test | 1 | 0.035900s | 0.033605s | 0.025962s | byte equality observed |
| weighted_pot_quantile.test | 1 | 0.029964s | 0.027526s | 0.023896s | byte equality observed |
| weighted_skewness.test | 4 | 0.005295s | 0.004291s | 0.003030s | byte equality observed |
| weighted_sum.test | 8 | 0.001978s | 0.001926s | 0.001909s | byte equality observed |
| weighted_sum_kahan.test | 2 | 0.008764s | 0.013841s | 0.008641s | byte equality observed |
| weighted_tail_mean.test | 1 | 0.021302s | 0.022484s | 0.021035s | byte equality observed |
| weighted_tail_quantile.test | 1 | 0.024955s | 0.025404s | 0.022587s | byte equality observed |
| weighted_tail_variate_means.test | 6 | 0.002035s | 0.001936s | 0.001998s | byte equality observed |
| weighted_variance.test | 6 | 0.002541s | 0.002268s | 0.002136s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43619774656).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
