# libs/accumulators/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| count.test | RUN | 0.964512 | 2.780571 | 3.438067 | 0.004588 | 0.004112 | 0.003940 |
| covariance.test | RUN | 1.845760 | 6.650155 | 8.925899 | 0.004042 | 0.004205 | 0.003963 |
| droppable.test | RUN | 1.171271 | 3.658071 | 4.704017 | 0.003749 | 0.004248 | 0.004061 |
| error_of.test | RUN | 1.271858 | 3.587451 | 5.045502 | 0.003521 | 0.003727 | 0.003762 |
| extended_p_square.test | RUN | 1.358234 | 4.480895 | 5.249969 | 0.005770 | 0.005925 | 0.005745 |
| extended_p_square_quantile.test | RUN | 1.770723 | 6.747339 | 7.266771 | 0.010686 | 0.011848 | 0.011224 |
| external_accumulator.test | RUN | 1.180837 | 3.513556 | 4.469552 | 0.003498 | 0.003798 | 0.003902 |
| external_weights.test | RUN | 1.007227 | 2.776317 | 3.603279 | 0.003488 | 0.003796 | 0.003690 |
| kurtosis.test | RUN | 1.527421 | 4.320863 | 6.003619 | 0.005553 | 0.006195 | 0.005309 |
| max.test | RUN | 0.992568 | 2.572033 | 3.472211 | 0.003673 | 0.003626 | 0.003938 |
| mean.test | RUN | 1.261427 | 3.678660 | 4.903228 | 0.004121 | 0.004192 | 0.003548 |
| median.test | RUN | 1.708348 | 6.864162 | 7.343046 | 0.144832 | 0.168968 | 0.152652 |
| min.test | RUN | 0.950816 | 2.656575 | 3.374746 | 0.003662 | 0.004173 | 0.003586 |
| moment.test | RUN | 1.075628 | 3.144905 | 4.190839 | 0.003850 | 0.003806 | 0.003727 |
| p_square_cumul_dist.test | RUN | 1.394546 | 5.155534 | 5.610057 | 1.053633 | 1.290531 | 1.078585 |
| p_square_quantile.test | RUN | 1.251007 | 4.531735 | 4.844630 | 0.037041 | 0.035787 | 0.033406 |
| reference.test | RUN | 1.086072 | 2.843242 | 3.971646 | 0.003583 | 0.003689 | 0.003874 |
| rolling_count.test | RUN | 1.115514 | 3.275799 | 4.082826 | 0.003430 | 0.004194 | 0.003727 |
| rolling_sum.test | RUN | 1.062930 | 3.360772 | 3.811030 | 0.004260 | 0.003659 | 0.003856 |
| rolling_mean.test | RUN | 1.593894 | 5.923348 | 6.708459 | 0.003919 | 0.003680 | 0.004301 |
| rolling_variance.test | RUN | 1.750658 | 6.769599 | 7.624939 | 0.003755 | 0.003871 | 0.004051 |
| rolling_moment.test | RUN | 1.370840 | 3.982040 | 5.086401 | 0.003970 | 0.003820 | 0.004216 |
| skewness.test | RUN | 1.431681 | 4.137188 | 5.758603 | 0.005215 | 0.005560 | 0.005588 |
| sum.test | RUN | 1.005348 | 2.766312 | 3.625640 | 0.003529 | 0.003960 | 0.004110 |
| sum_kahan.test | RUN | 1.064368 | 2.965250 | 3.938125 | 0.019528 | 0.031442 | 0.019420 |
| tail.test | RUN | 1.161579 | 4.263700 | 4.555019 | 0.003780 | 0.004180 | 0.004011 |
| tail_mean.test | RUN | 1.630691 | 4.920581 | 6.593512 | 0.024803 | 0.035598 | 0.028245 |
| tail_quantile.test | RUN | 1.314821 | 4.177546 | 4.989077 | 0.030279 | 0.044261 | 0.031219 |
| variance.test | RUN | 1.250106 | 3.711108 | 5.106099 | 0.004268 | 0.003899 | 0.003979 |
| vector.test | RUN | 1.377379 | 4.319409 | 5.901019 | 0.003688 | 0.003844 | 0.003787 |
| weighted_covariance.test | RUN | 1.809914 | 6.611427 | 9.066477 | 0.003758 | 0.003475 | 0.003226 |
| weighted_extended_p_square.test | RUN | 1.283428 | 4.060730 | 4.798188 | 0.030114 | 0.032430 | 0.026988 |
| weighted_kurtosis.test | RUN | 1.500039 | 4.159650 | 5.736908 | 0.004542 | 0.006694 | 0.005283 |
| weighted_mean.test | RUN | 1.285431 | 3.572536 | 4.946295 | 0.003499 | 0.004145 | 0.003484 |
| weighted_median.test | RUN | 1.607789 | 4.975057 | 6.355725 | 1.283722 | 1.400339 | 1.300843 |
| weighted_moment.test | RUN | 1.043327 | 2.737877 | 3.826998 | 0.003509 | 0.003545 | 0.003443 |
| weighted_p_square_cumul_dist.test | RUN | 1.243603 | 4.301242 | 4.349171 | 0.138170 | 0.167166 | 0.137805 |
| weighted_p_square_quantile.test | RUN | 1.163357 | 3.949477 | 4.247128 | 0.035547 | 0.040749 | 0.036477 |
| weighted_skewness.test | RUN | 1.263226 | 3.804070 | 5.490859 | 0.004655 | 0.006726 | 0.005314 |
| weighted_sum.test | RUN | 0.883407 | 2.242797 | 2.956279 | 0.003559 | 0.003343 | 0.003725 |
| weighted_sum_kahan.test | RUN | 0.942178 | 2.462728 | 3.212892 | 0.011254 | 0.017500 | 0.011451 |
| weighted_variance.test | RUN | 1.536905 | 4.492067 | 6.291360 | 0.003705 | 0.004216 | 0.004108 |
| valarray.test | RUN | 1.413574 | 4.142968 | 5.764474 | 0.003438 | 0.003840 | 0.003704 |
| tail_variate_means.test | RUN | 1.801155 | 6.596664 | 8.048786 | 0.003532 | 0.003863 | 0.003392 |
| pot_quantile.test | RUN | 2.213573 | 7.239911 | 9.552414 | 0.014107 | 0.015271 | 0.014149 |
| weighted_pot_quantile.test | RUN | 2.231532 | 7.067363 | 9.890633 | 0.031670 | 0.041695 | 0.033164 |
| weighted_tail_mean.test | RUN | 1.955682 | 5.767682 | 8.207841 | 0.026997 | 0.035788 | 0.022005 |
| weighted_tail_quantile.test | RUN | 1.946250 | 5.071187 | 7.319219 | 0.025767 | 0.028663 | 0.022964 |
| weighted_tail_variate_means.test | RUN | 2.181308 | 5.963344 | 8.126910 | 0.002792 | 0.002538 | 0.002412 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 1.197× | 1.205×, 1.189× | 0.999× |
| clang | 0.989× | 0.984×, 0.995× | 1.005× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1360 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/thinkoid/cppgm/actions/runs/44661842949).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| count.test | 1 | 0.002981s | 0.002558s | 0.002894s | byte equality observed |
| covariance.test | 1 | 0.003072s | 0.002872s | 0.002822s | byte equality observed |
| droppable.test | 1 | 0.002922s | 0.002854s | 0.002852s | byte equality observed |
| error_of.test | 3 | 0.002724s | 0.002458s | 0.002635s | byte equality observed |
| extended_p_square.test | 3 | 0.004554s | 0.004638s | 0.004372s | byte equality observed |
| extended_p_square_quantile.test | 2 | 0.009437s | 0.010188s | 0.009109s | byte equality observed |
| external_accumulator.test | 4 | 0.002734s | 0.002603s | 0.002611s | byte equality observed |
| external_weights.test | 6 | 0.002585s | 0.002463s | 0.002498s | byte equality observed |
| kurtosis.test | 3 | 0.004143s | 0.004702s | 0.004047s | byte equality observed |
| max.test | 7 | 0.002715s | 0.002598s | 0.002603s | byte equality observed |
| mean.test | 4 | 0.002742s | 0.002620s | 0.002595s | byte equality observed |
| median.test | 1 | 0.141600s | 0.181097s | 0.142016s | byte equality observed |
| min.test | 6 | 0.002599s | 0.002584s | 0.002544s | byte equality observed |
| moment.test | 6 | 0.002562s | 0.002599s | 0.002541s | byte equality observed |
| p_square_cumul_dist.test | 1 | 0.905683s | 1.184197s | 0.909950s | byte equality observed |
| p_square_quantile.test | 1 | 0.034191s | 0.035081s | 0.031112s | byte equality observed |
| pot_quantile.test | 2 | 0.012886s | 0.013454s | 0.012178s | byte equality observed |
| reference.test | 7 | 0.002560s | 0.002529s | 0.002535s | byte equality observed |
| rolling_count.test | 7 | 0.002548s | 0.002532s | 0.002511s | byte equality observed |
| rolling_mean.test | 7 | 0.002685s | 0.002747s | 0.002605s | byte equality observed |
| rolling_moment.test | 7 | 0.002641s | 0.002679s | 0.002587s | byte equality observed |
| rolling_sum.test | 7 | 0.002579s | 0.002503s | 0.002533s | byte equality observed |
| rolling_variance.test | 7 | 0.002743s | 0.002643s | 0.002636s | byte equality observed |
| skewness.test | 4 | 0.003838s | 0.004798s | 0.003910s | byte equality observed |
| sum.test | 7 | 0.002584s | 0.002532s | 0.002504s | byte equality observed |
| sum_kahan.test | 1 | 0.018571s | 0.029912s | 0.018204s | byte equality observed |
| tail.test | 5 | 0.002562s | 0.002361s | 0.002456s | byte equality observed |
| tail_mean.test | 1 | 0.025152s | 0.028250s | 0.026502s | byte equality observed |
| tail_quantile.test | 1 | 0.030235s | 0.037205s | 0.028012s | byte equality observed |
| tail_variate_means.test | 6 | 0.002496s | 0.002302s | 0.002575s | byte equality observed |
| valarray.test | 6 | 0.002560s | 0.002365s | 0.002389s | byte equality observed |
| variance.test | 6 | 0.002751s | 0.002490s | 0.002603s | byte equality observed |
| vector.test | 7 | 0.002566s | 0.002454s | 0.002454s | byte equality observed |
| weighted_covariance.test | 7 | 0.002452s | 0.002380s | 0.002389s | byte equality observed |
| weighted_extended_p_square.test | 1 | 0.027371s | 0.030060s | 0.024830s | byte equality observed |
| weighted_kurtosis.test | 3 | 0.003993s | 0.005110s | 0.003902s | byte equality observed |
| weighted_mean.test | 8 | 0.002406s | 0.002350s | 0.002364s | byte equality observed |
| weighted_median.test | 1 | 1.143092s | 1.268022s | 1.144234s | byte equality observed |
| weighted_moment.test | 8 | 0.002423s | 0.002317s | 0.002371s | byte equality observed |
| weighted_p_square_cumul_dist.test | 1 | 0.141699s | 0.182491s | 0.138734s | byte equality observed |
| weighted_p_square_quantile.test | 1 | 0.034120s | 0.039376s | 0.032649s | byte equality observed |
| weighted_pot_quantile.test | 1 | 0.030405s | 0.032098s | 0.029326s | byte equality observed |
| weighted_skewness.test | 4 | 0.003898s | 0.004995s | 0.003946s | byte equality observed |
| weighted_sum.test | 8 | 0.002371s | 0.002293s | 0.002377s | byte equality observed |
| weighted_sum_kahan.test | 2 | 0.010103s | 0.015767s | 0.010155s | byte equality observed |
| weighted_tail_mean.test | 1 | 0.024147s | 0.029930s | 0.024354s | byte equality observed |
| weighted_tail_quantile.test | 1 | 0.027234s | 0.034215s | 0.026800s | byte equality observed |
| weighted_tail_variate_means.test | 6 | 0.002507s | 0.002351s | 0.002472s | byte equality observed |
| weighted_variance.test | 7 | 0.002691s | 0.002775s | 0.002608s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/thinkoid/cppgm/actions/runs/44661842949).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
