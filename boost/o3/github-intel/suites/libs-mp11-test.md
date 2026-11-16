# libs/mp11/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| mp11.test | COMPILE | 0.028991 | 0.059720 | 0.092390 | — | — | — |
| complex_h.test | COMPILE | 0.117816 | 0.256703 | 0.346046 | — | — | — |
| mp_size.test | RUN | 0.134084 | 0.868816 | 0.460544 | 0.001175 | 0.001338 | 0.001111 |
| mp_size_2.test | RUN | 0.012046 | 0.029561 | 0.041973 | 0.000414 | 0.000594 | 0.001168 |
| mp_empty.test | RUN | 0.136755 | 0.537306 | 0.451197 | 0.000996 | 0.001384 | 0.001144 |
| mp_empty_2.test | RUN | 0.012113 | 0.030759 | 0.043000 | 0.000467 | 0.000566 | 0.001099 |
| mp_assign.test | RUN | 0.153513 | 1.149784 | 0.606170 | 0.001018 | 0.001405 | 0.001063 |
| mp_assign_2.test | RUN | 0.012621 | 0.030975 | 0.043749 | 0.000358 | 0.000552 | 0.001172 |
| mp_clear.test | RUN | 0.129482 | 0.485138 | 0.450777 | 0.001748 | 0.001386 | 0.001145 |
| mp_clear_2.test | RUN | 0.012321 | 0.030338 | 0.042995 | 0.000484 | 0.000570 | 0.001245 |
| mp_front.test | RUN | 0.141411 | 0.769016 | 0.498949 | 0.001139 | 0.001374 | 0.001207 |
| mp_front_2.test | RUN | 0.011897 | 0.029739 | 0.042918 | 0.000466 | 0.000490 | 0.001196 |
| mp_pop_front.test | RUN | 0.137404 | 0.814256 | 0.503715 | 0.001123 | 0.001227 | 0.001172 |
| mp_pop_front_2.test | RUN | 0.010997 | 0.030632 | 0.041370 | 0.000479 | 0.000557 | 0.001129 |
| mp_second.test | RUN | 0.125830 | 0.516702 | 0.483771 | 0.001247 | 0.001210 | 0.001183 |
| mp_second_2.test | RUN | 0.013092 | 0.030730 | 0.044110 | 0.000415 | 0.000579 | 0.001157 |
| mp_third.test | RUN | 0.131650 | 0.471641 | 0.458858 | 0.001105 | 0.001420 | 0.001199 |
| mp_third_2.test | RUN | 0.012183 | 0.030660 | 0.042868 | 0.000477 | 0.000511 | 0.001080 |
| mp_push_front.test | RUN | 0.183917 | 1.744989 | 0.826197 | 0.001139 | 0.001513 | 0.001143 |
| mp_push_front_2.test | RUN | 0.010979 | 0.029672 | 0.042154 | 0.000463 | 0.000551 | 0.001246 |
| mp_push_back.test | RUN | 0.182927 | 1.741941 | 0.836767 | 0.001081 | 0.001298 | 0.001079 |
| mp_push_back_2.test | RUN | 0.011959 | 0.030905 | 0.043346 | 0.000461 | 0.000494 | 0.001232 |
| mp_rename.test | RUN | 0.173254 | 1.605934 | 0.718887 | 0.001150 | 0.001372 | 0.001087 |
| mp_rename_2.test | RUN | 0.009721 | 0.030853 | 0.043950 | 0.000401 | 0.000535 | 0.001098 |
| mp_append.test | RUN | 0.181843 | 1.813006 | 0.786016 | 0.001168 | 0.001486 | 0.001243 |
| mp_append_2.test | RUN | 0.402858 | 4.104756 | 1.085105 | 0.001204 | 0.001449 | 0.001235 |
| mp_append_3.test | RUN | 0.011709 | 0.030926 | 0.043193 | 0.000480 | 0.000593 | 0.001143 |
| mp_append_sf.test | RUN | 0.129989 | 0.440296 | 0.419227 | 0.001142 | 0.001314 | 0.001333 |
| mp_replace_front.test | RUN | 0.163245 | 1.288382 | 0.631465 | 0.001197 | 0.001384 | 0.001135 |
| mp_replace_front_2.test | RUN | 0.012070 | 0.031050 | 0.044628 | 0.000495 | 0.000522 | 0.001188 |
| mp_replace_second.test | RUN | 0.155569 | 0.818701 | 0.591114 | 0.001157 | 0.001300 | 0.001070 |
| mp_replace_second_2.test | RUN | 0.012847 | 0.030164 | 0.041891 | 0.000470 | 0.000546 | 0.001008 |
| mp_replace_third.test | RUN | 0.148562 | 0.680490 | 0.526156 | 0.001224 | 0.001238 | 0.001357 |
| mp_replace_third_2.test | RUN | 0.011261 | 0.030357 | 0.044815 | 0.000462 | 0.000494 | 0.001150 |
| mp_apply_q.test | RUN | 0.172574 | 1.601882 | 0.710096 | 0.001133 | 0.001446 | 0.001166 |
| mp_apply_q_sf.test | RUN | 0.132985 | 0.451786 | 0.434578 | 0.001109 | 0.001355 | 0.001237 |
| mp_is_list.test | RUN | 0.132736 | 0.532213 | 0.449651 | 0.001083 | 0.001278 | 0.001200 |
| mp_list_c.test | RUN | 0.141984 | 0.651802 | 0.501234 | 0.001268 | 0.001410 | 0.001245 |
| mp_transform_front.test | RUN | 0.156183 | 1.300504 | 0.609044 | 0.001193 | 0.001401 | 0.001057 |
| mp_transform_front_2.test | RUN | 0.011670 | 0.030444 | 0.044105 | 0.000440 | 0.000576 | 0.001220 |
| mp_transform_second.test | RUN | 0.153065 | 1.121403 | 0.571100 | 0.000991 | 0.001310 | 0.001124 |
| mp_transform_second_2.test | RUN | 0.012746 | 0.029424 | 0.041986 | 0.000487 | 0.000667 | 0.001063 |
| mp_transform_third.test | RUN | 0.139122 | 0.847126 | 0.512889 | 0.001151 | 0.001447 | 0.001029 |
| mp_transform_third_2.test | RUN | 0.012444 | 0.031271 | 0.043004 | 0.000494 | 0.000516 | 0.001104 |
| mp_list_v.test | RUN | 0.012407 | 0.030012 | 0.043474 | 0.000515 | 0.000592 | 0.001127 |
| mp_rename_v.test | RUN | 0.012351 | 0.030934 | 0.040905 | 0.000433 | 0.000535 | 0.001031 |
| mp_is_value_list.test | RUN | 0.125980 | 0.326686 | 0.412910 | 0.001146 | 0.001374 | 0.001216 |
| mp_transform.test | RUN | 0.331698 | 2.753246 | 1.328284 | 0.001289 | 0.001278 | 0.001240 |
| mp_transform_2.test | RUN | 0.120546 | 0.294688 | 0.378716 | 0.001076 | 0.001387 | 0.001176 |
| mp_transform_q.test | RUN | 0.318703 | 2.622995 | 1.292007 | 0.001159 | 0.001569 | 0.001180 |
| mp_transform_q_2.test | RUN | 0.330386 | 0.827925 | 1.641834 | 0.001189 | 0.001229 | 0.001100 |
| mp_transform_sf.test | RUN | 0.140962 | 0.453160 | 0.453284 | 0.001246 | 0.001291 | 0.001056 |
| mp_transform_if.test | RUN | 0.174395 | 1.307067 | 0.695715 | 0.001254 | 0.001257 | 0.001291 |
| mp_transform_if_q.test | RUN | 0.174151 | 1.305677 | 0.700373 | 0.001258 | 0.001230 | 0.001145 |
| mp_filter.test | RUN | 0.152366 | 0.757436 | 0.522896 | 0.001119 | 0.001102 | 0.001263 |
| mp_fill.test | RUN | 0.145403 | 0.563420 | 0.489698 | 0.000982 | 0.001405 | 0.001276 |
| mp_fill_2.test | RUN | 0.021192 | 0.047641 | 0.071078 | 0.000461 | 0.000544 | 0.001068 |
| mp_count.test | RUN | 0.275689 | 1.403547 | 0.769771 | 0.001158 | 0.001448 | 0.001184 |
| mp_count_if.test | RUN | 0.283539 | 1.415480 | 0.828329 | 0.001104 | 0.001339 | 0.001196 |
| mp_count_if_q.test | RUN | 0.147990 | 0.921630 | 0.510617 | 0.001314 | 0.001321 | 0.001308 |
| mp_contains.test | RUN | 0.138693 | 0.552833 | 0.472037 | 0.001095 | 0.001260 | 0.001159 |
| mp_starts_with.test | RUN | 0.141902 | 0.556761 | 0.475500 | 0.001102 | 0.001386 | 0.001219 |
| mp_starts_with_sf.test | RUN | 0.135762 | 0.457815 | 0.438798 | 0.001060 | 0.001354 | 0.001104 |
| mp_repeat.test | RUN | 0.216418 | 2.322738 | 0.900916 | 0.001067 | 0.001276 | 0.001182 |
| mp_repeat_2.test | RUN | 0.021495 | 0.046628 | 0.069652 | 0.000469 | 0.000603 | 0.001111 |
| mp_repeat_3.test | RUN | 0.173918 | 0.289789 | 0.433708 | 0.001155 | 0.001285 | 0.001222 |
| mp_product.test | RUN | 0.157129 | 1.400714 | 0.661712 | 0.001186 | 0.001282 | 0.001254 |
| mp_drop.test | RUN | 0.182160 | 1.749456 | 0.721073 | 0.001033 | 0.001246 | 0.000995 |
| mp_drop_2.test | RUN | 0.021635 | 0.047639 | 0.067704 | 0.000420 | 0.000556 | 0.001198 |
| mp_iota.test | RUN | 0.170894 | 1.457793 | 0.665979 | 0.001138 | 0.001207 | 0.001164 |
| mp_iota_2.test | RUN | 0.183840 | 1.774358 | 0.761961 | 0.001005 | 0.001376 | 0.001113 |
| mp_at.test | RUN | 0.144775 | 0.752972 | 0.518816 | 0.001129 | 0.001482 | 0.001196 |
| mp_at_2.test | RUN | 0.021096 | 0.048340 | 0.071796 | 0.000464 | 0.000552 | 0.001162 |
| mp_at_sf.test | RUN | 0.131582 | 0.461358 | 0.444890 | 0.001116 | 0.001468 | 0.001132 |
| mp_take.test | RUN | 0.245074 | 2.308625 | 0.889159 | 0.001248 | 0.001360 | 0.001302 |
| mp_take_2.test | RUN | 0.021040 | 0.046317 | 0.068309 | 0.000479 | 0.000453 | 0.000940 |
| mp_slice.test | RUN | 0.287384 | 2.341284 | 1.175123 | 0.001143 | 0.001543 | 0.001154 |
| mp_slice_2.test | RUN | 0.021103 | 0.046128 | 0.072095 | 0.000503 | 0.000618 | 0.001215 |
| mp_replace.test | RUN | 0.175006 | 1.172696 | 0.727000 | 0.001267 | 0.001408 | 0.001249 |
| mp_replace_if.test | RUN | 0.166450 | 1.034651 | 0.672067 | 0.001104 | 0.001266 | 0.001181 |
| mp_replace_if_q.test | RUN | 0.170537 | 1.025122 | 0.670053 | 0.001167 | 0.001431 | 0.001141 |
| mp_copy_if.test | RUN | 0.171611 | 1.459278 | 0.638543 | 0.001081 | 0.001262 | 0.001175 |
| mp_copy_if_q.test | RUN | 0.171644 | 1.462391 | 0.643799 | 0.001055 | 0.001365 | 0.001263 |
| mp_remove.test | RUN | 0.169266 | 0.972035 | 0.653104 | 0.001109 | 0.001322 | 0.001238 |
| mp_remove_if.test | RUN | 0.175924 | 1.541304 | 0.687270 | 0.001280 | 0.001416 | 0.001208 |
| mp_remove_if_q.test | RUN | 0.174940 | 1.539444 | 0.684792 | 0.001095 | 0.000970 | 0.001242 |
| mp_partition.test | RUN | 0.176520 | 1.456742 | 0.738788 | 0.000910 | 0.001311 | 0.001124 |
| mp_partition_q.test | RUN | 0.176070 | 1.453459 | 0.735323 | 0.001129 | 0.001446 | 0.001158 |
| mp_sort.test | RUN | 0.165748 | 1.041066 | 0.636741 | 0.001374 | 0.001356 | 0.001353 |
| mp_sort_q.test | RUN | 0.161115 | 1.024554 | 0.634185 | 0.001161 | 0.001401 | 0.001144 |
| mp_find.test | RUN | 0.163641 | 1.112583 | 0.550480 | 0.001187 | 0.001252 | 0.001149 |
| mp_find_if.test | RUN | 0.152816 | 1.017052 | 0.518387 | 0.001226 | 0.001264 | 0.001135 |
| mp_find_if_q.test | RUN | 0.168453 | 1.142769 | 0.643583 | 0.001358 | 0.001304 | 0.001347 |
| mp_reverse.test | RUN | 0.370136 | 3.042180 | 1.274713 | 0.001182 | 0.001445 | 0.001080 |
| mp_fold.test | RUN | 0.620857 | 2.400386 | 3.212757 | 0.001104 | 0.001355 | 0.001238 |
| mp_fold_q.test | RUN | 0.160077 | 1.012107 | 0.600720 | 0.001338 | 0.001334 | 0.001132 |
| mp_fold_q_sf.test | RUN | 0.142612 | 0.461533 | 0.470443 | 0.001064 | 0.001388 | 0.001148 |
| mp_reverse_fold.test | RUN | 0.292881 | 2.267470 | 0.894744 | 0.001095 | 0.001437 | 0.001150 |
| mp_reverse_fold_q.test | RUN | 0.164637 | 1.220494 | 0.646519 | 0.001286 | 0.001282 | 0.001264 |
| mp_unique.test | RUN | 0.163788 | 1.112142 | 0.632913 | 0.001202 | 0.001342 | 0.001183 |
| mp_unique_if.test | RUN | 0.295639 | 2.341422 | 0.999827 | 0.001113 | 0.001296 | 0.001212 |
| mp_unique_if_q.test | RUN | 0.265662 | 2.323174 | 0.826386 | 0.001231 | 0.001536 | 0.001264 |
| mp_all_of.test | RUN | 0.396477 | 1.257434 | 1.055258 | 0.001332 | 0.001321 | 0.001200 |
| mp_all_of_q.test | RUN | 0.140651 | 0.547799 | 0.462385 | 0.001361 | 0.001422 | 0.001327 |
| mp_any_of.test | RUN | 0.390357 | 1.341352 | 1.043275 | 0.001133 | 0.001489 | 0.001125 |
| mp_any_of_q.test | RUN | 0.140897 | 0.546851 | 0.452761 | 0.001222 | 0.001280 | 0.001178 |
| mp_none_of.test | RUN | 0.391232 | 1.318277 | 1.036620 | 0.001108 | 0.001405 | 0.001164 |
| mp_none_of_q.test | RUN | 0.138158 | 0.550177 | 0.450178 | 0.001289 | 0.001449 | 0.001286 |
| mp_replace_at.test | RUN | 0.177434 | 1.120023 | 0.721910 | 0.001222 | 0.001438 | 0.001145 |
| mp_replace_at_c.test | RUN | 0.176817 | 1.127830 | 0.717980 | 0.001174 | 0.001460 | 0.001079 |
| mp_for_each.test | RUN | 0.164182 | 0.744997 | 0.707922 | 0.001185 | 0.001306 | 0.001130 |
| mp_insert.test | RUN | 0.273590 | 2.330926 | 1.056450 | 0.001269 | 0.001302 | 0.001228 |
| mp_insert_2.test | RUN | 0.022050 | 0.047504 | 0.071828 | 0.000409 | 0.000480 | 0.001082 |
| mp_erase.test | RUN | 0.300496 | 2.430964 | 1.201336 | 0.001320 | 0.001359 | 0.001180 |
| mp_erase_2.test | RUN | 0.021481 | 0.048086 | 0.072566 | 0.000468 | 0.000569 | 0.001291 |
| mp_with_index.test | RUN | 0.396526 | 4.898585 | 2.626872 | 0.001542 | 0.001640 | 0.001477 |
| mp_with_index_cx.test | RUN | 0.002927 | 0.015078 | 0.022576 | 0.000484 | 0.000619 | 0.001217 |
| mp_from_sequence.test | RUN | 0.172576 | 1.286003 | 0.681354 | 0.001315 | 0.001355 | 0.000819 |
| mp_from_sequence_2.test | RUN | 0.181691 | 1.510600 | 0.752136 | 0.001047 | 0.001428 | 0.001282 |
| mp_from_sequence_3.test | RUN | 0.150120 | 0.662072 | 0.532371 | 0.001422 | 0.001346 | 0.001112 |
| mp_min_element.test | RUN | 0.142845 | 0.601427 | 0.490876 | 0.001139 | 0.001242 | 0.001108 |
| mp_min_element_2.test | RUN | 0.021476 | 0.047542 | 0.071073 | 0.000473 | 0.000547 | 0.001116 |
| mp_min_element_q.test | RUN | 0.147447 | 0.592526 | 0.482091 | 0.001168 | 0.001395 | 0.001125 |
| mp_min_element_q_2.test | RUN | 0.021995 | 0.046771 | 0.070090 | 0.000515 | 0.000549 | 0.001159 |
| mp_max_element.test | RUN | 0.148515 | 0.601412 | 0.475851 | 0.001322 | 0.001351 | 0.001227 |
| mp_max_element_2.test | RUN | 0.022287 | 0.047108 | 0.073176 | 0.000452 | 0.000588 | 0.001061 |
| mp_max_element_q.test | RUN | 0.152554 | 0.599287 | 0.488411 | 0.001228 | 0.001402 | 0.001150 |
| mp_max_element_q_2.test | RUN | 0.022647 | 0.047158 | 0.065038 | 0.000476 | 0.000610 | 0.001122 |
| mp_nth_element.test | RUN | 0.164394 | 0.859402 | 0.595532 | 0.001115 | 0.001386 | 0.001010 |
| mp_nth_element_q.test | RUN | 0.169133 | 0.837906 | 0.597174 | 0.001152 | 0.001178 | 0.001058 |
| mp_back.test | RUN | 0.155031 | 0.701565 | 0.568860 | 0.001062 | 0.001181 | 0.001054 |
| mp_back_2.test | RUN | 0.022018 | 0.047811 | 0.069646 | 0.000464 | 0.000478 | 0.001082 |
| mp_pop_back.test | RUN | 0.464926 | 4.715148 | 1.213467 | 0.001218 | 0.001594 | 0.001194 |
| mp_pop_back_2.test | RUN | 0.021693 | 0.047958 | 0.068212 | 0.000453 | 0.000544 | 0.001179 |
| mp_flatten.test | RUN | 0.187701 | 1.665209 | 0.804165 | 0.001304 | 0.001510 | 0.001099 |
| mp_rotate_left.test | RUN | 0.186592 | 1.792310 | 0.790495 | 0.000796 | 0.001431 | 0.001254 |
| mp_rotate_right.test | RUN | 0.188981 | 1.791121 | 0.802509 | 0.001296 | 0.001132 | 0.001319 |
| mp_power_set.test | RUN | 0.184768 | 1.711647 | 0.796691 | 0.001316 | 0.001604 | 0.001157 |
| mp_partial_sum.test | RUN | 0.251422 | 2.288805 | 0.921649 | 0.001335 | 0.001307 | 0.001104 |
| mp_iterate.test | RUN | 0.164083 | 0.675263 | 0.626929 | 0.001320 | 0.001430 | 0.000980 |
| mp_pairwise_fold.test | RUN | 0.183957 | 1.586134 | 0.820030 | 0.001061 | 0.001343 | 0.001308 |
| mp_pairwise_fold_q.test | RUN | 0.141905 | 0.448962 | 0.454722 | 0.001157 | 0.001396 | 0.001231 |
| mp_sliding_fold.test | RUN | 0.366414 | 3.043229 | 1.521466 | 0.001357 | 0.001230 | 0.001202 |
| mp_sliding_fold_q.test | RUN | 0.368514 | 3.020610 | 1.517831 | 0.001205 | 0.001409 | 0.001052 |
| mp_intersperse.test | RUN | 0.172812 | 1.116107 | 0.709685 | 0.001235 | 0.001470 | 0.001206 |
| mp_split.test | RUN | 0.256605 | 2.173952 | 0.995263 | 0.001188 | 0.001629 | 0.001111 |
| mp_join.test | RUN | 0.196945 | 1.831538 | 0.893268 | 0.001165 | 0.001251 | 0.001161 |
| integral.test | RUN | 0.150392 | 0.809404 | 0.518097 | 0.001084 | 0.001262 | 0.001206 |
| mp_value.test | RUN | 0.009397 | 0.025657 | 0.036526 | 0.000455 | 0.000493 | 0.001146 |
| mp_identity.test | RUN | 0.143158 | 0.726447 | 0.500280 | 0.001109 | 0.001375 | 0.001162 |
| mp_inherit.test | RUN | 0.132277 | 0.520720 | 0.467518 | 0.001206 | 0.001376 | 0.001168 |
| mp_if.test | RUN | 0.137852 | 0.590876 | 0.480416 | 0.001186 | 0.001339 | 0.001304 |
| mp_if_sf.test | RUN | 0.132544 | 0.440828 | 0.422489 | 0.001121 | 0.001509 | 0.001111 |
| mp_eval_if.test | RUN | 0.141540 | 0.632397 | 0.479755 | 0.001223 | 0.001349 | 0.001242 |
| mp_eval_if_sf.test | RUN | 0.129840 | 0.451189 | 0.429225 | 0.001251 | 0.001487 | 0.001191 |
| mp_valid.test | RUN | 0.135199 | 0.449020 | 0.444170 | 0.001085 | 0.001327 | 0.001258 |
| mp_defer.test | RUN | 0.146282 | 0.762610 | 0.529060 | 0.001139 | 0.001388 | 0.001145 |
| mp_quote.test | RUN | 0.146555 | 0.786334 | 0.543242 | 0.001256 | 0.001388 | 0.001321 |
| mp_invoke_q.test | RUN | 0.158086 | 1.028330 | 0.615045 | 0.001145 | 0.001366 | 0.001176 |
| mp_invoke_q_sf.test | RUN | 0.130136 | 0.439950 | 0.424548 | 0.001169 | 0.001507 | 0.001198 |
| mp_quote_trait.test | RUN | 0.147620 | 0.852188 | 0.526846 | 0.001203 | 0.001237 | 0.001222 |
| mp_cond.test | RUN | 0.138739 | 0.517183 | 0.456841 | 0.001332 | 0.001523 | 0.001198 |
| mp_cond_sf.test | RUN | 0.134433 | 0.436586 | 0.434262 | 0.001166 | 0.001300 | 0.001234 |
| mp_not_fn.test | RUN | 0.131973 | 0.450375 | 0.425132 | 0.001166 | 0.001346 | 0.001262 |
| mp_eval_if_not.test | RUN | 0.142589 | 0.639083 | 0.486201 | 0.001183 | 0.001262 | 0.001183 |
| mp_eval_or.test | RUN | 0.134672 | 0.335908 | 0.444680 | 0.001199 | 0.001259 | 0.001084 |
| mp_compose.test | RUN | 0.151293 | 1.057046 | 0.580855 | 0.001126 | 0.001355 | 0.001249 |
| mp_valid_and_true.test | RUN | 0.131830 | 0.538877 | 0.453027 | 0.001116 | 0.001338 | 0.001238 |
| mp_compose_sf.test | COMPILE | 0.031859 | 0.061815 | 0.093573 | — | — | — |
| integer_sequence.test | RUN | 0.164727 | 1.047423 | 0.656904 | 0.001139 | 0.001208 | 0.001221 |
| tuple_for_each.test | RUN | 0.135557 | 0.376099 | 0.470453 | 0.001148 | 0.001038 | 0.001172 |
| tuple_for_each_cx.test | COMPILE | 0.024124 | 0.054487 | 0.078485 | — | — | — |
| tuple_apply.test | RUN | 0.138801 | 0.376241 | 0.464983 | 0.001061 | 0.001440 | 0.001151 |
| tuple_apply_cx.test | COMPILE | 0.038536 | 0.073239 | 0.109788 | — | — | — |
| construct_from_tuple.test | RUN | 0.137501 | 0.398170 | 0.469881 | 0.001196 | 0.001210 | 0.001163 |
| construct_from_tuple_cx.test | COMPILE | 0.038567 | 0.076004 | 0.107444 | — | — | — |
| tuple_transform.test | RUN | 0.220434 | 0.820433 | 0.896964 | 0.001279 | 0.001230 | 0.001168 |
| tuple_transform_2.test | RUN | 0.190959 | 0.594704 | 0.826444 | 0.001294 | 0.001326 | 0.001141 |
| tuple_transform_cx.test | COMPILE | 0.032221 | 0.074063 | 0.105885 | — | — | — |
| mp_set_contains.test | RUN | 0.144434 | 0.544853 | 0.465689 | 0.001256 | 0.001283 | 0.001121 |
| mp_set_push_back.test | RUN | 0.191670 | 1.691907 | 0.811915 | 0.001210 | 0.001430 | 0.001215 |
| mp_set_push_front.test | RUN | 0.249946 | 2.030519 | 0.932946 | 0.001312 | 0.001504 | 0.000987 |
| mp_is_set.test | RUN | 0.140073 | 0.542326 | 0.458250 | 0.001147 | 0.001299 | 0.001220 |
| mp_set_union.test | RUN | 0.178205 | 1.434681 | 0.771129 | 0.000959 | 0.001369 | 0.000998 |
| mp_set_union_sf.test | RUN | 0.138620 | 0.432777 | 0.422466 | 0.001156 | 0.001295 | 0.001083 |
| mp_set_difference.test | RUN | 0.164474 | 1.122387 | 0.653073 | 0.001106 | 0.001296 | 0.001181 |
| mp_set_difference_sf.test | RUN | 0.131873 | 0.430307 | 0.425082 | 0.001062 | 0.001380 | 0.001060 |
| mp_set_intersection.test | RUN | 0.162864 | 1.118120 | 0.625562 | 0.001409 | 0.001229 | 0.001106 |
| mp_set_intersection_sf.test | RUN | 0.135453 | 0.429812 | 0.427000 | 0.001211 | 0.001329 | 0.001061 |
| mp_all.test | RUN | 0.137788 | 0.536495 | 0.466207 | 0.001339 | 0.001502 | 0.001162 |
| mp_all_2.test | RUN | 0.391716 | 1.178275 | 1.052983 | 0.001244 | 0.001259 | 0.001154 |
| mp_and.test | RUN | 0.136062 | 0.545355 | 0.450840 | 0.001355 | 0.001368 | 0.001233 |
| mp_any.test | RUN | 0.140509 | 0.547330 | 0.472469 | 0.001296 | 0.001469 | 0.001245 |
| mp_any_2.test | RUN | 0.399066 | 1.173485 | 1.027293 | 0.001200 | 0.001476 | 0.001156 |
| mp_or.test | RUN | 0.139398 | 0.541258 | 0.472413 | 0.001312 | 0.001376 | 0.001139 |
| mp_same.test | RUN | 0.276103 | 0.906164 | 0.738175 | 0.001080 | 0.001227 | 0.001068 |
| mp_plus.test | RUN | 0.142964 | 0.619026 | 0.511619 | 0.001057 | 0.001411 | 0.001110 |
| mp_less.test | RUN | 0.143324 | 0.528688 | 0.445288 | 0.001261 | 0.001204 | 0.001136 |
| mp_min.test | RUN | 0.135273 | 0.490360 | 0.447910 | 0.001223 | 0.001498 | 0.001189 |
| mp_max.test | RUN | 0.137180 | 0.543134 | 0.463323 | 0.001026 | 0.001396 | 0.001196 |
| mp_similar.test | RUN | 0.141001 | 0.528722 | 0.463430 | 0.001014 | 0.001334 | 0.001292 |
| mp_map_find.test | RUN | 0.165701 | 0.989413 | 0.611828 | 0.001321 | 0.001257 | 0.001296 |
| mp_map_find_2.test | RUN | 0.149916 | 0.380710 | 0.518006 | 0.001105 | 0.001450 | 0.001234 |
| mp_map_find_3.test | RUN | 0.150803 | 0.371490 | 0.524653 | 0.001183 | 0.001135 | 0.001263 |
| mp_map_find_4.test | RUN | 0.138523 | 0.347899 | 0.478369 | 0.001114 | 0.001207 | 0.001131 |
| mp_map_contains.test | RUN | 0.125965 | 0.548777 | 0.476727 | 0.001162 | 0.001460 | 0.001161 |
| mp_map_insert.test | RUN | 0.193527 | 1.887500 | 0.873686 | 0.001070 | 0.001414 | 0.001276 |
| mp_map_replace.test | RUN | 0.262739 | 2.168719 | 1.008583 | 0.001155 | 0.001269 | 0.001118 |
| mp_map_erase.test | RUN | 0.191535 | 1.606902 | 0.828068 | 0.001364 | 0.001357 | 0.001049 |
| mp_map_update.test | RUN | 0.164001 | 1.029304 | 0.639316 | 0.001044 | 0.001428 | 0.001103 |
| mp_map_update_q.test | RUN | 0.161861 | 1.039683 | 0.643261 | 0.001217 | 0.001311 | 0.001131 |
| mp_map_keys.test | RUN | 0.161318 | 0.917823 | 0.623912 | 0.001293 | 0.001318 | 0.001100 |
| mp_is_map.test | RUN | 0.144748 | 0.549124 | 0.491111 | 0.001147 | 0.001378 | 0.001135 |
| mp_bind.test | RUN | 0.180640 | 1.676166 | 0.758903 | 0.001073 | 0.001404 | 0.001157 |
| mp_bind_q.test | RUN | 0.159067 | 1.026172 | 0.608171 | 0.001295 | 0.001336 | 0.001263 |
| mp_bind_front.test | RUN | 0.155209 | 1.135747 | 0.585404 | 0.001296 | 0.001207 | 0.001237 |
| mp_bind_back.test | RUN | 0.156605 | 1.126743 | 0.583463 | 0.001159 | 0.001217 | 0.001071 |
| mp_lambda.test | RUN | 0.377362 | 3.406579 | 1.588144 | 0.001201 | 0.000992 | 0.001148 |
| mpl.test | RUN | 0.328855 | 0.871422 | 1.245607 | 0.001203 | 0.001283 | 0.001087 |
| mpl_list.test | RUN | 0.173996 | 0.655703 | 0.580346 | 0.001456 | 0.001291 | 0.001155 |
| mpl_tuple.test | RUN | 0.179254 | 0.648168 | 0.566854 | 0.001187 | 0.001201 | 0.001291 |
| version.test | RUN | 0.088773 | 0.233184 | 0.288641 | 0.001162 | 0.001388 | 0.001023 |
| mp11_version.test | RUN | 0.108773 | 0.267603 | 0.343848 | 0.001146 | 0.001296 | 0.001113 |
| list_version.test | RUN | 0.093050 | 0.240471 | 0.294642 | 0.001143 | 0.001185 | 0.001203 |
| algorithm_version.test | RUN | 0.102218 | 0.252913 | 0.312783 | 0.001245 | 0.001170 | 0.001017 |
| integral_version.test | RUN | 0.090340 | 0.232443 | 0.282462 | 0.001222 | 0.001523 | 0.001118 |
| utility_version.test | RUN | 0.088816 | 0.234451 | 0.286363 | 0.001168 | 0.001380 | 0.001065 |
| function_version.test | RUN | 0.092279 | 0.241499 | 0.303751 | 0.001139 | 0.001290 | 0.001292 |
| map_version.test | RUN | 0.105894 | 0.253948 | 0.318689 | 0.001280 | 0.001347 | 0.000933 |
| set_version.test | RUN | 0.093977 | 0.243119 | 0.299635 | 0.001218 | 0.001095 | 0.001164 |
| bind_version.test | RUN | 0.103975 | 0.252218 | 0.320532 | 0.001209 | 0.001218 | 0.001083 |
| integer_sequence_version.test | RUN | 0.088913 | 0.234138 | 0.289349 | 0.001093 | 0.001388 | 0.000802 |
| tuple_version.test | RUN | 0.096550 | 0.255247 | 0.293014 | 0.000906 | 0.000944 | 0.000804 |
| mpl_version.test | RUN | 0.088897 | 0.184901 | 0.212742 | 0.000905 | 0.000986 | 0.001243 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 1.005× | 1.007×, 1.003× | 1.000× |
| clang | 1.093× | 1.096×, 1.091× | 1.004× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1364 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/43967972441).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| algorithm_version.test | 10 | 0.000739s | 0.000727s | 0.000742s | byte equality observed |
| bind_version.test | 10 | 0.000732s | 0.000749s | 0.000750s | byte equality observed |
| construct_from_tuple.test | 10 | 0.000745s | 0.000756s | 0.000743s | byte equality observed |
| function_version.test | 10 | 0.000744s | 0.000742s | 0.000725s | byte equality observed |
| integer_sequence.test | 10 | 0.000741s | 0.000748s | 0.000735s | byte equality observed |
| integer_sequence_version.test | 10 | 0.000739s | 0.000726s | 0.000740s | byte equality observed |
| integral.test | 10 | 0.000746s | 0.000743s | 0.000746s | byte equality observed |
| integral_version.test | 10 | 0.000750s | 0.000740s | 0.000742s | byte equality observed |
| list_version.test | 10 | 0.000740s | 0.000748s | 0.000740s | byte equality observed |
| map_version.test | 10 | 0.000752s | 0.000725s | 0.000748s | byte equality observed |
| mp11_version.test | 10 | 0.000738s | 0.000750s | 0.000739s | byte equality observed |
| mp_all.test | 10 | 0.000716s | 0.000756s | 0.000834s | byte equality observed |
| mp_all_2.test | 10 | 0.000759s | 0.000751s | 0.000831s | byte equality observed |
| mp_all_of.test | 10 | 0.000742s | 0.000758s | 0.000812s | byte equality observed |
| mp_all_of_q.test | 10 | 0.000739s | 0.000739s | 0.000821s | byte equality observed |
| mp_and.test | 10 | 0.000746s | 0.000759s | 0.000840s | byte equality observed |
| mp_any.test | 10 | 0.000747s | 0.000763s | 0.000831s | byte equality observed |
| mp_any_2.test | 10 | 0.000742s | 0.000750s | 0.000808s | byte equality observed |
| mp_any_of.test | 10 | 0.000745s | 0.000758s | 0.000809s | byte equality observed |
| mp_any_of_q.test | 10 | 0.000746s | 0.000745s | 0.000786s | byte equality observed |
| mp_append.test | 10 | 0.000752s | 0.000759s | 0.000790s | byte equality observed |
| mp_append_2.test | 10 | 0.000781s | 0.000764s | 0.000785s | byte equality observed |
| mp_append_3.test | 10 | 0.000361s | 0.000345s | 0.000794s | byte equality observed |
| mp_append_sf.test | 10 | 0.000797s | 0.000760s | 0.000765s | byte equality observed |
| mp_apply_q.test | 10 | 0.000811s | 0.000750s | 0.000806s | byte equality observed |
| mp_apply_q_sf.test | 10 | 0.000797s | 0.000747s | 0.000791s | byte equality observed |
| mp_assign.test | 10 | 0.000805s | 0.000756s | 0.000791s | byte equality observed |
| mp_assign_2.test | 10 | 0.000367s | 0.000348s | 0.000764s | byte equality observed |
| mp_at.test | 10 | 0.000798s | 0.000754s | 0.000799s | byte equality observed |
| mp_at_2.test | 10 | 0.000367s | 0.000356s | 0.000776s | byte equality observed |
| mp_at_sf.test | 10 | 0.000792s | 0.000793s | 0.000783s | byte equality observed |
| mp_back.test | 10 | 0.000797s | 0.000806s | 0.000823s | byte equality observed |
| mp_back_2.test | 10 | 0.000357s | 0.000373s | 0.000817s | byte equality observed |
| mp_bind.test | 10 | 0.000799s | 0.000827s | 0.000818s | byte equality observed |
| mp_bind_back.test | 10 | 0.000821s | 0.000834s | 0.000819s | byte equality observed |
| mp_bind_front.test | 10 | 0.000820s | 0.000848s | 0.000831s | byte equality observed |
| mp_bind_q.test | 10 | 0.000809s | 0.000846s | 0.000824s | byte equality observed |
| mp_clear.test | 10 | 0.000797s | 0.000800s | 0.000805s | byte equality observed |
| mp_clear_2.test | 10 | 0.000358s | 0.000362s | 0.000796s | byte equality observed |
| mp_compose.test | 10 | 0.000781s | 0.000808s | 0.000794s | byte equality observed |
| mp_cond.test | 10 | 0.000791s | 0.000785s | 0.000806s | byte equality observed |
| mp_cond_sf.test | 10 | 0.000806s | 0.000816s | 0.000809s | byte equality observed |
| mp_contains.test | 10 | 0.000810s | 0.000824s | 0.000817s | byte equality observed |
| mp_copy_if.test | 10 | 0.000826s | 0.000819s | 0.000806s | byte equality observed |
| mp_copy_if_q.test | 10 | 0.000822s | 0.000822s | 0.000793s | byte equality observed |
| mp_count.test | 10 | 0.000809s | 0.000790s | 0.000845s | byte equality observed |
| mp_count_if.test | 10 | 0.000802s | 0.000801s | 0.000834s | byte equality observed |
| mp_count_if_q.test | 10 | 0.000814s | 0.000794s | 0.000785s | byte equality observed |
| mp_defer.test | 10 | 0.000807s | 0.000818s | 0.000797s | byte equality observed |
| mp_drop.test | 10 | 0.000799s | 0.000806s | 0.000812s | byte equality observed |
| mp_drop_2.test | 10 | 0.000365s | 0.000361s | 0.000796s | byte equality observed |
| mp_empty.test | 10 | 0.000796s | 0.000815s | 0.000808s | byte equality observed |
| mp_empty_2.test | 10 | 0.000364s | 0.000368s | 0.000780s | byte equality observed |
| mp_erase.test | 10 | 0.000814s | 0.000817s | 0.000777s | byte equality observed |
| mp_erase_2.test | 10 | 0.000364s | 0.000369s | 0.000770s | byte equality observed |
| mp_eval_if.test | 10 | 0.000782s | 0.000798s | 0.000768s | byte equality observed |
| mp_eval_if_not.test | 10 | 0.000787s | 0.000784s | 0.000812s | byte equality observed |
| mp_eval_if_sf.test | 10 | 0.000801s | 0.000809s | 0.000834s | byte equality observed |
| mp_eval_or.test | 10 | 0.000795s | 0.000796s | 0.000821s | byte equality observed |
| mp_fill.test | 10 | 0.000801s | 0.000808s | 0.000814s | byte equality observed |
| mp_fill_2.test | 10 | 0.000363s | 0.000362s | 0.000796s | byte equality observed |
| mp_filter.test | 10 | 0.000797s | 0.000833s | 0.000803s | byte equality observed |
| mp_find.test | 10 | 0.000789s | 0.000806s | 0.000824s | byte equality observed |
| mp_find_if.test | 10 | 0.000799s | 0.000836s | 0.000818s | byte equality observed |
| mp_find_if_q.test | 10 | 0.000795s | 0.000822s | 0.000835s | byte equality observed |
| mp_flatten.test | 10 | 0.000814s | 0.000821s | 0.000808s | byte equality observed |
| mp_fold.test | 10 | 0.000838s | 0.000852s | 0.000829s | byte equality observed |
| mp_fold_q.test | 10 | 0.000788s | 0.000803s | 0.000795s | byte equality observed |
| mp_fold_q_sf.test | 10 | 0.000815s | 0.000786s | 0.000785s | byte equality observed |
| mp_for_each.test | 10 | 0.000820s | 0.000811s | 0.000790s | byte equality observed |
| mp_from_sequence.test | 10 | 0.000786s | 0.000822s | 0.000809s | byte equality observed |
| mp_from_sequence_2.test | 10 | 0.000800s | 0.000827s | 0.000820s | byte equality observed |
| mp_from_sequence_3.test | 10 | 0.000829s | 0.000779s | 0.000822s | byte equality observed |
| mp_front.test | 10 | 0.000789s | 0.000809s | 0.000796s | byte equality observed |
| mp_front_2.test | 10 | 0.000365s | 0.000361s | 0.000777s | byte equality observed |
| mp_identity.test | 10 | 0.000785s | 0.000800s | 0.000775s | byte equality observed |
| mp_if.test | 10 | 0.000801s | 0.000797s | 0.000810s | byte equality observed |
| mp_if_sf.test | 10 | 0.000806s | 0.000807s | 0.000830s | byte equality observed |
| mp_inherit.test | 10 | 0.000805s | 0.000821s | 0.000792s | byte equality observed |
| mp_insert.test | 10 | 0.000821s | 0.000806s | 0.000790s | byte equality observed |
| mp_insert_2.test | 10 | 0.000360s | 0.000375s | 0.000782s | byte equality observed |
| mp_intersperse.test | 10 | 0.000806s | 0.000780s | 0.000801s | byte equality observed |
| mp_invoke_q.test | 10 | 0.000807s | 0.000812s | 0.000798s | byte equality observed |
| mp_invoke_q_sf.test | 10 | 0.000814s | 0.000795s | 0.000840s | byte equality observed |
| mp_iota.test | 10 | 0.000811s | 0.000810s | 0.000846s | byte equality observed |
| mp_iota_2.test | 10 | 0.000807s | 0.000823s | 0.000820s | byte equality observed |
| mp_is_list.test | 10 | 0.000805s | 0.000812s | 0.000789s | byte equality observed |
| mp_is_map.test | 10 | 0.000821s | 0.000797s | 0.000810s | byte equality observed |
| mp_is_set.test | 10 | 0.000827s | 0.000823s | 0.000799s | byte equality observed |
| mp_is_value_list.test | 10 | 0.000807s | 0.000813s | 0.000816s | byte equality observed |
| mp_iterate.test | 10 | 0.000827s | 0.000838s | 0.000778s | byte equality observed |
| mp_join.test | 10 | 0.000807s | 0.000833s | 0.000790s | byte equality observed |
| mp_lambda.test | 10 | 0.000830s | 0.000804s | 0.000826s | byte equality observed |
| mp_less.test | 10 | 0.000823s | 0.000844s | 0.000780s | byte equality observed |
| mp_list_c.test | 10 | 0.000807s | 0.000803s | 0.000802s | byte equality observed |
| mp_list_v.test | 10 | 0.000365s | 0.000365s | 0.000794s | byte equality observed |
| mp_map_contains.test | 10 | 0.000794s | 0.000795s | 0.000786s | byte equality observed |
| mp_map_erase.test | 10 | 0.000826s | 0.000796s | 0.000805s | byte equality observed |
| mp_map_find.test | 10 | 0.000789s | 0.000787s | 0.000793s | byte equality observed |
| mp_map_find_2.test | 10 | 0.000807s | 0.000813s | 0.000783s | byte equality observed |
| mp_map_find_3.test | 10 | 0.000812s | 0.000816s | 0.000806s | byte equality observed |
| mp_map_find_4.test | 10 | 0.000795s | 0.000805s | 0.000810s | byte equality observed |
| mp_map_insert.test | 10 | 0.000804s | 0.000801s | 0.000785s | byte equality observed |
| mp_map_keys.test | 10 | 0.000798s | 0.000803s | 0.000805s | byte equality observed |
| mp_map_replace.test | 10 | 0.000813s | 0.000809s | 0.000799s | byte equality observed |
| mp_map_update.test | 10 | 0.000801s | 0.000837s | 0.000814s | byte equality observed |
| mp_map_update_q.test | 10 | 0.000783s | 0.000810s | 0.000806s | byte equality observed |
| mp_max.test | 10 | 0.000799s | 0.000816s | 0.000803s | byte equality observed |
| mp_max_element.test | 10 | 0.000808s | 0.000820s | 0.000801s | byte equality observed |
| mp_max_element_2.test | 10 | 0.000366s | 0.000358s | 0.000796s | byte equality observed |
| mp_max_element_q.test | 10 | 0.000788s | 0.000798s | 0.000782s | byte equality observed |
| mp_max_element_q_2.test | 10 | 0.000366s | 0.000363s | 0.000790s | byte equality observed |
| mp_min.test | 10 | 0.000795s | 0.000789s | 0.000769s | byte equality observed |
| mp_min_element.test | 10 | 0.000810s | 0.000807s | 0.000826s | byte equality observed |
| mp_min_element_2.test | 10 | 0.000359s | 0.000364s | 0.000785s | byte equality observed |
| mp_min_element_q.test | 10 | 0.000801s | 0.000816s | 0.000787s | byte equality observed |
| mp_min_element_q_2.test | 10 | 0.000363s | 0.000358s | 0.000768s | byte equality observed |
| mp_none_of.test | 10 | 0.000799s | 0.000808s | 0.000819s | byte equality observed |
| mp_none_of_q.test | 10 | 0.000792s | 0.000797s | 0.000827s | byte equality observed |
| mp_not_fn.test | 10 | 0.000808s | 0.000815s | 0.000819s | byte equality observed |
| mp_nth_element.test | 10 | 0.000803s | 0.000794s | 0.000830s | byte equality observed |
| mp_nth_element_q.test | 10 | 0.000791s | 0.000814s | 0.000848s | byte equality observed |
| mp_or.test | 10 | 0.000809s | 0.000800s | 0.000846s | byte equality observed |
| mp_pairwise_fold.test | 10 | 0.000825s | 0.000806s | 0.000771s | byte equality observed |
| mp_pairwise_fold_q.test | 10 | 0.000820s | 0.000816s | 0.000802s | byte equality observed |
| mp_partial_sum.test | 10 | 0.000838s | 0.000824s | 0.000813s | byte equality observed |
| mp_partition.test | 10 | 0.000823s | 0.000849s | 0.000814s | byte equality observed |
| mp_partition_q.test | 10 | 0.000815s | 0.000792s | 0.000821s | byte equality observed |
| mp_plus.test | 10 | 0.000819s | 0.000820s | 0.000824s | byte equality observed |
| mp_pop_back.test | 10 | 0.000820s | 0.000812s | 0.000787s | byte equality observed |
| mp_pop_back_2.test | 10 | 0.000366s | 0.000362s | 0.000742s | byte equality observed |
| mp_pop_front.test | 10 | 0.000790s | 0.000821s | 0.000787s | byte equality observed |
| mp_pop_front_2.test | 10 | 0.000363s | 0.000369s | 0.000766s | byte equality observed |
| mp_power_set.test | 10 | 0.000792s | 0.000820s | 0.000787s | byte equality observed |
| mp_product.test | 10 | 0.000819s | 0.000811s | 0.000803s | byte equality observed |
| mp_push_back.test | 10 | 0.000798s | 0.000800s | 0.000781s | byte equality observed |
| mp_push_back_2.test | 10 | 0.000361s | 0.000363s | 0.000783s | byte equality observed |
| mp_push_front.test | 10 | 0.000800s | 0.000806s | 0.000773s | byte equality observed |
| mp_push_front_2.test | 10 | 0.000367s | 0.000360s | 0.000776s | byte equality observed |
| mp_quote.test | 10 | 0.000803s | 0.000812s | 0.000803s | byte equality observed |
| mp_quote_trait.test | 10 | 0.000804s | 0.000823s | 0.000829s | byte equality observed |
| mp_remove.test | 10 | 0.000813s | 0.000818s | 0.000837s | byte equality observed |
| mp_remove_if.test | 10 | 0.000806s | 0.000828s | 0.000832s | byte equality observed |
| mp_remove_if_q.test | 10 | 0.000803s | 0.000825s | 0.000791s | byte equality observed |
| mp_rename.test | 10 | 0.000802s | 0.000809s | 0.000797s | byte equality observed |
| mp_rename_2.test | 10 | 0.000361s | 0.000362s | 0.000829s | byte equality observed |
| mp_rename_v.test | 10 | 0.000356s | 0.000352s | 0.000798s | byte equality observed |
| mp_repeat.test | 10 | 0.000802s | 0.000806s | 0.000808s | byte equality observed |
| mp_repeat_2.test | 10 | 0.000364s | 0.000364s | 0.000778s | byte equality observed |
| mp_repeat_3.test | 10 | 0.000786s | 0.000798s | 0.000782s | byte equality observed |
| mp_replace.test | 10 | 0.000805s | 0.000820s | 0.000783s | byte equality observed |
| mp_replace_at.test | 10 | 0.000802s | 0.000814s | 0.000790s | byte equality observed |
| mp_replace_at_c.test | 10 | 0.000807s | 0.000840s | 0.000814s | byte equality observed |
| mp_replace_front.test | 10 | 0.000800s | 0.000826s | 0.000808s | byte equality observed |
| mp_replace_front_2.test | 10 | 0.000360s | 0.000367s | 0.000799s | byte equality observed |
| mp_replace_if.test | 10 | 0.000829s | 0.000804s | 0.000808s | byte equality observed |
| mp_replace_if_q.test | 10 | 0.000812s | 0.000833s | 0.000802s | byte equality observed |
| mp_replace_second.test | 10 | 0.000796s | 0.000804s | 0.000790s | byte equality observed |
| mp_replace_second_2.test | 10 | 0.000358s | 0.000360s | 0.000815s | byte equality observed |
| mp_replace_third.test | 10 | 0.000787s | 0.000805s | 0.000813s | byte equality observed |
| mp_replace_third_2.test | 10 | 0.000370s | 0.000361s | 0.000771s | byte equality observed |
| mp_reverse.test | 10 | 0.000810s | 0.000837s | 0.000796s | byte equality observed |
| mp_reverse_fold.test | 10 | 0.000798s | 0.000794s | 0.000804s | byte equality observed |
| mp_reverse_fold_q.test | 10 | 0.000797s | 0.000811s | 0.000789s | byte equality observed |
| mp_rotate_left.test | 10 | 0.000806s | 0.000784s | 0.000805s | byte equality observed |
| mp_rotate_right.test | 10 | 0.000801s | 0.000813s | 0.000825s | byte equality observed |
| mp_same.test | 10 | 0.000798s | 0.000793s | 0.000815s | byte equality observed |
| mp_second.test | 10 | 0.000802s | 0.000805s | 0.000806s | byte equality observed |
| mp_second_2.test | 10 | 0.000368s | 0.000362s | 0.000767s | byte equality observed |
| mp_set_contains.test | 10 | 0.000805s | 0.000805s | 0.000802s | byte equality observed |
| mp_set_difference.test | 10 | 0.000800s | 0.000796s | 0.000800s | byte equality observed |
| mp_set_difference_sf.test | 10 | 0.000798s | 0.000826s | 0.000805s | byte equality observed |
| mp_set_intersection.test | 10 | 0.000797s | 0.000818s | 0.000812s | byte equality observed |
| mp_set_intersection_sf.test | 10 | 0.000815s | 0.000808s | 0.000809s | byte equality observed |
| mp_set_push_back.test | 10 | 0.000809s | 0.000833s | 0.000807s | byte equality observed |
| mp_set_push_front.test | 10 | 0.000818s | 0.000838s | 0.000817s | byte equality observed |
| mp_set_union.test | 10 | 0.000793s | 0.000813s | 0.000784s | byte equality observed |
| mp_set_union_sf.test | 10 | 0.000812s | 0.000816s | 0.000803s | byte equality observed |
| mp_similar.test | 10 | 0.000818s | 0.000832s | 0.000798s | byte equality observed |
| mp_size.test | 10 | 0.000797s | 0.000820s | 0.000792s | byte equality observed |
| mp_size_2.test | 10 | 0.000366s | 0.000363s | 0.000811s | byte equality observed |
| mp_slice.test | 10 | 0.000824s | 0.000816s | 0.000802s | byte equality observed |
| mp_slice_2.test | 10 | 0.000366s | 0.000359s | 0.000784s | byte equality observed |
| mp_sliding_fold.test | 10 | 0.000834s | 0.000808s | 0.000822s | byte equality observed |
| mp_sliding_fold_q.test | 10 | 0.000812s | 0.000815s | 0.000816s | byte equality observed |
| mp_sort.test | 10 | 0.000817s | 0.000809s | 0.000843s | byte equality observed |
| mp_sort_q.test | 10 | 0.000818s | 0.000833s | 0.000832s | byte equality observed |
| mp_split.test | 10 | 0.000827s | 0.000832s | 0.000818s | byte equality observed |
| mp_starts_with.test | 10 | 0.000801s | 0.000824s | 0.000810s | byte equality observed |
| mp_starts_with_sf.test | 10 | 0.000811s | 0.000796s | 0.000802s | byte equality observed |
| mp_take.test | 10 | 0.000794s | 0.000811s | 0.000783s | byte equality observed |
| mp_take_2.test | 10 | 0.000363s | 0.000359s | 0.000793s | byte equality observed |
| mp_third.test | 10 | 0.000794s | 0.000789s | 0.000796s | byte equality observed |
| mp_third_2.test | 10 | 0.000364s | 0.000360s | 0.000821s | byte equality observed |
| mp_transform.test | 10 | 0.000815s | 0.000804s | 0.000816s | byte equality observed |
| mp_transform_2.test | 10 | 0.000769s | 0.000799s | 0.000790s | byte equality observed |
| mp_transform_front.test | 10 | 0.000804s | 0.000800s | 0.000801s | byte equality observed |
| mp_transform_front_2.test | 10 | 0.000362s | 0.000360s | 0.000771s | byte equality observed |
| mp_transform_if.test | 10 | 0.000788s | 0.000791s | 0.000784s | byte equality observed |
| mp_transform_if_q.test | 10 | 0.000809s | 0.000810s | 0.000820s | byte equality observed |
| mp_transform_q.test | 10 | 0.000812s | 0.000797s | 0.000802s | byte equality observed |
| mp_transform_q_2.test | 10 | 0.000783s | 0.000810s | 0.000809s | byte equality observed |
| mp_transform_second.test | 10 | 0.000788s | 0.000784s | 0.000774s | byte equality observed |
| mp_transform_second_2.test | 10 | 0.000360s | 0.000360s | 0.000784s | byte equality observed |
| mp_transform_sf.test | 10 | 0.000814s | 0.000799s | 0.000797s | byte equality observed |
| mp_transform_third.test | 10 | 0.000790s | 0.000827s | 0.000783s | byte equality observed |
| mp_transform_third_2.test | 10 | 0.000354s | 0.000359s | 0.000783s | byte equality observed |
| mp_unique.test | 10 | 0.000797s | 0.000795s | 0.000782s | byte equality observed |
| mp_unique_if.test | 10 | 0.000805s | 0.000814s | 0.000788s | byte equality observed |
| mp_unique_if_q.test | 10 | 0.000814s | 0.000826s | 0.000798s | byte equality observed |
| mp_valid.test | 10 | 0.000799s | 0.000826s | 0.000796s | byte equality observed |
| mp_valid_and_true.test | 10 | 0.000799s | 0.000828s | 0.000802s | byte equality observed |
| mp_value.test | 10 | 0.000358s | 0.000360s | 0.000777s | byte equality observed |
| mp_with_index.test | 10 | 0.001113s | 0.001075s | 0.001019s | byte equality observed |
| mp_with_index_cx.test | 10 | 0.000353s | 0.000353s | 0.000767s | byte equality observed |
| mpl.test | 10 | 0.000821s | 0.000816s | 0.000806s | byte equality observed |
| mpl_list.test | 10 | 0.000811s | 0.000799s | 0.000792s | byte equality observed |
| mpl_tuple.test | 10 | 0.000810s | 0.000799s | 0.000818s | byte equality observed |
| mpl_version.test | 10 | 0.000798s | 0.000789s | 0.000812s | byte equality observed |
| set_version.test | 10 | 0.000815s | 0.000822s | 0.000816s | byte equality observed |
| tuple_apply.test | 10 | 0.000805s | 0.000784s | 0.000854s | byte equality observed |
| tuple_for_each.test | 10 | 0.000835s | 0.000792s | 0.000833s | byte equality observed |
| tuple_transform.test | 10 | 0.000793s | 0.000793s | 0.000843s | byte equality observed |
| tuple_transform_2.test | 10 | 0.000819s | 0.000816s | 0.000807s | byte equality observed |
| tuple_version.test | 10 | 0.000801s | 0.000797s | 0.000793s | byte equality observed |
| utility_version.test | 10 | 0.000798s | 0.000816s | 0.000816s | byte equality observed |
| version.test | 10 | 0.000823s | 0.000811s | 0.000808s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/43967972441).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
