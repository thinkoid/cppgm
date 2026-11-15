# libs/container/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| vector_test.test | RUN | 6.750462 | 29.287999 | 23.185866 | 0.004437 | 0.003949 | 0.005743 |
| vector_options_test.test | RUN | 0.255637 | 1.240839 | 0.980864 | 0.001228 | 0.001306 | 0.001212 |
| uses_allocator_test.test | RUN | 0.042363 | 0.095212 | 0.119282 | 0.000497 | 0.000511 | 0.000897 |
| uses_allocator_construction_test.test | RUN | 0.127918 | 0.378230 | 0.402390 | 0.001052 | 0.001273 | 0.001011 |
| unsynchronized_pool_resource_test.test | RUN | 0.166122 | 1.198972 | 0.555856 | 0.001070 | 0.001282 | 0.001090 |
| tree_test.test | RUN | 0.835400 | 4.320066 | 3.352184 | 0.000985 | 0.001308 | 0.001054 |
| throw_exception_test.test | RUN | 0.093971 | 0.244211 | 0.287848 | 0.001020 | 0.001157 | 0.001030 |
| synchronized_pool_resource_test.test | RUN | 0.174310 | 1.196412 | 0.568359 | 0.001066 | 0.001269 | 0.001195 |
| string_view_compat_test.test | RUN | 0.284079 | 2.353810 | 1.122664 | 0.001014 | 0.001305 | 0.001206 |
| string_test.test | RUN | 1.480349 | 9.128241 | 6.136349 | 0.013497 | 0.012545 | 0.013166 |
| string_options_test.test | RUN | 0.239079 | 1.910841 | 0.934003 | 0.001065 | 0.001345 | 0.001194 |
| static_vector_test.test | RUN | 1.635773 | 7.486640 | 6.272132 | 0.001679 | 0.001566 | 0.001660 |
| static_vector_options_test.test | RUN | 0.164496 | 0.476504 | 0.528687 | 0.001175 | 0.001250 | 0.001102 |
| stable_vector_test.test | RUN | 3.830380 | 15.880709 | 11.961647 | 0.031667 | 0.031892 | 0.032765 |
| small_vector_test.test | RUN | 2.517315 | 11.008914 | 8.629933 | 0.002647 | 0.002498 | 0.004220 |
| small_vector_options_test.test | RUN | 0.306033 | 1.275370 | 1.119728 | 0.001286 | 0.001444 | 0.001188 |
| slist_test.test | RUN | 2.311776 | 9.997695 | 7.661530 | 0.022347 | 0.022724 | 0.022511 |
| set_test.test | RUN | 3.444445 | 18.729907 | 13.942411 | 0.014112 | 0.012795 | 0.013397 |
| segtor_test.test | RUN | 4.632077 | 20.494989 | 15.576181 | 0.754115 | 0.737111 | 0.716620 |
| segtor_options_test.test | RUN | 0.191606 | 0.572160 | 0.664952 | 0.001209 | 0.001292 | 0.001212 |
| scoped_allocator_usage_test.test | RUN | 0.755198 | 2.911244 | 2.615670 | 0.001129 | 0.001363 | 0.001031 |
| scoped_allocator_adaptor_test.test | RUN | 0.297567 | 0.807653 | 1.085737 | 0.001233 | 0.001153 | 0.001078 |
| resource_adaptor_test.test | RUN | 0.146133 | 0.499950 | 0.489715 | 0.001065 | 0.001081 | 0.001146 |
| polymorphic_allocator_test.test | RUN | 0.121137 | 0.383296 | 0.414478 | 0.001163 | 0.001201 | 0.001048 |
| pmr_vector_test.test | RUN | 0.066316 | 0.142012 | 0.193416 | 0.000452 | 0.000457 | 0.000988 |
| pmr_string_test.test | RUN | 0.135413 | 0.295215 | 0.381613 | 0.000487 | 0.000493 | 0.001026 |
| pmr_stable_vector_test.test | RUN | 0.181388 | 0.505882 | 0.594047 | 0.001058 | 0.001158 | 0.001025 |
| pmr_small_vector_test.test | RUN | 0.084001 | 0.193333 | 0.246581 | 0.000989 | 0.000894 | 0.001062 |
| pmr_slist_test.test | RUN | 0.125054 | 0.695391 | 0.587990 | 0.000982 | 0.001328 | 0.001034 |
| pmr_set_test.test | RUN | 0.129212 | 0.330354 | 0.422277 | 0.000996 | 0.001266 | 0.001036 |
| pmr_nest_test.test | RUN | 0.098715 | 0.227566 | 0.269733 | 0.001000 | 0.001185 | 0.001016 |
| pmr_map_test.test | RUN | 0.139297 | 0.341248 | 0.423254 | 0.001008 | 0.001147 | 0.000995 |
| pmr_list_test.test | RUN | 0.089226 | 0.213675 | 0.289116 | 0.001025 | 0.001277 | 0.001006 |
| pmr_hub_test.test | RUN | 0.123919 | 0.288076 | 0.373051 | 0.001034 | 0.001229 | 0.001108 |
| pmr_flat_set_test.test | RUN | 0.098388 | 0.227174 | 0.319262 | 0.000997 | 0.000984 | 0.001010 |
| pmr_flat_map_test.test | RUN | 0.120533 | 0.264733 | 0.344220 | 0.001001 | 0.001065 | 0.001051 |
| pmr_devector_test.test | RUN | 0.078423 | 0.234297 | 0.275651 | 0.000959 | 0.001379 | 0.000951 |
| pmr_deque_test.test | RUN | 0.078618 | 0.188646 | 0.273548 | 0.000991 | 0.001286 | 0.001047 |
| pair_test.test | RUN | 0.202065 | 0.460440 | 0.557501 | 0.001086 | 0.001215 | 0.001029 |
| null_iterators_test.test | RUN | 0.313540 | 0.907354 | 1.006555 | 0.001035 | 0.001379 | 0.001050 |
| node_handle_test.test | RUN | 0.141580 | 1.200891 | 0.397948 | 0.001045 | 0.001300 | 0.001054 |
| node_allocator_test.test | RUN | 2.667838 | 12.328779 | 9.573057 | 0.008759 | 0.008853 | 0.008986 |
| new_delete_resource_test.test | RUN | 0.168802 | 0.705758 | 0.551623 | 0.001624 | 0.001674 | 0.001522 |
| nest_test.test | RUN | 0.500196 | 3.322734 | 2.019558 | 0.001165 | 0.001340 | 0.001106 |
| nest_api_test.test | RUN | 0.942013 | 6.410255 | 4.026124 | 0.002092 | 0.002269 | 0.002288 |
| monotonic_buffer_resource_test.test | RUN | 0.170112 | 1.311354 | 0.502507 | 0.001084 | 0.001180 | 0.000958 |
| memory_resource_test.test | RUN | 0.095680 | 0.358525 | 0.249200 | 0.001069 | 0.001269 | 0.000987 |
| map_test.test | RUN | 4.844989 | 20.835557 | 19.512100 | 0.010577 | 0.010231 | 0.009501 |
| list_test.test | RUN | 2.465413 | 10.763278 | 8.136061 | 0.022427 | 0.022882 | 0.022328 |
| is_constructible_test.test | RUN | 0.063802 | 0.122482 | 0.186104 | 0.000516 | 0.000506 | 0.001125 |
| insert_vs_emplace_test.test | RUN | 0.222418 | 0.830087 | 1.120990 | 0.001099 | 0.001260 | 0.001213 |
| hub_uses_allocator_test.test | RUN | 0.222639 | 0.714792 | 0.767093 | 0.001362 | 0.001217 | 0.001148 |
| hub_stability_test.test | RUN | 0.525338 | 3.355371 | 2.842108 | 0.001410 | 0.001594 | 0.001381 |
| hub_sort_test.test | RUN | 0.327635 | 1.536306 | 1.383092 | 0.514165 | 0.537454 | 0.497846 |
| hub_pocxx_test.test | RUN | 0.301109 | 1.831445 | 1.005368 | 0.001113 | 0.001310 | 0.001064 |
| hub_new_extended_alignment_test.test | RUN | 0.150973 | 0.530476 | 0.539380 | 0.001032 | 0.001258 | 0.001145 |
| hub_exception_safety_test.test | RUN | 0.651183 | 4.295276 | 2.889263 | 0.055356 | 0.060751 | 0.055846 |
| hub_empty_sort_test.test | RUN | 0.186204 | 0.487030 | 0.585534 | 0.001102 | 0.001171 | 0.001011 |
| hub_api_test.test | RUN | 2.198891 | 16.921690 | 9.053689 | 0.003460 | 0.003186 | 0.003114 |
| global_resource_test.test | RUN | 0.096099 | 0.326853 | 0.289860 | 0.001340 | 0.001204 | 0.001094 |
| flat_tree_test.test | RUN | 4.437038 | 26.877437 | 17.065955 | 0.001098 | 0.001176 | 0.001170 |
| flat_set_test.test | RUN | 5.578768 | 33.688516 | 22.204671 | 0.007324 | 0.006739 | 0.006822 |
| flat_set_adaptor_test.test | RUN | 4.147871 | 29.705366 | 17.228937 | 0.007377 | 0.006786 | 0.007032 |
| flat_map_test.test | RUN | 9.072977 | 50.138166 | 36.224085 | 0.008494 | 0.007891 | 0.007534 |
| flat_map_adaptor_test.test | RUN | 5.816663 | 36.358982 | 25.598069 | 0.007679 | 0.007441 | 0.007217 |
| explicit_inst_vector_test.test | RUN | 0.798943 | 4.930760 | 3.860759 | 0.001153 | 0.001340 | 0.001095 |
| explicit_inst_string_test.test | RUN | 1.068214 | 8.841846 | 5.395946 | 0.001055 | 0.001245 | 0.001130 |
| explicit_inst_static_vector_test.test | RUN | 0.091642 | 0.316197 | 0.368318 | 0.001111 | 0.001187 | 0.001174 |
| explicit_inst_stable_vector_test.test | RUN | 0.646626 | 3.102976 | 2.504398 | 0.001100 | 0.001167 | 0.001129 |
| explicit_inst_small_vector_test.test | RUN | 0.535674 | 2.792344 | 2.305892 | 0.001199 | 0.001292 | 0.001061 |
| explicit_inst_slist_test.test | RUN | 0.386501 | 2.555443 | 1.757921 | 0.001160 | 0.001210 | 0.001024 |
| explicit_inst_set_test.test | RUN | 0.569323 | 2.950465 | 2.014280 | 0.001118 | 0.001115 | 0.001052 |
| explicit_inst_map_test.test | RUN | 0.619831 | 3.050008 | 2.242143 | 0.001147 | 0.001218 | 0.001070 |
| explicit_inst_list_test.test | RUN | 0.130846 | 0.715150 | 0.568311 | 0.001042 | 0.001128 | 0.001123 |
| explicit_inst_flat_set_test.test | RUN | 3.691492 | 22.454481 | 13.154951 | 0.001161 | 0.001257 | 0.001150 |
| explicit_inst_flat_map_test.test | RUN | 3.942805 | 23.667639 | 14.577829 | 0.001100 | 0.001385 | 0.001128 |
| explicit_inst_devector_test.test | RUN | 0.449849 | 2.790134 | 1.923123 | 0.001030 | 0.001305 | 0.001090 |
| explicit_inst_deque_test.test | RUN | 0.451116 | 3.009372 | 2.044396 | 0.001140 | 0.001263 | 0.001099 |
| devector_test.test | RUN | 6.349280 | 36.920369 | 23.994920 | 0.002940 | 0.002927 | 0.003634 |
| devector_options_test.test | RUN | 0.261472 | 1.660011 | 1.081547 | 0.001368 | 0.001433 | 0.001241 |
| deque_test.test | RUN | 5.055548 | 18.944889 | 17.012173 | 0.362092 | 0.359758 | 0.436029 |
| deque_options_test.test | RUN | 0.195838 | 0.601386 | 0.745615 | 0.001159 | 0.001297 | 0.001211 |
| copy_move_algo_test.test | RUN | 0.194271 | 0.720229 | 0.682891 | 0.001407 | 0.001320 | 0.001335 |
| common_iterator_test.test | RUN | 0.011863 | 0.035504 | 0.033992 | 0.000430 | 0.000491 | 0.000976 |
| boost_iterator_comp_test.test | RUN | 0.264078 | 0.857027 | 0.982337 | 0.001025 | 0.001186 | 0.001045 |
| allocator_traits_test.test | RUN | 0.147455 | 0.354972 | 0.455355 | 0.001103 | 0.001159 | 0.001190 |
| alloc_full_test.test | RUN | 0.179702 | 0.802629 | 0.696239 | 0.003780 | 0.003898 | 0.003763 |
| alloc_basic_test.test | RUN | 0.145443 | 0.549336 | 0.505121 | 0.001117 | 0.001285 | 0.001101 |
| adaptive_pool_test.test | RUN | 2.708102 | 12.400874 | 9.627243 | 0.012390 | 0.007707 | 0.012087 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 1.008× | 1.007×, 1.009× | 1.005× |
| clang | 1.065× | 1.064×, 1.066× | 0.992× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1362 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43670794197).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| adaptive_pool_test.test | 3 | 0.008749s | 0.008148s | 0.008898s | byte equality observed |
| alloc_basic_test.test | 10 | 0.000815s | 0.000822s | 0.000803s | byte equality observed |
| alloc_full_test.test | 8 | 0.002656s | 0.002682s | 0.002844s | byte equality observed |
| allocator_traits_test.test | 10 | 0.000767s | 0.000777s | 0.000746s | byte equality observed |
| boost_iterator_comp_test.test | 10 | 0.000800s | 0.000780s | 0.000766s | byte equality observed |
| common_iterator_test.test | 10 | 0.000357s | 0.000364s | 0.000779s | byte equality observed |
| copy_move_algo_test.test | 10 | 0.001168s | 0.000908s | 0.000996s | byte equality observed |
| deque_options_test.test | 10 | 0.000862s | 0.000828s | 0.000825s | byte equality observed |
| deque_test.test | 1 | 0.371003s | 0.368557s | 0.442419s | byte equality observed |
| devector_options_test.test | 10 | 0.000899s | 0.000840s | 0.000840s | byte equality observed |
| devector_test.test | 6 | 0.002871s | 0.002775s | 0.003593s | byte equality observed |
| explicit_inst_deque_test.test | 10 | 0.000732s | 0.000718s | 0.000719s | byte equality observed |
| explicit_inst_devector_test.test | 10 | 0.000715s | 0.000712s | 0.000708s | byte equality observed |
| explicit_inst_flat_map_test.test | 10 | 0.000728s | 0.000732s | 0.000715s | byte equality observed |
| explicit_inst_flat_set_test.test | 7 | 0.000730s | 0.000719s | 0.000723s | byte equality observed |
| explicit_inst_list_test.test | 10 | 0.000714s | 0.000712s | 0.000718s | byte equality observed |
| explicit_inst_map_test.test | 10 | 0.000725s | 0.000718s | 0.000723s | byte equality observed |
| explicit_inst_set_test.test | 10 | 0.000723s | 0.000731s | 0.000716s | byte equality observed |
| explicit_inst_slist_test.test | 10 | 0.000730s | 0.000727s | 0.000713s | byte equality observed |
| explicit_inst_small_vector_test.test | 10 | 0.000728s | 0.000726s | 0.000710s | byte equality observed |
| explicit_inst_stable_vector_test.test | 10 | 0.000729s | 0.000724s | 0.000718s | byte equality observed |
| explicit_inst_static_vector_test.test | 10 | 0.000715s | 0.000714s | 0.000719s | byte equality observed |
| explicit_inst_string_test.test | 10 | 0.000720s | 0.000735s | 0.000733s | byte equality observed |
| explicit_inst_vector_test.test | 10 | 0.000722s | 0.000728s | 0.000701s | byte equality observed |
| flat_map_adaptor_test.test | 4 | 0.005644s | 0.005329s | 0.005367s | byte equality observed |
| flat_map_test.test | 4 | 0.006119s | 0.005689s | 0.005473s | byte equality observed |
| flat_set_adaptor_test.test | 4 | 0.005482s | 0.004974s | 0.005306s | byte equality observed |
| flat_set_test.test | 4 | 0.005437s | 0.004810s | 0.005149s | byte equality observed |
| flat_tree_test.test | 10 | 0.000732s | 0.000722s | 0.000736s | byte equality observed |
| global_resource_test.test | 10 | 0.000763s | 0.000764s | 0.000761s | byte equality observed |
| hub_api_test.test | 8 | 0.002544s | 0.002221s | 0.002151s | byte equality observed |
| hub_empty_sort_test.test | 10 | 0.000745s | 0.000750s | 0.000734s | byte equality observed |
| hub_exception_safety_test.test | 1 | 0.048030s | 0.051582s | 0.048405s | byte equality observed |
| hub_new_extended_alignment_test.test | 10 | 0.000746s | 0.000756s | 0.000738s | byte equality observed |
| hub_pocxx_test.test | 10 | 0.000769s | 0.000780s | 0.000748s | byte equality observed |
| hub_sort_test.test | 1 | 0.420567s | 0.426591s | 0.405323s | byte equality observed |
| hub_stability_test.test | 10 | 0.000964s | 0.000954s | 0.000960s | byte equality observed |
| hub_uses_allocator_test.test | 10 | 0.000755s | 0.000761s | 0.000752s | byte equality observed |
| insert_vs_emplace_test.test | 10 | 0.000774s | 0.000769s | 0.000752s | byte equality observed |
| is_constructible_test.test | 10 | 0.000347s | 0.000345s | 0.000722s | byte equality observed |
| list_test.test | 2 | 0.015336s | 0.015360s | 0.015787s | byte equality observed |
| map_test.test | 3 | 0.007521s | 0.007287s | 0.007184s | byte equality observed |
| memory_resource_test.test | 10 | 0.000759s | 0.000760s | 0.000754s | byte equality observed |
| monotonic_buffer_resource_test.test | 10 | 0.000770s | 0.000772s | 0.000764s | byte equality observed |
| nest_api_test.test | 10 | 0.001635s | 0.001641s | 0.001654s | byte equality observed |
| nest_test.test | 10 | 0.000778s | 0.000785s | 0.000780s | byte equality observed |
| new_delete_resource_test.test | 10 | 0.001101s | 0.001102s | 0.001099s | byte equality observed |
| node_allocator_test.test | 3 | 0.006526s | 0.006502s | 0.006580s | byte equality observed |
| node_handle_test.test | 10 | 0.000773s | 0.000772s | 0.000749s | byte equality observed |
| null_iterators_test.test | 10 | 0.000754s | 0.000739s | 0.000766s | byte equality observed |
| pair_test.test | 10 | 0.000763s | 0.000762s | 0.000750s | byte equality observed |
| pmr_deque_test.test | 10 | 0.000727s | 0.000751s | 0.000747s | byte equality observed |
| pmr_devector_test.test | 10 | 0.000739s | 0.000758s | 0.000755s | byte equality observed |
| pmr_flat_map_test.test | 10 | 0.000737s | 0.000747s | 0.000729s | byte equality observed |
| pmr_flat_set_test.test | 10 | 0.000729s | 0.000743s | 0.000742s | byte equality observed |
| pmr_hub_test.test | 10 | 0.000748s | 0.000752s | 0.000738s | byte equality observed |
| pmr_list_test.test | 10 | 0.000740s | 0.000739s | 0.000741s | byte equality observed |
| pmr_map_test.test | 10 | 0.000748s | 0.000728s | 0.000716s | byte equality observed |
| pmr_nest_test.test | 10 | 0.000748s | 0.000734s | 0.000733s | byte equality observed |
| pmr_set_test.test | 10 | 0.000734s | 0.000748s | 0.000730s | byte equality observed |
| pmr_slist_test.test | 10 | 0.000740s | 0.000738s | 0.000735s | byte equality observed |
| pmr_small_vector_test.test | 10 | 0.000754s | 0.000747s | 0.000737s | byte equality observed |
| pmr_stable_vector_test.test | 10 | 0.000744s | 0.000752s | 0.000779s | byte equality observed |
| pmr_string_test.test | 10 | 0.000354s | 0.000352s | 0.000780s | byte equality observed |
| pmr_vector_test.test | 10 | 0.000347s | 0.000348s | 0.000774s | byte equality observed |
| polymorphic_allocator_test.test | 10 | 0.000767s | 0.000771s | 0.000809s | byte equality observed |
| resource_adaptor_test.test | 10 | 0.000756s | 0.000761s | 0.000828s | byte equality observed |
| scoped_allocator_adaptor_test.test | 10 | 0.000754s | 0.000749s | 0.000834s | byte equality observed |
| scoped_allocator_usage_test.test | 10 | 0.000746s | 0.000765s | 0.000817s | byte equality observed |
| segtor_options_test.test | 10 | 0.000798s | 0.000794s | 0.000799s | byte equality observed |
| segtor_test.test | 1 | 0.456715s | 0.463495s | 0.497894s | byte equality observed |
| set_test.test | 2 | 0.010553s | 0.009392s | 0.010223s | byte equality observed |
| slist_test.test | 2 | 0.016062s | 0.015839s | 0.015826s | byte equality observed |
| small_vector_options_test.test | 10 | 0.000827s | 0.000809s | 0.000798s | byte equality observed |
| small_vector_test.test | 7 | 0.001695s | 0.001570s | 0.002721s | byte equality observed |
| stable_vector_test.test | 1 | 0.027444s | 0.027740s | 0.028212s | byte equality observed |
| static_vector_options_test.test | 10 | 0.000795s | 0.000769s | 0.000770s | byte equality observed |
| static_vector_test.test | 10 | 0.001065s | 0.000980s | 0.001005s | byte equality observed |
| string_options_test.test | 10 | 0.000778s | 0.000780s | 0.000762s | byte equality observed |
| string_test.test | 3 | 0.009149s | 0.009019s | 0.009215s | byte equality observed |
| string_view_compat_test.test | 10 | 0.000759s | 0.000754s | 0.000722s | byte equality observed |
| synchronized_pool_resource_test.test | 10 | 0.000786s | 0.000779s | 0.000758s | byte equality observed |
| throw_exception_test.test | 10 | 0.000751s | 0.000729s | 0.000715s | byte equality observed |
| tree_test.test | 10 | 0.000740s | 0.000723s | 0.000712s | byte equality observed |
| unsynchronized_pool_resource_test.test | 10 | 0.000784s | 0.000774s | 0.000764s | byte equality observed |
| uses_allocator_construction_test.test | 10 | 0.000738s | 0.000735s | 0.000719s | byte equality observed |
| uses_allocator_test.test | 10 | 0.000340s | 0.000342s | 0.000698s | byte equality observed |
| vector_options_test.test | 10 | 0.000845s | 0.000844s | 0.000829s | byte equality observed |
| vector_test.test | 5 | 0.002942s | 0.002940s | 0.003869s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43670794197).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
