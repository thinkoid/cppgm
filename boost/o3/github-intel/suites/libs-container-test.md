# libs/container/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| vector_test.test | RUN | 5.991892 | 30.620632 | 24.325873 | 0.004866 | 0.004274 | 0.006115 |
| vector_options_test.test | RUN | 0.267870 | 1.309950 | 0.977220 | 0.001637 | 0.001646 | 0.001405 |
| uses_allocator_test.test | RUN | 0.046482 | 0.099901 | 0.121285 | 0.000507 | 0.000566 | 0.001278 |
| uses_allocator_construction_test.test | RUN | 0.142046 | 0.382470 | 0.435253 | 0.001225 | 0.001452 | 0.001274 |
| unsynchronized_pool_resource_test.test | RUN | 0.191250 | 1.219199 | 0.585405 | 0.001413 | 0.001580 | 0.001254 |
| tree_test.test | RUN | 0.875567 | 4.569496 | 3.436768 | 0.001323 | 0.001540 | 0.001261 |
| throw_exception_test.test | RUN | 0.088763 | 0.248047 | 0.294596 | 0.001193 | 0.001388 | 0.001161 |
| synchronized_pool_resource_test.test | RUN | 0.185917 | 1.202553 | 0.577208 | 0.001350 | 0.001494 | 0.001340 |
| string_view_compat_test.test | RUN | 0.305710 | 2.427346 | 1.136164 | 0.001315 | 0.001448 | 0.001237 |
| string_test.test | RUN | 1.479465 | 9.515144 | 6.420722 | 0.013159 | 0.012997 | 0.013595 |
| string_options_test.test | RUN | 0.251160 | 1.954181 | 0.900927 | 0.001420 | 0.001693 | 0.001373 |
| static_vector_test.test | RUN | 1.493633 | 7.921147 | 6.433712 | 0.001857 | 0.001792 | 0.001713 |
| static_vector_options_test.test | RUN | 0.177682 | 0.476122 | 0.553967 | 0.001377 | 0.001472 | 0.001415 |
| stable_vector_test.test | RUN | 3.480166 | 16.812109 | 12.645724 | 0.031529 | 0.032935 | 0.032811 |
| small_vector_test.test | RUN | 2.297551 | 11.725878 | 9.064710 | 0.002936 | 0.002748 | 0.004467 |
| small_vector_options_test.test | RUN | 0.315655 | 1.334469 | 1.120840 | 0.001480 | 0.001481 | 0.001423 |
| slist_test.test | RUN | 2.108556 | 10.550345 | 7.957367 | 0.022247 | 0.022888 | 0.023432 |
| set_test.test | RUN | 3.273867 | 19.696438 | 14.558832 | 0.014088 | 0.013050 | 0.013937 |
| segtor_test.test | RUN | 4.083714 | 21.453955 | 16.081388 | 0.705366 | 0.739396 | 0.716504 |
| segtor_options_test.test | RUN | 0.206645 | 0.572708 | 0.682265 | 0.001572 | 0.001754 | 0.001328 |
| scoped_allocator_usage_test.test | RUN | 0.740118 | 3.132009 | 2.654838 | 0.001240 | 0.001413 | 0.001445 |
| scoped_allocator_adaptor_test.test | RUN | 0.306004 | 0.856051 | 1.146821 | 0.001153 | 0.001550 | 0.001350 |
| resource_adaptor_test.test | RUN | 0.164150 | 0.484166 | 0.502771 | 0.001345 | 0.001294 | 0.001239 |
| polymorphic_allocator_test.test | RUN | 0.132880 | 0.402144 | 0.417562 | 0.001265 | 0.001520 | 0.001356 |
| pmr_vector_test.test | RUN | 0.073901 | 0.148934 | 0.204806 | 0.000519 | 0.000609 | 0.001250 |
| pmr_string_test.test | RUN | 0.150214 | 0.317340 | 0.401181 | 0.000561 | 0.000662 | 0.001250 |
| pmr_stable_vector_test.test | RUN | 0.177043 | 0.535252 | 0.597188 | 0.001230 | 0.001264 | 0.000932 |
| pmr_small_vector_test.test | RUN | 0.090553 | 0.205995 | 0.277793 | 0.001182 | 0.001425 | 0.001154 |
| pmr_slist_test.test | RUN | 0.133290 | 0.710588 | 0.596202 | 0.001358 | 0.001494 | 0.001315 |
| pmr_set_test.test | RUN | 0.142261 | 0.354852 | 0.433320 | 0.001182 | 0.001530 | 0.001067 |
| pmr_nest_test.test | RUN | 0.110446 | 0.227328 | 0.297005 | 0.001371 | 0.001331 | 0.001390 |
| pmr_map_test.test | RUN | 0.153680 | 0.367112 | 0.440454 | 0.001247 | 0.001232 | 0.001323 |
| pmr_list_test.test | RUN | 0.098422 | 0.224080 | 0.284745 | 0.001229 | 0.001331 | 0.001218 |
| pmr_hub_test.test | RUN | 0.138698 | 0.306880 | 0.358238 | 0.001217 | 0.001255 | 0.001272 |
| pmr_flat_set_test.test | RUN | 0.107365 | 0.241359 | 0.312723 | 0.001383 | 0.001604 | 0.001141 |
| pmr_flat_map_test.test | RUN | 0.129063 | 0.281290 | 0.365867 | 0.001197 | 0.001200 | 0.001063 |
| pmr_devector_test.test | RUN | 0.084621 | 0.245413 | 0.277191 | 0.001171 | 0.001543 | 0.001103 |
| pmr_deque_test.test | RUN | 0.085439 | 0.205538 | 0.279458 | 0.001182 | 0.001371 | 0.001258 |
| pair_test.test | RUN | 0.211071 | 0.496081 | 0.612509 | 0.001204 | 0.001670 | 0.001389 |
| null_iterators_test.test | RUN | 0.333401 | 0.970753 | 1.030297 | 0.001285 | 0.001426 | 0.001406 |
| node_handle_test.test | RUN | 0.145841 | 1.224538 | 0.424525 | 0.001187 | 0.001597 | 0.001371 |
| node_allocator_test.test | RUN | 2.405217 | 12.967257 | 10.073513 | 0.009593 | 0.008944 | 0.009591 |
| new_delete_resource_test.test | RUN | 0.170161 | 0.727873 | 0.588313 | 0.001951 | 0.002050 | 0.001853 |
| nest_test.test | RUN | 0.506005 | 3.484676 | 2.093193 | 0.001207 | 0.001650 | 0.001511 |
| nest_api_test.test | RUN | 0.856297 | 6.733718 | 4.039031 | 0.002528 | 0.002678 | 0.002265 |
| monotonic_buffer_resource_test.test | RUN | 0.186443 | 1.344368 | 0.602225 | 0.001173 | 0.001530 | 0.001431 |
| memory_resource_test.test | RUN | 0.106520 | 0.370545 | 0.345464 | 0.001395 | 0.001589 | 0.001298 |
| map_test.test | RUN | 4.399829 | 22.217176 | 20.870275 | 0.010735 | 0.010287 | 0.010021 |
| list_test.test | RUN | 2.262596 | 11.455359 | 8.589036 | 0.022734 | 0.022746 | 0.022571 |
| is_constructible_test.test | RUN | 0.066394 | 0.121514 | 0.172403 | 0.000531 | 0.000679 | 0.001243 |
| insert_vs_emplace_test.test | RUN | 0.217426 | 0.877275 | 1.157675 | 0.001384 | 0.001614 | 0.001272 |
| hub_uses_allocator_test.test | RUN | 0.243003 | 0.754066 | 0.783916 | 0.001304 | 0.001459 | 0.001315 |
| hub_stability_test.test | RUN | 0.551378 | 3.586765 | 2.899583 | 0.001586 | 0.001990 | 0.001472 |
| hub_sort_test.test | RUN | 0.350339 | 1.596214 | 1.409480 | 0.528636 | 0.562102 | 0.503962 |
| hub_pocxx_test.test | RUN | 0.298466 | 1.885307 | 1.024207 | 0.001300 | 0.001471 | 0.001227 |
| hub_new_extended_alignment_test.test | RUN | 0.167458 | 0.567310 | 0.546540 | 0.001257 | 0.001595 | 0.001430 |
| hub_exception_safety_test.test | RUN | 0.653347 | 4.551325 | 2.937440 | 0.067331 | 0.077537 | 0.073239 |
| hub_empty_sort_test.test | RUN | 0.186857 | 0.504911 | 0.607415 | 0.001156 | 0.001455 | 0.001329 |
| hub_api_test.test | RUN | 2.215900 | 17.980870 | 9.512705 | 0.003672 | 0.003608 | 0.003226 |
| global_resource_test.test | RUN | 0.100472 | 0.342310 | 0.310811 | 0.001477 | 0.001390 | 0.001195 |
| flat_tree_test.test | RUN | 4.078795 | 27.916323 | 17.969733 | 0.001263 | 0.001525 | 0.001376 |
| flat_set_test.test | RUN | 5.159603 | 35.523825 | 23.529864 | 0.007672 | 0.007108 | 0.007273 |
| flat_set_adaptor_test.test | RUN | 3.810729 | 30.926191 | 18.319396 | 0.007657 | 0.007157 | 0.007657 |
| flat_map_test.test | RUN | 8.313838 | 52.780177 | 38.402281 | 0.009143 | 0.008223 | 0.007817 |
| flat_map_adaptor_test.test | RUN | 5.223229 | 38.064352 | 26.814685 | 0.008130 | 0.007985 | 0.007801 |
| explicit_inst_vector_test.test | RUN | 0.801171 | 5.128662 | 4.106887 | 0.001339 | 0.001422 | 0.001361 |
| explicit_inst_string_test.test | RUN | 1.089020 | 9.050406 | 5.790667 | 0.001528 | 0.001479 | 0.001359 |
| explicit_inst_static_vector_test.test | RUN | 0.099619 | 0.329190 | 0.383646 | 0.001424 | 0.001374 | 0.001460 |
| explicit_inst_stable_vector_test.test | RUN | 0.640723 | 3.262482 | 2.663101 | 0.001298 | 0.001385 | 0.001535 |
| explicit_inst_small_vector_test.test | RUN | 0.539115 | 2.938284 | 2.360167 | 0.001418 | 0.001370 | 0.001408 |
| explicit_inst_slist_test.test | RUN | 0.409382 | 2.674555 | 1.837688 | 0.001294 | 0.001489 | 0.001573 |
| explicit_inst_set_test.test | RUN | 0.588722 | 3.070050 | 2.157290 | 0.001407 | 0.001438 | 0.001579 |
| explicit_inst_map_test.test | RUN | 0.641266 | 3.188968 | 2.370859 | 0.001304 | 0.001567 | 0.001540 |
| explicit_inst_list_test.test | RUN | 0.137429 | 0.724798 | 0.597078 | 0.001240 | 0.001466 | 0.001418 |
| explicit_inst_flat_set_test.test | RUN | 3.368828 | 23.191613 | 14.039236 | 0.001218 | 0.001539 | 0.001506 |
| explicit_inst_flat_map_test.test | RUN | 3.682010 | 24.399801 | 15.612131 | 0.001246 | 0.001219 | 0.001229 |
| explicit_inst_devector_test.test | RUN | 0.439267 | 2.908123 | 1.926284 | 0.001285 | 0.001279 | 0.001298 |
| explicit_inst_deque_test.test | RUN | 0.462304 | 3.146815 | 2.062221 | 0.001288 | 0.001342 | 0.001156 |
| devector_test.test | RUN | 6.115293 | 38.338597 | 26.705900 | 0.003332 | 0.003355 | 0.003967 |
| devector_options_test.test | RUN | 0.279508 | 1.704531 | 1.114723 | 0.001524 | 0.001704 | 0.001580 |
| deque_test.test | RUN | 4.545306 | 22.705048 | 18.449305 | 0.471978 | 0.360861 | 0.436497 |
| deque_options_test.test | RUN | 0.205543 | 0.620584 | 0.735874 | 0.001388 | 0.001598 | 0.001641 |
| copy_move_algo_test.test | RUN | 0.194794 | 0.728581 | 0.601101 | 0.001625 | 0.001392 | 0.001528 |
| common_iterator_test.test | RUN | 0.013335 | 0.035512 | 0.038878 | 0.000512 | 0.000537 | 0.001375 |
| boost_iterator_comp_test.test | RUN | 0.282403 | 0.890378 | 1.033909 | 0.001259 | 0.001258 | 0.001502 |
| allocator_traits_test.test | RUN | 0.161246 | 0.379341 | 0.481755 | 0.001221 | 0.001460 | 0.001460 |
| alloc_full_test.test | RUN | 0.187984 | 0.825556 | 0.734111 | 0.004084 | 0.004231 | 0.004280 |
| alloc_basic_test.test | RUN | 0.156253 | 0.558318 | 0.533810 | 0.001378 | 0.001545 | 0.001489 |
| adaptive_pool_test.test | RUN | 2.466120 | 9.448641 | 10.147839 | 0.008879 | 0.008162 | 0.013057 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 1.014× | 1.011×, 1.018× | 1.001× |
| clang | 1.073× | 1.069×, 1.077× | 1.005× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1364 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/43740486413).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| adaptive_pool_test.test | 3 | 0.008964s | 0.008114s | 0.009187s | byte equality observed |
| alloc_basic_test.test | 10 | 0.000837s | 0.000830s | 0.000814s | byte equality observed |
| alloc_full_test.test | 8 | 0.002693s | 0.002709s | 0.002873s | byte equality observed |
| allocator_traits_test.test | 10 | 0.000767s | 0.000751s | 0.000785s | byte equality observed |
| boost_iterator_comp_test.test | 10 | 0.000786s | 0.000794s | 0.000801s | byte equality observed |
| common_iterator_test.test | 10 | 0.000361s | 0.000354s | 0.000817s | byte equality observed |
| copy_move_algo_test.test | 10 | 0.001169s | 0.000904s | 0.001015s | byte equality observed |
| deque_options_test.test | 10 | 0.000841s | 0.000854s | 0.000833s | byte equality observed |
| deque_test.test | 1 | 0.372112s | 0.372094s | 0.445722s | byte equality observed |
| devector_options_test.test | 10 | 0.000899s | 0.000824s | 0.000838s | byte equality observed |
| devector_test.test | 5 | 0.002879s | 0.002775s | 0.003614s | byte equality observed |
| explicit_inst_deque_test.test | 10 | 0.000718s | 0.000707s | 0.000705s | byte equality observed |
| explicit_inst_devector_test.test | 10 | 0.000713s | 0.000703s | 0.000710s | byte equality observed |
| explicit_inst_flat_map_test.test | 10 | 0.000715s | 0.000710s | 0.000712s | byte equality observed |
| explicit_inst_flat_set_test.test | 10 | 0.000716s | 0.000710s | 0.000705s | byte equality observed |
| explicit_inst_list_test.test | 10 | 0.000713s | 0.000706s | 0.000705s | byte equality observed |
| explicit_inst_map_test.test | 10 | 0.000720s | 0.000714s | 0.000707s | byte equality observed |
| explicit_inst_set_test.test | 10 | 0.000726s | 0.000714s | 0.000724s | byte equality observed |
| explicit_inst_slist_test.test | 10 | 0.000730s | 0.000720s | 0.000718s | byte equality observed |
| explicit_inst_small_vector_test.test | 10 | 0.000732s | 0.000724s | 0.000727s | byte equality observed |
| explicit_inst_stable_vector_test.test | 10 | 0.000717s | 0.000702s | 0.000723s | byte equality observed |
| explicit_inst_static_vector_test.test | 10 | 0.000722s | 0.000698s | 0.000723s | byte equality observed |
| explicit_inst_string_test.test | 10 | 0.000726s | 0.000719s | 0.000725s | byte equality observed |
| explicit_inst_vector_test.test | 10 | 0.000722s | 0.000708s | 0.000732s | byte equality observed |
| flat_map_adaptor_test.test | 4 | 0.005698s | 0.005332s | 0.005491s | byte equality observed |
| flat_map_test.test | 4 | 0.006174s | 0.005717s | 0.005530s | byte equality observed |
| flat_set_adaptor_test.test | 4 | 0.005526s | 0.004990s | 0.005345s | byte equality observed |
| flat_set_test.test | 4 | 0.005478s | 0.004841s | 0.005211s | byte equality observed |
| flat_tree_test.test | 10 | 0.000735s | 0.000716s | 0.000739s | byte equality observed |
| global_resource_test.test | 10 | 0.000762s | 0.000742s | 0.000757s | byte equality observed |
| hub_api_test.test | 8 | 0.002563s | 0.002218s | 0.002175s | byte equality observed |
| hub_empty_sort_test.test | 10 | 0.000737s | 0.000726s | 0.000726s | byte equality observed |
| hub_exception_safety_test.test | 1 | 0.052800s | 0.056549s | 0.058288s | byte equality observed |
| hub_new_extended_alignment_test.test | 10 | 0.000796s | 0.000807s | 0.000825s | byte equality observed |
| hub_pocxx_test.test | 10 | 0.000763s | 0.000772s | 0.000756s | byte equality observed |
| hub_sort_test.test | 1 | 0.429198s | 0.442986s | 0.416268s | byte equality observed |
| hub_stability_test.test | 10 | 0.000966s | 0.000982s | 0.001032s | byte equality observed |
| hub_uses_allocator_test.test | 10 | 0.000749s | 0.000739s | 0.000749s | byte equality observed |
| insert_vs_emplace_test.test | 10 | 0.000762s | 0.000772s | 0.000773s | byte equality observed |
| is_constructible_test.test | 10 | 0.000345s | 0.000345s | 0.000729s | byte equality observed |
| list_test.test | 2 | 0.015453s | 0.015495s | 0.016067s | byte equality observed |
| map_test.test | 3 | 0.007582s | 0.007321s | 0.007261s | byte equality observed |
| memory_resource_test.test | 10 | 0.000757s | 0.000760s | 0.000775s | byte equality observed |
| monotonic_buffer_resource_test.test | 10 | 0.000765s | 0.000765s | 0.000766s | byte equality observed |
| nest_api_test.test | 10 | 0.001642s | 0.001646s | 0.001666s | byte equality observed |
| nest_test.test | 10 | 0.000784s | 0.000790s | 0.000795s | byte equality observed |
| new_delete_resource_test.test | 10 | 0.001141s | 0.001133s | 0.001126s | byte equality observed |
| node_allocator_test.test | 3 | 0.006677s | 0.006548s | 0.006788s | byte equality observed |
| node_handle_test.test | 10 | 0.000772s | 0.000758s | 0.000759s | byte equality observed |
| null_iterators_test.test | 10 | 0.000765s | 0.000744s | 0.000764s | byte equality observed |
| pair_test.test | 10 | 0.000751s | 0.000746s | 0.000753s | byte equality observed |
| pmr_deque_test.test | 10 | 0.000724s | 0.000723s | 0.000732s | byte equality observed |
| pmr_devector_test.test | 10 | 0.000740s | 0.000729s | 0.000739s | byte equality observed |
| pmr_flat_map_test.test | 10 | 0.000728s | 0.000727s | 0.000731s | byte equality observed |
| pmr_flat_set_test.test | 10 | 0.000743s | 0.000732s | 0.000751s | byte equality observed |
| pmr_hub_test.test | 10 | 0.000744s | 0.000750s | 0.000753s | byte equality observed |
| pmr_list_test.test | 10 | 0.000739s | 0.000737s | 0.000752s | byte equality observed |
| pmr_map_test.test | 10 | 0.000737s | 0.000739s | 0.000756s | byte equality observed |
| pmr_nest_test.test | 10 | 0.000741s | 0.000744s | 0.000752s | byte equality observed |
| pmr_set_test.test | 10 | 0.000732s | 0.000723s | 0.000753s | byte equality observed |
| pmr_slist_test.test | 10 | 0.000734s | 0.000740s | 0.000746s | byte equality observed |
| pmr_small_vector_test.test | 10 | 0.000734s | 0.000729s | 0.000756s | byte equality observed |
| pmr_stable_vector_test.test | 10 | 0.000728s | 0.000746s | 0.000774s | byte equality observed |
| pmr_string_test.test | 10 | 0.000355s | 0.000351s | 0.000788s | byte equality observed |
| pmr_vector_test.test | 10 | 0.000348s | 0.000353s | 0.000759s | byte equality observed |
| polymorphic_allocator_test.test | 10 | 0.000763s | 0.000768s | 0.000817s | byte equality observed |
| resource_adaptor_test.test | 10 | 0.000773s | 0.000765s | 0.000806s | byte equality observed |
| scoped_allocator_adaptor_test.test | 10 | 0.000766s | 0.000752s | 0.000788s | byte equality observed |
| scoped_allocator_usage_test.test | 10 | 0.000775s | 0.000750s | 0.000802s | byte equality observed |
| segtor_options_test.test | 10 | 0.000808s | 0.000800s | 0.000835s | byte equality observed |
| segtor_test.test | 1 | 0.457854s | 0.467022s | 0.499835s | byte equality observed |
| set_test.test | 2 | 0.010768s | 0.009536s | 0.010331s | byte equality observed |
| slist_test.test | 2 | 0.016290s | 0.016118s | 0.016165s | byte equality observed |
| small_vector_options_test.test | 10 | 0.000856s | 0.000824s | 0.000838s | byte equality observed |
| small_vector_test.test | 7 | 0.001701s | 0.001580s | 0.002751s | byte equality observed |
| stable_vector_test.test | 1 | 0.027827s | 0.027953s | 0.028698s | byte equality observed |
| static_vector_options_test.test | 10 | 0.000814s | 0.000754s | 0.000835s | byte equality observed |
| static_vector_test.test | 10 | 0.001070s | 0.000969s | 0.001023s | byte equality observed |
| string_options_test.test | 10 | 0.000781s | 0.000769s | 0.000778s | byte equality observed |
| string_test.test | 3 | 0.009235s | 0.008934s | 0.009338s | byte equality observed |
| string_view_compat_test.test | 10 | 0.000748s | 0.000746s | 0.000744s | byte equality observed |
| synchronized_pool_resource_test.test | 10 | 0.000783s | 0.000762s | 0.000768s | byte equality observed |
| throw_exception_test.test | 10 | 0.000722s | 0.000704s | 0.000711s | byte equality observed |
| tree_test.test | 10 | 0.000733s | 0.000706s | 0.000707s | byte equality observed |
| unsynchronized_pool_resource_test.test | 10 | 0.000776s | 0.000750s | 0.000757s | byte equality observed |
| uses_allocator_construction_test.test | 10 | 0.000732s | 0.000723s | 0.000708s | byte equality observed |
| uses_allocator_test.test | 10 | 0.000331s | 0.000325s | 0.000734s | byte equality observed |
| vector_options_test.test | 10 | 0.000860s | 0.000837s | 0.000848s | byte equality observed |
| vector_test.test | 5 | 0.002976s | 0.002962s | 0.003928s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/43740486413).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
