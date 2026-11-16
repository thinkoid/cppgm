# libs/asio/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| any_completion_executor.test | RUN | 0.518366 | 3.429965 | 2.963233 | 0.001718 | 0.001668 | 0.001954 |
| any_completion_executor_select.test | RUN | 0.532043 | 3.459738 | 3.132324 | 0.001802 | 0.002076 | 0.001544 |
| any_completion_handler.test | RUN | 0.597243 | 3.115577 | 2.725027 | 0.001378 | 0.001628 | 0.001584 |
| any_completion_handler_select.test | RUN | 0.592712 | 3.180817 | 2.898080 | 0.001324 | 0.001519 | 0.001609 |
| any_io_executor.test | RUN | 0.547650 | 3.724302 | 3.221507 | 0.001194 | 0.001877 | 0.002117 |
| any_io_executor_select.test | RUN | 0.566010 | 3.720302 | 3.349844 | 0.001453 | 0.001856 | 0.002229 |
| append.test | RUN | 0.499088 | 2.951904 | 2.430511 | 0.001182 | 0.001510 | 0.001365 |
| append_select.test | RUN | 0.518525 | 3.032150 | 2.439903 | 0.001312 | 0.001490 | 0.001562 |
| as_tuple.test | RUN | 0.662442 | 3.559151 | 3.429711 | 0.001514 | 0.001443 | 0.001385 |
| as_tuple_select.test | RUN | 0.672416 | 3.504543 | 3.401898 | 0.001301 | 0.001451 | 0.001350 |
| associated_allocator.test | LINK | 0.129029 | 0.289504 | 0.355274 | — | — | — |
| associated_allocator_select.test | LINK | 0.125298 | 0.288623 | 0.356242 | — | — | — |
| associated_cancellation_slot.test | LINK | 0.134760 | 0.310311 | 0.394132 | — | — | — |
| associated_cancellation_slot_select.test | LINK | 0.138382 | 0.307533 | 0.389767 | — | — | — |
| associated_executor.test | LINK | 0.205485 | 0.540936 | 0.674494 | — | — | — |
| associated_executor_select.test | LINK | 0.204254 | 0.541755 | 0.663556 | — | — | — |
| associated_immediate_executor.test | LINK | 0.185205 | 0.496820 | 0.586653 | — | — | — |
| associated_immediate_executor_select.test | LINK | 0.186284 | 0.499893 | 0.587976 | — | — | — |
| associator.test | LINK | 0.105032 | 0.240307 | 0.294175 | — | — | — |
| associator_select.test | LINK | 0.101447 | 0.232593 | 0.294864 | — | — | — |
| awaitable.test | LINK | 0.099454 | 0.230509 | 0.295959 | — | — | — |
| awaitable_select.test | LINK | 0.101314 | 0.241873 | 0.294870 | — | — | — |
| basic_datagram_socket.test | LINK | 0.321127 | 0.757004 | 1.113849 | — | — | — |
| basic_datagram_socket_select.test | LINK | 0.323907 | 0.783211 | 1.140123 | — | — | — |
| basic_deadline_timer.test | LINK | 0.390726 | 0.890070 | 1.272060 | — | — | — |
| basic_deadline_timer_select.test | LINK | 0.390312 | 0.914855 | 1.293563 | — | — | — |
| basic_file.test | LINK | 0.107749 | 0.238781 | 0.287462 | — | — | — |
| basic_file_select.test | LINK | 0.102094 | 0.233882 | 0.286328 | — | — | — |
| basic_random_access_file.test | LINK | 0.104336 | 0.237037 | 0.300206 | — | — | — |
| basic_random_access_file_select.test | LINK | 0.104823 | 0.238843 | 0.292770 | — | — | — |
| basic_raw_socket.test | LINK | 0.331157 | 0.764110 | 1.115302 | — | — | — |
| basic_raw_socket_select.test | LINK | 0.332035 | 0.785772 | 1.146141 | — | — | — |
| basic_readable_pipe.test | LINK | 0.313929 | 0.730580 | 0.968421 | — | — | — |
| basic_readable_pipe_select.test | LINK | 0.324774 | 0.778326 | 1.169164 | — | — | — |
| basic_seq_packet_socket.test | LINK | 0.329913 | 0.761796 | 1.112125 | — | — | — |
| basic_seq_packet_socket_select.test | LINK | 0.336819 | 0.781694 | 1.144977 | — | — | — |
| basic_signal_set.test | LINK | 0.303283 | 0.708902 | 0.872403 | — | — | — |
| basic_signal_set_select.test | LINK | 0.312864 | 0.748052 | 1.086596 | — | — | — |
| basic_socket_acceptor.test | LINK | 0.331783 | 0.764487 | 1.119363 | — | — | — |
| basic_socket_acceptor_select.test | LINK | 0.337767 | 0.787467 | 1.149396 | — | — | — |
| basic_stream_file.test | LINK | 0.098642 | 0.236952 | 0.299440 | — | — | — |
| basic_stream_file_select.test | LINK | 0.100234 | 0.234711 | 0.299659 | — | — | — |
| basic_stream_socket.test | LINK | 0.326581 | 0.768842 | 1.118063 | — | — | — |
| basic_stream_socket_select.test | LINK | 0.330649 | 0.779196 | 1.134937 | — | — | — |
| basic_streambuf.test | LINK | 0.151815 | 0.343886 | 0.432977 | — | — | — |
| basic_streambuf_select.test | LINK | 0.152674 | 0.350429 | 0.430785 | — | — | — |
| basic_waitable_timer.test | LINK | 0.308313 | 0.718591 | 1.030943 | — | — | — |
| basic_waitable_timer_select.test | LINK | 0.313387 | 0.729518 | 1.060613 | — | — | — |
| basic_writable_pipe.test | LINK | 0.312392 | 0.724761 | 0.976083 | — | — | — |
| basic_writable_pipe_select.test | LINK | 0.326556 | 0.769828 | 1.171306 | — | — | — |
| bind_allocator.test | RUN | 0.547490 | 2.979872 | 2.627535 | 0.001771 | 0.001957 | 0.001706 |
| bind_allocator_select.test | RUN | 0.559776 | 3.018473 | 2.632385 | 0.001642 | 0.001858 | 0.001198 |
| bind_cancellation_slot.test | RUN | 0.563334 | 3.024735 | 2.662747 | 0.000944 | 0.000986 | 0.001016 |
| bind_cancellation_slot_select.test | RUN | 0.576472 | 2.995427 | 2.595394 | 0.000923 | 0.001049 | 0.000984 |
| bind_executor.test | RUN | 0.379480 | 2.066837 | 1.689812 | 0.001551 | 0.001714 | 0.001805 |
| bind_executor_select.test | RUN | 0.391600 | 2.100447 | 1.680887 | 0.001386 | 0.001525 | 0.001439 |
| bind_immediate_executor.test | RUN | 0.285191 | 1.703121 | 1.067561 | 0.000929 | 0.000981 | 0.000920 |
| bind_immediate_executor_select.test | RUN | 0.295303 | 1.668482 | 1.158683 | 0.000896 | 0.000946 | 0.000936 |
| buffer.test | RUN | 0.167079 | 0.694660 | 0.626156 | 0.000883 | 0.000951 | 0.000881 |
| buffer_select.test | RUN | 0.168137 | 0.696361 | 0.619643 | 0.000887 | 0.000926 | 0.000912 |
| buffer_registration.test | LINK | 0.129034 | 0.344387 | 0.366413 | — | — | — |
| buffer_registration_select.test | LINK | 0.127423 | 0.343544 | 0.365379 | — | — | — |
| buffered_read_stream.test | RUN | 0.652997 | 4.496412 | 3.817793 | 0.001169 | 0.001744 | 0.001689 |
| buffered_read_stream_select.test | RUN | 0.662708 | 4.678788 | 3.822879 | 0.001078 | 0.001554 | 0.001569 |
| buffered_stream.test | RUN | 0.893518 | 7.347112 | 6.880880 | 0.001674 | 0.001638 | 0.001778 |
| buffered_stream_select.test | RUN | 0.939888 | 7.339028 | 6.608467 | 0.001583 | 0.001819 | 0.001539 |
| buffered_write_stream.test | RUN | 1.091614 | 6.272250 | 5.828836 | 0.001812 | 0.001759 | 0.001680 |
| buffered_write_stream_select.test | RUN | 1.114085 | 6.347296 | 5.622732 | 0.001517 | 0.001706 | 0.001726 |
| buffers_iterator.test | RUN | 0.323689 | 0.555671 | 0.885895 | 0.001345 | 0.001250 | 0.001238 |
| buffers_iterator_select.test | RUN | 0.323156 | 0.540239 | 0.887216 | 0.001255 | 0.001251 | 0.001228 |
| cancel_after.test | RUN | 0.904060 | 4.936262 | 4.163134 | 0.003028 | 0.003780 | 0.003252 |
| cancel_after_select.test | RUN | 0.921094 | 4.882203 | 4.123200 | 0.002596 | 0.003331 | 0.004071 |
| cancel_at.test | RUN | 0.818628 | 4.495293 | 4.110982 | 0.002665 | 0.003036 | 0.003542 |
| cancel_at_select.test | RUN | 0.800396 | 4.332708 | 4.065200 | 0.002330 | 0.002901 | 0.003541 |
| cancellation_signal.test | LINK | 0.095125 | 0.199643 | 0.250784 | — | — | — |
| cancellation_signal_select.test | LINK | 0.095616 | 0.197652 | 0.268950 | — | — | — |
| cancellation_state.test | LINK | 0.088052 | 0.197745 | 0.343305 | — | — | — |
| cancellation_state_select.test | LINK | 0.091940 | 0.198095 | 0.376363 | — | — | — |
| cancellation_type.test | LINK | 0.104241 | 0.157146 | 0.292218 | — | — | — |
| cancellation_type_select.test | LINK | 0.100935 | 0.157743 | 0.298130 | — | — | — |
| co_composed.test | RUN | 0.104560 | 0.157357 | 0.295086 | 0.001220 | 0.000931 | 0.001274 |
| co_composed_select.test | RUN | 0.103733 | 0.229975 | 0.296548 | 0.001067 | 0.001332 | 0.001556 |
| co_spawn.test | LINK | 0.096086 | 0.235662 | 0.298918 | — | — | — |
| co_spawn_select.test | LINK | 0.101967 | 0.237082 | 0.297395 | — | — | — |
| completion_condition.test | LINK | 0.140629 | 0.368380 | 0.405207 | — | — | — |
| completion_condition_select.test | LINK | 0.131065 | 0.371634 | 0.404589 | — | — | — |
| compose.test | RUN | 0.680661 | 3.759355 | 3.411937 | 0.001960 | 0.001785 | 0.001980 |
| compose_select.test | RUN | 0.686948 | 3.697402 | 3.416152 | 0.001570 | 0.001925 | 0.001589 |
| composed.test | RUN | 0.677743 | 3.713234 | 3.307839 | 0.001328 | 0.001509 | 0.001566 |
| composed_select.test | RUN | 0.674043 | 3.608762 | 3.280774 | 0.001229 | 0.001454 | 0.001541 |
| config.test | RUN | 0.352520 | 2.403459 | 1.420096 | 0.001413 | 0.001251 | 0.001417 |
| config_select.test | RUN | 0.377196 | 2.388139 | 1.590216 | 0.001374 | 0.001384 | 0.001424 |
| connect.test | LINK | 1.083594 | 7.939060 | 7.136816 | — | — | — |
| connect_select.test | LINK | 1.100972 | 7.933796 | 7.114050 | — | — | — |
| connect_pipe.test | RUN | 0.572132 | 2.989656 | 2.602288 | 0.001452 | 0.001527 | 0.001556 |
| connect_pipe_select.test | RUN | 0.593113 | 3.135120 | 2.772317 | 0.001257 | 0.001509 | 0.001594 |
| consign.test | RUN | 0.501281 | 2.932762 | 2.399590 | 0.001437 | 0.001316 | 0.001605 |
| consign_select.test | RUN | 0.514675 | 2.985459 | 2.382379 | 0.001250 | 0.001362 | 0.001393 |
| coroutine.test | LINK | 0.106010 | 0.283822 | 0.339970 | — | — | — |
| coroutine_select.test | LINK | 0.107579 | 0.279217 | 0.322138 | — | — | — |
| deadline_timer.test | RUN | 0.737229 | 3.838082 | 3.416583 | 0.002474 | 0.003023 | 0.003071 |
| deadline_timer_select.test | RUN | 0.750273 | 3.799057 | 3.409421 | 0.002321 | 0.003072 | 0.002539 |
| deferred.test | RUN | 0.113868 | 0.257796 | 0.315719 | 0.001129 | 0.001361 | 0.001394 |
| deferred_select.test | RUN | 0.113588 | 0.261395 | 0.317010 | 0.001076 | 0.001203 | 0.001516 |
| detached.test | LINK | 0.124229 | 0.288745 | 0.357579 | — | — | — |
| detached_select.test | LINK | 0.129303 | 0.286874 | 0.350156 | — | — | — |
| disposition.test | RUN | 0.123543 | 0.692503 | 0.659316 | 0.000939 | 0.001299 | 0.001617 |
| disposition_select.test | RUN | 0.121418 | 0.693827 | 0.660116 | 0.000933 | 0.001276 | 0.001590 |
| error.test | RUN | 0.113693 | 0.665793 | 0.583447 | 0.000893 | 0.001383 | 0.001458 |
| error_select.test | RUN | 0.113607 | 0.665170 | 0.587011 | 0.000873 | 0.001308 | 0.001360 |
| file_base.test | LINK | 0.139756 | 0.543367 | 0.651110 | — | — | — |
| file_base_select.test | LINK | 0.140582 | 0.550054 | 0.615253 | — | — | — |
| fwd_first.test | LINK | 0.331852 | 0.924535 | 1.169398 | — | — | — |
| fwd_last.test | LINK | 0.331711 | 0.889027 | 1.170271 | — | — | — |
| generic_basic_endpoint.test | LINK | 0.120506 | 0.316750 | 0.420938 | — | — | — |
| generic_basic_endpoint_select.test | LINK | 0.123313 | 0.312924 | 0.418357 | — | — | — |
| generic_datagram_protocol.test | LINK | 0.554584 | 2.972230 | 2.479027 | — | — | — |
| generic_datagram_protocol_select.test | LINK | 0.551804 | 3.067425 | 2.430185 | — | — | — |
| generic_raw_protocol.test | LINK | 0.552495 | 2.975001 | 2.451448 | — | — | — |
| generic_raw_protocol_select.test | LINK | 0.544841 | 3.047127 | 2.436526 | — | — | — |
| generic_seq_packet_protocol.test | LINK | 0.475640 | 2.499570 | 2.077202 | — | — | — |
| generic_seq_packet_protocol_select.test | LINK | 0.474243 | 2.527831 | 2.085459 | — | — | — |
| generic_stream_protocol.test | LINK | 0.510786 | 2.706959 | 2.236905 | — | — | — |
| generic_stream_protocol_select.test | LINK | 0.507838 | 2.769818 | 2.236376 | — | — | — |
| high_resolution_timer.test | LINK | 0.204812 | 0.468522 | 0.647402 | — | — | — |
| high_resolution_timer_select.test | LINK | 0.208777 | 0.484645 | 0.663039 | — | — | — |
| immediate.test | LINK | 0.140292 | 0.361461 | 0.404558 | — | — | — |
| immediate_select.test | LINK | 0.141662 | 0.361019 | 0.404139 | — | — | — |
| inline_executor.test | RUN | 0.175296 | 0.568925 | 0.615677 | 0.000865 | 0.000963 | 0.000918 |
| inline_executor_select.test | RUN | 0.173633 | 0.572838 | 0.611701 | 0.000906 | 0.000950 | 0.000911 |
| inline_or_executor.test | RUN | 0.297478 | 1.746544 | 1.227299 | 0.000965 | 0.000995 | 0.000947 |
| inline_or_executor_select.test | RUN | 0.301698 | 1.771118 | 1.327219 | 0.000938 | 0.000906 | 0.001059 |
| io_context.test | RUN | 0.443135 | 2.671343 | 2.147784 | 0.001810 | 0.001893 | 0.002108 |
| io_context_select.test | RUN | 0.445755 | 2.630729 | 2.129804 | 0.001490 | 0.001734 | 0.001931 |
| io_context_strand.test | RUN | 0.411965 | 2.255046 | 1.850407 | 0.001638 | 0.001658 | 0.001754 |
| io_context_strand_select.test | RUN | 0.417413 | 2.222360 | 1.843481 | 0.001508 | 0.001658 | 0.001906 |
| ip_address.test | LINK | 0.145356 | 0.509907 | 0.514740 | — | — | — |
| ip_address_select.test | LINK | 0.144586 | 0.509528 | 0.512180 | — | — | — |
| ip_address_v4.test | LINK | 0.146022 | 0.541756 | 0.882946 | — | — | — |
| ip_address_v4_select.test | LINK | 0.143301 | 0.537029 | 0.854206 | — | — | — |
| ip_address_v6.test | LINK | 0.169882 | 0.709085 | 1.111817 | — | — | — |
| ip_address_v6_select.test | LINK | 0.169743 | 0.702367 | 1.118427 | — | — | — |
| ip_basic_endpoint.test | LINK | 0.120725 | 0.336456 | 0.713628 | — | — | — |
| ip_basic_endpoint_select.test | LINK | 0.125007 | 0.336190 | 0.706320 | — | — | — |
| ip_basic_resolver.test | LINK | 0.209428 | 0.549792 | 1.062351 | — | — | — |
| ip_basic_resolver_select.test | LINK | 0.209122 | 0.585464 | 1.098910 | — | — | — |
| ip_basic_resolver_entry.test | LINK | 0.069111 | 0.236546 | 0.296378 | — | — | — |
| ip_basic_resolver_entry_select.test | LINK | 0.065730 | 0.233632 | 0.296414 | — | — | — |
| ip_basic_resolver_iterator.test | LINK | 0.121047 | 0.493002 | 0.689420 | — | — | — |
| ip_basic_resolver_iterator_select.test | LINK | 0.120666 | 0.487077 | 0.689025 | — | — | — |
| ip_basic_resolver_query.test | LINK | 0.113525 | 0.469661 | 0.660871 | — | — | — |
| ip_basic_resolver_query_select.test | LINK | 0.116221 | 0.462339 | 0.673431 | — | — | — |
| ip_host_name.test | RUN | 0.125027 | 0.643858 | 0.746097 | 0.000886 | 0.001299 | 0.001394 |
| ip_host_name_select.test | RUN | 0.127827 | 0.633771 | 0.750849 | 0.000870 | 0.001200 | 0.001145 |
| ip_icmp.test | RUN | 0.687093 | 6.225758 | 5.057084 | 0.000891 | 0.001303 | 0.001154 |
| ip_icmp_select.test | RUN | 0.680171 | 6.358191 | 4.932596 | 0.000937 | 0.001236 | 0.001348 |
| ip_multicast.test | RUN | 0.380313 | 3.105680 | 2.811287 | 0.000978 | 0.001281 | 0.001291 |
| ip_multicast_select.test | RUN | 0.389186 | 3.059767 | 2.793030 | 0.000935 | 0.001332 | 0.001359 |
| ip_resolver_query_base.test | LINK | 0.079475 | 0.257638 | 0.308745 | — | — | — |
| ip_resolver_query_base_select.test | LINK | 0.076090 | 0.257723 | 0.309184 | — | — | — |
| ip_tcp.test | RUN | 1.018343 | 9.179845 | 7.798481 | 0.001208 | 0.001560 | 0.002006 |
| ip_tcp_select.test | RUN | 1.014492 | 9.641731 | 7.583598 | 0.001275 | 0.001802 | 0.001879 |
| ip_udp.test | RUN | 0.728893 | 6.562035 | 5.317223 | 0.000948 | 0.001391 | 0.001450 |
| ip_udp_select.test | RUN | 0.725191 | 6.718975 | 5.206746 | 0.001022 | 0.001381 | 0.001428 |
| ip_unicast.test | RUN | 0.355003 | 2.817936 | 2.445600 | 0.000950 | 0.001280 | 0.001291 |
| ip_unicast_select.test | RUN | 0.354141 | 2.797248 | 2.418218 | 0.000977 | 0.001050 | 0.001146 |
| ip_v6_only.test | RUN | 0.365204 | 2.884138 | 2.531516 | 0.000986 | 0.001252 | 0.001388 |
| ip_v6_only_select.test | RUN | 0.371463 | 3.001201 | 2.513485 | 0.000926 | 0.001303 | 0.001331 |
| is_read_buffered.test | RUN | 0.247917 | 0.857551 | 1.283931 | 0.000880 | 0.001330 | 0.001306 |
| is_read_buffered_select.test | RUN | 0.251110 | 0.872974 | 1.309582 | 0.000884 | 0.001199 | 0.001191 |
| is_write_buffered.test | RUN | 0.242838 | 0.847611 | 1.296612 | 0.000871 | 0.001098 | 0.001394 |
| is_write_buffered_select.test | RUN | 0.250490 | 0.867508 | 1.331994 | 0.000856 | 0.001200 | 0.001436 |
| local_basic_endpoint.test | LINK | 0.115751 | 0.485396 | 0.676327 | — | — | — |
| local_basic_endpoint_select.test | LINK | 0.119229 | 0.463978 | 0.680263 | — | — | — |
| local_connect_pair.test | LINK | 0.329481 | 2.886548 | 2.363460 | — | — | — |
| local_connect_pair_select.test | LINK | 0.338003 | 2.847565 | 2.328330 | — | — | — |
| local_datagram_protocol.test | LINK | 0.463333 | 3.785930 | 3.365107 | — | — | — |
| local_datagram_protocol_select.test | LINK | 0.473827 | 3.813333 | 3.283522 | — | — | — |
| local_seq_packet_protocol.test | LINK | 0.475145 | 3.715513 | 3.336029 | — | — | — |
| local_seq_packet_protocol_select.test | LINK | 0.475350 | 3.761851 | 3.327904 | — | — | — |
| local_stream_protocol.test | LINK | 0.439052 | 3.513842 | 3.163659 | — | — | — |
| local_stream_protocol_select.test | LINK | 0.446973 | 3.534389 | 3.127421 | — | — | — |
| placeholders.test | LINK | 0.078618 | 0.260923 | 0.338572 | — | — | — |
| placeholders_select.test | LINK | 0.073004 | 0.257729 | 0.327755 | — | — | — |
| posix_basic_descriptor.test | LINK | 0.214376 | 0.723396 | 0.981971 | — | — | — |
| posix_basic_descriptor_select.test | LINK | 0.224675 | 0.761464 | 1.188815 | — | — | — |
| posix_basic_stream_descriptor.test | LINK | 0.210341 | 0.723969 | 0.973642 | — | — | — |
| posix_basic_stream_descriptor_select.test | LINK | 0.217639 | 0.759846 | 1.177569 | — | — | — |
| posix_descriptor_base.test | LINK | 0.081883 | 0.268233 | 0.325654 | — | — | — |
| posix_descriptor_base_select.test | LINK | 0.083175 | 0.271013 | 0.318322 | — | — | — |
| posix_stream_descriptor.test | LINK | 0.459746 | 3.587445 | 3.097774 | — | — | — |
| posix_stream_descriptor_select.test | LINK | 0.468809 | 3.594471 | 3.140056 | — | — | — |
| prepend.test | RUN | 0.342734 | 2.865661 | 2.436485 | 0.000975 | 0.001437 | 0.001479 |
| prepend_select.test | RUN | 0.345837 | 2.947184 | 2.402881 | 0.000906 | 0.001371 | 0.001379 |
| random_access_file.test | LINK | 0.204656 | 0.636665 | 0.792206 | — | — | — |
| random_access_file_select.test | LINK | 0.254858 | 0.700963 | 0.995198 | — | — | — |
| read.test | RUN | 1.661085 | 18.167337 | 14.239577 | 0.001697 | 0.001792 | 0.001927 |
| read_select.test | RUN | 1.679311 | 18.173929 | 14.402892 | 0.001708 | 0.001821 | 0.001992 |
| read_at.test | RUN | 1.666517 | 23.522928 | 18.969473 | 0.001962 | 0.002424 | 0.002173 |
| read_at_select.test | RUN | 1.682582 | 23.316747 | 19.084496 | 0.001919 | 0.002229 | 0.002478 |
| read_until.test | RUN | 0.860896 | 7.071506 | 5.369565 | 0.001477 | 0.001557 | 0.001634 |
| read_until_select.test | RUN | 0.870619 | 7.118311 | 5.538055 | 0.001432 | 0.001509 | 0.001396 |
| readable_pipe.test | LINK | 0.542255 | 2.929588 | 2.416186 | — | — | — |
| readable_pipe_select.test | LINK | 0.556564 | 3.076675 | 2.554030 | — | — | — |
| recycling_allocator.test | RUN | 0.154547 | 0.410270 | 0.470382 | 0.001104 | 0.001195 | 0.001260 |
| recycling_allocator_select.test | RUN | 0.161668 | 0.411217 | 0.479500 | 0.001220 | 0.001300 | 0.001367 |
| redirect_disposition.test | LINK | 0.708648 | 4.089674 | 3.731149 | — | — | — |
| redirect_disposition_select.test | LINK | 0.710220 | 4.074048 | 3.694049 | — | — | — |
| redirect_error.test | LINK | 0.624469 | 3.397441 | 3.249858 | — | — | — |
| redirect_error_select.test | LINK | 0.620446 | 3.368032 | 3.224981 | — | — | — |
| registered_buffer.test | LINK | 0.150694 | 0.340350 | 0.429992 | — | — | — |
| registered_buffer_select.test | LINK | 0.148089 | 0.330429 | 0.430156 | — | — | — |
| signal_set.test | RUN | 0.513715 | 2.872698 | 2.289712 | 0.001191 | 0.001459 | 0.001468 |
| signal_set_select.test | RUN | 0.532686 | 2.983658 | 2.486022 | 0.001241 | 0.001354 | 0.001447 |
| signal_set_base.test | LINK | 0.118781 | 0.263807 | 0.316648 | — | — | — |
| signal_set_base_select.test | LINK | 0.117480 | 0.266442 | 0.311844 | — | — | — |
| socket_base.test | RUN | 0.629885 | 4.172997 | 3.484119 | 0.001437 | 0.001532 | 0.001608 |
| socket_base_select.test | RUN | 0.642469 | 4.086904 | 3.461243 | 0.001372 | 0.001398 | 0.001245 |
| spawn.test | RUN | 1.095970 | 6.988197 | 6.028251 | 0.001403 | 0.001601 | 0.001655 |
| spawn_select.test | RUN | 1.109415 | 6.950468 | 5.977677 | 0.001385 | 0.001485 | 0.001797 |
| static_thread_pool.test | RUN | 0.274011 | 0.642785 | 0.771757 | 0.001170 | 0.001271 | 0.001321 |
| static_thread_pool_select.test | RUN | 0.287870 | 0.693617 | 0.987815 | 0.001243 | 0.001175 | 0.001452 |
| steady_timer.test | LINK | 0.309702 | 0.701569 | 1.073674 | — | — | — |
| steady_timer_select.test | LINK | 0.311264 | 0.728168 | 1.111236 | — | — | — |
| strand.test | RUN | 0.679054 | 3.932995 | 3.588387 | 0.001884 | 0.002024 | 0.002067 |
| strand_select.test | RUN | 0.679951 | 3.871677 | 3.539817 | 0.002056 | 0.001572 | 0.002026 |
| stream_file.test | LINK | 0.289987 | 0.633175 | 0.833521 | — | — | — |
| stream_file_select.test | LINK | 0.300741 | 0.612998 | 1.003784 | — | — | — |
| streambuf.test | RUN | 0.175711 | 0.365463 | 0.557684 | 0.000919 | 0.000941 | 0.001497 |
| streambuf_select.test | RUN | 0.162948 | 0.364585 | 0.445255 | 0.000906 | 0.000933 | 0.000925 |
| system_timer.test | LINK | 0.450561 | 2.499525 | 2.136104 | — | — | — |
| system_timer_select.test | LINK | 0.449550 | 2.454634 | 2.057405 | — | — | — |
| system_context.test | LINK | 0.190886 | 0.422879 | 0.474730 | — | — | — |
| system_context_select.test | LINK | 0.201528 | 0.444537 | 0.603711 | — | — | — |
| system_executor.test | LINK | 0.256869 | 1.426065 | 0.978781 | — | — | — |
| system_executor_select.test | LINK | 0.265777 | 1.384918 | 1.072812 | — | — | — |
| this_coro.test | LINK | 0.069631 | 0.161137 | 0.185040 | — | — | — |
| this_coro_select.test | LINK | 0.068075 | 0.155491 | 0.186151 | — | — | — |
| thread_pool.test | RUN | 0.308894 | 1.829904 | 1.264754 | 0.001635 | 0.001585 | 0.001710 |
| thread_pool_select.test | RUN | 0.318899 | 1.849809 | 1.373075 | 0.001580 | 0.001572 | 0.001648 |
| time_traits.test | LINK | 0.161570 | 0.332114 | 0.381500 | — | — | — |
| time_traits_select.test | LINK | 0.163461 | 0.343569 | 0.379211 | — | — | — |
| ts_buffer.test | LINK | 0.157335 | 0.559907 | 0.405744 | — | — | — |
| ts_buffer_select.test | LINK | 0.153407 | 0.550205 | 0.407422 | — | — | — |
| ts_executor.test | LINK | 0.220081 | 0.782632 | 0.639151 | — | — | — |
| ts_executor_select.test | LINK | 0.228655 | 0.829873 | 0.887501 | — | — | — |
| ts_internet.test | LINK | 0.243568 | 0.837741 | 0.949283 | — | — | — |
| ts_internet_select.test | LINK | 0.249319 | 0.861429 | 1.252596 | — | — | — |
| ts_io_context.test | LINK | 0.202460 | 0.651778 | 0.773587 | — | — | — |
| ts_io_context_select.test | LINK | 0.205946 | 0.691946 | 0.964907 | — | — | — |
| ts_net.test | LINK | 0.288393 | 1.019043 | 1.550111 | — | — | — |
| ts_net_select.test | LINK | 0.294788 | 1.030476 | 1.606398 | — | — | — |
| ts_netfwd.test | LINK | 0.291850 | 1.003624 | 1.546929 | — | — | — |
| ts_netfwd_select.test | LINK | 0.299915 | 1.056559 | 1.587221 | — | — | — |
| ts_socket.test | LINK | 0.240869 | 0.793483 | 1.201729 | — | — | — |
| ts_socket_select.test | LINK | 0.246509 | 0.816796 | 1.230591 | — | — | — |
| ts_timer.test | LINK | 0.211019 | 0.704473 | 1.053639 | — | — | — |
| ts_timer_select.test | LINK | 0.223208 | 0.742291 | 1.089121 | — | — | — |
| use_awaitable.test | LINK | 0.070249 | 0.241631 | 0.296272 | — | — | — |
| use_awaitable_select.test | LINK | 0.070264 | 0.236245 | 0.305583 | — | — | — |
| wait_traits.test | LINK | 0.066889 | 0.238474 | 0.299768 | — | — | — |
| wait_traits_select.test | LINK | 0.069659 | 0.238606 | 0.295059 | — | — | — |
| windows_basic_object_handle.test | LINK | 0.067437 | 0.238767 | 0.296927 | — | — | — |
| windows_basic_object_handle_select.test | LINK | 0.067783 | 0.238390 | 0.308317 | — | — | — |
| windows_basic_overlapped_handle.test | LINK | 0.068661 | 0.237714 | 0.303036 | — | — | — |
| windows_basic_overlapped_handle_select.test | LINK | 0.068810 | 0.237878 | 0.300107 | — | — | — |
| windows_basic_random_access_handle.test | LINK | 0.066503 | 0.239828 | 0.301390 | — | — | — |
| windows_basic_random_access_handle_select.test | LINK | 0.070877 | 0.240804 | 0.303264 | — | — | — |
| windows_basic_stream_handle.test | LINK | 0.069737 | 0.236144 | 0.299151 | — | — | — |
| windows_basic_stream_handle_select.test | LINK | 0.070491 | 0.236481 | 0.296394 | — | — | — |
| windows_object_handle.test | LINK | 0.200227 | 0.662263 | 0.796471 | — | — | — |
| windows_object_handle_select.test | LINK | 0.211181 | 0.695292 | 0.997899 | — | — | — |
| windows_overlapped_ptr.test | LINK | 0.205403 | 0.690263 | 0.870901 | — | — | — |
| windows_overlapped_ptr_select.test | LINK | 0.210585 | 0.742545 | 1.075699 | — | — | — |
| windows_random_access_handle.test | LINK | 0.194399 | 0.659009 | 0.781309 | — | — | — |
| windows_random_access_handle_select.test | LINK | 0.206103 | 0.687415 | 0.989814 | — | — | — |
| windows_stream_handle.test | LINK | 0.200504 | 0.658190 | 0.793061 | — | — | — |
| windows_stream_handle_select.test | LINK | 0.209808 | 0.701214 | 0.985919 | — | — | — |
| writable_pipe.test | LINK | 0.375661 | 2.953946 | 2.521189 | — | — | — |
| writable_pipe_select.test | LINK | 0.385744 | 3.039238 | 2.667763 | — | — | — |
| write.test | RUN | 1.590216 | 15.152015 | 14.058231 | 0.001818 | 0.001717 | 0.001818 |
| write_select.test | RUN | 1.677226 | 15.238237 | 14.141976 | 0.001891 | 0.001806 | 0.002012 |
| write_at.test | RUN | 1.718616 | 20.384913 | 18.008659 | 0.001966 | 0.001913 | 0.002192 |
| write_at_select.test | RUN | 1.732328 | 20.438741 | 18.040542 | 0.002051 | 0.001802 | 0.002036 |
| any_executor.test | RUN | 0.679990 | 6.672059 | 5.761605 | 0.001723 | 0.001589 | 0.002043 |
| blocking.test | RUN | 1.495485 | 8.845034 | 11.476558 | 0.003325 | 0.003148 | 0.003514 |
| blocking_adaptation.test | RUN | 0.733445 | 3.829118 | 5.175388 | 0.001980 | 0.002242 | 0.002357 |
| context_as.test | RUN | 0.425815 | 2.634318 | 1.816934 | 0.001502 | 0.001464 | 0.001610 |
| executor.test | RUN | 0.110179 | 0.249920 | 0.311900 | 0.001295 | 0.001268 | 0.001404 |
| inline_exception_handling.test | RUN | 1.401282 | 8.393010 | 11.456383 | 0.002304 | 0.002260 | 0.002406 |
| invocable_archetype.test | RUN | 0.105028 | 0.238500 | 0.303073 | 0.001190 | 0.001341 | 0.001394 |
| mapping.test | RUN | 1.467434 | 8.047059 | 11.494213 | 0.002346 | 0.002317 | 0.002521 |
| outstanding_work.test | RUN | 0.673049 | 3.528869 | 4.968148 | 0.002108 | 0.002104 | 0.002424 |
| prefer_only.test | RUN | 0.217287 | 1.390064 | 1.115649 | 0.001197 | 0.001372 | 0.001436 |
| relationship.test | RUN | 0.508595 | 3.432797 | 4.596835 | 0.001451 | 0.002054 | 0.001563 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 1.003× | 1.004×, 1.003× | 1.009× |
| clang | 0.993× | 0.998×, 0.989× | 0.991× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1363 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/43801643681).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| any_completion_executor.test | 10 | 0.001208s | 0.001183s | 0.001239s | byte equality observed |
| any_completion_executor_select.test | 10 | 0.001185s | 0.001192s | 0.001184s | byte equality observed |
| any_completion_handler.test | 10 | 0.001027s | 0.001012s | 0.001001s | byte equality observed |
| any_completion_handler_select.test | 10 | 0.001029s | 0.001016s | 0.001005s | byte equality observed |
| any_io_executor.test | 10 | 0.001191s | 0.001247s | 0.001181s | byte equality observed |
| any_io_executor_select.test | 5 | 0.001201s | 0.001214s | 0.001198s | byte equality observed |
| append.test | 10 | 0.000973s | 0.000984s | 0.000972s | byte equality observed |
| append_select.test | 10 | 0.000959s | 0.000970s | 0.000937s | byte equality observed |
| as_tuple.test | 10 | 0.001020s | 0.001023s | 0.001011s | byte equality observed |
| as_tuple_select.test | 10 | 0.000971s | 0.000976s | 0.000964s | byte equality observed |
| bind_allocator.test | 1 | 0.001491s | 0.001478s | 0.001441s | byte equality observed |
| bind_allocator_select.test | 1 | 0.001177s | 0.001181s | 0.001200s | byte equality observed |
| bind_cancellation_slot.test | 10 | 0.000900s | 0.000901s | 0.000884s | byte equality observed |
| bind_cancellation_slot_select.test | 10 | 0.000802s | 0.000803s | 0.000788s | byte equality observed |
| bind_executor.test | 1 | 0.001489s | 0.001493s | 0.001401s | byte equality observed |
| bind_executor_select.test | 1 | 0.001688s | 0.001790s | 0.001700s | byte equality observed |
| bind_immediate_executor.test | 10 | 0.000899s | 0.000899s | 0.000880s | byte equality observed |
| bind_immediate_executor_select.test | 10 | 0.000876s | 0.000861s | 0.000852s | byte equality observed |
| buffer.test | 10 | 0.000839s | 0.000824s | 0.000793s | byte equality observed |
| buffer_select.test | 10 | 0.000823s | 0.000811s | 0.000796s | byte equality observed |
| buffered_read_stream.test | 10 | 0.001025s | 0.001065s | 0.001011s | byte equality observed |
| buffered_read_stream_select.test | 10 | 0.001002s | 0.001026s | 0.000989s | byte equality observed |
| buffered_stream.test | 10 | 0.001008s | 0.000995s | 0.000983s | byte equality observed |
| buffered_stream_select.test | 10 | 0.000993s | 0.000979s | 0.000973s | byte equality observed |
| buffered_write_stream.test | 10 | 0.001021s | 0.000999s | 0.000978s | byte equality observed |
| buffered_write_stream_select.test | 10 | 0.000991s | 0.000974s | 0.000962s | byte equality observed |
| buffers_iterator.test | 10 | 0.000816s | 0.000809s | 0.000797s | byte equality observed |
| buffers_iterator_select.test | 10 | 0.000777s | 0.000750s | 0.000782s | byte equality observed |
| cancel_after.test | 1 | 0.003267s | 0.003335s | 0.003230s | byte equality observed |
| cancel_after_select.test | 1 | 0.002746s | 0.002719s | 0.002636s | byte equality observed |
| cancel_at.test | 1 | 0.003378s | 0.003426s | 0.003359s | byte equality observed |
| cancel_at_select.test | 1 | 0.003323s | 0.003585s | 0.003207s | byte equality observed |
| co_composed.test | 10 | 0.000844s | 0.000856s | 0.000859s | byte equality observed |
| co_composed_select.test | 10 | 0.000782s | 0.000796s | 0.000801s | byte equality observed |
| compose.test | 1 | 0.001589s | 0.001534s | 0.001487s | byte equality observed |
| compose_select.test | 1 | 0.001240s | 0.001242s | 0.001215s | byte equality observed |
| composed.test | 1 | 0.001867s | 0.001877s | 0.001743s | byte equality observed |
| composed_select.test | 1 | 0.001420s | 0.001403s | 0.001351s | byte equality observed |
| config.test | 9 | 0.000919s | 0.000916s | 0.000917s | byte equality observed |
| config_select.test | 10 | 0.000879s | 0.000867s | 0.000855s | byte equality observed |
| connect_pipe.test | 10 | 0.000899s | 0.000900s | 0.000858s | byte equality observed |
| connect_pipe_select.test | 10 | 0.000870s | 0.000914s | 0.000864s | byte equality observed |
| consign.test | 10 | 0.000865s | 0.000901s | 0.000891s | byte equality observed |
| consign_select.test | 10 | 0.000840s | 0.000834s | 0.000816s | byte equality observed |
| deadline_timer.test | 1 | 0.002283s | 0.002278s | 0.002282s | byte equality observed |
| deadline_timer_select.test | 1 | 0.001932s | 0.001945s | 0.001958s | byte equality observed |
| deferred.test | 10 | 0.000814s | 0.000829s | 0.000823s | byte equality observed |
| deferred_select.test | 10 | 0.000731s | 0.000739s | 0.000752s | byte equality observed |
| disposition.test | 10 | 0.000793s | 0.000786s | 0.000786s | byte equality observed |
| disposition_select.test | 10 | 0.000796s | 0.000782s | 0.000764s | byte equality observed |
| error.test | 10 | 0.000772s | 0.000754s | 0.000744s | byte equality observed |
| error_select.test | 10 | 0.000767s | 0.000757s | 0.000735s | byte equality observed |
| inline_executor.test | 10 | 0.000768s | 0.000758s | 0.000767s | byte equality observed |
| inline_executor_select.test | 10 | 0.000768s | 0.000774s | 0.000770s | byte equality observed |
| inline_or_executor.test | 10 | 0.000774s | 0.000785s | 0.000765s | byte equality observed |
| inline_or_executor_select.test | 10 | 0.000775s | 0.000779s | 0.000764s | byte equality observed |
| io_context.test | 1 | 0.001809s | 0.001809s | 0.001754s | byte equality observed |
| io_context_select.test | 1 | 0.002158s | 0.002066s | 0.002101s | byte equality observed |
| io_context_strand.test | 1 | 0.002086s | 0.002115s | 0.002039s | byte equality observed |
| io_context_strand_select.test | 1 | 0.001779s | 0.001716s | 0.001717s | byte equality observed |
| ip_host_name.test | 10 | 0.000840s | 0.000840s | 0.000838s | byte equality observed |
| ip_host_name_select.test | 10 | 0.000773s | 0.000775s | 0.000743s | byte equality observed |
| ip_icmp.test | 10 | 0.000784s | 0.000796s | 0.000759s | byte equality observed |
| ip_icmp_select.test | 10 | 0.000779s | 0.000786s | 0.000762s | byte equality observed |
| ip_multicast.test | 10 | 0.000848s | 0.000843s | 0.000830s | byte equality observed |
| ip_multicast_select.test | 10 | 0.000831s | 0.000822s | 0.000813s | byte equality observed |
| ip_tcp.test | 10 | 0.001043s | 0.001041s | 0.001029s | byte equality observed |
| ip_tcp_select.test | 10 | 0.001005s | 0.001001s | 0.000998s | byte equality observed |
| ip_udp.test | 10 | 0.000857s | 0.000866s | 0.000833s | byte equality observed |
| ip_udp_select.test | 10 | 0.000848s | 0.000853s | 0.000830s | byte equality observed |
| ip_unicast.test | 10 | 0.000807s | 0.000818s | 0.000799s | byte equality observed |
| ip_unicast_select.test | 10 | 0.000804s | 0.000807s | 0.000793s | byte equality observed |
| ip_v6_only.test | 10 | 0.000816s | 0.000815s | 0.000798s | byte equality observed |
| ip_v6_only_select.test | 10 | 0.000799s | 0.000801s | 0.000794s | byte equality observed |
| is_read_buffered.test | 10 | 0.000750s | 0.000742s | 0.000727s | byte equality observed |
| is_read_buffered_select.test | 10 | 0.000749s | 0.000740s | 0.000729s | byte equality observed |
| is_write_buffered.test | 10 | 0.000746s | 0.000745s | 0.000724s | byte equality observed |
| is_write_buffered_select.test | 10 | 0.000749s | 0.000748s | 0.000730s | byte equality observed |
| prepend.test | 10 | 0.000803s | 0.000832s | 0.000783s | byte equality observed |
| prepend_select.test | 10 | 0.000782s | 0.000826s | 0.000778s | byte equality observed |
| read.test | 10 | 0.001097s | 0.001163s | 0.001056s | byte equality observed |
| read_at.test | 10 | 0.001312s | 0.001443s | 0.001295s | byte equality observed |
| read_at_select.test | 10 | 0.001312s | 0.001466s | 0.001293s | byte equality observed |
| read_select.test | 10 | 0.001093s | 0.001149s | 0.001051s | byte equality observed |
| read_until.test | 10 | 0.000913s | 0.000965s | 0.000861s | byte equality observed |
| read_until_select.test | 10 | 0.000945s | 0.000941s | 0.000872s | byte equality observed |
| recycling_allocator.test | 10 | 0.000812s | 0.000827s | 0.000736s | byte equality observed |
| recycling_allocator_select.test | 10 | 0.000818s | 0.000826s | 0.000738s | byte equality observed |
| signal_set.test | 10 | 0.000833s | 0.000855s | 0.000757s | byte equality observed |
| signal_set_select.test | 10 | 0.000822s | 0.000855s | 0.000804s | byte equality observed |
| socket_base.test | 10 | 0.000908s | 0.000905s | 0.000897s | byte equality observed |
| socket_base_select.test | 10 | 0.000897s | 0.000879s | 0.000914s | byte equality observed |
| spawn.test | 10 | 0.000985s | 0.000977s | 0.000978s | byte equality observed |
| spawn_select.test | 10 | 0.000991s | 0.000985s | 0.000961s | byte equality observed |
| static_thread_pool.test | 10 | 0.000822s | 0.000818s | 0.000805s | byte equality observed |
| static_thread_pool_select.test | 10 | 0.000775s | 0.000802s | 0.000798s | byte equality observed |
| strand.test | 1 | 0.001707s | 0.001692s | 0.001687s | byte equality observed |
| strand_select.test | 1 | 0.001451s | 0.001467s | 0.001477s | byte equality observed |
| streambuf.test | 10 | 0.000889s | 0.000884s | 0.000883s | byte equality observed |
| streambuf_select.test | 10 | 0.000838s | 0.000873s | 0.000853s | byte equality observed |
| thread_pool.test | 8 | 0.001545s | 0.001541s | 0.001545s | byte equality observed |
| thread_pool_select.test | 10 | 0.001491s | 0.001585s | 0.001522s | byte equality observed |
| write.test | 10 | 0.001194s | 0.001191s | 0.001175s | byte equality observed |
| write_at.test | 10 | 0.001304s | 0.001319s | 0.001263s | byte equality observed |
| write_at_select.test | 10 | 0.001298s | 0.001281s | 0.001291s | byte equality observed |
| write_select.test | 10 | 0.001169s | 0.001176s | 0.001163s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/43801643681).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
