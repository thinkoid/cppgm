# libs/fusion/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| all.test | RUN | 0.364270 | 0.828136 | 1.021095 | 0.001239 | 0.001354 | 0.001335 |
| any.test | RUN | 0.361543 | 0.783680 | 0.974379 | 0.001279 | 0.001426 | 0.001375 |
| clear.test | RUN | 0.266438 | 0.726492 | 0.808139 | 0.001349 | 0.001202 | 0.001415 |
| copy.test | RUN | 0.221794 | 0.539390 | 0.642730 | 0.001492 | 0.001641 | 0.001377 |
| count.test | RUN | 0.242253 | 0.596484 | 0.719399 | 0.001499 | 0.001563 | 0.001303 |
| count_if.test | RUN | 0.232393 | 0.555607 | 0.663222 | 0.001200 | 0.001445 | 0.001319 |
| erase.test | RUN | 0.324707 | 0.984365 | 1.080244 | 0.001418 | 0.001602 | 0.001348 |
| erase_key.test | RUN | 0.316294 | 0.970425 | 1.015393 | 0.001497 | 0.001502 | 0.001366 |
| filter.test | RUN | 0.300021 | 0.819646 | 0.924001 | 0.001538 | 0.001587 | 0.001392 |
| filter_if.test | RUN | 0.336315 | 0.956844 | 1.088593 | 0.001392 | 0.001573 | 0.001427 |
| find.test | RUN | 0.277807 | 0.663333 | 0.818330 | 0.001219 | 0.001394 | 0.001290 |
| find_if.test | RUN | 0.262096 | 0.618243 | 0.754602 | 0.001287 | 0.001495 | 0.001409 |
| fold.test | RUN | 0.289583 | 0.781367 | 0.932682 | 0.001467 | 0.001364 | 0.001456 |
| for_each.test | RUN | 0.263509 | 0.711030 | 0.826894 | 0.001336 | 0.001509 | 0.001404 |
| insert.test | RUN | 0.382593 | 1.217575 | 1.312065 | 0.001417 | 0.001524 | 0.001422 |
| insert_range.test | RUN | 0.387425 | 1.215494 | 1.339423 | 0.001284 | 0.001448 | 0.001310 |
| iter_fold.test | RUN | 0.443817 | 1.134733 | 1.555805 | 0.001300 | 0.001566 | 0.001384 |
| move.test | RUN | 0.221919 | 0.555291 | 0.670845 | 0.001218 | 0.001300 | 0.001266 |
| none.test | RUN | 0.370611 | 0.794581 | 1.009173 | 0.001314 | 0.001493 | 0.001264 |
| pop_back.test | RUN | 0.359167 | 1.062428 | 1.181086 | 0.001442 | 0.001473 | 0.001330 |
| pop_front.test | RUN | 0.300639 | 0.869684 | 0.945364 | 0.001399 | 0.001446 | 0.001328 |
| push_back.test | RUN | 0.385698 | 1.233715 | 1.283667 | 0.001403 | 0.001614 | 0.001420 |
| push_front.test | RUN | 0.347353 | 1.032316 | 1.096314 | 0.001377 | 0.001455 | 0.001491 |
| remove.test | RUN | 0.373972 | 1.149864 | 1.270197 | 0.001247 | 0.001464 | 0.001283 |
| remove_if.test | RUN | 0.339030 | 0.975136 | 1.101845 | 0.001190 | 0.001594 | 0.001407 |
| replace.test | RUN | 0.321258 | 0.941839 | 1.021283 | 0.001397 | 0.001569 | 0.001461 |
| replace_if.test | RUN | 0.316839 | 0.936005 | 1.002345 | 0.001454 | 0.001594 | 0.001362 |
| reverse_fold.test | RUN | 0.476700 | 1.303803 | 1.680465 | 0.001169 | 0.001496 | 0.001390 |
| reverse_iter_fold.test | RUN | 0.495746 | 1.341773 | 1.776570 | 0.001405 | 0.001488 | 0.001265 |
| reverse.test | RUN | 0.310581 | 0.969611 | 1.035477 | 0.001354 | 0.001583 | 0.001388 |
| segmented_for_each.test | RUN | 0.544437 | 1.775775 | 2.079359 | 0.001398 | 0.001431 | 0.001239 |
| segmented_find.test | RUN | 0.331793 | 0.952544 | 1.172534 | 0.001408 | 0.001471 | 0.001328 |
| segmented_find_if.test | RUN | 0.341174 | 0.969012 | 1.162299 | 0.001280 | 0.001442 | 0.001197 |
| segmented_fold.test | RUN | 0.410684 | 1.240827 | 1.480678 | 0.001366 | 0.001458 | 0.001405 |
| transform.test | RUN | 0.337288 | 1.012421 | 1.095933 | 0.001368 | 0.001511 | 0.001498 |
| join.test | RUN | 0.240959 | 0.612312 | 0.757812 | 0.001332 | 0.001471 | 0.001369 |
| zip.test | RUN | 0.421404 | 1.121522 | 1.414699 | 0.001316 | 0.001507 | 0.001433 |
| zip2.test | RUN | 0.421249 | 1.112378 | 1.363945 | 0.001281 | 0.001415 | 0.001473 |
| zip_ignore.test | RUN | 0.314164 | 0.775395 | 0.933815 | 0.001191 | 0.001477 | 0.001282 |
| flatten.test | RUN | 0.292624 | 0.870095 | 0.942647 | 0.001290 | 0.001480 | 0.001345 |
| ticket-5490.test | COMPILE | 0.155707 | 0.369100 | 0.432134 | — | — | — |
| as_deque.test | RUN | 0.287557 | 0.802388 | 0.997932 | 0.001428 | 0.001387 | 0.001256 |
| as_list.test | RUN | 0.326218 | 1.005222 | 1.082807 | 0.001380 | 0.001460 | 0.001373 |
| as_map.test | RUN | 0.326917 | 0.979345 | 1.079732 | 0.001443 | 0.001432 | 0.001345 |
| as_map_assoc.test | RUN | 0.323901 | 0.922663 | 1.018098 | 0.001404 | 0.001475 | 0.001005 |
| as_set.test | RUN | 0.372833 | 1.148604 | 1.271916 | 0.001377 | 0.001423 | 0.001285 |
| as_vector.test | RUN | 0.333982 | 1.061505 | 1.121696 | 0.001124 | 0.001343 | 0.001364 |
| boost_tuple.test | RUN | 0.335003 | 1.006738 | 1.075255 | 0.001326 | 0.001452 | 0.001364 |
| boost_tuple_iterator.test | RUN | 0.229399 | 0.592820 | 0.656371 | 0.001378 | 0.001536 | 0.001353 |
| cons.test | RUN | 0.424230 | 1.123842 | 1.292758 | 0.001353 | 0.001396 | 0.001329 |
| convert_boost_tuple.test | RUN | 0.260534 | 0.869833 | 0.861635 | 0.001509 | 0.001546 | 0.001259 |
| convert_deque.test | RUN | 0.266472 | 0.864187 | 0.851832 | 0.001405 | 0.001493 | 0.001259 |
| convert_list.test | RUN | 0.262346 | 0.881167 | 0.865225 | 0.001457 | 0.001506 | 0.001194 |
| convert_std_pair.test | RUN | 0.279677 | 0.888890 | 0.882388 | 0.001408 | 0.001488 | 0.001198 |
| convert_std_tuple.test | RUN | 0.264105 | 0.867698 | 0.863032 | 0.001356 | 0.001470 | 0.001318 |
| convert_vector.test | RUN | 0.263721 | 0.857542 | 0.851541 | 0.001415 | 0.001350 | 0.001229 |
| filter_view.test | RUN | 0.312241 | 0.894683 | 1.018143 | 0.001309 | 0.001440 | 0.001288 |
| hash.test | RUN | 0.316709 | 0.837069 | 0.964695 | 0.001324 | 0.001542 | 0.001405 |
| io.test | RUN | 0.345390 | 1.174683 | 1.184797 | 0.001388 | 0.001848 | 0.001470 |
| iterator_range.test | RUN | 0.304997 | 0.878174 | 0.976635 | 0.001658 | 0.001558 | 0.001363 |
| joint_view.test | RUN | 0.407383 | 1.446766 | 1.456823 | 0.001253 | 0.001534 | 0.001958 |
| list_comparison.test | RUN | 0.229305 | 0.605058 | 0.695094 | 0.001442 | 0.001326 | 0.001387 |
| list_construction.test | RUN | 0.226709 | 0.590443 | 0.692794 | 0.001350 | 0.001407 | 0.001213 |
| list_copy.test | RUN | 0.347939 | 1.066493 | 1.196858 | 0.001222 | 0.001415 | 0.001345 |
| list_iterator.test | RUN | 0.224120 | 0.602755 | 0.654383 | 0.001232 | 0.001337 | 0.001319 |
| list_hash.test | RUN | 0.315799 | 1.201274 | 0.968201 | 0.001435 | 0.001668 | 0.001358 |
| list_make.test | RUN | 0.242745 | 0.650933 | 0.726236 | 0.001505 | 0.001414 | 0.001355 |
| list_misc.test | RUN | 0.309571 | 0.781050 | 0.910329 | 0.001319 | 0.001551 | 0.001380 |
| list_mutate.test | RUN | 0.210878 | 0.513906 | 0.603092 | 0.001297 | 0.001385 | 0.001487 |
| list_nest.test | RUN | 0.436993 | 1.466238 | 1.650839 | 0.001206 | 0.001424 | 0.001238 |
| list_tie.test | RUN | 0.232368 | 0.588622 | 0.676646 | 0.001428 | 0.001411 | 0.001353 |
| list_value_at.test | RUN | 0.223651 | 0.555259 | 0.629557 | 0.001342 | 0.001468 | 0.001336 |
| deque_comparison.test | RUN | 0.230674 | 0.615956 | 0.730338 | 0.001220 | 0.001527 | 0.001255 |
| deque_construction.test | RUN | 0.235546 | 0.576679 | 0.686359 | 0.001370 | 0.001534 | 0.001312 |
| deque_copy.test | RUN | 0.336463 | 0.997467 | 1.099713 | 0.001330 | 0.001440 | 0.001354 |
| deque_iterator.test | RUN | 0.228921 | 0.623399 | 0.675474 | 0.001228 | 0.001101 | 0.001279 |
| deque_hash.test | RUN | 0.319253 | 1.141932 | 0.961719 | 0.001185 | 0.001422 | 0.001328 |
| deque_is_constructible.test | COMPILE | 0.123519 | 0.275851 | 0.310561 | — | — | — |
| deque_make.test | RUN | 0.233862 | 0.596566 | 0.720339 | 0.001362 | 0.001350 | 0.001362 |
| deque_misc.test | RUN | 0.303588 | 0.771009 | 0.872938 | 0.001386 | 0.001410 | 0.001397 |
| deque_move.test | RUN | 0.238845 | 0.636132 | 0.692683 | 0.001287 | 0.001304 | 0.001358 |
| deque_mutate.test | RUN | 0.218843 | 0.524318 | 0.609560 | 0.001472 | 0.001556 | 0.001239 |
| deque_nest.test | RUN | 0.637259 | 2.332799 | 2.635203 | 0.001392 | 0.001353 | 0.001282 |
| deque_tie.test | RUN | 0.219298 | 0.562618 | 0.621275 | 0.001071 | 0.001378 | 0.001201 |
| deque_value_at.test | RUN | 0.217408 | 0.542104 | 0.606534 | 0.001588 | 0.001392 | 0.001420 |
| front_extended_deque.test | RUN | 0.325010 | 0.812152 | 0.955546 | 0.001277 | 0.001474 | 0.001415 |
| back_extended_deque.test | RUN | 0.310957 | 0.790617 | 0.931434 | 0.001275 | 0.001512 | 0.001445 |
| make_list.test | RUN | 0.245460 | 0.650625 | 0.734531 | 0.001213 | 0.001512 | 0.001465 |
| make_vector.test | RUN | 0.232474 | 0.643042 | 0.756258 | 0.001224 | 0.001432 | 0.001475 |
| map.test | RUN | 0.317354 | 0.976270 | 1.032488 | 0.001419 | 0.001614 | 0.001182 |
| map_comparison.test | RUN | 0.227943 | 0.633343 | 0.716448 | 0.001486 | 0.001575 | 0.001383 |
| map_construction.test | RUN | 0.236985 | 0.599491 | 0.694007 | 0.001304 | 0.001445 | 0.001250 |
| map_copy.test | RUN | 0.282739 | 0.759905 | 0.863343 | 0.001286 | 0.001397 | 0.001369 |
| map_misc.test | RUN | 0.307001 | 0.783333 | 0.878019 | 0.001479 | 0.001524 | 0.001222 |
| map_move.test | RUN | 0.237889 | 0.672769 | 0.703870 | 0.001398 | 0.001463 | 0.001314 |
| map_mutate.test | RUN | 0.214726 | 0.529518 | 0.609211 | 0.001332 | 0.001311 | 0.001303 |
| map_tie.test | RUN | 0.217236 | 0.538868 | 0.613293 | 0.001201 | 0.001425 | 0.001338 |
| nil.test | RUN | 0.151706 | 0.371271 | 0.429212 | 0.001504 | 0.001404 | 0.001409 |
| nview.test | RUN | 0.304239 | 0.775995 | 0.885805 | 0.001315 | 0.001464 | 0.001317 |
| reverse_view.test | RUN | 0.404503 | 1.234123 | 1.326036 | 0.001412 | 0.001542 | 0.001368 |
| segmented_iterator_range.test | RUN | 0.455858 | 1.441981 | 1.658576 | 0.001443 | 0.001452 | 0.001216 |
| set.test | RUN | 0.298124 | 0.862482 | 0.913088 | 0.001333 | 0.001437 | 0.001367 |
| single_view.test | RUN | 0.270312 | 0.760811 | 0.847638 | 0.001376 | 0.001474 | 0.001378 |
| std_pair.test | RUN | 0.344832 | 0.984269 | 1.098955 | 0.001326 | 0.001514 | 0.001375 |
| boost_array.test | RUN | 0.282087 | 0.675688 | 0.810040 | 0.001312 | 0.001485 | 0.001317 |
| array.test | RUN | 0.283033 | 0.694873 | 0.799746 | 0.001327 | 0.001406 | 0.001224 |
| std_array.test | RUN | 0.280237 | 0.675955 | 0.815758 | 0.001226 | 0.001337 | 0.001277 |
| tuple_comparison.test | RUN | 0.256997 | 0.634575 | 0.739795 | 0.001319 | 0.001494 | 0.001368 |
| tuple_construction.test | RUN | 0.261208 | 0.645671 | 0.755940 | 0.001198 | 0.001475 | 0.001232 |
| tuple_conversion.test | RUN | 0.556857 | 1.955610 | 2.452476 | 0.001283 | 0.001514 | 0.001348 |
| tuple_copy.test | RUN | 0.370570 | 1.126827 | 1.295218 | 0.001484 | 0.001488 | 0.001226 |
| tuple_element.test | RUN | 0.230233 | 0.585891 | 0.709481 | 0.001314 | 0.001530 | 0.001227 |
| tuple_make.test | RUN | 0.251935 | 0.678689 | 0.779577 | 0.001391 | 0.001481 | 0.001324 |
| tuple_misc.test | RUN | 0.331609 | 0.814452 | 0.943552 | 0.001472 | 0.001388 | 0.001296 |
| tuple_mutate.test | RUN | 0.231896 | 0.542145 | 0.654984 | 0.001462 | 0.001475 | 0.001494 |
| tuple_nest.test | RUN | 0.931811 | 3.910536 | 4.613174 | 0.001286 | 0.001416 | 0.001369 |
| tuple_hash.test | RUN | 0.327997 | 1.229305 | 0.995948 | 0.001264 | 0.001421 | 0.001320 |
| tuple_tie.test | RUN | 0.238123 | 0.588501 | 0.737717 | 0.001483 | 0.001596 | 0.001331 |
| tuple_traits__maybe_variadic.test | RUN | 0.261003 | 0.736759 | 0.775295 | 0.001320 | 0.001550 | 0.001211 |
| tuple_traits__no_variadic.test | RUN | 0.290305 | 0.777956 | 0.848238 | 0.001379 | 0.001587 | 0.001408 |
| transform_view.test | RUN | 0.389525 | 1.261499 | 1.354640 | 0.001369 | 0.001531 | 0.001280 |
| identity_view.test | RUN | 0.374333 | 1.168950 | 1.281017 | 0.001396 | 0.001473 | 0.001365 |
| vector_comparison.test | RUN | 0.238486 | 0.623965 | 0.769627 | 0.001400 | 0.001358 | 0.001387 |
| vector_construction.test | RUN | 0.241542 | 0.598484 | 0.691846 | 0.001235 | 0.001385 | 0.001409 |
| vector_conversion.test | RUN | 0.671971 | 2.568466 | 3.055258 | 0.001381 | 0.001360 | 0.001343 |
| vector_copy.test | RUN | 0.358050 | 1.148889 | 1.281052 | 0.001268 | 0.001596 | 0.001320 |
| vector_iterator.test | RUN | 0.229853 | 0.603157 | 0.684518 | 0.001321 | 0.001426 | 0.001377 |
| vector_make.test | RUN | 0.237683 | 0.636480 | 0.722365 | 0.001290 | 0.001375 | 0.001298 |
| vector_misc.test | RUN | 0.310573 | 0.813840 | 0.928792 | 0.001265 | 0.001337 | 0.001329 |
| vector_move.test | RUN | 0.236789 | 0.659701 | 0.686351 | 0.001340 | 0.001447 | 0.001380 |
| vector_mutate.test | RUN | 0.213457 | 0.535702 | 0.598797 | 0.001381 | 0.001211 | 0.001157 |
| vector_n.test | RUN | 0.263253 | 0.654816 | 0.809398 | 0.001481 | 0.001469 | 0.001393 |
| vector_nest.test | RUN | 0.955332 | 4.143620 | 4.580585 | 0.001336 | 0.001447 | 0.001256 |
| vector_hash.test | RUN | 0.318519 | 1.169662 | 0.929369 | 0.001430 | 0.001532 | 0.001272 |
| vector_tie.test | RUN | 0.232990 | 0.577109 | 0.665697 | 0.001298 | 0.001552 | 0.001244 |
| vector_traits__maybe_variadic.test | RUN | 0.239233 | 0.659887 | 0.707789 | 0.001458 | 0.001521 | 0.001427 |
| vector_traits__no_variadic.test | RUN | 0.271478 | 0.725911 | 0.721080 | 0.001340 | 0.001418 | 0.001330 |
| vector_value_at.test | RUN | 0.221529 | 0.531780 | 0.630297 | 0.001386 | 0.001428 | 0.001287 |
| zip_view.test | RUN | 0.441108 | 1.280350 | 1.566614 | 0.001463 | 0.001427 | 0.001428 |
| zip_view2.test | RUN | 0.363393 | 1.021535 | 1.248695 | 0.001411 | 0.001389 | 0.001328 |
| zip_view_ignore.test | RUN | 0.354922 | 0.939515 | 1.092537 | 0.001297 | 0.001420 | 0.001410 |
| repetitive_view.test | RUN | 0.567416 | 1.631502 | 2.129436 | 0.001482 | 0.001374 | 0.001319 |
| deduce_sequence.test | RUN | 0.284909 | 0.698604 | 0.830043 | 0.001425 | 0.001501 | 0.001345 |
| adapt_adt_named.test | RUN | 0.339062 | 0.997727 | 1.040432 | 0.001316 | 0.001572 | 0.001350 |
| adapt_adt_named_empty.test | RUN | 0.293953 | 0.806729 | 0.898843 | 0.001325 | 0.001362 | 0.001363 |
| adapt_adt.test | RUN | 0.380962 | 1.312912 | 1.273631 | 0.001467 | 0.001497 | 0.001401 |
| adapt_adt_empty.test | RUN | 0.289137 | 0.800830 | 0.877769 | 0.001489 | 0.001528 | 0.001422 |
| adapt_assoc_adt_named.test | RUN | 0.380208 | 1.053714 | 1.176061 | 0.001259 | 0.001381 | 0.001398 |
| adapt_assoc_adt_named_empty.test | RUN | 0.304841 | 0.824341 | 0.888036 | 0.001423 | 0.001479 | 0.001405 |
| adapt_assoc_adt.test | RUN | 0.387768 | 1.077149 | 1.196830 | 0.001286 | 0.001554 | 0.001253 |
| adapt_assoc_adt_empty.test | RUN | 0.296511 | 0.826561 | 0.883595 | 0.001525 | 0.001374 | 0.001326 |
| adapt_assoc_struct_named.test | RUN | 0.373595 | 1.028546 | 1.132076 | 0.001324 | 0.001373 | 0.001213 |
| adapt_assoc_struct_named_empty.test | RUN | 0.292323 | 0.807167 | 0.882997 | 0.001401 | 0.001493 | 0.001392 |
| adapt_assoc_struct.test | RUN | 0.337641 | 0.962228 | 1.057636 | 0.001447 | 0.001426 | 0.001296 |
| adapt_assoc_struct_empty.test | RUN | 0.289041 | 0.804917 | 0.880557 | 0.001647 | 0.001382 | 0.001312 |
| adapt_assoc_tpl_adt.test | RUN | 0.405152 | 1.114129 | 1.246866 | 0.001343 | 0.001450 | 0.001256 |
| adapt_assoc_tpl_adt_empty.test | RUN | 0.299312 | 0.821846 | 0.880525 | 0.001396 | 0.001556 | 0.001378 |
| adapt_assoc_tpl_struct.test | RUN | 0.324426 | 0.943471 | 1.029213 | 0.001426 | 0.001360 | 0.001299 |
| adapt_assoc_tpl_struct_empty.test | RUN | 0.288276 | 0.817632 | 0.876244 | 0.001534 | 0.001409 | 0.001331 |
| adapt_struct_named.test | RUN | 0.321394 | 0.996208 | 1.037483 | 0.001381 | 0.001383 | 0.001454 |
| adapt_struct_named_empty.test | RUN | 0.299882 | 0.823086 | 0.883790 | 0.001294 | 0.001321 | 0.001348 |
| adapt_struct.test | RUN | 0.357214 | 1.108423 | 1.185519 | 0.001395 | 0.001482 | 0.001349 |
| adapt_struct_empty.test | RUN | 0.283667 | 0.818106 | 0.880477 | 0.001503 | 0.001497 | 0.001311 |
| adapt_tpl_adt.test | RUN | 0.374177 | 1.281539 | 1.241383 | 0.001286 | 0.001404 | 0.001299 |
| adapt_tpl_adt_empty.test | RUN | 0.297872 | 0.815371 | 0.886146 | 0.001372 | 0.001446 | 0.001402 |
| adapt_tpl_struct.test | RUN | 0.301492 | 0.892945 | 0.968091 | 0.001470 | 0.001466 | 0.001364 |
| adapt_tpl_struct_empty.test | RUN | 0.288848 | 0.832238 | 0.910644 | 0.001394 | 0.001400 | 0.001285 |
| adt_attribute_proxy.test | RUN | 0.323581 | 0.794187 | 0.958074 | 0.001416 | 0.001510 | 0.001353 |
| define_struct.test | RUN | 0.399491 | 1.112544 | 1.234778 | 0.001276 | 0.001429 | 0.001340 |
| define_struct_empty.test | RUN | 0.350949 | 0.914850 | 1.010004 | 0.001511 | 0.001515 | 0.001321 |
| define_struct_move.test | RUN | 0.223964 | 0.520999 | 0.599055 | 0.001294 | 0.001426 | 0.001295 |
| define_struct_inline.test | RUN | 0.418983 | 1.334524 | 1.381038 | 0.001306 | 0.001287 | 0.001432 |
| define_struct_inline_empty.test | RUN | 0.345326 | 0.935874 | 1.013260 | 0.001482 | 0.001507 | 0.001360 |
| define_struct_inline_move.test | RUN | 0.219483 | 0.510204 | 0.615713 | 0.001264 | 0.001465 | 0.001368 |
| define_assoc_struct.test | RUN | 0.386398 | 1.047532 | 1.182847 | 0.001299 | 0.001476 | 0.001368 |
| define_assoc_struct_empty.test | RUN | 0.349154 | 0.917333 | 1.028469 | 0.001517 | 0.001436 | 0.001307 |
| define_assoc_struct_move.test | RUN | 0.227540 | 0.500285 | 0.599792 | 0.001554 | 0.001494 | 0.001315 |
| define_tpl_struct.test | RUN | 0.390486 | 1.061962 | 1.161193 | 0.001300 | 0.001377 | 0.001251 |
| define_tpl_struct_empty.test | RUN | 0.356071 | 0.907433 | 1.027773 | 0.001386 | 0.001461 | 0.001375 |
| define_tpl_struct_move.test | RUN | 0.222865 | 0.525958 | 0.610205 | 0.001342 | 0.001384 | 0.001459 |
| define_tpl_struct_inline.test | RUN | 0.413145 | 1.260074 | 1.289169 | 0.001509 | 0.001440 | 0.001288 |
| define_tpl_struct_inline_empty.test | RUN | 0.355445 | 0.902197 | 1.002849 | 0.001510 | 0.001414 | 0.001353 |
| define_tpl_struct_inline_move.test | RUN | 0.215707 | 0.528858 | 0.617288 | 0.001323 | 0.001302 | 0.001320 |
| define_assoc_tpl_struct.test | RUN | 0.394133 | 1.088650 | 1.207723 | 0.001401 | 0.001442 | 0.001371 |
| define_assoc_tpl_struct_empty.test | RUN | 0.349177 | 0.936815 | 1.026358 | 0.001330 | 0.001462 | 0.001314 |
| define_assoc_tpl_struct_move.test | RUN | 0.225998 | 0.520504 | 0.599705 | 0.001432 | 0.001450 | 0.001229 |
| std_tuple.test | RUN | 0.228315 | 0.584665 | 0.664465 | 0.001232 | 0.001406 | 0.001307 |
| std_tuple_iterator.test | RUN | 0.227084 | 0.609489 | 0.678013 | 0.001199 | 0.001568 | 0.001369 |
| ref_vector.test | RUN | 0.256368 | 0.631977 | 0.724958 | 0.001355 | 0.001396 | 0.001377 |
| flatten_view.test | RUN | 0.269574 | 0.752669 | 0.841038 | 0.001250 | 0.001550 | 0.001363 |
| github-159.test | COMPILE | 0.122390 | 0.288034 | 0.310813 | — | — | — |
| github-176.test | RUN | 0.256214 | 0.695365 | 0.721271 | 0.001112 | 0.001504 | 0.001212 |
| size.test | COMPILE | 0.215809 | 0.471936 | 0.564725 | — | — | — |
| fused.test | RUN | 0.311911 | 0.751167 | 0.841350 | 0.001434 | 0.001404 | 0.001378 |
| fused_function_object.test | RUN | 0.232960 | 0.575848 | 0.641229 | 0.001201 | 0.001322 | 0.001267 |
| fused_procedure.test | RUN | 0.295953 | 0.698537 | 0.802093 | 0.001330 | 0.001494 | 0.001212 |
| unfused.test | RUN | 0.233539 | 0.581629 | 0.666733 | 0.001271 | 0.001332 | 0.001222 |
| unfused_typed.test | RUN | 0.231947 | 0.614788 | 0.690526 | 0.001344 | 0.001492 | 0.001446 |
| make_fused.test | RUN | 0.304970 | 0.747334 | 0.847650 | 0.001252 | 0.001510 | 0.001324 |
| make_fused_function_object.test | RUN | 0.225581 | 0.554655 | 0.646816 | 0.001294 | 0.001385 | 0.001322 |
| make_fused_procedure.test | RUN | 0.294992 | 0.716051 | 0.818202 | 0.001296 | 0.001388 | 0.001240 |
| make_unfused.test | RUN | 0.227859 | 0.569852 | 0.648811 | 0.001399 | 0.001488 | 0.001213 |
| invoke.test | RUN | 0.585139 | 2.038930 | 2.211635 | 0.001453 | 0.001471 | 0.001169 |
| invoke_function_object.test | RUN | 0.289682 | 0.745946 | 0.822392 | 0.001254 | 0.001498 | 0.001320 |
| invoke_procedure.test | RUN | 0.477555 | 1.542612 | 1.641449 | 0.001276 | 0.001466 | 0.001288 |
| swap.test | RUN | 0.353616 | 0.920618 | 1.071081 | 0.001318 | 0.001498 | 0.001302 |
| is_sequence.test | COMPILE | 0.055530 | 0.134253 | 0.130320 | — | — | — |
| is_view.test | COMPILE | 0.060955 | 0.134738 | 0.132903 | — | — | — |
| pair_deque.test | COMPILE | 0.134006 | 0.293408 | 0.341233 | — | — | — |
| pair_list.test | COMPILE | 0.130963 | 0.288632 | 0.335798 | — | — | — |
| pair_map.test | COMPILE | 0.130835 | 0.310472 | 0.324971 | — | — | — |
| pair_set.test | COMPILE | 0.130981 | 0.300906 | 0.333204 | — | — | — |
| pair_vector.test | COMPILE | 0.127297 | 0.292381 | 0.318398 | — | — | — |
| pair_nest.test | COMPILE | 0.051059 | 0.118052 | 0.122808 | — | — | — |
| index_sequence.test | COMPILE | 0.042378 | 0.082929 | 0.093611 | — | — | — |
| and.test | COMPILE | 0.033655 | 0.060505 | 0.067853 | — | — | — |
| tag_of.test | COMPILE | 0.057917 | 0.123937 | 0.127048 | — | — | — |
| unused.test | COMPILE | 0.029933 | 0.079711 | 0.072586 | — | — | — |
| tag_of_fallback.test | COMPILE | 0.049400 | 0.128506 | 0.107282 | — | — | — |
| make_pair_r-value.test | COMPILE | 0.031829 | 0.119072 | 0.093835 | — | — | — |
| quick.test | RUN | 0.159416 | 0.373163 | 0.407368 | 0.000427 | 0.001056 | 0.001003 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 1.012× | 1.015×, 1.009× | 1.007× |
| clang | 1.009× | 1.013×, 1.004× | 0.989× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1360 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43654890423).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| adapt_adt.test | 10 | 0.001026s | 0.000993s | 0.000988s | byte equality observed |
| adapt_adt_empty.test | 10 | 0.000986s | 0.001010s | 0.000984s | byte equality observed |
| adapt_adt_named.test | 10 | 0.000990s | 0.001011s | 0.001008s | byte equality observed |
| adapt_adt_named_empty.test | 10 | 0.000992s | 0.001017s | 0.001004s | byte equality observed |
| adapt_assoc_adt.test | 10 | 0.001001s | 0.001025s | 0.000999s | byte equality observed |
| adapt_assoc_adt_empty.test | 10 | 0.000970s | 0.001007s | 0.001010s | byte equality observed |
| adapt_assoc_adt_named.test | 10 | 0.001010s | 0.001011s | 0.000975s | byte equality observed |
| adapt_assoc_adt_named_empty.test | 10 | 0.000991s | 0.001006s | 0.000981s | byte equality observed |
| adapt_assoc_struct.test | 10 | 0.000991s | 0.001008s | 0.000969s | byte equality observed |
| adapt_assoc_struct_empty.test | 8 | 0.000972s | 0.001001s | 0.001010s | byte equality observed |
| adapt_assoc_struct_named.test | 10 | 0.000979s | 0.000999s | 0.001000s | byte equality observed |
| adapt_assoc_struct_named_empty.test | 10 | 0.000986s | 0.001018s | 0.001004s | byte equality observed |
| adapt_assoc_tpl_adt.test | 10 | 0.000986s | 0.001009s | 0.000989s | byte equality observed |
| adapt_assoc_tpl_adt_empty.test | 10 | 0.000979s | 0.000989s | 0.000999s | byte equality observed |
| adapt_assoc_tpl_struct.test | 10 | 0.000994s | 0.001015s | 0.001011s | byte equality observed |
| adapt_assoc_tpl_struct_empty.test | 10 | 0.000996s | 0.001008s | 0.000987s | byte equality observed |
| adapt_struct.test | 10 | 0.000998s | 0.001007s | 0.001000s | byte equality observed |
| adapt_struct_empty.test | 10 | 0.000988s | 0.000989s | 0.000995s | byte equality observed |
| adapt_struct_named.test | 10 | 0.000985s | 0.001010s | 0.000998s | byte equality observed |
| adapt_struct_named_empty.test | 10 | 0.000957s | 0.001010s | 0.001002s | byte equality observed |
| adapt_tpl_adt.test | 10 | 0.000977s | 0.001020s | 0.001002s | byte equality observed |
| adapt_tpl_adt_empty.test | 10 | 0.000976s | 0.001014s | 0.000983s | byte equality observed |
| adapt_tpl_struct.test | 10 | 0.001013s | 0.001011s | 0.000987s | byte equality observed |
| adapt_tpl_struct_empty.test | 10 | 0.001005s | 0.001000s | 0.000983s | byte equality observed |
| adt_attribute_proxy.test | 10 | 0.001011s | 0.000990s | 0.000992s | byte equality observed |
| all.test | 10 | 0.000968s | 0.000983s | 0.001004s | byte equality observed |
| any.test | 10 | 0.000978s | 0.000985s | 0.000958s | byte equality observed |
| array.test | 10 | 0.000980s | 0.000980s | 0.000969s | byte equality observed |
| as_deque.test | 10 | 0.000961s | 0.001022s | 0.000969s | byte equality observed |
| as_list.test | 10 | 0.000994s | 0.001012s | 0.001031s | byte equality observed |
| as_map.test | 10 | 0.000989s | 0.001006s | 0.000994s | byte equality observed |
| as_map_assoc.test | 10 | 0.000992s | 0.000987s | 0.001000s | byte equality observed |
| as_set.test | 10 | 0.001022s | 0.001008s | 0.000996s | byte equality observed |
| as_vector.test | 10 | 0.000987s | 0.001030s | 0.001029s | byte equality observed |
| back_extended_deque.test | 10 | 0.000949s | 0.000962s | 0.000947s | byte equality observed |
| boost_array.test | 10 | 0.000962s | 0.000986s | 0.001013s | byte equality observed |
| boost_tuple.test | 10 | 0.000986s | 0.001039s | 0.001031s | byte equality observed |
| boost_tuple_iterator.test | 10 | 0.000967s | 0.000995s | 0.000952s | byte equality observed |
| clear.test | 10 | 0.001000s | 0.000999s | 0.000988s | byte equality observed |
| cons.test | 10 | 0.001006s | 0.000999s | 0.000993s | byte equality observed |
| convert_boost_tuple.test | 10 | 0.000965s | 0.000963s | 0.000962s | byte equality observed |
| convert_deque.test | 10 | 0.000992s | 0.000995s | 0.000980s | byte equality observed |
| convert_list.test | 10 | 0.000983s | 0.001017s | 0.000988s | byte equality observed |
| convert_std_pair.test | 10 | 0.000990s | 0.001019s | 0.000985s | byte equality observed |
| convert_std_tuple.test | 10 | 0.000991s | 0.000988s | 0.000995s | byte equality observed |
| convert_vector.test | 10 | 0.000986s | 0.001023s | 0.000967s | byte equality observed |
| copy.test | 10 | 0.000974s | 0.001001s | 0.000990s | byte equality observed |
| count.test | 10 | 0.000981s | 0.001042s | 0.000972s | byte equality observed |
| count_if.test | 10 | 0.000975s | 0.001003s | 0.000981s | byte equality observed |
| deduce_sequence.test | 10 | 0.001001s | 0.000989s | 0.000988s | byte equality observed |
| define_assoc_struct.test | 10 | 0.000990s | 0.000986s | 0.000995s | byte equality observed |
| define_assoc_struct_empty.test | 10 | 0.001008s | 0.000983s | 0.001007s | byte equality observed |
| define_assoc_struct_move.test | 10 | 0.000961s | 0.000986s | 0.000974s | byte equality observed |
| define_assoc_tpl_struct.test | 10 | 0.001014s | 0.000994s | 0.001032s | byte equality observed |
| define_assoc_tpl_struct_empty.test | 10 | 0.000986s | 0.001004s | 0.000981s | byte equality observed |
| define_assoc_tpl_struct_move.test | 10 | 0.000980s | 0.000995s | 0.000968s | byte equality observed |
| define_struct.test | 10 | 0.001004s | 0.000999s | 0.000991s | byte equality observed |
| define_struct_empty.test | 10 | 0.000997s | 0.000985s | 0.000985s | byte equality observed |
| define_struct_inline.test | 10 | 0.001000s | 0.000976s | 0.000975s | byte equality observed |
| define_struct_inline_empty.test | 10 | 0.000996s | 0.000979s | 0.000959s | byte equality observed |
| define_struct_inline_move.test | 10 | 0.000961s | 0.000991s | 0.000958s | byte equality observed |
| define_struct_move.test | 10 | 0.000980s | 0.000957s | 0.000978s | byte equality observed |
| define_tpl_struct.test | 10 | 0.000990s | 0.001015s | 0.000963s | byte equality observed |
| define_tpl_struct_empty.test | 10 | 0.001020s | 0.001012s | 0.000989s | byte equality observed |
| define_tpl_struct_inline.test | 10 | 0.000995s | 0.001025s | 0.000986s | byte equality observed |
| define_tpl_struct_inline_empty.test | 10 | 0.000999s | 0.001037s | 0.000973s | byte equality observed |
| define_tpl_struct_inline_move.test | 10 | 0.000968s | 0.000976s | 0.000966s | byte equality observed |
| define_tpl_struct_move.test | 10 | 0.000971s | 0.000983s | 0.001029s | byte equality observed |
| deque_comparison.test | 10 | 0.000973s | 0.000983s | 0.000955s | byte equality observed |
| deque_construction.test | 10 | 0.000985s | 0.000987s | 0.000943s | byte equality observed |
| deque_copy.test | 10 | 0.000975s | 0.001001s | 0.000975s | byte equality observed |
| deque_hash.test | 10 | 0.001005s | 0.000995s | 0.000954s | byte equality observed |
| deque_iterator.test | 10 | 0.000993s | 0.000975s | 0.000949s | byte equality observed |
| deque_make.test | 10 | 0.000974s | 0.001009s | 0.001007s | byte equality observed |
| deque_misc.test | 10 | 0.000991s | 0.000986s | 0.000999s | byte equality observed |
| deque_move.test | 10 | 0.000984s | 0.000991s | 0.000990s | byte equality observed |
| deque_mutate.test | 10 | 0.000952s | 0.000971s | 0.001001s | byte equality observed |
| deque_nest.test | 10 | 0.000961s | 0.000969s | 0.001001s | byte equality observed |
| deque_tie.test | 10 | 0.001004s | 0.000976s | 0.000977s | byte equality observed |
| deque_value_at.test | 10 | 0.000952s | 0.000963s | 0.000975s | byte equality observed |
| erase.test | 10 | 0.000987s | 0.000984s | 0.000987s | byte equality observed |
| erase_key.test | 10 | 0.000995s | 0.001016s | 0.001013s | byte equality observed |
| filter.test | 10 | 0.000977s | 0.000997s | 0.000988s | byte equality observed |
| filter_if.test | 10 | 0.001011s | 0.001007s | 0.001020s | byte equality observed |
| filter_view.test | 10 | 0.001007s | 0.001005s | 0.001014s | byte equality observed |
| find.test | 10 | 0.000997s | 0.000995s | 0.000992s | byte equality observed |
| find_if.test | 10 | 0.000988s | 0.001008s | 0.001018s | byte equality observed |
| flatten.test | 10 | 0.000990s | 0.000985s | 0.000983s | byte equality observed |
| flatten_view.test | 10 | 0.000992s | 0.000993s | 0.001001s | byte equality observed |
| fold.test | 10 | 0.000988s | 0.000982s | 0.001004s | byte equality observed |
| for_each.test | 10 | 0.001000s | 0.001035s | 0.001015s | byte equality observed |
| front_extended_deque.test | 10 | 0.000985s | 0.000981s | 0.000984s | byte equality observed |
| fused.test | 10 | 0.000961s | 0.000984s | 0.000987s | byte equality observed |
| fused_function_object.test | 10 | 0.000974s | 0.000978s | 0.000974s | byte equality observed |
| fused_procedure.test | 10 | 0.000983s | 0.000997s | 0.000966s | byte equality observed |
| github-176.test | 10 | 0.000991s | 0.001001s | 0.000974s | byte equality observed |
| hash.test | 10 | 0.001012s | 0.000966s | 0.000976s | byte equality observed |
| identity_view.test | 10 | 0.001009s | 0.001028s | 0.000997s | byte equality observed |
| insert.test | 10 | 0.001007s | 0.001009s | 0.000983s | byte equality observed |
| insert_range.test | 10 | 0.000997s | 0.001014s | 0.001038s | byte equality observed |
| invoke.test | 10 | 0.000957s | 0.000975s | 0.000977s | byte equality observed |
| invoke_function_object.test | 10 | 0.000974s | 0.000976s | 0.000971s | byte equality observed |
| invoke_procedure.test | 10 | 0.000965s | 0.000981s | 0.000953s | byte equality observed |
| io.test | 10 | 0.001100s | 0.001110s | 0.001110s | byte equality observed |
| iter_fold.test | 10 | 0.000979s | 0.000997s | 0.000998s | byte equality observed |
| iterator_range.test | 10 | 0.000996s | 0.000992s | 0.001008s | byte equality observed |
| join.test | 10 | 0.000988s | 0.001000s | 0.000995s | byte equality observed |
| joint_view.test | 10 | 0.001050s | 0.001048s | 0.001037s | byte equality observed |
| list_comparison.test | 10 | 0.000991s | 0.000986s | 0.000968s | byte equality observed |
| list_construction.test | 10 | 0.000965s | 0.001008s | 0.000989s | byte equality observed |
| list_copy.test | 10 | 0.000988s | 0.000974s | 0.001006s | byte equality observed |
| list_hash.test | 10 | 0.000975s | 0.000992s | 0.000984s | byte equality observed |
| list_iterator.test | 10 | 0.000978s | 0.000995s | 0.000967s | byte equality observed |
| list_make.test | 10 | 0.000999s | 0.000986s | 0.000993s | byte equality observed |
| list_misc.test | 10 | 0.000974s | 0.000987s | 0.000998s | byte equality observed |
| list_mutate.test | 10 | 0.000994s | 0.000969s | 0.001003s | byte equality observed |
| list_nest.test | 10 | 0.000982s | 0.000929s | 0.000974s | byte equality observed |
| list_tie.test | 10 | 0.000954s | 0.000974s | 0.000988s | byte equality observed |
| list_value_at.test | 10 | 0.000975s | 0.001015s | 0.001046s | byte equality observed |
| make_fused.test | 10 | 0.000959s | 0.000989s | 0.000989s | byte equality observed |
| make_fused_function_object.test | 10 | 0.000990s | 0.000969s | 0.000978s | byte equality observed |
| make_fused_procedure.test | 10 | 0.000998s | 0.001033s | 0.000962s | byte equality observed |
| make_list.test | 10 | 0.000990s | 0.000996s | 0.001003s | byte equality observed |
| make_unfused.test | 10 | 0.000978s | 0.001000s | 0.000971s | byte equality observed |
| make_vector.test | 10 | 0.000996s | 0.000994s | 0.000985s | byte equality observed |
| map.test | 10 | 0.001000s | 0.001022s | 0.000976s | byte equality observed |
| map_comparison.test | 10 | 0.000977s | 0.000998s | 0.000990s | byte equality observed |
| map_construction.test | 10 | 0.000984s | 0.001001s | 0.000986s | byte equality observed |
| map_copy.test | 10 | 0.000990s | 0.000987s | 0.001023s | byte equality observed |
| map_misc.test | 10 | 0.000981s | 0.001009s | 0.001022s | byte equality observed |
| map_move.test | 9 | 0.000977s | 0.000995s | 0.000999s | byte equality observed |
| map_mutate.test | 10 | 0.000973s | 0.000971s | 0.001021s | byte equality observed |
| map_tie.test | 10 | 0.000961s | 0.001010s | 0.001002s | byte equality observed |
| move.test | 10 | 0.000971s | 0.001003s | 0.001024s | byte equality observed |
| nil.test | 10 | 0.000969s | 0.000988s | 0.001033s | byte equality observed |
| none.test | 10 | 0.000961s | 0.001016s | 0.001001s | byte equality observed |
| nview.test | 10 | 0.000965s | 0.000968s | 0.000980s | byte equality observed |
| pop_back.test | 10 | 0.000999s | 0.001002s | 0.000984s | byte equality observed |
| pop_front.test | 10 | 0.000996s | 0.001024s | 0.001002s | byte equality observed |
| push_back.test | 10 | 0.000997s | 0.001038s | 0.001008s | byte equality observed |
| push_front.test | 10 | 0.001008s | 0.001051s | 0.000997s | byte equality observed |
| quick.test | 10 | 0.000434s | 0.000958s | 0.000968s | byte equality observed |
| ref_vector.test | 10 | 0.000992s | 0.001000s | 0.000978s | byte equality observed |
| remove.test | 10 | 0.001003s | 0.001026s | 0.000989s | byte equality observed |
| remove_if.test | 10 | 0.001030s | 0.001050s | 0.000994s | byte equality observed |
| repetitive_view.test | 10 | 0.000992s | 0.000983s | 0.000977s | byte equality observed |
| replace.test | 10 | 0.001025s | 0.001023s | 0.000996s | byte equality observed |
| replace_if.test | 10 | 0.001014s | 0.001030s | 0.000968s | byte equality observed |
| reverse.test | 10 | 0.001011s | 0.001043s | 0.000996s | byte equality observed |
| reverse_fold.test | 10 | 0.001007s | 0.000999s | 0.000962s | byte equality observed |
| reverse_iter_fold.test | 10 | 0.000979s | 0.001012s | 0.000963s | byte equality observed |
| reverse_view.test | 10 | 0.001035s | 0.001037s | 0.000973s | byte equality observed |
| segmented_find.test | 10 | 0.000973s | 0.001026s | 0.000958s | byte equality observed |
| segmented_find_if.test | 10 | 0.000945s | 0.000989s | 0.000996s | byte equality observed |
| segmented_fold.test | 10 | 0.001012s | 0.001036s | 0.000999s | byte equality observed |
| segmented_for_each.test | 10 | 0.001015s | 0.001018s | 0.001000s | byte equality observed |
| segmented_iterator_range.test | 10 | 0.001025s | 0.001046s | 0.001021s | byte equality observed |
| set.test | 10 | 0.000992s | 0.001027s | 0.000995s | byte equality observed |
| single_view.test | 10 | 0.001005s | 0.001034s | 0.000974s | byte equality observed |
| std_array.test | 10 | 0.000971s | 0.000990s | 0.000988s | byte equality observed |
| std_pair.test | 10 | 0.000964s | 0.001008s | 0.001024s | byte equality observed |
| std_tuple.test | 10 | 0.000968s | 0.001021s | 0.000967s | byte equality observed |
| std_tuple_iterator.test | 10 | 0.000993s | 0.001008s | 0.001009s | byte equality observed |
| swap.test | 10 | 0.000983s | 0.001013s | 0.000970s | byte equality observed |
| transform.test | 10 | 0.000986s | 0.001016s | 0.001005s | byte equality observed |
| transform_view.test | 10 | 0.001005s | 0.001051s | 0.001009s | byte equality observed |
| tuple_comparison.test | 10 | 0.000971s | 0.000989s | 0.000990s | byte equality observed |
| tuple_construction.test | 10 | 0.000987s | 0.000969s | 0.000954s | byte equality observed |
| tuple_conversion.test | 10 | 0.000985s | 0.001001s | 0.000971s | byte equality observed |
| tuple_copy.test | 10 | 0.000981s | 0.000998s | 0.000952s | byte equality observed |
| tuple_element.test | 10 | 0.000987s | 0.000984s | 0.000965s | byte equality observed |
| tuple_hash.test | 10 | 0.000996s | 0.001012s | 0.000959s | byte equality observed |
| tuple_make.test | 10 | 0.000962s | 0.001017s | 0.000964s | byte equality observed |
| tuple_misc.test | 10 | 0.000993s | 0.000995s | 0.000962s | byte equality observed |
| tuple_mutate.test | 10 | 0.000965s | 0.000975s | 0.000992s | byte equality observed |
| tuple_nest.test | 10 | 0.000947s | 0.000989s | 0.000947s | byte equality observed |
| tuple_tie.test | 10 | 0.000958s | 0.000977s | 0.000964s | byte equality observed |
| tuple_traits__maybe_variadic.test | 10 | 0.000970s | 0.000978s | 0.000958s | byte equality observed |
| tuple_traits__no_variadic.test | 10 | 0.000962s | 0.000996s | 0.000985s | byte equality observed |
| unfused.test | 10 | 0.000983s | 0.001017s | 0.000978s | byte equality observed |
| unfused_typed.test | 10 | 0.000997s | 0.000988s | 0.000967s | byte equality observed |
| vector_comparison.test | 10 | 0.000984s | 0.000978s | 0.001018s | byte equality observed |
| vector_construction.test | 10 | 0.000956s | 0.000980s | 0.000976s | byte equality observed |
| vector_conversion.test | 10 | 0.000980s | 0.000956s | 0.000974s | byte equality observed |
| vector_copy.test | 10 | 0.000982s | 0.000979s | 0.000984s | byte equality observed |
| vector_hash.test | 10 | 0.000974s | 0.000999s | 0.001018s | byte equality observed |
| vector_iterator.test | 10 | 0.001012s | 0.001014s | 0.001031s | byte equality observed |
| vector_make.test | 10 | 0.000992s | 0.001016s | 0.000987s | byte equality observed |
| vector_misc.test | 10 | 0.000991s | 0.001009s | 0.001032s | byte equality observed |
| vector_move.test | 10 | 0.000990s | 0.001029s | 0.000985s | byte equality observed |
| vector_mutate.test | 10 | 0.000961s | 0.000976s | 0.000993s | byte equality observed |
| vector_n.test | 10 | 0.000998s | 0.000985s | 0.000987s | byte equality observed |
| vector_nest.test | 10 | 0.000974s | 0.000975s | 0.000994s | byte equality observed |
| vector_tie.test | 10 | 0.000949s | 0.000983s | 0.000989s | byte equality observed |
| vector_traits__maybe_variadic.test | 10 | 0.000976s | 0.000953s | 0.000982s | byte equality observed |
| vector_traits__no_variadic.test | 10 | 0.000990s | 0.000961s | 0.000979s | byte equality observed |
| vector_value_at.test | 10 | 0.000974s | 0.000976s | 0.001006s | byte equality observed |
| zip.test | 10 | 0.000955s | 0.000959s | 0.001030s | byte equality observed |
| zip2.test | 10 | 0.000994s | 0.001019s | 0.000955s | byte equality observed |
| zip_ignore.test | 10 | 0.000963s | 0.000965s | 0.000997s | byte equality observed |
| zip_view.test | 10 | 0.000967s | 0.001020s | 0.001007s | byte equality observed |
| zip_view2.test | 10 | 0.000995s | 0.000985s | 0.000948s | byte equality observed |
| zip_view_ignore.test | 10 | 0.000972s | 0.000969s | 0.000975s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43654890423).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
