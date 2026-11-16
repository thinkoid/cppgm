# libs/mp11/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| mp11.test | COMPILE | 0.024721 | 0.049763 | 0.071899 | — | — | — |
| complex_h.test | COMPILE | 0.100285 | 0.212184 | 0.270294 | — | — | — |
| mp_size.test | RUN | 0.120035 | 0.702999 | 0.365532 | 0.001081 | 0.000993 | 0.001037 |
| mp_size_2.test | RUN | 0.010399 | 0.024596 | 0.034334 | 0.000437 | 0.000417 | 0.001010 |
| mp_empty.test | RUN | 0.111796 | 0.428829 | 0.341048 | 0.001029 | 0.001129 | 0.001015 |
| mp_empty_2.test | RUN | 0.010355 | 0.024393 | 0.033389 | 0.000473 | 0.000451 | 0.000955 |
| mp_assign.test | RUN | 0.131139 | 0.937993 | 0.468333 | 0.001011 | 0.001136 | 0.000983 |
| mp_assign_2.test | RUN | 0.010172 | 0.025227 | 0.032604 | 0.000484 | 0.000447 | 0.000929 |
| mp_clear.test | RUN | 0.113928 | 0.395058 | 0.345008 | 0.000907 | 0.001052 | 0.000968 |
| mp_clear_2.test | RUN | 0.010739 | 0.025117 | 0.032814 | 0.000458 | 0.000452 | 0.000925 |
| mp_front.test | RUN | 0.121167 | 0.630857 | 0.396262 | 0.001069 | 0.001086 | 0.000942 |
| mp_front_2.test | RUN | 0.010230 | 0.024480 | 0.033178 | 0.000485 | 0.000452 | 0.000986 |
| mp_pop_front.test | RUN | 0.120775 | 0.661107 | 0.395322 | 0.001003 | 0.001089 | 0.001060 |
| mp_pop_front_2.test | RUN | 0.010725 | 0.024797 | 0.034481 | 0.000452 | 0.000427 | 0.000935 |
| mp_second.test | RUN | 0.118141 | 0.416202 | 0.371643 | 0.001005 | 0.001026 | 0.001028 |
| mp_second_2.test | RUN | 0.010255 | 0.023958 | 0.033336 | 0.000468 | 0.000455 | 0.000988 |
| mp_third.test | RUN | 0.115435 | 0.380311 | 0.355477 | 0.001029 | 0.001077 | 0.001036 |
| mp_third_2.test | RUN | 0.010661 | 0.024570 | 0.034868 | 0.000449 | 0.000466 | 0.000950 |
| mp_push_front.test | RUN | 0.158231 | 1.436346 | 0.664164 | 0.001171 | 0.001122 | 0.001014 |
| mp_push_front_2.test | RUN | 0.010732 | 0.024386 | 0.036501 | 0.000498 | 0.000483 | 0.000934 |
| mp_push_back.test | RUN | 0.157882 | 1.446314 | 0.667121 | 0.001082 | 0.001026 | 0.001043 |
| mp_push_back_2.test | RUN | 0.010648 | 0.025550 | 0.035529 | 0.000470 | 0.000433 | 0.000941 |
| mp_rename.test | RUN | 0.148771 | 1.316881 | 0.558477 | 0.001000 | 0.001147 | 0.001061 |
| mp_rename_2.test | RUN | 0.010410 | 0.025006 | 0.033562 | 0.000433 | 0.000447 | 0.000931 |
| mp_append.test | RUN | 0.153148 | 1.506184 | 0.624102 | 0.001089 | 0.001096 | 0.000981 |
| mp_append_2.test | RUN | 0.344885 | 3.389770 | 0.844130 | 0.001060 | 0.001075 | 0.000983 |
| mp_append_3.test | RUN | 0.010864 | 0.024810 | 0.035773 | 0.000450 | 0.000465 | 0.001110 |
| mp_append_sf.test | RUN | 0.109636 | 0.348013 | 0.326725 | 0.001032 | 0.001228 | 0.001035 |
| mp_replace_front.test | RUN | 0.137044 | 1.060574 | 0.491031 | 0.001045 | 0.001096 | 0.000970 |
| mp_replace_front_2.test | RUN | 0.010607 | 0.024741 | 0.034941 | 0.000441 | 0.000449 | 0.001008 |
| mp_replace_second.test | RUN | 0.132106 | 0.672590 | 0.455456 | 0.001021 | 0.001045 | 0.001017 |
| mp_replace_second_2.test | RUN | 0.010459 | 0.024863 | 0.036385 | 0.000471 | 0.000432 | 0.000983 |
| mp_replace_third.test | RUN | 0.126766 | 0.572323 | 0.407179 | 0.001033 | 0.001078 | 0.000989 |
| mp_replace_third_2.test | RUN | 0.010420 | 0.025480 | 0.036112 | 0.000445 | 0.000547 | 0.001059 |
| mp_apply_q.test | RUN | 0.144845 | 1.323732 | 0.555032 | 0.001018 | 0.001063 | 0.001005 |
| mp_apply_q_sf.test | RUN | 0.110958 | 0.368346 | 0.325218 | 0.001063 | 0.001063 | 0.001033 |
| mp_is_list.test | RUN | 0.114521 | 0.451359 | 0.346283 | 0.001007 | 0.001086 | 0.001013 |
| mp_list_c.test | RUN | 0.119482 | 0.531618 | 0.392299 | 0.001064 | 0.001112 | 0.000973 |
| mp_transform_front.test | RUN | 0.136069 | 1.062189 | 0.486277 | 0.001044 | 0.001125 | 0.001000 |
| mp_transform_front_2.test | RUN | 0.010618 | 0.026516 | 0.035629 | 0.000446 | 0.000513 | 0.000993 |
| mp_transform_second.test | RUN | 0.127685 | 0.926394 | 0.452888 | 0.000965 | 0.001081 | 0.001098 |
| mp_transform_second_2.test | RUN | 0.010605 | 0.025556 | 0.035666 | 0.000455 | 0.000518 | 0.000993 |
| mp_transform_third.test | RUN | 0.122409 | 0.696651 | 0.399420 | 0.001028 | 0.001084 | 0.000978 |
| mp_transform_third_2.test | RUN | 0.010448 | 0.025423 | 0.035752 | 0.000458 | 0.000463 | 0.000996 |
| mp_list_v.test | RUN | 0.010672 | 0.025175 | 0.035140 | 0.000443 | 0.000453 | 0.000983 |
| mp_rename_v.test | RUN | 0.010943 | 0.024840 | 0.035774 | 0.000476 | 0.000448 | 0.000974 |
| mp_is_value_list.test | RUN | 0.107943 | 0.271202 | 0.315969 | 0.001071 | 0.001147 | 0.000979 |
| mp_transform.test | RUN | 0.273625 | 2.247210 | 1.084175 | 0.001055 | 0.001064 | 0.001070 |
| mp_transform_2.test | RUN | 0.102772 | 0.231337 | 0.294511 | 0.001065 | 0.001060 | 0.001047 |
| mp_transform_q.test | RUN | 0.271168 | 2.159481 | 1.036120 | 0.001060 | 0.001033 | 0.001087 |
| mp_transform_q_2.test | RUN | 0.277586 | 0.650973 | 1.309491 | 0.000987 | 0.001164 | 0.001044 |
| mp_transform_sf.test | RUN | 0.115255 | 0.372044 | 0.347088 | 0.001058 | 0.001088 | 0.000989 |
| mp_transform_if.test | RUN | 0.145868 | 1.063337 | 0.558616 | 0.001113 | 0.001198 | 0.001007 |
| mp_transform_if_q.test | RUN | 0.146320 | 1.070184 | 0.541275 | 0.001008 | 0.001086 | 0.001075 |
| mp_filter.test | RUN | 0.133157 | 0.613535 | 0.397571 | 0.001080 | 0.001155 | 0.001018 |
| mp_fill.test | RUN | 0.121340 | 0.475729 | 0.387933 | 0.000986 | 0.001178 | 0.001055 |
| mp_fill_2.test | RUN | 0.018415 | 0.039346 | 0.059937 | 0.000465 | 0.000406 | 0.001051 |
| mp_count.test | RUN | 0.243444 | 1.135768 | 0.599278 | 0.000977 | 0.001109 | 0.001009 |
| mp_count_if.test | RUN | 0.250268 | 1.135278 | 0.671742 | 0.001057 | 0.001117 | 0.000952 |
| mp_count_if_q.test | RUN | 0.130093 | 0.759582 | 0.395917 | 0.001007 | 0.001127 | 0.001055 |
| mp_contains.test | RUN | 0.119306 | 0.463783 | 0.358621 | 0.001016 | 0.001167 | 0.001042 |
| mp_starts_with.test | RUN | 0.120389 | 0.446580 | 0.377545 | 0.000975 | 0.001004 | 0.001048 |
| mp_starts_with_sf.test | RUN | 0.117949 | 0.372413 | 0.356679 | 0.001081 | 0.001117 | 0.000968 |
| mp_repeat.test | RUN | 0.180132 | 1.915037 | 0.702421 | 0.001047 | 0.001226 | 0.000945 |
| mp_repeat_2.test | RUN | 0.018380 | 0.039741 | 0.058371 | 0.000429 | 0.000486 | 0.001051 |
| mp_repeat_3.test | RUN | 0.148036 | 0.237640 | 0.335608 | 0.001074 | 0.000973 | 0.001115 |
| mp_product.test | RUN | 0.140006 | 1.140334 | 0.521235 | 0.001100 | 0.001303 | 0.000970 |
| mp_drop.test | RUN | 0.152261 | 1.434718 | 0.593185 | 0.001048 | 0.001024 | 0.001002 |
| mp_drop_2.test | RUN | 0.018102 | 0.038142 | 0.057154 | 0.000472 | 0.000402 | 0.000990 |
| mp_iota.test | RUN | 0.144712 | 1.213561 | 0.512521 | 0.001035 | 0.001080 | 0.000981 |
| mp_iota_2.test | RUN | 0.158521 | 1.474021 | 0.591243 | 0.001007 | 0.001059 | 0.001051 |
| mp_at.test | RUN | 0.125919 | 0.648047 | 0.406577 | 0.001012 | 0.001199 | 0.000979 |
| mp_at_2.test | RUN | 0.018081 | 0.037937 | 0.054672 | 0.000499 | 0.000471 | 0.000931 |
| mp_at_sf.test | RUN | 0.118145 | 0.372478 | 0.340169 | 0.000955 | 0.001116 | 0.001047 |
| mp_take.test | RUN | 0.205441 | 1.886680 | 0.705165 | 0.001094 | 0.001070 | 0.001056 |
| mp_take_2.test | RUN | 0.018608 | 0.038037 | 0.055730 | 0.000500 | 0.000468 | 0.000927 |
| mp_slice.test | RUN | 0.243932 | 1.943203 | 0.924297 | 0.001094 | 0.001100 | 0.000915 |
| mp_slice_2.test | RUN | 0.018565 | 0.038431 | 0.055093 | 0.000464 | 0.000409 | 0.000967 |
| mp_replace.test | RUN | 0.149301 | 1.003167 | 0.577858 | 0.001113 | 0.001091 | 0.000954 |
| mp_replace_if.test | RUN | 0.140817 | 0.847702 | 0.519664 | 0.001033 | 0.001076 | 0.001097 |
| mp_replace_if_q.test | RUN | 0.141171 | 0.845937 | 0.519162 | 0.000987 | 0.001241 | 0.001027 |
| mp_copy_if.test | RUN | 0.142910 | 1.189370 | 0.492227 | 0.001046 | 0.001061 | 0.000973 |
| mp_copy_if_q.test | RUN | 0.143782 | 1.175124 | 0.497241 | 0.001051 | 0.001190 | 0.001070 |
| mp_remove.test | RUN | 0.142373 | 0.807308 | 0.514912 | 0.000952 | 0.001294 | 0.000990 |
| mp_remove_if.test | RUN | 0.148958 | 1.251025 | 0.532050 | 0.001096 | 0.001044 | 0.000995 |
| mp_remove_if_q.test | RUN | 0.149268 | 1.235295 | 0.536224 | 0.001059 | 0.001075 | 0.001008 |
| mp_partition.test | RUN | 0.148592 | 1.177619 | 0.570189 | 0.001028 | 0.001041 | 0.000960 |
| mp_partition_q.test | RUN | 0.147915 | 1.182182 | 0.574617 | 0.000944 | 0.001196 | 0.000971 |
| mp_sort.test | RUN | 0.141463 | 0.832655 | 0.504503 | 0.000989 | 0.001032 | 0.000965 |
| mp_sort_q.test | RUN | 0.139801 | 0.840788 | 0.507344 | 0.000914 | 0.001111 | 0.000966 |
| mp_find.test | RUN | 0.138140 | 0.909595 | 0.427716 | 0.000997 | 0.001125 | 0.000998 |
| mp_find_if.test | RUN | 0.129536 | 0.839813 | 0.405242 | 0.001047 | 0.001105 | 0.001001 |
| mp_find_if_q.test | RUN | 0.142236 | 0.918350 | 0.480680 | 0.001312 | 0.001080 | 0.001170 |
| mp_reverse.test | RUN | 0.302183 | 2.545436 | 1.013328 | 0.001063 | 0.001020 | 0.000996 |
| mp_fold.test | RUN | 0.524631 | 1.950027 | 2.661170 | 0.000981 | 0.001066 | 0.001105 |
| mp_fold_q.test | RUN | 0.133609 | 0.837363 | 0.462492 | 0.001018 | 0.001251 | 0.001009 |
| mp_fold_q_sf.test | RUN | 0.117314 | 0.379577 | 0.349704 | 0.001081 | 0.001115 | 0.001074 |
| mp_reverse_fold.test | RUN | 0.242198 | 1.897314 | 0.707301 | 0.001051 | 0.001103 | 0.001157 |
| mp_reverse_fold_q.test | RUN | 0.137012 | 1.024189 | 0.503607 | 0.001058 | 0.001103 | 0.001053 |
| mp_unique.test | RUN | 0.138599 | 0.917347 | 0.487430 | 0.001091 | 0.000863 | 0.001091 |
| mp_unique_if.test | RUN | 0.254712 | 1.976175 | 0.798251 | 0.001070 | 0.001012 | 0.000958 |
| mp_unique_if_q.test | RUN | 0.223668 | 1.925037 | 0.649883 | 0.001068 | 0.001129 | 0.000979 |
| mp_all_of.test | RUN | 0.343350 | 1.001250 | 0.821882 | 0.001022 | 0.001122 | 0.000909 |
| mp_all_of_q.test | RUN | 0.120514 | 0.452772 | 0.382383 | 0.001048 | 0.001137 | 0.000952 |
| mp_any_of.test | RUN | 0.339846 | 1.051061 | 0.836765 | 0.000969 | 0.001072 | 0.001073 |
| mp_any_of_q.test | RUN | 0.119090 | 0.449056 | 0.372227 | 0.001084 | 0.001178 | 0.001025 |
| mp_none_of.test | RUN | 0.340293 | 1.061386 | 0.831195 | 0.001025 | 0.001135 | 0.001118 |
| mp_none_of_q.test | RUN | 0.120022 | 0.444635 | 0.366826 | 0.001039 | 0.001090 | 0.001101 |
| mp_replace_at.test | RUN | 0.147248 | 0.948545 | 0.562622 | 0.000961 | 0.001062 | 0.000978 |
| mp_replace_at_c.test | RUN | 0.148438 | 0.944427 | 0.564626 | 0.001076 | 0.001073 | 0.001062 |
| mp_for_each.test | RUN | 0.138824 | 0.586502 | 0.553547 | 0.000958 | 0.001054 | 0.000914 |
| mp_insert.test | RUN | 0.227700 | 1.938159 | 0.831240 | 0.001103 | 0.001116 | 0.001010 |
| mp_insert_2.test | RUN | 0.018229 | 0.040144 | 0.057631 | 0.000445 | 0.000462 | 0.000934 |
| mp_erase.test | RUN | 0.250110 | 2.073763 | 0.954266 | 0.001063 | 0.001237 | 0.000974 |
| mp_erase_2.test | RUN | 0.018791 | 0.039605 | 0.056126 | 0.000447 | 0.000479 | 0.000960 |
| mp_with_index.test | RUN | 0.317525 | 4.016987 | 2.088297 | 0.001430 | 0.001466 | 0.001317 |
| mp_with_index_cx.test | RUN | 0.002342 | 0.012637 | 0.018278 | 0.000477 | 0.000515 | 0.000987 |
| mp_from_sequence.test | RUN | 0.146086 | 1.072803 | 0.527774 | 0.001018 | 0.001230 | 0.000985 |
| mp_from_sequence_2.test | RUN | 0.153412 | 1.245811 | 0.585666 | 0.001042 | 0.001093 | 0.001012 |
| mp_from_sequence_3.test | RUN | 0.127474 | 0.544842 | 0.408507 | 0.001152 | 0.001093 | 0.000945 |
| mp_min_element.test | RUN | 0.121798 | 0.491587 | 0.375850 | 0.001065 | 0.001150 | 0.000954 |
| mp_min_element_2.test | RUN | 0.018659 | 0.040190 | 0.055631 | 0.000491 | 0.000536 | 0.001008 |
| mp_min_element_q.test | RUN | 0.124911 | 0.491148 | 0.379171 | 0.001042 | 0.001116 | 0.000994 |
| mp_min_element_q_2.test | RUN | 0.018347 | 0.039714 | 0.055532 | 0.000461 | 0.000429 | 0.001027 |
| mp_max_element.test | RUN | 0.121295 | 0.487083 | 0.374889 | 0.000988 | 0.001080 | 0.000988 |
| mp_max_element_2.test | RUN | 0.018291 | 0.039635 | 0.056698 | 0.000483 | 0.000448 | 0.001071 |
| mp_max_element_q.test | RUN | 0.121047 | 0.492635 | 0.380219 | 0.000992 | 0.001063 | 0.000937 |
| mp_max_element_q_2.test | RUN | 0.018450 | 0.038099 | 0.060005 | 0.000451 | 0.000476 | 0.000938 |
| mp_nth_element.test | RUN | 0.136554 | 0.703223 | 0.468752 | 0.001076 | 0.000968 | 0.001104 |
| mp_nth_element_q.test | RUN | 0.136018 | 0.692111 | 0.460073 | 0.001016 | 0.001134 | 0.001176 |
| mp_back.test | RUN | 0.132720 | 0.570758 | 0.436902 | 0.001042 | 0.001077 | 0.001070 |
| mp_back_2.test | RUN | 0.018320 | 0.038907 | 0.056360 | 0.000395 | 0.000422 | 0.001039 |
| mp_pop_back.test | RUN | 0.379502 | 3.960757 | 0.970799 | 0.001081 | 0.001200 | 0.001030 |
| mp_pop_back_2.test | RUN | 0.018335 | 0.038306 | 0.056168 | 0.000474 | 0.000466 | 0.000971 |
| mp_flatten.test | RUN | 0.158502 | 1.381933 | 0.631347 | 0.001002 | 0.001095 | 0.001021 |
| mp_rotate_left.test | RUN | 0.157232 | 1.490166 | 0.619595 | 0.001076 | 0.001053 | 0.000996 |
| mp_rotate_right.test | RUN | 0.157255 | 1.521854 | 0.623392 | 0.001022 | 0.001093 | 0.001082 |
| mp_power_set.test | RUN | 0.159601 | 1.396547 | 0.640032 | 0.000935 | 0.001215 | 0.001055 |
| mp_partial_sum.test | RUN | 0.211825 | 1.885616 | 0.730704 | 0.000923 | 0.001144 | 0.001070 |
| mp_iterate.test | RUN | 0.136713 | 0.547632 | 0.488963 | 0.001087 | 0.001136 | 0.001082 |
| mp_pairwise_fold.test | RUN | 0.156951 | 1.304440 | 0.657921 | 0.001022 | 0.001108 | 0.001097 |
| mp_pairwise_fold_q.test | RUN | 0.118782 | 0.382165 | 0.366278 | 0.001054 | 0.001068 | 0.001014 |
| mp_sliding_fold.test | RUN | 0.304856 | 2.541209 | 1.237592 | 0.001121 | 0.001054 | 0.000968 |
| mp_sliding_fold_q.test | RUN | 0.303486 | 2.538238 | 1.216770 | 0.001013 | 0.001093 | 0.000943 |
| mp_intersperse.test | RUN | 0.148310 | 0.917762 | 0.555366 | 0.001093 | 0.001211 | 0.000983 |
| mp_split.test | RUN | 0.214697 | 1.811379 | 0.786691 | 0.001051 | 0.001208 | 0.000965 |
| mp_join.test | RUN | 0.169151 | 1.524757 | 0.707816 | 0.001075 | 0.001033 | 0.000984 |
| integral.test | RUN | 0.124792 | 0.675131 | 0.416785 | 0.001043 | 0.001120 | 0.001039 |
| mp_value.test | RUN | 0.008202 | 0.022372 | 0.028999 | 0.000407 | 0.000572 | 0.001016 |
| mp_identity.test | RUN | 0.118457 | 0.617767 | 0.390954 | 0.001008 | 0.001115 | 0.001009 |
| mp_inherit.test | RUN | 0.112797 | 0.420533 | 0.356742 | 0.000956 | 0.001151 | 0.001034 |
| mp_if.test | RUN | 0.114286 | 0.491843 | 0.378069 | 0.001023 | 0.001062 | 0.001030 |
| mp_if_sf.test | RUN | 0.108153 | 0.353033 | 0.324320 | 0.000952 | 0.001112 | 0.001012 |
| mp_eval_if.test | RUN | 0.116044 | 0.526831 | 0.369261 | 0.000953 | 0.001099 | 0.000932 |
| mp_eval_if_sf.test | RUN | 0.111297 | 0.363960 | 0.325399 | 0.001145 | 0.001122 | 0.001017 |
| mp_valid.test | RUN | 0.113133 | 0.370121 | 0.331297 | 0.000992 | 0.001054 | 0.000944 |
| mp_defer.test | RUN | 0.121601 | 0.634843 | 0.407530 | 0.001083 | 0.001033 | 0.000979 |
| mp_quote.test | RUN | 0.124095 | 0.638646 | 0.423598 | 0.000958 | 0.001071 | 0.001060 |
| mp_invoke_q.test | RUN | 0.132612 | 0.843359 | 0.476735 | 0.001039 | 0.001012 | 0.000995 |
| mp_invoke_q_sf.test | RUN | 0.110789 | 0.363890 | 0.323303 | 0.001071 | 0.001078 | 0.000960 |
| mp_quote_trait.test | RUN | 0.120951 | 0.710123 | 0.409046 | 0.001104 | 0.001070 | 0.000922 |
| mp_cond.test | RUN | 0.114566 | 0.416463 | 0.355899 | 0.001006 | 0.001102 | 0.001017 |
| mp_cond_sf.test | RUN | 0.108429 | 0.369147 | 0.330919 | 0.001076 | 0.001015 | 0.000965 |
| mp_not_fn.test | RUN | 0.108387 | 0.358698 | 0.320321 | 0.001015 | 0.001042 | 0.001086 |
| mp_eval_if_not.test | RUN | 0.117275 | 0.523044 | 0.368221 | 0.001038 | 0.001166 | 0.000996 |
| mp_eval_or.test | RUN | 0.110800 | 0.267578 | 0.338442 | 0.000995 | 0.001001 | 0.001014 |
| mp_compose.test | RUN | 0.127602 | 0.869687 | 0.448318 | 0.001012 | 0.001141 | 0.001002 |
| mp_valid_and_true.test | RUN | 0.113870 | 0.448303 | 0.346202 | 0.001005 | 0.001082 | 0.001006 |
| mp_compose_sf.test | COMPILE | 0.026572 | 0.048437 | 0.077998 | — | — | — |
| integer_sequence.test | RUN | 0.139391 | 0.868936 | 0.513794 | 0.000957 | 0.001158 | 0.001240 |
| tuple_for_each.test | RUN | 0.113222 | 0.304586 | 0.352784 | 0.000985 | 0.001064 | 0.000968 |
| tuple_for_each_cx.test | COMPILE | 0.021203 | 0.044918 | 0.065418 | — | — | — |
| tuple_apply.test | RUN | 0.112550 | 0.299631 | 0.354650 | 0.001053 | 0.001160 | 0.001231 |
| tuple_apply_cx.test | COMPILE | 0.030616 | 0.060212 | 0.087149 | — | — | — |
| construct_from_tuple.test | RUN | 0.113716 | 0.339933 | 0.357800 | 0.001071 | 0.001024 | 0.000996 |
| construct_from_tuple_cx.test | COMPILE | 0.031039 | 0.062130 | 0.082754 | — | — | — |
| tuple_transform.test | RUN | 0.181264 | 0.657643 | 0.687894 | 0.001001 | 0.001093 | 0.001019 |
| tuple_transform_2.test | RUN | 0.155612 | 0.478894 | 0.608374 | 0.001031 | 0.001119 | 0.001061 |
| tuple_transform_cx.test | COMPILE | 0.027002 | 0.060632 | 0.081376 | — | — | — |
| mp_set_contains.test | RUN | 0.115186 | 0.441601 | 0.352431 | 0.001063 | 0.001156 | 0.001094 |
| mp_set_push_back.test | RUN | 0.157118 | 1.393820 | 0.631020 | 0.001021 | 0.000989 | 0.001010 |
| mp_set_push_front.test | RUN | 0.205800 | 1.694228 | 0.738393 | 0.001066 | 0.001174 | 0.000942 |
| mp_is_set.test | RUN | 0.120624 | 0.441362 | 0.362779 | 0.001049 | 0.001031 | 0.001044 |
| mp_set_union.test | RUN | 0.149110 | 1.191243 | 0.601077 | 0.000947 | 0.001053 | 0.000997 |
| mp_set_union_sf.test | RUN | 0.109622 | 0.351454 | 0.333701 | 0.001054 | 0.001080 | 0.000959 |
| mp_set_difference.test | RUN | 0.135346 | 0.931404 | 0.503866 | 0.001008 | 0.001176 | 0.000955 |
| mp_set_difference_sf.test | RUN | 0.111695 | 0.350813 | 0.330101 | 0.000992 | 0.001143 | 0.001026 |
| mp_set_intersection.test | RUN | 0.140568 | 0.934231 | 0.497929 | 0.000990 | 0.001205 | 0.000934 |
| mp_set_intersection_sf.test | RUN | 0.112547 | 0.354430 | 0.327256 | 0.000942 | 0.001087 | 0.001016 |
| mp_all.test | RUN | 0.117799 | 0.446964 | 0.368808 | 0.001012 | 0.001136 | 0.000926 |
| mp_all_2.test | RUN | 0.342755 | 0.956064 | 0.830402 | 0.001085 | 0.001044 | 0.001010 |
| mp_and.test | RUN | 0.117213 | 0.440345 | 0.356552 | 0.001128 | 0.001139 | 0.001119 |
| mp_any.test | RUN | 0.120290 | 0.446121 | 0.367798 | 0.001075 | 0.001016 | 0.001000 |
| mp_any_2.test | RUN | 0.342695 | 0.963241 | 0.825824 | 0.001009 | 0.001152 | 0.001073 |
| mp_or.test | RUN | 0.118998 | 0.448011 | 0.374087 | 0.001142 | 0.001058 | 0.000997 |
| mp_same.test | RUN | 0.232551 | 0.744972 | 0.563176 | 0.001070 | 0.001090 | 0.001040 |
| mp_plus.test | RUN | 0.127096 | 0.536984 | 0.412529 | 0.001001 | 0.001032 | 0.001011 |
| mp_less.test | RUN | 0.116061 | 0.449195 | 0.349828 | 0.001121 | 0.000943 | 0.001056 |
| mp_min.test | RUN | 0.115332 | 0.408135 | 0.342062 | 0.001068 | 0.001071 | 0.001086 |
| mp_max.test | RUN | 0.118583 | 0.448261 | 0.360972 | 0.001027 | 0.001050 | 0.000973 |
| mp_similar.test | RUN | 0.115980 | 0.441787 | 0.351375 | 0.001017 | 0.001103 | 0.000980 |
| mp_map_find.test | RUN | 0.135314 | 0.822462 | 0.483492 | 0.000981 | 0.001148 | 0.001025 |
| mp_map_find_2.test | RUN | 0.125604 | 0.303832 | 0.406128 | 0.000993 | 0.001113 | 0.001032 |
| mp_map_find_3.test | RUN | 0.127094 | 0.305798 | 0.403723 | 0.000929 | 0.001036 | 0.000978 |
| mp_map_find_4.test | RUN | 0.118687 | 0.285417 | 0.364026 | 0.000959 | 0.001056 | 0.000991 |
| mp_map_contains.test | RUN | 0.120478 | 0.447025 | 0.374980 | 0.000994 | 0.001278 | 0.001192 |
| mp_map_insert.test | RUN | 0.164120 | 1.572867 | 0.694502 | 0.001144 | 0.001154 | 0.001054 |
| mp_map_replace.test | RUN | 0.220831 | 1.794505 | 0.815248 | 0.001110 | 0.001077 | 0.001050 |
| mp_map_erase.test | RUN | 0.158633 | 1.326133 | 0.673252 | 0.001025 | 0.001105 | 0.000972 |
| mp_map_update.test | RUN | 0.136298 | 0.857521 | 0.503409 | 0.001061 | 0.001132 | 0.001010 |
| mp_map_update_q.test | RUN | 0.136842 | 0.849398 | 0.498371 | 0.001081 | 0.001133 | 0.001013 |
| mp_map_keys.test | RUN | 0.135480 | 0.762200 | 0.487238 | 0.001014 | 0.001157 | 0.001007 |
| mp_is_map.test | RUN | 0.121397 | 0.453228 | 0.378830 | 0.001017 | 0.001040 | 0.000954 |
| mp_bind.test | RUN | 0.152120 | 1.398809 | 0.587156 | 0.000979 | 0.001097 | 0.001005 |
| mp_bind_q.test | RUN | 0.135051 | 0.864291 | 0.471592 | 0.001005 | 0.001043 | 0.000996 |
| mp_bind_front.test | RUN | 0.133769 | 0.937844 | 0.457285 | 0.001067 | 0.001063 | 0.001000 |
| mp_bind_back.test | RUN | 0.133981 | 0.932271 | 0.469378 | 0.001012 | 0.001074 | 0.001068 |
| mp_lambda.test | RUN | 0.320375 | 3.041342 | 1.256401 | 0.001095 | 0.001331 | 0.001263 |
| mpl.test | RUN | 0.282545 | 0.720335 | 0.985768 | 0.001077 | 0.001039 | 0.001027 |
| mpl_list.test | RUN | 0.151962 | 0.557442 | 0.443744 | 0.000917 | 0.000904 | 0.001087 |
| mpl_tuple.test | RUN | 0.155365 | 0.564239 | 0.447818 | 0.001057 | 0.001118 | 0.001037 |
| version.test | RUN | 0.074263 | 0.203054 | 0.223863 | 0.001079 | 0.001081 | 0.000951 |
| mp11_version.test | RUN | 0.090664 | 0.234620 | 0.258208 | 0.001126 | 0.000972 | 0.001066 |
| list_version.test | RUN | 0.075820 | 0.195415 | 0.225053 | 0.000982 | 0.001100 | 0.001104 |
| algorithm_version.test | RUN | 0.083722 | 0.207480 | 0.242084 | 0.000996 | 0.001054 | 0.000986 |
| integral_version.test | RUN | 0.072774 | 0.190227 | 0.220564 | 0.001036 | 0.000982 | 0.000972 |
| utility_version.test | RUN | 0.075200 | 0.190811 | 0.227106 | 0.000968 | 0.001042 | 0.001041 |
| function_version.test | RUN | 0.076347 | 0.194098 | 0.228542 | 0.001034 | 0.001056 | 0.001040 |
| map_version.test | RUN | 0.083081 | 0.206852 | 0.241514 | 0.000986 | 0.001072 | 0.000904 |
| set_version.test | RUN | 0.076931 | 0.193874 | 0.227612 | 0.001064 | 0.000983 | 0.000952 |
| bind_version.test | RUN | 0.084631 | 0.205729 | 0.239872 | 0.000934 | 0.000961 | 0.000951 |
| integer_sequence_version.test | RUN | 0.075027 | 0.189000 | 0.219848 | 0.000900 | 0.001066 | 0.000935 |
| tuple_version.test | RUN | 0.083520 | 0.204428 | 0.238446 | 0.000965 | 0.001027 | 0.001080 |
| mpl_version.test | RUN | 0.089480 | 0.214156 | 0.253281 | 0.001005 | 0.001087 | 0.000995 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 1.004× | 1.004×, 1.004× | 1.000× |
| clang | 1.087× | 1.087×, 1.087× | 1.006× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1364 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/43947487361).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| algorithm_version.test | 10 | 0.000938s | 0.000937s | 0.000944s | byte equality observed |
| bind_version.test | 10 | 0.000937s | 0.000938s | 0.000950s | byte equality observed |
| construct_from_tuple.test | 10 | 0.000951s | 0.000951s | 0.000952s | byte equality observed |
| function_version.test | 10 | 0.000940s | 0.000942s | 0.000938s | byte equality observed |
| integer_sequence.test | 10 | 0.000943s | 0.000947s | 0.000939s | byte equality observed |
| integer_sequence_version.test | 10 | 0.000939s | 0.000938s | 0.000937s | byte equality observed |
| integral.test | 10 | 0.000935s | 0.000958s | 0.000947s | byte equality observed |
| integral_version.test | 10 | 0.000940s | 0.000945s | 0.000940s | byte equality observed |
| list_version.test | 10 | 0.000935s | 0.000947s | 0.000949s | byte equality observed |
| map_version.test | 10 | 0.000945s | 0.000938s | 0.000936s | byte equality observed |
| mp11_version.test | 10 | 0.000936s | 0.000954s | 0.000946s | byte equality observed |
| mp_all.test | 10 | 0.000934s | 0.000948s | 0.000940s | byte equality observed |
| mp_all_2.test | 10 | 0.000945s | 0.000960s | 0.000945s | byte equality observed |
| mp_all_of.test | 10 | 0.000934s | 0.000951s | 0.000940s | byte equality observed |
| mp_all_of_q.test | 10 | 0.000943s | 0.000946s | 0.000940s | byte equality observed |
| mp_and.test | 10 | 0.000935s | 0.000948s | 0.000950s | byte equality observed |
| mp_any.test | 10 | 0.000942s | 0.000953s | 0.000939s | byte equality observed |
| mp_any_2.test | 10 | 0.000937s | 0.000956s | 0.000939s | byte equality observed |
| mp_any_of.test | 10 | 0.000943s | 0.000966s | 0.000937s | byte equality observed |
| mp_any_of_q.test | 10 | 0.000931s | 0.000936s | 0.000946s | byte equality observed |
| mp_append.test | 10 | 0.000933s | 0.000948s | 0.000941s | byte equality observed |
| mp_append_2.test | 10 | 0.000961s | 0.000946s | 0.000940s | byte equality observed |
| mp_append_3.test | 10 | 0.000447s | 0.000450s | 0.000919s | byte equality observed |
| mp_append_sf.test | 10 | 0.000929s | 0.000934s | 0.000933s | byte equality observed |
| mp_apply_q.test | 10 | 0.000937s | 0.000949s | 0.000926s | byte equality observed |
| mp_apply_q_sf.test | 10 | 0.000936s | 0.000942s | 0.000933s | byte equality observed |
| mp_assign.test | 10 | 0.000937s | 0.000956s | 0.000937s | byte equality observed |
| mp_assign_2.test | 10 | 0.000437s | 0.000437s | 0.000928s | byte equality observed |
| mp_at.test | 10 | 0.000934s | 0.000941s | 0.000945s | byte equality observed |
| mp_at_2.test | 10 | 0.000443s | 0.000443s | 0.000926s | byte equality observed |
| mp_at_sf.test | 10 | 0.000935s | 0.000939s | 0.000946s | byte equality observed |
| mp_back.test | 10 | 0.000944s | 0.000944s | 0.000938s | byte equality observed |
| mp_back_2.test | 10 | 0.000451s | 0.000450s | 0.000916s | byte equality observed |
| mp_bind.test | 10 | 0.000938s | 0.000962s | 0.000927s | byte equality observed |
| mp_bind_back.test | 10 | 0.000943s | 0.000946s | 0.000940s | byte equality observed |
| mp_bind_front.test | 10 | 0.000940s | 0.000957s | 0.000943s | byte equality observed |
| mp_bind_q.test | 10 | 0.000937s | 0.000957s | 0.000937s | byte equality observed |
| mp_clear.test | 10 | 0.000938s | 0.000945s | 0.000941s | byte equality observed |
| mp_clear_2.test | 10 | 0.000447s | 0.000435s | 0.000915s | byte equality observed |
| mp_compose.test | 10 | 0.000935s | 0.000959s | 0.000932s | byte equality observed |
| mp_cond.test | 10 | 0.000937s | 0.000948s | 0.000934s | byte equality observed |
| mp_cond_sf.test | 10 | 0.000943s | 0.000948s | 0.000936s | byte equality observed |
| mp_contains.test | 10 | 0.000940s | 0.000953s | 0.000931s | byte equality observed |
| mp_copy_if.test | 10 | 0.000940s | 0.000960s | 0.000938s | byte equality observed |
| mp_copy_if_q.test | 10 | 0.000942s | 0.000944s | 0.000944s | byte equality observed |
| mp_count.test | 10 | 0.000941s | 0.000965s | 0.000945s | byte equality observed |
| mp_count_if.test | 10 | 0.000941s | 0.000952s | 0.000933s | byte equality observed |
| mp_count_if_q.test | 10 | 0.000935s | 0.000948s | 0.000941s | byte equality observed |
| mp_defer.test | 10 | 0.000935s | 0.000940s | 0.000943s | byte equality observed |
| mp_drop.test | 10 | 0.000946s | 0.000937s | 0.000938s | byte equality observed |
| mp_drop_2.test | 10 | 0.000446s | 0.000437s | 0.000924s | byte equality observed |
| mp_empty.test | 10 | 0.000930s | 0.000946s | 0.000939s | byte equality observed |
| mp_empty_2.test | 10 | 0.000442s | 0.000438s | 0.000925s | byte equality observed |
| mp_erase.test | 10 | 0.000953s | 0.000959s | 0.000939s | byte equality observed |
| mp_erase_2.test | 10 | 0.000447s | 0.000436s | 0.000915s | byte equality observed |
| mp_eval_if.test | 10 | 0.000939s | 0.000940s | 0.000935s | byte equality observed |
| mp_eval_if_not.test | 10 | 0.000939s | 0.000941s | 0.000928s | byte equality observed |
| mp_eval_if_sf.test | 10 | 0.000945s | 0.000944s | 0.000925s | byte equality observed |
| mp_eval_or.test | 10 | 0.000932s | 0.000948s | 0.000943s | byte equality observed |
| mp_fill.test | 10 | 0.000938s | 0.000942s | 0.000946s | byte equality observed |
| mp_fill_2.test | 10 | 0.000446s | 0.000441s | 0.000924s | byte equality observed |
| mp_filter.test | 10 | 0.000944s | 0.000938s | 0.000949s | byte equality observed |
| mp_find.test | 10 | 0.000943s | 0.000966s | 0.000931s | byte equality observed |
| mp_find_if.test | 10 | 0.000946s | 0.000956s | 0.000927s | byte equality observed |
| mp_find_if_q.test | 10 | 0.000939s | 0.000946s | 0.000935s | byte equality observed |
| mp_flatten.test | 10 | 0.000940s | 0.000952s | 0.000931s | byte equality observed |
| mp_fold.test | 10 | 0.000970s | 0.000958s | 0.000939s | byte equality observed |
| mp_fold_q.test | 10 | 0.000939s | 0.000951s | 0.000935s | byte equality observed |
| mp_fold_q_sf.test | 10 | 0.000945s | 0.000949s | 0.000933s | byte equality observed |
| mp_for_each.test | 10 | 0.000944s | 0.000948s | 0.000940s | byte equality observed |
| mp_from_sequence.test | 10 | 0.000951s | 0.000954s | 0.000935s | byte equality observed |
| mp_from_sequence_2.test | 10 | 0.000933s | 0.000958s | 0.000948s | byte equality observed |
| mp_from_sequence_3.test | 10 | 0.000940s | 0.000953s | 0.000939s | byte equality observed |
| mp_front.test | 10 | 0.000937s | 0.000951s | 0.000932s | byte equality observed |
| mp_front_2.test | 10 | 0.000450s | 0.000466s | 0.000918s | byte equality observed |
| mp_identity.test | 10 | 0.000931s | 0.000942s | 0.000947s | byte equality observed |
| mp_if.test | 10 | 0.000944s | 0.000948s | 0.000945s | byte equality observed |
| mp_if_sf.test | 10 | 0.000942s | 0.000945s | 0.000942s | byte equality observed |
| mp_inherit.test | 10 | 0.000937s | 0.000933s | 0.000941s | byte equality observed |
| mp_insert.test | 10 | 0.000962s | 0.000948s | 0.000952s | byte equality observed |
| mp_insert_2.test | 10 | 0.000449s | 0.000452s | 0.000919s | byte equality observed |
| mp_intersperse.test | 10 | 0.000941s | 0.000946s | 0.000937s | byte equality observed |
| mp_invoke_q.test | 10 | 0.000930s | 0.000934s | 0.000939s | byte equality observed |
| mp_invoke_q_sf.test | 10 | 0.000946s | 0.000943s | 0.000933s | byte equality observed |
| mp_iota.test | 10 | 0.000939s | 0.000944s | 0.000951s | byte equality observed |
| mp_iota_2.test | 10 | 0.000949s | 0.000951s | 0.000950s | byte equality observed |
| mp_is_list.test | 10 | 0.000947s | 0.000944s | 0.000943s | byte equality observed |
| mp_is_map.test | 10 | 0.000948s | 0.000948s | 0.000940s | byte equality observed |
| mp_is_set.test | 10 | 0.000955s | 0.000962s | 0.000947s | byte equality observed |
| mp_is_value_list.test | 10 | 0.000947s | 0.000932s | 0.000940s | byte equality observed |
| mp_iterate.test | 10 | 0.000946s | 0.000944s | 0.000946s | byte equality observed |
| mp_join.test | 10 | 0.000952s | 0.000948s | 0.000932s | byte equality observed |
| mp_lambda.test | 10 | 0.000971s | 0.000960s | 0.000943s | byte equality observed |
| mp_less.test | 10 | 0.000936s | 0.000937s | 0.000936s | byte equality observed |
| mp_list_c.test | 10 | 0.000944s | 0.000939s | 0.000937s | byte equality observed |
| mp_list_v.test | 10 | 0.000448s | 0.000447s | 0.000931s | byte equality observed |
| mp_map_contains.test | 10 | 0.000947s | 0.000956s | 0.000940s | byte equality observed |
| mp_map_erase.test | 10 | 0.000941s | 0.000950s | 0.000937s | byte equality observed |
| mp_map_find.test | 10 | 0.000942s | 0.000950s | 0.000954s | byte equality observed |
| mp_map_find_2.test | 10 | 0.000954s | 0.000947s | 0.000932s | byte equality observed |
| mp_map_find_3.test | 10 | 0.000955s | 0.000946s | 0.000941s | byte equality observed |
| mp_map_find_4.test | 10 | 0.000941s | 0.000947s | 0.000948s | byte equality observed |
| mp_map_insert.test | 10 | 0.000944s | 0.000959s | 0.000940s | byte equality observed |
| mp_map_keys.test | 10 | 0.000951s | 0.000962s | 0.000936s | byte equality observed |
| mp_map_replace.test | 10 | 0.000958s | 0.000961s | 0.000940s | byte equality observed |
| mp_map_update.test | 10 | 0.000940s | 0.000951s | 0.000936s | byte equality observed |
| mp_map_update_q.test | 10 | 0.000937s | 0.000950s | 0.000940s | byte equality observed |
| mp_max.test | 10 | 0.000941s | 0.000940s | 0.000939s | byte equality observed |
| mp_max_element.test | 10 | 0.000936s | 0.000934s | 0.000942s | byte equality observed |
| mp_max_element_2.test | 10 | 0.000448s | 0.000447s | 0.000936s | byte equality observed |
| mp_max_element_q.test | 10 | 0.000928s | 0.000948s | 0.000936s | byte equality observed |
| mp_max_element_q_2.test | 10 | 0.000440s | 0.000437s | 0.000916s | byte equality observed |
| mp_min.test | 10 | 0.000933s | 0.000942s | 0.000940s | byte equality observed |
| mp_min_element.test | 10 | 0.000937s | 0.000937s | 0.000931s | byte equality observed |
| mp_min_element_2.test | 10 | 0.000434s | 0.000438s | 0.000920s | byte equality observed |
| mp_min_element_q.test | 10 | 0.000932s | 0.000938s | 0.000927s | byte equality observed |
| mp_min_element_q_2.test | 10 | 0.000441s | 0.000439s | 0.000921s | byte equality observed |
| mp_none_of.test | 10 | 0.000938s | 0.000947s | 0.000952s | byte equality observed |
| mp_none_of_q.test | 10 | 0.000941s | 0.000951s | 0.000942s | byte equality observed |
| mp_not_fn.test | 10 | 0.000944s | 0.000950s | 0.000946s | byte equality observed |
| mp_nth_element.test | 10 | 0.000944s | 0.000954s | 0.000935s | byte equality observed |
| mp_nth_element_q.test | 10 | 0.000939s | 0.000957s | 0.000948s | byte equality observed |
| mp_or.test | 10 | 0.000944s | 0.000948s | 0.000938s | byte equality observed |
| mp_pairwise_fold.test | 10 | 0.000941s | 0.000961s | 0.000954s | byte equality observed |
| mp_pairwise_fold_q.test | 10 | 0.000945s | 0.000958s | 0.000939s | byte equality observed |
| mp_partial_sum.test | 10 | 0.000962s | 0.000953s | 0.000943s | byte equality observed |
| mp_partition.test | 10 | 0.000949s | 0.000947s | 0.000951s | byte equality observed |
| mp_partition_q.test | 10 | 0.000939s | 0.000954s | 0.000947s | byte equality observed |
| mp_plus.test | 10 | 0.000942s | 0.000951s | 0.000949s | byte equality observed |
| mp_pop_back.test | 10 | 0.000970s | 0.000953s | 0.000938s | byte equality observed |
| mp_pop_back_2.test | 10 | 0.000449s | 0.000446s | 0.000922s | byte equality observed |
| mp_pop_front.test | 10 | 0.000942s | 0.000946s | 0.000939s | byte equality observed |
| mp_pop_front_2.test | 10 | 0.000446s | 0.000445s | 0.000934s | byte equality observed |
| mp_power_set.test | 10 | 0.000935s | 0.000950s | 0.000935s | byte equality observed |
| mp_product.test | 10 | 0.000934s | 0.000937s | 0.000939s | byte equality observed |
| mp_push_back.test | 10 | 0.000941s | 0.000941s | 0.000936s | byte equality observed |
| mp_push_back_2.test | 10 | 0.000449s | 0.000433s | 0.000939s | byte equality observed |
| mp_push_front.test | 10 | 0.000942s | 0.000948s | 0.000946s | byte equality observed |
| mp_push_front_2.test | 10 | 0.000447s | 0.000451s | 0.000934s | byte equality observed |
| mp_quote.test | 10 | 0.000937s | 0.000960s | 0.000936s | byte equality observed |
| mp_quote_trait.test | 10 | 0.000944s | 0.000946s | 0.000942s | byte equality observed |
| mp_remove.test | 10 | 0.000943s | 0.000943s | 0.000948s | byte equality observed |
| mp_remove_if.test | 10 | 0.000944s | 0.000947s | 0.000941s | byte equality observed |
| mp_remove_if_q.test | 10 | 0.000931s | 0.000955s | 0.000937s | byte equality observed |
| mp_rename.test | 10 | 0.000937s | 0.000954s | 0.000929s | byte equality observed |
| mp_rename_2.test | 10 | 0.000447s | 0.000444s | 0.000922s | byte equality observed |
| mp_rename_v.test | 10 | 0.000451s | 0.000440s | 0.000921s | byte equality observed |
| mp_repeat.test | 10 | 0.000951s | 0.000949s | 0.000952s | byte equality observed |
| mp_repeat_2.test | 10 | 0.000447s | 0.000437s | 0.000930s | byte equality observed |
| mp_repeat_3.test | 10 | 0.000936s | 0.000938s | 0.000933s | byte equality observed |
| mp_replace.test | 10 | 0.000941s | 0.000952s | 0.000941s | byte equality observed |
| mp_replace_at.test | 10 | 0.000948s | 0.000952s | 0.000941s | byte equality observed |
| mp_replace_at_c.test | 10 | 0.000936s | 0.000940s | 0.000951s | byte equality observed |
| mp_replace_front.test | 10 | 0.000936s | 0.000941s | 0.000936s | byte equality observed |
| mp_replace_front_2.test | 10 | 0.000448s | 0.000442s | 0.000926s | byte equality observed |
| mp_replace_if.test | 10 | 0.000933s | 0.000947s | 0.000952s | byte equality observed |
| mp_replace_if_q.test | 10 | 0.000928s | 0.000943s | 0.000939s | byte equality observed |
| mp_replace_second.test | 10 | 0.000943s | 0.000939s | 0.000937s | byte equality observed |
| mp_replace_second_2.test | 10 | 0.000443s | 0.000440s | 0.000934s | byte equality observed |
| mp_replace_third.test | 10 | 0.000934s | 0.000939s | 0.000938s | byte equality observed |
| mp_replace_third_2.test | 10 | 0.000448s | 0.000446s | 0.000921s | byte equality observed |
| mp_reverse.test | 10 | 0.000958s | 0.000957s | 0.000944s | byte equality observed |
| mp_reverse_fold.test | 10 | 0.000963s | 0.000962s | 0.000933s | byte equality observed |
| mp_reverse_fold_q.test | 10 | 0.000940s | 0.000953s | 0.000947s | byte equality observed |
| mp_rotate_left.test | 10 | 0.000938s | 0.000946s | 0.000947s | byte equality observed |
| mp_rotate_right.test | 10 | 0.000940s | 0.000954s | 0.000939s | byte equality observed |
| mp_same.test | 10 | 0.000932s | 0.000953s | 0.000937s | byte equality observed |
| mp_second.test | 10 | 0.000942s | 0.000933s | 0.000937s | byte equality observed |
| mp_second_2.test | 10 | 0.000449s | 0.000454s | 0.000928s | byte equality observed |
| mp_set_contains.test | 10 | 0.000945s | 0.000945s | 0.000951s | byte equality observed |
| mp_set_difference.test | 10 | 0.000944s | 0.000954s | 0.000935s | byte equality observed |
| mp_set_difference_sf.test | 10 | 0.000943s | 0.000953s | 0.000941s | byte equality observed |
| mp_set_intersection.test | 10 | 0.000947s | 0.000950s | 0.000948s | byte equality observed |
| mp_set_intersection_sf.test | 10 | 0.000943s | 0.000949s | 0.000937s | byte equality observed |
| mp_set_push_back.test | 10 | 0.000939s | 0.000952s | 0.000944s | byte equality observed |
| mp_set_push_front.test | 10 | 0.000965s | 0.000956s | 0.000944s | byte equality observed |
| mp_set_union.test | 10 | 0.000945s | 0.000951s | 0.000937s | byte equality observed |
| mp_set_union_sf.test | 10 | 0.000934s | 0.000952s | 0.000938s | byte equality observed |
| mp_similar.test | 10 | 0.000942s | 0.000945s | 0.000944s | byte equality observed |
| mp_size.test | 10 | 0.000937s | 0.000950s | 0.000941s | byte equality observed |
| mp_size_2.test | 10 | 0.000441s | 0.000445s | 0.000926s | byte equality observed |
| mp_slice.test | 10 | 0.000961s | 0.000954s | 0.000942s | byte equality observed |
| mp_slice_2.test | 10 | 0.000446s | 0.000442s | 0.000922s | byte equality observed |
| mp_sliding_fold.test | 10 | 0.000966s | 0.000958s | 0.000942s | byte equality observed |
| mp_sliding_fold_q.test | 10 | 0.000963s | 0.000953s | 0.000953s | byte equality observed |
| mp_sort.test | 10 | 0.000949s | 0.000944s | 0.000948s | byte equality observed |
| mp_sort_q.test | 10 | 0.000946s | 0.000960s | 0.000937s | byte equality observed |
| mp_split.test | 10 | 0.000955s | 0.000958s | 0.000955s | byte equality observed |
| mp_starts_with.test | 10 | 0.000943s | 0.000942s | 0.000942s | byte equality observed |
| mp_starts_with_sf.test | 10 | 0.000945s | 0.000945s | 0.000950s | byte equality observed |
| mp_take.test | 10 | 0.000951s | 0.000944s | 0.000944s | byte equality observed |
| mp_take_2.test | 10 | 0.000442s | 0.000444s | 0.000927s | byte equality observed |
| mp_third.test | 10 | 0.000928s | 0.000921s | 0.000933s | byte equality observed |
| mp_third_2.test | 10 | 0.000436s | 0.000439s | 0.000924s | byte equality observed |
| mp_transform.test | 10 | 0.000954s | 0.000944s | 0.000933s | byte equality observed |
| mp_transform_2.test | 10 | 0.000916s | 0.000915s | 0.000919s | byte equality observed |
| mp_transform_front.test | 10 | 0.000931s | 0.000946s | 0.000933s | byte equality observed |
| mp_transform_front_2.test | 10 | 0.000447s | 0.000444s | 0.000922s | byte equality observed |
| mp_transform_if.test | 10 | 0.000939s | 0.000957s | 0.000934s | byte equality observed |
| mp_transform_if_q.test | 10 | 0.000936s | 0.000944s | 0.000942s | byte equality observed |
| mp_transform_q.test | 10 | 0.000952s | 0.000951s | 0.000933s | byte equality observed |
| mp_transform_q_2.test | 10 | 0.000938s | 0.000938s | 0.000931s | byte equality observed |
| mp_transform_second.test | 10 | 0.000952s | 0.000955s | 0.000949s | byte equality observed |
| mp_transform_second_2.test | 10 | 0.000451s | 0.000445s | 0.000923s | byte equality observed |
| mp_transform_sf.test | 10 | 0.000948s | 0.000949s | 0.000940s | byte equality observed |
| mp_transform_third.test | 10 | 0.000939s | 0.000952s | 0.000940s | byte equality observed |
| mp_transform_third_2.test | 10 | 0.000444s | 0.000449s | 0.000924s | byte equality observed |
| mp_unique.test | 10 | 0.000951s | 0.000940s | 0.000949s | byte equality observed |
| mp_unique_if.test | 10 | 0.000960s | 0.000951s | 0.000944s | byte equality observed |
| mp_unique_if_q.test | 10 | 0.000961s | 0.000949s | 0.000934s | byte equality observed |
| mp_valid.test | 10 | 0.000937s | 0.000943s | 0.000942s | byte equality observed |
| mp_valid_and_true.test | 10 | 0.000935s | 0.000959s | 0.000931s | byte equality observed |
| mp_value.test | 10 | 0.000446s | 0.000447s | 0.000929s | byte equality observed |
| mp_with_index.test | 10 | 0.001297s | 0.001260s | 0.001201s | byte equality observed |
| mp_with_index_cx.test | 10 | 0.000445s | 0.000430s | 0.000917s | byte equality observed |
| mpl.test | 10 | 0.000958s | 0.000941s | 0.000937s | byte equality observed |
| mpl_list.test | 10 | 0.000933s | 0.000959s | 0.000951s | byte equality observed |
| mpl_tuple.test | 10 | 0.000938s | 0.000943s | 0.000947s | byte equality observed |
| mpl_version.test | 10 | 0.000937s | 0.000939s | 0.000959s | byte equality observed |
| set_version.test | 10 | 0.000942s | 0.000934s | 0.000946s | byte equality observed |
| tuple_apply.test | 10 | 0.000943s | 0.000951s | 0.000934s | byte equality observed |
| tuple_for_each.test | 10 | 0.000948s | 0.000942s | 0.000941s | byte equality observed |
| tuple_transform.test | 10 | 0.000945s | 0.000957s | 0.000936s | byte equality observed |
| tuple_transform_2.test | 10 | 0.000948s | 0.000942s | 0.000939s | byte equality observed |
| tuple_version.test | 10 | 0.000937s | 0.000934s | 0.000946s | byte equality observed |
| utility_version.test | 10 | 0.000948s | 0.000932s | 0.000954s | byte equality observed |
| version.test | 10 | 0.000945s | 0.000940s | 0.000939s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/43947487361).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
