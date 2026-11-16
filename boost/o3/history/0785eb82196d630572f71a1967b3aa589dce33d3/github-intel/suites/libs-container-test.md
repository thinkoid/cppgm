# libs/container/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| vector_test.test | RUN | 5.834144 | 29.337509 | 24.528747 | 0.004502 | 0.004232 | 0.005823 |
| vector_options_test.test | RUN | 0.254862 | 1.240642 | 0.970314 | 0.001264 | 0.001474 | 0.001482 |
| uses_allocator_test.test | RUN | 0.043318 | 0.096774 | 0.123864 | 0.000466 | 0.000461 | 0.001202 |
| uses_allocator_construction_test.test | RUN | 0.129440 | 0.372356 | 0.435502 | 0.001040 | 0.001237 | 0.001241 |
| unsynchronized_pool_resource_test.test | RUN | 0.169623 | 1.190052 | 0.585538 | 0.001138 | 0.001286 | 0.001522 |
| tree_test.test | RUN | 0.792447 | 4.438286 | 3.398312 | 0.001031 | 0.001227 | 0.001342 |
| throw_exception_test.test | RUN | 0.093868 | 0.242785 | 0.295563 | 0.001025 | 0.001196 | 0.001380 |
| synchronized_pool_resource_test.test | RUN | 0.167362 | 1.194936 | 0.581175 | 0.001132 | 0.001201 | 0.001376 |
| string_view_compat_test.test | RUN | 0.281390 | 2.391293 | 1.116879 | 0.001033 | 0.001227 | 0.001398 |
| string_test.test | RUN | 1.412656 | 9.183160 | 6.227770 | 0.014066 | 0.012572 | 0.013514 |
| string_options_test.test | RUN | 0.236151 | 1.907575 | 1.005774 | 0.001128 | 0.001228 | 0.001370 |
| static_vector_test.test | RUN | 1.420339 | 7.573544 | 6.465213 | 0.001603 | 0.001563 | 0.001754 |
| static_vector_options_test.test | RUN | 0.158486 | 0.470489 | 0.538280 | 0.001200 | 0.001242 | 0.001574 |
| stable_vector_test.test | RUN | 3.337962 | 16.117467 | 12.751447 | 0.031062 | 0.032410 | 0.033348 |
| small_vector_test.test | RUN | 2.170706 | 11.110253 | 8.978673 | 0.002652 | 0.002387 | 0.004366 |
| small_vector_options_test.test | RUN | 0.295330 | 1.303626 | 1.151760 | 0.001298 | 0.001369 | 0.001561 |
| slist_test.test | RUN | 2.024002 | 10.087195 | 7.964357 | 0.023417 | 0.021822 | 0.022651 |
| set_test.test | RUN | 3.050857 | 18.595595 | 14.509581 | 0.014114 | 0.012615 | 0.014002 |
| segtor_test.test | RUN | 3.945616 | 20.543173 | 16.193301 | 0.703933 | 0.765373 | 0.714331 |
| segtor_options_test.test | RUN | 0.189756 | 0.564929 | 0.692362 | 0.001112 | 0.001349 | 0.001269 |
| scoped_allocator_usage_test.test | RUN | 0.694962 | 2.988604 | 2.687640 | 0.001170 | 0.001179 | 0.001210 |
| scoped_allocator_adaptor_test.test | RUN | 0.291638 | 0.824374 | 1.137319 | 0.001134 | 0.001229 | 0.001182 |
| resource_adaptor_test.test | RUN | 0.146870 | 0.490603 | 0.499943 | 0.001132 | 0.001331 | 0.001522 |
| polymorphic_allocator_test.test | RUN | 0.119089 | 0.390635 | 0.418507 | 0.001105 | 0.001190 | 0.001336 |
| pmr_vector_test.test | RUN | 0.070603 | 0.142398 | 0.208918 | 0.000463 | 0.000486 | 0.001299 |
| pmr_string_test.test | RUN | 0.134526 | 0.304884 | 0.402667 | 0.000446 | 0.000455 | 0.001246 |
| pmr_stable_vector_test.test | RUN | 0.163485 | 0.511579 | 0.603290 | 0.001000 | 0.001126 | 0.001228 |
| pmr_small_vector_test.test | RUN | 0.082042 | 0.201157 | 0.281614 | 0.001029 | 0.001185 | 0.001076 |
| pmr_slist_test.test | RUN | 0.128181 | 0.691023 | 0.602644 | 0.000987 | 0.001324 | 0.001381 |
| pmr_set_test.test | RUN | 0.134211 | 0.334547 | 0.437641 | 0.001097 | 0.001284 | 0.001257 |
| pmr_nest_test.test | RUN | 0.097997 | 0.233751 | 0.289512 | 0.001009 | 0.001149 | 0.001240 |
| pmr_map_test.test | RUN | 0.135904 | 0.355027 | 0.440535 | 0.001102 | 0.001136 | 0.001275 |
| pmr_list_test.test | RUN | 0.088097 | 0.215125 | 0.288713 | 0.001114 | 0.001258 | 0.001390 |
| pmr_hub_test.test | RUN | 0.123170 | 0.300323 | 0.365939 | 0.000993 | 0.001163 | 0.001381 |
| pmr_flat_set_test.test | RUN | 0.095343 | 0.231749 | 0.321630 | 0.001068 | 0.001210 | 0.001255 |
| pmr_flat_map_test.test | RUN | 0.117793 | 0.266594 | 0.371143 | 0.001110 | 0.001255 | 0.001328 |
| pmr_devector_test.test | RUN | 0.076407 | 0.238494 | 0.280148 | 0.001172 | 0.001209 | 0.001020 |
| pmr_deque_test.test | RUN | 0.078597 | 0.199791 | 0.282290 | 0.001112 | 0.001390 | 0.001305 |
| pair_test.test | RUN | 0.193933 | 0.476762 | 0.618029 | 0.001010 | 0.001139 | 0.001497 |
| null_iterators_test.test | RUN | 0.311627 | 0.919589 | 1.047511 | 0.001049 | 0.001238 | 0.001330 |
| node_handle_test.test | RUN | 0.134502 | 1.203658 | 0.428914 | 0.001020 | 0.001200 | 0.001430 |
| node_allocator_test.test | RUN | 2.413047 | 12.536489 | 9.913271 | 0.008825 | 0.009030 | 0.009631 |
| new_delete_resource_test.test | RUN | 0.164849 | 0.713343 | 0.593960 | 0.001888 | 0.001858 | 0.001888 |
| nest_test.test | RUN | 0.478092 | 3.378349 | 2.099398 | 0.001041 | 0.001213 | 0.001425 |
| nest_api_test.test | RUN | 0.821642 | 6.324503 | 4.172482 | 0.002082 | 0.002388 | 0.002442 |
| monotonic_buffer_resource_test.test | RUN | 0.147619 | 1.293983 | 0.561215 | 0.001018 | 0.001277 | 0.001361 |
| memory_resource_test.test | RUN | 0.084894 | 0.356208 | 0.340884 | 0.000993 | 0.001255 | 0.001407 |
| map_test.test | RUN | 4.170120 | 21.439942 | 20.583171 | 0.010558 | 0.009684 | 0.009078 |
| list_test.test | RUN | 2.153107 | 10.924512 | 8.494993 | 0.021602 | 0.022647 | 0.022359 |
| is_constructible_test.test | RUN | 0.058733 | 0.126602 | 0.192968 | 0.000507 | 0.000458 | 0.001182 |
| insert_vs_emplace_test.test | RUN | 0.211011 | 0.851416 | 1.144400 | 0.001259 | 0.001223 | 0.001278 |
| hub_uses_allocator_test.test | RUN | 0.224388 | 0.716360 | 0.781907 | 0.001256 | 0.001319 | 0.001314 |
| hub_stability_test.test | RUN | 0.518819 | 3.422389 | 2.909235 | 0.001483 | 0.001508 | 0.001473 |
| hub_sort_test.test | RUN | 0.327143 | 1.550555 | 1.401871 | 0.526685 | 0.542865 | 0.508132 |
| hub_pocxx_test.test | RUN | 0.296043 | 1.827431 | 0.975502 | 0.001284 | 0.001459 | 0.000947 |
| hub_new_extended_alignment_test.test | RUN | 0.153791 | 0.549597 | 0.550552 | 0.001184 | 0.001233 | 0.001226 |
| hub_exception_safety_test.test | RUN | 0.614832 | 4.380252 | 2.924071 | 0.057687 | 0.067684 | 0.072822 |
| hub_empty_sort_test.test | RUN | 0.175519 | 0.490410 | 0.631352 | 0.001075 | 0.001314 | 0.001314 |
| hub_api_test.test | RUN | 2.091442 | 17.191485 | 9.112414 | 0.003361 | 0.003374 | 0.003208 |
| global_resource_test.test | RUN | 0.089361 | 0.334799 | 0.322818 | 0.001104 | 0.001267 | 0.001282 |
| flat_tree_test.test | RUN | 3.963256 | 27.202687 | 18.012132 | 0.001190 | 0.001354 | 0.001271 |
| flat_set_test.test | RUN | 4.959844 | 34.210566 | 23.366375 | 0.007177 | 0.006606 | 0.007170 |
| flat_set_adaptor_test.test | RUN | 3.712574 | 30.227522 | 18.033291 | 0.007475 | 0.006875 | 0.007375 |
| flat_map_test.test | RUN | 8.058710 | 51.638831 | 38.117685 | 0.008419 | 0.008241 | 0.007685 |
| flat_map_adaptor_test.test | RUN | 5.107730 | 37.461868 | 26.932508 | 0.007764 | 0.007518 | 0.007733 |
| explicit_inst_vector_test.test | RUN | 0.777514 | 5.046209 | 3.974565 | 0.001207 | 0.001372 | 0.001264 |
| explicit_inst_string_test.test | RUN | 1.052343 | 9.001489 | 5.476500 | 0.001017 | 0.001251 | 0.001338 |
| explicit_inst_static_vector_test.test | RUN | 0.092573 | 0.319188 | 0.373416 | 0.001120 | 0.001276 | 0.001278 |
| explicit_inst_stable_vector_test.test | RUN | 0.619647 | 3.187158 | 2.535625 | 0.001188 | 0.001211 | 0.001372 |
| explicit_inst_small_vector_test.test | RUN | 0.511541 | 2.890914 | 2.372289 | 0.001129 | 0.001394 | 0.001348 |
| explicit_inst_slist_test.test | RUN | 0.385542 | 2.646542 | 1.829302 | 0.001228 | 0.001415 | 0.001342 |
| explicit_inst_set_test.test | RUN | 0.534302 | 3.032101 | 2.105753 | 0.001136 | 0.001249 | 0.001331 |
| explicit_inst_map_test.test | RUN | 0.586978 | 3.147936 | 2.314490 | 0.001056 | 0.001279 | 0.001420 |
| explicit_inst_list_test.test | RUN | 0.131661 | 0.714324 | 0.579831 | 0.001069 | 0.001287 | 0.001298 |
| explicit_inst_flat_set_test.test | RUN | 3.278639 | 23.264130 | 13.882501 | 0.001172 | 0.001403 | 0.001433 |
| explicit_inst_flat_map_test.test | RUN | 3.528949 | 24.535150 | 15.355430 | 0.001070 | 0.001144 | 0.001107 |
| explicit_inst_devector_test.test | RUN | 0.422783 | 2.856446 | 1.938863 | 0.001097 | 0.001366 | 0.001240 |
| explicit_inst_deque_test.test | RUN | 0.426706 | 3.136007 | 2.043751 | 0.001093 | 0.001518 | 0.001226 |
| devector_test.test | RUN | 6.348343 | 38.627331 | 28.495242 | 0.002968 | 0.003159 | 0.003734 |
| devector_options_test.test | RUN | 0.262796 | 1.732986 | 1.055699 | 0.001390 | 0.001726 | 0.001444 |
| deque_test.test | RUN | 4.257651 | 19.680096 | 14.720897 | 0.362101 | 0.366629 | 0.435702 |
| deque_options_test.test | RUN | 0.194357 | 0.631178 | 0.758406 | 0.001173 | 0.001512 | 0.001314 |
| copy_move_algo_test.test | RUN | 0.184838 | 0.748302 | 0.689114 | 0.001422 | 0.001263 | 0.001241 |
| common_iterator_test.test | RUN | 0.012552 | 0.037318 | 0.037237 | 0.000353 | 0.000552 | 0.001182 |
| boost_iterator_comp_test.test | RUN | 0.262791 | 0.887646 | 0.975118 | 0.001056 | 0.001346 | 0.001395 |
| allocator_traits_test.test | RUN | 0.146362 | 0.387958 | 0.452374 | 0.001194 | 0.001445 | 0.001420 |
| alloc_full_test.test | RUN | 0.174087 | 0.836121 | 0.714163 | 0.003528 | 0.003699 | 0.004194 |
| alloc_basic_test.test | RUN | 0.143178 | 0.576615 | 0.527784 | 0.001225 | 0.001504 | 0.001386 |
| adaptive_pool_test.test | RUN | 1.683028 | 12.915702 | 10.095438 | 0.008413 | 0.008030 | 0.012696 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 1.016× | 1.021×, 1.010× | 0.990× |
| clang | 1.068× | 1.069×, 1.067× | 0.993× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1364 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/43967972441).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| adaptive_pool_test.test | 3 | 0.009183s | 0.008292s | 0.009083s | byte equality observed |
| alloc_basic_test.test | 10 | 0.000812s | 0.000831s | 0.000807s | byte equality observed |
| alloc_full_test.test | 8 | 0.002731s | 0.002727s | 0.002827s | byte equality observed |
| allocator_traits_test.test | 10 | 0.000772s | 0.000766s | 0.000771s | byte equality observed |
| boost_iterator_comp_test.test | 10 | 0.000783s | 0.000793s | 0.000785s | byte equality observed |
| common_iterator_test.test | 10 | 0.000372s | 0.000361s | 0.000794s | byte equality observed |
| copy_move_algo_test.test | 10 | 0.001174s | 0.000890s | 0.001002s | byte equality observed |
| deque_options_test.test | 10 | 0.000849s | 0.000856s | 0.000820s | byte equality observed |
| deque_test.test | 1 | 0.373217s | 0.372974s | 0.445619s | byte equality observed |
| devector_options_test.test | 10 | 0.000903s | 0.000845s | 0.000838s | byte equality observed |
| devector_test.test | 5 | 0.002914s | 0.002821s | 0.003633s | byte equality observed |
| explicit_inst_deque_test.test | 10 | 0.000739s | 0.000713s | 0.000713s | byte equality observed |
| explicit_inst_devector_test.test | 10 | 0.000736s | 0.000702s | 0.000714s | byte equality observed |
| explicit_inst_flat_map_test.test | 10 | 0.000730s | 0.000723s | 0.000705s | byte equality observed |
| explicit_inst_flat_set_test.test | 10 | 0.000728s | 0.000719s | 0.000712s | byte equality observed |
| explicit_inst_list_test.test | 10 | 0.000725s | 0.000713s | 0.000721s | byte equality observed |
| explicit_inst_map_test.test | 10 | 0.000745s | 0.000716s | 0.000732s | byte equality observed |
| explicit_inst_set_test.test | 10 | 0.000740s | 0.000725s | 0.000723s | byte equality observed |
| explicit_inst_slist_test.test | 10 | 0.000741s | 0.000710s | 0.000737s | byte equality observed |
| explicit_inst_small_vector_test.test | 10 | 0.000731s | 0.000714s | 0.000721s | byte equality observed |
| explicit_inst_stable_vector_test.test | 10 | 0.000742s | 0.000717s | 0.000732s | byte equality observed |
| explicit_inst_static_vector_test.test | 10 | 0.000720s | 0.000698s | 0.000716s | byte equality observed |
| explicit_inst_string_test.test | 10 | 0.000727s | 0.000717s | 0.000719s | byte equality observed |
| explicit_inst_vector_test.test | 10 | 0.000726s | 0.000714s | 0.000718s | byte equality observed |
| flat_map_adaptor_test.test | 4 | 0.005735s | 0.005380s | 0.005427s | byte equality observed |
| flat_map_test.test | 4 | 0.006230s | 0.005780s | 0.005508s | byte equality observed |
| flat_set_adaptor_test.test | 4 | 0.005533s | 0.005075s | 0.005349s | byte equality observed |
| flat_set_test.test | 4 | 0.005514s | 0.004878s | 0.005227s | byte equality observed |
| flat_tree_test.test | 10 | 0.000742s | 0.000742s | 0.000755s | byte equality observed |
| global_resource_test.test | 10 | 0.000769s | 0.000770s | 0.000755s | byte equality observed |
| hub_api_test.test | 7 | 0.002582s | 0.002257s | 0.002192s | byte equality observed |
| hub_empty_sort_test.test | 10 | 0.000744s | 0.000757s | 0.000738s | byte equality observed |
| hub_exception_safety_test.test | 1 | 0.053670s | 0.059619s | 0.054155s | byte equality observed |
| hub_new_extended_alignment_test.test | 10 | 0.000816s | 0.000831s | 0.000797s | byte equality observed |
| hub_pocxx_test.test | 10 | 0.000795s | 0.000790s | 0.000771s | byte equality observed |
| hub_sort_test.test | 1 | 0.429239s | 0.447267s | 0.415239s | byte equality observed |
| hub_stability_test.test | 10 | 0.000978s | 0.000979s | 0.001017s | byte equality observed |
| hub_uses_allocator_test.test | 10 | 0.000758s | 0.000764s | 0.000763s | byte equality observed |
| insert_vs_emplace_test.test | 10 | 0.000773s | 0.000771s | 0.000763s | byte equality observed |
| is_constructible_test.test | 10 | 0.000351s | 0.000356s | 0.000731s | byte equality observed |
| list_test.test | 2 | 0.015561s | 0.015597s | 0.016035s | byte equality observed |
| map_test.test | 3 | 0.007633s | 0.007415s | 0.007276s | byte equality observed |
| memory_resource_test.test | 10 | 0.000767s | 0.000775s | 0.000776s | byte equality observed |
| monotonic_buffer_resource_test.test | 10 | 0.000775s | 0.000777s | 0.000753s | byte equality observed |
| nest_api_test.test | 10 | 0.001645s | 0.001663s | 0.001670s | byte equality observed |
| nest_test.test | 10 | 0.000796s | 0.000794s | 0.000786s | byte equality observed |
| new_delete_resource_test.test | 10 | 0.001145s | 0.001139s | 0.001133s | byte equality observed |
| node_allocator_test.test | 3 | 0.006671s | 0.006669s | 0.006748s | byte equality observed |
| node_handle_test.test | 10 | 0.000772s | 0.000762s | 0.000750s | byte equality observed |
| null_iterators_test.test | 10 | 0.000759s | 0.000755s | 0.000764s | byte equality observed |
| pair_test.test | 10 | 0.000752s | 0.000756s | 0.000741s | byte equality observed |
| pmr_deque_test.test | 10 | 0.000746s | 0.000741s | 0.000732s | byte equality observed |
| pmr_devector_test.test | 10 | 0.000757s | 0.000738s | 0.000747s | byte equality observed |
| pmr_flat_map_test.test | 10 | 0.000750s | 0.000731s | 0.000741s | byte equality observed |
| pmr_flat_set_test.test | 10 | 0.000750s | 0.000739s | 0.000749s | byte equality observed |
| pmr_hub_test.test | 10 | 0.000752s | 0.000754s | 0.000752s | byte equality observed |
| pmr_list_test.test | 10 | 0.000740s | 0.000745s | 0.000745s | byte equality observed |
| pmr_map_test.test | 10 | 0.000748s | 0.000739s | 0.000745s | byte equality observed |
| pmr_nest_test.test | 10 | 0.000741s | 0.000748s | 0.000744s | byte equality observed |
| pmr_set_test.test | 10 | 0.000745s | 0.000742s | 0.000734s | byte equality observed |
| pmr_slist_test.test | 10 | 0.000756s | 0.000739s | 0.000737s | byte equality observed |
| pmr_small_vector_test.test | 10 | 0.000741s | 0.000738s | 0.000731s | byte equality observed |
| pmr_stable_vector_test.test | 10 | 0.000753s | 0.000742s | 0.000749s | byte equality observed |
| pmr_string_test.test | 10 | 0.000358s | 0.000359s | 0.000769s | byte equality observed |
| pmr_vector_test.test | 10 | 0.000353s | 0.000356s | 0.000822s | byte equality observed |
| polymorphic_allocator_test.test | 10 | 0.000769s | 0.000781s | 0.000814s | byte equality observed |
| resource_adaptor_test.test | 10 | 0.000765s | 0.000756s | 0.000845s | byte equality observed |
| scoped_allocator_adaptor_test.test | 10 | 0.000774s | 0.000744s | 0.000834s | byte equality observed |
| scoped_allocator_usage_test.test | 10 | 0.000758s | 0.000739s | 0.000822s | byte equality observed |
| segtor_options_test.test | 10 | 0.000811s | 0.000794s | 0.000819s | byte equality observed |
| segtor_test.test | 1 | 0.459288s | 0.465563s | 0.496811s | byte equality observed |
| set_test.test | 2 | 0.010789s | 0.009669s | 0.010375s | byte equality observed |
| slist_test.test | 1 | 0.016457s | 0.016264s | 0.016133s | byte equality observed |
| small_vector_options_test.test | 10 | 0.000847s | 0.000842s | 0.000828s | byte equality observed |
| small_vector_test.test | 7 | 0.001712s | 0.001605s | 0.002743s | byte equality observed |
| stable_vector_test.test | 1 | 0.027851s | 0.028111s | 0.028612s | byte equality observed |
| static_vector_options_test.test | 10 | 0.000824s | 0.000808s | 0.000803s | byte equality observed |
| static_vector_test.test | 10 | 0.001066s | 0.000992s | 0.001026s | byte equality observed |
| string_options_test.test | 10 | 0.000781s | 0.000785s | 0.000776s | byte equality observed |
| string_test.test | 3 | 0.009247s | 0.009004s | 0.009317s | byte equality observed |
| string_view_compat_test.test | 10 | 0.000746s | 0.000760s | 0.000737s | byte equality observed |
| synchronized_pool_resource_test.test | 10 | 0.000778s | 0.000791s | 0.000781s | byte equality observed |
| throw_exception_test.test | 10 | 0.000719s | 0.000717s | 0.000726s | byte equality observed |
| tree_test.test | 10 | 0.000721s | 0.000737s | 0.000717s | byte equality observed |
| unsynchronized_pool_resource_test.test | 10 | 0.000769s | 0.000789s | 0.000781s | byte equality observed |
| uses_allocator_construction_test.test | 10 | 0.000720s | 0.000745s | 0.000731s | byte equality observed |
| uses_allocator_test.test | 10 | 0.000315s | 0.000341s | 0.000710s | byte equality observed |
| vector_options_test.test | 10 | 0.000860s | 0.000870s | 0.000846s | byte equality observed |
| vector_test.test | 5 | 0.002987s | 0.002986s | 0.003959s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/43967972441).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
