# libs/container/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| vector_test.test | RUN | 5.880351 | 30.002296 | 24.674352 | 0.004600 | 0.004807 | 0.005983 |
| vector_options_test.test | RUN | 0.257354 | 1.268701 | 0.983273 | 0.001318 | 0.001455 | 0.001583 |
| uses_allocator_test.test | RUN | 0.043346 | 0.098231 | 0.125838 | 0.000476 | 0.000508 | 0.001294 |
| uses_allocator_construction_test.test | RUN | 0.130582 | 0.376465 | 0.446844 | 0.001130 | 0.001264 | 0.001267 |
| unsynchronized_pool_resource_test.test | RUN | 0.172550 | 1.201985 | 0.593892 | 0.001140 | 0.001477 | 0.001391 |
| tree_test.test | RUN | 0.803128 | 4.410104 | 3.424549 | 0.001112 | 0.001200 | 0.001149 |
| throw_exception_test.test | RUN | 0.097660 | 0.243687 | 0.299670 | 0.001109 | 0.001328 | 0.001345 |
| synchronized_pool_resource_test.test | RUN | 0.172189 | 1.207135 | 0.586805 | 0.001159 | 0.001278 | 0.001382 |
| string_view_compat_test.test | RUN | 0.293369 | 2.400719 | 1.121524 | 0.001163 | 0.001253 | 0.001445 |
| string_test.test | RUN | 1.413985 | 9.206910 | 6.270340 | 0.014016 | 0.012899 | 0.013606 |
| string_options_test.test | RUN | 0.243121 | 1.933882 | 1.005923 | 0.001142 | 0.001353 | 0.001327 |
| static_vector_test.test | RUN | 1.430708 | 7.763985 | 6.478294 | 0.001627 | 0.001604 | 0.001732 |
| static_vector_options_test.test | RUN | 0.160211 | 0.493180 | 0.544595 | 0.001284 | 0.001334 | 0.001368 |
| stable_vector_test.test | RUN | 3.373833 | 16.474463 | 12.866915 | 0.031295 | 0.032000 | 0.033417 |
| small_vector_test.test | RUN | 2.181690 | 11.343944 | 9.046976 | 0.002744 | 0.002743 | 0.004432 |
| small_vector_options_test.test | RUN | 0.298275 | 1.346095 | 1.160804 | 0.001334 | 0.001450 | 0.001456 |
| slist_test.test | RUN | 2.040459 | 10.328039 | 7.987676 | 0.023331 | 0.023349 | 0.022642 |
| set_test.test | RUN | 3.071919 | 19.286557 | 14.796091 | 0.013613 | 0.013288 | 0.013854 |
| segtor_test.test | RUN | 3.966499 | 20.984456 | 16.588085 | 0.704310 | 0.743670 | 0.715144 |
| segtor_options_test.test | RUN | 0.189436 | 0.596238 | 0.706330 | 0.001346 | 0.001506 | 0.001341 |
| scoped_allocator_usage_test.test | RUN | 0.706221 | 3.086410 | 2.666583 | 0.001202 | 0.001309 | 0.001245 |
| scoped_allocator_adaptor_test.test | RUN | 0.296312 | 0.855646 | 1.169539 | 0.001214 | 0.001259 | 0.001226 |
| resource_adaptor_test.test | RUN | 0.151371 | 0.504852 | 0.499584 | 0.001200 | 0.001340 | 0.001464 |
| polymorphic_allocator_test.test | RUN | 0.126095 | 0.389634 | 0.405424 | 0.001181 | 0.001318 | 0.001236 |
| pmr_vector_test.test | RUN | 0.071187 | 0.150374 | 0.226125 | 0.000456 | 0.000490 | 0.001270 |
| pmr_string_test.test | RUN | 0.134811 | 0.313337 | 0.406353 | 0.000482 | 0.000590 | 0.001433 |
| pmr_stable_vector_test.test | RUN | 0.168825 | 0.519830 | 0.614813 | 0.001107 | 0.001323 | 0.001278 |
| pmr_small_vector_test.test | RUN | 0.084980 | 0.204297 | 0.257859 | 0.001160 | 0.000945 | 0.001425 |
| pmr_slist_test.test | RUN | 0.128520 | 0.705194 | 0.616662 | 0.001184 | 0.001236 | 0.001249 |
| pmr_set_test.test | RUN | 0.134276 | 0.351386 | 0.442008 | 0.001151 | 0.001380 | 0.001284 |
| pmr_nest_test.test | RUN | 0.104156 | 0.236165 | 0.305423 | 0.001050 | 0.001211 | 0.001324 |
| pmr_map_test.test | RUN | 0.143384 | 0.356022 | 0.435908 | 0.001043 | 0.001100 | 0.001308 |
| pmr_list_test.test | RUN | 0.092038 | 0.224971 | 0.261107 | 0.001042 | 0.001227 | 0.001207 |
| pmr_hub_test.test | RUN | 0.128210 | 0.302680 | 0.387946 | 0.001057 | 0.001274 | 0.001368 |
| pmr_flat_set_test.test | RUN | 0.101544 | 0.246081 | 0.336182 | 0.001117 | 0.001331 | 0.001339 |
| pmr_flat_map_test.test | RUN | 0.122460 | 0.277628 | 0.356716 | 0.001169 | 0.001057 | 0.001207 |
| pmr_devector_test.test | RUN | 0.080633 | 0.245751 | 0.291753 | 0.001028 | 0.001331 | 0.001223 |
| pmr_deque_test.test | RUN | 0.080279 | 0.200108 | 0.274042 | 0.001240 | 0.001445 | 0.001297 |
| pair_test.test | RUN | 0.203571 | 0.481639 | 0.641196 | 0.001314 | 0.001377 | 0.001391 |
| null_iterators_test.test | RUN | 0.319132 | 0.950636 | 0.999877 | 0.001138 | 0.001627 | 0.001310 |
| node_handle_test.test | RUN | 0.142154 | 1.237874 | 0.428571 | 0.001147 | 0.001369 | 0.001227 |
| node_allocator_test.test | RUN | 2.419743 | 12.868942 | 10.101736 | 0.008430 | 0.009347 | 0.009454 |
| new_delete_resource_test.test | RUN | 0.175597 | 0.734772 | 0.584794 | 0.001727 | 0.002072 | 0.001774 |
| nest_test.test | RUN | 0.478921 | 3.457220 | 2.085377 | 0.001133 | 0.001496 | 0.001320 |
| nest_api_test.test | RUN | 0.832504 | 6.706502 | 4.055765 | 0.002343 | 0.002391 | 0.002455 |
| monotonic_buffer_resource_test.test | RUN | 0.154460 | 1.317448 | 0.602353 | 0.001099 | 0.001214 | 0.001392 |
| memory_resource_test.test | RUN | 0.086000 | 0.322856 | 0.346828 | 0.001207 | 0.001222 | 0.001254 |
| map_test.test | RUN | 4.241974 | 21.706248 | 21.106048 | 0.010656 | 0.010166 | 0.009970 |
| list_test.test | RUN | 2.184007 | 11.073316 | 8.862941 | 0.022393 | 0.022463 | 0.022534 |
| is_constructible_test.test | RUN | 0.062910 | 0.127932 | 0.190687 | 0.000474 | 0.000498 | 0.001232 |
| insert_vs_emplace_test.test | RUN | 0.207281 | 0.852641 | 1.142212 | 0.001238 | 0.001349 | 0.001444 |
| hub_uses_allocator_test.test | RUN | 0.226811 | 0.737970 | 0.816063 | 0.001351 | 0.001393 | 0.001514 |
| hub_stability_test.test | RUN | 0.525794 | 3.505777 | 2.967518 | 0.001478 | 0.001709 | 0.001633 |
| hub_sort_test.test | RUN | 0.335559 | 1.555976 | 1.372552 | 0.520207 | 0.551896 | 0.512838 |
| hub_pocxx_test.test | RUN | 0.288567 | 1.860602 | 1.000333 | 0.001134 | 0.001564 | 0.001512 |
| hub_new_extended_alignment_test.test | RUN | 0.158057 | 0.559129 | 0.554677 | 0.001226 | 0.001418 | 0.001274 |
| hub_exception_safety_test.test | RUN | 0.637628 | 4.449375 | 2.990442 | 0.061719 | 0.064908 | 0.072013 |
| hub_empty_sort_test.test | RUN | 0.183499 | 0.508837 | 0.640443 | 0.001145 | 0.001527 | 0.001447 |
| hub_api_test.test | RUN | 2.142369 | 17.461437 | 9.364755 | 0.003475 | 0.003437 | 0.003483 |
| global_resource_test.test | RUN | 0.094984 | 0.336753 | 0.333263 | 0.001389 | 0.001394 | 0.001327 |
| flat_tree_test.test | RUN | 3.989444 | 27.856100 | 18.186408 | 0.001194 | 0.001363 | 0.001525 |
| flat_set_test.test | RUN | 4.993828 | 34.747493 | 23.625988 | 0.007292 | 0.006400 | 0.007228 |
| flat_set_adaptor_test.test | RUN | 3.744064 | 30.772490 | 18.355297 | 0.007513 | 0.006931 | 0.007707 |
| flat_map_test.test | RUN | 8.101288 | 52.666910 | 38.308289 | 0.008365 | 0.008295 | 0.007981 |
| flat_map_adaptor_test.test | RUN | 5.141263 | 38.157952 | 26.789090 | 0.007693 | 0.007502 | 0.007699 |
| explicit_inst_vector_test.test | RUN | 0.786600 | 5.059942 | 4.092636 | 0.001254 | 0.001397 | 0.001440 |
| explicit_inst_string_test.test | RUN | 1.060503 | 9.121672 | 5.806680 | 0.001126 | 0.001378 | 0.001197 |
| explicit_inst_static_vector_test.test | RUN | 0.094614 | 0.329290 | 0.389380 | 0.001230 | 0.001224 | 0.001468 |
| explicit_inst_stable_vector_test.test | RUN | 0.627055 | 3.221771 | 2.648669 | 0.001321 | 0.001383 | 0.001338 |
| explicit_inst_small_vector_test.test | RUN | 0.513810 | 2.927020 | 2.364874 | 0.001262 | 0.001478 | 0.001381 |
| explicit_inst_slist_test.test | RUN | 0.385258 | 2.672596 | 1.816967 | 0.001225 | 0.001474 | 0.001546 |
| explicit_inst_set_test.test | RUN | 0.545919 | 3.073219 | 2.121010 | 0.001132 | 0.001352 | 0.001372 |
| explicit_inst_map_test.test | RUN | 0.592795 | 3.213907 | 2.347745 | 0.001307 | 0.001605 | 0.001323 |
| explicit_inst_list_test.test | RUN | 0.136785 | 0.721093 | 0.597112 | 0.001144 | 0.001162 | 0.001182 |
| explicit_inst_flat_set_test.test | RUN | 3.324448 | 23.212774 | 13.924174 | 0.001263 | 0.001302 | 0.001272 |
| explicit_inst_flat_map_test.test | RUN | 3.568204 | 24.202509 | 15.601301 | 0.001195 | 0.001324 | 0.001210 |
| explicit_inst_devector_test.test | RUN | 0.426343 | 2.855790 | 1.921366 | 0.001126 | 0.001379 | 0.001391 |
| explicit_inst_deque_test.test | RUN | 0.432541 | 3.093450 | 2.080304 | 0.001306 | 0.001296 | 0.001322 |
| devector_test.test | RUN | 6.463899 | 34.698867 | 26.071475 | 0.003090 | 0.003228 | 0.003993 |
| devector_options_test.test | RUN | 0.275925 | 1.725913 | 1.115943 | 0.001714 | 0.001494 | 0.001563 |
| deque_test.test | RUN | 4.366453 | 23.772376 | 18.354654 | 0.364248 | 0.362559 | 0.440334 |
| deque_options_test.test | RUN | 0.193280 | 0.605295 | 0.736371 | 0.001265 | 0.001397 | 0.001473 |
| copy_move_algo_test.test | RUN | 0.190883 | 0.722450 | 0.666241 | 0.001474 | 0.001642 | 0.001413 |
| common_iterator_test.test | RUN | 0.012896 | 0.037363 | 0.038146 | 0.000465 | 0.000552 | 0.001342 |
| boost_iterator_comp_test.test | RUN | 0.271512 | 0.835306 | 1.013097 | 0.001165 | 0.001328 | 0.001458 |
| allocator_traits_test.test | RUN | 0.152091 | 0.381030 | 0.474082 | 0.001080 | 0.001371 | 0.001528 |
| alloc_full_test.test | RUN | 0.186069 | 0.804403 | 0.706704 | 0.003802 | 0.003968 | 0.004107 |
| alloc_basic_test.test | RUN | 0.151330 | 0.563081 | 0.528350 | 0.001128 | 0.001318 | 0.001520 |
| adaptive_pool_test.test | RUN | 1.725337 | 13.799240 | 10.244129 | 0.008718 | 0.011484 | 0.012841 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 1.008× | 1.003×, 1.014× | 1.006× |
| clang | 1.065× | 1.064×, 1.067× | 0.996× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1364 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44481767416).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| adaptive_pool_test.test | 3 | 0.008891s | 0.008185s | 0.009054s | byte equality observed |
| alloc_basic_test.test | 10 | 0.000816s | 0.000824s | 0.000823s | byte equality observed |
| alloc_full_test.test | 7 | 0.002730s | 0.002756s | 0.002861s | byte equality observed |
| allocator_traits_test.test | 10 | 0.000775s | 0.000765s | 0.000767s | byte equality observed |
| boost_iterator_comp_test.test | 10 | 0.000796s | 0.000771s | 0.000789s | byte equality observed |
| common_iterator_test.test | 10 | 0.000364s | 0.000361s | 0.000770s | byte equality observed |
| copy_move_algo_test.test | 10 | 0.001182s | 0.000909s | 0.000993s | byte equality observed |
| deque_options_test.test | 10 | 0.000855s | 0.000848s | 0.000842s | byte equality observed |
| deque_test.test | 1 | 0.372072s | 0.369774s | 0.447720s | byte equality observed |
| devector_options_test.test | 10 | 0.000893s | 0.000837s | 0.000840s | byte equality observed |
| devector_test.test | 5 | 0.002889s | 0.002797s | 0.003628s | byte equality observed |
| explicit_inst_deque_test.test | 10 | 0.000719s | 0.000717s | 0.000707s | byte equality observed |
| explicit_inst_devector_test.test | 10 | 0.000699s | 0.000713s | 0.000701s | byte equality observed |
| explicit_inst_flat_map_test.test | 10 | 0.000708s | 0.000727s | 0.000699s | byte equality observed |
| explicit_inst_flat_set_test.test | 10 | 0.000713s | 0.000718s | 0.000698s | byte equality observed |
| explicit_inst_list_test.test | 10 | 0.000708s | 0.000730s | 0.000714s | byte equality observed |
| explicit_inst_map_test.test | 10 | 0.000740s | 0.000732s | 0.000713s | byte equality observed |
| explicit_inst_set_test.test | 10 | 0.000726s | 0.000719s | 0.000725s | byte equality observed |
| explicit_inst_slist_test.test | 10 | 0.000712s | 0.000721s | 0.000730s | byte equality observed |
| explicit_inst_small_vector_test.test | 10 | 0.000722s | 0.000718s | 0.000720s | byte equality observed |
| explicit_inst_stable_vector_test.test | 10 | 0.000718s | 0.000736s | 0.000732s | byte equality observed |
| explicit_inst_static_vector_test.test | 10 | 0.000711s | 0.000708s | 0.000715s | byte equality observed |
| explicit_inst_string_test.test | 10 | 0.000723s | 0.000722s | 0.000730s | byte equality observed |
| explicit_inst_vector_test.test | 10 | 0.000726s | 0.000727s | 0.000713s | byte equality observed |
| flat_map_adaptor_test.test | 4 | 0.005668s | 0.005343s | 0.005449s | byte equality observed |
| flat_map_test.test | 4 | 0.006192s | 0.005711s | 0.005523s | byte equality observed |
| flat_set_adaptor_test.test | 4 | 0.005518s | 0.005011s | 0.005351s | byte equality observed |
| flat_set_test.test | 4 | 0.005464s | 0.004825s | 0.005219s | byte equality observed |
| flat_tree_test.test | 10 | 0.000727s | 0.000730s | 0.000742s | byte equality observed |
| global_resource_test.test | 10 | 0.000748s | 0.000760s | 0.000765s | byte equality observed |
| hub_api_test.test | 8 | 0.002547s | 0.002235s | 0.002185s | byte equality observed |
| hub_empty_sort_test.test | 10 | 0.000739s | 0.000738s | 0.000746s | byte equality observed |
| hub_exception_safety_test.test | 1 | 0.052416s | 0.054316s | 0.051489s | byte equality observed |
| hub_new_extended_alignment_test.test | 10 | 0.000795s | 0.000786s | 0.000791s | byte equality observed |
| hub_pocxx_test.test | 10 | 0.000783s | 0.000780s | 0.000765s | byte equality observed |
| hub_sort_test.test | 1 | 0.427019s | 0.437661s | 0.414426s | byte equality observed |
| hub_stability_test.test | 10 | 0.000967s | 0.000965s | 0.001002s | byte equality observed |
| hub_uses_allocator_test.test | 10 | 0.000761s | 0.000748s | 0.000767s | byte equality observed |
| insert_vs_emplace_test.test | 10 | 0.000759s | 0.000769s | 0.000765s | byte equality observed |
| is_constructible_test.test | 10 | 0.000350s | 0.000347s | 0.000747s | byte equality observed |
| list_test.test | 2 | 0.015449s | 0.015468s | 0.016053s | byte equality observed |
| map_test.test | 3 | 0.007622s | 0.007326s | 0.007270s | byte equality observed |
| memory_resource_test.test | 10 | 0.000756s | 0.000748s | 0.000780s | byte equality observed |
| monotonic_buffer_resource_test.test | 10 | 0.000764s | 0.000753s | 0.000777s | byte equality observed |
| nest_api_test.test | 10 | 0.001643s | 0.001652s | 0.001670s | byte equality observed |
| nest_test.test | 10 | 0.000782s | 0.000788s | 0.000796s | byte equality observed |
| new_delete_resource_test.test | 10 | 0.001125s | 0.001120s | 0.001133s | byte equality observed |
| node_allocator_test.test | 3 | 0.006655s | 0.006559s | 0.006731s | byte equality observed |
| node_handle_test.test | 10 | 0.000772s | 0.000753s | 0.000760s | byte equality observed |
| null_iterators_test.test | 10 | 0.000759s | 0.000754s | 0.000765s | byte equality observed |
| pair_test.test | 10 | 0.000754s | 0.000752s | 0.000758s | byte equality observed |
| pmr_deque_test.test | 10 | 0.000729s | 0.000735s | 0.000739s | byte equality observed |
| pmr_devector_test.test | 10 | 0.000736s | 0.000746s | 0.000749s | byte equality observed |
| pmr_flat_map_test.test | 10 | 0.000749s | 0.000745s | 0.000735s | byte equality observed |
| pmr_flat_set_test.test | 10 | 0.000749s | 0.000739s | 0.000727s | byte equality observed |
| pmr_hub_test.test | 10 | 0.000750s | 0.000749s | 0.000748s | byte equality observed |
| pmr_list_test.test | 10 | 0.000742s | 0.000734s | 0.000754s | byte equality observed |
| pmr_map_test.test | 10 | 0.000745s | 0.000720s | 0.000742s | byte equality observed |
| pmr_nest_test.test | 10 | 0.000744s | 0.000745s | 0.000733s | byte equality observed |
| pmr_set_test.test | 10 | 0.000740s | 0.000748s | 0.000733s | byte equality observed |
| pmr_slist_test.test | 10 | 0.000730s | 0.000724s | 0.000735s | byte equality observed |
| pmr_small_vector_test.test | 10 | 0.000728s | 0.000734s | 0.000746s | byte equality observed |
| pmr_stable_vector_test.test | 10 | 0.000739s | 0.000746s | 0.000774s | byte equality observed |
| pmr_string_test.test | 10 | 0.000354s | 0.000344s | 0.000783s | byte equality observed |
| pmr_vector_test.test | 10 | 0.000349s | 0.000348s | 0.000797s | byte equality observed |
| polymorphic_allocator_test.test | 10 | 0.000767s | 0.000759s | 0.000811s | byte equality observed |
| resource_adaptor_test.test | 10 | 0.000768s | 0.000756s | 0.000795s | byte equality observed |
| scoped_allocator_adaptor_test.test | 10 | 0.000767s | 0.000751s | 0.000813s | byte equality observed |
| scoped_allocator_usage_test.test | 10 | 0.000769s | 0.000756s | 0.000809s | byte equality observed |
| segtor_options_test.test | 10 | 0.000809s | 0.000786s | 0.000811s | byte equality observed |
| segtor_test.test | 1 | 0.456603s | 0.463560s | 0.499012s | byte equality observed |
| set_test.test | 2 | 0.010651s | 0.009488s | 0.010349s | byte equality observed |
| slist_test.test | 2 | 0.016179s | 0.016015s | 0.016052s | byte equality observed |
| small_vector_options_test.test | 10 | 0.000841s | 0.000795s | 0.000833s | byte equality observed |
| small_vector_test.test | 7 | 0.001696s | 0.001586s | 0.002746s | byte equality observed |
| stable_vector_test.test | 1 | 0.027687s | 0.027863s | 0.028632s | byte equality observed |
| static_vector_options_test.test | 10 | 0.000810s | 0.000765s | 0.000800s | byte equality observed |
| static_vector_test.test | 10 | 0.001064s | 0.000989s | 0.001023s | byte equality observed |
| string_options_test.test | 10 | 0.000781s | 0.000787s | 0.000771s | byte equality observed |
| string_test.test | 3 | 0.009254s | 0.008913s | 0.009308s | byte equality observed |
| string_view_compat_test.test | 10 | 0.000757s | 0.000745s | 0.000727s | byte equality observed |
| synchronized_pool_resource_test.test | 10 | 0.000775s | 0.000777s | 0.000766s | byte equality observed |
| throw_exception_test.test | 10 | 0.000733s | 0.000725s | 0.000719s | byte equality observed |
| tree_test.test | 10 | 0.000738s | 0.000737s | 0.000715s | byte equality observed |
| unsynchronized_pool_resource_test.test | 10 | 0.000776s | 0.000787s | 0.000775s | byte equality observed |
| uses_allocator_construction_test.test | 10 | 0.000721s | 0.000740s | 0.000723s | byte equality observed |
| uses_allocator_test.test | 10 | 0.000345s | 0.000339s | 0.000701s | byte equality observed |
| vector_options_test.test | 10 | 0.000857s | 0.000852s | 0.000842s | byte equality observed |
| vector_test.test | 5 | 0.002978s | 0.002987s | 0.003961s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44481767416).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
