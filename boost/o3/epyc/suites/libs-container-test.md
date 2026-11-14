# libs/container/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| vector_test.test | RUN | 6.784220 | 31.449129 | 26.985798 | 0.005780 | 0.005185 | 0.007734 |
| vector_options_test.test | RUN | 0.318862 | 1.454769 | 1.154534 | 0.002076 | 0.002060 | 0.001672 |
| uses_allocator_test.test | RUN | 0.060426 | 0.124759 | 0.162415 | 0.000730 | 0.000724 | 0.001848 |
| uses_allocator_construction_test.test | RUN | 0.173921 | 0.452930 | 0.578300 | 0.001635 | 0.001784 | 0.001820 |
| unsynchronized_pool_resource_test.test | RUN | 0.216172 | 1.328313 | 0.685086 | 0.001653 | 0.001830 | 0.001770 |
| tree_test.test | RUN | 0.966374 | 4.759435 | 3.819481 | 0.001711 | 0.001788 | 0.001723 |
| throw_exception_test.test | RUN | 0.120133 | 0.253959 | 0.345930 | 0.001327 | 0.001794 | 0.001735 |
| synchronized_pool_resource_test.test | RUN | 0.216513 | 1.315255 | 0.696351 | 0.001692 | 0.001963 | 0.001833 |
| string_view_compat_test.test | RUN | 0.360130 | 2.662569 | 1.360040 | 0.001689 | 0.001889 | 0.001623 |
| string_test.test | RUN | 1.562460 | 10.056338 | 7.220498 | 0.015930 | 0.015679 | 0.015376 |
| string_options_test.test | RUN | 0.285319 | 2.119546 | 1.203401 | 0.001851 | 0.001948 | 0.001910 |
| static_vector_test.test | RUN | 1.711206 | 8.357482 | 7.215913 | 0.002307 | 0.002420 | 0.002332 |
| static_vector_options_test.test | RUN | 0.210591 | 0.589173 | 0.691877 | 0.001876 | 0.001948 | 0.001831 |
| stable_vector_test.test | RUN | 3.808878 | 17.166316 | 13.768644 | 0.030912 | 0.032008 | 0.032607 |
| small_vector_test.test | RUN | 2.599352 | 12.079804 | 9.969196 | 0.003619 | 0.003346 | 0.004917 |
| small_vector_options_test.test | RUN | 0.353299 | 1.480891 | 1.368907 | 0.001850 | 0.002004 | 0.001836 |
| slist_test.test | RUN | 2.364540 | 10.801134 | 8.806252 | 0.025101 | 0.024921 | 0.024785 |
| set_test.test | RUN | 3.587299 | 20.147717 | 16.314561 | 0.015102 | 0.013847 | 0.014901 |
| segtor_test.test | RUN | 4.600745 | 22.051171 | 18.010408 | 0.734141 | 0.647650 | 0.658717 |
| segtor_options_test.test | RUN | 0.243268 | 0.669078 | 0.809640 | 0.001746 | 0.001849 | 0.001934 |
| scoped_allocator_usage_test.test | RUN | 0.831940 | 3.362894 | 3.051274 | 0.001677 | 0.001663 | 0.001764 |
| scoped_allocator_adaptor_test.test | RUN | 0.386680 | 0.899472 | 1.416006 | 0.001754 | 0.001702 | 0.001480 |
| resource_adaptor_test.test | RUN | 0.193581 | 0.557606 | 0.622906 | 0.001428 | 0.001916 | 0.001529 |
| polymorphic_allocator_test.test | RUN | 0.159819 | 0.479064 | 0.508554 | 0.001514 | 0.001854 | 0.001868 |
| pmr_vector_test.test | RUN | 0.094370 | 0.187203 | 0.291323 | 0.000638 | 0.000826 | 0.001540 |
| pmr_string_test.test | RUN | 0.183881 | 0.393890 | 0.524094 | 0.000584 | 0.000870 | 0.001735 |
| pmr_stable_vector_test.test | RUN | 0.202346 | 0.604671 | 0.711303 | 0.001730 | 0.001609 | 0.001759 |
| pmr_small_vector_test.test | RUN | 0.109082 | 0.248091 | 0.317479 | 0.001752 | 0.001794 | 0.001738 |
| pmr_slist_test.test | RUN | 0.148626 | 0.770021 | 0.697360 | 0.001515 | 0.001678 | 0.001688 |
| pmr_set_test.test | RUN | 0.171447 | 0.409049 | 0.566414 | 0.001535 | 0.001817 | 0.001618 |
| pmr_nest_test.test | RUN | 0.134750 | 0.276282 | 0.396943 | 0.001681 | 0.001818 | 0.001785 |
| pmr_map_test.test | RUN | 0.176335 | 0.429599 | 0.555365 | 0.001526 | 0.002036 | 0.001757 |
| pmr_list_test.test | RUN | 0.117481 | 0.267265 | 0.348315 | 0.001682 | 0.001584 | 0.001760 |
| pmr_hub_test.test | RUN | 0.165552 | 0.376621 | 0.447019 | 0.001728 | 0.001667 | 0.001706 |
| pmr_flat_set_test.test | RUN | 0.127769 | 0.282649 | 0.377684 | 0.001760 | 0.001767 | 0.001654 |
| pmr_flat_map_test.test | RUN | 0.157034 | 0.334575 | 0.445467 | 0.001658 | 0.001904 | 0.001762 |
| pmr_devector_test.test | RUN | 0.103023 | 0.279238 | 0.322976 | 0.001734 | 0.001636 | 0.001654 |
| pmr_deque_test.test | RUN | 0.100867 | 0.231829 | 0.320881 | 0.001755 | 0.001793 | 0.001681 |
| pair_test.test | RUN | 0.255067 | 0.560176 | 0.776194 | 0.001863 | 0.001739 | 0.001678 |
| null_iterators_test.test | RUN | 0.401997 | 1.084584 | 1.228871 | 0.001670 | 0.001840 | 0.001720 |
| node_handle_test.test | RUN | 0.178724 | 1.338173 | 0.521349 | 0.001749 | 0.001864 | 0.001751 |
| node_allocator_test.test | RUN | 2.798622 | 13.087923 | 11.014205 | 0.010031 | 0.009967 | 0.010416 |
| new_delete_resource_test.test | RUN | 0.207997 | 0.817682 | 0.702325 | 0.002572 | 0.002420 | 0.002404 |
| nest_test.test | RUN | 0.529453 | 3.667841 | 2.475267 | 0.001706 | 0.001808 | 0.001756 |
| nest_api_test.test | RUN | 0.997456 | 6.825144 | 4.821614 | 0.002606 | 0.002731 | 0.002399 |
| monotonic_buffer_resource_test.test | RUN | 0.199184 | 1.433542 | 0.736958 | 0.001894 | 0.001774 | 0.001796 |
| memory_resource_test.test | RUN | 0.129711 | 0.417037 | 0.437791 | 0.001736 | 0.001589 | 0.001389 |
| map_test.test | RUN | 5.062853 | 22.774656 | 23.384924 | 0.011445 | 0.010196 | 0.010894 |
| list_test.test | RUN | 2.566914 | 11.566051 | 9.599333 | 0.025307 | 0.025581 | 0.025403 |
| is_constructible_test.test | RUN | 0.081489 | 0.163017 | 0.249415 | 0.000699 | 0.000789 | 0.001734 |
| insert_vs_emplace_test.test | RUN | 0.264560 | 0.936284 | 1.377010 | 0.001834 | 0.001875 | 0.001808 |
| hub_uses_allocator_test.test | RUN | 0.273566 | 0.846557 | 0.979925 | 0.001524 | 0.001967 | 0.001590 |
| hub_stability_test.test | RUN | 0.598006 | 3.677702 | 3.190727 | 0.002042 | 0.002098 | 0.002155 |
| hub_sort_test.test | RUN | 0.384233 | 1.707387 | 1.576016 | 0.522198 | 0.527071 | 0.499957 |
| hub_pocxx_test.test | RUN | 0.353378 | 2.001064 | 1.207839 | 0.001693 | 0.001900 | 0.001658 |
| hub_new_extended_alignment_test.test | RUN | 0.202972 | 0.603565 | 0.680506 | 0.001806 | 0.001718 | 0.001581 |
| hub_exception_safety_test.test | RUN | 0.708710 | 4.618424 | 3.335483 | 0.094490 | 0.090182 | 0.094960 |
| hub_empty_sort_test.test | RUN | 0.222827 | 0.556791 | 0.800923 | 0.001756 | 0.001762 | 0.001656 |
| hub_api_test.test | RUN | 2.417380 | 18.488069 | 10.051739 | 0.004309 | 0.003806 | 0.003421 |
| global_resource_test.test | RUN | 0.131637 | 0.383465 | 0.408951 | 0.001762 | 0.001815 | 0.001770 |
| flat_tree_test.test | RUN | 4.460907 | 28.684904 | 19.649223 | 0.001812 | 0.001786 | 0.001712 |
| flat_set_test.test | RUN | 5.568252 | 36.244573 | 25.578602 | 0.008371 | 0.007351 | 0.008093 |
| flat_set_adaptor_test.test | RUN | 4.187628 | 31.877621 | 20.199665 | 0.008125 | 0.007660 | 0.008482 |
| flat_map_test.test | RUN | 9.112199 | 53.790393 | 41.891831 | 0.008543 | 0.009017 | 0.008436 |
| flat_map_adaptor_test.test | RUN | 5.829022 | 39.264292 | 29.873722 | 0.008637 | 0.008149 | 0.008186 |
| explicit_inst_vector_test.test | RUN | 0.887259 | 5.275405 | 4.502156 | 0.001674 | 0.001772 | 0.001757 |
| explicit_inst_string_test.test | RUN | 1.135492 | 9.308343 | 5.939243 | 0.001730 | 0.001707 | 0.001694 |
| explicit_inst_static_vector_test.test | RUN | 0.118424 | 0.357809 | 0.442927 | 0.001400 | 0.001744 | 0.001682 |
| explicit_inst_stable_vector_test.test | RUN | 0.711319 | 3.383756 | 2.823764 | 0.001746 | 0.001787 | 0.001690 |
| explicit_inst_small_vector_test.test | RUN | 0.606534 | 3.096776 | 2.640996 | 0.001667 | 0.001908 | 0.001720 |
| explicit_inst_slist_test.test | RUN | 0.453780 | 2.811241 | 1.966779 | 0.001695 | 0.001836 | 0.001620 |
| explicit_inst_set_test.test | RUN | 0.647206 | 3.217276 | 2.433395 | 0.001736 | 0.002022 | 0.001762 |
| explicit_inst_map_test.test | RUN | 0.709958 | 3.375354 | 2.626514 | 0.001722 | 0.001758 | 0.001666 |
| explicit_inst_list_test.test | RUN | 0.160464 | 0.773309 | 0.666786 | 0.001731 | 0.001784 | 0.001608 |
| explicit_inst_flat_set_test.test | RUN | 3.761017 | 24.122058 | 15.072494 | 0.001773 | 0.001897 | 0.001748 |
| explicit_inst_flat_map_test.test | RUN | 3.984017 | 25.240443 | 16.907579 | 0.001516 | 0.001654 | 0.001707 |
| explicit_inst_devector_test.test | RUN | 0.461605 | 3.055978 | 2.095169 | 0.001576 | 0.001720 | 0.001737 |
| explicit_inst_deque_test.test | RUN | 0.506916 | 3.356871 | 2.244463 | 0.001772 | 0.001781 | 0.001648 |
| devector_test.test | RUN | 7.149410 | 40.289860 | 29.333152 | 0.003748 | 0.003504 | 0.004670 |
| devector_options_test.test | RUN | 0.314433 | 1.809524 | 1.223479 | 0.002148 | 0.002062 | 0.001968 |
| deque_test.test | RUN | 5.004291 | 23.542091 | 18.066411 | 0.432546 | 0.359346 | 0.430235 |
| deque_options_test.test | RUN | 0.227755 | 0.693153 | 0.940212 | 0.001774 | 0.001955 | 0.001872 |
| copy_move_algo_test.test | RUN | 0.230778 | 0.808642 | 0.818545 | 0.001943 | 0.001760 | 0.001790 |
| common_iterator_test.test | RUN | 0.018369 | 0.044610 | 0.046689 | 0.000711 | 0.000658 | 0.001702 |
| boost_iterator_comp_test.test | RUN | 0.340371 | 0.974632 | 1.247073 | 0.001762 | 0.001892 | 0.001868 |
| allocator_traits_test.test | RUN | 0.196748 | 0.445578 | 0.624860 | 0.001544 | 0.001745 | 0.001836 |
| alloc_full_test.test | RUN | 0.216228 | 0.895668 | 0.844408 | 0.004687 | 0.005017 | 0.004853 |
| alloc_basic_test.test | RUN | 0.176305 | 0.650370 | 0.609382 | 0.001547 | 0.001850 | 0.001854 |
| adaptive_pool_test.test | RUN | 1.996873 | 10.034360 | 7.253046 | 0.010124 | 0.009638 | 0.010342 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.905× | 0.910×, 0.900× | 0.977× |
| clang | 0.959× | 0.957×, 0.961× | 1.015× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1361 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43632677224).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| adaptive_pool_test.test | 2 | 0.010380s | 0.009673s | 0.010679s | byte equality observed |
| alloc_basic_test.test | 10 | 0.001062s | 0.001045s | 0.001075s | byte equality observed |
| alloc_full_test.test | 7 | 0.002997s | 0.002974s | 0.003057s | byte equality observed |
| allocator_traits_test.test | 10 | 0.000973s | 0.000967s | 0.000981s | byte equality observed |
| boost_iterator_comp_test.test | 10 | 0.001025s | 0.001017s | 0.001018s | byte equality observed |
| common_iterator_test.test | 10 | 0.000456s | 0.000453s | 0.000985s | byte equality observed |
| copy_move_algo_test.test | 10 | 0.001227s | 0.001084s | 0.001123s | byte equality observed |
| deque_options_test.test | 10 | 0.001040s | 0.001031s | 0.001059s | byte equality observed |
| deque_test.test | 1 | 0.460538s | 0.401956s | 0.458810s | byte equality observed |
| devector_options_test.test | 10 | 0.001148s | 0.001085s | 0.001084s | byte equality observed |
| devector_test.test | 5 | 0.003215s | 0.003097s | 0.004285s | byte equality observed |
| explicit_inst_deque_test.test | 10 | 0.000947s | 0.000945s | 0.000935s | byte equality observed |
| explicit_inst_devector_test.test | 10 | 0.000941s | 0.000947s | 0.000927s | byte equality observed |
| explicit_inst_flat_map_test.test | 10 | 0.000939s | 0.000951s | 0.000930s | byte equality observed |
| explicit_inst_flat_set_test.test | 10 | 0.000932s | 0.000942s | 0.000940s | byte equality observed |
| explicit_inst_list_test.test | 10 | 0.000925s | 0.000939s | 0.000920s | byte equality observed |
| explicit_inst_map_test.test | 10 | 0.000935s | 0.000950s | 0.000925s | byte equality observed |
| explicit_inst_set_test.test | 10 | 0.000953s | 0.000943s | 0.000946s | byte equality observed |
| explicit_inst_slist_test.test | 10 | 0.000948s | 0.000943s | 0.000928s | byte equality observed |
| explicit_inst_small_vector_test.test | 10 | 0.000937s | 0.000945s | 0.000929s | byte equality observed |
| explicit_inst_stable_vector_test.test | 10 | 0.000942s | 0.000948s | 0.000935s | byte equality observed |
| explicit_inst_static_vector_test.test | 10 | 0.000932s | 0.000935s | 0.000919s | byte equality observed |
| explicit_inst_string_test.test | 10 | 0.000953s | 0.000943s | 0.000929s | byte equality observed |
| explicit_inst_vector_test.test | 10 | 0.000949s | 0.000943s | 0.000926s | byte equality observed |
| flat_map_adaptor_test.test | 4 | 0.005902s | 0.005777s | 0.005732s | byte equality observed |
| flat_map_test.test | 4 | 0.006336s | 0.005973s | 0.005939s | byte equality observed |
| flat_set_adaptor_test.test | 3 | 0.005931s | 0.005320s | 0.005908s | byte equality observed |
| flat_set_test.test | 4 | 0.005934s | 0.005150s | 0.005816s | byte equality observed |
| flat_tree_test.test | 10 | 0.000970s | 0.000954s | 0.000953s | byte equality observed |
| global_resource_test.test | 10 | 0.000999s | 0.000978s | 0.000974s | byte equality observed |
| hub_api_test.test | 7 | 0.002684s | 0.002286s | 0.002152s | byte equality observed |
| hub_empty_sort_test.test | 10 | 0.000963s | 0.000965s | 0.000941s | byte equality observed |
| hub_exception_safety_test.test | 1 | 0.068650s | 0.061630s | 0.063482s | byte equality observed |
| hub_new_extended_alignment_test.test | 10 | 0.001021s | 0.001006s | 0.001001s | byte equality observed |
| hub_pocxx_test.test | 10 | 0.000992s | 0.000992s | 0.000969s | byte equality observed |
| hub_sort_test.test | 1 | 0.438380s | 0.431381s | 0.426669s | byte equality observed |
| hub_stability_test.test | 10 | 0.001198s | 0.001168s | 0.001207s | byte equality observed |
| hub_uses_allocator_test.test | 10 | 0.000964s | 0.000935s | 0.000962s | byte equality observed |
| insert_vs_emplace_test.test | 10 | 0.000986s | 0.000970s | 0.000995s | byte equality observed |
| is_constructible_test.test | 10 | 0.000443s | 0.000437s | 0.000944s | byte equality observed |
| list_test.test | 2 | 0.016976s | 0.017486s | 0.017743s | byte equality observed |
| map_test.test | 3 | 0.007719s | 0.007644s | 0.007773s | byte equality observed |
| memory_resource_test.test | 10 | 0.000978s | 0.000952s | 0.000978s | byte equality observed |
| monotonic_buffer_resource_test.test | 10 | 0.000994s | 0.000964s | 0.000988s | byte equality observed |
| nest_api_test.test | 10 | 0.001587s | 0.001591s | 0.001638s | byte equality observed |
| nest_test.test | 10 | 0.000998s | 0.000977s | 0.001012s | byte equality observed |
| new_delete_resource_test.test | 10 | 0.001428s | 0.001393s | 0.001424s | byte equality observed |
| node_allocator_test.test | 3 | 0.007084s | 0.006964s | 0.007175s | byte equality observed |
| node_handle_test.test | 10 | 0.000969s | 0.000967s | 0.000988s | byte equality observed |
| null_iterators_test.test | 10 | 0.000960s | 0.000953s | 0.000994s | byte equality observed |
| pair_test.test | 10 | 0.000957s | 0.000945s | 0.000971s | byte equality observed |
| pmr_deque_test.test | 10 | 0.000959s | 0.000936s | 0.000949s | byte equality observed |
| pmr_devector_test.test | 10 | 0.000967s | 0.000938s | 0.000961s | byte equality observed |
| pmr_flat_map_test.test | 10 | 0.000941s | 0.000931s | 0.000971s | byte equality observed |
| pmr_flat_set_test.test | 10 | 0.000940s | 0.000930s | 0.000959s | byte equality observed |
| pmr_hub_test.test | 10 | 0.000939s | 0.000960s | 0.000972s | byte equality observed |
| pmr_list_test.test | 10 | 0.000942s | 0.000949s | 0.000949s | byte equality observed |
| pmr_map_test.test | 10 | 0.000946s | 0.000940s | 0.000953s | byte equality observed |
| pmr_nest_test.test | 10 | 0.000967s | 0.000944s | 0.000969s | byte equality observed |
| pmr_set_test.test | 10 | 0.000959s | 0.000949s | 0.000960s | byte equality observed |
| pmr_slist_test.test | 10 | 0.000950s | 0.000940s | 0.000985s | byte equality observed |
| pmr_small_vector_test.test | 10 | 0.000977s | 0.000940s | 0.000944s | byte equality observed |
| pmr_stable_vector_test.test | 10 | 0.000982s | 0.000960s | 0.000965s | byte equality observed |
| pmr_string_test.test | 10 | 0.000455s | 0.000450s | 0.001043s | byte equality observed |
| pmr_vector_test.test | 10 | 0.000458s | 0.000458s | 0.000985s | byte equality observed |
| polymorphic_allocator_test.test | 10 | 0.001016s | 0.000996s | 0.000993s | byte equality observed |
| resource_adaptor_test.test | 10 | 0.001026s | 0.001050s | 0.001008s | byte equality observed |
| scoped_allocator_adaptor_test.test | 10 | 0.001014s | 0.000984s | 0.001021s | byte equality observed |
| scoped_allocator_usage_test.test | 10 | 0.000993s | 0.001013s | 0.001001s | byte equality observed |
| segtor_options_test.test | 10 | 0.001009s | 0.001041s | 0.000997s | byte equality observed |
| segtor_test.test | 1 | 0.441085s | 0.375991s | 0.374990s | byte equality observed |
| set_test.test | 2 | 0.010958s | 0.009670s | 0.011064s | byte equality observed |
| slist_test.test | 2 | 0.016764s | 0.016875s | 0.017036s | byte equality observed |
| small_vector_options_test.test | 10 | 0.001063s | 0.001042s | 0.001063s | byte equality observed |
| small_vector_test.test | 6 | 0.002083s | 0.001908s | 0.003557s | byte equality observed |
| stable_vector_test.test | 1 | 0.025263s | 0.025390s | 0.026446s | byte equality observed |
| static_vector_options_test.test | 10 | 0.001035s | 0.001017s | 0.001040s | byte equality observed |
| static_vector_test.test | 10 | 0.001307s | 0.001234s | 0.001266s | byte equality observed |
| string_options_test.test | 10 | 0.001005s | 0.000999s | 0.001005s | byte equality observed |
| string_test.test | 2 | 0.010918s | 0.011719s | 0.011390s | byte equality observed |
| string_view_compat_test.test | 10 | 0.000948s | 0.000964s | 0.000981s | byte equality observed |
| synchronized_pool_resource_test.test | 10 | 0.001007s | 0.001022s | 0.001010s | byte equality observed |
| throw_exception_test.test | 10 | 0.000948s | 0.000932s | 0.000952s | byte equality observed |
| tree_test.test | 10 | 0.000945s | 0.000948s | 0.000947s | byte equality observed |
| unsynchronized_pool_resource_test.test | 10 | 0.001000s | 0.001024s | 0.001028s | byte equality observed |
| uses_allocator_construction_test.test | 10 | 0.000937s | 0.000934s | 0.000954s | byte equality observed |
| uses_allocator_test.test | 10 | 0.000430s | 0.000447s | 0.000931s | byte equality observed |
| vector_options_test.test | 10 | 0.001092s | 0.001080s | 0.001096s | byte equality observed |
| vector_test.test | 4 | 0.003477s | 0.003406s | 0.004863s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43632677224).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
