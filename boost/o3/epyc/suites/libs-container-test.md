# libs/container/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| vector_test.test | RUN | 9.068085 | 43.313807 | 39.696900 | 0.007168 | 0.006482 | 0.009870 |
| vector_options_test.test | RUN | 0.438232 | 1.882783 | 1.854844 | 0.002333 | 0.002388 | 0.002658 |
| uses_allocator_test.test | RUN | 0.081133 | 0.172071 | 0.253511 | 0.000850 | 0.000956 | 0.002100 |
| uses_allocator_construction_test.test | RUN | 0.244378 | 0.644171 | 0.841214 | 0.002042 | 0.002180 | 0.002124 |
| unsynchronized_pool_resource_test.test | RUN | 0.304420 | 1.752703 | 1.092257 | 0.001879 | 0.002296 | 0.002311 |
| tree_test.test | RUN | 1.291273 | 6.511781 | 5.807364 | 0.001825 | 0.002122 | 0.001934 |
| throw_exception_test.test | RUN | 0.161024 | 0.412498 | 0.608776 | 0.001876 | 0.002225 | 0.002224 |
| synchronized_pool_resource_test.test | RUN | 0.286330 | 1.881576 | 1.148688 | 0.002136 | 0.002301 | 0.002242 |
| string_view_compat_test.test | RUN | 0.485151 | 3.736195 | 2.257989 | 0.001820 | 0.002272 | 0.002132 |
| string_test.test | RUN | 2.101385 | 14.077310 | 10.957330 | 0.023596 | 0.021843 | 0.022972 |
| string_options_test.test | RUN | 0.396789 | 2.892707 | 1.682519 | 0.002055 | 0.002113 | 0.002280 |
| static_vector_test.test | RUN | 2.319206 | 11.465218 | 10.885318 | 0.002812 | 0.002875 | 0.002991 |
| static_vector_options_test.test | RUN | 0.282876 | 0.817417 | 1.091505 | 0.001967 | 0.001984 | 0.002238 |
| stable_vector_test.test | RUN | 5.068177 | 23.359809 | 19.979186 | 0.036939 | 0.037171 | 0.039189 |
| small_vector_test.test | RUN | 3.454355 | 16.645295 | 14.538041 | 0.004523 | 0.004154 | 0.007321 |
| small_vector_options_test.test | RUN | 0.503702 | 2.082008 | 2.083644 | 0.002256 | 0.002404 | 0.002327 |
| slist_test.test | RUN | 3.196776 | 15.087057 | 13.102954 | 0.033293 | 0.034069 | 0.033741 |
| set_test.test | RUN | 4.832608 | 27.895174 | 23.834485 | 0.020299 | 0.018380 | 0.019261 |
| segtor_test.test | RUN | 6.166797 | 30.135370 | 26.405127 | 0.886233 | 0.911886 | 0.900513 |
| segtor_options_test.test | RUN | 0.326174 | 0.969851 | 1.244867 | 0.002232 | 0.002195 | 0.002260 |
| scoped_allocator_usage_test.test | RUN | 1.079839 | 4.654905 | 4.614379 | 0.002030 | 0.002190 | 0.002099 |
| scoped_allocator_adaptor_test.test | RUN | 0.501777 | 1.272053 | 2.217953 | 0.002180 | 0.002219 | 0.002114 |
| resource_adaptor_test.test | RUN | 0.263651 | 0.809575 | 1.019850 | 0.002018 | 0.001942 | 0.002132 |
| polymorphic_allocator_test.test | RUN | 0.212469 | 0.653969 | 0.833283 | 0.001936 | 0.001856 | 0.002126 |
| pmr_vector_test.test | RUN | 0.126823 | 0.239243 | 0.446997 | 0.000889 | 0.000891 | 0.001902 |
| pmr_string_test.test | RUN | 0.247203 | 0.516427 | 0.854571 | 0.000872 | 0.000856 | 0.001868 |
| pmr_stable_vector_test.test | RUN | 0.265927 | 0.807826 | 1.053980 | 0.001714 | 0.002201 | 0.002118 |
| pmr_small_vector_test.test | RUN | 0.149433 | 0.353842 | 0.544200 | 0.001732 | 0.001962 | 0.001926 |
| pmr_slist_test.test | RUN | 0.207710 | 1.078827 | 1.058588 | 0.001858 | 0.002189 | 0.002056 |
| pmr_set_test.test | RUN | 0.234818 | 0.588672 | 0.732061 | 0.001852 | 0.002180 | 0.001978 |
| pmr_nest_test.test | RUN | 0.186258 | 0.414358 | 0.592958 | 0.001526 | 0.002144 | 0.001837 |
| pmr_map_test.test | RUN | 0.240795 | 0.548165 | 0.878248 | 0.001850 | 0.002222 | 0.002066 |
| pmr_list_test.test | RUN | 0.158684 | 0.380647 | 0.610494 | 0.001852 | 0.002254 | 0.002144 |
| pmr_hub_test.test | RUN | 0.221188 | 0.531598 | 0.673188 | 0.001764 | 0.002135 | 0.001950 |
| pmr_flat_set_test.test | RUN | 0.180428 | 0.398628 | 0.658773 | 0.001875 | 0.002176 | 0.002090 |
| pmr_flat_map_test.test | RUN | 0.216348 | 0.450287 | 0.653782 | 0.001895 | 0.002174 | 0.002058 |
| pmr_devector_test.test | RUN | 0.132648 | 0.407477 | 0.571993 | 0.001768 | 0.002208 | 0.001871 |
| pmr_deque_test.test | RUN | 0.140782 | 0.338128 | 0.470357 | 0.001944 | 0.002014 | 0.001757 |
| pair_test.test | RUN | 0.353111 | 0.809529 | 1.196691 | 0.002159 | 0.002330 | 0.002087 |
| null_iterators_test.test | RUN | 0.531929 | 1.515936 | 1.950876 | 0.002104 | 0.002174 | 0.001942 |
| node_handle_test.test | RUN | 0.234479 | 1.891778 | 0.789625 | 0.001611 | 0.002222 | 0.002053 |
| node_allocator_test.test | RUN | 3.632108 | 18.370899 | 16.541160 | 0.013356 | 0.012900 | 0.013614 |
| new_delete_resource_test.test | RUN | 0.293263 | 1.147672 | 1.081728 | 0.002868 | 0.003199 | 0.002858 |
| nest_test.test | RUN | 0.727606 | 5.126519 | 3.717208 | 0.002188 | 0.002288 | 0.002082 |
| nest_api_test.test | RUN | 1.334228 | 9.722858 | 6.768626 | 0.003277 | 0.003425 | 0.003264 |
| monotonic_buffer_resource_test.test | RUN | 0.288048 | 2.025773 | 1.114680 | 0.001917 | 0.002332 | 0.001975 |
| memory_resource_test.test | RUN | 0.176762 | 0.579075 | 0.669550 | 0.002100 | 0.001928 | 0.001915 |
| map_test.test | RUN | 6.663094 | 31.024346 | 34.051468 | 0.014886 | 0.014338 | 0.014257 |
| list_test.test | RUN | 3.390631 | 15.811872 | 14.046769 | 0.033515 | 0.034187 | 0.033236 |
| is_constructible_test.test | RUN | 0.117141 | 0.209622 | 0.387580 | 0.000859 | 0.000716 | 0.002028 |
| insert_vs_emplace_test.test | RUN | 0.382637 | 1.350492 | 2.012881 | 0.002032 | 0.002116 | 0.002151 |
| hub_uses_allocator_test.test | RUN | 0.382012 | 1.147769 | 1.487271 | 0.002022 | 0.001732 | 0.001896 |
| hub_stability_test.test | RUN | 0.787076 | 5.194154 | 4.802746 | 0.002446 | 0.002426 | 0.002617 |
| hub_sort_test.test | RUN | 0.504016 | 2.381337 | 2.307930 | 0.633283 | 0.648291 | 0.622100 |
| hub_pocxx_test.test | RUN | 0.498427 | 2.757170 | 1.654423 | 0.002006 | 0.002319 | 0.002088 |
| hub_new_extended_alignment_test.test | RUN | 0.278494 | 0.853054 | 1.008537 | 0.001893 | 0.002256 | 0.001933 |
| hub_exception_safety_test.test | RUN | 0.922462 | 6.444668 | 4.614707 | 0.109052 | 0.114829 | 0.115169 |
| hub_empty_sort_test.test | RUN | 0.304538 | 0.776529 | 1.197729 | 0.002039 | 0.002226 | 0.002052 |
| hub_api_test.test | RUN | 3.092995 | 26.013941 | 15.524086 | 0.004825 | 0.004618 | 0.004520 |
| global_resource_test.test | RUN | 0.183690 | 0.544397 | 0.633187 | 0.001890 | 0.002255 | 0.002166 |
| flat_tree_test.test | RUN | 5.782172 | 38.444116 | 27.429801 | 0.002043 | 0.002040 | 0.002062 |
| flat_set_test.test | RUN | 7.366282 | 49.600614 | 36.282251 | 0.010847 | 0.009626 | 0.010784 |
| flat_set_adaptor_test.test | RUN | 5.523972 | 44.166515 | 29.480213 | 0.011096 | 0.010440 | 0.010967 |
| flat_map_test.test | RUN | 11.953439 | 73.835147 | 58.997883 | 0.011690 | 0.011564 | 0.011073 |
| flat_map_adaptor_test.test | RUN | 7.568514 | 54.154120 | 42.658044 | 0.011079 | 0.010763 | 0.010507 |
| explicit_inst_vector_test.test | RUN | 1.159734 | 7.362298 | 6.359465 | 0.001934 | 0.002120 | 0.002042 |
| explicit_inst_string_test.test | RUN | 1.503656 | 12.861937 | 8.891275 | 0.002192 | 0.002086 | 0.002130 |
| explicit_inst_static_vector_test.test | RUN | 0.163554 | 0.498227 | 0.696843 | 0.001802 | 0.002182 | 0.002024 |
| explicit_inst_stable_vector_test.test | RUN | 0.972064 | 4.664164 | 4.332262 | 0.001798 | 0.001957 | 0.002144 |
| explicit_inst_small_vector_test.test | RUN | 0.825791 | 4.259027 | 3.753532 | 0.001741 | 0.002266 | 0.002077 |
| explicit_inst_slist_test.test | RUN | 0.619708 | 3.838100 | 3.054547 | 0.002004 | 0.002196 | 0.001977 |
| explicit_inst_set_test.test | RUN | 0.869695 | 4.470597 | 3.573920 | 0.002042 | 0.002089 | 0.002028 |
| explicit_inst_map_test.test | RUN | 0.945216 | 4.705442 | 3.845531 | 0.001980 | 0.002026 | 0.001500 |
| explicit_inst_list_test.test | RUN | 0.222264 | 1.052181 | 0.976247 | 0.001973 | 0.002124 | 0.001881 |
| explicit_inst_flat_set_test.test | RUN | 4.875324 | 33.694187 | 22.034836 | 0.002036 | 0.002022 | 0.002170 |
| explicit_inst_flat_map_test.test | RUN | 5.248224 | 34.637775 | 24.118278 | 0.001912 | 0.002129 | 0.001898 |
| explicit_inst_devector_test.test | RUN | 0.637886 | 4.212039 | 3.187435 | 0.001922 | 0.001999 | 0.002012 |
| explicit_inst_deque_test.test | RUN | 0.679469 | 4.546976 | 3.425886 | 0.002000 | 0.002092 | 0.001973 |
| devector_test.test | RUN | 9.016430 | 50.129326 | 42.834158 | 0.004308 | 0.004380 | 0.005443 |
| devector_options_test.test | RUN | 0.411888 | 2.613505 | 1.832109 | 0.002374 | 0.002411 | 0.002348 |
| deque_test.test | RUN | 6.604466 | 34.121003 | 22.817398 | 0.426152 | 0.447186 | 0.539896 |
| deque_options_test.test | RUN | 0.326817 | 0.932190 | 1.426091 | 0.002108 | 0.002246 | 0.002295 |
| copy_move_algo_test.test | RUN | 0.311588 | 1.253245 | 1.340051 | 0.002280 | 0.002488 | 0.002312 |
| common_iterator_test.test | RUN | 0.024225 | 0.063517 | 0.055695 | 0.000856 | 0.000989 | 0.001900 |
| boost_iterator_comp_test.test | RUN | 0.450267 | 1.399007 | 1.722871 | 0.001899 | 0.002270 | 0.002088 |
| allocator_traits_test.test | RUN | 0.260032 | 0.657766 | 0.869791 | 0.001681 | 0.001821 | 0.001900 |
| alloc_full_test.test | RUN | 0.292262 | 1.287627 | 1.267262 | 0.005877 | 0.006024 | 0.006423 |
| alloc_basic_test.test | RUN | 0.236414 | 0.942836 | 0.991629 | 0.002214 | 0.002162 | 0.002298 |
| adaptive_pool_test.test | RUN | 2.746171 | 19.238112 | 15.726049 | 0.012844 | 0.016920 | 0.012701 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.994× | 0.999×, 0.990× | 0.989× |
| clang | 1.046× | 1.053×, 1.038× | 1.005× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1361 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43664060660).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| adaptive_pool_test.test | 2 | 0.013129s | 0.012086s | 0.013294s | byte equality observed |
| alloc_basic_test.test | 10 | 0.001291s | 0.001271s | 0.001288s | byte equality observed |
| alloc_full_test.test | 6 | 0.003858s | 0.003762s | 0.003968s | byte equality observed |
| allocator_traits_test.test | 10 | 0.001196s | 0.001187s | 0.001193s | byte equality observed |
| boost_iterator_comp_test.test | 10 | 0.001264s | 0.001268s | 0.001238s | byte equality observed |
| common_iterator_test.test | 10 | 0.000582s | 0.000564s | 0.001291s | byte equality observed |
| copy_move_algo_test.test | 10 | 0.001439s | 0.001395s | 0.001404s | byte equality observed |
| deque_options_test.test | 10 | 0.001370s | 0.001350s | 0.001361s | byte equality observed |
| deque_test.test | 1 | 0.486270s | 0.478849s | 0.590558s | byte equality observed |
| devector_options_test.test | 9 | 0.001443s | 0.001321s | 0.001313s | byte equality observed |
| devector_test.test | 4 | 0.003702s | 0.003825s | 0.004875s | byte equality observed |
| explicit_inst_deque_test.test | 10 | 0.001147s | 0.001140s | 0.001129s | byte equality observed |
| explicit_inst_devector_test.test | 10 | 0.001134s | 0.001134s | 0.001131s | byte equality observed |
| explicit_inst_flat_map_test.test | 10 | 0.001145s | 0.001148s | 0.001122s | byte equality observed |
| explicit_inst_flat_set_test.test | 10 | 0.001145s | 0.001145s | 0.001120s | byte equality observed |
| explicit_inst_list_test.test | 10 | 0.001136s | 0.001139s | 0.001112s | byte equality observed |
| explicit_inst_map_test.test | 10 | 0.001150s | 0.001145s | 0.001126s | byte equality observed |
| explicit_inst_set_test.test | 10 | 0.001132s | 0.001146s | 0.001121s | byte equality observed |
| explicit_inst_slist_test.test | 10 | 0.001132s | 0.001139s | 0.001125s | byte equality observed |
| explicit_inst_small_vector_test.test | 9 | 0.001134s | 0.001155s | 0.001138s | byte equality observed |
| explicit_inst_stable_vector_test.test | 10 | 0.001139s | 0.001154s | 0.001137s | byte equality observed |
| explicit_inst_static_vector_test.test | 10 | 0.001121s | 0.001155s | 0.001127s | byte equality observed |
| explicit_inst_string_test.test | 10 | 0.001146s | 0.001141s | 0.001133s | byte equality observed |
| explicit_inst_vector_test.test | 10 | 0.001136s | 0.001134s | 0.001132s | byte equality observed |
| flat_map_adaptor_test.test | 2 | 0.007132s | 0.006823s | 0.006881s | byte equality observed |
| flat_map_test.test | 2 | 0.007661s | 0.007306s | 0.007100s | byte equality observed |
| flat_set_adaptor_test.test | 3 | 0.007203s | 0.006489s | 0.007079s | byte equality observed |
| flat_set_test.test | 3 | 0.007108s | 0.006260s | 0.007008s | byte equality observed |
| flat_tree_test.test | 10 | 0.001138s | 0.001151s | 0.001138s | byte equality observed |
| global_resource_test.test | 10 | 0.001185s | 0.001198s | 0.001175s | byte equality observed |
| hub_api_test.test | 6 | 0.003313s | 0.002755s | 0.002676s | byte equality observed |
| hub_empty_sort_test.test | 10 | 0.001144s | 0.001154s | 0.001128s | byte equality observed |
| hub_exception_safety_test.test | 1 | 0.074328s | 0.081906s | 0.074539s | byte equality observed |
| hub_new_extended_alignment_test.test | 10 | 0.001193s | 0.001243s | 0.001229s | byte equality observed |
| hub_pocxx_test.test | 10 | 0.001196s | 0.001216s | 0.001169s | byte equality observed |
| hub_sort_test.test | 1 | 0.512593s | 0.510563s | 0.489999s | byte equality observed |
| hub_stability_test.test | 9 | 0.001450s | 0.001435s | 0.001487s | byte equality observed |
| hub_uses_allocator_test.test | 10 | 0.001170s | 0.001187s | 0.001155s | byte equality observed |
| insert_vs_emplace_test.test | 10 | 0.001201s | 0.001201s | 0.001197s | byte equality observed |
| is_constructible_test.test | 10 | 0.000552s | 0.000554s | 0.001182s | byte equality observed |
| list_test.test | 1 | 0.021637s | 0.021296s | 0.021469s | byte equality observed |
| map_test.test | 3 | 0.009496s | 0.009392s | 0.009258s | byte equality observed |
| memory_resource_test.test | 10 | 0.001162s | 0.001163s | 0.001192s | byte equality observed |
| monotonic_buffer_resource_test.test | 10 | 0.001189s | 0.001191s | 0.001199s | byte equality observed |
| nest_api_test.test | 9 | 0.001974s | 0.001977s | 0.002008s | byte equality observed |
| nest_test.test | 10 | 0.001205s | 0.001203s | 0.001220s | byte equality observed |
| new_delete_resource_test.test | 9 | 0.001746s | 0.001722s | 0.001720s | byte equality observed |
| node_allocator_test.test | 3 | 0.008866s | 0.008571s | 0.008809s | byte equality observed |
| node_handle_test.test | 10 | 0.001192s | 0.001181s | 0.001182s | byte equality observed |
| null_iterators_test.test | 10 | 0.001180s | 0.001188s | 0.001180s | byte equality observed |
| pair_test.test | 10 | 0.001172s | 0.001169s | 0.001205s | byte equality observed |
| pmr_deque_test.test | 10 | 0.001152s | 0.001151s | 0.001161s | byte equality observed |
| pmr_devector_test.test | 10 | 0.001153s | 0.001149s | 0.001170s | byte equality observed |
| pmr_flat_map_test.test | 10 | 0.001138s | 0.001155s | 0.001166s | byte equality observed |
| pmr_flat_set_test.test | 10 | 0.001150s | 0.001153s | 0.001156s | byte equality observed |
| pmr_hub_test.test | 10 | 0.001141s | 0.001156s | 0.001170s | byte equality observed |
| pmr_list_test.test | 10 | 0.001151s | 0.001155s | 0.001169s | byte equality observed |
| pmr_map_test.test | 10 | 0.001141s | 0.001159s | 0.001195s | byte equality observed |
| pmr_nest_test.test | 10 | 0.001149s | 0.001202s | 0.001212s | byte equality observed |
| pmr_set_test.test | 10 | 0.001136s | 0.001164s | 0.001280s | byte equality observed |
| pmr_slist_test.test | 10 | 0.001140s | 0.001158s | 0.001225s | byte equality observed |
| pmr_small_vector_test.test | 10 | 0.001135s | 0.001169s | 0.001244s | byte equality observed |
| pmr_stable_vector_test.test | 10 | 0.001144s | 0.001185s | 0.001272s | byte equality observed |
| pmr_string_test.test | 10 | 0.000552s | 0.000561s | 0.001235s | byte equality observed |
| pmr_vector_test.test | 10 | 0.000555s | 0.000556s | 0.001269s | byte equality observed |
| polymorphic_allocator_test.test | 10 | 0.001226s | 0.001252s | 0.001243s | byte equality observed |
| resource_adaptor_test.test | 10 | 0.001245s | 0.001272s | 0.001264s | byte equality observed |
| scoped_allocator_adaptor_test.test | 10 | 0.001263s | 0.001297s | 0.001277s | byte equality observed |
| scoped_allocator_usage_test.test | 10 | 0.001285s | 0.001231s | 0.001294s | byte equality observed |
| segtor_options_test.test | 10 | 0.001253s | 0.001253s | 0.001262s | byte equality observed |
| segtor_test.test | 1 | 0.454499s | 0.459577s | 0.449314s | byte equality observed |
| set_test.test | 2 | 0.013413s | 0.011757s | 0.013288s | byte equality observed |
| slist_test.test | 1 | 0.020389s | 0.020436s | 0.020337s | byte equality observed |
| small_vector_options_test.test | 10 | 0.001266s | 0.001252s | 0.001258s | byte equality observed |
| small_vector_test.test | 5 | 0.002473s | 0.002260s | 0.004106s | byte equality observed |
| stable_vector_test.test | 1 | 0.029863s | 0.029938s | 0.031040s | byte equality observed |
| static_vector_options_test.test | 10 | 0.001239s | 0.001200s | 0.001232s | byte equality observed |
| static_vector_test.test | 10 | 0.001585s | 0.001498s | 0.001540s | byte equality observed |
| string_options_test.test | 10 | 0.001214s | 0.001220s | 0.001202s | byte equality observed |
| string_test.test | 2 | 0.014927s | 0.015491s | 0.014942s | byte equality observed |
| string_view_compat_test.test | 10 | 0.001155s | 0.001169s | 0.001155s | byte equality observed |
| synchronized_pool_resource_test.test | 10 | 0.001216s | 0.001221s | 0.001215s | byte equality observed |
| throw_exception_test.test | 10 | 0.001146s | 0.001138s | 0.001162s | byte equality observed |
| tree_test.test | 10 | 0.001161s | 0.001149s | 0.001154s | byte equality observed |
| unsynchronized_pool_resource_test.test | 10 | 0.001220s | 0.001214s | 0.001244s | byte equality observed |
| uses_allocator_construction_test.test | 10 | 0.001151s | 0.001144s | 0.001167s | byte equality observed |
| uses_allocator_test.test | 10 | 0.000549s | 0.000534s | 0.001142s | byte equality observed |
| vector_options_test.test | 10 | 0.001335s | 0.001338s | 0.001329s | byte equality observed |
| vector_test.test | 4 | 0.004015s | 0.003904s | 0.005602s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43664060660).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
