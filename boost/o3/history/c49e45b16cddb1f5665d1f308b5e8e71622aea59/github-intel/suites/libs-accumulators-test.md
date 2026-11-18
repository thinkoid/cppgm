# libs/accumulators/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| count.test | RUN | 0.583940 | 1.736108 | 1.910520 | 0.002439 | 0.002429 | 0.002050 |
| covariance.test | RUN | 1.113658 | 4.682734 | 4.976133 | 0.002145 | 0.002352 | 0.002300 |
| droppable.test | RUN | 0.730475 | 2.368569 | 2.603101 | 0.002111 | 0.002448 | 0.002066 |
| error_of.test | RUN | 0.775192 | 2.305548 | 2.864353 | 0.002091 | 0.002041 | 0.002080 |
| extended_p_square.test | RUN | 0.827177 | 2.964718 | 2.867906 | 0.003451 | 0.004184 | 0.003466 |
| extended_p_square_quantile.test | RUN | 1.089738 | 4.728815 | 4.169835 | 0.006571 | 0.007913 | 0.006959 |
| external_accumulator.test | RUN | 0.698083 | 2.221363 | 2.486335 | 0.002325 | 0.002364 | 0.002020 |
| external_weights.test | RUN | 0.618118 | 1.743396 | 2.028486 | 0.002127 | 0.002328 | 0.002277 |
| kurtosis.test | RUN | 0.949027 | 2.888065 | 3.329852 | 0.003009 | 0.003770 | 0.002875 |
| max.test | RUN | 0.587700 | 1.740962 | 1.854145 | 0.002214 | 0.002443 | 0.002178 |
| mean.test | RUN | 0.789927 | 2.415565 | 2.729659 | 0.002211 | 0.002429 | 0.002189 |
| median.test | RUN | 1.066955 | 4.868211 | 4.245553 | 0.103347 | 0.123397 | 0.101326 |
| min.test | RUN | 0.594003 | 1.703077 | 1.910637 | 0.001942 | 0.002492 | 0.002163 |
| moment.test | RUN | 0.667159 | 1.995486 | 2.264569 | 0.002254 | 0.002294 | 0.002098 |
| p_square_cumul_dist.test | RUN | 0.883806 | 3.455870 | 3.156712 | 0.726931 | 0.906538 | 0.731975 |
| p_square_quantile.test | RUN | 0.778934 | 3.045035 | 2.696151 | 0.023387 | 0.024111 | 0.021819 |
| reference.test | RUN | 0.660156 | 1.900431 | 2.186075 | 0.001991 | 0.002307 | 0.002177 |
| rolling_count.test | RUN | 0.681942 | 2.201197 | 2.297977 | 0.002023 | 0.002376 | 0.002132 |
| rolling_sum.test | RUN | 0.688844 | 2.202679 | 2.158026 | 0.002198 | 0.002287 | 0.002201 |
| rolling_mean.test | RUN | 1.015037 | 3.922388 | 3.847682 | 0.002229 | 0.002490 | 0.002376 |
| rolling_variance.test | RUN | 1.103294 | 4.654376 | 4.355080 | 0.002346 | 0.002488 | 0.002222 |
| rolling_moment.test | RUN | 0.843187 | 2.681807 | 2.851910 | 0.002228 | 0.002456 | 0.002359 |
| skewness.test | RUN | 0.876359 | 2.719459 | 3.167021 | 0.003028 | 0.004207 | 0.002961 |
| sum.test | RUN | 0.623806 | 1.874985 | 2.060072 | 0.002216 | 0.002290 | 0.002130 |
| sum_kahan.test | RUN | 0.665269 | 2.005564 | 2.200771 | 0.011080 | 0.019550 | 0.011189 |
| tail.test | RUN | 0.713782 | 2.799446 | 2.464909 | 0.002110 | 0.002371 | 0.002269 |
| tail_mean.test | RUN | 0.994632 | 3.258004 | 3.657712 | 0.020071 | 0.022250 | 0.019625 |
| tail_quantile.test | RUN | 0.812409 | 2.679007 | 2.803408 | 0.021548 | 0.024466 | 0.019941 |
| variance.test | RUN | 0.775200 | 2.390737 | 2.757723 | 0.002158 | 0.002557 | 0.002272 |
| vector.test | RUN | 0.858192 | 2.945336 | 3.418782 | 0.001942 | 0.002495 | 0.002409 |
| weighted_covariance.test | RUN | 1.121804 | 4.664934 | 5.083379 | 0.001922 | 0.002488 | 0.002035 |
| weighted_extended_p_square.test | RUN | 0.776613 | 2.699812 | 2.556594 | 0.019263 | 0.021449 | 0.015498 |
| weighted_kurtosis.test | RUN | 0.902654 | 2.665075 | 3.189876 | 0.003125 | 0.004545 | 0.003138 |
| weighted_mean.test | RUN | 0.762850 | 2.421197 | 2.786753 | 0.002157 | 0.002328 | 0.001774 |
| weighted_median.test | RUN | 0.984943 | 3.211236 | 3.577735 | 0.979674 | 1.065390 | 0.973470 |
| weighted_moment.test | RUN | 0.623506 | 1.750694 | 2.042991 | 0.002142 | 0.002378 | 0.002128 |
| weighted_p_square_cumul_dist.test | RUN | 0.782394 | 2.730290 | 2.532568 | 0.098282 | 0.120207 | 0.093060 |
| weighted_p_square_quantile.test | RUN | 0.703593 | 2.657416 | 2.321667 | 0.022342 | 0.028342 | 0.023006 |
| weighted_skewness.test | RUN | 0.780061 | 2.297804 | 2.750348 | 0.003208 | 0.004444 | 0.002898 |
| weighted_sum.test | RUN | 0.523991 | 1.497002 | 1.638028 | 0.002413 | 0.002147 | 0.002072 |
| weighted_sum_kahan.test | RUN | 0.534279 | 1.586693 | 1.742067 | 0.006724 | 0.010761 | 0.006917 |
| weighted_variance.test | RUN | 0.957974 | 2.917600 | 3.497747 | 0.002141 | 0.002600 | 0.002257 |
| valarray.test | RUN | 0.879202 | 2.774085 | 3.266508 | 0.002246 | 0.002192 | 0.002050 |
| tail_variate_means.test | RUN | 1.125343 | 4.473156 | 4.542406 | 0.002075 | 0.002274 | 0.001974 |
| pot_quantile.test | RUN | 1.350538 | 4.901983 | 5.292517 | 0.008799 | 0.011000 | 0.008964 |
| weighted_pot_quantile.test | RUN | 1.352195 | 4.589718 | 5.307843 | 0.016821 | 0.018899 | 0.021534 |
| weighted_tail_mean.test | RUN | 1.189590 | 3.854326 | 4.587963 | 0.019730 | 0.021950 | 0.019635 |
| weighted_tail_quantile.test | RUN | 1.171398 | 3.357468 | 4.110711 | 0.015973 | 0.018238 | 0.015656 |
| weighted_tail_variate_means.test | RUN | 1.312948 | 4.203771 | 4.827802 | 0.001574 | 0.001503 | 0.001606 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 1.158× | 1.145×, 1.171× | 1.014× |
| clang | 0.985× | 0.983×, 0.986× | 1.012× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1364 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44362912212).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| count.test | 4 | 0.001692s | 0.001638s | 0.001594s | byte equality observed |
| covariance.test | 4 | 0.001725s | 0.001672s | 0.001651s | byte equality observed |
| droppable.test | 1 | 0.002035s | 0.001919s | 0.001770s | byte equality observed |
| error_of.test | 1 | 0.001921s | 0.001827s | 0.001805s | byte equality observed |
| extended_p_square.test | 6 | 0.002819s | 0.002926s | 0.002741s | byte equality observed |
| extended_p_square_quantile.test | 3 | 0.005983s | 0.006594s | 0.005803s | byte equality observed |
| external_accumulator.test | 8 | 0.001581s | 0.001549s | 0.001505s | byte equality observed |
| external_weights.test | 5 | 0.001549s | 0.001483s | 0.001494s | byte equality observed |
| kurtosis.test | 6 | 0.002294s | 0.003056s | 0.002278s | byte equality observed |
| max.test | 7 | 0.001602s | 0.001553s | 0.001508s | byte equality observed |
| mean.test | 9 | 0.001574s | 0.001517s | 0.001512s | byte equality observed |
| median.test | 1 | 0.098806s | 0.122097s | 0.103592s | byte equality observed |
| min.test | 8 | 0.001575s | 0.001530s | 0.001505s | byte equality observed |
| moment.test | 9 | 0.001574s | 0.001517s | 0.001481s | byte equality observed |
| p_square_cumul_dist.test | 1 | 0.640346s | 0.802407s | 0.622119s | byte equality observed |
| p_square_quantile.test | 1 | 0.021697s | 0.022849s | 0.020413s | byte equality observed |
| pot_quantile.test | 3 | 0.008340s | 0.009482s | 0.008114s | byte equality observed |
| reference.test | 10 | 0.001539s | 0.001500s | 0.001479s | byte equality observed |
| rolling_count.test | 10 | 0.001595s | 0.001530s | 0.001505s | byte equality observed |
| rolling_mean.test | 10 | 0.001676s | 0.001599s | 0.001540s | byte equality observed |
| rolling_moment.test | 10 | 0.001629s | 0.001572s | 0.001531s | byte equality observed |
| rolling_sum.test | 10 | 0.001597s | 0.001491s | 0.001504s | byte equality observed |
| rolling_variance.test | 10 | 0.001674s | 0.001610s | 0.001592s | byte equality observed |
| skewness.test | 6 | 0.002307s | 0.003051s | 0.002349s | byte equality observed |
| sum.test | 9 | 0.001566s | 0.001505s | 0.001510s | byte equality observed |
| sum_kahan.test | 2 | 0.010403s | 0.017572s | 0.010225s | byte equality observed |
| tail.test | 10 | 0.001545s | 0.001490s | 0.001484s | byte equality observed |
| tail_mean.test | 1 | 0.017865s | 0.017803s | 0.017723s | byte equality observed |
| tail_quantile.test | 1 | 0.020999s | 0.021376s | 0.019680s | byte equality observed |
| tail_variate_means.test | 10 | 0.001545s | 0.001479s | 0.001465s | byte equality observed |
| valarray.test | 10 | 0.001531s | 0.001466s | 0.001441s | byte equality observed |
| variance.test | 10 | 0.001584s | 0.001533s | 0.001511s | byte equality observed |
| vector.test | 9 | 0.001544s | 0.001507s | 0.001438s | byte equality observed |
| weighted_covariance.test | 8 | 0.001526s | 0.001466s | 0.001455s | byte equality observed |
| weighted_extended_p_square.test | 1 | 0.016775s | 0.021188s | 0.015935s | byte equality observed |
| weighted_kurtosis.test | 6 | 0.002340s | 0.003565s | 0.002344s | byte equality observed |
| weighted_mean.test | 10 | 0.001506s | 0.001464s | 0.001424s | byte equality observed |
| weighted_median.test | 1 | 0.861069s | 0.921872s | 0.857582s | byte equality observed |
| weighted_moment.test | 8 | 0.001479s | 0.001427s | 0.001413s | byte equality observed |
| weighted_p_square_cumul_dist.test | 1 | 0.099969s | 0.144128s | 0.102403s | byte equality observed |
| weighted_p_square_quantile.test | 1 | 0.021702s | 0.026525s | 0.021705s | byte equality observed |
| weighted_pot_quantile.test | 1 | 0.021639s | 0.023428s | 0.020841s | byte equality observed |
| weighted_skewness.test | 5 | 0.002310s | 0.003519s | 0.002341s | byte equality observed |
| weighted_sum.test | 10 | 0.001469s | 0.001412s | 0.001386s | byte equality observed |
| weighted_sum_kahan.test | 3 | 0.005795s | 0.009320s | 0.005646s | byte equality observed |
| weighted_tail_mean.test | 2 | 0.018898s | 0.019325s | 0.018366s | byte equality observed |
| weighted_tail_quantile.test | 1 | 0.019856s | 0.021401s | 0.018555s | byte equality observed |
| weighted_tail_variate_means.test | 10 | 0.001560s | 0.001490s | 0.001442s | byte equality observed |
| weighted_variance.test | 8 | 0.001656s | 0.001799s | 0.001595s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44362912212).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
