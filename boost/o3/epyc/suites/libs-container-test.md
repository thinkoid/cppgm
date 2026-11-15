# libs/container/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| vector_test.test | RUN | 7.891167 | 41.766619 | 38.646774 | 0.008665 | 0.006337 | 0.009651 |
| vector_options_test.test | RUN | 0.425221 | 1.999341 | 1.734509 | 0.002440 | 0.002278 | 0.002289 |
| uses_allocator_test.test | RUN | 0.077953 | 0.168246 | 0.250354 | 0.000890 | 0.000832 | 0.002040 |
| uses_allocator_construction_test.test | RUN | 0.240442 | 0.616587 | 0.850924 | 0.001935 | 0.001858 | 0.001955 |
| unsynchronized_pool_resource_test.test | RUN | 0.302649 | 1.765104 | 1.134835 | 0.001946 | 0.002240 | 0.002202 |
| tree_test.test | RUN | 1.193327 | 6.223935 | 5.614909 | 0.001912 | 0.001994 | 0.001934 |
| throw_exception_test.test | RUN | 0.167061 | 0.384580 | 0.585347 | 0.001940 | 0.002011 | 0.002065 |
| synchronized_pool_resource_test.test | RUN | 0.301935 | 1.818013 | 1.109860 | 0.001952 | 0.002171 | 0.002104 |
| string_view_compat_test.test | RUN | 0.507554 | 3.667127 | 2.142322 | 0.002048 | 0.002187 | 0.002060 |
| string_test.test | RUN | 1.985404 | 13.352649 | 10.397843 | 0.022863 | 0.021655 | 0.022669 |
| string_options_test.test | RUN | 0.388012 | 2.949695 | 1.761845 | 0.002125 | 0.002329 | 0.001934 |
| static_vector_test.test | RUN | 2.069951 | 11.203682 | 10.257217 | 0.002766 | 0.002699 | 0.002788 |
| static_vector_options_test.test | RUN | 0.287036 | 0.781623 | 1.053132 | 0.001975 | 0.002332 | 0.002142 |
| stable_vector_test.test | RUN | 4.490131 | 22.497705 | 19.751460 | 0.037410 | 0.037212 | 0.036857 |
| small_vector_test.test | RUN | 3.018024 | 15.841315 | 14.371491 | 0.004384 | 0.003912 | 0.006656 |
| small_vector_options_test.test | RUN | 0.471113 | 1.977834 | 2.001876 | 0.002172 | 0.002309 | 0.002164 |
| slist_test.test | RUN | 2.804749 | 14.283470 | 12.876774 | 0.032625 | 0.032956 | 0.033397 |
| set_test.test | RUN | 4.444241 | 26.899002 | 23.026873 | 0.020413 | 0.018201 | 0.019604 |
| segtor_test.test | RUN | 5.397845 | 29.233582 | 25.327824 | 0.874902 | 0.911842 | 0.919937 |
| segtor_options_test.test | RUN | 0.298968 | 0.898165 | 1.183621 | 0.001725 | 0.002107 | 0.001987 |
| scoped_allocator_usage_test.test | RUN | 1.057724 | 4.391527 | 4.469847 | 0.001728 | 0.002176 | 0.001951 |
| scoped_allocator_adaptor_test.test | RUN | 0.497442 | 1.327719 | 2.118784 | 0.002117 | 0.002072 | 0.001672 |
| resource_adaptor_test.test | RUN | 0.258641 | 0.787423 | 0.958624 | 0.002036 | 0.002102 | 0.001744 |
| polymorphic_allocator_test.test | RUN | 0.213286 | 0.620911 | 0.774698 | 0.001820 | 0.002142 | 0.001886 |
| pmr_vector_test.test | RUN | 0.120895 | 0.241069 | 0.437244 | 0.000747 | 0.000892 | 0.002038 |
| pmr_string_test.test | RUN | 0.235586 | 0.525343 | 0.806712 | 0.000769 | 0.000841 | 0.001961 |
| pmr_stable_vector_test.test | RUN | 0.263062 | 0.805703 | 1.039192 | 0.002010 | 0.002126 | 0.002012 |
| pmr_small_vector_test.test | RUN | 0.141910 | 0.336691 | 0.547396 | 0.001801 | 0.002016 | 0.002020 |
| pmr_slist_test.test | RUN | 0.204294 | 1.025502 | 0.963015 | 0.001728 | 0.001850 | 0.001840 |
| pmr_set_test.test | RUN | 0.221017 | 0.498944 | 0.843108 | 0.001969 | 0.002050 | 0.002029 |
| pmr_nest_test.test | RUN | 0.176404 | 0.370046 | 0.596216 | 0.001860 | 0.001908 | 0.002152 |
| pmr_map_test.test | RUN | 0.234639 | 0.563161 | 0.870252 | 0.001801 | 0.002108 | 0.001789 |
| pmr_list_test.test | RUN | 0.156365 | 0.365402 | 0.600448 | 0.002030 | 0.001866 | 0.002039 |
| pmr_hub_test.test | RUN | 0.221160 | 0.500709 | 0.665541 | 0.001904 | 0.002027 | 0.002136 |
| pmr_flat_set_test.test | RUN | 0.169865 | 0.384494 | 0.603707 | 0.001672 | 0.001924 | 0.001940 |
| pmr_flat_map_test.test | RUN | 0.205717 | 0.426789 | 0.666862 | 0.001791 | 0.001869 | 0.001916 |
| pmr_devector_test.test | RUN | 0.136782 | 0.372865 | 0.513690 | 0.001764 | 0.001866 | 0.001964 |
| pmr_deque_test.test | RUN | 0.136101 | 0.327294 | 0.482634 | 0.001828 | 0.002064 | 0.001746 |
| pair_test.test | RUN | 0.332642 | 0.804694 | 1.173544 | 0.001996 | 0.002060 | 0.001926 |
| null_iterators_test.test | RUN | 0.536565 | 1.459875 | 1.870342 | 0.001974 | 0.002040 | 0.001724 |
| node_handle_test.test | RUN | 0.210937 | 1.815567 | 0.782149 | 0.001829 | 0.002010 | 0.001868 |
| node_allocator_test.test | RUN | 3.345095 | 17.450063 | 15.813580 | 0.012958 | 0.013349 | 0.013792 |
| new_delete_resource_test.test | RUN | 0.251126 | 1.109290 | 1.046554 | 0.002674 | 0.003149 | 0.002799 |
| nest_test.test | RUN | 0.726191 | 4.958302 | 3.628667 | 0.001994 | 0.001990 | 0.002074 |
| nest_api_test.test | RUN | 1.173287 | 9.371903 | 6.744533 | 0.003225 | 0.003049 | 0.003201 |
| monotonic_buffer_resource_test.test | RUN | 0.296730 | 1.935066 | 1.071421 | 0.001974 | 0.002156 | 0.002136 |
| memory_resource_test.test | RUN | 0.175795 | 0.572769 | 0.660951 | 0.002008 | 0.002018 | 0.002022 |
| map_test.test | RUN | 5.733073 | 30.156749 | 33.926307 | 0.013430 | 0.014096 | 0.012954 |
| list_test.test | RUN | 3.051501 | 15.438769 | 13.757986 | 0.031895 | 0.034678 | 0.033563 |
| is_constructible_test.test | RUN | 0.115788 | 0.212171 | 0.382221 | 0.000902 | 0.000863 | 0.002048 |
| insert_vs_emplace_test.test | RUN | 0.333827 | 1.331465 | 2.096419 | 0.001959 | 0.002162 | 0.002159 |
| hub_uses_allocator_test.test | RUN | 0.365405 | 1.077205 | 1.514526 | 0.001912 | 0.002018 | 0.001752 |
| hub_stability_test.test | RUN | 0.770438 | 5.001796 | 4.634876 | 0.002397 | 0.002376 | 0.002324 |
| hub_sort_test.test | RUN | 0.496239 | 2.285361 | 2.335197 | 0.629328 | 0.621345 | 0.612016 |
| hub_pocxx_test.test | RUN | 0.453795 | 2.691174 | 1.776084 | 0.002146 | 0.002262 | 0.001932 |
| hub_new_extended_alignment_test.test | RUN | 0.259489 | 0.814676 | 0.975894 | 0.001982 | 0.002087 | 0.002011 |
| hub_exception_safety_test.test | RUN | 0.888127 | 6.206051 | 4.865899 | 0.101451 | 0.108860 | 0.115754 |
| hub_empty_sort_test.test | RUN | 0.295833 | 0.748845 | 1.205990 | 0.002022 | 0.002034 | 0.002096 |
| hub_api_test.test | RUN | 2.993074 | 25.064123 | 14.739303 | 0.004826 | 0.004503 | 0.004486 |
| global_resource_test.test | RUN | 0.177360 | 0.557519 | 0.624057 | 0.002146 | 0.002010 | 0.002121 |
| flat_tree_test.test | RUN | 5.262222 | 38.020151 | 27.992532 | 0.001807 | 0.002071 | 0.002055 |
| flat_set_test.test | RUN | 6.635253 | 47.996899 | 35.804034 | 0.010773 | 0.010003 | 0.010725 |
| flat_set_adaptor_test.test | RUN | 4.980623 | 42.783378 | 28.592729 | 0.010644 | 0.009594 | 0.010858 |
| flat_map_test.test | RUN | 10.670970 | 71.469403 | 59.039136 | 0.011805 | 0.011765 | 0.011427 |
| flat_map_adaptor_test.test | RUN | 6.752879 | 52.523617 | 42.331486 | 0.010780 | 0.010155 | 0.010770 |
| explicit_inst_vector_test.test | RUN | 1.091250 | 7.128699 | 6.487451 | 0.002032 | 0.001939 | 0.002056 |
| explicit_inst_string_test.test | RUN | 1.460072 | 12.581394 | 8.825081 | 0.001933 | 0.002104 | 0.001888 |
| explicit_inst_static_vector_test.test | RUN | 0.151875 | 0.483350 | 0.700665 | 0.001878 | 0.002349 | 0.002007 |
| explicit_inst_stable_vector_test.test | RUN | 0.885952 | 4.474299 | 4.209327 | 0.001899 | 0.002107 | 0.002024 |
| explicit_inst_small_vector_test.test | RUN | 0.772027 | 4.111700 | 3.722791 | 0.001927 | 0.002188 | 0.001964 |
| explicit_inst_slist_test.test | RUN | 0.581263 | 3.764038 | 2.978058 | 0.002036 | 0.002072 | 0.002042 |
| explicit_inst_set_test.test | RUN | 0.813453 | 4.480417 | 3.543769 | 0.001917 | 0.002100 | 0.002092 |
| explicit_inst_map_test.test | RUN | 0.882778 | 4.599443 | 3.870040 | 0.001842 | 0.002224 | 0.001851 |
| explicit_inst_list_test.test | RUN | 0.205554 | 1.041580 | 0.965735 | 0.001697 | 0.002053 | 0.001964 |
| explicit_inst_flat_set_test.test | RUN | 4.341359 | 32.356460 | 21.079296 | 0.001955 | 0.001981 | 0.001915 |
| explicit_inst_flat_map_test.test | RUN | 4.777335 | 33.535123 | 23.385944 | 0.001848 | 0.002092 | 0.002016 |
| explicit_inst_devector_test.test | RUN | 0.610365 | 4.201396 | 3.184762 | 0.001970 | 0.001509 | 0.002073 |
| explicit_inst_deque_test.test | RUN | 0.654122 | 4.610489 | 3.364673 | 0.002025 | 0.002250 | 0.002090 |
| devector_test.test | RUN | 8.381089 | 47.670821 | 40.988537 | 0.004201 | 0.004100 | 0.005152 |
| devector_options_test.test | RUN | 0.405033 | 2.517461 | 1.959122 | 0.002398 | 0.002329 | 0.002378 |
| deque_test.test | RUN | 5.552120 | 33.465540 | 24.994268 | 0.424001 | 0.443325 | 0.536926 |
| deque_options_test.test | RUN | 0.326277 | 0.882121 | 1.294479 | 0.002077 | 0.002134 | 0.002015 |
| copy_move_algo_test.test | RUN | 0.295946 | 1.163835 | 1.170761 | 0.002220 | 0.002315 | 0.002390 |
| common_iterator_test.test | RUN | 0.023240 | 0.062838 | 0.066743 | 0.000720 | 0.000924 | 0.002032 |
| boost_iterator_comp_test.test | RUN | 0.424190 | 1.336947 | 1.811586 | 0.001821 | 0.002217 | 0.002178 |
| allocator_traits_test.test | RUN | 0.257240 | 0.626898 | 0.957643 | 0.001906 | 0.001988 | 0.002011 |
| alloc_full_test.test | RUN | 0.274785 | 1.248444 | 1.246939 | 0.005892 | 0.006271 | 0.005635 |
| alloc_basic_test.test | RUN | 0.234668 | 0.902643 | 0.981874 | 0.002016 | 0.002260 | 0.002051 |
| adaptive_pool_test.test | RUN | 2.366523 | 19.063714 | 9.938971 | 0.012366 | 0.017087 | 0.012913 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.994× | 0.991×, 0.998× | 0.985× |
| clang | 1.051× | 1.057×, 1.045× | 1.014× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1359 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/43750858933).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| adaptive_pool_test.test | 2 | 0.013033s | 0.011931s | 0.013223s | byte equality observed |
| alloc_basic_test.test | 10 | 0.001287s | 0.001258s | 0.001261s | byte equality observed |
| alloc_full_test.test | 6 | 0.003792s | 0.003842s | 0.003982s | byte equality observed |
| allocator_traits_test.test | 10 | 0.001169s | 0.001174s | 0.001181s | byte equality observed |
| boost_iterator_comp_test.test | 10 | 0.001234s | 0.001246s | 0.001182s | byte equality observed |
| common_iterator_test.test | 10 | 0.000564s | 0.000573s | 0.001227s | byte equality observed |
| copy_move_algo_test.test | 10 | 0.001430s | 0.001388s | 0.001422s | byte equality observed |
| deque_options_test.test | 10 | 0.001282s | 0.001315s | 0.001254s | byte equality observed |
| deque_test.test | 1 | 0.469759s | 0.473087s | 0.581615s | byte equality observed |
| devector_options_test.test | 10 | 0.001415s | 0.001315s | 0.001305s | byte equality observed |
| devector_test.test | 4 | 0.003686s | 0.003606s | 0.005172s | byte equality observed |
| explicit_inst_deque_test.test | 10 | 0.001132s | 0.001142s | 0.001149s | byte equality observed |
| explicit_inst_devector_test.test | 10 | 0.001125s | 0.001129s | 0.001130s | byte equality observed |
| explicit_inst_flat_map_test.test | 10 | 0.001137s | 0.001143s | 0.001159s | byte equality observed |
| explicit_inst_flat_set_test.test | 10 | 0.001137s | 0.001163s | 0.001146s | byte equality observed |
| explicit_inst_list_test.test | 10 | 0.001124s | 0.001128s | 0.001124s | byte equality observed |
| explicit_inst_map_test.test | 10 | 0.001134s | 0.001140s | 0.001132s | byte equality observed |
| explicit_inst_set_test.test | 10 | 0.001138s | 0.001137s | 0.001130s | byte equality observed |
| explicit_inst_slist_test.test | 10 | 0.001151s | 0.001128s | 0.001145s | byte equality observed |
| explicit_inst_small_vector_test.test | 10 | 0.001131s | 0.001146s | 0.001148s | byte equality observed |
| explicit_inst_stable_vector_test.test | 10 | 0.001140s | 0.001161s | 0.001150s | byte equality observed |
| explicit_inst_static_vector_test.test | 10 | 0.001119s | 0.001130s | 0.001149s | byte equality observed |
| explicit_inst_string_test.test | 10 | 0.001129s | 0.001131s | 0.001143s | byte equality observed |
| explicit_inst_vector_test.test | 10 | 0.001131s | 0.001127s | 0.001139s | byte equality observed |
| flat_map_adaptor_test.test | 3 | 0.007079s | 0.006766s | 0.006884s | byte equality observed |
| flat_map_test.test | 3 | 0.007637s | 0.007263s | 0.007064s | byte equality observed |
| flat_set_adaptor_test.test | 3 | 0.007179s | 0.006476s | 0.007092s | byte equality observed |
| flat_set_test.test | 3 | 0.007090s | 0.006258s | 0.006989s | byte equality observed |
| flat_tree_test.test | 10 | 0.001156s | 0.001121s | 0.001143s | byte equality observed |
| global_resource_test.test | 10 | 0.001172s | 0.001161s | 0.001185s | byte equality observed |
| hub_api_test.test | 6 | 0.003317s | 0.002722s | 0.002681s | byte equality observed |
| hub_empty_sort_test.test | 10 | 0.001140s | 0.001123s | 0.001141s | byte equality observed |
| hub_exception_safety_test.test | 1 | 0.073824s | 0.081261s | 0.075029s | byte equality observed |
| hub_new_extended_alignment_test.test | 10 | 0.001244s | 0.001230s | 0.001197s | byte equality observed |
| hub_pocxx_test.test | 10 | 0.001223s | 0.001229s | 0.001169s | byte equality observed |
| hub_sort_test.test | 1 | 0.511813s | 0.509338s | 0.494407s | byte equality observed |
| hub_stability_test.test | 10 | 0.001407s | 0.001419s | 0.001431s | byte equality observed |
| hub_uses_allocator_test.test | 10 | 0.001137s | 0.001143s | 0.001137s | byte equality observed |
| insert_vs_emplace_test.test | 10 | 0.001161s | 0.001183s | 0.001161s | byte equality observed |
| is_constructible_test.test | 10 | 0.000538s | 0.000548s | 0.001120s | byte equality observed |
| list_test.test | 1 | 0.021446s | 0.021208s | 0.021418s | byte equality observed |
| map_test.test | 3 | 0.009506s | 0.009477s | 0.009335s | byte equality observed |
| memory_resource_test.test | 10 | 0.001137s | 0.001165s | 0.001184s | byte equality observed |
| monotonic_buffer_resource_test.test | 10 | 0.001148s | 0.001173s | 0.001164s | byte equality observed |
| nest_api_test.test | 9 | 0.001932s | 0.001969s | 0.001991s | byte equality observed |
| nest_test.test | 10 | 0.001178s | 0.001193s | 0.001193s | byte equality observed |
| new_delete_resource_test.test | 10 | 0.001701s | 0.001727s | 0.001688s | byte equality observed |
| node_allocator_test.test | 3 | 0.008755s | 0.008536s | 0.008684s | byte equality observed |
| node_handle_test.test | 10 | 0.001162s | 0.001178s | 0.001131s | byte equality observed |
| null_iterators_test.test | 10 | 0.001156s | 0.001152s | 0.001127s | byte equality observed |
| pair_test.test | 10 | 0.001151s | 0.001158s | 0.001136s | byte equality observed |
| pmr_deque_test.test | 10 | 0.001144s | 0.001132s | 0.001105s | byte equality observed |
| pmr_devector_test.test | 10 | 0.001136s | 0.001134s | 0.001120s | byte equality observed |
| pmr_flat_map_test.test | 10 | 0.001136s | 0.001132s | 0.001118s | byte equality observed |
| pmr_flat_set_test.test | 10 | 0.001139s | 0.001129s | 0.001101s | byte equality observed |
| pmr_hub_test.test | 10 | 0.001136s | 0.001134s | 0.001094s | byte equality observed |
| pmr_list_test.test | 10 | 0.001133s | 0.001138s | 0.001126s | byte equality observed |
| pmr_map_test.test | 10 | 0.001137s | 0.001140s | 0.001129s | byte equality observed |
| pmr_nest_test.test | 10 | 0.001151s | 0.001145s | 0.001138s | byte equality observed |
| pmr_set_test.test | 10 | 0.001137s | 0.001149s | 0.001135s | byte equality observed |
| pmr_slist_test.test | 10 | 0.001137s | 0.001139s | 0.001187s | byte equality observed |
| pmr_small_vector_test.test | 10 | 0.001146s | 0.001136s | 0.001221s | byte equality observed |
| pmr_stable_vector_test.test | 10 | 0.001151s | 0.001142s | 0.001196s | byte equality observed |
| pmr_string_test.test | 10 | 0.000552s | 0.000544s | 0.001194s | byte equality observed |
| pmr_vector_test.test | 10 | 0.000539s | 0.000546s | 0.001217s | byte equality observed |
| polymorphic_allocator_test.test | 10 | 0.001221s | 0.001207s | 0.001179s | byte equality observed |
| resource_adaptor_test.test | 10 | 0.001219s | 0.001210s | 0.001216s | byte equality observed |
| scoped_allocator_adaptor_test.test | 10 | 0.001272s | 0.001225s | 0.001231s | byte equality observed |
| scoped_allocator_usage_test.test | 10 | 0.001249s | 0.001219s | 0.001253s | byte equality observed |
| segtor_options_test.test | 10 | 0.001248s | 0.001281s | 0.001217s | byte equality observed |
| segtor_test.test | 1 | 0.465377s | 0.452884s | 0.447295s | byte equality observed |
| set_test.test | 2 | 0.013323s | 0.011741s | 0.013223s | byte equality observed |
| slist_test.test | 1 | 0.020248s | 0.020232s | 0.020265s | byte equality observed |
| small_vector_options_test.test | 10 | 0.001247s | 0.001239s | 0.001240s | byte equality observed |
| small_vector_test.test | 5 | 0.002375s | 0.002222s | 0.004099s | byte equality observed |
| stable_vector_test.test | 1 | 0.029112s | 0.029382s | 0.030714s | byte equality observed |
| static_vector_options_test.test | 10 | 0.001211s | 0.001176s | 0.001204s | byte equality observed |
| static_vector_test.test | 10 | 0.001556s | 0.001503s | 0.001506s | byte equality observed |
| string_options_test.test | 10 | 0.001178s | 0.001251s | 0.001176s | byte equality observed |
| string_test.test | 2 | 0.014851s | 0.015328s | 0.014957s | byte equality observed |
| string_view_compat_test.test | 10 | 0.001128s | 0.001152s | 0.001122s | byte equality observed |
| synchronized_pool_resource_test.test | 10 | 0.001191s | 0.001215s | 0.001186s | byte equality observed |
| throw_exception_test.test | 10 | 0.001109s | 0.001140s | 0.001120s | byte equality observed |
| tree_test.test | 10 | 0.001117s | 0.001151s | 0.001116s | byte equality observed |
| unsynchronized_pool_resource_test.test | 10 | 0.001187s | 0.001213s | 0.001196s | byte equality observed |
| uses_allocator_construction_test.test | 10 | 0.001113s | 0.001148s | 0.001156s | byte equality observed |
| uses_allocator_test.test | 10 | 0.000510s | 0.000544s | 0.001132s | byte equality observed |
| vector_options_test.test | 10 | 0.001286s | 0.001318s | 0.001319s | byte equality observed |
| vector_test.test | 4 | 0.003880s | 0.003873s | 0.005544s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/43750858933).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
