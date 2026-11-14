# libs/asio/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| any_completion_executor.test | RUN | 0.521478 | 3.003600 | 2.769319 | 0.002263 | 0.002329 | 0.002493 |
| any_completion_executor_select.test | RUN | 0.508796 | 2.957579 | 2.858128 | 0.002100 | 0.001963 | 0.002120 |
| any_completion_handler.test | RUN | 0.570702 | 2.742166 | 2.571672 | 0.001808 | 0.001758 | 0.001928 |
| any_completion_handler_select.test | RUN | 0.622568 | 2.816866 | 2.720045 | 0.001608 | 0.002050 | 0.001991 |
| any_io_executor.test | RUN | 0.533300 | 3.249544 | 2.993839 | 0.002046 | 0.002346 | 0.002313 |
| any_io_executor_select.test | RUN | 0.548858 | 3.294724 | 3.120266 | 0.002221 | 0.001958 | 0.002242 |
| append.test | RUN | 0.516621 | 2.695303 | 2.328595 | 0.001725 | 0.001848 | 0.001875 |
| append_select.test | RUN | 0.518812 | 2.768127 | 2.296093 | 0.001570 | 0.001820 | 0.001868 |
| as_tuple.test | RUN | 0.651728 | 3.149349 | 3.269569 | 0.001652 | 0.001759 | 0.002079 |
| as_tuple_select.test | RUN | 0.667883 | 3.124981 | 3.242708 | 0.004012 | 0.001728 | 0.001862 |
| associated_allocator.test | LINK | 0.143159 | 0.248075 | 0.317658 | — | — | — |
| associated_allocator_select.test | LINK | 0.134185 | 0.251641 | 0.317066 | — | — | — |
| associated_cancellation_slot.test | LINK | 0.204910 | 0.271566 | 0.336197 | — | — | — |
| associated_cancellation_slot_select.test | LINK | 0.186174 | 0.276282 | 0.345146 | — | — | — |
| associated_executor.test | LINK | 0.257675 | 0.468416 | 0.591397 | — | — | — |
| associated_executor_select.test | LINK | 0.224543 | 0.476502 | 0.608797 | — | — | — |
| associated_immediate_executor.test | LINK | 0.199475 | 0.442383 | 0.544016 | — | — | — |
| associated_immediate_executor_select.test | LINK | 0.202240 | 0.455310 | 0.544452 | — | — | — |
| associator.test | LINK | 0.113432 | 0.213885 | 0.295057 | — | — | — |
| associator_select.test | LINK | 0.118728 | 0.228850 | 0.277933 | — | — | — |
| awaitable.test | LINK | 0.110867 | 0.218932 | 0.262608 | — | — | — |
| awaitable_select.test | LINK | 0.111405 | 0.216934 | 0.284442 | — | — | — |
| basic_datagram_socket.test | LINK | 0.336865 | 0.691429 | 1.053353 | — | — | — |
| basic_datagram_socket_select.test | LINK | 0.353751 | 0.716339 | 1.071864 | — | — | — |
| basic_deadline_timer.test | LINK | 0.422308 | 0.797978 | 1.182341 | — | — | — |
| basic_deadline_timer_select.test | LINK | 0.417306 | 0.815684 | 1.241603 | — | — | — |
| basic_file.test | LINK | 0.116576 | 0.216809 | 0.297396 | — | — | — |
| basic_file_select.test | LINK | 0.115960 | 0.218812 | 0.280370 | — | — | — |
| basic_random_access_file.test | LINK | 0.112678 | 0.216187 | 0.301036 | — | — | — |
| basic_random_access_file_select.test | LINK | 0.112371 | 0.218629 | 0.295903 | — | — | — |
| basic_raw_socket.test | LINK | 0.354822 | 0.688498 | 1.055484 | — | — | — |
| basic_raw_socket_select.test | LINK | 0.355045 | 0.712392 | 1.077869 | — | — | — |
| basic_readable_pipe.test | LINK | 0.353771 | 0.675757 | 0.913824 | — | — | — |
| basic_readable_pipe_select.test | LINK | 0.353179 | 0.711504 | 1.120341 | — | — | — |
| basic_seq_packet_socket.test | LINK | 0.353104 | 0.700989 | 1.043114 | — | — | — |
| basic_seq_packet_socket_select.test | LINK | 0.353426 | 0.736171 | 1.074210 | — | — | — |
| basic_signal_set.test | LINK | 0.320550 | 0.671700 | 0.829069 | — | — | — |
| basic_signal_set_select.test | LINK | 0.341389 | 0.704502 | 1.070701 | — | — | — |
| basic_socket_acceptor.test | LINK | 0.340883 | 0.712115 | 1.121083 | — | — | — |
| basic_socket_acceptor_select.test | LINK | 0.342849 | 0.727913 | 1.131528 | — | — | — |
| basic_stream_file.test | LINK | 0.114733 | 0.234184 | 0.279363 | — | — | — |
| basic_stream_file_select.test | LINK | 0.112222 | 0.233820 | 0.278319 | — | — | — |
| basic_stream_socket.test | LINK | 0.331778 | 0.706241 | 1.091464 | — | — | — |
| basic_stream_socket_select.test | LINK | 0.340194 | 0.714852 | 1.127390 | — | — | — |
| basic_streambuf.test | LINK | 0.162030 | 0.323517 | 0.409947 | — | — | — |
| basic_streambuf_select.test | LINK | 0.161462 | 0.326502 | 0.414714 | — | — | — |
| basic_waitable_timer.test | LINK | 0.327379 | 0.657634 | 0.976777 | — | — | — |
| basic_waitable_timer_select.test | LINK | 0.336520 | 0.663240 | 1.011501 | — | — | — |
| basic_writable_pipe.test | LINK | 0.345806 | 0.679053 | 0.909403 | — | — | — |
| basic_writable_pipe_select.test | LINK | 0.364267 | 0.701706 | 1.117248 | — | — | — |
| bind_allocator.test | RUN | 0.567434 | 2.649232 | 2.516837 | 0.002202 | 0.002291 | 0.002326 |
| bind_allocator_select.test | RUN | 0.582591 | 2.708767 | 2.491587 | 0.001654 | 0.002174 | 0.001696 |
| bind_cancellation_slot.test | RUN | 0.578052 | 2.702647 | 2.550166 | 0.001539 | 0.001479 | 0.001624 |
| bind_cancellation_slot_select.test | RUN | 0.575115 | 2.702072 | 2.467966 | 0.001374 | 0.001495 | 0.001558 |
| bind_executor.test | RUN | 0.378851 | 1.952909 | 1.593327 | 0.002468 | 0.002338 | 0.002328 |
| bind_executor_select.test | RUN | 0.385929 | 1.942816 | 1.548793 | 0.002053 | 0.002106 | 0.002005 |
| bind_immediate_executor.test | RUN | 0.273518 | 1.587406 | 1.013532 | 0.001440 | 0.001316 | 0.001309 |
| bind_immediate_executor_select.test | RUN | 0.284942 | 1.535199 | 1.112888 | 0.001249 | 0.001401 | 0.001419 |
| buffer.test | RUN | 0.205138 | 0.619690 | 0.586173 | 0.001506 | 0.001379 | 0.001286 |
| buffer_select.test | RUN | 0.223967 | 0.625871 | 0.578623 | 0.001285 | 0.001376 | 0.001400 |
| buffer_registration.test | LINK | 0.143682 | 0.326752 | 0.359842 | — | — | — |
| buffer_registration_select.test | LINK | 0.142618 | 0.330681 | 0.362498 | — | — | — |
| buffered_read_stream.test | RUN | 0.607335 | 4.103198 | 3.781347 | 0.001810 | 0.002376 | 0.002364 |
| buffered_read_stream_select.test | RUN | 0.612268 | 4.042369 | 3.833245 | 0.001535 | 0.001842 | 0.002154 |
| buffered_stream.test | RUN | 0.812895 | 6.607230 | 6.584412 | 0.002153 | 0.002104 | 0.002176 |
| buffered_stream_select.test | RUN | 0.815975 | 6.586129 | 6.300168 | 0.001890 | 0.002052 | 0.002400 |
| buffered_write_stream.test | RUN | 0.973630 | 5.657397 | 5.598053 | 0.002258 | 0.002302 | 0.002396 |
| buffered_write_stream_select.test | RUN | 0.968838 | 5.682763 | 5.325496 | 0.001967 | 0.002010 | 0.002028 |
| buffers_iterator.test | RUN | 0.290115 | 0.499594 | 0.866523 | 0.001768 | 0.001569 | 0.001690 |
| buffers_iterator_select.test | RUN | 0.300614 | 0.503258 | 0.868735 | 0.001741 | 0.001693 | 0.001563 |
| cancel_after.test | RUN | 0.798102 | 4.333821 | 3.978020 | 0.004028 | 0.002884 | 0.004084 |
| cancel_after_select.test | RUN | 0.809865 | 4.302081 | 3.991894 | 0.004008 | 0.002908 | 0.004428 |
| cancel_at.test | RUN | 0.675941 | 3.989670 | 3.907648 | 0.003724 | 0.002593 | 0.003604 |
| cancel_at_select.test | RUN | 0.700806 | 3.940808 | 3.897378 | 0.003538 | 0.002244 | 0.003648 |
| cancellation_signal.test | LINK | 0.106823 | 0.182504 | 0.369077 | — | — | — |
| cancellation_signal_select.test | LINK | 0.107423 | 0.185458 | 0.369217 | — | — | — |
| cancellation_state.test | LINK | 0.114561 | 0.185764 | 0.360193 | — | — | — |
| cancellation_state_select.test | LINK | 0.141130 | 0.187892 | 0.348591 | — | — | — |
| cancellation_type.test | LINK | 0.113222 | 0.151310 | 0.278227 | — | — | — |
| cancellation_type_select.test | LINK | 0.115006 | 0.148631 | 0.289135 | — | — | — |
| co_composed.test | RUN | 0.115037 | 0.211566 | 0.282077 | 0.001554 | 0.001445 | 0.002006 |
| co_composed_select.test | RUN | 0.115223 | 0.209614 | 0.278813 | 0.001673 | 0.001401 | 0.001605 |
| co_spawn.test | LINK | 0.116923 | 0.208390 | 0.299724 | — | — | — |
| co_spawn_select.test | LINK | 0.118447 | 0.214577 | 0.285898 | — | — | — |
| completion_condition.test | LINK | 0.156041 | 0.327234 | 0.369481 | — | — | — |
| completion_condition_select.test | LINK | 0.152263 | 0.331503 | 0.369984 | — | — | — |
| compose.test | RUN | 0.690332 | 3.327542 | 3.196136 | 0.002546 | 0.002694 | 0.002380 |
| compose_select.test | RUN | 0.696199 | 3.290083 | 3.161535 | 0.002318 | 0.002711 | 0.002312 |
| composed.test | RUN | 0.693374 | 3.283661 | 3.131276 | 0.002020 | 0.001870 | 0.002098 |
| composed_select.test | RUN | 0.657577 | 3.223789 | 3.096562 | 0.002161 | 0.001423 | 0.001821 |
| config.test | RUN | 0.335555 | 1.994749 | 1.394322 | 0.001784 | 0.001823 | 0.001856 |
| config_select.test | RUN | 0.400273 | 2.081795 | 1.585462 | 0.002008 | 0.001675 | 0.001958 |
| connect.test | LINK | 1.055619 | 6.797060 | 6.668774 | — | — | — |
| connect_select.test | LINK | 1.080482 | 6.865755 | 6.590096 | — | — | — |
| connect_pipe.test | RUN | 0.583999 | 2.583234 | 2.470228 | 0.001901 | 0.001749 | 0.001965 |
| connect_pipe_select.test | RUN | 0.606536 | 2.681232 | 2.574238 | 0.002004 | 0.002000 | 0.001853 |
| consign.test | RUN | 0.530270 | 2.588075 | 2.318073 | 0.001700 | 0.001509 | 0.002002 |
| consign_select.test | RUN | 0.534935 | 2.625879 | 2.336166 | 0.001938 | 0.001676 | 0.001731 |
| coroutine.test | LINK | 0.124518 | 0.240500 | 0.333475 | — | — | — |
| coroutine_select.test | LINK | 0.126388 | 0.251384 | 0.307255 | — | — | — |
| deadline_timer.test | RUN | 0.728606 | 3.407187 | 3.252587 | 0.003286 | 0.002838 | 0.003607 |
| deadline_timer_select.test | RUN | 0.731342 | 3.352017 | 3.245808 | 0.003413 | 0.002770 | 0.002923 |
| deferred.test | RUN | 0.128628 | 0.223721 | 0.298365 | 0.001683 | 0.001738 | 0.001861 |
| deferred_select.test | RUN | 0.133611 | 0.281337 | 0.303415 | 0.001736 | 0.001705 | 0.001806 |
| detached.test | LINK | 0.145887 | 0.246983 | 0.332104 | — | — | — |
| detached_select.test | LINK | 0.148498 | 0.265995 | 0.333947 | — | — | — |
| disposition.test | RUN | 0.137028 | 0.637123 | 0.629401 | 0.001395 | 0.001694 | 0.001884 |
| disposition_select.test | RUN | 0.137040 | 0.633328 | 0.629012 | 0.001397 | 0.001684 | 0.001866 |
| error.test | RUN | 0.123505 | 0.563091 | 0.546681 | 0.001280 | 0.001698 | 0.001953 |
| error_select.test | RUN | 0.122877 | 0.594786 | 0.545374 | 0.001318 | 0.001701 | 0.001794 |
| file_base.test | LINK | 0.153450 | 0.484018 | 0.555249 | — | — | — |
| file_base_select.test | LINK | 0.161814 | 0.490999 | 0.533302 | — | — | — |
| fwd_first.test | LINK | 0.357142 | 0.807658 | 1.100721 | — | — | — |
| fwd_last.test | LINK | 0.359937 | 0.752059 | 1.072203 | — | — | — |
| generic_basic_endpoint.test | LINK | 0.135624 | 0.281730 | 0.384353 | — | — | — |
| generic_basic_endpoint_select.test | LINK | 0.136035 | 0.285815 | 0.382259 | — | — | — |
| generic_datagram_protocol.test | LINK | 0.534219 | 2.687753 | 2.236258 | — | — | — |
| generic_datagram_protocol_select.test | LINK | 0.545856 | 2.730319 | 2.201166 | — | — | — |
| generic_raw_protocol.test | LINK | 0.598714 | 2.665488 | 2.222918 | — | — | — |
| generic_raw_protocol_select.test | LINK | 0.599103 | 2.723545 | 2.196714 | — | — | — |
| generic_seq_packet_protocol.test | LINK | 0.547765 | 2.267155 | 1.908062 | — | — | — |
| generic_seq_packet_protocol_select.test | LINK | 0.545346 | 2.200866 | 1.887552 | — | — | — |
| generic_stream_protocol.test | LINK | 0.505095 | 2.442657 | 2.105280 | — | — | — |
| generic_stream_protocol_select.test | LINK | 0.522389 | 2.459956 | 2.086325 | — | — | — |
| high_resolution_timer.test | LINK | 0.230906 | 0.440199 | 0.615752 | — | — | — |
| high_resolution_timer_select.test | LINK | 0.237514 | 0.455952 | 0.631895 | — | — | — |
| immediate.test | LINK | 0.161084 | 0.345096 | 0.377620 | — | — | — |
| immediate_select.test | LINK | 0.162018 | 0.335409 | 0.374886 | — | — | — |
| inline_executor.test | RUN | 0.200877 | 0.530777 | 0.574314 | 0.001388 | 0.001416 | 0.001239 |
| inline_executor_select.test | RUN | 0.194930 | 0.530656 | 0.561666 | 0.001352 | 0.001259 | 0.001329 |
| inline_or_executor.test | RUN | 0.299535 | 1.646388 | 1.099505 | 0.001370 | 0.001427 | 0.001399 |
| inline_or_executor_select.test | RUN | 0.310915 | 1.675984 | 1.216639 | 0.001454 | 0.001286 | 0.001352 |
| io_context.test | RUN | 0.446233 | 2.351863 | 1.924725 | 0.002296 | 0.001986 | 0.002042 |
| io_context_select.test | RUN | 0.441471 | 2.278115 | 1.953607 | 0.002245 | 0.001858 | 0.002048 |
| io_context_strand.test | RUN | 0.426493 | 2.053378 | 1.627570 | 0.002292 | 0.001977 | 0.002478 |
| io_context_strand_select.test | RUN | 0.445112 | 2.017658 | 1.649929 | 0.002352 | 0.001864 | 0.001988 |
| ip_address.test | LINK | 0.160788 | 0.465952 | 0.484071 | — | — | — |
| ip_address_select.test | LINK | 0.170168 | 0.466263 | 0.546503 | — | — | — |
| ip_address_v4.test | LINK | 0.174099 | 0.511724 | 0.821081 | — | — | — |
| ip_address_v4_select.test | LINK | 0.166953 | 0.500203 | 0.820604 | — | — | — |
| ip_address_v6.test | LINK | 0.188612 | 0.908992 | 1.028844 | — | — | — |
| ip_address_v6_select.test | LINK | 0.188253 | 0.910222 | 0.963718 | — | — | — |
| ip_basic_endpoint.test | LINK | 0.150539 | 0.432719 | 0.636754 | — | — | — |
| ip_basic_endpoint_select.test | LINK | 0.151693 | 0.431122 | 0.630309 | — | — | — |
| ip_basic_resolver.test | LINK | 0.235673 | 0.617188 | 0.958280 | — | — | — |
| ip_basic_resolver_select.test | LINK | 0.239163 | 0.631613 | 0.966587 | — | — | — |
| ip_basic_resolver_entry.test | LINK | 0.084415 | 0.204312 | 0.275793 | — | — | — |
| ip_basic_resolver_entry_select.test | LINK | 0.084758 | 0.208588 | 0.270369 | — | — | — |
| ip_basic_resolver_iterator.test | LINK | 0.145627 | 0.423283 | 0.619497 | — | — | — |
| ip_basic_resolver_iterator_select.test | LINK | 0.149945 | 0.434113 | 0.614060 | — | — | — |
| ip_basic_resolver_query.test | LINK | 0.144899 | 0.408597 | 0.604366 | — | — | — |
| ip_basic_resolver_query_select.test | LINK | 0.143792 | 0.412173 | 0.588537 | — | — | — |
| ip_host_name.test | RUN | 0.151070 | 0.569116 | 0.683616 | 0.001408 | 0.001611 | 0.001518 |
| ip_host_name_select.test | RUN | 0.152306 | 0.580179 | 0.681914 | 0.001391 | 0.002068 | 0.001691 |
| ip_icmp.test | RUN | 0.682211 | 5.461081 | 4.651857 | 0.001552 | 0.001573 | 0.001760 |
| ip_icmp_select.test | RUN | 0.679661 | 5.575723 | 4.465195 | 0.001534 | 0.001554 | 0.001751 |
| ip_multicast.test | RUN | 0.430201 | 2.737229 | 2.541926 | 0.001699 | 0.001859 | 0.001785 |
| ip_multicast_select.test | RUN | 0.440499 | 2.682795 | 2.510767 | 0.001619 | 0.001642 | 0.001883 |
| ip_resolver_query_base.test | LINK | 0.107186 | 0.254274 | 0.286088 | — | — | — |
| ip_resolver_query_base_select.test | LINK | 0.099581 | 0.256791 | 0.290131 | — | — | — |
| ip_tcp.test | RUN | 1.012283 | 7.997777 | 7.415410 | 0.002074 | 0.002480 | 0.002760 |
| ip_tcp_select.test | RUN | 1.007864 | 8.329004 | 7.095944 | 0.002104 | 0.002440 | 0.002779 |
| ip_udp.test | RUN | 0.724994 | 5.645617 | 4.966386 | 0.001634 | 0.001853 | 0.001784 |
| ip_udp_select.test | RUN | 0.727574 | 5.770676 | 4.876914 | 0.001675 | 0.001914 | 0.002068 |
| ip_unicast.test | RUN | 0.383945 | 2.469814 | 2.285019 | 0.001536 | 0.002056 | 0.001719 |
| ip_unicast_select.test | RUN | 0.383177 | 2.515909 | 2.258568 | 0.001517 | 0.001970 | 0.001567 |
| ip_v6_only.test | RUN | 0.391809 | 2.600720 | 2.361176 | 0.001537 | 0.001932 | 0.001601 |
| ip_v6_only_select.test | RUN | 0.405356 | 2.721157 | 2.333955 | 0.001561 | 0.001800 | 0.001942 |
| is_read_buffered.test | RUN | 0.271917 | 0.791800 | 1.216282 | 0.001484 | 0.001853 | 0.001643 |
| is_read_buffered_select.test | RUN | 0.280680 | 0.835857 | 1.267156 | 0.001421 | 0.001763 | 0.001398 |
| is_write_buffered.test | RUN | 0.273228 | 0.797620 | 1.208000 | 0.001438 | 0.001746 | 0.001688 |
| is_write_buffered_select.test | RUN | 0.284960 | 0.819888 | 1.238062 | 0.001552 | 0.001680 | 0.001642 |
| local_basic_endpoint.test | LINK | 0.168484 | 0.437387 | 0.615177 | — | — | — |
| local_basic_endpoint_select.test | LINK | 0.142700 | 0.443761 | 0.606570 | — | — | — |
| local_connect_pair.test | LINK | 0.358066 | 2.569417 | 2.208164 | — | — | — |
| local_connect_pair_select.test | LINK | 0.367248 | 2.580516 | 2.163626 | — | — | — |
| local_datagram_protocol.test | LINK | 0.489563 | 3.398208 | 3.119993 | — | — | — |
| local_datagram_protocol_select.test | LINK | 0.494244 | 3.417558 | 3.074807 | — | — | — |
| local_seq_packet_protocol.test | LINK | 0.489004 | 3.254905 | 3.143764 | — | — | — |
| local_seq_packet_protocol_select.test | LINK | 0.492084 | 3.314178 | 3.101740 | — | — | — |
| local_stream_protocol.test | LINK | 0.462812 | 3.154933 | 2.905876 | — | — | — |
| local_stream_protocol_select.test | LINK | 0.470129 | 3.175431 | 2.863376 | — | — | — |
| placeholders.test | LINK | 0.089378 | 0.233530 | 0.310499 | — | — | — |
| placeholders_select.test | LINK | 0.089943 | 0.241614 | 0.302124 | — | — | — |
| posix_basic_descriptor.test | LINK | 0.241043 | 0.665085 | 0.937123 | — | — | — |
| posix_basic_descriptor_select.test | LINK | 0.249665 | 0.727877 | 1.115002 | — | — | — |
| posix_basic_stream_descriptor.test | LINK | 0.281356 | 0.690239 | 0.932902 | — | — | — |
| posix_basic_stream_descriptor_select.test | LINK | 0.363926 | 0.716741 | 1.128116 | — | — | — |
| posix_descriptor_base.test | LINK | 0.147519 | 0.261116 | 0.295461 | — | — | — |
| posix_descriptor_base_select.test | LINK | 0.147481 | 0.259560 | 0.292229 | — | — | — |
| posix_stream_descriptor.test | LINK | 0.633580 | 3.125999 | 2.867757 | — | — | — |
| posix_stream_descriptor_select.test | LINK | 0.663569 | 3.192508 | 2.892423 | — | — | — |
| prepend.test | RUN | 0.508263 | 2.500867 | 2.259459 | 0.001864 | 0.001430 | 0.001690 |
| prepend_select.test | RUN | 0.518603 | 2.553113 | 2.223374 | 0.001701 | 0.001718 | 0.001773 |
| random_access_file.test | LINK | 0.313301 | 0.578274 | 0.724111 | — | — | — |
| random_access_file_select.test | LINK | 0.320148 | 0.629716 | 0.919217 | — | — | — |
| read.test | RUN | 1.558394 | 16.168788 | 13.060889 | 0.002498 | 0.002461 | 0.002358 |
| read_select.test | RUN | 1.575701 | 16.300670 | 12.987198 | 0.002407 | 0.002416 | 0.002431 |
| read_at.test | RUN | 1.549307 | 23.969774 | 18.101595 | 0.002694 | 0.002578 | 0.002477 |
| read_at_select.test | RUN | 1.560274 | 23.704255 | 18.349691 | 0.002748 | 0.002815 | 0.002822 |
| read_until.test | RUN | 0.854404 | 6.209581 | 5.234248 | 0.002042 | 0.002035 | 0.002123 |
| read_until_select.test | RUN | 0.866418 | 6.311922 | 5.423649 | 0.001755 | 0.002170 | 0.001930 |
| readable_pipe.test | LINK | 0.549699 | 2.613220 | 2.326560 | — | — | — |
| readable_pipe_select.test | LINK | 0.574240 | 2.753698 | 2.443530 | — | — | — |
| recycling_allocator.test | RUN | 0.171948 | 0.396797 | 0.474458 | 0.001714 | 0.001781 | 0.001775 |
| recycling_allocator_select.test | RUN | 0.165521 | 0.384263 | 0.463585 | 0.001710 | 0.001626 | 0.001700 |
| redirect_disposition.test | LINK | 0.706198 | 3.683670 | 3.487391 | — | — | — |
| redirect_disposition_select.test | LINK | 0.716176 | 3.685911 | 3.481710 | — | — | — |
| redirect_error.test | LINK | 0.631909 | 3.093642 | 3.021843 | — | — | — |
| redirect_error_select.test | LINK | 0.642617 | 3.093523 | 2.979678 | — | — | — |
| registered_buffer.test | LINK | 0.173450 | 0.294592 | 0.432158 | — | — | — |
| registered_buffer_select.test | LINK | 0.169565 | 0.294826 | 0.398978 | — | — | — |
| signal_set.test | RUN | 0.523383 | 2.613882 | 2.091776 | 0.001976 | 0.001944 | 0.001722 |
| signal_set_select.test | RUN | 0.545423 | 2.715355 | 2.318845 | 0.001591 | 0.001911 | 0.001777 |
| signal_set_base.test | LINK | 0.137482 | 0.253519 | 0.295695 | — | — | — |
| signal_set_base_select.test | LINK | 0.137259 | 0.257995 | 0.294246 | — | — | — |
| socket_base.test | RUN | 0.650712 | 4.114636 | 3.225882 | 0.001961 | 0.001636 | 0.002046 |
| socket_base_select.test | RUN | 0.655033 | 3.969409 | 3.125920 | 0.001784 | 0.001920 | 0.001874 |
| spawn.test | RUN | 1.072506 | 6.418090 | 5.514722 | 0.002182 | 0.002162 | 0.002056 |
| spawn_select.test | RUN | 1.085461 | 6.419842 | 5.573734 | 0.002174 | 0.002102 | 0.002287 |
| static_thread_pool.test | RUN | 0.305709 | 0.600446 | 0.724972 | 0.001790 | 0.001743 | 0.001740 |
| static_thread_pool_select.test | RUN | 0.320096 | 0.646332 | 0.922119 | 0.001526 | 0.001718 | 0.001640 |
| steady_timer.test | LINK | 0.334015 | 0.663252 | 1.038371 | — | — | — |
| steady_timer_select.test | LINK | 0.349343 | 0.694116 | 0.993947 | — | — | — |
| strand.test | RUN | 0.698656 | 3.503759 | 3.343797 | 0.002566 | 0.002443 | 0.002771 |
| strand_select.test | RUN | 0.700770 | 3.498063 | 3.215206 | 0.003099 | 0.002116 | 0.002250 |
| stream_file.test | LINK | 0.329327 | 0.627616 | 0.741372 | — | — | — |
| stream_file_select.test | LINK | 0.342602 | 0.618850 | 0.974054 | — | — | — |
| streambuf.test | RUN | 0.181351 | 0.419410 | 0.539614 | 0.001405 | 0.001340 | 0.001555 |
| streambuf_select.test | RUN | 0.141889 | 0.337989 | 0.518200 | 0.001235 | 0.001321 | 0.001423 |
| system_timer.test | LINK | 0.452605 | 2.360712 | 2.171467 | — | — | — |
| system_timer_select.test | LINK | 0.463576 | 2.272969 | 1.922810 | — | — | — |
| system_context.test | LINK | 0.207075 | 0.413864 | 0.474951 | — | — | — |
| system_context_select.test | LINK | 0.211004 | 0.439393 | 0.560278 | — | — | — |
| system_executor.test | LINK | 0.275034 | 1.324424 | 0.889852 | — | — | — |
| system_executor_select.test | LINK | 0.285677 | 1.289902 | 1.012971 | — | — | — |
| this_coro.test | LINK | 0.084589 | 0.148277 | 0.179004 | — | — | — |
| this_coro_select.test | LINK | 0.083780 | 0.151206 | 0.183564 | — | — | — |
| thread_pool.test | RUN | 0.327339 | 1.673953 | 1.264680 | 0.002603 | 0.002335 | 0.002286 |
| thread_pool_select.test | RUN | 0.332877 | 1.644248 | 1.351855 | 0.002358 | 0.002767 | 0.002451 |
| time_traits.test | LINK | 0.179594 | 0.314467 | 0.358266 | — | — | — |
| time_traits_select.test | LINK | 0.181452 | 0.317432 | 0.357116 | — | — | — |
| ts_buffer.test | LINK | 0.168452 | 0.375987 | 0.371775 | — | — | — |
| ts_buffer_select.test | LINK | 0.174322 | 0.384061 | 0.370191 | — | — | — |
| ts_executor.test | LINK | 0.248282 | 0.719901 | 0.582645 | — | — | — |
| ts_executor_select.test | LINK | 0.258101 | 0.792253 | 0.694572 | — | — | — |
| ts_internet.test | LINK | 0.273090 | 0.827917 | 0.771323 | — | — | — |
| ts_internet_select.test | LINK | 0.276720 | 0.848342 | 0.972710 | — | — | — |
| ts_io_context.test | LINK | 0.215199 | 0.617522 | 0.719591 | — | — | — |
| ts_io_context_select.test | LINK | 0.229637 | 0.663589 | 0.910004 | — | — | — |
| ts_net.test | LINK | 0.326976 | 0.972298 | 1.472705 | — | — | — |
| ts_net_select.test | LINK | 0.351915 | 0.983994 | 1.490993 | — | — | — |
| ts_netfwd.test | LINK | 0.331654 | 0.953662 | 1.461028 | — | — | — |
| ts_netfwd_select.test | LINK | 0.331970 | 0.976208 | 1.524089 | — | — | — |
| ts_socket.test | LINK | 0.258533 | 0.715890 | 1.113848 | — | — | — |
| ts_socket_select.test | LINK | 0.268268 | 0.767361 | 1.101591 | — | — | — |
| ts_timer.test | LINK | 0.235980 | 0.699483 | 0.972773 | — | — | — |
| ts_timer_select.test | LINK | 0.237818 | 0.710956 | 0.981564 | — | — | — |
| use_awaitable.test | LINK | 0.085722 | 0.235757 | 0.289138 | — | — | — |
| use_awaitable_select.test | LINK | 0.084170 | 0.262541 | 0.276472 | — | — | — |
| wait_traits.test | LINK | 0.085203 | 0.225275 | 0.267490 | — | — | — |
| wait_traits_select.test | LINK | 0.086091 | 0.221990 | 0.269872 | — | — | — |
| windows_basic_object_handle.test | LINK | 0.085086 | 0.218708 | 0.284200 | — | — | — |
| windows_basic_object_handle_select.test | LINK | 0.086234 | 0.220132 | 0.285630 | — | — | — |
| windows_basic_overlapped_handle.test | LINK | 0.084720 | 0.223534 | 0.274078 | — | — | — |
| windows_basic_overlapped_handle_select.test | LINK | 0.085249 | 0.222265 | 0.272441 | — | — | — |
| windows_basic_random_access_handle.test | LINK | 0.084220 | 0.220337 | 0.277900 | — | — | — |
| windows_basic_random_access_handle_select.test | LINK | 0.084674 | 0.219612 | 0.272766 | — | — | — |
| windows_basic_stream_handle.test | LINK | 0.085478 | 0.222561 | 0.268487 | — | — | — |
| windows_basic_stream_handle_select.test | LINK | 0.084723 | 0.227201 | 0.262244 | — | — | — |
| windows_object_handle.test | LINK | 0.220096 | 0.582722 | 0.734810 | — | — | — |
| windows_object_handle_select.test | LINK | 0.229827 | 0.628213 | 0.943243 | — | — | — |
| windows_overlapped_ptr.test | LINK | 0.226598 | 0.642207 | 0.831130 | — | — | — |
| windows_overlapped_ptr_select.test | LINK | 0.237005 | 0.676586 | 1.027009 | — | — | — |
| windows_random_access_handle.test | LINK | 0.220309 | 0.607207 | 0.741523 | — | — | — |
| windows_random_access_handle_select.test | LINK | 0.229972 | 0.634774 | 0.936834 | — | — | — |
| windows_stream_handle.test | LINK | 0.320854 | 0.604955 | 0.766851 | — | — | — |
| windows_stream_handle_select.test | LINK | 0.321469 | 0.659756 | 0.966495 | — | — | — |
| writable_pipe.test | LINK | 0.552822 | 2.571874 | 2.377413 | — | — | — |
| writable_pipe_select.test | LINK | 0.569919 | 2.716900 | 2.470949 | — | — | — |
| write.test | RUN | 1.556221 | 12.716954 | 12.790056 | 0.002444 | 0.002444 | 0.002340 |
| write_select.test | RUN | 1.586252 | 12.888385 | 13.075127 | 0.002453 | 0.002314 | 0.002649 |
| write_at.test | RUN | 1.593092 | 18.924770 | 16.455522 | 0.002138 | 0.001939 | 0.002224 |
| write_at_select.test | RUN | 1.618405 | 18.676645 | 16.497433 | 0.002643 | 0.002420 | 0.002463 |
| any_executor.test | RUN | 0.659591 | 6.525124 | 4.956207 | 0.002520 | 0.002360 | 0.002336 |
| blocking.test | RUN | 1.437583 | 7.845379 | 10.095916 | 0.006583 | 0.005568 | 0.006816 |
| blocking_adaptation.test | RUN | 0.737734 | 3.327853 | 4.625125 | 0.003739 | 0.003384 | 0.003792 |
| context_as.test | RUN | 0.441310 | 2.202507 | 1.632930 | 0.002051 | 0.001885 | 0.001945 |
| executor.test | RUN | 0.122231 | 0.211420 | 0.280413 | 0.001590 | 0.001700 | 0.001708 |
| inline_exception_handling.test | RUN | 1.351804 | 7.210780 | 9.515390 | 0.004677 | 0.004392 | 0.004906 |
| invocable_archetype.test | RUN | 0.122427 | 0.215939 | 0.278190 | 0.001960 | 0.001556 | 0.001676 |
| mapping.test | RUN | 1.394746 | 6.858338 | 10.107789 | 0.004830 | 0.004354 | 0.004916 |
| outstanding_work.test | RUN | 0.656427 | 2.945842 | 4.448968 | 0.003717 | 0.003561 | 0.003871 |
| prefer_only.test | RUN | 0.238855 | 1.145183 | 1.013776 | 0.001798 | 0.001638 | 0.001748 |
| relationship.test | RUN | 0.564342 | 2.990658 | 4.433327 | 0.002667 | 0.003312 | 0.002827 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.978× | 0.970×, 0.986× | 1.006× |
| clang | 0.975× | 0.980×, 0.969× | 0.988× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1363 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43624536445).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| any_completion_executor.test | 2 | 0.001490s | 0.001484s | 0.001449s | byte equality observed |
| any_completion_executor_select.test | 5 | 0.001441s | 0.001470s | 0.001407s | byte equality observed |
| any_completion_handler.test | 9 | 0.001175s | 0.001186s | 0.001077s | byte equality observed |
| any_completion_handler_select.test | 10 | 0.001172s | 0.001177s | 0.001099s | byte equality observed |
| any_io_executor.test | 4 | 0.001448s | 0.001452s | 0.001386s | byte equality observed |
| any_io_executor_select.test | 3 | 0.001432s | 0.001442s | 0.001408s | byte equality observed |
| append.test | 9 | 0.001101s | 0.001131s | 0.001053s | byte equality observed |
| append_select.test | 10 | 0.001079s | 0.001097s | 0.001070s | byte equality observed |
| as_tuple.test | 9 | 0.001169s | 0.001191s | 0.001139s | byte equality observed |
| as_tuple_select.test | 10 | 0.001086s | 0.001122s | 0.001052s | byte equality observed |
| bind_allocator.test | 1 | 0.001593s | 0.001614s | 0.001540s | byte equality observed |
| bind_allocator_select.test | 1 | 0.001283s | 0.001297s | 0.001172s | byte equality observed |
| bind_cancellation_slot.test | 10 | 0.001094s | 0.001063s | 0.001038s | byte equality observed |
| bind_cancellation_slot_select.test | 10 | 0.000988s | 0.000949s | 0.000953s | byte equality observed |
| bind_executor.test | 1 | 0.001567s | 0.001615s | 0.001522s | byte equality observed |
| bind_executor_select.test | 1 | 0.001919s | 0.001959s | 0.001824s | byte equality observed |
| bind_immediate_executor.test | 10 | 0.000997s | 0.000975s | 0.000966s | byte equality observed |
| bind_immediate_executor_select.test | 10 | 0.000987s | 0.000953s | 0.000944s | byte equality observed |
| buffer.test | 10 | 0.000930s | 0.000913s | 0.000918s | byte equality observed |
| buffer_select.test | 10 | 0.000915s | 0.000933s | 0.000916s | byte equality observed |
| buffered_read_stream.test | 10 | 0.001193s | 0.001193s | 0.001198s | byte equality observed |
| buffered_read_stream_select.test | 10 | 0.001194s | 0.001133s | 0.001201s | byte equality observed |
| buffered_stream.test | 8 | 0.001196s | 0.001188s | 0.001177s | byte equality observed |
| buffered_stream_select.test | 6 | 0.001199s | 0.001153s | 0.001157s | byte equality observed |
| buffered_write_stream.test | 6 | 0.001196s | 0.001185s | 0.001176s | byte equality observed |
| buffered_write_stream_select.test | 8 | 0.001184s | 0.001151s | 0.001177s | byte equality observed |
| buffers_iterator.test | 10 | 0.000896s | 0.000887s | 0.000879s | byte equality observed |
| buffers_iterator_select.test | 10 | 0.000860s | 0.000896s | 0.000855s | byte equality observed |
| cancel_after.test | 1 | 0.002992s | 0.003157s | 0.002490s | byte equality observed |
| cancel_after_select.test | 1 | 0.002550s | 0.002475s | 0.002036s | byte equality observed |
| cancel_at.test | 1 | 0.003357s | 0.003584s | 0.002729s | byte equality observed |
| cancel_at_select.test | 1 | 0.003206s | 0.003437s | 0.002763s | byte equality observed |
| co_composed.test | 10 | 0.000910s | 0.000938s | 0.000935s | byte equality observed |
| co_composed_select.test | 10 | 0.000858s | 0.000888s | 0.000906s | byte equality observed |
| compose.test | 1 | 0.001659s | 0.001522s | 0.001416s | byte equality observed |
| compose_select.test | 1 | 0.001278s | 0.001223s | 0.001165s | byte equality observed |
| composed.test | 1 | 0.001871s | 0.001942s | 0.001839s | byte equality observed |
| composed_select.test | 1 | 0.001353s | 0.001342s | 0.001270s | byte equality observed |
| config.test | 6 | 0.001035s | 0.001003s | 0.001039s | byte equality observed |
| config_select.test | 5 | 0.000978s | 0.000933s | 0.000969s | byte equality observed |
| connect_pipe.test | 6 | 0.001032s | 0.000978s | 0.001011s | byte equality observed |
| connect_pipe_select.test | 7 | 0.001001s | 0.000978s | 0.000976s | byte equality observed |
| consign.test | 5 | 0.001012s | 0.000951s | 0.000987s | byte equality observed |
| consign_select.test | 5 | 0.000946s | 0.000898s | 0.000920s | byte equality observed |
| deadline_timer.test | 1 | 0.002242s | 0.002196s | 0.002168s | byte equality observed |
| deadline_timer_select.test | 1 | 0.001976s | 0.001959s | 0.001958s | byte equality observed |
| deferred.test | 10 | 0.000894s | 0.000899s | 0.000889s | byte equality observed |
| deferred_select.test | 10 | 0.000840s | 0.000872s | 0.000849s | byte equality observed |
| disposition.test | 10 | 0.000907s | 0.000901s | 0.000922s | byte equality observed |
| disposition_select.test | 10 | 0.000899s | 0.000892s | 0.000908s | byte equality observed |
| error.test | 10 | 0.000873s | 0.000864s | 0.000881s | byte equality observed |
| error_select.test | 10 | 0.000871s | 0.000888s | 0.000878s | byte equality observed |
| inline_executor.test | 10 | 0.000887s | 0.000872s | 0.000896s | byte equality observed |
| inline_executor_select.test | 10 | 0.000885s | 0.000868s | 0.000890s | byte equality observed |
| inline_or_executor.test | 10 | 0.000890s | 0.000876s | 0.000883s | byte equality observed |
| inline_or_executor_select.test | 10 | 0.000901s | 0.000868s | 0.000888s | byte equality observed |
| io_context.test | 1 | 0.001773s | 0.001819s | 0.001766s | byte equality observed |
| io_context_select.test | 1 | 0.002145s | 0.002119s | 0.001851s | byte equality observed |
| io_context_strand.test | 1 | 0.002174s | 0.002218s | 0.002254s | byte equality observed |
| io_context_strand_select.test | 1 | 0.001967s | 0.001922s | 0.001864s | byte equality observed |
| ip_host_name.test | 10 | 0.000917s | 0.000920s | 0.000938s | byte equality observed |
| ip_host_name_select.test | 10 | 0.000891s | 0.000871s | 0.000885s | byte equality observed |
| ip_icmp.test | 10 | 0.000918s | 0.000896s | 0.000903s | byte equality observed |
| ip_icmp_select.test | 10 | 0.000911s | 0.000891s | 0.000898s | byte equality observed |
| ip_multicast.test | 10 | 0.000975s | 0.000959s | 0.000979s | byte equality observed |
| ip_multicast_select.test | 10 | 0.000986s | 0.000959s | 0.000938s | byte equality observed |
| ip_tcp.test | 10 | 0.001346s | 0.001336s | 0.001328s | byte equality observed |
| ip_tcp_select.test | 10 | 0.001293s | 0.001277s | 0.001271s | byte equality observed |
| ip_udp.test | 10 | 0.001014s | 0.001003s | 0.000968s | byte equality observed |
| ip_udp_select.test | 10 | 0.000998s | 0.000982s | 0.000962s | byte equality observed |
| ip_unicast.test | 10 | 0.000972s | 0.000959s | 0.000931s | byte equality observed |
| ip_unicast_select.test | 10 | 0.000952s | 0.000938s | 0.000910s | byte equality observed |
| ip_v6_only.test | 10 | 0.000971s | 0.000960s | 0.000923s | byte equality observed |
| ip_v6_only_select.test | 10 | 0.000953s | 0.000947s | 0.000926s | byte equality observed |
| is_read_buffered.test | 10 | 0.000896s | 0.000880s | 0.000887s | byte equality observed |
| is_read_buffered_select.test | 10 | 0.000901s | 0.000895s | 0.000884s | byte equality observed |
| is_write_buffered.test | 10 | 0.000903s | 0.000921s | 0.000883s | byte equality observed |
| is_write_buffered_select.test | 10 | 0.000913s | 0.000909s | 0.000891s | byte equality observed |
| prepend.test | 10 | 0.000988s | 0.000958s | 0.000956s | byte equality observed |
| prepend_select.test | 10 | 0.000971s | 0.000958s | 0.000932s | byte equality observed |
| read.test | 10 | 0.001325s | 0.001307s | 0.001288s | byte equality observed |
| read_at.test | 10 | 0.001515s | 0.001575s | 0.001427s | byte equality observed |
| read_at_select.test | 10 | 0.001536s | 0.001568s | 0.001429s | byte equality observed |
| read_select.test | 10 | 0.001342s | 0.001314s | 0.001312s | byte equality observed |
| read_until.test | 10 | 0.001116s | 0.001091s | 0.001091s | byte equality observed |
| read_until_select.test | 10 | 0.001088s | 0.001072s | 0.001093s | byte equality observed |
| recycling_allocator.test | 10 | 0.000924s | 0.000894s | 0.000923s | byte equality observed |
| recycling_allocator_select.test | 10 | 0.000927s | 0.000924s | 0.000924s | byte equality observed |
| signal_set.test | 10 | 0.000940s | 0.000915s | 0.000932s | byte equality observed |
| signal_set_select.test | 10 | 0.000961s | 0.000926s | 0.000933s | byte equality observed |
| socket_base.test | 10 | 0.001076s | 0.001016s | 0.001030s | byte equality observed |
| socket_base_select.test | 10 | 0.001038s | 0.001008s | 0.001008s | byte equality observed |
| spawn.test | 10 | 0.001166s | 0.001119s | 0.001099s | byte equality observed |
| spawn_select.test | 10 | 0.001125s | 0.001095s | 0.001122s | byte equality observed |
| static_thread_pool.test | 10 | 0.000915s | 0.000937s | 0.000899s | byte equality observed |
| static_thread_pool_select.test | 10 | 0.000910s | 0.000880s | 0.000867s | byte equality observed |
| strand.test | 1 | 0.001840s | 0.001848s | 0.001826s | byte equality observed |
| strand_select.test | 1 | 0.001566s | 0.001468s | 0.001465s | byte equality observed |
| streambuf.test | 10 | 0.000979s | 0.000981s | 0.000967s | byte equality observed |
| streambuf_select.test | 10 | 0.000953s | 0.000939s | 0.000941s | byte equality observed |
| thread_pool.test | 10 | 0.001941s | 0.001927s | 0.001967s | byte equality observed |
| thread_pool_select.test | 10 | 0.001922s | 0.001937s | 0.001941s | byte equality observed |
| write.test | 10 | 0.001379s | 0.001330s | 0.001318s | byte equality observed |
| write_at.test | 10 | 0.001459s | 0.001498s | 0.001424s | byte equality observed |
| write_at_select.test | 10 | 0.001442s | 0.001507s | 0.001408s | byte equality observed |
| write_select.test | 10 | 0.001367s | 0.001331s | 0.001303s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43624536445).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
