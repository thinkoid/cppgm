# libs/accumulators/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| count.test | RUN | 0.551399 | 1.563886 | 1.677341 | 0.003154 | 0.003233 | 0.002797 |
| covariance.test | RUN | 1.103043 | 3.982451 | 4.183290 | 0.003000 | 0.002732 | 0.002835 |
| droppable.test | RUN | 0.673305 | 2.085935 | 2.268338 | 0.002886 | 0.003145 | 0.002669 |
| error_of.test | RUN | 0.747903 | 2.070614 | 2.526405 | 0.002696 | 0.002605 | 0.002571 |
| extended_p_square.test | RUN | 0.818150 | 2.572022 | 2.465701 | 0.004223 | 0.004363 | 0.003734 |
| extended_p_square_quantile.test | RUN | 1.016310 | 4.129295 | 3.394210 | 0.007608 | 0.007549 | 0.005518 |
| external_accumulator.test | RUN | 0.674790 | 2.048448 | 2.057086 | 0.002805 | 0.002822 | 0.002744 |
| external_weights.test | RUN | 0.589369 | 1.575154 | 1.723040 | 0.002759 | 0.002914 | 0.002601 |
| kurtosis.test | RUN | 0.903988 | 2.556800 | 2.791101 | 0.004413 | 0.004484 | 0.003481 |
| max.test | RUN | 0.554286 | 1.547786 | 1.564997 | 0.002997 | 0.002543 | 0.002522 |
| mean.test | RUN | 0.739483 | 2.139204 | 2.262821 | 0.003103 | 0.003060 | 0.002831 |
| median.test | RUN | 1.049553 | 4.265742 | 3.513234 | 0.091734 | 0.100015 | 0.088357 |
| min.test | RUN | 0.580773 | 1.545782 | 1.605115 | 0.002860 | 0.002830 | 0.002818 |
| moment.test | RUN | 0.628452 | 1.757850 | 1.874080 | 0.002702 | 0.002894 | 0.004051 |
| p_square_cumul_dist.test | RUN | 0.849445 | 2.979344 | 2.726789 | 0.679354 | 0.779882 | 0.629655 |
| p_square_quantile.test | RUN | 0.748322 | 2.625689 | 2.287328 | 0.024655 | 0.021870 | 0.019884 |
| reference.test | RUN | 0.637964 | 1.719007 | 1.861754 | 0.002986 | 0.002867 | 0.002633 |
| rolling_count.test | RUN | 0.663535 | 1.972418 | 1.975733 | 0.002543 | 0.003010 | 0.002772 |
| rolling_sum.test | RUN | 0.649677 | 1.910739 | 2.010678 | 0.003029 | 0.002843 | 0.002811 |
| rolling_mean.test | RUN | 0.948720 | 3.522241 | 3.246490 | 0.002886 | 0.003192 | 0.002954 |
| rolling_variance.test | RUN | 1.084622 | 4.073791 | 3.743211 | 0.003003 | 0.003083 | 0.002938 |
| rolling_moment.test | RUN | 0.808195 | 2.372826 | 2.504922 | 0.002925 | 0.003195 | 0.003134 |
| skewness.test | RUN | 0.823938 | 2.446588 | 2.745567 | 0.004781 | 0.004525 | 0.003651 |
| sum.test | RUN | 0.598818 | 1.679745 | 1.811077 | 0.002931 | 0.003299 | 0.002815 |
| sum_kahan.test | RUN | 0.666529 | 1.839078 | 1.847820 | 0.011828 | 0.021068 | 0.010870 |
| tail.test | RUN | 0.706016 | 2.475018 | 2.110253 | 0.002492 | 0.003051 | 0.002735 |
| tail_mean.test | RUN | 0.945963 | 2.894065 | 3.094236 | 0.017211 | 0.022966 | 0.017943 |
| tail_quantile.test | RUN | 0.781037 | 2.326322 | 2.388597 | 0.021402 | 0.024290 | 0.019123 |
| variance.test | RUN | 0.749767 | 2.129349 | 2.385636 | 0.002847 | 0.002984 | 0.002797 |
| vector.test | RUN | 0.804988 | 2.526195 | 2.976760 | 0.002651 | 0.002924 | 0.002751 |
| weighted_covariance.test | RUN | 1.065636 | 4.098375 | 4.268970 | 0.002418 | 0.002727 | 0.002595 |
| weighted_extended_p_square.test | RUN | 0.713455 | 2.375008 | 2.207442 | 0.018651 | 0.019046 | 0.016099 |
| weighted_kurtosis.test | RUN | 0.852600 | 2.353065 | 2.729499 | 0.004516 | 0.004758 | 0.003643 |
| weighted_mean.test | RUN | 0.720133 | 2.166549 | 2.329028 | 0.002488 | 0.002770 | 0.002532 |
| weighted_median.test | RUN | 0.987155 | 2.832542 | 3.047794 | 0.884422 | 0.963189 | 0.867746 |
| weighted_moment.test | RUN | 0.632785 | 1.610571 | 1.789223 | 0.002798 | 0.003002 | 0.002705 |
| weighted_p_square_cumul_dist.test | RUN | 0.761682 | 2.404756 | 2.187743 | 0.093189 | 0.105166 | 0.080725 |
| weighted_p_square_quantile.test | RUN | 0.712546 | 2.355590 | 2.003690 | 0.027113 | 0.025903 | 0.019573 |
| weighted_skewness.test | RUN | 0.817294 | 2.175260 | 2.430907 | 0.004973 | 0.004665 | 0.003158 |
| weighted_sum.test | RUN | 0.491581 | 1.342890 | 1.441931 | 0.002581 | 0.002648 | 0.002691 |
| weighted_sum_kahan.test | RUN | 0.498126 | 1.441665 | 1.507760 | 0.007089 | 0.011968 | 0.006649 |
| weighted_variance.test | RUN | 0.904719 | 2.595146 | 2.977167 | 0.002912 | 0.003243 | 0.002847 |
| valarray.test | RUN | 0.866599 | 2.503166 | 2.819070 | 0.002571 | 0.002772 | 0.002644 |
| tail_variate_means.test | RUN | 1.127721 | 3.966414 | 3.858665 | 0.002829 | 0.002687 | 0.002716 |
| pot_quantile.test | RUN | 1.359980 | 4.409218 | 4.657937 | 0.012628 | 0.010305 | 0.008888 |
| weighted_pot_quantile.test | RUN | 1.359318 | 4.234502 | 4.647107 | 0.020409 | 0.025641 | 0.021352 |
| weighted_tail_mean.test | RUN | 1.196190 | 3.449070 | 3.948737 | 0.020118 | 0.022598 | 0.018339 |
| weighted_tail_quantile.test | RUN | 1.243106 | 2.909505 | 3.560360 | 0.017835 | 0.017989 | 0.015654 |
| weighted_tail_variate_means.test | RUN | 1.359157 | 3.611538 | 3.956511 | 0.002126 | 0.002026 | 0.002087 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 1.095× | 1.107×, 1.083× | 1.019× |
| clang | 0.941× | 0.924×, 0.957× | 0.979× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1364 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43639138948).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| count.test | 1 | 0.002398s | 0.002331s | 0.002321s | byte equality observed |
| covariance.test | 1 | 0.002367s | 0.002275s | 0.002171s | byte equality observed |
| droppable.test | 1 | 0.002293s | 0.002213s | 0.002176s | byte equality observed |
| error_of.test | 1 | 0.002319s | 0.002188s | 0.002007s | byte equality observed |
| extended_p_square.test | 4 | 0.003129s | 0.002993s | 0.002785s | byte equality observed |
| extended_p_square_quantile.test | 3 | 0.005689s | 0.005671s | 0.004839s | byte equality observed |
| external_accumulator.test | 7 | 0.001929s | 0.001796s | 0.001771s | byte equality observed |
| external_weights.test | 9 | 0.001768s | 0.001708s | 0.001659s | byte equality observed |
| kurtosis.test | 4 | 0.003476s | 0.003209s | 0.002387s | byte equality observed |
| max.test | 6 | 0.001861s | 0.001811s | 0.001735s | byte equality observed |
| mean.test | 7 | 0.001871s | 0.001828s | 0.001752s | byte equality observed |
| median.test | 1 | 0.092062s | 0.098706s | 0.086882s | byte equality observed |
| min.test | 7 | 0.001821s | 0.001819s | 0.001714s | byte equality observed |
| moment.test | 8 | 0.001857s | 0.001807s | 0.001722s | byte equality observed |
| p_square_cumul_dist.test | 1 | 0.628875s | 0.718905s | 0.590201s | byte equality observed |
| p_square_quantile.test | 1 | 0.022103s | 0.020454s | 0.017544s | byte equality observed |
| pot_quantile.test | 2 | 0.011267s | 0.009478s | 0.007033s | byte equality observed |
| reference.test | 8 | 0.001892s | 0.001815s | 0.001780s | byte equality observed |
| rolling_count.test | 7 | 0.001906s | 0.001812s | 0.001784s | byte equality observed |
| rolling_mean.test | 8 | 0.001975s | 0.001888s | 0.001844s | byte equality observed |
| rolling_moment.test | 7 | 0.001956s | 0.001875s | 0.001827s | byte equality observed |
| rolling_sum.test | 8 | 0.001900s | 0.001783s | 0.001782s | byte equality observed |
| rolling_variance.test | 8 | 0.001985s | 0.001825s | 0.001873s | byte equality observed |
| skewness.test | 6 | 0.003577s | 0.003171s | 0.002478s | byte equality observed |
| sum.test | 8 | 0.001885s | 0.001793s | 0.001762s | byte equality observed |
| sum_kahan.test | 1 | 0.011102s | 0.019627s | 0.009486s | byte equality observed |
| tail.test | 10 | 0.001887s | 0.001793s | 0.001783s | byte equality observed |
| tail_mean.test | 2 | 0.017610s | 0.019119s | 0.016761s | byte equality observed |
| tail_quantile.test | 1 | 0.021961s | 0.021153s | 0.017955s | byte equality observed |
| tail_variate_means.test | 9 | 0.001843s | 0.001729s | 0.001728s | byte equality observed |
| valarray.test | 10 | 0.001804s | 0.001718s | 0.001697s | byte equality observed |
| variance.test | 9 | 0.001876s | 0.001802s | 0.001779s | byte equality observed |
| vector.test | 10 | 0.001795s | 0.001726s | 0.001719s | byte equality observed |
| weighted_covariance.test | 10 | 0.001816s | 0.001716s | 0.001702s | byte equality observed |
| weighted_extended_p_square.test | 2 | 0.018566s | 0.017329s | 0.014034s | byte equality observed |
| weighted_kurtosis.test | 5 | 0.004049s | 0.003671s | 0.002463s | byte equality observed |
| weighted_mean.test | 10 | 0.001795s | 0.001682s | 0.001685s | byte equality observed |
| weighted_median.test | 1 | 0.804574s | 0.865932s | 0.803785s | byte equality observed |
| weighted_moment.test | 8 | 0.001792s | 0.001638s | 0.001665s | byte equality observed |
| weighted_p_square_cumul_dist.test | 1 | 0.094544s | 0.107608s | 0.087704s | byte equality observed |
| weighted_p_square_quantile.test | 1 | 0.027196s | 0.025238s | 0.019095s | byte equality observed |
| weighted_pot_quantile.test | 1 | 0.023795s | 0.021610s | 0.018958s | byte equality observed |
| weighted_skewness.test | 5 | 0.004171s | 0.003715s | 0.002379s | byte equality observed |
| weighted_sum.test | 9 | 0.001773s | 0.001728s | 0.001641s | byte equality observed |
| weighted_sum_kahan.test | 2 | 0.006371s | 0.010744s | 0.005540s | byte equality observed |
| weighted_tail_mean.test | 2 | 0.018744s | 0.018986s | 0.017569s | byte equality observed |
| weighted_tail_quantile.test | 1 | 0.020403s | 0.020796s | 0.018099s | byte equality observed |
| weighted_tail_variate_means.test | 9 | 0.001801s | 0.001739s | 0.001749s | byte equality observed |
| weighted_variance.test | 7 | 0.002084s | 0.002015s | 0.001838s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43639138948).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
