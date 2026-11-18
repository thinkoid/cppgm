# libs/json/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| array.test | RUN | 1.084618 | 5.877356 | 4.966909 | 0.002940 | 0.002770 | 0.002835 |
| basic_parser.test | RUN | 6.574301 | 136.302901 | 80.943839 | 0.616369 | 0.270993 | 0.874420 |
| conversion.test | RUN | 0.718851 | 2.218611 | 2.466012 | 0.001465 | 0.001746 | 0.001489 |
| doc_background.test | RUN | 0.727290 | 2.140379 | 2.426930 | 0.001716 | 0.001589 | 0.001685 |
| doc_forward_conversion.test | RUN | 0.768258 | 2.535855 | 2.726529 | 0.002006 | 0.001634 | 0.001647 |
| doc_parsing.test | RUN | 0.772505 | 2.369753 | 2.479100 | 0.002092 | 0.001696 | 0.001623 |
| doc_quick_look.test | RUN | 1.009740 | 2.858400 | 3.410380 | 0.001756 | 0.001597 | 0.001813 |
| doc_serializing.test | RUN | 0.694408 | 2.083793 | 2.311336 | 0.001618 | 0.001572 | 0.001594 |
| doc_storage_ptr.test | RUN | 0.696175 | 2.149371 | 2.370814 | 0.001486 | 0.001610 | 0.001683 |
| doc_uses_allocator.test | RUN | 0.700305 | 2.087963 | 2.378312 | 0.001863 | 0.001686 | 0.001729 |
| doc_using_numbers.test | RUN | 0.771893 | 2.171976 | 2.529709 | 0.001507 | 0.001791 | 0.001692 |
| double.test | RUN | 0.831553 | 3.759986 | 2.980780 | 1.861761 | 1.636509 | 1.888836 |
| error.test | RUN | 0.590098 | 2.135277 | 1.943163 | 0.001658 | 0.001856 | 0.001610 |
| fwd.test | RUN | 0.695763 | 2.167680 | 2.278287 | 0.001686 | 0.001708 | 0.001644 |
| json.test | RUN | 0.727299 | 2.519788 | 2.694732 | 0.001773 | 0.001612 | 0.001708 |
| kind.test | RUN | 0.556669 | 1.917557 | 1.858412 | 0.001650 | 0.001656 | 0.001634 |
| memory_resource.test | RUN | 0.742089 | 2.515384 | 2.488344 | 0.001646 | 0.001554 | 0.001768 |
| monotonic_resource.test | RUN | 0.691707 | 2.414852 | 2.467622 | 0.002621 | 0.002507 | 0.002498 |
| natvis.test | RUN | 0.711716 | 2.261055 | 2.354722 | 0.001801 | 0.001766 | 0.001728 |
| null_resource.test | RUN | 0.587843 | 1.968008 | 1.892631 | 0.001878 | 0.001816 | 0.001776 |
| object.test | RUN | 1.269457 | 6.919568 | 6.101384 | 0.007640 | 0.006469 | 0.007534 |
| parse.test | RUN | 0.779737 | 3.492552 | 2.649809 | 0.001877 | 0.002590 | 0.002427 |
| parser.test | RUN | 0.746004 | 2.947554 | 2.497663 | 0.002022 | 0.001854 | 0.001878 |
| pilfer.test | RUN | 0.393842 | 1.315895 | 1.214038 | 0.001687 | 0.001806 | 0.001686 |
| pointer.test | RUN | 0.892224 | 4.006865 | 3.359627 | 0.001971 | 0.002106 | 0.001963 |
| result_for.test | RUN | 0.715826 | 2.389833 | 2.436146 | 0.001462 | 0.001645 | 0.001700 |
| serialize.test | RUN | 0.710139 | 2.472254 | 2.442110 | 0.001802 | 0.001843 | 0.001787 |
| serializer.test | RUN | 1.235442 | 7.186207 | 5.736395 | 0.002949 | 0.002894 | 0.002963 |
| snippets.test | RUN | 1.948609 | 10.175318 | 8.361073 | 0.002047 | 0.002061 | 0.002042 |
| static_resource.test | RUN | 0.694315 | 2.181900 | 2.271000 | 0.001721 | 0.001950 | 0.001783 |
| storage_ptr.test | RUN | 0.738176 | 2.372693 | 2.482382 | 0.001674 | 0.001867 | 0.001743 |
| stream_parser.test | RUN | 0.903472 | 4.463343 | 3.384269 | 0.104950 | 0.121623 | 0.089575 |
| string.test | RUN | 1.748485 | 11.224665 | 9.131896 | 0.003093 | 0.002407 | 0.002976 |
| string_view.test | RUN | 0.441338 | 1.408958 | 1.293431 | 0.001610 | 0.001702 | 0.001634 |
| value.test | RUN | 1.614982 | 11.247185 | 7.429142 | 0.003784 | 0.003588 | 0.004418 |
| value_from.test | RUN | 1.498681 | 6.993991 | 6.249455 | 0.001872 | 0.002048 | 0.001764 |
| value_stack.test | RUN | 0.694309 | 2.067659 | 2.277902 | 0.001806 | 0.001647 | 0.001815 |
| value_to.test | RUN | 3.528015 | 21.573765 | 16.773673 | 0.003212 | 0.003156 | 0.003162 |
| value_ref.test | RUN | 0.794531 | 3.037686 | 2.886988 | 0.001837 | 0.001914 | 0.001684 |
| utf8.test | RUN | 0.583062 | 2.014685 | 1.957408 | 0.001672 | 0.001814 | 0.001708 |
| visit.test | RUN | 0.796863 | 3.257519 | 2.779617 | 0.001540 | 0.001793 | 0.001660 |
| d2s_intrinsics_test.test | RUN | 0.586249 | 1.823172 | 1.884766 | 0.001760 | 0.001642 | 0.001812 |
| d2s_table_test.test | RUN | 0.599449 | 2.065135 | 2.055546 | 0.002066 | 0.001774 | 0.001716 |
| d2s_test.test | RUN | 0.646350 | 2.533630 | 2.246076 | 0.001787 | 0.001774 | 0.001746 |
| parse_into.test | RUN | 23.127829 | 174.534958 | 106.612042 | 0.003138 | 0.003103 | 0.002865 |
| limits.test | RUN | 2.679077 | 15.888857 | 10.884774 | 0.002022 | 0.001942 | 0.002068 |
| header_only.test | RUN | 1.761620 | 12.074269 | 7.676719 | 0.001653 | 0.001646 | 0.001573 |
| no_exceptions.test | RUN | 2.458235 | 13.754790 | 10.023082 | 0.001765 | 0.001750 | 0.001734 |
| intrusive_macros.test | RUN | 2.101505 | 13.292411 | 9.297603 | 0.001622 | 0.001912 | 0.001654 |
| _gdb-printers.test | RUN | 0.324998 | 0.907125 | 1.072906 | 0.205615 | 0.336177 | 0.229001 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.924× | 0.912×, 0.937× | 0.990× |
| clang | 1.137× | 1.143×, 1.131× | 1.004× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1361 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44260407509).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| array.test | 9 | 0.001773s | 0.001659s | 0.001819s | native test oracle; output varies |
| basic_parser.test | 1 | 0.411338s | 0.288888s | 0.646888s | native test oracle; output varies |
| conversion.test | 10 | 0.000965s | 0.000969s | 0.000965s | byte equality observed |
| d2s_intrinsics_test.test | 10 | 0.000967s | 0.000965s | 0.000976s | byte equality observed |
| d2s_table_test.test | 10 | 0.000994s | 0.001016s | 0.001011s | byte equality observed |
| d2s_test.test | 10 | 0.001052s | 0.001042s | 0.001038s | byte equality observed |
| doc_background.test | 10 | 0.001031s | 0.000972s | 0.000989s | byte equality observed |
| doc_forward_conversion.test | 10 | 0.001055s | 0.001009s | 0.001042s | byte equality observed |
| doc_parsing.test | 10 | 0.001080s | 0.001022s | 0.001033s | byte equality observed |
| doc_quick_look.test | 10 | 0.001020s | 0.001001s | 0.001044s | byte equality observed |
| doc_serializing.test | 10 | 0.001021s | 0.000978s | 0.000991s | byte equality observed |
| doc_storage_ptr.test | 10 | 0.001025s | 0.001048s | 0.001019s | byte equality observed |
| doc_uses_allocator.test | 10 | 0.001030s | 0.001014s | 0.000989s | byte equality observed |
| doc_using_numbers.test | 10 | 0.001007s | 0.001010s | 0.001000s | byte equality observed |
| double.test | 1 | 1.158577s | 1.133306s | 1.176795s | native test oracle; output varies |
| error.test | 10 | 0.001134s | 0.001087s | 0.001095s | byte equality observed |
| fwd.test | 10 | 0.001009s | 0.000966s | 0.000986s | byte equality observed |
| header_only.test | 10 | 0.001008s | 0.000942s | 0.000960s | byte equality observed |
| intrusive_macros.test | 10 | 0.001047s | 0.001019s | 0.000995s | byte equality observed |
| json.test | 10 | 0.001033s | 0.000983s | 0.000995s | byte equality observed |
| kind.test | 10 | 0.001046s | 0.001012s | 0.001004s | byte equality observed |
| limits.test | 10 | 0.001272s | 0.001177s | 0.001215s | byte equality observed |
| memory_resource.test | 10 | 0.001058s | 0.001020s | 0.001007s | byte equality observed |
| monotonic_resource.test | 10 | 0.001552s | 0.001497s | 0.001486s | byte equality observed |
| natvis.test | 10 | 0.001058s | 0.001068s | 0.001041s | byte equality observed |
| no_exceptions.test | 10 | 0.001057s | 0.001029s | 0.001026s | byte equality observed |
| null_resource.test | 10 | 0.001077s | 0.001047s | 0.001022s | byte equality observed |
| object.test | 4 | 0.004495s | 0.003789s | 0.004416s | native test oracle; output varies |
| parse.test | 10 | 0.001470s | 0.001466s | 0.001434s | byte equality observed |
| parse_into.test | 7 | 0.002472s | 0.002385s | 0.002266s | native test oracle; output varies |
| parser.test | 10 | 0.001181s | 0.001119s | 0.001131s | byte equality observed |
| pilfer.test | 10 | 0.001002s | 0.000990s | 0.000979s | byte equality observed |
| pointer.test | 10 | 0.001237s | 0.001175s | 0.001206s | byte equality observed |
| result_for.test | 10 | 0.001011s | 0.000985s | 0.001001s | byte equality observed |
| serialize.test | 10 | 0.001075s | 0.001042s | 0.001081s | byte equality observed |
| serializer.test | 10 | 0.001817s | 0.001791s | 0.001814s | native test oracle; output varies |
| snippets.test | 10 | 0.001232s | 0.001209s | 0.001222s | byte equality observed |
| static_resource.test | 10 | 0.001093s | 0.001065s | 0.001086s | byte equality observed |
| storage_ptr.test | 10 | 0.001068s | 0.001038s | 0.001055s | byte equality observed |
| stream_parser.test | 1 | 0.057944s | 0.079487s | 0.057917s | native test oracle; output varies |
| string.test | 9 | 0.001820s | 0.001578s | 0.001865s | native test oracle; output varies |
| string_view.test | 10 | 0.001010s | 0.001009s | 0.001030s | byte equality observed |
| utf8.test | 10 | 0.001024s | 0.000995s | 0.001006s | byte equality observed |
| value.test | 7 | 0.002321s | 0.002169s | 0.002760s | byte equality observed |
| value_from.test | 10 | 0.001190s | 0.001196s | 0.001192s | byte equality observed |
| value_ref.test | 10 | 0.001083s | 0.001097s | 0.001062s | byte equality observed |
| value_stack.test | 10 | 0.001067s | 0.001061s | 0.001042s | byte equality observed |
| value_to.test | 9 | 0.001931s | 0.001934s | 0.001907s | native test oracle; output varies |
| visit.test | 10 | 0.001047s | 0.001041s | 0.001036s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44260407509).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
