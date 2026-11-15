# libs/asio/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| any_completion_executor.test | RUN | 0.833589 | 5.137184 | 5.244654 | 0.002884 | 0.002692 | 0.002814 |
| any_completion_executor_select.test | RUN | 0.868422 | 5.101375 | 5.693342 | 0.002818 | 0.002965 | 0.002362 |
| any_completion_handler.test | RUN | 0.995553 | 4.605385 | 4.726562 | 0.002340 | 0.002090 | 0.002115 |
| any_completion_handler_select.test | RUN | 0.983814 | 4.770542 | 5.212474 | 0.002110 | 0.002531 | 0.002336 |
| any_io_executor.test | RUN | 0.918982 | 5.425684 | 5.695750 | 0.003105 | 0.002881 | 0.002794 |
| any_io_executor_select.test | RUN | 0.939515 | 5.416590 | 6.110822 | 0.002734 | 0.002893 | 0.002722 |
| append.test | RUN | 0.840193 | 4.361241 | 4.418086 | 0.002204 | 0.002384 | 0.002139 |
| append_select.test | RUN | 0.849486 | 4.445834 | 4.236836 | 0.001986 | 0.002316 | 0.002242 |
| as_tuple.test | RUN | 1.050937 | 5.216127 | 5.925593 | 0.002499 | 0.002424 | 0.002545 |
| as_tuple_select.test | RUN | 1.066772 | 5.115958 | 5.802414 | 0.002199 | 0.002058 | 0.002273 |
| associated_allocator.test | LINK | 0.252462 | 0.503367 | 0.748696 | — | — | — |
| associated_allocator_select.test | LINK | 0.227800 | 0.492406 | 0.738037 | — | — | — |
| associated_cancellation_slot.test | LINK | 0.244552 | 0.548185 | 0.802623 | — | — | — |
| associated_cancellation_slot_select.test | LINK | 0.249263 | 0.558497 | 0.800259 | — | — | — |
| associated_executor.test | LINK | 0.368170 | 0.894695 | 1.282401 | — | — | — |
| associated_executor_select.test | LINK | 0.363297 | 0.911619 | 1.285503 | — | — | — |
| associated_immediate_executor.test | LINK | 0.337403 | 0.805153 | 1.069971 | — | — | — |
| associated_immediate_executor_select.test | LINK | 0.348562 | 0.826435 | 1.072853 | — | — | — |
| associator.test | LINK | 0.181705 | 0.397480 | 0.575553 | — | — | — |
| associator_select.test | LINK | 0.188332 | 0.411582 | 0.592178 | — | — | — |
| awaitable.test | LINK | 0.189983 | 0.391058 | 0.549167 | — | — | — |
| awaitable_select.test | LINK | 0.185457 | 0.382848 | 0.576600 | — | — | — |
| basic_datagram_socket.test | LINK | 0.562634 | 1.254121 | 2.289710 | — | — | — |
| basic_datagram_socket_select.test | LINK | 0.582429 | 1.262595 | 2.366533 | — | — | — |
| basic_deadline_timer.test | LINK | 0.672948 | 1.446734 | 2.650446 | — | — | — |
| basic_deadline_timer_select.test | LINK | 0.693973 | 1.519322 | 2.715057 | — | — | — |
| basic_file.test | LINK | 0.184452 | 0.415573 | 0.587768 | — | — | — |
| basic_file_select.test | LINK | 0.189760 | 0.397060 | 0.571686 | — | — | — |
| basic_random_access_file.test | LINK | 0.187004 | 0.389338 | 0.607823 | — | — | — |
| basic_random_access_file_select.test | LINK | 0.192073 | 0.396152 | 0.605258 | — | — | — |
| basic_raw_socket.test | LINK | 0.563319 | 1.243550 | 2.332419 | — | — | — |
| basic_raw_socket_select.test | LINK | 0.577682 | 1.262010 | 2.381513 | — | — | — |
| basic_readable_pipe.test | LINK | 0.543779 | 1.196256 | 1.961204 | — | — | — |
| basic_readable_pipe_select.test | LINK | 0.577384 | 1.263116 | 2.437997 | — | — | — |
| basic_seq_packet_socket.test | LINK | 0.574687 | 1.237685 | 2.321325 | — | — | — |
| basic_seq_packet_socket_select.test | LINK | 0.570126 | 1.261495 | 2.330995 | — | — | — |
| basic_signal_set.test | LINK | 0.517352 | 1.154046 | 1.735301 | — | — | — |
| basic_signal_set_select.test | LINK | 0.545559 | 1.225389 | 2.231891 | — | — | — |
| basic_socket_acceptor.test | LINK | 0.557982 | 1.225813 | 2.266675 | — | — | — |
| basic_socket_acceptor_select.test | LINK | 0.572227 | 1.268040 | 2.408601 | — | — | — |
| basic_stream_file.test | LINK | 0.186117 | 0.391691 | 0.620383 | — | — | — |
| basic_stream_file_select.test | LINK | 0.183384 | 0.415120 | 0.614201 | — | — | — |
| basic_stream_socket.test | LINK | 0.557788 | 1.225810 | 2.328872 | — | — | — |
| basic_stream_socket_select.test | LINK | 0.586028 | 1.271388 | 2.316682 | — | — | — |
| basic_streambuf.test | LINK | 0.277819 | 0.595381 | 0.913391 | — | — | — |
| basic_streambuf_select.test | LINK | 0.279722 | 0.594945 | 0.886443 | — | — | — |
| basic_waitable_timer.test | LINK | 0.528324 | 1.174713 | 2.176810 | — | — | — |
| basic_waitable_timer_select.test | LINK | 0.541182 | 1.218594 | 2.196043 | — | — | — |
| basic_writable_pipe.test | LINK | 0.539809 | 1.142893 | 2.003773 | — | — | — |
| basic_writable_pipe_select.test | LINK | 0.574922 | 1.207161 | 2.451516 | — | — | — |
| bind_allocator.test | RUN | 0.868791 | 4.353121 | 4.796640 | 0.002628 | 0.002770 | 0.002473 |
| bind_allocator_select.test | RUN | 0.907702 | 4.419513 | 4.686363 | 0.001980 | 0.002535 | 0.002478 |
| bind_cancellation_slot.test | RUN | 0.888393 | 4.373516 | 4.709902 | 0.002078 | 0.001802 | 0.001629 |
| bind_cancellation_slot_select.test | RUN | 0.886816 | 4.390571 | 4.591598 | 0.001801 | 0.001718 | 0.001601 |
| bind_executor.test | RUN | 0.562190 | 2.999420 | 2.736635 | 0.002374 | 0.003148 | 0.002906 |
| bind_executor_select.test | RUN | 0.577817 | 3.289292 | 2.756645 | 0.002124 | 0.002812 | 0.002269 |
| bind_immediate_executor.test | RUN | 0.432503 | 2.699035 | 1.967936 | 0.001637 | 0.001734 | 0.001492 |
| bind_immediate_executor_select.test | RUN | 0.441067 | 2.549157 | 2.147335 | 0.001644 | 0.001558 | 0.001507 |
| buffer.test | RUN | 0.264381 | 1.062196 | 1.138291 | 0.001639 | 0.001532 | 0.001445 |
| buffer_select.test | RUN | 0.265279 | 1.038063 | 1.151492 | 0.001607 | 0.001458 | 0.001492 |
| buffer_registration.test | LINK | 0.215488 | 0.545263 | 0.666440 | — | — | — |
| buffer_registration_select.test | LINK | 0.220121 | 0.554827 | 0.681045 | — | — | — |
| buffered_read_stream.test | RUN | 0.935202 | 6.845128 | 7.407528 | 0.001970 | 0.002470 | 0.002765 |
| buffered_read_stream_select.test | RUN | 0.935374 | 7.102486 | 7.382378 | 0.002032 | 0.002586 | 0.002745 |
| buffered_stream.test | RUN | 1.697200 | 10.197429 | 11.075330 | 0.002877 | 0.002919 | 0.002618 |
| buffered_stream_select.test | RUN | 1.845842 | 10.234165 | 10.758654 | 0.002235 | 0.002848 | 0.002658 |
| buffered_write_stream.test | RUN | 1.660302 | 8.938447 | 9.692679 | 0.002543 | 0.002872 | 0.002940 |
| buffered_write_stream_select.test | RUN | 1.643666 | 9.101696 | 9.366248 | 0.003004 | 0.002955 | 0.002632 |
| buffers_iterator.test | RUN | 0.536180 | 0.914733 | 1.711452 | 0.001881 | 0.002162 | 0.002094 |
| buffers_iterator_select.test | RUN | 0.511538 | 0.903402 | 1.640391 | 0.002092 | 0.002128 | 0.002064 |
| cancel_after.test | RUN | 1.268971 | 7.027623 | 7.208456 | 0.004332 | 0.004569 | 0.004476 |
| cancel_after_select.test | RUN | 1.325217 | 6.992722 | 7.167666 | 0.004390 | 0.004484 | 0.003825 |
| cancel_at.test | RUN | 1.202001 | 5.809593 | 6.019570 | 0.003936 | 0.004106 | 0.003677 |
| cancel_at_select.test | RUN | 1.116165 | 5.598932 | 5.912135 | 0.004123 | 0.003810 | 0.003736 |
| cancellation_signal.test | LINK | 0.150417 | 0.312565 | 0.429114 | — | — | — |
| cancellation_signal_select.test | LINK | 0.155484 | 0.323783 | 0.432236 | — | — | — |
| cancellation_state.test | LINK | 0.193519 | 0.313058 | 0.430475 | — | — | — |
| cancellation_state_select.test | LINK | 0.251078 | 0.317380 | 0.423763 | — | — | — |
| cancellation_type.test | LINK | 0.182788 | 0.247241 | 0.328234 | — | — | — |
| cancellation_type_select.test | LINK | 0.194020 | 0.253271 | 0.337458 | — | — | — |
| co_composed.test | RUN | 0.189001 | 0.257472 | 0.381201 | 0.002090 | 0.001576 | 0.001939 |
| co_composed_select.test | RUN | 0.185425 | 0.252444 | 0.381244 | 0.001838 | 0.001412 | 0.001779 |
| co_spawn.test | LINK | 0.183883 | 0.249302 | 0.560254 | — | — | — |
| co_spawn_select.test | LINK | 0.187291 | 0.249897 | 0.569481 | — | — | — |
| completion_condition.test | LINK | 0.240440 | 0.391962 | 0.788096 | — | — | — |
| completion_condition_select.test | LINK | 0.241386 | 0.580596 | 0.757341 | — | — | — |
| compose.test | RUN | 1.079085 | 5.487429 | 5.959398 | 0.002475 | 0.002778 | 0.002562 |
| compose_select.test | RUN | 1.092282 | 5.343910 | 5.905760 | 0.002563 | 0.002428 | 0.002308 |
| composed.test | RUN | 1.056613 | 5.439734 | 5.844653 | 0.002242 | 0.002432 | 0.002190 |
| composed_select.test | RUN | 1.030554 | 5.246395 | 5.775926 | 0.002131 | 0.002199 | 0.002037 |
| config.test | RUN | 0.530818 | 3.628141 | 2.652057 | 0.002182 | 0.002391 | 0.002056 |
| config_select.test | RUN | 0.592253 | 3.679583 | 3.114412 | 0.002163 | 0.002118 | 0.002287 |
| connect.test | LINK | 1.742558 | 11.530848 | 11.937009 | — | — | — |
| connect_select.test | LINK | 1.752885 | 11.524977 | 12.003262 | — | — | — |
| connect_pipe.test | RUN | 0.942587 | 4.318610 | 4.598474 | 0.002149 | 0.002277 | 0.002335 |
| connect_pipe_select.test | RUN | 0.960204 | 4.517694 | 5.054522 | 0.002018 | 0.002370 | 0.002425 |
| consign.test | RUN | 0.839116 | 4.214048 | 4.432886 | 0.002290 | 0.002132 | 0.002421 |
| consign_select.test | RUN | 0.859627 | 4.313152 | 4.377272 | 0.002230 | 0.002308 | 0.001830 |
| coroutine.test | LINK | 0.195737 | 0.465951 | 0.627540 | — | — | — |
| coroutine_select.test | LINK | 0.194467 | 0.461233 | 0.650567 | — | — | — |
| deadline_timer.test | RUN | 1.190997 | 5.575282 | 6.185490 | 0.004008 | 0.003786 | 0.004040 |
| deadline_timer_select.test | RUN | 1.198693 | 5.501778 | 5.960633 | 0.003368 | 0.003676 | 0.003259 |
| deferred.test | RUN | 0.210034 | 0.424519 | 0.625351 | 0.002066 | 0.002202 | 0.001880 |
| deferred_select.test | RUN | 0.205191 | 0.442176 | 0.637312 | 0.002018 | 0.001943 | 0.002082 |
| detached.test | LINK | 0.234330 | 0.487411 | 0.725279 | — | — | — |
| detached_select.test | LINK | 0.239687 | 0.504085 | 0.714334 | — | — | — |
| disposition.test | RUN | 0.202868 | 1.109951 | 1.268197 | 0.001686 | 0.002154 | 0.001873 |
| disposition_select.test | RUN | 0.203284 | 1.117738 | 1.264916 | 0.001560 | 0.002199 | 0.002212 |
| error.test | RUN | 0.183563 | 1.059901 | 1.136298 | 0.001552 | 0.002266 | 0.001920 |
| error_select.test | RUN | 0.183079 | 1.055999 | 1.134817 | 0.001484 | 0.002169 | 0.002232 |
| file_base.test | LINK | 0.233239 | 0.893567 | 1.240789 | — | — | — |
| file_base_select.test | LINK | 0.233418 | 0.800775 | 1.158928 | — | — | — |
| fwd_first.test | LINK | 0.527220 | 1.271868 | 2.058599 | — | — | — |
| fwd_last.test | LINK | 0.528269 | 1.199496 | 2.024521 | — | — | — |
| generic_basic_endpoint.test | LINK | 0.203879 | 0.503651 | 0.775066 | — | — | — |
| generic_basic_endpoint_select.test | LINK | 0.204341 | 0.488057 | 0.752524 | — | — | — |
| generic_datagram_protocol.test | LINK | 0.810824 | 4.133217 | 3.852799 | — | — | — |
| generic_datagram_protocol_select.test | LINK | 0.800964 | 4.244566 | 3.846376 | — | — | — |
| generic_raw_protocol.test | LINK | 0.811324 | 4.170325 | 3.834207 | — | — | — |
| generic_raw_protocol_select.test | LINK | 0.799722 | 4.296562 | 3.786494 | — | — | — |
| generic_seq_packet_protocol.test | LINK | 0.710200 | 3.506362 | 3.268968 | — | — | — |
| generic_seq_packet_protocol_select.test | LINK | 0.703188 | 3.541172 | 3.351761 | — | — | — |
| generic_stream_protocol.test | LINK | 0.752509 | 3.803652 | 3.518063 | — | — | — |
| generic_stream_protocol_select.test | LINK | 0.744736 | 3.868082 | 3.601322 | — | — | — |
| high_resolution_timer.test | LINK | 0.332642 | 0.748541 | 1.191769 | — | — | — |
| high_resolution_timer_select.test | LINK | 0.336643 | 0.764587 | 1.250361 | — | — | — |
| immediate.test | LINK | 0.232677 | 0.560135 | 0.718866 | — | — | — |
| immediate_select.test | LINK | 0.234708 | 0.565995 | 0.722910 | — | — | — |
| inline_executor.test | RUN | 0.288776 | 0.875027 | 1.079368 | 0.001592 | 0.001626 | 0.001578 |
| inline_executor_select.test | RUN | 0.281572 | 0.862492 | 1.097140 | 0.001486 | 0.001642 | 0.001536 |
| inline_or_executor.test | RUN | 0.452274 | 2.472424 | 1.976559 | 0.001690 | 0.001610 | 0.001544 |
| inline_or_executor_select.test | RUN | 0.463496 | 2.558719 | 2.213062 | 0.001570 | 0.001609 | 0.001556 |
| io_context.test | RUN | 0.654666 | 3.727478 | 3.424023 | 0.002735 | 0.002847 | 0.002626 |
| io_context_select.test | RUN | 0.644468 | 3.704072 | 3.444634 | 0.002493 | 0.002511 | 0.002674 |
| io_context_strand.test | RUN | 0.631507 | 4.210862 | 3.855832 | 0.002592 | 0.003280 | 0.002989 |
| io_context_strand_select.test | RUN | 0.631403 | 4.305515 | 3.834571 | 0.002363 | 0.002558 | 0.003118 |
| ip_address.test | LINK | 0.239838 | 1.223956 | 1.692335 | — | — | — |
| ip_address_select.test | LINK | 0.238635 | 1.215114 | 1.645615 | — | — | — |
| ip_address_v4.test | LINK | 0.239282 | 1.297018 | 1.228201 | — | — | — |
| ip_address_v4_select.test | LINK | 0.238828 | 1.308072 | 1.117886 | — | — | — |
| ip_address_v6.test | LINK | 0.271562 | 1.311815 | 1.250388 | — | — | — |
| ip_address_v6_select.test | LINK | 0.272451 | 1.068627 | 1.234076 | — | — | — |
| ip_basic_endpoint.test | LINK | 0.208535 | 0.516526 | 0.797432 | — | — | — |
| ip_basic_endpoint_select.test | LINK | 0.213960 | 0.530678 | 0.807689 | — | — | — |
| ip_basic_resolver.test | LINK | 0.336860 | 0.756512 | 1.185062 | — | — | — |
| ip_basic_resolver_select.test | LINK | 0.339154 | 0.789434 | 1.213725 | — | — | — |
| ip_basic_resolver_entry.test | LINK | 0.117070 | 0.248575 | 0.340898 | — | — | — |
| ip_basic_resolver_entry_select.test | LINK | 0.118037 | 0.250837 | 0.350677 | — | — | — |
| ip_basic_resolver_iterator.test | LINK | 0.210329 | 0.522872 | 0.779262 | — | — | — |
| ip_basic_resolver_iterator_select.test | LINK | 0.209187 | 0.511169 | 0.796802 | — | — | — |
| ip_basic_resolver_query.test | LINK | 0.195184 | 0.494770 | 0.766602 | — | — | — |
| ip_basic_resolver_query_select.test | LINK | 0.202287 | 0.492242 | 0.775927 | — | — | — |
| ip_host_name.test | RUN | 0.214345 | 0.664683 | 0.872795 | 0.001574 | 0.001605 | 0.001473 |
| ip_host_name_select.test | RUN | 0.211751 | 0.647434 | 1.185775 | 0.001435 | 0.001536 | 0.002058 |
| ip_icmp.test | RUN | 0.985468 | 7.762118 | 8.524092 | 0.001666 | 0.002282 | 0.001758 |
| ip_icmp_select.test | RUN | 1.005747 | 7.892389 | 8.184267 | 0.001536 | 0.001948 | 0.002006 |
| ip_multicast.test | RUN | 0.593684 | 4.628990 | 5.106892 | 0.001752 | 0.002261 | 0.002396 |
| ip_multicast_select.test | RUN | 0.594375 | 4.574799 | 5.047442 | 0.001571 | 0.001969 | 0.002390 |
| ip_resolver_query_base.test | LINK | 0.136625 | 0.422135 | 0.573779 | — | — | — |
| ip_resolver_query_base_select.test | LINK | 0.136876 | 0.433518 | 0.592818 | — | — | — |
| ip_tcp.test | RUN | 1.472762 | 13.322318 | 13.063906 | 0.002338 | 0.003168 | 0.003377 |
| ip_tcp_select.test | RUN | 1.457416 | 13.838530 | 12.580755 | 0.002086 | 0.002842 | 0.003295 |
| ip_udp.test | RUN | 1.046560 | 9.490790 | 8.977508 | 0.002248 | 0.002416 | 0.002351 |
| ip_udp_select.test | RUN | 1.045961 | 9.784130 | 8.750050 | 0.001613 | 0.002310 | 0.002178 |
| ip_unicast.test | RUN | 0.846756 | 4.100045 | 4.420521 | 0.002328 | 0.002053 | 0.002223 |
| ip_unicast_select.test | RUN | 0.870638 | 4.240084 | 4.373776 | 0.002230 | 0.002439 | 0.002152 |
| ip_v6_only.test | RUN | 0.887537 | 4.373479 | 4.650427 | 0.002160 | 0.002222 | 0.002215 |
| ip_v6_only_select.test | RUN | 0.902083 | 4.483550 | 4.609961 | 0.001972 | 0.002389 | 0.001858 |
| is_read_buffered.test | RUN | 0.628055 | 1.441009 | 2.569245 | 0.001895 | 0.002170 | 0.001414 |
| is_read_buffered_select.test | RUN | 0.642295 | 1.521625 | 2.685134 | 0.001934 | 0.002238 | 0.002048 |
| is_write_buffered.test | RUN | 0.633036 | 1.458545 | 2.603519 | 0.001827 | 0.002370 | 0.001906 |
| is_write_buffered_select.test | RUN | 0.643041 | 1.434924 | 2.593642 | 0.001815 | 0.001910 | 0.001908 |
| local_basic_endpoint.test | LINK | 0.320409 | 0.803828 | 1.464556 | — | — | — |
| local_basic_endpoint_select.test | LINK | 0.325043 | 0.767684 | 1.455771 | — | — | — |
| local_connect_pair.test | LINK | 0.813149 | 4.259507 | 4.307348 | — | — | — |
| local_connect_pair_select.test | LINK | 0.827854 | 4.328946 | 4.291616 | — | — | — |
| local_datagram_protocol.test | LINK | 1.083987 | 5.541889 | 5.686361 | — | — | — |
| local_datagram_protocol_select.test | LINK | 1.108873 | 5.643463 | 5.546407 | — | — | — |
| local_seq_packet_protocol.test | LINK | 1.078085 | 5.430802 | 5.740991 | — | — | — |
| local_seq_packet_protocol_select.test | LINK | 1.093689 | 5.610922 | 5.739594 | — | — | — |
| local_stream_protocol.test | LINK | 1.024970 | 5.243911 | 5.447742 | — | — | — |
| local_stream_protocol_select.test | LINK | 1.052531 | 5.179980 | 5.448432 | — | — | — |
| placeholders.test | LINK | 0.205652 | 0.445194 | 0.639223 | — | — | — |
| placeholders_select.test | LINK | 0.207020 | 0.431128 | 0.636486 | — | — | — |
| posix_basic_descriptor.test | LINK | 0.539091 | 1.209406 | 1.973438 | — | — | — |
| posix_basic_descriptor_select.test | LINK | 0.568257 | 1.302806 | 2.468618 | — | — | — |
| posix_basic_stream_descriptor.test | LINK | 0.530996 | 1.197430 | 1.940792 | — | — | — |
| posix_basic_stream_descriptor_select.test | LINK | 0.581977 | 1.262555 | 2.466152 | — | — | — |
| posix_descriptor_base.test | LINK | 0.228671 | 0.451181 | 0.625573 | — | — | — |
| posix_descriptor_base_select.test | LINK | 0.238005 | 0.438855 | 0.620304 | — | — | — |
| posix_stream_descriptor.test | LINK | 1.043978 | 5.257892 | 5.327084 | — | — | — |
| posix_stream_descriptor_select.test | LINK | 1.086951 | 5.336863 | 5.614879 | — | — | — |
| prepend.test | RUN | 0.828002 | 4.318685 | 4.417644 | 0.002109 | 0.002184 | 0.002140 |
| prepend_select.test | RUN | 0.843249 | 4.411722 | 4.353914 | 0.002000 | 0.002066 | 0.002033 |
| random_access_file.test | LINK | 0.495921 | 1.057965 | 1.532533 | — | — | — |
| random_access_file_select.test | LINK | 0.515735 | 1.132251 | 2.056192 | — | — | — |
| read.test | RUN | 2.547436 | 26.563544 | 23.747079 | 0.003000 | 0.002988 | 0.002947 |
| read_select.test | RUN | 2.588505 | 26.268640 | 23.990117 | 0.002719 | 0.002859 | 0.002672 |
| read_at.test | RUN | 2.574170 | 36.946999 | 31.755888 | 0.003850 | 0.003660 | 0.003531 |
| read_at_select.test | RUN | 2.607982 | 36.793757 | 32.125168 | 0.003698 | 0.004109 | 0.003450 |
| read_until.test | RUN | 1.342567 | 10.485700 | 9.286424 | 0.002454 | 0.002338 | 0.002087 |
| read_until_select.test | RUN | 1.356654 | 10.598644 | 9.735771 | 0.002184 | 0.002713 | 0.002344 |
| readable_pipe.test | LINK | 0.854714 | 4.458416 | 4.146159 | — | — | — |
| readable_pipe_select.test | LINK | 0.868170 | 4.665936 | 4.682051 | — | — | — |
| recycling_allocator.test | RUN | 0.270205 | 0.670795 | 0.967627 | 0.002114 | 0.002031 | 0.002100 |
| recycling_allocator_select.test | RUN | 0.266189 | 0.675284 | 0.953240 | 0.002174 | 0.002082 | 0.002057 |
| redirect_disposition.test | LINK | 1.130691 | 6.095230 | 6.613652 | — | — | — |
| redirect_disposition_select.test | LINK | 1.109339 | 6.057934 | 6.574343 | — | — | — |
| redirect_error.test | LINK | 0.996192 | 5.139308 | 5.758922 | — | — | — |
| redirect_error_select.test | LINK | 0.998443 | 5.152381 | 5.628680 | — | — | — |
| registered_buffer.test | LINK | 0.268346 | 0.552481 | 0.849172 | — | — | — |
| registered_buffer_select.test | LINK | 0.274774 | 0.568262 | 0.861356 | — | — | — |
| signal_set.test | RUN | 0.811334 | 4.323017 | 4.018393 | 0.001958 | 0.002100 | 0.002138 |
| signal_set_select.test | RUN | 0.875752 | 4.550422 | 4.462558 | 0.002316 | 0.002298 | 0.002186 |
| signal_set_base.test | LINK | 0.223772 | 0.434419 | 0.589350 | — | — | — |
| signal_set_base_select.test | LINK | 0.232269 | 0.468107 | 0.586495 | — | — | — |
| socket_base.test | RUN | 1.040181 | 6.490001 | 6.067533 | 0.002412 | 0.002474 | 0.001883 |
| socket_base_select.test | RUN | 1.054762 | 6.170094 | 5.989883 | 0.002271 | 0.002543 | 0.002372 |
| spawn.test | RUN | 1.662742 | 10.338506 | 10.277759 | 0.002400 | 0.002612 | 0.002576 |
| spawn_select.test | RUN | 1.693158 | 10.368333 | 10.300956 | 0.002458 | 0.002487 | 0.002576 |
| static_thread_pool.test | RUN | 0.482353 | 1.039127 | 1.546468 | 0.001876 | 0.002176 | 0.001916 |
| static_thread_pool_select.test | RUN | 0.508264 | 1.134859 | 2.070979 | 0.002089 | 0.002129 | 0.002127 |
| steady_timer.test | LINK | 0.531248 | 1.202908 | 2.173209 | — | — | — |
| steady_timer_select.test | LINK | 0.544723 | 1.252405 | 2.217374 | — | — | — |
| strand.test | RUN | 1.092889 | 5.765617 | 6.157630 | 0.002922 | 0.003017 | 0.003184 |
| strand_select.test | RUN | 1.116299 | 5.810998 | 6.080526 | 0.002572 | 0.002844 | 0.002874 |
| stream_file.test | LINK | 0.518005 | 1.092303 | 1.587221 | — | — | — |
| stream_file_select.test | LINK | 0.518554 | 1.133894 | 2.115361 | — | — | — |
| streambuf.test | RUN | 0.285937 | 0.805720 | 1.064507 | 0.001510 | 0.001573 | 0.002091 |
| streambuf_select.test | RUN | 0.253996 | 0.660290 | 0.823789 | 0.001512 | 0.001646 | 0.001452 |
| system_timer.test | LINK | 0.648829 | 3.590198 | 3.640679 | — | — | — |
| system_timer_select.test | LINK | 0.650052 | 3.536266 | 3.352003 | — | — | — |
| system_context.test | LINK | 0.298684 | 0.670344 | 0.873263 | — | — | — |
| system_context_select.test | LINK | 0.313606 | 0.709050 | 1.098750 | — | — | — |
| system_executor.test | LINK | 0.412315 | 2.096707 | 1.584199 | — | — | — |
| system_executor_select.test | LINK | 0.408808 | 2.028577 | 1.755063 | — | — | — |
| this_coro.test | LINK | 0.122301 | 0.253523 | 0.341141 | — | — | — |
| this_coro_select.test | LINK | 0.120177 | 0.259668 | 0.341937 | — | — | — |
| thread_pool.test | RUN | 0.500102 | 4.037875 | 3.064828 | 0.003306 | 0.003757 | 0.003573 |
| thread_pool_select.test | RUN | 0.477612 | 3.840821 | 3.056305 | 0.003433 | 0.004214 | 0.003465 |
| time_traits.test | LINK | 0.263757 | 0.861656 | 1.323455 | — | — | — |
| time_traits_select.test | LINK | 0.267097 | 0.891030 | 1.283891 | — | — | — |
| ts_buffer.test | LINK | 0.256598 | 0.966626 | 1.294535 | — | — | — |
| ts_buffer_select.test | LINK | 0.250297 | 0.944444 | 1.306158 | — | — | — |
| ts_executor.test | LINK | 0.360518 | 1.297560 | 2.035276 | — | — | — |
| ts_executor_select.test | LINK | 0.366287 | 1.381411 | 2.488097 | — | — | — |
| ts_internet.test | LINK | 0.386167 | 1.425796 | 2.621716 | — | — | — |
| ts_internet_select.test | LINK | 0.399259 | 1.464435 | 2.705274 | — | — | — |
| ts_io_context.test | LINK | 0.310741 | 1.112655 | 1.484661 | — | — | — |
| ts_io_context_select.test | LINK | 0.324410 | 1.179913 | 2.062323 | — | — | — |
| ts_net.test | LINK | 0.462435 | 1.655066 | 3.190033 | — | — | — |
| ts_net_select.test | LINK | 0.461905 | 1.715385 | 3.306616 | — | — | — |
| ts_netfwd.test | LINK | 0.461461 | 1.675427 | 3.208124 | — | — | — |
| ts_netfwd_select.test | LINK | 0.465114 | 1.739844 | 3.279165 | — | — | — |
| ts_socket.test | LINK | 0.374571 | 1.339115 | 2.457918 | — | — | — |
| ts_socket_select.test | LINK | 0.391794 | 1.379209 | 2.522476 | — | — | — |
| ts_timer.test | LINK | 0.337147 | 1.177323 | 2.169662 | — | — | — |
| ts_timer_select.test | LINK | 0.345055 | 1.240213 | 2.209278 | — | — | — |
| use_awaitable.test | LINK | 0.153402 | 0.404320 | 0.611842 | — | — | — |
| use_awaitable_select.test | LINK | 0.181916 | 0.406313 | 0.614950 | — | — | — |
| wait_traits.test | LINK | 0.191076 | 0.392330 | 0.587076 | — | — | — |
| wait_traits_select.test | LINK | 0.181332 | 0.405926 | 0.597260 | — | — | — |
| windows_basic_object_handle.test | LINK | 0.183967 | 0.391812 | 0.560082 | — | — | — |
| windows_basic_object_handle_select.test | LINK | 0.184442 | 0.404421 | 0.613961 | — | — | — |
| windows_basic_overlapped_handle.test | LINK | 0.192220 | 0.412584 | 0.587575 | — | — | — |
| windows_basic_overlapped_handle_select.test | LINK | 0.190120 | 0.387320 | 0.557655 | — | — | — |
| windows_basic_random_access_handle.test | LINK | 0.184471 | 0.409747 | 0.580842 | — | — | — |
| windows_basic_random_access_handle_select.test | LINK | 0.189450 | 0.386424 | 0.602049 | — | — | — |
| windows_basic_stream_handle.test | LINK | 0.186018 | 0.420263 | 0.601440 | — | — | — |
| windows_basic_stream_handle_select.test | LINK | 0.189047 | 0.400590 | 0.567765 | — | — | — |
| windows_object_handle.test | LINK | 0.496664 | 1.081915 | 1.525046 | — | — | — |
| windows_object_handle_select.test | LINK | 0.507734 | 1.148173 | 1.998949 | — | — | — |
| windows_overlapped_ptr.test | LINK | 0.512948 | 1.148240 | 1.683996 | — | — | — |
| windows_overlapped_ptr_select.test | LINK | 0.551726 | 1.244691 | 2.209079 | — | — | — |
| windows_random_access_handle.test | LINK | 0.502626 | 1.086167 | 1.586064 | — | — | — |
| windows_random_access_handle_select.test | LINK | 0.519316 | 1.165398 | 2.046415 | — | — | — |
| windows_stream_handle.test | LINK | 0.510760 | 1.107025 | 1.556561 | — | — | — |
| windows_stream_handle_select.test | LINK | 0.506842 | 1.201757 | 2.022412 | — | — | — |
| writable_pipe.test | LINK | 0.874188 | 4.297701 | 4.466536 | — | — | — |
| writable_pipe_select.test | LINK | 0.905933 | 4.508971 | 4.750239 | — | — | — |
| write.test | RUN | 2.569576 | 22.490891 | 23.194770 | 0.002768 | 0.003004 | 0.002922 |
| write_select.test | RUN | 2.575134 | 22.608815 | 23.695970 | 0.002838 | 0.002955 | 0.003024 |
| write_at.test | RUN | 2.643516 | 32.054311 | 30.061807 | 0.003324 | 0.003462 | 0.003194 |
| write_at_select.test | RUN | 2.659411 | 32.457641 | 30.453014 | 0.003022 | 0.003408 | 0.003448 |
| any_executor.test | RUN | 1.051234 | 10.731963 | 10.020863 | 0.002867 | 0.002950 | 0.002512 |
| blocking.test | RUN | 2.759185 | 12.882114 | 20.428380 | 0.008956 | 0.007222 | 0.008857 |
| blocking_adaptation.test | RUN | 1.405811 | 5.688676 | 9.425402 | 0.004388 | 0.005141 | 0.004640 |
| context_as.test | RUN | 0.693394 | 4.065797 | 3.042476 | 0.002430 | 0.002078 | 0.002292 |
| executor.test | RUN | 0.192432 | 0.421501 | 0.630622 | 0.002162 | 0.002212 | 0.002133 |
| inline_exception_handling.test | RUN | 2.776338 | 12.229602 | 19.309721 | 0.008202 | 0.005947 | 0.005771 |
| invocable_archetype.test | RUN | 0.199497 | 0.423020 | 0.613973 | 0.002045 | 0.002162 | 0.001982 |
| mapping.test | RUN | 2.544090 | 11.973333 | 20.238763 | 0.006156 | 0.006254 | 0.006256 |
| outstanding_work.test | RUN | 1.300365 | 5.316149 | 9.062497 | 0.005311 | 0.004850 | 0.004369 |
| prefer_only.test | RUN | 0.395623 | 2.164612 | 2.066299 | 0.002184 | 0.002052 | 0.002170 |
| relationship.test | RUN | 0.887797 | 5.193938 | 8.428024 | 0.003321 | 0.004931 | 0.004752 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.991× | 0.998×, 0.984× | 0.999× |
| clang | 0.991× | 0.988×, 0.994× | 0.996× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1361 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43664060660).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| any_completion_executor.test | 3 | 0.002073s | 0.001959s | 0.001963s | byte equality observed |
| any_completion_executor_select.test | 4 | 0.002028s | 0.001983s | 0.002019s | byte equality observed |
| any_completion_handler.test | 6 | 0.001587s | 0.001560s | 0.001542s | byte equality observed |
| any_completion_handler_select.test | 8 | 0.001572s | 0.001554s | 0.001551s | byte equality observed |
| any_io_executor.test | 5 | 0.002043s | 0.001936s | 0.002001s | byte equality observed |
| any_io_executor_select.test | 7 | 0.001983s | 0.001967s | 0.001965s | byte equality observed |
| append.test | 8 | 0.001512s | 0.001512s | 0.001499s | byte equality observed |
| append_select.test | 7 | 0.001490s | 0.001452s | 0.001474s | byte equality observed |
| as_tuple.test | 7 | 0.001683s | 0.001631s | 0.001627s | byte equality observed |
| as_tuple_select.test | 7 | 0.001517s | 0.001513s | 0.001505s | byte equality observed |
| bind_allocator.test | 1 | 0.002022s | 0.001917s | 0.002005s | byte equality observed |
| bind_allocator_select.test | 1 | 0.001677s | 0.001674s | 0.001688s | byte equality observed |
| bind_cancellation_slot.test | 10 | 0.001390s | 0.001374s | 0.001377s | byte equality observed |
| bind_cancellation_slot_select.test | 10 | 0.001292s | 0.001289s | 0.001274s | byte equality observed |
| bind_executor.test | 1 | 0.001979s | 0.001896s | 0.002048s | byte equality observed |
| bind_executor_select.test | 1 | 0.002167s | 0.002172s | 0.002217s | byte equality observed |
| bind_immediate_executor.test | 10 | 0.001366s | 0.001341s | 0.001286s | byte equality observed |
| bind_immediate_executor_select.test | 10 | 0.001341s | 0.001429s | 0.001324s | byte equality observed |
| buffer.test | 10 | 0.001358s | 0.001273s | 0.001272s | byte equality observed |
| buffer_select.test | 10 | 0.001295s | 0.001263s | 0.001271s | byte equality observed |
| buffered_read_stream.test | 9 | 0.001690s | 0.001658s | 0.001707s | byte equality observed |
| buffered_read_stream_select.test | 9 | 0.001628s | 0.001603s | 0.001655s | byte equality observed |
| buffered_stream.test | 10 | 0.001642s | 0.001637s | 0.001715s | byte equality observed |
| buffered_stream_select.test | 9 | 0.001630s | 0.001691s | 0.001653s | byte equality observed |
| buffered_write_stream.test | 9 | 0.001689s | 0.001654s | 0.001727s | byte equality observed |
| buffered_write_stream_select.test | 9 | 0.001626s | 0.001698s | 0.001673s | byte equality observed |
| buffers_iterator.test | 9 | 0.001273s | 0.001228s | 0.001263s | byte equality observed |
| buffers_iterator_select.test | 10 | 0.001267s | 0.001195s | 0.001246s | byte equality observed |
| cancel_after.test | 1 | 0.003598s | 0.003436s | 0.003575s | byte equality observed |
| cancel_after_select.test | 1 | 0.003076s | 0.003011s | 0.003062s | byte equality observed |
| cancel_at.test | 1 | 0.003782s | 0.003760s | 0.003653s | byte equality observed |
| cancel_at_select.test | 1 | 0.003620s | 0.003516s | 0.003458s | byte equality observed |
| co_composed.test | 10 | 0.001320s | 0.001283s | 0.001276s | byte equality observed |
| co_composed_select.test | 10 | 0.001235s | 0.001242s | 0.001213s | byte equality observed |
| compose.test | 1 | 0.001965s | 0.001831s | 0.001970s | byte equality observed |
| compose_select.test | 1 | 0.001648s | 0.001625s | 0.001594s | byte equality observed |
| composed.test | 1 | 0.002193s | 0.002223s | 0.002182s | byte equality observed |
| composed_select.test | 1 | 0.001706s | 0.001736s | 0.001710s | byte equality observed |
| config.test | 8 | 0.001383s | 0.001351s | 0.001312s | byte equality observed |
| config_select.test | 10 | 0.001349s | 0.001329s | 0.001350s | byte equality observed |
| connect_pipe.test | 10 | 0.001400s | 0.001414s | 0.001421s | byte equality observed |
| connect_pipe_select.test | 10 | 0.001388s | 0.001454s | 0.001365s | byte equality observed |
| consign.test | 10 | 0.001369s | 0.001373s | 0.001348s | byte equality observed |
| consign_select.test | 10 | 0.001303s | 0.001298s | 0.001252s | byte equality observed |
| deadline_timer.test | 1 | 0.002740s | 0.002688s | 0.002756s | byte equality observed |
| deadline_timer_select.test | 1 | 0.002487s | 0.002517s | 0.002507s | byte equality observed |
| deferred.test | 10 | 0.001193s | 0.001195s | 0.001180s | byte equality observed |
| deferred_select.test | 10 | 0.001157s | 0.001154s | 0.001151s | byte equality observed |
| disposition.test | 10 | 0.001227s | 0.001229s | 0.001213s | byte equality observed |
| disposition_select.test | 10 | 0.001222s | 0.001229s | 0.001204s | byte equality observed |
| error.test | 10 | 0.001195s | 0.001189s | 0.001169s | byte equality observed |
| error_select.test | 10 | 0.001198s | 0.001189s | 0.001179s | byte equality observed |
| inline_executor.test | 10 | 0.001209s | 0.001206s | 0.001183s | byte equality observed |
| inline_executor_select.test | 10 | 0.001206s | 0.001196s | 0.001178s | byte equality observed |
| inline_or_executor.test | 10 | 0.001215s | 0.001202s | 0.001188s | byte equality observed |
| inline_or_executor_select.test | 10 | 0.001211s | 0.001217s | 0.001183s | byte equality observed |
| io_context.test | 1 | 0.002263s | 0.002223s | 0.002194s | byte equality observed |
| io_context_select.test | 1 | 0.002639s | 0.002521s | 0.002593s | byte equality observed |
| io_context_strand.test | 1 | 0.002628s | 0.002507s | 0.002587s | byte equality observed |
| io_context_strand_select.test | 1 | 0.002336s | 0.002288s | 0.002343s | byte equality observed |
| ip_host_name.test | 10 | 0.001197s | 0.001197s | 0.001194s | byte equality observed |
| ip_host_name_select.test | 10 | 0.001168s | 0.001164s | 0.001168s | byte equality observed |
| ip_icmp.test | 10 | 0.001210s | 0.001211s | 0.001178s | byte equality observed |
| ip_icmp_select.test | 10 | 0.001217s | 0.001202s | 0.001182s | byte equality observed |
| ip_multicast.test | 10 | 0.001297s | 0.001292s | 0.001282s | byte equality observed |
| ip_multicast_select.test | 10 | 0.001269s | 0.001255s | 0.001258s | byte equality observed |
| ip_tcp.test | 10 | 0.001790s | 0.001759s | 0.001776s | byte equality observed |
| ip_tcp_select.test | 10 | 0.001706s | 0.001670s | 0.001686s | byte equality observed |
| ip_udp.test | 10 | 0.001312s | 0.001293s | 0.001288s | byte equality observed |
| ip_udp_select.test | 10 | 0.001311s | 0.001333s | 0.001283s | byte equality observed |
| ip_unicast.test | 10 | 0.001261s | 0.001317s | 0.001240s | byte equality observed |
| ip_unicast_select.test | 10 | 0.001239s | 0.001364s | 0.001223s | byte equality observed |
| ip_v6_only.test | 10 | 0.001257s | 0.001390s | 0.001253s | byte equality observed |
| ip_v6_only_select.test | 10 | 0.001240s | 0.001363s | 0.001236s | byte equality observed |
| is_read_buffered.test | 10 | 0.001161s | 0.001318s | 0.001164s | byte equality observed |
| is_read_buffered_select.test | 9 | 0.001211s | 0.001282s | 0.001249s | byte equality observed |
| is_write_buffered.test | 10 | 0.001261s | 0.001276s | 0.001252s | byte equality observed |
| is_write_buffered_select.test | 10 | 0.001291s | 0.001249s | 0.001249s | byte equality observed |
| prepend.test | 10 | 0.001367s | 0.001366s | 0.001344s | byte equality observed |
| prepend_select.test | 10 | 0.001341s | 0.001319s | 0.001319s | byte equality observed |
| read.test | 10 | 0.001814s | 0.001778s | 0.001736s | byte equality observed |
| read_at.test | 9 | 0.002215s | 0.002239s | 0.002183s | byte equality observed |
| read_at_select.test | 9 | 0.002232s | 0.002333s | 0.002178s | byte equality observed |
| read_select.test | 10 | 0.001782s | 0.001814s | 0.001821s | byte equality observed |
| read_until.test | 10 | 0.001499s | 0.001510s | 0.001525s | byte equality observed |
| read_until_select.test | 10 | 0.001560s | 0.001457s | 0.001488s | byte equality observed |
| recycling_allocator.test | 10 | 0.001297s | 0.001259s | 0.001253s | byte equality observed |
| recycling_allocator_select.test | 10 | 0.001249s | 0.001301s | 0.001278s | byte equality observed |
| signal_set.test | 10 | 0.001285s | 0.001302s | 0.001265s | byte equality observed |
| signal_set_select.test | 10 | 0.001375s | 0.001301s | 0.001253s | byte equality observed |
| socket_base.test | 10 | 0.001432s | 0.001407s | 0.001463s | byte equality observed |
| socket_base_select.test | 10 | 0.001400s | 0.001374s | 0.001390s | byte equality observed |
| spawn.test | 10 | 0.001532s | 0.001502s | 0.001515s | byte equality observed |
| spawn_select.test | 10 | 0.001542s | 0.001515s | 0.001539s | byte equality observed |
| static_thread_pool.test | 10 | 0.001275s | 0.001267s | 0.001275s | byte equality observed |
| static_thread_pool_select.test | 10 | 0.001221s | 0.001214s | 0.001223s | byte equality observed |
| strand.test | 1 | 0.002435s | 0.002319s | 0.002423s | byte equality observed |
| strand_select.test | 1 | 0.001989s | 0.001964s | 0.001990s | byte equality observed |
| streambuf.test | 10 | 0.001299s | 0.001286s | 0.001283s | byte equality observed |
| streambuf_select.test | 10 | 0.001298s | 0.001337s | 0.001319s | byte equality observed |
| thread_pool.test | 8 | 0.002959s | 0.002972s | 0.002963s | byte equality observed |
| thread_pool_select.test | 8 | 0.002946s | 0.002887s | 0.002962s | byte equality observed |
| write.test | 10 | 0.001875s | 0.001842s | 0.001847s | byte equality observed |
| write_at.test | 10 | 0.002014s | 0.001999s | 0.001928s | byte equality observed |
| write_at_select.test | 10 | 0.002009s | 0.002043s | 0.001912s | byte equality observed |
| write_select.test | 10 | 0.001854s | 0.001816s | 0.001852s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43664060660).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
