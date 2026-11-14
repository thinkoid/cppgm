# libs/mp11/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| mp11.test | COMPILE | 0.037982 | 0.075421 | 0.118079 | — | — | — |
| complex_h.test | COMPILE | 0.149554 | 0.301331 | 0.446553 | — | — | — |
| mp_size.test | RUN | 0.178767 | 0.958247 | 0.579208 | 0.001600 | 0.001758 | 0.001316 |
| mp_size_2.test | RUN | 0.015973 | 0.035601 | 0.053792 | 0.000750 | 0.000773 | 0.001492 |
| mp_empty.test | RUN | 0.167989 | 0.605639 | 0.596298 | 0.001640 | 0.001407 | 0.001685 |
| mp_empty_2.test | RUN | 0.015978 | 0.037778 | 0.058403 | 0.000592 | 0.000681 | 0.001570 |
| mp_assign.test | RUN | 0.193775 | 1.256387 | 0.751785 | 0.001634 | 0.001962 | 0.001486 |
| mp_assign_2.test | RUN | 0.015565 | 0.038849 | 0.048209 | 0.000570 | 0.000806 | 0.001586 |
| mp_clear.test | RUN | 0.162917 | 0.534420 | 0.518896 | 0.001620 | 0.001711 | 0.001352 |
| mp_clear_2.test | RUN | 0.015611 | 0.035592 | 0.059025 | 0.000633 | 0.000645 | 0.001750 |
| mp_front.test | RUN | 0.176628 | 0.864094 | 0.647533 | 0.001696 | 0.001959 | 0.001607 |
| mp_front_2.test | RUN | 0.016473 | 0.035501 | 0.058195 | 0.000601 | 0.000552 | 0.001796 |
| mp_pop_front.test | RUN | 0.161534 | 0.909262 | 0.676560 | 0.001604 | 0.001721 | 0.001563 |
| mp_pop_front_2.test | RUN | 0.016864 | 0.037889 | 0.055346 | 0.000597 | 0.000750 | 0.001390 |
| mp_second.test | RUN | 0.174810 | 0.589167 | 0.599374 | 0.001425 | 0.001802 | 0.001878 |
| mp_second_2.test | RUN | 0.015981 | 0.038367 | 0.052091 | 0.000719 | 0.000845 | 0.001819 |
| mp_third.test | RUN | 0.165944 | 0.550961 | 0.548615 | 0.001615 | 0.001884 | 0.001305 |
| mp_third_2.test | RUN | 0.015902 | 0.038512 | 0.054015 | 0.000569 | 0.000623 | 0.001248 |
| mp_push_front.test | RUN | 0.218139 | 1.929468 | 1.040351 | 0.001485 | 0.001863 | 0.001460 |
| mp_push_front_2.test | RUN | 0.015516 | 0.038216 | 0.057077 | 0.000592 | 0.000767 | 0.001623 |
| mp_push_back.test | RUN | 0.222929 | 1.921725 | 1.036229 | 0.001530 | 0.001842 | 0.001376 |
| mp_push_back_2.test | RUN | 0.016010 | 0.035496 | 0.056104 | 0.000586 | 0.000780 | 0.001663 |
| mp_rename.test | RUN | 0.210730 | 1.759942 | 0.836818 | 0.001641 | 0.001920 | 0.001613 |
| mp_rename_2.test | RUN | 0.016520 | 0.039402 | 0.060321 | 0.000705 | 0.000834 | 0.001658 |
| mp_append.test | RUN | 0.223069 | 2.008719 | 0.974048 | 0.001534 | 0.001846 | 0.001856 |
| mp_append_2.test | RUN | 0.451458 | 4.401625 | 1.264402 | 0.001812 | 0.001814 | 0.001664 |
| mp_append_3.test | RUN | 0.016646 | 0.037679 | 0.049820 | 0.000764 | 0.000863 | 0.001727 |
| mp_append_sf.test | RUN | 0.170896 | 0.500945 | 0.533814 | 0.001770 | 0.001816 | 0.001612 |
| mp_replace_front.test | RUN | 0.199545 | 1.440980 | 0.763251 | 0.001652 | 0.001991 | 0.001544 |
| mp_replace_front_2.test | RUN | 0.016971 | 0.037070 | 0.058023 | 0.000602 | 0.000835 | 0.001508 |
| mp_replace_second.test | RUN | 0.191130 | 0.945279 | 0.769451 | 0.001637 | 0.001747 | 0.001729 |
| mp_replace_second_2.test | RUN | 0.016220 | 0.038713 | 0.050980 | 0.000733 | 0.000764 | 0.001654 |
| mp_replace_third.test | RUN | 0.185985 | 0.795753 | 0.666362 | 0.001754 | 0.001638 | 0.001851 |
| mp_replace_third_2.test | RUN | 0.015594 | 0.037250 | 0.051350 | 0.000620 | 0.000562 | 0.001761 |
| mp_apply_q.test | RUN | 0.210080 | 1.705621 | 0.862681 | 0.001614 | 0.001811 | 0.001552 |
| mp_apply_q_sf.test | RUN | 0.163051 | 0.502864 | 0.573225 | 0.001737 | 0.001742 | 0.001674 |
| mp_is_list.test | RUN | 0.175671 | 0.596234 | 0.558328 | 0.001572 | 0.001895 | 0.001771 |
| mp_list_c.test | RUN | 0.181643 | 0.720140 | 0.623805 | 0.001620 | 0.001792 | 0.001469 |
| mp_transform_front.test | RUN | 0.192824 | 1.389034 | 0.786297 | 0.001769 | 0.001808 | 0.001423 |
| mp_transform_front_2.test | RUN | 0.016202 | 0.037347 | 0.059878 | 0.000602 | 0.000778 | 0.001718 |
| mp_transform_second.test | RUN | 0.178698 | 1.178515 | 0.729240 | 0.001496 | 0.001801 | 0.001509 |
| mp_transform_second_2.test | RUN | 0.015750 | 0.037587 | 0.049195 | 0.000663 | 0.000737 | 0.001482 |
| mp_transform_third.test | RUN | 0.178188 | 0.911551 | 0.610022 | 0.001611 | 0.001644 | 0.001699 |
| mp_transform_third_2.test | RUN | 0.015409 | 0.037765 | 0.059345 | 0.000673 | 0.000715 | 0.001757 |
| mp_list_v.test | RUN | 0.015845 | 0.036514 | 0.049418 | 0.000559 | 0.000615 | 0.001511 |
| mp_rename_v.test | RUN | 0.015930 | 0.041462 | 0.059749 | 0.000558 | 0.000672 | 0.001635 |
| mp_is_value_list.test | RUN | 0.166732 | 0.394836 | 0.522797 | 0.001756 | 0.001918 | 0.001708 |
| mp_transform.test | RUN | 0.375308 | 3.022438 | 1.609746 | 0.001860 | 0.001699 | 0.001633 |
| mp_transform_2.test | RUN | 0.162890 | 0.347627 | 0.529172 | 0.001517 | 0.001978 | 0.001739 |
| mp_transform_q.test | RUN | 0.364292 | 2.869754 | 1.515757 | 0.001486 | 0.002011 | 0.001681 |
| mp_transform_q_2.test | RUN | 0.399306 | 0.945596 | 1.998023 | 0.001870 | 0.001680 | 0.001560 |
| mp_transform_sf.test | RUN | 0.173643 | 0.550857 | 0.603217 | 0.001774 | 0.001384 | 0.001690 |
| mp_transform_if.test | RUN | 0.206199 | 1.432711 | 0.857616 | 0.001708 | 0.001657 | 0.001680 |
| mp_transform_if_q.test | RUN | 0.212988 | 1.449934 | 0.873783 | 0.001486 | 0.001661 | 0.001610 |
| mp_filter.test | RUN | 0.199041 | 0.849655 | 0.682128 | 0.001735 | 0.001778 | 0.001838 |
| mp_fill.test | RUN | 0.182087 | 0.654560 | 0.647813 | 0.001868 | 0.001773 | 0.001686 |
| mp_fill_2.test | RUN | 0.028757 | 0.060398 | 0.086954 | 0.000648 | 0.000835 | 0.001757 |
| mp_count.test | RUN | 0.357614 | 1.582407 | 0.999534 | 0.001760 | 0.001840 | 0.001620 |
| mp_count_if.test | RUN | 0.358883 | 1.568246 | 1.110651 | 0.001548 | 0.001495 | 0.001728 |
| mp_count_if_q.test | RUN | 0.188162 | 1.027279 | 0.642353 | 0.001661 | 0.001491 | 0.001910 |
| mp_contains.test | RUN | 0.182337 | 0.621432 | 0.593933 | 0.001751 | 0.001809 | 0.001750 |
| mp_starts_with.test | RUN | 0.182570 | 0.627247 | 0.609264 | 0.001448 | 0.001586 | 0.001664 |
| mp_starts_with_sf.test | RUN | 0.180876 | 0.531579 | 0.535272 | 0.001728 | 0.001915 | 0.001393 |
| mp_repeat.test | RUN | 0.259646 | 2.523231 | 1.104260 | 0.001878 | 0.002098 | 0.001608 |
| mp_repeat_2.test | RUN | 0.029431 | 0.060321 | 0.096574 | 0.000772 | 0.000769 | 0.001473 |
| mp_repeat_3.test | RUN | 0.230673 | 0.347250 | 0.565112 | 0.001674 | 0.001794 | 0.001594 |
| mp_product.test | RUN | 0.203447 | 1.504010 | 0.787498 | 0.001610 | 0.001924 | 0.001444 |
| mp_drop.test | RUN | 0.221093 | 1.865642 | 0.915080 | 0.001571 | 0.001724 | 0.001834 |
| mp_drop_2.test | RUN | 0.029362 | 0.059151 | 0.095691 | 0.000575 | 0.000826 | 0.001526 |
| mp_iota.test | RUN | 0.209206 | 1.627990 | 0.797831 | 0.001548 | 0.001776 | 0.001840 |
| mp_iota_2.test | RUN | 0.222486 | 1.958575 | 0.941728 | 0.001557 | 0.001961 | 0.001571 |
| mp_at.test | RUN | 0.186240 | 0.854348 | 0.691042 | 0.001692 | 0.001571 | 0.001766 |
| mp_at_2.test | RUN | 0.028956 | 0.057915 | 0.098577 | 0.000742 | 0.000675 | 0.001655 |
| mp_at_sf.test | RUN | 0.174731 | 0.537827 | 0.567341 | 0.001544 | 0.001836 | 0.001421 |
| mp_take.test | RUN | 0.281147 | 2.512978 | 1.116992 | 0.001813 | 0.001821 | 0.001868 |
| mp_take_2.test | RUN | 0.029104 | 0.051435 | 0.096436 | 0.000621 | 0.000783 | 0.001486 |
| mp_slice.test | RUN | 0.326816 | 2.547589 | 1.430117 | 0.001560 | 0.001898 | 0.001810 |
| mp_slice_2.test | RUN | 0.028754 | 0.057798 | 0.091408 | 0.000775 | 0.000826 | 0.001802 |
| mp_replace.test | RUN | 0.213789 | 1.288201 | 0.894202 | 0.001872 | 0.001678 | 0.001788 |
| mp_replace_if.test | RUN | 0.209022 | 1.149187 | 0.811253 | 0.001780 | 0.001755 | 0.001894 |
| mp_replace_if_q.test | RUN | 0.204411 | 1.140818 | 0.815250 | 0.001574 | 0.001858 | 0.001886 |
| mp_copy_if.test | RUN | 0.208299 | 1.575511 | 0.803926 | 0.001788 | 0.001672 | 0.001858 |
| mp_copy_if_q.test | RUN | 0.207556 | 1.581794 | 0.829178 | 0.001801 | 0.001688 | 0.001811 |
| mp_remove.test | RUN | 0.201300 | 1.082035 | 0.806659 | 0.001784 | 0.001900 | 0.001827 |
| mp_remove_if.test | RUN | 0.213511 | 1.694566 | 0.816337 | 0.001849 | 0.001876 | 0.001821 |
| mp_remove_if_q.test | RUN | 0.209524 | 1.654629 | 0.859554 | 0.001599 | 0.001805 | 0.001842 |
| mp_partition.test | RUN | 0.216678 | 1.574122 | 0.914003 | 0.001781 | 0.001630 | 0.001805 |
| mp_partition_q.test | RUN | 0.212951 | 1.564702 | 0.903926 | 0.001630 | 0.001804 | 0.001758 |
| mp_sort.test | RUN | 0.201662 | 1.125212 | 0.842303 | 0.001696 | 0.001949 | 0.001725 |
| mp_sort_q.test | RUN | 0.202980 | 1.129262 | 0.786547 | 0.001753 | 0.001753 | 0.001646 |
| mp_find.test | RUN | 0.200229 | 1.223706 | 0.703385 | 0.001815 | 0.001557 | 0.001733 |
| mp_find_if.test | RUN | 0.184474 | 1.096604 | 0.647086 | 0.001738 | 0.001694 | 0.001769 |
| mp_find_if_q.test | RUN | 0.208115 | 1.248886 | 0.794431 | 0.001550 | 0.002032 | 0.001801 |
| mp_reverse.test | RUN | 0.399207 | 3.244528 | 1.545151 | 0.001570 | 0.001656 | 0.001774 |
| mp_fold.test | RUN | 0.667016 | 2.570461 | 3.863472 | 0.001848 | 0.001954 | 0.001813 |
| mp_fold_q.test | RUN | 0.191140 | 1.125348 | 0.747506 | 0.001547 | 0.001913 | 0.001803 |
| mp_fold_q_sf.test | RUN | 0.182757 | 0.547013 | 0.594946 | 0.001722 | 0.001926 | 0.001844 |
| mp_reverse_fold.test | RUN | 0.328030 | 2.465374 | 1.099164 | 0.001680 | 0.001789 | 0.001570 |
| mp_reverse_fold_q.test | RUN | 0.201388 | 1.367533 | 0.842535 | 0.001806 | 0.001731 | 0.001685 |
| mp_unique.test | RUN | 0.202783 | 1.236478 | 0.794234 | 0.001504 | 0.001896 | 0.001768 |
| mp_unique_if.test | RUN | 0.354701 | 2.520536 | 1.266584 | 0.001678 | 0.001606 | 0.001610 |
| mp_unique_if_q.test | RUN | 0.303857 | 2.520979 | 1.042337 | 0.001519 | 0.001736 | 0.001868 |
| mp_all_of.test | RUN | 0.472484 | 1.422467 | 1.354406 | 0.001675 | 0.001797 | 0.001892 |
| mp_all_of_q.test | RUN | 0.172833 | 0.621572 | 0.580996 | 0.001557 | 0.001891 | 0.001927 |
| mp_any_of.test | RUN | 0.491508 | 1.457116 | 1.339902 | 0.001516 | 0.001842 | 0.001821 |
| mp_any_of_q.test | RUN | 0.177747 | 0.607299 | 0.609187 | 0.001786 | 0.001722 | 0.001674 |
| mp_none_of.test | RUN | 0.498243 | 1.428888 | 1.335192 | 0.001586 | 0.001836 | 0.001878 |
| mp_none_of_q.test | RUN | 0.175373 | 0.602413 | 0.586755 | 0.001580 | 0.001776 | 0.001768 |
| mp_replace_at.test | RUN | 0.218409 | 1.182314 | 0.853459 | 0.002156 | 0.001759 | 0.001828 |
| mp_replace_at_c.test | RUN | 0.205943 | 1.222743 | 0.897365 | 0.001517 | 0.001759 | 0.001808 |
| mp_for_each.test | RUN | 0.196710 | 0.923732 | 0.963751 | 0.001439 | 0.001754 | 0.001702 |
| mp_insert.test | RUN | 0.326835 | 2.478318 | 1.276810 | 0.001706 | 0.001851 | 0.001758 |
| mp_insert_2.test | RUN | 0.027861 | 0.059631 | 0.093801 | 0.000666 | 0.000657 | 0.001752 |
| mp_erase.test | RUN | 0.349713 | 2.654340 | 1.410198 | 0.001669 | 0.001822 | 0.001599 |
| mp_erase_2.test | RUN | 0.033337 | 0.060074 | 0.098319 | 0.000630 | 0.000784 | 0.001694 |
| mp_with_index.test | RUN | 0.445707 | 5.435874 | 3.208392 | 0.002181 | 0.001740 | 0.002188 |
| mp_with_index_cx.test | RUN | 0.003595 | 0.018763 | 0.025565 | 0.000713 | 0.000762 | 0.001715 |
| mp_from_sequence.test | RUN | 0.213175 | 1.414498 | 0.823998 | 0.001599 | 0.001750 | 0.001752 |
| mp_from_sequence_2.test | RUN | 0.218572 | 1.643564 | 0.961200 | 0.001744 | 0.001819 | 0.001768 |
| mp_from_sequence_3.test | RUN | 0.185645 | 0.752549 | 0.673401 | 0.001586 | 0.001867 | 0.001546 |
| mp_min_element.test | RUN | 0.184619 | 0.677067 | 0.637377 | 0.001701 | 0.001782 | 0.001791 |
| mp_min_element_2.test | RUN | 0.028739 | 0.059499 | 0.094290 | 0.000588 | 0.000738 | 0.001838 |
| mp_min_element_q.test | RUN | 0.183785 | 0.674498 | 0.614561 | 0.001382 | 0.001813 | 0.001634 |
| mp_min_element_q_2.test | RUN | 0.030099 | 0.059231 | 0.084030 | 0.000630 | 0.000733 | 0.001332 |
| mp_max_element.test | RUN | 0.186991 | 0.670189 | 0.585666 | 0.001615 | 0.001786 | 0.001683 |
| mp_max_element_2.test | RUN | 0.027808 | 0.057373 | 0.098302 | 0.000610 | 0.000678 | 0.001578 |
| mp_max_element_q.test | RUN | 0.175246 | 0.675811 | 0.581405 | 0.001778 | 0.001904 | 0.001748 |
| mp_max_element_q_2.test | RUN | 0.028334 | 0.059214 | 0.091411 | 0.000770 | 0.000714 | 0.001596 |
| mp_nth_element.test | RUN | 0.203117 | 0.941824 | 0.750731 | 0.001808 | 0.001855 | 0.001750 |
| mp_nth_element_q.test | RUN | 0.200405 | 0.960113 | 0.708221 | 0.001597 | 0.001742 | 0.001660 |
| mp_back.test | RUN | 0.195709 | 0.770797 | 0.711562 | 0.001743 | 0.001943 | 0.001779 |
| mp_back_2.test | RUN | 0.027214 | 0.055565 | 0.097848 | 0.000643 | 0.000692 | 0.001634 |
| mp_pop_back.test | RUN | 0.497371 | 5.125798 | 1.417728 | 0.001783 | 0.001739 | 0.001576 |
| mp_pop_back_2.test | RUN | 0.028042 | 0.059913 | 0.085391 | 0.000867 | 0.000721 | 0.001668 |
| mp_flatten.test | RUN | 0.230323 | 1.802908 | 0.992514 | 0.001791 | 0.002020 | 0.001306 |
| mp_rotate_left.test | RUN | 0.229788 | 1.947050 | 0.998105 | 0.001782 | 0.002027 | 0.001689 |
| mp_rotate_right.test | RUN | 0.220520 | 1.957200 | 0.989686 | 0.001606 | 0.001660 | 0.001548 |
| mp_power_set.test | RUN | 0.220651 | 1.883636 | 0.983803 | 0.001686 | 0.001867 | 0.001464 |
| mp_partial_sum.test | RUN | 0.286261 | 2.493132 | 1.128903 | 0.001636 | 0.001942 | 0.001516 |
| mp_iterate.test | RUN | 0.197656 | 0.769769 | 0.801458 | 0.001744 | 0.001897 | 0.001705 |
| mp_pairwise_fold.test | RUN | 0.228265 | 1.717455 | 1.010274 | 0.001573 | 0.002006 | 0.001632 |
| mp_pairwise_fold_q.test | RUN | 0.173566 | 0.521590 | 0.612702 | 0.001782 | 0.001834 | 0.001660 |
| mp_sliding_fold.test | RUN | 0.417017 | 3.321897 | 1.830072 | 0.001622 | 0.001800 | 0.001592 |
| mp_sliding_fold_q.test | RUN | 0.407871 | 3.341291 | 1.850479 | 0.001673 | 0.001698 | 0.001787 |
| mp_intersperse.test | RUN | 0.219549 | 1.264002 | 0.896705 | 0.001791 | 0.001828 | 0.001809 |
| mp_split.test | RUN | 0.292283 | 2.404176 | 1.180318 | 0.001763 | 0.001942 | 0.001678 |
| mp_join.test | RUN | 0.234285 | 1.988912 | 1.055337 | 0.001780 | 0.001894 | 0.001783 |
| integral.test | RUN | 0.191059 | 0.912756 | 0.661019 | 0.001609 | 0.001972 | 0.001716 |
| mp_value.test | RUN | 0.012881 | 0.032855 | 0.047937 | 0.000550 | 0.000618 | 0.001684 |
| mp_identity.test | RUN | 0.179825 | 0.824886 | 0.631351 | 0.001654 | 0.001588 | 0.001748 |
| mp_inherit.test | RUN | 0.175841 | 0.594183 | 0.588277 | 0.001588 | 0.001952 | 0.001761 |
| mp_if.test | RUN | 0.170544 | 0.684770 | 0.608615 | 0.001853 | 0.001600 | 0.001831 |
| mp_if_sf.test | RUN | 0.164584 | 0.506351 | 0.512022 | 0.001728 | 0.001967 | 0.001798 |
| mp_eval_if.test | RUN | 0.170649 | 0.731651 | 0.588283 | 0.001530 | 0.001656 | 0.001653 |
| mp_eval_if_sf.test | RUN | 0.167306 | 0.517843 | 0.546805 | 0.001740 | 0.001658 | 0.001771 |
| mp_valid.test | RUN | 0.165120 | 0.528783 | 0.562047 | 0.001599 | 0.001532 | 0.001835 |
| mp_defer.test | RUN | 0.176534 | 0.870789 | 0.694688 | 0.001489 | 0.001931 | 0.001669 |
| mp_quote.test | RUN | 0.185601 | 0.866243 | 0.680372 | 0.001630 | 0.001842 | 0.001802 |
| mp_invoke_q.test | RUN | 0.192843 | 1.156947 | 0.740183 | 0.001782 | 0.001924 | 0.001776 |
| mp_invoke_q_sf.test | RUN | 0.162108 | 0.515669 | 0.565423 | 0.001543 | 0.002188 | 0.001892 |
| mp_quote_trait.test | RUN | 0.175330 | 0.972746 | 0.620121 | 0.001736 | 0.001945 | 0.001852 |
| mp_cond.test | RUN | 0.168232 | 0.598351 | 0.576765 | 0.001834 | 0.001941 | 0.001466 |
| mp_cond_sf.test | RUN | 0.166175 | 0.521691 | 0.531703 | 0.001780 | 0.001968 | 0.001766 |
| mp_not_fn.test | RUN | 0.166673 | 0.514205 | 0.570625 | 0.001621 | 0.001878 | 0.001766 |
| mp_eval_if_not.test | RUN | 0.170619 | 0.706153 | 0.616404 | 0.001736 | 0.001709 | 0.001733 |
| mp_eval_or.test | RUN | 0.168940 | 0.410275 | 0.561941 | 0.001398 | 0.001897 | 0.001751 |
| mp_compose.test | RUN | 0.188285 | 1.179911 | 0.708503 | 0.001590 | 0.001642 | 0.001565 |
| mp_valid_and_true.test | RUN | 0.165995 | 0.614405 | 0.563299 | 0.001617 | 0.001770 | 0.001614 |
| mp_compose_sf.test | COMPILE | 0.039908 | 0.078596 | 0.140518 | — | — | — |
| integer_sequence.test | RUN | 0.197617 | 1.182268 | 0.815534 | 0.001578 | 0.001905 | 0.001723 |
| tuple_for_each.test | RUN | 0.169164 | 0.446110 | 0.571651 | 0.001439 | 0.001549 | 0.001638 |
| tuple_for_each_cx.test | COMPILE | 0.031095 | 0.069265 | 0.108073 | — | — | — |
| tuple_apply.test | RUN | 0.170841 | 0.460490 | 0.626769 | 0.001602 | 0.001490 | 0.001572 |
| tuple_apply_cx.test | COMPILE | 0.043100 | 0.090885 | 0.151462 | — | — | — |
| construct_from_tuple.test | RUN | 0.170121 | 0.477592 | 0.565811 | 0.001777 | 0.001761 | 0.001705 |
| construct_from_tuple_cx.test | COMPILE | 0.046108 | 0.094240 | 0.127948 | — | — | — |
| tuple_transform.test | RUN | 0.274200 | 0.981637 | 1.174855 | 0.001687 | 0.001878 | 0.001726 |
| tuple_transform_2.test | RUN | 0.240927 | 0.716784 | 1.045751 | 0.001654 | 0.001676 | 0.001681 |
| tuple_transform_cx.test | COMPILE | 0.040021 | 0.091151 | 0.140839 | — | — | — |
| mp_set_contains.test | RUN | 0.175693 | 0.622995 | 0.606440 | 0.001642 | 0.001624 | 0.001724 |
| mp_set_push_back.test | RUN | 0.224204 | 1.898668 | 0.994518 | 0.001802 | 0.001794 | 0.001732 |
| mp_set_push_front.test | RUN | 0.282105 | 2.250944 | 1.097103 | 0.001567 | 0.001896 | 0.001637 |
| mp_is_set.test | RUN | 0.175912 | 0.621294 | 0.623642 | 0.001711 | 0.001916 | 0.001644 |
| mp_set_union.test | RUN | 0.211856 | 1.601805 | 0.925838 | 0.001736 | 0.001976 | 0.001660 |
| mp_set_union_sf.test | RUN | 0.166350 | 0.510979 | 0.572325 | 0.001819 | 0.001980 | 0.001381 |
| mp_set_difference.test | RUN | 0.192332 | 1.268544 | 0.801503 | 0.001621 | 0.001959 | 0.001478 |
| mp_set_difference_sf.test | RUN | 0.161366 | 0.504676 | 0.560291 | 0.001584 | 0.001784 | 0.001439 |
| mp_set_intersection.test | RUN | 0.196702 | 1.253953 | 0.785816 | 0.001695 | 0.001720 | 0.001476 |
| mp_set_intersection_sf.test | RUN | 0.165162 | 0.506006 | 0.574134 | 0.001623 | 0.001893 | 0.001460 |
| mp_all.test | RUN | 0.173525 | 0.616751 | 0.605534 | 0.001658 | 0.001914 | 0.001601 |
| mp_all_2.test | RUN | 0.490700 | 1.339062 | 1.340854 | 0.001804 | 0.001972 | 0.001642 |
| mp_and.test | RUN | 0.170229 | 0.621040 | 0.600172 | 0.001898 | 0.001807 | 0.001404 |
| mp_any.test | RUN | 0.167484 | 0.625375 | 0.615497 | 0.001446 | 0.001933 | 0.001784 |
| mp_any_2.test | RUN | 0.499461 | 1.323912 | 1.243084 | 0.002057 | 0.001803 | 0.001730 |
| mp_or.test | RUN | 0.176726 | 0.595131 | 0.625345 | 0.001726 | 0.001782 | 0.001812 |
| mp_same.test | RUN | 0.349685 | 1.036887 | 0.945692 | 0.001772 | 0.001654 | 0.001802 |
| mp_plus.test | RUN | 0.173995 | 0.690989 | 0.640995 | 0.001632 | 0.001570 | 0.001713 |
| mp_less.test | RUN | 0.175771 | 0.620259 | 0.590525 | 0.001809 | 0.001828 | 0.001692 |
| mp_min.test | RUN | 0.168873 | 0.575892 | 0.563610 | 0.001466 | 0.001827 | 0.001765 |
| mp_max.test | RUN | 0.172010 | 0.635009 | 0.576008 | 0.001668 | 0.001604 | 0.001564 |
| mp_similar.test | RUN | 0.172108 | 0.623545 | 0.574914 | 0.001805 | 0.001587 | 0.001738 |
| mp_map_find.test | RUN | 0.198509 | 1.126554 | 0.738041 | 0.001825 | 0.001820 | 0.001726 |
| mp_map_find_2.test | RUN | 0.183416 | 0.468276 | 0.662728 | 0.001891 | 0.001763 | 0.001469 |
| mp_map_find_3.test | RUN | 0.183476 | 0.448738 | 0.695132 | 0.001620 | 0.001632 | 0.001638 |
| mp_map_find_4.test | RUN | 0.174903 | 0.413093 | 0.590407 | 0.001674 | 0.001540 | 0.001432 |
| mp_map_contains.test | RUN | 0.179667 | 0.635051 | 0.581252 | 0.001852 | 0.002018 | 0.001676 |
| mp_map_insert.test | RUN | 0.232499 | 2.087627 | 1.066150 | 0.001802 | 0.001881 | 0.001664 |
| mp_map_replace.test | RUN | 0.297879 | 2.393420 | 1.210334 | 0.001409 | 0.001928 | 0.001239 |
| mp_map_erase.test | RUN | 0.228921 | 1.788345 | 1.027413 | 0.001472 | 0.001635 | 0.001703 |
| mp_map_update.test | RUN | 0.205058 | 1.148025 | 0.809337 | 0.001834 | 0.001918 | 0.001648 |
| mp_map_update_q.test | RUN | 0.207553 | 1.163788 | 0.809703 | 0.001730 | 0.001805 | 0.001679 |
| mp_map_keys.test | RUN | 0.205286 | 1.044915 | 0.789463 | 0.001398 | 0.001913 | 0.001554 |
| mp_is_map.test | RUN | 0.186108 | 0.633188 | 0.646733 | 0.001438 | 0.001556 | 0.001538 |
| mp_bind.test | RUN | 0.222595 | 1.858591 | 0.927054 | 0.001768 | 0.001674 | 0.001707 |
| mp_bind_q.test | RUN | 0.195658 | 1.150542 | 0.768184 | 0.001806 | 0.001777 | 0.001431 |
| mp_bind_front.test | RUN | 0.196072 | 1.265282 | 0.713083 | 0.001852 | 0.001860 | 0.001781 |
| mp_bind_back.test | RUN | 0.194856 | 1.277130 | 0.757077 | 0.001593 | 0.001799 | 0.001563 |
| mp_lambda.test | RUN | 0.422914 | 3.833313 | 1.863167 | 0.001415 | 0.001448 | 0.001808 |
| mpl.test | RUN | 0.382097 | 1.029294 | 1.510105 | 0.001790 | 0.001979 | 0.001515 |
| mpl_list.test | RUN | 0.220508 | 0.761448 | 0.715523 | 0.001580 | 0.001645 | 0.001823 |
| mpl_tuple.test | RUN | 0.219972 | 0.768342 | 0.730492 | 0.001518 | 0.001840 | 0.001560 |
| version.test | RUN | 0.113406 | 0.277706 | 0.384557 | 0.001818 | 0.001848 | 0.001772 |
| mp11_version.test | RUN | 0.139361 | 0.330698 | 0.414196 | 0.001525 | 0.001726 | 0.001458 |
| list_version.test | RUN | 0.116301 | 0.283378 | 0.369834 | 0.001629 | 0.001694 | 0.001520 |
| algorithm_version.test | RUN | 0.129719 | 0.312578 | 0.402742 | 0.001600 | 0.001831 | 0.001600 |
| integral_version.test | RUN | 0.112562 | 0.284943 | 0.357527 | 0.001726 | 0.001858 | 0.001473 |
| utility_version.test | RUN | 0.116042 | 0.291876 | 0.372241 | 0.001401 | 0.001743 | 0.001681 |
| function_version.test | RUN | 0.116747 | 0.285724 | 0.385270 | 0.001521 | 0.001792 | 0.001566 |
| map_version.test | RUN | 0.129468 | 0.310148 | 0.393805 | 0.001386 | 0.001854 | 0.001717 |
| set_version.test | RUN | 0.117097 | 0.299324 | 0.400259 | 0.001503 | 0.001737 | 0.001476 |
| bind_version.test | RUN | 0.128082 | 0.308711 | 0.417284 | 0.001329 | 0.001702 | 0.001717 |
| integer_sequence_version.test | RUN | 0.111076 | 0.285152 | 0.317953 | 0.001530 | 0.001783 | 0.001264 |
| tuple_version.test | RUN | 0.128402 | 0.313389 | 0.377548 | 0.001468 | 0.001998 | 0.001340 |
| mpl_version.test | RUN | 0.095397 | 0.244139 | 0.369555 | 0.001366 | 0.001472 | 0.001186 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 1.018× | 1.034×, 1.002× | 0.996× |
| clang | 1.080× | 1.084×, 1.077× | 0.993× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1363 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43638391827).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| algorithm_version.test | 10 | 0.000973s | 0.001050s | 0.000959s | byte equality observed |
| bind_version.test | 10 | 0.000975s | 0.000974s | 0.000989s | byte equality observed |
| construct_from_tuple.test | 10 | 0.000996s | 0.000986s | 0.001011s | byte equality observed |
| function_version.test | 10 | 0.000995s | 0.000996s | 0.001011s | byte equality observed |
| integer_sequence.test | 10 | 0.000975s | 0.000984s | 0.001041s | byte equality observed |
| integer_sequence_version.test | 10 | 0.000981s | 0.000986s | 0.000988s | byte equality observed |
| integral.test | 10 | 0.000975s | 0.001009s | 0.000982s | byte equality observed |
| integral_version.test | 10 | 0.000977s | 0.001006s | 0.000985s | byte equality observed |
| list_version.test | 10 | 0.001003s | 0.000979s | 0.000994s | byte equality observed |
| map_version.test | 10 | 0.001006s | 0.001005s | 0.001001s | byte equality observed |
| mp11_version.test | 10 | 0.001004s | 0.001004s | 0.001020s | byte equality observed |
| mp_all.test | 10 | 0.001021s | 0.000984s | 0.001020s | byte equality observed |
| mp_all_2.test | 10 | 0.001018s | 0.001003s | 0.001010s | byte equality observed |
| mp_all_of.test | 10 | 0.001015s | 0.001022s | 0.001034s | byte equality observed |
| mp_all_of_q.test | 10 | 0.000993s | 0.000990s | 0.001023s | byte equality observed |
| mp_and.test | 10 | 0.001001s | 0.001056s | 0.000992s | byte equality observed |
| mp_any.test | 10 | 0.001016s | 0.001045s | 0.001035s | byte equality observed |
| mp_any_2.test | 10 | 0.001036s | 0.001025s | 0.001043s | byte equality observed |
| mp_any_of.test | 10 | 0.001007s | 0.001021s | 0.001022s | byte equality observed |
| mp_any_of_q.test | 10 | 0.001016s | 0.001076s | 0.001001s | byte equality observed |
| mp_append.test | 10 | 0.001004s | 0.001025s | 0.001010s | byte equality observed |
| mp_append_2.test | 10 | 0.001039s | 0.001032s | 0.000984s | byte equality observed |
| mp_append_3.test | 10 | 0.000474s | 0.000477s | 0.001011s | byte equality observed |
| mp_append_sf.test | 10 | 0.001011s | 0.001053s | 0.001008s | byte equality observed |
| mp_apply_q.test | 10 | 0.001017s | 0.001004s | 0.001061s | byte equality observed |
| mp_apply_q_sf.test | 10 | 0.001020s | 0.001023s | 0.001051s | byte equality observed |
| mp_assign.test | 10 | 0.001019s | 0.001009s | 0.001004s | byte equality observed |
| mp_assign_2.test | 10 | 0.000469s | 0.000466s | 0.000984s | byte equality observed |
| mp_at.test | 10 | 0.001039s | 0.001043s | 0.001013s | byte equality observed |
| mp_at_2.test | 10 | 0.000471s | 0.000468s | 0.001009s | byte equality observed |
| mp_at_sf.test | 10 | 0.001009s | 0.001009s | 0.000993s | byte equality observed |
| mp_back.test | 10 | 0.001040s | 0.001024s | 0.001012s | byte equality observed |
| mp_back_2.test | 10 | 0.000467s | 0.000469s | 0.000990s | byte equality observed |
| mp_bind.test | 10 | 0.001018s | 0.001011s | 0.001039s | byte equality observed |
| mp_bind_back.test | 10 | 0.000995s | 0.001037s | 0.001026s | byte equality observed |
| mp_bind_front.test | 10 | 0.001008s | 0.001009s | 0.001006s | byte equality observed |
| mp_bind_q.test | 10 | 0.001003s | 0.000979s | 0.001020s | byte equality observed |
| mp_clear.test | 10 | 0.001018s | 0.001056s | 0.000996s | byte equality observed |
| mp_clear_2.test | 10 | 0.000468s | 0.000469s | 0.001012s | byte equality observed |
| mp_compose.test | 10 | 0.001021s | 0.001018s | 0.000980s | byte equality observed |
| mp_cond.test | 10 | 0.001012s | 0.001000s | 0.000993s | byte equality observed |
| mp_cond_sf.test | 10 | 0.001012s | 0.001006s | 0.001008s | byte equality observed |
| mp_contains.test | 10 | 0.001032s | 0.001016s | 0.001014s | byte equality observed |
| mp_copy_if.test | 10 | 0.001005s | 0.001016s | 0.000989s | byte equality observed |
| mp_copy_if_q.test | 10 | 0.001004s | 0.001031s | 0.001010s | byte equality observed |
| mp_count.test | 10 | 0.000993s | 0.001038s | 0.000999s | byte equality observed |
| mp_count_if.test | 10 | 0.000998s | 0.001007s | 0.000987s | byte equality observed |
| mp_count_if_q.test | 10 | 0.000981s | 0.000986s | 0.001003s | byte equality observed |
| mp_defer.test | 10 | 0.001017s | 0.000998s | 0.001024s | byte equality observed |
| mp_drop.test | 10 | 0.001024s | 0.001020s | 0.001006s | byte equality observed |
| mp_drop_2.test | 10 | 0.000473s | 0.000470s | 0.001007s | byte equality observed |
| mp_empty.test | 10 | 0.001025s | 0.001055s | 0.001006s | byte equality observed |
| mp_empty_2.test | 10 | 0.000464s | 0.000471s | 0.000986s | byte equality observed |
| mp_erase.test | 10 | 0.001069s | 0.001034s | 0.001036s | byte equality observed |
| mp_erase_2.test | 10 | 0.000473s | 0.000465s | 0.001005s | byte equality observed |
| mp_eval_if.test | 10 | 0.001024s | 0.001038s | 0.001006s | byte equality observed |
| mp_eval_if_not.test | 10 | 0.001023s | 0.001039s | 0.001016s | byte equality observed |
| mp_eval_if_sf.test | 10 | 0.001019s | 0.001022s | 0.000998s | byte equality observed |
| mp_eval_or.test | 10 | 0.001007s | 0.000993s | 0.001011s | byte equality observed |
| mp_fill.test | 10 | 0.001031s | 0.001038s | 0.001007s | byte equality observed |
| mp_fill_2.test | 10 | 0.000462s | 0.000470s | 0.001007s | byte equality observed |
| mp_filter.test | 10 | 0.001011s | 0.001050s | 0.000994s | byte equality observed |
| mp_find.test | 10 | 0.001001s | 0.001057s | 0.001036s | byte equality observed |
| mp_find_if.test | 10 | 0.001012s | 0.001054s | 0.001019s | byte equality observed |
| mp_find_if_q.test | 10 | 0.001005s | 0.001013s | 0.000997s | byte equality observed |
| mp_flatten.test | 10 | 0.001010s | 0.001029s | 0.001021s | byte equality observed |
| mp_fold.test | 10 | 0.001041s | 0.001006s | 0.001003s | byte equality observed |
| mp_fold_q.test | 10 | 0.001006s | 0.001002s | 0.001018s | byte equality observed |
| mp_fold_q_sf.test | 10 | 0.000991s | 0.001008s | 0.001072s | byte equality observed |
| mp_for_each.test | 10 | 0.000999s | 0.001009s | 0.001050s | byte equality observed |
| mp_from_sequence.test | 10 | 0.001054s | 0.001028s | 0.001031s | byte equality observed |
| mp_from_sequence_2.test | 10 | 0.001029s | 0.001010s | 0.000992s | byte equality observed |
| mp_from_sequence_3.test | 10 | 0.001018s | 0.000999s | 0.001010s | byte equality observed |
| mp_front.test | 10 | 0.001037s | 0.001035s | 0.000985s | byte equality observed |
| mp_front_2.test | 10 | 0.000468s | 0.000479s | 0.000983s | byte equality observed |
| mp_identity.test | 10 | 0.001007s | 0.001024s | 0.001006s | byte equality observed |
| mp_if.test | 10 | 0.001016s | 0.001035s | 0.001010s | byte equality observed |
| mp_if_sf.test | 10 | 0.001035s | 0.001021s | 0.001014s | byte equality observed |
| mp_inherit.test | 10 | 0.001037s | 0.001015s | 0.000992s | byte equality observed |
| mp_insert.test | 10 | 0.001063s | 0.001044s | 0.001009s | byte equality observed |
| mp_insert_2.test | 10 | 0.000473s | 0.000460s | 0.000982s | byte equality observed |
| mp_intersperse.test | 10 | 0.001015s | 0.001037s | 0.001025s | byte equality observed |
| mp_invoke_q.test | 10 | 0.001014s | 0.001044s | 0.001011s | byte equality observed |
| mp_invoke_q_sf.test | 10 | 0.000998s | 0.001024s | 0.000989s | byte equality observed |
| mp_iota.test | 10 | 0.000993s | 0.001052s | 0.001001s | byte equality observed |
| mp_iota_2.test | 10 | 0.001002s | 0.001027s | 0.000980s | byte equality observed |
| mp_is_list.test | 10 | 0.000996s | 0.001019s | 0.001008s | byte equality observed |
| mp_is_map.test | 10 | 0.001012s | 0.001026s | 0.000963s | byte equality observed |
| mp_is_set.test | 10 | 0.000991s | 0.000997s | 0.000981s | byte equality observed |
| mp_is_value_list.test | 10 | 0.000992s | 0.001003s | 0.000976s | byte equality observed |
| mp_iterate.test | 10 | 0.001002s | 0.001050s | 0.001036s | byte equality observed |
| mp_join.test | 10 | 0.001000s | 0.001017s | 0.001017s | byte equality observed |
| mp_lambda.test | 10 | 0.001034s | 0.001048s | 0.001029s | byte equality observed |
| mp_less.test | 10 | 0.001012s | 0.001051s | 0.001002s | byte equality observed |
| mp_list_c.test | 10 | 0.001028s | 0.001024s | 0.000985s | byte equality observed |
| mp_list_v.test | 10 | 0.000470s | 0.000480s | 0.001017s | byte equality observed |
| mp_map_contains.test | 10 | 0.000997s | 0.001002s | 0.000991s | byte equality observed |
| mp_map_erase.test | 10 | 0.001022s | 0.001021s | 0.000998s | byte equality observed |
| mp_map_find.test | 10 | 0.001005s | 0.001034s | 0.000998s | byte equality observed |
| mp_map_find_2.test | 10 | 0.000996s | 0.001042s | 0.000998s | byte equality observed |
| mp_map_find_3.test | 10 | 0.001027s | 0.001043s | 0.001005s | byte equality observed |
| mp_map_find_4.test | 10 | 0.001008s | 0.001005s | 0.001003s | byte equality observed |
| mp_map_insert.test | 10 | 0.001008s | 0.001012s | 0.000995s | byte equality observed |
| mp_map_keys.test | 10 | 0.001004s | 0.001052s | 0.001036s | byte equality observed |
| mp_map_replace.test | 10 | 0.001021s | 0.001050s | 0.001007s | byte equality observed |
| mp_map_update.test | 10 | 0.001021s | 0.001026s | 0.000994s | byte equality observed |
| mp_map_update_q.test | 10 | 0.001006s | 0.001013s | 0.001016s | byte equality observed |
| mp_max.test | 10 | 0.001020s | 0.001053s | 0.000995s | byte equality observed |
| mp_max_element.test | 10 | 0.001012s | 0.001039s | 0.000990s | byte equality observed |
| mp_max_element_2.test | 10 | 0.000469s | 0.000467s | 0.001017s | byte equality observed |
| mp_max_element_q.test | 10 | 0.001049s | 0.001047s | 0.001012s | byte equality observed |
| mp_max_element_q_2.test | 10 | 0.000467s | 0.000458s | 0.001030s | byte equality observed |
| mp_min.test | 10 | 0.001023s | 0.001037s | 0.000980s | byte equality observed |
| mp_min_element.test | 10 | 0.001013s | 0.001029s | 0.001004s | byte equality observed |
| mp_min_element_2.test | 10 | 0.000472s | 0.000468s | 0.000988s | byte equality observed |
| mp_min_element_q.test | 10 | 0.001053s | 0.001076s | 0.000988s | byte equality observed |
| mp_min_element_q_2.test | 10 | 0.000470s | 0.000469s | 0.000986s | byte equality observed |
| mp_none_of.test | 10 | 0.000986s | 0.001032s | 0.000991s | byte equality observed |
| mp_none_of_q.test | 10 | 0.001016s | 0.001038s | 0.000998s | byte equality observed |
| mp_not_fn.test | 10 | 0.001000s | 0.001005s | 0.001000s | byte equality observed |
| mp_nth_element.test | 10 | 0.001034s | 0.001015s | 0.000977s | byte equality observed |
| mp_nth_element_q.test | 10 | 0.001005s | 0.001045s | 0.000989s | byte equality observed |
| mp_or.test | 10 | 0.000995s | 0.001001s | 0.000992s | byte equality observed |
| mp_pairwise_fold.test | 10 | 0.001015s | 0.001007s | 0.001004s | byte equality observed |
| mp_pairwise_fold_q.test | 10 | 0.000994s | 0.001044s | 0.000995s | byte equality observed |
| mp_partial_sum.test | 10 | 0.001011s | 0.001024s | 0.001014s | byte equality observed |
| mp_partition.test | 10 | 0.001015s | 0.001007s | 0.001030s | byte equality observed |
| mp_partition_q.test | 10 | 0.001048s | 0.001033s | 0.001036s | byte equality observed |
| mp_plus.test | 10 | 0.001020s | 0.001020s | 0.001010s | byte equality observed |
| mp_pop_back.test | 10 | 0.001048s | 0.001054s | 0.000987s | byte equality observed |
| mp_pop_back_2.test | 10 | 0.000470s | 0.000471s | 0.000976s | byte equality observed |
| mp_pop_front.test | 10 | 0.001058s | 0.001045s | 0.001002s | byte equality observed |
| mp_pop_front_2.test | 10 | 0.000466s | 0.000471s | 0.000992s | byte equality observed |
| mp_power_set.test | 10 | 0.001017s | 0.001041s | 0.001021s | byte equality observed |
| mp_product.test | 10 | 0.000994s | 0.001055s | 0.001037s | byte equality observed |
| mp_push_back.test | 10 | 0.001027s | 0.001063s | 0.001035s | byte equality observed |
| mp_push_back_2.test | 10 | 0.000479s | 0.000464s | 0.000975s | byte equality observed |
| mp_push_front.test | 10 | 0.001045s | 0.001042s | 0.001016s | byte equality observed |
| mp_push_front_2.test | 10 | 0.000471s | 0.000465s | 0.000990s | byte equality observed |
| mp_quote.test | 10 | 0.000999s | 0.001033s | 0.000982s | byte equality observed |
| mp_quote_trait.test | 10 | 0.000998s | 0.001032s | 0.001004s | byte equality observed |
| mp_remove.test | 10 | 0.001028s | 0.001040s | 0.000981s | byte equality observed |
| mp_remove_if.test | 10 | 0.001010s | 0.001019s | 0.000997s | byte equality observed |
| mp_remove_if_q.test | 10 | 0.001006s | 0.001025s | 0.001007s | byte equality observed |
| mp_rename.test | 10 | 0.001033s | 0.001020s | 0.000997s | byte equality observed |
| mp_rename_2.test | 10 | 0.000469s | 0.000470s | 0.000991s | byte equality observed |
| mp_rename_v.test | 10 | 0.000468s | 0.000469s | 0.000989s | byte equality observed |
| mp_repeat.test | 10 | 0.001066s | 0.001074s | 0.000990s | byte equality observed |
| mp_repeat_2.test | 10 | 0.000465s | 0.000476s | 0.000962s | byte equality observed |
| mp_repeat_3.test | 10 | 0.001016s | 0.001062s | 0.000989s | byte equality observed |
| mp_replace.test | 10 | 0.001004s | 0.001014s | 0.001009s | byte equality observed |
| mp_replace_at.test | 10 | 0.001009s | 0.001035s | 0.000987s | byte equality observed |
| mp_replace_at_c.test | 10 | 0.001014s | 0.001016s | 0.001007s | byte equality observed |
| mp_replace_front.test | 10 | 0.001014s | 0.001050s | 0.001002s | byte equality observed |
| mp_replace_front_2.test | 10 | 0.000471s | 0.000468s | 0.000989s | byte equality observed |
| mp_replace_if.test | 10 | 0.001010s | 0.001009s | 0.000996s | byte equality observed |
| mp_replace_if_q.test | 10 | 0.001021s | 0.001017s | 0.001027s | byte equality observed |
| mp_replace_second.test | 10 | 0.001022s | 0.001031s | 0.001004s | byte equality observed |
| mp_replace_second_2.test | 10 | 0.000476s | 0.000469s | 0.000994s | byte equality observed |
| mp_replace_third.test | 10 | 0.001029s | 0.001045s | 0.000984s | byte equality observed |
| mp_replace_third_2.test | 10 | 0.000466s | 0.000469s | 0.000986s | byte equality observed |
| mp_reverse.test | 10 | 0.001035s | 0.001031s | 0.001029s | byte equality observed |
| mp_reverse_fold.test | 10 | 0.001030s | 0.001009s | 0.001012s | byte equality observed |
| mp_reverse_fold_q.test | 10 | 0.000996s | 0.001037s | 0.001027s | byte equality observed |
| mp_rotate_left.test | 10 | 0.001002s | 0.001068s | 0.001025s | byte equality observed |
| mp_rotate_right.test | 10 | 0.000987s | 0.001050s | 0.001010s | byte equality observed |
| mp_same.test | 10 | 0.001004s | 0.001054s | 0.001022s | byte equality observed |
| mp_second.test | 10 | 0.001013s | 0.001020s | 0.001003s | byte equality observed |
| mp_second_2.test | 10 | 0.000474s | 0.000480s | 0.000977s | byte equality observed |
| mp_set_contains.test | 10 | 0.001034s | 0.001041s | 0.001026s | byte equality observed |
| mp_set_difference.test | 10 | 0.001022s | 0.001032s | 0.001012s | byte equality observed |
| mp_set_difference_sf.test | 10 | 0.000998s | 0.001009s | 0.000991s | byte equality observed |
| mp_set_intersection.test | 10 | 0.001022s | 0.001040s | 0.001022s | byte equality observed |
| mp_set_intersection_sf.test | 10 | 0.001024s | 0.001055s | 0.000994s | byte equality observed |
| mp_set_push_back.test | 10 | 0.001044s | 0.001006s | 0.000991s | byte equality observed |
| mp_set_push_front.test | 10 | 0.001043s | 0.001061s | 0.001042s | byte equality observed |
| mp_set_union.test | 10 | 0.001008s | 0.001031s | 0.001008s | byte equality observed |
| mp_set_union_sf.test | 10 | 0.001000s | 0.001027s | 0.000988s | byte equality observed |
| mp_similar.test | 10 | 0.001015s | 0.001061s | 0.000968s | byte equality observed |
| mp_size.test | 10 | 0.001025s | 0.001036s | 0.000989s | byte equality observed |
| mp_size_2.test | 10 | 0.000465s | 0.000489s | 0.001005s | byte equality observed |
| mp_slice.test | 10 | 0.001051s | 0.001076s | 0.001017s | byte equality observed |
| mp_slice_2.test | 10 | 0.000473s | 0.000467s | 0.000988s | byte equality observed |
| mp_sliding_fold.test | 10 | 0.001042s | 0.001073s | 0.000992s | byte equality observed |
| mp_sliding_fold_q.test | 10 | 0.001035s | 0.001031s | 0.001007s | byte equality observed |
| mp_sort.test | 10 | 0.001016s | 0.001030s | 0.001000s | byte equality observed |
| mp_sort_q.test | 10 | 0.001024s | 0.001051s | 0.000975s | byte equality observed |
| mp_split.test | 10 | 0.001052s | 0.001033s | 0.001008s | byte equality observed |
| mp_starts_with.test | 10 | 0.001004s | 0.001029s | 0.000996s | byte equality observed |
| mp_starts_with_sf.test | 10 | 0.001027s | 0.001033s | 0.000996s | byte equality observed |
| mp_take.test | 10 | 0.001049s | 0.001049s | 0.001024s | byte equality observed |
| mp_take_2.test | 10 | 0.000471s | 0.000492s | 0.000973s | byte equality observed |
| mp_third.test | 10 | 0.001015s | 0.001065s | 0.001000s | byte equality observed |
| mp_third_2.test | 10 | 0.000474s | 0.000462s | 0.000981s | byte equality observed |
| mp_transform.test | 10 | 0.001034s | 0.001048s | 0.001023s | byte equality observed |
| mp_transform_2.test | 10 | 0.001002s | 0.001038s | 0.000991s | byte equality observed |
| mp_transform_front.test | 10 | 0.001010s | 0.001060s | 0.000997s | byte equality observed |
| mp_transform_front_2.test | 10 | 0.000476s | 0.000474s | 0.001010s | byte equality observed |
| mp_transform_if.test | 10 | 0.001033s | 0.001047s | 0.000996s | byte equality observed |
| mp_transform_if_q.test | 10 | 0.001015s | 0.001027s | 0.001006s | byte equality observed |
| mp_transform_q.test | 10 | 0.001069s | 0.001057s | 0.001004s | byte equality observed |
| mp_transform_q_2.test | 10 | 0.001027s | 0.001045s | 0.000982s | byte equality observed |
| mp_transform_second.test | 10 | 0.001024s | 0.001061s | 0.000989s | byte equality observed |
| mp_transform_second_2.test | 10 | 0.000461s | 0.000491s | 0.000987s | byte equality observed |
| mp_transform_sf.test | 10 | 0.001005s | 0.001072s | 0.001014s | byte equality observed |
| mp_transform_third.test | 10 | 0.001026s | 0.001085s | 0.001008s | byte equality observed |
| mp_transform_third_2.test | 10 | 0.000464s | 0.000480s | 0.000993s | byte equality observed |
| mp_unique.test | 10 | 0.001020s | 0.001050s | 0.001011s | byte equality observed |
| mp_unique_if.test | 10 | 0.001031s | 0.001074s | 0.001013s | byte equality observed |
| mp_unique_if_q.test | 10 | 0.001023s | 0.001075s | 0.001044s | byte equality observed |
| mp_valid.test | 10 | 0.001020s | 0.001056s | 0.001026s | byte equality observed |
| mp_valid_and_true.test | 10 | 0.001023s | 0.001017s | 0.000995s | byte equality observed |
| mp_value.test | 10 | 0.000468s | 0.000481s | 0.000971s | byte equality observed |
| mp_with_index.test | 10 | 0.001404s | 0.001368s | 0.001270s | byte equality observed |
| mp_with_index_cx.test | 10 | 0.000467s | 0.000478s | 0.001005s | byte equality observed |
| mpl.test | 10 | 0.001040s | 0.001022s | 0.000982s | byte equality observed |
| mpl_list.test | 10 | 0.001044s | 0.001047s | 0.001008s | byte equality observed |
| mpl_tuple.test | 10 | 0.001015s | 0.001053s | 0.001017s | byte equality observed |
| mpl_version.test | 10 | 0.001032s | 0.001023s | 0.000995s | byte equality observed |
| set_version.test | 10 | 0.000997s | 0.000991s | 0.001014s | byte equality observed |
| tuple_apply.test | 10 | 0.001023s | 0.000996s | 0.001040s | byte equality observed |
| tuple_for_each.test | 10 | 0.001005s | 0.001026s | 0.001004s | byte equality observed |
| tuple_transform.test | 10 | 0.001020s | 0.001001s | 0.001019s | byte equality observed |
| tuple_transform_2.test | 10 | 0.000992s | 0.001058s | 0.000995s | byte equality observed |
| tuple_version.test | 10 | 0.001022s | 0.001001s | 0.000999s | byte equality observed |
| utility_version.test | 10 | 0.001014s | 0.001000s | 0.000990s | byte equality observed |
| version.test | 10 | 0.000999s | 0.001024s | 0.000995s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43638391827).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
