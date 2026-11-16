# libs/mp11/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| mp11.test | COMPILE | 0.036637 | 0.068647 | 0.127152 | — | — | — |
| complex_h.test | COMPILE | 0.148877 | 0.315269 | 0.490580 | — | — | — |
| mp_size.test | RUN | 0.173125 | 0.940629 | 0.613162 | 0.001652 | 0.001732 | 0.001670 |
| mp_size_2.test | RUN | 0.015623 | 0.035126 | 0.053969 | 0.000685 | 0.000756 | 0.001568 |
| mp_empty.test | RUN | 0.165097 | 0.575673 | 0.536713 | 0.001461 | 0.001776 | 0.001564 |
| mp_empty_2.test | RUN | 0.015835 | 0.037575 | 0.059379 | 0.000548 | 0.000707 | 0.001484 |
| mp_assign.test | RUN | 0.185663 | 1.228403 | 0.754180 | 0.001522 | 0.001785 | 0.001506 |
| mp_assign_2.test | RUN | 0.016367 | 0.037575 | 0.060033 | 0.000699 | 0.000783 | 0.001376 |
| mp_clear.test | RUN | 0.162604 | 0.545655 | 0.589546 | 0.001673 | 0.001838 | 0.001614 |
| mp_clear_2.test | RUN | 0.016668 | 0.036227 | 0.053613 | 0.000776 | 0.000598 | 0.001754 |
| mp_front.test | RUN | 0.181408 | 0.851437 | 0.593901 | 0.001706 | 0.001786 | 0.001500 |
| mp_front_2.test | RUN | 0.016229 | 0.035310 | 0.057858 | 0.000572 | 0.000598 | 0.001732 |
| mp_pop_front.test | RUN | 0.177183 | 0.892455 | 0.662495 | 0.001592 | 0.001541 | 0.001736 |
| mp_pop_front_2.test | RUN | 0.015495 | 0.036943 | 0.054096 | 0.000633 | 0.000621 | 0.001403 |
| mp_second.test | RUN | 0.170591 | 0.565437 | 0.629899 | 0.001628 | 0.001539 | 0.001654 |
| mp_second_2.test | RUN | 0.016435 | 0.037617 | 0.051992 | 0.000712 | 0.000714 | 0.001754 |
| mp_third.test | RUN | 0.160782 | 0.504752 | 0.538308 | 0.001578 | 0.001662 | 0.001562 |
| mp_third_2.test | RUN | 0.016061 | 0.036675 | 0.058708 | 0.000640 | 0.000617 | 0.001528 |
| mp_push_front.test | RUN | 0.220500 | 1.887405 | 1.021970 | 0.001611 | 0.001690 | 0.001743 |
| mp_push_front_2.test | RUN | 0.015808 | 0.037714 | 0.059421 | 0.000711 | 0.000638 | 0.001724 |
| mp_push_back.test | RUN | 0.215874 | 1.875086 | 0.971337 | 0.001732 | 0.001693 | 0.001577 |
| mp_push_back_2.test | RUN | 0.015851 | 0.035723 | 0.058929 | 0.000764 | 0.000709 | 0.001802 |
| mp_rename.test | RUN | 0.206437 | 1.726592 | 0.892588 | 0.001806 | 0.001711 | 0.001769 |
| mp_rename_2.test | RUN | 0.016016 | 0.038208 | 0.058735 | 0.000591 | 0.000781 | 0.001752 |
| mp_append.test | RUN | 0.214555 | 1.961316 | 0.922160 | 0.001758 | 0.001824 | 0.001757 |
| mp_append_2.test | RUN | 0.464958 | 4.372105 | 1.251824 | 0.001625 | 0.001674 | 0.001806 |
| mp_append_3.test | RUN | 0.015633 | 0.037356 | 0.057467 | 0.000742 | 0.000753 | 0.001670 |
| mp_append_sf.test | RUN | 0.165872 | 0.497183 | 0.570522 | 0.001605 | 0.001762 | 0.001537 |
| mp_replace_front.test | RUN | 0.201672 | 1.391247 | 0.729338 | 0.001634 | 0.001807 | 0.001340 |
| mp_replace_front_2.test | RUN | 0.015071 | 0.036590 | 0.058860 | 0.000558 | 0.000708 | 0.001616 |
| mp_replace_second.test | RUN | 0.211169 | 0.903854 | 0.752461 | 0.001705 | 0.001664 | 0.001728 |
| mp_replace_second_2.test | RUN | 0.018806 | 0.037821 | 0.055562 | 0.000584 | 0.000761 | 0.001391 |
| mp_replace_third.test | RUN | 0.185630 | 0.743377 | 0.673241 | 0.001706 | 0.001834 | 0.001764 |
| mp_replace_third_2.test | RUN | 0.015965 | 0.037660 | 0.051430 | 0.000574 | 0.000663 | 0.001770 |
| mp_apply_q.test | RUN | 0.204335 | 1.721151 | 0.876208 | 0.001630 | 0.001532 | 0.001540 |
| mp_apply_q_sf.test | RUN | 0.165805 | 0.507199 | 0.580376 | 0.001656 | 0.001709 | 0.001388 |
| mp_is_list.test | RUN | 0.166763 | 0.610799 | 0.572046 | 0.001463 | 0.001771 | 0.001709 |
| mp_list_c.test | RUN | 0.172255 | 0.729048 | 0.636363 | 0.001580 | 0.001800 | 0.001796 |
| mp_transform_front.test | RUN | 0.190781 | 1.392550 | 0.728461 | 0.001653 | 0.001619 | 0.001436 |
| mp_transform_front_2.test | RUN | 0.017376 | 0.035788 | 0.058938 | 0.000623 | 0.000779 | 0.001583 |
| mp_transform_second.test | RUN | 0.184236 | 1.206917 | 0.713853 | 0.001630 | 0.001550 | 0.001589 |
| mp_transform_second_2.test | RUN | 0.016541 | 0.037993 | 0.060768 | 0.000653 | 0.000760 | 0.001496 |
| mp_transform_third.test | RUN | 0.167557 | 0.928793 | 0.658434 | 0.001425 | 0.001826 | 0.001860 |
| mp_transform_third_2.test | RUN | 0.015618 | 0.035994 | 0.051902 | 0.000595 | 0.000688 | 0.001416 |
| mp_list_v.test | RUN | 0.016731 | 0.034994 | 0.051195 | 0.000602 | 0.000606 | 0.001550 |
| mp_rename_v.test | RUN | 0.015133 | 0.035493 | 0.052405 | 0.000574 | 0.000732 | 0.001266 |
| mp_is_value_list.test | RUN | 0.159548 | 0.370686 | 0.518838 | 0.001815 | 0.001456 | 0.001552 |
| mp_transform.test | RUN | 0.376828 | 2.908671 | 1.606070 | 0.001832 | 0.001798 | 0.001736 |
| mp_transform_2.test | RUN | 0.154975 | 0.358362 | 0.526904 | 0.001724 | 0.001678 | 0.001640 |
| mp_transform_q.test | RUN | 0.362786 | 2.765326 | 1.506867 | 0.001403 | 0.001828 | 0.001918 |
| mp_transform_q_2.test | RUN | 0.396075 | 0.908657 | 2.006314 | 0.001653 | 0.001778 | 0.001585 |
| mp_transform_sf.test | RUN | 0.177393 | 0.510673 | 0.602556 | 0.001588 | 0.001595 | 0.001766 |
| mp_transform_if.test | RUN | 0.207096 | 1.410569 | 0.861514 | 0.001680 | 0.001680 | 0.001528 |
| mp_transform_if_q.test | RUN | 0.205837 | 1.408423 | 0.877238 | 0.001516 | 0.001634 | 0.001503 |
| mp_filter.test | RUN | 0.186478 | 0.844274 | 0.697478 | 0.001580 | 0.001740 | 0.001396 |
| mp_fill.test | RUN | 0.176371 | 0.647898 | 0.636783 | 0.001538 | 0.001707 | 0.001645 |
| mp_fill_2.test | RUN | 0.027050 | 0.054187 | 0.091481 | 0.000746 | 0.000716 | 0.001742 |
| mp_count.test | RUN | 0.335833 | 1.502829 | 1.000911 | 0.001713 | 0.001670 | 0.001481 |
| mp_count_if.test | RUN | 0.372166 | 1.534021 | 1.098665 | 0.001776 | 0.001721 | 0.001639 |
| mp_count_if_q.test | RUN | 0.178208 | 1.009546 | 0.629670 | 0.001581 | 0.001813 | 0.001554 |
| mp_contains.test | RUN | 0.180009 | 0.624886 | 0.565040 | 0.001501 | 0.001841 | 0.001805 |
| mp_starts_with.test | RUN | 0.177428 | 0.541022 | 0.621476 | 0.001603 | 0.001786 | 0.001396 |
| mp_starts_with_sf.test | RUN | 0.173558 | 0.523895 | 0.535304 | 0.001499 | 0.001584 | 0.001638 |
| mp_repeat.test | RUN | 0.253918 | 2.495873 | 1.100930 | 0.001780 | 0.001734 | 0.001717 |
| mp_repeat_2.test | RUN | 0.028708 | 0.058857 | 0.097370 | 0.000720 | 0.000726 | 0.001589 |
| mp_repeat_3.test | RUN | 0.209108 | 0.343816 | 0.549801 | 0.001543 | 0.001818 | 0.001892 |
| mp_product.test | RUN | 0.201175 | 1.494025 | 0.775741 | 0.001401 | 0.001848 | 0.001568 |
| mp_drop.test | RUN | 0.217140 | 1.863378 | 0.894906 | 0.001496 | 0.001591 | 0.001802 |
| mp_drop_2.test | RUN | 0.026611 | 0.057020 | 0.099166 | 0.000740 | 0.000748 | 0.001714 |
| mp_iota.test | RUN | 0.206335 | 1.572168 | 0.814094 | 0.001724 | 0.001761 | 0.001682 |
| mp_iota_2.test | RUN | 0.220752 | 1.905426 | 0.880428 | 0.001486 | 0.001848 | 0.001787 |
| mp_at.test | RUN | 0.183167 | 0.850836 | 0.668150 | 0.001559 | 0.001902 | 0.001618 |
| mp_at_2.test | RUN | 0.027745 | 0.057016 | 0.096360 | 0.000748 | 0.000750 | 0.001823 |
| mp_at_sf.test | RUN | 0.173941 | 0.529676 | 0.582045 | 0.001526 | 0.001809 | 0.001414 |
| mp_take.test | RUN | 0.285137 | 2.472568 | 1.041958 | 0.001588 | 0.001618 | 0.001914 |
| mp_take_2.test | RUN | 0.028880 | 0.058565 | 0.088510 | 0.000708 | 0.000748 | 0.001603 |
| mp_slice.test | RUN | 0.325143 | 2.483548 | 1.408660 | 0.001728 | 0.001815 | 0.001927 |
| mp_slice_2.test | RUN | 0.028019 | 0.056752 | 0.095884 | 0.000900 | 0.000773 | 0.001724 |
| mp_replace.test | RUN | 0.214537 | 1.280877 | 0.918195 | 0.001447 | 0.001698 | 0.001641 |
| mp_replace_if.test | RUN | 0.200153 | 1.129963 | 0.808250 | 0.001801 | 0.001572 | 0.001783 |
| mp_replace_if_q.test | RUN | 0.198338 | 1.128087 | 0.827966 | 0.001701 | 0.001847 | 0.001790 |
| mp_copy_if.test | RUN | 0.207080 | 1.543804 | 0.803817 | 0.001768 | 0.001798 | 0.001554 |
| mp_copy_if_q.test | RUN | 0.207828 | 1.572672 | 0.780716 | 0.001710 | 0.001588 | 0.001416 |
| mp_remove.test | RUN | 0.200517 | 1.049147 | 0.812954 | 0.001703 | 0.001826 | 0.001768 |
| mp_remove_if.test | RUN | 0.215615 | 1.649147 | 0.863222 | 0.001331 | 0.001807 | 0.001684 |
| mp_remove_if_q.test | RUN | 0.206037 | 1.650130 | 0.837639 | 0.001552 | 0.001750 | 0.001778 |
| mp_partition.test | RUN | 0.211042 | 1.541978 | 0.902137 | 0.001660 | 0.001811 | 0.001775 |
| mp_partition_q.test | RUN | 0.213557 | 1.546512 | 0.949757 | 0.001798 | 0.001909 | 0.001698 |
| mp_sort.test | RUN | 0.203591 | 1.121889 | 0.782431 | 0.001794 | 0.001836 | 0.001811 |
| mp_sort_q.test | RUN | 0.204405 | 1.111467 | 0.818145 | 0.001422 | 0.001770 | 0.001335 |
| mp_find.test | RUN | 0.197477 | 1.197283 | 0.730446 | 0.001504 | 0.001879 | 0.001581 |
| mp_find_if.test | RUN | 0.187067 | 1.100558 | 0.678708 | 0.001745 | 0.001797 | 0.001725 |
| mp_find_if_q.test | RUN | 0.204397 | 1.226930 | 0.842300 | 0.001546 | 0.001736 | 0.001744 |
| mp_reverse.test | RUN | 0.396550 | 3.287220 | 1.505014 | 0.001734 | 0.001797 | 0.001810 |
| mp_fold.test | RUN | 0.674833 | 2.573273 | 3.805346 | 0.001782 | 0.001816 | 0.001800 |
| mp_fold_q.test | RUN | 0.197262 | 1.099430 | 0.774737 | 0.001702 | 0.001814 | 0.001810 |
| mp_fold_q_sf.test | RUN | 0.169624 | 0.514723 | 0.606901 | 0.001694 | 0.001848 | 0.001864 |
| mp_reverse_fold.test | RUN | 0.331372 | 2.422480 | 1.060716 | 0.001231 | 0.001784 | 0.001644 |
| mp_reverse_fold_q.test | RUN | 0.198216 | 1.321484 | 0.804208 | 0.001713 | 0.001805 | 0.001511 |
| mp_unique.test | RUN | 0.203047 | 1.183998 | 0.789505 | 0.001666 | 0.001931 | 0.001789 |
| mp_unique_if.test | RUN | 0.344016 | 2.554750 | 1.213658 | 0.001745 | 0.001615 | 0.001739 |
| mp_unique_if_q.test | RUN | 0.301429 | 2.524098 | 1.026278 | 0.001802 | 0.001727 | 0.001715 |
| mp_all_of.test | RUN | 0.466267 | 1.383474 | 1.371309 | 0.001698 | 0.001797 | 0.001696 |
| mp_all_of_q.test | RUN | 0.173832 | 0.581338 | 0.549680 | 0.001598 | 0.001723 | 0.001753 |
| mp_any_of.test | RUN | 0.480687 | 1.441548 | 1.355025 | 0.001511 | 0.001775 | 0.001812 |
| mp_any_of_q.test | RUN | 0.174951 | 0.579344 | 0.599312 | 0.001725 | 0.001875 | 0.001674 |
| mp_none_of.test | RUN | 0.462151 | 1.439155 | 1.325619 | 0.001551 | 0.001818 | 0.001728 |
| mp_none_of_q.test | RUN | 0.167810 | 0.621822 | 0.596677 | 0.001662 | 0.001869 | 0.001552 |
| mp_replace_at.test | RUN | 0.213803 | 1.225514 | 0.853643 | 0.001420 | 0.001820 | 0.001980 |
| mp_replace_at_c.test | RUN | 0.207786 | 1.187918 | 0.832645 | 0.001598 | 0.001554 | 0.001557 |
| mp_for_each.test | RUN | 0.202582 | 0.902499 | 1.036503 | 0.001512 | 0.001538 | 0.001608 |
| mp_insert.test | RUN | 0.306877 | 2.435823 | 1.247648 | 0.001801 | 0.001875 | 0.001720 |
| mp_insert_2.test | RUN | 0.028833 | 0.054819 | 0.095139 | 0.000731 | 0.000569 | 0.001623 |
| mp_erase.test | RUN | 0.337091 | 2.620019 | 1.485718 | 0.001733 | 0.001844 | 0.001684 |
| mp_erase_2.test | RUN | 0.027805 | 0.060628 | 0.097422 | 0.000602 | 0.000756 | 0.001696 |
| mp_with_index.test | RUN | 0.461117 | 5.400757 | 3.273917 | 0.002402 | 0.002226 | 0.002088 |
| mp_with_index_cx.test | RUN | 0.003502 | 0.017682 | 0.023556 | 0.000636 | 0.000752 | 0.001702 |
| mp_from_sequence.test | RUN | 0.208722 | 1.402311 | 0.826038 | 0.001749 | 0.001634 | 0.001563 |
| mp_from_sequence_2.test | RUN | 0.222342 | 1.622541 | 0.921499 | 0.001553 | 0.001637 | 0.001860 |
| mp_from_sequence_3.test | RUN | 0.185529 | 0.748280 | 0.688653 | 0.001526 | 0.001857 | 0.001484 |
| mp_min_element.test | RUN | 0.180527 | 0.656516 | 0.603284 | 0.001772 | 0.001434 | 0.001440 |
| mp_min_element_2.test | RUN | 0.028108 | 0.057929 | 0.099968 | 0.000571 | 0.000772 | 0.001639 |
| mp_min_element_q.test | RUN | 0.179715 | 0.662401 | 0.610032 | 0.001451 | 0.001972 | 0.001754 |
| mp_min_element_q_2.test | RUN | 0.028782 | 0.053465 | 0.090837 | 0.000728 | 0.000740 | 0.001769 |
| mp_max_element.test | RUN | 0.178602 | 0.676360 | 0.582867 | 0.001737 | 0.001764 | 0.001482 |
| mp_max_element_2.test | RUN | 0.028171 | 0.053328 | 0.100057 | 0.000636 | 0.000706 | 0.001677 |
| mp_max_element_q.test | RUN | 0.177482 | 0.610908 | 0.596505 | 0.001664 | 0.001856 | 0.001682 |
| mp_max_element_q_2.test | RUN | 0.027817 | 0.058225 | 0.099255 | 0.000693 | 0.000743 | 0.001736 |
| mp_nth_element.test | RUN | 0.197942 | 0.943411 | 0.699190 | 0.001690 | 0.001524 | 0.001698 |
| mp_nth_element_q.test | RUN | 0.201059 | 0.940316 | 0.779048 | 0.001638 | 0.001534 | 0.001668 |
| mp_back.test | RUN | 0.191316 | 0.759834 | 0.717127 | 0.001377 | 0.001739 | 0.001829 |
| mp_back_2.test | RUN | 0.027279 | 0.057574 | 0.084841 | 0.000574 | 0.000622 | 0.001552 |
| mp_pop_back.test | RUN | 0.503088 | 5.037364 | 1.433553 | 0.001497 | 0.001806 | 0.001425 |
| mp_pop_back_2.test | RUN | 0.028441 | 0.056581 | 0.097485 | 0.000787 | 0.000683 | 0.001588 |
| mp_flatten.test | RUN | 0.225351 | 1.782593 | 0.999725 | 0.001844 | 0.001728 | 0.001674 |
| mp_rotate_left.test | RUN | 0.225400 | 1.915300 | 0.985400 | 0.001736 | 0.001742 | 0.001357 |
| mp_rotate_right.test | RUN | 0.227767 | 1.925887 | 0.991307 | 0.001672 | 0.001940 | 0.001731 |
| mp_power_set.test | RUN | 0.218483 | 1.836564 | 0.972827 | 0.001808 | 0.001810 | 0.001690 |
| mp_partial_sum.test | RUN | 0.289404 | 2.470288 | 1.118046 | 0.001610 | 0.001712 | 0.001701 |
| mp_iterate.test | RUN | 0.195499 | 0.750261 | 0.807328 | 0.001528 | 0.001870 | 0.001757 |
| mp_pairwise_fold.test | RUN | 0.218949 | 1.697797 | 0.994277 | 0.001584 | 0.001743 | 0.001694 |
| mp_pairwise_fold_q.test | RUN | 0.172599 | 0.505896 | 0.580816 | 0.001797 | 0.001481 | 0.001556 |
| mp_sliding_fold.test | RUN | 0.416566 | 3.254559 | 1.806329 | 0.001656 | 0.001629 | 0.001702 |
| mp_sliding_fold_q.test | RUN | 0.417098 | 3.266695 | 1.833976 | 0.001512 | 0.001655 | 0.001788 |
| mp_intersperse.test | RUN | 0.210226 | 1.240987 | 0.888184 | 0.001724 | 0.001840 | 0.001726 |
| mp_split.test | RUN | 0.290921 | 2.335868 | 1.221326 | 0.001651 | 0.001832 | 0.001677 |
| mp_join.test | RUN | 0.234755 | 1.970600 | 1.051605 | 0.001758 | 0.001902 | 0.001635 |
| integral.test | RUN | 0.175955 | 0.868520 | 0.653227 | 0.001356 | 0.001606 | 0.001832 |
| mp_value.test | RUN | 0.012613 | 0.031521 | 0.045187 | 0.000669 | 0.000682 | 0.001729 |
| mp_identity.test | RUN | 0.170651 | 0.806960 | 0.615892 | 0.001753 | 0.001706 | 0.001723 |
| mp_inherit.test | RUN | 0.165486 | 0.574102 | 0.590425 | 0.001662 | 0.001734 | 0.001733 |
| mp_if.test | RUN | 0.164825 | 0.652372 | 0.585179 | 0.001833 | 0.001874 | 0.001784 |
| mp_if_sf.test | RUN | 0.157949 | 0.479451 | 0.529433 | 0.001792 | 0.001531 | 0.001692 |
| mp_eval_if.test | RUN | 0.169939 | 0.709162 | 0.616469 | 0.001623 | 0.001615 | 0.001574 |
| mp_eval_if_sf.test | RUN | 0.161973 | 0.517987 | 0.563898 | 0.001678 | 0.001675 | 0.001820 |
| mp_valid.test | RUN | 0.161458 | 0.504902 | 0.547873 | 0.001792 | 0.001612 | 0.001653 |
| mp_defer.test | RUN | 0.178714 | 0.854671 | 0.653229 | 0.001843 | 0.001835 | 0.001788 |
| mp_quote.test | RUN | 0.178250 | 0.864328 | 0.696181 | 0.001743 | 0.001858 | 0.001616 |
| mp_invoke_q.test | RUN | 0.197770 | 1.138512 | 0.779034 | 0.001668 | 0.001788 | 0.001594 |
| mp_invoke_q_sf.test | RUN | 0.161666 | 0.500404 | 0.512053 | 0.001488 | 0.001847 | 0.001776 |
| mp_quote_trait.test | RUN | 0.179659 | 0.944982 | 0.666042 | 0.001698 | 0.001682 | 0.001536 |
| mp_cond.test | RUN | 0.161968 | 0.568101 | 0.587448 | 0.001568 | 0.001719 | 0.001562 |
| mp_cond_sf.test | RUN | 0.161728 | 0.512702 | 0.542488 | 0.001568 | 0.001545 | 0.001711 |
| mp_not_fn.test | RUN | 0.164115 | 0.492475 | 0.545583 | 0.001605 | 0.001901 | 0.001606 |
| mp_eval_if_not.test | RUN | 0.170166 | 0.708758 | 0.615059 | 0.001790 | 0.001896 | 0.001489 |
| mp_eval_or.test | RUN | 0.162223 | 0.404835 | 0.569260 | 0.001743 | 0.001602 | 0.001778 |
| mp_compose.test | RUN | 0.187341 | 1.139874 | 0.737636 | 0.001714 | 0.001711 | 0.001631 |
| mp_valid_and_true.test | RUN | 0.162778 | 0.600634 | 0.602681 | 0.001976 | 0.001788 | 0.001465 |
| mp_compose_sf.test | COMPILE | 0.039806 | 0.071515 | 0.131403 | — | — | — |
| integer_sequence.test | RUN | 0.198017 | 1.126791 | 0.782607 | 0.001529 | 0.001827 | 0.001607 |
| tuple_for_each.test | RUN | 0.164818 | 0.438305 | 0.603358 | 0.001592 | 0.001497 | 0.001629 |
| tuple_for_each_cx.test | COMPILE | 0.031912 | 0.063832 | 0.108087 | — | — | — |
| tuple_apply.test | RUN | 0.164547 | 0.443858 | 0.634173 | 0.001668 | 0.001657 | 0.001809 |
| tuple_apply_cx.test | COMPILE | 0.044125 | 0.092004 | 0.154945 | — | — | — |
| construct_from_tuple.test | RUN | 0.169121 | 0.484508 | 0.598959 | 0.001639 | 0.001664 | 0.001568 |
| construct_from_tuple_cx.test | COMPILE | 0.044908 | 0.090875 | 0.132136 | — | — | — |
| tuple_transform.test | RUN | 0.270512 | 0.960869 | 1.162613 | 0.001826 | 0.001598 | 0.001605 |
| tuple_transform_2.test | RUN | 0.240631 | 0.699514 | 1.069274 | 0.001793 | 0.001809 | 0.001879 |
| tuple_transform_cx.test | COMPILE | 0.040350 | 0.086523 | 0.149569 | — | — | — |
| mp_set_contains.test | RUN | 0.170932 | 0.611534 | 0.622084 | 0.001731 | 0.001472 | 0.001676 |
| mp_set_push_back.test | RUN | 0.221222 | 1.849868 | 0.996936 | 0.001730 | 0.001828 | 0.001839 |
| mp_set_push_front.test | RUN | 0.280816 | 2.209923 | 1.136694 | 0.001633 | 0.001973 | 0.001428 |
| mp_is_set.test | RUN | 0.171631 | 0.614537 | 0.590685 | 0.001871 | 0.001808 | 0.001716 |
| mp_set_union.test | RUN | 0.218103 | 1.566870 | 0.963252 | 0.001846 | 0.001872 | 0.001732 |
| mp_set_union_sf.test | RUN | 0.169315 | 0.493670 | 0.543299 | 0.001568 | 0.001729 | 0.001722 |
| mp_set_difference.test | RUN | 0.198166 | 1.232423 | 0.792800 | 0.001725 | 0.001655 | 0.001364 |
| mp_set_difference_sf.test | RUN | 0.166712 | 0.481660 | 0.556749 | 0.001640 | 0.001848 | 0.001662 |
| mp_set_intersection.test | RUN | 0.194732 | 1.212207 | 0.785729 | 0.001760 | 0.001687 | 0.001764 |
| mp_set_intersection_sf.test | RUN | 0.163569 | 0.493202 | 0.553372 | 0.001425 | 0.001827 | 0.001786 |
| mp_all.test | RUN | 0.168786 | 0.601686 | 0.604781 | 0.001699 | 0.001653 | 0.001755 |
| mp_all_2.test | RUN | 0.471350 | 1.296934 | 1.313868 | 0.001794 | 0.001732 | 0.001782 |
| mp_and.test | RUN | 0.169177 | 0.589249 | 0.604122 | 0.001636 | 0.002142 | 0.001709 |
| mp_any.test | RUN | 0.170287 | 0.615002 | 0.554568 | 0.001526 | 0.001940 | 0.001654 |
| mp_any_2.test | RUN | 0.466283 | 1.291070 | 1.339841 | 0.001314 | 0.001870 | 0.001311 |
| mp_or.test | RUN | 0.176609 | 0.616001 | 0.618234 | 0.001722 | 0.001709 | 0.001723 |
| mp_same.test | RUN | 0.316575 | 1.019581 | 0.924633 | 0.001634 | 0.001596 | 0.001808 |
| mp_plus.test | RUN | 0.180711 | 0.694246 | 0.618259 | 0.001510 | 0.001331 | 0.001471 |
| mp_less.test | RUN | 0.169027 | 0.538023 | 0.556416 | 0.001575 | 0.001814 | 0.001742 |
| mp_min.test | RUN | 0.165510 | 0.529692 | 0.596737 | 0.001524 | 0.001782 | 0.001958 |
| mp_max.test | RUN | 0.167560 | 0.598886 | 0.608044 | 0.001658 | 0.001904 | 0.001615 |
| mp_similar.test | RUN | 0.166674 | 0.611285 | 0.577193 | 0.001441 | 0.001750 | 0.001164 |
| mp_map_find.test | RUN | 0.193842 | 1.092993 | 0.775379 | 0.001588 | 0.001589 | 0.001669 |
| mp_map_find_2.test | RUN | 0.183593 | 0.428516 | 0.658170 | 0.001363 | 0.001822 | 0.001616 |
| mp_map_find_3.test | RUN | 0.179027 | 0.427276 | 0.682057 | 0.001472 | 0.001342 | 0.001442 |
| mp_map_find_4.test | RUN | 0.170157 | 0.366391 | 0.622101 | 0.001322 | 0.001551 | 0.001371 |
| mp_map_contains.test | RUN | 0.178139 | 0.543863 | 0.616435 | 0.001683 | 0.001817 | 0.001773 |
| mp_map_insert.test | RUN | 0.226761 | 2.030980 | 1.072318 | 0.001766 | 0.001858 | 0.001467 |
| mp_map_replace.test | RUN | 0.298524 | 2.323920 | 1.217833 | 0.001694 | 0.001750 | 0.001407 |
| mp_map_erase.test | RUN | 0.222140 | 1.722019 | 1.045299 | 0.001384 | 0.001880 | 0.001634 |
| mp_map_update.test | RUN | 0.201809 | 1.135236 | 0.813658 | 0.001686 | 0.001835 | 0.001658 |
| mp_map_update_q.test | RUN | 0.198619 | 1.135871 | 0.814354 | 0.001276 | 0.001699 | 0.001450 |
| mp_map_keys.test | RUN | 0.195355 | 1.010431 | 0.794877 | 0.001762 | 0.001815 | 0.001555 |
| mp_is_map.test | RUN | 0.181265 | 0.632721 | 0.655158 | 0.001402 | 0.001707 | 0.001646 |
| mp_bind.test | RUN | 0.214863 | 1.796822 | 0.928720 | 0.001618 | 0.001632 | 0.001820 |
| mp_bind_q.test | RUN | 0.191696 | 1.129011 | 0.778366 | 0.001552 | 0.001796 | 0.001666 |
| mp_bind_front.test | RUN | 0.188809 | 1.236485 | 0.760918 | 0.001518 | 0.001538 | 0.001389 |
| mp_bind_back.test | RUN | 0.194879 | 1.242853 | 0.727159 | 0.001581 | 0.001778 | 0.001583 |
| mp_lambda.test | RUN | 0.415943 | 3.709625 | 1.869566 | 0.001501 | 0.001314 | 0.001817 |
| mpl.test | RUN | 0.381355 | 0.988512 | 1.515096 | 0.001502 | 0.001862 | 0.001672 |
| mpl_list.test | RUN | 0.211936 | 0.748877 | 0.734084 | 0.001630 | 0.001718 | 0.001644 |
| mpl_tuple.test | RUN | 0.219430 | 0.747248 | 0.728939 | 0.001729 | 0.001710 | 0.001584 |
| version.test | RUN | 0.110619 | 0.270423 | 0.385110 | 0.001647 | 0.001752 | 0.001713 |
| mp11_version.test | RUN | 0.132270 | 0.317629 | 0.412031 | 0.001581 | 0.001751 | 0.001601 |
| list_version.test | RUN | 0.111789 | 0.279277 | 0.369393 | 0.001417 | 0.001767 | 0.001808 |
| algorithm_version.test | RUN | 0.125452 | 0.296648 | 0.397137 | 0.001797 | 0.001808 | 0.001610 |
| integral_version.test | RUN | 0.112175 | 0.274202 | 0.376484 | 0.001738 | 0.001737 | 0.001411 |
| utility_version.test | RUN | 0.112387 | 0.279558 | 0.398660 | 0.001624 | 0.001738 | 0.001602 |
| function_version.test | RUN | 0.114437 | 0.281545 | 0.388097 | 0.001523 | 0.001718 | 0.001749 |
| map_version.test | RUN | 0.129098 | 0.298823 | 0.416328 | 0.001606 | 0.001564 | 0.001504 |
| set_version.test | RUN | 0.112759 | 0.287471 | 0.370262 | 0.001608 | 0.001641 | 0.001583 |
| bind_version.test | RUN | 0.124338 | 0.300188 | 0.415806 | 0.001302 | 0.001784 | 0.001692 |
| integer_sequence_version.test | RUN | 0.108947 | 0.275489 | 0.353553 | 0.001633 | 0.001616 | 0.001815 |
| tuple_version.test | RUN | 0.126612 | 0.300319 | 0.315052 | 0.001425 | 0.001831 | 0.001288 |
| mpl_version.test | RUN | 0.100610 | 0.257707 | 0.315583 | 0.001326 | 0.001418 | 0.001208 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 1.001× | 1.002×, 1.001× | 1.003× |
| clang | 1.077× | 1.059×, 1.094× | 1.033× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1363 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/43916760662).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| algorithm_version.test | 10 | 0.001005s | 0.000953s | 0.001005s | byte equality observed |
| bind_version.test | 10 | 0.001021s | 0.000976s | 0.001015s | byte equality observed |
| construct_from_tuple.test | 10 | 0.001030s | 0.000982s | 0.001014s | byte equality observed |
| function_version.test | 10 | 0.000990s | 0.000974s | 0.001054s | byte equality observed |
| integer_sequence.test | 10 | 0.000980s | 0.001000s | 0.001029s | byte equality observed |
| integer_sequence_version.test | 10 | 0.001002s | 0.000987s | 0.000985s | byte equality observed |
| integral.test | 10 | 0.000992s | 0.001000s | 0.001004s | byte equality observed |
| integral_version.test | 10 | 0.000997s | 0.000977s | 0.001026s | byte equality observed |
| list_version.test | 10 | 0.000985s | 0.000973s | 0.001034s | byte equality observed |
| map_version.test | 10 | 0.001038s | 0.000951s | 0.000993s | byte equality observed |
| mp11_version.test | 10 | 0.000993s | 0.000991s | 0.000989s | byte equality observed |
| mp_all.test | 10 | 0.000979s | 0.001001s | 0.001030s | byte equality observed |
| mp_all_2.test | 10 | 0.001002s | 0.001043s | 0.000994s | byte equality observed |
| mp_all_of.test | 10 | 0.001003s | 0.000993s | 0.001006s | byte equality observed |
| mp_all_of_q.test | 10 | 0.000985s | 0.001015s | 0.000994s | byte equality observed |
| mp_and.test | 10 | 0.001016s | 0.000990s | 0.001024s | byte equality observed |
| mp_any.test | 10 | 0.001004s | 0.001019s | 0.001012s | byte equality observed |
| mp_any_2.test | 10 | 0.001004s | 0.000994s | 0.001003s | byte equality observed |
| mp_any_of.test | 10 | 0.000997s | 0.001005s | 0.001009s | byte equality observed |
| mp_any_of_q.test | 10 | 0.000986s | 0.001011s | 0.000998s | byte equality observed |
| mp_append.test | 10 | 0.000990s | 0.001028s | 0.000998s | byte equality observed |
| mp_append_2.test | 10 | 0.001046s | 0.001007s | 0.001014s | byte equality observed |
| mp_append_3.test | 10 | 0.000472s | 0.000461s | 0.000963s | byte equality observed |
| mp_append_sf.test | 10 | 0.001026s | 0.001068s | 0.001011s | byte equality observed |
| mp_apply_q.test | 10 | 0.001015s | 0.001035s | 0.000999s | byte equality observed |
| mp_apply_q_sf.test | 10 | 0.001001s | 0.001032s | 0.001022s | byte equality observed |
| mp_assign.test | 10 | 0.001022s | 0.001038s | 0.000999s | byte equality observed |
| mp_assign_2.test | 10 | 0.000456s | 0.000456s | 0.000996s | byte equality observed |
| mp_at.test | 10 | 0.001031s | 0.001031s | 0.000998s | byte equality observed |
| mp_at_2.test | 10 | 0.000463s | 0.000462s | 0.000993s | byte equality observed |
| mp_at_sf.test | 10 | 0.000995s | 0.001032s | 0.001008s | byte equality observed |
| mp_back.test | 10 | 0.000992s | 0.001049s | 0.000987s | byte equality observed |
| mp_back_2.test | 10 | 0.000454s | 0.000467s | 0.000977s | byte equality observed |
| mp_bind.test | 10 | 0.001051s | 0.001036s | 0.000995s | byte equality observed |
| mp_bind_back.test | 10 | 0.001008s | 0.001031s | 0.000986s | byte equality observed |
| mp_bind_front.test | 10 | 0.001009s | 0.001035s | 0.001021s | byte equality observed |
| mp_bind_q.test | 10 | 0.000988s | 0.001005s | 0.000962s | byte equality observed |
| mp_clear.test | 10 | 0.001015s | 0.001037s | 0.000976s | byte equality observed |
| mp_clear_2.test | 10 | 0.000462s | 0.000471s | 0.000972s | byte equality observed |
| mp_compose.test | 10 | 0.000996s | 0.001042s | 0.001015s | byte equality observed |
| mp_cond.test | 10 | 0.001010s | 0.001029s | 0.001007s | byte equality observed |
| mp_cond_sf.test | 10 | 0.001000s | 0.001022s | 0.000988s | byte equality observed |
| mp_contains.test | 10 | 0.001010s | 0.001025s | 0.001004s | byte equality observed |
| mp_copy_if.test | 10 | 0.001014s | 0.001028s | 0.001029s | byte equality observed |
| mp_copy_if_q.test | 10 | 0.001016s | 0.001030s | 0.000991s | byte equality observed |
| mp_count.test | 10 | 0.001030s | 0.001068s | 0.001027s | byte equality observed |
| mp_count_if.test | 10 | 0.001028s | 0.001057s | 0.001008s | byte equality observed |
| mp_count_if_q.test | 10 | 0.000979s | 0.001033s | 0.000996s | byte equality observed |
| mp_defer.test | 10 | 0.001008s | 0.001002s | 0.001007s | byte equality observed |
| mp_drop.test | 10 | 0.001028s | 0.001050s | 0.000991s | byte equality observed |
| mp_drop_2.test | 10 | 0.000454s | 0.000458s | 0.001019s | byte equality observed |
| mp_empty.test | 10 | 0.001028s | 0.001043s | 0.000991s | byte equality observed |
| mp_empty_2.test | 10 | 0.000456s | 0.000466s | 0.001000s | byte equality observed |
| mp_erase.test | 10 | 0.001057s | 0.001045s | 0.000995s | byte equality observed |
| mp_erase_2.test | 10 | 0.000466s | 0.000458s | 0.000984s | byte equality observed |
| mp_eval_if.test | 10 | 0.001009s | 0.001008s | 0.001002s | byte equality observed |
| mp_eval_if_not.test | 10 | 0.001002s | 0.001000s | 0.001001s | byte equality observed |
| mp_eval_if_sf.test | 10 | 0.001018s | 0.000995s | 0.001012s | byte equality observed |
| mp_eval_or.test | 10 | 0.001003s | 0.001009s | 0.000975s | byte equality observed |
| mp_fill.test | 10 | 0.001010s | 0.001035s | 0.001004s | byte equality observed |
| mp_fill_2.test | 10 | 0.000463s | 0.000473s | 0.000968s | byte equality observed |
| mp_filter.test | 10 | 0.000999s | 0.001019s | 0.001026s | byte equality observed |
| mp_find.test | 10 | 0.001000s | 0.000998s | 0.000997s | byte equality observed |
| mp_find_if.test | 10 | 0.001004s | 0.001005s | 0.001015s | byte equality observed |
| mp_find_if_q.test | 10 | 0.000984s | 0.001027s | 0.000989s | byte equality observed |
| mp_flatten.test | 10 | 0.000994s | 0.000998s | 0.001014s | byte equality observed |
| mp_fold.test | 10 | 0.001037s | 0.001000s | 0.001008s | byte equality observed |
| mp_fold_q.test | 10 | 0.001009s | 0.001008s | 0.001012s | byte equality observed |
| mp_fold_q_sf.test | 10 | 0.001004s | 0.000984s | 0.001030s | byte equality observed |
| mp_for_each.test | 10 | 0.001023s | 0.001012s | 0.000986s | byte equality observed |
| mp_from_sequence.test | 10 | 0.000994s | 0.001004s | 0.001041s | byte equality observed |
| mp_from_sequence_2.test | 10 | 0.001006s | 0.000991s | 0.001002s | byte equality observed |
| mp_from_sequence_3.test | 10 | 0.000975s | 0.001025s | 0.001007s | byte equality observed |
| mp_front.test | 10 | 0.001007s | 0.001061s | 0.001002s | byte equality observed |
| mp_front_2.test | 10 | 0.000463s | 0.000457s | 0.000981s | byte equality observed |
| mp_identity.test | 10 | 0.001012s | 0.001032s | 0.000982s | byte equality observed |
| mp_if.test | 10 | 0.001011s | 0.001033s | 0.000999s | byte equality observed |
| mp_if_sf.test | 10 | 0.001024s | 0.001026s | 0.001004s | byte equality observed |
| mp_inherit.test | 10 | 0.001003s | 0.001009s | 0.001014s | byte equality observed |
| mp_insert.test | 10 | 0.001044s | 0.001055s | 0.000984s | byte equality observed |
| mp_insert_2.test | 10 | 0.000461s | 0.000467s | 0.001004s | byte equality observed |
| mp_intersperse.test | 10 | 0.001018s | 0.001022s | 0.001009s | byte equality observed |
| mp_invoke_q.test | 10 | 0.001005s | 0.001023s | 0.000996s | byte equality observed |
| mp_invoke_q_sf.test | 10 | 0.001003s | 0.000992s | 0.001019s | byte equality observed |
| mp_iota.test | 10 | 0.000997s | 0.001002s | 0.001022s | byte equality observed |
| mp_iota_2.test | 10 | 0.001003s | 0.001033s | 0.001012s | byte equality observed |
| mp_is_list.test | 10 | 0.000998s | 0.001049s | 0.001021s | byte equality observed |
| mp_is_map.test | 10 | 0.001013s | 0.001005s | 0.001010s | byte equality observed |
| mp_is_set.test | 10 | 0.001013s | 0.001012s | 0.001012s | byte equality observed |
| mp_is_value_list.test | 10 | 0.000985s | 0.000989s | 0.001013s | byte equality observed |
| mp_iterate.test | 10 | 0.001001s | 0.000996s | 0.001027s | byte equality observed |
| mp_join.test | 10 | 0.001004s | 0.001002s | 0.001000s | byte equality observed |
| mp_lambda.test | 10 | 0.001032s | 0.001028s | 0.001021s | byte equality observed |
| mp_less.test | 10 | 0.001000s | 0.001016s | 0.000988s | byte equality observed |
| mp_list_c.test | 10 | 0.001015s | 0.001030s | 0.001009s | byte equality observed |
| mp_list_v.test | 10 | 0.000471s | 0.000465s | 0.000997s | byte equality observed |
| mp_map_contains.test | 10 | 0.001033s | 0.000995s | 0.001002s | byte equality observed |
| mp_map_erase.test | 10 | 0.001010s | 0.001040s | 0.000965s | byte equality observed |
| mp_map_find.test | 10 | 0.000997s | 0.001015s | 0.000995s | byte equality observed |
| mp_map_find_2.test | 10 | 0.000997s | 0.001060s | 0.000999s | byte equality observed |
| mp_map_find_3.test | 10 | 0.000987s | 0.001039s | 0.001057s | byte equality observed |
| mp_map_find_4.test | 10 | 0.000988s | 0.001035s | 0.001011s | byte equality observed |
| mp_map_insert.test | 10 | 0.001000s | 0.001034s | 0.001003s | byte equality observed |
| mp_map_keys.test | 10 | 0.001010s | 0.001006s | 0.001017s | byte equality observed |
| mp_map_replace.test | 10 | 0.001015s | 0.001046s | 0.000987s | byte equality observed |
| mp_map_update.test | 10 | 0.000994s | 0.000998s | 0.001001s | byte equality observed |
| mp_map_update_q.test | 10 | 0.000995s | 0.001022s | 0.001005s | byte equality observed |
| mp_max.test | 10 | 0.000984s | 0.001042s | 0.001026s | byte equality observed |
| mp_max_element.test | 10 | 0.001012s | 0.001005s | 0.001003s | byte equality observed |
| mp_max_element_2.test | 10 | 0.000458s | 0.000462s | 0.001004s | byte equality observed |
| mp_max_element_q.test | 10 | 0.001037s | 0.001034s | 0.001013s | byte equality observed |
| mp_max_element_q_2.test | 10 | 0.000455s | 0.000465s | 0.001005s | byte equality observed |
| mp_min.test | 10 | 0.001016s | 0.000985s | 0.001033s | byte equality observed |
| mp_min_element.test | 10 | 0.001004s | 0.001008s | 0.001010s | byte equality observed |
| mp_min_element_2.test | 10 | 0.000464s | 0.000468s | 0.000988s | byte equality observed |
| mp_min_element_q.test | 10 | 0.001035s | 0.001049s | 0.001019s | byte equality observed |
| mp_min_element_q_2.test | 10 | 0.000471s | 0.000458s | 0.000997s | byte equality observed |
| mp_none_of.test | 10 | 0.000986s | 0.001001s | 0.001004s | byte equality observed |
| mp_none_of_q.test | 10 | 0.000993s | 0.001036s | 0.001059s | byte equality observed |
| mp_not_fn.test | 10 | 0.000986s | 0.001023s | 0.000999s | byte equality observed |
| mp_nth_element.test | 10 | 0.000995s | 0.001017s | 0.000997s | byte equality observed |
| mp_nth_element_q.test | 10 | 0.001004s | 0.001065s | 0.001027s | byte equality observed |
| mp_or.test | 10 | 0.001008s | 0.000992s | 0.000980s | byte equality observed |
| mp_pairwise_fold.test | 10 | 0.001007s | 0.000992s | 0.001036s | byte equality observed |
| mp_pairwise_fold_q.test | 10 | 0.001010s | 0.001005s | 0.000983s | byte equality observed |
| mp_partial_sum.test | 10 | 0.001025s | 0.001050s | 0.001008s | byte equality observed |
| mp_partition.test | 10 | 0.001011s | 0.001047s | 0.001028s | byte equality observed |
| mp_partition_q.test | 10 | 0.001013s | 0.001018s | 0.001013s | byte equality observed |
| mp_plus.test | 10 | 0.000990s | 0.001032s | 0.001026s | byte equality observed |
| mp_pop_back.test | 10 | 0.001047s | 0.001067s | 0.001009s | byte equality observed |
| mp_pop_back_2.test | 10 | 0.000460s | 0.000462s | 0.000995s | byte equality observed |
| mp_pop_front.test | 10 | 0.001021s | 0.001023s | 0.000999s | byte equality observed |
| mp_pop_front_2.test | 10 | 0.000465s | 0.000464s | 0.000988s | byte equality observed |
| mp_power_set.test | 10 | 0.000998s | 0.001027s | 0.001011s | byte equality observed |
| mp_product.test | 10 | 0.001000s | 0.001050s | 0.001014s | byte equality observed |
| mp_push_back.test | 10 | 0.001026s | 0.001044s | 0.000992s | byte equality observed |
| mp_push_back_2.test | 10 | 0.000463s | 0.000463s | 0.001004s | byte equality observed |
| mp_push_front.test | 10 | 0.001025s | 0.001031s | 0.001008s | byte equality observed |
| mp_push_front_2.test | 10 | 0.000468s | 0.000463s | 0.000993s | byte equality observed |
| mp_quote.test | 10 | 0.000992s | 0.001048s | 0.001029s | byte equality observed |
| mp_quote_trait.test | 10 | 0.001007s | 0.001013s | 0.001009s | byte equality observed |
| mp_remove.test | 10 | 0.001000s | 0.001003s | 0.001034s | byte equality observed |
| mp_remove_if.test | 10 | 0.001031s | 0.001018s | 0.001019s | byte equality observed |
| mp_remove_if_q.test | 10 | 0.000988s | 0.001022s | 0.001050s | byte equality observed |
| mp_rename.test | 10 | 0.001014s | 0.001083s | 0.001045s | byte equality observed |
| mp_rename_2.test | 10 | 0.000466s | 0.000478s | 0.000985s | byte equality observed |
| mp_rename_v.test | 10 | 0.000461s | 0.000475s | 0.000982s | byte equality observed |
| mp_repeat.test | 10 | 0.001054s | 0.001090s | 0.001002s | byte equality observed |
| mp_repeat_2.test | 10 | 0.000466s | 0.000463s | 0.000992s | byte equality observed |
| mp_repeat_3.test | 10 | 0.001004s | 0.001027s | 0.001006s | byte equality observed |
| mp_replace.test | 10 | 0.000998s | 0.001027s | 0.001014s | byte equality observed |
| mp_replace_at.test | 10 | 0.001010s | 0.001005s | 0.001031s | byte equality observed |
| mp_replace_at_c.test | 10 | 0.001011s | 0.001002s | 0.001011s | byte equality observed |
| mp_replace_front.test | 10 | 0.001023s | 0.001099s | 0.000993s | byte equality observed |
| mp_replace_front_2.test | 10 | 0.000462s | 0.000467s | 0.001006s | byte equality observed |
| mp_replace_if.test | 10 | 0.000999s | 0.001035s | 0.001009s | byte equality observed |
| mp_replace_if_q.test | 10 | 0.000990s | 0.001031s | 0.000998s | byte equality observed |
| mp_replace_second.test | 10 | 0.001036s | 0.001047s | 0.000997s | byte equality observed |
| mp_replace_second_2.test | 10 | 0.000457s | 0.000470s | 0.000969s | byte equality observed |
| mp_replace_third.test | 10 | 0.001025s | 0.001010s | 0.000996s | byte equality observed |
| mp_replace_third_2.test | 10 | 0.000462s | 0.000476s | 0.000981s | byte equality observed |
| mp_reverse.test | 10 | 0.001026s | 0.001030s | 0.001022s | byte equality observed |
| mp_reverse_fold.test | 10 | 0.001043s | 0.001061s | 0.001024s | byte equality observed |
| mp_reverse_fold_q.test | 10 | 0.001011s | 0.001038s | 0.000998s | byte equality observed |
| mp_rotate_left.test | 10 | 0.001022s | 0.001032s | 0.001010s | byte equality observed |
| mp_rotate_right.test | 10 | 0.001016s | 0.001002s | 0.000991s | byte equality observed |
| mp_same.test | 10 | 0.001038s | 0.001046s | 0.000974s | byte equality observed |
| mp_second.test | 10 | 0.001022s | 0.001029s | 0.001000s | byte equality observed |
| mp_second_2.test | 10 | 0.000470s | 0.000455s | 0.001000s | byte equality observed |
| mp_set_contains.test | 10 | 0.001015s | 0.001006s | 0.000991s | byte equality observed |
| mp_set_difference.test | 10 | 0.001018s | 0.000993s | 0.000983s | byte equality observed |
| mp_set_difference_sf.test | 10 | 0.001014s | 0.001000s | 0.000991s | byte equality observed |
| mp_set_intersection.test | 10 | 0.001036s | 0.000984s | 0.000997s | byte equality observed |
| mp_set_intersection_sf.test | 10 | 0.000994s | 0.000988s | 0.001001s | byte equality observed |
| mp_set_push_back.test | 10 | 0.001007s | 0.001051s | 0.000999s | byte equality observed |
| mp_set_push_front.test | 10 | 0.001033s | 0.001061s | 0.001012s | byte equality observed |
| mp_set_union.test | 10 | 0.001027s | 0.001026s | 0.001005s | byte equality observed |
| mp_set_union_sf.test | 10 | 0.001009s | 0.001002s | 0.001009s | byte equality observed |
| mp_similar.test | 10 | 0.000995s | 0.000989s | 0.001026s | byte equality observed |
| mp_size.test | 10 | 0.001014s | 0.001036s | 0.000991s | byte equality observed |
| mp_size_2.test | 10 | 0.000466s | 0.000467s | 0.000987s | byte equality observed |
| mp_slice.test | 10 | 0.001048s | 0.001041s | 0.000999s | byte equality observed |
| mp_slice_2.test | 10 | 0.000465s | 0.000460s | 0.001006s | byte equality observed |
| mp_sliding_fold.test | 10 | 0.001031s | 0.001056s | 0.001008s | byte equality observed |
| mp_sliding_fold_q.test | 10 | 0.001010s | 0.001031s | 0.000994s | byte equality observed |
| mp_sort.test | 10 | 0.001023s | 0.000998s | 0.001010s | byte equality observed |
| mp_sort_q.test | 10 | 0.001041s | 0.001050s | 0.000987s | byte equality observed |
| mp_split.test | 10 | 0.001057s | 0.001013s | 0.000985s | byte equality observed |
| mp_starts_with.test | 10 | 0.001030s | 0.001012s | 0.000974s | byte equality observed |
| mp_starts_with_sf.test | 10 | 0.000998s | 0.001038s | 0.001004s | byte equality observed |
| mp_take.test | 10 | 0.001005s | 0.001027s | 0.000998s | byte equality observed |
| mp_take_2.test | 10 | 0.000461s | 0.000452s | 0.001011s | byte equality observed |
| mp_third.test | 10 | 0.001041s | 0.001015s | 0.000982s | byte equality observed |
| mp_third_2.test | 10 | 0.000470s | 0.000461s | 0.000995s | byte equality observed |
| mp_transform.test | 10 | 0.001045s | 0.000997s | 0.000999s | byte equality observed |
| mp_transform_2.test | 10 | 0.000990s | 0.001003s | 0.000990s | byte equality observed |
| mp_transform_front.test | 10 | 0.001041s | 0.001031s | 0.001005s | byte equality observed |
| mp_transform_front_2.test | 10 | 0.000469s | 0.000465s | 0.000987s | byte equality observed |
| mp_transform_if.test | 10 | 0.001033s | 0.001045s | 0.000995s | byte equality observed |
| mp_transform_if_q.test | 10 | 0.001008s | 0.001036s | 0.001002s | byte equality observed |
| mp_transform_q.test | 10 | 0.001038s | 0.001014s | 0.001009s | byte equality observed |
| mp_transform_q_2.test | 10 | 0.001021s | 0.001006s | 0.001019s | byte equality observed |
| mp_transform_second.test | 10 | 0.001057s | 0.001025s | 0.001013s | byte equality observed |
| mp_transform_second_2.test | 10 | 0.000480s | 0.000467s | 0.001006s | byte equality observed |
| mp_transform_sf.test | 10 | 0.001004s | 0.001041s | 0.001016s | byte equality observed |
| mp_transform_third.test | 10 | 0.001048s | 0.001048s | 0.001011s | byte equality observed |
| mp_transform_third_2.test | 10 | 0.000467s | 0.000467s | 0.000997s | byte equality observed |
| mp_unique.test | 10 | 0.001003s | 0.001048s | 0.000995s | byte equality observed |
| mp_unique_if.test | 10 | 0.001011s | 0.001035s | 0.000993s | byte equality observed |
| mp_unique_if_q.test | 10 | 0.001043s | 0.001024s | 0.000983s | byte equality observed |
| mp_valid.test | 10 | 0.001035s | 0.001025s | 0.001030s | byte equality observed |
| mp_valid_and_true.test | 10 | 0.001026s | 0.001042s | 0.000994s | byte equality observed |
| mp_value.test | 10 | 0.000468s | 0.000466s | 0.000979s | byte equality observed |
| mp_with_index.test | 10 | 0.001385s | 0.001333s | 0.001275s | byte equality observed |
| mp_with_index_cx.test | 10 | 0.000463s | 0.000464s | 0.000964s | byte equality observed |
| mpl.test | 10 | 0.001028s | 0.001007s | 0.001015s | byte equality observed |
| mpl_list.test | 10 | 0.001016s | 0.001010s | 0.001001s | byte equality observed |
| mpl_tuple.test | 10 | 0.001004s | 0.001038s | 0.000996s | byte equality observed |
| mpl_version.test | 10 | 0.000996s | 0.001029s | 0.000996s | byte equality observed |
| set_version.test | 10 | 0.001018s | 0.000996s | 0.001004s | byte equality observed |
| tuple_apply.test | 10 | 0.001039s | 0.001030s | 0.001006s | byte equality observed |
| tuple_for_each.test | 10 | 0.001011s | 0.000994s | 0.001024s | byte equality observed |
| tuple_transform.test | 10 | 0.001011s | 0.001000s | 0.001012s | byte equality observed |
| tuple_transform_2.test | 10 | 0.001017s | 0.001008s | 0.000990s | byte equality observed |
| tuple_version.test | 10 | 0.001013s | 0.000995s | 0.001000s | byte equality observed |
| utility_version.test | 10 | 0.001020s | 0.001006s | 0.000988s | byte equality observed |
| version.test | 10 | 0.001016s | 0.001003s | 0.000981s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/43916760662).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
