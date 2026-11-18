# libs/container/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| vector_test.test | RUN | 5.962007 | 30.348996 | 24.206786 | 0.004789 | 0.004457 | 0.006109 |
| vector_options_test.test | RUN | 0.265352 | 1.302182 | 0.978625 | 0.001399 | 0.001327 | 0.001326 |
| uses_allocator_test.test | RUN | 0.045433 | 0.098367 | 0.124585 | 0.000511 | 0.000455 | 0.001167 |
| uses_allocator_construction_test.test | RUN | 0.136827 | 0.377274 | 0.437888 | 0.001134 | 0.001352 | 0.001256 |
| unsynchronized_pool_resource_test.test | RUN | 0.181910 | 1.203165 | 0.559350 | 0.001445 | 0.001351 | 0.001306 |
| tree_test.test | RUN | 0.843198 | 4.525143 | 3.302273 | 0.000942 | 0.001266 | 0.001270 |
| throw_exception_test.test | RUN | 0.097901 | 0.247857 | 0.285525 | 0.001144 | 0.001446 | 0.001289 |
| synchronized_pool_resource_test.test | RUN | 0.183520 | 1.195881 | 0.570291 | 0.001240 | 0.001597 | 0.001213 |
| string_view_compat_test.test | RUN | 0.308397 | 2.417870 | 1.113782 | 0.001248 | 0.001374 | 0.001219 |
| string_test.test | RUN | 1.439242 | 9.417684 | 6.285741 | 0.013577 | 0.012862 | 0.013414 |
| string_options_test.test | RUN | 0.248034 | 1.947210 | 0.984712 | 0.001229 | 0.001436 | 0.001326 |
| static_vector_test.test | RUN | 1.467008 | 7.879558 | 6.383165 | 0.001850 | 0.001859 | 0.001647 |
| static_vector_options_test.test | RUN | 0.169643 | 0.469946 | 0.543085 | 0.001352 | 0.001511 | 0.001285 |
| stable_vector_test.test | RUN | 3.439233 | 16.631444 | 12.588552 | 0.031328 | 0.032721 | 0.033050 |
| small_vector_test.test | RUN | 2.246657 | 11.643618 | 8.883894 | 0.002736 | 0.002602 | 0.004265 |
| small_vector_options_test.test | RUN | 0.310347 | 1.340058 | 1.145124 | 0.001452 | 0.001590 | 0.001392 |
| slist_test.test | RUN | 2.077844 | 10.514538 | 7.899314 | 0.022235 | 0.023179 | 0.022545 |
| set_test.test | RUN | 3.145943 | 19.556124 | 14.610103 | 0.014577 | 0.013060 | 0.013289 |
| segtor_test.test | RUN | 3.971299 | 21.114265 | 16.170808 | 0.712428 | 0.753417 | 0.711367 |
| segtor_options_test.test | RUN | 0.192970 | 0.564657 | 0.679562 | 0.001247 | 0.001462 | 0.001406 |
| scoped_allocator_usage_test.test | RUN | 0.723426 | 3.070786 | 2.693403 | 0.001296 | 0.001413 | 0.001134 |
| scoped_allocator_adaptor_test.test | RUN | 0.300696 | 0.848511 | 1.144477 | 0.001283 | 0.001277 | 0.001172 |
| resource_adaptor_test.test | RUN | 0.154795 | 0.501763 | 0.503712 | 0.001283 | 0.001333 | 0.001234 |
| polymorphic_allocator_test.test | RUN | 0.127423 | 0.397495 | 0.409411 | 0.001300 | 0.001071 | 0.001262 |
| pmr_vector_test.test | RUN | 0.074606 | 0.148403 | 0.219287 | 0.000512 | 0.000558 | 0.001368 |
| pmr_string_test.test | RUN | 0.145032 | 0.314517 | 0.397727 | 0.000549 | 0.000591 | 0.001156 |
| pmr_stable_vector_test.test | RUN | 0.172660 | 0.531915 | 0.607389 | 0.001273 | 0.001335 | 0.001139 |
| pmr_small_vector_test.test | RUN | 0.086484 | 0.203500 | 0.257499 | 0.001350 | 0.001481 | 0.001093 |
| pmr_slist_test.test | RUN | 0.130312 | 0.708103 | 0.602025 | 0.001445 | 0.001416 | 0.001061 |
| pmr_set_test.test | RUN | 0.141288 | 0.349832 | 0.435423 | 0.001156 | 0.001417 | 0.001087 |
| pmr_nest_test.test | RUN | 0.108958 | 0.235763 | 0.286529 | 0.001107 | 0.001306 | 0.001316 |
| pmr_map_test.test | RUN | 0.145968 | 0.357134 | 0.438997 | 0.001216 | 0.001269 | 0.001204 |
| pmr_list_test.test | RUN | 0.093467 | 0.218262 | 0.289477 | 0.001228 | 0.001225 | 0.001306 |
| pmr_hub_test.test | RUN | 0.137643 | 0.304933 | 0.382289 | 0.001269 | 0.001293 | 0.001303 |
| pmr_flat_set_test.test | RUN | 0.108694 | 0.241899 | 0.325365 | 0.001236 | 0.001410 | 0.001389 |
| pmr_flat_map_test.test | RUN | 0.129499 | 0.274185 | 0.385661 | 0.001261 | 0.001430 | 0.001263 |
| pmr_devector_test.test | RUN | 0.087457 | 0.240903 | 0.263047 | 0.001163 | 0.001163 | 0.001020 |
| pmr_deque_test.test | RUN | 0.083139 | 0.204172 | 0.279376 | 0.001152 | 0.001488 | 0.001311 |
| pair_test.test | RUN | 0.202592 | 0.487349 | 0.579223 | 0.001236 | 0.001440 | 0.001234 |
| null_iterators_test.test | RUN | 0.327897 | 0.947997 | 1.027835 | 0.001100 | 0.001405 | 0.001312 |
| node_handle_test.test | RUN | 0.147895 | 1.227021 | 0.400085 | 0.001261 | 0.001328 | 0.001229 |
| node_allocator_test.test | RUN | 2.449302 | 12.873545 | 9.832038 | 0.009248 | 0.009341 | 0.009283 |
| new_delete_resource_test.test | RUN | 0.180997 | 0.727784 | 0.569593 | 0.001734 | 0.001928 | 0.001630 |
| nest_test.test | RUN | 0.502721 | 3.446672 | 2.052021 | 0.001347 | 0.001510 | 0.001284 |
| nest_api_test.test | RUN | 0.755558 | 6.663739 | 4.105435 | 0.002372 | 0.002382 | 0.002221 |
| monotonic_buffer_resource_test.test | RUN | 0.180123 | 1.332372 | 0.531434 | 0.001191 | 0.001448 | 0.001140 |
| memory_resource_test.test | RUN | 0.103369 | 0.364640 | 0.261457 | 0.001290 | 0.001356 | 0.001033 |
| map_test.test | RUN | 4.296747 | 21.666610 | 20.319778 | 0.010899 | 0.010216 | 0.009927 |
| list_test.test | RUN | 2.194268 | 11.130618 | 8.386299 | 0.021836 | 0.022696 | 0.022777 |
| is_constructible_test.test | RUN | 0.063946 | 0.131379 | 0.191262 | 0.000564 | 0.000609 | 0.001140 |
| insert_vs_emplace_test.test | RUN | 0.213204 | 0.851481 | 1.117550 | 0.001407 | 0.001480 | 0.001268 |
| hub_uses_allocator_test.test | RUN | 0.229901 | 0.737477 | 0.776749 | 0.001185 | 0.001392 | 0.001172 |
| hub_stability_test.test | RUN | 0.536359 | 3.471851 | 2.872191 | 0.001642 | 0.001745 | 0.001504 |
| hub_sort_test.test | RUN | 0.337046 | 1.560962 | 1.393365 | 0.537088 | 0.548620 | 0.505757 |
| hub_pocxx_test.test | RUN | 0.310137 | 1.835784 | 1.010976 | 0.001354 | 0.001670 | 0.001203 |
| hub_new_extended_alignment_test.test | RUN | 0.168019 | 0.552196 | 0.538653 | 0.001291 | 0.001405 | 0.001228 |
| hub_exception_safety_test.test | RUN | 0.650250 | 4.454321 | 2.762708 | 0.059386 | 0.067835 | 0.063007 |
| hub_empty_sort_test.test | RUN | 0.189582 | 0.494480 | 0.616538 | 0.001185 | 0.001473 | 0.001210 |
| hub_api_test.test | RUN | 2.174510 | 17.518825 | 9.238034 | 0.003538 | 0.003265 | 0.003237 |
| global_resource_test.test | RUN | 0.098557 | 0.337397 | 0.315457 | 0.001384 | 0.001245 | 0.001400 |
| flat_tree_test.test | RUN | 4.055302 | 27.481026 | 17.856226 | 0.001271 | 0.001336 | 0.001348 |
| flat_set_test.test | RUN | 5.053805 | 34.459161 | 22.981372 | 0.007391 | 0.006734 | 0.007114 |
| flat_set_adaptor_test.test | RUN | 3.779469 | 30.004876 | 17.960099 | 0.007527 | 0.006857 | 0.007144 |
| flat_map_test.test | RUN | 8.196519 | 51.084346 | 37.876235 | 0.008368 | 0.008114 | 0.007635 |
| flat_map_adaptor_test.test | RUN | 5.221110 | 36.950667 | 26.684388 | 0.007787 | 0.007395 | 0.007427 |
| explicit_inst_vector_test.test | RUN | 0.798840 | 5.008483 | 3.974935 | 0.001580 | 0.001295 | 0.001215 |
| explicit_inst_string_test.test | RUN | 1.071350 | 8.886994 | 5.532238 | 0.001341 | 0.001201 | 0.001146 |
| explicit_inst_static_vector_test.test | RUN | 0.096823 | 0.314087 | 0.351591 | 0.001161 | 0.001328 | 0.001212 |
| explicit_inst_stable_vector_test.test | RUN | 0.632215 | 3.134665 | 2.460872 | 0.001452 | 0.001189 | 0.001270 |
| explicit_inst_small_vector_test.test | RUN | 0.520416 | 2.862463 | 2.322326 | 0.001240 | 0.001347 | 0.001284 |
| explicit_inst_slist_test.test | RUN | 0.397968 | 2.596499 | 1.763136 | 0.001325 | 0.001246 | 0.001339 |
| explicit_inst_set_test.test | RUN | 0.553996 | 2.989225 | 2.098647 | 0.001375 | 0.001327 | 0.001385 |
| explicit_inst_map_test.test | RUN | 0.621898 | 3.098857 | 2.267433 | 0.001374 | 0.001287 | 0.001211 |
| explicit_inst_list_test.test | RUN | 0.141740 | 0.711396 | 0.572962 | 0.001196 | 0.001157 | 0.001122 |
| explicit_inst_flat_set_test.test | RUN | 3.351859 | 22.794937 | 13.622915 | 0.001353 | 0.001437 | 0.001245 |
| explicit_inst_flat_map_test.test | RUN | 3.600188 | 23.920231 | 15.126213 | 0.001209 | 0.001382 | 0.001225 |
| explicit_inst_devector_test.test | RUN | 0.436218 | 2.821188 | 1.913632 | 0.001364 | 0.001223 | 0.001180 |
| explicit_inst_deque_test.test | RUN | 0.441066 | 3.040395 | 2.028724 | 0.001248 | 0.001212 | 0.001232 |
| devector_test.test | RUN | 6.604502 | 37.178892 | 25.235408 | 0.003157 | 0.003016 | 0.003767 |
| devector_options_test.test | RUN | 0.276149 | 1.651730 | 1.046928 | 0.001540 | 0.001382 | 0.001493 |
| deque_test.test | RUN | 3.840908 | 22.238182 | 17.508625 | 0.365367 | 0.360179 | 0.436475 |
| deque_options_test.test | RUN | 0.196650 | 0.595844 | 0.749319 | 0.001330 | 0.001420 | 0.001261 |
| copy_move_algo_test.test | RUN | 0.189801 | 0.733668 | 0.695130 | 0.001662 | 0.001432 | 0.001436 |
| common_iterator_test.test | RUN | 0.013503 | 0.034193 | 0.035061 | 0.000453 | 0.000494 | 0.001195 |
| boost_iterator_comp_test.test | RUN | 0.271258 | 0.873791 | 0.971150 | 0.001154 | 0.001207 | 0.001381 |
| allocator_traits_test.test | RUN | 0.156053 | 0.378459 | 0.482926 | 0.001155 | 0.001350 | 0.001187 |
| alloc_full_test.test | RUN | 0.184087 | 0.806868 | 0.654414 | 0.003951 | 0.003968 | 0.004040 |
| alloc_basic_test.test | RUN | 0.152311 | 0.571287 | 0.510514 | 0.001660 | 0.001319 | 0.001432 |
| adaptive_pool_test.test | RUN | 2.350065 | 9.144157 | 9.666840 | 0.008771 | 0.007894 | 0.012550 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 1.008× | 1.006×, 1.009× | 1.006× |
| clang | 1.067× | 1.071×, 1.063× | 1.000× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1364 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44362912212).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| adaptive_pool_test.test | 3 | 0.008975s | 0.008225s | 0.009006s | byte equality observed |
| alloc_basic_test.test | 10 | 0.000818s | 0.000821s | 0.000815s | byte equality observed |
| alloc_full_test.test | 8 | 0.002708s | 0.002759s | 0.002873s | byte equality observed |
| allocator_traits_test.test | 10 | 0.000764s | 0.000763s | 0.000742s | byte equality observed |
| boost_iterator_comp_test.test | 10 | 0.000781s | 0.000778s | 0.000797s | byte equality observed |
| common_iterator_test.test | 10 | 0.000364s | 0.000365s | 0.000772s | byte equality observed |
| copy_move_algo_test.test | 10 | 0.001166s | 0.000896s | 0.000989s | byte equality observed |
| deque_options_test.test | 10 | 0.000836s | 0.000839s | 0.000825s | byte equality observed |
| deque_test.test | 1 | 0.375491s | 0.369910s | 0.445478s | byte equality observed |
| devector_options_test.test | 10 | 0.000889s | 0.000843s | 0.000835s | byte equality observed |
| devector_test.test | 6 | 0.002871s | 0.002781s | 0.003594s | byte equality observed |
| explicit_inst_deque_test.test | 10 | 0.000702s | 0.000714s | 0.000703s | byte equality observed |
| explicit_inst_devector_test.test | 10 | 0.000695s | 0.000721s | 0.000698s | byte equality observed |
| explicit_inst_flat_map_test.test | 10 | 0.000710s | 0.000730s | 0.000725s | byte equality observed |
| explicit_inst_flat_set_test.test | 10 | 0.000706s | 0.000735s | 0.000697s | byte equality observed |
| explicit_inst_list_test.test | 10 | 0.000696s | 0.000728s | 0.000696s | byte equality observed |
| explicit_inst_map_test.test | 10 | 0.000706s | 0.000719s | 0.000705s | byte equality observed |
| explicit_inst_set_test.test | 10 | 0.000699s | 0.000733s | 0.000713s | byte equality observed |
| explicit_inst_slist_test.test | 10 | 0.000714s | 0.000722s | 0.000732s | byte equality observed |
| explicit_inst_small_vector_test.test | 10 | 0.000710s | 0.000719s | 0.000715s | byte equality observed |
| explicit_inst_stable_vector_test.test | 10 | 0.000721s | 0.000724s | 0.000722s | byte equality observed |
| explicit_inst_static_vector_test.test | 10 | 0.000710s | 0.000721s | 0.000711s | byte equality observed |
| explicit_inst_string_test.test | 10 | 0.000721s | 0.000722s | 0.000722s | byte equality observed |
| explicit_inst_vector_test.test | 10 | 0.000724s | 0.000722s | 0.000716s | byte equality observed |
| flat_map_adaptor_test.test | 4 | 0.005660s | 0.005350s | 0.005442s | byte equality observed |
| flat_map_test.test | 4 | 0.006172s | 0.005726s | 0.005510s | byte equality observed |
| flat_set_adaptor_test.test | 4 | 0.005487s | 0.005027s | 0.005319s | byte equality observed |
| flat_set_test.test | 4 | 0.005469s | 0.004843s | 0.005177s | byte equality observed |
| flat_tree_test.test | 10 | 0.000721s | 0.000735s | 0.000723s | byte equality observed |
| global_resource_test.test | 10 | 0.000749s | 0.000757s | 0.000751s | byte equality observed |
| hub_api_test.test | 8 | 0.002532s | 0.002226s | 0.002174s | byte equality observed |
| hub_empty_sort_test.test | 10 | 0.000725s | 0.000735s | 0.000737s | byte equality observed |
| hub_exception_safety_test.test | 1 | 0.050140s | 0.056742s | 0.051108s | byte equality observed |
| hub_new_extended_alignment_test.test | 10 | 0.000764s | 0.000823s | 0.000754s | byte equality observed |
| hub_pocxx_test.test | 10 | 0.000756s | 0.000776s | 0.000750s | byte equality observed |
| hub_sort_test.test | 1 | 0.427993s | 0.443155s | 0.409854s | byte equality observed |
| hub_stability_test.test | 10 | 0.000979s | 0.000961s | 0.000981s | byte equality observed |
| hub_uses_allocator_test.test | 10 | 0.000756s | 0.000746s | 0.000769s | byte equality observed |
| insert_vs_emplace_test.test | 10 | 0.000774s | 0.000756s | 0.000775s | byte equality observed |
| is_constructible_test.test | 10 | 0.000346s | 0.000340s | 0.000741s | byte equality observed |
| list_test.test | 2 | 0.015397s | 0.015473s | 0.015921s | byte equality observed |
| map_test.test | 2 | 0.007600s | 0.007341s | 0.007237s | byte equality observed |
| memory_resource_test.test | 10 | 0.000755s | 0.000745s | 0.000771s | byte equality observed |
| monotonic_buffer_resource_test.test | 10 | 0.000757s | 0.000763s | 0.000771s | byte equality observed |
| nest_api_test.test | 10 | 0.001624s | 0.001649s | 0.001660s | byte equality observed |
| nest_test.test | 10 | 0.000786s | 0.000788s | 0.000783s | byte equality observed |
| new_delete_resource_test.test | 10 | 0.001124s | 0.001125s | 0.001141s | byte equality observed |
| node_allocator_test.test | 3 | 0.006609s | 0.006565s | 0.006710s | byte equality observed |
| node_handle_test.test | 10 | 0.000776s | 0.000765s | 0.000763s | byte equality observed |
| null_iterators_test.test | 10 | 0.000743s | 0.000744s | 0.000756s | byte equality observed |
| pair_test.test | 10 | 0.000760s | 0.000748s | 0.000752s | byte equality observed |
| pmr_deque_test.test | 10 | 0.000742s | 0.000724s | 0.000720s | byte equality observed |
| pmr_devector_test.test | 10 | 0.000748s | 0.000748s | 0.000751s | byte equality observed |
| pmr_flat_map_test.test | 10 | 0.000737s | 0.000742s | 0.000749s | byte equality observed |
| pmr_flat_set_test.test | 10 | 0.000743s | 0.000742s | 0.000751s | byte equality observed |
| pmr_hub_test.test | 10 | 0.000737s | 0.000753s | 0.000749s | byte equality observed |
| pmr_list_test.test | 10 | 0.000740s | 0.000752s | 0.000742s | byte equality observed |
| pmr_map_test.test | 10 | 0.000722s | 0.000744s | 0.000742s | byte equality observed |
| pmr_nest_test.test | 10 | 0.000709s | 0.000757s | 0.000739s | byte equality observed |
| pmr_set_test.test | 10 | 0.000749s | 0.000751s | 0.000749s | byte equality observed |
| pmr_slist_test.test | 10 | 0.000731s | 0.000745s | 0.000753s | byte equality observed |
| pmr_small_vector_test.test | 10 | 0.000733s | 0.000735s | 0.000745s | byte equality observed |
| pmr_stable_vector_test.test | 10 | 0.000741s | 0.000734s | 0.000769s | byte equality observed |
| pmr_string_test.test | 10 | 0.000348s | 0.000343s | 0.000777s | byte equality observed |
| pmr_vector_test.test | 10 | 0.000348s | 0.000350s | 0.000810s | byte equality observed |
| polymorphic_allocator_test.test | 10 | 0.000767s | 0.000762s | 0.000786s | byte equality observed |
| resource_adaptor_test.test | 10 | 0.000766s | 0.000760s | 0.000808s | byte equality observed |
| scoped_allocator_adaptor_test.test | 10 | 0.000764s | 0.000759s | 0.000817s | byte equality observed |
| scoped_allocator_usage_test.test | 10 | 0.000768s | 0.000759s | 0.000824s | byte equality observed |
| segtor_options_test.test | 10 | 0.000812s | 0.000801s | 0.000816s | byte equality observed |
| segtor_test.test | 1 | 0.457701s | 0.465227s | 0.496731s | byte equality observed |
| set_test.test | 2 | 0.010689s | 0.009590s | 0.010325s | byte equality observed |
| slist_test.test | 2 | 0.016176s | 0.016140s | 0.015958s | byte equality observed |
| small_vector_options_test.test | 10 | 0.000843s | 0.000834s | 0.000817s | byte equality observed |
| small_vector_test.test | 7 | 0.001693s | 0.001590s | 0.002739s | byte equality observed |
| stable_vector_test.test | 1 | 0.027646s | 0.027988s | 0.028394s | byte equality observed |
| static_vector_options_test.test | 10 | 0.000816s | 0.000792s | 0.000821s | byte equality observed |
| static_vector_test.test | 10 | 0.001067s | 0.000994s | 0.001026s | byte equality observed |
| string_options_test.test | 10 | 0.000788s | 0.000792s | 0.000788s | byte equality observed |
| string_test.test | 3 | 0.009185s | 0.008990s | 0.009307s | byte equality observed |
| string_view_compat_test.test | 10 | 0.000748s | 0.000752s | 0.000746s | byte equality observed |
| synchronized_pool_resource_test.test | 10 | 0.000789s | 0.000772s | 0.000778s | byte equality observed |
| throw_exception_test.test | 10 | 0.000737s | 0.000723s | 0.000742s | byte equality observed |
| tree_test.test | 10 | 0.000738s | 0.000727s | 0.000727s | byte equality observed |
| unsynchronized_pool_resource_test.test | 10 | 0.000781s | 0.000777s | 0.000775s | byte equality observed |
| uses_allocator_construction_test.test | 10 | 0.000743s | 0.000731s | 0.000723s | byte equality observed |
| uses_allocator_test.test | 10 | 0.000342s | 0.000345s | 0.000716s | byte equality observed |
| vector_options_test.test | 10 | 0.000837s | 0.000841s | 0.000841s | byte equality observed |
| vector_test.test | 5 | 0.002964s | 0.002948s | 0.003914s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44362912212).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
