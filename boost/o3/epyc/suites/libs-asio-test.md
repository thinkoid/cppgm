# libs/asio/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| any_completion_executor.test | RUN | 0.636523 | 3.951996 | 3.582651 | 0.002306 | 0.002550 | 0.002435 |
| any_completion_executor_select.test | RUN | 0.662768 | 3.940256 | 3.749254 | 0.002595 | 0.002501 | 0.002702 |
| any_completion_handler.test | RUN | 0.801874 | 3.472690 | 3.279858 | 0.001684 | 0.002320 | 0.001968 |
| any_completion_handler_select.test | RUN | 0.796735 | 3.611630 | 3.523215 | 0.001870 | 0.002118 | 0.001918 |
| any_io_executor.test | RUN | 0.688368 | 4.222156 | 3.820719 | 0.002410 | 0.002640 | 0.002397 |
| any_io_executor_select.test | RUN | 0.685932 | 4.131242 | 4.049750 | 0.002515 | 0.002559 | 0.002564 |
| append.test | RUN | 0.628220 | 3.293706 | 2.858204 | 0.001874 | 0.002116 | 0.002046 |
| append_select.test | RUN | 0.640870 | 3.356590 | 2.889243 | 0.001681 | 0.002101 | 0.001742 |
| as_tuple.test | RUN | 0.806195 | 4.036012 | 4.124417 | 0.002134 | 0.002174 | 0.001907 |
| as_tuple_select.test | RUN | 0.830947 | 3.959488 | 4.104123 | 0.001822 | 0.002072 | 0.001580 |
| associated_allocator.test | LINK | 0.174601 | 0.367530 | 0.453831 | — | — | — |
| associated_allocator_select.test | LINK | 0.176671 | 0.356078 | 0.460690 | — | — | — |
| associated_cancellation_slot.test | LINK | 0.191349 | 0.396392 | 0.488092 | — | — | — |
| associated_cancellation_slot_select.test | LINK | 0.197165 | 0.391535 | 0.494283 | — | — | — |
| associated_executor.test | LINK | 0.281275 | 0.679507 | 0.805199 | — | — | — |
| associated_executor_select.test | LINK | 0.288663 | 0.676072 | 0.803972 | — | — | — |
| associated_immediate_executor.test | LINK | 0.259236 | 0.642156 | 0.729239 | — | — | — |
| associated_immediate_executor_select.test | LINK | 0.260060 | 0.654780 | 0.731864 | — | — | — |
| associator.test | LINK | 0.147637 | 0.284046 | 0.378808 | — | — | — |
| associator_select.test | LINK | 0.149296 | 0.314740 | 0.394990 | — | — | — |
| awaitable.test | LINK | 0.153331 | 0.287204 | 0.397666 | — | — | — |
| awaitable_select.test | LINK | 0.149181 | 0.291480 | 0.384599 | — | — | — |
| basic_datagram_socket.test | LINK | 0.439957 | 0.918904 | 1.456867 | — | — | — |
| basic_datagram_socket_select.test | LINK | 0.452129 | 0.945210 | 1.475016 | — | — | — |
| basic_deadline_timer.test | LINK | 0.536104 | 1.106742 | 1.628961 | — | — | — |
| basic_deadline_timer_select.test | LINK | 0.547115 | 1.135001 | 1.653483 | — | — | — |
| basic_file.test | LINK | 0.148149 | 0.302912 | 0.387163 | — | — | — |
| basic_file_select.test | LINK | 0.145399 | 0.286018 | 0.382500 | — | — | — |
| basic_random_access_file.test | LINK | 0.145098 | 0.288835 | 0.390617 | — | — | — |
| basic_random_access_file_select.test | LINK | 0.145053 | 0.288399 | 0.393000 | — | — | — |
| basic_raw_socket.test | LINK | 0.441916 | 0.922707 | 1.475077 | — | — | — |
| basic_raw_socket_select.test | LINK | 0.453596 | 0.954745 | 1.521901 | — | — | — |
| basic_readable_pipe.test | LINK | 0.420686 | 0.882585 | 1.247078 | — | — | — |
| basic_readable_pipe_select.test | LINK | 0.437477 | 0.957084 | 1.534557 | — | — | — |
| basic_seq_packet_socket.test | LINK | 0.437516 | 0.903624 | 1.441545 | — | — | — |
| basic_seq_packet_socket_select.test | LINK | 0.450442 | 0.963502 | 1.507390 | — | — | — |
| basic_signal_set.test | LINK | 0.407474 | 0.878916 | 1.118155 | — | — | — |
| basic_signal_set_select.test | LINK | 0.424953 | 0.905918 | 1.442927 | — | — | — |
| basic_socket_acceptor.test | LINK | 0.443370 | 0.958032 | 1.453502 | — | — | — |
| basic_socket_acceptor_select.test | LINK | 0.465416 | 0.972117 | 1.509275 | — | — | — |
| basic_stream_file.test | LINK | 0.151038 | 0.283175 | 0.415229 | — | — | — |
| basic_stream_file_select.test | LINK | 0.147487 | 0.281304 | 0.403724 | — | — | — |
| basic_stream_socket.test | LINK | 0.466630 | 0.914744 | 1.451958 | — | — | — |
| basic_stream_socket_select.test | LINK | 0.474602 | 0.952675 | 1.501783 | — | — | — |
| basic_streambuf.test | LINK | 0.237427 | 0.440851 | 0.592816 | — | — | — |
| basic_streambuf_select.test | LINK | 0.235027 | 0.434880 | 0.593828 | — | — | — |
| basic_waitable_timer.test | LINK | 0.409345 | 0.856601 | 1.362350 | — | — | — |
| basic_waitable_timer_select.test | LINK | 0.421814 | 0.882177 | 1.399398 | — | — | — |
| basic_writable_pipe.test | LINK | 0.419449 | 0.878898 | 1.289578 | — | — | — |
| basic_writable_pipe_select.test | LINK | 0.441825 | 0.944513 | 1.528998 | — | — | — |
| bind_allocator.test | RUN | 0.674298 | 3.316788 | 3.193408 | 0.002531 | 0.002301 | 0.002183 |
| bind_allocator_select.test | RUN | 0.693511 | 3.411192 | 3.174636 | 0.002052 | 0.001880 | 0.001922 |
| bind_cancellation_slot.test | RUN | 0.689260 | 3.372647 | 3.260202 | 0.001650 | 0.001716 | 0.001441 |
| bind_cancellation_slot_select.test | RUN | 0.673675 | 3.387439 | 3.031113 | 0.001600 | 0.001600 | 0.001370 |
| bind_executor.test | RUN | 0.463767 | 2.280489 | 1.916806 | 0.002233 | 0.002214 | 0.002048 |
| bind_executor_select.test | RUN | 0.471141 | 2.327107 | 1.916122 | 0.001946 | 0.001974 | 0.001879 |
| bind_immediate_executor.test | RUN | 0.341481 | 1.867214 | 1.231090 | 0.001536 | 0.001396 | 0.001393 |
| bind_immediate_executor_select.test | RUN | 0.365539 | 1.845770 | 1.370350 | 0.001472 | 0.001404 | 0.001320 |
| buffer.test | RUN | 0.211146 | 0.816136 | 0.761306 | 0.001419 | 0.001465 | 0.001332 |
| buffer_select.test | RUN | 0.213317 | 0.815509 | 0.767379 | 0.001322 | 0.001576 | 0.001334 |
| buffer_registration.test | LINK | 0.173396 | 0.411414 | 0.458196 | — | — | — |
| buffer_registration_select.test | LINK | 0.170076 | 0.418954 | 0.452039 | — | — | — |
| buffered_read_stream.test | RUN | 0.717302 | 5.004378 | 4.670529 | 0.001760 | 0.002337 | 0.002268 |
| buffered_read_stream_select.test | RUN | 0.722005 | 5.140799 | 4.527757 | 0.001778 | 0.002402 | 0.002329 |
| buffered_stream.test | RUN | 0.980350 | 7.832026 | 7.793037 | 0.002511 | 0.002356 | 0.002403 |
| buffered_stream_select.test | RUN | 1.117344 | 7.883026 | 7.521414 | 0.002304 | 0.002387 | 0.002224 |
| buffered_write_stream.test | RUN | 1.181662 | 6.716284 | 6.647669 | 0.002216 | 0.001798 | 0.002318 |
| buffered_write_stream_select.test | RUN | 1.200578 | 6.784168 | 6.356912 | 0.002100 | 0.002180 | 0.002156 |
| buffers_iterator.test | RUN | 0.398276 | 0.633185 | 1.078602 | 0.001724 | 0.001883 | 0.001614 |
| buffers_iterator_select.test | RUN | 0.396566 | 0.619613 | 1.077678 | 0.001770 | 0.001935 | 0.001693 |
| cancel_after.test | RUN | 0.955479 | 5.270004 | 4.881140 | 0.003840 | 0.004255 | 0.003533 |
| cancel_after_select.test | RUN | 0.965475 | 5.290036 | 4.858624 | 0.003511 | 0.004095 | 0.003558 |
| cancel_at.test | RUN | 0.880445 | 4.755306 | 4.619943 | 0.003469 | 0.004023 | 0.003417 |
| cancel_at_select.test | RUN | 0.962127 | 4.608857 | 4.589482 | 0.003386 | 0.003741 | 0.003336 |
| cancellation_signal.test | LINK | 0.118635 | 0.251909 | 0.294511 | — | — | — |
| cancellation_signal_select.test | LINK | 0.150123 | 0.254233 | 0.298171 | — | — | — |
| cancellation_state.test | LINK | 0.171399 | 0.255935 | 0.326377 | — | — | — |
| cancellation_state_select.test | LINK | 0.184021 | 0.256254 | 0.473296 | — | — | — |
| cancellation_type.test | LINK | 0.135690 | 0.194664 | 0.399671 | — | — | — |
| cancellation_type_select.test | LINK | 0.136589 | 0.200732 | 0.358216 | — | — | — |
| co_composed.test | RUN | 0.138087 | 0.200380 | 0.385654 | 0.001621 | 0.001418 | 0.001724 |
| co_composed_select.test | RUN | 0.137314 | 0.198097 | 0.370332 | 0.001553 | 0.001631 | 0.001639 |
| co_spawn.test | LINK | 0.136830 | 0.203045 | 0.382092 | — | — | — |
| co_spawn_select.test | LINK | 0.139179 | 0.290080 | 0.385997 | — | — | — |
| completion_condition.test | LINK | 0.177252 | 0.452047 | 0.502926 | — | — | — |
| completion_condition_select.test | LINK | 0.176705 | 0.463513 | 0.498401 | — | — | — |
| compose.test | RUN | 0.794953 | 4.218353 | 4.034225 | 0.002377 | 0.002495 | 0.002364 |
| compose_select.test | RUN | 0.796935 | 4.116558 | 4.009938 | 0.002023 | 0.002425 | 0.001838 |
| composed.test | RUN | 0.786172 | 4.093822 | 3.954261 | 0.002245 | 0.001890 | 0.002138 |
| composed_select.test | RUN | 0.783811 | 4.047169 | 3.897862 | 0.002110 | 0.002100 | 0.001879 |
| config.test | RUN | 0.411726 | 2.589300 | 1.691490 | 0.001869 | 0.002043 | 0.001896 |
| config_select.test | RUN | 0.461299 | 2.804384 | 1.984000 | 0.001992 | 0.001922 | 0.001843 |
| connect.test | LINK | 1.297233 | 8.711016 | 8.240515 | — | — | — |
| connect_select.test | LINK | 1.315685 | 8.821019 | 8.214412 | — | — | — |
| connect_pipe.test | RUN | 0.725250 | 3.267264 | 3.123266 | 0.001942 | 0.001744 | 0.001872 |
| connect_pipe_select.test | RUN | 0.752471 | 3.428433 | 3.362078 | 0.001865 | 0.002037 | 0.001938 |
| consign.test | RUN | 0.616232 | 3.194205 | 2.913625 | 0.001476 | 0.001990 | 0.001995 |
| consign_select.test | RUN | 0.633303 | 3.296124 | 2.930729 | 0.001960 | 0.001752 | 0.001899 |
| coroutine.test | LINK | 0.143350 | 0.322887 | 0.424285 | — | — | — |
| coroutine_select.test | LINK | 0.141007 | 0.351825 | 0.398389 | — | — | — |
| deadline_timer.test | RUN | 0.891855 | 4.307106 | 4.169254 | 0.003335 | 0.003234 | 0.003328 |
| deadline_timer_select.test | RUN | 0.892609 | 4.274905 | 4.134848 | 0.002696 | 0.003221 | 0.003393 |
| deferred.test | RUN | 0.163360 | 0.311854 | 0.394913 | 0.001850 | 0.001816 | 0.001876 |
| deferred_select.test | RUN | 0.165289 | 0.322089 | 0.386538 | 0.001952 | 0.001870 | 0.001826 |
| detached.test | LINK | 0.187236 | 0.354118 | 0.439341 | — | — | — |
| detached_select.test | LINK | 0.177788 | 0.343627 | 0.445945 | — | — | — |
| disposition.test | RUN | 0.164046 | 0.801058 | 0.812615 | 0.001477 | 0.002080 | 0.001828 |
| disposition_select.test | RUN | 0.167997 | 0.804288 | 0.810431 | 0.001524 | 0.002126 | 0.001949 |
| error.test | RUN | 0.151654 | 0.779210 | 0.723438 | 0.001459 | 0.002013 | 0.001870 |
| error_select.test | RUN | 0.157043 | 0.775574 | 0.733956 | 0.001558 | 0.001967 | 0.001944 |
| file_base.test | LINK | 0.198719 | 0.651612 | 0.813447 | — | — | — |
| file_base_select.test | LINK | 0.202951 | 0.642346 | 0.745215 | — | — | — |
| fwd_first.test | LINK | 0.451011 | 1.050307 | 1.430516 | — | — | — |
| fwd_last.test | LINK | 0.449497 | 0.959991 | 1.416581 | — | — | — |
| generic_basic_endpoint.test | LINK | 0.164671 | 0.393347 | 0.505889 | — | — | — |
| generic_basic_endpoint_select.test | LINK | 0.170598 | 0.401234 | 0.507499 | — | — | — |
| generic_datagram_protocol.test | LINK | 0.678962 | 3.527507 | 2.757558 | — | — | — |
| generic_datagram_protocol_select.test | LINK | 0.675707 | 3.658536 | 2.737031 | — | — | — |
| generic_raw_protocol.test | LINK | 0.670876 | 3.417827 | 2.801910 | — | — | — |
| generic_raw_protocol_select.test | LINK | 0.666922 | 3.540608 | 2.735988 | — | — | — |
| generic_seq_packet_protocol.test | LINK | 0.579786 | 2.874082 | 2.433991 | — | — | — |
| generic_seq_packet_protocol_select.test | LINK | 0.588923 | 2.829381 | 2.420126 | — | — | — |
| generic_stream_protocol.test | LINK | 0.596445 | 2.969887 | 2.562805 | — | — | — |
| generic_stream_protocol_select.test | LINK | 0.601814 | 3.072092 | 2.524475 | — | — | — |
| high_resolution_timer.test | LINK | 0.271587 | 0.557740 | 0.802030 | — | — | — |
| high_resolution_timer_select.test | LINK | 0.273794 | 0.589985 | 0.802903 | — | — | — |
| immediate.test | LINK | 0.190204 | 0.434814 | 0.493570 | — | — | — |
| immediate_select.test | LINK | 0.188459 | 0.429469 | 0.487681 | — | — | — |
| inline_executor.test | RUN | 0.232245 | 0.665100 | 0.742774 | 0.001418 | 0.001460 | 0.001379 |
| inline_executor_select.test | RUN | 0.225609 | 0.660239 | 0.735226 | 0.001316 | 0.001438 | 0.001265 |
| inline_or_executor.test | RUN | 0.354310 | 1.935353 | 1.424539 | 0.001387 | 0.001484 | 0.001348 |
| inline_or_executor_select.test | RUN | 0.365753 | 1.987066 | 1.529939 | 0.001420 | 0.001420 | 0.001348 |
| io_context.test | RUN | 0.515052 | 2.971966 | 2.458460 | 0.002404 | 0.002291 | 0.002204 |
| io_context_select.test | RUN | 0.524199 | 2.927718 | 2.432152 | 0.002240 | 0.002079 | 0.002234 |
| io_context_strand.test | RUN | 0.505286 | 2.522347 | 2.136935 | 0.002196 | 0.002337 | 0.002472 |
| io_context_strand_select.test | RUN | 0.512396 | 2.485656 | 2.101319 | 0.002399 | 0.002227 | 0.002060 |
| ip_address.test | LINK | 0.192296 | 0.587591 | 0.637811 | — | — | — |
| ip_address_select.test | LINK | 0.195875 | 0.588158 | 0.633408 | — | — | — |
| ip_address_v4.test | LINK | 0.195152 | 0.621635 | 0.696645 | — | — | — |
| ip_address_v4_select.test | LINK | 0.192754 | 0.620611 | 0.685841 | — | — | — |
| ip_address_v6.test | LINK | 0.215305 | 0.808880 | 0.847431 | — | — | — |
| ip_address_v6_select.test | LINK | 0.242765 | 0.808454 | 0.853070 | — | — | — |
| ip_basic_endpoint.test | LINK | 0.173771 | 0.398304 | 0.561694 | — | — | — |
| ip_basic_endpoint_select.test | LINK | 0.170403 | 0.396510 | 0.556532 | — | — | — |
| ip_basic_resolver.test | LINK | 0.275896 | 0.576715 | 1.053767 | — | — | — |
| ip_basic_resolver_select.test | LINK | 0.282426 | 0.587202 | 1.125122 | — | — | — |
| ip_basic_resolver_entry.test | LINK | 0.096974 | 0.192985 | 0.414279 | — | — | — |
| ip_basic_resolver_entry_select.test | LINK | 0.095958 | 0.190449 | 0.407105 | — | — | — |
| ip_basic_resolver_iterator.test | LINK | 0.169703 | 0.387781 | 0.913797 | — | — | — |
| ip_basic_resolver_iterator_select.test | LINK | 0.169989 | 0.385802 | 0.936042 | — | — | — |
| ip_basic_resolver_query.test | LINK | 0.159674 | 0.377918 | 0.915616 | — | — | — |
| ip_basic_resolver_query_select.test | LINK | 0.162238 | 0.375049 | 0.885228 | — | — | — |
| ip_host_name.test | RUN | 0.173103 | 0.498738 | 0.973542 | 0.001454 | 0.001462 | 0.001808 |
| ip_host_name_select.test | RUN | 0.173607 | 0.498669 | 0.988073 | 0.001560 | 0.001430 | 0.001741 |
| ip_icmp.test | RUN | 0.807223 | 6.449510 | 6.003717 | 0.001457 | 0.001978 | 0.001788 |
| ip_icmp_select.test | RUN | 0.794070 | 6.783687 | 5.817021 | 0.001440 | 0.001929 | 0.001718 |
| ip_multicast.test | RUN | 0.513873 | 3.538892 | 3.407303 | 0.001569 | 0.002182 | 0.001788 |
| ip_multicast_select.test | RUN | 0.496887 | 3.539804 | 3.377609 | 0.001602 | 0.002096 | 0.001936 |
| ip_resolver_query_base.test | LINK | 0.116315 | 0.324076 | 0.403711 | — | — | — |
| ip_resolver_query_base_select.test | LINK | 0.117453 | 0.339194 | 0.405075 | — | — | — |
| ip_tcp.test | RUN | 1.167498 | 10.032789 | 9.049404 | 0.002032 | 0.002764 | 0.002634 |
| ip_tcp_select.test | RUN | 1.157113 | 10.488850 | 8.823716 | 0.001987 | 0.002565 | 0.002666 |
| ip_udp.test | RUN | 0.836939 | 7.224909 | 6.262714 | 0.001750 | 0.002136 | 0.001714 |
| ip_udp_select.test | RUN | 0.844767 | 7.392870 | 6.083961 | 0.001701 | 0.002180 | 0.001799 |
| ip_unicast.test | RUN | 0.434565 | 3.168694 | 2.980858 | 0.001604 | 0.002729 | 0.001961 |
| ip_unicast_select.test | RUN | 0.435687 | 3.223455 | 2.962351 | 0.001636 | 0.002108 | 0.001686 |
| ip_v6_only.test | RUN | 0.453576 | 3.320677 | 3.078923 | 0.001454 | 0.002210 | 0.001786 |
| ip_v6_only_select.test | RUN | 0.459333 | 3.362557 | 3.048228 | 0.001456 | 0.002058 | 0.001916 |
| is_read_buffered.test | RUN | 0.311037 | 1.037064 | 1.688032 | 0.001426 | 0.001869 | 0.001930 |
| is_read_buffered_select.test | RUN | 0.326974 | 1.051164 | 1.716935 | 0.001472 | 0.001921 | 0.001324 |
| is_write_buffered.test | RUN | 0.321612 | 1.028489 | 1.667630 | 0.001453 | 0.001876 | 0.001596 |
| is_write_buffered_select.test | RUN | 0.336321 | 1.041418 | 1.684217 | 0.001393 | 0.001510 | 0.001238 |
| local_basic_endpoint.test | LINK | 0.164192 | 0.587316 | 0.900311 | — | — | — |
| local_basic_endpoint_select.test | LINK | 0.165328 | 0.544794 | 0.909069 | — | — | — |
| local_connect_pair.test | LINK | 0.407967 | 3.187516 | 2.857715 | — | — | — |
| local_connect_pair_select.test | LINK | 0.421517 | 3.156742 | 2.837166 | — | — | — |
| local_datagram_protocol.test | LINK | 0.781196 | 4.153220 | 3.972781 | — | — | — |
| local_datagram_protocol_select.test | LINK | 0.841663 | 4.201878 | 3.931850 | — | — | — |
| local_seq_packet_protocol.test | LINK | 0.825407 | 4.109300 | 3.904832 | — | — | — |
| local_seq_packet_protocol_select.test | LINK | 0.833417 | 4.164349 | 3.918732 | — | — | — |
| local_stream_protocol.test | LINK | 0.784478 | 3.937862 | 3.710008 | — | — | — |
| local_stream_protocol_select.test | LINK | 0.811415 | 3.953514 | 3.665421 | — | — | — |
| placeholders.test | LINK | 0.155009 | 0.324052 | 0.441572 | — | — | — |
| placeholders_select.test | LINK | 0.147966 | 0.315135 | 0.422765 | — | — | — |
| posix_basic_descriptor.test | LINK | 0.412099 | 0.866114 | 1.221380 | — | — | — |
| posix_basic_descriptor_select.test | LINK | 0.444386 | 0.895065 | 1.519009 | — | — | — |
| posix_basic_stream_descriptor.test | LINK | 0.413517 | 0.891258 | 1.241450 | — | — | — |
| posix_basic_stream_descriptor_select.test | LINK | 0.426399 | 0.919290 | 1.494638 | — | — | — |
| posix_descriptor_base.test | LINK | 0.168723 | 0.327246 | 0.431914 | — | — | — |
| posix_descriptor_base_select.test | LINK | 0.167512 | 0.331164 | 0.398585 | — | — | — |
| posix_stream_descriptor.test | LINK | 0.797744 | 3.965065 | 3.635419 | — | — | — |
| posix_stream_descriptor_select.test | LINK | 0.810592 | 4.014677 | 3.697640 | — | — | — |
| prepend.test | RUN | 0.626907 | 3.220456 | 2.894847 | 0.001917 | 0.002066 | 0.001849 |
| prepend_select.test | RUN | 0.652428 | 3.321566 | 2.898223 | 0.001784 | 0.002128 | 0.001794 |
| random_access_file.test | LINK | 0.389619 | 0.763344 | 0.970299 | — | — | — |
| random_access_file_select.test | LINK | 0.389241 | 0.834079 | 1.301084 | — | — | — |
| read.test | RUN | 1.916798 | 20.998061 | 16.666896 | 0.002656 | 0.002394 | 0.002513 |
| read_select.test | RUN | 1.945645 | 20.694967 | 16.902914 | 0.002483 | 0.002238 | 0.002522 |
| read_at.test | RUN | 1.953925 | 30.738427 | 22.672984 | 0.002910 | 0.003158 | 0.002497 |
| read_at_select.test | RUN | 1.944333 | 30.593294 | 22.742246 | 0.002847 | 0.003311 | 0.002656 |
| read_until.test | RUN | 1.011561 | 7.585728 | 6.529658 | 0.002186 | 0.002020 | 0.002022 |
| read_until_select.test | RUN | 1.034641 | 7.684530 | 6.693071 | 0.002005 | 0.002093 | 0.001928 |
| readable_pipe.test | LINK | 0.654485 | 3.145812 | 2.841309 | — | — | — |
| readable_pipe_select.test | LINK | 0.668377 | 3.308266 | 3.036324 | — | — | — |
| recycling_allocator.test | RUN | 0.210460 | 0.494106 | 0.621209 | 0.001872 | 0.001751 | 0.001682 |
| recycling_allocator_select.test | RUN | 0.204358 | 0.483155 | 0.619220 | 0.001932 | 0.001575 | 0.001689 |
| redirect_disposition.test | LINK | 0.846613 | 4.564929 | 4.422418 | — | — | — |
| redirect_disposition_select.test | LINK | 0.860603 | 4.554983 | 4.441366 | — | — | — |
| redirect_error.test | LINK | 0.761985 | 3.784931 | 3.847754 | — | — | — |
| redirect_error_select.test | LINK | 0.761761 | 3.771349 | 3.842380 | — | — | — |
| registered_buffer.test | LINK | 0.202923 | 0.404091 | 0.557054 | — | — | — |
| registered_buffer_select.test | LINK | 0.201955 | 0.411753 | 0.552943 | — | — | — |
| signal_set.test | RUN | 0.631027 | 3.152439 | 2.675777 | 0.001774 | 0.001836 | 0.001864 |
| signal_set_select.test | RUN | 0.673311 | 3.284211 | 2.966751 | 0.001937 | 0.001828 | 0.001752 |
| signal_set_base.test | LINK | 0.172541 | 0.322351 | 0.417836 | — | — | — |
| signal_set_base_select.test | LINK | 0.181853 | 0.316374 | 0.418388 | — | — | — |
| socket_base.test | RUN | 0.783905 | 4.789731 | 4.143105 | 0.002118 | 0.002020 | 0.001754 |
| socket_base_select.test | RUN | 0.792202 | 4.612193 | 4.163971 | 0.002111 | 0.001798 | 0.001857 |
| spawn.test | RUN | 1.273950 | 7.716101 | 7.062519 | 0.001932 | 0.001915 | 0.002226 |
| spawn_select.test | RUN | 1.302154 | 7.702285 | 7.085629 | 0.002202 | 0.002080 | 0.002213 |
| static_thread_pool.test | RUN | 0.376672 | 0.751846 | 0.995580 | 0.001662 | 0.001900 | 0.001844 |
| static_thread_pool_select.test | RUN | 0.404068 | 0.820940 | 1.242605 | 0.001680 | 0.001814 | 0.001794 |
| steady_timer.test | LINK | 0.418714 | 0.854886 | 1.354493 | — | — | — |
| steady_timer_select.test | LINK | 0.415214 | 0.900937 | 1.436936 | — | — | — |
| strand.test | RUN | 0.850713 | 4.406623 | 4.180088 | 0.002447 | 0.002969 | 0.002681 |
| strand_select.test | RUN | 0.870920 | 4.365591 | 4.038359 | 0.002710 | 0.002858 | 0.002726 |
| stream_file.test | LINK | 0.386524 | 0.795777 | 1.036557 | — | — | — |
| stream_file_select.test | LINK | 0.405051 | 0.803991 | 1.282611 | — | — | — |
| streambuf.test | RUN | 0.185057 | 0.443691 | 0.701639 | 0.001405 | 0.001476 | 0.001765 |
| streambuf_select.test | RUN | 0.167185 | 0.445432 | 0.593185 | 0.001508 | 0.001478 | 0.001273 |
| system_timer.test | LINK | 0.547877 | 2.907896 | 2.336841 | — | — | — |
| system_timer_select.test | LINK | 0.553343 | 2.824181 | 2.297367 | — | — | — |
| system_context.test | LINK | 0.253833 | 0.514722 | 0.579195 | — | — | — |
| system_context_select.test | LINK | 0.266601 | 0.552124 | 0.726300 | — | — | — |
| system_executor.test | LINK | 0.326136 | 1.647249 | 1.116216 | — | — | — |
| system_executor_select.test | LINK | 0.333528 | 1.614096 | 1.241551 | — | — | — |
| this_coro.test | LINK | 0.099325 | 0.198062 | 0.230436 | — | — | — |
| this_coro_select.test | LINK | 0.097334 | 0.199837 | 0.236338 | — | — | — |
| thread_pool.test | RUN | 0.380267 | 2.500249 | 1.415571 | 0.003052 | 0.003302 | 0.002438 |
| thread_pool_select.test | RUN | 0.394642 | 2.465298 | 1.587418 | 0.002778 | 0.003170 | 0.002623 |
| time_traits.test | LINK | 0.231152 | 0.609707 | 0.477582 | — | — | — |
| time_traits_select.test | LINK | 0.233074 | 0.614911 | 0.474351 | — | — | — |
| ts_buffer.test | LINK | 0.205062 | 0.657456 | 0.502885 | — | — | — |
| ts_buffer_select.test | LINK | 0.209920 | 0.668552 | 0.602677 | — | — | — |
| ts_executor.test | LINK | 0.299781 | 0.944060 | 1.222278 | — | — | — |
| ts_executor_select.test | LINK | 0.309641 | 0.982586 | 1.574813 | — | — | — |
| ts_internet.test | LINK | 0.326914 | 1.027664 | 1.649005 | — | — | — |
| ts_internet_select.test | LINK | 0.331543 | 1.048408 | 1.672473 | — | — | — |
| ts_io_context.test | LINK | 0.264684 | 0.763643 | 0.966374 | — | — | — |
| ts_io_context_select.test | LINK | 0.273267 | 0.825750 | 1.226398 | — | — | — |
| ts_net.test | LINK | 0.379251 | 1.225308 | 2.049050 | — | — | — |
| ts_net_select.test | LINK | 0.397519 | 1.247058 | 2.052216 | — | — | — |
| ts_netfwd.test | LINK | 0.377401 | 1.208069 | 2.014438 | — | — | — |
| ts_netfwd_select.test | LINK | 0.390922 | 1.218828 | 2.063164 | — | — | — |
| ts_socket.test | LINK | 0.315690 | 0.950432 | 1.559255 | — | — | — |
| ts_socket_select.test | LINK | 0.332639 | 0.980133 | 1.589549 | — | — | — |
| ts_timer.test | LINK | 0.290298 | 0.857011 | 1.340564 | — | — | — |
| ts_timer_select.test | LINK | 0.280501 | 0.809269 | 1.370334 | — | — | — |
| use_awaitable.test | LINK | 0.096607 | 0.300133 | 0.381991 | — | — | — |
| use_awaitable_select.test | LINK | 0.099741 | 0.256026 | 0.380001 | — | — | — |
| wait_traits.test | LINK | 0.098584 | 0.247064 | 0.401740 | — | — | — |
| wait_traits_select.test | LINK | 0.096886 | 0.287267 | 0.388320 | — | — | — |
| windows_basic_object_handle.test | LINK | 0.095125 | 0.295850 | 0.383221 | — | — | — |
| windows_basic_object_handle_select.test | LINK | 0.097727 | 0.281273 | 0.390322 | — | — | — |
| windows_basic_overlapped_handle.test | LINK | 0.096580 | 0.291315 | 0.395368 | — | — | — |
| windows_basic_overlapped_handle_select.test | LINK | 0.094781 | 0.283919 | 0.382716 | — | — | — |
| windows_basic_random_access_handle.test | LINK | 0.096940 | 0.294716 | 0.380284 | — | — | — |
| windows_basic_random_access_handle_select.test | LINK | 0.095777 | 0.291062 | 0.392327 | — | — | — |
| windows_basic_stream_handle.test | LINK | 0.114266 | 0.293701 | 0.397437 | — | — | — |
| windows_basic_stream_handle_select.test | LINK | 0.134642 | 0.297991 | 0.383984 | — | — | — |
| windows_object_handle.test | LINK | 0.378462 | 0.781767 | 0.988920 | — | — | — |
| windows_object_handle_select.test | LINK | 0.380284 | 0.852191 | 1.293050 | — | — | — |
| windows_overlapped_ptr.test | LINK | 0.381631 | 0.831753 | 1.142622 | — | — | — |
| windows_overlapped_ptr_select.test | LINK | 0.414324 | 0.902346 | 1.393898 | — | — | — |
| windows_random_access_handle.test | LINK | 0.367852 | 0.793164 | 1.002428 | — | — | — |
| windows_random_access_handle_select.test | LINK | 0.381277 | 0.836094 | 1.284526 | — | — | — |
| windows_stream_handle.test | LINK | 0.371941 | 0.790670 | 1.057009 | — | — | — |
| windows_stream_handle_select.test | LINK | 0.392923 | 0.853771 | 1.284426 | — | — | — |
| writable_pipe.test | LINK | 0.651260 | 3.240108 | 3.012608 | — | — | — |
| writable_pipe_select.test | LINK | 0.664218 | 3.373507 | 3.235282 | — | — | — |
| write.test | RUN | 1.875536 | 17.375399 | 16.702058 | 0.002696 | 0.002584 | 0.002464 |
| write_select.test | RUN | 1.900479 | 17.263085 | 16.856264 | 0.002575 | 0.002512 | 0.002667 |
| write_at.test | RUN | 1.946098 | 25.134277 | 20.829672 | 0.002810 | 0.002578 | 0.002677 |
| write_at_select.test | RUN | 1.976574 | 24.554552 | 21.215588 | 0.002676 | 0.002961 | 0.002751 |
| any_executor.test | RUN | 0.801928 | 8.191022 | 7.082376 | 0.002591 | 0.002500 | 0.002738 |
| blocking.test | RUN | 1.903005 | 9.613184 | 14.078070 | 0.007593 | 0.006508 | 0.007459 |
| blocking_adaptation.test | RUN | 0.965626 | 4.183270 | 6.252999 | 0.004172 | 0.004344 | 0.004161 |
| context_as.test | RUN | 0.527782 | 2.895206 | 2.096547 | 0.001998 | 0.002055 | 0.001923 |
| executor.test | RUN | 0.150848 | 0.307464 | 0.403709 | 0.001823 | 0.001952 | 0.001802 |
| inline_exception_handling.test | RUN | 2.000349 | 9.171231 | 13.968686 | 0.007334 | 0.005306 | 0.005077 |
| invocable_archetype.test | RUN | 0.146429 | 0.325787 | 0.394463 | 0.001619 | 0.001812 | 0.001862 |
| mapping.test | RUN | 1.851889 | 9.301044 | 12.871456 | 0.005427 | 0.005347 | 0.005172 |
| outstanding_work.test | RUN | 0.883835 | 3.843454 | 6.087184 | 0.004340 | 0.004242 | 0.004147 |
| prefer_only.test | RUN | 0.291026 | 1.644303 | 1.374444 | 0.001924 | 0.001885 | 0.001691 |
| relationship.test | RUN | 0.664343 | 3.515574 | 5.929660 | 0.002938 | 0.003079 | 0.004110 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.999× | 1.011×, 0.987× | 1.026× |
| clang | 0.975× | 0.969×, 0.980× | 0.991× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1363 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43648658351).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| any_completion_executor.test | 3 | 0.001681s | 0.001648s | 0.001591s | byte equality observed |
| any_completion_executor_select.test | 4 | 0.001621s | 0.001617s | 0.001596s | byte equality observed |
| any_completion_handler.test | 8 | 0.001286s | 0.001284s | 0.001270s | byte equality observed |
| any_completion_handler_select.test | 9 | 0.001286s | 0.001249s | 0.001254s | byte equality observed |
| any_io_executor.test | 5 | 0.001616s | 0.001603s | 0.001616s | byte equality observed |
| any_io_executor_select.test | 5 | 0.001607s | 0.001588s | 0.001568s | byte equality observed |
| append.test | 10 | 0.001221s | 0.001221s | 0.001217s | byte equality observed |
| append_select.test | 9 | 0.001211s | 0.001188s | 0.001171s | byte equality observed |
| as_tuple.test | 9 | 0.001291s | 0.001289s | 0.001290s | byte equality observed |
| as_tuple_select.test | 10 | 0.001183s | 0.001237s | 0.001219s | byte equality observed |
| bind_allocator.test | 1 | 0.001698s | 0.001695s | 0.001694s | byte equality observed |
| bind_allocator_select.test | 1 | 0.001455s | 0.001462s | 0.001451s | byte equality observed |
| bind_cancellation_slot.test | 10 | 0.001174s | 0.001125s | 0.001136s | byte equality observed |
| bind_cancellation_slot_select.test | 10 | 0.001072s | 0.001044s | 0.001034s | byte equality observed |
| bind_executor.test | 1 | 0.001721s | 0.001722s | 0.001627s | byte equality observed |
| bind_executor_select.test | 1 | 0.002018s | 0.001994s | 0.001946s | byte equality observed |
| bind_immediate_executor.test | 10 | 0.001102s | 0.001111s | 0.001123s | byte equality observed |
| bind_immediate_executor_select.test | 10 | 0.001096s | 0.001077s | 0.001077s | byte equality observed |
| buffer.test | 10 | 0.001040s | 0.001031s | 0.001050s | byte equality observed |
| buffer_select.test | 10 | 0.001044s | 0.001067s | 0.001014s | byte equality observed |
| buffered_read_stream.test | 10 | 0.001388s | 0.001329s | 0.001344s | byte equality observed |
| buffered_read_stream_select.test | 10 | 0.001321s | 0.001295s | 0.001324s | byte equality observed |
| buffered_stream.test | 10 | 0.001355s | 0.001334s | 0.001298s | byte equality observed |
| buffered_stream_select.test | 10 | 0.001341s | 0.001297s | 0.001295s | byte equality observed |
| buffered_write_stream.test | 10 | 0.001317s | 0.001319s | 0.001330s | byte equality observed |
| buffered_write_stream_select.test | 10 | 0.001307s | 0.001294s | 0.001300s | byte equality observed |
| buffers_iterator.test | 10 | 0.001037s | 0.001016s | 0.001005s | byte equality observed |
| buffers_iterator_select.test | 10 | 0.001002s | 0.001007s | 0.000994s | byte equality observed |
| cancel_after.test | 1 | 0.003636s | 0.003519s | 0.003263s | byte equality observed |
| cancel_after_select.test | 1 | 0.002959s | 0.002858s | 0.002762s | byte equality observed |
| cancel_at.test | 1 | 0.003683s | 0.003551s | 0.003643s | byte equality observed |
| cancel_at_select.test | 1 | 0.003714s | 0.003490s | 0.003454s | byte equality observed |
| co_composed.test | 10 | 0.001028s | 0.001041s | 0.001076s | byte equality observed |
| co_composed_select.test | 10 | 0.000993s | 0.001029s | 0.000985s | byte equality observed |
| compose.test | 1 | 0.001733s | 0.001661s | 0.001675s | byte equality observed |
| compose_select.test | 1 | 0.001447s | 0.001487s | 0.001462s | byte equality observed |
| composed.test | 1 | 0.002098s | 0.001973s | 0.002053s | byte equality observed |
| composed_select.test | 1 | 0.001710s | 0.001678s | 0.001633s | byte equality observed |
| config.test | 8 | 0.001122s | 0.001108s | 0.001102s | byte equality observed |
| config_select.test | 8 | 0.001100s | 0.001058s | 0.001030s | byte equality observed |
| connect_pipe.test | 10 | 0.001133s | 0.001074s | 0.001063s | byte equality observed |
| connect_pipe_select.test | 10 | 0.001112s | 0.001084s | 0.001038s | byte equality observed |
| consign.test | 10 | 0.001096s | 0.001102s | 0.001040s | byte equality observed |
| consign_select.test | 10 | 0.001059s | 0.001039s | 0.001027s | byte equality observed |
| deadline_timer.test | 1 | 0.002380s | 0.002367s | 0.002405s | byte equality observed |
| deadline_timer_select.test | 1 | 0.002188s | 0.002284s | 0.002241s | byte equality observed |
| deferred.test | 10 | 0.001009s | 0.001035s | 0.001001s | byte equality observed |
| deferred_select.test | 10 | 0.000951s | 0.000968s | 0.000937s | byte equality observed |
| disposition.test | 10 | 0.001015s | 0.001020s | 0.001014s | byte equality observed |
| disposition_select.test | 10 | 0.001017s | 0.001024s | 0.001009s | byte equality observed |
| error.test | 10 | 0.000988s | 0.001001s | 0.000987s | byte equality observed |
| error_select.test | 10 | 0.000997s | 0.000992s | 0.000981s | byte equality observed |
| inline_executor.test | 10 | 0.001004s | 0.000985s | 0.000991s | byte equality observed |
| inline_executor_select.test | 10 | 0.001002s | 0.000993s | 0.000980s | byte equality observed |
| inline_or_executor.test | 10 | 0.001009s | 0.001011s | 0.000980s | byte equality observed |
| inline_or_executor_select.test | 10 | 0.001002s | 0.001047s | 0.000975s | byte equality observed |
| io_context.test | 1 | 0.001977s | 0.001953s | 0.001888s | byte equality observed |
| io_context_select.test | 1 | 0.002298s | 0.002195s | 0.002325s | byte equality observed |
| io_context_strand.test | 1 | 0.002320s | 0.002308s | 0.002286s | byte equality observed |
| io_context_strand_select.test | 1 | 0.002075s | 0.002073s | 0.002067s | byte equality observed |
| ip_host_name.test | 10 | 0.001021s | 0.001021s | 0.001009s | byte equality observed |
| ip_host_name_select.test | 10 | 0.000975s | 0.000996s | 0.000960s | byte equality observed |
| ip_icmp.test | 10 | 0.001014s | 0.001006s | 0.000989s | byte equality observed |
| ip_icmp_select.test | 10 | 0.001014s | 0.001046s | 0.000986s | byte equality observed |
| ip_multicast.test | 10 | 0.001090s | 0.001131s | 0.001085s | byte equality observed |
| ip_multicast_select.test | 10 | 0.001089s | 0.001101s | 0.001050s | byte equality observed |
| ip_tcp.test | 10 | 0.001511s | 0.001512s | 0.001473s | byte equality observed |
| ip_tcp_select.test | 10 | 0.001454s | 0.001517s | 0.001403s | byte equality observed |
| ip_udp.test | 10 | 0.001115s | 0.001091s | 0.001088s | byte equality observed |
| ip_udp_select.test | 10 | 0.001100s | 0.001089s | 0.001083s | byte equality observed |
| ip_unicast.test | 10 | 0.001089s | 0.001058s | 0.001048s | byte equality observed |
| ip_unicast_select.test | 10 | 0.001066s | 0.001088s | 0.001030s | byte equality observed |
| ip_v6_only.test | 10 | 0.001084s | 0.001126s | 0.001041s | byte equality observed |
| ip_v6_only_select.test | 10 | 0.001083s | 0.001094s | 0.001017s | byte equality observed |
| is_read_buffered.test | 10 | 0.001031s | 0.000998s | 0.000966s | byte equality observed |
| is_read_buffered_select.test | 10 | 0.001024s | 0.000991s | 0.000963s | byte equality observed |
| is_write_buffered.test | 10 | 0.001043s | 0.001038s | 0.000963s | byte equality observed |
| is_write_buffered_select.test | 10 | 0.001036s | 0.001026s | 0.000958s | byte equality observed |
| prepend.test | 10 | 0.001092s | 0.001102s | 0.001057s | byte equality observed |
| prepend_select.test | 10 | 0.001064s | 0.001072s | 0.001053s | byte equality observed |
| read.test | 10 | 0.001456s | 0.001477s | 0.001435s | byte equality observed |
| read_at.test | 10 | 0.001850s | 0.001873s | 0.001677s | byte equality observed |
| read_at_select.test | 10 | 0.001846s | 0.001854s | 0.001714s | byte equality observed |
| read_select.test | 10 | 0.001485s | 0.001468s | 0.001443s | byte equality observed |
| read_until.test | 10 | 0.001223s | 0.001214s | 0.001232s | byte equality observed |
| read_until_select.test | 10 | 0.001223s | 0.001209s | 0.001201s | byte equality observed |
| recycling_allocator.test | 10 | 0.001027s | 0.001018s | 0.001027s | byte equality observed |
| recycling_allocator_select.test | 10 | 0.001033s | 0.001007s | 0.001050s | byte equality observed |
| signal_set.test | 10 | 0.001056s | 0.001051s | 0.001046s | byte equality observed |
| signal_set_select.test | 10 | 0.001048s | 0.001016s | 0.001048s | byte equality observed |
| socket_base.test | 10 | 0.001186s | 0.001173s | 0.001174s | byte equality observed |
| socket_base_select.test | 10 | 0.001162s | 0.001175s | 0.001122s | byte equality observed |
| spawn.test | 10 | 0.001254s | 0.001280s | 0.001228s | byte equality observed |
| spawn_select.test | 10 | 0.001262s | 0.001243s | 0.001216s | byte equality observed |
| static_thread_pool.test | 10 | 0.001040s | 0.001025s | 0.001035s | byte equality observed |
| static_thread_pool_select.test | 10 | 0.000992s | 0.001002s | 0.001008s | byte equality observed |
| strand.test | 1 | 0.001932s | 0.002007s | 0.001961s | byte equality observed |
| strand_select.test | 1 | 0.001650s | 0.001668s | 0.001614s | byte equality observed |
| streambuf.test | 10 | 0.001084s | 0.001041s | 0.001058s | byte equality observed |
| streambuf_select.test | 10 | 0.001042s | 0.001041s | 0.001036s | byte equality observed |
| thread_pool.test | 10 | 0.002225s | 0.002200s | 0.002163s | byte equality observed |
| thread_pool_select.test | 10 | 0.002213s | 0.002194s | 0.002178s | byte equality observed |
| write.test | 10 | 0.001525s | 0.001530s | 0.001492s | byte equality observed |
| write_at.test | 10 | 0.001632s | 0.001609s | 0.001559s | byte equality observed |
| write_at_select.test | 10 | 0.001677s | 0.001611s | 0.001598s | byte equality observed |
| write_select.test | 10 | 0.001536s | 0.001509s | 0.001463s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43648658351).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
