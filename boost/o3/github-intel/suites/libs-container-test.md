# libs/container/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| vector_test.test | RUN | 5.978546 | 29.814975 | 23.782137 | 0.004664 | 0.004625 | 0.005967 |
| vector_options_test.test | RUN | 0.269813 | 1.299583 | 0.969858 | 0.001256 | 0.001577 | 0.001443 |
| uses_allocator_test.test | RUN | 0.044152 | 0.098894 | 0.122161 | 0.000490 | 0.000526 | 0.001149 |
| uses_allocator_construction_test.test | RUN | 0.137934 | 0.378839 | 0.446288 | 0.001333 | 0.001362 | 0.001127 |
| unsynchronized_pool_resource_test.test | RUN | 0.185088 | 1.215923 | 0.575454 | 0.001329 | 0.001480 | 0.001197 |
| tree_test.test | RUN | 0.846808 | 4.329366 | 3.398460 | 0.000875 | 0.001397 | 0.001237 |
| throw_exception_test.test | RUN | 0.099485 | 0.246248 | 0.285333 | 0.001272 | 0.001329 | 0.001084 |
| synchronized_pool_resource_test.test | RUN | 0.159914 | 1.205499 | 0.567616 | 0.001131 | 0.001459 | 0.001193 |
| string_view_compat_test.test | RUN | 0.311925 | 2.455591 | 1.122285 | 0.001139 | 0.001439 | 0.001144 |
| string_test.test | RUN | 1.478637 | 9.426272 | 6.129217 | 0.014086 | 0.012745 | 0.013167 |
| string_options_test.test | RUN | 0.248976 | 1.956767 | 0.989849 | 0.001380 | 0.001456 | 0.001365 |
| static_vector_test.test | RUN | 1.462729 | 7.610567 | 6.336054 | 0.001775 | 0.001714 | 0.001655 |
| static_vector_options_test.test | RUN | 0.171123 | 0.497112 | 0.540521 | 0.001243 | 0.001245 | 0.001361 |
| stable_vector_test.test | RUN | 3.454212 | 16.397708 | 12.175327 | 0.031672 | 0.031541 | 0.032831 |
| small_vector_test.test | RUN | 2.228563 | 11.283626 | 8.997032 | 0.002860 | 0.002492 | 0.004374 |
| small_vector_options_test.test | RUN | 0.311415 | 1.333435 | 1.148610 | 0.001411 | 0.001466 | 0.001284 |
| slist_test.test | RUN | 2.076884 | 10.331066 | 7.841191 | 0.023410 | 0.023285 | 0.022647 |
| set_test.test | RUN | 3.174182 | 18.983737 | 14.381400 | 0.014505 | 0.012984 | 0.013351 |
| segtor_test.test | RUN | 4.081184 | 20.715513 | 16.068117 | 0.722687 | 0.730635 | 0.716141 |
| segtor_options_test.test | RUN | 0.204234 | 0.586800 | 0.673486 | 0.001493 | 0.001432 | 0.001232 |
| scoped_allocator_usage_test.test | RUN | 0.729041 | 3.077871 | 2.568075 | 0.001193 | 0.001449 | 0.001225 |
| scoped_allocator_adaptor_test.test | RUN | 0.300468 | 0.819957 | 1.124490 | 0.001374 | 0.001264 | 0.001026 |
| resource_adaptor_test.test | RUN | 0.158751 | 0.482120 | 0.492737 | 0.001454 | 0.001195 | 0.001248 |
| polymorphic_allocator_test.test | RUN | 0.134611 | 0.397687 | 0.413169 | 0.001098 | 0.001288 | 0.001099 |
| pmr_vector_test.test | RUN | 0.074227 | 0.145848 | 0.206423 | 0.000524 | 0.000521 | 0.001158 |
| pmr_string_test.test | RUN | 0.145015 | 0.308629 | 0.391248 | 0.000496 | 0.000560 | 0.001316 |
| pmr_stable_vector_test.test | RUN | 0.177731 | 0.516351 | 0.590257 | 0.001385 | 0.001217 | 0.001118 |
| pmr_small_vector_test.test | RUN | 0.088686 | 0.201136 | 0.278667 | 0.001136 | 0.001336 | 0.001322 |
| pmr_slist_test.test | RUN | 0.134152 | 0.706168 | 0.590347 | 0.000897 | 0.001298 | 0.001125 |
| pmr_set_test.test | RUN | 0.141965 | 0.345361 | 0.432616 | 0.001239 | 0.001263 | 0.001096 |
| pmr_nest_test.test | RUN | 0.108601 | 0.237510 | 0.291541 | 0.001535 | 0.001450 | 0.001133 |
| pmr_map_test.test | RUN | 0.151827 | 0.350779 | 0.433724 | 0.001234 | 0.001198 | 0.001207 |
| pmr_list_test.test | RUN | 0.096669 | 0.217538 | 0.281769 | 0.001098 | 0.001291 | 0.001157 |
| pmr_hub_test.test | RUN | 0.135632 | 0.298528 | 0.353326 | 0.001489 | 0.001331 | 0.001191 |
| pmr_flat_set_test.test | RUN | 0.104203 | 0.236991 | 0.309369 | 0.000908 | 0.001074 | 0.001172 |
| pmr_flat_map_test.test | RUN | 0.126826 | 0.273107 | 0.363510 | 0.001089 | 0.001138 | 0.001366 |
| pmr_devector_test.test | RUN | 0.084224 | 0.240209 | 0.273233 | 0.001206 | 0.001491 | 0.001168 |
| pmr_deque_test.test | RUN | 0.082223 | 0.197786 | 0.276652 | 0.001160 | 0.001387 | 0.001154 |
| pair_test.test | RUN | 0.212397 | 0.473495 | 0.600160 | 0.001323 | 0.001338 | 0.001236 |
| null_iterators_test.test | RUN | 0.333104 | 0.932549 | 1.020420 | 0.001284 | 0.001536 | 0.001210 |
| node_handle_test.test | RUN | 0.145685 | 1.226392 | 0.421036 | 0.001284 | 0.001488 | 0.001142 |
| node_allocator_test.test | RUN | 2.469177 | 12.857571 | 9.799762 | 0.009816 | 0.009363 | 0.009331 |
| new_delete_resource_test.test | RUN | 0.176261 | 0.720387 | 0.579134 | 0.001644 | 0.001933 | 0.001834 |
| nest_test.test | RUN | 0.498865 | 3.402431 | 2.056892 | 0.001315 | 0.001424 | 0.001269 |
| nest_api_test.test | RUN | 0.732621 | 6.623733 | 3.949614 | 0.002266 | 0.002432 | 0.002382 |
| monotonic_buffer_resource_test.test | RUN | 0.180696 | 1.317722 | 0.588533 | 0.001259 | 0.001386 | 0.001272 |
| memory_resource_test.test | RUN | 0.105486 | 0.348110 | 0.340846 | 0.001287 | 0.001100 | 0.001194 |
| map_test.test | RUN | 4.360019 | 21.595882 | 20.396784 | 0.010521 | 0.010340 | 0.008773 |
| list_test.test | RUN | 2.241825 | 10.957742 | 8.445549 | 0.021958 | 0.022791 | 0.022122 |
| is_constructible_test.test | RUN | 0.064559 | 0.126293 | 0.193980 | 0.000527 | 0.000607 | 0.001163 |
| insert_vs_emplace_test.test | RUN | 0.212499 | 0.856349 | 1.107632 | 0.001323 | 0.001538 | 0.001205 |
| hub_uses_allocator_test.test | RUN | 0.238095 | 0.735315 | 0.776366 | 0.001159 | 0.001308 | 0.001357 |
| hub_stability_test.test | RUN | 0.533612 | 3.493123 | 2.879387 | 0.001411 | 0.001698 | 0.001476 |
| hub_sort_test.test | RUN | 0.343180 | 1.557124 | 1.359668 | 0.520982 | 0.545725 | 0.501852 |
| hub_pocxx_test.test | RUN | 0.292242 | 1.880800 | 0.985641 | 0.001307 | 0.001306 | 0.001117 |
| hub_new_extended_alignment_test.test | RUN | 0.164023 | 0.557170 | 0.512727 | 0.001316 | 0.001543 | 0.001302 |
| hub_exception_safety_test.test | RUN | 0.640469 | 4.442933 | 2.765484 | 0.065008 | 0.067906 | 0.064769 |
| hub_empty_sort_test.test | RUN | 0.186083 | 0.497663 | 0.615730 | 0.001143 | 0.001176 | 0.001291 |
| hub_api_test.test | RUN | 2.190201 | 17.541997 | 9.111964 | 0.003462 | 0.003247 | 0.003156 |
| global_resource_test.test | RUN | 0.099072 | 0.336629 | 0.314321 | 0.001261 | 0.001422 | 0.001319 |
| flat_tree_test.test | RUN | 4.071111 | 27.558629 | 17.585717 | 0.001204 | 0.001353 | 0.001192 |
| flat_set_test.test | RUN | 5.071582 | 35.097126 | 22.745840 | 0.007518 | 0.007005 | 0.006815 |
| flat_set_adaptor_test.test | RUN | 3.775413 | 30.640633 | 17.878585 | 0.007494 | 0.006743 | 0.006431 |
| flat_map_test.test | RUN | 8.188919 | 51.623604 | 37.533024 | 0.008686 | 0.008110 | 0.007606 |
| flat_map_adaptor_test.test | RUN | 5.151878 | 37.230359 | 25.993273 | 0.008013 | 0.007505 | 0.007328 |
| explicit_inst_vector_test.test | RUN | 0.787028 | 5.076510 | 3.938457 | 0.001167 | 0.001384 | 0.001132 |
| explicit_inst_string_test.test | RUN | 1.067091 | 9.024238 | 5.592692 | 0.001207 | 0.001346 | 0.001310 |
| explicit_inst_static_vector_test.test | RUN | 0.092578 | 0.330529 | 0.375791 | 0.001133 | 0.001247 | 0.001172 |
| explicit_inst_stable_vector_test.test | RUN | 0.638185 | 3.204114 | 2.560508 | 0.001193 | 0.001329 | 0.001254 |
| explicit_inst_small_vector_test.test | RUN | 0.513149 | 2.918583 | 2.285085 | 0.001065 | 0.001294 | 0.001130 |
| explicit_inst_slist_test.test | RUN | 0.398853 | 2.634558 | 1.815642 | 0.001202 | 0.001421 | 0.001186 |
| explicit_inst_set_test.test | RUN | 0.547477 | 3.036402 | 2.041448 | 0.001161 | 0.001325 | 0.001092 |
| explicit_inst_map_test.test | RUN | 0.602831 | 3.166698 | 2.273277 | 0.001162 | 0.001311 | 0.001130 |
| explicit_inst_list_test.test | RUN | 0.136598 | 0.723463 | 0.570583 | 0.001184 | 0.001423 | 0.001094 |
| explicit_inst_flat_set_test.test | RUN | 3.371785 | 23.051817 | 13.385003 | 0.001185 | 0.001281 | 0.001192 |
| explicit_inst_flat_map_test.test | RUN | 3.594037 | 23.930147 | 14.932823 | 0.001296 | 0.001306 | 0.001123 |
| explicit_inst_devector_test.test | RUN | 0.437212 | 2.856900 | 1.878087 | 0.001168 | 0.001404 | 0.001232 |
| explicit_inst_deque_test.test | RUN | 0.443619 | 3.049475 | 2.030987 | 0.001128 | 0.001188 | 0.001161 |
| devector_test.test | RUN | 6.393025 | 34.826392 | 27.581356 | 0.003180 | 0.003105 | 0.003743 |
| devector_options_test.test | RUN | 0.274556 | 1.663908 | 1.091114 | 0.001503 | 0.001504 | 0.001416 |
| deque_test.test | RUN | 4.090920 | 23.801748 | 14.838920 | 0.364954 | 0.359355 | 0.437085 |
| deque_options_test.test | RUN | 0.205029 | 0.612405 | 0.718320 | 0.001273 | 0.001418 | 0.001172 |
| copy_move_algo_test.test | RUN | 0.191399 | 0.729319 | 0.652989 | 0.001522 | 0.001368 | 0.001253 |
| common_iterator_test.test | RUN | 0.013126 | 0.035823 | 0.036801 | 0.000474 | 0.000479 | 0.001128 |
| boost_iterator_comp_test.test | RUN | 0.277745 | 0.855001 | 0.991840 | 0.001201 | 0.001265 | 0.001191 |
| allocator_traits_test.test | RUN | 0.157962 | 0.372414 | 0.464389 | 0.001239 | 0.001191 | 0.001228 |
| alloc_full_test.test | RUN | 0.185522 | 0.809722 | 0.693954 | 0.003866 | 0.003991 | 0.003966 |
| alloc_basic_test.test | RUN | 0.153473 | 0.556089 | 0.505724 | 0.001273 | 0.001346 | 0.001251 |
| adaptive_pool_test.test | RUN | 2.490276 | 13.702427 | 9.280430 | 0.008682 | 0.011452 | 0.012192 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 1.012× | 1.007×, 1.017× | 1.004× |
| clang | 1.073× | 1.074×, 1.072× | 1.008× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1364 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/43778388618).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| adaptive_pool_test.test | 3 | 0.009105s | 0.008196s | 0.009136s | byte equality observed |
| alloc_basic_test.test | 10 | 0.000811s | 0.000820s | 0.000806s | byte equality observed |
| alloc_full_test.test | 7 | 0.002693s | 0.002709s | 0.002849s | byte equality observed |
| allocator_traits_test.test | 10 | 0.000767s | 0.000768s | 0.000772s | byte equality observed |
| boost_iterator_comp_test.test | 10 | 0.000789s | 0.000782s | 0.000792s | byte equality observed |
| common_iterator_test.test | 10 | 0.000366s | 0.000365s | 0.000800s | byte equality observed |
| copy_move_algo_test.test | 10 | 0.001172s | 0.000920s | 0.000993s | byte equality observed |
| deque_options_test.test | 10 | 0.000840s | 0.000851s | 0.000827s | byte equality observed |
| deque_test.test | 1 | 0.375018s | 0.372148s | 0.447384s | byte equality observed |
| devector_options_test.test | 10 | 0.000884s | 0.000840s | 0.000842s | byte equality observed |
| devector_test.test | 5 | 0.002900s | 0.002805s | 0.003623s | byte equality observed |
| explicit_inst_deque_test.test | 10 | 0.000717s | 0.000722s | 0.000721s | byte equality observed |
| explicit_inst_devector_test.test | 10 | 0.000705s | 0.000719s | 0.000721s | byte equality observed |
| explicit_inst_flat_map_test.test | 10 | 0.000714s | 0.000720s | 0.000721s | byte equality observed |
| explicit_inst_flat_set_test.test | 10 | 0.000709s | 0.000731s | 0.000724s | byte equality observed |
| explicit_inst_list_test.test | 10 | 0.000706s | 0.000721s | 0.000717s | byte equality observed |
| explicit_inst_map_test.test | 10 | 0.000722s | 0.000726s | 0.000716s | byte equality observed |
| explicit_inst_set_test.test | 10 | 0.000718s | 0.000731s | 0.000711s | byte equality observed |
| explicit_inst_slist_test.test | 10 | 0.000711s | 0.000729s | 0.000728s | byte equality observed |
| explicit_inst_small_vector_test.test | 10 | 0.000719s | 0.000717s | 0.000716s | byte equality observed |
| explicit_inst_stable_vector_test.test | 10 | 0.000720s | 0.000711s | 0.000710s | byte equality observed |
| explicit_inst_static_vector_test.test | 10 | 0.000706s | 0.000696s | 0.000706s | byte equality observed |
| explicit_inst_string_test.test | 10 | 0.000708s | 0.000706s | 0.000731s | byte equality observed |
| explicit_inst_vector_test.test | 10 | 0.000718s | 0.000703s | 0.000719s | byte equality observed |
| flat_map_adaptor_test.test | 4 | 0.005674s | 0.005367s | 0.005430s | byte equality observed |
| flat_map_test.test | 4 | 0.006184s | 0.005726s | 0.005500s | byte equality observed |
| flat_set_adaptor_test.test | 4 | 0.005519s | 0.005017s | 0.005348s | byte equality observed |
| flat_set_test.test | 4 | 0.005453s | 0.004812s | 0.005236s | byte equality observed |
| flat_tree_test.test | 10 | 0.000722s | 0.000718s | 0.000735s | byte equality observed |
| global_resource_test.test | 10 | 0.000749s | 0.000747s | 0.000769s | byte equality observed |
| hub_api_test.test | 8 | 0.002549s | 0.002224s | 0.002186s | byte equality observed |
| hub_empty_sort_test.test | 10 | 0.000743s | 0.000720s | 0.000749s | byte equality observed |
| hub_exception_safety_test.test | 1 | 0.049660s | 0.054595s | 0.049960s | byte equality observed |
| hub_new_extended_alignment_test.test | 10 | 0.000756s | 0.000767s | 0.000751s | byte equality observed |
| hub_pocxx_test.test | 10 | 0.000756s | 0.000747s | 0.000753s | byte equality observed |
| hub_sort_test.test | 1 | 0.425555s | 0.439666s | 0.413349s | byte equality observed |
| hub_stability_test.test | 10 | 0.000972s | 0.000974s | 0.000966s | byte equality observed |
| hub_uses_allocator_test.test | 10 | 0.000749s | 0.000752s | 0.000727s | byte equality observed |
| insert_vs_emplace_test.test | 10 | 0.000765s | 0.000766s | 0.000752s | byte equality observed |
| is_constructible_test.test | 10 | 0.000341s | 0.000324s | 0.000702s | byte equality observed |
| list_test.test | 2 | 0.015503s | 0.015637s | 0.016061s | byte equality observed |
| map_test.test | 3 | 0.007560s | 0.007351s | 0.007238s | byte equality observed |
| memory_resource_test.test | 10 | 0.000755s | 0.000754s | 0.000735s | byte equality observed |
| monotonic_buffer_resource_test.test | 10 | 0.000761s | 0.000746s | 0.000732s | byte equality observed |
| nest_api_test.test | 10 | 0.001627s | 0.001635s | 0.001648s | byte equality observed |
| nest_test.test | 10 | 0.000785s | 0.000766s | 0.000778s | byte equality observed |
| new_delete_resource_test.test | 10 | 0.001118s | 0.001131s | 0.001125s | byte equality observed |
| node_allocator_test.test | 3 | 0.006642s | 0.006605s | 0.006700s | byte equality observed |
| node_handle_test.test | 10 | 0.000775s | 0.000761s | 0.000760s | byte equality observed |
| null_iterators_test.test | 10 | 0.000747s | 0.000745s | 0.000742s | byte equality observed |
| pair_test.test | 10 | 0.000757s | 0.000753s | 0.000737s | byte equality observed |
| pmr_deque_test.test | 10 | 0.000734s | 0.000719s | 0.000721s | byte equality observed |
| pmr_devector_test.test | 10 | 0.000750s | 0.000734s | 0.000732s | byte equality observed |
| pmr_flat_map_test.test | 10 | 0.000739s | 0.000745s | 0.000731s | byte equality observed |
| pmr_flat_set_test.test | 10 | 0.000743s | 0.000737s | 0.000727s | byte equality observed |
| pmr_hub_test.test | 10 | 0.000746s | 0.000734s | 0.000731s | byte equality observed |
| pmr_list_test.test | 10 | 0.000740s | 0.000740s | 0.000731s | byte equality observed |
| pmr_map_test.test | 10 | 0.000744s | 0.000744s | 0.000728s | byte equality observed |
| pmr_nest_test.test | 10 | 0.000733s | 0.000743s | 0.000745s | byte equality observed |
| pmr_set_test.test | 10 | 0.000734s | 0.000744s | 0.000758s | byte equality observed |
| pmr_slist_test.test | 10 | 0.000736s | 0.000741s | 0.000737s | byte equality observed |
| pmr_small_vector_test.test | 10 | 0.000733s | 0.000744s | 0.000731s | byte equality observed |
| pmr_stable_vector_test.test | 10 | 0.000743s | 0.000748s | 0.000742s | byte equality observed |
| pmr_string_test.test | 10 | 0.000355s | 0.000345s | 0.000790s | byte equality observed |
| pmr_vector_test.test | 10 | 0.000345s | 0.000348s | 0.000774s | byte equality observed |
| polymorphic_allocator_test.test | 10 | 0.000765s | 0.000774s | 0.000808s | byte equality observed |
| resource_adaptor_test.test | 10 | 0.000776s | 0.000765s | 0.000826s | byte equality observed |
| scoped_allocator_adaptor_test.test | 10 | 0.000765s | 0.000762s | 0.000829s | byte equality observed |
| scoped_allocator_usage_test.test | 10 | 0.000766s | 0.000768s | 0.000808s | byte equality observed |
| segtor_options_test.test | 10 | 0.000806s | 0.000804s | 0.000799s | byte equality observed |
| segtor_test.test | 1 | 0.461641s | 0.467807s | 0.506485s | byte equality observed |
| set_test.test | 2 | 0.010684s | 0.009508s | 0.010330s | byte equality observed |
| slist_test.test | 2 | 0.016348s | 0.016071s | 0.016182s | byte equality observed |
| small_vector_options_test.test | 10 | 0.000836s | 0.000816s | 0.000808s | byte equality observed |
| small_vector_test.test | 7 | 0.001695s | 0.001576s | 0.002735s | byte equality observed |
| stable_vector_test.test | 1 | 0.027651s | 0.028114s | 0.028538s | byte equality observed |
| static_vector_options_test.test | 10 | 0.000789s | 0.000762s | 0.000777s | byte equality observed |
| static_vector_test.test | 10 | 0.001064s | 0.000970s | 0.001013s | byte equality observed |
| string_options_test.test | 10 | 0.000773s | 0.000786s | 0.000779s | byte equality observed |
| string_test.test | 3 | 0.009209s | 0.009011s | 0.009267s | byte equality observed |
| string_view_compat_test.test | 10 | 0.000748s | 0.000757s | 0.000734s | byte equality observed |
| synchronized_pool_resource_test.test | 10 | 0.000785s | 0.000769s | 0.000768s | byte equality observed |
| throw_exception_test.test | 10 | 0.000722s | 0.000722s | 0.000726s | byte equality observed |
| tree_test.test | 10 | 0.000722s | 0.000740s | 0.000701s | byte equality observed |
| unsynchronized_pool_resource_test.test | 10 | 0.000777s | 0.000777s | 0.000755s | byte equality observed |
| uses_allocator_construction_test.test | 10 | 0.000723s | 0.000716s | 0.000716s | byte equality observed |
| uses_allocator_test.test | 10 | 0.000316s | 0.000341s | 0.000697s | byte equality observed |
| vector_options_test.test | 10 | 0.000845s | 0.000841s | 0.000832s | byte equality observed |
| vector_test.test | 5 | 0.002974s | 0.002954s | 0.003932s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/43778388618).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
