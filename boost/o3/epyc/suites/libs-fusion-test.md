# libs/fusion/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| all.test | RUN | 0.339661 | 0.749232 | 1.044370 | 0.001403 | 0.001530 | 0.001392 |
| any.test | RUN | 0.329050 | 0.723611 | 1.015884 | 0.001754 | 0.001527 | 0.001583 |
| clear.test | RUN | 0.247389 | 0.646416 | 0.791687 | 0.001538 | 0.001582 | 0.001766 |
| copy.test | RUN | 0.211108 | 0.483008 | 0.651235 | 0.001475 | 0.001882 | 0.001395 |
| count.test | RUN | 0.234445 | 0.541678 | 0.731641 | 0.001721 | 0.001564 | 0.001644 |
| count_if.test | RUN | 0.222586 | 0.505634 | 0.696389 | 0.001536 | 0.001779 | 0.001674 |
| erase.test | RUN | 0.311051 | 0.877084 | 1.067571 | 0.001421 | 0.001830 | 0.001456 |
| erase_key.test | RUN | 0.303332 | 0.871216 | 1.013789 | 0.001826 | 0.001513 | 0.001735 |
| filter.test | RUN | 0.273420 | 0.736702 | 0.919854 | 0.001964 | 0.001866 | 0.001799 |
| filter_if.test | RUN | 0.302324 | 0.883782 | 1.097391 | 0.001627 | 0.001688 | 0.001826 |
| find.test | RUN | 0.267786 | 0.599439 | 0.826653 | 0.001362 | 0.001738 | 0.001510 |
| find_if.test | RUN | 0.247627 | 0.551711 | 0.768059 | 0.001656 | 0.001752 | 0.001879 |
| fold.test | RUN | 0.274316 | 0.673406 | 0.948888 | 0.001825 | 0.001899 | 0.001587 |
| for_each.test | RUN | 0.253693 | 0.626854 | 0.805117 | 0.001600 | 0.001841 | 0.001856 |
| insert.test | RUN | 0.359065 | 1.099995 | 1.306789 | 0.001766 | 0.001694 | 0.001593 |
| insert_range.test | RUN | 0.359472 | 1.085878 | 1.303938 | 0.001590 | 0.001764 | 0.001507 |
| iter_fold.test | RUN | 0.421250 | 1.063325 | 1.585370 | 0.001654 | 0.001830 | 0.001747 |
| move.test | RUN | 0.214970 | 0.501743 | 0.695798 | 0.001756 | 0.001605 | 0.001695 |
| none.test | RUN | 0.338437 | 0.710850 | 1.006098 | 0.001780 | 0.001736 | 0.001701 |
| pop_back.test | RUN | 0.348215 | 0.933928 | 1.180474 | 0.001609 | 0.001682 | 0.001755 |
| pop_front.test | RUN | 0.293733 | 0.760007 | 0.924991 | 0.001782 | 0.001772 | 0.001772 |
| push_back.test | RUN | 0.346291 | 1.087065 | 1.278887 | 0.001720 | 0.001889 | 0.001774 |
| push_front.test | RUN | 0.302418 | 0.896029 | 1.084460 | 0.001698 | 0.001778 | 0.001780 |
| remove.test | RUN | 0.352330 | 1.051678 | 1.284034 | 0.001562 | 0.001930 | 0.001726 |
| remove_if.test | RUN | 0.320782 | 0.854452 | 1.081209 | 0.001792 | 0.001664 | 0.001719 |
| replace.test | RUN | 0.304724 | 0.809315 | 0.988014 | 0.001797 | 0.001768 | 0.001706 |
| replace_if.test | RUN | 0.294261 | 0.813196 | 0.974833 | 0.001912 | 0.001979 | 0.001759 |
| reverse_fold.test | RUN | 0.478952 | 1.199398 | 1.729603 | 0.001770 | 0.001818 | 0.001834 |
| reverse_iter_fold.test | RUN | 0.485287 | 1.208677 | 1.834635 | 0.001652 | 0.001832 | 0.001746 |
| reverse.test | RUN | 0.301357 | 0.867929 | 1.043215 | 0.001527 | 0.001792 | 0.001664 |
| segmented_for_each.test | RUN | 0.508126 | 1.643854 | 2.036390 | 0.001490 | 0.001524 | 0.001515 |
| segmented_find.test | RUN | 0.319216 | 0.839460 | 1.169451 | 0.001630 | 0.001794 | 0.001776 |
| segmented_find_if.test | RUN | 0.318164 | 0.900333 | 1.163944 | 0.001479 | 0.001504 | 0.001729 |
| segmented_fold.test | RUN | 0.388749 | 1.123769 | 1.441045 | 0.001616 | 0.001892 | 0.001812 |
| transform.test | RUN | 0.312331 | 0.895158 | 1.073129 | 0.001528 | 0.001853 | 0.001470 |
| join.test | RUN | 0.238381 | 0.565179 | 0.771704 | 0.001540 | 0.001774 | 0.001450 |
| zip.test | RUN | 0.402971 | 1.072322 | 1.446263 | 0.001672 | 0.001854 | 0.001814 |
| zip2.test | RUN | 0.394837 | 1.047086 | 1.380625 | 0.001359 | 0.001764 | 0.001728 |
| zip_ignore.test | RUN | 0.300110 | 0.719557 | 0.930602 | 0.001752 | 0.001556 | 0.001562 |
| flatten.test | RUN | 0.278194 | 0.770438 | 0.936447 | 0.001389 | 0.001737 | 0.001279 |
| ticket-5490.test | COMPILE | 0.152838 | 0.341147 | 0.412270 | — | — | — |
| as_deque.test | RUN | 0.279862 | 0.724521 | 1.031405 | 0.001671 | 0.001798 | 0.001816 |
| as_list.test | RUN | 0.313940 | 0.899767 | 1.088427 | 0.001507 | 0.001554 | 0.001783 |
| as_map.test | RUN | 0.311923 | 0.857072 | 1.077087 | 0.001244 | 0.001820 | 0.001438 |
| as_map_assoc.test | RUN | 0.303303 | 0.825016 | 1.030872 | 0.001777 | 0.001772 | 0.001481 |
| as_set.test | RUN | 0.359920 | 1.009631 | 1.224039 | 0.001586 | 0.001460 | 0.001669 |
| as_vector.test | RUN | 0.321489 | 0.888648 | 1.112552 | 0.001680 | 0.001787 | 0.001694 |
| boost_tuple.test | RUN | 0.324863 | 0.903855 | 1.087711 | 0.001482 | 0.001838 | 0.001561 |
| boost_tuple_iterator.test | RUN | 0.226203 | 0.534226 | 0.674338 | 0.001498 | 0.001597 | 0.001731 |
| cons.test | RUN | 0.395435 | 1.027341 | 1.298254 | 0.001544 | 0.001564 | 0.001484 |
| convert_boost_tuple.test | RUN | 0.253296 | 0.775288 | 0.847744 | 0.001578 | 0.001861 | 0.001656 |
| convert_deque.test | RUN | 0.255006 | 0.764369 | 0.869324 | 0.001660 | 0.001694 | 0.001520 |
| convert_list.test | RUN | 0.252976 | 0.787918 | 0.855726 | 0.001392 | 0.001619 | 0.001630 |
| convert_std_pair.test | RUN | 0.271829 | 0.779853 | 0.876311 | 0.001634 | 0.001796 | 0.001562 |
| convert_std_tuple.test | RUN | 0.254768 | 0.764413 | 0.855861 | 0.001644 | 0.001606 | 0.001463 |
| convert_vector.test | RUN | 0.255966 | 0.768586 | 0.855689 | 0.001545 | 0.001716 | 0.001446 |
| filter_view.test | RUN | 0.305855 | 0.811947 | 1.016949 | 0.001576 | 0.001701 | 0.001756 |
| hash.test | RUN | 0.302617 | 0.720290 | 0.969436 | 0.001720 | 0.001651 | 0.001577 |
| io.test | RUN | 0.316285 | 1.035374 | 1.160051 | 0.001522 | 0.001990 | 0.001957 |
| iterator_range.test | RUN | 0.291901 | 0.740657 | 0.983475 | 0.001597 | 0.001714 | 0.001723 |
| joint_view.test | RUN | 0.385156 | 1.306866 | 1.421718 | 0.001843 | 0.001700 | 0.001703 |
| list_comparison.test | RUN | 0.225691 | 0.522185 | 0.666338 | 0.001738 | 0.001685 | 0.001750 |
| list_construction.test | RUN | 0.227079 | 0.533899 | 0.710055 | 0.001599 | 0.001732 | 0.001743 |
| list_copy.test | RUN | 0.331692 | 0.940424 | 1.218487 | 0.001744 | 0.001619 | 0.001578 |
| list_iterator.test | RUN | 0.223959 | 0.520717 | 0.632487 | 0.001541 | 0.001694 | 0.001488 |
| list_hash.test | RUN | 0.298559 | 1.005297 | 1.004998 | 0.001603 | 0.001947 | 0.001453 |
| list_make.test | RUN | 0.232149 | 0.584857 | 0.745238 | 0.001691 | 0.001797 | 0.001601 |
| list_misc.test | RUN | 0.300902 | 0.667621 | 0.895870 | 0.001568 | 0.001850 | 0.001651 |
| list_mutate.test | RUN | 0.212788 | 0.457003 | 0.626355 | 0.001696 | 0.001846 | 0.001648 |
| list_nest.test | RUN | 0.411548 | 1.284469 | 1.691144 | 0.001414 | 0.001718 | 0.001708 |
| list_tie.test | RUN | 0.226898 | 0.522175 | 0.702126 | 0.001718 | 0.001872 | 0.001828 |
| list_value_at.test | RUN | 0.220635 | 0.494970 | 0.641248 | 0.001508 | 0.001750 | 0.001630 |
| deque_comparison.test | RUN | 0.223647 | 0.569946 | 0.699543 | 0.001562 | 0.001489 | 0.001693 |
| deque_construction.test | RUN | 0.222821 | 0.519252 | 0.740514 | 0.001882 | 0.001792 | 0.001582 |
| deque_copy.test | RUN | 0.357818 | 0.889638 | 1.128808 | 0.001536 | 0.001584 | 0.001713 |
| deque_iterator.test | RUN | 0.260299 | 0.554082 | 0.713378 | 0.001754 | 0.001510 | 0.001734 |
| deque_hash.test | RUN | 0.331754 | 0.990692 | 0.952981 | 0.001531 | 0.001838 | 0.001812 |
| deque_is_constructible.test | COMPILE | 0.123187 | 0.242952 | 0.314488 | — | — | — |
| deque_make.test | RUN | 0.225234 | 0.563739 | 0.704893 | 0.001734 | 0.001703 | 0.001884 |
| deque_misc.test | RUN | 0.292673 | 0.682281 | 0.873181 | 0.001349 | 0.001509 | 0.001752 |
| deque_move.test | RUN | 0.224366 | 0.570752 | 0.690473 | 0.001626 | 0.001736 | 0.001729 |
| deque_mutate.test | RUN | 0.210384 | 0.458094 | 0.594026 | 0.001392 | 0.001653 | 0.001810 |
| deque_nest.test | RUN | 0.610157 | 2.089700 | 2.652143 | 0.001764 | 0.001864 | 0.001770 |
| deque_tie.test | RUN | 0.211209 | 0.506332 | 0.639376 | 0.001708 | 0.001852 | 0.001661 |
| deque_value_at.test | RUN | 0.209864 | 0.456295 | 0.657164 | 0.001359 | 0.001600 | 0.001638 |
| front_extended_deque.test | RUN | 0.303999 | 0.688772 | 0.933758 | 0.001692 | 0.001857 | 0.001842 |
| back_extended_deque.test | RUN | 0.312428 | 0.732998 | 0.974946 | 0.001642 | 0.001870 | 0.001770 |
| make_list.test | RUN | 0.237905 | 0.574875 | 0.722812 | 0.001658 | 0.001694 | 0.001752 |
| make_vector.test | RUN | 0.234349 | 0.553296 | 0.715552 | 0.001576 | 0.001918 | 0.001726 |
| map.test | RUN | 0.307879 | 0.878587 | 1.041632 | 0.001722 | 0.001842 | 0.001615 |
| map_comparison.test | RUN | 0.226030 | 0.548281 | 0.698512 | 0.001498 | 0.001691 | 0.001542 |
| map_construction.test | RUN | 0.229452 | 0.558262 | 0.700621 | 0.001336 | 0.001876 | 0.001733 |
| map_copy.test | RUN | 0.273355 | 0.673694 | 0.856738 | 0.001753 | 0.001892 | 0.001812 |
| map_misc.test | RUN | 0.289803 | 0.687315 | 0.875584 | 0.001574 | 0.001633 | 0.001615 |
| map_move.test | RUN | 0.227277 | 0.584802 | 0.701021 | 0.001723 | 0.001544 | 0.001352 |
| map_mutate.test | RUN | 0.206160 | 0.463597 | 0.627666 | 0.001492 | 0.001398 | 0.001504 |
| map_tie.test | RUN | 0.213325 | 0.455658 | 0.607998 | 0.001441 | 0.001660 | 0.001780 |
| nil.test | RUN | 0.149410 | 0.333874 | 0.438778 | 0.001798 | 0.001746 | 0.001655 |
| nview.test | RUN | 0.292347 | 0.685515 | 0.890635 | 0.001650 | 0.001827 | 0.001831 |
| reverse_view.test | RUN | 0.368512 | 1.087174 | 1.316785 | 0.001451 | 0.001784 | 0.001851 |
| segmented_iterator_range.test | RUN | 0.440053 | 1.278324 | 1.639354 | 0.001762 | 0.001754 | 0.001475 |
| set.test | RUN | 0.287395 | 0.759426 | 0.929424 | 0.001735 | 0.001978 | 0.001806 |
| single_view.test | RUN | 0.253112 | 0.664420 | 0.852862 | 0.001789 | 0.001876 | 0.001731 |
| std_pair.test | RUN | 0.329470 | 0.868242 | 1.068674 | 0.001699 | 0.001844 | 0.001704 |
| boost_array.test | RUN | 0.281746 | 0.606885 | 0.810078 | 0.001628 | 0.001818 | 0.001626 |
| array.test | RUN | 0.277400 | 0.610655 | 0.765140 | 0.001710 | 0.001872 | 0.001751 |
| std_array.test | RUN | 0.277018 | 0.609011 | 0.824027 | 0.001626 | 0.001593 | 0.001788 |
| tuple_comparison.test | RUN | 0.246601 | 0.561628 | 0.740922 | 0.001584 | 0.001801 | 0.001671 |
| tuple_construction.test | RUN | 0.248439 | 0.564978 | 0.745689 | 0.001829 | 0.001844 | 0.001702 |
| tuple_conversion.test | RUN | 0.540850 | 1.730413 | 2.413015 | 0.001522 | 0.001785 | 0.001905 |
| tuple_copy.test | RUN | 0.357181 | 1.020868 | 1.279691 | 0.001630 | 0.001551 | 0.001418 |
| tuple_element.test | RUN | 0.231034 | 0.528320 | 0.721448 | 0.001585 | 0.001827 | 0.001639 |
| tuple_make.test | RUN | 0.248050 | 0.612518 | 0.793193 | 0.001487 | 0.001854 | 0.001633 |
| tuple_misc.test | RUN | 0.311578 | 0.732565 | 0.936316 | 0.001390 | 0.001876 | 0.001758 |
| tuple_mutate.test | RUN | 0.216012 | 0.493473 | 0.663809 | 0.001912 | 0.001520 | 0.001856 |
| tuple_nest.test | RUN | 0.887096 | 3.517721 | 4.595344 | 0.001530 | 0.001791 | 0.001694 |
| tuple_hash.test | RUN | 0.319185 | 0.994588 | 0.990569 | 0.001776 | 0.001597 | 0.001658 |
| tuple_tie.test | RUN | 0.237597 | 0.540216 | 0.754716 | 0.001748 | 0.001684 | 0.001604 |
| tuple_traits__maybe_variadic.test | RUN | 0.258226 | 0.668643 | 0.783708 | 0.001742 | 0.001630 | 0.001307 |
| tuple_traits__no_variadic.test | RUN | 0.281497 | 0.673100 | 0.868589 | 0.001521 | 0.001834 | 0.001750 |
| transform_view.test | RUN | 0.370835 | 1.092333 | 1.307287 | 0.001755 | 0.001838 | 0.001863 |
| identity_view.test | RUN | 0.351687 | 1.040665 | 1.236528 | 0.001744 | 0.001625 | 0.001776 |
| vector_comparison.test | RUN | 0.226328 | 0.549634 | 0.726540 | 0.001264 | 0.001576 | 0.001692 |
| vector_construction.test | RUN | 0.227047 | 0.518999 | 0.751518 | 0.001499 | 0.001685 | 0.001782 |
| vector_conversion.test | RUN | 0.634020 | 2.284675 | 3.093531 | 0.001713 | 0.001958 | 0.001700 |
| vector_copy.test | RUN | 0.347822 | 1.006261 | 1.280800 | 0.001678 | 0.001750 | 0.001844 |
| vector_iterator.test | RUN | 0.218175 | 0.542179 | 0.639667 | 0.001590 | 0.001588 | 0.001769 |
| vector_make.test | RUN | 0.229458 | 0.576765 | 0.723782 | 0.001521 | 0.001665 | 0.001789 |
| vector_misc.test | RUN | 0.294221 | 0.687695 | 0.886669 | 0.001575 | 0.001700 | 0.001516 |
| vector_move.test | RUN | 0.227791 | 0.603876 | 0.714859 | 0.001646 | 0.001776 | 0.001343 |
| vector_mutate.test | RUN | 0.212010 | 0.474006 | 0.606052 | 0.001527 | 0.001506 | 0.001739 |
| vector_n.test | RUN | 0.260971 | 0.580736 | 0.831148 | 0.001873 | 0.001904 | 0.001825 |
| vector_nest.test | RUN | 0.889575 | 3.694073 | 4.616389 | 0.001770 | 0.001648 | 0.001845 |
| vector_hash.test | RUN | 0.299307 | 0.994737 | 0.946362 | 0.001545 | 0.001822 | 0.001714 |
| vector_tie.test | RUN | 0.226275 | 0.528574 | 0.709053 | 0.001590 | 0.001815 | 0.001431 |
| vector_traits__maybe_variadic.test | RUN | 0.240891 | 0.578506 | 0.709674 | 0.001829 | 0.001706 | 0.001898 |
| vector_traits__no_variadic.test | RUN | 0.256461 | 0.638631 | 0.753233 | 0.001567 | 0.001717 | 0.001488 |
| vector_value_at.test | RUN | 0.211052 | 0.466411 | 0.657497 | 0.001708 | 0.001770 | 0.001688 |
| zip_view.test | RUN | 0.433044 | 1.137025 | 1.648944 | 0.001813 | 0.001752 | 0.001806 |
| zip_view2.test | RUN | 0.355938 | 0.916717 | 1.236311 | 0.001643 | 0.001678 | 0.001585 |
| zip_view_ignore.test | RUN | 0.332002 | 0.856059 | 1.127445 | 0.001562 | 0.001621 | 0.001685 |
| repetitive_view.test | RUN | 0.564323 | 1.503368 | 2.127923 | 0.001796 | 0.001856 | 0.001896 |
| deduce_sequence.test | RUN | 0.269564 | 0.634581 | 0.844397 | 0.001635 | 0.001652 | 0.001761 |
| adapt_adt_named.test | RUN | 0.320116 | 0.886079 | 1.088444 | 0.001539 | 0.001778 | 0.001894 |
| adapt_adt_named_empty.test | RUN | 0.279122 | 0.729628 | 0.888765 | 0.001712 | 0.001958 | 0.001636 |
| adapt_adt.test | RUN | 0.352970 | 1.147218 | 1.278036 | 0.001778 | 0.001900 | 0.001738 |
| adapt_adt_empty.test | RUN | 0.271469 | 0.738124 | 0.882414 | 0.001321 | 0.001769 | 0.001779 |
| adapt_assoc_adt_named.test | RUN | 0.356535 | 0.911496 | 1.162016 | 0.001591 | 0.001672 | 0.001787 |
| adapt_assoc_adt_named_empty.test | RUN | 0.277518 | 0.700437 | 0.864102 | 0.001547 | 0.001735 | 0.001698 |
| adapt_assoc_adt.test | RUN | 0.370626 | 0.948343 | 1.227402 | 0.001844 | 0.001743 | 0.001766 |
| adapt_assoc_adt_empty.test | RUN | 0.277896 | 0.708398 | 0.880650 | 0.001695 | 0.001883 | 0.001884 |
| adapt_assoc_struct_named.test | RUN | 0.352199 | 0.914569 | 1.140105 | 0.001582 | 0.001906 | 0.001755 |
| adapt_assoc_struct_named_empty.test | RUN | 0.283425 | 0.699446 | 0.869704 | 0.001543 | 0.001906 | 0.001757 |
| adapt_assoc_struct.test | RUN | 0.319323 | 0.864518 | 1.032774 | 0.001636 | 0.001858 | 0.001822 |
| adapt_assoc_struct_empty.test | RUN | 0.270142 | 0.703170 | 0.881102 | 0.001586 | 0.001787 | 0.001682 |
| adapt_assoc_tpl_adt.test | RUN | 0.367576 | 0.976905 | 1.231166 | 0.001617 | 0.001878 | 0.001746 |
| adapt_assoc_tpl_adt_empty.test | RUN | 0.287795 | 0.708443 | 0.840531 | 0.001670 | 0.001873 | 0.001808 |
| adapt_assoc_tpl_struct.test | RUN | 0.304904 | 0.826644 | 1.037102 | 0.001514 | 0.001692 | 0.001343 |
| adapt_assoc_tpl_struct_empty.test | RUN | 0.274962 | 0.715587 | 0.863629 | 0.001339 | 0.001804 | 0.001757 |
| adapt_struct_named.test | RUN | 0.314797 | 0.864216 | 0.999255 | 0.001717 | 0.001916 | 0.001543 |
| adapt_struct_named_empty.test | RUN | 0.277508 | 0.702758 | 0.853087 | 0.001551 | 0.001807 | 0.001883 |
| adapt_struct.test | RUN | 0.334627 | 0.990381 | 1.197269 | 0.001634 | 0.001869 | 0.001908 |
| adapt_struct_empty.test | RUN | 0.271226 | 0.724113 | 0.889111 | 0.001874 | 0.001755 | 0.001818 |
| adapt_tpl_adt.test | RUN | 0.349031 | 1.134767 | 1.225746 | 0.001678 | 0.001756 | 0.001825 |
| adapt_tpl_adt_empty.test | RUN | 0.280019 | 0.714218 | 0.863636 | 0.001812 | 0.001939 | 0.001811 |
| adapt_tpl_struct.test | RUN | 0.288106 | 0.797523 | 0.947866 | 0.001763 | 0.001641 | 0.001669 |
| adapt_tpl_struct_empty.test | RUN | 0.273820 | 0.730068 | 0.876836 | 0.001630 | 0.001855 | 0.001783 |
| adt_attribute_proxy.test | RUN | 0.319382 | 0.704204 | 0.927495 | 0.001622 | 0.001879 | 0.001503 |
| define_struct.test | RUN | 0.384366 | 0.979001 | 1.227351 | 0.001745 | 0.001740 | 0.001702 |
| define_struct_empty.test | RUN | 0.338869 | 0.809997 | 0.997183 | 0.001915 | 0.001631 | 0.001736 |
| define_struct_move.test | RUN | 0.217892 | 0.449620 | 0.585879 | 0.001750 | 0.001722 | 0.001702 |
| define_struct_inline.test | RUN | 0.400648 | 1.171526 | 1.332898 | 0.001474 | 0.001669 | 0.001834 |
| define_struct_inline_empty.test | RUN | 0.334087 | 0.837750 | 0.997187 | 0.001750 | 0.001722 | 0.001737 |
| define_struct_inline_move.test | RUN | 0.217880 | 0.440570 | 0.622435 | 0.001807 | 0.001823 | 0.001812 |
| define_assoc_struct.test | RUN | 0.368873 | 0.918743 | 1.151091 | 0.001749 | 0.001858 | 0.001730 |
| define_assoc_struct_empty.test | RUN | 0.326267 | 0.802619 | 0.989772 | 0.001698 | 0.001948 | 0.001698 |
| define_assoc_struct_move.test | RUN | 0.209981 | 0.442876 | 0.610643 | 0.001747 | 0.001729 | 0.001724 |
| define_tpl_struct.test | RUN | 0.369928 | 0.933290 | 1.142225 | 0.001752 | 0.001576 | 0.001825 |
| define_tpl_struct_empty.test | RUN | 0.338881 | 0.792162 | 1.004412 | 0.001862 | 0.001695 | 0.001612 |
| define_tpl_struct_move.test | RUN | 0.214115 | 0.463672 | 0.611487 | 0.001413 | 0.001709 | 0.001642 |
| define_tpl_struct_inline.test | RUN | 0.384064 | 1.106243 | 1.296244 | 0.001738 | 0.001647 | 0.001840 |
| define_tpl_struct_inline_empty.test | RUN | 0.340087 | 0.797488 | 1.021711 | 0.001870 | 0.001848 | 0.001869 |
| define_tpl_struct_inline_move.test | RUN | 0.212952 | 0.480089 | 0.630709 | 0.001614 | 0.001560 | 0.001547 |
| define_assoc_tpl_struct.test | RUN | 0.364366 | 0.953629 | 1.202147 | 0.001802 | 0.001839 | 0.001691 |
| define_assoc_tpl_struct_empty.test | RUN | 0.327730 | 0.815478 | 1.010807 | 0.001653 | 0.001655 | 0.001692 |
| define_assoc_tpl_struct_move.test | RUN | 0.216127 | 0.471927 | 0.603828 | 0.001534 | 0.001904 | 0.001764 |
| std_tuple.test | RUN | 0.222521 | 0.506264 | 0.688650 | 0.001633 | 0.001663 | 0.001685 |
| std_tuple_iterator.test | RUN | 0.219054 | 0.546935 | 0.651907 | 0.001776 | 0.001796 | 0.001859 |
| ref_vector.test | RUN | 0.251826 | 0.550878 | 0.715241 | 0.001734 | 0.001770 | 0.001804 |
| flatten_view.test | RUN | 0.263812 | 0.671247 | 0.878568 | 0.001574 | 0.001796 | 0.001468 |
| github-159.test | COMPILE | 0.123562 | 0.260521 | 0.308662 | — | — | — |
| github-176.test | RUN | 0.246866 | 0.608339 | 0.719971 | 0.001735 | 0.001706 | 0.001832 |
| size.test | COMPILE | 0.208468 | 0.418026 | 0.577442 | — | — | — |
| fused.test | RUN | 0.294389 | 0.662663 | 0.858826 | 0.001522 | 0.001414 | 0.001704 |
| fused_function_object.test | RUN | 0.221763 | 0.505917 | 0.657720 | 0.001708 | 0.001722 | 0.001714 |
| fused_procedure.test | RUN | 0.284177 | 0.610508 | 0.823615 | 0.001629 | 0.001631 | 0.001529 |
| unfused.test | RUN | 0.223716 | 0.518817 | 0.653482 | 0.001600 | 0.001782 | 0.001618 |
| unfused_typed.test | RUN | 0.230811 | 0.540271 | 0.689389 | 0.001476 | 0.001880 | 0.001741 |
| make_fused.test | RUN | 0.301012 | 0.655983 | 0.856444 | 0.001512 | 0.001420 | 0.001599 |
| make_fused_function_object.test | RUN | 0.226602 | 0.485608 | 0.637067 | 0.001574 | 0.001844 | 0.001397 |
| make_fused_procedure.test | RUN | 0.286524 | 0.631322 | 0.834572 | 0.001817 | 0.001830 | 0.001743 |
| make_unfused.test | RUN | 0.228453 | 0.510376 | 0.651001 | 0.001852 | 0.001853 | 0.001586 |
| invoke.test | RUN | 0.583889 | 1.803924 | 2.310620 | 0.001630 | 0.001494 | 0.001766 |
| invoke_function_object.test | RUN | 0.271640 | 0.634766 | 0.834042 | 0.001754 | 0.001860 | 0.001702 |
| invoke_procedure.test | RUN | 0.457561 | 1.313067 | 1.769109 | 0.001496 | 0.001758 | 0.001689 |
| swap.test | RUN | 0.340900 | 0.840110 | 1.069304 | 0.001596 | 0.001722 | 0.001756 |
| is_sequence.test | COMPILE | 0.058675 | 0.120432 | 0.147870 | — | — | — |
| is_view.test | COMPILE | 0.060658 | 0.116202 | 0.137229 | — | — | — |
| pair_deque.test | COMPILE | 0.125528 | 0.272804 | 0.314874 | — | — | — |
| pair_list.test | COMPILE | 0.120650 | 0.261740 | 0.316484 | — | — | — |
| pair_map.test | COMPILE | 0.124833 | 0.264407 | 0.333000 | — | — | — |
| pair_set.test | COMPILE | 0.131794 | 0.275253 | 0.336091 | — | — | — |
| pair_vector.test | COMPILE | 0.126460 | 0.266793 | 0.307021 | — | — | — |
| pair_nest.test | COMPILE | 0.050514 | 0.114101 | 0.132041 | — | — | — |
| index_sequence.test | COMPILE | 0.044143 | 0.074838 | 0.092205 | — | — | — |
| and.test | COMPILE | 0.035885 | 0.057426 | 0.068234 | — | — | — |
| tag_of.test | COMPILE | 0.059347 | 0.100516 | 0.125610 | — | — | — |
| unused.test | COMPILE | 0.031186 | 0.071772 | 0.076116 | — | — | — |
| tag_of_fallback.test | COMPILE | 0.049728 | 0.116804 | 0.133013 | — | — | — |
| make_pair_r-value.test | COMPILE | 0.041149 | 0.107430 | 0.120846 | — | — | — |
| quick.test | RUN | 0.167833 | 0.364427 | 0.412240 | 0.000579 | 0.001260 | 0.001144 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.993× | 0.997×, 0.989× | 1.000× |
| clang | 0.999× | 0.994×, 1.004× | 0.992× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1363 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/43916760662).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| adapt_adt.test | 10 | 0.001037s | 0.001046s | 0.001013s | byte equality observed |
| adapt_adt_empty.test | 10 | 0.001012s | 0.001046s | 0.001029s | byte equality observed |
| adapt_adt_named.test | 10 | 0.001040s | 0.001011s | 0.001005s | byte equality observed |
| adapt_adt_named_empty.test | 10 | 0.001034s | 0.001006s | 0.001020s | byte equality observed |
| adapt_assoc_adt.test | 10 | 0.001026s | 0.001013s | 0.001030s | byte equality observed |
| adapt_assoc_adt_empty.test | 10 | 0.001027s | 0.000990s | 0.000999s | byte equality observed |
| adapt_assoc_adt_named.test | 10 | 0.001028s | 0.001020s | 0.001025s | byte equality observed |
| adapt_assoc_adt_named_empty.test | 10 | 0.001010s | 0.001020s | 0.000997s | byte equality observed |
| adapt_assoc_struct.test | 10 | 0.001051s | 0.001024s | 0.001069s | byte equality observed |
| adapt_assoc_struct_empty.test | 10 | 0.001007s | 0.001004s | 0.001034s | byte equality observed |
| adapt_assoc_struct_named.test | 10 | 0.001011s | 0.001007s | 0.001022s | byte equality observed |
| adapt_assoc_struct_named_empty.test | 10 | 0.000995s | 0.000998s | 0.001028s | byte equality observed |
| adapt_assoc_tpl_adt.test | 10 | 0.001004s | 0.001008s | 0.001051s | byte equality observed |
| adapt_assoc_tpl_adt_empty.test | 10 | 0.000990s | 0.001000s | 0.001019s | byte equality observed |
| adapt_assoc_tpl_struct.test | 10 | 0.001033s | 0.001026s | 0.001084s | byte equality observed |
| adapt_assoc_tpl_struct_empty.test | 10 | 0.001011s | 0.001017s | 0.001025s | byte equality observed |
| adapt_struct.test | 10 | 0.001037s | 0.001023s | 0.001043s | byte equality observed |
| adapt_struct_empty.test | 10 | 0.001020s | 0.000994s | 0.001039s | byte equality observed |
| adapt_struct_named.test | 10 | 0.001014s | 0.001004s | 0.001014s | byte equality observed |
| adapt_struct_named_empty.test | 10 | 0.001010s | 0.001017s | 0.001008s | byte equality observed |
| adapt_tpl_adt.test | 10 | 0.001020s | 0.001012s | 0.001005s | byte equality observed |
| adapt_tpl_adt_empty.test | 10 | 0.001027s | 0.001022s | 0.001022s | byte equality observed |
| adapt_tpl_struct.test | 10 | 0.001027s | 0.001012s | 0.001031s | byte equality observed |
| adapt_tpl_struct_empty.test | 10 | 0.001016s | 0.001024s | 0.001031s | byte equality observed |
| adt_attribute_proxy.test | 10 | 0.001011s | 0.001021s | 0.001022s | byte equality observed |
| all.test | 10 | 0.001003s | 0.001008s | 0.000998s | byte equality observed |
| any.test | 10 | 0.001056s | 0.001005s | 0.000997s | byte equality observed |
| array.test | 10 | 0.001010s | 0.001010s | 0.001000s | byte equality observed |
| as_deque.test | 10 | 0.001027s | 0.001009s | 0.001012s | byte equality observed |
| as_list.test | 10 | 0.001052s | 0.001044s | 0.001065s | byte equality observed |
| as_map.test | 10 | 0.001027s | 0.001023s | 0.001038s | byte equality observed |
| as_map_assoc.test | 10 | 0.001012s | 0.001033s | 0.001033s | byte equality observed |
| as_set.test | 10 | 0.001026s | 0.001049s | 0.001015s | byte equality observed |
| as_vector.test | 10 | 0.001036s | 0.001038s | 0.001006s | byte equality observed |
| back_extended_deque.test | 10 | 0.000986s | 0.001004s | 0.000998s | byte equality observed |
| boost_array.test | 10 | 0.001004s | 0.001011s | 0.001036s | byte equality observed |
| boost_tuple.test | 10 | 0.001024s | 0.001023s | 0.001039s | byte equality observed |
| boost_tuple_iterator.test | 10 | 0.000998s | 0.001011s | 0.001006s | byte equality observed |
| clear.test | 10 | 0.001012s | 0.001003s | 0.001042s | byte equality observed |
| cons.test | 10 | 0.001031s | 0.001041s | 0.001040s | byte equality observed |
| convert_boost_tuple.test | 10 | 0.001004s | 0.000990s | 0.001009s | byte equality observed |
| convert_deque.test | 10 | 0.001014s | 0.001054s | 0.001000s | byte equality observed |
| convert_list.test | 10 | 0.001020s | 0.001014s | 0.001017s | byte equality observed |
| convert_std_pair.test | 10 | 0.001013s | 0.001011s | 0.001016s | byte equality observed |
| convert_std_tuple.test | 10 | 0.001002s | 0.001013s | 0.000984s | byte equality observed |
| convert_vector.test | 10 | 0.001005s | 0.001017s | 0.001043s | byte equality observed |
| copy.test | 10 | 0.000993s | 0.000991s | 0.001018s | byte equality observed |
| count.test | 10 | 0.001008s | 0.000991s | 0.001048s | byte equality observed |
| count_if.test | 10 | 0.000991s | 0.001000s | 0.001003s | byte equality observed |
| deduce_sequence.test | 10 | 0.001014s | 0.000984s | 0.001009s | byte equality observed |
| define_assoc_struct.test | 10 | 0.001037s | 0.001039s | 0.001045s | byte equality observed |
| define_assoc_struct_empty.test | 10 | 0.001035s | 0.001022s | 0.001021s | byte equality observed |
| define_assoc_struct_move.test | 10 | 0.001001s | 0.001027s | 0.001016s | byte equality observed |
| define_assoc_tpl_struct.test | 10 | 0.001030s | 0.001016s | 0.001043s | byte equality observed |
| define_assoc_tpl_struct_empty.test | 10 | 0.001051s | 0.001035s | 0.001026s | byte equality observed |
| define_assoc_tpl_struct_move.test | 10 | 0.000991s | 0.000984s | 0.000994s | byte equality observed |
| define_struct.test | 10 | 0.001023s | 0.001028s | 0.001031s | byte equality observed |
| define_struct_empty.test | 10 | 0.001026s | 0.001026s | 0.001022s | byte equality observed |
| define_struct_inline.test | 10 | 0.001041s | 0.001020s | 0.001040s | byte equality observed |
| define_struct_inline_empty.test | 10 | 0.001032s | 0.001010s | 0.001014s | byte equality observed |
| define_struct_inline_move.test | 10 | 0.001012s | 0.001005s | 0.001002s | byte equality observed |
| define_struct_move.test | 10 | 0.000991s | 0.000989s | 0.001012s | byte equality observed |
| define_tpl_struct.test | 10 | 0.001018s | 0.001021s | 0.001036s | byte equality observed |
| define_tpl_struct_empty.test | 10 | 0.001045s | 0.001041s | 0.001045s | byte equality observed |
| define_tpl_struct_inline.test | 10 | 0.001054s | 0.001065s | 0.001054s | byte equality observed |
| define_tpl_struct_inline_empty.test | 10 | 0.001026s | 0.001026s | 0.001039s | byte equality observed |
| define_tpl_struct_inline_move.test | 10 | 0.001008s | 0.000991s | 0.001034s | byte equality observed |
| define_tpl_struct_move.test | 10 | 0.000998s | 0.001015s | 0.001042s | byte equality observed |
| deque_comparison.test | 10 | 0.000988s | 0.001018s | 0.001006s | byte equality observed |
| deque_construction.test | 10 | 0.001024s | 0.000984s | 0.001019s | byte equality observed |
| deque_copy.test | 10 | 0.001024s | 0.001025s | 0.001034s | byte equality observed |
| deque_hash.test | 10 | 0.000998s | 0.001004s | 0.001023s | byte equality observed |
| deque_iterator.test | 10 | 0.000994s | 0.000998s | 0.001000s | byte equality observed |
| deque_make.test | 10 | 0.001009s | 0.001022s | 0.001023s | byte equality observed |
| deque_misc.test | 10 | 0.001006s | 0.000984s | 0.001009s | byte equality observed |
| deque_move.test | 10 | 0.001019s | 0.001021s | 0.001040s | byte equality observed |
| deque_mutate.test | 10 | 0.000996s | 0.001020s | 0.000994s | byte equality observed |
| deque_nest.test | 10 | 0.001024s | 0.001030s | 0.001006s | byte equality observed |
| deque_tie.test | 10 | 0.001015s | 0.001010s | 0.000987s | byte equality observed |
| deque_value_at.test | 10 | 0.001021s | 0.001021s | 0.001011s | byte equality observed |
| erase.test | 10 | 0.001036s | 0.001019s | 0.001028s | byte equality observed |
| erase_key.test | 10 | 0.001037s | 0.001021s | 0.001053s | byte equality observed |
| filter.test | 10 | 0.001041s | 0.001023s | 0.001015s | byte equality observed |
| filter_if.test | 10 | 0.001071s | 0.001038s | 0.001010s | byte equality observed |
| filter_view.test | 10 | 0.001076s | 0.001045s | 0.001025s | byte equality observed |
| find.test | 10 | 0.001048s | 0.001039s | 0.001018s | byte equality observed |
| find_if.test | 10 | 0.001053s | 0.001013s | 0.001020s | byte equality observed |
| flatten.test | 10 | 0.001025s | 0.001027s | 0.000997s | byte equality observed |
| flatten_view.test | 10 | 0.001033s | 0.000994s | 0.001050s | byte equality observed |
| fold.test | 10 | 0.001045s | 0.001032s | 0.001037s | byte equality observed |
| for_each.test | 10 | 0.001048s | 0.001050s | 0.001036s | byte equality observed |
| front_extended_deque.test | 10 | 0.001007s | 0.000998s | 0.000994s | byte equality observed |
| fused.test | 10 | 0.001007s | 0.000986s | 0.001015s | byte equality observed |
| fused_function_object.test | 10 | 0.001000s | 0.001010s | 0.001020s | byte equality observed |
| fused_procedure.test | 10 | 0.001012s | 0.000975s | 0.001006s | byte equality observed |
| github-176.test | 10 | 0.000988s | 0.000975s | 0.001023s | byte equality observed |
| hash.test | 10 | 0.000997s | 0.001034s | 0.001051s | byte equality observed |
| identity_view.test | 10 | 0.001038s | 0.001064s | 0.001012s | byte equality observed |
| insert.test | 10 | 0.001051s | 0.001051s | 0.001090s | byte equality observed |
| insert_range.test | 10 | 0.001054s | 0.001067s | 0.001057s | byte equality observed |
| invoke.test | 10 | 0.001015s | 0.000998s | 0.001007s | byte equality observed |
| invoke_function_object.test | 10 | 0.001013s | 0.001044s | 0.001048s | byte equality observed |
| invoke_procedure.test | 10 | 0.001022s | 0.001006s | 0.000998s | byte equality observed |
| io.test | 10 | 0.001135s | 0.001143s | 0.001140s | byte equality observed |
| iter_fold.test | 10 | 0.001013s | 0.001039s | 0.001012s | byte equality observed |
| iterator_range.test | 10 | 0.001059s | 0.001056s | 0.001046s | byte equality observed |
| join.test | 10 | 0.001011s | 0.001027s | 0.001017s | byte equality observed |
| joint_view.test | 10 | 0.001062s | 0.001057s | 0.001066s | byte equality observed |
| list_comparison.test | 10 | 0.001006s | 0.000995s | 0.000986s | byte equality observed |
| list_construction.test | 10 | 0.001003s | 0.000993s | 0.000991s | byte equality observed |
| list_copy.test | 10 | 0.001005s | 0.001031s | 0.001041s | byte equality observed |
| list_hash.test | 10 | 0.001031s | 0.000991s | 0.001037s | byte equality observed |
| list_iterator.test | 10 | 0.001010s | 0.000993s | 0.001013s | byte equality observed |
| list_make.test | 10 | 0.001019s | 0.001035s | 0.001015s | byte equality observed |
| list_misc.test | 10 | 0.001018s | 0.001014s | 0.000991s | byte equality observed |
| list_mutate.test | 10 | 0.001006s | 0.000999s | 0.000998s | byte equality observed |
| list_nest.test | 10 | 0.001017s | 0.000994s | 0.001008s | byte equality observed |
| list_tie.test | 10 | 0.000997s | 0.000991s | 0.000995s | byte equality observed |
| list_value_at.test | 10 | 0.001018s | 0.000988s | 0.000993s | byte equality observed |
| make_fused.test | 10 | 0.001025s | 0.000987s | 0.000986s | byte equality observed |
| make_fused_function_object.test | 10 | 0.001028s | 0.000989s | 0.000992s | byte equality observed |
| make_fused_procedure.test | 10 | 0.001002s | 0.000977s | 0.001007s | byte equality observed |
| make_list.test | 10 | 0.001017s | 0.001006s | 0.000991s | byte equality observed |
| make_unfused.test | 10 | 0.000997s | 0.001026s | 0.001024s | byte equality observed |
| make_vector.test | 10 | 0.001028s | 0.001016s | 0.001011s | byte equality observed |
| map.test | 10 | 0.001038s | 0.001053s | 0.001037s | byte equality observed |
| map_comparison.test | 10 | 0.001017s | 0.001005s | 0.001046s | byte equality observed |
| map_construction.test | 10 | 0.001038s | 0.001006s | 0.001029s | byte equality observed |
| map_copy.test | 10 | 0.001024s | 0.001032s | 0.001022s | byte equality observed |
| map_misc.test | 10 | 0.001041s | 0.001011s | 0.001057s | byte equality observed |
| map_move.test | 10 | 0.001023s | 0.001038s | 0.001007s | byte equality observed |
| map_mutate.test | 10 | 0.001006s | 0.001024s | 0.000985s | byte equality observed |
| map_tie.test | 10 | 0.001008s | 0.001034s | 0.000984s | byte equality observed |
| move.test | 10 | 0.001010s | 0.001010s | 0.000981s | byte equality observed |
| nil.test | 10 | 0.001023s | 0.001015s | 0.001004s | byte equality observed |
| none.test | 10 | 0.001034s | 0.000996s | 0.000979s | byte equality observed |
| nview.test | 10 | 0.001009s | 0.000996s | 0.001034s | byte equality observed |
| pop_back.test | 10 | 0.001050s | 0.001063s | 0.001045s | byte equality observed |
| pop_front.test | 10 | 0.001026s | 0.001074s | 0.001019s | byte equality observed |
| push_back.test | 10 | 0.001069s | 0.001082s | 0.001035s | byte equality observed |
| push_front.test | 10 | 0.001075s | 0.001035s | 0.001028s | byte equality observed |
| quick.test | 10 | 0.000453s | 0.000979s | 0.000974s | byte equality observed |
| ref_vector.test | 10 | 0.001050s | 0.001039s | 0.001014s | byte equality observed |
| remove.test | 10 | 0.001061s | 0.001032s | 0.001046s | byte equality observed |
| remove_if.test | 10 | 0.001040s | 0.001049s | 0.001040s | byte equality observed |
| repetitive_view.test | 10 | 0.001019s | 0.000999s | 0.000986s | byte equality observed |
| replace.test | 10 | 0.001058s | 0.001013s | 0.001008s | byte equality observed |
| replace_if.test | 10 | 0.001052s | 0.001027s | 0.001037s | byte equality observed |
| reverse.test | 10 | 0.001057s | 0.001021s | 0.001053s | byte equality observed |
| reverse_fold.test | 10 | 0.001033s | 0.001024s | 0.001041s | byte equality observed |
| reverse_iter_fold.test | 10 | 0.001042s | 0.001011s | 0.001027s | byte equality observed |
| reverse_view.test | 10 | 0.001052s | 0.001055s | 0.001061s | byte equality observed |
| segmented_find.test | 10 | 0.001007s | 0.001016s | 0.001004s | byte equality observed |
| segmented_find_if.test | 10 | 0.001000s | 0.001023s | 0.001014s | byte equality observed |
| segmented_fold.test | 10 | 0.001060s | 0.001034s | 0.001043s | byte equality observed |
| segmented_for_each.test | 10 | 0.001069s | 0.001049s | 0.001028s | byte equality observed |
| segmented_iterator_range.test | 10 | 0.001081s | 0.001032s | 0.001044s | byte equality observed |
| set.test | 10 | 0.001028s | 0.001017s | 0.001054s | byte equality observed |
| single_view.test | 10 | 0.001059s | 0.001038s | 0.001046s | byte equality observed |
| std_array.test | 10 | 0.001018s | 0.001016s | 0.001000s | byte equality observed |
| std_pair.test | 10 | 0.001052s | 0.001030s | 0.001032s | byte equality observed |
| std_tuple.test | 10 | 0.001004s | 0.001024s | 0.001019s | byte equality observed |
| std_tuple_iterator.test | 10 | 0.001019s | 0.001004s | 0.000997s | byte equality observed |
| swap.test | 10 | 0.001017s | 0.001054s | 0.001000s | byte equality observed |
| transform.test | 10 | 0.001057s | 0.001035s | 0.001047s | byte equality observed |
| transform_view.test | 10 | 0.001076s | 0.001055s | 0.001035s | byte equality observed |
| tuple_comparison.test | 10 | 0.001013s | 0.000999s | 0.000982s | byte equality observed |
| tuple_construction.test | 10 | 0.000995s | 0.001023s | 0.001003s | byte equality observed |
| tuple_conversion.test | 10 | 0.001020s | 0.001011s | 0.001019s | byte equality observed |
| tuple_copy.test | 10 | 0.000998s | 0.000998s | 0.001008s | byte equality observed |
| tuple_element.test | 10 | 0.001005s | 0.001004s | 0.001002s | byte equality observed |
| tuple_hash.test | 10 | 0.000999s | 0.001044s | 0.000994s | byte equality observed |
| tuple_make.test | 10 | 0.001029s | 0.001013s | 0.001010s | byte equality observed |
| tuple_misc.test | 10 | 0.001018s | 0.001011s | 0.000993s | byte equality observed |
| tuple_mutate.test | 10 | 0.001004s | 0.001018s | 0.001003s | byte equality observed |
| tuple_nest.test | 10 | 0.000999s | 0.001062s | 0.001038s | byte equality observed |
| tuple_tie.test | 10 | 0.001000s | 0.001010s | 0.001000s | byte equality observed |
| tuple_traits__maybe_variadic.test | 10 | 0.000994s | 0.001011s | 0.000997s | byte equality observed |
| tuple_traits__no_variadic.test | 10 | 0.000990s | 0.000969s | 0.001005s | byte equality observed |
| unfused.test | 10 | 0.000999s | 0.000991s | 0.001001s | byte equality observed |
| unfused_typed.test | 10 | 0.000997s | 0.000994s | 0.001003s | byte equality observed |
| vector_comparison.test | 10 | 0.000997s | 0.000986s | 0.000992s | byte equality observed |
| vector_construction.test | 10 | 0.001025s | 0.001039s | 0.000975s | byte equality observed |
| vector_conversion.test | 10 | 0.001011s | 0.001028s | 0.001019s | byte equality observed |
| vector_copy.test | 10 | 0.001022s | 0.001013s | 0.001024s | byte equality observed |
| vector_hash.test | 10 | 0.000997s | 0.001021s | 0.001009s | byte equality observed |
| vector_iterator.test | 10 | 0.001022s | 0.001036s | 0.000992s | byte equality observed |
| vector_make.test | 10 | 0.001024s | 0.001010s | 0.001030s | byte equality observed |
| vector_misc.test | 10 | 0.001010s | 0.001016s | 0.000993s | byte equality observed |
| vector_move.test | 10 | 0.001043s | 0.001011s | 0.001030s | byte equality observed |
| vector_mutate.test | 10 | 0.001006s | 0.001004s | 0.000981s | byte equality observed |
| vector_n.test | 10 | 0.001043s | 0.001013s | 0.001030s | byte equality observed |
| vector_nest.test | 10 | 0.000988s | 0.001049s | 0.000998s | byte equality observed |
| vector_tie.test | 10 | 0.001007s | 0.000997s | 0.001001s | byte equality observed |
| vector_traits__maybe_variadic.test | 10 | 0.000995s | 0.000988s | 0.000996s | byte equality observed |
| vector_traits__no_variadic.test | 10 | 0.001004s | 0.000992s | 0.000980s | byte equality observed |
| vector_value_at.test | 10 | 0.001011s | 0.000980s | 0.000972s | byte equality observed |
| zip.test | 10 | 0.001008s | 0.000994s | 0.000984s | byte equality observed |
| zip2.test | 10 | 0.001012s | 0.000982s | 0.001028s | byte equality observed |
| zip_ignore.test | 10 | 0.001014s | 0.001021s | 0.001048s | byte equality observed |
| zip_view.test | 10 | 0.001006s | 0.000982s | 0.000989s | byte equality observed |
| zip_view2.test | 10 | 0.000996s | 0.001022s | 0.001004s | byte equality observed |
| zip_view_ignore.test | 9 | 0.001000s | 0.001046s | 0.000985s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/43916760662).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
