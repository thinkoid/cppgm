# libs/accumulators/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| count.test | RUN | 0.949843 | 2.721819 | 3.457363 | 0.004220 | 0.004184 | 0.004047 |
| covariance.test | RUN | 1.872275 | 6.777299 | 8.792198 | 0.003700 | 0.003803 | 0.004187 |
| droppable.test | RUN | 1.219152 | 3.643754 | 4.685900 | 0.003900 | 0.003830 | 0.004169 |
| error_of.test | RUN | 1.332247 | 3.515427 | 5.124753 | 0.003723 | 0.003618 | 0.003734 |
| extended_p_square.test | RUN | 1.351832 | 4.512510 | 5.260385 | 0.005934 | 0.006198 | 0.005928 |
| extended_p_square_quantile.test | RUN | 1.785689 | 6.986531 | 7.412289 | 0.012614 | 0.012028 | 0.010562 |
| external_accumulator.test | RUN | 1.137531 | 3.441849 | 4.535985 | 0.003820 | 0.004021 | 0.004134 |
| external_weights.test | RUN | 1.007062 | 2.793925 | 3.600784 | 0.003498 | 0.003480 | 0.003239 |
| kurtosis.test | RUN | 1.529910 | 4.381322 | 6.153813 | 0.004927 | 0.006466 | 0.005441 |
| max.test | RUN | 0.975076 | 2.600558 | 3.355462 | 0.003698 | 0.003841 | 0.004253 |
| mean.test | RUN | 1.276774 | 3.717389 | 4.898261 | 0.003784 | 0.004284 | 0.003965 |
| median.test | RUN | 1.796474 | 7.046152 | 7.416816 | 0.148295 | 0.163340 | 0.148100 |
| min.test | RUN | 0.975011 | 2.582524 | 3.368891 | 0.004012 | 0.004096 | 0.004182 |
| moment.test | RUN | 1.119120 | 3.126976 | 4.032690 | 0.003847 | 0.004121 | 0.003980 |
| p_square_cumul_dist.test | RUN | 1.461226 | 5.179182 | 5.621044 | 1.053152 | 1.288062 | 1.078772 |
| p_square_quantile.test | RUN | 1.249239 | 4.601503 | 4.766925 | 0.036321 | 0.038454 | 0.032822 |
| reference.test | RUN | 1.064035 | 2.954145 | 4.028941 | 0.003379 | 0.003864 | 0.003474 |
| rolling_count.test | RUN | 1.066619 | 3.140714 | 3.929004 | 0.003280 | 0.004292 | 0.003480 |
| rolling_sum.test | RUN | 1.104916 | 3.326571 | 4.184536 | 0.004170 | 0.003540 | 0.003888 |
| rolling_mean.test | RUN | 1.649965 | 5.925573 | 6.661523 | 0.003742 | 0.003561 | 0.003731 |
| rolling_variance.test | RUN | 1.853496 | 6.805119 | 7.615260 | 0.004042 | 0.003781 | 0.003900 |
| rolling_moment.test | RUN | 1.381525 | 4.180726 | 5.154263 | 0.003813 | 0.003920 | 0.004415 |
| skewness.test | RUN | 1.476808 | 4.229549 | 5.784767 | 0.005043 | 0.006197 | 0.005817 |
| sum.test | RUN | 1.030367 | 2.778307 | 3.758382 | 0.003811 | 0.004249 | 0.004429 |
| sum_kahan.test | RUN | 1.113994 | 3.039662 | 3.946375 | 0.019702 | 0.031501 | 0.019923 |
| tail.test | RUN | 1.198282 | 4.171428 | 4.433012 | 0.003798 | 0.003418 | 0.003942 |
| tail_mean.test | RUN | 1.677003 | 5.016701 | 6.582153 | 0.025101 | 0.036722 | 0.026910 |
| tail_quantile.test | RUN | 1.396286 | 4.169194 | 5.081355 | 0.031273 | 0.039097 | 0.028299 |
| variance.test | RUN | 1.308526 | 3.559697 | 4.833482 | 0.003668 | 0.004137 | 0.003818 |
| vector.test | RUN | 1.377066 | 4.445733 | 5.999718 | 0.003337 | 0.003861 | 0.003413 |
| weighted_covariance.test | RUN | 1.899797 | 6.717912 | 9.093180 | 0.003649 | 0.003877 | 0.003851 |
| weighted_extended_p_square.test | RUN | 1.265621 | 4.054382 | 4.839479 | 0.028535 | 0.032307 | 0.027061 |
| weighted_kurtosis.test | RUN | 1.540688 | 4.086685 | 5.725658 | 0.004908 | 0.006484 | 0.005344 |
| weighted_mean.test | RUN | 1.300835 | 3.642875 | 4.861656 | 0.003502 | 0.003827 | 0.003802 |
| weighted_median.test | RUN | 1.660160 | 4.969339 | 6.529114 | 1.279114 | 1.380763 | 1.295505 |
| weighted_moment.test | RUN | 1.056004 | 2.707760 | 3.772671 | 0.003657 | 0.003438 | 0.003810 |
| weighted_p_square_cumul_dist.test | RUN | 1.233237 | 4.358309 | 4.406878 | 0.139663 | 0.168198 | 0.141148 |
| weighted_p_square_quantile.test | RUN | 1.157572 | 3.823994 | 4.236897 | 0.033891 | 0.040308 | 0.036020 |
| weighted_skewness.test | RUN | 1.418725 | 3.961314 | 5.525553 | 0.004796 | 0.006260 | 0.005124 |
| weighted_sum.test | RUN | 0.884878 | 2.290112 | 3.033694 | 0.003336 | 0.003883 | 0.003628 |
| weighted_sum_kahan.test | RUN | 0.801949 | 2.501652 | 3.260564 | 0.011176 | 0.017639 | 0.011902 |
| weighted_variance.test | RUN | 1.563485 | 4.347773 | 6.384059 | 0.003587 | 0.004169 | 0.003798 |
| valarray.test | RUN | 1.481711 | 4.208416 | 5.841700 | 0.003579 | 0.003958 | 0.003767 |
| tail_variate_means.test | RUN | 1.890337 | 6.564504 | 8.104522 | 0.003839 | 0.003821 | 0.003204 |
| pot_quantile.test | RUN | 2.278295 | 7.493200 | 9.606333 | 0.013785 | 0.016021 | 0.014151 |
| weighted_pot_quantile.test | RUN | 2.217834 | 7.349923 | 9.902204 | 0.030262 | 0.042710 | 0.033174 |
| weighted_tail_mean.test | RUN | 1.945836 | 5.932413 | 8.387184 | 0.027752 | 0.034567 | 0.027667 |
| weighted_tail_quantile.test | RUN | 1.983643 | 5.036240 | 7.379491 | 0.022411 | 0.028329 | 0.022858 |
| weighted_tail_variate_means.test | RUN | 2.178163 | 5.762305 | 8.494726 | 0.002452 | 0.002628 | 0.002411 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 1.185× | 1.170×, 1.200× | 0.984× |
| clang | 1.001× | 1.001×, 1.002× | 1.003× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1360 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/43712369003).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| count.test | 1 | 0.003042s | 0.002978s | 0.002953s | byte equality observed |
| covariance.test | 1 | 0.003109s | 0.003024s | 0.003053s | byte equality observed |
| droppable.test | 1 | 0.003032s | 0.002959s | 0.002959s | byte equality observed |
| error_of.test | 4 | 0.002603s | 0.002523s | 0.002515s | byte equality observed |
| extended_p_square.test | 4 | 0.004550s | 0.004648s | 0.004294s | byte equality observed |
| extended_p_square_quantile.test | 2 | 0.009774s | 0.010381s | 0.009150s | byte equality observed |
| external_accumulator.test | 5 | 0.002688s | 0.002647s | 0.002565s | byte equality observed |
| external_weights.test | 3 | 0.002528s | 0.002499s | 0.002482s | byte equality observed |
| kurtosis.test | 4 | 0.003992s | 0.004698s | 0.003912s | byte equality observed |
| max.test | 4 | 0.002708s | 0.002609s | 0.002602s | byte equality observed |
| mean.test | 7 | 0.002644s | 0.002561s | 0.002571s | byte equality observed |
| median.test | 1 | 0.142174s | 0.169573s | 0.141949s | byte equality observed |
| min.test | 5 | 0.002642s | 0.002541s | 0.002462s | byte equality observed |
| moment.test | 4 | 0.002722s | 0.002572s | 0.002530s | byte equality observed |
| p_square_cumul_dist.test | 1 | 0.899196s | 1.163794s | 0.909968s | byte equality observed |
| p_square_quantile.test | 1 | 0.035523s | 0.035275s | 0.030814s | byte equality observed |
| pot_quantile.test | 2 | 0.012507s | 0.013407s | 0.011884s | byte equality observed |
| reference.test | 6 | 0.002641s | 0.002581s | 0.002474s | byte equality observed |
| rolling_count.test | 5 | 0.002707s | 0.002496s | 0.002465s | byte equality observed |
| rolling_mean.test | 6 | 0.002836s | 0.002670s | 0.002587s | byte equality observed |
| rolling_moment.test | 6 | 0.002844s | 0.002630s | 0.002540s | byte equality observed |
| rolling_sum.test | 7 | 0.002644s | 0.002501s | 0.002500s | byte equality observed |
| rolling_variance.test | 6 | 0.002804s | 0.002611s | 0.002571s | byte equality observed |
| skewness.test | 4 | 0.003929s | 0.004619s | 0.003932s | byte equality observed |
| sum.test | 7 | 0.002608s | 0.002533s | 0.002431s | byte equality observed |
| sum_kahan.test | 1 | 0.018270s | 0.029894s | 0.017945s | byte equality observed |
| tail.test | 7 | 0.002571s | 0.002451s | 0.002500s | byte equality observed |
| tail_mean.test | 1 | 0.023056s | 0.031651s | 0.026611s | byte equality observed |
| tail_quantile.test | 1 | 0.029322s | 0.039919s | 0.027828s | byte equality observed |
| tail_variate_means.test | 6 | 0.002537s | 0.002335s | 0.002469s | byte equality observed |
| valarray.test | 6 | 0.002531s | 0.002341s | 0.002441s | byte equality observed |
| variance.test | 6 | 0.002706s | 0.002481s | 0.002539s | byte equality observed |
| vector.test | 7 | 0.002568s | 0.002414s | 0.002401s | byte equality observed |
| weighted_covariance.test | 7 | 0.002520s | 0.002432s | 0.002385s | byte equality observed |
| weighted_extended_p_square.test | 1 | 0.027272s | 0.031058s | 0.024793s | byte equality observed |
| weighted_kurtosis.test | 4 | 0.003987s | 0.005205s | 0.003930s | byte equality observed |
| weighted_mean.test | 7 | 0.002475s | 0.002398s | 0.002417s | byte equality observed |
| weighted_median.test | 1 | 1.144427s | 1.267686s | 1.141840s | byte equality observed |
| weighted_moment.test | 6 | 0.002403s | 0.002366s | 0.002339s | byte equality observed |
| weighted_p_square_cumul_dist.test | 1 | 0.140288s | 0.180869s | 0.141753s | byte equality observed |
| weighted_p_square_quantile.test | 1 | 0.034042s | 0.039485s | 0.033069s | byte equality observed |
| weighted_pot_quantile.test | 1 | 0.030405s | 0.032400s | 0.029113s | byte equality observed |
| weighted_skewness.test | 4 | 0.003889s | 0.005015s | 0.003738s | byte equality observed |
| weighted_sum.test | 7 | 0.002373s | 0.002309s | 0.002281s | byte equality observed |
| weighted_sum_kahan.test | 2 | 0.010093s | 0.015766s | 0.009960s | byte equality observed |
| weighted_tail_mean.test | 1 | 0.023799s | 0.029499s | 0.025046s | byte equality observed |
| weighted_tail_quantile.test | 1 | 0.026813s | 0.034573s | 0.027685s | byte equality observed |
| weighted_tail_variate_means.test | 5 | 0.002480s | 0.002369s | 0.002416s | byte equality observed |
| weighted_variance.test | 7 | 0.002684s | 0.002793s | 0.002528s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/43712369003).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
