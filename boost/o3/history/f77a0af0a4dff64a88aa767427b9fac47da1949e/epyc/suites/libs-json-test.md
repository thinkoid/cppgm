# libs/json/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| array.test | RUN | 0.885060 | 4.922919 | 4.646457 | 0.002820 | 0.002860 | 0.002953 |
| basic_parser.test | RUN | 5.465245 | 140.530442 | 77.783712 | 0.537057 | 0.198686 | 0.430649 |
| conversion.test | RUN | 0.657960 | 1.836295 | 2.384172 | 0.001583 | 0.001950 | 0.001870 |
| doc_background.test | RUN | 0.677953 | 1.917848 | 2.354943 | 0.001942 | 0.001932 | 0.001942 |
| doc_forward_conversion.test | RUN | 0.691060 | 2.230472 | 2.605326 | 0.001808 | 0.001867 | 0.001798 |
| doc_parsing.test | RUN | 0.681497 | 2.088303 | 2.311406 | 0.001966 | 0.001856 | 0.002040 |
| doc_quick_look.test | RUN | 0.900421 | 2.465441 | 3.322336 | 0.001932 | 0.001986 | 0.001875 |
| doc_serializing.test | RUN | 0.636029 | 1.782882 | 2.253600 | 0.001645 | 0.001660 | 0.001918 |
| doc_storage_ptr.test | RUN | 0.636630 | 1.753934 | 2.246386 | 0.001780 | 0.001953 | 0.002036 |
| doc_uses_allocator.test | RUN | 0.648096 | 1.749800 | 2.219364 | 0.001971 | 0.001850 | 0.001771 |
| doc_using_numbers.test | RUN | 0.694688 | 1.836111 | 2.497544 | 0.001680 | 0.001777 | 0.001857 |
| double.test | RUN | 0.730948 | 3.262119 | 2.857598 | 1.442783 | 1.279492 | 1.299311 |
| error.test | RUN | 0.523995 | 1.741070 | 1.941866 | 0.001997 | 0.001829 | 0.001938 |
| fwd.test | RUN | 0.625621 | 1.816427 | 2.454951 | 0.001834 | 0.001757 | 0.001972 |
| json.test | RUN | 0.740279 | 2.068187 | 2.520372 | 0.001820 | 0.001690 | 0.001901 |
| kind.test | RUN | 0.486221 | 1.570641 | 1.874158 | 0.001714 | 0.002057 | 0.002072 |
| memory_resource.test | RUN | 0.669496 | 2.135338 | 2.305008 | 0.001964 | 0.001918 | 0.001819 |
| monotonic_resource.test | RUN | 0.627275 | 2.061209 | 2.428331 | 0.002546 | 0.002546 | 0.002532 |
| natvis.test | RUN | 0.634342 | 1.942053 | 2.154245 | 0.001748 | 0.001979 | 0.001862 |
| null_resource.test | RUN | 0.516273 | 1.621479 | 1.760655 | 0.001702 | 0.002042 | 0.001679 |
| object.test | RUN | 1.052020 | 5.796762 | 5.774901 | 0.006933 | 0.005659 | 0.006858 |
| parse.test | RUN | 0.689129 | 2.961356 | 2.481535 | 0.002437 | 0.002581 | 0.002319 |
| parser.test | RUN | 0.651868 | 2.483750 | 2.229847 | 0.002139 | 0.002036 | 0.001866 |
| pilfer.test | RUN | 0.346645 | 1.106895 | 1.034532 | 0.001885 | 0.002000 | 0.001684 |
| pointer.test | RUN | 0.763286 | 3.391889 | 2.994339 | 0.002048 | 0.002335 | 0.002112 |
| result_for.test | RUN | 0.651563 | 2.044152 | 2.200817 | 0.001676 | 0.001896 | 0.001829 |
| serialize.test | RUN | 0.658225 | 2.128252 | 2.379901 | 0.001800 | 0.002232 | 0.001942 |
| serializer.test | RUN | 1.021764 | 5.984694 | 5.008423 | 0.003058 | 0.002743 | 0.002793 |
| snippets.test | RUN | 1.612075 | 8.619787 | 7.912131 | 0.002230 | 0.002202 | 0.002078 |
| static_resource.test | RUN | 0.640500 | 1.996655 | 2.185800 | 0.002034 | 0.002105 | 0.002038 |
| storage_ptr.test | RUN | 0.661097 | 1.984868 | 2.361019 | 0.002010 | 0.001795 | 0.001906 |
| stream_parser.test | RUN | 0.788254 | 3.713715 | 3.130066 | 0.085424 | 0.113661 | 0.093278 |
| string.test | RUN | 1.292349 | 8.473809 | 7.001900 | 0.002938 | 0.002548 | 0.002692 |
| string_view.test | RUN | 0.397620 | 1.228122 | 1.372758 | 0.002040 | 0.001836 | 0.001912 |
| value.test | RUN | 1.329214 | 9.936304 | 7.152683 | 0.003688 | 0.003422 | 0.003828 |
| value_from.test | RUN | 1.230479 | 5.676401 | 5.749310 | 0.002188 | 0.002176 | 0.002116 |
| value_stack.test | RUN | 0.642251 | 1.668685 | 2.027785 | 0.001726 | 0.001979 | 0.001742 |
| value_to.test | RUN | 2.931298 | 17.733288 | 14.506998 | 0.002954 | 0.002932 | 0.002887 |
| value_ref.test | RUN | 0.727722 | 2.655412 | 2.700033 | 0.002174 | 0.001989 | 0.001695 |
| utf8.test | RUN | 0.529271 | 1.702758 | 1.803079 | 0.001714 | 0.001684 | 0.001721 |
| visit.test | RUN | 0.707079 | 2.770130 | 2.549549 | 0.001978 | 0.002145 | 0.001902 |
| d2s_intrinsics_test.test | RUN | 0.523326 | 1.641505 | 1.697268 | 0.001789 | 0.001915 | 0.001768 |
| d2s_table_test.test | RUN | 0.541730 | 1.798019 | 1.749350 | 0.001892 | 0.001822 | 0.001860 |
| d2s_test.test | RUN | 0.581225 | 2.083805 | 2.088312 | 0.002059 | 0.001902 | 0.001837 |
| parse_into.test | RUN | 17.525313 | 160.174917 | 94.437696 | 0.003284 | 0.003138 | 0.002923 |
| limits.test | RUN | 2.109773 | 13.271141 | 9.917140 | 0.002198 | 0.002324 | 0.001980 |
| header_only.test | RUN | 1.369396 | 9.537148 | 6.833466 | 0.001808 | 0.001807 | 0.001854 |
| no_exceptions.test | RUN | 2.018350 | 11.401012 | 8.807362 | 0.001507 | 0.001933 | 0.001735 |
| intrusive_macros.test | RUN | 1.643401 | 10.959378 | 8.350495 | 0.001604 | 0.001833 | 0.001938 |
| _gdb-printers.test | RUN | 0.294724 | 0.801838 | 0.957586 | 0.193982 | 0.289298 | 0.204667 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.823× | 0.822×, 0.823× | 1.030× |
| clang | 1.012× | 1.006×, 1.017× | 0.994× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1362 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43628287753).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| array.test | 10 | 0.001683s | 0.001535s | 0.001638s | native test oracle; output varies |
| basic_parser.test | 1 | 0.354164s | 0.215008s | 0.445904s | native test oracle; output varies |
| conversion.test | 10 | 0.000980s | 0.000966s | 0.000992s | byte equality observed |
| d2s_intrinsics_test.test | 10 | 0.000992s | 0.000973s | 0.000977s | byte equality observed |
| d2s_table_test.test | 10 | 0.000998s | 0.000986s | 0.000991s | byte equality observed |
| d2s_test.test | 10 | 0.001045s | 0.001037s | 0.001041s | byte equality observed |
| doc_background.test | 10 | 0.001001s | 0.000972s | 0.000990s | byte equality observed |
| doc_forward_conversion.test | 10 | 0.001043s | 0.001014s | 0.001026s | byte equality observed |
| doc_parsing.test | 10 | 0.001059s | 0.001025s | 0.001035s | byte equality observed |
| doc_quick_look.test | 10 | 0.001029s | 0.001031s | 0.001021s | byte equality observed |
| doc_serializing.test | 10 | 0.001018s | 0.000975s | 0.000989s | byte equality observed |
| doc_storage_ptr.test | 10 | 0.001026s | 0.001002s | 0.001047s | byte equality observed |
| doc_uses_allocator.test | 10 | 0.001030s | 0.000977s | 0.000978s | byte equality observed |
| doc_using_numbers.test | 10 | 0.001032s | 0.000979s | 0.000982s | byte equality observed |
| double.test | 1 | 0.938300s | 0.821037s | 0.871761s | native test oracle; output varies |
| error.test | 10 | 0.001074s | 0.001057s | 0.001070s | byte equality observed |
| fwd.test | 10 | 0.000985s | 0.000978s | 0.000994s | byte equality observed |
| header_only.test | 10 | 0.000969s | 0.000967s | 0.000976s | byte equality observed |
| intrusive_macros.test | 10 | 0.001039s | 0.001021s | 0.001021s | byte equality observed |
| json.test | 10 | 0.001006s | 0.000992s | 0.001008s | byte equality observed |
| kind.test | 10 | 0.001026s | 0.001004s | 0.001019s | byte equality observed |
| limits.test | 10 | 0.001202s | 0.001154s | 0.001179s | byte equality observed |
| memory_resource.test | 10 | 0.001019s | 0.001003s | 0.001040s | byte equality observed |
| monotonic_resource.test | 10 | 0.001463s | 0.001358s | 0.001398s | byte equality observed |
| natvis.test | 10 | 0.001037s | 0.001028s | 0.001018s | byte equality observed |
| no_exceptions.test | 10 | 0.001016s | 0.000998s | 0.001030s | byte equality observed |
| null_resource.test | 10 | 0.001048s | 0.001028s | 0.001046s | byte equality observed |
| object.test | 5 | 0.003914s | 0.003212s | 0.003882s | native test oracle; output varies |
| parse.test | 10 | 0.001461s | 0.001447s | 0.001460s | byte equality observed |
| parse_into.test | 7 | 0.002379s | 0.002318s | 0.002176s | native test oracle; output varies |
| parser.test | 10 | 0.001156s | 0.001135s | 0.001140s | byte equality observed |
| pilfer.test | 10 | 0.000980s | 0.000974s | 0.000983s | byte equality observed |
| pointer.test | 10 | 0.001184s | 0.001154s | 0.001195s | byte equality observed |
| result_for.test | 10 | 0.000993s | 0.000999s | 0.001003s | byte equality observed |
| serialize.test | 10 | 0.001047s | 0.001022s | 0.001045s | byte equality observed |
| serializer.test | 10 | 0.001683s | 0.001614s | 0.001654s | byte equality observed |
| snippets.test | 10 | 0.001213s | 0.001151s | 0.001172s | byte equality observed |
| static_resource.test | 10 | 0.001068s | 0.001043s | 0.001055s | byte equality observed |
| storage_ptr.test | 10 | 0.001061s | 0.001036s | 0.001045s | byte equality observed |
| stream_parser.test | 1 | 0.051525s | 0.065349s | 0.046352s | native test oracle; output varies |
| string.test | 9 | 0.001693s | 0.001484s | 0.001678s | byte equality observed |
| string_view.test | 10 | 0.000995s | 0.000973s | 0.001008s | byte equality observed |
| utf8.test | 10 | 0.001008s | 0.000969s | 0.000987s | byte equality observed |
| value.test | 8 | 0.002136s | 0.001908s | 0.002335s | native test oracle; output varies |
| value_from.test | 10 | 0.001222s | 0.001157s | 0.001145s | byte equality observed |
| value_ref.test | 10 | 0.001069s | 0.001058s | 0.001045s | byte equality observed |
| value_stack.test | 10 | 0.001037s | 0.001044s | 0.001044s | byte equality observed |
| value_to.test | 10 | 0.001829s | 0.001751s | 0.001765s | native test oracle; output varies |
| visit.test | 10 | 0.001035s | 0.001049s | 0.001060s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43628287753).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
