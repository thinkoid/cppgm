# libs/container/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| vector_test.test | RUN | 6.035117 | 30.211016 | 24.413936 | 0.004563 | 0.004565 | 0.005709 |
| vector_options_test.test | RUN | 0.263943 | 1.287932 | 0.994313 | 0.001395 | 0.001538 | 0.001339 |
| uses_allocator_test.test | RUN | 0.044598 | 0.100729 | 0.127171 | 0.000463 | 0.000472 | 0.001180 |
| uses_allocator_construction_test.test | RUN | 0.135143 | 0.387171 | 0.421209 | 0.001154 | 0.001377 | 0.001096 |
| unsynchronized_pool_resource_test.test | RUN | 0.194830 | 1.235375 | 0.570559 | 0.001395 | 0.001519 | 0.001273 |
| tree_test.test | RUN | 0.740323 | 4.564238 | 3.455145 | 0.001079 | 0.001398 | 0.001145 |
| throw_exception_test.test | RUN | 0.096645 | 0.247793 | 0.304550 | 0.001096 | 0.001271 | 0.001229 |
| synchronized_pool_resource_test.test | RUN | 0.159562 | 1.210404 | 0.580444 | 0.001327 | 0.001432 | 0.001263 |
| string_view_compat_test.test | RUN | 0.313285 | 2.440892 | 1.142057 | 0.001149 | 0.001467 | 0.001184 |
| string_test.test | RUN | 1.443333 | 9.530126 | 6.349318 | 0.014026 | 0.012681 | 0.013316 |
| string_options_test.test | RUN | 0.247477 | 1.971147 | 0.914753 | 0.001221 | 0.001495 | 0.001218 |
| static_vector_test.test | RUN | 1.480240 | 7.865830 | 6.367479 | 0.001852 | 0.001811 | 0.001744 |
| static_vector_options_test.test | RUN | 0.170551 | 0.504337 | 0.547502 | 0.001268 | 0.001306 | 0.001358 |
| stable_vector_test.test | RUN | 3.457770 | 16.789923 | 12.432119 | 0.031329 | 0.032510 | 0.033277 |
| small_vector_test.test | RUN | 2.263085 | 11.585597 | 8.804774 | 0.002822 | 0.002693 | 0.004537 |
| small_vector_options_test.test | RUN | 0.308268 | 1.326124 | 1.155391 | 0.001335 | 0.001376 | 0.001406 |
| slist_test.test | RUN | 2.080697 | 10.493702 | 7.840818 | 0.022646 | 0.021605 | 0.022670 |
| set_test.test | RUN | 3.194982 | 19.691337 | 14.254043 | 0.014337 | 0.013136 | 0.013699 |
| segtor_test.test | RUN | 4.084272 | 21.282323 | 15.899683 | 0.754169 | 0.758431 | 0.719635 |
| segtor_options_test.test | RUN | 0.201147 | 0.581043 | 0.686023 | 0.001310 | 0.001381 | 0.001277 |
| scoped_allocator_usage_test.test | RUN | 0.722093 | 3.089689 | 2.634787 | 0.001353 | 0.001243 | 0.001279 |
| scoped_allocator_adaptor_test.test | RUN | 0.311779 | 0.835312 | 1.143345 | 0.001148 | 0.001374 | 0.001055 |
| resource_adaptor_test.test | RUN | 0.158373 | 0.489633 | 0.509781 | 0.001139 | 0.001430 | 0.001402 |
| polymorphic_allocator_test.test | RUN | 0.130668 | 0.400646 | 0.415425 | 0.001125 | 0.001271 | 0.001035 |
| pmr_vector_test.test | RUN | 0.073443 | 0.149631 | 0.209135 | 0.000502 | 0.000540 | 0.001072 |
| pmr_string_test.test | RUN | 0.147378 | 0.316538 | 0.398647 | 0.000482 | 0.000583 | 0.001300 |
| pmr_stable_vector_test.test | RUN | 0.173454 | 0.525638 | 0.601590 | 0.000950 | 0.001250 | 0.001067 |
| pmr_small_vector_test.test | RUN | 0.090478 | 0.204966 | 0.282916 | 0.001286 | 0.001185 | 0.001206 |
| pmr_slist_test.test | RUN | 0.135140 | 0.718012 | 0.601573 | 0.001303 | 0.001233 | 0.001273 |
| pmr_set_test.test | RUN | 0.149730 | 0.346440 | 0.441129 | 0.001150 | 0.001199 | 0.000897 |
| pmr_nest_test.test | RUN | 0.111273 | 0.240723 | 0.294581 | 0.001032 | 0.001260 | 0.001153 |
| pmr_map_test.test | RUN | 0.153666 | 0.348953 | 0.440043 | 0.001266 | 0.001201 | 0.001131 |
| pmr_list_test.test | RUN | 0.098809 | 0.222181 | 0.280277 | 0.001157 | 0.001248 | 0.001280 |
| pmr_hub_test.test | RUN | 0.140465 | 0.309920 | 0.359009 | 0.001121 | 0.001316 | 0.001300 |
| pmr_flat_set_test.test | RUN | 0.108372 | 0.241339 | 0.316826 | 0.001109 | 0.001390 | 0.001112 |
| pmr_flat_map_test.test | RUN | 0.131161 | 0.278843 | 0.366461 | 0.001248 | 0.001301 | 0.001308 |
| pmr_devector_test.test | RUN | 0.087117 | 0.245672 | 0.278957 | 0.001143 | 0.001266 | 0.001186 |
| pmr_deque_test.test | RUN | 0.085870 | 0.199498 | 0.278815 | 0.001154 | 0.001290 | 0.001258 |
| pair_test.test | RUN | 0.213961 | 0.486069 | 0.610773 | 0.001248 | 0.001486 | 0.001248 |
| null_iterators_test.test | RUN | 0.342631 | 0.961006 | 1.033517 | 0.001200 | 0.001273 | 0.001162 |
| node_handle_test.test | RUN | 0.145244 | 1.226877 | 0.427366 | 0.001239 | 0.001420 | 0.001307 |
| node_allocator_test.test | RUN | 2.369223 | 13.118855 | 9.632886 | 0.009358 | 0.009290 | 0.009427 |
| new_delete_resource_test.test | RUN | 0.181722 | 0.737862 | 0.585241 | 0.001951 | 0.002004 | 0.001824 |
| nest_test.test | RUN | 0.512528 | 3.514890 | 2.093514 | 0.001256 | 0.001520 | 0.001151 |
| nest_api_test.test | RUN | 0.851732 | 6.609898 | 4.078406 | 0.002461 | 0.002596 | 0.002232 |
| monotonic_buffer_resource_test.test | RUN | 0.183027 | 1.344987 | 0.596326 | 0.001292 | 0.001427 | 0.001249 |
| memory_resource_test.test | RUN | 0.109463 | 0.367976 | 0.345484 | 0.001330 | 0.001397 | 0.001204 |
| map_test.test | RUN | 4.354129 | 22.123395 | 20.188867 | 0.010731 | 0.010360 | 0.009829 |
| list_test.test | RUN | 2.218275 | 11.343408 | 8.509370 | 0.022604 | 0.022256 | 0.022079 |
| is_constructible_test.test | RUN | 0.067350 | 0.131972 | 0.181716 | 0.000532 | 0.000565 | 0.001193 |
| insert_vs_emplace_test.test | RUN | 0.223201 | 0.867615 | 1.144773 | 0.001339 | 0.001274 | 0.001336 |
| hub_uses_allocator_test.test | RUN | 0.240648 | 0.733690 | 0.744677 | 0.001264 | 0.001331 | 0.001292 |
| hub_stability_test.test | RUN | 0.542607 | 3.567358 | 2.857437 | 0.001628 | 0.001672 | 0.001488 |
| hub_sort_test.test | RUN | 0.340784 | 1.581768 | 1.375349 | 0.535709 | 0.547628 | 0.506266 |
| hub_pocxx_test.test | RUN | 0.311277 | 1.849749 | 0.989481 | 0.001253 | 0.001569 | 0.001173 |
| hub_new_extended_alignment_test.test | RUN | 0.166030 | 0.555128 | 0.524674 | 0.001132 | 0.001413 | 0.001290 |
| hub_exception_safety_test.test | RUN | 0.649524 | 4.506240 | 2.912859 | 0.060341 | 0.072660 | 0.059409 |
| hub_empty_sort_test.test | RUN | 0.187536 | 0.503235 | 0.604590 | 0.001207 | 0.001353 | 0.001121 |
| hub_api_test.test | RUN | 2.178591 | 17.960805 | 9.259939 | 0.003519 | 0.003534 | 0.003151 |
| global_resource_test.test | RUN | 0.098555 | 0.342992 | 0.307375 | 0.001198 | 0.001451 | 0.001272 |
| flat_tree_test.test | RUN | 4.057676 | 28.063427 | 17.542057 | 0.001181 | 0.001389 | 0.001161 |
| flat_set_test.test | RUN | 5.083125 | 35.283760 | 23.003183 | 0.007430 | 0.006183 | 0.007136 |
| flat_set_adaptor_test.test | RUN | 3.794900 | 31.078577 | 17.875361 | 0.007460 | 0.007182 | 0.007143 |
| flat_map_test.test | RUN | 8.218223 | 53.131741 | 37.751881 | 0.008692 | 0.008032 | 0.007660 |
| flat_map_adaptor_test.test | RUN | 5.206204 | 38.560901 | 26.419855 | 0.007862 | 0.007744 | 0.007441 |
| explicit_inst_vector_test.test | RUN | 0.791288 | 5.215078 | 4.008237 | 0.001165 | 0.001518 | 0.001154 |
| explicit_inst_string_test.test | RUN | 1.072777 | 9.209126 | 5.556691 | 0.001134 | 0.001354 | 0.001090 |
| explicit_inst_static_vector_test.test | RUN | 0.092439 | 0.330840 | 0.380535 | 0.001109 | 0.001378 | 0.001249 |
| explicit_inst_stable_vector_test.test | RUN | 0.634898 | 3.310631 | 2.596174 | 0.001163 | 0.001436 | 0.001320 |
| explicit_inst_small_vector_test.test | RUN | 0.520046 | 3.006364 | 2.318636 | 0.001146 | 0.001435 | 0.001228 |
| explicit_inst_slist_test.test | RUN | 0.401111 | 2.717945 | 1.785237 | 0.001231 | 0.001519 | 0.001324 |
| explicit_inst_set_test.test | RUN | 0.560434 | 3.106812 | 2.104014 | 0.001218 | 0.001365 | 0.001365 |
| explicit_inst_map_test.test | RUN | 0.609440 | 3.276399 | 2.339029 | 0.001396 | 0.001419 | 0.001300 |
| explicit_inst_list_test.test | RUN | 0.136951 | 0.735500 | 0.591082 | 0.001239 | 0.001536 | 0.001147 |
| explicit_inst_flat_set_test.test | RUN | 3.378378 | 23.756268 | 13.620834 | 0.001191 | 0.001506 | 0.001314 |
| explicit_inst_flat_map_test.test | RUN | 3.636776 | 24.767308 | 15.305635 | 0.001163 | 0.001431 | 0.001326 |
| explicit_inst_devector_test.test | RUN | 0.436440 | 2.920077 | 1.902440 | 0.001267 | 0.001333 | 0.001111 |
| explicit_inst_deque_test.test | RUN | 0.444884 | 3.151811 | 2.054786 | 0.001217 | 0.001410 | 0.001310 |
| devector_test.test | RUN | 6.496816 | 39.464852 | 27.759408 | 0.003244 | 0.003200 | 0.003871 |
| devector_options_test.test | RUN | 0.276089 | 1.746699 | 1.101075 | 0.001498 | 0.001508 | 0.001344 |
| deque_test.test | RUN | 4.380845 | 20.258828 | 16.991423 | 0.364687 | 0.364543 | 0.439893 |
| deque_options_test.test | RUN | 0.199534 | 0.629547 | 0.729853 | 0.001336 | 0.001405 | 0.001247 |
| copy_move_algo_test.test | RUN | 0.196713 | 0.763428 | 0.665660 | 0.001577 | 0.001632 | 0.001452 |
| common_iterator_test.test | RUN | 0.013018 | 0.038122 | 0.039644 | 0.000454 | 0.000631 | 0.001121 |
| boost_iterator_comp_test.test | RUN | 0.279315 | 0.900938 | 1.013418 | 0.001221 | 0.001277 | 0.001228 |
| allocator_traits_test.test | RUN | 0.161435 | 0.390100 | 0.469872 | 0.001431 | 0.001624 | 0.001218 |
| alloc_full_test.test | RUN | 0.186715 | 0.826613 | 0.707335 | 0.004021 | 0.004133 | 0.004087 |
| alloc_basic_test.test | RUN | 0.153985 | 0.581292 | 0.514159 | 0.001073 | 0.001590 | 0.001374 |
| adaptive_pool_test.test | RUN | 1.759819 | 13.038757 | 6.665647 | 0.008749 | 0.008292 | 0.008773 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 1.015× | 1.015×, 1.014× | 1.006× |
| clang | 1.069× | 1.071×, 1.067× | 1.008× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1362 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/43822097733).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| adaptive_pool_test.test | 3 | 0.008929s | 0.008149s | 0.009215s | byte equality observed |
| alloc_basic_test.test | 10 | 0.000825s | 0.000815s | 0.000791s | byte equality observed |
| alloc_full_test.test | 7 | 0.002710s | 0.002753s | 0.002834s | byte equality observed |
| allocator_traits_test.test | 10 | 0.000778s | 0.000778s | 0.000762s | byte equality observed |
| boost_iterator_comp_test.test | 10 | 0.000795s | 0.000795s | 0.000790s | byte equality observed |
| common_iterator_test.test | 10 | 0.000370s | 0.000376s | 0.000783s | byte equality observed |
| copy_move_algo_test.test | 10 | 0.001189s | 0.000916s | 0.001004s | byte equality observed |
| deque_options_test.test | 10 | 0.000855s | 0.000844s | 0.000842s | byte equality observed |
| deque_test.test | 1 | 0.372173s | 0.374413s | 0.445569s | byte equality observed |
| devector_options_test.test | 10 | 0.000899s | 0.000861s | 0.000846s | byte equality observed |
| devector_test.test | 5 | 0.002887s | 0.002808s | 0.003634s | byte equality observed |
| explicit_inst_deque_test.test | 10 | 0.000729s | 0.000738s | 0.000715s | byte equality observed |
| explicit_inst_devector_test.test | 10 | 0.000721s | 0.000709s | 0.000706s | byte equality observed |
| explicit_inst_flat_map_test.test | 10 | 0.000738s | 0.000733s | 0.000727s | byte equality observed |
| explicit_inst_flat_set_test.test | 10 | 0.000731s | 0.000721s | 0.000730s | byte equality observed |
| explicit_inst_list_test.test | 10 | 0.000717s | 0.000709s | 0.000719s | byte equality observed |
| explicit_inst_map_test.test | 10 | 0.000731s | 0.000714s | 0.000725s | byte equality observed |
| explicit_inst_set_test.test | 10 | 0.000743s | 0.000729s | 0.000719s | byte equality observed |
| explicit_inst_slist_test.test | 10 | 0.000736s | 0.000716s | 0.000717s | byte equality observed |
| explicit_inst_small_vector_test.test | 10 | 0.000729s | 0.000717s | 0.000715s | byte equality observed |
| explicit_inst_stable_vector_test.test | 10 | 0.000741s | 0.000714s | 0.000738s | byte equality observed |
| explicit_inst_static_vector_test.test | 10 | 0.000744s | 0.000694s | 0.000726s | byte equality observed |
| explicit_inst_string_test.test | 10 | 0.000733s | 0.000717s | 0.000726s | byte equality observed |
| explicit_inst_vector_test.test | 10 | 0.000737s | 0.000700s | 0.000731s | byte equality observed |
| flat_map_adaptor_test.test | 3 | 0.005727s | 0.005399s | 0.005437s | byte equality observed |
| flat_map_test.test | 4 | 0.006196s | 0.005745s | 0.005529s | byte equality observed |
| flat_set_adaptor_test.test | 4 | 0.005529s | 0.005045s | 0.005347s | byte equality observed |
| flat_set_test.test | 4 | 0.005469s | 0.004859s | 0.005212s | byte equality observed |
| flat_tree_test.test | 10 | 0.000733s | 0.000724s | 0.000733s | byte equality observed |
| global_resource_test.test | 10 | 0.000765s | 0.000755s | 0.000762s | byte equality observed |
| hub_api_test.test | 8 | 0.002557s | 0.002246s | 0.002172s | byte equality observed |
| hub_empty_sort_test.test | 10 | 0.000746s | 0.000727s | 0.000723s | byte equality observed |
| hub_exception_safety_test.test | 1 | 0.051623s | 0.057197s | 0.052228s | byte equality observed |
| hub_new_extended_alignment_test.test | 10 | 0.000778s | 0.000782s | 0.000773s | byte equality observed |
| hub_pocxx_test.test | 10 | 0.000772s | 0.000779s | 0.000759s | byte equality observed |
| hub_sort_test.test | 1 | 0.429712s | 0.443449s | 0.415803s | byte equality observed |
| hub_stability_test.test | 10 | 0.000989s | 0.000998s | 0.000991s | byte equality observed |
| hub_uses_allocator_test.test | 10 | 0.000758s | 0.000755s | 0.000764s | byte equality observed |
| insert_vs_emplace_test.test | 10 | 0.000774s | 0.000782s | 0.000772s | byte equality observed |
| is_constructible_test.test | 10 | 0.000353s | 0.000352s | 0.000739s | byte equality observed |
| list_test.test | 2 | 0.015419s | 0.015575s | 0.015941s | byte equality observed |
| map_test.test | 2 | 0.007614s | 0.007397s | 0.007281s | byte equality observed |
| memory_resource_test.test | 10 | 0.000767s | 0.000766s | 0.000777s | byte equality observed |
| monotonic_buffer_resource_test.test | 10 | 0.000775s | 0.000776s | 0.000777s | byte equality observed |
| nest_api_test.test | 10 | 0.001648s | 0.001664s | 0.001670s | byte equality observed |
| nest_test.test | 10 | 0.000794s | 0.000795s | 0.000790s | byte equality observed |
| new_delete_resource_test.test | 10 | 0.001143s | 0.001142s | 0.001135s | byte equality observed |
| node_allocator_test.test | 3 | 0.006678s | 0.006651s | 0.006658s | byte equality observed |
| node_handle_test.test | 10 | 0.000782s | 0.000786s | 0.000775s | byte equality observed |
| null_iterators_test.test | 10 | 0.000766s | 0.000760s | 0.000761s | byte equality observed |
| pair_test.test | 10 | 0.000758s | 0.000747s | 0.000754s | byte equality observed |
| pmr_deque_test.test | 10 | 0.000742s | 0.000747s | 0.000755s | byte equality observed |
| pmr_devector_test.test | 10 | 0.000739s | 0.000745s | 0.000751s | byte equality observed |
| pmr_flat_map_test.test | 10 | 0.000732s | 0.000754s | 0.000752s | byte equality observed |
| pmr_flat_set_test.test | 10 | 0.000728s | 0.000735s | 0.000746s | byte equality observed |
| pmr_hub_test.test | 10 | 0.000720s | 0.000727s | 0.000758s | byte equality observed |
| pmr_list_test.test | 10 | 0.000720s | 0.000731s | 0.000747s | byte equality observed |
| pmr_map_test.test | 10 | 0.000732s | 0.000723s | 0.000748s | byte equality observed |
| pmr_nest_test.test | 10 | 0.000745s | 0.000716s | 0.000756s | byte equality observed |
| pmr_set_test.test | 10 | 0.000745s | 0.000752s | 0.000755s | byte equality observed |
| pmr_slist_test.test | 10 | 0.000746s | 0.000729s | 0.000743s | byte equality observed |
| pmr_small_vector_test.test | 10 | 0.000742s | 0.000735s | 0.000757s | byte equality observed |
| pmr_stable_vector_test.test | 10 | 0.000753s | 0.000742s | 0.000786s | byte equality observed |
| pmr_string_test.test | 10 | 0.000351s | 0.000353s | 0.000825s | byte equality observed |
| pmr_vector_test.test | 10 | 0.000347s | 0.000356s | 0.000789s | byte equality observed |
| polymorphic_allocator_test.test | 10 | 0.000773s | 0.000776s | 0.000816s | byte equality observed |
| resource_adaptor_test.test | 10 | 0.000764s | 0.000768s | 0.000823s | byte equality observed |
| scoped_allocator_adaptor_test.test | 10 | 0.000756s | 0.000754s | 0.000828s | byte equality observed |
| scoped_allocator_usage_test.test | 10 | 0.000769s | 0.000763s | 0.000820s | byte equality observed |
| segtor_options_test.test | 10 | 0.000809s | 0.000807s | 0.000829s | byte equality observed |
| segtor_test.test | 1 | 0.457426s | 0.465256s | 0.496595s | byte equality observed |
| set_test.test | 2 | 0.010836s | 0.009537s | 0.010384s | byte equality observed |
| slist_test.test | 2 | 0.016342s | 0.016075s | 0.016221s | byte equality observed |
| small_vector_options_test.test | 10 | 0.000854s | 0.000829s | 0.000853s | byte equality observed |
| small_vector_test.test | 7 | 0.001702s | 0.001597s | 0.002769s | byte equality observed |
| stable_vector_test.test | 1 | 0.027813s | 0.027947s | 0.028555s | byte equality observed |
| static_vector_options_test.test | 10 | 0.000803s | 0.000780s | 0.000833s | byte equality observed |
| static_vector_test.test | 10 | 0.001071s | 0.000987s | 0.001035s | byte equality observed |
| string_options_test.test | 10 | 0.000793s | 0.000792s | 0.000791s | byte equality observed |
| string_test.test | 3 | 0.009237s | 0.008993s | 0.009326s | byte equality observed |
| string_view_compat_test.test | 10 | 0.000763s | 0.000742s | 0.000766s | byte equality observed |
| synchronized_pool_resource_test.test | 10 | 0.000778s | 0.000777s | 0.000786s | byte equality observed |
| throw_exception_test.test | 10 | 0.000727s | 0.000731s | 0.000734s | byte equality observed |
| tree_test.test | 10 | 0.000732s | 0.000737s | 0.000734s | byte equality observed |
| unsynchronized_pool_resource_test.test | 10 | 0.000782s | 0.000778s | 0.000776s | byte equality observed |
| uses_allocator_construction_test.test | 10 | 0.000736s | 0.000727s | 0.000730s | byte equality observed |
| uses_allocator_test.test | 10 | 0.000346s | 0.000347s | 0.000735s | byte equality observed |
| vector_options_test.test | 10 | 0.000863s | 0.000842s | 0.000852s | byte equality observed |
| vector_test.test | 5 | 0.003011s | 0.002981s | 0.003957s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/43822097733).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
