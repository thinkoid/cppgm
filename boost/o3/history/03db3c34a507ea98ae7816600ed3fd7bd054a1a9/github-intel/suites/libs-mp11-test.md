# libs/mp11/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| mp11.test | COMPILE | 0.028791 | 0.059229 | 0.084627 | — | — | — |
| complex_h.test | COMPILE | 0.121339 | 0.256497 | 0.358536 | — | — | — |
| mp_size.test | RUN | 0.143695 | 0.843052 | 0.479659 | 0.000993 | 0.001429 | 0.001265 |
| mp_size_2.test | RUN | 0.012227 | 0.029084 | 0.042779 | 0.000482 | 0.000512 | 0.001156 |
| mp_empty.test | RUN | 0.133999 | 0.512959 | 0.438351 | 0.001280 | 0.001377 | 0.001040 |
| mp_empty_2.test | RUN | 0.012288 | 0.030342 | 0.042604 | 0.000540 | 0.000396 | 0.001216 |
| mp_assign.test | RUN | 0.159867 | 1.117672 | 0.602899 | 0.001392 | 0.001272 | 0.001119 |
| mp_assign_2.test | RUN | 0.012020 | 0.029801 | 0.040397 | 0.000475 | 0.000465 | 0.001143 |
| mp_clear.test | RUN | 0.137732 | 0.473017 | 0.432451 | 0.001116 | 0.001337 | 0.001088 |
| mp_clear_2.test | RUN | 0.012737 | 0.029237 | 0.041302 | 0.000473 | 0.000387 | 0.001065 |
| mp_front.test | RUN | 0.145264 | 0.762624 | 0.509474 | 0.001136 | 0.001348 | 0.001052 |
| mp_front_2.test | RUN | 0.013927 | 0.028593 | 0.043274 | 0.000469 | 0.000499 | 0.000787 |
| mp_pop_front.test | RUN | 0.144039 | 0.800785 | 0.514393 | 0.001080 | 0.001214 | 0.001152 |
| mp_pop_front_2.test | RUN | 0.011336 | 0.029981 | 0.042224 | 0.000460 | 0.000498 | 0.001118 |
| mp_second.test | RUN | 0.136758 | 0.498690 | 0.485526 | 0.001099 | 0.001366 | 0.001155 |
| mp_second_2.test | RUN | 0.012508 | 0.029562 | 0.042190 | 0.000486 | 0.000481 | 0.001018 |
| mp_third.test | RUN | 0.134360 | 0.461037 | 0.440523 | 0.001139 | 0.001316 | 0.001157 |
| mp_third_2.test | RUN | 0.012246 | 0.030548 | 0.043113 | 0.000463 | 0.000439 | 0.001023 |
| mp_push_front.test | RUN | 0.186507 | 1.717153 | 0.823302 | 0.001312 | 0.001278 | 0.001126 |
| mp_push_front_2.test | RUN | 0.013001 | 0.028600 | 0.040912 | 0.000413 | 0.000528 | 0.001098 |
| mp_push_back.test | RUN | 0.187707 | 1.725791 | 0.835753 | 0.001139 | 0.001294 | 0.001182 |
| mp_push_back_2.test | RUN | 0.011992 | 0.030227 | 0.043467 | 0.000489 | 0.000497 | 0.001190 |
| mp_rename.test | RUN | 0.177289 | 1.565472 | 0.713186 | 0.001175 | 0.001196 | 0.001161 |
| mp_rename_2.test | RUN | 0.011793 | 0.029797 | 0.043431 | 0.000411 | 0.000497 | 0.001180 |
| mp_append.test | RUN | 0.185028 | 1.785949 | 0.769060 | 0.001185 | 0.001294 | 0.001108 |
| mp_append_2.test | RUN | 0.409390 | 4.023723 | 1.054563 | 0.001183 | 0.001265 | 0.001105 |
| mp_append_3.test | RUN | 0.012092 | 0.029946 | 0.043190 | 0.000482 | 0.000474 | 0.001053 |
| mp_append_sf.test | RUN | 0.132237 | 0.422473 | 0.420493 | 0.001201 | 0.001148 | 0.001282 |
| mp_replace_front.test | RUN | 0.160686 | 1.256521 | 0.645982 | 0.001251 | 0.001240 | 0.001152 |
| mp_replace_front_2.test | RUN | 0.013274 | 0.030555 | 0.043116 | 0.000410 | 0.000459 | 0.001108 |
| mp_replace_second.test | RUN | 0.159843 | 0.804248 | 0.576444 | 0.001268 | 0.001286 | 0.001204 |
| mp_replace_second_2.test | RUN | 0.012454 | 0.029424 | 0.043446 | 0.000459 | 0.000497 | 0.001231 |
| mp_replace_third.test | RUN | 0.151414 | 0.667237 | 0.524650 | 0.001155 | 0.001336 | 0.001183 |
| mp_replace_third_2.test | RUN | 0.012273 | 0.029873 | 0.041987 | 0.000466 | 0.000496 | 0.001084 |
| mp_apply_q.test | RUN | 0.175298 | 1.550530 | 0.709828 | 0.001204 | 0.001238 | 0.001217 |
| mp_apply_q_sf.test | RUN | 0.137456 | 0.435228 | 0.424000 | 0.001132 | 0.001242 | 0.001121 |
| mp_is_list.test | RUN | 0.135588 | 0.522977 | 0.454439 | 0.001162 | 0.001253 | 0.001096 |
| mp_list_c.test | RUN | 0.144847 | 0.644063 | 0.499674 | 0.001145 | 0.001221 | 0.001294 |
| mp_transform_front.test | RUN | 0.163288 | 1.267945 | 0.630497 | 0.001182 | 0.001260 | 0.001010 |
| mp_transform_front_2.test | RUN | 0.012396 | 0.029897 | 0.042390 | 0.000517 | 0.000469 | 0.001057 |
| mp_transform_second.test | RUN | 0.157204 | 1.090426 | 0.574582 | 0.001135 | 0.001242 | 0.001060 |
| mp_transform_second_2.test | RUN | 0.012724 | 0.029673 | 0.041721 | 0.000496 | 0.000527 | 0.001096 |
| mp_transform_third.test | RUN | 0.146032 | 0.821123 | 0.499332 | 0.001125 | 0.001338 | 0.001126 |
| mp_transform_third_2.test | RUN | 0.014119 | 0.030259 | 0.042626 | 0.000492 | 0.000457 | 0.001273 |
| mp_list_v.test | RUN | 0.013280 | 0.029994 | 0.039591 | 0.000452 | 0.000495 | 0.001046 |
| mp_rename_v.test | RUN | 0.012540 | 0.029932 | 0.038589 | 0.000426 | 0.000510 | 0.001055 |
| mp_is_value_list.test | RUN | 0.128306 | 0.312826 | 0.410267 | 0.001171 | 0.001126 | 0.001071 |
| mp_transform.test | RUN | 0.330989 | 2.700473 | 1.336088 | 0.001322 | 0.001300 | 0.001112 |
| mp_transform_2.test | RUN | 0.126693 | 0.294663 | 0.378986 | 0.001067 | 0.001352 | 0.001118 |
| mp_transform_q.test | RUN | 0.322295 | 2.582379 | 1.296376 | 0.001181 | 0.001321 | 0.001155 |
| mp_transform_q_2.test | RUN | 0.338714 | 0.804785 | 1.625679 | 0.001118 | 0.001204 | 0.001174 |
| mp_transform_sf.test | RUN | 0.143910 | 0.444721 | 0.453987 | 0.001217 | 0.001281 | 0.001163 |
| mp_transform_if.test | RUN | 0.173228 | 1.275154 | 0.695449 | 0.001155 | 0.001265 | 0.001146 |
| mp_transform_if_q.test | RUN | 0.168863 | 1.275131 | 0.697174 | 0.001218 | 0.001081 | 0.001111 |
| mp_filter.test | RUN | 0.152035 | 0.739381 | 0.518626 | 0.001190 | 0.001412 | 0.001189 |
| mp_fill.test | RUN | 0.146075 | 0.566468 | 0.491046 | 0.001048 | 0.001364 | 0.001137 |
| mp_fill_2.test | RUN | 0.021454 | 0.045963 | 0.067436 | 0.000490 | 0.000552 | 0.001083 |
| mp_count.test | RUN | 0.275041 | 1.371970 | 0.770825 | 0.001143 | 0.001400 | 0.001143 |
| mp_count_if.test | RUN | 0.284601 | 1.400221 | 0.841441 | 0.001076 | 0.001209 | 0.001182 |
| mp_count_if_q.test | RUN | 0.146721 | 0.900609 | 0.487340 | 0.001292 | 0.001203 | 0.001227 |
| mp_contains.test | RUN | 0.140024 | 0.538596 | 0.448351 | 0.001108 | 0.001176 | 0.001156 |
| mp_starts_with.test | RUN | 0.142644 | 0.535554 | 0.475869 | 0.001226 | 0.001457 | 0.001199 |
| mp_starts_with_sf.test | RUN | 0.137229 | 0.456307 | 0.432349 | 0.001084 | 0.001292 | 0.001172 |
| mp_repeat.test | RUN | 0.212920 | 2.296120 | 0.897863 | 0.001182 | 0.001390 | 0.001130 |
| mp_repeat_2.test | RUN | 0.020958 | 0.047869 | 0.068967 | 0.000361 | 0.000502 | 0.001116 |
| mp_repeat_3.test | RUN | 0.177786 | 0.285636 | 0.431292 | 0.001202 | 0.001308 | 0.001141 |
| mp_product.test | RUN | 0.164104 | 1.364827 | 0.628903 | 0.001115 | 0.001270 | 0.001138 |
| mp_drop.test | RUN | 0.178237 | 1.731785 | 0.749431 | 0.001117 | 0.001314 | 0.001128 |
| mp_drop_2.test | RUN | 0.019762 | 0.047001 | 0.071477 | 0.000473 | 0.000500 | 0.001080 |
| mp_iota.test | RUN | 0.170942 | 1.435622 | 0.646147 | 0.001322 | 0.001249 | 0.001092 |
| mp_iota_2.test | RUN | 0.186200 | 1.738184 | 0.750448 | 0.001187 | 0.001364 | 0.001153 |
| mp_at.test | RUN | 0.146659 | 0.754710 | 0.529069 | 0.001089 | 0.001286 | 0.001086 |
| mp_at_2.test | RUN | 0.021342 | 0.045317 | 0.072497 | 0.000450 | 0.000548 | 0.001121 |
| mp_at_sf.test | RUN | 0.141705 | 0.455986 | 0.451625 | 0.001167 | 0.001377 | 0.001133 |
| mp_take.test | RUN | 0.242747 | 2.244452 | 0.906449 | 0.001110 | 0.001386 | 0.001215 |
| mp_take_2.test | RUN | 0.021981 | 0.046865 | 0.067908 | 0.000473 | 0.000496 | 0.001135 |
| mp_slice.test | RUN | 0.284850 | 2.302239 | 1.135357 | 0.001185 | 0.001386 | 0.001030 |
| mp_slice_2.test | RUN | 0.021758 | 0.047307 | 0.069438 | 0.000486 | 0.000480 | 0.001179 |
| mp_replace.test | RUN | 0.178905 | 1.159283 | 0.725431 | 0.001074 | 0.001362 | 0.001180 |
| mp_replace_if.test | RUN | 0.166053 | 1.019856 | 0.669957 | 0.001292 | 0.001246 | 0.001076 |
| mp_replace_if_q.test | RUN | 0.164691 | 1.008728 | 0.664525 | 0.001045 | 0.001464 | 0.001145 |
| mp_copy_if.test | RUN | 0.168235 | 1.431470 | 0.635977 | 0.001344 | 0.001332 | 0.001162 |
| mp_copy_if_q.test | RUN | 0.167071 | 1.434098 | 0.631846 | 0.001173 | 0.001259 | 0.001154 |
| mp_remove.test | RUN | 0.165378 | 0.954527 | 0.650137 | 0.001191 | 0.001335 | 0.001097 |
| mp_remove_if.test | RUN | 0.174004 | 1.504436 | 0.675116 | 0.001072 | 0.001318 | 0.001139 |
| mp_remove_if_q.test | RUN | 0.181260 | 1.503893 | 0.684592 | 0.001173 | 0.001208 | 0.001249 |
| mp_partition.test | RUN | 0.177961 | 1.415644 | 0.724231 | 0.001187 | 0.001252 | 0.001143 |
| mp_partition_q.test | RUN | 0.178398 | 1.423949 | 0.731918 | 0.000999 | 0.001200 | 0.001117 |
| mp_sort.test | RUN | 0.166773 | 1.013854 | 0.634409 | 0.001007 | 0.001198 | 0.001159 |
| mp_sort_q.test | RUN | 0.167461 | 1.002645 | 0.635142 | 0.001273 | 0.001205 | 0.001191 |
| mp_find.test | RUN | 0.161903 | 1.082256 | 0.546340 | 0.001157 | 0.001135 | 0.001164 |
| mp_find_if.test | RUN | 0.150212 | 0.997711 | 0.522407 | 0.001170 | 0.001392 | 0.001128 |
| mp_find_if_q.test | RUN | 0.160854 | 1.117842 | 0.631194 | 0.001104 | 0.001333 | 0.001165 |
| mp_reverse.test | RUN | 0.370381 | 2.991377 | 1.274120 | 0.001152 | 0.001285 | 0.001158 |
| mp_fold.test | RUN | 0.612249 | 2.349899 | 3.218631 | 0.001172 | 0.001381 | 0.001191 |
| mp_fold_q.test | RUN | 0.157815 | 1.001059 | 0.597541 | 0.001417 | 0.001434 | 0.001221 |
| mp_fold_q_sf.test | RUN | 0.138201 | 0.450918 | 0.452929 | 0.001225 | 0.001244 | 0.001203 |
| mp_reverse_fold.test | RUN | 0.289491 | 2.225966 | 0.907629 | 0.001107 | 0.001209 | 0.001258 |
| mp_reverse_fold_q.test | RUN | 0.164382 | 1.222478 | 0.656304 | 0.001206 | 0.001336 | 0.001094 |
| mp_unique.test | RUN | 0.162446 | 1.099044 | 0.629305 | 0.001100 | 0.001201 | 0.001097 |
| mp_unique_if.test | RUN | 0.307468 | 2.319166 | 1.003915 | 0.001258 | 0.001224 | 0.001213 |
| mp_unique_if_q.test | RUN | 0.265837 | 2.273724 | 0.818120 | 0.001107 | 0.001244 | 0.001180 |
| mp_all_of.test | RUN | 0.388572 | 1.228952 | 1.044367 | 0.001173 | 0.001509 | 0.001098 |
| mp_all_of_q.test | RUN | 0.137822 | 0.531709 | 0.477031 | 0.001397 | 0.001239 | 0.001173 |
| mp_any_of.test | RUN | 0.389490 | 1.269113 | 1.056699 | 0.001115 | 0.001226 | 0.001059 |
| mp_any_of_q.test | RUN | 0.139436 | 0.537869 | 0.480885 | 0.001282 | 0.001343 | 0.001190 |
| mp_none_of.test | RUN | 0.385679 | 1.268662 | 1.044479 | 0.001114 | 0.001239 | 0.001155 |
| mp_none_of_q.test | RUN | 0.138223 | 0.538906 | 0.441701 | 0.001229 | 0.001241 | 0.001238 |
| mp_replace_at.test | RUN | 0.171064 | 1.100624 | 0.673895 | 0.001148 | 0.001212 | 0.001172 |
| mp_replace_at_c.test | RUN | 0.170758 | 1.099360 | 0.715103 | 0.001133 | 0.001312 | 0.001289 |
| mp_for_each.test | RUN | 0.160161 | 0.715506 | 0.718979 | 0.001078 | 0.001131 | 0.001026 |
| mp_insert.test | RUN | 0.273061 | 2.280655 | 1.042944 | 0.001119 | 0.001259 | 0.001130 |
| mp_insert_2.test | RUN | 0.021912 | 0.045109 | 0.070706 | 0.000454 | 0.000510 | 0.001120 |
| mp_erase.test | RUN | 0.302174 | 2.409839 | 1.225629 | 0.001226 | 0.001188 | 0.001193 |
| mp_erase_2.test | RUN | 0.020929 | 0.046752 | 0.068389 | 0.000457 | 0.000472 | 0.001140 |
| mp_with_index.test | RUN | 0.389268 | 4.789600 | 2.611543 | 0.001450 | 0.001660 | 0.001471 |
| mp_with_index_cx.test | RUN | 0.002827 | 0.014302 | 0.022129 | 0.000450 | 0.000475 | 0.001038 |
| mp_from_sequence.test | RUN | 0.171376 | 1.260100 | 0.680418 | 0.001118 | 0.001474 | 0.001126 |
| mp_from_sequence_2.test | RUN | 0.179493 | 1.484669 | 0.739428 | 0.001128 | 0.001202 | 0.001221 |
| mp_from_sequence_3.test | RUN | 0.151630 | 0.648875 | 0.526659 | 0.001172 | 0.001344 | 0.001113 |
| mp_min_element.test | RUN | 0.146409 | 0.582718 | 0.470044 | 0.001117 | 0.001292 | 0.001125 |
| mp_min_element_2.test | RUN | 0.021183 | 0.047203 | 0.071862 | 0.000417 | 0.000507 | 0.001106 |
| mp_min_element_q.test | RUN | 0.145779 | 0.585845 | 0.475790 | 0.001143 | 0.001194 | 0.001247 |
| mp_min_element_q_2.test | RUN | 0.021505 | 0.045670 | 0.071171 | 0.000457 | 0.000513 | 0.001200 |
| mp_max_element.test | RUN | 0.144846 | 0.581316 | 0.476426 | 0.001078 | 0.001237 | 0.001170 |
| mp_max_element_2.test | RUN | 0.021386 | 0.045712 | 0.071863 | 0.000434 | 0.000480 | 0.001153 |
| mp_max_element_q.test | RUN | 0.140790 | 0.581646 | 0.484968 | 0.001148 | 0.001352 | 0.001285 |
| mp_max_element_q_2.test | RUN | 0.022372 | 0.046949 | 0.070018 | 0.000482 | 0.000483 | 0.001059 |
| mp_nth_element.test | RUN | 0.161054 | 0.837646 | 0.599030 | 0.001108 | 0.001220 | 0.000833 |
| mp_nth_element_q.test | RUN | 0.152013 | 0.822200 | 0.597758 | 0.001061 | 0.001286 | 0.001106 |
| mp_back.test | RUN | 0.154903 | 0.677058 | 0.550097 | 0.001274 | 0.001290 | 0.001163 |
| mp_back_2.test | RUN | 0.021559 | 0.046260 | 0.072074 | 0.000481 | 0.000475 | 0.001141 |
| mp_pop_back.test | RUN | 0.459870 | 4.619541 | 1.220886 | 0.001123 | 0.001305 | 0.001250 |
| mp_pop_back_2.test | RUN | 0.022695 | 0.045375 | 0.067131 | 0.000438 | 0.000530 | 0.001271 |
| mp_flatten.test | RUN | 0.185939 | 1.624505 | 0.806672 | 0.001159 | 0.001245 | 0.001048 |
| mp_rotate_left.test | RUN | 0.185454 | 1.748185 | 0.792507 | 0.001132 | 0.001283 | 0.001127 |
| mp_rotate_right.test | RUN | 0.185443 | 1.756081 | 0.793317 | 0.001099 | 0.001209 | 0.001269 |
| mp_power_set.test | RUN | 0.183172 | 1.670565 | 0.805127 | 0.001217 | 0.001284 | 0.001188 |
| mp_partial_sum.test | RUN | 0.248370 | 2.269759 | 0.913811 | 0.001174 | 0.001256 | 0.001168 |
| mp_iterate.test | RUN | 0.160371 | 0.661171 | 0.626956 | 0.001123 | 0.001259 | 0.000877 |
| mp_pairwise_fold.test | RUN | 0.182717 | 1.531759 | 0.817898 | 0.001095 | 0.001102 | 0.001242 |
| mp_pairwise_fold_q.test | RUN | 0.141823 | 0.442567 | 0.457291 | 0.001174 | 0.001330 | 0.001140 |
| mp_sliding_fold.test | RUN | 0.363991 | 2.997080 | 1.515216 | 0.001279 | 0.001072 | 0.001288 |
| mp_sliding_fold_q.test | RUN | 0.374839 | 2.966693 | 1.512532 | 0.000838 | 0.001291 | 0.001136 |
| mp_intersperse.test | RUN | 0.171946 | 1.097144 | 0.703423 | 0.001127 | 0.001291 | 0.001257 |
| mp_split.test | RUN | 0.251083 | 2.131741 | 0.992317 | 0.001098 | 0.001341 | 0.001104 |
| mp_join.test | RUN | 0.199359 | 1.794401 | 0.895839 | 0.001114 | 0.001443 | 0.001220 |
| integral.test | RUN | 0.144980 | 0.781999 | 0.525319 | 0.001245 | 0.001308 | 0.001109 |
| mp_value.test | RUN | 0.009237 | 0.024935 | 0.035693 | 0.000458 | 0.000397 | 0.001244 |
| mp_identity.test | RUN | 0.146271 | 0.708704 | 0.494997 | 0.001196 | 0.001100 | 0.001099 |
| mp_inherit.test | RUN | 0.133633 | 0.508474 | 0.464724 | 0.001167 | 0.001319 | 0.001261 |
| mp_if.test | RUN | 0.136964 | 0.578366 | 0.463788 | 0.001085 | 0.001199 | 0.001122 |
| mp_if_sf.test | RUN | 0.131374 | 0.430172 | 0.409210 | 0.001119 | 0.001293 | 0.001128 |
| mp_eval_if.test | RUN | 0.141030 | 0.621526 | 0.475104 | 0.001409 | 0.001221 | 0.001162 |
| mp_eval_if_sf.test | RUN | 0.132471 | 0.435752 | 0.432686 | 0.001171 | 0.001386 | 0.001134 |
| mp_valid.test | RUN | 0.132463 | 0.443951 | 0.432561 | 0.001239 | 0.001099 | 0.001246 |
| mp_defer.test | RUN | 0.147379 | 0.753807 | 0.526822 | 0.001124 | 0.001196 | 0.001107 |
| mp_quote.test | RUN | 0.143724 | 0.765830 | 0.540627 | 0.001252 | 0.001374 | 0.001221 |
| mp_invoke_q.test | RUN | 0.158816 | 1.008929 | 0.603776 | 0.001160 | 0.001254 | 0.001181 |
| mp_invoke_q_sf.test | RUN | 0.132884 | 0.433560 | 0.428351 | 0.001173 | 0.001230 | 0.001103 |
| mp_quote_trait.test | RUN | 0.149509 | 0.835876 | 0.526439 | 0.001190 | 0.001219 | 0.001306 |
| mp_cond.test | RUN | 0.136516 | 0.508908 | 0.455315 | 0.001172 | 0.001292 | 0.001182 |
| mp_cond_sf.test | RUN | 0.129637 | 0.438679 | 0.435375 | 0.001277 | 0.001411 | 0.001033 |
| mp_not_fn.test | RUN | 0.130032 | 0.439737 | 0.428621 | 0.001167 | 0.001268 | 0.001074 |
| mp_eval_if_not.test | RUN | 0.141499 | 0.620457 | 0.479196 | 0.001165 | 0.001346 | 0.001144 |
| mp_eval_or.test | RUN | 0.127919 | 0.328124 | 0.441660 | 0.001183 | 0.001363 | 0.001123 |
| mp_compose.test | RUN | 0.144477 | 1.033788 | 0.579836 | 0.001077 | 0.001266 | 0.001158 |
| mp_valid_and_true.test | RUN | 0.136059 | 0.526703 | 0.452090 | 0.001178 | 0.001281 | 0.001274 |
| mp_compose_sf.test | COMPILE | 0.030083 | 0.060170 | 0.098212 | — | — | — |
| integer_sequence.test | RUN | 0.163724 | 1.032139 | 0.658605 | 0.001065 | 0.001300 | 0.001199 |
| tuple_for_each.test | RUN | 0.136629 | 0.367643 | 0.466029 | 0.001139 | 0.001243 | 0.001324 |
| tuple_for_each_cx.test | COMPILE | 0.024097 | 0.052957 | 0.075439 | — | — | — |
| tuple_apply.test | RUN | 0.134634 | 0.364692 | 0.461748 | 0.001044 | 0.001211 | 0.001209 |
| tuple_apply_cx.test | COMPILE | 0.035040 | 0.074064 | 0.108644 | — | — | — |
| construct_from_tuple.test | RUN | 0.138765 | 0.395429 | 0.448119 | 0.001101 | 0.001278 | 0.001144 |
| construct_from_tuple_cx.test | COMPILE | 0.037052 | 0.075215 | 0.103737 | — | — | — |
| tuple_transform.test | RUN | 0.218258 | 0.806279 | 0.893964 | 0.001406 | 0.001222 | 0.001050 |
| tuple_transform_2.test | RUN | 0.188507 | 0.578098 | 0.814885 | 0.001238 | 0.001109 | 0.001096 |
| tuple_transform_cx.test | COMPILE | 0.032835 | 0.071645 | 0.106986 | — | — | — |
| mp_set_contains.test | RUN | 0.136819 | 0.532590 | 0.464888 | 0.001101 | 0.001242 | 0.001179 |
| mp_set_push_back.test | RUN | 0.183768 | 1.656680 | 0.800319 | 0.001128 | 0.001375 | 0.001176 |
| mp_set_push_front.test | RUN | 0.241717 | 2.002771 | 0.920370 | 0.001188 | 0.001380 | 0.001127 |
| mp_is_set.test | RUN | 0.138528 | 0.534515 | 0.461804 | 0.001328 | 0.001288 | 0.001193 |
| mp_set_union.test | RUN | 0.177841 | 1.413065 | 0.759668 | 0.001112 | 0.001355 | 0.001089 |
| mp_set_union_sf.test | RUN | 0.132354 | 0.425154 | 0.419489 | 0.001091 | 0.001312 | 0.001178 |
| mp_set_difference.test | RUN | 0.161139 | 1.102044 | 0.650933 | 0.001124 | 0.001220 | 0.001212 |
| mp_set_difference_sf.test | RUN | 0.134893 | 0.425872 | 0.427818 | 0.001096 | 0.001297 | 0.001172 |
| mp_set_intersection.test | RUN | 0.159462 | 1.097598 | 0.630475 | 0.001057 | 0.001220 | 0.001157 |
| mp_set_intersection_sf.test | RUN | 0.132211 | 0.423568 | 0.430438 | 0.001002 | 0.001123 | 0.001208 |
| mp_all.test | RUN | 0.136806 | 0.530010 | 0.452082 | 0.001164 | 0.001303 | 0.001268 |
| mp_all_2.test | RUN | 0.398298 | 1.129357 | 1.040714 | 0.001334 | 0.001394 | 0.001137 |
| mp_and.test | RUN | 0.134491 | 0.528638 | 0.439407 | 0.001290 | 0.001188 | 0.001150 |
| mp_any.test | RUN | 0.144511 | 0.533809 | 0.463983 | 0.001150 | 0.001368 | 0.001248 |
| mp_any_2.test | RUN | 0.387042 | 1.134184 | 1.017511 | 0.001270 | 0.001295 | 0.001133 |
| mp_or.test | RUN | 0.141340 | 0.533145 | 0.472399 | 0.001297 | 0.001376 | 0.001170 |
| mp_same.test | RUN | 0.263889 | 0.884755 | 0.736920 | 0.001314 | 0.001258 | 0.001074 |
| mp_plus.test | RUN | 0.149221 | 0.616280 | 0.505420 | 0.001127 | 0.001278 | 0.001072 |
| mp_less.test | RUN | 0.140282 | 0.524413 | 0.446609 | 0.001156 | 0.001305 | 0.001164 |
| mp_min.test | RUN | 0.132581 | 0.480775 | 0.445478 | 0.001173 | 0.001326 | 0.001117 |
| mp_max.test | RUN | 0.136156 | 0.534240 | 0.460503 | 0.000956 | 0.001299 | 0.001129 |
| mp_similar.test | RUN | 0.138742 | 0.525022 | 0.458988 | 0.001107 | 0.001219 | 0.001133 |
| mp_map_find.test | RUN | 0.164872 | 0.973055 | 0.615209 | 0.001215 | 0.001495 | 0.001135 |
| mp_map_find_2.test | RUN | 0.148123 | 0.371330 | 0.511273 | 0.001312 | 0.001315 | 0.001272 |
| mp_map_find_3.test | RUN | 0.144941 | 0.366947 | 0.519098 | 0.001138 | 0.001153 | 0.001114 |
| mp_map_find_4.test | RUN | 0.136712 | 0.341485 | 0.475012 | 0.001108 | 0.001099 | 0.001039 |
| mp_map_contains.test | RUN | 0.143918 | 0.542987 | 0.473895 | 0.001113 | 0.001364 | 0.001177 |
| mp_map_insert.test | RUN | 0.197610 | 1.870662 | 0.879645 | 0.001264 | 0.001336 | 0.001170 |
| mp_map_replace.test | RUN | 0.266056 | 2.124634 | 1.007470 | 0.001207 | 0.001413 | 0.001043 |
| mp_map_erase.test | RUN | 0.186575 | 1.575850 | 0.835713 | 0.001256 | 0.001388 | 0.001125 |
| mp_map_update.test | RUN | 0.167428 | 1.008556 | 0.641376 | 0.001189 | 0.001307 | 0.001153 |
| mp_map_update_q.test | RUN | 0.168087 | 1.016530 | 0.641948 | 0.001203 | 0.001151 | 0.001080 |
| mp_map_keys.test | RUN | 0.160184 | 0.902308 | 0.619421 | 0.001086 | 0.001352 | 0.001111 |
| mp_is_map.test | RUN | 0.143587 | 0.538884 | 0.498848 | 0.001226 | 0.001289 | 0.001250 |
| mp_bind.test | RUN | 0.183061 | 1.653853 | 0.752247 | 0.001192 | 0.001210 | 0.001188 |
| mp_bind_q.test | RUN | 0.162979 | 1.024184 | 0.609045 | 0.001246 | 0.001274 | 0.001267 |
| mp_bind_front.test | RUN | 0.158346 | 1.102372 | 0.580659 | 0.001226 | 0.001160 | 0.001133 |
| mp_bind_back.test | RUN | 0.153154 | 1.100645 | 0.584700 | 0.001162 | 0.001371 | 0.001148 |
| mp_lambda.test | RUN | 0.378976 | 3.327570 | 1.574598 | 0.001122 | 0.000926 | 0.001107 |
| mpl.test | RUN | 0.325725 | 0.863923 | 1.237557 | 0.001119 | 0.001147 | 0.000996 |
| mpl_list.test | RUN | 0.174749 | 0.648859 | 0.565972 | 0.001228 | 0.001334 | 0.001203 |
| mpl_tuple.test | RUN | 0.172086 | 0.642551 | 0.574502 | 0.001053 | 0.001169 | 0.001215 |
| version.test | RUN | 0.087582 | 0.231516 | 0.295551 | 0.001432 | 0.001421 | 0.001055 |
| mp11_version.test | RUN | 0.105672 | 0.264384 | 0.330286 | 0.001136 | 0.001379 | 0.000982 |
| list_version.test | RUN | 0.088473 | 0.236992 | 0.296093 | 0.001047 | 0.001186 | 0.001122 |
| algorithm_version.test | RUN | 0.105007 | 0.249699 | 0.312786 | 0.001097 | 0.001315 | 0.001226 |
| integral_version.test | RUN | 0.087877 | 0.230337 | 0.290883 | 0.001329 | 0.001193 | 0.001200 |
| utility_version.test | RUN | 0.090285 | 0.235383 | 0.290273 | 0.001120 | 0.001150 | 0.001091 |
| function_version.test | RUN | 0.092534 | 0.239965 | 0.296158 | 0.001092 | 0.001317 | 0.001079 |
| map_version.test | RUN | 0.101636 | 0.249020 | 0.317068 | 0.001120 | 0.001242 | 0.001144 |
| set_version.test | RUN | 0.090561 | 0.242019 | 0.298346 | 0.001182 | 0.001150 | 0.001081 |
| bind_version.test | RUN | 0.091452 | 0.251950 | 0.308246 | 0.001182 | 0.001300 | 0.001091 |
| integer_sequence_version.test | RUN | 0.085244 | 0.231742 | 0.215063 | 0.001084 | 0.001428 | 0.000909 |
| tuple_version.test | RUN | 0.099600 | 0.248855 | 0.311965 | 0.000832 | 0.000854 | 0.000848 |
| mpl_version.test | RUN | 0.070509 | 0.183117 | 0.309571 | 0.000836 | 0.000944 | 0.000843 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 1.007× | 1.004×, 1.009× | 1.005× |
| clang | 1.089× | 1.089×, 1.090× | 1.003× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1364 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44402206984).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| algorithm_version.test | 10 | 0.000741s | 0.000730s | 0.000704s | byte equality observed |
| bind_version.test | 10 | 0.000724s | 0.000726s | 0.000718s | byte equality observed |
| construct_from_tuple.test | 10 | 0.000733s | 0.000736s | 0.000717s | byte equality observed |
| function_version.test | 10 | 0.000721s | 0.000730s | 0.000703s | byte equality observed |
| integer_sequence.test | 10 | 0.000713s | 0.000745s | 0.000699s | byte equality observed |
| integer_sequence_version.test | 10 | 0.000709s | 0.000714s | 0.000700s | byte equality observed |
| integral.test | 10 | 0.000709s | 0.000732s | 0.000703s | byte equality observed |
| integral_version.test | 10 | 0.000731s | 0.000722s | 0.000698s | byte equality observed |
| list_version.test | 10 | 0.000749s | 0.000719s | 0.000699s | byte equality observed |
| map_version.test | 10 | 0.000741s | 0.000710s | 0.000722s | byte equality observed |
| mp11_version.test | 10 | 0.000737s | 0.000714s | 0.000708s | byte equality observed |
| mp_all.test | 10 | 0.000739s | 0.000745s | 0.000744s | byte equality observed |
| mp_all_2.test | 10 | 0.000740s | 0.000735s | 0.000762s | byte equality observed |
| mp_all_of.test | 10 | 0.000741s | 0.000748s | 0.000775s | byte equality observed |
| mp_all_of_q.test | 10 | 0.000736s | 0.000743s | 0.000790s | byte equality observed |
| mp_and.test | 10 | 0.000729s | 0.000737s | 0.000795s | byte equality observed |
| mp_any.test | 10 | 0.000729s | 0.000718s | 0.000784s | byte equality observed |
| mp_any_2.test | 10 | 0.000727s | 0.000732s | 0.000801s | byte equality observed |
| mp_any_of.test | 10 | 0.000736s | 0.000749s | 0.000802s | byte equality observed |
| mp_any_of_q.test | 10 | 0.000740s | 0.000745s | 0.000790s | byte equality observed |
| mp_append.test | 10 | 0.000741s | 0.000726s | 0.000802s | byte equality observed |
| mp_append_2.test | 10 | 0.000761s | 0.000740s | 0.000805s | byte equality observed |
| mp_append_3.test | 10 | 0.000363s | 0.000348s | 0.000823s | byte equality observed |
| mp_append_sf.test | 10 | 0.000803s | 0.000746s | 0.000783s | byte equality observed |
| mp_apply_q.test | 10 | 0.000784s | 0.000737s | 0.000823s | byte equality observed |
| mp_apply_q_sf.test | 10 | 0.000811s | 0.000721s | 0.000823s | byte equality observed |
| mp_assign.test | 10 | 0.000805s | 0.000753s | 0.000812s | byte equality observed |
| mp_assign_2.test | 10 | 0.000366s | 0.000343s | 0.000776s | byte equality observed |
| mp_at.test | 10 | 0.000799s | 0.000736s | 0.000772s | byte equality observed |
| mp_at_2.test | 10 | 0.000365s | 0.000337s | 0.000780s | byte equality observed |
| mp_at_sf.test | 10 | 0.000798s | 0.000751s | 0.000787s | byte equality observed |
| mp_back.test | 10 | 0.000804s | 0.000769s | 0.000790s | byte equality observed |
| mp_back_2.test | 10 | 0.000358s | 0.000357s | 0.000785s | byte equality observed |
| mp_bind.test | 10 | 0.000790s | 0.000813s | 0.000798s | byte equality observed |
| mp_bind_back.test | 10 | 0.000809s | 0.000816s | 0.000832s | byte equality observed |
| mp_bind_front.test | 10 | 0.000788s | 0.000827s | 0.000810s | byte equality observed |
| mp_bind_q.test | 10 | 0.000794s | 0.000826s | 0.000801s | byte equality observed |
| mp_clear.test | 10 | 0.000790s | 0.000801s | 0.000801s | byte equality observed |
| mp_clear_2.test | 10 | 0.000356s | 0.000368s | 0.000782s | byte equality observed |
| mp_compose.test | 10 | 0.000796s | 0.000808s | 0.000786s | byte equality observed |
| mp_cond.test | 10 | 0.000782s | 0.000809s | 0.000788s | byte equality observed |
| mp_cond_sf.test | 10 | 0.000781s | 0.000815s | 0.000780s | byte equality observed |
| mp_contains.test | 10 | 0.000797s | 0.000811s | 0.000808s | byte equality observed |
| mp_copy_if.test | 10 | 0.000789s | 0.000787s | 0.000819s | byte equality observed |
| mp_copy_if_q.test | 10 | 0.000804s | 0.000804s | 0.000792s | byte equality observed |
| mp_count.test | 10 | 0.000802s | 0.000816s | 0.000791s | byte equality observed |
| mp_count_if.test | 10 | 0.000823s | 0.000805s | 0.000766s | byte equality observed |
| mp_count_if_q.test | 10 | 0.000795s | 0.000791s | 0.000798s | byte equality observed |
| mp_defer.test | 10 | 0.000791s | 0.000811s | 0.000806s | byte equality observed |
| mp_drop.test | 10 | 0.000802s | 0.000793s | 0.000794s | byte equality observed |
| mp_drop_2.test | 10 | 0.000367s | 0.000357s | 0.000787s | byte equality observed |
| mp_empty.test | 10 | 0.000801s | 0.000811s | 0.000781s | byte equality observed |
| mp_empty_2.test | 10 | 0.000360s | 0.000356s | 0.000793s | byte equality observed |
| mp_erase.test | 10 | 0.000798s | 0.000827s | 0.000775s | byte equality observed |
| mp_erase_2.test | 10 | 0.000358s | 0.000359s | 0.000784s | byte equality observed |
| mp_eval_if.test | 10 | 0.000796s | 0.000791s | 0.000799s | byte equality observed |
| mp_eval_if_not.test | 10 | 0.000810s | 0.000829s | 0.000787s | byte equality observed |
| mp_eval_if_sf.test | 10 | 0.000811s | 0.000808s | 0.000790s | byte equality observed |
| mp_eval_or.test | 10 | 0.000793s | 0.000800s | 0.000796s | byte equality observed |
| mp_fill.test | 10 | 0.000790s | 0.000796s | 0.000813s | byte equality observed |
| mp_fill_2.test | 10 | 0.000357s | 0.000360s | 0.000787s | byte equality observed |
| mp_filter.test | 10 | 0.000784s | 0.000789s | 0.000797s | byte equality observed |
| mp_find.test | 10 | 0.000788s | 0.000813s | 0.000772s | byte equality observed |
| mp_find_if.test | 10 | 0.000808s | 0.000829s | 0.000791s | byte equality observed |
| mp_find_if_q.test | 10 | 0.000804s | 0.000835s | 0.000803s | byte equality observed |
| mp_flatten.test | 10 | 0.000801s | 0.000846s | 0.000805s | byte equality observed |
| mp_fold.test | 10 | 0.000808s | 0.000823s | 0.000818s | byte equality observed |
| mp_fold_q.test | 10 | 0.000789s | 0.000825s | 0.000812s | byte equality observed |
| mp_fold_q_sf.test | 10 | 0.000791s | 0.000827s | 0.000801s | byte equality observed |
| mp_for_each.test | 10 | 0.000795s | 0.000796s | 0.000827s | byte equality observed |
| mp_from_sequence.test | 10 | 0.000802s | 0.000806s | 0.000825s | byte equality observed |
| mp_from_sequence_2.test | 10 | 0.000796s | 0.000788s | 0.000823s | byte equality observed |
| mp_from_sequence_3.test | 10 | 0.000809s | 0.000822s | 0.000791s | byte equality observed |
| mp_front.test | 10 | 0.000791s | 0.000809s | 0.000775s | byte equality observed |
| mp_front_2.test | 10 | 0.000358s | 0.000355s | 0.000751s | byte equality observed |
| mp_identity.test | 10 | 0.000786s | 0.000806s | 0.000793s | byte equality observed |
| mp_if.test | 10 | 0.000790s | 0.000798s | 0.000791s | byte equality observed |
| mp_if_sf.test | 10 | 0.000789s | 0.000819s | 0.000806s | byte equality observed |
| mp_inherit.test | 10 | 0.000811s | 0.000815s | 0.000803s | byte equality observed |
| mp_insert.test | 10 | 0.000814s | 0.000788s | 0.000778s | byte equality observed |
| mp_insert_2.test | 10 | 0.000359s | 0.000359s | 0.000783s | byte equality observed |
| mp_intersperse.test | 10 | 0.000804s | 0.000798s | 0.000792s | byte equality observed |
| mp_invoke_q.test | 10 | 0.000800s | 0.000799s | 0.000801s | byte equality observed |
| mp_invoke_q_sf.test | 10 | 0.000783s | 0.000805s | 0.000788s | byte equality observed |
| mp_iota.test | 10 | 0.000785s | 0.000821s | 0.000785s | byte equality observed |
| mp_iota_2.test | 10 | 0.000810s | 0.000805s | 0.000799s | byte equality observed |
| mp_is_list.test | 10 | 0.000818s | 0.000837s | 0.000809s | byte equality observed |
| mp_is_map.test | 10 | 0.000810s | 0.000791s | 0.000802s | byte equality observed |
| mp_is_set.test | 10 | 0.000793s | 0.000797s | 0.000800s | byte equality observed |
| mp_is_value_list.test | 10 | 0.000797s | 0.000798s | 0.000781s | byte equality observed |
| mp_iterate.test | 10 | 0.000797s | 0.000818s | 0.000811s | byte equality observed |
| mp_join.test | 10 | 0.000819s | 0.000838s | 0.000796s | byte equality observed |
| mp_lambda.test | 10 | 0.000807s | 0.000824s | 0.000820s | byte equality observed |
| mp_less.test | 10 | 0.000788s | 0.000799s | 0.000801s | byte equality observed |
| mp_list_c.test | 10 | 0.000782s | 0.000805s | 0.000777s | byte equality observed |
| mp_list_v.test | 10 | 0.000359s | 0.000358s | 0.000767s | byte equality observed |
| mp_map_contains.test | 10 | 0.000791s | 0.000794s | 0.000793s | byte equality observed |
| mp_map_erase.test | 10 | 0.000784s | 0.000818s | 0.000804s | byte equality observed |
| mp_map_find.test | 10 | 0.000804s | 0.000820s | 0.000807s | byte equality observed |
| mp_map_find_2.test | 10 | 0.000778s | 0.000792s | 0.000818s | byte equality observed |
| mp_map_find_3.test | 10 | 0.000781s | 0.000801s | 0.000799s | byte equality observed |
| mp_map_find_4.test | 10 | 0.000801s | 0.000781s | 0.000799s | byte equality observed |
| mp_map_insert.test | 10 | 0.000819s | 0.000807s | 0.000811s | byte equality observed |
| mp_map_keys.test | 10 | 0.000819s | 0.000806s | 0.000812s | byte equality observed |
| mp_map_replace.test | 10 | 0.000812s | 0.000819s | 0.000795s | byte equality observed |
| mp_map_update.test | 10 | 0.000815s | 0.000792s | 0.000801s | byte equality observed |
| mp_map_update_q.test | 10 | 0.000805s | 0.000786s | 0.000806s | byte equality observed |
| mp_max.test | 10 | 0.000815s | 0.000797s | 0.000801s | byte equality observed |
| mp_max_element.test | 10 | 0.000811s | 0.000805s | 0.000820s | byte equality observed |
| mp_max_element_2.test | 10 | 0.000357s | 0.000354s | 0.000798s | byte equality observed |
| mp_max_element_q.test | 10 | 0.000790s | 0.000806s | 0.000799s | byte equality observed |
| mp_max_element_q_2.test | 10 | 0.000357s | 0.000362s | 0.000753s | byte equality observed |
| mp_min.test | 10 | 0.000796s | 0.000825s | 0.000792s | byte equality observed |
| mp_min_element.test | 10 | 0.000802s | 0.000807s | 0.000807s | byte equality observed |
| mp_min_element_2.test | 10 | 0.000354s | 0.000363s | 0.000772s | byte equality observed |
| mp_min_element_q.test | 10 | 0.000795s | 0.000793s | 0.000790s | byte equality observed |
| mp_min_element_q_2.test | 10 | 0.000366s | 0.000362s | 0.000786s | byte equality observed |
| mp_none_of.test | 10 | 0.000799s | 0.000810s | 0.000789s | byte equality observed |
| mp_none_of_q.test | 10 | 0.000785s | 0.000787s | 0.000785s | byte equality observed |
| mp_not_fn.test | 10 | 0.000809s | 0.000827s | 0.000818s | byte equality observed |
| mp_nth_element.test | 10 | 0.000799s | 0.000816s | 0.000770s | byte equality observed |
| mp_nth_element_q.test | 10 | 0.000785s | 0.000841s | 0.000802s | byte equality observed |
| mp_or.test | 10 | 0.000791s | 0.000811s | 0.000785s | byte equality observed |
| mp_pairwise_fold.test | 10 | 0.000785s | 0.000774s | 0.000792s | byte equality observed |
| mp_pairwise_fold_q.test | 10 | 0.000785s | 0.000815s | 0.000801s | byte equality observed |
| mp_partial_sum.test | 10 | 0.000817s | 0.000853s | 0.000800s | byte equality observed |
| mp_partition.test | 10 | 0.000809s | 0.000827s | 0.000788s | byte equality observed |
| mp_partition_q.test | 10 | 0.000793s | 0.000804s | 0.000808s | byte equality observed |
| mp_plus.test | 10 | 0.000787s | 0.000809s | 0.000814s | byte equality observed |
| mp_pop_back.test | 10 | 0.000806s | 0.000792s | 0.000774s | byte equality observed |
| mp_pop_back_2.test | 10 | 0.000356s | 0.000360s | 0.000765s | byte equality observed |
| mp_pop_front.test | 10 | 0.000796s | 0.000788s | 0.000786s | byte equality observed |
| mp_pop_front_2.test | 10 | 0.000359s | 0.000361s | 0.000810s | byte equality observed |
| mp_power_set.test | 10 | 0.000814s | 0.000803s | 0.000791s | byte equality observed |
| mp_product.test | 10 | 0.000781s | 0.000792s | 0.000809s | byte equality observed |
| mp_push_back.test | 10 | 0.000794s | 0.000793s | 0.000807s | byte equality observed |
| mp_push_back_2.test | 10 | 0.000357s | 0.000354s | 0.000774s | byte equality observed |
| mp_push_front.test | 10 | 0.000789s | 0.000795s | 0.000802s | byte equality observed |
| mp_push_front_2.test | 10 | 0.000360s | 0.000351s | 0.000768s | byte equality observed |
| mp_quote.test | 10 | 0.000804s | 0.000797s | 0.000801s | byte equality observed |
| mp_quote_trait.test | 10 | 0.000809s | 0.000813s | 0.000790s | byte equality observed |
| mp_remove.test | 10 | 0.000808s | 0.000788s | 0.000806s | byte equality observed |
| mp_remove_if.test | 10 | 0.000789s | 0.000776s | 0.000776s | byte equality observed |
| mp_remove_if_q.test | 10 | 0.000796s | 0.000793s | 0.000813s | byte equality observed |
| mp_rename.test | 10 | 0.000783s | 0.000807s | 0.000815s | byte equality observed |
| mp_rename_2.test | 10 | 0.000353s | 0.000364s | 0.000774s | byte equality observed |
| mp_rename_v.test | 10 | 0.000361s | 0.000343s | 0.000768s | byte equality observed |
| mp_repeat.test | 10 | 0.000811s | 0.000806s | 0.000788s | byte equality observed |
| mp_repeat_2.test | 10 | 0.000359s | 0.000360s | 0.000781s | byte equality observed |
| mp_repeat_3.test | 10 | 0.000784s | 0.000787s | 0.000779s | byte equality observed |
| mp_replace.test | 10 | 0.000792s | 0.000802s | 0.000813s | byte equality observed |
| mp_replace_at.test | 10 | 0.000815s | 0.000848s | 0.000776s | byte equality observed |
| mp_replace_at_c.test | 10 | 0.000819s | 0.000793s | 0.000784s | byte equality observed |
| mp_replace_front.test | 10 | 0.000799s | 0.000800s | 0.000791s | byte equality observed |
| mp_replace_front_2.test | 10 | 0.000355s | 0.000354s | 0.000797s | byte equality observed |
| mp_replace_if.test | 10 | 0.000792s | 0.000822s | 0.000802s | byte equality observed |
| mp_replace_if_q.test | 10 | 0.000797s | 0.000794s | 0.000787s | byte equality observed |
| mp_replace_second.test | 10 | 0.000783s | 0.000806s | 0.000785s | byte equality observed |
| mp_replace_second_2.test | 10 | 0.000352s | 0.000349s | 0.000804s | byte equality observed |
| mp_replace_third.test | 10 | 0.000798s | 0.000798s | 0.000779s | byte equality observed |
| mp_replace_third_2.test | 10 | 0.000357s | 0.000357s | 0.000761s | byte equality observed |
| mp_reverse.test | 10 | 0.000824s | 0.000803s | 0.000777s | byte equality observed |
| mp_reverse_fold.test | 10 | 0.000815s | 0.000794s | 0.000793s | byte equality observed |
| mp_reverse_fold_q.test | 10 | 0.000796s | 0.000824s | 0.000818s | byte equality observed |
| mp_rotate_left.test | 10 | 0.000787s | 0.000795s | 0.000812s | byte equality observed |
| mp_rotate_right.test | 10 | 0.000802s | 0.000789s | 0.000833s | byte equality observed |
| mp_same.test | 10 | 0.000798s | 0.000808s | 0.000800s | byte equality observed |
| mp_second.test | 10 | 0.000781s | 0.000786s | 0.000796s | byte equality observed |
| mp_second_2.test | 10 | 0.000356s | 0.000359s | 0.000791s | byte equality observed |
| mp_set_contains.test | 10 | 0.000787s | 0.000814s | 0.000788s | byte equality observed |
| mp_set_difference.test | 10 | 0.000779s | 0.000802s | 0.000819s | byte equality observed |
| mp_set_difference_sf.test | 10 | 0.000807s | 0.000810s | 0.000805s | byte equality observed |
| mp_set_intersection.test | 10 | 0.000798s | 0.000830s | 0.000776s | byte equality observed |
| mp_set_intersection_sf.test | 10 | 0.000804s | 0.000817s | 0.000820s | byte equality observed |
| mp_set_push_back.test | 10 | 0.000808s | 0.000806s | 0.000795s | byte equality observed |
| mp_set_push_front.test | 10 | 0.000806s | 0.000788s | 0.000820s | byte equality observed |
| mp_set_union.test | 10 | 0.000822s | 0.000824s | 0.000789s | byte equality observed |
| mp_set_union_sf.test | 10 | 0.000809s | 0.000805s | 0.000793s | byte equality observed |
| mp_similar.test | 10 | 0.000804s | 0.000826s | 0.000801s | byte equality observed |
| mp_size.test | 10 | 0.000791s | 0.000817s | 0.000796s | byte equality observed |
| mp_size_2.test | 10 | 0.000362s | 0.000351s | 0.000747s | byte equality observed |
| mp_slice.test | 10 | 0.000789s | 0.000799s | 0.000790s | byte equality observed |
| mp_slice_2.test | 10 | 0.000361s | 0.000351s | 0.000738s | byte equality observed |
| mp_sliding_fold.test | 10 | 0.000807s | 0.000838s | 0.000790s | byte equality observed |
| mp_sliding_fold_q.test | 10 | 0.000810s | 0.000823s | 0.000798s | byte equality observed |
| mp_sort.test | 10 | 0.000789s | 0.000822s | 0.000818s | byte equality observed |
| mp_sort_q.test | 10 | 0.000790s | 0.000805s | 0.000803s | byte equality observed |
| mp_split.test | 10 | 0.000823s | 0.000829s | 0.000829s | byte equality observed |
| mp_starts_with.test | 10 | 0.000800s | 0.000812s | 0.000823s | byte equality observed |
| mp_starts_with_sf.test | 10 | 0.000789s | 0.000812s | 0.000787s | byte equality observed |
| mp_take.test | 10 | 0.000818s | 0.000797s | 0.000806s | byte equality observed |
| mp_take_2.test | 10 | 0.000355s | 0.000355s | 0.000757s | byte equality observed |
| mp_third.test | 10 | 0.000781s | 0.000803s | 0.000781s | byte equality observed |
| mp_third_2.test | 10 | 0.000360s | 0.000356s | 0.000775s | byte equality observed |
| mp_transform.test | 10 | 0.000801s | 0.000814s | 0.000775s | byte equality observed |
| mp_transform_2.test | 10 | 0.000764s | 0.000786s | 0.000782s | byte equality observed |
| mp_transform_front.test | 10 | 0.000793s | 0.000784s | 0.000790s | byte equality observed |
| mp_transform_front_2.test | 10 | 0.000358s | 0.000351s | 0.000790s | byte equality observed |
| mp_transform_if.test | 10 | 0.000799s | 0.000771s | 0.000795s | byte equality observed |
| mp_transform_if_q.test | 10 | 0.000799s | 0.000788s | 0.000775s | byte equality observed |
| mp_transform_q.test | 10 | 0.000812s | 0.000794s | 0.000785s | byte equality observed |
| mp_transform_q_2.test | 10 | 0.000820s | 0.000788s | 0.000783s | byte equality observed |
| mp_transform_second.test | 10 | 0.000806s | 0.000793s | 0.000796s | byte equality observed |
| mp_transform_second_2.test | 10 | 0.000357s | 0.000354s | 0.000808s | byte equality observed |
| mp_transform_sf.test | 10 | 0.000803s | 0.000791s | 0.000785s | byte equality observed |
| mp_transform_third.test | 10 | 0.000793s | 0.000788s | 0.000803s | byte equality observed |
| mp_transform_third_2.test | 10 | 0.000357s | 0.000366s | 0.000756s | byte equality observed |
| mp_unique.test | 10 | 0.000778s | 0.000779s | 0.000787s | byte equality observed |
| mp_unique_if.test | 10 | 0.000828s | 0.000800s | 0.000794s | byte equality observed |
| mp_unique_if_q.test | 10 | 0.000797s | 0.000800s | 0.000799s | byte equality observed |
| mp_valid.test | 10 | 0.000778s | 0.000784s | 0.000797s | byte equality observed |
| mp_valid_and_true.test | 10 | 0.000794s | 0.000813s | 0.000796s | byte equality observed |
| mp_value.test | 10 | 0.000357s | 0.000347s | 0.000777s | byte equality observed |
| mp_with_index.test | 10 | 0.001116s | 0.001073s | 0.001012s | byte equality observed |
| mp_with_index_cx.test | 10 | 0.000348s | 0.000353s | 0.000766s | byte equality observed |
| mpl.test | 10 | 0.000812s | 0.000791s | 0.000795s | byte equality observed |
| mpl_list.test | 10 | 0.000820s | 0.000801s | 0.000777s | byte equality observed |
| mpl_tuple.test | 10 | 0.000798s | 0.000812s | 0.000796s | byte equality observed |
| mpl_version.test | 10 | 0.000814s | 0.000787s | 0.000808s | byte equality observed |
| set_version.test | 10 | 0.000803s | 0.000763s | 0.000808s | byte equality observed |
| tuple_apply.test | 10 | 0.000794s | 0.000794s | 0.000804s | byte equality observed |
| tuple_for_each.test | 10 | 0.000796s | 0.000818s | 0.000811s | byte equality observed |
| tuple_transform.test | 10 | 0.000791s | 0.000807s | 0.000812s | byte equality observed |
| tuple_transform_2.test | 10 | 0.000800s | 0.000808s | 0.000810s | byte equality observed |
| tuple_version.test | 10 | 0.000794s | 0.000805s | 0.000794s | byte equality observed |
| utility_version.test | 10 | 0.000781s | 0.000812s | 0.000807s | byte equality observed |
| version.test | 10 | 0.000814s | 0.000822s | 0.000805s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44402206984).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
