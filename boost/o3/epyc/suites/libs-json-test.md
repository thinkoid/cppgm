# libs/json/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| array.test | RUN | 0.770029 | 3.761527 | 3.425801 | 0.002658 | 0.002436 | 0.002730 |
| basic_parser.test | RUN | 4.523928 | 99.836027 | 60.334296 | 0.391251 | 0.139476 | 0.329606 |
| conversion.test | RUN | 0.554030 | 1.414853 | 1.676353 | 0.001850 | 0.001824 | 0.002695 |
| doc_background.test | RUN | 0.577225 | 1.408582 | 1.644390 | 0.003228 | 0.001865 | 0.001803 |
| doc_forward_conversion.test | RUN | 0.612186 | 1.646293 | 1.881962 | 0.002020 | 0.001870 | 0.001577 |
| doc_parsing.test | RUN | 0.604490 | 1.585505 | 1.728251 | 0.001942 | 0.001570 | 0.001912 |
| doc_quick_look.test | RUN | 0.751880 | 1.902413 | 2.317421 | 0.001898 | 0.001550 | 0.001331 |
| doc_serializing.test | RUN | 0.539749 | 1.355639 | 1.574517 | 0.001460 | 0.001516 | 0.001496 |
| doc_storage_ptr.test | RUN | 0.534913 | 1.374200 | 1.586328 | 0.001767 | 0.001514 | 0.001581 |
| doc_uses_allocator.test | RUN | 0.545723 | 1.352755 | 1.532216 | 0.002136 | 0.001696 | 0.001701 |
| doc_using_numbers.test | RUN | 0.608750 | 1.494567 | 1.766438 | 0.001872 | 0.001803 | 0.001786 |
| double.test | RUN | 0.644704 | 2.539622 | 1.913464 | 1.141076 | 0.981338 | 1.086835 |
| error.test | RUN | 0.456004 | 1.351220 | 1.368952 | 0.001876 | 0.001752 | 0.001788 |
| fwd.test | RUN | 0.535253 | 1.323752 | 1.705446 | 0.001830 | 0.001737 | 0.001802 |
| json.test | RUN | 0.566316 | 1.551777 | 1.781328 | 0.001798 | 0.001614 | 0.001712 |
| kind.test | RUN | 0.421169 | 1.246525 | 1.319470 | 0.002000 | 0.001826 | 0.001886 |
| memory_resource.test | RUN | 0.608249 | 1.599535 | 1.677293 | 0.001780 | 0.001778 | 0.001702 |
| monotonic_resource.test | RUN | 0.551224 | 1.553573 | 1.636247 | 0.002334 | 0.002217 | 0.002331 |
| natvis.test | RUN | 0.553367 | 1.511495 | 1.524115 | 0.001984 | 0.001506 | 0.001751 |
| null_resource.test | RUN | 0.452616 | 1.254850 | 1.315347 | 0.001956 | 0.001873 | 0.001882 |
| object.test | RUN | 0.924274 | 4.383899 | 3.780275 | 0.005649 | 0.004386 | 0.005421 |
| parse.test | RUN | 0.596482 | 2.229142 | 1.931296 | 0.002486 | 0.002247 | 0.002522 |
| parser.test | RUN | 0.578311 | 1.877410 | 1.807230 | 0.002094 | 0.001900 | 0.001840 |
| pilfer.test | RUN | 0.292261 | 0.843203 | 0.895911 | 0.001604 | 0.001472 | 0.001727 |
| pointer.test | RUN | 0.638165 | 2.572687 | 2.237921 | 0.002122 | 0.002138 | 0.002082 |
| result_for.test | RUN | 0.556825 | 1.536890 | 1.579025 | 0.001694 | 0.001686 | 0.001829 |
| serialize.test | RUN | 0.550319 | 1.622916 | 1.591809 | 0.001589 | 0.001862 | 0.001845 |
| serializer.test | RUN | 0.839030 | 4.521415 | 3.940217 | 0.002700 | 0.002658 | 0.002638 |
| snippets.test | RUN | 1.345111 | 6.305679 | 5.498282 | 0.002158 | 0.001999 | 0.002161 |
| static_resource.test | RUN | 0.522402 | 1.472145 | 1.597522 | 0.002035 | 0.001979 | 0.001962 |
| storage_ptr.test | RUN | 0.575016 | 1.595345 | 1.717553 | 0.001986 | 0.001894 | 0.001926 |
| stream_parser.test | RUN | 0.657893 | 2.904047 | 2.434845 | 0.066488 | 0.078554 | 0.069238 |
| string.test | RUN | 1.065032 | 6.740223 | 6.508485 | 0.003321 | 0.002251 | 0.002824 |
| string_view.test | RUN | 0.331509 | 0.943238 | 0.942326 | 0.001595 | 0.001757 | 0.001806 |
| value.test | RUN | 1.091861 | 7.529789 | 5.452670 | 0.003370 | 0.003174 | 0.003589 |
| value_from.test | RUN | 1.018368 | 4.479951 | 4.430167 | 0.002092 | 0.002108 | 0.002044 |
| value_stack.test | RUN | 0.534139 | 1.349422 | 1.612169 | 0.001758 | 0.002021 | 0.001930 |
| value_to.test | RUN | 2.487314 | 13.693112 | 11.845863 | 0.003222 | 0.002611 | 0.003000 |
| value_ref.test | RUN | 0.601576 | 2.042753 | 1.857280 | 0.001989 | 0.001976 | 0.001845 |
| utf8.test | RUN | 0.457316 | 1.325878 | 1.302991 | 0.002174 | 0.001840 | 0.001787 |
| visit.test | RUN | 0.613750 | 2.101824 | 1.771943 | 0.001841 | 0.001781 | 0.001930 |
| d2s_intrinsics_test.test | RUN | 0.461221 | 1.257444 | 1.284549 | 0.001756 | 0.001783 | 0.001665 |
| d2s_table_test.test | RUN | 0.449824 | 1.417735 | 1.306603 | 0.001869 | 0.001953 | 0.001800 |
| d2s_test.test | RUN | 0.481516 | 1.811520 | 1.516677 | 0.002069 | 0.002062 | 0.001907 |
| parse_into.test | RUN | 14.551793 | 124.717705 | 77.631363 | 0.003129 | 0.003121 | 0.002830 |
| limits.test | RUN | 1.791542 | 10.435579 | 7.438192 | 0.002162 | 0.002216 | 0.001997 |
| header_only.test | RUN | 1.158808 | 8.267613 | 5.186735 | 0.001509 | 0.001764 | 0.001617 |
| no_exceptions.test | RUN | 1.694941 | 9.129943 | 7.139672 | 0.001508 | 0.001691 | 0.001861 |
| intrusive_macros.test | RUN | 1.364767 | 8.827305 | 6.083243 | 0.001850 | 0.001871 | 0.001756 |
| _gdb-printers.test | RUN | 0.245197 | 0.645264 | 0.765075 | 0.152310 | 0.235094 | 0.181161 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.807×† | 0.802×, 0.812× | 1.052× |
| clang | 1.034× | 1.032×, 1.035× | 1.007× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1363 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43624536445).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| array.test | 10 | 0.001511s | 0.001302s | 0.001359s | byte equality observed |
| basic_parser.test | 1 | 0.241938s | 0.157054s | 0.338074s | native test oracle; output varies |
| conversion.test | 10 | 0.000884s | 0.000883s | 0.000873s | byte equality observed |
| d2s_intrinsics_test.test | 10 | 0.000899s | 0.000877s | 0.000881s | byte equality observed |
| d2s_table_test.test | 10 | 0.000929s | 0.000915s | 0.000891s | byte equality observed |
| d2s_test.test | 10 | 0.000966s | 0.000937s | 0.000947s | byte equality observed |
| doc_background.test | 10 | 0.000940s | 0.000892s | 0.000866s | byte equality observed |
| doc_forward_conversion.test | 10 | 0.000937s | 0.000944s | 0.000914s | byte equality observed |
| doc_parsing.test | 10 | 0.000969s | 0.000944s | 0.000920s | byte equality observed |
| doc_quick_look.test | 10 | 0.000961s | 0.000900s | 0.000888s | byte equality observed |
| doc_serializing.test | 10 | 0.000935s | 0.000883s | 0.000867s | byte equality observed |
| doc_storage_ptr.test | 10 | 0.000941s | 0.000932s | 0.000867s | byte equality observed |
| doc_uses_allocator.test | 10 | 0.000935s | 0.000904s | 0.000865s | byte equality observed |
| doc_using_numbers.test | 10 | 0.000936s | 0.000918s | 0.000874s | byte equality observed |
| double.test | 1 | 0.754078s | 0.631250s | 0.698830s | native test oracle; output varies |
| error.test | 10 | 0.001014s | 0.000912s | 0.000961s | byte equality observed |
| fwd.test | 10 | 0.000907s | 0.000885s | 0.000888s | byte equality observed |
| header_only.test | 10 | 0.000895s | 0.000863s | 0.000857s | byte equality observed |
| intrusive_macros.test | 10 | 0.000947s | 0.000926s | 0.000900s | byte equality observed |
| json.test | 10 | 0.000915s | 0.000913s | 0.000899s | byte equality observed |
| kind.test | 10 | 0.000948s | 0.000951s | 0.000923s | byte equality observed |
| limits.test | 10 | 0.001130s | 0.001054s | 0.001051s | byte equality observed |
| memory_resource.test | 10 | 0.000937s | 0.000913s | 0.000915s | byte equality observed |
| monotonic_resource.test | 10 | 0.001271s | 0.001188s | 0.001211s | byte equality observed |
| natvis.test | 10 | 0.000936s | 0.000948s | 0.000932s | byte equality observed |
| no_exceptions.test | 10 | 0.000912s | 0.000915s | 0.000914s | byte equality observed |
| null_resource.test | 10 | 0.000949s | 0.000949s | 0.000961s | byte equality observed |
| object.test | 6 | 0.003059s | 0.002583s | 0.002897s | native test oracle; output varies |
| parse.test | 10 | 0.001295s | 0.001293s | 0.001226s | byte equality observed |
| parse_into.test | 7 | 0.002350s | 0.002259s | 0.002134s | native test oracle; output varies |
| parser.test | 10 | 0.001057s | 0.001018s | 0.001031s | byte equality observed |
| pilfer.test | 10 | 0.000895s | 0.000892s | 0.000887s | byte equality observed |
| pointer.test | 10 | 0.001119s | 0.001104s | 0.001079s | byte equality observed |
| result_for.test | 10 | 0.000939s | 0.000923s | 0.000909s | byte equality observed |
| serialize.test | 10 | 0.000970s | 0.000981s | 0.000938s | byte equality observed |
| serializer.test | 10 | 0.001507s | 0.001456s | 0.001448s | byte equality observed |
| snippets.test | 10 | 0.001136s | 0.001077s | 0.001063s | byte equality observed |
| static_resource.test | 10 | 0.001018s | 0.000992s | 0.000968s | byte equality observed |
| storage_ptr.test | 10 | 0.000963s | 0.000966s | 0.000937s | byte equality observed |
| stream_parser.test | 1 | 0.042742s | 0.045803s | 0.037433s | native test oracle; output varies |
| string.test | 10 | 0.001552s | 0.001397s | 0.001406s | byte equality observed |
| string_view.test | 10 | 0.000905s | 0.000919s | 0.000882s | byte equality observed |
| utf8.test | 10 | 0.000921s | 0.000917s | 0.000901s | byte equality observed |
| value.test | 10 | 0.001784s | 0.001635s | 0.001981s | native test oracle; output varies |
| value_from.test | 10 | 0.001121s | 0.001072s | 0.001046s | byte equality observed |
| value_ref.test | 10 | 0.000958s | 0.000966s | 0.000942s | byte equality observed |
| value_stack.test | 10 | 0.000951s | 0.000944s | 0.000942s | byte equality observed |
| value_to.test | 10 | 0.001617s | 0.001603s | 0.001589s | native test oracle; output varies |
| visit.test | 10 | 0.000940s | 0.000942s | 0.000955s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43624536445).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
