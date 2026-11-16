# libs/accumulators/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| count.test | RUN | 0.499816 | 1.415198 | 1.421871 | 0.001794 | 0.001699 | 0.002125 |
| covariance.test | RUN | 0.967817 | 3.720699 | 3.769925 | 0.001871 | 0.001808 | 0.002002 |
| droppable.test | RUN | 0.631188 | 1.953978 | 1.943901 | 0.001899 | 0.001772 | 0.001744 |
| error_of.test | RUN | 0.687076 | 1.893847 | 2.077410 | 0.001735 | 0.001670 | 0.001854 |
| extended_p_square.test | RUN | 0.721609 | 2.453859 | 2.226075 | 0.003061 | 0.003143 | 0.003237 |
| extended_p_square_quantile.test | RUN | 0.987389 | 3.838331 | 3.301276 | 0.005757 | 0.005949 | 0.005693 |
| external_accumulator.test | RUN | 0.610881 | 1.822038 | 1.900437 | 0.001878 | 0.001780 | 0.002575 |
| external_weights.test | RUN | 0.532460 | 1.408060 | 1.525766 | 0.001769 | 0.001678 | 0.001817 |
| kurtosis.test | RUN | 0.817984 | 2.377567 | 2.538591 | 0.002307 | 0.003464 | 0.002714 |
| max.test | RUN | 0.518655 | 1.440543 | 1.479650 | 0.001936 | 0.001856 | 0.001964 |
| mean.test | RUN | 0.686216 | 2.002982 | 2.052193 | 0.001859 | 0.001765 | 0.002108 |
| median.test | RUN | 0.943203 | 4.023836 | 3.349463 | 0.091573 | 0.107773 | 0.089182 |
| min.test | RUN | 0.526310 | 1.409321 | 1.423193 | 0.001933 | 0.001788 | 0.001893 |
| moment.test | RUN | 0.587313 | 1.623044 | 1.672825 | 0.001830 | 0.001685 | 0.001837 |
| p_square_cumul_dist.test | RUN | 0.792268 | 2.814542 | 2.523063 | 0.635954 | 0.825086 | 0.614978 |
| p_square_quantile.test | RUN | 0.685073 | 2.506244 | 2.069325 | 0.019947 | 0.020047 | 0.019447 |
| reference.test | RUN | 0.575757 | 1.575232 | 1.680110 | 0.001900 | 0.001853 | 0.001807 |
| rolling_count.test | RUN | 0.603645 | 1.804485 | 1.804866 | 0.002188 | 0.001805 | 0.001899 |
| rolling_sum.test | RUN | 0.618004 | 1.815519 | 1.773730 | 0.001890 | 0.001793 | 0.001840 |
| rolling_mean.test | RUN | 0.870963 | 3.254918 | 2.944892 | 0.001947 | 0.002122 | 0.002086 |
| rolling_variance.test | RUN | 1.010032 | 3.742197 | 3.440000 | 0.001934 | 0.001885 | 0.002275 |
| rolling_moment.test | RUN | 0.737889 | 2.252602 | 2.221092 | 0.001898 | 0.002056 | 0.001829 |
| skewness.test | RUN | 0.763763 | 2.206633 | 2.392056 | 0.002504 | 0.003356 | 0.002417 |
| sum.test | RUN | 0.555245 | 1.566699 | 1.646226 | 0.001904 | 0.001882 | 0.001705 |
| sum_kahan.test | RUN | 0.580089 | 1.668151 | 1.666692 | 0.012413 | 0.020460 | 0.012687 |
| tail.test | RUN | 0.617236 | 2.292873 | 1.920078 | 0.001842 | 0.001755 | 0.001763 |
| tail_mean.test | RUN | 0.872456 | 2.644767 | 2.794167 | 0.018653 | 0.019779 | 0.019396 |
| tail_quantile.test | RUN | 0.730110 | 2.161437 | 2.177330 | 0.021580 | 0.023158 | 0.020909 |
| variance.test | RUN | 0.671998 | 1.948942 | 2.073591 | 0.001850 | 0.001865 | 0.002119 |
| vector.test | RUN | 0.750141 | 2.416443 | 2.649210 | 0.001862 | 0.001917 | 0.001732 |
| weighted_covariance.test | RUN | 0.990524 | 3.694457 | 3.789507 | 0.001985 | 0.001963 | 0.001848 |
| weighted_extended_p_square.test | RUN | 0.676341 | 2.156914 | 1.974347 | 0.015951 | 0.018780 | 0.015339 |
| weighted_kurtosis.test | RUN | 0.774565 | 2.184193 | 2.390308 | 0.002270 | 0.003921 | 0.002409 |
| weighted_mean.test | RUN | 0.665489 | 1.948623 | 2.092412 | 0.001884 | 0.001896 | 0.001767 |
| weighted_median.test | RUN | 0.867604 | 2.634490 | 2.699506 | 1.021572 | 1.092687 | 1.025602 |
| weighted_moment.test | RUN | 0.558208 | 1.450245 | 1.582500 | 0.001802 | 0.001792 | 0.001961 |
| weighted_p_square_cumul_dist.test | RUN | 0.693150 | 2.296307 | 1.945047 | 0.091740 | 0.115389 | 0.091831 |
| weighted_p_square_quantile.test | RUN | 0.623420 | 2.234099 | 1.795824 | 0.019293 | 0.023625 | 0.019045 |
| weighted_skewness.test | RUN | 0.777286 | 2.144153 | 2.301689 | 0.002447 | 0.004096 | 0.002405 |
| weighted_sum.test | RUN | 0.456066 | 1.218729 | 1.257479 | 0.001690 | 0.001771 | 0.001833 |
| weighted_sum_kahan.test | RUN | 0.494494 | 1.311956 | 1.413892 | 0.007372 | 0.010869 | 0.007077 |
| weighted_variance.test | RUN | 0.836540 | 2.398587 | 2.640403 | 0.001893 | 0.002162 | 0.001839 |
| valarray.test | RUN | 0.768114 | 2.259412 | 2.495385 | 0.001826 | 0.001714 | 0.001742 |
| tail_variate_means.test | RUN | 1.006032 | 3.609006 | 3.435537 | 0.001796 | 0.001826 | 0.001802 |
| pot_quantile.test | RUN | 1.162083 | 3.992854 | 3.951371 | 0.007542 | 0.009628 | 0.007530 |
| weighted_pot_quantile.test | RUN | 1.181010 | 3.904813 | 3.942335 | 0.020683 | 0.023438 | 0.020120 |
| weighted_tail_mean.test | RUN | 1.024405 | 3.074422 | 3.299715 | 0.019401 | 0.020596 | 0.019286 |
| weighted_tail_quantile.test | RUN | 1.025431 | 3.328046 | 3.359060 | 0.019697 | 0.022514 | 0.019510 |
| weighted_tail_variate_means.test | RUN | 1.343673 | 4.645161 | 4.643874 | 0.001683 | 0.001681 | 0.001830 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 1.157× | 1.154×, 1.161× | 1.004× |
| clang | 0.990× | 0.990×, 0.990× | 0.999× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1364 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/43947487361).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| count.test | 3 | 0.001704s | 0.001595s | 0.001767s | byte equality observed |
| covariance.test | 4 | 0.001678s | 0.001607s | 0.001636s | byte equality observed |
| droppable.test | 3 | 0.001681s | 0.001612s | 0.001613s | byte equality observed |
| error_of.test | 3 | 0.001584s | 0.001637s | 0.001511s | byte equality observed |
| extended_p_square.test | 4 | 0.002830s | 0.002854s | 0.002728s | byte equality observed |
| extended_p_square_quantile.test | 1 | 0.005475s | 0.005975s | 0.005366s | byte equality observed |
| external_accumulator.test | 1 | 0.001690s | 0.001675s | 0.001681s | byte equality observed |
| external_weights.test | 3 | 0.001631s | 0.001556s | 0.001511s | byte equality observed |
| kurtosis.test | 4 | 0.002153s | 0.003130s | 0.002189s | byte equality observed |
| max.test | 4 | 0.001651s | 0.001606s | 0.001567s | byte equality observed |
| mean.test | 1 | 0.001756s | 0.001711s | 0.001632s | byte equality observed |
| median.test | 1 | 0.091020s | 0.106536s | 0.087239s | byte equality observed |
| min.test | 1 | 0.001776s | 0.001663s | 0.001663s | byte equality observed |
| moment.test | 1 | 0.001863s | 0.001723s | 0.001687s | byte equality observed |
| p_square_cumul_dist.test | 1 | 0.633304s | 0.816766s | 0.615361s | byte equality observed |
| p_square_quantile.test | 1 | 0.019650s | 0.019712s | 0.019173s | byte equality observed |
| pot_quantile.test | 1 | 0.007489s | 0.009394s | 0.007268s | byte equality observed |
| reference.test | 3 | 0.001619s | 0.001552s | 0.001544s | byte equality observed |
| rolling_count.test | 5 | 0.001624s | 0.001568s | 0.001562s | byte equality observed |
| rolling_mean.test | 5 | 0.001691s | 0.001667s | 0.001606s | byte equality observed |
| rolling_moment.test | 4 | 0.001663s | 0.001641s | 0.001582s | byte equality observed |
| rolling_sum.test | 5 | 0.001625s | 0.001566s | 0.001546s | byte equality observed |
| rolling_variance.test | 4 | 0.001714s | 0.001654s | 0.001619s | byte equality observed |
| skewness.test | 5 | 0.002096s | 0.003112s | 0.002111s | byte equality observed |
| sum.test | 5 | 0.001598s | 0.001557s | 0.001529s | byte equality observed |
| sum_kahan.test | 1 | 0.012190s | 0.019933s | 0.012131s | byte equality observed |
| tail.test | 5 | 0.001572s | 0.001543s | 0.001500s | byte equality observed |
| tail_mean.test | 1 | 0.018464s | 0.018478s | 0.018816s | byte equality observed |
| tail_quantile.test | 1 | 0.021041s | 0.022928s | 0.020261s | byte equality observed |
| tail_variate_means.test | 6 | 0.001556s | 0.001489s | 0.001492s | byte equality observed |
| valarray.test | 4 | 0.001553s | 0.001515s | 0.001501s | byte equality observed |
| variance.test | 4 | 0.001625s | 0.001569s | 0.001573s | byte equality observed |
| vector.test | 3 | 0.001551s | 0.001500s | 0.001513s | byte equality observed |
| weighted_covariance.test | 6 | 0.001526s | 0.001501s | 0.001478s | byte equality observed |
| weighted_extended_p_square.test | 1 | 0.015599s | 0.018558s | 0.014825s | byte equality observed |
| weighted_kurtosis.test | 2 | 0.002082s | 0.003666s | 0.002128s | byte equality observed |
| weighted_mean.test | 3 | 0.001555s | 0.001503s | 0.001473s | byte equality observed |
| weighted_median.test | 1 | 1.018525s | 1.082987s | 1.027008s | byte equality observed |
| weighted_moment.test | 3 | 0.001524s | 0.001489s | 0.001463s | byte equality observed |
| weighted_p_square_cumul_dist.test | 1 | 0.091279s | 0.114987s | 0.091130s | byte equality observed |
| weighted_p_square_quantile.test | 1 | 0.019252s | 0.023542s | 0.018627s | byte equality observed |
| weighted_pot_quantile.test | 1 | 0.020585s | 0.023305s | 0.019958s | byte equality observed |
| weighted_skewness.test | 2 | 0.002110s | 0.003639s | 0.002120s | byte equality observed |
| weighted_sum.test | 2 | 0.001513s | 0.001475s | 0.001456s | byte equality observed |
| weighted_sum_kahan.test | 1 | 0.006816s | 0.010677s | 0.006842s | byte equality observed |
| weighted_tail_mean.test | 1 | 0.019368s | 0.020615s | 0.019227s | byte equality observed |
| weighted_tail_quantile.test | 1 | 0.019554s | 0.023085s | 0.019107s | byte equality observed |
| weighted_tail_variate_means.test | 4 | 0.001533s | 0.001522s | 0.001481s | byte equality observed |
| weighted_variance.test | 3 | 0.001659s | 0.001817s | 0.001610s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/43947487361).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
