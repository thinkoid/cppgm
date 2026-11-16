# libs/container/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| vector_test.test | RUN | 5.357277 | 24.366739 | 19.704212 | 0.004142 | 0.003921 | 0.006108 |
| vector_options_test.test | RUN | 0.231295 | 1.033605 | 0.759304 | 0.001230 | 0.001247 | 0.001181 |
| uses_allocator_test.test | RUN | 0.036939 | 0.079061 | 0.088178 | 0.000435 | 0.000484 | 0.000986 |
| uses_allocator_construction_test.test | RUN | 0.113317 | 0.302470 | 0.329965 | 0.001043 | 0.001063 | 0.000915 |
| unsynchronized_pool_resource_test.test | RUN | 0.151520 | 0.962807 | 0.438410 | 0.001139 | 0.001119 | 0.001083 |
| tree_test.test | RUN | 0.715156 | 3.728138 | 2.701354 | 0.000982 | 0.001066 | 0.000959 |
| throw_exception_test.test | RUN | 0.078126 | 0.199174 | 0.219341 | 0.000927 | 0.000980 | 0.000944 |
| synchronized_pool_resource_test.test | RUN | 0.152730 | 0.971476 | 0.439169 | 0.001146 | 0.001096 | 0.001064 |
| string_view_compat_test.test | RUN | 0.260874 | 1.983946 | 0.856532 | 0.000968 | 0.001035 | 0.000986 |
| string_test.test | RUN | 1.287250 | 7.739983 | 5.023571 | 0.013088 | 0.012151 | 0.012888 |
| string_options_test.test | RUN | 0.216288 | 1.595647 | 0.763512 | 0.001127 | 0.001171 | 0.000906 |
| static_vector_test.test | RUN | 1.291414 | 6.502326 | 5.110374 | 0.001482 | 0.001361 | 0.001468 |
| static_vector_options_test.test | RUN | 0.147988 | 0.416559 | 0.396483 | 0.001066 | 0.001117 | 0.001028 |
| stable_vector_test.test | RUN | 3.053949 | 13.723195 | 10.199086 | 0.034635 | 0.035481 | 0.037029 |
| small_vector_test.test | RUN | 2.001352 | 9.271264 | 7.219614 | 0.002230 | 0.002041 | 0.004841 |
| small_vector_options_test.test | RUN | 0.271416 | 1.077787 | 0.919965 | 0.001133 | 0.001184 | 0.001127 |
| slist_test.test | RUN | 1.869625 | 8.382075 | 6.357510 | 0.020684 | 0.020353 | 0.020201 |
| set_test.test | RUN | 2.808777 | 15.394568 | 11.589363 | 0.013969 | 0.012640 | 0.013621 |
| segtor_test.test | RUN | 3.650118 | 17.020175 | 13.228763 | 0.366030 | 0.360002 | 0.409832 |
| segtor_options_test.test | RUN | 0.167712 | 0.497226 | 0.563283 | 0.001081 | 0.001025 | 0.001122 |
| scoped_allocator_usage_test.test | RUN | 0.639856 | 2.539170 | 2.148863 | 0.001007 | 0.001032 | 0.000862 |
| scoped_allocator_adaptor_test.test | RUN | 0.261762 | 0.676780 | 0.854816 | 0.001040 | 0.001058 | 0.001028 |
| resource_adaptor_test.test | RUN | 0.138684 | 0.413139 | 0.394183 | 0.001028 | 0.001092 | 0.001132 |
| polymorphic_allocator_test.test | RUN | 0.115611 | 0.333960 | 0.309096 | 0.001011 | 0.001143 | 0.001038 |
| pmr_vector_test.test | RUN | 0.063403 | 0.123654 | 0.167797 | 0.000461 | 0.000439 | 0.000960 |
| pmr_string_test.test | RUN | 0.122832 | 0.252308 | 0.308413 | 0.000434 | 0.000384 | 0.001007 |
| pmr_stable_vector_test.test | RUN | 0.150627 | 0.435710 | 0.496429 | 0.000995 | 0.001106 | 0.000980 |
| pmr_small_vector_test.test | RUN | 0.078848 | 0.162937 | 0.210397 | 0.000944 | 0.001052 | 0.000979 |
| pmr_slist_test.test | RUN | 0.118279 | 0.600503 | 0.476597 | 0.001006 | 0.001041 | 0.001007 |
| pmr_set_test.test | RUN | 0.120347 | 0.290813 | 0.341223 | 0.000994 | 0.001020 | 0.000979 |
| pmr_nest_test.test | RUN | 0.095660 | 0.203275 | 0.219438 | 0.000917 | 0.000972 | 0.001072 |
| pmr_map_test.test | RUN | 0.126471 | 0.298502 | 0.339402 | 0.000975 | 0.001062 | 0.000907 |
| pmr_list_test.test | RUN | 0.080963 | 0.177885 | 0.231079 | 0.000903 | 0.001013 | 0.000932 |
| pmr_hub_test.test | RUN | 0.111052 | 0.253949 | 0.277256 | 0.000960 | 0.001074 | 0.000965 |
| pmr_flat_set_test.test | RUN | 0.090489 | 0.201634 | 0.242052 | 0.000954 | 0.001036 | 0.000870 |
| pmr_flat_map_test.test | RUN | 0.107789 | 0.222821 | 0.281926 | 0.000932 | 0.001067 | 0.000904 |
| pmr_devector_test.test | RUN | 0.070569 | 0.200290 | 0.223549 | 0.000987 | 0.001020 | 0.000904 |
| pmr_deque_test.test | RUN | 0.070037 | 0.165693 | 0.213328 | 0.000912 | 0.001036 | 0.000966 |
| pair_test.test | RUN | 0.174655 | 0.384864 | 0.460828 | 0.000946 | 0.001019 | 0.001121 |
| null_iterators_test.test | RUN | 0.283186 | 0.751485 | 0.785484 | 0.001036 | 0.001139 | 0.001154 |
| node_handle_test.test | RUN | 0.124348 | 0.959058 | 0.344251 | 0.000896 | 0.001131 | 0.000949 |
| node_allocator_test.test | RUN | 2.211464 | 10.577791 | 7.989432 | 0.008894 | 0.008853 | 0.009001 |
| new_delete_resource_test.test | RUN | 0.149552 | 0.591443 | 0.465014 | 0.001420 | 0.001632 | 0.001583 |
| nest_test.test | RUN | 0.430119 | 2.937738 | 1.734729 | 0.000973 | 0.001096 | 0.001144 |
| nest_api_test.test | RUN | 0.745682 | 5.392806 | 3.349732 | 0.001900 | 0.002005 | 0.001990 |
| monotonic_buffer_resource_test.test | RUN | 0.156892 | 1.057072 | 0.451287 | 0.000942 | 0.001179 | 0.001029 |
| memory_resource_test.test | RUN | 0.092103 | 0.297980 | 0.269173 | 0.000955 | 0.001054 | 0.001049 |
| map_test.test | RUN | 3.822860 | 17.699528 | 16.306992 | 0.009858 | 0.009757 | 0.009215 |
| list_test.test | RUN | 1.981585 | 9.072319 | 6.929395 | 0.019894 | 0.020277 | 0.020464 |
| is_constructible_test.test | RUN | 0.054701 | 0.107617 | 0.140154 | 0.000488 | 0.000521 | 0.000953 |
| insert_vs_emplace_test.test | RUN | 0.180706 | 0.694338 | 0.870174 | 0.001101 | 0.001201 | 0.001102 |
| hub_uses_allocator_test.test | RUN | 0.200424 | 0.625369 | 0.648286 | 0.001028 | 0.001134 | 0.001086 |
| hub_stability_test.test | RUN | 0.458140 | 2.852597 | 2.338712 | 0.001403 | 0.001403 | 0.001235 |
| hub_sort_test.test | RUN | 0.292080 | 1.350927 | 1.104472 | 0.535743 | 0.542758 | 0.521425 |
| hub_pocxx_test.test | RUN | 0.278761 | 1.507100 | 0.836557 | 0.001069 | 0.001133 | 0.000986 |
| hub_new_extended_alignment_test.test | RUN | 0.141916 | 0.454759 | 0.436425 | 0.001095 | 0.001151 | 0.001112 |
| hub_exception_safety_test.test | RUN | 0.567956 | 3.646395 | 2.330064 | 0.065999 | 0.067652 | 0.066556 |
| hub_empty_sort_test.test | RUN | 0.164811 | 0.408613 | 0.514695 | 0.001051 | 0.001041 | 0.001056 |
| hub_api_test.test | RUN | 1.918071 | 13.972634 | 7.401234 | 0.003211 | 0.002768 | 0.002884 |
| global_resource_test.test | RUN | 0.083187 | 0.281420 | 0.238794 | 0.000974 | 0.001067 | 0.001012 |
| flat_tree_test.test | RUN | 3.602131 | 22.820151 | 14.769142 | 0.001000 | 0.001028 | 0.000951 |
| flat_set_test.test | RUN | 4.510356 | 27.894062 | 18.807875 | 0.007003 | 0.006506 | 0.006643 |
| flat_set_adaptor_test.test | RUN | 3.393364 | 24.438582 | 14.646898 | 0.007204 | 0.006542 | 0.006783 |
| flat_map_test.test | RUN | 7.250834 | 41.720569 | 30.092719 | 0.007958 | 0.007627 | 0.006951 |
| flat_map_adaptor_test.test | RUN | 4.652039 | 30.384666 | 21.505192 | 0.007275 | 0.007237 | 0.007110 |
| explicit_inst_vector_test.test | RUN | 0.723137 | 4.246882 | 3.329197 | 0.001045 | 0.001133 | 0.000937 |
| explicit_inst_string_test.test | RUN | 0.968976 | 7.700665 | 4.586684 | 0.000981 | 0.001165 | 0.000882 |
| explicit_inst_static_vector_test.test | RUN | 0.084440 | 0.273201 | 0.305569 | 0.001090 | 0.001055 | 0.001094 |
| explicit_inst_stable_vector_test.test | RUN | 0.577960 | 2.797739 | 2.118644 | 0.001063 | 0.001110 | 0.000981 |
| explicit_inst_small_vector_test.test | RUN | 0.450606 | 2.492706 | 1.869678 | 0.001031 | 0.001051 | 0.001059 |
| explicit_inst_slist_test.test | RUN | 0.344827 | 2.268842 | 1.471738 | 0.001014 | 0.001130 | 0.001005 |
| explicit_inst_set_test.test | RUN | 0.493529 | 2.525327 | 1.712645 | 0.000916 | 0.001089 | 0.001026 |
| explicit_inst_map_test.test | RUN | 0.530496 | 2.691353 | 1.850996 | 0.001158 | 0.000973 | 0.001036 |
| explicit_inst_list_test.test | RUN | 0.124224 | 0.627586 | 0.488348 | 0.000971 | 0.001104 | 0.000974 |
| explicit_inst_flat_set_test.test | RUN | 2.994359 | 18.734522 | 11.196275 | 0.001014 | 0.001211 | 0.001008 |
| explicit_inst_flat_map_test.test | RUN | 3.208277 | 19.715915 | 12.480880 | 0.001001 | 0.001012 | 0.000957 |
| explicit_inst_devector_test.test | RUN | 0.399697 | 2.437413 | 1.576705 | 0.001007 | 0.001036 | 0.001051 |
| explicit_inst_deque_test.test | RUN | 0.397578 | 2.683145 | 1.725288 | 0.000938 | 0.001084 | 0.001070 |
| devector_test.test | RUN | 6.241011 | 37.235026 | 26.827521 | 0.003898 | 0.003618 | 0.005491 |
| devector_options_test.test | RUN | 0.242610 | 1.394380 | 0.860717 | 0.001474 | 0.001131 | 0.001204 |
| deque_test.test | RUN | 4.018105 | 20.115042 | 15.499306 | 0.399824 | 0.399471 | 0.504484 |
| deque_options_test.test | RUN | 0.183116 | 0.525451 | 0.589952 | 0.001002 | 0.001146 | 0.001063 |
| copy_move_algo_test.test | RUN | 0.163396 | 0.607114 | 0.550084 | 0.001490 | 0.001275 | 0.001329 |
| common_iterator_test.test | RUN | 0.011116 | 0.030643 | 0.032368 | 0.000429 | 0.000443 | 0.000939 |
| boost_iterator_comp_test.test | RUN | 0.232217 | 0.743706 | 0.795493 | 0.001035 | 0.001108 | 0.001084 |
| allocator_traits_test.test | RUN | 0.131745 | 0.300933 | 0.362652 | 0.001018 | 0.001033 | 0.001018 |
| alloc_full_test.test | RUN | 0.157843 | 0.698918 | 0.553533 | 0.003029 | 0.003353 | 0.003477 |
| alloc_basic_test.test | RUN | 0.132516 | 0.484308 | 0.422029 | 0.001112 | 0.001193 | 0.001162 |
| adaptive_pool_test.test | RUN | 2.202313 | 11.108545 | 8.029506 | 0.010592 | 0.009845 | 0.010640 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.997× | 0.996×, 0.998× | 0.999× |
| clang | 1.091× | 1.090×, 1.092× | 1.002× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1365 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/43796354412).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| adaptive_pool_test.test | 2 | 0.010693s | 0.009777s | 0.010701s | byte equality observed |
| alloc_basic_test.test | 10 | 0.000955s | 0.000933s | 0.000961s | byte equality observed |
| alloc_full_test.test | 7 | 0.002970s | 0.002954s | 0.003166s | byte equality observed |
| allocator_traits_test.test | 10 | 0.000855s | 0.000869s | 0.000865s | byte equality observed |
| boost_iterator_comp_test.test | 10 | 0.000872s | 0.000873s | 0.000859s | byte equality observed |
| common_iterator_test.test | 10 | 0.000397s | 0.000395s | 0.000851s | byte equality observed |
| copy_move_algo_test.test | 10 | 0.001333s | 0.001007s | 0.001122s | byte equality observed |
| deque_options_test.test | 10 | 0.000933s | 0.000923s | 0.000923s | byte equality observed |
| deque_test.test | 1 | 0.400267s | 0.399849s | 0.505824s | byte equality observed |
| devector_options_test.test | 10 | 0.001046s | 0.000991s | 0.000978s | byte equality observed |
| devector_test.test | 4 | 0.003565s | 0.003454s | 0.005353s | byte equality observed |
| explicit_inst_deque_test.test | 10 | 0.000864s | 0.000862s | 0.000875s | byte equality observed |
| explicit_inst_devector_test.test | 10 | 0.000826s | 0.000814s | 0.000824s | byte equality observed |
| explicit_inst_flat_map_test.test | 10 | 0.000817s | 0.000826s | 0.000816s | byte equality observed |
| explicit_inst_flat_set_test.test | 10 | 0.000824s | 0.000824s | 0.000811s | byte equality observed |
| explicit_inst_list_test.test | 10 | 0.000812s | 0.000808s | 0.000805s | byte equality observed |
| explicit_inst_map_test.test | 10 | 0.000823s | 0.000823s | 0.000811s | byte equality observed |
| explicit_inst_set_test.test | 10 | 0.000821s | 0.000809s | 0.000810s | byte equality observed |
| explicit_inst_slist_test.test | 10 | 0.000823s | 0.000821s | 0.000810s | byte equality observed |
| explicit_inst_small_vector_test.test | 10 | 0.000815s | 0.000812s | 0.000813s | byte equality observed |
| explicit_inst_stable_vector_test.test | 10 | 0.000826s | 0.000826s | 0.000812s | byte equality observed |
| explicit_inst_static_vector_test.test | 10 | 0.000805s | 0.000801s | 0.000803s | byte equality observed |
| explicit_inst_string_test.test | 10 | 0.000818s | 0.000808s | 0.000812s | byte equality observed |
| explicit_inst_vector_test.test | 10 | 0.000814s | 0.000815s | 0.000806s | byte equality observed |
| flat_map_adaptor_test.test | 3 | 0.007153s | 0.006752s | 0.006767s | byte equality observed |
| flat_map_test.test | 3 | 0.007910s | 0.007352s | 0.006953s | byte equality observed |
| flat_set_adaptor_test.test | 3 | 0.007147s | 0.006450s | 0.006770s | byte equality observed |
| flat_set_test.test | 3 | 0.007031s | 0.006257s | 0.006641s | byte equality observed |
| flat_tree_test.test | 10 | 0.000908s | 0.000904s | 0.000900s | byte equality observed |
| global_resource_test.test | 10 | 0.000938s | 0.000932s | 0.000936s | byte equality observed |
| hub_api_test.test | 7 | 0.003084s | 0.002633s | 0.002587s | byte equality observed |
| hub_empty_sort_test.test | 10 | 0.000913s | 0.000906s | 0.000897s | byte equality observed |
| hub_exception_safety_test.test | 1 | 0.057520s | 0.062090s | 0.057724s | byte equality observed |
| hub_new_extended_alignment_test.test | 10 | 0.000912s | 0.000908s | 0.000914s | byte equality observed |
| hub_pocxx_test.test | 10 | 0.000946s | 0.000950s | 0.000927s | byte equality observed |
| hub_sort_test.test | 1 | 0.528842s | 0.533002s | 0.522355s | byte equality observed |
| hub_stability_test.test | 10 | 0.001185s | 0.001160s | 0.001159s | byte equality observed |
| hub_uses_allocator_test.test | 10 | 0.000909s | 0.000911s | 0.000895s | byte equality observed |
| insert_vs_emplace_test.test | 10 | 0.000940s | 0.000919s | 0.000926s | byte equality observed |
| is_constructible_test.test | 10 | 0.000397s | 0.000404s | 0.000854s | byte equality observed |
| list_test.test | 1 | 0.019480s | 0.019529s | 0.020028s | byte equality observed |
| map_test.test | 2 | 0.009740s | 0.009409s | 0.009230s | byte equality observed |
| memory_resource_test.test | 10 | 0.000852s | 0.000850s | 0.000867s | byte equality observed |
| monotonic_buffer_resource_test.test | 10 | 0.000914s | 0.000905s | 0.000921s | byte equality observed |
| nest_api_test.test | 9 | 0.001907s | 0.001925s | 0.001919s | byte equality observed |
| nest_test.test | 10 | 0.000953s | 0.000944s | 0.000938s | byte equality observed |
| new_delete_resource_test.test | 10 | 0.001415s | 0.001411s | 0.001392s | byte equality observed |
| node_allocator_test.test | 3 | 0.008337s | 0.008385s | 0.008425s | byte equality observed |
| node_handle_test.test | 10 | 0.000907s | 0.000903s | 0.000895s | byte equality observed |
| null_iterators_test.test | 10 | 0.000906s | 0.000903s | 0.000896s | byte equality observed |
| pair_test.test | 10 | 0.000911s | 0.000906s | 0.000906s | byte equality observed |
| pmr_deque_test.test | 10 | 0.000887s | 0.000890s | 0.000888s | byte equality observed |
| pmr_devector_test.test | 10 | 0.000886s | 0.000899s | 0.000889s | byte equality observed |
| pmr_flat_map_test.test | 10 | 0.000887s | 0.000885s | 0.000887s | byte equality observed |
| pmr_flat_set_test.test | 10 | 0.000891s | 0.000884s | 0.000886s | byte equality observed |
| pmr_hub_test.test | 10 | 0.000886s | 0.000894s | 0.000881s | byte equality observed |
| pmr_list_test.test | 10 | 0.000885s | 0.000887s | 0.000882s | byte equality observed |
| pmr_map_test.test | 10 | 0.000882s | 0.000890s | 0.000877s | byte equality observed |
| pmr_nest_test.test | 10 | 0.000885s | 0.000885s | 0.000883s | byte equality observed |
| pmr_set_test.test | 10 | 0.000888s | 0.000884s | 0.000878s | byte equality observed |
| pmr_slist_test.test | 10 | 0.000880s | 0.000876s | 0.000873s | byte equality observed |
| pmr_small_vector_test.test | 10 | 0.000880s | 0.000878s | 0.000874s | byte equality observed |
| pmr_stable_vector_test.test | 10 | 0.000892s | 0.000883s | 0.000885s | byte equality observed |
| pmr_string_test.test | 10 | 0.000410s | 0.000396s | 0.000878s | byte equality observed |
| pmr_vector_test.test | 10 | 0.000407s | 0.000398s | 0.000878s | byte equality observed |
| polymorphic_allocator_test.test | 10 | 0.000899s | 0.000898s | 0.000894s | byte equality observed |
| resource_adaptor_test.test | 10 | 0.000909s | 0.000897s | 0.000895s | byte equality observed |
| scoped_allocator_adaptor_test.test | 10 | 0.000906s | 0.000902s | 0.000909s | byte equality observed |
| scoped_allocator_usage_test.test | 10 | 0.000907s | 0.000907s | 0.000903s | byte equality observed |
| segtor_options_test.test | 10 | 0.000935s | 0.000915s | 0.000931s | byte equality observed |
| segtor_test.test | 1 | 0.365312s | 0.357853s | 0.407271s | byte equality observed |
| set_test.test | 2 | 0.013846s | 0.012171s | 0.013295s | byte equality observed |
| slist_test.test | 1 | 0.020338s | 0.019976s | 0.020065s | byte equality observed |
| small_vector_options_test.test | 10 | 0.000988s | 0.000969s | 0.000956s | byte equality observed |
| small_vector_test.test | 5 | 0.002174s | 0.001958s | 0.004608s | byte equality observed |
| stable_vector_test.test | 1 | 0.034347s | 0.034917s | 0.036453s | byte equality observed |
| static_vector_options_test.test | 10 | 0.000977s | 0.000940s | 0.000938s | byte equality observed |
| static_vector_test.test | 10 | 0.001333s | 0.001221s | 0.001246s | byte equality observed |
| string_options_test.test | 10 | 0.000957s | 0.000962s | 0.000930s | byte equality observed |
| string_test.test | 2 | 0.013005s | 0.011842s | 0.012555s | byte equality observed |
| string_view_compat_test.test | 10 | 0.000906s | 0.000894s | 0.000897s | byte equality observed |
| synchronized_pool_resource_test.test | 10 | 0.000949s | 0.000945s | 0.000936s | byte equality observed |
| throw_exception_test.test | 10 | 0.000903s | 0.000904s | 0.000887s | byte equality observed |
| tree_test.test | 10 | 0.000896s | 0.000902s | 0.000886s | byte equality observed |
| unsynchronized_pool_resource_test.test | 10 | 0.000961s | 0.000956s | 0.000947s | byte equality observed |
| uses_allocator_construction_test.test | 10 | 0.000897s | 0.000906s | 0.000894s | byte equality observed |
| uses_allocator_test.test | 10 | 0.000407s | 0.000416s | 0.000869s | byte equality observed |
| vector_options_test.test | 10 | 0.001048s | 0.001043s | 0.001023s | byte equality observed |
| vector_test.test | 4 | 0.003908s | 0.003729s | 0.006133s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/43796354412).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
