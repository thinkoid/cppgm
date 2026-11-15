# libs/container/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| vector_test.test | RUN | 5.704246 | 24.218938 | 21.145203 | 0.004520 | 0.004271 | 0.005530 |
| vector_options_test.test | RUN | 0.263491 | 1.050933 | 0.807519 | 0.001802 | 0.001804 | 0.001672 |
| uses_allocator_test.test | RUN | 0.048731 | 0.088687 | 0.103351 | 0.000680 | 0.000675 | 0.001495 |
| uses_allocator_construction_test.test | RUN | 0.150814 | 0.333565 | 0.364808 | 0.001618 | 0.001632 | 0.001463 |
| unsynchronized_pool_resource_test.test | RUN | 0.185126 | 0.951620 | 0.518629 | 0.001678 | 0.001541 | 0.001716 |
| tree_test.test | RUN | 0.812670 | 3.717624 | 2.822080 | 0.001604 | 0.001680 | 0.001502 |
| throw_exception_test.test | RUN | 0.106589 | 0.214893 | 0.263309 | 0.001698 | 0.001669 | 0.001546 |
| synchronized_pool_resource_test.test | RUN | 0.184476 | 0.964201 | 0.508886 | 0.001642 | 0.001589 | 0.001753 |
| string_view_compat_test.test | RUN | 0.320690 | 1.959991 | 0.978697 | 0.001648 | 0.001590 | 0.001341 |
| string_test.test | RUN | 1.387278 | 7.667923 | 5.502889 | 0.012294 | 0.011342 | 0.012044 |
| string_options_test.test | RUN | 0.238341 | 1.620172 | 0.837859 | 0.001944 | 0.001838 | 0.001417 |
| static_vector_test.test | RUN | 1.420585 | 6.413127 | 5.538380 | 0.002375 | 0.001969 | 0.002050 |
| static_vector_options_test.test | RUN | 0.189853 | 0.401305 | 0.464801 | 0.002002 | 0.001676 | 0.001706 |
| stable_vector_test.test | RUN | 3.221633 | 13.476114 | 10.883077 | 0.022996 | 0.023634 | 0.025681 |
| small_vector_test.test | RUN | 2.175382 | 9.234064 | 7.780196 | 0.003012 | 0.002528 | 0.004379 |
| small_vector_options_test.test | RUN | 0.314279 | 1.089920 | 1.015354 | 0.001947 | 0.001746 | 0.001707 |
| slist_test.test | RUN | 1.989696 | 8.353352 | 6.827494 | 0.017809 | 0.018435 | 0.019735 |
| set_test.test | RUN | 3.014365 | 15.397519 | 12.277567 | 0.012851 | 0.010744 | 0.011741 |
| segtor_test.test | RUN | 3.858338 | 16.790791 | 14.032665 | 0.426384 | 0.450335 | 0.383701 |
| segtor_options_test.test | RUN | 0.188946 | 0.492695 | 0.607089 | 0.001749 | 0.001660 | 0.001744 |
| scoped_allocator_usage_test.test | RUN | 0.666201 | 2.482937 | 2.314072 | 0.001392 | 0.001677 | 0.001609 |
| scoped_allocator_adaptor_test.test | RUN | 0.299548 | 0.658078 | 0.960240 | 0.001634 | 0.001590 | 0.001675 |
| resource_adaptor_test.test | RUN | 0.153961 | 0.434125 | 0.447789 | 0.001160 | 0.001522 | 0.001483 |
| polymorphic_allocator_test.test | RUN | 0.126007 | 0.339143 | 0.386392 | 0.001622 | 0.001338 | 0.001569 |
| pmr_vector_test.test | RUN | 0.075021 | 0.133008 | 0.198064 | 0.000725 | 0.000679 | 0.001609 |
| pmr_string_test.test | RUN | 0.151149 | 0.275769 | 0.381197 | 0.000733 | 0.000651 | 0.001582 |
| pmr_stable_vector_test.test | RUN | 0.177470 | 0.435693 | 0.566111 | 0.001646 | 0.001620 | 0.001652 |
| pmr_small_vector_test.test | RUN | 0.092473 | 0.176409 | 0.244313 | 0.001448 | 0.001533 | 0.001382 |
| pmr_slist_test.test | RUN | 0.124591 | 0.598354 | 0.470709 | 0.001677 | 0.001592 | 0.001364 |
| pmr_set_test.test | RUN | 0.141750 | 0.262825 | 0.383825 | 0.001533 | 0.001524 | 0.001581 |
| pmr_nest_test.test | RUN | 0.112441 | 0.214173 | 0.250754 | 0.001488 | 0.001551 | 0.001513 |
| pmr_map_test.test | RUN | 0.150109 | 0.314083 | 0.366779 | 0.001638 | 0.001449 | 0.001582 |
| pmr_list_test.test | RUN | 0.097374 | 0.197001 | 0.249486 | 0.001388 | 0.001534 | 0.001639 |
| pmr_hub_test.test | RUN | 0.135712 | 0.265734 | 0.326340 | 0.001619 | 0.001544 | 0.001597 |
| pmr_flat_set_test.test | RUN | 0.101806 | 0.206267 | 0.255291 | 0.001370 | 0.001360 | 0.001624 |
| pmr_flat_map_test.test | RUN | 0.120554 | 0.240082 | 0.327697 | 0.001371 | 0.001594 | 0.001461 |
| pmr_devector_test.test | RUN | 0.080456 | 0.208512 | 0.223400 | 0.001694 | 0.001412 | 0.001596 |
| pmr_deque_test.test | RUN | 0.083664 | 0.217560 | 0.241022 | 0.001478 | 0.001585 | 0.001532 |
| pair_test.test | RUN | 0.210666 | 0.435607 | 0.498493 | 0.001743 | 0.001557 | 0.001578 |
| null_iterators_test.test | RUN | 0.336872 | 0.790904 | 0.896922 | 0.001568 | 0.001621 | 0.001526 |
| node_handle_test.test | RUN | 0.146138 | 0.957611 | 0.365013 | 0.001732 | 0.001693 | 0.001570 |
| node_allocator_test.test | RUN | 2.413614 | 10.419125 | 8.605606 | 0.008195 | 0.008184 | 0.007784 |
| new_delete_resource_test.test | RUN | 0.222740 | 0.627174 | 0.477317 | 0.002334 | 0.002302 | 0.002216 |
| nest_test.test | RUN | 0.450199 | 2.928731 | 1.797415 | 0.001684 | 0.001636 | 0.001629 |
| nest_api_test.test | RUN | 0.852180 | 5.248146 | 3.600619 | 0.002416 | 0.002362 | 0.002366 |
| monotonic_buffer_resource_test.test | RUN | 0.178019 | 1.037162 | 0.519927 | 0.001726 | 0.001582 | 0.001385 |
| memory_resource_test.test | RUN | 0.107387 | 0.312688 | 0.295583 | 0.001769 | 0.001522 | 0.001578 |
| map_test.test | RUN | 4.205955 | 18.002102 | 18.025135 | 0.009917 | 0.009367 | 0.008987 |
| list_test.test | RUN | 2.186153 | 9.088397 | 7.554091 | 0.018340 | 0.018551 | 0.019475 |
| is_constructible_test.test | RUN | 0.065828 | 0.116626 | 0.164954 | 0.000745 | 0.000678 | 0.001638 |
| insert_vs_emplace_test.test | RUN | 0.249615 | 0.707072 | 0.955475 | 0.001754 | 0.001666 | 0.001638 |
| hub_uses_allocator_test.test | RUN | 0.233933 | 0.575562 | 0.672742 | 0.001714 | 0.001674 | 0.001602 |
| hub_stability_test.test | RUN | 0.497666 | 2.851231 | 2.489627 | 0.002014 | 0.001830 | 0.002002 |
| hub_sort_test.test | RUN | 0.320932 | 1.303302 | 1.193209 | 0.463979 | 0.442268 | 0.450691 |
| hub_pocxx_test.test | RUN | 0.287523 | 1.430604 | 0.886185 | 0.001551 | 0.001585 | 0.001638 |
| hub_new_extended_alignment_test.test | RUN | 0.162146 | 0.456148 | 0.461022 | 0.001614 | 0.001597 | 0.001637 |
| hub_exception_safety_test.test | RUN | 0.594162 | 3.578039 | 2.445518 | 0.073116 | 0.070337 | 0.103084 |
| hub_empty_sort_test.test | RUN | 0.180382 | 0.417063 | 0.538969 | 0.001659 | 0.001547 | 0.001603 |
| hub_api_test.test | RUN | 2.034998 | 14.487208 | 8.198916 | 0.003618 | 0.003156 | 0.003184 |
| global_resource_test.test | RUN | 0.101682 | 0.287807 | 0.270490 | 0.001842 | 0.001553 | 0.001699 |
| flat_tree_test.test | RUN | 3.736097 | 22.691993 | 15.856461 | 0.001710 | 0.001675 | 0.001660 |
| flat_set_test.test | RUN | 4.697099 | 28.012892 | 20.256187 | 0.007319 | 0.006146 | 0.006860 |
| flat_set_adaptor_test.test | RUN | 3.488680 | 24.583638 | 15.898168 | 0.007325 | 0.006180 | 0.006463 |
| flat_map_test.test | RUN | 7.704217 | 42.619932 | 33.108984 | 0.008098 | 0.007429 | 0.008282 |
| flat_map_adaptor_test.test | RUN | 4.891843 | 30.931239 | 23.345040 | 0.007653 | 0.007014 | 0.006762 |
| explicit_inst_vector_test.test | RUN | 0.727842 | 4.260161 | 3.515224 | 0.001789 | 0.001574 | 0.001595 |
| explicit_inst_string_test.test | RUN | 0.957843 | 7.531355 | 4.860765 | 0.002093 | 0.001564 | 0.001585 |
| explicit_inst_static_vector_test.test | RUN | 0.104685 | 0.270919 | 0.304598 | 0.001744 | 0.001557 | 0.001443 |
| explicit_inst_stable_vector_test.test | RUN | 0.668849 | 2.710608 | 2.049483 | 0.001701 | 0.001566 | 0.001613 |
| explicit_inst_small_vector_test.test | RUN | 0.526051 | 2.478967 | 2.096378 | 0.001613 | 0.001493 | 0.001692 |
| explicit_inst_slist_test.test | RUN | 0.394234 | 2.245761 | 1.500602 | 0.001787 | 0.001336 | 0.001388 |
| explicit_inst_set_test.test | RUN | 0.570969 | 2.532918 | 1.879729 | 0.001752 | 0.001520 | 0.001399 |
| explicit_inst_map_test.test | RUN | 0.602151 | 2.704838 | 2.015723 | 0.001715 | 0.001750 | 0.001612 |
| explicit_inst_list_test.test | RUN | 0.131517 | 0.606716 | 0.517864 | 0.001714 | 0.001584 | 0.001574 |
| explicit_inst_flat_set_test.test | RUN | 3.054315 | 18.950309 | 11.915636 | 0.001696 | 0.001640 | 0.001502 |
| explicit_inst_flat_map_test.test | RUN | 3.269555 | 19.763623 | 13.291507 | 0.001712 | 0.001543 | 0.001593 |
| explicit_inst_devector_test.test | RUN | 0.391185 | 2.433501 | 1.589813 | 0.001625 | 0.001594 | 0.001526 |
| explicit_inst_deque_test.test | RUN | 0.453588 | 2.526742 | 1.788071 | 0.001848 | 0.001589 | 0.001492 |
| devector_test.test | RUN | 5.537221 | 29.343950 | 21.515689 | 0.003358 | 0.003007 | 0.003710 |
| devector_options_test.test | RUN | 0.263901 | 1.376623 | 0.918401 | 0.002032 | 0.001856 | 0.001806 |
| deque_test.test | RUN | 4.322854 | 19.146198 | 15.068393 | 0.333312 | 0.294971 | 0.337688 |
| deque_options_test.test | RUN | 0.212413 | 0.538129 | 0.628732 | 0.001788 | 0.001789 | 0.001608 |
| copy_move_algo_test.test | RUN | 0.199701 | 0.614002 | 0.487338 | 0.001928 | 0.001563 | 0.001687 |
| common_iterator_test.test | RUN | 0.016466 | 0.033646 | 0.035721 | 0.000722 | 0.000587 | 0.001319 |
| boost_iterator_comp_test.test | RUN | 0.292546 | 0.756338 | 0.882185 | 0.001611 | 0.001565 | 0.001672 |
| allocator_traits_test.test | RUN | 0.164793 | 0.334142 | 0.401620 | 0.002628 | 0.001604 | 0.001545 |
| alloc_full_test.test | RUN | 0.185526 | 0.659997 | 0.566690 | 0.003734 | 0.003676 | 0.003626 |
| alloc_basic_test.test | RUN | 0.151866 | 0.476173 | 0.438205 | 0.001650 | 0.001637 | 0.001572 |
| adaptive_pool_test.test | RUN | 2.374861 | 10.964386 | 8.532367 | 0.007732 | 0.010032 | 0.011264 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 1.038× | 1.033×, 1.043× | 1.022× |
| clang | 1.007× | 1.006×, 1.007× | 0.994× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1364 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43686398833).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| adaptive_pool_test.test | 3 | 0.007419s | 0.006902s | 0.007716s | byte equality observed |
| alloc_basic_test.test | 10 | 0.000927s | 0.000911s | 0.000938s | byte equality observed |
| alloc_full_test.test | 8 | 0.002498s | 0.002488s | 0.002664s | byte equality observed |
| allocator_traits_test.test | 10 | 0.000852s | 0.000849s | 0.000873s | byte equality observed |
| boost_iterator_comp_test.test | 10 | 0.000881s | 0.000889s | 0.000897s | byte equality observed |
| common_iterator_test.test | 10 | 0.000405s | 0.000409s | 0.000882s | byte equality observed |
| copy_move_algo_test.test | 10 | 0.001020s | 0.000975s | 0.000970s | byte equality observed |
| deque_options_test.test | 10 | 0.000916s | 0.000908s | 0.000935s | byte equality observed |
| deque_test.test | 1 | 0.297754s | 0.318453s | 0.318273s | byte equality observed |
| devector_options_test.test | 10 | 0.000982s | 0.000949s | 0.000971s | byte equality observed |
| devector_test.test | 6 | 0.002572s | 0.002667s | 0.003570s | byte equality observed |
| explicit_inst_deque_test.test | 10 | 0.000828s | 0.000830s | 0.000875s | byte equality observed |
| explicit_inst_devector_test.test | 10 | 0.000817s | 0.000822s | 0.000838s | byte equality observed |
| explicit_inst_flat_map_test.test | 10 | 0.000824s | 0.000833s | 0.000840s | byte equality observed |
| explicit_inst_flat_set_test.test | 10 | 0.000817s | 0.000823s | 0.000842s | byte equality observed |
| explicit_inst_list_test.test | 10 | 0.000812s | 0.000812s | 0.000813s | byte equality observed |
| explicit_inst_map_test.test | 10 | 0.000826s | 0.000823s | 0.000836s | byte equality observed |
| explicit_inst_set_test.test | 10 | 0.000827s | 0.000829s | 0.000815s | byte equality observed |
| explicit_inst_slist_test.test | 10 | 0.000824s | 0.000837s | 0.000835s | byte equality observed |
| explicit_inst_small_vector_test.test | 10 | 0.000826s | 0.000816s | 0.000838s | byte equality observed |
| explicit_inst_stable_vector_test.test | 10 | 0.000817s | 0.000817s | 0.000828s | byte equality observed |
| explicit_inst_static_vector_test.test | 10 | 0.000819s | 0.000817s | 0.000822s | byte equality observed |
| explicit_inst_string_test.test | 10 | 0.000835s | 0.000822s | 0.000815s | byte equality observed |
| explicit_inst_vector_test.test | 10 | 0.000835s | 0.000819s | 0.000829s | byte equality observed |
| flat_map_adaptor_test.test | 5 | 0.004777s | 0.004478s | 0.004576s | byte equality observed |
| flat_map_test.test | 4 | 0.005179s | 0.004828s | 0.004682s | byte equality observed |
| flat_set_adaptor_test.test | 5 | 0.004496s | 0.004065s | 0.004407s | byte equality observed |
| flat_set_test.test | 5 | 0.004594s | 0.003973s | 0.004413s | byte equality observed |
| flat_tree_test.test | 10 | 0.000848s | 0.000842s | 0.000871s | byte equality observed |
| global_resource_test.test | 10 | 0.000870s | 0.000866s | 0.000885s | byte equality observed |
| hub_api_test.test | 9 | 0.002215s | 0.001833s | 0.001947s | byte equality observed |
| hub_empty_sort_test.test | 10 | 0.000850s | 0.000839s | 0.000906s | byte equality observed |
| hub_exception_safety_test.test | 1 | 0.054686s | 0.055379s | 0.057589s | byte equality observed |
| hub_new_extended_alignment_test.test | 10 | 0.000884s | 0.000907s | 0.000929s | byte equality observed |
| hub_pocxx_test.test | 10 | 0.000878s | 0.000890s | 0.000994s | byte equality observed |
| hub_sort_test.test | 1 | 0.391974s | 0.396951s | 0.390622s | byte equality observed |
| hub_stability_test.test | 10 | 0.001137s | 0.001157s | 0.001230s | byte equality observed |
| hub_uses_allocator_test.test | 10 | 0.000831s | 0.000835s | 0.000931s | byte equality observed |
| insert_vs_emplace_test.test | 10 | 0.000855s | 0.000855s | 0.000958s | byte equality observed |
| is_constructible_test.test | 10 | 0.000384s | 0.000386s | 0.000862s | byte equality observed |
| list_test.test | 2 | 0.012498s | 0.012177s | 0.013588s | byte equality observed |
| map_test.test | 4 | 0.006336s | 0.006315s | 0.006619s | byte equality observed |
| memory_resource_test.test | 10 | 0.000877s | 0.000828s | 0.000947s | byte equality observed |
| monotonic_buffer_resource_test.test | 10 | 0.000849s | 0.000851s | 0.000869s | byte equality observed |
| nest_api_test.test | 10 | 0.001355s | 0.001350s | 0.001419s | byte equality observed |
| nest_test.test | 10 | 0.000865s | 0.000854s | 0.000938s | byte equality observed |
| new_delete_resource_test.test | 10 | 0.001242s | 0.001212s | 0.001322s | byte equality observed |
| node_allocator_test.test | 4 | 0.005850s | 0.005391s | 0.005793s | byte equality observed |
| node_handle_test.test | 10 | 0.000893s | 0.000832s | 0.000922s | byte equality observed |
| null_iterators_test.test | 10 | 0.000854s | 0.000825s | 0.000852s | byte equality observed |
| pair_test.test | 10 | 0.000845s | 0.000807s | 0.000849s | byte equality observed |
| pmr_deque_test.test | 10 | 0.000839s | 0.000799s | 0.000840s | byte equality observed |
| pmr_devector_test.test | 10 | 0.000822s | 0.000784s | 0.000858s | byte equality observed |
| pmr_flat_map_test.test | 10 | 0.000836s | 0.000785s | 0.000852s | byte equality observed |
| pmr_flat_set_test.test | 10 | 0.000826s | 0.000793s | 0.000843s | byte equality observed |
| pmr_hub_test.test | 10 | 0.000814s | 0.000801s | 0.000838s | byte equality observed |
| pmr_list_test.test | 10 | 0.000825s | 0.000800s | 0.000851s | byte equality observed |
| pmr_map_test.test | 10 | 0.000826s | 0.000798s | 0.000834s | byte equality observed |
| pmr_nest_test.test | 10 | 0.000821s | 0.000813s | 0.000840s | byte equality observed |
| pmr_set_test.test | 10 | 0.000835s | 0.000817s | 0.000848s | byte equality observed |
| pmr_slist_test.test | 10 | 0.000842s | 0.000800s | 0.000856s | byte equality observed |
| pmr_small_vector_test.test | 10 | 0.000831s | 0.000792s | 0.000861s | byte equality observed |
| pmr_stable_vector_test.test | 10 | 0.000853s | 0.000826s | 0.000857s | byte equality observed |
| pmr_string_test.test | 10 | 0.000401s | 0.000399s | 0.000870s | byte equality observed |
| pmr_vector_test.test | 10 | 0.000393s | 0.000396s | 0.000857s | byte equality observed |
| polymorphic_allocator_test.test | 10 | 0.000893s | 0.000884s | 0.000886s | byte equality observed |
| resource_adaptor_test.test | 10 | 0.000888s | 0.000877s | 0.000874s | byte equality observed |
| scoped_allocator_adaptor_test.test | 10 | 0.000878s | 0.000872s | 0.000888s | byte equality observed |
| scoped_allocator_usage_test.test | 10 | 0.000872s | 0.000864s | 0.000889s | byte equality observed |
| segtor_options_test.test | 10 | 0.000906s | 0.000874s | 0.000904s | byte equality observed |
| segtor_test.test | 1 | 0.252777s | 0.262020s | 0.260331s | byte equality observed |
| set_test.test | 3 | 0.008314s | 0.007238s | 0.008340s | byte equality observed |
| slist_test.test | 2 | 0.012515s | 0.012082s | 0.012898s | byte equality observed |
| small_vector_options_test.test | 10 | 0.000993s | 0.000890s | 0.001042s | byte equality observed |
| small_vector_test.test | 7 | 0.001622s | 0.001516s | 0.002709s | byte equality observed |
| stable_vector_test.test | 1 | 0.019960s | 0.020150s | 0.020855s | byte equality observed |
| static_vector_options_test.test | 10 | 0.000973s | 0.000865s | 0.001036s | byte equality observed |
| static_vector_test.test | 10 | 0.001123s | 0.001053s | 0.001119s | byte equality observed |
| string_options_test.test | 10 | 0.000895s | 0.000912s | 0.000907s | byte equality observed |
| string_test.test | 3 | 0.007744s | 0.008049s | 0.008337s | byte equality observed |
| string_view_compat_test.test | 10 | 0.000866s | 0.000848s | 0.000893s | byte equality observed |
| synchronized_pool_resource_test.test | 10 | 0.000931s | 0.000901s | 0.000938s | byte equality observed |
| throw_exception_test.test | 10 | 0.000838s | 0.000827s | 0.000897s | byte equality observed |
| tree_test.test | 10 | 0.000842s | 0.000828s | 0.000863s | byte equality observed |
| unsynchronized_pool_resource_test.test | 10 | 0.000900s | 0.000891s | 0.000932s | byte equality observed |
| uses_allocator_construction_test.test | 10 | 0.000859s | 0.000863s | 0.000873s | byte equality observed |
| uses_allocator_test.test | 10 | 0.000397s | 0.000377s | 0.000875s | byte equality observed |
| vector_options_test.test | 10 | 0.000983s | 0.000997s | 0.000987s | byte equality observed |
| vector_test.test | 5 | 0.002853s | 0.002920s | 0.003838s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43686398833).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
