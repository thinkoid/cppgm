# libs/container/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| vector_test.test | RUN | 5.873105 | 29.756961 | 23.966480 | 0.004485 | 0.004454 | 0.005916 |
| vector_options_test.test | RUN | 0.267420 | 1.255331 | 0.962088 | 0.001235 | 0.001479 | 0.001426 |
| uses_allocator_test.test | RUN | 0.042398 | 0.098996 | 0.122318 | 0.000481 | 0.000494 | 0.001151 |
| uses_allocator_construction_test.test | RUN | 0.133174 | 0.377223 | 0.434178 | 0.001199 | 0.001258 | 0.001187 |
| unsynchronized_pool_resource_test.test | RUN | 0.177655 | 1.200360 | 0.580703 | 0.001242 | 0.001359 | 0.001383 |
| tree_test.test | RUN | 0.831401 | 4.491144 | 3.326780 | 0.001163 | 0.001265 | 0.001163 |
| throw_exception_test.test | RUN | 0.095540 | 0.242878 | 0.292345 | 0.001170 | 0.001230 | 0.001090 |
| synchronized_pool_resource_test.test | RUN | 0.174612 | 1.185613 | 0.583225 | 0.001222 | 0.001268 | 0.001387 |
| string_view_compat_test.test | RUN | 0.295758 | 2.403019 | 1.103336 | 0.001213 | 0.001430 | 0.001197 |
| string_test.test | RUN | 1.436708 | 9.276962 | 6.055389 | 0.013449 | 0.013168 | 0.013494 |
| string_options_test.test | RUN | 0.244903 | 1.938246 | 0.989616 | 0.001157 | 0.001335 | 0.001260 |
| static_vector_test.test | RUN | 1.445125 | 7.727469 | 6.293083 | 0.001750 | 0.001813 | 0.001638 |
| static_vector_options_test.test | RUN | 0.165317 | 0.468199 | 0.525741 | 0.001320 | 0.001238 | 0.001253 |
| stable_vector_test.test | RUN | 3.396379 | 16.364262 | 12.326105 | 0.031295 | 0.032364 | 0.032945 |
| small_vector_test.test | RUN | 2.208245 | 11.285222 | 8.938036 | 0.002724 | 0.002626 | 0.004297 |
| small_vector_options_test.test | RUN | 0.302476 | 1.302581 | 1.133121 | 0.001638 | 0.001510 | 0.001421 |
| slist_test.test | RUN | 2.049533 | 10.199685 | 7.901665 | 0.022581 | 0.022891 | 0.022761 |
| set_test.test | RUN | 3.111561 | 19.100031 | 14.209803 | 0.014057 | 0.012818 | 0.013583 |
| segtor_test.test | RUN | 3.979745 | 20.717942 | 15.918145 | 0.744070 | 0.749044 | 0.719512 |
| segtor_options_test.test | RUN | 0.193307 | 0.577732 | 0.684263 | 0.001353 | 0.001399 | 0.001501 |
| scoped_allocator_usage_test.test | RUN | 0.718069 | 3.009374 | 2.660392 | 0.001236 | 0.001328 | 0.001095 |
| scoped_allocator_adaptor_test.test | RUN | 0.300845 | 0.811608 | 1.105534 | 0.001258 | 0.001222 | 0.001278 |
| resource_adaptor_test.test | RUN | 0.154483 | 0.485521 | 0.506517 | 0.001256 | 0.001277 | 0.001283 |
| polymorphic_allocator_test.test | RUN | 0.129047 | 0.391814 | 0.421768 | 0.001323 | 0.001210 | 0.001206 |
| pmr_vector_test.test | RUN | 0.073178 | 0.145555 | 0.217087 | 0.000500 | 0.000489 | 0.001090 |
| pmr_string_test.test | RUN | 0.141239 | 0.307952 | 0.391936 | 0.000524 | 0.000474 | 0.001130 |
| pmr_stable_vector_test.test | RUN | 0.175669 | 0.513204 | 0.604486 | 0.001204 | 0.001138 | 0.001290 |
| pmr_small_vector_test.test | RUN | 0.087796 | 0.199415 | 0.272438 | 0.001137 | 0.001173 | 0.001109 |
| pmr_slist_test.test | RUN | 0.131672 | 0.701297 | 0.595917 | 0.001132 | 0.001209 | 0.001127 |
| pmr_set_test.test | RUN | 0.144066 | 0.338303 | 0.437011 | 0.001168 | 0.001209 | 0.001147 |
| pmr_nest_test.test | RUN | 0.108330 | 0.235131 | 0.294173 | 0.001136 | 0.001231 | 0.001134 |
| pmr_map_test.test | RUN | 0.146990 | 0.347540 | 0.434541 | 0.001172 | 0.001228 | 0.001223 |
| pmr_list_test.test | RUN | 0.094736 | 0.217633 | 0.278914 | 0.001274 | 0.001273 | 0.001239 |
| pmr_hub_test.test | RUN | 0.133529 | 0.301753 | 0.350406 | 0.001114 | 0.001159 | 0.001257 |
| pmr_flat_set_test.test | RUN | 0.106271 | 0.238224 | 0.308698 | 0.001255 | 0.001197 | 0.001278 |
| pmr_flat_map_test.test | RUN | 0.126939 | 0.272930 | 0.359090 | 0.001136 | 0.001258 | 0.001220 |
| pmr_devector_test.test | RUN | 0.084888 | 0.238519 | 0.268266 | 0.001096 | 0.001183 | 0.001169 |
| pmr_deque_test.test | RUN | 0.083281 | 0.198444 | 0.267989 | 0.001138 | 0.001308 | 0.001292 |
| pair_test.test | RUN | 0.202170 | 0.476539 | 0.600018 | 0.001149 | 0.001375 | 0.001226 |
| null_iterators_test.test | RUN | 0.327783 | 0.933872 | 1.026893 | 0.001128 | 0.001246 | 0.001117 |
| node_handle_test.test | RUN | 0.141614 | 1.198984 | 0.427002 | 0.001210 | 0.001360 | 0.001159 |
| node_allocator_test.test | RUN | 2.310011 | 12.563408 | 9.535230 | 0.009267 | 0.009045 | 0.009185 |
| new_delete_resource_test.test | RUN | 0.171243 | 0.718460 | 0.584942 | 0.001623 | 0.001974 | 0.001825 |
| nest_test.test | RUN | 0.489976 | 3.400185 | 2.125111 | 0.001547 | 0.001483 | 0.001326 |
| nest_api_test.test | RUN | 0.839637 | 6.584104 | 4.146404 | 0.002146 | 0.002435 | 0.002330 |
| monotonic_buffer_resource_test.test | RUN | 0.177236 | 1.315954 | 0.597436 | 0.001314 | 0.001368 | 0.001286 |
| memory_resource_test.test | RUN | 0.102809 | 0.362233 | 0.340641 | 0.001305 | 0.001275 | 0.001323 |
| map_test.test | RUN | 4.247086 | 21.549438 | 20.197997 | 0.010665 | 0.010170 | 0.009894 |
| list_test.test | RUN | 2.173594 | 11.076208 | 8.422286 | 0.022599 | 0.022061 | 0.022598 |
| is_constructible_test.test | RUN | 0.062670 | 0.127611 | 0.190757 | 0.000501 | 0.000536 | 0.001124 |
| insert_vs_emplace_test.test | RUN | 0.211988 | 0.851399 | 1.116970 | 0.001191 | 0.001505 | 0.001253 |
| hub_uses_allocator_test.test | RUN | 0.230400 | 0.727453 | 0.786028 | 0.001125 | 0.001344 | 0.001161 |
| hub_stability_test.test | RUN | 0.531659 | 3.435903 | 2.872176 | 0.001558 | 0.001586 | 0.001551 |
| hub_sort_test.test | RUN | 0.333108 | 1.549749 | 1.361371 | 0.531042 | 0.537291 | 0.500816 |
| hub_pocxx_test.test | RUN | 0.306599 | 1.814447 | 1.001760 | 0.001173 | 0.001258 | 0.001184 |
| hub_new_extended_alignment_test.test | RUN | 0.163280 | 0.523830 | 0.533917 | 0.001249 | 0.001347 | 0.001281 |
| hub_exception_safety_test.test | RUN | 0.645389 | 4.383056 | 2.859262 | 0.064516 | 0.068741 | 0.064902 |
| hub_empty_sort_test.test | RUN | 0.181298 | 0.489822 | 0.623743 | 0.001355 | 0.001229 | 0.001190 |
| hub_api_test.test | RUN | 2.171044 | 17.319956 | 8.961907 | 0.003466 | 0.003241 | 0.003138 |
| global_resource_test.test | RUN | 0.101418 | 0.330077 | 0.324710 | 0.001415 | 0.001420 | 0.001322 |
| flat_tree_test.test | RUN | 4.005257 | 27.158567 | 17.696757 | 0.001257 | 0.001325 | 0.001274 |
| flat_set_test.test | RUN | 5.036320 | 34.376348 | 22.934572 | 0.007395 | 0.006643 | 0.007232 |
| flat_set_adaptor_test.test | RUN | 3.719286 | 30.347347 | 17.737282 | 0.007490 | 0.006797 | 0.007149 |
| flat_map_test.test | RUN | 8.129157 | 51.520855 | 37.466991 | 0.008491 | 0.008258 | 0.007833 |
| flat_map_adaptor_test.test | RUN | 5.121576 | 37.266937 | 26.227832 | 0.006598 | 0.007418 | 0.007656 |
| explicit_inst_vector_test.test | RUN | 0.784148 | 5.044757 | 3.914941 | 0.001140 | 0.001300 | 0.001148 |
| explicit_inst_string_test.test | RUN | 1.058491 | 8.958597 | 5.412625 | 0.001217 | 0.001343 | 0.001257 |
| explicit_inst_static_vector_test.test | RUN | 0.093890 | 0.316240 | 0.360728 | 0.001096 | 0.001139 | 0.001178 |
| explicit_inst_stable_vector_test.test | RUN | 0.621969 | 3.150034 | 2.499136 | 0.001180 | 0.001287 | 0.001419 |
| explicit_inst_small_vector_test.test | RUN | 0.511727 | 2.882103 | 2.337749 | 0.001200 | 0.001318 | 0.001343 |
| explicit_inst_slist_test.test | RUN | 0.396027 | 2.608153 | 1.807918 | 0.001222 | 0.001363 | 0.001141 |
| explicit_inst_set_test.test | RUN | 0.545951 | 3.019580 | 2.055462 | 0.001194 | 0.001404 | 0.001234 |
| explicit_inst_map_test.test | RUN | 0.600531 | 3.155057 | 2.254729 | 0.001220 | 0.001409 | 0.001260 |
| explicit_inst_list_test.test | RUN | 0.133979 | 0.722373 | 0.582858 | 0.001275 | 0.001392 | 0.001179 |
| explicit_inst_flat_set_test.test | RUN | 3.296156 | 22.885426 | 13.583624 | 0.001157 | 0.001377 | 0.001156 |
| explicit_inst_flat_map_test.test | RUN | 3.562872 | 23.950382 | 15.169853 | 0.001135 | 0.001233 | 0.001084 |
| explicit_inst_devector_test.test | RUN | 0.429959 | 2.812279 | 1.871278 | 0.001192 | 0.001321 | 0.001216 |
| explicit_inst_deque_test.test | RUN | 0.442363 | 3.041681 | 2.039164 | 0.001334 | 0.001304 | 0.001308 |
| devector_test.test | RUN | 6.373943 | 37.176260 | 27.184686 | 0.003112 | 0.002969 | 0.003722 |
| devector_options_test.test | RUN | 0.274286 | 1.668103 | 1.095901 | 0.001410 | 0.001405 | 0.001539 |
| deque_test.test | RUN | 4.246743 | 22.242915 | 16.412435 | 0.362123 | 0.359237 | 0.435503 |
| deque_options_test.test | RUN | 0.194436 | 0.602888 | 0.719197 | 0.001217 | 0.001450 | 0.001333 |
| copy_move_algo_test.test | RUN | 0.190299 | 0.718734 | 0.654826 | 0.001493 | 0.001296 | 0.001432 |
| common_iterator_test.test | RUN | 0.013188 | 0.035213 | 0.037330 | 0.000449 | 0.000498 | 0.001243 |
| boost_iterator_comp_test.test | RUN | 0.272730 | 0.841005 | 1.007120 | 0.001056 | 0.001243 | 0.001323 |
| allocator_traits_test.test | RUN | 0.154528 | 0.375322 | 0.462268 | 0.001035 | 0.001200 | 0.001204 |
| alloc_full_test.test | RUN | 0.181751 | 0.806248 | 0.696417 | 0.003794 | 0.004070 | 0.004005 |
| alloc_basic_test.test | RUN | 0.152497 | 0.565756 | 0.504662 | 0.001290 | 0.001304 | 0.001399 |
| adaptive_pool_test.test | RUN | 1.720260 | 9.240299 | 6.559164 | 0.008782 | 0.007898 | 0.008751 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 1.014× | 1.013×, 1.015× | 1.000× |
| clang | 1.061× | 1.063×, 1.060× | 1.002× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1364 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44402206984).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| adaptive_pool_test.test | 3 | 0.009166s | 0.008201s | 0.009136s | byte equality observed |
| alloc_basic_test.test | 10 | 0.000793s | 0.000810s | 0.000790s | byte equality observed |
| alloc_full_test.test | 8 | 0.002711s | 0.002779s | 0.002914s | byte equality observed |
| allocator_traits_test.test | 10 | 0.000769s | 0.000758s | 0.000769s | byte equality observed |
| boost_iterator_comp_test.test | 10 | 0.000791s | 0.000760s | 0.000771s | byte equality observed |
| common_iterator_test.test | 10 | 0.000360s | 0.000350s | 0.000786s | byte equality observed |
| copy_move_algo_test.test | 10 | 0.001170s | 0.000897s | 0.001000s | byte equality observed |
| deque_options_test.test | 10 | 0.000841s | 0.000825s | 0.000805s | byte equality observed |
| deque_test.test | 1 | 0.372559s | 0.371545s | 0.441931s | byte equality observed |
| devector_options_test.test | 10 | 0.000894s | 0.000831s | 0.000843s | byte equality observed |
| devector_test.test | 5 | 0.002873s | 0.002780s | 0.003622s | byte equality observed |
| explicit_inst_deque_test.test | 10 | 0.000719s | 0.000719s | 0.000719s | byte equality observed |
| explicit_inst_devector_test.test | 10 | 0.000701s | 0.000705s | 0.000716s | byte equality observed |
| explicit_inst_flat_map_test.test | 10 | 0.000714s | 0.000721s | 0.000728s | byte equality observed |
| explicit_inst_flat_set_test.test | 10 | 0.000710s | 0.000719s | 0.000717s | byte equality observed |
| explicit_inst_list_test.test | 10 | 0.000709s | 0.000704s | 0.000714s | byte equality observed |
| explicit_inst_map_test.test | 10 | 0.000718s | 0.000713s | 0.000720s | byte equality observed |
| explicit_inst_set_test.test | 10 | 0.000710s | 0.000701s | 0.000727s | byte equality observed |
| explicit_inst_slist_test.test | 10 | 0.000707s | 0.000711s | 0.000723s | byte equality observed |
| explicit_inst_small_vector_test.test | 10 | 0.000711s | 0.000717s | 0.000720s | byte equality observed |
| explicit_inst_stable_vector_test.test | 10 | 0.000722s | 0.000719s | 0.000702s | byte equality observed |
| explicit_inst_static_vector_test.test | 10 | 0.000700s | 0.000708s | 0.000712s | byte equality observed |
| explicit_inst_string_test.test | 10 | 0.000712s | 0.000722s | 0.000725s | byte equality observed |
| explicit_inst_vector_test.test | 10 | 0.000713s | 0.000721s | 0.000720s | byte equality observed |
| flat_map_adaptor_test.test | 4 | 0.005664s | 0.005340s | 0.005380s | byte equality observed |
| flat_map_test.test | 4 | 0.006152s | 0.005704s | 0.005491s | byte equality observed |
| flat_set_adaptor_test.test | 4 | 0.005504s | 0.004984s | 0.005298s | byte equality observed |
| flat_set_test.test | 4 | 0.005450s | 0.004791s | 0.005169s | byte equality observed |
| flat_tree_test.test | 10 | 0.000732s | 0.000716s | 0.000737s | byte equality observed |
| global_resource_test.test | 10 | 0.000750s | 0.000743s | 0.000754s | byte equality observed |
| hub_api_test.test | 8 | 0.002531s | 0.002212s | 0.002160s | byte equality observed |
| hub_empty_sort_test.test | 10 | 0.000733s | 0.000733s | 0.000733s | byte equality observed |
| hub_exception_safety_test.test | 1 | 0.052826s | 0.054420s | 0.053803s | byte equality observed |
| hub_new_extended_alignment_test.test | 10 | 0.000795s | 0.000745s | 0.000819s | byte equality observed |
| hub_pocxx_test.test | 10 | 0.000763s | 0.000756s | 0.000764s | byte equality observed |
| hub_sort_test.test | 1 | 0.424428s | 0.440888s | 0.412234s | byte equality observed |
| hub_stability_test.test | 10 | 0.000973s | 0.000957s | 0.001026s | byte equality observed |
| hub_uses_allocator_test.test | 10 | 0.000744s | 0.000738s | 0.000767s | byte equality observed |
| insert_vs_emplace_test.test | 10 | 0.000758s | 0.000739s | 0.000748s | byte equality observed |
| is_constructible_test.test | 10 | 0.000342s | 0.000324s | 0.000732s | byte equality observed |
| list_test.test | 2 | 0.015658s | 0.015709s | 0.016158s | byte equality observed |
| map_test.test | 3 | 0.007569s | 0.007296s | 0.007211s | byte equality observed |
| memory_resource_test.test | 10 | 0.000761s | 0.000741s | 0.000780s | byte equality observed |
| monotonic_buffer_resource_test.test | 10 | 0.000762s | 0.000745s | 0.000764s | byte equality observed |
| nest_api_test.test | 10 | 0.001636s | 0.001635s | 0.001649s | byte equality observed |
| nest_test.test | 10 | 0.000790s | 0.000760s | 0.000786s | byte equality observed |
| new_delete_resource_test.test | 10 | 0.001128s | 0.001113s | 0.001141s | byte equality observed |
| node_allocator_test.test | 3 | 0.006659s | 0.006580s | 0.006659s | byte equality observed |
| node_handle_test.test | 10 | 0.000755s | 0.000769s | 0.000771s | byte equality observed |
| null_iterators_test.test | 10 | 0.000750s | 0.000764s | 0.000747s | byte equality observed |
| pair_test.test | 10 | 0.000752s | 0.000743s | 0.000760s | byte equality observed |
| pmr_deque_test.test | 10 | 0.000726s | 0.000717s | 0.000728s | byte equality observed |
| pmr_devector_test.test | 10 | 0.000736s | 0.000732s | 0.000726s | byte equality observed |
| pmr_flat_map_test.test | 10 | 0.000737s | 0.000725s | 0.000733s | byte equality observed |
| pmr_flat_set_test.test | 10 | 0.000738s | 0.000716s | 0.000724s | byte equality observed |
| pmr_hub_test.test | 10 | 0.000735s | 0.000717s | 0.000747s | byte equality observed |
| pmr_list_test.test | 10 | 0.000730s | 0.000717s | 0.000745s | byte equality observed |
| pmr_map_test.test | 10 | 0.000726s | 0.000710s | 0.000731s | byte equality observed |
| pmr_nest_test.test | 10 | 0.000733s | 0.000726s | 0.000715s | byte equality observed |
| pmr_set_test.test | 10 | 0.000729s | 0.000732s | 0.000723s | byte equality observed |
| pmr_slist_test.test | 10 | 0.000720s | 0.000731s | 0.000723s | byte equality observed |
| pmr_small_vector_test.test | 10 | 0.000725s | 0.000727s | 0.000715s | byte equality observed |
| pmr_stable_vector_test.test | 10 | 0.000725s | 0.000730s | 0.000731s | byte equality observed |
| pmr_string_test.test | 10 | 0.000341s | 0.000348s | 0.000725s | byte equality observed |
| pmr_vector_test.test | 10 | 0.000347s | 0.000344s | 0.000765s | byte equality observed |
| polymorphic_allocator_test.test | 10 | 0.000756s | 0.000749s | 0.000796s | byte equality observed |
| resource_adaptor_test.test | 10 | 0.000768s | 0.000755s | 0.000805s | byte equality observed |
| scoped_allocator_adaptor_test.test | 10 | 0.000751s | 0.000733s | 0.000796s | byte equality observed |
| scoped_allocator_usage_test.test | 10 | 0.000759s | 0.000737s | 0.000815s | byte equality observed |
| segtor_options_test.test | 10 | 0.000800s | 0.000791s | 0.000791s | byte equality observed |
| segtor_test.test | 1 | 0.457961s | 0.461553s | 0.494205s | byte equality observed |
| set_test.test | 2 | 0.010627s | 0.009498s | 0.010279s | byte equality observed |
| slist_test.test | 2 | 0.016412s | 0.016131s | 0.016251s | byte equality observed |
| small_vector_options_test.test | 10 | 0.000842s | 0.000812s | 0.000823s | byte equality observed |
| small_vector_test.test | 7 | 0.001682s | 0.001575s | 0.002738s | byte equality observed |
| stable_vector_test.test | 1 | 0.027523s | 0.027820s | 0.028393s | byte equality observed |
| static_vector_options_test.test | 10 | 0.000802s | 0.000755s | 0.000793s | byte equality observed |
| static_vector_test.test | 10 | 0.001059s | 0.000958s | 0.001017s | byte equality observed |
| string_options_test.test | 10 | 0.000760s | 0.000792s | 0.000779s | byte equality observed |
| string_test.test | 3 | 0.009125s | 0.008931s | 0.009257s | byte equality observed |
| string_view_compat_test.test | 10 | 0.000744s | 0.000740s | 0.000742s | byte equality observed |
| synchronized_pool_resource_test.test | 10 | 0.000775s | 0.000772s | 0.000776s | byte equality observed |
| throw_exception_test.test | 10 | 0.000726s | 0.000725s | 0.000734s | byte equality observed |
| tree_test.test | 10 | 0.000728s | 0.000719s | 0.000735s | byte equality observed |
| unsynchronized_pool_resource_test.test | 10 | 0.000784s | 0.000757s | 0.000780s | byte equality observed |
| uses_allocator_construction_test.test | 10 | 0.000711s | 0.000712s | 0.000726s | byte equality observed |
| uses_allocator_test.test | 10 | 0.000335s | 0.000328s | 0.000717s | byte equality observed |
| vector_options_test.test | 10 | 0.000840s | 0.000842s | 0.000840s | byte equality observed |
| vector_test.test | 5 | 0.002948s | 0.002947s | 0.003933s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44402206984).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
