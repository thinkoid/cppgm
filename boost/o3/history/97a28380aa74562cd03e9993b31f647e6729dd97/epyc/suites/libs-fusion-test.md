# libs/fusion/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| all.test | RUN | 0.266194 | 0.536569 | 0.676826 | 0.001284 | 0.001210 | 0.001337 |
| any.test | RUN | 0.269105 | 0.515297 | 0.645852 | 0.001530 | 0.001436 | 0.001510 |
| clear.test | RUN | 0.186870 | 0.473177 | 0.519766 | 0.001310 | 0.001705 | 0.001501 |
| copy.test | RUN | 0.160401 | 0.347804 | 0.424674 | 0.001420 | 0.001566 | 0.001481 |
| count.test | RUN | 0.182599 | 0.387373 | 0.468065 | 0.001545 | 0.001542 | 0.001527 |
| count_if.test | RUN | 0.175212 | 0.359740 | 0.434633 | 0.001420 | 0.001654 | 0.001477 |
| erase.test | RUN | 0.246421 | 0.639966 | 0.716945 | 0.001460 | 0.001140 | 0.001299 |
| erase_key.test | RUN | 0.243058 | 0.631414 | 0.678928 | 0.001404 | 0.001617 | 0.001456 |
| filter.test | RUN | 0.208559 | 0.547828 | 0.628523 | 0.002178 | 0.001641 | 0.001627 |
| filter_if.test | RUN | 0.235663 | 0.631768 | 0.744572 | 0.001495 | 0.001387 | 0.001608 |
| find.test | RUN | 0.206619 | 0.441088 | 0.589120 | 0.001370 | 0.001388 | 0.001496 |
| find_if.test | RUN | 0.196911 | 0.394397 | 0.511541 | 0.001548 | 0.001526 | 0.001509 |
| fold.test | RUN | 0.213279 | 0.481460 | 0.648949 | 0.001645 | 0.001629 | 0.001624 |
| for_each.test | RUN | 0.184184 | 0.444420 | 0.543797 | 0.001539 | 0.001624 | 0.001413 |
| insert.test | RUN | 0.278391 | 0.784914 | 0.858173 | 0.001426 | 0.001547 | 0.001294 |
| insert_range.test | RUN | 0.277274 | 0.786053 | 0.863599 | 0.001543 | 0.001331 | 0.001573 |
| iter_fold.test | RUN | 0.335229 | 0.747436 | 1.026925 | 0.001630 | 0.001694 | 0.001550 |
| move.test | RUN | 0.169037 | 0.356438 | 0.442841 | 0.001612 | 0.001526 | 0.001494 |
| none.test | RUN | 0.272274 | 0.532690 | 0.660800 | 0.001275 | 0.001656 | 0.001355 |
| pop_back.test | RUN | 0.260816 | 0.708444 | 0.787136 | 0.001625 | 0.001460 | 0.001526 |
| pop_front.test | RUN | 0.221931 | 0.578718 | 0.620298 | 0.001695 | 0.001727 | 0.001431 |
| push_back.test | RUN | 0.268961 | 0.819233 | 0.846633 | 0.001677 | 0.001665 | 0.001504 |
| push_front.test | RUN | 0.240353 | 0.659653 | 0.712377 | 0.001670 | 0.001676 | 0.001556 |
| remove.test | RUN | 0.268714 | 0.755768 | 0.837721 | 0.001410 | 0.001571 | 0.001470 |
| remove_if.test | RUN | 0.245198 | 0.616362 | 0.724351 | 0.001690 | 0.001464 | 0.001451 |
| replace.test | RUN | 0.240975 | 0.612679 | 0.657105 | 0.001580 | 0.001630 | 0.001609 |
| replace_if.test | RUN | 0.234711 | 0.618600 | 0.639654 | 0.001664 | 0.001654 | 0.001381 |
| reverse_fold.test | RUN | 0.363732 | 0.832787 | 1.101739 | 0.001492 | 0.001514 | 0.001538 |
| reverse_iter_fold.test | RUN | 0.368593 | 0.863611 | 1.155791 | 0.001646 | 0.001399 | 0.001292 |
| reverse.test | RUN | 0.221677 | 0.637905 | 0.675197 | 0.001508 | 0.001582 | 0.001550 |
| segmented_for_each.test | RUN | 0.401103 | 1.162887 | 1.354395 | 0.001560 | 0.001519 | 0.001323 |
| segmented_find.test | RUN | 0.242384 | 0.611926 | 0.754042 | 0.001507 | 0.001482 | 0.001304 |
| segmented_find_if.test | RUN | 0.248025 | 0.598788 | 0.749966 | 0.001552 | 0.001482 | 0.001369 |
| segmented_fold.test | RUN | 0.313948 | 0.799282 | 0.970038 | 0.001777 | 0.001643 | 0.001442 |
| transform.test | RUN | 0.244037 | 0.670821 | 0.708551 | 0.001504 | 0.001674 | 0.001531 |
| join.test | RUN | 0.182665 | 0.391132 | 0.494282 | 0.001613 | 0.001546 | 0.001484 |
| zip.test | RUN | 0.310747 | 0.747126 | 0.923245 | 0.001586 | 0.001606 | 0.001438 |
| zip2.test | RUN | 0.298400 | 0.697898 | 0.902405 | 0.001462 | 0.001352 | 0.001353 |
| zip_ignore.test | RUN | 0.229362 | 0.508590 | 0.572720 | 0.001576 | 0.001384 | 0.001334 |
| flatten.test | RUN | 0.214883 | 0.538792 | 0.616982 | 0.001310 | 0.001585 | 0.001435 |
| ticket-5490.test | COMPILE | 0.115002 | 0.247633 | 0.272252 | — | — | — |
| as_deque.test | RUN | 0.220221 | 0.517363 | 0.646981 | 0.001468 | 0.001574 | 0.001300 |
| as_list.test | RUN | 0.242252 | 0.636566 | 0.711782 | 0.001579 | 0.001652 | 0.001323 |
| as_map.test | RUN | 0.243889 | 0.641160 | 0.705622 | 0.001370 | 0.001454 | 0.001305 |
| as_map_assoc.test | RUN | 0.238891 | 0.596613 | 0.667550 | 0.001364 | 0.001532 | 0.001478 |
| as_set.test | RUN | 0.273534 | 0.733652 | 0.847586 | 0.001445 | 0.001511 | 0.001257 |
| as_vector.test | RUN | 0.249598 | 0.647923 | 0.745476 | 0.001432 | 0.001439 | 0.001182 |
| boost_tuple.test | RUN | 0.254048 | 0.667435 | 0.707305 | 0.001369 | 0.001486 | 0.001537 |
| boost_tuple_iterator.test | RUN | 0.176170 | 0.385183 | 0.435753 | 0.001298 | 0.001283 | 0.001391 |
| cons.test | RUN | 0.304949 | 0.720683 | 0.832281 | 0.001268 | 0.001445 | 0.001327 |
| convert_boost_tuple.test | RUN | 0.189270 | 0.556627 | 0.559785 | 0.001528 | 0.001430 | 0.001336 |
| convert_deque.test | RUN | 0.192397 | 0.557009 | 0.550600 | 0.001371 | 0.001433 | 0.001147 |
| convert_list.test | RUN | 0.195130 | 0.562460 | 0.558051 | 0.001436 | 0.001318 | 0.001177 |
| convert_std_pair.test | RUN | 0.201447 | 0.572855 | 0.577879 | 0.001608 | 0.001439 | 0.001396 |
| convert_std_tuple.test | RUN | 0.195456 | 0.594792 | 0.568743 | 0.001372 | 0.001376 | 0.001190 |
| convert_vector.test | RUN | 0.193020 | 0.586626 | 0.564387 | 0.001300 | 0.001372 | 0.001182 |
| filter_view.test | RUN | 0.239175 | 0.625308 | 0.656822 | 0.001535 | 0.001520 | 0.001480 |
| hash.test | RUN | 0.233471 | 0.524340 | 0.629548 | 0.001482 | 0.001570 | 0.001491 |
| io.test | RUN | 0.237137 | 0.749488 | 0.753504 | 0.001434 | 0.001845 | 0.001687 |
| iterator_range.test | RUN | 0.219885 | 0.567006 | 0.620084 | 0.001431 | 0.001657 | 0.001311 |
| joint_view.test | RUN | 0.302945 | 0.927552 | 0.955647 | 0.001750 | 0.001382 | 0.001409 |
| list_comparison.test | RUN | 0.177519 | 0.387701 | 0.450570 | 0.001447 | 0.001502 | 0.001440 |
| list_construction.test | RUN | 0.173600 | 0.380243 | 0.441215 | 0.001341 | 0.001516 | 0.001072 |
| list_copy.test | RUN | 0.254468 | 0.681772 | 0.765811 | 0.001372 | 0.001409 | 0.001541 |
| list_iterator.test | RUN | 0.169498 | 0.371876 | 0.423679 | 0.001658 | 0.001690 | 0.001438 |
| list_hash.test | RUN | 0.230335 | 0.748455 | 0.633757 | 0.001423 | 0.001578 | 0.001500 |
| list_make.test | RUN | 0.178338 | 0.417504 | 0.482643 | 0.001616 | 0.001426 | 0.001532 |
| list_misc.test | RUN | 0.228873 | 0.486135 | 0.598583 | 0.001618 | 0.001630 | 0.001486 |
| list_mutate.test | RUN | 0.160348 | 0.327962 | 0.400753 | 0.001382 | 0.001618 | 0.001498 |
| list_nest.test | RUN | 0.304175 | 0.946183 | 1.068737 | 0.001574 | 0.001444 | 0.001254 |
| list_tie.test | RUN | 0.167757 | 0.376301 | 0.439032 | 0.001483 | 0.001664 | 0.001577 |
| list_value_at.test | RUN | 0.160613 | 0.379682 | 0.429094 | 0.001442 | 0.001605 | 0.001542 |
| deque_comparison.test | RUN | 0.172848 | 0.385521 | 0.457612 | 0.001395 | 0.001521 | 0.001504 |
| deque_construction.test | RUN | 0.195422 | 0.379079 | 0.463882 | 0.001778 | 0.001530 | 0.001487 |
| deque_copy.test | RUN | 0.300717 | 0.634349 | 0.711947 | 0.001350 | 0.001420 | 0.001354 |
| deque_iterator.test | RUN | 0.222071 | 0.406330 | 0.448423 | 0.001436 | 0.001477 | 0.001354 |
| deque_hash.test | RUN | 0.293096 | 0.696543 | 0.622632 | 0.001331 | 0.001624 | 0.001445 |
| deque_is_constructible.test | COMPILE | 0.091523 | 0.179845 | 0.203338 | — | — | — |
| deque_make.test | RUN | 0.168732 | 0.401925 | 0.476705 | 0.001540 | 0.001567 | 0.001470 |
| deque_misc.test | RUN | 0.218810 | 0.482125 | 0.568822 | 0.001291 | 0.001364 | 0.001136 |
| deque_move.test | RUN | 0.166700 | 0.422305 | 0.451659 | 0.001446 | 0.001467 | 0.001489 |
| deque_mutate.test | RUN | 0.152123 | 0.337182 | 0.401652 | 0.001216 | 0.001492 | 0.001329 |
| deque_nest.test | RUN | 0.453104 | 1.490930 | 1.708034 | 0.001618 | 0.001200 | 0.003824 |
| deque_tie.test | RUN | 0.160617 | 0.361466 | 0.415281 | 0.001302 | 0.001402 | 0.001196 |
| deque_value_at.test | RUN | 0.156031 | 0.336354 | 0.400253 | 0.001351 | 0.001516 | 0.001404 |
| front_extended_deque.test | RUN | 0.225780 | 0.508541 | 0.611901 | 0.001413 | 0.001661 | 0.001490 |
| back_extended_deque.test | RUN | 0.221674 | 0.518649 | 0.613746 | 0.001426 | 0.001483 | 0.001367 |
| make_list.test | RUN | 0.175571 | 0.412054 | 0.458804 | 0.001477 | 0.001464 | 0.001500 |
| make_vector.test | RUN | 0.177177 | 0.429018 | 0.454035 | 0.001296 | 0.001275 | 0.001225 |
| map.test | RUN | 0.231319 | 0.622907 | 0.798897 | 0.001561 | 0.001601 | 0.001346 |
| map_comparison.test | RUN | 0.170894 | 0.397321 | 0.531539 | 0.001578 | 0.001608 | 0.001551 |
| map_construction.test | RUN | 0.166811 | 0.390227 | 0.557500 | 0.001315 | 0.001422 | 0.001365 |
| map_copy.test | RUN | 0.201828 | 0.486051 | 0.595406 | 0.001362 | 0.001622 | 0.001459 |
| map_misc.test | RUN | 0.222243 | 0.493338 | 0.591996 | 0.001456 | 0.001395 | 0.001331 |
| map_move.test | RUN | 0.172112 | 0.417720 | 0.460669 | 0.001390 | 0.001328 | 0.001316 |
| map_mutate.test | RUN | 0.157646 | 0.355561 | 0.376567 | 0.001295 | 0.001452 | 0.001239 |
| map_tie.test | RUN | 0.156567 | 0.340276 | 0.414502 | 0.001396 | 0.001486 | 0.001402 |
| nil.test | RUN | 0.110721 | 0.236847 | 0.286114 | 0.001638 | 0.001582 | 0.001468 |
| nview.test | RUN | 0.214244 | 0.485294 | 0.598279 | 0.001423 | 0.001650 | 0.001492 |
| reverse_view.test | RUN | 0.291524 | 0.799912 | 0.858735 | 0.001723 | 0.001623 | 0.001536 |
| segmented_iterator_range.test | RUN | 0.355641 | 0.953073 | 1.077513 | 0.001643 | 0.001461 | 0.001470 |
| set.test | RUN | 0.223914 | 0.521976 | 0.610075 | 0.001402 | 0.001461 | 0.001535 |
| single_view.test | RUN | 0.199749 | 0.498258 | 0.543157 | 0.001602 | 0.001510 | 0.001380 |
| std_pair.test | RUN | 0.240151 | 0.651530 | 0.775183 | 0.001538 | 0.001494 | 0.001462 |
| boost_array.test | RUN | 0.207472 | 0.444768 | 0.598084 | 0.001513 | 0.001655 | 0.001228 |
| array.test | RUN | 0.199142 | 0.473674 | 0.587550 | 0.001317 | 0.001479 | 0.001534 |
| std_array.test | RUN | 0.214010 | 0.455955 | 0.602624 | 0.001610 | 0.001518 | 0.001419 |
| tuple_comparison.test | RUN | 0.183954 | 0.421708 | 0.495675 | 0.001594 | 0.001625 | 0.001410 |
| tuple_construction.test | RUN | 0.191457 | 0.412457 | 0.492185 | 0.001607 | 0.001636 | 0.001219 |
| tuple_conversion.test | RUN | 0.401919 | 1.280855 | 1.591273 | 0.001411 | 0.001604 | 0.001436 |
| tuple_copy.test | RUN | 0.261340 | 0.742987 | 0.828253 | 0.001645 | 0.001307 | 0.001417 |
| tuple_element.test | RUN | 0.170208 | 0.391114 | 0.453354 | 0.001238 | 0.001481 | 0.001247 |
| tuple_make.test | RUN | 0.190684 | 0.447055 | 0.502011 | 0.001621 | 0.001613 | 0.001321 |
| tuple_misc.test | RUN | 0.241456 | 0.536932 | 0.644309 | 0.001487 | 0.001571 | 0.001519 |
| tuple_mutate.test | RUN | 0.172489 | 0.359421 | 0.429662 | 0.001606 | 0.001588 | 0.001538 |
| tuple_nest.test | RUN | 0.684130 | 2.683857 | 3.077911 | 0.001706 | 0.001558 | 0.001558 |
| tuple_hash.test | RUN | 0.246769 | 0.754608 | 0.632373 | 0.001618 | 0.001425 | 0.001280 |
| tuple_tie.test | RUN | 0.182649 | 0.387245 | 0.473548 | 0.001584 | 0.001455 | 0.001481 |
| tuple_traits__maybe_variadic.test | RUN | 0.190867 | 0.468669 | 0.514462 | 0.001425 | 0.001342 | 0.001571 |
| tuple_traits__no_variadic.test | RUN | 0.222510 | 0.472649 | 0.528910 | 0.001706 | 0.001655 | 0.001600 |
| transform_view.test | RUN | 0.307257 | 0.805109 | 0.861643 | 0.001688 | 0.001627 | 0.001599 |
| identity_view.test | RUN | 0.284024 | 0.750980 | 0.838170 | 0.001472 | 0.001592 | 0.001319 |
| vector_comparison.test | RUN | 0.185101 | 0.416353 | 0.467734 | 0.001411 | 0.001420 | 0.001533 |
| vector_construction.test | RUN | 0.191424 | 0.393168 | 0.438938 | 0.001583 | 0.001705 | 0.001507 |
| vector_conversion.test | RUN | 0.479926 | 1.723630 | 2.074032 | 0.001646 | 0.001406 | 0.001574 |
| vector_copy.test | RUN | 0.262457 | 0.764710 | 0.800860 | 0.001620 | 0.001614 | 0.001137 |
| vector_iterator.test | RUN | 0.169911 | 0.392855 | 0.461303 | 0.001748 | 0.001600 | 0.001503 |
| vector_make.test | RUN | 0.183957 | 0.415818 | 0.473274 | 0.001444 | 0.001693 | 0.001540 |
| vector_misc.test | RUN | 0.221858 | 0.499985 | 0.609811 | 0.001591 | 0.001427 | 0.001460 |
| vector_move.test | RUN | 0.178664 | 0.439112 | 0.452938 | 0.001444 | 0.001440 | 0.001167 |
| vector_mutate.test | RUN | 0.162348 | 0.334167 | 0.405281 | 0.001362 | 0.001398 | 0.001662 |
| vector_n.test | RUN | 0.195989 | 0.411942 | 0.557821 | 0.001724 | 0.001620 | 0.001622 |
| vector_nest.test | RUN | 0.673051 | 2.770293 | 3.256060 | 0.001666 | 0.001594 | 0.001609 |
| vector_hash.test | RUN | 0.224443 | 0.731455 | 0.618863 | 0.001486 | 0.001511 | 0.001618 |
| vector_tie.test | RUN | 0.163865 | 0.367511 | 0.470081 | 0.001581 | 0.001554 | 0.001428 |
| vector_traits__maybe_variadic.test | RUN | 0.177722 | 0.417463 | 0.451840 | 0.001616 | 0.001575 | 0.001539 |
| vector_traits__no_variadic.test | RUN | 0.189458 | 0.465750 | 0.510431 | 0.001518 | 0.001482 | 0.001304 |
| vector_value_at.test | RUN | 0.163287 | 0.345799 | 0.413587 | 0.001310 | 0.001534 | 0.001623 |
| zip_view.test | RUN | 0.324174 | 0.839466 | 1.153499 | 0.001656 | 0.001592 | 0.001260 |
| zip_view2.test | RUN | 0.262677 | 0.618518 | 0.899687 | 0.001542 | 0.001330 | 0.001625 |
| zip_view_ignore.test | RUN | 0.247452 | 0.590417 | 0.810154 | 0.001489 | 0.001548 | 0.001358 |
| repetitive_view.test | RUN | 0.435433 | 1.045628 | 1.457353 | 0.001538 | 0.001592 | 0.001548 |
| deduce_sequence.test | RUN | 0.206991 | 0.475902 | 0.557958 | 0.001420 | 0.001654 | 0.001391 |
| adapt_adt_named.test | RUN | 0.251919 | 0.652203 | 0.749996 | 0.001382 | 0.001523 | 0.001568 |
| adapt_adt_named_empty.test | RUN | 0.219297 | 0.531748 | 0.598029 | 0.001489 | 0.001604 | 0.001591 |
| adapt_adt.test | RUN | 0.282728 | 0.840632 | 0.888948 | 0.001382 | 0.001609 | 0.001574 |
| adapt_adt_empty.test | RUN | 0.217160 | 0.525169 | 0.598710 | 0.001526 | 0.001622 | 0.001592 |
| adapt_assoc_adt_named.test | RUN | 0.280947 | 0.690716 | 0.782357 | 0.001465 | 0.001436 | 0.001466 |
| adapt_assoc_adt_named_empty.test | RUN | 0.222181 | 0.515851 | 0.590330 | 0.001659 | 0.001451 | 0.001365 |
| adapt_assoc_adt.test | RUN | 0.281511 | 0.692821 | 0.820737 | 0.001420 | 0.001462 | 0.001610 |
| adapt_assoc_adt_empty.test | RUN | 0.210997 | 0.509873 | 0.593039 | 0.002122 | 0.001581 | 0.001632 |
| adapt_assoc_struct_named.test | RUN | 0.276176 | 0.663011 | 0.749928 | 0.001540 | 0.001632 | 0.001641 |
| adapt_assoc_struct_named_empty.test | RUN | 0.211507 | 0.523483 | 0.599959 | 0.001516 | 0.001578 | 0.001734 |
| adapt_assoc_struct.test | RUN | 0.248996 | 0.619318 | 0.695184 | 0.001558 | 0.001642 | 0.001551 |
| adapt_assoc_struct_empty.test | RUN | 0.215153 | 0.518836 | 0.587308 | 0.001409 | 0.001609 | 0.001401 |
| adapt_assoc_tpl_adt.test | RUN | 0.301007 | 0.740652 | 0.879704 | 0.001564 | 0.001582 | 0.001455 |
| adapt_assoc_tpl_adt_empty.test | RUN | 0.223438 | 0.530726 | 0.597821 | 0.001710 | 0.001553 | 0.001696 |
| adapt_assoc_tpl_struct.test | RUN | 0.252258 | 0.632943 | 0.729806 | 0.001422 | 0.001486 | 0.001255 |
| adapt_assoc_tpl_struct_empty.test | RUN | 0.217865 | 0.524207 | 0.637867 | 0.001629 | 0.001582 | 0.001353 |
| adapt_struct_named.test | RUN | 0.242450 | 0.648174 | 0.713010 | 0.001507 | 0.001470 | 0.001674 |
| adapt_struct_named_empty.test | RUN | 0.222001 | 0.531309 | 0.603671 | 0.001377 | 0.001718 | 0.001363 |
| adapt_struct.test | RUN | 0.262428 | 0.729503 | 0.808506 | 0.001464 | 0.001760 | 0.001558 |
| adapt_struct_empty.test | RUN | 0.212704 | 0.528398 | 0.606816 | 0.001704 | 0.001597 | 0.001601 |
| adapt_tpl_adt.test | RUN | 0.271159 | 0.831066 | 0.844122 | 0.001399 | 0.001318 | 0.001336 |
| adapt_tpl_adt_empty.test | RUN | 0.223246 | 0.533419 | 0.590046 | 0.001556 | 0.001542 | 0.001830 |
| adapt_tpl_struct.test | RUN | 0.224249 | 0.589299 | 0.656019 | 0.001708 | 0.001510 | 0.001668 |
| adapt_tpl_struct_empty.test | RUN | 0.210576 | 0.512902 | 0.608407 | 0.001478 | 0.001606 | 0.001272 |
| adt_attribute_proxy.test | RUN | 0.243739 | 0.526322 | 0.640162 | 0.001580 | 0.001612 | 0.001730 |
| define_struct.test | RUN | 0.293016 | 0.714668 | 0.856879 | 0.001627 | 0.001396 | 0.001638 |
| define_struct_empty.test | RUN | 0.268710 | 0.599685 | 0.688179 | 0.001681 | 0.001676 | 0.001490 |
| define_struct_move.test | RUN | 0.170971 | 0.325585 | 0.422926 | 0.001755 | 0.001482 | 0.001478 |
| define_struct_inline.test | RUN | 0.325509 | 0.872513 | 0.962836 | 0.001582 | 0.001535 | 0.001646 |
| define_struct_inline_empty.test | RUN | 0.265683 | 0.617223 | 0.689402 | 0.001470 | 0.001254 | 0.001566 |
| define_struct_inline_move.test | RUN | 0.172224 | 0.335238 | 0.416697 | 0.001558 | 0.001397 | 0.001525 |
| define_assoc_struct.test | RUN | 0.297906 | 0.685303 | 0.796794 | 0.001687 | 0.001648 | 0.001662 |
| define_assoc_struct_empty.test | RUN | 0.255413 | 0.590636 | 0.689845 | 0.001335 | 0.001628 | 0.001496 |
| define_assoc_struct_move.test | RUN | 0.166664 | 0.327393 | 0.417925 | 0.001680 | 0.001492 | 0.001659 |
| define_tpl_struct.test | RUN | 0.285093 | 0.695849 | 0.799608 | 0.001689 | 0.001534 | 0.001574 |
| define_tpl_struct_empty.test | RUN | 0.263256 | 0.587595 | 0.705762 | 0.001730 | 0.001218 | 0.001542 |
| define_tpl_struct_move.test | RUN | 0.171220 | 0.349748 | 0.415071 | 0.001393 | 0.001444 | 0.001233 |
| define_tpl_struct_inline.test | RUN | 0.305813 | 0.789802 | 0.874341 | 0.001665 | 0.001397 | 0.001524 |
| define_tpl_struct_inline_empty.test | RUN | 0.256220 | 0.607338 | 0.715354 | 0.001370 | 0.001442 | 0.001738 |
| define_tpl_struct_inline_move.test | RUN | 0.170397 | 0.327945 | 0.419938 | 0.001532 | 0.001614 | 0.001520 |
| define_assoc_tpl_struct.test | RUN | 0.285707 | 0.701656 | 0.855897 | 0.001594 | 0.001606 | 0.001675 |
| define_assoc_tpl_struct_empty.test | RUN | 0.267584 | 0.598851 | 0.726138 | 0.001518 | 0.001518 | 0.001763 |
| define_assoc_tpl_struct_move.test | RUN | 0.165053 | 0.345181 | 0.473417 | 0.001382 | 0.001457 | 0.001552 |
| std_tuple.test | RUN | 0.176454 | 0.370712 | 0.448825 | 0.001381 | 0.001303 | 0.001494 |
| std_tuple_iterator.test | RUN | 0.177780 | 0.405848 | 0.461450 | 0.001700 | 0.001566 | 0.001675 |
| ref_vector.test | RUN | 0.192868 | 0.404781 | 0.508889 | 0.001690 | 0.001467 | 0.001722 |
| flatten_view.test | RUN | 0.210897 | 0.497343 | 0.622614 | 0.001735 | 0.001568 | 0.001626 |
| github-159.test | COMPILE | 0.093598 | 0.182565 | 0.229603 | — | — | — |
| github-176.test | RUN | 0.192046 | 0.441398 | 0.529092 | 0.001681 | 0.001496 | 0.001603 |
| size.test | COMPILE | 0.173265 | 0.321981 | 0.407510 | — | — | — |
| fused.test | RUN | 0.231551 | 0.463111 | 0.600836 | 0.001656 | 0.001577 | 0.001633 |
| fused_function_object.test | RUN | 0.177869 | 0.349497 | 0.434729 | 0.001459 | 0.001252 | 0.001403 |
| fused_procedure.test | RUN | 0.222334 | 0.451974 | 0.556623 | 0.001265 | 0.001373 | 0.001593 |
| unfused.test | RUN | 0.182490 | 0.370992 | 0.464792 | 0.001636 | 0.001626 | 0.001398 |
| unfused_typed.test | RUN | 0.183312 | 0.431444 | 0.461322 | 0.001629 | 0.001474 | 0.001568 |
| make_fused.test | RUN | 0.230155 | 0.507617 | 0.586633 | 0.001653 | 0.001475 | 0.001414 |
| make_fused_function_object.test | RUN | 0.180900 | 0.403764 | 0.441313 | 0.001269 | 0.001306 | 0.001699 |
| make_fused_procedure.test | RUN | 0.227119 | 0.490363 | 0.546768 | 0.001674 | 0.001578 | 0.001455 |
| make_unfused.test | RUN | 0.177183 | 0.365867 | 0.445737 | 0.001566 | 0.001541 | 0.001525 |
| invoke.test | RUN | 0.446598 | 1.267902 | 1.473313 | 0.001536 | 0.001406 | 0.001459 |
| invoke_function_object.test | RUN | 0.210018 | 0.466623 | 0.563969 | 0.001641 | 0.001676 | 0.001475 |
| invoke_procedure.test | RUN | 0.356258 | 0.958012 | 1.101694 | 0.001562 | 0.001445 | 0.001397 |
| swap.test | RUN | 0.271074 | 0.615402 | 0.720757 | 0.001311 | 0.001297 | 0.001495 |
| is_sequence.test | COMPILE | 0.045223 | 0.088960 | 0.093556 | — | — | — |
| is_view.test | COMPILE | 0.043929 | 0.089711 | 0.096605 | — | — | — |
| pair_deque.test | COMPILE | 0.093418 | 0.196535 | 0.221931 | — | — | — |
| pair_list.test | COMPILE | 0.092126 | 0.182690 | 0.212681 | — | — | — |
| pair_map.test | COMPILE | 0.096569 | 0.192537 | 0.205157 | — | — | — |
| pair_set.test | COMPILE | 0.097196 | 0.197518 | 0.215081 | — | — | — |
| pair_vector.test | COMPILE | 0.094749 | 0.190714 | 0.217032 | — | — | — |
| pair_nest.test | COMPILE | 0.040594 | 0.079382 | 0.087835 | — | — | — |
| index_sequence.test | COMPILE | 0.034220 | 0.054720 | 0.071232 | — | — | — |
| and.test | COMPILE | 0.026630 | 0.044746 | 0.052655 | — | — | — |
| tag_of.test | COMPILE | 0.043084 | 0.084165 | 0.091082 | — | — | — |
| unused.test | COMPILE | 0.025168 | 0.055793 | 0.054824 | — | — | — |
| tag_of_fallback.test | COMPILE | 0.043879 | 0.084380 | 0.089413 | — | — | — |
| make_pair_r-value.test | COMPILE | 0.030344 | 0.070485 | 0.082674 | — | — | — |
| quick.test | RUN | 0.125880 | 0.260428 | 0.274807 | 0.000464 | 0.001112 | 0.001058 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 1.008× | 1.022×, 0.994× | 1.020× |
| clang | 0.989× | 0.990×, 0.989× | 1.040× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1364 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43686398833).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| adapt_adt.test | 10 | 0.000906s | 0.000922s | 0.000887s | byte equality observed |
| adapt_adt_empty.test | 10 | 0.000882s | 0.000888s | 0.000894s | byte equality observed |
| adapt_adt_named.test | 10 | 0.000896s | 0.000890s | 0.000907s | byte equality observed |
| adapt_adt_named_empty.test | 10 | 0.000888s | 0.000888s | 0.000869s | byte equality observed |
| adapt_assoc_adt.test | 10 | 0.000901s | 0.000893s | 0.000905s | byte equality observed |
| adapt_assoc_adt_empty.test | 10 | 0.000882s | 0.000881s | 0.000876s | byte equality observed |
| adapt_assoc_adt_named.test | 10 | 0.000874s | 0.000887s | 0.000919s | byte equality observed |
| adapt_assoc_adt_named_empty.test | 10 | 0.000895s | 0.000882s | 0.000876s | byte equality observed |
| adapt_assoc_struct.test | 10 | 0.000876s | 0.000898s | 0.000910s | byte equality observed |
| adapt_assoc_struct_empty.test | 10 | 0.000898s | 0.000892s | 0.000899s | byte equality observed |
| adapt_assoc_struct_named.test | 10 | 0.000870s | 0.000887s | 0.000899s | byte equality observed |
| adapt_assoc_struct_named_empty.test | 10 | 0.000883s | 0.000889s | 0.000901s | byte equality observed |
| adapt_assoc_tpl_adt.test | 10 | 0.000877s | 0.000896s | 0.000919s | byte equality observed |
| adapt_assoc_tpl_adt_empty.test | 10 | 0.000873s | 0.000876s | 0.000883s | byte equality observed |
| adapt_assoc_tpl_struct.test | 10 | 0.000885s | 0.000889s | 0.000945s | byte equality observed |
| adapt_assoc_tpl_struct_empty.test | 10 | 0.000885s | 0.000872s | 0.000924s | byte equality observed |
| adapt_struct.test | 10 | 0.000898s | 0.000893s | 0.000923s | byte equality observed |
| adapt_struct_empty.test | 10 | 0.000882s | 0.000862s | 0.000917s | byte equality observed |
| adapt_struct_named.test | 10 | 0.000892s | 0.000910s | 0.000922s | byte equality observed |
| adapt_struct_named_empty.test | 10 | 0.000875s | 0.000893s | 0.000907s | byte equality observed |
| adapt_tpl_adt.test | 10 | 0.000881s | 0.000903s | 0.000977s | byte equality observed |
| adapt_tpl_adt_empty.test | 10 | 0.000886s | 0.000905s | 0.000919s | byte equality observed |
| adapt_tpl_struct.test | 10 | 0.000880s | 0.000898s | 0.000906s | byte equality observed |
| adapt_tpl_struct_empty.test | 10 | 0.000882s | 0.000889s | 0.000897s | byte equality observed |
| adt_attribute_proxy.test | 10 | 0.000877s | 0.000866s | 0.000911s | byte equality observed |
| all.test | 10 | 0.000866s | 0.000918s | 0.000893s | byte equality observed |
| any.test | 10 | 0.000881s | 0.000864s | 0.000893s | byte equality observed |
| array.test | 10 | 0.000864s | 0.000872s | 0.000913s | byte equality observed |
| as_deque.test | 10 | 0.000867s | 0.000880s | 0.000891s | byte equality observed |
| as_list.test | 10 | 0.000906s | 0.000911s | 0.000942s | byte equality observed |
| as_map.test | 10 | 0.000900s | 0.000881s | 0.000932s | byte equality observed |
| as_map_assoc.test | 10 | 0.000886s | 0.000872s | 0.000940s | byte equality observed |
| as_set.test | 10 | 0.000928s | 0.000896s | 0.000957s | byte equality observed |
| as_vector.test | 10 | 0.000898s | 0.000883s | 0.000952s | byte equality observed |
| back_extended_deque.test | 10 | 0.000878s | 0.000865s | 0.000907s | byte equality observed |
| boost_array.test | 10 | 0.000889s | 0.000882s | 0.000907s | byte equality observed |
| boost_tuple.test | 10 | 0.000908s | 0.000876s | 0.000919s | byte equality observed |
| boost_tuple_iterator.test | 10 | 0.000880s | 0.000864s | 0.000891s | byte equality observed |
| clear.test | 10 | 0.000904s | 0.000890s | 0.000908s | byte equality observed |
| cons.test | 10 | 0.000928s | 0.000916s | 0.000919s | byte equality observed |
| convert_boost_tuple.test | 10 | 0.000891s | 0.000862s | 0.000911s | byte equality observed |
| convert_deque.test | 10 | 0.000915s | 0.000885s | 0.000870s | byte equality observed |
| convert_list.test | 10 | 0.000881s | 0.000890s | 0.000914s | byte equality observed |
| convert_std_pair.test | 10 | 0.000890s | 0.000900s | 0.000903s | byte equality observed |
| convert_std_tuple.test | 10 | 0.000893s | 0.000890s | 0.000915s | byte equality observed |
| convert_vector.test | 10 | 0.000894s | 0.000874s | 0.000893s | byte equality observed |
| copy.test | 10 | 0.000900s | 0.000881s | 0.000885s | byte equality observed |
| count.test | 10 | 0.000877s | 0.000888s | 0.000900s | byte equality observed |
| count_if.test | 10 | 0.000888s | 0.000879s | 0.000882s | byte equality observed |
| deduce_sequence.test | 10 | 0.000900s | 0.000858s | 0.000884s | byte equality observed |
| define_assoc_struct.test | 10 | 0.000899s | 0.000871s | 0.000937s | byte equality observed |
| define_assoc_struct_empty.test | 10 | 0.000894s | 0.000856s | 0.000901s | byte equality observed |
| define_assoc_struct_move.test | 10 | 0.000866s | 0.000859s | 0.000884s | byte equality observed |
| define_assoc_tpl_struct.test | 10 | 0.000890s | 0.000876s | 0.000915s | byte equality observed |
| define_assoc_tpl_struct_empty.test | 10 | 0.000888s | 0.000874s | 0.000920s | byte equality observed |
| define_assoc_tpl_struct_move.test | 10 | 0.000876s | 0.000853s | 0.000902s | byte equality observed |
| define_struct.test | 10 | 0.000904s | 0.000885s | 0.000948s | byte equality observed |
| define_struct_empty.test | 10 | 0.000899s | 0.000860s | 0.000925s | byte equality observed |
| define_struct_inline.test | 10 | 0.000900s | 0.000882s | 0.000925s | byte equality observed |
| define_struct_inline_empty.test | 10 | 0.000880s | 0.000883s | 0.000899s | byte equality observed |
| define_struct_inline_move.test | 10 | 0.000859s | 0.000842s | 0.000884s | byte equality observed |
| define_struct_move.test | 10 | 0.000872s | 0.000868s | 0.000882s | byte equality observed |
| define_tpl_struct.test | 10 | 0.000899s | 0.000873s | 0.000905s | byte equality observed |
| define_tpl_struct_empty.test | 10 | 0.000881s | 0.000872s | 0.000896s | byte equality observed |
| define_tpl_struct_inline.test | 10 | 0.000897s | 0.000877s | 0.000905s | byte equality observed |
| define_tpl_struct_inline_empty.test | 10 | 0.000875s | 0.000875s | 0.000916s | byte equality observed |
| define_tpl_struct_inline_move.test | 10 | 0.000867s | 0.000842s | 0.000917s | byte equality observed |
| define_tpl_struct_move.test | 10 | 0.000847s | 0.000839s | 0.000877s | byte equality observed |
| deque_comparison.test | 10 | 0.000878s | 0.000839s | 0.000884s | byte equality observed |
| deque_construction.test | 10 | 0.000875s | 0.000861s | 0.000910s | byte equality observed |
| deque_copy.test | 10 | 0.000867s | 0.000859s | 0.000897s | byte equality observed |
| deque_hash.test | 10 | 0.000868s | 0.000847s | 0.000909s | byte equality observed |
| deque_iterator.test | 10 | 0.000864s | 0.000854s | 0.000901s | byte equality observed |
| deque_make.test | 10 | 0.000872s | 0.000858s | 0.000875s | byte equality observed |
| deque_misc.test | 10 | 0.000887s | 0.000856s | 0.000880s | byte equality observed |
| deque_move.test | 10 | 0.000876s | 0.000853s | 0.000894s | byte equality observed |
| deque_mutate.test | 10 | 0.000866s | 0.000866s | 0.000870s | byte equality observed |
| deque_nest.test | 10 | 0.000875s | 0.000859s | 0.000864s | byte equality observed |
| deque_tie.test | 10 | 0.000874s | 0.000873s | 0.000882s | byte equality observed |
| deque_value_at.test | 10 | 0.000874s | 0.000856s | 0.000868s | byte equality observed |
| erase.test | 10 | 0.000903s | 0.000885s | 0.000899s | byte equality observed |
| erase_key.test | 10 | 0.000898s | 0.000878s | 0.000892s | byte equality observed |
| filter.test | 10 | 0.000894s | 0.000871s | 0.000884s | byte equality observed |
| filter_if.test | 10 | 0.000900s | 0.000883s | 0.000900s | byte equality observed |
| filter_view.test | 10 | 0.000908s | 0.000875s | 0.000887s | byte equality observed |
| find.test | 10 | 0.000895s | 0.000879s | 0.000903s | byte equality observed |
| find_if.test | 10 | 0.000898s | 0.000861s | 0.000895s | byte equality observed |
| flatten.test | 10 | 0.000892s | 0.000862s | 0.000894s | byte equality observed |
| flatten_view.test | 10 | 0.000870s | 0.000857s | 0.000885s | byte equality observed |
| fold.test | 10 | 0.000885s | 0.000893s | 0.000880s | byte equality observed |
| for_each.test | 10 | 0.000901s | 0.000891s | 0.000894s | byte equality observed |
| front_extended_deque.test | 10 | 0.000875s | 0.000852s | 0.000857s | byte equality observed |
| fused.test | 10 | 0.000892s | 0.000855s | 0.000888s | byte equality observed |
| fused_function_object.test | 10 | 0.000887s | 0.000852s | 0.000870s | byte equality observed |
| fused_procedure.test | 10 | 0.000883s | 0.000855s | 0.000857s | byte equality observed |
| github-176.test | 10 | 0.000871s | 0.000843s | 0.000885s | byte equality observed |
| hash.test | 10 | 0.000883s | 0.000868s | 0.000872s | byte equality observed |
| identity_view.test | 10 | 0.000903s | 0.000891s | 0.000894s | byte equality observed |
| insert.test | 10 | 0.000911s | 0.000888s | 0.000896s | byte equality observed |
| insert_range.test | 10 | 0.000899s | 0.000907s | 0.000909s | byte equality observed |
| invoke.test | 10 | 0.000895s | 0.000883s | 0.000900s | byte equality observed |
| invoke_function_object.test | 10 | 0.000882s | 0.000888s | 0.000874s | byte equality observed |
| invoke_procedure.test | 10 | 0.000872s | 0.000895s | 0.000862s | byte equality observed |
| io.test | 10 | 0.001000s | 0.000997s | 0.001021s | byte equality observed |
| iter_fold.test | 10 | 0.000879s | 0.000878s | 0.000931s | byte equality observed |
| iterator_range.test | 10 | 0.000896s | 0.000917s | 0.000915s | byte equality observed |
| join.test | 10 | 0.000870s | 0.000876s | 0.000882s | byte equality observed |
| joint_view.test | 10 | 0.000912s | 0.000918s | 0.000939s | byte equality observed |
| list_comparison.test | 10 | 0.000869s | 0.000864s | 0.000867s | byte equality observed |
| list_construction.test | 10 | 0.000870s | 0.000881s | 0.000884s | byte equality observed |
| list_copy.test | 10 | 0.000887s | 0.000852s | 0.000889s | byte equality observed |
| list_hash.test | 10 | 0.000871s | 0.000876s | 0.000884s | byte equality observed |
| list_iterator.test | 10 | 0.000874s | 0.000875s | 0.000899s | byte equality observed |
| list_make.test | 10 | 0.000873s | 0.000874s | 0.000904s | byte equality observed |
| list_misc.test | 10 | 0.000886s | 0.000871s | 0.000904s | byte equality observed |
| list_mutate.test | 10 | 0.000897s | 0.000862s | 0.000880s | byte equality observed |
| list_nest.test | 10 | 0.000889s | 0.000859s | 0.000901s | byte equality observed |
| list_tie.test | 10 | 0.000887s | 0.000852s | 0.000880s | byte equality observed |
| list_value_at.test | 10 | 0.000877s | 0.000885s | 0.000891s | byte equality observed |
| make_fused.test | 10 | 0.000895s | 0.000856s | 0.000895s | byte equality observed |
| make_fused_function_object.test | 10 | 0.000879s | 0.000853s | 0.000894s | byte equality observed |
| make_fused_procedure.test | 10 | 0.000880s | 0.000870s | 0.000884s | byte equality observed |
| make_list.test | 10 | 0.000891s | 0.000869s | 0.000885s | byte equality observed |
| make_unfused.test | 10 | 0.000880s | 0.000865s | 0.000896s | byte equality observed |
| make_vector.test | 10 | 0.000903s | 0.000865s | 0.000891s | byte equality observed |
| map.test | 10 | 0.000924s | 0.000896s | 0.000901s | byte equality observed |
| map_comparison.test | 10 | 0.000884s | 0.000848s | 0.000899s | byte equality observed |
| map_construction.test | 10 | 0.000895s | 0.000864s | 0.000867s | byte equality observed |
| map_copy.test | 10 | 0.000878s | 0.000854s | 0.000889s | byte equality observed |
| map_misc.test | 10 | 0.000883s | 0.000868s | 0.000897s | byte equality observed |
| map_move.test | 10 | 0.000901s | 0.000876s | 0.000897s | byte equality observed |
| map_mutate.test | 10 | 0.000857s | 0.000855s | 0.000861s | byte equality observed |
| map_tie.test | 10 | 0.000863s | 0.000845s | 0.000874s | byte equality observed |
| move.test | 10 | 0.000896s | 0.000847s | 0.000873s | byte equality observed |
| nil.test | 10 | 0.000883s | 0.000862s | 0.000879s | byte equality observed |
| none.test | 10 | 0.000866s | 0.000852s | 0.000878s | byte equality observed |
| nview.test | 10 | 0.000877s | 0.000867s | 0.000850s | byte equality observed |
| pop_back.test | 10 | 0.000915s | 0.000895s | 0.000908s | byte equality observed |
| pop_front.test | 10 | 0.000914s | 0.000897s | 0.000909s | byte equality observed |
| push_back.test | 10 | 0.000908s | 0.000916s | 0.000896s | byte equality observed |
| push_front.test | 10 | 0.000925s | 0.000881s | 0.000889s | byte equality observed |
| quick.test | 10 | 0.000394s | 0.000833s | 0.000859s | byte equality observed |
| ref_vector.test | 10 | 0.000897s | 0.000877s | 0.000898s | byte equality observed |
| remove.test | 10 | 0.000909s | 0.000911s | 0.000912s | byte equality observed |
| remove_if.test | 10 | 0.000913s | 0.000880s | 0.000906s | byte equality observed |
| repetitive_view.test | 10 | 0.000865s | 0.000863s | 0.000872s | byte equality observed |
| replace.test | 10 | 0.000879s | 0.000880s | 0.000869s | byte equality observed |
| replace_if.test | 10 | 0.000890s | 0.000888s | 0.000884s | byte equality observed |
| reverse.test | 10 | 0.000880s | 0.000891s | 0.000885s | byte equality observed |
| reverse_fold.test | 10 | 0.000884s | 0.000887s | 0.000893s | byte equality observed |
| reverse_iter_fold.test | 10 | 0.000886s | 0.000876s | 0.000881s | byte equality observed |
| reverse_view.test | 10 | 0.000888s | 0.000881s | 0.000888s | byte equality observed |
| segmented_find.test | 10 | 0.000862s | 0.000863s | 0.000862s | byte equality observed |
| segmented_find_if.test | 10 | 0.000866s | 0.000866s | 0.000871s | byte equality observed |
| segmented_fold.test | 10 | 0.000909s | 0.000906s | 0.000890s | byte equality observed |
| segmented_for_each.test | 10 | 0.000898s | 0.000900s | 0.000920s | byte equality observed |
| segmented_iterator_range.test | 10 | 0.000905s | 0.000919s | 0.000923s | byte equality observed |
| set.test | 10 | 0.000890s | 0.000893s | 0.000900s | byte equality observed |
| single_view.test | 10 | 0.000887s | 0.000899s | 0.000892s | byte equality observed |
| std_array.test | 10 | 0.000889s | 0.000861s | 0.000889s | byte equality observed |
| std_pair.test | 10 | 0.000907s | 0.000897s | 0.000901s | byte equality observed |
| std_tuple.test | 10 | 0.000874s | 0.000875s | 0.000889s | byte equality observed |
| std_tuple_iterator.test | 10 | 0.000883s | 0.000868s | 0.000887s | byte equality observed |
| swap.test | 10 | 0.000866s | 0.000857s | 0.000891s | byte equality observed |
| transform.test | 10 | 0.000906s | 0.000879s | 0.000887s | byte equality observed |
| transform_view.test | 10 | 0.000910s | 0.000886s | 0.000914s | byte equality observed |
| tuple_comparison.test | 10 | 0.000875s | 0.000857s | 0.000872s | byte equality observed |
| tuple_construction.test | 10 | 0.000869s | 0.000854s | 0.000871s | byte equality observed |
| tuple_conversion.test | 10 | 0.000891s | 0.000855s | 0.000862s | byte equality observed |
| tuple_copy.test | 10 | 0.000882s | 0.000869s | 0.000865s | byte equality observed |
| tuple_element.test | 10 | 0.000871s | 0.000866s | 0.000868s | byte equality observed |
| tuple_hash.test | 10 | 0.000871s | 0.000872s | 0.000873s | byte equality observed |
| tuple_make.test | 10 | 0.000857s | 0.000864s | 0.000859s | byte equality observed |
| tuple_misc.test | 10 | 0.000871s | 0.000869s | 0.000883s | byte equality observed |
| tuple_mutate.test | 10 | 0.000872s | 0.000851s | 0.000885s | byte equality observed |
| tuple_nest.test | 10 | 0.000887s | 0.000871s | 0.000873s | byte equality observed |
| tuple_tie.test | 10 | 0.000859s | 0.000850s | 0.000848s | byte equality observed |
| tuple_traits__maybe_variadic.test | 10 | 0.000889s | 0.000874s | 0.000880s | byte equality observed |
| tuple_traits__no_variadic.test | 10 | 0.000875s | 0.000858s | 0.000868s | byte equality observed |
| unfused.test | 10 | 0.000875s | 0.000849s | 0.000862s | byte equality observed |
| unfused_typed.test | 10 | 0.000867s | 0.000837s | 0.000901s | byte equality observed |
| vector_comparison.test | 10 | 0.000858s | 0.000852s | 0.000853s | byte equality observed |
| vector_construction.test | 10 | 0.000878s | 0.000862s | 0.000864s | byte equality observed |
| vector_conversion.test | 10 | 0.000866s | 0.000862s | 0.000872s | byte equality observed |
| vector_copy.test | 10 | 0.000858s | 0.000866s | 0.000891s | byte equality observed |
| vector_hash.test | 10 | 0.000885s | 0.000866s | 0.000858s | byte equality observed |
| vector_iterator.test | 10 | 0.000876s | 0.000870s | 0.000864s | byte equality observed |
| vector_make.test | 10 | 0.000862s | 0.000861s | 0.000849s | byte equality observed |
| vector_misc.test | 10 | 0.000859s | 0.000858s | 0.000858s | byte equality observed |
| vector_move.test | 10 | 0.000878s | 0.000870s | 0.000881s | byte equality observed |
| vector_mutate.test | 10 | 0.000868s | 0.000863s | 0.000858s | byte equality observed |
| vector_n.test | 10 | 0.000895s | 0.000875s | 0.000905s | byte equality observed |
| vector_nest.test | 10 | 0.000872s | 0.000853s | 0.000873s | byte equality observed |
| vector_tie.test | 10 | 0.000866s | 0.000855s | 0.000860s | byte equality observed |
| vector_traits__maybe_variadic.test | 10 | 0.000878s | 0.000847s | 0.000852s | byte equality observed |
| vector_traits__no_variadic.test | 10 | 0.000848s | 0.000862s | 0.000869s | byte equality observed |
| vector_value_at.test | 10 | 0.000867s | 0.000836s | 0.000882s | byte equality observed |
| zip.test | 10 | 0.000876s | 0.000856s | 0.000884s | byte equality observed |
| zip2.test | 10 | 0.000870s | 0.000848s | 0.000884s | byte equality observed |
| zip_ignore.test | 10 | 0.000873s | 0.000846s | 0.000869s | byte equality observed |
| zip_view.test | 10 | 0.000866s | 0.000877s | 0.000887s | byte equality observed |
| zip_view2.test | 10 | 0.000849s | 0.000853s | 0.000875s | byte equality observed |
| zip_view_ignore.test | 10 | 0.000858s | 0.000845s | 0.000886s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43686398833).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
