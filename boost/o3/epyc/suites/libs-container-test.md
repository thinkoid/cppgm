# libs/container/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| vector_test.test | RUN | 8.864812 | 39.440270 | 34.133282 | 0.006777 | 0.006760 | 0.009577 |
| vector_options_test.test | RUN | 0.412558 | 1.822094 | 1.487759 | 0.002424 | 0.002382 | 0.002428 |
| uses_allocator_test.test | RUN | 0.075079 | 0.154993 | 0.206464 | 0.000851 | 0.000706 | 0.002018 |
| uses_allocator_construction_test.test | RUN | 0.221319 | 0.571766 | 0.740707 | 0.001926 | 0.001980 | 0.002110 |
| unsynchronized_pool_resource_test.test | RUN | 0.277077 | 1.646941 | 0.933138 | 0.002017 | 0.002374 | 0.002178 |
| tree_test.test | RUN | 1.232073 | 6.019501 | 4.990532 | 0.001941 | 0.002010 | 0.002154 |
| throw_exception_test.test | RUN | 0.155193 | 0.365648 | 0.456113 | 0.001722 | 0.002174 | 0.002094 |
| synchronized_pool_resource_test.test | RUN | 0.273440 | 1.700455 | 0.902024 | 0.002138 | 0.002310 | 0.002263 |
| string_view_compat_test.test | RUN | 0.459181 | 3.380887 | 1.743619 | 0.001671 | 0.002192 | 0.002106 |
| string_test.test | RUN | 2.012964 | 12.606350 | 9.098485 | 0.019964 | 0.020248 | 0.021091 |
| string_options_test.test | RUN | 0.369311 | 2.734578 | 1.539316 | 0.002148 | 0.002252 | 0.002394 |
| static_vector_test.test | RUN | 2.264632 | 10.473149 | 9.294069 | 0.002918 | 0.002874 | 0.002790 |
| static_vector_options_test.test | RUN | 0.266230 | 0.720042 | 0.896821 | 0.002276 | 0.002205 | 0.002214 |
| stable_vector_test.test | RUN | 4.956855 | 21.453497 | 17.921011 | 0.039509 | 0.040738 | 0.041443 |
| small_vector_test.test | RUN | 3.400506 | 15.084721 | 12.775141 | 0.004422 | 0.003966 | 0.006433 |
| small_vector_options_test.test | RUN | 0.456984 | 1.839384 | 1.736945 | 0.002198 | 0.002238 | 0.002246 |
| slist_test.test | RUN | 3.057714 | 13.590245 | 11.291762 | 0.031233 | 0.028924 | 0.031658 |
| set_test.test | RUN | 4.649991 | 25.305936 | 20.590969 | 0.019006 | 0.016184 | 0.019161 |
| segtor_test.test | RUN | 6.068657 | 27.715255 | 23.065922 | 0.835107 | 0.833432 | 0.865393 |
| segtor_options_test.test | RUN | 0.308383 | 0.813868 | 1.040797 | 0.002231 | 0.002082 | 0.002240 |
| scoped_allocator_usage_test.test | RUN | 1.063531 | 4.266886 | 3.892320 | 0.001920 | 0.001735 | 0.002017 |
| scoped_allocator_adaptor_test.test | RUN | 0.476302 | 1.252981 | 1.840998 | 0.002074 | 0.002120 | 0.002142 |
| resource_adaptor_test.test | RUN | 0.240790 | 0.716534 | 0.832730 | 0.001878 | 0.001940 | 0.001985 |
| polymorphic_allocator_test.test | RUN | 0.205172 | 0.576055 | 0.688720 | 0.001866 | 0.001976 | 0.001853 |
| pmr_vector_test.test | RUN | 0.115377 | 0.217010 | 0.322468 | 0.000735 | 0.000949 | 0.001797 |
| pmr_string_test.test | RUN | 0.227825 | 0.462915 | 0.682697 | 0.000893 | 0.000875 | 0.002022 |
| pmr_stable_vector_test.test | RUN | 0.263811 | 0.741087 | 0.879354 | 0.002083 | 0.001900 | 0.001962 |
| pmr_small_vector_test.test | RUN | 0.139819 | 0.312969 | 0.446788 | 0.002036 | 0.001902 | 0.002059 |
| pmr_slist_test.test | RUN | 0.199205 | 0.963490 | 0.891586 | 0.002040 | 0.002154 | 0.001998 |
| pmr_set_test.test | RUN | 0.215643 | 0.531022 | 0.710087 | 0.001893 | 0.002084 | 0.002018 |
| pmr_nest_test.test | RUN | 0.170860 | 0.345312 | 0.505965 | 0.001836 | 0.002196 | 0.001808 |
| pmr_map_test.test | RUN | 0.224336 | 0.517240 | 0.645388 | 0.001653 | 0.001899 | 0.002042 |
| pmr_list_test.test | RUN | 0.152438 | 0.325639 | 0.440719 | 0.002104 | 0.001930 | 0.002012 |
| pmr_hub_test.test | RUN | 0.206525 | 0.446531 | 0.626487 | 0.001872 | 0.002036 | 0.001904 |
| pmr_flat_set_test.test | RUN | 0.168085 | 0.357161 | 0.523955 | 0.001874 | 0.001684 | 0.001898 |
| pmr_flat_map_test.test | RUN | 0.200520 | 0.415087 | 0.607761 | 0.001634 | 0.001808 | 0.001752 |
| pmr_devector_test.test | RUN | 0.127364 | 0.357089 | 0.470930 | 0.002026 | 0.001838 | 0.001808 |
| pmr_deque_test.test | RUN | 0.128281 | 0.292623 | 0.460575 | 0.002061 | 0.002120 | 0.002038 |
| pair_test.test | RUN | 0.317943 | 0.688773 | 1.001122 | 0.001866 | 0.002186 | 0.002168 |
| null_iterators_test.test | RUN | 0.494995 | 1.339861 | 1.663668 | 0.001724 | 0.002102 | 0.002140 |
| node_handle_test.test | RUN | 0.224193 | 1.674213 | 0.707654 | 0.002122 | 0.002108 | 0.002134 |
| node_allocator_test.test | RUN | 3.556649 | 16.780345 | 14.216482 | 0.013015 | 0.013182 | 0.013310 |
| new_delete_resource_test.test | RUN | 0.272318 | 1.019884 | 0.969354 | 0.002946 | 0.002999 | 0.003000 |
| nest_test.test | RUN | 0.692838 | 4.581274 | 3.117183 | 0.002163 | 0.002194 | 0.001892 |
| nest_api_test.test | RUN | 1.279402 | 8.816521 | 5.962695 | 0.003193 | 0.003180 | 0.003130 |
| monotonic_buffer_resource_test.test | RUN | 0.276326 | 1.851668 | 0.954541 | 0.001964 | 0.002120 | 0.002128 |
| memory_resource_test.test | RUN | 0.165396 | 0.514458 | 0.540199 | 0.001947 | 0.002061 | 0.002130 |
| map_test.test | RUN | 6.430843 | 28.460729 | 29.881664 | 0.014243 | 0.014165 | 0.013944 |
| list_test.test | RUN | 3.262657 | 14.676053 | 12.651438 | 0.032476 | 0.032963 | 0.033313 |
| is_constructible_test.test | RUN | 0.102103 | 0.195559 | 0.323789 | 0.000898 | 0.000847 | 0.002065 |
| insert_vs_emplace_test.test | RUN | 0.348622 | 1.151449 | 1.694567 | 0.002105 | 0.002155 | 0.002215 |
| hub_uses_allocator_test.test | RUN | 0.351777 | 1.067625 | 1.246487 | 0.002122 | 0.002184 | 0.002218 |
| hub_stability_test.test | RUN | 0.761631 | 4.670599 | 4.219642 | 0.002486 | 0.002514 | 0.002514 |
| hub_sort_test.test | RUN | 0.475334 | 2.184487 | 1.972005 | 0.673834 | 0.671892 | 0.647570 |
| hub_pocxx_test.test | RUN | 0.487184 | 2.466375 | 1.501549 | 0.002014 | 0.002229 | 0.002194 |
| hub_new_extended_alignment_test.test | RUN | 0.249893 | 0.769854 | 0.809660 | 0.002031 | 0.002110 | 0.002118 |
| hub_exception_safety_test.test | RUN | 0.923126 | 5.901266 | 4.120861 | 0.110796 | 0.106994 | 0.112168 |
| hub_empty_sort_test.test | RUN | 0.279970 | 0.718414 | 0.927316 | 0.002026 | 0.002114 | 0.002088 |
| hub_api_test.test | RUN | 3.056217 | 23.629220 | 13.674670 | 0.004866 | 0.004547 | 0.004537 |
| global_resource_test.test | RUN | 0.156958 | 0.469205 | 0.523320 | 0.002181 | 0.002261 | 0.002161 |
| flat_tree_test.test | RUN | 5.798400 | 36.132071 | 24.912869 | 0.002032 | 0.001954 | 0.002097 |
| flat_set_test.test | RUN | 7.257519 | 45.678108 | 32.637818 | 0.010447 | 0.009621 | 0.010175 |
| flat_set_adaptor_test.test | RUN | 5.434632 | 40.919471 | 25.545076 | 0.010507 | 0.009691 | 0.010953 |
| flat_map_test.test | RUN | 11.805791 | 68.240113 | 52.903928 | 0.011357 | 0.011382 | 0.010948 |
| flat_map_adaptor_test.test | RUN | 7.544082 | 50.073884 | 37.539174 | 0.010546 | 0.010221 | 0.010435 |
| explicit_inst_vector_test.test | RUN | 1.131452 | 6.920817 | 5.724632 | 0.001961 | 0.002022 | 0.001999 |
| explicit_inst_string_test.test | RUN | 1.457882 | 11.983359 | 7.580631 | 0.002027 | 0.002077 | 0.002106 |
| explicit_inst_static_vector_test.test | RUN | 0.149050 | 0.455888 | 0.571529 | 0.001930 | 0.002071 | 0.001952 |
| explicit_inst_stable_vector_test.test | RUN | 0.902422 | 4.312815 | 3.606994 | 0.001874 | 0.002070 | 0.002153 |
| explicit_inst_small_vector_test.test | RUN | 0.736719 | 3.928737 | 3.362724 | 0.002029 | 0.002034 | 0.002089 |
| explicit_inst_slist_test.test | RUN | 0.567068 | 3.574095 | 2.671577 | 0.002134 | 0.002273 | 0.002022 |
| explicit_inst_set_test.test | RUN | 0.805130 | 4.097602 | 3.130016 | 0.002099 | 0.002182 | 0.001921 |
| explicit_inst_map_test.test | RUN | 0.905928 | 4.342135 | 3.440990 | 0.002074 | 0.002106 | 0.002071 |
| explicit_inst_list_test.test | RUN | 0.203457 | 0.988096 | 0.857160 | 0.001999 | 0.002093 | 0.002052 |
| explicit_inst_flat_set_test.test | RUN | 4.766436 | 30.388446 | 19.758222 | 0.002040 | 0.002110 | 0.002083 |
| explicit_inst_flat_map_test.test | RUN | 5.146946 | 32.110347 | 22.209265 | 0.001990 | 0.002035 | 0.001921 |
| explicit_inst_devector_test.test | RUN | 0.626698 | 4.003058 | 2.747242 | 0.002082 | 0.002110 | 0.001983 |
| explicit_inst_deque_test.test | RUN | 0.653198 | 4.298553 | 3.062448 | 0.002108 | 0.002155 | 0.002023 |
| devector_test.test | RUN | 9.175913 | 51.849141 | 35.180533 | 0.004444 | 0.004345 | 0.005782 |
| devector_options_test.test | RUN | 0.392294 | 2.342081 | 1.558283 | 0.002364 | 0.002558 | 0.002268 |
| deque_test.test | RUN | 6.330114 | 25.913282 | 25.423083 | 0.500660 | 0.488390 | 0.549374 |
| deque_options_test.test | RUN | 0.306381 | 0.878309 | 1.118370 | 0.002114 | 0.002175 | 0.002119 |
| copy_move_algo_test.test | RUN | 0.291273 | 1.038275 | 1.030371 | 0.002120 | 0.002389 | 0.002359 |
| common_iterator_test.test | RUN | 0.024027 | 0.059676 | 0.055120 | 0.000731 | 0.000789 | 0.001991 |
| boost_iterator_comp_test.test | RUN | 0.417132 | 1.222702 | 1.601732 | 0.001814 | 0.002259 | 0.001961 |
| allocator_traits_test.test | RUN | 0.249918 | 0.569069 | 0.718385 | 0.001999 | 0.002168 | 0.002098 |
| alloc_full_test.test | RUN | 0.276780 | 1.172513 | 1.109937 | 0.005592 | 0.006018 | 0.006034 |
| alloc_basic_test.test | RUN | 0.227215 | 0.796920 | 0.825165 | 0.001980 | 0.002251 | 0.002150 |
| adaptive_pool_test.test | RUN | 2.615004 | 17.367148 | 14.437101 | 0.012936 | 0.012238 | 0.018677 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.985× | 0.994×, 0.976× | 1.000× |
| clang | 1.025× | 1.029×, 1.022× | 0.995× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1359 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/43701438216).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| adaptive_pool_test.test | 2 | 0.013374s | 0.012782s | 0.013730s | byte equality observed |
| alloc_basic_test.test | 10 | 0.001334s | 0.001311s | 0.001374s | byte equality observed |
| alloc_full_test.test | 6 | 0.003833s | 0.003784s | 0.003903s | byte equality observed |
| allocator_traits_test.test | 10 | 0.001245s | 0.001225s | 0.001256s | byte equality observed |
| boost_iterator_comp_test.test | 10 | 0.001299s | 0.001302s | 0.001254s | byte equality observed |
| common_iterator_test.test | 10 | 0.000595s | 0.000604s | 0.001262s | byte equality observed |
| copy_move_algo_test.test | 10 | 0.001553s | 0.001392s | 0.001437s | byte equality observed |
| deque_options_test.test | 10 | 0.001393s | 0.001333s | 0.001419s | byte equality observed |
| deque_test.test | 1 | 0.536214s | 0.510369s | 0.601574s | byte equality observed |
| devector_options_test.test | 10 | 0.001459s | 0.001375s | 0.001395s | byte equality observed |
| devector_test.test | 4 | 0.004089s | 0.003953s | 0.005460s | byte equality observed |
| explicit_inst_deque_test.test | 10 | 0.001205s | 0.001189s | 0.001201s | byte equality observed |
| explicit_inst_devector_test.test | 10 | 0.001196s | 0.001177s | 0.001194s | byte equality observed |
| explicit_inst_flat_map_test.test | 10 | 0.001205s | 0.001196s | 0.001199s | byte equality observed |
| explicit_inst_flat_set_test.test | 10 | 0.001203s | 0.001196s | 0.001198s | byte equality observed |
| explicit_inst_list_test.test | 10 | 0.001206s | 0.001175s | 0.001197s | byte equality observed |
| explicit_inst_map_test.test | 10 | 0.001216s | 0.001192s | 0.001227s | byte equality observed |
| explicit_inst_set_test.test | 10 | 0.001222s | 0.001192s | 0.001226s | byte equality observed |
| explicit_inst_slist_test.test | 10 | 0.001212s | 0.001187s | 0.001207s | byte equality observed |
| explicit_inst_small_vector_test.test | 10 | 0.001216s | 0.001194s | 0.001206s | byte equality observed |
| explicit_inst_stable_vector_test.test | 10 | 0.001216s | 0.001207s | 0.001223s | byte equality observed |
| explicit_inst_static_vector_test.test | 10 | 0.001195s | 0.001166s | 0.001202s | byte equality observed |
| explicit_inst_string_test.test | 10 | 0.001218s | 0.001200s | 0.001203s | byte equality observed |
| explicit_inst_vector_test.test | 10 | 0.001215s | 0.001185s | 0.001200s | byte equality observed |
| flat_map_adaptor_test.test | 3 | 0.007525s | 0.007203s | 0.007360s | byte equality observed |
| flat_map_test.test | 3 | 0.008092s | 0.007671s | 0.007624s | byte equality observed |
| flat_set_adaptor_test.test | 3 | 0.007581s | 0.006860s | 0.007729s | byte equality observed |
| flat_set_test.test | 3 | 0.007511s | 0.006636s | 0.007483s | byte equality observed |
| flat_tree_test.test | 10 | 0.001221s | 0.001203s | 0.001212s | byte equality observed |
| global_resource_test.test | 10 | 0.001239s | 0.001236s | 0.001269s | byte equality observed |
| hub_api_test.test | 6 | 0.003404s | 0.002810s | 0.002780s | byte equality observed |
| hub_empty_sort_test.test | 10 | 0.001215s | 0.001191s | 0.001211s | byte equality observed |
| hub_exception_safety_test.test | 1 | 0.080284s | 0.075057s | 0.076685s | byte equality observed |
| hub_new_extended_alignment_test.test | 10 | 0.001283s | 0.001248s | 0.001275s | byte equality observed |
| hub_pocxx_test.test | 10 | 0.001248s | 0.001243s | 0.001262s | byte equality observed |
| hub_sort_test.test | 1 | 0.555167s | 0.561121s | 0.540828s | byte equality observed |
| hub_stability_test.test | 10 | 0.001525s | 0.001521s | 0.001576s | byte equality observed |
| hub_uses_allocator_test.test | 10 | 0.001233s | 0.001222s | 0.001246s | byte equality observed |
| insert_vs_emplace_test.test | 10 | 0.001265s | 0.001253s | 0.001259s | byte equality observed |
| is_constructible_test.test | 10 | 0.000570s | 0.000552s | 0.001201s | byte equality observed |
| list_test.test | 1 | 0.021933s | 0.022394s | 0.022338s | byte equality observed |
| map_test.test | 2 | 0.010009s | 0.009889s | 0.009874s | byte equality observed |
| memory_resource_test.test | 10 | 0.001234s | 0.001219s | 0.001241s | byte equality observed |
| monotonic_buffer_resource_test.test | 10 | 0.001247s | 0.001223s | 0.001272s | byte equality observed |
| nest_api_test.test | 9 | 0.002030s | 0.002042s | 0.002078s | byte equality observed |
| nest_test.test | 10 | 0.001272s | 0.001254s | 0.001275s | byte equality observed |
| new_delete_resource_test.test | 10 | 0.001819s | 0.001799s | 0.001817s | byte equality observed |
| node_allocator_test.test | 2 | 0.009143s | 0.008904s | 0.009106s | byte equality observed |
| node_handle_test.test | 10 | 0.001249s | 0.001235s | 0.001241s | byte equality observed |
| null_iterators_test.test | 10 | 0.001237s | 0.001204s | 0.001231s | byte equality observed |
| pair_test.test | 10 | 0.001226s | 0.001213s | 0.001224s | byte equality observed |
| pmr_deque_test.test | 10 | 0.001207s | 0.001176s | 0.001205s | byte equality observed |
| pmr_devector_test.test | 10 | 0.001215s | 0.001190s | 0.001214s | byte equality observed |
| pmr_flat_map_test.test | 10 | 0.001206s | 0.001174s | 0.001213s | byte equality observed |
| pmr_flat_set_test.test | 10 | 0.001209s | 0.001188s | 0.001205s | byte equality observed |
| pmr_hub_test.test | 10 | 0.001209s | 0.001186s | 0.001206s | byte equality observed |
| pmr_list_test.test | 10 | 0.001216s | 0.001186s | 0.001205s | byte equality observed |
| pmr_map_test.test | 10 | 0.001209s | 0.001183s | 0.001200s | byte equality observed |
| pmr_nest_test.test | 10 | 0.001211s | 0.001183s | 0.001201s | byte equality observed |
| pmr_set_test.test | 10 | 0.001203s | 0.001211s | 0.001200s | byte equality observed |
| pmr_slist_test.test | 10 | 0.001206s | 0.001186s | 0.001195s | byte equality observed |
| pmr_small_vector_test.test | 10 | 0.001210s | 0.001179s | 0.001232s | byte equality observed |
| pmr_stable_vector_test.test | 10 | 0.001230s | 0.001206s | 0.001223s | byte equality observed |
| pmr_string_test.test | 10 | 0.000580s | 0.000564s | 0.001283s | byte equality observed |
| pmr_vector_test.test | 10 | 0.000581s | 0.000557s | 0.001281s | byte equality observed |
| polymorphic_allocator_test.test | 10 | 0.001268s | 0.001231s | 0.001304s | byte equality observed |
| resource_adaptor_test.test | 10 | 0.001246s | 0.001212s | 0.001290s | byte equality observed |
| scoped_allocator_adaptor_test.test | 10 | 0.001255s | 0.001215s | 0.001270s | byte equality observed |
| scoped_allocator_usage_test.test | 10 | 0.001282s | 0.001235s | 0.001289s | byte equality observed |
| segtor_options_test.test | 10 | 0.001316s | 0.001286s | 0.001298s | byte equality observed |
| segtor_test.test | 1 | 0.487543s | 0.495516s | 0.485070s | byte equality observed |
| set_test.test | 2 | 0.014074s | 0.012440s | 0.014259s | byte equality observed |
| slist_test.test | 1 | 0.021575s | 0.021615s | 0.021600s | byte equality observed |
| small_vector_options_test.test | 10 | 0.001372s | 0.001330s | 0.001334s | byte equality observed |
| small_vector_test.test | 5 | 0.002687s | 0.002460s | 0.004555s | byte equality observed |
| stable_vector_test.test | 1 | 0.032451s | 0.032635s | 0.033883s | byte equality observed |
| static_vector_options_test.test | 10 | 0.001340s | 0.001277s | 0.001300s | byte equality observed |
| static_vector_test.test | 10 | 0.001681s | 0.001581s | 0.001627s | byte equality observed |
| string_options_test.test | 10 | 0.001292s | 0.001293s | 0.001285s | byte equality observed |
| string_test.test | 2 | 0.014144s | 0.015389s | 0.014792s | byte equality observed |
| string_view_compat_test.test | 10 | 0.001242s | 0.001229s | 0.001220s | byte equality observed |
| synchronized_pool_resource_test.test | 10 | 0.001299s | 0.001291s | 0.001282s | byte equality observed |
| throw_exception_test.test | 10 | 0.001218s | 0.001233s | 0.001224s | byte equality observed |
| tree_test.test | 10 | 0.001228s | 0.001214s | 0.001232s | byte equality observed |
| unsynchronized_pool_resource_test.test | 10 | 0.001303s | 0.001307s | 0.001288s | byte equality observed |
| uses_allocator_construction_test.test | 10 | 0.001208s | 0.001226s | 0.001212s | byte equality observed |
| uses_allocator_test.test | 10 | 0.000574s | 0.000575s | 0.001192s | byte equality observed |
| vector_options_test.test | 10 | 0.001417s | 0.001393s | 0.001409s | byte equality observed |
| vector_test.test | 3 | 0.004454s | 0.004381s | 0.006273s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/43701438216).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
