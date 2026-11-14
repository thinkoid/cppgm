# libs/accumulators/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| count.test | RUN | 0.587429 | 1.577596 | 1.574288 | 0.003316 | 0.003271 | 0.003066 |
| covariance.test | RUN | 1.185426 | 4.342416 | 4.323950 | 0.003285 | 0.003194 | 0.003029 |
| droppable.test | RUN | 0.754839 | 2.331405 | 2.190268 | 0.002941 | 0.003311 | 0.002841 |
| error_of.test | RUN | 0.830766 | 2.198727 | 2.404615 | 0.003059 | 0.003060 | 0.002599 |
| extended_p_square.test | RUN | 0.876645 | 2.742056 | 2.469729 | 0.004382 | 0.004520 | 0.003913 |
| extended_p_square_quantile.test | RUN | 1.126790 | 4.521753 | 3.550342 | 0.007403 | 0.007581 | 0.006776 |
| external_accumulator.test | RUN | 0.749714 | 2.061726 | 2.130342 | 0.003693 | 0.002862 | 0.003002 |
| external_weights.test | RUN | 0.655783 | 1.668139 | 1.713263 | 0.002711 | 0.002821 | 0.002889 |
| kurtosis.test | RUN | 1.012554 | 2.715069 | 2.957661 | 0.005228 | 0.004362 | 0.003668 |
| max.test | RUN | 0.624402 | 1.671419 | 1.639752 | 0.003123 | 0.002627 | 0.003068 |
| mean.test | RUN | 0.830771 | 2.319754 | 2.443769 | 0.003377 | 0.003376 | 0.006425 |
| median.test | RUN | 1.161550 | 4.309103 | 3.806602 | 0.099228 | 0.092975 | 0.093088 |
| min.test | RUN | 0.624384 | 1.515011 | 1.647170 | 0.003153 | 0.003237 | 0.002799 |
| moment.test | RUN | 0.702450 | 1.806808 | 2.056701 | 0.003387 | 0.003172 | 0.002800 |
| p_square_cumul_dist.test | RUN | 0.940577 | 3.031803 | 2.843640 | 0.734435 | 0.759204 | 0.629568 |
| p_square_quantile.test | RUN | 0.800720 | 2.716677 | 2.365308 | 0.022714 | 0.021655 | 0.019511 |
| reference.test | RUN | 0.708361 | 1.719520 | 1.907336 | 0.003012 | 0.002891 | 0.002544 |
| rolling_count.test | RUN | 0.710933 | 2.008276 | 1.843866 | 0.002872 | 0.003133 | 0.002720 |
| rolling_sum.test | RUN | 0.688410 | 2.018525 | 1.984588 | 0.003246 | 0.002905 | 0.002977 |
| rolling_mean.test | RUN | 1.035365 | 3.635204 | 3.337049 | 0.003098 | 0.003313 | 0.003030 |
| rolling_variance.test | RUN | 1.149712 | 4.280127 | 3.809274 | 0.003049 | 0.003133 | 0.003237 |
| rolling_moment.test | RUN | 0.878319 | 2.487933 | 2.474882 | 0.003152 | 0.003306 | 0.003359 |
| skewness.test | RUN | 0.904569 | 2.539007 | 2.814904 | 0.005128 | 0.004319 | 0.003894 |
| sum.test | RUN | 0.634389 | 1.718206 | 1.820834 | 0.003126 | 0.003123 | 0.003002 |
| sum_kahan.test | RUN | 0.670360 | 1.844567 | 1.957171 | 0.012267 | 0.020224 | 0.011209 |
| tail.test | RUN | 0.734471 | 2.485165 | 2.197769 | 0.003042 | 0.003109 | 0.002915 |
| tail_mean.test | RUN | 1.026253 | 2.893170 | 3.249719 | 0.018541 | 0.021254 | 0.019121 |
| tail_quantile.test | RUN | 0.855739 | 2.368033 | 2.577122 | 0.022922 | 0.025646 | 0.020423 |
| variance.test | RUN | 0.829957 | 2.125957 | 2.514449 | 0.002880 | 0.003203 | 0.003300 |
| vector.test | RUN | 0.867013 | 2.656463 | 3.048421 | 0.003114 | 0.002847 | 0.002756 |
| weighted_covariance.test | RUN | 1.201287 | 4.145183 | 4.447936 | 0.002884 | 0.002856 | 0.002520 |
| weighted_extended_p_square.test | RUN | 0.812560 | 2.408797 | 2.306899 | 0.019493 | 0.019421 | 0.016267 |
| weighted_kurtosis.test | RUN | 0.961859 | 2.414462 | 2.765392 | 0.005469 | 0.004938 | 0.003686 |
| weighted_mean.test | RUN | 0.791097 | 2.154454 | 2.461030 | 0.002941 | 0.002950 | 0.002792 |
| weighted_median.test | RUN | 1.078068 | 2.924737 | 3.277758 | 0.911593 | 0.957884 | 0.895943 |
| weighted_moment.test | RUN | 0.630895 | 1.559638 | 1.859691 | 0.002726 | 0.002914 | 0.002814 |
| weighted_p_square_cumul_dist.test | RUN | 0.766405 | 2.450496 | 2.200367 | 0.107876 | 0.130705 | 0.087719 |
| weighted_p_square_quantile.test | RUN | 0.715988 | 2.401772 | 2.125086 | 0.028062 | 0.024561 | 0.020457 |
| weighted_skewness.test | RUN | 0.839314 | 2.304529 | 2.817688 | 0.005343 | 0.004961 | 0.003819 |
| weighted_sum.test | RUN | 0.479670 | 1.351450 | 1.491482 | 0.002558 | 0.003014 | 0.002765 |
| weighted_sum_kahan.test | RUN | 0.547249 | 1.492998 | 1.639076 | 0.007323 | 0.011898 | 0.006809 |
| weighted_variance.test | RUN | 0.928287 | 2.664570 | 3.247371 | 0.003358 | 0.003339 | 0.003219 |
| valarray.test | RUN | 0.862934 | 2.546888 | 3.089321 | 0.002906 | 0.002997 | 0.002993 |
| tail_variate_means.test | RUN | 1.114637 | 3.978334 | 4.322957 | 0.002889 | 0.002936 | 0.003178 |
| pot_quantile.test | RUN | 1.364924 | 4.437069 | 5.028962 | 0.014194 | 0.010766 | 0.008790 |
| weighted_pot_quantile.test | RUN | 1.436451 | 4.209496 | 4.984152 | 0.025521 | 0.019078 | 0.021305 |
| weighted_tail_mean.test | RUN | 1.263389 | 3.446339 | 4.069637 | 0.020300 | 0.021937 | 0.016035 |
| weighted_tail_quantile.test | RUN | 1.285802 | 3.183299 | 3.673891 | 0.019082 | 0.017923 | 0.015811 |
| weighted_tail_variate_means.test | RUN | 1.425191 | 3.881028 | 4.222231 | 0.002228 | 0.002071 | 0.002065 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 1.023× | 1.019×, 1.027× | 0.985× |
| clang | 0.909× | 0.909×, 0.910× | 0.993× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1363 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43624536445).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| count.test | 1 | 0.002374s | 0.002334s | 0.002261s | byte equality observed |
| covariance.test | 1 | 0.002295s | 0.002398s | 0.002317s | byte equality observed |
| droppable.test | 1 | 0.002357s | 0.002390s | 0.002345s | byte equality observed |
| error_of.test | 1 | 0.002251s | 0.002270s | 0.002167s | byte equality observed |
| extended_p_square.test | 5 | 0.003130s | 0.003074s | 0.002862s | byte equality observed |
| extended_p_square_quantile.test | 3 | 0.005492s | 0.005979s | 0.005061s | byte equality observed |
| external_accumulator.test | 7 | 0.001901s | 0.001851s | 0.001779s | byte equality observed |
| external_weights.test | 8 | 0.001823s | 0.001750s | 0.001704s | byte equality observed |
| kurtosis.test | 5 | 0.003998s | 0.003315s | 0.002409s | byte equality observed |
| max.test | 8 | 0.001883s | 0.001816s | 0.001757s | byte equality observed |
| mean.test | 5 | 0.001867s | 0.001877s | 0.001836s | byte equality observed |
| median.test | 1 | 0.092175s | 0.093575s | 0.088323s | byte equality observed |
| min.test | 8 | 0.001855s | 0.001817s | 0.001752s | byte equality observed |
| moment.test | 7 | 0.001866s | 0.001792s | 0.001800s | byte equality observed |
| p_square_cumul_dist.test | 1 | 0.662671s | 0.704979s | 0.604902s | byte equality observed |
| p_square_quantile.test | 1 | 0.022731s | 0.021214s | 0.018721s | byte equality observed |
| pot_quantile.test | 2 | 0.012961s | 0.009792s | 0.007817s | byte equality observed |
| reference.test | 8 | 0.001923s | 0.001936s | 0.001761s | byte equality observed |
| rolling_count.test | 9 | 0.001898s | 0.001914s | 0.001773s | byte equality observed |
| rolling_mean.test | 8 | 0.001972s | 0.001949s | 0.001814s | byte equality observed |
| rolling_moment.test | 8 | 0.001960s | 0.001923s | 0.001860s | byte equality observed |
| rolling_sum.test | 7 | 0.001841s | 0.001885s | 0.001831s | byte equality observed |
| rolling_variance.test | 7 | 0.001956s | 0.001943s | 0.001855s | byte equality observed |
| skewness.test | 5 | 0.003916s | 0.003292s | 0.002547s | byte equality observed |
| sum.test | 9 | 0.001851s | 0.001839s | 0.001820s | byte equality observed |
| sum_kahan.test | 1 | 0.010749s | 0.019811s | 0.009724s | byte equality observed |
| tail.test | 6 | 0.001835s | 0.001820s | 0.001793s | byte equality observed |
| tail_mean.test | 1 | 0.017202s | 0.017808s | 0.016468s | byte equality observed |
| tail_quantile.test | 1 | 0.021147s | 0.021851s | 0.018644s | byte equality observed |
| tail_variate_means.test | 6 | 0.001820s | 0.001778s | 0.001775s | byte equality observed |
| valarray.test | 8 | 0.001766s | 0.001761s | 0.001762s | byte equality observed |
| variance.test | 8 | 0.001880s | 0.001760s | 0.001826s | byte equality observed |
| vector.test | 8 | 0.001785s | 0.001690s | 0.001744s | byte equality observed |
| weighted_covariance.test | 7 | 0.001785s | 0.001798s | 0.001733s | byte equality observed |
| weighted_extended_p_square.test | 1 | 0.017967s | 0.018058s | 0.014591s | byte equality observed |
| weighted_kurtosis.test | 4 | 0.004466s | 0.003843s | 0.002542s | byte equality observed |
| weighted_mean.test | 9 | 0.001756s | 0.001749s | 0.001682s | byte equality observed |
| weighted_median.test | 1 | 0.866027s | 0.862936s | 0.814840s | byte equality observed |
| weighted_moment.test | 8 | 0.001735s | 0.001758s | 0.001709s | byte equality observed |
| weighted_p_square_cumul_dist.test | 1 | 0.106726s | 0.115446s | 0.084632s | byte equality observed |
| weighted_p_square_quantile.test | 1 | 0.028235s | 0.025860s | 0.019805s | byte equality observed |
| weighted_pot_quantile.test | 1 | 0.025065s | 0.022403s | 0.019642s | byte equality observed |
| weighted_skewness.test | 4 | 0.004758s | 0.004103s | 0.002570s | byte equality observed |
| weighted_sum.test | 9 | 0.001813s | 0.001786s | 0.001717s | byte equality observed |
| weighted_sum_kahan.test | 2 | 0.006305s | 0.010892s | 0.005688s | byte equality observed |
| weighted_tail_mean.test | 1 | 0.018805s | 0.019299s | 0.018096s | byte equality observed |
| weighted_tail_quantile.test | 1 | 0.021512s | 0.021392s | 0.018908s | byte equality observed |
| weighted_tail_variate_means.test | 8 | 0.001867s | 0.001814s | 0.001730s | byte equality observed |
| weighted_variance.test | 8 | 0.002223s | 0.002077s | 0.001767s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43624536445).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
