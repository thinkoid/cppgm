# libs/json/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| array.test | RUN | 1.205609 | 6.433899 | 6.767693 | 0.003310 | 0.002998 | 0.003769 |
| basic_parser.test | RUN | 6.596234 | 142.030068 | 100.048606 | 0.843597 | 0.275412 | 1.115045 |
| conversion.test | RUN | 0.888414 | 2.463491 | 3.603547 | 0.001776 | 0.001930 | 0.001852 |
| doc_background.test | RUN | 0.862668 | 2.487199 | 3.444981 | 0.002008 | 0.001936 | 0.002180 |
| doc_forward_conversion.test | RUN | 0.887394 | 2.891206 | 3.859509 | 0.001796 | 0.002064 | 0.002185 |
| doc_parsing.test | RUN | 0.858151 | 2.589099 | 3.506154 | 0.002060 | 0.001941 | 0.002246 |
| doc_quick_look.test | RUN | 1.162561 | 3.211632 | 4.920933 | 0.001928 | 0.001935 | 0.002182 |
| doc_serializing.test | RUN | 0.798889 | 2.370081 | 3.390911 | 0.002010 | 0.001888 | 0.002123 |
| doc_storage_ptr.test | RUN | 0.817863 | 2.507697 | 3.411660 | 0.002157 | 0.002062 | 0.001756 |
| doc_uses_allocator.test | RUN | 0.794006 | 2.262629 | 3.306563 | 0.002083 | 0.002306 | 0.002182 |
| doc_using_numbers.test | RUN | 0.887835 | 2.503240 | 3.732432 | 0.002036 | 0.002172 | 0.002042 |
| double.test | RUN | 0.962492 | 4.135928 | 4.392718 | 1.992403 | 1.755444 | 1.902144 |
| error.test | RUN | 0.668035 | 2.204739 | 2.814140 | 0.002041 | 0.002122 | 0.002090 |
| fwd.test | RUN | 0.825631 | 2.449774 | 3.604442 | 0.001803 | 0.002149 | 0.002092 |
| json.test | RUN | 0.802638 | 2.843092 | 3.879107 | 0.001815 | 0.002277 | 0.002118 |
| kind.test | RUN | 0.593376 | 2.120860 | 2.619445 | 0.002096 | 0.002153 | 0.002116 |
| memory_resource.test | RUN | 0.876479 | 2.855561 | 3.686916 | 0.002104 | 0.001961 | 0.002210 |
| monotonic_resource.test | RUN | 0.815145 | 2.721753 | 3.266396 | 0.002998 | 0.003003 | 0.003158 |
| natvis.test | RUN | 0.837514 | 2.545345 | 3.223380 | 0.002221 | 0.002185 | 0.002045 |
| null_resource.test | RUN | 0.690808 | 2.255027 | 2.834818 | 0.002150 | 0.002423 | 0.002230 |
| object.test | RUN | 1.403678 | 7.590528 | 7.224119 | 0.009041 | 0.007486 | 0.008213 |
| parse.test | RUN | 0.914284 | 3.939649 | 4.106238 | 0.002828 | 0.003051 | 0.003094 |
| parser.test | RUN | 0.878112 | 3.324067 | 3.758749 | 0.002364 | 0.002498 | 0.002581 |
| pilfer.test | RUN | 0.449939 | 1.505552 | 1.864375 | 0.002037 | 0.002164 | 0.001745 |
| pointer.test | RUN | 0.996750 | 4.506874 | 4.662352 | 0.002399 | 0.002452 | 0.002190 |
| result_for.test | RUN | 0.843799 | 2.656756 | 3.359691 | 0.001862 | 0.002269 | 0.002294 |
| serialize.test | RUN | 0.861757 | 2.785299 | 3.316207 | 0.002143 | 0.002275 | 0.002204 |
| serializer.test | RUN | 1.325910 | 8.024933 | 7.756814 | 0.003348 | 0.003530 | 0.002970 |
| snippets.test | RUN | 2.069284 | 10.827274 | 11.162664 | 0.002436 | 0.002611 | 0.002662 |
| static_resource.test | RUN | 0.821725 | 2.372306 | 3.336802 | 0.002198 | 0.002035 | 0.002244 |
| storage_ptr.test | RUN | 0.840135 | 2.532481 | 3.125064 | 0.001991 | 0.002296 | 0.002212 |
| stream_parser.test | RUN | 1.023035 | 4.457315 | 4.300269 | 0.124280 | 0.141504 | 0.109784 |
| string.test | RUN | 1.801063 | 11.694252 | 11.463412 | 0.003315 | 0.002735 | 0.003088 |
| string_view.test | RUN | 0.510298 | 1.443189 | 2.072496 | 0.001992 | 0.001934 | 0.001984 |
| value.test | RUN | 1.793006 | 12.800724 | 9.111620 | 0.004621 | 0.004530 | 0.004511 |
| value_from.test | RUN | 1.632539 | 6.920889 | 8.443957 | 0.002280 | 0.002270 | 0.002480 |
| value_stack.test | RUN | 0.787314 | 2.328529 | 3.099647 | 0.002015 | 0.001952 | 0.002210 |
| value_to.test | RUN | 3.754006 | 23.082058 | 22.052701 | 0.003793 | 0.004156 | 0.003559 |
| value_ref.test | RUN | 0.904945 | 3.215303 | 4.143917 | 0.002092 | 0.001992 | 0.002223 |
| utf8.test | RUN | 0.697519 | 2.166525 | 2.859105 | 0.002061 | 0.002011 | 0.002074 |
| visit.test | RUN | 0.928887 | 3.374995 | 3.756020 | 0.001767 | 0.002053 | 0.001836 |
| d2s_intrinsics_test.test | RUN | 0.662486 | 1.937295 | 2.538858 | 0.001924 | 0.001997 | 0.001882 |
| d2s_table_test.test | RUN | 0.687589 | 2.290160 | 2.815199 | 0.001961 | 0.001954 | 0.002181 |
| d2s_test.test | RUN | 0.731511 | 2.592854 | 2.962354 | 0.002190 | 0.002104 | 0.002321 |
| parse_into.test | RUN | 21.799739 | 183.118251 | 119.680274 | 0.003360 | 0.003204 | 0.003024 |
| limits.test | RUN | 2.814308 | 15.681367 | 14.537183 | 0.002580 | 0.002200 | 0.002590 |
| header_only.test | RUN | 1.900532 | 12.657620 | 9.272780 | 0.001979 | 0.002184 | 0.001880 |
| no_exceptions.test | RUN | 2.631998 | 13.945456 | 13.798648 | 0.002119 | 0.002026 | 0.002166 |
| intrusive_macros.test | RUN | 2.206732 | 14.286410 | 11.639937 | 0.001810 | 0.002046 | 0.002249 |
| _gdb-printers.test | RUN | 0.376931 | 0.988015 | 1.587018 | 0.234030 | 0.271006 | 0.263654 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.877× | 0.871×, 0.884× | 1.013× |
| clang | 1.092× | 1.091×, 1.092× | 0.999× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1360 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/thinkoid/cppgm/actions/runs/44661842949).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| array.test | 7 | 0.002136s | 0.001802s | 0.002043s | native test oracle; output varies |
| basic_parser.test | 1 | 0.487270s | 0.306910s | 0.648528s | native test oracle; output varies |
| conversion.test | 10 | 0.001168s | 0.001150s | 0.001195s | byte equality observed |
| d2s_intrinsics_test.test | 10 | 0.001181s | 0.001149s | 0.001167s | byte equality observed |
| d2s_table_test.test | 10 | 0.001188s | 0.001174s | 0.001197s | byte equality observed |
| d2s_test.test | 10 | 0.001253s | 0.001236s | 0.001239s | byte equality observed |
| doc_background.test | 10 | 0.001211s | 0.001155s | 0.001165s | byte equality observed |
| doc_forward_conversion.test | 10 | 0.001206s | 0.001227s | 0.001214s | byte equality observed |
| doc_parsing.test | 10 | 0.001250s | 0.001242s | 0.001228s | byte equality observed |
| doc_quick_look.test | 10 | 0.001218s | 0.001196s | 0.001218s | byte equality observed |
| doc_serializing.test | 10 | 0.001217s | 0.001156s | 0.001178s | byte equality observed |
| doc_storage_ptr.test | 10 | 0.001215s | 0.001175s | 0.001217s | byte equality observed |
| doc_uses_allocator.test | 10 | 0.001203s | 0.001141s | 0.001177s | byte equality observed |
| doc_using_numbers.test | 10 | 0.001213s | 0.001146s | 0.001219s | byte equality observed |
| double.test | 1 | 1.175218s | 1.163334s | 1.191133s | native test oracle; output varies |
| error.test | 10 | 0.001275s | 0.001249s | 0.001284s | byte equality observed |
| fwd.test | 10 | 0.001184s | 0.001182s | 0.001210s | byte equality observed |
| header_only.test | 10 | 0.001170s | 0.001169s | 0.001159s | byte equality observed |
| intrusive_macros.test | 10 | 0.001227s | 0.001200s | 0.001219s | byte equality observed |
| json.test | 10 | 0.001208s | 0.001209s | 0.001207s | byte equality observed |
| kind.test | 10 | 0.001239s | 0.001226s | 0.001210s | byte equality observed |
| limits.test | 10 | 0.001433s | 0.001393s | 0.001444s | byte equality observed |
| memory_resource.test | 10 | 0.001216s | 0.001225s | 0.001208s | byte equality observed |
| monotonic_resource.test | 10 | 0.001749s | 0.001586s | 0.001710s | byte equality observed |
| natvis.test | 10 | 0.001221s | 0.001231s | 0.001244s | byte equality observed |
| no_exceptions.test | 10 | 0.001221s | 0.001224s | 0.001218s | byte equality observed |
| null_resource.test | 10 | 0.001246s | 0.001213s | 0.001244s | byte equality observed |
| object.test | 4 | 0.004983s | 0.004078s | 0.004881s | native test oracle; output varies |
| parse.test | 10 | 0.001683s | 0.001676s | 0.001714s | byte equality observed |
| parse_into.test | 6 | 0.002723s | 0.002583s | 0.002606s | native test oracle; output varies |
| parser.test | 10 | 0.001386s | 0.001341s | 0.001355s | byte equality observed |
| pilfer.test | 10 | 0.001174s | 0.001156s | 0.001187s | byte equality observed |
| pointer.test | 10 | 0.001424s | 0.001392s | 0.001411s | byte equality observed |
| result_for.test | 10 | 0.001175s | 0.001165s | 0.001204s | byte equality observed |
| serialize.test | 10 | 0.001248s | 0.001243s | 0.001244s | byte equality observed |
| serializer.test | 9 | 0.001982s | 0.001980s | 0.002006s | native test oracle; output varies |
| snippets.test | 10 | 0.001401s | 0.001375s | 0.001423s | byte equality observed |
| static_resource.test | 10 | 0.001264s | 0.001260s | 0.001279s | byte equality observed |
| storage_ptr.test | 10 | 0.001227s | 0.001245s | 0.001268s | byte equality observed |
| stream_parser.test | 1 | 0.079856s | 0.078091s | 0.056619s | native test oracle; output varies |
| string.test | 9 | 0.002035s | 0.001743s | 0.002061s | native test oracle; output varies |
| string_view.test | 10 | 0.001148s | 0.001171s | 0.001190s | byte equality observed |
| utf8.test | 10 | 0.001174s | 0.001175s | 0.001205s | byte equality observed |
| value.test | 5 | 0.002627s | 0.002370s | 0.003056s | native test oracle; output varies |
| value_from.test | 10 | 0.001381s | 0.001357s | 0.001459s | byte equality observed |
| value_ref.test | 10 | 0.001258s | 0.001259s | 0.001290s | byte equality observed |
| value_stack.test | 10 | 0.001235s | 0.001214s | 0.001232s | byte equality observed |
| value_to.test | 8 | 0.002181s | 0.002138s | 0.002238s | native test oracle; output varies |
| visit.test | 10 | 0.001232s | 0.001204s | 0.001230s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/thinkoid/cppgm/actions/runs/44661842949).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
