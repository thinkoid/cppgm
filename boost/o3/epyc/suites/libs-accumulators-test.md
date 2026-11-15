# libs/accumulators/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| count.test | RUN | 0.959905 | 2.829015 | 3.473277 | 0.004008 | 0.003815 | 0.004132 |
| covariance.test | RUN | 1.897755 | 6.660281 | 9.002876 | 0.003833 | 0.003698 | 0.004050 |
| droppable.test | RUN | 1.188054 | 3.632989 | 4.725655 | 0.003872 | 0.003762 | 0.004163 |
| error_of.test | RUN | 1.323193 | 3.614543 | 5.182803 | 0.003572 | 0.003501 | 0.003473 |
| extended_p_square.test | RUN | 1.422626 | 4.477237 | 5.291263 | 0.005529 | 0.006207 | 0.005860 |
| extended_p_square_quantile.test | RUN | 1.777550 | 6.952470 | 7.533528 | 0.011328 | 0.011972 | 0.010586 |
| external_accumulator.test | RUN | 1.201242 | 3.473949 | 4.478228 | 0.004050 | 0.003619 | 0.004178 |
| external_weights.test | RUN | 1.044997 | 2.781406 | 3.749685 | 0.003518 | 0.003411 | 0.003784 |
| kurtosis.test | RUN | 1.582979 | 4.552840 | 6.172894 | 0.005333 | 0.005736 | 0.005189 |
| max.test | RUN | 0.951419 | 2.561920 | 3.408057 | 0.003754 | 0.004023 | 0.004031 |
| mean.test | RUN | 1.329108 | 3.764886 | 5.012158 | 0.003846 | 0.004100 | 0.003945 |
| median.test | RUN | 1.761363 | 7.184632 | 7.510466 | 0.146130 | 0.168487 | 0.148653 |
| min.test | RUN | 0.995821 | 2.518402 | 3.521328 | 0.003705 | 0.004157 | 0.004031 |
| moment.test | RUN | 1.125505 | 3.093566 | 4.127692 | 0.003887 | 0.004098 | 0.004039 |
| p_square_cumul_dist.test | RUN | 1.469604 | 5.141634 | 5.702497 | 1.050691 | 1.286628 | 1.067525 |
| p_square_quantile.test | RUN | 1.268672 | 4.621419 | 4.985201 | 0.035751 | 0.039264 | 0.032863 |
| reference.test | RUN | 1.125874 | 2.985547 | 3.859307 | 0.003518 | 0.003433 | 0.004267 |
| rolling_count.test | RUN | 1.124193 | 3.310541 | 4.227859 | 0.003874 | 0.003879 | 0.003830 |
| rolling_sum.test | RUN | 1.094708 | 3.212272 | 4.300481 | 0.003834 | 0.003947 | 0.003918 |
| rolling_mean.test | RUN | 1.632217 | 6.073216 | 6.857219 | 0.003900 | 0.004006 | 0.003972 |
| rolling_variance.test | RUN | 1.825586 | 6.900552 | 7.669395 | 0.003946 | 0.003591 | 0.004137 |
| rolling_moment.test | RUN | 1.415237 | 4.131487 | 5.266813 | 0.004058 | 0.003882 | 0.004248 |
| skewness.test | RUN | 1.512454 | 4.288179 | 5.861031 | 0.005358 | 0.005800 | 0.005528 |
| sum.test | RUN | 1.030109 | 2.871333 | 3.849966 | 0.004021 | 0.004142 | 0.004153 |
| sum_kahan.test | RUN | 1.141919 | 3.051099 | 3.969661 | 0.019490 | 0.031427 | 0.019872 |
| tail.test | RUN | 1.200017 | 4.353741 | 4.542885 | 0.003597 | 0.003836 | 0.003690 |
| tail_mean.test | RUN | 1.673508 | 4.857543 | 6.729575 | 0.024447 | 0.035889 | 0.028201 |
| tail_quantile.test | RUN | 1.347020 | 4.176279 | 5.270118 | 0.032013 | 0.042585 | 0.029649 |
| variance.test | RUN | 1.298795 | 3.760870 | 5.152435 | 0.003825 | 0.004102 | 0.004156 |
| vector.test | RUN | 1.416591 | 4.380155 | 6.019133 | 0.003595 | 0.003678 | 0.003430 |
| weighted_covariance.test | RUN | 1.929600 | 6.751989 | 9.109216 | 0.003423 | 0.003715 | 0.003566 |
| weighted_extended_p_square.test | RUN | 1.280889 | 4.186996 | 4.866758 | 0.029126 | 0.031865 | 0.026759 |
| weighted_kurtosis.test | RUN | 1.525224 | 4.275979 | 5.928902 | 0.004995 | 0.006178 | 0.005250 |
| weighted_mean.test | RUN | 1.282465 | 3.674529 | 5.036363 | 0.003577 | 0.003771 | 0.003777 |
| weighted_median.test | RUN | 1.655856 | 4.891264 | 6.615777 | 1.290214 | 1.395207 | 1.294514 |
| weighted_moment.test | RUN | 1.034017 | 2.714199 | 3.742850 | 0.003395 | 0.003856 | 0.003840 |
| weighted_p_square_cumul_dist.test | RUN | 1.258324 | 4.192277 | 4.511634 | 0.139126 | 0.166984 | 0.136969 |
| weighted_p_square_quantile.test | RUN | 1.224016 | 4.009264 | 4.375282 | 0.033782 | 0.041843 | 0.036658 |
| weighted_skewness.test | RUN | 1.437109 | 3.873025 | 5.531978 | 0.004892 | 0.006126 | 0.005184 |
| weighted_sum.test | RUN | 0.761862 | 2.276634 | 3.023246 | 0.003281 | 0.003853 | 0.003521 |
| weighted_sum_kahan.test | RUN | 0.957213 | 2.384177 | 3.309501 | 0.011375 | 0.017093 | 0.011839 |
| weighted_variance.test | RUN | 1.589696 | 4.483138 | 6.280038 | 0.003505 | 0.004384 | 0.004112 |
| valarray.test | RUN | 1.448722 | 4.296585 | 5.857361 | 0.003464 | 0.003490 | 0.003846 |
| tail_variate_means.test | RUN | 1.882107 | 6.837508 | 8.277309 | 0.003566 | 0.003822 | 0.003878 |
| pot_quantile.test | RUN | 2.265531 | 7.485879 | 9.853197 | 0.013783 | 0.015712 | 0.013732 |
| weighted_pot_quantile.test | RUN | 2.245195 | 7.380861 | 10.013178 | 0.034255 | 0.027412 | 0.034232 |
| weighted_tail_mean.test | RUN | 2.038773 | 5.840290 | 8.368388 | 0.027491 | 0.034938 | 0.028889 |
| weighted_tail_quantile.test | RUN | 1.995843 | 5.387858 | 7.356284 | 0.022442 | 0.028207 | 0.023295 |
| weighted_tail_variate_means.test | RUN | 2.150776 | 6.120617 | 8.334297 | 0.002561 | 0.002655 | 0.002589 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 1.196× | 1.192×, 1.199× | 0.999× |
| clang | 0.998× | 0.999×, 0.997× | 1.001× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1359 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43674678137).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| count.test | 1 | 0.003069s | 0.002877s | 0.002757s | byte equality observed |
| covariance.test | 1 | 0.002928s | 0.002823s | 0.002808s | byte equality observed |
| droppable.test | 1 | 0.003090s | 0.002989s | 0.002815s | byte equality observed |
| error_of.test | 1 | 0.002865s | 0.002653s | 0.002638s | byte equality observed |
| extended_p_square.test | 4 | 0.004564s | 0.004671s | 0.004286s | byte equality observed |
| extended_p_square_quantile.test | 2 | 0.009783s | 0.010326s | 0.009178s | byte equality observed |
| external_accumulator.test | 4 | 0.002665s | 0.002714s | 0.002569s | byte equality observed |
| external_weights.test | 6 | 0.002516s | 0.002445s | 0.002410s | byte equality observed |
| kurtosis.test | 4 | 0.003915s | 0.004776s | 0.003887s | byte equality observed |
| max.test | 4 | 0.002653s | 0.002585s | 0.002572s | byte equality observed |
| mean.test | 6 | 0.002653s | 0.002580s | 0.002569s | byte equality observed |
| median.test | 1 | 0.143415s | 0.170827s | 0.142505s | byte equality observed |
| min.test | 5 | 0.002623s | 0.002545s | 0.002589s | byte equality observed |
| moment.test | 6 | 0.002604s | 0.002492s | 0.002553s | byte equality observed |
| p_square_cumul_dist.test | 1 | 0.900886s | 1.166412s | 0.912047s | byte equality observed |
| p_square_quantile.test | 1 | 0.034455s | 0.035078s | 0.031265s | byte equality observed |
| pot_quantile.test | 2 | 0.012447s | 0.013607s | 0.011859s | byte equality observed |
| reference.test | 6 | 0.002595s | 0.002648s | 0.002620s | byte equality observed |
| rolling_count.test | 7 | 0.002592s | 0.002518s | 0.002576s | byte equality observed |
| rolling_mean.test | 7 | 0.002707s | 0.002692s | 0.002586s | byte equality observed |
| rolling_moment.test | 7 | 0.002690s | 0.002581s | 0.002571s | byte equality observed |
| rolling_sum.test | 7 | 0.002606s | 0.002552s | 0.002499s | byte equality observed |
| rolling_variance.test | 7 | 0.002753s | 0.002685s | 0.002676s | byte equality observed |
| skewness.test | 4 | 0.003914s | 0.004601s | 0.003928s | byte equality observed |
| sum.test | 7 | 0.002518s | 0.002553s | 0.002438s | byte equality observed |
| sum_kahan.test | 1 | 0.018565s | 0.029320s | 0.018156s | byte equality observed |
| tail.test | 7 | 0.002571s | 0.002425s | 0.002377s | byte equality observed |
| tail_mean.test | 1 | 0.024195s | 0.034574s | 0.026571s | byte equality observed |
| tail_quantile.test | 1 | 0.028317s | 0.039531s | 0.029740s | byte equality observed |
| tail_variate_means.test | 7 | 0.002553s | 0.002351s | 0.002442s | byte equality observed |
| valarray.test | 7 | 0.002531s | 0.002366s | 0.002439s | byte equality observed |
| variance.test | 6 | 0.002709s | 0.002470s | 0.002540s | byte equality observed |
| vector.test | 7 | 0.002523s | 0.002441s | 0.002395s | byte equality observed |
| weighted_covariance.test | 7 | 0.002486s | 0.002425s | 0.002338s | byte equality observed |
| weighted_extended_p_square.test | 1 | 0.027065s | 0.031041s | 0.023945s | byte equality observed |
| weighted_kurtosis.test | 4 | 0.003930s | 0.005139s | 0.003901s | byte equality observed |
| weighted_mean.test | 6 | 0.002464s | 0.002389s | 0.002329s | byte equality observed |
| weighted_median.test | 1 | 1.142751s | 1.268093s | 1.140688s | byte equality observed |
| weighted_moment.test | 6 | 0.002380s | 0.002305s | 0.002323s | byte equality observed |
| weighted_p_square_cumul_dist.test | 1 | 0.140367s | 0.199881s | 0.142394s | byte equality observed |
| weighted_p_square_quantile.test | 1 | 0.033259s | 0.039064s | 0.032876s | byte equality observed |
| weighted_pot_quantile.test | 1 | 0.030069s | 0.032209s | 0.029243s | byte equality observed |
| weighted_skewness.test | 4 | 0.003980s | 0.005083s | 0.003778s | byte equality observed |
| weighted_sum.test | 7 | 0.002372s | 0.002304s | 0.002298s | byte equality observed |
| weighted_sum_kahan.test | 2 | 0.010131s | 0.015796s | 0.009986s | byte equality observed |
| weighted_tail_mean.test | 1 | 0.023582s | 0.027033s | 0.024350s | byte equality observed |
| weighted_tail_quantile.test | 1 | 0.026541s | 0.032161s | 0.026585s | byte equality observed |
| weighted_tail_variate_means.test | 7 | 0.002431s | 0.002336s | 0.002399s | byte equality observed |
| weighted_variance.test | 7 | 0.002660s | 0.002773s | 0.002594s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43674678137).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
