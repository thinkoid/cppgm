# libs/fusion/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| all.test | RUN | 0.296742 | 0.565301 | 0.694994 | 0.001553 | 0.001449 | 0.001439 |
| any.test | RUN | 0.285568 | 0.534229 | 0.657674 | 0.001566 | 0.001446 | 0.001569 |
| clear.test | RUN | 0.204052 | 0.496350 | 0.546061 | 0.001501 | 0.001528 | 0.001415 |
| copy.test | RUN | 0.172905 | 0.365755 | 0.444404 | 0.001731 | 0.001475 | 0.001462 |
| count.test | RUN | 0.196218 | 0.400831 | 0.501556 | 0.001686 | 0.001522 | 0.001647 |
| count_if.test | RUN | 0.183280 | 0.383612 | 0.455188 | 0.001273 | 0.001710 | 0.001642 |
| erase.test | RUN | 0.268434 | 0.680505 | 0.750733 | 0.001618 | 0.001540 | 0.001421 |
| erase_key.test | RUN | 0.254744 | 0.669672 | 0.709829 | 0.001760 | 0.001573 | 0.001537 |
| filter.test | RUN | 0.229123 | 0.560506 | 0.667095 | 0.001631 | 0.001728 | 0.001648 |
| filter_if.test | RUN | 0.260267 | 0.654936 | 0.782211 | 0.001564 | 0.001448 | 0.001625 |
| find.test | RUN | 0.218024 | 0.459298 | 0.578534 | 0.001490 | 0.001467 | 0.001540 |
| find_if.test | RUN | 0.205827 | 0.410315 | 0.530043 | 0.001802 | 0.001695 | 0.001589 |
| fold.test | RUN | 0.234057 | 0.516533 | 0.633158 | 0.001620 | 0.001721 | 0.001428 |
| for_each.test | RUN | 0.207969 | 0.471045 | 0.550154 | 0.001655 | 0.001667 | 0.001220 |
| insert.test | RUN | 0.298028 | 0.833997 | 0.906616 | 0.001664 | 0.001558 | 0.001419 |
| insert_range.test | RUN | 0.300080 | 0.834902 | 0.915814 | 0.001553 | 0.001652 | 0.001346 |
| iter_fold.test | RUN | 0.357425 | 0.785806 | 1.058529 | 0.001517 | 0.001681 | 0.001501 |
| move.test | RUN | 0.176095 | 0.383128 | 0.445578 | 0.001781 | 0.001538 | 0.001465 |
| none.test | RUN | 0.299887 | 0.546437 | 0.684299 | 0.001417 | 0.001604 | 0.001275 |
| pop_back.test | RUN | 0.284303 | 0.712987 | 0.783777 | 0.001797 | 0.001439 | 0.001508 |
| pop_front.test | RUN | 0.241877 | 0.586154 | 0.623889 | 0.001827 | 0.001662 | 0.001452 |
| push_back.test | RUN | 0.301391 | 0.841189 | 0.890177 | 0.001754 | 0.001743 | 0.001437 |
| push_front.test | RUN | 0.277765 | 0.693481 | 0.756191 | 0.001657 | 0.001626 | 0.001654 |
| remove.test | RUN | 0.296796 | 0.806145 | 0.878363 | 0.001578 | 0.001718 | 0.001465 |
| remove_if.test | RUN | 0.268152 | 0.654865 | 0.751806 | 0.001825 | 0.001448 | 0.001656 |
| replace.test | RUN | 0.250054 | 0.643835 | 0.738145 | 0.001763 | 0.001735 | 0.001606 |
| replace_if.test | RUN | 0.250247 | 0.638300 | 0.709194 | 0.001819 | 0.001746 | 0.001540 |
| reverse_fold.test | RUN | 0.401981 | 0.897397 | 1.206159 | 0.001797 | 0.001614 | 0.001503 |
| reverse_iter_fold.test | RUN | 0.415078 | 0.912812 | 1.237427 | 0.001752 | 0.001390 | 0.001397 |
| reverse.test | RUN | 0.251672 | 0.664839 | 0.702157 | 0.001916 | 0.001547 | 0.001198 |
| segmented_for_each.test | RUN | 0.436192 | 1.204288 | 1.421855 | 0.001563 | 0.001393 | 0.001532 |
| segmented_find.test | RUN | 0.269090 | 0.654952 | 0.780355 | 0.001515 | 0.001468 | 0.001502 |
| segmented_find_if.test | RUN | 0.286562 | 0.644001 | 0.784045 | 0.001800 | 0.001458 | 0.001401 |
| segmented_fold.test | RUN | 0.350793 | 0.845894 | 1.012416 | 0.001656 | 0.001664 | 0.001560 |
| transform.test | RUN | 0.269824 | 0.675470 | 0.754422 | 0.001560 | 0.001739 | 0.001620 |
| join.test | RUN | 0.197575 | 0.402996 | 0.528976 | 0.001741 | 0.001641 | 0.001708 |
| zip.test | RUN | 0.349035 | 0.752916 | 1.002604 | 0.001801 | 0.001676 | 0.001513 |
| zip2.test | RUN | 0.343131 | 0.735566 | 0.944581 | 0.001615 | 0.001485 | 0.001335 |
| zip_ignore.test | RUN | 0.257019 | 0.516444 | 0.629631 | 0.001659 | 0.001544 | 0.001549 |
| flatten.test | RUN | 0.246288 | 0.579809 | 0.639795 | 0.001477 | 0.001685 | 0.001606 |
| ticket-5490.test | COMPILE | 0.126559 | 0.252585 | 0.283623 | — | — | — |
| as_deque.test | RUN | 0.238552 | 0.534327 | 0.698277 | 0.001559 | 0.001642 | 0.001516 |
| as_list.test | RUN | 0.264163 | 0.676345 | 0.758625 | 0.001610 | 0.001461 | 0.001457 |
| as_map.test | RUN | 0.263151 | 0.665465 | 0.746090 | 0.001565 | 0.001458 | 0.001313 |
| as_map_assoc.test | RUN | 0.258149 | 0.633100 | 0.708335 | 0.001452 | 0.001658 | 0.001608 |
| as_set.test | RUN | 0.299894 | 0.755248 | 0.876349 | 0.001483 | 0.001503 | 0.001401 |
| as_vector.test | RUN | 0.269290 | 0.685629 | 0.787218 | 0.001437 | 0.001587 | 0.001434 |
| boost_tuple.test | RUN | 0.273188 | 0.673339 | 0.740359 | 0.001539 | 0.001337 | 0.001327 |
| boost_tuple_iterator.test | RUN | 0.184088 | 0.399488 | 0.453356 | 0.001711 | 0.001484 | 0.001609 |
| cons.test | RUN | 0.337370 | 0.760287 | 0.883287 | 0.001877 | 0.001335 | 0.001543 |
| convert_boost_tuple.test | RUN | 0.210776 | 0.585381 | 0.591730 | 0.001587 | 0.001645 | 0.001382 |
| convert_deque.test | RUN | 0.212164 | 0.579011 | 0.589381 | 0.001486 | 0.001355 | 0.001352 |
| convert_list.test | RUN | 0.208511 | 0.586410 | 0.592311 | 0.001539 | 0.001328 | 0.001288 |
| convert_std_pair.test | RUN | 0.223332 | 0.596940 | 0.609761 | 0.001732 | 0.001498 | 0.001261 |
| convert_std_tuple.test | RUN | 0.210738 | 0.577086 | 0.588617 | 0.001629 | 0.001424 | 0.001410 |
| convert_vector.test | RUN | 0.215704 | 0.578897 | 0.599559 | 0.001446 | 0.001374 | 0.001156 |
| filter_view.test | RUN | 0.258750 | 0.614342 | 0.704729 | 0.001834 | 0.001437 | 0.001591 |
| hash.test | RUN | 0.263106 | 0.556367 | 0.657097 | 0.001708 | 0.001556 | 0.001757 |
| io.test | RUN | 0.272685 | 0.784112 | 0.818959 | 0.001667 | 0.001882 | 0.001838 |
| iterator_range.test | RUN | 0.248673 | 0.591796 | 0.677895 | 0.001478 | 0.001729 | 0.001624 |
| joint_view.test | RUN | 0.331802 | 0.968511 | 1.020831 | 0.001895 | 0.001740 | 0.001718 |
| list_comparison.test | RUN | 0.184860 | 0.397328 | 0.490210 | 0.001736 | 0.001561 | 0.001665 |
| list_construction.test | RUN | 0.183069 | 0.391777 | 0.484352 | 0.001485 | 0.001564 | 0.001423 |
| list_copy.test | RUN | 0.282552 | 0.702580 | 0.809379 | 0.001684 | 0.001652 | 0.001570 |
| list_iterator.test | RUN | 0.191585 | 0.387478 | 0.471400 | 0.001770 | 0.001539 | 0.003701 |
| list_hash.test | RUN | 0.245843 | 0.782874 | 0.717780 | 0.001471 | 0.001421 | 0.001654 |
| list_make.test | RUN | 0.193924 | 0.443791 | 0.553540 | 0.001772 | 0.001524 | 0.001641 |
| list_misc.test | RUN | 0.251498 | 0.508084 | 0.639186 | 0.001650 | 0.001646 | 0.001593 |
| list_mutate.test | RUN | 0.175693 | 0.339339 | 0.422609 | 0.001472 | 0.001466 | 0.001716 |
| list_nest.test | RUN | 0.340470 | 0.969407 | 1.173941 | 0.001626 | 0.001518 | 0.001686 |
| list_tie.test | RUN | 0.190665 | 0.381958 | 0.446299 | 0.001725 | 0.001625 | 0.001575 |
| list_value_at.test | RUN | 0.181216 | 0.385735 | 0.443772 | 0.001457 | 0.001481 | 0.001666 |
| deque_comparison.test | RUN | 0.187321 | 0.406722 | 0.457164 | 0.001487 | 0.001434 | 0.001616 |
| deque_construction.test | RUN | 0.192142 | 0.382779 | 0.521355 | 0.001645 | 0.001626 | 0.001616 |
| deque_copy.test | RUN | 0.264394 | 0.675293 | 0.786064 | 0.001522 | 0.001438 | 0.001653 |
| deque_iterator.test | RUN | 0.184792 | 0.414955 | 0.475059 | 0.001529 | 0.001463 | 0.001554 |
| deque_hash.test | RUN | 0.258212 | 0.744226 | 0.704336 | 0.001371 | 0.001650 | 0.001692 |
| deque_is_constructible.test | COMPILE | 0.097022 | 0.181818 | 0.220029 | — | — | — |
| deque_make.test | RUN | 0.220650 | 0.406512 | 0.510583 | 0.001730 | 0.001388 | 0.001684 |
| deque_misc.test | RUN | 0.267554 | 0.499141 | 0.630991 | 0.001422 | 0.001553 | 0.001423 |
| deque_move.test | RUN | 0.216221 | 0.424561 | 0.505254 | 0.001506 | 0.001314 | 0.001346 |
| deque_mutate.test | RUN | 0.188584 | 0.335053 | 0.422187 | 0.001447 | 0.001676 | 0.001681 |
| deque_nest.test | RUN | 0.502621 | 1.559615 | 1.881777 | 0.001726 | 0.001463 | 0.001526 |
| deque_tie.test | RUN | 0.174364 | 0.370806 | 0.456844 | 0.001433 | 0.001577 | 0.001533 |
| deque_value_at.test | RUN | 0.171780 | 0.366279 | 0.441898 | 0.001165 | 0.001351 | 0.001153 |
| front_extended_deque.test | RUN | 0.246289 | 0.544310 | 0.690453 | 0.001762 | 0.001714 | 0.001576 |
| back_extended_deque.test | RUN | 0.249646 | 0.536489 | 0.644051 | 0.001401 | 0.001544 | 0.001673 |
| make_list.test | RUN | 0.204161 | 0.436069 | 0.505545 | 0.001534 | 0.001515 | 0.001543 |
| make_vector.test | RUN | 0.201996 | 0.449725 | 0.489337 | 0.001699 | 0.001593 | 0.001700 |
| map.test | RUN | 0.254330 | 0.651655 | 0.751365 | 0.001919 | 0.001706 | 0.001673 |
| map_comparison.test | RUN | 0.198536 | 0.421152 | 0.477232 | 0.001776 | 0.001534 | 0.001560 |
| map_construction.test | RUN | 0.193923 | 0.399863 | 0.466074 | 0.001437 | 0.001346 | 0.001636 |
| map_copy.test | RUN | 0.231842 | 0.510392 | 0.595749 | 0.001761 | 0.001645 | 0.001550 |
| map_misc.test | RUN | 0.239545 | 0.508514 | 0.607143 | 0.002136 | 0.001499 | 0.001395 |
| map_move.test | RUN | 0.193888 | 0.427425 | 0.490031 | 0.001561 | 0.001387 | 0.001502 |
| map_mutate.test | RUN | 0.175239 | 0.340332 | 0.422986 | 0.001419 | 0.001499 | 0.001478 |
| map_tie.test | RUN | 0.180106 | 0.344462 | 0.430092 | 0.001750 | 0.001620 | 0.001501 |
| nil.test | RUN | 0.122102 | 0.240670 | 0.298720 | 0.001754 | 0.001577 | 0.001578 |
| nview.test | RUN | 0.232221 | 0.507874 | 0.626883 | 0.001772 | 0.001746 | 0.001576 |
| reverse_view.test | RUN | 0.307573 | 0.830939 | 0.932424 | 0.001638 | 0.001614 | 0.001682 |
| segmented_iterator_range.test | RUN | 0.374886 | 0.972130 | 1.170290 | 0.001705 | 0.001519 | 0.001579 |
| set.test | RUN | 0.227606 | 0.571308 | 0.654127 | 0.001491 | 0.001622 | 0.001636 |
| single_view.test | RUN | 0.209134 | 0.510914 | 0.609015 | 0.002546 | 0.001486 | 0.001309 |
| std_pair.test | RUN | 0.270732 | 0.661148 | 0.748343 | 0.001806 | 0.001622 | 0.001327 |
| boost_array.test | RUN | 0.235540 | 0.455051 | 0.573874 | 0.001628 | 0.001613 | 0.001544 |
| array.test | RUN | 0.231702 | 0.458943 | 0.546964 | 0.001389 | 0.001346 | 0.001381 |
| std_array.test | RUN | 0.224589 | 0.471845 | 0.543396 | 0.001704 | 0.001484 | 0.001248 |
| tuple_comparison.test | RUN | 0.200570 | 0.419173 | 0.531958 | 0.001787 | 0.001686 | 0.001416 |
| tuple_construction.test | RUN | 0.207747 | 0.429101 | 0.529118 | 0.001770 | 0.001726 | 0.001192 |
| tuple_conversion.test | RUN | 0.451792 | 1.314166 | 1.758579 | 0.001433 | 0.001566 | 0.001420 |
| tuple_copy.test | RUN | 0.296541 | 0.771547 | 0.913276 | 0.001703 | 0.001416 | 0.001679 |
| tuple_element.test | RUN | 0.193478 | 0.413345 | 0.471329 | 0.001522 | 0.001610 | 0.001412 |
| tuple_make.test | RUN | 0.205149 | 0.476270 | 0.514460 | 0.001755 | 0.001652 | 0.001448 |
| tuple_misc.test | RUN | 0.254534 | 0.539084 | 0.693413 | 0.001400 | 0.001650 | 0.001564 |
| tuple_mutate.test | RUN | 0.183262 | 0.362792 | 0.464876 | 0.001587 | 0.001477 | 0.001678 |
| tuple_nest.test | RUN | 0.741794 | 2.827278 | 3.297963 | 0.001806 | 0.001662 | 0.001522 |
| tuple_hash.test | RUN | 0.266476 | 0.798582 | 0.702773 | 0.001620 | 0.001575 | 0.001304 |
| tuple_tie.test | RUN | 0.195140 | 0.424359 | 0.496186 | 0.001734 | 0.001654 | 0.001462 |
| tuple_traits__maybe_variadic.test | RUN | 0.205706 | 0.527372 | 0.515102 | 0.001402 | 0.001496 | 0.001396 |
| tuple_traits__no_variadic.test | RUN | 0.234432 | 0.528838 | 0.589024 | 0.001864 | 0.001674 | 0.001527 |
| transform_view.test | RUN | 0.315884 | 0.882591 | 0.945270 | 0.001587 | 0.001633 | 0.001502 |
| identity_view.test | RUN | 0.297105 | 0.798915 | 0.889696 | 0.001465 | 0.001728 | 0.001707 |
| vector_comparison.test | RUN | 0.195412 | 0.437381 | 0.519768 | 0.001572 | 0.001483 | 0.001609 |
| vector_construction.test | RUN | 0.192868 | 0.388695 | 0.538907 | 0.003163 | 0.001691 | 0.001587 |
| vector_conversion.test | RUN | 0.571197 | 1.836909 | 2.143463 | 0.001937 | 0.001578 | 0.001532 |
| vector_copy.test | RUN | 0.339287 | 0.766046 | 0.889644 | 0.001526 | 0.001640 | 0.001524 |
| vector_iterator.test | RUN | 0.232119 | 0.407287 | 0.442618 | 0.001728 | 0.001634 | 0.001365 |
| vector_make.test | RUN | 0.226018 | 0.451555 | 0.491477 | 0.001567 | 0.001636 | 0.001540 |
| vector_misc.test | RUN | 0.250227 | 0.588094 | 0.600184 | 0.001610 | 0.001714 | 0.001635 |
| vector_move.test | RUN | 0.194994 | 0.446388 | 0.492546 | 0.001446 | 0.001303 | 0.001660 |
| vector_mutate.test | RUN | 0.176072 | 0.369245 | 0.419333 | 0.001506 | 0.001638 | 0.001418 |
| vector_n.test | RUN | 0.219419 | 0.438390 | 0.554036 | 0.001816 | 0.001778 | 0.001576 |
| vector_nest.test | RUN | 0.748082 | 2.904444 | 3.201208 | 0.001790 | 0.001410 | 0.001524 |
| vector_hash.test | RUN | 0.243734 | 0.754718 | 0.636920 | 0.001457 | 0.001584 | 0.001381 |
| vector_tie.test | RUN | 0.176892 | 0.389499 | 0.470766 | 0.001685 | 0.001578 | 0.001460 |
| vector_traits__maybe_variadic.test | RUN | 0.200466 | 0.438819 | 0.466492 | 0.001810 | 0.001607 | 0.001532 |
| vector_traits__no_variadic.test | RUN | 0.215929 | 0.474989 | 0.494688 | 0.001568 | 0.001530 | 0.001360 |
| vector_value_at.test | RUN | 0.171076 | 0.362462 | 0.457139 | 0.001726 | 0.001669 | 0.001446 |
| zip_view.test | RUN | 0.376432 | 0.869575 | 1.096582 | 0.001696 | 0.001567 | 0.001367 |
| zip_view2.test | RUN | 0.288316 | 0.733564 | 0.870615 | 0.001607 | 0.001400 | 0.001238 |
| zip_view_ignore.test | RUN | 0.270057 | 0.645834 | 0.762362 | 0.001600 | 0.001660 | 0.001484 |
| repetitive_view.test | RUN | 0.476266 | 1.113458 | 1.425571 | 0.001840 | 0.001690 | 0.001504 |
| deduce_sequence.test | RUN | 0.226086 | 0.486691 | 0.564236 | 0.001520 | 0.001638 | 0.001248 |
| adapt_adt_named.test | RUN | 0.275003 | 0.682832 | 0.763290 | 0.001571 | 0.001674 | 0.001500 |
| adapt_adt_named_empty.test | RUN | 0.239624 | 0.553164 | 0.614554 | 0.001670 | 0.001785 | 0.001279 |
| adapt_adt.test | RUN | 0.298791 | 0.943636 | 0.882920 | 0.001621 | 0.001591 | 0.001250 |
| adapt_adt_empty.test | RUN | 0.222310 | 0.610273 | 0.620015 | 0.001712 | 0.001589 | 0.001426 |
| adapt_assoc_adt_named.test | RUN | 0.318105 | 0.738343 | 0.769232 | 0.001566 | 0.001586 | 0.001495 |
| adapt_assoc_adt_named_empty.test | RUN | 0.243937 | 0.546307 | 0.597414 | 0.001814 | 0.001504 | 0.001555 |
| adapt_assoc_adt.test | RUN | 0.305125 | 0.765658 | 0.807436 | 0.001623 | 0.001760 | 0.001580 |
| adapt_assoc_adt_empty.test | RUN | 0.230746 | 0.573901 | 0.602595 | 0.001782 | 0.001572 | 0.001522 |
| adapt_assoc_struct_named.test | RUN | 0.298938 | 0.721446 | 0.761589 | 0.001578 | 0.001754 | 0.001383 |
| adapt_assoc_struct_named_empty.test | RUN | 0.231824 | 0.571829 | 0.587263 | 0.001680 | 0.001585 | 0.001520 |
| adapt_assoc_struct.test | RUN | 0.256548 | 0.654190 | 0.721466 | 0.001616 | 0.001408 | 0.001544 |
| adapt_assoc_struct_empty.test | RUN | 0.225715 | 0.541316 | 0.592909 | 0.001622 | 0.001632 | 0.001436 |
| adapt_assoc_tpl_adt.test | RUN | 0.309398 | 0.759385 | 0.847692 | 0.001612 | 0.001515 | 0.001493 |
| adapt_assoc_tpl_adt_empty.test | RUN | 0.231622 | 0.549163 | 0.585590 | 0.001784 | 0.001676 | 0.001712 |
| adapt_assoc_tpl_struct.test | RUN | 0.255847 | 0.637511 | 0.698940 | 0.001648 | 0.001735 | 0.001453 |
| adapt_assoc_tpl_struct_empty.test | RUN | 0.232962 | 0.560928 | 0.586953 | 0.001793 | 0.001633 | 0.001414 |
| adapt_struct_named.test | RUN | 0.259750 | 0.658783 | 0.731314 | 0.001834 | 0.001594 | 0.001517 |
| adapt_struct_named_empty.test | RUN | 0.232293 | 0.543172 | 0.616623 | 0.001534 | 0.001586 | 0.001387 |
| adapt_struct.test | RUN | 0.285552 | 0.754847 | 0.826819 | 0.001572 | 0.001666 | 0.001590 |
| adapt_struct_empty.test | RUN | 0.229856 | 0.542329 | 0.615407 | 0.002032 | 0.001585 | 0.001401 |
| adapt_tpl_adt.test | RUN | 0.298855 | 0.883982 | 0.877474 | 0.001566 | 0.001575 | 0.001600 |
| adapt_tpl_adt_empty.test | RUN | 0.241110 | 0.553158 | 0.602145 | 0.001776 | 0.001680 | 0.001677 |
| adapt_tpl_struct.test | RUN | 0.291914 | 0.620984 | 0.697059 | 0.001926 | 0.001478 | 0.001432 |
| adapt_tpl_struct_empty.test | RUN | 0.238321 | 0.579365 | 0.608721 | 0.001601 | 0.001637 | 0.001482 |
| adt_attribute_proxy.test | RUN | 0.306062 | 0.530894 | 0.643145 | 0.001759 | 0.001681 | 0.001408 |
| define_struct.test | RUN | 0.352843 | 0.743387 | 0.852216 | 0.001778 | 0.001511 | 0.001616 |
| define_struct_empty.test | RUN | 0.280948 | 0.609183 | 0.690008 | 0.001551 | 0.001667 | 0.001538 |
| define_struct_move.test | RUN | 0.179231 | 0.354946 | 0.414924 | 0.001778 | 0.001609 | 0.001362 |
| define_struct_inline.test | RUN | 0.337438 | 0.887363 | 0.961553 | 0.001530 | 0.001422 | 0.001706 |
| define_struct_inline_empty.test | RUN | 0.278007 | 0.603575 | 0.680993 | 0.001619 | 0.001511 | 0.001384 |
| define_struct_inline_move.test | RUN | 0.182427 | 0.361519 | 0.432355 | 0.001774 | 0.001807 | 0.001515 |
| define_assoc_struct.test | RUN | 0.307233 | 0.715282 | 0.825592 | 0.001770 | 0.001624 | 0.001439 |
| define_assoc_struct_empty.test | RUN | 0.270371 | 0.619131 | 0.720884 | 0.001808 | 0.001692 | 0.001574 |
| define_assoc_struct_move.test | RUN | 0.175554 | 0.335700 | 0.412003 | 0.001544 | 0.001612 | 0.001477 |
| define_tpl_struct.test | RUN | 0.311074 | 0.727891 | 0.804156 | 0.001907 | 0.001536 | 0.001478 |
| define_tpl_struct_empty.test | RUN | 0.288732 | 0.617965 | 0.711653 | 0.001722 | 0.001461 | 0.001617 |
| define_tpl_struct_move.test | RUN | 0.184895 | 0.356039 | 0.428580 | 0.001519 | 0.001679 | 0.001626 |
| define_tpl_struct_inline.test | RUN | 0.318940 | 0.822887 | 0.892951 | 0.001700 | 0.001526 | 0.001537 |
| define_tpl_struct_inline_empty.test | RUN | 0.274084 | 0.620002 | 0.706576 | 0.001758 | 0.001391 | 0.001545 |
| define_tpl_struct_inline_move.test | RUN | 0.177480 | 0.356535 | 0.425332 | 0.001529 | 0.001308 | 0.001493 |
| define_assoc_tpl_struct.test | RUN | 0.309049 | 0.733692 | 0.817146 | 0.001764 | 0.001682 | 0.001612 |
| define_assoc_tpl_struct_empty.test | RUN | 0.271095 | 0.620567 | 0.693483 | 0.001574 | 0.001742 | 0.001542 |
| define_assoc_tpl_struct_move.test | RUN | 0.175058 | 0.353343 | 0.411428 | 0.001725 | 0.001586 | 0.001663 |
| std_tuple.test | RUN | 0.183284 | 0.392013 | 0.473049 | 0.001543 | 0.001365 | 0.001391 |
| std_tuple_iterator.test | RUN | 0.185567 | 0.424113 | 0.470549 | 0.001848 | 0.001722 | 0.001454 |
| ref_vector.test | RUN | 0.204992 | 0.432330 | 0.479422 | 0.001801 | 0.001592 | 0.001484 |
| flatten_view.test | RUN | 0.217593 | 0.522156 | 0.574579 | 0.001555 | 0.001596 | 0.001336 |
| github-159.test | COMPILE | 0.098613 | 0.195136 | 0.210228 | — | — | — |
| github-176.test | RUN | 0.220387 | 0.460293 | 0.482520 | 0.001833 | 0.001593 | 0.001544 |
| size.test | COMPILE | 0.188031 | 0.331461 | 0.381846 | — | — | — |
| fused.test | RUN | 0.250745 | 0.522717 | 0.587655 | 0.001473 | 0.001524 | 0.001492 |
| fused_function_object.test | RUN | 0.185360 | 0.413082 | 0.434783 | 0.001900 | 0.001316 | 0.001406 |
| fused_procedure.test | RUN | 0.241255 | 0.502381 | 0.536653 | 0.001365 | 0.001516 | 0.001377 |
| unfused.test | RUN | 0.195443 | 0.411583 | 0.438360 | 0.001836 | 0.001544 | 0.001478 |
| unfused_typed.test | RUN | 0.193310 | 0.458794 | 0.454703 | 0.001632 | 0.001502 | 0.001497 |
| make_fused.test | RUN | 0.242454 | 0.548294 | 0.574897 | 0.001580 | 0.001590 | 0.001399 |
| make_fused_function_object.test | RUN | 0.186266 | 0.409377 | 0.458411 | 0.001732 | 0.001502 | 0.001381 |
| make_fused_procedure.test | RUN | 0.245699 | 0.496787 | 0.554646 | 0.001791 | 0.001667 | 0.001496 |
| make_unfused.test | RUN | 0.193039 | 0.377676 | 0.451312 | 0.001658 | 0.001613 | 0.001468 |
| invoke.test | RUN | 0.483616 | 1.336629 | 1.525814 | 0.001946 | 0.001492 | 0.001260 |
| invoke_function_object.test | RUN | 0.233380 | 0.491425 | 0.567896 | 0.001749 | 0.001685 | 0.001551 |
| invoke_procedure.test | RUN | 0.381190 | 0.989904 | 1.114684 | 0.001543 | 0.001501 | 0.001564 |
| swap.test | RUN | 0.293157 | 0.627084 | 0.744867 | 0.001639 | 0.001532 | 0.001672 |
| is_sequence.test | COMPILE | 0.046530 | 0.089220 | 0.099617 | — | — | — |
| is_view.test | COMPILE | 0.049707 | 0.095282 | 0.094555 | — | — | — |
| pair_deque.test | COMPILE | 0.101334 | 0.205000 | 0.228669 | — | — | — |
| pair_list.test | COMPILE | 0.096602 | 0.201412 | 0.219077 | — | — | — |
| pair_map.test | COMPILE | 0.106221 | 0.205866 | 0.232118 | — | — | — |
| pair_set.test | COMPILE | 0.106455 | 0.203292 | 0.225494 | — | — | — |
| pair_vector.test | COMPILE | 0.101970 | 0.204281 | 0.224564 | — | — | — |
| pair_nest.test | COMPILE | 0.043249 | 0.082550 | 0.087746 | — | — | — |
| index_sequence.test | COMPILE | 0.036450 | 0.060791 | 0.069472 | — | — | — |
| and.test | COMPILE | 0.027578 | 0.045375 | 0.051954 | — | — | — |
| tag_of.test | COMPILE | 0.046414 | 0.085529 | 0.092236 | — | — | — |
| unused.test | COMPILE | 0.025954 | 0.056721 | 0.053881 | — | — | — |
| tag_of_fallback.test | COMPILE | 0.044615 | 0.088725 | 0.090355 | — | — | — |
| make_pair_r-value.test | COMPILE | 0.033971 | 0.061898 | 0.069589 | — | — | — |
| quick.test | RUN | 0.136111 | 0.282241 | 0.273748 | 0.000533 | 0.001063 | 0.001009 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 1.002× | 1.005×, 0.998× | 1.001× |
| clang | 0.989× | 0.981×, 0.997× | 0.987× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1364 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43639138948).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| adapt_adt.test | 10 | 0.000930s | 0.000897s | 0.000922s | byte equality observed |
| adapt_adt_empty.test | 10 | 0.000906s | 0.000905s | 0.000905s | byte equality observed |
| adapt_adt_named.test | 10 | 0.000914s | 0.000894s | 0.000914s | byte equality observed |
| adapt_adt_named_empty.test | 10 | 0.000926s | 0.000895s | 0.000891s | byte equality observed |
| adapt_assoc_adt.test | 10 | 0.000925s | 0.000891s | 0.000918s | byte equality observed |
| adapt_assoc_adt_empty.test | 10 | 0.000924s | 0.000887s | 0.000897s | byte equality observed |
| adapt_assoc_adt_named.test | 10 | 0.000927s | 0.000885s | 0.000899s | byte equality observed |
| adapt_assoc_adt_named_empty.test | 10 | 0.000930s | 0.000881s | 0.000893s | byte equality observed |
| adapt_assoc_struct.test | 10 | 0.000919s | 0.000879s | 0.000903s | byte equality observed |
| adapt_assoc_struct_empty.test | 10 | 0.000921s | 0.000867s | 0.000893s | byte equality observed |
| adapt_assoc_struct_named.test | 10 | 0.000917s | 0.000860s | 0.000904s | byte equality observed |
| adapt_assoc_struct_named_empty.test | 10 | 0.000917s | 0.000856s | 0.000909s | byte equality observed |
| adapt_assoc_tpl_adt.test | 10 | 0.000918s | 0.000897s | 0.000907s | byte equality observed |
| adapt_assoc_tpl_adt_empty.test | 10 | 0.000905s | 0.000891s | 0.000910s | byte equality observed |
| adapt_assoc_tpl_struct.test | 10 | 0.000928s | 0.000901s | 0.000925s | byte equality observed |
| adapt_assoc_tpl_struct_empty.test | 10 | 0.000910s | 0.000921s | 0.000916s | byte equality observed |
| adapt_struct.test | 10 | 0.000926s | 0.000904s | 0.000918s | byte equality observed |
| adapt_struct_empty.test | 10 | 0.000902s | 0.000901s | 0.000905s | byte equality observed |
| adapt_struct_named.test | 6 | 0.000903s | 0.000892s | 0.000896s | byte equality observed |
| adapt_struct_named_empty.test | 10 | 0.000898s | 0.000914s | 0.000892s | byte equality observed |
| adapt_tpl_adt.test | 10 | 0.000904s | 0.000911s | 0.000903s | byte equality observed |
| adapt_tpl_adt_empty.test | 10 | 0.000898s | 0.000899s | 0.000908s | byte equality observed |
| adapt_tpl_struct.test | 10 | 0.000900s | 0.000906s | 0.000908s | byte equality observed |
| adapt_tpl_struct_empty.test | 10 | 0.000907s | 0.000908s | 0.000926s | byte equality observed |
| adt_attribute_proxy.test | 10 | 0.000884s | 0.000891s | 0.000923s | byte equality observed |
| all.test | 10 | 0.000890s | 0.000898s | 0.000903s | byte equality observed |
| any.test | 10 | 0.000889s | 0.000901s | 0.000909s | byte equality observed |
| array.test | 10 | 0.000886s | 0.000896s | 0.000907s | byte equality observed |
| as_deque.test | 10 | 0.000900s | 0.000879s | 0.000901s | byte equality observed |
| as_list.test | 10 | 0.000926s | 0.000912s | 0.000928s | byte equality observed |
| as_map.test | 10 | 0.000914s | 0.000920s | 0.000928s | byte equality observed |
| as_map_assoc.test | 10 | 0.000903s | 0.000889s | 0.000919s | byte equality observed |
| as_set.test | 10 | 0.000927s | 0.000922s | 0.000913s | byte equality observed |
| as_vector.test | 10 | 0.000916s | 0.000918s | 0.000934s | byte equality observed |
| back_extended_deque.test | 10 | 0.000895s | 0.000884s | 0.000897s | byte equality observed |
| boost_array.test | 10 | 0.000892s | 0.000889s | 0.000918s | byte equality observed |
| boost_tuple.test | 10 | 0.000934s | 0.000914s | 0.000910s | byte equality observed |
| boost_tuple_iterator.test | 10 | 0.000907s | 0.000880s | 0.000885s | byte equality observed |
| clear.test | 10 | 0.000933s | 0.000898s | 0.000895s | byte equality observed |
| cons.test | 10 | 0.000939s | 0.000894s | 0.000924s | byte equality observed |
| convert_boost_tuple.test | 10 | 0.000909s | 0.000867s | 0.000903s | byte equality observed |
| convert_deque.test | 10 | 0.000906s | 0.000870s | 0.000874s | byte equality observed |
| convert_list.test | 10 | 0.000911s | 0.000872s | 0.000895s | byte equality observed |
| convert_std_pair.test | 10 | 0.000925s | 0.000865s | 0.000889s | byte equality observed |
| convert_std_tuple.test | 10 | 0.000909s | 0.000857s | 0.000894s | byte equality observed |
| convert_vector.test | 10 | 0.000897s | 0.000876s | 0.000874s | byte equality observed |
| copy.test | 10 | 0.000898s | 0.000859s | 0.000865s | byte equality observed |
| count.test | 10 | 0.000910s | 0.000880s | 0.000882s | byte equality observed |
| count_if.test | 10 | 0.000888s | 0.000867s | 0.000906s | byte equality observed |
| deduce_sequence.test | 10 | 0.000910s | 0.000865s | 0.000873s | byte equality observed |
| define_assoc_struct.test | 10 | 0.000923s | 0.000908s | 0.000922s | byte equality observed |
| define_assoc_struct_empty.test | 10 | 0.000923s | 0.000897s | 0.000926s | byte equality observed |
| define_assoc_struct_move.test | 10 | 0.000890s | 0.000871s | 0.000877s | byte equality observed |
| define_assoc_tpl_struct.test | 10 | 0.000921s | 0.000899s | 0.000915s | byte equality observed |
| define_assoc_tpl_struct_empty.test | 10 | 0.000919s | 0.000882s | 0.000886s | byte equality observed |
| define_assoc_tpl_struct_move.test | 10 | 0.000907s | 0.000873s | 0.000872s | byte equality observed |
| define_struct.test | 10 | 0.000923s | 0.000903s | 0.000893s | byte equality observed |
| define_struct_empty.test | 10 | 0.000928s | 0.000902s | 0.000893s | byte equality observed |
| define_struct_inline.test | 10 | 0.000936s | 0.000884s | 0.000892s | byte equality observed |
| define_struct_inline_empty.test | 10 | 0.000921s | 0.000907s | 0.000894s | byte equality observed |
| define_struct_inline_move.test | 10 | 0.000901s | 0.000879s | 0.000895s | byte equality observed |
| define_struct_move.test | 10 | 0.000893s | 0.000898s | 0.000875s | byte equality observed |
| define_tpl_struct.test | 10 | 0.000932s | 0.000920s | 0.000898s | byte equality observed |
| define_tpl_struct_empty.test | 10 | 0.000911s | 0.000926s | 0.000894s | byte equality observed |
| define_tpl_struct_inline.test | 10 | 0.000936s | 0.000944s | 0.000906s | byte equality observed |
| define_tpl_struct_inline_empty.test | 10 | 0.000922s | 0.000918s | 0.000901s | byte equality observed |
| define_tpl_struct_inline_move.test | 10 | 0.000900s | 0.000923s | 0.000884s | byte equality observed |
| define_tpl_struct_move.test | 10 | 0.000918s | 0.000908s | 0.000867s | byte equality observed |
| deque_comparison.test | 10 | 0.000888s | 0.000913s | 0.000887s | byte equality observed |
| deque_construction.test | 10 | 0.000907s | 0.000889s | 0.000895s | byte equality observed |
| deque_copy.test | 10 | 0.000923s | 0.000908s | 0.000865s | byte equality observed |
| deque_hash.test | 10 | 0.000896s | 0.000903s | 0.000893s | byte equality observed |
| deque_iterator.test | 10 | 0.000899s | 0.000900s | 0.000890s | byte equality observed |
| deque_make.test | 10 | 0.000899s | 0.000907s | 0.000875s | byte equality observed |
| deque_misc.test | 10 | 0.000889s | 0.000897s | 0.000889s | byte equality observed |
| deque_move.test | 10 | 0.000907s | 0.000903s | 0.000929s | byte equality observed |
| deque_mutate.test | 10 | 0.000911s | 0.000888s | 0.000896s | byte equality observed |
| deque_nest.test | 10 | 0.000899s | 0.000911s | 0.000886s | byte equality observed |
| deque_tie.test | 10 | 0.000891s | 0.000899s | 0.000895s | byte equality observed |
| deque_value_at.test | 10 | 0.000898s | 0.000900s | 0.000897s | byte equality observed |
| erase.test | 10 | 0.000921s | 0.000923s | 0.000910s | byte equality observed |
| erase_key.test | 10 | 0.000902s | 0.000940s | 0.000906s | byte equality observed |
| filter.test | 10 | 0.000880s | 0.000911s | 0.000872s | byte equality observed |
| filter_if.test | 10 | 0.000906s | 0.000930s | 0.000896s | byte equality observed |
| filter_view.test | 10 | 0.000910s | 0.000922s | 0.000904s | byte equality observed |
| find.test | 10 | 0.000915s | 0.000943s | 0.000912s | byte equality observed |
| find_if.test | 10 | 0.000894s | 0.000922s | 0.000903s | byte equality observed |
| flatten.test | 10 | 0.000898s | 0.000952s | 0.000889s | byte equality observed |
| flatten_view.test | 10 | 0.000900s | 0.000917s | 0.000877s | byte equality observed |
| fold.test | 10 | 0.000893s | 0.000937s | 0.000905s | byte equality observed |
| for_each.test | 10 | 0.000910s | 0.000921s | 0.000886s | byte equality observed |
| front_extended_deque.test | 10 | 0.000885s | 0.000894s | 0.000868s | byte equality observed |
| fused.test | 10 | 0.000875s | 0.000894s | 0.000897s | byte equality observed |
| fused_function_object.test | 10 | 0.000873s | 0.000886s | 0.000895s | byte equality observed |
| fused_procedure.test | 10 | 0.000888s | 0.000891s | 0.000902s | byte equality observed |
| github-176.test | 10 | 0.000874s | 0.000901s | 0.000890s | byte equality observed |
| hash.test | 10 | 0.000889s | 0.000913s | 0.000889s | byte equality observed |
| identity_view.test | 10 | 0.000930s | 0.000947s | 0.000929s | byte equality observed |
| insert.test | 10 | 0.000934s | 0.000956s | 0.000929s | byte equality observed |
| insert_range.test | 10 | 0.000941s | 0.000931s | 0.000925s | byte equality observed |
| invoke.test | 10 | 0.000900s | 0.000913s | 0.000904s | byte equality observed |
| invoke_function_object.test | 10 | 0.000902s | 0.000865s | 0.000899s | byte equality observed |
| invoke_procedure.test | 10 | 0.000903s | 0.000875s | 0.000921s | byte equality observed |
| io.test | 7 | 0.001040s | 0.001022s | 0.001038s | byte equality observed |
| iter_fold.test | 10 | 0.000922s | 0.000915s | 0.000898s | byte equality observed |
| iterator_range.test | 10 | 0.000936s | 0.000921s | 0.000926s | byte equality observed |
| join.test | 10 | 0.000906s | 0.000902s | 0.000885s | byte equality observed |
| joint_view.test | 10 | 0.000940s | 0.000939s | 0.000947s | byte equality observed |
| list_comparison.test | 10 | 0.000885s | 0.000876s | 0.000903s | byte equality observed |
| list_construction.test | 10 | 0.000889s | 0.000896s | 0.000880s | byte equality observed |
| list_copy.test | 10 | 0.000881s | 0.000899s | 0.000887s | byte equality observed |
| list_hash.test | 10 | 0.000900s | 0.000892s | 0.000882s | byte equality observed |
| list_iterator.test | 10 | 0.000887s | 0.000883s | 0.000895s | byte equality observed |
| list_make.test | 10 | 0.000891s | 0.000883s | 0.000887s | byte equality observed |
| list_misc.test | 10 | 0.000883s | 0.000878s | 0.000889s | byte equality observed |
| list_mutate.test | 10 | 0.000878s | 0.000899s | 0.000896s | byte equality observed |
| list_nest.test | 10 | 0.000877s | 0.000891s | 0.000898s | byte equality observed |
| list_tie.test | 10 | 0.000880s | 0.000883s | 0.000904s | byte equality observed |
| list_value_at.test | 10 | 0.000884s | 0.000878s | 0.000878s | byte equality observed |
| make_fused.test | 10 | 0.000882s | 0.000877s | 0.000909s | byte equality observed |
| make_fused_function_object.test | 10 | 0.000881s | 0.000869s | 0.000891s | byte equality observed |
| make_fused_procedure.test | 10 | 0.000876s | 0.000877s | 0.000911s | byte equality observed |
| make_list.test | 10 | 0.000886s | 0.000885s | 0.000922s | byte equality observed |
| make_unfused.test | 10 | 0.000886s | 0.000895s | 0.000890s | byte equality observed |
| make_vector.test | 10 | 0.000894s | 0.000891s | 0.000899s | byte equality observed |
| map.test | 10 | 0.000942s | 0.000931s | 0.000905s | byte equality observed |
| map_comparison.test | 10 | 0.000889s | 0.000871s | 0.000892s | byte equality observed |
| map_construction.test | 10 | 0.000898s | 0.000876s | 0.000898s | byte equality observed |
| map_copy.test | 10 | 0.000919s | 0.000897s | 0.000893s | byte equality observed |
| map_misc.test | 10 | 0.000908s | 0.000871s | 0.000900s | byte equality observed |
| map_move.test | 10 | 0.000921s | 0.000879s | 0.000916s | byte equality observed |
| map_mutate.test | 10 | 0.000888s | 0.000877s | 0.000887s | byte equality observed |
| map_tie.test | 10 | 0.000904s | 0.000869s | 0.000886s | byte equality observed |
| move.test | 10 | 0.000909s | 0.000873s | 0.000895s | byte equality observed |
| nil.test | 10 | 0.000880s | 0.000876s | 0.000883s | byte equality observed |
| none.test | 10 | 0.000901s | 0.000874s | 0.000892s | byte equality observed |
| nview.test | 10 | 0.000905s | 0.000896s | 0.000882s | byte equality observed |
| pop_back.test | 10 | 0.000925s | 0.000941s | 0.000910s | byte equality observed |
| pop_front.test | 10 | 0.000913s | 0.000941s | 0.000901s | byte equality observed |
| push_back.test | 10 | 0.000916s | 0.000938s | 0.000929s | byte equality observed |
| push_front.test | 10 | 0.000912s | 0.000935s | 0.000932s | byte equality observed |
| quick.test | 10 | 0.000410s | 0.000863s | 0.000854s | byte equality observed |
| ref_vector.test | 10 | 0.000917s | 0.000902s | 0.000888s | byte equality observed |
| remove.test | 10 | 0.000920s | 0.000940s | 0.000913s | byte equality observed |
| remove_if.test | 10 | 0.000925s | 0.000934s | 0.000916s | byte equality observed |
| repetitive_view.test | 10 | 0.000874s | 0.000903s | 0.000883s | byte equality observed |
| replace.test | 10 | 0.000910s | 0.000924s | 0.000896s | byte equality observed |
| replace_if.test | 10 | 0.000927s | 0.000958s | 0.000892s | byte equality observed |
| reverse.test | 10 | 0.000926s | 0.000937s | 0.000892s | byte equality observed |
| reverse_fold.test | 10 | 0.000910s | 0.000935s | 0.000876s | byte equality observed |
| reverse_iter_fold.test | 10 | 0.000904s | 0.000921s | 0.000890s | byte equality observed |
| reverse_view.test | 10 | 0.000913s | 0.000926s | 0.000900s | byte equality observed |
| segmented_find.test | 10 | 0.000875s | 0.000909s | 0.000868s | byte equality observed |
| segmented_find_if.test | 10 | 0.000905s | 0.000897s | 0.000888s | byte equality observed |
| segmented_fold.test | 10 | 0.000921s | 0.000926s | 0.000903s | byte equality observed |
| segmented_for_each.test | 10 | 0.000914s | 0.000909s | 0.000889s | byte equality observed |
| segmented_iterator_range.test | 10 | 0.000922s | 0.000926s | 0.000894s | byte equality observed |
| set.test | 10 | 0.000914s | 0.000909s | 0.000870s | byte equality observed |
| single_view.test | 10 | 0.000925s | 0.000907s | 0.000897s | byte equality observed |
| std_array.test | 10 | 0.000895s | 0.000905s | 0.000886s | byte equality observed |
| std_pair.test | 10 | 0.000916s | 0.000921s | 0.000905s | byte equality observed |
| std_tuple.test | 10 | 0.000897s | 0.000908s | 0.000861s | byte equality observed |
| std_tuple_iterator.test | 10 | 0.000899s | 0.000909s | 0.000867s | byte equality observed |
| swap.test | 10 | 0.000907s | 0.000881s | 0.000906s | byte equality observed |
| transform.test | 10 | 0.000917s | 0.000931s | 0.000897s | byte equality observed |
| transform_view.test | 10 | 0.000931s | 0.000918s | 0.000917s | byte equality observed |
| tuple_comparison.test | 10 | 0.000881s | 0.000895s | 0.000869s | byte equality observed |
| tuple_construction.test | 10 | 0.000876s | 0.000901s | 0.000900s | byte equality observed |
| tuple_conversion.test | 10 | 0.000873s | 0.000880s | 0.000902s | byte equality observed |
| tuple_copy.test | 10 | 0.000876s | 0.000884s | 0.000909s | byte equality observed |
| tuple_element.test | 10 | 0.000869s | 0.000905s | 0.000875s | byte equality observed |
| tuple_hash.test | 10 | 0.000879s | 0.000914s | 0.000913s | byte equality observed |
| tuple_make.test | 10 | 0.000886s | 0.000895s | 0.000898s | byte equality observed |
| tuple_misc.test | 10 | 0.000881s | 0.000912s | 0.000896s | byte equality observed |
| tuple_mutate.test | 10 | 0.000889s | 0.000899s | 0.000882s | byte equality observed |
| tuple_nest.test | 10 | 0.000886s | 0.000893s | 0.000882s | byte equality observed |
| tuple_tie.test | 10 | 0.000897s | 0.000880s | 0.000865s | byte equality observed |
| tuple_traits__maybe_variadic.test | 10 | 0.000884s | 0.000871s | 0.000860s | byte equality observed |
| tuple_traits__no_variadic.test | 10 | 0.000881s | 0.000881s | 0.000864s | byte equality observed |
| unfused.test | 10 | 0.000887s | 0.000886s | 0.000856s | byte equality observed |
| unfused_typed.test | 10 | 0.000886s | 0.000887s | 0.000853s | byte equality observed |
| vector_comparison.test | 10 | 0.000898s | 0.000904s | 0.000865s | byte equality observed |
| vector_construction.test | 10 | 0.000881s | 0.000887s | 0.000885s | byte equality observed |
| vector_conversion.test | 10 | 0.000892s | 0.000912s | 0.000859s | byte equality observed |
| vector_copy.test | 10 | 0.000911s | 0.000916s | 0.000850s | byte equality observed |
| vector_hash.test | 10 | 0.000897s | 0.000914s | 0.000886s | byte equality observed |
| vector_iterator.test | 10 | 0.000887s | 0.000902s | 0.000862s | byte equality observed |
| vector_make.test | 10 | 0.000901s | 0.000905s | 0.000856s | byte equality observed |
| vector_misc.test | 10 | 0.000900s | 0.000913s | 0.000868s | byte equality observed |
| vector_move.test | 10 | 0.000902s | 0.000927s | 0.000863s | byte equality observed |
| vector_mutate.test | 10 | 0.000878s | 0.000914s | 0.000865s | byte equality observed |
| vector_n.test | 10 | 0.000924s | 0.000929s | 0.000889s | byte equality observed |
| vector_nest.test | 10 | 0.000891s | 0.000889s | 0.000859s | byte equality observed |
| vector_tie.test | 10 | 0.000903s | 0.000902s | 0.000874s | byte equality observed |
| vector_traits__maybe_variadic.test | 10 | 0.000889s | 0.000892s | 0.000869s | byte equality observed |
| vector_traits__no_variadic.test | 10 | 0.000925s | 0.000908s | 0.000863s | byte equality observed |
| vector_value_at.test | 10 | 0.000910s | 0.000887s | 0.000868s | byte equality observed |
| zip.test | 10 | 0.000900s | 0.000891s | 0.000852s | byte equality observed |
| zip2.test | 10 | 0.000888s | 0.000896s | 0.000864s | byte equality observed |
| zip_ignore.test | 10 | 0.000906s | 0.000883s | 0.000866s | byte equality observed |
| zip_view.test | 10 | 0.000902s | 0.000890s | 0.000867s | byte equality observed |
| zip_view2.test | 10 | 0.000902s | 0.000898s | 0.000872s | byte equality observed |
| zip_view_ignore.test | 10 | 0.000902s | 0.000896s | 0.000888s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43639138948).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
