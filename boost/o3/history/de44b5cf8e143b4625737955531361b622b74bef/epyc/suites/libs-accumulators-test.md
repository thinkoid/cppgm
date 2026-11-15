# libs/accumulators/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| count.test | RUN | 0.561346 | 1.498225 | 1.634134 | 0.004130 | 0.002923 | 0.002658 |
| covariance.test | RUN | 1.131806 | 3.864268 | 4.087659 | 0.003212 | 0.002887 | 0.002896 |
| droppable.test | RUN | 0.746678 | 1.980205 | 2.145739 | 0.003130 | 0.002932 | 0.002605 |
| error_of.test | RUN | 0.796764 | 1.933396 | 2.379774 | 0.002866 | 0.002519 | 0.002280 |
| extended_p_square.test | RUN | 0.856014 | 2.504895 | 2.467751 | 0.004458 | 0.004153 | 0.003647 |
| extended_p_square_quantile.test | RUN | 1.099748 | 3.920174 | 3.504252 | 0.006148 | 0.006955 | 0.006004 |
| external_accumulator.test | RUN | 0.722620 | 1.869626 | 2.091346 | 0.002922 | 0.002924 | 0.002917 |
| external_weights.test | RUN | 0.626076 | 1.472697 | 1.669692 | 0.002845 | 0.002509 | 0.002684 |
| kurtosis.test | RUN | 0.961143 | 2.437002 | 2.826359 | 0.003551 | 0.004433 | 0.003708 |
| max.test | RUN | 0.555072 | 1.477573 | 1.580012 | 0.002877 | 0.002949 | 0.002965 |
| mean.test | RUN | 0.746735 | 2.115392 | 2.377305 | 0.002771 | 0.002996 | 0.002387 |
| median.test | RUN | 1.040704 | 4.160931 | 3.607397 | 0.093445 | 0.096264 | 0.086190 |
| min.test | RUN | 0.570742 | 1.460954 | 1.585537 | 0.002771 | 0.002989 | 0.002429 |
| moment.test | RUN | 0.643989 | 1.771289 | 1.935855 | 0.002953 | 0.002947 | 0.002727 |
| p_square_cumul_dist.test | RUN | 0.891735 | 2.931690 | 2.650518 | 0.620813 | 0.722137 | 0.614737 |
| p_square_quantile.test | RUN | 0.778498 | 2.632887 | 2.229361 | 0.020313 | 0.021401 | 0.019069 |
| reference.test | RUN | 0.671933 | 1.636491 | 1.863818 | 0.002933 | 0.002871 | 0.002427 |
| rolling_count.test | RUN | 0.686638 | 1.906227 | 1.833900 | 0.002621 | 0.003027 | 0.002874 |
| rolling_sum.test | RUN | 0.657881 | 1.942064 | 1.967953 | 0.002792 | 0.003017 | 0.002951 |
| rolling_mean.test | RUN | 0.983681 | 3.391054 | 3.313755 | 0.002957 | 0.003057 | 0.002737 |
| rolling_variance.test | RUN | 1.099744 | 4.035697 | 3.748897 | 0.003055 | 0.003189 | 0.002812 |
| rolling_moment.test | RUN | 0.836027 | 2.329193 | 2.434568 | 0.003136 | 0.003067 | 0.003003 |
| skewness.test | RUN | 0.859830 | 2.348658 | 2.720541 | 0.003609 | 0.004207 | 0.003565 |
| sum.test | RUN | 0.601644 | 1.632090 | 1.777497 | 0.002896 | 0.002921 | 0.002652 |
| sum_kahan.test | RUN | 0.644490 | 1.741296 | 1.833317 | 0.011524 | 0.019896 | 0.010332 |
| tail.test | RUN | 0.679311 | 2.333189 | 2.086487 | 0.002504 | 0.003071 | 0.003018 |
| tail_mean.test | RUN | 0.922717 | 2.716140 | 3.102055 | 0.016423 | 0.019427 | 0.017628 |
| tail_quantile.test | RUN | 0.749581 | 2.261266 | 2.417923 | 0.018997 | 0.022810 | 0.019098 |
| variance.test | RUN | 0.723834 | 1.999085 | 2.352144 | 0.002821 | 0.002844 | 0.002860 |
| vector.test | RUN | 0.772041 | 2.439118 | 2.937744 | 0.002727 | 0.002754 | 0.002881 |
| weighted_covariance.test | RUN | 1.056637 | 3.837908 | 4.316947 | 0.002680 | 0.002634 | 0.002956 |
| weighted_extended_p_square.test | RUN | 0.729434 | 2.204267 | 2.222141 | 0.016279 | 0.017621 | 0.016742 |
| weighted_kurtosis.test | RUN | 0.849869 | 2.217961 | 2.720239 | 0.003385 | 0.004578 | 0.003744 |
| weighted_mean.test | RUN | 0.715455 | 1.943900 | 2.393516 | 0.002780 | 0.002675 | 0.002768 |
| weighted_median.test | RUN | 0.916220 | 2.638438 | 3.170882 | 0.825705 | 0.887317 | 0.867292 |
| weighted_moment.test | RUN | 0.594070 | 1.484833 | 1.792750 | 0.002296 | 0.002594 | 0.002702 |
| weighted_p_square_cumul_dist.test | RUN | 0.711008 | 2.220316 | 2.152993 | 0.082454 | 0.095997 | 0.086346 |
| weighted_p_square_quantile.test | RUN | 0.671762 | 2.187757 | 2.029138 | 0.020069 | 0.023407 | 0.020661 |
| weighted_skewness.test | RUN | 0.767449 | 2.013413 | 2.453798 | 0.002988 | 0.004393 | 0.003283 |
| weighted_sum.test | RUN | 0.478272 | 1.255497 | 1.391503 | 0.002559 | 0.002744 | 0.002397 |
| weighted_sum_kahan.test | RUN | 0.502473 | 1.372231 | 1.518076 | 0.006330 | 0.011257 | 0.006345 |
| weighted_variance.test | RUN | 0.860237 | 2.460431 | 3.038320 | 0.002871 | 0.003172 | 0.002943 |
| valarray.test | RUN | 0.796753 | 2.423481 | 2.815451 | 0.002778 | 0.002745 | 0.002608 |
| tail_variate_means.test | RUN | 1.035629 | 3.768121 | 3.912909 | 0.002722 | 0.002756 | 0.002780 |
| pot_quantile.test | RUN | 1.279065 | 4.152000 | 4.630472 | 0.008534 | 0.009750 | 0.008606 |
| weighted_pot_quantile.test | RUN | 1.304354 | 4.049579 | 4.621216 | 0.019660 | 0.023433 | 0.020238 |
| weighted_tail_mean.test | RUN | 1.114976 | 3.226270 | 3.918410 | 0.018425 | 0.021322 | 0.018046 |
| weighted_tail_quantile.test | RUN | 1.150598 | 2.765041 | 3.486138 | 0.015201 | 0.017287 | 0.014844 |
| weighted_tail_variate_means.test | RUN | 1.307906 | 3.564231 | 3.876212 | 0.002012 | 0.002035 | 0.001979 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 1.149× | 1.157×, 1.140× | 0.999× |
| clang | 0.993× | 1.009×, 0.977× | 1.009× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1363 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43658654032).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| count.test | 1 | 0.002334s | 0.002259s | 0.002255s | byte equality observed |
| covariance.test | 1 | 0.002365s | 0.002347s | 0.002353s | byte equality observed |
| droppable.test | 1 | 0.002321s | 0.002291s | 0.002209s | byte equality observed |
| error_of.test | 1 | 0.002269s | 0.002224s | 0.002201s | byte equality observed |
| extended_p_square.test | 5 | 0.003211s | 0.003235s | 0.003030s | byte equality observed |
| extended_p_square_quantile.test | 4 | 0.005762s | 0.006157s | 0.005154s | byte equality observed |
| external_accumulator.test | 8 | 0.002045s | 0.001905s | 0.001922s | byte equality observed |
| external_weights.test | 7 | 0.001911s | 0.001763s | 0.001749s | byte equality observed |
| kurtosis.test | 6 | 0.002622s | 0.003306s | 0.002493s | byte equality observed |
| max.test | 8 | 0.001953s | 0.001825s | 0.001858s | byte equality observed |
| mean.test | 9 | 0.001937s | 0.001863s | 0.001848s | byte equality observed |
| median.test | 1 | 0.088757s | 0.104781s | 0.085458s | byte equality observed |
| min.test | 5 | 0.001918s | 0.001887s | 0.001859s | byte equality observed |
| moment.test | 8 | 0.001961s | 0.001867s | 0.001879s | byte equality observed |
| p_square_cumul_dist.test | 1 | 0.609244s | 0.728282s | 0.599973s | byte equality observed |
| p_square_quantile.test | 1 | 0.019992s | 0.020627s | 0.019101s | byte equality observed |
| pot_quantile.test | 3 | 0.008300s | 0.009730s | 0.007886s | byte equality observed |
| reference.test | 10 | 0.001996s | 0.001963s | 0.001928s | byte equality observed |
| rolling_count.test | 10 | 0.001925s | 0.001879s | 0.001857s | byte equality observed |
| rolling_mean.test | 9 | 0.002043s | 0.001981s | 0.001928s | byte equality observed |
| rolling_moment.test | 9 | 0.002023s | 0.001943s | 0.001939s | byte equality observed |
| rolling_sum.test | 8 | 0.001930s | 0.001831s | 0.001895s | byte equality observed |
| rolling_variance.test | 8 | 0.001992s | 0.001969s | 0.001947s | byte equality observed |
| skewness.test | 6 | 0.002605s | 0.003337s | 0.002506s | byte equality observed |
| sum.test | 10 | 0.001926s | 0.001839s | 0.001826s | byte equality observed |
| sum_kahan.test | 2 | 0.011074s | 0.019754s | 0.009796s | byte equality observed |
| tail.test | 10 | 0.001902s | 0.001842s | 0.001815s | byte equality observed |
| tail_mean.test | 2 | 0.016803s | 0.019059s | 0.017516s | byte equality observed |
| tail_quantile.test | 1 | 0.019816s | 0.022506s | 0.018540s | byte equality observed |
| tail_variate_means.test | 10 | 0.001843s | 0.001801s | 0.001851s | byte equality observed |
| valarray.test | 9 | 0.001850s | 0.001789s | 0.001815s | byte equality observed |
| variance.test | 10 | 0.001910s | 0.001856s | 0.001879s | byte equality observed |
| vector.test | 9 | 0.001846s | 0.001801s | 0.001761s | byte equality observed |
| weighted_covariance.test | 10 | 0.001845s | 0.001793s | 0.001767s | byte equality observed |
| weighted_extended_p_square.test | 2 | 0.016484s | 0.018096s | 0.014616s | byte equality observed |
| weighted_kurtosis.test | 6 | 0.002580s | 0.003807s | 0.002606s | byte equality observed |
| weighted_mean.test | 10 | 0.001814s | 0.001792s | 0.001782s | byte equality observed |
| weighted_median.test | 1 | 0.785546s | 0.845908s | 0.786960s | byte equality observed |
| weighted_moment.test | 8 | 0.001836s | 0.001793s | 0.001766s | byte equality observed |
| weighted_p_square_cumul_dist.test | 1 | 0.092498s | 0.130581s | 0.087680s | byte equality observed |
| weighted_p_square_quantile.test | 1 | 0.021050s | 0.024791s | 0.019494s | byte equality observed |
| weighted_pot_quantile.test | 1 | 0.021263s | 0.022396s | 0.019880s | byte equality observed |
| weighted_skewness.test | 6 | 0.002976s | 0.004065s | 0.002838s | byte equality observed |
| weighted_sum.test | 9 | 0.001885s | 0.001862s | 0.001854s | byte equality observed |
| weighted_sum_kahan.test | 2 | 0.006649s | 0.011203s | 0.005886s | byte equality observed |
| weighted_tail_mean.test | 2 | 0.018430s | 0.019650s | 0.018564s | byte equality observed |
| weighted_tail_quantile.test | 1 | 0.018569s | 0.021393s | 0.018411s | byte equality observed |
| weighted_tail_variate_means.test | 10 | 0.002006s | 0.001922s | 0.001990s | byte equality observed |
| weighted_variance.test | 9 | 0.001986s | 0.002136s | 0.001938s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43658654032).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
