# libs/json/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| array.test | RUN | 0.765430 | 3.709151 | 3.216779 | 0.002444 | 0.002269 | 0.002286 |
| basic_parser.test | RUN | 4.196911 | 99.924263 | 57.798543 | 0.351599 | 0.140111 | 0.309141 |
| conversion.test | RUN | 0.524528 | 1.395032 | 1.572716 | 0.001693 | 0.001680 | 0.001680 |
| doc_background.test | RUN | 0.522937 | 1.406669 | 1.582527 | 0.001700 | 0.001565 | 0.001371 |
| doc_forward_conversion.test | RUN | 0.557554 | 1.658068 | 1.790098 | 0.001766 | 0.001596 | 0.001617 |
| doc_parsing.test | RUN | 0.554000 | 1.659887 | 1.628835 | 0.001760 | 0.001578 | 0.001780 |
| doc_quick_look.test | RUN | 0.693756 | 1.939501 | 2.169758 | 0.001583 | 0.001575 | 0.001734 |
| doc_serializing.test | RUN | 0.499428 | 1.355427 | 1.503061 | 0.001671 | 0.001371 | 0.001711 |
| doc_storage_ptr.test | RUN | 0.488275 | 1.372858 | 1.479143 | 0.001457 | 0.001641 | 0.001732 |
| doc_uses_allocator.test | RUN | 0.484590 | 1.352741 | 1.522111 | 0.001771 | 0.001912 | 0.001693 |
| doc_using_numbers.test | RUN | 0.549035 | 1.357829 | 1.540975 | 0.001582 | 0.001746 | 0.001528 |
| double.test | RUN | 0.591390 | 2.289208 | 2.022328 | 0.981330 | 0.855185 | 1.008761 |
| error.test | RUN | 0.421926 | 1.341025 | 1.223604 | 0.001703 | 0.001820 | 0.001812 |
| fwd.test | RUN | 0.472253 | 1.339071 | 1.626527 | 0.001663 | 0.001652 | 0.001690 |
| json.test | RUN | 0.496190 | 1.636178 | 1.730397 | 0.001549 | 0.001708 | 0.001570 |
| kind.test | RUN | 0.373075 | 1.308282 | 1.177765 | 0.001704 | 0.001836 | 0.001724 |
| memory_resource.test | RUN | 0.537497 | 1.612935 | 1.598482 | 0.001646 | 0.001810 | 0.001698 |
| monotonic_resource.test | RUN | 0.499252 | 1.504695 | 1.540895 | 0.002191 | 0.002269 | 0.002260 |
| natvis.test | RUN | 0.499289 | 1.518831 | 1.466194 | 0.001710 | 0.001582 | 0.001681 |
| null_resource.test | RUN | 0.408662 | 1.312697 | 1.217170 | 0.001828 | 0.001820 | 0.001694 |
| object.test | RUN | 0.832601 | 4.347906 | 3.962102 | 0.004872 | 0.004351 | 0.005048 |
| parse.test | RUN | 0.548990 | 2.296800 | 1.666162 | 0.002284 | 0.002242 | 0.002062 |
| parser.test | RUN | 0.536552 | 1.892663 | 1.629709 | 0.001880 | 0.001734 | 0.001909 |
| pilfer.test | RUN | 0.270370 | 0.853533 | 0.766020 | 0.001562 | 0.001604 | 0.001442 |
| pointer.test | RUN | 0.596086 | 2.583847 | 2.193776 | 0.001735 | 0.001974 | 0.001884 |
| result_for.test | RUN | 0.487220 | 1.541118 | 1.632500 | 0.001413 | 0.001657 | 0.001678 |
| serialize.test | RUN | 0.502090 | 1.559481 | 1.578379 | 0.001613 | 0.001804 | 0.001831 |
| serializer.test | RUN | 0.806488 | 4.448319 | 3.739509 | 0.002498 | 0.002748 | 0.002490 |
| snippets.test | RUN | 1.267813 | 6.490989 | 5.428062 | 0.002076 | 0.001952 | 0.002016 |
| static_resource.test | RUN | 0.498932 | 1.455386 | 1.457462 | 0.001822 | 0.001847 | 0.001865 |
| storage_ptr.test | RUN | 0.524403 | 1.507269 | 1.613079 | 0.001982 | 0.001796 | 0.001806 |
| stream_parser.test | RUN | 0.667769 | 2.739638 | 2.201022 | 0.061198 | 0.072374 | 0.063373 |
| string.test | RUN | 1.081461 | 7.065266 | 5.533294 | 0.002601 | 0.002553 | 0.002508 |
| string_view.test | RUN | 0.313873 | 0.908848 | 0.936637 | 0.001674 | 0.001646 | 0.001698 |
| value.test | RUN | 1.115658 | 7.560203 | 5.033743 | 0.002831 | 0.002955 | 0.003450 |
| value_from.test | RUN | 1.026714 | 4.182680 | 4.141175 | 0.001928 | 0.001952 | 0.001790 |
| value_stack.test | RUN | 0.506887 | 1.351406 | 1.401816 | 0.001675 | 0.001804 | 0.001547 |
| value_to.test | RUN | 2.383642 | 14.044076 | 10.327508 | 0.002922 | 0.002708 | 0.002502 |
| value_ref.test | RUN | 0.553855 | 1.899282 | 1.908602 | 0.001818 | 0.001834 | 0.001654 |
| utf8.test | RUN | 0.416959 | 1.182066 | 1.144642 | 0.001982 | 0.001620 | 0.001694 |
| visit.test | RUN | 0.579007 | 1.998125 | 1.738233 | 0.001706 | 0.001794 | 0.001774 |
| d2s_intrinsics_test.test | RUN | 0.415598 | 1.149047 | 1.198353 | 0.001796 | 0.001594 | 0.001636 |
| d2s_table_test.test | RUN | 0.428513 | 1.297530 | 1.292914 | 0.001762 | 0.001688 | 0.001568 |
| d2s_test.test | RUN | 0.446339 | 1.563016 | 1.463546 | 0.001933 | 0.001790 | 0.001787 |
| parse_into.test | RUN | 13.858009 | 119.293671 | 70.775475 | 0.003031 | 0.003034 | 0.002701 |
| limits.test | RUN | 1.707140 | 9.751682 | 7.537882 | 0.002016 | 0.002156 | 0.001968 |
| header_only.test | RUN | 1.132152 | 7.592119 | 4.743751 | 0.001552 | 0.001762 | 0.001571 |
| no_exceptions.test | RUN | 1.600572 | 8.768210 | 6.572187 | 0.001640 | 0.001828 | 0.001588 |
| intrusive_macros.test | RUN | 1.319928 | 8.437655 | 5.600378 | 0.001435 | 0.001747 | 0.001659 |
| _gdb-printers.test | RUN | 0.230833 | 0.545885 | 0.682471 | 0.148645 | 0.224962 | 0.204182 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.900× | 0.888×, 0.912× | 0.981× |
| clang | 1.085× | 1.076×, 1.094× | 1.002× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1364 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43666517673).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| array.test | 10 | 0.001368s | 0.001257s | 0.001305s | byte equality observed |
| basic_parser.test | 1 | 0.220617s | 0.156384s | 0.334172s | native test oracle; output varies |
| conversion.test | 10 | 0.000839s | 0.000854s | 0.000833s | byte equality observed |
| d2s_intrinsics_test.test | 10 | 0.000837s | 0.000859s | 0.000840s | byte equality observed |
| d2s_table_test.test | 10 | 0.000863s | 0.000883s | 0.000855s | byte equality observed |
| d2s_test.test | 10 | 0.000924s | 0.000926s | 0.000884s | byte equality observed |
| doc_background.test | 10 | 0.000866s | 0.000847s | 0.000835s | byte equality observed |
| doc_forward_conversion.test | 10 | 0.000876s | 0.000882s | 0.000886s | byte equality observed |
| doc_parsing.test | 10 | 0.000902s | 0.000888s | 0.000880s | byte equality observed |
| doc_quick_look.test | 10 | 0.000882s | 0.000861s | 0.000875s | byte equality observed |
| doc_serializing.test | 10 | 0.000870s | 0.000870s | 0.000852s | byte equality observed |
| doc_storage_ptr.test | 10 | 0.000889s | 0.000892s | 0.000862s | byte equality observed |
| doc_uses_allocator.test | 10 | 0.000873s | 0.000862s | 0.000840s | byte equality observed |
| doc_using_numbers.test | 10 | 0.000891s | 0.000848s | 0.000823s | byte equality observed |
| double.test | 1 | 0.670642s | 0.618147s | 0.662365s | native test oracle; output varies |
| error.test | 10 | 0.000968s | 0.000875s | 0.000954s | byte equality observed |
| fwd.test | 10 | 0.000844s | 0.000838s | 0.000837s | byte equality observed |
| header_only.test | 10 | 0.000837s | 0.000831s | 0.000822s | byte equality observed |
| intrusive_macros.test | 10 | 0.000885s | 0.000885s | 0.000885s | byte equality observed |
| json.test | 10 | 0.000877s | 0.000858s | 0.000862s | byte equality observed |
| kind.test | 10 | 0.000893s | 0.000897s | 0.000878s | byte equality observed |
| limits.test | 10 | 0.001051s | 0.001001s | 0.000995s | byte equality observed |
| memory_resource.test | 10 | 0.000888s | 0.000867s | 0.000862s | byte equality observed |
| monotonic_resource.test | 10 | 0.001239s | 0.001154s | 0.001154s | byte equality observed |
| natvis.test | 10 | 0.000909s | 0.000887s | 0.000872s | byte equality observed |
| no_exceptions.test | 10 | 0.000914s | 0.000890s | 0.000879s | byte equality observed |
| null_resource.test | 10 | 0.000956s | 0.000923s | 0.000878s | byte equality observed |
| object.test | 7 | 0.002939s | 0.002525s | 0.002759s | native test oracle; output varies |
| parse.test | 10 | 0.001263s | 0.001216s | 0.001190s | byte equality observed |
| parse_into.test | 7 | 0.002382s | 0.002309s | 0.002096s | native test oracle; output varies |
| parser.test | 10 | 0.001034s | 0.000989s | 0.000985s | byte equality observed |
| pilfer.test | 10 | 0.000868s | 0.000852s | 0.000876s | byte equality observed |
| pointer.test | 10 | 0.001047s | 0.001026s | 0.001010s | byte equality observed |
| result_for.test | 10 | 0.000875s | 0.000876s | 0.000849s | byte equality observed |
| serialize.test | 10 | 0.000918s | 0.000924s | 0.000892s | byte equality observed |
| serializer.test | 10 | 0.001435s | 0.001428s | 0.001406s | byte equality observed |
| snippets.test | 10 | 0.001074s | 0.001041s | 0.001035s | byte equality observed |
| static_resource.test | 10 | 0.000965s | 0.000933s | 0.000941s | byte equality observed |
| storage_ptr.test | 10 | 0.000936s | 0.000905s | 0.000916s | byte equality observed |
| stream_parser.test | 1 | 0.040616s | 0.044066s | 0.037282s | native test oracle; output varies |
| string.test | 9 | 0.001419s | 0.001287s | 0.001447s | byte equality observed |
| string_view.test | 10 | 0.000856s | 0.000871s | 0.000863s | byte equality observed |
| utf8.test | 10 | 0.000879s | 0.000864s | 0.000877s | byte equality observed |
| value.test | 8 | 0.001684s | 0.001575s | 0.001881s | native test oracle; output varies |
| value_from.test | 10 | 0.001038s | 0.001026s | 0.001005s | byte equality observed |
| value_ref.test | 10 | 0.000953s | 0.000949s | 0.000932s | byte equality observed |
| value_stack.test | 10 | 0.000946s | 0.000932s | 0.000908s | byte equality observed |
| value_to.test | 10 | 0.001528s | 0.001543s | 0.001560s | byte equality observed |
| visit.test | 10 | 0.000917s | 0.000909s | 0.000927s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43666517673).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
