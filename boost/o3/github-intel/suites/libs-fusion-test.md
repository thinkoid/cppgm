# libs/fusion/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| all.test | RUN | 0.284627 | 0.615639 | 0.813397 | 0.001063 | 0.001103 | 0.001134 |
| any.test | RUN | 0.272063 | 0.585314 | 0.769143 | 0.001158 | 0.001220 | 0.001258 |
| clear.test | RUN | 0.200813 | 0.552120 | 0.638204 | 0.001164 | 0.001276 | 0.001148 |
| copy.test | RUN | 0.168289 | 0.415018 | 0.514235 | 0.001448 | 0.001182 | 0.001313 |
| count.test | RUN | 0.191524 | 0.462106 | 0.572410 | 0.001266 | 0.001450 | 0.001300 |
| count_if.test | RUN | 0.175368 | 0.423749 | 0.522647 | 0.001163 | 0.001311 | 0.001181 |
| erase.test | RUN | 0.255321 | 0.757408 | 0.861600 | 0.001231 | 0.001374 | 0.001204 |
| erase_key.test | RUN | 0.246722 | 0.759560 | 0.813195 | 0.001147 | 0.001280 | 0.001238 |
| filter.test | RUN | 0.227738 | 0.636460 | 0.734973 | 0.001384 | 0.001478 | 0.001262 |
| filter_if.test | RUN | 0.252442 | 0.751784 | 0.866751 | 0.001169 | 0.001370 | 0.001385 |
| find.test | RUN | 0.218628 | 0.513037 | 0.655451 | 0.001082 | 0.001212 | 0.001183 |
| find_if.test | RUN | 0.206294 | 0.470310 | 0.602491 | 0.001147 | 0.001186 | 0.001386 |
| fold.test | RUN | 0.227642 | 0.585958 | 0.739181 | 0.001278 | 0.001426 | 0.001261 |
| for_each.test | RUN | 0.195671 | 0.531280 | 0.640052 | 0.001223 | 0.001401 | 0.001339 |
| insert.test | RUN | 0.295737 | 0.946162 | 1.032759 | 0.001147 | 0.001327 | 0.001239 |
| insert_range.test | RUN | 0.295956 | 0.947289 | 1.044005 | 0.001222 | 0.001246 | 0.001230 |
| iter_fold.test | RUN | 0.339066 | 0.885366 | 1.259317 | 0.001238 | 0.001436 | 0.001402 |
| move.test | RUN | 0.177955 | 0.425617 | 0.534134 | 0.001172 | 0.001294 | 0.001187 |
| none.test | RUN | 0.272976 | 0.610339 | 0.800727 | 0.001105 | 0.001346 | 0.001244 |
| pop_back.test | RUN | 0.278426 | 0.817189 | 0.919426 | 0.001156 | 0.001232 | 0.001233 |
| pop_front.test | RUN | 0.234360 | 0.676245 | 0.750602 | 0.001176 | 0.001422 | 0.001078 |
| push_back.test | RUN | 0.290408 | 0.959648 | 1.013867 | 0.001255 | 0.001368 | 0.001240 |
| push_front.test | RUN | 0.256267 | 0.796805 | 0.857006 | 0.001233 | 0.001382 | 0.001067 |
| remove.test | RUN | 0.290325 | 0.901158 | 0.998436 | 0.001138 | 0.001533 | 0.001206 |
| remove_if.test | RUN | 0.257452 | 0.743109 | 0.845709 | 0.001217 | 0.001351 | 0.001240 |
| replace.test | RUN | 0.248399 | 0.726958 | 0.795098 | 0.001285 | 0.001392 | 0.001470 |
| replace_if.test | RUN | 0.247636 | 0.714218 | 0.787956 | 0.001292 | 0.001420 | 0.001167 |
| reverse_fold.test | RUN | 0.369799 | 0.998938 | 1.329965 | 0.001187 | 0.001326 | 0.001192 |
| reverse_iter_fold.test | RUN | 0.386141 | 1.039263 | 1.404554 | 0.001094 | 0.001459 | 0.001183 |
| reverse.test | RUN | 0.239752 | 0.756483 | 0.811431 | 0.001097 | 0.001479 | 0.001380 |
| segmented_for_each.test | RUN | 0.409002 | 1.418894 | 1.652377 | 0.001330 | 0.001277 | 0.001206 |
| segmented_find.test | RUN | 0.248215 | 0.743306 | 0.895355 | 0.001120 | 0.001336 | 0.001200 |
| segmented_find_if.test | RUN | 0.258106 | 0.753043 | 0.899748 | 0.001091 | 0.001272 | 0.001089 |
| segmented_fold.test | RUN | 0.324186 | 0.986630 | 1.188108 | 0.001257 | 0.001347 | 0.001130 |
| transform.test | RUN | 0.259768 | 0.798566 | 0.840867 | 0.001332 | 0.001334 | 0.001182 |
| join.test | RUN | 0.190596 | 0.485614 | 0.593298 | 0.001268 | 0.001293 | 0.001123 |
| zip.test | RUN | 0.339746 | 0.871485 | 1.116155 | 0.001245 | 0.001477 | 0.001193 |
| zip2.test | RUN | 0.318766 | 0.852208 | 1.048188 | 0.001257 | 0.001316 | 0.001104 |
| zip_ignore.test | RUN | 0.244903 | 0.588192 | 0.709610 | 0.000980 | 0.001362 | 0.001265 |
| flatten.test | RUN | 0.233978 | 0.664451 | 0.735380 | 0.001135 | 0.001418 | 0.001047 |
| ticket-5490.test | COMPILE | 0.126709 | 0.276885 | 0.337037 | — | — | — |
| as_deque.test | RUN | 0.228883 | 0.631707 | 0.760786 | 0.001131 | 0.001474 | 0.001100 |
| as_list.test | RUN | 0.257926 | 0.780313 | 0.832834 | 0.001173 | 0.001326 | 0.001108 |
| as_map.test | RUN | 0.258104 | 0.777960 | 0.829456 | 0.001048 | 0.001293 | 0.001115 |
| as_map_assoc.test | RUN | 0.252735 | 0.719383 | 0.786700 | 0.001161 | 0.001391 | 0.001044 |
| as_set.test | RUN | 0.294365 | 0.903918 | 0.977440 | 0.001250 | 0.001354 | 0.001071 |
| as_vector.test | RUN | 0.262449 | 0.801600 | 0.863737 | 0.001196 | 0.001284 | 0.001216 |
| boost_tuple.test | RUN | 0.262488 | 0.771644 | 0.830316 | 0.000947 | 0.001191 | 0.001072 |
| boost_tuple_iterator.test | RUN | 0.177282 | 0.449712 | 0.504900 | 0.001263 | 0.001187 | 0.001292 |
| cons.test | RUN | 0.331404 | 0.877638 | 0.998341 | 0.001105 | 0.001285 | 0.001017 |
| convert_boost_tuple.test | RUN | 0.204575 | 0.677398 | 0.655006 | 0.001446 | 0.001432 | 0.001193 |
| convert_deque.test | RUN | 0.205780 | 0.665491 | 0.653505 | 0.001213 | 0.001242 | 0.001160 |
| convert_list.test | RUN | 0.203567 | 0.674411 | 0.656601 | 0.001293 | 0.001079 | 0.001012 |
| convert_std_pair.test | RUN | 0.214199 | 0.681545 | 0.673737 | 0.001437 | 0.001216 | 0.000961 |
| convert_std_tuple.test | RUN | 0.210237 | 0.664888 | 0.655775 | 0.001160 | 0.001469 | 0.001064 |
| convert_vector.test | RUN | 0.207081 | 0.666482 | 0.659239 | 0.001142 | 0.001189 | 0.001053 |
| filter_view.test | RUN | 0.253400 | 0.705024 | 0.790973 | 0.001170 | 0.001242 | 0.001135 |
| hash.test | RUN | 0.248020 | 0.640752 | 0.736393 | 0.001290 | 0.001229 | 0.001109 |
| io.test | RUN | 0.267544 | 0.903466 | 0.885429 | 0.001223 | 0.001652 | 0.001200 |
| iterator_range.test | RUN | 0.237645 | 0.684711 | 0.740329 | 0.001057 | 0.001259 | 0.000976 |
| joint_view.test | RUN | 0.325859 | 1.139201 | 1.120630 | 0.001425 | 0.001379 | 0.001135 |
| list_comparison.test | RUN | 0.180054 | 0.468227 | 0.543564 | 0.001138 | 0.001127 | 0.001083 |
| list_construction.test | RUN | 0.183233 | 0.447111 | 0.511222 | 0.001244 | 0.001120 | 0.001100 |
| list_copy.test | RUN | 0.278109 | 0.821194 | 0.911553 | 0.001106 | 0.001248 | 0.001093 |
| list_iterator.test | RUN | 0.175251 | 0.456305 | 0.494839 | 0.001162 | 0.001249 | 0.001048 |
| list_hash.test | RUN | 0.244707 | 0.925441 | 0.753923 | 0.001123 | 0.001322 | 0.001184 |
| list_make.test | RUN | 0.186420 | 0.494373 | 0.565387 | 0.001183 | 0.001214 | 0.001164 |
| list_misc.test | RUN | 0.240787 | 0.574770 | 0.696299 | 0.001164 | 0.001280 | 0.001104 |
| list_mutate.test | RUN | 0.165459 | 0.395576 | 0.463570 | 0.001012 | 0.001309 | 0.001109 |
| list_nest.test | RUN | 0.340897 | 1.142263 | 1.310775 | 0.001147 | 0.001354 | 0.001060 |
| list_tie.test | RUN | 0.178656 | 0.452031 | 0.516112 | 0.001166 | 0.001388 | 0.001155 |
| list_value_at.test | RUN | 0.171296 | 0.413998 | 0.488520 | 0.001280 | 0.001191 | 0.001130 |
| deque_comparison.test | RUN | 0.177258 | 0.468343 | 0.569618 | 0.001038 | 0.001180 | 0.001234 |
| deque_construction.test | RUN | 0.182668 | 0.442334 | 0.529419 | 0.001304 | 0.001440 | 0.001137 |
| deque_copy.test | RUN | 0.266132 | 0.767152 | 0.870988 | 0.000980 | 0.001224 | 0.001207 |
| deque_iterator.test | RUN | 0.178045 | 0.476631 | 0.515717 | 0.001168 | 0.001265 | 0.001105 |
| deque_hash.test | RUN | 0.245211 | 0.875728 | 0.775225 | 0.001086 | 0.001416 | 0.001142 |
| deque_is_constructible.test | COMPILE | 0.097333 | 0.207008 | 0.242184 | — | — | — |
| deque_make.test | RUN | 0.183554 | 0.480004 | 0.552919 | 0.001124 | 0.001368 | 0.001194 |
| deque_misc.test | RUN | 0.235929 | 0.588332 | 0.690582 | 0.000999 | 0.001264 | 0.001118 |
| deque_move.test | RUN | 0.183213 | 0.482989 | 0.528320 | 0.001093 | 0.001201 | 0.001197 |
| deque_mutate.test | RUN | 0.168073 | 0.390039 | 0.468772 | 0.001124 | 0.001278 | 0.001168 |
| deque_nest.test | RUN | 0.512318 | 1.841300 | 2.068956 | 0.001273 | 0.001339 | 0.001164 |
| deque_tie.test | RUN | 0.174843 | 0.410593 | 0.495316 | 0.001346 | 0.001251 | 0.001265 |
| deque_value_at.test | RUN | 0.164960 | 0.414988 | 0.493069 | 0.000899 | 0.001125 | 0.001059 |
| front_extended_deque.test | RUN | 0.244740 | 0.595499 | 0.721329 | 0.001067 | 0.001278 | 0.001155 |
| back_extended_deque.test | RUN | 0.250345 | 0.609526 | 0.750597 | 0.001093 | 0.001361 | 0.001146 |
| make_list.test | RUN | 0.190765 | 0.497750 | 0.567627 | 0.001314 | 0.001392 | 0.001147 |
| make_vector.test | RUN | 0.188981 | 0.483616 | 0.552080 | 0.001038 | 0.001252 | 0.001089 |
| map.test | RUN | 0.253618 | 0.764584 | 0.820878 | 0.001329 | 0.001321 | 0.001084 |
| map_comparison.test | RUN | 0.186034 | 0.479773 | 0.557863 | 0.001255 | 0.001241 | 0.001225 |
| map_construction.test | RUN | 0.183271 | 0.462718 | 0.540350 | 0.001168 | 0.001206 | 0.001088 |
| map_copy.test | RUN | 0.220750 | 0.584387 | 0.668228 | 0.001078 | 0.001432 | 0.001037 |
| map_misc.test | RUN | 0.239405 | 0.596040 | 0.672811 | 0.001271 | 0.001268 | 0.001045 |
| map_move.test | RUN | 0.186945 | 0.496392 | 0.546677 | 0.001148 | 0.001277 | 0.001076 |
| map_mutate.test | RUN | 0.168036 | 0.394827 | 0.468766 | 0.000992 | 0.001173 | 0.001135 |
| map_tie.test | RUN | 0.172803 | 0.390489 | 0.484491 | 0.001021 | 0.001384 | 0.001124 |
| nil.test | RUN | 0.116295 | 0.276101 | 0.332229 | 0.001296 | 0.001198 | 0.001204 |
| nview.test | RUN | 0.231773 | 0.578424 | 0.695933 | 0.001143 | 0.001331 | 0.001152 |
| reverse_view.test | RUN | 0.305702 | 0.973464 | 1.042331 | 0.001186 | 0.001291 | 0.001148 |
| segmented_iterator_range.test | RUN | 0.355562 | 1.143841 | 1.297492 | 0.001199 | 0.001227 | 0.001298 |
| set.test | RUN | 0.223392 | 0.655132 | 0.734122 | 0.001149 | 0.001308 | 0.001175 |
| single_view.test | RUN | 0.204590 | 0.597609 | 0.668555 | 0.001107 | 0.001259 | 0.001061 |
| std_pair.test | RUN | 0.265219 | 0.768637 | 0.840285 | 0.001028 | 0.001257 | 0.001141 |
| boost_array.test | RUN | 0.217063 | 0.528403 | 0.630160 | 0.001065 | 0.001279 | 0.001220 |
| array.test | RUN | 0.218843 | 0.519626 | 0.619047 | 0.001048 | 0.000932 | 0.001230 |
| std_array.test | RUN | 0.226691 | 0.525465 | 0.620627 | 0.001131 | 0.001289 | 0.001072 |
| tuple_comparison.test | RUN | 0.192304 | 0.486747 | 0.597526 | 0.001047 | 0.001241 | 0.001039 |
| tuple_construction.test | RUN | 0.198448 | 0.491726 | 0.594883 | 0.001069 | 0.001252 | 0.001029 |
| tuple_conversion.test | RUN | 0.432957 | 1.538663 | 1.915735 | 0.001091 | 0.001360 | 0.001151 |
| tuple_copy.test | RUN | 0.292332 | 0.879686 | 1.012905 | 0.001078 | 0.001138 | 0.001126 |
| tuple_element.test | RUN | 0.181405 | 0.420499 | 0.527491 | 0.001188 | 0.001440 | 0.000959 |
| tuple_make.test | RUN | 0.199564 | 0.508488 | 0.580000 | 0.001058 | 0.001321 | 0.001093 |
| tuple_misc.test | RUN | 0.253659 | 0.619047 | 0.767044 | 0.001144 | 0.001143 | 0.001028 |
| tuple_mutate.test | RUN | 0.176113 | 0.408090 | 0.501538 | 0.001307 | 0.001340 | 0.001266 |
| tuple_nest.test | RUN | 0.739568 | 3.153182 | 3.571690 | 0.001065 | 0.001386 | 0.001206 |
| tuple_hash.test | RUN | 0.259039 | 0.917132 | 0.784602 | 0.001079 | 0.001248 | 0.001059 |
| tuple_tie.test | RUN | 0.190618 | 0.468920 | 0.539493 | 0.001297 | 0.001250 | 0.001061 |
| tuple_traits__maybe_variadic.test | RUN | 0.199355 | 0.557172 | 0.577146 | 0.001204 | 0.001188 | 0.001066 |
| tuple_traits__no_variadic.test | RUN | 0.229943 | 0.572411 | 0.621701 | 0.001249 | 0.001248 | 0.001224 |
| transform_view.test | RUN | 0.298676 | 0.956793 | 1.052173 | 0.001310 | 0.001348 | 0.001156 |
| identity_view.test | RUN | 0.286449 | 0.890075 | 0.964797 | 0.001085 | 0.001319 | 0.001228 |
| vector_comparison.test | RUN | 0.183317 | 0.480615 | 0.544495 | 0.001160 | 0.001393 | 0.001227 |
| vector_construction.test | RUN | 0.182918 | 0.435515 | 0.522237 | 0.001078 | 0.001342 | 0.001242 |
| vector_conversion.test | RUN | 0.533807 | 2.045747 | 2.462263 | 0.001191 | 0.001225 | 0.001195 |
| vector_copy.test | RUN | 0.276869 | 0.876512 | 0.982761 | 0.001080 | 0.001405 | 0.001205 |
| vector_iterator.test | RUN | 0.180666 | 0.459856 | 0.537451 | 0.001212 | 0.001313 | 0.000873 |
| vector_make.test | RUN | 0.183829 | 0.481966 | 0.558327 | 0.001094 | 0.001295 | 0.001180 |
| vector_misc.test | RUN | 0.240659 | 0.596274 | 0.721599 | 0.001137 | 0.001173 | 0.001130 |
| vector_move.test | RUN | 0.184322 | 0.486180 | 0.535533 | 0.001203 | 0.001423 | 0.001187 |
| vector_mutate.test | RUN | 0.170902 | 0.387763 | 0.465157 | 0.001067 | 0.001178 | 0.001081 |
| vector_n.test | RUN | 0.204071 | 0.494169 | 0.624822 | 0.001209 | 0.001255 | 0.001387 |
| vector_nest.test | RUN | 0.762818 | 3.361024 | 3.657397 | 0.001302 | 0.001089 | 0.001108 |
| vector_hash.test | RUN | 0.238422 | 0.901066 | 0.729087 | 0.001156 | 0.001341 | 0.001160 |
| vector_tie.test | RUN | 0.172352 | 0.443189 | 0.516873 | 0.001256 | 0.001236 | 0.001013 |
| vector_traits__maybe_variadic.test | RUN | 0.192390 | 0.490053 | 0.547316 | 0.001155 | 0.001290 | 0.001099 |
| vector_traits__no_variadic.test | RUN | 0.204260 | 0.545406 | 0.564402 | 0.001153 | 0.001304 | 0.001171 |
| vector_value_at.test | RUN | 0.167582 | 0.395569 | 0.480361 | 0.001192 | 0.001260 | 0.001090 |
| zip_view.test | RUN | 0.355806 | 0.969973 | 1.271904 | 0.001336 | 0.001415 | 0.001139 |
| zip_view2.test | RUN | 0.286913 | 0.762456 | 0.934169 | 0.001261 | 0.001139 | 0.001086 |
| zip_view_ignore.test | RUN | 0.271917 | 0.700379 | 0.845678 | 0.001124 | 0.001191 | 0.001027 |
| repetitive_view.test | RUN | 0.456046 | 1.258178 | 1.613015 | 0.001343 | 0.001410 | 0.001252 |
| deduce_sequence.test | RUN | 0.218705 | 0.539696 | 0.631460 | 0.001100 | 0.001339 | 0.001122 |
| adapt_adt_named.test | RUN | 0.258318 | 0.771401 | 0.870030 | 0.001146 | 0.001269 | 0.001089 |
| adapt_adt_named_empty.test | RUN | 0.224683 | 0.615618 | 0.695773 | 0.001103 | 0.001264 | 0.001033 |
| adapt_adt.test | RUN | 0.296930 | 1.008394 | 0.996649 | 0.001201 | 0.001257 | 0.001144 |
| adapt_adt_empty.test | RUN | 0.226366 | 0.624256 | 0.681328 | 0.001344 | 0.001266 | 0.001139 |
| adapt_assoc_adt_named.test | RUN | 0.289124 | 0.797563 | 0.894906 | 0.001056 | 0.001106 | 0.001125 |
| adapt_assoc_adt_named_empty.test | RUN | 0.224870 | 0.626653 | 0.683273 | 0.001255 | 0.001252 | 0.001235 |
| adapt_assoc_adt.test | RUN | 0.299260 | 0.829530 | 0.929703 | 0.001274 | 0.001572 | 0.001226 |
| adapt_assoc_adt_empty.test | RUN | 0.227352 | 0.624712 | 0.681659 | 0.001307 | 0.001326 | 0.001247 |
| adapt_assoc_struct_named.test | RUN | 0.287796 | 0.785728 | 0.881662 | 0.001072 | 0.001271 | 0.000832 |
| adapt_assoc_struct_named_empty.test | RUN | 0.222477 | 0.618820 | 0.676638 | 0.001103 | 0.001430 | 0.001332 |
| adapt_assoc_struct.test | RUN | 0.256961 | 0.741094 | 0.832039 | 0.001122 | 0.001228 | 0.001101 |
| adapt_assoc_struct_empty.test | RUN | 0.222512 | 0.620788 | 0.684707 | 0.001443 | 0.001251 | 0.001139 |
| adapt_assoc_tpl_adt.test | RUN | 0.307588 | 0.854364 | 0.959172 | 0.001028 | 0.001322 | 0.001103 |
| adapt_assoc_tpl_adt_empty.test | RUN | 0.227378 | 0.624102 | 0.681640 | 0.001166 | 0.001200 | 0.001196 |
| adapt_assoc_tpl_struct.test | RUN | 0.251099 | 0.719833 | 0.796142 | 0.001259 | 0.001190 | 0.001116 |
| adapt_assoc_tpl_struct_empty.test | RUN | 0.229564 | 0.621234 | 0.680948 | 0.001178 | 0.001248 | 0.001071 |
| adapt_struct_named.test | RUN | 0.254747 | 0.759300 | 0.812528 | 0.001099 | 0.001434 | 0.001176 |
| adapt_struct_named_empty.test | RUN | 0.226374 | 0.622242 | 0.674086 | 0.001081 | 0.001263 | 0.001141 |
| adapt_struct.test | RUN | 0.283583 | 0.852113 | 0.922792 | 0.001167 | 0.001293 | 0.001164 |
| adapt_struct_empty.test | RUN | 0.225017 | 0.618789 | 0.687899 | 0.001368 | 0.001238 | 0.000999 |
| adapt_tpl_adt.test | RUN | 0.289646 | 0.989417 | 0.956039 | 0.001052 | 0.001269 | 0.001079 |
| adapt_tpl_adt_empty.test | RUN | 0.225949 | 0.621827 | 0.693268 | 0.001147 | 0.001206 | 0.001259 |
| adapt_tpl_struct.test | RUN | 0.236326 | 0.685563 | 0.743046 | 0.001316 | 0.001310 | 0.001100 |
| adapt_tpl_struct_empty.test | RUN | 0.225802 | 0.628137 | 0.681493 | 0.001325 | 0.001264 | 0.001038 |
| adt_attribute_proxy.test | RUN | 0.252453 | 0.607490 | 0.714836 | 0.001221 | 0.001396 | 0.001140 |
| define_struct.test | RUN | 0.312621 | 0.840476 | 0.952797 | 0.001115 | 0.001267 | 0.001167 |
| define_struct_empty.test | RUN | 0.272464 | 0.698244 | 0.775320 | 0.001109 | 0.001326 | 0.001114 |
| define_struct_move.test | RUN | 0.168706 | 0.380395 | 0.454460 | 0.001216 | 0.001259 | 0.001101 |
| define_struct_inline.test | RUN | 0.326774 | 1.015643 | 1.095352 | 0.001280 | 0.001441 | 0.001161 |
| define_struct_inline_empty.test | RUN | 0.270225 | 0.710986 | 0.770767 | 0.001147 | 0.001220 | 0.001090 |
| define_struct_inline_move.test | RUN | 0.176601 | 0.383185 | 0.468365 | 0.001056 | 0.001299 | 0.001098 |
| define_assoc_struct.test | RUN | 0.295563 | 0.797203 | 0.918114 | 0.001267 | 0.001314 | 0.001250 |
| define_assoc_struct_empty.test | RUN | 0.270454 | 0.693744 | 0.783310 | 0.001183 | 0.001452 | 0.001172 |
| define_assoc_struct_move.test | RUN | 0.172180 | 0.383768 | 0.465998 | 0.001247 | 0.001257 | 0.001219 |
| define_tpl_struct.test | RUN | 0.298773 | 0.806004 | 0.924304 | 0.001294 | 0.001323 | 0.001149 |
| define_tpl_struct_empty.test | RUN | 0.274548 | 0.694307 | 0.800526 | 0.001168 | 0.001348 | 0.001102 |
| define_tpl_struct_move.test | RUN | 0.171071 | 0.393788 | 0.465356 | 0.001231 | 0.001258 | 0.001105 |
| define_tpl_struct_inline.test | RUN | 0.309430 | 0.953980 | 0.991917 | 0.001247 | 0.001516 | 0.001120 |
| define_tpl_struct_inline_empty.test | RUN | 0.276749 | 0.694018 | 0.802516 | 0.001224 | 0.001247 | 0.001070 |
| define_tpl_struct_inline_move.test | RUN | 0.170233 | 0.395030 | 0.477517 | 0.001049 | 0.001383 | 0.001107 |
| define_assoc_tpl_struct.test | RUN | 0.302295 | 0.835226 | 0.919778 | 0.001292 | 0.001415 | 0.001069 |
| define_assoc_tpl_struct_empty.test | RUN | 0.266434 | 0.695944 | 0.786016 | 0.001157 | 0.001127 | 0.001139 |
| define_assoc_tpl_struct_move.test | RUN | 0.176009 | 0.393916 | 0.477356 | 0.001190 | 0.001148 | 0.001136 |
| std_tuple.test | RUN | 0.181748 | 0.439081 | 0.523252 | 0.001008 | 0.001225 | 0.001064 |
| std_tuple_iterator.test | RUN | 0.179032 | 0.465498 | 0.521995 | 0.001198 | 0.001378 | 0.001027 |
| ref_vector.test | RUN | 0.196067 | 0.468767 | 0.561573 | 0.001062 | 0.001276 | 0.001146 |
| flatten_view.test | RUN | 0.219146 | 0.592005 | 0.670725 | 0.001146 | 0.001270 | 0.001088 |
| github-159.test | COMPILE | 0.094676 | 0.212861 | 0.248773 | — | — | — |
| github-176.test | RUN | 0.200079 | 0.517157 | 0.557233 | 0.001308 | 0.001208 | 0.001070 |
| size.test | COMPILE | 0.168762 | 0.368658 | 0.446591 | — | — | — |
| fused.test | RUN | 0.247141 | 0.554304 | 0.659619 | 0.001180 | 0.001421 | 0.001206 |
| fused_function_object.test | RUN | 0.177509 | 0.424113 | 0.503738 | 0.001053 | 0.001252 | 0.001206 |
| fused_procedure.test | RUN | 0.231646 | 0.528725 | 0.619405 | 0.001142 | 0.001333 | 0.001008 |
| unfused.test | RUN | 0.185280 | 0.433282 | 0.505010 | 0.001059 | 0.001244 | 0.001089 |
| unfused_typed.test | RUN | 0.183327 | 0.466521 | 0.535848 | 0.001318 | 0.001311 | 0.001084 |
| make_fused.test | RUN | 0.237972 | 0.550537 | 0.653491 | 0.000996 | 0.001166 | 0.001101 |
| make_fused_function_object.test | RUN | 0.175731 | 0.413552 | 0.503026 | 0.001184 | 0.001262 | 0.001181 |
| make_fused_procedure.test | RUN | 0.233277 | 0.528934 | 0.618510 | 0.001072 | 0.001364 | 0.001108 |
| make_unfused.test | RUN | 0.173611 | 0.420146 | 0.508310 | 0.001130 | 0.001277 | 0.001274 |
| invoke.test | RUN | 0.459459 | 1.553594 | 1.760609 | 0.001105 | 0.001212 | 0.001116 |
| invoke_function_object.test | RUN | 0.223200 | 0.557778 | 0.656195 | 0.001153 | 0.001315 | 0.001229 |
| invoke_procedure.test | RUN | 0.378169 | 1.146976 | 1.293228 | 0.001114 | 0.001308 | 0.001129 |
| swap.test | RUN | 0.276858 | 0.711132 | 0.837144 | 0.001107 | 0.001348 | 0.001291 |
| is_sequence.test | COMPILE | 0.045783 | 0.099436 | 0.104414 | — | — | — |
| is_view.test | COMPILE | 0.045351 | 0.095198 | 0.103352 | — | — | — |
| pair_deque.test | COMPILE | 0.103412 | 0.222175 | 0.256912 | — | — | — |
| pair_list.test | COMPILE | 0.098471 | 0.214174 | 0.247682 | — | — | — |
| pair_map.test | COMPILE | 0.101183 | 0.222901 | 0.266612 | — | — | — |
| pair_set.test | COMPILE | 0.102786 | 0.225290 | 0.255713 | — | — | — |
| pair_vector.test | COMPILE | 0.099982 | 0.221893 | 0.253318 | — | — | — |
| pair_nest.test | COMPILE | 0.038452 | 0.088323 | 0.097468 | — | — | — |
| index_sequence.test | COMPILE | 0.033086 | 0.058738 | 0.071433 | — | — | — |
| and.test | COMPILE | 0.024768 | 0.046404 | 0.050640 | — | — | — |
| tag_of.test | COMPILE | 0.044741 | 0.092047 | 0.100480 | — | — | — |
| unused.test | COMPILE | 0.022503 | 0.059757 | 0.061960 | — | — | — |
| tag_of_fallback.test | COMPILE | 0.045415 | 0.092478 | 0.102621 | — | — | — |
| make_pair_r-value.test | COMPILE | 0.037529 | 0.065896 | 0.094737 | — | — | — |
| quick.test | RUN | 0.132883 | 0.314718 | 0.322083 | 0.000374 | 0.000856 | 0.000784 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.998× | 0.991×, 1.005× | 1.002× |
| clang | 1.000× | 0.999×, 1.000× | 0.996× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1363 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/43801643681).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| adapt_adt.test | 10 | 0.000829s | 0.000819s | 0.000795s | byte equality observed |
| adapt_adt_empty.test | 10 | 0.000835s | 0.000790s | 0.000787s | byte equality observed |
| adapt_adt_named.test | 10 | 0.000831s | 0.000813s | 0.000817s | byte equality observed |
| adapt_adt_named_empty.test | 10 | 0.000818s | 0.000812s | 0.000817s | byte equality observed |
| adapt_assoc_adt.test | 10 | 0.000819s | 0.000828s | 0.000840s | byte equality observed |
| adapt_assoc_adt_empty.test | 10 | 0.000836s | 0.000833s | 0.000829s | byte equality observed |
| adapt_assoc_adt_named.test | 10 | 0.000801s | 0.000827s | 0.000831s | byte equality observed |
| adapt_assoc_adt_named_empty.test | 10 | 0.000819s | 0.000826s | 0.000811s | byte equality observed |
| adapt_assoc_struct.test | 10 | 0.000803s | 0.000799s | 0.000809s | byte equality observed |
| adapt_assoc_struct_empty.test | 10 | 0.000814s | 0.000819s | 0.000801s | byte equality observed |
| adapt_assoc_struct_named.test | 10 | 0.000823s | 0.000794s | 0.000813s | byte equality observed |
| adapt_assoc_struct_named_empty.test | 10 | 0.000836s | 0.000810s | 0.000790s | byte equality observed |
| adapt_assoc_tpl_adt.test | 10 | 0.000815s | 0.000801s | 0.000807s | byte equality observed |
| adapt_assoc_tpl_adt_empty.test | 10 | 0.000810s | 0.000802s | 0.000825s | byte equality observed |
| adapt_assoc_tpl_struct.test | 10 | 0.000816s | 0.000832s | 0.000834s | byte equality observed |
| adapt_assoc_tpl_struct_empty.test | 10 | 0.000811s | 0.000796s | 0.000843s | byte equality observed |
| adapt_struct.test | 10 | 0.000818s | 0.000803s | 0.000828s | byte equality observed |
| adapt_struct_empty.test | 10 | 0.000828s | 0.000785s | 0.000811s | byte equality observed |
| adapt_struct_named.test | 10 | 0.000834s | 0.000789s | 0.000806s | byte equality observed |
| adapt_struct_named_empty.test | 10 | 0.000797s | 0.000834s | 0.000814s | byte equality observed |
| adapt_tpl_adt.test | 10 | 0.000819s | 0.000806s | 0.000830s | byte equality observed |
| adapt_tpl_adt_empty.test | 10 | 0.000826s | 0.000821s | 0.000808s | byte equality observed |
| adapt_tpl_struct.test | 10 | 0.000810s | 0.000810s | 0.000833s | byte equality observed |
| adapt_tpl_struct_empty.test | 10 | 0.000808s | 0.000821s | 0.000832s | byte equality observed |
| adt_attribute_proxy.test | 10 | 0.000810s | 0.000830s | 0.000781s | byte equality observed |
| all.test | 10 | 0.000814s | 0.000809s | 0.000808s | byte equality observed |
| any.test | 10 | 0.000813s | 0.000802s | 0.000797s | byte equality observed |
| array.test | 10 | 0.000808s | 0.000804s | 0.000812s | byte equality observed |
| as_deque.test | 10 | 0.000824s | 0.000816s | 0.000780s | byte equality observed |
| as_list.test | 10 | 0.000837s | 0.000789s | 0.000833s | byte equality observed |
| as_map.test | 10 | 0.000829s | 0.000833s | 0.000842s | byte equality observed |
| as_map_assoc.test | 10 | 0.000829s | 0.000836s | 0.000824s | byte equality observed |
| as_set.test | 10 | 0.000846s | 0.000828s | 0.000832s | byte equality observed |
| as_vector.test | 10 | 0.000829s | 0.000867s | 0.000822s | byte equality observed |
| back_extended_deque.test | 10 | 0.000810s | 0.000806s | 0.000817s | byte equality observed |
| boost_array.test | 10 | 0.000785s | 0.000787s | 0.000797s | byte equality observed |
| boost_tuple.test | 10 | 0.000823s | 0.000824s | 0.000820s | byte equality observed |
| boost_tuple_iterator.test | 10 | 0.000790s | 0.000798s | 0.000799s | byte equality observed |
| clear.test | 10 | 0.000794s | 0.000815s | 0.000803s | byte equality observed |
| cons.test | 10 | 0.000852s | 0.000861s | 0.000822s | byte equality observed |
| convert_boost_tuple.test | 10 | 0.000800s | 0.000836s | 0.000813s | byte equality observed |
| convert_deque.test | 10 | 0.000802s | 0.000813s | 0.000803s | byte equality observed |
| convert_list.test | 10 | 0.000807s | 0.000818s | 0.000770s | byte equality observed |
| convert_std_pair.test | 10 | 0.000827s | 0.000827s | 0.000821s | byte equality observed |
| convert_std_tuple.test | 10 | 0.000805s | 0.000827s | 0.000835s | byte equality observed |
| convert_vector.test | 10 | 0.000825s | 0.000809s | 0.000820s | byte equality observed |
| copy.test | 10 | 0.000810s | 0.000811s | 0.000828s | byte equality observed |
| count.test | 10 | 0.000790s | 0.000811s | 0.000835s | byte equality observed |
| count_if.test | 10 | 0.000787s | 0.000811s | 0.000820s | byte equality observed |
| deduce_sequence.test | 10 | 0.000804s | 0.000834s | 0.000831s | byte equality observed |
| define_assoc_struct.test | 10 | 0.000821s | 0.000831s | 0.000815s | byte equality observed |
| define_assoc_struct_empty.test | 10 | 0.000812s | 0.000827s | 0.000819s | byte equality observed |
| define_assoc_struct_move.test | 10 | 0.000814s | 0.000797s | 0.000782s | byte equality observed |
| define_assoc_tpl_struct.test | 10 | 0.000798s | 0.000821s | 0.000836s | byte equality observed |
| define_assoc_tpl_struct_empty.test | 10 | 0.000808s | 0.000809s | 0.000824s | byte equality observed |
| define_assoc_tpl_struct_move.test | 10 | 0.000829s | 0.000765s | 0.000833s | byte equality observed |
| define_struct.test | 10 | 0.000822s | 0.000794s | 0.000806s | byte equality observed |
| define_struct_empty.test | 10 | 0.000803s | 0.000814s | 0.000797s | byte equality observed |
| define_struct_inline.test | 10 | 0.000814s | 0.000813s | 0.000829s | byte equality observed |
| define_struct_inline_empty.test | 10 | 0.000818s | 0.000802s | 0.000821s | byte equality observed |
| define_struct_inline_move.test | 10 | 0.000821s | 0.000818s | 0.000810s | byte equality observed |
| define_struct_move.test | 10 | 0.000783s | 0.000781s | 0.000771s | byte equality observed |
| define_tpl_struct.test | 10 | 0.000812s | 0.000815s | 0.000795s | byte equality observed |
| define_tpl_struct_empty.test | 10 | 0.000802s | 0.000807s | 0.000802s | byte equality observed |
| define_tpl_struct_inline.test | 10 | 0.000828s | 0.000813s | 0.000809s | byte equality observed |
| define_tpl_struct_inline_empty.test | 10 | 0.000807s | 0.000804s | 0.000813s | byte equality observed |
| define_tpl_struct_inline_move.test | 10 | 0.000809s | 0.000794s | 0.000781s | byte equality observed |
| define_tpl_struct_move.test | 10 | 0.000801s | 0.000805s | 0.000809s | byte equality observed |
| deque_comparison.test | 10 | 0.000802s | 0.000810s | 0.000804s | byte equality observed |
| deque_construction.test | 10 | 0.000803s | 0.000828s | 0.000816s | byte equality observed |
| deque_copy.test | 10 | 0.000798s | 0.000829s | 0.000817s | byte equality observed |
| deque_hash.test | 10 | 0.000803s | 0.000816s | 0.000808s | byte equality observed |
| deque_iterator.test | 10 | 0.000810s | 0.000802s | 0.000795s | byte equality observed |
| deque_make.test | 10 | 0.000805s | 0.000819s | 0.000800s | byte equality observed |
| deque_misc.test | 10 | 0.000818s | 0.000839s | 0.000814s | byte equality observed |
| deque_move.test | 10 | 0.000815s | 0.000847s | 0.000816s | byte equality observed |
| deque_mutate.test | 10 | 0.000831s | 0.000837s | 0.000780s | byte equality observed |
| deque_nest.test | 10 | 0.000804s | 0.000795s | 0.000788s | byte equality observed |
| deque_tie.test | 10 | 0.000795s | 0.000786s | 0.000807s | byte equality observed |
| deque_value_at.test | 10 | 0.000804s | 0.000791s | 0.000778s | byte equality observed |
| erase.test | 10 | 0.000822s | 0.000851s | 0.000835s | byte equality observed |
| erase_key.test | 10 | 0.000844s | 0.000816s | 0.000826s | byte equality observed |
| filter.test | 10 | 0.000811s | 0.000776s | 0.000816s | byte equality observed |
| filter_if.test | 10 | 0.000822s | 0.000804s | 0.000828s | byte equality observed |
| filter_view.test | 10 | 0.000814s | 0.000816s | 0.000807s | byte equality observed |
| find.test | 10 | 0.000812s | 0.000834s | 0.000827s | byte equality observed |
| find_if.test | 10 | 0.000837s | 0.000805s | 0.000811s | byte equality observed |
| flatten.test | 10 | 0.000798s | 0.000801s | 0.000804s | byte equality observed |
| flatten_view.test | 10 | 0.000826s | 0.000804s | 0.000854s | byte equality observed |
| fold.test | 10 | 0.000820s | 0.000824s | 0.000801s | byte equality observed |
| for_each.test | 10 | 0.000831s | 0.000844s | 0.000832s | byte equality observed |
| front_extended_deque.test | 10 | 0.000819s | 0.000822s | 0.000809s | byte equality observed |
| fused.test | 10 | 0.000808s | 0.000787s | 0.000787s | byte equality observed |
| fused_function_object.test | 10 | 0.000796s | 0.000822s | 0.000776s | byte equality observed |
| fused_procedure.test | 10 | 0.000806s | 0.000829s | 0.000790s | byte equality observed |
| github-176.test | 10 | 0.000799s | 0.000820s | 0.000778s | byte equality observed |
| hash.test | 10 | 0.000789s | 0.000816s | 0.000775s | byte equality observed |
| identity_view.test | 10 | 0.000821s | 0.000802s | 0.000831s | byte equality observed |
| insert.test | 10 | 0.000844s | 0.000847s | 0.000816s | byte equality observed |
| insert_range.test | 10 | 0.000841s | 0.000836s | 0.000843s | byte equality observed |
| invoke.test | 10 | 0.000816s | 0.000787s | 0.000805s | byte equality observed |
| invoke_function_object.test | 10 | 0.000805s | 0.000778s | 0.000784s | byte equality observed |
| invoke_procedure.test | 10 | 0.000802s | 0.000784s | 0.000806s | byte equality observed |
| io.test | 10 | 0.000910s | 0.000904s | 0.000888s | byte equality observed |
| iter_fold.test | 10 | 0.000810s | 0.000792s | 0.000787s | byte equality observed |
| iterator_range.test | 10 | 0.000818s | 0.000803s | 0.000818s | byte equality observed |
| join.test | 10 | 0.000789s | 0.000812s | 0.000813s | byte equality observed |
| joint_view.test | 10 | 0.000835s | 0.000852s | 0.000833s | byte equality observed |
| list_comparison.test | 10 | 0.000790s | 0.000809s | 0.000795s | byte equality observed |
| list_construction.test | 10 | 0.000780s | 0.000786s | 0.000812s | byte equality observed |
| list_copy.test | 10 | 0.000796s | 0.000774s | 0.000765s | byte equality observed |
| list_hash.test | 10 | 0.000801s | 0.000785s | 0.000781s | byte equality observed |
| list_iterator.test | 10 | 0.000808s | 0.000805s | 0.000805s | byte equality observed |
| list_make.test | 10 | 0.000810s | 0.000807s | 0.000789s | byte equality observed |
| list_misc.test | 10 | 0.000783s | 0.000811s | 0.000793s | byte equality observed |
| list_mutate.test | 10 | 0.000799s | 0.000781s | 0.000819s | byte equality observed |
| list_nest.test | 10 | 0.000774s | 0.000783s | 0.000784s | byte equality observed |
| list_tie.test | 10 | 0.000810s | 0.000822s | 0.000788s | byte equality observed |
| list_value_at.test | 10 | 0.000835s | 0.000802s | 0.000781s | byte equality observed |
| make_fused.test | 10 | 0.000838s | 0.000782s | 0.000813s | byte equality observed |
| make_fused_function_object.test | 10 | 0.000811s | 0.000773s | 0.000817s | byte equality observed |
| make_fused_procedure.test | 10 | 0.000802s | 0.000789s | 0.000812s | byte equality observed |
| make_list.test | 10 | 0.000797s | 0.000781s | 0.000800s | byte equality observed |
| make_unfused.test | 10 | 0.000804s | 0.000815s | 0.000816s | byte equality observed |
| make_vector.test | 10 | 0.000849s | 0.000796s | 0.000779s | byte equality observed |
| map.test | 10 | 0.000804s | 0.000828s | 0.000785s | byte equality observed |
| map_comparison.test | 10 | 0.000785s | 0.000822s | 0.000796s | byte equality observed |
| map_construction.test | 10 | 0.000799s | 0.000804s | 0.000809s | byte equality observed |
| map_copy.test | 10 | 0.000814s | 0.000836s | 0.000810s | byte equality observed |
| map_misc.test | 10 | 0.000819s | 0.000820s | 0.000841s | byte equality observed |
| map_move.test | 10 | 0.000827s | 0.000832s | 0.000824s | byte equality observed |
| map_mutate.test | 10 | 0.000783s | 0.000794s | 0.000817s | byte equality observed |
| map_tie.test | 10 | 0.000806s | 0.000796s | 0.000794s | byte equality observed |
| move.test | 10 | 0.000806s | 0.000796s | 0.000775s | byte equality observed |
| nil.test | 10 | 0.000823s | 0.000805s | 0.000791s | byte equality observed |
| none.test | 10 | 0.000821s | 0.000785s | 0.000791s | byte equality observed |
| nview.test | 10 | 0.000814s | 0.000812s | 0.000804s | byte equality observed |
| pop_back.test | 10 | 0.000830s | 0.000820s | 0.000805s | byte equality observed |
| pop_front.test | 10 | 0.000827s | 0.000847s | 0.000836s | byte equality observed |
| push_back.test | 10 | 0.000828s | 0.000822s | 0.000824s | byte equality observed |
| push_front.test | 10 | 0.000837s | 0.000827s | 0.000822s | byte equality observed |
| quick.test | 10 | 0.000360s | 0.000783s | 0.000776s | byte equality observed |
| ref_vector.test | 10 | 0.000790s | 0.000816s | 0.000830s | byte equality observed |
| remove.test | 10 | 0.000819s | 0.000850s | 0.000837s | byte equality observed |
| remove_if.test | 10 | 0.000808s | 0.000836s | 0.000837s | byte equality observed |
| repetitive_view.test | 10 | 0.000790s | 0.000800s | 0.000813s | byte equality observed |
| replace.test | 10 | 0.000803s | 0.000819s | 0.000807s | byte equality observed |
| replace_if.test | 10 | 0.000823s | 0.000810s | 0.000807s | byte equality observed |
| reverse.test | 10 | 0.000803s | 0.000807s | 0.000816s | byte equality observed |
| reverse_fold.test | 10 | 0.000802s | 0.000818s | 0.000815s | byte equality observed |
| reverse_iter_fold.test | 10 | 0.000801s | 0.000808s | 0.000813s | byte equality observed |
| reverse_view.test | 10 | 0.000828s | 0.000832s | 0.000807s | byte equality observed |
| segmented_find.test | 10 | 0.000818s | 0.000790s | 0.000824s | byte equality observed |
| segmented_find_if.test | 10 | 0.000821s | 0.000791s | 0.000823s | byte equality observed |
| segmented_fold.test | 10 | 0.000842s | 0.000822s | 0.000816s | byte equality observed |
| segmented_for_each.test | 10 | 0.000852s | 0.000805s | 0.000808s | byte equality observed |
| segmented_iterator_range.test | 10 | 0.000853s | 0.000857s | 0.000854s | byte equality observed |
| set.test | 10 | 0.000824s | 0.000849s | 0.000825s | byte equality observed |
| single_view.test | 10 | 0.000821s | 0.000816s | 0.000802s | byte equality observed |
| std_array.test | 10 | 0.000809s | 0.000804s | 0.000790s | byte equality observed |
| std_pair.test | 10 | 0.000812s | 0.000810s | 0.000778s | byte equality observed |
| std_tuple.test | 10 | 0.000796s | 0.000808s | 0.000781s | byte equality observed |
| std_tuple_iterator.test | 10 | 0.000813s | 0.000799s | 0.000831s | byte equality observed |
| swap.test | 10 | 0.000794s | 0.000817s | 0.000802s | byte equality observed |
| transform.test | 10 | 0.000823s | 0.000842s | 0.000811s | byte equality observed |
| transform_view.test | 10 | 0.000812s | 0.000814s | 0.000814s | byte equality observed |
| tuple_comparison.test | 10 | 0.000806s | 0.000792s | 0.000799s | byte equality observed |
| tuple_construction.test | 10 | 0.000800s | 0.000788s | 0.000810s | byte equality observed |
| tuple_conversion.test | 10 | 0.000791s | 0.000803s | 0.000802s | byte equality observed |
| tuple_copy.test | 10 | 0.000799s | 0.000810s | 0.000801s | byte equality observed |
| tuple_element.test | 10 | 0.000795s | 0.000811s | 0.000782s | byte equality observed |
| tuple_hash.test | 10 | 0.000802s | 0.000789s | 0.000823s | byte equality observed |
| tuple_make.test | 10 | 0.000808s | 0.000802s | 0.000782s | byte equality observed |
| tuple_misc.test | 10 | 0.000812s | 0.000785s | 0.000798s | byte equality observed |
| tuple_mutate.test | 10 | 0.000796s | 0.000805s | 0.000771s | byte equality observed |
| tuple_nest.test | 10 | 0.000789s | 0.000761s | 0.000780s | byte equality observed |
| tuple_tie.test | 10 | 0.000800s | 0.000815s | 0.000780s | byte equality observed |
| tuple_traits__maybe_variadic.test | 10 | 0.000809s | 0.000790s | 0.000788s | byte equality observed |
| tuple_traits__no_variadic.test | 10 | 0.000796s | 0.000789s | 0.000791s | byte equality observed |
| unfused.test | 10 | 0.000793s | 0.000822s | 0.000793s | byte equality observed |
| unfused_typed.test | 10 | 0.000795s | 0.000785s | 0.000766s | byte equality observed |
| vector_comparison.test | 10 | 0.000806s | 0.000812s | 0.000790s | byte equality observed |
| vector_construction.test | 10 | 0.000791s | 0.000771s | 0.000782s | byte equality observed |
| vector_conversion.test | 10 | 0.000807s | 0.000806s | 0.000787s | byte equality observed |
| vector_copy.test | 10 | 0.000801s | 0.000788s | 0.000779s | byte equality observed |
| vector_hash.test | 10 | 0.000801s | 0.000782s | 0.000801s | byte equality observed |
| vector_iterator.test | 10 | 0.000796s | 0.000806s | 0.000796s | byte equality observed |
| vector_make.test | 10 | 0.000791s | 0.000814s | 0.000796s | byte equality observed |
| vector_misc.test | 10 | 0.000808s | 0.000817s | 0.000799s | byte equality observed |
| vector_move.test | 10 | 0.000807s | 0.000832s | 0.000801s | byte equality observed |
| vector_mutate.test | 10 | 0.000815s | 0.000804s | 0.000813s | byte equality observed |
| vector_n.test | 10 | 0.000795s | 0.000797s | 0.000820s | byte equality observed |
| vector_nest.test | 10 | 0.000809s | 0.000789s | 0.000776s | byte equality observed |
| vector_tie.test | 10 | 0.000813s | 0.000777s | 0.000783s | byte equality observed |
| vector_traits__maybe_variadic.test | 10 | 0.000822s | 0.000780s | 0.000816s | byte equality observed |
| vector_traits__no_variadic.test | 10 | 0.000817s | 0.000806s | 0.000770s | byte equality observed |
| vector_value_at.test | 10 | 0.000814s | 0.000808s | 0.000789s | byte equality observed |
| zip.test | 10 | 0.000816s | 0.000809s | 0.000786s | byte equality observed |
| zip2.test | 10 | 0.000798s | 0.000806s | 0.000784s | byte equality observed |
| zip_ignore.test | 10 | 0.000787s | 0.000795s | 0.000806s | byte equality observed |
| zip_view.test | 10 | 0.000778s | 0.000802s | 0.000794s | byte equality observed |
| zip_view2.test | 10 | 0.000788s | 0.000772s | 0.000798s | byte equality observed |
| zip_view_ignore.test | 10 | 0.000770s | 0.000788s | 0.000791s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/43801643681).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
