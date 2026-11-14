# libs/fusion/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| all.test | RUN | 0.361350 | 0.712030 | 1.041196 | 0.001560 | 0.001560 | 0.001744 |
| any.test | RUN | 0.358932 | 0.674454 | 0.973693 | 0.001781 | 0.001567 | 0.001654 |
| clear.test | RUN | 0.250429 | 0.639857 | 0.797991 | 0.001509 | 0.001706 | 0.001680 |
| copy.test | RUN | 0.223329 | 0.479956 | 0.662631 | 0.001546 | 0.001654 | 0.001730 |
| count.test | RUN | 0.242404 | 0.535735 | 0.735278 | 0.001642 | 0.001736 | 0.001694 |
| count_if.test | RUN | 0.230691 | 0.509626 | 0.677403 | 0.001541 | 0.001914 | 0.001658 |
| erase.test | RUN | 0.320417 | 0.852412 | 1.085010 | 0.001440 | 0.001846 | 0.001588 |
| erase_key.test | RUN | 0.310514 | 0.862360 | 1.016194 | 0.001552 | 0.001707 | 0.001778 |
| filter.test | RUN | 0.285942 | 0.739977 | 0.895668 | 0.001877 | 0.001740 | 0.001653 |
| filter_if.test | RUN | 0.319056 | 0.867030 | 1.092027 | 0.001592 | 0.001657 | 0.001830 |
| find.test | RUN | 0.271091 | 0.596923 | 0.831204 | 0.001417 | 0.001699 | 0.001872 |
| find_if.test | RUN | 0.259204 | 0.557495 | 0.763777 | 0.001760 | 0.001687 | 0.001888 |
| fold.test | RUN | 0.289680 | 0.655913 | 0.935243 | 0.001634 | 0.001862 | 0.001768 |
| for_each.test | RUN | 0.271495 | 0.621135 | 0.810130 | 0.001654 | 0.001781 | 0.001836 |
| insert.test | RUN | 0.394674 | 1.089305 | 1.292152 | 0.001685 | 0.001944 | 0.001833 |
| insert_range.test | RUN | 0.399235 | 1.106891 | 1.304912 | 0.001700 | 0.001694 | 0.001636 |
| iter_fold.test | RUN | 0.452056 | 1.072653 | 1.567669 | 0.001846 | 0.001909 | 0.001802 |
| move.test | RUN | 0.224909 | 0.508111 | 0.665732 | 0.001840 | 0.001817 | 0.001721 |
| none.test | RUN | 0.364390 | 0.714442 | 1.010853 | 0.001731 | 0.001981 | 0.001754 |
| pop_back.test | RUN | 0.347899 | 0.956487 | 1.156982 | 0.001424 | 0.001555 | 0.001445 |
| pop_front.test | RUN | 0.290964 | 0.777086 | 0.951220 | 0.001702 | 0.001825 | 0.001599 |
| push_back.test | RUN | 0.360259 | 1.107921 | 1.264955 | 0.001958 | 0.001928 | 0.001898 |
| push_front.test | RUN | 0.322628 | 0.912530 | 1.083990 | 0.001584 | 0.001933 | 0.001793 |
| remove.test | RUN | 0.360179 | 1.050991 | 1.283031 | 0.001668 | 0.002026 | 0.001764 |
| remove_if.test | RUN | 0.321176 | 0.859351 | 1.111756 | 0.001550 | 0.001971 | 0.001760 |
| replace.test | RUN | 0.306341 | 0.829137 | 1.009443 | 0.001792 | 0.001974 | 0.001872 |
| replace_if.test | RUN | 0.307823 | 0.818475 | 1.016196 | 0.001915 | 0.001954 | 0.001836 |
| reverse_fold.test | RUN | 0.489251 | 1.179158 | 1.706816 | 0.001688 | 0.001905 | 0.001692 |
| reverse_iter_fold.test | RUN | 0.505188 | 1.257315 | 1.830979 | 0.001835 | 0.001772 | 0.001684 |
| reverse.test | RUN | 0.305538 | 0.874229 | 1.033201 | 0.001613 | 0.001905 | 0.001809 |
| segmented_for_each.test | RUN | 0.520689 | 1.586802 | 2.056551 | 0.001688 | 0.001772 | 0.001632 |
| segmented_find.test | RUN | 0.321859 | 0.881198 | 1.167244 | 0.001564 | 0.001729 | 0.001659 |
| segmented_find_if.test | RUN | 0.324362 | 0.880909 | 1.166268 | 0.001694 | 0.001779 | 0.001868 |
| segmented_fold.test | RUN | 0.413444 | 1.151022 | 1.493706 | 0.001742 | 0.002010 | 0.001822 |
| transform.test | RUN | 0.324858 | 0.909963 | 1.089605 | 0.002462 | 0.001761 | 0.001778 |
| join.test | RUN | 0.237209 | 0.563551 | 0.743411 | 0.001719 | 0.001760 | 0.001729 |
| zip.test | RUN | 0.443369 | 1.117483 | 1.432190 | 0.001650 | 0.002001 | 0.001888 |
| zip2.test | RUN | 0.424758 | 1.035622 | 1.402108 | 0.001772 | 0.001764 | 0.001690 |
| zip_ignore.test | RUN | 0.320787 | 0.690936 | 0.946026 | 0.001744 | 0.001567 | 0.001680 |
| flatten.test | RUN | 0.286803 | 0.759661 | 0.917927 | 0.001574 | 0.001828 | 0.001522 |
| ticket-5490.test | COMPILE | 0.156794 | 0.328389 | 0.409201 | — | — | — |
| as_deque.test | RUN | 0.293270 | 0.730631 | 1.031298 | 0.001808 | 0.001900 | 0.001710 |
| as_list.test | RUN | 0.325494 | 0.914750 | 1.049065 | 0.001562 | 0.001663 | 0.001608 |
| as_map.test | RUN | 0.317038 | 0.900898 | 1.079897 | 0.001743 | 0.001692 | 0.001834 |
| as_map_assoc.test | RUN | 0.320098 | 0.817195 | 1.015145 | 0.001566 | 0.001684 | 0.001639 |
| as_set.test | RUN | 0.357279 | 1.016702 | 1.264852 | 0.001631 | 0.001896 | 0.001640 |
| as_vector.test | RUN | 0.328829 | 0.938819 | 1.075285 | 0.001638 | 0.001684 | 0.001799 |
| boost_tuple.test | RUN | 0.326409 | 0.933307 | 1.105573 | 0.001548 | 0.001769 | 0.001600 |
| boost_tuple_iterator.test | RUN | 0.224273 | 0.550553 | 0.676167 | 0.001417 | 0.001634 | 0.001755 |
| cons.test | RUN | 0.418729 | 1.021873 | 1.305853 | 0.001562 | 0.001732 | 0.001874 |
| convert_boost_tuple.test | RUN | 0.257960 | 0.777148 | 0.862097 | 0.001773 | 0.001628 | 0.001698 |
| convert_deque.test | RUN | 0.258297 | 0.778807 | 0.850439 | 0.001786 | 0.001592 | 0.001511 |
| convert_list.test | RUN | 0.262879 | 0.795832 | 0.840634 | 0.001465 | 0.001739 | 0.001625 |
| convert_std_pair.test | RUN | 0.274187 | 0.781037 | 0.863408 | 0.001644 | 0.001747 | 0.001654 |
| convert_std_tuple.test | RUN | 0.261100 | 0.768141 | 0.856687 | 0.001491 | 0.001685 | 0.001707 |
| convert_vector.test | RUN | 0.260623 | 0.767990 | 0.845736 | 0.001470 | 0.001587 | 0.001460 |
| filter_view.test | RUN | 0.313868 | 0.823622 | 1.033608 | 0.001856 | 0.001873 | 0.001834 |
| hash.test | RUN | 0.305264 | 0.735312 | 0.972980 | 0.001828 | 0.001731 | 0.001819 |
| io.test | RUN | 0.315817 | 1.021493 | 1.157585 | 0.001651 | 0.002140 | 0.002092 |
| iterator_range.test | RUN | 0.291971 | 0.778886 | 0.982099 | 0.001656 | 0.001938 | 0.001395 |
| joint_view.test | RUN | 0.388777 | 1.336444 | 1.446678 | 0.001840 | 0.001842 | 0.001643 |
| list_comparison.test | RUN | 0.235422 | 0.588797 | 0.727460 | 0.001544 | 0.001492 | 0.001452 |
| list_construction.test | RUN | 0.232808 | 0.582005 | 0.684865 | 0.001611 | 0.001476 | 0.001745 |
| list_copy.test | RUN | 0.334846 | 0.974500 | 1.193798 | 0.001783 | 0.001814 | 0.001815 |
| list_iterator.test | RUN | 0.229697 | 0.555165 | 0.651325 | 0.001624 | 0.001573 | 0.001809 |
| list_hash.test | RUN | 0.305894 | 1.006257 | 0.973903 | 0.001621 | 0.001534 | 0.001565 |
| list_make.test | RUN | 0.247593 | 0.584718 | 0.736654 | 0.001742 | 0.001692 | 0.001784 |
| list_misc.test | RUN | 0.310195 | 0.698183 | 0.900961 | 0.001570 | 0.001781 | 0.001809 |
| list_mutate.test | RUN | 0.217129 | 0.473747 | 0.619399 | 0.001585 | 0.001876 | 0.001818 |
| list_nest.test | RUN | 0.424446 | 1.292133 | 1.643174 | 0.001496 | 0.001766 | 0.001477 |
| list_tie.test | RUN | 0.230012 | 0.546129 | 0.661393 | 0.001860 | 0.001817 | 0.001801 |
| list_value_at.test | RUN | 0.216916 | 0.483337 | 0.646250 | 0.001585 | 0.001810 | 0.001797 |
| deque_comparison.test | RUN | 0.228134 | 0.556614 | 0.701962 | 0.001622 | 0.001402 | 0.001828 |
| deque_construction.test | RUN | 0.227337 | 0.528468 | 0.754677 | 0.001480 | 0.001868 | 0.001583 |
| deque_copy.test | RUN | 0.333539 | 0.928605 | 1.142796 | 0.001630 | 0.001682 | 0.001710 |
| deque_iterator.test | RUN | 0.224481 | 0.557763 | 0.709867 | 0.001791 | 0.001691 | 0.001544 |
| deque_hash.test | RUN | 0.319691 | 0.973593 | 0.973849 | 0.001478 | 0.001936 | 0.001794 |
| deque_is_constructible.test | COMPILE | 0.120927 | 0.248816 | 0.322311 | — | — | — |
| deque_make.test | RUN | 0.230439 | 0.564452 | 0.720540 | 0.001641 | 0.001952 | 0.001870 |
| deque_misc.test | RUN | 0.306308 | 0.712301 | 0.886654 | 0.001492 | 0.001338 | 0.001347 |
| deque_move.test | RUN | 0.237550 | 0.573560 | 0.707199 | 0.001695 | 0.001891 | 0.001700 |
| deque_mutate.test | RUN | 0.212708 | 0.461289 | 0.598540 | 0.001618 | 0.001759 | 0.001701 |
| deque_nest.test | RUN | 0.641897 | 2.109085 | 2.640059 | 0.001809 | 0.001896 | 0.001814 |
| deque_tie.test | RUN | 0.218722 | 0.519650 | 0.677893 | 0.001763 | 0.001707 | 0.001610 |
| deque_value_at.test | RUN | 0.213741 | 0.464417 | 0.624291 | 0.001501 | 0.001928 | 0.001965 |
| front_extended_deque.test | RUN | 0.321359 | 0.714954 | 0.940416 | 0.001825 | 0.001926 | 0.001798 |
| back_extended_deque.test | RUN | 0.320305 | 0.743279 | 0.939492 | 0.001708 | 0.001944 | 0.001797 |
| make_list.test | RUN | 0.241696 | 0.574551 | 0.755809 | 0.001876 | 0.001975 | 0.001736 |
| make_vector.test | RUN | 0.241597 | 0.581601 | 0.703200 | 0.001692 | 0.001874 | 0.001821 |
| map.test | RUN | 0.318425 | 0.868113 | 1.032892 | 0.001847 | 0.001972 | 0.001724 |
| map_comparison.test | RUN | 0.240785 | 0.538464 | 0.702704 | 0.001683 | 0.001756 | 0.001856 |
| map_construction.test | RUN | 0.238026 | 0.558435 | 0.719380 | 0.001611 | 0.001662 | 0.001511 |
| map_copy.test | RUN | 0.285391 | 0.685449 | 0.844800 | 0.001263 | 0.001938 | 0.001765 |
| map_misc.test | RUN | 0.300304 | 0.688680 | 0.877286 | 0.001510 | 0.001792 | 0.001426 |
| map_move.test | RUN | 0.233673 | 0.586159 | 0.713418 | 0.001592 | 0.001759 | 0.001558 |
| map_mutate.test | RUN | 0.210476 | 0.490148 | 0.603303 | 0.001823 | 0.002008 | 0.001635 |
| map_tie.test | RUN | 0.215990 | 0.466389 | 0.617078 | 0.001604 | 0.001879 | 0.001839 |
| nil.test | RUN | 0.148636 | 0.329800 | 0.442082 | 0.001758 | 0.001959 | 0.001768 |
| nview.test | RUN | 0.295851 | 0.686745 | 0.898636 | 0.001853 | 0.002030 | 0.001874 |
| reverse_view.test | RUN | 0.380365 | 1.122854 | 1.321346 | 0.001670 | 0.001981 | 0.001851 |
| segmented_iterator_range.test | RUN | 0.445217 | 1.353183 | 1.678611 | 0.001880 | 0.001769 | 0.001923 |
| set.test | RUN | 0.284385 | 0.766048 | 0.914945 | 0.001579 | 0.001719 | 0.001816 |
| single_view.test | RUN | 0.263410 | 0.685254 | 0.863793 | 0.001816 | 0.001986 | 0.001622 |
| std_pair.test | RUN | 0.333832 | 0.891653 | 1.060284 | 0.001835 | 0.001861 | 0.001524 |
| boost_array.test | RUN | 0.280398 | 0.625307 | 0.810026 | 0.001511 | 0.001772 | 0.001570 |
| array.test | RUN | 0.277578 | 0.632723 | 0.800841 | 0.001510 | 0.001810 | 0.001608 |
| std_array.test | RUN | 0.283961 | 0.616530 | 0.811176 | 0.001836 | 0.001532 | 0.001572 |
| tuple_comparison.test | RUN | 0.247342 | 0.600017 | 0.756441 | 0.001750 | 0.001851 | 0.001689 |
| tuple_construction.test | RUN | 0.254279 | 0.597704 | 0.766441 | 0.001638 | 0.001773 | 0.001477 |
| tuple_conversion.test | RUN | 0.537556 | 1.791657 | 2.405252 | 0.001688 | 0.001635 | 0.001658 |
| tuple_copy.test | RUN | 0.369731 | 1.043518 | 1.308590 | 0.001487 | 0.001776 | 0.001209 |
| tuple_element.test | RUN | 0.244180 | 0.506753 | 0.686554 | 0.001870 | 0.001946 | 0.001571 |
| tuple_make.test | RUN | 0.253984 | 0.604183 | 0.747939 | 0.001608 | 0.001418 | 0.001635 |
| tuple_misc.test | RUN | 0.326957 | 0.743195 | 0.998218 | 0.001735 | 0.001808 | 0.001708 |
| tuple_mutate.test | RUN | 0.229954 | 0.499599 | 0.655772 | 0.001787 | 0.001531 | 0.001569 |
| tuple_nest.test | RUN | 0.902826 | 3.648331 | 4.513713 | 0.001584 | 0.001853 | 0.001647 |
| tuple_hash.test | RUN | 0.326762 | 1.000603 | 1.034419 | 0.001765 | 0.001883 | 0.001638 |
| tuple_tie.test | RUN | 0.233369 | 0.539488 | 0.714748 | 0.001717 | 0.001830 | 0.001677 |
| tuple_traits__maybe_variadic.test | RUN | 0.258016 | 0.687946 | 0.763852 | 0.001769 | 0.001867 | 0.001728 |
| tuple_traits__no_variadic.test | RUN | 0.288299 | 0.672295 | 0.828990 | 0.001737 | 0.002000 | 0.001801 |
| transform_view.test | RUN | 0.366944 | 1.089658 | 1.304007 | 0.001680 | 0.001839 | 0.001678 |
| identity_view.test | RUN | 0.365243 | 1.028007 | 1.224097 | 0.001652 | 0.001606 | 0.001700 |
| vector_comparison.test | RUN | 0.232167 | 0.577816 | 0.701118 | 0.001596 | 0.001824 | 0.001717 |
| vector_construction.test | RUN | 0.237428 | 0.521756 | 0.741888 | 0.001512 | 0.001933 | 0.001508 |
| vector_conversion.test | RUN | 0.662276 | 2.352086 | 3.026279 | 0.001813 | 0.001751 | 0.001774 |
| vector_copy.test | RUN | 0.347113 | 1.041238 | 1.283569 | 0.001754 | 0.001573 | 0.001458 |
| vector_iterator.test | RUN | 0.237141 | 0.541206 | 0.655987 | 0.001422 | 0.001674 | 0.001784 |
| vector_make.test | RUN | 0.235001 | 0.588110 | 0.708233 | 0.001528 | 0.001783 | 0.001720 |
| vector_misc.test | RUN | 0.300865 | 0.692227 | 0.879949 | 0.001361 | 0.001762 | 0.001566 |
| vector_move.test | RUN | 0.238114 | 0.612847 | 0.694749 | 0.001867 | 0.001384 | 0.001620 |
| vector_mutate.test | RUN | 0.215779 | 0.470924 | 0.646663 | 0.001818 | 0.001695 | 0.001704 |
| vector_n.test | RUN | 0.258982 | 0.596497 | 0.817228 | 0.001877 | 0.001939 | 0.001800 |
| vector_nest.test | RUN | 0.944138 | 3.725506 | 4.607562 | 0.001830 | 0.001584 | 0.001800 |
| vector_hash.test | RUN | 0.319393 | 0.975351 | 0.939482 | 0.001724 | 0.001908 | 0.001674 |
| vector_tie.test | RUN | 0.224946 | 0.519111 | 0.690171 | 0.001746 | 0.001768 | 0.001571 |
| vector_traits__maybe_variadic.test | RUN | 0.243656 | 0.640507 | 0.736083 | 0.001721 | 0.001714 | 0.001723 |
| vector_traits__no_variadic.test | RUN | 0.261786 | 0.661271 | 0.743736 | 0.001837 | 0.001642 | 0.001423 |
| vector_value_at.test | RUN | 0.231861 | 0.492298 | 0.646444 | 0.001762 | 0.001596 | 0.001478 |
| zip_view.test | RUN | 0.462903 | 1.142623 | 1.651084 | 0.001886 | 0.001756 | 0.001855 |
| zip_view2.test | RUN | 0.375914 | 0.944219 | 1.235144 | 0.001797 | 0.001868 | 0.001486 |
| zip_view_ignore.test | RUN | 0.357474 | 0.840446 | 1.110418 | 0.001598 | 0.001444 | 0.001587 |
| repetitive_view.test | RUN | 0.582243 | 1.542195 | 2.107094 | 0.001620 | 0.001670 | 0.001434 |
| deduce_sequence.test | RUN | 0.295116 | 0.636877 | 0.850444 | 0.001788 | 0.001912 | 0.001790 |
| adapt_adt_named.test | RUN | 0.332239 | 0.894704 | 1.087236 | 0.001767 | 0.001878 | 0.001905 |
| adapt_adt_named_empty.test | RUN | 0.290959 | 0.741665 | 0.903617 | 0.001564 | 0.001667 | 0.001679 |
| adapt_adt.test | RUN | 0.367300 | 1.184151 | 1.244145 | 0.001902 | 0.001751 | 0.001830 |
| adapt_adt_empty.test | RUN | 0.285377 | 0.756058 | 0.882660 | 0.001881 | 0.001674 | 0.001452 |
| adapt_assoc_adt_named.test | RUN | 0.375241 | 0.933634 | 1.143713 | 0.001819 | 0.001882 | 0.001495 |
| adapt_assoc_adt_named_empty.test | RUN | 0.289365 | 0.725775 | 0.881127 | 0.001776 | 0.001633 | 0.001844 |
| adapt_assoc_adt.test | RUN | 0.375025 | 0.982152 | 1.182294 | 0.001880 | 0.001920 | 0.001866 |
| adapt_assoc_adt_empty.test | RUN | 0.288300 | 0.737392 | 0.880152 | 0.001728 | 0.001594 | 0.001618 |
| adapt_assoc_struct_named.test | RUN | 0.376079 | 0.936134 | 1.117527 | 0.001811 | 0.001710 | 0.001353 |
| adapt_assoc_struct_named_empty.test | RUN | 0.294809 | 0.736345 | 0.874485 | 0.001668 | 0.001664 | 0.001714 |
| adapt_assoc_struct.test | RUN | 0.338435 | 0.882705 | 1.052250 | 0.001763 | 0.001716 | 0.001706 |
| adapt_assoc_struct_empty.test | RUN | 0.286626 | 0.744383 | 0.883845 | 0.001903 | 0.001563 | 0.001589 |
| adapt_assoc_tpl_adt.test | RUN | 0.402557 | 0.999707 | 1.228170 | 0.001809 | 0.001905 | 0.001770 |
| adapt_assoc_tpl_adt_empty.test | RUN | 0.286374 | 0.726126 | 0.862805 | 0.001680 | 0.001812 | 0.001773 |
| adapt_assoc_tpl_struct.test | RUN | 0.306734 | 0.902453 | 0.992136 | 0.001760 | 0.001906 | 0.001762 |
| adapt_assoc_tpl_struct_empty.test | RUN | 0.278463 | 0.780393 | 0.871076 | 0.001768 | 0.001866 | 0.001710 |
| adapt_struct_named.test | RUN | 0.318705 | 0.883342 | 1.004612 | 0.001808 | 0.001401 | 0.001817 |
| adapt_struct_named_empty.test | RUN | 0.287437 | 0.735466 | 0.869355 | 0.002000 | 0.001654 | 0.001804 |
| adapt_struct.test | RUN | 0.353494 | 0.984794 | 1.156378 | 0.001665 | 0.001782 | 0.001754 |
| adapt_struct_empty.test | RUN | 0.288141 | 0.729150 | 0.861557 | 0.001649 | 0.001696 | 0.001781 |
| adapt_tpl_adt.test | RUN | 0.369509 | 1.126969 | 1.209226 | 0.001703 | 0.001649 | 0.001799 |
| adapt_tpl_adt_empty.test | RUN | 0.291593 | 0.719002 | 0.859356 | 0.001709 | 0.001851 | 0.001686 |
| adapt_tpl_struct.test | RUN | 0.295420 | 0.797776 | 0.956865 | 0.001790 | 0.001733 | 0.001864 |
| adapt_tpl_struct_empty.test | RUN | 0.287785 | 0.741182 | 0.865929 | 0.001617 | 0.001577 | 0.001629 |
| adt_attribute_proxy.test | RUN | 0.333853 | 0.708048 | 0.919619 | 0.001867 | 0.001968 | 0.001726 |
| define_struct.test | RUN | 0.380732 | 0.996380 | 1.182892 | 0.001721 | 0.001864 | 0.001582 |
| define_struct_empty.test | RUN | 0.341713 | 0.807835 | 0.981639 | 0.001760 | 0.001772 | 0.001649 |
| define_struct_move.test | RUN | 0.223749 | 0.463281 | 0.602833 | 0.001812 | 0.002055 | 0.001541 |
| define_struct_inline.test | RUN | 0.415423 | 1.180061 | 1.335451 | 0.001512 | 0.001757 | 0.001730 |
| define_struct_inline_empty.test | RUN | 0.336606 | 0.802085 | 0.988779 | 0.001809 | 0.001565 | 0.001650 |
| define_struct_inline_move.test | RUN | 0.224381 | 0.483271 | 0.611307 | 0.001532 | 0.001732 | 0.001781 |
| define_assoc_struct.test | RUN | 0.375816 | 0.956165 | 1.132154 | 0.001788 | 0.001906 | 0.001753 |
| define_assoc_struct_empty.test | RUN | 0.345699 | 0.814636 | 0.984849 | 0.001854 | 0.001800 | 0.001890 |
| define_assoc_struct_move.test | RUN | 0.218237 | 0.461563 | 0.624208 | 0.001811 | 0.001756 | 0.001738 |
| define_tpl_struct.test | RUN | 0.370009 | 0.966524 | 1.151549 | 0.001876 | 0.001664 | 0.001663 |
| define_tpl_struct_empty.test | RUN | 0.347914 | 0.811011 | 1.021984 | 0.001582 | 0.001780 | 0.001488 |
| define_tpl_struct_move.test | RUN | 0.225481 | 0.475389 | 0.594065 | 0.001697 | 0.001818 | 0.001402 |
| define_tpl_struct_inline.test | RUN | 0.389852 | 1.115966 | 1.245763 | 0.001960 | 0.001806 | 0.001691 |
| define_tpl_struct_inline_empty.test | RUN | 0.337721 | 0.842396 | 1.015234 | 0.001613 | 0.001460 | 0.001716 |
| define_tpl_struct_inline_move.test | RUN | 0.227885 | 0.452636 | 0.626491 | 0.001672 | 0.002116 | 0.001692 |
| define_assoc_tpl_struct.test | RUN | 0.375209 | 0.953637 | 1.155841 | 0.001824 | 0.001880 | 0.001756 |
| define_assoc_tpl_struct_empty.test | RUN | 0.337908 | 0.796693 | 0.993989 | 0.001508 | 0.001686 | 0.001765 |
| define_assoc_tpl_struct_move.test | RUN | 0.224850 | 0.483556 | 0.625805 | 0.001674 | 0.001799 | 0.001710 |
| std_tuple.test | RUN | 0.226633 | 0.524675 | 0.668765 | 0.001328 | 0.001374 | 0.001651 |
| std_tuple_iterator.test | RUN | 0.222500 | 0.544474 | 0.676895 | 0.001543 | 0.001839 | 0.001704 |
| ref_vector.test | RUN | 0.261111 | 0.569249 | 0.715502 | 0.001780 | 0.001850 | 0.001742 |
| flatten_view.test | RUN | 0.275860 | 0.690850 | 0.869557 | 0.001925 | 0.001715 | 0.001425 |
| github-159.test | COMPILE | 0.121351 | 0.257570 | 0.304125 | — | — | — |
| github-176.test | RUN | 0.252965 | 0.613957 | 0.711987 | 0.001842 | 0.001805 | 0.001762 |
| size.test | COMPILE | 0.215577 | 0.443449 | 0.574946 | — | — | — |
| fused.test | RUN | 0.310005 | 0.661339 | 0.859478 | 0.001557 | 0.001562 | 0.001718 |
| fused_function_object.test | RUN | 0.229674 | 0.509731 | 0.636098 | 0.001692 | 0.001593 | 0.001700 |
| fused_procedure.test | RUN | 0.296027 | 0.619106 | 0.823678 | 0.001626 | 0.001592 | 0.001360 |
| unfused.test | RUN | 0.236338 | 0.526120 | 0.687530 | 0.001783 | 0.001840 | 0.001719 |
| unfused_typed.test | RUN | 0.240566 | 0.553865 | 0.664965 | 0.001847 | 0.001799 | 0.001758 |
| make_fused.test | RUN | 0.307878 | 0.672968 | 0.826728 | 0.001810 | 0.001743 | 0.001323 |
| make_fused_function_object.test | RUN | 0.225106 | 0.481168 | 0.648769 | 0.001314 | 0.001518 | 0.001726 |
| make_fused_procedure.test | RUN | 0.289451 | 0.637861 | 0.832491 | 0.001814 | 0.001850 | 0.001740 |
| make_unfused.test | RUN | 0.225765 | 0.498935 | 0.655233 | 0.001699 | 0.001880 | 0.001739 |
| invoke.test | RUN | 0.603213 | 1.831314 | 2.243417 | 0.001640 | 0.001804 | 0.001496 |
| invoke_function_object.test | RUN | 0.276281 | 0.666880 | 0.836375 | 0.001772 | 0.001960 | 0.001726 |
| invoke_procedure.test | RUN | 0.464294 | 1.359242 | 1.658464 | 0.001451 | 0.001747 | 0.001533 |
| swap.test | RUN | 0.360783 | 0.846465 | 1.109075 | 0.001848 | 0.001658 | 0.001774 |
| is_sequence.test | COMPILE | 0.060154 | 0.119477 | 0.137091 | — | — | — |
| is_view.test | COMPILE | 0.060524 | 0.120700 | 0.144783 | — | — | — |
| pair_deque.test | COMPILE | 0.129636 | 0.269284 | 0.354977 | — | — | — |
| pair_list.test | COMPILE | 0.122955 | 0.252906 | 0.326261 | — | — | — |
| pair_map.test | COMPILE | 0.129312 | 0.264712 | 0.325393 | — | — | — |
| pair_set.test | COMPILE | 0.131712 | 0.279036 | 0.326012 | — | — | — |
| pair_vector.test | COMPILE | 0.126532 | 0.272457 | 0.323392 | — | — | — |
| pair_nest.test | COMPILE | 0.052076 | 0.107875 | 0.138537 | — | — | — |
| index_sequence.test | COMPILE | 0.045340 | 0.075525 | 0.097831 | — | — | — |
| and.test | COMPILE | 0.035680 | 0.059844 | 0.067350 | — | — | — |
| tag_of.test | COMPILE | 0.058851 | 0.115176 | 0.128898 | — | — | — |
| unused.test | COMPILE | 0.031668 | 0.076836 | 0.076431 | — | — | — |
| tag_of_fallback.test | COMPILE | 0.059232 | 0.107704 | 0.124096 | — | — | — |
| make_pair_r-value.test | COMPILE | 0.038224 | 0.088486 | 0.110736 | — | — | — |
| quick.test | RUN | 0.172313 | 0.371392 | 0.398632 | 0.000540 | 0.001275 | 0.001209 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 1.015× | 1.023×, 1.007× | 1.006× |
| clang | 0.994× | 1.004×, 0.984× | 1.000× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1363 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43638391827).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| adapt_adt.test | 10 | 0.001029s | 0.001039s | 0.001048s | byte equality observed |
| adapt_adt_empty.test | 10 | 0.001043s | 0.001042s | 0.001044s | byte equality observed |
| adapt_adt_named.test | 10 | 0.001028s | 0.001086s | 0.001045s | byte equality observed |
| adapt_adt_named_empty.test | 10 | 0.001022s | 0.001094s | 0.001043s | byte equality observed |
| adapt_assoc_adt.test | 10 | 0.001040s | 0.001054s | 0.001054s | byte equality observed |
| adapt_assoc_adt_empty.test | 10 | 0.001010s | 0.001056s | 0.001027s | byte equality observed |
| adapt_assoc_adt_named.test | 10 | 0.001046s | 0.001039s | 0.001024s | byte equality observed |
| adapt_assoc_adt_named_empty.test | 10 | 0.001019s | 0.001043s | 0.001020s | byte equality observed |
| adapt_assoc_struct.test | 10 | 0.001031s | 0.001030s | 0.001027s | byte equality observed |
| adapt_assoc_struct_empty.test | 10 | 0.001026s | 0.001036s | 0.001002s | byte equality observed |
| adapt_assoc_struct_named.test | 10 | 0.001036s | 0.001050s | 0.001022s | byte equality observed |
| adapt_assoc_struct_named_empty.test | 10 | 0.001022s | 0.001069s | 0.001000s | byte equality observed |
| adapt_assoc_tpl_adt.test | 10 | 0.001041s | 0.001056s | 0.001012s | byte equality observed |
| adapt_assoc_tpl_adt_empty.test | 10 | 0.001048s | 0.001036s | 0.001029s | byte equality observed |
| adapt_assoc_tpl_struct.test | 10 | 0.001068s | 0.001059s | 0.001039s | byte equality observed |
| adapt_assoc_tpl_struct_empty.test | 10 | 0.001035s | 0.001027s | 0.001032s | byte equality observed |
| adapt_struct.test | 10 | 0.001060s | 0.001042s | 0.001013s | byte equality observed |
| adapt_struct_empty.test | 10 | 0.001027s | 0.001037s | 0.001021s | byte equality observed |
| adapt_struct_named.test | 10 | 0.001022s | 0.001059s | 0.001025s | byte equality observed |
| adapt_struct_named_empty.test | 10 | 0.001055s | 0.001024s | 0.001015s | byte equality observed |
| adapt_tpl_adt.test | 10 | 0.001036s | 0.001048s | 0.001020s | byte equality observed |
| adapt_tpl_adt_empty.test | 10 | 0.001038s | 0.001048s | 0.001044s | byte equality observed |
| adapt_tpl_struct.test | 10 | 0.001060s | 0.001038s | 0.001027s | byte equality observed |
| adapt_tpl_struct_empty.test | 10 | 0.001037s | 0.001048s | 0.001029s | byte equality observed |
| adt_attribute_proxy.test | 10 | 0.001021s | 0.001028s | 0.001002s | byte equality observed |
| all.test | 10 | 0.001019s | 0.001020s | 0.000985s | byte equality observed |
| any.test | 10 | 0.001007s | 0.001042s | 0.001017s | byte equality observed |
| array.test | 10 | 0.001000s | 0.001030s | 0.001036s | byte equality observed |
| as_deque.test | 10 | 0.001009s | 0.000993s | 0.001005s | byte equality observed |
| as_list.test | 10 | 0.001044s | 0.001087s | 0.001058s | byte equality observed |
| as_map.test | 10 | 0.001039s | 0.001026s | 0.001006s | byte equality observed |
| as_map_assoc.test | 10 | 0.001038s | 0.001035s | 0.001023s | byte equality observed |
| as_set.test | 10 | 0.001052s | 0.001059s | 0.001044s | byte equality observed |
| as_vector.test | 10 | 0.001049s | 0.001067s | 0.001034s | byte equality observed |
| back_extended_deque.test | 10 | 0.001017s | 0.001025s | 0.001029s | byte equality observed |
| boost_array.test | 10 | 0.000997s | 0.001022s | 0.001008s | byte equality observed |
| boost_tuple.test | 10 | 0.001049s | 0.001030s | 0.001038s | byte equality observed |
| boost_tuple_iterator.test | 10 | 0.001008s | 0.000992s | 0.001012s | byte equality observed |
| clear.test | 10 | 0.001035s | 0.001060s | 0.001016s | byte equality observed |
| cons.test | 10 | 0.001056s | 0.001056s | 0.001058s | byte equality observed |
| convert_boost_tuple.test | 10 | 0.001004s | 0.001011s | 0.001014s | byte equality observed |
| convert_deque.test | 10 | 0.000997s | 0.001017s | 0.001009s | byte equality observed |
| convert_list.test | 10 | 0.001000s | 0.001018s | 0.000981s | byte equality observed |
| convert_std_pair.test | 10 | 0.001018s | 0.001028s | 0.000999s | byte equality observed |
| convert_std_tuple.test | 10 | 0.001011s | 0.001025s | 0.000981s | byte equality observed |
| convert_vector.test | 10 | 0.001027s | 0.001072s | 0.000995s | byte equality observed |
| copy.test | 10 | 0.001021s | 0.001033s | 0.000991s | byte equality observed |
| count.test | 10 | 0.001027s | 0.001010s | 0.001028s | byte equality observed |
| count_if.test | 10 | 0.001024s | 0.001018s | 0.000991s | byte equality observed |
| deduce_sequence.test | 10 | 0.000996s | 0.000987s | 0.001020s | byte equality observed |
| define_assoc_struct.test | 10 | 0.001046s | 0.001044s | 0.001015s | byte equality observed |
| define_assoc_struct_empty.test | 10 | 0.001045s | 0.001043s | 0.001027s | byte equality observed |
| define_assoc_struct_move.test | 10 | 0.001006s | 0.001012s | 0.001013s | byte equality observed |
| define_assoc_tpl_struct.test | 10 | 0.001049s | 0.001034s | 0.001039s | byte equality observed |
| define_assoc_tpl_struct_empty.test | 10 | 0.001040s | 0.001030s | 0.001017s | byte equality observed |
| define_assoc_tpl_struct_move.test | 10 | 0.001010s | 0.001032s | 0.001006s | byte equality observed |
| define_struct.test | 10 | 0.001043s | 0.001036s | 0.001034s | byte equality observed |
| define_struct_empty.test | 10 | 0.001019s | 0.001028s | 0.001003s | byte equality observed |
| define_struct_inline.test | 10 | 0.001037s | 0.001016s | 0.001018s | byte equality observed |
| define_struct_inline_empty.test | 10 | 0.001027s | 0.001030s | 0.001026s | byte equality observed |
| define_struct_inline_move.test | 10 | 0.000999s | 0.001010s | 0.001003s | byte equality observed |
| define_struct_move.test | 10 | 0.001030s | 0.001019s | 0.001034s | byte equality observed |
| define_tpl_struct.test | 10 | 0.001044s | 0.001048s | 0.001048s | byte equality observed |
| define_tpl_struct_empty.test | 10 | 0.001030s | 0.001035s | 0.001064s | byte equality observed |
| define_tpl_struct_inline.test | 10 | 0.001051s | 0.001057s | 0.001054s | byte equality observed |
| define_tpl_struct_inline_empty.test | 10 | 0.001040s | 0.001045s | 0.001013s | byte equality observed |
| define_tpl_struct_inline_move.test | 10 | 0.001005s | 0.001024s | 0.001040s | byte equality observed |
| define_tpl_struct_move.test | 10 | 0.001012s | 0.001055s | 0.001020s | byte equality observed |
| deque_comparison.test | 10 | 0.001009s | 0.001037s | 0.000990s | byte equality observed |
| deque_construction.test | 10 | 0.001008s | 0.001037s | 0.001007s | byte equality observed |
| deque_copy.test | 10 | 0.001012s | 0.001024s | 0.001074s | byte equality observed |
| deque_hash.test | 10 | 0.001005s | 0.001013s | 0.001041s | byte equality observed |
| deque_iterator.test | 10 | 0.001014s | 0.001003s | 0.001021s | byte equality observed |
| deque_make.test | 10 | 0.001042s | 0.001019s | 0.001006s | byte equality observed |
| deque_misc.test | 10 | 0.001029s | 0.001019s | 0.001056s | byte equality observed |
| deque_move.test | 9 | 0.001032s | 0.001019s | 0.001038s | byte equality observed |
| deque_mutate.test | 10 | 0.001005s | 0.001014s | 0.001019s | byte equality observed |
| deque_nest.test | 10 | 0.001010s | 0.001031s | 0.001038s | byte equality observed |
| deque_tie.test | 10 | 0.000984s | 0.001007s | 0.001012s | byte equality observed |
| deque_value_at.test | 10 | 0.000995s | 0.001030s | 0.001023s | byte equality observed |
| erase.test | 10 | 0.001051s | 0.001052s | 0.001053s | byte equality observed |
| erase_key.test | 10 | 0.001037s | 0.001075s | 0.001056s | byte equality observed |
| filter.test | 10 | 0.001016s | 0.001073s | 0.001042s | byte equality observed |
| filter_if.test | 10 | 0.001036s | 0.001047s | 0.001045s | byte equality observed |
| filter_view.test | 10 | 0.001031s | 0.001035s | 0.001033s | byte equality observed |
| find.test | 10 | 0.001027s | 0.001052s | 0.001020s | byte equality observed |
| find_if.test | 10 | 0.001027s | 0.001061s | 0.001078s | byte equality observed |
| flatten.test | 10 | 0.001024s | 0.001030s | 0.001043s | byte equality observed |
| flatten_view.test | 10 | 0.001032s | 0.001038s | 0.001047s | byte equality observed |
| fold.test | 10 | 0.001036s | 0.001053s | 0.001033s | byte equality observed |
| for_each.test | 10 | 0.001071s | 0.001052s | 0.001040s | byte equality observed |
| front_extended_deque.test | 10 | 0.001001s | 0.001006s | 0.001012s | byte equality observed |
| fused.test | 10 | 0.001016s | 0.001043s | 0.001013s | byte equality observed |
| fused_function_object.test | 10 | 0.001005s | 0.001046s | 0.001033s | byte equality observed |
| fused_procedure.test | 10 | 0.001008s | 0.001045s | 0.001006s | byte equality observed |
| github-176.test | 10 | 0.001033s | 0.001069s | 0.001046s | byte equality observed |
| hash.test | 10 | 0.001009s | 0.001063s | 0.001027s | byte equality observed |
| identity_view.test | 10 | 0.001030s | 0.001052s | 0.001057s | byte equality observed |
| insert.test | 10 | 0.001034s | 0.001073s | 0.001054s | byte equality observed |
| insert_range.test | 10 | 0.001054s | 0.001088s | 0.001030s | byte equality observed |
| invoke.test | 10 | 0.001013s | 0.001026s | 0.001009s | byte equality observed |
| invoke_function_object.test | 10 | 0.001016s | 0.001041s | 0.001005s | byte equality observed |
| invoke_procedure.test | 10 | 0.001017s | 0.001039s | 0.001043s | byte equality observed |
| io.test | 10 | 0.001155s | 0.001168s | 0.001139s | byte equality observed |
| iter_fold.test | 10 | 0.001051s | 0.001044s | 0.001007s | byte equality observed |
| iterator_range.test | 10 | 0.001049s | 0.001064s | 0.001056s | byte equality observed |
| join.test | 10 | 0.001017s | 0.000995s | 0.000990s | byte equality observed |
| joint_view.test | 10 | 0.001064s | 0.001093s | 0.001072s | byte equality observed |
| list_comparison.test | 10 | 0.001013s | 0.001018s | 0.001008s | byte equality observed |
| list_construction.test | 10 | 0.000980s | 0.001030s | 0.001046s | byte equality observed |
| list_copy.test | 10 | 0.001029s | 0.001027s | 0.001012s | byte equality observed |
| list_hash.test | 10 | 0.001018s | 0.001033s | 0.001054s | byte equality observed |
| list_iterator.test | 10 | 0.001023s | 0.001041s | 0.001030s | byte equality observed |
| list_make.test | 10 | 0.001038s | 0.001027s | 0.001011s | byte equality observed |
| list_misc.test | 10 | 0.001031s | 0.001009s | 0.001022s | byte equality observed |
| list_mutate.test | 10 | 0.001005s | 0.001019s | 0.000981s | byte equality observed |
| list_nest.test | 10 | 0.001022s | 0.001022s | 0.001001s | byte equality observed |
| list_tie.test | 10 | 0.001020s | 0.001023s | 0.000994s | byte equality observed |
| list_value_at.test | 10 | 0.000993s | 0.001008s | 0.000982s | byte equality observed |
| make_fused.test | 10 | 0.000999s | 0.001007s | 0.000993s | byte equality observed |
| make_fused_function_object.test | 10 | 0.001012s | 0.001012s | 0.001031s | byte equality observed |
| make_fused_procedure.test | 10 | 0.001034s | 0.001043s | 0.001014s | byte equality observed |
| make_list.test | 10 | 0.001013s | 0.001029s | 0.001022s | byte equality observed |
| make_unfused.test | 10 | 0.000999s | 0.001017s | 0.001021s | byte equality observed |
| make_vector.test | 10 | 0.001019s | 0.001020s | 0.000996s | byte equality observed |
| map.test | 10 | 0.001038s | 0.001083s | 0.001057s | byte equality observed |
| map_comparison.test | 10 | 0.001017s | 0.000996s | 0.001020s | byte equality observed |
| map_construction.test | 10 | 0.001022s | 0.001031s | 0.001051s | byte equality observed |
| map_copy.test | 10 | 0.001047s | 0.001033s | 0.001001s | byte equality observed |
| map_misc.test | 10 | 0.001003s | 0.001039s | 0.000992s | byte equality observed |
| map_move.test | 10 | 0.001035s | 0.001042s | 0.001043s | byte equality observed |
| map_mutate.test | 10 | 0.001008s | 0.001016s | 0.001001s | byte equality observed |
| map_tie.test | 10 | 0.001029s | 0.001030s | 0.001061s | byte equality observed |
| move.test | 10 | 0.001020s | 0.001072s | 0.001028s | byte equality observed |
| nil.test | 10 | 0.001021s | 0.001007s | 0.001009s | byte equality observed |
| none.test | 10 | 0.001011s | 0.001008s | 0.001004s | byte equality observed |
| nview.test | 10 | 0.001009s | 0.001013s | 0.001046s | byte equality observed |
| pop_back.test | 10 | 0.001051s | 0.001046s | 0.001062s | byte equality observed |
| pop_front.test | 10 | 0.001055s | 0.001066s | 0.001045s | byte equality observed |
| push_back.test | 10 | 0.001052s | 0.001070s | 0.001024s | byte equality observed |
| push_front.test | 10 | 0.001052s | 0.001068s | 0.001036s | byte equality observed |
| quick.test | 10 | 0.000468s | 0.001006s | 0.000970s | byte equality observed |
| ref_vector.test | 10 | 0.001025s | 0.001026s | 0.001024s | byte equality observed |
| remove.test | 10 | 0.001039s | 0.001070s | 0.001074s | byte equality observed |
| remove_if.test | 10 | 0.001058s | 0.001064s | 0.001056s | byte equality observed |
| repetitive_view.test | 10 | 0.000990s | 0.001011s | 0.000976s | byte equality observed |
| replace.test | 10 | 0.001009s | 0.001059s | 0.001036s | byte equality observed |
| replace_if.test | 10 | 0.001039s | 0.001041s | 0.001059s | byte equality observed |
| reverse.test | 10 | 0.001025s | 0.001063s | 0.001060s | byte equality observed |
| reverse_fold.test | 10 | 0.001021s | 0.001040s | 0.001061s | byte equality observed |
| reverse_iter_fold.test | 10 | 0.001031s | 0.001037s | 0.001023s | byte equality observed |
| reverse_view.test | 10 | 0.001041s | 0.001048s | 0.001048s | byte equality observed |
| segmented_find.test | 10 | 0.001002s | 0.001012s | 0.001039s | byte equality observed |
| segmented_find_if.test | 10 | 0.001031s | 0.001022s | 0.000983s | byte equality observed |
| segmented_fold.test | 10 | 0.001053s | 0.001045s | 0.001011s | byte equality observed |
| segmented_for_each.test | 10 | 0.001045s | 0.001051s | 0.001024s | byte equality observed |
| segmented_iterator_range.test | 10 | 0.001065s | 0.001056s | 0.001050s | byte equality observed |
| set.test | 10 | 0.001040s | 0.001051s | 0.001014s | byte equality observed |
| single_view.test | 10 | 0.001048s | 0.001063s | 0.001046s | byte equality observed |
| std_array.test | 10 | 0.001008s | 0.001002s | 0.000986s | byte equality observed |
| std_pair.test | 10 | 0.001049s | 0.001077s | 0.001043s | byte equality observed |
| std_tuple.test | 10 | 0.001013s | 0.001030s | 0.001001s | byte equality observed |
| std_tuple_iterator.test | 10 | 0.001016s | 0.001017s | 0.001005s | byte equality observed |
| swap.test | 10 | 0.001029s | 0.001030s | 0.001046s | byte equality observed |
| transform.test | 10 | 0.001042s | 0.001043s | 0.001055s | byte equality observed |
| transform_view.test | 10 | 0.001074s | 0.001063s | 0.001047s | byte equality observed |
| tuple_comparison.test | 10 | 0.001006s | 0.001001s | 0.001043s | byte equality observed |
| tuple_construction.test | 10 | 0.001008s | 0.001013s | 0.001008s | byte equality observed |
| tuple_conversion.test | 10 | 0.001025s | 0.001010s | 0.001023s | byte equality observed |
| tuple_copy.test | 10 | 0.001022s | 0.001016s | 0.001004s | byte equality observed |
| tuple_element.test | 10 | 0.001017s | 0.001015s | 0.001014s | byte equality observed |
| tuple_hash.test | 10 | 0.001030s | 0.001038s | 0.001013s | byte equality observed |
| tuple_make.test | 10 | 0.001021s | 0.001033s | 0.001005s | byte equality observed |
| tuple_misc.test | 10 | 0.000998s | 0.001012s | 0.001030s | byte equality observed |
| tuple_mutate.test | 10 | 0.001000s | 0.001023s | 0.001035s | byte equality observed |
| tuple_nest.test | 10 | 0.001011s | 0.001020s | 0.001000s | byte equality observed |
| tuple_tie.test | 10 | 0.000976s | 0.001039s | 0.001006s | byte equality observed |
| tuple_traits__maybe_variadic.test | 10 | 0.001006s | 0.001019s | 0.001036s | byte equality observed |
| tuple_traits__no_variadic.test | 10 | 0.001017s | 0.001024s | 0.001005s | byte equality observed |
| unfused.test | 10 | 0.001004s | 0.001023s | 0.001004s | byte equality observed |
| unfused_typed.test | 10 | 0.000996s | 0.001014s | 0.001025s | byte equality observed |
| vector_comparison.test | 10 | 0.001002s | 0.001019s | 0.001026s | byte equality observed |
| vector_construction.test | 10 | 0.001018s | 0.001030s | 0.001030s | byte equality observed |
| vector_conversion.test | 10 | 0.000993s | 0.001049s | 0.000994s | byte equality observed |
| vector_copy.test | 10 | 0.001013s | 0.000999s | 0.001043s | byte equality observed |
| vector_hash.test | 10 | 0.001013s | 0.001008s | 0.001039s | byte equality observed |
| vector_iterator.test | 10 | 0.000993s | 0.001021s | 0.000978s | byte equality observed |
| vector_make.test | 10 | 0.001009s | 0.001025s | 0.000994s | byte equality observed |
| vector_misc.test | 10 | 0.000984s | 0.001000s | 0.001006s | byte equality observed |
| vector_move.test | 10 | 0.001045s | 0.001055s | 0.001032s | byte equality observed |
| vector_mutate.test | 10 | 0.001014s | 0.001023s | 0.001001s | byte equality observed |
| vector_n.test | 10 | 0.001038s | 0.001030s | 0.001021s | byte equality observed |
| vector_nest.test | 10 | 0.001016s | 0.001003s | 0.001021s | byte equality observed |
| vector_tie.test | 10 | 0.001003s | 0.000996s | 0.000996s | byte equality observed |
| vector_traits__maybe_variadic.test | 10 | 0.001024s | 0.001019s | 0.000983s | byte equality observed |
| vector_traits__no_variadic.test | 10 | 0.000995s | 0.001024s | 0.001004s | byte equality observed |
| vector_value_at.test | 10 | 0.001005s | 0.001026s | 0.001021s | byte equality observed |
| zip.test | 10 | 0.001035s | 0.000996s | 0.001019s | byte equality observed |
| zip2.test | 10 | 0.001018s | 0.000992s | 0.001030s | byte equality observed |
| zip_ignore.test | 10 | 0.001018s | 0.001022s | 0.000998s | byte equality observed |
| zip_view.test | 10 | 0.000998s | 0.001008s | 0.000978s | byte equality observed |
| zip_view2.test | 10 | 0.001014s | 0.001022s | 0.001015s | byte equality observed |
| zip_view_ignore.test | 10 | 0.001005s | 0.000994s | 0.001002s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43638391827).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
