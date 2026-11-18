# libs/accumulators/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| count.test | RUN | 0.912279 | 2.511356 | 3.131333 | 0.004228 | 0.004284 | 0.004074 |
| covariance.test | RUN | 1.773513 | 6.332351 | 7.833899 | 0.004159 | 0.004037 | 0.004128 |
| droppable.test | RUN | 1.121547 | 3.386682 | 4.233023 | 0.004225 | 0.004238 | 0.004122 |
| error_of.test | RUN | 1.226500 | 3.345683 | 4.501930 | 0.003749 | 0.004013 | 0.003991 |
| extended_p_square.test | RUN | 1.325563 | 4.169702 | 4.439940 | 0.005905 | 0.006124 | 0.005850 |
| extended_p_square_quantile.test | RUN | 1.676215 | 6.392969 | 6.639290 | 0.010337 | 0.011569 | 0.009423 |
| external_accumulator.test | RUN | 1.131764 | 3.317582 | 3.995833 | 0.004400 | 0.003862 | 0.004071 |
| external_weights.test | RUN | 0.996528 | 2.477701 | 3.091472 | 0.004649 | 0.003849 | 0.003768 |
| kurtosis.test | RUN | 1.502479 | 4.105186 | 5.345313 | 0.005070 | 0.006006 | 0.005450 |
| max.test | RUN | 0.936640 | 2.538685 | 2.914532 | 0.004301 | 0.003806 | 0.003894 |
| mean.test | RUN | 1.231152 | 3.438934 | 4.238919 | 0.004158 | 0.004138 | 0.003814 |
| median.test | RUN | 1.649757 | 6.693853 | 6.510079 | 0.144941 | 0.171020 | 0.146106 |
| min.test | RUN | 0.928394 | 2.452567 | 2.929311 | 0.004073 | 0.003914 | 0.003897 |
| moment.test | RUN | 1.042892 | 2.848273 | 3.522553 | 0.004186 | 0.003949 | 0.003379 |
| p_square_cumul_dist.test | RUN | 1.348715 | 4.729470 | 4.833139 | 1.037783 | 1.336116 | 1.055159 |
| p_square_quantile.test | RUN | 1.214813 | 4.284951 | 4.212395 | 0.031721 | 0.033017 | 0.032348 |
| reference.test | RUN | 1.071438 | 2.746255 | 3.577123 | 0.004053 | 0.004071 | 0.003990 |
| rolling_count.test | RUN | 1.087863 | 3.043594 | 3.683593 | 0.003721 | 0.004134 | 0.004142 |
| rolling_sum.test | RUN | 1.036169 | 2.983055 | 3.326636 | 0.004149 | 0.003943 | 0.003860 |
| rolling_mean.test | RUN | 1.560280 | 5.654114 | 5.784088 | 0.004569 | 0.004196 | 0.004236 |
| rolling_variance.test | RUN | 1.745097 | 6.488734 | 6.691547 | 0.004424 | 0.004301 | 0.003909 |
| rolling_moment.test | RUN | 1.312193 | 3.911453 | 4.428988 | 0.003930 | 0.004049 | 0.004393 |
| skewness.test | RUN | 1.409596 | 3.940172 | 4.981420 | 0.004753 | 0.006212 | 0.005246 |
| sum.test | RUN | 0.995308 | 2.644188 | 3.262283 | 0.004160 | 0.004184 | 0.004168 |
| sum_kahan.test | RUN | 1.072822 | 2.834729 | 3.403771 | 0.021575 | 0.035281 | 0.021645 |
| tail.test | RUN | 1.119412 | 4.003847 | 3.931828 | 0.003789 | 0.004136 | 0.004057 |
| tail_mean.test | RUN | 1.584543 | 4.546307 | 5.602760 | 0.026466 | 0.035411 | 0.028421 |
| tail_quantile.test | RUN | 1.267912 | 3.752731 | 4.390161 | 0.031196 | 0.040389 | 0.031846 |
| variance.test | RUN | 1.251008 | 3.444021 | 4.305242 | 0.004072 | 0.003854 | 0.004138 |
| vector.test | RUN | 1.309121 | 4.145930 | 5.133589 | 0.004012 | 0.003833 | 0.003658 |
| weighted_covariance.test | RUN | 1.783992 | 6.313250 | 7.975033 | 0.003593 | 0.004041 | 0.003840 |
| weighted_extended_p_square.test | RUN | 1.214916 | 3.789975 | 4.109058 | 0.026511 | 0.031782 | 0.025419 |
| weighted_kurtosis.test | RUN | 1.429580 | 3.855290 | 4.962765 | 0.005293 | 0.006776 | 0.005387 |
| weighted_mean.test | RUN | 1.212753 | 3.342326 | 4.307229 | 0.003968 | 0.003848 | 0.003843 |
| weighted_median.test | RUN | 1.570077 | 4.797562 | 5.673187 | 1.369472 | 1.514480 | 1.433382 |
| weighted_moment.test | RUN | 1.008025 | 2.706243 | 3.231864 | 0.003884 | 0.004078 | 0.003567 |
| weighted_p_square_cumul_dist.test | RUN | 1.200411 | 4.007979 | 4.000670 | 0.156261 | 0.176276 | 0.141055 |
| weighted_p_square_quantile.test | RUN | 1.145973 | 3.899563 | 3.606300 | 0.033960 | 0.042067 | 0.034331 |
| weighted_skewness.test | RUN | 1.330972 | 3.593581 | 4.351652 | 0.004833 | 0.006919 | 0.005043 |
| weighted_sum.test | RUN | 0.833699 | 2.040035 | 2.556582 | 0.003905 | 0.003841 | 0.003965 |
| weighted_sum_kahan.test | RUN | 0.820445 | 2.252653 | 2.747622 | 0.012391 | 0.019081 | 0.012675 |
| weighted_variance.test | RUN | 1.516806 | 4.262648 | 5.462406 | 0.003786 | 0.004334 | 0.003473 |
| valarray.test | RUN | 1.368933 | 3.969122 | 5.013914 | 0.003759 | 0.003678 | 0.003654 |
| tail_variate_means.test | RUN | 1.746991 | 6.152153 | 7.033538 | 0.003691 | 0.003725 | 0.003805 |
| pot_quantile.test | RUN | 2.118308 | 6.847748 | 8.475132 | 0.013843 | 0.015762 | 0.013648 |
| weighted_pot_quantile.test | RUN | 2.118899 | 6.675610 | 8.525286 | 0.028512 | 0.039086 | 0.032643 |
| weighted_tail_mean.test | RUN | 1.911067 | 5.396024 | 7.312728 | 0.028589 | 0.035833 | 0.028915 |
| weighted_tail_quantile.test | RUN | 1.927050 | 4.791398 | 6.493529 | 0.024881 | 0.028468 | 0.024617 |
| weighted_tail_variate_means.test | RUN | 2.178329 | 6.056226 | 7.149084 | 0.002921 | 0.002749 | 0.002725 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 1.224× | 1.226×, 1.223× | 0.985× |
| clang | 1.009× | 1.011×, 1.008× | 1.004× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1359 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44390936409).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| count.test | 1 | 0.003227s | 0.003126s | 0.003044s | byte equality observed |
| covariance.test | 1 | 0.003220s | 0.003074s | 0.003116s | byte equality observed |
| droppable.test | 1 | 0.003118s | 0.003155s | 0.002946s | byte equality observed |
| error_of.test | 1 | 0.003048s | 0.003030s | 0.003070s | byte equality observed |
| extended_p_square.test | 4 | 0.004589s | 0.004764s | 0.004438s | byte equality observed |
| extended_p_square_quantile.test | 2 | 0.009194s | 0.010450s | 0.008908s | byte equality observed |
| external_accumulator.test | 5 | 0.002772s | 0.002724s | 0.002692s | byte equality observed |
| external_weights.test | 4 | 0.002612s | 0.002525s | 0.002468s | byte equality observed |
| kurtosis.test | 4 | 0.004012s | 0.004854s | 0.003997s | byte equality observed |
| max.test | 5 | 0.002771s | 0.002676s | 0.002674s | byte equality observed |
| mean.test | 4 | 0.002792s | 0.002651s | 0.002685s | byte equality observed |
| median.test | 1 | 0.142968s | 0.193376s | 0.145161s | byte equality observed |
| min.test | 6 | 0.002704s | 0.002619s | 0.002671s | byte equality observed |
| moment.test | 3 | 0.002716s | 0.002723s | 0.002605s | byte equality observed |
| p_square_cumul_dist.test | 1 | 0.947249s | 1.273877s | 0.951857s | byte equality observed |
| p_square_quantile.test | 1 | 0.033872s | 0.032239s | 0.030816s | byte equality observed |
| pot_quantile.test | 2 | 0.012949s | 0.014744s | 0.012552s | byte equality observed |
| reference.test | 7 | 0.002733s | 0.002637s | 0.002707s | byte equality observed |
| rolling_count.test | 7 | 0.002735s | 0.002670s | 0.002700s | byte equality observed |
| rolling_mean.test | 6 | 0.002850s | 0.002734s | 0.002751s | byte equality observed |
| rolling_moment.test | 6 | 0.002833s | 0.002723s | 0.002771s | byte equality observed |
| rolling_sum.test | 6 | 0.002716s | 0.002635s | 0.002687s | byte equality observed |
| rolling_variance.test | 6 | 0.002854s | 0.002760s | 0.002770s | byte equality observed |
| skewness.test | 4 | 0.003940s | 0.004897s | 0.003920s | byte equality observed |
| sum.test | 6 | 0.002696s | 0.002626s | 0.002604s | byte equality observed |
| sum_kahan.test | 1 | 0.020321s | 0.033981s | 0.020248s | byte equality observed |
| tail.test | 2 | 0.002690s | 0.002589s | 0.002564s | byte equality observed |
| tail_mean.test | 1 | 0.025112s | 0.028368s | 0.026157s | byte equality observed |
| tail_quantile.test | 1 | 0.029043s | 0.038179s | 0.028269s | byte equality observed |
| tail_variate_means.test | 7 | 0.002728s | 0.002463s | 0.002623s | byte equality observed |
| valarray.test | 7 | 0.002625s | 0.002470s | 0.002417s | byte equality observed |
| variance.test | 6 | 0.002761s | 0.002638s | 0.002652s | byte equality observed |
| vector.test | 7 | 0.002618s | 0.002602s | 0.002478s | byte equality observed |
| weighted_covariance.test | 6 | 0.002606s | 0.002520s | 0.002498s | byte equality observed |
| weighted_extended_p_square.test | 1 | 0.027209s | 0.032819s | 0.024597s | byte equality observed |
| weighted_kurtosis.test | 4 | 0.004083s | 0.005492s | 0.003933s | byte equality observed |
| weighted_mean.test | 7 | 0.002585s | 0.002500s | 0.002466s | byte equality observed |
| weighted_median.test | 1 | 1.267786s | 1.444046s | 1.292799s | byte equality observed |
| weighted_moment.test | 4 | 0.002530s | 0.002495s | 0.002496s | byte equality observed |
| weighted_p_square_cumul_dist.test | 1 | 0.150252s | 0.183651s | 0.153105s | byte equality observed |
| weighted_p_square_quantile.test | 1 | 0.034044s | 0.042542s | 0.032764s | byte equality observed |
| weighted_pot_quantile.test | 1 | 0.031917s | 0.034756s | 0.030820s | byte equality observed |
| weighted_skewness.test | 4 | 0.004132s | 0.005517s | 0.004001s | byte equality observed |
| weighted_sum.test | 7 | 0.002525s | 0.002441s | 0.002463s | byte equality observed |
| weighted_sum_kahan.test | 2 | 0.011286s | 0.017941s | 0.011150s | byte equality observed |
| weighted_tail_mean.test | 1 | 0.026224s | 0.032661s | 0.026550s | byte equality observed |
| weighted_tail_quantile.test | 1 | 0.028729s | 0.035694s | 0.028138s | byte equality observed |
| weighted_tail_variate_means.test | 6 | 0.002670s | 0.002522s | 0.002563s | byte equality observed |
| weighted_variance.test | 7 | 0.002784s | 0.002920s | 0.002683s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44390936409).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
