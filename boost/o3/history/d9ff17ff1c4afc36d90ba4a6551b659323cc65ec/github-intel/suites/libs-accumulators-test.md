# libs/accumulators/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| count.test | RUN | 0.576218 | 1.671930 | 1.843260 | 0.002062 | 0.002150 | 0.001848 |
| covariance.test | RUN | 1.080329 | 4.318827 | 4.763665 | 0.002006 | 0.002160 | 0.002044 |
| droppable.test | RUN | 0.722428 | 2.280387 | 2.497032 | 0.001984 | 0.002163 | 0.001864 |
| error_of.test | RUN | 0.777538 | 2.210035 | 2.712616 | 0.001737 | 0.001961 | 0.001637 |
| extended_p_square.test | RUN | 0.821595 | 2.893947 | 2.861915 | 0.003300 | 0.003766 | 0.003164 |
| extended_p_square_quantile.test | RUN | 1.068144 | 4.480727 | 4.029917 | 0.006750 | 0.007565 | 0.006286 |
| external_accumulator.test | RUN | 0.697887 | 2.199733 | 2.364179 | 0.002071 | 0.002193 | 0.001858 |
| external_weights.test | RUN | 0.606429 | 1.651166 | 1.878902 | 0.001964 | 0.001995 | 0.001855 |
| kurtosis.test | RUN | 0.898370 | 2.781656 | 3.262313 | 0.003010 | 0.003718 | 0.002832 |
| max.test | RUN | 0.573279 | 1.667775 | 1.802249 | 0.002047 | 0.002072 | 0.001890 |
| mean.test | RUN | 0.775251 | 2.330276 | 2.593483 | 0.001946 | 0.002316 | 0.001913 |
| median.test | RUN | 1.060045 | 4.743344 | 4.107146 | 0.102826 | 0.119601 | 0.102440 |
| min.test | RUN | 0.580003 | 1.625611 | 1.785840 | 0.002025 | 0.002129 | 0.001871 |
| moment.test | RUN | 0.669872 | 1.904600 | 2.197376 | 0.001905 | 0.002166 | 0.001951 |
| p_square_cumul_dist.test | RUN | 0.857064 | 3.263708 | 3.017241 | 0.731920 | 0.904808 | 0.726762 |
| p_square_quantile.test | RUN | 0.758660 | 2.966886 | 2.537659 | 0.022516 | 0.023803 | 0.021191 |
| reference.test | RUN | 0.645387 | 1.858389 | 2.127079 | 0.001853 | 0.002040 | 0.001882 |
| rolling_count.test | RUN | 0.693009 | 1.977679 | 2.245297 | 0.001715 | 0.002262 | 0.001871 |
| rolling_sum.test | RUN | 0.688220 | 2.113910 | 2.049742 | 0.002097 | 0.002193 | 0.001890 |
| rolling_mean.test | RUN | 1.002089 | 3.789588 | 3.679127 | 0.002279 | 0.002446 | 0.001960 |
| rolling_variance.test | RUN | 1.084463 | 4.425985 | 4.140318 | 0.001935 | 0.002222 | 0.001871 |
| rolling_moment.test | RUN | 0.825743 | 2.597176 | 2.742837 | 0.002102 | 0.002288 | 0.002108 |
| skewness.test | RUN | 0.869466 | 2.637674 | 3.044890 | 0.003153 | 0.003713 | 0.002774 |
| sum.test | RUN | 0.610411 | 1.787603 | 2.032860 | 0.002126 | 0.002132 | 0.002022 |
| sum_kahan.test | RUN | 0.645935 | 1.933546 | 2.087271 | 0.011409 | 0.018679 | 0.010982 |
| tail.test | RUN | 0.703729 | 2.682449 | 2.359231 | 0.001790 | 0.002216 | 0.001866 |
| tail_mean.test | RUN | 1.000464 | 3.100826 | 3.510438 | 0.018690 | 0.022441 | 0.019090 |
| tail_quantile.test | RUN | 0.818592 | 2.572348 | 2.741374 | 0.021600 | 0.024120 | 0.020724 |
| variance.test | RUN | 0.764174 | 2.288653 | 2.638756 | 0.001922 | 0.002094 | 0.001853 |
| vector.test | RUN | 0.827093 | 2.819068 | 3.203502 | 0.001798 | 0.002082 | 0.001769 |
| weighted_covariance.test | RUN | 1.110656 | 4.357992 | 4.778241 | 0.001755 | 0.002118 | 0.001800 |
| weighted_extended_p_square.test | RUN | 0.778014 | 2.585429 | 2.452898 | 0.018733 | 0.021312 | 0.016802 |
| weighted_kurtosis.test | RUN | 0.899104 | 2.542709 | 3.052395 | 0.002765 | 0.004295 | 0.002413 |
| weighted_mean.test | RUN | 0.747703 | 2.247218 | 2.589258 | 0.002051 | 0.001989 | 0.001798 |
| weighted_median.test | RUN | 0.983710 | 3.108387 | 3.450560 | 0.969814 | 1.043583 | 0.977180 |
| weighted_moment.test | RUN | 0.604680 | 1.679776 | 1.977672 | 0.001910 | 0.001963 | 0.001776 |
| weighted_p_square_cumul_dist.test | RUN | 0.768422 | 2.643199 | 2.421079 | 0.098540 | 0.118017 | 0.094851 |
| weighted_p_square_quantile.test | RUN | 0.704052 | 2.442000 | 2.160950 | 0.021768 | 0.026224 | 0.021638 |
| weighted_skewness.test | RUN | 0.840189 | 2.445566 | 2.847758 | 0.002799 | 0.004225 | 0.002327 |
| weighted_sum.test | RUN | 0.461348 | 1.398448 | 1.519514 | 0.002206 | 0.002152 | 0.001893 |
| weighted_sum_kahan.test | RUN | 0.562082 | 1.530170 | 1.655369 | 0.006430 | 0.010537 | 0.006309 |
| weighted_variance.test | RUN | 0.877341 | 2.824756 | 3.359722 | 0.002208 | 0.002380 | 0.001973 |
| valarray.test | RUN | 0.881619 | 2.658071 | 3.160235 | 0.001966 | 0.001993 | 0.001821 |
| tail_variate_means.test | RUN | 1.129906 | 4.281965 | 4.255039 | 0.001963 | 0.002128 | 0.001802 |
| pot_quantile.test | RUN | 1.355324 | 4.736146 | 5.140796 | 0.008718 | 0.011005 | 0.008410 |
| weighted_pot_quantile.test | RUN | 1.373553 | 4.573371 | 5.097891 | 0.022546 | 0.018763 | 0.021697 |
| weighted_tail_mean.test | RUN | 1.185763 | 3.667230 | 4.280579 | 0.018195 | 0.021872 | 0.015232 |
| weighted_tail_quantile.test | RUN | 1.177807 | 3.149816 | 3.898372 | 0.015568 | 0.017793 | 0.015225 |
| weighted_tail_variate_means.test | RUN | 1.260420 | 3.938450 | 4.429564 | 0.001369 | 0.001404 | 0.001393 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 1.168× | 1.176×, 1.159× | 1.007× |
| clang | 0.994× | 0.993×, 0.995× | 0.987× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1362 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43670794197).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| count.test | 1 | 0.001681s | 0.001531s | 0.001589s | byte equality observed |
| covariance.test | 1 | 0.001707s | 0.001727s | 0.001674s | byte equality observed |
| droppable.test | 1 | 0.001607s | 0.001613s | 0.001635s | byte equality observed |
| error_of.test | 1 | 0.001589s | 0.001598s | 0.001490s | byte equality observed |
| extended_p_square.test | 6 | 0.002843s | 0.002939s | 0.002691s | byte equality observed |
| extended_p_square_quantile.test | 3 | 0.005950s | 0.006592s | 0.005791s | byte equality observed |
| external_accumulator.test | 10 | 0.001575s | 0.001526s | 0.001514s | byte equality observed |
| external_weights.test | 9 | 0.001511s | 0.001492s | 0.001464s | byte equality observed |
| kurtosis.test | 4 | 0.002335s | 0.003100s | 0.002263s | byte equality observed |
| max.test | 9 | 0.001561s | 0.001520s | 0.001518s | byte equality observed |
| mean.test | 6 | 0.001623s | 0.001526s | 0.001556s | byte equality observed |
| median.test | 1 | 0.100309s | 0.112269s | 0.098210s | byte equality observed |
| min.test | 7 | 0.001569s | 0.001545s | 0.001510s | byte equality observed |
| moment.test | 8 | 0.001574s | 0.001524s | 0.001509s | byte equality observed |
| p_square_cumul_dist.test | 1 | 0.630866s | 0.792385s | 0.621371s | byte equality observed |
| p_square_quantile.test | 1 | 0.021525s | 0.023721s | 0.020407s | byte equality observed |
| pot_quantile.test | 3 | 0.008294s | 0.009469s | 0.007993s | byte equality observed |
| reference.test | 7 | 0.001536s | 0.001484s | 0.001481s | byte equality observed |
| rolling_count.test | 10 | 0.001577s | 0.001512s | 0.001523s | byte equality observed |
| rolling_mean.test | 10 | 0.001639s | 0.001611s | 0.001558s | byte equality observed |
| rolling_moment.test | 10 | 0.001628s | 0.001554s | 0.001571s | byte equality observed |
| rolling_sum.test | 10 | 0.001571s | 0.001531s | 0.001528s | byte equality observed |
| rolling_variance.test | 10 | 0.001642s | 0.001615s | 0.001570s | byte equality observed |
| skewness.test | 6 | 0.002255s | 0.002973s | 0.002257s | byte equality observed |
| sum.test | 10 | 0.001556s | 0.001498s | 0.001460s | byte equality observed |
| sum_kahan.test | 2 | 0.010381s | 0.017384s | 0.009973s | byte equality observed |
| tail.test | 8 | 0.001534s | 0.001476s | 0.001501s | byte equality observed |
| tail_mean.test | 2 | 0.017489s | 0.018124s | 0.018086s | byte equality observed |
| tail_quantile.test | 1 | 0.020450s | 0.022086s | 0.019642s | byte equality observed |
| tail_variate_means.test | 10 | 0.001596s | 0.001494s | 0.001498s | byte equality observed |
| valarray.test | 10 | 0.001515s | 0.001471s | 0.001467s | byte equality observed |
| variance.test | 10 | 0.001587s | 0.001507s | 0.001543s | byte equality observed |
| vector.test | 10 | 0.001516s | 0.001494s | 0.001503s | byte equality observed |
| weighted_covariance.test | 9 | 0.001508s | 0.001476s | 0.001422s | byte equality observed |
| weighted_extended_p_square.test | 1 | 0.017226s | 0.019354s | 0.016581s | byte equality observed |
| weighted_kurtosis.test | 6 | 0.002313s | 0.003557s | 0.002162s | byte equality observed |
| weighted_mean.test | 10 | 0.001490s | 0.001446s | 0.001447s | byte equality observed |
| weighted_median.test | 1 | 0.852064s | 0.921839s | 0.856509s | byte equality observed |
| weighted_moment.test | 8 | 0.001479s | 0.001432s | 0.001408s | byte equality observed |
| weighted_p_square_cumul_dist.test | 1 | 0.101322s | 0.143158s | 0.100363s | byte equality observed |
| weighted_p_square_quantile.test | 1 | 0.021507s | 0.026694s | 0.021428s | byte equality observed |
| weighted_pot_quantile.test | 1 | 0.021402s | 0.023212s | 0.020522s | byte equality observed |
| weighted_skewness.test | 6 | 0.002263s | 0.003511s | 0.002294s | byte equality observed |
| weighted_sum.test | 10 | 0.001448s | 0.001420s | 0.001366s | byte equality observed |
| weighted_sum_kahan.test | 3 | 0.005732s | 0.009265s | 0.005627s | byte equality observed |
| weighted_tail_mean.test | 2 | 0.018349s | 0.019157s | 0.017948s | byte equality observed |
| weighted_tail_quantile.test | 1 | 0.018782s | 0.021109s | 0.018866s | byte equality observed |
| weighted_tail_variate_means.test | 6 | 0.001497s | 0.001462s | 0.001446s | byte equality observed |
| weighted_variance.test | 8 | 0.001635s | 0.001786s | 0.001586s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43670794197).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
