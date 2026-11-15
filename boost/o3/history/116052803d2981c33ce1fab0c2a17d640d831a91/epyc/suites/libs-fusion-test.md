# libs/fusion/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| all.test | RUN | 0.273558 | 0.572696 | 0.658104 | 0.001497 | 0.001420 | 0.001338 |
| any.test | RUN | 0.273881 | 0.534207 | 0.605963 | 0.001495 | 0.001663 | 0.001488 |
| clear.test | RUN | 0.192827 | 0.497882 | 0.518837 | 0.001479 | 0.001654 | 0.001323 |
| copy.test | RUN | 0.163044 | 0.373788 | 0.408389 | 0.001469 | 0.001594 | 0.001363 |
| count.test | RUN | 0.185293 | 0.441016 | 0.466281 | 0.001551 | 0.001430 | 0.001404 |
| count_if.test | RUN | 0.174094 | 0.403203 | 0.435714 | 0.001485 | 0.001699 | 0.001431 |
| erase.test | RUN | 0.247704 | 0.742419 | 0.700167 | 0.001412 | 0.001620 | 0.001398 |
| erase_key.test | RUN | 0.248189 | 0.736331 | 0.666172 | 0.001692 | 0.001598 | 0.001342 |
| filter.test | RUN | 0.215431 | 0.611681 | 0.603146 | 0.001754 | 0.001820 | 0.001480 |
| filter_if.test | RUN | 0.244539 | 0.719003 | 0.706046 | 0.001478 | 0.001550 | 0.001522 |
| find.test | RUN | 0.206925 | 0.470504 | 0.539332 | 0.001470 | 0.001628 | 0.001195 |
| find_if.test | RUN | 0.198441 | 0.445366 | 0.496019 | 0.001475 | 0.001579 | 0.001302 |
| fold.test | RUN | 0.209734 | 0.534665 | 0.610309 | 0.001606 | 0.001717 | 0.001268 |
| for_each.test | RUN | 0.188930 | 0.483721 | 0.537844 | 0.001506 | 0.001799 | 0.001397 |
| insert.test | RUN | 0.284624 | 0.855796 | 0.857949 | 0.001376 | 0.001555 | 0.001364 |
| insert_range.test | RUN | 0.279130 | 0.861930 | 0.862426 | 0.001630 | 0.001450 | 0.001200 |
| iter_fold.test | RUN | 0.323459 | 0.806215 | 1.000989 | 0.001675 | 0.001695 | 0.001506 |
| move.test | RUN | 0.163459 | 0.396034 | 0.436096 | 0.001676 | 0.001752 | 0.001528 |
| none.test | RUN | 0.271926 | 0.525734 | 0.646347 | 0.001608 | 0.001709 | 0.001518 |
| pop_back.test | RUN | 0.266566 | 0.725486 | 0.769537 | 0.001427 | 0.001747 | 0.001435 |
| pop_front.test | RUN | 0.227308 | 0.583370 | 0.608185 | 0.001774 | 0.001914 | 0.001296 |
| push_back.test | RUN | 0.292691 | 0.859349 | 0.841718 | 0.001628 | 0.001864 | 0.001369 |
| push_front.test | RUN | 0.248434 | 0.726077 | 0.703329 | 0.001541 | 0.001726 | 0.001415 |
| remove.test | RUN | 0.270113 | 0.844819 | 0.825024 | 0.001382 | 0.001761 | 0.001386 |
| remove_if.test | RUN | 0.241943 | 0.686251 | 0.703968 | 0.001692 | 0.001672 | 0.001543 |
| replace.test | RUN | 0.231461 | 0.684338 | 0.657308 | 0.001556 | 0.001939 | 0.001424 |
| replace_if.test | RUN | 0.234450 | 0.690773 | 0.642330 | 0.001685 | 0.001892 | 0.001345 |
| reverse_fold.test | RUN | 0.360750 | 0.937504 | 1.101088 | 0.001668 | 0.001780 | 0.001601 |
| reverse_iter_fold.test | RUN | 0.377873 | 0.991401 | 1.168095 | 0.001534 | 0.001788 | 0.001351 |
| reverse.test | RUN | 0.227607 | 0.691924 | 0.681813 | 0.001465 | 0.001619 | 0.001260 |
| segmented_for_each.test | RUN | 0.398860 | 1.261096 | 1.358436 | 0.001350 | 0.001405 | 0.001396 |
| segmented_find.test | RUN | 0.246519 | 0.679270 | 0.772588 | 0.001618 | 0.001545 | 0.001370 |
| segmented_find_if.test | RUN | 0.253352 | 0.652812 | 0.736572 | 0.001490 | 0.001627 | 0.001526 |
| segmented_fold.test | RUN | 0.304996 | 0.851525 | 0.976975 | 0.001639 | 0.001623 | 0.001454 |
| transform.test | RUN | 0.235423 | 0.685117 | 0.704673 | 0.001652 | 0.001792 | 0.001496 |
| join.test | RUN | 0.176287 | 0.409543 | 0.492457 | 0.001596 | 0.001754 | 0.001552 |
| zip.test | RUN | 0.309228 | 0.772971 | 0.921858 | 0.001591 | 0.001672 | 0.001508 |
| zip2.test | RUN | 0.304440 | 0.778756 | 0.891715 | 0.001672 | 0.001798 | 0.001428 |
| zip_ignore.test | RUN | 0.238379 | 0.533275 | 0.598046 | 0.001624 | 0.001657 | 0.001357 |
| flatten.test | RUN | 0.220455 | 0.612120 | 0.590698 | 0.001389 | 0.001908 | 0.001280 |
| ticket-5490.test | COMPILE | 0.117045 | 0.264588 | 0.277575 | — | — | — |
| as_deque.test | RUN | 0.226820 | 0.595978 | 0.654280 | 0.001438 | 0.001901 | 0.001327 |
| as_list.test | RUN | 0.250462 | 0.720984 | 0.699097 | 0.001491 | 0.001678 | 0.001362 |
| as_map.test | RUN | 0.243751 | 0.713145 | 0.707261 | 0.001366 | 0.001458 | 0.001288 |
| as_map_assoc.test | RUN | 0.244175 | 0.682291 | 0.673920 | 0.001354 | 0.001738 | 0.001328 |
| as_set.test | RUN | 0.269261 | 0.790208 | 0.828060 | 0.001614 | 0.001518 | 0.001191 |
| as_vector.test | RUN | 0.244120 | 0.692298 | 0.712912 | 0.001372 | 0.001434 | 0.001489 |
| boost_tuple.test | RUN | 0.240533 | 0.685897 | 0.716474 | 0.001406 | 0.001275 | 0.001168 |
| boost_tuple_iterator.test | RUN | 0.165406 | 0.403614 | 0.430583 | 0.001358 | 0.001654 | 0.001490 |
| cons.test | RUN | 0.313821 | 0.784847 | 0.857920 | 0.001300 | 0.001672 | 0.001233 |
| convert_boost_tuple.test | RUN | 0.194775 | 0.584610 | 0.575488 | 0.001653 | 0.001721 | 0.001244 |
| convert_deque.test | RUN | 0.195884 | 0.587688 | 0.562827 | 0.001372 | 0.001428 | 0.001274 |
| convert_list.test | RUN | 0.195087 | 0.591769 | 0.580026 | 0.001312 | 0.001454 | 0.001279 |
| convert_std_pair.test | RUN | 0.202164 | 0.624866 | 0.574107 | 0.001420 | 0.001538 | 0.001244 |
| convert_std_tuple.test | RUN | 0.191328 | 0.613987 | 0.568773 | 0.001443 | 0.001332 | 0.001249 |
| convert_vector.test | RUN | 0.186139 | 0.598732 | 0.552463 | 0.001235 | 0.001476 | 0.001348 |
| filter_view.test | RUN | 0.236434 | 0.662752 | 0.666302 | 0.001544 | 0.001733 | 0.001523 |
| hash.test | RUN | 0.230633 | 0.586408 | 0.627431 | 0.001232 | 0.001586 | 0.001363 |
| io.test | RUN | 0.239451 | 0.851066 | 0.760529 | 0.001218 | 0.001886 | 0.001715 |
| iterator_range.test | RUN | 0.218805 | 0.644112 | 0.627871 | 0.001612 | 0.001800 | 0.001260 |
| joint_view.test | RUN | 0.296801 | 1.050841 | 0.951489 | 0.001607 | 0.001441 | 0.001505 |
| list_comparison.test | RUN | 0.164398 | 0.444526 | 0.452057 | 0.001459 | 0.001630 | 0.001416 |
| list_construction.test | RUN | 0.162176 | 0.394306 | 0.441055 | 0.001630 | 0.001498 | 0.001117 |
| list_copy.test | RUN | 0.241723 | 0.738638 | 0.766037 | 0.001676 | 0.001606 | 0.001464 |
| list_iterator.test | RUN | 0.169441 | 0.405962 | 0.419626 | 0.001355 | 0.001587 | 0.001295 |
| list_hash.test | RUN | 0.238426 | 0.797477 | 0.639778 | 0.001377 | 0.001736 | 0.001510 |
| list_make.test | RUN | 0.188771 | 0.446690 | 0.477058 | 0.001517 | 0.001610 | 0.001473 |
| list_misc.test | RUN | 0.242289 | 0.529088 | 0.591293 | 0.001386 | 0.001719 | 0.001499 |
| list_mutate.test | RUN | 0.164785 | 0.355629 | 0.388779 | 0.001448 | 0.001682 | 0.001505 |
| list_nest.test | RUN | 0.302448 | 1.015183 | 1.095584 | 0.001270 | 0.001592 | 0.001454 |
| list_tie.test | RUN | 0.164632 | 0.414551 | 0.430345 | 0.001466 | 0.001586 | 0.001465 |
| list_value_at.test | RUN | 0.159215 | 0.381721 | 0.423484 | 0.001364 | 0.001714 | 0.001428 |
| deque_comparison.test | RUN | 0.170022 | 0.430381 | 0.440524 | 0.001353 | 0.001666 | 0.001432 |
| deque_construction.test | RUN | 0.176470 | 0.425297 | 0.468160 | 0.001368 | 0.001758 | 0.001451 |
| deque_copy.test | RUN | 0.244461 | 0.700577 | 0.714972 | 0.001300 | 0.001767 | 0.001262 |
| deque_iterator.test | RUN | 0.169251 | 0.444033 | 0.445645 | 0.001564 | 0.001427 | 0.001304 |
| deque_hash.test | RUN | 0.230545 | 0.769872 | 0.628726 | 0.001298 | 0.001794 | 0.001446 |
| deque_is_constructible.test | COMPILE | 0.088574 | 0.199187 | 0.210148 | — | — | — |
| deque_make.test | RUN | 0.164672 | 0.453049 | 0.460459 | 0.001550 | 0.001800 | 0.001493 |
| deque_misc.test | RUN | 0.216379 | 0.551111 | 0.582384 | 0.001382 | 0.001822 | 0.001129 |
| deque_move.test | RUN | 0.168164 | 0.464471 | 0.457311 | 0.001312 | 0.001549 | 0.001444 |
| deque_mutate.test | RUN | 0.150159 | 0.378136 | 0.386739 | 0.001261 | 0.001677 | 0.001416 |
| deque_nest.test | RUN | 0.454518 | 1.671507 | 1.719850 | 0.001424 | 0.001779 | 0.001410 |
| deque_tie.test | RUN | 0.155393 | 0.380413 | 0.415969 | 0.001583 | 0.001806 | 0.001584 |
| deque_value_at.test | RUN | 0.151207 | 0.385976 | 0.402856 | 0.001273 | 0.001599 | 0.001302 |
| front_extended_deque.test | RUN | 0.227823 | 0.561589 | 0.608855 | 0.001466 | 0.001634 | 0.001444 |
| back_extended_deque.test | RUN | 0.223001 | 0.578620 | 0.607979 | 0.001395 | 0.001702 | 0.001519 |
| make_list.test | RUN | 0.171493 | 0.507738 | 0.487847 | 0.001344 | 0.001512 | 0.001382 |
| make_vector.test | RUN | 0.174738 | 0.490113 | 0.456239 | 0.001184 | 0.001646 | 0.001515 |
| map.test | RUN | 0.226296 | 0.690129 | 0.682070 | 0.001506 | 0.001735 | 0.001457 |
| map_comparison.test | RUN | 0.170347 | 0.425350 | 0.455835 | 0.001444 | 0.001681 | 0.001565 |
| map_construction.test | RUN | 0.173833 | 0.433628 | 0.448620 | 0.001266 | 0.001599 | 0.001116 |
| map_copy.test | RUN | 0.209149 | 0.564552 | 0.578541 | 0.001512 | 0.001719 | 0.001527 |
| map_misc.test | RUN | 0.215812 | 0.532850 | 0.568481 | 0.001146 | 0.001498 | 0.001350 |
| map_move.test | RUN | 0.174673 | 0.435861 | 0.456105 | 0.001365 | 0.001535 | 0.001424 |
| map_mutate.test | RUN | 0.156346 | 0.360616 | 0.405480 | 0.001387 | 0.001322 | 0.001362 |
| map_tie.test | RUN | 0.162394 | 0.342887 | 0.408440 | 0.001499 | 0.001603 | 0.001446 |
| nil.test | RUN | 0.107732 | 0.244568 | 0.284971 | 0.001613 | 0.001950 | 0.001424 |
| nview.test | RUN | 0.210243 | 0.528858 | 0.579587 | 0.001568 | 0.001762 | 0.001452 |
| reverse_view.test | RUN | 0.272432 | 0.903444 | 0.897884 | 0.001460 | 0.001861 | 0.001585 |
| segmented_iterator_range.test | RUN | 0.336392 | 1.085690 | 1.118030 | 0.001558 | 0.001513 | 0.001274 |
| set.test | RUN | 0.212493 | 0.631267 | 0.635902 | 0.001333 | 0.001628 | 0.001550 |
| single_view.test | RUN | 0.189542 | 0.583256 | 0.600147 | 0.001462 | 0.001398 | 0.001664 |
| std_pair.test | RUN | 0.241461 | 0.699040 | 0.755031 | 0.001665 | 0.001663 | 0.001316 |
| boost_array.test | RUN | 0.211290 | 0.487991 | 0.564418 | 0.001357 | 0.001333 | 0.001426 |
| array.test | RUN | 0.205267 | 0.460639 | 0.543364 | 0.001322 | 0.001498 | 0.001453 |
| std_array.test | RUN | 0.202222 | 0.459837 | 0.517907 | 0.001496 | 0.001401 | 0.001308 |
| tuple_comparison.test | RUN | 0.182515 | 0.441797 | 0.492674 | 0.001320 | 0.001461 | 0.001506 |
| tuple_construction.test | RUN | 0.187143 | 0.448472 | 0.494222 | 0.001604 | 0.001616 | 0.001314 |
| tuple_conversion.test | RUN | 0.431534 | 1.370941 | 1.594055 | 0.001197 | 0.001745 | 0.001531 |
| tuple_copy.test | RUN | 0.302842 | 0.794328 | 0.837116 | 0.001352 | 0.001778 | 0.001231 |
| tuple_element.test | RUN | 0.228142 | 0.396362 | 0.465652 | 0.001617 | 0.001552 | 0.001430 |
| tuple_make.test | RUN | 0.215805 | 0.484293 | 0.506918 | 0.001568 | 0.001695 | 0.001495 |
| tuple_misc.test | RUN | 0.237419 | 0.585943 | 0.605801 | 0.001278 | 0.001696 | 0.001212 |
| tuple_mutate.test | RUN | 0.167752 | 0.385913 | 0.425631 | 0.001437 | 0.001664 | 0.001510 |
| tuple_nest.test | RUN | 0.669212 | 2.903929 | 3.144153 | 0.001518 | 0.001717 | 0.001483 |
| tuple_hash.test | RUN | 0.243204 | 0.811355 | 0.655838 | 0.001663 | 0.001460 | 0.001081 |
| tuple_tie.test | RUN | 0.170308 | 0.443940 | 0.462812 | 0.001501 | 0.001866 | 0.001401 |
| tuple_traits__maybe_variadic.test | RUN | 0.187866 | 0.528451 | 0.483533 | 0.001442 | 0.001696 | 0.001448 |
| tuple_traits__no_variadic.test | RUN | 0.216105 | 0.517810 | 0.555486 | 0.001568 | 0.001846 | 0.001454 |
| transform_view.test | RUN | 0.277097 | 0.867847 | 0.890168 | 0.001596 | 0.001401 | 0.001469 |
| identity_view.test | RUN | 0.264823 | 0.776134 | 0.836268 | 0.001171 | 0.001447 | 0.001356 |
| vector_comparison.test | RUN | 0.171335 | 0.406855 | 0.506806 | 0.001418 | 0.001715 | 0.001515 |
| vector_construction.test | RUN | 0.176319 | 0.391772 | 0.444066 | 0.001467 | 0.001668 | 0.001534 |
| vector_conversion.test | RUN | 0.468450 | 1.746019 | 2.052455 | 0.001604 | 0.001538 | 0.001448 |
| vector_copy.test | RUN | 0.248095 | 0.751764 | 0.834017 | 0.001318 | 0.001478 | 0.001354 |
| vector_iterator.test | RUN | 0.162104 | 0.421823 | 0.464595 | 0.001515 | 0.001806 | 0.001373 |
| vector_make.test | RUN | 0.176209 | 0.433582 | 0.480982 | 0.001439 | 0.001658 | 0.001529 |
| vector_misc.test | RUN | 0.224836 | 0.512568 | 0.606497 | 0.001514 | 0.001468 | 0.001516 |
| vector_move.test | RUN | 0.177986 | 0.465109 | 0.444850 | 0.001390 | 0.001474 | 0.001500 |
| vector_mutate.test | RUN | 0.156092 | 0.350505 | 0.397345 | 0.001421 | 0.001360 | 0.001307 |
| vector_n.test | RUN | 0.195703 | 0.437325 | 0.526830 | 0.001608 | 0.001692 | 0.001478 |
| vector_nest.test | RUN | 0.671418 | 2.928900 | 3.025448 | 0.001513 | 0.001571 | 0.001488 |
| vector_hash.test | RUN | 0.224615 | 0.748433 | 0.605014 | 0.001474 | 0.001664 | 0.001297 |
| vector_tie.test | RUN | 0.166076 | 0.376748 | 0.451760 | 0.001532 | 0.001474 | 0.001355 |
| vector_traits__maybe_variadic.test | RUN | 0.177151 | 0.447447 | 0.440457 | 0.001582 | 0.001481 | 0.001492 |
| vector_traits__no_variadic.test | RUN | 0.193043 | 0.456463 | 0.470922 | 0.001516 | 0.001437 | 0.001379 |
| vector_value_at.test | RUN | 0.167111 | 0.351810 | 0.417077 | 0.001568 | 0.001696 | 0.001503 |
| zip_view.test | RUN | 0.344003 | 0.843495 | 1.042879 | 0.001579 | 0.001299 | 0.001306 |
| zip_view2.test | RUN | 0.265219 | 0.694256 | 0.798344 | 0.001410 | 0.001697 | 0.001354 |
| zip_view_ignore.test | RUN | 0.245133 | 0.606100 | 0.692890 | 0.001423 | 0.001447 | 0.001461 |
| repetitive_view.test | RUN | 0.422521 | 1.180910 | 1.361932 | 0.001408 | 0.001343 | 0.001526 |
| deduce_sequence.test | RUN | 0.204462 | 0.508326 | 0.578311 | 0.001510 | 0.001574 | 0.001252 |
| adapt_adt_named.test | RUN | 0.250771 | 0.691133 | 0.692138 | 0.001440 | 0.001637 | 0.001604 |
| adapt_adt_named_empty.test | RUN | 0.220165 | 0.549301 | 0.590772 | 0.001554 | 0.001550 | 0.001427 |
| adapt_adt.test | RUN | 0.275857 | 0.879253 | 0.845444 | 0.001528 | 0.001610 | 0.001450 |
| adapt_adt_empty.test | RUN | 0.208571 | 0.540958 | 0.578098 | 0.001535 | 0.001635 | 0.001395 |
| adapt_assoc_adt_named.test | RUN | 0.266295 | 0.706893 | 0.758365 | 0.001382 | 0.001377 | 0.001396 |
| adapt_assoc_adt_named_empty.test | RUN | 0.215173 | 0.551718 | 0.581700 | 0.001604 | 0.001584 | 0.001500 |
| adapt_assoc_adt.test | RUN | 0.279304 | 0.733518 | 0.824022 | 0.001375 | 0.001356 | 0.001404 |
| adapt_assoc_adt_empty.test | RUN | 0.213213 | 0.574945 | 0.564521 | 0.001660 | 0.001637 | 0.001623 |
| adapt_assoc_struct_named.test | RUN | 0.280193 | 0.690768 | 0.767169 | 0.001411 | 0.001688 | 0.001500 |
| adapt_assoc_struct_named_empty.test | RUN | 0.221057 | 0.545004 | 0.573883 | 0.001577 | 0.001523 | 0.001530 |
| adapt_assoc_struct.test | RUN | 0.238929 | 0.658601 | 0.689385 | 0.001620 | 0.001508 | 0.001498 |
| adapt_assoc_struct_empty.test | RUN | 0.209721 | 0.552462 | 0.575870 | 0.001450 | 0.001700 | 0.001326 |
| adapt_assoc_tpl_adt.test | RUN | 0.283334 | 0.741367 | 0.821930 | 0.001614 | 0.001590 | 0.001542 |
| adapt_assoc_tpl_adt_empty.test | RUN | 0.211483 | 0.537627 | 0.572968 | 0.001543 | 0.001700 | 0.001519 |
| adapt_assoc_tpl_struct.test | RUN | 0.243370 | 0.634261 | 0.692200 | 0.001392 | 0.001764 | 0.001420 |
| adapt_assoc_tpl_struct_empty.test | RUN | 0.221651 | 0.531788 | 0.588793 | 0.001574 | 0.001784 | 0.001263 |
| adapt_struct_named.test | RUN | 0.248262 | 0.652770 | 0.676720 | 0.001684 | 0.001678 | 0.001346 |
| adapt_struct_named_empty.test | RUN | 0.218363 | 0.538059 | 0.568798 | 0.001277 | 0.001564 | 0.001456 |
| adapt_struct.test | RUN | 0.268136 | 0.748373 | 0.772130 | 0.001497 | 0.001796 | 0.001450 |
| adapt_struct_empty.test | RUN | 0.219612 | 0.528216 | 0.572253 | 0.001644 | 0.001763 | 0.001461 |
| adapt_tpl_adt.test | RUN | 0.274238 | 0.871443 | 0.799510 | 0.001461 | 0.001631 | 0.001289 |
| adapt_tpl_adt_empty.test | RUN | 0.217000 | 0.550070 | 0.567205 | 0.001596 | 0.001676 | 0.001546 |
| adapt_tpl_struct.test | RUN | 0.226031 | 0.619482 | 0.646062 | 0.001559 | 0.001760 | 0.001324 |
| adapt_tpl_struct_empty.test | RUN | 0.213060 | 0.562834 | 0.564702 | 0.001319 | 0.001692 | 0.001256 |
| adt_attribute_proxy.test | RUN | 0.235144 | 0.546221 | 0.600126 | 0.001756 | 0.001818 | 0.001529 |
| define_struct.test | RUN | 0.275971 | 0.760628 | 0.809262 | 0.001444 | 0.001442 | 0.001437 |
| define_struct_empty.test | RUN | 0.256140 | 0.611683 | 0.670400 | 0.001489 | 0.001575 | 0.001431 |
| define_struct_move.test | RUN | 0.166612 | 0.355609 | 0.390667 | 0.001432 | 0.001698 | 0.001256 |
| define_struct_inline.test | RUN | 0.291063 | 0.883159 | 0.903773 | 0.001087 | 0.001527 | 0.001575 |
| define_struct_inline_empty.test | RUN | 0.244650 | 0.606554 | 0.671022 | 0.001417 | 0.001516 | 0.001121 |
| define_struct_inline_move.test | RUN | 0.156919 | 0.352189 | 0.396590 | 0.001418 | 0.001489 | 0.001478 |
| define_assoc_struct.test | RUN | 0.275700 | 0.709142 | 0.747346 | 0.001623 | 0.001846 | 0.001490 |
| define_assoc_struct_empty.test | RUN | 0.239594 | 0.639200 | 0.664843 | 0.001495 | 0.001739 | 0.001383 |
| define_assoc_struct_move.test | RUN | 0.152308 | 0.351256 | 0.393851 | 0.001420 | 0.001651 | 0.001480 |
| define_tpl_struct.test | RUN | 0.266549 | 0.749717 | 0.761640 | 0.001433 | 0.001722 | 0.001455 |
| define_tpl_struct_empty.test | RUN | 0.250776 | 0.625103 | 0.672421 | 0.001590 | 0.001445 | 0.001463 |
| define_tpl_struct_move.test | RUN | 0.161873 | 0.360417 | 0.391602 | 0.001684 | 0.001454 | 0.001292 |
| define_tpl_struct_inline.test | RUN | 0.280599 | 0.851170 | 0.841697 | 0.001433 | 0.001551 | 0.001508 |
| define_tpl_struct_inline_empty.test | RUN | 0.250805 | 0.650943 | 0.672689 | 0.001534 | 0.001374 | 0.001638 |
| define_tpl_struct_inline_move.test | RUN | 0.163656 | 0.334326 | 0.404028 | 0.001603 | 0.001653 | 0.001443 |
| define_assoc_tpl_struct.test | RUN | 0.286854 | 0.707202 | 0.796368 | 0.001524 | 0.001739 | 0.001595 |
| define_assoc_tpl_struct_empty.test | RUN | 0.255429 | 0.608098 | 0.692676 | 0.001593 | 0.001584 | 0.001348 |
| define_assoc_tpl_struct_move.test | RUN | 0.160518 | 0.352460 | 0.416747 | 0.001365 | 0.001550 | 0.001617 |
| std_tuple.test | RUN | 0.166116 | 0.381914 | 0.459379 | 0.001301 | 0.001441 | 0.001275 |
| std_tuple_iterator.test | RUN | 0.170411 | 0.406167 | 0.477325 | 0.001361 | 0.001706 | 0.001391 |
| ref_vector.test | RUN | 0.187553 | 0.407389 | 0.503427 | 0.001464 | 0.001761 | 0.001684 |
| flatten_view.test | RUN | 0.209368 | 0.501868 | 0.611545 | 0.001706 | 0.001577 | 0.001589 |
| github-159.test | COMPILE | 0.090408 | 0.189166 | 0.228634 | — | — | — |
| github-176.test | RUN | 0.188347 | 0.453212 | 0.501856 | 0.001635 | 0.001662 | 0.001694 |
| size.test | COMPILE | 0.161336 | 0.330317 | 0.387264 | — | — | — |
| fused.test | RUN | 0.220782 | 0.478155 | 0.582173 | 0.001545 | 0.001464 | 0.001472 |
| fused_function_object.test | RUN | 0.166989 | 0.361572 | 0.433455 | 0.001447 | 0.001350 | 0.001280 |
| fused_procedure.test | RUN | 0.214313 | 0.462248 | 0.564660 | 0.001460 | 0.001614 | 0.001418 |
| unfused.test | RUN | 0.173544 | 0.377949 | 0.455786 | 0.001627 | 0.001589 | 0.001546 |
| unfused_typed.test | RUN | 0.173819 | 0.410335 | 0.466906 | 0.001361 | 0.001544 | 0.001320 |
| make_fused.test | RUN | 0.220619 | 0.495939 | 0.552149 | 0.001429 | 0.001562 | 0.001507 |
| make_fused_function_object.test | RUN | 0.164318 | 0.381343 | 0.441608 | 0.001408 | 0.001370 | 0.001668 |
| make_fused_procedure.test | RUN | 0.213572 | 0.472055 | 0.572308 | 0.001473 | 0.001641 | 0.001688 |
| make_unfused.test | RUN | 0.169918 | 0.388355 | 0.466746 | 0.001654 | 0.001724 | 0.001607 |
| invoke.test | RUN | 0.454979 | 1.303362 | 1.548788 | 0.001417 | 0.001684 | 0.001337 |
| invoke_function_object.test | RUN | 0.210608 | 0.490989 | 0.549241 | 0.001691 | 0.001587 | 0.001500 |
| invoke_procedure.test | RUN | 0.369171 | 0.979180 | 1.171719 | 0.001419 | 0.001526 | 0.001796 |
| swap.test | RUN | 0.265195 | 0.578120 | 0.697975 | 0.001390 | 0.001574 | 0.001430 |
| is_sequence.test | COMPILE | 0.043193 | 0.086578 | 0.093900 | — | — | — |
| is_view.test | COMPILE | 0.044330 | 0.087951 | 0.097250 | — | — | — |
| pair_deque.test | COMPILE | 0.092400 | 0.190292 | 0.216272 | — | — | — |
| pair_list.test | COMPILE | 0.091446 | 0.189609 | 0.212706 | — | — | — |
| pair_map.test | COMPILE | 0.094624 | 0.197010 | 0.221825 | — | — | — |
| pair_set.test | COMPILE | 0.097675 | 0.197526 | 0.235720 | — | — | — |
| pair_vector.test | COMPILE | 0.092847 | 0.197926 | 0.226696 | — | — | — |
| pair_nest.test | COMPILE | 0.038589 | 0.079146 | 0.091655 | — | — | — |
| index_sequence.test | COMPILE | 0.032706 | 0.058021 | 0.073037 | — | — | — |
| and.test | COMPILE | 0.026248 | 0.045248 | 0.053005 | — | — | — |
| tag_of.test | COMPILE | 0.042588 | 0.085324 | 0.088427 | — | — | — |
| unused.test | COMPILE | 0.025390 | 0.056774 | 0.060340 | — | — | — |
| tag_of_fallback.test | COMPILE | 0.040617 | 0.082463 | 0.080796 | — | — | — |
| make_pair_r-value.test | COMPILE | 0.034986 | 0.059621 | 0.086139 | — | — | — |
| quick.test | RUN | 0.124738 | 0.280045 | 0.295615 | 0.000554 | 0.001151 | 0.001210 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.991× | 0.967×, 1.015× | 1.000× |
| clang | 0.990× | 1.005×, 0.975× | 1.002× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1364 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43666517673).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| adapt_adt.test | 10 | 0.000886s | 0.000906s | 0.000898s | byte equality observed |
| adapt_adt_empty.test | 10 | 0.000880s | 0.000894s | 0.000867s | byte equality observed |
| adapt_adt_named.test | 10 | 0.000876s | 0.000879s | 0.000894s | byte equality observed |
| adapt_adt_named_empty.test | 10 | 0.000870s | 0.000893s | 0.000889s | byte equality observed |
| adapt_assoc_adt.test | 10 | 0.000874s | 0.000897s | 0.000907s | byte equality observed |
| adapt_assoc_adt_empty.test | 10 | 0.000876s | 0.000887s | 0.000888s | byte equality observed |
| adapt_assoc_adt_named.test | 10 | 0.000880s | 0.000868s | 0.000904s | byte equality observed |
| adapt_assoc_adt_named_empty.test | 10 | 0.000860s | 0.000861s | 0.000883s | byte equality observed |
| adapt_assoc_struct.test | 10 | 0.000893s | 0.000882s | 0.000892s | byte equality observed |
| adapt_assoc_struct_empty.test | 10 | 0.000870s | 0.000865s | 0.000883s | byte equality observed |
| adapt_assoc_struct_named.test | 10 | 0.000889s | 0.000875s | 0.000886s | byte equality observed |
| adapt_assoc_struct_named_empty.test | 10 | 0.000884s | 0.000878s | 0.000899s | byte equality observed |
| adapt_assoc_tpl_adt.test | 10 | 0.000885s | 0.000895s | 0.000896s | byte equality observed |
| adapt_assoc_tpl_adt_empty.test | 10 | 0.000875s | 0.000879s | 0.000875s | byte equality observed |
| adapt_assoc_tpl_struct.test | 10 | 0.000891s | 0.000899s | 0.000885s | byte equality observed |
| adapt_assoc_tpl_struct_empty.test | 10 | 0.000881s | 0.000863s | 0.000876s | byte equality observed |
| adapt_struct.test | 10 | 0.000893s | 0.000889s | 0.000896s | byte equality observed |
| adapt_struct_empty.test | 10 | 0.000883s | 0.000866s | 0.000886s | byte equality observed |
| adapt_struct_named.test | 10 | 0.000877s | 0.000865s | 0.000897s | byte equality observed |
| adapt_struct_named_empty.test | 10 | 0.000884s | 0.000860s | 0.000894s | byte equality observed |
| adapt_tpl_adt.test | 10 | 0.000889s | 0.000874s | 0.000915s | byte equality observed |
| adapt_tpl_adt_empty.test | 10 | 0.000876s | 0.000863s | 0.000884s | byte equality observed |
| adapt_tpl_struct.test | 10 | 0.000879s | 0.000871s | 0.000889s | byte equality observed |
| adapt_tpl_struct_empty.test | 10 | 0.000879s | 0.000849s | 0.000885s | byte equality observed |
| adt_attribute_proxy.test | 10 | 0.000870s | 0.000879s | 0.000888s | byte equality observed |
| all.test | 10 | 0.000874s | 0.000851s | 0.000880s | byte equality observed |
| any.test | 10 | 0.000853s | 0.000870s | 0.000857s | byte equality observed |
| array.test | 7 | 0.000874s | 0.000881s | 0.000876s | byte equality observed |
| as_deque.test | 10 | 0.000862s | 0.000865s | 0.000889s | byte equality observed |
| as_list.test | 10 | 0.000907s | 0.000906s | 0.000912s | byte equality observed |
| as_map.test | 10 | 0.000870s | 0.000887s | 0.000893s | byte equality observed |
| as_map_assoc.test | 10 | 0.000865s | 0.000883s | 0.000904s | byte equality observed |
| as_set.test | 10 | 0.000882s | 0.000902s | 0.000891s | byte equality observed |
| as_vector.test | 10 | 0.000880s | 0.000906s | 0.000916s | byte equality observed |
| back_extended_deque.test | 10 | 0.000860s | 0.000860s | 0.000872s | byte equality observed |
| boost_array.test | 10 | 0.000862s | 0.000870s | 0.000867s | byte equality observed |
| boost_tuple.test | 10 | 0.000885s | 0.000878s | 0.000897s | byte equality observed |
| boost_tuple_iterator.test | 10 | 0.000865s | 0.000872s | 0.000872s | byte equality observed |
| clear.test | 10 | 0.000883s | 0.000865s | 0.000907s | byte equality observed |
| cons.test | 10 | 0.000908s | 0.000887s | 0.000909s | byte equality observed |
| convert_boost_tuple.test | 10 | 0.000880s | 0.000876s | 0.000860s | byte equality observed |
| convert_deque.test | 10 | 0.000883s | 0.000862s | 0.000865s | byte equality observed |
| convert_list.test | 10 | 0.000884s | 0.000869s | 0.000877s | byte equality observed |
| convert_std_pair.test | 10 | 0.000865s | 0.000854s | 0.000875s | byte equality observed |
| convert_std_tuple.test | 10 | 0.000874s | 0.000862s | 0.000865s | byte equality observed |
| convert_vector.test | 10 | 0.000886s | 0.000848s | 0.000882s | byte equality observed |
| copy.test | 10 | 0.000866s | 0.000866s | 0.000869s | byte equality observed |
| count.test | 10 | 0.000871s | 0.000847s | 0.000890s | byte equality observed |
| count_if.test | 10 | 0.000871s | 0.000872s | 0.000881s | byte equality observed |
| deduce_sequence.test | 10 | 0.000873s | 0.000870s | 0.000880s | byte equality observed |
| define_assoc_struct.test | 10 | 0.000906s | 0.000878s | 0.000927s | byte equality observed |
| define_assoc_struct_empty.test | 10 | 0.000884s | 0.000887s | 0.000901s | byte equality observed |
| define_assoc_struct_move.test | 10 | 0.000862s | 0.000846s | 0.000893s | byte equality observed |
| define_assoc_tpl_struct.test | 10 | 0.000906s | 0.000887s | 0.000885s | byte equality observed |
| define_assoc_tpl_struct_empty.test | 10 | 0.000877s | 0.000892s | 0.000894s | byte equality observed |
| define_assoc_tpl_struct_move.test | 10 | 0.000876s | 0.000864s | 0.000882s | byte equality observed |
| define_struct.test | 10 | 0.000900s | 0.000893s | 0.000898s | byte equality observed |
| define_struct_empty.test | 10 | 0.000897s | 0.000874s | 0.000879s | byte equality observed |
| define_struct_inline.test | 10 | 0.000917s | 0.000884s | 0.000890s | byte equality observed |
| define_struct_inline_empty.test | 10 | 0.000883s | 0.000880s | 0.000893s | byte equality observed |
| define_struct_inline_move.test | 10 | 0.000856s | 0.000854s | 0.000871s | byte equality observed |
| define_struct_move.test | 10 | 0.000864s | 0.000864s | 0.000848s | byte equality observed |
| define_tpl_struct.test | 10 | 0.000882s | 0.000894s | 0.000918s | byte equality observed |
| define_tpl_struct_empty.test | 10 | 0.000870s | 0.000890s | 0.000895s | byte equality observed |
| define_tpl_struct_inline.test | 10 | 0.000884s | 0.000899s | 0.000897s | byte equality observed |
| define_tpl_struct_inline_empty.test | 10 | 0.000867s | 0.000870s | 0.000906s | byte equality observed |
| define_tpl_struct_inline_move.test | 10 | 0.000853s | 0.000894s | 0.000896s | byte equality observed |
| define_tpl_struct_move.test | 10 | 0.000858s | 0.000850s | 0.000859s | byte equality observed |
| deque_comparison.test | 10 | 0.000846s | 0.000856s | 0.000891s | byte equality observed |
| deque_construction.test | 10 | 0.000862s | 0.000857s | 0.000886s | byte equality observed |
| deque_copy.test | 10 | 0.000872s | 0.000859s | 0.000877s | byte equality observed |
| deque_hash.test | 10 | 0.000879s | 0.000840s | 0.000883s | byte equality observed |
| deque_iterator.test | 10 | 0.000887s | 0.000846s | 0.000881s | byte equality observed |
| deque_make.test | 10 | 0.000853s | 0.000852s | 0.000901s | byte equality observed |
| deque_misc.test | 10 | 0.000863s | 0.000839s | 0.000876s | byte equality observed |
| deque_move.test | 10 | 0.000877s | 0.000869s | 0.000882s | byte equality observed |
| deque_mutate.test | 10 | 0.000870s | 0.000875s | 0.000900s | byte equality observed |
| deque_nest.test | 10 | 0.000850s | 0.000844s | 0.000891s | byte equality observed |
| deque_tie.test | 10 | 0.000849s | 0.000862s | 0.000906s | byte equality observed |
| deque_value_at.test | 10 | 0.000867s | 0.000867s | 0.000890s | byte equality observed |
| erase.test | 10 | 0.000879s | 0.000869s | 0.000909s | byte equality observed |
| erase_key.test | 10 | 0.000895s | 0.000893s | 0.000908s | byte equality observed |
| filter.test | 10 | 0.000880s | 0.000874s | 0.000875s | byte equality observed |
| filter_if.test | 10 | 0.000887s | 0.000884s | 0.000871s | byte equality observed |
| filter_view.test | 10 | 0.000889s | 0.000863s | 0.000880s | byte equality observed |
| find.test | 10 | 0.000902s | 0.000880s | 0.000886s | byte equality observed |
| find_if.test | 10 | 0.000905s | 0.000881s | 0.000879s | byte equality observed |
| flatten.test | 10 | 0.000869s | 0.000866s | 0.000884s | byte equality observed |
| flatten_view.test | 10 | 0.000880s | 0.000858s | 0.000892s | byte equality observed |
| fold.test | 10 | 0.000892s | 0.000868s | 0.000891s | byte equality observed |
| for_each.test | 10 | 0.000886s | 0.000878s | 0.000896s | byte equality observed |
| front_extended_deque.test | 10 | 0.000867s | 0.000867s | 0.000861s | byte equality observed |
| fused.test | 10 | 0.000855s | 0.000868s | 0.000874s | byte equality observed |
| fused_function_object.test | 10 | 0.000858s | 0.000860s | 0.000849s | byte equality observed |
| fused_procedure.test | 10 | 0.000872s | 0.000858s | 0.000855s | byte equality observed |
| github-176.test | 10 | 0.000857s | 0.000857s | 0.000874s | byte equality observed |
| hash.test | 10 | 0.000851s | 0.000853s | 0.000878s | byte equality observed |
| identity_view.test | 10 | 0.000874s | 0.000877s | 0.000889s | byte equality observed |
| insert.test | 10 | 0.000887s | 0.000886s | 0.000869s | byte equality observed |
| insert_range.test | 10 | 0.000894s | 0.000878s | 0.000891s | byte equality observed |
| invoke.test | 10 | 0.000868s | 0.000838s | 0.000860s | byte equality observed |
| invoke_function_object.test | 10 | 0.000878s | 0.000859s | 0.000852s | byte equality observed |
| invoke_procedure.test | 10 | 0.000872s | 0.000860s | 0.000866s | byte equality observed |
| io.test | 4 | 0.001011s | 0.000982s | 0.000965s | byte equality observed |
| iter_fold.test | 10 | 0.000904s | 0.000856s | 0.000857s | byte equality observed |
| iterator_range.test | 10 | 0.000911s | 0.000875s | 0.000865s | byte equality observed |
| join.test | 10 | 0.000879s | 0.000844s | 0.000860s | byte equality observed |
| joint_view.test | 10 | 0.000947s | 0.000892s | 0.000909s | byte equality observed |
| list_comparison.test | 10 | 0.000891s | 0.000852s | 0.000870s | byte equality observed |
| list_construction.test | 10 | 0.000872s | 0.000849s | 0.000858s | byte equality observed |
| list_copy.test | 10 | 0.000893s | 0.000857s | 0.000868s | byte equality observed |
| list_hash.test | 10 | 0.000883s | 0.000878s | 0.000873s | byte equality observed |
| list_iterator.test | 10 | 0.000883s | 0.000836s | 0.000871s | byte equality observed |
| list_make.test | 10 | 0.000886s | 0.000849s | 0.000856s | byte equality observed |
| list_misc.test | 10 | 0.000897s | 0.000837s | 0.000857s | byte equality observed |
| list_mutate.test | 10 | 0.000870s | 0.000867s | 0.000852s | byte equality observed |
| list_nest.test | 10 | 0.000880s | 0.000849s | 0.000852s | byte equality observed |
| list_tie.test | 10 | 0.000875s | 0.000879s | 0.000840s | byte equality observed |
| list_value_at.test | 10 | 0.000870s | 0.000854s | 0.000851s | byte equality observed |
| make_fused.test | 10 | 0.000870s | 0.000855s | 0.000856s | byte equality observed |
| make_fused_function_object.test | 10 | 0.000868s | 0.000855s | 0.000862s | byte equality observed |
| make_fused_procedure.test | 10 | 0.000882s | 0.000871s | 0.000858s | byte equality observed |
| make_list.test | 10 | 0.000881s | 0.000853s | 0.000861s | byte equality observed |
| make_unfused.test | 10 | 0.000867s | 0.000870s | 0.000840s | byte equality observed |
| make_vector.test | 10 | 0.000874s | 0.000844s | 0.000867s | byte equality observed |
| map.test | 10 | 0.000897s | 0.000877s | 0.000880s | byte equality observed |
| map_comparison.test | 10 | 0.000883s | 0.000849s | 0.000852s | byte equality observed |
| map_construction.test | 10 | 0.000875s | 0.000847s | 0.000850s | byte equality observed |
| map_copy.test | 10 | 0.000877s | 0.000853s | 0.000853s | byte equality observed |
| map_misc.test | 10 | 0.000884s | 0.000855s | 0.000858s | byte equality observed |
| map_move.test | 10 | 0.000884s | 0.000860s | 0.000860s | byte equality observed |
| map_mutate.test | 10 | 0.000860s | 0.000841s | 0.000866s | byte equality observed |
| map_tie.test | 10 | 0.000866s | 0.000836s | 0.000868s | byte equality observed |
| move.test | 10 | 0.000848s | 0.000836s | 0.000829s | byte equality observed |
| nil.test | 10 | 0.000861s | 0.000862s | 0.000838s | byte equality observed |
| none.test | 10 | 0.000855s | 0.000852s | 0.000840s | byte equality observed |
| nview.test | 10 | 0.000857s | 0.000859s | 0.000851s | byte equality observed |
| pop_back.test | 10 | 0.000902s | 0.000875s | 0.000886s | byte equality observed |
| pop_front.test | 10 | 0.000885s | 0.000869s | 0.000900s | byte equality observed |
| push_back.test | 10 | 0.000889s | 0.000871s | 0.000890s | byte equality observed |
| push_front.test | 10 | 0.000905s | 0.000880s | 0.000902s | byte equality observed |
| quick.test | 10 | 0.000391s | 0.000825s | 0.000842s | byte equality observed |
| ref_vector.test | 10 | 0.000890s | 0.000847s | 0.000880s | byte equality observed |
| remove.test | 10 | 0.000908s | 0.000880s | 0.000894s | byte equality observed |
| remove_if.test | 10 | 0.000889s | 0.000890s | 0.000892s | byte equality observed |
| repetitive_view.test | 10 | 0.000864s | 0.000837s | 0.000874s | byte equality observed |
| replace.test | 10 | 0.000885s | 0.000868s | 0.000880s | byte equality observed |
| replace_if.test | 10 | 0.000892s | 0.000877s | 0.000917s | byte equality observed |
| reverse.test | 10 | 0.000907s | 0.000896s | 0.000883s | byte equality observed |
| reverse_fold.test | 10 | 0.000883s | 0.000857s | 0.000867s | byte equality observed |
| reverse_iter_fold.test | 10 | 0.000879s | 0.000864s | 0.000875s | byte equality observed |
| reverse_view.test | 10 | 0.000884s | 0.000868s | 0.000864s | byte equality observed |
| segmented_find.test | 10 | 0.000844s | 0.000850s | 0.000845s | byte equality observed |
| segmented_find_if.test | 10 | 0.000863s | 0.000835s | 0.000858s | byte equality observed |
| segmented_fold.test | 10 | 0.000914s | 0.000860s | 0.000880s | byte equality observed |
| segmented_for_each.test | 10 | 0.000892s | 0.000871s | 0.000874s | byte equality observed |
| segmented_iterator_range.test | 10 | 0.000907s | 0.000884s | 0.000891s | byte equality observed |
| set.test | 10 | 0.000886s | 0.000860s | 0.000875s | byte equality observed |
| single_view.test | 10 | 0.000901s | 0.000881s | 0.000873s | byte equality observed |
| std_array.test | 10 | 0.000849s | 0.000874s | 0.000858s | byte equality observed |
| std_pair.test | 10 | 0.000885s | 0.000885s | 0.000873s | byte equality observed |
| std_tuple.test | 10 | 0.000887s | 0.000867s | 0.000845s | byte equality observed |
| std_tuple_iterator.test | 10 | 0.000875s | 0.000867s | 0.000871s | byte equality observed |
| swap.test | 10 | 0.000862s | 0.000880s | 0.000844s | byte equality observed |
| transform.test | 10 | 0.000885s | 0.000870s | 0.000872s | byte equality observed |
| transform_view.test | 10 | 0.000907s | 0.000898s | 0.000879s | byte equality observed |
| tuple_comparison.test | 10 | 0.000864s | 0.000849s | 0.000849s | byte equality observed |
| tuple_construction.test | 10 | 0.000859s | 0.000850s | 0.000853s | byte equality observed |
| tuple_conversion.test | 10 | 0.000883s | 0.000867s | 0.000849s | byte equality observed |
| tuple_copy.test | 10 | 0.000863s | 0.000863s | 0.000864s | byte equality observed |
| tuple_element.test | 10 | 0.000878s | 0.000870s | 0.000865s | byte equality observed |
| tuple_hash.test | 10 | 0.000861s | 0.000863s | 0.000851s | byte equality observed |
| tuple_make.test | 10 | 0.000884s | 0.000870s | 0.000862s | byte equality observed |
| tuple_misc.test | 10 | 0.000885s | 0.000847s | 0.000857s | byte equality observed |
| tuple_mutate.test | 10 | 0.000883s | 0.000846s | 0.000867s | byte equality observed |
| tuple_nest.test | 10 | 0.000864s | 0.000849s | 0.000844s | byte equality observed |
| tuple_tie.test | 10 | 0.000850s | 0.000840s | 0.000854s | byte equality observed |
| tuple_traits__maybe_variadic.test | 10 | 0.000870s | 0.000855s | 0.000866s | byte equality observed |
| tuple_traits__no_variadic.test | 10 | 0.000864s | 0.000854s | 0.000850s | byte equality observed |
| unfused.test | 10 | 0.000869s | 0.000874s | 0.000859s | byte equality observed |
| unfused_typed.test | 10 | 0.000856s | 0.000851s | 0.000857s | byte equality observed |
| vector_comparison.test | 10 | 0.000866s | 0.000881s | 0.000855s | byte equality observed |
| vector_construction.test | 10 | 0.000883s | 0.000868s | 0.000851s | byte equality observed |
| vector_conversion.test | 10 | 0.000846s | 0.000856s | 0.000863s | byte equality observed |
| vector_copy.test | 10 | 0.000867s | 0.000865s | 0.000849s | byte equality observed |
| vector_hash.test | 10 | 0.000857s | 0.000870s | 0.000850s | byte equality observed |
| vector_iterator.test | 10 | 0.000872s | 0.000854s | 0.000842s | byte equality observed |
| vector_make.test | 10 | 0.000865s | 0.000862s | 0.000830s | byte equality observed |
| vector_misc.test | 10 | 0.000873s | 0.000850s | 0.000829s | byte equality observed |
| vector_move.test | 10 | 0.000880s | 0.000882s | 0.000864s | byte equality observed |
| vector_mutate.test | 10 | 0.000864s | 0.000835s | 0.000846s | byte equality observed |
| vector_n.test | 10 | 0.000879s | 0.000865s | 0.000893s | byte equality observed |
| vector_nest.test | 10 | 0.000857s | 0.000840s | 0.000850s | byte equality observed |
| vector_tie.test | 10 | 0.000852s | 0.000853s | 0.000851s | byte equality observed |
| vector_traits__maybe_variadic.test | 10 | 0.000867s | 0.000857s | 0.000857s | byte equality observed |
| vector_traits__no_variadic.test | 10 | 0.000867s | 0.000842s | 0.000848s | byte equality observed |
| vector_value_at.test | 10 | 0.000876s | 0.000855s | 0.000840s | byte equality observed |
| zip.test | 10 | 0.000849s | 0.000848s | 0.000849s | byte equality observed |
| zip2.test | 10 | 0.000851s | 0.000840s | 0.000846s | byte equality observed |
| zip_ignore.test | 10 | 0.000850s | 0.000846s | 0.000852s | byte equality observed |
| zip_view.test | 10 | 0.000850s | 0.000843s | 0.000852s | byte equality observed |
| zip_view2.test | 10 | 0.000868s | 0.000852s | 0.000837s | byte equality observed |
| zip_view_ignore.test | 10 | 0.000853s | 0.000844s | 0.000840s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43666517673).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
