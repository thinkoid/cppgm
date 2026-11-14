# libs/fusion/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| all.test | RUN | 0.351353 | 0.769961 | 1.044455 | 0.001400 | 0.001592 | 0.001758 |
| any.test | RUN | 0.341117 | 0.720272 | 1.007107 | 0.001555 | 0.001598 | 0.001942 |
| clear.test | RUN | 0.252644 | 0.659854 | 0.834198 | 0.001554 | 0.001650 | 0.001611 |
| copy.test | RUN | 0.212605 | 0.493713 | 0.677809 | 0.001472 | 0.001950 | 0.001778 |
| count.test | RUN | 0.238938 | 0.541270 | 0.733357 | 0.001629 | 0.001914 | 0.001585 |
| count_if.test | RUN | 0.226203 | 0.510505 | 0.669515 | 0.001523 | 0.001757 | 0.001811 |
| erase.test | RUN | 0.316381 | 0.907170 | 1.104613 | 0.001337 | 0.001565 | 0.001822 |
| erase_key.test | RUN | 0.307796 | 0.891123 | 1.032208 | 0.001813 | 0.001598 | 0.001713 |
| filter.test | RUN | 0.278409 | 0.751360 | 0.964011 | 0.001754 | 0.001954 | 0.001756 |
| filter_if.test | RUN | 0.311245 | 0.920186 | 1.149246 | 0.001595 | 0.001760 | 0.001774 |
| find.test | RUN | 0.272370 | 0.617429 | 0.834393 | 0.001563 | 0.001798 | 0.001736 |
| find_if.test | RUN | 0.261523 | 0.552559 | 0.799965 | 0.001749 | 0.001974 | 0.001492 |
| fold.test | RUN | 0.295291 | 0.694997 | 0.980469 | 0.001814 | 0.001930 | 0.001696 |
| for_each.test | RUN | 0.247586 | 0.621948 | 0.827329 | 0.001808 | 0.002058 | 0.001870 |
| insert.test | RUN | 0.375731 | 1.121481 | 1.358239 | 0.001846 | 0.001938 | 0.001773 |
| insert_range.test | RUN | 0.375627 | 1.140624 | 1.374941 | 0.001614 | 0.001832 | 0.001795 |
| iter_fold.test | RUN | 0.461664 | 1.080370 | 1.582055 | 0.001818 | 0.001956 | 0.001819 |
| move.test | RUN | 0.222389 | 0.518125 | 0.690980 | 0.001802 | 0.001767 | 0.001904 |
| none.test | RUN | 0.372711 | 0.730261 | 1.048750 | 0.001508 | 0.001937 | 0.001854 |
| pop_back.test | RUN | 0.366475 | 0.965189 | 1.199278 | 0.001556 | 0.001876 | 0.001728 |
| pop_front.test | RUN | 0.308243 | 0.787481 | 0.954132 | 0.001921 | 0.001722 | 0.001837 |
| push_back.test | RUN | 0.370188 | 1.132310 | 1.302802 | 0.001658 | 0.001873 | 0.001983 |
| push_front.test | RUN | 0.326256 | 0.925039 | 1.083228 | 0.001778 | 0.001835 | 0.001647 |
| remove.test | RUN | 0.370940 | 1.061375 | 1.307276 | 0.001695 | 0.001916 | 0.001777 |
| remove_if.test | RUN | 0.333956 | 0.863197 | 1.112815 | 0.001831 | 0.002072 | 0.001816 |
| replace.test | RUN | 0.313611 | 0.846150 | 1.006031 | 0.001819 | 0.001960 | 0.001602 |
| replace_if.test | RUN | 0.315285 | 0.833863 | 0.997272 | 0.001884 | 0.001947 | 0.001620 |
| reverse_fold.test | RUN | 0.509513 | 1.212842 | 1.773632 | 0.001893 | 0.002018 | 0.001905 |
| reverse_iter_fold.test | RUN | 0.509306 | 1.276753 | 1.853448 | 0.001675 | 0.001820 | 0.001793 |
| reverse.test | RUN | 0.308657 | 0.888686 | 1.050192 | 0.001940 | 0.002025 | 0.001892 |
| segmented_for_each.test | RUN | 0.542554 | 1.718430 | 2.106827 | 0.001894 | 0.001782 | 0.001802 |
| segmented_find.test | RUN | 0.334673 | 0.885291 | 1.182944 | 0.001634 | 0.001828 | 0.002410 |
| segmented_find_if.test | RUN | 0.337125 | 0.900128 | 1.229476 | 0.001864 | 0.001515 | 0.001812 |
| segmented_fold.test | RUN | 0.416180 | 1.191570 | 1.559340 | 0.001796 | 0.001984 | 0.001892 |
| transform.test | RUN | 0.324446 | 0.934600 | 1.121258 | 0.001904 | 0.001964 | 0.001882 |
| join.test | RUN | 0.242946 | 0.558929 | 0.754994 | 0.001858 | 0.001829 | 0.001690 |
| zip.test | RUN | 0.445885 | 1.106447 | 1.434930 | 0.001680 | 0.001955 | 0.001934 |
| zip2.test | RUN | 0.436800 | 1.039443 | 1.432991 | 0.001442 | 0.001914 | 0.001578 |
| zip_ignore.test | RUN | 0.313660 | 0.742258 | 0.953791 | 0.001604 | 0.001656 | 0.001868 |
| flatten.test | RUN | 0.289372 | 0.779953 | 0.944631 | 0.001587 | 0.001912 | 0.001777 |
| ticket-5490.test | COMPILE | 0.157191 | 0.341035 | 0.414031 | — | — | — |
| as_deque.test | RUN | 0.287874 | 0.745793 | 0.992796 | 0.001810 | 0.001852 | 0.001712 |
| as_list.test | RUN | 0.320232 | 0.908907 | 1.069239 | 0.001351 | 0.001539 | 0.001602 |
| as_map.test | RUN | 0.315087 | 0.884183 | 1.051613 | 0.001307 | 0.001864 | 0.001617 |
| as_map_assoc.test | RUN | 0.315928 | 0.839947 | 1.009759 | 0.001613 | 0.002010 | 0.001648 |
| as_set.test | RUN | 0.366915 | 1.078596 | 1.199419 | 0.001646 | 0.001830 | 0.001639 |
| as_vector.test | RUN | 0.326183 | 0.948711 | 1.089682 | 0.001582 | 0.001911 | 0.001405 |
| boost_tuple.test | RUN | 0.323761 | 0.934104 | 1.088556 | 0.001689 | 0.001665 | 0.001680 |
| boost_tuple_iterator.test | RUN | 0.228099 | 0.567173 | 0.670766 | 0.001799 | 0.001617 | 0.001691 |
| cons.test | RUN | 0.409524 | 1.066639 | 1.269300 | 0.001627 | 0.001846 | 0.001354 |
| convert_boost_tuple.test | RUN | 0.256110 | 0.794251 | 0.840890 | 0.001564 | 0.001780 | 0.001273 |
| convert_deque.test | RUN | 0.261813 | 0.792204 | 0.836361 | 0.001534 | 0.001556 | 0.001670 |
| convert_list.test | RUN | 0.256475 | 0.816126 | 0.863824 | 0.001515 | 0.001315 | 0.001674 |
| convert_std_pair.test | RUN | 0.277886 | 0.796849 | 0.877799 | 0.001592 | 0.001957 | 0.001315 |
| convert_std_tuple.test | RUN | 0.260920 | 0.779098 | 0.859500 | 0.001477 | 0.001874 | 0.001610 |
| convert_vector.test | RUN | 0.259748 | 0.790372 | 0.866235 | 0.001478 | 0.001606 | 0.001512 |
| filter_view.test | RUN | 0.318018 | 0.858396 | 1.010392 | 0.001897 | 0.001816 | 0.001810 |
| hash.test | RUN | 0.305932 | 0.744284 | 0.999310 | 0.001722 | 0.001718 | 0.001765 |
| io.test | RUN | 0.319930 | 1.064823 | 1.157864 | 0.001692 | 0.002129 | 0.001837 |
| iterator_range.test | RUN | 0.297806 | 0.810666 | 0.963517 | 0.001575 | 0.002073 | 0.001477 |
| joint_view.test | RUN | 0.418272 | 1.367178 | 1.446295 | 0.001959 | 0.001651 | 0.001598 |
| list_comparison.test | RUN | 0.234565 | 0.553689 | 0.706049 | 0.001681 | 0.001911 | 0.001600 |
| list_construction.test | RUN | 0.233730 | 0.548287 | 0.688187 | 0.001656 | 0.001927 | 0.001780 |
| list_copy.test | RUN | 0.343323 | 0.975082 | 1.174002 | 0.001776 | 0.001913 | 0.001742 |
| list_iterator.test | RUN | 0.230371 | 0.543607 | 0.649882 | 0.001804 | 0.001770 | 0.001764 |
| list_hash.test | RUN | 0.310425 | 1.047709 | 0.967557 | 0.001602 | 0.001889 | 0.001752 |
| list_make.test | RUN | 0.236358 | 0.593466 | 0.732526 | 0.001754 | 0.001768 | 0.001688 |
| list_misc.test | RUN | 0.306432 | 0.689765 | 0.894007 | 0.001645 | 0.001930 | 0.001746 |
| list_mutate.test | RUN | 0.216828 | 0.474199 | 0.596833 | 0.001576 | 0.001928 | 0.001756 |
| list_nest.test | RUN | 0.430081 | 1.362511 | 1.644039 | 0.001755 | 0.001623 | 0.001646 |
| list_tie.test | RUN | 0.230587 | 0.524356 | 0.655558 | 0.001840 | 0.001904 | 0.001814 |
| list_value_at.test | RUN | 0.226266 | 0.539117 | 0.630924 | 0.001400 | 0.001802 | 0.001750 |
| deque_comparison.test | RUN | 0.225528 | 0.555676 | 0.744072 | 0.001354 | 0.001906 | 0.001772 |
| deque_construction.test | RUN | 0.228752 | 0.551020 | 0.674250 | 0.001922 | 0.001900 | 0.001516 |
| deque_copy.test | RUN | 0.320270 | 0.922118 | 1.122965 | 0.001526 | 0.001807 | 0.001660 |
| deque_iterator.test | RUN | 0.224951 | 0.572938 | 0.694764 | 0.001680 | 0.001808 | 0.001229 |
| deque_hash.test | RUN | 0.304538 | 1.009605 | 0.980630 | 0.001627 | 0.001876 | 0.001724 |
| deque_is_constructible.test | COMPILE | 0.123933 | 0.252836 | 0.310841 | — | — | — |
| deque_make.test | RUN | 0.226906 | 0.572071 | 0.711732 | 0.001888 | 0.001817 | 0.001768 |
| deque_misc.test | RUN | 0.298616 | 0.685730 | 0.858947 | 0.001523 | 0.001559 | 0.001566 |
| deque_move.test | RUN | 0.230389 | 0.592637 | 0.675213 | 0.001622 | 0.001860 | 0.001844 |
| deque_mutate.test | RUN | 0.208521 | 0.477344 | 0.589844 | 0.001221 | 0.001782 | 0.001685 |
| deque_nest.test | RUN | 0.618477 | 2.080797 | 2.603964 | 0.001749 | 0.001541 | 0.001609 |
| deque_tie.test | RUN | 0.215068 | 0.496203 | 0.625941 | 0.001766 | 0.001755 | 0.001337 |
| deque_value_at.test | RUN | 0.209570 | 0.505527 | 0.651345 | 0.001345 | 0.001708 | 0.001412 |
| front_extended_deque.test | RUN | 0.303517 | 0.720082 | 0.926907 | 0.001851 | 0.001882 | 0.001685 |
| back_extended_deque.test | RUN | 0.313442 | 0.729309 | 0.909520 | 0.001776 | 0.001890 | 0.001793 |
| make_list.test | RUN | 0.238394 | 0.600045 | 0.746184 | 0.001583 | 0.001930 | 0.001772 |
| make_vector.test | RUN | 0.240666 | 0.576831 | 0.696922 | 0.001614 | 0.001762 | 0.001472 |
| map.test | RUN | 0.314382 | 0.909106 | 1.021673 | 0.001648 | 0.001772 | 0.001740 |
| map_comparison.test | RUN | 0.233548 | 0.575336 | 0.683825 | 0.002117 | 0.001862 | 0.001663 |
| map_construction.test | RUN | 0.235227 | 0.555621 | 0.689717 | 0.001559 | 0.001818 | 0.001724 |
| map_copy.test | RUN | 0.284479 | 0.719317 | 0.840292 | 0.001722 | 0.001931 | 0.001795 |
| map_misc.test | RUN | 0.293125 | 0.702196 | 0.890630 | 0.001781 | 0.001511 | 0.001468 |
| map_move.test | RUN | 0.232447 | 0.596058 | 0.709662 | 0.001566 | 0.001550 | 0.001532 |
| map_mutate.test | RUN | 0.212296 | 0.489767 | 0.595364 | 0.001480 | 0.001800 | 0.001290 |
| map_tie.test | RUN | 0.218369 | 0.478035 | 0.625401 | 0.001832 | 0.001894 | 0.001700 |
| nil.test | RUN | 0.148041 | 0.334899 | 0.439105 | 0.001706 | 0.001896 | 0.001656 |
| nview.test | RUN | 0.297079 | 0.720083 | 0.879799 | 0.001862 | 0.001905 | 0.001699 |
| reverse_view.test | RUN | 0.382996 | 1.164625 | 1.308233 | 0.001866 | 0.002036 | 0.001736 |
| segmented_iterator_range.test | RUN | 0.453158 | 1.361165 | 1.636374 | 0.001864 | 0.001900 | 0.001679 |
| set.test | RUN | 0.291587 | 0.785855 | 0.923237 | 0.001633 | 0.001960 | 0.001778 |
| single_view.test | RUN | 0.249924 | 0.718607 | 0.849285 | 0.001643 | 0.001838 | 0.001467 |
| std_pair.test | RUN | 0.324337 | 0.908646 | 1.064819 | 0.001714 | 0.001824 | 0.001471 |
| boost_array.test | RUN | 0.285381 | 0.630138 | 0.819985 | 0.001747 | 0.001819 | 0.001642 |
| array.test | RUN | 0.276855 | 0.646844 | 0.809143 | 0.001576 | 0.001782 | 0.001597 |
| std_array.test | RUN | 0.276947 | 0.634522 | 0.785491 | 0.001641 | 0.001836 | 0.001407 |
| tuple_comparison.test | RUN | 0.255731 | 0.603654 | 0.760897 | 0.001766 | 0.001748 | 0.001690 |
| tuple_construction.test | RUN | 0.253715 | 0.614186 | 0.771398 | 0.001750 | 0.001964 | 0.001583 |
| tuple_conversion.test | RUN | 0.556344 | 1.822492 | 2.424859 | 0.001564 | 0.001914 | 0.001528 |
| tuple_copy.test | RUN | 0.368381 | 1.064345 | 1.321092 | 0.001808 | 0.001831 | 0.001511 |
| tuple_element.test | RUN | 0.243650 | 0.542303 | 0.687388 | 0.001810 | 0.001641 | 0.001680 |
| tuple_make.test | RUN | 0.256617 | 0.619032 | 0.752018 | 0.001814 | 0.001842 | 0.001520 |
| tuple_misc.test | RUN | 0.332613 | 0.765942 | 0.956644 | 0.001658 | 0.001927 | 0.001410 |
| tuple_mutate.test | RUN | 0.229585 | 0.514361 | 0.692413 | 0.001755 | 0.001790 | 0.001411 |
| tuple_nest.test | RUN | 0.911353 | 3.734476 | 4.553574 | 0.001789 | 0.001862 | 0.001756 |
| tuple_hash.test | RUN | 0.330061 | 1.035453 | 0.979234 | 0.001796 | 0.001607 | 0.001462 |
| tuple_tie.test | RUN | 0.248675 | 0.577584 | 0.746855 | 0.001854 | 0.001939 | 0.001843 |
| tuple_traits__maybe_variadic.test | RUN | 0.270992 | 0.663704 | 0.777119 | 0.001624 | 0.001570 | 0.001510 |
| tuple_traits__no_variadic.test | RUN | 0.294154 | 0.678631 | 0.851160 | 0.001791 | 0.001936 | 0.001653 |
| transform_view.test | RUN | 0.382604 | 1.137345 | 1.323294 | 0.001794 | 0.001834 | 0.001675 |
| identity_view.test | RUN | 0.364988 | 1.049045 | 1.254478 | 0.001709 | 0.001791 | 0.001851 |
| vector_comparison.test | RUN | 0.238859 | 0.624736 | 0.739373 | 0.001665 | 0.001858 | 0.001724 |
| vector_construction.test | RUN | 0.242578 | 0.539129 | 0.724249 | 0.001770 | 0.001884 | 0.001570 |
| vector_conversion.test | RUN | 0.652968 | 2.391612 | 3.161374 | 0.001835 | 0.001878 | 0.001833 |
| vector_copy.test | RUN | 0.356610 | 1.044060 | 1.279238 | 0.001822 | 0.001792 | 0.001615 |
| vector_iterator.test | RUN | 0.228809 | 0.589825 | 0.702977 | 0.001784 | 0.001768 | 0.001760 |
| vector_make.test | RUN | 0.245724 | 0.594812 | 0.739209 | 0.001489 | 0.001928 | 0.001794 |
| vector_misc.test | RUN | 0.303158 | 0.729738 | 0.902267 | 0.001618 | 0.001531 | 0.001437 |
| vector_move.test | RUN | 0.234754 | 0.593225 | 0.706637 | 0.001544 | 0.001767 | 0.001647 |
| vector_mutate.test | RUN | 0.211525 | 0.506999 | 0.631134 | 0.001859 | 0.001799 | 0.001617 |
| vector_n.test | RUN | 0.272858 | 0.609061 | 0.836248 | 0.001849 | 0.001761 | 0.001746 |
| vector_nest.test | RUN | 0.928600 | 3.894655 | 4.618130 | 0.001780 | 0.001868 | 0.001684 |
| vector_hash.test | RUN | 0.319020 | 1.048712 | 0.948675 | 0.001443 | 0.001930 | 0.001796 |
| vector_tie.test | RUN | 0.223299 | 0.532272 | 0.708461 | 0.001750 | 0.001759 | 0.001754 |
| vector_traits__maybe_variadic.test | RUN | 0.250932 | 0.645776 | 0.685354 | 0.001878 | 0.001830 | 0.001751 |
| vector_traits__no_variadic.test | RUN | 0.275796 | 0.674453 | 0.721401 | 0.001810 | 0.001818 | 0.001760 |
| vector_value_at.test | RUN | 0.231786 | 0.477277 | 0.672186 | 0.001675 | 0.001939 | 0.001734 |
| zip_view.test | RUN | 0.472818 | 1.201464 | 1.600236 | 0.001665 | 0.001509 | 0.001672 |
| zip_view2.test | RUN | 0.373557 | 0.951090 | 1.255314 | 0.001826 | 0.001737 | 0.001847 |
| zip_view_ignore.test | RUN | 0.346971 | 0.867845 | 1.129495 | 0.001555 | 0.001838 | 0.001666 |
| repetitive_view.test | RUN | 0.598111 | 1.571661 | 2.132193 | 0.001662 | 0.001532 | 0.001646 |
| deduce_sequence.test | RUN | 0.282437 | 0.651521 | 0.841135 | 0.001564 | 0.001868 | 0.001414 |
| adapt_adt_named.test | RUN | 0.327276 | 0.918882 | 1.038987 | 0.001577 | 0.001830 | 0.001804 |
| adapt_adt_named_empty.test | RUN | 0.287365 | 0.751929 | 0.879279 | 0.001819 | 0.001796 | 0.001770 |
| adapt_adt.test | RUN | 0.367308 | 1.187067 | 1.298209 | 0.001892 | 0.001851 | 0.001811 |
| adapt_adt_empty.test | RUN | 0.282977 | 0.753533 | 0.904800 | 0.001862 | 0.001865 | 0.001767 |
| adapt_assoc_adt_named.test | RUN | 0.373215 | 0.949696 | 1.145687 | 0.001928 | 0.001888 | 0.001609 |
| adapt_assoc_adt_named_empty.test | RUN | 0.290347 | 0.735562 | 0.869418 | 0.001646 | 0.001746 | 0.001702 |
| adapt_assoc_adt.test | RUN | 0.387572 | 0.978342 | 1.194234 | 0.001531 | 0.001551 | 0.001714 |
| adapt_assoc_adt_empty.test | RUN | 0.293754 | 0.750442 | 0.858965 | 0.001806 | 0.001780 | 0.001671 |
| adapt_assoc_struct_named.test | RUN | 0.371104 | 0.930647 | 1.141946 | 0.001696 | 0.001794 | 0.001869 |
| adapt_assoc_struct_named_empty.test | RUN | 0.288776 | 0.733701 | 0.865401 | 0.001929 | 0.001804 | 0.001820 |
| adapt_assoc_struct.test | RUN | 0.333337 | 0.882006 | 1.053702 | 0.001594 | 0.001817 | 0.001508 |
| adapt_assoc_struct_empty.test | RUN | 0.288467 | 0.730398 | 0.896369 | 0.001652 | 0.001568 | 0.001423 |
| adapt_assoc_tpl_adt.test | RUN | 0.403310 | 1.019043 | 1.205388 | 0.001773 | 0.001858 | 0.001611 |
| adapt_assoc_tpl_adt_empty.test | RUN | 0.295240 | 0.739430 | 0.875915 | 0.001847 | 0.001678 | 0.001512 |
| adapt_assoc_tpl_struct.test | RUN | 0.325095 | 0.860845 | 1.032257 | 0.001536 | 0.001637 | 0.001774 |
| adapt_assoc_tpl_struct_empty.test | RUN | 0.292080 | 0.750039 | 0.889581 | 0.001495 | 0.001618 | 0.001541 |
| adapt_struct_named.test | RUN | 0.334926 | 0.893438 | 1.004181 | 0.001843 | 0.001766 | 0.001708 |
| adapt_struct_named_empty.test | RUN | 0.295906 | 0.746097 | 0.871970 | 0.001631 | 0.001632 | 0.001645 |
| adapt_struct.test | RUN | 0.367324 | 1.011501 | 1.158155 | 0.001686 | 0.001847 | 0.001877 |
| adapt_struct_empty.test | RUN | 0.295546 | 0.734511 | 0.864667 | 0.001843 | 0.001903 | 0.001779 |
| adapt_tpl_adt.test | RUN | 0.374396 | 1.160339 | 1.222502 | 0.001677 | 0.001784 | 0.001758 |
| adapt_tpl_adt_empty.test | RUN | 0.299223 | 0.740493 | 0.879651 | 0.001735 | 0.001929 | 0.001789 |
| adapt_tpl_struct.test | RUN | 0.304768 | 0.798085 | 0.951424 | 0.001522 | 0.001737 | 0.001632 |
| adapt_tpl_struct_empty.test | RUN | 0.292998 | 0.766236 | 0.887444 | 0.001712 | 0.001798 | 0.001612 |
| adt_attribute_proxy.test | RUN | 0.332229 | 0.715769 | 0.922411 | 0.001886 | 0.001924 | 0.001879 |
| define_struct.test | RUN | 0.402530 | 1.013776 | 1.225439 | 0.001857 | 0.001922 | 0.001862 |
| define_struct_empty.test | RUN | 0.345553 | 0.812386 | 0.986283 | 0.001670 | 0.001816 | 0.001650 |
| define_struct_move.test | RUN | 0.223057 | 0.477013 | 0.611647 | 0.001824 | 0.001698 | 0.001773 |
| define_struct_inline.test | RUN | 0.424267 | 1.207673 | 1.369432 | 0.001734 | 0.001636 | 0.001882 |
| define_struct_inline_empty.test | RUN | 0.356552 | 0.815048 | 0.978544 | 0.001571 | 0.001818 | 0.001506 |
| define_struct_inline_move.test | RUN | 0.227355 | 0.472649 | 0.618022 | 0.001730 | 0.001840 | 0.001688 |
| define_assoc_struct.test | RUN | 0.385527 | 0.958686 | 1.169509 | 0.001873 | 0.001794 | 0.001729 |
| define_assoc_struct_empty.test | RUN | 0.343739 | 0.815284 | 1.008342 | 0.001776 | 0.001784 | 0.001723 |
| define_assoc_struct_move.test | RUN | 0.227034 | 0.474139 | 0.601984 | 0.001770 | 0.001574 | 0.001782 |
| define_tpl_struct.test | RUN | 0.382865 | 0.954574 | 1.169263 | 0.001846 | 0.001835 | 0.001592 |
| define_tpl_struct_empty.test | RUN | 0.349051 | 0.849207 | 0.993460 | 0.001763 | 0.001844 | 0.001756 |
| define_tpl_struct_move.test | RUN | 0.229414 | 0.463557 | 0.613141 | 0.001586 | 0.001840 | 0.001821 |
| define_tpl_struct_inline.test | RUN | 0.416254 | 1.134719 | 1.311690 | 0.001598 | 0.001616 | 0.001704 |
| define_tpl_struct_inline_empty.test | RUN | 0.361884 | 0.842423 | 1.049429 | 0.001743 | 0.001889 | 0.001865 |
| define_tpl_struct_inline_move.test | RUN | 0.226653 | 0.459333 | 0.662842 | 0.001541 | 0.001966 | 0.001673 |
| define_assoc_tpl_struct.test | RUN | 0.391884 | 0.978971 | 1.234962 | 0.001899 | 0.001860 | 0.001747 |
| define_assoc_tpl_struct_empty.test | RUN | 0.358644 | 0.817936 | 1.026101 | 0.001814 | 0.001900 | 0.001750 |
| define_assoc_tpl_struct_move.test | RUN | 0.226216 | 0.474316 | 0.590772 | 0.001605 | 0.001892 | 0.001811 |
| std_tuple.test | RUN | 0.236148 | 0.525170 | 0.668904 | 0.001658 | 0.001768 | 0.001883 |
| std_tuple_iterator.test | RUN | 0.237321 | 0.558713 | 0.677818 | 0.001670 | 0.001697 | 0.001786 |
| ref_vector.test | RUN | 0.263987 | 0.573882 | 0.725849 | 0.001968 | 0.001865 | 0.001839 |
| flatten_view.test | RUN | 0.280252 | 0.702688 | 0.880751 | 0.001660 | 0.001819 | 0.001748 |
| github-159.test | COMPILE | 0.126069 | 0.261642 | 0.309553 | — | — | — |
| github-176.test | RUN | 0.264448 | 0.636697 | 0.730154 | 0.001838 | 0.001845 | 0.001779 |
| size.test | COMPILE | 0.223278 | 0.450484 | 0.589184 | — | — | — |
| fused.test | RUN | 0.307918 | 0.658236 | 0.901267 | 0.001697 | 0.001797 | 0.001737 |
| fused_function_object.test | RUN | 0.233966 | 0.511743 | 0.646854 | 0.001867 | 0.001858 | 0.001766 |
| fused_procedure.test | RUN | 0.304424 | 0.646715 | 0.836184 | 0.001593 | 0.001788 | 0.001675 |
| unfused.test | RUN | 0.245797 | 0.513135 | 0.701787 | 0.001876 | 0.001908 | 0.001517 |
| unfused_typed.test | RUN | 0.248657 | 0.569183 | 0.696710 | 0.001860 | 0.001860 | 0.001814 |
| make_fused.test | RUN | 0.316724 | 0.659319 | 0.869842 | 0.001619 | 0.001555 | 0.001553 |
| make_fused_function_object.test | RUN | 0.234857 | 0.512404 | 0.657146 | 0.001672 | 0.001666 | 0.001669 |
| make_fused_procedure.test | RUN | 0.304706 | 0.627062 | 0.830075 | 0.001801 | 0.001779 | 0.001764 |
| make_unfused.test | RUN | 0.235597 | 0.503147 | 0.666386 | 0.002126 | 0.001734 | 0.001813 |
| invoke.test | RUN | 0.620474 | 1.832346 | 2.250886 | 0.001700 | 0.001836 | 0.001478 |
| invoke_function_object.test | RUN | 0.287208 | 0.674682 | 0.875275 | 0.001844 | 0.001954 | 0.001777 |
| invoke_procedure.test | RUN | 0.496180 | 1.356929 | 1.727325 | 0.001613 | 0.001694 | 0.001747 |
| swap.test | RUN | 0.367481 | 0.843152 | 1.116906 | 0.001629 | 0.001842 | 0.001846 |
| is_sequence.test | COMPILE | 0.061598 | 0.122466 | 0.140788 | — | — | — |
| is_view.test | COMPILE | 0.061486 | 0.121675 | 0.141144 | — | — | — |
| pair_deque.test | COMPILE | 0.128790 | 0.273864 | 0.347964 | — | — | — |
| pair_list.test | COMPILE | 0.129929 | 0.259094 | 0.319465 | — | — | — |
| pair_map.test | COMPILE | 0.133090 | 0.274860 | 0.335353 | — | — | — |
| pair_set.test | COMPILE | 0.134103 | 0.277945 | 0.338092 | — | — | — |
| pair_vector.test | COMPILE | 0.131258 | 0.268651 | 0.334147 | — | — | — |
| pair_nest.test | COMPILE | 0.055048 | 0.109744 | 0.134546 | — | — | — |
| index_sequence.test | COMPILE | 0.046787 | 0.080051 | 0.104036 | — | — | — |
| and.test | COMPILE | 0.036532 | 0.062124 | 0.068760 | — | — | — |
| tag_of.test | COMPILE | 0.059306 | 0.117176 | 0.125609 | — | — | — |
| unused.test | COMPILE | 0.033153 | 0.076575 | 0.078442 | — | — | — |
| tag_of_fallback.test | COMPILE | 0.051767 | 0.118140 | 0.129117 | — | — | — |
| make_pair_r-value.test | COMPILE | 0.044555 | 0.084013 | 0.107815 | — | — | — |
| quick.test | RUN | 0.181397 | 0.372423 | 0.427921 | 0.000623 | 0.001421 | 0.001320 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 1.006× | 1.004×, 1.008× | 1.010× |
| clang | 1.001× | 1.006×, 0.997× | 1.010× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1362 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43628287753).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| adapt_adt.test | 10 | 0.001040s | 0.001045s | 0.001037s | byte equality observed |
| adapt_adt_empty.test | 10 | 0.001026s | 0.001019s | 0.001043s | byte equality observed |
| adapt_adt_named.test | 10 | 0.001014s | 0.001043s | 0.001054s | byte equality observed |
| adapt_adt_named_empty.test | 10 | 0.001002s | 0.001024s | 0.001028s | byte equality observed |
| adapt_assoc_adt.test | 10 | 0.001014s | 0.001050s | 0.001012s | byte equality observed |
| adapt_assoc_adt_empty.test | 10 | 0.001008s | 0.001044s | 0.000985s | byte equality observed |
| adapt_assoc_adt_named.test | 10 | 0.001032s | 0.001040s | 0.001023s | byte equality observed |
| adapt_assoc_adt_named_empty.test | 10 | 0.001023s | 0.001028s | 0.001002s | byte equality observed |
| adapt_assoc_struct.test | 10 | 0.001008s | 0.001043s | 0.001033s | byte equality observed |
| adapt_assoc_struct_empty.test | 10 | 0.001026s | 0.001031s | 0.001016s | byte equality observed |
| adapt_assoc_struct_named.test | 10 | 0.001007s | 0.001029s | 0.001039s | byte equality observed |
| adapt_assoc_struct_named_empty.test | 10 | 0.001018s | 0.001029s | 0.001026s | byte equality observed |
| adapt_assoc_tpl_adt.test | 10 | 0.001033s | 0.001025s | 0.001023s | byte equality observed |
| adapt_assoc_tpl_adt_empty.test | 10 | 0.001011s | 0.001032s | 0.001025s | byte equality observed |
| adapt_assoc_tpl_struct.test | 10 | 0.001045s | 0.001031s | 0.001058s | byte equality observed |
| adapt_assoc_tpl_struct_empty.test | 10 | 0.001025s | 0.001039s | 0.001030s | byte equality observed |
| adapt_struct.test | 10 | 0.001032s | 0.001072s | 0.001027s | byte equality observed |
| adapt_struct_empty.test | 10 | 0.001013s | 0.001033s | 0.001037s | byte equality observed |
| adapt_struct_named.test | 10 | 0.001032s | 0.001055s | 0.001029s | byte equality observed |
| adapt_struct_named_empty.test | 10 | 0.001014s | 0.001061s | 0.001038s | byte equality observed |
| adapt_tpl_adt.test | 10 | 0.001043s | 0.001027s | 0.001030s | byte equality observed |
| adapt_tpl_adt_empty.test | 10 | 0.001037s | 0.001016s | 0.001022s | byte equality observed |
| adapt_tpl_struct.test | 10 | 0.001031s | 0.001034s | 0.001055s | byte equality observed |
| adapt_tpl_struct_empty.test | 10 | 0.001021s | 0.001041s | 0.001027s | byte equality observed |
| adt_attribute_proxy.test | 10 | 0.001009s | 0.001010s | 0.001000s | byte equality observed |
| all.test | 10 | 0.000989s | 0.000981s | 0.000980s | byte equality observed |
| any.test | 10 | 0.001012s | 0.001001s | 0.000995s | byte equality observed |
| array.test | 10 | 0.000990s | 0.001027s | 0.001017s | byte equality observed |
| as_deque.test | 10 | 0.001021s | 0.001011s | 0.001012s | byte equality observed |
| as_list.test | 10 | 0.001030s | 0.001044s | 0.001044s | byte equality observed |
| as_map.test | 10 | 0.001026s | 0.001042s | 0.001059s | byte equality observed |
| as_map_assoc.test | 10 | 0.001034s | 0.001029s | 0.001019s | byte equality observed |
| as_set.test | 10 | 0.001039s | 0.001049s | 0.001030s | byte equality observed |
| as_vector.test | 10 | 0.001035s | 0.001059s | 0.001040s | byte equality observed |
| back_extended_deque.test | 10 | 0.000997s | 0.001020s | 0.001011s | byte equality observed |
| boost_array.test | 10 | 0.000994s | 0.001011s | 0.001000s | byte equality observed |
| boost_tuple.test | 10 | 0.001029s | 0.001066s | 0.001034s | byte equality observed |
| boost_tuple_iterator.test | 10 | 0.000993s | 0.001002s | 0.001007s | byte equality observed |
| clear.test | 10 | 0.001028s | 0.001040s | 0.001026s | byte equality observed |
| cons.test | 10 | 0.001049s | 0.001063s | 0.001049s | byte equality observed |
| convert_boost_tuple.test | 10 | 0.001015s | 0.001005s | 0.001018s | byte equality observed |
| convert_deque.test | 10 | 0.001031s | 0.001017s | 0.001019s | byte equality observed |
| convert_list.test | 10 | 0.001015s | 0.001045s | 0.001052s | byte equality observed |
| convert_std_pair.test | 10 | 0.001019s | 0.001021s | 0.001010s | byte equality observed |
| convert_std_tuple.test | 10 | 0.001017s | 0.000997s | 0.000986s | byte equality observed |
| convert_vector.test | 10 | 0.000999s | 0.001015s | 0.001002s | byte equality observed |
| copy.test | 10 | 0.000993s | 0.001030s | 0.001005s | byte equality observed |
| count.test | 10 | 0.001005s | 0.001043s | 0.001030s | byte equality observed |
| count_if.test | 10 | 0.001020s | 0.001018s | 0.001002s | byte equality observed |
| deduce_sequence.test | 10 | 0.000996s | 0.001020s | 0.000982s | byte equality observed |
| define_assoc_struct.test | 10 | 0.001025s | 0.001030s | 0.001032s | byte equality observed |
| define_assoc_struct_empty.test | 10 | 0.001034s | 0.001036s | 0.001025s | byte equality observed |
| define_assoc_struct_move.test | 10 | 0.001001s | 0.000990s | 0.001024s | byte equality observed |
| define_assoc_tpl_struct.test | 10 | 0.001018s | 0.001022s | 0.001037s | byte equality observed |
| define_assoc_tpl_struct_empty.test | 10 | 0.001015s | 0.001045s | 0.001005s | byte equality observed |
| define_assoc_tpl_struct_move.test | 10 | 0.001012s | 0.001010s | 0.000998s | byte equality observed |
| define_struct.test | 10 | 0.001030s | 0.001034s | 0.001028s | byte equality observed |
| define_struct_empty.test | 10 | 0.001028s | 0.001040s | 0.001014s | byte equality observed |
| define_struct_inline.test | 10 | 0.001020s | 0.001038s | 0.001006s | byte equality observed |
| define_struct_inline_empty.test | 10 | 0.001000s | 0.001040s | 0.001013s | byte equality observed |
| define_struct_inline_move.test | 10 | 0.000995s | 0.001010s | 0.000985s | byte equality observed |
| define_struct_move.test | 10 | 0.001021s | 0.000996s | 0.000991s | byte equality observed |
| define_tpl_struct.test | 10 | 0.001040s | 0.001028s | 0.001018s | byte equality observed |
| define_tpl_struct_empty.test | 10 | 0.001059s | 0.001025s | 0.001025s | byte equality observed |
| define_tpl_struct_inline.test | 10 | 0.001032s | 0.001058s | 0.001028s | byte equality observed |
| define_tpl_struct_inline_empty.test | 10 | 0.001000s | 0.001037s | 0.001020s | byte equality observed |
| define_tpl_struct_inline_move.test | 10 | 0.000993s | 0.001002s | 0.001011s | byte equality observed |
| define_tpl_struct_move.test | 10 | 0.000997s | 0.000979s | 0.000989s | byte equality observed |
| deque_comparison.test | 10 | 0.001009s | 0.000983s | 0.001018s | byte equality observed |
| deque_construction.test | 10 | 0.001008s | 0.000991s | 0.000989s | byte equality observed |
| deque_copy.test | 10 | 0.000991s | 0.001007s | 0.000973s | byte equality observed |
| deque_hash.test | 10 | 0.001009s | 0.001024s | 0.000986s | byte equality observed |
| deque_iterator.test | 10 | 0.001011s | 0.001006s | 0.000974s | byte equality observed |
| deque_make.test | 10 | 0.001056s | 0.000993s | 0.000988s | byte equality observed |
| deque_misc.test | 10 | 0.001019s | 0.001007s | 0.000989s | byte equality observed |
| deque_move.test | 10 | 0.001028s | 0.001033s | 0.001019s | byte equality observed |
| deque_mutate.test | 10 | 0.001004s | 0.001025s | 0.001022s | byte equality observed |
| deque_nest.test | 10 | 0.001019s | 0.001008s | 0.001000s | byte equality observed |
| deque_tie.test | 10 | 0.001016s | 0.001054s | 0.001021s | byte equality observed |
| deque_value_at.test | 10 | 0.001009s | 0.001004s | 0.000979s | byte equality observed |
| erase.test | 10 | 0.001037s | 0.001045s | 0.001026s | byte equality observed |
| erase_key.test | 10 | 0.001062s | 0.001057s | 0.001026s | byte equality observed |
| filter.test | 10 | 0.001014s | 0.001026s | 0.001051s | byte equality observed |
| filter_if.test | 10 | 0.001035s | 0.001065s | 0.001045s | byte equality observed |
| filter_view.test | 10 | 0.001024s | 0.001054s | 0.001066s | byte equality observed |
| find.test | 10 | 0.001037s | 0.001057s | 0.001045s | byte equality observed |
| find_if.test | 10 | 0.001019s | 0.001043s | 0.001047s | byte equality observed |
| flatten.test | 10 | 0.001004s | 0.001029s | 0.001010s | byte equality observed |
| flatten_view.test | 10 | 0.001002s | 0.001022s | 0.001040s | byte equality observed |
| fold.test | 10 | 0.001027s | 0.001026s | 0.001024s | byte equality observed |
| for_each.test | 10 | 0.001043s | 0.001054s | 0.001026s | byte equality observed |
| front_extended_deque.test | 10 | 0.001002s | 0.001019s | 0.000992s | byte equality observed |
| fused.test | 10 | 0.001011s | 0.001027s | 0.000992s | byte equality observed |
| fused_function_object.test | 10 | 0.001013s | 0.000979s | 0.001010s | byte equality observed |
| fused_procedure.test | 10 | 0.001028s | 0.001025s | 0.001012s | byte equality observed |
| github-176.test | 10 | 0.001030s | 0.000992s | 0.001009s | byte equality observed |
| hash.test | 10 | 0.001019s | 0.001015s | 0.000989s | byte equality observed |
| identity_view.test | 10 | 0.001048s | 0.001051s | 0.001040s | byte equality observed |
| insert.test | 10 | 0.001046s | 0.001072s | 0.001038s | byte equality observed |
| insert_range.test | 10 | 0.001049s | 0.001057s | 0.001054s | byte equality observed |
| invoke.test | 10 | 0.001006s | 0.001006s | 0.001004s | byte equality observed |
| invoke_function_object.test | 10 | 0.001012s | 0.001013s | 0.001008s | byte equality observed |
| invoke_procedure.test | 10 | 0.001001s | 0.001014s | 0.000984s | byte equality observed |
| io.test | 10 | 0.001137s | 0.001139s | 0.001145s | byte equality observed |
| iter_fold.test | 10 | 0.001023s | 0.001028s | 0.001071s | byte equality observed |
| iterator_range.test | 10 | 0.001036s | 0.001042s | 0.001056s | byte equality observed |
| join.test | 10 | 0.001000s | 0.000980s | 0.001006s | byte equality observed |
| joint_view.test | 10 | 0.001068s | 0.001077s | 0.001059s | byte equality observed |
| list_comparison.test | 10 | 0.000989s | 0.000981s | 0.001000s | byte equality observed |
| list_construction.test | 10 | 0.000987s | 0.001009s | 0.001014s | byte equality observed |
| list_copy.test | 10 | 0.000995s | 0.001007s | 0.001020s | byte equality observed |
| list_hash.test | 10 | 0.001035s | 0.001025s | 0.001029s | byte equality observed |
| list_iterator.test | 10 | 0.001007s | 0.000990s | 0.001030s | byte equality observed |
| list_make.test | 10 | 0.000995s | 0.000989s | 0.000983s | byte equality observed |
| list_misc.test | 10 | 0.001012s | 0.000998s | 0.001011s | byte equality observed |
| list_mutate.test | 10 | 0.000989s | 0.000980s | 0.000981s | byte equality observed |
| list_nest.test | 10 | 0.000993s | 0.001030s | 0.000992s | byte equality observed |
| list_tie.test | 10 | 0.000979s | 0.000997s | 0.000975s | byte equality observed |
| list_value_at.test | 10 | 0.001013s | 0.001009s | 0.000995s | byte equality observed |
| make_fused.test | 10 | 0.000995s | 0.001014s | 0.001029s | byte equality observed |
| make_fused_function_object.test | 10 | 0.000997s | 0.001022s | 0.001007s | byte equality observed |
| make_fused_procedure.test | 10 | 0.000992s | 0.001031s | 0.000994s | byte equality observed |
| make_list.test | 10 | 0.001007s | 0.001026s | 0.001038s | byte equality observed |
| make_unfused.test | 10 | 0.001005s | 0.001025s | 0.001038s | byte equality observed |
| make_vector.test | 10 | 0.001014s | 0.001003s | 0.001001s | byte equality observed |
| map.test | 10 | 0.001042s | 0.001045s | 0.001029s | byte equality observed |
| map_comparison.test | 10 | 0.000992s | 0.000999s | 0.001010s | byte equality observed |
| map_construction.test | 10 | 0.001010s | 0.001002s | 0.001003s | byte equality observed |
| map_copy.test | 10 | 0.000997s | 0.001021s | 0.000988s | byte equality observed |
| map_misc.test | 10 | 0.001017s | 0.000998s | 0.000985s | byte equality observed |
| map_move.test | 10 | 0.001018s | 0.001035s | 0.001032s | byte equality observed |
| map_mutate.test | 10 | 0.001007s | 0.001014s | 0.001032s | byte equality observed |
| map_tie.test | 10 | 0.001026s | 0.001026s | 0.000994s | byte equality observed |
| move.test | 10 | 0.000991s | 0.000989s | 0.001005s | byte equality observed |
| nil.test | 10 | 0.001008s | 0.001004s | 0.000968s | byte equality observed |
| none.test | 10 | 0.000996s | 0.000994s | 0.000998s | byte equality observed |
| nview.test | 10 | 0.001001s | 0.001004s | 0.001041s | byte equality observed |
| pop_back.test | 10 | 0.001057s | 0.001045s | 0.001031s | byte equality observed |
| pop_front.test | 10 | 0.001041s | 0.001036s | 0.001004s | byte equality observed |
| push_back.test | 10 | 0.001053s | 0.001040s | 0.001075s | byte equality observed |
| push_front.test | 10 | 0.001054s | 0.001034s | 0.001064s | byte equality observed |
| quick.test | 10 | 0.000458s | 0.001015s | 0.000981s | byte equality observed |
| ref_vector.test | 10 | 0.001016s | 0.001036s | 0.001017s | byte equality observed |
| remove.test | 10 | 0.001035s | 0.001047s | 0.001028s | byte equality observed |
| remove_if.test | 10 | 0.001036s | 0.001040s | 0.001044s | byte equality observed |
| repetitive_view.test | 10 | 0.000981s | 0.001016s | 0.001001s | byte equality observed |
| replace.test | 10 | 0.001028s | 0.001029s | 0.001026s | byte equality observed |
| replace_if.test | 10 | 0.001034s | 0.001034s | 0.001054s | byte equality observed |
| reverse.test | 10 | 0.001030s | 0.001024s | 0.001054s | byte equality observed |
| reverse_fold.test | 10 | 0.001036s | 0.001048s | 0.001028s | byte equality observed |
| reverse_iter_fold.test | 10 | 0.001010s | 0.001013s | 0.001026s | byte equality observed |
| reverse_view.test | 10 | 0.001030s | 0.001031s | 0.001024s | byte equality observed |
| segmented_find.test | 10 | 0.000996s | 0.001001s | 0.001015s | byte equality observed |
| segmented_find_if.test | 10 | 0.000984s | 0.001013s | 0.000985s | byte equality observed |
| segmented_fold.test | 10 | 0.001014s | 0.001037s | 0.001009s | byte equality observed |
| segmented_for_each.test | 10 | 0.001038s | 0.001017s | 0.001037s | byte equality observed |
| segmented_iterator_range.test | 10 | 0.001037s | 0.001023s | 0.001039s | byte equality observed |
| set.test | 10 | 0.001018s | 0.001013s | 0.001061s | byte equality observed |
| single_view.test | 10 | 0.001030s | 0.001058s | 0.001026s | byte equality observed |
| std_array.test | 10 | 0.000992s | 0.000996s | 0.000996s | byte equality observed |
| std_pair.test | 10 | 0.001037s | 0.001034s | 0.001011s | byte equality observed |
| std_tuple.test | 10 | 0.001004s | 0.001039s | 0.001020s | byte equality observed |
| std_tuple_iterator.test | 10 | 0.001016s | 0.000994s | 0.001004s | byte equality observed |
| swap.test | 10 | 0.000994s | 0.001044s | 0.001030s | byte equality observed |
| transform.test | 10 | 0.001030s | 0.001049s | 0.001058s | byte equality observed |
| transform_view.test | 10 | 0.001037s | 0.001048s | 0.001034s | byte equality observed |
| tuple_comparison.test | 10 | 0.001003s | 0.001007s | 0.001015s | byte equality observed |
| tuple_construction.test | 10 | 0.001009s | 0.000989s | 0.001006s | byte equality observed |
| tuple_conversion.test | 10 | 0.001000s | 0.000997s | 0.001009s | byte equality observed |
| tuple_copy.test | 10 | 0.001016s | 0.000983s | 0.001018s | byte equality observed |
| tuple_element.test | 10 | 0.001006s | 0.000998s | 0.000981s | byte equality observed |
| tuple_hash.test | 10 | 0.001008s | 0.001014s | 0.001005s | byte equality observed |
| tuple_make.test | 10 | 0.001007s | 0.001030s | 0.000997s | byte equality observed |
| tuple_misc.test | 10 | 0.001002s | 0.000986s | 0.001024s | byte equality observed |
| tuple_mutate.test | 10 | 0.001011s | 0.001010s | 0.001037s | byte equality observed |
| tuple_nest.test | 10 | 0.001023s | 0.001025s | 0.001015s | byte equality observed |
| tuple_tie.test | 10 | 0.001029s | 0.000991s | 0.001014s | byte equality observed |
| tuple_traits__maybe_variadic.test | 10 | 0.001012s | 0.001003s | 0.000978s | byte equality observed |
| tuple_traits__no_variadic.test | 10 | 0.001016s | 0.000997s | 0.000990s | byte equality observed |
| unfused.test | 10 | 0.000997s | 0.001008s | 0.001008s | byte equality observed |
| unfused_typed.test | 10 | 0.001000s | 0.001011s | 0.001028s | byte equality observed |
| vector_comparison.test | 10 | 0.000984s | 0.000991s | 0.001035s | byte equality observed |
| vector_construction.test | 10 | 0.001000s | 0.001045s | 0.000987s | byte equality observed |
| vector_conversion.test | 10 | 0.001009s | 0.000996s | 0.001005s | byte equality observed |
| vector_copy.test | 10 | 0.001002s | 0.001035s | 0.001010s | byte equality observed |
| vector_hash.test | 10 | 0.001018s | 0.000995s | 0.001011s | byte equality observed |
| vector_iterator.test | 10 | 0.001043s | 0.001000s | 0.000993s | byte equality observed |
| vector_make.test | 10 | 0.001032s | 0.001022s | 0.000979s | byte equality observed |
| vector_misc.test | 10 | 0.001014s | 0.001020s | 0.001023s | byte equality observed |
| vector_move.test | 10 | 0.001024s | 0.001042s | 0.001013s | byte equality observed |
| vector_mutate.test | 10 | 0.001006s | 0.000996s | 0.001000s | byte equality observed |
| vector_n.test | 10 | 0.001034s | 0.001051s | 0.001026s | byte equality observed |
| vector_nest.test | 10 | 0.000992s | 0.001013s | 0.000990s | byte equality observed |
| vector_tie.test | 10 | 0.001006s | 0.001004s | 0.001037s | byte equality observed |
| vector_traits__maybe_variadic.test | 10 | 0.001008s | 0.000990s | 0.000996s | byte equality observed |
| vector_traits__no_variadic.test | 10 | 0.000998s | 0.001033s | 0.000996s | byte equality observed |
| vector_value_at.test | 10 | 0.001023s | 0.001031s | 0.001006s | byte equality observed |
| zip.test | 10 | 0.001004s | 0.000991s | 0.000997s | byte equality observed |
| zip2.test | 10 | 0.000993s | 0.001016s | 0.001009s | byte equality observed |
| zip_ignore.test | 10 | 0.000989s | 0.001005s | 0.000995s | byte equality observed |
| zip_view.test | 10 | 0.001016s | 0.000996s | 0.000991s | byte equality observed |
| zip_view2.test | 10 | 0.000998s | 0.001022s | 0.000996s | byte equality observed |
| zip_view_ignore.test | 10 | 0.001019s | 0.000975s | 0.001011s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43628287753).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
