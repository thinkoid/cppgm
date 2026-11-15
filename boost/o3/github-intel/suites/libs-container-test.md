# libs/container/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| vector_test.test | RUN | 8.797200 | 38.053802 | 30.060558 | 0.005827 | 0.005959 | 0.007593 |
| vector_options_test.test | RUN | 0.347156 | 1.654191 | 1.239135 | 0.001624 | 0.002004 | 0.001571 |
| uses_allocator_test.test | RUN | 0.058093 | 0.131143 | 0.153798 | 0.000612 | 0.000668 | 0.001322 |
| uses_allocator_construction_test.test | RUN | 0.178204 | 0.489422 | 0.564063 | 0.001286 | 0.001349 | 0.001396 |
| unsynchronized_pool_resource_test.test | RUN | 0.234260 | 1.524425 | 0.725190 | 0.001429 | 0.001625 | 0.001452 |
| tree_test.test | RUN | 1.075986 | 5.688802 | 4.238174 | 0.001300 | 0.001488 | 0.001355 |
| throw_exception_test.test | RUN | 0.130499 | 0.301264 | 0.360550 | 0.001312 | 0.001401 | 0.001342 |
| synchronized_pool_resource_test.test | RUN | 0.233079 | 1.552169 | 0.722698 | 0.001490 | 0.001526 | 0.001423 |
| string_view_compat_test.test | RUN | 0.389008 | 3.164014 | 1.421755 | 0.001369 | 0.001501 | 0.001370 |
| string_test.test | RUN | 1.941851 | 12.123949 | 7.994706 | 0.017975 | 0.016748 | 0.017337 |
| string_options_test.test | RUN | 0.326026 | 2.552659 | 1.269424 | 0.001418 | 0.001548 | 0.001506 |
| static_vector_test.test | RUN | 2.138016 | 10.015881 | 8.048399 | 0.002018 | 0.002028 | 0.001888 |
| static_vector_options_test.test | RUN | 0.228057 | 0.644155 | 0.696767 | 0.001618 | 0.001582 | 0.001510 |
| stable_vector_test.test | RUN | 5.001131 | 20.822402 | 15.407749 | 0.038039 | 0.040578 | 0.042389 |
| small_vector_test.test | RUN | 3.286951 | 14.450070 | 11.223520 | 0.003493 | 0.003244 | 0.005718 |
| small_vector_options_test.test | RUN | 0.397824 | 1.686292 | 1.430516 | 0.001761 | 0.001635 | 0.001476 |
| slist_test.test | RUN | 2.988115 | 12.944718 | 9.976148 | 0.028950 | 0.029887 | 0.029130 |
| set_test.test | RUN | 4.429966 | 23.897393 | 17.612521 | 0.018863 | 0.016189 | 0.017481 |
| segtor_test.test | RUN | 5.984640 | 26.545741 | 20.161750 | 0.669931 | 0.635964 | 0.686385 |
| segtor_options_test.test | RUN | 0.253274 | 0.734931 | 0.874661 | 0.001488 | 0.001666 | 0.001535 |
| scoped_allocator_usage_test.test | RUN | 0.971976 | 3.900602 | 3.380396 | 0.001407 | 0.001419 | 0.001464 |
| scoped_allocator_adaptor_test.test | RUN | 0.388802 | 1.055296 | 1.389343 | 0.001428 | 0.001562 | 0.001320 |
| resource_adaptor_test.test | RUN | 0.203872 | 0.648164 | 0.644828 | 0.001503 | 0.001536 | 0.001421 |
| polymorphic_allocator_test.test | RUN | 0.168439 | 0.522308 | 0.536868 | 0.001318 | 0.001486 | 0.001387 |
| pmr_vector_test.test | RUN | 0.097093 | 0.195289 | 0.257899 | 0.000553 | 0.000632 | 0.001240 |
| pmr_string_test.test | RUN | 0.188604 | 0.415150 | 0.524246 | 0.000506 | 0.000574 | 0.001309 |
| pmr_stable_vector_test.test | RUN | 0.233187 | 0.671648 | 0.741802 | 0.001384 | 0.001383 | 0.001336 |
| pmr_small_vector_test.test | RUN | 0.115222 | 0.269178 | 0.341174 | 0.001248 | 0.001470 | 0.001295 |
| pmr_slist_test.test | RUN | 0.162870 | 0.922352 | 0.736388 | 0.001301 | 0.001433 | 0.001383 |
| pmr_set_test.test | RUN | 0.178204 | 0.449941 | 0.545046 | 0.001315 | 0.001547 | 0.001351 |
| pmr_nest_test.test | RUN | 0.139460 | 0.318385 | 0.376988 | 0.001376 | 0.001433 | 0.001377 |
| pmr_map_test.test | RUN | 0.193850 | 0.468735 | 0.558756 | 0.001325 | 0.001300 | 0.001268 |
| pmr_list_test.test | RUN | 0.121067 | 0.287287 | 0.380861 | 0.001307 | 0.001517 | 0.001589 |
| pmr_hub_test.test | RUN | 0.169960 | 0.413119 | 0.468819 | 0.001333 | 0.001353 | 0.001215 |
| pmr_flat_set_test.test | RUN | 0.133460 | 0.318927 | 0.417240 | 0.001320 | 0.001492 | 0.001330 |
| pmr_flat_map_test.test | RUN | 0.160896 | 0.355227 | 0.442797 | 0.001334 | 0.001505 | 0.001321 |
| pmr_devector_test.test | RUN | 0.103077 | 0.317363 | 0.368053 | 0.001219 | 0.001317 | 0.001339 |
| pmr_deque_test.test | RUN | 0.104150 | 0.255567 | 0.326169 | 0.001246 | 0.001545 | 0.001308 |
| pair_test.test | RUN | 0.263417 | 0.622706 | 0.768128 | 0.001512 | 0.001537 | 0.001389 |
| null_iterators_test.test | RUN | 0.423675 | 1.203306 | 1.317841 | 0.001395 | 0.001526 | 0.001193 |
| node_handle_test.test | RUN | 0.192466 | 1.550047 | 0.546990 | 0.001394 | 0.001628 | 0.001212 |
| node_allocator_test.test | RUN | 3.588240 | 16.086679 | 12.285613 | 0.011530 | 0.011643 | 0.011746 |
| new_delete_resource_test.test | RUN | 0.226278 | 0.955180 | 0.742718 | 0.002212 | 0.002174 | 0.002018 |
| nest_test.test | RUN | 0.672338 | 4.434079 | 2.654215 | 0.001438 | 0.001459 | 0.001454 |
| nest_api_test.test | RUN | 1.234112 | 8.442290 | 5.199670 | 0.002461 | 0.002673 | 0.002695 |
| monotonic_buffer_resource_test.test | RUN | 0.230675 | 1.676047 | 0.725167 | 0.001499 | 0.001505 | 0.001373 |
| memory_resource_test.test | RUN | 0.131727 | 0.478226 | 0.347683 | 0.001344 | 0.001522 | 0.001344 |
| map_test.test | RUN | 6.260900 | 27.274151 | 25.868903 | 0.013346 | 0.013340 | 0.012732 |
| list_test.test | RUN | 3.116798 | 14.022968 | 10.605165 | 0.028800 | 0.029644 | 0.028436 |
| is_constructible_test.test | RUN | 0.084627 | 0.169819 | 0.238087 | 0.000537 | 0.000567 | 0.001375 |
| insert_vs_emplace_test.test | RUN | 0.293995 | 1.096063 | 1.442179 | 0.001421 | 0.001590 | 0.001466 |
| hub_uses_allocator_test.test | RUN | 0.302082 | 0.952613 | 0.984010 | 0.001441 | 0.001475 | 0.001451 |
| hub_stability_test.test | RUN | 0.689156 | 4.435429 | 3.642341 | 0.001763 | 0.002044 | 0.001696 |
| hub_sort_test.test | RUN | 0.431965 | 2.032603 | 1.766248 | 0.682745 | 0.697496 | 0.655594 |
| hub_pocxx_test.test | RUN | 0.429230 | 2.354825 | 1.190679 | 0.001393 | 0.001638 | 0.001394 |
| hub_new_extended_alignment_test.test | RUN | 0.207483 | 0.711073 | 0.685146 | 0.001526 | 0.001567 | 0.001312 |
| hub_exception_safety_test.test | RUN | 0.870793 | 5.714432 | 3.649574 | 0.073718 | 0.088111 | 0.072620 |
| hub_empty_sort_test.test | RUN | 0.238699 | 0.655001 | 0.767772 | 0.001439 | 0.001541 | 0.001390 |
| hub_api_test.test | RUN | 2.846775 | 22.158948 | 11.587184 | 0.004314 | 0.004211 | 0.003718 |
| global_resource_test.test | RUN | 0.127831 | 0.442889 | 0.392758 | 0.001419 | 0.001581 | 0.001518 |
| flat_tree_test.test | RUN | 5.674561 | 35.194664 | 22.298264 | 0.001442 | 0.001499 | 0.001366 |
| flat_set_test.test | RUN | 7.176439 | 43.988481 | 28.843128 | 0.009742 | 0.008488 | 0.008632 |
| flat_set_adaptor_test.test | RUN | 5.400500 | 38.753746 | 22.514874 | 0.009593 | 0.008811 | 0.009242 |
| flat_map_test.test | RUN | 11.695569 | 65.872569 | 47.194806 | 0.010840 | 0.010067 | 0.009606 |
| flat_map_adaptor_test.test | RUN | 7.493639 | 47.648388 | 33.202057 | 0.009976 | 0.009455 | 0.009326 |
| explicit_inst_vector_test.test | RUN | 1.051686 | 6.550474 | 5.042691 | 0.001466 | 0.001404 | 0.001388 |
| explicit_inst_string_test.test | RUN | 1.394060 | 11.524172 | 7.071133 | 0.001239 | 0.001515 | 0.001424 |
| explicit_inst_static_vector_test.test | RUN | 0.127345 | 0.406631 | 0.469473 | 0.001364 | 0.001476 | 0.001386 |
| explicit_inst_stable_vector_test.test | RUN | 0.847689 | 4.164668 | 3.204374 | 0.001464 | 0.001542 | 0.001304 |
| explicit_inst_small_vector_test.test | RUN | 0.692195 | 3.746216 | 2.884084 | 0.001487 | 0.001522 | 0.001337 |
| explicit_inst_slist_test.test | RUN | 0.505097 | 3.374814 | 2.259832 | 0.001780 | 0.001476 | 0.001507 |
| explicit_inst_set_test.test | RUN | 0.738503 | 3.867928 | 2.614436 | 0.001389 | 0.001487 | 0.001363 |
| explicit_inst_map_test.test | RUN | 0.808942 | 4.077522 | 2.863463 | 0.001364 | 0.001606 | 0.001300 |
| explicit_inst_list_test.test | RUN | 0.176800 | 0.946393 | 0.734018 | 0.001356 | 0.001448 | 0.001352 |
| explicit_inst_flat_set_test.test | RUN | 4.764238 | 29.516179 | 17.109362 | 0.001470 | 0.001496 | 0.001353 |
| explicit_inst_flat_map_test.test | RUN | 5.084111 | 30.680251 | 19.112741 | 0.001411 | 0.001554 | 0.001363 |
| explicit_inst_devector_test.test | RUN | 0.576023 | 3.661448 | 2.396656 | 0.001445 | 0.001502 | 0.001311 |
| explicit_inst_deque_test.test | RUN | 0.588794 | 3.968703 | 2.573815 | 0.001296 | 0.001504 | 0.001361 |
| devector_test.test | RUN | 8.145760 | 46.237103 | 33.249238 | 0.003788 | 0.003926 | 0.005545 |
| devector_options_test.test | RUN | 0.347078 | 2.165474 | 1.395516 | 0.001818 | 0.001738 | 0.001609 |
| deque_test.test | RUN | 6.525607 | 27.985526 | 20.632904 | 0.416785 | 0.392273 | 0.495776 |
| deque_options_test.test | RUN | 0.264690 | 0.774276 | 0.925881 | 0.001351 | 0.001539 | 0.001379 |
| copy_move_algo_test.test | RUN | 0.255184 | 0.982333 | 0.843255 | 0.001829 | 0.001714 | 0.001734 |
| common_iterator_test.test | RUN | 0.016956 | 0.046314 | 0.044965 | 0.000589 | 0.000544 | 0.001241 |
| boost_iterator_comp_test.test | RUN | 0.357549 | 1.130194 | 1.283470 | 0.001276 | 0.001433 | 0.001355 |
| allocator_traits_test.test | RUN | 0.202310 | 0.495203 | 0.597486 | 0.001460 | 0.001562 | 0.001385 |
| alloc_full_test.test | RUN | 0.245896 | 1.075283 | 0.888921 | 0.004842 | 0.004857 | 0.004707 |
| alloc_basic_test.test | RUN | 0.197960 | 0.747103 | 0.637326 | 0.001498 | 0.001554 | 0.001500 |
| adaptive_pool_test.test | RUN | 3.617588 | 11.536244 | 8.023535 | 0.015483 | 0.009850 | 0.009945 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.968× | 0.958×, 0.977× | 1.006× |
| clang | 1.055× | 1.062×, 1.047× | 0.976× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1360 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43654890423).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| adaptive_pool_test.test | 2 | 0.011565s | 0.010235s | 0.011950s | byte equality observed |
| alloc_basic_test.test | 10 | 0.001013s | 0.001002s | 0.001031s | byte equality observed |
| alloc_full_test.test | 6 | 0.003305s | 0.003351s | 0.003453s | byte equality observed |
| allocator_traits_test.test | 10 | 0.000930s | 0.000965s | 0.000961s | byte equality observed |
| boost_iterator_comp_test.test | 10 | 0.000986s | 0.000991s | 0.000964s | byte equality observed |
| common_iterator_test.test | 10 | 0.000434s | 0.000429s | 0.000982s | byte equality observed |
| copy_move_algo_test.test | 10 | 0.001444s | 0.001118s | 0.001269s | byte equality observed |
| deque_options_test.test | 10 | 0.001046s | 0.001017s | 0.001039s | byte equality observed |
| deque_test.test | 1 | 0.444171s | 0.420658s | 0.512996s | byte equality observed |
| devector_options_test.test | 10 | 0.001093s | 0.001046s | 0.001045s | byte equality observed |
| devector_test.test | 4 | 0.003662s | 0.003510s | 0.005094s | byte equality observed |
| explicit_inst_deque_test.test | 10 | 0.000856s | 0.000893s | 0.000896s | byte equality observed |
| explicit_inst_devector_test.test | 10 | 0.000854s | 0.000872s | 0.000887s | byte equality observed |
| explicit_inst_flat_map_test.test | 10 | 0.000867s | 0.000873s | 0.000874s | byte equality observed |
| explicit_inst_flat_set_test.test | 10 | 0.000885s | 0.000876s | 0.000908s | byte equality observed |
| explicit_inst_list_test.test | 10 | 0.000892s | 0.000895s | 0.000886s | byte equality observed |
| explicit_inst_map_test.test | 10 | 0.000886s | 0.000895s | 0.000889s | byte equality observed |
| explicit_inst_set_test.test | 10 | 0.000897s | 0.000908s | 0.000901s | byte equality observed |
| explicit_inst_slist_test.test | 10 | 0.000895s | 0.000887s | 0.000889s | byte equality observed |
| explicit_inst_small_vector_test.test | 10 | 0.000884s | 0.000891s | 0.000893s | byte equality observed |
| explicit_inst_stable_vector_test.test | 10 | 0.000894s | 0.000919s | 0.000908s | byte equality observed |
| explicit_inst_static_vector_test.test | 10 | 0.000901s | 0.000889s | 0.000911s | byte equality observed |
| explicit_inst_string_test.test | 10 | 0.000912s | 0.000908s | 0.000892s | byte equality observed |
| explicit_inst_vector_test.test | 10 | 0.000916s | 0.000895s | 0.000903s | byte equality observed |
| flat_map_adaptor_test.test | 3 | 0.007300s | 0.006883s | 0.006875s | byte equality observed |
| flat_map_test.test | 3 | 0.008078s | 0.007442s | 0.006970s | byte equality observed |
| flat_set_adaptor_test.test | 3 | 0.007096s | 0.006528s | 0.006777s | byte equality observed |
| flat_set_test.test | 3 | 0.006968s | 0.006145s | 0.006703s | byte equality observed |
| flat_tree_test.test | 5 | 0.000909s | 0.000886s | 0.000903s | byte equality observed |
| global_resource_test.test | 10 | 0.000969s | 0.000923s | 0.000966s | byte equality observed |
| hub_api_test.test | 7 | 0.003058s | 0.002622s | 0.002598s | byte equality observed |
| hub_empty_sort_test.test | 10 | 0.000927s | 0.000899s | 0.000901s | byte equality observed |
| hub_exception_safety_test.test | 1 | 0.058950s | 0.062166s | 0.059630s | byte equality observed |
| hub_new_extended_alignment_test.test | 10 | 0.000936s | 0.000916s | 0.000967s | byte equality observed |
| hub_pocxx_test.test | 10 | 0.000959s | 0.000946s | 0.000975s | byte equality observed |
| hub_sort_test.test | 1 | 0.548218s | 0.552110s | 0.534937s | byte equality observed |
| hub_stability_test.test | 10 | 0.001161s | 0.001190s | 0.001170s | byte equality observed |
| hub_uses_allocator_test.test | 10 | 0.000895s | 0.000937s | 0.000898s | byte equality observed |
| insert_vs_emplace_test.test | 10 | 0.000932s | 0.000964s | 0.000950s | byte equality observed |
| is_constructible_test.test | 10 | 0.000418s | 0.000428s | 0.000863s | byte equality observed |
| list_test.test | 1 | 0.019055s | 0.019846s | 0.019926s | byte equality observed |
| map_test.test | 2 | 0.009669s | 0.009548s | 0.009160s | byte equality observed |
| memory_resource_test.test | 10 | 0.000924s | 0.000942s | 0.000898s | byte equality observed |
| monotonic_buffer_resource_test.test | 10 | 0.000943s | 0.000944s | 0.000926s | byte equality observed |
| nest_api_test.test | 10 | 0.001931s | 0.001957s | 0.001937s | byte equality observed |
| nest_test.test | 10 | 0.000975s | 0.000969s | 0.000967s | byte equality observed |
| new_delete_resource_test.test | 10 | 0.001383s | 0.001387s | 0.001373s | byte equality observed |
| node_allocator_test.test | 3 | 0.008312s | 0.008149s | 0.008320s | byte equality observed |
| node_handle_test.test | 10 | 0.000944s | 0.000941s | 0.000939s | byte equality observed |
| null_iterators_test.test | 10 | 0.000940s | 0.000919s | 0.000946s | byte equality observed |
| pair_test.test | 10 | 0.000912s | 0.000907s | 0.000932s | byte equality observed |
| pmr_deque_test.test | 10 | 0.000895s | 0.000899s | 0.000934s | byte equality observed |
| pmr_devector_test.test | 10 | 0.000905s | 0.000915s | 0.000918s | byte equality observed |
| pmr_flat_map_test.test | 10 | 0.000894s | 0.000853s | 0.000923s | byte equality observed |
| pmr_flat_set_test.test | 10 | 0.000901s | 0.000873s | 0.000898s | byte equality observed |
| pmr_hub_test.test | 10 | 0.000866s | 0.000871s | 0.000921s | byte equality observed |
| pmr_list_test.test | 10 | 0.000890s | 0.000878s | 0.000914s | byte equality observed |
| pmr_map_test.test | 10 | 0.000915s | 0.000891s | 0.000910s | byte equality observed |
| pmr_nest_test.test | 10 | 0.000891s | 0.000906s | 0.000930s | byte equality observed |
| pmr_set_test.test | 10 | 0.000906s | 0.000879s | 0.000923s | byte equality observed |
| pmr_slist_test.test | 10 | 0.000916s | 0.000892s | 0.000901s | byte equality observed |
| pmr_small_vector_test.test | 10 | 0.000885s | 0.000885s | 0.000911s | byte equality observed |
| pmr_stable_vector_test.test | 10 | 0.000908s | 0.000902s | 0.000933s | byte equality observed |
| pmr_string_test.test | 10 | 0.000410s | 0.000412s | 0.000931s | byte equality observed |
| pmr_vector_test.test | 10 | 0.000415s | 0.000400s | 0.000944s | byte equality observed |
| polymorphic_allocator_test.test | 10 | 0.000926s | 0.000924s | 0.000929s | byte equality observed |
| resource_adaptor_test.test | 10 | 0.000922s | 0.000914s | 0.000956s | byte equality observed |
| scoped_allocator_adaptor_test.test | 10 | 0.000946s | 0.000944s | 0.000994s | byte equality observed |
| scoped_allocator_usage_test.test | 10 | 0.000923s | 0.000940s | 0.001011s | byte equality observed |
| segtor_options_test.test | 10 | 0.000997s | 0.000973s | 0.001030s | byte equality observed |
| segtor_test.test | 1 | 0.411212s | 0.377315s | 0.427651s | byte equality observed |
| set_test.test | 2 | 0.013613s | 0.012133s | 0.013292s | byte equality observed |
| slist_test.test | 1 | 0.020061s | 0.020454s | 0.019662s | byte equality observed |
| small_vector_options_test.test | 10 | 0.001028s | 0.001037s | 0.001023s | byte equality observed |
| small_vector_test.test | 5 | 0.002178s | 0.001950s | 0.004273s | byte equality observed |
| stable_vector_test.test | 1 | 0.033729s | 0.034460s | 0.035485s | byte equality observed |
| static_vector_options_test.test | 10 | 0.000972s | 0.000980s | 0.001006s | byte equality observed |
| static_vector_test.test | 10 | 0.001316s | 0.001261s | 0.001266s | byte equality observed |
| string_options_test.test | 10 | 0.000960s | 0.001003s | 0.000987s | byte equality observed |
| string_test.test | 2 | 0.012878s | 0.011996s | 0.012417s | byte equality observed |
| string_view_compat_test.test | 10 | 0.000924s | 0.000973s | 0.000927s | byte equality observed |
| synchronized_pool_resource_test.test | 10 | 0.000959s | 0.001004s | 0.000982s | byte equality observed |
| throw_exception_test.test | 10 | 0.000916s | 0.000944s | 0.000911s | byte equality observed |
| tree_test.test | 10 | 0.000907s | 0.000947s | 0.000918s | byte equality observed |
| unsynchronized_pool_resource_test.test | 10 | 0.000951s | 0.001012s | 0.000983s | byte equality observed |
| uses_allocator_construction_test.test | 10 | 0.000898s | 0.000919s | 0.000927s | byte equality observed |
| uses_allocator_test.test | 10 | 0.000407s | 0.000422s | 0.000890s | byte equality observed |
| vector_options_test.test | 10 | 0.001075s | 0.001066s | 0.001064s | byte equality observed |
| vector_test.test | 3 | 0.003859s | 0.003737s | 0.005821s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43654890423).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
