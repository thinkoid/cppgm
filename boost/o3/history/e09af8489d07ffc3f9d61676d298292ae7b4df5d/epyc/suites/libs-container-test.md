# libs/container/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| vector_test.test | RUN | 5.776023 | 25.013814 | 22.625965 | 0.004672 | 0.004465 | 0.006107 |
| vector_options_test.test | RUN | 0.284602 | 1.103148 | 0.897359 | 0.002014 | 0.001835 | 0.001942 |
| uses_allocator_test.test | RUN | 0.047731 | 0.095965 | 0.113338 | 0.000635 | 0.000708 | 0.001720 |
| uses_allocator_construction_test.test | RUN | 0.150191 | 0.335943 | 0.398806 | 0.001461 | 0.001723 | 0.001722 |
| unsynchronized_pool_resource_test.test | RUN | 0.184302 | 1.008046 | 0.500327 | 0.001631 | 0.001762 | 0.001800 |
| tree_test.test | RUN | 0.836431 | 3.881312 | 3.034654 | 0.001556 | 0.002965 | 0.001652 |
| throw_exception_test.test | RUN | 0.106435 | 0.206414 | 0.254679 | 0.001573 | 0.001588 | 0.001657 |
| synchronized_pool_resource_test.test | RUN | 0.188242 | 0.998649 | 0.511257 | 0.001860 | 0.001728 | 0.001760 |
| string_view_compat_test.test | RUN | 0.318882 | 2.084293 | 0.994622 | 0.001784 | 0.001629 | 0.001738 |
| string_test.test | RUN | 1.409051 | 7.894416 | 5.818681 | 0.012766 | 0.010841 | 0.012798 |
| string_options_test.test | RUN | 0.251545 | 1.642186 | 0.917445 | 0.001952 | 0.001420 | 0.001838 |
| static_vector_test.test | RUN | 1.440740 | 6.654331 | 6.057687 | 0.002386 | 0.002174 | 0.002220 |
| static_vector_options_test.test | RUN | 0.186251 | 0.492001 | 0.503041 | 0.001730 | 0.001817 | 0.001904 |
| stable_vector_test.test | RUN | 3.311160 | 13.761285 | 11.633619 | 0.024915 | 0.024334 | 0.026159 |
| small_vector_test.test | RUN | 2.222599 | 9.568159 | 8.389571 | 0.003181 | 0.002522 | 0.004286 |
| small_vector_options_test.test | RUN | 0.324149 | 1.113805 | 1.071589 | 0.001893 | 0.001767 | 0.001818 |
| slist_test.test | RUN | 2.051540 | 8.644966 | 7.500287 | 0.018848 | 0.019023 | 0.019681 |
| set_test.test | RUN | 3.188722 | 15.857679 | 13.260962 | 0.016720 | 0.010907 | 0.012588 |
| segtor_test.test | RUN | 4.039222 | 17.287457 | 15.211470 | 0.500610 | 0.438737 | 0.428092 |
| segtor_options_test.test | RUN | 0.216163 | 0.524439 | 0.629871 | 0.001992 | 0.001771 | 0.001830 |
| scoped_allocator_usage_test.test | RUN | 0.736866 | 2.551516 | 2.458185 | 0.002276 | 0.001601 | 0.001687 |
| scoped_allocator_adaptor_test.test | RUN | 0.311740 | 0.719978 | 1.052413 | 0.002718 | 0.001429 | 0.001690 |
| resource_adaptor_test.test | RUN | 0.170221 | 0.433470 | 0.441417 | 0.001924 | 0.001490 | 0.001641 |
| polymorphic_allocator_test.test | RUN | 0.146835 | 0.353716 | 0.381833 | 0.001788 | 0.001375 | 0.001729 |
| pmr_vector_test.test | RUN | 0.078808 | 0.126658 | 0.190624 | 0.000783 | 0.000755 | 0.001546 |
| pmr_string_test.test | RUN | 0.192208 | 0.270742 | 0.396925 | 0.000764 | 0.000680 | 0.001751 |
| pmr_stable_vector_test.test | RUN | 0.206467 | 0.441947 | 0.567654 | 0.001810 | 0.001514 | 0.001483 |
| pmr_small_vector_test.test | RUN | 0.095856 | 0.185689 | 0.241526 | 0.001658 | 0.001691 | 0.001376 |
| pmr_slist_test.test | RUN | 0.135103 | 0.630851 | 0.474758 | 0.001512 | 0.001639 | 0.001325 |
| pmr_set_test.test | RUN | 0.168283 | 0.290705 | 0.412877 | 0.001768 | 0.001674 | 0.001551 |
| pmr_nest_test.test | RUN | 0.113036 | 0.221629 | 0.265323 | 0.001610 | 0.001633 | 0.001652 |
| pmr_map_test.test | RUN | 0.147639 | 0.325560 | 0.415589 | 0.001526 | 0.001492 | 0.001630 |
| pmr_list_test.test | RUN | 0.103982 | 0.204293 | 0.258084 | 0.002145 | 0.001561 | 0.001641 |
| pmr_hub_test.test | RUN | 0.137172 | 0.268395 | 0.353659 | 0.001542 | 0.001503 | 0.001628 |
| pmr_flat_set_test.test | RUN | 0.109735 | 0.209683 | 0.272983 | 0.001466 | 0.001526 | 0.001813 |
| pmr_flat_map_test.test | RUN | 0.135760 | 0.248606 | 0.355728 | 0.001661 | 0.001567 | 0.001761 |
| pmr_devector_test.test | RUN | 0.084769 | 0.214697 | 0.233327 | 0.001531 | 0.001364 | 0.001600 |
| pmr_deque_test.test | RUN | 0.085877 | 0.188222 | 0.238977 | 0.001555 | 0.001691 | 0.001779 |
| pair_test.test | RUN | 0.225845 | 0.428514 | 0.584510 | 0.001633 | 0.001705 | 0.001710 |
| null_iterators_test.test | RUN | 0.339311 | 0.843806 | 0.973073 | 0.001660 | 0.001691 | 0.001713 |
| node_handle_test.test | RUN | 0.150088 | 0.993136 | 0.418713 | 0.001721 | 0.001691 | 0.001724 |
| node_allocator_test.test | RUN | 2.389060 | 10.704635 | 9.212050 | 0.008509 | 0.007980 | 0.008799 |
| new_delete_resource_test.test | RUN | 0.187036 | 0.617525 | 0.537548 | 0.002095 | 0.002370 | 0.002320 |
| nest_test.test | RUN | 0.461686 | 2.884201 | 1.957644 | 0.001500 | 0.001726 | 0.001718 |
| nest_api_test.test | RUN | 0.884400 | 5.564989 | 3.744380 | 0.002461 | 0.002453 | 0.002499 |
| monotonic_buffer_resource_test.test | RUN | 0.189040 | 1.138765 | 0.554866 | 0.001610 | 0.001624 | 0.001722 |
| memory_resource_test.test | RUN | 0.109385 | 0.317161 | 0.313187 | 0.001777 | 0.001640 | 0.001720 |
| map_test.test | RUN | 4.292415 | 18.375565 | 18.932327 | 0.009553 | 0.009079 | 0.009320 |
| list_test.test | RUN | 2.215945 | 9.368326 | 7.874055 | 0.019444 | 0.019206 | 0.020367 |
| is_constructible_test.test | RUN | 0.070995 | 0.119570 | 0.175916 | 0.000761 | 0.000729 | 0.001673 |
| insert_vs_emplace_test.test | RUN | 0.229310 | 0.695794 | 0.974861 | 0.001804 | 0.001713 | 0.001706 |
| hub_uses_allocator_test.test | RUN | 0.240288 | 0.650365 | 0.738175 | 0.001572 | 0.001666 | 0.001695 |
| hub_stability_test.test | RUN | 0.514167 | 2.936566 | 2.630836 | 0.001944 | 0.001861 | 0.001892 |
| hub_sort_test.test | RUN | 0.332683 | 1.354833 | 1.247456 | 0.482616 | 0.465039 | 0.460042 |
| hub_pocxx_test.test | RUN | 0.306309 | 1.508397 | 0.903639 | 0.001826 | 0.001703 | 0.001436 |
| hub_new_extended_alignment_test.test | RUN | 0.170610 | 0.488796 | 0.480190 | 0.001782 | 0.001660 | 0.001511 |
| hub_exception_safety_test.test | RUN | 0.621344 | 3.673503 | 2.627080 | 0.075981 | 0.072182 | 0.078760 |
| hub_empty_sort_test.test | RUN | 0.203016 | 0.421658 | 0.577451 | 0.001793 | 0.001724 | 0.001568 |
| hub_api_test.test | RUN | 2.089215 | 15.023890 | 8.566138 | 0.003752 | 0.003375 | 0.003300 |
| global_resource_test.test | RUN | 0.109697 | 0.294606 | 0.289226 | 0.001875 | 0.001632 | 0.001590 |
| flat_tree_test.test | RUN | 3.827073 | 23.664696 | 16.347729 | 0.001779 | 0.001652 | 0.001635 |
| flat_set_test.test | RUN | 4.808835 | 29.674079 | 21.060326 | 0.007749 | 0.006571 | 0.006844 |
| flat_set_adaptor_test.test | RUN | 3.527599 | 26.399008 | 16.313219 | 0.007541 | 0.006700 | 0.006870 |
| flat_map_test.test | RUN | 7.647841 | 44.561914 | 35.061023 | 0.008234 | 0.007635 | 0.007401 |
| flat_map_adaptor_test.test | RUN | 4.911288 | 31.987819 | 24.321213 | 0.007985 | 0.007038 | 0.007506 |
| explicit_inst_vector_test.test | RUN | 0.755647 | 4.588007 | 3.523996 | 0.001711 | 0.001719 | 0.001535 |
| explicit_inst_string_test.test | RUN | 1.007714 | 8.079161 | 5.140115 | 0.001790 | 0.001658 | 0.001744 |
| explicit_inst_static_vector_test.test | RUN | 0.099965 | 0.292155 | 0.348520 | 0.001710 | 0.001722 | 0.001524 |
| explicit_inst_stable_vector_test.test | RUN | 0.604452 | 2.902039 | 2.379443 | 0.001772 | 0.001715 | 0.001650 |
| explicit_inst_small_vector_test.test | RUN | 0.528385 | 2.569517 | 2.152296 | 0.001748 | 0.001628 | 0.001728 |
| explicit_inst_slist_test.test | RUN | 0.381083 | 2.303065 | 1.565741 | 0.001754 | 0.001613 | 0.001743 |
| explicit_inst_set_test.test | RUN | 0.554029 | 2.618685 | 1.911877 | 0.001728 | 0.001611 | 0.001719 |
| explicit_inst_map_test.test | RUN | 0.611415 | 2.762511 | 2.121767 | 0.001694 | 0.001686 | 0.001853 |
| explicit_inst_list_test.test | RUN | 0.133353 | 0.642355 | 0.524228 | 0.001476 | 0.001694 | 0.001644 |
| explicit_inst_flat_set_test.test | RUN | 3.091594 | 19.334225 | 12.702855 | 0.001555 | 0.001719 | 0.001682 |
| explicit_inst_flat_map_test.test | RUN | 3.371196 | 20.428440 | 14.226634 | 0.001705 | 0.001477 | 0.001652 |
| explicit_inst_devector_test.test | RUN | 0.421368 | 2.491692 | 1.705685 | 0.001680 | 0.001587 | 0.001695 |
| explicit_inst_deque_test.test | RUN | 0.447557 | 2.685818 | 1.878731 | 0.001691 | 0.001728 | 0.001624 |
| devector_test.test | RUN | 5.589850 | 33.675314 | 24.364311 | 0.003973 | 0.003303 | 0.004012 |
| devector_options_test.test | RUN | 0.275250 | 1.434666 | 0.947790 | 0.002192 | 0.001898 | 0.001892 |
| deque_test.test | RUN | 4.256513 | 17.381017 | 14.957317 | 0.463437 | 0.325645 | 0.340090 |
| deque_options_test.test | RUN | 0.223352 | 0.539287 | 0.683581 | 0.001856 | 0.001743 | 0.001839 |
| copy_move_algo_test.test | RUN | 0.201540 | 0.624764 | 0.588915 | 0.002008 | 0.001841 | 0.001581 |
| common_iterator_test.test | RUN | 0.016416 | 0.034469 | 0.040024 | 0.000632 | 0.000691 | 0.001412 |
| boost_iterator_comp_test.test | RUN | 0.295275 | 0.767633 | 0.892795 | 0.001576 | 0.001785 | 0.001616 |
| allocator_traits_test.test | RUN | 0.170642 | 0.340511 | 0.371949 | 0.001807 | 0.001662 | 0.001725 |
| alloc_full_test.test | RUN | 0.195976 | 0.734965 | 0.622323 | 0.003770 | 0.003666 | 0.004018 |
| alloc_basic_test.test | RUN | 0.163310 | 0.497093 | 0.482038 | 0.001887 | 0.001498 | 0.001706 |
| adaptive_pool_test.test | RUN | 2.384542 | 11.018266 | 6.275230 | 0.012055 | 0.007016 | 0.007954 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.916× | 0.926×, 0.907× | 1.024× |
| clang | 0.937× | 0.959×, 0.914× | 1.008× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1363 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43624536445).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| adaptive_pool_test.test | 3 | 0.007775s | 0.007321s | 0.007887s | byte equality observed |
| alloc_basic_test.test | 10 | 0.000951s | 0.000936s | 0.000916s | byte equality observed |
| alloc_full_test.test | 8 | 0.002607s | 0.002545s | 0.002682s | byte equality observed |
| allocator_traits_test.test | 10 | 0.000899s | 0.000886s | 0.000891s | byte equality observed |
| boost_iterator_comp_test.test | 10 | 0.000926s | 0.000905s | 0.000887s | byte equality observed |
| common_iterator_test.test | 10 | 0.000425s | 0.000413s | 0.000888s | byte equality observed |
| copy_move_algo_test.test | 10 | 0.001059s | 0.001008s | 0.000998s | byte equality observed |
| deque_options_test.test | 10 | 0.000983s | 0.000978s | 0.000922s | byte equality observed |
| deque_test.test | 1 | 0.395429s | 0.333332s | 0.334270s | byte equality observed |
| devector_options_test.test | 10 | 0.001040s | 0.000997s | 0.000985s | byte equality observed |
| devector_test.test | 6 | 0.002714s | 0.002827s | 0.003470s | byte equality observed |
| explicit_inst_deque_test.test | 10 | 0.000874s | 0.000873s | 0.000842s | byte equality observed |
| explicit_inst_devector_test.test | 10 | 0.000865s | 0.000872s | 0.000840s | byte equality observed |
| explicit_inst_flat_map_test.test | 10 | 0.000881s | 0.000876s | 0.000837s | byte equality observed |
| explicit_inst_flat_set_test.test | 10 | 0.000851s | 0.000866s | 0.000834s | byte equality observed |
| explicit_inst_list_test.test | 10 | 0.000840s | 0.000829s | 0.000837s | byte equality observed |
| explicit_inst_map_test.test | 10 | 0.000859s | 0.000853s | 0.000833s | byte equality observed |
| explicit_inst_set_test.test | 10 | 0.000851s | 0.000840s | 0.000817s | byte equality observed |
| explicit_inst_slist_test.test | 10 | 0.000854s | 0.000867s | 0.000843s | byte equality observed |
| explicit_inst_small_vector_test.test | 10 | 0.000851s | 0.000878s | 0.000849s | byte equality observed |
| explicit_inst_stable_vector_test.test | 10 | 0.000843s | 0.000853s | 0.000850s | byte equality observed |
| explicit_inst_static_vector_test.test | 10 | 0.000835s | 0.000846s | 0.000828s | byte equality observed |
| explicit_inst_string_test.test | 10 | 0.000856s | 0.000858s | 0.000839s | byte equality observed |
| explicit_inst_vector_test.test | 10 | 0.000846s | 0.000841s | 0.000832s | byte equality observed |
| flat_map_adaptor_test.test | 4 | 0.004910s | 0.004674s | 0.004694s | byte equality observed |
| flat_map_test.test | 4 | 0.005365s | 0.005034s | 0.004783s | byte equality observed |
| flat_set_adaptor_test.test | 5 | 0.004634s | 0.004184s | 0.004463s | byte equality observed |
| flat_set_test.test | 5 | 0.004673s | 0.004104s | 0.004456s | byte equality observed |
| flat_tree_test.test | 10 | 0.000876s | 0.000843s | 0.000866s | byte equality observed |
| global_resource_test.test | 10 | 0.000904s | 0.000874s | 0.000898s | byte equality observed |
| hub_api_test.test | 9 | 0.002220s | 0.001889s | 0.001916s | byte equality observed |
| hub_empty_sort_test.test | 10 | 0.000874s | 0.000852s | 0.000879s | byte equality observed |
| hub_exception_safety_test.test | 1 | 0.056603s | 0.057025s | 0.054570s | byte equality observed |
| hub_new_extended_alignment_test.test | 10 | 0.001025s | 0.000864s | 0.000896s | byte equality observed |
| hub_pocxx_test.test | 10 | 0.000949s | 0.000909s | 0.000915s | byte equality observed |
| hub_sort_test.test | 1 | 0.412119s | 0.413978s | 0.390996s | byte equality observed |
| hub_stability_test.test | 10 | 0.001091s | 0.001187s | 0.001139s | byte equality observed |
| hub_uses_allocator_test.test | 10 | 0.000876s | 0.000865s | 0.000878s | byte equality observed |
| insert_vs_emplace_test.test | 10 | 0.000918s | 0.000892s | 0.000887s | byte equality observed |
| is_constructible_test.test | 10 | 0.000398s | 0.000399s | 0.000845s | byte equality observed |
| list_test.test | 2 | 0.012844s | 0.012661s | 0.012831s | byte equality observed |
| map_test.test | 3 | 0.006372s | 0.006352s | 0.006141s | byte equality observed |
| memory_resource_test.test | 10 | 0.000911s | 0.000907s | 0.000869s | byte equality observed |
| monotonic_buffer_resource_test.test | 10 | 0.000900s | 0.000904s | 0.000874s | byte equality observed |
| nest_api_test.test | 10 | 0.001433s | 0.001443s | 0.001443s | byte equality observed |
| nest_test.test | 10 | 0.000938s | 0.000930s | 0.000916s | byte equality observed |
| new_delete_resource_test.test | 10 | 0.001330s | 0.001317s | 0.001273s | byte equality observed |
| node_allocator_test.test | 4 | 0.005912s | 0.005951s | 0.005700s | byte equality observed |
| node_handle_test.test | 10 | 0.000942s | 0.000949s | 0.000885s | byte equality observed |
| null_iterators_test.test | 10 | 0.000892s | 0.000886s | 0.000868s | byte equality observed |
| pair_test.test | 10 | 0.000891s | 0.000870s | 0.000859s | byte equality observed |
| pmr_deque_test.test | 10 | 0.000877s | 0.000886s | 0.000854s | byte equality observed |
| pmr_devector_test.test | 10 | 0.000873s | 0.000893s | 0.000850s | byte equality observed |
| pmr_flat_map_test.test | 10 | 0.000872s | 0.000884s | 0.000844s | byte equality observed |
| pmr_flat_set_test.test | 10 | 0.000872s | 0.000885s | 0.000838s | byte equality observed |
| pmr_hub_test.test | 10 | 0.000875s | 0.000879s | 0.000845s | byte equality observed |
| pmr_list_test.test | 10 | 0.000872s | 0.000888s | 0.000852s | byte equality observed |
| pmr_map_test.test | 10 | 0.000866s | 0.000878s | 0.000845s | byte equality observed |
| pmr_nest_test.test | 10 | 0.000882s | 0.000874s | 0.000858s | byte equality observed |
| pmr_set_test.test | 10 | 0.000877s | 0.000884s | 0.000840s | byte equality observed |
| pmr_slist_test.test | 10 | 0.000874s | 0.000882s | 0.000857s | byte equality observed |
| pmr_small_vector_test.test | 10 | 0.000875s | 0.000856s | 0.000839s | byte equality observed |
| pmr_stable_vector_test.test | 10 | 0.000891s | 0.000897s | 0.000835s | byte equality observed |
| pmr_string_test.test | 10 | 0.000420s | 0.000426s | 0.000860s | byte equality observed |
| pmr_vector_test.test | 10 | 0.000416s | 0.000416s | 0.000854s | byte equality observed |
| polymorphic_allocator_test.test | 10 | 0.000956s | 0.000944s | 0.000889s | byte equality observed |
| resource_adaptor_test.test | 10 | 0.000900s | 0.000922s | 0.000868s | byte equality observed |
| scoped_allocator_adaptor_test.test | 10 | 0.000926s | 0.000921s | 0.000898s | byte equality observed |
| scoped_allocator_usage_test.test | 10 | 0.000913s | 0.000919s | 0.000880s | byte equality observed |
| segtor_options_test.test | 10 | 0.000937s | 0.000918s | 0.000924s | byte equality observed |
| segtor_test.test | 1 | 0.298506s | 0.269423s | 0.268119s | byte equality observed |
| set_test.test | 2 | 0.008611s | 0.007731s | 0.008363s | byte equality observed |
| slist_test.test | 2 | 0.012707s | 0.013129s | 0.012775s | byte equality observed |
| small_vector_options_test.test | 10 | 0.001014s | 0.001027s | 0.000947s | byte equality observed |
| small_vector_test.test | 7 | 0.001685s | 0.001616s | 0.002726s | byte equality observed |
| stable_vector_test.test | 1 | 0.020891s | 0.021188s | 0.021615s | byte equality observed |
| static_vector_options_test.test | 8 | 0.000990s | 0.001075s | 0.000921s | byte equality observed |
| static_vector_test.test | 8 | 0.001187s | 0.001134s | 0.001146s | byte equality observed |
| string_options_test.test | 7 | 0.000946s | 0.000949s | 0.000919s | byte equality observed |
| string_test.test | 2 | 0.008174s | 0.008508s | 0.008615s | byte equality observed |
| string_view_compat_test.test | 10 | 0.000911s | 0.000959s | 0.000907s | byte equality observed |
| synchronized_pool_resource_test.test | 10 | 0.000955s | 0.000955s | 0.000939s | byte equality observed |
| throw_exception_test.test | 10 | 0.000863s | 0.000893s | 0.000867s | byte equality observed |
| tree_test.test | 10 | 0.000864s | 0.000896s | 0.000852s | byte equality observed |
| unsynchronized_pool_resource_test.test | 10 | 0.000931s | 0.000928s | 0.000897s | byte equality observed |
| uses_allocator_construction_test.test | 8 | 0.000847s | 0.000881s | 0.000871s | byte equality observed |
| uses_allocator_test.test | 10 | 0.000392s | 0.000408s | 0.000835s | byte equality observed |
| vector_options_test.test | 10 | 0.001003s | 0.001043s | 0.001007s | byte equality observed |
| vector_test.test | 4 | 0.002753s | 0.003013s | 0.003745s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43624536445).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
