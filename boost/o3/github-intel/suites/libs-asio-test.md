# libs/asio/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| any_completion_executor.test | RUN | 0.513650 | 3.480225 | 3.002061 | 0.002040 | 0.002076 | 0.001870 |
| any_completion_executor_select.test | RUN | 0.530045 | 3.456199 | 3.127777 | 0.001582 | 0.002000 | 0.002126 |
| any_completion_handler.test | RUN | 0.593926 | 3.172702 | 2.718482 | 0.001486 | 0.001393 | 0.001627 |
| any_completion_handler_select.test | RUN | 0.620617 | 3.214794 | 2.955453 | 0.001448 | 0.001458 | 0.001642 |
| any_io_executor.test | RUN | 0.555151 | 3.689386 | 3.288445 | 0.001591 | 0.002083 | 0.001804 |
| any_io_executor_select.test | RUN | 0.574604 | 3.643185 | 3.364116 | 0.001683 | 0.001570 | 0.002024 |
| append.test | RUN | 0.520150 | 2.978967 | 2.433808 | 0.001264 | 0.001543 | 0.001356 |
| append_select.test | RUN | 0.514278 | 3.005680 | 2.465204 | 0.001301 | 0.001490 | 0.001402 |
| as_tuple.test | RUN | 0.669720 | 3.571573 | 3.460165 | 0.001478 | 0.001380 | 0.001526 |
| as_tuple_select.test | RUN | 0.675134 | 3.559199 | 3.436786 | 0.001403 | 0.001573 | 0.001535 |
| associated_allocator.test | LINK | 0.128489 | 0.281347 | 0.360915 | — | — | — |
| associated_allocator_select.test | LINK | 0.127497 | 0.282279 | 0.363338 | — | — | — |
| associated_cancellation_slot.test | LINK | 0.139982 | 0.312905 | 0.395209 | — | — | — |
| associated_cancellation_slot_select.test | LINK | 0.136649 | 0.306359 | 0.416841 | — | — | — |
| associated_executor.test | LINK | 0.207343 | 0.549893 | 0.665904 | — | — | — |
| associated_executor_select.test | LINK | 0.204317 | 0.540597 | 0.675844 | — | — | — |
| associated_immediate_executor.test | LINK | 0.187530 | 0.507949 | 0.591851 | — | — | — |
| associated_immediate_executor_select.test | LINK | 0.191245 | 0.506488 | 0.591135 | — | — | — |
| associator.test | LINK | 0.108043 | 0.239215 | 0.293489 | — | — | — |
| associator_select.test | LINK | 0.105425 | 0.240659 | 0.289320 | — | — | — |
| awaitable.test | LINK | 0.109863 | 0.243924 | 0.295967 | — | — | — |
| awaitable_select.test | LINK | 0.102271 | 0.241690 | 0.291713 | — | — | — |
| basic_datagram_socket.test | LINK | 0.322992 | 0.767707 | 1.124757 | — | — | — |
| basic_datagram_socket_select.test | LINK | 0.327378 | 0.797939 | 1.152798 | — | — | — |
| basic_deadline_timer.test | LINK | 0.388539 | 0.882316 | 1.280141 | — | — | — |
| basic_deadline_timer_select.test | LINK | 0.402004 | 0.928026 | 1.308064 | — | — | — |
| basic_file.test | LINK | 0.105109 | 0.240521 | 0.295338 | — | — | — |
| basic_file_select.test | LINK | 0.106224 | 0.240113 | 0.297062 | — | — | — |
| basic_random_access_file.test | LINK | 0.106164 | 0.244668 | 0.295738 | — | — | — |
| basic_random_access_file_select.test | LINK | 0.107092 | 0.239048 | 0.293451 | — | — | — |
| basic_raw_socket.test | LINK | 0.320347 | 0.777491 | 1.136109 | — | — | — |
| basic_raw_socket_select.test | LINK | 0.334971 | 0.786504 | 1.146206 | — | — | — |
| basic_readable_pipe.test | LINK | 0.310893 | 0.731738 | 0.980874 | — | — | — |
| basic_readable_pipe_select.test | LINK | 0.323287 | 0.784879 | 1.184218 | — | — | — |
| basic_seq_packet_socket.test | LINK | 0.328944 | 0.757291 | 1.118183 | — | — | — |
| basic_seq_packet_socket_select.test | LINK | 0.331776 | 0.782222 | 1.164184 | — | — | — |
| basic_signal_set.test | LINK | 0.299682 | 0.700650 | 0.897613 | — | — | — |
| basic_signal_set_select.test | LINK | 0.315138 | 0.746590 | 1.074912 | — | — | — |
| basic_socket_acceptor.test | LINK | 0.312365 | 0.757328 | 1.137121 | — | — | — |
| basic_socket_acceptor_select.test | LINK | 0.333257 | 0.785169 | 1.164864 | — | — | — |
| basic_stream_file.test | LINK | 0.100642 | 0.241409 | 0.288683 | — | — | — |
| basic_stream_file_select.test | LINK | 0.102813 | 0.244772 | 0.291603 | — | — | — |
| basic_stream_socket.test | LINK | 0.329283 | 0.767406 | 1.119778 | — | — | — |
| basic_stream_socket_select.test | LINK | 0.333982 | 0.777522 | 1.147109 | — | — | — |
| basic_streambuf.test | LINK | 0.155648 | 0.350609 | 0.436166 | — | — | — |
| basic_streambuf_select.test | LINK | 0.157032 | 0.347021 | 0.435639 | — | — | — |
| basic_waitable_timer.test | LINK | 0.304215 | 0.717215 | 1.049505 | — | — | — |
| basic_waitable_timer_select.test | LINK | 0.315460 | 0.735494 | 1.067264 | — | — | — |
| basic_writable_pipe.test | LINK | 0.310036 | 0.732519 | 0.976087 | — | — | — |
| basic_writable_pipe_select.test | LINK | 0.320412 | 0.782724 | 1.181118 | — | — | — |
| bind_allocator.test | RUN | 0.545498 | 2.963390 | 2.682632 | 0.001730 | 0.001886 | 0.001632 |
| bind_allocator_select.test | RUN | 0.558317 | 2.965358 | 2.659162 | 0.001842 | 0.001584 | 0.001654 |
| bind_cancellation_slot.test | RUN | 0.552992 | 2.994587 | 2.747489 | 0.000988 | 0.000992 | 0.001082 |
| bind_cancellation_slot_select.test | RUN | 0.570508 | 3.009512 | 2.623309 | 0.000974 | 0.000970 | 0.000999 |
| bind_executor.test | RUN | 0.383810 | 2.056359 | 1.704949 | 0.001609 | 0.001679 | 0.001770 |
| bind_executor_select.test | RUN | 0.393777 | 2.065965 | 1.697623 | 0.001367 | 0.001534 | 0.001657 |
| bind_immediate_executor.test | RUN | 0.283534 | 1.665092 | 1.087265 | 0.000952 | 0.000930 | 0.000978 |
| bind_immediate_executor_select.test | RUN | 0.292357 | 1.636107 | 1.194617 | 0.000923 | 0.000921 | 0.000961 |
| buffer.test | RUN | 0.169689 | 0.685954 | 0.634391 | 0.000871 | 0.000874 | 0.000937 |
| buffer_select.test | RUN | 0.168983 | 0.688599 | 0.631705 | 0.000928 | 0.000892 | 0.000940 |
| buffer_registration.test | LINK | 0.129807 | 0.339380 | 0.367458 | — | — | — |
| buffer_registration_select.test | LINK | 0.131573 | 0.338672 | 0.362124 | — | — | — |
| buffered_read_stream.test | RUN | 0.654803 | 4.472290 | 3.835086 | 0.001226 | 0.001649 | 0.001745 |
| buffered_read_stream_select.test | RUN | 0.662011 | 4.605556 | 3.909512 | 0.001221 | 0.001549 | 0.001938 |
| buffered_stream.test | RUN | 0.856619 | 7.211344 | 6.902402 | 0.001591 | 0.001549 | 0.001655 |
| buffered_stream_select.test | RUN | 0.932088 | 7.270197 | 6.620814 | 0.001717 | 0.001762 | 0.001672 |
| buffered_write_stream.test | RUN | 1.086568 | 6.248382 | 5.902753 | 0.001770 | 0.001775 | 0.001726 |
| buffered_write_stream_select.test | RUN | 1.099657 | 6.329288 | 5.647747 | 0.001361 | 0.001618 | 0.001825 |
| buffers_iterator.test | RUN | 0.308875 | 0.546726 | 0.893494 | 0.001252 | 0.001230 | 0.001210 |
| buffers_iterator_select.test | RUN | 0.317524 | 0.546983 | 0.886817 | 0.001128 | 0.001248 | 0.001123 |
| cancel_after.test | RUN | 0.890838 | 4.865624 | 4.192547 | 0.003208 | 0.003372 | 0.003798 |
| cancel_after_select.test | RUN | 0.874870 | 4.801448 | 4.156879 | 0.002550 | 0.003142 | 0.003198 |
| cancel_at.test | RUN | 0.803129 | 4.403864 | 4.076063 | 0.002724 | 0.002818 | 0.002976 |
| cancel_at_select.test | RUN | 0.791780 | 4.322229 | 4.050277 | 0.002550 | 0.002607 | 0.003346 |
| cancellation_signal.test | LINK | 0.089883 | 0.197690 | 0.235760 | — | — | — |
| cancellation_signal_select.test | LINK | 0.090795 | 0.197254 | 0.231689 | — | — | — |
| cancellation_state.test | LINK | 0.089770 | 0.197905 | 0.377970 | — | — | — |
| cancellation_state_select.test | LINK | 0.089818 | 0.198952 | 0.380023 | — | — | — |
| cancellation_type.test | LINK | 0.067360 | 0.155468 | 0.291809 | — | — | — |
| cancellation_type_select.test | LINK | 0.104171 | 0.154747 | 0.292189 | — | — | — |
| co_composed.test | RUN | 0.099538 | 0.159454 | 0.295756 | 0.001122 | 0.000891 | 0.001227 |
| co_composed_select.test | RUN | 0.101096 | 0.195030 | 0.292919 | 0.001036 | 0.001230 | 0.001066 |
| co_spawn.test | LINK | 0.101602 | 0.197173 | 0.293279 | — | — | — |
| co_spawn_select.test | LINK | 0.101223 | 0.240213 | 0.298222 | — | — | — |
| completion_condition.test | LINK | 0.134895 | 0.368377 | 0.400771 | — | — | — |
| completion_condition_select.test | LINK | 0.129269 | 0.368073 | 0.397671 | — | — | — |
| compose.test | RUN | 0.680702 | 3.732299 | 3.418098 | 0.001780 | 0.001852 | 0.001704 |
| compose_select.test | RUN | 0.684267 | 3.656359 | 3.370717 | 0.001354 | 0.001304 | 0.001939 |
| composed.test | RUN | 0.642434 | 3.681332 | 3.283114 | 0.001376 | 0.001458 | 0.001541 |
| composed_select.test | RUN | 0.672548 | 3.577171 | 3.249624 | 0.001306 | 0.001321 | 0.001661 |
| config.test | RUN | 0.302958 | 2.366298 | 1.409091 | 0.001346 | 0.001286 | 0.001438 |
| config_select.test | RUN | 0.383210 | 2.416308 | 1.574367 | 0.001464 | 0.001297 | 0.001364 |
| connect.test | LINK | 1.089637 | 7.831995 | 7.070760 | — | — | — |
| connect_select.test | LINK | 1.108027 | 7.807885 | 7.162712 | — | — | — |
| connect_pipe.test | RUN | 0.579447 | 2.961881 | 2.601430 | 0.001414 | 0.001558 | 0.001609 |
| connect_pipe_select.test | RUN | 0.598114 | 3.083095 | 2.772432 | 0.001318 | 0.001394 | 0.001351 |
| consign.test | RUN | 0.512070 | 2.907591 | 2.433975 | 0.001407 | 0.001311 | 0.001477 |
| consign_select.test | RUN | 0.513187 | 2.947848 | 2.382689 | 0.001368 | 0.001083 | 0.001337 |
| coroutine.test | LINK | 0.111013 | 0.278831 | 0.331882 | — | — | — |
| coroutine_select.test | LINK | 0.107095 | 0.280388 | 0.320002 | — | — | — |
| deadline_timer.test | RUN | 0.754087 | 3.821114 | 3.440030 | 0.002318 | 0.002265 | 0.003398 |
| deadline_timer_select.test | RUN | 0.755932 | 3.797288 | 3.441130 | 0.002275 | 0.003412 | 0.002524 |
| deferred.test | RUN | 0.113476 | 0.261214 | 0.322744 | 0.001104 | 0.001215 | 0.001180 |
| deferred_select.test | RUN | 0.118076 | 0.260717 | 0.323759 | 0.001161 | 0.001346 | 0.001192 |
| detached.test | LINK | 0.134389 | 0.288874 | 0.354843 | — | — | — |
| detached_select.test | LINK | 0.137568 | 0.287259 | 0.352291 | — | — | — |
| disposition.test | RUN | 0.161477 | 0.694623 | 0.667263 | 0.000987 | 0.001220 | 0.001543 |
| disposition_select.test | RUN | 0.126396 | 0.688837 | 0.659643 | 0.001029 | 0.001346 | 0.001235 |
| error.test | RUN | 0.117771 | 0.663011 | 0.610836 | 0.000931 | 0.001250 | 0.001531 |
| error_select.test | RUN | 0.115527 | 0.665055 | 0.607390 | 0.000958 | 0.001241 | 0.001415 |
| file_base.test | LINK | 0.143200 | 0.544135 | 0.653130 | — | — | — |
| file_base_select.test | LINK | 0.140764 | 0.544363 | 0.640024 | — | — | — |
| fwd_first.test | LINK | 0.327182 | 0.922442 | 1.179076 | — | — | — |
| fwd_last.test | LINK | 0.324133 | 0.862157 | 1.170556 | — | — | — |
| generic_basic_endpoint.test | LINK | 0.119806 | 0.312404 | 0.419496 | — | — | — |
| generic_basic_endpoint_select.test | LINK | 0.121263 | 0.314471 | 0.419452 | — | — | — |
| generic_datagram_protocol.test | LINK | 0.559984 | 2.956314 | 2.503967 | — | — | — |
| generic_datagram_protocol_select.test | LINK | 0.553345 | 3.042924 | 2.469105 | — | — | — |
| generic_raw_protocol.test | LINK | 0.560228 | 2.959056 | 2.498595 | — | — | — |
| generic_raw_protocol_select.test | LINK | 0.548742 | 3.045934 | 2.462077 | — | — | — |
| generic_seq_packet_protocol.test | LINK | 0.479336 | 2.501430 | 2.113743 | — | — | — |
| generic_seq_packet_protocol_select.test | LINK | 0.476232 | 2.535301 | 2.103192 | — | — | — |
| generic_stream_protocol.test | LINK | 0.511642 | 2.689108 | 2.266881 | — | — | — |
| generic_stream_protocol_select.test | LINK | 0.504571 | 2.742536 | 2.246495 | — | — | — |
| high_resolution_timer.test | LINK | 0.208251 | 0.470663 | 0.650814 | — | — | — |
| high_resolution_timer_select.test | LINK | 0.207624 | 0.486111 | 0.665908 | — | — | — |
| immediate.test | LINK | 0.141835 | 0.362638 | 0.403845 | — | — | — |
| immediate_select.test | LINK | 0.140132 | 0.362702 | 0.397753 | — | — | — |
| inline_executor.test | RUN | 0.175495 | 0.566971 | 0.610168 | 0.000903 | 0.000987 | 0.000949 |
| inline_executor_select.test | RUN | 0.175382 | 0.571674 | 0.602395 | 0.000948 | 0.000971 | 0.000888 |
| inline_or_executor.test | RUN | 0.295917 | 1.750116 | 1.223989 | 0.000984 | 0.000959 | 0.000996 |
| inline_or_executor_select.test | RUN | 0.304265 | 1.792454 | 1.324668 | 0.000934 | 0.000959 | 0.001007 |
| io_context.test | RUN | 0.433029 | 2.687067 | 2.140991 | 0.001803 | 0.001958 | 0.002016 |
| io_context_select.test | RUN | 0.437625 | 2.633998 | 2.140714 | 0.001706 | 0.001724 | 0.001770 |
| io_context_strand.test | RUN | 0.415900 | 2.274135 | 1.851132 | 0.002020 | 0.001828 | 0.001836 |
| io_context_strand_select.test | RUN | 0.419514 | 2.250768 | 1.840455 | 0.001660 | 0.001614 | 0.001646 |
| ip_address.test | LINK | 0.147346 | 0.514670 | 0.514506 | — | — | — |
| ip_address_select.test | LINK | 0.154546 | 0.512845 | 0.510571 | — | — | — |
| ip_address_v4.test | LINK | 0.153708 | 0.541512 | 0.761993 | — | — | — |
| ip_address_v4_select.test | LINK | 0.169191 | 0.541017 | 0.770346 | — | — | — |
| ip_address_v6.test | LINK | 0.178046 | 0.709964 | 1.120533 | — | — | — |
| ip_address_v6_select.test | LINK | 0.172106 | 0.709865 | 1.126330 | — | — | — |
| ip_basic_endpoint.test | LINK | 0.130130 | 0.335020 | 0.715487 | — | — | — |
| ip_basic_endpoint_select.test | LINK | 0.128512 | 0.335071 | 0.709302 | — | — | — |
| ip_basic_resolver.test | LINK | 0.214956 | 0.523497 | 1.064944 | — | — | — |
| ip_basic_resolver_select.test | LINK | 0.220849 | 0.595838 | 1.078789 | — | — | — |
| ip_basic_resolver_entry.test | LINK | 0.070500 | 0.244022 | 0.300689 | — | — | — |
| ip_basic_resolver_entry_select.test | LINK | 0.072189 | 0.237585 | 0.299992 | — | — | — |
| ip_basic_resolver_iterator.test | LINK | 0.128253 | 0.500184 | 0.689565 | — | — | — |
| ip_basic_resolver_iterator_select.test | LINK | 0.130012 | 0.496013 | 0.682101 | — | — | — |
| ip_basic_resolver_query.test | LINK | 0.123311 | 0.473361 | 0.665384 | — | — | — |
| ip_basic_resolver_query_select.test | LINK | 0.123119 | 0.469714 | 0.668203 | — | — | — |
| ip_host_name.test | RUN | 0.133850 | 0.647350 | 0.750665 | 0.000924 | 0.001248 | 0.001266 |
| ip_host_name_select.test | RUN | 0.132814 | 0.644459 | 0.751105 | 0.000919 | 0.001243 | 0.001096 |
| ip_icmp.test | RUN | 0.697669 | 6.271239 | 5.073377 | 0.001059 | 0.001410 | 0.001261 |
| ip_icmp_select.test | RUN | 0.693293 | 6.413691 | 4.964238 | 0.000986 | 0.001348 | 0.001408 |
| ip_multicast.test | RUN | 0.384489 | 3.130021 | 2.792647 | 0.001076 | 0.001436 | 0.001446 |
| ip_multicast_select.test | RUN | 0.391751 | 3.098629 | 2.771898 | 0.001041 | 0.001332 | 0.001473 |
| ip_resolver_query_base.test | LINK | 0.083261 | 0.260436 | 0.317796 | — | — | — |
| ip_resolver_query_base_select.test | LINK | 0.083503 | 0.257728 | 0.316086 | — | — | — |
| ip_tcp.test | RUN | 1.042127 | 9.373775 | 7.786375 | 0.001340 | 0.001756 | 0.001732 |
| ip_tcp_select.test | RUN | 1.047841 | 9.794216 | 7.543205 | 0.001326 | 0.001899 | 0.001726 |
| ip_udp.test | RUN | 0.753601 | 6.656314 | 5.346336 | 0.001104 | 0.001568 | 0.001274 |
| ip_udp_select.test | RUN | 0.749184 | 6.892389 | 5.221401 | 0.001109 | 0.001426 | 0.001307 |
| ip_unicast.test | RUN | 0.359563 | 2.863767 | 2.434755 | 0.001049 | 0.001282 | 0.001265 |
| ip_unicast_select.test | RUN | 0.364832 | 2.885394 | 2.395329 | 0.000993 | 0.001620 | 0.001257 |
| ip_v6_only.test | RUN | 0.368444 | 2.984434 | 2.513939 | 0.001034 | 0.001417 | 0.001446 |
| ip_v6_only_select.test | RUN | 0.373776 | 3.060198 | 2.517968 | 0.001011 | 0.001515 | 0.001375 |
| is_read_buffered.test | RUN | 0.251115 | 0.859246 | 1.325441 | 0.000955 | 0.001341 | 0.001346 |
| is_read_buffered_select.test | RUN | 0.263628 | 0.893541 | 1.342807 | 0.000941 | 0.001230 | 0.001280 |
| is_write_buffered.test | RUN | 0.247065 | 0.867468 | 1.286217 | 0.000976 | 0.001280 | 0.001256 |
| is_write_buffered_select.test | RUN | 0.251004 | 0.881574 | 1.305379 | 0.000898 | 0.001246 | 0.001282 |
| local_basic_endpoint.test | LINK | 0.123328 | 0.475243 | 0.665648 | — | — | — |
| local_basic_endpoint_select.test | LINK | 0.120669 | 0.485721 | 0.658457 | — | — | — |
| local_connect_pair.test | LINK | 0.341417 | 2.892556 | 2.347587 | — | — | — |
| local_connect_pair_select.test | LINK | 0.345119 | 2.849769 | 2.312328 | — | — | — |
| local_datagram_protocol.test | LINK | 0.468375 | 3.795565 | 3.315755 | — | — | — |
| local_datagram_protocol_select.test | LINK | 0.481514 | 3.832956 | 3.267039 | — | — | — |
| local_seq_packet_protocol.test | LINK | 0.480908 | 3.716489 | 3.316081 | — | — | — |
| local_seq_packet_protocol_select.test | LINK | 0.479979 | 3.753266 | 3.297422 | — | — | — |
| local_stream_protocol.test | LINK | 0.442183 | 3.567669 | 3.165813 | — | — | — |
| local_stream_protocol_select.test | LINK | 0.453697 | 3.585340 | 3.106760 | — | — | — |
| placeholders.test | LINK | 0.075474 | 0.256819 | 0.325800 | — | — | — |
| placeholders_select.test | LINK | 0.076570 | 0.259837 | 0.323330 | — | — | — |
| posix_basic_descriptor.test | LINK | 0.214154 | 0.719633 | 0.974259 | — | — | — |
| posix_basic_descriptor_select.test | LINK | 0.222982 | 0.770209 | 1.179179 | — | — | — |
| posix_basic_stream_descriptor.test | LINK | 0.215628 | 0.731802 | 0.972084 | — | — | — |
| posix_basic_stream_descriptor_select.test | LINK | 0.221858 | 0.777313 | 1.164191 | — | — | — |
| posix_descriptor_base.test | LINK | 0.082296 | 0.266693 | 0.322013 | — | — | — |
| posix_descriptor_base_select.test | LINK | 0.082240 | 0.267145 | 0.318898 | — | — | — |
| posix_stream_descriptor.test | LINK | 0.463224 | 3.633979 | 3.072367 | — | — | — |
| posix_stream_descriptor_select.test | LINK | 0.471149 | 3.666100 | 3.138992 | — | — | — |
| prepend.test | RUN | 0.355745 | 2.890335 | 2.438611 | 0.001391 | 0.001482 | 0.001279 |
| prepend_select.test | RUN | 0.454475 | 2.960724 | 2.423098 | 0.001448 | 0.001309 | 0.001300 |
| random_access_file.test | LINK | 0.287262 | 0.655460 | 0.785422 | — | — | — |
| random_access_file_select.test | LINK | 0.298815 | 0.696594 | 0.987321 | — | — | — |
| read.test | RUN | 1.699376 | 18.282947 | 14.234945 | 0.001920 | 0.001826 | 0.002126 |
| read_select.test | RUN | 1.702607 | 18.447067 | 14.435526 | 0.001628 | 0.002122 | 0.001883 |
| read_at.test | RUN | 1.676609 | 23.955113 | 19.214871 | 0.001930 | 0.002106 | 0.002322 |
| read_at_select.test | RUN | 1.698928 | 23.906578 | 19.262801 | 0.001958 | 0.002477 | 0.002277 |
| read_until.test | RUN | 0.868868 | 7.194153 | 5.255108 | 0.001426 | 0.001644 | 0.001594 |
| read_until_select.test | RUN | 0.883679 | 7.186877 | 5.501031 | 0.001414 | 0.001568 | 0.001624 |
| readable_pipe.test | LINK | 0.537471 | 2.954834 | 2.448993 | — | — | — |
| readable_pipe_select.test | LINK | 0.553510 | 3.140058 | 2.612826 | — | — | — |
| recycling_allocator.test | RUN | 0.156212 | 0.417178 | 0.477943 | 0.001141 | 0.001159 | 0.001268 |
| recycling_allocator_select.test | RUN | 0.153615 | 0.413055 | 0.483441 | 0.001150 | 0.001394 | 0.001416 |
| redirect_disposition.test | LINK | 0.706161 | 4.165356 | 3.771920 | — | — | — |
| redirect_disposition_select.test | LINK | 0.709375 | 4.114860 | 3.758645 | — | — | — |
| redirect_error.test | LINK | 0.616037 | 3.425759 | 3.272884 | — | — | — |
| redirect_error_select.test | LINK | 0.630588 | 3.423127 | 3.264066 | — | — | — |
| registered_buffer.test | LINK | 0.155380 | 0.329620 | 0.445354 | — | — | — |
| registered_buffer_select.test | LINK | 0.154755 | 0.329027 | 0.432856 | — | — | — |
| signal_set.test | RUN | 0.512213 | 2.922985 | 2.294274 | 0.001346 | 0.001367 | 0.001427 |
| signal_set_select.test | RUN | 0.535807 | 3.011950 | 2.493141 | 0.001281 | 0.001324 | 0.001290 |
| signal_set_base.test | LINK | 0.121481 | 0.263270 | 0.316179 | — | — | — |
| signal_set_base_select.test | LINK | 0.120368 | 0.262131 | 0.316358 | — | — | — |
| socket_base.test | RUN | 0.624432 | 4.241749 | 3.474806 | 0.001445 | 0.001429 | 0.001591 |
| socket_base_select.test | RUN | 0.630886 | 4.108902 | 3.466530 | 0.001462 | 0.001634 | 0.001541 |
| spawn.test | RUN | 1.107033 | 7.067130 | 6.064843 | 0.001660 | 0.001551 | 0.001647 |
| spawn_select.test | RUN | 1.117063 | 7.035743 | 6.010449 | 0.001330 | 0.001536 | 0.001632 |
| static_thread_pool.test | RUN | 0.275049 | 0.645988 | 0.781239 | 0.001150 | 0.001191 | 0.001261 |
| static_thread_pool_select.test | RUN | 0.286381 | 0.687065 | 1.000973 | 0.001327 | 0.001170 | 0.001271 |
| steady_timer.test | LINK | 0.307877 | 0.707458 | 1.090827 | — | — | — |
| steady_timer_select.test | LINK | 0.316712 | 0.734505 | 1.108126 | — | — | — |
| strand.test | RUN | 0.673921 | 3.924143 | 3.586525 | 0.002121 | 0.002221 | 0.002174 |
| strand_select.test | RUN | 0.691162 | 3.929755 | 3.492746 | 0.001757 | 0.001850 | 0.002200 |
| stream_file.test | LINK | 0.288693 | 0.622864 | 0.828378 | — | — | — |
| stream_file_select.test | LINK | 0.299479 | 0.622151 | 1.006896 | — | — | — |
| streambuf.test | RUN | 0.176927 | 0.367200 | 0.563646 | 0.000887 | 0.001052 | 0.001239 |
| streambuf_select.test | RUN | 0.157680 | 0.365108 | 0.514814 | 0.000976 | 0.000930 | 0.001029 |
| system_timer.test | LINK | 0.445741 | 2.531954 | 2.180977 | — | — | — |
| system_timer_select.test | LINK | 0.450143 | 2.478945 | 2.065687 | — | — | — |
| system_context.test | LINK | 0.186676 | 0.422196 | 0.480304 | — | — | — |
| system_context_select.test | LINK | 0.197457 | 0.447679 | 0.608898 | — | — | — |
| system_executor.test | LINK | 0.258268 | 1.420797 | 0.979346 | — | — | — |
| system_executor_select.test | LINK | 0.265986 | 1.384216 | 1.086842 | — | — | — |
| this_coro.test | LINK | 0.069113 | 0.159617 | 0.188845 | — | — | — |
| this_coro_select.test | LINK | 0.070056 | 0.158520 | 0.188405 | — | — | — |
| thread_pool.test | RUN | 0.309820 | 1.839893 | 1.274088 | 0.001670 | 0.001590 | 0.001666 |
| thread_pool_select.test | RUN | 0.321542 | 1.843165 | 1.373870 | 0.001610 | 0.001602 | 0.001680 |
| time_traits.test | LINK | 0.163222 | 0.348578 | 0.388321 | — | — | — |
| time_traits_select.test | LINK | 0.166564 | 0.335179 | 0.383216 | — | — | — |
| ts_buffer.test | LINK | 0.156618 | 0.551847 | 0.407454 | — | — | — |
| ts_buffer_select.test | LINK | 0.158438 | 0.554364 | 0.409186 | — | — | — |
| ts_executor.test | LINK | 0.226825 | 0.793136 | 0.642743 | — | — | — |
| ts_executor_select.test | LINK | 0.242886 | 0.839093 | 0.793196 | — | — | — |
| ts_internet.test | LINK | 0.244957 | 0.857567 | 1.062402 | — | — | — |
| ts_internet_select.test | LINK | 0.247341 | 0.878663 | 1.249743 | — | — | — |
| ts_io_context.test | LINK | 0.194003 | 0.662986 | 0.793268 | — | — | — |
| ts_io_context_select.test | LINK | 0.201275 | 0.699113 | 0.989177 | — | — | — |
| ts_net.test | LINK | 0.284507 | 1.034545 | 1.583453 | — | — | — |
| ts_net_select.test | LINK | 0.292283 | 1.046885 | 1.632943 | — | — | — |
| ts_netfwd.test | LINK | 0.286226 | 1.028447 | 1.584299 | — | — | — |
| ts_netfwd_select.test | LINK | 0.294014 | 1.051026 | 1.626201 | — | — | — |
| ts_socket.test | LINK | 0.237510 | 0.804990 | 1.206328 | — | — | — |
| ts_socket_select.test | LINK | 0.241028 | 0.819075 | 1.241604 | — | — | — |
| ts_timer.test | LINK | 0.209711 | 0.722356 | 1.052768 | — | — | — |
| ts_timer_select.test | LINK | 0.213619 | 0.742543 | 1.075878 | — | — | — |
| use_awaitable.test | LINK | 0.068741 | 0.237722 | 0.291634 | — | — | — |
| use_awaitable_select.test | LINK | 0.069306 | 0.237320 | 0.296856 | — | — | — |
| wait_traits.test | LINK | 0.069193 | 0.239572 | 0.290286 | — | — | — |
| wait_traits_select.test | LINK | 0.069553 | 0.240631 | 0.294423 | — | — | — |
| windows_basic_object_handle.test | LINK | 0.069222 | 0.241422 | 0.297039 | — | — | — |
| windows_basic_object_handle_select.test | LINK | 0.068840 | 0.241739 | 0.300478 | — | — | — |
| windows_basic_overlapped_handle.test | LINK | 0.068479 | 0.237255 | 0.295133 | — | — | — |
| windows_basic_overlapped_handle_select.test | LINK | 0.069463 | 0.241201 | 0.296334 | — | — | — |
| windows_basic_random_access_handle.test | LINK | 0.067890 | 0.242167 | 0.299057 | — | — | — |
| windows_basic_random_access_handle_select.test | LINK | 0.069634 | 0.242603 | 0.289112 | — | — | — |
| windows_basic_stream_handle.test | LINK | 0.068223 | 0.238720 | 0.286984 | — | — | — |
| windows_basic_stream_handle_select.test | LINK | 0.069063 | 0.240161 | 0.295449 | — | — | — |
| windows_object_handle.test | LINK | 0.195895 | 0.663511 | 0.795935 | — | — | — |
| windows_object_handle_select.test | LINK | 0.204356 | 0.705261 | 1.007543 | — | — | — |
| windows_overlapped_ptr.test | LINK | 0.201688 | 0.696636 | 0.856620 | — | — | — |
| windows_overlapped_ptr_select.test | LINK | 0.210733 | 0.747676 | 1.068263 | — | — | — |
| windows_random_access_handle.test | LINK | 0.194372 | 0.663271 | 0.792174 | — | — | — |
| windows_random_access_handle_select.test | LINK | 0.204846 | 0.715770 | 1.006029 | — | — | — |
| windows_stream_handle.test | LINK | 0.192952 | 0.657647 | 0.787964 | — | — | — |
| windows_stream_handle_select.test | LINK | 0.201615 | 0.715450 | 0.998720 | — | — | — |
| writable_pipe.test | LINK | 0.371917 | 2.942202 | 2.543024 | — | — | — |
| writable_pipe_select.test | LINK | 0.383413 | 3.060803 | 2.671201 | — | — | — |
| write.test | RUN | 1.569021 | 15.346243 | 14.152708 | 0.001862 | 0.001583 | 0.002100 |
| write_select.test | RUN | 1.675705 | 15.329124 | 14.242869 | 0.001914 | 0.001742 | 0.001804 |
| write_at.test | RUN | 1.695275 | 20.333723 | 18.176027 | 0.001958 | 0.002090 | 0.002060 |
| write_at_select.test | RUN | 1.718339 | 20.254545 | 18.398527 | 0.001862 | 0.002090 | 0.001970 |
| any_executor.test | RUN | 0.664167 | 6.565865 | 5.787024 | 0.001580 | 0.001997 | 0.001823 |
| blocking.test | RUN | 1.445310 | 8.959730 | 11.571820 | 0.003337 | 0.003373 | 0.003438 |
| blocking_adaptation.test | RUN | 0.723447 | 3.730696 | 5.271470 | 0.002200 | 0.001937 | 0.002145 |
| context_as.test | RUN | 0.423919 | 2.584934 | 1.787866 | 0.001362 | 0.001430 | 0.001477 |
| executor.test | RUN | 0.105659 | 0.245420 | 0.330644 | 0.001211 | 0.001198 | 0.001295 |
| inline_exception_handling.test | RUN | 1.381427 | 8.035093 | 11.259201 | 0.002379 | 0.002277 | 0.002432 |
| invocable_archetype.test | RUN | 0.104309 | 0.244287 | 0.304342 | 0.001206 | 0.001338 | 0.001364 |
| mapping.test | RUN | 1.464708 | 8.484456 | 11.567253 | 0.003315 | 0.002370 | 0.002430 |
| outstanding_work.test | RUN | 0.659839 | 3.694887 | 4.964155 | 0.002197 | 0.002316 | 0.002372 |
| prefer_only.test | RUN | 0.220503 | 1.444174 | 1.117568 | 0.001306 | 0.001386 | 0.001316 |
| relationship.test | RUN | 0.542852 | 3.548556 | 4.382078 | 0.001487 | 0.002198 | 0.002200 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.990× | 0.992×, 0.987× | 1.010× |
| clang | 0.984× | 0.984×, 0.984× | 1.004× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1364 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44481767416).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| any_completion_executor.test | 2 | 0.001275s | 0.001286s | 0.001250s | byte equality observed |
| any_completion_executor_select.test | 4 | 0.001209s | 0.001232s | 0.001234s | byte equality observed |
| any_completion_handler.test | 10 | 0.001036s | 0.001018s | 0.001023s | byte equality observed |
| any_completion_handler_select.test | 10 | 0.001036s | 0.001029s | 0.001008s | byte equality observed |
| any_io_executor.test | 8 | 0.001205s | 0.001214s | 0.001223s | byte equality observed |
| any_io_executor_select.test | 7 | 0.001213s | 0.001205s | 0.001203s | byte equality observed |
| append.test | 10 | 0.000991s | 0.000992s | 0.000982s | byte equality observed |
| append_select.test | 10 | 0.000972s | 0.000970s | 0.000961s | byte equality observed |
| as_tuple.test | 8 | 0.001026s | 0.001043s | 0.001048s | byte equality observed |
| as_tuple_select.test | 10 | 0.000978s | 0.000959s | 0.000965s | byte equality observed |
| bind_allocator.test | 1 | 0.001504s | 0.001466s | 0.001481s | byte equality observed |
| bind_allocator_select.test | 1 | 0.001164s | 0.001177s | 0.001153s | byte equality observed |
| bind_cancellation_slot.test | 10 | 0.000893s | 0.000883s | 0.000911s | byte equality observed |
| bind_cancellation_slot_select.test | 10 | 0.000817s | 0.000814s | 0.000803s | byte equality observed |
| bind_executor.test | 1 | 0.001493s | 0.001518s | 0.001492s | byte equality observed |
| bind_executor_select.test | 1 | 0.001756s | 0.001743s | 0.001788s | byte equality observed |
| bind_immediate_executor.test | 10 | 0.000907s | 0.000903s | 0.000888s | byte equality observed |
| bind_immediate_executor_select.test | 10 | 0.000873s | 0.000886s | 0.000861s | byte equality observed |
| buffer.test | 10 | 0.000837s | 0.000843s | 0.000842s | byte equality observed |
| buffer_select.test | 10 | 0.000831s | 0.000840s | 0.000832s | byte equality observed |
| buffered_read_stream.test | 10 | 0.001041s | 0.001002s | 0.001017s | byte equality observed |
| buffered_read_stream_select.test | 10 | 0.001051s | 0.000983s | 0.001028s | byte equality observed |
| buffered_stream.test | 10 | 0.001029s | 0.000990s | 0.001024s | byte equality observed |
| buffered_stream_select.test | 10 | 0.001015s | 0.000991s | 0.000974s | byte equality observed |
| buffered_write_stream.test | 10 | 0.001025s | 0.001014s | 0.000994s | byte equality observed |
| buffered_write_stream_select.test | 10 | 0.001012s | 0.000978s | 0.000965s | byte equality observed |
| buffers_iterator.test | 10 | 0.000825s | 0.000840s | 0.000825s | byte equality observed |
| buffers_iterator_select.test | 10 | 0.000760s | 0.000795s | 0.000766s | byte equality observed |
| cancel_after.test | 1 | 0.003329s | 0.003227s | 0.003410s | byte equality observed |
| cancel_after_select.test | 1 | 0.002793s | 0.002719s | 0.002746s | byte equality observed |
| cancel_at.test | 1 | 0.003450s | 0.003219s | 0.003509s | byte equality observed |
| cancel_at_select.test | 1 | 0.003367s | 0.003181s | 0.003401s | byte equality observed |
| co_composed.test | 10 | 0.000854s | 0.000859s | 0.000838s | byte equality observed |
| co_composed_select.test | 10 | 0.000780s | 0.000779s | 0.000787s | byte equality observed |
| compose.test | 1 | 0.001567s | 0.001468s | 0.001622s | byte equality observed |
| compose_select.test | 1 | 0.001262s | 0.001179s | 0.001254s | byte equality observed |
| composed.test | 1 | 0.001888s | 0.001716s | 0.001811s | byte equality observed |
| composed_select.test | 1 | 0.001468s | 0.001377s | 0.001419s | byte equality observed |
| config.test | 10 | 0.000925s | 0.000879s | 0.000905s | byte equality observed |
| config_select.test | 10 | 0.000902s | 0.000884s | 0.000875s | byte equality observed |
| connect_pipe.test | 10 | 0.000907s | 0.000876s | 0.000881s | byte equality observed |
| connect_pipe_select.test | 10 | 0.000892s | 0.000879s | 0.000862s | byte equality observed |
| consign.test | 10 | 0.000871s | 0.000887s | 0.000869s | byte equality observed |
| consign_select.test | 10 | 0.000833s | 0.000839s | 0.000819s | byte equality observed |
| deadline_timer.test | 1 | 0.002298s | 0.002263s | 0.002281s | byte equality observed |
| deadline_timer_select.test | 1 | 0.002031s | 0.001940s | 0.002035s | byte equality observed |
| deferred.test | 10 | 0.000840s | 0.000830s | 0.000846s | byte equality observed |
| deferred_select.test | 10 | 0.000757s | 0.000754s | 0.000748s | byte equality observed |
| disposition.test | 10 | 0.000795s | 0.000794s | 0.000789s | byte equality observed |
| disposition_select.test | 10 | 0.000789s | 0.000787s | 0.000783s | byte equality observed |
| error.test | 10 | 0.000771s | 0.000775s | 0.000759s | byte equality observed |
| error_select.test | 10 | 0.000774s | 0.000764s | 0.000761s | byte equality observed |
| inline_executor.test | 10 | 0.000779s | 0.000769s | 0.000761s | byte equality observed |
| inline_executor_select.test | 10 | 0.000782s | 0.000764s | 0.000755s | byte equality observed |
| inline_or_executor.test | 10 | 0.000790s | 0.000774s | 0.000773s | byte equality observed |
| inline_or_executor_select.test | 10 | 0.000789s | 0.000783s | 0.000764s | byte equality observed |
| io_context.test | 1 | 0.001832s | 0.001734s | 0.001831s | byte equality observed |
| io_context_select.test | 1 | 0.002183s | 0.002062s | 0.002241s | byte equality observed |
| io_context_strand.test | 1 | 0.002097s | 0.002156s | 0.002168s | byte equality observed |
| io_context_strand_select.test | 1 | 0.001832s | 0.001740s | 0.001883s | byte equality observed |
| ip_host_name.test | 10 | 0.000855s | 0.000845s | 0.000827s | byte equality observed |
| ip_host_name_select.test | 10 | 0.000778s | 0.000768s | 0.000744s | byte equality observed |
| ip_icmp.test | 10 | 0.000784s | 0.000783s | 0.000763s | byte equality observed |
| ip_icmp_select.test | 10 | 0.000792s | 0.000796s | 0.000760s | byte equality observed |
| ip_multicast.test | 10 | 0.000854s | 0.000847s | 0.000851s | byte equality observed |
| ip_multicast_select.test | 10 | 0.000831s | 0.000832s | 0.000810s | byte equality observed |
| ip_tcp.test | 10 | 0.001055s | 0.001054s | 0.001031s | byte equality observed |
| ip_tcp_select.test | 10 | 0.001016s | 0.001007s | 0.000995s | byte equality observed |
| ip_udp.test | 10 | 0.000861s | 0.000867s | 0.000847s | byte equality observed |
| ip_udp_select.test | 10 | 0.000855s | 0.000849s | 0.000834s | byte equality observed |
| ip_unicast.test | 10 | 0.000816s | 0.000820s | 0.000809s | byte equality observed |
| ip_unicast_select.test | 10 | 0.000809s | 0.000800s | 0.000793s | byte equality observed |
| ip_v6_only.test | 10 | 0.000816s | 0.000810s | 0.000805s | byte equality observed |
| ip_v6_only_select.test | 10 | 0.000810s | 0.000803s | 0.000794s | byte equality observed |
| is_read_buffered.test | 10 | 0.000765s | 0.000743s | 0.000750s | byte equality observed |
| is_read_buffered_select.test | 10 | 0.000759s | 0.000748s | 0.000751s | byte equality observed |
| is_write_buffered.test | 10 | 0.000757s | 0.000751s | 0.000757s | byte equality observed |
| is_write_buffered_select.test | 10 | 0.000755s | 0.000751s | 0.000762s | byte equality observed |
| prepend.test | 10 | 0.000807s | 0.000830s | 0.000806s | byte equality observed |
| prepend_select.test | 10 | 0.000787s | 0.000807s | 0.000785s | byte equality observed |
| read.test | 10 | 0.001103s | 0.001114s | 0.001069s | byte equality observed |
| read_at.test | 10 | 0.001314s | 0.001452s | 0.001319s | byte equality observed |
| read_at_select.test | 10 | 0.001317s | 0.001487s | 0.001299s | byte equality observed |
| read_select.test | 10 | 0.001099s | 0.001169s | 0.001066s | byte equality observed |
| read_until.test | 10 | 0.000915s | 0.000962s | 0.000902s | byte equality observed |
| read_until_select.test | 10 | 0.000912s | 0.000940s | 0.000897s | byte equality observed |
| recycling_allocator.test | 10 | 0.000812s | 0.000806s | 0.000750s | byte equality observed |
| recycling_allocator_select.test | 10 | 0.000832s | 0.000822s | 0.000786s | byte equality observed |
| signal_set.test | 10 | 0.000848s | 0.000834s | 0.000824s | byte equality observed |
| signal_set_select.test | 10 | 0.000838s | 0.000836s | 0.000830s | byte equality observed |
| socket_base.test | 10 | 0.000935s | 0.000917s | 0.000901s | byte equality observed |
| socket_base_select.test | 10 | 0.000902s | 0.000918s | 0.000860s | byte equality observed |
| spawn.test | 10 | 0.000995s | 0.000959s | 0.001018s | byte equality observed |
| spawn_select.test | 10 | 0.000981s | 0.000971s | 0.000995s | byte equality observed |
| static_thread_pool.test | 10 | 0.000825s | 0.000810s | 0.000800s | byte equality observed |
| static_thread_pool_select.test | 10 | 0.000825s | 0.000769s | 0.000765s | byte equality observed |
| strand.test | 1 | 0.001752s | 0.001671s | 0.001762s | byte equality observed |
| strand_select.test | 1 | 0.001485s | 0.001494s | 0.001495s | byte equality observed |
| streambuf.test | 10 | 0.000900s | 0.000879s | 0.000878s | byte equality observed |
| streambuf_select.test | 10 | 0.000854s | 0.000831s | 0.000840s | byte equality observed |
| thread_pool.test | 10 | 0.001552s | 0.001559s | 0.001569s | byte equality observed |
| thread_pool_select.test | 10 | 0.001531s | 0.001542s | 0.001540s | byte equality observed |
| write.test | 10 | 0.001221s | 0.001189s | 0.001199s | byte equality observed |
| write_at.test | 10 | 0.001314s | 0.001307s | 0.001288s | byte equality observed |
| write_at_select.test | 10 | 0.001305s | 0.001334s | 0.001295s | byte equality observed |
| write_select.test | 10 | 0.001195s | 0.001163s | 0.001196s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44481767416).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
