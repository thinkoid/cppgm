# libs/fusion/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| all.test | RUN | 0.252564 | 0.572216 | 0.728706 | 0.001246 | 0.001486 | 0.001505 |
| any.test | RUN | 0.250388 | 0.541817 | 0.694832 | 0.001218 | 0.001432 | 0.001646 |
| clear.test | RUN | 0.180621 | 0.513212 | 0.580497 | 0.001270 | 0.001657 | 0.001490 |
| copy.test | RUN | 0.150662 | 0.383296 | 0.467531 | 0.001402 | 0.001589 | 0.001535 |
| count.test | RUN | 0.170920 | 0.422019 | 0.518515 | 0.001191 | 0.001658 | 0.001667 |
| count_if.test | RUN | 0.163073 | 0.390480 | 0.472798 | 0.001602 | 0.001796 | 0.001385 |
| erase.test | RUN | 0.230900 | 0.708927 | 0.787235 | 0.001535 | 0.001692 | 0.001488 |
| erase_key.test | RUN | 0.230137 | 0.702638 | 0.735527 | 0.001252 | 0.001479 | 0.001680 |
| filter.test | RUN | 0.197383 | 0.613687 | 0.663731 | 0.001491 | 0.001796 | 0.001685 |
| filter_if.test | RUN | 0.223113 | 0.702905 | 0.778910 | 0.001294 | 0.001584 | 0.001775 |
| find.test | RUN | 0.192643 | 0.494311 | 0.595034 | 0.001302 | 0.001382 | 0.001423 |
| find_if.test | RUN | 0.182270 | 0.455717 | 0.541869 | 0.001547 | 0.001782 | 0.001661 |
| fold.test | RUN | 0.200155 | 0.556616 | 0.679774 | 0.001543 | 0.001784 | 0.001649 |
| for_each.test | RUN | 0.182017 | 0.507186 | 0.591327 | 0.001430 | 0.001745 | 0.001437 |
| insert.test | RUN | 0.270865 | 0.861542 | 0.977948 | 0.001102 | 0.001720 | 0.001641 |
| insert_range.test | RUN | 0.261926 | 0.863796 | 0.997466 | 0.001533 | 0.001395 | 0.001496 |
| iter_fold.test | RUN | 0.311226 | 0.836929 | 1.145147 | 0.001604 | 0.001824 | 0.001752 |
| move.test | RUN | 0.156959 | 0.401027 | 0.498816 | 0.001536 | 0.001682 | 0.001783 |
| none.test | RUN | 0.263095 | 0.576875 | 0.725054 | 0.001248 | 0.001826 | 0.001639 |
| pop_back.test | RUN | 0.245331 | 0.792035 | 0.853542 | 0.001423 | 0.001793 | 0.001788 |
| pop_front.test | RUN | 0.214672 | 0.642904 | 0.679651 | 0.001583 | 0.001488 | 0.001632 |
| push_back.test | RUN | 0.258133 | 0.894270 | 0.960679 | 0.001382 | 0.001534 | 0.001567 |
| push_front.test | RUN | 0.232233 | 0.724559 | 0.820746 | 0.001531 | 0.001665 | 0.001623 |
| remove.test | RUN | 0.250079 | 0.836359 | 0.928238 | 0.001361 | 0.001616 | 0.001557 |
| remove_if.test | RUN | 0.230263 | 0.707025 | 0.803531 | 0.001509 | 0.001558 | 0.001761 |
| replace.test | RUN | 0.219897 | 0.663763 | 0.750325 | 0.001482 | 0.001662 | 0.001664 |
| replace_if.test | RUN | 0.214610 | 0.659278 | 0.751123 | 0.001671 | 0.001700 | 0.001576 |
| reverse_fold.test | RUN | 0.340438 | 0.909367 | 1.264238 | 0.001530 | 0.001620 | 0.001801 |
| reverse_iter_fold.test | RUN | 0.345029 | 0.946259 | 1.311245 | 0.001502 | 0.001666 | 0.001552 |
| reverse.test | RUN | 0.213225 | 0.681548 | 0.728618 | 0.001447 | 0.001790 | 0.001724 |
| segmented_for_each.test | RUN | 0.375090 | 1.320923 | 1.489189 | 0.001425 | 0.001536 | 0.001485 |
| segmented_find.test | RUN | 0.237639 | 0.690099 | 0.835238 | 0.001310 | 0.001582 | 0.001449 |
| segmented_find_if.test | RUN | 0.229224 | 0.692161 | 0.832220 | 0.001248 | 0.001782 | 0.001705 |
| segmented_fold.test | RUN | 0.287585 | 0.916862 | 1.042623 | 0.001584 | 0.001736 | 0.001705 |
| transform.test | RUN | 0.226254 | 0.731587 | 0.793795 | 0.001382 | 0.001832 | 0.001729 |
| join.test | RUN | 0.168961 | 0.440760 | 0.538200 | 0.001534 | 0.001738 | 0.001668 |
| zip.test | RUN | 0.293562 | 0.808341 | 1.006415 | 0.001340 | 0.001811 | 0.001692 |
| zip2.test | RUN | 0.288338 | 0.773342 | 1.010692 | 0.001410 | 0.001395 | 0.001479 |
| zip_ignore.test | RUN | 0.220258 | 0.517002 | 0.654918 | 0.001324 | 0.001424 | 0.001456 |
| flatten.test | RUN | 0.204815 | 0.609045 | 0.673862 | 0.001268 | 0.001790 | 0.001729 |
| ticket-5490.test | COMPILE | 0.109808 | 0.249388 | 0.293695 | — | — | — |
| as_deque.test | RUN | 0.201474 | 0.571915 | 0.722920 | 0.001460 | 0.001770 | 0.001831 |
| as_list.test | RUN | 0.227305 | 0.714728 | 0.781313 | 0.001456 | 0.001659 | 0.001604 |
| as_map.test | RUN | 0.227556 | 0.708323 | 0.775729 | 0.001379 | 0.001410 | 0.001405 |
| as_map_assoc.test | RUN | 0.226632 | 0.658421 | 0.745617 | 0.001256 | 0.001675 | 0.001706 |
| as_set.test | RUN | 0.252888 | 0.805038 | 0.947182 | 0.001360 | 0.001458 | 0.001214 |
| as_vector.test | RUN | 0.235164 | 0.733013 | 0.801463 | 0.001296 | 0.001437 | 0.001544 |
| boost_tuple.test | RUN | 0.231209 | 0.691907 | 0.800537 | 0.001352 | 0.001437 | 0.001468 |
| boost_tuple_iterator.test | RUN | 0.157921 | 0.405766 | 0.481431 | 0.001150 | 0.001577 | 0.001439 |
| cons.test | RUN | 0.293843 | 0.840711 | 0.944007 | 0.001233 | 0.001694 | 0.001688 |
| convert_boost_tuple.test | RUN | 0.183043 | 0.623818 | 0.627989 | 0.001580 | 0.001686 | 0.001622 |
| convert_deque.test | RUN | 0.185488 | 0.628286 | 0.623639 | 0.001291 | 0.001548 | 0.001433 |
| convert_list.test | RUN | 0.184744 | 0.639296 | 0.639216 | 0.001251 | 0.001430 | 0.001618 |
| convert_std_pair.test | RUN | 0.191119 | 0.623462 | 0.636492 | 0.001550 | 0.001725 | 0.001755 |
| convert_std_tuple.test | RUN | 0.185779 | 0.609182 | 0.629733 | 0.001206 | 0.001368 | 0.001423 |
| convert_vector.test | RUN | 0.183710 | 0.611255 | 0.623924 | 0.001375 | 0.001445 | 0.001442 |
| filter_view.test | RUN | 0.222709 | 0.646174 | 0.747233 | 0.001528 | 0.001667 | 0.001717 |
| hash.test | RUN | 0.221419 | 0.573389 | 0.690275 | 0.001545 | 0.001638 | 0.001623 |
| io.test | RUN | 0.230947 | 0.810980 | 0.853631 | 0.001408 | 0.001958 | 0.001874 |
| iterator_range.test | RUN | 0.208823 | 0.617389 | 0.719490 | 0.001348 | 0.001855 | 0.001822 |
| joint_view.test | RUN | 0.278908 | 1.037209 | 1.055929 | 0.001538 | 0.001409 | 0.001733 |
| list_comparison.test | RUN | 0.162700 | 0.420020 | 0.497301 | 0.001596 | 0.001389 | 0.001515 |
| list_construction.test | RUN | 0.160531 | 0.413453 | 0.491979 | 0.001361 | 0.001684 | 0.001648 |
| list_copy.test | RUN | 0.241837 | 0.733938 | 0.844745 | 0.001398 | 0.001537 | 0.001657 |
| list_iterator.test | RUN | 0.159031 | 0.396146 | 0.469154 | 0.001354 | 0.001516 | 0.001590 |
| list_hash.test | RUN | 0.226603 | 0.802001 | 0.695592 | 0.001364 | 0.001612 | 0.001654 |
| list_make.test | RUN | 0.173049 | 0.443038 | 0.524093 | 0.001473 | 0.001668 | 0.001706 |
| list_misc.test | RUN | 0.225287 | 0.548439 | 0.653146 | 0.001344 | 0.001849 | 0.001588 |
| list_mutate.test | RUN | 0.154372 | 0.368086 | 0.433348 | 0.001565 | 0.001841 | 0.001605 |
| list_nest.test | RUN | 0.294971 | 1.050161 | 1.206514 | 0.001134 | 0.001710 | 0.001612 |
| list_tie.test | RUN | 0.160412 | 0.410156 | 0.483666 | 0.001409 | 0.001586 | 0.001731 |
| list_value_at.test | RUN | 0.161878 | 0.397859 | 0.455501 | 0.001537 | 0.001808 | 0.001664 |
| deque_comparison.test | RUN | 0.162805 | 0.461140 | 0.528485 | 0.001396 | 0.001434 | 0.001560 |
| deque_construction.test | RUN | 0.164152 | 0.425459 | 0.492035 | 0.001450 | 0.001824 | 0.001636 |
| deque_copy.test | RUN | 0.238612 | 0.705160 | 0.812029 | 0.001343 | 0.001480 | 0.001708 |
| deque_iterator.test | RUN | 0.157159 | 0.431936 | 0.475761 | 0.001505 | 0.001395 | 0.001676 |
| deque_hash.test | RUN | 0.217123 | 0.767972 | 0.731589 | 0.001059 | 0.001866 | 0.001672 |
| deque_is_constructible.test | COMPILE | 0.085296 | 0.188634 | 0.231371 | — | — | — |
| deque_make.test | RUN | 0.162850 | 0.448142 | 0.511484 | 0.001498 | 0.001497 | 0.001609 |
| deque_misc.test | RUN | 0.217116 | 0.545218 | 0.641407 | 0.001271 | 0.001702 | 0.001639 |
| deque_move.test | RUN | 0.168039 | 0.469606 | 0.509063 | 0.001382 | 0.001738 | 0.001388 |
| deque_mutate.test | RUN | 0.150234 | 0.377871 | 0.429587 | 0.001387 | 0.001708 | 0.001687 |
| deque_nest.test | RUN | 0.436911 | 1.668016 | 1.981148 | 0.001565 | 0.001739 | 0.001795 |
| deque_tie.test | RUN | 0.152385 | 0.401087 | 0.453221 | 0.001371 | 0.001512 | 0.001716 |
| deque_value_at.test | RUN | 0.152943 | 0.377563 | 0.471283 | 0.001277 | 0.001755 | 0.001585 |
| front_extended_deque.test | RUN | 0.219995 | 0.567653 | 0.671308 | 0.001480 | 0.001804 | 0.001789 |
| back_extended_deque.test | RUN | 0.220711 | 0.561135 | 0.692973 | 0.001390 | 0.001469 | 0.001686 |
| make_list.test | RUN | 0.171989 | 0.487481 | 0.528066 | 0.001482 | 0.001827 | 0.001744 |
| make_vector.test | RUN | 0.171381 | 0.449374 | 0.510178 | 0.001468 | 0.001859 | 0.001845 |
| map.test | RUN | 0.223292 | 0.683954 | 0.764422 | 0.001438 | 0.001788 | 0.001574 |
| map_comparison.test | RUN | 0.165836 | 0.428493 | 0.513761 | 0.001486 | 0.001678 | 0.001685 |
| map_construction.test | RUN | 0.175247 | 0.405715 | 0.507684 | 0.001360 | 0.001395 | 0.001413 |
| map_copy.test | RUN | 0.199656 | 0.528339 | 0.609941 | 0.001317 | 0.001728 | 0.001652 |
| map_misc.test | RUN | 0.216375 | 0.532646 | 0.623867 | 0.001566 | 0.001608 | 0.001122 |
| map_move.test | RUN | 0.166421 | 0.444340 | 0.497408 | 0.001298 | 0.001407 | 0.001357 |
| map_mutate.test | RUN | 0.156873 | 0.368712 | 0.440874 | 0.001301 | 0.001638 | 0.001605 |
| map_tie.test | RUN | 0.157762 | 0.374316 | 0.451643 | 0.001310 | 0.001734 | 0.001651 |
| nil.test | RUN | 0.107736 | 0.262924 | 0.312404 | 0.001462 | 0.001708 | 0.001616 |
| nview.test | RUN | 0.208637 | 0.540714 | 0.615574 | 0.001519 | 0.001616 | 0.001667 |
| reverse_view.test | RUN | 0.274913 | 0.862811 | 0.924473 | 0.001549 | 0.001728 | 0.001652 |
| segmented_iterator_range.test | RUN | 0.320155 | 1.019357 | 1.162050 | 0.001611 | 0.001638 | 0.001411 |
| set.test | RUN | 0.202764 | 0.586748 | 0.634942 | 0.001515 | 0.001844 | 0.001439 |
| single_view.test | RUN | 0.188688 | 0.537887 | 0.543365 | 0.001346 | 0.001448 | 0.001367 |
| std_pair.test | RUN | 0.238479 | 0.760478 | 0.742104 | 0.001457 | 0.001638 | 0.001547 |
| boost_array.test | RUN | 0.197130 | 0.561102 | 0.558270 | 0.001326 | 0.001613 | 0.001369 |
| array.test | RUN | 0.196067 | 0.538558 | 0.533519 | 0.001382 | 0.001662 | 0.001574 |
| std_array.test | RUN | 0.200862 | 0.540460 | 0.543612 | 0.001471 | 0.001648 | 0.001453 |
| tuple_comparison.test | RUN | 0.174849 | 0.435711 | 0.521368 | 0.001500 | 0.001566 | 0.001791 |
| tuple_construction.test | RUN | 0.184432 | 0.442498 | 0.544549 | 0.001698 | 0.001683 | 0.001449 |
| tuple_conversion.test | RUN | 0.391171 | 1.338502 | 1.758217 | 0.001386 | 0.001632 | 0.001404 |
| tuple_copy.test | RUN | 0.256610 | 0.777745 | 0.912817 | 0.001540 | 0.001738 | 0.001625 |
| tuple_element.test | RUN | 0.168892 | 0.397909 | 0.510496 | 0.001282 | 0.001306 | 0.001446 |
| tuple_make.test | RUN | 0.183920 | 0.454654 | 0.542668 | 0.001384 | 0.001664 | 0.001553 |
| tuple_misc.test | RUN | 0.223280 | 0.543346 | 0.657512 | 0.001310 | 0.001700 | 0.001567 |
| tuple_mutate.test | RUN | 0.159420 | 0.366516 | 0.434959 | 0.001441 | 0.001649 | 0.001430 |
| tuple_nest.test | RUN | 0.636701 | 2.861353 | 3.251839 | 0.001435 | 0.001708 | 0.001693 |
| tuple_hash.test | RUN | 0.232486 | 0.775832 | 0.651107 | 0.001434 | 0.001519 | 0.001413 |
| tuple_tie.test | RUN | 0.167713 | 0.402147 | 0.484579 | 0.001392 | 0.001610 | 0.001578 |
| tuple_traits__maybe_variadic.test | RUN | 0.180283 | 0.486412 | 0.507046 | 0.001323 | 0.001644 | 0.001397 |
| tuple_traits__no_variadic.test | RUN | 0.209636 | 0.512858 | 0.572735 | 0.001325 | 0.001718 | 0.001631 |
| transform_view.test | RUN | 0.264489 | 0.891482 | 0.947901 | 0.001361 | 0.001788 | 0.001632 |
| identity_view.test | RUN | 0.253055 | 0.794439 | 0.888736 | 0.001108 | 0.001666 | 0.001655 |
| vector_comparison.test | RUN | 0.165315 | 0.449602 | 0.555306 | 0.001245 | 0.001758 | 0.001660 |
| vector_construction.test | RUN | 0.168950 | 0.389989 | 0.501330 | 0.001260 | 0.001717 | 0.001751 |
| vector_conversion.test | RUN | 0.456285 | 1.782398 | 2.279048 | 0.001606 | 0.001695 | 0.001538 |
| vector_copy.test | RUN | 0.243357 | 0.760862 | 0.910816 | 0.001525 | 0.001554 | 0.001495 |
| vector_iterator.test | RUN | 0.157947 | 0.415861 | 0.498017 | 0.001445 | 0.001661 | 0.001537 |
| vector_make.test | RUN | 0.173171 | 0.441102 | 0.512121 | 0.001303 | 0.001814 | 0.001663 |
| vector_misc.test | RUN | 0.217974 | 0.526601 | 0.638525 | 0.001428 | 0.001581 | 0.001438 |
| vector_move.test | RUN | 0.174031 | 0.437635 | 0.499402 | 0.001388 | 0.001419 | 0.001566 |
| vector_mutate.test | RUN | 0.149064 | 0.368050 | 0.437959 | 0.001159 | 0.001490 | 0.001411 |
| vector_n.test | RUN | 0.184081 | 0.446525 | 0.558342 | 0.001646 | 0.001730 | 0.001714 |
| vector_nest.test | RUN | 0.643842 | 2.976101 | 3.258550 | 0.001316 | 0.001592 | 0.001361 |
| vector_hash.test | RUN | 0.214513 | 0.752092 | 0.620328 | 0.001331 | 0.001676 | 0.001603 |
| vector_tie.test | RUN | 0.157888 | 0.390492 | 0.477584 | 0.001539 | 0.001686 | 0.001492 |
| vector_traits__maybe_variadic.test | RUN | 0.170402 | 0.448436 | 0.463151 | 0.001584 | 0.001718 | 0.001680 |
| vector_traits__no_variadic.test | RUN | 0.182025 | 0.481000 | 0.490670 | 0.001389 | 0.001559 | 0.001689 |
| vector_value_at.test | RUN | 0.152542 | 0.359939 | 0.450504 | 0.001245 | 0.001744 | 0.001412 |
| zip_view.test | RUN | 0.309174 | 0.866661 | 1.098084 | 0.001361 | 0.001719 | 0.001413 |
| zip_view2.test | RUN | 0.254843 | 0.705089 | 0.840571 | 0.001271 | 0.001366 | 0.001557 |
| zip_view_ignore.test | RUN | 0.235061 | 0.624792 | 0.749731 | 0.001496 | 0.001433 | 0.001654 |
| repetitive_view.test | RUN | 0.401446 | 1.154368 | 1.425455 | 0.001482 | 0.001726 | 0.001541 |
| deduce_sequence.test | RUN | 0.195729 | 0.473781 | 0.614986 | 0.001279 | 0.001659 | 0.001185 |
| adapt_adt_named.test | RUN | 0.230125 | 0.692735 | 0.714027 | 0.001358 | 0.001645 | 0.001622 |
| adapt_adt_named_empty.test | RUN | 0.203872 | 0.547281 | 0.591542 | 0.001279 | 0.001736 | 0.001464 |
| adapt_adt.test | RUN | 0.261675 | 0.913656 | 0.865400 | 0.001440 | 0.001759 | 0.001566 |
| adapt_adt_empty.test | RUN | 0.199851 | 0.543832 | 0.593309 | 0.001277 | 0.001746 | 0.001648 |
| adapt_assoc_adt_named.test | RUN | 0.269101 | 0.718013 | 0.765467 | 0.001294 | 0.001870 | 0.001425 |
| adapt_assoc_adt_named_empty.test | RUN | 0.206488 | 0.549735 | 0.591563 | 0.001566 | 0.001682 | 0.001640 |
| adapt_assoc_adt.test | RUN | 0.264040 | 0.749282 | 0.803246 | 0.001424 | 0.001768 | 0.001464 |
| adapt_assoc_adt_empty.test | RUN | 0.199575 | 0.543180 | 0.596484 | 0.001597 | 0.001512 | 0.001504 |
| adapt_assoc_struct_named.test | RUN | 0.255846 | 0.715160 | 0.761663 | 0.001256 | 0.001795 | 0.001301 |
| adapt_assoc_struct_named_empty.test | RUN | 0.201035 | 0.547511 | 0.590767 | 0.001312 | 0.001847 | 0.001531 |
| adapt_assoc_struct.test | RUN | 0.233917 | 0.655615 | 0.710103 | 0.001479 | 0.001612 | 0.001327 |
| adapt_assoc_struct_empty.test | RUN | 0.198391 | 0.548505 | 0.595255 | 0.001402 | 0.001826 | 0.001436 |
| adapt_assoc_tpl_adt.test | RUN | 0.283832 | 0.770339 | 0.852319 | 0.001551 | 0.001700 | 0.001548 |
| adapt_assoc_tpl_adt_empty.test | RUN | 0.203904 | 0.553031 | 0.626756 | 0.001478 | 0.001679 | 0.001692 |
| adapt_assoc_tpl_struct.test | RUN | 0.225324 | 0.660017 | 0.707134 | 0.001622 | 0.001755 | 0.001501 |
| adapt_assoc_tpl_struct_empty.test | RUN | 0.202583 | 0.546580 | 0.609717 | 0.001298 | 0.001637 | 0.001466 |
| adapt_struct_named.test | RUN | 0.232130 | 0.673863 | 0.727880 | 0.001550 | 0.001623 | 0.001349 |
| adapt_struct_named_empty.test | RUN | 0.206818 | 0.550853 | 0.629479 | 0.001355 | 0.001473 | 0.001432 |
| adapt_struct.test | RUN | 0.242780 | 0.767267 | 0.844472 | 0.001370 | 0.001717 | 0.001650 |
| adapt_struct_empty.test | RUN | 0.198566 | 0.557092 | 0.638371 | 0.001339 | 0.001741 | 0.001549 |
| adapt_tpl_adt.test | RUN | 0.257260 | 0.879959 | 0.865383 | 0.001386 | 0.001566 | 0.001492 |
| adapt_tpl_adt_empty.test | RUN | 0.205143 | 0.548225 | 0.605609 | 0.001398 | 0.001765 | 0.001723 |
| adapt_tpl_struct.test | RUN | 0.211555 | 0.613736 | 0.693774 | 0.001547 | 0.001564 | 0.001437 |
| adapt_tpl_struct_empty.test | RUN | 0.202704 | 0.566753 | 0.616050 | 0.001424 | 0.001693 | 0.001469 |
| adt_attribute_proxy.test | RUN | 0.226259 | 0.544753 | 0.647975 | 0.001437 | 0.001726 | 0.001561 |
| define_struct.test | RUN | 0.278097 | 0.752452 | 0.833467 | 0.001366 | 0.001566 | 0.001576 |
| define_struct_empty.test | RUN | 0.238198 | 0.607331 | 0.675641 | 0.001384 | 0.001735 | 0.001524 |
| define_struct_move.test | RUN | 0.158576 | 0.353306 | 0.413960 | 0.001494 | 0.001734 | 0.001393 |
| define_struct_inline.test | RUN | 0.290584 | 0.915140 | 0.992462 | 0.001347 | 0.001602 | 0.001449 |
| define_struct_inline_empty.test | RUN | 0.245143 | 0.626053 | 0.673291 | 0.001377 | 0.001447 | 0.001351 |
| define_struct_inline_move.test | RUN | 0.155351 | 0.370995 | 0.414654 | 0.001381 | 0.001485 | 0.001798 |
| define_assoc_struct.test | RUN | 0.269033 | 0.736148 | 0.835612 | 0.001649 | 0.001760 | 0.001553 |
| define_assoc_struct_empty.test | RUN | 0.239972 | 0.621084 | 0.681013 | 0.001414 | 0.001750 | 0.001521 |
| define_assoc_struct_move.test | RUN | 0.155218 | 0.350423 | 0.402703 | 0.001536 | 0.001688 | 0.001542 |
| define_tpl_struct.test | RUN | 0.264530 | 0.738276 | 0.782465 | 0.001570 | 0.001760 | 0.001401 |
| define_tpl_struct_empty.test | RUN | 0.244392 | 0.621501 | 0.674687 | 0.001593 | 0.001352 | 0.001529 |
| define_tpl_struct_move.test | RUN | 0.159995 | 0.357969 | 0.399211 | 0.001406 | 0.001472 | 0.001392 |
| define_tpl_struct_inline.test | RUN | 0.283087 | 0.840482 | 0.907825 | 0.001439 | 0.001705 | 0.001650 |
| define_tpl_struct_inline_empty.test | RUN | 0.240990 | 0.635931 | 0.717262 | 0.001182 | 0.001403 | 0.001697 |
| define_tpl_struct_inline_move.test | RUN | 0.159672 | 0.343026 | 0.433522 | 0.001392 | 0.001682 | 0.001660 |
| define_assoc_tpl_struct.test | RUN | 0.259151 | 0.730103 | 0.834389 | 0.001575 | 0.001800 | 0.001666 |
| define_assoc_tpl_struct_empty.test | RUN | 0.240087 | 0.618162 | 0.732258 | 0.001320 | 0.001504 | 0.001402 |
| define_assoc_tpl_struct_move.test | RUN | 0.156015 | 0.349844 | 0.432692 | 0.001168 | 0.001659 | 0.001664 |
| std_tuple.test | RUN | 0.162686 | 0.397355 | 0.469465 | 0.001501 | 0.001612 | 0.001431 |
| std_tuple_iterator.test | RUN | 0.163253 | 0.415165 | 0.459637 | 0.001417 | 0.001680 | 0.001540 |
| ref_vector.test | RUN | 0.180682 | 0.422383 | 0.481988 | 0.001499 | 0.001770 | 0.001593 |
| flatten_view.test | RUN | 0.193864 | 0.524743 | 0.576236 | 0.001377 | 0.001817 | 0.001390 |
| github-159.test | COMPILE | 0.086356 | 0.196251 | 0.202411 | — | — | — |
| github-176.test | RUN | 0.183407 | 0.464813 | 0.497006 | 0.001543 | 0.001663 | 0.001566 |
| size.test | COMPILE | 0.155691 | 0.329798 | 0.399349 | — | — | — |
| fused.test | RUN | 0.210810 | 0.493796 | 0.576130 | 0.001492 | 0.001734 | 0.001585 |
| fused_function_object.test | RUN | 0.157702 | 0.373333 | 0.424016 | 0.001260 | 0.001482 | 0.001571 |
| fused_procedure.test | RUN | 0.205151 | 0.465135 | 0.549545 | 0.001306 | 0.001608 | 0.001580 |
| unfused.test | RUN | 0.169596 | 0.393141 | 0.440260 | 0.001518 | 0.001782 | 0.001273 |
| unfused_typed.test | RUN | 0.164936 | 0.410376 | 0.451384 | 0.001404 | 0.001597 | 0.001563 |
| make_fused.test | RUN | 0.215415 | 0.489396 | 0.567180 | 0.003231 | 0.001337 | 0.001364 |
| make_fused_function_object.test | RUN | 0.158887 | 0.378447 | 0.441330 | 0.002944 | 0.001536 | 0.001244 |
| make_fused_procedure.test | RUN | 0.262471 | 0.465657 | 0.544935 | 0.001391 | 0.001711 | 0.001475 |
| make_unfused.test | RUN | 0.173474 | 0.380086 | 0.455898 | 0.001846 | 0.001609 | 0.001564 |
| invoke.test | RUN | 0.418214 | 1.388681 | 1.523838 | 0.001304 | 0.001342 | 0.001306 |
| invoke_function_object.test | RUN | 0.195486 | 0.495251 | 0.555742 | 0.001509 | 0.001735 | 0.001543 |
| invoke_procedure.test | RUN | 0.327477 | 1.008066 | 1.132569 | 0.001272 | 0.001605 | 0.001535 |
| swap.test | RUN | 0.254963 | 0.651354 | 0.675668 | 0.001354 | 0.001395 | 0.001631 |
| is_sequence.test | COMPILE | 0.044373 | 0.090503 | 0.094332 | — | — | — |
| is_view.test | COMPILE | 0.041894 | 0.090061 | 0.093171 | — | — | — |
| pair_deque.test | COMPILE | 0.089446 | 0.196573 | 0.215348 | — | — | — |
| pair_list.test | COMPILE | 0.086863 | 0.192607 | 0.215578 | — | — | — |
| pair_map.test | COMPILE | 0.091278 | 0.203077 | 0.230698 | — | — | — |
| pair_set.test | COMPILE | 0.092698 | 0.201169 | 0.225235 | — | — | — |
| pair_vector.test | COMPILE | 0.090377 | 0.203211 | 0.224449 | — | — | — |
| pair_nest.test | COMPILE | 0.037884 | 0.083262 | 0.094256 | — | — | — |
| index_sequence.test | COMPILE | 0.032269 | 0.059096 | 0.069319 | — | — | — |
| and.test | COMPILE | 0.025604 | 0.046608 | 0.054387 | — | — | — |
| tag_of.test | COMPILE | 0.041198 | 0.086048 | 0.091952 | — | — | — |
| unused.test | COMPILE | 0.023902 | 0.058429 | 0.057079 | — | — | — |
| tag_of_fallback.test | COMPILE | 0.040247 | 0.063221 | 0.092892 | — | — | — |
| make_pair_r-value.test | COMPILE | 0.037485 | 0.080286 | 0.071315 | — | — | — |
| quick.test | RUN | 0.123733 | 0.296412 | 0.275427 | 0.000408 | 0.001231 | 0.001037 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 1.010× | 1.005×, 1.016× | 1.011× |
| clang | 0.972×† | 1.002×, 0.942× | 1.015× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1363 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43658654032).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| adapt_adt.test | 10 | 0.000921s | 0.000927s | 0.000902s | byte equality observed |
| adapt_adt_empty.test | 10 | 0.000922s | 0.000912s | 0.000871s | byte equality observed |
| adapt_adt_named.test | 10 | 0.000933s | 0.000917s | 0.000886s | byte equality observed |
| adapt_adt_named_empty.test | 10 | 0.000920s | 0.000915s | 0.000874s | byte equality observed |
| adapt_assoc_adt.test | 10 | 0.000918s | 0.000905s | 0.000898s | byte equality observed |
| adapt_assoc_adt_empty.test | 10 | 0.000918s | 0.000916s | 0.000890s | byte equality observed |
| adapt_assoc_adt_named.test | 10 | 0.000915s | 0.000907s | 0.000883s | byte equality observed |
| adapt_assoc_adt_named_empty.test | 10 | 0.000913s | 0.000915s | 0.000870s | byte equality observed |
| adapt_assoc_struct.test | 10 | 0.000920s | 0.000924s | 0.000908s | byte equality observed |
| adapt_assoc_struct_empty.test | 10 | 0.000902s | 0.000915s | 0.000898s | byte equality observed |
| adapt_assoc_struct_named.test | 10 | 0.000925s | 0.000901s | 0.000889s | byte equality observed |
| adapt_assoc_struct_named_empty.test | 10 | 0.000917s | 0.000901s | 0.000903s | byte equality observed |
| adapt_assoc_tpl_adt.test | 10 | 0.000913s | 0.000906s | 0.000908s | byte equality observed |
| adapt_assoc_tpl_adt_empty.test | 10 | 0.000927s | 0.000897s | 0.000874s | byte equality observed |
| adapt_assoc_tpl_struct.test | 10 | 0.000953s | 0.000931s | 0.000901s | byte equality observed |
| adapt_assoc_tpl_struct_empty.test | 10 | 0.000931s | 0.000888s | 0.000877s | byte equality observed |
| adapt_struct.test | 10 | 0.000929s | 0.000921s | 0.000918s | byte equality observed |
| adapt_struct_empty.test | 10 | 0.000917s | 0.000924s | 0.000899s | byte equality observed |
| adapt_struct_named.test | 10 | 0.000926s | 0.000934s | 0.000921s | byte equality observed |
| adapt_struct_named_empty.test | 10 | 0.000922s | 0.000922s | 0.000908s | byte equality observed |
| adapt_tpl_adt.test | 10 | 0.000943s | 0.000928s | 0.000924s | byte equality observed |
| adapt_tpl_adt_empty.test | 10 | 0.000910s | 0.000923s | 0.000901s | byte equality observed |
| adapt_tpl_struct.test | 10 | 0.000935s | 0.000901s | 0.000904s | byte equality observed |
| adapt_tpl_struct_empty.test | 10 | 0.000931s | 0.000904s | 0.000897s | byte equality observed |
| adt_attribute_proxy.test | 10 | 0.000930s | 0.000908s | 0.000883s | byte equality observed |
| all.test | 10 | 0.000925s | 0.000900s | 0.000879s | byte equality observed |
| any.test | 10 | 0.000923s | 0.000896s | 0.000854s | byte equality observed |
| array.test | 10 | 0.000908s | 0.000918s | 0.000857s | byte equality observed |
| as_deque.test | 10 | 0.000922s | 0.000900s | 0.000889s | byte equality observed |
| as_list.test | 10 | 0.000951s | 0.000955s | 0.000905s | byte equality observed |
| as_map.test | 10 | 0.000942s | 0.000941s | 0.000909s | byte equality observed |
| as_map_assoc.test | 10 | 0.000936s | 0.000940s | 0.000910s | byte equality observed |
| as_set.test | 10 | 0.000948s | 0.000959s | 0.000900s | byte equality observed |
| as_vector.test | 10 | 0.000946s | 0.000943s | 0.000910s | byte equality observed |
| back_extended_deque.test | 10 | 0.000915s | 0.000903s | 0.000872s | byte equality observed |
| boost_array.test | 10 | 0.000905s | 0.000900s | 0.000876s | byte equality observed |
| boost_tuple.test | 10 | 0.000943s | 0.000929s | 0.000912s | byte equality observed |
| boost_tuple_iterator.test | 10 | 0.000912s | 0.000904s | 0.000866s | byte equality observed |
| clear.test | 10 | 0.000928s | 0.000919s | 0.000915s | byte equality observed |
| cons.test | 10 | 0.000944s | 0.000936s | 0.000905s | byte equality observed |
| convert_boost_tuple.test | 10 | 0.000925s | 0.000876s | 0.000873s | byte equality observed |
| convert_deque.test | 10 | 0.000917s | 0.000944s | 0.000918s | byte equality observed |
| convert_list.test | 10 | 0.000915s | 0.000918s | 0.000888s | byte equality observed |
| convert_std_pair.test | 10 | 0.000914s | 0.000883s | 0.000894s | byte equality observed |
| convert_std_tuple.test | 10 | 0.000916s | 0.000889s | 0.000884s | byte equality observed |
| convert_vector.test | 10 | 0.000910s | 0.000889s | 0.000886s | byte equality observed |
| copy.test | 10 | 0.000933s | 0.000904s | 0.000876s | byte equality observed |
| count.test | 10 | 0.000907s | 0.000899s | 0.000904s | byte equality observed |
| count_if.test | 10 | 0.000926s | 0.000880s | 0.000891s | byte equality observed |
| deduce_sequence.test | 10 | 0.000912s | 0.000873s | 0.000900s | byte equality observed |
| define_assoc_struct.test | 10 | 0.000932s | 0.000911s | 0.000905s | byte equality observed |
| define_assoc_struct_empty.test | 10 | 0.000934s | 0.000922s | 0.000900s | byte equality observed |
| define_assoc_struct_move.test | 10 | 0.000899s | 0.000894s | 0.000874s | byte equality observed |
| define_assoc_tpl_struct.test | 10 | 0.000931s | 0.000923s | 0.000894s | byte equality observed |
| define_assoc_tpl_struct_empty.test | 10 | 0.000920s | 0.000936s | 0.000884s | byte equality observed |
| define_assoc_tpl_struct_move.test | 10 | 0.000900s | 0.000881s | 0.000886s | byte equality observed |
| define_struct.test | 10 | 0.000929s | 0.000932s | 0.000889s | byte equality observed |
| define_struct_empty.test | 10 | 0.000937s | 0.000928s | 0.000875s | byte equality observed |
| define_struct_inline.test | 10 | 0.000937s | 0.000934s | 0.000907s | byte equality observed |
| define_struct_inline_empty.test | 10 | 0.000931s | 0.000912s | 0.000886s | byte equality observed |
| define_struct_inline_move.test | 10 | 0.000918s | 0.000904s | 0.000870s | byte equality observed |
| define_struct_move.test | 10 | 0.000909s | 0.000892s | 0.000892s | byte equality observed |
| define_tpl_struct.test | 10 | 0.000932s | 0.000924s | 0.000911s | byte equality observed |
| define_tpl_struct_empty.test | 10 | 0.000918s | 0.000940s | 0.000904s | byte equality observed |
| define_tpl_struct_inline.test | 10 | 0.000928s | 0.000932s | 0.000912s | byte equality observed |
| define_tpl_struct_inline_empty.test | 10 | 0.000915s | 0.000919s | 0.000897s | byte equality observed |
| define_tpl_struct_inline_move.test | 10 | 0.000920s | 0.000916s | 0.000888s | byte equality observed |
| define_tpl_struct_move.test | 10 | 0.000890s | 0.000879s | 0.000887s | byte equality observed |
| deque_comparison.test | 10 | 0.000909s | 0.000910s | 0.000882s | byte equality observed |
| deque_construction.test | 10 | 0.000904s | 0.000906s | 0.000884s | byte equality observed |
| deque_copy.test | 10 | 0.000884s | 0.000887s | 0.000900s | byte equality observed |
| deque_hash.test | 10 | 0.000905s | 0.000938s | 0.000892s | byte equality observed |
| deque_iterator.test | 10 | 0.000888s | 0.000913s | 0.000881s | byte equality observed |
| deque_make.test | 10 | 0.000890s | 0.000909s | 0.000895s | byte equality observed |
| deque_misc.test | 10 | 0.000898s | 0.000900s | 0.000896s | byte equality observed |
| deque_move.test | 10 | 0.000931s | 0.000903s | 0.000871s | byte equality observed |
| deque_mutate.test | 10 | 0.000904s | 0.000915s | 0.000867s | byte equality observed |
| deque_nest.test | 10 | 0.000900s | 0.000873s | 0.000885s | byte equality observed |
| deque_tie.test | 10 | 0.000907s | 0.000871s | 0.000906s | byte equality observed |
| deque_value_at.test | 10 | 0.000894s | 0.000887s | 0.000878s | byte equality observed |
| erase.test | 10 | 0.000908s | 0.000923s | 0.000903s | byte equality observed |
| erase_key.test | 10 | 0.000920s | 0.000937s | 0.000901s | byte equality observed |
| filter.test | 10 | 0.000912s | 0.000924s | 0.000892s | byte equality observed |
| filter_if.test | 10 | 0.000926s | 0.000926s | 0.000899s | byte equality observed |
| filter_view.test | 10 | 0.000933s | 0.000926s | 0.000913s | byte equality observed |
| find.test | 10 | 0.000919s | 0.000937s | 0.000919s | byte equality observed |
| find_if.test | 10 | 0.000915s | 0.000926s | 0.000901s | byte equality observed |
| flatten.test | 10 | 0.000913s | 0.000898s | 0.000892s | byte equality observed |
| flatten_view.test | 10 | 0.000918s | 0.000922s | 0.000879s | byte equality observed |
| fold.test | 10 | 0.000936s | 0.000923s | 0.000892s | byte equality observed |
| for_each.test | 10 | 0.000928s | 0.000938s | 0.000888s | byte equality observed |
| front_extended_deque.test | 10 | 0.000901s | 0.000893s | 0.000876s | byte equality observed |
| fused.test | 10 | 0.000901s | 0.000888s | 0.000892s | byte equality observed |
| fused_function_object.test | 10 | 0.000933s | 0.000906s | 0.000876s | byte equality observed |
| fused_procedure.test | 10 | 0.000906s | 0.000896s | 0.000877s | byte equality observed |
| github-176.test | 10 | 0.000902s | 0.000909s | 0.000893s | byte equality observed |
| hash.test | 10 | 0.000910s | 0.000896s | 0.000891s | byte equality observed |
| identity_view.test | 10 | 0.000944s | 0.000919s | 0.000891s | byte equality observed |
| insert.test | 10 | 0.000934s | 0.000924s | 0.000911s | byte equality observed |
| insert_range.test | 10 | 0.000942s | 0.000929s | 0.000898s | byte equality observed |
| invoke.test | 10 | 0.000897s | 0.000883s | 0.000878s | byte equality observed |
| invoke_function_object.test | 10 | 0.000897s | 0.000907s | 0.000901s | byte equality observed |
| invoke_procedure.test | 10 | 0.000901s | 0.000878s | 0.000883s | byte equality observed |
| io.test | 10 | 0.001044s | 0.001024s | 0.000997s | byte equality observed |
| iter_fold.test | 10 | 0.000906s | 0.000878s | 0.000884s | byte equality observed |
| iterator_range.test | 10 | 0.000926s | 0.000940s | 0.000905s | byte equality observed |
| join.test | 10 | 0.000897s | 0.000883s | 0.000892s | byte equality observed |
| joint_view.test | 10 | 0.000936s | 0.000944s | 0.000911s | byte equality observed |
| list_comparison.test | 10 | 0.000888s | 0.000903s | 0.000877s | byte equality observed |
| list_construction.test | 10 | 0.000900s | 0.000915s | 0.000886s | byte equality observed |
| list_copy.test | 10 | 0.000888s | 0.000903s | 0.000868s | byte equality observed |
| list_hash.test | 10 | 0.000904s | 0.000922s | 0.000898s | byte equality observed |
| list_iterator.test | 10 | 0.000891s | 0.000895s | 0.000878s | byte equality observed |
| list_make.test | 10 | 0.000918s | 0.000891s | 0.000878s | byte equality observed |
| list_misc.test | 10 | 0.000886s | 0.000958s | 0.000893s | byte equality observed |
| list_mutate.test | 10 | 0.000901s | 0.000907s | 0.000878s | byte equality observed |
| list_nest.test | 10 | 0.000894s | 0.000917s | 0.000847s | byte equality observed |
| list_tie.test | 10 | 0.000886s | 0.000919s | 0.000866s | byte equality observed |
| list_value_at.test | 10 | 0.000913s | 0.000898s | 0.000891s | byte equality observed |
| make_fused.test | 10 | 0.000889s | 0.000908s | 0.000887s | byte equality observed |
| make_fused_function_object.test | 10 | 0.000902s | 0.000898s | 0.000881s | byte equality observed |
| make_fused_procedure.test | 10 | 0.000911s | 0.000911s | 0.000857s | byte equality observed |
| make_list.test | 10 | 0.000911s | 0.000910s | 0.000907s | byte equality observed |
| make_unfused.test | 10 | 0.000896s | 0.000899s | 0.000879s | byte equality observed |
| make_vector.test | 10 | 0.000915s | 0.000887s | 0.000897s | byte equality observed |
| map.test | 10 | 0.000930s | 0.000921s | 0.000908s | byte equality observed |
| map_comparison.test | 10 | 0.000895s | 0.000895s | 0.000866s | byte equality observed |
| map_construction.test | 10 | 0.000897s | 0.000883s | 0.000883s | byte equality observed |
| map_copy.test | 10 | 0.000901s | 0.000876s | 0.000880s | byte equality observed |
| map_misc.test | 10 | 0.000907s | 0.000887s | 0.000886s | byte equality observed |
| map_move.test | 10 | 0.000904s | 0.000909s | 0.000883s | byte equality observed |
| map_mutate.test | 10 | 0.000870s | 0.000905s | 0.000861s | byte equality observed |
| map_tie.test | 10 | 0.000873s | 0.000879s | 0.000879s | byte equality observed |
| move.test | 10 | 0.000895s | 0.000882s | 0.000879s | byte equality observed |
| nil.test | 10 | 0.000877s | 0.000891s | 0.000868s | byte equality observed |
| none.test | 10 | 0.000890s | 0.000891s | 0.000894s | byte equality observed |
| nview.test | 10 | 0.000920s | 0.000911s | 0.000881s | byte equality observed |
| pop_back.test | 10 | 0.000934s | 0.000909s | 0.000912s | byte equality observed |
| pop_front.test | 10 | 0.000920s | 0.000915s | 0.000940s | byte equality observed |
| push_back.test | 10 | 0.000923s | 0.000926s | 0.000929s | byte equality observed |
| push_front.test | 10 | 0.000929s | 0.000917s | 0.000888s | byte equality observed |
| quick.test | 10 | 0.000409s | 0.000877s | 0.000849s | byte equality observed |
| ref_vector.test | 10 | 0.000910s | 0.000882s | 0.000894s | byte equality observed |
| remove.test | 10 | 0.000928s | 0.000912s | 0.000900s | byte equality observed |
| remove_if.test | 10 | 0.000931s | 0.000925s | 0.000910s | byte equality observed |
| repetitive_view.test | 10 | 0.000894s | 0.000881s | 0.000885s | byte equality observed |
| replace.test | 10 | 0.000919s | 0.000902s | 0.000920s | byte equality observed |
| replace_if.test | 10 | 0.000936s | 0.000908s | 0.000919s | byte equality observed |
| reverse.test | 10 | 0.000939s | 0.000906s | 0.000903s | byte equality observed |
| reverse_fold.test | 10 | 0.000896s | 0.000925s | 0.000880s | byte equality observed |
| reverse_iter_fold.test | 10 | 0.000903s | 0.000912s | 0.000914s | byte equality observed |
| reverse_view.test | 10 | 0.000925s | 0.000913s | 0.000913s | byte equality observed |
| segmented_find.test | 10 | 0.000875s | 0.000874s | 0.000884s | byte equality observed |
| segmented_find_if.test | 10 | 0.000883s | 0.000890s | 0.000882s | byte equality observed |
| segmented_fold.test | 10 | 0.000911s | 0.000932s | 0.000919s | byte equality observed |
| segmented_for_each.test | 10 | 0.000907s | 0.000910s | 0.000910s | byte equality observed |
| segmented_iterator_range.test | 10 | 0.000938s | 0.000947s | 0.000938s | byte equality observed |
| set.test | 10 | 0.000921s | 0.000920s | 0.000892s | byte equality observed |
| single_view.test | 10 | 0.000911s | 0.000903s | 0.000912s | byte equality observed |
| std_array.test | 10 | 0.000904s | 0.000878s | 0.000889s | byte equality observed |
| std_pair.test | 10 | 0.000912s | 0.000909s | 0.000909s | byte equality observed |
| std_tuple.test | 10 | 0.000899s | 0.000879s | 0.000879s | byte equality observed |
| std_tuple_iterator.test | 10 | 0.000896s | 0.000888s | 0.000873s | byte equality observed |
| swap.test | 10 | 0.000895s | 0.000908s | 0.000891s | byte equality observed |
| transform.test | 10 | 0.000932s | 0.000898s | 0.000902s | byte equality observed |
| transform_view.test | 10 | 0.000945s | 0.000935s | 0.000914s | byte equality observed |
| tuple_comparison.test | 10 | 0.000900s | 0.000890s | 0.000887s | byte equality observed |
| tuple_construction.test | 10 | 0.000886s | 0.000873s | 0.000879s | byte equality observed |
| tuple_conversion.test | 10 | 0.000892s | 0.000870s | 0.000878s | byte equality observed |
| tuple_copy.test | 10 | 0.000880s | 0.000915s | 0.000879s | byte equality observed |
| tuple_element.test | 10 | 0.000896s | 0.000874s | 0.000913s | byte equality observed |
| tuple_hash.test | 10 | 0.000889s | 0.000906s | 0.000868s | byte equality observed |
| tuple_make.test | 10 | 0.000905s | 0.000872s | 0.000894s | byte equality observed |
| tuple_misc.test | 10 | 0.000915s | 0.000897s | 0.000910s | byte equality observed |
| tuple_mutate.test | 10 | 0.000886s | 0.000895s | 0.000870s | byte equality observed |
| tuple_nest.test | 10 | 0.000901s | 0.000871s | 0.000876s | byte equality observed |
| tuple_tie.test | 10 | 0.000884s | 0.000908s | 0.000907s | byte equality observed |
| tuple_traits__maybe_variadic.test | 10 | 0.000893s | 0.000889s | 0.000872s | byte equality observed |
| tuple_traits__no_variadic.test | 10 | 0.000877s | 0.000897s | 0.000874s | byte equality observed |
| unfused.test | 10 | 0.000890s | 0.000888s | 0.000884s | byte equality observed |
| unfused_typed.test | 10 | 0.000874s | 0.000896s | 0.000864s | byte equality observed |
| vector_comparison.test | 10 | 0.000890s | 0.000908s | 0.000887s | byte equality observed |
| vector_construction.test | 10 | 0.000899s | 0.000909s | 0.000874s | byte equality observed |
| vector_conversion.test | 10 | 0.000874s | 0.000900s | 0.000854s | byte equality observed |
| vector_copy.test | 10 | 0.000892s | 0.000891s | 0.000857s | byte equality observed |
| vector_hash.test | 10 | 0.000907s | 0.000908s | 0.000862s | byte equality observed |
| vector_iterator.test | 10 | 0.000915s | 0.000887s | 0.000878s | byte equality observed |
| vector_make.test | 10 | 0.000897s | 0.000885s | 0.000902s | byte equality observed |
| vector_misc.test | 10 | 0.000884s | 0.000898s | 0.000888s | byte equality observed |
| vector_move.test | 10 | 0.000931s | 0.000902s | 0.000918s | byte equality observed |
| vector_mutate.test | 10 | 0.000902s | 0.000900s | 0.000876s | byte equality observed |
| vector_n.test | 10 | 0.000930s | 0.000915s | 0.000907s | byte equality observed |
| vector_nest.test | 10 | 0.000927s | 0.000919s | 0.000884s | byte equality observed |
| vector_tie.test | 10 | 0.000872s | 0.000921s | 0.000886s | byte equality observed |
| vector_traits__maybe_variadic.test | 10 | 0.000901s | 0.000882s | 0.000886s | byte equality observed |
| vector_traits__no_variadic.test | 10 | 0.000905s | 0.000881s | 0.000896s | byte equality observed |
| vector_value_at.test | 10 | 0.000897s | 0.000887s | 0.000873s | byte equality observed |
| zip.test | 10 | 0.000902s | 0.000894s | 0.000927s | byte equality observed |
| zip2.test | 10 | 0.000910s | 0.000883s | 0.000885s | byte equality observed |
| zip_ignore.test | 10 | 0.000896s | 0.000905s | 0.000875s | byte equality observed |
| zip_view.test | 10 | 0.000920s | 0.000890s | 0.000883s | byte equality observed |
| zip_view2.test | 10 | 0.000909s | 0.000882s | 0.000865s | byte equality observed |
| zip_view_ignore.test | 10 | 0.000895s | 0.000875s | 0.000875s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43658654032).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
