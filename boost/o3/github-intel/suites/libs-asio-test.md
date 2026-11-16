# libs/asio/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| any_completion_executor.test | RUN | 0.512227 | 3.253325 | 2.952671 | 0.001844 | 0.001879 | 0.002023 |
| any_completion_executor_select.test | RUN | 0.528183 | 3.454056 | 3.110602 | 0.001798 | 0.001744 | 0.001921 |
| any_completion_handler.test | RUN | 0.594727 | 3.109282 | 2.779251 | 0.001799 | 0.001429 | 0.001513 |
| any_completion_handler_select.test | RUN | 0.595267 | 3.182932 | 2.877130 | 0.001426 | 0.001393 | 0.001360 |
| any_io_executor.test | RUN | 0.555748 | 3.658988 | 3.270571 | 0.001695 | 0.001804 | 0.001812 |
| any_io_executor_select.test | RUN | 0.567038 | 3.629092 | 3.343591 | 0.001492 | 0.001747 | 0.001978 |
| append.test | RUN | 0.517572 | 2.961460 | 2.458054 | 0.001360 | 0.001338 | 0.001292 |
| append_select.test | RUN | 0.535004 | 2.991995 | 2.397484 | 0.001280 | 0.001321 | 0.001436 |
| as_tuple.test | RUN | 0.679180 | 3.522212 | 3.444180 | 0.001496 | 0.001394 | 0.001574 |
| as_tuple_select.test | RUN | 0.690216 | 3.503592 | 3.437592 | 0.001519 | 0.001379 | 0.001573 |
| associated_allocator.test | LINK | 0.131934 | 0.286942 | 0.358586 | — | — | — |
| associated_allocator_select.test | LINK | 0.128345 | 0.282846 | 0.353777 | — | — | — |
| associated_cancellation_slot.test | LINK | 0.141723 | 0.310293 | 0.383558 | — | — | — |
| associated_cancellation_slot_select.test | LINK | 0.140396 | 0.316466 | 0.384468 | — | — | — |
| associated_executor.test | LINK | 0.210024 | 0.538643 | 0.634501 | — | — | — |
| associated_executor_select.test | LINK | 0.210948 | 0.543246 | 0.637734 | — | — | — |
| associated_immediate_executor.test | LINK | 0.190583 | 0.502601 | 0.580975 | — | — | — |
| associated_immediate_executor_select.test | LINK | 0.188129 | 0.504125 | 0.586617 | — | — | — |
| associator.test | LINK | 0.100331 | 0.241868 | 0.298243 | — | — | — |
| associator_select.test | LINK | 0.100230 | 0.235339 | 0.301908 | — | — | — |
| awaitable.test | LINK | 0.098685 | 0.238815 | 0.297087 | — | — | — |
| awaitable_select.test | LINK | 0.102160 | 0.235800 | 0.287311 | — | — | — |
| basic_datagram_socket.test | LINK | 0.320113 | 0.764489 | 1.124946 | — | — | — |
| basic_datagram_socket_select.test | LINK | 0.329688 | 0.774076 | 1.141276 | — | — | — |
| basic_deadline_timer.test | LINK | 0.374298 | 0.902908 | 1.273958 | — | — | — |
| basic_deadline_timer_select.test | LINK | 0.403373 | 0.908311 | 1.304850 | — | — | — |
| basic_file.test | LINK | 0.105466 | 0.236938 | 0.288597 | — | — | — |
| basic_file_select.test | LINK | 0.106805 | 0.241745 | 0.292568 | — | — | — |
| basic_random_access_file.test | LINK | 0.101791 | 0.239658 | 0.295481 | — | — | — |
| basic_random_access_file_select.test | LINK | 0.101532 | 0.241571 | 0.296335 | — | — | — |
| basic_raw_socket.test | LINK | 0.325676 | 0.760524 | 1.114617 | — | — | — |
| basic_raw_socket_select.test | LINK | 0.336118 | 0.792491 | 1.137976 | — | — | — |
| basic_readable_pipe.test | LINK | 0.313234 | 0.725870 | 0.970599 | — | — | — |
| basic_readable_pipe_select.test | LINK | 0.330263 | 0.781619 | 1.181688 | — | — | — |
| basic_seq_packet_socket.test | LINK | 0.329204 | 0.766041 | 1.111428 | — | — | — |
| basic_seq_packet_socket_select.test | LINK | 0.329266 | 0.777304 | 1.153375 | — | — | — |
| basic_signal_set.test | LINK | 0.302102 | 0.702497 | 0.881657 | — | — | — |
| basic_signal_set_select.test | LINK | 0.314005 | 0.744184 | 1.096181 | — | — | — |
| basic_socket_acceptor.test | LINK | 0.329616 | 0.768866 | 1.118523 | — | — | — |
| basic_socket_acceptor_select.test | LINK | 0.337628 | 0.788328 | 1.144389 | — | — | — |
| basic_stream_file.test | LINK | 0.100700 | 0.240405 | 0.300131 | — | — | — |
| basic_stream_file_select.test | LINK | 0.099726 | 0.241706 | 0.290913 | — | — | — |
| basic_stream_socket.test | LINK | 0.323706 | 0.762630 | 1.122064 | — | — | — |
| basic_stream_socket_select.test | LINK | 0.330907 | 0.789612 | 1.150407 | — | — | — |
| basic_streambuf.test | LINK | 0.157386 | 0.342287 | 0.429448 | — | — | — |
| basic_streambuf_select.test | LINK | 0.157988 | 0.347768 | 0.431068 | — | — | — |
| basic_waitable_timer.test | LINK | 0.306175 | 0.721993 | 1.036258 | — | — | — |
| basic_waitable_timer_select.test | LINK | 0.312322 | 0.737190 | 1.075377 | — | — | — |
| basic_writable_pipe.test | LINK | 0.314284 | 0.735074 | 0.973398 | — | — | — |
| basic_writable_pipe_select.test | LINK | 0.321304 | 0.774923 | 1.185151 | — | — | — |
| bind_allocator.test | RUN | 0.545747 | 2.965039 | 2.640590 | 0.001765 | 0.001880 | 0.001691 |
| bind_allocator_select.test | RUN | 0.554726 | 2.983166 | 2.663686 | 0.001690 | 0.001303 | 0.001710 |
| bind_cancellation_slot.test | RUN | 0.562325 | 2.976334 | 2.696084 | 0.001004 | 0.000962 | 0.000997 |
| bind_cancellation_slot_select.test | RUN | 0.572618 | 3.021066 | 2.570640 | 0.000992 | 0.001045 | 0.000994 |
| bind_executor.test | RUN | 0.381496 | 2.063630 | 1.680923 | 0.001713 | 0.001647 | 0.001560 |
| bind_executor_select.test | RUN | 0.391265 | 2.076289 | 1.648892 | 0.001370 | 0.001479 | 0.001555 |
| bind_immediate_executor.test | RUN | 0.282353 | 1.685175 | 1.072054 | 0.000919 | 0.000967 | 0.000994 |
| bind_immediate_executor_select.test | RUN | 0.290702 | 1.649750 | 1.165120 | 0.000946 | 0.000969 | 0.000951 |
| buffer.test | RUN | 0.173799 | 0.695673 | 0.623911 | 0.000923 | 0.000920 | 0.000911 |
| buffer_select.test | RUN | 0.170467 | 0.690192 | 0.616186 | 0.000914 | 0.000953 | 0.000939 |
| buffer_registration.test | LINK | 0.127041 | 0.342681 | 0.367586 | — | — | — |
| buffer_registration_select.test | LINK | 0.128202 | 0.341060 | 0.364877 | — | — | — |
| buffered_read_stream.test | RUN | 0.652920 | 4.551653 | 3.861284 | 0.001190 | 0.001631 | 0.001604 |
| buffered_read_stream_select.test | RUN | 0.661333 | 4.611201 | 3.700590 | 0.001186 | 0.001550 | 0.001549 |
| buffered_stream.test | RUN | 0.905044 | 7.289070 | 6.825147 | 0.001751 | 0.001718 | 0.001751 |
| buffered_stream_select.test | RUN | 0.912742 | 7.297431 | 6.542232 | 0.001529 | 0.001692 | 0.001672 |
| buffered_write_stream.test | RUN | 1.089531 | 6.279440 | 5.861493 | 0.001633 | 0.001819 | 0.001775 |
| buffered_write_stream_select.test | RUN | 1.104120 | 6.375741 | 5.630226 | 0.001482 | 0.001756 | 0.001780 |
| buffers_iterator.test | RUN | 0.321407 | 0.548535 | 0.895368 | 0.001209 | 0.001173 | 0.001322 |
| buffers_iterator_select.test | RUN | 0.321315 | 0.548309 | 0.893031 | 0.001156 | 0.001234 | 0.001312 |
| cancel_after.test | RUN | 0.909406 | 4.909492 | 4.209533 | 0.003342 | 0.003508 | 0.003831 |
| cancel_after_select.test | RUN | 0.916871 | 4.863333 | 4.125559 | 0.002785 | 0.003368 | 0.003484 |
| cancel_at.test | RUN | 0.789754 | 4.399758 | 4.129867 | 0.003086 | 0.003042 | 0.003375 |
| cancel_at_select.test | RUN | 0.787167 | 4.364840 | 4.037469 | 0.002810 | 0.002852 | 0.003157 |
| cancellation_signal.test | LINK | 0.091500 | 0.204299 | 0.243629 | — | — | — |
| cancellation_signal_select.test | LINK | 0.091510 | 0.200171 | 0.257080 | — | — | — |
| cancellation_state.test | LINK | 0.091636 | 0.201100 | 0.328940 | — | — | — |
| cancellation_state_select.test | LINK | 0.091845 | 0.199341 | 0.361858 | — | — | — |
| cancellation_type.test | LINK | 0.103920 | 0.158219 | 0.298960 | — | — | — |
| cancellation_type_select.test | LINK | 0.105178 | 0.156788 | 0.295828 | — | — | — |
| co_composed.test | RUN | 0.106548 | 0.158915 | 0.292414 | 0.001104 | 0.001125 | 0.001186 |
| co_composed_select.test | RUN | 0.104799 | 0.168966 | 0.288525 | 0.001055 | 0.001314 | 0.001203 |
| co_spawn.test | LINK | 0.106169 | 0.223413 | 0.297831 | — | — | — |
| co_spawn_select.test | LINK | 0.103657 | 0.236029 | 0.294076 | — | — | — |
| completion_condition.test | LINK | 0.142496 | 0.368910 | 0.395160 | — | — | — |
| completion_condition_select.test | LINK | 0.138476 | 0.362241 | 0.401291 | — | — | — |
| compose.test | RUN | 0.680785 | 3.748873 | 3.365095 | 0.001976 | 0.001935 | 0.001805 |
| compose_select.test | RUN | 0.689440 | 3.684283 | 3.344807 | 0.001710 | 0.001709 | 0.001578 |
| composed.test | RUN | 0.673490 | 3.685889 | 3.286394 | 0.001446 | 0.001413 | 0.001604 |
| composed_select.test | RUN | 0.687456 | 3.647849 | 3.223339 | 0.001304 | 0.001451 | 0.001452 |
| config.test | RUN | 0.356262 | 2.430773 | 1.423208 | 0.001278 | 0.001398 | 0.001314 |
| config_select.test | RUN | 0.386179 | 2.515488 | 1.602799 | 0.001410 | 0.001458 | 0.001407 |
| connect.test | LINK | 1.103608 | 7.887445 | 6.989074 | — | — | — |
| connect_select.test | LINK | 1.111969 | 7.926445 | 7.003842 | — | — | — |
| connect_pipe.test | RUN | 0.574820 | 3.000673 | 2.605152 | 0.001237 | 0.001258 | 0.001428 |
| connect_pipe_select.test | RUN | 0.601348 | 3.088220 | 2.762764 | 0.001144 | 0.001289 | 0.001224 |
| consign.test | RUN | 0.520474 | 2.912863 | 2.372001 | 0.001573 | 0.001340 | 0.001290 |
| consign_select.test | RUN | 0.522865 | 2.925853 | 2.355456 | 0.001319 | 0.001294 | 0.001308 |
| coroutine.test | LINK | 0.111712 | 0.277866 | 0.329192 | — | — | — |
| coroutine_select.test | LINK | 0.110891 | 0.282870 | 0.328793 | — | — | — |
| deadline_timer.test | RUN | 0.764627 | 3.864620 | 3.383170 | 0.002862 | 0.002851 | 0.003224 |
| deadline_timer_select.test | RUN | 0.765231 | 3.799932 | 3.349312 | 0.002441 | 0.002437 | 0.002255 |
| deferred.test | RUN | 0.117525 | 0.264884 | 0.311085 | 0.001298 | 0.001223 | 0.001338 |
| deferred_select.test | RUN | 0.116341 | 0.258393 | 0.310415 | 0.001164 | 0.001315 | 0.001308 |
| detached.test | LINK | 0.130880 | 0.286881 | 0.345239 | — | — | — |
| detached_select.test | LINK | 0.130534 | 0.289022 | 0.347280 | — | — | — |
| disposition.test | RUN | 0.126859 | 0.701015 | 0.654906 | 0.001008 | 0.001318 | 0.001445 |
| disposition_select.test | RUN | 0.126434 | 0.698136 | 0.656845 | 0.001002 | 0.001310 | 0.001407 |
| error.test | RUN | 0.115754 | 0.675856 | 0.579837 | 0.000980 | 0.001247 | 0.001471 |
| error_select.test | RUN | 0.116474 | 0.674699 | 0.581236 | 0.000936 | 0.001283 | 0.001353 |
| file_base.test | LINK | 0.146646 | 0.553223 | 0.640283 | — | — | — |
| file_base_select.test | LINK | 0.145673 | 0.559015 | 0.580866 | — | — | — |
| fwd_first.test | LINK | 0.334716 | 0.863372 | 1.151397 | — | — | — |
| fwd_last.test | LINK | 0.333078 | 0.805357 | 1.149667 | — | — | — |
| generic_basic_endpoint.test | LINK | 0.121997 | 0.315690 | 0.414081 | — | — | — |
| generic_basic_endpoint_select.test | LINK | 0.122527 | 0.315185 | 0.410133 | — | — | — |
| generic_datagram_protocol.test | LINK | 0.565204 | 2.990434 | 2.432427 | — | — | — |
| generic_datagram_protocol_select.test | LINK | 0.561316 | 3.078459 | 2.399309 | — | — | — |
| generic_raw_protocol.test | LINK | 0.554065 | 2.988011 | 2.480937 | — | — | — |
| generic_raw_protocol_select.test | LINK | 0.551772 | 3.068330 | 2.426986 | — | — | — |
| generic_seq_packet_protocol.test | LINK | 0.485795 | 2.494210 | 2.086583 | — | — | — |
| generic_seq_packet_protocol_select.test | LINK | 0.484296 | 2.524070 | 2.075489 | — | — | — |
| generic_stream_protocol.test | LINK | 0.513492 | 2.671444 | 2.248444 | — | — | — |
| generic_stream_protocol_select.test | LINK | 0.512062 | 2.738619 | 2.252834 | — | — | — |
| high_resolution_timer.test | LINK | 0.208371 | 0.462159 | 0.650452 | — | — | — |
| high_resolution_timer_select.test | LINK | 0.210862 | 0.483614 | 0.663255 | — | — | — |
| immediate.test | LINK | 0.141306 | 0.361705 | 0.398898 | — | — | — |
| immediate_select.test | LINK | 0.140248 | 0.363972 | 0.398143 | — | — | — |
| inline_executor.test | RUN | 0.177892 | 0.566038 | 0.605108 | 0.000984 | 0.000945 | 0.000934 |
| inline_executor_select.test | RUN | 0.177766 | 0.568132 | 0.601042 | 0.000900 | 0.000903 | 0.000883 |
| inline_or_executor.test | RUN | 0.295836 | 1.720609 | 1.201730 | 0.001014 | 0.000965 | 0.000966 |
| inline_or_executor_select.test | RUN | 0.301903 | 1.774935 | 1.308003 | 0.000914 | 0.000943 | 0.000935 |
| io_context.test | RUN | 0.442809 | 2.649381 | 2.100259 | 0.002116 | 0.001882 | 0.002071 |
| io_context_select.test | RUN | 0.444794 | 2.611993 | 2.088436 | 0.001820 | 0.001738 | 0.001867 |
| io_context_strand.test | RUN | 0.421347 | 2.244801 | 1.857471 | 0.001796 | 0.001702 | 0.001777 |
| io_context_strand_select.test | RUN | 0.423892 | 2.220131 | 1.831076 | 0.001571 | 0.001542 | 0.001763 |
| ip_address.test | LINK | 0.146284 | 0.509353 | 0.509625 | — | — | — |
| ip_address_select.test | LINK | 0.145611 | 0.505242 | 0.511387 | — | — | — |
| ip_address_v4.test | LINK | 0.147971 | 0.535699 | 0.882407 | — | — | — |
| ip_address_v4_select.test | LINK | 0.147949 | 0.537447 | 0.892007 | — | — | — |
| ip_address_v6.test | LINK | 0.171076 | 0.710323 | 1.111666 | — | — | — |
| ip_address_v6_select.test | LINK | 0.170981 | 0.703281 | 1.120259 | — | — | — |
| ip_basic_endpoint.test | LINK | 0.125758 | 0.337593 | 0.711304 | — | — | — |
| ip_basic_endpoint_select.test | LINK | 0.125808 | 0.335430 | 0.694388 | — | — | — |
| ip_basic_resolver.test | LINK | 0.209052 | 0.494529 | 1.062213 | — | — | — |
| ip_basic_resolver_select.test | LINK | 0.212515 | 0.623046 | 1.102073 | — | — | — |
| ip_basic_resolver_entry.test | LINK | 0.068638 | 0.244147 | 0.297245 | — | — | — |
| ip_basic_resolver_entry_select.test | LINK | 0.067691 | 0.234817 | 0.291578 | — | — | — |
| ip_basic_resolver_iterator.test | LINK | 0.129314 | 0.489914 | 0.690255 | — | — | — |
| ip_basic_resolver_iterator_select.test | LINK | 0.126616 | 0.487932 | 0.690792 | — | — | — |
| ip_basic_resolver_query.test | LINK | 0.122398 | 0.476080 | 0.663327 | — | — | — |
| ip_basic_resolver_query_select.test | LINK | 0.121614 | 0.465189 | 0.666987 | — | — | — |
| ip_host_name.test | RUN | 0.130859 | 0.631548 | 0.758690 | 0.000930 | 0.001382 | 0.001180 |
| ip_host_name_select.test | RUN | 0.129777 | 0.624640 | 0.760046 | 0.000899 | 0.001240 | 0.001218 |
| ip_icmp.test | RUN | 0.687093 | 6.223469 | 5.182814 | 0.000988 | 0.001342 | 0.001344 |
| ip_icmp_select.test | RUN | 0.689944 | 6.302619 | 5.035856 | 0.000896 | 0.001307 | 0.001199 |
| ip_multicast.test | RUN | 0.380759 | 3.082183 | 2.851111 | 0.001027 | 0.001319 | 0.001489 |
| ip_multicast_select.test | RUN | 0.389973 | 3.030854 | 2.807011 | 0.000995 | 0.001430 | 0.001387 |
| ip_resolver_query_base.test | LINK | 0.079661 | 0.258254 | 0.311243 | — | — | — |
| ip_resolver_query_base_select.test | LINK | 0.079144 | 0.255876 | 0.312385 | — | — | — |
| ip_tcp.test | RUN | 1.027826 | 9.171891 | 7.946813 | 0.001318 | 0.001570 | 0.001960 |
| ip_tcp_select.test | RUN | 1.029459 | 9.437780 | 7.672291 | 0.001175 | 0.001777 | 0.002058 |
| ip_udp.test | RUN | 0.755560 | 6.552480 | 5.362366 | 0.001051 | 0.001483 | 0.001392 |
| ip_udp_select.test | RUN | 0.748276 | 6.645197 | 5.243329 | 0.001088 | 0.001557 | 0.001495 |
| ip_unicast.test | RUN | 0.354220 | 2.826883 | 2.477504 | 0.001013 | 0.001484 | 0.001183 |
| ip_unicast_select.test | RUN | 0.358064 | 2.857990 | 2.463293 | 0.001149 | 0.001357 | 0.001286 |
| ip_v6_only.test | RUN | 0.365378 | 2.911571 | 2.595307 | 0.001029 | 0.001496 | 0.001599 |
| ip_v6_only_select.test | RUN | 0.372208 | 2.964130 | 2.529339 | 0.001025 | 0.001304 | 0.001398 |
| is_read_buffered.test | RUN | 0.248178 | 0.843358 | 1.323664 | 0.000923 | 0.001353 | 0.001311 |
| is_read_buffered_select.test | RUN | 0.253412 | 0.872863 | 1.353243 | 0.000970 | 0.001232 | 0.001280 |
| is_write_buffered.test | RUN | 0.247300 | 0.852036 | 1.278797 | 0.000911 | 0.001202 | 0.001256 |
| is_write_buffered_select.test | RUN | 0.250596 | 0.856532 | 1.307262 | 0.000900 | 0.001176 | 0.001285 |
| local_basic_endpoint.test | LINK | 0.122969 | 0.472515 | 0.664664 | — | — | — |
| local_basic_endpoint_select.test | LINK | 0.121722 | 0.474836 | 0.669973 | — | — | — |
| local_connect_pair.test | LINK | 0.342699 | 2.837162 | 2.365225 | — | — | — |
| local_connect_pair_select.test | LINK | 0.349850 | 2.828419 | 2.329751 | — | — | — |
| local_datagram_protocol.test | LINK | 0.469918 | 3.753978 | 3.367101 | — | — | — |
| local_datagram_protocol_select.test | LINK | 0.479808 | 3.775461 | 3.290227 | — | — | — |
| local_seq_packet_protocol.test | LINK | 0.481194 | 3.666444 | 3.329719 | — | — | — |
| local_seq_packet_protocol_select.test | LINK | 0.484419 | 3.701495 | 3.305202 | — | — | — |
| local_stream_protocol.test | LINK | 0.441887 | 3.478324 | 3.174593 | — | — | — |
| local_stream_protocol_select.test | LINK | 0.453548 | 3.518170 | 3.120178 | — | — | — |
| placeholders.test | LINK | 0.076175 | 0.254140 | 0.329639 | — | — | — |
| placeholders_select.test | LINK | 0.075205 | 0.251132 | 0.331220 | — | — | — |
| posix_basic_descriptor.test | LINK | 0.211105 | 0.708830 | 0.987677 | — | — | — |
| posix_basic_descriptor_select.test | LINK | 0.219102 | 0.761351 | 1.189339 | — | — | — |
| posix_basic_stream_descriptor.test | LINK | 0.212080 | 0.713580 | 0.974278 | — | — | — |
| posix_basic_stream_descriptor_select.test | LINK | 0.217812 | 0.753737 | 1.180307 | — | — | — |
| posix_descriptor_base.test | LINK | 0.080886 | 0.270118 | 0.327965 | — | — | — |
| posix_descriptor_base_select.test | LINK | 0.080880 | 0.271782 | 0.322233 | — | — | — |
| posix_stream_descriptor.test | LINK | 0.451827 | 3.513417 | 3.121600 | — | — | — |
| posix_stream_descriptor_select.test | LINK | 0.462733 | 3.570583 | 3.158444 | — | — | — |
| prepend.test | RUN | 0.368251 | 2.867391 | 2.444838 | 0.001357 | 0.001222 | 0.001388 |
| prepend_select.test | RUN | 0.415190 | 2.916357 | 2.450594 | 0.001254 | 0.001376 | 0.001285 |
| random_access_file.test | LINK | 0.296734 | 0.638934 | 0.801289 | — | — | — |
| random_access_file_select.test | LINK | 0.304027 | 0.679476 | 0.990076 | — | — | — |
| read.test | RUN | 1.698889 | 17.964371 | 14.296403 | 0.001914 | 0.001688 | 0.002068 |
| read_select.test | RUN | 1.701075 | 17.899974 | 14.456935 | 0.001639 | 0.001738 | 0.002102 |
| read_at.test | RUN | 1.681844 | 23.038893 | 19.398394 | 0.001954 | 0.002290 | 0.002335 |
| read_at_select.test | RUN | 1.698212 | 23.014983 | 19.284281 | 0.002070 | 0.002370 | 0.002325 |
| read_until.test | RUN | 0.872116 | 6.960760 | 5.227911 | 0.001468 | 0.001354 | 0.001501 |
| read_until_select.test | RUN | 0.884977 | 7.015646 | 5.404473 | 0.001592 | 0.001391 | 0.001583 |
| readable_pipe.test | LINK | 0.534306 | 2.908702 | 2.442955 | — | — | — |
| readable_pipe_select.test | LINK | 0.551918 | 3.048756 | 2.581445 | — | — | — |
| recycling_allocator.test | RUN | 0.158511 | 0.407501 | 0.475598 | 0.001237 | 0.001180 | 0.001317 |
| recycling_allocator_select.test | RUN | 0.160193 | 0.402330 | 0.475994 | 0.001158 | 0.001206 | 0.001407 |
| redirect_disposition.test | LINK | 0.704387 | 4.054963 | 3.730712 | — | — | — |
| redirect_disposition_select.test | LINK | 0.712796 | 4.004890 | 3.737666 | — | — | — |
| redirect_error.test | LINK | 0.619489 | 3.345008 | 3.293735 | — | — | — |
| redirect_error_select.test | LINK | 0.629952 | 3.329848 | 3.293680 | — | — | — |
| registered_buffer.test | LINK | 0.152960 | 0.324932 | 0.463029 | — | — | — |
| registered_buffer_select.test | LINK | 0.150666 | 0.321390 | 0.432249 | — | — | — |
| signal_set.test | RUN | 0.507150 | 2.862122 | 2.312544 | 0.001221 | 0.001318 | 0.001510 |
| signal_set_select.test | RUN | 0.530864 | 2.971785 | 2.495905 | 0.001166 | 0.001306 | 0.001379 |
| signal_set_base.test | LINK | 0.122547 | 0.261979 | 0.315094 | — | — | — |
| signal_set_base_select.test | LINK | 0.118954 | 0.265705 | 0.310006 | — | — | — |
| socket_base.test | RUN | 0.632307 | 4.115079 | 3.534033 | 0.001475 | 0.001368 | 0.001720 |
| socket_base_select.test | RUN | 0.641501 | 4.024109 | 3.491367 | 0.001413 | 0.001367 | 0.001511 |
| spawn.test | RUN | 1.114361 | 6.905384 | 6.139598 | 0.001504 | 0.001648 | 0.001844 |
| spawn_select.test | RUN | 1.127688 | 6.858437 | 6.103715 | 0.001373 | 0.001494 | 0.001870 |
| static_thread_pool.test | RUN | 0.278503 | 0.640484 | 0.777302 | 0.001475 | 0.001267 | 0.001488 |
| static_thread_pool_select.test | RUN | 0.290033 | 0.670653 | 0.994972 | 0.001198 | 0.001272 | 0.001421 |
| steady_timer.test | LINK | 0.314397 | 0.703469 | 1.117527 | — | — | — |
| steady_timer_select.test | LINK | 0.317866 | 0.712773 | 1.122576 | — | — | — |
| strand.test | RUN | 0.681103 | 3.869158 | 3.641357 | 0.001929 | 0.001903 | 0.002111 |
| strand_select.test | RUN | 0.689987 | 3.856342 | 3.558839 | 0.001991 | 0.002044 | 0.002254 |
| stream_file.test | LINK | 0.286797 | 0.632855 | 0.839133 | — | — | — |
| stream_file_select.test | LINK | 0.297937 | 0.579882 | 1.039374 | — | — | — |
| streambuf.test | RUN | 0.181274 | 0.362060 | 0.566518 | 0.000897 | 0.000900 | 0.001200 |
| streambuf_select.test | RUN | 0.153958 | 0.361183 | 0.567017 | 0.000852 | 0.000921 | 0.001515 |
| system_timer.test | LINK | 0.441460 | 2.465808 | 2.171970 | — | — | — |
| system_timer_select.test | LINK | 0.445160 | 2.412757 | 2.079952 | — | — | — |
| system_context.test | LINK | 0.187987 | 0.412480 | 0.487263 | — | — | — |
| system_context_select.test | LINK | 0.195728 | 0.441614 | 0.606474 | — | — | — |
| system_executor.test | LINK | 0.255582 | 1.396443 | 0.987636 | — | — | — |
| system_executor_select.test | LINK | 0.262322 | 1.364016 | 1.090261 | — | — | — |
| this_coro.test | LINK | 0.067009 | 0.154402 | 0.191909 | — | — | — |
| this_coro_select.test | LINK | 0.067142 | 0.153618 | 0.190424 | — | — | — |
| thread_pool.test | RUN | 0.308925 | 1.798258 | 1.283931 | 0.001523 | 0.001544 | 0.001740 |
| thread_pool_select.test | RUN | 0.316588 | 1.820252 | 1.385301 | 0.001553 | 0.001508 | 0.001688 |
| time_traits.test | LINK | 0.160372 | 0.323958 | 0.396361 | — | — | — |
| time_traits_select.test | LINK | 0.159530 | 0.325552 | 0.391043 | — | — | — |
| ts_buffer.test | LINK | 0.149610 | 0.445153 | 0.411375 | — | — | — |
| ts_buffer_select.test | LINK | 0.148394 | 0.557095 | 0.413791 | — | — | — |
| ts_executor.test | LINK | 0.216975 | 0.771559 | 0.658113 | — | — | — |
| ts_executor_select.test | LINK | 0.224422 | 0.810552 | 0.802343 | — | — | — |
| ts_internet.test | LINK | 0.240587 | 0.847197 | 1.118885 | — | — | — |
| ts_internet_select.test | LINK | 0.242608 | 0.856987 | 1.172835 | — | — | — |
| ts_io_context.test | LINK | 0.191468 | 0.651204 | 0.792272 | — | — | — |
| ts_io_context_select.test | LINK | 0.195761 | 0.678224 | 0.993878 | — | — | — |
| ts_net.test | LINK | 0.283041 | 1.011812 | 1.569606 | — | — | — |
| ts_net_select.test | LINK | 0.288082 | 1.036798 | 1.616352 | — | — | — |
| ts_netfwd.test | LINK | 0.286037 | 1.001282 | 1.594855 | — | — | — |
| ts_netfwd_select.test | LINK | 0.289989 | 1.037740 | 1.625972 | — | — | — |
| ts_socket.test | LINK | 0.234319 | 0.794492 | 1.191402 | — | — | — |
| ts_socket_select.test | LINK | 0.236838 | 0.804771 | 1.232989 | — | — | — |
| ts_timer.test | LINK | 0.210811 | 0.715589 | 1.038933 | — | — | — |
| ts_timer_select.test | LINK | 0.213728 | 0.740611 | 1.075870 | — | — | — |
| use_awaitable.test | LINK | 0.069169 | 0.231025 | 0.291297 | — | — | — |
| use_awaitable_select.test | LINK | 0.070055 | 0.234514 | 0.292500 | — | — | — |
| wait_traits.test | LINK | 0.067912 | 0.234280 | 0.294350 | — | — | — |
| wait_traits_select.test | LINK | 0.067418 | 0.235140 | 0.292612 | — | — | — |
| windows_basic_object_handle.test | LINK | 0.068787 | 0.235343 | 0.289604 | — | — | — |
| windows_basic_object_handle_select.test | LINK | 0.067358 | 0.234200 | 0.292589 | — | — | — |
| windows_basic_overlapped_handle.test | LINK | 0.068399 | 0.233865 | 0.292587 | — | — | — |
| windows_basic_overlapped_handle_select.test | LINK | 0.069034 | 0.235694 | 0.290630 | — | — | — |
| windows_basic_random_access_handle.test | LINK | 0.067851 | 0.234791 | 0.289178 | — | — | — |
| windows_basic_random_access_handle_select.test | LINK | 0.067996 | 0.232504 | 0.292676 | — | — | — |
| windows_basic_stream_handle.test | LINK | 0.071890 | 0.228825 | 0.287488 | — | — | — |
| windows_basic_stream_handle_select.test | LINK | 0.070780 | 0.234809 | 0.292130 | — | — | — |
| windows_object_handle.test | LINK | 0.197436 | 0.647394 | 0.786873 | — | — | — |
| windows_object_handle_select.test | LINK | 0.202760 | 0.690517 | 0.994805 | — | — | — |
| windows_overlapped_ptr.test | LINK | 0.199785 | 0.686511 | 0.867418 | — | — | — |
| windows_overlapped_ptr_select.test | LINK | 0.210204 | 0.733022 | 1.082047 | — | — | — |
| windows_random_access_handle.test | LINK | 0.190082 | 0.645121 | 0.781690 | — | — | — |
| windows_random_access_handle_select.test | LINK | 0.198494 | 0.683870 | 0.989074 | — | — | — |
| windows_stream_handle.test | LINK | 0.192579 | 0.641694 | 0.796751 | — | — | — |
| windows_stream_handle_select.test | LINK | 0.198483 | 0.686937 | 0.990710 | — | — | — |
| writable_pipe.test | LINK | 0.369868 | 2.937142 | 2.505442 | — | — | — |
| writable_pipe_select.test | LINK | 0.383128 | 3.040888 | 2.650431 | — | — | — |
| write.test | RUN | 1.570775 | 14.966749 | 13.895710 | 0.001746 | 0.001810 | 0.001952 |
| write_select.test | RUN | 1.603223 | 15.002928 | 14.144152 | 0.001766 | 0.001878 | 0.001961 |
| write_at.test | RUN | 1.713557 | 19.811426 | 17.679381 | 0.001956 | 0.001802 | 0.001965 |
| write_at_select.test | RUN | 1.714760 | 19.868072 | 17.930319 | 0.001724 | 0.001939 | 0.002086 |
| any_executor.test | RUN | 0.657655 | 6.545162 | 5.864997 | 0.001974 | 0.001749 | 0.001678 |
| blocking.test | RUN | 1.395982 | 8.713150 | 11.609926 | 0.002904 | 0.003226 | 0.003353 |
| blocking_adaptation.test | RUN | 0.715961 | 3.737532 | 5.113547 | 0.001951 | 0.001972 | 0.002096 |
| context_as.test | RUN | 0.409700 | 2.630396 | 1.736196 | 0.001291 | 0.001310 | 0.001388 |
| executor.test | RUN | 0.103584 | 0.247623 | 0.304743 | 0.001029 | 0.001175 | 0.001405 |
| inline_exception_handling.test | RUN | 1.419545 | 8.205696 | 11.419629 | 0.003214 | 0.002261 | 0.002382 |
| invocable_archetype.test | RUN | 0.103044 | 0.236153 | 0.310477 | 0.001200 | 0.001184 | 0.001278 |
| mapping.test | RUN | 1.412714 | 8.257336 | 11.174479 | 0.002338 | 0.002316 | 0.002455 |
| outstanding_work.test | RUN | 0.661139 | 3.612814 | 4.943320 | 0.002078 | 0.002130 | 0.002102 |
| prefer_only.test | RUN | 0.213179 | 1.424207 | 1.100042 | 0.001408 | 0.001249 | 0.001224 |
| relationship.test | RUN | 0.556811 | 3.157803 | 4.899078 | 0.001473 | 0.001490 | 0.001515 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.992× | 0.999×, 0.985× | 0.997× |
| clang | 0.985× | 0.976×, 0.995× | 0.998× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1364 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/43967972441).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| any_completion_executor.test | 3 | 0.001239s | 0.001254s | 0.001269s | byte equality observed |
| any_completion_executor_select.test | 5 | 0.001215s | 0.001215s | 0.001222s | byte equality observed |
| any_completion_handler.test | 6 | 0.001046s | 0.001031s | 0.001005s | byte equality observed |
| any_completion_handler_select.test | 10 | 0.001028s | 0.001021s | 0.001001s | byte equality observed |
| any_io_executor.test | 7 | 0.001215s | 0.001244s | 0.001223s | byte equality observed |
| any_io_executor_select.test | 4 | 0.001211s | 0.001263s | 0.001198s | byte equality observed |
| append.test | 10 | 0.000996s | 0.000982s | 0.000979s | byte equality observed |
| append_select.test | 10 | 0.000975s | 0.000960s | 0.000948s | byte equality observed |
| as_tuple.test | 10 | 0.001045s | 0.001044s | 0.001030s | byte equality observed |
| as_tuple_select.test | 10 | 0.000988s | 0.000976s | 0.000967s | byte equality observed |
| bind_allocator.test | 1 | 0.001522s | 0.001499s | 0.001495s | byte equality observed |
| bind_allocator_select.test | 1 | 0.001220s | 0.001147s | 0.001176s | byte equality observed |
| bind_cancellation_slot.test | 10 | 0.000904s | 0.000911s | 0.000900s | byte equality observed |
| bind_cancellation_slot_select.test | 10 | 0.000807s | 0.000805s | 0.000797s | byte equality observed |
| bind_executor.test | 1 | 0.001520s | 0.001520s | 0.001497s | byte equality observed |
| bind_executor_select.test | 1 | 0.001829s | 0.001796s | 0.001763s | byte equality observed |
| bind_immediate_executor.test | 10 | 0.000911s | 0.000908s | 0.000895s | byte equality observed |
| bind_immediate_executor_select.test | 10 | 0.000889s | 0.000865s | 0.000878s | byte equality observed |
| buffer.test | 10 | 0.000856s | 0.000827s | 0.000831s | byte equality observed |
| buffer_select.test | 10 | 0.000819s | 0.000844s | 0.000839s | byte equality observed |
| buffered_read_stream.test | 10 | 0.001025s | 0.001037s | 0.001019s | byte equality observed |
| buffered_read_stream_select.test | 10 | 0.001011s | 0.000987s | 0.001023s | byte equality observed |
| buffered_stream.test | 10 | 0.001014s | 0.001004s | 0.001015s | byte equality observed |
| buffered_stream_select.test | 10 | 0.001020s | 0.001029s | 0.000967s | byte equality observed |
| buffered_write_stream.test | 10 | 0.001001s | 0.001028s | 0.000995s | byte equality observed |
| buffered_write_stream_select.test | 10 | 0.001005s | 0.000990s | 0.000993s | byte equality observed |
| buffers_iterator.test | 10 | 0.000830s | 0.000809s | 0.000837s | byte equality observed |
| buffers_iterator_select.test | 10 | 0.000790s | 0.000749s | 0.000762s | byte equality observed |
| cancel_after.test | 1 | 0.003599s | 0.003566s | 0.003354s | byte equality observed |
| cancel_after_select.test | 1 | 0.002898s | 0.002918s | 0.002851s | byte equality observed |
| cancel_at.test | 1 | 0.003710s | 0.003797s | 0.003416s | byte equality observed |
| cancel_at_select.test | 1 | 0.003655s | 0.003633s | 0.003283s | byte equality observed |
| co_composed.test | 10 | 0.000852s | 0.000869s | 0.000875s | byte equality observed |
| co_composed_select.test | 10 | 0.000801s | 0.000778s | 0.000805s | byte equality observed |
| compose.test | 1 | 0.001633s | 0.001608s | 0.001545s | byte equality observed |
| compose_select.test | 1 | 0.001285s | 0.001232s | 0.001221s | byte equality observed |
| composed.test | 1 | 0.001882s | 0.001833s | 0.001852s | byte equality observed |
| composed_select.test | 1 | 0.001463s | 0.001373s | 0.001378s | byte equality observed |
| config.test | 10 | 0.000937s | 0.000906s | 0.000920s | byte equality observed |
| config_select.test | 10 | 0.000890s | 0.000915s | 0.000901s | byte equality observed |
| connect_pipe.test | 10 | 0.000888s | 0.000920s | 0.000863s | byte equality observed |
| connect_pipe_select.test | 10 | 0.000869s | 0.000873s | 0.000846s | byte equality observed |
| consign.test | 10 | 0.000894s | 0.000875s | 0.000866s | byte equality observed |
| consign_select.test | 10 | 0.000845s | 0.000813s | 0.000829s | byte equality observed |
| deadline_timer.test | 1 | 0.002386s | 0.002504s | 0.002343s | byte equality observed |
| deadline_timer_select.test | 1 | 0.002075s | 0.001985s | 0.002009s | byte equality observed |
| deferred.test | 10 | 0.000845s | 0.000824s | 0.000823s | byte equality observed |
| deferred_select.test | 10 | 0.000755s | 0.000768s | 0.000757s | byte equality observed |
| disposition.test | 10 | 0.000800s | 0.000791s | 0.000783s | byte equality observed |
| disposition_select.test | 10 | 0.000789s | 0.000794s | 0.000782s | byte equality observed |
| error.test | 10 | 0.000768s | 0.000763s | 0.000767s | byte equality observed |
| error_select.test | 10 | 0.000771s | 0.000775s | 0.000767s | byte equality observed |
| inline_executor.test | 10 | 0.000782s | 0.000778s | 0.000761s | byte equality observed |
| inline_executor_select.test | 10 | 0.000775s | 0.000779s | 0.000768s | byte equality observed |
| inline_or_executor.test | 10 | 0.000789s | 0.000785s | 0.000773s | byte equality observed |
| inline_or_executor_select.test | 10 | 0.000791s | 0.000793s | 0.000764s | byte equality observed |
| io_context.test | 1 | 0.001903s | 0.001837s | 0.001868s | byte equality observed |
| io_context_select.test | 1 | 0.002234s | 0.002255s | 0.002207s | byte equality observed |
| io_context_strand.test | 1 | 0.002154s | 0.002131s | 0.002181s | byte equality observed |
| io_context_strand_select.test | 1 | 0.001778s | 0.001834s | 0.001854s | byte equality observed |
| ip_host_name.test | 10 | 0.000854s | 0.000841s | 0.000849s | byte equality observed |
| ip_host_name_select.test | 10 | 0.000765s | 0.000768s | 0.000757s | byte equality observed |
| ip_icmp.test | 10 | 0.000795s | 0.000795s | 0.000759s | byte equality observed |
| ip_icmp_select.test | 10 | 0.000788s | 0.000785s | 0.000756s | byte equality observed |
| ip_multicast.test | 10 | 0.000854s | 0.000860s | 0.000838s | byte equality observed |
| ip_multicast_select.test | 10 | 0.000842s | 0.000833s | 0.000815s | byte equality observed |
| ip_tcp.test | 10 | 0.001055s | 0.001046s | 0.001045s | byte equality observed |
| ip_tcp_select.test | 10 | 0.001013s | 0.001009s | 0.001004s | byte equality observed |
| ip_udp.test | 10 | 0.000863s | 0.000862s | 0.000837s | byte equality observed |
| ip_udp_select.test | 10 | 0.000855s | 0.000848s | 0.000831s | byte equality observed |
| ip_unicast.test | 10 | 0.000822s | 0.000818s | 0.000801s | byte equality observed |
| ip_unicast_select.test | 10 | 0.000808s | 0.000811s | 0.000794s | byte equality observed |
| ip_v6_only.test | 10 | 0.000821s | 0.000826s | 0.000811s | byte equality observed |
| ip_v6_only_select.test | 10 | 0.000803s | 0.000816s | 0.000785s | byte equality observed |
| is_read_buffered.test | 10 | 0.000759s | 0.000750s | 0.000745s | byte equality observed |
| is_read_buffered_select.test | 10 | 0.000759s | 0.000741s | 0.000748s | byte equality observed |
| is_write_buffered.test | 10 | 0.000759s | 0.000747s | 0.000742s | byte equality observed |
| is_write_buffered_select.test | 10 | 0.000758s | 0.000759s | 0.000728s | byte equality observed |
| prepend.test | 10 | 0.000822s | 0.000843s | 0.000795s | byte equality observed |
| prepend_select.test | 10 | 0.000795s | 0.000837s | 0.000775s | byte equality observed |
| read.test | 10 | 0.001109s | 0.001146s | 0.001070s | byte equality observed |
| read_at.test | 10 | 0.001331s | 0.001470s | 0.001303s | byte equality observed |
| read_at_select.test | 10 | 0.001320s | 0.001448s | 0.001304s | byte equality observed |
| read_select.test | 10 | 0.001119s | 0.001174s | 0.001076s | byte equality observed |
| read_until.test | 10 | 0.000939s | 0.000958s | 0.000875s | byte equality observed |
| read_until_select.test | 10 | 0.000980s | 0.000946s | 0.000878s | byte equality observed |
| recycling_allocator.test | 10 | 0.000811s | 0.000816s | 0.000819s | byte equality observed |
| recycling_allocator_select.test | 10 | 0.000822s | 0.000812s | 0.000787s | byte equality observed |
| signal_set.test | 10 | 0.000855s | 0.000836s | 0.000826s | byte equality observed |
| signal_set_select.test | 10 | 0.000838s | 0.000847s | 0.000825s | byte equality observed |
| socket_base.test | 10 | 0.000907s | 0.000903s | 0.000918s | byte equality observed |
| socket_base_select.test | 10 | 0.000913s | 0.000897s | 0.000899s | byte equality observed |
| spawn.test | 10 | 0.000996s | 0.000985s | 0.000993s | byte equality observed |
| spawn_select.test | 10 | 0.000987s | 0.000995s | 0.000990s | byte equality observed |
| static_thread_pool.test | 10 | 0.000816s | 0.000798s | 0.000805s | byte equality observed |
| static_thread_pool_select.test | 10 | 0.000786s | 0.000784s | 0.000787s | byte equality observed |
| strand.test | 1 | 0.001820s | 0.001801s | 0.001724s | byte equality observed |
| strand_select.test | 1 | 0.001473s | 0.001433s | 0.001430s | byte equality observed |
| streambuf.test | 10 | 0.000895s | 0.000883s | 0.000878s | byte equality observed |
| streambuf_select.test | 10 | 0.000849s | 0.000842s | 0.000858s | byte equality observed |
| thread_pool.test | 10 | 0.001600s | 0.001611s | 0.001594s | byte equality observed |
| thread_pool_select.test | 10 | 0.001583s | 0.001563s | 0.001566s | byte equality observed |
| write.test | 10 | 0.001222s | 0.001166s | 0.001171s | byte equality observed |
| write_at.test | 10 | 0.001331s | 0.001291s | 0.001278s | byte equality observed |
| write_at_select.test | 10 | 0.001300s | 0.001296s | 0.001262s | byte equality observed |
| write_select.test | 10 | 0.001204s | 0.001164s | 0.001187s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/43967972441).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
