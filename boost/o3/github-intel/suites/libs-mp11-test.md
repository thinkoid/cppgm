# libs/mp11/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| mp11.test | COMPILE | 0.041247 | 0.084427 | 0.120945 | — | — | — |
| complex_h.test | COMPILE | 0.170631 | 0.358099 | 0.474793 | — | — | — |
| mp_size.test | RUN | 0.198798 | 1.177594 | 0.661871 | 0.001676 | 0.001587 | 0.001471 |
| mp_size_2.test | RUN | 0.016835 | 0.042174 | 0.054508 | 0.000685 | 0.000742 | 0.001596 |
| mp_empty.test | RUN | 0.187925 | 0.743593 | 0.617790 | 0.001469 | 0.001696 | 0.001560 |
| mp_empty_2.test | RUN | 0.017694 | 0.042010 | 0.059237 | 0.000646 | 0.000546 | 0.001395 |
| mp_assign.test | RUN | 0.218918 | 1.535459 | 0.812411 | 0.001460 | 0.001804 | 0.001470 |
| mp_assign_2.test | RUN | 0.017213 | 0.041997 | 0.058990 | 0.000617 | 0.000723 | 0.001496 |
| mp_clear.test | RUN | 0.184647 | 0.660365 | 0.589011 | 0.001594 | 0.001598 | 0.001625 |
| mp_clear_2.test | RUN | 0.017814 | 0.041033 | 0.059011 | 0.000599 | 0.000557 | 0.001584 |
| mp_front.test | RUN | 0.201710 | 1.051935 | 0.697002 | 0.001753 | 0.001636 | 0.001724 |
| mp_front_2.test | RUN | 0.016248 | 0.041447 | 0.057923 | 0.000560 | 0.000671 | 0.001548 |
| mp_pop_front.test | RUN | 0.193240 | 1.107585 | 0.726363 | 0.001480 | 0.001636 | 0.001530 |
| mp_pop_front_2.test | RUN | 0.017266 | 0.041180 | 0.057980 | 0.000618 | 0.000763 | 0.001628 |
| mp_second.test | RUN | 0.198972 | 0.677412 | 0.683538 | 0.001433 | 0.001602 | 0.001522 |
| mp_second_2.test | RUN | 0.017717 | 0.042004 | 0.056704 | 0.000623 | 0.000654 | 0.001618 |
| mp_third.test | RUN | 0.183217 | 0.643281 | 0.614534 | 0.001630 | 0.001675 | 0.001697 |
| mp_third_2.test | RUN | 0.017767 | 0.040818 | 0.058834 | 0.000594 | 0.000632 | 0.001346 |
| mp_push_front.test | RUN | 0.255105 | 2.371031 | 1.133500 | 0.001320 | 0.001643 | 0.001538 |
| mp_push_front_2.test | RUN | 0.016330 | 0.039843 | 0.054624 | 0.000612 | 0.000678 | 0.001581 |
| mp_push_back.test | RUN | 0.261618 | 2.352616 | 1.158468 | 0.001160 | 0.001579 | 0.001514 |
| mp_push_back_2.test | RUN | 0.017132 | 0.042624 | 0.056025 | 0.000667 | 0.000757 | 0.001608 |
| mp_rename.test | RUN | 0.234673 | 2.148824 | 0.999275 | 0.001558 | 0.001537 | 0.001380 |
| mp_rename_2.test | RUN | 0.015950 | 0.041137 | 0.057803 | 0.000682 | 0.000744 | 0.001585 |
| mp_append.test | RUN | 0.255160 | 2.470506 | 1.062662 | 0.001560 | 0.001672 | 0.001565 |
| mp_append_2.test | RUN | 0.589166 | 5.528113 | 1.457325 | 0.001501 | 0.001614 | 0.001683 |
| mp_append_3.test | RUN | 0.015854 | 0.040970 | 0.060065 | 0.000654 | 0.000668 | 0.001530 |
| mp_append_sf.test | RUN | 0.181012 | 0.590161 | 0.594787 | 0.001468 | 0.001579 | 0.001530 |
| mp_replace_front.test | RUN | 0.230292 | 1.745642 | 0.852852 | 0.001592 | 0.001456 | 0.001506 |
| mp_replace_front_2.test | RUN | 0.017317 | 0.041345 | 0.057496 | 0.000600 | 0.000673 | 0.001614 |
| mp_replace_second.test | RUN | 0.217764 | 1.108883 | 0.805170 | 0.001588 | 0.001630 | 0.001560 |
| mp_replace_second_2.test | RUN | 0.016373 | 0.041578 | 0.058141 | 0.000633 | 0.000733 | 0.001610 |
| mp_replace_third.test | RUN | 0.213529 | 0.917559 | 0.719892 | 0.001515 | 0.001385 | 0.001692 |
| mp_replace_third_2.test | RUN | 0.017512 | 0.041109 | 0.055959 | 0.000653 | 0.000617 | 0.001603 |
| mp_apply_q.test | RUN | 0.242557 | 2.151121 | 0.977220 | 0.001445 | 0.001518 | 0.001479 |
| mp_apply_q_sf.test | RUN | 0.178741 | 0.605245 | 0.600035 | 0.001583 | 0.001622 | 0.001480 |
| mp_is_list.test | RUN | 0.193228 | 0.732540 | 0.607218 | 0.001521 | 0.001651 | 0.001326 |
| mp_list_c.test | RUN | 0.201261 | 0.871809 | 0.707554 | 0.001597 | 0.001634 | 0.001608 |
| mp_transform_front.test | RUN | 0.221720 | 1.737740 | 0.848342 | 0.001480 | 0.001661 | 0.001504 |
| mp_transform_front_2.test | RUN | 0.018890 | 0.041151 | 0.056425 | 0.000682 | 0.000629 | 0.001682 |
| mp_transform_second.test | RUN | 0.213226 | 1.492814 | 0.767486 | 0.001668 | 0.001716 | 0.001544 |
| mp_transform_second_2.test | RUN | 0.017265 | 0.041269 | 0.056023 | 0.000702 | 0.000736 | 0.001500 |
| mp_transform_third.test | RUN | 0.199981 | 1.118693 | 0.705127 | 0.001627 | 0.001623 | 0.001550 |
| mp_transform_third_2.test | RUN | 0.018154 | 0.041809 | 0.055121 | 0.000615 | 0.000672 | 0.001337 |
| mp_list_v.test | RUN | 0.017315 | 0.042604 | 0.057486 | 0.000630 | 0.000597 | 0.001429 |
| mp_rename_v.test | RUN | 0.016197 | 0.041367 | 0.053846 | 0.000604 | 0.000698 | 0.001413 |
| mp_is_value_list.test | RUN | 0.177400 | 0.439227 | 0.566393 | 0.001516 | 0.001591 | 0.001451 |
| mp_transform.test | RUN | 0.477195 | 3.673113 | 1.808573 | 0.001580 | 0.001641 | 0.001623 |
| mp_transform_2.test | RUN | 0.173612 | 0.394088 | 0.525886 | 0.001498 | 0.001640 | 0.001602 |
| mp_transform_q.test | RUN | 0.456614 | 3.493177 | 1.765056 | 0.001539 | 0.001563 | 0.001572 |
| mp_transform_q_2.test | RUN | 0.460016 | 1.090466 | 2.282418 | 0.001573 | 0.001371 | 0.001660 |
| mp_transform_sf.test | RUN | 0.198268 | 0.624267 | 0.627668 | 0.001519 | 0.001661 | 0.001574 |
| mp_transform_if.test | RUN | 0.241581 | 1.741199 | 0.920364 | 0.001596 | 0.001202 | 0.001629 |
| mp_transform_if_q.test | RUN | 0.245777 | 1.736885 | 0.963374 | 0.001280 | 0.001419 | 0.001458 |
| mp_filter.test | RUN | 0.218135 | 1.020625 | 0.701095 | 0.001442 | 0.001721 | 0.001546 |
| mp_fill.test | RUN | 0.209391 | 0.770888 | 0.671724 | 0.001615 | 0.001690 | 0.001624 |
| mp_fill_2.test | RUN | 0.031059 | 0.064439 | 0.090661 | 0.000695 | 0.000564 | 0.001616 |
| mp_count.test | RUN | 0.378415 | 1.847347 | 1.084200 | 0.001668 | 0.001578 | 0.001537 |
| mp_count_if.test | RUN | 0.408548 | 1.897858 | 1.164248 | 0.001426 | 0.001501 | 0.001395 |
| mp_count_if_q.test | RUN | 0.211746 | 1.245110 | 0.684661 | 0.001397 | 0.001498 | 0.001637 |
| mp_contains.test | RUN | 0.191361 | 0.741805 | 0.617725 | 0.001534 | 0.001571 | 0.001411 |
| mp_starts_with.test | RUN | 0.199108 | 0.744518 | 0.660593 | 0.001456 | 0.001586 | 0.001531 |
| mp_starts_with_sf.test | RUN | 0.192075 | 0.631649 | 0.634211 | 0.001577 | 0.001483 | 0.001494 |
| mp_repeat.test | RUN | 0.297386 | 3.156420 | 1.210293 | 0.001731 | 0.001365 | 0.001570 |
| mp_repeat_2.test | RUN | 0.030804 | 0.062783 | 0.093961 | 0.000657 | 0.000713 | 0.001652 |
| mp_repeat_3.test | RUN | 0.248207 | 0.404613 | 0.594638 | 0.001507 | 0.001667 | 0.001642 |
| mp_product.test | RUN | 0.234842 | 1.883962 | 0.861104 | 0.001722 | 0.001705 | 0.001561 |
| mp_drop.test | RUN | 0.245549 | 2.352378 | 1.023693 | 0.001501 | 0.001574 | 0.001566 |
| mp_drop_2.test | RUN | 0.031738 | 0.067189 | 0.094051 | 0.000678 | 0.000787 | 0.001623 |
| mp_iota.test | RUN | 0.238445 | 1.996612 | 0.895869 | 0.001569 | 0.001711 | 0.001599 |
| mp_iota_2.test | RUN | 0.267283 | 2.395723 | 1.018416 | 0.001591 | 0.001780 | 0.001464 |
| mp_at.test | RUN | 0.214297 | 1.034427 | 0.728596 | 0.001411 | 0.001601 | 0.001777 |
| mp_at_2.test | RUN | 0.030421 | 0.063182 | 0.095521 | 0.000647 | 0.000708 | 0.001498 |
| mp_at_sf.test | RUN | 0.194064 | 0.628012 | 0.628036 | 0.001471 | 0.001682 | 0.001667 |
| mp_take.test | RUN | 0.347951 | 3.090357 | 1.237133 | 0.001595 | 0.001624 | 0.001643 |
| mp_take_2.test | RUN | 0.030226 | 0.065145 | 0.089708 | 0.000622 | 0.000644 | 0.001501 |
| mp_slice.test | RUN | 0.403126 | 3.159232 | 1.550607 | 0.001404 | 0.001586 | 0.001644 |
| mp_slice_2.test | RUN | 0.031366 | 0.066328 | 0.096504 | 0.000669 | 0.000685 | 0.001513 |
| mp_replace.test | RUN | 0.248242 | 1.565127 | 0.992801 | 0.001545 | 0.001588 | 0.001579 |
| mp_replace_if.test | RUN | 0.235397 | 1.392373 | 0.912214 | 0.001710 | 0.001651 | 0.001324 |
| mp_replace_if_q.test | RUN | 0.239591 | 1.399078 | 0.914829 | 0.001748 | 0.001728 | 0.001716 |
| mp_copy_if.test | RUN | 0.239791 | 1.938289 | 0.872578 | 0.001326 | 0.001643 | 0.001568 |
| mp_copy_if_q.test | RUN | 0.243093 | 1.949329 | 0.879807 | 0.001495 | 0.001644 | 0.001510 |
| mp_remove.test | RUN | 0.232756 | 1.308785 | 0.891155 | 0.001564 | 0.001692 | 0.001503 |
| mp_remove_if.test | RUN | 0.248884 | 2.057611 | 0.930981 | 0.001694 | 0.001668 | 0.001584 |
| mp_remove_if_q.test | RUN | 0.245926 | 2.064136 | 0.926305 | 0.001530 | 0.001528 | 0.001518 |
| mp_partition.test | RUN | 0.248573 | 1.926521 | 0.999427 | 0.001502 | 0.001424 | 0.001496 |
| mp_partition_q.test | RUN | 0.251571 | 1.945204 | 1.004504 | 0.001454 | 0.001722 | 0.001502 |
| mp_sort.test | RUN | 0.230369 | 1.395088 | 0.860725 | 0.001574 | 0.001658 | 0.001618 |
| mp_sort_q.test | RUN | 0.227619 | 1.384712 | 0.863748 | 0.001736 | 0.001733 | 0.001611 |
| mp_find.test | RUN | 0.221323 | 1.484584 | 0.752051 | 0.001565 | 0.001526 | 0.001436 |
| mp_find_if.test | RUN | 0.220947 | 1.370219 | 0.701962 | 0.001857 | 0.001735 | 0.001294 |
| mp_find_if_q.test | RUN | 0.239654 | 1.525177 | 0.866677 | 0.001650 | 0.001726 | 0.001554 |
| mp_reverse.test | RUN | 0.525909 | 4.120992 | 1.741426 | 0.001493 | 0.001696 | 0.001585 |
| mp_fold.test | RUN | 0.863639 | 3.139273 | 4.423329 | 0.001592 | 0.001646 | 0.001632 |
| mp_fold_q.test | RUN | 0.223137 | 1.399223 | 0.823414 | 0.001503 | 0.001511 | 0.001631 |
| mp_fold_q_sf.test | RUN | 0.198961 | 0.626566 | 0.626290 | 0.001478 | 0.001832 | 0.001601 |
| mp_reverse_fold.test | RUN | 0.405582 | 3.060477 | 1.223727 | 0.001690 | 0.001692 | 0.001568 |
| mp_reverse_fold_q.test | RUN | 0.231509 | 1.676945 | 0.895682 | 0.001729 | 0.001671 | 0.001599 |
| mp_unique.test | RUN | 0.228910 | 1.534012 | 0.852522 | 0.001654 | 0.001728 | 0.001564 |
| mp_unique_if.test | RUN | 0.417485 | 3.167000 | 1.375785 | 0.001620 | 0.001597 | 0.001700 |
| mp_unique_if_q.test | RUN | 0.363386 | 3.118024 | 1.139772 | 0.001353 | 0.001764 | 0.001633 |
| mp_all_of.test | RUN | 0.546207 | 1.702684 | 1.471408 | 0.001712 | 0.001594 | 0.001528 |
| mp_all_of_q.test | RUN | 0.199243 | 0.740670 | 0.619518 | 0.001436 | 0.001864 | 0.001577 |
| mp_any_of.test | RUN | 0.527549 | 1.744721 | 1.441105 | 0.001520 | 0.001660 | 0.001456 |
| mp_any_of_q.test | RUN | 0.195355 | 0.744130 | 0.598174 | 0.001676 | 0.001745 | 0.001633 |
| mp_none_of.test | RUN | 0.545160 | 1.768704 | 1.464743 | 0.001439 | 0.001688 | 0.001641 |
| mp_none_of_q.test | RUN | 0.192434 | 0.754368 | 0.636364 | 0.001593 | 0.001780 | 0.001583 |
| mp_replace_at.test | RUN | 0.244674 | 1.534019 | 0.977306 | 0.001724 | 0.001686 | 0.001604 |
| mp_replace_at_c.test | RUN | 0.246820 | 1.504897 | 0.966177 | 0.001611 | 0.001623 | 0.001567 |
| mp_for_each.test | RUN | 0.226990 | 1.029540 | 0.998918 | 0.001520 | 0.001554 | 0.001171 |
| mp_insert.test | RUN | 0.380984 | 3.124481 | 1.403539 | 0.001660 | 0.001462 | 0.001650 |
| mp_insert_2.test | RUN | 0.030497 | 0.064438 | 0.088599 | 0.000650 | 0.000630 | 0.001386 |
| mp_erase.test | RUN | 0.422816 | 3.308396 | 1.674735 | 0.001721 | 0.001630 | 0.001533 |
| mp_erase_2.test | RUN | 0.030309 | 0.064629 | 0.094232 | 0.000693 | 0.000685 | 0.001502 |
| mp_with_index.test | RUN | 0.546822 | 6.596199 | 3.592242 | 0.002177 | 0.002172 | 0.001887 |
| mp_with_index_cx.test | RUN | 0.003448 | 0.019752 | 0.027117 | 0.000691 | 0.000795 | 0.001531 |
| mp_from_sequence.test | RUN | 0.239034 | 1.729726 | 0.919649 | 0.001557 | 0.001663 | 0.001569 |
| mp_from_sequence_2.test | RUN | 0.262033 | 2.046663 | 1.023000 | 0.001536 | 0.001610 | 0.001488 |
| mp_from_sequence_3.test | RUN | 0.209839 | 0.902890 | 0.713821 | 0.001501 | 0.001620 | 0.001488 |
| mp_min_element.test | RUN | 0.201062 | 0.813055 | 0.657003 | 0.001468 | 0.001618 | 0.001457 |
| mp_min_element_2.test | RUN | 0.030558 | 0.065840 | 0.096062 | 0.000612 | 0.000711 | 0.001577 |
| mp_min_element_q.test | RUN | 0.202105 | 0.812096 | 0.651890 | 0.001574 | 0.001716 | 0.001508 |
| mp_min_element_q_2.test | RUN | 0.031444 | 0.063084 | 0.096030 | 0.000577 | 0.000582 | 0.001545 |
| mp_max_element.test | RUN | 0.207475 | 0.809555 | 0.651489 | 0.001766 | 0.001604 | 0.001671 |
| mp_max_element_2.test | RUN | 0.031023 | 0.065398 | 0.094983 | 0.000630 | 0.000671 | 0.001355 |
| mp_max_element_q.test | RUN | 0.200013 | 0.806144 | 0.667589 | 0.001487 | 0.001871 | 0.001632 |
| mp_max_element_q_2.test | RUN | 0.030102 | 0.063661 | 0.089662 | 0.000614 | 0.000691 | 0.001597 |
| mp_nth_element.test | RUN | 0.225979 | 1.148847 | 0.816698 | 0.001400 | 0.001755 | 0.001522 |
| mp_nth_element_q.test | RUN | 0.224467 | 1.133677 | 0.821661 | 0.001510 | 0.001643 | 0.001618 |
| mp_back.test | RUN | 0.219863 | 0.942492 | 0.782839 | 0.001548 | 0.001464 | 0.001379 |
| mp_back_2.test | RUN | 0.030739 | 0.063799 | 0.095582 | 0.000690 | 0.000709 | 0.001503 |
| mp_pop_back.test | RUN | 0.651224 | 6.364581 | 1.642792 | 0.001508 | 0.001579 | 0.001647 |
| mp_pop_back_2.test | RUN | 0.030840 | 0.064232 | 0.093791 | 0.000638 | 0.000649 | 0.001512 |
| mp_flatten.test | RUN | 0.258482 | 2.236859 | 1.106463 | 0.001506 | 0.001689 | 0.001567 |
| mp_rotate_left.test | RUN | 0.260605 | 2.407614 | 1.088645 | 0.001454 | 0.001738 | 0.001425 |
| mp_rotate_right.test | RUN | 0.262001 | 2.433779 | 1.098972 | 0.001572 | 0.001644 | 0.001538 |
| mp_power_set.test | RUN | 0.260742 | 2.288367 | 1.091288 | 0.001595 | 0.001647 | 0.001581 |
| mp_partial_sum.test | RUN | 0.356176 | 3.096016 | 1.259826 | 0.001720 | 0.001696 | 0.001641 |
| mp_iterate.test | RUN | 0.234577 | 0.905386 | 0.862368 | 0.001429 | 0.001769 | 0.001430 |
| mp_pairwise_fold.test | RUN | 0.261081 | 2.108276 | 1.120586 | 0.001514 | 0.001453 | 0.001611 |
| mp_pairwise_fold_q.test | RUN | 0.194920 | 0.604252 | 0.612202 | 0.001639 | 0.001644 | 0.001692 |
| mp_sliding_fold.test | RUN | 0.521651 | 4.101461 | 2.097264 | 0.001642 | 0.001669 | 0.001423 |
| mp_sliding_fold_q.test | RUN | 0.529576 | 4.128995 | 2.080674 | 0.001649 | 0.001466 | 0.001467 |
| mp_intersperse.test | RUN | 0.246038 | 1.512905 | 0.967069 | 0.001671 | 0.001676 | 0.001534 |
| mp_split.test | RUN | 0.363068 | 2.922743 | 1.360967 | 0.001512 | 0.001686 | 0.001619 |
| mp_join.test | RUN | 0.277210 | 2.444715 | 1.197433 | 0.001512 | 0.001536 | 0.001568 |
| integral.test | RUN | 0.212131 | 1.085335 | 0.717183 | 0.001540 | 0.001674 | 0.001514 |
| mp_value.test | RUN | 0.013787 | 0.034206 | 0.046711 | 0.000634 | 0.000571 | 0.001527 |
| mp_identity.test | RUN | 0.199941 | 0.990139 | 0.690654 | 0.001578 | 0.001660 | 0.001544 |
| mp_inherit.test | RUN | 0.186767 | 0.703626 | 0.612741 | 0.001648 | 0.001664 | 0.001636 |
| mp_if.test | RUN | 0.192201 | 0.798975 | 0.626494 | 0.001476 | 0.001455 | 0.001573 |
| mp_if_sf.test | RUN | 0.185053 | 0.597560 | 0.564216 | 0.001593 | 0.001597 | 0.001583 |
| mp_eval_if.test | RUN | 0.196560 | 0.860574 | 0.637801 | 0.001512 | 0.001592 | 0.001518 |
| mp_eval_if_sf.test | RUN | 0.182334 | 0.603334 | 0.594027 | 0.001570 | 0.001338 | 0.001520 |
| mp_valid.test | RUN | 0.190450 | 0.619174 | 0.595796 | 0.001518 | 0.001739 | 0.001750 |
| mp_defer.test | RUN | 0.205151 | 1.037498 | 0.715931 | 0.001573 | 0.001696 | 0.001577 |
| mp_quote.test | RUN | 0.205301 | 1.042501 | 0.741431 | 0.001513 | 0.001708 | 0.001551 |
| mp_invoke_q.test | RUN | 0.222080 | 1.359076 | 0.824697 | 0.001504 | 0.001656 | 0.001523 |
| mp_invoke_q_sf.test | RUN | 0.181826 | 0.598358 | 0.595478 | 0.001424 | 0.001787 | 0.001608 |
| mp_quote_trait.test | RUN | 0.201854 | 1.161750 | 0.712023 | 0.001698 | 0.001484 | 0.001829 |
| mp_cond.test | RUN | 0.186538 | 0.703654 | 0.621101 | 0.001410 | 0.001546 | 0.001610 |
| mp_cond_sf.test | RUN | 0.184867 | 0.597784 | 0.595840 | 0.001561 | 0.001648 | 0.001482 |
| mp_not_fn.test | RUN | 0.183711 | 0.597647 | 0.593776 | 0.001460 | 0.001680 | 0.001429 |
| mp_eval_if_not.test | RUN | 0.195942 | 0.853480 | 0.660357 | 0.001798 | 0.001613 | 0.001602 |
| mp_eval_or.test | RUN | 0.180521 | 0.463471 | 0.613299 | 0.001548 | 0.001584 | 0.001727 |
| mp_compose.test | RUN | 0.210521 | 1.413447 | 0.798928 | 0.001358 | 0.001523 | 0.001437 |
| mp_valid_and_true.test | RUN | 0.193168 | 0.723089 | 0.629403 | 0.001382 | 0.001570 | 0.001715 |
| mp_compose_sf.test | COMPILE | 0.043648 | 0.079929 | 0.129718 | — | — | — |
| integer_sequence.test | RUN | 0.229314 | 1.417706 | 0.898630 | 0.001590 | 0.001670 | 0.001528 |
| tuple_for_each.test | RUN | 0.180559 | 0.521297 | 0.642429 | 0.001452 | 0.001688 | 0.001670 |
| tuple_for_each_cx.test | COMPILE | 0.033637 | 0.074218 | 0.105017 | — | — | — |
| tuple_apply.test | RUN | 0.183092 | 0.500552 | 0.635591 | 0.001564 | 0.001614 | 0.001564 |
| tuple_apply_cx.test | COMPILE | 0.050757 | 0.105737 | 0.147389 | — | — | — |
| construct_from_tuple.test | RUN | 0.192979 | 0.548660 | 0.633588 | 0.001548 | 0.001547 | 0.001669 |
| construct_from_tuple_cx.test | COMPILE | 0.052281 | 0.101602 | 0.141102 | — | — | — |
| tuple_transform.test | RUN | 0.303691 | 1.104000 | 1.224328 | 0.001751 | 0.001770 | 0.001529 |
| tuple_transform_2.test | RUN | 0.258130 | 0.799530 | 1.123405 | 0.001665 | 0.001678 | 0.001630 |
| tuple_transform_cx.test | COMPILE | 0.044439 | 0.101045 | 0.143116 | — | — | — |
| mp_set_contains.test | RUN | 0.202089 | 0.743102 | 0.628656 | 0.001494 | 0.001586 | 0.001472 |
| mp_set_push_back.test | RUN | 0.247588 | 2.292873 | 1.092835 | 0.001684 | 0.001632 | 0.001576 |
| mp_set_push_front.test | RUN | 0.346174 | 2.754340 | 1.275746 | 0.001628 | 0.001774 | 0.001464 |
| mp_is_set.test | RUN | 0.191519 | 0.736530 | 0.652848 | 0.001535 | 0.001674 | 0.001682 |
| mp_set_union.test | RUN | 0.247680 | 1.947925 | 1.048600 | 0.001450 | 0.001666 | 0.001397 |
| mp_set_union_sf.test | RUN | 0.186932 | 0.583212 | 0.602631 | 0.001769 | 0.001492 | 0.001728 |
| mp_set_difference.test | RUN | 0.231674 | 1.523765 | 0.875651 | 0.001605 | 0.001555 | 0.001622 |
| mp_set_difference_sf.test | RUN | 0.189048 | 0.589590 | 0.598006 | 0.001632 | 0.001574 | 0.001633 |
| mp_set_intersection.test | RUN | 0.224544 | 1.521116 | 0.854325 | 0.001472 | 0.001771 | 0.001592 |
| mp_set_intersection_sf.test | RUN | 0.186763 | 0.590696 | 0.600076 | 0.001478 | 0.001702 | 0.001493 |
| mp_all.test | RUN | 0.196907 | 0.731555 | 0.645074 | 0.001457 | 0.001675 | 0.001524 |
| mp_all_2.test | RUN | 0.551675 | 1.572986 | 1.474635 | 0.001590 | 0.001576 | 0.001609 |
| mp_and.test | RUN | 0.189995 | 0.737592 | 0.641166 | 0.001603 | 0.001746 | 0.001636 |
| mp_any.test | RUN | 0.194737 | 0.745060 | 0.615786 | 0.001573 | 0.001799 | 0.001482 |
| mp_any_2.test | RUN | 0.556319 | 1.566709 | 1.461977 | 0.001418 | 0.001730 | 0.001540 |
| mp_or.test | RUN | 0.193624 | 0.740453 | 0.623868 | 0.001616 | 0.001697 | 0.001586 |
| mp_same.test | RUN | 0.362396 | 1.249618 | 0.991687 | 0.001618 | 0.001547 | 0.001502 |
| mp_plus.test | RUN | 0.207948 | 0.881635 | 0.692631 | 0.001554 | 0.001568 | 0.001591 |
| mp_less.test | RUN | 0.193261 | 0.729159 | 0.596412 | 0.001600 | 0.001571 | 0.001460 |
| mp_min.test | RUN | 0.189094 | 0.667304 | 0.611381 | 0.001640 | 0.001736 | 0.001508 |
| mp_max.test | RUN | 0.192630 | 0.749077 | 0.638417 | 0.001618 | 0.001670 | 0.001471 |
| mp_similar.test | RUN | 0.191073 | 0.728432 | 0.636357 | 0.001476 | 0.001758 | 0.001512 |
| mp_map_find.test | RUN | 0.227830 | 1.360598 | 0.831767 | 0.001759 | 0.001734 | 0.001576 |
| mp_map_find_2.test | RUN | 0.211946 | 0.510906 | 0.709569 | 0.001684 | 0.001560 | 0.001648 |
| mp_map_find_3.test | RUN | 0.211522 | 0.513720 | 0.695042 | 0.001533 | 0.001598 | 0.001598 |
| mp_map_find_4.test | RUN | 0.195889 | 0.481122 | 0.649031 | 0.001515 | 0.001536 | 0.001692 |
| mp_map_contains.test | RUN | 0.202825 | 0.748665 | 0.632570 | 0.001737 | 0.001735 | 0.001622 |
| mp_map_insert.test | RUN | 0.274156 | 2.553973 | 1.209480 | 0.001782 | 0.001672 | 0.001490 |
| mp_map_replace.test | RUN | 0.373824 | 2.914287 | 1.403183 | 0.001636 | 0.001725 | 0.001512 |
| mp_map_erase.test | RUN | 0.265394 | 2.161671 | 1.151041 | 0.001598 | 0.001803 | 0.001423 |
| mp_map_update.test | RUN | 0.232362 | 1.391332 | 0.892429 | 0.001576 | 0.001608 | 0.001592 |
| mp_map_update_q.test | RUN | 0.228877 | 1.399246 | 0.872495 | 0.001464 | 0.001845 | 0.001353 |
| mp_map_keys.test | RUN | 0.224068 | 1.240446 | 0.859935 | 0.001686 | 0.001707 | 0.001606 |
| mp_is_map.test | RUN | 0.209147 | 0.753153 | 0.674808 | 0.001488 | 0.001644 | 0.001500 |
| mp_bind.test | RUN | 0.261582 | 2.291779 | 1.033715 | 0.001695 | 0.001540 | 0.001557 |
| mp_bind_q.test | RUN | 0.225510 | 1.412566 | 0.837512 | 0.001579 | 0.001728 | 0.001501 |
| mp_bind_front.test | RUN | 0.222213 | 1.536795 | 0.787277 | 0.001610 | 0.001618 | 0.001575 |
| mp_bind_back.test | RUN | 0.218968 | 1.531268 | 0.819385 | 0.001495 | 0.001551 | 0.001638 |
| mp_lambda.test | RUN | 0.533399 | 4.532846 | 2.156372 | 0.001610 | 0.001168 | 0.001488 |
| mpl.test | RUN | 0.454084 | 1.174005 | 1.725646 | 0.001626 | 0.001583 | 0.001491 |
| mpl_list.test | RUN | 0.252065 | 0.904406 | 0.782311 | 0.001670 | 0.001502 | 0.001545 |
| mpl_tuple.test | RUN | 0.252693 | 0.909967 | 0.789905 | 0.001468 | 0.001458 | 0.001696 |
| version.test | RUN | 0.124294 | 0.319838 | 0.398754 | 0.001475 | 0.001588 | 0.001560 |
| mp11_version.test | RUN | 0.150533 | 0.375718 | 0.463186 | 0.001448 | 0.001298 | 0.001497 |
| list_version.test | RUN | 0.127437 | 0.328619 | 0.406679 | 0.001395 | 0.001483 | 0.001590 |
| algorithm_version.test | RUN | 0.146256 | 0.349466 | 0.430508 | 0.001632 | 0.001645 | 0.001762 |
| integral_version.test | RUN | 0.124005 | 0.323674 | 0.390101 | 0.001692 | 0.001493 | 0.001375 |
| utility_version.test | RUN | 0.125796 | 0.325211 | 0.392779 | 0.001460 | 0.001377 | 0.001473 |
| function_version.test | RUN | 0.129396 | 0.332515 | 0.405741 | 0.001414 | 0.001546 | 0.001612 |
| map_version.test | RUN | 0.145030 | 0.350136 | 0.433727 | 0.001638 | 0.001454 | 0.001766 |
| set_version.test | RUN | 0.129310 | 0.334560 | 0.412965 | 0.001515 | 0.001503 | 0.001541 |
| bind_version.test | RUN | 0.141573 | 0.352517 | 0.438868 | 0.001658 | 0.001692 | 0.001593 |
| integer_sequence_version.test | RUN | 0.122668 | 0.322870 | 0.389038 | 0.001594 | 0.001714 | 0.001116 |
| tuple_version.test | RUN | 0.143362 | 0.352884 | 0.273354 | 0.001241 | 0.001689 | 0.001108 |
| mpl_version.test | RUN | 0.097031 | 0.244100 | 0.425231 | 0.001210 | 0.001144 | 0.001173 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.999× | 0.999×, 0.999× | 1.006× |
| clang | 1.088× | 1.090×, 1.085× | 0.997× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1361 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44260407509).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| algorithm_version.test | 10 | 0.000978s | 0.000979s | 0.000984s | byte equality observed |
| bind_version.test | 10 | 0.000970s | 0.000981s | 0.000990s | byte equality observed |
| construct_from_tuple.test | 10 | 0.000975s | 0.000977s | 0.000981s | byte equality observed |
| function_version.test | 10 | 0.000974s | 0.000969s | 0.000988s | byte equality observed |
| integer_sequence.test | 10 | 0.000975s | 0.000982s | 0.001042s | byte equality observed |
| integer_sequence_version.test | 10 | 0.000968s | 0.000987s | 0.001068s | byte equality observed |
| integral.test | 10 | 0.000980s | 0.000987s | 0.001078s | byte equality observed |
| integral_version.test | 10 | 0.000982s | 0.000964s | 0.001038s | byte equality observed |
| list_version.test | 10 | 0.000973s | 0.000951s | 0.001027s | byte equality observed |
| map_version.test | 10 | 0.000979s | 0.000953s | 0.001042s | byte equality observed |
| mp11_version.test | 10 | 0.000972s | 0.000950s | 0.001033s | byte equality observed |
| mp_all.test | 10 | 0.000975s | 0.000968s | 0.001036s | byte equality observed |
| mp_all_2.test | 10 | 0.000987s | 0.000984s | 0.001026s | byte equality observed |
| mp_all_of.test | 10 | 0.001007s | 0.000980s | 0.001093s | byte equality observed |
| mp_all_of_q.test | 10 | 0.000994s | 0.000982s | 0.001060s | byte equality observed |
| mp_and.test | 10 | 0.000968s | 0.000982s | 0.001030s | byte equality observed |
| mp_any.test | 10 | 0.000983s | 0.000995s | 0.001036s | byte equality observed |
| mp_any_2.test | 10 | 0.001019s | 0.000981s | 0.001047s | byte equality observed |
| mp_any_of.test | 10 | 0.001019s | 0.000988s | 0.001026s | byte equality observed |
| mp_any_of_q.test | 10 | 0.001035s | 0.000991s | 0.001051s | byte equality observed |
| mp_append.test | 10 | 0.001031s | 0.000993s | 0.001037s | byte equality observed |
| mp_append_2.test | 10 | 0.001080s | 0.001014s | 0.001038s | byte equality observed |
| mp_append_3.test | 10 | 0.000479s | 0.000453s | 0.001009s | byte equality observed |
| mp_append_sf.test | 10 | 0.001048s | 0.001004s | 0.001044s | byte equality observed |
| mp_apply_q.test | 10 | 0.001044s | 0.001039s | 0.001089s | byte equality observed |
| mp_apply_q_sf.test | 10 | 0.001074s | 0.001051s | 0.001077s | byte equality observed |
| mp_assign.test | 10 | 0.001039s | 0.001046s | 0.001081s | byte equality observed |
| mp_assign_2.test | 10 | 0.000468s | 0.000483s | 0.001020s | byte equality observed |
| mp_at.test | 10 | 0.001042s | 0.001053s | 0.000998s | byte equality observed |
| mp_at_2.test | 10 | 0.000468s | 0.000462s | 0.001039s | byte equality observed |
| mp_at_sf.test | 10 | 0.001062s | 0.001072s | 0.001055s | byte equality observed |
| mp_back.test | 10 | 0.001049s | 0.001067s | 0.001061s | byte equality observed |
| mp_back_2.test | 10 | 0.000460s | 0.000459s | 0.001015s | byte equality observed |
| mp_bind.test | 10 | 0.001055s | 0.001042s | 0.001043s | byte equality observed |
| mp_bind_back.test | 10 | 0.001064s | 0.001059s | 0.001065s | byte equality observed |
| mp_bind_front.test | 10 | 0.001028s | 0.001046s | 0.001020s | byte equality observed |
| mp_bind_q.test | 10 | 0.001053s | 0.001066s | 0.001035s | byte equality observed |
| mp_clear.test | 10 | 0.001047s | 0.001044s | 0.001029s | byte equality observed |
| mp_clear_2.test | 10 | 0.000463s | 0.000479s | 0.001010s | byte equality observed |
| mp_compose.test | 10 | 0.001043s | 0.001054s | 0.001047s | byte equality observed |
| mp_cond.test | 10 | 0.001025s | 0.001092s | 0.001029s | byte equality observed |
| mp_cond_sf.test | 10 | 0.001059s | 0.001055s | 0.001053s | byte equality observed |
| mp_contains.test | 10 | 0.001041s | 0.001066s | 0.001054s | byte equality observed |
| mp_copy_if.test | 10 | 0.001061s | 0.001072s | 0.001018s | byte equality observed |
| mp_copy_if_q.test | 10 | 0.001033s | 0.001038s | 0.001046s | byte equality observed |
| mp_count.test | 10 | 0.001052s | 0.001077s | 0.001021s | byte equality observed |
| mp_count_if.test | 10 | 0.001049s | 0.001032s | 0.001024s | byte equality observed |
| mp_count_if_q.test | 10 | 0.001019s | 0.001025s | 0.001059s | byte equality observed |
| mp_defer.test | 10 | 0.001045s | 0.001042s | 0.001038s | byte equality observed |
| mp_drop.test | 10 | 0.001036s | 0.001061s | 0.001042s | byte equality observed |
| mp_drop_2.test | 10 | 0.000473s | 0.000470s | 0.001024s | byte equality observed |
| mp_empty.test | 10 | 0.001068s | 0.001047s | 0.001043s | byte equality observed |
| mp_empty_2.test | 10 | 0.000465s | 0.000467s | 0.001008s | byte equality observed |
| mp_erase.test | 10 | 0.001067s | 0.001066s | 0.001017s | byte equality observed |
| mp_erase_2.test | 10 | 0.000467s | 0.000476s | 0.001031s | byte equality observed |
| mp_eval_if.test | 10 | 0.001037s | 0.001071s | 0.001047s | byte equality observed |
| mp_eval_if_not.test | 10 | 0.001036s | 0.001058s | 0.001034s | byte equality observed |
| mp_eval_if_sf.test | 10 | 0.001043s | 0.001050s | 0.001052s | byte equality observed |
| mp_eval_or.test | 10 | 0.001052s | 0.001037s | 0.001024s | byte equality observed |
| mp_fill.test | 10 | 0.001035s | 0.001067s | 0.001018s | byte equality observed |
| mp_fill_2.test | 10 | 0.000471s | 0.000485s | 0.001015s | byte equality observed |
| mp_filter.test | 10 | 0.001053s | 0.001061s | 0.001049s | byte equality observed |
| mp_find.test | 10 | 0.001073s | 0.001063s | 0.001001s | byte equality observed |
| mp_find_if.test | 10 | 0.001035s | 0.001056s | 0.001005s | byte equality observed |
| mp_find_if_q.test | 10 | 0.001037s | 0.001079s | 0.001038s | byte equality observed |
| mp_flatten.test | 10 | 0.001051s | 0.001060s | 0.001032s | byte equality observed |
| mp_fold.test | 10 | 0.001075s | 0.001075s | 0.001053s | byte equality observed |
| mp_fold_q.test | 10 | 0.001047s | 0.001040s | 0.001038s | byte equality observed |
| mp_fold_q_sf.test | 10 | 0.001034s | 0.001074s | 0.001053s | byte equality observed |
| mp_for_each.test | 10 | 0.001034s | 0.001034s | 0.001041s | byte equality observed |
| mp_from_sequence.test | 10 | 0.001023s | 0.001086s | 0.001050s | byte equality observed |
| mp_from_sequence_2.test | 10 | 0.001045s | 0.001117s | 0.001016s | byte equality observed |
| mp_from_sequence_3.test | 10 | 0.001035s | 0.001049s | 0.001023s | byte equality observed |
| mp_front.test | 10 | 0.001043s | 0.001045s | 0.001035s | byte equality observed |
| mp_front_2.test | 10 | 0.000458s | 0.000474s | 0.001030s | byte equality observed |
| mp_identity.test | 10 | 0.001011s | 0.001062s | 0.001026s | byte equality observed |
| mp_if.test | 10 | 0.001038s | 0.001051s | 0.001093s | byte equality observed |
| mp_if_sf.test | 10 | 0.001028s | 0.001036s | 0.001063s | byte equality observed |
| mp_inherit.test | 10 | 0.001028s | 0.001045s | 0.001037s | byte equality observed |
| mp_insert.test | 10 | 0.001056s | 0.001047s | 0.001033s | byte equality observed |
| mp_insert_2.test | 10 | 0.000466s | 0.000475s | 0.000997s | byte equality observed |
| mp_intersperse.test | 10 | 0.001036s | 0.001048s | 0.001017s | byte equality observed |
| mp_invoke_q.test | 10 | 0.001062s | 0.001051s | 0.001035s | byte equality observed |
| mp_invoke_q_sf.test | 10 | 0.001040s | 0.001046s | 0.001046s | byte equality observed |
| mp_iota.test | 10 | 0.001044s | 0.001061s | 0.001034s | byte equality observed |
| mp_iota_2.test | 10 | 0.001045s | 0.001028s | 0.001053s | byte equality observed |
| mp_is_list.test | 10 | 0.001047s | 0.001059s | 0.001046s | byte equality observed |
| mp_is_map.test | 10 | 0.001046s | 0.001044s | 0.001019s | byte equality observed |
| mp_is_set.test | 10 | 0.001069s | 0.001053s | 0.001037s | byte equality observed |
| mp_is_value_list.test | 10 | 0.001059s | 0.001054s | 0.001041s | byte equality observed |
| mp_iterate.test | 10 | 0.001061s | 0.001069s | 0.001055s | byte equality observed |
| mp_join.test | 10 | 0.001072s | 0.001062s | 0.001033s | byte equality observed |
| mp_lambda.test | 10 | 0.001066s | 0.001116s | 0.001049s | byte equality observed |
| mp_less.test | 10 | 0.001089s | 0.001082s | 0.001051s | byte equality observed |
| mp_list_c.test | 10 | 0.001038s | 0.001056s | 0.000993s | byte equality observed |
| mp_list_v.test | 10 | 0.000467s | 0.000461s | 0.001034s | byte equality observed |
| mp_map_contains.test | 10 | 0.001010s | 0.001083s | 0.001038s | byte equality observed |
| mp_map_erase.test | 10 | 0.001046s | 0.001050s | 0.001018s | byte equality observed |
| mp_map_find.test | 10 | 0.001056s | 0.001057s | 0.001042s | byte equality observed |
| mp_map_find_2.test | 10 | 0.001011s | 0.000994s | 0.001060s | byte equality observed |
| mp_map_find_3.test | 10 | 0.001033s | 0.001008s | 0.001053s | byte equality observed |
| mp_map_find_4.test | 10 | 0.001026s | 0.001031s | 0.001037s | byte equality observed |
| mp_map_insert.test | 10 | 0.001064s | 0.001070s | 0.001019s | byte equality observed |
| mp_map_keys.test | 10 | 0.001040s | 0.001084s | 0.001010s | byte equality observed |
| mp_map_replace.test | 10 | 0.001053s | 0.001032s | 0.001030s | byte equality observed |
| mp_map_update.test | 10 | 0.001037s | 0.001061s | 0.001009s | byte equality observed |
| mp_map_update_q.test | 10 | 0.001006s | 0.001058s | 0.001025s | byte equality observed |
| mp_max.test | 10 | 0.001057s | 0.001046s | 0.001020s | byte equality observed |
| mp_max_element.test | 10 | 0.001041s | 0.001039s | 0.001034s | byte equality observed |
| mp_max_element_2.test | 10 | 0.000468s | 0.000470s | 0.001014s | byte equality observed |
| mp_max_element_q.test | 10 | 0.001047s | 0.001058s | 0.001032s | byte equality observed |
| mp_max_element_q_2.test | 10 | 0.000477s | 0.000465s | 0.001015s | byte equality observed |
| mp_min.test | 10 | 0.001036s | 0.001013s | 0.001010s | byte equality observed |
| mp_min_element.test | 10 | 0.001027s | 0.001051s | 0.001075s | byte equality observed |
| mp_min_element_2.test | 10 | 0.000467s | 0.000466s | 0.001015s | byte equality observed |
| mp_min_element_q.test | 10 | 0.001042s | 0.001036s | 0.001018s | byte equality observed |
| mp_min_element_q_2.test | 10 | 0.000471s | 0.000447s | 0.000997s | byte equality observed |
| mp_none_of.test | 10 | 0.001039s | 0.001019s | 0.001013s | byte equality observed |
| mp_none_of_q.test | 10 | 0.001036s | 0.001063s | 0.001000s | byte equality observed |
| mp_not_fn.test | 10 | 0.001066s | 0.001007s | 0.001006s | byte equality observed |
| mp_nth_element.test | 10 | 0.001025s | 0.001084s | 0.001003s | byte equality observed |
| mp_nth_element_q.test | 10 | 0.001024s | 0.001048s | 0.001029s | byte equality observed |
| mp_or.test | 10 | 0.001070s | 0.001025s | 0.001058s | byte equality observed |
| mp_pairwise_fold.test | 10 | 0.001044s | 0.001050s | 0.001049s | byte equality observed |
| mp_pairwise_fold_q.test | 10 | 0.001051s | 0.001043s | 0.001012s | byte equality observed |
| mp_partial_sum.test | 10 | 0.001045s | 0.001032s | 0.001031s | byte equality observed |
| mp_partition.test | 10 | 0.001076s | 0.001047s | 0.001063s | byte equality observed |
| mp_partition_q.test | 10 | 0.001040s | 0.001041s | 0.001019s | byte equality observed |
| mp_plus.test | 10 | 0.001068s | 0.001079s | 0.001029s | byte equality observed |
| mp_pop_back.test | 10 | 0.001071s | 0.001068s | 0.001006s | byte equality observed |
| mp_pop_back_2.test | 10 | 0.000465s | 0.000467s | 0.000997s | byte equality observed |
| mp_pop_front.test | 10 | 0.001048s | 0.001024s | 0.001014s | byte equality observed |
| mp_pop_front_2.test | 10 | 0.000460s | 0.000460s | 0.001022s | byte equality observed |
| mp_power_set.test | 10 | 0.001039s | 0.001068s | 0.001015s | byte equality observed |
| mp_product.test | 10 | 0.001033s | 0.001081s | 0.001070s | byte equality observed |
| mp_push_back.test | 10 | 0.001033s | 0.001033s | 0.001008s | byte equality observed |
| mp_push_back_2.test | 10 | 0.000461s | 0.000477s | 0.001028s | byte equality observed |
| mp_push_front.test | 10 | 0.001032s | 0.001029s | 0.001070s | byte equality observed |
| mp_push_front_2.test | 10 | 0.000470s | 0.000483s | 0.001079s | byte equality observed |
| mp_quote.test | 10 | 0.001054s | 0.001035s | 0.001089s | byte equality observed |
| mp_quote_trait.test | 10 | 0.001035s | 0.001039s | 0.001059s | byte equality observed |
| mp_remove.test | 10 | 0.001016s | 0.001051s | 0.001068s | byte equality observed |
| mp_remove_if.test | 10 | 0.001037s | 0.001004s | 0.001038s | byte equality observed |
| mp_remove_if_q.test | 10 | 0.001029s | 0.001033s | 0.001035s | byte equality observed |
| mp_rename.test | 10 | 0.001053s | 0.001038s | 0.001079s | byte equality observed |
| mp_rename_2.test | 10 | 0.000469s | 0.000472s | 0.000972s | byte equality observed |
| mp_rename_v.test | 10 | 0.000468s | 0.000470s | 0.000970s | byte equality observed |
| mp_repeat.test | 10 | 0.001048s | 0.001045s | 0.001047s | byte equality observed |
| mp_repeat_2.test | 10 | 0.000464s | 0.000470s | 0.000999s | byte equality observed |
| mp_repeat_3.test | 10 | 0.001066s | 0.001032s | 0.001033s | byte equality observed |
| mp_replace.test | 10 | 0.001023s | 0.001059s | 0.001002s | byte equality observed |
| mp_replace_at.test | 10 | 0.001032s | 0.001014s | 0.001077s | byte equality observed |
| mp_replace_at_c.test | 10 | 0.001023s | 0.001030s | 0.001040s | byte equality observed |
| mp_replace_front.test | 10 | 0.001054s | 0.001059s | 0.001026s | byte equality observed |
| mp_replace_front_2.test | 10 | 0.000461s | 0.000457s | 0.001024s | byte equality observed |
| mp_replace_if.test | 10 | 0.001030s | 0.001046s | 0.001039s | byte equality observed |
| mp_replace_if_q.test | 10 | 0.001028s | 0.001083s | 0.001001s | byte equality observed |
| mp_replace_second.test | 10 | 0.001046s | 0.001070s | 0.001004s | byte equality observed |
| mp_replace_second_2.test | 10 | 0.000460s | 0.000478s | 0.001015s | byte equality observed |
| mp_replace_third.test | 10 | 0.001069s | 0.001036s | 0.001019s | byte equality observed |
| mp_replace_third_2.test | 10 | 0.000470s | 0.000462s | 0.000980s | byte equality observed |
| mp_reverse.test | 10 | 0.001057s | 0.001054s | 0.001044s | byte equality observed |
| mp_reverse_fold.test | 10 | 0.001044s | 0.001049s | 0.001049s | byte equality observed |
| mp_reverse_fold_q.test | 10 | 0.001022s | 0.001094s | 0.001077s | byte equality observed |
| mp_rotate_left.test | 10 | 0.001020s | 0.001048s | 0.001036s | byte equality observed |
| mp_rotate_right.test | 10 | 0.001011s | 0.001101s | 0.001041s | byte equality observed |
| mp_same.test | 10 | 0.001045s | 0.001059s | 0.001030s | byte equality observed |
| mp_second.test | 10 | 0.001046s | 0.001048s | 0.001035s | byte equality observed |
| mp_second_2.test | 10 | 0.000470s | 0.000449s | 0.000997s | byte equality observed |
| mp_set_contains.test | 10 | 0.001046s | 0.001031s | 0.001030s | byte equality observed |
| mp_set_difference.test | 10 | 0.001028s | 0.001011s | 0.000996s | byte equality observed |
| mp_set_difference_sf.test | 10 | 0.001033s | 0.001048s | 0.001016s | byte equality observed |
| mp_set_intersection.test | 10 | 0.001063s | 0.001027s | 0.001005s | byte equality observed |
| mp_set_intersection_sf.test | 10 | 0.001065s | 0.001012s | 0.001033s | byte equality observed |
| mp_set_push_back.test | 10 | 0.001030s | 0.001035s | 0.001013s | byte equality observed |
| mp_set_push_front.test | 10 | 0.001051s | 0.001050s | 0.001015s | byte equality observed |
| mp_set_union.test | 10 | 0.001056s | 0.001069s | 0.001052s | byte equality observed |
| mp_set_union_sf.test | 10 | 0.001013s | 0.001046s | 0.001015s | byte equality observed |
| mp_similar.test | 10 | 0.001046s | 0.001041s | 0.001047s | byte equality observed |
| mp_size.test | 10 | 0.001031s | 0.001059s | 0.001010s | byte equality observed |
| mp_size_2.test | 10 | 0.000467s | 0.000457s | 0.000977s | byte equality observed |
| mp_slice.test | 10 | 0.001065s | 0.001085s | 0.001025s | byte equality observed |
| mp_slice_2.test | 10 | 0.000472s | 0.000460s | 0.000988s | byte equality observed |
| mp_sliding_fold.test | 10 | 0.001061s | 0.001042s | 0.001026s | byte equality observed |
| mp_sliding_fold_q.test | 10 | 0.001081s | 0.001038s | 0.001046s | byte equality observed |
| mp_sort.test | 10 | 0.001032s | 0.001034s | 0.001019s | byte equality observed |
| mp_sort_q.test | 10 | 0.001062s | 0.001031s | 0.001079s | byte equality observed |
| mp_split.test | 10 | 0.001061s | 0.001033s | 0.001018s | byte equality observed |
| mp_starts_with.test | 10 | 0.001065s | 0.001025s | 0.001037s | byte equality observed |
| mp_starts_with_sf.test | 10 | 0.001071s | 0.001025s | 0.001042s | byte equality observed |
| mp_take.test | 10 | 0.001065s | 0.001105s | 0.001017s | byte equality observed |
| mp_take_2.test | 10 | 0.000484s | 0.000470s | 0.001040s | byte equality observed |
| mp_third.test | 10 | 0.001016s | 0.001035s | 0.001030s | byte equality observed |
| mp_third_2.test | 10 | 0.000465s | 0.000468s | 0.000996s | byte equality observed |
| mp_transform.test | 10 | 0.001070s | 0.001036s | 0.001023s | byte equality observed |
| mp_transform_2.test | 10 | 0.001007s | 0.000973s | 0.000999s | byte equality observed |
| mp_transform_front.test | 10 | 0.001034s | 0.001039s | 0.001018s | byte equality observed |
| mp_transform_front_2.test | 10 | 0.000465s | 0.000454s | 0.001014s | byte equality observed |
| mp_transform_if.test | 10 | 0.001051s | 0.001022s | 0.000993s | byte equality observed |
| mp_transform_if_q.test | 10 | 0.001050s | 0.001060s | 0.001041s | byte equality observed |
| mp_transform_q.test | 10 | 0.001082s | 0.001032s | 0.001052s | byte equality observed |
| mp_transform_q_2.test | 10 | 0.001047s | 0.001037s | 0.001058s | byte equality observed |
| mp_transform_second.test | 10 | 0.001045s | 0.001048s | 0.001028s | byte equality observed |
| mp_transform_second_2.test | 10 | 0.000465s | 0.000463s | 0.001025s | byte equality observed |
| mp_transform_sf.test | 10 | 0.001045s | 0.001071s | 0.001012s | byte equality observed |
| mp_transform_third.test | 10 | 0.001038s | 0.001023s | 0.001025s | byte equality observed |
| mp_transform_third_2.test | 10 | 0.000465s | 0.000457s | 0.000985s | byte equality observed |
| mp_unique.test | 10 | 0.001015s | 0.001065s | 0.001047s | byte equality observed |
| mp_unique_if.test | 10 | 0.001054s | 0.001096s | 0.000981s | byte equality observed |
| mp_unique_if_q.test | 10 | 0.001054s | 0.001061s | 0.001061s | byte equality observed |
| mp_valid.test | 10 | 0.001019s | 0.001052s | 0.001018s | byte equality observed |
| mp_valid_and_true.test | 10 | 0.001024s | 0.001017s | 0.001030s | byte equality observed |
| mp_value.test | 10 | 0.000459s | 0.000458s | 0.000985s | byte equality observed |
| mp_with_index.test | 10 | 0.001440s | 0.001380s | 0.001285s | byte equality observed |
| mp_with_index_cx.test | 10 | 0.000450s | 0.000458s | 0.001005s | byte equality observed |
| mpl.test | 10 | 0.001028s | 0.000996s | 0.001007s | byte equality observed |
| mpl_list.test | 10 | 0.001044s | 0.001029s | 0.001085s | byte equality observed |
| mpl_tuple.test | 10 | 0.001027s | 0.001023s | 0.001068s | byte equality observed |
| mpl_version.test | 10 | 0.001045s | 0.001027s | 0.001086s | byte equality observed |
| set_version.test | 10 | 0.001059s | 0.001060s | 0.001050s | byte equality observed |
| tuple_apply.test | 10 | 0.001050s | 0.001011s | 0.001082s | byte equality observed |
| tuple_for_each.test | 10 | 0.001047s | 0.001022s | 0.001031s | byte equality observed |
| tuple_transform.test | 10 | 0.001023s | 0.001016s | 0.001040s | byte equality observed |
| tuple_transform_2.test | 10 | 0.001054s | 0.001010s | 0.001019s | byte equality observed |
| tuple_version.test | 10 | 0.001030s | 0.001035s | 0.001011s | byte equality observed |
| utility_version.test | 10 | 0.001015s | 0.001058s | 0.001038s | byte equality observed |
| version.test | 10 | 0.001026s | 0.001017s | 0.001054s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44260407509).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
