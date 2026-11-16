# libs/container/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| vector_test.test | RUN | 5.940418 | 29.477908 | 24.550247 | 0.004398 | 0.004332 | 0.005872 |
| vector_options_test.test | RUN | 0.252387 | 1.283809 | 0.979190 | 0.001340 | 0.001423 | 0.001435 |
| uses_allocator_test.test | RUN | 0.040979 | 0.096794 | 0.125453 | 0.000474 | 0.000472 | 0.001232 |
| uses_allocator_construction_test.test | RUN | 0.133356 | 0.371436 | 0.447443 | 0.001094 | 0.001221 | 0.001294 |
| unsynchronized_pool_resource_test.test | RUN | 0.175169 | 1.189380 | 0.588810 | 0.001110 | 0.001436 | 0.001452 |
| tree_test.test | RUN | 0.809362 | 4.407775 | 3.433577 | 0.001035 | 0.001190 | 0.001330 |
| throw_exception_test.test | RUN | 0.097644 | 0.238219 | 0.300576 | 0.001152 | 0.001240 | 0.001304 |
| synchronized_pool_resource_test.test | RUN | 0.172509 | 1.175229 | 0.580330 | 0.001095 | 0.001419 | 0.001488 |
| string_view_compat_test.test | RUN | 0.294677 | 2.379347 | 1.118405 | 0.001083 | 0.001369 | 0.001457 |
| string_test.test | RUN | 1.438438 | 9.195129 | 6.255477 | 0.013603 | 0.012822 | 0.013544 |
| string_options_test.test | RUN | 0.245513 | 1.915818 | 1.000650 | 0.001112 | 0.001473 | 0.001422 |
| static_vector_test.test | RUN | 1.438965 | 7.678700 | 6.494171 | 0.001657 | 0.001713 | 0.001871 |
| static_vector_options_test.test | RUN | 0.168312 | 0.462691 | 0.545221 | 0.001293 | 0.001254 | 0.001474 |
| stable_vector_test.test | RUN | 3.387521 | 16.200916 | 12.854033 | 0.031050 | 0.032263 | 0.033268 |
| small_vector_test.test | RUN | 2.209707 | 11.222050 | 9.072212 | 0.002707 | 0.002489 | 0.004435 |
| small_vector_options_test.test | RUN | 0.302102 | 1.291250 | 1.156665 | 0.001333 | 0.001476 | 0.001627 |
| slist_test.test | RUN | 2.052700 | 10.138379 | 8.106130 | 0.023356 | 0.022588 | 0.022615 |
| set_test.test | RUN | 3.102196 | 19.102552 | 14.624135 | 0.014530 | 0.012806 | 0.013565 |
| segtor_test.test | RUN | 3.982379 | 20.789117 | 16.480940 | 0.696821 | 0.740059 | 0.722002 |
| segtor_options_test.test | RUN | 0.197010 | 0.556937 | 0.706270 | 0.001298 | 0.001561 | 0.001568 |
| scoped_allocator_usage_test.test | RUN | 0.706192 | 2.985309 | 2.693153 | 0.001089 | 0.001306 | 0.001404 |
| scoped_allocator_adaptor_test.test | RUN | 0.305569 | 0.822964 | 1.162039 | 0.001217 | 0.001210 | 0.001076 |
| resource_adaptor_test.test | RUN | 0.148881 | 0.486334 | 0.498370 | 0.001112 | 0.001316 | 0.001388 |
| polymorphic_allocator_test.test | RUN | 0.125225 | 0.390705 | 0.408521 | 0.001141 | 0.001229 | 0.001369 |
| pmr_vector_test.test | RUN | 0.068356 | 0.145010 | 0.214142 | 0.000481 | 0.000504 | 0.001146 |
| pmr_string_test.test | RUN | 0.144270 | 0.306311 | 0.391463 | 0.000440 | 0.000526 | 0.001165 |
| pmr_stable_vector_test.test | RUN | 0.169713 | 0.518761 | 0.606636 | 0.001168 | 0.001262 | 0.001174 |
| pmr_small_vector_test.test | RUN | 0.085822 | 0.201302 | 0.251713 | 0.001116 | 0.001330 | 0.001262 |
| pmr_slist_test.test | RUN | 0.128440 | 0.696346 | 0.593343 | 0.001187 | 0.001321 | 0.001240 |
| pmr_set_test.test | RUN | 0.139950 | 0.340222 | 0.437604 | 0.001108 | 0.001280 | 0.001079 |
| pmr_nest_test.test | RUN | 0.104996 | 0.222584 | 0.301107 | 0.001162 | 0.001190 | 0.001154 |
| pmr_map_test.test | RUN | 0.146030 | 0.353020 | 0.426386 | 0.001347 | 0.001256 | 0.001366 |
| pmr_list_test.test | RUN | 0.093660 | 0.215899 | 0.299235 | 0.001198 | 0.001228 | 0.001116 |
| pmr_hub_test.test | RUN | 0.132644 | 0.298742 | 0.379105 | 0.001085 | 0.001052 | 0.001340 |
| pmr_flat_set_test.test | RUN | 0.099120 | 0.236088 | 0.308989 | 0.001091 | 0.001222 | 0.001306 |
| pmr_flat_map_test.test | RUN | 0.120718 | 0.273869 | 0.382148 | 0.001355 | 0.001197 | 0.001217 |
| pmr_devector_test.test | RUN | 0.079149 | 0.239051 | 0.265630 | 0.001028 | 0.001249 | 0.001188 |
| pmr_deque_test.test | RUN | 0.077884 | 0.200517 | 0.289510 | 0.001080 | 0.001425 | 0.001151 |
| pair_test.test | RUN | 0.202494 | 0.481048 | 0.567581 | 0.001167 | 0.001413 | 0.001264 |
| null_iterators_test.test | RUN | 0.317781 | 0.932525 | 1.018256 | 0.001047 | 0.001252 | 0.001138 |
| node_handle_test.test | RUN | 0.140534 | 1.206724 | 0.399288 | 0.001111 | 0.001486 | 0.001209 |
| node_allocator_test.test | RUN | 2.444931 | 12.605643 | 9.885148 | 0.009110 | 0.009132 | 0.009356 |
| new_delete_resource_test.test | RUN | 0.173170 | 0.717536 | 0.569518 | 0.001466 | 0.001957 | 0.001846 |
| nest_test.test | RUN | 0.487524 | 3.429928 | 2.056010 | 0.001161 | 0.001493 | 0.001298 |
| nest_api_test.test | RUN | 0.832661 | 6.568939 | 4.064248 | 0.002185 | 0.002580 | 0.002470 |
| monotonic_buffer_resource_test.test | RUN | 0.152031 | 1.316236 | 0.577549 | 0.001089 | 0.001308 | 0.001247 |
| memory_resource_test.test | RUN | 0.087394 | 0.359994 | 0.262942 | 0.001068 | 0.001380 | 0.001091 |
| map_test.test | RUN | 4.227842 | 21.756189 | 20.397882 | 0.010734 | 0.010363 | 0.009823 |
| list_test.test | RUN | 2.196804 | 11.139091 | 8.455596 | 0.021493 | 0.022840 | 0.022476 |
| is_constructible_test.test | RUN | 0.060881 | 0.129075 | 0.192582 | 0.000469 | 0.000564 | 0.001318 |
| insert_vs_emplace_test.test | RUN | 0.210270 | 0.847797 | 1.130126 | 0.001210 | 0.001448 | 0.001534 |
| hub_uses_allocator_test.test | RUN | 0.231238 | 0.722483 | 0.780997 | 0.001299 | 0.001220 | 0.001349 |
| hub_stability_test.test | RUN | 0.527867 | 3.448229 | 2.872863 | 0.001488 | 0.001566 | 0.001702 |
| hub_sort_test.test | RUN | 0.339358 | 1.544910 | 1.385228 | 0.526254 | 0.538014 | 0.504318 |
| hub_pocxx_test.test | RUN | 0.298296 | 1.838212 | 0.977701 | 0.001354 | 0.001270 | 0.001214 |
| hub_new_extended_alignment_test.test | RUN | 0.157109 | 0.537283 | 0.544199 | 0.001170 | 0.001366 | 0.001149 |
| hub_exception_safety_test.test | RUN | 0.635407 | 4.393510 | 2.890899 | 0.065295 | 0.071984 | 0.069319 |
| hub_empty_sort_test.test | RUN | 0.183504 | 0.499647 | 0.626483 | 0.001120 | 0.001469 | 0.001273 |
| hub_api_test.test | RUN | 2.128337 | 17.647849 | 9.091586 | 0.003408 | 0.003386 | 0.003095 |
| global_resource_test.test | RUN | 0.097090 | 0.339229 | 0.324217 | 0.001387 | 0.001473 | 0.001316 |
| flat_tree_test.test | RUN | 4.008943 | 27.610122 | 17.772158 | 0.001169 | 0.001215 | 0.001295 |
| flat_set_test.test | RUN | 4.987891 | 34.656069 | 22.929214 | 0.007062 | 0.006554 | 0.006823 |
| flat_set_adaptor_test.test | RUN | 3.738950 | 30.520156 | 17.655237 | 0.007465 | 0.007096 | 0.007102 |
| flat_map_test.test | RUN | 8.083187 | 51.291183 | 37.445248 | 0.008339 | 0.008130 | 0.007634 |
| flat_map_adaptor_test.test | RUN | 5.137357 | 37.234080 | 26.308846 | 0.007795 | 0.007503 | 0.007473 |
| explicit_inst_vector_test.test | RUN | 0.793992 | 5.015083 | 3.857874 | 0.001133 | 0.001292 | 0.001183 |
| explicit_inst_string_test.test | RUN | 1.064577 | 8.944700 | 5.342073 | 0.001254 | 0.001189 | 0.001176 |
| explicit_inst_static_vector_test.test | RUN | 0.095384 | 0.316202 | 0.357759 | 0.001181 | 0.001221 | 0.001167 |
| explicit_inst_stable_vector_test.test | RUN | 0.632193 | 3.208762 | 2.462337 | 0.001168 | 0.001251 | 0.001342 |
| explicit_inst_small_vector_test.test | RUN | 0.524263 | 2.868335 | 2.306704 | 0.001211 | 0.001302 | 0.001106 |
| explicit_inst_slist_test.test | RUN | 0.387991 | 2.600553 | 1.772001 | 0.001383 | 0.001210 | 0.001273 |
| explicit_inst_set_test.test | RUN | 0.547503 | 2.977991 | 2.062555 | 0.001217 | 0.001341 | 0.001109 |
| explicit_inst_map_test.test | RUN | 0.587250 | 3.127642 | 2.237918 | 0.001157 | 0.001300 | 0.001104 |
| explicit_inst_list_test.test | RUN | 0.137076 | 0.716532 | 0.564605 | 0.001104 | 0.001240 | 0.001182 |
| explicit_inst_flat_set_test.test | RUN | 3.325082 | 22.970637 | 13.459513 | 0.001323 | 0.001320 | 0.001182 |
| explicit_inst_flat_map_test.test | RUN | 3.570442 | 23.929452 | 15.204152 | 0.001119 | 0.001336 | 0.001188 |
| explicit_inst_devector_test.test | RUN | 0.425988 | 2.818999 | 1.901244 | 0.001178 | 0.001295 | 0.001103 |
| explicit_inst_deque_test.test | RUN | 0.435939 | 3.019419 | 2.056317 | 0.001265 | 0.001262 | 0.001244 |
| devector_test.test | RUN | 5.883723 | 37.912735 | 24.973793 | 0.003021 | 0.003084 | 0.003846 |
| devector_options_test.test | RUN | 0.275984 | 1.661397 | 1.035256 | 0.001459 | 0.001430 | 0.001360 |
| deque_test.test | RUN | 4.423440 | 19.727738 | 17.647547 | 0.388995 | 0.364090 | 0.438054 |
| deque_options_test.test | RUN | 0.190341 | 0.606178 | 0.751522 | 0.001202 | 0.001351 | 0.001282 |
| copy_move_algo_test.test | RUN | 0.179297 | 0.735106 | 0.701062 | 0.001402 | 0.001468 | 0.001406 |
| common_iterator_test.test | RUN | 0.012572 | 0.035832 | 0.037239 | 0.000458 | 0.000519 | 0.001180 |
| boost_iterator_comp_test.test | RUN | 0.265600 | 0.868447 | 0.889054 | 0.001139 | 0.001133 | 0.001236 |
| allocator_traits_test.test | RUN | 0.148237 | 0.375146 | 0.464721 | 0.001147 | 0.001465 | 0.001345 |
| alloc_full_test.test | RUN | 0.181032 | 0.800488 | 0.663276 | 0.003806 | 0.003983 | 0.003930 |
| alloc_basic_test.test | RUN | 0.147702 | 0.564310 | 0.499540 | 0.001150 | 0.001366 | 0.001373 |
| adaptive_pool_test.test | RUN | 2.429898 | 12.459070 | 10.012330 | 0.011988 | 0.008030 | 0.012393 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 1.011× | 1.002×, 1.020× | 1.009× |
| clang | 1.067× | 1.070×, 1.063× | 1.002× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1363 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/43801643681).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| adaptive_pool_test.test | 3 | 0.008896s | 0.008290s | 0.008981s | byte equality observed |
| alloc_basic_test.test | 10 | 0.000812s | 0.000796s | 0.000796s | byte equality observed |
| alloc_full_test.test | 7 | 0.002696s | 0.002767s | 0.002796s | byte equality observed |
| allocator_traits_test.test | 10 | 0.000773s | 0.000759s | 0.000761s | byte equality observed |
| boost_iterator_comp_test.test | 10 | 0.000776s | 0.000783s | 0.000765s | byte equality observed |
| common_iterator_test.test | 10 | 0.000357s | 0.000360s | 0.000789s | byte equality observed |
| copy_move_algo_test.test | 10 | 0.001154s | 0.000899s | 0.000986s | byte equality observed |
| deque_options_test.test | 10 | 0.000828s | 0.000851s | 0.000842s | byte equality observed |
| deque_test.test | 1 | 0.372279s | 0.372468s | 0.444212s | byte equality observed |
| devector_options_test.test | 10 | 0.000884s | 0.000844s | 0.000835s | byte equality observed |
| devector_test.test | 5 | 0.002868s | 0.002810s | 0.003599s | byte equality observed |
| explicit_inst_deque_test.test | 10 | 0.000712s | 0.000712s | 0.000711s | byte equality observed |
| explicit_inst_devector_test.test | 10 | 0.000697s | 0.000696s | 0.000712s | byte equality observed |
| explicit_inst_flat_map_test.test | 10 | 0.000710s | 0.000711s | 0.000718s | byte equality observed |
| explicit_inst_flat_set_test.test | 10 | 0.000710s | 0.000714s | 0.000719s | byte equality observed |
| explicit_inst_list_test.test | 10 | 0.000698s | 0.000693s | 0.000707s | byte equality observed |
| explicit_inst_map_test.test | 10 | 0.000719s | 0.000724s | 0.000716s | byte equality observed |
| explicit_inst_set_test.test | 10 | 0.000719s | 0.000719s | 0.000713s | byte equality observed |
| explicit_inst_slist_test.test | 10 | 0.000718s | 0.000726s | 0.000712s | byte equality observed |
| explicit_inst_small_vector_test.test | 10 | 0.000711s | 0.000723s | 0.000716s | byte equality observed |
| explicit_inst_stable_vector_test.test | 10 | 0.000709s | 0.000722s | 0.000716s | byte equality observed |
| explicit_inst_static_vector_test.test | 10 | 0.000706s | 0.000703s | 0.000709s | byte equality observed |
| explicit_inst_string_test.test | 10 | 0.000717s | 0.000731s | 0.000723s | byte equality observed |
| explicit_inst_vector_test.test | 10 | 0.000709s | 0.000719s | 0.000719s | byte equality observed |
| flat_map_adaptor_test.test | 4 | 0.005671s | 0.005350s | 0.005379s | byte equality observed |
| flat_map_test.test | 4 | 0.006143s | 0.005743s | 0.005500s | byte equality observed |
| flat_set_adaptor_test.test | 4 | 0.005508s | 0.005009s | 0.005359s | byte equality observed |
| flat_set_test.test | 4 | 0.005451s | 0.005007s | 0.005266s | byte equality observed |
| flat_tree_test.test | 10 | 0.000728s | 0.000713s | 0.000727s | byte equality observed |
| global_resource_test.test | 10 | 0.000755s | 0.000758s | 0.000756s | byte equality observed |
| hub_api_test.test | 8 | 0.002548s | 0.002237s | 0.002151s | byte equality observed |
| hub_empty_sort_test.test | 10 | 0.000728s | 0.000731s | 0.000724s | byte equality observed |
| hub_exception_safety_test.test | 1 | 0.051044s | 0.056392s | 0.050248s | byte equality observed |
| hub_new_extended_alignment_test.test | 10 | 0.000794s | 0.000799s | 0.000736s | byte equality observed |
| hub_pocxx_test.test | 10 | 0.000778s | 0.000776s | 0.000751s | byte equality observed |
| hub_sort_test.test | 1 | 0.424304s | 0.443068s | 0.407166s | byte equality observed |
| hub_stability_test.test | 10 | 0.000975s | 0.000968s | 0.000977s | byte equality observed |
| hub_uses_allocator_test.test | 10 | 0.000743s | 0.000748s | 0.000757s | byte equality observed |
| insert_vs_emplace_test.test | 10 | 0.000769s | 0.000763s | 0.000757s | byte equality observed |
| is_constructible_test.test | 10 | 0.000346s | 0.000321s | 0.000723s | byte equality observed |
| list_test.test | 2 | 0.015458s | 0.015525s | 0.015879s | byte equality observed |
| map_test.test | 3 | 0.007579s | 0.007285s | 0.007198s | byte equality observed |
| memory_resource_test.test | 10 | 0.000757s | 0.000727s | 0.000758s | byte equality observed |
| monotonic_buffer_resource_test.test | 10 | 0.000761s | 0.000735s | 0.000760s | byte equality observed |
| nest_api_test.test | 10 | 0.001629s | 0.001607s | 0.001644s | byte equality observed |
| nest_test.test | 10 | 0.000768s | 0.000746s | 0.000787s | byte equality observed |
| new_delete_resource_test.test | 10 | 0.001126s | 0.001102s | 0.001116s | byte equality observed |
| node_allocator_test.test | 3 | 0.006622s | 0.006548s | 0.006628s | byte equality observed |
| node_handle_test.test | 10 | 0.000757s | 0.000732s | 0.000766s | byte equality observed |
| null_iterators_test.test | 10 | 0.000753s | 0.000703s | 0.000751s | byte equality observed |
| pair_test.test | 10 | 0.000753s | 0.000707s | 0.000756s | byte equality observed |
| pmr_deque_test.test | 10 | 0.000735s | 0.000697s | 0.000729s | byte equality observed |
| pmr_devector_test.test | 10 | 0.000741s | 0.000707s | 0.000743s | byte equality observed |
| pmr_flat_map_test.test | 10 | 0.000743s | 0.000714s | 0.000733s | byte equality observed |
| pmr_flat_set_test.test | 10 | 0.000741s | 0.000701s | 0.000735s | byte equality observed |
| pmr_hub_test.test | 10 | 0.000737s | 0.000719s | 0.000737s | byte equality observed |
| pmr_list_test.test | 10 | 0.000739s | 0.000716s | 0.000731s | byte equality observed |
| pmr_map_test.test | 10 | 0.000735s | 0.000700s | 0.000738s | byte equality observed |
| pmr_nest_test.test | 10 | 0.000741s | 0.000718s | 0.000733s | byte equality observed |
| pmr_set_test.test | 10 | 0.000736s | 0.000729s | 0.000743s | byte equality observed |
| pmr_slist_test.test | 10 | 0.000730s | 0.000740s | 0.000731s | byte equality observed |
| pmr_small_vector_test.test | 10 | 0.000732s | 0.000731s | 0.000735s | byte equality observed |
| pmr_stable_vector_test.test | 10 | 0.000740s | 0.000735s | 0.000779s | byte equality observed |
| pmr_string_test.test | 10 | 0.000348s | 0.000340s | 0.000787s | byte equality observed |
| pmr_vector_test.test | 10 | 0.000346s | 0.000342s | 0.000772s | byte equality observed |
| polymorphic_allocator_test.test | 10 | 0.000754s | 0.000766s | 0.000793s | byte equality observed |
| resource_adaptor_test.test | 10 | 0.000766s | 0.000743s | 0.000807s | byte equality observed |
| scoped_allocator_adaptor_test.test | 10 | 0.000756s | 0.000722s | 0.000804s | byte equality observed |
| scoped_allocator_usage_test.test | 10 | 0.000763s | 0.000726s | 0.000804s | byte equality observed |
| segtor_options_test.test | 10 | 0.000803s | 0.000775s | 0.000812s | byte equality observed |
| segtor_test.test | 1 | 0.455696s | 0.461920s | 0.501066s | byte equality observed |
| set_test.test | 2 | 0.010677s | 0.009534s | 0.010274s | byte equality observed |
| slist_test.test | 2 | 0.016219s | 0.015970s | 0.015937s | byte equality observed |
| small_vector_options_test.test | 10 | 0.000857s | 0.000817s | 0.000804s | byte equality observed |
| small_vector_test.test | 7 | 0.001678s | 0.001578s | 0.002721s | byte equality observed |
| stable_vector_test.test | 1 | 0.027649s | 0.027957s | 0.028451s | byte equality observed |
| static_vector_options_test.test | 10 | 0.000800s | 0.000775s | 0.000783s | byte equality observed |
| static_vector_test.test | 10 | 0.001055s | 0.000979s | 0.001009s | byte equality observed |
| string_options_test.test | 10 | 0.000773s | 0.000784s | 0.000751s | byte equality observed |
| string_test.test | 3 | 0.009149s | 0.008970s | 0.009241s | byte equality observed |
| string_view_compat_test.test | 10 | 0.000748s | 0.000746s | 0.000717s | byte equality observed |
| synchronized_pool_resource_test.test | 10 | 0.000771s | 0.000773s | 0.000751s | byte equality observed |
| throw_exception_test.test | 10 | 0.000721s | 0.000723s | 0.000706s | byte equality observed |
| tree_test.test | 10 | 0.000719s | 0.000715s | 0.000691s | byte equality observed |
| unsynchronized_pool_resource_test.test | 10 | 0.000768s | 0.000772s | 0.000748s | byte equality observed |
| uses_allocator_construction_test.test | 10 | 0.000724s | 0.000716s | 0.000706s | byte equality observed |
| uses_allocator_test.test | 10 | 0.000345s | 0.000315s | 0.000685s | byte equality observed |
| vector_options_test.test | 10 | 0.000846s | 0.000828s | 0.000821s | byte equality observed |
| vector_test.test | 5 | 0.002953s | 0.002976s | 0.003900s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/43801643681).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
