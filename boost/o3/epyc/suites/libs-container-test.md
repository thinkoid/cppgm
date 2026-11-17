# libs/container/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| vector_test.test | RUN | 8.086855 | 42.730296 | 39.082929 | 0.006965 | 0.006546 | 0.009430 |
| vector_options_test.test | RUN | 0.414239 | 2.024256 | 1.764433 | 0.002340 | 0.002354 | 0.002361 |
| uses_allocator_test.test | RUN | 0.080153 | 0.169753 | 0.251601 | 0.000855 | 0.000830 | 0.002070 |
| uses_allocator_construction_test.test | RUN | 0.232750 | 0.640108 | 0.873877 | 0.001975 | 0.002056 | 0.001971 |
| unsynchronized_pool_resource_test.test | RUN | 0.285220 | 1.833415 | 1.144185 | 0.002036 | 0.002167 | 0.002196 |
| tree_test.test | RUN | 1.212860 | 6.432895 | 5.870176 | 0.002040 | 0.002170 | 0.002107 |
| throw_exception_test.test | RUN | 0.173160 | 0.408780 | 0.611406 | 0.001877 | 0.002062 | 0.002100 |
| synchronized_pool_resource_test.test | RUN | 0.289909 | 1.878142 | 1.139150 | 0.002050 | 0.002317 | 0.002260 |
| string_view_compat_test.test | RUN | 0.476576 | 3.704568 | 2.225406 | 0.001890 | 0.002023 | 0.002122 |
| string_test.test | RUN | 1.992622 | 13.838413 | 11.104300 | 0.023522 | 0.021673 | 0.023051 |
| string_options_test.test | RUN | 0.385654 | 2.831081 | 1.679367 | 0.001763 | 0.002264 | 0.001904 |
| static_vector_test.test | RUN | 2.068052 | 11.322467 | 10.755208 | 0.002742 | 0.002675 | 0.002494 |
| static_vector_options_test.test | RUN | 0.287885 | 0.784148 | 1.082230 | 0.002164 | 0.002248 | 0.002327 |
| stable_vector_test.test | RUN | 4.475126 | 23.168542 | 20.749047 | 0.037603 | 0.037075 | 0.039092 |
| small_vector_test.test | RUN | 3.033130 | 16.136881 | 14.682421 | 0.004286 | 0.003936 | 0.007057 |
| small_vector_options_test.test | RUN | 0.467809 | 2.011342 | 2.074165 | 0.002280 | 0.002217 | 0.002342 |
| slist_test.test | RUN | 2.837614 | 14.695343 | 13.363956 | 0.033522 | 0.034078 | 0.034666 |
| set_test.test | RUN | 4.380458 | 27.688369 | 23.488437 | 0.020649 | 0.018622 | 0.019560 |
| segtor_test.test | RUN | 5.314011 | 30.122794 | 26.823233 | 0.866032 | 0.912340 | 0.921533 |
| segtor_options_test.test | RUN | 0.333208 | 0.908922 | 1.379720 | 0.001988 | 0.002258 | 0.002088 |
| scoped_allocator_usage_test.test | RUN | 1.038112 | 4.569634 | 4.673331 | 0.002030 | 0.001807 | 0.001940 |
| scoped_allocator_adaptor_test.test | RUN | 0.497058 | 1.398038 | 2.200759 | 0.002114 | 0.001886 | 0.001944 |
| resource_adaptor_test.test | RUN | 0.263340 | 0.782954 | 0.961143 | 0.002016 | 0.001886 | 0.002143 |
| polymorphic_allocator_test.test | RUN | 0.224592 | 0.637860 | 0.840370 | 0.001884 | 0.001862 | 0.001895 |
| pmr_vector_test.test | RUN | 0.130789 | 0.239934 | 0.400125 | 0.000810 | 0.000983 | 0.002084 |
| pmr_string_test.test | RUN | 0.250168 | 0.523920 | 0.863546 | 0.000820 | 0.000882 | 0.001867 |
| pmr_stable_vector_test.test | RUN | 0.271604 | 0.819752 | 1.129198 | 0.001776 | 0.001771 | 0.001893 |
| pmr_small_vector_test.test | RUN | 0.148050 | 0.356067 | 0.521839 | 0.001870 | 0.001863 | 0.001950 |
| pmr_slist_test.test | RUN | 0.208769 | 1.032947 | 1.020101 | 0.001868 | 0.001995 | 0.001905 |
| pmr_set_test.test | RUN | 0.234640 | 0.589782 | 0.873134 | 0.001864 | 0.001954 | 0.002126 |
| pmr_nest_test.test | RUN | 0.178897 | 0.403036 | 0.538314 | 0.001625 | 0.001992 | 0.001770 |
| pmr_map_test.test | RUN | 0.244156 | 0.607547 | 0.870234 | 0.002048 | 0.002008 | 0.002014 |
| pmr_list_test.test | RUN | 0.159352 | 0.364304 | 0.560728 | 0.001916 | 0.002146 | 0.002066 |
| pmr_hub_test.test | RUN | 0.229013 | 0.528840 | 0.789335 | 0.002038 | 0.002015 | 0.002093 |
| pmr_flat_set_test.test | RUN | 0.179333 | 0.380589 | 0.621275 | 0.001855 | 0.001827 | 0.002168 |
| pmr_flat_map_test.test | RUN | 0.204278 | 0.448770 | 0.683466 | 0.002040 | 0.001776 | 0.001916 |
| pmr_devector_test.test | RUN | 0.141042 | 0.395046 | 0.569205 | 0.001750 | 0.001940 | 0.002052 |
| pmr_deque_test.test | RUN | 0.141538 | 0.304993 | 0.478123 | 0.001858 | 0.002162 | 0.001836 |
| pair_test.test | RUN | 0.336808 | 0.787965 | 1.198901 | 0.001834 | 0.002146 | 0.001889 |
| null_iterators_test.test | RUN | 0.470381 | 1.527452 | 1.830378 | 0.001833 | 0.002052 | 0.002109 |
| node_handle_test.test | RUN | 0.230303 | 1.835592 | 0.812277 | 0.001874 | 0.002009 | 0.002082 |
| node_allocator_test.test | RUN | 3.371630 | 18.175776 | 16.637725 | 0.013217 | 0.013513 | 0.011744 |
| new_delete_resource_test.test | RUN | 0.287880 | 1.103054 | 1.093085 | 0.002964 | 0.002805 | 0.003256 |
| nest_test.test | RUN | 0.699119 | 4.842829 | 3.728856 | 0.002101 | 0.002062 | 0.002152 |
| nest_api_test.test | RUN | 1.201879 | 9.595219 | 6.826719 | 0.003238 | 0.003404 | 0.003492 |
| monotonic_buffer_resource_test.test | RUN | 0.299389 | 1.959248 | 1.122620 | 0.001838 | 0.002108 | 0.002118 |
| memory_resource_test.test | RUN | 0.178524 | 0.575301 | 0.672114 | 0.001974 | 0.001938 | 0.002130 |
| map_test.test | RUN | 5.753645 | 30.474472 | 34.814698 | 0.015090 | 0.014337 | 0.014120 |
| list_test.test | RUN | 3.066669 | 15.859457 | 14.125527 | 0.033586 | 0.033711 | 0.035436 |
| is_constructible_test.test | RUN | 0.117095 | 0.224366 | 0.396631 | 0.000930 | 0.000919 | 0.002222 |
| insert_vs_emplace_test.test | RUN | 0.339130 | 1.348386 | 2.030200 | 0.002054 | 0.002138 | 0.002132 |
| hub_uses_allocator_test.test | RUN | 0.378534 | 1.134857 | 1.496016 | 0.002084 | 0.002138 | 0.002156 |
| hub_stability_test.test | RUN | 0.801497 | 5.211859 | 4.781351 | 0.002338 | 0.002762 | 0.002610 |
| hub_sort_test.test | RUN | 0.517838 | 2.370082 | 2.383658 | 0.640545 | 0.626826 | 0.616490 |
| hub_pocxx_test.test | RUN | 0.430683 | 2.751068 | 1.838817 | 0.002120 | 0.002348 | 0.001930 |
| hub_new_extended_alignment_test.test | RUN | 0.267383 | 0.849968 | 0.988568 | 0.002016 | 0.002025 | 0.002119 |
| hub_exception_safety_test.test | RUN | 0.933705 | 6.514646 | 4.666421 | 0.108385 | 0.115424 | 0.116272 |
| hub_empty_sort_test.test | RUN | 0.314258 | 0.812595 | 1.186544 | 0.002040 | 0.002170 | 0.002128 |
| hub_api_test.test | RUN | 3.062560 | 26.652633 | 16.165485 | 0.005042 | 0.004446 | 0.004328 |
| global_resource_test.test | RUN | 0.172100 | 0.542916 | 0.655248 | 0.001977 | 0.002056 | 0.002108 |
| flat_tree_test.test | RUN | 5.331431 | 38.675302 | 28.725705 | 0.001996 | 0.001982 | 0.002130 |
| flat_set_test.test | RUN | 6.742151 | 49.755373 | 37.628304 | 0.010883 | 0.010117 | 0.010832 |
| flat_set_adaptor_test.test | RUN | 4.967373 | 44.490067 | 30.133908 | 0.011218 | 0.010558 | 0.010691 |
| flat_map_test.test | RUN | 10.759830 | 73.202231 | 61.220760 | 0.011799 | 0.011215 | 0.011100 |
| flat_map_adaptor_test.test | RUN | 6.826139 | 54.234807 | 44.268639 | 0.010976 | 0.010483 | 0.010789 |
| explicit_inst_vector_test.test | RUN | 1.156175 | 7.487802 | 6.620725 | 0.002048 | 0.002358 | 0.002006 |
| explicit_inst_string_test.test | RUN | 1.471863 | 13.018373 | 8.776926 | 0.001929 | 0.002012 | 0.001970 |
| explicit_inst_static_vector_test.test | RUN | 0.162008 | 0.504671 | 0.700773 | 0.002003 | 0.002084 | 0.002053 |
| explicit_inst_stable_vector_test.test | RUN | 0.906042 | 4.711857 | 4.253296 | 0.002027 | 0.002068 | 0.002106 |
| explicit_inst_small_vector_test.test | RUN | 0.777399 | 4.307114 | 3.803981 | 0.002050 | 0.002101 | 0.002252 |
| explicit_inst_slist_test.test | RUN | 0.609867 | 3.911107 | 3.135083 | 0.002020 | 0.002152 | 0.002056 |
| explicit_inst_set_test.test | RUN | 0.834435 | 4.472100 | 3.637026 | 0.002088 | 0.002080 | 0.002116 |
| explicit_inst_map_test.test | RUN | 0.885783 | 4.631956 | 3.965940 | 0.002002 | 0.002224 | 0.001900 |
| explicit_inst_list_test.test | RUN | 0.210573 | 1.084065 | 0.980455 | 0.001911 | 0.002090 | 0.002018 |
| explicit_inst_flat_set_test.test | RUN | 4.366324 | 32.928143 | 22.221018 | 0.001992 | 0.002065 | 0.002218 |
| explicit_inst_flat_map_test.test | RUN | 4.806885 | 34.587277 | 25.374629 | 0.001838 | 0.002070 | 0.002092 |
| explicit_inst_devector_test.test | RUN | 0.629730 | 4.185100 | 3.312944 | 0.001930 | 0.002134 | 0.002058 |
| explicit_inst_deque_test.test | RUN | 0.650558 | 4.455095 | 3.615339 | 0.002140 | 0.002062 | 0.001911 |
| devector_test.test | RUN | 8.551538 | 52.814274 | 39.555766 | 0.004368 | 0.004210 | 0.005490 |
| devector_options_test.test | RUN | 0.403762 | 2.497628 | 1.931415 | 0.002442 | 0.002445 | 0.002343 |
| deque_test.test | RUN | 5.692824 | 31.272779 | 29.221792 | 0.426068 | 0.446036 | 0.547320 |
| deque_options_test.test | RUN | 0.326925 | 0.907296 | 1.497270 | 0.001871 | 0.002086 | 0.002341 |
| copy_move_algo_test.test | RUN | 0.299155 | 1.167206 | 1.311393 | 0.002322 | 0.002401 | 0.002209 |
| common_iterator_test.test | RUN | 0.024747 | 0.060532 | 0.068123 | 0.000854 | 0.000804 | 0.001651 |
| boost_iterator_comp_test.test | RUN | 0.452549 | 1.418642 | 1.934457 | 0.001890 | 0.002152 | 0.002181 |
| allocator_traits_test.test | RUN | 0.270857 | 0.599337 | 0.802307 | 0.001920 | 0.002154 | 0.002160 |
| alloc_full_test.test | RUN | 0.288360 | 1.265044 | 1.284876 | 0.006180 | 0.006294 | 0.006304 |
| alloc_basic_test.test | RUN | 0.242167 | 0.886965 | 0.998700 | 0.001965 | 0.002202 | 0.002288 |
| adaptive_pool_test.test | RUN | 2.357477 | 13.344107 | 16.783798 | 0.012552 | 0.011932 | 0.018279 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.995× | 0.991×, 0.998× | 1.005× |
| clang | 1.053× | 1.048×, 1.058× | 0.995× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1359 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44000592280).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| adaptive_pool_test.test | 2 | 0.013136s | 0.012508s | 0.012978s | byte equality observed |
| alloc_basic_test.test | 10 | 0.001288s | 0.001286s | 0.001268s | byte equality observed |
| alloc_full_test.test | 6 | 0.003765s | 0.003951s | 0.003932s | byte equality observed |
| allocator_traits_test.test | 10 | 0.001193s | 0.001179s | 0.001164s | byte equality observed |
| boost_iterator_comp_test.test | 10 | 0.001263s | 0.001241s | 0.001227s | byte equality observed |
| common_iterator_test.test | 10 | 0.000562s | 0.000598s | 0.001172s | byte equality observed |
| copy_move_algo_test.test | 10 | 0.001430s | 0.001373s | 0.001360s | byte equality observed |
| deque_options_test.test | 10 | 0.001289s | 0.001319s | 0.001273s | byte equality observed |
| deque_test.test | 1 | 0.469068s | 0.468352s | 0.580979s | byte equality observed |
| devector_options_test.test | 10 | 0.001443s | 0.001342s | 0.001314s | byte equality observed |
| devector_test.test | 4 | 0.003700s | 0.003722s | 0.004866s | byte equality observed |
| explicit_inst_deque_test.test | 10 | 0.001155s | 0.001168s | 0.001136s | byte equality observed |
| explicit_inst_devector_test.test | 10 | 0.001132s | 0.001153s | 0.001149s | byte equality observed |
| explicit_inst_flat_map_test.test | 10 | 0.001134s | 0.001160s | 0.001133s | byte equality observed |
| explicit_inst_flat_set_test.test | 10 | 0.001148s | 0.001180s | 0.001126s | byte equality observed |
| explicit_inst_list_test.test | 10 | 0.001136s | 0.001137s | 0.001132s | byte equality observed |
| explicit_inst_map_test.test | 10 | 0.001138s | 0.001165s | 0.001141s | byte equality observed |
| explicit_inst_set_test.test | 10 | 0.001142s | 0.001148s | 0.001127s | byte equality observed |
| explicit_inst_slist_test.test | 10 | 0.001145s | 0.001142s | 0.001129s | byte equality observed |
| explicit_inst_small_vector_test.test | 10 | 0.001147s | 0.001144s | 0.001133s | byte equality observed |
| explicit_inst_stable_vector_test.test | 10 | 0.001128s | 0.001141s | 0.001126s | byte equality observed |
| explicit_inst_static_vector_test.test | 10 | 0.001119s | 0.001126s | 0.001139s | byte equality observed |
| explicit_inst_string_test.test | 10 | 0.001150s | 0.001145s | 0.001131s | byte equality observed |
| explicit_inst_vector_test.test | 10 | 0.001144s | 0.001157s | 0.001134s | byte equality observed |
| flat_map_adaptor_test.test | 3 | 0.007194s | 0.007009s | 0.006848s | byte equality observed |
| flat_map_test.test | 3 | 0.007832s | 0.007696s | 0.007046s | byte equality observed |
| flat_set_adaptor_test.test | 3 | 0.007382s | 0.006722s | 0.007053s | byte equality observed |
| flat_set_test.test | 3 | 0.007176s | 0.006517s | 0.006936s | byte equality observed |
| flat_tree_test.test | 10 | 0.001167s | 0.001186s | 0.001141s | byte equality observed |
| global_resource_test.test | 10 | 0.001186s | 0.001202s | 0.001170s | byte equality observed |
| hub_api_test.test | 6 | 0.003370s | 0.002787s | 0.002679s | byte equality observed |
| hub_empty_sort_test.test | 10 | 0.001162s | 0.001195s | 0.001124s | byte equality observed |
| hub_exception_safety_test.test | 1 | 0.078469s | 0.085749s | 0.073173s | byte equality observed |
| hub_new_extended_alignment_test.test | 10 | 0.001237s | 0.001283s | 0.001179s | byte equality observed |
| hub_pocxx_test.test | 10 | 0.001267s | 0.001230s | 0.001173s | byte equality observed |
| hub_sort_test.test | 1 | 0.519119s | 0.515393s | 0.490293s | byte equality observed |
| hub_stability_test.test | 10 | 0.001423s | 0.001428s | 0.001423s | byte equality observed |
| hub_uses_allocator_test.test | 10 | 0.001153s | 0.001182s | 0.001134s | byte equality observed |
| insert_vs_emplace_test.test | 10 | 0.001184s | 0.001211s | 0.001166s | byte equality observed |
| is_constructible_test.test | 10 | 0.000542s | 0.000555s | 0.001106s | byte equality observed |
| list_test.test | 1 | 0.021537s | 0.021255s | 0.021316s | byte equality observed |
| map_test.test | 2 | 0.009674s | 0.009830s | 0.009124s | byte equality observed |
| memory_resource_test.test | 10 | 0.001174s | 0.001223s | 0.001156s | byte equality observed |
| monotonic_buffer_resource_test.test | 10 | 0.001188s | 0.001200s | 0.001191s | byte equality observed |
| nest_api_test.test | 8 | 0.002012s | 0.002029s | 0.001999s | byte equality observed |
| nest_test.test | 10 | 0.001214s | 0.001229s | 0.001181s | byte equality observed |
| new_delete_resource_test.test | 10 | 0.001734s | 0.001811s | 0.001732s | byte equality observed |
| node_allocator_test.test | 3 | 0.009139s | 0.008998s | 0.008656s | byte equality observed |
| node_handle_test.test | 10 | 0.001216s | 0.001227s | 0.001153s | byte equality observed |
| null_iterators_test.test | 10 | 0.001164s | 0.001175s | 0.001154s | byte equality observed |
| pair_test.test | 10 | 0.001170s | 0.001176s | 0.001161s | byte equality observed |
| pmr_deque_test.test | 10 | 0.001164s | 0.001165s | 0.001134s | byte equality observed |
| pmr_devector_test.test | 10 | 0.001160s | 0.001166s | 0.001145s | byte equality observed |
| pmr_flat_map_test.test | 10 | 0.001145s | 0.001162s | 0.001139s | byte equality observed |
| pmr_flat_set_test.test | 10 | 0.001157s | 0.001158s | 0.001137s | byte equality observed |
| pmr_hub_test.test | 10 | 0.001155s | 0.001165s | 0.001143s | byte equality observed |
| pmr_list_test.test | 10 | 0.001161s | 0.001161s | 0.001122s | byte equality observed |
| pmr_map_test.test | 10 | 0.001156s | 0.001163s | 0.001126s | byte equality observed |
| pmr_nest_test.test | 10 | 0.001154s | 0.001175s | 0.001126s | byte equality observed |
| pmr_set_test.test | 10 | 0.001159s | 0.001166s | 0.001189s | byte equality observed |
| pmr_slist_test.test | 10 | 0.001185s | 0.001172s | 0.001208s | byte equality observed |
| pmr_small_vector_test.test | 10 | 0.001140s | 0.001158s | 0.001260s | byte equality observed |
| pmr_stable_vector_test.test | 10 | 0.001150s | 0.001164s | 0.001243s | byte equality observed |
| pmr_string_test.test | 10 | 0.000550s | 0.000565s | 0.001246s | byte equality observed |
| pmr_vector_test.test | 10 | 0.000548s | 0.000561s | 0.001240s | byte equality observed |
| polymorphic_allocator_test.test | 10 | 0.001198s | 0.001244s | 0.001196s | byte equality observed |
| resource_adaptor_test.test | 10 | 0.001228s | 0.001268s | 0.001220s | byte equality observed |
| scoped_allocator_adaptor_test.test | 10 | 0.001243s | 0.001252s | 0.001214s | byte equality observed |
| scoped_allocator_usage_test.test | 10 | 0.001237s | 0.001272s | 0.001276s | byte equality observed |
| segtor_options_test.test | 10 | 0.001257s | 0.001243s | 0.001208s | byte equality observed |
| segtor_test.test | 1 | 0.449395s | 0.458215s | 0.448848s | byte equality observed |
| set_test.test | 2 | 0.013497s | 0.011984s | 0.013196s | byte equality observed |
| slist_test.test | 1 | 0.020757s | 0.020638s | 0.020262s | byte equality observed |
| small_vector_options_test.test | 10 | 0.001281s | 0.001314s | 0.001226s | byte equality observed |
| small_vector_test.test | 5 | 0.002411s | 0.002276s | 0.004071s | byte equality observed |
| stable_vector_test.test | 1 | 0.029536s | 0.030122s | 0.030780s | byte equality observed |
| static_vector_options_test.test | 10 | 0.001267s | 0.001240s | 0.001203s | byte equality observed |
| static_vector_test.test | 10 | 0.001586s | 0.001495s | 0.001565s | byte equality observed |
| string_options_test.test | 10 | 0.001222s | 0.001217s | 0.001210s | byte equality observed |
| string_test.test | 2 | 0.015011s | 0.015620s | 0.014924s | byte equality observed |
| string_view_compat_test.test | 10 | 0.001212s | 0.001186s | 0.001157s | byte equality observed |
| synchronized_pool_resource_test.test | 10 | 0.001235s | 0.001247s | 0.001219s | byte equality observed |
| throw_exception_test.test | 10 | 0.001177s | 0.001154s | 0.001159s | byte equality observed |
| tree_test.test | 10 | 0.001166s | 0.001154s | 0.001129s | byte equality observed |
| unsynchronized_pool_resource_test.test | 10 | 0.001235s | 0.001233s | 0.001223s | byte equality observed |
| uses_allocator_construction_test.test | 10 | 0.001156s | 0.001151s | 0.001143s | byte equality observed |
| uses_allocator_test.test | 10 | 0.000544s | 0.000540s | 0.001114s | byte equality observed |
| vector_options_test.test | 10 | 0.001349s | 0.001329s | 0.001302s | byte equality observed |
| vector_test.test | 4 | 0.004073s | 0.003959s | 0.005548s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44000592280).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
