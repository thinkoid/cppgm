# libs/accumulators/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| count.test | RUN | 0.782753 | 2.355007 | 2.553607 | 0.003076 | 0.003070 | 0.002950 |
| covariance.test | RUN | 1.480367 | 5.973530 | 6.559125 | 0.003143 | 0.003007 | 0.002862 |
| droppable.test | RUN | 0.984241 | 3.222759 | 3.508795 | 0.002971 | 0.002928 | 0.002745 |
| error_of.test | RUN | 1.044830 | 3.198984 | 3.753086 | 0.002938 | 0.002711 | 0.002688 |
| extended_p_square.test | RUN | 1.154387 | 4.019466 | 3.858806 | 0.004808 | 0.005010 | 0.004443 |
| extended_p_square_quantile.test | RUN | 1.522507 | 6.204467 | 5.552474 | 0.008645 | 0.009793 | 0.008234 |
| external_accumulator.test | RUN | 0.986006 | 3.110039 | 3.376139 | 0.002935 | 0.003054 | 0.002735 |
| external_weights.test | RUN | 0.851880 | 2.348473 | 2.752997 | 0.002762 | 0.002810 | 0.002658 |
| kurtosis.test | RUN | 1.283320 | 3.903438 | 4.468123 | 0.004063 | 0.005252 | 0.004036 |
| max.test | RUN | 0.793990 | 2.309775 | 2.528855 | 0.002800 | 0.002896 | 0.002803 |
| mean.test | RUN | 1.040844 | 3.337478 | 3.764512 | 0.002926 | 0.003069 | 0.003168 |
| median.test | RUN | 1.465760 | 6.421767 | 5.691023 | 0.136188 | 0.160407 | 0.139195 |
| min.test | RUN | 0.824352 | 2.374888 | 2.587455 | 0.003114 | 0.002988 | 0.002882 |
| moment.test | RUN | 0.913899 | 2.646210 | 2.967944 | 0.003090 | 0.003029 | 0.003139 |
| p_square_cumul_dist.test | RUN | 1.224177 | 4.595064 | 4.202963 | 0.968324 | 1.184379 | 0.946267 |
| p_square_quantile.test | RUN | 1.061073 | 4.092175 | 3.627708 | 0.029912 | 0.032399 | 0.028278 |
| reference.test | RUN | 0.874440 | 2.644516 | 2.865545 | 0.002765 | 0.002660 | 0.002740 |
| rolling_count.test | RUN | 0.950391 | 2.982927 | 3.174876 | 0.002971 | 0.002940 | 0.002722 |
| rolling_sum.test | RUN | 0.906877 | 2.859672 | 3.162490 | 0.003201 | 0.003026 | 0.002976 |
| rolling_mean.test | RUN | 1.366756 | 5.397356 | 5.077995 | 0.002983 | 0.003142 | 0.003095 |
| rolling_variance.test | RUN | 1.554027 | 6.090056 | 5.763875 | 0.003034 | 0.003009 | 0.003097 |
| rolling_moment.test | RUN | 1.133081 | 3.588953 | 3.849418 | 0.003002 | 0.003089 | 0.002923 |
| skewness.test | RUN | 1.207285 | 3.732042 | 4.227659 | 0.004186 | 0.005204 | 0.004051 |
| sum.test | RUN | 0.831971 | 2.587886 | 2.786320 | 0.003118 | 0.003114 | 0.002818 |
| sum_kahan.test | RUN | 0.915409 | 2.715027 | 2.950862 | 0.014319 | 0.024148 | 0.013925 |
| tail.test | RUN | 0.986482 | 3.765722 | 3.349703 | 0.002946 | 0.003073 | 0.002696 |
| tail_mean.test | RUN | 1.393918 | 4.359944 | 4.816428 | 0.024639 | 0.026926 | 0.025827 |
| tail_quantile.test | RUN | 1.129939 | 3.574282 | 3.756269 | 0.028538 | 0.031975 | 0.027735 |
| variance.test | RUN | 1.073454 | 3.292424 | 3.717644 | 0.002972 | 0.002968 | 0.002833 |
| vector.test | RUN | 1.146329 | 3.962627 | 4.500847 | 0.002863 | 0.002843 | 0.002650 |
| weighted_covariance.test | RUN | 1.555655 | 6.009998 | 6.649265 | 0.002859 | 0.002823 | 0.002666 |
| weighted_extended_p_square.test | RUN | 1.048228 | 3.642902 | 3.480001 | 0.024561 | 0.029319 | 0.023431 |
| weighted_kurtosis.test | RUN | 1.250261 | 3.659487 | 4.249062 | 0.004285 | 0.005621 | 0.004044 |
| weighted_mean.test | RUN | 1.039935 | 3.223232 | 3.666816 | 0.002822 | 0.002891 | 0.002639 |
| weighted_median.test | RUN | 1.375521 | 4.383947 | 4.747307 | 1.312322 | 1.450298 | 1.313399 |
| weighted_moment.test | RUN | 0.871196 | 2.379042 | 2.788226 | 0.002770 | 0.002881 | 0.002712 |
| weighted_p_square_cumul_dist.test | RUN | 1.064071 | 3.704071 | 3.153241 | 0.131886 | 0.183996 | 0.130210 |
| weighted_p_square_quantile.test | RUN | 0.999171 | 3.464943 | 3.125015 | 0.028789 | 0.034831 | 0.029261 |
| weighted_skewness.test | RUN | 1.168057 | 3.528380 | 3.985576 | 0.004028 | 0.005548 | 0.003255 |
| weighted_sum.test | RUN | 0.643078 | 2.040265 | 2.223947 | 0.002624 | 0.002920 | 0.002563 |
| weighted_sum_kahan.test | RUN | 0.776462 | 2.116711 | 2.351868 | 0.008184 | 0.013721 | 0.008329 |
| weighted_variance.test | RUN | 1.283873 | 4.001898 | 4.610372 | 0.002900 | 0.003447 | 0.002797 |
| valarray.test | RUN | 1.197930 | 3.755195 | 4.322058 | 0.002876 | 0.002891 | 0.002671 |
| tail_variate_means.test | RUN | 1.535338 | 5.895588 | 6.020852 | 0.002985 | 0.002894 | 0.002706 |
| pot_quantile.test | RUN | 1.838900 | 6.548395 | 7.063768 | 0.012151 | 0.014038 | 0.011872 |
| weighted_pot_quantile.test | RUN | 1.831189 | 6.485131 | 7.144894 | 0.021554 | 0.035088 | 0.029778 |
| weighted_tail_mean.test | RUN | 1.611718 | 5.089427 | 6.117720 | 0.026001 | 0.029593 | 0.025836 |
| weighted_tail_quantile.test | RUN | 1.605518 | 4.473478 | 5.149077 | 0.020467 | 0.023753 | 0.020450 |
| weighted_tail_variate_means.test | RUN | 1.813438 | 5.306761 | 6.351725 | 0.002026 | 0.002060 | 0.002010 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 1.159× | 1.152×, 1.166× | 1.002× |
| clang | 0.989× | 0.989×, 0.989× | 0.998× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1361 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44260407509).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| count.test | 1 | 0.002418s | 0.002395s | 0.002470s | byte equality observed |
| covariance.test | 1 | 0.002517s | 0.002361s | 0.002447s | byte equality observed |
| droppable.test | 1 | 0.002362s | 0.002515s | 0.002256s | byte equality observed |
| error_of.test | 1 | 0.002260s | 0.002235s | 0.002193s | byte equality observed |
| extended_p_square.test | 5 | 0.003780s | 0.003942s | 0.003622s | byte equality observed |
| extended_p_square_quantile.test | 3 | 0.007701s | 0.008311s | 0.007431s | byte equality observed |
| external_accumulator.test | 7 | 0.002141s | 0.002086s | 0.002087s | byte equality observed |
| external_weights.test | 5 | 0.002067s | 0.001997s | 0.002016s | byte equality observed |
| kurtosis.test | 4 | 0.003135s | 0.004122s | 0.003174s | byte equality observed |
| max.test | 8 | 0.002145s | 0.002039s | 0.002067s | byte equality observed |
| mean.test | 6 | 0.002127s | 0.002130s | 0.002077s | byte equality observed |
| median.test | 1 | 0.133193s | 0.153246s | 0.128281s | byte equality observed |
| min.test | 7 | 0.002138s | 0.002055s | 0.002047s | byte equality observed |
| moment.test | 8 | 0.002119s | 0.002072s | 0.002060s | byte equality observed |
| p_square_cumul_dist.test | 1 | 0.814185s | 1.030388s | 0.797742s | byte equality observed |
| p_square_quantile.test | 1 | 0.030456s | 0.032891s | 0.028261s | byte equality observed |
| pot_quantile.test | 2 | 0.011218s | 0.012595s | 0.011076s | byte equality observed |
| reference.test | 9 | 0.002109s | 0.002101s | 0.002043s | byte equality observed |
| rolling_count.test | 9 | 0.002141s | 0.002098s | 0.002096s | byte equality observed |
| rolling_mean.test | 8 | 0.002267s | 0.002219s | 0.002192s | byte equality observed |
| rolling_moment.test | 8 | 0.002224s | 0.002143s | 0.002151s | byte equality observed |
| rolling_sum.test | 8 | 0.002137s | 0.002051s | 0.002133s | byte equality observed |
| rolling_variance.test | 8 | 0.002268s | 0.002173s | 0.002184s | byte equality observed |
| skewness.test | 5 | 0.003112s | 0.004079s | 0.003043s | byte equality observed |
| sum.test | 8 | 0.002082s | 0.002029s | 0.002040s | byte equality observed |
| sum_kahan.test | 1 | 0.013454s | 0.022228s | 0.013437s | byte equality observed |
| tail.test | 7 | 0.002112s | 0.002059s | 0.002021s | byte equality observed |
| tail_mean.test | 1 | 0.023537s | 0.025275s | 0.024489s | byte equality observed |
| tail_quantile.test | 1 | 0.027658s | 0.029219s | 0.026336s | byte equality observed |
| tail_variate_means.test | 5 | 0.002166s | 0.001970s | 0.002019s | byte equality observed |
| valarray.test | 8 | 0.002046s | 0.001948s | 0.001962s | byte equality observed |
| variance.test | 8 | 0.002127s | 0.002062s | 0.002069s | byte equality observed |
| vector.test | 9 | 0.002085s | 0.002033s | 0.002006s | byte equality observed |
| weighted_covariance.test | 8 | 0.002057s | 0.001968s | 0.001948s | byte equality observed |
| weighted_extended_p_square.test | 1 | 0.023097s | 0.026084s | 0.022254s | byte equality observed |
| weighted_kurtosis.test | 4 | 0.003253s | 0.004768s | 0.003098s | byte equality observed |
| weighted_mean.test | 9 | 0.002011s | 0.001988s | 0.001901s | byte equality observed |
| weighted_median.test | 1 | 1.132547s | 1.227387s | 1.135962s | byte equality observed |
| weighted_moment.test | 8 | 0.001993s | 0.001959s | 0.001928s | byte equality observed |
| weighted_p_square_cumul_dist.test | 1 | 0.132750s | 0.177269s | 0.129701s | byte equality observed |
| weighted_p_square_quantile.test | 1 | 0.030226s | 0.035392s | 0.030132s | byte equality observed |
| weighted_pot_quantile.test | 1 | 0.029052s | 0.030733s | 0.028200s | byte equality observed |
| weighted_skewness.test | 4 | 0.003251s | 0.004704s | 0.003298s | byte equality observed |
| weighted_sum.test | 9 | 0.001997s | 0.001954s | 0.001956s | byte equality observed |
| weighted_sum_kahan.test | 2 | 0.007506s | 0.012051s | 0.007428s | byte equality observed |
| weighted_tail_mean.test | 1 | 0.024788s | 0.026416s | 0.024807s | byte equality observed |
| weighted_tail_quantile.test | 1 | 0.025799s | 0.030086s | 0.025070s | byte equality observed |
| weighted_tail_variate_means.test | 8 | 0.002071s | 0.002005s | 0.002007s | byte equality observed |
| weighted_variance.test | 7 | 0.002242s | 0.002361s | 0.002176s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44260407509).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
