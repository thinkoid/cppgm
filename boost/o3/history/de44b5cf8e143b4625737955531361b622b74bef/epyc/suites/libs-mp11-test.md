# libs/mp11/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| mp11.test | COMPILE | 0.027935 | 0.052697 | 0.077798 | — | — | — |
| complex_h.test | COMPILE | 0.112085 | 0.225156 | 0.302208 | — | — | — |
| mp_size.test | RUN | 0.133419 | 0.718277 | 0.420020 | 0.001475 | 0.001487 | 0.001419 |
| mp_size_2.test | RUN | 0.011075 | 0.027023 | 0.038933 | 0.000627 | 0.000607 | 0.001322 |
| mp_empty.test | RUN | 0.125349 | 0.448387 | 0.384347 | 0.001380 | 0.001654 | 0.001343 |
| mp_empty_2.test | RUN | 0.012324 | 0.027087 | 0.041231 | 0.000521 | 0.000588 | 0.001504 |
| mp_assign.test | RUN | 0.136718 | 0.924112 | 0.494250 | 0.001425 | 0.001508 | 0.001388 |
| mp_assign_2.test | RUN | 0.012758 | 0.028514 | 0.044212 | 0.000603 | 0.000721 | 0.001424 |
| mp_clear.test | RUN | 0.127969 | 0.404344 | 0.390495 | 0.001324 | 0.001454 | 0.001450 |
| mp_clear_2.test | RUN | 0.012545 | 0.028226 | 0.042833 | 0.000620 | 0.000646 | 0.001326 |
| mp_front.test | RUN | 0.132138 | 0.644231 | 0.441843 | 0.001424 | 0.001569 | 0.001378 |
| mp_front_2.test | RUN | 0.012033 | 0.029131 | 0.038920 | 0.000554 | 0.000547 | 0.001403 |
| mp_pop_front.test | RUN | 0.130953 | 0.672575 | 0.442717 | 0.001215 | 0.001474 | 0.001610 |
| mp_pop_front_2.test | RUN | 0.012251 | 0.028524 | 0.038460 | 0.000567 | 0.000670 | 0.001240 |
| mp_second.test | RUN | 0.133172 | 0.421922 | 0.420831 | 0.001545 | 0.001299 | 0.001502 |
| mp_second_2.test | RUN | 0.012547 | 0.027724 | 0.039626 | 0.000558 | 0.000644 | 0.001495 |
| mp_third.test | RUN | 0.121578 | 0.387033 | 0.367773 | 0.001408 | 0.001299 | 0.001468 |
| mp_third_2.test | RUN | 0.011614 | 0.028464 | 0.040968 | 0.000591 | 0.000539 | 0.001440 |
| mp_push_front.test | RUN | 0.167020 | 1.414065 | 0.705216 | 0.001418 | 0.001464 | 0.001533 |
| mp_push_front_2.test | RUN | 0.011852 | 0.026541 | 0.039318 | 0.000519 | 0.000635 | 0.001392 |
| mp_push_back.test | RUN | 0.162434 | 1.412257 | 0.675385 | 0.001596 | 0.001586 | 0.001671 |
| mp_push_back_2.test | RUN | 0.012425 | 0.026892 | 0.042070 | 0.000583 | 0.000622 | 0.001521 |
| mp_rename.test | RUN | 0.151749 | 1.284596 | 0.615868 | 0.001369 | 0.001211 | 0.001745 |
| mp_rename_2.test | RUN | 0.011722 | 0.028333 | 0.041073 | 0.000495 | 0.000681 | 0.001395 |
| mp_append.test | RUN | 0.155701 | 1.479865 | 0.679296 | 0.001382 | 0.001406 | 0.001663 |
| mp_append_2.test | RUN | 0.315692 | 3.299776 | 0.963136 | 0.001505 | 0.001649 | 0.001324 |
| mp_append_3.test | RUN | 0.012067 | 0.028304 | 0.044548 | 0.000558 | 0.000670 | 0.001618 |
| mp_append_sf.test | RUN | 0.123735 | 0.359740 | 0.407622 | 0.001460 | 0.001110 | 0.001679 |
| mp_replace_front.test | RUN | 0.147155 | 1.066280 | 0.555525 | 0.001288 | 0.001427 | 0.001443 |
| mp_replace_front_2.test | RUN | 0.012098 | 0.027386 | 0.047302 | 0.000637 | 0.000687 | 0.001444 |
| mp_replace_second.test | RUN | 0.138890 | 0.681438 | 0.525472 | 0.001449 | 0.001335 | 0.001612 |
| mp_replace_second_2.test | RUN | 0.012251 | 0.029600 | 0.044280 | 0.000512 | 0.000672 | 0.001343 |
| mp_replace_third.test | RUN | 0.131947 | 0.561904 | 0.489770 | 0.001489 | 0.001638 | 0.001469 |
| mp_replace_third_2.test | RUN | 0.011719 | 0.028817 | 0.040715 | 0.000450 | 0.000679 | 0.001602 |
| mp_apply_q.test | RUN | 0.151233 | 1.294343 | 0.621324 | 0.001426 | 0.001440 | 0.001515 |
| mp_apply_q_sf.test | RUN | 0.117613 | 0.383614 | 0.369215 | 0.001379 | 0.001594 | 0.001596 |
| mp_is_list.test | RUN | 0.122446 | 0.453573 | 0.363321 | 0.001368 | 0.001542 | 0.001554 |
| mp_list_c.test | RUN | 0.123244 | 0.541202 | 0.408785 | 0.001402 | 0.001447 | 0.001495 |
| mp_transform_front.test | RUN | 0.144630 | 1.064326 | 0.542728 | 0.001472 | 0.001423 | 0.001503 |
| mp_transform_front_2.test | RUN | 0.011874 | 0.028108 | 0.040740 | 0.000524 | 0.000744 | 0.001443 |
| mp_transform_second.test | RUN | 0.134057 | 0.910922 | 0.502610 | 0.001086 | 0.001678 | 0.001373 |
| mp_transform_second_2.test | RUN | 0.011641 | 0.027968 | 0.039615 | 0.000533 | 0.000596 | 0.001566 |
| mp_transform_third.test | RUN | 0.133557 | 0.699878 | 0.421071 | 0.001294 | 0.001449 | 0.001499 |
| mp_transform_third_2.test | RUN | 0.011366 | 0.028644 | 0.042196 | 0.000566 | 0.000507 | 0.001399 |
| mp_list_v.test | RUN | 0.012471 | 0.028089 | 0.043434 | 0.000508 | 0.000606 | 0.001264 |
| mp_rename_v.test | RUN | 0.012178 | 0.028072 | 0.038789 | 0.000466 | 0.000563 | 0.001482 |
| mp_is_value_list.test | RUN | 0.117211 | 0.283446 | 0.350748 | 0.001465 | 0.001321 | 0.001534 |
| mp_transform.test | RUN | 0.274876 | 2.238858 | 1.145208 | 0.001349 | 0.001451 | 0.001458 |
| mp_transform_2.test | RUN | 0.113666 | 0.267584 | 0.335879 | 0.001257 | 0.001662 | 0.001507 |
| mp_transform_q.test | RUN | 0.269536 | 2.124714 | 1.107952 | 0.001344 | 0.001420 | 0.001420 |
| mp_transform_q_2.test | RUN | 0.284038 | 0.670201 | 1.472160 | 0.001406 | 0.001521 | 0.001271 |
| mp_transform_sf.test | RUN | 0.131816 | 0.389104 | 0.402195 | 0.001459 | 0.001304 | 0.001523 |
| mp_transform_if.test | RUN | 0.148366 | 1.037273 | 0.592239 | 0.001527 | 0.001258 | 0.001479 |
| mp_transform_if_q.test | RUN | 0.159627 | 1.034465 | 0.599908 | 0.001303 | 0.001375 | 0.001277 |
| mp_filter.test | RUN | 0.140333 | 0.624182 | 0.468604 | 0.001373 | 0.001581 | 0.001414 |
| mp_fill.test | RUN | 0.128126 | 0.473653 | 0.408833 | 0.001162 | 0.001464 | 0.001635 |
| mp_fill_2.test | RUN | 0.021085 | 0.040744 | 0.064612 | 0.000545 | 0.000675 | 0.001590 |
| mp_count.test | RUN | 0.247012 | 1.134163 | 0.696331 | 0.001418 | 0.001536 | 0.001315 |
| mp_count_if.test | RUN | 0.265744 | 1.167823 | 0.751630 | 0.001329 | 0.001615 | 0.001478 |
| mp_count_if_q.test | RUN | 0.138216 | 0.756516 | 0.442578 | 0.001320 | 0.001372 | 0.001536 |
| mp_contains.test | RUN | 0.137621 | 0.455850 | 0.420730 | 0.001464 | 0.001570 | 0.001567 |
| mp_starts_with.test | RUN | 0.129579 | 0.460702 | 0.400217 | 0.001317 | 0.001684 | 0.001517 |
| mp_starts_with_sf.test | RUN | 0.128584 | 0.381911 | 0.408887 | 0.001301 | 0.001536 | 0.001393 |
| mp_repeat.test | RUN | 0.185220 | 1.886542 | 0.802694 | 0.001595 | 0.001681 | 0.001446 |
| mp_repeat_2.test | RUN | 0.020389 | 0.041873 | 0.067598 | 0.000475 | 0.000705 | 0.001536 |
| mp_repeat_3.test | RUN | 0.156726 | 0.249657 | 0.390579 | 0.001129 | 0.001682 | 0.001612 |
| mp_product.test | RUN | 0.148506 | 1.130741 | 0.583532 | 0.001341 | 0.001619 | 0.001315 |
| mp_drop.test | RUN | 0.155072 | 1.424259 | 0.644516 | 0.001156 | 0.001409 | 0.001624 |
| mp_drop_2.test | RUN | 0.020909 | 0.042834 | 0.069887 | 0.000573 | 0.000712 | 0.001481 |
| mp_iota.test | RUN | 0.151923 | 1.199631 | 0.589906 | 0.001052 | 0.001237 | 0.001504 |
| mp_iota_2.test | RUN | 0.163456 | 1.439759 | 0.636767 | 0.001152 | 0.001642 | 0.001622 |
| mp_at.test | RUN | 0.134870 | 0.633833 | 0.465204 | 0.001412 | 0.001504 | 0.001501 |
| mp_at_2.test | RUN | 0.020608 | 0.040240 | 0.068863 | 0.000553 | 0.000647 | 0.001488 |
| mp_at_sf.test | RUN | 0.122910 | 0.382377 | 0.393160 | 0.001437 | 0.001316 | 0.001422 |
| mp_take.test | RUN | 0.198046 | 1.865771 | 0.765628 | 0.001396 | 0.001548 | 0.001637 |
| mp_take_2.test | RUN | 0.021413 | 0.042272 | 0.068635 | 0.000635 | 0.000638 | 0.001558 |
| mp_slice.test | RUN | 0.231014 | 1.913745 | 1.026745 | 0.001428 | 0.001573 | 0.001628 |
| mp_slice_2.test | RUN | 0.021373 | 0.042414 | 0.068106 | 0.000560 | 0.000647 | 0.001636 |
| mp_replace.test | RUN | 0.160253 | 0.960091 | 0.663781 | 0.001511 | 0.001324 | 0.001593 |
| mp_replace_if.test | RUN | 0.148125 | 0.855095 | 0.576535 | 0.001400 | 0.001372 | 0.001443 |
| mp_replace_if_q.test | RUN | 0.150584 | 0.847279 | 0.606775 | 0.001352 | 0.001611 | 0.001661 |
| mp_copy_if.test | RUN | 0.150726 | 1.172486 | 0.587961 | 0.001176 | 0.001578 | 0.001560 |
| mp_copy_if_q.test | RUN | 0.158142 | 1.177969 | 0.588441 | 0.001506 | 0.001437 | 0.001303 |
| mp_remove.test | RUN | 0.147427 | 0.804952 | 0.572714 | 0.001471 | 0.001648 | 0.001527 |
| mp_remove_if.test | RUN | 0.153130 | 1.262734 | 0.624786 | 0.001343 | 0.001661 | 0.001670 |
| mp_remove_if_q.test | RUN | 0.155679 | 1.237010 | 0.600278 | 0.001247 | 0.001354 | 0.001666 |
| mp_partition.test | RUN | 0.152791 | 1.163702 | 0.660785 | 0.001510 | 0.001367 | 0.001355 |
| mp_partition_q.test | RUN | 0.155090 | 1.190101 | 0.660087 | 0.001337 | 0.001672 | 0.001279 |
| mp_sort.test | RUN | 0.147260 | 0.842844 | 0.563312 | 0.001234 | 0.001559 | 0.001690 |
| mp_sort_q.test | RUN | 0.143223 | 0.836759 | 0.549243 | 0.001301 | 0.001415 | 0.001411 |
| mp_find.test | RUN | 0.146174 | 0.903131 | 0.481134 | 0.001616 | 0.001567 | 0.001192 |
| mp_find_if.test | RUN | 0.136946 | 0.846076 | 0.459614 | 0.001414 | 0.001570 | 0.001399 |
| mp_find_if_q.test | RUN | 0.146614 | 0.929161 | 0.544493 | 0.001378 | 0.001618 | 0.001550 |
| mp_reverse.test | RUN | 0.285886 | 2.512782 | 1.079204 | 0.001388 | 0.001462 | 0.001664 |
| mp_fold.test | RUN | 0.485964 | 1.977485 | 2.957128 | 0.001429 | 0.001598 | 0.001685 |
| mp_fold_q.test | RUN | 0.142983 | 0.853021 | 0.519753 | 0.001408 | 0.001640 | 0.001487 |
| mp_fold_q_sf.test | RUN | 0.130762 | 0.398234 | 0.399095 | 0.001284 | 0.001682 | 0.001549 |
| mp_reverse_fold.test | RUN | 0.235201 | 1.866467 | 0.794366 | 0.001414 | 0.001417 | 0.001672 |
| mp_reverse_fold_q.test | RUN | 0.150951 | 1.036497 | 0.592601 | 0.001171 | 0.001554 | 0.001465 |
| mp_unique.test | RUN | 0.146385 | 0.932200 | 0.569684 | 0.001249 | 0.001372 | 0.001414 |
| mp_unique_if.test | RUN | 0.250152 | 1.939159 | 0.895072 | 0.001334 | 0.001334 | 0.001676 |
| mp_unique_if_q.test | RUN | 0.205940 | 1.907974 | 0.759088 | 0.001462 | 0.001720 | 0.001789 |
| mp_all_of.test | RUN | 0.346007 | 1.037184 | 0.973062 | 0.001526 | 0.001647 | 0.001480 |
| mp_all_of_q.test | RUN | 0.130973 | 0.446712 | 0.419224 | 0.001570 | 0.001607 | 0.001788 |
| mp_any_of.test | RUN | 0.342451 | 1.092424 | 0.983228 | 0.001516 | 0.001432 | 0.001638 |
| mp_any_of_q.test | RUN | 0.130023 | 0.460351 | 0.440600 | 0.001660 | 0.001667 | 0.001654 |
| mp_none_of.test | RUN | 0.351684 | 1.096421 | 0.933626 | 0.001166 | 0.001582 | 0.001698 |
| mp_none_of_q.test | RUN | 0.135989 | 0.458451 | 0.433722 | 0.001456 | 0.001694 | 0.001526 |
| mp_replace_at.test | RUN | 0.162845 | 0.921932 | 0.641066 | 0.001647 | 0.001637 | 0.001809 |
| mp_replace_at_c.test | RUN | 0.161799 | 0.898852 | 0.664029 | 0.001239 | 0.001302 | 0.001314 |
| mp_for_each.test | RUN | 0.155814 | 0.628359 | 0.717168 | 0.001394 | 0.001564 | 0.001606 |
| mp_insert.test | RUN | 0.230535 | 1.886825 | 0.939054 | 0.001491 | 0.001734 | 0.001661 |
| mp_insert_2.test | RUN | 0.018402 | 0.041828 | 0.073419 | 0.000534 | 0.000621 | 0.001365 |
| mp_erase.test | RUN | 0.246489 | 2.025135 | 1.187561 | 0.001560 | 0.001687 | 0.001530 |
| mp_erase_2.test | RUN | 0.020447 | 0.041066 | 0.072768 | 0.000548 | 0.000638 | 0.001554 |
| mp_with_index.test | RUN | 0.296410 | 3.977460 | 2.486732 | 0.001958 | 0.002054 | 0.001854 |
| mp_with_index_cx.test | RUN | 0.003051 | 0.014906 | 0.023960 | 0.000578 | 0.000671 | 0.001694 |
| mp_from_sequence.test | RUN | 0.155015 | 1.042943 | 0.654510 | 0.001342 | 0.001696 | 0.001513 |
| mp_from_sequence_2.test | RUN | 0.167520 | 1.269080 | 0.719866 | 0.001365 | 0.001527 | 0.001659 |
| mp_from_sequence_3.test | RUN | 0.134958 | 0.548326 | 0.489995 | 0.001229 | 0.001680 | 0.001537 |
| mp_min_element.test | RUN | 0.130259 | 0.497546 | 0.431194 | 0.001462 | 0.001610 | 0.001482 |
| mp_min_element_2.test | RUN | 0.020837 | 0.043404 | 0.068919 | 0.000507 | 0.000705 | 0.001651 |
| mp_min_element_q.test | RUN | 0.133782 | 0.490834 | 0.432194 | 0.001369 | 0.001622 | 0.001608 |
| mp_min_element_q_2.test | RUN | 0.020785 | 0.042502 | 0.071726 | 0.000686 | 0.000547 | 0.001334 |
| mp_max_element.test | RUN | 0.129988 | 0.497219 | 0.471834 | 0.001445 | 0.001572 | 0.001155 |
| mp_max_element_2.test | RUN | 0.020713 | 0.042104 | 0.066101 | 0.000522 | 0.000576 | 0.001366 |
| mp_max_element_q.test | RUN | 0.131439 | 0.503215 | 0.458687 | 0.001341 | 0.001640 | 0.001688 |
| mp_max_element_q_2.test | RUN | 0.021361 | 0.042373 | 0.071594 | 0.000543 | 0.000605 | 0.001698 |
| mp_nth_element.test | RUN | 0.144642 | 0.688565 | 0.555651 | 0.001486 | 0.001457 | 0.001556 |
| mp_nth_element_q.test | RUN | 0.142260 | 0.682624 | 0.575652 | 0.001308 | 0.001528 | 0.001360 |
| mp_back.test | RUN | 0.141398 | 0.577348 | 0.545238 | 0.001479 | 0.001628 | 0.001502 |
| mp_back_2.test | RUN | 0.020976 | 0.041749 | 0.073832 | 0.000473 | 0.000537 | 0.001594 |
| mp_pop_back.test | RUN | 0.356806 | 3.786719 | 1.159709 | 0.001252 | 0.001586 | 0.001623 |
| mp_pop_back_2.test | RUN | 0.021040 | 0.041106 | 0.064608 | 0.000576 | 0.000535 | 0.001623 |
| mp_flatten.test | RUN | 0.166479 | 1.333166 | 0.759096 | 0.001402 | 0.001507 | 0.001688 |
| mp_rotate_left.test | RUN | 0.162090 | 1.449769 | 0.741610 | 0.001580 | 0.001504 | 0.001628 |
| mp_rotate_right.test | RUN | 0.168376 | 1.441975 | 0.743831 | 0.001168 | 0.001576 | 0.001393 |
| mp_power_set.test | RUN | 0.161510 | 1.351662 | 0.730527 | 0.001550 | 0.001490 | 0.001702 |
| mp_partial_sum.test | RUN | 0.220079 | 1.834666 | 0.837791 | 0.001266 | 0.001474 | 0.001382 |
| mp_iterate.test | RUN | 0.147843 | 0.558158 | 0.577710 | 0.001387 | 0.001550 | 0.001500 |
| mp_pairwise_fold.test | RUN | 0.170074 | 1.269805 | 0.740210 | 0.001384 | 0.001622 | 0.001546 |
| mp_pairwise_fold_q.test | RUN | 0.130061 | 0.370699 | 0.426082 | 0.001617 | 0.001337 | 0.001617 |
| mp_sliding_fold.test | RUN | 0.290797 | 2.434767 | 1.457409 | 0.001410 | 0.001458 | 0.001554 |
| mp_sliding_fold_q.test | RUN | 0.290535 | 2.420763 | 1.438604 | 0.001370 | 0.001424 | 0.001684 |
| mp_intersperse.test | RUN | 0.148392 | 0.912748 | 0.638483 | 0.001500 | 0.001593 | 0.001586 |
| mp_split.test | RUN | 0.217192 | 1.749592 | 0.910834 | 0.001309 | 0.001522 | 0.001283 |
| mp_join.test | RUN | 0.171777 | 1.469083 | 0.813935 | 0.001354 | 0.001681 | 0.001778 |
| integral.test | RUN | 0.133614 | 0.663837 | 0.514949 | 0.001475 | 0.001620 | 0.001663 |
| mp_value.test | RUN | 0.009818 | 0.022557 | 0.036003 | 0.000619 | 0.000596 | 0.001719 |
| mp_identity.test | RUN | 0.128038 | 0.593023 | 0.488347 | 0.001468 | 0.001361 | 0.001629 |
| mp_inherit.test | RUN | 0.122336 | 0.438818 | 0.430820 | 0.001396 | 0.001554 | 0.001741 |
| mp_if.test | RUN | 0.129138 | 0.492630 | 0.440350 | 0.001286 | 0.001504 | 0.001721 |
| mp_if_sf.test | RUN | 0.124958 | 0.369321 | 0.408039 | 0.001369 | 0.001648 | 0.001651 |
| mp_eval_if.test | RUN | 0.128724 | 0.522591 | 0.451858 | 0.001366 | 0.001463 | 0.001730 |
| mp_eval_if_sf.test | RUN | 0.120408 | 0.379504 | 0.393592 | 0.001270 | 0.001373 | 0.001592 |
| mp_valid.test | RUN | 0.122433 | 0.376801 | 0.421411 | 0.001270 | 0.001582 | 0.001449 |
| mp_defer.test | RUN | 0.131792 | 0.638745 | 0.495309 | 0.001396 | 0.001643 | 0.001563 |
| mp_quote.test | RUN | 0.132436 | 0.635491 | 0.517716 | 0.001555 | 0.001409 | 0.001462 |
| mp_invoke_q.test | RUN | 0.142300 | 0.835642 | 0.571955 | 0.001181 | 0.001640 | 0.001683 |
| mp_invoke_q_sf.test | RUN | 0.120592 | 0.376736 | 0.396117 | 0.001254 | 0.001652 | 0.001712 |
| mp_quote_trait.test | RUN | 0.131973 | 0.705221 | 0.485478 | 0.001314 | 0.001283 | 0.001691 |
| mp_cond.test | RUN | 0.123184 | 0.432586 | 0.426225 | 0.001422 | 0.001335 | 0.001590 |
| mp_cond_sf.test | RUN | 0.116177 | 0.367109 | 0.407669 | 0.001324 | 0.001420 | 0.001674 |
| mp_not_fn.test | RUN | 0.116033 | 0.371285 | 0.376814 | 0.001372 | 0.001547 | 0.001771 |
| mp_eval_if_not.test | RUN | 0.127973 | 0.518569 | 0.458903 | 0.001386 | 0.001450 | 0.001530 |
| mp_eval_or.test | RUN | 0.121005 | 0.279561 | 0.409006 | 0.001347 | 0.001470 | 0.001368 |
| mp_compose.test | RUN | 0.131434 | 0.842017 | 0.560824 | 0.001176 | 0.001585 | 0.001494 |
| mp_valid_and_true.test | RUN | 0.118558 | 0.445236 | 0.438200 | 0.001269 | 0.001451 | 0.001632 |
| mp_compose_sf.test | COMPILE | 0.029650 | 0.052911 | 0.093297 | — | — | — |
| integer_sequence.test | RUN | 0.144253 | 0.857723 | 0.595029 | 0.001340 | 0.001522 | 0.001517 |
| tuple_for_each.test | RUN | 0.120920 | 0.327634 | 0.410004 | 0.001417 | 0.001487 | 0.001653 |
| tuple_for_each_cx.test | COMPILE | 0.023150 | 0.046406 | 0.077632 | — | — | — |
| tuple_apply.test | RUN | 0.127775 | 0.325420 | 0.432868 | 0.001415 | 0.001372 | 0.001444 |
| tuple_apply_cx.test | COMPILE | 0.032982 | 0.063296 | 0.106471 | — | — | — |
| construct_from_tuple.test | RUN | 0.125591 | 0.334868 | 0.415104 | 0.001314 | 0.001547 | 0.001497 |
| construct_from_tuple_cx.test | COMPILE | 0.034095 | 0.061909 | 0.105391 | — | — | — |
| tuple_transform.test | RUN | 0.199279 | 0.675329 | 0.845967 | 0.001259 | 0.001567 | 0.001533 |
| tuple_transform_2.test | RUN | 0.176972 | 0.486938 | 0.756081 | 0.001386 | 0.001338 | 0.001523 |
| tuple_transform_cx.test | COMPILE | 0.029000 | 0.061161 | 0.106535 | — | — | — |
| mp_set_contains.test | RUN | 0.130548 | 0.447847 | 0.427751 | 0.001455 | 0.001568 | 0.001565 |
| mp_set_push_back.test | RUN | 0.165918 | 1.391487 | 0.749938 | 0.001572 | 0.001483 | 0.001736 |
| mp_set_push_front.test | RUN | 0.204570 | 1.663958 | 0.869415 | 0.001432 | 0.001544 | 0.001662 |
| mp_is_set.test | RUN | 0.127217 | 0.453579 | 0.446423 | 0.001565 | 0.001972 | 0.001730 |
| mp_set_union.test | RUN | 0.150230 | 1.187161 | 0.700263 | 0.001281 | 0.001610 | 0.001481 |
| mp_set_union_sf.test | RUN | 0.124868 | 0.375516 | 0.429000 | 0.001390 | 0.001646 | 0.001656 |
| mp_set_difference.test | RUN | 0.143683 | 0.920945 | 0.587587 | 0.001418 | 0.001426 | 0.001632 |
| mp_set_difference_sf.test | RUN | 0.121696 | 0.368941 | 0.397788 | 0.001333 | 0.001534 | 0.001569 |
| mp_set_intersection.test | RUN | 0.141240 | 0.918759 | 0.581545 | 0.001344 | 0.001656 | 0.001746 |
| mp_set_intersection_sf.test | RUN | 0.123809 | 0.353607 | 0.391126 | 0.001249 | 0.001500 | 0.001401 |
| mp_all.test | RUN | 0.125925 | 0.445523 | 0.435218 | 0.001572 | 0.001618 | 0.001709 |
| mp_all_2.test | RUN | 0.374038 | 1.000314 | 0.995495 | 0.001504 | 0.002072 | 0.001756 |
| mp_and.test | RUN | 0.128543 | 0.445510 | 0.422329 | 0.001430 | 0.001640 | 0.001625 |
| mp_any.test | RUN | 0.129346 | 0.439995 | 0.431411 | 0.001572 | 0.001612 | 0.001670 |
| mp_any_2.test | RUN | 0.368564 | 0.989742 | 0.997051 | 0.001449 | 0.001647 | 0.001418 |
| mp_or.test | RUN | 0.128195 | 0.468331 | 0.437078 | 0.001575 | 0.001725 | 0.001753 |
| mp_same.test | RUN | 0.246346 | 0.756043 | 0.676145 | 0.001290 | 0.001732 | 0.001759 |
| mp_plus.test | RUN | 0.132534 | 0.556708 | 0.487969 | 0.001303 | 0.001662 | 0.001603 |
| mp_less.test | RUN | 0.129060 | 0.475868 | 0.437345 | 0.001527 | 0.001604 | 0.001690 |
| mp_min.test | RUN | 0.121581 | 0.422222 | 0.399631 | 0.001484 | 0.001613 | 0.001705 |
| mp_max.test | RUN | 0.125173 | 0.458574 | 0.439940 | 0.001274 | 0.001586 | 0.001376 |
| mp_similar.test | RUN | 0.124261 | 0.442559 | 0.430997 | 0.001219 | 0.001267 | 0.001641 |
| mp_map_find.test | RUN | 0.141728 | 0.812158 | 0.563063 | 0.001621 | 0.001429 | 0.001695 |
| mp_map_find_2.test | RUN | 0.136480 | 0.317856 | 0.494424 | 0.001506 | 0.001533 | 0.001414 |
| mp_map_find_3.test | RUN | 0.131884 | 0.326022 | 0.480409 | 0.001336 | 0.001481 | 0.001732 |
| mp_map_find_4.test | RUN | 0.130917 | 0.299811 | 0.465682 | 0.001356 | 0.001398 | 0.001717 |
| mp_map_contains.test | RUN | 0.132061 | 0.468028 | 0.462973 | 0.001570 | 0.001618 | 0.001708 |
| mp_map_insert.test | RUN | 0.171712 | 1.534254 | 0.843413 | 0.001426 | 0.001476 | 0.001686 |
| mp_map_replace.test | RUN | 0.217148 | 1.764322 | 0.959785 | 0.001403 | 0.001586 | 0.001382 |
| mp_map_erase.test | RUN | 0.161738 | 1.316618 | 0.803852 | 0.001374 | 0.001410 | 0.001524 |
| mp_map_update.test | RUN | 0.150614 | 0.836519 | 0.618860 | 0.001449 | 0.001512 | 0.001517 |
| mp_map_update_q.test | RUN | 0.146712 | 0.830583 | 0.609638 | 0.001577 | 0.001584 | 0.001828 |
| mp_map_keys.test | RUN | 0.143912 | 0.752177 | 0.581994 | 0.001218 | 0.001623 | 0.001496 |
| mp_is_map.test | RUN | 0.127608 | 0.465560 | 0.474565 | 0.001265 | 0.001463 | 0.001514 |
| mp_bind.test | RUN | 0.164639 | 1.365748 | 0.711907 | 0.001544 | 0.001553 | 0.001734 |
| mp_bind_q.test | RUN | 0.143378 | 0.840901 | 0.567168 | 0.001354 | 0.001550 | 0.001371 |
| mp_bind_front.test | RUN | 0.139529 | 0.910648 | 0.553127 | 0.001314 | 0.001431 | 0.001343 |
| mp_bind_back.test | RUN | 0.139646 | 0.898759 | 0.530143 | 0.001190 | 0.001427 | 0.001100 |
| mp_lambda.test | RUN | 0.302286 | 2.825007 | 1.503663 | 0.001364 | 0.001073 | 0.001480 |
| mpl.test | RUN | 0.273612 | 0.706746 | 1.150144 | 0.001467 | 0.001080 | 0.001227 |
| mpl_list.test | RUN | 0.157875 | 0.544981 | 0.528311 | 0.001289 | 0.001309 | 0.001508 |
| mpl_tuple.test | RUN | 0.156716 | 0.554789 | 0.538191 | 0.001275 | 0.001396 | 0.001496 |
| version.test | RUN | 0.081328 | 0.205572 | 0.265751 | 0.001519 | 0.001582 | 0.001360 |
| mp11_version.test | RUN | 0.099677 | 0.219888 | 0.336111 | 0.001294 | 0.001166 | 0.001724 |
| list_version.test | RUN | 0.082615 | 0.194544 | 0.276027 | 0.001246 | 0.001222 | 0.001376 |
| algorithm_version.test | RUN | 0.097346 | 0.213901 | 0.296350 | 0.001574 | 0.001589 | 0.001450 |
| integral_version.test | RUN | 0.081405 | 0.199280 | 0.263023 | 0.001358 | 0.001385 | 0.001505 |
| utility_version.test | RUN | 0.080593 | 0.207615 | 0.262934 | 0.001193 | 0.001225 | 0.001104 |
| function_version.test | RUN | 0.084390 | 0.209901 | 0.280546 | 0.001669 | 0.001445 | 0.001350 |
| map_version.test | RUN | 0.093004 | 0.205128 | 0.303327 | 0.001543 | 0.001193 | 0.001718 |
| set_version.test | RUN | 0.084389 | 0.192681 | 0.283881 | 0.001451 | 0.001266 | 0.001571 |
| bind_version.test | RUN | 0.091595 | 0.208587 | 0.284403 | 0.001399 | 0.001299 | 0.001327 |
| integer_sequence_version.test | RUN | 0.079383 | 0.193464 | 0.241091 | 0.001080 | 0.001542 | 0.001710 |
| tuple_version.test | RUN | 0.094086 | 0.221455 | 0.223234 | 0.001157 | 0.001091 | 0.001218 |
| mpl_version.test | RUN | 0.069575 | 0.152801 | 0.253916 | 0.001115 | 0.001177 | 0.001262 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 1.001× | 0.986×, 1.015× | 1.033× |
| clang | 1.057×† | 1.091×, 1.023× | 1.002× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1363 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43658654032).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| algorithm_version.test | 10 | 0.000883s | 0.000887s | 0.000890s | byte equality observed |
| bind_version.test | 10 | 0.000880s | 0.000872s | 0.000925s | byte equality observed |
| construct_from_tuple.test | 10 | 0.000901s | 0.000904s | 0.000878s | byte equality observed |
| function_version.test | 10 | 0.000872s | 0.000929s | 0.000912s | byte equality observed |
| integer_sequence.test | 10 | 0.000888s | 0.000933s | 0.000906s | byte equality observed |
| integer_sequence_version.test | 10 | 0.000894s | 0.000889s | 0.000913s | byte equality observed |
| integral.test | 10 | 0.000899s | 0.000903s | 0.000909s | byte equality observed |
| integral_version.test | 10 | 0.000913s | 0.000913s | 0.000897s | byte equality observed |
| list_version.test | 10 | 0.000907s | 0.000917s | 0.000901s | byte equality observed |
| map_version.test | 10 | 0.000909s | 0.000923s | 0.000920s | byte equality observed |
| mp11_version.test | 10 | 0.000902s | 0.000911s | 0.000894s | byte equality observed |
| mp_all.test | 10 | 0.000891s | 0.000934s | 0.000893s | byte equality observed |
| mp_all_2.test | 10 | 0.000915s | 0.000903s | 0.000892s | byte equality observed |
| mp_all_of.test | 10 | 0.000924s | 0.000944s | 0.000878s | byte equality observed |
| mp_all_of_q.test | 10 | 0.000900s | 0.000914s | 0.000900s | byte equality observed |
| mp_and.test | 10 | 0.000904s | 0.000922s | 0.000871s | byte equality observed |
| mp_any.test | 10 | 0.000915s | 0.000925s | 0.000885s | byte equality observed |
| mp_any_2.test | 10 | 0.000907s | 0.000914s | 0.000878s | byte equality observed |
| mp_any_of.test | 10 | 0.000909s | 0.000921s | 0.000889s | byte equality observed |
| mp_any_of_q.test | 10 | 0.000887s | 0.000929s | 0.000888s | byte equality observed |
| mp_append.test | 10 | 0.000903s | 0.000923s | 0.000899s | byte equality observed |
| mp_append_2.test | 10 | 0.000928s | 0.000911s | 0.000895s | byte equality observed |
| mp_append_3.test | 10 | 0.000412s | 0.000417s | 0.000874s | byte equality observed |
| mp_append_sf.test | 10 | 0.000904s | 0.000941s | 0.000875s | byte equality observed |
| mp_apply_q.test | 10 | 0.000911s | 0.000912s | 0.000902s | byte equality observed |
| mp_apply_q_sf.test | 10 | 0.000904s | 0.000908s | 0.000901s | byte equality observed |
| mp_assign.test | 10 | 0.000900s | 0.000919s | 0.000890s | byte equality observed |
| mp_assign_2.test | 10 | 0.000411s | 0.000417s | 0.000866s | byte equality observed |
| mp_at.test | 10 | 0.000913s | 0.000948s | 0.000878s | byte equality observed |
| mp_at_2.test | 10 | 0.000410s | 0.000405s | 0.000864s | byte equality observed |
| mp_at_sf.test | 10 | 0.000887s | 0.000922s | 0.000899s | byte equality observed |
| mp_back.test | 10 | 0.000917s | 0.000915s | 0.000882s | byte equality observed |
| mp_back_2.test | 10 | 0.000415s | 0.000418s | 0.000889s | byte equality observed |
| mp_bind.test | 10 | 0.000927s | 0.000939s | 0.000900s | byte equality observed |
| mp_bind_back.test | 10 | 0.000910s | 0.000919s | 0.000886s | byte equality observed |
| mp_bind_front.test | 10 | 0.000919s | 0.000916s | 0.000868s | byte equality observed |
| mp_bind_q.test | 10 | 0.000901s | 0.000918s | 0.000916s | byte equality observed |
| mp_clear.test | 10 | 0.000920s | 0.000917s | 0.000902s | byte equality observed |
| mp_clear_2.test | 10 | 0.000421s | 0.000416s | 0.000876s | byte equality observed |
| mp_compose.test | 10 | 0.000923s | 0.000917s | 0.000884s | byte equality observed |
| mp_cond.test | 10 | 0.000893s | 0.000900s | 0.000892s | byte equality observed |
| mp_cond_sf.test | 10 | 0.000909s | 0.000898s | 0.000881s | byte equality observed |
| mp_contains.test | 10 | 0.000896s | 0.000919s | 0.000883s | byte equality observed |
| mp_copy_if.test | 10 | 0.000891s | 0.000894s | 0.000887s | byte equality observed |
| mp_copy_if_q.test | 10 | 0.000904s | 0.000898s | 0.000895s | byte equality observed |
| mp_count.test | 10 | 0.000908s | 0.000904s | 0.000901s | byte equality observed |
| mp_count_if.test | 10 | 0.000904s | 0.000920s | 0.000895s | byte equality observed |
| mp_count_if_q.test | 10 | 0.000917s | 0.000919s | 0.000909s | byte equality observed |
| mp_defer.test | 10 | 0.000897s | 0.000911s | 0.000876s | byte equality observed |
| mp_drop.test | 10 | 0.000898s | 0.000906s | 0.000887s | byte equality observed |
| mp_drop_2.test | 10 | 0.000416s | 0.000405s | 0.000879s | byte equality observed |
| mp_empty.test | 10 | 0.000919s | 0.000906s | 0.000894s | byte equality observed |
| mp_empty_2.test | 10 | 0.000419s | 0.000411s | 0.000879s | byte equality observed |
| mp_erase.test | 10 | 0.000925s | 0.000924s | 0.000886s | byte equality observed |
| mp_erase_2.test | 10 | 0.000422s | 0.000406s | 0.000869s | byte equality observed |
| mp_eval_if.test | 10 | 0.000897s | 0.000909s | 0.000896s | byte equality observed |
| mp_eval_if_not.test | 10 | 0.000910s | 0.000920s | 0.000897s | byte equality observed |
| mp_eval_if_sf.test | 10 | 0.000904s | 0.000899s | 0.000889s | byte equality observed |
| mp_eval_or.test | 10 | 0.000884s | 0.000886s | 0.000891s | byte equality observed |
| mp_fill.test | 10 | 0.000906s | 0.000900s | 0.000889s | byte equality observed |
| mp_fill_2.test | 10 | 0.000419s | 0.000417s | 0.000868s | byte equality observed |
| mp_filter.test | 10 | 0.000889s | 0.000898s | 0.000878s | byte equality observed |
| mp_find.test | 10 | 0.000903s | 0.000919s | 0.000901s | byte equality observed |
| mp_find_if.test | 10 | 0.000914s | 0.000918s | 0.000897s | byte equality observed |
| mp_find_if_q.test | 10 | 0.000903s | 0.000912s | 0.000904s | byte equality observed |
| mp_flatten.test | 10 | 0.000921s | 0.000909s | 0.000891s | byte equality observed |
| mp_fold.test | 10 | 0.000931s | 0.000914s | 0.000898s | byte equality observed |
| mp_fold_q.test | 10 | 0.000910s | 0.000899s | 0.000916s | byte equality observed |
| mp_fold_q_sf.test | 10 | 0.000907s | 0.000889s | 0.000886s | byte equality observed |
| mp_for_each.test | 10 | 0.000889s | 0.000892s | 0.000882s | byte equality observed |
| mp_from_sequence.test | 10 | 0.000908s | 0.000907s | 0.000906s | byte equality observed |
| mp_from_sequence_2.test | 10 | 0.000903s | 0.000888s | 0.000899s | byte equality observed |
| mp_from_sequence_3.test | 10 | 0.000901s | 0.000900s | 0.000883s | byte equality observed |
| mp_front.test | 10 | 0.000913s | 0.000927s | 0.000883s | byte equality observed |
| mp_front_2.test | 10 | 0.000417s | 0.000411s | 0.000874s | byte equality observed |
| mp_identity.test | 10 | 0.000882s | 0.000893s | 0.000895s | byte equality observed |
| mp_if.test | 10 | 0.000871s | 0.000882s | 0.000876s | byte equality observed |
| mp_if_sf.test | 10 | 0.000897s | 0.000895s | 0.000898s | byte equality observed |
| mp_inherit.test | 10 | 0.000888s | 0.000865s | 0.000893s | byte equality observed |
| mp_insert.test | 10 | 0.000928s | 0.000910s | 0.000894s | byte equality observed |
| mp_insert_2.test | 10 | 0.000420s | 0.000411s | 0.000863s | byte equality observed |
| mp_intersperse.test | 10 | 0.000893s | 0.000894s | 0.000884s | byte equality observed |
| mp_invoke_q.test | 10 | 0.000895s | 0.000895s | 0.000895s | byte equality observed |
| mp_invoke_q_sf.test | 10 | 0.000897s | 0.000924s | 0.000899s | byte equality observed |
| mp_iota.test | 10 | 0.000903s | 0.000887s | 0.000903s | byte equality observed |
| mp_iota_2.test | 10 | 0.000893s | 0.000898s | 0.000903s | byte equality observed |
| mp_is_list.test | 10 | 0.000904s | 0.000927s | 0.000881s | byte equality observed |
| mp_is_map.test | 10 | 0.000904s | 0.000888s | 0.000903s | byte equality observed |
| mp_is_set.test | 10 | 0.000891s | 0.000904s | 0.000898s | byte equality observed |
| mp_is_value_list.test | 10 | 0.000894s | 0.000873s | 0.000881s | byte equality observed |
| mp_iterate.test | 10 | 0.000896s | 0.000895s | 0.000877s | byte equality observed |
| mp_join.test | 10 | 0.000887s | 0.000896s | 0.000884s | byte equality observed |
| mp_lambda.test | 10 | 0.000906s | 0.000924s | 0.000906s | byte equality observed |
| mp_less.test | 10 | 0.000891s | 0.000902s | 0.000887s | byte equality observed |
| mp_list_c.test | 10 | 0.000914s | 0.000908s | 0.000893s | byte equality observed |
| mp_list_v.test | 10 | 0.000418s | 0.000416s | 0.000880s | byte equality observed |
| mp_map_contains.test | 10 | 0.000908s | 0.000906s | 0.000891s | byte equality observed |
| mp_map_erase.test | 10 | 0.000898s | 0.000884s | 0.000881s | byte equality observed |
| mp_map_find.test | 10 | 0.000883s | 0.000902s | 0.000884s | byte equality observed |
| mp_map_find_2.test | 10 | 0.000904s | 0.000880s | 0.000899s | byte equality observed |
| mp_map_find_3.test | 10 | 0.000923s | 0.000884s | 0.000920s | byte equality observed |
| mp_map_find_4.test | 10 | 0.000904s | 0.000911s | 0.000901s | byte equality observed |
| mp_map_insert.test | 10 | 0.000920s | 0.000905s | 0.000906s | byte equality observed |
| mp_map_keys.test | 10 | 0.000894s | 0.000894s | 0.000894s | byte equality observed |
| mp_map_replace.test | 10 | 0.000912s | 0.000906s | 0.000887s | byte equality observed |
| mp_map_update.test | 10 | 0.000900s | 0.000896s | 0.000889s | byte equality observed |
| mp_map_update_q.test | 10 | 0.000905s | 0.000892s | 0.000894s | byte equality observed |
| mp_max.test | 10 | 0.000914s | 0.000923s | 0.000893s | byte equality observed |
| mp_max_element.test | 10 | 0.000911s | 0.000926s | 0.000891s | byte equality observed |
| mp_max_element_2.test | 10 | 0.000416s | 0.000416s | 0.000885s | byte equality observed |
| mp_max_element_q.test | 10 | 0.000917s | 0.000880s | 0.000872s | byte equality observed |
| mp_max_element_q_2.test | 10 | 0.000411s | 0.000414s | 0.000882s | byte equality observed |
| mp_min.test | 10 | 0.000902s | 0.000895s | 0.000887s | byte equality observed |
| mp_min_element.test | 10 | 0.000897s | 0.000893s | 0.000891s | byte equality observed |
| mp_min_element_2.test | 10 | 0.000411s | 0.000404s | 0.000855s | byte equality observed |
| mp_min_element_q.test | 10 | 0.000935s | 0.000908s | 0.000875s | byte equality observed |
| mp_min_element_q_2.test | 10 | 0.000415s | 0.000401s | 0.000872s | byte equality observed |
| mp_none_of.test | 10 | 0.000916s | 0.000887s | 0.000913s | byte equality observed |
| mp_none_of_q.test | 10 | 0.000902s | 0.000882s | 0.000912s | byte equality observed |
| mp_not_fn.test | 10 | 0.000904s | 0.000885s | 0.000925s | byte equality observed |
| mp_nth_element.test | 10 | 0.000924s | 0.000878s | 0.000898s | byte equality observed |
| mp_nth_element_q.test | 10 | 0.000902s | 0.000892s | 0.000888s | byte equality observed |
| mp_or.test | 10 | 0.000899s | 0.000892s | 0.000904s | byte equality observed |
| mp_pairwise_fold.test | 10 | 0.000913s | 0.000877s | 0.000916s | byte equality observed |
| mp_pairwise_fold_q.test | 10 | 0.000901s | 0.000880s | 0.000898s | byte equality observed |
| mp_partial_sum.test | 10 | 0.000923s | 0.000878s | 0.000908s | byte equality observed |
| mp_partition.test | 10 | 0.000919s | 0.000882s | 0.000875s | byte equality observed |
| mp_partition_q.test | 10 | 0.000927s | 0.000886s | 0.000891s | byte equality observed |
| mp_plus.test | 10 | 0.000912s | 0.000888s | 0.000886s | byte equality observed |
| mp_pop_back.test | 10 | 0.000945s | 0.000902s | 0.000891s | byte equality observed |
| mp_pop_back_2.test | 10 | 0.000416s | 0.000409s | 0.000848s | byte equality observed |
| mp_pop_front.test | 10 | 0.000922s | 0.000904s | 0.000896s | byte equality observed |
| mp_pop_front_2.test | 10 | 0.000405s | 0.000401s | 0.000863s | byte equality observed |
| mp_power_set.test | 10 | 0.000904s | 0.000901s | 0.000902s | byte equality observed |
| mp_product.test | 10 | 0.000900s | 0.000891s | 0.000892s | byte equality observed |
| mp_push_back.test | 10 | 0.000917s | 0.000897s | 0.000878s | byte equality observed |
| mp_push_back_2.test | 10 | 0.000412s | 0.000415s | 0.000879s | byte equality observed |
| mp_push_front.test | 10 | 0.000908s | 0.000902s | 0.000878s | byte equality observed |
| mp_push_front_2.test | 10 | 0.000414s | 0.000404s | 0.000894s | byte equality observed |
| mp_quote.test | 10 | 0.000920s | 0.000890s | 0.000904s | byte equality observed |
| mp_quote_trait.test | 10 | 0.000908s | 0.000888s | 0.000891s | byte equality observed |
| mp_remove.test | 10 | 0.000911s | 0.000872s | 0.000883s | byte equality observed |
| mp_remove_if.test | 10 | 0.000909s | 0.000874s | 0.000890s | byte equality observed |
| mp_remove_if_q.test | 10 | 0.000921s | 0.000888s | 0.000888s | byte equality observed |
| mp_rename.test | 10 | 0.000916s | 0.000917s | 0.000886s | byte equality observed |
| mp_rename_2.test | 10 | 0.000418s | 0.000402s | 0.000863s | byte equality observed |
| mp_rename_v.test | 10 | 0.000407s | 0.000409s | 0.000849s | byte equality observed |
| mp_repeat.test | 10 | 0.000964s | 0.000931s | 0.000877s | byte equality observed |
| mp_repeat_2.test | 10 | 0.000410s | 0.000408s | 0.000880s | byte equality observed |
| mp_repeat_3.test | 10 | 0.000913s | 0.000885s | 0.000879s | byte equality observed |
| mp_replace.test | 10 | 0.000913s | 0.000892s | 0.000889s | byte equality observed |
| mp_replace_at.test | 10 | 0.000905s | 0.000882s | 0.000895s | byte equality observed |
| mp_replace_at_c.test | 10 | 0.000897s | 0.000886s | 0.000899s | byte equality observed |
| mp_replace_front.test | 10 | 0.000921s | 0.000901s | 0.000895s | byte equality observed |
| mp_replace_front_2.test | 10 | 0.000412s | 0.000414s | 0.000869s | byte equality observed |
| mp_replace_if.test | 10 | 0.000916s | 0.000902s | 0.000900s | byte equality observed |
| mp_replace_if_q.test | 10 | 0.000912s | 0.000926s | 0.000897s | byte equality observed |
| mp_replace_second.test | 10 | 0.000915s | 0.000897s | 0.000876s | byte equality observed |
| mp_replace_second_2.test | 10 | 0.000416s | 0.000411s | 0.000885s | byte equality observed |
| mp_replace_third.test | 10 | 0.000925s | 0.000907s | 0.000882s | byte equality observed |
| mp_replace_third_2.test | 10 | 0.000416s | 0.000406s | 0.000868s | byte equality observed |
| mp_reverse.test | 10 | 0.000926s | 0.000888s | 0.000898s | byte equality observed |
| mp_reverse_fold.test | 10 | 0.000924s | 0.000887s | 0.000885s | byte equality observed |
| mp_reverse_fold_q.test | 10 | 0.000910s | 0.000877s | 0.000889s | byte equality observed |
| mp_rotate_left.test | 10 | 0.000903s | 0.000885s | 0.000904s | byte equality observed |
| mp_rotate_right.test | 10 | 0.000894s | 0.000898s | 0.000921s | byte equality observed |
| mp_same.test | 10 | 0.000907s | 0.000906s | 0.000927s | byte equality observed |
| mp_second.test | 10 | 0.000913s | 0.000904s | 0.000893s | byte equality observed |
| mp_second_2.test | 10 | 0.000405s | 0.000404s | 0.000880s | byte equality observed |
| mp_set_contains.test | 10 | 0.000902s | 0.000892s | 0.000889s | byte equality observed |
| mp_set_difference.test | 10 | 0.000894s | 0.000884s | 0.000879s | byte equality observed |
| mp_set_difference_sf.test | 10 | 0.000907s | 0.000871s | 0.000893s | byte equality observed |
| mp_set_intersection.test | 10 | 0.000887s | 0.000890s | 0.000875s | byte equality observed |
| mp_set_intersection_sf.test | 10 | 0.000913s | 0.000904s | 0.000903s | byte equality observed |
| mp_set_push_back.test | 10 | 0.000901s | 0.000896s | 0.000879s | byte equality observed |
| mp_set_push_front.test | 10 | 0.000916s | 0.000892s | 0.000907s | byte equality observed |
| mp_set_union.test | 10 | 0.000912s | 0.000900s | 0.000890s | byte equality observed |
| mp_set_union_sf.test | 10 | 0.000907s | 0.000883s | 0.000874s | byte equality observed |
| mp_similar.test | 10 | 0.000903s | 0.000907s | 0.000865s | byte equality observed |
| mp_size.test | 10 | 0.000914s | 0.000909s | 0.000877s | byte equality observed |
| mp_size_2.test | 10 | 0.000412s | 0.000413s | 0.000870s | byte equality observed |
| mp_slice.test | 10 | 0.000940s | 0.000912s | 0.000884s | byte equality observed |
| mp_slice_2.test | 10 | 0.000420s | 0.000410s | 0.000874s | byte equality observed |
| mp_sliding_fold.test | 10 | 0.000919s | 0.000905s | 0.000883s | byte equality observed |
| mp_sliding_fold_q.test | 10 | 0.000916s | 0.000908s | 0.000883s | byte equality observed |
| mp_sort.test | 10 | 0.000898s | 0.000921s | 0.000892s | byte equality observed |
| mp_sort_q.test | 10 | 0.000895s | 0.000900s | 0.000873s | byte equality observed |
| mp_split.test | 10 | 0.000933s | 0.000916s | 0.000891s | byte equality observed |
| mp_starts_with.test | 10 | 0.000902s | 0.000904s | 0.000887s | byte equality observed |
| mp_starts_with_sf.test | 10 | 0.000921s | 0.000893s | 0.000895s | byte equality observed |
| mp_take.test | 10 | 0.000934s | 0.000909s | 0.000860s | byte equality observed |
| mp_take_2.test | 10 | 0.000415s | 0.000398s | 0.000848s | byte equality observed |
| mp_third.test | 10 | 0.000935s | 0.000903s | 0.000893s | byte equality observed |
| mp_third_2.test | 10 | 0.000415s | 0.000406s | 0.000843s | byte equality observed |
| mp_transform.test | 10 | 0.000940s | 0.000893s | 0.000879s | byte equality observed |
| mp_transform_2.test | 10 | 0.000893s | 0.000872s | 0.000843s | byte equality observed |
| mp_transform_front.test | 10 | 0.000917s | 0.000897s | 0.000872s | byte equality observed |
| mp_transform_front_2.test | 10 | 0.000419s | 0.000405s | 0.000863s | byte equality observed |
| mp_transform_if.test | 10 | 0.000910s | 0.000899s | 0.000869s | byte equality observed |
| mp_transform_if_q.test | 10 | 0.000912s | 0.000890s | 0.000855s | byte equality observed |
| mp_transform_q.test | 10 | 0.000930s | 0.000915s | 0.000870s | byte equality observed |
| mp_transform_q_2.test | 10 | 0.000920s | 0.000889s | 0.000897s | byte equality observed |
| mp_transform_second.test | 10 | 0.000938s | 0.000914s | 0.000875s | byte equality observed |
| mp_transform_second_2.test | 10 | 0.000412s | 0.000413s | 0.000861s | byte equality observed |
| mp_transform_sf.test | 10 | 0.000909s | 0.000916s | 0.000874s | byte equality observed |
| mp_transform_third.test | 10 | 0.000913s | 0.000883s | 0.000887s | byte equality observed |
| mp_transform_third_2.test | 10 | 0.000415s | 0.000409s | 0.000864s | byte equality observed |
| mp_unique.test | 10 | 0.000916s | 0.000910s | 0.000897s | byte equality observed |
| mp_unique_if.test | 10 | 0.000940s | 0.000915s | 0.000888s | byte equality observed |
| mp_unique_if_q.test | 10 | 0.000930s | 0.000914s | 0.000886s | byte equality observed |
| mp_valid.test | 10 | 0.000894s | 0.000897s | 0.000878s | byte equality observed |
| mp_valid_and_true.test | 10 | 0.000940s | 0.000915s | 0.000883s | byte equality observed |
| mp_value.test | 10 | 0.000416s | 0.000407s | 0.000872s | byte equality observed |
| mp_with_index.test | 10 | 0.001318s | 0.001298s | 0.001168s | byte equality observed |
| mp_with_index_cx.test | 10 | 0.000415s | 0.000409s | 0.000880s | byte equality observed |
| mpl.test | 10 | 0.000932s | 0.000911s | 0.000897s | byte equality observed |
| mpl_list.test | 10 | 0.000900s | 0.000898s | 0.000912s | byte equality observed |
| mpl_tuple.test | 10 | 0.000905s | 0.000887s | 0.000883s | byte equality observed |
| mpl_version.test | 10 | 0.000896s | 0.000897s | 0.000916s | byte equality observed |
| set_version.test | 10 | 0.000890s | 0.000892s | 0.000904s | byte equality observed |
| tuple_apply.test | 10 | 0.000907s | 0.000882s | 0.000896s | byte equality observed |
| tuple_for_each.test | 10 | 0.000921s | 0.000907s | 0.000886s | byte equality observed |
| tuple_transform.test | 10 | 0.000916s | 0.000889s | 0.000875s | byte equality observed |
| tuple_transform_2.test | 10 | 0.000894s | 0.000895s | 0.000908s | byte equality observed |
| tuple_version.test | 10 | 0.000913s | 0.000877s | 0.000888s | byte equality observed |
| utility_version.test | 10 | 0.000908s | 0.000894s | 0.000898s | byte equality observed |
| version.test | 10 | 0.000902s | 0.000885s | 0.000885s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43658654032).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
