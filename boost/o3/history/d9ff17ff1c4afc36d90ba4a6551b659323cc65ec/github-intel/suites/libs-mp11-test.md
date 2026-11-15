# libs/mp11/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| mp11.test | COMPILE | 0.029860 | 0.058049 | 0.085195 | — | — | — |
| complex_h.test | COMPILE | 0.114768 | 0.251075 | 0.333015 | — | — | — |
| mp_size.test | RUN | 0.139007 | 0.844434 | 0.469484 | 0.001055 | 0.001240 | 0.001004 |
| mp_size_2.test | RUN | 0.011880 | 0.028011 | 0.038508 | 0.000454 | 0.000484 | 0.000998 |
| mp_empty.test | RUN | 0.127374 | 0.506227 | 0.449726 | 0.001066 | 0.001259 | 0.000999 |
| mp_empty_2.test | RUN | 0.011305 | 0.028606 | 0.038673 | 0.000455 | 0.000497 | 0.000972 |
| mp_assign.test | RUN | 0.147873 | 1.095413 | 0.606648 | 0.000993 | 0.001273 | 0.001003 |
| mp_assign_2.test | RUN | 0.011413 | 0.029419 | 0.036078 | 0.000465 | 0.000466 | 0.000961 |
| mp_clear.test | RUN | 0.126537 | 0.464543 | 0.443427 | 0.001023 | 0.001218 | 0.001026 |
| mp_clear_2.test | RUN | 0.011239 | 0.027326 | 0.037500 | 0.000405 | 0.000472 | 0.000959 |
| mp_front.test | RUN | 0.132136 | 0.758479 | 0.497233 | 0.000995 | 0.001282 | 0.001037 |
| mp_front_2.test | RUN | 0.010649 | 0.028994 | 0.036808 | 0.000473 | 0.000506 | 0.001013 |
| mp_pop_front.test | RUN | 0.134320 | 0.785452 | 0.505373 | 0.001100 | 0.001246 | 0.000961 |
| mp_pop_front_2.test | RUN | 0.011601 | 0.027813 | 0.037282 | 0.000418 | 0.000488 | 0.000983 |
| mp_second.test | RUN | 0.133147 | 0.492799 | 0.461567 | 0.001005 | 0.001221 | 0.000989 |
| mp_second_2.test | RUN | 0.011319 | 0.027527 | 0.037800 | 0.000445 | 0.000492 | 0.000962 |
| mp_third.test | RUN | 0.126838 | 0.452718 | 0.430977 | 0.001059 | 0.001219 | 0.001033 |
| mp_third_2.test | RUN | 0.011223 | 0.026642 | 0.038301 | 0.000418 | 0.000427 | 0.001045 |
| mp_push_front.test | RUN | 0.170251 | 1.712121 | 0.829221 | 0.001016 | 0.001233 | 0.001017 |
| mp_push_front_2.test | RUN | 0.011333 | 0.026965 | 0.036905 | 0.000481 | 0.000436 | 0.001012 |
| mp_push_back.test | RUN | 0.173087 | 1.693161 | 0.818893 | 0.001040 | 0.001229 | 0.001018 |
| mp_push_back_2.test | RUN | 0.011250 | 0.028431 | 0.037381 | 0.000516 | 0.000483 | 0.000987 |
| mp_rename.test | RUN | 0.162720 | 1.553276 | 0.712186 | 0.001030 | 0.001176 | 0.001039 |
| mp_rename_2.test | RUN | 0.011365 | 0.028331 | 0.037174 | 0.000435 | 0.000467 | 0.000973 |
| mp_append.test | RUN | 0.169754 | 1.761823 | 0.763547 | 0.001037 | 0.001308 | 0.001023 |
| mp_append_2.test | RUN | 0.410131 | 4.014473 | 1.066218 | 0.001056 | 0.001229 | 0.001021 |
| mp_append_3.test | RUN | 0.011198 | 0.027991 | 0.037538 | 0.000434 | 0.000481 | 0.000969 |
| mp_append_sf.test | RUN | 0.119509 | 0.420628 | 0.417219 | 0.000988 | 0.001182 | 0.001008 |
| mp_replace_front.test | RUN | 0.154358 | 1.238736 | 0.609546 | 0.001070 | 0.001273 | 0.000987 |
| mp_replace_front_2.test | RUN | 0.011178 | 0.027513 | 0.038700 | 0.000452 | 0.000464 | 0.001025 |
| mp_replace_second.test | RUN | 0.141455 | 0.796063 | 0.575249 | 0.001024 | 0.001189 | 0.000998 |
| mp_replace_second_2.test | RUN | 0.011733 | 0.027689 | 0.036598 | 0.000451 | 0.000499 | 0.000919 |
| mp_replace_third.test | RUN | 0.138048 | 0.652346 | 0.515539 | 0.001048 | 0.001230 | 0.000985 |
| mp_replace_third_2.test | RUN | 0.011269 | 0.022818 | 0.038652 | 0.000502 | 0.000494 | 0.000981 |
| mp_apply_q.test | RUN | 0.165904 | 1.547244 | 0.705796 | 0.001044 | 0.001214 | 0.001044 |
| mp_apply_q_sf.test | RUN | 0.126185 | 0.431728 | 0.415973 | 0.000967 | 0.001251 | 0.001011 |
| mp_is_list.test | RUN | 0.121845 | 0.517039 | 0.431446 | 0.001030 | 0.001203 | 0.001023 |
| mp_list_c.test | RUN | 0.135795 | 0.624213 | 0.491598 | 0.001024 | 0.001253 | 0.001000 |
| mp_transform_front.test | RUN | 0.146959 | 1.253694 | 0.603310 | 0.001011 | 0.001297 | 0.001035 |
| mp_transform_front_2.test | RUN | 0.011938 | 0.027730 | 0.038354 | 0.000502 | 0.000497 | 0.001053 |
| mp_transform_second.test | RUN | 0.137414 | 1.070905 | 0.544082 | 0.001152 | 0.001213 | 0.001003 |
| mp_transform_second_2.test | RUN | 0.010985 | 0.029075 | 0.039854 | 0.000491 | 0.000455 | 0.000990 |
| mp_transform_third.test | RUN | 0.132309 | 0.810973 | 0.486760 | 0.001062 | 0.001238 | 0.001030 |
| mp_transform_third_2.test | RUN | 0.011354 | 0.027916 | 0.038202 | 0.000452 | 0.000467 | 0.001068 |
| mp_list_v.test | RUN | 0.010585 | 0.028247 | 0.039044 | 0.000491 | 0.000537 | 0.000966 |
| mp_rename_v.test | RUN | 0.011772 | 0.027447 | 0.038360 | 0.000450 | 0.000492 | 0.000989 |
| mp_is_value_list.test | RUN | 0.113285 | 0.308672 | 0.409614 | 0.001025 | 0.001265 | 0.001035 |
| mp_transform.test | RUN | 0.325941 | 2.670441 | 1.335975 | 0.001061 | 0.001281 | 0.001072 |
| mp_transform_2.test | RUN | 0.113372 | 0.271117 | 0.369808 | 0.001015 | 0.001245 | 0.001017 |
| mp_transform_q.test | RUN | 0.317773 | 2.554195 | 1.296605 | 0.001182 | 0.001183 | 0.001033 |
| mp_transform_q_2.test | RUN | 0.318276 | 0.778706 | 1.610320 | 0.001061 | 0.001112 | 0.000998 |
| mp_transform_sf.test | RUN | 0.132886 | 0.447677 | 0.446339 | 0.001026 | 0.001362 | 0.001071 |
| mp_transform_if.test | RUN | 0.158378 | 1.255985 | 0.676853 | 0.001057 | 0.001304 | 0.001027 |
| mp_transform_if_q.test | RUN | 0.163528 | 1.257511 | 0.684606 | 0.001021 | 0.001015 | 0.001044 |
| mp_filter.test | RUN | 0.147810 | 0.731384 | 0.500354 | 0.000998 | 0.001235 | 0.001033 |
| mp_fill.test | RUN | 0.136089 | 0.548965 | 0.486753 | 0.001086 | 0.001221 | 0.001033 |
| mp_fill_2.test | RUN | 0.021099 | 0.042411 | 0.062821 | 0.000453 | 0.000440 | 0.000950 |
| mp_count.test | RUN | 0.261900 | 1.343513 | 0.755655 | 0.000967 | 0.001322 | 0.001034 |
| mp_count_if.test | RUN | 0.272934 | 1.363505 | 0.838053 | 0.001121 | 0.001248 | 0.001005 |
| mp_count_if_q.test | RUN | 0.143031 | 0.886359 | 0.469623 | 0.001431 | 0.001050 | 0.001105 |
| mp_contains.test | RUN | 0.135491 | 0.531540 | 0.439123 | 0.001056 | 0.001110 | 0.001114 |
| mp_starts_with.test | RUN | 0.134043 | 0.532849 | 0.465307 | 0.001046 | 0.001370 | 0.000924 |
| mp_starts_with_sf.test | RUN | 0.130390 | 0.450734 | 0.443434 | 0.001038 | 0.001216 | 0.001041 |
| mp_repeat.test | RUN | 0.204976 | 2.235443 | 0.881388 | 0.001021 | 0.001325 | 0.001046 |
| mp_repeat_2.test | RUN | 0.019901 | 0.042518 | 0.064403 | 0.000402 | 0.000489 | 0.001000 |
| mp_repeat_3.test | RUN | 0.170842 | 0.285762 | 0.437412 | 0.001231 | 0.001220 | 0.001049 |
| mp_product.test | RUN | 0.157406 | 1.372647 | 0.646304 | 0.000976 | 0.001338 | 0.000985 |
| mp_drop.test | RUN | 0.172428 | 1.680115 | 0.742647 | 0.000961 | 0.001149 | 0.001047 |
| mp_drop_2.test | RUN | 0.020867 | 0.044316 | 0.062885 | 0.000449 | 0.000460 | 0.000982 |
| mp_iota.test | RUN | 0.172534 | 1.438353 | 0.653391 | 0.001054 | 0.001125 | 0.001001 |
| mp_iota_2.test | RUN | 0.174332 | 1.718360 | 0.748674 | 0.001085 | 0.001225 | 0.001022 |
| mp_at.test | RUN | 0.145809 | 0.732478 | 0.496663 | 0.001055 | 0.001256 | 0.000973 |
| mp_at_2.test | RUN | 0.019807 | 0.045888 | 0.065409 | 0.000546 | 0.000493 | 0.000984 |
| mp_at_sf.test | RUN | 0.127632 | 0.447006 | 0.425866 | 0.001107 | 0.001236 | 0.000959 |
| mp_take.test | RUN | 0.231196 | 2.239371 | 0.894513 | 0.001053 | 0.001324 | 0.001054 |
| mp_take_2.test | RUN | 0.019587 | 0.044628 | 0.065001 | 0.000524 | 0.000421 | 0.000910 |
| mp_slice.test | RUN | 0.280809 | 2.255296 | 1.153233 | 0.001055 | 0.001284 | 0.000948 |
| mp_slice_2.test | RUN | 0.019931 | 0.040535 | 0.066538 | 0.000455 | 0.000495 | 0.000969 |
| mp_replace.test | RUN | 0.167459 | 1.134052 | 0.713371 | 0.001014 | 0.001243 | 0.001044 |
| mp_replace_if.test | RUN | 0.163977 | 0.998298 | 0.661258 | 0.001035 | 0.001181 | 0.001021 |
| mp_replace_if_q.test | RUN | 0.158594 | 0.993530 | 0.660379 | 0.001092 | 0.001204 | 0.001046 |
| mp_copy_if.test | RUN | 0.159935 | 1.420711 | 0.625344 | 0.001077 | 0.001371 | 0.001048 |
| mp_copy_if_q.test | RUN | 0.162037 | 1.424610 | 0.627812 | 0.000962 | 0.001133 | 0.000958 |
| mp_remove.test | RUN | 0.161173 | 0.937232 | 0.644132 | 0.001073 | 0.001156 | 0.001022 |
| mp_remove_if.test | RUN | 0.166888 | 1.490122 | 0.671835 | 0.000976 | 0.001231 | 0.001088 |
| mp_remove_if_q.test | RUN | 0.170293 | 1.489665 | 0.670639 | 0.001162 | 0.001202 | 0.001001 |
| mp_partition.test | RUN | 0.166871 | 1.411615 | 0.730399 | 0.000998 | 0.001301 | 0.001044 |
| mp_partition_q.test | RUN | 0.172175 | 1.411160 | 0.724278 | 0.001001 | 0.001160 | 0.001023 |
| mp_sort.test | RUN | 0.154402 | 0.999903 | 0.628338 | 0.001075 | 0.001264 | 0.001019 |
| mp_sort_q.test | RUN | 0.153811 | 1.001522 | 0.624318 | 0.001035 | 0.000877 | 0.001001 |
| mp_find.test | RUN | 0.157642 | 1.074996 | 0.537669 | 0.001111 | 0.001166 | 0.001009 |
| mp_find_if.test | RUN | 0.149884 | 0.982183 | 0.508087 | 0.001032 | 0.001270 | 0.000990 |
| mp_find_if_q.test | RUN | 0.159828 | 1.098521 | 0.624526 | 0.001009 | 0.001172 | 0.001073 |
| mp_reverse.test | RUN | 0.356047 | 2.988090 | 1.266669 | 0.001006 | 0.001308 | 0.001006 |
| mp_fold.test | RUN | 0.605797 | 2.267621 | 3.201961 | 0.001067 | 0.001295 | 0.001075 |
| mp_fold_q.test | RUN | 0.153325 | 0.989269 | 0.583763 | 0.001063 | 0.001299 | 0.001017 |
| mp_fold_q_sf.test | RUN | 0.131936 | 0.450708 | 0.450829 | 0.001094 | 0.001118 | 0.001026 |
| mp_reverse_fold.test | RUN | 0.282444 | 2.204113 | 0.885479 | 0.001108 | 0.001189 | 0.001029 |
| mp_reverse_fold_q.test | RUN | 0.157499 | 1.207646 | 0.641926 | 0.001130 | 0.001195 | 0.001021 |
| mp_unique.test | RUN | 0.153275 | 1.095383 | 0.618230 | 0.001018 | 0.001185 | 0.001193 |
| mp_unique_if.test | RUN | 0.302573 | 2.271851 | 0.984937 | 0.001048 | 0.001178 | 0.000991 |
| mp_unique_if_q.test | RUN | 0.243131 | 2.288945 | 0.801853 | 0.001098 | 0.001309 | 0.001023 |
| mp_all_of.test | RUN | 0.375193 | 1.192258 | 1.037499 | 0.001045 | 0.001165 | 0.001026 |
| mp_all_of_q.test | RUN | 0.135658 | 0.536188 | 0.462568 | 0.001191 | 0.001231 | 0.001022 |
| mp_any_of.test | RUN | 0.378191 | 1.236191 | 1.037024 | 0.001056 | 0.001209 | 0.001030 |
| mp_any_of_q.test | RUN | 0.133339 | 0.511772 | 0.468824 | 0.001130 | 0.001198 | 0.001070 |
| mp_none_of.test | RUN | 0.377668 | 1.254457 | 1.040255 | 0.001060 | 0.001195 | 0.001048 |
| mp_none_of_q.test | RUN | 0.140226 | 0.534007 | 0.429415 | 0.001119 | 0.001334 | 0.001088 |
| mp_replace_at.test | RUN | 0.172266 | 1.084155 | 0.683558 | 0.001013 | 0.001296 | 0.001020 |
| mp_replace_at_c.test | RUN | 0.170051 | 1.094452 | 0.700604 | 0.001089 | 0.001221 | 0.000953 |
| mp_for_each.test | RUN | 0.156769 | 0.705343 | 0.696687 | 0.001060 | 0.001200 | 0.000932 |
| mp_insert.test | RUN | 0.267069 | 2.257231 | 1.035695 | 0.001117 | 0.001346 | 0.001057 |
| mp_insert_2.test | RUN | 0.019914 | 0.043760 | 0.066231 | 0.000487 | 0.000481 | 0.000904 |
| mp_erase.test | RUN | 0.288631 | 2.388974 | 1.180054 | 0.001021 | 0.001249 | 0.000980 |
| mp_erase_2.test | RUN | 0.020413 | 0.043918 | 0.064952 | 0.000474 | 0.000477 | 0.000986 |
| mp_with_index.test | RUN | 0.384511 | 4.751743 | 2.606428 | 0.001507 | 0.001525 | 0.001308 |
| mp_with_index_cx.test | RUN | 0.002188 | 0.013049 | 0.016065 | 0.000469 | 0.000456 | 0.000979 |
| mp_from_sequence.test | RUN | 0.162241 | 1.241258 | 0.659046 | 0.001050 | 0.001150 | 0.001046 |
| mp_from_sequence_2.test | RUN | 0.175805 | 1.469837 | 0.740885 | 0.000962 | 0.001142 | 0.001051 |
| mp_from_sequence_3.test | RUN | 0.139354 | 0.634695 | 0.514649 | 0.001030 | 0.001182 | 0.000974 |
| mp_min_element.test | RUN | 0.138483 | 0.576436 | 0.479901 | 0.001005 | 0.001206 | 0.001033 |
| mp_min_element_2.test | RUN | 0.020490 | 0.044990 | 0.063715 | 0.000477 | 0.000484 | 0.000966 |
| mp_min_element_q.test | RUN | 0.136770 | 0.574887 | 0.462541 | 0.001044 | 0.001243 | 0.000984 |
| mp_min_element_q_2.test | RUN | 0.020048 | 0.044744 | 0.065251 | 0.000495 | 0.000498 | 0.000997 |
| mp_max_element.test | RUN | 0.137608 | 0.582608 | 0.472394 | 0.001028 | 0.001241 | 0.001024 |
| mp_max_element_2.test | RUN | 0.019963 | 0.044192 | 0.065944 | 0.000493 | 0.000493 | 0.001000 |
| mp_max_element_q.test | RUN | 0.135050 | 0.581071 | 0.476067 | 0.001035 | 0.001261 | 0.001026 |
| mp_max_element_q_2.test | RUN | 0.019915 | 0.043686 | 0.062028 | 0.000490 | 0.000457 | 0.000983 |
| mp_nth_element.test | RUN | 0.151707 | 0.819475 | 0.579971 | 0.001041 | 0.001245 | 0.001003 |
| mp_nth_element_q.test | RUN | 0.150906 | 0.818949 | 0.583961 | 0.000989 | 0.001224 | 0.001029 |
| mp_back.test | RUN | 0.150136 | 0.678891 | 0.557600 | 0.001040 | 0.001243 | 0.000961 |
| mp_back_2.test | RUN | 0.020310 | 0.042304 | 0.066637 | 0.000490 | 0.000509 | 0.000972 |
| mp_pop_back.test | RUN | 0.447739 | 4.617211 | 1.218362 | 0.001037 | 0.001262 | 0.000982 |
| mp_pop_back_2.test | RUN | 0.020302 | 0.044706 | 0.066704 | 0.000453 | 0.000458 | 0.000989 |
| mp_flatten.test | RUN | 0.182965 | 1.618013 | 0.789348 | 0.001109 | 0.001361 | 0.001051 |
| mp_rotate_left.test | RUN | 0.180964 | 1.731738 | 0.772629 | 0.001040 | 0.001250 | 0.000936 |
| mp_rotate_right.test | RUN | 0.182466 | 1.740826 | 0.799693 | 0.001025 | 0.001107 | 0.001025 |
| mp_power_set.test | RUN | 0.172367 | 1.658724 | 0.787832 | 0.001011 | 0.001270 | 0.000997 |
| mp_partial_sum.test | RUN | 0.247380 | 2.220220 | 0.901295 | 0.001026 | 0.001178 | 0.001027 |
| mp_iterate.test | RUN | 0.157134 | 0.652969 | 0.628151 | 0.001054 | 0.001215 | 0.001050 |
| mp_pairwise_fold.test | RUN | 0.181241 | 1.515210 | 0.817010 | 0.001036 | 0.001143 | 0.001013 |
| mp_pairwise_fold_q.test | RUN | 0.136936 | 0.435740 | 0.446342 | 0.001022 | 0.001223 | 0.001008 |
| mp_sliding_fold.test | RUN | 0.362871 | 2.959402 | 1.526098 | 0.001024 | 0.001185 | 0.001050 |
| mp_sliding_fold_q.test | RUN | 0.364493 | 2.972994 | 1.507297 | 0.000828 | 0.001005 | 0.000951 |
| mp_intersperse.test | RUN | 0.166059 | 1.088983 | 0.693667 | 0.001028 | 0.001278 | 0.001018 |
| mp_split.test | RUN | 0.248255 | 2.093325 | 0.961678 | 0.000945 | 0.001283 | 0.000974 |
| mp_join.test | RUN | 0.186910 | 1.771321 | 0.876086 | 0.001000 | 0.001205 | 0.001047 |
| integral.test | RUN | 0.145887 | 0.780919 | 0.525229 | 0.001079 | 0.001106 | 0.001000 |
| mp_value.test | RUN | 0.008816 | 0.023376 | 0.028985 | 0.000463 | 0.000493 | 0.000972 |
| mp_identity.test | RUN | 0.140342 | 0.706710 | 0.491127 | 0.001041 | 0.001147 | 0.001079 |
| mp_inherit.test | RUN | 0.128305 | 0.506081 | 0.454104 | 0.001112 | 0.001377 | 0.001008 |
| mp_if.test | RUN | 0.129334 | 0.572814 | 0.451779 | 0.001014 | 0.001142 | 0.001042 |
| mp_if_sf.test | RUN | 0.123242 | 0.421984 | 0.403834 | 0.000999 | 0.001026 | 0.001044 |
| mp_eval_if.test | RUN | 0.134876 | 0.613769 | 0.469665 | 0.001009 | 0.001062 | 0.001033 |
| mp_eval_if_sf.test | RUN | 0.123609 | 0.431678 | 0.416669 | 0.001023 | 0.001343 | 0.001010 |
| mp_valid.test | RUN | 0.128356 | 0.444806 | 0.432519 | 0.001056 | 0.001143 | 0.001013 |
| mp_defer.test | RUN | 0.137166 | 0.745006 | 0.521106 | 0.001104 | 0.001240 | 0.001005 |
| mp_quote.test | RUN | 0.141854 | 0.753378 | 0.530059 | 0.001063 | 0.001259 | 0.001011 |
| mp_invoke_q.test | RUN | 0.151780 | 0.993343 | 0.596435 | 0.001024 | 0.001271 | 0.001002 |
| mp_invoke_q_sf.test | RUN | 0.127736 | 0.428604 | 0.408998 | 0.000966 | 0.001288 | 0.000998 |
| mp_quote_trait.test | RUN | 0.141171 | 0.831670 | 0.528070 | 0.001208 | 0.001117 | 0.001060 |
| mp_cond.test | RUN | 0.126594 | 0.505162 | 0.450027 | 0.001055 | 0.001091 | 0.000990 |
| mp_cond_sf.test | RUN | 0.123389 | 0.427093 | 0.417284 | 0.001039 | 0.001196 | 0.001016 |
| mp_not_fn.test | RUN | 0.120764 | 0.424553 | 0.411745 | 0.001025 | 0.001240 | 0.001003 |
| mp_eval_if_not.test | RUN | 0.126162 | 0.621122 | 0.474332 | 0.001083 | 0.001214 | 0.000829 |
| mp_eval_or.test | RUN | 0.121752 | 0.319610 | 0.437515 | 0.001017 | 0.001155 | 0.000947 |
| mp_compose.test | RUN | 0.145433 | 1.032470 | 0.565861 | 0.000963 | 0.001057 | 0.000820 |
| mp_valid_and_true.test | RUN | 0.128220 | 0.503543 | 0.439998 | 0.001019 | 0.001267 | 0.000896 |
| mp_compose_sf.test | COMPILE | 0.026744 | 0.059309 | 0.092462 | — | — | — |
| integer_sequence.test | RUN | 0.156060 | 1.017577 | 0.660582 | 0.001044 | 0.000964 | 0.001052 |
| tuple_for_each.test | RUN | 0.125718 | 0.357335 | 0.463050 | 0.001073 | 0.001216 | 0.000968 |
| tuple_for_each_cx.test | COMPILE | 0.022623 | 0.048964 | 0.071203 | — | — | — |
| tuple_apply.test | RUN | 0.125801 | 0.353516 | 0.450462 | 0.000972 | 0.001294 | 0.001002 |
| tuple_apply_cx.test | COMPILE | 0.032953 | 0.070662 | 0.101076 | — | — | — |
| construct_from_tuple.test | RUN | 0.135810 | 0.388080 | 0.444781 | 0.001018 | 0.001141 | 0.001023 |
| construct_from_tuple_cx.test | COMPILE | 0.032701 | 0.071100 | 0.096821 | — | — | — |
| tuple_transform.test | RUN | 0.203213 | 0.781577 | 0.881651 | 0.001030 | 0.001129 | 0.001043 |
| tuple_transform_2.test | RUN | 0.184974 | 0.578789 | 0.773394 | 0.001018 | 0.001298 | 0.001030 |
| tuple_transform_cx.test | COMPILE | 0.030582 | 0.065977 | 0.102869 | — | — | — |
| mp_set_contains.test | RUN | 0.132144 | 0.522241 | 0.457747 | 0.001043 | 0.001197 | 0.001069 |
| mp_set_push_back.test | RUN | 0.178855 | 1.652295 | 0.804800 | 0.001015 | 0.001161 | 0.001015 |
| mp_set_push_front.test | RUN | 0.234041 | 1.981427 | 0.916900 | 0.001005 | 0.001211 | 0.000986 |
| mp_is_set.test | RUN | 0.132821 | 0.526107 | 0.463409 | 0.001203 | 0.001204 | 0.000979 |
| mp_set_union.test | RUN | 0.174768 | 1.408568 | 0.755508 | 0.001034 | 0.001146 | 0.001036 |
| mp_set_union_sf.test | RUN | 0.123934 | 0.416138 | 0.422801 | 0.001101 | 0.001292 | 0.000927 |
| mp_set_difference.test | RUN | 0.153531 | 1.090501 | 0.633388 | 0.001103 | 0.001230 | 0.001071 |
| mp_set_difference_sf.test | RUN | 0.127401 | 0.415558 | 0.417385 | 0.001025 | 0.001172 | 0.000967 |
| mp_set_intersection.test | RUN | 0.152344 | 1.090828 | 0.615569 | 0.000943 | 0.001157 | 0.001015 |
| mp_set_intersection_sf.test | RUN | 0.123477 | 0.421412 | 0.416109 | 0.001153 | 0.001240 | 0.001011 |
| mp_all.test | RUN | 0.130344 | 0.514174 | 0.457198 | 0.001055 | 0.001166 | 0.000984 |
| mp_all_2.test | RUN | 0.384204 | 1.114638 | 1.020659 | 0.001069 | 0.001221 | 0.001056 |
| mp_and.test | RUN | 0.128196 | 0.520700 | 0.453567 | 0.001081 | 0.001220 | 0.001005 |
| mp_any.test | RUN | 0.135060 | 0.513240 | 0.417308 | 0.001011 | 0.001093 | 0.000984 |
| mp_any_2.test | RUN | 0.386866 | 1.112565 | 1.037860 | 0.001085 | 0.001295 | 0.001012 |
| mp_or.test | RUN | 0.131181 | 0.510222 | 0.446376 | 0.001060 | 0.001299 | 0.001087 |
| mp_same.test | RUN | 0.267197 | 0.874573 | 0.713685 | 0.001084 | 0.001282 | 0.001092 |
| mp_plus.test | RUN | 0.141786 | 0.620104 | 0.487117 | 0.000995 | 0.001239 | 0.000975 |
| mp_less.test | RUN | 0.133846 | 0.517182 | 0.438018 | 0.001021 | 0.001101 | 0.001016 |
| mp_min.test | RUN | 0.125667 | 0.471492 | 0.442279 | 0.001091 | 0.001223 | 0.000981 |
| mp_max.test | RUN | 0.134491 | 0.529180 | 0.458662 | 0.000937 | 0.001264 | 0.000999 |
| mp_similar.test | RUN | 0.131838 | 0.518559 | 0.447973 | 0.001039 | 0.001106 | 0.000931 |
| mp_map_find.test | RUN | 0.152341 | 0.968887 | 0.601553 | 0.001017 | 0.001334 | 0.001044 |
| mp_map_find_2.test | RUN | 0.139963 | 0.364325 | 0.509431 | 0.001072 | 0.001137 | 0.001054 |
| mp_map_find_3.test | RUN | 0.138320 | 0.357844 | 0.506026 | 0.000965 | 0.001110 | 0.000943 |
| mp_map_find_4.test | RUN | 0.134958 | 0.337900 | 0.457456 | 0.001038 | 0.000869 | 0.001047 |
| mp_map_contains.test | RUN | 0.139089 | 0.536812 | 0.466013 | 0.001023 | 0.001338 | 0.001022 |
| mp_map_insert.test | RUN | 0.184751 | 1.841450 | 0.854034 | 0.001037 | 0.001194 | 0.001070 |
| mp_map_replace.test | RUN | 0.254733 | 2.107756 | 1.011678 | 0.001101 | 0.001195 | 0.001009 |
| mp_map_erase.test | RUN | 0.180776 | 1.565556 | 0.818305 | 0.001000 | 0.001194 | 0.000759 |
| mp_map_update.test | RUN | 0.156915 | 1.012647 | 0.626676 | 0.000971 | 0.001277 | 0.000999 |
| mp_map_update_q.test | RUN | 0.154185 | 1.012775 | 0.622614 | 0.001082 | 0.001154 | 0.000902 |
| mp_map_keys.test | RUN | 0.152714 | 0.906501 | 0.608212 | 0.000953 | 0.001143 | 0.001015 |
| mp_is_map.test | RUN | 0.136948 | 0.528976 | 0.481573 | 0.001011 | 0.001158 | 0.001070 |
| mp_bind.test | RUN | 0.176873 | 1.638724 | 0.746158 | 0.001030 | 0.001263 | 0.001027 |
| mp_bind_q.test | RUN | 0.152419 | 1.014332 | 0.592911 | 0.001152 | 0.001274 | 0.000754 |
| mp_bind_front.test | RUN | 0.147778 | 1.090949 | 0.582651 | 0.001070 | 0.001148 | 0.000990 |
| mp_bind_back.test | RUN | 0.149470 | 1.107723 | 0.568345 | 0.001002 | 0.001296 | 0.000977 |
| mp_lambda.test | RUN | 0.374737 | 3.275427 | 1.574374 | 0.001160 | 0.000827 | 0.001038 |
| mpl.test | RUN | 0.318454 | 0.855784 | 1.214102 | 0.001082 | 0.001214 | 0.001052 |
| mpl_list.test | RUN | 0.165473 | 0.632677 | 0.555402 | 0.001100 | 0.001086 | 0.001084 |
| mpl_tuple.test | RUN | 0.171263 | 0.635984 | 0.565980 | 0.001067 | 0.001231 | 0.001024 |
| version.test | RUN | 0.071761 | 0.227812 | 0.281693 | 0.001046 | 0.001377 | 0.001032 |
| mp11_version.test | RUN | 0.101473 | 0.259255 | 0.328737 | 0.001037 | 0.001130 | 0.001053 |
| list_version.test | RUN | 0.083299 | 0.233051 | 0.286312 | 0.001002 | 0.001139 | 0.001059 |
| algorithm_version.test | RUN | 0.098650 | 0.237131 | 0.308667 | 0.000993 | 0.001214 | 0.000993 |
| integral_version.test | RUN | 0.081475 | 0.225967 | 0.278196 | 0.001028 | 0.001256 | 0.001047 |
| utility_version.test | RUN | 0.082082 | 0.228423 | 0.283144 | 0.000968 | 0.001050 | 0.001000 |
| function_version.test | RUN | 0.087712 | 0.229825 | 0.291492 | 0.001067 | 0.001242 | 0.001001 |
| map_version.test | RUN | 0.093806 | 0.239178 | 0.309845 | 0.001037 | 0.001159 | 0.000998 |
| set_version.test | RUN | 0.086697 | 0.235997 | 0.289151 | 0.001020 | 0.001125 | 0.000955 |
| bind_version.test | RUN | 0.094911 | 0.246493 | 0.306299 | 0.001096 | 0.001211 | 0.001011 |
| integer_sequence_version.test | RUN | 0.081771 | 0.221868 | 0.284403 | 0.001018 | 0.001091 | 0.000777 |
| tuple_version.test | RUN | 0.092186 | 0.248921 | 0.284532 | 0.000777 | 0.001123 | 0.000721 |
| mpl_version.test | RUN | 0.076607 | 0.173842 | 0.198782 | 0.000745 | 0.000819 | 0.000727 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 1.007× | 1.003×, 1.010× | 0.997× |
| clang | 1.097× | 1.094×, 1.100× | 1.002× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1362 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43670794197).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| algorithm_version.test | 10 | 0.000736s | 0.000744s | 0.000742s | byte equality observed |
| bind_version.test | 10 | 0.000728s | 0.000733s | 0.000741s | byte equality observed |
| construct_from_tuple.test | 10 | 0.000739s | 0.000755s | 0.000729s | byte equality observed |
| function_version.test | 10 | 0.000713s | 0.000747s | 0.000719s | byte equality observed |
| integer_sequence.test | 10 | 0.000721s | 0.000749s | 0.000746s | byte equality observed |
| integer_sequence_version.test | 10 | 0.000725s | 0.000749s | 0.000747s | byte equality observed |
| integral.test | 10 | 0.000714s | 0.000737s | 0.000737s | byte equality observed |
| integral_version.test | 10 | 0.000721s | 0.000741s | 0.000720s | byte equality observed |
| list_version.test | 10 | 0.000738s | 0.000755s | 0.000728s | byte equality observed |
| map_version.test | 10 | 0.000728s | 0.000727s | 0.000729s | byte equality observed |
| mp11_version.test | 10 | 0.000718s | 0.000741s | 0.000751s | byte equality observed |
| mp_all.test | 10 | 0.000739s | 0.000745s | 0.000793s | byte equality observed |
| mp_all_2.test | 10 | 0.000739s | 0.000751s | 0.000786s | byte equality observed |
| mp_all_of.test | 10 | 0.000736s | 0.000724s | 0.000792s | byte equality observed |
| mp_all_of_q.test | 10 | 0.000714s | 0.000736s | 0.000806s | byte equality observed |
| mp_and.test | 10 | 0.000716s | 0.000751s | 0.000799s | byte equality observed |
| mp_any.test | 10 | 0.000742s | 0.000739s | 0.000806s | byte equality observed |
| mp_any_2.test | 10 | 0.000734s | 0.000746s | 0.000825s | byte equality observed |
| mp_any_of.test | 10 | 0.000722s | 0.000750s | 0.000804s | byte equality observed |
| mp_any_of_q.test | 10 | 0.000720s | 0.000748s | 0.000816s | byte equality observed |
| mp_append.test | 10 | 0.000728s | 0.000764s | 0.000814s | byte equality observed |
| mp_append_2.test | 10 | 0.000759s | 0.000757s | 0.000803s | byte equality observed |
| mp_append_3.test | 10 | 0.000340s | 0.000340s | 0.000815s | byte equality observed |
| mp_append_sf.test | 10 | 0.000769s | 0.000756s | 0.000804s | byte equality observed |
| mp_apply_q.test | 10 | 0.000773s | 0.000753s | 0.000814s | byte equality observed |
| mp_apply_q_sf.test | 10 | 0.000795s | 0.000758s | 0.000796s | byte equality observed |
| mp_assign.test | 10 | 0.000804s | 0.000743s | 0.000818s | byte equality observed |
| mp_assign_2.test | 10 | 0.000359s | 0.000340s | 0.000771s | byte equality observed |
| mp_at.test | 10 | 0.000801s | 0.000746s | 0.000811s | byte equality observed |
| mp_at_2.test | 10 | 0.000360s | 0.000340s | 0.000833s | byte equality observed |
| mp_at_sf.test | 10 | 0.000818s | 0.000764s | 0.000826s | byte equality observed |
| mp_back.test | 10 | 0.000822s | 0.000790s | 0.000842s | byte equality observed |
| mp_back_2.test | 10 | 0.000369s | 0.000348s | 0.000801s | byte equality observed |
| mp_bind.test | 10 | 0.000802s | 0.000807s | 0.000834s | byte equality observed |
| mp_bind_back.test | 10 | 0.000798s | 0.000800s | 0.000844s | byte equality observed |
| mp_bind_front.test | 10 | 0.000795s | 0.000855s | 0.000821s | byte equality observed |
| mp_bind_q.test | 10 | 0.000807s | 0.000850s | 0.000826s | byte equality observed |
| mp_clear.test | 10 | 0.000801s | 0.000815s | 0.000817s | byte equality observed |
| mp_clear_2.test | 10 | 0.000362s | 0.000354s | 0.000767s | byte equality observed |
| mp_compose.test | 10 | 0.000809s | 0.000825s | 0.000789s | byte equality observed |
| mp_cond.test | 10 | 0.000812s | 0.000830s | 0.000797s | byte equality observed |
| mp_cond_sf.test | 10 | 0.000803s | 0.000821s | 0.000841s | byte equality observed |
| mp_contains.test | 10 | 0.000787s | 0.000816s | 0.000833s | byte equality observed |
| mp_copy_if.test | 10 | 0.000817s | 0.000801s | 0.000824s | byte equality observed |
| mp_copy_if_q.test | 10 | 0.000821s | 0.000825s | 0.000807s | byte equality observed |
| mp_count.test | 10 | 0.000814s | 0.000817s | 0.000817s | byte equality observed |
| mp_count_if.test | 10 | 0.000817s | 0.000798s | 0.000810s | byte equality observed |
| mp_count_if_q.test | 10 | 0.000820s | 0.000787s | 0.000803s | byte equality observed |
| mp_defer.test | 10 | 0.000844s | 0.000788s | 0.000794s | byte equality observed |
| mp_drop.test | 10 | 0.000815s | 0.000799s | 0.000788s | byte equality observed |
| mp_drop_2.test | 10 | 0.000359s | 0.000358s | 0.000785s | byte equality observed |
| mp_empty.test | 10 | 0.000801s | 0.000815s | 0.000786s | byte equality observed |
| mp_empty_2.test | 10 | 0.000366s | 0.000364s | 0.000784s | byte equality observed |
| mp_erase.test | 10 | 0.000808s | 0.000821s | 0.000807s | byte equality observed |
| mp_erase_2.test | 10 | 0.000359s | 0.000355s | 0.000802s | byte equality observed |
| mp_eval_if.test | 10 | 0.000828s | 0.000793s | 0.000836s | byte equality observed |
| mp_eval_if_not.test | 10 | 0.000823s | 0.000796s | 0.000850s | byte equality observed |
| mp_eval_if_sf.test | 10 | 0.000795s | 0.000818s | 0.000822s | byte equality observed |
| mp_eval_or.test | 10 | 0.000809s | 0.000812s | 0.000834s | byte equality observed |
| mp_fill.test | 10 | 0.000793s | 0.000810s | 0.000809s | byte equality observed |
| mp_fill_2.test | 10 | 0.000369s | 0.000361s | 0.000785s | byte equality observed |
| mp_filter.test | 10 | 0.000809s | 0.000808s | 0.000792s | byte equality observed |
| mp_find.test | 10 | 0.000815s | 0.000809s | 0.000814s | byte equality observed |
| mp_find_if.test | 10 | 0.000793s | 0.000813s | 0.000833s | byte equality observed |
| mp_find_if_q.test | 10 | 0.000798s | 0.000828s | 0.000810s | byte equality observed |
| mp_flatten.test | 10 | 0.000811s | 0.000831s | 0.000816s | byte equality observed |
| mp_fold.test | 10 | 0.000838s | 0.000798s | 0.000850s | byte equality observed |
| mp_fold_q.test | 10 | 0.000827s | 0.000818s | 0.000846s | byte equality observed |
| mp_fold_q_sf.test | 10 | 0.000797s | 0.000847s | 0.000818s | byte equality observed |
| mp_for_each.test | 10 | 0.000831s | 0.000810s | 0.000817s | byte equality observed |
| mp_from_sequence.test | 10 | 0.000814s | 0.000784s | 0.000801s | byte equality observed |
| mp_from_sequence_2.test | 10 | 0.000829s | 0.000857s | 0.000852s | byte equality observed |
| mp_from_sequence_3.test | 10 | 0.000802s | 0.000808s | 0.000804s | byte equality observed |
| mp_front.test | 10 | 0.000806s | 0.000809s | 0.000787s | byte equality observed |
| mp_front_2.test | 10 | 0.000365s | 0.000365s | 0.000783s | byte equality observed |
| mp_identity.test | 10 | 0.000783s | 0.000819s | 0.000797s | byte equality observed |
| mp_if.test | 10 | 0.000802s | 0.000814s | 0.000797s | byte equality observed |
| mp_if_sf.test | 10 | 0.000814s | 0.000853s | 0.000798s | byte equality observed |
| mp_inherit.test | 10 | 0.000821s | 0.000820s | 0.000800s | byte equality observed |
| mp_insert.test | 10 | 0.000822s | 0.000786s | 0.000829s | byte equality observed |
| mp_insert_2.test | 10 | 0.000364s | 0.000364s | 0.000755s | byte equality observed |
| mp_intersperse.test | 10 | 0.000837s | 0.000812s | 0.000785s | byte equality observed |
| mp_invoke_q.test | 10 | 0.000800s | 0.000810s | 0.000778s | byte equality observed |
| mp_invoke_q_sf.test | 10 | 0.000797s | 0.000826s | 0.000787s | byte equality observed |
| mp_iota.test | 10 | 0.000804s | 0.000838s | 0.000811s | byte equality observed |
| mp_iota_2.test | 10 | 0.000794s | 0.000817s | 0.000789s | byte equality observed |
| mp_is_list.test | 10 | 0.000804s | 0.000797s | 0.000803s | byte equality observed |
| mp_is_map.test | 10 | 0.000809s | 0.000820s | 0.000798s | byte equality observed |
| mp_is_set.test | 10 | 0.000812s | 0.000838s | 0.000811s | byte equality observed |
| mp_is_value_list.test | 10 | 0.000815s | 0.000817s | 0.000799s | byte equality observed |
| mp_iterate.test | 10 | 0.000816s | 0.000826s | 0.000796s | byte equality observed |
| mp_join.test | 10 | 0.000812s | 0.000829s | 0.000816s | byte equality observed |
| mp_lambda.test | 10 | 0.000832s | 0.000818s | 0.000830s | byte equality observed |
| mp_less.test | 10 | 0.000795s | 0.000815s | 0.000824s | byte equality observed |
| mp_list_c.test | 10 | 0.000800s | 0.000817s | 0.000818s | byte equality observed |
| mp_list_v.test | 10 | 0.000361s | 0.000360s | 0.000775s | byte equality observed |
| mp_map_contains.test | 10 | 0.000793s | 0.000802s | 0.000801s | byte equality observed |
| mp_map_erase.test | 10 | 0.000816s | 0.000815s | 0.000790s | byte equality observed |
| mp_map_find.test | 10 | 0.000805s | 0.000847s | 0.000815s | byte equality observed |
| mp_map_find_2.test | 10 | 0.000811s | 0.000840s | 0.000824s | byte equality observed |
| mp_map_find_3.test | 10 | 0.000803s | 0.000859s | 0.000828s | byte equality observed |
| mp_map_find_4.test | 10 | 0.000791s | 0.000840s | 0.000853s | byte equality observed |
| mp_map_insert.test | 10 | 0.000817s | 0.000829s | 0.000809s | byte equality observed |
| mp_map_keys.test | 10 | 0.000809s | 0.000821s | 0.000806s | byte equality observed |
| mp_map_replace.test | 10 | 0.000804s | 0.000821s | 0.000804s | byte equality observed |
| mp_map_update.test | 10 | 0.000799s | 0.000823s | 0.000834s | byte equality observed |
| mp_map_update_q.test | 10 | 0.000817s | 0.000792s | 0.000820s | byte equality observed |
| mp_max.test | 10 | 0.000787s | 0.000805s | 0.000800s | byte equality observed |
| mp_max_element.test | 10 | 0.000796s | 0.000788s | 0.000832s | byte equality observed |
| mp_max_element_2.test | 10 | 0.000359s | 0.000373s | 0.000778s | byte equality observed |
| mp_max_element_q.test | 10 | 0.000788s | 0.000802s | 0.000773s | byte equality observed |
| mp_max_element_q_2.test | 10 | 0.000360s | 0.000353s | 0.000801s | byte equality observed |
| mp_min.test | 10 | 0.000803s | 0.000854s | 0.000811s | byte equality observed |
| mp_min_element.test | 10 | 0.000805s | 0.000846s | 0.000809s | byte equality observed |
| mp_min_element_2.test | 10 | 0.000362s | 0.000371s | 0.000814s | byte equality observed |
| mp_min_element_q.test | 10 | 0.000817s | 0.000800s | 0.000775s | byte equality observed |
| mp_min_element_q_2.test | 10 | 0.000366s | 0.000349s | 0.000792s | byte equality observed |
| mp_none_of.test | 10 | 0.000796s | 0.000821s | 0.000801s | byte equality observed |
| mp_none_of_q.test | 10 | 0.000817s | 0.000794s | 0.000825s | byte equality observed |
| mp_not_fn.test | 10 | 0.000820s | 0.000803s | 0.000845s | byte equality observed |
| mp_nth_element.test | 10 | 0.000788s | 0.000833s | 0.000832s | byte equality observed |
| mp_nth_element_q.test | 10 | 0.000806s | 0.000849s | 0.000823s | byte equality observed |
| mp_or.test | 10 | 0.000813s | 0.000817s | 0.000802s | byte equality observed |
| mp_pairwise_fold.test | 10 | 0.000808s | 0.000804s | 0.000803s | byte equality observed |
| mp_pairwise_fold_q.test | 10 | 0.000815s | 0.000801s | 0.000842s | byte equality observed |
| mp_partial_sum.test | 10 | 0.000819s | 0.000810s | 0.000826s | byte equality observed |
| mp_partition.test | 10 | 0.000823s | 0.000810s | 0.000829s | byte equality observed |
| mp_partition_q.test | 10 | 0.000840s | 0.000797s | 0.000826s | byte equality observed |
| mp_plus.test | 10 | 0.000832s | 0.000797s | 0.000824s | byte equality observed |
| mp_pop_back.test | 10 | 0.000843s | 0.000811s | 0.000831s | byte equality observed |
| mp_pop_back_2.test | 10 | 0.000363s | 0.000362s | 0.000811s | byte equality observed |
| mp_pop_front.test | 10 | 0.000790s | 0.000831s | 0.000781s | byte equality observed |
| mp_pop_front_2.test | 10 | 0.000365s | 0.000368s | 0.000763s | byte equality observed |
| mp_power_set.test | 10 | 0.000821s | 0.000802s | 0.000789s | byte equality observed |
| mp_product.test | 10 | 0.000806s | 0.000805s | 0.000774s | byte equality observed |
| mp_push_back.test | 10 | 0.000808s | 0.000797s | 0.000800s | byte equality observed |
| mp_push_back_2.test | 10 | 0.000366s | 0.000360s | 0.000763s | byte equality observed |
| mp_push_front.test | 10 | 0.000795s | 0.000819s | 0.000799s | byte equality observed |
| mp_push_front_2.test | 10 | 0.000359s | 0.000357s | 0.000794s | byte equality observed |
| mp_quote.test | 10 | 0.000812s | 0.000825s | 0.000770s | byte equality observed |
| mp_quote_trait.test | 10 | 0.000802s | 0.000797s | 0.000822s | byte equality observed |
| mp_remove.test | 10 | 0.000810s | 0.000843s | 0.000827s | byte equality observed |
| mp_remove_if.test | 10 | 0.000810s | 0.000816s | 0.000787s | byte equality observed |
| mp_remove_if_q.test | 10 | 0.000820s | 0.000826s | 0.000807s | byte equality observed |
| mp_rename.test | 10 | 0.000826s | 0.000832s | 0.000828s | byte equality observed |
| mp_rename_2.test | 10 | 0.000368s | 0.000363s | 0.000824s | byte equality observed |
| mp_rename_v.test | 10 | 0.000364s | 0.000352s | 0.000793s | byte equality observed |
| mp_repeat.test | 10 | 0.000802s | 0.000815s | 0.000781s | byte equality observed |
| mp_repeat_2.test | 10 | 0.000359s | 0.000358s | 0.000805s | byte equality observed |
| mp_repeat_3.test | 10 | 0.000803s | 0.000818s | 0.000794s | byte equality observed |
| mp_replace.test | 10 | 0.000783s | 0.000838s | 0.000800s | byte equality observed |
| mp_replace_at.test | 10 | 0.000813s | 0.000819s | 0.000811s | byte equality observed |
| mp_replace_at_c.test | 10 | 0.000824s | 0.000809s | 0.000805s | byte equality observed |
| mp_replace_front.test | 10 | 0.000802s | 0.000805s | 0.000821s | byte equality observed |
| mp_replace_front_2.test | 10 | 0.000363s | 0.000367s | 0.000792s | byte equality observed |
| mp_replace_if.test | 10 | 0.000794s | 0.000823s | 0.000795s | byte equality observed |
| mp_replace_if_q.test | 10 | 0.000786s | 0.000830s | 0.000813s | byte equality observed |
| mp_replace_second.test | 10 | 0.000800s | 0.000806s | 0.000806s | byte equality observed |
| mp_replace_second_2.test | 10 | 0.000365s | 0.000367s | 0.000797s | byte equality observed |
| mp_replace_third.test | 10 | 0.000798s | 0.000809s | 0.000804s | byte equality observed |
| mp_replace_third_2.test | 10 | 0.000363s | 0.000356s | 0.000796s | byte equality observed |
| mp_reverse.test | 10 | 0.000832s | 0.000835s | 0.000809s | byte equality observed |
| mp_reverse_fold.test | 10 | 0.000832s | 0.000826s | 0.000830s | byte equality observed |
| mp_reverse_fold_q.test | 10 | 0.000829s | 0.000806s | 0.000779s | byte equality observed |
| mp_rotate_left.test | 10 | 0.000841s | 0.000791s | 0.000787s | byte equality observed |
| mp_rotate_right.test | 10 | 0.000819s | 0.000805s | 0.000821s | byte equality observed |
| mp_same.test | 10 | 0.000821s | 0.000796s | 0.000802s | byte equality observed |
| mp_second.test | 10 | 0.000813s | 0.000826s | 0.000798s | byte equality observed |
| mp_second_2.test | 10 | 0.000366s | 0.000359s | 0.000802s | byte equality observed |
| mp_set_contains.test | 10 | 0.000794s | 0.000811s | 0.000812s | byte equality observed |
| mp_set_difference.test | 10 | 0.000798s | 0.000807s | 0.000834s | byte equality observed |
| mp_set_difference_sf.test | 10 | 0.000815s | 0.000833s | 0.000825s | byte equality observed |
| mp_set_intersection.test | 10 | 0.000810s | 0.000845s | 0.000807s | byte equality observed |
| mp_set_intersection_sf.test | 10 | 0.000837s | 0.000803s | 0.000818s | byte equality observed |
| mp_set_push_back.test | 10 | 0.000796s | 0.000811s | 0.000779s | byte equality observed |
| mp_set_push_front.test | 10 | 0.000829s | 0.000811s | 0.000816s | byte equality observed |
| mp_set_union.test | 10 | 0.000829s | 0.000813s | 0.000823s | byte equality observed |
| mp_set_union_sf.test | 10 | 0.000805s | 0.000842s | 0.000824s | byte equality observed |
| mp_similar.test | 10 | 0.000816s | 0.000844s | 0.000801s | byte equality observed |
| mp_size.test | 10 | 0.000793s | 0.000832s | 0.000806s | byte equality observed |
| mp_size_2.test | 10 | 0.000360s | 0.000354s | 0.000781s | byte equality observed |
| mp_slice.test | 10 | 0.000814s | 0.000803s | 0.000810s | byte equality observed |
| mp_slice_2.test | 10 | 0.000360s | 0.000366s | 0.000800s | byte equality observed |
| mp_sliding_fold.test | 10 | 0.000836s | 0.000815s | 0.000807s | byte equality observed |
| mp_sliding_fold_q.test | 10 | 0.000845s | 0.000842s | 0.000800s | byte equality observed |
| mp_sort.test | 10 | 0.000808s | 0.000820s | 0.000806s | byte equality observed |
| mp_sort_q.test | 10 | 0.000817s | 0.000800s | 0.000826s | byte equality observed |
| mp_split.test | 10 | 0.000837s | 0.000832s | 0.000778s | byte equality observed |
| mp_starts_with.test | 10 | 0.000828s | 0.000824s | 0.000795s | byte equality observed |
| mp_starts_with_sf.test | 10 | 0.000806s | 0.000804s | 0.000814s | byte equality observed |
| mp_take.test | 10 | 0.000828s | 0.000816s | 0.000807s | byte equality observed |
| mp_take_2.test | 10 | 0.000360s | 0.000364s | 0.000816s | byte equality observed |
| mp_third.test | 10 | 0.000797s | 0.000806s | 0.000802s | byte equality observed |
| mp_third_2.test | 10 | 0.000363s | 0.000358s | 0.000802s | byte equality observed |
| mp_transform.test | 10 | 0.000812s | 0.000807s | 0.000813s | byte equality observed |
| mp_transform_2.test | 10 | 0.000776s | 0.000804s | 0.000818s | byte equality observed |
| mp_transform_front.test | 10 | 0.000803s | 0.000792s | 0.000790s | byte equality observed |
| mp_transform_front_2.test | 10 | 0.000358s | 0.000361s | 0.000814s | byte equality observed |
| mp_transform_if.test | 10 | 0.000824s | 0.000819s | 0.000817s | byte equality observed |
| mp_transform_if_q.test | 10 | 0.000818s | 0.000817s | 0.000844s | byte equality observed |
| mp_transform_q.test | 10 | 0.000804s | 0.000825s | 0.000823s | byte equality observed |
| mp_transform_q_2.test | 10 | 0.000825s | 0.000799s | 0.000834s | byte equality observed |
| mp_transform_second.test | 10 | 0.000795s | 0.000812s | 0.000811s | byte equality observed |
| mp_transform_second_2.test | 10 | 0.000359s | 0.000359s | 0.000799s | byte equality observed |
| mp_transform_sf.test | 10 | 0.000793s | 0.000824s | 0.000805s | byte equality observed |
| mp_transform_third.test | 10 | 0.000784s | 0.000825s | 0.000825s | byte equality observed |
| mp_transform_third_2.test | 10 | 0.000362s | 0.000354s | 0.000813s | byte equality observed |
| mp_unique.test | 10 | 0.000814s | 0.000837s | 0.000794s | byte equality observed |
| mp_unique_if.test | 10 | 0.000811s | 0.000840s | 0.000801s | byte equality observed |
| mp_unique_if_q.test | 10 | 0.000815s | 0.000805s | 0.000820s | byte equality observed |
| mp_valid.test | 10 | 0.000805s | 0.000821s | 0.000840s | byte equality observed |
| mp_valid_and_true.test | 10 | 0.000814s | 0.000796s | 0.000810s | byte equality observed |
| mp_value.test | 10 | 0.000365s | 0.000359s | 0.000800s | byte equality observed |
| mp_with_index.test | 10 | 0.001121s | 0.001071s | 0.001007s | byte equality observed |
| mp_with_index_cx.test | 10 | 0.000361s | 0.000359s | 0.000797s | byte equality observed |
| mpl.test | 10 | 0.000821s | 0.000801s | 0.000818s | byte equality observed |
| mpl_list.test | 10 | 0.000794s | 0.000802s | 0.000827s | byte equality observed |
| mpl_tuple.test | 10 | 0.000802s | 0.000805s | 0.000798s | byte equality observed |
| mpl_version.test | 10 | 0.000807s | 0.000785s | 0.000799s | byte equality observed |
| set_version.test | 10 | 0.000821s | 0.000793s | 0.000790s | byte equality observed |
| tuple_apply.test | 10 | 0.000822s | 0.000805s | 0.000808s | byte equality observed |
| tuple_for_each.test | 10 | 0.000789s | 0.000808s | 0.000821s | byte equality observed |
| tuple_transform.test | 10 | 0.000812s | 0.000829s | 0.000825s | byte equality observed |
| tuple_transform_2.test | 10 | 0.000804s | 0.000823s | 0.000830s | byte equality observed |
| tuple_version.test | 10 | 0.000795s | 0.000821s | 0.000803s | byte equality observed |
| utility_version.test | 10 | 0.000806s | 0.000828s | 0.000822s | byte equality observed |
| version.test | 10 | 0.000812s | 0.000804s | 0.000816s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43670794197).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
