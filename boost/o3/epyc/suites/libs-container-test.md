# libs/container/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| vector_test.test | RUN | 5.245324 | 26.257568 | 22.007990 | 0.004209 | 0.004621 | 0.005998 |
| vector_options_test.test | RUN | 0.235345 | 1.122597 | 0.915596 | 0.001752 | 0.001831 | 0.001921 |
| uses_allocator_test.test | RUN | 0.041615 | 0.090905 | 0.115127 | 0.000551 | 0.000740 | 0.001790 |
| uses_allocator_construction_test.test | RUN | 0.130247 | 0.341602 | 0.417226 | 0.001515 | 0.001626 | 0.001829 |
| unsynchronized_pool_resource_test.test | RUN | 0.160439 | 1.002104 | 0.508119 | 0.001630 | 0.001458 | 0.001563 |
| tree_test.test | RUN | 0.740023 | 3.855364 | 3.096233 | 0.001396 | 0.001761 | 0.001676 |
| throw_exception_test.test | RUN | 0.091467 | 0.224516 | 0.248667 | 0.001359 | 0.001565 | 0.001658 |
| synchronized_pool_resource_test.test | RUN | 0.165220 | 0.973142 | 0.495178 | 0.001465 | 0.001729 | 0.001735 |
| string_view_compat_test.test | RUN | 0.276856 | 2.020641 | 0.963391 | 0.001312 | 0.001765 | 0.001642 |
| string_test.test | RUN | 1.227364 | 8.107346 | 5.865358 | 0.011619 | 0.011564 | 0.011686 |
| string_options_test.test | RUN | 0.220410 | 1.694623 | 0.842973 | 0.001656 | 0.003927 | 0.001704 |
| static_vector_test.test | RUN | 1.313665 | 6.881495 | 6.065036 | 0.001906 | 0.002218 | 0.002234 |
| static_vector_options_test.test | RUN | 0.156625 | 0.440208 | 0.506907 | 0.001561 | 0.001854 | 0.001864 |
| stable_vector_test.test | RUN | 3.013850 | 14.733523 | 11.437085 | 0.022971 | 0.023117 | 0.024119 |
| small_vector_test.test | RUN | 2.001870 | 10.322336 | 8.253036 | 0.002748 | 0.002812 | 0.003695 |
| small_vector_options_test.test | RUN | 0.279785 | 1.172787 | 1.067629 | 0.001590 | 0.001879 | 0.001880 |
| slist_test.test | RUN | 1.862668 | 9.330512 | 7.037620 | 0.018409 | 0.018935 | 0.019138 |
| set_test.test | RUN | 2.789123 | 17.427872 | 12.498234 | 0.011984 | 0.011079 | 0.011909 |
| segtor_test.test | RUN | 3.620622 | 18.571304 | 14.017414 | 0.396397 | 0.429616 | 0.382077 |
| segtor_options_test.test | RUN | 0.189450 | 0.546259 | 0.603862 | 0.001600 | 0.001760 | 0.001676 |
| scoped_allocator_usage_test.test | RUN | 0.670725 | 2.725270 | 2.317038 | 0.001598 | 0.001750 | 0.001636 |
| scoped_allocator_adaptor_test.test | RUN | 0.267313 | 0.828697 | 0.981286 | 0.003381 | 0.001817 | 0.001590 |
| resource_adaptor_test.test | RUN | 0.152296 | 0.443835 | 0.458636 | 0.001432 | 0.001666 | 0.001597 |
| polymorphic_allocator_test.test | RUN | 0.127231 | 0.366076 | 0.368292 | 0.001434 | 0.001812 | 0.001582 |
| pmr_vector_test.test | RUN | 0.068042 | 0.133681 | 0.173488 | 0.000577 | 0.000769 | 0.001365 |
| pmr_string_test.test | RUN | 0.134536 | 0.275464 | 0.355704 | 0.000705 | 0.000754 | 0.001508 |
| pmr_stable_vector_test.test | RUN | 0.155792 | 0.457485 | 0.487917 | 0.001430 | 0.001729 | 0.001503 |
| pmr_small_vector_test.test | RUN | 0.081181 | 0.191486 | 0.242012 | 0.001408 | 0.001364 | 0.001508 |
| pmr_slist_test.test | RUN | 0.112777 | 0.666380 | 0.505624 | 0.001440 | 0.001770 | 0.001316 |
| pmr_set_test.test | RUN | 0.131895 | 0.321608 | 0.361290 | 0.001356 | 0.001810 | 0.001487 |
| pmr_nest_test.test | RUN | 0.101486 | 0.239868 | 0.256633 | 0.001178 | 0.001718 | 0.001586 |
| pmr_map_test.test | RUN | 0.135328 | 0.342127 | 0.382257 | 0.001472 | 0.001637 | 0.001564 |
| pmr_list_test.test | RUN | 0.086624 | 0.208519 | 0.237537 | 0.001394 | 0.001517 | 0.001591 |
| pmr_hub_test.test | RUN | 0.124232 | 0.299805 | 0.291279 | 0.001383 | 0.001434 | 0.001643 |
| pmr_flat_set_test.test | RUN | 0.095129 | 0.238784 | 0.260975 | 0.001309 | 0.001594 | 0.001648 |
| pmr_flat_map_test.test | RUN | 0.118217 | 0.264710 | 0.315206 | 0.001239 | 0.001471 | 0.001380 |
| pmr_devector_test.test | RUN | 0.077598 | 0.233703 | 0.236688 | 0.001356 | 0.001608 | 0.001584 |
| pmr_deque_test.test | RUN | 0.078533 | 0.200767 | 0.224910 | 0.001360 | 0.001684 | 0.001488 |
| pair_test.test | RUN | 0.200393 | 0.480755 | 0.516755 | 0.001636 | 0.001717 | 0.001583 |
| null_iterators_test.test | RUN | 0.309122 | 0.843860 | 0.824538 | 0.001540 | 0.001730 | 0.001318 |
| node_handle_test.test | RUN | 0.133605 | 1.012012 | 0.357567 | 0.001405 | 0.001784 | 0.001355 |
| node_allocator_test.test | RUN | 2.205359 | 11.235512 | 8.661405 | 0.008024 | 0.008324 | 0.008437 |
| new_delete_resource_test.test | RUN | 0.162212 | 0.675792 | 0.511078 | 0.002070 | 0.002410 | 0.002104 |
| nest_test.test | RUN | 0.430100 | 3.070319 | 1.812622 | 0.001487 | 0.001732 | 0.001522 |
| nest_api_test.test | RUN | 0.747269 | 5.801687 | 3.654020 | 0.002350 | 0.002457 | 0.002288 |
| monotonic_buffer_resource_test.test | RUN | 0.164847 | 1.141079 | 0.418909 | 0.001718 | 0.001605 | 0.001588 |
| memory_resource_test.test | RUN | 0.100121 | 0.333200 | 0.280739 | 0.001402 | 0.002140 | 0.001291 |
| map_test.test | RUN | 4.018545 | 19.497212 | 18.077571 | 0.009358 | 0.009087 | 0.008831 |
| list_test.test | RUN | 2.078643 | 9.921233 | 7.509373 | 0.017638 | 0.020053 | 0.019150 |
| is_constructible_test.test | RUN | 0.065277 | 0.117026 | 0.167597 | 0.000720 | 0.000755 | 0.001621 |
| insert_vs_emplace_test.test | RUN | 0.237838 | 0.766720 | 0.931937 | 0.001729 | 0.001775 | 0.001618 |
| hub_uses_allocator_test.test | RUN | 0.224419 | 0.635047 | 0.691843 | 0.001329 | 0.001838 | 0.001585 |
| hub_stability_test.test | RUN | 0.467583 | 3.170515 | 2.528958 | 0.001935 | 0.002072 | 0.001411 |
| hub_sort_test.test | RUN | 0.288371 | 1.422747 | 1.242502 | 0.462311 | 0.446231 | 0.426521 |
| hub_pocxx_test.test | RUN | 0.303454 | 1.776118 | 0.820226 | 0.001660 | 0.001900 | 0.001417 |
| hub_new_extended_alignment_test.test | RUN | 0.149170 | 0.517445 | 0.437683 | 0.001654 | 0.001891 | 0.001549 |
| hub_exception_safety_test.test | RUN | 0.556005 | 3.910103 | 2.483679 | 0.070185 | 0.075810 | 0.075411 |
| hub_empty_sort_test.test | RUN | 0.170281 | 0.451708 | 0.562213 | 0.001580 | 0.001820 | 0.001701 |
| hub_api_test.test | RUN | 1.875619 | 16.922625 | 8.301702 | 0.003094 | 0.003413 | 0.003181 |
| global_resource_test.test | RUN | 0.097915 | 0.322183 | 0.296884 | 0.001806 | 0.001833 | 0.001610 |
| flat_tree_test.test | RUN | 3.499900 | 24.349266 | 15.959352 | 0.001457 | 0.001688 | 0.001563 |
| flat_set_test.test | RUN | 4.387230 | 30.806119 | 20.654150 | 0.007070 | 0.007180 | 0.006980 |
| flat_set_adaptor_test.test | RUN | 3.246680 | 27.144228 | 16.238980 | 0.006923 | 0.006934 | 0.006487 |
| flat_map_test.test | RUN | 7.162941 | 46.388114 | 34.258774 | 0.007855 | 0.008022 | 0.007753 |
| flat_map_adaptor_test.test | RUN | 4.579806 | 33.121029 | 23.903194 | 0.007343 | 0.006896 | 0.007214 |
| explicit_inst_vector_test.test | RUN | 0.675616 | 4.520264 | 3.659516 | 0.001512 | 0.001890 | 0.001639 |
| explicit_inst_string_test.test | RUN | 0.917594 | 8.142025 | 5.041274 | 0.003435 | 0.001665 | 0.001519 |
| explicit_inst_static_vector_test.test | RUN | 0.089537 | 0.305297 | 0.375382 | 0.001550 | 0.001664 | 0.001609 |
| explicit_inst_stable_vector_test.test | RUN | 0.580013 | 2.967833 | 2.071487 | 0.001545 | 0.001722 | 0.001791 |
| explicit_inst_small_vector_test.test | RUN | 0.471697 | 2.581541 | 2.083296 | 0.001662 | 0.001586 | 0.001500 |
| explicit_inst_slist_test.test | RUN | 0.351707 | 2.357905 | 1.543370 | 0.001673 | 0.001662 | 0.001577 |
| explicit_inst_set_test.test | RUN | 0.503910 | 2.707058 | 1.838023 | 0.001547 | 0.001840 | 0.001796 |
| explicit_inst_map_test.test | RUN | 0.557721 | 2.901583 | 2.043151 | 0.001560 | 0.001743 | 0.001640 |
| explicit_inst_list_test.test | RUN | 0.122388 | 0.658162 | 0.514368 | 0.001560 | 0.001857 | 0.001699 |
| explicit_inst_flat_set_test.test | RUN | 2.912861 | 20.526651 | 12.409341 | 0.001699 | 0.001940 | 0.001602 |
| explicit_inst_flat_map_test.test | RUN | 3.130926 | 21.362026 | 13.927568 | 0.001562 | 0.001622 | 0.001496 |
| explicit_inst_devector_test.test | RUN | 0.378209 | 2.570583 | 1.729876 | 0.001565 | 0.001660 | 0.001543 |
| explicit_inst_deque_test.test | RUN | 0.393340 | 2.810676 | 1.935113 | 0.001599 | 0.001627 | 0.001682 |
| devector_test.test | RUN | 5.661534 | 34.346816 | 21.701048 | 0.003120 | 0.003406 | 0.003650 |
| devector_options_test.test | RUN | 0.281939 | 1.472569 | 0.908491 | 0.001780 | 0.002090 | 0.001786 |
| deque_test.test | RUN | 3.928185 | 20.143981 | 15.338751 | 0.280609 | 0.297604 | 0.285592 |
| deque_options_test.test | RUN | 0.183510 | 0.586712 | 0.685339 | 0.001647 | 0.001859 | 0.002040 |
| copy_move_algo_test.test | RUN | 0.179545 | 0.674341 | 0.669787 | 0.001621 | 0.001728 | 0.001742 |
| common_iterator_test.test | RUN | 0.014840 | 0.036674 | 0.040435 | 0.000547 | 0.000671 | 0.001599 |
| boost_iterator_comp_test.test | RUN | 0.249405 | 0.771070 | 0.910818 | 0.001318 | 0.001727 | 0.001728 |
| allocator_traits_test.test | RUN | 0.146725 | 0.345453 | 0.410737 | 0.001347 | 0.001957 | 0.001531 |
| alloc_full_test.test | RUN | 0.167182 | 0.771704 | 0.602433 | 0.003426 | 0.003805 | 0.003944 |
| alloc_basic_test.test | RUN | 0.136915 | 0.507187 | 0.464928 | 0.001695 | 0.001642 | 0.002004 |
| adaptive_pool_test.test | RUN | 1.536501 | 8.626436 | 8.661961 | 0.007286 | 0.006962 | 0.010886 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 1.024× | 1.021×, 1.028× | 0.998× |
| clang | 1.015× | 1.006×, 1.025× | 0.995× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1364 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43666517673).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| adaptive_pool_test.test | 3 | 0.007329s | 0.006704s | 0.007510s | byte equality observed |
| alloc_basic_test.test | 10 | 0.000906s | 0.000901s | 0.000907s | byte equality observed |
| alloc_full_test.test | 8 | 0.002453s | 0.002458s | 0.002633s | byte equality observed |
| allocator_traits_test.test | 10 | 0.000850s | 0.000843s | 0.000861s | byte equality observed |
| boost_iterator_comp_test.test | 10 | 0.000856s | 0.000870s | 0.000884s | byte equality observed |
| common_iterator_test.test | 10 | 0.000388s | 0.000399s | 0.000842s | byte equality observed |
| copy_move_algo_test.test | 10 | 0.000995s | 0.000932s | 0.000977s | byte equality observed |
| deque_options_test.test | 10 | 0.000906s | 0.000904s | 0.000897s | byte equality observed |
| deque_test.test | 1 | 0.300387s | 0.331066s | 0.322113s | byte equality observed |
| devector_options_test.test | 10 | 0.000952s | 0.000919s | 0.000937s | byte equality observed |
| devector_test.test | 6 | 0.002538s | 0.002609s | 0.003269s | byte equality observed |
| explicit_inst_deque_test.test | 10 | 0.000810s | 0.000860s | 0.000799s | byte equality observed |
| explicit_inst_devector_test.test | 10 | 0.000800s | 0.000830s | 0.000785s | byte equality observed |
| explicit_inst_flat_map_test.test | 10 | 0.000805s | 0.000831s | 0.000784s | byte equality observed |
| explicit_inst_flat_set_test.test | 10 | 0.000800s | 0.000813s | 0.000782s | byte equality observed |
| explicit_inst_list_test.test | 10 | 0.000799s | 0.000807s | 0.000786s | byte equality observed |
| explicit_inst_map_test.test | 10 | 0.000807s | 0.000822s | 0.000804s | byte equality observed |
| explicit_inst_set_test.test | 10 | 0.000799s | 0.000810s | 0.000807s | byte equality observed |
| explicit_inst_slist_test.test | 10 | 0.000805s | 0.000828s | 0.000812s | byte equality observed |
| explicit_inst_small_vector_test.test | 10 | 0.000801s | 0.000838s | 0.000817s | byte equality observed |
| explicit_inst_stable_vector_test.test | 10 | 0.000801s | 0.000833s | 0.000819s | byte equality observed |
| explicit_inst_static_vector_test.test | 10 | 0.000797s | 0.000812s | 0.000787s | byte equality observed |
| explicit_inst_string_test.test | 10 | 0.000823s | 0.000830s | 0.000795s | byte equality observed |
| explicit_inst_vector_test.test | 10 | 0.000795s | 0.000833s | 0.000815s | byte equality observed |
| flat_map_adaptor_test.test | 4 | 0.004663s | 0.004497s | 0.004642s | byte equality observed |
| flat_map_test.test | 4 | 0.005089s | 0.004857s | 0.004537s | byte equality observed |
| flat_set_adaptor_test.test | 5 | 0.004429s | 0.004220s | 0.004225s | byte equality observed |
| flat_set_test.test | 4 | 0.004519s | 0.004312s | 0.004184s | byte equality observed |
| flat_tree_test.test | 10 | 0.000820s | 0.000832s | 0.000813s | byte equality observed |
| global_resource_test.test | 10 | 0.000850s | 0.000846s | 0.000837s | byte equality observed |
| hub_api_test.test | 9 | 0.002158s | 0.001857s | 0.001804s | byte equality observed |
| hub_empty_sort_test.test | 10 | 0.000832s | 0.000847s | 0.000850s | byte equality observed |
| hub_exception_safety_test.test | 1 | 0.054537s | 0.055508s | 0.052497s | byte equality observed |
| hub_new_extended_alignment_test.test | 10 | 0.000847s | 0.000905s | 0.000869s | byte equality observed |
| hub_pocxx_test.test | 10 | 0.000871s | 0.000880s | 0.000861s | byte equality observed |
| hub_sort_test.test | 1 | 0.395540s | 0.395324s | 0.374750s | byte equality observed |
| hub_stability_test.test | 10 | 0.001147s | 0.001108s | 0.001082s | byte equality observed |
| hub_uses_allocator_test.test | 10 | 0.000846s | 0.000848s | 0.000847s | byte equality observed |
| insert_vs_emplace_test.test | 10 | 0.000864s | 0.000879s | 0.000864s | byte equality observed |
| is_constructible_test.test | 10 | 0.000381s | 0.000392s | 0.000817s | byte equality observed |
| list_test.test | 2 | 0.012193s | 0.012617s | 0.012328s | byte equality observed |
| map_test.test | 4 | 0.006113s | 0.006116s | 0.005842s | byte equality observed |
| memory_resource_test.test | 10 | 0.000849s | 0.000863s | 0.000821s | byte equality observed |
| monotonic_buffer_resource_test.test | 10 | 0.000858s | 0.000853s | 0.000841s | byte equality observed |
| nest_api_test.test | 10 | 0.001381s | 0.001357s | 0.001366s | byte equality observed |
| nest_test.test | 10 | 0.000892s | 0.000884s | 0.000843s | byte equality observed |
| new_delete_resource_test.test | 10 | 0.001277s | 0.001243s | 0.001224s | byte equality observed |
| node_allocator_test.test | 4 | 0.005709s | 0.005511s | 0.005449s | byte equality observed |
| node_handle_test.test | 10 | 0.000853s | 0.000888s | 0.000827s | byte equality observed |
| null_iterators_test.test | 10 | 0.000856s | 0.000833s | 0.000843s | byte equality observed |
| pair_test.test | 10 | 0.000848s | 0.000834s | 0.000835s | byte equality observed |
| pmr_deque_test.test | 10 | 0.000826s | 0.000832s | 0.000850s | byte equality observed |
| pmr_devector_test.test | 10 | 0.000824s | 0.000830s | 0.000847s | byte equality observed |
| pmr_flat_map_test.test | 10 | 0.000829s | 0.000815s | 0.000824s | byte equality observed |
| pmr_flat_set_test.test | 10 | 0.000825s | 0.000820s | 0.000826s | byte equality observed |
| pmr_hub_test.test | 10 | 0.000817s | 0.000831s | 0.000844s | byte equality observed |
| pmr_list_test.test | 10 | 0.000814s | 0.000832s | 0.000818s | byte equality observed |
| pmr_map_test.test | 10 | 0.000823s | 0.000844s | 0.000846s | byte equality observed |
| pmr_nest_test.test | 10 | 0.000811s | 0.000855s | 0.000825s | byte equality observed |
| pmr_set_test.test | 10 | 0.000812s | 0.000838s | 0.000850s | byte equality observed |
| pmr_slist_test.test | 10 | 0.000804s | 0.000831s | 0.000844s | byte equality observed |
| pmr_small_vector_test.test | 10 | 0.000818s | 0.000841s | 0.000829s | byte equality observed |
| pmr_stable_vector_test.test | 10 | 0.000827s | 0.000853s | 0.000875s | byte equality observed |
| pmr_string_test.test | 10 | 0.000389s | 0.000400s | 0.000878s | byte equality observed |
| pmr_vector_test.test | 10 | 0.000388s | 0.000392s | 0.000854s | byte equality observed |
| polymorphic_allocator_test.test | 10 | 0.000885s | 0.000873s | 0.000885s | byte equality observed |
| resource_adaptor_test.test | 10 | 0.000886s | 0.000894s | 0.000864s | byte equality observed |
| scoped_allocator_adaptor_test.test | 10 | 0.000885s | 0.000856s | 0.000875s | byte equality observed |
| scoped_allocator_usage_test.test | 10 | 0.000873s | 0.000868s | 0.000889s | byte equality observed |
| segtor_options_test.test | 10 | 0.000900s | 0.000861s | 0.000921s | byte equality observed |
| segtor_test.test | 1 | 0.251538s | 0.261292s | 0.264796s | byte equality observed |
| set_test.test | 3 | 0.008202s | 0.007176s | 0.008310s | byte equality observed |
| slist_test.test | 2 | 0.012539s | 0.012200s | 0.012719s | byte equality observed |
| small_vector_options_test.test | 10 | 0.000955s | 0.000897s | 0.000967s | byte equality observed |
| small_vector_test.test | 8 | 0.001616s | 0.001524s | 0.002727s | byte equality observed |
| stable_vector_test.test | 1 | 0.019754s | 0.020188s | 0.021489s | byte equality observed |
| static_vector_options_test.test | 10 | 0.000905s | 0.000935s | 0.000930s | byte equality observed |
| static_vector_test.test | 10 | 0.001127s | 0.001056s | 0.001115s | byte equality observed |
| string_options_test.test | 10 | 0.000871s | 0.000896s | 0.000901s | byte equality observed |
| string_test.test | 3 | 0.007763s | 0.008122s | 0.008197s | byte equality observed |
| string_view_compat_test.test | 10 | 0.000859s | 0.000851s | 0.000849s | byte equality observed |
| synchronized_pool_resource_test.test | 10 | 0.000898s | 0.000902s | 0.000892s | byte equality observed |
| throw_exception_test.test | 10 | 0.000846s | 0.000844s | 0.000850s | byte equality observed |
| tree_test.test | 10 | 0.000843s | 0.000826s | 0.000824s | byte equality observed |
| unsynchronized_pool_resource_test.test | 10 | 0.000900s | 0.000893s | 0.000905s | byte equality observed |
| uses_allocator_construction_test.test | 10 | 0.000879s | 0.000849s | 0.000859s | byte equality observed |
| uses_allocator_test.test | 10 | 0.000403s | 0.000399s | 0.000853s | byte equality observed |
| vector_options_test.test | 10 | 0.001005s | 0.000976s | 0.000976s | byte equality observed |
| vector_test.test | 6 | 0.002857s | 0.002887s | 0.003720s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43666517673).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
