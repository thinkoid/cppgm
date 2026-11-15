# libs/accumulators/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| count.test | RUN | 0.614074 | 1.762510 | 1.898979 | 0.002479 | 0.002755 | 0.002265 |
| covariance.test | RUN | 1.213342 | 4.702012 | 4.999526 | 0.002366 | 0.002471 | 0.002380 |
| droppable.test | RUN | 0.775179 | 2.363501 | 2.558021 | 0.002300 | 0.002508 | 0.002362 |
| error_of.test | RUN | 0.842319 | 2.307242 | 2.809901 | 0.002050 | 0.002154 | 0.002080 |
| extended_p_square.test | RUN | 0.867704 | 3.005283 | 2.885983 | 0.003696 | 0.003945 | 0.003651 |
| extended_p_square_quantile.test | RUN | 1.144242 | 4.815956 | 4.240794 | 0.007009 | 0.007917 | 0.006714 |
| external_accumulator.test | RUN | 0.753191 | 2.262778 | 2.521840 | 0.002343 | 0.002682 | 0.002356 |
| external_weights.test | RUN | 0.644977 | 1.740329 | 2.064095 | 0.002157 | 0.002245 | 0.002393 |
| kurtosis.test | RUN | 0.983016 | 2.901793 | 3.398177 | 0.003092 | 0.003985 | 0.003357 |
| max.test | RUN | 0.608039 | 1.710463 | 1.886245 | 0.002464 | 0.002500 | 0.002331 |
| mean.test | RUN | 0.807111 | 2.468473 | 2.821517 | 0.002341 | 0.002410 | 0.002385 |
| median.test | RUN | 1.134981 | 4.857430 | 4.321060 | 0.102714 | 0.119526 | 0.105155 |
| min.test | RUN | 0.608643 | 1.697196 | 1.955944 | 0.002264 | 0.002261 | 0.002390 |
| moment.test | RUN | 0.709201 | 1.999867 | 2.250199 | 0.002245 | 0.002484 | 0.002443 |
| p_square_cumul_dist.test | RUN | 0.905916 | 3.443232 | 3.206962 | 0.715202 | 0.909934 | 0.705137 |
| p_square_quantile.test | RUN | 0.792406 | 3.054102 | 2.747969 | 0.021993 | 0.024358 | 0.021971 |
| reference.test | RUN | 0.691611 | 1.916458 | 2.186375 | 0.002218 | 0.002258 | 0.001955 |
| rolling_count.test | RUN | 0.725327 | 2.210614 | 2.382647 | 0.002143 | 0.002348 | 0.002343 |
| rolling_sum.test | RUN | 0.726034 | 2.237583 | 2.316059 | 0.002437 | 0.002414 | 0.002429 |
| rolling_mean.test | RUN | 1.048245 | 4.029443 | 3.887415 | 0.002839 | 0.002447 | 0.002373 |
| rolling_variance.test | RUN | 1.239087 | 4.701335 | 4.415858 | 0.002577 | 0.002388 | 0.002275 |
| rolling_moment.test | RUN | 0.888746 | 2.701263 | 2.866300 | 0.002426 | 0.002148 | 0.002235 |
| skewness.test | RUN | 0.938880 | 2.743463 | 3.183620 | 0.003267 | 0.004078 | 0.002923 |
| sum.test | RUN | 0.641170 | 1.867473 | 2.092211 | 0.002282 | 0.002550 | 0.002202 |
| sum_kahan.test | RUN | 0.700203 | 2.024959 | 2.194443 | 0.011667 | 0.018812 | 0.011457 |
| tail.test | RUN | 0.774120 | 2.779517 | 2.523080 | 0.002280 | 0.002366 | 0.002388 |
| tail_mean.test | RUN | 1.078782 | 3.263105 | 3.702514 | 0.018756 | 0.022514 | 0.019907 |
| tail_quantile.test | RUN | 0.879588 | 2.709950 | 2.809658 | 0.022857 | 0.026021 | 0.021161 |
| variance.test | RUN | 0.841271 | 2.415963 | 2.791968 | 0.002493 | 0.002435 | 0.002444 |
| vector.test | RUN | 0.923315 | 3.022895 | 3.445952 | 0.002347 | 0.002374 | 0.002275 |
| weighted_covariance.test | RUN | 1.222846 | 4.631623 | 5.080250 | 0.002021 | 0.002167 | 0.002180 |
| weighted_extended_p_square.test | RUN | 0.825688 | 2.681748 | 2.630047 | 0.019698 | 0.021305 | 0.016975 |
| weighted_kurtosis.test | RUN | 0.975146 | 2.643006 | 3.263331 | 0.003330 | 0.004718 | 0.003142 |
| weighted_mean.test | RUN | 0.813221 | 2.382319 | 2.798097 | 0.002126 | 0.002675 | 0.002090 |
| weighted_median.test | RUN | 1.076159 | 3.260996 | 3.690164 | 0.977319 | 1.062766 | 0.970939 |
| weighted_moment.test | RUN | 0.661502 | 1.777418 | 2.075901 | 0.002357 | 0.002301 | 0.002368 |
| weighted_p_square_cumul_dist.test | RUN | 0.823002 | 2.779136 | 2.572624 | 0.097121 | 0.137928 | 0.096502 |
| weighted_p_square_quantile.test | RUN | 0.772416 | 2.569269 | 2.203711 | 0.022743 | 0.026703 | 0.021916 |
| weighted_skewness.test | RUN | 0.821422 | 2.596182 | 3.060791 | 0.002827 | 0.004503 | 0.002867 |
| weighted_sum.test | RUN | 0.541736 | 1.495096 | 1.596981 | 0.002246 | 0.002534 | 0.002279 |
| weighted_sum_kahan.test | RUN | 0.593784 | 1.612696 | 1.775836 | 0.006727 | 0.010464 | 0.006714 |
| weighted_variance.test | RUN | 1.011135 | 2.994598 | 3.555196 | 0.002206 | 0.002862 | 0.002240 |
| valarray.test | RUN | 0.911334 | 2.831083 | 3.279994 | 0.002269 | 0.002168 | 0.002211 |
| tail_variate_means.test | RUN | 1.228298 | 4.533937 | 4.642433 | 0.002150 | 0.002458 | 0.002300 |
| pot_quantile.test | RUN | 1.473168 | 5.051994 | 5.460858 | 0.008987 | 0.011193 | 0.008272 |
| weighted_pot_quantile.test | RUN | 1.475703 | 4.728736 | 5.549588 | 0.023236 | 0.019143 | 0.021571 |
| weighted_tail_mean.test | RUN | 1.284874 | 3.875339 | 4.615037 | 0.019763 | 0.022801 | 0.019699 |
| weighted_tail_quantile.test | RUN | 1.292856 | 3.440715 | 4.136467 | 0.016020 | 0.018581 | 0.015577 |
| weighted_tail_variate_means.test | RUN | 1.410192 | 4.239390 | 4.754935 | 0.001678 | 0.001681 | 0.001502 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 1.166× | 1.173×, 1.160× | 1.011× |
| clang | 1.001× | 1.002×, 1.001× | 1.004× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1364 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/43740486413).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| count.test | 4 | 0.001666s | 0.001616s | 0.001631s | byte equality observed |
| covariance.test | 1 | 0.002066s | 0.002079s | 0.002033s | byte equality observed |
| droppable.test | 1 | 0.001835s | 0.001778s | 0.001932s | byte equality observed |
| error_of.test | 1 | 0.001837s | 0.001684s | 0.001777s | byte equality observed |
| extended_p_square.test | 5 | 0.002874s | 0.002949s | 0.002798s | byte equality observed |
| extended_p_square_quantile.test | 3 | 0.006003s | 0.006386s | 0.005885s | byte equality observed |
| external_accumulator.test | 7 | 0.001565s | 0.001552s | 0.001504s | byte equality observed |
| external_weights.test | 10 | 0.001505s | 0.001467s | 0.001456s | byte equality observed |
| kurtosis.test | 6 | 0.002314s | 0.003098s | 0.002236s | byte equality observed |
| max.test | 8 | 0.001596s | 0.001530s | 0.001523s | byte equality observed |
| mean.test | 9 | 0.001599s | 0.001554s | 0.001496s | byte equality observed |
| median.test | 1 | 0.099681s | 0.123239s | 0.098078s | byte equality observed |
| min.test | 5 | 0.001571s | 0.001547s | 0.001502s | byte equality observed |
| moment.test | 7 | 0.001551s | 0.001500s | 0.001508s | byte equality observed |
| p_square_cumul_dist.test | 1 | 0.632138s | 0.791210s | 0.629011s | byte equality observed |
| p_square_quantile.test | 1 | 0.021574s | 0.023331s | 0.020700s | byte equality observed |
| pot_quantile.test | 2 | 0.008465s | 0.009643s | 0.008179s | byte equality observed |
| reference.test | 8 | 0.001541s | 0.001479s | 0.001499s | byte equality observed |
| rolling_count.test | 10 | 0.001584s | 0.001546s | 0.001520s | byte equality observed |
| rolling_mean.test | 10 | 0.001639s | 0.001586s | 0.001587s | byte equality observed |
| rolling_moment.test | 10 | 0.001600s | 0.001556s | 0.001561s | byte equality observed |
| rolling_sum.test | 10 | 0.001567s | 0.001524s | 0.001517s | byte equality observed |
| rolling_variance.test | 10 | 0.001646s | 0.001607s | 0.001602s | byte equality observed |
| skewness.test | 6 | 0.002224s | 0.003002s | 0.002304s | byte equality observed |
| sum.test | 10 | 0.001563s | 0.001506s | 0.001508s | byte equality observed |
| sum_kahan.test | 1 | 0.010217s | 0.017750s | 0.010433s | byte equality observed |
| tail.test | 10 | 0.001604s | 0.001512s | 0.001536s | byte equality observed |
| tail_mean.test | 2 | 0.017639s | 0.017590s | 0.018343s | byte equality observed |
| tail_quantile.test | 1 | 0.020549s | 0.023671s | 0.020368s | byte equality observed |
| tail_variate_means.test | 10 | 0.001558s | 0.001483s | 0.001438s | byte equality observed |
| valarray.test | 10 | 0.001500s | 0.001490s | 0.001476s | byte equality observed |
| variance.test | 10 | 0.001580s | 0.001534s | 0.001482s | byte equality observed |
| vector.test | 10 | 0.001513s | 0.001482s | 0.001442s | byte equality observed |
| weighted_covariance.test | 10 | 0.001513s | 0.001470s | 0.001459s | byte equality observed |
| weighted_extended_p_square.test | 1 | 0.016879s | 0.019991s | 0.016651s | byte equality observed |
| weighted_kurtosis.test | 5 | 0.002361s | 0.003583s | 0.002298s | byte equality observed |
| weighted_mean.test | 9 | 0.001489s | 0.001439s | 0.001414s | byte equality observed |
| weighted_median.test | 1 | 0.854581s | 0.926044s | 0.867428s | byte equality observed |
| weighted_moment.test | 10 | 0.001458s | 0.001443s | 0.001381s | byte equality observed |
| weighted_p_square_cumul_dist.test | 1 | 0.102670s | 0.143282s | 0.098304s | byte equality observed |
| weighted_p_square_quantile.test | 1 | 0.021716s | 0.026832s | 0.021993s | byte equality observed |
| weighted_pot_quantile.test | 1 | 0.021659s | 0.023337s | 0.021195s | byte equality observed |
| weighted_skewness.test | 6 | 0.002297s | 0.003553s | 0.002387s | byte equality observed |
| weighted_sum.test | 10 | 0.001454s | 0.001418s | 0.001399s | byte equality observed |
| weighted_sum_kahan.test | 3 | 0.005757s | 0.009371s | 0.005772s | byte equality observed |
| weighted_tail_mean.test | 2 | 0.018580s | 0.019366s | 0.019015s | byte equality observed |
| weighted_tail_quantile.test | 1 | 0.019179s | 0.021447s | 0.020305s | byte equality observed |
| weighted_tail_variate_means.test | 8 | 0.001506s | 0.001464s | 0.001475s | byte equality observed |
| weighted_variance.test | 6 | 0.001637s | 0.001778s | 0.001603s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/43740486413).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
