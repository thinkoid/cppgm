# libs/json/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| array.test | RUN | 0.860806 | 4.793636 | 4.444702 | 0.002862 | 0.003261 | 0.002782 |
| basic_parser.test | RUN | 5.291323 | 128.196679 | 69.884980 | 0.542728 | 0.198843 | 0.708288 |
| conversion.test | RUN | 0.672788 | 1.879669 | 2.246545 | 0.001569 | 0.002136 | 0.001740 |
| doc_background.test | RUN | 0.651534 | 1.877329 | 2.272517 | 0.001764 | 0.002010 | 0.001753 |
| doc_forward_conversion.test | RUN | 0.671198 | 2.151284 | 2.570487 | 0.001834 | 0.002005 | 0.001618 |
| doc_parsing.test | RUN | 0.673938 | 1.937247 | 2.406921 | 0.001886 | 0.001904 | 0.001877 |
| doc_quick_look.test | RUN | 0.865669 | 2.441968 | 3.176725 | 0.001707 | 0.001695 | 0.001784 |
| doc_serializing.test | RUN | 0.617703 | 1.795512 | 2.188312 | 0.001627 | 0.001593 | 0.001547 |
| doc_storage_ptr.test | RUN | 0.605543 | 1.881887 | 2.215100 | 0.001670 | 0.001878 | 0.001714 |
| doc_uses_allocator.test | RUN | 0.622595 | 1.839608 | 2.170373 | 0.001814 | 0.001896 | 0.001758 |
| doc_using_numbers.test | RUN | 0.681610 | 1.794954 | 2.407791 | 0.001642 | 0.001674 | 0.001871 |
| double.test | RUN | 0.711344 | 3.087861 | 2.788423 | 1.419304 | 1.333490 | 1.461139 |
| error.test | RUN | 0.514001 | 1.747296 | 1.665421 | 0.001809 | 0.001908 | 0.001792 |
| fwd.test | RUN | 0.618358 | 1.717675 | 2.073654 | 0.001724 | 0.001772 | 0.001739 |
| json.test | RUN | 0.665792 | 1.977744 | 2.402075 | 0.001848 | 0.001999 | 0.001850 |
| kind.test | RUN | 0.499684 | 1.675863 | 1.769813 | 0.001507 | 0.002026 | 0.001846 |
| memory_resource.test | RUN | 0.672588 | 2.114661 | 2.258295 | 0.001912 | 0.001939 | 0.001833 |
| monotonic_resource.test | RUN | 0.622624 | 1.941534 | 2.179194 | 0.002488 | 0.002500 | 0.002388 |
| natvis.test | RUN | 0.638795 | 1.928257 | 2.199868 | 0.001771 | 0.001877 | 0.001642 |
| null_resource.test | RUN | 0.528429 | 1.679007 | 1.694774 | 0.001720 | 0.002078 | 0.001946 |
| object.test | RUN | 1.016384 | 5.685000 | 5.362444 | 0.006481 | 0.005518 | 0.006758 |
| parse.test | RUN | 0.673581 | 2.927268 | 2.498631 | 0.002330 | 0.002563 | 0.002569 |
| parser.test | RUN | 0.654091 | 2.505984 | 2.198760 | 0.002070 | 0.002075 | 0.001887 |
| pilfer.test | RUN | 0.337778 | 1.171164 | 1.040717 | 0.001798 | 0.001828 | 0.001551 |
| pointer.test | RUN | 0.738029 | 3.420628 | 2.962986 | 0.002244 | 0.002274 | 0.002154 |
| result_for.test | RUN | 0.626384 | 2.012468 | 2.182073 | 0.001622 | 0.001981 | 0.001830 |
| serialize.test | RUN | 0.631089 | 2.119166 | 2.321218 | 0.001924 | 0.002048 | 0.001898 |
| serializer.test | RUN | 0.982383 | 5.961869 | 5.086563 | 0.002825 | 0.003154 | 0.002494 |
| snippets.test | RUN | 1.539139 | 7.995285 | 7.716688 | 0.002184 | 0.002400 | 0.002083 |
| static_resource.test | RUN | 0.607341 | 1.962826 | 2.189138 | 0.001924 | 0.002053 | 0.001906 |
| storage_ptr.test | RUN | 0.643287 | 2.033065 | 2.069413 | 0.001968 | 0.002056 | 0.001920 |
| stream_parser.test | RUN | 0.756931 | 3.629219 | 2.915341 | 0.086827 | 0.099739 | 0.081201 |
| string.test | RUN | 1.273217 | 9.185838 | 7.691143 | 0.002928 | 0.002590 | 0.002886 |
| string_view.test | RUN | 0.387822 | 1.195140 | 1.162942 | 0.001805 | 0.001932 | 0.001727 |
| value.test | RUN | 1.280514 | 9.264325 | 6.526177 | 0.003567 | 0.003602 | 0.004185 |
| value_from.test | RUN | 1.167071 | 5.987423 | 5.390545 | 0.001961 | 0.002053 | 0.002144 |
| value_stack.test | RUN | 0.614991 | 1.867334 | 2.081239 | 0.001694 | 0.002062 | 0.001646 |
| value_to.test | RUN | 2.886032 | 17.774487 | 14.958410 | 0.003285 | 0.003489 | 0.003043 |
| value_ref.test | RUN | 0.701150 | 2.675506 | 2.607149 | 0.001807 | 0.002006 | 0.001911 |
| utf8.test | RUN | 0.509275 | 1.698118 | 1.853618 | 0.001865 | 0.001973 | 0.001820 |
| visit.test | RUN | 0.687773 | 2.725021 | 2.509314 | 0.001769 | 0.001912 | 0.001744 |
| d2s_intrinsics_test.test | RUN | 0.515639 | 1.509842 | 1.699806 | 0.001843 | 0.002030 | 0.001752 |
| d2s_table_test.test | RUN | 0.518745 | 1.593687 | 1.692625 | 0.001805 | 0.001875 | 0.001742 |
| d2s_test.test | RUN | 0.550412 | 2.143741 | 2.020816 | 0.002000 | 0.002056 | 0.001996 |
| parse_into.test | RUN | 17.062545 | 153.238138 | 87.588292 | 0.003142 | 0.003039 | 0.002767 |
| limits.test | RUN | 2.035750 | 12.683509 | 9.282523 | 0.002229 | 0.002401 | 0.001973 |
| header_only.test | RUN | 1.311161 | 9.482354 | 7.102001 | 0.001739 | 0.001873 | 0.001714 |
| no_exceptions.test | RUN | 1.965173 | 10.941408 | 8.156297 | 0.001862 | 0.001986 | 0.001768 |
| intrusive_macros.test | RUN | 1.619962 | 9.992901 | 7.843643 | 0.001815 | 0.002032 | 0.001896 |
| _gdb-printers.test | RUN | 0.281401 | 0.806304 | 0.997010 | 0.184387 | 0.293046 | 0.205356 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.822× | 0.821×, 0.824× | 1.017× |
| clang | 1.007× | 1.008×, 1.005× | 0.987× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1361 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43632677224).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| array.test | 10 | 0.001681s | 0.001510s | 0.001653s | byte equality observed |
| basic_parser.test | 1 | 0.360990s | 0.215172s | 0.444016s | native test oracle; output varies |
| conversion.test | 10 | 0.000956s | 0.000950s | 0.000972s | byte equality observed |
| d2s_intrinsics_test.test | 10 | 0.000952s | 0.000952s | 0.000973s | byte equality observed |
| d2s_table_test.test | 10 | 0.000981s | 0.000971s | 0.001027s | byte equality observed |
| d2s_test.test | 10 | 0.001060s | 0.001023s | 0.001042s | byte equality observed |
| doc_background.test | 10 | 0.000997s | 0.000953s | 0.000978s | byte equality observed |
| doc_forward_conversion.test | 10 | 0.001018s | 0.000997s | 0.001024s | byte equality observed |
| doc_parsing.test | 10 | 0.001030s | 0.001007s | 0.001038s | byte equality observed |
| doc_quick_look.test | 10 | 0.000998s | 0.000983s | 0.001001s | byte equality observed |
| doc_serializing.test | 10 | 0.000999s | 0.000958s | 0.000979s | byte equality observed |
| doc_storage_ptr.test | 10 | 0.000998s | 0.000981s | 0.001017s | byte equality observed |
| doc_uses_allocator.test | 10 | 0.001000s | 0.000954s | 0.000982s | byte equality observed |
| doc_using_numbers.test | 10 | 0.000995s | 0.000959s | 0.000986s | byte equality observed |
| double.test | 1 | 0.939056s | 0.828265s | 0.866243s | native test oracle; output varies |
| error.test | 10 | 0.001067s | 0.001050s | 0.001075s | byte equality observed |
| fwd.test | 10 | 0.000977s | 0.000987s | 0.000985s | byte equality observed |
| header_only.test | 10 | 0.000974s | 0.000963s | 0.000968s | byte equality observed |
| intrusive_macros.test | 10 | 0.001039s | 0.001028s | 0.001023s | byte equality observed |
| json.test | 10 | 0.001002s | 0.000997s | 0.001012s | byte equality observed |
| kind.test | 10 | 0.001013s | 0.001029s | 0.001014s | byte equality observed |
| limits.test | 10 | 0.001194s | 0.001164s | 0.001180s | byte equality observed |
| memory_resource.test | 10 | 0.001022s | 0.001014s | 0.001024s | byte equality observed |
| monotonic_resource.test | 10 | 0.001443s | 0.001404s | 0.001389s | byte equality observed |
| natvis.test | 10 | 0.001040s | 0.001060s | 0.001048s | byte equality observed |
| no_exceptions.test | 10 | 0.001023s | 0.001025s | 0.001015s | byte equality observed |
| null_resource.test | 10 | 0.001044s | 0.001037s | 0.001047s | byte equality observed |
| object.test | 5 | 0.003908s | 0.003371s | 0.003773s | native test oracle; output varies |
| parse.test | 10 | 0.001461s | 0.001403s | 0.001433s | byte equality observed |
| parse_into.test | 7 | 0.002330s | 0.002187s | 0.002132s | native test oracle; output varies |
| parser.test | 10 | 0.001158s | 0.001118s | 0.001132s | byte equality observed |
| pilfer.test | 10 | 0.000987s | 0.000975s | 0.000974s | byte equality observed |
| pointer.test | 10 | 0.001206s | 0.001184s | 0.001172s | byte equality observed |
| result_for.test | 10 | 0.000992s | 0.000998s | 0.000992s | byte equality observed |
| serialize.test | 10 | 0.001037s | 0.001048s | 0.001030s | byte equality observed |
| serializer.test | 10 | 0.001691s | 0.001645s | 0.001633s | native test oracle; output varies |
| snippets.test | 10 | 0.001199s | 0.001168s | 0.001176s | byte equality observed |
| static_resource.test | 10 | 0.001073s | 0.001057s | 0.001059s | byte equality observed |
| storage_ptr.test | 10 | 0.001060s | 0.001040s | 0.001029s | byte equality observed |
| stream_parser.test | 1 | 0.051422s | 0.065395s | 0.046377s | native test oracle; output varies |
| string.test | 10 | 0.001665s | 0.001458s | 0.001647s | native test oracle; output varies |
| string_view.test | 10 | 0.000984s | 0.000996s | 0.000995s | byte equality observed |
| utf8.test | 10 | 0.000987s | 0.000998s | 0.000986s | byte equality observed |
| value.test | 8 | 0.002115s | 0.001906s | 0.002335s | native test oracle; output varies |
| value_from.test | 10 | 0.001203s | 0.001162s | 0.001140s | byte equality observed |
| value_ref.test | 10 | 0.001051s | 0.001054s | 0.001045s | byte equality observed |
| value_stack.test | 10 | 0.001032s | 0.001032s | 0.001023s | byte equality observed |
| value_to.test | 10 | 0.001820s | 0.001727s | 0.001751s | native test oracle; output varies |
| visit.test | 10 | 0.001035s | 0.000992s | 0.001010s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43632677224).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
