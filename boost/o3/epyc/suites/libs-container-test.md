# libs/container/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| vector_test.test | RUN | 5.899012 | 26.676788 | 21.385960 | 0.004644 | 0.004592 | 0.005702 |
| vector_options_test.test | RUN | 0.270526 | 1.164676 | 0.855137 | 0.002002 | 0.002062 | 0.001732 |
| uses_allocator_test.test | RUN | 0.047752 | 0.096835 | 0.109915 | 0.000728 | 0.000750 | 0.001557 |
| uses_allocator_construction_test.test | RUN | 0.145933 | 0.355540 | 0.340045 | 0.001756 | 0.001751 | 0.001543 |
| unsynchronized_pool_resource_test.test | RUN | 0.184222 | 1.034816 | 0.503865 | 0.001917 | 0.001415 | 0.001490 |
| tree_test.test | RUN | 0.792227 | 4.016481 | 2.810855 | 0.001657 | 0.001633 | 0.001573 |
| throw_exception_test.test | RUN | 0.108730 | 0.227158 | 0.238588 | 0.001671 | 0.001455 | 0.001503 |
| synchronized_pool_resource_test.test | RUN | 0.190882 | 1.034584 | 0.479776 | 0.001732 | 0.001892 | 0.001729 |
| string_view_compat_test.test | RUN | 0.315673 | 2.110551 | 0.940406 | 0.001660 | 0.001808 | 0.001600 |
| string_test.test | RUN | 1.326662 | 8.281311 | 5.459400 | 0.012522 | 0.012245 | 0.012142 |
| string_options_test.test | RUN | 0.255548 | 1.720572 | 0.846411 | 0.001848 | 0.001824 | 0.001697 |
| static_vector_test.test | RUN | 1.490841 | 6.922245 | 5.765714 | 0.002376 | 0.002156 | 0.002029 |
| static_vector_options_test.test | RUN | 0.186978 | 0.474275 | 0.479620 | 0.001718 | 0.001780 | 0.001801 |
| stable_vector_test.test | RUN | 3.257162 | 14.890902 | 11.025993 | 0.025235 | 0.025344 | 0.025229 |
| small_vector_test.test | RUN | 2.180185 | 10.261413 | 8.012718 | 0.003055 | 0.002945 | 0.004315 |
| small_vector_options_test.test | RUN | 0.317424 | 1.208338 | 1.011235 | 0.001975 | 0.001885 | 0.001742 |
| slist_test.test | RUN | 2.037136 | 9.316376 | 6.958407 | 0.019428 | 0.018504 | 0.019662 |
| set_test.test | RUN | 3.175941 | 17.518525 | 12.663169 | 0.013268 | 0.011509 | 0.012055 |
| segtor_test.test | RUN | 3.990127 | 18.644094 | 14.341781 | 0.428765 | 0.443125 | 0.406000 |
| segtor_options_test.test | RUN | 0.209580 | 0.518427 | 0.590546 | 0.001836 | 0.001832 | 0.001732 |
| scoped_allocator_usage_test.test | RUN | 0.707278 | 2.765082 | 2.326809 | 0.001816 | 0.001638 | 0.001542 |
| scoped_allocator_adaptor_test.test | RUN | 0.313209 | 0.750940 | 1.039908 | 0.001808 | 0.001839 | 0.001543 |
| resource_adaptor_test.test | RUN | 0.170452 | 0.442664 | 0.433702 | 0.001645 | 0.001770 | 0.001602 |
| polymorphic_allocator_test.test | RUN | 0.137823 | 0.377289 | 0.383337 | 0.001433 | 0.001770 | 0.001649 |
| pmr_vector_test.test | RUN | 0.077138 | 0.136157 | 0.194752 | 0.000717 | 0.000748 | 0.001621 |
| pmr_string_test.test | RUN | 0.154297 | 0.294784 | 0.383065 | 0.000762 | 0.000708 | 0.001554 |
| pmr_stable_vector_test.test | RUN | 0.168769 | 0.472904 | 0.549827 | 0.001456 | 0.001694 | 0.001377 |
| pmr_small_vector_test.test | RUN | 0.091247 | 0.189084 | 0.234666 | 0.001620 | 0.001538 | 0.001622 |
| pmr_slist_test.test | RUN | 0.128006 | 0.667471 | 0.523627 | 0.001864 | 0.001764 | 0.001460 |
| pmr_set_test.test | RUN | 0.150046 | 0.323016 | 0.383991 | 0.001789 | 0.001634 | 0.001354 |
| pmr_nest_test.test | RUN | 0.118466 | 0.226497 | 0.252920 | 0.001557 | 0.001794 | 0.001712 |
| pmr_map_test.test | RUN | 0.154884 | 0.345183 | 0.377676 | 0.001676 | 0.001533 | 0.001556 |
| pmr_list_test.test | RUN | 0.102349 | 0.208363 | 0.249878 | 0.001626 | 0.001552 | 0.001560 |
| pmr_hub_test.test | RUN | 0.141914 | 0.282447 | 0.309256 | 0.001513 | 0.001396 | 0.001502 |
| pmr_flat_set_test.test | RUN | 0.109652 | 0.224341 | 0.272997 | 0.001712 | 0.001573 | 0.001608 |
| pmr_flat_map_test.test | RUN | 0.134658 | 0.253477 | 0.309089 | 0.001680 | 0.001460 | 0.001484 |
| pmr_devector_test.test | RUN | 0.085748 | 0.221453 | 0.257671 | 0.001443 | 0.001512 | 0.001615 |
| pmr_deque_test.test | RUN | 0.087499 | 0.179246 | 0.237234 | 0.001749 | 0.001872 | 0.001469 |
| pair_test.test | RUN | 0.225300 | 0.452190 | 0.540298 | 0.001716 | 0.001874 | 0.001589 |
| null_iterators_test.test | RUN | 0.349495 | 0.898260 | 0.852784 | 0.001608 | 0.001682 | 0.001620 |
| node_handle_test.test | RUN | 0.150827 | 1.063703 | 0.381236 | 0.001501 | 0.001821 | 0.001564 |
| node_allocator_test.test | RUN | 2.356060 | 11.380980 | 8.674669 | 0.007778 | 0.008355 | 0.008074 |
| new_delete_resource_test.test | RUN | 0.181262 | 0.657137 | 0.508944 | 0.002322 | 0.002317 | 0.002172 |
| nest_test.test | RUN | 0.438467 | 3.101016 | 1.836326 | 0.001755 | 0.001910 | 0.001601 |
| nest_api_test.test | RUN | 0.859266 | 5.812569 | 3.574086 | 0.002476 | 0.002384 | 0.002435 |
| monotonic_buffer_resource_test.test | RUN | 0.177707 | 1.178455 | 0.511617 | 0.001670 | 0.001815 | 0.001491 |
| memory_resource_test.test | RUN | 0.107128 | 0.343339 | 0.291914 | 0.001484 | 0.001801 | 0.001578 |
| map_test.test | RUN | 4.253576 | 20.098696 | 17.925293 | 0.010015 | 0.009277 | 0.009162 |
| list_test.test | RUN | 2.183086 | 10.290095 | 7.594762 | 0.020070 | 0.018376 | 0.018598 |
| is_constructible_test.test | RUN | 0.069879 | 0.115606 | 0.165711 | 0.000736 | 0.000785 | 0.001427 |
| insert_vs_emplace_test.test | RUN | 0.220152 | 0.811472 | 0.970823 | 0.001843 | 0.001892 | 0.001601 |
| hub_uses_allocator_test.test | RUN | 0.240995 | 0.697288 | 0.718432 | 0.001556 | 0.001764 | 0.001483 |
| hub_stability_test.test | RUN | 0.513670 | 3.304213 | 2.549575 | 0.001763 | 0.002226 | 0.001812 |
| hub_sort_test.test | RUN | 0.330073 | 1.445837 | 1.175393 | 0.465570 | 0.479609 | 0.435610 |
| hub_pocxx_test.test | RUN | 0.295995 | 1.644536 | 0.865684 | 0.003757 | 0.001634 | 0.001632 |
| hub_new_extended_alignment_test.test | RUN | 0.204030 | 0.523578 | 0.450166 | 0.001827 | 0.001902 | 0.001544 |
| hub_exception_safety_test.test | RUN | 0.649072 | 4.112624 | 2.501680 | 0.077121 | 0.078996 | 0.066642 |
| hub_empty_sort_test.test | RUN | 0.188640 | 0.472687 | 0.530717 | 0.001872 | 0.001888 | 0.001508 |
| hub_api_test.test | RUN | 2.129169 | 17.204678 | 8.019437 | 0.003588 | 0.003496 | 0.002964 |
| global_resource_test.test | RUN | 0.108527 | 0.316578 | 0.276856 | 0.001943 | 0.001884 | 0.003058 |
| flat_tree_test.test | RUN | 3.759761 | 25.394359 | 15.405116 | 0.001668 | 0.001772 | 0.001626 |
| flat_set_test.test | RUN | 4.769572 | 31.663895 | 20.052275 | 0.007699 | 0.006755 | 0.006939 |
| flat_set_adaptor_test.test | RUN | 3.569030 | 27.718895 | 15.641638 | 0.007218 | 0.006858 | 0.006732 |
| flat_map_test.test | RUN | 7.716692 | 47.312821 | 33.057941 | 0.008489 | 0.007660 | 0.007108 |
| flat_map_adaptor_test.test | RUN | 4.900517 | 33.978174 | 23.145002 | 0.008232 | 0.007014 | 0.006818 |
| explicit_inst_vector_test.test | RUN | 0.798172 | 4.761515 | 3.516585 | 0.001694 | 0.001839 | 0.001599 |
| explicit_inst_string_test.test | RUN | 0.974395 | 8.320817 | 4.721981 | 0.001714 | 0.001814 | 0.001468 |
| explicit_inst_static_vector_test.test | RUN | 0.098684 | 0.302672 | 0.327306 | 0.001718 | 0.001736 | 0.001576 |
| explicit_inst_stable_vector_test.test | RUN | 0.602298 | 3.011407 | 2.195716 | 0.001678 | 0.001760 | 0.001316 |
| explicit_inst_small_vector_test.test | RUN | 0.518405 | 2.657810 | 1.986600 | 0.001682 | 0.001739 | 0.001564 |
| explicit_inst_slist_test.test | RUN | 0.388689 | 2.469391 | 1.480054 | 0.001807 | 0.001820 | 0.001564 |
| explicit_inst_set_test.test | RUN | 0.552020 | 2.855415 | 1.772127 | 0.001779 | 0.001832 | 0.001610 |
| explicit_inst_map_test.test | RUN | 0.615892 | 3.011579 | 1.988184 | 0.001791 | 0.001858 | 0.001545 |
| explicit_inst_list_test.test | RUN | 0.132746 | 0.681205 | 0.514179 | 0.001735 | 0.001815 | 0.001532 |
| explicit_inst_flat_set_test.test | RUN | 3.214557 | 20.635150 | 12.314750 | 0.001862 | 0.001717 | 0.001618 |
| explicit_inst_flat_map_test.test | RUN | 3.439761 | 21.728796 | 13.762336 | 0.001593 | 0.001864 | 0.001543 |
| explicit_inst_devector_test.test | RUN | 0.398384 | 2.564545 | 1.675719 | 0.001578 | 0.001768 | 0.001620 |
| explicit_inst_deque_test.test | RUN | 0.426711 | 2.772354 | 1.775619 | 0.001777 | 0.001712 | 0.001539 |
| devector_test.test | RUN | 5.562507 | 32.967908 | 24.433585 | 0.004845 | 0.003075 | 0.003873 |
| devector_options_test.test | RUN | 0.272304 | 1.539673 | 0.922416 | 0.002034 | 0.002012 | 0.001789 |
| deque_test.test | RUN | 4.331577 | 19.148750 | 12.643456 | 0.313667 | 0.322364 | 0.371091 |
| deque_options_test.test | RUN | 0.210779 | 0.556035 | 0.632225 | 0.001891 | 0.001847 | 0.001688 |
| copy_move_algo_test.test | RUN | 0.203032 | 0.621432 | 0.486158 | 0.002020 | 0.001497 | 0.001451 |
| common_iterator_test.test | RUN | 0.016654 | 0.035406 | 0.035197 | 0.000764 | 0.000615 | 0.001441 |
| boost_iterator_comp_test.test | RUN | 0.287312 | 0.757825 | 0.804823 | 0.001842 | 0.001630 | 0.001610 |
| allocator_traits_test.test | RUN | 0.169860 | 0.338192 | 0.417895 | 0.001648 | 0.001617 | 0.001596 |
| alloc_full_test.test | RUN | 0.189947 | 0.715980 | 0.616154 | 0.004061 | 0.003807 | 0.003580 |
| alloc_basic_test.test | RUN | 0.154747 | 0.502483 | 0.452240 | 0.001717 | 0.001679 | 0.001392 |
| adaptive_pool_test.test | RUN | 2.360094 | 8.320128 | 8.710547 | 0.007834 | 0.007086 | 0.011346 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 1.033× | 1.032×, 1.034× | 0.988× |
| clang | 1.018× | 1.035×, 1.001× | 0.991× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1364 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43639138948).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| adaptive_pool_test.test | 3 | 0.007633s | 0.006944s | 0.007820s | byte equality observed |
| alloc_basic_test.test | 10 | 0.000979s | 0.000922s | 0.000952s | byte equality observed |
| alloc_full_test.test | 8 | 0.002621s | 0.002528s | 0.002705s | byte equality observed |
| allocator_traits_test.test | 10 | 0.000885s | 0.000862s | 0.000882s | byte equality observed |
| boost_iterator_comp_test.test | 10 | 0.000906s | 0.000884s | 0.000875s | byte equality observed |
| common_iterator_test.test | 10 | 0.000404s | 0.000404s | 0.000871s | byte equality observed |
| copy_move_algo_test.test | 10 | 0.001065s | 0.000967s | 0.000983s | byte equality observed |
| deque_options_test.test | 10 | 0.000954s | 0.000917s | 0.000949s | byte equality observed |
| deque_test.test | 1 | 0.305537s | 0.339345s | 0.343855s | byte equality observed |
| devector_options_test.test | 10 | 0.001002s | 0.000975s | 0.000999s | byte equality observed |
| devector_test.test | 6 | 0.002662s | 0.002705s | 0.003439s | byte equality observed |
| explicit_inst_deque_test.test | 10 | 0.000844s | 0.000849s | 0.000847s | byte equality observed |
| explicit_inst_devector_test.test | 10 | 0.000831s | 0.000834s | 0.000837s | byte equality observed |
| explicit_inst_flat_map_test.test | 10 | 0.000834s | 0.000833s | 0.000852s | byte equality observed |
| explicit_inst_flat_set_test.test | 10 | 0.000855s | 0.000826s | 0.000843s | byte equality observed |
| explicit_inst_list_test.test | 10 | 0.000835s | 0.000823s | 0.000840s | byte equality observed |
| explicit_inst_map_test.test | 10 | 0.000843s | 0.000823s | 0.000847s | byte equality observed |
| explicit_inst_set_test.test | 10 | 0.000857s | 0.000816s | 0.000844s | byte equality observed |
| explicit_inst_slist_test.test | 10 | 0.000839s | 0.000843s | 0.000879s | byte equality observed |
| explicit_inst_small_vector_test.test | 10 | 0.000841s | 0.000864s | 0.000855s | byte equality observed |
| explicit_inst_stable_vector_test.test | 10 | 0.000850s | 0.000841s | 0.000846s | byte equality observed |
| explicit_inst_static_vector_test.test | 10 | 0.000841s | 0.000828s | 0.000835s | byte equality observed |
| explicit_inst_string_test.test | 10 | 0.000847s | 0.000830s | 0.000830s | byte equality observed |
| explicit_inst_vector_test.test | 10 | 0.000841s | 0.000825s | 0.000832s | byte equality observed |
| flat_map_adaptor_test.test | 3 | 0.004882s | 0.004551s | 0.004710s | byte equality observed |
| flat_map_test.test | 3 | 0.005276s | 0.004859s | 0.004714s | byte equality observed |
| flat_set_adaptor_test.test | 4 | 0.004611s | 0.004197s | 0.004334s | byte equality observed |
| flat_set_test.test | 5 | 0.004632s | 0.004144s | 0.004260s | byte equality observed |
| flat_tree_test.test | 10 | 0.000857s | 0.000860s | 0.000824s | byte equality observed |
| global_resource_test.test | 7 | 0.000888s | 0.000876s | 0.000873s | byte equality observed |
| hub_api_test.test | 5 | 0.002213s | 0.001903s | 0.001855s | byte equality observed |
| hub_empty_sort_test.test | 8 | 0.000872s | 0.000852s | 0.000878s | byte equality observed |
| hub_exception_safety_test.test | 1 | 0.056868s | 0.052468s | 0.052682s | byte equality observed |
| hub_new_extended_alignment_test.test | 10 | 0.000945s | 0.000929s | 0.000979s | byte equality observed |
| hub_pocxx_test.test | 10 | 0.000941s | 0.000933s | 0.000916s | byte equality observed |
| hub_sort_test.test | 1 | 0.410475s | 0.414173s | 0.395442s | byte equality observed |
| hub_stability_test.test | 10 | 0.001178s | 0.001064s | 0.001040s | byte equality observed |
| hub_uses_allocator_test.test | 10 | 0.000888s | 0.000858s | 0.000863s | byte equality observed |
| insert_vs_emplace_test.test | 10 | 0.000909s | 0.000897s | 0.000890s | byte equality observed |
| is_constructible_test.test | 10 | 0.000409s | 0.000385s | 0.000851s | byte equality observed |
| list_test.test | 2 | 0.012978s | 0.012666s | 0.012831s | byte equality observed |
| map_test.test | 3 | 0.006485s | 0.006184s | 0.006151s | byte equality observed |
| memory_resource_test.test | 10 | 0.000909s | 0.000865s | 0.000870s | byte equality observed |
| monotonic_buffer_resource_test.test | 10 | 0.000898s | 0.000872s | 0.000873s | byte equality observed |
| nest_api_test.test | 10 | 0.001431s | 0.001397s | 0.001432s | byte equality observed |
| nest_test.test | 10 | 0.000901s | 0.000887s | 0.000913s | byte equality observed |
| new_delete_resource_test.test | 10 | 0.001299s | 0.001260s | 0.001278s | byte equality observed |
| node_allocator_test.test | 4 | 0.005797s | 0.005520s | 0.005698s | byte equality observed |
| node_handle_test.test | 10 | 0.000895s | 0.000851s | 0.000868s | byte equality observed |
| null_iterators_test.test | 10 | 0.000862s | 0.000837s | 0.000853s | byte equality observed |
| pair_test.test | 10 | 0.000853s | 0.000832s | 0.000841s | byte equality observed |
| pmr_deque_test.test | 10 | 0.000844s | 0.000814s | 0.000838s | byte equality observed |
| pmr_devector_test.test | 10 | 0.000851s | 0.000815s | 0.000860s | byte equality observed |
| pmr_flat_map_test.test | 10 | 0.000880s | 0.000806s | 0.000858s | byte equality observed |
| pmr_flat_set_test.test | 10 | 0.000870s | 0.000823s | 0.000868s | byte equality observed |
| pmr_hub_test.test | 10 | 0.000863s | 0.000844s | 0.000847s | byte equality observed |
| pmr_list_test.test | 10 | 0.000860s | 0.000852s | 0.000842s | byte equality observed |
| pmr_map_test.test | 10 | 0.000884s | 0.000856s | 0.000859s | byte equality observed |
| pmr_nest_test.test | 10 | 0.000874s | 0.000840s | 0.000857s | byte equality observed |
| pmr_set_test.test | 10 | 0.000874s | 0.000844s | 0.000847s | byte equality observed |
| pmr_slist_test.test | 10 | 0.000882s | 0.000836s | 0.000838s | byte equality observed |
| pmr_small_vector_test.test | 10 | 0.000890s | 0.000846s | 0.000850s | byte equality observed |
| pmr_stable_vector_test.test | 10 | 0.000887s | 0.000842s | 0.000857s | byte equality observed |
| pmr_string_test.test | 10 | 0.000419s | 0.000395s | 0.000869s | byte equality observed |
| pmr_vector_test.test | 10 | 0.000414s | 0.000400s | 0.000865s | byte equality observed |
| polymorphic_allocator_test.test | 10 | 0.000932s | 0.000914s | 0.000883s | byte equality observed |
| resource_adaptor_test.test | 10 | 0.000922s | 0.000894s | 0.000908s | byte equality observed |
| scoped_allocator_adaptor_test.test | 10 | 0.000920s | 0.000894s | 0.000893s | byte equality observed |
| scoped_allocator_usage_test.test | 10 | 0.000921s | 0.000876s | 0.000874s | byte equality observed |
| segtor_options_test.test | 10 | 0.000937s | 0.000936s | 0.000902s | byte equality observed |
| segtor_test.test | 1 | 0.258426s | 0.271980s | 0.261871s | byte equality observed |
| set_test.test | 3 | 0.009072s | 0.007563s | 0.008262s | byte equality observed |
| slist_test.test | 2 | 0.012833s | 0.012380s | 0.012736s | byte equality observed |
| small_vector_options_test.test | 10 | 0.000982s | 0.000928s | 0.000976s | byte equality observed |
| small_vector_test.test | 8 | 0.001677s | 0.001566s | 0.002654s | byte equality observed |
| stable_vector_test.test | 1 | 0.020604s | 0.020788s | 0.021140s | byte equality observed |
| static_vector_options_test.test | 10 | 0.000993s | 0.000881s | 0.000895s | byte equality observed |
| static_vector_test.test | 10 | 0.001184s | 0.001082s | 0.001119s | byte equality observed |
| string_options_test.test | 10 | 0.000918s | 0.000923s | 0.000880s | byte equality observed |
| string_test.test | 3 | 0.008074s | 0.008459s | 0.008142s | byte equality observed |
| string_view_compat_test.test | 10 | 0.000913s | 0.000890s | 0.000834s | byte equality observed |
| synchronized_pool_resource_test.test | 10 | 0.000936s | 0.000937s | 0.000870s | byte equality observed |
| throw_exception_test.test | 10 | 0.000875s | 0.000860s | 0.000819s | byte equality observed |
| tree_test.test | 10 | 0.000882s | 0.000854s | 0.000830s | byte equality observed |
| unsynchronized_pool_resource_test.test | 10 | 0.000948s | 0.000913s | 0.000886s | byte equality observed |
| uses_allocator_construction_test.test | 10 | 0.000889s | 0.000854s | 0.000861s | byte equality observed |
| uses_allocator_test.test | 10 | 0.000419s | 0.000395s | 0.000876s | byte equality observed |
| vector_options_test.test | 10 | 0.001035s | 0.000996s | 0.001014s | byte equality observed |
| vector_test.test | 5 | 0.002930s | 0.003041s | 0.003852s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43639138948).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
