# libs/asio/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| any_completion_executor.test | RUN | 0.565390 | 3.495615 | 3.006627 | 0.001966 | 0.001988 | 0.001917 |
| any_completion_executor_select.test | RUN | 0.581745 | 3.535186 | 3.114546 | 0.001785 | 0.001885 | 0.002099 |
| any_completion_handler.test | RUN | 0.626941 | 3.145476 | 2.737128 | 0.001295 | 0.001584 | 0.001581 |
| any_completion_handler_select.test | RUN | 0.639522 | 3.269283 | 2.958403 | 0.001574 | 0.001610 | 0.001728 |
| any_io_executor.test | RUN | 0.584831 | 3.765105 | 3.308397 | 0.001547 | 0.001913 | 0.001890 |
| any_io_executor_select.test | RUN | 0.597123 | 3.757205 | 3.402915 | 0.001774 | 0.001909 | 0.001838 |
| append.test | RUN | 0.533805 | 2.995575 | 2.458120 | 0.001358 | 0.001518 | 0.001336 |
| append_select.test | RUN | 0.560959 | 3.079541 | 2.440617 | 0.001484 | 0.001652 | 0.001634 |
| as_tuple.test | RUN | 0.726096 | 3.702409 | 3.473712 | 0.001481 | 0.001437 | 0.001582 |
| as_tuple_select.test | RUN | 0.728882 | 3.642494 | 3.424850 | 0.001392 | 0.001620 | 0.001564 |
| associated_allocator.test | LINK | 0.134610 | 0.292538 | 0.364810 | — | — | — |
| associated_allocator_select.test | LINK | 0.132341 | 0.295432 | 0.358032 | — | — | — |
| associated_cancellation_slot.test | LINK | 0.152782 | 0.319505 | 0.395767 | — | — | — |
| associated_cancellation_slot_select.test | LINK | 0.151482 | 0.320215 | 0.394003 | — | — | — |
| associated_executor.test | LINK | 0.222670 | 0.564022 | 0.680123 | — | — | — |
| associated_executor_select.test | LINK | 0.214584 | 0.562596 | 0.677319 | — | — | — |
| associated_immediate_executor.test | LINK | 0.200499 | 0.525124 | 0.597933 | — | — | — |
| associated_immediate_executor_select.test | LINK | 0.205660 | 0.524136 | 0.592562 | — | — | — |
| associator.test | LINK | 0.109702 | 0.250255 | 0.285559 | — | — | — |
| associator_select.test | LINK | 0.107897 | 0.243746 | 0.294658 | — | — | — |
| awaitable.test | LINK | 0.114973 | 0.246438 | 0.290797 | — | — | — |
| awaitable_select.test | LINK | 0.117413 | 0.242782 | 0.294302 | — | — | — |
| basic_datagram_socket.test | LINK | 0.345981 | 0.780329 | 1.124549 | — | — | — |
| basic_datagram_socket_select.test | LINK | 0.351388 | 0.798885 | 1.154175 | — | — | — |
| basic_deadline_timer.test | LINK | 0.409991 | 0.928964 | 1.298151 | — | — | — |
| basic_deadline_timer_select.test | LINK | 0.426889 | 0.952510 | 1.318784 | — | — | — |
| basic_file.test | LINK | 0.111191 | 0.244920 | 0.299986 | — | — | — |
| basic_file_select.test | LINK | 0.106464 | 0.246926 | 0.293237 | — | — | — |
| basic_random_access_file.test | LINK | 0.112696 | 0.244965 | 0.299977 | — | — | — |
| basic_random_access_file_select.test | LINK | 0.107225 | 0.242114 | 0.299688 | — | — | — |
| basic_raw_socket.test | LINK | 0.347123 | 0.790765 | 1.127059 | — | — | — |
| basic_raw_socket_select.test | LINK | 0.349777 | 0.804007 | 1.141862 | — | — | — |
| basic_readable_pipe.test | LINK | 0.332865 | 0.752296 | 0.997704 | — | — | — |
| basic_readable_pipe_select.test | LINK | 0.349296 | 0.791151 | 1.208741 | — | — | — |
| basic_seq_packet_socket.test | LINK | 0.346622 | 0.782795 | 1.129032 | — | — | — |
| basic_seq_packet_socket_select.test | LINK | 0.350175 | 0.796093 | 1.152631 | — | — | — |
| basic_signal_set.test | LINK | 0.320447 | 0.716010 | 0.885439 | — | — | — |
| basic_signal_set_select.test | LINK | 0.338099 | 0.767289 | 1.108095 | — | — | — |
| basic_socket_acceptor.test | LINK | 0.344254 | 0.779549 | 1.126541 | — | — | — |
| basic_socket_acceptor_select.test | LINK | 0.361278 | 0.802461 | 1.172391 | — | — | — |
| basic_stream_file.test | LINK | 0.107304 | 0.244623 | 0.302063 | — | — | — |
| basic_stream_file_select.test | LINK | 0.110519 | 0.246570 | 0.299461 | — | — | — |
| basic_stream_socket.test | LINK | 0.346466 | 0.789413 | 1.127448 | — | — | — |
| basic_stream_socket_select.test | LINK | 0.358582 | 0.799532 | 1.161299 | — | — | — |
| basic_streambuf.test | LINK | 0.166379 | 0.357022 | 0.436169 | — | — | — |
| basic_streambuf_select.test | LINK | 0.163546 | 0.363309 | 0.438397 | — | — | — |
| basic_waitable_timer.test | LINK | 0.323107 | 0.737291 | 1.047151 | — | — | — |
| basic_waitable_timer_select.test | LINK | 0.327384 | 0.750458 | 1.072177 | — | — | — |
| basic_writable_pipe.test | LINK | 0.327693 | 0.746578 | 0.972563 | — | — | — |
| basic_writable_pipe_select.test | LINK | 0.350108 | 0.797924 | 1.190882 | — | — | — |
| bind_allocator.test | RUN | 0.572573 | 3.045840 | 2.692824 | 0.002113 | 0.001978 | 0.001866 |
| bind_allocator_select.test | RUN | 0.591704 | 3.045963 | 2.641300 | 0.001419 | 0.001426 | 0.001306 |
| bind_cancellation_slot.test | RUN | 0.586958 | 3.032629 | 2.705613 | 0.000968 | 0.001111 | 0.001046 |
| bind_cancellation_slot_select.test | RUN | 0.594024 | 3.068789 | 2.572903 | 0.001104 | 0.001160 | 0.001066 |
| bind_executor.test | RUN | 0.400428 | 2.106882 | 1.729922 | 0.001942 | 0.001930 | 0.001733 |
| bind_executor_select.test | RUN | 0.412019 | 2.142306 | 1.707977 | 0.001665 | 0.001700 | 0.001584 |
| bind_immediate_executor.test | RUN | 0.295335 | 1.740746 | 1.090950 | 0.001072 | 0.001127 | 0.001000 |
| bind_immediate_executor_select.test | RUN | 0.304937 | 1.714639 | 1.187622 | 0.001008 | 0.001015 | 0.000982 |
| buffer.test | RUN | 0.178364 | 0.709142 | 0.633736 | 0.000962 | 0.001094 | 0.001040 |
| buffer_select.test | RUN | 0.177392 | 0.707988 | 0.639355 | 0.000908 | 0.000926 | 0.001017 |
| buffer_registration.test | LINK | 0.137928 | 0.353264 | 0.373204 | — | — | — |
| buffer_registration_select.test | LINK | 0.138057 | 0.354671 | 0.372580 | — | — | — |
| buffered_read_stream.test | RUN | 0.693114 | 4.647796 | 3.724805 | 0.001297 | 0.002104 | 0.001891 |
| buffered_read_stream_select.test | RUN | 0.702731 | 4.858550 | 3.923511 | 0.001308 | 0.001824 | 0.001748 |
| buffered_stream.test | RUN | 0.953082 | 7.536691 | 6.927022 | 0.001876 | 0.001787 | 0.001853 |
| buffered_stream_select.test | RUN | 1.012580 | 7.541507 | 6.601493 | 0.001812 | 0.001822 | 0.001764 |
| buffered_write_stream.test | RUN | 1.128609 | 6.474449 | 5.884284 | 0.001870 | 0.002028 | 0.001982 |
| buffered_write_stream_select.test | RUN | 1.150687 | 6.605145 | 5.662307 | 0.001741 | 0.002038 | 0.001788 |
| buffers_iterator.test | RUN | 0.328561 | 0.573054 | 0.896400 | 0.001228 | 0.001537 | 0.001266 |
| buffers_iterator_select.test | RUN | 0.321918 | 0.567303 | 0.896047 | 0.001334 | 0.001469 | 0.001424 |
| cancel_after.test | RUN | 0.947020 | 5.036100 | 4.221673 | 0.003800 | 0.004299 | 0.004237 |
| cancel_after_select.test | RUN | 0.954746 | 5.025669 | 4.194526 | 0.003582 | 0.004161 | 0.003624 |
| cancel_at.test | RUN | 0.870170 | 4.568283 | 4.158193 | 0.003700 | 0.003525 | 0.003462 |
| cancel_at_select.test | RUN | 0.843632 | 4.441835 | 4.140355 | 0.003283 | 0.003648 | 0.003653 |
| cancellation_signal.test | LINK | 0.099679 | 0.211230 | 0.285538 | — | — | — |
| cancellation_signal_select.test | LINK | 0.098996 | 0.206621 | 0.300674 | — | — | — |
| cancellation_state.test | LINK | 0.111100 | 0.208610 | 0.379295 | — | — | — |
| cancellation_state_select.test | LINK | 0.135953 | 0.208810 | 0.377068 | — | — | — |
| cancellation_type.test | LINK | 0.102902 | 0.164227 | 0.298356 | — | — | — |
| cancellation_type_select.test | LINK | 0.113492 | 0.163397 | 0.291311 | — | — | — |
| co_composed.test | RUN | 0.113143 | 0.166522 | 0.293194 | 0.001134 | 0.000977 | 0.001271 |
| co_composed_select.test | RUN | 0.112712 | 0.202265 | 0.294078 | 0.001280 | 0.001214 | 0.001279 |
| co_spawn.test | LINK | 0.109424 | 0.222262 | 0.296798 | — | — | — |
| co_spawn_select.test | LINK | 0.113083 | 0.199433 | 0.292880 | — | — | — |
| completion_condition.test | LINK | 0.140532 | 0.375207 | 0.401104 | — | — | — |
| completion_condition_select.test | LINK | 0.143951 | 0.377002 | 0.398235 | — | — | — |
| compose.test | RUN | 0.715004 | 3.868919 | 3.404859 | 0.002148 | 0.002071 | 0.002050 |
| compose_select.test | RUN | 0.721407 | 3.810749 | 3.402079 | 0.001920 | 0.002438 | 0.001448 |
| composed.test | RUN | 0.711862 | 3.788052 | 3.302210 | 0.001704 | 0.001770 | 0.001610 |
| composed_select.test | RUN | 0.692857 | 3.751746 | 3.302678 | 0.001766 | 0.001702 | 0.001633 |
| config.test | RUN | 0.350662 | 2.406326 | 1.445239 | 0.001399 | 0.001556 | 0.001355 |
| config_select.test | RUN | 0.397676 | 2.505637 | 1.637421 | 0.001576 | 0.001662 | 0.001459 |
| connect.test | LINK | 1.156464 | 8.163952 | 7.269013 | — | — | — |
| connect_select.test | LINK | 1.161208 | 8.135287 | 7.247579 | — | — | — |
| connect_pipe.test | RUN | 0.600008 | 3.095122 | 2.626260 | 0.001355 | 0.001569 | 0.001629 |
| connect_pipe_select.test | RUN | 0.624961 | 3.202084 | 2.805155 | 0.001472 | 0.001636 | 0.001439 |
| consign.test | RUN | 0.528824 | 3.016016 | 2.446826 | 0.001371 | 0.001450 | 0.001490 |
| consign_select.test | RUN | 0.541610 | 3.064360 | 2.417237 | 0.001654 | 0.001541 | 0.001433 |
| coroutine.test | LINK | 0.111730 | 0.288070 | 0.336973 | — | — | — |
| coroutine_select.test | LINK | 0.117397 | 0.286725 | 0.328114 | — | — | — |
| deadline_timer.test | RUN | 0.797028 | 3.950355 | 3.487241 | 0.002892 | 0.003293 | 0.003247 |
| deadline_timer_select.test | RUN | 0.789822 | 3.898736 | 3.469325 | 0.002693 | 0.002948 | 0.003075 |
| deferred.test | RUN | 0.121442 | 0.261281 | 0.322437 | 0.001367 | 0.001437 | 0.001362 |
| deferred_select.test | RUN | 0.122196 | 0.268569 | 0.322263 | 0.001379 | 0.001548 | 0.001454 |
| detached.test | LINK | 0.135537 | 0.291041 | 0.360944 | — | — | — |
| detached_select.test | LINK | 0.142711 | 0.289795 | 0.360446 | — | — | — |
| disposition.test | RUN | 0.145756 | 0.703248 | 0.670923 | 0.001083 | 0.001459 | 0.001629 |
| disposition_select.test | RUN | 0.135692 | 0.709003 | 0.674462 | 0.001017 | 0.001433 | 0.001722 |
| error.test | RUN | 0.119780 | 0.685401 | 0.594544 | 0.001017 | 0.001434 | 0.001580 |
| error_select.test | RUN | 0.121404 | 0.681602 | 0.595838 | 0.001038 | 0.001426 | 0.001640 |
| file_base.test | LINK | 0.151117 | 0.559252 | 0.654149 | — | — | — |
| file_base_select.test | LINK | 0.151764 | 0.557890 | 0.617550 | — | — | — |
| fwd_first.test | LINK | 0.348382 | 0.993566 | 1.191828 | — | — | — |
| fwd_last.test | LINK | 0.345835 | 0.906866 | 1.183182 | — | — | — |
| generic_basic_endpoint.test | LINK | 0.129234 | 0.323835 | 0.420607 | — | — | — |
| generic_basic_endpoint_select.test | LINK | 0.129254 | 0.325218 | 0.416890 | — | — | — |
| generic_datagram_protocol.test | LINK | 0.582677 | 3.066751 | 2.513267 | — | — | — |
| generic_datagram_protocol_select.test | LINK | 0.583020 | 3.166322 | 2.501379 | — | — | — |
| generic_raw_protocol.test | LINK | 0.579304 | 3.102308 | 2.524148 | — | — | — |
| generic_raw_protocol_select.test | LINK | 0.578677 | 3.187748 | 2.483373 | — | — | — |
| generic_seq_packet_protocol.test | LINK | 0.498054 | 2.591383 | 2.133211 | — | — | — |
| generic_seq_packet_protocol_select.test | LINK | 0.500644 | 2.643038 | 2.115294 | — | — | — |
| generic_stream_protocol.test | LINK | 0.532858 | 2.791237 | 2.285607 | — | — | — |
| generic_stream_protocol_select.test | LINK | 0.531444 | 2.870002 | 2.272584 | — | — | — |
| high_resolution_timer.test | LINK | 0.221932 | 0.486305 | 0.660164 | — | — | — |
| high_resolution_timer_select.test | LINK | 0.224164 | 0.502780 | 0.674081 | — | — | — |
| immediate.test | LINK | 0.154664 | 0.373410 | 0.411040 | — | — | — |
| immediate_select.test | LINK | 0.149934 | 0.378194 | 0.405968 | — | — | — |
| inline_executor.test | RUN | 0.185102 | 0.591014 | 0.612072 | 0.001019 | 0.001029 | 0.000965 |
| inline_executor_select.test | RUN | 0.186202 | 0.593240 | 0.610656 | 0.001007 | 0.001077 | 0.001075 |
| inline_or_executor.test | RUN | 0.308456 | 1.806363 | 1.260841 | 0.001018 | 0.001092 | 0.000944 |
| inline_or_executor_select.test | RUN | 0.321665 | 1.853513 | 1.339755 | 0.001056 | 0.001102 | 0.000933 |
| io_context.test | RUN | 0.456855 | 2.767268 | 2.156365 | 0.002109 | 0.002066 | 0.002012 |
| io_context_select.test | RUN | 0.461657 | 2.735899 | 2.149463 | 0.001957 | 0.001992 | 0.001972 |
| io_context_strand.test | RUN | 0.432669 | 2.345040 | 1.871816 | 0.001882 | 0.001986 | 0.001942 |
| io_context_strand_select.test | RUN | 0.439009 | 2.315823 | 1.852613 | 0.001933 | 0.001939 | 0.001685 |
| ip_address.test | LINK | 0.152673 | 0.525474 | 0.515836 | — | — | — |
| ip_address_select.test | LINK | 0.151808 | 0.525456 | 0.516118 | — | — | — |
| ip_address_v4.test | LINK | 0.157292 | 0.555388 | 0.601320 | — | — | — |
| ip_address_v4_select.test | LINK | 0.158300 | 0.555557 | 0.722743 | — | — | — |
| ip_address_v6.test | LINK | 0.179802 | 0.732049 | 1.125361 | — | — | — |
| ip_address_v6_select.test | LINK | 0.178368 | 0.732829 | 1.102225 | — | — | — |
| ip_basic_endpoint.test | LINK | 0.132354 | 0.349189 | 0.720983 | — | — | — |
| ip_basic_endpoint_select.test | LINK | 0.135122 | 0.349206 | 0.711706 | — | — | — |
| ip_basic_resolver.test | LINK | 0.221550 | 0.499218 | 1.070094 | — | — | — |
| ip_basic_resolver_select.test | LINK | 0.225855 | 0.514680 | 1.097235 | — | — | — |
| ip_basic_resolver_entry.test | LINK | 0.074051 | 0.163613 | 0.300485 | — | — | — |
| ip_basic_resolver_entry_select.test | LINK | 0.076006 | 0.162598 | 0.299607 | — | — | — |
| ip_basic_resolver_iterator.test | LINK | 0.132533 | 0.349925 | 0.691586 | — | — | — |
| ip_basic_resolver_iterator_select.test | LINK | 0.133846 | 0.504040 | 0.686895 | — | — | — |
| ip_basic_resolver_query.test | LINK | 0.126437 | 0.483939 | 0.670587 | — | — | — |
| ip_basic_resolver_query_select.test | LINK | 0.127636 | 0.484420 | 0.663413 | — | — | — |
| ip_host_name.test | RUN | 0.136117 | 0.661225 | 0.760140 | 0.000962 | 0.001524 | 0.001236 |
| ip_host_name_select.test | RUN | 0.139120 | 0.660848 | 0.757858 | 0.001008 | 0.001561 | 0.001261 |
| ip_icmp.test | RUN | 0.724398 | 6.438508 | 5.092795 | 0.001088 | 0.001531 | 0.001242 |
| ip_icmp_select.test | RUN | 0.719800 | 6.607784 | 4.961285 | 0.001031 | 0.001493 | 0.001277 |
| ip_multicast.test | RUN | 0.399756 | 3.208951 | 2.807151 | 0.001152 | 0.001492 | 0.001588 |
| ip_multicast_select.test | RUN | 0.406080 | 3.209610 | 2.805236 | 0.001151 | 0.001720 | 0.001367 |
| ip_resolver_query_base.test | LINK | 0.085255 | 0.266519 | 0.313190 | — | — | — |
| ip_resolver_query_base_select.test | LINK | 0.084277 | 0.263440 | 0.315363 | — | — | — |
| ip_tcp.test | RUN | 1.088258 | 9.447445 | 7.804867 | 0.001357 | 0.001994 | 0.001848 |
| ip_tcp_select.test | RUN | 1.092521 | 9.915009 | 7.539713 | 0.001447 | 0.002010 | 0.001796 |
| ip_udp.test | RUN | 0.776388 | 6.747338 | 5.348825 | 0.001170 | 0.001497 | 0.001598 |
| ip_udp_select.test | RUN | 0.766841 | 6.896677 | 5.220592 | 0.001144 | 0.001667 | 0.001484 |
| ip_unicast.test | RUN | 0.368479 | 2.908623 | 2.482650 | 0.001073 | 0.001628 | 0.001581 |
| ip_unicast_select.test | RUN | 0.374277 | 2.942678 | 2.454526 | 0.001105 | 0.001559 | 0.001364 |
| ip_v6_only.test | RUN | 0.380830 | 3.033432 | 2.573088 | 0.001056 | 0.001481 | 0.001517 |
| ip_v6_only_select.test | RUN | 0.385866 | 3.116855 | 2.535334 | 0.001073 | 0.001343 | 0.001542 |
| is_read_buffered.test | RUN | 0.257258 | 0.880431 | 1.297144 | 0.001019 | 0.001378 | 0.001243 |
| is_read_buffered_select.test | RUN | 0.267094 | 0.909653 | 1.329456 | 0.001017 | 0.001380 | 0.001282 |
| is_write_buffered.test | RUN | 0.257825 | 0.883304 | 1.325429 | 0.001012 | 0.001516 | 0.001367 |
| is_write_buffered_select.test | RUN | 0.271007 | 0.904996 | 1.348684 | 0.000981 | 0.001381 | 0.001272 |
| local_basic_endpoint.test | LINK | 0.127377 | 0.492452 | 0.676154 | — | — | — |
| local_basic_endpoint_select.test | LINK | 0.130020 | 0.492158 | 0.676766 | — | — | — |
| local_connect_pair.test | LINK | 0.355479 | 2.938653 | 2.354951 | — | — | — |
| local_connect_pair_select.test | LINK | 0.358870 | 2.899139 | 2.325971 | — | — | — |
| local_datagram_protocol.test | LINK | 0.486874 | 3.885617 | 3.344054 | — | — | — |
| local_datagram_protocol_select.test | LINK | 0.498511 | 3.901752 | 3.275345 | — | — | — |
| local_seq_packet_protocol.test | LINK | 0.499577 | 3.802763 | 3.362078 | — | — | — |
| local_seq_packet_protocol_select.test | LINK | 0.500735 | 3.868272 | 3.336766 | — | — | — |
| local_stream_protocol.test | LINK | 0.460638 | 3.626597 | 3.178995 | — | — | — |
| local_stream_protocol_select.test | LINK | 0.475623 | 3.634828 | 3.139252 | — | — | — |
| placeholders.test | LINK | 0.081405 | 0.266125 | 0.323402 | — | — | — |
| placeholders_select.test | LINK | 0.081014 | 0.266301 | 0.322842 | — | — | — |
| posix_basic_descriptor.test | LINK | 0.225990 | 0.739807 | 0.991075 | — | — | — |
| posix_basic_descriptor_select.test | LINK | 0.232248 | 0.780318 | 1.194380 | — | — | — |
| posix_basic_stream_descriptor.test | LINK | 0.228758 | 0.742119 | 0.984215 | — | — | — |
| posix_basic_stream_descriptor_select.test | LINK | 0.234377 | 0.784060 | 1.195337 | — | — | — |
| posix_descriptor_base.test | LINK | 0.088103 | 0.275752 | 0.317771 | — | — | — |
| posix_descriptor_base_select.test | LINK | 0.089187 | 0.274119 | 0.319370 | — | — | — |
| posix_stream_descriptor.test | LINK | 0.623950 | 3.648098 | 3.146123 | — | — | — |
| posix_stream_descriptor_select.test | LINK | 0.708979 | 3.692328 | 3.190646 | — | — | — |
| prepend.test | RUN | 0.528628 | 2.934423 | 2.485453 | 0.001278 | 0.001320 | 0.001452 |
| prepend_select.test | RUN | 0.532501 | 3.000329 | 2.448310 | 0.001376 | 0.001483 | 0.001504 |
| random_access_file.test | LINK | 0.305837 | 0.660847 | 0.806562 | — | — | — |
| random_access_file_select.test | LINK | 0.309924 | 0.700590 | 1.011532 | — | — | — |
| read.test | RUN | 1.727744 | 18.675465 | 14.572657 | 0.002090 | 0.002067 | 0.002088 |
| read_select.test | RUN | 1.747072 | 18.609643 | 14.804596 | 0.001902 | 0.001863 | 0.002139 |
| read_at.test | RUN | 1.731811 | 24.724970 | 19.655120 | 0.002265 | 0.002409 | 0.002294 |
| read_at_select.test | RUN | 1.736367 | 24.540609 | 19.949730 | 0.002485 | 0.002642 | 0.002580 |
| read_until.test | RUN | 0.909682 | 7.262930 | 5.337429 | 0.001831 | 0.001762 | 0.001646 |
| read_until_select.test | RUN | 0.915266 | 7.332064 | 5.475017 | 0.001490 | 0.001732 | 0.001608 |
| readable_pipe.test | LINK | 0.566758 | 3.057666 | 2.446007 | — | — | — |
| readable_pipe_select.test | LINK | 0.584911 | 3.171860 | 2.621192 | — | — | — |
| recycling_allocator.test | RUN | 0.168499 | 0.422071 | 0.471594 | 0.001362 | 0.001433 | 0.001179 |
| recycling_allocator_select.test | RUN | 0.160460 | 0.425203 | 0.489946 | 0.001465 | 0.001296 | 0.001487 |
| redirect_disposition.test | LINK | 0.732540 | 4.251487 | 3.762865 | — | — | — |
| redirect_disposition_select.test | LINK | 0.752345 | 4.198820 | 3.744727 | — | — | — |
| redirect_error.test | LINK | 0.662377 | 3.539126 | 3.227605 | — | — | — |
| redirect_error_select.test | LINK | 0.661183 | 3.472388 | 3.249039 | — | — | — |
| registered_buffer.test | LINK | 0.162936 | 0.347506 | 0.437332 | — | — | — |
| registered_buffer_select.test | LINK | 0.166490 | 0.342625 | 0.431677 | — | — | — |
| signal_set.test | RUN | 0.540834 | 2.951017 | 2.297529 | 0.001542 | 0.001403 | 0.001471 |
| signal_set_select.test | RUN | 0.567760 | 3.052150 | 2.491380 | 0.001349 | 0.001517 | 0.001263 |
| signal_set_base.test | LINK | 0.127313 | 0.266105 | 0.315105 | — | — | — |
| signal_set_base_select.test | LINK | 0.124668 | 0.267336 | 0.312642 | — | — | — |
| socket_base.test | RUN | 0.663329 | 4.344959 | 3.479557 | 0.001434 | 0.001430 | 0.001438 |
| socket_base_select.test | RUN | 0.669731 | 4.262033 | 3.452946 | 0.001418 | 0.001428 | 0.001409 |
| spawn.test | RUN | 1.156764 | 7.248798 | 6.079582 | 0.001628 | 0.001632 | 0.001644 |
| spawn_select.test | RUN | 1.163549 | 7.199651 | 6.030186 | 0.001882 | 0.001907 | 0.001679 |
| static_thread_pool.test | RUN | 0.288687 | 0.672284 | 0.783169 | 0.001328 | 0.001521 | 0.001315 |
| static_thread_pool_select.test | RUN | 0.300312 | 0.711687 | 0.974301 | 0.001206 | 0.001290 | 0.001461 |
| steady_timer.test | LINK | 0.320120 | 0.722537 | 1.100172 | — | — | — |
| steady_timer_select.test | LINK | 0.333203 | 0.748425 | 1.136174 | — | — | — |
| strand.test | RUN | 0.713391 | 4.045530 | 3.594412 | 0.002238 | 0.002379 | 0.002199 |
| strand_select.test | RUN | 0.703317 | 4.027059 | 3.584058 | 0.002258 | 0.002176 | 0.002046 |
| stream_file.test | LINK | 0.299955 | 0.557870 | 0.842602 | — | — | — |
| stream_file_select.test | LINK | 0.312343 | 0.598288 | 1.036262 | — | — | — |
| streambuf.test | RUN | 0.185399 | 0.376922 | 0.559691 | 0.001597 | 0.001059 | 0.001253 |
| streambuf_select.test | RUN | 0.176607 | 0.375762 | 0.566262 | 0.000897 | 0.001007 | 0.000902 |
| system_timer.test | LINK | 0.470702 | 2.600236 | 2.167418 | — | — | — |
| system_timer_select.test | LINK | 0.472361 | 2.560010 | 2.068874 | — | — | — |
| system_context.test | LINK | 0.198842 | 0.440596 | 0.479162 | — | — | — |
| system_context_select.test | LINK | 0.207709 | 0.464960 | 0.601982 | — | — | — |
| system_executor.test | LINK | 0.271026 | 1.459632 | 0.981902 | — | — | — |
| system_executor_select.test | LINK | 0.277585 | 1.430448 | 1.084893 | — | — | — |
| this_coro.test | LINK | 0.076299 | 0.166081 | 0.187498 | — | — | — |
| this_coro_select.test | LINK | 0.074646 | 0.162076 | 0.190209 | — | — | — |
| thread_pool.test | RUN | 0.326174 | 1.879975 | 1.276097 | 0.001677 | 0.002410 | 0.001835 |
| thread_pool_select.test | RUN | 0.338694 | 1.891363 | 1.385138 | 0.001858 | 0.002122 | 0.001898 |
| time_traits.test | LINK | 0.170511 | 0.506057 | 0.388975 | — | — | — |
| time_traits_select.test | LINK | 0.168205 | 0.498106 | 0.387220 | — | — | — |
| ts_buffer.test | LINK | 0.167179 | 0.561893 | 0.410444 | — | — | — |
| ts_buffer_select.test | LINK | 0.166347 | 0.571528 | 0.406771 | — | — | — |
| ts_executor.test | LINK | 0.235251 | 0.804661 | 0.648989 | — | — | — |
| ts_executor_select.test | LINK | 0.243213 | 0.850428 | 0.778228 | — | — | — |
| ts_internet.test | LINK | 0.257352 | 0.870793 | 0.978724 | — | — | — |
| ts_internet_select.test | LINK | 0.258282 | 0.899050 | 1.254419 | — | — | — |
| ts_io_context.test | LINK | 0.207777 | 0.667189 | 0.783731 | — | — | — |
| ts_io_context_select.test | LINK | 0.214354 | 0.707935 | 0.989950 | — | — | — |
| ts_net.test | LINK | 0.309187 | 1.060288 | 1.568730 | — | — | — |
| ts_net_select.test | LINK | 0.312831 | 1.084061 | 1.614810 | — | — | — |
| ts_netfwd.test | LINK | 0.306646 | 1.048751 | 1.580471 | — | — | — |
| ts_netfwd_select.test | LINK | 0.322363 | 1.063978 | 1.614111 | — | — | — |
| ts_socket.test | LINK | 0.253255 | 0.830078 | 1.212251 | — | — | — |
| ts_socket_select.test | LINK | 0.260503 | 0.850175 | 1.215649 | — | — | — |
| ts_timer.test | LINK | 0.222759 | 0.730746 | 1.043838 | — | — | — |
| ts_timer_select.test | LINK | 0.229712 | 0.747771 | 1.065994 | — | — | — |
| use_awaitable.test | LINK | 0.074166 | 0.250663 | 0.295620 | — | — | — |
| use_awaitable_select.test | LINK | 0.077028 | 0.247036 | 0.293598 | — | — | — |
| wait_traits.test | LINK | 0.075281 | 0.242725 | 0.296955 | — | — | — |
| wait_traits_select.test | LINK | 0.073574 | 0.240826 | 0.294747 | — | — | — |
| windows_basic_object_handle.test | LINK | 0.074534 | 0.242116 | 0.284847 | — | — | — |
| windows_basic_object_handle_select.test | LINK | 0.075381 | 0.243815 | 0.301627 | — | — | — |
| windows_basic_overlapped_handle.test | LINK | 0.074058 | 0.242497 | 0.292595 | — | — | — |
| windows_basic_overlapped_handle_select.test | LINK | 0.075543 | 0.244655 | 0.298666 | — | — | — |
| windows_basic_random_access_handle.test | LINK | 0.073703 | 0.240287 | 0.296482 | — | — | — |
| windows_basic_random_access_handle_select.test | LINK | 0.076724 | 0.243270 | 0.296233 | — | — | — |
| windows_basic_stream_handle.test | LINK | 0.075072 | 0.243288 | 0.290862 | — | — | — |
| windows_basic_stream_handle_select.test | LINK | 0.080712 | 0.244090 | 0.301234 | — | — | — |
| windows_object_handle.test | LINK | 0.212066 | 0.666496 | 0.786855 | — | — | — |
| windows_object_handle_select.test | LINK | 0.220548 | 0.708214 | 0.975209 | — | — | — |
| windows_overlapped_ptr.test | LINK | 0.216926 | 0.720318 | 0.854802 | — | — | — |
| windows_overlapped_ptr_select.test | LINK | 0.227717 | 0.756003 | 1.068413 | — | — | — |
| windows_random_access_handle.test | LINK | 0.212198 | 0.677993 | 0.782592 | — | — | — |
| windows_random_access_handle_select.test | LINK | 0.219685 | 0.718458 | 0.975512 | — | — | — |
| windows_stream_handle.test | LINK | 0.211822 | 0.667696 | 0.780659 | — | — | — |
| windows_stream_handle_select.test | LINK | 0.218703 | 0.720368 | 0.986453 | — | — | — |
| writable_pipe.test | LINK | 0.502781 | 2.960701 | 2.517879 | — | — | — |
| writable_pipe_select.test | LINK | 0.594449 | 3.119203 | 2.652155 | — | — | — |
| write.test | RUN | 1.688117 | 15.462962 | 13.852062 | 0.002116 | 0.001965 | 0.001905 |
| write_select.test | RUN | 1.767677 | 15.650358 | 13.902704 | 0.002050 | 0.002010 | 0.001816 |
| write_at.test | RUN | 1.779784 | 21.037702 | 17.642516 | 0.002464 | 0.002022 | 0.002031 |
| write_at_select.test | RUN | 1.811789 | 21.021561 | 17.732902 | 0.002215 | 0.002084 | 0.001944 |
| any_executor.test | RUN | 0.706959 | 6.841671 | 5.584480 | 0.001648 | 0.001839 | 0.001673 |
| blocking.test | RUN | 1.548140 | 9.128940 | 11.436222 | 0.003476 | 0.003495 | 0.003492 |
| blocking_adaptation.test | RUN | 0.777820 | 3.842010 | 5.173943 | 0.002139 | 0.002306 | 0.002170 |
| context_as.test | RUN | 0.450059 | 2.714374 | 1.756615 | 0.001441 | 0.001756 | 0.001357 |
| executor.test | RUN | 0.115805 | 0.251475 | 0.301259 | 0.001429 | 0.001429 | 0.001269 |
| inline_exception_handling.test | RUN | 1.512827 | 8.558768 | 11.471915 | 0.002451 | 0.002382 | 0.002324 |
| invocable_archetype.test | RUN | 0.111833 | 0.245623 | 0.296287 | 0.001388 | 0.001338 | 0.001197 |
| mapping.test | RUN | 1.515564 | 8.172171 | 10.922964 | 0.002538 | 0.002480 | 0.002428 |
| outstanding_work.test | RUN | 0.701291 | 3.619127 | 4.954544 | 0.002288 | 0.002048 | 0.002212 |
| prefer_only.test | RUN | 0.224962 | 1.448614 | 1.098126 | 0.001423 | 0.001586 | 0.001278 |
| relationship.test | RUN | 0.602229 | 3.529822 | 4.984979 | 0.001544 | 0.002308 | 0.002032 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.993× | 1.000×, 0.986× | 0.991× |
| clang | 0.991× | 0.980×, 1.001× | 0.999× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1364 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/43740486413).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| any_completion_executor.test | 3 | 0.001245s | 0.001193s | 0.001219s | byte equality observed |
| any_completion_executor_select.test | 4 | 0.001202s | 0.001195s | 0.001209s | byte equality observed |
| any_completion_handler.test | 10 | 0.001033s | 0.001024s | 0.000997s | byte equality observed |
| any_completion_handler_select.test | 10 | 0.001037s | 0.001014s | 0.001004s | byte equality observed |
| any_io_executor.test | 6 | 0.001238s | 0.001204s | 0.001168s | byte equality observed |
| any_io_executor_select.test | 5 | 0.001203s | 0.001213s | 0.001183s | byte equality observed |
| append.test | 8 | 0.000997s | 0.000990s | 0.000970s | byte equality observed |
| append_select.test | 9 | 0.000974s | 0.000958s | 0.000954s | byte equality observed |
| as_tuple.test | 10 | 0.001049s | 0.001045s | 0.001003s | byte equality observed |
| as_tuple_select.test | 8 | 0.000970s | 0.000978s | 0.000972s | byte equality observed |
| bind_allocator.test | 1 | 0.001504s | 0.001452s | 0.001404s | byte equality observed |
| bind_allocator_select.test | 1 | 0.001187s | 0.001164s | 0.001115s | byte equality observed |
| bind_cancellation_slot.test | 10 | 0.000893s | 0.000909s | 0.000889s | byte equality observed |
| bind_cancellation_slot_select.test | 10 | 0.000799s | 0.000809s | 0.000800s | byte equality observed |
| bind_executor.test | 1 | 0.001500s | 0.001499s | 0.001524s | byte equality observed |
| bind_executor_select.test | 1 | 0.001778s | 0.001762s | 0.001852s | byte equality observed |
| bind_immediate_executor.test | 10 | 0.000918s | 0.000935s | 0.000897s | byte equality observed |
| bind_immediate_executor_select.test | 10 | 0.000867s | 0.000902s | 0.000864s | byte equality observed |
| buffer.test | 10 | 0.000862s | 0.000822s | 0.000844s | byte equality observed |
| buffer_select.test | 10 | 0.000828s | 0.000830s | 0.000842s | byte equality observed |
| buffered_read_stream.test | 10 | 0.001049s | 0.001020s | 0.001010s | byte equality observed |
| buffered_read_stream_select.test | 10 | 0.001008s | 0.001004s | 0.000995s | byte equality observed |
| buffered_stream.test | 10 | 0.001023s | 0.001003s | 0.001016s | byte equality observed |
| buffered_stream_select.test | 10 | 0.001004s | 0.000982s | 0.000971s | byte equality observed |
| buffered_write_stream.test | 10 | 0.000992s | 0.001000s | 0.000982s | byte equality observed |
| buffered_write_stream_select.test | 10 | 0.000989s | 0.000982s | 0.000966s | byte equality observed |
| buffers_iterator.test | 10 | 0.000815s | 0.000829s | 0.000808s | byte equality observed |
| buffers_iterator_select.test | 10 | 0.000805s | 0.000781s | 0.000781s | byte equality observed |
| cancel_after.test | 1 | 0.003462s | 0.003311s | 0.003574s | byte equality observed |
| cancel_after_select.test | 1 | 0.002819s | 0.002720s | 0.002850s | byte equality observed |
| cancel_at.test | 1 | 0.003492s | 0.003609s | 0.003838s | byte equality observed |
| cancel_at_select.test | 1 | 0.003583s | 0.003441s | 0.003693s | byte equality observed |
| co_composed.test | 10 | 0.000865s | 0.000866s | 0.000882s | byte equality observed |
| co_composed_select.test | 10 | 0.000800s | 0.000821s | 0.000804s | byte equality observed |
| compose.test | 1 | 0.001563s | 0.001506s | 0.001608s | byte equality observed |
| compose_select.test | 1 | 0.001277s | 0.001197s | 0.001245s | byte equality observed |
| composed.test | 1 | 0.001845s | 0.001788s | 0.001922s | byte equality observed |
| composed_select.test | 1 | 0.001416s | 0.001415s | 0.001492s | byte equality observed |
| config.test | 10 | 0.000919s | 0.000965s | 0.000930s | byte equality observed |
| config_select.test | 10 | 0.000909s | 0.000890s | 0.000873s | byte equality observed |
| connect_pipe.test | 10 | 0.000889s | 0.000878s | 0.000890s | byte equality observed |
| connect_pipe_select.test | 10 | 0.000876s | 0.000884s | 0.000877s | byte equality observed |
| consign.test | 10 | 0.000877s | 0.000872s | 0.000890s | byte equality observed |
| consign_select.test | 10 | 0.000838s | 0.000849s | 0.000834s | byte equality observed |
| deadline_timer.test | 1 | 0.002287s | 0.002305s | 0.002420s | byte equality observed |
| deadline_timer_select.test | 1 | 0.001993s | 0.001933s | 0.002058s | byte equality observed |
| deferred.test | 10 | 0.000835s | 0.000828s | 0.000835s | byte equality observed |
| deferred_select.test | 10 | 0.000741s | 0.000729s | 0.000762s | byte equality observed |
| disposition.test | 10 | 0.000780s | 0.000782s | 0.000796s | byte equality observed |
| disposition_select.test | 10 | 0.000798s | 0.000784s | 0.000789s | byte equality observed |
| error.test | 10 | 0.000765s | 0.000770s | 0.000766s | byte equality observed |
| error_select.test | 10 | 0.000770s | 0.000773s | 0.000759s | byte equality observed |
| inline_executor.test | 10 | 0.000771s | 0.000757s | 0.000770s | byte equality observed |
| inline_executor_select.test | 10 | 0.000772s | 0.000768s | 0.000766s | byte equality observed |
| inline_or_executor.test | 10 | 0.000784s | 0.000785s | 0.000775s | byte equality observed |
| inline_or_executor_select.test | 10 | 0.000783s | 0.000784s | 0.000770s | byte equality observed |
| io_context.test | 1 | 0.001836s | 0.001792s | 0.001872s | byte equality observed |
| io_context_select.test | 1 | 0.002246s | 0.002106s | 0.002216s | byte equality observed |
| io_context_strand.test | 1 | 0.002171s | 0.002061s | 0.002216s | byte equality observed |
| io_context_strand_select.test | 1 | 0.001816s | 0.001807s | 0.001818s | byte equality observed |
| ip_host_name.test | 10 | 0.000851s | 0.000855s | 0.000856s | byte equality observed |
| ip_host_name_select.test | 10 | 0.000777s | 0.000750s | 0.000753s | byte equality observed |
| ip_icmp.test | 10 | 0.000788s | 0.000792s | 0.000776s | byte equality observed |
| ip_icmp_select.test | 10 | 0.000786s | 0.000790s | 0.000767s | byte equality observed |
| ip_multicast.test | 10 | 0.000861s | 0.000843s | 0.000855s | byte equality observed |
| ip_multicast_select.test | 10 | 0.000836s | 0.000827s | 0.000824s | byte equality observed |
| ip_tcp.test | 10 | 0.001061s | 0.001034s | 0.001039s | byte equality observed |
| ip_tcp_select.test | 10 | 0.001015s | 0.000999s | 0.001002s | byte equality observed |
| ip_udp.test | 10 | 0.000867s | 0.000851s | 0.000851s | byte equality observed |
| ip_udp_select.test | 10 | 0.000858s | 0.000848s | 0.000840s | byte equality observed |
| ip_unicast.test | 10 | 0.000821s | 0.000817s | 0.000812s | byte equality observed |
| ip_unicast_select.test | 10 | 0.000817s | 0.000809s | 0.000800s | byte equality observed |
| ip_v6_only.test | 10 | 0.000825s | 0.000826s | 0.000814s | byte equality observed |
| ip_v6_only_select.test | 10 | 0.000803s | 0.000809s | 0.000791s | byte equality observed |
| is_read_buffered.test | 10 | 0.000764s | 0.000737s | 0.000759s | byte equality observed |
| is_read_buffered_select.test | 10 | 0.000751s | 0.000747s | 0.000726s | byte equality observed |
| is_write_buffered.test | 10 | 0.000757s | 0.000744s | 0.000745s | byte equality observed |
| is_write_buffered_select.test | 10 | 0.000760s | 0.000751s | 0.000748s | byte equality observed |
| prepend.test | 10 | 0.000821s | 0.000810s | 0.000802s | byte equality observed |
| prepend_select.test | 10 | 0.000791s | 0.000800s | 0.000779s | byte equality observed |
| read.test | 10 | 0.001106s | 0.001165s | 0.001069s | byte equality observed |
| read_at.test | 10 | 0.001321s | 0.001432s | 0.001311s | byte equality observed |
| read_at_select.test | 10 | 0.001319s | 0.001466s | 0.001307s | byte equality observed |
| read_select.test | 10 | 0.001100s | 0.001181s | 0.001060s | byte equality observed |
| read_until.test | 10 | 0.000915s | 0.000967s | 0.000882s | byte equality observed |
| read_until_select.test | 10 | 0.000970s | 0.000968s | 0.000881s | byte equality observed |
| recycling_allocator.test | 10 | 0.000812s | 0.000823s | 0.000773s | byte equality observed |
| recycling_allocator_select.test | 10 | 0.000839s | 0.000795s | 0.000812s | byte equality observed |
| signal_set.test | 10 | 0.000847s | 0.000861s | 0.000793s | byte equality observed |
| signal_set_select.test | 10 | 0.000822s | 0.000811s | 0.000828s | byte equality observed |
| socket_base.test | 10 | 0.000904s | 0.000891s | 0.000876s | byte equality observed |
| socket_base_select.test | 10 | 0.000908s | 0.000862s | 0.000895s | byte equality observed |
| spawn.test | 10 | 0.001015s | 0.000957s | 0.001009s | byte equality observed |
| spawn_select.test | 10 | 0.000974s | 0.000942s | 0.000940s | byte equality observed |
| static_thread_pool.test | 10 | 0.000845s | 0.000805s | 0.000831s | byte equality observed |
| static_thread_pool_select.test | 10 | 0.000775s | 0.000779s | 0.000790s | byte equality observed |
| strand.test | 1 | 0.001817s | 0.001719s | 0.001821s | byte equality observed |
| strand_select.test | 1 | 0.001429s | 0.001428s | 0.001534s | byte equality observed |
| streambuf.test | 10 | 0.000883s | 0.000859s | 0.000882s | byte equality observed |
| streambuf_select.test | 10 | 0.000831s | 0.000841s | 0.000850s | byte equality observed |
| thread_pool.test | 10 | 0.001540s | 0.001564s | 0.001559s | byte equality observed |
| thread_pool_select.test | 10 | 0.001506s | 0.001581s | 0.001509s | byte equality observed |
| write.test | 10 | 0.001222s | 0.001159s | 0.001188s | byte equality observed |
| write_at.test | 10 | 0.001309s | 0.001291s | 0.001288s | byte equality observed |
| write_at_select.test | 10 | 0.001309s | 0.001319s | 0.001284s | byte equality observed |
| write_select.test | 10 | 0.001201s | 0.001156s | 0.001160s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/43740486413).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
