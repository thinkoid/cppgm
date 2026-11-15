# libs/json/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| array.test | RUN | 1.010113 | 5.604113 | 4.662903 | 0.002671 | 0.002504 | 0.002476 |
| basic_parser.test | RUN | 6.525411 | 120.749686 | 72.464136 | 0.585103 | 0.261643 | 0.838298 |
| conversion.test | RUN | 0.672559 | 2.038051 | 2.296157 | 0.001385 | 0.001582 | 0.001362 |
| doc_background.test | RUN | 0.681520 | 2.083103 | 2.270660 | 0.001385 | 0.001566 | 0.001181 |
| doc_forward_conversion.test | RUN | 0.725957 | 2.397414 | 2.559774 | 0.001680 | 0.001578 | 0.001442 |
| doc_parsing.test | RUN | 0.714563 | 2.232256 | 2.354294 | 0.001543 | 0.001621 | 0.001432 |
| doc_quick_look.test | RUN | 0.953000 | 2.715324 | 3.200288 | 0.001434 | 0.001291 | 0.001315 |
| doc_serializing.test | RUN | 0.657824 | 1.979074 | 2.172505 | 0.001420 | 0.001439 | 0.001427 |
| doc_storage_ptr.test | RUN | 0.654727 | 2.049009 | 2.200120 | 0.001558 | 0.001437 | 0.001447 |
| doc_uses_allocator.test | RUN | 0.667405 | 1.987412 | 2.178840 | 0.001653 | 0.001465 | 0.001378 |
| doc_using_numbers.test | RUN | 0.733499 | 2.069041 | 2.382299 | 0.001443 | 0.001698 | 0.001506 |
| double.test | RUN | 0.780540 | 3.498657 | 2.763518 | 1.771300 | 1.735849 | 1.781166 |
| error.test | RUN | 0.571647 | 1.987041 | 1.891983 | 0.001446 | 0.001556 | 0.001530 |
| fwd.test | RUN | 0.639710 | 1.953175 | 2.333897 | 0.001264 | 0.001552 | 0.001457 |
| json.test | RUN | 0.685895 | 2.237154 | 2.519657 | 0.001427 | 0.001538 | 0.001433 |
| kind.test | RUN | 0.524129 | 1.813500 | 1.747209 | 0.001508 | 0.001612 | 0.001412 |
| memory_resource.test | RUN | 0.733627 | 2.365414 | 2.451235 | 0.001426 | 0.001532 | 0.001578 |
| monotonic_resource.test | RUN | 0.651362 | 2.314201 | 2.226898 | 0.002210 | 0.002306 | 0.002211 |
| natvis.test | RUN | 0.673984 | 2.181342 | 2.210319 | 0.001484 | 0.001535 | 0.001406 |
| null_resource.test | RUN | 0.566682 | 1.852583 | 1.837886 | 0.001536 | 0.001628 | 0.001515 |
| object.test | RUN | 1.198299 | 6.567177 | 5.210576 | 0.007141 | 0.005931 | 0.006519 |
| parse.test | RUN | 0.746809 | 3.278211 | 2.702376 | 0.002216 | 0.002105 | 0.002115 |
| parser.test | RUN | 0.714217 | 2.797211 | 2.483480 | 0.001687 | 0.001716 | 0.001630 |
| pilfer.test | RUN | 0.381206 | 1.271554 | 1.218283 | 0.001553 | 0.001491 | 0.001460 |
| pointer.test | RUN | 0.838679 | 3.750136 | 3.192370 | 0.001862 | 0.001702 | 0.001771 |
| result_for.test | RUN | 0.697128 | 2.210172 | 2.318940 | 0.001625 | 0.001647 | 0.001432 |
| serialize.test | RUN | 0.688323 | 2.307415 | 2.253992 | 0.001575 | 0.001614 | 0.001427 |
| serializer.test | RUN | 1.173346 | 6.693610 | 5.468288 | 0.002595 | 0.002718 | 0.002605 |
| snippets.test | RUN | 1.827649 | 9.192432 | 7.465562 | 0.001807 | 0.001761 | 0.001604 |
| static_resource.test | RUN | 0.663004 | 2.085703 | 2.139289 | 0.001743 | 0.001850 | 0.001543 |
| storage_ptr.test | RUN | 0.692017 | 2.183128 | 2.312633 | 0.001595 | 0.001656 | 0.001629 |
| stream_parser.test | RUN | 0.859327 | 4.297947 | 3.384725 | 0.100492 | 0.112499 | 0.085142 |
| string.test | RUN | 1.649919 | 10.382615 | 8.215293 | 0.002668 | 0.002297 | 0.002535 |
| string_view.test | RUN | 0.411861 | 1.299333 | 1.244141 | 0.001410 | 0.001494 | 0.001478 |
| value.test | RUN | 1.623978 | 10.381686 | 6.835403 | 0.003522 | 0.002913 | 0.003788 |
| value_from.test | RUN | 1.415242 | 6.463816 | 5.758602 | 0.001796 | 0.001702 | 0.001641 |
| value_stack.test | RUN | 0.658342 | 2.001512 | 2.138675 | 0.001612 | 0.001646 | 0.001468 |
| value_to.test | RUN | 3.544237 | 20.607631 | 14.662819 | 0.003027 | 0.002870 | 0.002520 |
| value_ref.test | RUN | 0.781634 | 2.970228 | 2.650846 | 0.001590 | 0.001709 | 0.001604 |
| utf8.test | RUN | 0.571176 | 1.919747 | 1.824228 | 0.001413 | 0.001594 | 0.001293 |
| visit.test | RUN | 0.756157 | 3.052147 | 2.613949 | 0.001209 | 0.001531 | 0.001442 |
| d2s_intrinsics_test.test | RUN | 0.554424 | 1.805389 | 1.786443 | 0.001379 | 0.001514 | 0.001423 |
| d2s_table_test.test | RUN | 0.579703 | 1.992746 | 1.868431 | 0.001463 | 0.001595 | 0.001539 |
| d2s_test.test | RUN | 0.592731 | 2.374010 | 2.143684 | 0.001651 | 0.001545 | 0.001575 |
| parse_into.test | RUN | 21.670322 | 162.132941 | 98.660072 | 0.002698 | 0.002716 | 0.002433 |
| limits.test | RUN | 2.487859 | 15.161239 | 10.368952 | 0.001988 | 0.002020 | 0.001725 |
| header_only.test | RUN | 1.714154 | 11.110872 | 7.384825 | 0.001392 | 0.001606 | 0.001445 |
| no_exceptions.test | RUN | 2.330615 | 12.950879 | 9.478200 | 0.001603 | 0.001491 | 0.001343 |
| intrusive_macros.test | RUN | 1.979298 | 12.432827 | 8.327432 | 0.001443 | 0.001644 | 0.001424 |
| _gdb-printers.test | RUN | 0.295660 | 0.872205 | 1.027613 | 0.200095 | 0.306632 | 0.211452 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.921× | 0.926×, 0.917× | 1.006× |
| clang | 1.150× | 1.141×, 1.159× | 0.987× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1360 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43654890423).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| array.test | 10 | 0.001709s | 0.001542s | 0.001651s | native test oracle; output varies |
| basic_parser.test | 1 | 0.393927s | 0.276441s | 0.618590s | native test oracle; output varies |
| conversion.test | 10 | 0.000919s | 0.000936s | 0.000925s | byte equality observed |
| d2s_intrinsics_test.test | 10 | 0.000936s | 0.000938s | 0.000911s | byte equality observed |
| d2s_table_test.test | 10 | 0.000954s | 0.000965s | 0.000936s | byte equality observed |
| d2s_test.test | 10 | 0.000985s | 0.001005s | 0.000977s | byte equality observed |
| doc_background.test | 10 | 0.000951s | 0.000934s | 0.000934s | byte equality observed |
| doc_forward_conversion.test | 10 | 0.000980s | 0.000991s | 0.000951s | byte equality observed |
| doc_parsing.test | 10 | 0.000980s | 0.000985s | 0.000965s | byte equality observed |
| doc_quick_look.test | 10 | 0.000975s | 0.000976s | 0.000929s | byte equality observed |
| doc_serializing.test | 10 | 0.000958s | 0.000927s | 0.000928s | byte equality observed |
| doc_storage_ptr.test | 10 | 0.000965s | 0.000964s | 0.000948s | byte equality observed |
| doc_uses_allocator.test | 10 | 0.000959s | 0.000944s | 0.000935s | byte equality observed |
| doc_using_numbers.test | 5 | 0.000980s | 0.000940s | 0.000949s | byte equality observed |
| double.test | 1 | 1.092506s | 1.070915s | 1.111074s | native test oracle; output varies |
| error.test | 10 | 0.001025s | 0.000998s | 0.001071s | byte equality observed |
| fwd.test | 10 | 0.000919s | 0.000949s | 0.000948s | byte equality observed |
| header_only.test | 10 | 0.000930s | 0.000934s | 0.000902s | byte equality observed |
| intrusive_macros.test | 10 | 0.000971s | 0.000990s | 0.001009s | byte equality observed |
| json.test | 10 | 0.000961s | 0.000957s | 0.000972s | byte equality observed |
| kind.test | 10 | 0.000979s | 0.000980s | 0.000990s | byte equality observed |
| limits.test | 10 | 0.001185s | 0.001125s | 0.001165s | byte equality observed |
| memory_resource.test | 10 | 0.000978s | 0.000950s | 0.000973s | byte equality observed |
| monotonic_resource.test | 10 | 0.001462s | 0.001396s | 0.001442s | byte equality observed |
| natvis.test | 10 | 0.000997s | 0.000965s | 0.000989s | byte equality observed |
| no_exceptions.test | 10 | 0.000979s | 0.000948s | 0.000981s | byte equality observed |
| null_resource.test | 10 | 0.001009s | 0.001017s | 0.001012s | byte equality observed |
| object.test | 5 | 0.004209s | 0.003564s | 0.004247s | native test oracle; output varies |
| parse.test | 10 | 0.001389s | 0.001373s | 0.001409s | byte equality observed |
| parse_into.test | 7 | 0.002359s | 0.002227s | 0.002043s | native test oracle; output varies |
| parser.test | 10 | 0.001116s | 0.001093s | 0.001093s | byte equality observed |
| pilfer.test | 10 | 0.000942s | 0.000950s | 0.000967s | byte equality observed |
| pointer.test | 10 | 0.001140s | 0.001148s | 0.001159s | byte equality observed |
| result_for.test | 10 | 0.000953s | 0.000943s | 0.000968s | byte equality observed |
| serialize.test | 10 | 0.000992s | 0.001008s | 0.000999s | byte equality observed |
| serializer.test | 10 | 0.001713s | 0.001788s | 0.001724s | native test oracle; output varies |
| snippets.test | 10 | 0.001159s | 0.001148s | 0.001144s | byte equality observed |
| static_resource.test | 10 | 0.001032s | 0.001028s | 0.001043s | byte equality observed |
| storage_ptr.test | 10 | 0.001017s | 0.001007s | 0.000985s | byte equality observed |
| stream_parser.test | 1 | 0.055655s | 0.077503s | 0.055462s | native test oracle; output varies |
| string.test | 10 | 0.001700s | 0.001476s | 0.001659s | native test oracle; output varies |
| string_view.test | 10 | 0.000944s | 0.000978s | 0.000939s | byte equality observed |
| utf8.test | 10 | 0.000954s | 0.000956s | 0.000913s | byte equality observed |
| value.test | 7 | 0.002212s | 0.002107s | 0.002592s | native test oracle; output varies |
| value_from.test | 10 | 0.001141s | 0.001138s | 0.001086s | byte equality observed |
| value_ref.test | 10 | 0.001016s | 0.001026s | 0.000962s | byte equality observed |
| value_stack.test | 10 | 0.000999s | 0.000999s | 0.000957s | byte equality observed |
| value_to.test | 10 | 0.001859s | 0.001872s | 0.001848s | native test oracle; output varies |
| visit.test | 10 | 0.000984s | 0.001013s | 0.000984s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43654890423).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
