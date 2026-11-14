# libs/mp11/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| mp11.test | COMPILE | 0.036438 | 0.072282 | 0.122676 | — | — | — |
| complex_h.test | COMPILE | 0.147327 | 0.309852 | 0.497220 | — | — | — |
| mp_size.test | RUN | 0.174106 | 0.966520 | 0.603063 | 0.001593 | 0.001865 | 0.001465 |
| mp_size_2.test | RUN | 0.016032 | 0.035133 | 0.053244 | 0.000597 | 0.000718 | 0.001430 |
| mp_empty.test | RUN | 0.166224 | 0.598620 | 0.519476 | 0.001635 | 0.001912 | 0.001678 |
| mp_empty_2.test | RUN | 0.015901 | 0.037162 | 0.059569 | 0.000588 | 0.000591 | 0.001592 |
| mp_assign.test | RUN | 0.188175 | 1.248754 | 0.715803 | 0.001544 | 0.001848 | 0.001578 |
| mp_assign_2.test | RUN | 0.016112 | 0.037812 | 0.057388 | 0.000604 | 0.000810 | 0.001465 |
| mp_clear.test | RUN | 0.165701 | 0.549860 | 0.523667 | 0.001702 | 0.001526 | 0.001736 |
| mp_clear_2.test | RUN | 0.015297 | 0.037870 | 0.057208 | 0.000603 | 0.000675 | 0.001674 |
| mp_front.test | RUN | 0.174042 | 0.849370 | 0.635241 | 0.001627 | 0.001882 | 0.001282 |
| mp_front_2.test | RUN | 0.016013 | 0.034458 | 0.059265 | 0.000600 | 0.000662 | 0.001430 |
| mp_pop_front.test | RUN | 0.168388 | 0.884368 | 0.660531 | 0.001529 | 0.001639 | 0.001372 |
| mp_pop_front_2.test | RUN | 0.015957 | 0.035063 | 0.055955 | 0.000576 | 0.000733 | 0.001565 |
| mp_second.test | RUN | 0.167871 | 0.588188 | 0.628601 | 0.001565 | 0.001562 | 0.001599 |
| mp_second_2.test | RUN | 0.015294 | 0.037579 | 0.054621 | 0.000663 | 0.000676 | 0.001632 |
| mp_third.test | RUN | 0.167199 | 0.529617 | 0.528395 | 0.001654 | 0.001606 | 0.001656 |
| mp_third_2.test | RUN | 0.015694 | 0.037359 | 0.059870 | 0.000591 | 0.000589 | 0.001530 |
| mp_push_front.test | RUN | 0.225583 | 1.899964 | 0.946951 | 0.001652 | 0.001720 | 0.001825 |
| mp_push_front_2.test | RUN | 0.015690 | 0.036176 | 0.052923 | 0.000759 | 0.000720 | 0.001652 |
| mp_push_back.test | RUN | 0.222736 | 1.902542 | 1.012793 | 0.001604 | 0.001671 | 0.001611 |
| mp_push_back_2.test | RUN | 0.016140 | 0.036679 | 0.058435 | 0.000712 | 0.000764 | 0.001649 |
| mp_rename.test | RUN | 0.210284 | 1.710107 | 0.889645 | 0.001797 | 0.001796 | 0.001541 |
| mp_rename_2.test | RUN | 0.015073 | 0.037955 | 0.055674 | 0.000680 | 0.000799 | 0.001634 |
| mp_append.test | RUN | 0.219464 | 1.980409 | 0.884245 | 0.001702 | 0.001838 | 0.001778 |
| mp_append_2.test | RUN | 0.446281 | 4.347534 | 1.215125 | 0.001572 | 0.001718 | 0.001248 |
| mp_append_3.test | RUN | 0.015704 | 0.037302 | 0.057117 | 0.000662 | 0.000845 | 0.001612 |
| mp_append_sf.test | RUN | 0.163188 | 0.504084 | 0.563348 | 0.001563 | 0.001678 | 0.001633 |
| mp_replace_front.test | RUN | 0.199529 | 1.404139 | 0.735433 | 0.001466 | 0.001475 | 0.001710 |
| mp_replace_front_2.test | RUN | 0.016481 | 0.036863 | 0.058500 | 0.000689 | 0.000771 | 0.001694 |
| mp_replace_second.test | RUN | 0.192999 | 0.908623 | 0.730695 | 0.001532 | 0.001674 | 0.001709 |
| mp_replace_second_2.test | RUN | 0.015801 | 0.038157 | 0.058174 | 0.000672 | 0.000790 | 0.001583 |
| mp_replace_third.test | RUN | 0.183910 | 0.754416 | 0.646084 | 0.001747 | 0.001884 | 0.001754 |
| mp_replace_third_2.test | RUN | 0.015443 | 0.036225 | 0.059096 | 0.000764 | 0.000619 | 0.001654 |
| mp_apply_q.test | RUN | 0.206456 | 1.713996 | 0.901028 | 0.001665 | 0.001806 | 0.001463 |
| mp_apply_q_sf.test | RUN | 0.164594 | 0.512048 | 0.502564 | 0.001609 | 0.001709 | 0.001433 |
| mp_is_list.test | RUN | 0.163611 | 0.608565 | 0.592425 | 0.001348 | 0.001833 | 0.001768 |
| mp_list_c.test | RUN | 0.171806 | 0.720243 | 0.612343 | 0.001693 | 0.001938 | 0.001648 |
| mp_transform_front.test | RUN | 0.194400 | 1.405832 | 0.761575 | 0.001688 | 0.001762 | 0.001531 |
| mp_transform_front_2.test | RUN | 0.015974 | 0.036639 | 0.059556 | 0.000563 | 0.000757 | 0.001491 |
| mp_transform_second.test | RUN | 0.185513 | 1.219404 | 0.720650 | 0.001582 | 0.001860 | 0.001479 |
| mp_transform_second_2.test | RUN | 0.016120 | 0.035991 | 0.052851 | 0.000558 | 0.000711 | 0.001474 |
| mp_transform_third.test | RUN | 0.178768 | 0.914883 | 0.620202 | 0.001580 | 0.001826 | 0.001908 |
| mp_transform_third_2.test | RUN | 0.015959 | 0.038117 | 0.058598 | 0.000623 | 0.000721 | 0.001558 |
| mp_list_v.test | RUN | 0.015249 | 0.037474 | 0.055954 | 0.000578 | 0.000770 | 0.001693 |
| mp_rename_v.test | RUN | 0.015640 | 0.038315 | 0.058737 | 0.000625 | 0.000716 | 0.001220 |
| mp_is_value_list.test | RUN | 0.155965 | 0.387119 | 0.551572 | 0.001637 | 0.001823 | 0.001410 |
| mp_transform.test | RUN | 0.357613 | 2.934328 | 1.573452 | 0.001783 | 0.001664 | 0.001604 |
| mp_transform_2.test | RUN | 0.157415 | 0.370782 | 0.492031 | 0.001440 | 0.001827 | 0.001655 |
| mp_transform_q.test | RUN | 0.355547 | 2.812224 | 1.519137 | 0.001601 | 0.001596 | 0.001760 |
| mp_transform_q_2.test | RUN | 0.398606 | 0.937042 | 1.981811 | 0.001676 | 0.001866 | 0.001443 |
| mp_transform_sf.test | RUN | 0.172727 | 0.528140 | 0.586290 | 0.001643 | 0.001660 | 0.001707 |
| mp_transform_if.test | RUN | 0.208970 | 1.392547 | 0.841314 | 0.001305 | 0.001631 | 0.001703 |
| mp_transform_if_q.test | RUN | 0.214193 | 1.420640 | 0.859517 | 0.001519 | 0.001714 | 0.001487 |
| mp_filter.test | RUN | 0.190275 | 0.855190 | 0.655181 | 0.001580 | 0.001684 | 0.001584 |
| mp_fill.test | RUN | 0.174933 | 0.665054 | 0.624777 | 0.001787 | 0.001787 | 0.001607 |
| mp_fill_2.test | RUN | 0.028129 | 0.055416 | 0.095933 | 0.000586 | 0.000704 | 0.001650 |
| mp_count.test | RUN | 0.335462 | 1.484847 | 0.984494 | 0.001591 | 0.001914 | 0.001480 |
| mp_count_if.test | RUN | 0.340637 | 1.534702 | 1.086372 | 0.001325 | 0.001757 | 0.001448 |
| mp_count_if_q.test | RUN | 0.186950 | 1.010303 | 0.642603 | 0.001612 | 0.001657 | 0.001581 |
| mp_contains.test | RUN | 0.177741 | 0.623952 | 0.560625 | 0.001527 | 0.001848 | 0.001694 |
| mp_starts_with.test | RUN | 0.175960 | 0.619555 | 0.597698 | 0.001609 | 0.001386 | 0.001647 |
| mp_starts_with_sf.test | RUN | 0.169965 | 0.513658 | 0.528199 | 0.001308 | 0.001790 | 0.001520 |
| mp_repeat.test | RUN | 0.248707 | 2.503532 | 1.090869 | 0.001730 | 0.001751 | 0.001617 |
| mp_repeat_2.test | RUN | 0.028962 | 0.059492 | 0.093303 | 0.000715 | 0.000743 | 0.001756 |
| mp_repeat_3.test | RUN | 0.217033 | 0.355845 | 0.538921 | 0.001556 | 0.001858 | 0.001762 |
| mp_product.test | RUN | 0.196001 | 1.491158 | 0.763913 | 0.001460 | 0.001862 | 0.001702 |
| mp_drop.test | RUN | 0.214731 | 1.883705 | 0.903143 | 0.001474 | 0.001788 | 0.001693 |
| mp_drop_2.test | RUN | 0.028057 | 0.058538 | 0.094214 | 0.000629 | 0.000777 | 0.001530 |
| mp_iota.test | RUN | 0.203255 | 1.577983 | 0.818195 | 0.001662 | 0.001655 | 0.001664 |
| mp_iota_2.test | RUN | 0.217640 | 1.914410 | 0.869212 | 0.001509 | 0.001899 | 0.001597 |
| mp_at.test | RUN | 0.180583 | 0.848387 | 0.672465 | 0.001513 | 0.001450 | 0.001786 |
| mp_at_2.test | RUN | 0.027577 | 0.053551 | 0.098246 | 0.000710 | 0.000745 | 0.001624 |
| mp_at_sf.test | RUN | 0.168756 | 0.526546 | 0.564810 | 0.001659 | 0.001832 | 0.001558 |
| mp_take.test | RUN | 0.280098 | 2.485762 | 1.043386 | 0.001653 | 0.001642 | 0.001686 |
| mp_take_2.test | RUN | 0.027606 | 0.057230 | 0.099216 | 0.000704 | 0.000763 | 0.001820 |
| mp_slice.test | RUN | 0.321045 | 2.525238 | 1.371129 | 0.001773 | 0.001970 | 0.001696 |
| mp_slice_2.test | RUN | 0.027923 | 0.059458 | 0.099847 | 0.000715 | 0.000736 | 0.001632 |
| mp_replace.test | RUN | 0.207690 | 1.282381 | 0.909831 | 0.001686 | 0.001480 | 0.001655 |
| mp_replace_if.test | RUN | 0.200192 | 1.140255 | 0.800317 | 0.001478 | 0.001601 | 0.001636 |
| mp_replace_if_q.test | RUN | 0.199002 | 1.151774 | 0.825576 | 0.001644 | 0.001873 | 0.001605 |
| mp_copy_if.test | RUN | 0.206830 | 1.603050 | 0.797336 | 0.001766 | 0.001805 | 0.001637 |
| mp_copy_if_q.test | RUN | 0.205996 | 1.623455 | 0.794984 | 0.001812 | 0.001861 | 0.001724 |
| mp_remove.test | RUN | 0.204818 | 1.085071 | 0.788152 | 0.001700 | 0.001885 | 0.001697 |
| mp_remove_if.test | RUN | 0.206337 | 1.687810 | 0.837143 | 0.001594 | 0.001847 | 0.001666 |
| mp_remove_if_q.test | RUN | 0.210844 | 1.718169 | 0.857274 | 0.001736 | 0.001906 | 0.001593 |
| mp_partition.test | RUN | 0.209185 | 1.593097 | 0.874217 | 0.001682 | 0.001695 | 0.001725 |
| mp_partition_q.test | RUN | 0.208454 | 1.584805 | 0.912103 | 0.001789 | 0.001668 | 0.001624 |
| mp_sort.test | RUN | 0.195061 | 1.143619 | 0.785242 | 0.001632 | 0.003973 | 0.001732 |
| mp_sort_q.test | RUN | 0.201714 | 1.151535 | 0.803728 | 0.001782 | 0.001710 | 0.001398 |
| mp_find.test | RUN | 0.195149 | 1.232104 | 0.677988 | 0.001601 | 0.001654 | 0.001457 |
| mp_find_if.test | RUN | 0.186872 | 1.147479 | 0.656062 | 0.001790 | 0.001961 | 0.001432 |
| mp_find_if_q.test | RUN | 0.200472 | 1.261520 | 0.812179 | 0.001691 | 0.001870 | 0.001674 |
| mp_reverse.test | RUN | 0.405076 | 3.235580 | 1.511092 | 0.001757 | 0.001493 | 0.001718 |
| mp_fold.test | RUN | 0.663599 | 2.573042 | 3.752636 | 0.001732 | 0.001889 | 0.001640 |
| mp_fold_q.test | RUN | 0.192165 | 1.124766 | 0.773902 | 0.001392 | 0.001851 | 0.001686 |
| mp_fold_q_sf.test | RUN | 0.175383 | 0.541044 | 0.600530 | 0.001494 | 0.001900 | 0.001639 |
| mp_reverse_fold.test | RUN | 0.319273 | 2.429239 | 1.064590 | 0.001467 | 0.001764 | 0.001634 |
| mp_reverse_fold_q.test | RUN | 0.201007 | 1.368125 | 0.809436 | 0.001683 | 0.001788 | 0.001612 |
| mp_unique.test | RUN | 0.202953 | 1.205593 | 0.748884 | 0.001545 | 0.001722 | 0.001664 |
| mp_unique_if.test | RUN | 0.341881 | 2.555101 | 1.216247 | 0.001775 | 0.001455 | 0.001565 |
| mp_unique_if_q.test | RUN | 0.289481 | 2.541767 | 0.983810 | 0.001284 | 0.001712 | 0.001724 |
| mp_all_of.test | RUN | 0.465628 | 1.395265 | 1.333394 | 0.001808 | 0.001813 | 0.001724 |
| mp_all_of_q.test | RUN | 0.174381 | 0.590425 | 0.617556 | 0.001536 | 0.001735 | 0.001813 |
| mp_any_of.test | RUN | 0.456635 | 1.451976 | 1.344234 | 0.001616 | 0.001487 | 0.001633 |
| mp_any_of_q.test | RUN | 0.173234 | 0.593570 | 0.586502 | 0.001902 | 0.001644 | 0.001657 |
| mp_none_of.test | RUN | 0.455453 | 1.452459 | 1.341801 | 0.001495 | 0.001916 | 0.001461 |
| mp_none_of_q.test | RUN | 0.179012 | 0.603836 | 0.567263 | 0.001785 | 0.001750 | 0.001305 |
| mp_replace_at.test | RUN | 0.212965 | 1.255141 | 0.829158 | 0.001760 | 0.001867 | 0.001581 |
| mp_replace_at_c.test | RUN | 0.207873 | 1.256168 | 0.872551 | 0.001667 | 0.001929 | 0.001769 |
| mp_for_each.test | RUN | 0.196309 | 0.846065 | 0.926611 | 0.001512 | 0.001650 | 0.001620 |
| mp_insert.test | RUN | 0.304405 | 2.442311 | 1.264557 | 0.001697 | 0.001765 | 0.001722 |
| mp_insert_2.test | RUN | 0.028465 | 0.060263 | 0.094275 | 0.000643 | 0.000648 | 0.001653 |
| mp_erase.test | RUN | 0.338950 | 2.614317 | 1.386934 | 0.001651 | 0.001817 | 0.001713 |
| mp_erase_2.test | RUN | 0.027427 | 0.059838 | 0.100072 | 0.000574 | 0.000727 | 0.001718 |
| mp_with_index.test | RUN | 0.427587 | 5.414573 | 3.189808 | 0.002273 | 0.001830 | 0.002004 |
| mp_with_index_cx.test | RUN | 0.003328 | 0.018117 | 0.027009 | 0.000675 | 0.000778 | 0.001648 |
| mp_from_sequence.test | RUN | 0.206197 | 1.413637 | 0.812883 | 0.001818 | 0.001860 | 0.001730 |
| mp_from_sequence_2.test | RUN | 0.216522 | 1.603010 | 0.942775 | 0.001507 | 0.001770 | 0.001550 |
| mp_from_sequence_3.test | RUN | 0.181705 | 0.751870 | 0.648792 | 0.001571 | 0.001813 | 0.001557 |
| mp_min_element.test | RUN | 0.178532 | 0.668860 | 0.619441 | 0.001581 | 0.001858 | 0.001628 |
| mp_min_element_2.test | RUN | 0.028299 | 0.057187 | 0.085144 | 0.000709 | 0.000780 | 0.001674 |
| mp_min_element_q.test | RUN | 0.177218 | 0.655106 | 0.608630 | 0.001568 | 0.001810 | 0.001548 |
| mp_min_element_q_2.test | RUN | 0.027942 | 0.056881 | 0.077126 | 0.000588 | 0.000707 | 0.001666 |
| mp_max_element.test | RUN | 0.175297 | 0.665162 | 0.592519 | 0.001499 | 0.001770 | 0.001395 |
| mp_max_element_2.test | RUN | 0.027831 | 0.057830 | 0.098953 | 0.000607 | 0.000595 | 0.001528 |
| mp_max_element_q.test | RUN | 0.177420 | 0.667961 | 0.610323 | 0.001728 | 0.001994 | 0.001666 |
| mp_max_element_q_2.test | RUN | 0.027156 | 0.058072 | 0.088129 | 0.000601 | 0.000688 | 0.001475 |
| mp_nth_element.test | RUN | 0.193063 | 0.936621 | 0.761089 | 0.001531 | 0.001562 | 0.001334 |
| mp_nth_element_q.test | RUN | 0.194920 | 0.884476 | 0.722695 | 0.001528 | 0.001437 | 0.001554 |
| mp_back.test | RUN | 0.185460 | 0.675394 | 0.722721 | 0.001473 | 0.001524 | 0.001652 |
| mp_back_2.test | RUN | 0.027926 | 0.039236 | 0.097782 | 0.000602 | 0.000697 | 0.001511 |
| mp_pop_back.test | RUN | 0.497884 | 5.039726 | 1.413754 | 0.001646 | 0.001739 | 0.001610 |
| mp_pop_back_2.test | RUN | 0.028246 | 0.055828 | 0.093213 | 0.000757 | 0.000777 | 0.001672 |
| mp_flatten.test | RUN | 0.217193 | 1.783022 | 0.982049 | 0.001678 | 0.001726 | 0.001699 |
| mp_rotate_left.test | RUN | 0.226609 | 1.919301 | 0.990023 | 0.001459 | 0.001809 | 0.001423 |
| mp_rotate_right.test | RUN | 0.222732 | 1.917974 | 0.965702 | 0.001598 | 0.001905 | 0.001410 |
| mp_power_set.test | RUN | 0.221460 | 1.880719 | 0.959379 | 0.001716 | 0.001792 | 0.001498 |
| mp_partial_sum.test | RUN | 0.283978 | 2.473556 | 1.111930 | 0.001859 | 0.001666 | 0.001615 |
| mp_iterate.test | RUN | 0.191713 | 0.764456 | 0.777610 | 0.001658 | 0.001892 | 0.001536 |
| mp_pairwise_fold.test | RUN | 0.217739 | 1.708709 | 0.996800 | 0.001592 | 0.001737 | 0.001206 |
| mp_pairwise_fold_q.test | RUN | 0.170171 | 0.513186 | 0.603058 | 0.001807 | 0.001783 | 0.001682 |
| mp_sliding_fold.test | RUN | 0.412286 | 3.261235 | 1.819047 | 0.001831 | 0.001830 | 0.001432 |
| mp_sliding_fold_q.test | RUN | 0.410882 | 3.239034 | 1.824853 | 0.001834 | 0.001601 | 0.001621 |
| mp_intersperse.test | RUN | 0.202701 | 1.226495 | 0.874521 | 0.001638 | 0.001849 | 0.001655 |
| mp_split.test | RUN | 0.288099 | 2.360651 | 1.171465 | 0.001365 | 0.001930 | 0.001761 |
| mp_join.test | RUN | 0.226440 | 2.011258 | 1.056865 | 0.001641 | 0.001864 | 0.001752 |
| integral.test | RUN | 0.179455 | 0.901968 | 0.637787 | 0.001638 | 0.001789 | 0.001758 |
| mp_value.test | RUN | 0.012535 | 0.031028 | 0.049002 | 0.000629 | 0.000764 | 0.001723 |
| mp_identity.test | RUN | 0.176594 | 0.816688 | 0.610208 | 0.001722 | 0.001627 | 0.001686 |
| mp_inherit.test | RUN | 0.165097 | 0.603747 | 0.572788 | 0.001581 | 0.001594 | 0.001596 |
| mp_if.test | RUN | 0.166296 | 0.663656 | 0.571182 | 0.001591 | 0.001533 | 0.001754 |
| mp_if_sf.test | RUN | 0.160094 | 0.506530 | 0.547469 | 0.001647 | 0.001622 | 0.001776 |
| mp_eval_if.test | RUN | 0.170658 | 0.679129 | 0.601402 | 0.001694 | 0.001845 | 0.001768 |
| mp_eval_if_sf.test | RUN | 0.159503 | 0.487809 | 0.543670 | 0.001404 | 0.001633 | 0.001637 |
| mp_valid.test | RUN | 0.162874 | 0.513824 | 0.561376 | 0.001692 | 0.001842 | 0.001710 |
| mp_defer.test | RUN | 0.175197 | 0.836575 | 0.629791 | 0.001742 | 0.001816 | 0.001764 |
| mp_quote.test | RUN | 0.176013 | 0.855661 | 0.667116 | 0.001595 | 0.001868 | 0.001523 |
| mp_invoke_q.test | RUN | 0.189502 | 1.121400 | 0.732420 | 0.001488 | 0.001926 | 0.001314 |
| mp_invoke_q_sf.test | RUN | 0.161374 | 0.490050 | 0.547127 | 0.001494 | 0.001801 | 0.001546 |
| mp_quote_trait.test | RUN | 0.171446 | 0.936129 | 0.668405 | 0.001350 | 0.001613 | 0.001686 |
| mp_cond.test | RUN | 0.169602 | 0.565252 | 0.573246 | 0.001588 | 0.001748 | 0.001506 |
| mp_cond_sf.test | RUN | 0.162733 | 0.508447 | 0.572224 | 0.001362 | 0.001660 | 0.001402 |
| mp_not_fn.test | RUN | 0.160131 | 0.495824 | 0.561850 | 0.001627 | 0.001940 | 0.001213 |
| mp_eval_if_not.test | RUN | 0.169557 | 0.705184 | 0.597775 | 0.001810 | 0.001904 | 0.001680 |
| mp_eval_or.test | RUN | 0.162525 | 0.386522 | 0.556708 | 0.001646 | 0.001851 | 0.001450 |
| mp_compose.test | RUN | 0.180833 | 1.157668 | 0.712169 | 0.001477 | 0.001638 | 0.001684 |
| mp_valid_and_true.test | RUN | 0.160360 | 0.596124 | 0.578765 | 0.001509 | 0.001883 | 0.001537 |
| mp_compose_sf.test | COMPILE | 0.039125 | 0.073791 | 0.120305 | — | — | — |
| integer_sequence.test | RUN | 0.195857 | 1.140084 | 0.814497 | 0.001641 | 0.001822 | 0.001698 |
| tuple_for_each.test | RUN | 0.166150 | 0.410313 | 0.619753 | 0.001497 | 0.001840 | 0.001776 |
| tuple_for_each_cx.test | COMPILE | 0.031117 | 0.067345 | 0.094659 | — | — | — |
| tuple_apply.test | RUN | 0.166336 | 0.450613 | 0.604736 | 0.001532 | 0.001822 | 0.001533 |
| tuple_apply_cx.test | COMPILE | 0.043737 | 0.087787 | 0.151215 | — | — | — |
| construct_from_tuple.test | RUN | 0.169416 | 0.467960 | 0.590617 | 0.001610 | 0.001924 | 0.001555 |
| construct_from_tuple_cx.test | COMPILE | 0.045775 | 0.089004 | 0.126193 | — | — | — |
| tuple_transform.test | RUN | 0.262210 | 0.956005 | 1.144509 | 0.001724 | 0.001716 | 0.001763 |
| tuple_transform_2.test | RUN | 0.241297 | 0.713177 | 1.041329 | 0.001798 | 0.001590 | 0.001394 |
| tuple_transform_cx.test | COMPILE | 0.038833 | 0.085590 | 0.140070 | — | — | — |
| mp_set_contains.test | RUN | 0.172423 | 0.614005 | 0.602677 | 0.001599 | 0.001689 | 0.001748 |
| mp_set_push_back.test | RUN | 0.222699 | 1.846299 | 1.005866 | 0.001774 | 0.001703 | 0.001714 |
| mp_set_push_front.test | RUN | 0.272896 | 2.192153 | 1.104901 | 0.001652 | 0.001734 | 0.001402 |
| mp_is_set.test | RUN | 0.172281 | 0.606119 | 0.602297 | 0.001606 | 0.001785 | 0.001647 |
| mp_set_union.test | RUN | 0.212080 | 1.552120 | 0.915530 | 0.001614 | 0.001850 | 0.001738 |
| mp_set_union_sf.test | RUN | 0.170168 | 0.489712 | 0.552145 | 0.001798 | 0.001745 | 0.001640 |
| mp_set_difference.test | RUN | 0.192577 | 1.226354 | 0.765385 | 0.001382 | 0.001589 | 0.001692 |
| mp_set_difference_sf.test | RUN | 0.162240 | 0.476768 | 0.554933 | 0.001552 | 0.001812 | 0.001362 |
| mp_set_intersection.test | RUN | 0.189704 | 1.197723 | 0.778033 | 0.001460 | 0.001391 | 0.001632 |
| mp_set_intersection_sf.test | RUN | 0.162740 | 0.490738 | 0.536728 | 0.001646 | 0.001603 | 0.001728 |
| mp_all.test | RUN | 0.166396 | 0.603632 | 0.570067 | 0.001634 | 0.001617 | 0.001740 |
| mp_all_2.test | RUN | 0.503505 | 1.316226 | 1.313366 | 0.001772 | 0.001941 | 0.001713 |
| mp_and.test | RUN | 0.169699 | 0.588161 | 0.560654 | 0.001570 | 0.001780 | 0.001438 |
| mp_any.test | RUN | 0.168608 | 0.602481 | 0.599609 | 0.001453 | 0.001795 | 0.001660 |
| mp_any_2.test | RUN | 0.497467 | 1.325128 | 1.305476 | 0.001373 | 0.001768 | 0.001424 |
| mp_or.test | RUN | 0.173417 | 0.610774 | 0.556583 | 0.001717 | 0.001976 | 0.001821 |
| mp_same.test | RUN | 0.330759 | 1.038138 | 0.878587 | 0.001440 | 0.001692 | 0.001442 |
| mp_plus.test | RUN | 0.170693 | 0.735907 | 0.662085 | 0.001644 | 0.001562 | 0.001450 |
| mp_less.test | RUN | 0.171806 | 0.631461 | 0.614179 | 0.001682 | 0.001795 | 0.001705 |
| mp_min.test | RUN | 0.164533 | 0.568103 | 0.556471 | 0.001454 | 0.001978 | 0.001644 |
| mp_max.test | RUN | 0.167649 | 0.621893 | 0.605064 | 0.001763 | 0.001675 | 0.001607 |
| mp_similar.test | RUN | 0.164686 | 0.611736 | 0.597253 | 0.001242 | 0.001670 | 0.001680 |
| mp_map_find.test | RUN | 0.196353 | 1.127749 | 0.764229 | 0.001766 | 0.002026 | 0.001722 |
| mp_map_find_2.test | RUN | 0.179712 | 0.451037 | 0.644161 | 0.001416 | 0.001804 | 0.001718 |
| mp_map_find_3.test | RUN | 0.177582 | 0.449760 | 0.673924 | 0.001323 | 0.001351 | 0.001554 |
| mp_map_find_4.test | RUN | 0.168224 | 0.417870 | 0.620070 | 0.001708 | 0.001550 | 0.001155 |
| mp_map_contains.test | RUN | 0.178330 | 0.642555 | 0.599711 | 0.001760 | 0.002004 | 0.001780 |
| mp_map_insert.test | RUN | 0.229082 | 2.102897 | 1.076277 | 0.001649 | 0.002020 | 0.001681 |
| mp_map_replace.test | RUN | 0.293268 | 2.373922 | 1.202268 | 0.001659 | 0.001970 | 0.001549 |
| mp_map_erase.test | RUN | 0.227514 | 1.758369 | 1.036818 | 0.001625 | 0.001994 | 0.001252 |
| mp_map_update.test | RUN | 0.198490 | 1.174983 | 0.780507 | 0.001407 | 0.001916 | 0.001779 |
| mp_map_update_q.test | RUN | 0.195189 | 1.162270 | 0.782420 | 0.001794 | 0.001936 | 0.001592 |
| mp_map_keys.test | RUN | 0.191415 | 1.032608 | 0.784054 | 0.001438 | 0.001708 | 0.001444 |
| mp_is_map.test | RUN | 0.176578 | 0.627407 | 0.653619 | 0.001678 | 0.001948 | 0.001549 |
| mp_bind.test | RUN | 0.216553 | 1.861295 | 0.904120 | 0.001929 | 0.001639 | 0.001697 |
| mp_bind_q.test | RUN | 0.193165 | 1.166209 | 0.767096 | 0.001373 | 0.001889 | 0.001650 |
| mp_bind_front.test | RUN | 0.191520 | 1.291796 | 0.707887 | 0.001724 | 0.001446 | 0.001550 |
| mp_bind_back.test | RUN | 0.189820 | 1.278236 | 0.746399 | 0.001620 | 0.001753 | 0.001487 |
| mp_lambda.test | RUN | 0.416107 | 3.823115 | 1.841805 | 0.001441 | 0.001461 | 0.001517 |
| mpl.test | RUN | 0.374886 | 1.005916 | 1.500404 | 0.002123 | 0.001868 | 0.001357 |
| mpl_list.test | RUN | 0.217737 | 0.779001 | 0.726090 | 0.001741 | 0.001942 | 0.001663 |
| mpl_tuple.test | RUN | 0.215630 | 0.762205 | 0.733766 | 0.001588 | 0.001676 | 0.001604 |
| version.test | RUN | 0.109846 | 0.280090 | 0.350760 | 0.001585 | 0.001578 | 0.001800 |
| mp11_version.test | RUN | 0.134623 | 0.329934 | 0.446616 | 0.001591 | 0.001736 | 0.001480 |
| list_version.test | RUN | 0.113852 | 0.298780 | 0.383405 | 0.001536 | 0.001862 | 0.001497 |
| algorithm_version.test | RUN | 0.125926 | 0.303231 | 0.405325 | 0.001770 | 0.001729 | 0.001524 |
| integral_version.test | RUN | 0.107611 | 0.277641 | 0.390286 | 0.001653 | 0.001552 | 0.001661 |
| utility_version.test | RUN | 0.112292 | 0.281200 | 0.389856 | 0.001612 | 0.001791 | 0.001366 |
| function_version.test | RUN | 0.115178 | 0.297033 | 0.366767 | 0.001464 | 0.001800 | 0.001704 |
| map_version.test | RUN | 0.125194 | 0.301199 | 0.418789 | 0.001646 | 0.001854 | 0.001729 |
| set_version.test | RUN | 0.115253 | 0.294240 | 0.366344 | 0.001626 | 0.001791 | 0.001839 |
| bind_version.test | RUN | 0.124894 | 0.315362 | 0.420221 | 0.001616 | 0.001912 | 0.001574 |
| integer_sequence_version.test | RUN | 0.108031 | 0.279043 | 0.334076 | 0.001397 | 0.001619 | 0.001611 |
| tuple_version.test | RUN | 0.120170 | 0.307790 | 0.282159 | 0.001360 | 0.001471 | 0.001272 |
| mpl_version.test | RUN | 0.091965 | 0.245581 | 0.340092 | 0.001289 | 0.001457 | 0.001213 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 1.004× | 1.006×, 1.003× | 0.994× |
| clang | 1.090× | 1.094×, 1.086× | 1.007× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1361 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43632677224).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| algorithm_version.test | 10 | 0.000953s | 0.000938s | 0.000958s | byte equality observed |
| bind_version.test | 10 | 0.000953s | 0.000928s | 0.000986s | byte equality observed |
| construct_from_tuple.test | 10 | 0.000953s | 0.000945s | 0.001019s | byte equality observed |
| function_version.test | 10 | 0.000949s | 0.000939s | 0.001042s | byte equality observed |
| integer_sequence.test | 10 | 0.000956s | 0.000954s | 0.000970s | byte equality observed |
| integer_sequence_version.test | 10 | 0.000948s | 0.000938s | 0.000978s | byte equality observed |
| integral.test | 10 | 0.000959s | 0.000939s | 0.001066s | byte equality observed |
| integral_version.test | 10 | 0.000950s | 0.000935s | 0.000998s | byte equality observed |
| list_version.test | 10 | 0.000951s | 0.000923s | 0.000974s | byte equality observed |
| map_version.test | 10 | 0.000953s | 0.000923s | 0.000986s | byte equality observed |
| mp11_version.test | 10 | 0.000959s | 0.000929s | 0.001016s | byte equality observed |
| mp_all.test | 10 | 0.000984s | 0.000932s | 0.000984s | byte equality observed |
| mp_all_2.test | 10 | 0.000984s | 0.000932s | 0.001000s | byte equality observed |
| mp_all_of.test | 10 | 0.000991s | 0.000984s | 0.001001s | byte equality observed |
| mp_all_of_q.test | 10 | 0.001003s | 0.000995s | 0.001003s | byte equality observed |
| mp_and.test | 10 | 0.001000s | 0.000997s | 0.000990s | byte equality observed |
| mp_any.test | 10 | 0.000999s | 0.001002s | 0.000991s | byte equality observed |
| mp_any_2.test | 10 | 0.000994s | 0.000994s | 0.000988s | byte equality observed |
| mp_any_of.test | 10 | 0.000997s | 0.000999s | 0.001007s | byte equality observed |
| mp_any_of_q.test | 10 | 0.000991s | 0.000982s | 0.000998s | byte equality observed |
| mp_append.test | 10 | 0.000988s | 0.001039s | 0.001003s | byte equality observed |
| mp_append_2.test | 10 | 0.001023s | 0.001013s | 0.001032s | byte equality observed |
| mp_append_3.test | 10 | 0.000462s | 0.000448s | 0.000971s | byte equality observed |
| mp_append_sf.test | 10 | 0.001019s | 0.001033s | 0.001004s | byte equality observed |
| mp_apply_q.test | 10 | 0.000991s | 0.001025s | 0.000970s | byte equality observed |
| mp_apply_q_sf.test | 10 | 0.000990s | 0.000998s | 0.001001s | byte equality observed |
| mp_assign.test | 10 | 0.001003s | 0.001006s | 0.001004s | byte equality observed |
| mp_assign_2.test | 10 | 0.000461s | 0.000454s | 0.000969s | byte equality observed |
| mp_at.test | 10 | 0.001021s | 0.001030s | 0.000987s | byte equality observed |
| mp_at_2.test | 10 | 0.000453s | 0.000453s | 0.000992s | byte equality observed |
| mp_at_sf.test | 10 | 0.000989s | 0.000974s | 0.000999s | byte equality observed |
| mp_back.test | 10 | 0.001001s | 0.001000s | 0.000975s | byte equality observed |
| mp_back_2.test | 10 | 0.000460s | 0.000451s | 0.000963s | byte equality observed |
| mp_bind.test | 10 | 0.001012s | 0.001027s | 0.000982s | byte equality observed |
| mp_bind_back.test | 10 | 0.001003s | 0.000988s | 0.000996s | byte equality observed |
| mp_bind_front.test | 10 | 0.001012s | 0.000993s | 0.001008s | byte equality observed |
| mp_bind_q.test | 10 | 0.001009s | 0.001007s | 0.000986s | byte equality observed |
| mp_clear.test | 10 | 0.001035s | 0.001005s | 0.001015s | byte equality observed |
| mp_clear_2.test | 10 | 0.000456s | 0.000455s | 0.000973s | byte equality observed |
| mp_compose.test | 10 | 0.001013s | 0.000962s | 0.000994s | byte equality observed |
| mp_cond.test | 10 | 0.001019s | 0.000950s | 0.001001s | byte equality observed |
| mp_cond_sf.test | 10 | 0.000989s | 0.000991s | 0.001014s | byte equality observed |
| mp_contains.test | 10 | 0.000989s | 0.001018s | 0.000978s | byte equality observed |
| mp_copy_if.test | 10 | 0.001010s | 0.000992s | 0.001015s | byte equality observed |
| mp_copy_if_q.test | 10 | 0.001012s | 0.001003s | 0.001036s | byte equality observed |
| mp_count.test | 10 | 0.001017s | 0.000996s | 0.001006s | byte equality observed |
| mp_count_if.test | 10 | 0.001010s | 0.000995s | 0.000992s | byte equality observed |
| mp_count_if_q.test | 10 | 0.000994s | 0.000974s | 0.001044s | byte equality observed |
| mp_defer.test | 10 | 0.000995s | 0.001005s | 0.000993s | byte equality observed |
| mp_drop.test | 10 | 0.001013s | 0.001002s | 0.001004s | byte equality observed |
| mp_drop_2.test | 10 | 0.000458s | 0.000448s | 0.000993s | byte equality observed |
| mp_empty.test | 10 | 0.001007s | 0.001009s | 0.001000s | byte equality observed |
| mp_empty_2.test | 10 | 0.000452s | 0.000461s | 0.001003s | byte equality observed |
| mp_erase.test | 10 | 0.001020s | 0.001005s | 0.000997s | byte equality observed |
| mp_erase_2.test | 10 | 0.000465s | 0.000456s | 0.000961s | byte equality observed |
| mp_eval_if.test | 10 | 0.000999s | 0.001027s | 0.000998s | byte equality observed |
| mp_eval_if_not.test | 10 | 0.000997s | 0.001002s | 0.000985s | byte equality observed |
| mp_eval_if_sf.test | 10 | 0.000998s | 0.000986s | 0.001004s | byte equality observed |
| mp_eval_or.test | 10 | 0.000984s | 0.000999s | 0.000977s | byte equality observed |
| mp_fill.test | 10 | 0.001016s | 0.000992s | 0.000988s | byte equality observed |
| mp_fill_2.test | 10 | 0.000458s | 0.000452s | 0.000988s | byte equality observed |
| mp_filter.test | 10 | 0.001010s | 0.001003s | 0.001020s | byte equality observed |
| mp_find.test | 10 | 0.001015s | 0.001011s | 0.001006s | byte equality observed |
| mp_find_if.test | 10 | 0.000994s | 0.001017s | 0.000997s | byte equality observed |
| mp_find_if_q.test | 10 | 0.000997s | 0.001011s | 0.001016s | byte equality observed |
| mp_flatten.test | 10 | 0.000977s | 0.000988s | 0.000997s | byte equality observed |
| mp_fold.test | 10 | 0.001020s | 0.001018s | 0.001008s | byte equality observed |
| mp_fold_q.test | 10 | 0.000996s | 0.000998s | 0.001000s | byte equality observed |
| mp_fold_q_sf.test | 10 | 0.000988s | 0.000986s | 0.001004s | byte equality observed |
| mp_for_each.test | 10 | 0.001008s | 0.000987s | 0.000990s | byte equality observed |
| mp_from_sequence.test | 10 | 0.001026s | 0.001013s | 0.001015s | byte equality observed |
| mp_from_sequence_2.test | 10 | 0.000996s | 0.001003s | 0.001028s | byte equality observed |
| mp_from_sequence_3.test | 10 | 0.001025s | 0.000989s | 0.000992s | byte equality observed |
| mp_front.test | 10 | 0.001015s | 0.001019s | 0.000990s | byte equality observed |
| mp_front_2.test | 10 | 0.000452s | 0.000455s | 0.000978s | byte equality observed |
| mp_identity.test | 10 | 0.001042s | 0.000989s | 0.000980s | byte equality observed |
| mp_if.test | 10 | 0.001015s | 0.001009s | 0.001005s | byte equality observed |
| mp_if_sf.test | 10 | 0.000998s | 0.001011s | 0.001005s | byte equality observed |
| mp_inherit.test | 10 | 0.001017s | 0.000998s | 0.000994s | byte equality observed |
| mp_insert.test | 10 | 0.001021s | 0.000998s | 0.000984s | byte equality observed |
| mp_insert_2.test | 10 | 0.000460s | 0.000459s | 0.000982s | byte equality observed |
| mp_intersperse.test | 10 | 0.000979s | 0.001001s | 0.001012s | byte equality observed |
| mp_invoke_q.test | 10 | 0.000975s | 0.001034s | 0.000995s | byte equality observed |
| mp_invoke_q_sf.test | 10 | 0.000994s | 0.001011s | 0.001051s | byte equality observed |
| mp_iota.test | 10 | 0.001018s | 0.001014s | 0.001000s | byte equality observed |
| mp_iota_2.test | 10 | 0.000978s | 0.001033s | 0.001020s | byte equality observed |
| mp_is_list.test | 10 | 0.000982s | 0.001001s | 0.000990s | byte equality observed |
| mp_is_map.test | 10 | 0.001003s | 0.001009s | 0.001006s | byte equality observed |
| mp_is_set.test | 10 | 0.000995s | 0.000972s | 0.001001s | byte equality observed |
| mp_is_value_list.test | 10 | 0.001021s | 0.000997s | 0.001004s | byte equality observed |
| mp_iterate.test | 10 | 0.001013s | 0.000999s | 0.001008s | byte equality observed |
| mp_join.test | 10 | 0.000994s | 0.001004s | 0.000990s | byte equality observed |
| mp_lambda.test | 10 | 0.001017s | 0.000999s | 0.001027s | byte equality observed |
| mp_less.test | 10 | 0.001031s | 0.001033s | 0.001002s | byte equality observed |
| mp_list_c.test | 10 | 0.001007s | 0.001001s | 0.000979s | byte equality observed |
| mp_list_v.test | 10 | 0.000460s | 0.000459s | 0.001006s | byte equality observed |
| mp_map_contains.test | 10 | 0.001007s | 0.001029s | 0.000991s | byte equality observed |
| mp_map_erase.test | 10 | 0.001011s | 0.000999s | 0.001027s | byte equality observed |
| mp_map_find.test | 10 | 0.001001s | 0.001013s | 0.001003s | byte equality observed |
| mp_map_find_2.test | 10 | 0.001006s | 0.000979s | 0.001022s | byte equality observed |
| mp_map_find_3.test | 10 | 0.001010s | 0.001026s | 0.000996s | byte equality observed |
| mp_map_find_4.test | 10 | 0.000990s | 0.000987s | 0.000981s | byte equality observed |
| mp_map_insert.test | 10 | 0.001013s | 0.000983s | 0.000986s | byte equality observed |
| mp_map_keys.test | 10 | 0.001004s | 0.001048s | 0.000964s | byte equality observed |
| mp_map_replace.test | 10 | 0.000999s | 0.000985s | 0.000988s | byte equality observed |
| mp_map_update.test | 10 | 0.000987s | 0.000999s | 0.000982s | byte equality observed |
| mp_map_update_q.test | 10 | 0.000994s | 0.000998s | 0.001003s | byte equality observed |
| mp_max.test | 7 | 0.000988s | 0.000996s | 0.001045s | byte equality observed |
| mp_max_element.test | 10 | 0.001007s | 0.001006s | 0.000982s | byte equality observed |
| mp_max_element_2.test | 10 | 0.000460s | 0.000455s | 0.000980s | byte equality observed |
| mp_max_element_q.test | 10 | 0.001007s | 0.001012s | 0.000982s | byte equality observed |
| mp_max_element_q_2.test | 10 | 0.000455s | 0.000454s | 0.000981s | byte equality observed |
| mp_min.test | 10 | 0.000990s | 0.000990s | 0.001044s | byte equality observed |
| mp_min_element.test | 10 | 0.000993s | 0.001027s | 0.000996s | byte equality observed |
| mp_min_element_2.test | 10 | 0.000454s | 0.000458s | 0.001011s | byte equality observed |
| mp_min_element_q.test | 10 | 0.001004s | 0.001032s | 0.001001s | byte equality observed |
| mp_min_element_q_2.test | 10 | 0.000454s | 0.000453s | 0.001006s | byte equality observed |
| mp_none_of.test | 10 | 0.000991s | 0.000997s | 0.000982s | byte equality observed |
| mp_none_of_q.test | 10 | 0.001005s | 0.001004s | 0.001033s | byte equality observed |
| mp_not_fn.test | 10 | 0.000974s | 0.001020s | 0.000980s | byte equality observed |
| mp_nth_element.test | 10 | 0.000985s | 0.000997s | 0.001015s | byte equality observed |
| mp_nth_element_q.test | 10 | 0.000983s | 0.001009s | 0.000986s | byte equality observed |
| mp_or.test | 10 | 0.001005s | 0.001029s | 0.000988s | byte equality observed |
| mp_pairwise_fold.test | 10 | 0.000999s | 0.001027s | 0.001002s | byte equality observed |
| mp_pairwise_fold_q.test | 10 | 0.000987s | 0.000999s | 0.000978s | byte equality observed |
| mp_partial_sum.test | 10 | 0.001036s | 0.001016s | 0.000990s | byte equality observed |
| mp_partition.test | 10 | 0.000987s | 0.001019s | 0.000992s | byte equality observed |
| mp_partition_q.test | 10 | 0.000981s | 0.000999s | 0.001008s | byte equality observed |
| mp_plus.test | 10 | 0.000979s | 0.001006s | 0.001013s | byte equality observed |
| mp_pop_back.test | 10 | 0.001033s | 0.001030s | 0.000994s | byte equality observed |
| mp_pop_back_2.test | 10 | 0.000455s | 0.000457s | 0.001007s | byte equality observed |
| mp_pop_front.test | 10 | 0.001002s | 0.001025s | 0.000966s | byte equality observed |
| mp_pop_front_2.test | 10 | 0.000459s | 0.000459s | 0.000978s | byte equality observed |
| mp_power_set.test | 10 | 0.000987s | 0.001010s | 0.001003s | byte equality observed |
| mp_product.test | 10 | 0.001023s | 0.000999s | 0.001015s | byte equality observed |
| mp_push_back.test | 10 | 0.000997s | 0.000994s | 0.000994s | byte equality observed |
| mp_push_back_2.test | 10 | 0.000459s | 0.000452s | 0.001000s | byte equality observed |
| mp_push_front.test | 10 | 0.001013s | 0.001047s | 0.000989s | byte equality observed |
| mp_push_front_2.test | 10 | 0.000455s | 0.000457s | 0.000998s | byte equality observed |
| mp_quote.test | 10 | 0.000966s | 0.000997s | 0.000996s | byte equality observed |
| mp_quote_trait.test | 10 | 0.000978s | 0.000996s | 0.001011s | byte equality observed |
| mp_remove.test | 10 | 0.000990s | 0.000987s | 0.000992s | byte equality observed |
| mp_remove_if.test | 10 | 0.001018s | 0.000995s | 0.001009s | byte equality observed |
| mp_remove_if_q.test | 10 | 0.001002s | 0.000996s | 0.001007s | byte equality observed |
| mp_rename.test | 10 | 0.000996s | 0.001002s | 0.001016s | byte equality observed |
| mp_rename_2.test | 10 | 0.000465s | 0.000468s | 0.000979s | byte equality observed |
| mp_rename_v.test | 10 | 0.000459s | 0.000468s | 0.000978s | byte equality observed |
| mp_repeat.test | 10 | 0.001028s | 0.001035s | 0.000996s | byte equality observed |
| mp_repeat_2.test | 10 | 0.000465s | 0.000449s | 0.000986s | byte equality observed |
| mp_repeat_3.test | 10 | 0.000997s | 0.000996s | 0.001004s | byte equality observed |
| mp_replace.test | 10 | 0.000989s | 0.000995s | 0.000996s | byte equality observed |
| mp_replace_at.test | 10 | 0.000991s | 0.001023s | 0.000992s | byte equality observed |
| mp_replace_at_c.test | 10 | 0.001003s | 0.001014s | 0.001005s | byte equality observed |
| mp_replace_front.test | 10 | 0.001012s | 0.001010s | 0.000989s | byte equality observed |
| mp_replace_front_2.test | 10 | 0.000455s | 0.000463s | 0.000978s | byte equality observed |
| mp_replace_if.test | 10 | 0.001004s | 0.001028s | 0.000968s | byte equality observed |
| mp_replace_if_q.test | 10 | 0.001025s | 0.001014s | 0.001023s | byte equality observed |
| mp_replace_second.test | 10 | 0.000992s | 0.000994s | 0.000995s | byte equality observed |
| mp_replace_second_2.test | 10 | 0.000460s | 0.000460s | 0.001007s | byte equality observed |
| mp_replace_third.test | 10 | 0.001014s | 0.001006s | 0.001002s | byte equality observed |
| mp_replace_third_2.test | 10 | 0.000461s | 0.000458s | 0.000962s | byte equality observed |
| mp_reverse.test | 10 | 0.001001s | 0.001010s | 0.001002s | byte equality observed |
| mp_reverse_fold.test | 10 | 0.001029s | 0.001047s | 0.000993s | byte equality observed |
| mp_reverse_fold_q.test | 10 | 0.000994s | 0.001018s | 0.000992s | byte equality observed |
| mp_rotate_left.test | 10 | 0.000995s | 0.001011s | 0.000984s | byte equality observed |
| mp_rotate_right.test | 10 | 0.000986s | 0.001009s | 0.000979s | byte equality observed |
| mp_same.test | 10 | 0.000978s | 0.001003s | 0.000987s | byte equality observed |
| mp_second.test | 10 | 0.000988s | 0.001012s | 0.000983s | byte equality observed |
| mp_second_2.test | 10 | 0.000460s | 0.000454s | 0.000995s | byte equality observed |
| mp_set_contains.test | 10 | 0.000995s | 0.000993s | 0.000984s | byte equality observed |
| mp_set_difference.test | 10 | 0.000997s | 0.000994s | 0.000964s | byte equality observed |
| mp_set_difference_sf.test | 10 | 0.000999s | 0.001012s | 0.000980s | byte equality observed |
| mp_set_intersection.test | 10 | 0.000994s | 0.000991s | 0.000988s | byte equality observed |
| mp_set_intersection_sf.test | 10 | 0.001011s | 0.000995s | 0.001007s | byte equality observed |
| mp_set_push_back.test | 10 | 0.000991s | 0.000997s | 0.000999s | byte equality observed |
| mp_set_push_front.test | 10 | 0.001002s | 0.001035s | 0.000992s | byte equality observed |
| mp_set_union.test | 10 | 0.001001s | 0.000991s | 0.000973s | byte equality observed |
| mp_set_union_sf.test | 10 | 0.000993s | 0.001014s | 0.000969s | byte equality observed |
| mp_similar.test | 10 | 0.000994s | 0.000990s | 0.000982s | byte equality observed |
| mp_size.test | 10 | 0.001001s | 0.001024s | 0.000994s | byte equality observed |
| mp_size_2.test | 10 | 0.000473s | 0.000447s | 0.001002s | byte equality observed |
| mp_slice.test | 10 | 0.001052s | 0.001026s | 0.000986s | byte equality observed |
| mp_slice_2.test | 10 | 0.000449s | 0.000457s | 0.000968s | byte equality observed |
| mp_sliding_fold.test | 10 | 0.001016s | 0.000997s | 0.000981s | byte equality observed |
| mp_sliding_fold_q.test | 10 | 0.001018s | 0.001037s | 0.001025s | byte equality observed |
| mp_sort.test | 10 | 0.001030s | 0.001039s | 0.001005s | byte equality observed |
| mp_sort_q.test | 10 | 0.000979s | 0.001015s | 0.001000s | byte equality observed |
| mp_split.test | 10 | 0.001013s | 0.000979s | 0.000978s | byte equality observed |
| mp_starts_with.test | 10 | 0.000986s | 0.001004s | 0.000972s | byte equality observed |
| mp_starts_with_sf.test | 10 | 0.000981s | 0.000997s | 0.001003s | byte equality observed |
| mp_take.test | 10 | 0.001032s | 0.001029s | 0.000993s | byte equality observed |
| mp_take_2.test | 10 | 0.000461s | 0.000448s | 0.000959s | byte equality observed |
| mp_third.test | 10 | 0.001034s | 0.001010s | 0.000990s | byte equality observed |
| mp_third_2.test | 10 | 0.000461s | 0.000459s | 0.000991s | byte equality observed |
| mp_transform.test | 10 | 0.001024s | 0.001015s | 0.000983s | byte equality observed |
| mp_transform_2.test | 10 | 0.000979s | 0.000957s | 0.000989s | byte equality observed |
| mp_transform_front.test | 10 | 0.001022s | 0.001016s | 0.000991s | byte equality observed |
| mp_transform_front_2.test | 10 | 0.000456s | 0.000457s | 0.000967s | byte equality observed |
| mp_transform_if.test | 10 | 0.001010s | 0.000983s | 0.000987s | byte equality observed |
| mp_transform_if_q.test | 10 | 0.000990s | 0.000994s | 0.001023s | byte equality observed |
| mp_transform_q.test | 10 | 0.001000s | 0.000993s | 0.001005s | byte equality observed |
| mp_transform_q_2.test | 10 | 0.000985s | 0.001015s | 0.001019s | byte equality observed |
| mp_transform_second.test | 10 | 0.001010s | 0.001023s | 0.001007s | byte equality observed |
| mp_transform_second_2.test | 10 | 0.000457s | 0.000458s | 0.000978s | byte equality observed |
| mp_transform_sf.test | 10 | 0.001002s | 0.000983s | 0.000995s | byte equality observed |
| mp_transform_third.test | 10 | 0.000992s | 0.001052s | 0.001017s | byte equality observed |
| mp_transform_third_2.test | 10 | 0.000457s | 0.000460s | 0.001002s | byte equality observed |
| mp_unique.test | 10 | 0.001018s | 0.001029s | 0.000979s | byte equality observed |
| mp_unique_if.test | 10 | 0.001031s | 0.001000s | 0.001000s | byte equality observed |
| mp_unique_if_q.test | 10 | 0.001023s | 0.001019s | 0.000988s | byte equality observed |
| mp_valid.test | 10 | 0.000984s | 0.001002s | 0.000985s | byte equality observed |
| mp_valid_and_true.test | 10 | 0.000995s | 0.001017s | 0.000995s | byte equality observed |
| mp_value.test | 10 | 0.000463s | 0.000456s | 0.000997s | byte equality observed |
| mp_with_index.test | 10 | 0.001374s | 0.001324s | 0.001267s | byte equality observed |
| mp_with_index_cx.test | 10 | 0.000458s | 0.000450s | 0.000993s | byte equality observed |
| mpl.test | 10 | 0.000985s | 0.001017s | 0.000991s | byte equality observed |
| mpl_list.test | 10 | 0.000990s | 0.001022s | 0.001021s | byte equality observed |
| mpl_tuple.test | 10 | 0.000999s | 0.000992s | 0.001003s | byte equality observed |
| mpl_version.test | 10 | 0.000977s | 0.001030s | 0.001023s | byte equality observed |
| set_version.test | 10 | 0.000991s | 0.001024s | 0.001000s | byte equality observed |
| tuple_apply.test | 10 | 0.001001s | 0.001001s | 0.001008s | byte equality observed |
| tuple_for_each.test | 10 | 0.001009s | 0.001037s | 0.000991s | byte equality observed |
| tuple_transform.test | 10 | 0.000975s | 0.001002s | 0.001001s | byte equality observed |
| tuple_transform_2.test | 10 | 0.000992s | 0.000995s | 0.000969s | byte equality observed |
| tuple_version.test | 10 | 0.000988s | 0.001011s | 0.000981s | byte equality observed |
| utility_version.test | 10 | 0.000992s | 0.001031s | 0.001012s | byte equality observed |
| version.test | 10 | 0.000994s | 0.001006s | 0.001010s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43632677224).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
