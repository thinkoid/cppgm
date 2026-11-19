# libs/container/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| vector_test.test | RUN | 5.932254 | 30.482219 | 25.046851 | 0.004686 | 0.004516 | 0.006026 |
| vector_options_test.test | RUN | 0.269101 | 1.291769 | 0.986737 | 0.001358 | 0.001485 | 0.001520 |
| uses_allocator_test.test | RUN | 0.043788 | 0.101101 | 0.126927 | 0.000511 | 0.000614 | 0.001310 |
| uses_allocator_construction_test.test | RUN | 0.134348 | 0.387941 | 0.445936 | 0.001194 | 0.001419 | 0.001447 |
| unsynchronized_pool_resource_test.test | RUN | 0.180302 | 1.221802 | 0.598930 | 0.001452 | 0.001379 | 0.001543 |
| tree_test.test | RUN | 0.837042 | 4.484618 | 3.417759 | 0.001306 | 0.001533 | 0.001365 |
| throw_exception_test.test | RUN | 0.096903 | 0.235450 | 0.292139 | 0.001406 | 0.001369 | 0.001348 |
| synchronized_pool_resource_test.test | RUN | 0.180625 | 1.214760 | 0.583447 | 0.001459 | 0.001481 | 0.001415 |
| string_view_compat_test.test | RUN | 0.302825 | 2.476515 | 1.134682 | 0.001449 | 0.001462 | 0.001544 |
| string_test.test | RUN | 1.442854 | 9.500000 | 6.491599 | 0.014257 | 0.012818 | 0.013300 |
| string_options_test.test | RUN | 0.248550 | 1.968446 | 1.005050 | 0.001299 | 0.001467 | 0.001557 |
| static_vector_test.test | RUN | 1.468191 | 7.925160 | 6.536691 | 0.001745 | 0.001779 | 0.001839 |
| static_vector_options_test.test | RUN | 0.171898 | 0.484427 | 0.543320 | 0.001441 | 0.001467 | 0.001559 |
| stable_vector_test.test | RUN | 3.396559 | 16.628281 | 12.941692 | 0.031378 | 0.032679 | 0.033420 |
| small_vector_test.test | RUN | 2.216529 | 11.411248 | 9.252805 | 0.002685 | 0.002512 | 0.004564 |
| small_vector_options_test.test | RUN | 0.307678 | 1.320658 | 1.160166 | 0.001722 | 0.001576 | 0.001355 |
| slist_test.test | RUN | 2.066181 | 10.334450 | 8.122133 | 0.023553 | 0.022871 | 0.022574 |
| set_test.test | RUN | 3.117439 | 20.009584 | 14.925738 | 0.013893 | 0.013148 | 0.013719 |
| segtor_test.test | RUN | 3.995101 | 21.515241 | 16.503949 | 0.743289 | 0.735898 | 0.713099 |
| segtor_options_test.test | RUN | 0.193278 | 0.580651 | 0.703946 | 0.001234 | 0.001598 | 0.001428 |
| scoped_allocator_usage_test.test | RUN | 0.724033 | 3.177773 | 2.705509 | 0.001240 | 0.001369 | 0.001182 |
| scoped_allocator_adaptor_test.test | RUN | 0.310197 | 0.881349 | 1.168957 | 0.001298 | 0.001522 | 0.001269 |
| resource_adaptor_test.test | RUN | 0.155382 | 0.503351 | 0.515894 | 0.001294 | 0.001398 | 0.001297 |
| polymorphic_allocator_test.test | RUN | 0.128609 | 0.400966 | 0.439816 | 0.001233 | 0.001336 | 0.001204 |
| pmr_vector_test.test | RUN | 0.074156 | 0.149229 | 0.227186 | 0.000606 | 0.000544 | 0.001251 |
| pmr_string_test.test | RUN | 0.142596 | 0.315042 | 0.433989 | 0.000491 | 0.000680 | 0.001266 |
| pmr_stable_vector_test.test | RUN | 0.172337 | 0.533914 | 0.612314 | 0.001147 | 0.001259 | 0.001376 |
| pmr_small_vector_test.test | RUN | 0.086153 | 0.205886 | 0.280957 | 0.001279 | 0.001248 | 0.001363 |
| pmr_slist_test.test | RUN | 0.132970 | 0.697831 | 0.615923 | 0.001168 | 0.001249 | 0.001176 |
| pmr_set_test.test | RUN | 0.138963 | 0.353175 | 0.439332 | 0.001209 | 0.001527 | 0.001461 |
| pmr_nest_test.test | RUN | 0.107985 | 0.244187 | 0.272433 | 0.001155 | 0.001553 | 0.001222 |
| pmr_map_test.test | RUN | 0.147419 | 0.365301 | 0.435532 | 0.001186 | 0.001206 | 0.001370 |
| pmr_list_test.test | RUN | 0.093777 | 0.226373 | 0.285255 | 0.001217 | 0.001505 | 0.001383 |
| pmr_hub_test.test | RUN | 0.133804 | 0.315943 | 0.384732 | 0.001137 | 0.001357 | 0.001249 |
| pmr_flat_set_test.test | RUN | 0.103193 | 0.236849 | 0.341120 | 0.001266 | 0.001324 | 0.001169 |
| pmr_flat_map_test.test | RUN | 0.122861 | 0.281889 | 0.388546 | 0.001178 | 0.001479 | 0.001278 |
| pmr_devector_test.test | RUN | 0.086605 | 0.245349 | 0.271888 | 0.001167 | 0.001329 | 0.001238 |
| pmr_deque_test.test | RUN | 0.082219 | 0.204892 | 0.281058 | 0.001334 | 0.001490 | 0.001282 |
| pair_test.test | RUN | 0.210691 | 0.488235 | 0.593307 | 0.001408 | 0.001548 | 0.001214 |
| null_iterators_test.test | RUN | 0.337324 | 0.959962 | 1.044079 | 0.001274 | 0.001536 | 0.001176 |
| node_handle_test.test | RUN | 0.144603 | 1.231227 | 0.409028 | 0.001313 | 0.001504 | 0.001332 |
| node_allocator_test.test | RUN | 2.317726 | 13.067906 | 10.102322 | 0.009333 | 0.009971 | 0.009207 |
| new_delete_resource_test.test | RUN | 0.175017 | 0.741585 | 0.569984 | 0.001703 | 0.002316 | 0.001747 |
| nest_test.test | RUN | 0.490607 | 3.445250 | 2.067099 | 0.001309 | 0.001492 | 0.001244 |
| nest_api_test.test | RUN | 0.836317 | 6.727057 | 4.206587 | 0.002281 | 0.002583 | 0.002457 |
| monotonic_buffer_resource_test.test | RUN | 0.175339 | 1.361620 | 0.540621 | 0.001320 | 0.001444 | 0.001199 |
| memory_resource_test.test | RUN | 0.102442 | 0.358641 | 0.265476 | 0.001298 | 0.001302 | 0.001412 |
| map_test.test | RUN | 4.277786 | 22.079571 | 20.871414 | 0.010649 | 0.010496 | 0.010066 |
| list_test.test | RUN | 2.174480 | 11.373233 | 8.627650 | 0.021923 | 0.022560 | 0.022895 |
| is_constructible_test.test | RUN | 0.061751 | 0.130349 | 0.194472 | 0.000504 | 0.000653 | 0.001243 |
| insert_vs_emplace_test.test | RUN | 0.210655 | 0.881348 | 1.138192 | 0.001314 | 0.001568 | 0.001262 |
| hub_uses_allocator_test.test | RUN | 0.230616 | 0.742625 | 0.793321 | 0.001249 | 0.001448 | 0.001419 |
| hub_stability_test.test | RUN | 0.537836 | 3.585734 | 2.933058 | 0.001540 | 0.001795 | 0.001535 |
| hub_sort_test.test | RUN | 0.335610 | 1.585559 | 1.430452 | 0.534533 | 0.550507 | 0.507285 |
| hub_pocxx_test.test | RUN | 0.306768 | 1.833195 | 1.030029 | 0.001275 | 0.001437 | 0.001410 |
| hub_new_extended_alignment_test.test | RUN | 0.160579 | 0.559185 | 0.544653 | 0.001323 | 0.001559 | 0.001316 |
| hub_exception_safety_test.test | RUN | 0.641795 | 4.556193 | 2.829437 | 0.063549 | 0.075532 | 0.070437 |
| hub_empty_sort_test.test | RUN | 0.182697 | 0.504154 | 0.632079 | 0.001315 | 0.001392 | 0.001389 |
| hub_api_test.test | RUN | 2.174447 | 18.035191 | 9.562854 | 0.003721 | 0.003441 | 0.003354 |
| global_resource_test.test | RUN | 0.096887 | 0.340026 | 0.323255 | 0.001379 | 0.001425 | 0.001255 |
| flat_tree_test.test | RUN | 4.044721 | 28.187958 | 18.285459 | 0.001228 | 0.001561 | 0.001433 |
| flat_set_test.test | RUN | 5.023309 | 35.331379 | 23.409458 | 0.007341 | 0.006791 | 0.007195 |
| flat_set_adaptor_test.test | RUN | 3.752477 | 31.278034 | 18.502997 | 0.007524 | 0.006900 | 0.007298 |
| flat_map_test.test | RUN | 8.113305 | 52.169185 | 38.232816 | 0.008757 | 0.008003 | 0.007704 |
| flat_map_adaptor_test.test | RUN | 5.117000 | 37.769287 | 27.207075 | 0.007885 | 0.007598 | 0.007787 |
| explicit_inst_vector_test.test | RUN | 0.791419 | 5.164639 | 4.004847 | 0.001203 | 0.001260 | 0.001460 |
| explicit_inst_string_test.test | RUN | 1.058145 | 9.023907 | 5.568176 | 0.001157 | 0.001218 | 0.001181 |
| explicit_inst_static_vector_test.test | RUN | 0.093876 | 0.326549 | 0.356325 | 0.001235 | 0.001222 | 0.001170 |
| explicit_inst_stable_vector_test.test | RUN | 0.621568 | 3.192630 | 2.483065 | 0.001553 | 0.001220 | 0.001281 |
| explicit_inst_small_vector_test.test | RUN | 0.517506 | 2.909358 | 2.351416 | 0.001292 | 0.001217 | 0.001262 |
| explicit_inst_slist_test.test | RUN | 0.400761 | 2.619997 | 1.839489 | 0.001175 | 0.001247 | 0.001336 |
| explicit_inst_set_test.test | RUN | 0.556032 | 3.002110 | 2.089416 | 0.001265 | 0.001393 | 0.001213 |
| explicit_inst_map_test.test | RUN | 0.610403 | 3.182819 | 2.333574 | 0.001268 | 0.001178 | 0.001235 |
| explicit_inst_list_test.test | RUN | 0.135247 | 0.718023 | 0.577985 | 0.001293 | 0.001139 | 0.001155 |
| explicit_inst_flat_set_test.test | RUN | 3.293506 | 22.876150 | 13.911347 | 0.001236 | 0.001382 | 0.001210 |
| explicit_inst_flat_map_test.test | RUN | 3.580711 | 23.873136 | 15.322752 | 0.001144 | 0.001389 | 0.001351 |
| explicit_inst_devector_test.test | RUN | 0.432957 | 2.846910 | 1.943466 | 0.001168 | 0.001230 | 0.001162 |
| explicit_inst_deque_test.test | RUN | 0.440720 | 3.078500 | 2.063412 | 0.001139 | 0.001442 | 0.001357 |
| devector_test.test | RUN | 6.289398 | 38.147851 | 28.572665 | 0.003182 | 0.002968 | 0.003878 |
| devector_options_test.test | RUN | 0.272782 | 1.701953 | 1.058780 | 0.001523 | 0.001445 | 0.001432 |
| deque_test.test | RUN | 4.370739 | 19.355643 | 14.732113 | 0.362784 | 0.361051 | 0.436909 |
| deque_options_test.test | RUN | 0.201565 | 0.605935 | 0.765333 | 0.001274 | 0.001218 | 0.001360 |
| copy_move_algo_test.test | RUN | 0.188543 | 0.727499 | 0.701797 | 0.001634 | 0.001336 | 0.001470 |
| common_iterator_test.test | RUN | 0.012985 | 0.035833 | 0.035452 | 0.000489 | 0.000514 | 0.001149 |
| boost_iterator_comp_test.test | RUN | 0.274270 | 0.877078 | 1.021958 | 0.001278 | 0.001249 | 0.001320 |
| allocator_traits_test.test | RUN | 0.156789 | 0.354998 | 0.445561 | 0.001278 | 0.001234 | 0.001263 |
| alloc_full_test.test | RUN | 0.184974 | 0.804203 | 0.707036 | 0.003950 | 0.004093 | 0.004114 |
| alloc_basic_test.test | RUN | 0.151107 | 0.564681 | 0.511104 | 0.001281 | 0.001319 | 0.001290 |
| adaptive_pool_test.test | RUN | 1.913824 | 12.793795 | 10.117264 | 0.008780 | 0.007990 | 0.012720 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 1.017× | 1.017×, 1.018× | 0.993× |
| clang | 1.065× | 1.065×, 1.065× | 1.002× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1363 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44560957980).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| adaptive_pool_test.test | 3 | 0.009111s | 0.008250s | 0.008983s | byte equality observed |
| alloc_basic_test.test | 10 | 0.000805s | 0.000817s | 0.000825s | byte equality observed |
| alloc_full_test.test | 7 | 0.002689s | 0.002648s | 0.002829s | byte equality observed |
| allocator_traits_test.test | 10 | 0.000771s | 0.000788s | 0.000784s | byte equality observed |
| boost_iterator_comp_test.test | 10 | 0.000806s | 0.000802s | 0.000782s | byte equality observed |
| common_iterator_test.test | 10 | 0.000368s | 0.000362s | 0.000771s | byte equality observed |
| copy_move_algo_test.test | 10 | 0.001170s | 0.000893s | 0.000988s | byte equality observed |
| deque_options_test.test | 10 | 0.000856s | 0.000840s | 0.000842s | byte equality observed |
| deque_test.test | 1 | 0.371006s | 0.368133s | 0.442240s | byte equality observed |
| devector_options_test.test | 10 | 0.000897s | 0.000845s | 0.000853s | byte equality observed |
| devector_test.test | 5 | 0.002890s | 0.002801s | 0.003627s | byte equality observed |
| explicit_inst_deque_test.test | 10 | 0.000722s | 0.000727s | 0.000734s | byte equality observed |
| explicit_inst_devector_test.test | 10 | 0.000713s | 0.000733s | 0.000745s | byte equality observed |
| explicit_inst_flat_map_test.test | 10 | 0.000733s | 0.000722s | 0.000760s | byte equality observed |
| explicit_inst_flat_set_test.test | 10 | 0.000726s | 0.000726s | 0.000762s | byte equality observed |
| explicit_inst_list_test.test | 10 | 0.000722s | 0.000722s | 0.000747s | byte equality observed |
| explicit_inst_map_test.test | 10 | 0.000728s | 0.000745s | 0.000750s | byte equality observed |
| explicit_inst_set_test.test | 10 | 0.000741s | 0.000731s | 0.000755s | byte equality observed |
| explicit_inst_slist_test.test | 10 | 0.000747s | 0.000751s | 0.000744s | byte equality observed |
| explicit_inst_small_vector_test.test | 10 | 0.000741s | 0.000750s | 0.000740s | byte equality observed |
| explicit_inst_stable_vector_test.test | 10 | 0.000741s | 0.000730s | 0.000753s | byte equality observed |
| explicit_inst_static_vector_test.test | 10 | 0.000718s | 0.000717s | 0.000731s | byte equality observed |
| explicit_inst_string_test.test | 10 | 0.000727s | 0.000733s | 0.000755s | byte equality observed |
| explicit_inst_vector_test.test | 10 | 0.000730s | 0.000719s | 0.000743s | byte equality observed |
| flat_map_adaptor_test.test | 4 | 0.005696s | 0.005357s | 0.005416s | byte equality observed |
| flat_map_test.test | 4 | 0.006171s | 0.005718s | 0.005520s | byte equality observed |
| flat_set_adaptor_test.test | 4 | 0.005503s | 0.005010s | 0.005333s | byte equality observed |
| flat_set_test.test | 4 | 0.005453s | 0.004822s | 0.005189s | byte equality observed |
| flat_tree_test.test | 10 | 0.000740s | 0.000725s | 0.000756s | byte equality observed |
| global_resource_test.test | 10 | 0.000764s | 0.000771s | 0.000754s | byte equality observed |
| hub_api_test.test | 8 | 0.002559s | 0.002235s | 0.002174s | byte equality observed |
| hub_empty_sort_test.test | 10 | 0.000755s | 0.000746s | 0.000739s | byte equality observed |
| hub_exception_safety_test.test | 1 | 0.050737s | 0.054547s | 0.052560s | byte equality observed |
| hub_new_extended_alignment_test.test | 10 | 0.000771s | 0.000772s | 0.000797s | byte equality observed |
| hub_pocxx_test.test | 10 | 0.000795s | 0.000788s | 0.000785s | byte equality observed |
| hub_sort_test.test | 1 | 0.426135s | 0.443178s | 0.412234s | byte equality observed |
| hub_stability_test.test | 10 | 0.000968s | 0.000962s | 0.000995s | byte equality observed |
| hub_uses_allocator_test.test | 10 | 0.000759s | 0.000745s | 0.000761s | byte equality observed |
| insert_vs_emplace_test.test | 10 | 0.000773s | 0.000770s | 0.000781s | byte equality observed |
| is_constructible_test.test | 10 | 0.000350s | 0.000347s | 0.000743s | byte equality observed |
| list_test.test | 2 | 0.015336s | 0.015459s | 0.015928s | byte equality observed |
| map_test.test | 3 | 0.007578s | 0.007315s | 0.007191s | byte equality observed |
| memory_resource_test.test | 10 | 0.000767s | 0.000777s | 0.000764s | byte equality observed |
| monotonic_buffer_resource_test.test | 10 | 0.000768s | 0.000777s | 0.000781s | byte equality observed |
| nest_api_test.test | 10 | 0.001636s | 0.001653s | 0.001654s | byte equality observed |
| nest_test.test | 10 | 0.000794s | 0.000774s | 0.000793s | byte equality observed |
| new_delete_resource_test.test | 10 | 0.001141s | 0.001126s | 0.001136s | byte equality observed |
| node_allocator_test.test | 3 | 0.006607s | 0.006566s | 0.006708s | byte equality observed |
| node_handle_test.test | 10 | 0.000761s | 0.000758s | 0.000769s | byte equality observed |
| null_iterators_test.test | 10 | 0.000767s | 0.000749s | 0.000752s | byte equality observed |
| pair_test.test | 10 | 0.000749s | 0.000757s | 0.000756s | byte equality observed |
| pmr_deque_test.test | 10 | 0.000742s | 0.000728s | 0.000739s | byte equality observed |
| pmr_devector_test.test | 10 | 0.000745s | 0.000720s | 0.000742s | byte equality observed |
| pmr_flat_map_test.test | 10 | 0.000746s | 0.000740s | 0.000749s | byte equality observed |
| pmr_flat_set_test.test | 10 | 0.000741s | 0.000732s | 0.000749s | byte equality observed |
| pmr_hub_test.test | 10 | 0.000745s | 0.000748s | 0.000739s | byte equality observed |
| pmr_list_test.test | 10 | 0.000746s | 0.000738s | 0.000752s | byte equality observed |
| pmr_map_test.test | 10 | 0.000749s | 0.000731s | 0.000754s | byte equality observed |
| pmr_nest_test.test | 10 | 0.000759s | 0.000742s | 0.000756s | byte equality observed |
| pmr_set_test.test | 10 | 0.000752s | 0.000755s | 0.000761s | byte equality observed |
| pmr_slist_test.test | 10 | 0.000748s | 0.000747s | 0.000764s | byte equality observed |
| pmr_small_vector_test.test | 10 | 0.000743s | 0.000728s | 0.000764s | byte equality observed |
| pmr_stable_vector_test.test | 10 | 0.000754s | 0.000738s | 0.000766s | byte equality observed |
| pmr_string_test.test | 10 | 0.000352s | 0.000357s | 0.000754s | byte equality observed |
| pmr_vector_test.test | 10 | 0.000353s | 0.000354s | 0.000783s | byte equality observed |
| polymorphic_allocator_test.test | 10 | 0.000764s | 0.000754s | 0.000828s | byte equality observed |
| resource_adaptor_test.test | 10 | 0.000771s | 0.000744s | 0.000820s | byte equality observed |
| scoped_allocator_adaptor_test.test | 10 | 0.000763s | 0.000743s | 0.000832s | byte equality observed |
| scoped_allocator_usage_test.test | 10 | 0.000776s | 0.000752s | 0.000827s | byte equality observed |
| segtor_options_test.test | 10 | 0.000810s | 0.000801s | 0.000826s | byte equality observed |
| segtor_test.test | 1 | 0.456266s | 0.470466s | 0.492928s | byte equality observed |
| set_test.test | 2 | 0.010637s | 0.009477s | 0.010297s | byte equality observed |
| slist_test.test | 2 | 0.016098s | 0.015965s | 0.015892s | byte equality observed |
| small_vector_options_test.test | 10 | 0.000840s | 0.000816s | 0.000826s | byte equality observed |
| small_vector_test.test | 7 | 0.001705s | 0.001579s | 0.002741s | byte equality observed |
| stable_vector_test.test | 1 | 0.027596s | 0.027847s | 0.028415s | byte equality observed |
| static_vector_options_test.test | 10 | 0.000816s | 0.000771s | 0.000800s | byte equality observed |
| static_vector_test.test | 10 | 0.001072s | 0.000979s | 0.001024s | byte equality observed |
| string_options_test.test | 10 | 0.000790s | 0.000784s | 0.000769s | byte equality observed |
| string_test.test | 3 | 0.009152s | 0.008916s | 0.009266s | byte equality observed |
| string_view_compat_test.test | 10 | 0.000754s | 0.000753s | 0.000757s | byte equality observed |
| synchronized_pool_resource_test.test | 10 | 0.000797s | 0.000771s | 0.000788s | byte equality observed |
| throw_exception_test.test | 10 | 0.000740s | 0.000736s | 0.000739s | byte equality observed |
| tree_test.test | 10 | 0.000749s | 0.000727s | 0.000737s | byte equality observed |
| unsynchronized_pool_resource_test.test | 10 | 0.000788s | 0.000762s | 0.000782s | byte equality observed |
| uses_allocator_construction_test.test | 10 | 0.000726s | 0.000714s | 0.000744s | byte equality observed |
| uses_allocator_test.test | 10 | 0.000343s | 0.000342s | 0.000736s | byte equality observed |
| vector_options_test.test | 10 | 0.000873s | 0.000842s | 0.000853s | byte equality observed |
| vector_test.test | 5 | 0.002985s | 0.002962s | 0.003932s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44560957980).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
