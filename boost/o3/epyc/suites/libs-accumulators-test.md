# libs/accumulators/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| count.test | RUN | 0.982289 | 2.705783 | 3.520351 | 0.004132 | 0.004222 | 0.004061 |
| covariance.test | RUN | 1.833767 | 6.634061 | 9.005811 | 0.004076 | 0.004241 | 0.004207 |
| droppable.test | RUN | 1.191417 | 3.671006 | 4.698377 | 0.004049 | 0.004281 | 0.004162 |
| error_of.test | RUN | 1.304573 | 3.542963 | 5.145477 | 0.003597 | 0.003883 | 0.003809 |
| extended_p_square.test | RUN | 1.368138 | 4.488030 | 5.356320 | 0.005620 | 0.006157 | 0.005910 |
| extended_p_square_quantile.test | RUN | 1.817577 | 6.780348 | 7.484892 | 0.011276 | 0.011680 | 0.010727 |
| external_accumulator.test | RUN | 1.218488 | 3.500746 | 4.494662 | 0.003965 | 0.004046 | 0.003906 |
| external_weights.test | RUN | 1.057021 | 2.792684 | 3.644964 | 0.003742 | 0.003747 | 0.003844 |
| kurtosis.test | RUN | 1.596693 | 4.385168 | 6.108065 | 0.005450 | 0.005780 | 0.005134 |
| max.test | RUN | 0.992535 | 2.747286 | 3.393384 | 0.003865 | 0.003645 | 0.004099 |
| mean.test | RUN | 1.310852 | 3.747294 | 4.975645 | 0.003900 | 0.004302 | 0.003446 |
| median.test | RUN | 1.830406 | 7.265670 | 7.290847 | 0.147050 | 0.169170 | 0.145565 |
| min.test | RUN | 1.015427 | 2.524354 | 3.399069 | 0.003698 | 0.004148 | 0.003708 |
| moment.test | RUN | 1.132961 | 3.116011 | 4.141163 | 0.003999 | 0.004071 | 0.003495 |
| p_square_cumul_dist.test | RUN | 1.477656 | 5.098913 | 5.675970 | 1.040893 | 1.287778 | 1.076784 |
| p_square_quantile.test | RUN | 1.320405 | 4.574873 | 4.908881 | 0.034878 | 0.035794 | 0.033269 |
| reference.test | RUN | 1.134603 | 3.016981 | 4.061128 | 0.003704 | 0.003433 | 0.003581 |
| rolling_count.test | RUN | 1.161928 | 3.336406 | 4.130535 | 0.003444 | 0.003964 | 0.004073 |
| rolling_sum.test | RUN | 1.123850 | 3.386052 | 3.863297 | 0.004011 | 0.004199 | 0.004208 |
| rolling_mean.test | RUN | 1.626759 | 5.978913 | 6.773151 | 0.004103 | 0.003793 | 0.004036 |
| rolling_variance.test | RUN | 1.828335 | 6.787677 | 7.598646 | 0.004213 | 0.003865 | 0.004151 |
| rolling_moment.test | RUN | 1.412932 | 4.022402 | 5.186620 | 0.003902 | 0.004315 | 0.004196 |
| skewness.test | RUN | 1.520561 | 4.280682 | 5.868459 | 0.005193 | 0.005976 | 0.005287 |
| sum.test | RUN | 1.016604 | 2.801283 | 3.799837 | 0.003952 | 0.003942 | 0.004103 |
| sum_kahan.test | RUN | 1.104541 | 3.019887 | 3.938146 | 0.019164 | 0.030820 | 0.019903 |
| tail.test | RUN | 1.192219 | 4.443718 | 4.496846 | 0.003920 | 0.004169 | 0.003989 |
| tail_mean.test | RUN | 1.651244 | 5.100032 | 6.535650 | 0.024764 | 0.035742 | 0.027793 |
| tail_quantile.test | RUN | 1.355609 | 4.036038 | 5.231986 | 0.028630 | 0.038659 | 0.030578 |
| variance.test | RUN | 1.289964 | 3.657392 | 5.010685 | 0.003927 | 0.004334 | 0.004122 |
| vector.test | RUN | 1.373581 | 4.407159 | 5.996761 | 0.003700 | 0.003927 | 0.003678 |
| weighted_covariance.test | RUN | 1.851653 | 6.792947 | 9.169077 | 0.003201 | 0.003803 | 0.003470 |
| weighted_extended_p_square.test | RUN | 1.296346 | 4.188432 | 4.815304 | 0.027385 | 0.031976 | 0.028588 |
| weighted_kurtosis.test | RUN | 1.518795 | 4.159979 | 5.708373 | 0.005568 | 0.006304 | 0.005492 |
| weighted_mean.test | RUN | 1.288544 | 3.718813 | 5.034946 | 0.003847 | 0.003898 | 0.003531 |
| weighted_median.test | RUN | 1.655032 | 4.988276 | 6.678380 | 1.293958 | 1.393686 | 1.300589 |
| weighted_moment.test | RUN | 1.054245 | 2.663372 | 3.768488 | 0.003636 | 0.003589 | 0.003809 |
| weighted_p_square_cumul_dist.test | RUN | 1.262700 | 4.246393 | 4.367032 | 0.147024 | 0.165286 | 0.138440 |
| weighted_p_square_quantile.test | RUN | 1.179338 | 3.940815 | 4.357462 | 0.035440 | 0.041179 | 0.036260 |
| weighted_skewness.test | RUN | 1.452762 | 4.046253 | 5.510098 | 0.004942 | 0.006277 | 0.004788 |
| weighted_sum.test | RUN | 0.868383 | 2.304620 | 3.007400 | 0.003390 | 0.003686 | 0.003561 |
| weighted_sum_kahan.test | RUN | 0.842002 | 2.403967 | 3.195744 | 0.011461 | 0.017690 | 0.011756 |
| weighted_variance.test | RUN | 1.607169 | 4.567949 | 6.344014 | 0.003978 | 0.004169 | 0.004019 |
| valarray.test | RUN | 1.506481 | 4.344368 | 5.851347 | 0.003546 | 0.003965 | 0.003811 |
| tail_variate_means.test | RUN | 1.915483 | 6.718713 | 8.160112 | 0.003779 | 0.003926 | 0.003488 |
| pot_quantile.test | RUN | 2.339122 | 7.459782 | 9.884183 | 0.014471 | 0.015085 | 0.013888 |
| weighted_pot_quantile.test | RUN | 2.346853 | 7.287330 | 9.898432 | 0.033786 | 0.041978 | 0.033526 |
| weighted_tail_mean.test | RUN | 2.027382 | 5.775203 | 8.258563 | 0.027046 | 0.037493 | 0.028847 |
| weighted_tail_quantile.test | RUN | 2.022244 | 4.729425 | 7.459779 | 0.022903 | 0.028847 | 0.023297 |
| weighted_tail_variate_means.test | RUN | 2.257242 | 6.308521 | 8.251398 | 0.002784 | 0.003072 | 0.002473 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 1.176× | 1.172×, 1.180× | 0.991× |
| clang | 1.003× | 0.998×, 1.008× | 0.997× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1361 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43664060660).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| count.test | 1 | 0.002919s | 0.002947s | 0.002932s | byte equality observed |
| covariance.test | 1 | 0.003135s | 0.003007s | 0.002918s | byte equality observed |
| droppable.test | 3 | 0.002806s | 0.002734s | 0.002667s | byte equality observed |
| error_of.test | 1 | 0.002839s | 0.002948s | 0.002768s | byte equality observed |
| extended_p_square.test | 4 | 0.004559s | 0.004649s | 0.004339s | byte equality observed |
| extended_p_square_quantile.test | 2 | 0.009726s | 0.010078s | 0.009181s | byte equality observed |
| external_accumulator.test | 5 | 0.002710s | 0.002637s | 0.002648s | byte equality observed |
| external_weights.test | 5 | 0.002561s | 0.002497s | 0.002478s | byte equality observed |
| kurtosis.test | 4 | 0.004112s | 0.004687s | 0.004037s | byte equality observed |
| max.test | 5 | 0.002662s | 0.002586s | 0.002662s | byte equality observed |
| mean.test | 5 | 0.002723s | 0.002562s | 0.002596s | byte equality observed |
| median.test | 1 | 0.143170s | 0.163035s | 0.143585s | byte equality observed |
| min.test | 6 | 0.002608s | 0.002532s | 0.002515s | byte equality observed |
| moment.test | 5 | 0.002584s | 0.002491s | 0.002581s | byte equality observed |
| p_square_cumul_dist.test | 1 | 0.912006s | 1.147521s | 0.914717s | byte equality observed |
| p_square_quantile.test | 1 | 0.034079s | 0.035190s | 0.030877s | byte equality observed |
| pot_quantile.test | 2 | 0.012450s | 0.013430s | 0.011932s | byte equality observed |
| reference.test | 7 | 0.002591s | 0.002504s | 0.002527s | byte equality observed |
| rolling_count.test | 7 | 0.002603s | 0.002477s | 0.002574s | byte equality observed |
| rolling_mean.test | 7 | 0.002703s | 0.002612s | 0.002598s | byte equality observed |
| rolling_moment.test | 7 | 0.002671s | 0.002588s | 0.002591s | byte equality observed |
| rolling_sum.test | 7 | 0.002596s | 0.002470s | 0.002535s | byte equality observed |
| rolling_variance.test | 6 | 0.002719s | 0.002622s | 0.002619s | byte equality observed |
| skewness.test | 5 | 0.003915s | 0.004662s | 0.003912s | byte equality observed |
| sum.test | 7 | 0.002545s | 0.002496s | 0.002519s | byte equality observed |
| sum_kahan.test | 1 | 0.018279s | 0.029669s | 0.017960s | byte equality observed |
| tail.test | 7 | 0.002685s | 0.002467s | 0.002543s | byte equality observed |
| tail_mean.test | 1 | 0.023273s | 0.031429s | 0.026495s | byte equality observed |
| tail_quantile.test | 1 | 0.028782s | 0.034840s | 0.028463s | byte equality observed |
| tail_variate_means.test | 7 | 0.002472s | 0.002421s | 0.002491s | byte equality observed |
| valarray.test | 7 | 0.002576s | 0.002415s | 0.002493s | byte equality observed |
| variance.test | 7 | 0.002628s | 0.002543s | 0.002502s | byte equality observed |
| vector.test | 6 | 0.002514s | 0.002544s | 0.002465s | byte equality observed |
| weighted_covariance.test | 6 | 0.002518s | 0.002598s | 0.002390s | byte equality observed |
| weighted_extended_p_square.test | 1 | 0.027475s | 0.032356s | 0.024881s | byte equality observed |
| weighted_kurtosis.test | 4 | 0.003948s | 0.005204s | 0.003937s | byte equality observed |
| weighted_mean.test | 8 | 0.002476s | 0.002414s | 0.002328s | byte equality observed |
| weighted_median.test | 1 | 1.144697s | 1.265790s | 1.142298s | byte equality observed |
| weighted_moment.test | 6 | 0.002427s | 0.002353s | 0.002342s | byte equality observed |
| weighted_p_square_cumul_dist.test | 1 | 0.138203s | 0.201099s | 0.142666s | byte equality observed |
| weighted_p_square_quantile.test | 1 | 0.034286s | 0.039094s | 0.033038s | byte equality observed |
| weighted_pot_quantile.test | 1 | 0.030554s | 0.032126s | 0.029145s | byte equality observed |
| weighted_skewness.test | 4 | 0.003903s | 0.005016s | 0.003764s | byte equality observed |
| weighted_sum.test | 8 | 0.002406s | 0.002307s | 0.002320s | byte equality observed |
| weighted_sum_kahan.test | 2 | 0.010178s | 0.015800s | 0.009959s | byte equality observed |
| weighted_tail_mean.test | 1 | 0.024023s | 0.026841s | 0.024189s | byte equality observed |
| weighted_tail_quantile.test | 1 | 0.028077s | 0.031688s | 0.025973s | byte equality observed |
| weighted_tail_variate_means.test | 6 | 0.002559s | 0.002352s | 0.002388s | byte equality observed |
| weighted_variance.test | 6 | 0.002705s | 0.002798s | 0.002589s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43664060660).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
