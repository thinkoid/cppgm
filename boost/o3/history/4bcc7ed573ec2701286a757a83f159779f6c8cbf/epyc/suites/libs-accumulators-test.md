# libs/accumulators/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| count.test | RUN | 0.967056 | 2.750276 | 3.659859 | 0.004174 | 0.003894 | 0.004119 |
| covariance.test | RUN | 1.877699 | 7.116400 | 9.163596 | 0.003865 | 0.003783 | 0.004132 |
| droppable.test | RUN | 1.198475 | 3.630956 | 4.781353 | 0.004037 | 0.003795 | 0.004370 |
| error_of.test | RUN | 1.321736 | 3.663440 | 5.196329 | 0.003732 | 0.003957 | 0.003890 |
| extended_p_square.test | RUN | 1.364798 | 4.663509 | 5.435308 | 0.006042 | 0.006183 | 0.005937 |
| extended_p_square_quantile.test | RUN | 1.774463 | 7.158767 | 7.572790 | 0.011414 | 0.012061 | 0.010599 |
| external_accumulator.test | RUN | 1.178078 | 3.549054 | 4.777566 | 0.003818 | 0.003960 | 0.004232 |
| external_weights.test | RUN | 1.034721 | 2.816181 | 3.772212 | 0.003563 | 0.003495 | 0.003946 |
| kurtosis.test | RUN | 1.569803 | 4.580359 | 6.256087 | 0.005577 | 0.005874 | 0.005604 |
| max.test | RUN | 0.978692 | 2.685822 | 3.581307 | 0.004206 | 0.004115 | 0.004342 |
| mean.test | RUN | 1.298672 | 3.880836 | 5.129157 | 0.003780 | 0.004338 | 0.003624 |
| median.test | RUN | 1.793702 | 7.337565 | 7.561047 | 0.146624 | 0.162455 | 0.148049 |
| min.test | RUN | 0.951497 | 2.704151 | 3.494254 | 0.003629 | 0.003769 | 0.003829 |
| moment.test | RUN | 1.111016 | 3.103933 | 4.166257 | 0.003671 | 0.004078 | 0.003921 |
| p_square_cumul_dist.test | RUN | 1.447734 | 5.312982 | 5.755694 | 1.049961 | 1.283638 | 1.066721 |
| p_square_quantile.test | RUN | 1.264760 | 4.626716 | 4.940012 | 0.036043 | 0.036168 | 0.032938 |
| reference.test | RUN | 1.069082 | 3.095735 | 4.278459 | 0.003764 | 0.003811 | 0.003818 |
| rolling_count.test | RUN | 1.109848 | 3.360868 | 4.034761 | 0.003329 | 0.003537 | 0.004231 |
| rolling_sum.test | RUN | 1.112172 | 3.443112 | 4.347709 | 0.004086 | 0.004171 | 0.004070 |
| rolling_mean.test | RUN | 1.591261 | 6.127147 | 7.051863 | 0.004109 | 0.004417 | 0.004429 |
| rolling_variance.test | RUN | 1.763278 | 7.019955 | 8.023086 | 0.004195 | 0.003878 | 0.004205 |
| rolling_moment.test | RUN | 1.354082 | 4.142612 | 5.234765 | 0.003785 | 0.004226 | 0.004320 |
| skewness.test | RUN | 1.450850 | 4.343277 | 5.940464 | 0.005415 | 0.005788 | 0.005353 |
| sum.test | RUN | 1.042027 | 2.923898 | 3.870919 | 0.003709 | 0.004156 | 0.004162 |
| sum_kahan.test | RUN | 1.081003 | 3.026278 | 4.007206 | 0.019445 | 0.031599 | 0.019737 |
| tail.test | RUN | 1.148288 | 4.474908 | 4.622072 | 0.003783 | 0.003681 | 0.004196 |
| tail_mean.test | RUN | 1.585712 | 5.028741 | 6.914822 | 0.024590 | 0.036123 | 0.028892 |
| tail_quantile.test | RUN | 1.330186 | 4.132002 | 5.360743 | 0.030080 | 0.039005 | 0.030267 |
| variance.test | RUN | 1.274852 | 3.822885 | 5.094449 | 0.003805 | 0.004185 | 0.004506 |
| vector.test | RUN | 1.368076 | 4.644879 | 6.300102 | 0.003690 | 0.003977 | 0.003763 |
| weighted_covariance.test | RUN | 1.832534 | 6.785776 | 9.375300 | 0.003449 | 0.003938 | 0.003783 |
| weighted_extended_p_square.test | RUN | 1.244503 | 4.174027 | 4.901090 | 0.028354 | 0.032797 | 0.027203 |
| weighted_kurtosis.test | RUN | 1.517194 | 4.204631 | 6.063717 | 0.005123 | 0.006746 | 0.005317 |
| weighted_mean.test | RUN | 1.259395 | 3.757046 | 5.210821 | 0.003731 | 0.003477 | 0.003664 |
| weighted_median.test | RUN | 1.568914 | 4.977997 | 6.559728 | 1.271467 | 1.384982 | 1.296286 |
| weighted_moment.test | RUN | 1.023750 | 2.853325 | 3.796163 | 0.003620 | 0.003532 | 0.003800 |
| weighted_p_square_cumul_dist.test | RUN | 1.222242 | 4.182525 | 4.857068 | 0.137190 | 0.167253 | 0.138301 |
| weighted_p_square_quantile.test | RUN | 1.140898 | 4.101045 | 4.382629 | 0.034909 | 0.042051 | 0.033948 |
| weighted_skewness.test | RUN | 1.253456 | 3.941307 | 5.324650 | 0.005126 | 0.006793 | 0.004746 |
| weighted_sum.test | RUN | 0.872939 | 2.314236 | 3.097525 | 0.003138 | 0.003619 | 0.003411 |
| weighted_sum_kahan.test | RUN | 0.926191 | 2.489282 | 3.316037 | 0.011010 | 0.017385 | 0.011678 |
| weighted_variance.test | RUN | 1.593422 | 4.716804 | 6.510240 | 0.003769 | 0.004340 | 0.004144 |
| valarray.test | RUN | 1.468565 | 4.440822 | 6.065660 | 0.003614 | 0.003509 | 0.003854 |
| tail_variate_means.test | RUN | 1.795080 | 6.901505 | 8.335546 | 0.003790 | 0.004047 | 0.003840 |
| pot_quantile.test | RUN | 2.157920 | 7.681607 | 9.997708 | 0.013857 | 0.015798 | 0.014057 |
| weighted_pot_quantile.test | RUN | 2.207882 | 7.068062 | 10.248638 | 0.031616 | 0.027415 | 0.033992 |
| weighted_tail_mean.test | RUN | 1.899305 | 5.945007 | 8.744026 | 0.026488 | 0.038840 | 0.028011 |
| weighted_tail_quantile.test | RUN | 1.955725 | 5.410782 | 7.774276 | 0.026592 | 0.028432 | 0.022902 |
| weighted_tail_variate_means.test | RUN | 2.173158 | 6.392267 | 8.461281 | 0.002820 | 0.002756 | 0.002674 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 1.192× | 1.190×, 1.195× | 0.987× |
| clang | 0.997× | 0.998×, 0.997× | 1.007× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1359 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44000592280).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| count.test | 1 | 0.003020s | 0.002950s | 0.002922s | byte equality observed |
| covariance.test | 1 | 0.003005s | 0.003033s | 0.002932s | byte equality observed |
| droppable.test | 1 | 0.003026s | 0.002917s | 0.002848s | byte equality observed |
| error_of.test | 1 | 0.002809s | 0.002805s | 0.002743s | byte equality observed |
| extended_p_square.test | 4 | 0.004550s | 0.004663s | 0.004367s | byte equality observed |
| extended_p_square_quantile.test | 2 | 0.009713s | 0.010295s | 0.009059s | byte equality observed |
| external_accumulator.test | 5 | 0.002668s | 0.002655s | 0.002608s | byte equality observed |
| external_weights.test | 6 | 0.002553s | 0.002455s | 0.002470s | byte equality observed |
| kurtosis.test | 4 | 0.004030s | 0.004704s | 0.003947s | byte equality observed |
| max.test | 5 | 0.002678s | 0.002593s | 0.002540s | byte equality observed |
| mean.test | 6 | 0.002719s | 0.002625s | 0.002609s | byte equality observed |
| median.test | 1 | 0.142170s | 0.166553s | 0.141569s | byte equality observed |
| min.test | 5 | 0.002644s | 0.002560s | 0.002541s | byte equality observed |
| moment.test | 6 | 0.002565s | 0.002523s | 0.002541s | byte equality observed |
| p_square_cumul_dist.test | 1 | 0.904530s | 1.167440s | 0.910984s | byte equality observed |
| p_square_quantile.test | 1 | 0.035052s | 0.035082s | 0.030923s | byte equality observed |
| pot_quantile.test | 2 | 0.012531s | 0.013916s | 0.012048s | byte equality observed |
| reference.test | 7 | 0.002606s | 0.002684s | 0.002599s | byte equality observed |
| rolling_count.test | 7 | 0.002645s | 0.002660s | 0.002619s | byte equality observed |
| rolling_mean.test | 7 | 0.002796s | 0.002722s | 0.002652s | byte equality observed |
| rolling_moment.test | 7 | 0.002765s | 0.002618s | 0.002651s | byte equality observed |
| rolling_sum.test | 7 | 0.002652s | 0.002589s | 0.002577s | byte equality observed |
| rolling_variance.test | 7 | 0.002788s | 0.002755s | 0.002610s | byte equality observed |
| skewness.test | 4 | 0.003924s | 0.004665s | 0.003940s | byte equality observed |
| sum.test | 3 | 0.002606s | 0.002580s | 0.002447s | byte equality observed |
| sum_kahan.test | 1 | 0.018187s | 0.029913s | 0.018072s | byte equality observed |
| tail.test | 7 | 0.002609s | 0.002519s | 0.002530s | byte equality observed |
| tail_mean.test | 1 | 0.023662s | 0.029872s | 0.025579s | byte equality observed |
| tail_quantile.test | 1 | 0.028601s | 0.036600s | 0.026623s | byte equality observed |
| tail_variate_means.test | 7 | 0.002551s | 0.002532s | 0.002457s | byte equality observed |
| valarray.test | 7 | 0.002529s | 0.002483s | 0.002477s | byte equality observed |
| variance.test | 7 | 0.002687s | 0.002567s | 0.002554s | byte equality observed |
| vector.test | 7 | 0.002519s | 0.002500s | 0.002406s | byte equality observed |
| weighted_covariance.test | 7 | 0.002542s | 0.002508s | 0.002392s | byte equality observed |
| weighted_extended_p_square.test | 1 | 0.026921s | 0.032469s | 0.024794s | byte equality observed |
| weighted_kurtosis.test | 4 | 0.004018s | 0.005314s | 0.003866s | byte equality observed |
| weighted_mean.test | 8 | 0.002467s | 0.002483s | 0.002389s | byte equality observed |
| weighted_median.test | 1 | 1.140674s | 1.272242s | 1.141600s | byte equality observed |
| weighted_moment.test | 6 | 0.002442s | 0.002387s | 0.002331s | byte equality observed |
| weighted_p_square_cumul_dist.test | 1 | 0.138524s | 0.182873s | 0.139134s | byte equality observed |
| weighted_p_square_quantile.test | 1 | 0.034280s | 0.039765s | 0.033240s | byte equality observed |
| weighted_pot_quantile.test | 1 | 0.030708s | 0.032846s | 0.029281s | byte equality observed |
| weighted_skewness.test | 4 | 0.004029s | 0.005298s | 0.003795s | byte equality observed |
| weighted_sum.test | 7 | 0.002387s | 0.002398s | 0.002338s | byte equality observed |
| weighted_sum_kahan.test | 2 | 0.010246s | 0.016126s | 0.010080s | byte equality observed |
| weighted_tail_mean.test | 1 | 0.025144s | 0.030156s | 0.026896s | byte equality observed |
| weighted_tail_quantile.test | 1 | 0.028172s | 0.034683s | 0.029295s | byte equality observed |
| weighted_tail_variate_means.test | 5 | 0.002661s | 0.002427s | 0.002533s | byte equality observed |
| weighted_variance.test | 6 | 0.002772s | 0.002814s | 0.002651s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44000592280).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
