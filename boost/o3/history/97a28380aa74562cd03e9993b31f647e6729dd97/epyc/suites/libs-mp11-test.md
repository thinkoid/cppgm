# libs/mp11/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| mp11.test | COMPILE | 0.029143 | 0.055101 | 0.071376 | — | — | — |
| complex_h.test | COMPILE | 0.116317 | 0.235968 | 0.317630 | — | — | — |
| mp_size.test | RUN | 0.139201 | 0.724579 | 0.420553 | 0.001418 | 0.001698 | 0.001996 |
| mp_size_2.test | RUN | 0.012746 | 0.028418 | 0.039535 | 0.000578 | 0.000707 | 0.001159 |
| mp_empty.test | RUN | 0.132120 | 0.464316 | 0.379296 | 0.001281 | 0.001478 | 0.001272 |
| mp_empty_2.test | RUN | 0.012795 | 0.028878 | 0.041704 | 0.000555 | 0.000679 | 0.001434 |
| mp_assign.test | RUN | 0.148641 | 0.994028 | 0.538367 | 0.001441 | 0.001639 | 0.001316 |
| mp_assign_2.test | RUN | 0.014098 | 0.031114 | 0.041843 | 0.000449 | 0.000733 | 0.001240 |
| mp_clear.test | RUN | 0.131674 | 0.437664 | 0.405848 | 0.001604 | 0.001595 | 0.001311 |
| mp_clear_2.test | RUN | 0.012475 | 0.028096 | 0.040911 | 0.000689 | 0.000734 | 0.001432 |
| mp_front.test | RUN | 0.134009 | 0.659613 | 0.423917 | 0.001377 | 0.001632 | 0.001414 |
| mp_front_2.test | RUN | 0.011590 | 0.029847 | 0.042676 | 0.000542 | 0.000763 | 0.001388 |
| mp_pop_front.test | RUN | 0.136184 | 0.680455 | 0.420755 | 0.001532 | 0.001250 | 0.001327 |
| mp_pop_front_2.test | RUN | 0.012824 | 0.029037 | 0.037133 | 0.000536 | 0.000669 | 0.001463 |
| mp_second.test | RUN | 0.132089 | 0.436078 | 0.416292 | 0.001409 | 0.001623 | 0.001222 |
| mp_second_2.test | RUN | 0.012358 | 0.028700 | 0.042485 | 0.000483 | 0.000646 | 0.001584 |
| mp_third.test | RUN | 0.124014 | 0.404000 | 0.400861 | 0.001424 | 0.001472 | 0.001434 |
| mp_third_2.test | RUN | 0.012439 | 0.028681 | 0.039606 | 0.000553 | 0.000662 | 0.001345 |
| mp_push_front.test | RUN | 0.166973 | 1.448419 | 0.758520 | 0.001346 | 0.001574 | 0.001395 |
| mp_push_front_2.test | RUN | 0.012130 | 0.026615 | 0.042478 | 0.000522 | 0.000579 | 0.001520 |
| mp_push_back.test | RUN | 0.174987 | 1.424685 | 0.722100 | 0.001506 | 0.001445 | 0.001447 |
| mp_push_back_2.test | RUN | 0.012676 | 0.029153 | 0.060414 | 0.000644 | 0.000753 | 0.001543 |
| mp_rename.test | RUN | 0.162469 | 1.308509 | 0.646886 | 0.001356 | 0.001486 | 0.001588 |
| mp_rename_2.test | RUN | 0.014006 | 0.028256 | 0.041727 | 0.000551 | 0.000661 | 0.001466 |
| mp_append.test | RUN | 0.172596 | 1.476721 | 0.665895 | 0.001523 | 0.001449 | 0.001616 |
| mp_append_2.test | RUN | 0.343438 | 3.331012 | 0.910963 | 0.001545 | 0.001620 | 0.001354 |
| mp_append_3.test | RUN | 0.012661 | 0.028428 | 0.042070 | 0.000624 | 0.000611 | 0.001154 |
| mp_append_sf.test | RUN | 0.130771 | 0.360322 | 0.386985 | 0.001622 | 0.001209 | 0.001385 |
| mp_replace_front.test | RUN | 0.159240 | 1.046772 | 0.546465 | 0.001472 | 0.001488 | 0.001549 |
| mp_replace_front_2.test | RUN | 0.013048 | 0.027013 | 0.044523 | 0.000564 | 0.000638 | 0.001239 |
| mp_replace_second.test | RUN | 0.151853 | 0.665362 | 0.493684 | 0.001536 | 0.001452 | 0.001492 |
| mp_replace_second_2.test | RUN | 0.012830 | 0.027756 | 0.041867 | 0.000463 | 0.000655 | 0.001423 |
| mp_replace_third.test | RUN | 0.141579 | 0.553567 | 0.472277 | 0.001836 | 0.001620 | 0.001586 |
| mp_replace_third_2.test | RUN | 0.012485 | 0.027808 | 0.042403 | 0.000573 | 0.000625 | 0.001457 |
| mp_apply_q.test | RUN | 0.152283 | 1.317068 | 0.635794 | 0.001352 | 0.001736 | 0.001355 |
| mp_apply_q_sf.test | RUN | 0.130273 | 0.382176 | 0.381415 | 0.001329 | 0.001622 | 0.001428 |
| mp_is_list.test | RUN | 0.127887 | 0.454873 | 0.386056 | 0.001204 | 0.001592 | 0.001529 |
| mp_list_c.test | RUN | 0.130448 | 0.560945 | 0.454792 | 0.001651 | 0.001778 | 0.002614 |
| mp_transform_front.test | RUN | 0.147803 | 1.111979 | 0.572013 | 0.001451 | 0.001461 | 0.001409 |
| mp_transform_front_2.test | RUN | 0.012871 | 0.030311 | 0.040298 | 0.000576 | 0.000728 | 0.001570 |
| mp_transform_second.test | RUN | 0.142038 | 0.966244 | 0.501815 | 0.003205 | 0.001679 | 0.001278 |
| mp_transform_second_2.test | RUN | 0.011334 | 0.028597 | 0.057462 | 0.001428 | 0.000636 | 0.001595 |
| mp_transform_third.test | RUN | 0.185543 | 0.721520 | 0.444350 | 0.001358 | 0.001514 | 0.001342 |
| mp_transform_third_2.test | RUN | 0.028726 | 0.029438 | 0.042479 | 0.000635 | 0.000766 | 0.001310 |
| mp_list_v.test | RUN | 0.011405 | 0.027972 | 0.043129 | 0.000540 | 0.000595 | 0.001440 |
| mp_rename_v.test | RUN | 0.012675 | 0.028504 | 0.040874 | 0.000536 | 0.000577 | 0.001487 |
| mp_is_value_list.test | RUN | 0.117811 | 0.288533 | 0.361762 | 0.001324 | 0.001579 | 0.001503 |
| mp_transform.test | RUN | 0.262533 | 2.325625 | 1.149229 | 0.001491 | 0.001328 | 0.001584 |
| mp_transform_2.test | RUN | 0.115992 | 0.249642 | 0.345011 | 0.001636 | 0.001564 | 0.001521 |
| mp_transform_q.test | RUN | 0.262110 | 2.179922 | 1.137302 | 0.001368 | 0.001533 | 0.001514 |
| mp_transform_q_2.test | RUN | 0.294415 | 0.692555 | 1.467595 | 0.001356 | 0.001548 | 0.001268 |
| mp_transform_sf.test | RUN | 0.131772 | 0.397208 | 0.402761 | 0.001602 | 0.001343 | 0.001481 |
| mp_transform_if.test | RUN | 0.161509 | 1.117091 | 0.620717 | 0.001394 | 0.001137 | 0.001411 |
| mp_transform_if_q.test | RUN | 0.162260 | 1.107699 | 0.605856 | 0.001372 | 0.001369 | 0.001180 |
| mp_filter.test | RUN | 0.141400 | 0.624296 | 0.455402 | 0.001543 | 0.001346 | 0.001105 |
| mp_fill.test | RUN | 0.156651 | 0.480493 | 0.445728 | 0.001491 | 0.001468 | 0.001536 |
| mp_fill_2.test | RUN | 0.030162 | 0.040958 | 0.069531 | 0.000586 | 0.000614 | 0.001440 |
| mp_count.test | RUN | 0.287019 | 1.125120 | 0.678646 | 0.001565 | 0.001426 | 0.001347 |
| mp_count_if.test | RUN | 0.270197 | 1.157772 | 0.735113 | 0.001624 | 0.001612 | 0.001280 |
| mp_count_if_q.test | RUN | 0.138356 | 0.754414 | 0.420051 | 0.001420 | 0.001629 | 0.001267 |
| mp_contains.test | RUN | 0.134460 | 0.474279 | 0.416793 | 0.001498 | 0.001668 | 0.001493 |
| mp_starts_with.test | RUN | 0.143316 | 0.460741 | 0.405095 | 0.001676 | 0.001470 | 0.001288 |
| mp_starts_with_sf.test | RUN | 0.143914 | 0.388375 | 0.391869 | 0.001422 | 0.001607 | 0.001243 |
| mp_repeat.test | RUN | 0.207005 | 1.871024 | 0.785577 | 0.001718 | 0.001293 | 0.001429 |
| mp_repeat_2.test | RUN | 0.023136 | 0.042486 | 0.066831 | 0.000571 | 0.000698 | 0.001420 |
| mp_repeat_3.test | RUN | 0.171929 | 0.242074 | 0.388313 | 0.001305 | 0.001606 | 0.001439 |
| mp_product.test | RUN | 0.158866 | 1.093116 | 0.541442 | 0.001241 | 0.001498 | 0.001230 |
| mp_drop.test | RUN | 0.163991 | 1.397747 | 0.622759 | 0.001404 | 0.001461 | 0.001481 |
| mp_drop_2.test | RUN | 0.023044 | 0.043110 | 0.063634 | 0.000636 | 0.000612 | 0.001238 |
| mp_iota.test | RUN | 0.158342 | 1.179907 | 0.572307 | 0.001643 | 0.001458 | 0.001486 |
| mp_iota_2.test | RUN | 0.167804 | 1.474395 | 0.645227 | 0.001303 | 0.001573 | 0.001345 |
| mp_at.test | RUN | 0.139439 | 0.655179 | 0.460249 | 0.001342 | 0.001303 | 0.001398 |
| mp_at_2.test | RUN | 0.021925 | 0.039575 | 0.064607 | 0.000576 | 0.000554 | 0.001453 |
| mp_at_sf.test | RUN | 0.134468 | 0.433236 | 0.398394 | 0.001363 | 0.001540 | 0.001390 |
| mp_take.test | RUN | 0.231837 | 1.921084 | 0.758585 | 0.001585 | 0.001567 | 0.001505 |
| mp_take_2.test | RUN | 0.021161 | 0.040880 | 0.065157 | 0.001404 | 0.000650 | 0.001487 |
| mp_slice.test | RUN | 0.264756 | 1.958750 | 1.010669 | 0.001692 | 0.001576 | 0.001473 |
| mp_slice_2.test | RUN | 0.021548 | 0.043539 | 0.066651 | 0.000526 | 0.000651 | 0.001486 |
| mp_replace.test | RUN | 0.198100 | 0.979985 | 0.640832 | 0.001925 | 0.002192 | 0.001535 |
| mp_replace_if.test | RUN | 0.180327 | 0.853561 | 0.567144 | 0.001637 | 0.001407 | 0.001164 |
| mp_replace_if_q.test | RUN | 0.165962 | 0.855727 | 0.579456 | 0.001434 | 0.001639 | 0.001501 |
| mp_copy_if.test | RUN | 0.167514 | 1.184709 | 0.579768 | 0.001345 | 0.001515 | 0.001485 |
| mp_copy_if_q.test | RUN | 0.167854 | 1.190244 | 0.595461 | 0.001602 | 0.001404 | 0.001472 |
| mp_remove.test | RUN | 0.156116 | 0.806923 | 0.610976 | 0.001630 | 0.001606 | 0.001491 |
| mp_remove_if.test | RUN | 0.162408 | 1.229799 | 0.589581 | 0.001506 | 0.001656 | 0.001558 |
| mp_remove_if_q.test | RUN | 0.169042 | 1.218156 | 0.578159 | 0.001330 | 0.001448 | 0.001532 |
| mp_partition.test | RUN | 0.170515 | 1.149931 | 0.655507 | 0.001664 | 0.001610 | 0.001392 |
| mp_partition_q.test | RUN | 0.169933 | 1.162596 | 0.665157 | 0.001470 | 0.001632 | 0.001533 |
| mp_sort.test | RUN | 0.165130 | 0.837038 | 0.559844 | 0.001404 | 0.001514 | 0.001525 |
| mp_sort_q.test | RUN | 0.164827 | 0.826078 | 0.551708 | 0.001382 | 0.001808 | 0.001538 |
| mp_find.test | RUN | 0.158047 | 0.888574 | 0.472825 | 0.001612 | 0.001656 | 0.001436 |
| mp_find_if.test | RUN | 0.147919 | 0.815004 | 0.473672 | 0.001646 | 0.001511 | 0.001428 |
| mp_find_if_q.test | RUN | 0.158363 | 0.920361 | 0.549077 | 0.001385 | 0.001672 | 0.001584 |
| mp_reverse.test | RUN | 0.299794 | 2.487391 | 1.129477 | 0.001679 | 0.001521 | 0.001482 |
| mp_fold.test | RUN | 0.521123 | 1.944619 | 2.923750 | 0.001509 | 0.001460 | 0.001269 |
| mp_fold_q.test | RUN | 0.150827 | 0.844329 | 0.563793 | 0.001530 | 0.001529 | 0.001620 |
| mp_fold_q_sf.test | RUN | 0.140255 | 0.403438 | 0.437107 | 0.001422 | 0.001535 | 0.001417 |
| mp_reverse_fold.test | RUN | 0.251265 | 1.857427 | 0.765383 | 0.001412 | 0.001360 | 0.001162 |
| mp_reverse_fold_q.test | RUN | 0.158722 | 1.000022 | 0.560485 | 0.001429 | 0.001510 | 0.001337 |
| mp_unique.test | RUN | 0.149554 | 0.915563 | 0.548525 | 0.001350 | 0.001658 | 0.001390 |
| mp_unique_if.test | RUN | 0.260323 | 1.941279 | 0.907745 | 0.001484 | 0.001472 | 0.001511 |
| mp_unique_if_q.test | RUN | 0.217438 | 1.876937 | 0.705921 | 0.001378 | 0.001507 | 0.001507 |
| mp_all_of.test | RUN | 0.369003 | 1.057492 | 0.948534 | 0.001644 | 0.001632 | 0.001540 |
| mp_all_of_q.test | RUN | 0.135965 | 0.468155 | 0.418630 | 0.001422 | 0.001697 | 0.001468 |
| mp_any_of.test | RUN | 0.397404 | 1.122439 | 0.947800 | 0.001357 | 0.001660 | 0.001520 |
| mp_any_of_q.test | RUN | 0.148188 | 0.470976 | 0.428736 | 0.001630 | 0.001537 | 0.001597 |
| mp_none_of.test | RUN | 0.403717 | 1.081930 | 0.953889 | 0.001120 | 0.001470 | 0.001535 |
| mp_none_of_q.test | RUN | 0.141905 | 0.456829 | 0.397428 | 0.001648 | 0.001383 | 0.001520 |
| mp_replace_at.test | RUN | 0.170650 | 0.925117 | 0.606837 | 0.001648 | 0.001501 | 0.001522 |
| mp_replace_at_c.test | RUN | 0.162835 | 0.927005 | 0.621619 | 0.001506 | 0.001612 | 0.001470 |
| mp_for_each.test | RUN | 0.158277 | 0.613243 | 0.630893 | 0.001322 | 0.001464 | 0.001412 |
| mp_insert.test | RUN | 0.238565 | 1.912637 | 0.892717 | 0.001594 | 0.001497 | 0.001480 |
| mp_insert_2.test | RUN | 0.023445 | 0.042449 | 0.060853 | 0.000610 | 0.000601 | 0.001352 |
| mp_erase.test | RUN | 0.251145 | 2.034402 | 1.051262 | 0.001470 | 0.002331 | 0.001523 |
| mp_erase_2.test | RUN | 0.022166 | 0.044837 | 0.065697 | 0.000552 | 0.000747 | 0.001460 |
| mp_with_index.test | RUN | 0.342064 | 4.208945 | 2.203199 | 0.001757 | 0.002064 | 0.001638 |
| mp_with_index_cx.test | RUN | 0.003237 | 0.014692 | 0.022433 | 0.000621 | 0.000672 | 0.001454 |
| mp_from_sequence.test | RUN | 0.170222 | 1.073807 | 0.608135 | 0.001568 | 0.001554 | 0.001487 |
| mp_from_sequence_2.test | RUN | 0.169373 | 1.321710 | 0.643554 | 0.001256 | 0.001390 | 0.001560 |
| mp_from_sequence_3.test | RUN | 0.141511 | 0.619135 | 0.440156 | 0.001305 | 0.001832 | 0.001609 |
| mp_min_element.test | RUN | 0.140092 | 0.548117 | 0.432882 | 0.001566 | 0.001758 | 0.001267 |
| mp_min_element_2.test | RUN | 0.021355 | 0.045863 | 0.065363 | 0.000623 | 0.000701 | 0.001526 |
| mp_min_element_q.test | RUN | 0.137892 | 0.533867 | 0.433189 | 0.001329 | 0.001798 | 0.001385 |
| mp_min_element_q_2.test | RUN | 0.021770 | 0.042041 | 0.062177 | 0.000473 | 0.000620 | 0.001514 |
| mp_max_element.test | RUN | 0.136878 | 0.537049 | 0.404753 | 0.001412 | 0.001628 | 0.001552 |
| mp_max_element_2.test | RUN | 0.021545 | 0.041874 | 0.066867 | 0.000682 | 0.000721 | 0.001372 |
| mp_max_element_q.test | RUN | 0.141413 | 0.531175 | 0.393280 | 0.001553 | 0.001644 | 0.001546 |
| mp_max_element_q_2.test | RUN | 0.023679 | 0.043275 | 0.064011 | 0.000705 | 0.000579 | 0.001467 |
| mp_nth_element.test | RUN | 0.153418 | 0.697926 | 0.533756 | 0.001602 | 0.001263 | 0.001056 |
| mp_nth_element_q.test | RUN | 0.157270 | 0.704180 | 0.532038 | 0.001481 | 0.001283 | 0.001132 |
| mp_back.test | RUN | 0.157637 | 0.597527 | 0.500531 | 0.001498 | 0.001604 | 0.001434 |
| mp_back_2.test | RUN | 0.022167 | 0.044573 | 0.064894 | 0.000512 | 0.000668 | 0.001279 |
| mp_pop_back.test | RUN | 0.374060 | 3.849794 | 1.059654 | 0.001302 | 0.001533 | 0.001514 |
| mp_pop_back_2.test | RUN | 0.021656 | 0.042105 | 0.060936 | 0.000642 | 0.000447 | 0.001452 |
| mp_flatten.test | RUN | 0.175676 | 1.334462 | 0.691534 | 0.001670 | 0.001483 | 0.001441 |
| mp_rotate_left.test | RUN | 0.174434 | 1.441484 | 0.708384 | 0.001503 | 0.001527 | 0.001383 |
| mp_rotate_right.test | RUN | 0.179445 | 1.449042 | 0.689649 | 0.001544 | 0.001594 | 0.001511 |
| mp_power_set.test | RUN | 0.174003 | 1.397082 | 0.695692 | 0.001713 | 0.001826 | 0.001225 |
| mp_partial_sum.test | RUN | 0.223218 | 1.901007 | 0.791174 | 0.001402 | 0.001510 | 0.001509 |
| mp_iterate.test | RUN | 0.152253 | 0.550094 | 0.555359 | 0.001266 | 0.001674 | 0.001252 |
| mp_pairwise_fold.test | RUN | 0.175555 | 1.350076 | 0.709462 | 0.001283 | 0.001532 | 0.001473 |
| mp_pairwise_fold_q.test | RUN | 0.137092 | 0.386730 | 0.402733 | 0.001724 | 0.001411 | 0.001489 |
| mp_sliding_fold.test | RUN | 0.318072 | 2.456079 | 1.306744 | 0.001653 | 0.001470 | 0.001500 |
| mp_sliding_fold_q.test | RUN | 0.316596 | 2.465432 | 1.312993 | 0.001525 | 0.001249 | 0.001422 |
| mp_intersperse.test | RUN | 0.167797 | 0.899485 | 0.621074 | 0.001702 | 0.001528 | 0.001436 |
| mp_split.test | RUN | 0.233639 | 1.764246 | 0.846768 | 0.001588 | 0.001544 | 0.001342 |
| mp_join.test | RUN | 0.182756 | 1.478355 | 0.725316 | 0.001586 | 0.001592 | 0.001504 |
| integral.test | RUN | 0.144768 | 0.661641 | 0.453331 | 0.001639 | 0.001578 | 0.001429 |
| mp_value.test | RUN | 0.009495 | 0.024287 | 0.031974 | 0.000711 | 0.000549 | 0.001201 |
| mp_identity.test | RUN | 0.133904 | 0.595149 | 0.435556 | 0.001613 | 0.001487 | 0.001467 |
| mp_inherit.test | RUN | 0.131926 | 0.435865 | 0.410362 | 0.001619 | 0.001322 | 0.001523 |
| mp_if.test | RUN | 0.136676 | 0.489275 | 0.406322 | 0.001613 | 0.001529 | 0.001532 |
| mp_if_sf.test | RUN | 0.125353 | 0.371364 | 0.380726 | 0.001517 | 0.001476 | 0.001444 |
| mp_eval_if.test | RUN | 0.136045 | 0.516108 | 0.391404 | 0.001444 | 0.001490 | 0.001412 |
| mp_eval_if_sf.test | RUN | 0.131862 | 0.362497 | 0.363409 | 0.001670 | 0.001507 | 0.001510 |
| mp_valid.test | RUN | 0.137836 | 0.374833 | 0.385702 | 0.001701 | 0.001416 | 0.001506 |
| mp_defer.test | RUN | 0.149365 | 0.633334 | 0.450747 | 0.001723 | 0.001572 | 0.001503 |
| mp_quote.test | RUN | 0.150668 | 0.631382 | 0.481645 | 0.001692 | 0.001511 | 0.001541 |
| mp_invoke_q.test | RUN | 0.152673 | 0.819567 | 0.528353 | 0.001706 | 0.001571 | 0.001502 |
| mp_invoke_q_sf.test | RUN | 0.131849 | 0.374873 | 0.357385 | 0.001425 | 0.001598 | 0.001391 |
| mp_quote_trait.test | RUN | 0.146340 | 0.698676 | 0.440183 | 0.001698 | 0.001432 | 0.001401 |
| mp_cond.test | RUN | 0.135563 | 0.420179 | 0.382897 | 0.001545 | 0.001566 | 0.001299 |
| mp_cond_sf.test | RUN | 0.132289 | 0.373840 | 0.354237 | 0.001705 | 0.001352 | 0.001229 |
| mp_not_fn.test | RUN | 0.129688 | 0.362298 | 0.353180 | 0.001532 | 0.001624 | 0.001209 |
| mp_eval_if_not.test | RUN | 0.136231 | 0.514275 | 0.406795 | 0.001636 | 0.001353 | 0.001008 |
| mp_eval_or.test | RUN | 0.129049 | 0.286567 | 0.376248 | 0.001428 | 0.001566 | 0.001407 |
| mp_compose.test | RUN | 0.142670 | 0.845601 | 0.486695 | 0.001440 | 0.001434 | 0.001548 |
| mp_valid_and_true.test | RUN | 0.127512 | 0.438346 | 0.379043 | 0.001440 | 0.001651 | 0.001458 |
| mp_compose_sf.test | COMPILE | 0.030552 | 0.054320 | 0.090825 | — | — | — |
| integer_sequence.test | RUN | 0.155953 | 0.885795 | 0.577141 | 0.001342 | 0.001686 | 0.001432 |
| tuple_for_each.test | RUN | 0.129254 | 0.329887 | 0.415590 | 0.001338 | 0.001625 | 0.001273 |
| tuple_for_each_cx.test | COMPILE | 0.024965 | 0.047981 | 0.069879 | — | — | — |
| tuple_apply.test | RUN | 0.137721 | 0.319041 | 0.409911 | 0.001430 | 0.001670 | 0.001570 |
| tuple_apply_cx.test | COMPILE | 0.037069 | 0.067652 | 0.097398 | — | — | — |
| construct_from_tuple.test | RUN | 0.130150 | 0.356288 | 0.410257 | 0.001378 | 0.001487 | 0.001552 |
| construct_from_tuple_cx.test | COMPILE | 0.036142 | 0.068296 | 0.093498 | — | — | — |
| tuple_transform.test | RUN | 0.209880 | 0.687825 | 0.772302 | 0.001652 | 0.001248 | 0.001238 |
| tuple_transform_2.test | RUN | 0.183952 | 0.504511 | 0.685976 | 0.001579 | 0.001517 | 0.001341 |
| tuple_transform_cx.test | COMPILE | 0.030731 | 0.063665 | 0.097469 | — | — | — |
| mp_set_contains.test | RUN | 0.135447 | 0.460232 | 0.403323 | 0.001417 | 0.001567 | 0.001182 |
| mp_set_push_back.test | RUN | 0.171717 | 1.374298 | 0.683563 | 0.001587 | 0.001505 | 0.001483 |
| mp_set_push_front.test | RUN | 0.225442 | 1.645111 | 0.797784 | 0.001524 | 0.001585 | 0.001422 |
| mp_is_set.test | RUN | 0.139257 | 0.450871 | 0.412243 | 0.001615 | 0.001464 | 0.001502 |
| mp_set_union.test | RUN | 0.172364 | 1.170068 | 0.651148 | 0.001739 | 0.001567 | 0.001457 |
| mp_set_union_sf.test | RUN | 0.138018 | 0.357595 | 0.384387 | 0.001814 | 0.001222 | 0.001521 |
| mp_set_difference.test | RUN | 0.162262 | 0.945941 | 0.547433 | 0.001573 | 0.001455 | 0.001566 |
| mp_set_difference_sf.test | RUN | 0.139308 | 0.354776 | 0.372236 | 0.001341 | 0.001604 | 0.001386 |
| mp_set_intersection.test | RUN | 0.158775 | 0.931838 | 0.545739 | 0.001763 | 0.001669 | 0.001500 |
| mp_set_intersection_sf.test | RUN | 0.130271 | 0.388280 | 0.367925 | 0.001443 | 0.001540 | 0.001419 |
| mp_all.test | RUN | 0.139029 | 0.482574 | 0.391164 | 0.001766 | 0.001586 | 0.001554 |
| mp_all_2.test | RUN | 0.377359 | 0.965023 | 0.938961 | 0.001684 | 0.001706 | 0.001597 |
| mp_and.test | RUN | 0.133469 | 0.448454 | 0.387554 | 0.001448 | 0.001583 | 0.001511 |
| mp_any.test | RUN | 0.137376 | 0.436511 | 0.389322 | 0.001394 | 0.001584 | 0.001590 |
| mp_any_2.test | RUN | 0.395081 | 0.951547 | 0.927613 | 0.001488 | 0.001615 | 0.001138 |
| mp_or.test | RUN | 0.138898 | 0.451048 | 0.413046 | 0.001438 | 0.001668 | 0.001591 |
| mp_same.test | RUN | 0.265469 | 0.742292 | 0.660686 | 0.001435 | 0.001516 | 0.001454 |
| mp_plus.test | RUN | 0.144474 | 0.543324 | 0.445206 | 0.001352 | 0.001564 | 0.001348 |
| mp_less.test | RUN | 0.135754 | 0.467731 | 0.379487 | 0.001585 | 0.001482 | 0.001450 |
| mp_min.test | RUN | 0.133663 | 0.412896 | 0.380253 | 0.001627 | 0.001595 | 0.001292 |
| mp_max.test | RUN | 0.133088 | 0.465190 | 0.392942 | 0.001372 | 0.001239 | 0.001158 |
| mp_similar.test | RUN | 0.136885 | 0.448431 | 0.389426 | 0.001342 | 0.001356 | 0.001490 |
| mp_map_find.test | RUN | 0.155371 | 0.822258 | 0.520081 | 0.001423 | 0.001311 | 0.001470 |
| mp_map_find_2.test | RUN | 0.144804 | 0.321949 | 0.455618 | 0.001566 | 0.001359 | 0.001282 |
| mp_map_find_3.test | RUN | 0.144200 | 0.319624 | 0.451767 | 0.001467 | 0.001424 | 0.001294 |
| mp_map_find_4.test | RUN | 0.136893 | 0.291148 | 0.404363 | 0.001508 | 0.001303 | 0.001545 |
| mp_map_contains.test | RUN | 0.151211 | 0.455210 | 0.404229 | 0.001762 | 0.001616 | 0.001477 |
| mp_map_insert.test | RUN | 0.188089 | 1.556549 | 0.770819 | 0.001548 | 0.001633 | 0.001418 |
| mp_map_replace.test | RUN | 0.236286 | 1.760902 | 0.894153 | 0.001449 | 0.001587 | 0.001274 |
| mp_map_erase.test | RUN | 0.184113 | 1.307801 | 0.727328 | 0.001542 | 0.001566 | 0.001291 |
| mp_map_update.test | RUN | 0.162966 | 0.849255 | 0.594559 | 0.001810 | 0.001584 | 0.001210 |
| mp_map_update_q.test | RUN | 0.161733 | 0.844931 | 0.553013 | 0.001724 | 0.001402 | 0.001033 |
| mp_map_keys.test | RUN | 0.159493 | 0.746027 | 0.532247 | 0.001408 | 0.001401 | 0.001280 |
| mp_is_map.test | RUN | 0.152734 | 0.454400 | 0.423418 | 0.001467 | 0.001470 | 0.001394 |
| mp_bind.test | RUN | 0.181232 | 1.364529 | 0.639749 | 0.001715 | 0.001383 | 0.001485 |
| mp_bind_q.test | RUN | 0.162010 | 0.853345 | 0.529295 | 0.001560 | 0.001366 | 0.001381 |
| mp_bind_front.test | RUN | 0.158234 | 0.891037 | 0.497307 | 0.001381 | 0.001370 | 0.001233 |
| mp_bind_back.test | RUN | 0.159473 | 0.896647 | 0.511143 | 0.001432 | 0.001326 | 0.000990 |
| mp_lambda.test | RUN | 0.328963 | 2.806645 | 1.369290 | 0.001387 | 0.001086 | 0.001500 |
| mpl.test | RUN | 0.297798 | 0.745678 | 1.072071 | 0.001595 | 0.001563 | 0.001408 |
| mpl_list.test | RUN | 0.173561 | 0.550809 | 0.499263 | 0.001690 | 0.001544 | 0.001273 |
| mpl_tuple.test | RUN | 0.174214 | 0.555455 | 0.484745 | 0.001384 | 0.001315 | 0.001460 |
| version.test | RUN | 0.087035 | 0.196894 | 0.245197 | 0.001659 | 0.001474 | 0.001346 |
| mp11_version.test | RUN | 0.106473 | 0.229782 | 0.303440 | 0.001457 | 0.001437 | 0.001259 |
| list_version.test | RUN | 0.089724 | 0.212603 | 0.259381 | 0.001449 | 0.001552 | 0.001328 |
| algorithm_version.test | RUN | 0.105075 | 0.213916 | 0.275835 | 0.001442 | 0.001610 | 0.001319 |
| integral_version.test | RUN | 0.088024 | 0.205664 | 0.252199 | 0.001714 | 0.001374 | 0.001374 |
| utility_version.test | RUN | 0.089152 | 0.201307 | 0.255075 | 0.001467 | 0.001511 | 0.001350 |
| function_version.test | RUN | 0.093216 | 0.210680 | 0.265702 | 0.001303 | 0.001472 | 0.001412 |
| map_version.test | RUN | 0.100497 | 0.215434 | 0.274324 | 0.001406 | 0.001383 | 0.001132 |
| set_version.test | RUN | 0.090564 | 0.207457 | 0.263828 | 0.001748 | 0.001499 | 0.001389 |
| bind_version.test | RUN | 0.097519 | 0.221870 | 0.280887 | 0.001419 | 0.001585 | 0.001546 |
| integer_sequence_version.test | RUN | 0.087541 | 0.196039 | 0.208358 | 0.001651 | 0.001395 | 0.001135 |
| tuple_version.test | RUN | 0.102801 | 0.216588 | 0.258592 | 0.001370 | 0.001554 | 0.001112 |
| mpl_version.test | RUN | 0.077196 | 0.170096 | 0.257978 | 0.001136 | 0.001138 | 0.001006 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 1.011× | 1.012×, 1.009× | 1.010× |
| clang | 1.107× | 1.113×, 1.101× | 1.009× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1364 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43686398833).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| algorithm_version.test | 10 | 0.000831s | 0.000847s | 0.000915s | byte equality observed |
| bind_version.test | 10 | 0.000838s | 0.000857s | 0.000888s | byte equality observed |
| construct_from_tuple.test | 10 | 0.000834s | 0.000850s | 0.000906s | byte equality observed |
| function_version.test | 10 | 0.000836s | 0.000866s | 0.000899s | byte equality observed |
| integer_sequence.test | 10 | 0.000831s | 0.000844s | 0.000908s | byte equality observed |
| integer_sequence_version.test | 10 | 0.000849s | 0.000851s | 0.000899s | byte equality observed |
| integral.test | 10 | 0.000852s | 0.000857s | 0.000895s | byte equality observed |
| integral_version.test | 10 | 0.000860s | 0.000873s | 0.000890s | byte equality observed |
| list_version.test | 10 | 0.000859s | 0.000874s | 0.000888s | byte equality observed |
| map_version.test | 10 | 0.000873s | 0.000860s | 0.000909s | byte equality observed |
| mp11_version.test | 10 | 0.000877s | 0.000862s | 0.000921s | byte equality observed |
| mp_all.test | 10 | 0.000884s | 0.000860s | 0.000914s | byte equality observed |
| mp_all_2.test | 10 | 0.000884s | 0.000866s | 0.000909s | byte equality observed |
| mp_all_of.test | 10 | 0.000877s | 0.000859s | 0.000911s | byte equality observed |
| mp_all_of_q.test | 10 | 0.000880s | 0.000876s | 0.000905s | byte equality observed |
| mp_and.test | 10 | 0.000867s | 0.000887s | 0.000909s | byte equality observed |
| mp_any.test | 10 | 0.000887s | 0.000874s | 0.000880s | byte equality observed |
| mp_any_2.test | 10 | 0.000883s | 0.000885s | 0.000885s | byte equality observed |
| mp_any_of.test | 10 | 0.000864s | 0.000887s | 0.000892s | byte equality observed |
| mp_any_of_q.test | 10 | 0.000874s | 0.000891s | 0.000886s | byte equality observed |
| mp_append.test | 10 | 0.000878s | 0.000884s | 0.000881s | byte equality observed |
| mp_append_2.test | 10 | 0.000915s | 0.000904s | 0.000895s | byte equality observed |
| mp_append_3.test | 10 | 0.000408s | 0.000406s | 0.000853s | byte equality observed |
| mp_append_sf.test | 10 | 0.000893s | 0.000875s | 0.000857s | byte equality observed |
| mp_apply_q.test | 10 | 0.000903s | 0.000898s | 0.000865s | byte equality observed |
| mp_apply_q_sf.test | 10 | 0.000872s | 0.000894s | 0.000859s | byte equality observed |
| mp_assign.test | 10 | 0.000876s | 0.000875s | 0.000870s | byte equality observed |
| mp_assign_2.test | 10 | 0.000404s | 0.000399s | 0.000852s | byte equality observed |
| mp_at.test | 10 | 0.000893s | 0.000889s | 0.000869s | byte equality observed |
| mp_at_2.test | 10 | 0.000398s | 0.000400s | 0.000886s | byte equality observed |
| mp_at_sf.test | 10 | 0.000895s | 0.000861s | 0.000893s | byte equality observed |
| mp_back.test | 10 | 0.000865s | 0.000875s | 0.000881s | byte equality observed |
| mp_back_2.test | 10 | 0.000406s | 0.000404s | 0.000859s | byte equality observed |
| mp_bind.test | 10 | 0.000891s | 0.000862s | 0.000873s | byte equality observed |
| mp_bind_back.test | 10 | 0.000862s | 0.000868s | 0.000886s | byte equality observed |
| mp_bind_front.test | 10 | 0.000880s | 0.000869s | 0.000876s | byte equality observed |
| mp_bind_q.test | 10 | 0.000874s | 0.000859s | 0.000880s | byte equality observed |
| mp_clear.test | 10 | 0.000880s | 0.000876s | 0.000878s | byte equality observed |
| mp_clear_2.test | 10 | 0.000406s | 0.000407s | 0.000852s | byte equality observed |
| mp_compose.test | 10 | 0.000860s | 0.000872s | 0.000895s | byte equality observed |
| mp_cond.test | 10 | 0.000868s | 0.000878s | 0.000884s | byte equality observed |
| mp_cond_sf.test | 10 | 0.000861s | 0.000849s | 0.000865s | byte equality observed |
| mp_contains.test | 10 | 0.000866s | 0.000870s | 0.000878s | byte equality observed |
| mp_copy_if.test | 10 | 0.000863s | 0.000866s | 0.000865s | byte equality observed |
| mp_copy_if_q.test | 10 | 0.000862s | 0.000862s | 0.000884s | byte equality observed |
| mp_count.test | 10 | 0.000882s | 0.000878s | 0.000873s | byte equality observed |
| mp_count_if.test | 10 | 0.000872s | 0.000850s | 0.000863s | byte equality observed |
| mp_count_if_q.test | 10 | 0.000861s | 0.000870s | 0.000864s | byte equality observed |
| mp_defer.test | 10 | 0.000879s | 0.000881s | 0.000889s | byte equality observed |
| mp_drop.test | 10 | 0.000870s | 0.000884s | 0.000894s | byte equality observed |
| mp_drop_2.test | 10 | 0.000406s | 0.000402s | 0.000841s | byte equality observed |
| mp_empty.test | 10 | 0.000876s | 0.000893s | 0.000918s | byte equality observed |
| mp_empty_2.test | 10 | 0.000399s | 0.000404s | 0.000863s | byte equality observed |
| mp_erase.test | 10 | 0.000892s | 0.000899s | 0.000896s | byte equality observed |
| mp_erase_2.test | 10 | 0.000396s | 0.000403s | 0.000855s | byte equality observed |
| mp_eval_if.test | 10 | 0.000867s | 0.000872s | 0.000886s | byte equality observed |
| mp_eval_if_not.test | 10 | 0.000868s | 0.000878s | 0.000860s | byte equality observed |
| mp_eval_if_sf.test | 10 | 0.000872s | 0.000869s | 0.000879s | byte equality observed |
| mp_eval_or.test | 10 | 0.000883s | 0.000866s | 0.000881s | byte equality observed |
| mp_fill.test | 10 | 0.000889s | 0.000880s | 0.000884s | byte equality observed |
| mp_fill_2.test | 10 | 0.000394s | 0.000390s | 0.000838s | byte equality observed |
| mp_filter.test | 10 | 0.000869s | 0.000867s | 0.000862s | byte equality observed |
| mp_find.test | 10 | 0.000865s | 0.000860s | 0.000873s | byte equality observed |
| mp_find_if.test | 10 | 0.000866s | 0.000873s | 0.000866s | byte equality observed |
| mp_find_if_q.test | 10 | 0.000880s | 0.000871s | 0.000883s | byte equality observed |
| mp_flatten.test | 10 | 0.000877s | 0.000883s | 0.000875s | byte equality observed |
| mp_fold.test | 10 | 0.000894s | 0.000885s | 0.000894s | byte equality observed |
| mp_fold_q.test | 10 | 0.000858s | 0.000890s | 0.000890s | byte equality observed |
| mp_fold_q_sf.test | 10 | 0.000873s | 0.000857s | 0.000869s | byte equality observed |
| mp_for_each.test | 10 | 0.000846s | 0.000869s | 0.000877s | byte equality observed |
| mp_from_sequence.test | 10 | 0.000862s | 0.000898s | 0.000858s | byte equality observed |
| mp_from_sequence_2.test | 10 | 0.000863s | 0.000887s | 0.000854s | byte equality observed |
| mp_from_sequence_3.test | 10 | 0.000852s | 0.000891s | 0.000883s | byte equality observed |
| mp_front.test | 10 | 0.000868s | 0.000878s | 0.000873s | byte equality observed |
| mp_front_2.test | 10 | 0.000399s | 0.000398s | 0.000885s | byte equality observed |
| mp_identity.test | 10 | 0.000863s | 0.000878s | 0.000877s | byte equality observed |
| mp_if.test | 10 | 0.000857s | 0.000869s | 0.000873s | byte equality observed |
| mp_if_sf.test | 10 | 0.000868s | 0.000876s | 0.000872s | byte equality observed |
| mp_inherit.test | 10 | 0.000864s | 0.000881s | 0.000876s | byte equality observed |
| mp_insert.test | 10 | 0.000892s | 0.000908s | 0.000888s | byte equality observed |
| mp_insert_2.test | 10 | 0.000395s | 0.000400s | 0.000858s | byte equality observed |
| mp_intersperse.test | 10 | 0.000852s | 0.000879s | 0.000882s | byte equality observed |
| mp_invoke_q.test | 10 | 0.000858s | 0.000865s | 0.000904s | byte equality observed |
| mp_invoke_q_sf.test | 10 | 0.000854s | 0.000895s | 0.000890s | byte equality observed |
| mp_iota.test | 10 | 0.000869s | 0.000878s | 0.000885s | byte equality observed |
| mp_iota_2.test | 10 | 0.000876s | 0.000903s | 0.000890s | byte equality observed |
| mp_is_list.test | 10 | 0.000902s | 0.000897s | 0.000900s | byte equality observed |
| mp_is_map.test | 10 | 0.000865s | 0.000865s | 0.000897s | byte equality observed |
| mp_is_set.test | 10 | 0.000865s | 0.000896s | 0.000897s | byte equality observed |
| mp_is_value_list.test | 10 | 0.000875s | 0.000899s | 0.000876s | byte equality observed |
| mp_iterate.test | 10 | 0.000867s | 0.000884s | 0.000886s | byte equality observed |
| mp_join.test | 10 | 0.000869s | 0.000911s | 0.000890s | byte equality observed |
| mp_lambda.test | 10 | 0.000908s | 0.000889s | 0.000871s | byte equality observed |
| mp_less.test | 10 | 0.000868s | 0.000877s | 0.000902s | byte equality observed |
| mp_list_c.test | 10 | 0.000865s | 0.000882s | 0.000897s | byte equality observed |
| mp_list_v.test | 10 | 0.000400s | 0.000411s | 0.000870s | byte equality observed |
| mp_map_contains.test | 10 | 0.000878s | 0.000895s | 0.000883s | byte equality observed |
| mp_map_erase.test | 10 | 0.000852s | 0.000889s | 0.000901s | byte equality observed |
| mp_map_find.test | 10 | 0.000866s | 0.000872s | 0.000859s | byte equality observed |
| mp_map_find_2.test | 10 | 0.000887s | 0.000876s | 0.000886s | byte equality observed |
| mp_map_find_3.test | 10 | 0.000874s | 0.000873s | 0.000865s | byte equality observed |
| mp_map_find_4.test | 10 | 0.000860s | 0.000880s | 0.000888s | byte equality observed |
| mp_map_insert.test | 10 | 0.000848s | 0.000891s | 0.000881s | byte equality observed |
| mp_map_keys.test | 10 | 0.000864s | 0.000884s | 0.000913s | byte equality observed |
| mp_map_replace.test | 10 | 0.000881s | 0.000919s | 0.000888s | byte equality observed |
| mp_map_update.test | 10 | 0.000855s | 0.000915s | 0.000904s | byte equality observed |
| mp_map_update_q.test | 10 | 0.000852s | 0.000884s | 0.000887s | byte equality observed |
| mp_max.test | 10 | 0.000882s | 0.000878s | 0.000878s | byte equality observed |
| mp_max_element.test | 10 | 0.000868s | 0.000897s | 0.000878s | byte equality observed |
| mp_max_element_2.test | 10 | 0.000401s | 0.000404s | 0.000851s | byte equality observed |
| mp_max_element_q.test | 10 | 0.000868s | 0.000884s | 0.000889s | byte equality observed |
| mp_max_element_q_2.test | 10 | 0.000391s | 0.000409s | 0.000856s | byte equality observed |
| mp_min.test | 10 | 0.000878s | 0.000879s | 0.000907s | byte equality observed |
| mp_min_element.test | 10 | 0.000879s | 0.000875s | 0.000896s | byte equality observed |
| mp_min_element_2.test | 10 | 0.000400s | 0.000401s | 0.000875s | byte equality observed |
| mp_min_element_q.test | 10 | 0.000889s | 0.000906s | 0.000890s | byte equality observed |
| mp_min_element_q_2.test | 10 | 0.000398s | 0.000406s | 0.000854s | byte equality observed |
| mp_none_of.test | 10 | 0.000882s | 0.000895s | 0.000894s | byte equality observed |
| mp_none_of_q.test | 10 | 0.000860s | 0.000899s | 0.000881s | byte equality observed |
| mp_not_fn.test | 10 | 0.000859s | 0.000892s | 0.000895s | byte equality observed |
| mp_nth_element.test | 10 | 0.000888s | 0.000898s | 0.000916s | byte equality observed |
| mp_nth_element_q.test | 10 | 0.000856s | 0.000922s | 0.000889s | byte equality observed |
| mp_or.test | 10 | 0.000858s | 0.000877s | 0.000896s | byte equality observed |
| mp_pairwise_fold.test | 10 | 0.000883s | 0.000911s | 0.000896s | byte equality observed |
| mp_pairwise_fold_q.test | 10 | 0.000853s | 0.000867s | 0.000890s | byte equality observed |
| mp_partial_sum.test | 10 | 0.000890s | 0.000871s | 0.000878s | byte equality observed |
| mp_partition.test | 10 | 0.000885s | 0.000877s | 0.000867s | byte equality observed |
| mp_partition_q.test | 10 | 0.000873s | 0.000867s | 0.000869s | byte equality observed |
| mp_plus.test | 10 | 0.000852s | 0.000870s | 0.000897s | byte equality observed |
| mp_pop_back.test | 10 | 0.000897s | 0.000878s | 0.000863s | byte equality observed |
| mp_pop_back_2.test | 10 | 0.000402s | 0.000391s | 0.000844s | byte equality observed |
| mp_pop_front.test | 10 | 0.000882s | 0.000880s | 0.000888s | byte equality observed |
| mp_pop_front_2.test | 10 | 0.000395s | 0.000386s | 0.000840s | byte equality observed |
| mp_power_set.test | 10 | 0.000875s | 0.000875s | 0.000904s | byte equality observed |
| mp_product.test | 10 | 0.000866s | 0.000886s | 0.000889s | byte equality observed |
| mp_push_back.test | 10 | 0.000880s | 0.000886s | 0.000883s | byte equality observed |
| mp_push_back_2.test | 10 | 0.000400s | 0.000402s | 0.000868s | byte equality observed |
| mp_push_front.test | 10 | 0.000866s | 0.000892s | 0.000892s | byte equality observed |
| mp_push_front_2.test | 10 | 0.000400s | 0.000400s | 0.000882s | byte equality observed |
| mp_quote.test | 10 | 0.000880s | 0.000875s | 0.000893s | byte equality observed |
| mp_quote_trait.test | 10 | 0.000869s | 0.000867s | 0.000910s | byte equality observed |
| mp_remove.test | 10 | 0.000876s | 0.000854s | 0.000883s | byte equality observed |
| mp_remove_if.test | 10 | 0.000879s | 0.000869s | 0.000883s | byte equality observed |
| mp_remove_if_q.test | 10 | 0.000881s | 0.000858s | 0.000916s | byte equality observed |
| mp_rename.test | 10 | 0.000897s | 0.000880s | 0.000885s | byte equality observed |
| mp_rename_2.test | 10 | 0.000402s | 0.000399s | 0.000858s | byte equality observed |
| mp_rename_v.test | 10 | 0.000400s | 0.000390s | 0.000869s | byte equality observed |
| mp_repeat.test | 10 | 0.000917s | 0.000902s | 0.000887s | byte equality observed |
| mp_repeat_2.test | 10 | 0.000405s | 0.000400s | 0.000882s | byte equality observed |
| mp_repeat_3.test | 10 | 0.000878s | 0.000887s | 0.000885s | byte equality observed |
| mp_replace.test | 10 | 0.000886s | 0.000902s | 0.000914s | byte equality observed |
| mp_replace_at.test | 10 | 0.000883s | 0.000881s | 0.000884s | byte equality observed |
| mp_replace_at_c.test | 10 | 0.000886s | 0.000887s | 0.000903s | byte equality observed |
| mp_replace_front.test | 10 | 0.000883s | 0.000868s | 0.000917s | byte equality observed |
| mp_replace_front_2.test | 10 | 0.000398s | 0.000390s | 0.000861s | byte equality observed |
| mp_replace_if.test | 10 | 0.000879s | 0.000866s | 0.000922s | byte equality observed |
| mp_replace_if_q.test | 10 | 0.000875s | 0.000857s | 0.000900s | byte equality observed |
| mp_replace_second.test | 10 | 0.000884s | 0.000873s | 0.000892s | byte equality observed |
| mp_replace_second_2.test | 10 | 0.000396s | 0.000408s | 0.000889s | byte equality observed |
| mp_replace_third.test | 10 | 0.000871s | 0.000874s | 0.000903s | byte equality observed |
| mp_replace_third_2.test | 10 | 0.000393s | 0.000402s | 0.000883s | byte equality observed |
| mp_reverse.test | 10 | 0.000897s | 0.000890s | 0.000900s | byte equality observed |
| mp_reverse_fold.test | 10 | 0.000877s | 0.000881s | 0.000898s | byte equality observed |
| mp_reverse_fold_q.test | 10 | 0.000881s | 0.000878s | 0.000868s | byte equality observed |
| mp_rotate_left.test | 10 | 0.000880s | 0.000896s | 0.000897s | byte equality observed |
| mp_rotate_right.test | 10 | 0.000860s | 0.000896s | 0.000881s | byte equality observed |
| mp_same.test | 10 | 0.000865s | 0.000862s | 0.000891s | byte equality observed |
| mp_second.test | 10 | 0.000865s | 0.000890s | 0.000883s | byte equality observed |
| mp_second_2.test | 10 | 0.000400s | 0.000400s | 0.000855s | byte equality observed |
| mp_set_contains.test | 10 | 0.000850s | 0.000885s | 0.000888s | byte equality observed |
| mp_set_difference.test | 10 | 0.000877s | 0.000907s | 0.000896s | byte equality observed |
| mp_set_difference_sf.test | 10 | 0.000854s | 0.000897s | 0.000863s | byte equality observed |
| mp_set_intersection.test | 10 | 0.000866s | 0.000883s | 0.000890s | byte equality observed |
| mp_set_intersection_sf.test | 10 | 0.000859s | 0.000899s | 0.000858s | byte equality observed |
| mp_set_push_back.test | 10 | 0.000856s | 0.000892s | 0.000914s | byte equality observed |
| mp_set_push_front.test | 10 | 0.000865s | 0.000892s | 0.000902s | byte equality observed |
| mp_set_union.test | 10 | 0.000865s | 0.000866s | 0.000899s | byte equality observed |
| mp_set_union_sf.test | 10 | 0.000859s | 0.000884s | 0.000902s | byte equality observed |
| mp_similar.test | 10 | 0.000876s | 0.000863s | 0.000889s | byte equality observed |
| mp_size.test | 10 | 0.000869s | 0.000892s | 0.000898s | byte equality observed |
| mp_size_2.test | 10 | 0.000399s | 0.000392s | 0.000880s | byte equality observed |
| mp_slice.test | 10 | 0.000911s | 0.000883s | 0.000902s | byte equality observed |
| mp_slice_2.test | 10 | 0.000400s | 0.000400s | 0.000875s | byte equality observed |
| mp_sliding_fold.test | 10 | 0.000908s | 0.000895s | 0.000901s | byte equality observed |
| mp_sliding_fold_q.test | 10 | 0.000886s | 0.000908s | 0.000879s | byte equality observed |
| mp_sort.test | 10 | 0.000869s | 0.000873s | 0.000874s | byte equality observed |
| mp_sort_q.test | 10 | 0.000869s | 0.000850s | 0.000886s | byte equality observed |
| mp_split.test | 10 | 0.000906s | 0.000887s | 0.000888s | byte equality observed |
| mp_starts_with.test | 10 | 0.000887s | 0.000855s | 0.000880s | byte equality observed |
| mp_starts_with_sf.test | 10 | 0.000891s | 0.000871s | 0.000885s | byte equality observed |
| mp_take.test | 10 | 0.000895s | 0.000871s | 0.000873s | byte equality observed |
| mp_take_2.test | 10 | 0.000402s | 0.000396s | 0.000876s | byte equality observed |
| mp_third.test | 10 | 0.000906s | 0.000880s | 0.000892s | byte equality observed |
| mp_third_2.test | 10 | 0.000400s | 0.000393s | 0.000873s | byte equality observed |
| mp_transform.test | 10 | 0.000897s | 0.000896s | 0.000885s | byte equality observed |
| mp_transform_2.test | 10 | 0.000850s | 0.000875s | 0.000860s | byte equality observed |
| mp_transform_front.test | 10 | 0.000870s | 0.000885s | 0.000894s | byte equality observed |
| mp_transform_front_2.test | 10 | 0.000400s | 0.000406s | 0.000864s | byte equality observed |
| mp_transform_if.test | 10 | 0.000867s | 0.000906s | 0.000870s | byte equality observed |
| mp_transform_if_q.test | 10 | 0.000875s | 0.000874s | 0.000893s | byte equality observed |
| mp_transform_q.test | 10 | 0.000903s | 0.000873s | 0.000876s | byte equality observed |
| mp_transform_q_2.test | 10 | 0.000881s | 0.000891s | 0.000877s | byte equality observed |
| mp_transform_second.test | 10 | 0.000878s | 0.000888s | 0.000876s | byte equality observed |
| mp_transform_second_2.test | 10 | 0.000399s | 0.000406s | 0.000863s | byte equality observed |
| mp_transform_sf.test | 10 | 0.000864s | 0.000888s | 0.000872s | byte equality observed |
| mp_transform_third.test | 10 | 0.000880s | 0.000870s | 0.000884s | byte equality observed |
| mp_transform_third_2.test | 10 | 0.000394s | 0.000402s | 0.000888s | byte equality observed |
| mp_unique.test | 10 | 0.000909s | 0.000882s | 0.000895s | byte equality observed |
| mp_unique_if.test | 10 | 0.000893s | 0.000891s | 0.000888s | byte equality observed |
| mp_unique_if_q.test | 10 | 0.000896s | 0.000890s | 0.000909s | byte equality observed |
| mp_valid.test | 10 | 0.000897s | 0.000897s | 0.000894s | byte equality observed |
| mp_valid_and_true.test | 10 | 0.000887s | 0.000885s | 0.000872s | byte equality observed |
| mp_value.test | 10 | 0.000401s | 0.000399s | 0.000872s | byte equality observed |
| mp_with_index.test | 10 | 0.001270s | 0.001239s | 0.001196s | byte equality observed |
| mp_with_index_cx.test | 10 | 0.000389s | 0.000396s | 0.000862s | byte equality observed |
| mpl.test | 10 | 0.000909s | 0.000871s | 0.000889s | byte equality observed |
| mpl_list.test | 10 | 0.000871s | 0.000871s | 0.000898s | byte equality observed |
| mpl_tuple.test | 10 | 0.000897s | 0.000873s | 0.000901s | byte equality observed |
| mpl_version.test | 10 | 0.000879s | 0.000855s | 0.000870s | byte equality observed |
| set_version.test | 10 | 0.000891s | 0.000861s | 0.000901s | byte equality observed |
| tuple_apply.test | 10 | 0.000875s | 0.000873s | 0.000897s | byte equality observed |
| tuple_for_each.test | 10 | 0.000883s | 0.000855s | 0.000897s | byte equality observed |
| tuple_transform.test | 10 | 0.000893s | 0.000862s | 0.000880s | byte equality observed |
| tuple_transform_2.test | 10 | 0.000894s | 0.000873s | 0.000883s | byte equality observed |
| tuple_version.test | 10 | 0.000905s | 0.000854s | 0.000881s | byte equality observed |
| utility_version.test | 10 | 0.000891s | 0.000857s | 0.000870s | byte equality observed |
| version.test | 10 | 0.000881s | 0.000867s | 0.000866s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43686398833).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
