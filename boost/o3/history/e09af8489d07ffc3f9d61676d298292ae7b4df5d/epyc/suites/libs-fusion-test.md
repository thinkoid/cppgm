# libs/fusion/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| all.test | RUN | 0.302991 | 0.585943 | 0.731000 | 0.001377 | 0.001391 | 0.001510 |
| any.test | RUN | 0.299664 | 0.537833 | 0.692940 | 0.001765 | 0.001438 | 0.001547 |
| clear.test | RUN | 0.209406 | 0.505196 | 0.574124 | 0.001624 | 0.001610 | 0.001667 |
| copy.test | RUN | 0.176428 | 0.369421 | 0.467235 | 0.001568 | 0.001744 | 0.001546 |
| count.test | RUN | 0.201474 | 0.404437 | 0.510240 | 0.001776 | 0.001612 | 0.001728 |
| count_if.test | RUN | 0.189561 | 0.377748 | 0.478714 | 0.001542 | 0.001928 | 0.001652 |
| erase.test | RUN | 0.275538 | 0.671998 | 0.787259 | 0.001711 | 0.001760 | 0.001185 |
| erase_key.test | RUN | 0.267821 | 0.670887 | 0.741129 | 0.001676 | 0.001564 | 0.001624 |
| filter.test | RUN | 0.232341 | 0.569787 | 0.674243 | 0.001449 | 0.001751 | 0.001772 |
| filter_if.test | RUN | 0.265198 | 0.658774 | 0.793919 | 0.001569 | 0.001522 | 0.001679 |
| find.test | RUN | 0.220083 | 0.458720 | 0.595643 | 0.001684 | 0.001608 | 0.001380 |
| find_if.test | RUN | 0.210546 | 0.434347 | 0.555474 | 0.001755 | 0.001337 | 0.001550 |
| fold.test | RUN | 0.230545 | 0.527720 | 0.673669 | 0.001431 | 0.001829 | 0.001480 |
| for_each.test | RUN | 0.208708 | 0.497437 | 0.579063 | 0.001852 | 0.001789 | 0.001460 |
| insert.test | RUN | 0.307212 | 0.829488 | 0.947569 | 0.001566 | 0.001590 | 0.001536 |
| insert_range.test | RUN | 0.304130 | 0.832929 | 0.939351 | 0.001806 | 0.001507 | 0.001413 |
| iter_fold.test | RUN | 0.370586 | 0.813311 | 1.102182 | 0.001765 | 0.001778 | 0.001785 |
| move.test | RUN | 0.182502 | 0.388238 | 0.476055 | 0.001772 | 0.001678 | 0.001722 |
| none.test | RUN | 0.307798 | 0.547209 | 0.729192 | 0.001466 | 0.001674 | 0.001521 |
| pop_back.test | RUN | 0.291765 | 0.727641 | 0.845377 | 0.001611 | 0.001529 | 0.001717 |
| pop_front.test | RUN | 0.244802 | 0.601354 | 0.695295 | 0.001743 | 0.001546 | 0.001474 |
| push_back.test | RUN | 0.297997 | 0.839962 | 0.976050 | 0.001886 | 0.001785 | 0.001795 |
| push_front.test | RUN | 0.260258 | 0.699176 | 0.800784 | 0.001756 | 0.001718 | 0.001538 |
| remove.test | RUN | 0.291227 | 0.801880 | 0.935670 | 0.001486 | 0.001668 | 0.001701 |
| remove_if.test | RUN | 0.264677 | 0.685536 | 0.815705 | 0.001642 | 0.001639 | 0.001772 |
| replace.test | RUN | 0.252179 | 0.652507 | 0.736438 | 0.001887 | 0.001736 | 0.001518 |
| replace_if.test | RUN | 0.252912 | 0.618464 | 0.743961 | 0.001984 | 0.001774 | 0.001860 |
| reverse_fold.test | RUN | 0.397402 | 0.879170 | 1.253704 | 0.001715 | 0.001680 | 0.001778 |
| reverse_iter_fold.test | RUN | 0.416335 | 0.920960 | 1.348959 | 0.001635 | 0.003843 | 0.001523 |
| reverse.test | RUN | 0.248829 | 0.671602 | 0.756022 | 0.001802 | 0.001744 | 0.001410 |
| segmented_for_each.test | RUN | 0.440327 | 1.293855 | 1.508030 | 0.001830 | 0.001592 | 0.001279 |
| segmented_find.test | RUN | 0.267290 | 0.699408 | 0.839146 | 0.001488 | 0.001439 | 0.001694 |
| segmented_find_if.test | RUN | 0.269199 | 0.647925 | 0.823834 | 0.001696 | 0.001384 | 0.001723 |
| segmented_fold.test | RUN | 0.329739 | 0.871530 | 1.057017 | 0.001850 | 0.001829 | 0.001717 |
| transform.test | RUN | 0.250527 | 0.702554 | 0.766343 | 0.001721 | 0.001721 | 0.001651 |
| join.test | RUN | 0.192847 | 0.430646 | 0.537771 | 0.001691 | 0.001721 | 0.001654 |
| zip.test | RUN | 0.340854 | 0.798655 | 1.010103 | 0.001760 | 0.001983 | 0.001614 |
| zip2.test | RUN | 0.340959 | 0.775648 | 0.986006 | 0.001740 | 0.001511 | 0.001423 |
| zip_ignore.test | RUN | 0.257867 | 0.527134 | 0.650517 | 0.001448 | 0.001388 | 0.001286 |
| flatten.test | RUN | 0.238562 | 0.583730 | 0.671252 | 0.001492 | 0.001770 | 0.001506 |
| ticket-5490.test | COMPILE | 0.127043 | 0.253151 | 0.311769 | — | — | — |
| as_deque.test | RUN | 0.235850 | 0.546557 | 0.721327 | 0.001687 | 0.003610 | 0.001222 |
| as_list.test | RUN | 0.259110 | 0.674981 | 0.790176 | 0.001548 | 0.001677 | 0.001523 |
| as_map.test | RUN | 0.257527 | 0.673479 | 0.781683 | 0.001536 | 0.001486 | 0.001591 |
| as_map_assoc.test | RUN | 0.260863 | 0.655522 | 0.739143 | 0.001657 | 0.001753 | 0.001366 |
| as_set.test | RUN | 0.300481 | 0.792270 | 0.909763 | 0.001338 | 0.001413 | 0.001366 |
| as_vector.test | RUN | 0.267086 | 0.702987 | 0.800367 | 0.001400 | 0.001440 | 0.001479 |
| boost_tuple.test | RUN | 0.260877 | 0.702246 | 0.756039 | 0.001316 | 0.001491 | 0.001598 |
| boost_tuple_iterator.test | RUN | 0.182250 | 0.424310 | 0.463971 | 0.001536 | 0.001431 | 0.001533 |
| cons.test | RUN | 0.344871 | 0.795784 | 0.920772 | 0.001817 | 0.001648 | 0.001404 |
| convert_boost_tuple.test | RUN | 0.209344 | 0.594082 | 0.610752 | 0.001568 | 0.001547 | 0.001252 |
| convert_deque.test | RUN | 0.211517 | 0.590704 | 0.606637 | 0.001471 | 0.001472 | 0.001468 |
| convert_list.test | RUN | 0.208169 | 0.605044 | 0.613461 | 0.001478 | 0.001581 | 0.001375 |
| convert_std_pair.test | RUN | 0.223735 | 0.595389 | 0.625413 | 0.001181 | 0.001778 | 0.001151 |
| convert_std_tuple.test | RUN | 0.214574 | 0.591955 | 0.600271 | 0.001810 | 0.001900 | 0.001494 |
| convert_vector.test | RUN | 0.210745 | 0.607459 | 0.602880 | 0.001294 | 0.001566 | 0.001620 |
| filter_view.test | RUN | 0.270236 | 0.665205 | 0.724304 | 0.001736 | 0.001802 | 0.001632 |
| hash.test | RUN | 0.261701 | 0.570835 | 0.692266 | 0.001431 | 0.001736 | 0.001439 |
| io.test | RUN | 0.264784 | 0.813798 | 0.811499 | 0.001697 | 0.001932 | 0.001508 |
| iterator_range.test | RUN | 0.245131 | 0.605679 | 0.680831 | 0.001574 | 0.001516 | 0.001437 |
| joint_view.test | RUN | 0.334794 | 1.011390 | 1.050224 | 0.001918 | 0.001490 | 0.001436 |
| list_comparison.test | RUN | 0.186772 | 0.438469 | 0.522286 | 0.001620 | 0.001669 | 0.001573 |
| list_construction.test | RUN | 0.183404 | 0.392910 | 0.489038 | 0.001423 | 0.001464 | 0.001423 |
| list_copy.test | RUN | 0.274385 | 0.732508 | 0.847236 | 0.001723 | 0.001809 | 0.001588 |
| list_iterator.test | RUN | 0.186960 | 0.395935 | 0.461352 | 0.001824 | 0.001495 | 0.001591 |
| list_hash.test | RUN | 0.251266 | 0.787291 | 0.694478 | 0.001533 | 0.001676 | 0.001558 |
| list_make.test | RUN | 0.196709 | 0.451616 | 0.527305 | 0.001725 | 0.001600 | 0.001534 |
| list_misc.test | RUN | 0.252233 | 0.518571 | 0.627997 | 0.001806 | 0.001782 | 0.001256 |
| list_mutate.test | RUN | 0.178254 | 0.353107 | 0.436203 | 0.001562 | 0.001734 | 0.001390 |
| list_nest.test | RUN | 0.336669 | 1.013689 | 1.183838 | 0.001672 | 0.001487 | 0.001658 |
| list_tie.test | RUN | 0.189064 | 0.393481 | 0.502541 | 0.001492 | 0.001677 | 0.001646 |
| list_value_at.test | RUN | 0.181815 | 0.395604 | 0.462369 | 0.001626 | 0.001582 | 0.001478 |
| deque_comparison.test | RUN | 0.188752 | 0.418391 | 0.490212 | 0.001414 | 0.001666 | 0.001324 |
| deque_construction.test | RUN | 0.192656 | 0.395974 | 0.515643 | 0.001701 | 0.001686 | 0.001533 |
| deque_copy.test | RUN | 0.263661 | 0.675311 | 0.765096 | 0.001587 | 0.001440 | 0.001603 |
| deque_iterator.test | RUN | 0.182725 | 0.431782 | 0.482293 | 0.001641 | 0.001480 | 0.001514 |
| deque_hash.test | RUN | 0.258743 | 0.737706 | 0.674992 | 0.001571 | 0.001812 | 0.001564 |
| deque_is_constructible.test | COMPILE | 0.097924 | 0.187872 | 0.224862 | — | — | — |
| deque_make.test | RUN | 0.187392 | 0.437207 | 0.489975 | 0.001546 | 0.001521 | 0.001596 |
| deque_misc.test | RUN | 0.244419 | 0.531875 | 0.615230 | 0.001522 | 0.001479 | 0.001472 |
| deque_move.test | RUN | 0.188846 | 0.439044 | 0.481074 | 0.001873 | 0.001531 | 0.001554 |
| deque_mutate.test | RUN | 0.176578 | 0.363604 | 0.430591 | 0.001241 | 0.001632 | 0.001567 |
| deque_nest.test | RUN | 0.519599 | 1.581222 | 1.944905 | 0.001748 | 0.001615 | 0.001480 |
| deque_tie.test | RUN | 0.178463 | 0.358313 | 0.444705 | 0.001612 | 0.001644 | 0.001613 |
| deque_value_at.test | RUN | 0.184952 | 0.368203 | 0.436250 | 0.001460 | 0.001400 | 0.001596 |
| front_extended_deque.test | RUN | 0.265147 | 0.546467 | 0.697232 | 0.001673 | 0.001798 | 0.001739 |
| back_extended_deque.test | RUN | 0.250394 | 0.546077 | 0.666060 | 0.001476 | 0.001623 | 0.001414 |
| make_list.test | RUN | 0.195808 | 0.443580 | 0.535540 | 0.001494 | 0.001484 | 0.001572 |
| make_vector.test | RUN | 0.193322 | 0.454036 | 0.567218 | 0.001466 | 0.001661 | 0.001419 |
| map.test | RUN | 0.254470 | 0.648834 | 0.734293 | 0.001630 | 0.001754 | 0.001583 |
| map_comparison.test | RUN | 0.190787 | 0.421623 | 0.512394 | 0.001823 | 0.001752 | 0.001626 |
| map_construction.test | RUN | 0.193938 | 0.412896 | 0.499523 | 0.001425 | 0.001904 | 0.001478 |
| map_copy.test | RUN | 0.236300 | 0.545709 | 0.605323 | 0.001563 | 0.001662 | 0.001562 |
| map_misc.test | RUN | 0.253019 | 0.540969 | 0.618843 | 0.001492 | 0.001531 | 0.001624 |
| map_move.test | RUN | 0.193598 | 0.462943 | 0.496421 | 0.001462 | 0.001697 | 0.001323 |
| map_mutate.test | RUN | 0.174339 | 0.357576 | 0.426361 | 0.001501 | 0.001418 | 0.001535 |
| map_tie.test | RUN | 0.183894 | 0.354216 | 0.439760 | 0.001784 | 0.001485 | 0.001555 |
| nil.test | RUN | 0.124143 | 0.247446 | 0.309011 | 0.001818 | 0.001831 | 0.001494 |
| nview.test | RUN | 0.240366 | 0.519696 | 0.623228 | 0.001739 | 0.001772 | 0.001533 |
| reverse_view.test | RUN | 0.312347 | 0.878430 | 0.938311 | 0.001776 | 0.001698 | 0.001505 |
| segmented_iterator_range.test | RUN | 0.373768 | 1.032919 | 1.200082 | 0.001738 | 0.001440 | 0.001739 |
| set.test | RUN | 0.247956 | 0.621686 | 0.641852 | 0.001777 | 0.001507 | 0.001680 |
| single_view.test | RUN | 0.259477 | 0.555458 | 0.597921 | 0.001814 | 0.001558 | 0.001678 |
| std_pair.test | RUN | 0.302242 | 0.690872 | 0.803717 | 0.001632 | 0.001656 | 0.001634 |
| boost_array.test | RUN | 0.237981 | 0.491068 | 0.586553 | 0.001624 | 0.001515 | 0.001553 |
| array.test | RUN | 0.231541 | 0.476184 | 0.554203 | 0.001509 | 0.001607 | 0.001414 |
| std_array.test | RUN | 0.231431 | 0.478456 | 0.609771 | 0.001760 | 0.001588 | 0.001564 |
| tuple_comparison.test | RUN | 0.205110 | 0.451688 | 0.575097 | 0.001586 | 0.001559 | 0.001492 |
| tuple_construction.test | RUN | 0.210158 | 0.463432 | 0.533729 | 0.001796 | 0.001718 | 0.001547 |
| tuple_conversion.test | RUN | 0.450581 | 1.401500 | 1.759663 | 0.001832 | 0.001485 | 0.001533 |
| tuple_copy.test | RUN | 0.297832 | 0.811733 | 0.928477 | 0.001724 | 0.001268 | 0.001409 |
| tuple_element.test | RUN | 0.192125 | 0.395811 | 0.471546 | 0.001372 | 0.001734 | 0.001334 |
| tuple_make.test | RUN | 0.216930 | 0.469706 | 0.536575 | 0.001800 | 0.001750 | 0.001543 |
| tuple_misc.test | RUN | 0.265737 | 0.577524 | 0.666183 | 0.002145 | 0.001768 | 0.001339 |
| tuple_mutate.test | RUN | 0.191545 | 0.400245 | 0.457249 | 0.001884 | 0.001370 | 0.001481 |
| tuple_nest.test | RUN | 0.767264 | 2.884907 | 3.267142 | 0.001587 | 0.001648 | 0.001570 |
| tuple_hash.test | RUN | 0.280839 | 0.773601 | 0.688321 | 0.001924 | 0.001344 | 0.001426 |
| tuple_tie.test | RUN | 0.198717 | 0.411641 | 0.496135 | 0.001836 | 0.001612 | 0.001427 |
| tuple_traits__maybe_variadic.test | RUN | 0.221145 | 0.506937 | 0.553970 | 0.001522 | 0.001638 | 0.001455 |
| tuple_traits__no_variadic.test | RUN | 0.243506 | 0.525628 | 0.573088 | 0.002104 | 0.001781 | 0.001704 |
| transform_view.test | RUN | 0.325837 | 0.852408 | 0.922206 | 0.001960 | 0.001639 | 0.001551 |
| identity_view.test | RUN | 0.302931 | 0.803506 | 0.863245 | 0.001504 | 0.001307 | 0.001593 |
| vector_comparison.test | RUN | 0.193430 | 0.435522 | 0.495469 | 0.001789 | 0.001364 | 0.001651 |
| vector_construction.test | RUN | 0.203287 | 0.419967 | 0.499396 | 0.001749 | 0.001542 | 0.001622 |
| vector_conversion.test | RUN | 0.526629 | 1.799761 | 2.215395 | 0.001798 | 0.001493 | 0.001553 |
| vector_copy.test | RUN | 0.288727 | 0.784739 | 0.941415 | 0.001735 | 0.001716 | 0.001465 |
| vector_iterator.test | RUN | 0.185515 | 0.420762 | 0.460470 | 0.001293 | 0.001639 | 0.001698 |
| vector_make.test | RUN | 0.204026 | 0.442906 | 0.497417 | 0.001614 | 0.001666 | 0.001616 |
| vector_misc.test | RUN | 0.259048 | 0.580992 | 0.680920 | 0.001776 | 0.001846 | 0.001602 |
| vector_move.test | RUN | 0.200156 | 0.448827 | 0.489311 | 0.001561 | 0.001835 | 0.001688 |
| vector_mutate.test | RUN | 0.176494 | 0.375503 | 0.427584 | 0.001447 | 0.001641 | 0.001010 |
| vector_n.test | RUN | 0.229885 | 0.483556 | 0.566542 | 0.001892 | 0.001900 | 0.001630 |
| vector_nest.test | RUN | 0.802042 | 3.049483 | 3.326802 | 0.001880 | 0.001558 | 0.001494 |
| vector_hash.test | RUN | 0.279580 | 0.793295 | 0.660104 | 0.001681 | 0.001774 | 0.001489 |
| vector_tie.test | RUN | 0.207658 | 0.411561 | 0.485379 | 0.001918 | 0.001632 | 0.001268 |
| vector_traits__maybe_variadic.test | RUN | 0.205777 | 0.493059 | 0.508972 | 0.001844 | 0.001660 | 0.001595 |
| vector_traits__no_variadic.test | RUN | 0.225688 | 0.488328 | 0.529109 | 0.002093 | 0.001734 | 0.001607 |
| vector_value_at.test | RUN | 0.181915 | 0.378056 | 0.459108 | 0.001916 | 0.001698 | 0.001507 |
| zip_view.test | RUN | 0.392693 | 0.872046 | 1.133837 | 0.001690 | 0.001701 | 0.001254 |
| zip_view2.test | RUN | 0.309898 | 0.663077 | 0.859579 | 0.001483 | 0.001557 | 0.001238 |
| zip_view_ignore.test | RUN | 0.282675 | 0.612336 | 0.769797 | 0.001558 | 0.001434 | 0.001525 |
| repetitive_view.test | RUN | 0.494412 | 1.177275 | 1.556907 | 0.001786 | 0.001752 | 0.001636 |
| deduce_sequence.test | RUN | 0.235251 | 0.494917 | 0.590865 | 0.001464 | 0.001625 | 0.001529 |
| adapt_adt_named.test | RUN | 0.274350 | 0.737218 | 0.751926 | 0.001486 | 0.002222 | 0.001596 |
| adapt_adt_named_empty.test | RUN | 0.239631 | 0.563855 | 0.628766 | 0.001768 | 0.001856 | 0.001510 |
| adapt_adt.test | RUN | 0.307032 | 0.969584 | 0.881253 | 0.001490 | 0.001896 | 0.001638 |
| adapt_adt_empty.test | RUN | 0.236356 | 0.572899 | 0.628171 | 0.001614 | 0.001889 | 0.001514 |
| adapt_assoc_adt_named.test | RUN | 0.304367 | 0.764474 | 0.820418 | 0.002088 | 0.001845 | 0.001440 |
| adapt_assoc_adt_named_empty.test | RUN | 0.240012 | 0.597115 | 0.634104 | 0.001754 | 0.001508 | 0.001796 |
| adapt_assoc_adt.test | RUN | 0.308524 | 0.776106 | 0.858382 | 0.001504 | 0.001797 | 0.001598 |
| adapt_assoc_adt_empty.test | RUN | 0.235756 | 0.557099 | 0.621590 | 0.001798 | 0.001657 | 0.001532 |
| adapt_assoc_struct_named.test | RUN | 0.294116 | 0.727728 | 0.813672 | 0.001408 | 0.001806 | 0.001754 |
| adapt_assoc_struct_named_empty.test | RUN | 0.233637 | 0.579206 | 0.627865 | 0.001682 | 0.001620 | 0.001537 |
| adapt_assoc_struct.test | RUN | 0.265176 | 0.680238 | 0.755289 | 0.001858 | 0.001847 | 0.001690 |
| adapt_assoc_struct_empty.test | RUN | 0.229867 | 0.553600 | 0.644427 | 0.001576 | 0.001630 | 0.001327 |
| adapt_assoc_tpl_adt.test | RUN | 0.311283 | 0.774248 | 0.900636 | 0.001806 | 0.001692 | 0.001526 |
| adapt_assoc_tpl_adt_empty.test | RUN | 0.231912 | 0.571700 | 0.632758 | 0.001748 | 0.001639 | 0.001650 |
| adapt_assoc_tpl_struct.test | RUN | 0.261528 | 0.664737 | 0.739706 | 0.001553 | 0.001639 | 0.003444 |
| adapt_assoc_tpl_struct_empty.test | RUN | 0.231481 | 0.557954 | 0.644197 | 0.001823 | 0.001812 | 0.001397 |
| adapt_struct_named.test | RUN | 0.270323 | 0.703554 | 0.771798 | 0.001619 | 0.001587 | 0.001658 |
| adapt_struct_named_empty.test | RUN | 0.238800 | 0.569854 | 0.661257 | 0.001544 | 0.001850 | 0.001660 |
| adapt_struct.test | RUN | 0.287480 | 0.783694 | 0.917034 | 0.001628 | 0.001828 | 0.001567 |
| adapt_struct_empty.test | RUN | 0.232461 | 0.570748 | 0.666806 | 0.001485 | 0.001835 | 0.001632 |
| adapt_tpl_adt.test | RUN | 0.294448 | 0.895796 | 0.891644 | 0.001572 | 0.001604 | 0.001456 |
| adapt_tpl_adt_empty.test | RUN | 0.238629 | 0.582134 | 0.634267 | 0.001730 | 0.001767 | 0.001593 |
| adapt_tpl_struct.test | RUN | 0.253798 | 0.630312 | 0.711707 | 0.001794 | 0.001780 | 0.001524 |
| adapt_tpl_struct_empty.test | RUN | 0.234319 | 0.581005 | 0.635246 | 0.001667 | 0.001666 | 0.001519 |
| adt_attribute_proxy.test | RUN | 0.260094 | 0.540159 | 0.671358 | 0.001730 | 0.001734 | 0.001413 |
| define_struct.test | RUN | 0.314887 | 0.771965 | 0.896822 | 0.001725 | 0.001507 | 0.001743 |
| define_struct_empty.test | RUN | 0.280528 | 0.619590 | 0.730862 | 0.001867 | 0.001590 | 0.001476 |
| define_struct_move.test | RUN | 0.175389 | 0.351555 | 0.422499 | 0.001659 | 0.001552 | 0.001349 |
| define_struct_inline.test | RUN | 0.333982 | 0.898139 | 1.001068 | 0.001743 | 0.001875 | 0.001836 |
| define_struct_inline_empty.test | RUN | 0.276969 | 0.611741 | 0.750770 | 0.001490 | 0.001465 | 0.002079 |
| define_struct_inline_move.test | RUN | 0.181834 | 0.349060 | 0.452395 | 0.001473 | 0.001442 | 0.001648 |
| define_assoc_struct.test | RUN | 0.301594 | 0.744525 | 0.847342 | 0.001680 | 0.001653 | 0.001780 |
| define_assoc_struct_empty.test | RUN | 0.277560 | 0.631157 | 0.743646 | 0.001452 | 0.001645 | 0.001700 |
| define_assoc_struct_move.test | RUN | 0.180322 | 0.357608 | 0.441284 | 0.001528 | 0.001762 | 0.001686 |
| define_tpl_struct.test | RUN | 0.307813 | 0.733740 | 0.876520 | 0.001659 | 0.001670 | 0.001346 |
| define_tpl_struct_empty.test | RUN | 0.282088 | 0.656769 | 0.748246 | 0.001678 | 0.001523 | 0.001760 |
| define_tpl_struct_move.test | RUN | 0.182906 | 0.349680 | 0.457590 | 0.001548 | 0.001690 | 0.001526 |
| define_tpl_struct_inline.test | RUN | 0.324166 | 0.852090 | 0.955858 | 0.001777 | 0.001554 | 0.001574 |
| define_tpl_struct_inline_empty.test | RUN | 0.284670 | 0.622046 | 0.751946 | 0.001453 | 0.001615 | 0.001902 |
| define_tpl_struct_inline_move.test | RUN | 0.181103 | 0.371259 | 0.469205 | 0.001758 | 0.001510 | 0.001761 |
| define_assoc_tpl_struct.test | RUN | 0.314695 | 0.762997 | 0.878331 | 0.001620 | 0.001817 | 0.001811 |
| define_assoc_tpl_struct_empty.test | RUN | 0.286286 | 0.629284 | 0.750693 | 0.001702 | 0.001468 | 0.001815 |
| define_assoc_tpl_struct_move.test | RUN | 0.181876 | 0.364541 | 0.472846 | 0.001783 | 0.001604 | 0.001710 |
| std_tuple.test | RUN | 0.196216 | 0.396272 | 0.499874 | 0.001794 | 0.001401 | 0.001567 |
| std_tuple_iterator.test | RUN | 0.193156 | 0.417612 | 0.500568 | 0.001756 | 0.001719 | 0.001708 |
| ref_vector.test | RUN | 0.208444 | 0.424373 | 0.504704 | 0.001770 | 0.001757 | 0.001777 |
| flatten_view.test | RUN | 0.228117 | 0.512474 | 0.636128 | 0.001594 | 0.001722 | 0.001542 |
| github-159.test | COMPILE | 0.101091 | 0.196315 | 0.232365 | — | — | — |
| github-176.test | RUN | 0.213179 | 0.464127 | 0.545380 | 0.001774 | 0.001818 | 0.001739 |
| size.test | COMPILE | 0.179717 | 0.326959 | 0.410746 | — | — | — |
| fused.test | RUN | 0.249001 | 0.501248 | 0.620259 | 0.001528 | 0.001625 | 0.001640 |
| fused_function_object.test | RUN | 0.187588 | 0.378167 | 0.472209 | 0.001645 | 0.001312 | 0.001542 |
| fused_procedure.test | RUN | 0.245206 | 0.479006 | 0.577064 | 0.001605 | 0.001594 | 0.001536 |
| unfused.test | RUN | 0.197646 | 0.385849 | 0.475421 | 0.001709 | 0.001734 | 0.001453 |
| unfused_typed.test | RUN | 0.190211 | 0.414815 | 0.506549 | 0.001610 | 0.001546 | 0.001592 |
| make_fused.test | RUN | 0.252569 | 0.487347 | 0.598943 | 0.001923 | 0.001199 | 0.001311 |
| make_fused_function_object.test | RUN | 0.193612 | 0.381278 | 0.461373 | 0.001548 | 0.001491 | 0.001525 |
| make_fused_procedure.test | RUN | 0.242628 | 0.473456 | 0.569440 | 0.001840 | 0.001779 | 0.001602 |
| make_unfused.test | RUN | 0.205980 | 0.385780 | 0.469404 | 0.001824 | 0.001624 | 0.001638 |
| invoke.test | RUN | 0.505943 | 1.354851 | 1.709425 | 0.001835 | 0.001455 | 0.001681 |
| invoke_function_object.test | RUN | 0.229821 | 0.476825 | 0.592814 | 0.003206 | 0.001644 | 0.001717 |
| invoke_procedure.test | RUN | 0.393778 | 0.995300 | 1.270408 | 0.001610 | 0.001431 | 0.001771 |
| swap.test | RUN | 0.300430 | 0.605487 | 0.818893 | 0.001460 | 0.001454 | 0.001794 |
| is_sequence.test | COMPILE | 0.048839 | 0.086266 | 0.105857 | — | — | — |
| is_view.test | COMPILE | 0.049285 | 0.093120 | 0.111841 | — | — | — |
| pair_deque.test | COMPILE | 0.103455 | 0.199477 | 0.264371 | — | — | — |
| pair_list.test | COMPILE | 0.100588 | 0.197417 | 0.277914 | — | — | — |
| pair_map.test | COMPILE | 0.107597 | 0.200592 | 0.248696 | — | — | — |
| pair_set.test | COMPILE | 0.132695 | 0.198733 | 0.286811 | — | — | — |
| pair_vector.test | COMPILE | 0.121508 | 0.203409 | 0.283636 | — | — | — |
| pair_nest.test | COMPILE | 0.045411 | 0.083201 | 0.122350 | — | — | — |
| index_sequence.test | COMPILE | 0.038386 | 0.061300 | 0.098271 | — | — | — |
| and.test | COMPILE | 0.027908 | 0.047169 | 0.066336 | — | — | — |
| tag_of.test | COMPILE | 0.048328 | 0.087520 | 0.101604 | — | — | — |
| unused.test | COMPILE | 0.026871 | 0.057827 | 0.068229 | — | — | — |
| tag_of_fallback.test | COMPILE | 0.046365 | 0.087436 | 0.097701 | — | — | — |
| make_pair_r-value.test | COMPILE | 0.033042 | 0.057945 | 0.064644 | — | — | — |
| quick.test | RUN | 0.137630 | 0.292826 | 0.302814 | 0.000549 | 0.001184 | 0.001068 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.999× | 0.995×, 1.003× | 1.017× |
| clang | 0.994× | 0.987×, 1.002× | 1.002× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1363 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43624536445).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| adapt_adt.test | 10 | 0.000927s | 0.000923s | 0.000925s | byte equality observed |
| adapt_adt_empty.test | 10 | 0.000906s | 0.000920s | 0.000889s | byte equality observed |
| adapt_adt_named.test | 10 | 0.000924s | 0.000927s | 0.000905s | byte equality observed |
| adapt_adt_named_empty.test | 10 | 0.000916s | 0.000928s | 0.000915s | byte equality observed |
| adapt_assoc_adt.test | 10 | 0.000918s | 0.000929s | 0.000915s | byte equality observed |
| adapt_assoc_adt_empty.test | 10 | 0.000907s | 0.000909s | 0.000915s | byte equality observed |
| adapt_assoc_adt_named.test | 10 | 0.000920s | 0.000899s | 0.000926s | byte equality observed |
| adapt_assoc_adt_named_empty.test | 10 | 0.000913s | 0.000915s | 0.000903s | byte equality observed |
| adapt_assoc_struct.test | 10 | 0.000929s | 0.000906s | 0.000892s | byte equality observed |
| adapt_assoc_struct_empty.test | 10 | 0.000907s | 0.000911s | 0.000891s | byte equality observed |
| adapt_assoc_struct_named.test | 10 | 0.000927s | 0.000920s | 0.000890s | byte equality observed |
| adapt_assoc_struct_named_empty.test | 10 | 0.000938s | 0.000917s | 0.000903s | byte equality observed |
| adapt_assoc_tpl_adt.test | 10 | 0.000936s | 0.000927s | 0.000893s | byte equality observed |
| adapt_assoc_tpl_adt_empty.test | 10 | 0.000932s | 0.000927s | 0.000889s | byte equality observed |
| adapt_assoc_tpl_struct.test | 10 | 0.000947s | 0.000951s | 0.000903s | byte equality observed |
| adapt_assoc_tpl_struct_empty.test | 10 | 0.000914s | 0.000912s | 0.000900s | byte equality observed |
| adapt_struct.test | 10 | 0.000952s | 0.000915s | 0.000915s | byte equality observed |
| adapt_struct_empty.test | 10 | 0.000929s | 0.000911s | 0.000893s | byte equality observed |
| adapt_struct_named.test | 10 | 0.000950s | 0.000906s | 0.000928s | byte equality observed |
| adapt_struct_named_empty.test | 10 | 0.000927s | 0.000916s | 0.000900s | byte equality observed |
| adapt_tpl_adt.test | 10 | 0.000939s | 0.000910s | 0.000910s | byte equality observed |
| adapt_tpl_adt_empty.test | 10 | 0.000928s | 0.000913s | 0.000911s | byte equality observed |
| adapt_tpl_struct.test | 10 | 0.000931s | 0.000902s | 0.000936s | byte equality observed |
| adapt_tpl_struct_empty.test | 10 | 0.000931s | 0.000917s | 0.000940s | byte equality observed |
| adt_attribute_proxy.test | 10 | 0.000910s | 0.000905s | 0.000911s | byte equality observed |
| all.test | 10 | 0.000910s | 0.000910s | 0.000931s | byte equality observed |
| any.test | 10 | 0.000909s | 0.000928s | 0.000903s | byte equality observed |
| array.test | 10 | 0.000912s | 0.000897s | 0.000925s | byte equality observed |
| as_deque.test | 10 | 0.000897s | 0.000889s | 0.000898s | byte equality observed |
| as_list.test | 10 | 0.000925s | 0.000928s | 0.000960s | byte equality observed |
| as_map.test | 10 | 0.000914s | 0.000919s | 0.000916s | byte equality observed |
| as_map_assoc.test | 10 | 0.000911s | 0.000907s | 0.000912s | byte equality observed |
| as_set.test | 10 | 0.000929s | 0.000930s | 0.000933s | byte equality observed |
| as_vector.test | 10 | 0.000930s | 0.000946s | 0.000924s | byte equality observed |
| back_extended_deque.test | 10 | 0.000896s | 0.000890s | 0.000882s | byte equality observed |
| boost_array.test | 10 | 0.000902s | 0.000908s | 0.000898s | byte equality observed |
| boost_tuple.test | 10 | 0.000928s | 0.000929s | 0.000903s | byte equality observed |
| boost_tuple_iterator.test | 10 | 0.000897s | 0.000899s | 0.000894s | byte equality observed |
| clear.test | 10 | 0.000922s | 0.000918s | 0.000900s | byte equality observed |
| cons.test | 10 | 0.000946s | 0.000936s | 0.000935s | byte equality observed |
| convert_boost_tuple.test | 10 | 0.000917s | 0.000919s | 0.000874s | byte equality observed |
| convert_deque.test | 10 | 0.000916s | 0.000902s | 0.000880s | byte equality observed |
| convert_list.test | 10 | 0.000918s | 0.000908s | 0.000884s | byte equality observed |
| convert_std_pair.test | 10 | 0.000908s | 0.000904s | 0.000902s | byte equality observed |
| convert_std_tuple.test | 10 | 0.000902s | 0.000900s | 0.000907s | byte equality observed |
| convert_vector.test | 10 | 0.000908s | 0.000901s | 0.000891s | byte equality observed |
| copy.test | 10 | 0.000898s | 0.000889s | 0.000916s | byte equality observed |
| count.test | 10 | 0.000913s | 0.000904s | 0.000892s | byte equality observed |
| count_if.test | 10 | 0.000905s | 0.000908s | 0.000911s | byte equality observed |
| deduce_sequence.test | 10 | 0.000914s | 0.000897s | 0.000892s | byte equality observed |
| define_assoc_struct.test | 10 | 0.000928s | 0.000922s | 0.000917s | byte equality observed |
| define_assoc_struct_empty.test | 10 | 0.000916s | 0.000927s | 0.000912s | byte equality observed |
| define_assoc_struct_move.test | 10 | 0.000897s | 0.000899s | 0.000913s | byte equality observed |
| define_assoc_tpl_struct.test | 10 | 0.000942s | 0.000955s | 0.000941s | byte equality observed |
| define_assoc_tpl_struct_empty.test | 10 | 0.000926s | 0.000949s | 0.000946s | byte equality observed |
| define_assoc_tpl_struct_move.test | 10 | 0.000906s | 0.000913s | 0.000918s | byte equality observed |
| define_struct.test | 10 | 0.000945s | 0.000947s | 0.000946s | byte equality observed |
| define_struct_empty.test | 10 | 0.000956s | 0.000950s | 0.000942s | byte equality observed |
| define_struct_inline.test | 10 | 0.000966s | 0.000928s | 0.000918s | byte equality observed |
| define_struct_inline_empty.test | 10 | 0.000916s | 0.000950s | 0.000931s | byte equality observed |
| define_struct_inline_move.test | 10 | 0.000930s | 0.000900s | 0.000908s | byte equality observed |
| define_struct_move.test | 10 | 0.000909s | 0.000902s | 0.000897s | byte equality observed |
| define_tpl_struct.test | 10 | 0.000944s | 0.000915s | 0.000919s | byte equality observed |
| define_tpl_struct_empty.test | 10 | 0.000922s | 0.000914s | 0.000897s | byte equality observed |
| define_tpl_struct_inline.test | 10 | 0.000929s | 0.000936s | 0.000923s | byte equality observed |
| define_tpl_struct_inline_empty.test | 10 | 0.000929s | 0.000924s | 0.000901s | byte equality observed |
| define_tpl_struct_inline_move.test | 10 | 0.000896s | 0.000899s | 0.000884s | byte equality observed |
| define_tpl_struct_move.test | 10 | 0.000900s | 0.000912s | 0.000932s | byte equality observed |
| deque_comparison.test | 10 | 0.000932s | 0.000929s | 0.000912s | byte equality observed |
| deque_construction.test | 10 | 0.000925s | 0.000902s | 0.000897s | byte equality observed |
| deque_copy.test | 10 | 0.000921s | 0.000912s | 0.000890s | byte equality observed |
| deque_hash.test | 10 | 0.000923s | 0.000918s | 0.000897s | byte equality observed |
| deque_iterator.test | 10 | 0.000898s | 0.000907s | 0.000898s | byte equality observed |
| deque_make.test | 10 | 0.000905s | 0.000926s | 0.000894s | byte equality observed |
| deque_misc.test | 10 | 0.000921s | 0.000914s | 0.000885s | byte equality observed |
| deque_move.test | 10 | 0.000910s | 0.000933s | 0.000920s | byte equality observed |
| deque_mutate.test | 10 | 0.000908s | 0.000932s | 0.000895s | byte equality observed |
| deque_nest.test | 10 | 0.000900s | 0.000937s | 0.000917s | byte equality observed |
| deque_tie.test | 10 | 0.000900s | 0.000919s | 0.000908s | byte equality observed |
| deque_value_at.test | 10 | 0.000918s | 0.000887s | 0.000903s | byte equality observed |
| erase.test | 10 | 0.000932s | 0.000930s | 0.000896s | byte equality observed |
| erase_key.test | 10 | 0.000932s | 0.000948s | 0.000918s | byte equality observed |
| filter.test | 10 | 0.000921s | 0.000916s | 0.000897s | byte equality observed |
| filter_if.test | 10 | 0.000932s | 0.000902s | 0.000940s | byte equality observed |
| filter_view.test | 10 | 0.000922s | 0.000928s | 0.000914s | byte equality observed |
| find.test | 10 | 0.000937s | 0.000912s | 0.000937s | byte equality observed |
| find_if.test | 10 | 0.000929s | 0.000902s | 0.000910s | byte equality observed |
| flatten.test | 10 | 0.000915s | 0.000897s | 0.000922s | byte equality observed |
| flatten_view.test | 10 | 0.000908s | 0.000903s | 0.000907s | byte equality observed |
| fold.test | 10 | 0.000928s | 0.000927s | 0.000913s | byte equality observed |
| for_each.test | 10 | 0.000928s | 0.000944s | 0.000934s | byte equality observed |
| front_extended_deque.test | 10 | 0.000899s | 0.000902s | 0.000897s | byte equality observed |
| fused.test | 10 | 0.000902s | 0.000916s | 0.000920s | byte equality observed |
| fused_function_object.test | 10 | 0.000905s | 0.000894s | 0.000894s | byte equality observed |
| fused_procedure.test | 10 | 0.000892s | 0.000913s | 0.000898s | byte equality observed |
| github-176.test | 10 | 0.000900s | 0.000890s | 0.000927s | byte equality observed |
| hash.test | 10 | 0.000901s | 0.000908s | 0.000892s | byte equality observed |
| identity_view.test | 10 | 0.000927s | 0.000957s | 0.000917s | byte equality observed |
| insert.test | 10 | 0.000965s | 0.000948s | 0.000907s | byte equality observed |
| insert_range.test | 10 | 0.000941s | 0.000966s | 0.000919s | byte equality observed |
| invoke.test | 10 | 0.000906s | 0.000920s | 0.000882s | byte equality observed |
| invoke_function_object.test | 10 | 0.000901s | 0.000909s | 0.000872s | byte equality observed |
| invoke_procedure.test | 10 | 0.000908s | 0.000924s | 0.000864s | byte equality observed |
| io.test | 10 | 0.001017s | 0.001032s | 0.001031s | byte equality observed |
| iter_fold.test | 10 | 0.000906s | 0.000947s | 0.000913s | byte equality observed |
| iterator_range.test | 10 | 0.000936s | 0.000950s | 0.000903s | byte equality observed |
| join.test | 10 | 0.000903s | 0.000893s | 0.000884s | byte equality observed |
| joint_view.test | 10 | 0.000967s | 0.000965s | 0.000925s | byte equality observed |
| list_comparison.test | 10 | 0.000893s | 0.000913s | 0.000884s | byte equality observed |
| list_construction.test | 10 | 0.000902s | 0.000908s | 0.000888s | byte equality observed |
| list_copy.test | 10 | 0.000925s | 0.000942s | 0.000880s | byte equality observed |
| list_hash.test | 10 | 0.000931s | 0.000919s | 0.000869s | byte equality observed |
| list_iterator.test | 10 | 0.000902s | 0.000901s | 0.000865s | byte equality observed |
| list_make.test | 10 | 0.000899s | 0.000913s | 0.000871s | byte equality observed |
| list_misc.test | 10 | 0.000915s | 0.000918s | 0.000875s | byte equality observed |
| list_mutate.test | 10 | 0.000905s | 0.000919s | 0.000883s | byte equality observed |
| list_nest.test | 10 | 0.000882s | 0.000896s | 0.000870s | byte equality observed |
| list_tie.test | 10 | 0.000895s | 0.000899s | 0.000881s | byte equality observed |
| list_value_at.test | 10 | 0.000902s | 0.000894s | 0.000876s | byte equality observed |
| make_fused.test | 10 | 0.000898s | 0.000907s | 0.000873s | byte equality observed |
| make_fused_function_object.test | 10 | 0.000891s | 0.000902s | 0.000858s | byte equality observed |
| make_fused_procedure.test | 10 | 0.000911s | 0.000920s | 0.000895s | byte equality observed |
| make_list.test | 10 | 0.000902s | 0.000918s | 0.000901s | byte equality observed |
| make_unfused.test | 10 | 0.000904s | 0.000925s | 0.000876s | byte equality observed |
| make_vector.test | 10 | 0.000897s | 0.000915s | 0.000898s | byte equality observed |
| map.test | 10 | 0.000942s | 0.000942s | 0.000945s | byte equality observed |
| map_comparison.test | 10 | 0.000893s | 0.000924s | 0.000915s | byte equality observed |
| map_construction.test | 10 | 0.000906s | 0.000930s | 0.000885s | byte equality observed |
| map_copy.test | 10 | 0.000907s | 0.000948s | 0.000896s | byte equality observed |
| map_misc.test | 10 | 0.000915s | 0.000921s | 0.000921s | byte equality observed |
| map_move.test | 10 | 0.000923s | 0.000951s | 0.000897s | byte equality observed |
| map_mutate.test | 10 | 0.000909s | 0.000907s | 0.000901s | byte equality observed |
| map_tie.test | 10 | 0.000899s | 0.000907s | 0.000894s | byte equality observed |
| move.test | 10 | 0.000901s | 0.000930s | 0.000894s | byte equality observed |
| nil.test | 10 | 0.000906s | 0.000899s | 0.000905s | byte equality observed |
| none.test | 10 | 0.000895s | 0.000919s | 0.000899s | byte equality observed |
| nview.test | 10 | 0.000910s | 0.000932s | 0.000902s | byte equality observed |
| pop_back.test | 10 | 0.000945s | 0.000943s | 0.000939s | byte equality observed |
| pop_front.test | 10 | 0.000926s | 0.000965s | 0.000956s | byte equality observed |
| push_back.test | 10 | 0.000919s | 0.000951s | 0.000935s | byte equality observed |
| push_front.test | 10 | 0.000937s | 0.000956s | 0.000942s | byte equality observed |
| quick.test | 10 | 0.000411s | 0.000897s | 0.000878s | byte equality observed |
| ref_vector.test | 10 | 0.000914s | 0.000948s | 0.000911s | byte equality observed |
| remove.test | 10 | 0.000927s | 0.000940s | 0.000912s | byte equality observed |
| remove_if.test | 10 | 0.000929s | 0.000927s | 0.000925s | byte equality observed |
| repetitive_view.test | 10 | 0.000918s | 0.000901s | 0.000915s | byte equality observed |
| replace.test | 10 | 0.000931s | 0.000930s | 0.000918s | byte equality observed |
| replace_if.test | 10 | 0.000936s | 0.000933s | 0.000934s | byte equality observed |
| reverse.test | 10 | 0.000924s | 0.000946s | 0.000949s | byte equality observed |
| reverse_fold.test | 10 | 0.000915s | 0.000917s | 0.000925s | byte equality observed |
| reverse_iter_fold.test | 10 | 0.000911s | 0.000941s | 0.000922s | byte equality observed |
| reverse_view.test | 10 | 0.000910s | 0.000935s | 0.000927s | byte equality observed |
| segmented_find.test | 10 | 0.000895s | 0.000913s | 0.000891s | byte equality observed |
| segmented_find_if.test | 10 | 0.000894s | 0.000932s | 0.000878s | byte equality observed |
| segmented_fold.test | 10 | 0.000933s | 0.000969s | 0.000913s | byte equality observed |
| segmented_for_each.test | 10 | 0.000932s | 0.000956s | 0.000914s | byte equality observed |
| segmented_iterator_range.test | 10 | 0.000951s | 0.000959s | 0.000934s | byte equality observed |
| set.test | 10 | 0.000922s | 0.000933s | 0.000891s | byte equality observed |
| single_view.test | 10 | 0.000930s | 0.000928s | 0.000912s | byte equality observed |
| std_array.test | 10 | 0.000894s | 0.000917s | 0.000874s | byte equality observed |
| std_pair.test | 10 | 0.000921s | 0.000946s | 0.000915s | byte equality observed |
| std_tuple.test | 10 | 0.000896s | 0.000910s | 0.000894s | byte equality observed |
| std_tuple_iterator.test | 10 | 0.000896s | 0.000895s | 0.000883s | byte equality observed |
| swap.test | 10 | 0.000895s | 0.000937s | 0.000888s | byte equality observed |
| transform.test | 10 | 0.000923s | 0.000928s | 0.000906s | byte equality observed |
| transform_view.test | 10 | 0.000933s | 0.000965s | 0.000921s | byte equality observed |
| tuple_comparison.test | 10 | 0.000881s | 0.000908s | 0.000898s | byte equality observed |
| tuple_construction.test | 10 | 0.000888s | 0.000946s | 0.000899s | byte equality observed |
| tuple_conversion.test | 10 | 0.000905s | 0.000896s | 0.000913s | byte equality observed |
| tuple_copy.test | 10 | 0.000899s | 0.000944s | 0.000888s | byte equality observed |
| tuple_element.test | 10 | 0.000900s | 0.000918s | 0.000890s | byte equality observed |
| tuple_hash.test | 10 | 0.000906s | 0.000933s | 0.000899s | byte equality observed |
| tuple_make.test | 10 | 0.000905s | 0.000932s | 0.000892s | byte equality observed |
| tuple_misc.test | 10 | 0.000902s | 0.000912s | 0.000903s | byte equality observed |
| tuple_mutate.test | 10 | 0.000908s | 0.000945s | 0.000899s | byte equality observed |
| tuple_nest.test | 10 | 0.000901s | 0.000911s | 0.000899s | byte equality observed |
| tuple_tie.test | 10 | 0.000896s | 0.000926s | 0.000890s | byte equality observed |
| tuple_traits__maybe_variadic.test | 10 | 0.000905s | 0.000928s | 0.000909s | byte equality observed |
| tuple_traits__no_variadic.test | 10 | 0.000895s | 0.000898s | 0.000895s | byte equality observed |
| unfused.test | 10 | 0.000896s | 0.000897s | 0.000913s | byte equality observed |
| unfused_typed.test | 10 | 0.000891s | 0.000890s | 0.000872s | byte equality observed |
| vector_comparison.test | 10 | 0.000896s | 0.000899s | 0.000886s | byte equality observed |
| vector_construction.test | 10 | 0.000899s | 0.000919s | 0.000892s | byte equality observed |
| vector_conversion.test | 10 | 0.000898s | 0.000913s | 0.000902s | byte equality observed |
| vector_copy.test | 10 | 0.000906s | 0.000956s | 0.000903s | byte equality observed |
| vector_hash.test | 10 | 0.000909s | 0.000909s | 0.000898s | byte equality observed |
| vector_iterator.test | 10 | 0.000896s | 0.000952s | 0.000888s | byte equality observed |
| vector_make.test | 10 | 0.000914s | 0.000926s | 0.000893s | byte equality observed |
| vector_misc.test | 10 | 0.000901s | 0.000946s | 0.000914s | byte equality observed |
| vector_move.test | 10 | 0.000924s | 0.000918s | 0.000922s | byte equality observed |
| vector_mutate.test | 10 | 0.000892s | 0.000918s | 0.000887s | byte equality observed |
| vector_n.test | 10 | 0.000943s | 0.000932s | 0.000930s | byte equality observed |
| vector_nest.test | 10 | 0.000910s | 0.000900s | 0.000894s | byte equality observed |
| vector_tie.test | 10 | 0.000901s | 0.000901s | 0.000866s | byte equality observed |
| vector_traits__maybe_variadic.test | 10 | 0.000901s | 0.000900s | 0.000891s | byte equality observed |
| vector_traits__no_variadic.test | 10 | 0.000895s | 0.000916s | 0.000913s | byte equality observed |
| vector_value_at.test | 10 | 0.000912s | 0.000916s | 0.000880s | byte equality observed |
| zip.test | 10 | 0.000903s | 0.000883s | 0.000926s | byte equality observed |
| zip2.test | 10 | 0.000909s | 0.000918s | 0.000897s | byte equality observed |
| zip_ignore.test | 10 | 0.000897s | 0.000919s | 0.000897s | byte equality observed |
| zip_view.test | 10 | 0.000908s | 0.000922s | 0.000952s | byte equality observed |
| zip_view2.test | 10 | 0.000904s | 0.000894s | 0.000863s | byte equality observed |
| zip_view_ignore.test | 10 | 0.000895s | 0.000923s | 0.000886s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43624536445).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
