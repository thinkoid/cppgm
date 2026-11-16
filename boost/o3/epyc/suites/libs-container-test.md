# libs/container/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| vector_test.test | RUN | 7.897613 | 41.369753 | 38.612828 | 0.007200 | 0.006307 | 0.009834 |
| vector_options_test.test | RUN | 0.424155 | 1.981830 | 1.769523 | 0.002239 | 0.002425 | 0.002398 |
| uses_allocator_test.test | RUN | 0.081945 | 0.170588 | 0.247911 | 0.000819 | 0.000817 | 0.002074 |
| uses_allocator_construction_test.test | RUN | 0.237345 | 0.621231 | 0.890034 | 0.001835 | 0.001861 | 0.002101 |
| unsynchronized_pool_resource_test.test | RUN | 0.298082 | 1.807073 | 1.060173 | 0.001772 | 0.002012 | 0.002238 |
| tree_test.test | RUN | 1.258942 | 6.184078 | 5.725363 | 0.001646 | 0.001999 | 0.002018 |
| throw_exception_test.test | RUN | 0.155302 | 0.378259 | 0.557622 | 0.001904 | 0.002000 | 0.002064 |
| synchronized_pool_resource_test.test | RUN | 0.283018 | 1.797785 | 1.159623 | 0.002034 | 0.002088 | 0.002173 |
| string_view_compat_test.test | RUN | 0.473155 | 3.583220 | 2.107124 | 0.001725 | 0.002134 | 0.002082 |
| string_test.test | RUN | 2.004307 | 13.411825 | 10.662940 | 0.023712 | 0.021257 | 0.022713 |
| string_options_test.test | RUN | 0.386059 | 2.960270 | 1.788981 | 0.002028 | 0.002175 | 0.002023 |
| static_vector_test.test | RUN | 2.002850 | 10.966890 | 10.477496 | 0.002732 | 0.002670 | 0.002812 |
| static_vector_options_test.test | RUN | 0.268767 | 0.775427 | 1.054280 | 0.002050 | 0.002078 | 0.002183 |
| stable_vector_test.test | RUN | 4.442528 | 22.185868 | 19.496191 | 0.037591 | 0.037244 | 0.039252 |
| small_vector_test.test | RUN | 3.079344 | 15.697947 | 14.576597 | 0.004121 | 0.003918 | 0.007156 |
| small_vector_options_test.test | RUN | 0.463353 | 1.955912 | 1.976704 | 0.002185 | 0.002170 | 0.002284 |
| slist_test.test | RUN | 2.789693 | 14.075466 | 12.934626 | 0.033470 | 0.031837 | 0.034022 |
| set_test.test | RUN | 4.402423 | 26.591060 | 22.981981 | 0.020598 | 0.017754 | 0.019693 |
| segtor_test.test | RUN | 5.381973 | 29.068930 | 25.442941 | 0.869202 | 0.927783 | 0.932131 |
| segtor_options_test.test | RUN | 0.310614 | 0.840337 | 1.209842 | 0.001936 | 0.002102 | 0.002016 |
| scoped_allocator_usage_test.test | RUN | 1.047645 | 4.407789 | 4.654481 | 0.002032 | 0.002077 | 0.002037 |
| scoped_allocator_adaptor_test.test | RUN | 0.501817 | 1.298790 | 2.208331 | 0.001975 | 0.002102 | 0.001970 |
| resource_adaptor_test.test | RUN | 0.258819 | 0.794345 | 0.931191 | 0.001810 | 0.002114 | 0.001986 |
| polymorphic_allocator_test.test | RUN | 0.207845 | 0.626810 | 0.825514 | 0.001784 | 0.002038 | 0.001878 |
| pmr_vector_test.test | RUN | 0.121078 | 0.254039 | 0.380408 | 0.000732 | 0.000699 | 0.002010 |
| pmr_string_test.test | RUN | 0.237326 | 0.524379 | 0.777632 | 0.000824 | 0.000841 | 0.002008 |
| pmr_stable_vector_test.test | RUN | 0.250142 | 0.796125 | 1.093454 | 0.001987 | 0.002018 | 0.002004 |
| pmr_small_vector_test.test | RUN | 0.150309 | 0.332516 | 0.505180 | 0.002015 | 0.002066 | 0.002118 |
| pmr_slist_test.test | RUN | 0.206533 | 0.980653 | 1.036786 | 0.002079 | 0.001964 | 0.001806 |
| pmr_set_test.test | RUN | 0.233913 | 0.557727 | 0.862541 | 0.001791 | 0.001898 | 0.001926 |
| pmr_nest_test.test | RUN | 0.182110 | 0.386333 | 0.612271 | 0.001653 | 0.002086 | 0.002138 |
| pmr_map_test.test | RUN | 0.235367 | 0.577330 | 0.840989 | 0.001758 | 0.002062 | 0.002086 |
| pmr_list_test.test | RUN | 0.159260 | 0.344588 | 0.541296 | 0.001789 | 0.002098 | 0.002043 |
| pmr_hub_test.test | RUN | 0.216799 | 0.479426 | 0.700881 | 0.001895 | 0.002018 | 0.001990 |
| pmr_flat_set_test.test | RUN | 0.172054 | 0.378286 | 0.593003 | 0.001896 | 0.001954 | 0.002052 |
| pmr_flat_map_test.test | RUN | 0.207732 | 0.428376 | 0.712351 | 0.001916 | 0.001912 | 0.001801 |
| pmr_devector_test.test | RUN | 0.130520 | 0.380554 | 0.517642 | 0.001616 | 0.001933 | 0.001972 |
| pmr_deque_test.test | RUN | 0.137320 | 0.311642 | 0.512859 | 0.001929 | 0.002126 | 0.001892 |
| pair_test.test | RUN | 0.338530 | 0.768849 | 1.121526 | 0.001814 | 0.002056 | 0.002043 |
| null_iterators_test.test | RUN | 0.514245 | 1.500824 | 1.946171 | 0.001788 | 0.001988 | 0.001995 |
| node_handle_test.test | RUN | 0.235684 | 1.830131 | 0.800961 | 0.001970 | 0.002032 | 0.002030 |
| node_allocator_test.test | RUN | 3.306959 | 17.565949 | 16.141395 | 0.013336 | 0.011649 | 0.013277 |
| new_delete_resource_test.test | RUN | 0.248198 | 1.069222 | 1.028572 | 0.002557 | 0.002791 | 0.002922 |
| nest_test.test | RUN | 0.725543 | 4.828349 | 3.438522 | 0.001882 | 0.002248 | 0.002020 |
| nest_api_test.test | RUN | 1.171824 | 9.459044 | 6.966930 | 0.003241 | 0.003195 | 0.003216 |
| monotonic_buffer_resource_test.test | RUN | 0.288993 | 1.923955 | 0.820724 | 0.001891 | 0.001970 | 0.001818 |
| memory_resource_test.test | RUN | 0.175617 | 0.562978 | 0.650599 | 0.001944 | 0.002032 | 0.002110 |
| map_test.test | RUN | 5.743137 | 29.782701 | 34.109932 | 0.014814 | 0.014858 | 0.014192 |
| list_test.test | RUN | 3.012561 | 15.297069 | 14.395777 | 0.032392 | 0.033968 | 0.035513 |
| is_constructible_test.test | RUN | 0.115886 | 0.204196 | 0.404743 | 0.000905 | 0.000819 | 0.002070 |
| insert_vs_emplace_test.test | RUN | 0.331600 | 1.281159 | 2.035016 | 0.001994 | 0.002127 | 0.002015 |
| hub_uses_allocator_test.test | RUN | 0.365016 | 1.138661 | 1.482259 | 0.001782 | 0.002108 | 0.002171 |
| hub_stability_test.test | RUN | 0.775218 | 4.978289 | 4.827821 | 0.002458 | 0.002450 | 0.002512 |
| hub_sort_test.test | RUN | 0.481698 | 2.265976 | 2.341491 | 0.631758 | 0.606827 | 0.620174 |
| hub_pocxx_test.test | RUN | 0.454585 | 2.695433 | 1.790592 | 0.001976 | 0.002126 | 0.001844 |
| hub_new_extended_alignment_test.test | RUN | 0.266027 | 0.817835 | 0.967270 | 0.001894 | 0.001945 | 0.001900 |
| hub_exception_safety_test.test | RUN | 0.926977 | 6.157657 | 4.577319 | 0.107349 | 0.114788 | 0.110749 |
| hub_empty_sort_test.test | RUN | 0.278143 | 0.756363 | 1.172956 | 0.001988 | 0.001896 | 0.002181 |
| hub_api_test.test | RUN | 2.998667 | 24.395530 | 15.620124 | 0.004813 | 0.004500 | 0.004582 |
| global_resource_test.test | RUN | 0.163705 | 0.520520 | 0.646081 | 0.001802 | 0.002155 | 0.002058 |
| flat_tree_test.test | RUN | 5.249043 | 37.850662 | 27.799225 | 0.001860 | 0.001952 | 0.002056 |
| flat_set_test.test | RUN | 6.556577 | 47.823351 | 35.963986 | 0.010571 | 0.009950 | 0.010210 |
| flat_set_adaptor_test.test | RUN | 4.954810 | 42.613727 | 29.161881 | 0.011247 | 0.009874 | 0.011073 |
| flat_map_test.test | RUN | 10.621385 | 71.173709 | 59.379447 | 0.011762 | 0.011545 | 0.011287 |
| flat_map_adaptor_test.test | RUN | 6.777566 | 52.074419 | 42.613973 | 0.010814 | 0.010639 | 0.010341 |
| explicit_inst_vector_test.test | RUN | 1.127240 | 7.232223 | 6.426473 | 0.001864 | 0.002190 | 0.002077 |
| explicit_inst_string_test.test | RUN | 1.440295 | 12.661552 | 8.949435 | 0.001938 | 0.002049 | 0.002046 |
| explicit_inst_static_vector_test.test | RUN | 0.154012 | 0.481587 | 0.712736 | 0.001804 | 0.002017 | 0.002052 |
| explicit_inst_stable_vector_test.test | RUN | 0.879404 | 4.530729 | 4.273419 | 0.001940 | 0.001991 | 0.001838 |
| explicit_inst_small_vector_test.test | RUN | 0.735822 | 4.115521 | 3.804316 | 0.001924 | 0.002046 | 0.001956 |
| explicit_inst_slist_test.test | RUN | 0.583427 | 3.669787 | 3.044241 | 0.002010 | 0.002017 | 0.001919 |
| explicit_inst_set_test.test | RUN | 0.796461 | 4.382408 | 3.616781 | 0.001894 | 0.002025 | 0.001865 |
| explicit_inst_map_test.test | RUN | 0.874300 | 4.507148 | 3.863378 | 0.001758 | 0.001982 | 0.001823 |
| explicit_inst_list_test.test | RUN | 0.201470 | 1.031028 | 0.985972 | 0.001872 | 0.001942 | 0.002028 |
| explicit_inst_flat_set_test.test | RUN | 4.319963 | 32.148413 | 21.488948 | 0.001943 | 0.002178 | 0.001944 |
| explicit_inst_flat_map_test.test | RUN | 4.752556 | 33.583936 | 24.131573 | 0.001848 | 0.002281 | 0.001971 |
| explicit_inst_devector_test.test | RUN | 0.610230 | 4.126823 | 3.093753 | 0.001740 | 0.002082 | 0.001906 |
| explicit_inst_deque_test.test | RUN | 0.652885 | 4.397544 | 3.281140 | 0.001935 | 0.002009 | 0.002139 |
| devector_test.test | RUN | 8.268311 | 47.843339 | 43.463599 | 0.004222 | 0.004054 | 0.005172 |
| devector_options_test.test | RUN | 0.393926 | 2.462711 | 1.997637 | 0.002451 | 0.002214 | 0.002389 |
| deque_test.test | RUN | 5.075689 | 33.229706 | 22.631622 | 0.431685 | 0.447897 | 0.544941 |
| deque_options_test.test | RUN | 0.321655 | 0.908750 | 1.292265 | 0.002078 | 0.002188 | 0.002090 |
| copy_move_algo_test.test | RUN | 0.293378 | 1.194446 | 1.201236 | 0.002110 | 0.002096 | 0.002076 |
| common_iterator_test.test | RUN | 0.023976 | 0.063216 | 0.060484 | 0.000797 | 0.000816 | 0.001671 |
| boost_iterator_comp_test.test | RUN | 0.431187 | 1.361670 | 1.911184 | 0.001689 | 0.001931 | 0.002024 |
| allocator_traits_test.test | RUN | 0.256834 | 0.581126 | 0.749634 | 0.001786 | 0.002192 | 0.002115 |
| alloc_full_test.test | RUN | 0.277815 | 1.249876 | 1.252223 | 0.005928 | 0.006436 | 0.006300 |
| alloc_basic_test.test | RUN | 0.234782 | 0.901547 | 0.957123 | 0.002130 | 0.002243 | 0.002239 |
| adaptive_pool_test.test | RUN | 3.146447 | 18.809034 | 16.238795 | 0.012334 | 0.016987 | 0.012858 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.998× | 0.991×, 1.006× | 1.003× |
| clang | 1.059× | 1.043×, 1.074× | 1.000× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1359 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/43785224349).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| adaptive_pool_test.test | 2 | 0.013067s | 0.011738s | 0.013378s | byte equality observed |
| alloc_basic_test.test | 10 | 0.001255s | 0.001276s | 0.001266s | byte equality observed |
| alloc_full_test.test | 6 | 0.003806s | 0.003790s | 0.003923s | byte equality observed |
| allocator_traits_test.test | 10 | 0.001161s | 0.001152s | 0.001195s | byte equality observed |
| boost_iterator_comp_test.test | 10 | 0.001237s | 0.001251s | 0.001230s | byte equality observed |
| common_iterator_test.test | 10 | 0.000567s | 0.000562s | 0.001178s | byte equality observed |
| copy_move_algo_test.test | 10 | 0.001448s | 0.001345s | 0.001391s | byte equality observed |
| deque_options_test.test | 10 | 0.001306s | 0.001319s | 0.001295s | byte equality observed |
| deque_test.test | 1 | 0.468001s | 0.465958s | 0.590411s | byte equality observed |
| devector_options_test.test | 9 | 0.001406s | 0.001318s | 0.001331s | byte equality observed |
| devector_test.test | 4 | 0.003643s | 0.003608s | 0.004880s | byte equality observed |
| explicit_inst_deque_test.test | 10 | 0.001119s | 0.001139s | 0.001147s | byte equality observed |
| explicit_inst_devector_test.test | 10 | 0.001106s | 0.001125s | 0.001132s | byte equality observed |
| explicit_inst_flat_map_test.test | 10 | 0.001125s | 0.001161s | 0.001140s | byte equality observed |
| explicit_inst_flat_set_test.test | 10 | 0.001115s | 0.001162s | 0.001164s | byte equality observed |
| explicit_inst_list_test.test | 10 | 0.001131s | 0.001134s | 0.001134s | byte equality observed |
| explicit_inst_map_test.test | 10 | 0.001143s | 0.001139s | 0.001156s | byte equality observed |
| explicit_inst_set_test.test | 10 | 0.001149s | 0.001151s | 0.001152s | byte equality observed |
| explicit_inst_slist_test.test | 10 | 0.001147s | 0.001139s | 0.001141s | byte equality observed |
| explicit_inst_small_vector_test.test | 10 | 0.001139s | 0.001140s | 0.001132s | byte equality observed |
| explicit_inst_stable_vector_test.test | 10 | 0.001144s | 0.001146s | 0.001141s | byte equality observed |
| explicit_inst_static_vector_test.test | 10 | 0.001121s | 0.001125s | 0.001124s | byte equality observed |
| explicit_inst_string_test.test | 10 | 0.001143s | 0.001141s | 0.001138s | byte equality observed |
| explicit_inst_vector_test.test | 10 | 0.001146s | 0.001137s | 0.001133s | byte equality observed |
| flat_map_adaptor_test.test | 3 | 0.007109s | 0.006805s | 0.006899s | byte equality observed |
| flat_map_test.test | 3 | 0.007636s | 0.007264s | 0.007510s | byte equality observed |
| flat_set_adaptor_test.test | 3 | 0.007173s | 0.006543s | 0.007072s | byte equality observed |
| flat_set_test.test | 3 | 0.007076s | 0.006265s | 0.006934s | byte equality observed |
| flat_tree_test.test | 10 | 0.001139s | 0.001151s | 0.001128s | byte equality observed |
| global_resource_test.test | 10 | 0.001183s | 0.001181s | 0.001190s | byte equality observed |
| hub_api_test.test | 6 | 0.003312s | 0.002716s | 0.002679s | byte equality observed |
| hub_empty_sort_test.test | 10 | 0.001146s | 0.001145s | 0.001138s | byte equality observed |
| hub_exception_safety_test.test | 1 | 0.072350s | 0.079424s | 0.071927s | byte equality observed |
| hub_new_extended_alignment_test.test | 10 | 0.001251s | 0.001242s | 0.001207s | byte equality observed |
| hub_pocxx_test.test | 10 | 0.001235s | 0.001236s | 0.001189s | byte equality observed |
| hub_sort_test.test | 1 | 0.517594s | 0.505815s | 0.491229s | byte equality observed |
| hub_stability_test.test | 10 | 0.001407s | 0.001430s | 0.001410s | byte equality observed |
| hub_uses_allocator_test.test | 10 | 0.001138s | 0.001166s | 0.001140s | byte equality observed |
| insert_vs_emplace_test.test | 10 | 0.001165s | 0.001198s | 0.001157s | byte equality observed |
| is_constructible_test.test | 10 | 0.000535s | 0.000543s | 0.001106s | byte equality observed |
| list_test.test | 1 | 0.021487s | 0.020962s | 0.021331s | byte equality observed |
| map_test.test | 3 | 0.009444s | 0.009356s | 0.009163s | byte equality observed |
| memory_resource_test.test | 10 | 0.001143s | 0.001141s | 0.001131s | byte equality observed |
| monotonic_buffer_resource_test.test | 10 | 0.001174s | 0.001164s | 0.001148s | byte equality observed |
| nest_api_test.test | 9 | 0.001940s | 0.001978s | 0.001992s | byte equality observed |
| nest_test.test | 10 | 0.001183s | 0.001200s | 0.001167s | byte equality observed |
| new_delete_resource_test.test | 10 | 0.001688s | 0.001680s | 0.001671s | byte equality observed |
| node_allocator_test.test | 3 | 0.008738s | 0.008392s | 0.008743s | byte equality observed |
| node_handle_test.test | 10 | 0.001158s | 0.001186s | 0.001142s | byte equality observed |
| null_iterators_test.test | 10 | 0.001154s | 0.001140s | 0.001137s | byte equality observed |
| pair_test.test | 10 | 0.001149s | 0.001137s | 0.001157s | byte equality observed |
| pmr_deque_test.test | 10 | 0.001135s | 0.001129s | 0.001151s | byte equality observed |
| pmr_devector_test.test | 10 | 0.001135s | 0.001126s | 0.001139s | byte equality observed |
| pmr_flat_map_test.test | 10 | 0.001125s | 0.001130s | 0.001116s | byte equality observed |
| pmr_flat_set_test.test | 10 | 0.001137s | 0.001139s | 0.001121s | byte equality observed |
| pmr_hub_test.test | 10 | 0.001132s | 0.001131s | 0.001128s | byte equality observed |
| pmr_list_test.test | 10 | 0.001126s | 0.001136s | 0.001129s | byte equality observed |
| pmr_map_test.test | 10 | 0.001132s | 0.001146s | 0.001158s | byte equality observed |
| pmr_nest_test.test | 10 | 0.001131s | 0.001137s | 0.001207s | byte equality observed |
| pmr_set_test.test | 10 | 0.001145s | 0.001138s | 0.001239s | byte equality observed |
| pmr_slist_test.test | 10 | 0.001120s | 0.001140s | 0.001191s | byte equality observed |
| pmr_small_vector_test.test | 10 | 0.001122s | 0.001129s | 0.001245s | byte equality observed |
| pmr_stable_vector_test.test | 10 | 0.001133s | 0.001143s | 0.001216s | byte equality observed |
| pmr_string_test.test | 10 | 0.000551s | 0.000548s | 0.001283s | byte equality observed |
| pmr_vector_test.test | 10 | 0.000540s | 0.000551s | 0.001192s | byte equality observed |
| polymorphic_allocator_test.test | 10 | 0.001182s | 0.001222s | 0.001281s | byte equality observed |
| resource_adaptor_test.test | 10 | 0.001224s | 0.001213s | 0.001280s | byte equality observed |
| scoped_allocator_adaptor_test.test | 10 | 0.001220s | 0.001254s | 0.001243s | byte equality observed |
| scoped_allocator_usage_test.test | 10 | 0.001259s | 0.001236s | 0.001243s | byte equality observed |
| segtor_options_test.test | 10 | 0.001271s | 0.001240s | 0.001248s | byte equality observed |
| segtor_test.test | 1 | 0.445825s | 0.455630s | 0.446599s | byte equality observed |
| set_test.test | 2 | 0.013373s | 0.011796s | 0.013340s | byte equality observed |
| slist_test.test | 1 | 0.020369s | 0.020210s | 0.020338s | byte equality observed |
| small_vector_options_test.test | 10 | 0.001268s | 0.001247s | 0.001260s | byte equality observed |
| small_vector_test.test | 5 | 0.002389s | 0.002246s | 0.004097s | byte equality observed |
| stable_vector_test.test | 1 | 0.029218s | 0.029651s | 0.030844s | byte equality observed |
| static_vector_options_test.test | 10 | 0.001235s | 0.001172s | 0.001221s | byte equality observed |
| static_vector_test.test | 10 | 0.001579s | 0.001495s | 0.001533s | byte equality observed |
| string_options_test.test | 10 | 0.001206s | 0.001212s | 0.001206s | byte equality observed |
| string_test.test | 2 | 0.014944s | 0.015362s | 0.016051s | byte equality observed |
| string_view_compat_test.test | 10 | 0.001158s | 0.001154s | 0.001146s | byte equality observed |
| synchronized_pool_resource_test.test | 10 | 0.001220s | 0.001215s | 0.001209s | byte equality observed |
| throw_exception_test.test | 10 | 0.001137s | 0.001144s | 0.001136s | byte equality observed |
| tree_test.test | 10 | 0.001144s | 0.001138s | 0.001151s | byte equality observed |
| unsynchronized_pool_resource_test.test | 10 | 0.001221s | 0.001196s | 0.001214s | byte equality observed |
| uses_allocator_construction_test.test | 10 | 0.001146s | 0.001130s | 0.001169s | byte equality observed |
| uses_allocator_test.test | 10 | 0.000542s | 0.000532s | 0.001119s | byte equality observed |
| vector_options_test.test | 10 | 0.001318s | 0.001306s | 0.001314s | byte equality observed |
| vector_test.test | 4 | 0.003905s | 0.003855s | 0.005608s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/43785224349).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
