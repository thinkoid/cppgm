# libs/variant2/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| quick.test | RUN | 0.116575 | 0.259486 | 0.377966 | 0.001804 | 0.000870 | 0.001750 |
| variant_size.test | RUN | 0.217368 | 0.650075 | 0.719832 | 0.002407 | 0.001984 | 0.001884 |
| variant_alternative.test | RUN | 0.282259 | 2.004276 | 1.152476 | 0.001934 | 0.001813 | 0.001286 |
| variant_holds_alternative.test | RUN | 0.190401 | 0.496953 | 0.716472 | 0.001709 | 0.001882 | 0.001676 |
| variant_holds_alternative_cx.test | COMPILE | 0.130693 | 0.282640 | 0.410195 | — | — | — |
| variant_get_by_index.test | RUN | 0.311959 | 2.148043 | 1.407224 | 0.001718 | 0.001996 | 0.001890 |
| variant_get_by_index_cx.test | COMPILE | 0.144156 | 0.296288 | 0.417026 | — | — | — |
| variant_get_by_type.test | RUN | 0.314871 | 2.267786 | 1.526590 | 0.001640 | 0.001990 | 0.001817 |
| variant_get_by_type_cx.test | COMPILE | 0.118540 | 0.258519 | 0.370407 | — | — | — |
| variant_default_construct.test | RUN | 0.291513 | 1.673464 | 1.245636 | 0.001828 | 0.001858 | 0.001785 |
| variant_default_construct_cx.test | COMPILE | 0.136840 | 0.274047 | 0.418882 | — | — | — |
| variant_copy_construct.test | RUN | 0.470433 | 2.831245 | 2.223836 | 0.001721 | 0.001652 | 0.001861 |
| variant_copy_construct_cx.test | COMPILE | 0.148371 | 0.315384 | 0.495343 | — | — | — |
| variant_move_construct.test | RUN | 0.451098 | 2.446469 | 2.074851 | 0.001624 | 0.001733 | 0.001980 |
| variant_move_construct_cx.test | COMPILE | 0.118918 | 0.258459 | 0.373303 | — | — | — |
| variant_value_construct.test | RUN | 0.233505 | 0.636493 | 0.898610 | 0.001842 | 0.001928 | 0.001447 |
| variant_value_construct_cx.test | COMPILE | 0.133305 | 0.304154 | 0.433502 | — | — | — |
| variant_in_place_index_construct.test | RUN | 0.251288 | 0.650430 | 0.914521 | 0.001693 | 0.001682 | 0.001882 |
| variant_in_place_index_construct_cx.test | COMPILE | 0.136312 | 0.288567 | 0.446478 | — | — | — |
| variant_in_place_type_construct.test | RUN | 0.248351 | 0.632699 | 0.857413 | 0.001617 | 0.001956 | 0.001788 |
| variant_in_place_type_construct_cx.test | COMPILE | 0.138320 | 0.287152 | 0.423689 | — | — | — |
| variant_copy_assign.test | RUN | 0.314368 | 1.948287 | 1.398873 | 0.001688 | 0.001762 | 0.001860 |
| variant_copy_assign_cx.test | COMPILE | 0.115141 | 0.250819 | 0.350450 | — | — | — |
| variant_move_assign.test | RUN | 0.311104 | 1.929624 | 1.379143 | 0.001632 | 0.001844 | 0.001736 |
| variant_move_assign_cx.test | COMPILE | 0.116488 | 0.253485 | 0.351555 | — | — | — |
| variant_value_assign.test | RUN | 0.243534 | 0.696140 | 0.967982 | 0.001828 | 0.001665 | 0.001821 |
| variant_value_assign_cx.test | COMPILE | 0.116353 | 0.247106 | 0.367969 | — | — | — |
| variant_emplace_index.test | RUN | 0.275558 | 0.856171 | 1.099124 | 0.001818 | 0.001928 | 0.001746 |
| variant_emplace_index_cx.test | COMPILE | 0.114700 | 0.248603 | 0.325052 | — | — | — |
| variant_emplace_type.test | RUN | 0.252362 | 0.732145 | 0.945442 | 0.001840 | 0.001934 | 0.001802 |
| variant_emplace_type_cx.test | COMPILE | 0.119601 | 0.245497 | 0.344357 | — | — | — |
| variant_swap.test | RUN | 0.257082 | 0.903578 | 1.037418 | 0.001824 | 0.001736 | 0.001840 |
| variant_eq_ne.test | RUN | 0.208197 | 0.570263 | 0.757415 | 0.001645 | 0.001660 | 0.001841 |
| variant_eq_ne_cx.test | COMPILE | 0.113096 | 0.247448 | 0.322963 | — | — | — |
| variant_lt_gt.test | RUN | 0.215313 | 0.608641 | 0.793281 | 0.001698 | 0.002085 | 0.001856 |
| variant_lt_gt_cx.test | COMPILE | 0.115460 | 0.260286 | 0.344904 | — | — | — |
| variant_destroy.test | RUN | 0.223054 | 0.612971 | 0.812177 | 0.001942 | 0.001928 | 0.001800 |
| variant_visit.test | RUN | 1.241645 | 4.812317 | 12.643431 | 0.001571 | 0.001716 | 0.001974 |
| variant_convert_construct.test | RUN | 0.283668 | 0.791445 | 1.108932 | 0.001858 | 0.002358 | 0.001776 |
| variant_subset.test | RUN | 0.296350 | 0.900456 | 1.160813 | 0.001742 | 0.001888 | 0.001507 |
| variant_valueless.test | RUN | 0.212976 | 0.553360 | 0.770631 | 0.001638 | 0.001708 | 0.001894 |
| variant_copy_construct_throw.test | RUN | 0.168850 | 0.420886 | 0.533014 | 0.001827 | 0.001762 | 0.001812 |
| variant_move_construct_throw.test | RUN | 0.166157 | 0.423247 | 0.561665 | 0.001864 | 0.001770 | 0.001644 |
| variant_convert_construct_throw.test | RUN | 0.176133 | 0.462132 | 0.594024 | 0.001716 | 0.001724 | 0.001868 |
| variant_copy_assign_throw.test | RUN | 0.170954 | 0.395402 | 0.574898 | 0.001623 | 0.001896 | 0.001778 |
| variant_move_assign_throw.test | RUN | 0.174200 | 0.416437 | 0.561141 | 0.001692 | 0.001841 | 0.001900 |
| variant_get_by_index_nx.test | RUN | 0.376375 | 1.882671 | 1.406116 | 0.001549 | 0.001851 | 0.001717 |
| variant_get_by_index_cx_nx.test | COMPILE | 0.137965 | 0.300301 | 0.412303 | — | — | — |
| variant_get_by_type_nx.test | RUN | 0.381614 | 2.075901 | 1.499892 | 0.001756 | 0.001855 | 0.001872 |
| variant_get_by_type_cx_nx.test | COMPILE | 0.119406 | 0.260978 | 0.364312 | — | — | — |
| variant_subset_nx.test | RUN | 0.299242 | 0.863387 | 1.163853 | 0.001699 | 0.001834 | 0.001890 |
| variant_hash.test | RUN | 0.295065 | 0.993794 | 1.130396 | 0.001848 | 0.001862 | 0.001628 |
| variant_trivial.test | RUN | 1.727588 | 5.583237 | 8.401046 | 0.001567 | 0.002130 | 0.001835 |
| variant_special.test | RUN | 1.665178 | 6.078083 | 8.783348 | 0.001763 | 0.001988 | 0.001982 |
| variant_visit_derived.test | RUN | 0.197116 | 0.515867 | 0.791493 | 0.001940 | 0.002023 | 0.001749 |
| variant_many_types.test | RUN | 1.621329 | 7.767517 | 11.249484 | 0.001873 | 0.002016 | 0.001791 |
| variant_visit_r.test | RUN | 0.698302 | 2.293193 | 4.263244 | 0.001991 | 0.001740 | 0.001901 |
| variant_derived_construct.test | COMPILE | 0.116036 | 0.261607 | 0.366936 | — | — | — |
| variant_visit_by_index.test | RUN | 0.266498 | 0.667063 | 1.045039 | 0.001743 | 0.001891 | 0.001501 |
| variant_ostream_insert.test | RUN | 0.186907 | 0.585407 | 0.716038 | 0.001823 | 0.002097 | 0.001893 |
| is_output_streamable.test | RUN | 0.227580 | 1.131007 | 0.961467 | 0.001659 | 0.002010 | 0.001905 |
| variant_json_value_from.test | RUN | 0.370174 | 0.909649 | 1.238406 | 0.001848 | 0.002070 | 0.001884 |
| variant_json_value_to.test | RUN | 0.448871 | 1.218531 | 1.645596 | 0.001953 | 0.001928 | 0.001878 |
| variant_uses_double_storage.test | COMPILE | 0.127902 | 0.262584 | 0.387379 | — | — | — |
| variant_derived_construct2.test | RUN | 0.175655 | 0.447458 | 0.626766 | 0.001543 | 0.001964 | 0.001811 |
| variant_visit_cx.test | COMPILE | 0.113475 | 0.260130 | 0.321145 | — | — | — |
| variant_visit_cx_2.test | COMPILE | 0.117193 | 0.268968 | 0.317374 | — | — | — |
| variant_visit_r_cx.test | COMPILE | 0.114185 | 0.267792 | 0.363806 | — | — | — |
| variant_index_type_126.test | RUN | 1.064267 | 2.551541 | 5.270383 | 0.001691 | 0.001847 | 0.001758 |
| variant_index_type_127.test | RUN | 1.111399 | 2.588805 | 5.260942 | 0.001843 | 0.001952 | 0.001740 |
| variant_index_type_128.test | RUN | 1.089086 | 2.685416 | 5.275672 | 0.001616 | 0.001939 | 0.001890 |
| variant_index_type_129.test | RUN | 1.113023 | 2.671370 | 5.337669 | 0.001794 | 0.001823 | 0.001874 |
| variant_index_type_254.test | RUN | 3.705965 | 9.311977 | 15.995389 | 0.001828 | 0.001663 | 0.001819 |
| variant_index_type_255.test | RUN | 3.739452 | 9.336049 | 16.149361 | 0.001809 | 0.001968 | 0.001918 |
| variant_index_type_256.test | RUN | 3.808091 | 9.549920 | 16.135439 | 0.001712 | 0.002551 | 0.001857 |
| variant_index_type_257.test | RUN | 3.840901 | 9.576149 | 16.239496 | 0.001488 | 0.001417 | 0.001554 |
| variant_default_construct_cx_2.test | COMPILE | 0.110365 | 0.275594 | 0.367717 | — | — | — |
| variant_default_construct_cx_3.test | COMPILE | 0.115008 | 0.279005 | 0.386049 | — | — | — |
| variant_default_construct_cx_4.test | COMPILE | 0.114786 | 0.219828 | 0.314671 | — | — | — |
| variant_default_construct_cx_5.test | COMPILE | 0.112512 | 0.246840 | 0.344798 | — | — | — |
| variant_value_construct_cx_2.test | COMPILE | 0.113063 | 0.245879 | 0.288531 | — | — | — |
| variant_value_construct_cx_3.test | COMPILE | 0.107936 | 0.238307 | 0.331434 | — | — | — |
| variant_value_construct_cx_4.test | COMPILE | 0.089842 | 0.178345 | 0.222681 | — | — | — |
| variant_issue_55.test | RUN | 0.153711 | 0.423015 | 0.476250 | 0.001388 | 0.001396 | 0.001260 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 1.004× | 1.012×, 0.996× | 1.009× |
| clang | 1.002× | 1.004×, 1.000× | 0.975× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1363 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43620819273).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| is_output_streamable.test | 10 | 0.001138s | 0.001167s | 0.001182s | byte equality observed |
| quick.test | 10 | 0.001123s | 0.000528s | 0.001131s | byte equality observed |
| variant_alternative.test | 10 | 0.001162s | 0.001157s | 0.001172s | byte equality observed |
| variant_convert_construct.test | 10 | 0.001153s | 0.001180s | 0.001174s | byte equality observed |
| variant_convert_construct_throw.test | 10 | 0.001194s | 0.001196s | 0.001211s | byte equality observed |
| variant_copy_assign.test | 10 | 0.001158s | 0.001176s | 0.001172s | byte equality observed |
| variant_copy_assign_throw.test | 10 | 0.001187s | 0.001192s | 0.001177s | byte equality observed |
| variant_copy_construct.test | 10 | 0.001162s | 0.001187s | 0.001122s | byte equality observed |
| variant_copy_construct_throw.test | 10 | 0.001182s | 0.001204s | 0.001246s | byte equality observed |
| variant_default_construct.test | 10 | 0.001159s | 0.001186s | 0.001194s | byte equality observed |
| variant_derived_construct2.test | 10 | 0.001148s | 0.001179s | 0.001156s | byte equality observed |
| variant_destroy.test | 10 | 0.001135s | 0.001158s | 0.001110s | byte equality observed |
| variant_emplace_index.test | 10 | 0.001159s | 0.001172s | 0.001144s | byte equality observed |
| variant_emplace_type.test | 10 | 0.001151s | 0.001163s | 0.001169s | byte equality observed |
| variant_eq_ne.test | 10 | 0.001139s | 0.001161s | 0.001160s | byte equality observed |
| variant_get_by_index.test | 10 | 0.001227s | 0.001265s | 0.001223s | byte equality observed |
| variant_get_by_index_nx.test | 10 | 0.001153s | 0.001148s | 0.001163s | byte equality observed |
| variant_get_by_type.test | 10 | 0.001205s | 0.001252s | 0.001183s | byte equality observed |
| variant_get_by_type_nx.test | 10 | 0.001150s | 0.001165s | 0.001152s | byte equality observed |
| variant_hash.test | 10 | 0.001161s | 0.001158s | 0.001139s | byte equality observed |
| variant_holds_alternative.test | 10 | 0.001153s | 0.001160s | 0.001116s | byte equality observed |
| variant_in_place_index_construct.test | 10 | 0.001162s | 0.001174s | 0.001153s | byte equality observed |
| variant_in_place_type_construct.test | 10 | 0.001132s | 0.001179s | 0.001119s | byte equality observed |
| variant_index_type_126.test | 10 | 0.001147s | 0.001152s | 0.001161s | byte equality observed |
| variant_index_type_127.test | 10 | 0.001167s | 0.001156s | 0.001161s | byte equality observed |
| variant_index_type_128.test | 10 | 0.001149s | 0.001164s | 0.001161s | byte equality observed |
| variant_index_type_129.test | 10 | 0.001152s | 0.001170s | 0.001158s | byte equality observed |
| variant_index_type_254.test | 10 | 0.001128s | 0.001159s | 0.001174s | byte equality observed |
| variant_index_type_255.test | 10 | 0.001180s | 0.001182s | 0.001170s | byte equality observed |
| variant_index_type_256.test | 10 | 0.001172s | 0.001163s | 0.001165s | byte equality observed |
| variant_index_type_257.test | 10 | 0.001156s | 0.001165s | 0.001180s | byte equality observed |
| variant_issue_55.test | 10 | 0.001189s | 0.001195s | 0.001195s | byte equality observed |
| variant_json_value_from.test | 10 | 0.001194s | 0.001238s | 0.001185s | byte equality observed |
| variant_json_value_to.test | 10 | 0.001180s | 0.001179s | 0.001186s | byte equality observed |
| variant_lt_gt.test | 10 | 0.001154s | 0.001163s | 0.001157s | byte equality observed |
| variant_many_types.test | 10 | 0.001186s | 0.001062s | 0.001196s | byte equality observed |
| variant_move_assign.test | 10 | 0.001166s | 0.001146s | 0.001179s | byte equality observed |
| variant_move_assign_throw.test | 10 | 0.001166s | 0.001197s | 0.001181s | byte equality observed |
| variant_move_construct.test | 10 | 0.001170s | 0.001179s | 0.001160s | byte equality observed |
| variant_move_construct_throw.test | 10 | 0.001192s | 0.001207s | 0.001168s | byte equality observed |
| variant_ostream_insert.test | 10 | 0.001168s | 0.001210s | 0.001122s | byte equality observed |
| variant_size.test | 10 | 0.001168s | 0.001158s | 0.001105s | byte equality observed |
| variant_special.test | 10 | 0.001229s | 0.001245s | 0.001212s | byte equality observed |
| variant_subset.test | 10 | 0.001186s | 0.001200s | 0.001190s | byte equality observed |
| variant_subset_nx.test | 10 | 0.001140s | 0.001172s | 0.001166s | byte equality observed |
| variant_swap.test | 10 | 0.001158s | 0.001161s | 0.001167s | byte equality observed |
| variant_trivial.test | 10 | 0.001184s | 0.001227s | 0.001160s | byte equality observed |
| variant_value_assign.test | 10 | 0.001147s | 0.001181s | 0.001139s | byte equality observed |
| variant_value_construct.test | 10 | 0.001166s | 0.001191s | 0.001170s | byte equality observed |
| variant_valueless.test | 10 | 0.001185s | 0.001205s | 0.001198s | byte equality observed |
| variant_visit.test | 10 | 0.001164s | 0.001172s | 0.001165s | byte equality observed |
| variant_visit_by_index.test | 10 | 0.001157s | 0.001158s | 0.001156s | byte equality observed |
| variant_visit_derived.test | 10 | 0.001122s | 0.001165s | 0.001147s | byte equality observed |
| variant_visit_r.test | 10 | 0.001114s | 0.001147s | 0.001157s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43620819273).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
