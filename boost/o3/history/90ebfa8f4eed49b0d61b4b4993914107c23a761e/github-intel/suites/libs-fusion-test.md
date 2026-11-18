# libs/fusion/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| all.test | RUN | 0.390852 | 0.868478 | 1.088933 | 0.001336 | 0.001526 | 0.001384 |
| any.test | RUN | 0.382268 | 0.828967 | 1.053097 | 0.001568 | 0.001522 | 0.001523 |
| clear.test | RUN | 0.282837 | 0.769362 | 0.870286 | 0.001360 | 0.001543 | 0.001658 |
| copy.test | RUN | 0.238302 | 0.568580 | 0.696959 | 0.001489 | 0.001628 | 0.001694 |
| count.test | RUN | 0.260935 | 0.637088 | 0.767935 | 0.001627 | 0.001481 | 0.001462 |
| count_if.test | RUN | 0.243715 | 0.594750 | 0.709028 | 0.001481 | 0.001567 | 0.001517 |
| erase.test | RUN | 0.354202 | 1.039370 | 1.164270 | 0.001704 | 0.001606 | 0.001554 |
| erase_key.test | RUN | 0.352192 | 1.036702 | 1.096708 | 0.001553 | 0.001514 | 0.001605 |
| filter.test | RUN | 0.317434 | 0.874707 | 0.994001 | 0.001747 | 0.001712 | 0.001651 |
| filter_if.test | RUN | 0.347596 | 1.042914 | 1.177849 | 0.001930 | 0.001605 | 0.001624 |
| find.test | RUN | 0.295876 | 0.704481 | 0.885563 | 0.001720 | 0.001520 | 0.001437 |
| find_if.test | RUN | 0.290094 | 0.653603 | 0.816508 | 0.001509 | 0.001528 | 0.001565 |
| fold.test | RUN | 0.322061 | 0.801511 | 0.992407 | 0.001664 | 0.001750 | 0.001583 |
| for_each.test | RUN | 0.285146 | 0.741075 | 0.854072 | 0.001562 | 0.001624 | 0.001605 |
| insert.test | RUN | 0.415745 | 1.283131 | 1.414861 | 0.001652 | 0.001505 | 0.001573 |
| insert_range.test | RUN | 0.421202 | 1.296064 | 1.413471 | 0.001548 | 0.001510 | 0.001564 |
| iter_fold.test | RUN | 0.472327 | 1.226006 | 1.664600 | 0.001990 | 0.001769 | 0.001587 |
| move.test | RUN | 0.241929 | 0.591172 | 0.729486 | 0.001574 | 0.001723 | 0.001536 |
| none.test | RUN | 0.391772 | 0.851124 | 1.072840 | 0.001586 | 0.001593 | 0.001528 |
| pop_back.test | RUN | 0.372271 | 1.128533 | 1.243616 | 0.001556 | 0.001701 | 0.001618 |
| pop_front.test | RUN | 0.323454 | 0.914548 | 1.010126 | 0.001687 | 0.001798 | 0.001595 |
| push_back.test | RUN | 0.405779 | 1.297017 | 1.377532 | 0.001635 | 0.001778 | 0.001667 |
| push_front.test | RUN | 0.353147 | 1.089849 | 1.169615 | 0.001560 | 0.001768 | 0.001557 |
| remove.test | RUN | 0.406172 | 1.246118 | 1.362745 | 0.001570 | 0.001806 | 0.001660 |
| remove_if.test | RUN | 0.349494 | 1.018799 | 1.158688 | 0.001551 | 0.001563 | 0.001621 |
| replace.test | RUN | 0.349288 | 0.995662 | 1.095967 | 0.001376 | 0.001800 | 0.001613 |
| replace_if.test | RUN | 0.337365 | 0.992950 | 1.093164 | 0.001622 | 0.001776 | 0.001733 |
| reverse_fold.test | RUN | 0.528816 | 1.376400 | 1.813547 | 0.001802 | 0.001666 | 0.001652 |
| reverse_iter_fold.test | RUN | 0.528708 | 1.412472 | 1.901523 | 0.001560 | 0.001644 | 0.001688 |
| reverse.test | RUN | 0.342184 | 1.033967 | 1.105630 | 0.001704 | 0.001712 | 0.001599 |
| segmented_for_each.test | RUN | 0.567659 | 1.919853 | 2.255049 | 0.001810 | 0.001781 | 0.001471 |
| segmented_find.test | RUN | 0.347629 | 1.009311 | 1.243507 | 0.001614 | 0.001748 | 0.001530 |
| segmented_find_if.test | RUN | 0.346452 | 1.041185 | 1.233348 | 0.001508 | 0.001592 | 0.001649 |
| segmented_fold.test | RUN | 0.441401 | 1.318704 | 1.615796 | 0.001720 | 0.001966 | 0.001606 |
| transform.test | RUN | 0.351469 | 1.072598 | 1.169354 | 0.001548 | 0.001586 | 0.001666 |
| join.test | RUN | 0.266859 | 0.652330 | 0.814681 | 0.001529 | 0.001842 | 0.001720 |
| zip.test | RUN | 0.444094 | 1.252616 | 1.542844 | 0.001521 | 0.001789 | 0.001502 |
| zip2.test | RUN | 0.440577 | 1.195835 | 1.461957 | 0.001424 | 0.001594 | 0.001633 |
| zip_ignore.test | RUN | 0.343182 | 0.821805 | 0.983526 | 0.001446 | 0.001640 | 0.001548 |
| flatten.test | RUN | 0.313886 | 0.907151 | 1.022333 | 0.001561 | 0.001728 | 0.001574 |
| ticket-5490.test | COMPILE | 0.171599 | 0.382084 | 0.446123 | — | — | — |
| as_deque.test | RUN | 0.316770 | 0.850162 | 1.067667 | 0.001532 | 0.001677 | 0.001684 |
| as_list.test | RUN | 0.353986 | 1.057089 | 1.162808 | 0.001320 | 0.001597 | 0.001632 |
| as_map.test | RUN | 0.353370 | 1.031628 | 1.169457 | 0.001496 | 0.001420 | 0.001406 |
| as_map_assoc.test | RUN | 0.347845 | 0.955743 | 1.104981 | 0.001567 | 0.001631 | 0.001448 |
| as_set.test | RUN | 0.410025 | 1.210815 | 1.378707 | 0.001575 | 0.001582 | 0.001572 |
| as_vector.test | RUN | 0.360578 | 1.076186 | 1.211595 | 0.001501 | 0.001662 | 0.001404 |
| boost_tuple.test | RUN | 0.366481 | 1.072249 | 1.164584 | 0.001688 | 0.001476 | 0.001548 |
| boost_tuple_iterator.test | RUN | 0.244557 | 0.619823 | 0.700950 | 0.001552 | 0.001589 | 0.001726 |
| cons.test | RUN | 0.450895 | 1.208152 | 1.393047 | 0.001542 | 0.000952 | 0.001590 |
| convert_boost_tuple.test | RUN | 0.287652 | 0.920251 | 0.926964 | 0.001536 | 0.001656 | 0.001499 |
| convert_deque.test | RUN | 0.285036 | 0.922220 | 0.918090 | 0.001490 | 0.001149 | 0.001689 |
| convert_list.test | RUN | 0.287562 | 0.936082 | 0.938436 | 0.001506 | 0.001366 | 0.001479 |
| convert_std_pair.test | RUN | 0.302070 | 0.927480 | 0.928334 | 0.001719 | 0.001564 | 0.001508 |
| convert_std_tuple.test | RUN | 0.286766 | 0.913387 | 0.915708 | 0.001511 | 0.001500 | 0.001444 |
| convert_vector.test | RUN | 0.289246 | 0.909731 | 0.914394 | 0.001551 | 0.001778 | 0.001510 |
| filter_view.test | RUN | 0.352345 | 0.950633 | 1.068639 | 0.001515 | 0.001648 | 0.001621 |
| hash.test | RUN | 0.343501 | 0.888578 | 1.056072 | 0.001671 | 0.001672 | 0.001606 |
| io.test | RUN | 0.368552 | 1.240827 | 1.271522 | 0.001567 | 0.001866 | 0.001841 |
| iterator_range.test | RUN | 0.327501 | 0.930095 | 1.038599 | 0.001557 | 0.001721 | 0.001459 |
| joint_view.test | RUN | 0.443726 | 1.529811 | 1.547491 | 0.001726 | 0.001824 | 0.001695 |
| list_comparison.test | RUN | 0.255456 | 0.649528 | 0.730045 | 0.001618 | 0.001446 | 0.001561 |
| list_construction.test | RUN | 0.243589 | 0.599038 | 0.738172 | 0.001379 | 0.001699 | 0.001570 |
| list_copy.test | RUN | 0.379292 | 1.144726 | 1.272155 | 0.001577 | 0.001540 | 0.001592 |
| list_iterator.test | RUN | 0.243994 | 0.624748 | 0.705253 | 0.001528 | 0.001547 | 0.001425 |
| list_hash.test | RUN | 0.338658 | 1.261903 | 1.060380 | 0.001663 | 0.001834 | 0.001496 |
| list_make.test | RUN | 0.265414 | 0.701005 | 0.810979 | 0.001750 | 0.001479 | 0.001444 |
| list_misc.test | RUN | 0.344349 | 0.814429 | 0.968993 | 0.001528 | 0.001561 | 0.001549 |
| list_mutate.test | RUN | 0.233040 | 0.548867 | 0.656251 | 0.001606 | 0.001362 | 0.001673 |
| list_nest.test | RUN | 0.478446 | 1.529097 | 1.786854 | 0.001604 | 0.001458 | 0.001324 |
| list_tie.test | RUN | 0.249971 | 0.635178 | 0.734848 | 0.001622 | 0.001689 | 0.001636 |
| list_value_at.test | RUN | 0.244607 | 0.568133 | 0.668684 | 0.001410 | 0.001562 | 0.001625 |
| deque_comparison.test | RUN | 0.246308 | 0.650528 | 0.742799 | 0.001530 | 0.001796 | 0.001630 |
| deque_construction.test | RUN | 0.256747 | 0.611700 | 0.778302 | 0.001773 | 0.001639 | 0.001580 |
| deque_copy.test | RUN | 0.370991 | 1.046461 | 1.165109 | 0.001501 | 0.001671 | 0.001532 |
| deque_iterator.test | RUN | 0.245728 | 0.655440 | 0.721392 | 0.001405 | 0.001510 | 0.001565 |
| deque_hash.test | RUN | 0.349082 | 1.212203 | 1.039861 | 0.001485 | 0.001788 | 0.001546 |
| deque_is_constructible.test | COMPILE | 0.135620 | 0.290899 | 0.345233 | — | — | — |
| deque_make.test | RUN | 0.251264 | 0.652484 | 0.763404 | 0.001579 | 0.001542 | 0.001523 |
| deque_misc.test | RUN | 0.327408 | 0.788334 | 0.938581 | 0.001496 | 0.001712 | 0.001549 |
| deque_move.test | RUN | 0.254922 | 0.686465 | 0.752653 | 0.001558 | 0.001509 | 0.001601 |
| deque_mutate.test | RUN | 0.228808 | 0.545092 | 0.639130 | 0.001468 | 0.001615 | 0.001444 |
| deque_nest.test | RUN | 0.686372 | 2.429373 | 2.801473 | 0.001721 | 0.001571 | 0.001591 |
| deque_tie.test | RUN | 0.240558 | 0.602199 | 0.672290 | 0.001615 | 0.001507 | 0.001492 |
| deque_value_at.test | RUN | 0.233302 | 0.559617 | 0.680476 | 0.001449 | 0.001314 | 0.001582 |
| front_extended_deque.test | RUN | 0.336508 | 0.845069 | 0.989539 | 0.001638 | 0.001764 | 0.001510 |
| back_extended_deque.test | RUN | 0.336658 | 0.820663 | 0.975114 | 0.001669 | 0.001656 | 0.001394 |
| make_list.test | RUN | 0.269257 | 0.678172 | 0.803821 | 0.001584 | 0.001573 | 0.001562 |
| make_vector.test | RUN | 0.259610 | 0.668787 | 0.754084 | 0.001632 | 0.001751 | 0.001544 |
| map.test | RUN | 0.348850 | 1.045281 | 1.121075 | 0.001535 | 0.001718 | 0.001682 |
| map_comparison.test | RUN | 0.260256 | 0.653072 | 0.768627 | 0.001493 | 0.001647 | 0.001620 |
| map_construction.test | RUN | 0.255449 | 0.622596 | 0.753636 | 0.001488 | 0.001644 | 0.001586 |
| map_copy.test | RUN | 0.303383 | 0.813483 | 0.931073 | 0.001572 | 0.001621 | 0.001749 |
| map_misc.test | RUN | 0.329143 | 0.817085 | 0.958460 | 0.001596 | 0.001612 | 0.001614 |
| map_move.test | RUN | 0.262891 | 0.692214 | 0.758348 | 0.001493 | 0.001545 | 0.001444 |
| map_mutate.test | RUN | 0.230717 | 0.544407 | 0.663716 | 0.001380 | 0.001598 | 0.001449 |
| map_tie.test | RUN | 0.232672 | 0.557170 | 0.665274 | 0.001494 | 0.001780 | 0.001504 |
| nil.test | RUN | 0.165126 | 0.393955 | 0.464991 | 0.001886 | 0.001770 | 0.001590 |
| nview.test | RUN | 0.325652 | 0.813274 | 0.960938 | 0.001579 | 0.001793 | 0.001586 |
| reverse_view.test | RUN | 0.422621 | 1.324237 | 1.426165 | 0.001629 | 0.001790 | 0.001556 |
| segmented_iterator_range.test | RUN | 0.496430 | 1.551608 | 1.782225 | 0.001630 | 0.001634 | 0.001477 |
| set.test | RUN | 0.316989 | 0.901488 | 0.993890 | 0.001488 | 0.001727 | 0.001578 |
| single_view.test | RUN | 0.289549 | 0.823517 | 0.912973 | 0.001659 | 0.001454 | 0.001585 |
| std_pair.test | RUN | 0.363341 | 1.054225 | 1.170280 | 0.001840 | 0.001612 | 0.001563 |
| boost_array.test | RUN | 0.307769 | 0.737109 | 0.871022 | 0.001637 | 0.001644 | 0.001590 |
| array.test | RUN | 0.303779 | 0.721787 | 0.865509 | 0.001491 | 0.001724 | 0.001509 |
| std_array.test | RUN | 0.303473 | 0.729720 | 0.839480 | 0.001618 | 0.001668 | 0.001664 |
| tuple_comparison.test | RUN | 0.271078 | 0.680357 | 0.791397 | 0.001565 | 0.001726 | 0.001520 |
| tuple_construction.test | RUN | 0.285279 | 0.680764 | 0.796354 | 0.001782 | 0.001803 | 0.001614 |
| tuple_conversion.test | RUN | 0.601792 | 2.069618 | 2.607319 | 0.001491 | 0.001712 | 0.001381 |
| tuple_copy.test | RUN | 0.405038 | 1.189759 | 1.391839 | 0.001653 | 0.001632 | 0.001486 |
| tuple_element.test | RUN | 0.252216 | 0.620295 | 0.748393 | 0.001634 | 0.001740 | 0.001597 |
| tuple_make.test | RUN | 0.275530 | 0.703697 | 0.835922 | 0.001543 | 0.001605 | 0.001639 |
| tuple_misc.test | RUN | 0.351394 | 0.873446 | 1.063585 | 0.001596 | 0.001649 | 0.001528 |
| tuple_mutate.test | RUN | 0.244719 | 0.579090 | 0.698499 | 0.001678 | 0.001436 | 0.001654 |
| tuple_nest.test | RUN | 1.046652 | 4.180871 | 4.917851 | 0.001584 | 0.001782 | 0.001684 |
| tuple_hash.test | RUN | 0.360567 | 1.250642 | 1.076246 | 0.001701 | 0.001763 | 0.001409 |
| tuple_tie.test | RUN | 0.262074 | 0.632190 | 0.754308 | 0.001536 | 0.001793 | 0.001717 |
| tuple_traits__maybe_variadic.test | RUN | 0.283936 | 0.798513 | 0.801303 | 0.001850 | 0.001672 | 0.001464 |
| tuple_traits__no_variadic.test | RUN | 0.327188 | 0.798592 | 0.895322 | 0.001499 | 0.001779 | 0.001555 |
| transform_view.test | RUN | 0.434433 | 1.333701 | 1.417956 | 0.001588 | 0.001152 | 0.001464 |
| identity_view.test | RUN | 0.406494 | 1.217523 | 1.344918 | 0.001809 | 0.001660 | 0.001454 |
| vector_comparison.test | RUN | 0.248630 | 0.666163 | 0.819639 | 0.001482 | 0.001692 | 0.001672 |
| vector_construction.test | RUN | 0.258695 | 0.618373 | 0.738380 | 0.001370 | 0.001747 | 0.001613 |
| vector_conversion.test | RUN | 0.734805 | 2.735203 | 3.321087 | 0.001526 | 0.001776 | 0.001465 |
| vector_copy.test | RUN | 0.382411 | 1.194061 | 1.393142 | 0.001437 | 0.001757 | 0.001643 |
| vector_iterator.test | RUN | 0.244604 | 0.650934 | 0.734718 | 0.001496 | 0.001555 | 0.001575 |
| vector_make.test | RUN | 0.259277 | 0.675149 | 0.777300 | 0.001619 | 0.001704 | 0.001566 |
| vector_misc.test | RUN | 0.340891 | 0.826824 | 0.979773 | 0.001189 | 0.001654 | 0.001439 |
| vector_move.test | RUN | 0.255750 | 0.681617 | 0.737724 | 0.001596 | 0.001533 | 0.001386 |
| vector_mutate.test | RUN | 0.231503 | 0.558467 | 0.647194 | 0.001510 | 0.001495 | 0.001567 |
| vector_n.test | RUN | 0.282147 | 0.700227 | 0.870724 | 0.001760 | 0.001788 | 0.001601 |
| vector_nest.test | RUN | 1.041693 | 4.462959 | 4.916482 | 0.001739 | 0.001550 | 0.001412 |
| vector_hash.test | RUN | 0.332454 | 1.224616 | 1.002811 | 0.001622 | 0.001699 | 0.001435 |
| vector_tie.test | RUN | 0.243487 | 0.614805 | 0.735335 | 0.001751 | 0.001551 | 0.001550 |
| vector_traits__maybe_variadic.test | RUN | 0.263569 | 0.742420 | 0.731697 | 0.001556 | 0.001736 | 0.001544 |
| vector_traits__no_variadic.test | RUN | 0.282227 | 0.748194 | 0.805484 | 0.001649 | 0.001615 | 0.001686 |
| vector_value_at.test | RUN | 0.234170 | 0.574806 | 0.659462 | 0.001446 | 0.001583 | 0.001483 |
| zip_view.test | RUN | 0.490427 | 1.376185 | 1.673372 | 0.001672 | 0.001557 | 0.001495 |
| zip_view2.test | RUN | 0.384310 | 1.085227 | 1.336365 | 0.001398 | 0.001752 | 0.001472 |
| zip_view_ignore.test | RUN | 0.359734 | 0.956823 | 1.157533 | 0.001627 | 0.001423 | 0.001494 |
| repetitive_view.test | RUN | 0.627451 | 1.757770 | 2.218908 | 0.001525 | 0.001696 | 0.001451 |
| deduce_sequence.test | RUN | 0.296841 | 0.761593 | 0.947593 | 0.001199 | 0.001561 | 0.001603 |
| adapt_adt_named.test | RUN | 0.374352 | 1.057400 | 1.135561 | 0.001533 | 0.001669 | 0.001611 |
| adapt_adt_named_empty.test | RUN | 0.318278 | 0.863392 | 0.932961 | 0.001554 | 0.001618 | 0.001719 |
| adapt_adt.test | RUN | 0.406086 | 1.407833 | 1.373999 | 0.001583 | 0.001760 | 0.001643 |
| adapt_adt_empty.test | RUN | 0.313969 | 0.852801 | 0.953734 | 0.001929 | 0.001604 | 0.001605 |
| adapt_assoc_adt_named.test | RUN | 0.404456 | 1.113288 | 1.242343 | 0.001463 | 0.001662 | 0.001446 |
| adapt_assoc_adt_named_empty.test | RUN | 0.318212 | 0.844811 | 0.942469 | 0.001233 | 0.001660 | 0.001699 |
| adapt_assoc_adt.test | RUN | 0.415328 | 1.159332 | 1.299626 | 0.001485 | 0.001843 | 0.001656 |
| adapt_assoc_adt_empty.test | RUN | 0.313299 | 0.852774 | 0.950188 | 0.001574 | 0.001793 | 0.001584 |
| adapt_assoc_struct_named.test | RUN | 0.408762 | 1.098635 | 1.220073 | 0.001429 | 0.001719 | 0.001722 |
| adapt_assoc_struct_named_empty.test | RUN | 0.315825 | 0.869750 | 0.937185 | 0.001643 | 0.001680 | 0.001708 |
| adapt_assoc_struct.test | RUN | 0.354803 | 1.027463 | 1.150792 | 0.001481 | 0.001613 | 0.001406 |
| adapt_assoc_struct_empty.test | RUN | 0.304451 | 0.844756 | 0.940374 | 0.001744 | 0.001592 | 0.001591 |
| adapt_assoc_tpl_adt.test | RUN | 0.418285 | 1.179443 | 1.343473 | 0.001442 | 0.001753 | 0.001411 |
| adapt_assoc_tpl_adt_empty.test | RUN | 0.308989 | 0.852947 | 0.933729 | 0.001778 | 0.001736 | 0.001595 |
| adapt_assoc_tpl_struct.test | RUN | 0.357134 | 0.997420 | 1.103496 | 0.001476 | 0.001590 | 0.001560 |
| adapt_assoc_tpl_struct_empty.test | RUN | 0.317769 | 0.865142 | 0.951054 | 0.001528 | 0.001725 | 0.001376 |
| adapt_struct_named.test | RUN | 0.373860 | 1.061564 | 1.120753 | 0.001522 | 0.001460 | 0.001649 |
| adapt_struct_named_empty.test | RUN | 0.314518 | 0.865820 | 0.953038 | 0.001612 | 0.001560 | 0.001706 |
| adapt_struct.test | RUN | 0.387267 | 1.169383 | 1.274376 | 0.001601 | 0.001774 | 0.001624 |
| adapt_struct_empty.test | RUN | 0.314525 | 0.860406 | 0.952471 | 0.001841 | 0.001704 | 0.001782 |
| adapt_tpl_adt.test | RUN | 0.415295 | 1.341393 | 1.321802 | 0.001538 | 0.001661 | 0.001848 |
| adapt_tpl_adt_empty.test | RUN | 0.316628 | 0.850111 | 0.941781 | 0.001596 | 0.001711 | 0.001640 |
| adapt_tpl_struct.test | RUN | 0.326714 | 0.967591 | 1.046686 | 0.001741 | 0.001704 | 0.001628 |
| adapt_tpl_struct_empty.test | RUN | 0.312118 | 0.884647 | 0.959236 | 0.001447 | 0.001765 | 0.001533 |
| adt_attribute_proxy.test | RUN | 0.342791 | 0.844983 | 0.999309 | 0.001638 | 0.001708 | 0.001624 |
| define_struct.test | RUN | 0.422085 | 1.177041 | 1.333704 | 0.001627 | 0.001641 | 0.001648 |
| define_struct_empty.test | RUN | 0.364077 | 0.970789 | 1.083500 | 0.001625 | 0.001755 | 0.001594 |
| define_struct_move.test | RUN | 0.234172 | 0.540847 | 0.639568 | 0.001700 | 0.001603 | 0.001464 |
| define_struct_inline.test | RUN | 0.448852 | 1.400236 | 1.503282 | 0.001475 | 0.001605 | 0.001600 |
| define_struct_inline_empty.test | RUN | 0.370690 | 0.995440 | 1.083295 | 0.001562 | 0.001483 | 0.001654 |
| define_struct_inline_move.test | RUN | 0.236638 | 0.532075 | 0.654407 | 0.001579 | 0.001712 | 0.001598 |
| define_assoc_struct.test | RUN | 0.405702 | 1.099926 | 1.266650 | 0.001600 | 0.001676 | 0.001608 |
| define_assoc_struct_empty.test | RUN | 0.371796 | 0.954236 | 1.102085 | 0.001507 | 0.001631 | 0.001669 |
| define_assoc_struct_move.test | RUN | 0.235426 | 0.530859 | 0.644312 | 0.001500 | 0.001560 | 0.001531 |
| define_tpl_struct.test | RUN | 0.412100 | 1.150845 | 1.244936 | 0.001691 | 0.001719 | 0.001551 |
| define_tpl_struct_empty.test | RUN | 0.371290 | 0.973450 | 1.104541 | 0.001635 | 0.001666 | 0.001564 |
| define_tpl_struct_move.test | RUN | 0.243336 | 0.540908 | 0.648646 | 0.001597 | 0.001590 | 0.001552 |
| define_tpl_struct_inline.test | RUN | 0.430717 | 1.310457 | 1.394911 | 0.001548 | 0.001736 | 0.001628 |
| define_tpl_struct_inline_empty.test | RUN | 0.374013 | 0.962233 | 1.102824 | 0.001676 | 0.001497 | 0.001610 |
| define_tpl_struct_inline_move.test | RUN | 0.238257 | 0.546389 | 0.661830 | 0.001550 | 0.001626 | 0.001681 |
| define_assoc_tpl_struct.test | RUN | 0.416567 | 1.136652 | 1.271276 | 0.001572 | 0.001614 | 0.001562 |
| define_assoc_tpl_struct_empty.test | RUN | 0.366644 | 0.974226 | 1.093140 | 0.001680 | 0.001646 | 0.001510 |
| define_assoc_tpl_struct_move.test | RUN | 0.234288 | 0.547567 | 0.651384 | 0.001512 | 0.001577 | 0.001739 |
| std_tuple.test | RUN | 0.252270 | 0.611212 | 0.718847 | 0.001622 | 0.001876 | 0.001708 |
| std_tuple_iterator.test | RUN | 0.246783 | 0.643900 | 0.731685 | 0.001522 | 0.001611 | 0.001554 |
| ref_vector.test | RUN | 0.282541 | 0.670913 | 0.782436 | 0.001577 | 0.001654 | 0.001616 |
| flatten_view.test | RUN | 0.295777 | 0.814332 | 0.926158 | 0.001500 | 0.001678 | 0.001489 |
| github-159.test | COMPILE | 0.137487 | 0.302785 | 0.340978 | — | — | — |
| github-176.test | RUN | 0.279403 | 0.727968 | 0.781085 | 0.001494 | 0.001604 | 0.001488 |
| size.test | COMPILE | 0.234473 | 0.523932 | 0.616656 | — | — | — |
| fused.test | RUN | 0.326687 | 0.771864 | 0.912406 | 0.001569 | 0.001538 | 0.001646 |
| fused_function_object.test | RUN | 0.246052 | 0.588895 | 0.691781 | 0.001637 | 0.001421 | 0.001584 |
| fused_procedure.test | RUN | 0.319380 | 0.734360 | 0.864192 | 0.001524 | 0.001550 | 0.001550 |
| unfused.test | RUN | 0.254244 | 0.604974 | 0.719422 | 0.001568 | 0.001594 | 0.001523 |
| unfused_typed.test | RUN | 0.255702 | 0.651553 | 0.747461 | 0.001524 | 0.001600 | 0.001584 |
| make_fused.test | RUN | 0.332916 | 0.780633 | 0.925579 | 0.001517 | 0.001606 | 0.001475 |
| make_fused_function_object.test | RUN | 0.242166 | 0.584693 | 0.695638 | 0.001424 | 0.001626 | 0.001503 |
| make_fused_procedure.test | RUN | 0.321874 | 0.753511 | 0.878391 | 0.001638 | 0.001694 | 0.001589 |
| make_unfused.test | RUN | 0.247908 | 0.585466 | 0.703408 | 0.001645 | 0.001708 | 0.001640 |
| invoke.test | RUN | 0.627910 | 2.138106 | 2.449162 | 0.001631 | 0.001585 | 0.001576 |
| invoke_function_object.test | RUN | 0.300580 | 0.758158 | 0.893266 | 0.001658 | 0.001725 | 0.001586 |
| invoke_procedure.test | RUN | 0.507489 | 1.583770 | 1.810108 | 0.001704 | 0.001738 | 0.001563 |
| swap.test | RUN | 0.372491 | 0.983415 | 1.164068 | 0.001415 | 0.001966 | 0.001664 |
| is_sequence.test | COMPILE | 0.063678 | 0.139221 | 0.141875 | — | — | — |
| is_view.test | COMPILE | 0.063331 | 0.134446 | 0.142294 | — | — | — |
| pair_deque.test | COMPILE | 0.141295 | 0.318856 | 0.370051 | — | — | — |
| pair_list.test | COMPILE | 0.135278 | 0.307142 | 0.364446 | — | — | — |
| pair_map.test | COMPILE | 0.142192 | 0.316608 | 0.346834 | — | — | — |
| pair_set.test | COMPILE | 0.141068 | 0.318670 | 0.355813 | — | — | — |
| pair_vector.test | COMPILE | 0.140691 | 0.311454 | 0.342164 | — | — | — |
| pair_nest.test | COMPILE | 0.054238 | 0.123751 | 0.135200 | — | — | — |
| index_sequence.test | COMPILE | 0.048177 | 0.089882 | 0.100557 | — | — | — |
| and.test | COMPILE | 0.036310 | 0.065326 | 0.071728 | — | — | — |
| tag_of.test | COMPILE | 0.062651 | 0.131433 | 0.140021 | — | — | — |
| unused.test | COMPILE | 0.033400 | 0.083868 | 0.083152 | — | — | — |
| tag_of_fallback.test | COMPILE | 0.064958 | 0.091590 | 0.118332 | — | — | — |
| make_pair_r-value.test | COMPILE | 0.055526 | 0.120556 | 0.126252 | — | — | — |
| quick.test | RUN | 0.172868 | 0.410606 | 0.434502 | 0.000513 | 0.001160 | 0.001079 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.999× | 1.003×, 0.995× | 1.001× |
| clang | 1.000× | 1.005×, 0.994× | 1.002× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1361 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44260407509).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| adapt_adt.test | 10 | 0.001080s | 0.001062s | 0.001067s | byte equality observed |
| adapt_adt_empty.test | 10 | 0.001064s | 0.001070s | 0.001060s | byte equality observed |
| adapt_adt_named.test | 10 | 0.001060s | 0.001029s | 0.001104s | byte equality observed |
| adapt_adt_named_empty.test | 10 | 0.001052s | 0.001025s | 0.001084s | byte equality observed |
| adapt_assoc_adt.test | 10 | 0.001049s | 0.001054s | 0.001110s | byte equality observed |
| adapt_assoc_adt_empty.test | 10 | 0.001057s | 0.001015s | 0.001082s | byte equality observed |
| adapt_assoc_adt_named.test | 10 | 0.001056s | 0.001037s | 0.001038s | byte equality observed |
| adapt_assoc_adt_named_empty.test | 10 | 0.001052s | 0.001065s | 0.001066s | byte equality observed |
| adapt_assoc_struct.test | 10 | 0.001062s | 0.001051s | 0.001073s | byte equality observed |
| adapt_assoc_struct_empty.test | 10 | 0.001046s | 0.001045s | 0.001063s | byte equality observed |
| adapt_assoc_struct_named.test | 10 | 0.001060s | 0.001083s | 0.001070s | byte equality observed |
| adapt_assoc_struct_named_empty.test | 10 | 0.001033s | 0.001025s | 0.001075s | byte equality observed |
| adapt_assoc_tpl_adt.test | 10 | 0.001054s | 0.001052s | 0.001090s | byte equality observed |
| adapt_assoc_tpl_adt_empty.test | 10 | 0.001045s | 0.001056s | 0.001062s | byte equality observed |
| adapt_assoc_tpl_struct.test | 10 | 0.001075s | 0.001066s | 0.001092s | byte equality observed |
| adapt_assoc_tpl_struct_empty.test | 10 | 0.001053s | 0.001059s | 0.001077s | byte equality observed |
| adapt_struct.test | 8 | 0.001085s | 0.001041s | 0.001067s | byte equality observed |
| adapt_struct_empty.test | 10 | 0.001050s | 0.001055s | 0.001063s | byte equality observed |
| adapt_struct_named.test | 10 | 0.001080s | 0.001042s | 0.001042s | byte equality observed |
| adapt_struct_named_empty.test | 10 | 0.001063s | 0.001069s | 0.001061s | byte equality observed |
| adapt_tpl_adt.test | 10 | 0.001026s | 0.001112s | 0.001042s | byte equality observed |
| adapt_tpl_adt_empty.test | 10 | 0.001038s | 0.001083s | 0.001078s | byte equality observed |
| adapt_tpl_struct.test | 10 | 0.001062s | 0.001064s | 0.001080s | byte equality observed |
| adapt_tpl_struct_empty.test | 10 | 0.001074s | 0.001060s | 0.001065s | byte equality observed |
| adt_attribute_proxy.test | 10 | 0.001037s | 0.001025s | 0.001046s | byte equality observed |
| all.test | 10 | 0.001050s | 0.001071s | 0.001079s | byte equality observed |
| any.test | 10 | 0.001033s | 0.001073s | 0.001043s | byte equality observed |
| array.test | 10 | 0.001064s | 0.001017s | 0.001047s | byte equality observed |
| as_deque.test | 10 | 0.001063s | 0.001030s | 0.001056s | byte equality observed |
| as_list.test | 10 | 0.001055s | 0.001089s | 0.001085s | byte equality observed |
| as_map.test | 10 | 0.001049s | 0.001073s | 0.001046s | byte equality observed |
| as_map_assoc.test | 10 | 0.001049s | 0.001029s | 0.001102s | byte equality observed |
| as_set.test | 10 | 0.001058s | 0.001089s | 0.001093s | byte equality observed |
| as_vector.test | 10 | 0.001057s | 0.001068s | 0.001107s | byte equality observed |
| back_extended_deque.test | 10 | 0.001039s | 0.001008s | 0.001034s | byte equality observed |
| boost_array.test | 10 | 0.001048s | 0.001048s | 0.001021s | byte equality observed |
| boost_tuple.test | 10 | 0.001085s | 0.001080s | 0.001079s | byte equality observed |
| boost_tuple_iterator.test | 10 | 0.001041s | 0.001033s | 0.001069s | byte equality observed |
| clear.test | 10 | 0.001087s | 0.001048s | 0.001054s | byte equality observed |
| cons.test | 10 | 0.001079s | 0.001052s | 0.001111s | byte equality observed |
| convert_boost_tuple.test | 10 | 0.001056s | 0.001042s | 0.001011s | byte equality observed |
| convert_deque.test | 10 | 0.001027s | 0.001071s | 0.001006s | byte equality observed |
| convert_list.test | 8 | 0.001051s | 0.001042s | 0.001023s | byte equality observed |
| convert_std_pair.test | 9 | 0.001064s | 0.001032s | 0.001021s | byte equality observed |
| convert_std_tuple.test | 10 | 0.001079s | 0.001091s | 0.001035s | byte equality observed |
| convert_vector.test | 10 | 0.001037s | 0.001045s | 0.001013s | byte equality observed |
| copy.test | 10 | 0.001014s | 0.000998s | 0.001038s | byte equality observed |
| count.test | 10 | 0.001016s | 0.001025s | 0.001037s | byte equality observed |
| count_if.test | 10 | 0.001038s | 0.001035s | 0.001033s | byte equality observed |
| deduce_sequence.test | 10 | 0.001039s | 0.001006s | 0.001038s | byte equality observed |
| define_assoc_struct.test | 10 | 0.001072s | 0.001074s | 0.001059s | byte equality observed |
| define_assoc_struct_empty.test | 10 | 0.001054s | 0.001039s | 0.001080s | byte equality observed |
| define_assoc_struct_move.test | 10 | 0.001049s | 0.001011s | 0.001039s | byte equality observed |
| define_assoc_tpl_struct.test | 10 | 0.001048s | 0.001058s | 0.001062s | byte equality observed |
| define_assoc_tpl_struct_empty.test | 10 | 0.001053s | 0.001053s | 0.001018s | byte equality observed |
| define_assoc_tpl_struct_move.test | 10 | 0.001035s | 0.001010s | 0.001032s | byte equality observed |
| define_struct.test | 10 | 0.001055s | 0.001060s | 0.001067s | byte equality observed |
| define_struct_empty.test | 10 | 0.001054s | 0.001056s | 0.001060s | byte equality observed |
| define_struct_inline.test | 10 | 0.001061s | 0.001061s | 0.001052s | byte equality observed |
| define_struct_inline_empty.test | 10 | 0.001049s | 0.001039s | 0.001060s | byte equality observed |
| define_struct_inline_move.test | 10 | 0.001032s | 0.001027s | 0.001031s | byte equality observed |
| define_struct_move.test | 8 | 0.001018s | 0.001022s | 0.001057s | byte equality observed |
| define_tpl_struct.test | 10 | 0.001063s | 0.001056s | 0.001033s | byte equality observed |
| define_tpl_struct_empty.test | 10 | 0.001052s | 0.001065s | 0.001051s | byte equality observed |
| define_tpl_struct_inline.test | 10 | 0.001036s | 0.001053s | 0.001053s | byte equality observed |
| define_tpl_struct_inline_empty.test | 10 | 0.001060s | 0.001040s | 0.001043s | byte equality observed |
| define_tpl_struct_inline_move.test | 10 | 0.001030s | 0.001003s | 0.001074s | byte equality observed |
| define_tpl_struct_move.test | 10 | 0.001053s | 0.001045s | 0.001061s | byte equality observed |
| deque_comparison.test | 10 | 0.001044s | 0.001005s | 0.001000s | byte equality observed |
| deque_construction.test | 10 | 0.001051s | 0.001035s | 0.001065s | byte equality observed |
| deque_copy.test | 10 | 0.001040s | 0.001013s | 0.001055s | byte equality observed |
| deque_hash.test | 10 | 0.001034s | 0.001054s | 0.001067s | byte equality observed |
| deque_iterator.test | 10 | 0.001051s | 0.001043s | 0.001051s | byte equality observed |
| deque_make.test | 10 | 0.001078s | 0.001034s | 0.001036s | byte equality observed |
| deque_misc.test | 10 | 0.001062s | 0.001033s | 0.001041s | byte equality observed |
| deque_move.test | 10 | 0.001067s | 0.001050s | 0.001066s | byte equality observed |
| deque_mutate.test | 10 | 0.001024s | 0.001025s | 0.001022s | byte equality observed |
| deque_nest.test | 10 | 0.001033s | 0.001037s | 0.001035s | byte equality observed |
| deque_tie.test | 10 | 0.001029s | 0.001033s | 0.001078s | byte equality observed |
| deque_value_at.test | 10 | 0.001019s | 0.001033s | 0.001042s | byte equality observed |
| erase.test | 10 | 0.001051s | 0.001044s | 0.001061s | byte equality observed |
| erase_key.test | 10 | 0.001059s | 0.001066s | 0.001058s | byte equality observed |
| filter.test | 10 | 0.001061s | 0.001011s | 0.001059s | byte equality observed |
| filter_if.test | 10 | 0.001082s | 0.001059s | 0.001051s | byte equality observed |
| filter_view.test | 10 | 0.001070s | 0.001027s | 0.001059s | byte equality observed |
| find.test | 10 | 0.001069s | 0.001043s | 0.001066s | byte equality observed |
| find_if.test | 10 | 0.001041s | 0.001037s | 0.001054s | byte equality observed |
| flatten.test | 10 | 0.001056s | 0.001016s | 0.001045s | byte equality observed |
| flatten_view.test | 10 | 0.001040s | 0.001027s | 0.001084s | byte equality observed |
| fold.test | 10 | 0.001063s | 0.001065s | 0.001058s | byte equality observed |
| for_each.test | 10 | 0.001073s | 0.001067s | 0.001085s | byte equality observed |
| front_extended_deque.test | 10 | 0.001036s | 0.001004s | 0.001034s | byte equality observed |
| fused.test | 10 | 0.001057s | 0.001009s | 0.001046s | byte equality observed |
| fused_function_object.test | 10 | 0.001025s | 0.001087s | 0.001020s | byte equality observed |
| fused_procedure.test | 10 | 0.001036s | 0.001063s | 0.001064s | byte equality observed |
| github-176.test | 10 | 0.001040s | 0.001035s | 0.001034s | byte equality observed |
| hash.test | 10 | 0.001048s | 0.001033s | 0.001030s | byte equality observed |
| identity_view.test | 10 | 0.001056s | 0.001073s | 0.001083s | byte equality observed |
| insert.test | 10 | 0.001072s | 0.001061s | 0.001070s | byte equality observed |
| insert_range.test | 10 | 0.001067s | 0.001071s | 0.001084s | byte equality observed |
| invoke.test | 10 | 0.001039s | 0.001030s | 0.001025s | byte equality observed |
| invoke_function_object.test | 10 | 0.001038s | 0.001011s | 0.001039s | byte equality observed |
| invoke_procedure.test | 10 | 0.001052s | 0.001040s | 0.001016s | byte equality observed |
| io.test | 10 | 0.001231s | 0.001220s | 0.001233s | byte equality observed |
| iter_fold.test | 10 | 0.001055s | 0.001054s | 0.001037s | byte equality observed |
| iterator_range.test | 10 | 0.001098s | 0.001080s | 0.001045s | byte equality observed |
| join.test | 10 | 0.001031s | 0.001028s | 0.001051s | byte equality observed |
| joint_view.test | 10 | 0.001111s | 0.001097s | 0.001093s | byte equality observed |
| list_comparison.test | 10 | 0.001040s | 0.001015s | 0.000995s | byte equality observed |
| list_construction.test | 10 | 0.001047s | 0.001025s | 0.001032s | byte equality observed |
| list_copy.test | 10 | 0.001027s | 0.001031s | 0.001047s | byte equality observed |
| list_hash.test | 10 | 0.001054s | 0.001041s | 0.001059s | byte equality observed |
| list_iterator.test | 10 | 0.001072s | 0.001054s | 0.001023s | byte equality observed |
| list_make.test | 10 | 0.001022s | 0.001063s | 0.001019s | byte equality observed |
| list_misc.test | 10 | 0.001040s | 0.001033s | 0.001037s | byte equality observed |
| list_mutate.test | 10 | 0.001044s | 0.001043s | 0.001058s | byte equality observed |
| list_nest.test | 10 | 0.001062s | 0.001020s | 0.001052s | byte equality observed |
| list_tie.test | 10 | 0.001034s | 0.001002s | 0.001037s | byte equality observed |
| list_value_at.test | 10 | 0.001032s | 0.001007s | 0.001038s | byte equality observed |
| make_fused.test | 10 | 0.001026s | 0.001038s | 0.001059s | byte equality observed |
| make_fused_function_object.test | 10 | 0.001061s | 0.001025s | 0.001055s | byte equality observed |
| make_fused_procedure.test | 10 | 0.001025s | 0.001020s | 0.001035s | byte equality observed |
| make_list.test | 10 | 0.001045s | 0.001026s | 0.001065s | byte equality observed |
| make_unfused.test | 10 | 0.001041s | 0.001039s | 0.001077s | byte equality observed |
| make_vector.test | 10 | 0.001039s | 0.001097s | 0.001042s | byte equality observed |
| map.test | 10 | 0.001073s | 0.001066s | 0.001034s | byte equality observed |
| map_comparison.test | 10 | 0.001031s | 0.001013s | 0.001025s | byte equality observed |
| map_construction.test | 10 | 0.001043s | 0.000981s | 0.001052s | byte equality observed |
| map_copy.test | 10 | 0.001039s | 0.001051s | 0.001042s | byte equality observed |
| map_misc.test | 10 | 0.001042s | 0.001019s | 0.001042s | byte equality observed |
| map_move.test | 10 | 0.001046s | 0.001036s | 0.001030s | byte equality observed |
| map_mutate.test | 10 | 0.001023s | 0.001002s | 0.001061s | byte equality observed |
| map_tie.test | 10 | 0.001040s | 0.001057s | 0.001058s | byte equality observed |
| move.test | 10 | 0.001056s | 0.001023s | 0.001061s | byte equality observed |
| nil.test | 10 | 0.001029s | 0.001013s | 0.001053s | byte equality observed |
| none.test | 10 | 0.001014s | 0.001040s | 0.001036s | byte equality observed |
| nview.test | 10 | 0.001019s | 0.001032s | 0.001035s | byte equality observed |
| pop_back.test | 10 | 0.001059s | 0.001120s | 0.001050s | byte equality observed |
| pop_front.test | 10 | 0.001051s | 0.001077s | 0.001076s | byte equality observed |
| push_back.test | 10 | 0.001081s | 0.001092s | 0.001076s | byte equality observed |
| push_front.test | 10 | 0.001050s | 0.001076s | 0.001080s | byte equality observed |
| quick.test | 10 | 0.000463s | 0.001059s | 0.001001s | byte equality observed |
| ref_vector.test | 10 | 0.001035s | 0.001032s | 0.001053s | byte equality observed |
| remove.test | 10 | 0.001070s | 0.001067s | 0.001081s | byte equality observed |
| remove_if.test | 10 | 0.001072s | 0.001081s | 0.001058s | byte equality observed |
| repetitive_view.test | 10 | 0.001041s | 0.001038s | 0.001031s | byte equality observed |
| replace.test | 10 | 0.001049s | 0.001056s | 0.001061s | byte equality observed |
| replace_if.test | 10 | 0.001095s | 0.001086s | 0.001050s | byte equality observed |
| reverse.test | 10 | 0.001056s | 0.001047s | 0.001047s | byte equality observed |
| reverse_fold.test | 10 | 0.001058s | 0.001052s | 0.001049s | byte equality observed |
| reverse_iter_fold.test | 10 | 0.001053s | 0.001035s | 0.001062s | byte equality observed |
| reverse_view.test | 10 | 0.001077s | 0.001075s | 0.001066s | byte equality observed |
| segmented_find.test | 10 | 0.001006s | 0.001022s | 0.001039s | byte equality observed |
| segmented_find_if.test | 10 | 0.001038s | 0.001018s | 0.001036s | byte equality observed |
| segmented_fold.test | 10 | 0.001040s | 0.001061s | 0.001053s | byte equality observed |
| segmented_for_each.test | 10 | 0.001073s | 0.001049s | 0.001038s | byte equality observed |
| segmented_iterator_range.test | 10 | 0.001077s | 0.001086s | 0.001068s | byte equality observed |
| set.test | 10 | 0.001061s | 0.001048s | 0.001029s | byte equality observed |
| single_view.test | 10 | 0.001067s | 0.001055s | 0.001058s | byte equality observed |
| std_array.test | 10 | 0.001027s | 0.001053s | 0.001040s | byte equality observed |
| std_pair.test | 10 | 0.001056s | 0.001057s | 0.001074s | byte equality observed |
| std_tuple.test | 7 | 0.001053s | 0.001023s | 0.001027s | byte equality observed |
| std_tuple_iterator.test | 10 | 0.001022s | 0.001029s | 0.001027s | byte equality observed |
| swap.test | 10 | 0.001021s | 0.001068s | 0.001051s | byte equality observed |
| transform.test | 10 | 0.001048s | 0.001053s | 0.001013s | byte equality observed |
| transform_view.test | 10 | 0.001071s | 0.001055s | 0.001089s | byte equality observed |
| tuple_comparison.test | 10 | 0.001036s | 0.001013s | 0.001027s | byte equality observed |
| tuple_construction.test | 10 | 0.001055s | 0.001070s | 0.001062s | byte equality observed |
| tuple_conversion.test | 10 | 0.001051s | 0.001048s | 0.001054s | byte equality observed |
| tuple_copy.test | 10 | 0.001043s | 0.001059s | 0.001047s | byte equality observed |
| tuple_element.test | 10 | 0.001009s | 0.001073s | 0.001046s | byte equality observed |
| tuple_hash.test | 10 | 0.001061s | 0.001065s | 0.001043s | byte equality observed |
| tuple_make.test | 10 | 0.001072s | 0.001083s | 0.001058s | byte equality observed |
| tuple_misc.test | 10 | 0.001045s | 0.001054s | 0.001018s | byte equality observed |
| tuple_mutate.test | 10 | 0.001076s | 0.001054s | 0.001013s | byte equality observed |
| tuple_nest.test | 10 | 0.001063s | 0.001070s | 0.001040s | byte equality observed |
| tuple_tie.test | 10 | 0.001047s | 0.001009s | 0.001044s | byte equality observed |
| tuple_traits__maybe_variadic.test | 10 | 0.001045s | 0.001024s | 0.001022s | byte equality observed |
| tuple_traits__no_variadic.test | 10 | 0.001049s | 0.001034s | 0.001057s | byte equality observed |
| unfused.test | 10 | 0.001023s | 0.001010s | 0.001038s | byte equality observed |
| unfused_typed.test | 10 | 0.001024s | 0.001038s | 0.001040s | byte equality observed |
| vector_comparison.test | 10 | 0.001043s | 0.001043s | 0.001007s | byte equality observed |
| vector_construction.test | 10 | 0.001050s | 0.001047s | 0.001029s | byte equality observed |
| vector_conversion.test | 10 | 0.001022s | 0.001061s | 0.001066s | byte equality observed |
| vector_copy.test | 10 | 0.001059s | 0.001030s | 0.001052s | byte equality observed |
| vector_hash.test | 10 | 0.001066s | 0.001053s | 0.001076s | byte equality observed |
| vector_iterator.test | 10 | 0.001042s | 0.001023s | 0.001039s | byte equality observed |
| vector_make.test | 10 | 0.001024s | 0.001025s | 0.001039s | byte equality observed |
| vector_misc.test | 10 | 0.001031s | 0.001046s | 0.001007s | byte equality observed |
| vector_move.test | 10 | 0.001053s | 0.001065s | 0.001075s | byte equality observed |
| vector_mutate.test | 10 | 0.001015s | 0.001020s | 0.001051s | byte equality observed |
| vector_n.test | 9 | 0.001053s | 0.001033s | 0.001037s | byte equality observed |
| vector_nest.test | 10 | 0.001019s | 0.000988s | 0.001009s | byte equality observed |
| vector_tie.test | 10 | 0.001047s | 0.001009s | 0.001055s | byte equality observed |
| vector_traits__maybe_variadic.test | 10 | 0.001044s | 0.001007s | 0.001037s | byte equality observed |
| vector_traits__no_variadic.test | 10 | 0.001032s | 0.001055s | 0.001045s | byte equality observed |
| vector_value_at.test | 10 | 0.001034s | 0.001031s | 0.001034s | byte equality observed |
| zip.test | 10 | 0.001043s | 0.001062s | 0.001051s | byte equality observed |
| zip2.test | 10 | 0.001039s | 0.001073s | 0.001045s | byte equality observed |
| zip_ignore.test | 10 | 0.001021s | 0.001013s | 0.001009s | byte equality observed |
| zip_view.test | 10 | 0.001036s | 0.001047s | 0.001058s | byte equality observed |
| zip_view2.test | 10 | 0.001025s | 0.001035s | 0.001044s | byte equality observed |
| zip_view_ignore.test | 9 | 0.001014s | 0.001017s | 0.001009s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44260407509).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
