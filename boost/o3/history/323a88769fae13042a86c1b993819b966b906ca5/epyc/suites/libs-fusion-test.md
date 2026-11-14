# libs/fusion/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| all.test | RUN | 0.372645 | 0.747490 | 1.059710 | 0.001664 | 0.001770 | 0.001643 |
| any.test | RUN | 0.363052 | 0.683132 | 1.003579 | 0.001496 | 0.001545 | 0.001890 |
| clear.test | RUN | 0.259631 | 0.651127 | 0.825956 | 0.001603 | 0.001741 | 0.001844 |
| copy.test | RUN | 0.220580 | 0.485380 | 0.669635 | 0.001772 | 0.001894 | 0.001778 |
| count.test | RUN | 0.254915 | 0.550177 | 0.740036 | 0.001862 | 0.001794 | 0.001786 |
| count_if.test | RUN | 0.234847 | 0.489334 | 0.680516 | 0.001666 | 0.001900 | 0.001817 |
| erase.test | RUN | 0.328372 | 0.912308 | 1.098108 | 0.001831 | 0.001746 | 0.001634 |
| erase_key.test | RUN | 0.320983 | 0.884360 | 1.044037 | 0.001574 | 0.001672 | 0.001776 |
| filter.test | RUN | 0.286411 | 0.783545 | 0.937557 | 0.001701 | 0.001888 | 0.001848 |
| filter_if.test | RUN | 0.323983 | 0.935810 | 1.122980 | 0.001624 | 0.001627 | 0.001863 |
| find.test | RUN | 0.278735 | 0.595803 | 0.865091 | 0.001702 | 0.001664 | 0.001691 |
| find_if.test | RUN | 0.263107 | 0.576103 | 0.772905 | 0.001677 | 0.001584 | 0.001904 |
| fold.test | RUN | 0.288471 | 0.705137 | 0.980012 | 0.001860 | 0.001901 | 0.001622 |
| for_each.test | RUN | 0.260672 | 0.632589 | 0.815143 | 0.001300 | 0.001868 | 0.001767 |
| insert.test | RUN | 0.379052 | 1.139479 | 1.361352 | 0.001916 | 0.001868 | 0.001812 |
| insert_range.test | RUN | 0.386351 | 1.149447 | 1.367434 | 0.001616 | 0.001579 | 0.001762 |
| iter_fold.test | RUN | 0.453346 | 1.076013 | 1.572340 | 0.001832 | 0.001950 | 0.001862 |
| move.test | RUN | 0.222060 | 0.524433 | 0.690216 | 0.001894 | 0.001930 | 0.001841 |
| none.test | RUN | 0.366154 | 0.744233 | 1.057623 | 0.001574 | 0.001927 | 0.001820 |
| pop_back.test | RUN | 0.352138 | 0.977281 | 1.199876 | 0.001754 | 0.001606 | 0.002026 |
| pop_front.test | RUN | 0.294624 | 0.777291 | 0.946398 | 0.001871 | 0.001752 | 0.001544 |
| push_back.test | RUN | 0.364277 | 1.140185 | 1.313336 | 0.001709 | 0.001930 | 0.001650 |
| push_front.test | RUN | 0.324461 | 0.950587 | 1.098203 | 0.001763 | 0.001838 | 0.001875 |
| remove.test | RUN | 0.361758 | 1.070725 | 1.327354 | 0.001666 | 0.001860 | 0.001537 |
| remove_if.test | RUN | 0.325690 | 0.893258 | 1.130877 | 0.001411 | 0.001970 | 0.001732 |
| replace.test | RUN | 0.320222 | 0.854242 | 1.037916 | 0.001895 | 0.001872 | 0.001748 |
| replace_if.test | RUN | 0.313516 | 0.873107 | 1.021281 | 0.001960 | 0.001832 | 0.001824 |
| reverse_fold.test | RUN | 0.517217 | 1.225174 | 1.766774 | 0.001772 | 0.001646 | 0.001594 |
| reverse_iter_fold.test | RUN | 0.523148 | 1.270188 | 1.838318 | 0.001478 | 0.001890 | 0.001546 |
| reverse.test | RUN | 0.309691 | 0.882646 | 1.026498 | 0.001675 | 0.001855 | 0.001776 |
| segmented_for_each.test | RUN | 0.543918 | 1.688547 | 2.085957 | 0.001780 | 0.001419 | 0.001456 |
| segmented_find.test | RUN | 0.346132 | 0.881447 | 1.186490 | 0.001696 | 0.001768 | 0.001526 |
| segmented_find_if.test | RUN | 0.339306 | 0.897086 | 1.199046 | 0.001811 | 0.001769 | 0.001850 |
| segmented_fold.test | RUN | 0.427427 | 1.188881 | 1.511392 | 0.002004 | 0.001948 | 0.001817 |
| transform.test | RUN | 0.326521 | 0.917688 | 1.116754 | 0.001606 | 0.001879 | 0.001834 |
| join.test | RUN | 0.246727 | 0.573651 | 0.760139 | 0.001862 | 0.001868 | 0.001781 |
| zip.test | RUN | 0.441041 | 1.105170 | 1.500291 | 0.001664 | 0.001903 | 0.001934 |
| zip2.test | RUN | 0.438867 | 1.090762 | 1.421441 | 0.001918 | 0.001725 | 0.001756 |
| zip_ignore.test | RUN | 0.319320 | 0.678927 | 0.952830 | 0.001536 | 0.001950 | 0.001468 |
| flatten.test | RUN | 0.298572 | 0.817701 | 0.939876 | 0.001702 | 0.001980 | 0.001858 |
| ticket-5490.test | COMPILE | 0.164811 | 0.329967 | 0.412381 | — | — | — |
| as_deque.test | RUN | 0.316449 | 0.759487 | 1.029747 | 0.001468 | 0.001889 | 0.001773 |
| as_list.test | RUN | 0.333884 | 0.893086 | 1.058495 | 0.001728 | 0.001622 | 0.001642 |
| as_map.test | RUN | 0.334061 | 0.871207 | 1.088593 | 0.001585 | 0.001904 | 0.001752 |
| as_map_assoc.test | RUN | 0.329155 | 0.835918 | 1.029331 | 0.001583 | 0.002004 | 0.001734 |
| as_set.test | RUN | 0.373060 | 1.052352 | 1.293709 | 0.001678 | 0.001604 | 0.001832 |
| as_vector.test | RUN | 0.330277 | 0.931286 | 1.095876 | 0.001554 | 0.001629 | 0.001763 |
| boost_tuple.test | RUN | 0.333719 | 0.912693 | 1.127887 | 0.001682 | 0.001803 | 0.001538 |
| boost_tuple_iterator.test | RUN | 0.236434 | 0.549486 | 0.685842 | 0.001666 | 0.001656 | 0.001646 |
| cons.test | RUN | 0.422390 | 1.059370 | 1.305679 | 0.001701 | 0.001894 | 0.001815 |
| convert_boost_tuple.test | RUN | 0.263736 | 0.791397 | 0.858683 | 0.001645 | 0.001742 | 0.001612 |
| convert_deque.test | RUN | 0.266844 | 0.763707 | 0.863655 | 0.001603 | 0.001668 | 0.001522 |
| convert_list.test | RUN | 0.261157 | 0.778502 | 0.881220 | 0.001628 | 0.001619 | 0.001738 |
| convert_std_pair.test | RUN | 0.275440 | 0.799073 | 0.887657 | 0.001725 | 0.001598 | 0.001782 |
| convert_std_tuple.test | RUN | 0.262164 | 0.763818 | 0.870528 | 0.001532 | 0.001557 | 0.001688 |
| convert_vector.test | RUN | 0.262656 | 0.773512 | 0.867776 | 0.001538 | 0.001586 | 0.001946 |
| filter_view.test | RUN | 0.318734 | 0.827550 | 1.048484 | 0.001772 | 0.001828 | 0.001840 |
| hash.test | RUN | 0.313731 | 0.732360 | 1.016337 | 0.001936 | 0.001399 | 0.001788 |
| io.test | RUN | 0.332462 | 1.038041 | 1.172159 | 0.001465 | 0.002118 | 0.002056 |
| iterator_range.test | RUN | 0.300719 | 0.787629 | 0.963087 | 0.001540 | 0.001880 | 0.001683 |
| joint_view.test | RUN | 0.406898 | 1.325889 | 1.493088 | 0.001892 | 0.001897 | 0.001734 |
| list_comparison.test | RUN | 0.234051 | 0.541953 | 0.746224 | 0.001751 | 0.001783 | 0.001475 |
| list_construction.test | RUN | 0.233419 | 0.534125 | 0.704847 | 0.001533 | 0.001539 | 0.001855 |
| list_copy.test | RUN | 0.350066 | 0.969104 | 1.211740 | 0.001748 | 0.001692 | 0.001879 |
| list_iterator.test | RUN | 0.232489 | 0.556704 | 0.679956 | 0.001815 | 0.001528 | 0.001961 |
| list_hash.test | RUN | 0.312356 | 1.037832 | 0.983143 | 0.001564 | 0.001898 | 0.001740 |
| list_make.test | RUN | 0.241236 | 0.597146 | 0.745127 | 0.001683 | 0.001816 | 0.001790 |
| list_misc.test | RUN | 0.318321 | 0.698633 | 0.912694 | 0.001835 | 0.001893 | 0.001770 |
| list_mutate.test | RUN | 0.224646 | 0.448610 | 0.602397 | 0.001558 | 0.001788 | 0.001359 |
| list_nest.test | RUN | 0.431696 | 1.331256 | 1.675030 | 0.001596 | 0.001512 | 0.001679 |
| list_tie.test | RUN | 0.234827 | 0.529640 | 0.673301 | 0.001862 | 0.001892 | 0.001762 |
| list_value_at.test | RUN | 0.227807 | 0.507441 | 0.629486 | 0.001592 | 0.001807 | 0.001832 |
| deque_comparison.test | RUN | 0.240718 | 0.582492 | 0.742602 | 0.001951 | 0.001854 | 0.001558 |
| deque_construction.test | RUN | 0.255164 | 0.526565 | 0.661207 | 0.001890 | 0.001909 | 0.001809 |
| deque_copy.test | RUN | 0.336077 | 0.905168 | 1.120559 | 0.001640 | 0.001482 | 0.001785 |
| deque_iterator.test | RUN | 0.237292 | 0.561106 | 0.654323 | 0.001796 | 0.001799 | 0.001792 |
| deque_hash.test | RUN | 0.331508 | 0.984981 | 1.005083 | 0.001760 | 0.001937 | 0.001804 |
| deque_is_constructible.test | COMPILE | 0.125672 | 0.248178 | 0.318062 | — | — | — |
| deque_make.test | RUN | 0.237479 | 0.568698 | 0.702006 | 0.001753 | 0.001586 | 0.001738 |
| deque_misc.test | RUN | 0.308715 | 0.669500 | 0.881430 | 0.001705 | 0.001283 | 0.001816 |
| deque_move.test | RUN | 0.238480 | 0.585782 | 0.685240 | 0.001658 | 0.001814 | 0.001642 |
| deque_mutate.test | RUN | 0.218868 | 0.465040 | 0.617833 | 0.002122 | 0.001753 | 0.001758 |
| deque_nest.test | RUN | 0.675884 | 2.073505 | 2.629137 | 0.001632 | 0.001903 | 0.001556 |
| deque_tie.test | RUN | 0.237532 | 0.501742 | 0.636117 | 0.001878 | 0.001652 | 0.001660 |
| deque_value_at.test | RUN | 0.235172 | 0.461134 | 0.657505 | 0.001814 | 0.001812 | 0.001632 |
| front_extended_deque.test | RUN | 0.316956 | 0.699376 | 0.943138 | 0.001716 | 0.001846 | 0.001671 |
| back_extended_deque.test | RUN | 0.332201 | 0.698317 | 0.931563 | 0.001750 | 0.001753 | 0.001780 |
| make_list.test | RUN | 0.252821 | 0.593334 | 0.754919 | 0.001867 | 0.001732 | 0.001888 |
| make_vector.test | RUN | 0.264641 | 0.565888 | 0.696314 | 0.001888 | 0.001859 | 0.001237 |
| map.test | RUN | 0.329543 | 0.876610 | 1.036973 | 0.001698 | 0.001830 | 0.001534 |
| map_comparison.test | RUN | 0.250677 | 0.551279 | 0.699904 | 0.001870 | 0.001902 | 0.001865 |
| map_construction.test | RUN | 0.241296 | 0.539397 | 0.698324 | 0.001756 | 0.001701 | 0.001897 |
| map_copy.test | RUN | 0.286104 | 0.688332 | 0.870862 | 0.001816 | 0.001890 | 0.001750 |
| map_misc.test | RUN | 0.308231 | 0.681877 | 0.879478 | 0.001547 | 0.001836 | 0.001454 |
| map_move.test | RUN | 0.241156 | 0.572797 | 0.709928 | 0.001762 | 0.001530 | 0.001460 |
| map_mutate.test | RUN | 0.222211 | 0.475899 | 0.602244 | 0.001563 | 0.001792 | 0.001647 |
| map_tie.test | RUN | 0.220564 | 0.469809 | 0.635382 | 0.001818 | 0.001825 | 0.001750 |
| nil.test | RUN | 0.153002 | 0.339193 | 0.415826 | 0.001812 | 0.001758 | 0.001690 |
| nview.test | RUN | 0.302762 | 0.696340 | 0.923617 | 0.001869 | 0.001858 | 0.001758 |
| reverse_view.test | RUN | 0.387599 | 1.102432 | 1.320673 | 0.001969 | 0.001877 | 0.001830 |
| segmented_iterator_range.test | RUN | 0.471268 | 1.337067 | 1.619377 | 0.001294 | 0.001712 | 0.001644 |
| set.test | RUN | 0.299373 | 0.758533 | 0.921718 | 0.001774 | 0.001786 | 0.001768 |
| single_view.test | RUN | 0.261138 | 0.697875 | 0.856421 | 0.001778 | 0.001933 | 0.001942 |
| std_pair.test | RUN | 0.334814 | 0.868159 | 1.074268 | 0.001842 | 0.001896 | 0.001804 |
| boost_array.test | RUN | 0.280912 | 0.612804 | 0.807184 | 0.001708 | 0.001862 | 0.001706 |
| array.test | RUN | 0.277758 | 0.609148 | 0.784019 | 0.001738 | 0.001538 | 0.001576 |
| std_array.test | RUN | 0.284315 | 0.608848 | 0.807841 | 0.001594 | 0.001862 | 0.001846 |
| tuple_comparison.test | RUN | 0.261349 | 0.582952 | 0.744753 | 0.001794 | 0.001818 | 0.001864 |
| tuple_construction.test | RUN | 0.260933 | 0.569785 | 0.741953 | 0.001810 | 0.001923 | 0.001475 |
| tuple_conversion.test | RUN | 0.550216 | 1.771680 | 2.433364 | 0.001575 | 0.001874 | 0.001842 |
| tuple_copy.test | RUN | 0.372236 | 1.055984 | 1.300031 | 0.001757 | 0.001754 | 0.001270 |
| tuple_element.test | RUN | 0.248311 | 0.543426 | 0.726068 | 0.001603 | 0.001686 | 0.001582 |
| tuple_make.test | RUN | 0.258585 | 0.638047 | 0.799729 | 0.001794 | 0.001963 | 0.001648 |
| tuple_misc.test | RUN | 0.326322 | 0.740363 | 0.934512 | 0.001610 | 0.001806 | 0.001669 |
| tuple_mutate.test | RUN | 0.228805 | 0.501430 | 0.675988 | 0.001722 | 0.001367 | 0.001949 |
| tuple_nest.test | RUN | 0.930613 | 3.689789 | 4.619555 | 0.001608 | 0.001895 | 0.001826 |
| tuple_hash.test | RUN | 0.329297 | 1.014552 | 0.983905 | 0.001682 | 0.001724 | 0.001572 |
| tuple_tie.test | RUN | 0.248784 | 0.564340 | 0.743404 | 0.001788 | 0.001726 | 0.001457 |
| tuple_traits__maybe_variadic.test | RUN | 0.259148 | 0.684289 | 0.782987 | 0.001600 | 0.001878 | 0.001390 |
| tuple_traits__no_variadic.test | RUN | 0.299036 | 0.688841 | 0.835777 | 0.001982 | 0.001926 | 0.001693 |
| transform_view.test | RUN | 0.406583 | 1.112965 | 1.324818 | 0.001924 | 0.001735 | 0.001500 |
| identity_view.test | RUN | 0.385043 | 1.089403 | 1.228510 | 0.001803 | 0.001731 | 0.001652 |
| vector_comparison.test | RUN | 0.252366 | 0.566141 | 0.718266 | 0.001552 | 0.001649 | 0.001808 |
| vector_construction.test | RUN | 0.250747 | 0.531681 | 0.702083 | 0.001758 | 0.001908 | 0.001820 |
| vector_conversion.test | RUN | 0.663383 | 2.352652 | 3.124055 | 0.001826 | 0.001883 | 0.001862 |
| vector_copy.test | RUN | 0.357644 | 1.017965 | 1.315511 | 0.001600 | 0.001592 | 0.001630 |
| vector_iterator.test | RUN | 0.234969 | 0.562505 | 0.716521 | 0.001587 | 0.001820 | 0.001807 |
| vector_make.test | RUN | 0.252070 | 0.588643 | 0.715411 | 0.001804 | 0.001757 | 0.001768 |
| vector_misc.test | RUN | 0.311956 | 0.750881 | 0.937790 | 0.001526 | 0.001730 | 0.001669 |
| vector_move.test | RUN | 0.241817 | 0.576930 | 0.678236 | 0.001858 | 0.001859 | 0.001929 |
| vector_mutate.test | RUN | 0.222182 | 0.473372 | 0.599439 | 0.001581 | 0.001684 | 0.001724 |
| vector_n.test | RUN | 0.271407 | 0.596214 | 0.823084 | 0.001892 | 0.001977 | 0.001817 |
| vector_nest.test | RUN | 0.927488 | 3.869847 | 4.618782 | 0.001800 | 0.001804 | 0.001617 |
| vector_hash.test | RUN | 0.316326 | 1.022573 | 0.995665 | 0.001656 | 0.001911 | 0.001487 |
| vector_tie.test | RUN | 0.225561 | 0.521847 | 0.647006 | 0.001768 | 0.001992 | 0.001883 |
| vector_traits__maybe_variadic.test | RUN | 0.248255 | 0.605188 | 0.689420 | 0.001865 | 0.001779 | 0.001699 |
| vector_traits__no_variadic.test | RUN | 0.262479 | 0.687326 | 0.716129 | 0.001614 | 0.001818 | 0.001743 |
| vector_value_at.test | RUN | 0.219856 | 0.492207 | 0.667070 | 0.001265 | 0.001836 | 0.001750 |
| zip_view.test | RUN | 0.461580 | 1.181811 | 1.626149 | 0.001892 | 0.002017 | 0.001503 |
| zip_view2.test | RUN | 0.373239 | 0.894441 | 1.249469 | 0.001563 | 0.001509 | 0.001765 |
| zip_view_ignore.test | RUN | 0.343793 | 0.820777 | 1.104098 | 0.001634 | 0.001644 | 0.001716 |
| repetitive_view.test | RUN | 0.594873 | 1.546403 | 2.194875 | 0.001822 | 0.001752 | 0.001558 |
| deduce_sequence.test | RUN | 0.300908 | 0.646324 | 0.859159 | 0.001534 | 0.001750 | 0.001718 |
| adapt_adt_named.test | RUN | 0.333953 | 0.913099 | 1.056941 | 0.001864 | 0.001800 | 0.001862 |
| adapt_adt_named_empty.test | RUN | 0.294767 | 0.717753 | 0.892708 | 0.001658 | 0.001900 | 0.001633 |
| adapt_adt.test | RUN | 0.383833 | 1.210654 | 1.255910 | 0.001661 | 0.001916 | 0.001867 |
| adapt_adt_empty.test | RUN | 0.286386 | 0.718765 | 0.897724 | 0.001840 | 0.001761 | 0.001936 |
| adapt_assoc_adt_named.test | RUN | 0.377319 | 0.937189 | 1.165319 | 0.001447 | 0.002022 | 0.002078 |
| adapt_assoc_adt_named_empty.test | RUN | 0.297888 | 0.710895 | 0.900308 | 0.001850 | 0.001750 | 0.001899 |
| adapt_assoc_adt.test | RUN | 0.380963 | 0.980351 | 1.201895 | 0.001648 | 0.001835 | 0.001577 |
| adapt_assoc_adt_empty.test | RUN | 0.296572 | 0.718783 | 0.894153 | 0.001734 | 0.001910 | 0.001814 |
| adapt_assoc_struct_named.test | RUN | 0.367854 | 0.930536 | 1.116204 | 0.001914 | 0.001908 | 0.001660 |
| adapt_assoc_struct_named_empty.test | RUN | 0.298783 | 0.708096 | 0.864469 | 0.001567 | 0.001748 | 0.001864 |
| adapt_assoc_struct.test | RUN | 0.335278 | 0.880301 | 1.045686 | 0.001533 | 0.001913 | 0.001603 |
| adapt_assoc_struct_empty.test | RUN | 0.288043 | 0.710904 | 0.856115 | 0.001552 | 0.001742 | 0.001662 |
| adapt_assoc_tpl_adt.test | RUN | 0.387464 | 1.016630 | 1.217246 | 0.001856 | 0.001951 | 0.001528 |
| adapt_assoc_tpl_adt_empty.test | RUN | 0.290069 | 0.712529 | 0.868727 | 0.001825 | 0.002028 | 0.001856 |
| adapt_assoc_tpl_struct.test | RUN | 0.335062 | 0.866453 | 1.008257 | 0.001884 | 0.001943 | 0.001623 |
| adapt_assoc_tpl_struct_empty.test | RUN | 0.293381 | 0.732439 | 0.882633 | 0.001866 | 0.001781 | 0.001572 |
| adapt_struct_named.test | RUN | 0.337311 | 0.872697 | 1.026733 | 0.001623 | 0.001902 | 0.001924 |
| adapt_struct_named_empty.test | RUN | 0.299500 | 0.732980 | 0.879343 | 0.001542 | 0.001709 | 0.001832 |
| adapt_struct.test | RUN | 0.356354 | 1.028757 | 1.158042 | 0.001684 | 0.001823 | 0.001842 |
| adapt_struct_empty.test | RUN | 0.285161 | 0.716359 | 0.880551 | 0.001820 | 0.001680 | 0.001512 |
| adapt_tpl_adt.test | RUN | 0.361709 | 1.172067 | 1.229343 | 0.001616 | 0.001616 | 0.001732 |
| adapt_tpl_adt_empty.test | RUN | 0.289218 | 0.746695 | 0.854286 | 0.001691 | 0.001961 | 0.001752 |
| adapt_tpl_struct.test | RUN | 0.306322 | 0.783345 | 0.972587 | 0.001814 | 0.001606 | 0.001660 |
| adapt_tpl_struct_empty.test | RUN | 0.293290 | 0.747841 | 0.861449 | 0.001588 | 0.001792 | 0.001502 |
| adt_attribute_proxy.test | RUN | 0.321513 | 0.724228 | 0.928937 | 0.001843 | 0.001922 | 0.001351 |
| define_struct.test | RUN | 0.385667 | 0.985465 | 1.223233 | 0.001858 | 0.001804 | 0.001782 |
| define_struct_empty.test | RUN | 0.343419 | 0.816807 | 1.026679 | 0.001797 | 0.001970 | 0.001376 |
| define_struct_move.test | RUN | 0.220967 | 0.475810 | 0.605167 | 0.001776 | 0.001888 | 0.001634 |
| define_struct_inline.test | RUN | 0.416232 | 1.152672 | 1.391107 | 0.001633 | 0.001603 | 0.001795 |
| define_struct_inline_empty.test | RUN | 0.346133 | 0.806360 | 1.035216 | 0.001612 | 0.001698 | 0.001811 |
| define_struct_inline_move.test | RUN | 0.230257 | 0.491901 | 0.625691 | 0.001632 | 0.001568 | 0.001704 |
| define_assoc_struct.test | RUN | 0.392132 | 0.959958 | 1.123071 | 0.001896 | 0.001977 | 0.001855 |
| define_assoc_struct_empty.test | RUN | 0.349461 | 0.822225 | 1.030867 | 0.001785 | 0.001968 | 0.001767 |
| define_assoc_struct_move.test | RUN | 0.221870 | 0.465508 | 0.619729 | 0.001795 | 0.001811 | 0.001760 |
| define_tpl_struct.test | RUN | 0.387977 | 0.974337 | 1.146061 | 0.001890 | 0.001956 | 0.001804 |
| define_tpl_struct_empty.test | RUN | 0.363466 | 0.830547 | 1.014716 | 0.001803 | 0.001816 | 0.001431 |
| define_tpl_struct_move.test | RUN | 0.229846 | 0.491826 | 0.626155 | 0.001614 | 0.001774 | 0.001526 |
| define_tpl_struct_inline.test | RUN | 0.409390 | 1.121194 | 1.277362 | 0.001853 | 0.001612 | 0.001796 |
| define_tpl_struct_inline_empty.test | RUN | 0.349439 | 0.823654 | 0.986535 | 0.001445 | 0.001670 | 0.001830 |
| define_tpl_struct_inline_move.test | RUN | 0.229054 | 0.482853 | 0.631977 | 0.001830 | 0.001687 | 0.001827 |
| define_assoc_tpl_struct.test | RUN | 0.390209 | 0.983513 | 1.192457 | 0.001832 | 0.001883 | 0.001793 |
| define_assoc_tpl_struct_empty.test | RUN | 0.354477 | 0.821760 | 1.006375 | 0.001704 | 0.001943 | 0.001634 |
| define_assoc_tpl_struct_move.test | RUN | 0.222684 | 0.469128 | 0.595590 | 0.001792 | 0.001815 | 0.001774 |
| std_tuple.test | RUN | 0.228899 | 0.529770 | 0.649694 | 0.001621 | 0.001571 | 0.001812 |
| std_tuple_iterator.test | RUN | 0.232484 | 0.565999 | 0.669902 | 0.001732 | 0.001553 | 0.001799 |
| ref_vector.test | RUN | 0.260159 | 0.567264 | 0.703690 | 0.001616 | 0.001896 | 0.001814 |
| flatten_view.test | RUN | 0.275189 | 0.693770 | 0.858258 | 0.001834 | 0.001812 | 0.001802 |
| github-159.test | COMPILE | 0.124434 | 0.250800 | 0.320573 | — | — | — |
| github-176.test | RUN | 0.255844 | 0.624144 | 0.736099 | 0.001824 | 0.001758 | 0.001735 |
| size.test | COMPILE | 0.217634 | 0.442568 | 0.557808 | — | — | — |
| fused.test | RUN | 0.304679 | 0.658054 | 0.876617 | 0.001567 | 0.001691 | 0.001720 |
| fused_function_object.test | RUN | 0.230207 | 0.504697 | 0.639524 | 0.001553 | 0.001572 | 0.001836 |
| fused_procedure.test | RUN | 0.305745 | 0.628483 | 0.813677 | 0.001705 | 0.001875 | 0.001572 |
| unfused.test | RUN | 0.244309 | 0.527101 | 0.674979 | 0.001843 | 0.001800 | 0.001458 |
| unfused_typed.test | RUN | 0.241621 | 0.561180 | 0.701353 | 0.001637 | 0.001675 | 0.001817 |
| make_fused.test | RUN | 0.314470 | 0.672722 | 0.901777 | 0.001491 | 0.001798 | 0.001552 |
| make_fused_function_object.test | RUN | 0.233403 | 0.496922 | 0.627155 | 0.001593 | 0.001751 | 0.001490 |
| make_fused_procedure.test | RUN | 0.305051 | 0.640915 | 0.846980 | 0.001817 | 0.001866 | 0.001674 |
| make_unfused.test | RUN | 0.235578 | 0.502644 | 0.673960 | 0.001864 | 0.001785 | 0.001833 |
| invoke.test | RUN | 0.639962 | 1.863496 | 2.314409 | 0.001602 | 0.001872 | 0.001231 |
| invoke_function_object.test | RUN | 0.280651 | 0.676851 | 0.833181 | 0.002068 | 0.001963 | 0.001784 |
| invoke_procedure.test | RUN | 0.507452 | 1.367132 | 1.679263 | 0.001730 | 0.001826 | 0.001608 |
| swap.test | RUN | 0.371975 | 0.854897 | 1.119235 | 0.001532 | 0.001891 | 0.001422 |
| is_sequence.test | COMPILE | 0.060591 | 0.123237 | 0.139939 | — | — | — |
| is_view.test | COMPILE | 0.059253 | 0.123072 | 0.139790 | — | — | — |
| pair_deque.test | COMPILE | 0.129492 | 0.278573 | 0.348751 | — | — | — |
| pair_list.test | COMPILE | 0.126415 | 0.258838 | 0.330738 | — | — | — |
| pair_map.test | COMPILE | 0.130768 | 0.265995 | 0.328263 | — | — | — |
| pair_set.test | COMPILE | 0.132512 | 0.273368 | 0.329416 | — | — | — |
| pair_vector.test | COMPILE | 0.132908 | 0.268579 | 0.322564 | — | — | — |
| pair_nest.test | COMPILE | 0.053504 | 0.110629 | 0.126100 | — | — | — |
| index_sequence.test | COMPILE | 0.046156 | 0.078389 | 0.099797 | — | — | — |
| and.test | COMPILE | 0.036090 | 0.058780 | 0.066553 | — | — | — |
| tag_of.test | COMPILE | 0.061427 | 0.108363 | 0.129297 | — | — | — |
| unused.test | COMPILE | 0.032010 | 0.076607 | 0.081106 | — | — | — |
| tag_of_fallback.test | COMPILE | 0.059093 | 0.116837 | 0.124226 | — | — | — |
| make_pair_r-value.test | COMPILE | 0.051808 | 0.080853 | 0.083117 | — | — | — |
| quick.test | RUN | 0.177330 | 0.370400 | 0.408349 | 0.000633 | 0.001333 | 0.001238 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 1.003× | 1.008×, 0.998× | 0.997× |
| clang | 0.995× | 1.009×, 0.981× | 0.985× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1363 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43620819273).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| adapt_adt.test | 10 | 0.001037s | 0.001043s | 0.001028s | byte equality observed |
| adapt_adt_empty.test | 10 | 0.001059s | 0.001016s | 0.001041s | byte equality observed |
| adapt_adt_named.test | 10 | 0.001038s | 0.001024s | 0.001032s | byte equality observed |
| adapt_adt_named_empty.test | 10 | 0.001016s | 0.001036s | 0.001012s | byte equality observed |
| adapt_assoc_adt.test | 10 | 0.001027s | 0.001029s | 0.001037s | byte equality observed |
| adapt_assoc_adt_empty.test | 10 | 0.001013s | 0.001000s | 0.001025s | byte equality observed |
| adapt_assoc_adt_named.test | 10 | 0.001018s | 0.001065s | 0.001019s | byte equality observed |
| adapt_assoc_adt_named_empty.test | 10 | 0.001014s | 0.001037s | 0.001013s | byte equality observed |
| adapt_assoc_struct.test | 10 | 0.001023s | 0.001044s | 0.001039s | byte equality observed |
| adapt_assoc_struct_empty.test | 10 | 0.001010s | 0.001054s | 0.001037s | byte equality observed |
| adapt_assoc_struct_named.test | 10 | 0.001019s | 0.001041s | 0.001007s | byte equality observed |
| adapt_assoc_struct_named_empty.test | 10 | 0.001005s | 0.001014s | 0.001018s | byte equality observed |
| adapt_assoc_tpl_adt.test | 10 | 0.001004s | 0.001026s | 0.001028s | byte equality observed |
| adapt_assoc_tpl_adt_empty.test | 10 | 0.001039s | 0.001011s | 0.001024s | byte equality observed |
| adapt_assoc_tpl_struct.test | 10 | 0.001054s | 0.001043s | 0.001039s | byte equality observed |
| adapt_assoc_tpl_struct_empty.test | 10 | 0.001040s | 0.001023s | 0.001016s | byte equality observed |
| adapt_struct.test | 10 | 0.001073s | 0.001039s | 0.001062s | byte equality observed |
| adapt_struct_empty.test | 10 | 0.001050s | 0.001017s | 0.001013s | byte equality observed |
| adapt_struct_named.test | 10 | 0.001050s | 0.001015s | 0.001004s | byte equality observed |
| adapt_struct_named_empty.test | 10 | 0.001044s | 0.001041s | 0.001033s | byte equality observed |
| adapt_tpl_adt.test | 10 | 0.001035s | 0.001068s | 0.001017s | byte equality observed |
| adapt_tpl_adt_empty.test | 10 | 0.001038s | 0.001031s | 0.000998s | byte equality observed |
| adapt_tpl_struct.test | 10 | 0.001023s | 0.001011s | 0.001050s | byte equality observed |
| adapt_tpl_struct_empty.test | 10 | 0.001023s | 0.001033s | 0.001012s | byte equality observed |
| adt_attribute_proxy.test | 10 | 0.001020s | 0.001016s | 0.000999s | byte equality observed |
| all.test | 10 | 0.001021s | 0.001048s | 0.001007s | byte equality observed |
| any.test | 10 | 0.001000s | 0.001038s | 0.001007s | byte equality observed |
| array.test | 10 | 0.001009s | 0.001046s | 0.000997s | byte equality observed |
| as_deque.test | 10 | 0.001003s | 0.001004s | 0.000993s | byte equality observed |
| as_list.test | 10 | 0.001046s | 0.001055s | 0.001053s | byte equality observed |
| as_map.test | 10 | 0.001050s | 0.001056s | 0.001028s | byte equality observed |
| as_map_assoc.test | 10 | 0.001030s | 0.001050s | 0.001037s | byte equality observed |
| as_set.test | 10 | 0.001061s | 0.001056s | 0.001052s | byte equality observed |
| as_vector.test | 10 | 0.001057s | 0.001052s | 0.001038s | byte equality observed |
| back_extended_deque.test | 10 | 0.001008s | 0.001003s | 0.001008s | byte equality observed |
| boost_array.test | 10 | 0.000997s | 0.001016s | 0.001014s | byte equality observed |
| boost_tuple.test | 10 | 0.001047s | 0.001045s | 0.001030s | byte equality observed |
| boost_tuple_iterator.test | 10 | 0.001014s | 0.000990s | 0.001009s | byte equality observed |
| clear.test | 10 | 0.001035s | 0.001036s | 0.001043s | byte equality observed |
| cons.test | 10 | 0.001041s | 0.001055s | 0.001060s | byte equality observed |
| convert_boost_tuple.test | 10 | 0.001016s | 0.001013s | 0.001026s | byte equality observed |
| convert_deque.test | 10 | 0.001038s | 0.001017s | 0.001019s | byte equality observed |
| convert_list.test | 10 | 0.001018s | 0.001013s | 0.001003s | byte equality observed |
| convert_std_pair.test | 10 | 0.001023s | 0.001041s | 0.000969s | byte equality observed |
| convert_std_tuple.test | 10 | 0.001006s | 0.001025s | 0.001007s | byte equality observed |
| convert_vector.test | 10 | 0.001046s | 0.001034s | 0.000991s | byte equality observed |
| copy.test | 10 | 0.001008s | 0.001020s | 0.001030s | byte equality observed |
| count.test | 10 | 0.001011s | 0.001025s | 0.001022s | byte equality observed |
| count_if.test | 10 | 0.001015s | 0.001003s | 0.001034s | byte equality observed |
| deduce_sequence.test | 10 | 0.001006s | 0.001010s | 0.000999s | byte equality observed |
| define_assoc_struct.test | 10 | 0.001028s | 0.001030s | 0.001006s | byte equality observed |
| define_assoc_struct_empty.test | 10 | 0.001022s | 0.000993s | 0.001010s | byte equality observed |
| define_assoc_struct_move.test | 10 | 0.001011s | 0.001020s | 0.001023s | byte equality observed |
| define_assoc_tpl_struct.test | 10 | 0.001049s | 0.001037s | 0.001043s | byte equality observed |
| define_assoc_tpl_struct_empty.test | 10 | 0.001034s | 0.001035s | 0.001017s | byte equality observed |
| define_assoc_tpl_struct_move.test | 10 | 0.001020s | 0.000986s | 0.001027s | byte equality observed |
| define_struct.test | 10 | 0.001030s | 0.001051s | 0.001027s | byte equality observed |
| define_struct_empty.test | 10 | 0.001024s | 0.001061s | 0.001039s | byte equality observed |
| define_struct_inline.test | 10 | 0.001032s | 0.001050s | 0.001062s | byte equality observed |
| define_struct_inline_empty.test | 10 | 0.001018s | 0.001084s | 0.000996s | byte equality observed |
| define_struct_inline_move.test | 10 | 0.001015s | 0.000985s | 0.000996s | byte equality observed |
| define_struct_move.test | 10 | 0.001018s | 0.000989s | 0.000997s | byte equality observed |
| define_tpl_struct.test | 10 | 0.001035s | 0.001042s | 0.001046s | byte equality observed |
| define_tpl_struct_empty.test | 10 | 0.001039s | 0.001023s | 0.001030s | byte equality observed |
| define_tpl_struct_inline.test | 10 | 0.001039s | 0.001022s | 0.001026s | byte equality observed |
| define_tpl_struct_inline_empty.test | 10 | 0.001014s | 0.001010s | 0.001035s | byte equality observed |
| define_tpl_struct_inline_move.test | 10 | 0.001017s | 0.000974s | 0.001045s | byte equality observed |
| define_tpl_struct_move.test | 10 | 0.001016s | 0.001023s | 0.000985s | byte equality observed |
| deque_comparison.test | 10 | 0.001009s | 0.001029s | 0.000979s | byte equality observed |
| deque_construction.test | 10 | 0.000980s | 0.001007s | 0.000986s | byte equality observed |
| deque_copy.test | 10 | 0.001006s | 0.001021s | 0.001031s | byte equality observed |
| deque_hash.test | 10 | 0.001012s | 0.001023s | 0.001004s | byte equality observed |
| deque_iterator.test | 10 | 0.001002s | 0.000998s | 0.001024s | byte equality observed |
| deque_make.test | 10 | 0.001004s | 0.001029s | 0.001012s | byte equality observed |
| deque_misc.test | 10 | 0.001003s | 0.001009s | 0.001012s | byte equality observed |
| deque_move.test | 10 | 0.001010s | 0.001058s | 0.001014s | byte equality observed |
| deque_mutate.test | 10 | 0.001012s | 0.001016s | 0.000991s | byte equality observed |
| deque_nest.test | 10 | 0.001028s | 0.001028s | 0.001017s | byte equality observed |
| deque_tie.test | 10 | 0.001013s | 0.001021s | 0.001033s | byte equality observed |
| deque_value_at.test | 10 | 0.001017s | 0.001030s | 0.001034s | byte equality observed |
| erase.test | 10 | 0.001056s | 0.001032s | 0.001028s | byte equality observed |
| erase_key.test | 10 | 0.001057s | 0.001089s | 0.001031s | byte equality observed |
| filter.test | 10 | 0.001057s | 0.001030s | 0.001041s | byte equality observed |
| filter_if.test | 10 | 0.001102s | 0.001068s | 0.001046s | byte equality observed |
| filter_view.test | 10 | 0.001077s | 0.001046s | 0.001050s | byte equality observed |
| find.test | 10 | 0.001072s | 0.001041s | 0.001036s | byte equality observed |
| find_if.test | 10 | 0.001043s | 0.001038s | 0.001027s | byte equality observed |
| flatten.test | 10 | 0.001028s | 0.001014s | 0.001003s | byte equality observed |
| flatten_view.test | 10 | 0.001013s | 0.001012s | 0.001027s | byte equality observed |
| fold.test | 10 | 0.001038s | 0.001054s | 0.001017s | byte equality observed |
| for_each.test | 10 | 0.001060s | 0.001046s | 0.001027s | byte equality observed |
| front_extended_deque.test | 10 | 0.001032s | 0.001001s | 0.001014s | byte equality observed |
| fused.test | 10 | 0.001034s | 0.001010s | 0.001011s | byte equality observed |
| fused_function_object.test | 10 | 0.001013s | 0.000990s | 0.001016s | byte equality observed |
| fused_procedure.test | 10 | 0.001006s | 0.001010s | 0.001028s | byte equality observed |
| github-176.test | 10 | 0.001014s | 0.001028s | 0.001002s | byte equality observed |
| hash.test | 10 | 0.001008s | 0.001019s | 0.001011s | byte equality observed |
| identity_view.test | 10 | 0.001057s | 0.001045s | 0.001028s | byte equality observed |
| insert.test | 10 | 0.001041s | 0.001061s | 0.001040s | byte equality observed |
| insert_range.test | 10 | 0.001050s | 0.001041s | 0.001052s | byte equality observed |
| invoke.test | 10 | 0.000993s | 0.000995s | 0.001022s | byte equality observed |
| invoke_function_object.test | 10 | 0.001003s | 0.001017s | 0.000991s | byte equality observed |
| invoke_procedure.test | 10 | 0.001016s | 0.000978s | 0.001017s | byte equality observed |
| io.test | 10 | 0.001155s | 0.001149s | 0.001159s | byte equality observed |
| iter_fold.test | 10 | 0.001008s | 0.001020s | 0.001041s | byte equality observed |
| iterator_range.test | 10 | 0.001051s | 0.001076s | 0.001056s | byte equality observed |
| join.test | 10 | 0.001001s | 0.000985s | 0.001002s | byte equality observed |
| joint_view.test | 10 | 0.001073s | 0.001091s | 0.001069s | byte equality observed |
| list_comparison.test | 10 | 0.001002s | 0.001015s | 0.001009s | byte equality observed |
| list_construction.test | 10 | 0.001008s | 0.000975s | 0.001012s | byte equality observed |
| list_copy.test | 10 | 0.001025s | 0.001000s | 0.001000s | byte equality observed |
| list_hash.test | 10 | 0.001051s | 0.001013s | 0.001030s | byte equality observed |
| list_iterator.test | 10 | 0.001000s | 0.000994s | 0.000997s | byte equality observed |
| list_make.test | 10 | 0.001017s | 0.001007s | 0.001033s | byte equality observed |
| list_misc.test | 10 | 0.001011s | 0.000987s | 0.001042s | byte equality observed |
| list_mutate.test | 10 | 0.001031s | 0.000982s | 0.001026s | byte equality observed |
| list_nest.test | 10 | 0.001019s | 0.000992s | 0.000996s | byte equality observed |
| list_tie.test | 10 | 0.001012s | 0.001052s | 0.001003s | byte equality observed |
| list_value_at.test | 10 | 0.001009s | 0.001001s | 0.001021s | byte equality observed |
| make_fused.test | 10 | 0.001009s | 0.001011s | 0.000998s | byte equality observed |
| make_fused_function_object.test | 10 | 0.000990s | 0.001012s | 0.001016s | byte equality observed |
| make_fused_procedure.test | 10 | 0.001008s | 0.000972s | 0.000994s | byte equality observed |
| make_list.test | 10 | 0.001007s | 0.000976s | 0.001001s | byte equality observed |
| make_unfused.test | 10 | 0.001029s | 0.000991s | 0.000985s | byte equality observed |
| make_vector.test | 10 | 0.001017s | 0.001009s | 0.001020s | byte equality observed |
| map.test | 10 | 0.001041s | 0.001042s | 0.001052s | byte equality observed |
| map_comparison.test | 10 | 0.001019s | 0.001009s | 0.000987s | byte equality observed |
| map_construction.test | 10 | 0.001029s | 0.000990s | 0.001014s | byte equality observed |
| map_copy.test | 10 | 0.001039s | 0.001030s | 0.001002s | byte equality observed |
| map_misc.test | 10 | 0.001000s | 0.000999s | 0.001021s | byte equality observed |
| map_move.test | 10 | 0.001030s | 0.001024s | 0.001009s | byte equality observed |
| map_mutate.test | 10 | 0.000998s | 0.001029s | 0.001019s | byte equality observed |
| map_tie.test | 10 | 0.001017s | 0.001016s | 0.001029s | byte equality observed |
| move.test | 10 | 0.001021s | 0.001012s | 0.001014s | byte equality observed |
| nil.test | 10 | 0.000993s | 0.001046s | 0.001024s | byte equality observed |
| none.test | 10 | 0.001000s | 0.001012s | 0.000998s | byte equality observed |
| nview.test | 10 | 0.001020s | 0.001018s | 0.001016s | byte equality observed |
| pop_back.test | 10 | 0.001053s | 0.001062s | 0.001059s | byte equality observed |
| pop_front.test | 10 | 0.001046s | 0.001041s | 0.001048s | byte equality observed |
| push_back.test | 10 | 0.001052s | 0.001044s | 0.001057s | byte equality observed |
| push_front.test | 10 | 0.001058s | 0.001045s | 0.001053s | byte equality observed |
| quick.test | 10 | 0.000464s | 0.000966s | 0.001018s | byte equality observed |
| ref_vector.test | 10 | 0.001040s | 0.001048s | 0.001029s | byte equality observed |
| remove.test | 10 | 0.001054s | 0.001052s | 0.001057s | byte equality observed |
| remove_if.test | 10 | 0.001049s | 0.001034s | 0.001050s | byte equality observed |
| repetitive_view.test | 10 | 0.000990s | 0.000994s | 0.000978s | byte equality observed |
| replace.test | 10 | 0.001017s | 0.001047s | 0.001030s | byte equality observed |
| replace_if.test | 10 | 0.001048s | 0.001041s | 0.001044s | byte equality observed |
| reverse.test | 10 | 0.001042s | 0.001022s | 0.001059s | byte equality observed |
| reverse_fold.test | 10 | 0.001034s | 0.001053s | 0.001027s | byte equality observed |
| reverse_iter_fold.test | 10 | 0.001018s | 0.001039s | 0.001016s | byte equality observed |
| reverse_view.test | 10 | 0.001036s | 0.001041s | 0.001029s | byte equality observed |
| segmented_find.test | 10 | 0.000996s | 0.001030s | 0.001005s | byte equality observed |
| segmented_find_if.test | 10 | 0.001003s | 0.000997s | 0.001044s | byte equality observed |
| segmented_fold.test | 10 | 0.001016s | 0.001041s | 0.001046s | byte equality observed |
| segmented_for_each.test | 10 | 0.001023s | 0.001039s | 0.001019s | byte equality observed |
| segmented_iterator_range.test | 10 | 0.001031s | 0.001058s | 0.001035s | byte equality observed |
| set.test | 10 | 0.001039s | 0.001056s | 0.001022s | byte equality observed |
| single_view.test | 10 | 0.001042s | 0.001076s | 0.001022s | byte equality observed |
| std_array.test | 10 | 0.000997s | 0.001018s | 0.000996s | byte equality observed |
| std_pair.test | 10 | 0.001046s | 0.001037s | 0.001048s | byte equality observed |
| std_tuple.test | 10 | 0.001019s | 0.001009s | 0.001046s | byte equality observed |
| std_tuple_iterator.test | 10 | 0.001028s | 0.001010s | 0.001069s | byte equality observed |
| swap.test | 10 | 0.001006s | 0.001025s | 0.001009s | byte equality observed |
| transform.test | 10 | 0.001040s | 0.001034s | 0.001052s | byte equality observed |
| transform_view.test | 10 | 0.001045s | 0.001038s | 0.001058s | byte equality observed |
| tuple_comparison.test | 10 | 0.001017s | 0.000987s | 0.000988s | byte equality observed |
| tuple_construction.test | 10 | 0.001007s | 0.000969s | 0.000981s | byte equality observed |
| tuple_conversion.test | 10 | 0.000987s | 0.000990s | 0.000993s | byte equality observed |
| tuple_copy.test | 10 | 0.001020s | 0.000978s | 0.000987s | byte equality observed |
| tuple_element.test | 10 | 0.001036s | 0.000998s | 0.001009s | byte equality observed |
| tuple_hash.test | 10 | 0.001014s | 0.000975s | 0.001026s | byte equality observed |
| tuple_make.test | 10 | 0.001009s | 0.001020s | 0.001025s | byte equality observed |
| tuple_misc.test | 10 | 0.001020s | 0.000989s | 0.000992s | byte equality observed |
| tuple_mutate.test | 10 | 0.001019s | 0.001016s | 0.001003s | byte equality observed |
| tuple_nest.test | 10 | 0.001015s | 0.001023s | 0.001006s | byte equality observed |
| tuple_tie.test | 10 | 0.001029s | 0.001034s | 0.000989s | byte equality observed |
| tuple_traits__maybe_variadic.test | 10 | 0.000992s | 0.001042s | 0.001017s | byte equality observed |
| tuple_traits__no_variadic.test | 10 | 0.001003s | 0.001034s | 0.001006s | byte equality observed |
| unfused.test | 10 | 0.001008s | 0.001055s | 0.001018s | byte equality observed |
| unfused_typed.test | 10 | 0.000991s | 0.001022s | 0.000986s | byte equality observed |
| vector_comparison.test | 10 | 0.000988s | 0.001012s | 0.000997s | byte equality observed |
| vector_construction.test | 10 | 0.001003s | 0.001011s | 0.001007s | byte equality observed |
| vector_conversion.test | 10 | 0.000993s | 0.001032s | 0.001009s | byte equality observed |
| vector_copy.test | 10 | 0.001005s | 0.001024s | 0.001008s | byte equality observed |
| vector_hash.test | 10 | 0.001057s | 0.001016s | 0.001002s | byte equality observed |
| vector_iterator.test | 10 | 0.001012s | 0.000997s | 0.001010s | byte equality observed |
| vector_make.test | 10 | 0.001022s | 0.001001s | 0.001025s | byte equality observed |
| vector_misc.test | 10 | 0.000991s | 0.001002s | 0.001004s | byte equality observed |
| vector_move.test | 10 | 0.001037s | 0.001038s | 0.001031s | byte equality observed |
| vector_mutate.test | 10 | 0.001009s | 0.001016s | 0.000993s | byte equality observed |
| vector_n.test | 10 | 0.001036s | 0.001051s | 0.001028s | byte equality observed |
| vector_nest.test | 10 | 0.000995s | 0.001016s | 0.001007s | byte equality observed |
| vector_tie.test | 10 | 0.001020s | 0.001022s | 0.001002s | byte equality observed |
| vector_traits__maybe_variadic.test | 10 | 0.001025s | 0.000992s | 0.000967s | byte equality observed |
| vector_traits__no_variadic.test | 10 | 0.000989s | 0.000987s | 0.000997s | byte equality observed |
| vector_value_at.test | 10 | 0.001022s | 0.000998s | 0.001000s | byte equality observed |
| zip.test | 10 | 0.000984s | 0.001001s | 0.001005s | byte equality observed |
| zip2.test | 10 | 0.001000s | 0.001040s | 0.001010s | byte equality observed |
| zip_ignore.test | 10 | 0.000994s | 0.000984s | 0.001014s | byte equality observed |
| zip_view.test | 10 | 0.001030s | 0.000998s | 0.000995s | byte equality observed |
| zip_view2.test | 10 | 0.001015s | 0.001015s | 0.000999s | byte equality observed |
| zip_view_ignore.test | 10 | 0.001024s | 0.001004s | 0.001008s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43620819273).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
