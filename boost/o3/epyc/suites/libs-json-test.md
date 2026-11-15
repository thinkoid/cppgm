# libs/json/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| array.test | RUN | 0.724349 | 3.629771 | 3.080560 | 0.002508 | 0.002448 | 0.002295 |
| basic_parser.test | RUN | 4.363972 | 98.297170 | 57.864896 | 0.365775 | 0.136879 | 0.510188 |
| conversion.test | RUN | 0.511829 | 1.411096 | 1.572561 | 0.001606 | 0.001522 | 0.001377 |
| doc_background.test | RUN | 0.525850 | 1.409720 | 1.513215 | 0.001789 | 0.001658 | 0.001441 |
| doc_forward_conversion.test | RUN | 0.557079 | 1.595921 | 1.712631 | 0.001654 | 0.001444 | 0.001420 |
| doc_parsing.test | RUN | 0.566009 | 1.516557 | 1.545449 | 0.001860 | 0.001608 | 0.001372 |
| doc_quick_look.test | RUN | 0.741966 | 1.757471 | 2.141071 | 0.001855 | 0.001401 | 0.001377 |
| doc_serializing.test | RUN | 0.507339 | 1.330345 | 1.481847 | 0.001742 | 0.001321 | 0.001471 |
| doc_storage_ptr.test | RUN | 0.538902 | 1.323320 | 1.467663 | 0.001478 | 0.001713 | 0.001595 |
| doc_uses_allocator.test | RUN | 0.508498 | 1.293985 | 1.427830 | 0.001809 | 0.001712 | 0.001614 |
| doc_using_numbers.test | RUN | 0.555708 | 1.393857 | 1.488514 | 0.001660 | 0.001778 | 0.001578 |
| double.test | RUN | 0.582410 | 2.307385 | 1.970920 | 0.987724 | 0.949033 | 1.037869 |
| error.test | RUN | 0.397554 | 1.356826 | 1.119613 | 0.001552 | 0.001663 | 0.001610 |
| fwd.test | RUN | 0.468935 | 1.256431 | 1.494662 | 0.001584 | 0.001492 | 0.001679 |
| json.test | RUN | 0.499623 | 1.506751 | 1.660383 | 0.001608 | 0.001634 | 0.001378 |
| kind.test | RUN | 0.399310 | 1.259276 | 1.227504 | 0.001796 | 0.001850 | 0.001765 |
| memory_resource.test | RUN | 0.558344 | 1.564785 | 1.687486 | 0.001604 | 0.001850 | 0.001694 |
| monotonic_resource.test | RUN | 0.512853 | 1.590177 | 1.497534 | 0.002349 | 0.002107 | 0.002046 |
| natvis.test | RUN | 0.500034 | 1.527147 | 1.464134 | 0.001572 | 0.001464 | 0.001656 |
| null_resource.test | RUN | 0.412853 | 1.213300 | 1.168247 | 0.001732 | 0.001784 | 0.001726 |
| object.test | RUN | 0.861305 | 4.306066 | 3.548091 | 0.005251 | 0.004386 | 0.005061 |
| parse.test | RUN | 0.553827 | 2.199208 | 1.783393 | 0.001968 | 0.002244 | 0.002196 |
| parser.test | RUN | 0.536926 | 1.830103 | 1.633076 | 0.001958 | 0.001704 | 0.001872 |
| pilfer.test | RUN | 0.281786 | 0.858647 | 0.805829 | 0.001760 | 0.001738 | 0.001702 |
| pointer.test | RUN | 0.625151 | 2.470387 | 2.058468 | 0.002078 | 0.001930 | 0.001963 |
| result_for.test | RUN | 0.589867 | 1.498347 | 1.479459 | 0.001491 | 0.001604 | 0.001654 |
| serialize.test | RUN | 0.576543 | 1.522566 | 1.451542 | 0.001958 | 0.001756 | 0.001622 |
| serializer.test | RUN | 0.826104 | 4.310347 | 3.848865 | 0.002466 | 0.002458 | 0.002662 |
| snippets.test | RUN | 1.294354 | 6.156978 | 5.322079 | 0.002050 | 0.001953 | 0.001958 |
| static_resource.test | RUN | 0.485854 | 1.409217 | 1.440602 | 0.001834 | 0.001818 | 0.001492 |
| storage_ptr.test | RUN | 0.528487 | 1.485660 | 1.695878 | 0.001798 | 0.001952 | 0.001694 |
| stream_parser.test | RUN | 0.622055 | 2.749282 | 2.155950 | 0.059772 | 0.076681 | 0.058727 |
| string.test | RUN | 1.097951 | 6.450403 | 5.638862 | 0.002622 | 0.002309 | 0.002566 |
| string_view.test | RUN | 0.307340 | 0.910652 | 0.835206 | 0.001768 | 0.001670 | 0.001586 |
| value.test | RUN | 1.101117 | 7.359391 | 4.691316 | 0.003075 | 0.002967 | 0.003256 |
| value_from.test | RUN | 1.029989 | 4.379096 | 3.916083 | 0.001640 | 0.001867 | 0.001846 |
| value_stack.test | RUN | 0.510673 | 1.348026 | 1.407008 | 0.001541 | 0.001747 | 0.001647 |
| value_to.test | RUN | 2.455653 | 12.922588 | 11.014814 | 0.002875 | 0.002773 | 0.002973 |
| value_ref.test | RUN | 0.560414 | 1.950146 | 1.787247 | 0.001873 | 0.001793 | 0.001748 |
| utf8.test | RUN | 0.421752 | 1.291451 | 1.229853 | 0.001768 | 0.001771 | 0.001830 |
| visit.test | RUN | 0.600096 | 2.022845 | 1.635131 | 0.001769 | 0.001660 | 0.001741 |
| d2s_intrinsics_test.test | RUN | 0.475625 | 1.112670 | 1.192267 | 0.001714 | 0.001594 | 0.001565 |
| d2s_table_test.test | RUN | 0.434807 | 1.260007 | 1.256862 | 0.001804 | 0.001909 | 0.001712 |
| d2s_test.test | RUN | 0.456615 | 1.690219 | 1.466131 | 0.001974 | 0.001888 | 0.001777 |
| parse_into.test | RUN | 14.075573 | 118.103383 | 70.462596 | 0.003102 | 0.002934 | 0.002808 |
| limits.test | RUN | 1.730349 | 9.534167 | 7.749797 | 0.002186 | 0.001880 | 0.002066 |
| header_only.test | RUN | 1.146525 | 7.514174 | 5.831563 | 0.001519 | 0.001601 | 0.001748 |
| no_exceptions.test | RUN | 1.662831 | 8.545319 | 7.438964 | 0.001756 | 0.001939 | 0.001771 |
| intrusive_macros.test | RUN | 1.347274 | 8.420352 | 7.038981 | 0.001323 | 0.001712 | 0.001971 |
| _gdb-printers.test | RUN | 0.227057 | 0.616239 | 0.966670 | 0.150824 | 0.234938 | 0.179453 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.885×† | 0.852×, 0.918× | 1.002× |
| clang | 1.105× | 1.128×, 1.082× | 0.987× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1364 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43686398833).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| array.test | 10 | 0.001387s | 0.001245s | 0.001389s | byte equality observed |
| basic_parser.test | 1 | 0.229299s | 0.147801s | 0.327617s | native test oracle; output varies |
| conversion.test | 10 | 0.000867s | 0.000827s | 0.000843s | byte equality observed |
| d2s_intrinsics_test.test | 10 | 0.000864s | 0.000837s | 0.000855s | byte equality observed |
| d2s_table_test.test | 10 | 0.000896s | 0.000861s | 0.000883s | byte equality observed |
| d2s_test.test | 10 | 0.000950s | 0.000920s | 0.000939s | byte equality observed |
| doc_background.test | 10 | 0.000880s | 0.000855s | 0.000884s | byte equality observed |
| doc_forward_conversion.test | 10 | 0.000902s | 0.000886s | 0.000911s | byte equality observed |
| doc_parsing.test | 10 | 0.000919s | 0.000897s | 0.000943s | byte equality observed |
| doc_quick_look.test | 10 | 0.000893s | 0.000872s | 0.000905s | byte equality observed |
| doc_serializing.test | 10 | 0.000899s | 0.000847s | 0.000874s | byte equality observed |
| doc_storage_ptr.test | 10 | 0.000898s | 0.000877s | 0.000885s | byte equality observed |
| doc_uses_allocator.test | 10 | 0.000889s | 0.000867s | 0.000855s | byte equality observed |
| doc_using_numbers.test | 10 | 0.000893s | 0.000866s | 0.000874s | byte equality observed |
| double.test | 1 | 0.659823s | 0.630146s | 0.672418s | native test oracle; output varies |
| error.test | 10 | 0.000985s | 0.000880s | 0.001061s | byte equality observed |
| fwd.test | 10 | 0.000852s | 0.000852s | 0.000882s | byte equality observed |
| header_only.test | 10 | 0.000863s | 0.000840s | 0.000884s | byte equality observed |
| intrusive_macros.test | 10 | 0.000911s | 0.000902s | 0.000930s | byte equality observed |
| json.test | 10 | 0.000903s | 0.000875s | 0.000921s | byte equality observed |
| kind.test | 10 | 0.000921s | 0.000891s | 0.000930s | byte equality observed |
| limits.test | 10 | 0.001080s | 0.001042s | 0.001055s | byte equality observed |
| memory_resource.test | 10 | 0.000946s | 0.000886s | 0.000922s | byte equality observed |
| monotonic_resource.test | 10 | 0.001248s | 0.001147s | 0.001240s | byte equality observed |
| natvis.test | 10 | 0.000930s | 0.000906s | 0.000934s | byte equality observed |
| no_exceptions.test | 10 | 0.000908s | 0.000908s | 0.000922s | byte equality observed |
| null_resource.test | 10 | 0.000935s | 0.000922s | 0.000961s | byte equality observed |
| object.test | 7 | 0.002901s | 0.002601s | 0.002992s | native test oracle; output varies |
| parse.test | 10 | 0.001226s | 0.001211s | 0.001258s | byte equality observed |
| parse_into.test | 7 | 0.002299s | 0.002149s | 0.002216s | native test oracle; output varies |
| parser.test | 10 | 0.001015s | 0.000983s | 0.001055s | byte equality observed |
| pilfer.test | 10 | 0.000887s | 0.000885s | 0.000904s | byte equality observed |
| pointer.test | 10 | 0.001055s | 0.001024s | 0.001085s | byte equality observed |
| result_for.test | 10 | 0.000873s | 0.000855s | 0.000908s | byte equality observed |
| serialize.test | 10 | 0.000924s | 0.000948s | 0.000944s | byte equality observed |
| serializer.test | 10 | 0.001421s | 0.001430s | 0.001462s | byte equality observed |
| snippets.test | 10 | 0.001087s | 0.001092s | 0.001088s | byte equality observed |
| static_resource.test | 10 | 0.000950s | 0.000964s | 0.000977s | byte equality observed |
| storage_ptr.test | 10 | 0.000920s | 0.000964s | 0.000939s | byte equality observed |
| stream_parser.test | 1 | 0.040210s | 0.045007s | 0.037791s | native test oracle; output varies |
| string.test | 10 | 0.001476s | 0.001315s | 0.001521s | byte equality observed |
| string_view.test | 10 | 0.000865s | 0.000928s | 0.000910s | byte equality observed |
| utf8.test | 10 | 0.000852s | 0.000903s | 0.000899s | byte equality observed |
| value.test | 10 | 0.001663s | 0.001707s | 0.001899s | native test oracle; output varies |
| value_from.test | 10 | 0.001026s | 0.001054s | 0.001035s | byte equality observed |
| value_ref.test | 10 | 0.000928s | 0.000943s | 0.000933s | byte equality observed |
| value_stack.test | 10 | 0.000913s | 0.000939s | 0.000932s | byte equality observed |
| value_to.test | 10 | 0.001499s | 0.001498s | 0.001609s | byte equality observed |
| visit.test | 10 | 0.000898s | 0.000905s | 0.000958s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43686398833).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
