# libs/json/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| array.test | RUN | 0.898836 | 4.877851 | 4.488472 | 0.002881 | 0.002522 | 0.002928 |
| basic_parser.test | RUN | 5.504708 | 117.864342 | 73.440834 | 0.539487 | 0.193604 | 0.414789 |
| conversion.test | RUN | 0.704693 | 1.829140 | 2.342453 | 0.001461 | 0.001770 | 0.001958 |
| doc_background.test | RUN | 0.697916 | 1.822080 | 2.292322 | 0.002018 | 0.002024 | 0.001682 |
| doc_forward_conversion.test | RUN | 0.674858 | 2.056521 | 2.612500 | 0.001694 | 0.002036 | 0.001772 |
| doc_parsing.test | RUN | 0.677686 | 1.981687 | 2.311527 | 0.002012 | 0.001860 | 0.001926 |
| doc_quick_look.test | RUN | 0.875876 | 2.374692 | 3.258096 | 0.001691 | 0.001906 | 0.001907 |
| doc_serializing.test | RUN | 0.624727 | 1.749231 | 2.238639 | 0.001827 | 0.001661 | 0.001490 |
| doc_storage_ptr.test | RUN | 0.633891 | 1.886408 | 2.231311 | 0.001773 | 0.001722 | 0.001758 |
| doc_uses_allocator.test | RUN | 0.630074 | 1.709917 | 2.158657 | 0.002110 | 0.001848 | 0.001754 |
| doc_using_numbers.test | RUN | 0.699642 | 1.890274 | 2.441383 | 0.001842 | 0.001907 | 0.001866 |
| double.test | RUN | 0.734717 | 3.007458 | 2.861727 | 1.463614 | 1.118355 | 1.428694 |
| error.test | RUN | 0.531379 | 1.789734 | 1.705931 | 0.001890 | 0.002014 | 0.001647 |
| fwd.test | RUN | 0.625953 | 1.840131 | 2.028541 | 0.001856 | 0.001565 | 0.001803 |
| json.test | RUN | 0.726289 | 2.120718 | 2.537276 | 0.001808 | 0.002090 | 0.001588 |
| kind.test | RUN | 0.500317 | 1.626342 | 1.779251 | 0.001915 | 0.001995 | 0.001728 |
| memory_resource.test | RUN | 0.681440 | 2.048722 | 2.311214 | 0.001720 | 0.001990 | 0.001803 |
| monotonic_resource.test | RUN | 0.630986 | 1.969163 | 2.116021 | 0.002577 | 0.002454 | 0.002492 |
| natvis.test | RUN | 0.638636 | 1.944476 | 2.145788 | 0.001772 | 0.001714 | 0.001851 |
| null_resource.test | RUN | 0.532309 | 1.632060 | 1.855761 | 0.001860 | 0.002209 | 0.001908 |
| object.test | RUN | 1.038406 | 5.707321 | 5.400322 | 0.006621 | 0.005556 | 0.006792 |
| parse.test | RUN | 0.694813 | 2.951911 | 2.409656 | 0.002460 | 0.002682 | 0.002244 |
| parser.test | RUN | 0.683388 | 2.497296 | 2.312774 | 0.002166 | 0.002126 | 0.002140 |
| pilfer.test | RUN | 0.361351 | 1.138302 | 1.017679 | 0.001898 | 0.001887 | 0.001550 |
| pointer.test | RUN | 0.755605 | 3.334603 | 3.166250 | 0.002179 | 0.002245 | 0.002309 |
| result_for.test | RUN | 0.657355 | 2.043477 | 2.150453 | 0.001708 | 0.002032 | 0.001930 |
| serialize.test | RUN | 0.667919 | 2.090063 | 2.121453 | 0.002312 | 0.002030 | 0.001926 |
| serializer.test | RUN | 1.019833 | 5.949721 | 5.448272 | 0.002873 | 0.002952 | 0.002967 |
| snippets.test | RUN | 1.575542 | 8.223754 | 7.151440 | 0.002258 | 0.002286 | 0.001770 |
| static_resource.test | RUN | 0.641904 | 1.879764 | 2.038090 | 0.002032 | 0.002084 | 0.002000 |
| storage_ptr.test | RUN | 0.661952 | 1.982972 | 2.404678 | 0.001961 | 0.002004 | 0.001827 |
| stream_parser.test | RUN | 0.789833 | 3.443917 | 3.450548 | 0.086320 | 0.099695 | 0.091790 |
| string.test | RUN | 1.305029 | 8.920386 | 7.697130 | 0.002394 | 0.002738 | 0.002782 |
| string_view.test | RUN | 0.393044 | 1.014174 | 1.100195 | 0.001856 | 0.001764 | 0.001707 |
| value.test | RUN | 1.315316 | 9.632504 | 6.748921 | 0.003796 | 0.005475 | 0.004315 |
| value_from.test | RUN | 1.187921 | 5.194461 | 5.475703 | 0.002190 | 0.002020 | 0.002070 |
| value_stack.test | RUN | 0.649680 | 1.704002 | 2.037022 | 0.001870 | 0.001914 | 0.002038 |
| value_to.test | RUN | 3.013508 | 17.201818 | 14.917023 | 0.003358 | 0.003426 | 0.002846 |
| value_ref.test | RUN | 0.702724 | 2.380416 | 2.748419 | 0.001884 | 0.001809 | 0.001734 |
| utf8.test | RUN | 0.536215 | 1.574079 | 1.812219 | 0.001848 | 0.001678 | 0.001902 |
| visit.test | RUN | 0.722124 | 2.689156 | 2.505050 | 0.001810 | 0.001866 | 0.001949 |
| d2s_intrinsics_test.test | RUN | 0.531576 | 1.531465 | 1.768862 | 0.001844 | 0.001794 | 0.001800 |
| d2s_table_test.test | RUN | 0.533282 | 1.686453 | 1.845662 | 0.001862 | 0.001784 | 0.001864 |
| d2s_test.test | RUN | 0.564733 | 1.989841 | 1.862814 | 0.002197 | 0.002012 | 0.001890 |
| parse_into.test | RUN | 17.415201 | 147.788900 | 91.502827 | 0.003234 | 0.003024 | 0.002913 |
| limits.test | RUN | 2.096884 | 12.931486 | 9.755320 | 0.002187 | 0.002054 | 0.002060 |
| header_only.test | RUN | 1.390643 | 9.347628 | 6.154997 | 0.001618 | 0.001719 | 0.001806 |
| no_exceptions.test | RUN | 1.962402 | 10.969562 | 8.702140 | 0.001871 | 0.002084 | 0.001803 |
| intrusive_macros.test | RUN | 1.612895 | 10.847825 | 7.972872 | 0.001950 | 0.001959 | 0.001864 |
| _gdb-printers.test | RUN | 0.291124 | 0.804304 | 0.994258 | 0.184878 | 0.270203 | 0.219129 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.825× | 0.813×, 0.837× | 0.993× |
| clang | 1.011× | 1.021×, 1.001× | 0.986× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1363 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43638391827).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| array.test | 10 | 0.001692s | 0.001579s | 0.001621s | byte equality observed |
| basic_parser.test | 1 | 0.358265s | 0.208927s | 0.451637s | native test oracle; output varies |
| conversion.test | 10 | 0.000985s | 0.001010s | 0.000974s | byte equality observed |
| d2s_intrinsics_test.test | 10 | 0.000992s | 0.001004s | 0.001012s | byte equality observed |
| d2s_table_test.test | 10 | 0.001009s | 0.001018s | 0.001013s | byte equality observed |
| d2s_test.test | 10 | 0.001058s | 0.001069s | 0.001048s | byte equality observed |
| doc_background.test | 10 | 0.001011s | 0.001015s | 0.000984s | byte equality observed |
| doc_forward_conversion.test | 10 | 0.001033s | 0.001068s | 0.001007s | byte equality observed |
| doc_parsing.test | 10 | 0.001058s | 0.001051s | 0.001030s | byte equality observed |
| doc_quick_look.test | 10 | 0.001030s | 0.001043s | 0.000991s | byte equality observed |
| doc_serializing.test | 10 | 0.001009s | 0.001028s | 0.000967s | byte equality observed |
| doc_storage_ptr.test | 10 | 0.001051s | 0.001042s | 0.000997s | byte equality observed |
| doc_uses_allocator.test | 10 | 0.001032s | 0.001012s | 0.000962s | byte equality observed |
| doc_using_numbers.test | 10 | 0.001034s | 0.001022s | 0.000954s | byte equality observed |
| double.test | 1 | 0.937498s | 0.824515s | 0.880571s | native test oracle; output varies |
| error.test | 10 | 0.001137s | 0.001081s | 0.001198s | byte equality observed |
| fwd.test | 10 | 0.001005s | 0.000988s | 0.000996s | byte equality observed |
| header_only.test | 10 | 0.000981s | 0.000969s | 0.000980s | byte equality observed |
| intrusive_macros.test | 10 | 0.001031s | 0.001034s | 0.001032s | byte equality observed |
| json.test | 10 | 0.001019s | 0.001044s | 0.001005s | byte equality observed |
| kind.test | 10 | 0.001040s | 0.001019s | 0.001030s | byte equality observed |
| limits.test | 10 | 0.001238s | 0.001185s | 0.001193s | byte equality observed |
| memory_resource.test | 10 | 0.001061s | 0.001044s | 0.001015s | byte equality observed |
| monotonic_resource.test | 10 | 0.001497s | 0.001382s | 0.001407s | byte equality observed |
| natvis.test | 10 | 0.001076s | 0.001039s | 0.001054s | byte equality observed |
| no_exceptions.test | 10 | 0.001042s | 0.001054s | 0.001020s | byte equality observed |
| null_resource.test | 10 | 0.001068s | 0.001094s | 0.001046s | byte equality observed |
| object.test | 5 | 0.003978s | 0.003317s | 0.003794s | native test oracle; output varies |
| parse.test | 10 | 0.001508s | 0.001460s | 0.001417s | byte equality observed |
| parse_into.test | 7 | 0.002476s | 0.002403s | 0.002169s | native test oracle; output varies |
| parser.test | 10 | 0.001180s | 0.001184s | 0.001138s | byte equality observed |
| pilfer.test | 10 | 0.001002s | 0.001013s | 0.000969s | byte equality observed |
| pointer.test | 10 | 0.001218s | 0.001214s | 0.001176s | byte equality observed |
| result_for.test | 10 | 0.001019s | 0.001036s | 0.000981s | byte equality observed |
| serialize.test | 10 | 0.001057s | 0.001079s | 0.001027s | byte equality observed |
| serializer.test | 9 | 0.001736s | 0.001700s | 0.001645s | byte equality observed |
| snippets.test | 10 | 0.001246s | 0.001240s | 0.001178s | byte equality observed |
| static_resource.test | 10 | 0.001111s | 0.001107s | 0.001054s | byte equality observed |
| storage_ptr.test | 10 | 0.001074s | 0.001090s | 0.001031s | byte equality observed |
| stream_parser.test | 1 | 0.051553s | 0.065256s | 0.046168s | native test oracle; output varies |
| string.test | 10 | 0.001771s | 0.001615s | 0.001694s | byte equality observed |
| string_view.test | 10 | 0.001020s | 0.001050s | 0.001016s | byte equality observed |
| utf8.test | 10 | 0.001017s | 0.001045s | 0.000998s | byte equality observed |
| value.test | 7 | 0.002159s | 0.001983s | 0.002324s | native test oracle; output varies |
| value_from.test | 10 | 0.001226s | 0.001171s | 0.001144s | byte equality observed |
| value_ref.test | 10 | 0.001079s | 0.001106s | 0.001030s | byte equality observed |
| value_stack.test | 10 | 0.001069s | 0.001073s | 0.001029s | byte equality observed |
| value_to.test | 10 | 0.001867s | 0.001794s | 0.001826s | native test oracle; output varies |
| visit.test | 10 | 0.001057s | 0.001059s | 0.001024s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43638391827).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
