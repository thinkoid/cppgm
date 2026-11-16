# libs/container/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| vector_test.test | RUN | 5.231477 | 24.766966 | 20.027178 | 0.003999 | 0.003883 | 0.005184 |
| vector_options_test.test | RUN | 0.222739 | 1.051257 | 0.750206 | 0.001298 | 0.001441 | 0.001225 |
| uses_allocator_test.test | RUN | 0.037784 | 0.080674 | 0.090316 | 0.000559 | 0.000620 | 0.001113 |
| uses_allocator_construction_test.test | RUN | 0.110948 | 0.298582 | 0.320990 | 0.001081 | 0.001146 | 0.001193 |
| unsynchronized_pool_resource_test.test | RUN | 0.149729 | 0.986074 | 0.444811 | 0.000957 | 0.001222 | 0.001235 |
| tree_test.test | RUN | 0.702423 | 3.759527 | 2.695087 | 0.001159 | 0.001139 | 0.001205 |
| throw_exception_test.test | RUN | 0.078289 | 0.198274 | 0.220457 | 0.001010 | 0.001157 | 0.001269 |
| synchronized_pool_resource_test.test | RUN | 0.149110 | 0.973446 | 0.429441 | 0.001209 | 0.001326 | 0.001263 |
| string_view_compat_test.test | RUN | 0.253817 | 2.034040 | 0.849754 | 0.001128 | 0.001065 | 0.001097 |
| string_test.test | RUN | 1.252221 | 7.799460 | 5.121338 | 0.012095 | 0.011587 | 0.012269 |
| string_options_test.test | RUN | 0.211652 | 1.603414 | 0.800579 | 0.001203 | 0.001136 | 0.001232 |
| static_vector_test.test | RUN | 1.257463 | 6.465817 | 5.260734 | 0.001542 | 0.001656 | 0.001635 |
| static_vector_options_test.test | RUN | 0.150924 | 0.408966 | 0.405519 | 0.001144 | 0.001176 | 0.001223 |
| stable_vector_test.test | RUN | 2.982819 | 13.907716 | 10.389067 | 0.034819 | 0.035738 | 0.036339 |
| small_vector_test.test | RUN | 1.941622 | 9.441038 | 7.441798 | 0.002322 | 0.002415 | 0.003635 |
| small_vector_options_test.test | RUN | 0.269403 | 1.156228 | 0.899681 | 0.001192 | 0.001364 | 0.001316 |
| slist_test.test | RUN | 1.839879 | 8.544144 | 6.428382 | 0.020414 | 0.020757 | 0.020907 |
| set_test.test | RUN | 2.748748 | 15.778134 | 11.882566 | 0.013518 | 0.012282 | 0.013344 |
| segtor_test.test | RUN | 3.537327 | 17.416239 | 13.493494 | 0.343334 | 0.350470 | 0.390164 |
| segtor_options_test.test | RUN | 0.167013 | 0.510124 | 0.538439 | 0.001211 | 0.001258 | 0.001109 |
| scoped_allocator_usage_test.test | RUN | 0.618135 | 2.531388 | 2.137463 | 0.001107 | 0.001120 | 0.001224 |
| scoped_allocator_adaptor_test.test | RUN | 0.270815 | 0.673049 | 0.843428 | 0.001167 | 0.001158 | 0.001026 |
| resource_adaptor_test.test | RUN | 0.140392 | 0.420635 | 0.375866 | 0.001084 | 0.001149 | 0.001271 |
| polymorphic_allocator_test.test | RUN | 0.111104 | 0.327651 | 0.328005 | 0.001080 | 0.001121 | 0.001110 |
| pmr_vector_test.test | RUN | 0.064846 | 0.125797 | 0.169709 | 0.000465 | 0.000563 | 0.001017 |
| pmr_string_test.test | RUN | 0.121707 | 0.267503 | 0.309671 | 0.000469 | 0.000473 | 0.001091 |
| pmr_stable_vector_test.test | RUN | 0.154669 | 0.441356 | 0.491558 | 0.001045 | 0.001157 | 0.001020 |
| pmr_small_vector_test.test | RUN | 0.074513 | 0.163276 | 0.210730 | 0.001059 | 0.001104 | 0.001130 |
| pmr_slist_test.test | RUN | 0.116786 | 0.598484 | 0.499747 | 0.001084 | 0.001023 | 0.001023 |
| pmr_set_test.test | RUN | 0.121701 | 0.288665 | 0.332370 | 0.000907 | 0.001106 | 0.001086 |
| pmr_nest_test.test | RUN | 0.093997 | 0.201012 | 0.221636 | 0.001013 | 0.001071 | 0.001144 |
| pmr_map_test.test | RUN | 0.123736 | 0.290164 | 0.339526 | 0.001032 | 0.001132 | 0.000958 |
| pmr_list_test.test | RUN | 0.079914 | 0.184672 | 0.224021 | 0.000963 | 0.001030 | 0.001102 |
| pmr_hub_test.test | RUN | 0.115940 | 0.249337 | 0.288513 | 0.001027 | 0.001139 | 0.001051 |
| pmr_flat_set_test.test | RUN | 0.091601 | 0.194536 | 0.252778 | 0.001019 | 0.001024 | 0.001004 |
| pmr_flat_map_test.test | RUN | 0.107399 | 0.224342 | 0.296503 | 0.001007 | 0.001091 | 0.001295 |
| pmr_devector_test.test | RUN | 0.073071 | 0.204029 | 0.215701 | 0.001084 | 0.001178 | 0.001056 |
| pmr_deque_test.test | RUN | 0.071631 | 0.161349 | 0.213562 | 0.001093 | 0.001056 | 0.001013 |
| pair_test.test | RUN | 0.170607 | 0.387390 | 0.471325 | 0.000976 | 0.001092 | 0.001166 |
| null_iterators_test.test | RUN | 0.276249 | 0.773891 | 0.818641 | 0.001058 | 0.001120 | 0.001087 |
| node_handle_test.test | RUN | 0.121350 | 0.970128 | 0.354598 | 0.001069 | 0.001140 | 0.001308 |
| node_allocator_test.test | RUN | 2.154348 | 10.636326 | 8.138192 | 0.008606 | 0.009121 | 0.009127 |
| new_delete_resource_test.test | RUN | 0.146417 | 0.588895 | 0.465591 | 0.001528 | 0.001864 | 0.001651 |
| nest_test.test | RUN | 0.418715 | 2.909512 | 1.726910 | 0.001161 | 0.001362 | 0.001284 |
| nest_api_test.test | RUN | 0.739804 | 5.526186 | 3.374817 | 0.002114 | 0.002764 | 0.002308 |
| monotonic_buffer_resource_test.test | RUN | 0.158814 | 1.077010 | 0.454101 | 0.001038 | 0.001376 | 0.001088 |
| memory_resource_test.test | RUN | 0.092306 | 0.302506 | 0.267267 | 0.001023 | 0.001145 | 0.001090 |
| map_test.test | RUN | 3.749959 | 18.004900 | 16.814313 | 0.009528 | 0.009562 | 0.009207 |
| list_test.test | RUN | 1.928456 | 9.275064 | 7.016703 | 0.020698 | 0.020211 | 0.020536 |
| is_constructible_test.test | RUN | 0.052788 | 0.107761 | 0.149134 | 0.000555 | 0.000618 | 0.001250 |
| insert_vs_emplace_test.test | RUN | 0.177966 | 0.724809 | 0.912681 | 0.001136 | 0.001279 | 0.001113 |
| hub_uses_allocator_test.test | RUN | 0.197761 | 0.617959 | 0.633843 | 0.001076 | 0.001295 | 0.001130 |
| hub_stability_test.test | RUN | 0.458174 | 3.009030 | 2.410566 | 0.001319 | 0.001575 | 0.001508 |
| hub_sort_test.test | RUN | 0.287155 | 1.338819 | 1.104951 | 0.542787 | 0.558430 | 0.516687 |
| hub_pocxx_test.test | RUN | 0.273642 | 1.566129 | 0.850997 | 0.001158 | 0.001233 | 0.001200 |
| hub_new_extended_alignment_test.test | RUN | 0.141124 | 0.448689 | 0.436520 | 0.001094 | 0.001307 | 0.001191 |
| hub_exception_safety_test.test | RUN | 0.565091 | 3.832471 | 2.341541 | 0.075642 | 0.073076 | 0.076041 |
| hub_empty_sort_test.test | RUN | 0.157762 | 0.410907 | 0.488645 | 0.001042 | 0.001263 | 0.001010 |
| hub_api_test.test | RUN | 1.947487 | 14.595776 | 7.459302 | 0.003585 | 0.003053 | 0.003015 |
| global_resource_test.test | RUN | 0.083199 | 0.290997 | 0.256358 | 0.001069 | 0.001266 | 0.001310 |
| flat_tree_test.test | RUN | 3.505821 | 23.006154 | 14.866830 | 0.001077 | 0.001151 | 0.001072 |
| flat_set_test.test | RUN | 4.417117 | 28.490841 | 19.130294 | 0.006911 | 0.006246 | 0.006754 |
| flat_set_adaptor_test.test | RUN | 3.311026 | 24.796794 | 14.872299 | 0.007013 | 0.006483 | 0.006790 |
| flat_map_test.test | RUN | 7.127360 | 42.769924 | 30.776982 | 0.007866 | 0.007397 | 0.007042 |
| flat_map_adaptor_test.test | RUN | 4.535282 | 30.846503 | 21.843471 | 0.007276 | 0.006869 | 0.006909 |
| explicit_inst_vector_test.test | RUN | 0.693092 | 4.253754 | 3.353040 | 0.001117 | 0.001153 | 0.001173 |
| explicit_inst_string_test.test | RUN | 0.928167 | 7.756884 | 4.654505 | 0.001067 | 0.001352 | 0.001139 |
| explicit_inst_static_vector_test.test | RUN | 0.085009 | 0.276686 | 0.301204 | 0.001256 | 0.001115 | 0.001277 |
| explicit_inst_stable_vector_test.test | RUN | 0.563243 | 2.738127 | 2.195082 | 0.001085 | 0.001198 | 0.000996 |
| explicit_inst_small_vector_test.test | RUN | 0.457387 | 2.499912 | 1.845302 | 0.001144 | 0.001169 | 0.001063 |
| explicit_inst_slist_test.test | RUN | 0.338239 | 2.215212 | 1.404923 | 0.001027 | 0.001294 | 0.001170 |
| explicit_inst_set_test.test | RUN | 0.471837 | 2.648537 | 1.665690 | 0.001116 | 0.001241 | 0.001078 |
| explicit_inst_map_test.test | RUN | 0.520787 | 2.723249 | 1.825255 | 0.001256 | 0.001192 | 0.001272 |
| explicit_inst_list_test.test | RUN | 0.119170 | 0.620821 | 0.482436 | 0.001069 | 0.001207 | 0.001120 |
| explicit_inst_flat_set_test.test | RUN | 2.924868 | 19.033015 | 11.430178 | 0.000973 | 0.001375 | 0.001011 |
| explicit_inst_flat_map_test.test | RUN | 3.128157 | 19.787209 | 12.648924 | 0.001075 | 0.001109 | 0.001051 |
| explicit_inst_devector_test.test | RUN | 0.373413 | 2.424445 | 1.551135 | 0.001018 | 0.001166 | 0.001053 |
| explicit_inst_deque_test.test | RUN | 0.387872 | 2.685734 | 1.706816 | 0.001064 | 0.001114 | 0.001153 |
| devector_test.test | RUN | 6.150050 | 37.854863 | 27.847094 | 0.004133 | 0.003990 | 0.004772 |
| devector_options_test.test | RUN | 0.231414 | 1.463128 | 0.891565 | 0.001324 | 0.001401 | 0.001437 |
| deque_test.test | RUN | 3.912464 | 20.267714 | 15.726736 | 0.453713 | 0.451172 | 0.546358 |
| deque_options_test.test | RUN | 0.172608 | 0.527296 | 0.583872 | 0.001114 | 0.001332 | 0.001116 |
| copy_move_algo_test.test | RUN | 0.167674 | 0.598606 | 0.555603 | 0.001603 | 0.001312 | 0.001489 |
| common_iterator_test.test | RUN | 0.011676 | 0.029071 | 0.033531 | 0.000415 | 0.000591 | 0.000957 |
| boost_iterator_comp_test.test | RUN | 0.234951 | 0.763111 | 0.824534 | 0.001165 | 0.001306 | 0.001400 |
| allocator_traits_test.test | RUN | 0.131112 | 0.314249 | 0.369989 | 0.001216 | 0.001269 | 0.001182 |
| alloc_full_test.test | RUN | 0.158480 | 0.716737 | 0.542304 | 0.003169 | 0.003265 | 0.003517 |
| alloc_basic_test.test | RUN | 0.131114 | 0.469019 | 0.416156 | 0.001300 | 0.001325 | 0.001356 |
| adaptive_pool_test.test | RUN | 2.151058 | 11.260665 | 8.177250 | 0.010876 | 0.010099 | 0.010964 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 1.008× | 1.009×, 1.007× | 0.999× |
| clang | 1.081× | 1.082×, 1.081× | 0.999× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1364 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/43947487361).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| adaptive_pool_test.test | 2 | 0.010649s | 0.009753s | 0.010746s | byte equality observed |
| alloc_basic_test.test | 10 | 0.001000s | 0.000988s | 0.000984s | byte equality observed |
| alloc_full_test.test | 6 | 0.003012s | 0.003007s | 0.003203s | byte equality observed |
| allocator_traits_test.test | 10 | 0.000901s | 0.000892s | 0.000899s | byte equality observed |
| boost_iterator_comp_test.test | 10 | 0.000918s | 0.000907s | 0.000918s | byte equality observed |
| common_iterator_test.test | 10 | 0.000419s | 0.000419s | 0.000894s | byte equality observed |
| copy_move_algo_test.test | 10 | 0.001362s | 0.001021s | 0.001149s | byte equality observed |
| deque_options_test.test | 10 | 0.000960s | 0.000938s | 0.000956s | byte equality observed |
| deque_test.test | 1 | 0.453756s | 0.450942s | 0.546687s | byte equality observed |
| devector_options_test.test | 10 | 0.001090s | 0.001032s | 0.001021s | byte equality observed |
| devector_test.test | 5 | 0.003538s | 0.003414s | 0.004473s | byte equality observed |
| explicit_inst_deque_test.test | 10 | 0.000903s | 0.000892s | 0.000889s | byte equality observed |
| explicit_inst_devector_test.test | 10 | 0.000864s | 0.000875s | 0.000852s | byte equality observed |
| explicit_inst_flat_map_test.test | 10 | 0.000861s | 0.000869s | 0.000854s | byte equality observed |
| explicit_inst_flat_set_test.test | 10 | 0.000874s | 0.000863s | 0.000862s | byte equality observed |
| explicit_inst_list_test.test | 10 | 0.000860s | 0.000855s | 0.000852s | byte equality observed |
| explicit_inst_map_test.test | 10 | 0.000897s | 0.000876s | 0.000853s | byte equality observed |
| explicit_inst_set_test.test | 10 | 0.000929s | 0.000920s | 0.000914s | byte equality observed |
| explicit_inst_slist_test.test | 10 | 0.000932s | 0.000931s | 0.000925s | byte equality observed |
| explicit_inst_small_vector_test.test | 10 | 0.000928s | 0.000929s | 0.000926s | byte equality observed |
| explicit_inst_stable_vector_test.test | 10 | 0.000933s | 0.000933s | 0.000929s | byte equality observed |
| explicit_inst_static_vector_test.test | 10 | 0.000918s | 0.000913s | 0.000924s | byte equality observed |
| explicit_inst_string_test.test | 10 | 0.000926s | 0.000930s | 0.000932s | byte equality observed |
| explicit_inst_vector_test.test | 10 | 0.000926s | 0.000924s | 0.000924s | byte equality observed |
| flat_map_adaptor_test.test | 3 | 0.007119s | 0.006696s | 0.006781s | byte equality observed |
| flat_map_test.test | 3 | 0.007678s | 0.007144s | 0.006892s | byte equality observed |
| flat_set_adaptor_test.test | 3 | 0.006901s | 0.006259s | 0.006636s | byte equality observed |
| flat_set_test.test | 3 | 0.006808s | 0.006053s | 0.006474s | byte equality observed |
| flat_tree_test.test | 10 | 0.000913s | 0.000921s | 0.000904s | byte equality observed |
| global_resource_test.test | 10 | 0.000962s | 0.000962s | 0.000965s | byte equality observed |
| hub_api_test.test | 6 | 0.003230s | 0.002808s | 0.002742s | byte equality observed |
| hub_empty_sort_test.test | 10 | 0.000936s | 0.000938s | 0.000937s | byte equality observed |
| hub_exception_safety_test.test | 1 | 0.066703s | 0.069050s | 0.068508s | byte equality observed |
| hub_new_extended_alignment_test.test | 10 | 0.000944s | 0.000938s | 0.000941s | byte equality observed |
| hub_pocxx_test.test | 10 | 0.000962s | 0.000961s | 0.000952s | byte equality observed |
| hub_sort_test.test | 1 | 0.522663s | 0.537328s | 0.506978s | byte equality observed |
| hub_stability_test.test | 10 | 0.001196s | 0.001192s | 0.001200s | byte equality observed |
| hub_uses_allocator_test.test | 10 | 0.000928s | 0.000930s | 0.000932s | byte equality observed |
| insert_vs_emplace_test.test | 10 | 0.000948s | 0.000938s | 0.000936s | byte equality observed |
| is_constructible_test.test | 10 | 0.000430s | 0.000427s | 0.000900s | byte equality observed |
| list_test.test | 1 | 0.019212s | 0.019300s | 0.019804s | byte equality observed |
| map_test.test | 2 | 0.009454s | 0.009138s | 0.008994s | byte equality observed |
| memory_resource_test.test | 10 | 0.000938s | 0.000920s | 0.000923s | byte equality observed |
| monotonic_buffer_resource_test.test | 10 | 0.000963s | 0.000963s | 0.000948s | byte equality observed |
| nest_api_test.test | 8 | 0.002054s | 0.002053s | 0.002057s | byte equality observed |
| nest_test.test | 10 | 0.000980s | 0.000982s | 0.000974s | byte equality observed |
| new_delete_resource_test.test | 10 | 0.001444s | 0.001455s | 0.001464s | byte equality observed |
| node_allocator_test.test | 3 | 0.008378s | 0.008299s | 0.008507s | byte equality observed |
| node_handle_test.test | 10 | 0.000933s | 0.000932s | 0.000928s | byte equality observed |
| null_iterators_test.test | 10 | 0.000936s | 0.000934s | 0.000931s | byte equality observed |
| pair_test.test | 10 | 0.000942s | 0.000924s | 0.000933s | byte equality observed |
| pmr_deque_test.test | 10 | 0.000930s | 0.000925s | 0.000928s | byte equality observed |
| pmr_devector_test.test | 10 | 0.000927s | 0.000923s | 0.000926s | byte equality observed |
| pmr_flat_map_test.test | 10 | 0.000922s | 0.000916s | 0.000923s | byte equality observed |
| pmr_flat_set_test.test | 10 | 0.000928s | 0.000914s | 0.000917s | byte equality observed |
| pmr_hub_test.test | 10 | 0.000920s | 0.000920s | 0.000920s | byte equality observed |
| pmr_list_test.test | 10 | 0.000914s | 0.000918s | 0.000900s | byte equality observed |
| pmr_map_test.test | 10 | 0.000922s | 0.000921s | 0.000919s | byte equality observed |
| pmr_nest_test.test | 10 | 0.000917s | 0.000922s | 0.000911s | byte equality observed |
| pmr_set_test.test | 10 | 0.000921s | 0.000915s | 0.000916s | byte equality observed |
| pmr_slist_test.test | 10 | 0.000915s | 0.000920s | 0.000909s | byte equality observed |
| pmr_small_vector_test.test | 10 | 0.000914s | 0.000905s | 0.000903s | byte equality observed |
| pmr_stable_vector_test.test | 10 | 0.000913s | 0.000912s | 0.000920s | byte equality observed |
| pmr_string_test.test | 10 | 0.000428s | 0.000433s | 0.000914s | byte equality observed |
| pmr_vector_test.test | 10 | 0.000430s | 0.000427s | 0.000908s | byte equality observed |
| polymorphic_allocator_test.test | 10 | 0.000934s | 0.000936s | 0.000925s | byte equality observed |
| resource_adaptor_test.test | 10 | 0.000935s | 0.000933s | 0.000930s | byte equality observed |
| scoped_allocator_adaptor_test.test | 10 | 0.000936s | 0.000931s | 0.000935s | byte equality observed |
| scoped_allocator_usage_test.test | 10 | 0.000940s | 0.000922s | 0.000941s | byte equality observed |
| segtor_options_test.test | 10 | 0.000969s | 0.000958s | 0.000960s | byte equality observed |
| segtor_test.test | 1 | 0.341518s | 0.348811s | 0.390685s | byte equality observed |
| set_test.test | 2 | 0.013260s | 0.011737s | 0.012838s | byte equality observed |
| slist_test.test | 1 | 0.020093s | 0.019830s | 0.019880s | byte equality observed |
| small_vector_options_test.test | 10 | 0.001025s | 0.000985s | 0.001003s | byte equality observed |
| small_vector_test.test | 6 | 0.002121s | 0.001979s | 0.003429s | byte equality observed |
| stable_vector_test.test | 1 | 0.034477s | 0.034857s | 0.035497s | byte equality observed |
| static_vector_options_test.test | 10 | 0.000989s | 0.000949s | 0.000974s | byte equality observed |
| static_vector_test.test | 10 | 0.001332s | 0.001228s | 0.001288s | byte equality observed |
| string_options_test.test | 10 | 0.000979s | 0.000990s | 0.000977s | byte equality observed |
| string_test.test | 2 | 0.011436s | 0.011126s | 0.011596s | byte equality observed |
| string_view_compat_test.test | 10 | 0.000936s | 0.000949s | 0.000915s | byte equality observed |
| synchronized_pool_resource_test.test | 10 | 0.000996s | 0.000989s | 0.000975s | byte equality observed |
| throw_exception_test.test | 10 | 0.000934s | 0.000926s | 0.000921s | byte equality observed |
| tree_test.test | 10 | 0.000939s | 0.000924s | 0.000914s | byte equality observed |
| unsynchronized_pool_resource_test.test | 10 | 0.001002s | 0.000990s | 0.000969s | byte equality observed |
| uses_allocator_construction_test.test | 10 | 0.000940s | 0.000934s | 0.000925s | byte equality observed |
| uses_allocator_test.test | 10 | 0.000441s | 0.000448s | 0.000915s | byte equality observed |
| vector_options_test.test | 10 | 0.001085s | 0.001080s | 0.001051s | byte equality observed |
| vector_test.test | 4 | 0.003739s | 0.003709s | 0.004939s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/43947487361).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
