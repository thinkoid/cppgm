# libs/variant2/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| quick.test | RUN | 0.138561 | 0.303047 | 0.368262 | 0.001618 | 0.000700 | 0.001494 |
| variant_size.test | RUN | 0.223622 | 0.733046 | 0.710515 | 0.001675 | 0.001702 | 0.001642 |
| variant_alternative.test | RUN | 0.304302 | 2.376807 | 1.275137 | 0.001537 | 0.001726 | 0.001646 |
| variant_holds_alternative.test | RUN | 0.212523 | 0.543957 | 0.729285 | 0.001486 | 0.001670 | 0.001408 |
| variant_holds_alternative_cx.test | COMPILE | 0.131521 | 0.319989 | 0.397609 | — | — | — |
| variant_get_by_index.test | RUN | 0.349769 | 2.613668 | 1.578060 | 0.001788 | 0.001777 | 0.001638 |
| variant_get_by_index_cx.test | COMPILE | 0.136438 | 0.322941 | 0.412204 | — | — | — |
| variant_get_by_type.test | RUN | 0.357373 | 2.814657 | 1.692826 | 0.001755 | 0.001639 | 0.001638 |
| variant_get_by_type_cx.test | COMPILE | 0.125294 | 0.285872 | 0.353171 | — | — | — |
| variant_default_construct.test | RUN | 0.341112 | 2.054292 | 1.356003 | 0.001560 | 0.001450 | 0.001671 |
| variant_default_construct_cx.test | COMPILE | 0.133242 | 0.295899 | 0.412676 | — | — | — |
| variant_copy_construct.test | RUN | 0.529519 | 3.460877 | 2.469738 | 0.001584 | 0.001661 | 0.001485 |
| variant_copy_construct_cx.test | COMPILE | 0.148092 | 0.347807 | 0.472897 | — | — | — |
| variant_move_construct.test | RUN | 0.482231 | 2.949792 | 2.214634 | 0.001562 | 0.001628 | 0.001651 |
| variant_move_construct_cx.test | COMPILE | 0.122484 | 0.288570 | 0.350704 | — | — | — |
| variant_value_construct.test | RUN | 0.255478 | 0.742717 | 0.916820 | 0.001551 | 0.001695 | 0.001729 |
| variant_value_construct_cx.test | COMPILE | 0.140449 | 0.328927 | 0.436230 | — | — | — |
| variant_in_place_index_construct.test | RUN | 0.260121 | 0.740490 | 0.944490 | 0.001567 | 0.001432 | 0.001668 |
| variant_in_place_index_construct_cx.test | COMPILE | 0.141534 | 0.319935 | 0.416285 | — | — | — |
| variant_in_place_type_construct.test | RUN | 0.257499 | 0.732366 | 0.941060 | 0.001691 | 0.001510 | 0.001559 |
| variant_in_place_type_construct_cx.test | COMPILE | 0.139771 | 0.326780 | 0.414017 | — | — | — |
| variant_copy_assign.test | RUN | 0.359024 | 2.369216 | 1.492183 | 0.001577 | 0.001534 | 0.001583 |
| variant_copy_assign_cx.test | COMPILE | 0.123737 | 0.287330 | 0.348052 | — | — | — |
| variant_move_assign.test | RUN | 0.351280 | 2.354085 | 1.479691 | 0.001521 | 0.001648 | 0.001705 |
| variant_move_assign_cx.test | COMPILE | 0.124131 | 0.288867 | 0.355115 | — | — | — |
| variant_value_assign.test | RUN | 0.264245 | 0.826711 | 1.027078 | 0.001566 | 0.001717 | 0.001610 |
| variant_value_assign_cx.test | COMPILE | 0.127020 | 0.285634 | 0.355264 | — | — | — |
| variant_emplace_index.test | RUN | 0.308794 | 0.949905 | 1.116536 | 0.001468 | 0.001675 | 0.001735 |
| variant_emplace_index_cx.test | COMPILE | 0.127111 | 0.280523 | 0.328920 | — | — | — |
| variant_emplace_type.test | RUN | 0.275128 | 0.815144 | 1.030786 | 0.001678 | 0.001614 | 0.001608 |
| variant_emplace_type_cx.test | COMPILE | 0.122796 | 0.286402 | 0.344225 | — | — | — |
| variant_swap.test | RUN | 0.281787 | 1.014347 | 1.081239 | 0.001804 | 0.001547 | 0.001502 |
| variant_eq_ne.test | RUN | 0.225866 | 0.600245 | 0.770404 | 0.001547 | 0.001646 | 0.001701 |
| variant_eq_ne_cx.test | COMPILE | 0.125593 | 0.287043 | 0.360686 | — | — | — |
| variant_lt_gt.test | RUN | 0.234580 | 0.693473 | 0.816895 | 0.001734 | 0.001619 | 0.001658 |
| variant_lt_gt_cx.test | COMPILE | 0.126609 | 0.278705 | 0.338071 | — | — | — |
| variant_destroy.test | RUN | 0.236173 | 0.680498 | 0.829721 | 0.001704 | 0.001642 | 0.001700 |
| variant_visit.test | RUN | 1.470383 | 5.216157 | 14.269034 | 0.001650 | 0.001536 | 0.001530 |
| variant_convert_construct.test | RUN | 0.296724 | 0.913264 | 1.167846 | 0.001592 | 0.001717 | 0.001703 |
| variant_subset.test | RUN | 0.303551 | 0.958290 | 1.251370 | 0.001786 | 0.002024 | 0.001392 |
| variant_valueless.test | RUN | 0.220492 | 0.628905 | 0.846870 | 0.001710 | 0.001659 | 0.001589 |
| variant_copy_construct_throw.test | RUN | 0.176447 | 0.488771 | 0.579446 | 0.001598 | 0.001666 | 0.001680 |
| variant_move_construct_throw.test | RUN | 0.177817 | 0.475581 | 0.573959 | 0.001661 | 0.001487 | 0.001804 |
| variant_convert_construct_throw.test | RUN | 0.182916 | 0.520119 | 0.609009 | 0.001660 | 0.001622 | 0.001604 |
| variant_copy_assign_throw.test | RUN | 0.172274 | 0.451004 | 0.574836 | 0.001551 | 0.001704 | 0.001706 |
| variant_move_assign_throw.test | RUN | 0.175179 | 0.449721 | 0.586190 | 0.001640 | 0.001863 | 0.001624 |
| variant_get_by_index_nx.test | RUN | 0.437754 | 2.249088 | 1.517044 | 0.001636 | 0.001522 | 0.001684 |
| variant_get_by_index_cx_nx.test | COMPILE | 0.139848 | 0.330342 | 0.424534 | — | — | — |
| variant_get_by_type_nx.test | RUN | 0.440932 | 2.475445 | 1.615713 | 0.001652 | 0.001667 | 0.001703 |
| variant_get_by_type_cx_nx.test | COMPILE | 0.128592 | 0.288188 | 0.349055 | — | — | — |
| variant_subset_nx.test | RUN | 0.325706 | 0.957884 | 1.246232 | 0.001562 | 0.001561 | 0.001598 |
| variant_hash.test | RUN | 0.324062 | 1.086632 | 1.108157 | 0.001698 | 0.001829 | 0.001717 |
| variant_trivial.test | RUN | 1.759723 | 6.034786 | 8.102844 | 0.001796 | 0.001740 | 0.001651 |
| variant_special.test | RUN | 1.610809 | 6.433443 | 8.722814 | 0.001742 | 0.001857 | 0.001876 |
| variant_visit_derived.test | RUN | 0.219250 | 0.587669 | 0.837637 | 0.001678 | 0.001644 | 0.001659 |
| variant_many_types.test | RUN | 1.934190 | 8.261181 | 12.077683 | 0.001558 | 0.001870 | 0.001714 |
| variant_visit_r.test | RUN | 0.808727 | 2.601707 | 4.693463 | 0.001505 | 0.001573 | 0.001670 |
| variant_derived_construct.test | COMPILE | 0.126633 | 0.292702 | 0.368451 | — | — | — |
| variant_visit_by_index.test | RUN | 0.285281 | 0.759588 | 1.110831 | 0.001462 | 0.001557 | 0.001611 |
| variant_ostream_insert.test | RUN | 0.210483 | 0.607780 | 0.696190 | 0.001556 | 0.001663 | 0.001646 |
| is_output_streamable.test | RUN | 0.257241 | 1.269458 | 0.988196 | 0.001596 | 0.001646 | 0.001614 |
| variant_json_value_from.test | RUN | 0.391653 | 1.014413 | 1.301198 | 0.001882 | 0.001732 | 0.001743 |
| variant_json_value_to.test | RUN | 0.488982 | 1.413290 | 1.747751 | 0.001644 | 0.001726 | 0.001396 |
| variant_uses_double_storage.test | COMPILE | 0.134246 | 0.298733 | 0.433308 | — | — | — |
| variant_derived_construct2.test | RUN | 0.180362 | 0.490543 | 0.619304 | 0.001563 | 0.001740 | 0.001538 |
| variant_visit_cx.test | COMPILE | 0.125071 | 0.293115 | 0.355325 | — | — | — |
| variant_visit_cx_2.test | COMPILE | 0.122913 | 0.278344 | 0.349106 | — | — | — |
| variant_visit_r_cx.test | COMPILE | 0.127079 | 0.280839 | 0.342259 | — | — | — |
| variant_index_type_126.test | RUN | 1.062298 | 2.651167 | 5.128561 | 0.001575 | 0.001594 | 0.001675 |
| variant_index_type_127.test | RUN | 1.063642 | 2.643497 | 5.262525 | 0.001734 | 0.001875 | 0.001510 |
| variant_index_type_128.test | RUN | 1.098738 | 2.743109 | 5.345031 | 0.001549 | 0.001645 | 0.001676 |
| variant_index_type_129.test | RUN | 1.085571 | 2.703079 | 5.355745 | 0.001643 | 0.001522 | 0.001524 |
| variant_index_type_254.test | RUN | 3.923811 | 10.069262 | 16.535976 | 0.001556 | 0.001636 | 0.001708 |
| variant_index_type_255.test | RUN | 3.739275 | 10.166763 | 16.855910 | 0.001884 | 0.001691 | 0.001688 |
| variant_index_type_256.test | RUN | 3.967107 | 10.271003 | 17.043487 | 0.001472 | 0.001657 | 0.001673 |
| variant_index_type_257.test | RUN | 4.011119 | 10.401735 | 17.153510 | 0.001500 | 0.001650 | 0.001691 |
| variant_default_construct_cx_2.test | COMPILE | 0.122520 | 0.298653 | 0.366393 | — | — | — |
| variant_default_construct_cx_3.test | COMPILE | 0.123898 | 0.278683 | 0.378834 | — | — | — |
| variant_default_construct_cx_4.test | COMPILE | 0.118175 | 0.285193 | 0.323690 | — | — | — |
| variant_default_construct_cx_5.test | COMPILE | 0.123414 | 0.280152 | 0.325386 | — | — | — |
| variant_value_construct_cx_2.test | COMPILE | 0.123055 | 0.278689 | 0.355924 | — | — | — |
| variant_value_construct_cx_3.test | COMPILE | 0.123264 | 0.291137 | 0.336421 | — | — | — |
| variant_value_construct_cx_4.test | COMPILE | 0.106354 | 0.230264 | 0.238104 | — | — | — |
| variant_issue_55.test | RUN | 0.158555 | 0.456021 | 0.516897 | 0.001236 | 0.001263 | 0.001146 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.989× | 0.995×, 0.984× | 0.994× |
| clang | 0.997× | 0.998×, 0.995× | 1.002× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1361 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44260407509).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| is_output_streamable.test | 10 | 0.001194s | 0.001213s | 0.001194s | byte equality observed |
| quick.test | 10 | 0.001186s | 0.000521s | 0.001169s | byte equality observed |
| variant_alternative.test | 10 | 0.001177s | 0.001181s | 0.001191s | byte equality observed |
| variant_convert_construct.test | 10 | 0.001212s | 0.001210s | 0.001239s | byte equality observed |
| variant_convert_construct_throw.test | 10 | 0.001259s | 0.001239s | 0.001264s | byte equality observed |
| variant_copy_assign.test | 10 | 0.001240s | 0.001214s | 0.001222s | byte equality observed |
| variant_copy_assign_throw.test | 9 | 0.001245s | 0.001217s | 0.001284s | byte equality observed |
| variant_copy_construct.test | 10 | 0.001228s | 0.001202s | 0.001240s | byte equality observed |
| variant_copy_construct_throw.test | 10 | 0.001261s | 0.001243s | 0.001231s | byte equality observed |
| variant_default_construct.test | 10 | 0.001204s | 0.001203s | 0.001184s | byte equality observed |
| variant_derived_construct2.test | 10 | 0.001183s | 0.001186s | 0.001220s | byte equality observed |
| variant_destroy.test | 10 | 0.001200s | 0.001214s | 0.001207s | byte equality observed |
| variant_emplace_index.test | 10 | 0.001206s | 0.001217s | 0.001224s | byte equality observed |
| variant_emplace_type.test | 10 | 0.001212s | 0.001230s | 0.001201s | byte equality observed |
| variant_eq_ne.test | 10 | 0.001208s | 0.001197s | 0.001179s | byte equality observed |
| variant_get_by_index.test | 10 | 0.001281s | 0.001326s | 0.001269s | byte equality observed |
| variant_get_by_index_nx.test | 10 | 0.001213s | 0.001210s | 0.001205s | byte equality observed |
| variant_get_by_type.test | 10 | 0.001259s | 0.001312s | 0.001273s | byte equality observed |
| variant_get_by_type_nx.test | 10 | 0.001222s | 0.001226s | 0.001209s | byte equality observed |
| variant_hash.test | 10 | 0.001210s | 0.001204s | 0.001170s | byte equality observed |
| variant_holds_alternative.test | 10 | 0.001211s | 0.001199s | 0.001178s | byte equality observed |
| variant_in_place_index_construct.test | 10 | 0.001199s | 0.001205s | 0.001212s | byte equality observed |
| variant_in_place_type_construct.test | 10 | 0.001215s | 0.001240s | 0.001207s | byte equality observed |
| variant_index_type_126.test | 10 | 0.001182s | 0.001186s | 0.001179s | byte equality observed |
| variant_index_type_127.test | 10 | 0.001184s | 0.001177s | 0.001188s | byte equality observed |
| variant_index_type_128.test | 10 | 0.001190s | 0.001216s | 0.001201s | byte equality observed |
| variant_index_type_129.test | 10 | 0.001198s | 0.001196s | 0.001195s | byte equality observed |
| variant_index_type_254.test | 10 | 0.001190s | 0.001185s | 0.001191s | byte equality observed |
| variant_index_type_255.test | 10 | 0.001179s | 0.001197s | 0.001198s | byte equality observed |
| variant_index_type_256.test | 10 | 0.001202s | 0.001191s | 0.001219s | byte equality observed |
| variant_index_type_257.test | 10 | 0.001214s | 0.001189s | 0.001193s | byte equality observed |
| variant_issue_55.test | 10 | 0.001224s | 0.001216s | 0.001213s | byte equality observed |
| variant_json_value_from.test | 10 | 0.001262s | 0.001252s | 0.001234s | byte equality observed |
| variant_json_value_to.test | 10 | 0.001254s | 0.001244s | 0.001197s | byte equality observed |
| variant_lt_gt.test | 10 | 0.001202s | 0.001198s | 0.001193s | byte equality observed |
| variant_many_types.test | 10 | 0.001256s | 0.001216s | 0.001224s | byte equality observed |
| variant_move_assign.test | 10 | 0.001213s | 0.001206s | 0.001204s | byte equality observed |
| variant_move_assign_throw.test | 10 | 0.001219s | 0.001250s | 0.001232s | byte equality observed |
| variant_move_construct.test | 10 | 0.001198s | 0.001226s | 0.001216s | byte equality observed |
| variant_move_construct_throw.test | 10 | 0.001226s | 0.001250s | 0.001261s | byte equality observed |
| variant_ostream_insert.test | 10 | 0.001223s | 0.001233s | 0.001216s | byte equality observed |
| variant_size.test | 10 | 0.001172s | 0.001223s | 0.001217s | byte equality observed |
| variant_special.test | 10 | 0.001270s | 0.001259s | 0.001228s | byte equality observed |
| variant_subset.test | 10 | 0.001252s | 0.001242s | 0.001230s | byte equality observed |
| variant_subset_nx.test | 10 | 0.001195s | 0.001197s | 0.001192s | byte equality observed |
| variant_swap.test | 10 | 0.001227s | 0.001208s | 0.001212s | byte equality observed |
| variant_trivial.test | 10 | 0.001240s | 0.001249s | 0.001214s | byte equality observed |
| variant_value_assign.test | 10 | 0.001214s | 0.001234s | 0.001193s | byte equality observed |
| variant_value_construct.test | 10 | 0.001209s | 0.001246s | 0.001198s | byte equality observed |
| variant_valueless.test | 10 | 0.001252s | 0.001289s | 0.001248s | byte equality observed |
| variant_visit.test | 10 | 0.001209s | 0.001240s | 0.001196s | byte equality observed |
| variant_visit_by_index.test | 10 | 0.001208s | 0.001173s | 0.001197s | byte equality observed |
| variant_visit_derived.test | 10 | 0.001204s | 0.001189s | 0.001215s | byte equality observed |
| variant_visit_r.test | 10 | 0.001217s | 0.001221s | 0.001203s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44260407509).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
