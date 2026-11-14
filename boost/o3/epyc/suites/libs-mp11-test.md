# libs/mp11/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| mp11.test | COMPILE | 0.033115 | 0.056318 | 0.082006 | — | — | — |
| complex_h.test | COMPILE | 0.132855 | 0.232892 | 0.324770 | — | — | — |
| mp_size.test | RUN | 0.152781 | 0.769583 | 0.415144 | 0.001565 | 0.001656 | 0.001554 |
| mp_size_2.test | RUN | 0.013786 | 0.028672 | 0.041225 | 0.000757 | 0.000611 | 0.001546 |
| mp_empty.test | RUN | 0.139936 | 0.462978 | 0.427018 | 0.001569 | 0.001647 | 0.001456 |
| mp_empty_2.test | RUN | 0.013962 | 0.026810 | 0.046065 | 0.000612 | 0.000662 | 0.001565 |
| mp_assign.test | RUN | 0.163201 | 1.002760 | 0.582983 | 0.001271 | 0.001596 | 0.001681 |
| mp_assign_2.test | RUN | 0.011753 | 0.030063 | 0.042653 | 0.000602 | 0.000725 | 0.001582 |
| mp_clear.test | RUN | 0.142081 | 0.445801 | 0.455081 | 0.001440 | 0.001396 | 0.001702 |
| mp_clear_2.test | RUN | 0.013294 | 0.030185 | 0.059980 | 0.000625 | 0.000537 | 0.001591 |
| mp_front.test | RUN | 0.152125 | 0.674456 | 0.503392 | 0.001597 | 0.001573 | 0.001694 |
| mp_front_2.test | RUN | 0.013561 | 0.027901 | 0.042497 | 0.000626 | 0.000690 | 0.001494 |
| mp_pop_front.test | RUN | 0.154206 | 0.695384 | 0.480586 | 0.001623 | 0.001489 | 0.001451 |
| mp_pop_front_2.test | RUN | 0.014323 | 0.028740 | 0.044559 | 0.000616 | 0.000615 | 0.001401 |
| mp_second.test | RUN | 0.154787 | 0.438282 | 0.452668 | 0.001616 | 0.001391 | 0.001712 |
| mp_second_2.test | RUN | 0.014168 | 0.030215 | 0.044627 | 0.000779 | 0.000688 | 0.001670 |
| mp_third.test | RUN | 0.150409 | 0.415787 | 0.402058 | 0.001668 | 0.001515 | 0.001466 |
| mp_third_2.test | RUN | 0.013397 | 0.030111 | 0.045068 | 0.000703 | 0.000644 | 0.001443 |
| mp_push_front.test | RUN | 0.182957 | 1.477968 | 0.785848 | 0.001465 | 0.001517 | 0.001605 |
| mp_push_front_2.test | RUN | 0.013356 | 0.028963 | 0.042217 | 0.000589 | 0.000709 | 0.001481 |
| mp_push_back.test | RUN | 0.181666 | 1.486393 | 0.772085 | 0.001730 | 0.001501 | 0.001712 |
| mp_push_back_2.test | RUN | 0.013021 | 0.028494 | 0.043438 | 0.000595 | 0.000720 | 0.001624 |
| mp_rename.test | RUN | 0.180654 | 1.342422 | 0.625071 | 0.001809 | 0.001588 | 0.001673 |
| mp_rename_2.test | RUN | 0.014119 | 0.030298 | 0.045003 | 0.000701 | 0.000654 | 0.001693 |
| mp_append.test | RUN | 0.187123 | 1.545093 | 0.706539 | 0.001509 | 0.001590 | 0.001658 |
| mp_append_2.test | RUN | 0.364623 | 3.455100 | 0.929873 | 0.001808 | 0.001685 | 0.001510 |
| mp_append_3.test | RUN | 0.012822 | 0.029822 | 0.044475 | 0.000600 | 0.000729 | 0.001736 |
| mp_append_sf.test | RUN | 0.146170 | 0.371665 | 0.393560 | 0.001604 | 0.001414 | 0.001726 |
| mp_replace_front.test | RUN | 0.163936 | 1.084183 | 0.560129 | 0.001561 | 0.001457 | 0.001578 |
| mp_replace_front_2.test | RUN | 0.013767 | 0.028351 | 0.046933 | 0.000711 | 0.000684 | 0.001670 |
| mp_replace_second.test | RUN | 0.159124 | 0.697416 | 0.540060 | 0.001600 | 0.001338 | 0.001670 |
| mp_replace_second_2.test | RUN | 0.013544 | 0.030229 | 0.041994 | 0.000678 | 0.000619 | 0.001298 |
| mp_replace_third.test | RUN | 0.157922 | 0.572223 | 0.483241 | 0.001730 | 0.001662 | 0.001742 |
| mp_replace_third_2.test | RUN | 0.013548 | 0.029903 | 0.044176 | 0.000717 | 0.000605 | 0.001555 |
| mp_apply_q.test | RUN | 0.175534 | 1.364501 | 0.619355 | 0.001473 | 0.001497 | 0.001628 |
| mp_apply_q_sf.test | RUN | 0.145225 | 0.402072 | 0.407699 | 0.001756 | 0.001641 | 0.001419 |
| mp_is_list.test | RUN | 0.146569 | 0.470959 | 0.413905 | 0.001462 | 0.001647 | 0.001600 |
| mp_list_c.test | RUN | 0.151805 | 0.568821 | 0.438535 | 0.001509 | 0.001632 | 0.001550 |
| mp_transform_front.test | RUN | 0.161012 | 1.108619 | 0.542066 | 0.001588 | 0.001503 | 0.001532 |
| mp_transform_front_2.test | RUN | 0.013715 | 0.027921 | 0.041456 | 0.000624 | 0.000699 | 0.001670 |
| mp_transform_second.test | RUN | 0.153363 | 0.954332 | 0.510905 | 0.001592 | 0.001558 | 0.001708 |
| mp_transform_second_2.test | RUN | 0.011319 | 0.029042 | 0.047174 | 0.000720 | 0.000693 | 0.001708 |
| mp_transform_third.test | RUN | 0.150924 | 0.725494 | 0.471137 | 0.001564 | 0.001566 | 0.001672 |
| mp_transform_third_2.test | RUN | 0.013275 | 0.028488 | 0.043899 | 0.000585 | 0.000525 | 0.001389 |
| mp_list_v.test | RUN | 0.013477 | 0.028944 | 0.044145 | 0.000754 | 0.000618 | 0.001599 |
| mp_rename_v.test | RUN | 0.013294 | 0.028512 | 0.043298 | 0.000579 | 0.000483 | 0.001348 |
| mp_is_value_list.test | RUN | 0.132211 | 0.287787 | 0.391485 | 0.001642 | 0.001696 | 0.001468 |
| mp_transform.test | RUN | 0.286306 | 2.361761 | 1.254714 | 0.001854 | 0.001682 | 0.001638 |
| mp_transform_2.test | RUN | 0.133494 | 0.257521 | 0.339362 | 0.001492 | 0.001704 | 0.001744 |
| mp_transform_q.test | RUN | 0.290225 | 2.234751 | 1.202018 | 0.001363 | 0.001542 | 0.001493 |
| mp_transform_q_2.test | RUN | 0.320455 | 0.725321 | 1.534177 | 0.001618 | 0.001530 | 0.001504 |
| mp_transform_sf.test | RUN | 0.144932 | 0.409632 | 0.420800 | 0.001784 | 0.001730 | 0.001710 |
| mp_transform_if.test | RUN | 0.170705 | 1.122191 | 0.618253 | 0.001616 | 0.001600 | 0.001707 |
| mp_transform_if_q.test | RUN | 0.178481 | 1.147090 | 0.633877 | 0.001515 | 0.001702 | 0.001740 |
| mp_filter.test | RUN | 0.154797 | 0.687845 | 0.459618 | 0.001919 | 0.001430 | 0.001209 |
| mp_fill.test | RUN | 0.149485 | 0.530826 | 0.445316 | 0.001482 | 0.001703 | 0.001700 |
| mp_fill_2.test | RUN | 0.023374 | 0.045524 | 0.066283 | 0.000723 | 0.000674 | 0.001648 |
| mp_count.test | RUN | 0.304445 | 1.209194 | 0.720428 | 0.001601 | 0.001565 | 0.001566 |
| mp_count_if.test | RUN | 0.311100 | 1.201386 | 0.803854 | 0.001722 | 0.001449 | 0.001416 |
| mp_count_if_q.test | RUN | 0.152682 | 0.776619 | 0.448169 | 0.001710 | 0.001839 | 0.001436 |
| mp_contains.test | RUN | 0.156345 | 0.462137 | 0.429585 | 0.001522 | 0.001586 | 0.001634 |
| mp_starts_with.test | RUN | 0.145225 | 0.493110 | 0.452794 | 0.001573 | 0.001756 | 0.001629 |
| mp_starts_with_sf.test | RUN | 0.140112 | 0.416735 | 0.437956 | 0.001345 | 0.001536 | 0.001475 |
| mp_repeat.test | RUN | 0.200173 | 2.010805 | 0.813839 | 0.001808 | 0.001570 | 0.001515 |
| mp_repeat_2.test | RUN | 0.023262 | 0.044476 | 0.070264 | 0.000623 | 0.000696 | 0.001581 |
| mp_repeat_3.test | RUN | 0.181328 | 0.258028 | 0.422958 | 0.001427 | 0.001806 | 0.001466 |
| mp_product.test | RUN | 0.168695 | 1.218913 | 0.620513 | 0.001612 | 0.001711 | 0.001514 |
| mp_drop.test | RUN | 0.174763 | 1.519796 | 0.692293 | 0.001206 | 0.001538 | 0.001603 |
| mp_drop_2.test | RUN | 0.023601 | 0.047571 | 0.067399 | 0.000738 | 0.000753 | 0.001739 |
| mp_iota.test | RUN | 0.175469 | 1.283026 | 0.616243 | 0.001725 | 0.001505 | 0.001351 |
| mp_iota_2.test | RUN | 0.188417 | 1.554483 | 0.695202 | 0.001613 | 0.001650 | 0.001388 |
| mp_at.test | RUN | 0.155098 | 0.681447 | 0.497172 | 0.001456 | 0.001582 | 0.001738 |
| mp_at_2.test | RUN | 0.022905 | 0.044984 | 0.070667 | 0.000649 | 0.000657 | 0.001746 |
| mp_at_sf.test | RUN | 0.145299 | 0.426436 | 0.424071 | 0.001712 | 0.001667 | 0.001391 |
| mp_take.test | RUN | 0.231524 | 2.032055 | 0.801586 | 0.001589 | 0.001747 | 0.001830 |
| mp_take_2.test | RUN | 0.022813 | 0.046119 | 0.070804 | 0.000742 | 0.000670 | 0.001569 |
| mp_slice.test | RUN | 0.262667 | 2.064549 | 1.092588 | 0.001755 | 0.001686 | 0.001535 |
| mp_slice_2.test | RUN | 0.021895 | 0.045827 | 0.068400 | 0.000618 | 0.000729 | 0.001679 |
| mp_replace.test | RUN | 0.178221 | 1.063383 | 0.690991 | 0.001643 | 0.001453 | 0.001720 |
| mp_replace_if.test | RUN | 0.163698 | 0.951111 | 0.633141 | 0.001411 | 0.001800 | 0.001722 |
| mp_replace_if_q.test | RUN | 0.164379 | 0.903406 | 0.622519 | 0.001469 | 0.001778 | 0.001671 |
| mp_copy_if.test | RUN | 0.172772 | 1.248375 | 0.572537 | 0.001811 | 0.001356 | 0.001769 |
| mp_copy_if_q.test | RUN | 0.170560 | 1.236027 | 0.576143 | 0.001620 | 0.001668 | 0.001674 |
| mp_remove.test | RUN | 0.166521 | 0.846778 | 0.589982 | 0.001735 | 0.001805 | 0.001648 |
| mp_remove_if.test | RUN | 0.179457 | 1.346336 | 0.613002 | 0.001511 | 0.001731 | 0.001736 |
| mp_remove_if_q.test | RUN | 0.173311 | 1.360134 | 0.620907 | 0.001822 | 0.001680 | 0.001672 |
| mp_partition.test | RUN | 0.172896 | 1.265409 | 0.671051 | 0.001630 | 0.001649 | 0.001631 |
| mp_partition_q.test | RUN | 0.174089 | 1.262953 | 0.670588 | 0.001630 | 0.001643 | 0.001464 |
| mp_sort.test | RUN | 0.167561 | 0.898411 | 0.585541 | 0.001454 | 0.001684 | 0.001737 |
| mp_sort_q.test | RUN | 0.203866 | 0.876569 | 0.571001 | 0.001713 | 0.001796 | 0.001762 |
| mp_find.test | RUN | 0.194174 | 0.945628 | 0.493481 | 0.001502 | 0.001686 | 0.001658 |
| mp_find_if.test | RUN | 0.150204 | 0.865499 | 0.462038 | 0.001652 | 0.001438 | 0.001226 |
| mp_find_if_q.test | RUN | 0.162389 | 0.980168 | 0.580400 | 0.001562 | 0.001673 | 0.001732 |
| mp_reverse.test | RUN | 0.315208 | 2.633406 | 1.180760 | 0.001639 | 0.001782 | 0.001737 |
| mp_fold.test | RUN | 0.530570 | 2.067372 | 3.104744 | 0.001555 | 0.001805 | 0.001528 |
| mp_fold_q.test | RUN | 0.153296 | 0.881423 | 0.541582 | 0.001484 | 0.001592 | 0.001763 |
| mp_fold_q_sf.test | RUN | 0.142207 | 0.400044 | 0.421942 | 0.001333 | 0.001792 | 0.001794 |
| mp_reverse_fold.test | RUN | 0.257605 | 1.958440 | 0.804470 | 0.001411 | 0.001726 | 0.001391 |
| mp_reverse_fold_q.test | RUN | 0.161216 | 1.085712 | 0.603694 | 0.001608 | 0.001668 | 0.001610 |
| mp_unique.test | RUN | 0.155031 | 0.981333 | 0.578252 | 0.001575 | 0.001768 | 0.001762 |
| mp_unique_if.test | RUN | 0.275382 | 2.078608 | 0.965148 | 0.001632 | 0.001902 | 0.001752 |
| mp_unique_if_q.test | RUN | 0.235276 | 2.006940 | 0.738025 | 0.001414 | 0.001612 | 0.001378 |
| mp_all_of.test | RUN | 0.372579 | 1.125731 | 0.978057 | 0.001777 | 0.001742 | 0.001720 |
| mp_all_of_q.test | RUN | 0.142060 | 0.503749 | 0.419278 | 0.001441 | 0.001803 | 0.001396 |
| mp_any_of.test | RUN | 0.375684 | 1.187244 | 0.955478 | 0.001485 | 0.001741 | 0.001679 |
| mp_any_of_q.test | RUN | 0.141842 | 0.503264 | 0.436471 | 0.001830 | 0.001773 | 0.001706 |
| mp_none_of.test | RUN | 0.380928 | 1.172025 | 0.957344 | 0.001511 | 0.001832 | 0.001684 |
| mp_none_of_q.test | RUN | 0.143831 | 0.488049 | 0.434425 | 0.001506 | 0.001592 | 0.001698 |
| mp_replace_at.test | RUN | 0.175517 | 1.014825 | 0.656648 | 0.001735 | 0.001471 | 0.001670 |
| mp_replace_at_c.test | RUN | 0.171535 | 1.005102 | 0.635922 | 0.001594 | 0.001765 | 0.001689 |
| mp_for_each.test | RUN | 0.167573 | 0.697918 | 0.708261 | 0.001251 | 0.001416 | 0.001728 |
| mp_insert.test | RUN | 0.267875 | 2.004687 | 0.956443 | 0.001713 | 0.001686 | 0.001751 |
| mp_insert_2.test | RUN | 0.028480 | 0.043936 | 0.065736 | 0.000497 | 0.000731 | 0.001475 |
| mp_erase.test | RUN | 0.254008 | 2.102086 | 1.114743 | 0.001542 | 0.001783 | 0.001699 |
| mp_erase_2.test | RUN | 0.022342 | 0.045647 | 0.070417 | 0.000542 | 0.000744 | 0.001646 |
| mp_with_index.test | RUN | 0.314652 | 4.261161 | 2.428998 | 0.001957 | 0.002156 | 0.001828 |
| mp_with_index_cx.test | RUN | 0.002911 | 0.015633 | 0.024015 | 0.000701 | 0.000678 | 0.001670 |
| mp_from_sequence.test | RUN | 0.164373 | 1.101321 | 0.651124 | 0.001440 | 0.001680 | 0.003334 |
| mp_from_sequence_2.test | RUN | 0.179487 | 1.321557 | 0.724737 | 0.001600 | 0.001659 | 0.001764 |
| mp_from_sequence_3.test | RUN | 0.143155 | 0.576381 | 0.491592 | 0.001551 | 0.001470 | 0.001708 |
| mp_min_element.test | RUN | 0.146749 | 0.467936 | 0.441678 | 0.001353 | 0.001490 | 0.001764 |
| mp_min_element_2.test | RUN | 0.022066 | 0.043272 | 0.070743 | 0.000536 | 0.000662 | 0.001476 |
| mp_min_element_q.test | RUN | 0.146824 | 0.509722 | 0.462380 | 0.001643 | 0.001651 | 0.001297 |
| mp_min_element_q_2.test | RUN | 0.022379 | 0.045759 | 0.067937 | 0.000584 | 0.000622 | 0.001718 |
| mp_max_element.test | RUN | 0.147258 | 0.528211 | 0.422610 | 0.001818 | 0.001631 | 0.001445 |
| mp_max_element_2.test | RUN | 0.022803 | 0.045192 | 0.069339 | 0.000528 | 0.000655 | 0.001660 |
| mp_max_element_q.test | RUN | 0.145353 | 0.514480 | 0.450854 | 0.001484 | 0.001634 | 0.001718 |
| mp_max_element_q_2.test | RUN | 0.028159 | 0.044272 | 0.063104 | 0.000606 | 0.000685 | 0.001644 |
| mp_nth_element.test | RUN | 0.160335 | 0.724381 | 0.523752 | 0.001494 | 0.001514 | 0.001688 |
| mp_nth_element_q.test | RUN | 0.155224 | 0.712631 | 0.555212 | 0.001420 | 0.001553 | 0.001334 |
| mp_back.test | RUN | 0.150264 | 0.602596 | 0.533104 | 0.001504 | 0.001702 | 0.001746 |
| mp_back_2.test | RUN | 0.021957 | 0.039431 | 0.066459 | 0.000526 | 0.000551 | 0.001371 |
| mp_pop_back.test | RUN | 0.368320 | 4.072265 | 1.111057 | 0.001526 | 0.001396 | 0.001584 |
| mp_pop_back_2.test | RUN | 0.022297 | 0.044425 | 0.068032 | 0.000606 | 0.000611 | 0.001736 |
| mp_flatten.test | RUN | 0.178675 | 1.415382 | 0.740915 | 0.001486 | 0.001748 | 0.001748 |
| mp_rotate_left.test | RUN | 0.167989 | 1.556413 | 0.713577 | 0.001602 | 0.001710 | 0.001438 |
| mp_rotate_right.test | RUN | 0.171270 | 1.555933 | 0.723747 | 0.001440 | 0.001532 | 0.001696 |
| mp_power_set.test | RUN | 0.171631 | 1.447066 | 0.734894 | 0.001558 | 0.001622 | 0.001534 |
| mp_partial_sum.test | RUN | 0.220560 | 1.973558 | 0.833477 | 0.001336 | 0.001602 | 0.001455 |
| mp_iterate.test | RUN | 0.154421 | 0.599344 | 0.582752 | 0.001589 | 0.001653 | 0.001514 |
| mp_pairwise_fold.test | RUN | 0.173799 | 1.354141 | 0.754315 | 0.001404 | 0.001689 | 0.001654 |
| mp_pairwise_fold_q.test | RUN | 0.139783 | 0.394210 | 0.403404 | 0.001662 | 0.001761 | 0.001716 |
| mp_sliding_fold.test | RUN | 0.311394 | 2.608123 | 1.406179 | 0.001543 | 0.001672 | 0.001623 |
| mp_sliding_fold_q.test | RUN | 0.302578 | 2.597464 | 1.397590 | 0.001539 | 0.001480 | 0.001250 |
| mp_intersperse.test | RUN | 0.155700 | 0.961778 | 0.632093 | 0.001653 | 0.001625 | 0.001682 |
| mp_split.test | RUN | 0.214244 | 1.850090 | 0.892582 | 0.001301 | 0.001604 | 0.001590 |
| mp_join.test | RUN | 0.183764 | 1.555235 | 0.795397 | 0.001368 | 0.001642 | 0.001686 |
| integral.test | RUN | 0.145884 | 0.695503 | 0.495342 | 0.001447 | 0.001690 | 0.001600 |
| mp_value.test | RUN | 0.010424 | 0.025479 | 0.037526 | 0.000612 | 0.000687 | 0.001620 |
| mp_identity.test | RUN | 0.140233 | 0.638640 | 0.472372 | 0.001608 | 0.001726 | 0.001496 |
| mp_inherit.test | RUN | 0.130098 | 0.447818 | 0.439451 | 0.001505 | 0.001616 | 0.001730 |
| mp_if.test | RUN | 0.131021 | 0.519678 | 0.459144 | 0.001439 | 0.001349 | 0.001778 |
| mp_if_sf.test | RUN | 0.126778 | 0.376130 | 0.417842 | 0.001466 | 0.001698 | 0.001597 |
| mp_eval_if.test | RUN | 0.137353 | 0.551981 | 0.451568 | 0.001536 | 0.001612 | 0.001642 |
| mp_eval_if_sf.test | RUN | 0.126012 | 0.390152 | 0.384209 | 0.001344 | 0.001355 | 0.001662 |
| mp_valid.test | RUN | 0.132691 | 0.396377 | 0.387928 | 0.001407 | 0.001457 | 0.001701 |
| mp_defer.test | RUN | 0.140929 | 0.671623 | 0.483873 | 0.001465 | 0.001606 | 0.003196 |
| mp_quote.test | RUN | 0.139668 | 0.670078 | 0.502196 | 0.001470 | 0.001674 | 0.001796 |
| mp_invoke_q.test | RUN | 0.150438 | 0.862872 | 0.565155 | 0.001364 | 0.001621 | 0.001456 |
| mp_invoke_q_sf.test | RUN | 0.130401 | 0.387286 | 0.426362 | 0.001354 | 0.001660 | 0.001339 |
| mp_quote_trait.test | RUN | 0.140472 | 0.736906 | 0.488462 | 0.001497 | 0.001547 | 0.001758 |
| mp_cond.test | RUN | 0.134397 | 0.451370 | 0.423761 | 0.001462 | 0.001598 | 0.001562 |
| mp_cond_sf.test | RUN | 0.127459 | 0.391062 | 0.385628 | 0.001476 | 0.001626 | 0.001274 |
| mp_not_fn.test | RUN | 0.125230 | 0.385653 | 0.385302 | 0.001281 | 0.001669 | 0.001372 |
| mp_eval_if_not.test | RUN | 0.136848 | 0.555897 | 0.444252 | 0.001585 | 0.001477 | 0.001692 |
| mp_eval_or.test | RUN | 0.126152 | 0.293388 | 0.411388 | 0.001505 | 0.001705 | 0.001411 |
| mp_compose.test | RUN | 0.145817 | 0.936635 | 0.543697 | 0.001173 | 0.001368 | 0.001720 |
| mp_valid_and_true.test | RUN | 0.132188 | 0.483312 | 0.422866 | 0.001526 | 0.001692 | 0.001466 |
| mp_compose_sf.test | COMPILE | 0.031755 | 0.058695 | 0.092234 | — | — | — |
| integer_sequence.test | RUN | 0.151238 | 0.913947 | 0.613647 | 0.001452 | 0.001466 | 0.001316 |
| tuple_for_each.test | RUN | 0.127017 | 0.348266 | 0.441261 | 0.001410 | 0.001629 | 0.001415 |
| tuple_for_each_cx.test | COMPILE | 0.024080 | 0.051022 | 0.073630 | — | — | — |
| tuple_apply.test | RUN | 0.131346 | 0.327327 | 0.426047 | 0.001427 | 0.001672 | 0.001698 |
| tuple_apply_cx.test | COMPILE | 0.036164 | 0.068171 | 0.103499 | — | — | — |
| construct_from_tuple.test | RUN | 0.130973 | 0.355406 | 0.421812 | 0.001504 | 0.001554 | 0.001394 |
| construct_from_tuple_cx.test | COMPILE | 0.037146 | 0.069810 | 0.098565 | — | — | — |
| tuple_transform.test | RUN | 0.206422 | 0.703418 | 0.826663 | 0.001466 | 0.001638 | 0.001984 |
| tuple_transform_2.test | RUN | 0.180268 | 0.517574 | 0.742203 | 0.002002 | 0.001567 | 0.001780 |
| tuple_transform_cx.test | COMPILE | 0.031820 | 0.064518 | 0.091167 | — | — | — |
| mp_set_contains.test | RUN | 0.134943 | 0.470867 | 0.405390 | 0.001417 | 0.001399 | 0.001432 |
| mp_set_push_back.test | RUN | 0.204913 | 1.469838 | 0.702387 | 0.001672 | 0.001556 | 0.003074 |
| mp_set_push_front.test | RUN | 0.224483 | 1.761467 | 0.911966 | 0.001601 | 0.001540 | 0.001512 |
| mp_is_set.test | RUN | 0.135940 | 0.476417 | 0.517045 | 0.001592 | 0.001583 | 0.001649 |
| mp_set_union.test | RUN | 0.168956 | 1.239387 | 0.778558 | 0.001443 | 0.001698 | 0.001496 |
| mp_set_union_sf.test | RUN | 0.129452 | 0.379718 | 0.415849 | 0.001445 | 0.001878 | 0.001468 |
| mp_set_difference.test | RUN | 0.152696 | 0.976506 | 0.589473 | 0.001634 | 0.001637 | 0.001380 |
| mp_set_difference_sf.test | RUN | 0.130863 | 0.378252 | 0.403469 | 0.001470 | 0.001646 | 0.001487 |
| mp_set_intersection.test | RUN | 0.156556 | 0.966367 | 0.560771 | 0.001357 | 0.001634 | 0.001714 |
| mp_set_intersection_sf.test | RUN | 0.130114 | 0.374021 | 0.382005 | 0.001415 | 0.001473 | 0.001413 |
| mp_all.test | RUN | 0.131840 | 0.469940 | 0.430031 | 0.001912 | 0.001639 | 0.001587 |
| mp_all_2.test | RUN | 0.391545 | 0.997690 | 0.980276 | 0.001678 | 0.001688 | 0.001544 |
| mp_and.test | RUN | 0.133132 | 0.469967 | 0.415673 | 0.001712 | 0.001744 | 0.001564 |
| mp_any.test | RUN | 0.137954 | 0.481938 | 0.432184 | 0.001452 | 0.001781 | 0.001680 |
| mp_any_2.test | RUN | 0.375719 | 0.982944 | 0.958067 | 0.001602 | 0.001777 | 0.001446 |
| mp_or.test | RUN | 0.136030 | 0.483072 | 0.418036 | 0.001642 | 0.001586 | 0.001699 |
| mp_same.test | RUN | 0.256077 | 0.810125 | 0.662532 | 0.001474 | 0.001670 | 0.001768 |
| mp_plus.test | RUN | 0.139040 | 0.555926 | 0.485342 | 0.001456 | 0.001540 | 0.001515 |
| mp_less.test | RUN | 0.134030 | 0.474342 | 0.417736 | 0.001672 | 0.001411 | 0.001384 |
| mp_min.test | RUN | 0.129847 | 0.443034 | 0.418854 | 0.001556 | 0.001629 | 0.001460 |
| mp_max.test | RUN | 0.133652 | 0.471807 | 0.431825 | 0.001452 | 0.001475 | 0.001521 |
| mp_similar.test | RUN | 0.132225 | 0.468837 | 0.431284 | 0.001429 | 0.001564 | 0.001574 |
| mp_map_find.test | RUN | 0.152267 | 0.849239 | 0.567319 | 0.001566 | 0.001480 | 0.001712 |
| mp_map_find_2.test | RUN | 0.141496 | 0.337005 | 0.478885 | 0.001575 | 0.001520 | 0.001504 |
| mp_map_find_3.test | RUN | 0.138861 | 0.330808 | 0.481193 | 0.001393 | 0.001293 | 0.001366 |
| mp_map_find_4.test | RUN | 0.135484 | 0.318763 | 0.424352 | 0.001397 | 0.001518 | 0.001460 |
| mp_map_contains.test | RUN | 0.139850 | 0.483941 | 0.439927 | 0.001686 | 0.001700 | 0.001724 |
| mp_map_insert.test | RUN | 0.185964 | 1.631557 | 0.813957 | 0.001546 | 0.001612 | 0.001640 |
| mp_map_replace.test | RUN | 0.227366 | 1.848862 | 0.926091 | 0.001254 | 0.001708 | 0.001648 |
| mp_map_erase.test | RUN | 0.179857 | 1.373954 | 0.766862 | 0.001375 | 0.001647 | 0.001342 |
| mp_map_update.test | RUN | 0.155234 | 0.886357 | 0.594015 | 0.001552 | 0.001630 | 0.001350 |
| mp_map_update_q.test | RUN | 0.157049 | 0.899361 | 0.581345 | 0.001628 | 0.002883 | 0.001386 |
| mp_map_keys.test | RUN | 0.154278 | 0.828523 | 0.572171 | 0.001471 | 0.001712 | 0.001395 |
| mp_is_map.test | RUN | 0.140709 | 0.491651 | 0.453961 | 0.001406 | 0.001477 | 0.001644 |
| mp_bind.test | RUN | 0.174100 | 1.482632 | 0.686815 | 0.001645 | 0.001726 | 0.001714 |
| mp_bind_q.test | RUN | 0.154030 | 0.883152 | 0.555911 | 0.001591 | 0.001471 | 0.001726 |
| mp_bind_front.test | RUN | 0.151218 | 0.953743 | 0.538286 | 0.001505 | 0.001461 | 0.001445 |
| mp_bind_back.test | RUN | 0.151535 | 0.961187 | 0.524409 | 0.001357 | 0.001537 | 0.001319 |
| mp_lambda.test | RUN | 0.323256 | 2.994571 | 1.456563 | 0.001496 | 0.001204 | 0.001390 |
| mpl.test | RUN | 0.293160 | 0.738168 | 1.120547 | 0.001395 | 0.001361 | 0.001459 |
| mpl_list.test | RUN | 0.166474 | 0.580653 | 0.510647 | 0.001431 | 0.001642 | 0.001749 |
| mpl_tuple.test | RUN | 0.168299 | 0.571810 | 0.528013 | 0.001396 | 0.001392 | 0.001572 |
| version.test | RUN | 0.087335 | 0.209648 | 0.261828 | 0.001638 | 0.001558 | 0.001082 |
| mp11_version.test | RUN | 0.107813 | 0.240001 | 0.324256 | 0.001160 | 0.001480 | 0.001426 |
| list_version.test | RUN | 0.090393 | 0.220817 | 0.270239 | 0.001432 | 0.001232 | 0.001198 |
| algorithm_version.test | RUN | 0.100851 | 0.226613 | 0.288882 | 0.001418 | 0.001626 | 0.001372 |
| integral_version.test | RUN | 0.085965 | 0.210040 | 0.268291 | 0.001678 | 0.001460 | 0.001567 |
| utility_version.test | RUN | 0.088668 | 0.215671 | 0.260106 | 0.001294 | 0.001345 | 0.001387 |
| function_version.test | RUN | 0.089797 | 0.223756 | 0.271071 | 0.001320 | 0.001667 | 0.001648 |
| map_version.test | RUN | 0.100560 | 0.216985 | 0.291728 | 0.001537 | 0.001394 | 0.001480 |
| set_version.test | RUN | 0.089049 | 0.205323 | 0.273738 | 0.001654 | 0.001108 | 0.001391 |
| bind_version.test | RUN | 0.093067 | 0.227682 | 0.285800 | 0.001324 | 0.001281 | 0.001329 |
| integer_sequence_version.test | RUN | 0.082380 | 0.208546 | 0.259667 | 0.001442 | 0.001456 | 0.001173 |
| tuple_version.test | RUN | 0.098972 | 0.233413 | 0.268708 | 0.001279 | 0.001456 | 0.001232 |
| mpl_version.test | RUN | 0.075103 | 0.174779 | 0.201006 | 0.001152 | 0.001226 | 0.001281 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.999× | 0.998×, 1.000× | 0.995× |
| clang | 1.077× | 1.064×, 1.089× | 0.976× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1364 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43639138948).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| algorithm_version.test | 10 | 0.000849s | 0.000820s | 0.000891s | byte equality observed |
| bind_version.test | 10 | 0.000860s | 0.000836s | 0.000878s | byte equality observed |
| construct_from_tuple.test | 10 | 0.000862s | 0.000837s | 0.000907s | byte equality observed |
| function_version.test | 10 | 0.000855s | 0.000822s | 0.000898s | byte equality observed |
| integer_sequence.test | 10 | 0.000850s | 0.000845s | 0.000903s | byte equality observed |
| integer_sequence_version.test | 10 | 0.000868s | 0.000828s | 0.000929s | byte equality observed |
| integral.test | 10 | 0.000872s | 0.000834s | 0.000891s | byte equality observed |
| integral_version.test | 10 | 0.000869s | 0.000828s | 0.000896s | byte equality observed |
| list_version.test | 10 | 0.000872s | 0.000831s | 0.000930s | byte equality observed |
| map_version.test | 10 | 0.000866s | 0.000864s | 0.000910s | byte equality observed |
| mp11_version.test | 10 | 0.000873s | 0.000870s | 0.000921s | byte equality observed |
| mp_all.test | 10 | 0.000861s | 0.000878s | 0.000922s | byte equality observed |
| mp_all_2.test | 10 | 0.000890s | 0.000874s | 0.000912s | byte equality observed |
| mp_all_of.test | 10 | 0.000900s | 0.000905s | 0.000905s | byte equality observed |
| mp_all_of_q.test | 10 | 0.000899s | 0.000894s | 0.000901s | byte equality observed |
| mp_and.test | 10 | 0.000893s | 0.000878s | 0.000888s | byte equality observed |
| mp_any.test | 10 | 0.000891s | 0.000885s | 0.000897s | byte equality observed |
| mp_any_2.test | 10 | 0.000888s | 0.000893s | 0.000890s | byte equality observed |
| mp_any_of.test | 10 | 0.000891s | 0.000872s | 0.000959s | byte equality observed |
| mp_any_of_q.test | 10 | 0.000897s | 0.000891s | 0.000868s | byte equality observed |
| mp_append.test | 10 | 0.000895s | 0.000881s | 0.000929s | byte equality observed |
| mp_append_2.test | 10 | 0.000935s | 0.000896s | 0.000937s | byte equality observed |
| mp_append_3.test | 10 | 0.000417s | 0.000402s | 0.000896s | byte equality observed |
| mp_append_sf.test | 10 | 0.000906s | 0.000875s | 0.000936s | byte equality observed |
| mp_apply_q.test | 10 | 0.000905s | 0.000876s | 0.000904s | byte equality observed |
| mp_apply_q_sf.test | 10 | 0.000894s | 0.000851s | 0.000933s | byte equality observed |
| mp_assign.test | 10 | 0.000890s | 0.000880s | 0.000915s | byte equality observed |
| mp_assign_2.test | 10 | 0.000415s | 0.000393s | 0.000896s | byte equality observed |
| mp_at.test | 10 | 0.000904s | 0.000876s | 0.000896s | byte equality observed |
| mp_at_2.test | 10 | 0.000412s | 0.000397s | 0.000891s | byte equality observed |
| mp_at_sf.test | 10 | 0.000890s | 0.000880s | 0.000903s | byte equality observed |
| mp_back.test | 10 | 0.000904s | 0.000866s | 0.000887s | byte equality observed |
| mp_back_2.test | 10 | 0.000403s | 0.000394s | 0.000854s | byte equality observed |
| mp_bind.test | 10 | 0.000897s | 0.000885s | 0.000918s | byte equality observed |
| mp_bind_back.test | 10 | 0.000888s | 0.000875s | 0.000902s | byte equality observed |
| mp_bind_front.test | 10 | 0.000889s | 0.000887s | 0.000892s | byte equality observed |
| mp_bind_q.test | 10 | 0.000890s | 0.000877s | 0.000886s | byte equality observed |
| mp_clear.test | 10 | 0.000917s | 0.000920s | 0.000899s | byte equality observed |
| mp_clear_2.test | 10 | 0.000417s | 0.000406s | 0.000887s | byte equality observed |
| mp_compose.test | 10 | 0.000883s | 0.000943s | 0.000914s | byte equality observed |
| mp_cond.test | 10 | 0.000894s | 0.000912s | 0.000884s | byte equality observed |
| mp_cond_sf.test | 10 | 0.000887s | 0.000937s | 0.000867s | byte equality observed |
| mp_contains.test | 10 | 0.000888s | 0.000914s | 0.000860s | byte equality observed |
| mp_copy_if.test | 10 | 0.000898s | 0.000935s | 0.000854s | byte equality observed |
| mp_copy_if_q.test | 10 | 0.000923s | 0.000894s | 0.000870s | byte equality observed |
| mp_count.test | 10 | 0.000897s | 0.000888s | 0.000863s | byte equality observed |
| mp_count_if.test | 10 | 0.000897s | 0.000905s | 0.000883s | byte equality observed |
| mp_count_if_q.test | 10 | 0.000889s | 0.000893s | 0.000864s | byte equality observed |
| mp_defer.test | 10 | 0.000895s | 0.000880s | 0.000899s | byte equality observed |
| mp_drop.test | 10 | 0.000907s | 0.000886s | 0.000866s | byte equality observed |
| mp_drop_2.test | 10 | 0.000396s | 0.000401s | 0.000859s | byte equality observed |
| mp_empty.test | 10 | 0.000905s | 0.000883s | 0.000860s | byte equality observed |
| mp_empty_2.test | 10 | 0.000414s | 0.000400s | 0.000857s | byte equality observed |
| mp_erase.test | 10 | 0.000926s | 0.000888s | 0.000866s | byte equality observed |
| mp_erase_2.test | 10 | 0.000410s | 0.000401s | 0.000833s | byte equality observed |
| mp_eval_if.test | 10 | 0.000899s | 0.000862s | 0.000870s | byte equality observed |
| mp_eval_if_not.test | 10 | 0.000895s | 0.000872s | 0.000886s | byte equality observed |
| mp_eval_if_sf.test | 10 | 0.000887s | 0.000879s | 0.000878s | byte equality observed |
| mp_eval_or.test | 10 | 0.000886s | 0.000882s | 0.000884s | byte equality observed |
| mp_fill.test | 10 | 0.000906s | 0.000885s | 0.000875s | byte equality observed |
| mp_fill_2.test | 10 | 0.000414s | 0.000401s | 0.000852s | byte equality observed |
| mp_filter.test | 10 | 0.000889s | 0.000881s | 0.000874s | byte equality observed |
| mp_find.test | 10 | 0.000899s | 0.000873s | 0.000887s | byte equality observed |
| mp_find_if.test | 10 | 0.000890s | 0.000879s | 0.000877s | byte equality observed |
| mp_find_if_q.test | 10 | 0.000899s | 0.000880s | 0.000874s | byte equality observed |
| mp_flatten.test | 10 | 0.000897s | 0.000877s | 0.000903s | byte equality observed |
| mp_fold.test | 10 | 0.000925s | 0.000882s | 0.000893s | byte equality observed |
| mp_fold_q.test | 10 | 0.000907s | 0.000888s | 0.000878s | byte equality observed |
| mp_fold_q_sf.test | 10 | 0.000893s | 0.000887s | 0.000864s | byte equality observed |
| mp_for_each.test | 10 | 0.000901s | 0.000884s | 0.000875s | byte equality observed |
| mp_from_sequence.test | 10 | 0.000892s | 0.000893s | 0.000880s | byte equality observed |
| mp_from_sequence_2.test | 10 | 0.000881s | 0.000897s | 0.000894s | byte equality observed |
| mp_from_sequence_3.test | 10 | 0.000891s | 0.000890s | 0.000887s | byte equality observed |
| mp_front.test | 10 | 0.000909s | 0.000899s | 0.000903s | byte equality observed |
| mp_front_2.test | 10 | 0.000405s | 0.000409s | 0.000874s | byte equality observed |
| mp_identity.test | 10 | 0.000904s | 0.000886s | 0.000899s | byte equality observed |
| mp_if.test | 10 | 0.000886s | 0.000898s | 0.000927s | byte equality observed |
| mp_if_sf.test | 10 | 0.000897s | 0.000879s | 0.000877s | byte equality observed |
| mp_inherit.test | 10 | 0.000901s | 0.000884s | 0.000901s | byte equality observed |
| mp_insert.test | 10 | 0.000919s | 0.000918s | 0.000891s | byte equality observed |
| mp_insert_2.test | 10 | 0.000414s | 0.000403s | 0.000858s | byte equality observed |
| mp_intersperse.test | 10 | 0.000896s | 0.000902s | 0.000880s | byte equality observed |
| mp_invoke_q.test | 10 | 0.000908s | 0.000912s | 0.000894s | byte equality observed |
| mp_invoke_q_sf.test | 10 | 0.000896s | 0.000899s | 0.000905s | byte equality observed |
| mp_iota.test | 10 | 0.000898s | 0.000911s | 0.000899s | byte equality observed |
| mp_iota_2.test | 10 | 0.000897s | 0.000913s | 0.000889s | byte equality observed |
| mp_is_list.test | 10 | 0.000896s | 0.000877s | 0.000900s | byte equality observed |
| mp_is_map.test | 10 | 0.000908s | 0.000893s | 0.000889s | byte equality observed |
| mp_is_set.test | 10 | 0.000906s | 0.000873s | 0.000867s | byte equality observed |
| mp_is_value_list.test | 10 | 0.000894s | 0.000873s | 0.000882s | byte equality observed |
| mp_iterate.test | 10 | 0.000903s | 0.000882s | 0.000885s | byte equality observed |
| mp_join.test | 10 | 0.000919s | 0.000866s | 0.000870s | byte equality observed |
| mp_lambda.test | 10 | 0.000921s | 0.000911s | 0.000905s | byte equality observed |
| mp_less.test | 10 | 0.000882s | 0.000886s | 0.000874s | byte equality observed |
| mp_list_c.test | 10 | 0.000909s | 0.000937s | 0.000899s | byte equality observed |
| mp_list_v.test | 10 | 0.000405s | 0.000400s | 0.000879s | byte equality observed |
| mp_map_contains.test | 10 | 0.000894s | 0.000874s | 0.000881s | byte equality observed |
| mp_map_erase.test | 10 | 0.000885s | 0.000871s | 0.000900s | byte equality observed |
| mp_map_find.test | 10 | 0.000887s | 0.000887s | 0.000897s | byte equality observed |
| mp_map_find_2.test | 10 | 0.000885s | 0.000878s | 0.000885s | byte equality observed |
| mp_map_find_3.test | 10 | 0.000885s | 0.000861s | 0.000905s | byte equality observed |
| mp_map_find_4.test | 10 | 0.000876s | 0.000876s | 0.000898s | byte equality observed |
| mp_map_insert.test | 10 | 0.000878s | 0.000864s | 0.000886s | byte equality observed |
| mp_map_keys.test | 10 | 0.000882s | 0.000875s | 0.000897s | byte equality observed |
| mp_map_replace.test | 10 | 0.000913s | 0.000880s | 0.000890s | byte equality observed |
| mp_map_update.test | 10 | 0.000881s | 0.000865s | 0.000891s | byte equality observed |
| mp_map_update_q.test | 10 | 0.000873s | 0.000857s | 0.000904s | byte equality observed |
| mp_max.test | 10 | 0.000882s | 0.000860s | 0.000882s | byte equality observed |
| mp_max_element.test | 10 | 0.000902s | 0.000876s | 0.000902s | byte equality observed |
| mp_max_element_2.test | 10 | 0.000406s | 0.000398s | 0.000867s | byte equality observed |
| mp_max_element_q.test | 10 | 0.000890s | 0.000911s | 0.000909s | byte equality observed |
| mp_max_element_q_2.test | 10 | 0.000407s | 0.000410s | 0.000867s | byte equality observed |
| mp_min.test | 10 | 0.000888s | 0.000906s | 0.000865s | byte equality observed |
| mp_min_element.test | 10 | 0.000888s | 0.000932s | 0.000874s | byte equality observed |
| mp_min_element_2.test | 10 | 0.000405s | 0.000411s | 0.000849s | byte equality observed |
| mp_min_element_q.test | 10 | 0.000907s | 0.000914s | 0.000894s | byte equality observed |
| mp_min_element_q_2.test | 10 | 0.000408s | 0.000407s | 0.000869s | byte equality observed |
| mp_none_of.test | 10 | 0.000885s | 0.000888s | 0.000880s | byte equality observed |
| mp_none_of_q.test | 10 | 0.000893s | 0.000874s | 0.000896s | byte equality observed |
| mp_not_fn.test | 10 | 0.000885s | 0.000877s | 0.000888s | byte equality observed |
| mp_nth_element.test | 10 | 0.000896s | 0.000885s | 0.000889s | byte equality observed |
| mp_nth_element_q.test | 10 | 0.000884s | 0.000901s | 0.000885s | byte equality observed |
| mp_or.test | 10 | 0.000894s | 0.000896s | 0.000856s | byte equality observed |
| mp_pairwise_fold.test | 10 | 0.000900s | 0.000916s | 0.000863s | byte equality observed |
| mp_pairwise_fold_q.test | 10 | 0.000903s | 0.000897s | 0.000863s | byte equality observed |
| mp_partial_sum.test | 10 | 0.000916s | 0.000893s | 0.000866s | byte equality observed |
| mp_partition.test | 10 | 0.000891s | 0.000925s | 0.000865s | byte equality observed |
| mp_partition_q.test | 10 | 0.000879s | 0.000897s | 0.000842s | byte equality observed |
| mp_plus.test | 10 | 0.000878s | 0.000905s | 0.000840s | byte equality observed |
| mp_pop_back.test | 10 | 0.000906s | 0.000917s | 0.000872s | byte equality observed |
| mp_pop_back_2.test | 10 | 0.000406s | 0.000413s | 0.000860s | byte equality observed |
| mp_pop_front.test | 10 | 0.000882s | 0.000903s | 0.000852s | byte equality observed |
| mp_pop_front_2.test | 10 | 0.000403s | 0.000409s | 0.000825s | byte equality observed |
| mp_power_set.test | 10 | 0.000890s | 0.000902s | 0.000865s | byte equality observed |
| mp_product.test | 10 | 0.000878s | 0.000896s | 0.000860s | byte equality observed |
| mp_push_back.test | 10 | 0.000889s | 0.000913s | 0.000846s | byte equality observed |
| mp_push_back_2.test | 10 | 0.000405s | 0.000406s | 0.000850s | byte equality observed |
| mp_push_front.test | 10 | 0.000894s | 0.000925s | 0.000873s | byte equality observed |
| mp_push_front_2.test | 10 | 0.000406s | 0.000411s | 0.000847s | byte equality observed |
| mp_quote.test | 10 | 0.000863s | 0.000880s | 0.000877s | byte equality observed |
| mp_quote_trait.test | 10 | 0.000881s | 0.000901s | 0.000870s | byte equality observed |
| mp_remove.test | 10 | 0.000881s | 0.000889s | 0.000869s | byte equality observed |
| mp_remove_if.test | 10 | 0.000877s | 0.000904s | 0.000875s | byte equality observed |
| mp_remove_if_q.test | 10 | 0.000881s | 0.000902s | 0.000877s | byte equality observed |
| mp_rename.test | 10 | 0.000889s | 0.000921s | 0.000887s | byte equality observed |
| mp_rename_2.test | 10 | 0.000404s | 0.000413s | 0.000866s | byte equality observed |
| mp_rename_v.test | 10 | 0.000404s | 0.000408s | 0.000896s | byte equality observed |
| mp_repeat.test | 10 | 0.000906s | 0.000927s | 0.000868s | byte equality observed |
| mp_repeat_2.test | 10 | 0.000400s | 0.000403s | 0.000846s | byte equality observed |
| mp_repeat_3.test | 10 | 0.000885s | 0.000929s | 0.000869s | byte equality observed |
| mp_replace.test | 10 | 0.000883s | 0.000926s | 0.000892s | byte equality observed |
| mp_replace_at.test | 10 | 0.000875s | 0.000912s | 0.000870s | byte equality observed |
| mp_replace_at_c.test | 10 | 0.000879s | 0.000919s | 0.000878s | byte equality observed |
| mp_replace_front.test | 10 | 0.000895s | 0.000919s | 0.000865s | byte equality observed |
| mp_replace_front_2.test | 10 | 0.000404s | 0.000409s | 0.000852s | byte equality observed |
| mp_replace_if.test | 10 | 0.000897s | 0.000888s | 0.000870s | byte equality observed |
| mp_replace_if_q.test | 10 | 0.000896s | 0.000890s | 0.000882s | byte equality observed |
| mp_replace_second.test | 10 | 0.000899s | 0.000892s | 0.000880s | byte equality observed |
| mp_replace_second_2.test | 10 | 0.000410s | 0.000406s | 0.000858s | byte equality observed |
| mp_replace_third.test | 10 | 0.000899s | 0.000916s | 0.000886s | byte equality observed |
| mp_replace_third_2.test | 10 | 0.000406s | 0.000400s | 0.000859s | byte equality observed |
| mp_reverse.test | 10 | 0.000894s | 0.000892s | 0.000875s | byte equality observed |
| mp_reverse_fold.test | 10 | 0.000909s | 0.000892s | 0.000860s | byte equality observed |
| mp_reverse_fold_q.test | 10 | 0.000891s | 0.000898s | 0.000878s | byte equality observed |
| mp_rotate_left.test | 10 | 0.000872s | 0.000914s | 0.000876s | byte equality observed |
| mp_rotate_right.test | 10 | 0.000890s | 0.000914s | 0.000889s | byte equality observed |
| mp_same.test | 10 | 0.000894s | 0.000888s | 0.000884s | byte equality observed |
| mp_second.test | 10 | 0.000905s | 0.000899s | 0.000879s | byte equality observed |
| mp_second_2.test | 10 | 0.000409s | 0.000400s | 0.000860s | byte equality observed |
| mp_set_contains.test | 10 | 0.000893s | 0.000905s | 0.000877s | byte equality observed |
| mp_set_difference.test | 10 | 0.000879s | 0.000890s | 0.000886s | byte equality observed |
| mp_set_difference_sf.test | 10 | 0.000872s | 0.000906s | 0.000890s | byte equality observed |
| mp_set_intersection.test | 10 | 0.000908s | 0.000889s | 0.000902s | byte equality observed |
| mp_set_intersection_sf.test | 10 | 0.000892s | 0.000894s | 0.000910s | byte equality observed |
| mp_set_push_back.test | 10 | 0.000905s | 0.000919s | 0.000889s | byte equality observed |
| mp_set_push_front.test | 10 | 0.000910s | 0.000896s | 0.000899s | byte equality observed |
| mp_set_union.test | 10 | 0.000922s | 0.000892s | 0.000879s | byte equality observed |
| mp_set_union_sf.test | 10 | 0.000912s | 0.000880s | 0.000901s | byte equality observed |
| mp_similar.test | 10 | 0.000904s | 0.000909s | 0.000890s | byte equality observed |
| mp_size.test | 10 | 0.000908s | 0.000891s | 0.000905s | byte equality observed |
| mp_size_2.test | 10 | 0.000421s | 0.000405s | 0.000876s | byte equality observed |
| mp_slice.test | 10 | 0.000940s | 0.000928s | 0.000903s | byte equality observed |
| mp_slice_2.test | 10 | 0.000417s | 0.000394s | 0.000863s | byte equality observed |
| mp_sliding_fold.test | 10 | 0.000925s | 0.000895s | 0.000903s | byte equality observed |
| mp_sliding_fold_q.test | 10 | 0.000921s | 0.000917s | 0.000876s | byte equality observed |
| mp_sort.test | 10 | 0.000908s | 0.000906s | 0.000875s | byte equality observed |
| mp_sort_q.test | 10 | 0.000905s | 0.000901s | 0.000871s | byte equality observed |
| mp_split.test | 10 | 0.000920s | 0.000908s | 0.000865s | byte equality observed |
| mp_starts_with.test | 10 | 0.000912s | 0.000903s | 0.000893s | byte equality observed |
| mp_starts_with_sf.test | 10 | 0.000914s | 0.000917s | 0.000892s | byte equality observed |
| mp_take.test | 10 | 0.000927s | 0.000918s | 0.000909s | byte equality observed |
| mp_take_2.test | 10 | 0.000416s | 0.000415s | 0.000863s | byte equality observed |
| mp_third.test | 10 | 0.000915s | 0.000898s | 0.000873s | byte equality observed |
| mp_third_2.test | 10 | 0.000412s | 0.000411s | 0.000897s | byte equality observed |
| mp_transform.test | 10 | 0.000916s | 0.000911s | 0.000917s | byte equality observed |
| mp_transform_2.test | 10 | 0.000883s | 0.000876s | 0.000887s | byte equality observed |
| mp_transform_front.test | 10 | 0.000908s | 0.000924s | 0.000898s | byte equality observed |
| mp_transform_front_2.test | 10 | 0.000416s | 0.000406s | 0.000867s | byte equality observed |
| mp_transform_if.test | 10 | 0.000886s | 0.000913s | 0.000897s | byte equality observed |
| mp_transform_if_q.test | 10 | 0.000887s | 0.000924s | 0.000908s | byte equality observed |
| mp_transform_q.test | 10 | 0.000903s | 0.000891s | 0.000899s | byte equality observed |
| mp_transform_q_2.test | 10 | 0.000903s | 0.000897s | 0.000922s | byte equality observed |
| mp_transform_second.test | 10 | 0.000919s | 0.000900s | 0.000885s | byte equality observed |
| mp_transform_second_2.test | 10 | 0.000409s | 0.000419s | 0.000876s | byte equality observed |
| mp_transform_sf.test | 10 | 0.000888s | 0.000905s | 0.000913s | byte equality observed |
| mp_transform_third.test | 10 | 0.000900s | 0.000905s | 0.000897s | byte equality observed |
| mp_transform_third_2.test | 10 | 0.000409s | 0.000415s | 0.000888s | byte equality observed |
| mp_unique.test | 10 | 0.000906s | 0.000900s | 0.000898s | byte equality observed |
| mp_unique_if.test | 10 | 0.000917s | 0.000918s | 0.000906s | byte equality observed |
| mp_unique_if_q.test | 10 | 0.000921s | 0.000933s | 0.000902s | byte equality observed |
| mp_valid.test | 10 | 0.000907s | 0.000910s | 0.000908s | byte equality observed |
| mp_valid_and_true.test | 10 | 0.000907s | 0.000918s | 0.000895s | byte equality observed |
| mp_value.test | 10 | 0.000415s | 0.000415s | 0.000894s | byte equality observed |
| mp_with_index.test | 10 | 0.001303s | 0.001274s | 0.001218s | byte equality observed |
| mp_with_index_cx.test | 10 | 0.000412s | 0.000408s | 0.000873s | byte equality observed |
| mpl.test | 10 | 0.000903s | 0.000899s | 0.000884s | byte equality observed |
| mpl_list.test | 10 | 0.000892s | 0.000876s | 0.000878s | byte equality observed |
| mpl_tuple.test | 10 | 0.000884s | 0.000889s | 0.000879s | byte equality observed |
| mpl_version.test | 10 | 0.000902s | 0.000900s | 0.000879s | byte equality observed |
| set_version.test | 10 | 0.000889s | 0.000890s | 0.000888s | byte equality observed |
| tuple_apply.test | 10 | 0.000892s | 0.000902s | 0.000905s | byte equality observed |
| tuple_for_each.test | 10 | 0.000909s | 0.000923s | 0.000911s | byte equality observed |
| tuple_transform.test | 10 | 0.000911s | 0.000900s | 0.000894s | byte equality observed |
| tuple_transform_2.test | 10 | 0.000900s | 0.000900s | 0.000890s | byte equality observed |
| tuple_version.test | 10 | 0.000918s | 0.000892s | 0.000885s | byte equality observed |
| utility_version.test | 10 | 0.000902s | 0.000882s | 0.000897s | byte equality observed |
| version.test | 10 | 0.000902s | 0.000875s | 0.000889s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43639138948).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
