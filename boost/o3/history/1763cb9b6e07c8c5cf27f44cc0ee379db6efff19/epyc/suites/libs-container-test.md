# libs/container/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| vector_test.test | RUN | 7.727699 | 39.800636 | 34.601767 | 0.007323 | 0.006492 | 0.009451 |
| vector_options_test.test | RUN | 0.416509 | 1.826599 | 1.489581 | 0.002452 | 0.002432 | 0.002392 |
| uses_allocator_test.test | RUN | 0.075150 | 0.160065 | 0.207846 | 0.000826 | 0.000832 | 0.002025 |
| uses_allocator_construction_test.test | RUN | 0.228718 | 0.574229 | 0.741116 | 0.002006 | 0.002178 | 0.002071 |
| unsynchronized_pool_resource_test.test | RUN | 0.294244 | 1.690394 | 0.890502 | 0.002394 | 0.002412 | 0.002242 |
| tree_test.test | RUN | 1.166854 | 6.008917 | 4.941528 | 0.001982 | 0.002180 | 0.002088 |
| throw_exception_test.test | RUN | 0.165887 | 0.360410 | 0.448966 | 0.002102 | 0.001850 | 0.002074 |
| synchronized_pool_resource_test.test | RUN | 0.294260 | 1.686316 | 0.901610 | 0.002112 | 0.002308 | 0.002268 |
| string_view_compat_test.test | RUN | 0.484479 | 3.385644 | 1.759714 | 0.001778 | 0.002150 | 0.002123 |
| string_test.test | RUN | 1.966754 | 12.740083 | 9.335546 | 0.021172 | 0.020475 | 0.020438 |
| string_options_test.test | RUN | 0.366165 | 2.765021 | 1.561581 | 0.002267 | 0.002375 | 0.002318 |
| static_vector_test.test | RUN | 1.969412 | 10.564508 | 9.373359 | 0.003021 | 0.002700 | 0.002802 |
| static_vector_options_test.test | RUN | 0.275933 | 0.733004 | 0.892412 | 0.002178 | 0.002272 | 0.002228 |
| stable_vector_test.test | RUN | 4.431754 | 21.746489 | 17.978658 | 0.038727 | 0.040222 | 0.042230 |
| small_vector_test.test | RUN | 2.944740 | 15.303755 | 12.786134 | 0.004565 | 0.004026 | 0.005980 |
| small_vector_options_test.test | RUN | 0.462882 | 1.877134 | 1.734275 | 0.002343 | 0.002437 | 0.002216 |
| slist_test.test | RUN | 2.762703 | 13.684699 | 11.697628 | 0.031775 | 0.032043 | 0.031755 |
| set_test.test | RUN | 4.291262 | 25.475892 | 20.861079 | 0.019150 | 0.017686 | 0.018870 |
| segtor_test.test | RUN | 5.236885 | 28.031142 | 23.245721 | 0.778583 | 0.829139 | 0.824805 |
| segtor_options_test.test | RUN | 0.302401 | 0.866491 | 1.070363 | 0.002353 | 0.002148 | 0.002176 |
| scoped_allocator_usage_test.test | RUN | 1.023429 | 4.320773 | 4.036741 | 0.002236 | 0.001698 | 0.002134 |
| scoped_allocator_adaptor_test.test | RUN | 0.485267 | 1.188719 | 1.801735 | 0.002000 | 0.002162 | 0.002128 |
| resource_adaptor_test.test | RUN | 0.252274 | 0.726333 | 0.793328 | 0.002141 | 0.002114 | 0.002099 |
| polymorphic_allocator_test.test | RUN | 0.215576 | 0.584389 | 0.667182 | 0.002136 | 0.002164 | 0.002126 |
| pmr_vector_test.test | RUN | 0.121112 | 0.222422 | 0.336087 | 0.000788 | 0.000973 | 0.002159 |
| pmr_string_test.test | RUN | 0.234542 | 0.467224 | 0.655103 | 0.000909 | 0.000907 | 0.002071 |
| pmr_stable_vector_test.test | RUN | 0.255760 | 0.773169 | 0.896250 | 0.002163 | 0.002085 | 0.002180 |
| pmr_small_vector_test.test | RUN | 0.142994 | 0.315825 | 0.450388 | 0.001573 | 0.002010 | 0.001972 |
| pmr_slist_test.test | RUN | 0.199595 | 0.972466 | 0.882714 | 0.001943 | 0.001935 | 0.002093 |
| pmr_set_test.test | RUN | 0.224842 | 0.535724 | 0.691130 | 0.001894 | 0.002209 | 0.001815 |
| pmr_nest_test.test | RUN | 0.169808 | 0.345295 | 0.533801 | 0.001768 | 0.002184 | 0.002150 |
| pmr_map_test.test | RUN | 0.225516 | 0.517520 | 0.685150 | 0.002124 | 0.002044 | 0.002058 |
| pmr_list_test.test | RUN | 0.154131 | 0.323749 | 0.502198 | 0.001926 | 0.002016 | 0.002185 |
| pmr_hub_test.test | RUN | 0.219765 | 0.454285 | 0.608742 | 0.002176 | 0.001979 | 0.001996 |
| pmr_flat_set_test.test | RUN | 0.163578 | 0.358804 | 0.550527 | 0.002062 | 0.001728 | 0.001996 |
| pmr_flat_map_test.test | RUN | 0.198481 | 0.412440 | 0.547950 | 0.002188 | 0.001802 | 0.001980 |
| pmr_devector_test.test | RUN | 0.129088 | 0.355203 | 0.439309 | 0.002194 | 0.002074 | 0.002182 |
| pmr_deque_test.test | RUN | 0.131252 | 0.289990 | 0.417957 | 0.002084 | 0.002134 | 0.002028 |
| pair_test.test | RUN | 0.336219 | 0.687034 | 0.992075 | 0.001963 | 0.002116 | 0.002115 |
| null_iterators_test.test | RUN | 0.509453 | 1.359697 | 1.571603 | 0.002039 | 0.002150 | 0.002068 |
| node_handle_test.test | RUN | 0.205686 | 1.677486 | 0.672413 | 0.001896 | 0.002229 | 0.002130 |
| node_allocator_test.test | RUN | 3.212945 | 16.986242 | 14.766044 | 0.013179 | 0.013235 | 0.013334 |
| new_delete_resource_test.test | RUN | 0.274954 | 1.014629 | 0.913250 | 0.003159 | 0.002979 | 0.003160 |
| nest_test.test | RUN | 0.701261 | 4.559533 | 3.081478 | 0.002069 | 0.002362 | 0.002086 |
| nest_api_test.test | RUN | 1.150640 | 8.797454 | 6.311992 | 0.003274 | 0.003232 | 0.003187 |
| monotonic_buffer_resource_test.test | RUN | 0.286131 | 1.839728 | 0.848566 | 0.002030 | 0.002175 | 0.002090 |
| memory_resource_test.test | RUN | 0.168417 | 0.529339 | 0.550962 | 0.002193 | 0.002196 | 0.002204 |
| map_test.test | RUN | 5.624856 | 28.572063 | 30.324280 | 0.014442 | 0.013579 | 0.013861 |
| list_test.test | RUN | 2.951904 | 14.688388 | 12.583322 | 0.031649 | 0.032931 | 0.032569 |
| is_constructible_test.test | RUN | 0.103709 | 0.201399 | 0.281040 | 0.000954 | 0.000911 | 0.002086 |
| insert_vs_emplace_test.test | RUN | 0.335174 | 1.198659 | 1.755598 | 0.002308 | 0.002326 | 0.002192 |
| hub_uses_allocator_test.test | RUN | 0.363684 | 1.040642 | 1.234777 | 0.002126 | 0.002246 | 0.002248 |
| hub_stability_test.test | RUN | 0.759617 | 4.775987 | 4.285398 | 0.002552 | 0.002517 | 0.002514 |
| hub_sort_test.test | RUN | 0.497022 | 2.196912 | 2.083316 | 0.681232 | 0.642834 | 0.643650 |
| hub_pocxx_test.test | RUN | 0.438111 | 2.538023 | 1.399543 | 0.001790 | 0.002116 | 0.001979 |
| hub_new_extended_alignment_test.test | RUN | 0.248460 | 0.765076 | 0.859740 | 0.002080 | 0.002201 | 0.002162 |
| hub_exception_safety_test.test | RUN | 0.879352 | 5.833742 | 4.355888 | 0.117963 | 0.110713 | 0.115184 |
| hub_empty_sort_test.test | RUN | 0.278494 | 0.712060 | 0.941720 | 0.002088 | 0.002128 | 0.002104 |
| hub_api_test.test | RUN | 2.930858 | 23.393684 | 13.660056 | 0.005031 | 0.004464 | 0.004378 |
| global_resource_test.test | RUN | 0.161708 | 0.487486 | 0.501046 | 0.002190 | 0.002184 | 0.002168 |
| flat_tree_test.test | RUN | 5.246282 | 36.300134 | 24.840654 | 0.002059 | 0.002093 | 0.002066 |
| flat_set_test.test | RUN | 6.533346 | 45.593913 | 32.636553 | 0.010610 | 0.009547 | 0.010620 |
| flat_set_adaptor_test.test | RUN | 4.856359 | 40.439813 | 25.554175 | 0.010722 | 0.009790 | 0.010065 |
| flat_map_test.test | RUN | 10.513967 | 68.108406 | 54.268300 | 0.011431 | 0.010893 | 0.011053 |
| flat_map_adaptor_test.test | RUN | 6.620800 | 49.570135 | 38.338465 | 0.010810 | 0.010243 | 0.010501 |
| explicit_inst_vector_test.test | RUN | 1.103584 | 6.858015 | 5.720764 | 0.002108 | 0.002138 | 0.002164 |
| explicit_inst_string_test.test | RUN | 1.473349 | 12.144092 | 7.658079 | 0.002294 | 0.002275 | 0.002082 |
| explicit_inst_static_vector_test.test | RUN | 0.150919 | 0.469866 | 0.546979 | 0.002347 | 0.002048 | 0.002077 |
| explicit_inst_stable_vector_test.test | RUN | 0.885906 | 4.391616 | 3.530501 | 0.002044 | 0.002197 | 0.002004 |
| explicit_inst_small_vector_test.test | RUN | 0.746908 | 3.935024 | 3.420714 | 0.002103 | 0.002159 | 0.002122 |
| explicit_inst_slist_test.test | RUN | 0.570099 | 3.567926 | 2.640558 | 0.002656 | 0.002202 | 0.002018 |
| explicit_inst_set_test.test | RUN | 0.821458 | 4.149774 | 3.109492 | 0.002090 | 0.002181 | 0.002164 |
| explicit_inst_map_test.test | RUN | 0.871433 | 4.356527 | 3.402337 | 0.002052 | 0.002212 | 0.002020 |
| explicit_inst_list_test.test | RUN | 0.202876 | 1.001980 | 0.870187 | 0.001673 | 0.002076 | 0.001959 |
| explicit_inst_flat_set_test.test | RUN | 4.246638 | 30.732330 | 19.895365 | 0.002124 | 0.002144 | 0.002074 |
| explicit_inst_flat_map_test.test | RUN | 4.615957 | 31.761828 | 21.937349 | 0.002142 | 0.002154 | 0.002092 |
| explicit_inst_devector_test.test | RUN | 0.595925 | 3.910206 | 2.762955 | 0.002167 | 0.002090 | 0.002160 |
| explicit_inst_deque_test.test | RUN | 0.625781 | 4.198439 | 3.002793 | 0.002170 | 0.002136 | 0.002261 |
| devector_test.test | RUN | 8.409007 | 50.634666 | 35.600940 | 0.004678 | 0.004388 | 0.005917 |
| devector_options_test.test | RUN | 0.386705 | 2.334449 | 1.616230 | 0.002570 | 0.002454 | 0.002450 |
| deque_test.test | RUN | 5.666989 | 30.013190 | 25.600618 | 0.499729 | 0.464509 | 0.540971 |
| deque_options_test.test | RUN | 0.315314 | 0.894302 | 1.127849 | 0.002545 | 0.002240 | 0.002193 |
| copy_move_algo_test.test | RUN | 0.291511 | 1.025130 | 1.017455 | 0.002396 | 0.002482 | 0.002004 |
| common_iterator_test.test | RUN | 0.025195 | 0.060798 | 0.054565 | 0.000821 | 0.000784 | 0.002140 |
| boost_iterator_comp_test.test | RUN | 0.426067 | 1.242945 | 1.614478 | 0.002075 | 0.002242 | 0.002363 |
| allocator_traits_test.test | RUN | 0.255526 | 0.577738 | 0.812848 | 0.001807 | 0.002132 | 0.002278 |
| alloc_full_test.test | RUN | 0.274736 | 1.153816 | 1.103608 | 0.005532 | 0.005977 | 0.006078 |
| alloc_basic_test.test | RUN | 0.230031 | 0.844406 | 0.802575 | 0.002504 | 0.002268 | 0.002221 |
| adaptive_pool_test.test | RUN | 2.252200 | 12.570228 | 14.348859 | 0.013271 | 0.012268 | 0.019040 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.974× | 0.983×, 0.965× | 1.014× |
| clang | 1.027× | 1.044×, 1.010× | 0.985× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1359 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44390936409).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| adaptive_pool_test.test | 2 | 0.013460s | 0.012653s | 0.013874s | byte equality observed |
| alloc_basic_test.test | 10 | 0.001364s | 0.001366s | 0.001376s | byte equality observed |
| alloc_full_test.test | 6 | 0.003955s | 0.003807s | 0.004023s | byte equality observed |
| allocator_traits_test.test | 10 | 0.001264s | 0.001249s | 0.001244s | byte equality observed |
| boost_iterator_comp_test.test | 10 | 0.001309s | 0.001306s | 0.001279s | byte equality observed |
| common_iterator_test.test | 10 | 0.000602s | 0.000596s | 0.001268s | byte equality observed |
| copy_move_algo_test.test | 10 | 0.001571s | 0.001429s | 0.001442s | byte equality observed |
| deque_options_test.test | 10 | 0.001409s | 0.001368s | 0.001337s | byte equality observed |
| deque_test.test | 1 | 0.544941s | 0.512338s | 0.597482s | byte equality observed |
| devector_options_test.test | 10 | 0.001471s | 0.001407s | 0.001404s | byte equality observed |
| devector_test.test | 4 | 0.004111s | 0.004007s | 0.005492s | byte equality observed |
| explicit_inst_deque_test.test | 10 | 0.001235s | 0.001228s | 0.001222s | byte equality observed |
| explicit_inst_devector_test.test | 10 | 0.001206s | 0.001218s | 0.001190s | byte equality observed |
| explicit_inst_flat_map_test.test | 10 | 0.001217s | 0.001221s | 0.001208s | byte equality observed |
| explicit_inst_flat_set_test.test | 10 | 0.001222s | 0.001225s | 0.001202s | byte equality observed |
| explicit_inst_list_test.test | 10 | 0.001203s | 0.001217s | 0.001195s | byte equality observed |
| explicit_inst_map_test.test | 10 | 0.001205s | 0.001222s | 0.001244s | byte equality observed |
| explicit_inst_set_test.test | 10 | 0.001211s | 0.001223s | 0.001230s | byte equality observed |
| explicit_inst_slist_test.test | 10 | 0.001201s | 0.001217s | 0.001230s | byte equality observed |
| explicit_inst_small_vector_test.test | 10 | 0.001204s | 0.001204s | 0.001213s | byte equality observed |
| explicit_inst_stable_vector_test.test | 10 | 0.001212s | 0.001200s | 0.001218s | byte equality observed |
| explicit_inst_static_vector_test.test | 10 | 0.001193s | 0.001189s | 0.001209s | byte equality observed |
| explicit_inst_string_test.test | 10 | 0.001203s | 0.001199s | 0.001210s | byte equality observed |
| explicit_inst_vector_test.test | 10 | 0.001217s | 0.001206s | 0.001210s | byte equality observed |
| flat_map_adaptor_test.test | 3 | 0.007555s | 0.007194s | 0.007414s | byte equality observed |
| flat_map_test.test | 2 | 0.008203s | 0.007731s | 0.007703s | byte equality observed |
| flat_set_adaptor_test.test | 3 | 0.007593s | 0.006845s | 0.007622s | byte equality observed |
| flat_set_test.test | 3 | 0.007517s | 0.006644s | 0.007511s | byte equality observed |
| flat_tree_test.test | 10 | 0.001252s | 0.001207s | 0.001242s | byte equality observed |
| global_resource_test.test | 10 | 0.001253s | 0.001252s | 0.001286s | byte equality observed |
| hub_api_test.test | 6 | 0.003459s | 0.002814s | 0.002799s | byte equality observed |
| hub_empty_sort_test.test | 10 | 0.001220s | 0.001221s | 0.001231s | byte equality observed |
| hub_exception_safety_test.test | 1 | 0.084361s | 0.075880s | 0.077759s | byte equality observed |
| hub_new_extended_alignment_test.test | 10 | 0.001267s | 0.001276s | 0.001297s | byte equality observed |
| hub_pocxx_test.test | 10 | 0.001255s | 0.001244s | 0.001298s | byte equality observed |
| hub_sort_test.test | 1 | 0.561927s | 0.558966s | 0.547241s | byte equality observed |
| hub_stability_test.test | 9 | 0.001554s | 0.001535s | 0.001597s | byte equality observed |
| hub_uses_allocator_test.test | 10 | 0.001239s | 0.001228s | 0.001236s | byte equality observed |
| insert_vs_emplace_test.test | 10 | 0.001266s | 0.001267s | 0.001258s | byte equality observed |
| is_constructible_test.test | 10 | 0.000569s | 0.000571s | 0.001188s | byte equality observed |
| list_test.test | 1 | 0.022280s | 0.022321s | 0.022666s | byte equality observed |
| map_test.test | 2 | 0.010155s | 0.009909s | 0.009993s | byte equality observed |
| memory_resource_test.test | 10 | 0.001285s | 0.001233s | 0.001242s | byte equality observed |
| monotonic_buffer_resource_test.test | 10 | 0.001267s | 0.001275s | 0.001261s | byte equality observed |
| nest_api_test.test | 9 | 0.002068s | 0.002045s | 0.002084s | byte equality observed |
| nest_test.test | 10 | 0.001312s | 0.001269s | 0.001266s | byte equality observed |
| new_delete_resource_test.test | 9 | 0.001853s | 0.001802s | 0.001827s | byte equality observed |
| node_allocator_test.test | 2 | 0.009303s | 0.008988s | 0.009187s | byte equality observed |
| node_handle_test.test | 10 | 0.001271s | 0.001240s | 0.001255s | byte equality observed |
| null_iterators_test.test | 10 | 0.001244s | 0.001208s | 0.001215s | byte equality observed |
| pair_test.test | 10 | 0.001240s | 0.001200s | 0.001220s | byte equality observed |
| pmr_deque_test.test | 10 | 0.001217s | 0.001209s | 0.001208s | byte equality observed |
| pmr_devector_test.test | 10 | 0.001212s | 0.001208s | 0.001221s | byte equality observed |
| pmr_flat_map_test.test | 10 | 0.001220s | 0.001216s | 0.001214s | byte equality observed |
| pmr_flat_set_test.test | 10 | 0.001224s | 0.001226s | 0.001220s | byte equality observed |
| pmr_hub_test.test | 10 | 0.001218s | 0.001206s | 0.001212s | byte equality observed |
| pmr_list_test.test | 10 | 0.001215s | 0.001219s | 0.001247s | byte equality observed |
| pmr_map_test.test | 10 | 0.001199s | 0.001238s | 0.001226s | byte equality observed |
| pmr_nest_test.test | 10 | 0.001213s | 0.001213s | 0.001250s | byte equality observed |
| pmr_set_test.test | 10 | 0.001223s | 0.001226s | 0.001214s | byte equality observed |
| pmr_slist_test.test | 10 | 0.001203s | 0.001224s | 0.001217s | byte equality observed |
| pmr_small_vector_test.test | 10 | 0.001211s | 0.001211s | 0.001240s | byte equality observed |
| pmr_stable_vector_test.test | 10 | 0.001241s | 0.001216s | 0.001252s | byte equality observed |
| pmr_string_test.test | 10 | 0.000580s | 0.000580s | 0.001236s | byte equality observed |
| pmr_vector_test.test | 10 | 0.000583s | 0.000569s | 0.001241s | byte equality observed |
| polymorphic_allocator_test.test | 10 | 0.001303s | 0.001271s | 0.001262s | byte equality observed |
| resource_adaptor_test.test | 10 | 0.001294s | 0.001278s | 0.001301s | byte equality observed |
| scoped_allocator_adaptor_test.test | 10 | 0.001265s | 0.001226s | 0.001319s | byte equality observed |
| scoped_allocator_usage_test.test | 10 | 0.001326s | 0.001251s | 0.001302s | byte equality observed |
| segtor_options_test.test | 10 | 0.001362s | 0.001316s | 0.001349s | byte equality observed |
| segtor_test.test | 1 | 0.503135s | 0.488702s | 0.485603s | byte equality observed |
| set_test.test | 2 | 0.014084s | 0.012422s | 0.014293s | byte equality observed |
| slist_test.test | 1 | 0.021822s | 0.021699s | 0.021954s | byte equality observed |
| small_vector_options_test.test | 10 | 0.001382s | 0.001314s | 0.001405s | byte equality observed |
| small_vector_test.test | 5 | 0.002672s | 0.002435s | 0.004610s | byte equality observed |
| stable_vector_test.test | 1 | 0.032464s | 0.032695s | 0.034017s | byte equality observed |
| static_vector_options_test.test | 10 | 0.001341s | 0.001274s | 0.001389s | byte equality observed |
| static_vector_test.test | 10 | 0.001698s | 0.001546s | 0.001634s | byte equality observed |
| string_options_test.test | 10 | 0.001292s | 0.001276s | 0.001290s | byte equality observed |
| string_test.test | 2 | 0.014413s | 0.015339s | 0.014856s | byte equality observed |
| string_view_compat_test.test | 10 | 0.001253s | 0.001240s | 0.001242s | byte equality observed |
| synchronized_pool_resource_test.test | 10 | 0.001315s | 0.001281s | 0.001341s | byte equality observed |
| throw_exception_test.test | 10 | 0.001209s | 0.001213s | 0.001213s | byte equality observed |
| tree_test.test | 10 | 0.001237s | 0.001233s | 0.001212s | byte equality observed |
| unsynchronized_pool_resource_test.test | 10 | 0.001297s | 0.001309s | 0.001317s | byte equality observed |
| uses_allocator_construction_test.test | 10 | 0.001208s | 0.001216s | 0.001231s | byte equality observed |
| uses_allocator_test.test | 10 | 0.000564s | 0.000577s | 0.001211s | byte equality observed |
| vector_options_test.test | 8 | 0.001406s | 0.001414s | 0.001410s | byte equality observed |
| vector_test.test | 3 | 0.004486s | 0.004413s | 0.006303s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44390936409).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
