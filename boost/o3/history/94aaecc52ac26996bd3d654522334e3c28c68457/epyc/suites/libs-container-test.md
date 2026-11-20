# libs/container/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| vector_test.test | RUN | 7.906967 | 41.462872 | 38.080069 | 0.006937 | 0.006740 | 0.009606 |
| vector_options_test.test | RUN | 0.401879 | 1.691900 | 1.728678 | 0.002326 | 0.002250 | 0.002315 |
| uses_allocator_test.test | RUN | 0.075306 | 0.166867 | 0.244333 | 0.000714 | 0.000873 | 0.002018 |
| uses_allocator_construction_test.test | RUN | 0.227077 | 0.617361 | 0.878955 | 0.001910 | 0.001963 | 0.002091 |
| unsynchronized_pool_resource_test.test | RUN | 0.279381 | 1.800859 | 1.037655 | 0.001996 | 0.002216 | 0.002114 |
| tree_test.test | RUN | 1.184247 | 6.262062 | 5.602469 | 0.001836 | 0.001964 | 0.002056 |
| throw_exception_test.test | RUN | 0.170385 | 0.379003 | 0.531764 | 0.002124 | 0.002431 | 0.002012 |
| synchronized_pool_resource_test.test | RUN | 0.284680 | 1.817313 | 1.063890 | 0.001980 | 0.002256 | 0.002266 |
| string_view_compat_test.test | RUN | 0.465030 | 3.689046 | 2.097312 | 0.001929 | 0.002050 | 0.002126 |
| string_test.test | RUN | 1.968297 | 13.476589 | 10.620909 | 0.023276 | 0.021957 | 0.022767 |
| string_options_test.test | RUN | 0.380459 | 2.911390 | 1.803387 | 0.001974 | 0.002150 | 0.002054 |
| static_vector_test.test | RUN | 1.964684 | 10.959162 | 10.418989 | 0.002730 | 0.002720 | 0.003025 |
| static_vector_options_test.test | RUN | 0.264854 | 0.784415 | 1.050141 | 0.002091 | 0.001998 | 0.002257 |
| stable_vector_test.test | RUN | 4.413057 | 22.264160 | 19.852427 | 0.038017 | 0.037748 | 0.039006 |
| small_vector_test.test | RUN | 3.033207 | 15.685194 | 14.593388 | 0.004196 | 0.003459 | 0.007115 |
| small_vector_options_test.test | RUN | 0.447183 | 2.008457 | 1.977630 | 0.002064 | 0.002042 | 0.002236 |
| slist_test.test | RUN | 2.774543 | 14.162742 | 13.206311 | 0.033575 | 0.033805 | 0.034578 |
| set_test.test | RUN | 4.273311 | 26.402073 | 23.089460 | 0.020012 | 0.018679 | 0.019373 |
| segtor_test.test | RUN | 5.205379 | 28.731247 | 25.975515 | 0.865917 | 0.897230 | 0.897751 |
| segtor_options_test.test | RUN | 0.314236 | 0.880504 | 1.340987 | 0.001983 | 0.002210 | 0.002096 |
| scoped_allocator_usage_test.test | RUN | 1.022547 | 4.358311 | 4.598145 | 0.001824 | 0.002112 | 0.002068 |
| scoped_allocator_adaptor_test.test | RUN | 0.497535 | 1.326389 | 2.143675 | 0.001938 | 0.001830 | 0.001825 |
| resource_adaptor_test.test | RUN | 0.254989 | 0.698569 | 0.934672 | 0.001974 | 0.001898 | 0.001919 |
| polymorphic_allocator_test.test | RUN | 0.214659 | 0.597440 | 0.818008 | 0.001894 | 0.002222 | 0.002030 |
| pmr_vector_test.test | RUN | 0.126721 | 0.238693 | 0.454313 | 0.000658 | 0.000879 | 0.002062 |
| pmr_string_test.test | RUN | 0.234791 | 0.488656 | 0.842680 | 0.000696 | 0.000890 | 0.002032 |
| pmr_stable_vector_test.test | RUN | 0.256415 | 0.784784 | 1.047178 | 0.001761 | 0.001916 | 0.002011 |
| pmr_small_vector_test.test | RUN | 0.147029 | 0.330645 | 0.541812 | 0.001846 | 0.001872 | 0.002042 |
| pmr_slist_test.test | RUN | 0.198909 | 1.013656 | 0.979819 | 0.001788 | 0.002049 | 0.002016 |
| pmr_set_test.test | RUN | 0.227624 | 0.569118 | 0.852671 | 0.001850 | 0.002000 | 0.001810 |
| pmr_nest_test.test | RUN | 0.170268 | 0.395959 | 0.554034 | 0.001782 | 0.002040 | 0.002110 |
| pmr_map_test.test | RUN | 0.235022 | 0.522217 | 0.855099 | 0.001872 | 0.002006 | 0.001995 |
| pmr_list_test.test | RUN | 0.160818 | 0.356563 | 0.584870 | 0.002005 | 0.002068 | 0.002104 |
| pmr_hub_test.test | RUN | 0.208462 | 0.506200 | 0.710459 | 0.001812 | 0.001923 | 0.002058 |
| pmr_flat_set_test.test | RUN | 0.169079 | 0.376274 | 0.574391 | 0.001763 | 0.001795 | 0.001823 |
| pmr_flat_map_test.test | RUN | 0.207353 | 0.452432 | 0.762102 | 0.001652 | 0.001788 | 0.001721 |
| pmr_devector_test.test | RUN | 0.134221 | 0.376146 | 0.484156 | 0.001713 | 0.001946 | 0.001819 |
| pmr_deque_test.test | RUN | 0.128309 | 0.322940 | 0.558393 | 0.001776 | 0.002019 | 0.001870 |
| pair_test.test | RUN | 0.336146 | 0.752551 | 1.070597 | 0.002028 | 0.001920 | 0.001948 |
| null_iterators_test.test | RUN | 0.523891 | 1.471985 | 1.974166 | 0.002076 | 0.002010 | 0.001902 |
| node_handle_test.test | RUN | 0.219248 | 1.802979 | 0.791816 | 0.001840 | 0.002171 | 0.002189 |
| node_allocator_test.test | RUN | 3.195065 | 17.695507 | 16.087124 | 0.013158 | 0.012926 | 0.014145 |
| new_delete_resource_test.test | RUN | 0.281530 | 1.134639 | 1.046438 | 0.002620 | 0.003000 | 0.002575 |
| nest_test.test | RUN | 0.698443 | 4.873929 | 3.423482 | 0.001864 | 0.002024 | 0.001595 |
| nest_api_test.test | RUN | 1.163780 | 9.402146 | 6.960580 | 0.003157 | 0.003241 | 0.003132 |
| monotonic_buffer_resource_test.test | RUN | 0.284677 | 1.931370 | 0.848348 | 0.001888 | 0.002034 | 0.002208 |
| memory_resource_test.test | RUN | 0.169674 | 0.542138 | 0.637187 | 0.002017 | 0.001880 | 0.002150 |
| map_test.test | RUN | 5.695874 | 29.609204 | 33.998106 | 0.014460 | 0.014512 | 0.014170 |
| list_test.test | RUN | 2.974929 | 15.469492 | 14.080661 | 0.032723 | 0.034478 | 0.035051 |
| is_constructible_test.test | RUN | 0.114560 | 0.221226 | 0.342028 | 0.000887 | 0.000881 | 0.002064 |
| insert_vs_emplace_test.test | RUN | 0.329673 | 1.313639 | 2.006016 | 0.002074 | 0.002227 | 0.001951 |
| hub_uses_allocator_test.test | RUN | 0.365157 | 1.120223 | 1.428986 | 0.001960 | 0.001860 | 0.002127 |
| hub_stability_test.test | RUN | 0.777694 | 4.939271 | 4.670670 | 0.002435 | 0.002494 | 0.002461 |
| hub_sort_test.test | RUN | 0.472310 | 2.275034 | 2.358712 | 0.627767 | 0.631174 | 0.610774 |
| hub_pocxx_test.test | RUN | 0.455081 | 2.701701 | 1.779109 | 0.002000 | 0.002076 | 0.001944 |
| hub_new_extended_alignment_test.test | RUN | 0.259559 | 0.815867 | 0.972523 | 0.002007 | 0.001785 | 0.002050 |
| hub_exception_safety_test.test | RUN | 0.907633 | 6.231507 | 4.964936 | 0.102863 | 0.114789 | 0.108336 |
| hub_empty_sort_test.test | RUN | 0.300457 | 0.742495 | 1.117396 | 0.001879 | 0.002091 | 0.002016 |
| hub_api_test.test | RUN | 2.883011 | 24.888101 | 15.340402 | 0.004888 | 0.004384 | 0.004528 |
| global_resource_test.test | RUN | 0.160654 | 0.537798 | 0.588920 | 0.001942 | 0.001944 | 0.001978 |
| flat_tree_test.test | RUN | 5.231873 | 38.063819 | 27.563700 | 0.001888 | 0.002090 | 0.001967 |
| flat_set_test.test | RUN | 6.572393 | 48.259986 | 36.654986 | 0.010666 | 0.009352 | 0.010555 |
| flat_set_adaptor_test.test | RUN | 4.876074 | 43.334374 | 28.146856 | 0.010814 | 0.010309 | 0.010451 |
| flat_map_test.test | RUN | 10.544723 | 71.199218 | 58.582162 | 0.011638 | 0.011779 | 0.011069 |
| flat_map_adaptor_test.test | RUN | 6.570275 | 52.485179 | 41.627669 | 0.010670 | 0.010870 | 0.010783 |
| explicit_inst_vector_test.test | RUN | 1.098562 | 7.202971 | 6.566071 | 0.001930 | 0.002098 | 0.002036 |
| explicit_inst_string_test.test | RUN | 1.469300 | 12.707032 | 8.523037 | 0.001942 | 0.002096 | 0.001952 |
| explicit_inst_static_vector_test.test | RUN | 0.156509 | 0.489545 | 0.638417 | 0.001805 | 0.002148 | 0.001948 |
| explicit_inst_stable_vector_test.test | RUN | 0.884178 | 4.564251 | 4.122570 | 0.002118 | 0.001949 | 0.002092 |
| explicit_inst_small_vector_test.test | RUN | 0.769692 | 4.130896 | 3.856743 | 0.001968 | 0.002150 | 0.001686 |
| explicit_inst_slist_test.test | RUN | 0.601207 | 3.760039 | 3.064756 | 0.001924 | 0.002278 | 0.002162 |
| explicit_inst_set_test.test | RUN | 0.792846 | 4.367257 | 3.678584 | 0.002020 | 0.002026 | 0.001876 |
| explicit_inst_map_test.test | RUN | 0.864062 | 4.473802 | 3.957845 | 0.001888 | 0.002176 | 0.002035 |
| explicit_inst_list_test.test | RUN | 0.206979 | 1.024301 | 1.006400 | 0.001813 | 0.002028 | 0.002244 |
| explicit_inst_flat_set_test.test | RUN | 4.226399 | 32.368594 | 22.070577 | 0.001874 | 0.002154 | 0.002094 |
| explicit_inst_flat_map_test.test | RUN | 4.622841 | 34.177895 | 24.814762 | 0.002018 | 0.002134 | 0.002058 |
| explicit_inst_devector_test.test | RUN | 0.587544 | 4.213819 | 3.213660 | 0.001844 | 0.002044 | 0.002001 |
| explicit_inst_deque_test.test | RUN | 0.667630 | 4.473399 | 3.421839 | 0.002062 | 0.002106 | 0.001992 |
| devector_test.test | RUN | 8.357523 | 52.170915 | 38.415202 | 0.004141 | 0.004040 | 0.005476 |
| devector_options_test.test | RUN | 0.410323 | 2.502647 | 1.884083 | 0.002383 | 0.002192 | 0.002246 |
| deque_test.test | RUN | 5.602137 | 27.053396 | 28.912638 | 0.431173 | 0.972250 | 0.538264 |
| deque_options_test.test | RUN | 0.299379 | 0.876735 | 1.343024 | 0.002037 | 0.001939 | 0.001862 |
| copy_move_algo_test.test | RUN | 0.296050 | 1.182414 | 1.129144 | 0.002292 | 0.002428 | 0.002300 |
| common_iterator_test.test | RUN | 0.024021 | 0.062398 | 0.062348 | 0.000810 | 0.000928 | 0.002020 |
| boost_iterator_comp_test.test | RUN | 0.424571 | 1.385442 | 1.896506 | 0.002004 | 0.002104 | 0.002133 |
| allocator_traits_test.test | RUN | 0.261480 | 0.629021 | 0.911661 | 0.001764 | 0.002113 | 0.002047 |
| alloc_full_test.test | RUN | 0.273607 | 1.224416 | 1.273752 | 0.006036 | 0.006328 | 0.006261 |
| alloc_basic_test.test | RUN | 0.232450 | 0.911552 | 0.979166 | 0.002010 | 0.002172 | 0.002239 |
| adaptive_pool_test.test | RUN | 2.170982 | 17.159187 | 16.278913 | 0.019049 | 0.011367 | 0.019231 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.993× | 0.990×, 0.996× | 0.989× |
| clang | 1.053× | 1.060×, 1.046× | 0.987× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1360 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/thinkoid/cppgm/actions/runs/44661842949).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| adaptive_pool_test.test | 2 | 0.013049s | 0.011893s | 0.013346s | byte equality observed |
| alloc_basic_test.test | 10 | 0.001348s | 0.001276s | 0.001328s | byte equality observed |
| alloc_full_test.test | 6 | 0.003849s | 0.003799s | 0.004012s | byte equality observed |
| allocator_traits_test.test | 10 | 0.001179s | 0.001165s | 0.001205s | byte equality observed |
| boost_iterator_comp_test.test | 10 | 0.001239s | 0.001220s | 0.001225s | byte equality observed |
| common_iterator_test.test | 10 | 0.000568s | 0.000564s | 0.001293s | byte equality observed |
| copy_move_algo_test.test | 10 | 0.001421s | 0.001311s | 0.001357s | byte equality observed |
| deque_options_test.test | 10 | 0.001283s | 0.001270s | 0.001328s | byte equality observed |
| deque_test.test | 1 | 0.473519s | 0.481512s | 0.589959s | byte equality observed |
| devector_options_test.test | 10 | 0.001428s | 0.001290s | 0.001337s | byte equality observed |
| devector_test.test | 4 | 0.003650s | 0.003569s | 0.004901s | byte equality observed |
| explicit_inst_deque_test.test | 10 | 0.001145s | 0.001139s | 0.001176s | byte equality observed |
| explicit_inst_devector_test.test | 10 | 0.001140s | 0.001155s | 0.001138s | byte equality observed |
| explicit_inst_flat_map_test.test | 10 | 0.001138s | 0.001145s | 0.001166s | byte equality observed |
| explicit_inst_flat_set_test.test | 10 | 0.001136s | 0.001144s | 0.001147s | byte equality observed |
| explicit_inst_list_test.test | 10 | 0.001141s | 0.001125s | 0.001134s | byte equality observed |
| explicit_inst_map_test.test | 10 | 0.001152s | 0.001144s | 0.001171s | byte equality observed |
| explicit_inst_set_test.test | 10 | 0.001161s | 0.001144s | 0.001161s | byte equality observed |
| explicit_inst_slist_test.test | 10 | 0.001152s | 0.001165s | 0.001181s | byte equality observed |
| explicit_inst_small_vector_test.test | 10 | 0.001151s | 0.001154s | 0.001167s | byte equality observed |
| explicit_inst_stable_vector_test.test | 10 | 0.001143s | 0.001145s | 0.001141s | byte equality observed |
| explicit_inst_static_vector_test.test | 10 | 0.001134s | 0.001123s | 0.001132s | byte equality observed |
| explicit_inst_string_test.test | 10 | 0.001152s | 0.001139s | 0.001181s | byte equality observed |
| explicit_inst_vector_test.test | 10 | 0.001156s | 0.001136s | 0.001170s | byte equality observed |
| flat_map_adaptor_test.test | 3 | 0.007136s | 0.006775s | 0.007084s | byte equality observed |
| flat_map_test.test | 3 | 0.007760s | 0.007309s | 0.007160s | byte equality observed |
| flat_set_adaptor_test.test | 3 | 0.007190s | 0.006471s | 0.007200s | byte equality observed |
| flat_set_test.test | 3 | 0.007269s | 0.006567s | 0.007081s | byte equality observed |
| flat_tree_test.test | 10 | 0.001204s | 0.001143s | 0.001163s | byte equality observed |
| global_resource_test.test | 10 | 0.001201s | 0.001153s | 0.001203s | byte equality observed |
| hub_api_test.test | 6 | 0.003366s | 0.002704s | 0.002770s | byte equality observed |
| hub_empty_sort_test.test | 10 | 0.001169s | 0.001136s | 0.001158s | byte equality observed |
| hub_exception_safety_test.test | 1 | 0.076705s | 0.079940s | 0.076291s | byte equality observed |
| hub_new_extended_alignment_test.test | 10 | 0.001344s | 0.001227s | 0.001219s | byte equality observed |
| hub_pocxx_test.test | 10 | 0.001304s | 0.001215s | 0.001177s | byte equality observed |
| hub_sort_test.test | 1 | 0.516659s | 0.506911s | 0.497881s | byte equality observed |
| hub_stability_test.test | 10 | 0.001459s | 0.001411s | 0.001543s | byte equality observed |
| hub_uses_allocator_test.test | 10 | 0.001185s | 0.001173s | 0.001206s | byte equality observed |
| insert_vs_emplace_test.test | 10 | 0.001192s | 0.001184s | 0.001235s | byte equality observed |
| is_constructible_test.test | 10 | 0.000557s | 0.000545s | 0.001166s | byte equality observed |
| list_test.test | 1 | 0.021511s | 0.020820s | 0.021548s | byte equality observed |
| map_test.test | 2 | 0.009571s | 0.009324s | 0.009538s | byte equality observed |
| memory_resource_test.test | 10 | 0.001157s | 0.001154s | 0.001259s | byte equality observed |
| monotonic_buffer_resource_test.test | 10 | 0.001183s | 0.001175s | 0.001239s | byte equality observed |
| nest_api_test.test | 9 | 0.001972s | 0.001971s | 0.002064s | byte equality observed |
| nest_test.test | 10 | 0.001231s | 0.001196s | 0.001233s | byte equality observed |
| new_delete_resource_test.test | 10 | 0.001749s | 0.001696s | 0.001740s | byte equality observed |
| node_allocator_test.test | 3 | 0.008823s | 0.008441s | 0.008920s | byte equality observed |
| node_handle_test.test | 10 | 0.001172s | 0.001164s | 0.001194s | byte equality observed |
| null_iterators_test.test | 10 | 0.001180s | 0.001145s | 0.001171s | byte equality observed |
| pair_test.test | 10 | 0.001160s | 0.001145s | 0.001195s | byte equality observed |
| pmr_deque_test.test | 10 | 0.001148s | 0.001134s | 0.001144s | byte equality observed |
| pmr_devector_test.test | 10 | 0.001146s | 0.001140s | 0.001166s | byte equality observed |
| pmr_flat_map_test.test | 10 | 0.001134s | 0.001130s | 0.001159s | byte equality observed |
| pmr_flat_set_test.test | 10 | 0.001137s | 0.001129s | 0.001172s | byte equality observed |
| pmr_hub_test.test | 10 | 0.001141s | 0.001150s | 0.001178s | byte equality observed |
| pmr_list_test.test | 10 | 0.001150s | 0.001135s | 0.001165s | byte equality observed |
| pmr_map_test.test | 10 | 0.001138s | 0.001134s | 0.001190s | byte equality observed |
| pmr_nest_test.test | 10 | 0.001150s | 0.001132s | 0.001193s | byte equality observed |
| pmr_set_test.test | 10 | 0.001147s | 0.001135s | 0.001211s | byte equality observed |
| pmr_slist_test.test | 10 | 0.001161s | 0.001165s | 0.001273s | byte equality observed |
| pmr_small_vector_test.test | 10 | 0.001150s | 0.001128s | 0.001262s | byte equality observed |
| pmr_stable_vector_test.test | 10 | 0.001141s | 0.001144s | 0.001242s | byte equality observed |
| pmr_string_test.test | 10 | 0.000562s | 0.000552s | 0.001263s | byte equality observed |
| pmr_vector_test.test | 10 | 0.000547s | 0.000559s | 0.001251s | byte equality observed |
| polymorphic_allocator_test.test | 10 | 0.001192s | 0.001182s | 0.001226s | byte equality observed |
| resource_adaptor_test.test | 10 | 0.001258s | 0.001238s | 0.001280s | byte equality observed |
| scoped_allocator_adaptor_test.test | 10 | 0.001247s | 0.001253s | 0.001266s | byte equality observed |
| scoped_allocator_usage_test.test | 10 | 0.001247s | 0.001213s | 0.001294s | byte equality observed |
| segtor_options_test.test | 10 | 0.001275s | 0.001223s | 0.001232s | byte equality observed |
| segtor_test.test | 1 | 0.452971s | 0.444627s | 0.441412s | byte equality observed |
| set_test.test | 2 | 0.013391s | 0.011769s | 0.013448s | byte equality observed |
| slist_test.test | 1 | 0.020477s | 0.020237s | 0.020312s | byte equality observed |
| small_vector_options_test.test | 10 | 0.001258s | 0.001275s | 0.001289s | byte equality observed |
| small_vector_test.test | 5 | 0.002395s | 0.002222s | 0.004706s | byte equality observed |
| stable_vector_test.test | 1 | 0.029450s | 0.029642s | 0.031151s | byte equality observed |
| static_vector_options_test.test | 10 | 0.001216s | 0.001172s | 0.001316s | byte equality observed |
| static_vector_test.test | 10 | 0.001602s | 0.001471s | 0.001575s | byte equality observed |
| string_options_test.test | 10 | 0.001209s | 0.001217s | 0.001247s | byte equality observed |
| string_test.test | 2 | 0.015143s | 0.015223s | 0.015035s | byte equality observed |
| string_view_compat_test.test | 10 | 0.001163s | 0.001174s | 0.001188s | byte equality observed |
| synchronized_pool_resource_test.test | 10 | 0.001224s | 0.001213s | 0.001251s | byte equality observed |
| throw_exception_test.test | 10 | 0.001139s | 0.001139s | 0.001145s | byte equality observed |
| tree_test.test | 10 | 0.001152s | 0.001140s | 0.001139s | byte equality observed |
| unsynchronized_pool_resource_test.test | 10 | 0.001208s | 0.001214s | 0.001241s | byte equality observed |
| uses_allocator_construction_test.test | 10 | 0.001154s | 0.001142s | 0.001166s | byte equality observed |
| uses_allocator_test.test | 10 | 0.000544s | 0.000547s | 0.001131s | byte equality observed |
| vector_options_test.test | 10 | 0.001321s | 0.001307s | 0.001337s | byte equality observed |
| vector_test.test | 4 | 0.003949s | 0.003867s | 0.005606s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/thinkoid/cppgm/actions/runs/44661842949).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
